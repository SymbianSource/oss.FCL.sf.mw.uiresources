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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0005b6bf };

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
0x0eb1,	// (0x0005c570) Screen

0x0ebd,	// (0x0005c57c) application_window

0x0f19,	// (0x0005c5d8) area_bottom_pane_ParamLimits

0x0f19,	// (0x0005c5d8) area_bottom_pane

0x0f72,	// (0x0005c631) area_top_pane_ParamLimits

0x0f72,	// (0x0005c631) area_top_pane

0x0fd6,	// (0x0005c695) call_video_uplink_pane_ParamLimits

0x0fd6,	// (0x0005c695) call_video_uplink_pane

0x1015,	// (0x0005c6d4) main_pane_ParamLimits

0x1015,	// (0x0005c6d4) main_pane

0xc8db,	// (0x00067f9a) context_pane

0x4524,	// (0x0005fbe3) navi_pane

0x454a,	// (0x0005fc09) popup_cale_events_window_ParamLimits

0x454a,	// (0x0005fc09) popup_cale_events_window

0xc8ee,	// (0x00067fad) popup_mup_playback_window

0x4562,	// (0x0005fc21) signal_pane

0xa84c,	// (0x00065f0b) main_browser_pane

0xaa41,	// (0x00066100) main_burst_pane

0x43a6,	// (0x0005fa65) main_calc_pane

0xc8c1,	// (0x00067f80) main_cale_day_pane

0x1774,	// (0x0005ce33) main_cale_month_pane

0xc8c1,	// (0x00067f80) main_cale_week_pane

0xaa41,	// (0x00066100) main_call_pane

0xa520,	// (0x00065bdf) main_call_poc_pane

0xaa41,	// (0x00066100) main_camera_pane

0xaa41,	// (0x00066100) main_chi_dic_pane

0xb224,	// (0x000668e3) main_clock_pane

0xa520,	// (0x00065bdf) main_fmradio_pane

0xaa41,	// (0x00066100) main_graph_messa_pane

0xa520,	// (0x00065bdf) main_help_pane

0xa84c,	// (0x00065f0b) main_im_pane

0xa77b,	// (0x00065e3a) main_image_pane_ParamLimits

0xa77b,	// (0x00065e3a) main_image_pane

0xa520,	// (0x00065bdf) main_location2_pane

0xaa41,	// (0x00066100) main_location_pane

0xa77b,	// (0x00065e3a) main_messa_pane

0xa520,	// (0x00065bdf) main_mp2_pane

0xaa41,	// (0x00066100) main_mp_pane

0xa520,	// (0x00065bdf) main_msg_pane

0xa520,	// (0x00065bdf) main_mup_eq_pane

0xa520,	// (0x00065bdf) main_mup_pane

0xa84c,	// (0x00065f0b) main_notes_pane

0xa520,	// (0x00065bdf) main_pec_pane

0xa520,	// (0x00065bdf) main_phob_pane

0xa520,	// (0x00065bdf) main_pinb_pane

0xa520,	// (0x00065bdf) main_postcard_pane

0xa520,	// (0x00065bdf) main_qdial_pane

0xaa41,	// (0x00066100) main_skin_pane

0xa520,	// (0x00065bdf) main_smil2_pane

0xaa41,	// (0x00066100) main_smil_pane

0xaa41,	// (0x00066100) main_video_pane

0xaa41,	// (0x00066100) main_video_tele_pane

0xa77b,	// (0x00065e3a) main_viewer_pane_ParamLimits

0xa77b,	// (0x00065e3a) main_viewer_pane

0xaa41,	// (0x00066100) main_vorec_pane

0x43f2,	// (0x0005fab1) popup_blid_sat_info_window_ParamLimits

0x43f2,	// (0x0005fab1) popup_blid_sat_info_window

0x4412,	// (0x0005fad1) popup_dyc_status_message_window_ParamLimits

0x4412,	// (0x0005fad1) popup_dyc_status_message_window

0x4420,	// (0x0005fadf) popup_grid_large_graphic_window_ParamLimits

0x4420,	// (0x0005fadf) popup_grid_large_graphic_window

0x44af,	// (0x0005fb6e) popup_loc_request_window_ParamLimits

0x44af,	// (0x0005fb6e) popup_loc_request_window

0x44fc,	// (0x0005fbbb) popup_wml_address_window_ParamLimits

0x44fc,	// (0x0005fbbb) popup_wml_address_window

0x427e,	// (0x0005f93d) call_muted_g1

0x3f3a,	// (0x0005f5f9) popup_call_audio_conf_window_ParamLimits

0x3f3a,	// (0x0005f5f9) popup_call_audio_conf_window

0x428e,	// (0x0005f94d) popup_call_audio_first_window_ParamLimits

0x428e,	// (0x0005f94d) popup_call_audio_first_window

0x42ce,	// (0x0005f98d) popup_call_audio_in_window_ParamLimits

0x42ce,	// (0x0005f98d) popup_call_audio_in_window

0x42f2,	// (0x0005f9b1) popup_call_audio_out_window_ParamLimits

0x42f2,	// (0x0005f9b1) popup_call_audio_out_window

0x4314,	// (0x0005f9d3) popup_call_audio_second_window_ParamLimits

0x4314,	// (0x0005f9d3) popup_call_audio_second_window

0x4344,	// (0x0005fa03) popup_call_audio_wait_window_ParamLimits

0x4344,	// (0x0005fa03) popup_call_audio_wait_window

0x4365,	// (0x0005fa24) popup_number_entry_window_ParamLimits

0x4365,	// (0x0005fa24) popup_number_entry_window

0x9b5c,	// (0x0006521b) bg_popup_call_pane_cp05_ParamLimits

0x9b5c,	// (0x0006521b) bg_popup_call_pane_cp05

0x9b7c,	// (0x0006523b) popup_number_entry_window_t1

0x9b8f,	// (0x0006524e) popup_number_entry_window_t2

0x9ba1,	// (0x00065260) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0006a789) popup_number_entry_window_t

0x9bb3,	// (0x00065272) text_title_cp2

0x9bc6,	// (0x00065285) bg_popup_call_pane_cp_ParamLimits

0x9bc6,	// (0x00065285) bg_popup_call_pane_cp

0x9bd4,	// (0x00065293) call_thumbnail_pane

0x9bdc,	// (0x0006529b) popup_call_audio_in_window_g1_ParamLimits

0x9bdc,	// (0x0006529b) popup_call_audio_in_window_g1

0x9be8,	// (0x000652a7) popup_call_audio_in_window_g2_ParamLimits

0x9be8,	// (0x000652a7) popup_call_audio_in_window_g2

0x9bf4,	// (0x000652b3) popup_call_audio_in_window_g3_ParamLimits

0x9bf4,	// (0x000652b3) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0006a792) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0006a792) popup_call_audio_in_window_g

0x9c00,	// (0x000652bf) popup_call_audio_in_window_t1_ParamLimits

0x9c00,	// (0x000652bf) popup_call_audio_in_window_t1

0x9c1c,	// (0x000652db) popup_call_audio_in_window_t2_ParamLimits

0x9c1c,	// (0x000652db) popup_call_audio_in_window_t2

0x9c38,	// (0x000652f7) popup_call_audio_in_window_t3_ParamLimits

0x9c38,	// (0x000652f7) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0006a799) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0006a799) popup_call_audio_in_window_t

0x9bc6,	// (0x00065285) bg_popup_call_pane_cp01_ParamLimits

0x9bc6,	// (0x00065285) bg_popup_call_pane_cp01

0x9bd4,	// (0x00065293) call_thumbnail_pane_cp02

0x9c4b,	// (0x0006530a) call_type_pane_cp022

0x9c53,	// (0x00065312) popup_call_audio_out_window_g1_ParamLimits

0x9c53,	// (0x00065312) popup_call_audio_out_window_g1

0xa1fa,	// (0x000658b9) popup_call_audio_out_window_g2_ParamLimits

0xa1fa,	// (0x000658b9) popup_call_audio_out_window_g2

0xa206,	// (0x000658c5) popup_call_audio_out_window_g3_ParamLimits

0xa206,	// (0x000658c5) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0006a7a0) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0006a7a0) popup_call_audio_out_window_g

0xa218,	// (0x000658d7) popup_call_audio_out_window_t1_ParamLimits

0xa218,	// (0x000658d7) popup_call_audio_out_window_t1

0xa230,	// (0x000658ef) popup_call_audio_out_window_t2_ParamLimits

0xa230,	// (0x000658ef) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0006a7a7) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0006a7a7) popup_call_audio_out_window_t

0xa261,	// (0x00065920) bg_popup_call_pane_ParamLimits

0xa261,	// (0x00065920) bg_popup_call_pane

0x1231,	// (0x0005c8f0) call_thumbnail_pane_cp_ParamLimits

0x1231,	// (0x0005c8f0) call_thumbnail_pane_cp

0xa2e5,	// (0x000659a4) call_type_pane_cp01_ParamLimits

0xa2e5,	// (0x000659a4) call_type_pane_cp01

0xa329,	// (0x000659e8) popup_call_audio_first_window_g1_ParamLimits

0xa329,	// (0x000659e8) popup_call_audio_first_window_g1

0xa375,	// (0x00065a34) popup_call_audio_first_window_g2_ParamLimits

0xa375,	// (0x00065a34) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0006a7ac) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0006a7ac) popup_call_audio_first_window_g

0xa3b9,	// (0x00065a78) popup_call_audio_first_window_t1_ParamLimits

0xa3b9,	// (0x00065a78) popup_call_audio_first_window_t1

0xa465,	// (0x00065b24) popup_call_audio_first_window_t4_ParamLimits

0xa465,	// (0x00065b24) popup_call_audio_first_window_t4

0xa4f1,	// (0x00065bb0) popup_call_audio_first_window_t5_ParamLimits

0xa4f1,	// (0x00065bb0) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0006a7b1) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0006a7b1) popup_call_audio_first_window_t

0xa520,	// (0x00065bdf) bg_popup_call_pane_cp02

0xa52a,	// (0x00065be9) call_type_pane_cp023

0xa532,	// (0x00065bf1) popup_call_audio_wait_window_g1

0xa53a,	// (0x00065bf9) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0006a7b8) popup_call_audio_wait_window_g

0xa542,	// (0x00065c01) popup_call_audio_wait_window_t3

0xa550,	// (0x00065c0f) bg_popup_call_pane_cp03_ParamLimits

0xa550,	// (0x00065c0f) bg_popup_call_pane_cp03

0xa5b0,	// (0x00065c6f) call_thumbnail_pane_cp011_ParamLimits

0xa5b0,	// (0x00065c6f) call_thumbnail_pane_cp011

0xa5bc,	// (0x00065c7b) call_type_pane_cp034_ParamLimits

0xa5bc,	// (0x00065c7b) call_type_pane_cp034

0xa5f8,	// (0x00065cb7) popup_call_audio_second_window_g1_ParamLimits

0xa5f8,	// (0x00065cb7) popup_call_audio_second_window_g1

0xa634,	// (0x00065cf3) popup_call_audio_second_window_g2_ParamLimits

0xa634,	// (0x00065cf3) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0006a7bd) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0006a7bd) popup_call_audio_second_window_g

0xa670,	// (0x00065d2f) popup_call_audio_second_window_t1_ParamLimits

0xa670,	// (0x00065d2f) popup_call_audio_second_window_t1

0xa6f1,	// (0x00065db0) popup_call_audio_second_window_t2_ParamLimits

0xa6f1,	// (0x00065db0) popup_call_audio_second_window_t2

0xa727,	// (0x00065de6) popup_call_audio_second_window_t3_ParamLimits

0xa727,	// (0x00065de6) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0006a7c2) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0006a7c2) popup_call_audio_second_window_t

0xa520,	// (0x00065bdf) bg_popup_call_pane_cp04

0xa75d,	// (0x00065e1c) list_conf_pane

0xa765,	// (0x00065e24) popup_call_audio_conf_window_t1

0xa773,	// (0x00065e32) call_thumbnail_pane_g1

0xa77b,	// (0x00065e3a) bg_pinb_pane_ParamLimits

0xa77b,	// (0x00065e3a) bg_pinb_pane

0xa789,	// (0x00065e48) find_pinb_pane

0xa792,	// (0x00065e51) listscroll_pinb_pane_ParamLimits

0xa792,	// (0x00065e51) listscroll_pinb_pane

0xa7a1,	// (0x00065e60) pinb_bg_pane_g1

0x1255,	// (0x0005c914) pinb_bg_pane_g2

0x1261,	// (0x0005c920) pinb_bg_pane_g3

0x126d,	// (0x0005c92c) pinb_bg_pane_g4

0x1279,	// (0x0005c938) pinb_bg_pane_g5

0x1285,	// (0x0005c944) pinb_bg_pane_g6

0x1290,	// (0x0005c94f) pinb_bg_pane_g7

0x129b,	// (0x0005c95a) pinb_bg_pane_g8

0x12a6,	// (0x0005c965) pinb_bg_pane_g9

0x12b0,	// (0x0005c96f) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0006a7c9) pinb_bg_pane_g

0x12cd,	// (0x0005c98c) grid_pinb_pane

0x12d8,	// (0x0005c997) list_pinb_pane

0x12e3,	// (0x0005c9a2) scroll_pane_cp01_ParamLimits

0x12e3,	// (0x0005c9a2) scroll_pane_cp01

0xa7ab,	// (0x00065e6a) find_pinb_pane_g1_ParamLimits

0xa7ab,	// (0x00065e6a) find_pinb_pane_g1

0xa7c3,	// (0x00065e82) find_pinb_pane_t1

0xa7d5,	// (0x00065e94) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0006a7e3) find_pinb_pane_t

0xa7ea,	// (0x00065ea9) input_focus_pane_cp01_ParamLimits

0xa7ea,	// (0x00065ea9) input_focus_pane_cp01

0x12f5,	// (0x0005c9b4) cell_pinb_pane_ParamLimits

0x12f5,	// (0x0005c9b4) cell_pinb_pane

0x1320,	// (0x0005c9df) cell_pinb_pane_g1_ParamLimits

0x1320,	// (0x0005c9df) cell_pinb_pane_g1

0xa7f6,	// (0x00065eb5) cell_pinb_pane_g2_ParamLimits

0xa7f6,	// (0x00065eb5) cell_pinb_pane_g2

0xa802,	// (0x00065ec1) cell_pinb_pane_g3_ParamLimits

0xa802,	// (0x00065ec1) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0006a7e8) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0006a7e8) cell_pinb_pane_g

0xa520,	// (0x00065bdf) grid_highlight_pane_cp01

0x1335,	// (0x0005c9f4) list_pinb_item_pane_ParamLimits

0x1335,	// (0x0005c9f4) list_pinb_item_pane

0xa520,	// (0x00065bdf) list_highlight_pane_cp02

0x135e,	// (0x0005ca1d) list_pinb_item_pane_g1_ParamLimits

0x135e,	// (0x0005ca1d) list_pinb_item_pane_g1

0x136b,	// (0x0005ca2a) list_pinb_item_pane_g2_ParamLimits

0x136b,	// (0x0005ca2a) list_pinb_item_pane_g2

0x1377,	// (0x0005ca36) list_pinb_item_pane_g3_ParamLimits

0x1377,	// (0x0005ca36) list_pinb_item_pane_g3

0x1388,	// (0x0005ca47) list_pinb_item_pane_g4_ParamLimits

0x1388,	// (0x0005ca47) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0006a7ef) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0006a7ef) list_pinb_item_pane_g

0x1394,	// (0x0005ca53) list_pinb_item_pane_t1_ParamLimits

0x1394,	// (0x0005ca53) list_pinb_item_pane_t1

0x13c5,	// (0x0005ca84) calc_display_pane

0x13e3,	// (0x0005caa2) calc_paper_pane

0x13ff,	// (0x0005cabe) grid_calc_pane

0xa520,	// (0x00065bdf) bg_list_pane_cp01

0x142b,	// (0x0005caea) clock_g1

0x1433,	// (0x0005caf2) clock_g2

0x0001,

0xf139,	// (0x0006a7f8) clock_g

0x143d,	// (0x0005cafc) clock_t1_ParamLimits

0x143d,	// (0x0005cafc) clock_t1

0x1452,	// (0x0005cb11) clock_t2_ParamLimits

0x1452,	// (0x0005cb11) clock_t2

0x1464,	// (0x0005cb23) clock_t3_ParamLimits

0x1464,	// (0x0005cb23) clock_t3

0x1476,	// (0x0005cb35) clock_t4_ParamLimits

0x1476,	// (0x0005cb35) clock_t4

0x1488,	// (0x0005cb47) clock_t5_ParamLimits

0x1488,	// (0x0005cb47) clock_t5

0x149d,	// (0x0005cb5c) clock_t6_ParamLimits

0x149d,	// (0x0005cb5c) clock_t6

0x14af,	// (0x0005cb6e) clock_t7_ParamLimits

0x14af,	// (0x0005cb6e) clock_t7

0x14c1,	// (0x0005cb80) clock_t8_ParamLimits

0x14c1,	// (0x0005cb80) clock_t8

0x14d7,	// (0x0005cb96) clock_t9_ParamLimits

0x14d7,	// (0x0005cb96) clock_t9

0x0008,

0xf13e,	// (0x0006a7fd) clock_t_ParamLimits

0xf13e,	// (0x0006a7fd) clock_t

0xa80e,	// (0x00065ecd) popup_clock_analogue_window_cp02

0xa80e,	// (0x00065ecd) popup_clock_digital_window_cp01

0xa816,	// (0x00065ed5) listscroll_help_pane

0xa520,	// (0x00065bdf) phob_pre_status_pane

0xa820,	// (0x00065edf) grid_qdial_pane

0xa77b,	// (0x00065e3a) listscroll_mce_pane

0xa77b,	// (0x00065e3a) bg_notes_pane

0xa82a,	// (0x00065ee9) list_notes_pane

0x14ed,	// (0x0005cbac) scroll_pane_cp06

0xa838,	// (0x00065ef7) bg_calc_paper_pane

0x14fc,	// (0x0005cbbb) list_calc_pane

0xa84c,	// (0x00065f0b) bg_calc_display_pane

0x1516,	// (0x0005cbd5) calc_display_pane_t1

0x152b,	// (0x0005cbea) calc_display_pane_t2

0x1540,	// (0x0005cbff) calc_display_pane_t3

0x0002,

0xf151,	// (0x0006a810) calc_display_pane_t

0x1552,	// (0x0005cc11) cell_calc_pane_ParamLimits

0x1552,	// (0x0005cc11) cell_calc_pane

0xa858,	// (0x00065f17) bg_calc_paper_pane_g1

0xa864,	// (0x00065f23) bg_calc_paper_pane_g2

0xa870,	// (0x00065f2f) bg_calc_paper_pane_g3

0xa87c,	// (0x00065f3b) bg_calc_paper_pane_g4

0xa888,	// (0x00065f47) bg_calc_paper_pane_g5

0x157f,	// (0x0005cc3e) bg_calc_paper_pane_g6

0x1590,	// (0x0005cc4f) bg_calc_paper_pane_g7

0x15a1,	// (0x0005cc60) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0006a817) bg_calc_paper_pane_g

0x15b2,	// (0x0005cc71) calc_bg_paper_pane_g9

0x15c3,	// (0x0005cc82) list_calc_item_pane_ParamLimits

0x15c3,	// (0x0005cc82) list_calc_item_pane

0xa894,	// (0x00065f53) list_calc_item_pane_g1

0x15f3,	// (0x0005ccb2) list_calc_item_pane_t1_ParamLimits

0x15f3,	// (0x0005ccb2) list_calc_item_pane_t1

0x1605,	// (0x0005ccc4) list_calc_item_pane_t2_ParamLimits

0x1605,	// (0x0005ccc4) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0006a828) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0006a828) list_calc_item_pane_t

0xa8a1,	// (0x00065f60) cell_calc_pane_g1

0xa8ab,	// (0x00065f6a) grid_highlight_pane_cp02

0xa8cd,	// (0x00065f8c) bg_calc_display_pane_g1

0x1635,	// (0x0005ccf4) bg_calc_display_pane_g2

0xa8d6,	// (0x00065f95) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0006a832) bg_calc_display_pane_g

0x163f,	// (0x0005ccfe) cell_qdial_pane_ParamLimits

0x163f,	// (0x0005ccfe) cell_qdial_pane

0x1653,	// (0x0005cd12) cell_qdial_pane_g1_ParamLimits

0x1653,	// (0x0005cd12) cell_qdial_pane_g1

0x1660,	// (0x0005cd1f) cell_qdial_pane_g2_ParamLimits

0x1660,	// (0x0005cd1f) cell_qdial_pane_g2

0xa8df,	// (0x00065f9e) cell_qdial_pane_g3_ParamLimits

0xa8df,	// (0x00065f9e) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0006a839) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0006a839) cell_qdial_pane_g

0x167d,	// (0x0005cd3c) cell_qdial_pane_t1_ParamLimits

0x167d,	// (0x0005cd3c) cell_qdial_pane_t1

0x1695,	// (0x0005cd54) cell_qdial_pane_t2_ParamLimits

0x1695,	// (0x0005cd54) cell_qdial_pane_t2

0x16a8,	// (0x0005cd67) cell_qdial_pane_t3_ParamLimits

0x16a8,	// (0x0005cd67) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0006a842) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0006a842) cell_qdial_pane_t

0xa520,	// (0x00065bdf) grid_highlight_pane_cp04

0xa8eb,	// (0x00065faa) thumbnail_qdial_pane_ParamLimits

0xa8eb,	// (0x00065faa) thumbnail_qdial_pane

0xa947,	// (0x00066006) list_help_pane

0xa950,	// (0x0006600f) scroll_pane_cp02

0x16bb,	// (0x0005cd7a) help_list_pane_t1_ParamLimits

0x16bb,	// (0x0005cd7a) help_list_pane_t1

0x16f2,	// (0x0005cdb1) bg_notes_pane_g2

0x16fa,	// (0x0005cdb9) bg_notes_pane_g3

0x1702,	// (0x0005cdc1) notes_bg_pane_g1

0x170a,	// (0x0005cdc9) notes_bg_pane_g4

0x1712,	// (0x0005cdd1) notes_bg_pane_g5

0x171a,	// (0x0005cdd9) notes_bg_pane_g6

0x1722,	// (0x0005cde1) notes_bg_pane_g7

0x172a,	// (0x0005cde9) notes_bg_pane_g8

0x1732,	// (0x0005cdf1) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0006a860) notes_bg_pane_g

0x173a,	// (0x0005cdf9) list_notes_text_pane_ParamLimits

0x173a,	// (0x0005cdf9) list_notes_text_pane

0xa977,	// (0x00066036) list_notes_text_pane_g1

0x1766,	// (0x0005ce25) list_notes_text_pane_t1

0x1774,	// (0x0005ce33) listscroll_cale_week_pane

0x1799,	// (0x0005ce58) bg_cale_heading_pane

0xa99a,	// (0x00066059) bg_cale_pane_cp01

0x17bb,	// (0x0005ce7a) cale_week_corner_pane

0x17d5,	// (0x0005ce94) cale_week_day_heading_pane

0x17f7,	// (0x0005ceb6) cale_week_scroll_pane_g1

0x1814,	// (0x0005ced3) cale_week_scroll_pane_g2

0x1827,	// (0x0005cee6) cale_week_scroll_pane_g3

0x183a,	// (0x0005cef9) cale_week_scroll_pane_g4

0x184d,	// (0x0005cf0c) cale_week_scroll_pane_g5

0x1860,	// (0x0005cf1f) cale_week_scroll_pane_g6

0x1873,	// (0x0005cf32) cale_week_scroll_pane_g7

0x1888,	// (0x0005cf47) cale_week_scroll_pane_g8

0x189d,	// (0x0005cf5c) cale_week_scroll_pane_g9

0x18b0,	// (0x0005cf6f) cale_week_scroll_pane_g10

0x18c3,	// (0x0005cf82) cale_week_scroll_pane_g11

0x18d6,	// (0x0005cf95) cale_week_scroll_pane_g12

0x18ed,	// (0x0005cfac) cale_week_scroll_pane_g13

0x1908,	// (0x0005cfc7) cale_week_scroll_pane_g14

0x1923,	// (0x0005cfe2) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0006a86f) cale_week_scroll_pane_g

0x1953,	// (0x0005d012) cale_week_time_pane

0x1968,	// (0x0005d027) grid_cale_week_pane

0xa9c9,	// (0x00066088) scroll_pane_cp08

0x1987,	// (0x0005d046) cell_cale_week_pane_ParamLimits

0x1987,	// (0x0005d046) cell_cale_week_pane

0x19e9,	// (0x0005d0a8) cale_week_day_heading_pane_t1

0x1a04,	// (0x0005d0c3) cale_week_day_heading_pane_t2

0x1a1f,	// (0x0005d0de) cale_week_day_heading_pane_t3

0x1a3a,	// (0x0005d0f9) cale_week_day_heading_pane_t4

0x1a55,	// (0x0005d114) cale_week_day_heading_pane_t5

0x1a70,	// (0x0005d12f) cale_week_day_heading_pane_t6

0x1a8b,	// (0x0005d14a) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0006a890) cale_week_day_heading_pane_t

0xa9e6,	// (0x000660a5) bg_cale_side_pane

0x1aa6,	// (0x0005d165) cale_week_time_pane_t1

0x1ac0,	// (0x0005d17f) cale_week_time_pane_t2

0x1ada,	// (0x0005d199) cale_week_time_pane_t3

0x1af4,	// (0x0005d1b3) cale_week_time_pane_t4

0x1b0e,	// (0x0005d1cd) cale_week_time_pane_t5

0x1b28,	// (0x0005d1e7) cale_week_time_pane_t6

0x1b48,	// (0x0005d207) cale_week_time_pane_t7

0x1b6a,	// (0x0005d229) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0006a89f) cale_week_time_pane_t

0x1b8e,	// (0x0005d24d) cell_cale_week_pane_g2

0x1bb2,	// (0x0005d271) cell_cale_week_pane_g3_ParamLimits

0x1bb2,	// (0x0005d271) cell_cale_week_pane_g3

0xa9f4,	// (0x000660b3) grid_highlight_pane_cp07

0xa9fc,	// (0x000660bb) listscroll_gms_pane

0xaa06,	// (0x000660c5) grid_gms_pane

0xaa0f,	// (0x000660ce) listscroll_gms_pane_g1

0xaa17,	// (0x000660d6) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0006a8b0) listscroll_gms_pane_g

0x1bca,	// (0x0005d289) scroll_pane_cp010

0x1bd5,	// (0x0005d294) cell_gms_pane_ParamLimits

0x1bd5,	// (0x0005d294) cell_gms_pane

0x1be5,	// (0x0005d2a4) cell_gms_pane_g1

0xaa1f,	// (0x000660de) cell_gms_pane_g2

0xaa27,	// (0x000660e6) cell_gms_pane_g3

0xaa30,	// (0x000660ef) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0006a8b5) cell_gms_pane_g

0xaa39,	// (0x000660f8) grid_highlight_pane_cp09

0x4226,	// (0x0005f8e5) phob_pre_status_pane_g1

0x422e,	// (0x0005f8ed) phob_pre_status_pane_g2

0x4236,	// (0x0005f8f5) phob_pre_status_pane_g3

0x423e,	// (0x0005f8fd) phob_pre_status_pane_g4

0x0004,

0xf4c7,	// (0x0006ab86) phob_pre_status_pane_g

0x424e,	// (0x0005f90d) phob_pre_status_pane_t1

0x425e,	// (0x0005f91d) phob_pre_status_pane_t2

0x426e,	// (0x0005f92d) phob_pre_status_pane_t3

0x0002,

0xf4d2,	// (0x0006ab91) phob_pre_status_pane_t

0xaa41,	// (0x00066100) bg_list_pane_cp05

0x1bf5,	// (0x0005d2b4) grid_vorec_pane

0x1bff,	// (0x0005d2be) vorec_t1

0x1c0d,	// (0x0005d2cc) vorec_t2

0x1c1b,	// (0x0005d2da) vorec_t3

0x1c29,	// (0x0005d2e8) vorec_t4

0x9b2c,	// (0x000651eb) vorec_t5

0x9b3a,	// (0x000651f9) vorec_t6

0x0004,

0xf1ff,	// (0x0006a8be) vorec_t

0x9b48,	// (0x00065207) wait_bar_pane_cp01

0x1c45,	// (0x0005d304) cell_vorec_pane_ParamLimits

0x1c45,	// (0x0005d304) cell_vorec_pane

0x1c58,	// (0x0005d317) cell_vorec_pane_g1

0xa520,	// (0x00065bdf) grid_highlight_pane_cp05

0x1c72,	// (0x0005d331) cams_zoom_pane

0x1c7e,	// (0x0005d33d) image_vga_pane

0x1c8d,	// (0x0005d34c) main_camera_pane_g1

0x1c9b,	// (0x0005d35a) main_camera_pane_g2

0x1ca7,	// (0x0005d366) main_camera_pane_g3

0x1cb3,	// (0x0005d372) main_camera_pane_g4

0x1cbf,	// (0x0005d37e) main_camera_pane_g5

0x1ccb,	// (0x0005d38a) main_camera_pane_g6

0x1cd7,	// (0x0005d396) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0006a8c9) main_camera_pane_g

0x1ce3,	// (0x0005d3a2) main_camera_pane_t1

0x1cf5,	// (0x0005d3b4) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0006a8da) main_camera_pane_t

0x1d16,	// (0x0005d3d5) cams_zoom_pane_cp_ParamLimits

0x1d16,	// (0x0005d3d5) cams_zoom_pane_cp

0x1d3a,	// (0x0005d3f9) image_cif_pane_ParamLimits

0x1d3a,	// (0x0005d3f9) image_cif_pane

0x1d58,	// (0x0005d417) image_subqcif_pane

0x1d60,	// (0x0005d41f) main_video_pane_g1_ParamLimits

0x1d60,	// (0x0005d41f) main_video_pane_g1

0x1d80,	// (0x0005d43f) main_video_pane_g2_ParamLimits

0x1d80,	// (0x0005d43f) main_video_pane_g2

0x1db0,	// (0x0005d46f) main_video_pane_g3_ParamLimits

0x1db0,	// (0x0005d46f) main_video_pane_g3

0x1dd9,	// (0x0005d498) main_video_pane_g4_ParamLimits

0x1dd9,	// (0x0005d498) main_video_pane_g4

0x1e02,	// (0x0005d4c1) main_video_pane_g5_ParamLimits

0x1e02,	// (0x0005d4c1) main_video_pane_g5

0xaa55,	// (0x00066114) main_video_pane_g6_ParamLimits

0xaa55,	// (0x00066114) main_video_pane_g6

0x0006,

0xf220,	// (0x0006a8df) main_video_pane_g_ParamLimits

0xf220,	// (0x0006a8df) main_video_pane_g

0x1e24,	// (0x0005d4e3) main_video_pane_t1_ParamLimits

0x1e24,	// (0x0005d4e3) main_video_pane_t1

0xaa6f,	// (0x0006612e) cams_zoom_pane_g1

0xaa78,	// (0x00066137) cams_zoom_pane_g2

0xaa81,	// (0x00066140) cams_zoom_pane_g3

0xaa8a,	// (0x00066149) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0006a8ee) cams_zoom_pane_g

0x1e6e,	// (0x0005d52d) grid_cams_pane

0x1e7c,	// (0x0005d53b) linegrid_cams_pane

0x1e8a,	// (0x0005d549) cell_cams_pane_ParamLimits

0x1e8a,	// (0x0005d549) cell_cams_pane

0xaa93,	// (0x00066152) cams_burst_image_pane

0xaa9b,	// (0x0006615a) cell_cams_pane_g1

0xa520,	// (0x00065bdf) grid_highlight_pane_cp03

0xa8a1,	// (0x00065f60) mp_bg_pane_g1

0xa520,	// (0x00065bdf) bg_list_pane_cp03

0xc7e6,	// (0x00067ea5) bg_mp_pane

0xc7ee,	// (0x00067ead) grid_mp_pane

0xc7f6,	// (0x00067eb5) media_player_g1

0xc7fe,	// (0x00067ebd) media_player_t1

0xc80c,	// (0x00067ecb) media_player_t2

0xc81a,	// (0x00067ed9) media_player_t3

0xc828,	// (0x00067ee7) media_player_t4

0xc836,	// (0x00067ef5) media_player_t5

0xc844,	// (0x00067f03) media_player_t6

0xc852,	// (0x00067f11) media_player_t7

0x0006,

0x04ce,	// (0x0005bb8d) media_player_t

0xc860,	// (0x00067f1f) wait_bar_pane_cp02

0xf4b3,	// (0x0006ab72) main_usb_pane_t

0x421d,	// (0x0005f8dc) cell_mp_pane

0xa8a1,	// (0x00065f60) cell_mp_pane_g1

0xa520,	// (0x00065bdf) grid_highlight_pane_cp06

0xaaa3,	// (0x00066162) grid_skin_colour_pane

0xaaab,	// (0x0006616a) list_highlight_pane_cp03

0x1fb1,	// (0x0005d670) skin_g1

0xaab3,	// (0x00066172) skin_t1

0xaac2,	// (0x00066181) skin_t2

0x0001,

0xf264,	// (0x0006a923) skin_t

0x1fbb,	// (0x0005d67a) cell_skin_colour_pane_ParamLimits

0x1fbb,	// (0x0005d67a) cell_skin_colour_pane

0xaad0,	// (0x0006618f) cell_skin_colour_pane_g1

0x203f,	// (0x0005d6fe) call_video_g1_ParamLimits

0x203f,	// (0x0005d6fe) call_video_g1

0x204f,	// (0x0005d70e) call_video_g2_ParamLimits

0x204f,	// (0x0005d70e) call_video_g2

0x0001,

0xf269,	// (0x0006a928) call_video_g_ParamLimits

0xf269,	// (0x0006a928) call_video_g

0x20a9,	// (0x0005d768) call_video_uplink_pane_cp1_ParamLimits

0x20a9,	// (0x0005d768) call_video_uplink_pane_cp1

0xaae2,	// (0x000661a1) call_video_uplink_pane_cp2

0x2175,	// (0x0005d834) video_down_crop_pane_ParamLimits

0x2175,	// (0x0005d834) video_down_crop_pane

0x2267,	// (0x0005d926) video_down_pane_ParamLimits

0x2267,	// (0x0005d926) video_down_pane

0xaaea,	// (0x000661a9) video_down_subqcif_pane_ParamLimits

0xaaea,	// (0x000661a9) video_down_subqcif_pane

0xab02,	// (0x000661c1) video_down_subqcif_pane_cp_ParamLimits

0xab02,	// (0x000661c1) video_down_subqcif_pane_cp

0xab28,	// (0x000661e7) im_reading_pane_ParamLimits

0xab28,	// (0x000661e7) im_reading_pane

0x2387,	// (0x0005da46) im_writing_pane_ParamLimits

0x2387,	// (0x0005da46) im_writing_pane

0x23a5,	// (0x0005da64) im_reading_pane_t1

0xab42,	// (0x00066201) list_im_pane

0xab53,	// (0x00066212) scroll_pane_cp07

0x23fd,	// (0x0005dabc) im_writing_pane_t1_ParamLimits

0x23fd,	// (0x0005dabc) im_writing_pane_t1

0xab6c,	// (0x0006622b) im_writing_pane_t2_ParamLimits

0xab6c,	// (0x0006622b) im_writing_pane_t2

0x0001,

0xf273,	// (0x0006a932) im_writing_pane_t_ParamLimits

0xf273,	// (0x0006a932) im_writing_pane_t

0xa520,	// (0x00065bdf) input_focus_pane_cp04

0xa520,	// (0x00065bdf) input_focus_pane_cp05

0x240f,	// (0x0005dace) list_im_single_pane_ParamLimits

0x240f,	// (0x0005dace) list_im_single_pane

0x2436,	// (0x0005daf5) list_single_im_pane_t1

0x41e1,	// (0x0005f8a0) blid_accuracy_pane

0x41e9,	// (0x0005f8a8) blid_compass_pane

0x41f3,	// (0x0005f8b2) main_location_t1

0x4201,	// (0x0005f8c0) main_location_t2

0x420f,	// (0x0005f8ce) main_location_t3

0x0002,

0xf4c0,	// (0x0006ab7f) main_location_t

0xa520,	// (0x00065bdf) aid_levels_location

0xa8a1,	// (0x00065f60) blid_accuracy_pane_g1

0xa8a1,	// (0x00065f60) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0006a994) blid_accuracy_pane_g

0xabb4,	// (0x00066273) wml_content_pane

0xabf2,	// (0x000662b1) wml_button_pane_ParamLimits

0xabf2,	// (0x000662b1) wml_button_pane

0x2445,	// (0x0005db04) wml_list_single_large_pane_ParamLimits

0x2445,	// (0x0005db04) wml_list_single_large_pane

0x2470,	// (0x0005db2f) wml_list_single_medium_pane_ParamLimits

0x2470,	// (0x0005db2f) wml_list_single_medium_pane

0x24a2,	// (0x0005db61) wml_list_single_small_pane_ParamLimits

0x24a2,	// (0x0005db61) wml_list_single_small_pane

0xac06,	// (0x000662c5) wml_selection_box_pane_ParamLimits

0xac06,	// (0x000662c5) wml_selection_box_pane

0xac19,	// (0x000662d8) wml_list_single_pane_t1

0xac28,	// (0x000662e7) wml_list_single_medium_pane_t1

0xac37,	// (0x000662f6) wml_list_single_large_pane_t1

0xac46,	// (0x00066305) input_focus_pane_cp02_ParamLimits

0xac46,	// (0x00066305) input_focus_pane_cp02

0xac59,	// (0x00066318) wml_selection_box_pane_g1

0xac62,	// (0x00066321) wml_selection_box_pane_t1_ParamLimits

0xac62,	// (0x00066321) wml_selection_box_pane_t1

0xa77b,	// (0x00065e3a) bg_wml_button_pane_ParamLimits

0xa77b,	// (0x00065e3a) bg_wml_button_pane

0xac7a,	// (0x00066339) wml_button_pane_g1

0xac82,	// (0x00066341) wml_button_pane_t1

0xac7a,	// (0x00066339) wml_button_bg_pane_g1

0xac92,	// (0x00066351) wml_button_bg_pane_g2

0xac9a,	// (0x00066359) wml_button_bg_pane_g3

0xaca2,	// (0x00066361) wml_button_bg_pane_g4

0xacaa,	// (0x00066369) wml_button_bg_pane_g5

0xacb2,	// (0x00066371) wml_button_bg_pane_g6

0xacba,	// (0x00066379) wml_button_bg_pane_g7

0xacc2,	// (0x00066381) wml_button_bg_pane_g8

0xacca,	// (0x00066389) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0006a937) wml_button_bg_pane_g

0x24df,	// (0x0005db9e) bg_list_pane_cp02

0xacd2,	// (0x00066391) mce_header_pane_ParamLimits

0xacd2,	// (0x00066391) mce_header_pane

0xace8,	// (0x000663a7) mce_icon_pane

0xace8,	// (0x000663a7) mce_image_pane

0xacf1,	// (0x000663b0) mce_text_pane_ParamLimits

0xacf1,	// (0x000663b0) mce_text_pane

0x24e9,	// (0x0005dba8) scroll_pane_cp03

0xabea,	// (0x000662a9) scroll_pane_cp04

0xad04,	// (0x000663c3) scroll_pane_cp05_ParamLimits

0xad04,	// (0x000663c3) scroll_pane_cp05

0x24f3,	// (0x0005dbb2) mce_header_field_pane_ParamLimits

0x24f3,	// (0x0005dbb2) mce_header_field_pane

0x2513,	// (0x0005dbd2) mce_header_field_pane_2_ParamLimits

0x2513,	// (0x0005dbd2) mce_header_field_pane_2

0x2529,	// (0x0005dbe8) mce_header_field_pane_3

0x2531,	// (0x0005dbf0) list_single_mce_message_pane_ParamLimits

0x2531,	// (0x0005dbf0) list_single_mce_message_pane

0x255f,	// (0x0005dc1e) list_single_mce_smart_pane_ParamLimits

0x255f,	// (0x0005dc1e) list_single_mce_smart_pane

0xad10,	// (0x000663cf) input_focus_pane_cp03

0xad19,	// (0x000663d8) list_header_data_pane

0x2598,	// (0x0005dc57) mce_header_field_pane_t1

0x25a6,	// (0x0005dc65) list_single_mce_header_pane_ParamLimits

0x25a6,	// (0x0005dc65) list_single_mce_header_pane

0xad21,	// (0x000663e0) list_single_mce_header_pane_t1

0xad30,	// (0x000663ef) list_single_mce_message_pane_g1

0xad38,	// (0x000663f7) list_single_mce_message_pane_t1

0x25fc,	// (0x0005dcbb) bg_cale_heading_pane_cp01_ParamLimits

0x25fc,	// (0x0005dcbb) bg_cale_heading_pane_cp01

0xad46,	// (0x00066405) bg_cale_pane_cp02_ParamLimits

0xad46,	// (0x00066405) bg_cale_pane_cp02

0x264a,	// (0x0005dd09) cale_month_corner_pane

0x2669,	// (0x0005dd28) cale_month_day_heading_pane_ParamLimits

0x2669,	// (0x0005dd28) cale_month_day_heading_pane

0x26cf,	// (0x0005dd8e) cale_month_pane_g1_ParamLimits

0x26cf,	// (0x0005dd8e) cale_month_pane_g1

0x2712,	// (0x0005ddd1) cale_month_pane_g2_ParamLimits

0x2712,	// (0x0005ddd1) cale_month_pane_g2

0x274c,	// (0x0005de0b) cale_month_pane_g3_ParamLimits

0x274c,	// (0x0005de0b) cale_month_pane_g3

0x279c,	// (0x0005de5b) cale_month_pane_g4_ParamLimits

0x279c,	// (0x0005de5b) cale_month_pane_g4

0x27ec,	// (0x0005deab) cale_month_pane_g5_ParamLimits

0x27ec,	// (0x0005deab) cale_month_pane_g5

0x283c,	// (0x0005defb) cale_month_pane_g6_ParamLimits

0x283c,	// (0x0005defb) cale_month_pane_g6

0x288c,	// (0x0005df4b) cale_month_pane_g7_ParamLimits

0x288c,	// (0x0005df4b) cale_month_pane_g7

0x28f4,	// (0x0005dfb3) cale_month_pane_g8_ParamLimits

0x28f4,	// (0x0005dfb3) cale_month_pane_g8

0x295c,	// (0x0005e01b) cale_month_pane_g9_ParamLimits

0x295c,	// (0x0005e01b) cale_month_pane_g9

0x29ba,	// (0x0005e079) cale_month_pane_g10_ParamLimits

0x29ba,	// (0x0005e079) cale_month_pane_g10

0x2a18,	// (0x0005e0d7) cale_month_pane_g11_ParamLimits

0x2a18,	// (0x0005e0d7) cale_month_pane_g11

0x2a6c,	// (0x0005e12b) cale_month_pane_g12_ParamLimits

0x2a6c,	// (0x0005e12b) cale_month_pane_g12

0x2ac2,	// (0x0005e181) cale_month_pane_g13_ParamLimits

0x2ac2,	// (0x0005e181) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0006a94a) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0006a94a) cale_month_pane_g

0x2b18,	// (0x0005e1d7) cale_month_week_pane

0x2b3c,	// (0x0005e1fb) grid_cale_month_pane_ParamLimits

0x2b3c,	// (0x0005e1fb) grid_cale_month_pane

0x2b99,	// (0x0005e258) cale_month_day_heading_pane_t1

0x2c1f,	// (0x0005e2de) cale_month_day_heading_pane_t2

0x2c98,	// (0x0005e357) cale_month_day_heading_pane_t3

0x2d11,	// (0x0005e3d0) cale_month_day_heading_pane_t4

0x2d8a,	// (0x0005e449) cale_month_day_heading_pane_t5

0x2e03,	// (0x0005e4c2) cale_month_day_heading_pane_t6

0x2e7c,	// (0x0005e53b) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0006a965) cale_month_day_heading_pane_t

0xa9e6,	// (0x000660a5) bg_cale_side_pane_cp01

0x2f0d,	// (0x0005e5cc) cale_month_week_pane_t1

0x2f26,	// (0x0005e5e5) cale_month_week_pane_t2

0x2f3f,	// (0x0005e5fe) cale_month_week_pane_t3

0x2f58,	// (0x0005e617) cale_month_week_pane_t4

0x2f73,	// (0x0005e632) cale_month_week_pane_t5

0x2f94,	// (0x0005e653) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0006a974) cale_month_week_pane_t

0x2fb5,	// (0x0005e674) cell_cale_month_pane_ParamLimits

0x2fb5,	// (0x0005e674) cell_cale_month_pane

0x3105,	// (0x0005e7c4) cell_cale_month_pane_g1

0x3111,	// (0x0005e7d0) cell_cale_month_pane_t1_ParamLimits

0x3111,	// (0x0005e7d0) cell_cale_month_pane_t1

0xa9f4,	// (0x000660b3) grid_highlight_pane_cp08

0xa8a1,	// (0x00065f60) main_smil_g1

0x313d,	// (0x0005e7fc) smil_status_pane

0xad85,	// (0x00066444) smil_text_pane

0xc6c6,	// (0x00067d85) bg_popup_call3_rect_pane_g8

0xc6ce,	// (0x00067d8d) bg_popup_call3_rect_pane_g9

0x0008,

0xf49b,	// (0x0006ab5a) bg_popup_call3_rect_pane_g

0xc955,	// (0x00068014) smil_status_volume_pane_g1

0xad8f,	// (0x0006644e) smil_status_pane_t1

0x4618,	// (0x0005fcd7) volume_smil_pane

0xada6,	// (0x00066465) list_smil_text_pane

0x3150,	// (0x0005e80f) scroll_pane_cp011

0x315b,	// (0x0005e81a) smil_text_list_pane_t1_ParamLimits

0x315b,	// (0x0005e81a) smil_text_list_pane_t1

0x31e8,	// (0x0005e8a7) aid_volume_smil_ParamLimits

0x31e8,	// (0x0005e8a7) aid_volume_smil

0xa8a1,	// (0x00065f60) smil_volume_pane_g1

0xa8a1,	// (0x00065f60) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0006a994) smil_volume_pane_g

0x1774,	// (0x0005ce33) listscroll_cale_day_pane

0xadb0,	// (0x0006646f) bg_cale_pane

0xadc8,	// (0x00066487) list_cale_pane

0xadeb,	// (0x000664aa) scroll_pane_cp09

0xadfc,	// (0x000664bb) cale_bg_pane_g1

0xae04,	// (0x000664c3) cale_bg_pane_g2

0xae0c,	// (0x000664cb) cale_bg_pane_g3

0xae14,	// (0x000664d3) cale_bg_pane_g4

0xae1c,	// (0x000664db) cale_bg_pane_g5

0xae24,	// (0x000664e3) cale_bg_pane_g6

0xae2c,	// (0x000664eb) cale_bg_pane_g7

0xae34,	// (0x000664f3) cale_bg_pane_g8

0xae3c,	// (0x000664fb) cale_bg_pane_g9

0x0008,

0x01ca,	// (0x0005b889) cale_bg_pane_g

0x3212,	// (0x0005e8d1) list_cale_time_pane_ParamLimits

0x3212,	// (0x0005e8d1) list_cale_time_pane

0xae44,	// (0x00066503) list_cale_time_pane_g1_ParamLimits

0xae44,	// (0x00066503) list_cale_time_pane_g1

0xae50,	// (0x0006650f) list_cale_time_pane_g2_ParamLimits

0xae50,	// (0x0006650f) list_cale_time_pane_g2

0x323a,	// (0x0005e8f9) list_cale_time_pane_g3_ParamLimits

0x323a,	// (0x0005e8f9) list_cale_time_pane_g3

0x3248,	// (0x0005e907) list_cale_time_pane_g4_ParamLimits

0x3248,	// (0x0005e907) list_cale_time_pane_g4

0x3256,	// (0x0005e915) list_cale_time_pane_g5_ParamLimits

0x3256,	// (0x0005e915) list_cale_time_pane_g5

0x0005,

0xf2da,	// (0x0006a999) list_cale_time_pane_g_ParamLimits

0xf2da,	// (0x0006a999) list_cale_time_pane_g

0xae6a,	// (0x00066529) list_cale_time_pane_t1_ParamLimits

0xae6a,	// (0x00066529) list_cale_time_pane_t1

0xae92,	// (0x00066551) list_cale_time_pane_t2_ParamLimits

0xae92,	// (0x00066551) list_cale_time_pane_t2

0x361f,	// (0x0005ecde) aid_blid_cardinal_pane

0x3661,	// (0x0005ed20) compass_pane_t4

0xaeba,	// (0x00066579) list_cale_time_pane_t4_ParamLimits

0xaeba,	// (0x00066579) list_cale_time_pane_t4

0x366f,	// (0x0005ed2e) compass_pane_t5

0x367f,	// (0x0005ed3e) compass_pane_t6

0x368d,	// (0x0005ed4c) compass_pane_t7

0xb33e,	// (0x000669fd) navi_pane_cc_t1

0xb529,	// (0x00066be8) aid_phob_thumbnail_center_pane

0x3ce2,	// (0x0005f3a1) main_postcard_pane_g4_ParamLimits

0x0002,

0x01ea,	// (0x0005b8a9) list_cale_time_pane_t_ParamLimits

0x01ea,	// (0x0005b8a9) list_cale_time_pane_t

0x9bc6,	// (0x00065285) bg_popup_window_pane_cp02_ParamLimits

0x9bc6,	// (0x00065285) bg_popup_window_pane_cp02

0xaee2,	// (0x000665a1) heading_pane_cp01_ParamLimits

0xaee2,	// (0x000665a1) heading_pane_cp01

0xaeee,	// (0x000665ad) loc_req_pane_ParamLimits

0xaeee,	// (0x000665ad) loc_req_pane

0xaefe,	// (0x000665bd) loc_type_pane_ParamLimits

0xaefe,	// (0x000665bd) loc_type_pane

0xaf10,	// (0x000665cf) loc_type_pane_t1_ParamLimits

0xaf10,	// (0x000665cf) loc_type_pane_t1

0xaf22,	// (0x000665e1) loc_type_pane_t2_ParamLimits

0xaf22,	// (0x000665e1) loc_type_pane_t2

0xaf34,	// (0x000665f3) loc_type_pane_t3_ParamLimits

0xaf34,	// (0x000665f3) loc_type_pane_t3

0x0002,

0x01f1,	// (0x0005b8b0) loc_type_pane_t_ParamLimits

0x01f1,	// (0x0005b8b0) loc_type_pane_t

0xaf46,	// (0x00066605) list_loc_req_pane

0xaf50,	// (0x0006660f) scroll_pane_cp012

0x3264,	// (0x0005e923) list_single_loc_request_popup_menu_pane_ParamLimits

0x3264,	// (0x0005e923) list_single_loc_request_popup_menu_pane

0xaf5b,	// (0x0006661a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf5b,	// (0x0006661a) list_single_loc_request_popup_menu_pane_g1

0xaf67,	// (0x00066626) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf67,	// (0x00066626) list_single_loc_request_popup_menu_pane_g2

0x0001,

0x01f8,	// (0x0005b8b7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0x01f8,	// (0x0005b8b7) list_single_loc_request_popup_menu_pane_g

0xaf73,	// (0x00066632) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf73,	// (0x00066632) list_single_loc_request_popup_menu_pane_t1

0x327d,	// (0x0005e93c) bg_popup_window_pane_cp03_ParamLimits

0x327d,	// (0x0005e93c) bg_popup_window_pane_cp03

0x328b,	// (0x0005e94a) heading_loc_req_pane_ParamLimits

0x328b,	// (0x0005e94a) heading_loc_req_pane

0x3297,	// (0x0005e956) popup_dyc_status_message_window_g1_ParamLimits

0x3297,	// (0x0005e956) popup_dyc_status_message_window_g1

0x32a3,	// (0x0005e962) popup_dyc_status_message_window_t1_ParamLimits

0x32a3,	// (0x0005e962) popup_dyc_status_message_window_t1

0x32b5,	// (0x0005e974) popup_dyc_status_message_window_t2_ParamLimits

0x32b5,	// (0x0005e974) popup_dyc_status_message_window_t2

0x32c7,	// (0x0005e986) popup_dyc_status_message_window_t3_ParamLimits

0x32c7,	// (0x0005e986) popup_dyc_status_message_window_t3

0x0002,

0xf2e7,	// (0x0006a9a6) popup_dyc_status_message_window_t_ParamLimits

0xf2e7,	// (0x0006a9a6) popup_dyc_status_message_window_t

0xa520,	// (0x00065bdf) bg_heading_pane_cp01

0xaf89,	// (0x00066648) heading_loc_req_pane_g1

0xaf91,	// (0x00066650) heading_loc_req_pane_g2

0xafa5,	// (0x00066664) heading_loc_req_pane_g3

0x0002,

0xf2ee,	// (0x0006a9ad) heading_loc_req_pane_g

0xafad,	// (0x0006666c) heading_loc_req_pane_t1

0xafbc,	// (0x0006667b) bg_popup_sub_pane_cp01_ParamLimits

0xafbc,	// (0x0006667b) bg_popup_sub_pane_cp01

0xafca,	// (0x00066689) popup_cale_events_window_g1_ParamLimits

0xafca,	// (0x00066689) popup_cale_events_window_g1

0xafea,	// (0x000666a9) popup_cale_events_window_g2_ParamLimits

0xafea,	// (0x000666a9) popup_cale_events_window_g2

0x0001,

0x0238,	// (0x0005b8f7) popup_cale_events_window_g_ParamLimits

0x0238,	// (0x0005b8f7) popup_cale_events_window_g

0xb00a,	// (0x000666c9) popup_cale_events_window_t1_ParamLimits

0xb00a,	// (0x000666c9) popup_cale_events_window_t1

0xb01c,	// (0x000666db) popup_cale_events_window_t2_ParamLimits

0xb01c,	// (0x000666db) popup_cale_events_window_t2

0xb05a,	// (0x00066719) popup_cale_events_window_t3_ParamLimits

0xb05a,	// (0x00066719) popup_cale_events_window_t3

0xb094,	// (0x00066753) popup_cale_events_window_t4_ParamLimits

0xb094,	// (0x00066753) popup_cale_events_window_t4

0x0003,

0x023d,	// (0x0005b8fc) popup_cale_events_window_t_ParamLimits

0x023d,	// (0x0005b8fc) popup_cale_events_window_t

0x33c2,	// (0x0005ea81) call_type_pane

0xb512,	// (0x00066bd1) popup_call_status_window_g1

0x33ce,	// (0x0005ea8d) popup_call_status_window_g2

0x33da,	// (0x0005ea99) popup_call_status_window_g3

0x0002,

0xf322,	// (0x0006a9e1) popup_call_status_window_g

0xb0ca,	// (0x00066789) call_type_pane_g1

0xb0d3,	// (0x00066792) call_type_pane_g2

0x0001,

0x024d,	// (0x0005b90c) call_type_pane_g

0xa520,	// (0x00065bdf) bg_popup_sub_pane_cp02

0xb0dc,	// (0x0006679b) listscroll_popup_wml_pane

0xb0e4,	// (0x000667a3) list_wml_pane

0xb0ee,	// (0x000667ad) scroll_pane_cp013

0xb0f9,	// (0x000667b8) list_single_graphic_popup_wml_pane_ParamLimits

0xb0f9,	// (0x000667b8) list_single_graphic_popup_wml_pane

0xa8a1,	// (0x00065f60) list_single_graphic_popup_wml_pane_g1

0xb10d,	// (0x000667cc) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf329,	// (0x0006a9e8) list_single_graphic_popup_wml_pane_g

0xb115,	// (0x000667d4) list_single_graphic_popup_wml_pane_t1

0xb12b,	// (0x000667ea) aid_call_pane

0xa773,	// (0x00065e32) popup_clock_analogue_window_g1

0xa773,	// (0x00065e32) popup_clock_analogue_window_g2

0x33e6,	// (0x0005eaa5) popup_clock_analogue_window_g3

0x33e6,	// (0x0005eaa5) popup_clock_analogue_window_g4

0xa8a1,	// (0x00065f60) popup_clock_analogue_window_g5

0x0004,

0xf32e,	// (0x0006a9ed) popup_clock_analogue_window_g

0x33ee,	// (0x0005eaad) popup_clock_analogue_window_t1

0x33fc,	// (0x0005eabb) clock_digital_number_pane_ParamLimits

0x33fc,	// (0x0005eabb) clock_digital_number_pane

0x3408,	// (0x0005eac7) clock_digital_number_pane_cp02_ParamLimits

0x3408,	// (0x0005eac7) clock_digital_number_pane_cp02

0x3414,	// (0x0005ead3) clock_digital_number_pane_cp03_ParamLimits

0x3414,	// (0x0005ead3) clock_digital_number_pane_cp03

0x3420,	// (0x0005eadf) clock_digital_number_pane_cp04_ParamLimits

0x3420,	// (0x0005eadf) clock_digital_number_pane_cp04

0x342c,	// (0x0005eaeb) clock_digital_separator_pane_ParamLimits

0x342c,	// (0x0005eaeb) clock_digital_separator_pane

0x3438,	// (0x0005eaf7) popup_clock_digital_window_t1

0xa8a1,	// (0x00065f60) clock_digital_number_pane_g1

0xa8a1,	// (0x00065f60) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0006a994) clock_digital_number_pane_g

0xa8a1,	// (0x00065f60) clock_digital_separator_pane_g1

0xa8a1,	// (0x00065f60) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0006a994) clock_digital_separator_pane_g

0xa520,	// (0x00065bdf) bg_popup_window_pane_cp04

0xb133,	// (0x000667f2) heading_pane_cp03

0xb13b,	// (0x000667fa) listscroll_popup_gms_pane

0xb143,	// (0x00066802) grid_large_graphic_popup_pane

0xb14d,	// (0x0006680c) listscroll_popup_gms_pane_g1

0xb155,	// (0x00066814) listscroll_popup_gms_pane_g2

0x0001,

0x0262,	// (0x0005b921) listscroll_popup_gms_pane_g

0xabea,	// (0x000662a9) scroll_pane_cp014

0x3455,	// (0x0005eb14) cell_large_graphic_popup_pane_ParamLimits

0x3455,	// (0x0005eb14) cell_large_graphic_popup_pane

0x346d,	// (0x0005eb2c) cell_large_graphic_popup_pane_g1_ParamLimits

0x346d,	// (0x0005eb2c) cell_large_graphic_popup_pane_g1

0xb15d,	// (0x0006681c) cell_large_graphic_popup_pane_g2_ParamLimits

0xb15d,	// (0x0006681c) cell_large_graphic_popup_pane_g2

0xb169,	// (0x00066828) cell_large_graphic_popup_pane_g3_ParamLimits

0xb169,	// (0x00066828) cell_large_graphic_popup_pane_g3

0xb176,	// (0x00066835) cell_large_graphic_popup_pane_g4_ParamLimits

0xb176,	// (0x00066835) cell_large_graphic_popup_pane_g4

0x0003,

0xf339,	// (0x0006a9f8) cell_large_graphic_popup_pane_g_ParamLimits

0xf339,	// (0x0006a9f8) cell_large_graphic_popup_pane_g

0xb186,	// (0x00066845) grid_highlight_pane_cp010

0xa8a1,	// (0x00065f60) bg_popup_call_pane_g1

0xb190,	// (0x0006684f) list_single_graphic_popup_conf_pane_ParamLimits

0xb190,	// (0x0006684f) list_single_graphic_popup_conf_pane

0xb1a3,	// (0x00066862) list_highlight_pane_cp01

0xb1ac,	// (0x0006686b) list_single_graphic_popup_conf_pane_g1

0xb1b4,	// (0x00066873) list_single_graphic_popup_conf_pane_g2

0x0001,

0x0270,	// (0x0005b92f) list_single_graphic_popup_conf_pane_g

0xb1bc,	// (0x0006687b) list_single_graphic_popup_conf_pane_t1

0xb1ca,	// (0x00066889) linegrid_cams_pane_g1

0x3479,	// (0x0005eb38) linegrid_cams_pane_g2

0xaa27,	// (0x000660e6) linegrid_cams_pane_g3

0xb1d3,	// (0x00066892) linegrid_cams_pane_g4

0x3482,	// (0x0005eb41) linegrid_cams_pane_g5

0x348b,	// (0x0005eb4a) linegrid_cams_pane_g6

0xaa30,	// (0x000660ef) linegrid_cams_pane_g7

0x0006,

0xf342,	// (0x0006aa01) linegrid_cams_pane_g

0xb1dc,	// (0x0006689b) popup_clock_analogue_window

0xb1dc,	// (0x0006689b) popup_clock_digital_window

0xa520,	// (0x00065bdf) popup_phob_thumbnail_window

0xa8a1,	// (0x00065f60) call_video_uplink_pane_g1

0xb1e5,	// (0x000668a4) call_video_uplink_pane_g2

0x0001,

0xf351,	// (0x0006aa10) call_video_uplink_pane_g

0xb1ed,	// (0x000668ac) video_uplink_pane

0xb1f5,	// (0x000668b4) mce_image_pane_g1

0x3494,	// (0x0005eb53) mce_image_pane_g2

0x349c,	// (0x0005eb5b) mce_image_pane_g3

0x34a4,	// (0x0005eb63) mce_image_pane_g4

0x34ac,	// (0x0005eb6b) mce_image_pane_g5

0x0004,

0xf356,	// (0x0006aa15) mce_image_pane_g

0xb1ff,	// (0x000668be) control_top_pane_stacon_cp01_ParamLimits

0xb1ff,	// (0x000668be) control_top_pane_stacon_cp01

0xb213,	// (0x000668d2) uni_indicator_pane_stacon_cp01_ParamLimits

0xb213,	// (0x000668d2) uni_indicator_pane_stacon_cp01

0xb224,	// (0x000668e3) bg_popup_sub_pane_cp03

0x34b4,	// (0x0005eb73) chi_dic_find_pane

0x34bc,	// (0x0005eb7b) listscroll_chi_dic_pane

0x34c5,	// (0x0005eb84) main_pane_chidic_g1

0x34d8,	// (0x0005eb97) chi_dic_find_pane_t1

0xb22e,	// (0x000668ed) find_chidic_pane

0xb237,	// (0x000668f6) chi_dic_list_pane_ParamLimits

0xb237,	// (0x000668f6) chi_dic_list_pane

0xb248,	// (0x00066907) scroll_pane_cp020

0x34e6,	// (0x0005eba5) find_chidic_pane_t1

0xa520,	// (0x00065bdf) input_focus_pane_cp06

0x34f5,	// (0x0005ebb4) list_chi_dic_pane_ParamLimits

0x34f5,	// (0x0005ebb4) list_chi_dic_pane

0x3512,	// (0x0005ebd1) list_chi_dic_pane_t1_ParamLimits

0x3512,	// (0x0005ebd1) list_chi_dic_pane_t1

0xa520,	// (0x00065bdf) list_highlight_pane_cp020

0xb250,	// (0x0006690f) bg_cale_heading_pane_g1

0x3525,	// (0x0005ebe4) bg_cale_heading_pane_g2

0x352d,	// (0x0005ebec) bg_cale_heading_pane_g3

0x3535,	// (0x0005ebf4) bg_cale_heading_pane_g4

0x353f,	// (0x0005ebfe) bg_cale_heading_pane_g5

0x3549,	// (0x0005ec08) bg_cale_heading_pane_g6

0x3551,	// (0x0005ec10) bg_cale_heading_pane_g7

0x3559,	// (0x0005ec18) bg_cale_heading_pane_g8

0x3563,	// (0x0005ec22) bg_cale_heading_pane_g9

0x0008,

0xf361,	// (0x0006aa20) bg_cale_heading_pane_g

0xb250,	// (0x0006690f) bg_cale_side_pane_g1

0x356d,	// (0x0005ec2c) bg_cale_side_pane_g2

0x3577,	// (0x0005ec36) bg_cale_side_pane_g3

0x3581,	// (0x0005ec40) bg_cale_side_pane_g4

0x358b,	// (0x0005ec4a) bg_cale_side_pane_g5

0x3595,	// (0x0005ec54) bg_cale_side_pane_g6

0x359f,	// (0x0005ec5e) bg_cale_side_pane_g7

0x35a9,	// (0x0005ec68) bg_cale_side_pane_g8

0x35b1,	// (0x0005ec70) bg_cale_side_pane_g9

0x0008,

0xf374,	// (0x0006aa33) bg_cale_side_pane_g

0x35b9,	// (0x0005ec78) popup_call_status_window_ParamLimits

0x35b9,	// (0x0005ec78) popup_call_status_window

0xb258,	// (0x00066917) stacon_top_pane

0xb260,	// (0x0006691f) status_pane_ParamLimits

0xb260,	// (0x0006691f) status_pane

0xb275,	// (0x00066934) status_small_pane

0xb27d,	// (0x0006693c) control_pane

0xa520,	// (0x00065bdf) stacon_bottom_pane

0xb285,	// (0x00066944) list_single_mce_smart_pane_t1_ParamLimits

0xb285,	// (0x00066944) list_single_mce_smart_pane_t1

0xb298,	// (0x00066957) list_single_mce_smart_pane_t2_ParamLimits

0xb298,	// (0x00066957) list_single_mce_smart_pane_t2

0x0001,

0x02ba,	// (0x0005b979) list_single_mce_smart_pane_t_ParamLimits

0x02ba,	// (0x0005b979) list_single_mce_smart_pane_t

0x35c5,	// (0x0005ec84) compass_pane

0x35d1,	// (0x0005ec90) main_location2_pane_t1

0x35e5,	// (0x0005eca4) main_location2_pane_t2

0x35f9,	// (0x0005ecb8) main_location2_pane_t3

0x0003,

0xf387,	// (0x0006aa46) main_location2_pane_t

0xb2b7,	// (0x00066976) compass_pane_g1_ParamLimits

0xb2b7,	// (0x00066976) compass_pane_g1

0x3643,	// (0x0005ed02) compass_pane_t1

0x3652,	// (0x0005ed11) compass_pane_t2

0x0005,

0xf390,	// (0x0006aa4f) compass_pane_t

0x369d,	// (0x0005ed5c) text_secondary_cp61

0xb335,	// (0x000669f4) navi_pane_cams_g5

0xb3b1,	// (0x00066a70) navi_pane_im_t1

0xb3bf,	// (0x00066a7e) navi_pane_mp_g1_ParamLimits

0xb3bf,	// (0x00066a7e) navi_pane_mp_g1

0xb3d3,	// (0x00066a92) navi_pane_mp_g2_ParamLimits

0xb3d3,	// (0x00066a92) navi_pane_mp_g2

0xb3df,	// (0x00066a9e) navi_pane_mp_g3_ParamLimits

0xb3df,	// (0x00066a9e) navi_pane_mp_g3

0x0002,

0x02dc,	// (0x0005b99b) navi_pane_mp_g_ParamLimits

0x02dc,	// (0x0005b99b) navi_pane_mp_g

0xb3eb,	// (0x00066aaa) navi_pane_mp_t1

0xb3f9,	// (0x00066ab8) navi_pane_mp_t2

0x0002,

0x02e3,	// (0x0005b9a2) navi_pane_mp_t

0xb464,	// (0x00066b23) navi_pane_vt_g1

0xb3eb,	// (0x00066aaa) navi_pane_vt_t1

0xb46c,	// (0x00066b2b) navi_slider_pane

0xaa41,	// (0x00066100) zooming_pane

0xb47c,	// (0x00066b3b) navi_slider_pane_g1

0x36d8,	// (0x0005ed97) navi_slider_pane_g2

0x0006,

0xf39d,	// (0x0006aa5c) navi_slider_pane_g

0xb4a0,	// (0x00066b5f) aid_levels_zoom

0xb4a8,	// (0x00066b67) zooming_pane_g1

0xb4b0,	// (0x00066b6f) zooming_pane_g2

0xb4b0,	// (0x00066b6f) zooming_pane_g3

0x0002,

0x02f9,	// (0x0005b9b8) zooming_pane_g

0xb4b8,	// (0x00066b77) level_10_zoom

0xb4c1,	// (0x00066b80) level_11_zoom

0xb4ca,	// (0x00066b89) level_1_zoom

0xb4d3,	// (0x00066b92) level_2_zoom

0xb4dc,	// (0x00066b9b) level_3_zoom

0xb4e5,	// (0x00066ba4) level_4_zoom

0xb4ee,	// (0x00066bad) level_5_zoom

0xb4f7,	// (0x00066bb6) level_6_zoom

0xb500,	// (0x00066bbf) level_7_zoom

0xb509,	// (0x00066bc8) level_8_zoom

0xb520,	// (0x00066bdf) level_9_zoom

0xb531,	// (0x00066bf0) popup_phob_thumbnail_window_g1

0xb539,	// (0x00066bf8) popup_phob_thumbnail_window_g2

0x0001,

0xf3ac,	// (0x0006aa6b) popup_phob_thumbnail_window_g

0xc868,	// (0x00067f27) level_1_location

0xc870,	// (0x00067f2f) level_2_location

0xc878,	// (0x00067f37) level_3_location

0xc880,	// (0x00067f3f) level_4_location

0xaa41,	// (0x00066100) level_5_location

0x36ea,	// (0x0005eda9) mce_icon_pane_g1

0x36f2,	// (0x0005edb1) mce_icon_pane_g2

0x0001,

0xf3b1,	// (0x0006aa70) mce_icon_pane_g

0x36fa,	// (0x0005edb9) main_mup_pane_g1_ParamLimits

0x36fa,	// (0x0005edb9) main_mup_pane_g1

0x3712,	// (0x0005edd1) main_mup_pane_g2_ParamLimits

0x3712,	// (0x0005edd1) main_mup_pane_g2

0x3726,	// (0x0005ede5) main_mup_pane_g3_ParamLimits

0x3726,	// (0x0005ede5) main_mup_pane_g3

0x373a,	// (0x0005edf9) main_mup_pane_g4_ParamLimits

0x373a,	// (0x0005edf9) main_mup_pane_g4

0x3756,	// (0x0005ee15) main_mup_pane_g5_ParamLimits

0x3756,	// (0x0005ee15) main_mup_pane_g5

0x3777,	// (0x0005ee36) main_mup_pane_g6_ParamLimits

0x3777,	// (0x0005ee36) main_mup_pane_g6

0x3793,	// (0x0005ee52) main_mup_pane_g7_ParamLimits

0x3793,	// (0x0005ee52) main_mup_pane_g7

0x37af,	// (0x0005ee6e) main_mup_pane_g8_ParamLimits

0x37af,	// (0x0005ee6e) main_mup_pane_g8

0x37cb,	// (0x0005ee8a) main_mup_pane_g9_ParamLimits

0x37cb,	// (0x0005ee8a) main_mup_pane_g9

0x37ea,	// (0x0005eea9) main_mup_pane_g10_ParamLimits

0x37ea,	// (0x0005eea9) main_mup_pane_g10

0x3809,	// (0x0005eec8) main_mup_pane_g11_ParamLimits

0x3809,	// (0x0005eec8) main_mup_pane_g11

0x3821,	// (0x0005eee0) main_mup_pane_g12_ParamLimits

0x3821,	// (0x0005eee0) main_mup_pane_g12

0x382f,	// (0x0005eeee) main_mup_pane_g13_ParamLimits

0x382f,	// (0x0005eeee) main_mup_pane_g13

0x000c,

0xf3b6,	// (0x0006aa75) main_mup_pane_g_ParamLimits

0xf3b6,	// (0x0006aa75) main_mup_pane_g

0x3845,	// (0x0005ef04) main_mup_pane_t1_ParamLimits

0x3845,	// (0x0005ef04) main_mup_pane_t1

0x3862,	// (0x0005ef21) main_mup_pane_t2_ParamLimits

0x3862,	// (0x0005ef21) main_mup_pane_t2

0x387c,	// (0x0005ef3b) main_mup_pane_t3_ParamLimits

0x387c,	// (0x0005ef3b) main_mup_pane_t3

0x3896,	// (0x0005ef55) main_mup_pane_t4_ParamLimits

0x3896,	// (0x0005ef55) main_mup_pane_t4

0x38a8,	// (0x0005ef67) main_mup_pane_t5_ParamLimits

0x38a8,	// (0x0005ef67) main_mup_pane_t5

0x38ba,	// (0x0005ef79) main_mup_pane_t6_ParamLimits

0x38ba,	// (0x0005ef79) main_mup_pane_t6

0x0005,

0xf3d1,	// (0x0006aa90) main_mup_pane_t_ParamLimits

0xf3d1,	// (0x0006aa90) main_mup_pane_t

0x38d0,	// (0x0005ef8f) mup_progress_pane_ParamLimits

0x38d0,	// (0x0005ef8f) mup_progress_pane

0x38dc,	// (0x0005ef9b) mup_visualizer_pane_ParamLimits

0x38dc,	// (0x0005ef9b) mup_visualizer_pane

0x391a,	// (0x0005efd9) mup_volume_pane_ParamLimits

0x391a,	// (0x0005efd9) mup_volume_pane

0xb512,	// (0x00066bd1) mup_visualizer_pane_g1_ParamLimits

0xb512,	// (0x00066bd1) mup_visualizer_pane_g1

0xb512,	// (0x00066bd1) mup_visualizer_pane_g2_ParamLimits

0xb512,	// (0x00066bd1) mup_visualizer_pane_g2

0xb2b7,	// (0x00066976) mup_visualizer_pane_g3_ParamLimits

0xb2b7,	// (0x00066976) mup_visualizer_pane_g3

0x0002,

0xf3de,	// (0x0006aa9d) mup_visualizer_pane_g_ParamLimits

0xf3de,	// (0x0006aa9d) mup_visualizer_pane_g

0xa8a1,	// (0x00065f60) mup_volume_pane_g1

0xb549,	// (0x00066c08) mup_volume_pane_g2

0x0001,

0xf3e5,	// (0x0006aaa4) mup_volume_pane_g

0xa8a1,	// (0x00065f60) mup_progress_pane_g1

0xb552,	// (0x00066c11) mup_progress_pane_g2

0xb55b,	// (0x00066c1a) mup_progress_pane_g3

0x0002,

0xf3ea,	// (0x0006aaa9) mup_progress_pane_g

0xa520,	// (0x00065bdf) bg_popup_window_pane_cp05

0xb564,	// (0x00066c23) heading_pane_cp02_ParamLimits

0xb564,	// (0x00066c23) heading_pane_cp02

0xb57e,	// (0x00066c3d) list_popup_blid_pane

0xb586,	// (0x00066c45) list_blid_sat_info_pane_ParamLimits

0xb586,	// (0x00066c45) list_blid_sat_info_pane

0xb599,	// (0x00066c58) list_blid_sat_info_pane_g1

0xb5a1,	// (0x00066c60) list_blid_sat_info_pane_t1

0x3a25,	// (0x0005f0e4) mup_equalizer_pane_ParamLimits

0x3a25,	// (0x0005f0e4) mup_equalizer_pane

0x3a46,	// (0x0005f105) mup_equalizer_pane_cp1_ParamLimits

0x3a46,	// (0x0005f105) mup_equalizer_pane_cp1

0x3a67,	// (0x0005f126) mup_equalizer_pane_cp2_ParamLimits

0x3a67,	// (0x0005f126) mup_equalizer_pane_cp2

0x3a88,	// (0x0005f147) mup_equalizer_pane_cp3_ParamLimits

0x3a88,	// (0x0005f147) mup_equalizer_pane_cp3

0x3aa9,	// (0x0005f168) mup_equalizer_pane_cp4_ParamLimits

0x3aa9,	// (0x0005f168) mup_equalizer_pane_cp4

0x3aca,	// (0x0005f189) mup_equalizer_pane_cp5

0x3ae0,	// (0x0005f19f) mup_equalizer_pane_cp6

0x3af8,	// (0x0005f1b7) mup_equalizer_pane_cp7

0xc746,	// (0x00067e05) bg_popup_call_poc_act_pane_g9

0xc74e,	// (0x00067e0d) bg_popup_call_poc_act_pane_g10

0xc756,	// (0x00067e15) bg_popup_call_poc_act_pane_g11

0x000a,

0xa77b,	// (0x00065e3a) mup_scale_pane

0xa8a1,	// (0x00065f60) mup_scale_pane_g1

0xb5af,	// (0x00066c6e) mup_scale_pane_g2

0x0006,

0xf406,	// (0x0006aac5) mup_scale_pane_g

0xb5d3,	// (0x00066c92) msg_data_pane

0xb5db,	// (0x00066c9a) scroll_pane_cp017

0x3b22,	// (0x0005f1e1) bg_list_pane_cp04_ParamLimits

0x3b22,	// (0x0005f1e1) bg_list_pane_cp04

0xb5e3,	// (0x00066ca2) msg_data_pane_g1

0x3b3a,	// (0x0005f1f9) msg_data_pane_g2

0x3b42,	// (0x0005f201) msg_data_pane_g3

0x3b4a,	// (0x0005f209) msg_data_pane_g4

0x3b52,	// (0x0005f211) msg_data_pane_g5

0x3b5a,	// (0x0005f219) msg_data_pane_g6

0x3b62,	// (0x0005f221) msg_data_pane_g7

0x0006,

0xf415,	// (0x0006aad4) msg_data_pane_g

0x3b6a,	// (0x0005f229) msg_text_pane_ParamLimits

0x3b6a,	// (0x0005f229) msg_text_pane

0x3bc4,	// (0x0005f283) qrid_highlight_pane_cp011_ParamLimits

0x3bc4,	// (0x0005f283) qrid_highlight_pane_cp011

0xa520,	// (0x00065bdf) msg_body_pane

0xa520,	// (0x00065bdf) msg_header_pane

0xb5f4,	// (0x00066cb3) input_focus_pane_cp07

0x9c6d,	// (0x0006532c) msg_header_pane_t1_ParamLimits

0x9c6d,	// (0x0006532c) msg_header_pane_t1

0x9c7f,	// (0x0006533e) msg_header_pane_t2_ParamLimits

0x9c7f,	// (0x0006533e) msg_header_pane_t2

0x0001,

0xf429,	// (0x0006aae8) msg_header_pane_t_ParamLimits

0xf429,	// (0x0006aae8) msg_header_pane_t

0xb609,	// (0x00066cc8) msg_body_pane_g1

0x9c91,	// (0x00065350) msg_body_pane_t1_ParamLimits

0x9c91,	// (0x00065350) msg_body_pane_t1

0x9cc2,	// (0x00065381) msg_body_pane_t2_ParamLimits

0x9cc2,	// (0x00065381) msg_body_pane_t2

0x9cd4,	// (0x00065393) msg_body_pane_t3_ParamLimits

0x9cd4,	// (0x00065393) msg_body_pane_t3

0x0002,

0xf42e,	// (0x0006aaed) msg_body_pane_t_ParamLimits

0xf42e,	// (0x0006aaed) msg_body_pane_t

0x3c3e,	// (0x0005f2fd) main_viewer_pane_g1_ParamLimits

0x3c3e,	// (0x0005f2fd) main_viewer_pane_g1

0x3c4a,	// (0x0005f309) main_viewer_pane_g2_ParamLimits

0x3c4a,	// (0x0005f309) main_viewer_pane_g2

0x3c56,	// (0x0005f315) main_viewer_pane_g3_ParamLimits

0x3c56,	// (0x0005f315) main_viewer_pane_g3

0x3c67,	// (0x0005f326) main_viewer_pane_g4_ParamLimits

0x3c67,	// (0x0005f326) main_viewer_pane_g4

0x3c78,	// (0x0005f337) main_viewer_pane_g5_ParamLimits

0x3c78,	// (0x0005f337) main_viewer_pane_g5

0x3c78,	// (0x0005f337) main_viewer_pane_g7_ParamLimits

0x3c78,	// (0x0005f337) main_viewer_pane_g7

0xaf5b,	// (0x0006661a) main_viewer_pane_g8_ParamLimits

0xaf5b,	// (0x0006661a) main_viewer_pane_g8

0x0007,

0xf43e,	// (0x0006aafd) main_viewer_pane_g_ParamLimits

0xf43e,	// (0x0006aafd) main_viewer_pane_g

0xb611,	// (0x00066cd0) viewer_content_pane_ParamLimits

0xb611,	// (0x00066cd0) viewer_content_pane

0x3cb6,	// (0x0005f375) main_postcard_pane_g1_ParamLimits

0x3cb6,	// (0x0005f375) main_postcard_pane_g1

0x3cc4,	// (0x0005f383) main_postcard_pane_g2_ParamLimits

0x3cc4,	// (0x0005f383) main_postcard_pane_g2

0x3cd2,	// (0x0005f391) main_postcard_pane_g3_ParamLimits

0x3cd2,	// (0x0005f391) main_postcard_pane_g3

0x0005,

0xf44f,	// (0x0006ab0e) main_postcard_pane_g_ParamLimits

0xf44f,	// (0x0006ab0e) main_postcard_pane_g

0x3ce2,	// (0x0005f3a1) main_postcard_pane_g4

0xc968,	// (0x00068027) smil_status_volume_pane_g2

0x3d0e,	// (0x0005f3cd) postcard_pane_ParamLimits

0x3d0e,	// (0x0005f3cd) postcard_pane

0xb512,	// (0x00066bd1) postcard_pane_g1_ParamLimits

0xb512,	// (0x00066bd1) postcard_pane_g1

0x3d40,	// (0x0005f3ff) postcard_pane_g2_ParamLimits

0x3d40,	// (0x0005f3ff) postcard_pane_g2

0x3d4c,	// (0x0005f40b) postcard_pane_g3_ParamLimits

0x3d4c,	// (0x0005f40b) postcard_pane_g3

0xb61f,	// (0x00066cde) postcard_pane_g4_ParamLimits

0xb61f,	// (0x00066cde) postcard_pane_g4

0x3d58,	// (0x0005f417) postcard_pane_g5_ParamLimits

0x3d58,	// (0x0005f417) postcard_pane_g5

0x3d64,	// (0x0005f423) postcard_pane_g6_ParamLimits

0x3d64,	// (0x0005f423) postcard_pane_g6

0xb62d,	// (0x00066cec) postcard_pane_g7_ParamLimits

0xb62d,	// (0x00066cec) postcard_pane_g7

0x0006,

0xf45c,	// (0x0006ab1b) postcard_pane_g_ParamLimits

0xf45c,	// (0x0006ab1b) postcard_pane_g

0x3d70,	// (0x0005f42f) main_mp2_pane_g1_ParamLimits

0x3d70,	// (0x0005f42f) main_mp2_pane_g1

0x3d7c,	// (0x0005f43b) main_mp2_pane_g2_ParamLimits

0x3d7c,	// (0x0005f43b) main_mp2_pane_g2

0x3d88,	// (0x0005f447) main_mp2_pane_g3_ParamLimits

0x3d88,	// (0x0005f447) main_mp2_pane_g3

0x0002,

0xf46b,	// (0x0006ab2a) main_mp2_pane_g_ParamLimits

0xf46b,	// (0x0006ab2a) main_mp2_pane_g

0x3d94,	// (0x0005f453) main_mp2_pane_t1_ParamLimits

0x3d94,	// (0x0005f453) main_mp2_pane_t1

0x3dab,	// (0x0005f46a) main_mp2_pane_t2_ParamLimits

0x3dab,	// (0x0005f46a) main_mp2_pane_t2

0x3dbd,	// (0x0005f47c) main_mp2_pane_t3_ParamLimits

0x3dbd,	// (0x0005f47c) main_mp2_pane_t3

0x0002,

0xf472,	// (0x0006ab31) main_mp2_pane_t_ParamLimits

0xf472,	// (0x0006ab31) main_mp2_pane_t

0xb63b,	// (0x00066cfa) pec_content_pane_ParamLimits

0xb63b,	// (0x00066cfa) pec_content_pane

0xabea,	// (0x000662a9) scroll_pane_cp015

0xb64d,	// (0x00066d0c) pec_attribute_pane_ParamLimits

0xb64d,	// (0x00066d0c) pec_attribute_pane

0x3dcf,	// (0x0005f48e) pec_content_pane_g1_ParamLimits

0x3dcf,	// (0x0005f48e) pec_content_pane_g1

0xb65d,	// (0x00066d1c) pec_content_pane_t1_ParamLimits

0xb65d,	// (0x00066d1c) pec_content_pane_t1

0xb66f,	// (0x00066d2e) pec_content_pane_t2_ParamLimits

0xb66f,	// (0x00066d2e) pec_content_pane_t2

0x0001,

0x03cd,	// (0x0005ba8c) pec_content_pane_t_ParamLimits

0x03cd,	// (0x0005ba8c) pec_content_pane_t

0x3ddb,	// (0x0005f49a) list_single_graphic_pane_cp01_ParamLimits

0x3ddb,	// (0x0005f49a) list_single_graphic_pane_cp01

0xa77b,	// (0x00065e3a) bg_popup_sub_pane_cp04

0xb681,	// (0x00066d40) popup_mup_playback_window_g1

0xb68d,	// (0x00066d4c) popup_mup_playback_window_t1

0xb6a2,	// (0x00066d61) popup_mup_playback_window_t2

0x0001,

0x03d2,	// (0x0005ba91) popup_mup_playback_window_t

0xb6d9,	// (0x00066d98) main_image_pane_g1_ParamLimits

0xb6d9,	// (0x00066d98) main_image_pane_g1

0xb71c,	// (0x00066ddb) scroll_pane_cp018_ParamLimits

0xb71c,	// (0x00066ddb) scroll_pane_cp018

0xb734,	// (0x00066df3) scroll_pane_cp016_ParamLimits

0xb734,	// (0x00066df3) scroll_pane_cp016

0x3e75,	// (0x0005f534) smil2_image_pane_ParamLimits

0x3e75,	// (0x0005f534) smil2_image_pane

0x3ea5,	// (0x0005f564) smil2_root_pane_ParamLimits

0x3ea5,	// (0x0005f564) smil2_root_pane

0x3ed1,	// (0x0005f590) smil2_text_pane_ParamLimits

0x3ed1,	// (0x0005f590) smil2_text_pane

0xa520,	// (0x00065bdf) bg_list_pane_cp06

0xb770,	// (0x00066e2f) grid_radio_pane

0xa520,	// (0x00065bdf) bg_popup_window_pane_cp06

0xb778,	// (0x00066e37) main_fmradio_pane_t1

0xb133,	// (0x000667f2) heading_pane_cp04

0xb786,	// (0x00066e45) main_fmradio_pane_t2

0xc79e,	// (0x00067e5d) popup_cale_lunar_info_window_g1

0xb794,	// (0x00066e53) main_fmradio_pane_t3

0xc7a6,	// (0x00067e65) popup_cale_lunar_info_window_g2

0xb7a2,	// (0x00066e61) main_fmradio_pane_t4

0x0001,

0xb7b0,	// (0x00066e6f) main_fmradio_pane_t5

0x0004,

0x04c0,	// (0x0005bb7f) popup_cale_lunar_info_window_g

0x03e7,	// (0x0005baa6) main_fmradio_pane_t

0xb7be,	// (0x00066e7d) wait_bar_pane_cp03

0xb7c6,	// (0x00066e85) cell_fmradio_pane_ParamLimits

0xb7c6,	// (0x00066e85) cell_fmradio_pane

0xb62d,	// (0x00066cec) cell_fmradio_pane_g1_ParamLimits

0xb62d,	// (0x00066cec) cell_fmradio_pane_g1

0xa520,	// (0x00065bdf) grid_highlight_pane_cp011

0xb7d9,	// (0x00066e98) poc_content_pane_ParamLimits

0xb7d9,	// (0x00066e98) poc_content_pane

0xb7eb,	// (0x00066eaa) scroll_pane_cp019

0x3f11,	// (0x0005f5d0) popup_call_poc_act_window_ParamLimits

0x3f11,	// (0x0005f5d0) popup_call_poc_act_window

0x3f1e,	// (0x0005f5dd) popup_call_poc_inact_window_ParamLimits

0x3f1e,	// (0x0005f5dd) popup_call_poc_inact_window

0x0484,	// (0x0005bb43) bg_popup_call_poc_act_pane_g

0xc75e,	// (0x00067e1d) bg_popup_call_poc_inact_pane_g1

0xc766,	// (0x00067e25) bg_popup_call_poc_inact_pane_g2

0xb7f3,	// (0x00066eb2) popup_call_poc_act_window_g2

0xc76e,	// (0x00067e2d) bg_popup_call_poc_inact_pane_g3

0xc6ee,	// (0x00067dad) bg_popup_call_poc_inact_pane_g4

0xc776,	// (0x00067e35) bg_popup_call_poc_inact_pane_g5

0xb7fb,	// (0x00066eba) popup_call_poc_act_window_t1_ParamLimits

0xb7fb,	// (0x00066eba) popup_call_poc_act_window_t1

0xb823,	// (0x00066ee2) popup_call_poc_act_window_t2_ParamLimits

0xb823,	// (0x00066ee2) popup_call_poc_act_window_t2

0xb84b,	// (0x00066f0a) popup_call_poc_act_window_t3_ParamLimits

0xb84b,	// (0x00066f0a) popup_call_poc_act_window_t3

0xb873,	// (0x00066f32) popup_call_poc_act_window_t4_ParamLimits

0xb873,	// (0x00066f32) popup_call_poc_act_window_t4

0x0003,

0x03f2,	// (0x0005bab1) popup_call_poc_act_window_t_ParamLimits

0x03f2,	// (0x0005bab1) popup_call_poc_act_window_t

0xc77e,	// (0x00067e3d) bg_popup_call_poc_inact_pane_g6

0xc786,	// (0x00067e45) bg_popup_call_poc_inact_pane_g7

0xc78e,	// (0x00067e4d) bg_popup_call_poc_inact_pane_g8

0xb885,	// (0x00066f44) popup_call_poc_inact_window_g2

0xc796,	// (0x00067e55) bg_popup_call_poc_inact_pane_g9

0x0008,

0x049b,	// (0x0005bb5a) bg_popup_call_poc_inact_pane_g

0xb88d,	// (0x00066f4c) popup_call_poc_inact_window_t1_ParamLimits

0xb88d,	// (0x00066f4c) popup_call_poc_inact_window_t1

0xb8a2,	// (0x00066f61) popup_call_poc_inact_window_t2_ParamLimits

0xb8a2,	// (0x00066f61) popup_call_poc_inact_window_t2

0xb8b7,	// (0x00066f76) popup_call_poc_inact_window_t3_ParamLimits

0xb8b7,	// (0x00066f76) popup_call_poc_inact_window_t3

0x0002,

0x03fb,	// (0x0005baba) popup_call_poc_inact_window_t_ParamLimits

0x03fb,	// (0x0005baba) popup_call_poc_inact_window_t

0xc8db,	// (0x00067f9a) context_pane_ParamLimits

0x4562,	// (0x0005fc21) signal_pane_ParamLimits

0xaa41,	// (0x00066100) main_call2_pane

0x44d5,	// (0x0005fb94) popup_phob_thumbnail2_window_ParamLimits

0x44d5,	// (0x0005fb94) popup_phob_thumbnail2_window

0x3bec,	// (0x0005f2ab) aid_hotspot_pointer_arrow_pane

0x3bf4,	// (0x0005f2b3) aid_hotspot_pointer_hand_pane

0x4246,	// (0x0005f905) phob_pre_status_pane_g5

0x1c72,	// (0x0005d331) cams_zoom_pane_ParamLimits

0x1c7e,	// (0x0005d33d) image_vga_pane_ParamLimits

0x1c8d,	// (0x0005d34c) main_camera_pane_g1_ParamLimits

0x1c9b,	// (0x0005d35a) main_camera_pane_g2_ParamLimits

0x1ca7,	// (0x0005d366) main_camera_pane_g3_ParamLimits

0x1cb3,	// (0x0005d372) main_camera_pane_g4_ParamLimits

0x1cbf,	// (0x0005d37e) main_camera_pane_g5_ParamLimits

0x1ccb,	// (0x0005d38a) main_camera_pane_g6_ParamLimits

0x1cd7,	// (0x0005d396) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0006a8c9) main_camera_pane_g_ParamLimits

0x1ce3,	// (0x0005d3a2) main_camera_pane_t1_ParamLimits

0x1cf5,	// (0x0005d3b4) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0006a8da) main_camera_pane_t_ParamLimits

0xa77b,	// (0x00065e3a) bg_popup_preview_window_pane_cp01_ParamLimits

0xa77b,	// (0x00065e3a) bg_popup_preview_window_pane_cp01

0xb8cc,	// (0x00066f8b) popup_phob_thumbnail2_window_g1_ParamLimits

0xb8cc,	// (0x00066f8b) popup_phob_thumbnail2_window_g1

0xa520,	// (0x00065bdf) call2_cli_visual_pane

0x3f3a,	// (0x0005f5f9) popup_call2_audio_conf_window_ParamLimits

0x3f3a,	// (0x0005f5f9) popup_call2_audio_conf_window

0x3f4f,	// (0x0005f60e) popup_call2_audio_first_window_ParamLimits

0x3f4f,	// (0x0005f60e) popup_call2_audio_first_window

0x3fed,	// (0x0005f6ac) popup_call2_audio_in_window_ParamLimits

0x3fed,	// (0x0005f6ac) popup_call2_audio_in_window

0x402f,	// (0x0005f6ee) popup_call2_audio_out_window_ParamLimits

0x402f,	// (0x0005f6ee) popup_call2_audio_out_window

0x4091,	// (0x0005f750) popup_call2_audio_second_window_ParamLimits

0x4091,	// (0x0005f750) popup_call2_audio_second_window

0x40ef,	// (0x0005f7ae) popup_call2_audio_wait_window_ParamLimits

0x40ef,	// (0x0005f7ae) popup_call2_audio_wait_window

0xa520,	// (0x00065bdf) bg_popup_call2_act_pane_cp03

0xa75d,	// (0x00065e1c) list_conf_pane_cp

0xb8d8,	// (0x00066f97) popup_call2_audio_conf_window_t1

0xb8e6,	// (0x00066fa5) list_single_graphic_popup_conf2_pane_ParamLimits

0xb8e6,	// (0x00066fa5) list_single_graphic_popup_conf2_pane

0xb1a3,	// (0x00066862) list_highlight_pane_cp04

0xb8f9,	// (0x00066fb8) list_single_graphic_popup_conf2_pane_g1

0xb1b4,	// (0x00066873) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x0402,	// (0x0005bac1) list_single_graphic_popup_conf2_pane_g

0xb903,	// (0x00066fc2) list_single_graphic_popup_conf2_pane_t1

0xb911,	// (0x00066fd0) bg_popup_call2_act_pane_cp01_ParamLimits

0xb911,	// (0x00066fd0) bg_popup_call2_act_pane_cp01

0xb99b,	// (0x0006705a) call_type_pane_cp05_ParamLimits

0xb99b,	// (0x0006705a) call_type_pane_cp05

0xb9ef,	// (0x000670ae) popup_call2_audio_second_window_g1_ParamLimits

0xb9ef,	// (0x000670ae) popup_call2_audio_second_window_g1

0xba43,	// (0x00067102) popup_call2_audio_second_window_g2_ParamLimits

0xba43,	// (0x00067102) popup_call2_audio_second_window_g2

0x0002,

0x0407,	// (0x0005bac6) popup_call2_audio_second_window_g_ParamLimits

0x0407,	// (0x0005bac6) popup_call2_audio_second_window_g

0xbaa8,	// (0x00067167) popup_call2_audio_second_window_t1_ParamLimits

0xbaa8,	// (0x00067167) popup_call2_audio_second_window_t1

0xbb63,	// (0x00067222) popup_call2_audio_second_window_t2_ParamLimits

0xbb63,	// (0x00067222) popup_call2_audio_second_window_t2

0xbbb6,	// (0x00067275) popup_call2_audio_second_window_t3_ParamLimits

0xbbb6,	// (0x00067275) popup_call2_audio_second_window_t3

0x0003,

0x040e,	// (0x0005bacd) popup_call2_audio_second_window_t_ParamLimits

0x040e,	// (0x0005bacd) popup_call2_audio_second_window_t

0xa520,	// (0x00065bdf) bg_popup_call2_in_pane_cp02

0xa52a,	// (0x00065be9) call_type_pane_cp04

0xa532,	// (0x00065bf1) popup_call2_audio_wait_window_g1

0xa53a,	// (0x00065bf9) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0006a7b8) popup_call2_audio_wait_window_g

0xa542,	// (0x00065c01) popup_call2_audio_wait_window_t3

0xbca9,	// (0x00067368) bg_popup_call2_act_pane_ParamLimits

0xbca9,	// (0x00067368) bg_popup_call2_act_pane

0xbd69,	// (0x00067428) call_type_pane_cp03_ParamLimits

0xbd69,	// (0x00067428) call_type_pane_cp03

0xbdcd,	// (0x0006748c) popup_call2_audio_first_window_g1_ParamLimits

0xbdcd,	// (0x0006748c) popup_call2_audio_first_window_g1

0xbe3d,	// (0x000674fc) popup_call2_audio_first_window_g2_ParamLimits

0xbe3d,	// (0x000674fc) popup_call2_audio_first_window_g2

0xb512,	// (0x00066bd1) popup_call2_audio_first_window_g3_ParamLimits

0xb512,	// (0x00066bd1) popup_call2_audio_first_window_g3

0x0004,

0xf489,	// (0x0006ab48) popup_call2_audio_first_window_g_ParamLimits

0xf489,	// (0x0006ab48) popup_call2_audio_first_window_g

0xbf1b,	// (0x000675da) popup_call2_audio_first_window_t1_ParamLimits

0xbf1b,	// (0x000675da) popup_call2_audio_first_window_t1

0xc01e,	// (0x000676dd) popup_call2_audio_first_window_t4_ParamLimits

0xc01e,	// (0x000676dd) popup_call2_audio_first_window_t4

0xc101,	// (0x000677c0) popup_call2_audio_first_window_t5_ParamLimits

0xc101,	// (0x000677c0) popup_call2_audio_first_window_t5

0x0003,

0x0422,	// (0x0005bae1) popup_call2_audio_first_window_t_ParamLimits

0x0422,	// (0x0005bae1) popup_call2_audio_first_window_t

0xa773,	// (0x00065e32) bg_popup_call2_act_pane_g1

0xc7ae,	// (0x00067e6d) popup_cale_lunar_info_window_t1

0xc7bc,	// (0x00067e7b) popup_cale_lunar_info_window_t2

0xc7ca,	// (0x00067e89) popup_cale_lunar_info_window_t3

0xa520,	// (0x00065bdf) bg_popup_call2_bubble_pane

0xc202,	// (0x000678c1) bg_popup_call2_in_pane_cp01_ParamLimits

0xc202,	// (0x000678c1) bg_popup_call2_in_pane_cp01

0x9c4b,	// (0x0006530a) call_type_pane_cp02

0xc24a,	// (0x00067909) popup_call2_audio_out_window_g1_ParamLimits

0xc24a,	// (0x00067909) popup_call2_audio_out_window_g1

0xc276,	// (0x00067935) popup_call2_audio_out_window_g2_ParamLimits

0xc276,	// (0x00067935) popup_call2_audio_out_window_g2

0xc29e,	// (0x0006795d) popup_call2_audio_out_window_g3_ParamLimits

0xc29e,	// (0x0006795d) popup_call2_audio_out_window_g3

0x0003,

0x042b,	// (0x0005baea) popup_call2_audio_out_window_g_ParamLimits

0x042b,	// (0x0005baea) popup_call2_audio_out_window_g

0xc2d9,	// (0x00067998) popup_call2_audio_out_window_t1_ParamLimits

0xc2d9,	// (0x00067998) popup_call2_audio_out_window_t1

0xc338,	// (0x000679f7) popup_call2_audio_out_window_t2_ParamLimits

0xc338,	// (0x000679f7) popup_call2_audio_out_window_t2

0xc38c,	// (0x00067a4b) popup_call2_audio_out_window_t3_ParamLimits

0xc38c,	// (0x00067a4b) popup_call2_audio_out_window_t3

0xc3a2,	// (0x00067a61) popup_call2_audio_out_window_t4_ParamLimits

0xc3a2,	// (0x00067a61) popup_call2_audio_out_window_t4

0xc3b8,	// (0x00067a77) popup_call2_audio_out_window_t5_ParamLimits

0xc3b8,	// (0x00067a77) popup_call2_audio_out_window_t5

0x0005,

0x0434,	// (0x0005baf3) popup_call2_audio_out_window_t_ParamLimits

0x0434,	// (0x0005baf3) popup_call2_audio_out_window_t

0xc41c,	// (0x00067adb) bg_popup_call2_in_pane_ParamLimits

0xc41c,	// (0x00067adb) bg_popup_call2_in_pane

0xc478,	// (0x00067b37) popup_call2_audio_in_window_g1_ParamLimits

0xc478,	// (0x00067b37) popup_call2_audio_in_window_g1

0xc4b0,	// (0x00067b6f) popup_call2_audio_in_window_g2_ParamLimits

0xc4b0,	// (0x00067b6f) popup_call2_audio_in_window_g2

0xc4e8,	// (0x00067ba7) popup_call2_audio_in_window_g3_ParamLimits

0xc4e8,	// (0x00067ba7) popup_call2_audio_in_window_g3

0x0003,

0x0441,	// (0x0005bb00) popup_call2_audio_in_window_g_ParamLimits

0x0441,	// (0x0005bb00) popup_call2_audio_in_window_g

0xc540,	// (0x00067bff) popup_call2_audio_in_window_t1_ParamLimits

0xc540,	// (0x00067bff) popup_call2_audio_in_window_t1

0xc5c0,	// (0x00067c7f) popup_call2_audio_in_window_t2_ParamLimits

0xc5c0,	// (0x00067c7f) popup_call2_audio_in_window_t2

0xc640,	// (0x00067cff) popup_call2_audio_in_window_t3_ParamLimits

0xc640,	// (0x00067cff) popup_call2_audio_in_window_t3

0xc65a,	// (0x00067d19) popup_call2_audio_in_window_t4_ParamLimits

0xc65a,	// (0x00067d19) popup_call2_audio_in_window_t4

0xc66c,	// (0x00067d2b) popup_call2_audio_in_window_t5_ParamLimits

0xc66c,	// (0x00067d2b) popup_call2_audio_in_window_t5

0xc681,	// (0x00067d40) popup_call2_audio_in_window_t6_ParamLimits

0xc681,	// (0x00067d40) popup_call2_audio_in_window_t6

0x0005,

0x044a,	// (0x0005bb09) popup_call2_audio_in_window_t_ParamLimits

0x044a,	// (0x0005bb09) popup_call2_audio_in_window_t

0xa773,	// (0x00065e32) bg_popup_call2_in_pane_g1

0xc7d8,	// (0x00067e97) popup_cale_lunar_info_window_t4

0x0003,

0x04c5,	// (0x0005bb84) popup_cale_lunar_info_window_t

0xa77b,	// (0x00065e3a) bg_popup_call2_rect_pane_ParamLimits

0xa77b,	// (0x00065e3a) bg_popup_call2_rect_pane

0xa520,	// (0x00065bdf) call2_cli_visual_graphic_pane

0xa520,	// (0x00065bdf) call2_cli_visual_text_pane

0x460b,	// (0x0005fcca) smil_status_volume_pane_g3

0x0002,

0xa8a1,	// (0x00065f60) call2_cli_visual_graphic_pane_g1

0xa8a1,	// (0x00065f60) call2_cli_visual_graphic_pane_g2

0xa8a1,	// (0x00065f60) call2_cli_visual_graphic_pane_g3

0x0002,

0xf494,	// (0x0006ab53) call2_cli_visual_graphic_pane_g

0xc696,	// (0x00067d55) bg_popup_call2_rect_pane_g1

0xa93f,	// (0x00065ffe) bg_popup_call2_rect_pane_g2

0xc69e,	// (0x00067d5d) bg_popup_call2_rect_pane_g3

0xc6a6,	// (0x00067d65) bg_popup_call2_rect_pane_g4

0xc6ae,	// (0x00067d6d) bg_popup_call2_rect_pane_g5

0xc6b6,	// (0x00067d75) bg_popup_call2_rect_pane_g6

0xc6be,	// (0x00067d7d) bg_popup_call2_rect_pane_g7

0xc6c6,	// (0x00067d85) bg_popup_call2_rect_pane_g8

0xc6ce,	// (0x00067d8d) bg_popup_call2_rect_pane_g9

0x0008,

0xf49b,	// (0x0006ab5a) bg_popup_call2_rect_pane_g

0xc6d6,	// (0x00067d95) bg_popup_call2_bubble_pane_g1

0xc6de,	// (0x00067d9d) bg_popup_call2_bubble_pane_g2

0xc6e6,	// (0x00067da5) bg_popup_call2_bubble_pane_g3

0xc6ee,	// (0x00067dad) bg_popup_call2_bubble_pane_g4

0xc6f6,	// (0x00067db5) bg_popup_call2_bubble_pane_g5

0xc6fe,	// (0x00067dbd) bg_popup_call2_bubble_pane_g6

0xc706,	// (0x00067dc5) bg_popup_call2_bubble_pane_g7

0xc70e,	// (0x00067dcd) bg_popup_call2_bubble_pane_g8

0xc716,	// (0x00067dd5) bg_popup_call2_bubble_pane_g9

0x0008,

0x0471,	// (0x0005bb30) bg_popup_call2_bubble_pane_g

0x1784,	// (0x0005ce43) aid_cale_week_size_cell_pane

0x1d07,	// (0x0005d3c6) aid_cams_cif_uncrop_pane_ParamLimits

0x1d07,	// (0x0005d3c6) aid_cams_cif_uncrop_pane

0x1e62,	// (0x0005d521) aid_cams_size_cell_ParamLimits

0x1e62,	// (0x0005d521) aid_cams_size_cell

0x1e6e,	// (0x0005d52d) grid_cams_pane_ParamLimits

0x1e7c,	// (0x0005d53b) linegrid_cams_pane_ParamLimits

0x2067,	// (0x0005d726) call_video_pane_t1

0x2088,	// (0x0005d747) call_video_pane_t2

0x0001,

0xf26e,	// (0x0006a92d) call_video_pane_t

0x25d6,	// (0x0005dc95) aid_cale_month_size_cell_pane_ParamLimits

0x25d6,	// (0x0005dc95) aid_cale_month_size_cell_pane

0xf4de,	// (0x0006ab9d) smil_status_volume_pane_g

0x4618,	// (0x0005fcd7) volume_smil_pane_ParamLimits

0x0ed1,	// (0x0005c590) aid_popup2_width_pane

0x1670,	// (0x0005cd2f) cell_qdial_pane_g4_ParamLimits

0x1670,	// (0x0005cd2f) cell_qdial_pane_g4

0x361f,	// (0x0005ecde) aid_blid_cardinal_pane_ParamLimits

0x362f,	// (0x0005ecee) aid_blid_destination_pane_ParamLimits

0x362f,	// (0x0005ecee) aid_blid_destination_pane

0xa77b,	// (0x00065e3a) bg_popup_call_poc_act_pane_ParamLimits

0xa77b,	// (0x00065e3a) bg_popup_call_poc_act_pane

0xa77b,	// (0x00065e3a) bg_popup_call_poc_inact_pane_ParamLimits

0xa77b,	// (0x00065e3a) bg_popup_call_poc_inact_pane

0xc71e,	// (0x00067ddd) bg_popup_call_poc_act_pane_g1

0xc726,	// (0x00067de5) bg_popup_call_poc_act_pane_g2

0xc72e,	// (0x00067ded) bg_popup_call_poc_act_pane_g3

0xc6ee,	// (0x00067dad) bg_popup_call_poc_act_pane_g4

0xc6f6,	// (0x00067db5) bg_popup_call_poc_act_pane_g5

0xc736,	// (0x00067df5) bg_popup_call_poc_act_pane_g6

0xc706,	// (0x00067dc5) bg_popup_call_poc_act_pane_g7

0xc73e,	// (0x00067dfd) bg_popup_call_poc_act_pane_g8

0xa520,	// (0x00065bdf) main_usb_pane

0x4408,	// (0x0005fac7) popup_cale_lunar_info_window

0x23a5,	// (0x0005da64) im_reading_pane_t1_ParamLimits

0xab42,	// (0x00066201) list_im_pane_ParamLimits

0xab53,	// (0x00066212) scroll_pane_cp07_ParamLimits

0xa520,	// (0x00065bdf) grid_highlight_pane_cp012

0xa77b,	// (0x00065e3a) mup_scale_pane_ParamLimits

0xb512,	// (0x00066bd1) main_usb_pane_g1_ParamLimits

0xb512,	// (0x00066bd1) main_usb_pane_g1

0x4169,	// (0x0005f828) main_usb_pane_g2_ParamLimits

0x4169,	// (0x0005f828) main_usb_pane_g2

0x0001,

0xf4ae,	// (0x0006ab6d) main_usb_pane_g_ParamLimits

0xf4ae,	// (0x0006ab6d) main_usb_pane_g

0x4175,	// (0x0005f834) main_usb_pane_t1_ParamLimits

0x4175,	// (0x0005f834) main_usb_pane_t1

0x4187,	// (0x0005f846) main_usb_pane_t2_ParamLimits

0x4187,	// (0x0005f846) main_usb_pane_t2

0x4199,	// (0x0005f858) main_usb_pane_t3_ParamLimits

0x4199,	// (0x0005f858) main_usb_pane_t3

0x41ab,	// (0x0005f86a) main_usb_pane_t4_ParamLimits

0x41ab,	// (0x0005f86a) main_usb_pane_t4

0x41bd,	// (0x0005f87c) main_usb_pane_t5_ParamLimits

0x41bd,	// (0x0005f87c) main_usb_pane_t5

0x41cf,	// (0x0005f88e) main_usb_pane_t6_ParamLimits

0x41cf,	// (0x0005f88e) main_usb_pane_t6

0x0005,

0xf4b3,	// (0x0006ab72) main_usb_pane_t_ParamLimits

0x35c5,	// (0x0005ec84) aid_text_placing

0x35d1,	// (0x0005ec90) main_location2_pane_t1_ParamLimits

0x35e5,	// (0x0005eca4) main_location2_pane_t2_ParamLimits

0x35f9,	// (0x0005ecb8) main_location2_pane_t3_ParamLimits

0x360d,	// (0x0005eccc) main_location2_pane_t4_ParamLimits

0x360d,	// (0x0005eccc) main_location2_pane_t4

0xf387,	// (0x0006aa46) main_location2_pane_t_ParamLimits

0xa7b7,	// (0x00065e76) find_pinb_pane_g2_ParamLimits

0xa7b7,	// (0x00065e76) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0006a7de) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0006a7de) find_pinb_pane_g

0xa7c3,	// (0x00065e82) find_pinb_pane_t1_ParamLimits

0xa7d5,	// (0x00065e94) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0006a7e3) find_pinb_pane_t_ParamLimits

0xa520,	// (0x00065bdf) main_call3_pane

0x2b99,	// (0x0005e258) cale_month_day_heading_pane_t1_ParamLimits

0x2c1f,	// (0x0005e2de) cale_month_day_heading_pane_t2_ParamLimits

0x2c98,	// (0x0005e357) cale_month_day_heading_pane_t3_ParamLimits

0x2d11,	// (0x0005e3d0) cale_month_day_heading_pane_t4_ParamLimits

0x2d8a,	// (0x0005e449) cale_month_day_heading_pane_t5_ParamLimits

0x2e03,	// (0x0005e4c2) cale_month_day_heading_pane_t6_ParamLimits

0x2e7c,	// (0x0005e53b) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0006a965) cale_month_day_heading_pane_t_ParamLimits

0xad9d,	// (0x0006645c) smil_status_volume_pane

0x3d28,	// (0x0005f3e7) postcard_address_pane_ParamLimits

0x3d28,	// (0x0005f3e7) postcard_address_pane

0x3d34,	// (0x0005f3f3) postcard_message_pane_ParamLimits

0x3d34,	// (0x0005f3f3) postcard_message_pane

0x412e,	// (0x0005f7ed) call2_cli_visual_pane_t1_ParamLimits

0x412e,	// (0x0005f7ed) call2_cli_visual_pane_t1

0x476f,	// (0x0005fe2e) postcard_message_pane_t1_ParamLimits

0x476f,	// (0x0005fe2e) postcard_message_pane_t1

0x4758,	// (0x0005fe17) postcard_address_pane_t1_ParamLimits

0x4758,	// (0x0005fe17) postcard_address_pane_t1

0x4749,	// (0x0005fe08) popup_call3_audio_in_window_ParamLimits

0x4749,	// (0x0005fe08) popup_call3_audio_in_window

0x462d,	// (0x0005fcec) bg_popup_call3_in_pane_ParamLimits

0x462d,	// (0x0005fcec) bg_popup_call3_in_pane

0x468f,	// (0x0005fd4e) popup_call3_audio_in_window_g1_ParamLimits

0x468f,	// (0x0005fd4e) popup_call3_audio_in_window_g1

0x46a7,	// (0x0005fd66) popup_call3_audio_in_window_g2_ParamLimits

0x46a7,	// (0x0005fd66) popup_call3_audio_in_window_g2

0x46bf,	// (0x0005fd7e) popup_call3_audio_in_window_g3_ParamLimits

0x46bf,	// (0x0005fd7e) popup_call3_audio_in_window_g3

0x0003,

0xf4e5,	// (0x0006aba4) popup_call3_audio_in_window_g_ParamLimits

0xf4e5,	// (0x0006aba4) popup_call3_audio_in_window_g

0x46e7,	// (0x0005fda6) popup_call3_audio_in_window_t1_ParamLimits

0x46e7,	// (0x0005fda6) popup_call3_audio_in_window_t1

0x470f,	// (0x0005fdce) popup_call3_audio_in_window_t2_ParamLimits

0x470f,	// (0x0005fdce) popup_call3_audio_in_window_t2

0x4737,	// (0x0005fdf6) popup_call3_audio_in_window_t3_ParamLimits

0x4737,	// (0x0005fdf6) popup_call3_audio_in_window_t3

0x0002,

0xf4ee,	// (0x0006abad) popup_call3_audio_in_window_t_ParamLimits

0xf4ee,	// (0x0006abad) popup_call3_audio_in_window_t

0xaa41,	// (0x00066100) bg_popup_call3_rect_pane

0xc696,	// (0x00067d55) bg_popup_call3_rect_pane_g1

0xa93f,	// (0x00065ffe) bg_popup_call3_rect_pane_g2

0xc69e,	// (0x00067d5d) bg_popup_call3_rect_pane_g3

0xc6a6,	// (0x00067d65) bg_popup_call3_rect_pane_g4

0xc6ae,	// (0x00067d6d) bg_popup_call3_rect_pane_g5

0xc6b6,	// (0x00067d75) bg_popup_call3_rect_pane_g6

0xc6be,	// (0x00067d7d) bg_popup_call3_rect_pane_g7

0x3935,	// (0x0005eff4) mup_visualizer_osc_pane

0xb541,	// (0x00066c00) mup_visualizer_spec_pane

0x464d,	// (0x0005fd0c) call3_video_qcif_pane_ParamLimits

0x464d,	// (0x0005fd0c) call3_video_qcif_pane

0x465f,	// (0x0005fd1e) call3_video_qcif_uncrop_pane_ParamLimits

0x465f,	// (0x0005fd1e) call3_video_qcif_uncrop_pane

0x466d,	// (0x0005fd2c) call3_video_subqcif_pane_ParamLimits

0x466d,	// (0x0005fd2c) call3_video_subqcif_pane

0x467f,	// (0x0005fd3e) call3_video_subqcif_uncrop_pane_ParamLimits

0x467f,	// (0x0005fd3e) call3_video_subqcif_uncrop_pane

0x46d7,	// (0x0005fd96) popup_call3_audio_in_window_g4_ParamLimits

0x46d7,	// (0x0005fd96) popup_call3_audio_in_window_g4

0x45f8,	// (0x0005fcb7) mup_spec_half_pane

0x4601,	// (0x0005fcc0) mup_spec_half_pane_cp

0xc93b,	// (0x00067ffa) mup_osc_middle_pane

0xc944,	// (0x00068003) mup_visualizer_osc_pane_g1

0x45d9,	// (0x0005fc98) mup_spec_bar_pane_ParamLimits

0x45d9,	// (0x0005fc98) mup_spec_bar_pane

0xc928,	// (0x00067fe7) mup_spec_bar_pane_g1

0xc932,	// (0x00067ff1) mup_spec_bar_pane_g2

0x0001,

0x0509,	// (0x0005bbc8) mup_spec_bar_pane_g

0x1784,	// (0x0005ce43) aid_cale_week_size_cell_pane_ParamLimits

0x1799,	// (0x0005ce58) bg_cale_heading_pane_ParamLimits

0xa99a,	// (0x00066059) bg_cale_pane_cp01_ParamLimits

0x17bb,	// (0x0005ce7a) cale_week_corner_pane_ParamLimits

0x17d5,	// (0x0005ce94) cale_week_day_heading_pane_ParamLimits

0x17f7,	// (0x0005ceb6) cale_week_scroll_pane_g1_ParamLimits

0x1814,	// (0x0005ced3) cale_week_scroll_pane_g2_ParamLimits

0x1827,	// (0x0005cee6) cale_week_scroll_pane_g3_ParamLimits

0x183a,	// (0x0005cef9) cale_week_scroll_pane_g4_ParamLimits

0x184d,	// (0x0005cf0c) cale_week_scroll_pane_g5_ParamLimits

0x1860,	// (0x0005cf1f) cale_week_scroll_pane_g6_ParamLimits

0x1873,	// (0x0005cf32) cale_week_scroll_pane_g7_ParamLimits

0x1888,	// (0x0005cf47) cale_week_scroll_pane_g8_ParamLimits

0x189d,	// (0x0005cf5c) cale_week_scroll_pane_g9_ParamLimits

0x18b0,	// (0x0005cf6f) cale_week_scroll_pane_g10_ParamLimits

0x18c3,	// (0x0005cf82) cale_week_scroll_pane_g11_ParamLimits

0x18d6,	// (0x0005cf95) cale_week_scroll_pane_g12_ParamLimits

0x18ed,	// (0x0005cfac) cale_week_scroll_pane_g13_ParamLimits

0x1908,	// (0x0005cfc7) cale_week_scroll_pane_g14_ParamLimits

0x1923,	// (0x0005cfe2) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0006a86f) cale_week_scroll_pane_g_ParamLimits

0x1953,	// (0x0005d012) cale_week_time_pane_ParamLimits

0x1968,	// (0x0005d027) grid_cale_week_pane_ParamLimits

0xa9b7,	// (0x00066076) listscroll_cale_week_pane_t1

0xa9c9,	// (0x00066088) scroll_pane_cp08_ParamLimits

0x264a,	// (0x0005dd09) cale_month_corner_pane_ParamLimits

0xad73,	// (0x00066432) cale_month_pane_t1

0x2b18,	// (0x0005e1d7) cale_month_week_pane_ParamLimits

0xb512,	// (0x00066bd1) popup_call_status_window_g1_ParamLimits

0x33ce,	// (0x0005ea8d) popup_call_status_window_g2_ParamLimits

0x33da,	// (0x0005ea99) popup_call_status_window_g3_ParamLimits

0xf322,	// (0x0006a9e1) popup_call_status_window_g_ParamLimits

0xb123,	// (0x000667e2) aid_call2_pane

0x3be0,	// (0x0005f29f) msg_header_pane_g1

0x3d28,	// (0x0005f3e7) postcard_address2_pane_ParamLimits

0x3d28,	// (0x0005f3e7) postcard_address2_pane

0x3d34,	// (0x0005f3f3) postcard_message2_pane_ParamLimits

0x3d34,	// (0x0005f3f3) postcard_message2_pane

0x4570,	// (0x0005fc2f) message2_row_pane_ParamLimits

0x4570,	// (0x0005fc2f) message2_row_pane

0x458b,	// (0x0005fc4a) address2_row_pane_ParamLimits

0x458b,	// (0x0005fc4a) address2_row_pane

0xc8f6,	// (0x00067fb5) postcard_message2_row_pane_g1

0xc8fe,	// (0x00067fbd) postcard_message2_row_pane_t1

0xc8f6,	// (0x00067fb5) address2_row_pane_g1

0xc8fe,	// (0x00067fbd) address2_row_pane_t1

0x1bed,	// (0x0005d2ac) aid_size_cell_vorec

0xa520,	// (0x00065bdf) main_rss_pane

0x459e,	// (0x0005fc5d) rss_list_single_pane_ParamLimits

0x459e,	// (0x0005fc5d) rss_list_single_pane

0xc90c,	// (0x00067fcb) rss_list_single_pane_t1

0xc91a,	// (0x00067fd9) rss_list_single_pane_t2

0x0001,

0x0504,	// (0x0005bbc3) rss_list_single_pane_t

0xa520,	// (0x00065bdf) main_camera2_pane

0xa520,	// (0x00065bdf) main_video2_pane

0x47d3,	// (0x0005fe92) cams_zoom_pane_cp2_ParamLimits

0x47d3,	// (0x0005fe92) cams_zoom_pane_cp2

0x47df,	// (0x0005fe9e) image2_vga_pane_ParamLimits

0x47df,	// (0x0005fe9e) image2_vga_pane

0x47ee,	// (0x0005fead) main_camera2_pane_g1_ParamLimits

0x47ee,	// (0x0005fead) main_camera2_pane_g1

0x47fa,	// (0x0005feb9) main_camera2_pane_g2_ParamLimits

0x47fa,	// (0x0005feb9) main_camera2_pane_g2

0x4806,	// (0x0005fec5) main_camera2_pane_g3_ParamLimits

0x4806,	// (0x0005fec5) main_camera2_pane_g3

0x4812,	// (0x0005fed1) main_camera2_pane_g4_ParamLimits

0x4812,	// (0x0005fed1) main_camera2_pane_g4

0x481e,	// (0x0005fedd) main_camera2_pane_g5_ParamLimits

0x481e,	// (0x0005fedd) main_camera2_pane_g5

0x482a,	// (0x0005fee9) main_camera2_pane_g6_ParamLimits

0x482a,	// (0x0005fee9) main_camera2_pane_g6

0x4836,	// (0x0005fef5) main_camera2_pane_g7_ParamLimits

0x4836,	// (0x0005fef5) main_camera2_pane_g7

0x4842,	// (0x0005ff01) main_camera2_pane_g8_ParamLimits

0x4842,	// (0x0005ff01) main_camera2_pane_g8

0x0008,

0xf4f5,	// (0x0006abb4) main_camera2_pane_g_ParamLimits

0xf4f5,	// (0x0006abb4) main_camera2_pane_g

0x485a,	// (0x0005ff19) main_camera2_pane_t1_ParamLimits

0x485a,	// (0x0005ff19) main_camera2_pane_t1

0x486c,	// (0x0005ff2b) main_camera2_pane_t2_ParamLimits

0x486c,	// (0x0005ff2b) main_camera2_pane_t2

0x487e,	// (0x0005ff3d) main_camera2_pane_t3_ParamLimits

0x487e,	// (0x0005ff3d) main_camera2_pane_t3

0x4890,	// (0x0005ff4f) main_camera2_pane_t4_ParamLimits

0x4890,	// (0x0005ff4f) main_camera2_pane_t4

0x0006,

0xf508,	// (0x0006abc7) main_camera2_pane_t_ParamLimits

0xf508,	// (0x0006abc7) main_camera2_pane_t

0x48f2,	// (0x0005ffb1) cams_zoom_pane_cp4_ParamLimits

0x48f2,	// (0x0005ffb1) cams_zoom_pane_cp4

0x4902,	// (0x0005ffc1) image2_cif_pane_ParamLimits

0x4902,	// (0x0005ffc1) image2_cif_pane

0x4917,	// (0x0005ffd6) image2_subqcif_pane_ParamLimits

0x4917,	// (0x0005ffd6) image2_subqcif_pane

0x4926,	// (0x0005ffe5) main_video2_pane_g1_ParamLimits

0x4926,	// (0x0005ffe5) main_video2_pane_g1

0x4938,	// (0x0005fff7) main_video2_pane_g2_ParamLimits

0x4938,	// (0x0005fff7) main_video2_pane_g2

0x4948,	// (0x00060007) main_video2_pane_g3_ParamLimits

0x4948,	// (0x00060007) main_video2_pane_g3

0x4958,	// (0x00060017) main_video2_pane_g4_ParamLimits

0x4958,	// (0x00060017) main_video2_pane_g4

0x4968,	// (0x00060027) main_video2_pane_g5_ParamLimits

0x4968,	// (0x00060027) main_video2_pane_g5

0x4978,	// (0x00060037) main_video2_pane_g6_ParamLimits

0x4978,	// (0x00060037) main_video2_pane_g6

0x0005,

0xf517,	// (0x0006abd6) main_video2_pane_g_ParamLimits

0xf517,	// (0x0006abd6) main_video2_pane_g

0x498a,	// (0x00060049) main_video2_pane_t1_ParamLimits

0x498a,	// (0x00060049) main_video2_pane_t1

0x49a4,	// (0x00060063) main_video2_pane_t2_ParamLimits

0x49a4,	// (0x00060063) main_video2_pane_t2

0x49ca,	// (0x00060089) main_video2_pane_t3_ParamLimits

0x49ca,	// (0x00060089) main_video2_pane_t3

0x0002,

0xf524,	// (0x0006abe3) main_video2_pane_t_ParamLimits

0xf524,	// (0x0006abe3) main_video2_pane_t

0x4286,	// (0x0005f945) call_muted_g2

0x0001,

0xf4d9,	// (0x0006ab98) call_muted_g

0xa520,	// (0x00065bdf) main_mup2_pane

0xc987,	// (0x00068046) main_mup2_pane_g1_ParamLimits

0xc987,	// (0x00068046) main_mup2_pane_g1

0x49f0,	// (0x000600af) main_mup2_pane_g2_ParamLimits

0x49f0,	// (0x000600af) main_mup2_pane_g2

0x4c72,	// (0x00060331) main_mup_pane_g13_cp1

0x4c7a,	// (0x00060339) mup_volume_pane_cp1

0x4a10,	// (0x000600cf) main_mup2_pane_g4_ParamLimits

0x4a10,	// (0x000600cf) main_mup2_pane_g4

0x4a25,	// (0x000600e4) main_mup2_pane_g5_ParamLimits

0x4a25,	// (0x000600e4) main_mup2_pane_g5

0x4a3a,	// (0x000600f9) main_mup2_pane_g6_ParamLimits

0x4a3a,	// (0x000600f9) main_mup2_pane_g6

0x4a4f,	// (0x0006010e) main_mup2_pane_g7_ParamLimits

0x4a4f,	// (0x0006010e) main_mup2_pane_g7

0x0006,

0xf52b,	// (0x0006abea) main_mup2_pane_g_ParamLimits

0xf52b,	// (0x0006abea) main_mup2_pane_g

0x4a6b,	// (0x0006012a) main_mup2_pane_t1_ParamLimits

0x4a6b,	// (0x0006012a) main_mup2_pane_t1

0x4a82,	// (0x00060141) main_mup2_pane_t2_ParamLimits

0x4a82,	// (0x00060141) main_mup2_pane_t2

0x4a99,	// (0x00060158) main_mup2_pane_t3_ParamLimits

0x4a99,	// (0x00060158) main_mup2_pane_t3

0x4ab0,	// (0x0006016f) main_mup2_pane_t4_ParamLimits

0x4ab0,	// (0x0006016f) main_mup2_pane_t4

0x4aca,	// (0x00060189) main_mup2_pane_t5_ParamLimits

0x4aca,	// (0x00060189) main_mup2_pane_t5

0x4ae4,	// (0x000601a3) main_mup2_pane_t6_ParamLimits

0x4ae4,	// (0x000601a3) main_mup2_pane_t6

0x0005,

0xf53a,	// (0x0006abf9) main_mup2_pane_t_ParamLimits

0xf53a,	// (0x0006abf9) main_mup2_pane_t

0x4b1c,	// (0x000601db) mup2_visualizer_pane_ParamLimits

0x4b1c,	// (0x000601db) mup2_visualizer_pane

0x4b52,	// (0x00060211) mup_progress_pane_cp_ParamLimits

0x4b52,	// (0x00060211) mup_progress_pane_cp

0x4c5d,	// (0x0006031c) mup_volume_pane_cp_ParamLimits

0x4c5d,	// (0x0006031c) mup_volume_pane_cp

0x4b69,	// (0x00060228) mup2_visualizer_pane_g1_ParamLimits

0x4b69,	// (0x00060228) mup2_visualizer_pane_g1

0xc97b,	// (0x0006803a) mup2_visualizer_pane_g2_ParamLimits

0xc97b,	// (0x0006803a) mup2_visualizer_pane_g2

0x4b7e,	// (0x0006023d) mup2_visualizer_pane_g3_ParamLimits

0x4b7e,	// (0x0006023d) mup2_visualizer_pane_g3

0x0002,

0xf547,	// (0x0006ac06) mup2_visualizer_pane_g_ParamLimits

0xf547,	// (0x0006ac06) mup2_visualizer_pane_g

0xb768,	// (0x00066e27) aid_size_cell_fmradio

0x439c,	// (0x0005fa5b) aid_height_parent_landcape

0xabd1,	// (0x00066290) wml_content_pane_cp

0xabd9,	// (0x00066298) wml_tabs_pane

0xabe2,	// (0x000662a1) popup_wml_miniature_window

0xabea,	// (0x000662a9) scroll_pane_cp021

0xabfe,	// (0x000662bd) wml_content_pane_comp8

0xa520,	// (0x00065bdf) bg_popup_sub_pane_cp05

0xc9a5,	// (0x00068064) popup_wml_miniature_window_g1

0xc9ad,	// (0x0006806c) wml_miniature_view_pane

0x4b8c,	// (0x0006024b) aid_size_wml_view

0x4b94,	// (0x00060253) wml_miniature_view_pane_g1

0x4b9d,	// (0x0006025c) wml_miniature_view_pane_g2

0x4ba6,	// (0x00060265) wml_miniature_view_pane_g3

0x4bae,	// (0x0006026d) wml_miniature_view_pane_g4

0x4bb6,	// (0x00060275) wml_miniature_view_pane_g5

0x4bbe,	// (0x0006027d) wml_miniature_view_pane_g6

0x4bc6,	// (0x00060285) wml_miniature_view_pane_g7

0x4bce,	// (0x0006028d) wml_miniature_view_pane_g8

0x0007,

0xf54e,	// (0x0006ac0d) wml_miniature_view_pane_g

0xc987,	// (0x00068046) background_graphic_ParamLimits

0xc987,	// (0x00068046) background_graphic

0xc9b5,	// (0x00068074) wml_tabs_2_pane

0xc9be,	// (0x0006807d) wml_tabs_3_pane_ParamLimits

0xc9be,	// (0x0006807d) wml_tabs_3_pane

0xc9d0,	// (0x0006808f) wml_tabs_4_pane_ParamLimits

0xc9d0,	// (0x0006808f) wml_tabs_4_pane

0xc9e6,	// (0x000680a5) wml_tabs_5_pane_ParamLimits

0xc9e6,	// (0x000680a5) wml_tabs_5_pane

0xca00,	// (0x000680bf) wml_tabs_pane_g2_ParamLimits

0xca00,	// (0x000680bf) wml_tabs_pane_g2

0xca14,	// (0x000680d3) wml_tabs_pane_g3_ParamLimits

0xca14,	// (0x000680d3) wml_tabs_pane_g3

0x4bd6,	// (0x00060295) wml_tabs_2_active_pane_ParamLimits

0x4bd6,	// (0x00060295) wml_tabs_2_active_pane

0x4be6,	// (0x000602a5) wml_tabs_2_passive_pane_ParamLimits

0x4be6,	// (0x000602a5) wml_tabs_2_passive_pane

0x4bf6,	// (0x000602b5) wml_tabs_3_active_pane_cp_ParamLimits

0x4bf6,	// (0x000602b5) wml_tabs_3_active_pane_cp

0x4c07,	// (0x000602c6) wml_tabs_3_passive_pane_ParamLimits

0x4c07,	// (0x000602c6) wml_tabs_3_passive_pane

0x4c18,	// (0x000602d7) wml_tabs_3_passive_pane_cp_ParamLimits

0x4c18,	// (0x000602d7) wml_tabs_3_passive_pane_cp

0x4c29,	// (0x000602e8) tabs_4_active_pane

0x4c31,	// (0x000602f0) tabs_4_passive_pane

0x4c39,	// (0x000602f8) tabs_4_passive_pane_cp

0x4c41,	// (0x00060300) tabs_4_passive_pane_cp2

0x4161,	// (0x0005f820) aid_height_text

0x38fe,	// (0x0005efbd) mup_volume_cont_pane_ParamLimits

0x38fe,	// (0x0005efbd) mup_volume_cont_pane

0x12bb,	// (0x0005c97a) aid_size_cell_pinb

0x12c5,	// (0x0005c984) aid_size_list_pinb

0x4b3b,	// (0x000601fa) mup2_volume_cont_pane_ParamLimits

0x4b3b,	// (0x000601fa) mup2_volume_cont_pane

0x4c49,	// (0x00060308) mup2_volume_cont_pane_g1_ParamLimits

0x4c49,	// (0x00060308) mup2_volume_cont_pane_g1

0x0edd,	// (0x0005c59c) aid_size_cell_touch_ParamLimits

0x0edd,	// (0x0005c59c) aid_size_cell_touch

0x119e,	// (0x0005c85d) touch_pane_ParamLimits

0x119e,	// (0x0005c85d) touch_pane

0x1194,	// (0x0005c853) main_rss2_pane

0xca31,	// (0x000680f0) listscroll_rss2_pane

0xca3a,	// (0x000680f9) rss2_navigation_pane

0xca42,	// (0x00068101) list_rss2_pane

0xb248,	// (0x00066907) scroll_pane_cp22

0xca4a,	// (0x00068109) rss2_navigation_pane_g1

0xca53,	// (0x00068112) rss2_navigation_pane_g2

0xca5b,	// (0x0006811a) rss2_navigation_pane_g3

0x0002,

0x058f,	// (0x0005bc4e) rss2_navigation_pane_g

0xca63,	// (0x00068122) rss2_navigation_pane_t1

0x4c82,	// (0x00060341) rss2_list_single_pane_ParamLimits

0x4c82,	// (0x00060341) rss2_list_single_pane

0xca71,	// (0x00068130) rss2_list_single_pane_t2

0xca7f,	// (0x0006813e) rss2_list_single_pane_t3_ParamLimits

0xca7f,	// (0x0006813e) rss2_list_single_pane_t3

0xca9c,	// (0x0006815b) rss2_list_single_pane_t4

0x3148,	// (0x0005e807) smil_status_pane_g1

0x43b3,	// (0x0005fa72) main_image2_pane_ParamLimits

0x43b3,	// (0x0005fa72) main_image2_pane

0x484e,	// (0x0005ff0d) main_camera2_pane_g9_ParamLimits

0x484e,	// (0x0005ff0d) main_camera2_pane_g9

0x48a2,	// (0x0005ff61) main_camera2_pane_t5_ParamLimits

0x48a2,	// (0x0005ff61) main_camera2_pane_t5

0x48b4,	// (0x0005ff73) main_camera2_pane_t6_ParamLimits

0x48b4,	// (0x0005ff73) main_camera2_pane_t6

0x4cb6,	// (0x00060375) main_image2_pane_g1_ParamLimits

0x4cb6,	// (0x00060375) main_image2_pane_g1

0x3efb,	// (0x0005f5ba) smil2_video_pane_ParamLimits

0x3efb,	// (0x0005f5ba) smil2_video_pane

0x0de1,	// (0x0005c4a0) aid_zoom_text_primary_cp

0x112f,	// (0x0005c7ee) popup_preview_fixed_window

0xab3a,	// (0x000661f9) im_reading_pane_g1

0x4798,	// (0x0005fe57) cams2_bc_adjust_pane_cp_ParamLimits

0x4798,	// (0x0005fe57) cams2_bc_adjust_pane_cp

0x48e4,	// (0x0005ffa3) cams2_bc_adjust_pane_ParamLimits

0x48e4,	// (0x0005ffa3) cams2_bc_adjust_pane

0xdc81,	// (0x00069340) cams2_bc_adjust_pane_g1

0x4cc2,	// (0x00060381) cams2_slider_pane

0x4ccb,	// (0x0006038a) cams2_slider_pane_g1

0x4cd4,	// (0x00060393) cams2_slider_pane_g2

0x0006,

0xf55f,	// (0x0006ac1e) cams2_slider_pane_g

0x13c5,	// (0x0005ca84) calc_display_pane_ParamLimits

0x13e3,	// (0x0005caa2) calc_paper_pane_ParamLimits

0x13ff,	// (0x0005cabe) grid_calc_pane_ParamLimits

0x3438,	// (0x0005eaf7) popup_clock_digital_window_t1_ParamLimits

0xb705,	// (0x00066dc4) main_image_pane_t1

0x13ab,	// (0x0005ca6a) aid_size_cell_calc_ParamLimits

0x13ab,	// (0x0005ca6a) aid_size_cell_calc

0x43e4,	// (0x0005faa3) popup_blid_sat_info2_window_ParamLimits

0x43e4,	// (0x0005faa3) popup_blid_sat_info2_window

0xcab2,	// (0x00068171) aid_size_cell_blid

0xcaba,	// (0x00068179) bg_popup_window_pane_cp07

0xcadd,	// (0x0006819c) grid_popup_blid_pane

0xcae7,	// (0x000681a6) heading_pane_cp05_ParamLimits

0xcae7,	// (0x000681a6) heading_pane_cp05

0xcbb1,	// (0x00068270) cell_popup_blid_pane_ParamLimits

0xcbb1,	// (0x00068270) cell_popup_blid_pane

0xcbd5,	// (0x00068294) cell_popup_blid_pane_g1

0xcbdd,	// (0x0006829c) cell_popup_blid_pane_t1

0x4b01,	// (0x000601c0) mup2_indicator_pane_ParamLimits

0x4b01,	// (0x000601c0) mup2_indicator_pane

0xaa41,	// (0x00066100) mup2_visualizer_osc_pane

0xc993,	// (0x00068052) mup2_visualizer_spec_pane_ParamLimits

0xc993,	// (0x00068052) mup2_visualizer_spec_pane

0x4cee,	// (0x000603ad) mup2_spec_half_pane

0x4cf7,	// (0x000603b6) mup2_spec_half_pane_cp

0x4d01,	// (0x000603c0) mup2_spec_bar_pane_ParamLimits

0x4d01,	// (0x000603c0) mup2_spec_bar_pane

0xc928,	// (0x00067fe7) mup2_spec_bar_pane_g1

0xc932,	// (0x00067ff1) mup2_spec_bar_pane_g2

0x0001,

0x0509,	// (0x0005bbc8) mup2_spec_bar_pane_g

0x4d20,	// (0x000603df) mup2_osc_middle_pane

0xc944,	// (0x00068003) mup2_visualizer_osc_pane_g1

0x9b7c,	// (0x0006523b) popup_number_entry_window_t1_ParamLimits

0x9b8f,	// (0x0006524e) popup_number_entry_window_t2_ParamLimits

0x9ba1,	// (0x00065260) popup_number_entry_window_t3_ParamLimits

0x11f5,	// (0x0005c8b4) popup_number_entry_window_t5_ParamLimits

0x11f5,	// (0x0005c8b4) popup_number_entry_window_t5

0xf0ca,	// (0x0006a789) popup_number_entry_window_t_ParamLimits

0x9bb3,	// (0x00065272) text_title_cp2_ParamLimits

0x3bfc,	// (0x0005f2bb) aid_hotspot_pointer_text2_pane

0x3c8a,	// (0x0005f349) main_viewer_pane_g9_ParamLimits

0x3c8a,	// (0x0005f349) main_viewer_pane_g9

0xad73,	// (0x00066432) cale_month_pane_t1_ParamLimits

0xadb0,	// (0x0006646f) bg_cale_pane_ParamLimits

0xadc8,	// (0x00066487) list_cale_pane_ParamLimits

0xadd9,	// (0x00066498) listscroll_cale_day_pane_t1

0xadeb,	// (0x000664aa) scroll_pane_cp09_ParamLimits

0x393d,	// (0x0005effc) main_mup_eq_pane_t1_ParamLimits

0x393d,	// (0x0005effc) main_mup_eq_pane_t1

0x3957,	// (0x0005f016) main_mup_eq_pane_t2_ParamLimits

0x3957,	// (0x0005f016) main_mup_eq_pane_t2

0x396f,	// (0x0005f02e) main_mup_eq_pane_t3_ParamLimits

0x396f,	// (0x0005f02e) main_mup_eq_pane_t3

0x3987,	// (0x0005f046) main_mup_eq_pane_t4_ParamLimits

0x3987,	// (0x0005f046) main_mup_eq_pane_t4

0x399f,	// (0x0005f05e) main_mup_eq_pane_t5_ParamLimits

0x399f,	// (0x0005f05e) main_mup_eq_pane_t5

0x39b7,	// (0x0005f076) main_mup_eq_pane_t6_ParamLimits

0x39b7,	// (0x0005f076) main_mup_eq_pane_t6

0x39cb,	// (0x0005f08a) main_mup_eq_pane_t7_ParamLimits

0x39cb,	// (0x0005f08a) main_mup_eq_pane_t7

0x39df,	// (0x0005f09e) main_mup_eq_pane_t8_ParamLimits

0x39df,	// (0x0005f09e) main_mup_eq_pane_t8

0x39f5,	// (0x0005f0b4) main_mup_eq_pane_t9_ParamLimits

0x39f5,	// (0x0005f0b4) main_mup_eq_pane_t9

0x3a0d,	// (0x0005f0cc) main_mup_eq_pane_t10_ParamLimits

0x3a0d,	// (0x0005f0cc) main_mup_eq_pane_t10

0x0009,

0xf3f1,	// (0x0006aab0) main_mup_eq_pane_t_ParamLimits

0xf3f1,	// (0x0006aab0) main_mup_eq_pane_t

0x3aca,	// (0x0005f189) mup_equalizer_pane_cp5_ParamLimits

0x3ae0,	// (0x0005f19f) mup_equalizer_pane_cp6_ParamLimits

0x3af8,	// (0x0005f1b7) mup_equalizer_pane_cp7_ParamLimits

0x1194,	// (0x0005c853) main_gallery_pane

0xc94d,	// (0x0006800c) smil2_volume_pane

0xc955,	// (0x00068014) smil_status_volume_pane_g1_ParamLimits

0xc968,	// (0x00068027) smil_status_volume_pane_g2_ParamLimits

0x460b,	// (0x0005fcca) smil_status_volume_pane_g3_ParamLimits

0xf4de,	// (0x0006ab9d) smil_status_volume_pane_g_ParamLimits

0xcaba,	// (0x00068179) bg_popup_window_pane_cp07_ParamLimits

0xcac8,	// (0x00068187) blid_firmament_pane

0x4d29,	// (0x000603e8) aid_size_cell_gallery_ParamLimits

0x4d29,	// (0x000603e8) aid_size_cell_gallery

0x4d37,	// (0x000603f6) grid_gallery_pane_ParamLimits

0x4d37,	// (0x000603f6) grid_gallery_pane

0x4d47,	// (0x00060406) cell_gallery_pane_ParamLimits

0x4d47,	// (0x00060406) cell_gallery_pane

0xcbeb,	// (0x000682aa) bg_cell_gallery_focus_pane_ParamLimits

0xcbeb,	// (0x000682aa) bg_cell_gallery_focus_pane

0xcbfd,	// (0x000682bc) cell_gallery_pane_g1_ParamLimits

0xcbfd,	// (0x000682bc) cell_gallery_pane_g1

0x4d95,	// (0x00060454) cell_gallery_pane_g2_ParamLimits

0x4d95,	// (0x00060454) cell_gallery_pane_g2

0x4da2,	// (0x00060461) cell_gallery_pane_g3_ParamLimits

0x4da2,	// (0x00060461) cell_gallery_pane_g3

0xcc09,	// (0x000682c8) cell_gallery_pane_g4_ParamLimits

0xcc09,	// (0x000682c8) cell_gallery_pane_g4

0x0003,

0xf56e,	// (0x0006ac2d) cell_gallery_pane_g_ParamLimits

0xf56e,	// (0x0006ac2d) cell_gallery_pane_g

0xcc15,	// (0x000682d4) bg_cell_gallery_focus_pane_g1

0xcc1d,	// (0x000682dc) bg_cell_gallery_focus_pane_g2

0xcc25,	// (0x000682e4) bg_cell_gallery_focus_pane_g3

0xcc2d,	// (0x000682ec) bg_cell_gallery_focus_pane_g4

0xcc35,	// (0x000682f4) bg_cell_gallery_focus_pane_g5

0xcc3d,	// (0x000682fc) bg_cell_gallery_focus_pane_g6

0xcc45,	// (0x00068304) bg_cell_gallery_focus_pane_g7

0xcc4d,	// (0x0006830c) bg_cell_gallery_focus_pane_g8

0x0007,

0x05c5,	// (0x0005bc84) bg_cell_gallery_focus_pane_g

0xcc55,	// (0x00068314) aid_firma_cardinal

0xcc69,	// (0x00068328) blid_firmament_pane_t1

0xcc80,	// (0x0006833f) blid_firmament_pane_t2

0xcc97,	// (0x00068356) blid_firmament_pane_t3

0xccae,	// (0x0006836d) blid_firmament_pane_t4

0x0003,

0x05d6,	// (0x0005bc95) blid_firmament_pane_t

0xccc5,	// (0x00068384) blid_sat_info_pane

0xccd5,	// (0x00068394) blid_sat_info_pane_g1

0xccd5,	// (0x00068394) blid_sat_info_pane_g2

0x0001,

0x05df,	// (0x0005bc9e) blid_sat_info_pane_g

0xccdf,	// (0x0006839e) blid_sat_info_pane_t1

0xcced,	// (0x000683ac) smil2_volume_content_pane

0xccf6,	// (0x000683b5) smil2_volume_pane_g1

0xccfe,	// (0x000683bd) smil2_volume_content_pane_g1

0xcd07,	// (0x000683c6) smil2_volume_content_pane_g2

0xcd10,	// (0x000683cf) smil2_volume_content_pane_g3

0xcd19,	// (0x000683d8) smil2_volume_content_pane_g4

0xcd22,	// (0x000683e1) smil2_volume_content_pane_g5

0xcd2b,	// (0x000683ea) smil2_volume_content_pane_g6

0xcd34,	// (0x000683f3) smil2_volume_content_pane_g7

0xcd3d,	// (0x000683fc) smil2_volume_content_pane_g8

0xcd46,	// (0x00068405) smil2_volume_content_pane_g9

0xcd4f,	// (0x0006840e) smil2_volume_content_pane_g10

0x0009,

0xf577,	// (0x0006ac36) smil2_volume_content_pane_g

0x19e9,	// (0x0005d0a8) cale_week_day_heading_pane_t1_ParamLimits

0x1a04,	// (0x0005d0c3) cale_week_day_heading_pane_t2_ParamLimits

0x1a1f,	// (0x0005d0de) cale_week_day_heading_pane_t3_ParamLimits

0x1a3a,	// (0x0005d0f9) cale_week_day_heading_pane_t4_ParamLimits

0x1a55,	// (0x0005d114) cale_week_day_heading_pane_t5_ParamLimits

0x1a70,	// (0x0005d12f) cale_week_day_heading_pane_t6_ParamLimits

0x1a8b,	// (0x0005d14a) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0006a890) cale_week_day_heading_pane_t_ParamLimits

0xa9e6,	// (0x000660a5) bg_cale_side_pane_ParamLimits

0x1aa6,	// (0x0005d165) cale_week_time_pane_t1_ParamLimits

0x1ac0,	// (0x0005d17f) cale_week_time_pane_t2_ParamLimits

0x1ada,	// (0x0005d199) cale_week_time_pane_t3_ParamLimits

0x1af4,	// (0x0005d1b3) cale_week_time_pane_t4_ParamLimits

0x1b0e,	// (0x0005d1cd) cale_week_time_pane_t5_ParamLimits

0x1b28,	// (0x0005d1e7) cale_week_time_pane_t6_ParamLimits

0x1b48,	// (0x0005d207) cale_week_time_pane_t7_ParamLimits

0x1b6a,	// (0x0005d229) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0006a89f) cale_week_time_pane_t_ParamLimits

0x1b8e,	// (0x0005d24d) cell_cale_week_pane_g2_ParamLimits

0xa9e6,	// (0x000660a5) bg_cale_side_pane_cp01_ParamLimits

0x2f0d,	// (0x0005e5cc) cale_month_week_pane_t1_ParamLimits

0x2f26,	// (0x0005e5e5) cale_month_week_pane_t2_ParamLimits

0x2f3f,	// (0x0005e5fe) cale_month_week_pane_t3_ParamLimits

0x2f58,	// (0x0005e617) cale_month_week_pane_t4_ParamLimits

0x2f73,	// (0x0005e632) cale_month_week_pane_t5_ParamLimits

0x2f94,	// (0x0005e653) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0006a974) cale_month_week_pane_t_ParamLimits

0x3105,	// (0x0005e7c4) cell_cale_month_pane_g1_ParamLimits

0x1194,	// (0x0005c853) main_cale_event_viewer_pane

0x9b52,	// (0x00065211) listscroll_cale_event_viewer_pane

0xcd58,	// (0x00068417) list_cale_ev_pane

0xcd6c,	// (0x0006842b) scroll_pane_cp023

0xcd78,	// (0x00068437) field_cale_ev_pane_ParamLimits

0xcd78,	// (0x00068437) field_cale_ev_pane

0xcd96,	// (0x00068455) field_cale_ev_content_pane_ParamLimits

0xcd96,	// (0x00068455) field_cale_ev_content_pane

0xcda2,	// (0x00068461) field_cale_ev_pane_g1_ParamLimits

0xcda2,	// (0x00068461) field_cale_ev_pane_g1

0xcdae,	// (0x0006846d) field_cale_ev_pane_g2_ParamLimits

0xcdae,	// (0x0006846d) field_cale_ev_pane_g2

0xcdc6,	// (0x00068485) field_cale_ev_pane_g3_ParamLimits

0xcdc6,	// (0x00068485) field_cale_ev_pane_g3

0x0002,

0x05f9,	// (0x0005bcb8) field_cale_ev_pane_g_ParamLimits

0x05f9,	// (0x0005bcb8) field_cale_ev_pane_g

0xcdde,	// (0x0006849d) field_cale_ev_pane_t1_ParamLimits

0xcdde,	// (0x0006849d) field_cale_ev_pane_t1

0xa959,	// (0x00066018) field_cale_ev_content_pane_t1_ParamLimits

0xa959,	// (0x00066018) field_cale_ev_content_pane_t1

0xb5eb,	// (0x00066caa) bg_button_pane_cp01

0x1774,	// (0x0005ce33) listscroll_cale_week_pane_ParamLimits

0xa991,	// (0x00066050) popup_toolbar_window_cp01

0xa9b7,	// (0x00066076) listscroll_cale_week_pane_t1_ParamLimits

0x1774,	// (0x0005ce33) listscroll_cale_day_pane_ParamLimits

0xa991,	// (0x00066050) popup_toolbar_window_cp02

0xadd9,	// (0x00066498) listscroll_cale_day_pane_t1_ParamLimits

0x1774,	// (0x0005ce33) main_cale_month_pane_ParamLimits

0x44e7,	// (0x0005fba6) popup_toolbar_window_cp03_ParamLimits

0x44e7,	// (0x0005fba6) popup_toolbar_window_cp03

0x3e11,	// (0x0005f4d0) main_image_pane_g2_ParamLimits

0x3e11,	// (0x0005f4d0) main_image_pane_g2

0x3e1d,	// (0x0005f4dc) main_image_pane_g3_ParamLimits

0x3e1d,	// (0x0005f4dc) main_image_pane_g3

0x0002,

0xf479,	// (0x0006ab38) main_image_pane_g_ParamLimits

0xf479,	// (0x0006ab38) main_image_pane_g

0xb705,	// (0x00066dc4) main_image_pane_t1_ParamLimits

0x3e29,	// (0x0005f4e8) main_image_pane_t2_ParamLimits

0x3e29,	// (0x0005f4e8) main_image_pane_t2

0x3e3b,	// (0x0005f4fa) main_image_pane_t3_ParamLimits

0x3e3b,	// (0x0005f4fa) main_image_pane_t3

0x3e4d,	// (0x0005f50c) main_image_pane_t4_ParamLimits

0x3e4d,	// (0x0005f50c) main_image_pane_t4

0x0003,

0xf480,	// (0x0006ab3f) main_image_pane_t_ParamLimits

0xf480,	// (0x0006ab3f) main_image_pane_t

0x3e5f,	// (0x0005f51e) popup_image_details_window_cp01

0x3e69,	// (0x0005f528) popup_toobar_trans_pane_cp01_ParamLimits

0x3e69,	// (0x0005f528) popup_toobar_trans_pane_cp01

0x4437,	// (0x0005faf6) popup_image_details_window_ParamLimits

0x4437,	// (0x0005faf6) popup_image_details_window

0x4445,	// (0x0005fb04) popup_image_focus_window

0x478a,	// (0x0005fe49) camera2_autofocus_pane_ParamLimits

0x478a,	// (0x0005fe49) camera2_autofocus_pane

0x9b52,	// (0x00065211) bg_popup_sub_pane_cp06

0xcdf5,	// (0x000684b4) popup_image_focus_window_g1

0xcdfd,	// (0x000684bc) popup_image_focus_window_g2

0xce05,	// (0x000684c4) popup_image_focus_window_g3

0xce0d,	// (0x000684cc) popup_image_focus_window_g4

0x0003,

0x0600,	// (0x0005bcbf) popup_image_focus_window_g

0xce15,	// (0x000684d4) popup_image_focus_window_t1

0xce23,	// (0x000684e2) popup_image_focus_window_t2

0xce33,	// (0x000684f2) popup_image_focus_window_t3

0x0002,

0x0609,	// (0x0005bcc8) popup_image_focus_window_t

0xce41,	// (0x00068500) camera2_autofocus_pane_g1

0xa245,	// (0x00065904) bg_tb_trans_pane_cp01

0xce4f,	// (0x0006850e) popup_image_details_window_g1

0xce62,	// (0x00068521) popup_image_details_window_g2

0x0002,

0x061b,	// (0x0005bcda) popup_image_details_window_g

0xce8b,	// (0x0006854a) popup_image_details_window_t1

0xce9d,	// (0x0006855c) popup_image_details_window_t2

0xceb6,	// (0x00068575) popup_image_details_window_t3

0xceca,	// (0x00068589) popup_image_details_window_t4

0xcee5,	// (0x000685a4) popup_image_details_window_t5

0x0004,

0x0622,	// (0x0005bce1) popup_image_details_window_t

0xa838,	// (0x00065ef7) bg_calc_paper_pane_ParamLimits

0x1194,	// (0x0005c853) grid_highlight_pane_cp013

0x14fc,	// (0x0005cbbb) list_calc_pane_ParamLimits

0x150e,	// (0x0005cbcd) scroll_pane_cp024

0xa84c,	// (0x00065f0b) bg_calc_display_pane_ParamLimits

0x1516,	// (0x0005cbd5) calc_display_pane_t1_ParamLimits

0x152b,	// (0x0005cbea) calc_display_pane_t2_ParamLimits

0x1540,	// (0x0005cbff) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0006a810) calc_display_pane_t_ParamLimits

0x161d,	// (0x0005ccdc) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0006a82d) cell_calc_pane_g

0x1626,	// (0x0005cce5) cell_calc_pane_t1

0xa8ab,	// (0x00065f6a) grid_highlight_pane_cp02_ParamLimits

0xa8c1,	// (0x00065f80) toolbar_button_pane_cp01_ParamLimits

0xa8c1,	// (0x00065f80) toolbar_button_pane_cp01

0xb74a,	// (0x00066e09) temp_image_control_pane_ParamLimits

0xb74a,	// (0x00066e09) temp_image_control_pane

0x43b3,	// (0x0005fa72) main_mp3_pane

0xceff,	// (0x000685be) temp_image_control_pane_g1_ParamLimits

0xceff,	// (0x000685be) temp_image_control_pane_g1

0xcf0d,	// (0x000685cc) temp_image_control_pane_g2_ParamLimits

0xcf0d,	// (0x000685cc) temp_image_control_pane_g2

0xcf1f,	// (0x000685de) temp_image_control_pane_g3_ParamLimits

0xcf1f,	// (0x000685de) temp_image_control_pane_g3

0x4ddf,	// (0x0006049e) temp_image_control_pane_g4_ParamLimits

0x4ddf,	// (0x0006049e) temp_image_control_pane_g4

0x0003,

0xf597,	// (0x0006ac56) temp_image_control_pane_g_ParamLimits

0xf597,	// (0x0006ac56) temp_image_control_pane_g

0xceff,	// (0x000685be) main_mp3_pane_g1

0x4df0,	// (0x000604af) main_mp3_pane_g2

0x0007,

0xf5a0,	// (0x0006ac5f) main_mp3_pane_g

0xcf62,	// (0x00068621) main_mp3_pane_t1

0xaa49,	// (0x00066108) main_camera_pane_g8_ParamLimits

0xaa49,	// (0x00066108) main_camera_pane_g8

0x1e18,	// (0x0005d4d7) main_video_pane_g7_ParamLimits

0x1e18,	// (0x0005d4d7) main_video_pane_g7

0x48d2,	// (0x0005ff91) main_camera2_pane_t7_ParamLimits

0x48d2,	// (0x0005ff91) main_camera2_pane_t7

0xab91,	// (0x00066250) scroll_pane_cp025_ParamLimits

0xab91,	// (0x00066250) scroll_pane_cp025

0xaba5,	// (0x00066264) scroll_pane_cp026_ParamLimits

0xaba5,	// (0x00066264) scroll_pane_cp026

0xabb4,	// (0x00066273) wml_content_pane_ParamLimits

0x1194,	// (0x0005c853) main_touch_calib_pane

0x4e94,	// (0x00060553) main_touch_calib_pane_g1

0x4ea0,	// (0x0006055f) main_touch_calib_pane_g2

0x4eac,	// (0x0006056b) main_touch_calib_pane_g3

0x4eb8,	// (0x00060577) main_touch_calib_pane_g4

0x0003,

0xf5be,	// (0x0006ac7d) main_touch_calib_pane_g

0x4ec4,	// (0x00060583) main_touch_calib_pane_t1

0x4edd,	// (0x0006059c) main_touch_calib_pane_t2

0x0004,

0xf5c7,	// (0x0006ac86) main_touch_calib_pane_t

0xb317,	// (0x000669d6) mup_progress_pane_cp02

0xb34c,	// (0x00066a0b) navi_pane_g1

0xb407,	// (0x00066ac6) navi_pane_mp_t3

0x43b3,	// (0x0005fa72) main_mp3_pane_ParamLimits

0x4524,	// (0x0005fbe3) navi_pane_ParamLimits

0xceff,	// (0x000685be) main_mp3_pane_g1_ParamLimits

0x4df0,	// (0x000604af) main_mp3_pane_g2_ParamLimits

0x4dfc,	// (0x000604bb) main_mp3_pane_g3_ParamLimits

0x4dfc,	// (0x000604bb) main_mp3_pane_g3

0x4e08,	// (0x000604c7) main_mp3_pane_g4_ParamLimits

0x4e08,	// (0x000604c7) main_mp3_pane_g4

0xcf2f,	// (0x000685ee) main_mp3_pane_g5_ParamLimits

0xcf2f,	// (0x000685ee) main_mp3_pane_g5

0xcf3d,	// (0x000685fc) main_mp3_pane_g6_ParamLimits

0xcf3d,	// (0x000685fc) main_mp3_pane_g6

0xcf4a,	// (0x00068609) main_mp3_pane_g7_ParamLimits

0xcf4a,	// (0x00068609) main_mp3_pane_g7

0xcf56,	// (0x00068615) main_mp3_pane_g8_ParamLimits

0xcf56,	// (0x00068615) main_mp3_pane_g8

0xf5a0,	// (0x0006ac5f) main_mp3_pane_g_ParamLimits

0x4e14,	// (0x000604d3) main_mp3_pane_t2

0x4e24,	// (0x000604e3) main_mp3_pane_t3

0xcf70,	// (0x0006862f) main_mp3_pane_t4

0xcf7e,	// (0x0006863d) main_mp3_pane_t5

0x0005,

0xf5b1,	// (0x0006ac70) main_mp3_pane_t

0xcf8c,	// (0x0006864b) mup_progress_pane_cp01

0x0de1,	// (0x0005c4a0) aid_zoom_text_secondary2

0xcd58,	// (0x00068417) list_cale_ev2_pane

0xcd6c,	// (0x0006842b) scroll_pane_cp023_ParamLimits

0x4f38,	// (0x000605f7) field_cale_ev2_pane_ParamLimits

0x4f38,	// (0x000605f7) field_cale_ev2_pane

0x9ce6,	// (0x000653a5) field_cale_ev2_pane_g1_ParamLimits

0x9ce6,	// (0x000653a5) field_cale_ev2_pane_g1

0x9cf2,	// (0x000653b1) field_cale_ev2_pane_g2_ParamLimits

0x9cf2,	// (0x000653b1) field_cale_ev2_pane_g2

0x9d0a,	// (0x000653c9) field_cale_ev2_pane_g3_ParamLimits

0x9d0a,	// (0x000653c9) field_cale_ev2_pane_g3

0x0003,

0xf5d2,	// (0x0006ac91) field_cale_ev2_pane_g_ParamLimits

0xf5d2,	// (0x0006ac91) field_cale_ev2_pane_g

0x9d2e,	// (0x000653ed) field_cale_ev2_pane_t1_ParamLimits

0x9d2e,	// (0x000653ed) field_cale_ev2_pane_t1

0x9d45,	// (0x00065404) field_cale_ev2_pane_t2_ParamLimits

0x9d45,	// (0x00065404) field_cale_ev2_pane_t2

0x0001,

0xf5db,	// (0x0006ac9a) field_cale_ev2_pane_t_ParamLimits

0xf5db,	// (0x0006ac9a) field_cale_ev2_pane_t

0x3cf2,	// (0x0005f3b1) main_postcard_pane_g5_ParamLimits

0x3cf2,	// (0x0005f3b1) main_postcard_pane_g5

0x3d00,	// (0x0005f3bf) main_postcard_pane_g6_ParamLimits

0x3d00,	// (0x0005f3bf) main_postcard_pane_g6

0x1c62,	// (0x0005d321) camera2_autofocus_pane_cp_ParamLimits

0x1c62,	// (0x0005d321) camera2_autofocus_pane_cp

0x43b3,	// (0x0005fa72) main_mup3_pane

0x4f82,	// (0x00060641) main_mup3_pane_g1_ParamLimits

0x4f82,	// (0x00060641) main_mup3_pane_g1

0x4fa3,	// (0x00060662) main_mup3_pane_g2_ParamLimits

0x4fa3,	// (0x00060662) main_mup3_pane_g2

0x501d,	// (0x000606dc) main_mup3_pane_g3_ParamLimits

0x501d,	// (0x000606dc) main_mup3_pane_g3

0x5060,	// (0x0006071f) main_mup3_pane_g4_ParamLimits

0x5060,	// (0x0006071f) main_mup3_pane_g4

0x50a3,	// (0x00060762) main_mup3_pane_g5_ParamLimits

0x50a3,	// (0x00060762) main_mup3_pane_g5

0x50e6,	// (0x000607a5) main_mup3_pane_g6_ParamLimits

0x50e6,	// (0x000607a5) main_mup3_pane_g6

0xcf94,	// (0x00068653) main_mup3_pane_g7_ParamLimits

0xcf94,	// (0x00068653) main_mup3_pane_g7

0x0007,

0xf5eb,	// (0x0006acaa) main_mup3_pane_g_ParamLimits

0xf5eb,	// (0x0006acaa) main_mup3_pane_g

0x515c,	// (0x0006081b) main_mup3_pane_t1_ParamLimits

0x515c,	// (0x0006081b) main_mup3_pane_t1

0x51cb,	// (0x0006088a) main_mup3_pane_t2_ParamLimits

0x51cb,	// (0x0006088a) main_mup3_pane_t2

0x5294,	// (0x00060953) main_mup3_pane_t4_ParamLimits

0x5294,	// (0x00060953) main_mup3_pane_t4

0x52e2,	// (0x000609a1) main_mup3_pane_t5_ParamLimits

0x52e2,	// (0x000609a1) main_mup3_pane_t5

0x5392,	// (0x00060a51) main_mup3_pane_t6_ParamLimits

0x5392,	// (0x00060a51) main_mup3_pane_t6

0x0005,

0xf5fc,	// (0x0006acbb) main_mup3_pane_t_ParamLimits

0xf5fc,	// (0x0006acbb) main_mup3_pane_t

0x543e,	// (0x00060afd) mup3_progress_pane_ParamLimits

0x543e,	// (0x00060afd) mup3_progress_pane

0x54b2,	// (0x00060b71) popup_mup3_control_window_ParamLimits

0x54b2,	// (0x00060b71) popup_mup3_control_window

0xcfa2,	// (0x00068661) popup_mup3_text_window

0x54cb,	// (0x00060b8a) mup3_progress_pane_t1

0x54ea,	// (0x00060ba9) mup3_progress_pane_t2

0xcfaa,	// (0x00068669) mup3_progress_pane_t3

0x0002,

0xf609,	// (0x0006acc8) mup3_progress_pane_t

0xcfc7,	// (0x00068686) mup_progress_pane_cp03

0x9b52,	// (0x00065211) bg_tb_trans_pane_cp04

0x5509,	// (0x00060bc8) mup3_volume_pane

0x5511,	// (0x00060bd0) popup_mup3_control_window_g1

0x551a,	// (0x00060bd9) mup3_volume_pane_g1

0x5523,	// (0x00060be2) mup3_volume_pane_g2

0x552c,	// (0x00060beb) mup3_volume_pane_g3

0x0002,

0xf610,	// (0x0006accf) mup3_volume_pane_g

0x9b52,	// (0x00065211) bg_tb_trans_pane_cp03

0xcfd7,	// (0x00068696) popup_mup3_text_window_g1

0xcfdf,	// (0x0006869e) popup_mup3_text_window_t1

0xa894,	// (0x00065f53) list_calc_item_pane_g1_ParamLimits

0xca28,	// (0x000680e7) mup_volume_pane_cp_g1

0x4ef6,	// (0x000605b5) main_touch_calib_pane_t3

0x4f0c,	// (0x000605cb) main_touch_calib_pane_t4

0x4f22,	// (0x000605e1) main_touch_calib_pane_t5

0x0ec9,	// (0x0005c588) aid_cell_size_toolbar2

0x0ed1,	// (0x0005c590) aid_popup3_width_pane

0x0dd9,	// (0x0005c498) aid_zoom_text_msg_primary

0x1c37,	// (0x0005d2f6) vorec_t7

0xa858,	// (0x00065f17) bg_calc_paper_pane_g1_ParamLimits

0xa864,	// (0x00065f23) bg_calc_paper_pane_g2_ParamLimits

0xa870,	// (0x00065f2f) bg_calc_paper_pane_g3_ParamLimits

0xa87c,	// (0x00065f3b) bg_calc_paper_pane_g4_ParamLimits

0xa888,	// (0x00065f47) bg_calc_paper_pane_g5_ParamLimits

0x157f,	// (0x0005cc3e) bg_calc_paper_pane_g6_ParamLimits

0x1590,	// (0x0005cc4f) bg_calc_paper_pane_g7_ParamLimits

0x15a1,	// (0x0005cc60) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0006a817) bg_calc_paper_pane_g_ParamLimits

0x15b2,	// (0x0005cc71) calc_bg_paper_pane_g9_ParamLimits

0x1d49,	// (0x0005d408) image_qvga_pane_ParamLimits

0x1d49,	// (0x0005d408) image_qvga_pane

0xa77b,	// (0x00065e3a) bg_popup_sub_pane_cp04_ParamLimits

0xb681,	// (0x00066d40) popup_mup_playback_window_g1_ParamLimits

0xb68d,	// (0x00066d4c) popup_mup_playback_window_t1_ParamLimits

0xb6a2,	// (0x00066d61) popup_mup_playback_window_t2_ParamLimits

0x03d2,	// (0x0005ba91) popup_mup_playback_window_t_ParamLimits

0x4a01,	// (0x000600c0) main_mup2_pane_g3_ParamLimits

0x4a01,	// (0x000600c0) main_mup2_pane_g3

0x2115,	// (0x0005d7d4) popup_toolbar_window_cp04

0xba97,	// (0x00067156) popup_call2_audio_second_window_g3_ParamLimits

0xba97,	// (0x00067156) popup_call2_audio_second_window_g3

0xbea1,	// (0x00067560) popup_call2_audio_first_window_g4_ParamLimits

0xbea1,	// (0x00067560) popup_call2_audio_first_window_g4

0xc520,	// (0x00067bdf) popup_call2_audio_in_window_g4_ParamLimits

0xc520,	// (0x00067bdf) popup_call2_audio_in_window_g4

0x3e04,	// (0x0005f4c3) aid_area_sk_bg_cut_ParamLimits

0x3e04,	// (0x0005f4c3) aid_area_sk_bg_cut

0xb6b7,	// (0x00066d76) aid_area_sk_bg_cut_2_ParamLimits

0xb6b7,	// (0x00066d76) aid_area_sk_bg_cut_2

0x4d85,	// (0x00060444) aid_placing_details_win

0x4d8d,	// (0x0006044c) aid_placing_details_win_2

0xce41,	// (0x00068500) camera2_autofocus_pane_g1_ParamLimits

0x1120,	// (0x0005c7df) popup_fixed_preview_cale_window_ParamLimits

0x1120,	// (0x0005c7df) popup_fixed_preview_cale_window

0xb485,	// (0x00066b44) navi_slider_pane_g3

0xb48e,	// (0x00066b4d) navi_slider_pane_g4

0xb497,	// (0x00066b56) navi_slider_pane_g5

0xb485,	// (0x00066b44) navi_slider_pane_g6

0x36e1,	// (0x0005eda0) navi_slider_pane_g7

0xb5b8,	// (0x00066c77) mup_scale_pane_g3

0xb5c1,	// (0x00066c80) mup_scale_pane_g4

0xb5ca,	// (0x00066c89) mup_scale_pane_g5

0x3b10,	// (0x0005f1cf) mup_scale_pane_g6

0x3b19,	// (0x0005f1d8) mup_scale_pane_g7

0xb485,	// (0x00066b44) cams2_slider_pane_g3

0xcaaa,	// (0x00068169) cams2_slider_pane_g4

0x4cdd,	// (0x0006039c) cams2_slider_pane_g5

0xb485,	// (0x00066b44) cams2_slider_pane_g6

0x4ce5,	// (0x000603a4) cams2_slider_pane_g7

0xccd5,	// (0x00068394) camera2_autofocus_pane_cp_g1

0xc8c1,	// (0x00067f80) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8c1,	// (0x00067f80) bg_popup_preview_window_pane_cp02

0xcfed,	// (0x000686ac) list_fp_cale_pane_ParamLimits

0xcfed,	// (0x000686ac) list_fp_cale_pane

0xcff9,	// (0x000686b8) popup_fixed_preview_cale_window_t1_ParamLimits

0xcff9,	// (0x000686b8) popup_fixed_preview_cale_window_t1

0x5535,	// (0x00060bf4) popup_fixed_preview_cale_window_t2_ParamLimits

0x5535,	// (0x00060bf4) popup_fixed_preview_cale_window_t2

0x554a,	// (0x00060c09) popup_fixed_preview_cale_window_t3_ParamLimits

0x554a,	// (0x00060c09) popup_fixed_preview_cale_window_t3

0x0002,

0xf617,	// (0x0006acd6) popup_fixed_preview_cale_window_t_ParamLimits

0xf617,	// (0x0006acd6) popup_fixed_preview_cale_window_t

0x555f,	// (0x00060c1e) list_single_fp_cale_pane_ParamLimits

0x555f,	// (0x00060c1e) list_single_fp_cale_pane

0xd017,	// (0x000686d6) list_single_fp_cale_pane_g1_ParamLimits

0xd017,	// (0x000686d6) list_single_fp_cale_pane_g1

0xd023,	// (0x000686e2) list_single_fp_cale_pane_g2_ParamLimits

0xd023,	// (0x000686e2) list_single_fp_cale_pane_g2

0x0002,

0x06b4,	// (0x0005bd73) list_single_fp_cale_pane_g_ParamLimits

0x06b4,	// (0x0005bd73) list_single_fp_cale_pane_g

0xd03c,	// (0x000686fb) list_single_fp_cale_pane_t1_ParamLimits

0xd03c,	// (0x000686fb) list_single_fp_cale_pane_t1

0xd04e,	// (0x0006870d) list_single_fp_cale_pane_t2_ParamLimits

0xd04e,	// (0x0006870d) list_single_fp_cale_pane_t2

0x0001,

0x06bb,	// (0x0005bd7a) list_single_fp_cale_pane_t_ParamLimits

0x06bb,	// (0x0005bd7a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1194,	// (0x0005c853) main_dialer_pane

0x5572,	// (0x00060c31) aid_cell_size_keypad

0x557c,	// (0x00060c3b) dialer_ne_pane

0x5586,	// (0x00060c45) grid_dialer_command_1_pane

0x558e,	// (0x00060c4d) grid_dialer_command_2_pane

0x5596,	// (0x00060c55) grid_dialer_keypad_pane

0x55aa,	// (0x00060c69) bg_popup_call_pane_cp06_ParamLimits

0x55aa,	// (0x00060c69) bg_popup_call_pane_cp06

0x55b6,	// (0x00060c75) dialer_ne_clear_pane_ParamLimits

0x55b6,	// (0x00060c75) dialer_ne_clear_pane

0xd081,	// (0x00068740) dialer_ne_pane_g1

0xd089,	// (0x00068748) dialer_ne_pane_t1_ParamLimits

0xd089,	// (0x00068748) dialer_ne_pane_t1

0x55c2,	// (0x00060c81) dialer_ne_pane_t2_ParamLimits

0x55c2,	// (0x00060c81) dialer_ne_pane_t2

0x55df,	// (0x00060c9e) dialer_ne_pane_t3_ParamLimits

0x55df,	// (0x00060c9e) dialer_ne_pane_t3

0x0002,

0xf61e,	// (0x0006acdd) dialer_ne_pane_t_ParamLimits

0xf61e,	// (0x0006acdd) dialer_ne_pane_t

0x5603,	// (0x00060cc2) dialer_ne_pane_t3_copy1_ParamLimits

0x5603,	// (0x00060cc2) dialer_ne_pane_t3_copy1

0x5627,	// (0x00060ce6) cell_dialer_keypad_pane_ParamLimits

0x5627,	// (0x00060ce6) cell_dialer_keypad_pane

0x563e,	// (0x00060cfd) cell_dialer_command_1_pane_ParamLimits

0x563e,	// (0x00060cfd) cell_dialer_command_1_pane

0x5654,	// (0x00060d13) cell_dialer_command_2_pane_ParamLimits

0x5654,	// (0x00060d13) cell_dialer_command_2_pane

0xd09b,	// (0x0006875a) bg_button_pane_cp02_ParamLimits

0xd09b,	// (0x0006875a) bg_button_pane_cp02

0x5663,	// (0x00060d22) cell_dialer_keypad_pane_g1_ParamLimits

0x5663,	// (0x00060d22) cell_dialer_keypad_pane_g1

0xd09b,	// (0x0006875a) bg_button_pane_cp03_ParamLimits

0xd09b,	// (0x0006875a) bg_button_pane_cp03

0x5678,	// (0x00060d37) cell_dialer_command_1_pane_g1_ParamLimits

0x5678,	// (0x00060d37) cell_dialer_command_1_pane_g1

0xd0a7,	// (0x00068766) bg_button_pane_cp04

0x568c,	// (0x00060d4b) cell_dialer_command_2_pane_g1

0xaa41,	// (0x00066100) bg_button_pane_cp06

0xd0af,	// (0x0006876e) dialer_ne_clear_pane_g1

0xb358,	// (0x00066a17) navi_pane_g2

0xb386,	// (0x00066a45) navi_pane_g3

0x0002,

0x02d5,	// (0x0005b994) navi_pane_g

0xb415,	// (0x00066ad4) navi_pane_mv_g2

0xb43c,	// (0x00066afb) navi_pane_mv_g5

0x36ac,	// (0x0005ed6b) navi_pane_mv_t1

0xa84c,	// (0x00065f0b) main_clock2_pane

0x56cc,	// (0x00060d8b) main_clock2_list_pane_ParamLimits

0x56cc,	// (0x00060d8b) main_clock2_list_pane

0x56f6,	// (0x00060db5) main_clock2_pane_t1_ParamLimits

0x56f6,	// (0x00060db5) main_clock2_pane_t1

0x571a,	// (0x00060dd9) main_clock2_pane_t2_ParamLimits

0x571a,	// (0x00060dd9) main_clock2_pane_t2

0x0004,

0xf625,	// (0x0006ace4) main_clock2_pane_t_ParamLimits

0xf625,	// (0x0006ace4) main_clock2_pane_t

0x5775,	// (0x00060e34) popup_clock_analogue_window_cp03_ParamLimits

0x5775,	// (0x00060e34) popup_clock_analogue_window_cp03

0x5793,	// (0x00060e52) popup_clock_digital_window_cp02_ParamLimits

0x5793,	// (0x00060e52) popup_clock_digital_window_cp02

0x5800,	// (0x00060ebf) main_clock2_list_single_pane_ParamLimits

0x5800,	// (0x00060ebf) main_clock2_list_single_pane

0xaa41,	// (0x00066100) list_highlight_pane_cp05

0xd0e9,	// (0x000687a8) main_clock2_list_single_pane_t1

0x2115,	// (0x0005d7d4) popup_toolbar_window_cp04_ParamLimits

0x4daf,	// (0x0006046e) camera2_autofocus_pane_g2_ParamLimits

0x4daf,	// (0x0006046e) camera2_autofocus_pane_g2

0x4dbb,	// (0x0006047a) camera2_autofocus_pane_g3_ParamLimits

0x4dbb,	// (0x0006047a) camera2_autofocus_pane_g3

0x4dc7,	// (0x00060486) camera2_autofocus_pane_g4_ParamLimits

0x4dc7,	// (0x00060486) camera2_autofocus_pane_g4

0x4dd3,	// (0x00060492) camera2_autofocus_pane_g5_ParamLimits

0x4dd3,	// (0x00060492) camera2_autofocus_pane_g5

0x0004,

0xf58c,	// (0x0006ac4b) camera2_autofocus_pane_g_ParamLimits

0xf58c,	// (0x0006ac4b) camera2_autofocus_pane_g

0x4f62,	// (0x00060621) camera2_autofocus_pane_cp_g2

0x4f6a,	// (0x00060629) camera2_autofocus_pane_cp_g3

0x4f72,	// (0x00060631) camera2_autofocus_pane_cp_g4

0x4f7a,	// (0x00060639) camera2_autofocus_pane_cp_g5

0x0004,

0xf5e0,	// (0x0006ac9f) camera2_autofocus_pane_cp_g

0x55a2,	// (0x00060c61) popup_dialer_spcha_window

0x9b52,	// (0x00065211) bg_popup_sub_pane_cp07

0xd0f7,	// (0x000687b6) list_spcha_pane

0xd0ff,	// (0x000687be) list_single_spcha_pane_ParamLimits

0xd0ff,	// (0x000687be) list_single_spcha_pane

0x9b52,	// (0x00065211) list_highlight_pane_cp06

0xd110,	// (0x000687cf) list_single_spcha_pane_t1

0xc2ca,	// (0x00067989) popup_call2_audio_out_window_g4_ParamLimits

0xc2ca,	// (0x00067989) popup_call2_audio_out_window_g4

0x1194,	// (0x0005c853) main_imed2_pane

0x444d,	// (0x0005fb0c) popup_imed_adjust2_window

0x4460,	// (0x0005fb1f) popup_imed_trans_window_ParamLimits

0x4460,	// (0x0005fb1f) popup_imed_trans_window

0xcb13,	// (0x000681d2) popup_blid_sat_info2_window_t1

0xcb21,	// (0x000681e0) popup_blid_sat_info2_window_t2

0x000a,

0x05a5,	// (0x0005bc64) popup_blid_sat_info2_window_t

0x58a9,	// (0x00060f68) aid_size_cell_colour_35

0x58c3,	// (0x00060f82) aid_size_cell_colour_112

0x58da,	// (0x00060f99) aid_size_cell_effect

0xa245,	// (0x00065904) bg_tb_trans_pane_cp02

0xaf99,	// (0x00066658) heading_imed_pane

0x58f4,	// (0x00060fb3) listscroll_imed_pane

0xd11e,	// (0x000687dd) heading_imed_pane_g1

0xd126,	// (0x000687e5) heading_imed_pane_t1

0xd134,	// (0x000687f3) grid_imed_colour_35_pane_ParamLimits

0xd134,	// (0x000687f3) grid_imed_colour_35_pane

0x5900,	// (0x00060fbf) grid_imed_effect_pane

0xd14c,	// (0x0006880b) list_imed_aspect_pane

0x5910,	// (0x00060fcf) scroll_pane_cp027_ParamLimits

0x5910,	// (0x00060fcf) scroll_pane_cp027

0x591c,	// (0x00060fdb) cell_imed_effect_pane_ParamLimits

0x591c,	// (0x00060fdb) cell_imed_effect_pane

0xd154,	// (0x00068813) cell_imed_colour_pane_ParamLimits

0xd154,	// (0x00068813) cell_imed_colour_pane

0xd196,	// (0x00068855) cell_imed_colour_pane_g1_ParamLimits

0xd196,	// (0x00068855) cell_imed_colour_pane_g1

0xd1a7,	// (0x00068866) hgihlgiht_grid_pane_cp016_ParamLimits

0xd1a7,	// (0x00068866) hgihlgiht_grid_pane_cp016

0x5934,	// (0x00060ff3) cell_imed_effect_pane_g1

0x593c,	// (0x00060ffb) grid_highlight_pane_cp017

0xd1b8,	// (0x00068877) list_imed_single_pane_ParamLimits

0xd1b8,	// (0x00068877) list_imed_single_pane

0x9b52,	// (0x00065211) list_highlight_pane_cp07

0xd1cd,	// (0x0006888c) list_imed_aspect_pane_comp1_t1

0xc8cd,	// (0x00067f8c) bg_tb_trans_pane_cp05

0xd1ef,	// (0x000688ae) popup_imed_adjust2_window_g1

0xd216,	// (0x000688d5) popup_imed_adjust2_window_t1

0xd22e,	// (0x000688ed) slider_imed_adjust_pane

0xd242,	// (0x00068901) slider_imed_adjust_pane_g1

0xd252,	// (0x00068911) slider_imed_adjust_pane_g2

0xd262,	// (0x00068921) slider_imed_adjust_pane_g3

0xd273,	// (0x00068932) slider_imed_adjust_pane_g4

0x0003,

0x06e9,	// (0x0005bda8) slider_imed_adjust_pane_g

0x5945,	// (0x00061004) aid_size_cell_clipart2

0x5951,	// (0x00061010) grid_imed_clipart_pane

0xd284,	// (0x00068943) scroll_pane_cp031

0x595b,	// (0x0006101a) cell_imed_clipart_pane_ParamLimits

0x595b,	// (0x0006101a) cell_imed_clipart_pane

0x597e,	// (0x0006103d) cell_imed_clipart_pane_g1

0x9b52,	// (0x00065211) grid_highlight_pane_cp014

0x56d8,	// (0x00060d97) main_clock2_pane_g1_ParamLimits

0x56d8,	// (0x00060d97) main_clock2_pane_g1

0x57ab,	// (0x00060e6a) aid_call2_pane_cp10

0x57bd,	// (0x00060e7c) aid_call_pane_cp10

0xb2b7,	// (0x00066976) popup_clock_analogue_window_cp10_g1

0xb2b7,	// (0x00066976) popup_clock_analogue_window_cp10_g2

0x57cf,	// (0x00060e8e) popup_clock_analogue_window_cp10_g3

0x57cf,	// (0x00060e8e) popup_clock_analogue_window_cp10_g4

0xb2b7,	// (0x00066976) popup_clock_analogue_window_cp10_g5

0x0004,

0xf630,	// (0x0006acef) popup_clock_analogue_window_cp10_g

0x57e1,	// (0x00060ea0) popup_clock_analogue_window_cp10_t1

0x5812,	// (0x00060ed1) clock_digital_number_pane_cp10_ParamLimits

0x5812,	// (0x00060ed1) clock_digital_number_pane_cp10

0x582a,	// (0x00060ee9) clock_digital_number_pane_cp11_ParamLimits

0x582a,	// (0x00060ee9) clock_digital_number_pane_cp11

0x5842,	// (0x00060f01) clock_digital_number_pane_cp12_ParamLimits

0x5842,	// (0x00060f01) clock_digital_number_pane_cp12

0x585a,	// (0x00060f19) clock_digital_number_pane_cp13_ParamLimits

0x585a,	// (0x00060f19) clock_digital_number_pane_cp13

0x5872,	// (0x00060f31) clock_digital_separator_pane_cp10_ParamLimits

0x5872,	// (0x00060f31) clock_digital_separator_pane_cp10

0x588a,	// (0x00060f49) popup_clock_digital_window_cp02_t1_ParamLimits

0x588a,	// (0x00060f49) popup_clock_digital_window_cp02_t1

0xa773,	// (0x00065e32) clock_digital_number_pane_cp10_g1

0xa773,	// (0x00065e32) clock_digital_number_pane_cp10_g2

0x0001,

0xf63b,	// (0x0006acfa) clock_digital_number_pane_cp10_g

0xa773,	// (0x00065e32) clock_digital_separator_pane_cp10_g1

0xa773,	// (0x00065e32) clock_digital_separator_pane_g2_cp10

0xb444,	// (0x00066b03) navi_pane_vded_g4

0xb44d,	// (0x00066b0c) navi_pane_vded_g5

0xb456,	// (0x00066b15) navi_pane_vded_t1

0x1194,	// (0x0005c853) main_vded_pane

0x5987,	// (0x00061046) main_vded_pane_g1

0x5993,	// (0x00061052) main_vded_pane_g2

0x599d,	// (0x0006105c) main_vded_pane_g3

0x0002,

0xf640,	// (0x0006acff) main_vded_pane_g

0x59a7,	// (0x00061066) main_vded_pane_t1

0x59b5,	// (0x00061074) main_vded_pane_t2

0x0001,

0xf647,	// (0x0006ad06) main_vded_pane_t

0x59c3,	// (0x00061082) vded_slider_pane

0x59cd,	// (0x0006108c) vded_video_pane

0xd28c,	// (0x0006894b) vded_video_pane_g1

0x59d7,	// (0x00061096) vded_video_pane_g2

0xccd5,	// (0x00068394) vded_video_pane_g3

0x0002,

0xf64c,	// (0x0006ad0b) vded_video_pane_g

0xd296,	// (0x00068955) vded_slider_pane_g1

0xca28,	// (0x000680e7) vded_slider_pane_g2

0xd29f,	// (0x0006895e) vded_slider_pane_g3

0xd2a8,	// (0x00068967) vded_slider_pane_g4

0xd2b1,	// (0x00068970) vded_slider_pane_g5

0x0004,

0x070a,	// (0x0005bdc9) vded_slider_pane_g

0x54a4,	// (0x00060b63) mup3_rocker_pane_ParamLimits

0x54a4,	// (0x00060b63) mup3_rocker_pane

0x59e0,	// (0x0006109f) mup3_control_keys_pane_g1

0x59e8,	// (0x000610a7) mup3_control_keys_pane_g2

0x59f0,	// (0x000610af) mup3_control_keys_pane_g3

0x59f8,	// (0x000610b7) mup3_control_keys_pane_g4

0x0003,

0xf653,	// (0x0006ad12) mup3_control_keys_pane_g

0x1148,	// (0x0005c807) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1148,	// (0x0005c807) popup_toolbar2_fixed_window_cp01

0x54be,	// (0x00060b7d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x54be,	// (0x00060b7d) popup_toolbar2_fixed_window_cp02

0xbc09,	// (0x000672c8) popup_call2_audio_second_window_t4_ParamLimits

0xbc09,	// (0x000672c8) popup_call2_audio_second_window_t4

0xc137,	// (0x000677f6) popup_call2_audio_first_window_t6_ParamLimits

0xc137,	// (0x000677f6) popup_call2_audio_first_window_t6

0xc3cd,	// (0x00067a8c) popup_call2_audio_out_window_t6_ParamLimits

0xc3cd,	// (0x00067a8c) popup_call2_audio_out_window_t6

0x1194,	// (0x0005c853) main_vitu_pane

0x5a08,	// (0x000610c7) aid_size_cell_itu_ParamLimits

0x5a08,	// (0x000610c7) aid_size_cell_itu

0xe29d,	// (0x0006995c) bg_popup_window_pane_cp08_ParamLimits

0xe29d,	// (0x0006995c) bg_popup_window_pane_cp08

0x5a16,	// (0x000610d5) field_vitu_entry_pane_ParamLimits

0x5a16,	// (0x000610d5) field_vitu_entry_pane

0x5a25,	// (0x000610e4) grid_vitu_function_pane_ParamLimits

0x5a25,	// (0x000610e4) grid_vitu_function_pane

0x5a35,	// (0x000610f4) grid_vitu_itu_pane_ParamLimits

0x5a35,	// (0x000610f4) grid_vitu_itu_pane

0x5a45,	// (0x00061104) cell_vitu_itu_pane_ParamLimits

0x5a45,	// (0x00061104) cell_vitu_itu_pane

0x5a5a,	// (0x00061119) cell_vitu_function_pane_ParamLimits

0x5a5a,	// (0x00061119) cell_vitu_function_pane

0xa245,	// (0x00065904) bg_popup_sub_pane_cp08_ParamLimits

0xa245,	// (0x00065904) bg_popup_sub_pane_cp08

0x5a6c,	// (0x0006112b) field_vitu_entry_pane_t1_ParamLimits

0x5a6c,	// (0x0006112b) field_vitu_entry_pane_t1

0xd2d2,	// (0x00068991) field_vitu_entry_pane_t2_ParamLimits

0xd2d2,	// (0x00068991) field_vitu_entry_pane_t2

0x0001,

0xf65c,	// (0x0006ad1b) field_vitu_entry_pane_t_ParamLimits

0xf65c,	// (0x0006ad1b) field_vitu_entry_pane_t

0xd2ef,	// (0x000689ae) bg_button_pane_cp05_ParamLimits

0xd2ef,	// (0x000689ae) bg_button_pane_cp05

0x5a89,	// (0x00061148) cell_vitu_itu_pane_g1

0x5aa1,	// (0x00061160) cell_vitu_itu_pane_t1_ParamLimits

0x5aa1,	// (0x00061160) cell_vitu_itu_pane_t1

0x5ab3,	// (0x00061172) cell_vitu_itu_pane_t2_ParamLimits

0x5ab3,	// (0x00061172) cell_vitu_itu_pane_t2

0x0002,

0xf661,	// (0x0006ad20) cell_vitu_itu_pane_t_ParamLimits

0xf661,	// (0x0006ad20) cell_vitu_itu_pane_t

0xd2fd,	// (0x000689bc) bg_button_pane_cp07

0x5ae8,	// (0x000611a7) cell_vitu_function_pane_g1

0x1423,	// (0x0005cae2) main_calc_pane_g1

0x0f05,	// (0x0005c5c4) aid_visual_content_pane

0x1194,	// (0x0005c853) main_vradio_pane

0x5af1,	// (0x000611b0) main_vradio_pane_g1_ParamLimits

0x5af1,	// (0x000611b0) main_vradio_pane_g1

0xd307,	// (0x000689c6) main_vradio_pane_g2_ParamLimits

0xd307,	// (0x000689c6) main_vradio_pane_g2

0x0001,

0xf668,	// (0x0006ad27) main_vradio_pane_g_ParamLimits

0xf668,	// (0x0006ad27) main_vradio_pane_g

0x5b01,	// (0x000611c0) main_vradio_pane_t1_ParamLimits

0x5b01,	// (0x000611c0) main_vradio_pane_t1

0x5b13,	// (0x000611d2) main_vradio_pane_t2_ParamLimits

0x5b13,	// (0x000611d2) main_vradio_pane_t2

0xd314,	// (0x000689d3) main_vradio_pane_t3_ParamLimits

0xd314,	// (0x000689d3) main_vradio_pane_t3

0x0002,

0xf66d,	// (0x0006ad2c) main_vradio_pane_t_ParamLimits

0xf66d,	// (0x0006ad2c) main_vradio_pane_t

0x5b25,	// (0x000611e4) vradio_rocker_control_pane_ParamLimits

0x5b25,	// (0x000611e4) vradio_rocker_control_pane

0x5b31,	// (0x000611f0) vradio_station_info_pane_ParamLimits

0x5b31,	// (0x000611f0) vradio_station_info_pane

0xd328,	// (0x000689e7) vradio_frequency_info_pane_ParamLimits

0xd328,	// (0x000689e7) vradio_frequency_info_pane

0xccd5,	// (0x00068394) vradio_station_info_pane_g1

0xd337,	// (0x000689f6) vradio_station_info_pane_t1_ParamLimits

0xd337,	// (0x000689f6) vradio_station_info_pane_t1

0xd359,	// (0x00068a18) vradio_station_info_pane_t2_ParamLimits

0xd359,	// (0x00068a18) vradio_station_info_pane_t2

0x0001,

0x073b,	// (0x0005bdfa) vradio_station_info_pane_t_ParamLimits

0x073b,	// (0x0005bdfa) vradio_station_info_pane_t

0xd36b,	// (0x00068a2a) vradio_tuning_pane

0xd373,	// (0x00068a32) vradio_rocker_control_pane_g1

0xd37b,	// (0x00068a3a) vradio_rocker_control_pane_g2

0xd383,	// (0x00068a42) vradio_rocker_control_pane_g3

0xd38b,	// (0x00068a4a) vradio_rocker_control_pane_g4

0xd393,	// (0x00068a52) vradio_rocker_control_pane_g5

0x0004,

0x0740,	// (0x0005bdff) vradio_rocker_control_pane_g

0x5b40,	// (0x000611ff) vradio_frequency_info_pane_g1

0xd39b,	// (0x00068a5a) vradio_frequency_info_pane_t1_ParamLimits

0xd39b,	// (0x00068a5a) vradio_frequency_info_pane_t1

0x5b4a,	// (0x00061209) vradio_tuning_pane_g1

0x5b53,	// (0x00061212) vradio_tuning_pane_t1

0x0f4e,	// (0x0005c60d) area_side_right_pane_ParamLimits

0x0f4e,	// (0x0005c60d) area_side_right_pane

0xc888,	// (0x00067f47) status_small_pane_g1

0xc890,	// (0x00067f4f) status_small_pane_g2

0xc899,	// (0x00067f58) status_small_pane_g3

0xc8a2,	// (0x00067f61) status_small_pane_g4

0x0003,

0x04fb,	// (0x0005bbba) status_small_pane_g

0xc8ab,	// (0x00067f6a) status_small_pane_t1

0x1194,	// (0x0005c853) main_video3_pane

0xd3af,	// (0x00068a6e) cams_zoom_vslider_pane

0xd3b7,	// (0x00068a76) image3_wide_pane_ParamLimits

0xd3b7,	// (0x00068a76) image3_wide_pane

0xd3d1,	// (0x00068a90) image3_wide_small_pane

0xd3dd,	// (0x00068a9c) main_video3_pane_g1_ParamLimits

0xd3dd,	// (0x00068a9c) main_video3_pane_g1

0xd3f9,	// (0x00068ab8) main_video3_pane_g2_ParamLimits

0xd3f9,	// (0x00068ab8) main_video3_pane_g2

0x0001,

0x074b,	// (0x0005be0a) main_video3_pane_g_ParamLimits

0x074b,	// (0x0005be0a) main_video3_pane_g

0xd415,	// (0x00068ad4) main_video3_pane_t1_ParamLimits

0xd415,	// (0x00068ad4) main_video3_pane_t1

0xd440,	// (0x00068aff) main_video3_pane_t2_ParamLimits

0xd440,	// (0x00068aff) main_video3_pane_t2

0xd46b,	// (0x00068b2a) main_video3_pane_t3_ParamLimits

0xd46b,	// (0x00068b2a) main_video3_pane_t3

0x0002,

0x0750,	// (0x0005be0f) main_video3_pane_t_ParamLimits

0x0750,	// (0x0005be0f) main_video3_pane_t

0xd498,	// (0x00068b57) cams_zoom_vslider_pane_g1

0xd4a1,	// (0x00068b60) cams_zoom_vslider_pane_g2

0x0001,

0x0757,	// (0x0005be16) cams_zoom_vslider_pane_g

0xd4a9,	// (0x00068b68) small_slider_vertical_pane

0xccd5,	// (0x00068394) small_slider_vertical_pane_g1

0xccd5,	// (0x00068394) small_slider_vertical_pane_g2

0xd4b1,	// (0x00068b70) small_slider_vertical_pane_g3

0x0002,

0x075c,	// (0x0005be1b) small_slider_vertical_pane_g

0x1194,	// (0x0005c853) main_hwr_training_pane

0xd4ba,	// (0x00068b79) hwr_training_instruct_pane_ParamLimits

0xd4ba,	// (0x00068b79) hwr_training_instruct_pane

0x5b62,	// (0x00061221) hwr_training_navi_pane_ParamLimits

0x5b62,	// (0x00061221) hwr_training_navi_pane

0x5b7c,	// (0x0006123b) hwr_training_write_pane_ParamLimits

0x5b7c,	// (0x0006123b) hwr_training_write_pane

0x9b52,	// (0x00065211) bg_frame_shadow_pane

0xd4f1,	// (0x00068bb0) hwr_training_write_pane_g1

0xd4f9,	// (0x00068bb8) hwr_training_write_pane_g2

0xd501,	// (0x00068bc0) hwr_training_write_pane_g3

0xd509,	// (0x00068bc8) hwr_training_write_pane_g4

0xd511,	// (0x00068bd0) hwr_training_write_pane_g5

0xd519,	// (0x00068bd8) hwr_training_write_pane_g6

0xd521,	// (0x00068be0) hwr_training_write_pane_g7

0x0006,

0x0763,	// (0x0005be22) hwr_training_write_pane_g

0x5bb4,	// (0x00061273) hwr_training_navi_pane_g1_ParamLimits

0x5bb4,	// (0x00061273) hwr_training_navi_pane_g1

0x5bc6,	// (0x00061285) hwr_training_navi_pane_g2_ParamLimits

0x5bc6,	// (0x00061285) hwr_training_navi_pane_g2

0x5bd8,	// (0x00061297) hwr_training_navi_pane_g3_ParamLimits

0x5bd8,	// (0x00061297) hwr_training_navi_pane_g3

0x5be8,	// (0x000612a7) hwr_training_navi_pane_g4_ParamLimits

0x5be8,	// (0x000612a7) hwr_training_navi_pane_g4

0x0004,

0xf674,	// (0x0006ad33) hwr_training_navi_pane_g_ParamLimits

0xf674,	// (0x0006ad33) hwr_training_navi_pane_g

0x5c02,	// (0x000612c1) hwr_training_navi_pane_t1

0x5c10,	// (0x000612cf) list_single_hwr_training_instruct_pane_ParamLimits

0x5c10,	// (0x000612cf) list_single_hwr_training_instruct_pane

0xd529,	// (0x00068be8) list_single_hwr_training_instruct_pane_t1

0xcc15,	// (0x000682d4) bg_frame_shadow_pane_g1

0xd538,	// (0x00068bf7) bg_frame_shadow_pane_g2

0xd540,	// (0x00068bff) bg_frame_shadow_pane_g3

0xd548,	// (0x00068c07) bg_frame_shadow_pane_g4

0xd550,	// (0x00068c0f) bg_frame_shadow_pane_g5

0xd558,	// (0x00068c17) bg_frame_shadow_pane_g6

0xd560,	// (0x00068c1f) bg_frame_shadow_pane_g7

0xa917,	// (0x00065fd6) bg_frame_shadow_pane_g8

0x0007,

0xf67f,	// (0x0006ad3e) bg_frame_shadow_pane_g

0x1194,	// (0x0005c853) main_video_tele_dialer_pane

0x5c39,	// (0x000612f8) aid_size_cell_video_keypad_ParamLimits

0x5c39,	// (0x000612f8) aid_size_cell_video_keypad

0x5c49,	// (0x00061308) grid_video_dialer_keypad_pane_ParamLimits

0x5c49,	// (0x00061308) grid_video_dialer_keypad_pane

0x5c7d,	// (0x0006133c) video_down_pane_cp_ParamLimits

0x5c7d,	// (0x0006133c) video_down_pane_cp

0x5ca7,	// (0x00061366) cell_video_dialer_keypad_pane_ParamLimits

0x5ca7,	// (0x00061366) cell_video_dialer_keypad_pane

0xd568,	// (0x00068c27) bg_button_pane_cp08_ParamLimits

0xd568,	// (0x00068c27) bg_button_pane_cp08

0x5cbc,	// (0x0006137b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5cbc,	// (0x0006137b) cell_video_dialer_keypad_pane_g1

0x5498,	// (0x00060b57) mup3_rocker2_pane_ParamLimits

0x5498,	// (0x00060b57) mup3_rocker2_pane

0xccd5,	// (0x00068394) mup3_rocker2_pane_g1

0x43c1,	// (0x0005fa80) main_dialer2_pane

0x1194,	// (0x0005c853) main_mp4_pane

0x5cfe,	// (0x000613bd) main_mp4_pane_g1_ParamLimits

0x5cfe,	// (0x000613bd) main_mp4_pane_g1

0x5d0c,	// (0x000613cb) main_mp4_pane_g2_ParamLimits

0x5d0c,	// (0x000613cb) main_mp4_pane_g2

0x5d1a,	// (0x000613d9) main_mp4_pane_g3_ParamLimits

0x5d1a,	// (0x000613d9) main_mp4_pane_g3

0x5d5f,	// (0x0006141e) main_mp4_pane_g4_ParamLimits

0x5d5f,	// (0x0006141e) main_mp4_pane_g4

0x5d87,	// (0x00061446) main_mp4_pane_g5_ParamLimits

0x5d87,	// (0x00061446) main_mp4_pane_g5

0x0005,

0xf69f,	// (0x0006ad5e) main_mp4_pane_g_ParamLimits

0xf69f,	// (0x0006ad5e) main_mp4_pane_g

0x5dd7,	// (0x00061496) main_mp4_pane_t1_ParamLimits

0x5dd7,	// (0x00061496) main_mp4_pane_t1

0x5e33,	// (0x000614f2) main_mp4_pane_t2_ParamLimits

0x5e33,	// (0x000614f2) main_mp4_pane_t2

0xd574,	// (0x00068c33) main_mp4_pane_t3_ParamLimits

0xd574,	// (0x00068c33) main_mp4_pane_t3

0x5e85,	// (0x00061544) main_mp4_pane_t4_ParamLimits

0x5e85,	// (0x00061544) main_mp4_pane_t4

0x0003,

0xf6ac,	// (0x0006ad6b) main_mp4_pane_t_ParamLimits

0xf6ac,	// (0x0006ad6b) main_mp4_pane_t

0x5ec9,	// (0x00061588) mp4_progress_pane_ParamLimits

0x5ec9,	// (0x00061588) mp4_progress_pane

0x5f13,	// (0x000615d2) mp4_rocker_pane_ParamLimits

0x5f13,	// (0x000615d2) mp4_rocker_pane

0xd59c,	// (0x00068c5b) mp4_progress_pane_t1

0xd5b5,	// (0x00068c74) mp4_progress_pane_t2

0x0001,

0x07b3,	// (0x0005be72) mp4_progress_pane_t

0xd5ce,	// (0x00068c8d) mup_progress_pane_cp04

0xdd15,	// (0x000693d4) mp4_rocker_pane_g1

0x5f33,	// (0x000615f2) aid_cell_size_keypad2_ParamLimits

0x5f33,	// (0x000615f2) aid_cell_size_keypad2

0x5f43,	// (0x00061602) dialer2_ne_pane_ParamLimits

0x5f43,	// (0x00061602) dialer2_ne_pane

0x5f51,	// (0x00061610) grid_dialer2_keypad_pane_ParamLimits

0x5f51,	// (0x00061610) grid_dialer2_keypad_pane

0xdd61,	// (0x00069420) bg_popup_call_pane_cp07_ParamLimits

0xdd61,	// (0x00069420) bg_popup_call_pane_cp07

0x5f61,	// (0x00061620) dialer2_ne_pane_t1_ParamLimits

0x5f61,	// (0x00061620) dialer2_ne_pane_t1

0x5f86,	// (0x00061645) cell_dialer2_keypad_pane_ParamLimits

0x5f86,	// (0x00061645) cell_dialer2_keypad_pane

0xd5ec,	// (0x00068cab) bg_button_pane_pane_cp04_ParamLimits

0xd5ec,	// (0x00068cab) bg_button_pane_pane_cp04

0x5f9b,	// (0x0006165a) cell_dialer2_keypad_pane_g1_ParamLimits

0x5f9b,	// (0x0006165a) cell_dialer2_keypad_pane_g1

0x1fd7,	// (0x0005d696) aid_placing_vt_set_content_ParamLimits

0x1fd7,	// (0x0005d696) aid_placing_vt_set_content

0x2003,	// (0x0005d6c2) aid_placing_vt_set_title_ParamLimits

0x2003,	// (0x0005d6c2) aid_placing_vt_set_title

0x1194,	// (0x0005c853) main_image3_pane

0x6035,	// (0x000616f4) area_side_right_pane_cp01_ParamLimits

0x6035,	// (0x000616f4) area_side_right_pane_cp01

0x6062,	// (0x00061721) main_image3_pane_g1_ParamLimits

0x6062,	// (0x00061721) main_image3_pane_g1

0x6070,	// (0x0006172f) main_image3_pane_g2_ParamLimits

0x6070,	// (0x0006172f) main_image3_pane_g2

0x6089,	// (0x00061748) main_image3_pane_g3_ParamLimits

0x6089,	// (0x00061748) main_image3_pane_g3

0x60a2,	// (0x00061761) main_image3_pane_g4_ParamLimits

0x60a2,	// (0x00061761) main_image3_pane_g4

0x0003,

0xf6bf,	// (0x0006ad7e) main_image3_pane_g_ParamLimits

0xf6bf,	// (0x0006ad7e) main_image3_pane_g

0x60bb,	// (0x0006177a) main_image3_pane_t1_ParamLimits

0x60bb,	// (0x0006177a) main_image3_pane_t1

0x60e0,	// (0x0006179f) main_image3_pane_t2_ParamLimits

0x60e0,	// (0x0006179f) main_image3_pane_t2

0x60ff,	// (0x000617be) main_image3_pane_t3_ParamLimits

0x60ff,	// (0x000617be) main_image3_pane_t3

0x0003,

0xf6c8,	// (0x0006ad87) main_image3_pane_t_ParamLimits

0xf6c8,	// (0x0006ad87) main_image3_pane_t

0xe29d,	// (0x0006995c) grid_sctrl_middle_pane_cp01_ParamLimits

0xe29d,	// (0x0006995c) grid_sctrl_middle_pane_cp01

0x6160,	// (0x0006181f) cell_sctrl_middle_pane_cp01_ParamLimits

0x6160,	// (0x0006181f) cell_sctrl_middle_pane_cp01

0x6171,	// (0x00061830) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6171,	// (0x00061830) cell_sctrl_middle_pane_cp01_g1

0x1194,	// (0x0005c853) main_call4_pane

0x617e,	// (0x0006183d) aid_size_button_call4_ParamLimits

0x617e,	// (0x0006183d) aid_size_button_call4

0x61ae,	// (0x0006186d) call4_windows_pane_ParamLimits

0x61ae,	// (0x0006186d) call4_windows_pane

0x61c8,	// (0x00061887) grid_call4_button_pane_ParamLimits

0x61c8,	// (0x00061887) grid_call4_button_pane

0xd5f8,	// (0x00068cb7) call4_windows_conf_pane

0xd60f,	// (0x00068cce) popup_call4_audio_first_window_ParamLimits

0xd60f,	// (0x00068cce) popup_call4_audio_first_window

0xd65b,	// (0x00068d1a) popup_call4_audio_second_window_ParamLimits

0xd65b,	// (0x00068d1a) popup_call4_audio_second_window

0xd66f,	// (0x00068d2e) popup_call4_audio_wait_window_ParamLimits

0xd66f,	// (0x00068d2e) popup_call4_audio_wait_window

0x61ec,	// (0x000618ab) cell_call4_button_pane_ParamLimits

0x61ec,	// (0x000618ab) cell_call4_button_pane

0x6211,	// (0x000618d0) bg_button_pane_cp09_ParamLimits

0x6211,	// (0x000618d0) bg_button_pane_cp09

0x621d,	// (0x000618dc) cell_call4_button_pane_g1_ParamLimits

0x621d,	// (0x000618dc) cell_call4_button_pane_g1

0x622a,	// (0x000618e9) cell_call4_button_pane_t1_ParamLimits

0x622a,	// (0x000618e9) cell_call4_button_pane_t1

0xd6b7,	// (0x00068d76) popup_call4_audio_conf_window_ParamLimits

0xd6b7,	// (0x00068d76) popup_call4_audio_conf_window

0x54cb,	// (0x00060b8a) mup3_progress_pane_t1_ParamLimits

0x54ea,	// (0x00060ba9) mup3_progress_pane_t2_ParamLimits

0xcfaa,	// (0x00068669) mup3_progress_pane_t3_ParamLimits

0xf609,	// (0x0006acc8) mup3_progress_pane_t_ParamLimits

0xcfc7,	// (0x00068686) mup_progress_pane_cp03_ParamLimits

0x5a00,	// (0x000610bf) mup3_control_keys_pane_g4_copy1

0x5ef7,	// (0x000615b6) mp4_rocker2_pane_ParamLimits

0x5ef7,	// (0x000615b6) mp4_rocker2_pane

0xd6cb,	// (0x00068d8a) mp4_rocker2_pane_g1

0xd6d3,	// (0x00068d92) mp4_rocker2_pane_g2

0x623c,	// (0x000618fb) mp4_rocker2_pane_g3

0x6244,	// (0x00061903) mp4_rocker2_pane_g4

0x624c,	// (0x0006190b) mp4_rocker2_pane_g5

0x0004,

0xf6d1,	// (0x0006ad90) mp4_rocker2_pane_g

0x1194,	// (0x0005c853) main_camera4_pane

0x1194,	// (0x0005c853) main_video4_pane

0x5c59,	// (0x00061318) main_video_tele_dialer_pane_t1_ParamLimits

0x5c59,	// (0x00061318) main_video_tele_dialer_pane_t1

0x5c6b,	// (0x0006132a) main_video_tele_dialer_pane_t2_ParamLimits

0x5c6b,	// (0x0006132a) main_video_tele_dialer_pane_t2

0x0001,

0xf690,	// (0x0006ad4f) main_video_tele_dialer_pane_t_ParamLimits

0xf690,	// (0x0006ad4f) main_video_tele_dialer_pane_t

0x626c,	// (0x0006192b) cam4_autofocus_pane_ParamLimits

0x626c,	// (0x0006192b) cam4_autofocus_pane

0x6286,	// (0x00061945) cam4_image_uncrop_pane_ParamLimits

0x6286,	// (0x00061945) cam4_image_uncrop_pane

0x629d,	// (0x0006195c) cam4_indicators_pane_ParamLimits

0x629d,	// (0x0006195c) cam4_indicators_pane

0x62b9,	// (0x00061978) main_camera4_pane_g1_ParamLimits

0x62b9,	// (0x00061978) main_camera4_pane_g1

0x62c5,	// (0x00061984) main_camera4_pane_g2_ParamLimits

0x62c5,	// (0x00061984) main_camera4_pane_g2

0x62c5,	// (0x00061984) main_camera4_pane_g3_ParamLimits

0x62c5,	// (0x00061984) main_camera4_pane_g3

0x62d1,	// (0x00061990) main_camera4_pane_g4_ParamLimits

0x62d1,	// (0x00061990) main_camera4_pane_g4

0x62dd,	// (0x0006199c) main_camera4_pane_g5_ParamLimits

0x62dd,	// (0x0006199c) main_camera4_pane_g5

0x0005,

0xf6dc,	// (0x0006ad9b) main_camera4_pane_g_ParamLimits

0xf6dc,	// (0x0006ad9b) main_camera4_pane_g

0x62f7,	// (0x000619b6) main_camera4_pane_t1_ParamLimits

0x62f7,	// (0x000619b6) main_camera4_pane_t1

0x633f,	// (0x000619fe) bg_tb_trans_pane_cp06

0x6355,	// (0x00061a14) cam4_indicators_pane_g1

0x6366,	// (0x00061a25) cam4_indicators_pane_g2

0x0002,

0xf6f7,	// (0x0006adb6) cam4_indicators_pane_g

0x637e,	// (0x00061a3d) cam4_indicators_pane_t1

0x63a8,	// (0x00061a67) main_video4_pane_g1_ParamLimits

0x63a8,	// (0x00061a67) main_video4_pane_g1

0x63b4,	// (0x00061a73) main_video4_pane_g2_ParamLimits

0x63b4,	// (0x00061a73) main_video4_pane_g2

0x63c0,	// (0x00061a7f) main_video4_pane_g3_ParamLimits

0x63c0,	// (0x00061a7f) main_video4_pane_g3

0x63cc,	// (0x00061a8b) main_video4_pane_g4_ParamLimits

0x63cc,	// (0x00061a8b) main_video4_pane_g4

0x0004,

0xf6fe,	// (0x0006adbd) main_video4_pane_g_ParamLimits

0xf6fe,	// (0x0006adbd) main_video4_pane_g

0x63ec,	// (0x00061aab) vid4_indicators_pane_ParamLimits

0x63ec,	// (0x00061aab) vid4_indicators_pane

0x640b,	// (0x00061aca) video4_image_uncrop_cif_pane_ParamLimits

0x640b,	// (0x00061aca) video4_image_uncrop_cif_pane

0x641a,	// (0x00061ad9) video4_image_uncrop_nhd_pane_ParamLimits

0x641a,	// (0x00061ad9) video4_image_uncrop_nhd_pane

0x6286,	// (0x00061945) video4_image_uncrop_vga_pane_ParamLimits

0x6286,	// (0x00061945) video4_image_uncrop_vga_pane

0x43b3,	// (0x0005fa72) bg_tb_trans_pane_cp07

0x642f,	// (0x00061aee) vid4_indicators_pane_g1

0x6443,	// (0x00061b02) vid4_indicators_pane_g2

0x6457,	// (0x00061b16) vid4_indicators_pane_g3

0x0004,

0xf709,	// (0x0006adc8) vid4_indicators_pane_g

0x6484,	// (0x00061b43) vid4_indicators_pane_t1

0x649b,	// (0x00061b5a) cam4_autofocus_pane_g1

0x64a3,	// (0x00061b62) cam4_autofocus_pane_g2

0x64ab,	// (0x00061b6a) cam4_autofocus_pane_g3

0x0002,

0xf714,	// (0x0006add3) cam4_autofocus_pane_g

0x64b3,	// (0x00061b72) cam4_autofocus_pane_g3_copy1

0x5c8b,	// (0x0006134a) video_down_pane_cp_t1

0x5c99,	// (0x00061358) video_down_pane_cp_t2

0x0001,

0xf695,	// (0x0006ad54) video_down_pane_cp_t

0x117a,	// (0x0005c839) popup_vitu2_window_ParamLimits

0x117a,	// (0x0005c839) popup_vitu2_window

0x64bb,	// (0x00061b7a) aid_size_cell2_itu2_ParamLimits

0x64bb,	// (0x00061b7a) aid_size_cell2_itu2

0x64dd,	// (0x00061b9c) aid_size_cell_itu2_ParamLimits

0x64dd,	// (0x00061b9c) aid_size_cell_itu2

0x6521,	// (0x00061be0) bg_popup_window_pane_cp09_ParamLimits

0x6521,	// (0x00061be0) bg_popup_window_pane_cp09

0x652f,	// (0x00061bee) field_vitu2_entry_pane_ParamLimits

0x652f,	// (0x00061bee) field_vitu2_entry_pane

0x654f,	// (0x00061c0e) grid_vitu2_function_pane_ParamLimits

0x654f,	// (0x00061c0e) grid_vitu2_function_pane

0x6593,	// (0x00061c52) grid_vitu2_itu_pane_ParamLimits

0x6593,	// (0x00061c52) grid_vitu2_itu_pane

0x660d,	// (0x00061ccc) cell_vitu2_itu_pane_ParamLimits

0x660d,	// (0x00061ccc) cell_vitu2_itu_pane

0x6626,	// (0x00061ce5) cell_vitu2_function_pane_ParamLimits

0x6626,	// (0x00061ce5) cell_vitu2_function_pane

0xd6db,	// (0x00068d9a) bg_popup_call_pane_cp08_ParamLimits

0xd6db,	// (0x00068d9a) bg_popup_call_pane_cp08

0xd6f2,	// (0x00068db1) field_vitu2_entry_pane_g1

0xd6fe,	// (0x00068dbd) field_vitu2_entry_pane_g2

0x0002,

0x081e,	// (0x0005bedd) field_vitu2_entry_pane_g

0x6667,	// (0x00061d26) field_vitu2_entry_pane_t1_ParamLimits

0x6667,	// (0x00061d26) field_vitu2_entry_pane_t1

0x9d5a,	// (0x00065419) field_vitu2_entry_pane_t2_ParamLimits

0x9d5a,	// (0x00065419) field_vitu2_entry_pane_t2

0x0001,

0xf71b,	// (0x0006adda) field_vitu2_entry_pane_t_ParamLimits

0xf71b,	// (0x0006adda) field_vitu2_entry_pane_t

0x6699,	// (0x00061d58) bg_button_pane_cp010_ParamLimits

0x6699,	// (0x00061d58) bg_button_pane_cp010

0x66a7,	// (0x00061d66) cell_vitu2_itu_pane_g1

0x66c7,	// (0x00061d86) cell_vitu2_itu_pane_t1_ParamLimits

0x66c7,	// (0x00061d86) cell_vitu2_itu_pane_t1

0x0de9,	// (0x0005c4a8) cell_vitu2_itu_pane_t2_ParamLimits

0x0de9,	// (0x0005c4a8) cell_vitu2_itu_pane_t2

0x0002,

0xf725,	// (0x0006ade4) cell_vitu2_itu_pane_t_ParamLimits

0xf725,	// (0x0006ade4) cell_vitu2_itu_pane_t

0x43b3,	// (0x0005fa72) bg_button_pane_cp011

0x6713,	// (0x00061dd2) cell_vitu2_function_pane_g1

0x1194,	// (0x0005c853) main_myfav_hc_pane

0x6141,	// (0x00061800) popup_image3_note_pane_ParamLimits

0x6141,	// (0x00061800) popup_image3_note_pane

0x614f,	// (0x0006180e) popup_image3_tool_bar_pane_ParamLimits

0x614f,	// (0x0006180e) popup_image3_tool_bar_pane

0x0e5f,	// (0x0005c51e) cell_vitu2_itu_pane_t3_ParamLimits

0x0e5f,	// (0x0005c51e) cell_vitu2_itu_pane_t3

0x9b52,	// (0x00065211) bg_popup_trans_pane

0xd720,	// (0x00068ddf) grid_image3_tool_bar_pane

0xd72a,	// (0x00068de9) bg_popup_trans_pane_g1

0xac9a,	// (0x00066359) bg_popup_trans_pane_g2

0xd732,	// (0x00068df1) bg_popup_trans_pane_g3

0xd73a,	// (0x00068df9) bg_popup_trans_pane_g4

0xd742,	// (0x00068e01) bg_popup_trans_pane_g5

0xd74a,	// (0x00068e09) bg_popup_trans_pane_g6

0xd752,	// (0x00068e11) bg_popup_trans_pane_g7

0xd75a,	// (0x00068e19) bg_popup_trans_pane_g8

0xac7a,	// (0x00066339) bg_popup_trans_pane_g9

0x0008,

0xf72c,	// (0x0006adeb) bg_popup_trans_pane_g

0xd762,	// (0x00068e21) cell_image3_tool_bar_pane_ParamLimits

0xd762,	// (0x00068e21) cell_image3_tool_bar_pane

0xccd5,	// (0x00068394) cell_image3_tool_bar_pane_g1

0x9b52,	// (0x00065211) bg_popup_trans_pane_cp1

0xd776,	// (0x00068e35) popup_image3_note_pane_t1

0xd784,	// (0x00068e43) popup_image3_note_pane_t2

0xd792,	// (0x00068e51) popup_image3_note_pane_t3

0x0002,

0x0849,	// (0x0005bf08) popup_image3_note_pane_t

0xd7a0,	// (0x00068e5f) popup_image3_note_pane_t3_copy1

0x6727,	// (0x00061de6) bg_myfav_hc_instruction_pane_ParamLimits

0x6727,	// (0x00061de6) bg_myfav_hc_instruction_pane

0x673f,	// (0x00061dfe) cell_myfav_contact_pane_ParamLimits

0x673f,	// (0x00061dfe) cell_myfav_contact_pane

0x6759,	// (0x00061e18) cell_myfav_contact_pane_cp1_ParamLimits

0x6759,	// (0x00061e18) cell_myfav_contact_pane_cp1

0x6771,	// (0x00061e30) cell_myfav_contact_pane_cp2_ParamLimits

0x6771,	// (0x00061e30) cell_myfav_contact_pane_cp2

0x6789,	// (0x00061e48) cell_myfav_contact_pane_cp3_ParamLimits

0x6789,	// (0x00061e48) cell_myfav_contact_pane_cp3

0x67a0,	// (0x00061e5f) cell_myfav_contact_pane_cp4_ParamLimits

0x67a0,	// (0x00061e5f) cell_myfav_contact_pane_cp4

0x67b6,	// (0x00061e75) cell_myfav_contact_pane_cp5_ParamLimits

0x67b6,	// (0x00061e75) cell_myfav_contact_pane_cp5

0x67ca,	// (0x00061e89) cell_myfav_contact_pane_cp6_ParamLimits

0x67ca,	// (0x00061e89) cell_myfav_contact_pane_cp6

0x67de,	// (0x00061e9d) cell_myfav_contact_pane_cp7_ParamLimits

0x67de,	// (0x00061e9d) cell_myfav_contact_pane_cp7

0xd7ae,	// (0x00068e6d) listscroll_gen_pane_cp05

0x67f6,	// (0x00061eb5) main_myfav_hc_pane_g1_ParamLimits

0x67f6,	// (0x00061eb5) main_myfav_hc_pane_g1

0x680c,	// (0x00061ecb) main_myfav_hc_pane_g2_ParamLimits

0x680c,	// (0x00061ecb) main_myfav_hc_pane_g2

0x0002,

0xf73f,	// (0x0006adfe) main_myfav_hc_pane_g_ParamLimits

0xf73f,	// (0x0006adfe) main_myfav_hc_pane_g

0x683c,	// (0x00061efb) main_myfav_hc_pane_t1_ParamLimits

0x683c,	// (0x00061efb) main_myfav_hc_pane_t1

0xd7b7,	// (0x00068e76) main_myfav_hc_pane_t2_ParamLimits

0xd7b7,	// (0x00068e76) main_myfav_hc_pane_t2

0xd7c9,	// (0x00068e88) main_myfav_hc_pane_t3_ParamLimits

0xd7c9,	// (0x00068e88) main_myfav_hc_pane_t3

0x6853,	// (0x00061f12) main_myfav_hc_pane_t4_ParamLimits

0x6853,	// (0x00061f12) main_myfav_hc_pane_t4

0x0004,

0xf746,	// (0x0006ae05) main_myfav_hc_pane_t_ParamLimits

0xf746,	// (0x0006ae05) main_myfav_hc_pane_t

0xccd5,	// (0x00068394) bg_myfav_hc_instruction_pane_g1

0xd7db,	// (0x00068e9a) cell_myfav_contact_pane_g1_ParamLimits

0xd7db,	// (0x00068e9a) cell_myfav_contact_pane_g1

0xd7db,	// (0x00068e9a) cell_myfav_contact_pane_g2_ParamLimits

0xd7db,	// (0x00068e9a) cell_myfav_contact_pane_g2

0xd7e7,	// (0x00068ea6) cell_myfav_contact_pane_g3_ParamLimits

0xd7e7,	// (0x00068ea6) cell_myfav_contact_pane_g3

0xcf94,	// (0x00068653) cell_myfav_contact_pane_g4_ParamLimits

0xcf94,	// (0x00068653) cell_myfav_contact_pane_g4

0xd7f4,	// (0x00068eb3) cell_myfav_contact_pane_g5_ParamLimits

0xd7f4,	// (0x00068eb3) cell_myfav_contact_pane_g5

0x0004,

0x0862,	// (0x0005bf21) cell_myfav_contact_pane_g_ParamLimits

0x0862,	// (0x0005bf21) cell_myfav_contact_pane_g

0x6824,	// (0x00061ee3) main_myfav_hc_pane_g3_ParamLimits

0x6824,	// (0x00061ee3) main_myfav_hc_pane_g3

0x1083,	// (0x0005c742) popup_adpt_find_window

0x687d,	// (0x00061f3c) afind_page_pane_ParamLimits

0x687d,	// (0x00061f3c) afind_page_pane

0x688a,	// (0x00061f49) aid_size_cell_afind_ParamLimits

0x688a,	// (0x00061f49) aid_size_cell_afind

0x68a4,	// (0x00061f63) bg_popup_sub_pane_cp09_ParamLimits

0x68a4,	// (0x00061f63) bg_popup_sub_pane_cp09

0x68b1,	// (0x00061f70) find_pane_cp01_ParamLimits

0x68b1,	// (0x00061f70) find_pane_cp01

0xd800,	// (0x00068ebf) grid_afind_control_pane_ParamLimits

0xd800,	// (0x00068ebf) grid_afind_control_pane

0x68be,	// (0x00061f7d) grid_afind_pane_ParamLimits

0x68be,	// (0x00061f7d) grid_afind_pane

0x68d8,	// (0x00061f97) cell_afind_pane_ParamLimits

0x68d8,	// (0x00061f97) cell_afind_pane

0xccd5,	// (0x00068394) afind_page_pane_g1

0x6920,	// (0x00061fdf) afind_page_pane_g2

0x6929,	// (0x00061fe8) afind_page_pane_g3

0x0002,

0xf751,	// (0x0006ae10) afind_page_pane_g

0x6932,	// (0x00061ff1) afind_page_pane_t1

0xd814,	// (0x00068ed3) cell_afind_grid_control_pane_ParamLimits

0xd814,	// (0x00068ed3) cell_afind_grid_control_pane

0xd5ec,	// (0x00068cab) bg_button_pane_cp69_ParamLimits

0xd5ec,	// (0x00068cab) bg_button_pane_cp69

0x6952,	// (0x00062011) cell_afind_pane_g1_ParamLimits

0x6952,	// (0x00062011) cell_afind_pane_g1

0x695f,	// (0x0006201e) cell_afind_pane_t1_ParamLimits

0x695f,	// (0x0006201e) cell_afind_pane_t1

0xaa93,	// (0x00066152) bg_button_pane_cp72

0xd823,	// (0x00068ee2) cell_afind_grid_control_pane_g1

0x3f2b,	// (0x0005f5ea) aid_image_placing_area_ParamLimits

0x3f2b,	// (0x0005f5ea) aid_image_placing_area

0xd2ba,	// (0x00068979) field_vitu_entry_pane_g1_ParamLimits

0xd2ba,	// (0x00068979) field_vitu_entry_pane_g1

0xd2c6,	// (0x00068985) field_vitu_entry_pane_g2_ParamLimits

0xd2c6,	// (0x00068985) field_vitu_entry_pane_g2

0x0001,

0x071e,	// (0x0005bddd) field_vitu_entry_pane_g_ParamLimits

0x071e,	// (0x0005bddd) field_vitu_entry_pane_g

0x5a89,	// (0x00061148) cell_vitu_itu_pane_g1_ParamLimits

0x5acb,	// (0x0006118a) cell_vitu_itu_pane_t3_ParamLimits

0x5acb,	// (0x0006118a) cell_vitu_itu_pane_t3

0xd59c,	// (0x00068c5b) mp4_progress_pane_t1_ParamLimits

0xd5b5,	// (0x00068c74) mp4_progress_pane_t2_ParamLimits

0x07b3,	// (0x0005be72) mp4_progress_pane_t_ParamLimits

0xd5ce,	// (0x00068c8d) mup_progress_pane_cp04_ParamLimits

0x6867,	// (0x00061f26) main_myfav_hc_pane_t5_ParamLimits

0x6867,	// (0x00061f26) main_myfav_hc_pane_t5

0x0f11,	// (0x0005c5d0) aid_zoom_text_primary

0x1083,	// (0x0005c742) popup_adpt_find_window_ParamLimits

0x43b3,	// (0x0005fa72) main_cam_set_pane

0x62ab,	// (0x0006196a) cam4_zoom_pane_ParamLimits

0x62ab,	// (0x0006196a) cam4_zoom_pane

0x6971,	// (0x00062030) main_cam_set_pane_g1_ParamLimits

0x6971,	// (0x00062030) main_cam_set_pane_g1

0x697f,	// (0x0006203e) main_cam_set_pane_g2_ParamLimits

0x697f,	// (0x0006203e) main_cam_set_pane_g2

0x0001,

0xf758,	// (0x0006ae17) main_cam_set_pane_g_ParamLimits

0xf758,	// (0x0006ae17) main_cam_set_pane_g

0x698b,	// (0x0006204a) main_cam_set_pane_t1_ParamLimits

0x698b,	// (0x0006204a) main_cam_set_pane_t1

0x69a7,	// (0x00062066) main_cset_listscroll_pane_ParamLimits

0x69a7,	// (0x00062066) main_cset_listscroll_pane

0x69d2,	// (0x00062091) main_cset_slider_pane_ParamLimits

0x69d2,	// (0x00062091) main_cset_slider_pane

0xd834,	// (0x00068ef3) main_cset_list_pane_ParamLimits

0xd834,	// (0x00068ef3) main_cset_list_pane

0xd844,	// (0x00068f03) scroll_pane_cp028

0x69f1,	// (0x000620b0) aid_area_touch_slider

0x6a0d,	// (0x000620cc) cset_slider_pane

0x6a37,	// (0x000620f6) main_cset_slider_pane_g1

0x6a4c,	// (0x0006210b) main_cset_slider_pane_g2

0x0011,

0xf75d,	// (0x0006ae1c) main_cset_slider_pane_g

0xd87d,	// (0x00068f3c) main_cset_slider_pane_t1

0x6b12,	// (0x000621d1) main_cset_slider_pane_t2

0x6b2c,	// (0x000621eb) main_cset_slider_pane_t3

0x6b46,	// (0x00062205) main_cset_slider_pane_t4

0x6b64,	// (0x00062223) main_cset_slider_pane_t5

0x6b82,	// (0x00062241) main_cset_slider_pane_t6

0x6b99,	// (0x00062258) main_cset_slider_pane_t7

0x000e,

0xf782,	// (0x0006ae41) main_cset_slider_pane_t

0x6ca7,	// (0x00062366) cset_list_set_pane_ParamLimits

0x6ca7,	// (0x00062366) cset_list_set_pane

0x6cc0,	// (0x0006237f) aid_position_infowindow_above

0x6cc8,	// (0x00062387) aid_position_infowindow_below

0x6cd0,	// (0x0006238f) cset_list_set_pane_g1_ParamLimits

0x6cd0,	// (0x0006238f) cset_list_set_pane_g1

0x6cdc,	// (0x0006239b) cset_list_set_pane_g3_ParamLimits

0x6cdc,	// (0x0006239b) cset_list_set_pane_g3

0x0001,

0xf7a1,	// (0x0006ae60) cset_list_set_pane_g_ParamLimits

0xf7a1,	// (0x0006ae60) cset_list_set_pane_g

0x6ceb,	// (0x000623aa) cset_list_set_pane_t1_ParamLimits

0x6ceb,	// (0x000623aa) cset_list_set_pane_t1

0xa245,	// (0x00065904) list_highlight_pane_cp021_ParamLimits

0xa245,	// (0x00065904) list_highlight_pane_cp021

0xb5b8,	// (0x00066c77) cset_slider_pane_g1

0xb5ca,	// (0x00066c89) cset_slider_pane_g2

0xb5c1,	// (0x00066c80) cset_slider_pane_g3

0x0002,

0x08c2,	// (0x0005bf81) cset_slider_pane_g

0x6d00,	// (0x000623bf) aid_area_touch_cam4_zoom

0x6d08,	// (0x000623c7) cam4_zoom_cont_pane

0x6d10,	// (0x000623cf) cam4_zoom_pane_g1

0x6d18,	// (0x000623d7) cam4_zoom_pane_g2

0x6d20,	// (0x000623df) cam4_zoom_pane_g3

0x0002,

0xf7a6,	// (0x0006ae65) cam4_zoom_pane_g

0x6d28,	// (0x000623e7) cam4_zoom_cont_pane_g1

0x6d31,	// (0x000623f0) cam4_zoom_cont_pane_g2

0x6d3a,	// (0x000623f9) cam4_zoom_cont_pane_g3

0x0002,

0xf7ad,	// (0x0006ae6c) cam4_zoom_cont_pane_g

0x6198,	// (0x00061857) call4_image_pane_ParamLimits

0x6198,	// (0x00061857) call4_image_pane

0xd5f8,	// (0x00068cb7) call4_windows_conf_pane_ParamLimits

0xd639,	// (0x00068cf8) popup_call4_audio_in_window_ParamLimits

0xd639,	// (0x00068cf8) popup_call4_audio_in_window

0x9b52,	// (0x00065211) bg_popup_call2_act_pane_cp02

0xd6af,	// (0x00068d6e) call4_list_conf_pane

0xccd5,	// (0x00068394) call4_image_pane_g1

0xccd5,	// (0x00068394) call4_image_pane_g2

0x0001,

0x05df,	// (0x0005bc9e) call4_image_pane_g

0xd935,	// (0x00068ff4) list_single_graphic_popup_conf4_pane_ParamLimits

0xd935,	// (0x00068ff4) list_single_graphic_popup_conf4_pane

0x9b52,	// (0x00065211) list_highlight_pane_cp022

0xd948,	// (0x00069007) list_single_graphic_popup_conf4_pane_g1

0xb1b4,	// (0x00066873) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf7b4,	// (0x0006ae73) list_single_graphic_popup_conf4_pane_g

0xd950,	// (0x0006900f) list_single_graphic_popup_conf4_pane_t1

0x2167,	// (0x0005d826) popup_vtel_slider_window_ParamLimits

0x2167,	// (0x0005d826) popup_vtel_slider_window

0xd5da,	// (0x00068c99) dialer2_ne_pane_t2_ParamLimits

0xd5da,	// (0x00068c99) dialer2_ne_pane_t2

0x0001,

0xf6b5,	// (0x0006ad74) dialer2_ne_pane_t_ParamLimits

0xf6b5,	// (0x0006ad74) dialer2_ne_pane_t

0xa245,	// (0x00065904) bg_popup_sub_pane_cp010_ParamLimits

0xa245,	// (0x00065904) bg_popup_sub_pane_cp010

0x6d43,	// (0x00062402) popup_vtel_slider_window_g1_ParamLimits

0x6d43,	// (0x00062402) popup_vtel_slider_window_g1

0x6d4f,	// (0x0006240e) popup_vtel_slider_window_g2_ParamLimits

0x6d4f,	// (0x0006240e) popup_vtel_slider_window_g2

0x0003,

0xf7b9,	// (0x0006ae78) popup_vtel_slider_window_g_ParamLimits

0xf7b9,	// (0x0006ae78) popup_vtel_slider_window_g

0x6d97,	// (0x00062456) vtel_slider_pane_ParamLimits

0x6d97,	// (0x00062456) vtel_slider_pane

0x6da6,	// (0x00062465) vtel_slider_pane_g1_ParamLimits

0x6da6,	// (0x00062465) vtel_slider_pane_g1

0x6db3,	// (0x00062472) vtel_slider_pane_g2_ParamLimits

0x6db3,	// (0x00062472) vtel_slider_pane_g2

0x6dc0,	// (0x0006247f) vtel_slider_pane_g3_ParamLimits

0x6dc0,	// (0x0006247f) vtel_slider_pane_g3

0x6da6,	// (0x00062465) vtel_slider_pane_g4_ParamLimits

0x6da6,	// (0x00062465) vtel_slider_pane_g4

0x6dcd,	// (0x0006248c) vtel_slider_pane_g5_ParamLimits

0x6dcd,	// (0x0006248c) vtel_slider_pane_g5

0x0004,

0xf7c2,	// (0x0006ae81) vtel_slider_pane_g_ParamLimits

0xf7c2,	// (0x0006ae81) vtel_slider_pane_g

0x43b3,	// (0x0005fa72) main_gallery2_pane

0x6503,	// (0x00061bc2) aid_size_row_itut2_dropdow_list_ParamLimits

0x6503,	// (0x00061bc2) aid_size_row_itut2_dropdow_list

0x6571,	// (0x00061c30) grid_vitu2_function_top_pane_ParamLimits

0x6571,	// (0x00061c30) grid_vitu2_function_top_pane

0x65cb,	// (0x00061c8a) popup_vitu2_dropdown_list_window_ParamLimits

0x65cb,	// (0x00061c8a) popup_vitu2_dropdown_list_window

0x65eb,	// (0x00061caa) popup_vitu2_match_list_window

0x6de8,	// (0x000624a7) cell_vitu2_function_top_pane_ParamLimits

0x6de8,	// (0x000624a7) cell_vitu2_function_top_pane

0x6e02,	// (0x000624c1) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6e02,	// (0x000624c1) cell_vitu2_function_top_pane_cp01

0x6e1e,	// (0x000624dd) cell_vitu2_function_top_wide_pane_ParamLimits

0x6e1e,	// (0x000624dd) cell_vitu2_function_top_wide_pane

0x43b3,	// (0x0005fa72) bg_button_pane_cp012

0x6e3a,	// (0x000624f9) cell_vitu2_function_top_pane_g1

0x6e4e,	// (0x0006250d) bg_button_pane_cp013_ParamLimits

0x6e4e,	// (0x0006250d) bg_button_pane_cp013

0x6e6a,	// (0x00062529) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e6a,	// (0x00062529) cell_vitu2_function_top_wide_pane_g1

0x117a,	// (0x0005c839) bg_popup_sub_pane_cp20

0x6e82,	// (0x00062541) list_vitu2_match_list_pane

0xd72a,	// (0x00068de9) bg_popup_sub_pane_cp20_g1

0xd732,	// (0x00068df1) bg_popup_sub_pane_cp20_g2

0xac9a,	// (0x00066359) bg_popup_sub_pane_cp20_g3

0xd73a,	// (0x00068df9) bg_popup_sub_pane_cp20_g4

0xac7a,	// (0x00066339) bg_popup_sub_pane_cp20_g5

0xd966,	// (0x00069025) bg_popup_sub_pane_cp20_g6

0xd74a,	// (0x00068e09) bg_popup_sub_pane_cp20_g7

0xd752,	// (0x00068e11) bg_popup_sub_pane_cp20_g8

0xd75a,	// (0x00068e19) bg_popup_sub_pane_cp20_g9

0x0008,

0xf7cd,	// (0x0006ae8c) bg_popup_sub_pane_cp20_g

0x6e9a,	// (0x00062559) list_vitu2_match_list_item_pane_ParamLimits

0x6e9a,	// (0x00062559) list_vitu2_match_list_item_pane

0x6eac,	// (0x0006256b) list_vitu2_match_list_item_pane_t1

0x1194,	// (0x0005c853) bg_popup_sub_pane_cp21

0x6f02,	// (0x000625c1) grid_vitu2_dropdown_list_pane

0x6f0a,	// (0x000625c9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6f0a,	// (0x000625c9) cell_vitu2_dropdown_list_char_pane

0x6f2b,	// (0x000625ea) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6f2b,	// (0x000625ea) cell_vitu2_dropdown_list_ctrl_pane

0xd980,	// (0x0006903f) cell_vitu2_dropdown_list_char_pane_g1

0xd989,	// (0x00069048) cell_vitu2_dropdown_list_char_pane_g2

0xd992,	// (0x00069051) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x090d,	// (0x0005bfcc) cell_vitu2_dropdown_list_char_pane_g

0x6f57,	// (0x00062616) cell_vitu2_dropdown_list_char_pane_t1

0x6f65,	// (0x00062624) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f65,	// (0x00062624) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f75,	// (0x00062634) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f75,	// (0x00062634) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f86,	// (0x00062645) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f86,	// (0x00062645) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6f96,	// (0x00062655) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6f96,	// (0x00062655) cell_vitu2_dropdown_list_ctrl_pane_g4

0x633f,	// (0x000619fe) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x633f,	// (0x000619fe) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf7ea,	// (0x0006aea9) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf7ea,	// (0x0006aea9) cell_vitu2_dropdown_list_ctrl_pane_g

0x6fb2,	// (0x00062671) aid_size_cell_gallery2_ParamLimits

0x6fb2,	// (0x00062671) aid_size_cell_gallery2

0x6fcc,	// (0x0006268b) grid_gallery2_pane_ParamLimits

0x6fcc,	// (0x0006268b) grid_gallery2_pane

0x5910,	// (0x00060fcf) scroll_pane_cp029_ParamLimits

0x5910,	// (0x00060fcf) scroll_pane_cp029

0x6fe3,	// (0x000626a2) cell_gallery2_pane_ParamLimits

0x6fe3,	// (0x000626a2) cell_gallery2_pane

0xd99b,	// (0x0006905a) cell_gallery2_pane_g2

0x7035,	// (0x000626f4) cell_gallery2_pane_g3

0xd9a3,	// (0x00069062) cell_gallery2_pane_g4

0xd9ab,	// (0x0006906a) cell_gallery2_pane_g5

0xaa41,	// (0x00066100) grid_highlight_pane_cp10

0x65eb,	// (0x00061caa) popup_vitu2_match_list_window_ParamLimits

0x65fd,	// (0x00061cbc) popup_vitu2_query_window_ParamLimits

0x65fd,	// (0x00061cbc) popup_vitu2_query_window

0x1194,	// (0x0005c853) bg_vitu2_candi_button_pane

0xd980,	// (0x0006903f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd989,	// (0x00069048) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd992,	// (0x00069051) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x703d,	// (0x000626fc) bg_button_pane_cp015

0x704f,	// (0x0006270e) bg_button_pane_cp016

0x7062,	// (0x00062721) bg_button_pane_cp017

0xc8cd,	// (0x00067f8c) bg_popup_sub_pane_cp22

0xd9b3,	// (0x00069072) popup_vitu2_query_window_g1

0x70a7,	// (0x00062766) popup_vitu2_query_window_g2

0x0002,

0xf7f5,	// (0x0006aeb4) popup_vitu2_query_window_g

0x70c4,	// (0x00062783) popup_vitu2_query_window_t1_ParamLimits

0x70c4,	// (0x00062783) popup_vitu2_query_window_t1

0x70f7,	// (0x000627b6) popup_vitu2_query_window_t2_ParamLimits

0x70f7,	// (0x000627b6) popup_vitu2_query_window_t2

0x7109,	// (0x000627c8) popup_vitu2_query_window_t3_ParamLimits

0x7109,	// (0x000627c8) popup_vitu2_query_window_t3

0x7131,	// (0x000627f0) popup_vitu2_query_window_t4_ParamLimits

0x7131,	// (0x000627f0) popup_vitu2_query_window_t4

0x7152,	// (0x00062811) popup_vitu2_query_window_t5_ParamLimits

0x7152,	// (0x00062811) popup_vitu2_query_window_t5

0x0006,

0xf7fc,	// (0x0006aebb) popup_vitu2_query_window_t_ParamLimits

0xf7fc,	// (0x0006aebb) popup_vitu2_query_window_t

0xd82c,	// (0x00068eeb) main_cset_text_pane

0x69f1,	// (0x000620b0) aid_area_touch_slider_ParamLimits

0x6a0d,	// (0x000620cc) cset_slider_pane_ParamLimits

0x6a37,	// (0x000620f6) main_cset_slider_pane_g1_ParamLimits

0x6a4c,	// (0x0006210b) main_cset_slider_pane_g2_ParamLimits

0xd84d,	// (0x00068f0c) main_cset_slider_pane_g3_ParamLimits

0xd84d,	// (0x00068f0c) main_cset_slider_pane_g3

0x6a61,	// (0x00062120) main_cset_slider_pane_g4_ParamLimits

0x6a61,	// (0x00062120) main_cset_slider_pane_g4

0x6a70,	// (0x0006212f) main_cset_slider_pane_g5_ParamLimits

0x6a70,	// (0x0006212f) main_cset_slider_pane_g5

0x6a7e,	// (0x0006213d) main_cset_slider_pane_g6_ParamLimits

0x6a7e,	// (0x0006213d) main_cset_slider_pane_g6

0xf75d,	// (0x0006ae1c) main_cset_slider_pane_g_ParamLimits

0xd87d,	// (0x00068f3c) main_cset_slider_pane_t1_ParamLimits

0x6b12,	// (0x000621d1) main_cset_slider_pane_t2_ParamLimits

0x6b2c,	// (0x000621eb) main_cset_slider_pane_t3_ParamLimits

0x6b46,	// (0x00062205) main_cset_slider_pane_t4_ParamLimits

0x6b64,	// (0x00062223) main_cset_slider_pane_t5_ParamLimits

0x6b82,	// (0x00062241) main_cset_slider_pane_t6_ParamLimits

0x6b99,	// (0x00062258) main_cset_slider_pane_t7_ParamLimits

0x6bc7,	// (0x00062286) main_cset_slider_pane_t8_ParamLimits

0x6bc7,	// (0x00062286) main_cset_slider_pane_t8

0x6bef,	// (0x000622ae) main_cset_slider_pane_t9_ParamLimits

0x6bef,	// (0x000622ae) main_cset_slider_pane_t9

0x6c17,	// (0x000622d6) main_cset_slider_pane_t10_ParamLimits

0x6c17,	// (0x000622d6) main_cset_slider_pane_t10

0x6c3f,	// (0x000622fe) main_cset_slider_pane_t11_ParamLimits

0x6c3f,	// (0x000622fe) main_cset_slider_pane_t11

0x6c69,	// (0x00062328) main_cset_slider_pane_t12_ParamLimits

0x6c69,	// (0x00062328) main_cset_slider_pane_t12

0x6c88,	// (0x00062347) main_cset_slider_pane_t13_ParamLimits

0x6c88,	// (0x00062347) main_cset_slider_pane_t13

0xf782,	// (0x0006ae41) main_cset_slider_pane_t_ParamLimits

0x9b52,	// (0x00065211) bg_popup_sub_pane_cp011

0xd9bf,	// (0x0006907e) main_cset_text_pane_g1

0xd9c7,	// (0x00069086) main_cset_text_pane_t1

0xd9d5,	// (0x00069094) main_cset_text_pane_t2

0xd9e3,	// (0x000690a2) main_cset_text_pane_t3

0xd9f1,	// (0x000690b0) main_cset_text_pane_t4

0xd9ff,	// (0x000690be) main_cset_text_pane_t5

0xda0d,	// (0x000690cc) main_cset_text_pane_t6

0xda1b,	// (0x000690da) main_cset_text_pane_t7

0x0006,

0x0935,	// (0x0005bff4) main_cset_text_pane_t

0x1194,	// (0x0005c853) main_cam4_burst_pane

0x1194,	// (0x0005c853) main_cam5_pane

0x6940,	// (0x00061fff) bg_button_pane_cp019

0x6949,	// (0x00062008) bg_button_pane_cp020

0xd859,	// (0x00068f18) main_cset_slider_pane_g7_ParamLimits

0xd859,	// (0x00068f18) main_cset_slider_pane_g7

0xd865,	// (0x00068f24) main_cset_slider_pane_g8_ParamLimits

0xd865,	// (0x00068f24) main_cset_slider_pane_g8

0x6a92,	// (0x00062151) main_cset_slider_pane_g9_ParamLimits

0x6a92,	// (0x00062151) main_cset_slider_pane_g9

0x6a9e,	// (0x0006215d) main_cset_slider_pane_g10_ParamLimits

0x6a9e,	// (0x0006215d) main_cset_slider_pane_g10

0x6aaa,	// (0x00062169) main_cset_slider_pane_g11_ParamLimits

0x6aaa,	// (0x00062169) main_cset_slider_pane_g11

0x6ab6,	// (0x00062175) main_cset_slider_pane_g12_ParamLimits

0x6ab6,	// (0x00062175) main_cset_slider_pane_g12

0x6ac2,	// (0x00062181) main_cset_slider_pane_g13_ParamLimits

0x6ac2,	// (0x00062181) main_cset_slider_pane_g13

0x6ad0,	// (0x0006218f) main_cset_slider_pane_g14_ParamLimits

0x6ad0,	// (0x0006218f) main_cset_slider_pane_g14

0x6ade,	// (0x0006219d) main_cset_slider_pane_g15_ParamLimits

0x6ade,	// (0x0006219d) main_cset_slider_pane_g15

0xd8c3,	// (0x00068f82) main_cset_slider_pane_t14_ParamLimits

0xd8c3,	// (0x00068f82) main_cset_slider_pane_t14

0xd8fc,	// (0x00068fbb) main_cset_slider_pane_t15_ParamLimits

0xd8fc,	// (0x00068fbb) main_cset_slider_pane_t15

0x71c9,	// (0x00062888) aid_cam4_burst_size_cell_ParamLimits

0x71c9,	// (0x00062888) aid_cam4_burst_size_cell

0x71e5,	// (0x000628a4) grid_cam4_burst_pane_ParamLimits

0x71e5,	// (0x000628a4) grid_cam4_burst_pane

0x7215,	// (0x000628d4) linegrid_cam4_burst_pane_ParamLimits

0x7215,	// (0x000628d4) linegrid_cam4_burst_pane

0x7235,	// (0x000628f4) scroll_pane_cp30_ParamLimits

0x7235,	// (0x000628f4) scroll_pane_cp30

0x7241,	// (0x00062900) cell_cam4_burst_pane_ParamLimits

0x7241,	// (0x00062900) cell_cam4_burst_pane

0xda29,	// (0x000690e8) linegrid_cam4_burst_pane_g1_ParamLimits

0xda29,	// (0x000690e8) linegrid_cam4_burst_pane_g1

0x727d,	// (0x0006293c) linegrid_cam4_burst_pane_g2_ParamLimits

0x727d,	// (0x0006293c) linegrid_cam4_burst_pane_g2

0xda36,	// (0x000690f5) linegrid_cam4_burst_pane_g3_ParamLimits

0xda36,	// (0x000690f5) linegrid_cam4_burst_pane_g3

0x0002,

0xf80b,	// (0x0006aeca) linegrid_cam4_burst_pane_g_ParamLimits

0xf80b,	// (0x0006aeca) linegrid_cam4_burst_pane_g

0x728e,	// (0x0006294d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x728e,	// (0x0006294d) linegrid_cam4_burst_pane_g3_copy1

0xda43,	// (0x00069102) linegrid_cam4_burst_pane_g4_ParamLimits

0xda43,	// (0x00069102) linegrid_cam4_burst_pane_g4

0x72a8,	// (0x00062967) linegrid_cam4_burst_pane_g5_ParamLimits

0x72a8,	// (0x00062967) linegrid_cam4_burst_pane_g5

0x72b9,	// (0x00062978) linegrid_cam4_burst_pane_g6_ParamLimits

0x72b9,	// (0x00062978) linegrid_cam4_burst_pane_g6

0xda5c,	// (0x0006911b) linegrid_cam4_burst_pane_g7_ParamLimits

0xda5c,	// (0x0006911b) linegrid_cam4_burst_pane_g7

0x72ca,	// (0x00062989) cell_cam4_burst_pane_g1

0xda75,	// (0x00069134) main_cam5_pane_t1_ParamLimits

0xda75,	// (0x00069134) main_cam5_pane_t1

0xda87,	// (0x00069146) main_cam5_pane_t2_ParamLimits

0xda87,	// (0x00069146) main_cam5_pane_t2

0xda99,	// (0x00069158) main_cam5_pane_t3_ParamLimits

0xda99,	// (0x00069158) main_cam5_pane_t3

0xdaab,	// (0x0006916a) main_cam5_pane_t4_ParamLimits

0xdaab,	// (0x0006916a) main_cam5_pane_t4

0xdac3,	// (0x00069182) main_cam5_pane_t5_ParamLimits

0xdac3,	// (0x00069182) main_cam5_pane_t5

0xdad7,	// (0x00069196) main_cam5_pane_t6_ParamLimits

0xdad7,	// (0x00069196) main_cam5_pane_t6

0xdaeb,	// (0x000691aa) main_cam5_pane_t7_ParamLimits

0xdaeb,	// (0x000691aa) main_cam5_pane_t7

0xdafd,	// (0x000691bc) main_cam5_pane_t8_ParamLimits

0xdafd,	// (0x000691bc) main_cam5_pane_t8

0xdb19,	// (0x000691d8) main_cam5_pane_t9_ParamLimits

0xdb19,	// (0x000691d8) main_cam5_pane_t9

0xdb2b,	// (0x000691ea) main_cam5_pane_t10_ParamLimits

0xdb2b,	// (0x000691ea) main_cam5_pane_t10

0xdb3d,	// (0x000691fc) main_cam5_pane_t11_ParamLimits

0xdb3d,	// (0x000691fc) main_cam5_pane_t11

0xdb4f,	// (0x0006920e) main_cam5_pane_t12_ParamLimits

0xdb4f,	// (0x0006920e) main_cam5_pane_t12

0xdb64,	// (0x00069223) main_cam5_pane_t13_ParamLimits

0xdb64,	// (0x00069223) main_cam5_pane_t13

0x000c,

0x0950,	// (0x0005c00f) main_cam5_pane_t_ParamLimits

0x0950,	// (0x0005c00f) main_cam5_pane_t

0x1139,	// (0x0005c7f8) popup_scut_keymap_window_ParamLimits

0x1139,	// (0x0005c7f8) popup_scut_keymap_window

0x72dd,	// (0x0006299c) aid_size_cell_brow_shortcut

0xaa41,	// (0x00066100) bg_popup_window_pane_cp010

0x72e9,	// (0x000629a8) grid_scut_pane

0x72f5,	// (0x000629b4) cell_scut_pane_ParamLimits

0x72f5,	// (0x000629b4) cell_scut_pane

0x730c,	// (0x000629cb) cell_scut_pane_g1

0xdb81,	// (0x00069240) cell_scut_pane_t1

0xdb90,	// (0x0006924f) cell_scut_pane_t2

0x7315,	// (0x000629d4) cell_scut_pane_t3

0x0002,

0xf817,	// (0x0006aed6) cell_scut_pane_t

0x50f4,	// (0x000607b3) main_mup3_pane_g8_ParamLimits

0x50f4,	// (0x000607b3) main_mup3_pane_g8

0x6511,	// (0x00061bd0) area_vitu2_query_pane_ParamLimits

0x6511,	// (0x00061bd0) area_vitu2_query_pane

0x7075,	// (0x00062734) input_focus_pane_cp08

0xdb9f,	// (0x0006925e) area_vitu2_query_pane_g1

0x7323,	// (0x000629e2) area_vitu2_query_pane_g2

0x0001,

0xf81e,	// (0x0006aedd) area_vitu2_query_pane_g

0x7334,	// (0x000629f3) area_vitu2_query_pane_t1_ParamLimits

0x7334,	// (0x000629f3) area_vitu2_query_pane_t1

0x7348,	// (0x00062a07) area_vitu2_query_pane_t2_ParamLimits

0x7348,	// (0x00062a07) area_vitu2_query_pane_t2

0x735c,	// (0x00062a1b) area_vitu2_query_pane_t3_ParamLimits

0x735c,	// (0x00062a1b) area_vitu2_query_pane_t3

0x9d77,	// (0x00065436) area_vitu2_query_pane_t4_ParamLimits

0x9d77,	// (0x00065436) area_vitu2_query_pane_t4

0x9d9f,	// (0x0006545e) area_vitu2_query_pane_t5_ParamLimits

0x9d9f,	// (0x0006545e) area_vitu2_query_pane_t5

0x9dc7,	// (0x00065486) area_vitu2_query_pane_t6_ParamLimits

0x9dc7,	// (0x00065486) area_vitu2_query_pane_t6

0x0006,

0xf823,	// (0x0006aee2) area_vitu2_query_pane_t_ParamLimits

0xf823,	// (0x0006aee2) area_vitu2_query_pane_t

0x7384,	// (0x00062a43) bg_button_pane_cp018

0x7392,	// (0x00062a51) bg_button_pane_cp021

0x739e,	// (0x00062a5d) bg_button_pane_cp022

0x73af,	// (0x00062a6e) input_focus_pane_cp09

0xb2c3,	// (0x00066982) aid_size_touch_mv_arrow_left

0xb2ee,	// (0x000669ad) aid_size_touch_mv_arrow_right

0x6af6,	// (0x000621b5) main_cset_slider_pane_g16_ParamLimits

0x6af6,	// (0x000621b5) main_cset_slider_pane_g16

0x6b04,	// (0x000621c3) main_cset_slider_pane_g17_ParamLimits

0x6b04,	// (0x000621c3) main_cset_slider_pane_g17

0x72ca,	// (0x00062989) cell_cam4_burst_pane_g1_ParamLimits

0x9b52,	// (0x00065211) compa_mode_pane

0x6d5b,	// (0x0006241a) popup_vtel_slider_window_g3_ParamLimits

0x6d5b,	// (0x0006241a) popup_vtel_slider_window_g3

0x6d6f,	// (0x0006242e) popup_vtel_slider_window_g4_ParamLimits

0x6d6f,	// (0x0006242e) popup_vtel_slider_window_g4

0x6d83,	// (0x00062442) popup_vtel_slider_window_t1_ParamLimits

0x6d83,	// (0x00062442) popup_vtel_slider_window_t1

0x1194,	// (0x0005c853) main_cl_pane

0x444d,	// (0x0005fb0c) popup_imed_adjust2_window_ParamLimits

0xc8cd,	// (0x00067f8c) bg_tb_trans_pane_cp05_ParamLimits

0xd1ef,	// (0x000688ae) popup_imed_adjust2_window_g1_ParamLimits

0xd1fe,	// (0x000688bd) popup_imed_adjust2_window_g2_ParamLimits

0xd1fe,	// (0x000688bd) popup_imed_adjust2_window_g2

0xd20a,	// (0x000688c9) popup_imed_adjust2_window_g3_ParamLimits

0xd20a,	// (0x000688c9) popup_imed_adjust2_window_g3

0x0002,

0x06e2,	// (0x0005bda1) popup_imed_adjust2_window_g_ParamLimits

0x06e2,	// (0x0005bda1) popup_imed_adjust2_window_g

0xd216,	// (0x000688d5) popup_imed_adjust2_window_t1_ParamLimits

0xd22e,	// (0x000688ed) slider_imed_adjust_pane_ParamLimits

0xd242,	// (0x00068901) slider_imed_adjust_pane_g1_ParamLimits

0xd252,	// (0x00068911) slider_imed_adjust_pane_g2_ParamLimits

0xd262,	// (0x00068921) slider_imed_adjust_pane_g3_ParamLimits

0xd273,	// (0x00068932) slider_imed_adjust_pane_g4_ParamLimits

0x06e9,	// (0x0005bda8) slider_imed_adjust_pane_g_ParamLimits

0x6254,	// (0x00061913) aid_touch_area_cam4_ParamLimits

0x6254,	// (0x00061913) aid_touch_area_cam4

0x6264,	// (0x00061923) battery_pane_cp01

0x62eb,	// (0x000619aa) main_camera4_pane_g6_ParamLimits

0x62eb,	// (0x000619aa) main_camera4_pane_g6

0x6309,	// (0x000619c8) main_camera4_pane_t2_ParamLimits

0x6309,	// (0x000619c8) main_camera4_pane_t2

0x0001,

0xf6e9,	// (0x0006ada8) main_camera4_pane_t_ParamLimits

0xf6e9,	// (0x0006ada8) main_camera4_pane_t

0x6398,	// (0x00061a57) aid_touch_area_vid4_ParamLimits

0x6398,	// (0x00061a57) aid_touch_area_vid4

0x63d8,	// (0x00061a97) main_video4_pane_g5_ParamLimits

0x63d8,	// (0x00061a97) main_video4_pane_g5

0x63fc,	// (0x00061abb) vid4_progress_pane_ParamLimits

0x63fc,	// (0x00061abb) vid4_progress_pane

0xd871,	// (0x00068f30) main_cset_slider_pane_g18_ParamLimits

0xd871,	// (0x00068f30) main_cset_slider_pane_g18

0xda69,	// (0x00069128) cell_cam4_burst_pane_g2_ParamLimits

0xda69,	// (0x00069128) cell_cam4_burst_pane_g2

0x0001,

0xf812,	// (0x0006aed1) cell_cam4_burst_pane_g_ParamLimits

0xf812,	// (0x0006aed1) cell_cam4_burst_pane_g

0x73c0,	// (0x00062a7f) bg_cl_pane_ParamLimits

0x73c0,	// (0x00062a7f) bg_cl_pane

0x73cc,	// (0x00062a8b) cl_header_pane_ParamLimits

0x73cc,	// (0x00062a8b) cl_header_pane

0x73d8,	// (0x00062a97) cl_listscroll_pane_ParamLimits

0x73d8,	// (0x00062a97) cl_listscroll_pane

0xdbab,	// (0x0006926a) bg_cl_pane_g1

0xdbb3,	// (0x00069272) bg_cl_pane_g2

0xdbbb,	// (0x0006927a) bg_cl_pane_g3

0xdbc3,	// (0x00069282) bg_cl_pane_g4

0xdbcb,	// (0x0006928a) bg_cl_pane_g5

0xdbd3,	// (0x00069292) bg_cl_pane_g6

0xdbdb,	// (0x0006929a) bg_cl_pane_g7

0xdbe3,	// (0x000692a2) bg_cl_pane_g8

0xdbeb,	// (0x000692aa) bg_cl_pane_g9

0x0008,

0x0986,	// (0x0005c045) bg_cl_pane_g

0x73e4,	// (0x00062aa3) aid_height_cl_leading_ParamLimits

0x73e4,	// (0x00062aa3) aid_height_cl_leading

0x73f0,	// (0x00062aaf) aid_height_cl_text_ParamLimits

0x73f0,	// (0x00062aaf) aid_height_cl_text

0xe29d,	// (0x0006995c) bg_cl_header_pane_ParamLimits

0xe29d,	// (0x0006995c) bg_cl_header_pane

0x7408,	// (0x00062ac7) cl_header_pane_g1_ParamLimits

0x7408,	// (0x00062ac7) cl_header_pane_g1

0x7415,	// (0x00062ad4) cl_header_pane_t1_ParamLimits

0x7415,	// (0x00062ad4) cl_header_pane_t1

0xdbf3,	// (0x000692b2) cl_list_pane

0xd844,	// (0x00068f03) hc_scroll_pane_cp01

0xac7a,	// (0x00066339) bg_cl_header_pane_g1

0xd72a,	// (0x00068de9) bg_cl_header_pane_g2

0xac9a,	// (0x00066359) bg_cl_header_pane_g3

0xd73a,	// (0x00068df9) bg_cl_header_pane_g4

0xd732,	// (0x00068df1) bg_cl_header_pane_g5

0xd966,	// (0x00069025) bg_cl_header_pane_g6

0xd752,	// (0x00068e11) bg_cl_header_pane_g7

0xd75a,	// (0x00068e19) bg_cl_header_pane_g8

0xd74a,	// (0x00068e09) bg_cl_header_pane_g9

0x0008,

0xf832,	// (0x0006aef1) bg_cl_header_pane_g

0x7427,	// (0x00062ae6) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7427,	// (0x00062ae6) hc_cl_list_double_graphic_heading_pane

0x743b,	// (0x00062afa) hc_cl_list_single_graphic_pane_ParamLimits

0x743b,	// (0x00062afa) hc_cl_list_single_graphic_pane

0x7455,	// (0x00062b14) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7455,	// (0x00062b14) hc_cl_list_single_graphic_pane_g1

0x7461,	// (0x00062b20) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7461,	// (0x00062b20) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf845,	// (0x0006af04) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf845,	// (0x0006af04) hc_cl_list_single_graphic_pane_g

0x7475,	// (0x00062b34) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7475,	// (0x00062b34) hc_cl_list_single_graphic_pane_t1

0x7455,	// (0x00062b14) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7455,	// (0x00062b14) hc_cl_list_double_graphic_heading_pane_g1

0x748a,	// (0x00062b49) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x748a,	// (0x00062b49) hc_cl_list_double_graphic_heading_pane_g2

0x749e,	// (0x00062b5d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x749e,	// (0x00062b5d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf84a,	// (0x0006af09) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf84a,	// (0x0006af09) hc_cl_list_double_graphic_heading_pane_g

0x74b2,	// (0x00062b71) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x74b2,	// (0x00062b71) hc_cl_list_double_graphic_heading_pane_t1

0x74c7,	// (0x00062b86) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x74c7,	// (0x00062b86) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf851,	// (0x0006af10) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf851,	// (0x0006af10) hc_cl_list_double_graphic_heading_pane_t

0x74e4,	// (0x00062ba3) vid4_progress_pane_g1

0x74f4,	// (0x00062bb3) vid4_progress_pane_g2

0x7504,	// (0x00062bc3) vid4_progress_pane_g3

0x7516,	// (0x00062bd5) vid4_progress_pane_g4

0x0004,

0xf856,	// (0x0006af15) vid4_progress_pane_g

0x752e,	// (0x00062bed) vid4_progress_pane_t1

0x7544,	// (0x00062c03) vid4_progress_pane_t2

0x0002,

0xf861,	// (0x0006af20) vid4_progress_pane_t

0x756f,	// (0x00062c2e) wait_bar_pane_cp07

0xcac8,	// (0x00068187) blid_firmament_pane_ParamLimits

0xcb0b,	// (0x000681ca) popup_blid_sat_info2_window_g1

0xcb2f,	// (0x000681ee) popup_blid_sat_info2_window_t3

0xcb3d,	// (0x000681fc) popup_blid_sat_info2_window_t4

0xcb4b,	// (0x0006820a) popup_blid_sat_info2_window_t5

0xcb59,	// (0x00068218) popup_blid_sat_info2_window_t6

0xcb69,	// (0x00068228) popup_blid_sat_info2_window_t7

0xcb77,	// (0x00068236) popup_blid_sat_info2_window_t8

0xcb85,	// (0x00068244) popup_blid_sat_info2_window_t9

0xcb93,	// (0x00068252) popup_blid_sat_info2_window_t10

0xcc55,	// (0x00068314) aid_firma_cardinal_ParamLimits

0xcc69,	// (0x00068328) blid_firmament_pane_t1_ParamLimits

0xcc80,	// (0x0006833f) blid_firmament_pane_t2_ParamLimits

0xcc97,	// (0x00068356) blid_firmament_pane_t3_ParamLimits

0xccae,	// (0x0006836d) blid_firmament_pane_t4_ParamLimits

0x05d6,	// (0x0005bc95) blid_firmament_pane_t_ParamLimits

0xccc5,	// (0x00068384) blid_sat_info_pane_ParamLimits

0x43b3,	// (0x0005fa72) main_cam_set_pane_ParamLimits

0x58a9,	// (0x00060f68) aid_size_cell_colour_35_ParamLimits

0x58c3,	// (0x00060f82) aid_size_cell_colour_112_ParamLimits

0x58da,	// (0x00060f99) aid_size_cell_effect_ParamLimits

0xa245,	// (0x00065904) bg_tb_trans_pane_cp02_ParamLimits

0xaf99,	// (0x00066658) heading_imed_pane_ParamLimits

0x58f4,	// (0x00060fb3) listscroll_imed_pane_ParamLimits

0xbeb3,	// (0x00067572) popup_call2_audio_first_window_g5_ParamLimits

0xbeb3,	// (0x00067572) popup_call2_audio_first_window_g5

0x6003,	// (0x000616c2) aid_size_touch_image3_arrow_left_ParamLimits

0x6003,	// (0x000616c2) aid_size_touch_image3_arrow_left

0x6019,	// (0x000616d8) aid_size_touch_image3_arrow_right_ParamLimits

0x6019,	// (0x000616d8) aid_size_touch_image3_arrow_right

0x7559,	// (0x00062c18) vid4_progress_pane_t3

0x5b94,	// (0x00061253) main_hwr_training_symbol_option_pane_ParamLimits

0x5b94,	// (0x00061253) main_hwr_training_symbol_option_pane

0xd4dc,	// (0x00068b9b) popup_hwr_training_preview_window_ParamLimits

0xd4dc,	// (0x00068b9b) popup_hwr_training_preview_window

0x5bf5,	// (0x000612b4) hwr_training_navi_pane_g5_ParamLimits

0x5bf5,	// (0x000612b4) hwr_training_navi_pane_g5

0xd718,	// (0x00068dd7) popup_char_count_window

0x117a,	// (0x0005c839) bg_popup_sub_pane_cp20_ParamLimits

0x6e82,	// (0x00062541) list_vitu2_match_list_pane_ParamLimits

0x6e8e,	// (0x0006254d) vitu2_page_scroll_pane_ParamLimits

0x6e8e,	// (0x0006254d) vitu2_page_scroll_pane

0xdbfc,	// (0x000692bb) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbfc,	// (0x000692bb) list_single_hwr_training_symbol_option_pane

0xdc0f,	// (0x000692ce) list_single_hwr_training_symbol_option_pane_g1

0xdc17,	// (0x000692d6) list_single_hwr_training_symbol_option_pane_t1

0xdc25,	// (0x000692e4) bg_button_pane_cp023

0xdc2e,	// (0x000692ed) bg_button_pane_cp024

0x75b8,	// (0x00062c77) vitu2_page_scroll_pane_g1

0x75c0,	// (0x00062c7f) vitu2_page_scroll_pane_g2

0x0001,

0xf868,	// (0x0006af27) vitu2_page_scroll_pane_g

0x75c8,	// (0x00062c87) vitu2_page_scroll_pane_t1

0xccfe,	// (0x000683bd) popup_char_count_window_g1

0xdc61,	// (0x00069320) popup_char_count_window_g2

0xdc6a,	// (0x00069329) popup_char_count_window_g3

0x0002,

0x09d4,	// (0x0005c093) popup_char_count_window_g

0xdc73,	// (0x00069332) popup_char_count_window_t1

0x1194,	// (0x0005c853) main_vded2_pane

0xd1db,	// (0x0006889a) aid_size_cell_imed_line

0xd1e5,	// (0x000688a4) grid_imed_line_width_pane

0x6468,	// (0x00061b27) vid4_indicators_pane_g4

0xdc89,	// (0x00069348) cell_imed_line_width_pane_ParamLimits

0xdc89,	// (0x00069348) cell_imed_line_width_pane

0xdc9d,	// (0x0006935c) cell_imed_line_width_pane_g1

0xdc81,	// (0x00069340) cell_imed_line_width_pane_g2

0x0001,

0xf86d,	// (0x0006af2c) cell_imed_line_width_pane_g

0x75d7,	// (0x00062c96) main_vded2_pane_g1_ParamLimits

0x75d7,	// (0x00062c96) main_vded2_pane_g1

0x75e4,	// (0x00062ca3) main_vded2_pane_g2_ParamLimits

0x75e4,	// (0x00062ca3) main_vded2_pane_g2

0x0001,

0xf872,	// (0x0006af31) main_vded2_pane_g_ParamLimits

0xf872,	// (0x0006af31) main_vded2_pane_g

0x75f2,	// (0x00062cb1) vded2_slider_pane_ParamLimits

0x75f2,	// (0x00062cb1) vded2_slider_pane

0x75ff,	// (0x00062cbe) aid_size_touch_vded2_end

0x7609,	// (0x00062cc8) aid_size_touch_vded2_playhead

0xdca6,	// (0x00069365) aid_size_touch_vded2_start

0xdcae,	// (0x0006936d) vded2_slider_bg_pane

0xdcb7,	// (0x00069376) vded2_slider_pane_g1

0xdcc0,	// (0x0006937f) vded2_slider_pane_g2

0x7611,	// (0x00062cd0) vded2_slider_pane_g3

0x0002,

0xf877,	// (0x0006af36) vded2_slider_pane_g

0xdcc8,	// (0x00069387) vded2_slider_bg_pane_g1

0xdcd1,	// (0x00069390) vded2_slider_bg_pane_g2

0xdcda,	// (0x00069399) vded2_slider_bg_pane_g3

0x0002,

0x09ec,	// (0x0005c0ab) vded2_slider_bg_pane_g

0x3c96,	// (0x0005f355) aid_postcard_touch_down_pane_ParamLimits

0x3c96,	// (0x0005f355) aid_postcard_touch_down_pane

0x3ca6,	// (0x0005f365) aid_postcard_touch_up_pane_ParamLimits

0x3ca6,	// (0x0005f365) aid_postcard_touch_up_pane

0x1194,	// (0x0005c853) main_blid2_pane

0x43dc,	// (0x0005fa9b) popup_blid2_search_window

0x9b52,	// (0x00065211) blid2_gps_pane

0x9b52,	// (0x00065211) blid2_navig_pane

0x9b52,	// (0x00065211) blid2_search_pane

0x9b52,	// (0x00065211) blid2_tripm_pane

0x761a,	// (0x00062cd9) blid2_search_pane_g1_ParamLimits

0x761a,	// (0x00062cd9) blid2_search_pane_g1

0x762a,	// (0x00062ce9) blid2_search_pane_t1_ParamLimits

0x762a,	// (0x00062ce9) blid2_search_pane_t1

0x763c,	// (0x00062cfb) aid_size_cell_blid2_gps_ParamLimits

0x763c,	// (0x00062cfb) aid_size_cell_blid2_gps

0x764c,	// (0x00062d0b) blid2_gps_pane_g1_ParamLimits

0x764c,	// (0x00062d0b) blid2_gps_pane_g1

0x7658,	// (0x00062d17) grid_blid2_satellite_pane_ParamLimits

0x7658,	// (0x00062d17) grid_blid2_satellite_pane

0x7668,	// (0x00062d27) blid2_navig_pane_g1_ParamLimits

0x7668,	// (0x00062d27) blid2_navig_pane_g1

0x7674,	// (0x00062d33) blid2_navig_pane_t1_ParamLimits

0x7674,	// (0x00062d33) blid2_navig_pane_t1

0x7686,	// (0x00062d45) blid2_navig_pane_t2_ParamLimits

0x7686,	// (0x00062d45) blid2_navig_pane_t2

0x0001,

0xf87e,	// (0x0006af3d) blid2_navig_pane_t_ParamLimits

0xf87e,	// (0x0006af3d) blid2_navig_pane_t

0x7698,	// (0x00062d57) blid2_navig_ring_pane_ParamLimits

0x7698,	// (0x00062d57) blid2_navig_ring_pane

0x76a8,	// (0x00062d67) blid2_speed_pane_ParamLimits

0x76a8,	// (0x00062d67) blid2_speed_pane

0x76b4,	// (0x00062d73) blid2_tripm_pane_g1_ParamLimits

0x76b4,	// (0x00062d73) blid2_tripm_pane_g1

0x76c4,	// (0x00062d83) blid2_tripm_pane_g2_ParamLimits

0x76c4,	// (0x00062d83) blid2_tripm_pane_g2

0x76d0,	// (0x00062d8f) blid2_tripm_pane_g3_ParamLimits

0x76d0,	// (0x00062d8f) blid2_tripm_pane_g3

0x76dc,	// (0x00062d9b) blid2_tripm_pane_g4_ParamLimits

0x76dc,	// (0x00062d9b) blid2_tripm_pane_g4

0x76e8,	// (0x00062da7) blid2_tripm_pane_g5_ParamLimits

0x76e8,	// (0x00062da7) blid2_tripm_pane_g5

0x0005,

0xf883,	// (0x0006af42) blid2_tripm_pane_g_ParamLimits

0xf883,	// (0x0006af42) blid2_tripm_pane_g

0x7704,	// (0x00062dc3) blid2_tripm_pane_t1_ParamLimits

0x7704,	// (0x00062dc3) blid2_tripm_pane_t1

0x7718,	// (0x00062dd7) blid2_tripm_pane_t2_ParamLimits

0x7718,	// (0x00062dd7) blid2_tripm_pane_t2

0x772a,	// (0x00062de9) blid2_tripm_pane_t3_ParamLimits

0x772a,	// (0x00062de9) blid2_tripm_pane_t3

0x0003,

0xf890,	// (0x0006af4f) blid2_tripm_pane_t_ParamLimits

0xf890,	// (0x0006af4f) blid2_tripm_pane_t

0x775c,	// (0x00062e1b) cell_blid2_satellite_pane_ParamLimits

0x775c,	// (0x00062e1b) cell_blid2_satellite_pane

0x7776,	// (0x00062e35) cell_blid2_satellite_pane_g1

0xdce3,	// (0x000693a2) cell_blid2_satellite_pane_t1

0xccd5,	// (0x00068394) blid2_speed_pane_g1

0xdcf1,	// (0x000693b0) blid2_speed_pane_t1

0xdcff,	// (0x000693be) blid2_speed_pane_t2

0x0001,

0x0a0e,	// (0x0005c0cd) blid2_speed_pane_t

0xccd5,	// (0x00068394) blid2_navig_ring_pane_g1

0x777f,	// (0x00062e3e) blid2_navig_ring_pane_g2

0x7787,	// (0x00062e46) blid2_navig_ring_pane_g3

0x778f,	// (0x00062e4e) blid2_navig_ring_pane_g4

0x7797,	// (0x00062e56) blid2_navig_ring_pane_g5

0x0004,

0xf899,	// (0x0006af58) blid2_navig_ring_pane_g

0x9b52,	// (0x00065211) bg_popup_window_pane_cp011

0xdd0d,	// (0x000693cc) popup_blid2_search_window_g1

0xdd1f,	// (0x000693de) popup_blid2_search_window_t1

0xdd2d,	// (0x000693ec) popup_blid2_search_window_t2

0x0001,

0xf8a4,	// (0x0006af63) popup_blid2_search_window_t

0xab89,	// (0x00066248) main_browser_pane_g1

0xa84c,	// (0x00065f0b) main_browser_pane_ParamLimits

0x43b3,	// (0x0005fa72) bg_button_pane_cp011_ParamLimits

0x6713,	// (0x00061dd2) cell_vitu2_function_pane_g1_ParamLimits

0xc8cd,	// (0x00067f8c) bg_popup_sub_pane_cp22_ParamLimits

0x7075,	// (0x00062734) input_focus_pane_cp08_ParamLimits

0x708c,	// (0x0006274b) popup_vitu2_query_button_pane_ParamLimits

0x708c,	// (0x0006274b) popup_vitu2_query_button_pane

0x709d,	// (0x0006275c) popup_vitu2_query_input_button_pane

0xd9b3,	// (0x00069072) popup_vitu2_query_window_g1_ParamLimits

0x70a7,	// (0x00062766) popup_vitu2_query_window_g2_ParamLimits

0xf7f5,	// (0x0006aeb4) popup_vitu2_query_window_g_ParamLimits

0x9b52,	// (0x00065211) bg_button_pane_cp026

0x779f,	// (0x00062e5e) popup_vitu2_query_input_button_pane_g1

0x9b52,	// (0x00065211) bg_button_pane_cp025

0xdd3b,	// (0x000693fa) popup_vitu2_query_button_pane_t1

0x4e34,	// (0x000604f3) main_mp3_pane_t6

0x4e44,	// (0x00060503) popup_slider_window_cp01

0x634d,	// (0x00061a0c) cam4_battery_pane

0x6427,	// (0x00061ae6) cam4_battery_pane_cp02

0x74dc,	// (0x00062b9b) cam4_battery_pane_cp01

0x74dc,	// (0x00062b9b) cam4_battery_pane_cp03

0xdd15,	// (0x000693d4) cam4_battery_pane_g1

0xccd5,	// (0x00068394) cam4_battery_pane_g2

0x0001,

0xf8a9,	// (0x0006af68) cam4_battery_pane_g

0xcba1,	// (0x00068260) popup_blid_sat_info2_window_t11

0xb2c3,	// (0x00066982) aid_size_touch_mv_arrow_left_ParamLimits

0xb2ee,	// (0x000669ad) aid_size_touch_mv_arrow_right_ParamLimits

0xb34c,	// (0x00066a0b) navi_pane_g1_ParamLimits

0xb358,	// (0x00066a17) navi_pane_g2_ParamLimits

0xb386,	// (0x00066a45) navi_pane_g3_ParamLimits

0x02d5,	// (0x0005b994) navi_pane_g_ParamLimits

0x36ac,	// (0x0005ed6b) navi_pane_mv_t1_ParamLimits

0x5900,	// (0x00060fbf) grid_imed_effect_pane_ParamLimits

0x2027,	// (0x0005d6e6) aid_placing_vt_slider_lsc

0xaad8,	// (0x00066197) aid_placing_vt_slider_prt

0xa245,	// (0x00065904) bg_tb_trans_pane_cp01_ParamLimits

0xce4f,	// (0x0006850e) popup_image_details_window_g1_ParamLimits

0xce62,	// (0x00068521) popup_image_details_window_g2_ParamLimits

0xce77,	// (0x00068536) popup_image_details_window_g3_ParamLimits

0xce77,	// (0x00068536) popup_image_details_window_g3

0x061b,	// (0x0005bcda) popup_image_details_window_g_ParamLimits

0xce8b,	// (0x0006854a) popup_image_details_window_t1_ParamLimits

0xce9d,	// (0x0006855c) popup_image_details_window_t2_ParamLimits

0xceb6,	// (0x00068575) popup_image_details_window_t3_ParamLimits

0xceca,	// (0x00068589) popup_image_details_window_t4_ParamLimits

0xcee5,	// (0x000685a4) popup_image_details_window_t5_ParamLimits

0x0622,	// (0x0005bce1) popup_image_details_window_t_ParamLimits

0x73fc,	// (0x00062abb) cl_header_name_pane_ParamLimits

0x73fc,	// (0x00062abb) cl_header_name_pane

0x77a7,	// (0x00062e66) cl_header_name_pane_t1_ParamLimits

0x77a7,	// (0x00062e66) cl_header_name_pane_t1

0x77be,	// (0x00062e7d) cl_header_name_pane_t2_ParamLimits

0x77be,	// (0x00062e7d) cl_header_name_pane_t2

0x77e8,	// (0x00062ea7) cl_header_name_pane_t3_ParamLimits

0x77e8,	// (0x00062ea7) cl_header_name_pane_t3

0x0002,

0xf8ae,	// (0x0006af6d) cl_header_name_pane_t_ParamLimits

0xf8ae,	// (0x0006af6d) cl_header_name_pane_t

0xb415,	// (0x00066ad4) navi_pane_mv_g2_ParamLimits

0xd6f2,	// (0x00068db1) field_vitu2_entry_pane_g1_ParamLimits

0xd6fe,	// (0x00068dbd) field_vitu2_entry_pane_g2_ParamLimits

0xd70a,	// (0x00068dc9) field_vitu2_entry_pane_g3_ParamLimits

0xd70a,	// (0x00068dc9) field_vitu2_entry_pane_g3

0x081e,	// (0x0005bedd) field_vitu2_entry_pane_g_ParamLimits

0x66a7,	// (0x00061d66) cell_vitu2_itu_pane_g1_ParamLimits

0x66b9,	// (0x00061d78) cell_vitu2_itu_pane_g2_ParamLimits

0x66b9,	// (0x00061d78) cell_vitu2_itu_pane_g2

0x0001,

0xf720,	// (0x0006addf) cell_vitu2_itu_pane_g_ParamLimits

0xf720,	// (0x0006addf) cell_vitu2_itu_pane_g

0x43b3,	// (0x0005fa72) bg_vkb2_func_pane_cp05_ParamLimits

0x43b3,	// (0x0005fa72) bg_vkb2_func_pane_cp05

0x43b3,	// (0x0005fa72) bg_vkb2_func_pane_cp03

0x43b3,	// (0x0005fa72) bg_vkb2_func_pane_cp04

0x43b3,	// (0x0005fa72) bg_vkb2_func_pane_cp10_ParamLimits

0x43b3,	// (0x0005fa72) bg_vkb2_func_pane_cp10

0x739e,	// (0x00062a5d) bg_vkb2_func_pane_cp08

0x7384,	// (0x00062a43) bg_vkb2_func_pane_cp06

0x7392,	// (0x00062a51) bg_vkb2_func_pane_cp07

0xdc37,	// (0x000692f6) bg_vkb2_func_pane_cp11_ParamLimits

0xdc37,	// (0x000692f6) bg_vkb2_func_pane_cp11

0xdc4c,	// (0x0006930b) bg_vkb2_func_pane_cp12_ParamLimits

0xdc4c,	// (0x0006930b) bg_vkb2_func_pane_cp12

0x9b52,	// (0x00065211) bg_vkb2_func_pane_cp09

0xd72a,	// (0x00068de9) bg_vkb2_func_pane_g1

0xac9a,	// (0x00066359) bg_vkb2_func_pane_g2

0xd732,	// (0x00068df1) bg_vkb2_func_pane_g3

0xd73a,	// (0x00068df9) bg_vkb2_func_pane_g4

0xd966,	// (0x00069025) bg_vkb2_func_pane_g5

0xd752,	// (0x00068e11) bg_vkb2_func_pane_g6

0xd75a,	// (0x00068e19) bg_vkb2_func_pane_g7

0xd74a,	// (0x00068e09) bg_vkb2_func_pane_g8

0xac7a,	// (0x00066339) bg_vkb2_func_pane_g9

0x0008,

0xf8b5,	// (0x0006af74) bg_vkb2_func_pane_g

0x76f6,	// (0x00062db5) blid2_tripm_pane_g6_ParamLimits

0x76f6,	// (0x00062db5) blid2_tripm_pane_g6

0xd594,	// (0x00068c53) mp4_progress_pane_g1

0x7750,	// (0x00062e0f) blid2_tripm_values_pane_ParamLimits

0x7750,	// (0x00062e0f) blid2_tripm_values_pane

0x780d,	// (0x00062ecc) blid2_tripm_values_pane_t1

0x781b,	// (0x00062eda) blid2_tripm_values_pane_t2

0x7829,	// (0x00062ee8) blid2_tripm_values_pane_t3

0x7837,	// (0x00062ef6) blid2_tripm_values_pane_t4

0x7845,	// (0x00062f04) blid2_tripm_values_pane_t5

0x7853,	// (0x00062f12) blid2_tripm_values_pane_t6

0x7861,	// (0x00062f20) blid2_tripm_values_pane_t7

0x786f,	// (0x00062f2e) blid2_tripm_values_pane_t8

0x787d,	// (0x00062f3c) blid2_tripm_values_pane_t9

0x0008,

0xf8c8,	// (0x0006af87) blid2_tripm_values_pane_t

0x2067,	// (0x0005d726) call_video_pane_t1_ParamLimits

0x2088,	// (0x0005d747) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0006a92d) call_video_pane_t_ParamLimits

0x3be0,	// (0x0005f29f) msg_header_pane_g1_ParamLimits

0xb5fd,	// (0x00066cbc) msg_header_pane_g2_ParamLimits

0xb5fd,	// (0x00066cbc) msg_header_pane_g2

0x0001,

0xf424,	// (0x0006aae3) msg_header_pane_g_ParamLimits

0xf424,	// (0x0006aae3) msg_header_pane_g

0xa84c,	// (0x00065f0b) main_clock2_pane_ParamLimits

0x5694,	// (0x00060d53) grid_clock2_toolbar_pane_ParamLimits

0x5694,	// (0x00060d53) grid_clock2_toolbar_pane

0x5694,	// (0x00060d53) listscroll_clock2_pane_ParamLimits

0x5694,	// (0x00060d53) listscroll_clock2_pane

0x573e,	// (0x00060dfd) main_clock2_pane_t3_ParamLimits

0x573e,	// (0x00060dfd) main_clock2_pane_t3

0x5750,	// (0x00060e0f) main_clock2_pane_t4_ParamLimits

0x5750,	// (0x00060e0f) main_clock2_pane_t4

0xdd49,	// (0x00069408) cell_clock2_toolbar_pane

0xdd51,	// (0x00069410) cell_clock2_toolbar_pane_cp01

0xdd51,	// (0x00069410) cell_clock2_toolbar_pane_cp02

0xdd59,	// (0x00069418) cell_clock2_toolbar_pane_cp03

0xdd6f,	// (0x0006942e) list_clock2_pane

0xb248,	// (0x00066907) scroll_pane_cp10

0xdd77,	// (0x00069436) list_single_clock2_pane_ParamLimits

0xdd77,	// (0x00069436) list_single_clock2_pane

0xaa41,	// (0x00066100) list_highlight_pane_cp08

0xdd84,	// (0x00069443) list_single_clock2_pane_t1

0xdd92,	// (0x00069451) list_single_clock2_pane_t2

0x0001,

0xf8db,	// (0x0006af9a) list_single_clock2_pane_t

0x9b52,	// (0x00065211) bg_button_pane_cp10

0xdda0,	// (0x0006945f) cell_clock2_toolbar_pane_g1

0x3c04,	// (0x0005f2c3) aid_main_viewer_pane_g1_ParamLimits

0x3c04,	// (0x0005f2c3) aid_main_viewer_pane_g1

0x3c10,	// (0x0005f2cf) aid_main_viewer_pane_g2_ParamLimits

0x3c10,	// (0x0005f2cf) aid_main_viewer_pane_g2

0x3c1c,	// (0x0005f2db) aid_main_viewer_pane_g3_ParamLimits

0x3c1c,	// (0x0005f2db) aid_main_viewer_pane_g3

0x3c2d,	// (0x0005f2ec) aid_main_viewer_pane_g4_ParamLimits

0x3c2d,	// (0x0005f2ec) aid_main_viewer_pane_g4

0x0003,

0xf435,	// (0x0006aaf4) aid_main_viewer_pane_g_ParamLimits

0xf435,	// (0x0006aaf4) aid_main_viewer_pane_g

0x43a6,	// (0x0005fa65) main_calc_pane_ParamLimits

0x43c1,	// (0x0005fa80) main_dialer2_pane_ParamLimits

0x1194,	// (0x0005c853) main_cam6_pane

0x1194,	// (0x0005c853) main_vid6_pane

0x56a0,	// (0x00060d5f) listscroll_gen_pane_cp06_ParamLimits

0x56a0,	// (0x00060d5f) listscroll_gen_pane_cp06

0x5762,	// (0x00060e21) main_clock2_pane_t5_ParamLimits

0x5762,	// (0x00060e21) main_clock2_pane_t5

0x57ab,	// (0x00060e6a) aid_call2_pane_cp10_ParamLimits

0x57bd,	// (0x00060e7c) aid_call_pane_cp10_ParamLimits

0xb2b7,	// (0x00066976) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2b7,	// (0x00066976) popup_clock_analogue_window_cp10_g2_ParamLimits

0x57cf,	// (0x00060e8e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x57cf,	// (0x00060e8e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2b7,	// (0x00066976) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf630,	// (0x0006acef) popup_clock_analogue_window_cp10_g_ParamLimits

0x57e1,	// (0x00060ea0) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5fb0,	// (0x0006166f) cell_dialer2_keypad_pane_g2_ParamLimits

0x5fb0,	// (0x0006166f) cell_dialer2_keypad_pane_g2

0x0001,

0xf6ba,	// (0x0006ad79) cell_dialer2_keypad_pane_g_ParamLimits

0xf6ba,	// (0x0006ad79) cell_dialer2_keypad_pane_g

0x5fcc,	// (0x0006168b) cell_dialer2_keypad_pane_t1

0x69de,	// (0x0006209d) main_cset_text2_pane_ParamLimits

0x69de,	// (0x0006209d) main_cset_text2_pane

0xdb9f,	// (0x0006925e) area_vitu2_query_pane_g1_ParamLimits

0x7323,	// (0x000629e2) area_vitu2_query_pane_g2_ParamLimits

0xf81e,	// (0x0006aedd) area_vitu2_query_pane_g_ParamLimits

0x9def,	// (0x000654ae) area_vitu2_query_pane_t7_ParamLimits

0x9def,	// (0x000654ae) area_vitu2_query_pane_t7

0x7384,	// (0x00062a43) bg_button_pane_cp018_ParamLimits

0x7392,	// (0x00062a51) bg_button_pane_cp021_ParamLimits

0x739e,	// (0x00062a5d) bg_button_pane_cp022_ParamLimits

0x739e,	// (0x00062a5d) bg_vkb2_func_pane_cp08_ParamLimits

0x7384,	// (0x00062a43) bg_vkb2_func_pane_cp06_ParamLimits

0x7392,	// (0x00062a51) bg_vkb2_func_pane_cp07_ParamLimits

0x73af,	// (0x00062a6e) input_focus_pane_cp09_ParamLimits

0x788b,	// (0x00062f4a) cam6_autofocus_pane_ParamLimits

0x788b,	// (0x00062f4a) cam6_autofocus_pane

0x78ad,	// (0x00062f6c) cam6_image_uncrop_pane_ParamLimits

0x78ad,	// (0x00062f6c) cam6_image_uncrop_pane

0x78da,	// (0x00062f99) cam6_indi_pane_ParamLimits

0x78da,	// (0x00062f99) cam6_indi_pane

0x78f4,	// (0x00062fb3) cam6_mode_pane_ParamLimits

0x78f4,	// (0x00062fb3) cam6_mode_pane

0x7908,	// (0x00062fc7) cam6_timer_pane_ParamLimits

0x7908,	// (0x00062fc7) cam6_timer_pane

0x7919,	// (0x00062fd8) cam6_zoom_pane_ParamLimits

0x7919,	// (0x00062fd8) cam6_zoom_pane

0x7931,	// (0x00062ff0) cam6_mode_pane_g1_ParamLimits

0x7931,	// (0x00062ff0) cam6_mode_pane_g1

0x793d,	// (0x00062ffc) cam6_mode_pane_g2_ParamLimits

0x793d,	// (0x00062ffc) cam6_mode_pane_g2

0x7949,	// (0x00063008) cam6_mode_pane_g3_ParamLimits

0x7949,	// (0x00063008) cam6_mode_pane_g3

0x7955,	// (0x00063014) cam6_mode_pane_g4_ParamLimits

0x7955,	// (0x00063014) cam6_mode_pane_g4

0x0003,

0xf8e0,	// (0x0006af9f) cam6_mode_pane_g_ParamLimits

0xf8e0,	// (0x0006af9f) cam6_mode_pane_g

0xdd61,	// (0x00069420) bg_tb_trans_pane_cp08_ParamLimits

0xdd61,	// (0x00069420) bg_tb_trans_pane_cp08

0xdda8,	// (0x00069467) cam6_battery_pane_ParamLimits

0xdda8,	// (0x00069467) cam6_battery_pane

0xddbe,	// (0x0006947d) cam6_indi_pane_g1_ParamLimits

0xddbe,	// (0x0006947d) cam6_indi_pane_g1

0xddd0,	// (0x0006948f) cam6_indi_pane_g2_ParamLimits

0xddd0,	// (0x0006948f) cam6_indi_pane_g2

0xdde2,	// (0x000694a1) cam6_indi_pane_g3_ParamLimits

0xdde2,	// (0x000694a1) cam6_indi_pane_g3

0x0002,

0x0a63,	// (0x0005c122) cam6_indi_pane_g_ParamLimits

0x0a63,	// (0x0005c122) cam6_indi_pane_g

0xddf4,	// (0x000694b3) cam6_indi_pane_t1_ParamLimits

0xddf4,	// (0x000694b3) cam6_indi_pane_t1

0x64a3,	// (0x00061b62) cam6_autofocus_pane_g1

0x649b,	// (0x00061b5a) cam6_autofocus_pane_g2

0x64b3,	// (0x00061b72) cam6_autofocus_pane_g3

0x64ab,	// (0x00061b6a) cam6_autofocus_pane_g4

0x0003,

0xf8e9,	// (0x0006afa8) cam6_autofocus_pane_g

0xde1a,	// (0x000694d9) cam6_timer_pane_g1

0xde22,	// (0x000694e1) cam6_timer_pane_t1

0xde30,	// (0x000694ef) cam6_zoom_cont_pane

0xde38,	// (0x000694f7) cam6_zoom_pane_g1

0xde40,	// (0x000694ff) cam6_zoom_pane_g2

0x7961,	// (0x00063020) cam6_zoom_pane_g3

0x0002,

0xf8f2,	// (0x0006afb1) cam6_zoom_pane_g

0xccd5,	// (0x00068394) cam6_battery_pane_g1

0xccd5,	// (0x00068394) cam6_battery_pane_g2

0x0001,

0x05df,	// (0x0005bc9e) cam6_battery_pane_g

0xde48,	// (0x00069507) cam6_zoom_cont_pane_g1

0xde51,	// (0x00069510) cam6_zoom_cont_pane_g2

0xde5a,	// (0x00069519) cam6_zoom_cont_pane_g3

0x0002,

0x0a7a,	// (0x0005c139) cam6_zoom_cont_pane_g

0x797e,	// (0x0006303d) cam6_mode_pane_cp_ParamLimits

0x797e,	// (0x0006303d) cam6_mode_pane_cp

0x7992,	// (0x00063051) cam6_zoom_pane_cp_ParamLimits

0x7992,	// (0x00063051) cam6_zoom_pane_cp

0x79aa,	// (0x00063069) vid6_image_uncrop_cif_pane_ParamLimits

0x79aa,	// (0x00063069) vid6_image_uncrop_cif_pane

0x79d6,	// (0x00063095) vid6_image_uncrop_nhd_pane_ParamLimits

0x79d6,	// (0x00063095) vid6_image_uncrop_nhd_pane

0x79f3,	// (0x000630b2) vid6_image_uncrop_vga_pane_ParamLimits

0x79f3,	// (0x000630b2) vid6_image_uncrop_vga_pane

0x7a12,	// (0x000630d1) vid6_image_uncrop_wvga_pane_ParamLimits

0x7a12,	// (0x000630d1) vid6_image_uncrop_wvga_pane

0x7a2f,	// (0x000630ee) vid6_indi_pane_ParamLimits

0x7a2f,	// (0x000630ee) vid6_indi_pane

0xdd61,	// (0x00069420) bg_tb_trans_pane_cp09_ParamLimits

0xdd61,	// (0x00069420) bg_tb_trans_pane_cp09

0xde72,	// (0x00069531) cam6_battery_pane_cp_ParamLimits

0xde72,	// (0x00069531) cam6_battery_pane_cp

0xde7e,	// (0x0006953d) vid6_indi_pane_g1_ParamLimits

0xde7e,	// (0x0006953d) vid6_indi_pane_g1

0xde90,	// (0x0006954f) vid6_indi_pane_g2_ParamLimits

0xde90,	// (0x0006954f) vid6_indi_pane_g2

0xdea2,	// (0x00069561) vid6_indi_pane_g3_ParamLimits

0xdea2,	// (0x00069561) vid6_indi_pane_g3

0xdeb7,	// (0x00069576) vid6_indi_pane_g4_ParamLimits

0xdeb7,	// (0x00069576) vid6_indi_pane_g4

0xdecc,	// (0x0006958b) vid6_indi_pane_g5_ParamLimits

0xdecc,	// (0x0006958b) vid6_indi_pane_g5

0x0004,

0x0a81,	// (0x0005c140) vid6_indi_pane_g_ParamLimits

0x0a81,	// (0x0005c140) vid6_indi_pane_g

0xdee6,	// (0x000695a5) vid6_indi_pane_t1_ParamLimits

0xdee6,	// (0x000695a5) vid6_indi_pane_t1

0xdefc,	// (0x000695bb) vid6_indi_pane_t2_ParamLimits

0xdefc,	// (0x000695bb) vid6_indi_pane_t2

0xdf24,	// (0x000695e3) vid6_indi_pane_t3_ParamLimits

0xdf24,	// (0x000695e3) vid6_indi_pane_t3

0xdf4c,	// (0x0006960b) vid6_indi_pane_t4_ParamLimits

0xdf4c,	// (0x0006960b) vid6_indi_pane_t4

0x0003,

0x0a8c,	// (0x0005c14b) vid6_indi_pane_t_ParamLimits

0x0a8c,	// (0x0005c14b) vid6_indi_pane_t

0xdf70,	// (0x0006962f) wait_bar_pane_cp08

0x7a52,	// (0x00063111) main_cset_text2_pane_t1_ParamLimits

0x7a52,	// (0x00063111) main_cset_text2_pane_t1

0x7969,	// (0x00063028) listscroll_gen_pane_cp06_t1_ParamLimits

0x7969,	// (0x00063028) listscroll_gen_pane_cp06_t1

0x1194,	// (0x0005c853) main_cam6_set_pane

0x633f,	// (0x000619fe) bg_tb_trans_pane_cp06_ParamLimits

0x6355,	// (0x00061a14) cam4_indicators_pane_g1_ParamLimits

0x6366,	// (0x00061a25) cam4_indicators_pane_g2_ParamLimits

0xf6f7,	// (0x0006adb6) cam4_indicators_pane_g_ParamLimits

0x637e,	// (0x00061a3d) cam4_indicators_pane_t1_ParamLimits

0x43b3,	// (0x0005fa72) bg_tb_trans_pane_cp07_ParamLimits

0x642f,	// (0x00061aee) vid4_indicators_pane_g1_ParamLimits

0x6443,	// (0x00061b02) vid4_indicators_pane_g2_ParamLimits

0x6457,	// (0x00061b16) vid4_indicators_pane_g3_ParamLimits

0x6468,	// (0x00061b27) vid4_indicators_pane_g4_ParamLimits

0xf709,	// (0x0006adc8) vid4_indicators_pane_g_ParamLimits

0x6484,	// (0x00061b43) vid4_indicators_pane_t1_ParamLimits

0x74e4,	// (0x00062ba3) vid4_progress_pane_g1_ParamLimits

0x74f4,	// (0x00062bb3) vid4_progress_pane_g2_ParamLimits

0x7504,	// (0x00062bc3) vid4_progress_pane_g3_ParamLimits

0x7516,	// (0x00062bd5) vid4_progress_pane_g4_ParamLimits

0xf856,	// (0x0006af15) vid4_progress_pane_g_ParamLimits

0x752e,	// (0x00062bed) vid4_progress_pane_t1_ParamLimits

0x7544,	// (0x00062c03) vid4_progress_pane_t2_ParamLimits

0x7559,	// (0x00062c18) vid4_progress_pane_t3_ParamLimits

0xf861,	// (0x0006af20) vid4_progress_pane_t_ParamLimits

0x756f,	// (0x00062c2e) wait_bar_pane_cp07_ParamLimits

0x7a89,	// (0x00063148) main_cam6_set_pane_g2_ParamLimits

0x7a89,	// (0x00063148) main_cam6_set_pane_g2

0x7a95,	// (0x00063154) main_cset6_listscroll_pane_ParamLimits

0x7a95,	// (0x00063154) main_cset6_listscroll_pane

0x7ac0,	// (0x0006317f) main_cset6_slider_pane_ParamLimits

0x7ac0,	// (0x0006317f) main_cset6_slider_pane

0x7acc,	// (0x0006318b) main_cset6_text2_pane_ParamLimits

0x7acc,	// (0x0006318b) main_cset6_text2_pane

0xdf7f,	// (0x0006963e) main_cset6_text_pane

0xdf87,	// (0x00069646) main_cset_list_pane_copy1_ParamLimits

0xdf87,	// (0x00069646) main_cset_list_pane_copy1

0xdf97,	// (0x00069656) scroll_pane_cp028_copy1

0x7adf,	// (0x0006319e) cset_list_set_pane_copy1

0x7af5,	// (0x000631b4) aid_position_infowindow_above_copy1

0x7afd,	// (0x000631bc) aid_position_infowindow_below_copy1

0x7b05,	// (0x000631c4) cset_list_set_pane_g1_copy1

0x6cdc,	// (0x0006239b) cset_list_set_pane_g3_copy1_ParamLimits

0x6cdc,	// (0x0006239b) cset_list_set_pane_g3_copy1

0x6ceb,	// (0x000623aa) cset_list_set_pane_t1_copy1_ParamLimits

0x6ceb,	// (0x000623aa) cset_list_set_pane_t1_copy1

0xa245,	// (0x00065904) list_highlight_pane_cp021_copy1_ParamLimits

0xa245,	// (0x00065904) list_highlight_pane_cp021_copy1

0xdfa0,	// (0x0006965f) cset6_slider_pane_ParamLimits

0xdfa0,	// (0x0006965f) cset6_slider_pane

0xdfcc,	// (0x0006968b) main_cset6_slider_pane_g1_ParamLimits

0xdfcc,	// (0x0006968b) main_cset6_slider_pane_g1

0x7b0d,	// (0x000631cc) main_cset6_slider_pane_g2_ParamLimits

0x7b0d,	// (0x000631cc) main_cset6_slider_pane_g2

0xdff4,	// (0x000696b3) main_cset6_slider_pane_g3_ParamLimits

0xdff4,	// (0x000696b3) main_cset6_slider_pane_g3

0x7b35,	// (0x000631f4) main_cset6_slider_pane_g4_ParamLimits

0x7b35,	// (0x000631f4) main_cset6_slider_pane_g4

0x7b41,	// (0x00063200) main_cset6_slider_pane_g5_ParamLimits

0x7b41,	// (0x00063200) main_cset6_slider_pane_g5

0xd859,	// (0x00068f18) main_cset6_slider_pane_g7_ParamLimits

0xd859,	// (0x00068f18) main_cset6_slider_pane_g7

0xd865,	// (0x00068f24) main_cset6_slider_pane_g8_ParamLimits

0xd865,	// (0x00068f24) main_cset6_slider_pane_g8

0x7b4f,	// (0x0006320e) main_cset6_slider_pane_g9_ParamLimits

0x7b4f,	// (0x0006320e) main_cset6_slider_pane_g9

0x7b5b,	// (0x0006321a) main_cset6_slider_pane_g10_ParamLimits

0x7b5b,	// (0x0006321a) main_cset6_slider_pane_g10

0x7b67,	// (0x00063226) main_cset6_slider_pane_g11_ParamLimits

0x7b67,	// (0x00063226) main_cset6_slider_pane_g11

0x7b73,	// (0x00063232) main_cset6_slider_pane_g12_ParamLimits

0x7b73,	// (0x00063232) main_cset6_slider_pane_g12

0xd8ab,	// (0x00068f6a) main_cset6_slider_pane_g13_ParamLimits

0xd8ab,	// (0x00068f6a) main_cset6_slider_pane_g13

0xd8b7,	// (0x00068f76) main_cset6_slider_pane_g14_ParamLimits

0xd8b7,	// (0x00068f76) main_cset6_slider_pane_g14

0x7b7f,	// (0x0006323e) main_cset6_slider_pane_g15_ParamLimits

0x7b7f,	// (0x0006323e) main_cset6_slider_pane_g15

0x7b97,	// (0x00063256) main_cset6_slider_pane_g16_ParamLimits

0x7b97,	// (0x00063256) main_cset6_slider_pane_g16

0x7ba5,	// (0x00063264) main_cset6_slider_pane_g17_ParamLimits

0x7ba5,	// (0x00063264) main_cset6_slider_pane_g17

0x0011,

0xf8f9,	// (0x0006afb8) main_cset6_slider_pane_g_ParamLimits

0xf8f9,	// (0x0006afb8) main_cset6_slider_pane_g

0xe00c,	// (0x000696cb) main_cset6_slider_pane_t1_ParamLimits

0xe00c,	// (0x000696cb) main_cset6_slider_pane_t1

0x7bbf,	// (0x0006327e) main_cset6_slider_pane_t2_ParamLimits

0x7bbf,	// (0x0006327e) main_cset6_slider_pane_t2

0x7bea,	// (0x000632a9) main_cset6_slider_pane_t3_ParamLimits

0x7bea,	// (0x000632a9) main_cset6_slider_pane_t3

0x7c15,	// (0x000632d4) main_cset6_slider_pane_t4_ParamLimits

0x7c15,	// (0x000632d4) main_cset6_slider_pane_t4

0x7c40,	// (0x000632ff) main_cset6_slider_pane_t5_ParamLimits

0x7c40,	// (0x000632ff) main_cset6_slider_pane_t5

0xe04d,	// (0x0006970c) main_cset6_slider_pane_t7_ParamLimits

0xe04d,	// (0x0006970c) main_cset6_slider_pane_t7

0x7c6d,	// (0x0006332c) main_cset6_slider_pane_t8_ParamLimits

0x7c6d,	// (0x0006332c) main_cset6_slider_pane_t8

0x7c91,	// (0x00063350) main_cset6_slider_pane_t9_ParamLimits

0x7c91,	// (0x00063350) main_cset6_slider_pane_t9

0x7cb5,	// (0x00063374) main_cset6_slider_pane_t10_ParamLimits

0x7cb5,	// (0x00063374) main_cset6_slider_pane_t10

0x7cd9,	// (0x00063398) main_cset6_slider_pane_t11_ParamLimits

0x7cd9,	// (0x00063398) main_cset6_slider_pane_t11

0xe083,	// (0x00069742) main_cset6_slider_pane_t14_ParamLimits

0xe083,	// (0x00069742) main_cset6_slider_pane_t14

0xe0bc,	// (0x0006977b) main_cset6_slider_pane_t15_ParamLimits

0xe0bc,	// (0x0006977b) main_cset6_slider_pane_t15

0x000b,

0xf91e,	// (0x0006afdd) main_cset6_slider_pane_t_ParamLimits

0xf91e,	// (0x0006afdd) main_cset6_slider_pane_t

0xd4b1,	// (0x00068b70) cset_slider_pane_g1_copy1

0xd96e,	// (0x0006902d) cset_slider_pane_g2_copy1

0xd977,	// (0x00069036) cset_slider_pane_g3_copy1

0x9b52,	// (0x00065211) bg_popup_sub_pane_cp011_copy1

0xe0f5,	// (0x000697b4) main_cset_text_pane_g1_copy1

0xd9c7,	// (0x00069086) main_cset_text_pane_t1_copy1

0xd9d5,	// (0x00069094) main_cset_text_pane_t2_copy1

0xd9e3,	// (0x000690a2) main_cset_text_pane_t3_copy1

0xd9f1,	// (0x000690b0) main_cset_text_pane_t4_copy1

0xd9ff,	// (0x000690be) main_cset_text_pane_t5_copy1

0xe0fd,	// (0x000697bc) main_cset_text_pane_t6_copy1

0xe10b,	// (0x000697ca) main_cset_text_pane_t7_copy1

0x7dce,	// (0x0006348d) main_cset_text2_pane_t1_copy1

0x43b3,	// (0x0005fa72) main_ncimui_pane

0x4412,	// (0x0005fad1) popup_query_ncimui_window_ParamLimits

0x4412,	// (0x0005fad1) popup_query_ncimui_window

0x9d22,	// (0x000653e1) field_cale_ev2_pane_g4_ParamLimits

0x9d22,	// (0x000653e1) field_cale_ev2_pane_g4

0x5cd0,	// (0x0006138f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5cd0,	// (0x0006138f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf69a,	// (0x0006ad59) cell_video_dialer_keypad_pane_g_ParamLimits

0xf69a,	// (0x0006ad59) cell_video_dialer_keypad_pane_g

0x5ce8,	// (0x000613a7) cell_video_dialer_keypad_pane_t1

0x9b52,	// (0x00065211) bg_popup_window_pane_cp012

0xb133,	// (0x000667f2) heading_pane_cp06

0xe137,	// (0x000697f6) ncim_query_content_pane

0x9b52,	// (0x00065211) bg_popup_heading_pane_cp01

0xe13f,	// (0x000697fe) ncim_heading_pane_t1

0xe14d,	// (0x0006980c) ncim_indicator_popup_pane

0xe15f,	// (0x0006981e) ncim_query_button_pane

0xe173,	// (0x00069832) ncim_query_content_pane_t1

0xe185,	// (0x00069844) ncim_query_content_pane_t2

0x0005,

0xf962,	// (0x0006b021) ncim_query_content_pane_t

0xe1bf,	// (0x0006987e) ncim_query_list_pane

0xe1d1,	// (0x00069890) ncim_query_popup_pane

0xe14d,	// (0x0006980c) ncim_indicator_popup_pane_ParamLimits

0x7f22,	// (0x000635e1) ncim_query_content_pane_g1_ParamLimits

0x7f22,	// (0x000635e1) ncim_query_content_pane_g1

0xe173,	// (0x00069832) ncim_query_content_pane_t1_ParamLimits

0xe185,	// (0x00069844) ncim_query_content_pane_t2_ParamLimits

0x7f2e,	// (0x000635ed) ncim_query_content_pane_t3_ParamLimits

0x7f2e,	// (0x000635ed) ncim_query_content_pane_t3

0x7f4b,	// (0x0006360a) ncim_query_content_pane_t4_ParamLimits

0x7f4b,	// (0x0006360a) ncim_query_content_pane_t4

0x7f68,	// (0x00063627) ncim_query_content_pane_t5_ParamLimits

0x7f68,	// (0x00063627) ncim_query_content_pane_t5

0xe197,	// (0x00069856) ncim_query_content_pane_t6_ParamLimits

0xe197,	// (0x00069856) ncim_query_content_pane_t6

0xf962,	// (0x0006b021) ncim_query_content_pane_t_ParamLimits

0xe1bf,	// (0x0006987e) ncim_query_list_pane_ParamLimits

0xe1d1,	// (0x00069890) ncim_query_popup_pane_ParamLimits

0xe1e5,	// (0x000698a4) wait_bar_pane_cp04

0x9b52,	// (0x00065211) input_focus_pane_cp011

0xe1ed,	// (0x000698ac) ncim_query_popup_pane_t1

0xe1fb,	// (0x000698ba) ncim_list_query_list_pane_ParamLimits

0xe1fb,	// (0x000698ba) ncim_list_query_list_pane

0x9b52,	// (0x00065211) bg_button_pane_cp027

0xe208,	// (0x000698c7) ncim_query_button_pane_g1

0x9b52,	// (0x00065211) list_highlight_pane_cp012

0xe212,	// (0x000698d1) ncim_list_query_list_pane_g1

0xe21a,	// (0x000698d9) ncim_list_query_list_pane_t1

0x6372,	// (0x00061a31) cam4_indicators_pane_g3_ParamLimits

0x6372,	// (0x00061a31) cam4_indicators_pane_g3

0x6474,	// (0x00061b33) vid4_indicators_pane_g5_ParamLimits

0x6474,	// (0x00061b33) vid4_indicators_pane_g5

0x7522,	// (0x00062be1) vid4_progress_pane_g5_ParamLimits

0x7522,	// (0x00062be1) vid4_progress_pane_g5

0x7e0e,	// (0x000634cd) main_ncimui_pane_g1

0x7e76,	// (0x00063535) ncimui_group_query_pane_ParamLimits

0x7e76,	// (0x00063535) ncimui_group_query_pane

0x7ebe,	// (0x0006357d) ncimui_list_pane_ParamLimits

0x7ebe,	// (0x0006357d) ncimui_list_pane

0x7ee5,	// (0x000635a4) ncimui_text_pane_ParamLimits

0x7ee5,	// (0x000635a4) ncimui_text_pane

0x7f85,	// (0x00063644) ncimui_text_pane_t1_ParamLimits

0x7f85,	// (0x00063644) ncimui_text_pane_t1

0xe228,	// (0x000698e7) ncimui_list_single_graphic_pane_ParamLimits

0xe228,	// (0x000698e7) ncimui_list_single_graphic_pane

0x7fa4,	// (0x00063663) ncimui_query_pane_ParamLimits

0x7fa4,	// (0x00063663) ncimui_query_pane

0x9b52,	// (0x00065211) list_highlight_pane_cp013

0xe238,	// (0x000698f7) ncim_list_query_list_pane_t1_copy1

0xe246,	// (0x00069905) ncim_list_single_graphic_pane_g1

0x7fb7,	// (0x00063676) ncim_query_button_pane_cp01

0x7fc3,	// (0x00063682) ncim_query_entry_pane_ParamLimits

0x7fc3,	// (0x00063682) ncim_query_entry_pane

0x7fd6,	// (0x00063695) ncimui_query_pane_g1

0x7fe2,	// (0x000636a1) ncimui_query_pane_t1_ParamLimits

0x7fe2,	// (0x000636a1) ncimui_query_pane_t1

0xa245,	// (0x00065904) input_focus_pane_cp012

0xe24e,	// (0x0006990d) ncim_query_entry_pane_t1

0xa84c,	// (0x00065f0b) main_im_pane_ParamLimits

0x43b3,	// (0x0005fa72) main_mobtv_pane_ParamLimits

0x43b3,	// (0x0005fa72) main_mobtv_pane

0x7bb3,	// (0x00063272) main_cset6_slider_pane_g18_ParamLimits

0x7bb3,	// (0x00063272) main_cset6_slider_pane_g18

0xe000,	// (0x000696bf) main_cset6_slider_pane_g19_ParamLimits

0xe000,	// (0x000696bf) main_cset6_slider_pane_g19

0xd70a,	// (0x00068dc9) bg_main_mobtv_pane_ParamLimits

0xd70a,	// (0x00068dc9) bg_main_mobtv_pane

0x7ffb,	// (0x000636ba) main_mobtv_info_pane

0x8006,	// (0x000636c5) main_mobtv_loading_pane_ParamLimits

0x8006,	// (0x000636c5) main_mobtv_loading_pane

0xe260,	// (0x0006991f) main_mobtv_pg_channel_list_pane

0xe26a,	// (0x00069929) main_mobtv_pg_hdr_pane

0x8013,	// (0x000636d2) main_mobtv_programe_curr_pane_ParamLimits

0x8013,	// (0x000636d2) main_mobtv_programe_curr_pane

0x8020,	// (0x000636df) main_mobtv_programe_next_pane_ParamLimits

0x8020,	// (0x000636df) main_mobtv_programe_next_pane

0xe273,	// (0x00069932) popup_mobtv_noti_window

0xccd5,	// (0x00068394) main_tv_pg_hdr_pane_g1

0xe27b,	// (0x0006993a) main_tv_pg_hdr_pane_g2

0xe283,	// (0x00069942) main_tv_pg_hdr_pane_g3

0xe28b,	// (0x0006994a) main_tv_pg_hdr_pane_g4

0xe293,	// (0x00069952) main_tv_pg_hdr_pane_g5

0xe2ab,	// (0x0006996a) main_tv_pg_hdr_pane_g6

0xe2b5,	// (0x00069974) main_tv_pg_hdr_pane_g7

0xe2bf,	// (0x0006997e) main_tv_pg_hdr_pane_g8

0xe2c9,	// (0x00069988) main_tv_pg_hdr_pane_g9

0xe2d3,	// (0x00069992) main_tv_pg_hdr_pane_g10

0xe2dd,	// (0x0006999c) main_tv_pg_hdr_pane_g11

0x000a,

0xf96f,	// (0x0006b02e) main_tv_pg_hdr_pane_g

0xe2f0,	// (0x000699af) main_tv_pg_hdr_pane_t1

0xe2fe,	// (0x000699bd) main_tv_pg_hdr_pane_t2

0xe30c,	// (0x000699cb) main_tv_pg_hdr_pane_t3

0xe32e,	// (0x000699ed) main_tv_pg_hdr_pane_t4

0xe33e,	// (0x000699fd) main_tv_pg_hdr_pane_t5

0x0004,

0xf986,	// (0x0006b045) main_tv_pg_hdr_pane_t

0xe34e,	// (0x00069a0d) single_mobtv_pg_channel_pane_ParamLimits

0xe34e,	// (0x00069a0d) single_mobtv_pg_channel_pane

0xe360,	// (0x00069a1f) single_mobtv_pg_channel_table_pane

0xad9d,	// (0x0006645c) single_mobtv_pg_channel_thumb_pane

0xe369,	// (0x00069a28) single_tv_pg_channel_pane_g1

0xe372,	// (0x00069a31) single_tv_pg_channel_pane_g2

0x0001,

0x0b2d,	// (0x0005c1ec) single_tv_pg_channel_pane_g

0xcf2f,	// (0x000685ee) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf2f,	// (0x000685ee) bg_single_mobtv_pg_channel_thumb_pane

0xe37b,	// (0x00069a3a) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe37b,	// (0x00069a3a) single_mobtv_pg_channel_thumb_pane_g1

0xe389,	// (0x00069a48) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe389,	// (0x00069a48) single_mobtv_pg_channel_thumb_pane_g2

0xe395,	// (0x00069a54) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe395,	// (0x00069a54) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0b32,	// (0x0005c1f1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0b32,	// (0x0005c1f1) single_mobtv_pg_channel_thumb_pane_g

0xe3a1,	// (0x00069a60) single_mobtv_pg_channel_thumb_pane_t1

0xe3af,	// (0x00069a6e) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0b39,	// (0x0005c1f8) single_mobtv_pg_channel_thumb_pane_t

0xccd5,	// (0x00068394) bg_single_mobtv_pg_channel_table_pane_g1

0xccd5,	// (0x00068394) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x05df,	// (0x0005bc9e) bg_single_mobtv_pg_channel_table_pane_g

0xe3bd,	// (0x00069a7c) single_mobtv_pg_channel_table_pane_t1

0xe3cb,	// (0x00069a8a) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0b3e,	// (0x0005c1fd) single_mobtv_pg_channel_table_pane_t

0x8035,	// (0x000636f4) main_mobtv_info_pane_g1_ParamLimits

0x8035,	// (0x000636f4) main_mobtv_info_pane_g1

0x8051,	// (0x00063710) main_mobtv_info_pane_t1_ParamLimits

0x8051,	// (0x00063710) main_mobtv_info_pane_t1

0x80c9,	// (0x00063788) main_mobtv_info_pane_t2_ParamLimits

0x80c9,	// (0x00063788) main_mobtv_info_pane_t2

0x0002,

0xf996,	// (0x0006b055) main_mobtv_info_pane_t_ParamLimits

0xf996,	// (0x0006b055) main_mobtv_info_pane_t

0x8158,	// (0x00063817) wait_bar_pane_cp05

0x816a,	// (0x00063829) main_mobtv_loading_pane_g1_ParamLimits

0x816a,	// (0x00063829) main_mobtv_loading_pane_g1

0x8178,	// (0x00063837) main_mobtv_loading_pane_g2_ParamLimits

0x8178,	// (0x00063837) main_mobtv_loading_pane_g2

0x8184,	// (0x00063843) main_mobtv_loading_pane_g3_ParamLimits

0x8184,	// (0x00063843) main_mobtv_loading_pane_g3

0x0002,

0xf99d,	// (0x0006b05c) main_mobtv_loading_pane_g_ParamLimits

0xf99d,	// (0x0006b05c) main_mobtv_loading_pane_g

0xe3d9,	// (0x00069a98) main_mobtv_loading_pane_t1_ParamLimits

0xe3d9,	// (0x00069a98) main_mobtv_loading_pane_t1

0xe3f1,	// (0x00069ab0) main_mobtv_loading_pane_t2_ParamLimits

0xe3f1,	// (0x00069ab0) main_mobtv_loading_pane_t2

0x0001,

0x0b56,	// (0x0005c215) main_mobtv_loading_pane_t_ParamLimits

0x0b56,	// (0x0005c215) main_mobtv_loading_pane_t

0x8192,	// (0x00063851) wait_bar_pane_cp06_ParamLimits

0x8192,	// (0x00063851) wait_bar_pane_cp06

0xe415,	// (0x00069ad4) main_mobtv_programe_curr_pane_t1

0xe423,	// (0x00069ae2) main_mobtv_programe_curr_pane_t2

0x0001,

0x0b5b,	// (0x0005c21a) main_mobtv_programe_curr_pane_t

0xe431,	// (0x00069af0) main_mobtv_programe_next_pane_t1

0xe43f,	// (0x00069afe) main_mobtv_programe_next_pane_t2

0xe44d,	// (0x00069b0c) main_mobtv_programe_next_pane_t3

0x0002,

0x0b60,	// (0x0005c21f) main_mobtv_programe_next_pane_t

0x9b52,	// (0x00065211) bg_popup_mobtv_noti_window_pane

0xe45b,	// (0x00069b1a) popup_mobtv_noti_window_g1

0xe463,	// (0x00069b22) popup_mobtv_noti_window_t1

0xe471,	// (0x00069b30) popup_mobtv_noti_window_t2

0x0001,

0x0b67,	// (0x0005c226) popup_mobtv_noti_window_t

0xccd5,	// (0x00068394) bg_popup_mobtv_noti_window_pane_g1

0x1194,	// (0x0005c853) sc_clock_pane

0x1194,	// (0x0005c853) main_fs_bigclock_pane

0x773e,	// (0x00062dfd) blid2_tripm_pane_t4_ParamLimits

0x773e,	// (0x00062dfd) blid2_tripm_pane_t4

0x819e,	// (0x0006385d) sc_clock_pane_g1_ParamLimits

0x819e,	// (0x0006385d) sc_clock_pane_g1

0x81ac,	// (0x0006386b) sc_clock_pane_t1_ParamLimits

0x81ac,	// (0x0006386b) sc_clock_pane_t1

0x81bf,	// (0x0006387e) sc_clock_pane_t2_ParamLimits

0x81bf,	// (0x0006387e) sc_clock_pane_t2

0x81d1,	// (0x00063890) sc_clock_pane_t3_ParamLimits

0x81d1,	// (0x00063890) sc_clock_pane_t3

0x0004,

0xf9a4,	// (0x0006b063) sc_clock_pane_t_ParamLimits

0xf9a4,	// (0x0006b063) sc_clock_pane_t

0x90e0,	// (0x0006479f) main_fs_bigclock_indicator_pane_ParamLimits

0x90e0,	// (0x0006479f) main_fs_bigclock_indicator_pane

0x8254,	// (0x00063913) main_fs_bigclock_pane_g1_ParamLimits

0x8254,	// (0x00063913) main_fs_bigclock_pane_g1

0x90ec,	// (0x000647ab) main_fs_bigclock_pane_t1_ParamLimits

0x90ec,	// (0x000647ab) main_fs_bigclock_pane_t1

0x90fe,	// (0x000647bd) main_fs_bigclock_pane_t2_ParamLimits

0x90fe,	// (0x000647bd) main_fs_bigclock_pane_t2

0x9112,	// (0x000647d1) main_fs_bigclock_pane_t3_ParamLimits

0x9112,	// (0x000647d1) main_fs_bigclock_pane_t3

0x0002,

0xfb5a,	// (0x0006b219) main_fs_bigclock_pane_t_ParamLimits

0xfb5a,	// (0x0006b219) main_fs_bigclock_pane_t

0xecbd,	// (0x0006a37c) main_fs_bigclock_indicator_pane_g1

0xe167,	// (0x00069826) ncim_query_content_pane_g2_ParamLimits

0xe167,	// (0x00069826) ncim_query_content_pane_g2

0x0001,

0xf95d,	// (0x0006b01c) ncim_query_content_pane_g_ParamLimits

0xf95d,	// (0x0006b01c) ncim_query_content_pane_g

0x81e5,	// (0x000638a4) sc_clock_pane_t4_ParamLimits

0x81e5,	// (0x000638a4) sc_clock_pane_t4

0x43b3,	// (0x0005fa72) main_radioblah_pane

0xd67d,	// (0x00068d3c) cell_call4_button_pane_t1_copy1_ParamLimits

0xd67d,	// (0x00068d3c) cell_call4_button_pane_t1_copy1

0x7e28,	// (0x000634e7) main_ncimui_pane_t1_ParamLimits

0x7e28,	// (0x000634e7) main_ncimui_pane_t1

0x7e42,	// (0x00063501) main_ncimui_pane_t2_ParamLimits

0x7e42,	// (0x00063501) main_ncimui_pane_t2

0x0002,

0xf956,	// (0x0006b015) main_ncimui_pane_t_ParamLimits

0xf956,	// (0x0006b015) main_ncimui_pane_t

0xe5b7,	// (0x00069c76) main_radioblah_anim_pane_ParamLimits

0xe5b7,	// (0x00069c76) main_radioblah_anim_pane

0xe5c8,	// (0x00069c87) main_radioblah_info_pane_ParamLimits

0xe5c8,	// (0x00069c87) main_radioblah_info_pane

0xe5dc,	// (0x00069c9b) main_radioblah_pane_t1_ParamLimits

0xe5dc,	// (0x00069c9b) main_radioblah_pane_t1

0xe5f8,	// (0x00069cb7) main_radioblah_pane_t2_ParamLimits

0xe5f8,	// (0x00069cb7) main_radioblah_pane_t2

0x0003,

0x0b8d,	// (0x0005c24c) main_radioblah_pane_t_ParamLimits

0x0b8d,	// (0x0005c24c) main_radioblah_pane_t

0x82aa,	// (0x00063969) main_radioblah_rocker_ctrl_pane_ParamLimits

0x82aa,	// (0x00063969) main_radioblah_rocker_ctrl_pane

0xe640,	// (0x00069cff) main_radioblah_info_pane_t1_ParamLimits

0xe640,	// (0x00069cff) main_radioblah_info_pane_t1

0x82ef,	// (0x000639ae) main_radioblah_info_pane_t2_ParamLimits

0x82ef,	// (0x000639ae) main_radioblah_info_pane_t2

0x0003,

0xf9af,	// (0x0006b06e) main_radioblah_info_pane_t_ParamLimits

0xf9af,	// (0x0006b06e) main_radioblah_info_pane_t

0xccd5,	// (0x00068394) main_radioblah_rocker_ctrl_pane_g1

0x839f,	// (0x00063a5e) main_radioblah_rocker_ctrl_pane_g2

0x83a7,	// (0x00063a66) main_radioblah_rocker_ctrl_pane_g3

0x83af,	// (0x00063a6e) main_radioblah_rocker_ctrl_pane_g4

0x83b7,	// (0x00063a76) main_radioblah_rocker_ctrl_pane_g5

0x83bf,	// (0x00063a7e) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xf9b8,	// (0x0006b077) main_radioblah_rocker_ctrl_pane_g

0x7dce,	// (0x0006348d) main_cset_text2_pane_t1_copy1_ParamLimits

0x6295,	// (0x00061954) cam4_image_uncrop_qvga_pane

0x63e4,	// (0x00061aa3) vid4_image_uncrop_qcif_pane

0x78cc,	// (0x00062f8b) cam6_image_uncrop_qvga_pane_ParamLimits

0x78cc,	// (0x00062f8b) cam6_image_uncrop_qvga_pane

0xde62,	// (0x00069521) vid6_image_uncrop_qcif_pane_ParamLimits

0xde62,	// (0x00069521) vid6_image_uncrop_qcif_pane

0x9b52,	// (0x00065211) bg_popup_preview_window_pane_cp03

0xe119,	// (0x000697d8) list_cset_text2_pane

0xe121,	// (0x000697e0) main_cset6_text2_pane_g1

0xe129,	// (0x000697e8) main_cset6_text2_pane_t1

0x83c7,	// (0x00063a86) list_cset_text2_pane_t1_ParamLimits

0x83c7,	// (0x00063a86) list_cset_text2_pane_t1

0x43b3,	// (0x0005fa72) main_radioblah_pane_ParamLimits

0x8144,	// (0x00063803) main_mobtv_info_pane_t3_ParamLimits

0x8144,	// (0x00063803) main_mobtv_info_pane_t3

0x8298,	// (0x00063957) main_radioblah_pane_g1

0x82c3,	// (0x00063982) main_radioblah_info_pane_g1

0x8344,	// (0x00063a03) main_radioblah_info_pane_t3_ParamLimits

0x8344,	// (0x00063a03) main_radioblah_info_pane_t3

0x30b5,	// (0x0005e774) highlight_cell_cale_month_pane_ParamLimits

0x30b5,	// (0x0005e774) highlight_cell_cale_month_pane

0x1194,	// (0x0005c853) main_phob_fisheye_pane

0xd00b,	// (0x000686ca) scroll_pane_cp0031_ParamLimits

0xd00b,	// (0x000686ca) scroll_pane_cp0031

0xdf70,	// (0x0006962f) wait_bar_pane_cp08_ParamLimits

0x7adf,	// (0x0006319e) cset_list_set_pane_copy1_ParamLimits

0xe67a,	// (0x00069d39) highlight_cell_cale_month_pane_g1

0x83e8,	// (0x00063aa7) highlight_cell_cale_month_pane_t1

0xdbf3,	// (0x000692b2) list_gen_pane_cp01

0xd844,	// (0x00068f03) scroll_pane_01

0x83f6,	// (0x00063ab5) list_single_double_fisheye_pane

0x83ff,	// (0x00063abe) list_double_fisheye_pane_g1_ParamLimits

0x83ff,	// (0x00063abe) list_double_fisheye_pane_g1

0x840b,	// (0x00063aca) list_double_fisheye_pane_g2_ParamLimits

0x840b,	// (0x00063aca) list_double_fisheye_pane_g2

0x841f,	// (0x00063ade) list_double_fisheye_pane_g3_ParamLimits

0x841f,	// (0x00063ade) list_double_fisheye_pane_g3

0x0004,

0xf9c5,	// (0x0006b084) list_double_fisheye_pane_g_ParamLimits

0xf9c5,	// (0x0006b084) list_double_fisheye_pane_g

0x8448,	// (0x00063b07) list_double_fisheye_pane_t1_ParamLimits

0x8448,	// (0x00063b07) list_double_fisheye_pane_t1

0x8463,	// (0x00063b22) list_double_fisheye_pane_t2_ParamLimits

0x8463,	// (0x00063b22) list_double_fisheye_pane_t2

0x0001,

0xf9d0,	// (0x0006b08f) list_double_fisheye_pane_t_ParamLimits

0xf9d0,	// (0x0006b08f) list_double_fisheye_pane_t

0x1194,	// (0x0005c853) main_call5_pane

0x820b,	// (0x000638ca) sc_swipe_pane_ParamLimits

0x820b,	// (0x000638ca) sc_swipe_pane

0x8491,	// (0x00063b50) call5_image_pane_ParamLimits

0x8491,	// (0x00063b50) call5_image_pane

0x84a1,	// (0x00063b60) call5_swipe_1_pane_ParamLimits

0x84a1,	// (0x00063b60) call5_swipe_1_pane

0x84ad,	// (0x00063b6c) call5_swipe_2_pane_ParamLimits

0x84ad,	// (0x00063b6c) call5_swipe_2_pane

0x84c7,	// (0x00063b86) popup_call5_audio_first_window_ParamLimits

0x84c7,	// (0x00063b86) popup_call5_audio_first_window

0xcf2f,	// (0x000685ee) call5_swipe_1_pane_g1_ParamLimits

0xcf2f,	// (0x000685ee) call5_swipe_1_pane_g1

0xe682,	// (0x00069d41) call5_swipe_1_pane_g2_ParamLimits

0xe682,	// (0x00069d41) call5_swipe_1_pane_g2

0x0001,

0xf9d5,	// (0x0006b094) call5_swipe_1_pane_g_ParamLimits

0xf9d5,	// (0x0006b094) call5_swipe_1_pane_g

0xe68e,	// (0x00069d4d) call5_swipe_1_pane_t1_ParamLimits

0xe68e,	// (0x00069d4d) call5_swipe_1_pane_t1

0xcf2f,	// (0x000685ee) call5_swipe_2_pane_g1_ParamLimits

0xcf2f,	// (0x000685ee) call5_swipe_2_pane_g1

0xe6a3,	// (0x00069d62) call5_swipe_2_pane_g2_ParamLimits

0xe6a3,	// (0x00069d62) call5_swipe_2_pane_g2

0x0001,

0xf9da,	// (0x0006b099) call5_swipe_2_pane_g_ParamLimits

0xf9da,	// (0x0006b099) call5_swipe_2_pane_g

0xe6ca,	// (0x00069d89) call5_swipe_2_pane_t1_ParamLimits

0xe6ca,	// (0x00069d89) call5_swipe_2_pane_t1

0xe6df,	// (0x00069d9e) sc_swipe_pane_g1_ParamLimits

0xe6df,	// (0x00069d9e) sc_swipe_pane_g1

0xe6ec,	// (0x00069dab) sc_swipe_pane_g2_ParamLimits

0xe6ec,	// (0x00069dab) sc_swipe_pane_g2

0x0001,

0x0bc6,	// (0x0005c285) sc_swipe_pane_g_ParamLimits

0x0bc6,	// (0x0005c285) sc_swipe_pane_g

0xe6f8,	// (0x00069db7) sc_swipe_pane_t1_ParamLimits

0xe6f8,	// (0x00069db7) sc_swipe_pane_t1

0x1194,	// (0x0005c853) main_cmail_launcher_pane

0x84d5,	// (0x00063b94) aid_size_cell_cmail_l_ParamLimits

0x84d5,	// (0x00063b94) aid_size_cell_cmail_l

0x84e5,	// (0x00063ba4) grid_cmail_l_pane_ParamLimits

0x84e5,	// (0x00063ba4) grid_cmail_l_pane

0x84f5,	// (0x00063bb4) cell_cmail_l_pane_ParamLimits

0x84f5,	// (0x00063bb4) cell_cmail_l_pane

0x8509,	// (0x00063bc8) cell_cmail_l_pane_g1_ParamLimits

0x8509,	// (0x00063bc8) cell_cmail_l_pane_g1

0x851a,	// (0x00063bd9) cell_cmail_l_pane_t1_ParamLimits

0x851a,	// (0x00063bd9) cell_cmail_l_pane_t1

0xe70d,	// (0x00069dcc) cell_cmail_l_pane_t2_ParamLimits

0xe70d,	// (0x00069dcc) cell_cmail_l_pane_t2

0x0001,

0xf9df,	// (0x0006b09e) cell_cmail_l_pane_t_ParamLimits

0xf9df,	// (0x0006b09e) cell_cmail_l_pane_t

0xa245,	// (0x00065904) grid_highlight_pane_cp018_ParamLimits

0xa245,	// (0x00065904) grid_highlight_pane_cp018

0x0fea,	// (0x0005c6a9) main2_pane_ParamLimits

0x0fea,	// (0x0005c6a9) main2_pane

0xa8f7,	// (0x00065fb6) popup_sp_fs_action_menu_bg_pane_g1

0xa8ff,	// (0x00065fbe) popup_sp_fs_action_menu_bg_pane_g2

0xa907,	// (0x00065fc6) popup_sp_fs_action_menu_bg_pane_g3

0xa90f,	// (0x00065fce) popup_sp_fs_action_menu_bg_pane_g4

0xa917,	// (0x00065fd6) popup_sp_fs_action_menu_bg_pane_g5

0xa91f,	// (0x00065fde) popup_sp_fs_action_menu_bg_pane_g6

0xa927,	// (0x00065fe6) popup_sp_fs_action_menu_bg_pane_g7

0xa92f,	// (0x00065fee) popup_sp_fs_action_menu_bg_pane_g8

0xa937,	// (0x00065ff6) popup_sp_fs_action_menu_bg_pane_g9

0xa93f,	// (0x00065ffe) popup_sp_fs_action_menu_bg_pane_g10

0xa93f,	// (0x00065ffe) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0006a849) popup_sp_fs_action_menu_bg_pane_g

0x1e9d,	// (0x0005d55c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1e9d,	// (0x0005d55c) list_medium_line_x2_t3_g3_g1

0x1ea9,	// (0x0005d568) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1ea9,	// (0x0005d568) list_medium_line_x2_t3_g3_g2

0x1eb5,	// (0x0005d574) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1eb5,	// (0x0005d574) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0006a8f7) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0006a8f7) list_medium_line_x2_t3_g3_g

0x1ec1,	// (0x0005d580) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1ec1,	// (0x0005d580) list_medium_line_x2_t3_g3_t1

0x1ed6,	// (0x0005d595) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1ed6,	// (0x0005d595) list_medium_line_x2_t3_g3_t2

0x1ee8,	// (0x0005d5a7) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1ee8,	// (0x0005d5a7) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0006a8fe) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0006a8fe) list_medium_line_x2_t3_g3_t

0x1e9d,	// (0x0005d55c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1e9d,	// (0x0005d55c) list_medium_line_x2_t3_g2_g1

0x1eb5,	// (0x0005d574) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1eb5,	// (0x0005d574) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0006a905) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0006a905) list_medium_line_x2_t3_g2_g

0x1efd,	// (0x0005d5bc) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1efd,	// (0x0005d5bc) list_medium_line_x2_t3_g2_t1

0x1f12,	// (0x0005d5d1) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1f12,	// (0x0005d5d1) list_medium_line_x2_t3_g2_t2

0x1f24,	// (0x0005d5e3) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1f24,	// (0x0005d5e3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0006a90a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0006a90a) list_medium_line_x2_t3_g2_t

0x1e9d,	// (0x0005d55c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1e9d,	// (0x0005d55c) list_medium_line_x2_t4_g4_g1

0x1f42,	// (0x0005d601) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1f42,	// (0x0005d601) list_medium_line_x2_t4_g4_g2

0x1ea9,	// (0x0005d568) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1ea9,	// (0x0005d568) list_medium_line_x2_t4_g4_g3

0x1f4e,	// (0x0005d60d) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1f4e,	// (0x0005d60d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0006a911) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0006a911) list_medium_line_x2_t4_g4_g

0x1f5a,	// (0x0005d619) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1f5a,	// (0x0005d619) list_medium_line_x2_t4_g4_t1

0x1f74,	// (0x0005d633) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1f74,	// (0x0005d633) list_medium_line_x2_t4_g4_t2

0x1f8a,	// (0x0005d649) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1f8a,	// (0x0005d649) list_medium_line_x2_t4_g4_t3

0x1f9f,	// (0x0005d65e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1f9f,	// (0x0005d65e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0006a91a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0006a91a) list_medium_line_x2_t4_g4_t

0x1e9d,	// (0x0005d55c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1e9d,	// (0x0005d55c) list_medium_line_x2_t2_g4_g1

0x1f42,	// (0x0005d601) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1f42,	// (0x0005d601) list_medium_line_x2_t2_g4_g2

0x1ea9,	// (0x0005d568) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1ea9,	// (0x0005d568) list_medium_line_x2_t2_g4_g3

0x1eb5,	// (0x0005d574) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1eb5,	// (0x0005d574) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0006a981) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0006a981) list_medium_line_x2_t2_g4_g

0x30db,	// (0x0005e79a) list_medium_line_x2_t2_g4_t1_ParamLimits

0x30db,	// (0x0005e79a) list_medium_line_x2_t2_g4_t1

0x1ee8,	// (0x0005d5a7) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1ee8,	// (0x0005d5a7) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0006a98a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0006a98a) list_medium_line_x2_t2_g4_t

0x1e9d,	// (0x0005d55c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1e9d,	// (0x0005d55c) list_medium_line_x2_t2_g3_g1

0x1ea9,	// (0x0005d568) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1ea9,	// (0x0005d568) list_medium_line_x2_t2_g3_g2

0x1eb5,	// (0x0005d574) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1eb5,	// (0x0005d574) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0006a8f7) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0006a8f7) list_medium_line_x2_t2_g3_g

0x30f0,	// (0x0005e7af) list_medium_line_x2_t2_g3_t1_ParamLimits

0x30f0,	// (0x0005e7af) list_medium_line_x2_t2_g3_t1

0x1ee8,	// (0x0005d5a7) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1ee8,	// (0x0005d5a7) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0006a98f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0006a98f) list_medium_line_x2_t2_g3_t

0x32d9,	// (0x0005e998) main_sp_fs_list_pane_ParamLimits

0x32d9,	// (0x0005e998) main_sp_fs_list_pane

0x32e5,	// (0x0005e9a4) sp_fs_scroll_pane_ParamLimits

0x32e5,	// (0x0005e9a4) sp_fs_scroll_pane

0x32f1,	// (0x0005e9b0) list_medium_line_x2_t3_t1

0x3301,	// (0x0005e9c0) list_medium_line_x2_t3_t2

0x330f,	// (0x0005e9ce) list_medium_line_x2_t3_t3

0x0002,

0xf2f5,	// (0x0006a9b4) list_medium_line_x2_t3_t

0x331d,	// (0x0005e9dc) list_medium_line_x3_t4_t1

0x332d,	// (0x0005e9ec) list_medium_line_x3_t4_t2

0x333b,	// (0x0005e9fa) list_medium_line_x3_t4_t3

0x330f,	// (0x0005e9ce) list_medium_line_x3_t4_t4

0x0003,

0xf2fc,	// (0x0006a9bb) list_medium_line_x3_t4_t

0x3349,	// (0x0005ea08) list_medium_line_x4_t5_t1

0x3359,	// (0x0005ea18) list_medium_line_x4_t5_t2

0x333b,	// (0x0005e9fa) list_medium_line_x4_t5_t3

0x3367,	// (0x0005ea26) list_medium_line_x4_t5_t4

0x330f,	// (0x0005e9ce) list_medium_line_x4_t5_t5

0x0004,

0xf305,	// (0x0006a9c4) list_medium_line_x4_t5_t

0x1e9d,	// (0x0005d55c) list_medium_line_t4_g4_g1_ParamLimits

0x1e9d,	// (0x0005d55c) list_medium_line_t4_g4_g1

0x1f4e,	// (0x0005d60d) list_medium_line_t4_g4_g2_ParamLimits

0x1f4e,	// (0x0005d60d) list_medium_line_t4_g4_g2

0x3375,	// (0x0005ea34) list_medium_line_t4_g4_g3_ParamLimits

0x3375,	// (0x0005ea34) list_medium_line_t4_g4_g3

0x1eb5,	// (0x0005d574) list_medium_line_t4_g4_g4_ParamLimits

0x1eb5,	// (0x0005d574) list_medium_line_t4_g4_g4

0x0003,

0xf310,	// (0x0006a9cf) list_medium_line_t4_g4_g_ParamLimits

0xf310,	// (0x0006a9cf) list_medium_line_t4_g4_g

0x3381,	// (0x0005ea40) list_medium_line_t4_g4_t1_ParamLimits

0x3381,	// (0x0005ea40) list_medium_line_t4_g4_t1

0x3396,	// (0x0005ea55) list_medium_line_t4_g4_t2_ParamLimits

0x3396,	// (0x0005ea55) list_medium_line_t4_g4_t2

0x33ac,	// (0x0005ea6b) list_medium_line_t4_g4_t3_ParamLimits

0x33ac,	// (0x0005ea6b) list_medium_line_t4_g4_t3

0x1ee8,	// (0x0005d5a7) list_medium_line_t4_g4_t4_ParamLimits

0x1ee8,	// (0x0005d5a7) list_medium_line_t4_g4_t4

0x0003,

0xf319,	// (0x0006a9d8) list_medium_line_t4_g4_t_ParamLimits

0xf319,	// (0x0006a9d8) list_medium_line_t4_g4_t

0x34cd,	// (0x0005eb8c) chi_dic_find_pane_g1

0x43cf,	// (0x0005fa8e) main_tport_pane

0x6dda,	// (0x00062499) list_medium_line_plain_t1

0x6eba,	// (0x00062579) list_medium_line_t2_g2_g1_ParamLimits

0x6eba,	// (0x00062579) list_medium_line_t2_g2_g1

0x6ec6,	// (0x00062585) list_medium_line_t2_g2_g2_ParamLimits

0x6ec6,	// (0x00062585) list_medium_line_t2_g2_g2

0x0001,

0xf7e0,	// (0x0006ae9f) list_medium_line_t2_g2_g_ParamLimits

0xf7e0,	// (0x0006ae9f) list_medium_line_t2_g2_g

0x6ed2,	// (0x00062591) list_medium_line_t2_g2_t1_ParamLimits

0x6ed2,	// (0x00062591) list_medium_line_t2_g2_t1

0x6eec,	// (0x000625ab) list_medium_line_t2_g2_t2_ParamLimits

0x6eec,	// (0x000625ab) list_medium_line_t2_g2_t2

0x0001,

0xf7e5,	// (0x0006aea4) list_medium_line_t2_g2_t_ParamLimits

0xf7e5,	// (0x0006aea4) list_medium_line_t2_g2_t

0x9e13,	// (0x000654d2) aid_sp_fs_list_icon_a_sm

0x9e1b,	// (0x000654da) aid_sp_fs_list_icon_d

0x9e23,	// (0x000654e2) aid_sp_fs_text_primary

0xe2e7,	// (0x000699a6) aid_sp_fs_text_secondary

0x7580,	// (0x00062c3f) list_medium_line

0x7580,	// (0x00062c3f) list_medium_line_g2

0x7580,	// (0x00062c3f) list_medium_line_g3

0x7580,	// (0x00062c3f) list_medium_line_plain

0x7580,	// (0x00062c3f) list_medium_line_plain_t2

0x7580,	// (0x00062c3f) list_medium_line_plain_t3

0x7580,	// (0x00062c3f) list_medium_line_right_icon

0x7580,	// (0x00062c3f) list_medium_line_right_iconx2

0x7580,	// (0x00062c3f) list_medium_line_t2

0x7580,	// (0x00062c3f) list_medium_line_t2_g2

0x7580,	// (0x00062c3f) list_medium_line_t2_g3

0x7580,	// (0x00062c3f) list_medium_line_t2_right_icon

0x7580,	// (0x00062c3f) list_medium_line_t2_right_iconx2

0x7580,	// (0x00062c3f) list_medium_line_t3

0x7580,	// (0x00062c3f) list_medium_line_t3_g2

0x7580,	// (0x00062c3f) list_medium_line_t3_g3

0x7580,	// (0x00062c3f) list_medium_line_t3_right_iconx2

0x7589,	// (0x00062c48) list_medium_line_t4_g4

0x7592,	// (0x00062c51) list_medium_line_x2

0x7592,	// (0x00062c51) list_medium_line_x2_t2_g2

0x7592,	// (0x00062c51) list_medium_line_x2_t2_g3

0x7592,	// (0x00062c51) list_medium_line_x2_t2_g4

0x7592,	// (0x00062c51) list_medium_line_x2_t3

0x7592,	// (0x00062c51) list_medium_line_x2_t3_g2

0x7592,	// (0x00062c51) list_medium_line_x2_t3_g3

0x7592,	// (0x00062c51) list_medium_line_x2_t3_g4

0x7592,	// (0x00062c51) list_medium_line_x2_t4_g2

0x7592,	// (0x00062c51) list_medium_line_x2_t4_g4

0x759b,	// (0x00062c5a) list_medium_line_x3

0x759b,	// (0x00062c5a) list_medium_line_x3_t4

0x759b,	// (0x00062c5a) list_medium_line_x3_t4_g4

0x7589,	// (0x00062c48) list_medium_line_x4_t4

0x7589,	// (0x00062c48) list_medium_line_x4_t4_g7

0x7589,	// (0x00062c48) list_medium_line_x4_t5

0x75a4,	// (0x00062c63) list_single_fs_dyc_pane_ParamLimits

0x75a4,	// (0x00062c63) list_single_fs_dyc_pane

0x1e9d,	// (0x0005d55c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1e9d,	// (0x0005d55c) list_medium_line_x4_t4_g7_g1

0x7cff,	// (0x000633be) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7cff,	// (0x000633be) list_medium_line_x4_t4_g7_g2

0x7d0b,	// (0x000633ca) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7d0b,	// (0x000633ca) list_medium_line_x4_t4_g7_g3

0x7d1a,	// (0x000633d9) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7d1a,	// (0x000633d9) list_medium_line_x4_t4_g7_g4

0x7d26,	// (0x000633e5) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7d26,	// (0x000633e5) list_medium_line_x4_t4_g7_g5

0x7d35,	// (0x000633f4) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7d35,	// (0x000633f4) list_medium_line_x4_t4_g7_g6

0x7d44,	// (0x00063403) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7d44,	// (0x00063403) list_medium_line_x4_t4_g7_g7

0x0006,

0xf937,	// (0x0006aff6) list_medium_line_x4_t4_g7_g_ParamLimits

0xf937,	// (0x0006aff6) list_medium_line_x4_t4_g7_g

0x7d50,	// (0x0006340f) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7d50,	// (0x0006340f) list_medium_line_x4_t4_g7_t1

0x7d65,	// (0x00063424) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7d65,	// (0x00063424) list_medium_line_x4_t4_g7_t2

0x7d7a,	// (0x00063439) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7d7a,	// (0x00063439) list_medium_line_x4_t4_g7_t3

0x7d8f,	// (0x0006344e) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7d8f,	// (0x0006344e) list_medium_line_x4_t4_g7_t4

0x7da1,	// (0x00063460) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7da1,	// (0x00063460) list_medium_line_x4_t4_g7_t5

0x0004,

0xf946,	// (0x0006b005) list_medium_line_x4_t4_g7_t_ParamLimits

0xf946,	// (0x0006b005) list_medium_line_x4_t4_g7_t

0x7db3,	// (0x00063472) list_single_dyc_row_pane_ParamLimits

0x7db3,	// (0x00063472) list_single_dyc_row_pane

0x8485,	// (0x00063b44) call5_gesture_pane_ParamLimits

0x8485,	// (0x00063b44) call5_gesture_pane

0x84b9,	// (0x00063b78) call5_windows_pane_ParamLimits

0x84b9,	// (0x00063b78) call5_windows_pane

0x8530,	// (0x00063bef) call5_swipe_1_pane_cp_ParamLimits

0x8530,	// (0x00063bef) call5_swipe_1_pane_cp

0x853c,	// (0x00063bfb) call5_swipe_2_pane_cp_ParamLimits

0x853c,	// (0x00063bfb) call5_swipe_2_pane_cp

0xaa41,	// (0x00066100) call5_image_pane_cp

0x8548,	// (0x00063c07) popup_call5_audio_first_window_cp_ParamLimits

0x8548,	// (0x00063c07) popup_call5_audio_first_window_cp

0xe6df,	// (0x00069d9e) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6df,	// (0x00069d9e) call5_swipe_1_pane_g1_cp

0xe71f,	// (0x00069dde) call5_swipe_1_pane_g2_cp

0xe6f8,	// (0x00069db7) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6f8,	// (0x00069db7) call5_swipe_1_pane_t1_cp

0xe6df,	// (0x00069d9e) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6df,	// (0x00069d9e) call5_swipe_2_pane_g1_cp

0xe727,	// (0x00069de6) call5_swipe_2_pane_g2_cp

0xe72f,	// (0x00069dee) call5_swipe_2_pane_t1_cp_ParamLimits

0xe72f,	// (0x00069dee) call5_swipe_2_pane_t1_cp

0xa245,	// (0x00065904) main_sp_fs_email_pane

0xe744,	// (0x00069e03) main_sp_fs_listscroll_pane_te

0x9e2c,	// (0x000654eb) popup_sp_fs_action_menu_pane_ParamLimits

0x9e2c,	// (0x000654eb) popup_sp_fs_action_menu_pane

0xccd5,	// (0x00068394) bg_sp_fs_ctrlbar_pane_g1

0xe74d,	// (0x00069e0c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe756,	// (0x00069e15) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe75f,	// (0x00069e1e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xccd5,	// (0x00068394) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x0bd0,	// (0x0005c28f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcaba,	// (0x00068179) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcaba,	// (0x00068179) bg_sp_fs_ctrlbar_ddmenu_pane

0xe768,	// (0x00069e27) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe768,	// (0x00069e27) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe774,	// (0x00069e33) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe774,	// (0x00069e33) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0bd9,	// (0x0005c298) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0bd9,	// (0x0005c298) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe780,	// (0x00069e3f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe780,	// (0x00069e3f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8556,	// (0x00063c15) list_medium_line_t2_right_icon_g1

0x855e,	// (0x00063c1d) list_medium_line_t2_right_icon_t1

0x856e,	// (0x00063c2d) list_medium_line_t2_right_icon_t2

0x0001,

0xf9e4,	// (0x0006b0a3) list_medium_line_t2_right_icon_t

0xc8cd,	// (0x00067f8c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc8cd,	// (0x00067f8c) bg_sp_fs_ctrlbar_pane

0x85bf,	// (0x00063c7e) main_sp_fs_ctrlbar_button_pane_cp01

0x85c7,	// (0x00063c86) main_sp_fs_ctrlbar_ddmenu_pane

0xe7d2,	// (0x00069e91) main_sp_fs_ctrlbar_pane_g1

0xe7de,	// (0x00069e9d) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0be3,	// (0x0005c2a2) main_sp_fs_ctrlbar_pane_g

0xe7ea,	// (0x00069ea9) main_sp_fs_ctrlbar_pane_t1

0x85d1,	// (0x00063c90) main_sp_fs_ctrlbar_pane

0x85e7,	// (0x00063ca6) main_sp_fs_listscroll_pane_te_cp01

0x85f8,	// (0x00063cb7) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x85f8,	// (0x00063cb7) popup_sp_fs_action_menu_pane_cp01

0xa245,	// (0x00065904) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa245,	// (0x00065904) bg_sp_fs_highlight_list_pane_cp01

0x9e6e,	// (0x0006552d) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x9e6e,	// (0x0006552d) sp_fs_action_menu_list_gene_pane_g1

0xe81a,	// (0x00069ed9) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe81a,	// (0x00069ed9) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xf9e9,	// (0x0006b0a8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xf9e9,	// (0x0006b0a8) sp_fs_action_menu_list_gene_pane_g

0x9e7d,	// (0x0006553c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x9e7d,	// (0x0006553c) sp_fs_action_menu_list_gene_pane_t1

0x9e95,	// (0x00065554) sp_fs_action_menu_list_gene_pane_ParamLimits

0x9e95,	// (0x00065554) sp_fs_action_menu_list_gene_pane

0xe827,	// (0x00069ee6) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe827,	// (0x00069ee6) popup_sp_fs_action_menu_bg_pane

0x9eb4,	// (0x00065573) sp_fs_action_menu_list_pane_ParamLimits

0x9eb4,	// (0x00065573) sp_fs_action_menu_list_pane

0x9ed4,	// (0x00065593) sp_fs_scroll_pane_cp01_ParamLimits

0x9ed4,	// (0x00065593) sp_fs_scroll_pane_cp01

0x8622,	// (0x00063ce1) list_medium_line_plain_t2_t1

0x8632,	// (0x00063cf1) list_medium_line_plain_t2_t2

0x0001,

0xf9ee,	// (0x0006b0ad) list_medium_line_plain_t2_t

0x8640,	// (0x00063cff) list_medium_line_plain_t3_t1

0x8650,	// (0x00063d0f) list_medium_line_plain_t3_t2

0x865e,	// (0x00063d1d) list_medium_line_plain_t3_t3

0x0002,

0xf9f3,	// (0x0006b0b2) list_medium_line_plain_t3_t

0x1e9d,	// (0x0005d55c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1e9d,	// (0x0005d55c) list_medium_line_x2_t2_g2_g1

0x1eb5,	// (0x0005d574) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1eb5,	// (0x0005d574) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0006a905) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0006a905) list_medium_line_x2_t2_g2_g

0x3381,	// (0x0005ea40) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3381,	// (0x0005ea40) list_medium_line_x2_t2_g2_t1

0x1ee8,	// (0x0005d5a7) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1ee8,	// (0x0005d5a7) list_medium_line_x2_t2_g2_t2

0x0001,

0xf9fa,	// (0x0006b0b9) list_medium_line_x2_t2_g2_t_ParamLimits

0xf9fa,	// (0x0006b0b9) list_medium_line_x2_t2_g2_t

0x1e9d,	// (0x0005d55c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1e9d,	// (0x0005d55c) list_medium_line_x2_t4_g2_g1

0x866c,	// (0x00063d2b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x866c,	// (0x00063d2b) list_medium_line_x2_t4_g2_g2

0x0001,

0xf9ff,	// (0x0006b0be) list_medium_line_x2_t4_g2_g_ParamLimits

0xf9ff,	// (0x0006b0be) list_medium_line_x2_t4_g2_g

0x867e,	// (0x00063d3d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x867e,	// (0x00063d3d) list_medium_line_x2_t4_g2_t1

0x8698,	// (0x00063d57) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8698,	// (0x00063d57) list_medium_line_x2_t4_g2_t2

0x86ae,	// (0x00063d6d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x86ae,	// (0x00063d6d) list_medium_line_x2_t4_g2_t3

0x1ee8,	// (0x0005d5a7) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1ee8,	// (0x0005d5a7) list_medium_line_x2_t4_g2_t4

0x0003,

0xfa04,	// (0x0006b0c3) list_medium_line_x2_t4_g2_t_ParamLimits

0xfa04,	// (0x0006b0c3) list_medium_line_x2_t4_g2_t

0x86c3,	// (0x00063d82) list_medium_line_t3_right_iconx2_g1

0x8556,	// (0x00063c15) list_medium_line_t3_right_iconx2_g2

0x86cb,	// (0x00063d8a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfa0d,	// (0x0006b0cc) list_medium_line_t3_right_iconx2_g

0x86d3,	// (0x00063d92) list_medium_line_t3_right_iconx2_t1

0x86e3,	// (0x00063da2) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfa14,	// (0x0006b0d3) list_medium_line_t3_right_iconx2_t

0x1e9d,	// (0x0005d55c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1e9d,	// (0x0005d55c) list_medium_line_x3_t4_g4_g1

0x1ea9,	// (0x0005d568) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1ea9,	// (0x0005d568) list_medium_line_x3_t4_g4_g2

0x1f4e,	// (0x0005d60d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1f4e,	// (0x0005d60d) list_medium_line_x3_t4_g4_g3

0x86f1,	// (0x00063db0) list_medium_line_x3_t4_g4_g4_ParamLimits

0x86f1,	// (0x00063db0) list_medium_line_x3_t4_g4_g4

0x0003,

0xfa19,	// (0x0006b0d8) list_medium_line_x3_t4_g4_g_ParamLimits

0xfa19,	// (0x0006b0d8) list_medium_line_x3_t4_g4_g

0x86fd,	// (0x00063dbc) list_medium_line_x3_t4_g4_t1_ParamLimits

0x86fd,	// (0x00063dbc) list_medium_line_x3_t4_g4_t1

0x8714,	// (0x00063dd3) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8714,	// (0x00063dd3) list_medium_line_x3_t4_g4_t2

0x8729,	// (0x00063de8) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8729,	// (0x00063de8) list_medium_line_x3_t4_g4_t3

0x873e,	// (0x00063dfd) list_medium_line_x3_t4_g4_t4_ParamLimits

0x873e,	// (0x00063dfd) list_medium_line_x3_t4_g4_t4

0x0003,

0xfa22,	// (0x0006b0e1) list_medium_line_x3_t4_g4_t_ParamLimits

0xfa22,	// (0x0006b0e1) list_medium_line_x3_t4_g4_t

0x875b,	// (0x00063e1a) list_single_dyc_row_text_pane_t1_ParamLimits

0x875b,	// (0x00063e1a) list_single_dyc_row_text_pane_t1

0x8792,	// (0x00063e51) list_single_dyc_row_text_pane_t2_ParamLimits

0x8792,	// (0x00063e51) list_single_dyc_row_text_pane_t2

0x9efa,	// (0x000655b9) list_single_dyc_row_text_pane_t3_ParamLimits

0x9efa,	// (0x000655b9) list_single_dyc_row_text_pane_t3

0x0005,

0xfa2b,	// (0x0006b0ea) list_single_dyc_row_text_pane_t_ParamLimits

0xfa2b,	// (0x0006b0ea) list_single_dyc_row_text_pane_t

0x9f1e,	// (0x000655dd) list_single_dyc_row_pane_g1_ParamLimits

0x9f1e,	// (0x000655dd) list_single_dyc_row_pane_g1

0x9f2a,	// (0x000655e9) list_single_dyc_row_pane_g2_ParamLimits

0x9f2a,	// (0x000655e9) list_single_dyc_row_pane_g2

0x9f36,	// (0x000655f5) list_single_dyc_row_pane_g3_ParamLimits

0x9f36,	// (0x000655f5) list_single_dyc_row_pane_g3

0x9f42,	// (0x00065601) list_single_dyc_row_pane_g4_ParamLimits

0x9f42,	// (0x00065601) list_single_dyc_row_pane_g4

0x0003,

0xfa38,	// (0x0006b0f7) list_single_dyc_row_pane_g_ParamLimits

0xfa38,	// (0x0006b0f7) list_single_dyc_row_pane_g

0x9f4e,	// (0x0006560d) list_single_dyc_row_text_pane_ParamLimits

0x9f4e,	// (0x0006560d) list_single_dyc_row_text_pane

0x9b52,	// (0x00065211) bg_sp_fs_scroll_pane

0xe835,	// (0x00069ef4) thumb_sp_fs_scroll_pane

0x6eba,	// (0x00062579) list_medium_line_g1_ParamLimits

0x6eba,	// (0x00062579) list_medium_line_g1

0x88b5,	// (0x00063f74) list_medium_line_t1_ParamLimits

0x88b5,	// (0x00063f74) list_medium_line_t1

0x1e9d,	// (0x0005d55c) list_medium_line_x2_g1_ParamLimits

0x1e9d,	// (0x0005d55c) list_medium_line_x2_g1

0x1ea9,	// (0x0005d568) list_medium_line_x2_g2_ParamLimits

0x1ea9,	// (0x0005d568) list_medium_line_x2_g2

0x0001,

0xfa41,	// (0x0006b100) list_medium_line_x2_g_ParamLimits

0xfa41,	// (0x0006b100) list_medium_line_x2_g

0x9f6d,	// (0x0006562c) list_medium_line_x2_t1_ParamLimits

0x9f6d,	// (0x0006562c) list_medium_line_x2_t1

0x1e9d,	// (0x0005d55c) list_medium_line_x3_g1_ParamLimits

0x1e9d,	// (0x0005d55c) list_medium_line_x3_g1

0x1ea9,	// (0x0005d568) list_medium_line_x3_g2_ParamLimits

0x1ea9,	// (0x0005d568) list_medium_line_x3_g2

0x0001,

0xfa41,	// (0x0006b100) list_medium_line_x3_g_ParamLimits

0xfa41,	// (0x0006b100) list_medium_line_x3_g

0x9f6d,	// (0x0006562c) list_medium_line_x3_t1_ParamLimits

0x9f6d,	// (0x0006562c) list_medium_line_x3_t1

0xe83e,	// (0x00069efd) thumb_sp_fs_scroll_pane_g1

0xe847,	// (0x00069f06) thumb_sp_fs_scroll_pane_g2

0xe850,	// (0x00069f0f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfa46,	// (0x0006b105) thumb_sp_fs_scroll_pane_g

0xe83e,	// (0x00069efd) bg_sp_fs_scroll_pane_g1

0xe847,	// (0x00069f06) bg_sp_fs_scroll_pane_g2

0xe850,	// (0x00069f0f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfa46,	// (0x0006b105) bg_sp_fs_scroll_pane_g

0x1e9d,	// (0x0005d55c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1e9d,	// (0x0005d55c) list_medium_line_x2_t3_g4_g1

0x1f42,	// (0x0005d601) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1f42,	// (0x0005d601) list_medium_line_x2_t3_g4_g2

0x1ea9,	// (0x0005d568) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1ea9,	// (0x0005d568) list_medium_line_x2_t3_g4_g3

0x1eb5,	// (0x0005d574) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1eb5,	// (0x0005d574) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0006a981) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0006a981) list_medium_line_x2_t3_g4_g

0x88ca,	// (0x00063f89) list_medium_line_x2_t3_g4_t1_ParamLimits

0x88ca,	// (0x00063f89) list_medium_line_x2_t3_g4_t1

0x88e0,	// (0x00063f9f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x88e0,	// (0x00063f9f) list_medium_line_x2_t3_g4_t2

0x1ee8,	// (0x0005d5a7) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1ee8,	// (0x0005d5a7) list_medium_line_x2_t3_g4_t3

0x0002,

0xfa4d,	// (0x0006b10c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfa4d,	// (0x0006b10c) list_medium_line_x2_t3_g4_t

0x6eba,	// (0x00062579) list_medium_line_g2_g1_ParamLimits

0x6eba,	// (0x00062579) list_medium_line_g2_g1

0x6ec6,	// (0x00062585) list_medium_line_g2_g2_ParamLimits

0x6ec6,	// (0x00062585) list_medium_line_g2_g2

0x0001,

0xf7e0,	// (0x0006ae9f) list_medium_line_g2_g_ParamLimits

0xf7e0,	// (0x0006ae9f) list_medium_line_g2_g

0x88fa,	// (0x00063fb9) list_medium_line_g2_t1_ParamLimits

0x88fa,	// (0x00063fb9) list_medium_line_g2_t1

0x6eba,	// (0x00062579) list_medium_line_t3_g2_g1_ParamLimits

0x6eba,	// (0x00062579) list_medium_line_t3_g2_g1

0x6ec6,	// (0x00062585) list_medium_line_t3_g2_g2_ParamLimits

0x6ec6,	// (0x00062585) list_medium_line_t3_g2_g2

0x0001,

0xf7e0,	// (0x0006ae9f) list_medium_line_t3_g2_g_ParamLimits

0xf7e0,	// (0x0006ae9f) list_medium_line_t3_g2_g

0x890f,	// (0x00063fce) list_medium_line_t3_g2_t1_ParamLimits

0x890f,	// (0x00063fce) list_medium_line_t3_g2_t1

0x8929,	// (0x00063fe8) list_medium_line_t3_g2_t2_ParamLimits

0x8929,	// (0x00063fe8) list_medium_line_t3_g2_t2

0x893f,	// (0x00063ffe) list_medium_line_t3_g2_t3_ParamLimits

0x893f,	// (0x00063ffe) list_medium_line_t3_g2_t3

0x0002,

0xfa54,	// (0x0006b113) list_medium_line_t3_g2_t_ParamLimits

0xfa54,	// (0x0006b113) list_medium_line_t3_g2_t

0x8556,	// (0x00063c15) list_medium_line_right_icon_g1

0x8955,	// (0x00064014) list_medium_line_right_icon_t1

0x6eba,	// (0x00062579) list_medium_line_t2_g1_ParamLimits

0x6eba,	// (0x00062579) list_medium_line_t2_g1

0x8963,	// (0x00064022) list_medium_line_t2_t1_ParamLimits

0x8963,	// (0x00064022) list_medium_line_t2_t1

0x897d,	// (0x0006403c) list_medium_line_t2_t2_ParamLimits

0x897d,	// (0x0006403c) list_medium_line_t2_t2

0x0001,

0xfa5b,	// (0x0006b11a) list_medium_line_t2_t_ParamLimits

0xfa5b,	// (0x0006b11a) list_medium_line_t2_t

0x6eba,	// (0x00062579) list_medium_line_t3_g1_ParamLimits

0x6eba,	// (0x00062579) list_medium_line_t3_g1

0x8992,	// (0x00064051) list_medium_line_t3_t1_ParamLimits

0x8992,	// (0x00064051) list_medium_line_t3_t1

0x89ac,	// (0x0006406b) list_medium_line_t3_t2_ParamLimits

0x89ac,	// (0x0006406b) list_medium_line_t3_t2

0x89c2,	// (0x00064081) list_medium_line_t3_t3_ParamLimits

0x89c2,	// (0x00064081) list_medium_line_t3_t3

0x0002,

0xfa60,	// (0x0006b11f) list_medium_line_t3_t_ParamLimits

0xfa60,	// (0x0006b11f) list_medium_line_t3_t

0x6eba,	// (0x00062579) list_medium_line_g3_g1_ParamLimits

0x6eba,	// (0x00062579) list_medium_line_g3_g1

0x89d7,	// (0x00064096) list_medium_line_g3_g2_ParamLimits

0x89d7,	// (0x00064096) list_medium_line_g3_g2

0x6ec6,	// (0x00062585) list_medium_line_g3_g3_ParamLimits

0x6ec6,	// (0x00062585) list_medium_line_g3_g3

0x0002,

0xfa67,	// (0x0006b126) list_medium_line_g3_g_ParamLimits

0xfa67,	// (0x0006b126) list_medium_line_g3_g

0x89e3,	// (0x000640a2) list_medium_line_g3_t1_ParamLimits

0x89e3,	// (0x000640a2) list_medium_line_g3_t1

0x6eba,	// (0x00062579) list_medium_line_t2_g3_g1_ParamLimits

0x6eba,	// (0x00062579) list_medium_line_t2_g3_g1

0x89d7,	// (0x00064096) list_medium_line_t2_g3_g2_ParamLimits

0x89d7,	// (0x00064096) list_medium_line_t2_g3_g2

0x6ec6,	// (0x00062585) list_medium_line_t2_g3_g3_ParamLimits

0x6ec6,	// (0x00062585) list_medium_line_t2_g3_g3

0x0002,

0xfa67,	// (0x0006b126) list_medium_line_t2_g3_g_ParamLimits

0xfa67,	// (0x0006b126) list_medium_line_t2_g3_g

0x89f8,	// (0x000640b7) list_medium_line_t2_g3_t1_ParamLimits

0x89f8,	// (0x000640b7) list_medium_line_t2_g3_t1

0x8a12,	// (0x000640d1) list_medium_line_t2_g3_t2_ParamLimits

0x8a12,	// (0x000640d1) list_medium_line_t2_g3_t2

0x0001,

0xfa6e,	// (0x0006b12d) list_medium_line_t2_g3_t_ParamLimits

0xfa6e,	// (0x0006b12d) list_medium_line_t2_g3_t

0x6eba,	// (0x00062579) list_medium_line_t3_g3_g1_ParamLimits

0x6eba,	// (0x00062579) list_medium_line_t3_g3_g1

0x89d7,	// (0x00064096) list_medium_line_t3_g3_g2_ParamLimits

0x89d7,	// (0x00064096) list_medium_line_t3_g3_g2

0x6ec6,	// (0x00062585) list_medium_line_t3_g3_g3_ParamLimits

0x6ec6,	// (0x00062585) list_medium_line_t3_g3_g3

0x0002,

0xfa67,	// (0x0006b126) list_medium_line_t3_g3_g_ParamLimits

0xfa67,	// (0x0006b126) list_medium_line_t3_g3_g

0x8a28,	// (0x000640e7) list_medium_line_t3_g3_t1_ParamLimits

0x8a28,	// (0x000640e7) list_medium_line_t3_g3_t1

0x8a41,	// (0x00064100) list_medium_line_t3_g3_t2_ParamLimits

0x8a41,	// (0x00064100) list_medium_line_t3_g3_t2

0x8a57,	// (0x00064116) list_medium_line_t3_g3_t3_ParamLimits

0x8a57,	// (0x00064116) list_medium_line_t3_g3_t3

0x0002,

0xfa73,	// (0x0006b132) list_medium_line_t3_g3_t_ParamLimits

0xfa73,	// (0x0006b132) list_medium_line_t3_g3_t

0x86c3,	// (0x00063d82) list_medium_line_right_iconx2_g1

0x8556,	// (0x00063c15) list_medium_line_right_iconx2_g2

0x0001,

0xfa7a,	// (0x0006b139) list_medium_line_right_iconx2_g

0x8a6d,	// (0x0006412c) list_medium_line_right_iconx2_t1

0x86c3,	// (0x00063d82) list_medium_line_t2_right_iconx2_g1

0x8556,	// (0x00063c15) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfa7a,	// (0x0006b139) list_medium_line_t2_right_iconx2_g

0x8a7b,	// (0x0006413a) list_medium_line_t2_right_iconx2_t1

0x8a8b,	// (0x0006414a) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfa7f,	// (0x0006b13e) list_medium_line_t2_right_iconx2_t

0x8a99,	// (0x00064158) list_medium_line_x4_t4_t1

0x8aa7,	// (0x00064166) list_medium_line_x4_t4_t2

0x8ab7,	// (0x00064176) list_medium_line_x4_t4_t3

0x8ac7,	// (0x00064186) list_medium_line_x4_t4_t4

0x0003,

0xfa84,	// (0x0006b143) list_medium_line_x4_t4_t

0x8b01,	// (0x000641c0) tport_appsw_pane_ParamLimits

0x8b01,	// (0x000641c0) tport_appsw_pane

0x8b0f,	// (0x000641ce) tport_contact_pane_ParamLimits

0x8b0f,	// (0x000641ce) tport_contact_pane

0x8b1f,	// (0x000641de) tport_listscroll_pane_ParamLimits

0x8b1f,	// (0x000641de) tport_listscroll_pane

0x8b2f,	// (0x000641ee) cell_tport_appsw_pane_ParamLimits

0x8b2f,	// (0x000641ee) cell_tport_appsw_pane

0xcf94,	// (0x00068653) tport_appsw_pane_g1_ParamLimits

0xcf94,	// (0x00068653) tport_appsw_pane_g1

0xe859,	// (0x00069f18) tport_contact_pane_g1

0xe862,	// (0x00069f21) tport_contact_pane_t1

0xe870,	// (0x00069f2f) tport_contact_pane_t2

0x0001,

0xfa8d,	// (0x0006b14c) tport_contact_pane_t

0xe87e,	// (0x00069f3d) list_tport_pane

0xe887,	// (0x00069f46) scroll_pane_cp_030

0x8b62,	// (0x00064221) cell_tport_appsw_pane_g1

0x8b72,	// (0x00064231) cell_tport_appsw_pane_t1

0x8b80,	// (0x0006423f) grid_highlight_pane_cp019

0x8b88,	// (0x00064247) list_tport_double_graphic_pane_ParamLimits

0x8b88,	// (0x00064247) list_tport_double_graphic_pane

0xa245,	// (0x00065904) list_highlight_pane_cp023_ParamLimits

0xa245,	// (0x00065904) list_highlight_pane_cp023

0x8b99,	// (0x00064258) list_tport_double_graphic_pane_g1_ParamLimits

0x8b99,	// (0x00064258) list_tport_double_graphic_pane_g1

0x8ba6,	// (0x00064265) list_tport_double_graphic_pane_t1_ParamLimits

0x8ba6,	// (0x00064265) list_tport_double_graphic_pane_t1

0x8bbb,	// (0x0006427a) list_tport_double_graphic_pane_t2_ParamLimits

0x8bbb,	// (0x0006427a) list_tport_double_graphic_pane_t2

0x0001,

0xfa99,	// (0x0006b158) list_tport_double_graphic_pane_t_ParamLimits

0xfa99,	// (0x0006b158) list_tport_double_graphic_pane_t

0x9b52,	// (0x00065211) main_cale_note_pane

0x664d,	// (0x00061d0c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x664d,	// (0x00061d0c) cell_vitu2_function_top_wide_pane_cp01

0x8158,	// (0x00063817) wait_bar_pane_cp05_ParamLimits

0xa245,	// (0x00065904) listscroll_cmail_pane

0xe890,	// (0x00069f4f) list_cmail_pane

0x8bcd,	// (0x0006428c) list_cmail_body_pane

0x8bf5,	// (0x000642b4) list_single_cmail_header_caption_pane

0x8c21,	// (0x000642e0) list_single_cmail_header_detail_pane_ParamLimits

0x8c21,	// (0x000642e0) list_single_cmail_header_detail_pane

0xe8a0,	// (0x00069f5f) list_single_cmail_header_caption_pane_t1

0x8c5a,	// (0x00064319) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c5a,	// (0x00064319) list_single_cmail_header_detail_pane_g1

0x9f8b,	// (0x0006564a) list_single_cmail_header_detail_pane_g2_ParamLimits

0x9f8b,	// (0x0006564a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfa9e,	// (0x0006b15d) list_single_cmail_header_detail_pane_g_ParamLimits

0xfa9e,	// (0x0006b15d) list_single_cmail_header_detail_pane_g

0x9f97,	// (0x00065656) list_single_cmail_header_detail_pane_t1_ParamLimits

0x9f97,	// (0x00065656) list_single_cmail_header_detail_pane_t1

0x9ff7,	// (0x000656b6) list_single_cmail_header_editor_pane_bg_ParamLimits

0x9ff7,	// (0x000656b6) list_single_cmail_header_editor_pane_bg

0xe372,	// (0x00069a31) list_cmail_body_pane_g1

0xe8c4,	// (0x00069f83) list_cmail_body_pane_t1

0xd72a,	// (0x00068de9) list_single_cmail_header_editor_pane_bg_g1

0xac9a,	// (0x00066359) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd73a,	// (0x00068df9) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd732,	// (0x00068df1) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd966,	// (0x00069025) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd75a,	// (0x00068e19) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd74a,	// (0x00068e09) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd752,	// (0x00068e11) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac7a,	// (0x00066339) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c70,	// (0x0006432f) calenote_gesture_pane_ParamLimits

0x8c70,	// (0x0006432f) calenote_gesture_pane

0x8c8a,	// (0x00064349) calenote_window_pane_ParamLimits

0x8c8a,	// (0x00064349) calenote_window_pane

0xe8d2,	// (0x00069f91) popup_note_window_cp01

0x8ca2,	// (0x00064361) calenote_swipe_1_pane_ParamLimits

0x8ca2,	// (0x00064361) calenote_swipe_1_pane

0x853c,	// (0x00063bfb) calenote_swipe_2_pane_ParamLimits

0x853c,	// (0x00063bfb) calenote_swipe_2_pane

0xe6df,	// (0x00069d9e) calenote_swipe_1_pane_g1_ParamLimits

0xe6df,	// (0x00069d9e) calenote_swipe_1_pane_g1

0xe6ec,	// (0x00069dab) calenote_swipe_1_pane_g2_ParamLimits

0xe6ec,	// (0x00069dab) calenote_swipe_1_pane_g2

0x0001,

0x0bc6,	// (0x0005c285) calenote_swipe_1_pane_g_ParamLimits

0x0bc6,	// (0x0005c285) calenote_swipe_1_pane_g

0xe8e4,	// (0x00069fa3) calenote_swipe_1_pane_t1_ParamLimits

0xe8e4,	// (0x00069fa3) calenote_swipe_1_pane_t1

0xe6df,	// (0x00069d9e) calenote_swipe_2_pane_g1_ParamLimits

0xe6df,	// (0x00069d9e) calenote_swipe_2_pane_g1

0xe903,	// (0x00069fc2) calenote_swipe_2_pane_g2_ParamLimits

0xe903,	// (0x00069fc2) calenote_swipe_2_pane_g2

0x0001,

0x0ca2,	// (0x0005c361) calenote_swipe_2_pane_g_ParamLimits

0x0ca2,	// (0x0005c361) calenote_swipe_2_pane_g

0xe90f,	// (0x00069fce) calenote_swipe_2_pane_t1_ParamLimits

0xe90f,	// (0x00069fce) calenote_swipe_2_pane_t1

0x9b52,	// (0x00065211) main_mup_navstr_pane

0x53a4,	// (0x00060a63) main_mup3_pane_t7_ParamLimits

0x53a4,	// (0x00060a63) main_mup3_pane_t7

0x5daf,	// (0x0006146e) main_mp4_pane_g6_ParamLimits

0x5daf,	// (0x0006146e) main_mp4_pane_g6

0x612f,	// (0x000617ee) main_image3_pane_t4_ParamLimits

0x612f,	// (0x000617ee) main_image3_pane_t4

0x8cb5,	// (0x00064374) popup_navstr_preview_pane_ParamLimits

0x8cb5,	// (0x00064374) popup_navstr_preview_pane

0x8cc1,	// (0x00064380) scroll_navstr_pane_ParamLimits

0x8cc1,	// (0x00064380) scroll_navstr_pane

0x9b52,	// (0x00065211) bg_popup_preview_window_pane_cp04

0xe936,	// (0x00069ff5) popup_navstr_preview_pane_t1

0x8ccd,	// (0x0006438c) scroll_navstr_pane_g1_ParamLimits

0x8ccd,	// (0x0006438c) scroll_navstr_pane_g1

0x8cda,	// (0x00064399) scroll_navstr_pane_t1_ParamLimits

0x8cda,	// (0x00064399) scroll_navstr_pane_t1

0xe8db,	// (0x00069f9a) bg_button_pane_cp014

0xe8db,	// (0x00069f9a) bg_button_pane_cp030

0x842b,	// (0x00063aea) list_double_fisheye_pane_g4_ParamLimits

0x842b,	// (0x00063aea) list_double_fisheye_pane_g4

0x8437,	// (0x00063af6) list_double_fisheye_pane_g5_ParamLimits

0x8437,	// (0x00063af6) list_double_fisheye_pane_g5

0xcd60,	// (0x0006841f) sp_fs_scroll_pane_cp03

0xe7d2,	// (0x00069e91) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7de,	// (0x00069e9d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0be3,	// (0x0005c2a2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7ea,	// (0x00069ea9) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe898,	// (0x00069f57) sp_fs_scroll_pane_cp02

0xa980,	// (0x0006603f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa980,	// (0x0006603f) popup_sp_fs_calendar_preview_list_single_pane

0x9b52,	// (0x00065211) main_cam6_pano_pane

0x43b3,	// (0x0005fa72) main_mup3_pane_ParamLimits

0x9b52,	// (0x00065211) main_phacti_pane

0x802d,	// (0x000636ec) bg_button_pane_cp11

0x8045,	// (0x00063704) main_mobtv_info_pane_g2_ParamLimits

0x8045,	// (0x00063704) main_mobtv_info_pane_g2

0x0001,

0xf991,	// (0x0006b050) main_mobtv_info_pane_g_ParamLimits

0xf991,	// (0x0006b050) main_mobtv_info_pane_g

0x81f7,	// (0x000638b6) sc_clock_pane_t5_ParamLimits

0x81f7,	// (0x000638b6) sc_clock_pane_t5

0x8298,	// (0x00063957) main_radioblah_pane_g1_ParamLimits

0xe610,	// (0x00069ccf) main_radioblah_pane_t3_ParamLimits

0xe610,	// (0x00069ccf) main_radioblah_pane_t3

0xe628,	// (0x00069ce7) main_radioblah_pane_t4_ParamLimits

0xe628,	// (0x00069ce7) main_radioblah_pane_t4

0x82b6,	// (0x00063975) main_radioblah_text_pane_ParamLimits

0x82b6,	// (0x00063975) main_radioblah_text_pane

0x82c3,	// (0x00063982) main_radioblah_info_pane_g1_ParamLimits

0x8358,	// (0x00063a17) main_radioblah_info_pane_t4_ParamLimits

0x8358,	// (0x00063a17) main_radioblah_info_pane_t4

0xa245,	// (0x00065904) main_sp_fs_calendar_pane

0x8cec,	// (0x000643ab) main_phacti_pane_g1

0x8cf4,	// (0x000643b3) phacti_note_pane_ParamLimits

0x8cf4,	// (0x000643b3) phacti_note_pane

0xe94d,	// (0x0006a00c) phacti_term_pane_ParamLimits

0xe94d,	// (0x0006a00c) phacti_term_pane

0xe962,	// (0x0006a021) phacti_note_pane_t1_ParamLimits

0xe962,	// (0x0006a021) phacti_note_pane_t1

0xa00e,	// (0x000656cd) phacti_term_pane_g1

0xa016,	// (0x000656d5) phacti_term_pane_t1_ParamLimits

0xa016,	// (0x000656d5) phacti_term_pane_t1

0xe979,	// (0x0006a038) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe981,	// (0x0006a040) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfaaf,	// (0x0006b16e) popup_sp_fs_calendar_preview_list_single_pane_g

0xe989,	// (0x0006a048) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe989,	// (0x0006a048) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe99f,	// (0x0006a05e) aid_popup_sp_fs_bg_corner_pane

0xccd5,	// (0x00068394) popup_sp_fs_calendar_preview_bg_pane_g1

0x9b52,	// (0x00065211) popup_sp_fs_calendar_preview_bg_pane

0x9f83,	// (0x00065642) popup_sp_fs_calendar_preview_list_pane

0xc8cd,	// (0x00067f8c) bg_main_sp_fs_cale_pane_ParamLimits

0xc8cd,	// (0x00067f8c) bg_main_sp_fs_cale_pane

0xa049,	// (0x00065708) listscroll_cale_mrui_pane_ParamLimits

0xa049,	// (0x00065708) listscroll_cale_mrui_pane

0xa05e,	// (0x0006571d) listscroll_sp_fs_schedule_track_pane

0xa067,	// (0x00065726) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa067,	// (0x00065726) main_sp_fs_ctrlbar_pane_cp01

0xe9a7,	// (0x0006a066) main_sp_fs_ribbon_pane

0xa07a,	// (0x00065739) popup_sp_fs_cale_preview_window

0x8d57,	// (0x00064416) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d57,	// (0x00064416) list_single_sp_fs_schedule_track_pane

0xe29d,	// (0x0006995c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe29d,	// (0x0006995c) bg_sp_fs_highlight_list_pane_cp03

0x8d7a,	// (0x00064439) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d7a,	// (0x00064439) list_single_sp_fs_schedule_track_pane_g1

0x8d86,	// (0x00064445) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d86,	// (0x00064445) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfab4,	// (0x0006b173) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfab4,	// (0x0006b173) list_single_sp_fs_schedule_track_pane_g

0x8d92,	// (0x00064451) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d92,	// (0x00064451) list_single_sp_fs_schedule_track_pane_t1

0x8daa,	// (0x00064469) sp_fs_schedule_track_pane_ParamLimits

0x8daa,	// (0x00064469) sp_fs_schedule_track_pane

0xe9af,	// (0x0006a06e) sp_fs_schedule_track_pane_g1

0xe9b7,	// (0x0006a076) sp_fs_schedule_track_pane_g2

0xe9bf,	// (0x0006a07e) sp_fs_schedule_track_pane_g3

0xe9c7,	// (0x0006a086) sp_fs_schedule_track_pane_g4

0xe9cf,	// (0x0006a08e) sp_fs_schedule_track_pane_g5

0x0004,

0xfab9,	// (0x0006b178) sp_fs_schedule_track_pane_g

0xd72a,	// (0x00068de9) bg_sp_fs_schedule_viewer_highlight_g1

0xac9a,	// (0x00066359) bg_sp_fs_schedule_viewer_highlight_g2

0xd732,	// (0x00068df1) bg_sp_fs_schedule_viewer_highlight_g3

0xd73a,	// (0x00068df9) bg_sp_fs_schedule_viewer_highlight_g4

0xd966,	// (0x00069025) bg_sp_fs_schedule_viewer_highlight_g5

0xd74a,	// (0x00068e09) bg_sp_fs_schedule_viewer_highlight_g6

0xd752,	// (0x00068e11) bg_sp_fs_schedule_viewer_highlight_g7

0xd75a,	// (0x00068e19) bg_sp_fs_schedule_viewer_highlight_g8

0xac7a,	// (0x00066339) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfac4,	// (0x0006b183) bg_sp_fs_schedule_viewer_highlight_g

0x9b52,	// (0x00065211) bg_main_sp_fs_ribbon_pane

0x8dba,	// (0x00064479) main_sp_fs_ribbon_pane_g1

0xe9d7,	// (0x0006a096) main_sp_fs_ribbon_pane_t1

0x8dc3,	// (0x00064482) main_sp_fs_ribbon_pane_t2

0xe9e6,	// (0x0006a0a5) main_sp_fs_ribbon_pane_t3

0x0002,

0xfad7,	// (0x0006b196) main_sp_fs_ribbon_pane_t

0xe9f5,	// (0x0006a0b4) main_sp_fs_ribbon_scheduler_pane

0xe9fd,	// (0x0006a0bc) bg_main_sp_fs_ribbon_pane_g1

0xea06,	// (0x0006a0c5) bg_main_sp_fs_ribbon_pane_g2

0xea0f,	// (0x0006a0ce) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfade,	// (0x0006b19d) bg_main_sp_fs_ribbon_pane_g

0xea17,	// (0x0006a0d6) main_sp_fs_ribbon_scheduler_pane_g1

0xea20,	// (0x0006a0df) main_sp_fs_ribbon_scheduler_pane_g2

0xea29,	// (0x0006a0e8) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfae5,	// (0x0006b1a4) main_sp_fs_ribbon_scheduler_pane_g

0xea32,	// (0x0006a0f1) list_cale_mrui_pane

0x8dd2,	// (0x00064491) sp_fs_scroll_pane_cp07_ParamLimits

0x8dd2,	// (0x00064491) sp_fs_scroll_pane_cp07

0x8dee,	// (0x000644ad) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8dee,	// (0x000644ad) bg_sp_fs_schedule_viewer_highlight

0xea3f,	// (0x0006a0fe) list_single_sp_fs_schedule_track_pane_cp01

0xea47,	// (0x0006a106) list_sp_fs_schedule_track_pane

0xea4f,	// (0x0006a10e) sp_fs_scroll_pane_cp06_ParamLimits

0xea4f,	// (0x0006a10e) sp_fs_scroll_pane_cp06

0xccd5,	// (0x00068394) bgmain_sp_fs_calendar_pane_g1

0x8dfb,	// (0x000644ba) list_single_cale_mrui_pane_ParamLimits

0x8dfb,	// (0x000644ba) list_single_cale_mrui_pane

0xa08c,	// (0x0006574b) list_single_cale_mrui_row_pane_ParamLimits

0xa08c,	// (0x0006574b) list_single_cale_mrui_row_pane

0xa099,	// (0x00065758) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa099,	// (0x00065758) list_single_cale_mrui_row_pane_g1

0xa0d1,	// (0x00065790) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa0d1,	// (0x00065790) list_single_cale_mrui_row_pane_t1

0x8e2c,	// (0x000644eb) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e2c,	// (0x000644eb) list_single_cale_mrui_row_pane_t2

0xa0e3,	// (0x000657a2) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa0e3,	// (0x000657a2) list_single_cale_mrui_row_pane_t3

0xa112,	// (0x000657d1) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa112,	// (0x000657d1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfaf3,	// (0x0006b1b2) list_single_cale_mrui_row_pane_t_ParamLimits

0xfaf3,	// (0x0006b1b2) list_single_cale_mrui_row_pane_t

0x8e92,	// (0x00064551) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e92,	// (0x00064551) list_single_cmail_header_editor_pane_bg_cp01

0x8eb2,	// (0x00064571) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8eb2,	// (0x00064571) list_single_cmail_header_editor_pane_bg_cp02

0x8ece,	// (0x0006458d) main_radioblah_text_pane_t1_ParamLimits

0x8ece,	// (0x0006458d) main_radioblah_text_pane_t1

0xea6e,	// (0x0006a12d) cam6_indi_pane_cp01

0xea76,	// (0x0006a135) cam6_mode_pane_cp01

0xea7e,	// (0x0006a13d) cam6_pano_pane

0xea87,	// (0x0006a146) cam6_zoom_pane_cp01

0xea8f,	// (0x0006a14e) cam6_pano_image_pane

0xea9a,	// (0x0006a159) cam6_pano_pane_g1

0xe372,	// (0x00069a31) cam6_pano_pane_g2

0xeaa3,	// (0x0006a162) cam6_pano_pane_g3

0xeaac,	// (0x0006a16b) cam6_pano_pane_g4

0xd28c,	// (0x0006894b) cam6_pano_pane_g5

0xeab5,	// (0x0006a174) cam6_pano_pane_g6

0xeabf,	// (0x0006a17e) cam6_pano_pane_g7

0xeac7,	// (0x0006a186) cam6_pano_pane_g8

0xead0,	// (0x0006a18f) cam6_pano_pane_g9

0x0008,

0x0cdb,	// (0x0005c39a) cam6_pano_pane_g

0x9b52,	// (0x00065211) main_browser_tag_pane

0xe92e,	// (0x00069fed) grid_navstr_albumart_pane

0xeadb,	// (0x0006a19a) cell_navstr_albumart_pane_ParamLimits

0xeadb,	// (0x0006a19a) cell_navstr_albumart_pane

0xeafb,	// (0x0006a1ba) cell_navstr_albumart_pane_g1

0xc69e,	// (0x00067d5d) cell_navstr_albumart_pane_g2

0xc6ae,	// (0x00067d6d) cell_navstr_albumart_pane_g3

0xc6a6,	// (0x00067d65) cell_navstr_albumart_pane_g4

0x0003,

0xfafc,	// (0x0006b1bb) cell_navstr_albumart_pane_g

0x8ee9,	// (0x000645a8) bt_list_pane_ParamLimits

0x8ee9,	// (0x000645a8) bt_list_pane

0x8f0a,	// (0x000645c9) bt_list_pane_t1

0x8f19,	// (0x000645d8) bt_list_pane_t2

0x0001,

0xfb05,	// (0x0006b1c4) bt_list_pane_t

0x9b52,	// (0x00065211) main_cale_prevew_pane

0x8f28,	// (0x000645e7) popup_cale_preview_window_ParamLimits

0x8f28,	// (0x000645e7) popup_cale_preview_window

0xa245,	// (0x00065904) bg_popup_preview_window_pane_cp05_ParamLimits

0xa245,	// (0x00065904) bg_popup_preview_window_pane_cp05

0xeb03,	// (0x0006a1c2) list_cale_preview_pane_ParamLimits

0xeb03,	// (0x0006a1c2) list_cale_preview_pane

0x8f41,	// (0x00064600) list_double_cale_preview_pane_ParamLimits

0x8f41,	// (0x00064600) list_double_cale_preview_pane

0x8f53,	// (0x00064612) list_single_cale_preview_pane_ParamLimits

0x8f53,	// (0x00064612) list_single_cale_preview_pane

0x8f67,	// (0x00064626) list_single_cale_preview_pane_g1

0x8f6f,	// (0x0006462e) list_single_cale_preview_pane_t1_ParamLimits

0x8f6f,	// (0x0006462e) list_single_cale_preview_pane_t1

0x8f84,	// (0x00064643) list_double_cale_preview_pane_g1

0x8f8c,	// (0x0006464b) list_double_cale_preview_pane_t1_ParamLimits

0x8f8c,	// (0x0006464b) list_double_cale_preview_pane_t1

0x8fa1,	// (0x00064660) list_double_cale_preview_pane_t2_ParamLimits

0x8fa1,	// (0x00064660) list_double_cale_preview_pane_t2

0x0001,

0xfb0a,	// (0x0006b1c9) list_double_cale_preview_pane_t_ParamLimits

0xfb0a,	// (0x0006b1c9) list_double_cale_preview_pane_t

0x9b52,	// (0x00065211) main_ezdial_pane

0xa245,	// (0x00065904) main_sp_fs_email_pane_ParamLimits

0x857c,	// (0x00063c3b) cmail_ddmenu_btn01_pane_ParamLimits

0x857c,	// (0x00063c3b) cmail_ddmenu_btn01_pane

0x8591,	// (0x00063c50) cmail_ddmenu_btn02_pane_ParamLimits

0x8591,	// (0x00063c50) cmail_ddmenu_btn02_pane

0x85a9,	// (0x00063c68) cmail_ddmenu_btn03_pane_ParamLimits

0x85a9,	// (0x00063c68) cmail_ddmenu_btn03_pane

0x85d1,	// (0x00063c90) main_sp_fs_ctrlbar_pane_ParamLimits

0x85e7,	// (0x00063ca6) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8bcd,	// (0x0006428c) list_cmail_body_pane_ParamLimits

0xe8ae,	// (0x00069f6d) bg_button_pane_cp12

0xe8b7,	// (0x00069f76) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8b7,	// (0x00069f76) list_single_cmail_header_detail_pane_g3

0x9fd3,	// (0x00065692) list_single_cmail_header_detail_pane_t2_ParamLimits

0x9fd3,	// (0x00065692) list_single_cmail_header_detail_pane_t2

0x0001,

0xfaa5,	// (0x0006b164) list_single_cmail_header_detail_pane_t_ParamLimits

0xfaa5,	// (0x0006b164) list_single_cmail_header_detail_pane_t

0xa02b,	// (0x000656ea) phacti_term_pane_t2_ParamLimits

0xa02b,	// (0x000656ea) phacti_term_pane_t2

0x0001,

0xfaaa,	// (0x0006b169) phacti_term_pane_t_ParamLimits

0xfaaa,	// (0x0006b169) phacti_term_pane_t

0xeb0f,	// (0x0006a1ce) aid_size_list_single_double

0x8fb9,	// (0x00064678) popup_ezdial_listscroll_window

0x8fdd,	// (0x0006469c) popup_number_entry_window_cp01

0xaa41,	// (0x00066100) bg_popup_call_pane_cp09

0xeb1b,	// (0x0006a1da) ezdial_list_pane

0xeb23,	// (0x0006a1e2) scroll_pane_cp23

0xcaba,	// (0x00068179) bg_button_pane_cp028_ParamLimits

0xcaba,	// (0x00068179) bg_button_pane_cp028

0x8feb,	// (0x000646aa) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8feb,	// (0x000646aa) cmail_ddmenu_btn01_pane_g1

0x8ffb,	// (0x000646ba) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8ffb,	// (0x000646ba) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfb0f,	// (0x0006b1ce) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfb0f,	// (0x0006b1ce) cmail_ddmenu_btn01_pane_g

0xeb2b,	// (0x0006a1ea) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb2b,	// (0x0006a1ea) cmail_ddmenu_btn01_pane_t1

0xc8cd,	// (0x00067f8c) bg_button_pane_cp029_ParamLimits

0xc8cd,	// (0x00067f8c) bg_button_pane_cp029

0x8ffb,	// (0x000646ba) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8ffb,	// (0x000646ba) cmail_ddmenu_btn02_pane_g1

0x9014,	// (0x000646d3) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9014,	// (0x000646d3) cmail_ddmenu_btn02_pane_t1

0xe29d,	// (0x0006995c) bg_button_pane_cp031_ParamLimits

0xe29d,	// (0x0006995c) bg_button_pane_cp031

0x8ffb,	// (0x000646ba) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8ffb,	// (0x000646ba) cmail_ddmenu_btn03_pane_g1

0x9014,	// (0x000646d3) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9014,	// (0x000646d3) cmail_ddmenu_btn03_pane_t1

0x5fcc,	// (0x0006168b) cell_dialer2_keypad_pane_t1_ParamLimits

0x5fe6,	// (0x000616a5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5fe6,	// (0x000616a5) cell_dialer2_keypad_pane_t1_copy1

0x7e6e,	// (0x0006352d) ncimui_group_button_pane

0xa245,	// (0x00065904) main_sp_fs_calendar_pane_ParamLimits

0x8bf5,	// (0x000642b4) list_single_cmail_header_caption_pane_ParamLimits

0xa040,	// (0x000656ff) aid_recal_txt_sm_pane

0x9b52,	// (0x00065211) mian_recal_day_pane

0xa07a,	// (0x00065739) popup_sp_fs_cale_preview_window_ParamLimits

0xeb40,	// (0x0006a1ff) list_recal_day_pane

0xa15c,	// (0x0006581b) list_single_recal_day_pane_ParamLimits

0xa15c,	// (0x0006581b) list_single_recal_day_pane

0xeb67,	// (0x0006a226) list_single_recal_day_pane_g1_ParamLimits

0xeb67,	// (0x0006a226) list_single_recal_day_pane_g1

0xa16e,	// (0x0006582d) list_single_recal_day_pane_g2_ParamLimits

0xa16e,	// (0x0006582d) list_single_recal_day_pane_g2

0xa17a,	// (0x00065839) list_single_recal_day_pane_g3_ParamLimits

0xa17a,	// (0x00065839) list_single_recal_day_pane_g3

0x9038,	// (0x000646f7) list_single_recal_day_pane_g4_ParamLimits

0x9038,	// (0x000646f7) list_single_recal_day_pane_g4

0xa186,	// (0x00065845) list_single_recal_day_pane_g5_ParamLimits

0xa186,	// (0x00065845) list_single_recal_day_pane_g5

0xa192,	// (0x00065851) list_single_recal_day_pane_g6_ParamLimits

0xa192,	// (0x00065851) list_single_recal_day_pane_g6

0x0004,

0xfb1e,	// (0x0006b1dd) list_single_recal_day_pane_g_ParamLimits

0xfb1e,	// (0x0006b1dd) list_single_recal_day_pane_g

0xa1a6,	// (0x00065865) list_single_recal_day_pane_t1

0xa1b8,	// (0x00065877) list_single_recal_day_pane_t2

0x0001,

0xfb29,	// (0x0006b1e8) list_single_recal_day_pane_t

0x9050,	// (0x0006470f) ncimui_query_button_pane_ParamLimits

0x9050,	// (0x0006470f) ncimui_query_button_pane

0x9060,	// (0x0006471f) ncimui_query_button_pane_t1_ParamLimits

0x9060,	// (0x0006471f) ncimui_query_button_pane_t1

0xeb73,	// (0x0006a232) ncimui_query_button_pane_t2_ParamLimits

0xeb73,	// (0x0006a232) ncimui_query_button_pane_t2

0x0001,

0xfb2e,	// (0x0006b1ed) ncimui_query_button_pane_t_ParamLimits

0xfb2e,	// (0x0006b1ed) ncimui_query_button_pane_t

0x9073,	// (0x00064732) query_button_pane_ParamLimits

0x9073,	// (0x00064732) query_button_pane

0x9b52,	// (0x00065211) bg_button_pane_cp0028

0xeb86,	// (0x0006a245) query_button_pane_t1

0x43cf,	// (0x0005fa8e) main_tport_pane_ParamLimits

0x8ad7,	// (0x00064196) bg_popup_window_pane_cp01_ParamLimits

0x8ad7,	// (0x00064196) bg_popup_window_pane_cp01

0x8ae5,	// (0x000641a4) heading_pane_cp08_ParamLimits

0x8ae5,	// (0x000641a4) heading_pane_cp08

0x8af3,	// (0x000641b2) heading_pane_cp07_ParamLimits

0x8af3,	// (0x000641b2) heading_pane_cp07

0x8b62,	// (0x00064221) cell_tport_appsw_pane_g2

0x0002,

0xfa92,	// (0x0006b151) cell_tport_appsw_pane_g

0x9c65,	// (0x00065324) input_candi_list_open_g1

0xae5d,	// (0x0006651c) list_cale_time_pane_g6_ParamLimits

0xae5d,	// (0x0006651c) list_cale_time_pane_g6

0x4e4e,	// (0x0006050d) aid_size_touch_calib_1_ParamLimits

0x4e4e,	// (0x0006050d) aid_size_touch_calib_1

0x4e5a,	// (0x00060519) aid_size_touch_calib_2_ParamLimits

0x4e5a,	// (0x00060519) aid_size_touch_calib_2

0x4e68,	// (0x00060527) aid_size_touch_calib_3_ParamLimits

0x4e68,	// (0x00060527) aid_size_touch_calib_3

0x4e78,	// (0x00060537) aid_size_touch_calib_4_ParamLimits

0x4e78,	// (0x00060537) aid_size_touch_calib_4

0x4e86,	// (0x00060545) main_touch_calib_button_group_pane_ParamLimits

0x4e86,	// (0x00060545) main_touch_calib_button_group_pane

0x4e94,	// (0x00060553) main_touch_calib_pane_g1_ParamLimits

0x4ea0,	// (0x0006055f) main_touch_calib_pane_g2_ParamLimits

0x4eac,	// (0x0006056b) main_touch_calib_pane_g3_ParamLimits

0x4eb8,	// (0x00060577) main_touch_calib_pane_g4_ParamLimits

0xf5be,	// (0x0006ac7d) main_touch_calib_pane_g_ParamLimits

0x4ec4,	// (0x00060583) main_touch_calib_pane_t1_ParamLimits

0x4edd,	// (0x0006059c) main_touch_calib_pane_t2_ParamLimits

0x4ef6,	// (0x000605b5) main_touch_calib_pane_t3_ParamLimits

0x4f0c,	// (0x000605cb) main_touch_calib_pane_t4_ParamLimits

0x4f22,	// (0x000605e1) main_touch_calib_pane_t5_ParamLimits

0xf5c7,	// (0x0006ac86) main_touch_calib_pane_t_ParamLimits

0xd02f,	// (0x000686ee) list_single_fp_cale_pane_g3_ParamLimits

0xd02f,	// (0x000686ee) list_single_fp_cale_pane_g3

0x43b3,	// (0x0005fa72) bg_button_pane_cp012_ParamLimits

0x43b3,	// (0x0005fa72) bg_vkb2_func_pane_cp03_ParamLimits

0x6e3a,	// (0x000624f9) cell_vitu2_function_top_pane_g1_ParamLimits

0x43b3,	// (0x0005fa72) bg_vkb2_func_pane_cp04_ParamLimits

0x7df6,	// (0x000634b5) main_ncimui_button_group_pane_ParamLimits

0x7df6,	// (0x000634b5) main_ncimui_button_group_pane

0x7e5c,	// (0x0006351b) main_ncimui_pane_t3_ParamLimits

0x7e5c,	// (0x0006351b) main_ncimui_pane_t3

0xe944,	// (0x0006a003) phacti_button_group_pane

0xeb0f,	// (0x0006a1ce) aid_size_list_single_double_ParamLimits

0x8fb9,	// (0x00064678) popup_ezdial_listscroll_window_ParamLimits

0x8fdd,	// (0x0006469c) popup_number_entry_window_cp01_ParamLimits

0x9080,	// (0x0006473f) phacti_button_pane_ParamLimits

0x9080,	// (0x0006473f) phacti_button_pane

0x9b52,	// (0x00065211) bg_button_pane_cp14

0xeb94,	// (0x0006a253) phacti_button_pane_t1

0x9091,	// (0x00064750) main_touch_calib_button_pane_ParamLimits

0x9091,	// (0x00064750) main_touch_calib_button_pane

0xa84c,	// (0x00065f0b) bg_button_pane_cp18_ParamLimits

0xa84c,	// (0x00065f0b) bg_button_pane_cp18

0xeba2,	// (0x0006a261) main_touch_calib_button_pane_t1_ParamLimits

0xeba2,	// (0x0006a261) main_touch_calib_button_pane_t1

0xebb8,	// (0x0006a277) main_touch_calib_button_pane_t2_ParamLimits

0xebb8,	// (0x0006a277) main_touch_calib_button_pane_t2

0x0001,

0xfb33,	// (0x0006b1f2) main_touch_calib_button_pane_t_ParamLimits

0xfb33,	// (0x0006b1f2) main_touch_calib_button_pane_t

0x9b52,	// (0x00065211) cell_ncimui_button_pane

0x9b52,	// (0x00065211) bg_button_pane_cp032

0xebd6,	// (0x0006a295) cell_ncimui_button_pane_t1

0x6042,	// (0x00061701) image3_infobar_pane_ParamLimits

0x6042,	// (0x00061701) image3_infobar_pane

0x8219,	// (0x000638d8) fs_bigclock_status_pane_ParamLimits

0x8219,	// (0x000638d8) fs_bigclock_status_pane

0x8226,	// (0x000638e5) main_fs_bigclock_clock_pane_ParamLimits

0x8226,	// (0x000638e5) main_fs_bigclock_clock_pane

0x823a,	// (0x000638f9) main_fs_bigclock_indi_pane_ParamLimits

0x823a,	// (0x000638f9) main_fs_bigclock_indi_pane

0x8262,	// (0x00063921) main_fs_bigclock_swipe_pane_ParamLimits

0x8262,	// (0x00063921) main_fs_bigclock_swipe_pane

0x9b52,	// (0x00065211) main_fs_clock_dumped_data

0xe47f,	// (0x00069b3e) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe47f,	// (0x00069b3e) list_single_fs_bigclock_indicator_pane_g1

0xe49b,	// (0x00069b5a) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe49b,	// (0x00069b5a) list_single_fs_bigclock_indicator_pane_g2

0xe4b5,	// (0x00069b74) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe4b5,	// (0x00069b74) list_single_fs_bigclock_indicator_pane_g3

0xe4cf,	// (0x00069b8e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4cf,	// (0x00069b8e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0b77,	// (0x0005c236) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0b77,	// (0x0005c236) list_single_fs_bigclock_indicator_pane_g

0xe4fa,	// (0x00069bb9) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4fa,	// (0x00069bb9) list_single_fs_bigclock_indicator_pane_t1

0xe522,	// (0x00069be1) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe522,	// (0x00069be1) list_single_fs_bigclock_indicator_pane_t2

0xe54a,	// (0x00069c09) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe54a,	// (0x00069c09) list_single_fs_bigclock_indicator_pane_t3

0xe572,	// (0x00069c31) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe572,	// (0x00069c31) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0b82,	// (0x0005c241) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0b82,	// (0x0005c241) list_single_fs_bigclock_indicator_pane_t

0xebe4,	// (0x0006a2a3) image3_infobar_fav_pane_ParamLimits

0xebe4,	// (0x0006a2a3) image3_infobar_fav_pane

0xebf4,	// (0x0006a2b3) image3_infobar_loc_pane_ParamLimits

0xebf4,	// (0x0006a2b3) image3_infobar_loc_pane

0xec08,	// (0x0006a2c7) image3_infobar_time_pane_ParamLimits

0xec08,	// (0x0006a2c7) image3_infobar_time_pane

0xccd5,	// (0x00068394) image3_infobar_time_pane_g1

0xec18,	// (0x0006a2d7) image3_infobar_time_pane_t1

0xccd5,	// (0x00068394) image3_infobar_loc_pane_g1

0xec26,	// (0x0006a2e5) image3_infobar_loc_pane_g2

0x0001,

0xfb38,	// (0x0006b1f7) image3_infobar_loc_pane_g

0xec2e,	// (0x0006a2ed) image3_infobar_loc_pane_t1

0xccd5,	// (0x00068394) image3_infobar_fav_pane_g1

0xec3c,	// (0x0006a2fb) image3_infobar_fav_pane_g2

0x0001,

0xfb3d,	// (0x0006b1fc) image3_infobar_fav_pane_g

0xec44,	// (0x0006a303) fs_bigclock_status_battery_pane

0xec4d,	// (0x0006a30c) fs_bigclock_status_signal_pane

0xec56,	// (0x0006a315) fs_bigclock_status_title_pane

0xec5f,	// (0x0006a31e) fs_bigclock_status_signal_pane_g1

0xec68,	// (0x0006a327) fs_bigclock_status_signal_pane_g2

0x0001,

0xfb42,	// (0x0006b201) fs_bigclock_status_signal_pane_g

0xec70,	// (0x0006a32f) fs_bigclock_status_battery_pane_g1

0xec79,	// (0x0006a338) fs_bigclock_status_battery_pane_g2

0x0001,

0xfb47,	// (0x0006b206) fs_bigclock_status_battery_pane_g

0xec81,	// (0x0006a340) fs_bigclock_status_title_pane_t1

0x90a1,	// (0x00064760) main_fs_bigclock_clock_pane_g1

0x90a1,	// (0x00064760) main_fs_bigclock_clock_pane_g2

0x90ae,	// (0x0006476d) main_fs_bigclock_clock_pane_g3

0x90ae,	// (0x0006476d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfb4c,	// (0x0006b20b) main_fs_bigclock_clock_pane_g

0x90ba,	// (0x00064779) main_fs_bigclock_clock_pane_t1

0x90cd,	// (0x0006478c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfb55,	// (0x0006b214) main_fs_bigclock_clock_pane_t

0xec8f,	// (0x0006a34e) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec8f,	// (0x0006a34e) list_single_fs_bigclock_indicator_pane

0xeca0,	// (0x0006a35f) list_single_fs_bigclock_pane_ParamLimits

0xeca0,	// (0x0006a35f) list_single_fs_bigclock_pane

0xecc6,	// (0x0006a385) main_fs_bigclock_indicator_pane_t1

0xecd5,	// (0x0006a394) list_single_fs_bigclock_pane_g1

0xecdd,	// (0x0006a39c) list_single_fs_bigclock_pane_t1

0xccd5,	// (0x00068394) main_fs_bigclock_swipe_pane_g1

0xed20,	// (0x0006a3df) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfb66,	// (0x0006b225) main_fs_bigclock_swipe_pane_g

0xed28,	// (0x0006a3e7) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed28,	// (0x0006a3e7) main_fs_bigclock_swipe_pane_t1

0x33c2,	// (0x0005ea81) call_type_pane_ParamLimits

0x9b52,	// (0x00065211) main_btmg_pane

0xa0c5,	// (0x00065784) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa0c5,	// (0x00065784) list_single_cale_mrui_row_pane_g2

0x0002,

0xfaec,	// (0x0006b1ab) list_single_cale_mrui_row_pane_g_ParamLimits

0xfaec,	// (0x0006b1ab) list_single_cale_mrui_row_pane_g

0xa14b,	// (0x0006580a) list_recal_vselct_arw_lo_pane

0xeb5f,	// (0x0006a21e) list_recal_vselct_arw_up_pane

0xa153,	// (0x00065812) list_recal_vselct_pane

0x9124,	// (0x000647e3) btmg_button_pane

0x9130,	// (0x000647ef) main_btmg_pane_g1

0x9b52,	// (0x00065211) bg_button_pane_cp044

0xed45,	// (0x0006a404) btmg_button_pane_t1

0xc8b9,	// (0x00067f78) aid_listscroll_gen

0xa245,	// (0x00065904) main_cntbar_detail_pane

0xe890,	// (0x00069f4f) list_cmail_folder_pane

0xcd60,	// (0x0006841f) sp_fs_scroll_pane_cp03_ParamLimits

0x9138,	// (0x000647f7) list_single_fs_dyc_pane_cp01_ParamLimits

0x9138,	// (0x000647f7) list_single_fs_dyc_pane_cp01

0xed53,	// (0x0006a412) aid_size_cmail_indent

0xa1ca,	// (0x00065889) list_single_dyc_row_pane_cp01

0x9187,	// (0x00064846) cntbar_detail_list_pane_ParamLimits

0x9187,	// (0x00064846) cntbar_detail_list_pane

0x91c1,	// (0x00064880) main_cntbar_detail_cont_pane_ParamLimits

0x91c1,	// (0x00064880) main_cntbar_detail_cont_pane

0x32e5,	// (0x0005e9a4) scroll_pane_cp032_ParamLimits

0x32e5,	// (0x0005e9a4) scroll_pane_cp032

0x91cd,	// (0x0006488c) cntbar_detail_list_event_pane_ParamLimits

0x91cd,	// (0x0006488c) cntbar_detail_list_event_pane

0x9193,	// (0x00064852) cntbar_detail_list_shct_pane

0xace8,	// (0x000663a7) aid_list_gen

0xed5c,	// (0x0006a41b) aid_scroll

0xed65,	// (0x0006a424) aid_size_touch_scroll_bar

0x7592,	// (0x00062c51) aid_list_double

0xa1d3,	// (0x00065892) aid_list_single

0x7580,	// (0x00062c3f) aid_list_single_lg

0xa1dc,	// (0x0006589b) aid_list_z_g_a_sm

0xa1e4,	// (0x000658a3) aid_list_z_g_d

0xa1ec,	// (0x000658ab) aid_txt_z_prm

0x91e1,	// (0x000648a0) aid_txt_z_prm_cp01

0x91ef,	// (0x000648ae) aid_txt_z_sec

0x91fd,	// (0x000648bc) main_cntbar_detail_cont_pane_g1_ParamLimits

0x91fd,	// (0x000648bc) main_cntbar_detail_cont_pane_g1

0x920a,	// (0x000648c9) main_cntbar_detail_cont_pane_g2_ParamLimits

0x920a,	// (0x000648c9) main_cntbar_detail_cont_pane_g2

0x0001,

0xfb6b,	// (0x0006b22a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfb6b,	// (0x0006b22a) main_cntbar_detail_cont_pane_g

0xed6e,	// (0x0006a42d) main_cntbar_detail_cont_pane_t1

0xed7c,	// (0x0006a43b) main_cntbar_detail_cont_pane_t2

0xed8a,	// (0x0006a449) main_cntbar_detail_cont_pane_t3

0x0002,

0xfb70,	// (0x0006b22f) main_cntbar_detail_cont_pane_t

0x9216,	// (0x000648d5) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9216,	// (0x000648d5) cell_cntbar_detail_list_shct_pane

0xed98,	// (0x0006a457) cntbar_detail_list_shct_pane_g1

0xeda1,	// (0x0006a460) cntbar_detail_list_shct_pane_g2

0x0001,

0xfb77,	// (0x0006b236) cntbar_detail_list_shct_pane_g

0x922a,	// (0x000648e9) cntbar_detail_list_event_pane_g1_ParamLimits

0x922a,	// (0x000648e9) cntbar_detail_list_event_pane_g1

0x9236,	// (0x000648f5) cntbar_detail_list_event_pane_g2_ParamLimits

0x9236,	// (0x000648f5) cntbar_detail_list_event_pane_g2

0x0005,

0xfb7c,	// (0x0006b23b) cntbar_detail_list_event_pane_g_ParamLimits

0xfb7c,	// (0x0006b23b) cntbar_detail_list_event_pane_g

0x92a2,	// (0x00064961) cntbar_detail_list_event_pane_t1_ParamLimits

0x92a2,	// (0x00064961) cntbar_detail_list_event_pane_t1

0x92b7,	// (0x00064976) cntbar_detail_list_event_pane_t2_ParamLimits

0x92b7,	// (0x00064976) cntbar_detail_list_event_pane_t2

0x0002,

0xfb89,	// (0x0006b248) cntbar_detail_list_event_pane_t_ParamLimits

0xfb89,	// (0x0006b248) cntbar_detail_list_event_pane_t

0xccd5,	// (0x00068394) cell_cntbar_detail_list_shct_pane_g1

0xb434,	// (0x00066af3) navi_pane_mv_g3

0xa245,	// (0x00065904) main_cntbar_detail_pane_ParamLimits

0x9b52,	// (0x00065211) main_notif_wgt_pane

0x5cf6,	// (0x000613b5) aid_tch_main_mp4_pane_g4

0x5f2b,	// (0x000615ea) popup_slider_window_cp02

0xa141,	// (0x00065800) list_recal_day_event_pane

0x9167,	// (0x00064826) cntbar_detail_btn_pane_ParamLimits

0x9167,	// (0x00064826) cntbar_detail_btn_pane

0x9177,	// (0x00064836) cntbar_detail_btn_pane_cp01_ParamLimits

0x9177,	// (0x00064836) cntbar_detail_btn_pane_cp01

0x9193,	// (0x00064852) cntbar_detail_list_shct_pane_ParamLimits

0x919f,	// (0x0006485e) cntbar_detail_pane_g1_ParamLimits

0x919f,	// (0x0006485e) cntbar_detail_pane_g1

0x91ab,	// (0x0006486a) cntbar_detail_pane_t1_ParamLimits

0x91ab,	// (0x0006486a) cntbar_detail_pane_t1

0x9242,	// (0x00064901) cntbar_detail_list_event_pane_g3_ParamLimits

0x9242,	// (0x00064901) cntbar_detail_list_event_pane_g3

0x925a,	// (0x00064919) cntbar_detail_list_event_pane_g4_ParamLimits

0x925a,	// (0x00064919) cntbar_detail_list_event_pane_g4

0x9272,	// (0x00064931) cntbar_detail_list_event_pane_g5_ParamLimits

0x9272,	// (0x00064931) cntbar_detail_list_event_pane_g5

0x928a,	// (0x00064949) cntbar_detail_list_event_pane_g6_ParamLimits

0x928a,	// (0x00064949) cntbar_detail_list_event_pane_g6

0x92cc,	// (0x0006498b) cntbar_detail_list_event_pane_t3_ParamLimits

0x92cc,	// (0x0006498b) cntbar_detail_list_event_pane_t3

0x92de,	// (0x0006499d) popup_notif_wgt_window_ParamLimits

0x92de,	// (0x0006499d) popup_notif_wgt_window

0x92ee,	// (0x000649ad) popup_submenu_window_cp01_ParamLimits

0x92ee,	// (0x000649ad) popup_submenu_window_cp01

0xaa41,	// (0x00066100) bg_popup_window_pane_cp10

0xedaa,	// (0x0006a469) listscroll_notif_wgt_pane

0xedbc,	// (0x0006a47b) list_notif_wgt_window

0xedc5,	// (0x0006a484) scroll_pane_cp033

0x92fc,	// (0x000649bb) list_notif_wgt_row_pane_ParamLimits

0x92fc,	// (0x000649bb) list_notif_wgt_row_pane

0xedce,	// (0x0006a48d) aid_size_list_notif_wgt_del

0xeddb,	// (0x0006a49a) list_notif_wgt_row_pane_g1

0xede7,	// (0x0006a4a6) list_notif_wgt_row_pane_g2

0xedf6,	// (0x0006a4b5) list_notif_wgt_row_pane_g3

0x0002,

0xfb90,	// (0x0006b24f) list_notif_wgt_row_pane_g

0xee03,	// (0x0006a4c2) list_notif_wgt_row_pane_t1

0xee19,	// (0x0006a4d8) list_notif_wgt_row_pane_t2

0xee2b,	// (0x0006a4ea) list_notif_wgt_row_pane_t3

0x0002,

0xfb97,	// (0x0006b256) list_notif_wgt_row_pane_t

0xd992,	// (0x00069051) list_recal_day_event_pane_g1

0xee3d,	// (0x0006a4fc) list_recal_day_event_pane_t1

0x9b52,	// (0x00065211) bg_button_pane_cp045

0x930e,	// (0x000649cd) cntbar_detail_btn_pane_t1

0xc8cd,	// (0x00067f8c) main_callh_pane_ParamLimits

0xc8cd,	// (0x00067f8c) main_callh_pane

0x9b52,	// (0x00065211) main_coverflow0_pane

0x9b52,	// (0x00065211) main_wgtman_pane

0x827a,	// (0x00063939) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x827a,	// (0x00063939) main_fs_bigclock_unlock_btn_pane

0x8b5a,	// (0x00064219) bg_button_pane_cp16

0x8b6a,	// (0x00064229) cell_tport_appsw_pane_g3

0x931c,	// (0x000649db) cf0_flow_pane_ParamLimits

0x931c,	// (0x000649db) cf0_flow_pane

0xee4c,	// (0x0006a50b) listscroll_cf0_pane

0xee57,	// (0x0006a516) main_cf0_pane_g1

0x932b,	// (0x000649ea) main_cf0_pane_t1_ParamLimits

0x932b,	// (0x000649ea) main_cf0_pane_t1

0x933f,	// (0x000649fe) main_cf0_pane_t2_ParamLimits

0x933f,	// (0x000649fe) main_cf0_pane_t2

0x0001,

0xfba3,	// (0x0006b262) main_cf0_pane_t_ParamLimits

0xfba3,	// (0x0006b262) main_cf0_pane_t

0xee69,	// (0x0006a528) scroll_pane_cp11

0x9353,	// (0x00064a12) cf0_flow_pane_g1

0x935b,	// (0x00064a1a) cf0_flow_pane_g2

0x0001,

0xfba8,	// (0x0006b267) cf0_flow_pane_g

0x9363,	// (0x00064a22) cf0_flow_pane_t1

0x9b52,	// (0x00065211) main_call6_pane

0x9b52,	// (0x00065211) main_calllock_pane

0x9371,	// (0x00064a30) call6_btn_grp_pane_ParamLimits

0x9371,	// (0x00064a30) call6_btn_grp_pane

0x9380,	// (0x00064a3f) call6_pane_g1_ParamLimits

0x9380,	// (0x00064a3f) call6_pane_g1

0x938f,	// (0x00064a4e) popup_call6_1st_window_ParamLimits

0x938f,	// (0x00064a4e) popup_call6_1st_window

0x939d,	// (0x00064a5c) popup_call6_2nd_window_ParamLimits

0x939d,	// (0x00064a5c) popup_call6_2nd_window

0x93ab,	// (0x00064a6a) cell_call6_btn_pane_ParamLimits

0x93ab,	// (0x00064a6a) cell_call6_btn_pane

0xaa41,	// (0x00066100) bg_popup_call2_in_pane_cp03

0xee74,	// (0x0006a533) popup_call6_1st_window_g1

0xee7c,	// (0x0006a53b) popup_call6_1st_window_g2

0xee84,	// (0x0006a543) popup_call6_1st_window_g3

0x0002,

0xfbad,	// (0x0006b26c) popup_call6_1st_window_g

0xee8c,	// (0x0006a54b) popup_call6_1st_window_t1

0xee9b,	// (0x0006a55a) popup_call6_1st_window_t2

0xeeab,	// (0x0006a56a) popup_call6_1st_window_t3

0x0002,

0xfbb4,	// (0x0006b273) popup_call6_1st_window_t

0xaa41,	// (0x00066100) bg_popup_call2_in_pane_cp04

0xee74,	// (0x0006a533) popup_call6_2nd_window_g1

0xee7c,	// (0x0006a53b) popup_call6_2nd_window_g2

0xee84,	// (0x0006a543) popup_call6_2nd_window_g3

0x0002,

0xfbad,	// (0x0006b26c) popup_call6_2nd_window_g

0xee8c,	// (0x0006a54b) popup_call6_2nd_window_t1

0x9b52,	// (0x00065211) bg_button_pane_cp15

0xeebb,	// (0x0006a57a) cell_call6_btn_pane_g1

0xeec4,	// (0x0006a583) cell_call6_btn_pane_t1

0x93ba,	// (0x00064a79) listscroll_wgtman_pane_ParamLimits

0x93ba,	// (0x00064a79) listscroll_wgtman_pane

0x93d6,	// (0x00064a95) wgtman_btn_pane_ParamLimits

0x93d6,	// (0x00064a95) wgtman_btn_pane

0xb248,	// (0x00066907) aid_scroll_copy1

0xeed3,	// (0x0006a592) list_wgtman_pane

0x940b,	// (0x00064aca) wgtman_btn_pane_g1_ParamLimits

0x940b,	// (0x00064aca) wgtman_btn_pane_g1

0x9433,	// (0x00064af2) wgtman_btn_pane_t1_ParamLimits

0x9433,	// (0x00064af2) wgtman_btn_pane_t1

0xeedd,	// (0x0006a59c) wgtman_btn_pane_t2_ParamLimits

0xeedd,	// (0x0006a59c) wgtman_btn_pane_t2

0x0001,

0xfbbb,	// (0x0006b27a) wgtman_btn_pane_t_ParamLimits

0xfbbb,	// (0x0006b27a) wgtman_btn_pane_t

0x946a,	// (0x00064b29) listrow_wgtman_pane_ParamLimits

0x946a,	// (0x00064b29) listrow_wgtman_pane

0x9486,	// (0x00064b45) listrow_wgtman_pane_g1

0x9493,	// (0x00064b52) listrow_wgtman_pane_g2

0x0001,

0xfbc0,	// (0x0006b27f) listrow_wgtman_pane_g

0x94b1,	// (0x00064b70) listrow_wgtman_pane_t1

0x94c9,	// (0x00064b88) listrow_wgtman_pane_t2

0x0001,

0xfbc5,	// (0x0006b284) listrow_wgtman_pane_t

0x94ef,	// (0x00064bae) wait_bar_pane_cp09

0xeef4,	// (0x0006a5b3) main_calllock_btn_pane

0xeefe,	// (0x0006a5bd) main_calllock_pane_g1

0x9b52,	// (0x00065211) bg_button_pane_cp17

0xef09,	// (0x0006a5c8) main_calllock_btn_pane_g1

0xef12,	// (0x0006a5d1) main_calllock_btn_pane_t1

0x9b52,	// (0x00065211) main_dialer3_pane

0x9b52,	// (0x00065211) main_fmrd2_pane

0xccd5,	// (0x00068394) main_fs_bigclock_unlock_btn_pane_g1

0x9509,	// (0x00064bc8) main_fs_bigclock_unlock_btn_pane_t1

0x9517,	// (0x00064bd6) area_fmrd2_info_pane_ParamLimits

0x9517,	// (0x00064bd6) area_fmrd2_info_pane

0x9525,	// (0x00064be4) area_fmrd2_visual_pane_ParamLimits

0x9525,	// (0x00064be4) area_fmrd2_visual_pane

0x9533,	// (0x00064bf2) fmrd2_indi_pane_ParamLimits

0x9533,	// (0x00064bf2) fmrd2_indi_pane

0x9540,	// (0x00064bff) area_fmrd2_visual_pane_g1

0x9548,	// (0x00064c07) area_fmrd2_visual_pane_t1

0x9558,	// (0x00064c17) area_fmrd2_visual_pane_t2

0x9568,	// (0x00064c27) area_fmrd2_visual_pane_t3

0x0002,

0xfbcf,	// (0x0006b28e) area_fmrd2_visual_pane_t

0x9578,	// (0x00064c37) area_fmrd2_info_pane_g1

0x9580,	// (0x00064c3f) area_fmrd2_info_pane_t1

0x9590,	// (0x00064c4f) area_fmrd2_info_pane_t2

0x95a0,	// (0x00064c5f) area_fmrd2_info_pane_t3

0x95b0,	// (0x00064c6f) area_fmrd2_info_pane_t4

0x0003,

0xfbd6,	// (0x0006b295) area_fmrd2_info_pane_t

0x95be,	// (0x00064c7d) fmrd2_indi_pane_t1

0x95ce,	// (0x00064c8d) fmrd2_indi_pane_t2

0x95de,	// (0x00064c9d) fmrd2_indi_pane_t3

0x0002,

0xfbdf,	// (0x0006b29e) fmrd2_indi_pane_t

0xe4de,	// (0x00069b9d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4de,	// (0x00069b9d) list_single_fs_bigclock_indicator_pane_g5

0xe58f,	// (0x00069c4e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe58f,	// (0x00069c4e) list_single_fs_bigclock_indicator_pane_t5

0x8d0a,	// (0x000643c9) aid_cell_bcale_month_pane_ParamLimits

0x8d0a,	// (0x000643c9) aid_cell_bcale_month_pane

0x8d28,	// (0x000643e7) bcale_month_pane_ParamLimits

0x8d28,	// (0x000643e7) bcale_month_pane

0x8d46,	// (0x00064405) bcale_preview_pane_ParamLimits

0x8d46,	// (0x00064405) bcale_preview_pane

0xecdd,	// (0x0006a39c) list_single_fs_bigclock_pane_t1_ParamLimits

0xecfc,	// (0x0006a3bb) list_single_fs_bigclock_pane_t2_ParamLimits

0xecfc,	// (0x0006a3bb) list_single_fs_bigclock_pane_t2

0x0001,

0xfb61,	// (0x0006b220) list_single_fs_bigclock_pane_t_ParamLimits

0xfb61,	// (0x0006b220) list_single_fs_bigclock_pane_t

0x9501,	// (0x00064bc0) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfbca,	// (0x0006b289) main_fs_bigclock_unlock_btn_pane_g

0x95ec,	// (0x00064cab) aid_dia3_key_size_ParamLimits

0x95ec,	// (0x00064cab) aid_dia3_key_size

0x95f8,	// (0x00064cb7) aid_dia3_listrow_size_ParamLimits

0x95f8,	// (0x00064cb7) aid_dia3_listrow_size

0x9608,	// (0x00064cc7) dia3_keypad_fun_pane_ParamLimits

0x9608,	// (0x00064cc7) dia3_keypad_fun_pane

0x961a,	// (0x00064cd9) dia3_keypad_num_pane_ParamLimits

0x961a,	// (0x00064cd9) dia3_keypad_num_pane

0x962c,	// (0x00064ceb) dia3_listscroll_pane_ParamLimits

0x962c,	// (0x00064ceb) dia3_listscroll_pane

0x963a,	// (0x00064cf9) dia3_numentry_pane_ParamLimits

0x963a,	// (0x00064cf9) dia3_numentry_pane

0xef21,	// (0x0006a5e0) dia3_list_pane

0xef2c,	// (0x0006a5eb) scroll_pane_cp12

0x9b52,	// (0x00065211) bg_dia3_numentry_pane

0x9648,	// (0x00064d07) dia3_numentry_pane_t1

0x9657,	// (0x00064d16) cell_dia3_key_num_pane

0x965f,	// (0x00064d1e) cell_dia3_key0_fun_pane_ParamLimits

0x965f,	// (0x00064d1e) cell_dia3_key0_fun_pane

0x966c,	// (0x00064d2b) cell_dia3_key1_fun_pane_ParamLimits

0x966c,	// (0x00064d2b) cell_dia3_key1_fun_pane

0x9679,	// (0x00064d38) dia3_listrow_pane

0xe208,	// (0x000698c7) bg_dia3_numentry_pane_g1

0x9b52,	// (0x00065211) bg_button_pane_cp21

0xef37,	// (0x0006a5f6) cell_dia3_key_num_pane_t1

0xef45,	// (0x0006a604) cell_dia3_key_num_pane_t2

0xef54,	// (0x0006a613) cell_dia3_key_num_pane_t3

0xef63,	// (0x0006a622) cell_dia3_key_num_pane_t4

0x0003,

0xfbe6,	// (0x0006b2a5) cell_dia3_key_num_pane_t

0x9b52,	// (0x00065211) bg_button_pane_cp19

0x9686,	// (0x00064d45) cell_dia3_key0_fun_pane_g1

0x9b52,	// (0x00065211) bg_button_pane_cp20

0x968e,	// (0x00064d4d) cell_dia3_key1_fun_pane_g1

0x9696,	// (0x00064d55) area_left_week_number_pane

0x96a9,	// (0x00064d68) area_top_day_name_pane

0x96b7,	// (0x00064d76) frame_month_view_pane

0xef72,	// (0x0006a631) grid_month_view_pane

0x96cc,	// (0x00064d8b) cell_top_day_name_pane_ParamLimits

0x96cc,	// (0x00064d8b) cell_top_day_name_pane

0x96e6,	// (0x00064da5) cell_area_left_week_number_pane_ParamLimits

0x96e6,	// (0x00064da5) cell_area_left_week_number_pane

0x9709,	// (0x00064dc8) cell_month_view_pane_ParamLimits

0x9709,	// (0x00064dc8) cell_month_view_pane

0xef80,	// (0x0006a63f) frm_month_g1

0x9735,	// (0x00064df4) frm_month_g2

0x9746,	// (0x00064e05) frm_month_g3

0x9757,	// (0x00064e16) frm_month_g4

0x9768,	// (0x00064e27) frm_month_g5

0x977b,	// (0x00064e3a) frm_month_g6

0x978e,	// (0x00064e4d) frm_month_g7

0xef8d,	// (0x0006a64c) frm_month_g8

0x97a1,	// (0x00064e60) frm_month_g9

0x97ae,	// (0x00064e6d) frm_month_g10

0x97bb,	// (0x00064e7a) frm_month_g11

0x97c8,	// (0x00064e87) frm_month_g12

0x97d5,	// (0x00064e94) frm_month_g13

0x97e2,	// (0x00064ea1) frm_month_g14

0x97f1,	// (0x00064eb0) frm_month_g15

0x9800,	// (0x00064ebf) frm_month_g16

0x000f,

0xfbef,	// (0x0006b2ae) frm_month_g

0xef9a,	// (0x0006a659) cell_top_day_name_pane_t1

0x980f,	// (0x00064ece) cell_area_left_week_number_pane_g1

0x981e,	// (0x00064edd) cell_area_left_week_number_pane_t1

0xcf2f,	// (0x000685ee) cell_month_view_pane_g1

0x9834,	// (0x00064ef3) cell_month_view_pane_t1

0x9b52,	// (0x00065211) main_fps_pane

0xe79a,	// (0x00069e59) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe79a,	// (0x00069e59) cmail_ddmenu_btn02_pane_cp1

0xe7b6,	// (0x00069e75) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7b6,	// (0x00069e75) cmail_ddmenu_btn02_pane_cp2

0x9007,	// (0x000646c6) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9007,	// (0x000646c6) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfb14,	// (0x0006b1d3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfb14,	// (0x0006b1d3) cmail_ddmenu_btn02_pane_g

0x9026,	// (0x000646e5) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9026,	// (0x000646e5) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfb19,	// (0x0006b1d8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfb19,	// (0x0006b1d8) cmail_ddmenu_btn02_pane_t

0x984a,	// (0x00064f09) fps_text_pane_ParamLimits

0x984a,	// (0x00064f09) fps_text_pane

0x9857,	// (0x00064f16) main_fps_pane_g1_ParamLimits

0x9857,	// (0x00064f16) main_fps_pane_g1

0x9865,	// (0x00064f24) wait_bar_pane_cp010_ParamLimits

0x9865,	// (0x00064f24) wait_bar_pane_cp010

0x9871,	// (0x00064f30) fps_text_pane_t1_ParamLimits

0x9871,	// (0x00064f30) fps_text_pane_t1

0x631b,	// (0x000619da) cam4_image_uncrop_pane_g1

0x6324,	// (0x000619e3) cam4_image_uncrop_pane_g2

0x632d,	// (0x000619ec) cam4_image_uncrop_pane_g3

0x6336,	// (0x000619f5) cam4_image_uncrop_pane_g4

0x0003,

0xf6ee,	// (0x0006adad) cam4_image_uncrop_pane_g

0x9679,	// (0x00064d38) dia3_listrow_pane_ParamLimits

0x9b52,	// (0x00065211) main_phob2_pane

0x8b3c,	// (0x000641fb) cell_tport_appsw_pane_cp02_ParamLimits

0x8b3c,	// (0x000641fb) cell_tport_appsw_pane_cp02

0x8b4b,	// (0x0006420a) cell_tport_appsw_pane_cp03_ParamLimits

0x8b4b,	// (0x0006420a) cell_tport_appsw_pane_cp03

0x9b52,	// (0x00065211) phob2_contact_card_pane

0x9b52,	// (0x00065211) phob2_listscroll_pane

0xefad,	// (0x0006a66c) phob2_list_pane

0xefb5,	// (0x0006a674) scroll_pane_cp034

0x988a,	// (0x00064f49) phob2_cc_data_pane_ParamLimits

0x988a,	// (0x00064f49) phob2_cc_data_pane

0x98a4,	// (0x00064f63) phob2_cc_listscroll_pane_ParamLimits

0x98a4,	// (0x00064f63) phob2_cc_listscroll_pane

0x98be,	// (0x00064f7d) list_double_large_graphic_phob2_pane_ParamLimits

0x98be,	// (0x00064f7d) list_double_large_graphic_phob2_pane

0x98dd,	// (0x00064f9c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x98dd,	// (0x00064f9c) list_double_large_graphic_phob2_pane_g1

0x98f3,	// (0x00064fb2) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x98f3,	// (0x00064fb2) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfc10,	// (0x0006b2cf) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc10,	// (0x0006b2cf) list_double_large_graphic_phob2_pane_g

0x98ff,	// (0x00064fbe) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x98ff,	// (0x00064fbe) list_double_large_graphic_phob2_pane_t1

0x9915,	// (0x00064fd4) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9915,	// (0x00064fd4) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc15,	// (0x0006b2d4) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc15,	// (0x0006b2d4) list_double_large_graphic_phob2_pane_t

0x9b52,	// (0x00065211) list_highlight_pane_cp024

0x992a,	// (0x00064fe9) phob2_cc_button_pane

0x9932,	// (0x00064ff1) phob2_cc_data_pane_g1_ParamLimits

0x9932,	// (0x00064ff1) phob2_cc_data_pane_g1

0x993e,	// (0x00064ffd) phob2_cc_data_pane_g2_ParamLimits

0x993e,	// (0x00064ffd) phob2_cc_data_pane_g2

0x0001,

0xfc1a,	// (0x0006b2d9) phob2_cc_data_pane_g_ParamLimits

0xfc1a,	// (0x0006b2d9) phob2_cc_data_pane_g

0x994a,	// (0x00065009) phob2_cc_data_pane_t1_ParamLimits

0x994a,	// (0x00065009) phob2_cc_data_pane_t1

0x995c,	// (0x0006501b) phob2_cc_data_pane_t2_ParamLimits

0x995c,	// (0x0006501b) phob2_cc_data_pane_t2

0x996e,	// (0x0006502d) phob2_cc_data_pane_t3_ParamLimits

0x996e,	// (0x0006502d) phob2_cc_data_pane_t3

0x0002,

0xfc1f,	// (0x0006b2de) phob2_cc_data_pane_t_ParamLimits

0xfc1f,	// (0x0006b2de) phob2_cc_data_pane_t

0xefbd,	// (0x0006a67c) phob2_cc_list_pane_ParamLimits

0xefbd,	// (0x0006a67c) phob2_cc_list_pane

0xda50,	// (0x0006910f) scroll_pane_cp035_ParamLimits

0xda50,	// (0x0006910f) scroll_pane_cp035

0xa245,	// (0x00065904) bg_button_pane_cp033

0xefc9,	// (0x0006a688) phob2_cc_button_pane_g1

0xefd5,	// (0x0006a694) phob2_cc_button_pane_t1

0xefea,	// (0x0006a6a9) phob2_cc_button_pane_t2

0x0001,

0xfc26,	// (0x0006b2e5) phob2_cc_button_pane_t

0x9980,	// (0x0006503f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9980,	// (0x0006503f) list_double_large_graphic_phob2_cc_pane

0x99a9,	// (0x00065068) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x99a9,	// (0x00065068) list_double_large_graphic_phob2_cc_pane_g1

0x99ba,	// (0x00065079) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x99ba,	// (0x00065079) list_double_large_graphic_phob2_cc_pane_g2

0x99c6,	// (0x00065085) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x99c6,	// (0x00065085) list_double_large_graphic_phob2_cc_pane_g3

0x99d2,	// (0x00065091) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x99d2,	// (0x00065091) list_double_large_graphic_phob2_cc_pane_g4

0x99de,	// (0x0006509d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x99de,	// (0x0006509d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc2b,	// (0x0006b2ea) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc2b,	// (0x0006b2ea) list_double_large_graphic_phob2_cc_pane_g

0x99ea,	// (0x000650a9) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x99ea,	// (0x000650a9) list_double_large_graphic_phob2_cc_pane_t1

0x9a13,	// (0x000650d2) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9a13,	// (0x000650d2) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc36,	// (0x0006b2f5) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc36,	// (0x0006b2f5) list_double_large_graphic_phob2_cc_pane_t

0xeffc,	// (0x0006a6bb) list_highlight_pane_cp025_ParamLimits

0xeffc,	// (0x0006a6bb) list_highlight_pane_cp025

0xa245,	// (0x00065904) bg_button_pane_cp033_ParamLimits

0xefc9,	// (0x0006a688) phob2_cc_button_pane_g1_ParamLimits

0xefd5,	// (0x0006a694) phob2_cc_button_pane_t1_ParamLimits

0xefea,	// (0x0006a6a9) phob2_cc_button_pane_t2_ParamLimits

0xfc26,	// (0x0006b2e5) phob2_cc_button_pane_t_ParamLimits

0x1188,	// (0x0005c847) popup_wgtman_window

0xd844,	// (0x00068f03) scroll_pane_cp038

0x93f3,	// (0x00064ab2) wgtman_btn_pane_cp_01_ParamLimits

0x93f3,	// (0x00064ab2) wgtman_btn_pane_cp_01

0xf00a,	// (0x0006a6c9) wgtman_content_pane

0xf013,	// (0x0006a6d2) wgtman_heading_pane

0x9b52,	// (0x00065211) bg_heading_pane_cp02

0xf01c,	// (0x0006a6db) wgtman_heading_pane_g1

0xf024,	// (0x0006a6e3) wgtman_heading_pane_t1

0xf032,	// (0x0006a6f1) scroll_pane_cp036

0xf03a,	// (0x0006a6f9) wgtman_list_pane

0xe6af,	// (0x00069d6e) wgtman_list_pane_t1_ParamLimits

0xe6af,	// (0x00069d6e) wgtman_list_pane_t1

0x627a,	// (0x00061939) cam4_grid_pane

0x703d,	// (0x000626fc) bg_button_pane_cp015_ParamLimits

0x704f,	// (0x0006270e) bg_button_pane_cp016_ParamLimits

0x7062,	// (0x00062721) bg_button_pane_cp017_ParamLimits

0x70b8,	// (0x00062777) popup_vitu2_query_window_g3_ParamLimits

0x70b8,	// (0x00062777) popup_vitu2_query_window_g3

0x7173,	// (0x00062832) popup_vitu2_query_window_t6_ParamLimits

0x7173,	// (0x00062832) popup_vitu2_query_window_t6

0x719e,	// (0x0006285d) popup_vitu2_query_window_t7_ParamLimits

0x719e,	// (0x0006285d) popup_vitu2_query_window_t7

0xe31c,	// (0x000699db) cam4_grid_pane_g1

0xe325,	// (0x000699e4) cam4_grid_pane_g2

0xf042,	// (0x0006a701) cam4_grid_pane_g3

0xf04b,	// (0x0006a70a) cam4_grid_pane_g4

0x0003,

0xfc3b,	// (0x0006b2fa) cam4_grid_pane_g

0x2027,	// (0x0005d6e6) aid_placing_vt_slider_lsc_ParamLimits

0x2367,	// (0x0005da26) vidtel_button_pane_ParamLimits

0x2367,	// (0x0005da26) vidtel_button_pane

0x9b52,	// (0x00065211) bg_button_pane_cp034

0x9a3c,	// (0x000650fb) vidtel_button_pane_g1

0xf056,	// (0x0006a715) vidtel_button_pane_t1

0xd95e,	// (0x0006901d) aid_size_vtel_slider_touch

0xda50,	// (0x0006910f) scroll_pane_cp039

0x7fb7,	// (0x00063676) ncim_query_button_pane_cp01_ParamLimits

0x7fd6,	// (0x00063695) ncimui_query_pane_g1_ParamLimits

0xa245,	// (0x00065904) input_focus_pane_cp012_ParamLimits

0xe24e,	// (0x0006990d) ncim_query_entry_pane_t1_ParamLimits

0xda50,	// (0x0006910f) scroll_pane_cp039_ParamLimits

0xb31f,	// (0x000669de) navi_pane_bcale_mc_g1

0xb327,	// (0x000669e6) navi_pane_bcale_mc_t1

0xe7ff,	// (0x00069ebe) main_sp_fs_email_pane_g1

0xe80b,	// (0x00069eca) main_sp_fs_email_pane_g2

0x0001,

0x0be8,	// (0x0005c2a7) main_sp_fs_email_pane_g

0xea61,	// (0x0006a120) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea61,	// (0x0006a120) list_single_cale_mrui_row_pane_g3

0x9046,	// (0x00064705) list_single_recal_day_pane_g5_event_pane

0xa19e,	// (0x0006585d) list_single_recal_day_pane_g7

0xf06c,	// (0x0006a72b) list_recal_day_event_pane_cp01

0xf075,	// (0x0006a734) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0006a73c) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0006a744) list_recal_vselct_pane_cp01

0xd992,	// (0x00069051) list_recal_day_event_pane_cp01_g1

0xa253,	// (0x00065912) list_recal_day_event_pane_cp01_t1

0xa1a6,	// (0x00065865) list_single_recal_day_pane_t1_ParamLimits

0xa1b8,	// (0x00065877) list_single_recal_day_pane_t2_ParamLimits

0xfb29,	// (0x0006b1e8) list_single_recal_day_pane_t_ParamLimits

0xa77b,	// (0x00065e3a) bg_notes_pane_ParamLimits

0xa82a,	// (0x00065ee9) list_notes_pane_ParamLimits

0x14ed,	// (0x0005cbac) scroll_pane_cp06_ParamLimits

0xa84c,	// (0x00065f0b) main_notes_pane_ParamLimits

0x9b52,	// (0x00065211) main_welc_pane

0x9a44,	// (0x00065103) main_welc_body_pane_ParamLimits

0x9a44,	// (0x00065103) main_welc_body_pane

0x9a5d,	// (0x0006511c) main_welc_opti_pane_ParamLimits

0x9a5d,	// (0x0006511c) main_welc_opti_pane

0x9a90,	// (0x0006514f) main_welc_pane_t1_ParamLimits

0x9a90,	// (0x0006514f) main_welc_pane_t1

0x9aaa,	// (0x00065169) main_welc_body_row_pane_ParamLimits

0x9aaa,	// (0x00065169) main_welc_body_row_pane

0xe29d,	// (0x0006995c) main_welc_opti_row_pane_ParamLimits

0xe29d,	// (0x0006995c) main_welc_opti_row_pane

0xf08f,	// (0x0006a74e) main_welc_opti_row_pane_g1

0x9ad3,	// (0x00065192) main_welc_opti_row_pane_t1

0xf097,	// (0x0006a756) main_welc_body_row_pane_t1

0xedb4,	// (0x0006a473) popup_notif_wgt_heading_pane

0xedce,	// (0x0006a48d) aid_size_list_notif_wgt_del_ParamLimits

0xeddb,	// (0x0006a49a) list_notif_wgt_row_pane_g1_ParamLimits

0xede7,	// (0x0006a4a6) list_notif_wgt_row_pane_g2_ParamLimits

0xedf6,	// (0x0006a4b5) list_notif_wgt_row_pane_g3_ParamLimits

0xfb90,	// (0x0006b24f) list_notif_wgt_row_pane_g_ParamLimits

0xee03,	// (0x0006a4c2) list_notif_wgt_row_pane_t1_ParamLimits

0xee19,	// (0x0006a4d8) list_notif_wgt_row_pane_t2_ParamLimits

0xee2b,	// (0x0006a4ea) list_notif_wgt_row_pane_t3_ParamLimits

0xfb97,	// (0x0006b256) list_notif_wgt_row_pane_t_ParamLimits

0x9486,	// (0x00064b45) listrow_wgtman_pane_g1_ParamLimits

0x9493,	// (0x00064b52) listrow_wgtman_pane_g2_ParamLimits

0xfbc0,	// (0x0006b27f) listrow_wgtman_pane_g_ParamLimits

0x94b1,	// (0x00064b70) listrow_wgtman_pane_t1_ParamLimits

0x94c9,	// (0x00064b88) listrow_wgtman_pane_t2_ParamLimits

0xfbc5,	// (0x0006b284) listrow_wgtman_pane_t_ParamLimits

0x94ef,	// (0x00064bae) wait_bar_pane_cp09_ParamLimits

0x9b52,	// (0x00065211) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0006a765) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0006a76d) popup_notif_wgt_heading_pane_t1

0x9b52,	// (0x00065211) main_vids_pane

0x9b52,	// (0x00065211) vids_listscroll_pane

0x9ae2,	// (0x000651a1) scroll_pane_cp040

0x9b52,	// (0x00065211) vids_list_pane

0x9aed,	// (0x000651ac) vids_list_double_pane_ParamLimits

0x9aed,	// (0x000651ac) vids_list_double_pane

0x9b05,	// (0x000651c4) vids_list_double_pane_g1

0x9b0e,	// (0x000651cd) vids_list_double_pane_t1

0x9b1e,	// (0x000651dd) vids_list_double_pane_t2

0x0001,

0xfc49,	// (0x0006b308) vids_list_double_pane_t

0x43b3,	// (0x0005fa72) main_ncimui_pane_ParamLimits

0x7e0e,	// (0x000634cd) main_ncimui_pane_g1_ParamLimits

0x7e1a,	// (0x000634d9) main_ncimui_pane_g2_ParamLimits

0x7e1a,	// (0x000634d9) main_ncimui_pane_g2

0x0001,

0xf951,	// (0x0006b010) main_ncimui_pane_g_ParamLimits

0xf951,	// (0x0006b010) main_ncimui_pane_g

0x9a76,	// (0x00065135) main_welc_pane_g1_ParamLimits

0x9a76,	// (0x00065135) main_welc_pane_g1

0x9a82,	// (0x00065141) main_welc_pane_g2_ParamLimits

0x9a82,	// (0x00065141) main_welc_pane_g2

0x0001,

0xfc44,	// (0x0006b303) main_welc_pane_g_ParamLimits

0xfc44,	// (0x0006b303) main_welc_pane_g

0xa77b,	// (0x00065e3a) listscroll_mce_pane_ParamLimits

0xb474,	// (0x00066b33) wait_bar_pane_cp10

0xc8c1,	// (0x00067f80) main_cale_day_pane_ParamLimits

0xc8c1,	// (0x00067f80) main_cale_week_pane_ParamLimits

0xa77b,	// (0x00065e3a) main_messa_pane_ParamLimits

0x56c0,	// (0x00060d7f) main_clock2_btn_pane_ParamLimits

0x56c0,	// (0x00060d7f) main_clock2_btn_pane

0xd0b7,	// (0x00068776) main_clock2_btn_pane_cp01_ParamLimits

0xd0b7,	// (0x00068776) main_clock2_btn_pane_cp01

0xea32,	// (0x0006a0f1) list_cale_mrui_pane_ParamLimits

0xee61,	// (0x0006a520) main_cf0_pane_g2

0x0001,

0xfb9e,	// (0x0006b25d) main_cf0_pane_g

0x9696,	// (0x00064d55) area_left_week_number_pane_ParamLimits

0x96a9,	// (0x00064d68) area_top_day_name_pane_ParamLimits

0x96b7,	// (0x00064d76) frame_month_view_pane_ParamLimits

0xef72,	// (0x0006a631) grid_month_view_pane_ParamLimits

0xef80,	// (0x0006a63f) frm_month_g1_ParamLimits

0x9735,	// (0x00064df4) frm_month_g2_ParamLimits

0x9746,	// (0x00064e05) frm_month_g3_ParamLimits

0x9757,	// (0x00064e16) frm_month_g4_ParamLimits

0x9768,	// (0x00064e27) frm_month_g5_ParamLimits

0x977b,	// (0x00064e3a) frm_month_g6_ParamLimits

0x978e,	// (0x00064e4d) frm_month_g7_ParamLimits

0xef8d,	// (0x0006a64c) frm_month_g8_ParamLimits

0x97a1,	// (0x00064e60) frm_month_g9_ParamLimits

0x97ae,	// (0x00064e6d) frm_month_g10_ParamLimits

0x97bb,	// (0x00064e7a) frm_month_g11_ParamLimits

0x97c8,	// (0x00064e87) frm_month_g12_ParamLimits

0x97d5,	// (0x00064e94) frm_month_g13_ParamLimits

0x97e2,	// (0x00064ea1) frm_month_g14_ParamLimits

0x97f1,	// (0x00064eb0) frm_month_g15_ParamLimits

0x9800,	// (0x00064ebf) frm_month_g16_ParamLimits

0xfbef,	// (0x0006b2ae) frm_month_g_ParamLimits

0xef9a,	// (0x0006a659) cell_top_day_name_pane_t1_ParamLimits

0x980f,	// (0x00064ece) cell_area_left_week_number_pane_g1_ParamLimits

0x981e,	// (0x00064edd) cell_area_left_week_number_pane_t1_ParamLimits

0xcf2f,	// (0x000685ee) cell_month_view_pane_g1_ParamLimits

0x9834,	// (0x00064ef3) cell_month_view_pane_t1_ParamLimits

0xa773,	// (0x00065e32) main_clock2_btn_pane_g1

0xf0bc,	// (0x0006a77b) main_clock2_btn_pane_t1

0xa245,	// (0x00065904) listscroll_cmail_pane_ParamLimits

0xe7ff,	// (0x00069ebe) main_sp_fs_email_pane_g1_ParamLimits

0xe80b,	// (0x00069eca) main_sp_fs_email_pane_g2_ParamLimits

0x0be8,	// (0x0005c2a7) main_sp_fs_email_pane_g_ParamLimits

0xeb40,	// (0x0006a1ff) list_recal_day_pane_ParamLimits

0xeb51,	// (0x0006a210) mian_recal_day_pane_t1

0x8808,	// (0x00063ec7) list_single_dyc_row_text_pane_t4_ParamLimits

0x8808,	// (0x00063ec7) list_single_dyc_row_text_pane_t4

0x883f,	// (0x00063efe) list_single_dyc_row_text_pane_t5_ParamLimits

0x883f,	// (0x00063efe) list_single_dyc_row_text_pane_t5

0x9f0c,	// (0x000655cb) list_single_dyc_row_text_pane_t6_ParamLimits

0x9f0c,	// (0x000655cb) list_single_dyc_row_text_pane_t6

0x320a,	// (0x0005e8c9) aid_mgn_list_cale_time_pane

0x43b3,	// (0x0005fa72) main_gallery2_pane_ParamLimits

0xd0cd,	// (0x0006878c) main_clock2_pane_cp01_t1

0xd0db,	// (0x0006879a) main_clock2_pane_cp01_t3

0x0001,

0x06c7,	// (0x0005bd86) main_clock2_pane_cp01_t

0x193e,	// (0x0005cffd) cale_week_scroll_pane_g16_ParamLimits

0x193e,	// (0x0005cffd) cale_week_scroll_pane_g16

0xaa41,	// (0x00066100) vorec_slider_pane

0xf056,	// (0x0006a715) vidtel_button_pane_t1_ParamLimits

0x90a1,	// (0x00064760) main_fs_bigclock_clock_pane_g1_ParamLimits

0x90a1,	// (0x00064760) main_fs_bigclock_clock_pane_g2_ParamLimits

0x90ae,	// (0x0006476d) main_fs_bigclock_clock_pane_g3_ParamLimits

0x90ae,	// (0x0006476d) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfb4c,	// (0x0006b20b) main_fs_bigclock_clock_pane_g_ParamLimits

0x90ba,	// (0x00064779) main_fs_bigclock_clock_pane_t1_ParamLimits

0x90cd,	// (0x0006478c) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfb55,	// (0x0006b214) main_fs_bigclock_clock_pane_t_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
