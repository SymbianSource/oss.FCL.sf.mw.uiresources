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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0005dd9e };

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
0x0b7e,	// (0x0005e91c) Screen

0x0b8a,	// (0x0005e928) application_window

0x0bda,	// (0x0005e978) area_bottom_pane_ParamLimits

0x0bda,	// (0x0005e978) area_bottom_pane

0x0c0f,	// (0x0005e9ad) area_top_pane_ParamLimits

0x0c0f,	// (0x0005e9ad) area_top_pane

0x9c85,	// (0x00067a23) call_video_uplink_pane_ParamLimits

0x9c85,	// (0x00067a23) call_video_uplink_pane

0x0c9e,	// (0x0005ea3c) main_pane_ParamLimits

0x0c9e,	// (0x0005ea3c) main_pane

0xc886,	// (0x0006a624) context_pane

0x45e1,	// (0x0006237f) navi_pane

0x4605,	// (0x000623a3) popup_cale_events_window_ParamLimits

0x4605,	// (0x000623a3) popup_cale_events_window

0xc899,	// (0x0006a637) popup_mup_playback_window

0x461d,	// (0x000623bb) signal_pane

0xa8e1,	// (0x0006867f) main_browser_pane

0xaa97,	// (0x00068835) main_burst_pane

0x4493,	// (0x00062231) main_calc_pane

0xc829,	// (0x0006a5c7) main_cale_day_pane

0x13d0,	// (0x0005f16e) main_cale_month_pane

0xc829,	// (0x0006a5c7) main_cale_week_pane

0xaa97,	// (0x00068835) main_call_pane

0xa0b6,	// (0x00067e54) main_call_poc_pane

0xaa97,	// (0x00068835) main_camera_pane

0xaa97,	// (0x00068835) main_chi_dic_pane

0xb2b6,	// (0x00069054) main_clock_pane

0xa0b6,	// (0x00067e54) main_fmradio_pane

0xaa97,	// (0x00068835) main_graph_messa_pane

0xa0b6,	// (0x00067e54) main_help_pane

0xa8e1,	// (0x0006867f) main_im_pane

0xa81c,	// (0x000685ba) main_image_pane_ParamLimits

0xa81c,	// (0x000685ba) main_image_pane

0xa0b6,	// (0x00067e54) main_location2_pane

0xaa97,	// (0x00068835) main_location_pane

0xa81c,	// (0x000685ba) main_messa_pane

0xa0b6,	// (0x00067e54) main_mp2_pane

0xaa97,	// (0x00068835) main_mp_pane

0xa0b6,	// (0x00067e54) main_msg_pane

0xa0b6,	// (0x00067e54) main_mup_eq_pane

0xa0b6,	// (0x00067e54) main_mup_pane

0xa8e1,	// (0x0006867f) main_notes_pane

0xa0b6,	// (0x00067e54) main_pec_pane

0xa0b6,	// (0x00067e54) main_phob_pane

0xa0b6,	// (0x00067e54) main_pinb_pane

0xa0b6,	// (0x00067e54) main_postcard_pane

0xa0b6,	// (0x00067e54) main_qdial_pane

0xaa97,	// (0x00068835) main_skin_pane

0xa0b6,	// (0x00067e54) main_smil2_pane

0xaa97,	// (0x00068835) main_smil_pane

0xaa97,	// (0x00068835) main_video_pane

0xaa97,	// (0x00068835) main_video_tele_pane

0xa81c,	// (0x000685ba) main_viewer_pane_ParamLimits

0xa81c,	// (0x000685ba) main_viewer_pane

0xaa97,	// (0x00068835) main_vorec_pane

0x44cb,	// (0x00062269) popup_blid_sat_info_window_ParamLimits

0x44cb,	// (0x00062269) popup_blid_sat_info_window

0x44e5,	// (0x00062283) popup_dyc_status_message_window_ParamLimits

0x44e5,	// (0x00062283) popup_dyc_status_message_window

0x44f5,	// (0x00062293) popup_grid_large_graphic_window_ParamLimits

0x44f5,	// (0x00062293) popup_grid_large_graphic_window

0x456d,	// (0x0006230b) popup_loc_request_window_ParamLimits

0x456d,	// (0x0006230b) popup_loc_request_window

0x45b5,	// (0x00062353) popup_wml_address_window_ParamLimits

0x45b5,	// (0x00062353) popup_wml_address_window

0x436b,	// (0x00062109) call_muted_g1

0x402a,	// (0x00061dc8) popup_call_audio_conf_window_ParamLimits

0x402a,	// (0x00061dc8) popup_call_audio_conf_window

0x437b,	// (0x00062119) popup_call_audio_first_window_ParamLimits

0x437b,	// (0x00062119) popup_call_audio_first_window

0x43bb,	// (0x00062159) popup_call_audio_in_window_ParamLimits

0x43bb,	// (0x00062159) popup_call_audio_in_window

0x43df,	// (0x0006217d) popup_call_audio_out_window_ParamLimits

0x43df,	// (0x0006217d) popup_call_audio_out_window

0x4401,	// (0x0006219f) popup_call_audio_second_window_ParamLimits

0x4401,	// (0x0006219f) popup_call_audio_second_window

0x4431,	// (0x000621cf) popup_call_audio_wait_window_ParamLimits

0x4431,	// (0x000621cf) popup_call_audio_wait_window

0x4452,	// (0x000621f0) popup_number_entry_window_ParamLimits

0x4452,	// (0x000621f0) popup_number_entry_window

0x9ca3,	// (0x00067a41) bg_popup_call_pane_cp05_ParamLimits

0x9ca3,	// (0x00067a41) bg_popup_call_pane_cp05

0x9cc3,	// (0x00067a61) popup_number_entry_window_t1

0x9cd6,	// (0x00067a74) popup_number_entry_window_t2

0x9ce8,	// (0x00067a86) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0006ce68) popup_number_entry_window_t

0x9cfa,	// (0x00067a98) text_title_cp2

0x9d0d,	// (0x00067aab) bg_popup_call_pane_cp_ParamLimits

0x9d0d,	// (0x00067aab) bg_popup_call_pane_cp

0x9d1b,	// (0x00067ab9) call_thumbnail_pane

0x9d23,	// (0x00067ac1) popup_call_audio_in_window_g1_ParamLimits

0x9d23,	// (0x00067ac1) popup_call_audio_in_window_g1

0x9d2f,	// (0x00067acd) popup_call_audio_in_window_g2_ParamLimits

0x9d2f,	// (0x00067acd) popup_call_audio_in_window_g2

0x9d3b,	// (0x00067ad9) popup_call_audio_in_window_g3_ParamLimits

0x9d3b,	// (0x00067ad9) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0006ce71) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0006ce71) popup_call_audio_in_window_g

0x9d47,	// (0x00067ae5) popup_call_audio_in_window_t1_ParamLimits

0x9d47,	// (0x00067ae5) popup_call_audio_in_window_t1

0x9d63,	// (0x00067b01) popup_call_audio_in_window_t2_ParamLimits

0x9d63,	// (0x00067b01) popup_call_audio_in_window_t2

0x9d7f,	// (0x00067b1d) popup_call_audio_in_window_t3_ParamLimits

0x9d7f,	// (0x00067b1d) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0006ce78) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0006ce78) popup_call_audio_in_window_t

0x9d0d,	// (0x00067aab) bg_popup_call_pane_cp01_ParamLimits

0x9d0d,	// (0x00067aab) bg_popup_call_pane_cp01

0x9d1b,	// (0x00067ab9) call_thumbnail_pane_cp02

0x9d92,	// (0x00067b30) call_type_pane_cp022

0x9d9a,	// (0x00067b38) popup_call_audio_out_window_g1_ParamLimits

0x9d9a,	// (0x00067b38) popup_call_audio_out_window_g1

0x9dac,	// (0x00067b4a) popup_call_audio_out_window_g2_ParamLimits

0x9dac,	// (0x00067b4a) popup_call_audio_out_window_g2

0x9db8,	// (0x00067b56) popup_call_audio_out_window_g3_ParamLimits

0x9db8,	// (0x00067b56) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0006ce7f) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0006ce7f) popup_call_audio_out_window_g

0x9dca,	// (0x00067b68) popup_call_audio_out_window_t1_ParamLimits

0x9dca,	// (0x00067b68) popup_call_audio_out_window_t1

0x9de2,	// (0x00067b80) popup_call_audio_out_window_t2_ParamLimits

0x9de2,	// (0x00067b80) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0006ce86) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0006ce86) popup_call_audio_out_window_t

0x9df7,	// (0x00067b95) bg_popup_call_pane_ParamLimits

0x9df7,	// (0x00067b95) bg_popup_call_pane

0x0ea2,	// (0x0005ec40) call_thumbnail_pane_cp_ParamLimits

0x0ea2,	// (0x0005ec40) call_thumbnail_pane_cp

0x9e7b,	// (0x00067c19) call_type_pane_cp01_ParamLimits

0x9e7b,	// (0x00067c19) call_type_pane_cp01

0x9ebf,	// (0x00067c5d) popup_call_audio_first_window_g1_ParamLimits

0x9ebf,	// (0x00067c5d) popup_call_audio_first_window_g1

0x9f0b,	// (0x00067ca9) popup_call_audio_first_window_g2_ParamLimits

0x9f0b,	// (0x00067ca9) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0006ce8b) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0006ce8b) popup_call_audio_first_window_g

0x9f4f,	// (0x00067ced) popup_call_audio_first_window_t1_ParamLimits

0x9f4f,	// (0x00067ced) popup_call_audio_first_window_t1

0x9ffb,	// (0x00067d99) popup_call_audio_first_window_t4_ParamLimits

0x9ffb,	// (0x00067d99) popup_call_audio_first_window_t4

0xa087,	// (0x00067e25) popup_call_audio_first_window_t5_ParamLimits

0xa087,	// (0x00067e25) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0006ce90) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0006ce90) popup_call_audio_first_window_t

0xa0b6,	// (0x00067e54) bg_popup_call_pane_cp02

0xa0c0,	// (0x00067e5e) call_type_pane_cp023

0xa0c8,	// (0x00067e66) popup_call_audio_wait_window_g1

0xa0d0,	// (0x00067e6e) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0006ce97) popup_call_audio_wait_window_g

0xa0d8,	// (0x00067e76) popup_call_audio_wait_window_t3

0xa0e6,	// (0x00067e84) bg_popup_call_pane_cp03_ParamLimits

0xa0e6,	// (0x00067e84) bg_popup_call_pane_cp03

0xa146,	// (0x00067ee4) call_thumbnail_pane_cp011_ParamLimits

0xa146,	// (0x00067ee4) call_thumbnail_pane_cp011

0xa152,	// (0x00067ef0) call_type_pane_cp034_ParamLimits

0xa152,	// (0x00067ef0) call_type_pane_cp034

0xa18e,	// (0x00067f2c) popup_call_audio_second_window_g1_ParamLimits

0xa18e,	// (0x00067f2c) popup_call_audio_second_window_g1

0xa1ca,	// (0x00067f68) popup_call_audio_second_window_g2_ParamLimits

0xa1ca,	// (0x00067f68) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0006ce9c) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0006ce9c) popup_call_audio_second_window_g

0xa206,	// (0x00067fa4) popup_call_audio_second_window_t1_ParamLimits

0xa206,	// (0x00067fa4) popup_call_audio_second_window_t1

0xa792,	// (0x00068530) popup_call_audio_second_window_t2_ParamLimits

0xa792,	// (0x00068530) popup_call_audio_second_window_t2

0xa7c8,	// (0x00068566) popup_call_audio_second_window_t3_ParamLimits

0xa7c8,	// (0x00068566) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0006cea1) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0006cea1) popup_call_audio_second_window_t

0xa0b6,	// (0x00067e54) bg_popup_call_pane_cp04

0xa7fe,	// (0x0006859c) list_conf_pane

0xa806,	// (0x000685a4) popup_call_audio_conf_window_t1

0xa814,	// (0x000685b2) call_thumbnail_pane_g1

0xa81c,	// (0x000685ba) bg_pinb_pane_ParamLimits

0xa81c,	// (0x000685ba) bg_pinb_pane

0xa82a,	// (0x000685c8) find_pinb_pane

0xa833,	// (0x000685d1) listscroll_pinb_pane_ParamLimits

0xa833,	// (0x000685d1) listscroll_pinb_pane

0xa842,	// (0x000685e0) pinb_bg_pane_g1

0x0ec6,	// (0x0005ec64) pinb_bg_pane_g2

0x0ed2,	// (0x0005ec70) pinb_bg_pane_g3

0x0ede,	// (0x0005ec7c) pinb_bg_pane_g4

0x0eea,	// (0x0005ec88) pinb_bg_pane_g5

0x0ef6,	// (0x0005ec94) pinb_bg_pane_g6

0x0f01,	// (0x0005ec9f) pinb_bg_pane_g7

0x0f0c,	// (0x0005ecaa) pinb_bg_pane_g8

0x0f17,	// (0x0005ecb5) pinb_bg_pane_g9

0x0f21,	// (0x0005ecbf) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0006cea8) pinb_bg_pane_g

0x0f3e,	// (0x0005ecdc) grid_pinb_pane

0x0f49,	// (0x0005ece7) list_pinb_pane

0x0f54,	// (0x0005ecf2) scroll_pane_cp01_ParamLimits

0x0f54,	// (0x0005ecf2) scroll_pane_cp01

0xa84c,	// (0x000685ea) find_pinb_pane_g1_ParamLimits

0xa84c,	// (0x000685ea) find_pinb_pane_g1

0xa864,	// (0x00068602) find_pinb_pane_t1

0xa876,	// (0x00068614) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0006cec2) find_pinb_pane_t

0xa88b,	// (0x00068629) input_focus_pane_cp01_ParamLimits

0xa88b,	// (0x00068629) input_focus_pane_cp01

0x0f66,	// (0x0005ed04) cell_pinb_pane_ParamLimits

0x0f66,	// (0x0005ed04) cell_pinb_pane

0x0f8b,	// (0x0005ed29) cell_pinb_pane_g1_ParamLimits

0x0f8b,	// (0x0005ed29) cell_pinb_pane_g1

0x0fa0,	// (0x0005ed3e) cell_pinb_pane_g2_ParamLimits

0x0fa0,	// (0x0005ed3e) cell_pinb_pane_g2

0xa897,	// (0x00068635) cell_pinb_pane_g3_ParamLimits

0xa897,	// (0x00068635) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0006cec7) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0006cec7) cell_pinb_pane_g

0xa0b6,	// (0x00067e54) grid_highlight_pane_cp01

0x0fac,	// (0x0005ed4a) list_pinb_item_pane_ParamLimits

0x0fac,	// (0x0005ed4a) list_pinb_item_pane

0xa0b6,	// (0x00067e54) list_highlight_pane_cp02

0x0fca,	// (0x0005ed68) list_pinb_item_pane_g1_ParamLimits

0x0fca,	// (0x0005ed68) list_pinb_item_pane_g1

0x0fd7,	// (0x0005ed75) list_pinb_item_pane_g2_ParamLimits

0x0fd7,	// (0x0005ed75) list_pinb_item_pane_g2

0x0fe3,	// (0x0005ed81) list_pinb_item_pane_g3_ParamLimits

0x0fe3,	// (0x0005ed81) list_pinb_item_pane_g3

0x0ff4,	// (0x0005ed92) list_pinb_item_pane_g4_ParamLimits

0x0ff4,	// (0x0005ed92) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0006cece) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0006cece) list_pinb_item_pane_g

0x1000,	// (0x0005ed9e) list_pinb_item_pane_t1_ParamLimits

0x1000,	// (0x0005ed9e) list_pinb_item_pane_t1

0x1031,	// (0x0005edcf) calc_display_pane

0x104f,	// (0x0005eded) calc_paper_pane

0x106b,	// (0x0005ee09) grid_calc_pane

0xa0b6,	// (0x00067e54) bg_list_pane_cp01

0x1097,	// (0x0005ee35) clock_g1

0x109f,	// (0x0005ee3d) clock_g2

0x0001,

0xf139,	// (0x0006ced7) clock_g

0x10a9,	// (0x0005ee47) clock_t1_ParamLimits

0x10a9,	// (0x0005ee47) clock_t1

0x10be,	// (0x0005ee5c) clock_t2_ParamLimits

0x10be,	// (0x0005ee5c) clock_t2

0x10d0,	// (0x0005ee6e) clock_t3_ParamLimits

0x10d0,	// (0x0005ee6e) clock_t3

0x10e2,	// (0x0005ee80) clock_t4_ParamLimits

0x10e2,	// (0x0005ee80) clock_t4

0x10f4,	// (0x0005ee92) clock_t5_ParamLimits

0x10f4,	// (0x0005ee92) clock_t5

0x1109,	// (0x0005eea7) clock_t6_ParamLimits

0x1109,	// (0x0005eea7) clock_t6

0x111b,	// (0x0005eeb9) clock_t7_ParamLimits

0x111b,	// (0x0005eeb9) clock_t7

0x112d,	// (0x0005eecb) clock_t8_ParamLimits

0x112d,	// (0x0005eecb) clock_t8

0x1143,	// (0x0005eee1) clock_t9_ParamLimits

0x1143,	// (0x0005eee1) clock_t9

0x0008,

0xf13e,	// (0x0006cedc) clock_t_ParamLimits

0xf13e,	// (0x0006cedc) clock_t

0xa8a3,	// (0x00068641) popup_clock_analogue_window_cp02

0xa8a3,	// (0x00068641) popup_clock_digital_window_cp01

0xa8ab,	// (0x00068649) listscroll_help_pane

0xa0b6,	// (0x00067e54) phob_pre_status_pane

0xa8b5,	// (0x00068653) grid_qdial_pane

0xa81c,	// (0x000685ba) listscroll_mce_pane

0xa81c,	// (0x000685ba) bg_notes_pane

0xa8bf,	// (0x0006865d) list_notes_pane

0x1159,	// (0x0005eef7) scroll_pane_cp06

0xa8cd,	// (0x0006866b) bg_calc_paper_pane

0x1172,	// (0x0005ef10) list_calc_pane

0xa8e1,	// (0x0006867f) bg_calc_display_pane

0x118c,	// (0x0005ef2a) calc_display_pane_t1

0x11a1,	// (0x0005ef3f) calc_display_pane_t2

0x11b6,	// (0x0005ef54) calc_display_pane_t3

0x0002,

0xf151,	// (0x0006ceef) calc_display_pane_t

0x11c8,	// (0x0005ef66) cell_calc_pane_ParamLimits

0x11c8,	// (0x0005ef66) cell_calc_pane

0xa8ed,	// (0x0006868b) bg_calc_paper_pane_g1

0xa8f9,	// (0x00068697) bg_calc_paper_pane_g2

0xa905,	// (0x000686a3) bg_calc_paper_pane_g3

0xa911,	// (0x000686af) bg_calc_paper_pane_g4

0xa91d,	// (0x000686bb) bg_calc_paper_pane_g5

0x11f7,	// (0x0005ef95) bg_calc_paper_pane_g6

0x1208,	// (0x0005efa6) bg_calc_paper_pane_g7

0x1219,	// (0x0005efb7) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0006cef6) bg_calc_paper_pane_g

0x122c,	// (0x0005efca) calc_bg_paper_pane_g9

0x123f,	// (0x0005efdd) list_calc_item_pane_ParamLimits

0x123f,	// (0x0005efdd) list_calc_item_pane

0xa929,	// (0x000686c7) list_calc_item_pane_g1

0x1260,	// (0x0005effe) list_calc_item_pane_t1_ParamLimits

0x1260,	// (0x0005effe) list_calc_item_pane_t1

0x1272,	// (0x0005f010) list_calc_item_pane_t2_ParamLimits

0x1272,	// (0x0005f010) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0006cf07) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0006cf07) list_calc_item_pane_t

0xa936,	// (0x000686d4) cell_calc_pane_g1

0xa940,	// (0x000686de) grid_highlight_pane_cp02

0xa962,	// (0x00068700) bg_calc_display_pane_g1

0x12a2,	// (0x0005f040) bg_calc_display_pane_g2

0xa96b,	// (0x00068709) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0006cf11) bg_calc_display_pane_g

0x12ac,	// (0x0005f04a) cell_qdial_pane_ParamLimits

0x12ac,	// (0x0005f04a) cell_qdial_pane

0x12c2,	// (0x0005f060) cell_qdial_pane_g1_ParamLimits

0x12c2,	// (0x0005f060) cell_qdial_pane_g1

0x12cf,	// (0x0005f06d) cell_qdial_pane_g2_ParamLimits

0x12cf,	// (0x0005f06d) cell_qdial_pane_g2

0xa974,	// (0x00068712) cell_qdial_pane_g3_ParamLimits

0xa974,	// (0x00068712) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0006cf18) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0006cf18) cell_qdial_pane_g

0x12ed,	// (0x0005f08b) cell_qdial_pane_t1_ParamLimits

0x12ed,	// (0x0005f08b) cell_qdial_pane_t1

0x1305,	// (0x0005f0a3) cell_qdial_pane_t2_ParamLimits

0x1305,	// (0x0005f0a3) cell_qdial_pane_t2

0x1318,	// (0x0005f0b6) cell_qdial_pane_t3_ParamLimits

0x1318,	// (0x0005f0b6) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0006cf21) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0006cf21) cell_qdial_pane_t

0xa0b6,	// (0x00067e54) grid_highlight_pane_cp04

0xa980,	// (0x0006871e) thumbnail_qdial_pane_ParamLimits

0xa980,	// (0x0006871e) thumbnail_qdial_pane

0xa9dc,	// (0x0006877a) list_help_pane

0xa9e5,	// (0x00068783) scroll_pane_cp02

0x132b,	// (0x0005f0c9) help_list_pane_t1_ParamLimits

0x132b,	// (0x0005f0c9) help_list_pane_t1

0x1352,	// (0x0005f0f0) bg_notes_pane_g2

0x135a,	// (0x0005f0f8) bg_notes_pane_g3

0x1362,	// (0x0005f100) notes_bg_pane_g1

0x136a,	// (0x0005f108) notes_bg_pane_g4

0x1372,	// (0x0005f110) notes_bg_pane_g5

0x137a,	// (0x0005f118) notes_bg_pane_g6

0x1382,	// (0x0005f120) notes_bg_pane_g7

0x138a,	// (0x0005f128) notes_bg_pane_g8

0x1392,	// (0x0005f130) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0006cf3f) notes_bg_pane_g

0x139a,	// (0x0005f138) list_notes_text_pane_ParamLimits

0x139a,	// (0x0005f138) list_notes_text_pane

0xa9ee,	// (0x0006878c) list_notes_text_pane_g1

0x13c2,	// (0x0005f160) list_notes_text_pane_t1

0x13d0,	// (0x0005f16e) listscroll_cale_week_pane

0x1406,	// (0x0005f1a4) bg_cale_heading_pane

0x142f,	// (0x0005f1cd) bg_cale_pane_cp01

0x1451,	// (0x0005f1ef) cale_week_corner_pane

0x1470,	// (0x0005f20e) cale_week_day_heading_pane

0x149e,	// (0x0005f23c) cale_week_scroll_pane_g1

0x14c2,	// (0x0005f260) cale_week_scroll_pane_g2

0x14da,	// (0x0005f278) cale_week_scroll_pane_g3

0x14f2,	// (0x0005f290) cale_week_scroll_pane_g4

0x150a,	// (0x0005f2a8) cale_week_scroll_pane_g5

0x1522,	// (0x0005f2c0) cale_week_scroll_pane_g6

0x1542,	// (0x0005f2e0) cale_week_scroll_pane_g7

0x1562,	// (0x0005f300) cale_week_scroll_pane_g8

0x1582,	// (0x0005f320) cale_week_scroll_pane_g9

0x159f,	// (0x0005f33d) cale_week_scroll_pane_g10

0x15bc,	// (0x0005f35a) cale_week_scroll_pane_g11

0x15d9,	// (0x0005f377) cale_week_scroll_pane_g12

0x15f6,	// (0x0005f394) cale_week_scroll_pane_g13

0x161b,	// (0x0005f3b9) cale_week_scroll_pane_g14

0x1644,	// (0x0005f3e2) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0006cf4e) cale_week_scroll_pane_g

0x168d,	// (0x0005f42b) cale_week_time_pane

0x16ad,	// (0x0005f44b) grid_cale_week_pane

0xaa1a,	// (0x000687b8) scroll_pane_cp08

0x16e0,	// (0x0005f47e) cell_cale_week_pane_ParamLimits

0x16e0,	// (0x0005f47e) cell_cale_week_pane

0x1770,	// (0x0005f50e) cale_week_day_heading_pane_t1

0x17b8,	// (0x0005f556) cale_week_day_heading_pane_t2

0x1805,	// (0x0005f5a3) cale_week_day_heading_pane_t3

0x1852,	// (0x0005f5f0) cale_week_day_heading_pane_t4

0x189f,	// (0x0005f63d) cale_week_day_heading_pane_t5

0x18ec,	// (0x0005f68a) cale_week_day_heading_pane_t6

0x1939,	// (0x0005f6d7) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0006cf6f) cale_week_day_heading_pane_t

0xaa3c,	// (0x000687da) bg_cale_side_pane

0x1981,	// (0x0005f71f) cale_week_time_pane_t1

0x19c5,	// (0x0005f763) cale_week_time_pane_t2

0x1a09,	// (0x0005f7a7) cale_week_time_pane_t3

0x1a4d,	// (0x0005f7eb) cale_week_time_pane_t4

0x1a91,	// (0x0005f82f) cale_week_time_pane_t5

0x1ad5,	// (0x0005f873) cale_week_time_pane_t6

0x1b19,	// (0x0005f8b7) cale_week_time_pane_t7

0x1b65,	// (0x0005f903) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0006cf7e) cale_week_time_pane_t

0x1bb3,	// (0x0005f951) cell_cale_week_pane_g2

0x1bd7,	// (0x0005f975) cell_cale_week_pane_g3_ParamLimits

0x1bd7,	// (0x0005f975) cell_cale_week_pane_g3

0xaa4a,	// (0x000687e8) grid_highlight_pane_cp07

0xaa52,	// (0x000687f0) listscroll_gms_pane

0xaa5c,	// (0x000687fa) grid_gms_pane

0xaa65,	// (0x00068803) listscroll_gms_pane_g1

0xaa6d,	// (0x0006880b) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0006cf8f) listscroll_gms_pane_g

0x1bef,	// (0x0005f98d) scroll_pane_cp010

0x1bfa,	// (0x0005f998) cell_gms_pane_ParamLimits

0x1bfa,	// (0x0005f998) cell_gms_pane

0x1c0d,	// (0x0005f9ab) cell_gms_pane_g1

0xaa75,	// (0x00068813) cell_gms_pane_g2

0xaa7d,	// (0x0006881b) cell_gms_pane_g3

0xaa86,	// (0x00068824) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0006cf94) cell_gms_pane_g

0xaa8f,	// (0x0006882d) grid_highlight_pane_cp09

0x4313,	// (0x000620b1) phob_pre_status_pane_g1

0x431b,	// (0x000620b9) phob_pre_status_pane_g2

0x4323,	// (0x000620c1) phob_pre_status_pane_g3

0x432b,	// (0x000620c9) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0006d37f) phob_pre_status_pane_g

0x433b,	// (0x000620d9) phob_pre_status_pane_t1

0x434b,	// (0x000620e9) phob_pre_status_pane_t2

0x435b,	// (0x000620f9) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0006d38a) phob_pre_status_pane_t

0xaa97,	// (0x00068835) bg_list_pane_cp05

0x1c1d,	// (0x0005f9bb) grid_vorec_pane

0x1c29,	// (0x0005f9c7) vorec_t1

0x1c37,	// (0x0005f9d5) vorec_t2

0x1c45,	// (0x0005f9e3) vorec_t3

0x1c53,	// (0x0005f9f1) vorec_t4

0x9c24,	// (0x000679c2) vorec_t5

0x9c32,	// (0x000679d0) vorec_t6

0x0004,

0xf1ff,	// (0x0006cf9d) vorec_t

0x9c40,	// (0x000679de) wait_bar_pane_cp01

0x1c6f,	// (0x0005fa0d) cell_vorec_pane_ParamLimits

0x1c6f,	// (0x0005fa0d) cell_vorec_pane

0x1c84,	// (0x0005fa22) cell_vorec_pane_g1

0xa0b6,	// (0x00067e54) grid_highlight_pane_cp05

0x1c9c,	// (0x0005fa3a) cams_zoom_pane

0x1ca8,	// (0x0005fa46) image_vga_pane

0x1cb7,	// (0x0005fa55) main_camera_pane_g1

0x1cc5,	// (0x0005fa63) main_camera_pane_g2

0x1cd1,	// (0x0005fa6f) main_camera_pane_g3

0x1cdf,	// (0x0005fa7d) main_camera_pane_g4

0x1ced,	// (0x0005fa8b) main_camera_pane_g5

0x1cfb,	// (0x0005fa99) main_camera_pane_g6

0x1d09,	// (0x0005faa7) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0006cfa8) main_camera_pane_g

0x1d17,	// (0x0005fab5) main_camera_pane_t1

0x1d29,	// (0x0005fac7) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0006cfb9) main_camera_pane_t

0x1d4c,	// (0x0005faea) cams_zoom_pane_cp_ParamLimits

0x1d4c,	// (0x0005faea) cams_zoom_pane_cp

0x1d70,	// (0x0005fb0e) image_cif_pane_ParamLimits

0x1d70,	// (0x0005fb0e) image_cif_pane

0x1d8e,	// (0x0005fb2c) image_subqcif_pane

0x1d98,	// (0x0005fb36) main_video_pane_g1_ParamLimits

0x1d98,	// (0x0005fb36) main_video_pane_g1

0x1db8,	// (0x0005fb56) main_video_pane_g2_ParamLimits

0x1db8,	// (0x0005fb56) main_video_pane_g2

0x1de8,	// (0x0005fb86) main_video_pane_g3_ParamLimits

0x1de8,	// (0x0005fb86) main_video_pane_g3

0x1e11,	// (0x0005fbaf) main_video_pane_g4_ParamLimits

0x1e11,	// (0x0005fbaf) main_video_pane_g4

0x1e3a,	// (0x0005fbd8) main_video_pane_g5_ParamLimits

0x1e3a,	// (0x0005fbd8) main_video_pane_g5

0xaaab,	// (0x00068849) main_video_pane_g6_ParamLimits

0xaaab,	// (0x00068849) main_video_pane_g6

0x0006,

0xf220,	// (0x0006cfbe) main_video_pane_g_ParamLimits

0xf220,	// (0x0006cfbe) main_video_pane_g

0x1e5c,	// (0x0005fbfa) main_video_pane_t1_ParamLimits

0x1e5c,	// (0x0005fbfa) main_video_pane_t1

0xaac5,	// (0x00068863) cams_zoom_pane_g1

0xaace,	// (0x0006886c) cams_zoom_pane_g2

0xaad7,	// (0x00068875) cams_zoom_pane_g3

0xaae0,	// (0x0006887e) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0006cfcd) cams_zoom_pane_g

0x1ea6,	// (0x0005fc44) grid_cams_pane

0x1eb4,	// (0x0005fc52) linegrid_cams_pane

0x1ec0,	// (0x0005fc5e) cell_cams_pane_ParamLimits

0x1ec0,	// (0x0005fc5e) cell_cams_pane

0xaae9,	// (0x00068887) cams_burst_image_pane

0xaaf1,	// (0x0006888f) cell_cams_pane_g1

0xa0b6,	// (0x00067e54) grid_highlight_pane_cp03

0xa936,	// (0x000686d4) mp_bg_pane_g1

0xa0b6,	// (0x00067e54) bg_list_pane_cp03

0xc74c,	// (0x0006a4ea) bg_mp_pane

0xc754,	// (0x0006a4f2) grid_mp_pane

0xc75c,	// (0x0006a4fa) media_player_g1

0xc766,	// (0x0006a504) media_player_t1

0xc774,	// (0x0006a512) media_player_t2

0xc782,	// (0x0006a520) media_player_t3

0xc790,	// (0x0006a52e) media_player_t4

0xc79e,	// (0x0006a53c) media_player_t5

0xc7ac,	// (0x0006a54a) media_player_t6

0xc7ba,	// (0x0006a558) media_player_t7

0x0006,

0xf5cb,	// (0x0006d369) media_player_t

0xc7c8,	// (0x0006a566) wait_bar_pane_cp02

0xf5b0,	// (0x0006d34e) main_usb_pane_t

0x430a,	// (0x000620a8) cell_mp_pane

0xa936,	// (0x000686d4) cell_mp_pane_g1

0xa0b6,	// (0x00067e54) grid_highlight_pane_cp06

0xaaf9,	// (0x00068897) grid_skin_colour_pane

0xab01,	// (0x0006889f) list_highlight_pane_cp03

0x1fd4,	// (0x0005fd72) skin_g1

0xab09,	// (0x000688a7) skin_t1

0xab18,	// (0x000688b6) skin_t2

0x0001,

0xf264,	// (0x0006d002) skin_t

0x1fde,	// (0x0005fd7c) cell_skin_colour_pane_ParamLimits

0x1fde,	// (0x0005fd7c) cell_skin_colour_pane

0xab26,	// (0x000688c4) cell_skin_colour_pane_g1

0x205e,	// (0x0005fdfc) call_video_g1_ParamLimits

0x205e,	// (0x0005fdfc) call_video_g1

0x206e,	// (0x0005fe0c) call_video_g2_ParamLimits

0x206e,	// (0x0005fe0c) call_video_g2

0x0001,

0xf269,	// (0x0006d007) call_video_g_ParamLimits

0xf269,	// (0x0006d007) call_video_g

0x20be,	// (0x0005fe5c) call_video_uplink_pane_cp1_ParamLimits

0x20be,	// (0x0005fe5c) call_video_uplink_pane_cp1

0xab38,	// (0x000688d6) call_video_uplink_pane_cp2

0x218c,	// (0x0005ff2a) video_down_crop_pane_ParamLimits

0x218c,	// (0x0005ff2a) video_down_crop_pane

0x227e,	// (0x0006001c) video_down_pane_ParamLimits

0x227e,	// (0x0006001c) video_down_pane

0xab40,	// (0x000688de) video_down_subqcif_pane_ParamLimits

0xab40,	// (0x000688de) video_down_subqcif_pane

0xab5a,	// (0x000688f8) video_down_subqcif_pane_cp_ParamLimits

0xab5a,	// (0x000688f8) video_down_subqcif_pane_cp

0xab82,	// (0x00068920) im_reading_pane_ParamLimits

0xab82,	// (0x00068920) im_reading_pane

0x239b,	// (0x00060139) im_writing_pane_ParamLimits

0x239b,	// (0x00060139) im_writing_pane

0x23b9,	// (0x00060157) im_reading_pane_t1

0xab9c,	// (0x0006893a) list_im_pane

0xabad,	// (0x0006894b) scroll_pane_cp07

0x23fb,	// (0x00060199) im_writing_pane_t1_ParamLimits

0x23fb,	// (0x00060199) im_writing_pane_t1

0xabc6,	// (0x00068964) im_writing_pane_t2_ParamLimits

0xabc6,	// (0x00068964) im_writing_pane_t2

0x0001,

0xf273,	// (0x0006d011) im_writing_pane_t_ParamLimits

0xf273,	// (0x0006d011) im_writing_pane_t

0xa0b6,	// (0x00067e54) input_focus_pane_cp04

0xa0b6,	// (0x00067e54) input_focus_pane_cp05

0x240d,	// (0x000601ab) list_im_single_pane_ParamLimits

0x240d,	// (0x000601ab) list_im_single_pane

0x2426,	// (0x000601c4) list_single_im_pane_t1

0x42ce,	// (0x0006206c) blid_accuracy_pane

0x42d6,	// (0x00062074) blid_compass_pane

0x42e0,	// (0x0006207e) main_location_t1

0x42ee,	// (0x0006208c) main_location_t2

0x42fc,	// (0x0006209a) main_location_t3

0x0002,

0xf5da,	// (0x0006d378) main_location_t

0xa0b6,	// (0x00067e54) aid_levels_location

0xa936,	// (0x000686d4) blid_accuracy_pane_g1

0xa936,	// (0x000686d4) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0006d073) blid_accuracy_pane_g

0xac0e,	// (0x000689ac) wml_content_pane

0xac4c,	// (0x000689ea) wml_button_pane_ParamLimits

0xac4c,	// (0x000689ea) wml_button_pane

0x2435,	// (0x000601d3) wml_list_single_large_pane_ParamLimits

0x2435,	// (0x000601d3) wml_list_single_large_pane

0x2457,	// (0x000601f5) wml_list_single_medium_pane_ParamLimits

0x2457,	// (0x000601f5) wml_list_single_medium_pane

0x247a,	// (0x00060218) wml_list_single_small_pane_ParamLimits

0x247a,	// (0x00060218) wml_list_single_small_pane

0xac60,	// (0x000689fe) wml_selection_box_pane_ParamLimits

0xac60,	// (0x000689fe) wml_selection_box_pane

0xac73,	// (0x00068a11) wml_list_single_pane_t1

0xac82,	// (0x00068a20) wml_list_single_medium_pane_t1

0xac91,	// (0x00068a2f) wml_list_single_large_pane_t1

0xaca0,	// (0x00068a3e) input_focus_pane_cp02_ParamLimits

0xaca0,	// (0x00068a3e) input_focus_pane_cp02

0xacb3,	// (0x00068a51) wml_selection_box_pane_g1

0xacbc,	// (0x00068a5a) wml_selection_box_pane_t1_ParamLimits

0xacbc,	// (0x00068a5a) wml_selection_box_pane_t1

0xa81c,	// (0x000685ba) bg_wml_button_pane_ParamLimits

0xa81c,	// (0x000685ba) bg_wml_button_pane

0xacd4,	// (0x00068a72) wml_button_pane_g1

0xacdc,	// (0x00068a7a) wml_button_pane_t1

0xacd4,	// (0x00068a72) wml_button_bg_pane_g1

0xacec,	// (0x00068a8a) wml_button_bg_pane_g2

0xacf4,	// (0x00068a92) wml_button_bg_pane_g3

0xacfc,	// (0x00068a9a) wml_button_bg_pane_g4

0xad04,	// (0x00068aa2) wml_button_bg_pane_g5

0xad0c,	// (0x00068aaa) wml_button_bg_pane_g6

0xad14,	// (0x00068ab2) wml_button_bg_pane_g7

0xad1c,	// (0x00068aba) wml_button_bg_pane_g8

0xad24,	// (0x00068ac2) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0006d016) wml_button_bg_pane_g

0x24a2,	// (0x00060240) bg_list_pane_cp02

0xad2c,	// (0x00068aca) mce_header_pane_ParamLimits

0xad2c,	// (0x00068aca) mce_header_pane

0xad42,	// (0x00068ae0) mce_icon_pane

0xad42,	// (0x00068ae0) mce_image_pane

0xad4b,	// (0x00068ae9) mce_text_pane_ParamLimits

0xad4b,	// (0x00068ae9) mce_text_pane

0x24ac,	// (0x0006024a) scroll_pane_cp03

0xac44,	// (0x000689e2) scroll_pane_cp04

0xad5e,	// (0x00068afc) scroll_pane_cp05_ParamLimits

0xad5e,	// (0x00068afc) scroll_pane_cp05

0x24b6,	// (0x00060254) mce_header_field_pane_ParamLimits

0x24b6,	// (0x00060254) mce_header_field_pane

0x24d8,	// (0x00060276) mce_header_field_pane_2_ParamLimits

0x24d8,	// (0x00060276) mce_header_field_pane_2

0x24ee,	// (0x0006028c) mce_header_field_pane_3

0x24f6,	// (0x00060294) list_single_mce_message_pane_ParamLimits

0x24f6,	// (0x00060294) list_single_mce_message_pane

0x2515,	// (0x000602b3) list_single_mce_smart_pane_ParamLimits

0x2515,	// (0x000602b3) list_single_mce_smart_pane

0xad6a,	// (0x00068b08) input_focus_pane_cp03

0xad73,	// (0x00068b11) list_header_data_pane

0x253f,	// (0x000602dd) mce_header_field_pane_t1

0x254f,	// (0x000602ed) list_single_mce_header_pane_ParamLimits

0x254f,	// (0x000602ed) list_single_mce_header_pane

0xad7b,	// (0x00068b19) list_single_mce_header_pane_t1

0xad8a,	// (0x00068b28) list_single_mce_message_pane_g1

0xad92,	// (0x00068b30) list_single_mce_message_pane_t1

0x2593,	// (0x00060331) bg_cale_heading_pane_cp01_ParamLimits

0x2593,	// (0x00060331) bg_cale_heading_pane_cp01

0xada0,	// (0x00068b3e) bg_cale_pane_cp02_ParamLimits

0xada0,	// (0x00068b3e) bg_cale_pane_cp02

0x25da,	// (0x00060378) cale_month_corner_pane

0x25f9,	// (0x00060397) cale_month_day_heading_pane_ParamLimits

0x25f9,	// (0x00060397) cale_month_day_heading_pane

0x2650,	// (0x000603ee) cale_month_pane_g1_ParamLimits

0x2650,	// (0x000603ee) cale_month_pane_g1

0x268c,	// (0x0006042a) cale_month_pane_g2_ParamLimits

0x268c,	// (0x0006042a) cale_month_pane_g2

0x26c4,	// (0x00060462) cale_month_pane_g3_ParamLimits

0x26c4,	// (0x00060462) cale_month_pane_g3

0x2718,	// (0x000604b6) cale_month_pane_g4_ParamLimits

0x2718,	// (0x000604b6) cale_month_pane_g4

0x276c,	// (0x0006050a) cale_month_pane_g5_ParamLimits

0x276c,	// (0x0006050a) cale_month_pane_g5

0x27c0,	// (0x0006055e) cale_month_pane_g6_ParamLimits

0x27c0,	// (0x0006055e) cale_month_pane_g6

0x2824,	// (0x000605c2) cale_month_pane_g7_ParamLimits

0x2824,	// (0x000605c2) cale_month_pane_g7

0x2888,	// (0x00060626) cale_month_pane_g8_ParamLimits

0x2888,	// (0x00060626) cale_month_pane_g8

0x28ec,	// (0x0006068a) cale_month_pane_g9_ParamLimits

0x28ec,	// (0x0006068a) cale_month_pane_g9

0x2944,	// (0x000606e2) cale_month_pane_g10_ParamLimits

0x2944,	// (0x000606e2) cale_month_pane_g10

0x2992,	// (0x00060730) cale_month_pane_g11_ParamLimits

0x2992,	// (0x00060730) cale_month_pane_g11

0x29de,	// (0x0006077c) cale_month_pane_g12_ParamLimits

0x29de,	// (0x0006077c) cale_month_pane_g12

0x2a2e,	// (0x000607cc) cale_month_pane_g13_ParamLimits

0x2a2e,	// (0x000607cc) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0006d029) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0006d029) cale_month_pane_g

0x2a7e,	// (0x0006081c) cale_month_week_pane

0x2a9e,	// (0x0006083c) grid_cale_month_pane_ParamLimits

0x2a9e,	// (0x0006083c) grid_cale_month_pane

0x2aec,	// (0x0006088a) cale_month_day_heading_pane_t1

0x2b6e,	// (0x0006090c) cale_month_day_heading_pane_t2

0x2bfb,	// (0x00060999) cale_month_day_heading_pane_t3

0x2c88,	// (0x00060a26) cale_month_day_heading_pane_t4

0x2d15,	// (0x00060ab3) cale_month_day_heading_pane_t5

0x2daa,	// (0x00060b48) cale_month_day_heading_pane_t6

0x2e47,	// (0x00060be5) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0006d044) cale_month_day_heading_pane_t

0xaa3c,	// (0x000687da) bg_cale_side_pane_cp01

0x2ee4,	// (0x00060c82) cale_month_week_pane_t1

0x2efd,	// (0x00060c9b) cale_month_week_pane_t2

0x2f16,	// (0x00060cb4) cale_month_week_pane_t3

0x2f2f,	// (0x00060ccd) cale_month_week_pane_t4

0x2f48,	// (0x00060ce6) cale_month_week_pane_t5

0x2f63,	// (0x00060d01) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0006d053) cale_month_week_pane_t

0x2f84,	// (0x00060d22) cell_cale_month_pane_ParamLimits

0x2f84,	// (0x00060d22) cell_cale_month_pane

0x30d0,	// (0x00060e6e) cell_cale_month_pane_g1

0x30dc,	// (0x00060e7a) cell_cale_month_pane_t1_ParamLimits

0x30dc,	// (0x00060e7a) cell_cale_month_pane_t1

0xaa4a,	// (0x000687e8) grid_highlight_pane_cp08

0xa936,	// (0x000686d4) main_smil_g1

0x30fc,	// (0x00060e9a) smil_status_pane

0xaddf,	// (0x00068b7d) smil_text_pane

0xc66a,	// (0x0006a408) bg_popup_call3_rect_pane_g8

0xc672,	// (0x0006a410) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0006d30c) bg_popup_call3_rect_pane_g

0xc900,	// (0x0006a69e) smil_status_volume_pane_g1

0x310f,	// (0x00060ead) smil_status_pane_t1

0x46c2,	// (0x00062460) volume_smil_pane

0xade9,	// (0x00068b87) list_smil_text_pane

0x3126,	// (0x00060ec4) scroll_pane_cp011

0x3131,	// (0x00060ecf) smil_text_list_pane_t1_ParamLimits

0x3131,	// (0x00060ecf) smil_text_list_pane_t1

0x3183,	// (0x00060f21) aid_volume_smil_ParamLimits

0x3183,	// (0x00060f21) aid_volume_smil

0xa936,	// (0x000686d4) smil_volume_pane_g1

0xa936,	// (0x000686d4) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0006d073) smil_volume_pane_g

0x13d0,	// (0x0005f16e) listscroll_cale_day_pane

0xadf3,	// (0x00068b91) bg_cale_pane

0xae0b,	// (0x00068ba9) list_cale_pane

0xae2e,	// (0x00068bcc) scroll_pane_cp09

0xae3f,	// (0x00068bdd) cale_bg_pane_g1

0xae47,	// (0x00068be5) cale_bg_pane_g2

0xae4f,	// (0x00068bed) cale_bg_pane_g3

0xae57,	// (0x00068bf5) cale_bg_pane_g4

0xae5f,	// (0x00068bfd) cale_bg_pane_g5

0xae67,	// (0x00068c05) cale_bg_pane_g6

0xae6f,	// (0x00068c0d) cale_bg_pane_g7

0xae77,	// (0x00068c15) cale_bg_pane_g8

0xae7f,	// (0x00068c1d) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0006d078) cale_bg_pane_g

0x31a5,	// (0x00060f43) list_cale_time_pane_ParamLimits

0x31a5,	// (0x00060f43) list_cale_time_pane

0xae8f,	// (0x00068c2d) list_cale_time_pane_g1_ParamLimits

0xae8f,	// (0x00068c2d) list_cale_time_pane_g1

0xae9b,	// (0x00068c39) list_cale_time_pane_g2_ParamLimits

0xae9b,	// (0x00068c39) list_cale_time_pane_g2

0x31b9,	// (0x00060f57) list_cale_time_pane_g3_ParamLimits

0x31b9,	// (0x00060f57) list_cale_time_pane_g3

0x31c7,	// (0x00060f65) list_cale_time_pane_g4_ParamLimits

0x31c7,	// (0x00060f65) list_cale_time_pane_g4

0x31d5,	// (0x00060f73) list_cale_time_pane_g5_ParamLimits

0x31d5,	// (0x00060f73) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0006d08b) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0006d08b) list_cale_time_pane_g

0xaeb5,	// (0x00068c53) list_cale_time_pane_t1_ParamLimits

0xaeb5,	// (0x00068c53) list_cale_time_pane_t1

0xaedd,	// (0x00068c7b) list_cale_time_pane_t2_ParamLimits

0xaedd,	// (0x00068c7b) list_cale_time_pane_t2

0x359e,	// (0x0006133c) aid_blid_cardinal_pane

0x35e0,	// (0x0006137e) compass_pane_t4

0xaf05,	// (0x00068ca3) list_cale_time_pane_t4_ParamLimits

0xaf05,	// (0x00068ca3) list_cale_time_pane_t4

0x35ee,	// (0x0006138c) compass_pane_t5

0x35fe,	// (0x0006139c) compass_pane_t6

0x360c,	// (0x000613aa) compass_pane_t7

0xb366,	// (0x00069104) navi_pane_cc_t1

0xb4b3,	// (0x00069251) aid_phob_thumbnail_center_pane

0x3dca,	// (0x00061b68) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0006d098) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0006d098) list_cale_time_pane_t

0x9d0d,	// (0x00067aab) bg_popup_window_pane_cp02_ParamLimits

0x9d0d,	// (0x00067aab) bg_popup_window_pane_cp02

0xaf2d,	// (0x00068ccb) heading_pane_cp01_ParamLimits

0xaf2d,	// (0x00068ccb) heading_pane_cp01

0xaf39,	// (0x00068cd7) loc_req_pane_ParamLimits

0xaf39,	// (0x00068cd7) loc_req_pane

0xaf49,	// (0x00068ce7) loc_type_pane_ParamLimits

0xaf49,	// (0x00068ce7) loc_type_pane

0xaf5b,	// (0x00068cf9) loc_type_pane_t1_ParamLimits

0xaf5b,	// (0x00068cf9) loc_type_pane_t1

0xaf6d,	// (0x00068d0b) loc_type_pane_t2_ParamLimits

0xaf6d,	// (0x00068d0b) loc_type_pane_t2

0xaf7f,	// (0x00068d1d) loc_type_pane_t3_ParamLimits

0xaf7f,	// (0x00068d1d) loc_type_pane_t3

0x0002,

0xf301,	// (0x0006d09f) loc_type_pane_t_ParamLimits

0xf301,	// (0x0006d09f) loc_type_pane_t

0xaf91,	// (0x00068d2f) list_loc_req_pane

0xaf9b,	// (0x00068d39) scroll_pane_cp012

0x31e3,	// (0x00060f81) list_single_loc_request_popup_menu_pane_ParamLimits

0x31e3,	// (0x00060f81) list_single_loc_request_popup_menu_pane

0xafa6,	// (0x00068d44) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xafa6,	// (0x00068d44) list_single_loc_request_popup_menu_pane_g1

0xafb2,	// (0x00068d50) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafb2,	// (0x00068d50) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0006d0a6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0006d0a6) list_single_loc_request_popup_menu_pane_g

0xafbe,	// (0x00068d5c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafbe,	// (0x00068d5c) list_single_loc_request_popup_menu_pane_t1

0x31f5,	// (0x00060f93) bg_popup_window_pane_cp03_ParamLimits

0x31f5,	// (0x00060f93) bg_popup_window_pane_cp03

0x3203,	// (0x00060fa1) heading_loc_req_pane_ParamLimits

0x3203,	// (0x00060fa1) heading_loc_req_pane

0x320f,	// (0x00060fad) popup_dyc_status_message_window_g1_ParamLimits

0x320f,	// (0x00060fad) popup_dyc_status_message_window_g1

0x321b,	// (0x00060fb9) popup_dyc_status_message_window_t1_ParamLimits

0x321b,	// (0x00060fb9) popup_dyc_status_message_window_t1

0x322d,	// (0x00060fcb) popup_dyc_status_message_window_t2_ParamLimits

0x322d,	// (0x00060fcb) popup_dyc_status_message_window_t2

0x323f,	// (0x00060fdd) popup_dyc_status_message_window_t3_ParamLimits

0x323f,	// (0x00060fdd) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0006d0ab) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0006d0ab) popup_dyc_status_message_window_t

0xa0b6,	// (0x00067e54) bg_heading_pane_cp01

0xafd4,	// (0x00068d72) heading_loc_req_pane_g1

0xafdc,	// (0x00068d7a) heading_loc_req_pane_g2

0xafe4,	// (0x00068d82) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0006d0b2) heading_loc_req_pane_g

0xafec,	// (0x00068d8a) heading_loc_req_pane_t1

0xaffc,	// (0x00068d9a) bg_popup_sub_pane_cp01_ParamLimits

0xaffc,	// (0x00068d9a) bg_popup_sub_pane_cp01

0xb00a,	// (0x00068da8) popup_cale_events_window_g1_ParamLimits

0xb00a,	// (0x00068da8) popup_cale_events_window_g1

0xb02a,	// (0x00068dc8) popup_cale_events_window_g2_ParamLimits

0xb02a,	// (0x00068dc8) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0006d0e6) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0006d0e6) popup_cale_events_window_g

0xb04a,	// (0x00068de8) popup_cale_events_window_t1_ParamLimits

0xb04a,	// (0x00068de8) popup_cale_events_window_t1

0xb05c,	// (0x00068dfa) popup_cale_events_window_t2_ParamLimits

0xb05c,	// (0x00068dfa) popup_cale_events_window_t2

0xb09a,	// (0x00068e38) popup_cale_events_window_t3_ParamLimits

0xb09a,	// (0x00068e38) popup_cale_events_window_t3

0xb0d4,	// (0x00068e72) popup_cale_events_window_t4_ParamLimits

0xb0d4,	// (0x00068e72) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0006d0eb) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0006d0eb) popup_cale_events_window_t

0x333a,	// (0x000610d8) call_type_pane

0xb19a,	// (0x00068f38) popup_call_status_window_g1

0x3346,	// (0x000610e4) popup_call_status_window_g2

0x3352,	// (0x000610f0) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0006d0f4) popup_call_status_window_g

0xb10a,	// (0x00068ea8) call_type_pane_g1

0xb113,	// (0x00068eb1) call_type_pane_g2

0x0001,

0xf35d,	// (0x0006d0fb) call_type_pane_g

0xa0b6,	// (0x00067e54) bg_popup_sub_pane_cp02

0xb11c,	// (0x00068eba) listscroll_popup_wml_pane

0xb124,	// (0x00068ec2) list_wml_pane

0xb12e,	// (0x00068ecc) scroll_pane_cp013

0xb139,	// (0x00068ed7) list_single_graphic_popup_wml_pane_ParamLimits

0xb139,	// (0x00068ed7) list_single_graphic_popup_wml_pane

0xa936,	// (0x000686d4) list_single_graphic_popup_wml_pane_g1

0xb14d,	// (0x00068eeb) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0006d100) list_single_graphic_popup_wml_pane_g

0xb1a8,	// (0x00068f46) list_single_graphic_popup_wml_pane_t1

0xb1be,	// (0x00068f5c) aid_call_pane

0xa814,	// (0x000685b2) popup_clock_analogue_window_g1

0xa814,	// (0x000685b2) popup_clock_analogue_window_g2

0x335e,	// (0x000610fc) popup_clock_analogue_window_g3

0x335e,	// (0x000610fc) popup_clock_analogue_window_g4

0xa936,	// (0x000686d4) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0006d105) popup_clock_analogue_window_g

0x3366,	// (0x00061104) popup_clock_analogue_window_t1

0x3374,	// (0x00061112) clock_digital_number_pane_ParamLimits

0x3374,	// (0x00061112) clock_digital_number_pane

0x3380,	// (0x0006111e) clock_digital_number_pane_cp02_ParamLimits

0x3380,	// (0x0006111e) clock_digital_number_pane_cp02

0x338c,	// (0x0006112a) clock_digital_number_pane_cp03_ParamLimits

0x338c,	// (0x0006112a) clock_digital_number_pane_cp03

0x3398,	// (0x00061136) clock_digital_number_pane_cp04_ParamLimits

0x3398,	// (0x00061136) clock_digital_number_pane_cp04

0x33a4,	// (0x00061142) clock_digital_separator_pane_ParamLimits

0x33a4,	// (0x00061142) clock_digital_separator_pane

0x33b0,	// (0x0006114e) popup_clock_digital_window_t1

0xa936,	// (0x000686d4) clock_digital_number_pane_g1

0xa936,	// (0x000686d4) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0006d073) clock_digital_number_pane_g

0xa936,	// (0x000686d4) clock_digital_separator_pane_g1

0xa936,	// (0x000686d4) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0006d073) clock_digital_separator_pane_g

0xa0b6,	// (0x00067e54) bg_popup_window_pane_cp04

0xb1c6,	// (0x00068f64) heading_pane_cp03

0xb1ce,	// (0x00068f6c) listscroll_popup_gms_pane

0xb1d6,	// (0x00068f74) grid_large_graphic_popup_pane

0xb1e0,	// (0x00068f7e) listscroll_popup_gms_pane_g1

0xb1e8,	// (0x00068f86) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0006d110) listscroll_popup_gms_pane_g

0xac44,	// (0x000689e2) scroll_pane_cp014

0x33cd,	// (0x0006116b) cell_large_graphic_popup_pane_ParamLimits

0x33cd,	// (0x0006116b) cell_large_graphic_popup_pane

0x33e7,	// (0x00061185) cell_large_graphic_popup_pane_g1_ParamLimits

0x33e7,	// (0x00061185) cell_large_graphic_popup_pane_g1

0xb1f0,	// (0x00068f8e) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1f0,	// (0x00068f8e) cell_large_graphic_popup_pane_g2

0xb1fc,	// (0x00068f9a) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1fc,	// (0x00068f9a) cell_large_graphic_popup_pane_g3

0xb209,	// (0x00068fa7) cell_large_graphic_popup_pane_g4_ParamLimits

0xb209,	// (0x00068fa7) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0006d115) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0006d115) cell_large_graphic_popup_pane_g

0xb219,	// (0x00068fb7) grid_highlight_pane_cp010

0xa936,	// (0x000686d4) bg_popup_call_pane_g1

0xb223,	// (0x00068fc1) list_single_graphic_popup_conf_pane_ParamLimits

0xb223,	// (0x00068fc1) list_single_graphic_popup_conf_pane

0xb235,	// (0x00068fd3) list_highlight_pane_cp01

0xb23e,	// (0x00068fdc) list_single_graphic_popup_conf_pane_g1

0xb246,	// (0x00068fe4) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0006d11e) list_single_graphic_popup_conf_pane_g

0xb24e,	// (0x00068fec) list_single_graphic_popup_conf_pane_t1

0xb25c,	// (0x00068ffa) linegrid_cams_pane_g1

0x33f3,	// (0x00061191) linegrid_cams_pane_g2

0xaa7d,	// (0x0006881b) linegrid_cams_pane_g3

0xb265,	// (0x00069003) linegrid_cams_pane_g4

0x33fc,	// (0x0006119a) linegrid_cams_pane_g5

0x3405,	// (0x000611a3) linegrid_cams_pane_g6

0xaa86,	// (0x00068824) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0006d123) linegrid_cams_pane_g

0xb26e,	// (0x0006900c) popup_clock_analogue_window

0xb26e,	// (0x0006900c) popup_clock_digital_window

0xa0b6,	// (0x00067e54) popup_phob_thumbnail_window

0xa936,	// (0x000686d4) call_video_uplink_pane_g1

0xb277,	// (0x00069015) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0006d132) call_video_uplink_pane_g

0xb27f,	// (0x0006901d) video_uplink_pane

0xb287,	// (0x00069025) mce_image_pane_g1

0x3410,	// (0x000611ae) mce_image_pane_g2

0x341a,	// (0x000611b8) mce_image_pane_g3

0x3424,	// (0x000611c2) mce_image_pane_g4

0x342c,	// (0x000611ca) mce_image_pane_g5

0x0004,

0xf399,	// (0x0006d137) mce_image_pane_g

0xb291,	// (0x0006902f) control_top_pane_stacon_cp01_ParamLimits

0xb291,	// (0x0006902f) control_top_pane_stacon_cp01

0xb2a5,	// (0x00069043) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2a5,	// (0x00069043) uni_indicator_pane_stacon_cp01

0xb2b6,	// (0x00069054) bg_popup_sub_pane_cp03

0x3434,	// (0x000611d2) chi_dic_find_pane

0x343c,	// (0x000611da) listscroll_chi_dic_pane

0x3445,	// (0x000611e3) main_pane_chidic_g1

0x3458,	// (0x000611f6) chi_dic_find_pane_t1

0xb2c0,	// (0x0006905e) find_chidic_pane

0xb2c9,	// (0x00069067) chi_dic_list_pane_ParamLimits

0xb2c9,	// (0x00069067) chi_dic_list_pane

0xb2da,	// (0x00069078) scroll_pane_cp020

0x3466,	// (0x00061204) find_chidic_pane_t1

0xa0b6,	// (0x00067e54) input_focus_pane_cp06

0x3475,	// (0x00061213) list_chi_dic_pane_ParamLimits

0x3475,	// (0x00061213) list_chi_dic_pane

0x348a,	// (0x00061228) list_chi_dic_pane_t1_ParamLimits

0x348a,	// (0x00061228) list_chi_dic_pane_t1

0xa0b6,	// (0x00067e54) list_highlight_pane_cp020

0xb2e2,	// (0x00069080) bg_cale_heading_pane_g1

0x349d,	// (0x0006123b) bg_cale_heading_pane_g2

0x34a5,	// (0x00061243) bg_cale_heading_pane_g3

0x34ad,	// (0x0006124b) bg_cale_heading_pane_g4

0x34b7,	// (0x00061255) bg_cale_heading_pane_g5

0x34c1,	// (0x0006125f) bg_cale_heading_pane_g6

0x34c9,	// (0x00061267) bg_cale_heading_pane_g7

0x34d1,	// (0x0006126f) bg_cale_heading_pane_g8

0x34db,	// (0x00061279) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0006d142) bg_cale_heading_pane_g

0xb2e2,	// (0x00069080) bg_cale_side_pane_g1

0x34e5,	// (0x00061283) bg_cale_side_pane_g2

0x34ef,	// (0x0006128d) bg_cale_side_pane_g3

0x34f9,	// (0x00061297) bg_cale_side_pane_g4

0x3503,	// (0x000612a1) bg_cale_side_pane_g5

0x350d,	// (0x000612ab) bg_cale_side_pane_g6

0x3517,	// (0x000612b5) bg_cale_side_pane_g7

0x3521,	// (0x000612bf) bg_cale_side_pane_g8

0x3529,	// (0x000612c7) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0006d155) bg_cale_side_pane_g

0x3531,	// (0x000612cf) popup_call_status_window_ParamLimits

0x3531,	// (0x000612cf) popup_call_status_window

0xb2ea,	// (0x00069088) stacon_top_pane

0xb2f2,	// (0x00069090) status_pane_ParamLimits

0xb2f2,	// (0x00069090) status_pane

0xb307,	// (0x000690a5) status_small_pane

0xb30f,	// (0x000690ad) control_pane

0xa0b6,	// (0x00067e54) stacon_bottom_pane

0xb317,	// (0x000690b5) list_single_mce_smart_pane_t1_ParamLimits

0xb317,	// (0x000690b5) list_single_mce_smart_pane_t1

0xb32a,	// (0x000690c8) list_single_mce_smart_pane_t2_ParamLimits

0xb32a,	// (0x000690c8) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0006d168) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0006d168) list_single_mce_smart_pane_t

0x353d,	// (0x000612db) compass_pane

0x3548,	// (0x000612e6) main_location2_pane_t1

0x355e,	// (0x000612fc) main_location2_pane_t2

0x3574,	// (0x00061312) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0006d16d) main_location2_pane_t

0xb349,	// (0x000690e7) compass_pane_g1_ParamLimits

0xb349,	// (0x000690e7) compass_pane_g1

0x35c2,	// (0x00061360) compass_pane_t1

0x35d1,	// (0x0006136f) compass_pane_t2

0x0005,

0xf3d8,	// (0x0006d176) compass_pane_t

0x361c,	// (0x000613ba) text_secondary_cp61

0xb35d,	// (0x000690fb) navi_pane_cams_g5

0xb380,	// (0x0006911e) navi_pane_im_t1

0xb38e,	// (0x0006912c) navi_pane_mp_g1_ParamLimits

0xb38e,	// (0x0006912c) navi_pane_mp_g1

0xb3a2,	// (0x00069140) navi_pane_mp_g2_ParamLimits

0xb3a2,	// (0x00069140) navi_pane_mp_g2

0xb3ae,	// (0x0006914c) navi_pane_mp_g3_ParamLimits

0xb3ae,	// (0x0006914c) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0006d18a) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0006d18a) navi_pane_mp_g

0xb3ba,	// (0x00069158) navi_pane_mp_t1

0xb3c8,	// (0x00069166) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0006d191) navi_pane_mp_t

0xb404,	// (0x000691a2) navi_pane_vt_g1

0xb3ba,	// (0x00069158) navi_pane_vt_t1

0xb40c,	// (0x000691aa) navi_slider_pane

0xaa97,	// (0x00068835) zooming_pane

0xb414,	// (0x000691b2) navi_slider_pane_g1

0x3751,	// (0x000614ef) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0006d198) navi_slider_pane_g

0xb438,	// (0x000691d6) aid_levels_zoom

0xb440,	// (0x000691de) zooming_pane_g1

0xb448,	// (0x000691e6) zooming_pane_g2

0xb448,	// (0x000691e6) zooming_pane_g3

0x0002,

0xf409,	// (0x0006d1a7) zooming_pane_g

0xb450,	// (0x000691ee) level_10_zoom

0xb459,	// (0x000691f7) level_11_zoom

0xb462,	// (0x00069200) level_1_zoom

0xb46b,	// (0x00069209) level_2_zoom

0xb474,	// (0x00069212) level_3_zoom

0xb47d,	// (0x0006921b) level_4_zoom

0xb486,	// (0x00069224) level_5_zoom

0xb48f,	// (0x0006922d) level_6_zoom

0xb498,	// (0x00069236) level_7_zoom

0xb4a1,	// (0x0006923f) level_8_zoom

0xb4aa,	// (0x00069248) level_9_zoom

0xb4bb,	// (0x00069259) popup_phob_thumbnail_window_g1

0xb4c3,	// (0x00069261) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0006d1ae) popup_phob_thumbnail_window_g

0xc7d0,	// (0x0006a56e) level_1_location

0xc7d8,	// (0x0006a576) level_2_location

0xc7e0,	// (0x0006a57e) level_3_location

0xc7e8,	// (0x0006a586) level_4_location

0xaa97,	// (0x00068835) level_5_location

0x3763,	// (0x00061501) mce_icon_pane_g1

0x376b,	// (0x00061509) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0006d1b3) mce_icon_pane_g

0x3773,	// (0x00061511) main_mup_pane_g1_ParamLimits

0x3773,	// (0x00061511) main_mup_pane_g1

0x378b,	// (0x00061529) main_mup_pane_g2_ParamLimits

0x378b,	// (0x00061529) main_mup_pane_g2

0x37a7,	// (0x00061545) main_mup_pane_g3_ParamLimits

0x37a7,	// (0x00061545) main_mup_pane_g3

0x37c3,	// (0x00061561) main_mup_pane_g4_ParamLimits

0x37c3,	// (0x00061561) main_mup_pane_g4

0x37df,	// (0x0006157d) main_mup_pane_g5_ParamLimits

0x37df,	// (0x0006157d) main_mup_pane_g5

0x3800,	// (0x0006159e) main_mup_pane_g6_ParamLimits

0x3800,	// (0x0006159e) main_mup_pane_g6

0x3820,	// (0x000615be) main_mup_pane_g7_ParamLimits

0x3820,	// (0x000615be) main_mup_pane_g7

0x3844,	// (0x000615e2) main_mup_pane_g8_ParamLimits

0x3844,	// (0x000615e2) main_mup_pane_g8

0x3868,	// (0x00061606) main_mup_pane_g9_ParamLimits

0x3868,	// (0x00061606) main_mup_pane_g9

0x388b,	// (0x00061629) main_mup_pane_g10_ParamLimits

0x388b,	// (0x00061629) main_mup_pane_g10

0x38ae,	// (0x0006164c) main_mup_pane_g11_ParamLimits

0x38ae,	// (0x0006164c) main_mup_pane_g11

0x38ce,	// (0x0006166c) main_mup_pane_g12_ParamLimits

0x38ce,	// (0x0006166c) main_mup_pane_g12

0x38dc,	// (0x0006167a) main_mup_pane_g13_ParamLimits

0x38dc,	// (0x0006167a) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0006d1b8) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0006d1b8) main_mup_pane_g

0x38f2,	// (0x00061690) main_mup_pane_t1_ParamLimits

0x38f2,	// (0x00061690) main_mup_pane_t1

0x3911,	// (0x000616af) main_mup_pane_t2_ParamLimits

0x3911,	// (0x000616af) main_mup_pane_t2

0x392b,	// (0x000616c9) main_mup_pane_t3_ParamLimits

0x392b,	// (0x000616c9) main_mup_pane_t3

0x3945,	// (0x000616e3) main_mup_pane_t4_ParamLimits

0x3945,	// (0x000616e3) main_mup_pane_t4

0x3957,	// (0x000616f5) main_mup_pane_t5_ParamLimits

0x3957,	// (0x000616f5) main_mup_pane_t5

0x3969,	// (0x00061707) main_mup_pane_t6_ParamLimits

0x3969,	// (0x00061707) main_mup_pane_t6

0x0005,

0xf435,	// (0x0006d1d3) main_mup_pane_t_ParamLimits

0xf435,	// (0x0006d1d3) main_mup_pane_t

0x397f,	// (0x0006171d) mup_progress_pane_ParamLimits

0x397f,	// (0x0006171d) mup_progress_pane

0x398b,	// (0x00061729) mup_visualizer_pane_ParamLimits

0x398b,	// (0x00061729) mup_visualizer_pane

0x39c9,	// (0x00061767) mup_volume_pane_ParamLimits

0x39c9,	// (0x00061767) mup_volume_pane

0xb19a,	// (0x00068f38) mup_visualizer_pane_g1_ParamLimits

0xb19a,	// (0x00068f38) mup_visualizer_pane_g1

0xb19a,	// (0x00068f38) mup_visualizer_pane_g2_ParamLimits

0xb19a,	// (0x00068f38) mup_visualizer_pane_g2

0xb349,	// (0x000690e7) mup_visualizer_pane_g3_ParamLimits

0xb349,	// (0x000690e7) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0006d1e0) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0006d1e0) mup_visualizer_pane_g

0xa936,	// (0x000686d4) mup_volume_pane_g1

0xb4d3,	// (0x00069271) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0006d1e7) mup_volume_pane_g

0xa936,	// (0x000686d4) mup_progress_pane_g1

0xb4dc,	// (0x0006927a) mup_progress_pane_g2

0xb4e5,	// (0x00069283) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0006d1ec) mup_progress_pane_g

0xa0b6,	// (0x00067e54) bg_popup_window_pane_cp05

0xb4ee,	// (0x0006928c) heading_pane_cp02_ParamLimits

0xb4ee,	// (0x0006928c) heading_pane_cp02

0xb50a,	// (0x000692a8) list_popup_blid_pane

0xb512,	// (0x000692b0) list_blid_sat_info_pane_ParamLimits

0xb512,	// (0x000692b0) list_blid_sat_info_pane

0xb525,	// (0x000692c3) list_blid_sat_info_pane_g1

0xb52d,	// (0x000692cb) list_blid_sat_info_pane_t1

0x3ae8,	// (0x00061886) mup_equalizer_pane_ParamLimits

0x3ae8,	// (0x00061886) mup_equalizer_pane

0x3b09,	// (0x000618a7) mup_equalizer_pane_cp1_ParamLimits

0x3b09,	// (0x000618a7) mup_equalizer_pane_cp1

0x3b2a,	// (0x000618c8) mup_equalizer_pane_cp2_ParamLimits

0x3b2a,	// (0x000618c8) mup_equalizer_pane_cp2

0x3b4b,	// (0x000618e9) mup_equalizer_pane_cp3_ParamLimits

0x3b4b,	// (0x000618e9) mup_equalizer_pane_cp3

0x3b70,	// (0x0006190e) mup_equalizer_pane_cp4_ParamLimits

0x3b70,	// (0x0006190e) mup_equalizer_pane_cp4

0x3b95,	// (0x00061933) mup_equalizer_pane_cp5

0x3bad,	// (0x0006194b) mup_equalizer_pane_cp6

0x3bc5,	// (0x00061963) mup_equalizer_pane_cp7

0xc6ea,	// (0x0006a488) bg_popup_call_poc_act_pane_g9

0xc6f2,	// (0x0006a490) bg_popup_call_poc_act_pane_g10

0xc6fa,	// (0x0006a498) bg_popup_call_poc_act_pane_g11

0x000a,

0xa81c,	// (0x000685ba) mup_scale_pane

0xa936,	// (0x000686d4) mup_scale_pane_g1

0xb53b,	// (0x000692d9) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0006d208) mup_scale_pane_g

0xb55f,	// (0x000692fd) msg_data_pane

0xb567,	// (0x00069305) scroll_pane_cp017

0x3bef,	// (0x0006198d) bg_list_pane_cp04_ParamLimits

0x3bef,	// (0x0006198d) bg_list_pane_cp04

0xb56f,	// (0x0006930d) msg_data_pane_g1

0x3c17,	// (0x000619b5) msg_data_pane_g2

0x3c21,	// (0x000619bf) msg_data_pane_g3

0x3c2b,	// (0x000619c9) msg_data_pane_g4

0x3c33,	// (0x000619d1) msg_data_pane_g5

0x3c3b,	// (0x000619d9) msg_data_pane_g6

0x3c43,	// (0x000619e1) msg_data_pane_g7

0x0006,

0xf479,	// (0x0006d217) msg_data_pane_g

0x3c4b,	// (0x000619e9) msg_text_pane_ParamLimits

0x3c4b,	// (0x000619e9) msg_text_pane

0x3c73,	// (0x00061a11) qrid_highlight_pane_cp011_ParamLimits

0x3c73,	// (0x00061a11) qrid_highlight_pane_cp011

0xa0b6,	// (0x00067e54) msg_body_pane

0xa0b6,	// (0x00067e54) msg_header_pane

0xb580,	// (0x0006931e) input_focus_pane_cp07

0xb595,	// (0x00069333) msg_header_pane_t1_ParamLimits

0xb595,	// (0x00069333) msg_header_pane_t1

0xa2ab,	// (0x00068049) msg_header_pane_t2_ParamLimits

0xa2ab,	// (0x00068049) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0006d22b) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0006d22b) msg_header_pane_t

0xb5a7,	// (0x00069345) msg_body_pane_g1

0x3c97,	// (0x00061a35) msg_body_pane_t1_ParamLimits

0x3c97,	// (0x00061a35) msg_body_pane_t1

0xa2bd,	// (0x0006805b) msg_body_pane_t2_ParamLimits

0xa2bd,	// (0x0006805b) msg_body_pane_t2

0xa2cf,	// (0x0006806d) msg_body_pane_t3_ParamLimits

0xa2cf,	// (0x0006806d) msg_body_pane_t3

0x0002,

0xf492,	// (0x0006d230) msg_body_pane_t_ParamLimits

0xf492,	// (0x0006d230) msg_body_pane_t

0x3d1a,	// (0x00061ab8) main_viewer_pane_g1_ParamLimits

0x3d1a,	// (0x00061ab8) main_viewer_pane_g1

0x3d26,	// (0x00061ac4) main_viewer_pane_g2_ParamLimits

0x3d26,	// (0x00061ac4) main_viewer_pane_g2

0x3d32,	// (0x00061ad0) main_viewer_pane_g3_ParamLimits

0x3d32,	// (0x00061ad0) main_viewer_pane_g3

0x3d43,	// (0x00061ae1) main_viewer_pane_g4_ParamLimits

0x3d43,	// (0x00061ae1) main_viewer_pane_g4

0x3d54,	// (0x00061af2) main_viewer_pane_g5_ParamLimits

0x3d54,	// (0x00061af2) main_viewer_pane_g5

0x3d54,	// (0x00061af2) main_viewer_pane_g7_ParamLimits

0x3d54,	// (0x00061af2) main_viewer_pane_g7

0x3d66,	// (0x00061b04) main_viewer_pane_g8_ParamLimits

0x3d66,	// (0x00061b04) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0006d240) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0006d240) main_viewer_pane_g

0xb5af,	// (0x0006934d) viewer_content_pane_ParamLimits

0xb5af,	// (0x0006934d) viewer_content_pane

0x3d9e,	// (0x00061b3c) main_postcard_pane_g1_ParamLimits

0x3d9e,	// (0x00061b3c) main_postcard_pane_g1

0x3dac,	// (0x00061b4a) main_postcard_pane_g2_ParamLimits

0x3dac,	// (0x00061b4a) main_postcard_pane_g2

0x3dba,	// (0x00061b58) main_postcard_pane_g3_ParamLimits

0x3dba,	// (0x00061b58) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0006d251) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0006d251) main_postcard_pane_g

0x3dca,	// (0x00061b68) main_postcard_pane_g4

0xc913,	// (0x0006a6b1) smil_status_volume_pane_g2

0x3df6,	// (0x00061b94) postcard_pane_ParamLimits

0x3df6,	// (0x00061b94) postcard_pane

0xb19a,	// (0x00068f38) postcard_pane_g1_ParamLimits

0xb19a,	// (0x00068f38) postcard_pane_g1

0x3e30,	// (0x00061bce) postcard_pane_g2_ParamLimits

0x3e30,	// (0x00061bce) postcard_pane_g2

0x3e3c,	// (0x00061bda) postcard_pane_g3_ParamLimits

0x3e3c,	// (0x00061bda) postcard_pane_g3

0xb5bd,	// (0x0006935b) postcard_pane_g4_ParamLimits

0xb5bd,	// (0x0006935b) postcard_pane_g4

0x3e48,	// (0x00061be6) postcard_pane_g5_ParamLimits

0x3e48,	// (0x00061be6) postcard_pane_g5

0x3e54,	// (0x00061bf2) postcard_pane_g6_ParamLimits

0x3e54,	// (0x00061bf2) postcard_pane_g6

0xb5cb,	// (0x00069369) postcard_pane_g7_ParamLimits

0xb5cb,	// (0x00069369) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0006d25e) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0006d25e) postcard_pane_g

0x3e62,	// (0x00061c00) main_mp2_pane_g1_ParamLimits

0x3e62,	// (0x00061c00) main_mp2_pane_g1

0x3e70,	// (0x00061c0e) main_mp2_pane_g2_ParamLimits

0x3e70,	// (0x00061c0e) main_mp2_pane_g2

0x3e7c,	// (0x00061c1a) main_mp2_pane_g3_ParamLimits

0x3e7c,	// (0x00061c1a) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0006d26d) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0006d26d) main_mp2_pane_g

0x3e88,	// (0x00061c26) main_mp2_pane_t1_ParamLimits

0x3e88,	// (0x00061c26) main_mp2_pane_t1

0x3e9f,	// (0x00061c3d) main_mp2_pane_t2_ParamLimits

0x3e9f,	// (0x00061c3d) main_mp2_pane_t2

0x3eb3,	// (0x00061c51) main_mp2_pane_t3_ParamLimits

0x3eb3,	// (0x00061c51) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0006d274) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0006d274) main_mp2_pane_t

0xb5d9,	// (0x00069377) pec_content_pane_ParamLimits

0xb5d9,	// (0x00069377) pec_content_pane

0xac44,	// (0x000689e2) scroll_pane_cp015

0xb5eb,	// (0x00069389) pec_attribute_pane_ParamLimits

0xb5eb,	// (0x00069389) pec_attribute_pane

0x3ec5,	// (0x00061c63) pec_content_pane_g1_ParamLimits

0x3ec5,	// (0x00061c63) pec_content_pane_g1

0xb5fb,	// (0x00069399) pec_content_pane_t1_ParamLimits

0xb5fb,	// (0x00069399) pec_content_pane_t1

0xb60d,	// (0x000693ab) pec_content_pane_t2_ParamLimits

0xb60d,	// (0x000693ab) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0006d27b) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0006d27b) pec_content_pane_t

0x3ed1,	// (0x00061c6f) list_single_graphic_pane_cp01_ParamLimits

0x3ed1,	// (0x00061c6f) list_single_graphic_pane_cp01

0xa81c,	// (0x000685ba) bg_popup_sub_pane_cp04

0xb61f,	// (0x000693bd) popup_mup_playback_window_g1

0xb62b,	// (0x000693c9) popup_mup_playback_window_t1

0xb640,	// (0x000693de) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0006d280) popup_mup_playback_window_t

0xb677,	// (0x00069415) main_image_pane_g1_ParamLimits

0xb677,	// (0x00069415) main_image_pane_g1

0xb6ba,	// (0x00069458) scroll_pane_cp018_ParamLimits

0xb6ba,	// (0x00069458) scroll_pane_cp018

0xb6d2,	// (0x00069470) scroll_pane_cp016_ParamLimits

0xb6d2,	// (0x00069470) scroll_pane_cp016

0x3f5f,	// (0x00061cfd) smil2_image_pane_ParamLimits

0x3f5f,	// (0x00061cfd) smil2_image_pane

0x3f95,	// (0x00061d33) smil2_root_pane_ParamLimits

0x3f95,	// (0x00061d33) smil2_root_pane

0x3fc1,	// (0x00061d5f) smil2_text_pane_ParamLimits

0x3fc1,	// (0x00061d5f) smil2_text_pane

0xa0b6,	// (0x00067e54) bg_list_pane_cp06

0xb70e,	// (0x000694ac) grid_radio_pane

0xa0b6,	// (0x00067e54) bg_popup_window_pane_cp06

0xb718,	// (0x000694b6) main_fmradio_pane_t1

0xb1c6,	// (0x00068f64) heading_pane_cp04

0xb726,	// (0x000694c4) main_fmradio_pane_t2

0xc702,	// (0x0006a4a0) popup_cale_lunar_info_window_g1

0xb734,	// (0x000694d2) main_fmradio_pane_t3

0xc70a,	// (0x0006a4a8) popup_cale_lunar_info_window_g2

0xb744,	// (0x000694e2) main_fmradio_pane_t4

0x0001,

0xb752,	// (0x000694f0) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0006d35b) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0006d295) main_fmradio_pane_t

0xb760,	// (0x000694fe) wait_bar_pane_cp03

0xb768,	// (0x00069506) cell_fmradio_pane_ParamLimits

0xb768,	// (0x00069506) cell_fmradio_pane

0xb5cb,	// (0x00069369) cell_fmradio_pane_g1_ParamLimits

0xb5cb,	// (0x00069369) cell_fmradio_pane_g1

0xa0b6,	// (0x00067e54) grid_highlight_pane_cp011

0xb77d,	// (0x0006951b) poc_content_pane_ParamLimits

0xb77d,	// (0x0006951b) poc_content_pane

0xb78f,	// (0x0006952d) scroll_pane_cp019

0x4001,	// (0x00061d9f) popup_call_poc_act_window_ParamLimits

0x4001,	// (0x00061d9f) popup_call_poc_act_window

0x400e,	// (0x00061dac) popup_call_poc_inact_window_ParamLimits

0x400e,	// (0x00061dac) popup_call_poc_inact_window

0xf594,	// (0x0006d332) bg_popup_call_poc_act_pane_g

0xc67a,	// (0x0006a418) bg_popup_call_poc_inact_pane_g1

0xc682,	// (0x0006a420) bg_popup_call_poc_inact_pane_g2

0xb797,	// (0x00069535) popup_call_poc_act_window_g2

0xc68a,	// (0x0006a428) bg_popup_call_poc_inact_pane_g3

0xc692,	// (0x0006a430) bg_popup_call_poc_inact_pane_g4

0xc69a,	// (0x0006a438) bg_popup_call_poc_inact_pane_g5

0xb79f,	// (0x0006953d) popup_call_poc_act_window_t1_ParamLimits

0xb79f,	// (0x0006953d) popup_call_poc_act_window_t1

0xb7c7,	// (0x00069565) popup_call_poc_act_window_t2_ParamLimits

0xb7c7,	// (0x00069565) popup_call_poc_act_window_t2

0xb7ef,	// (0x0006958d) popup_call_poc_act_window_t3_ParamLimits

0xb7ef,	// (0x0006958d) popup_call_poc_act_window_t3

0xb817,	// (0x000695b5) popup_call_poc_act_window_t4_ParamLimits

0xb817,	// (0x000695b5) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0006d2a0) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0006d2a0) popup_call_poc_act_window_t

0xc6a2,	// (0x0006a440) bg_popup_call_poc_inact_pane_g6

0xc6aa,	// (0x0006a448) bg_popup_call_poc_inact_pane_g7

0xc6b2,	// (0x0006a450) bg_popup_call_poc_inact_pane_g8

0xb829,	// (0x000695c7) popup_call_poc_inact_window_g2

0xc6ba,	// (0x0006a458) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0006d31f) bg_popup_call_poc_inact_pane_g

0xb831,	// (0x000695cf) popup_call_poc_inact_window_t1_ParamLimits

0xb831,	// (0x000695cf) popup_call_poc_inact_window_t1

0xb846,	// (0x000695e4) popup_call_poc_inact_window_t2_ParamLimits

0xb846,	// (0x000695e4) popup_call_poc_inact_window_t2

0xb85b,	// (0x000695f9) popup_call_poc_inact_window_t3_ParamLimits

0xb85b,	// (0x000695f9) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0006d2a9) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0006d2a9) popup_call_poc_inact_window_t

0xc886,	// (0x0006a624) context_pane_ParamLimits

0x461d,	// (0x000623bb) signal_pane_ParamLimits

0xaa97,	// (0x00068835) main_call2_pane

0xc874,	// (0x0006a612) popup_phob_thumbnail2_window_ParamLimits

0xc874,	// (0x0006a612) popup_phob_thumbnail2_window

0x3cc8,	// (0x00061a66) aid_hotspot_pointer_arrow_pane

0x3cd0,	// (0x00061a6e) aid_hotspot_pointer_hand_pane

0x4333,	// (0x000620d1) phob_pre_status_pane_g5

0x1c9c,	// (0x0005fa3a) cams_zoom_pane_ParamLimits

0x1ca8,	// (0x0005fa46) image_vga_pane_ParamLimits

0x1cb7,	// (0x0005fa55) main_camera_pane_g1_ParamLimits

0x1cc5,	// (0x0005fa63) main_camera_pane_g2_ParamLimits

0x1cd1,	// (0x0005fa6f) main_camera_pane_g3_ParamLimits

0x1cdf,	// (0x0005fa7d) main_camera_pane_g4_ParamLimits

0x1ced,	// (0x0005fa8b) main_camera_pane_g5_ParamLimits

0x1cfb,	// (0x0005fa99) main_camera_pane_g6_ParamLimits

0x1d09,	// (0x0005faa7) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0006cfa8) main_camera_pane_g_ParamLimits

0x1d17,	// (0x0005fab5) main_camera_pane_t1_ParamLimits

0x1d29,	// (0x0005fac7) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0006cfb9) main_camera_pane_t_ParamLimits

0xa81c,	// (0x000685ba) bg_popup_preview_window_pane_cp01_ParamLimits

0xa81c,	// (0x000685ba) bg_popup_preview_window_pane_cp01

0xb870,	// (0x0006960e) popup_phob_thumbnail2_window_g1_ParamLimits

0xb870,	// (0x0006960e) popup_phob_thumbnail2_window_g1

0xa0b6,	// (0x00067e54) call2_cli_visual_pane

0x402a,	// (0x00061dc8) popup_call2_audio_conf_window_ParamLimits

0x402a,	// (0x00061dc8) popup_call2_audio_conf_window

0x4043,	// (0x00061de1) popup_call2_audio_first_window_ParamLimits

0x4043,	// (0x00061de1) popup_call2_audio_first_window

0x40e1,	// (0x00061e7f) popup_call2_audio_in_window_ParamLimits

0x40e1,	// (0x00061e7f) popup_call2_audio_in_window

0x4125,	// (0x00061ec3) popup_call2_audio_out_window_ParamLimits

0x4125,	// (0x00061ec3) popup_call2_audio_out_window

0x418f,	// (0x00061f2d) popup_call2_audio_second_window_ParamLimits

0x418f,	// (0x00061f2d) popup_call2_audio_second_window

0x41ed,	// (0x00061f8b) popup_call2_audio_wait_window_ParamLimits

0x41ed,	// (0x00061f8b) popup_call2_audio_wait_window

0xa0b6,	// (0x00067e54) bg_popup_call2_act_pane_cp03

0xa7fe,	// (0x0006859c) list_conf_pane_cp

0xb87c,	// (0x0006961a) popup_call2_audio_conf_window_t1

0xb88a,	// (0x00069628) list_single_graphic_popup_conf2_pane_ParamLimits

0xb88a,	// (0x00069628) list_single_graphic_popup_conf2_pane

0xb235,	// (0x00068fd3) list_highlight_pane_cp04

0xb89d,	// (0x0006963b) list_single_graphic_popup_conf2_pane_g1

0xb246,	// (0x00068fe4) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0006d2b0) list_single_graphic_popup_conf2_pane_g

0xb8a7,	// (0x00069645) list_single_graphic_popup_conf2_pane_t1

0xb8b5,	// (0x00069653) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8b5,	// (0x00069653) bg_popup_call2_act_pane_cp01

0xb93f,	// (0x000696dd) call_type_pane_cp05_ParamLimits

0xb93f,	// (0x000696dd) call_type_pane_cp05

0xb993,	// (0x00069731) popup_call2_audio_second_window_g1_ParamLimits

0xb993,	// (0x00069731) popup_call2_audio_second_window_g1

0xb9e7,	// (0x00069785) popup_call2_audio_second_window_g2_ParamLimits

0xb9e7,	// (0x00069785) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0006d2b5) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0006d2b5) popup_call2_audio_second_window_g

0xba4c,	// (0x000697ea) popup_call2_audio_second_window_t1_ParamLimits

0xba4c,	// (0x000697ea) popup_call2_audio_second_window_t1

0xbb07,	// (0x000698a5) popup_call2_audio_second_window_t2_ParamLimits

0xbb07,	// (0x000698a5) popup_call2_audio_second_window_t2

0xbb5a,	// (0x000698f8) popup_call2_audio_second_window_t3_ParamLimits

0xbb5a,	// (0x000698f8) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0006d2bc) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0006d2bc) popup_call2_audio_second_window_t

0xa0b6,	// (0x00067e54) bg_popup_call2_in_pane_cp02

0xa0c0,	// (0x00067e5e) call_type_pane_cp04

0xa0c8,	// (0x00067e66) popup_call2_audio_wait_window_g1

0xa0d0,	// (0x00067e6e) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0006ce97) popup_call2_audio_wait_window_g

0xa0d8,	// (0x00067e76) popup_call2_audio_wait_window_t3

0xbc4d,	// (0x000699eb) bg_popup_call2_act_pane_ParamLimits

0xbc4d,	// (0x000699eb) bg_popup_call2_act_pane

0xbd0d,	// (0x00069aab) call_type_pane_cp03_ParamLimits

0xbd0d,	// (0x00069aab) call_type_pane_cp03

0xbd71,	// (0x00069b0f) popup_call2_audio_first_window_g1_ParamLimits

0xbd71,	// (0x00069b0f) popup_call2_audio_first_window_g1

0xbde1,	// (0x00069b7f) popup_call2_audio_first_window_g2_ParamLimits

0xbde1,	// (0x00069b7f) popup_call2_audio_first_window_g2

0xb19a,	// (0x00068f38) popup_call2_audio_first_window_g3_ParamLimits

0xb19a,	// (0x00068f38) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0006d2c5) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0006d2c5) popup_call2_audio_first_window_g

0xbebf,	// (0x00069c5d) popup_call2_audio_first_window_t1_ParamLimits

0xbebf,	// (0x00069c5d) popup_call2_audio_first_window_t1

0xbfc2,	// (0x00069d60) popup_call2_audio_first_window_t4_ParamLimits

0xbfc2,	// (0x00069d60) popup_call2_audio_first_window_t4

0xc0a5,	// (0x00069e43) popup_call2_audio_first_window_t5_ParamLimits

0xc0a5,	// (0x00069e43) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0006d2d0) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0006d2d0) popup_call2_audio_first_window_t

0xa814,	// (0x000685b2) bg_popup_call2_act_pane_g1

0xc714,	// (0x0006a4b2) popup_cale_lunar_info_window_t1

0xc722,	// (0x0006a4c0) popup_cale_lunar_info_window_t2

0xc730,	// (0x0006a4ce) popup_cale_lunar_info_window_t3

0xa0b6,	// (0x00067e54) bg_popup_call2_bubble_pane

0xc1a6,	// (0x00069f44) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1a6,	// (0x00069f44) bg_popup_call2_in_pane_cp01

0x9d92,	// (0x00067b30) call_type_pane_cp02

0xc1ee,	// (0x00069f8c) popup_call2_audio_out_window_g1_ParamLimits

0xc1ee,	// (0x00069f8c) popup_call2_audio_out_window_g1

0xc21a,	// (0x00069fb8) popup_call2_audio_out_window_g2_ParamLimits

0xc21a,	// (0x00069fb8) popup_call2_audio_out_window_g2

0xc242,	// (0x00069fe0) popup_call2_audio_out_window_g3_ParamLimits

0xc242,	// (0x00069fe0) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0006d2d9) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0006d2d9) popup_call2_audio_out_window_g

0xc27d,	// (0x0006a01b) popup_call2_audio_out_window_t1_ParamLimits

0xc27d,	// (0x0006a01b) popup_call2_audio_out_window_t1

0xc2dc,	// (0x0006a07a) popup_call2_audio_out_window_t2_ParamLimits

0xc2dc,	// (0x0006a07a) popup_call2_audio_out_window_t2

0xc330,	// (0x0006a0ce) popup_call2_audio_out_window_t3_ParamLimits

0xc330,	// (0x0006a0ce) popup_call2_audio_out_window_t3

0xc346,	// (0x0006a0e4) popup_call2_audio_out_window_t4_ParamLimits

0xc346,	// (0x0006a0e4) popup_call2_audio_out_window_t4

0xc35c,	// (0x0006a0fa) popup_call2_audio_out_window_t5_ParamLimits

0xc35c,	// (0x0006a0fa) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0006d2e2) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0006d2e2) popup_call2_audio_out_window_t

0xc3c0,	// (0x0006a15e) bg_popup_call2_in_pane_ParamLimits

0xc3c0,	// (0x0006a15e) bg_popup_call2_in_pane

0xc41c,	// (0x0006a1ba) popup_call2_audio_in_window_g1_ParamLimits

0xc41c,	// (0x0006a1ba) popup_call2_audio_in_window_g1

0xc454,	// (0x0006a1f2) popup_call2_audio_in_window_g2_ParamLimits

0xc454,	// (0x0006a1f2) popup_call2_audio_in_window_g2

0xc48c,	// (0x0006a22a) popup_call2_audio_in_window_g3_ParamLimits

0xc48c,	// (0x0006a22a) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0006d2ef) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0006d2ef) popup_call2_audio_in_window_g

0xc4e4,	// (0x0006a282) popup_call2_audio_in_window_t1_ParamLimits

0xc4e4,	// (0x0006a282) popup_call2_audio_in_window_t1

0xc564,	// (0x0006a302) popup_call2_audio_in_window_t2_ParamLimits

0xc564,	// (0x0006a302) popup_call2_audio_in_window_t2

0xc5e4,	// (0x0006a382) popup_call2_audio_in_window_t3_ParamLimits

0xc5e4,	// (0x0006a382) popup_call2_audio_in_window_t3

0xc5fe,	// (0x0006a39c) popup_call2_audio_in_window_t4_ParamLimits

0xc5fe,	// (0x0006a39c) popup_call2_audio_in_window_t4

0xc610,	// (0x0006a3ae) popup_call2_audio_in_window_t5_ParamLimits

0xc610,	// (0x0006a3ae) popup_call2_audio_in_window_t5

0xc625,	// (0x0006a3c3) popup_call2_audio_in_window_t6_ParamLimits

0xc625,	// (0x0006a3c3) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0006d2f8) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0006d2f8) popup_call2_audio_in_window_t

0xa814,	// (0x000685b2) bg_popup_call2_in_pane_g1

0xc73e,	// (0x0006a4dc) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0006d360) popup_cale_lunar_info_window_t

0xa81c,	// (0x000685ba) bg_popup_call2_rect_pane_ParamLimits

0xa81c,	// (0x000685ba) bg_popup_call2_rect_pane

0xa0b6,	// (0x00067e54) call2_cli_visual_graphic_pane

0xa0b6,	// (0x00067e54) call2_cli_visual_text_pane

0x46b5,	// (0x00062453) smil_status_volume_pane_g3

0x0002,

0xa936,	// (0x000686d4) call2_cli_visual_graphic_pane_g1

0xa936,	// (0x000686d4) call2_cli_visual_graphic_pane_g2

0xa936,	// (0x000686d4) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0006d305) call2_cli_visual_graphic_pane_g

0xc63a,	// (0x0006a3d8) bg_popup_call2_rect_pane_g1

0xa9d4,	// (0x00068772) bg_popup_call2_rect_pane_g2

0xc642,	// (0x0006a3e0) bg_popup_call2_rect_pane_g3

0xc64a,	// (0x0006a3e8) bg_popup_call2_rect_pane_g4

0xc652,	// (0x0006a3f0) bg_popup_call2_rect_pane_g5

0xc65a,	// (0x0006a3f8) bg_popup_call2_rect_pane_g6

0xc662,	// (0x0006a400) bg_popup_call2_rect_pane_g7

0xc66a,	// (0x0006a408) bg_popup_call2_rect_pane_g8

0xc672,	// (0x0006a410) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0006d30c) bg_popup_call2_rect_pane_g

0xc67a,	// (0x0006a418) bg_popup_call2_bubble_pane_g1

0xc682,	// (0x0006a420) bg_popup_call2_bubble_pane_g2

0xc68a,	// (0x0006a428) bg_popup_call2_bubble_pane_g3

0xc692,	// (0x0006a430) bg_popup_call2_bubble_pane_g4

0xc69a,	// (0x0006a438) bg_popup_call2_bubble_pane_g5

0xc6a2,	// (0x0006a440) bg_popup_call2_bubble_pane_g6

0xc6aa,	// (0x0006a448) bg_popup_call2_bubble_pane_g7

0xc6b2,	// (0x0006a450) bg_popup_call2_bubble_pane_g8

0xc6ba,	// (0x0006a458) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0006d31f) bg_popup_call2_bubble_pane_g

0x13ec,	// (0x0005f18a) aid_cale_week_size_cell_pane

0x1d3d,	// (0x0005fadb) aid_cams_cif_uncrop_pane_ParamLimits

0x1d3d,	// (0x0005fadb) aid_cams_cif_uncrop_pane

0x1e9a,	// (0x0005fc38) aid_cams_size_cell_ParamLimits

0x1e9a,	// (0x0005fc38) aid_cams_size_cell

0x1ea6,	// (0x0005fc44) grid_cams_pane_ParamLimits

0x1eb4,	// (0x0005fc52) linegrid_cams_pane_ParamLimits

0x2084,	// (0x0005fe22) call_video_pane_t1

0x20a1,	// (0x0005fe3f) call_video_pane_t2

0x0001,

0xf26e,	// (0x0006d00c) call_video_pane_t

0x256d,	// (0x0006030b) aid_cale_month_size_cell_pane_ParamLimits

0x256d,	// (0x0006030b) aid_cale_month_size_cell_pane

0xf60b,	// (0x0006d3a9) smil_status_volume_pane_g

0x46c2,	// (0x00062460) volume_smil_pane_ParamLimits

0x9c5c,	// (0x000679fa) aid_popup2_width_pane

0x12e0,	// (0x0005f07e) cell_qdial_pane_g4_ParamLimits

0x12e0,	// (0x0005f07e) cell_qdial_pane_g4

0x359e,	// (0x0006133c) aid_blid_cardinal_pane_ParamLimits

0x35ae,	// (0x0006134c) aid_blid_destination_pane_ParamLimits

0x35ae,	// (0x0006134c) aid_blid_destination_pane

0xa81c,	// (0x000685ba) bg_popup_call_poc_act_pane_ParamLimits

0xa81c,	// (0x000685ba) bg_popup_call_poc_act_pane

0xa81c,	// (0x000685ba) bg_popup_call_poc_inact_pane_ParamLimits

0xa81c,	// (0x000685ba) bg_popup_call_poc_inact_pane

0xc6c2,	// (0x0006a460) bg_popup_call_poc_act_pane_g1

0xc6ca,	// (0x0006a468) bg_popup_call_poc_act_pane_g2

0xc6d2,	// (0x0006a470) bg_popup_call_poc_act_pane_g3

0xc692,	// (0x0006a430) bg_popup_call_poc_act_pane_g4

0xc69a,	// (0x0006a438) bg_popup_call_poc_act_pane_g5

0xc6da,	// (0x0006a478) bg_popup_call_poc_act_pane_g6

0xc6aa,	// (0x0006a448) bg_popup_call_poc_act_pane_g7

0xc6e2,	// (0x0006a480) bg_popup_call_poc_act_pane_g8

0xa0b6,	// (0x00067e54) main_usb_pane

0xc84b,	// (0x0006a5e9) popup_cale_lunar_info_window

0x23b9,	// (0x00060157) im_reading_pane_t1_ParamLimits

0xab9c,	// (0x0006893a) list_im_pane_ParamLimits

0xabad,	// (0x0006894b) scroll_pane_cp07_ParamLimits

0xa0b6,	// (0x00067e54) grid_highlight_pane_cp012

0xa81c,	// (0x000685ba) mup_scale_pane_ParamLimits

0xb19a,	// (0x00068f38) main_usb_pane_g1_ParamLimits

0xb19a,	// (0x00068f38) main_usb_pane_g1

0x4256,	// (0x00061ff4) main_usb_pane_g2_ParamLimits

0x4256,	// (0x00061ff4) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0006d349) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0006d349) main_usb_pane_g

0x4262,	// (0x00062000) main_usb_pane_t1_ParamLimits

0x4262,	// (0x00062000) main_usb_pane_t1

0x4274,	// (0x00062012) main_usb_pane_t2_ParamLimits

0x4274,	// (0x00062012) main_usb_pane_t2

0x4286,	// (0x00062024) main_usb_pane_t3_ParamLimits

0x4286,	// (0x00062024) main_usb_pane_t3

0x4298,	// (0x00062036) main_usb_pane_t4_ParamLimits

0x4298,	// (0x00062036) main_usb_pane_t4

0x42aa,	// (0x00062048) main_usb_pane_t5_ParamLimits

0x42aa,	// (0x00062048) main_usb_pane_t5

0x42bc,	// (0x0006205a) main_usb_pane_t6_ParamLimits

0x42bc,	// (0x0006205a) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0006d34e) main_usb_pane_t_ParamLimits

0x353d,	// (0x000612db) aid_text_placing

0x3548,	// (0x000612e6) main_location2_pane_t1_ParamLimits

0x355e,	// (0x000612fc) main_location2_pane_t2_ParamLimits

0x3574,	// (0x00061312) main_location2_pane_t3_ParamLimits

0x358a,	// (0x00061328) main_location2_pane_t4_ParamLimits

0x358a,	// (0x00061328) main_location2_pane_t4

0xf3cf,	// (0x0006d16d) main_location2_pane_t_ParamLimits

0xa858,	// (0x000685f6) find_pinb_pane_g2_ParamLimits

0xa858,	// (0x000685f6) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0006cebd) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0006cebd) find_pinb_pane_g

0xa864,	// (0x00068602) find_pinb_pane_t1_ParamLimits

0xa876,	// (0x00068614) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0006cec2) find_pinb_pane_t_ParamLimits

0xa0b6,	// (0x00067e54) main_call3_pane

0x2aec,	// (0x0006088a) cale_month_day_heading_pane_t1_ParamLimits

0x2b6e,	// (0x0006090c) cale_month_day_heading_pane_t2_ParamLimits

0x2bfb,	// (0x00060999) cale_month_day_heading_pane_t3_ParamLimits

0x2c88,	// (0x00060a26) cale_month_day_heading_pane_t4_ParamLimits

0x2d15,	// (0x00060ab3) cale_month_day_heading_pane_t5_ParamLimits

0x2daa,	// (0x00060b48) cale_month_day_heading_pane_t6_ParamLimits

0x2e47,	// (0x00060be5) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0006d044) cale_month_day_heading_pane_t_ParamLimits

0x311d,	// (0x00060ebb) smil_status_volume_pane

0x3e14,	// (0x00061bb2) postcard_address_pane_ParamLimits

0x3e14,	// (0x00061bb2) postcard_address_pane

0x3e22,	// (0x00061bc0) postcard_message_pane_ParamLimits

0x3e22,	// (0x00061bc0) postcard_message_pane

0x422c,	// (0x00061fca) call2_cli_visual_pane_t1_ParamLimits

0x422c,	// (0x00061fca) call2_cli_visual_pane_t1

0x4821,	// (0x000625bf) postcard_message_pane_t1_ParamLimits

0x4821,	// (0x000625bf) postcard_message_pane_t1

0x480a,	// (0x000625a8) postcard_address_pane_t1_ParamLimits

0x480a,	// (0x000625a8) postcard_address_pane_t1

0x47fb,	// (0x00062599) popup_call3_audio_in_window_ParamLimits

0x47fb,	// (0x00062599) popup_call3_audio_in_window

0x46d9,	// (0x00062477) bg_popup_call3_in_pane_ParamLimits

0x46d9,	// (0x00062477) bg_popup_call3_in_pane

0x4741,	// (0x000624df) popup_call3_audio_in_window_g1_ParamLimits

0x4741,	// (0x000624df) popup_call3_audio_in_window_g1

0x4759,	// (0x000624f7) popup_call3_audio_in_window_g2_ParamLimits

0x4759,	// (0x000624f7) popup_call3_audio_in_window_g2

0x4771,	// (0x0006250f) popup_call3_audio_in_window_g3_ParamLimits

0x4771,	// (0x0006250f) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0006d3b0) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0006d3b0) popup_call3_audio_in_window_g

0x4799,	// (0x00062537) popup_call3_audio_in_window_t1_ParamLimits

0x4799,	// (0x00062537) popup_call3_audio_in_window_t1

0x47c1,	// (0x0006255f) popup_call3_audio_in_window_t2_ParamLimits

0x47c1,	// (0x0006255f) popup_call3_audio_in_window_t2

0x47e9,	// (0x00062587) popup_call3_audio_in_window_t3_ParamLimits

0x47e9,	// (0x00062587) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0006d3b9) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0006d3b9) popup_call3_audio_in_window_t

0xaa97,	// (0x00068835) bg_popup_call3_rect_pane

0xc63a,	// (0x0006a3d8) bg_popup_call3_rect_pane_g1

0xa9d4,	// (0x00068772) bg_popup_call3_rect_pane_g2

0xc642,	// (0x0006a3e0) bg_popup_call3_rect_pane_g3

0xc64a,	// (0x0006a3e8) bg_popup_call3_rect_pane_g4

0xc652,	// (0x0006a3f0) bg_popup_call3_rect_pane_g5

0xc65a,	// (0x0006a3f8) bg_popup_call3_rect_pane_g6

0xc662,	// (0x0006a400) bg_popup_call3_rect_pane_g7

0x39e4,	// (0x00061782) mup_visualizer_osc_pane

0xb4cb,	// (0x00069269) mup_visualizer_spec_pane

0x46f9,	// (0x00062497) call3_video_qcif_pane_ParamLimits

0x46f9,	// (0x00062497) call3_video_qcif_pane

0x470b,	// (0x000624a9) call3_video_qcif_uncrop_pane_ParamLimits

0x470b,	// (0x000624a9) call3_video_qcif_uncrop_pane

0x471b,	// (0x000624b9) call3_video_subqcif_pane_ParamLimits

0x471b,	// (0x000624b9) call3_video_subqcif_pane

0x472f,	// (0x000624cd) call3_video_subqcif_uncrop_pane_ParamLimits

0x472f,	// (0x000624cd) call3_video_subqcif_uncrop_pane

0x4789,	// (0x00062527) popup_call3_audio_in_window_g4_ParamLimits

0x4789,	// (0x00062527) popup_call3_audio_in_window_g4

0x46a4,	// (0x00062442) mup_spec_half_pane

0x46ad,	// (0x0006244b) mup_spec_half_pane_cp

0xc8e6,	// (0x0006a684) mup_osc_middle_pane

0xc8ef,	// (0x0006a68d) mup_visualizer_osc_pane_g1

0x4684,	// (0x00062422) mup_spec_bar_pane_ParamLimits

0x4684,	// (0x00062422) mup_spec_bar_pane

0xc8d3,	// (0x0006a671) mup_spec_bar_pane_g1

0xc8dd,	// (0x0006a67b) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0006d3a4) mup_spec_bar_pane_g

0x13ec,	// (0x0005f18a) aid_cale_week_size_cell_pane_ParamLimits

0x1406,	// (0x0005f1a4) bg_cale_heading_pane_ParamLimits

0x142f,	// (0x0005f1cd) bg_cale_pane_cp01_ParamLimits

0x1451,	// (0x0005f1ef) cale_week_corner_pane_ParamLimits

0x1470,	// (0x0005f20e) cale_week_day_heading_pane_ParamLimits

0x149e,	// (0x0005f23c) cale_week_scroll_pane_g1_ParamLimits

0x14c2,	// (0x0005f260) cale_week_scroll_pane_g2_ParamLimits

0x14da,	// (0x0005f278) cale_week_scroll_pane_g3_ParamLimits

0x14f2,	// (0x0005f290) cale_week_scroll_pane_g4_ParamLimits

0x150a,	// (0x0005f2a8) cale_week_scroll_pane_g5_ParamLimits

0x1522,	// (0x0005f2c0) cale_week_scroll_pane_g6_ParamLimits

0x1542,	// (0x0005f2e0) cale_week_scroll_pane_g7_ParamLimits

0x1562,	// (0x0005f300) cale_week_scroll_pane_g8_ParamLimits

0x1582,	// (0x0005f320) cale_week_scroll_pane_g9_ParamLimits

0x159f,	// (0x0005f33d) cale_week_scroll_pane_g10_ParamLimits

0x15bc,	// (0x0005f35a) cale_week_scroll_pane_g11_ParamLimits

0x15d9,	// (0x0005f377) cale_week_scroll_pane_g12_ParamLimits

0x15f6,	// (0x0005f394) cale_week_scroll_pane_g13_ParamLimits

0x161b,	// (0x0005f3b9) cale_week_scroll_pane_g14_ParamLimits

0x1644,	// (0x0005f3e2) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0006cf4e) cale_week_scroll_pane_g_ParamLimits

0x168d,	// (0x0005f42b) cale_week_time_pane_ParamLimits

0x16ad,	// (0x0005f44b) grid_cale_week_pane_ParamLimits

0xaa08,	// (0x000687a6) listscroll_cale_week_pane_t1

0xaa1a,	// (0x000687b8) scroll_pane_cp08_ParamLimits

0x25da,	// (0x00060378) cale_month_corner_pane_ParamLimits

0xadcd,	// (0x00068b6b) cale_month_pane_t1

0x2a7e,	// (0x0006081c) cale_month_week_pane_ParamLimits

0xb19a,	// (0x00068f38) popup_call_status_window_g1_ParamLimits

0x3346,	// (0x000610e4) popup_call_status_window_g2_ParamLimits

0x3352,	// (0x000610f0) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0006d0f4) popup_call_status_window_g_ParamLimits

0xb1b6,	// (0x00068f54) aid_call2_pane

0x3c89,	// (0x00061a27) msg_header_pane_g1

0x3e14,	// (0x00061bb2) postcard_address2_pane_ParamLimits

0x3e14,	// (0x00061bb2) postcard_address2_pane

0x3e22,	// (0x00061bc0) postcard_message2_pane_ParamLimits

0x3e22,	// (0x00061bc0) postcard_message2_pane

0x462b,	// (0x000623c9) message2_row_pane_ParamLimits

0x462b,	// (0x000623c9) message2_row_pane

0x4645,	// (0x000623e3) address2_row_pane_ParamLimits

0x4645,	// (0x000623e3) address2_row_pane

0xc8a1,	// (0x0006a63f) postcard_message2_row_pane_g1

0xc8a9,	// (0x0006a647) postcard_message2_row_pane_t1

0xc8a1,	// (0x0006a63f) address2_row_pane_g1

0xc8a9,	// (0x0006a647) address2_row_pane_t1

0x1c15,	// (0x0005f9b3) aid_size_cell_vorec

0xa0b6,	// (0x00067e54) main_rss_pane

0x4658,	// (0x000623f6) rss_list_single_pane_ParamLimits

0x4658,	// (0x000623f6) rss_list_single_pane

0xc8b7,	// (0x0006a655) rss_list_single_pane_t1

0xc8c5,	// (0x0006a663) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0006d39f) rss_list_single_pane_t

0xa0b6,	// (0x00067e54) main_camera2_pane

0xa0b6,	// (0x00067e54) main_video2_pane

0x4885,	// (0x00062623) cams_zoom_pane_cp2_ParamLimits

0x4885,	// (0x00062623) cams_zoom_pane_cp2

0x4891,	// (0x0006262f) image2_vga_pane_ParamLimits

0x4891,	// (0x0006262f) image2_vga_pane

0x48a0,	// (0x0006263e) main_camera2_pane_g1_ParamLimits

0x48a0,	// (0x0006263e) main_camera2_pane_g1

0x48ac,	// (0x0006264a) main_camera2_pane_g2_ParamLimits

0x48ac,	// (0x0006264a) main_camera2_pane_g2

0x48b8,	// (0x00062656) main_camera2_pane_g3_ParamLimits

0x48b8,	// (0x00062656) main_camera2_pane_g3

0x48c4,	// (0x00062662) main_camera2_pane_g4_ParamLimits

0x48c4,	// (0x00062662) main_camera2_pane_g4

0x48d0,	// (0x0006266e) main_camera2_pane_g5_ParamLimits

0x48d0,	// (0x0006266e) main_camera2_pane_g5

0x48dc,	// (0x0006267a) main_camera2_pane_g6_ParamLimits

0x48dc,	// (0x0006267a) main_camera2_pane_g6

0x48e8,	// (0x00062686) main_camera2_pane_g7_ParamLimits

0x48e8,	// (0x00062686) main_camera2_pane_g7

0x48f4,	// (0x00062692) main_camera2_pane_g8_ParamLimits

0x48f4,	// (0x00062692) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0006d3c0) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0006d3c0) main_camera2_pane_g

0x490c,	// (0x000626aa) main_camera2_pane_t1_ParamLimits

0x490c,	// (0x000626aa) main_camera2_pane_t1

0x491e,	// (0x000626bc) main_camera2_pane_t2_ParamLimits

0x491e,	// (0x000626bc) main_camera2_pane_t2

0x4930,	// (0x000626ce) main_camera2_pane_t3_ParamLimits

0x4930,	// (0x000626ce) main_camera2_pane_t3

0x4942,	// (0x000626e0) main_camera2_pane_t4_ParamLimits

0x4942,	// (0x000626e0) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0006d3d3) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0006d3d3) main_camera2_pane_t

0x499f,	// (0x0006273d) cams_zoom_pane_cp4_ParamLimits

0x499f,	// (0x0006273d) cams_zoom_pane_cp4

0x49af,	// (0x0006274d) image2_cif_pane_ParamLimits

0x49af,	// (0x0006274d) image2_cif_pane

0x49c4,	// (0x00062762) image2_subqcif_pane_ParamLimits

0x49c4,	// (0x00062762) image2_subqcif_pane

0x49d3,	// (0x00062771) main_video2_pane_g1_ParamLimits

0x49d3,	// (0x00062771) main_video2_pane_g1

0x49e5,	// (0x00062783) main_video2_pane_g2_ParamLimits

0x49e5,	// (0x00062783) main_video2_pane_g2

0x49f5,	// (0x00062793) main_video2_pane_g3_ParamLimits

0x49f5,	// (0x00062793) main_video2_pane_g3

0x4a05,	// (0x000627a3) main_video2_pane_g4_ParamLimits

0x4a05,	// (0x000627a3) main_video2_pane_g4

0x4a15,	// (0x000627b3) main_video2_pane_g5_ParamLimits

0x4a15,	// (0x000627b3) main_video2_pane_g5

0x4a25,	// (0x000627c3) main_video2_pane_g6_ParamLimits

0x4a25,	// (0x000627c3) main_video2_pane_g6

0x0005,

0xf644,	// (0x0006d3e2) main_video2_pane_g_ParamLimits

0xf644,	// (0x0006d3e2) main_video2_pane_g

0x4a37,	// (0x000627d5) main_video2_pane_t1_ParamLimits

0x4a37,	// (0x000627d5) main_video2_pane_t1

0x4a51,	// (0x000627ef) main_video2_pane_t2_ParamLimits

0x4a51,	// (0x000627ef) main_video2_pane_t2

0x4a77,	// (0x00062815) main_video2_pane_t3_ParamLimits

0x4a77,	// (0x00062815) main_video2_pane_t3

0x0002,

0xf651,	// (0x0006d3ef) main_video2_pane_t_ParamLimits

0xf651,	// (0x0006d3ef) main_video2_pane_t

0x4373,	// (0x00062111) call_muted_g2

0x0001,

0xf5f3,	// (0x0006d391) call_muted_g

0xa0b6,	// (0x00067e54) main_mup2_pane

0xc926,	// (0x0006a6c4) main_mup2_pane_g1_ParamLimits

0xc926,	// (0x0006a6c4) main_mup2_pane_g1

0x4a9d,	// (0x0006283b) main_mup2_pane_g2_ParamLimits

0x4a9d,	// (0x0006283b) main_mup2_pane_g2

0x4d2f,	// (0x00062acd) main_mup_pane_g13_cp1

0x4d37,	// (0x00062ad5) mup_volume_pane_cp1

0x4abf,	// (0x0006285d) main_mup2_pane_g4_ParamLimits

0x4abf,	// (0x0006285d) main_mup2_pane_g4

0x4ad4,	// (0x00062872) main_mup2_pane_g5_ParamLimits

0x4ad4,	// (0x00062872) main_mup2_pane_g5

0x4ae9,	// (0x00062887) main_mup2_pane_g6_ParamLimits

0x4ae9,	// (0x00062887) main_mup2_pane_g6

0x4afe,	// (0x0006289c) main_mup2_pane_g7_ParamLimits

0x4afe,	// (0x0006289c) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0006d3f6) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0006d3f6) main_mup2_pane_g

0x4b1a,	// (0x000628b8) main_mup2_pane_t1_ParamLimits

0x4b1a,	// (0x000628b8) main_mup2_pane_t1

0x4b31,	// (0x000628cf) main_mup2_pane_t2_ParamLimits

0x4b31,	// (0x000628cf) main_mup2_pane_t2

0x4b48,	// (0x000628e6) main_mup2_pane_t3_ParamLimits

0x4b48,	// (0x000628e6) main_mup2_pane_t3

0x4b5f,	// (0x000628fd) main_mup2_pane_t4_ParamLimits

0x4b5f,	// (0x000628fd) main_mup2_pane_t4

0x4b79,	// (0x00062917) main_mup2_pane_t5_ParamLimits

0x4b79,	// (0x00062917) main_mup2_pane_t5

0x4b93,	// (0x00062931) main_mup2_pane_t6_ParamLimits

0x4b93,	// (0x00062931) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0006d405) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0006d405) main_mup2_pane_t

0x4bcb,	// (0x00062969) mup2_visualizer_pane_ParamLimits

0x4bcb,	// (0x00062969) mup2_visualizer_pane

0x4c01,	// (0x0006299f) mup_progress_pane_cp_ParamLimits

0x4c01,	// (0x0006299f) mup_progress_pane_cp

0x4d1a,	// (0x00062ab8) mup_volume_pane_cp_ParamLimits

0x4d1a,	// (0x00062ab8) mup_volume_pane_cp

0x4c1a,	// (0x000629b8) mup2_visualizer_pane_g1_ParamLimits

0x4c1a,	// (0x000629b8) mup2_visualizer_pane_g1

0xc932,	// (0x0006a6d0) mup2_visualizer_pane_g2_ParamLimits

0xc932,	// (0x0006a6d0) mup2_visualizer_pane_g2

0x4c2f,	// (0x000629cd) mup2_visualizer_pane_g3_ParamLimits

0x4c2f,	// (0x000629cd) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0006d412) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0006d412) mup2_visualizer_pane_g

0xb706,	// (0x000694a4) aid_size_cell_fmradio

0x4489,	// (0x00062227) aid_height_parent_landcape

0xac2b,	// (0x000689c9) wml_content_pane_cp

0xac33,	// (0x000689d1) wml_tabs_pane

0xac3c,	// (0x000689da) popup_wml_miniature_window

0xac44,	// (0x000689e2) scroll_pane_cp021

0xac58,	// (0x000689f6) wml_content_pane_comp8

0xa0b6,	// (0x00067e54) bg_popup_sub_pane_cp05

0xc950,	// (0x0006a6ee) popup_wml_miniature_window_g1

0xc958,	// (0x0006a6f6) wml_miniature_view_pane

0x4c3d,	// (0x000629db) aid_size_wml_view

0x4c45,	// (0x000629e3) wml_miniature_view_pane_g1

0x4c4e,	// (0x000629ec) wml_miniature_view_pane_g2

0x4c57,	// (0x000629f5) wml_miniature_view_pane_g3

0x4c5f,	// (0x000629fd) wml_miniature_view_pane_g4

0x4c67,	// (0x00062a05) wml_miniature_view_pane_g5

0x4c6f,	// (0x00062a0d) wml_miniature_view_pane_g6

0x4c77,	// (0x00062a15) wml_miniature_view_pane_g7

0x4c7f,	// (0x00062a1d) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0006d419) wml_miniature_view_pane_g

0xc926,	// (0x0006a6c4) background_graphic_ParamLimits

0xc926,	// (0x0006a6c4) background_graphic

0xc960,	// (0x0006a6fe) wml_tabs_2_pane

0xc969,	// (0x0006a707) wml_tabs_3_pane_ParamLimits

0xc969,	// (0x0006a707) wml_tabs_3_pane

0xc97b,	// (0x0006a719) wml_tabs_4_pane_ParamLimits

0xc97b,	// (0x0006a719) wml_tabs_4_pane

0xc991,	// (0x0006a72f) wml_tabs_5_pane_ParamLimits

0xc991,	// (0x0006a72f) wml_tabs_5_pane

0xc9ab,	// (0x0006a749) wml_tabs_pane_g2_ParamLimits

0xc9ab,	// (0x0006a749) wml_tabs_pane_g2

0xc9bf,	// (0x0006a75d) wml_tabs_pane_g3_ParamLimits

0xc9bf,	// (0x0006a75d) wml_tabs_pane_g3

0x4c87,	// (0x00062a25) wml_tabs_2_active_pane_ParamLimits

0x4c87,	// (0x00062a25) wml_tabs_2_active_pane

0x4c99,	// (0x00062a37) wml_tabs_2_passive_pane_ParamLimits

0x4c99,	// (0x00062a37) wml_tabs_2_passive_pane

0x4cab,	// (0x00062a49) wml_tabs_3_active_pane_cp_ParamLimits

0x4cab,	// (0x00062a49) wml_tabs_3_active_pane_cp

0x4cbe,	// (0x00062a5c) wml_tabs_3_passive_pane_ParamLimits

0x4cbe,	// (0x00062a5c) wml_tabs_3_passive_pane

0x4ccf,	// (0x00062a6d) wml_tabs_3_passive_pane_cp_ParamLimits

0x4ccf,	// (0x00062a6d) wml_tabs_3_passive_pane_cp

0x4ce4,	// (0x00062a82) tabs_4_active_pane

0x4cec,	// (0x00062a8a) tabs_4_passive_pane

0x4cf4,	// (0x00062a92) tabs_4_passive_pane_cp

0x4cfc,	// (0x00062a9a) tabs_4_passive_pane_cp2

0x424e,	// (0x00061fec) aid_height_text

0x39ad,	// (0x0006174b) mup_volume_cont_pane_ParamLimits

0x39ad,	// (0x0006174b) mup_volume_cont_pane

0x0f2c,	// (0x0005ecca) aid_size_cell_pinb

0x0f36,	// (0x0005ecd4) aid_size_list_pinb

0x4bea,	// (0x00062988) mup2_volume_cont_pane_ParamLimits

0x4bea,	// (0x00062988) mup2_volume_cont_pane

0x4d06,	// (0x00062aa4) mup2_volume_cont_pane_g1_ParamLimits

0x4d06,	// (0x00062aa4) mup2_volume_cont_pane_g1

0x0b96,	// (0x0005e934) aid_size_cell_touch_ParamLimits

0x0b96,	// (0x0005e934) aid_size_cell_touch

0x0e16,	// (0x0005ebb4) touch_pane_ParamLimits

0x0e16,	// (0x0005ebb4) touch_pane

0x9c4a,	// (0x000679e8) main_rss2_pane

0xc9dc,	// (0x0006a77a) listscroll_rss2_pane

0xc9e5,	// (0x0006a783) rss2_navigation_pane

0xc9ed,	// (0x0006a78b) list_rss2_pane

0xb2da,	// (0x00069078) scroll_pane_cp22

0xc9f5,	// (0x0006a793) rss2_navigation_pane_g1

0xc9fe,	// (0x0006a79c) rss2_navigation_pane_g2

0xca06,	// (0x0006a7a4) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0006d42a) rss2_navigation_pane_g

0xca0e,	// (0x0006a7ac) rss2_navigation_pane_t1

0x4d3f,	// (0x00062add) rss2_list_single_pane_ParamLimits

0x4d3f,	// (0x00062add) rss2_list_single_pane

0xca1c,	// (0x0006a7ba) rss2_list_single_pane_t2

0xca2a,	// (0x0006a7c8) rss2_list_single_pane_t3_ParamLimits

0xca2a,	// (0x0006a7c8) rss2_list_single_pane_t3

0xca47,	// (0x0006a7e5) rss2_list_single_pane_t4

0x3107,	// (0x00060ea5) smil_status_pane_g1

0xa2e1,	// (0x0006807f) main_image2_pane_ParamLimits

0xa2e1,	// (0x0006807f) main_image2_pane

0x4900,	// (0x0006269e) main_camera2_pane_g9_ParamLimits

0x4900,	// (0x0006269e) main_camera2_pane_g9

0x4954,	// (0x000626f2) main_camera2_pane_t5_ParamLimits

0x4954,	// (0x000626f2) main_camera2_pane_t5

0x4966,	// (0x00062704) main_camera2_pane_t6_ParamLimits

0x4966,	// (0x00062704) main_camera2_pane_t6

0x4d62,	// (0x00062b00) main_image2_pane_g1_ParamLimits

0x4d62,	// (0x00062b00) main_image2_pane_g1

0x3feb,	// (0x00061d89) smil2_video_pane_ParamLimits

0x3feb,	// (0x00061d89) smil2_video_pane

0x0bd2,	// (0x0005e970) aid_zoom_text_primary_cp

0x9c99,	// (0x00067a37) popup_preview_fixed_window

0xab94,	// (0x00068932) im_reading_pane_g1

0x484a,	// (0x000625e8) cams2_bc_adjust_pane_cp_ParamLimits

0x484a,	// (0x000625e8) cams2_bc_adjust_pane_cp

0x4991,	// (0x0006272f) cams2_bc_adjust_pane_ParamLimits

0x4991,	// (0x0006272f) cams2_bc_adjust_pane

0xd19e,	// (0x0006af3c) cams2_bc_adjust_pane_g1

0x4d6e,	// (0x00062b0c) cams2_slider_pane

0x4d77,	// (0x00062b15) cams2_slider_pane_g1

0x4d80,	// (0x00062b1e) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0006d431) cams2_slider_pane_g

0x1031,	// (0x0005edcf) calc_display_pane_ParamLimits

0x104f,	// (0x0005eded) calc_paper_pane_ParamLimits

0x106b,	// (0x0005ee09) grid_calc_pane_ParamLimits

0x33b0,	// (0x0006114e) popup_clock_digital_window_t1_ParamLimits

0xb6a3,	// (0x00069441) main_image_pane_t1

0x1017,	// (0x0005edb5) aid_size_cell_calc_ParamLimits

0x1017,	// (0x0005edb5) aid_size_cell_calc

0x44bb,	// (0x00062259) popup_blid_sat_info2_window_ParamLimits

0x44bb,	// (0x00062259) popup_blid_sat_info2_window

0xca5d,	// (0x0006a7fb) aid_size_cell_blid

0xca65,	// (0x0006a803) bg_popup_window_pane_cp07

0xca88,	// (0x0006a826) grid_popup_blid_pane

0xca92,	// (0x0006a830) heading_pane_cp05_ParamLimits

0xca92,	// (0x0006a830) heading_pane_cp05

0xcb5c,	// (0x0006a8fa) cell_popup_blid_pane_ParamLimits

0xcb5c,	// (0x0006a8fa) cell_popup_blid_pane

0xcb86,	// (0x0006a924) cell_popup_blid_pane_g1

0xcb8e,	// (0x0006a92c) cell_popup_blid_pane_t1

0x4bb0,	// (0x0006294e) mup2_indicator_pane_ParamLimits

0x4bb0,	// (0x0006294e) mup2_indicator_pane

0xaa97,	// (0x00068835) mup2_visualizer_osc_pane

0xc93e,	// (0x0006a6dc) mup2_visualizer_spec_pane_ParamLimits

0xc93e,	// (0x0006a6dc) mup2_visualizer_spec_pane

0x4d9a,	// (0x00062b38) mup2_spec_half_pane

0x4da3,	// (0x00062b41) mup2_spec_half_pane_cp

0x4dad,	// (0x00062b4b) mup2_spec_bar_pane_ParamLimits

0x4dad,	// (0x00062b4b) mup2_spec_bar_pane

0xc8d3,	// (0x0006a671) mup2_spec_bar_pane_g1

0xc8dd,	// (0x0006a67b) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0006d3a4) mup2_spec_bar_pane_g

0x4dcc,	// (0x00062b6a) mup2_osc_middle_pane

0xc8ef,	// (0x0006a68d) mup2_visualizer_osc_pane_g1

0x9cc3,	// (0x00067a61) popup_number_entry_window_t1_ParamLimits

0x9cd6,	// (0x00067a74) popup_number_entry_window_t2_ParamLimits

0x9ce8,	// (0x00067a86) popup_number_entry_window_t3_ParamLimits

0x0e6d,	// (0x0005ec0b) popup_number_entry_window_t5_ParamLimits

0x0e6d,	// (0x0005ec0b) popup_number_entry_window_t5

0xf0ca,	// (0x0006ce68) popup_number_entry_window_t_ParamLimits

0x9cfa,	// (0x00067a98) text_title_cp2_ParamLimits

0x3cd8,	// (0x00061a76) aid_hotspot_pointer_text2_pane

0x3d72,	// (0x00061b10) main_viewer_pane_g9_ParamLimits

0x3d72,	// (0x00061b10) main_viewer_pane_g9

0xadcd,	// (0x00068b6b) cale_month_pane_t1_ParamLimits

0xadf3,	// (0x00068b91) bg_cale_pane_ParamLimits

0xae0b,	// (0x00068ba9) list_cale_pane_ParamLimits

0xae1c,	// (0x00068bba) listscroll_cale_day_pane_t1

0xae2e,	// (0x00068bcc) scroll_pane_cp09_ParamLimits

0x39ec,	// (0x0006178a) main_mup_eq_pane_t1_ParamLimits

0x39ec,	// (0x0006178a) main_mup_eq_pane_t1

0x3a08,	// (0x000617a6) main_mup_eq_pane_t2_ParamLimits

0x3a08,	// (0x000617a6) main_mup_eq_pane_t2

0x3a24,	// (0x000617c2) main_mup_eq_pane_t3_ParamLimits

0x3a24,	// (0x000617c2) main_mup_eq_pane_t3

0x3a3e,	// (0x000617dc) main_mup_eq_pane_t4_ParamLimits

0x3a3e,	// (0x000617dc) main_mup_eq_pane_t4

0x3a58,	// (0x000617f6) main_mup_eq_pane_t5_ParamLimits

0x3a58,	// (0x000617f6) main_mup_eq_pane_t5

0x3a72,	// (0x00061810) main_mup_eq_pane_t6_ParamLimits

0x3a72,	// (0x00061810) main_mup_eq_pane_t6

0x3a88,	// (0x00061826) main_mup_eq_pane_t7_ParamLimits

0x3a88,	// (0x00061826) main_mup_eq_pane_t7

0x3a9e,	// (0x0006183c) main_mup_eq_pane_t8_ParamLimits

0x3a9e,	// (0x0006183c) main_mup_eq_pane_t8

0x3ab4,	// (0x00061852) main_mup_eq_pane_t9_ParamLimits

0x3ab4,	// (0x00061852) main_mup_eq_pane_t9

0x3ad0,	// (0x0006186e) main_mup_eq_pane_t10_ParamLimits

0x3ad0,	// (0x0006186e) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0006d1f3) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0006d1f3) main_mup_eq_pane_t

0x3b95,	// (0x00061933) mup_equalizer_pane_cp5_ParamLimits

0x3bad,	// (0x0006194b) mup_equalizer_pane_cp6_ParamLimits

0x3bc5,	// (0x00061963) mup_equalizer_pane_cp7_ParamLimits

0x9c4a,	// (0x000679e8) main_gallery_pane

0xc8f8,	// (0x0006a696) smil2_volume_pane

0xc900,	// (0x0006a69e) smil_status_volume_pane_g1_ParamLimits

0xc913,	// (0x0006a6b1) smil_status_volume_pane_g2_ParamLimits

0x46b5,	// (0x00062453) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0006d3a9) smil_status_volume_pane_g_ParamLimits

0xca65,	// (0x0006a803) bg_popup_window_pane_cp07_ParamLimits

0xca73,	// (0x0006a811) blid_firmament_pane

0x4dd5,	// (0x00062b73) aid_size_cell_gallery_ParamLimits

0x4dd5,	// (0x00062b73) aid_size_cell_gallery

0x4de3,	// (0x00062b81) grid_gallery_pane_ParamLimits

0x4de3,	// (0x00062b81) grid_gallery_pane

0x4df3,	// (0x00062b91) cell_gallery_pane_ParamLimits

0x4df3,	// (0x00062b91) cell_gallery_pane

0xcb9c,	// (0x0006a93a) bg_cell_gallery_focus_pane_ParamLimits

0xcb9c,	// (0x0006a93a) bg_cell_gallery_focus_pane

0xcbae,	// (0x0006a94c) cell_gallery_pane_g1_ParamLimits

0xcbae,	// (0x0006a94c) cell_gallery_pane_g1

0x4e39,	// (0x00062bd7) cell_gallery_pane_g2_ParamLimits

0x4e39,	// (0x00062bd7) cell_gallery_pane_g2

0x4e46,	// (0x00062be4) cell_gallery_pane_g3_ParamLimits

0x4e46,	// (0x00062be4) cell_gallery_pane_g3

0xcbba,	// (0x0006a958) cell_gallery_pane_g4_ParamLimits

0xcbba,	// (0x0006a958) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0006d457) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0006d457) cell_gallery_pane_g

0xcbc6,	// (0x0006a964) bg_cell_gallery_focus_pane_g1

0xcbce,	// (0x0006a96c) bg_cell_gallery_focus_pane_g2

0xcbd6,	// (0x0006a974) bg_cell_gallery_focus_pane_g3

0xcbde,	// (0x0006a97c) bg_cell_gallery_focus_pane_g4

0xcbe6,	// (0x0006a984) bg_cell_gallery_focus_pane_g5

0xcbee,	// (0x0006a98c) bg_cell_gallery_focus_pane_g6

0xcbf6,	// (0x0006a994) bg_cell_gallery_focus_pane_g7

0xcbfe,	// (0x0006a99c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0006d460) bg_cell_gallery_focus_pane_g

0xcc06,	// (0x0006a9a4) aid_firma_cardinal

0xcc1a,	// (0x0006a9b8) blid_firmament_pane_t1

0xcc31,	// (0x0006a9cf) blid_firmament_pane_t2

0xcc48,	// (0x0006a9e6) blid_firmament_pane_t3

0xcc5f,	// (0x0006a9fd) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0006d471) blid_firmament_pane_t

0xcc76,	// (0x0006aa14) blid_sat_info_pane

0xcc86,	// (0x0006aa24) blid_sat_info_pane_g1

0xcc86,	// (0x0006aa24) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0006d47a) blid_sat_info_pane_g

0xcc90,	// (0x0006aa2e) blid_sat_info_pane_t1

0xcc9e,	// (0x0006aa3c) smil2_volume_content_pane

0xcca7,	// (0x0006aa45) smil2_volume_pane_g1

0xccaf,	// (0x0006aa4d) smil2_volume_content_pane_g1

0xccb8,	// (0x0006aa56) smil2_volume_content_pane_g2

0xccc1,	// (0x0006aa5f) smil2_volume_content_pane_g3

0xccca,	// (0x0006aa68) smil2_volume_content_pane_g4

0xccd3,	// (0x0006aa71) smil2_volume_content_pane_g5

0xccdc,	// (0x0006aa7a) smil2_volume_content_pane_g6

0xcce5,	// (0x0006aa83) smil2_volume_content_pane_g7

0xccee,	// (0x0006aa8c) smil2_volume_content_pane_g8

0xccf7,	// (0x0006aa95) smil2_volume_content_pane_g9

0xcd00,	// (0x0006aa9e) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0006d47f) smil2_volume_content_pane_g

0x1770,	// (0x0005f50e) cale_week_day_heading_pane_t1_ParamLimits

0x17b8,	// (0x0005f556) cale_week_day_heading_pane_t2_ParamLimits

0x1805,	// (0x0005f5a3) cale_week_day_heading_pane_t3_ParamLimits

0x1852,	// (0x0005f5f0) cale_week_day_heading_pane_t4_ParamLimits

0x189f,	// (0x0005f63d) cale_week_day_heading_pane_t5_ParamLimits

0x18ec,	// (0x0005f68a) cale_week_day_heading_pane_t6_ParamLimits

0x1939,	// (0x0005f6d7) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0006cf6f) cale_week_day_heading_pane_t_ParamLimits

0xaa3c,	// (0x000687da) bg_cale_side_pane_ParamLimits

0x1981,	// (0x0005f71f) cale_week_time_pane_t1_ParamLimits

0x19c5,	// (0x0005f763) cale_week_time_pane_t2_ParamLimits

0x1a09,	// (0x0005f7a7) cale_week_time_pane_t3_ParamLimits

0x1a4d,	// (0x0005f7eb) cale_week_time_pane_t4_ParamLimits

0x1a91,	// (0x0005f82f) cale_week_time_pane_t5_ParamLimits

0x1ad5,	// (0x0005f873) cale_week_time_pane_t6_ParamLimits

0x1b19,	// (0x0005f8b7) cale_week_time_pane_t7_ParamLimits

0x1b65,	// (0x0005f903) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0006cf7e) cale_week_time_pane_t_ParamLimits

0x1bb3,	// (0x0005f951) cell_cale_week_pane_g2_ParamLimits

0xaa3c,	// (0x000687da) bg_cale_side_pane_cp01_ParamLimits

0x2ee4,	// (0x00060c82) cale_month_week_pane_t1_ParamLimits

0x2efd,	// (0x00060c9b) cale_month_week_pane_t2_ParamLimits

0x2f16,	// (0x00060cb4) cale_month_week_pane_t3_ParamLimits

0x2f2f,	// (0x00060ccd) cale_month_week_pane_t4_ParamLimits

0x2f48,	// (0x00060ce6) cale_month_week_pane_t5_ParamLimits

0x2f63,	// (0x00060d01) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0006d053) cale_month_week_pane_t_ParamLimits

0x30d0,	// (0x00060e6e) cell_cale_month_pane_g1_ParamLimits

0x9c4a,	// (0x000679e8) main_cale_event_viewer_pane

0x9c4a,	// (0x000679e8) listscroll_cale_event_viewer_pane

0xcd09,	// (0x0006aaa7) list_cale_ev_pane

0xcd11,	// (0x0006aaaf) scroll_pane_cp023

0x4e53,	// (0x00062bf1) field_cale_ev_pane_ParamLimits

0x4e53,	// (0x00062bf1) field_cale_ev_pane

0xcd1d,	// (0x0006aabb) field_cale_ev_content_pane_ParamLimits

0xcd1d,	// (0x0006aabb) field_cale_ev_content_pane

0xcd29,	// (0x0006aac7) field_cale_ev_pane_g1_ParamLimits

0xcd29,	// (0x0006aac7) field_cale_ev_pane_g1

0xcd35,	// (0x0006aad3) field_cale_ev_pane_g2_ParamLimits

0xcd35,	// (0x0006aad3) field_cale_ev_pane_g2

0xcd4d,	// (0x0006aaeb) field_cale_ev_pane_g3_ParamLimits

0xcd4d,	// (0x0006aaeb) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0006d494) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0006d494) field_cale_ev_pane_g

0xcd65,	// (0x0006ab03) field_cale_ev_pane_t1_ParamLimits

0xcd65,	// (0x0006ab03) field_cale_ev_pane_t1

0x4e77,	// (0x00062c15) field_cale_ev_content_pane_t1_ParamLimits

0x4e77,	// (0x00062c15) field_cale_ev_content_pane_t1

0xb577,	// (0x00069315) bg_button_pane_cp01

0x13d0,	// (0x0005f16e) listscroll_cale_week_pane_ParamLimits

0x13e2,	// (0x0005f180) popup_toolbar_window_cp01

0xaa08,	// (0x000687a6) listscroll_cale_week_pane_t1_ParamLimits

0x13d0,	// (0x0005f16e) listscroll_cale_day_pane_ParamLimits

0x13e2,	// (0x0005f180) popup_toolbar_window_cp02

0xae1c,	// (0x00068bba) listscroll_cale_day_pane_t1_ParamLimits

0x13d0,	// (0x0005f16e) main_cale_month_pane_ParamLimits

0x459f,	// (0x0006233d) popup_toolbar_window_cp03_ParamLimits

0x459f,	// (0x0006233d) popup_toolbar_window_cp03

0x3efb,	// (0x00061c99) main_image_pane_g2_ParamLimits

0x3efb,	// (0x00061c99) main_image_pane_g2

0x3f07,	// (0x00061ca5) main_image_pane_g3_ParamLimits

0x3f07,	// (0x00061ca5) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0006d285) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0006d285) main_image_pane_g

0xb6a3,	// (0x00069441) main_image_pane_t1_ParamLimits

0x3f13,	// (0x00061cb1) main_image_pane_t2_ParamLimits

0x3f13,	// (0x00061cb1) main_image_pane_t2

0x3f25,	// (0x00061cc3) main_image_pane_t3_ParamLimits

0x3f25,	// (0x00061cc3) main_image_pane_t3

0x3f37,	// (0x00061cd5) main_image_pane_t4_ParamLimits

0x3f37,	// (0x00061cd5) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0006d28c) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0006d28c) main_image_pane_t

0x3f49,	// (0x00061ce7) popup_image_details_window_cp01

0x3f53,	// (0x00061cf1) popup_toobar_trans_pane_cp01_ParamLimits

0x3f53,	// (0x00061cf1) popup_toobar_trans_pane_cp01

0x4510,	// (0x000622ae) popup_image_details_window_ParamLimits

0x4510,	// (0x000622ae) popup_image_details_window

0xc857,	// (0x0006a5f5) popup_image_focus_window

0x483c,	// (0x000625da) camera2_autofocus_pane_ParamLimits

0x483c,	// (0x000625da) camera2_autofocus_pane

0x9c4a,	// (0x000679e8) bg_popup_sub_pane_cp06

0xcd7c,	// (0x0006ab1a) popup_image_focus_window_g1

0xcd84,	// (0x0006ab22) popup_image_focus_window_g2

0xcd8c,	// (0x0006ab2a) popup_image_focus_window_g3

0xcd94,	// (0x0006ab32) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0006d49b) popup_image_focus_window_g

0xcd9c,	// (0x0006ab3a) popup_image_focus_window_t1

0xcdaa,	// (0x0006ab48) popup_image_focus_window_t2

0xcdba,	// (0x0006ab58) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0006d4a4) popup_image_focus_window_t

0xcdc8,	// (0x0006ab66) camera2_autofocus_pane_g1

0xa2e1,	// (0x0006807f) bg_tb_trans_pane_cp01

0xcdd6,	// (0x0006ab74) popup_image_details_window_g1

0xcde9,	// (0x0006ab87) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0006d4b6) popup_image_details_window_g

0xce12,	// (0x0006abb0) popup_image_details_window_t1

0xce24,	// (0x0006abc2) popup_image_details_window_t2

0xce3d,	// (0x0006abdb) popup_image_details_window_t3

0xce51,	// (0x0006abef) popup_image_details_window_t4

0xce6c,	// (0x0006ac0a) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0006d4bd) popup_image_details_window_t

0xa8cd,	// (0x0006866b) bg_calc_paper_pane_ParamLimits

0x1168,	// (0x0005ef06) grid_highlight_pane_cp013

0x1172,	// (0x0005ef10) list_calc_pane_ParamLimits

0x1184,	// (0x0005ef22) scroll_pane_cp024

0xa8e1,	// (0x0006867f) bg_calc_display_pane_ParamLimits

0x118c,	// (0x0005ef2a) calc_display_pane_t1_ParamLimits

0x11a1,	// (0x0005ef3f) calc_display_pane_t2_ParamLimits

0x11b6,	// (0x0005ef54) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0006ceef) calc_display_pane_t_ParamLimits

0x128a,	// (0x0005f028) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0006cf0c) cell_calc_pane_g

0x1293,	// (0x0005f031) cell_calc_pane_t1

0xa940,	// (0x000686de) grid_highlight_pane_cp02_ParamLimits

0xa956,	// (0x000686f4) toolbar_button_pane_cp01_ParamLimits

0xa956,	// (0x000686f4) toolbar_button_pane_cp01

0xb6e8,	// (0x00069486) temp_image_control_pane_ParamLimits

0xb6e8,	// (0x00069486) temp_image_control_pane

0xa2e1,	// (0x0006807f) main_mp3_pane

0xce86,	// (0x0006ac24) temp_image_control_pane_g1_ParamLimits

0xce86,	// (0x0006ac24) temp_image_control_pane_g1

0xce94,	// (0x0006ac32) temp_image_control_pane_g2_ParamLimits

0xce94,	// (0x0006ac32) temp_image_control_pane_g2

0xcea6,	// (0x0006ac44) temp_image_control_pane_g3_ParamLimits

0xcea6,	// (0x0006ac44) temp_image_control_pane_g3

0x4ec2,	// (0x00062c60) temp_image_control_pane_g4_ParamLimits

0x4ec2,	// (0x00062c60) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0006d4c8) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0006d4c8) temp_image_control_pane_g

0xce86,	// (0x0006ac24) main_mp3_pane_g1

0x4ed3,	// (0x00062c71) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0006d4d1) main_mp3_pane_g

0xcee9,	// (0x0006ac87) main_mp3_pane_t1

0xaa9f,	// (0x0006883d) main_camera_pane_g8_ParamLimits

0xaa9f,	// (0x0006883d) main_camera_pane_g8

0x1e50,	// (0x0005fbee) main_video_pane_g7_ParamLimits

0x1e50,	// (0x0005fbee) main_video_pane_g7

0x497f,	// (0x0006271d) main_camera2_pane_t7_ParamLimits

0x497f,	// (0x0006271d) main_camera2_pane_t7

0xabeb,	// (0x00068989) scroll_pane_cp025_ParamLimits

0xabeb,	// (0x00068989) scroll_pane_cp025

0xabff,	// (0x0006899d) scroll_pane_cp026_ParamLimits

0xabff,	// (0x0006899d) scroll_pane_cp026

0xac0e,	// (0x000689ac) wml_content_pane_ParamLimits

0x9c4a,	// (0x000679e8) main_touch_calib_pane

0x4f77,	// (0x00062d15) main_touch_calib_pane_g1

0x4f83,	// (0x00062d21) main_touch_calib_pane_g2

0x4f8f,	// (0x00062d2d) main_touch_calib_pane_g3

0x4f9b,	// (0x00062d39) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0006d4ef) main_touch_calib_pane_g

0x4fa7,	// (0x00062d45) main_touch_calib_pane_t1

0x4fbe,	// (0x00062d5c) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0006d4f8) main_touch_calib_pane_t

0xb355,	// (0x000690f3) mup_progress_pane_cp02

0xb374,	// (0x00069112) navi_pane_g1

0xb3d6,	// (0x00069174) navi_pane_mp_t3

0xa2e1,	// (0x0006807f) main_mp3_pane_ParamLimits

0x45e1,	// (0x0006237f) navi_pane_ParamLimits

0xce86,	// (0x0006ac24) main_mp3_pane_g1_ParamLimits

0x4ed3,	// (0x00062c71) main_mp3_pane_g2_ParamLimits

0x4edf,	// (0x00062c7d) main_mp3_pane_g3_ParamLimits

0x4edf,	// (0x00062c7d) main_mp3_pane_g3

0x4eeb,	// (0x00062c89) main_mp3_pane_g4_ParamLimits

0x4eeb,	// (0x00062c89) main_mp3_pane_g4

0xceb6,	// (0x0006ac54) main_mp3_pane_g5_ParamLimits

0xceb6,	// (0x0006ac54) main_mp3_pane_g5

0xcec4,	// (0x0006ac62) main_mp3_pane_g6_ParamLimits

0xcec4,	// (0x0006ac62) main_mp3_pane_g6

0xced1,	// (0x0006ac6f) main_mp3_pane_g7_ParamLimits

0xced1,	// (0x0006ac6f) main_mp3_pane_g7

0xcedd,	// (0x0006ac7b) main_mp3_pane_g8_ParamLimits

0xcedd,	// (0x0006ac7b) main_mp3_pane_g8

0xf733,	// (0x0006d4d1) main_mp3_pane_g_ParamLimits

0x4ef7,	// (0x00062c95) main_mp3_pane_t2

0x4f07,	// (0x00062ca5) main_mp3_pane_t3

0xcef7,	// (0x0006ac95) main_mp3_pane_t4

0xcf05,	// (0x0006aca3) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0006d4e2) main_mp3_pane_t

0xcf13,	// (0x0006acb1) mup_progress_pane_cp01

0x0bd2,	// (0x0005e970) aid_zoom_text_secondary2

0xcd09,	// (0x0006aaa7) list_cale_ev2_pane

0xcd11,	// (0x0006aaaf) scroll_pane_cp023_ParamLimits

0xe373,	// (0x0006c111) field_cale_ev2_pane_ParamLimits

0xe373,	// (0x0006c111) field_cale_ev2_pane

0x5019,	// (0x00062db7) field_cale_ev2_pane_g1_ParamLimits

0x5019,	// (0x00062db7) field_cale_ev2_pane_g1

0x5025,	// (0x00062dc3) field_cale_ev2_pane_g2_ParamLimits

0x5025,	// (0x00062dc3) field_cale_ev2_pane_g2

0x503d,	// (0x00062ddb) field_cale_ev2_pane_g3_ParamLimits

0x503d,	// (0x00062ddb) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0006d503) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0006d503) field_cale_ev2_pane_g

0x5055,	// (0x00062df3) field_cale_ev2_pane_t1_ParamLimits

0x5055,	// (0x00062df3) field_cale_ev2_pane_t1

0x506c,	// (0x00062e0a) field_cale_ev2_pane_t2_ParamLimits

0x506c,	// (0x00062e0a) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0006d50c) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0006d50c) field_cale_ev2_pane_t

0x3dda,	// (0x00061b78) main_postcard_pane_g5_ParamLimits

0x3dda,	// (0x00061b78) main_postcard_pane_g5

0x3de8,	// (0x00061b86) main_postcard_pane_g6_ParamLimits

0x3de8,	// (0x00061b86) main_postcard_pane_g6

0x1c8e,	// (0x0005fa2c) camera2_autofocus_pane_cp_ParamLimits

0x1c8e,	// (0x0005fa2c) camera2_autofocus_pane_cp

0xa2e1,	// (0x0006807f) main_mup3_pane

0x50a1,	// (0x00062e3f) main_mup3_pane_g1_ParamLimits

0x50a1,	// (0x00062e3f) main_mup3_pane_g1

0x50c2,	// (0x00062e60) main_mup3_pane_g2_ParamLimits

0x50c2,	// (0x00062e60) main_mup3_pane_g2

0x513c,	// (0x00062eda) main_mup3_pane_g3_ParamLimits

0x513c,	// (0x00062eda) main_mup3_pane_g3

0x5181,	// (0x00062f1f) main_mup3_pane_g4_ParamLimits

0x5181,	// (0x00062f1f) main_mup3_pane_g4

0x51c4,	// (0x00062f62) main_mup3_pane_g5_ParamLimits

0x51c4,	// (0x00062f62) main_mup3_pane_g5

0x5209,	// (0x00062fa7) main_mup3_pane_g6_ParamLimits

0x5209,	// (0x00062fa7) main_mup3_pane_g6

0xcf1b,	// (0x0006acb9) main_mup3_pane_g7_ParamLimits

0xcf1b,	// (0x0006acb9) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0006d51c) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0006d51c) main_mup3_pane_g

0x527f,	// (0x0006301d) main_mup3_pane_t1_ParamLimits

0x527f,	// (0x0006301d) main_mup3_pane_t1

0x52e8,	// (0x00063086) main_mup3_pane_t2_ParamLimits

0x52e8,	// (0x00063086) main_mup3_pane_t2

0x53b1,	// (0x0006314f) main_mup3_pane_t4_ParamLimits

0x53b1,	// (0x0006314f) main_mup3_pane_t4

0x5405,	// (0x000631a3) main_mup3_pane_t5_ParamLimits

0x5405,	// (0x000631a3) main_mup3_pane_t5

0x54b3,	// (0x00063251) main_mup3_pane_t6_ParamLimits

0x54b3,	// (0x00063251) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0006d52d) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0006d52d) main_mup3_pane_t

0x555f,	// (0x000632fd) mup3_progress_pane_ParamLimits

0x555f,	// (0x000632fd) mup3_progress_pane

0x55d9,	// (0x00063377) popup_mup3_control_window_ParamLimits

0x55d9,	// (0x00063377) popup_mup3_control_window

0xcf29,	// (0x0006acc7) popup_mup3_text_window

0x55f6,	// (0x00063394) mup3_progress_pane_t1

0x5615,	// (0x000633b3) mup3_progress_pane_t2

0xcf31,	// (0x0006accf) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0006d53a) mup3_progress_pane_t

0xcf4e,	// (0x0006acec) mup_progress_pane_cp03

0x9c4a,	// (0x000679e8) bg_tb_trans_pane_cp04

0x5634,	// (0x000633d2) mup3_volume_pane

0x563c,	// (0x000633da) popup_mup3_control_window_g1

0xda88,	// (0x0006b826) mup3_volume_pane_g1

0xda91,	// (0x0006b82f) mup3_volume_pane_g2

0xda9a,	// (0x0006b838) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0006d541) mup3_volume_pane_g

0x9c4a,	// (0x000679e8) bg_tb_trans_pane_cp03

0xcf5e,	// (0x0006acfc) popup_mup3_text_window_g1

0xcf66,	// (0x0006ad04) popup_mup3_text_window_t1

0xa929,	// (0x000686c7) list_calc_item_pane_g1_ParamLimits

0xc9d3,	// (0x0006a771) mup_volume_pane_cp_g1

0x4fd7,	// (0x00062d75) main_touch_calib_pane_t3

0x4fed,	// (0x00062d8b) main_touch_calib_pane_t4

0x5003,	// (0x00062da1) main_touch_calib_pane_t5

0x9c54,	// (0x000679f2) aid_cell_size_toolbar2

0x9c5c,	// (0x000679fa) aid_popup3_width_pane

0x0bca,	// (0x0005e968) aid_zoom_text_msg_primary

0x1c61,	// (0x0005f9ff) vorec_t7

0xa8ed,	// (0x0006868b) bg_calc_paper_pane_g1_ParamLimits

0xa8f9,	// (0x00068697) bg_calc_paper_pane_g2_ParamLimits

0xa905,	// (0x000686a3) bg_calc_paper_pane_g3_ParamLimits

0xa911,	// (0x000686af) bg_calc_paper_pane_g4_ParamLimits

0xa91d,	// (0x000686bb) bg_calc_paper_pane_g5_ParamLimits

0x11f7,	// (0x0005ef95) bg_calc_paper_pane_g6_ParamLimits

0x1208,	// (0x0005efa6) bg_calc_paper_pane_g7_ParamLimits

0x1219,	// (0x0005efb7) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0006cef6) bg_calc_paper_pane_g_ParamLimits

0x122c,	// (0x0005efca) calc_bg_paper_pane_g9_ParamLimits

0x1d7f,	// (0x0005fb1d) image_qvga_pane_ParamLimits

0x1d7f,	// (0x0005fb1d) image_qvga_pane

0xa81c,	// (0x000685ba) bg_popup_sub_pane_cp04_ParamLimits

0xb61f,	// (0x000693bd) popup_mup_playback_window_g1_ParamLimits

0xb62b,	// (0x000693c9) popup_mup_playback_window_t1_ParamLimits

0xb640,	// (0x000693de) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0006d280) popup_mup_playback_window_t_ParamLimits

0x4aae,	// (0x0006284c) main_mup2_pane_g3_ParamLimits

0x4aae,	// (0x0006284c) main_mup2_pane_g3

0x212a,	// (0x0005fec8) popup_toolbar_window_cp04

0xba3b,	// (0x000697d9) popup_call2_audio_second_window_g3_ParamLimits

0xba3b,	// (0x000697d9) popup_call2_audio_second_window_g3

0xbe45,	// (0x00069be3) popup_call2_audio_first_window_g4_ParamLimits

0xbe45,	// (0x00069be3) popup_call2_audio_first_window_g4

0xc4c4,	// (0x0006a262) popup_call2_audio_in_window_g4_ParamLimits

0xc4c4,	// (0x0006a262) popup_call2_audio_in_window_g4

0x3eee,	// (0x00061c8c) aid_area_sk_bg_cut_ParamLimits

0x3eee,	// (0x00061c8c) aid_area_sk_bg_cut

0xb655,	// (0x000693f3) aid_area_sk_bg_cut_2_ParamLimits

0xb655,	// (0x000693f3) aid_area_sk_bg_cut_2

0x4e29,	// (0x00062bc7) aid_placing_details_win

0x4e31,	// (0x00062bcf) aid_placing_details_win_2

0xcdc8,	// (0x0006ab66) camera2_autofocus_pane_g1_ParamLimits

0x0dac,	// (0x0005eb4a) popup_fixed_preview_cale_window_ParamLimits

0x0dac,	// (0x0005eb4a) popup_fixed_preview_cale_window

0xb41d,	// (0x000691bb) navi_slider_pane_g3

0xb426,	// (0x000691c4) navi_slider_pane_g4

0xb42f,	// (0x000691cd) navi_slider_pane_g5

0xb41d,	// (0x000691bb) navi_slider_pane_g6

0x375a,	// (0x000614f8) navi_slider_pane_g7

0xb544,	// (0x000692e2) mup_scale_pane_g3

0xb54d,	// (0x000692eb) mup_scale_pane_g4

0xb556,	// (0x000692f4) mup_scale_pane_g5

0x3bdd,	// (0x0006197b) mup_scale_pane_g6

0x3be6,	// (0x00061984) mup_scale_pane_g7

0xb41d,	// (0x000691bb) cams2_slider_pane_g3

0xca55,	// (0x0006a7f3) cams2_slider_pane_g4

0x4d89,	// (0x00062b27) cams2_slider_pane_g5

0xb41d,	// (0x000691bb) cams2_slider_pane_g6

0x4d91,	// (0x00062b2f) cams2_slider_pane_g7

0xcc86,	// (0x0006aa24) camera2_autofocus_pane_cp_g1

0xc829,	// (0x0006a5c7) bg_popup_preview_window_pane_cp02_ParamLimits

0xc829,	// (0x0006a5c7) bg_popup_preview_window_pane_cp02

0xcf74,	// (0x0006ad12) list_fp_cale_pane_ParamLimits

0xcf74,	// (0x0006ad12) list_fp_cale_pane

0xcf80,	// (0x0006ad1e) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf80,	// (0x0006ad1e) popup_fixed_preview_cale_window_t1

0x5645,	// (0x000633e3) popup_fixed_preview_cale_window_t2_ParamLimits

0x5645,	// (0x000633e3) popup_fixed_preview_cale_window_t2

0x565a,	// (0x000633f8) popup_fixed_preview_cale_window_t3_ParamLimits

0x565a,	// (0x000633f8) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0006d548) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0006d548) popup_fixed_preview_cale_window_t

0x566f,	// (0x0006340d) list_single_fp_cale_pane_ParamLimits

0x566f,	// (0x0006340d) list_single_fp_cale_pane

0xcf9e,	// (0x0006ad3c) list_single_fp_cale_pane_g1_ParamLimits

0xcf9e,	// (0x0006ad3c) list_single_fp_cale_pane_g1

0xcfaa,	// (0x0006ad48) list_single_fp_cale_pane_g2_ParamLimits

0xcfaa,	// (0x0006ad48) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0006d54f) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0006d54f) list_single_fp_cale_pane_g

0xcfc3,	// (0x0006ad61) list_single_fp_cale_pane_t1_ParamLimits

0xcfc3,	// (0x0006ad61) list_single_fp_cale_pane_t1

0xcfd5,	// (0x0006ad73) list_single_fp_cale_pane_t2_ParamLimits

0xcfd5,	// (0x0006ad73) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0006d556) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0006d556) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9c4a,	// (0x000679e8) main_dialer_pane

0x567f,	// (0x0006341d) aid_cell_size_keypad

0x5689,	// (0x00063427) dialer_ne_pane

0x5693,	// (0x00063431) grid_dialer_command_1_pane

0x569b,	// (0x00063439) grid_dialer_command_2_pane

0x56a3,	// (0x00063441) grid_dialer_keypad_pane

0x56b7,	// (0x00063455) bg_popup_call_pane_cp06_ParamLimits

0x56b7,	// (0x00063455) bg_popup_call_pane_cp06

0x56c3,	// (0x00063461) dialer_ne_clear_pane_ParamLimits

0x56c3,	// (0x00063461) dialer_ne_clear_pane

0xd008,	// (0x0006ada6) dialer_ne_pane_g1

0xd010,	// (0x0006adae) dialer_ne_pane_t1_ParamLimits

0xd010,	// (0x0006adae) dialer_ne_pane_t1

0x56cf,	// (0x0006346d) dialer_ne_pane_t2_ParamLimits

0x56cf,	// (0x0006346d) dialer_ne_pane_t2

0x56ec,	// (0x0006348a) dialer_ne_pane_t3_ParamLimits

0x56ec,	// (0x0006348a) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0006d55b) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0006d55b) dialer_ne_pane_t

0x5710,	// (0x000634ae) dialer_ne_pane_t3_copy1_ParamLimits

0x5710,	// (0x000634ae) dialer_ne_pane_t3_copy1

0x5734,	// (0x000634d2) cell_dialer_keypad_pane_ParamLimits

0x5734,	// (0x000634d2) cell_dialer_keypad_pane

0x574b,	// (0x000634e9) cell_dialer_command_1_pane_ParamLimits

0x574b,	// (0x000634e9) cell_dialer_command_1_pane

0x5761,	// (0x000634ff) cell_dialer_command_2_pane_ParamLimits

0x5761,	// (0x000634ff) cell_dialer_command_2_pane

0xd022,	// (0x0006adc0) bg_button_pane_cp02_ParamLimits

0xd022,	// (0x0006adc0) bg_button_pane_cp02

0x5770,	// (0x0006350e) cell_dialer_keypad_pane_g1_ParamLimits

0x5770,	// (0x0006350e) cell_dialer_keypad_pane_g1

0xd022,	// (0x0006adc0) bg_button_pane_cp03_ParamLimits

0xd022,	// (0x0006adc0) bg_button_pane_cp03

0x5785,	// (0x00063523) cell_dialer_command_1_pane_g1_ParamLimits

0x5785,	// (0x00063523) cell_dialer_command_1_pane_g1

0xd02e,	// (0x0006adcc) bg_button_pane_cp04

0x5799,	// (0x00063537) cell_dialer_command_2_pane_g1

0xaa97,	// (0x00068835) bg_button_pane_cp06

0xd036,	// (0x0006add4) dialer_ne_clear_pane_g1

0x3695,	// (0x00061433) navi_pane_g2

0x36c3,	// (0x00061461) navi_pane_g3

0x0002,

0xf3e5,	// (0x0006d183) navi_pane_g

0x36ee,	// (0x0006148c) navi_pane_mv_g2

0x3715,	// (0x000614b3) navi_pane_mv_g5

0x371d,	// (0x000614bb) navi_pane_mv_t1

0xa8e1,	// (0x0006867f) main_clock2_pane

0x57d7,	// (0x00063575) main_clock2_list_pane_ParamLimits

0x57d7,	// (0x00063575) main_clock2_list_pane

0x5801,	// (0x0006359f) main_clock2_pane_t1_ParamLimits

0x5801,	// (0x0006359f) main_clock2_pane_t1

0x5823,	// (0x000635c1) main_clock2_pane_t2_ParamLimits

0x5823,	// (0x000635c1) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0006d567) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0006d567) main_clock2_pane_t

0x5880,	// (0x0006361e) popup_clock_analogue_window_cp03_ParamLimits

0x5880,	// (0x0006361e) popup_clock_analogue_window_cp03

0x58a0,	// (0x0006363e) popup_clock_digital_window_cp02_ParamLimits

0x58a0,	// (0x0006363e) popup_clock_digital_window_cp02

0x5911,	// (0x000636af) main_clock2_list_single_pane_ParamLimits

0x5911,	// (0x000636af) main_clock2_list_single_pane

0xaa97,	// (0x00068835) list_highlight_pane_cp05

0xd072,	// (0x0006ae10) main_clock2_list_single_pane_t1

0x212a,	// (0x0005fec8) popup_toolbar_window_cp04_ParamLimits

0x4e92,	// (0x00062c30) camera2_autofocus_pane_g2_ParamLimits

0x4e92,	// (0x00062c30) camera2_autofocus_pane_g2

0x4e9e,	// (0x00062c3c) camera2_autofocus_pane_g3_ParamLimits

0x4e9e,	// (0x00062c3c) camera2_autofocus_pane_g3

0x4eaa,	// (0x00062c48) camera2_autofocus_pane_g4_ParamLimits

0x4eaa,	// (0x00062c48) camera2_autofocus_pane_g4

0x4eb6,	// (0x00062c54) camera2_autofocus_pane_g5_ParamLimits

0x4eb6,	// (0x00062c54) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0006d4ab) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0006d4ab) camera2_autofocus_pane_g

0x5081,	// (0x00062e1f) camera2_autofocus_pane_cp_g2

0x5089,	// (0x00062e27) camera2_autofocus_pane_cp_g3

0x5091,	// (0x00062e2f) camera2_autofocus_pane_cp_g4

0x5099,	// (0x00062e37) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0006d511) camera2_autofocus_pane_cp_g

0x56af,	// (0x0006344d) popup_dialer_spcha_window

0x9c4a,	// (0x000679e8) bg_popup_sub_pane_cp07

0xd080,	// (0x0006ae1e) list_spcha_pane

0xd088,	// (0x0006ae26) list_single_spcha_pane_ParamLimits

0xd088,	// (0x0006ae26) list_single_spcha_pane

0x9c4a,	// (0x000679e8) list_highlight_pane_cp06

0xd099,	// (0x0006ae37) list_single_spcha_pane_t1

0xc26e,	// (0x0006a00c) popup_call2_audio_out_window_g4_ParamLimits

0xc26e,	// (0x0006a00c) popup_call2_audio_out_window_g4

0x9c4a,	// (0x000679e8) main_imed2_pane

0xc861,	// (0x0006a5ff) popup_imed_adjust2_window

0x451e,	// (0x000622bc) popup_imed_trans_window_ParamLimits

0x451e,	// (0x000622bc) popup_imed_trans_window

0xcabe,	// (0x0006a85c) popup_blid_sat_info2_window_t1

0xcacc,	// (0x0006a86a) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0006d440) popup_blid_sat_info2_window_t

0x59bb,	// (0x00063759) aid_size_cell_colour_35

0x59d5,	// (0x00063773) aid_size_cell_colour_112

0x59ec,	// (0x0006378a) aid_size_cell_effect

0xa2e1,	// (0x0006807f) bg_tb_trans_pane_cp02

0xb155,	// (0x00068ef3) heading_imed_pane

0x5a06,	// (0x000637a4) listscroll_imed_pane

0xd0a7,	// (0x0006ae45) heading_imed_pane_g1

0xd0af,	// (0x0006ae4d) heading_imed_pane_t1

0xd0bd,	// (0x0006ae5b) grid_imed_colour_35_pane_ParamLimits

0xd0bd,	// (0x0006ae5b) grid_imed_colour_35_pane

0x5a12,	// (0x000637b0) grid_imed_effect_pane

0xd0d9,	// (0x0006ae77) list_imed_aspect_pane

0x5a22,	// (0x000637c0) scroll_pane_cp027_ParamLimits

0x5a22,	// (0x000637c0) scroll_pane_cp027

0x5a2e,	// (0x000637cc) cell_imed_effect_pane_ParamLimits

0x5a2e,	// (0x000637cc) cell_imed_effect_pane

0xd0e1,	// (0x0006ae7f) cell_imed_colour_pane_ParamLimits

0xd0e1,	// (0x0006ae7f) cell_imed_colour_pane

0xd12b,	// (0x0006aec9) cell_imed_colour_pane_g1_ParamLimits

0xd12b,	// (0x0006aec9) cell_imed_colour_pane_g1

0xd13c,	// (0x0006aeda) hgihlgiht_grid_pane_cp016_ParamLimits

0xd13c,	// (0x0006aeda) hgihlgiht_grid_pane_cp016

0x5a4a,	// (0x000637e8) cell_imed_effect_pane_g1

0x5a52,	// (0x000637f0) grid_highlight_pane_cp017

0xd14d,	// (0x0006aeeb) list_imed_single_pane_ParamLimits

0xd14d,	// (0x0006aeeb) list_imed_single_pane

0x9c4a,	// (0x000679e8) list_highlight_pane_cp07

0xd161,	// (0x0006aeff) list_imed_aspect_pane_comp1_t1

0xc835,	// (0x0006a5d3) bg_tb_trans_pane_cp05

0xd183,	// (0x0006af21) popup_imed_adjust2_window_g1

0xd1b2,	// (0x0006af50) popup_imed_adjust2_window_t1

0xd1ca,	// (0x0006af68) slider_imed_adjust_pane

0xd1de,	// (0x0006af7c) slider_imed_adjust_pane_g1

0xd1ee,	// (0x0006af8c) slider_imed_adjust_pane_g2

0xd1fe,	// (0x0006af9c) slider_imed_adjust_pane_g3

0xd20f,	// (0x0006afad) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0006d584) slider_imed_adjust_pane_g

0x5a5b,	// (0x000637f9) aid_size_cell_clipart2

0x5a67,	// (0x00063805) grid_imed_clipart_pane

0xd220,	// (0x0006afbe) scroll_pane_cp031

0x5a71,	// (0x0006380f) cell_imed_clipart_pane_ParamLimits

0x5a71,	// (0x0006380f) cell_imed_clipart_pane

0x5a8f,	// (0x0006382d) cell_imed_clipart_pane_g1

0x9c4a,	// (0x000679e8) grid_highlight_pane_cp014

0x57e3,	// (0x00063581) main_clock2_pane_g1_ParamLimits

0x57e3,	// (0x00063581) main_clock2_pane_g1

0x58bc,	// (0x0006365a) aid_call2_pane_cp10

0x58ce,	// (0x0006366c) aid_call_pane_cp10

0xb349,	// (0x000690e7) popup_clock_analogue_window_cp10_g1

0xb349,	// (0x000690e7) popup_clock_analogue_window_cp10_g2

0x58e0,	// (0x0006367e) popup_clock_analogue_window_cp10_g3

0x58e0,	// (0x0006367e) popup_clock_analogue_window_cp10_g4

0xb349,	// (0x000690e7) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0006d572) popup_clock_analogue_window_cp10_g

0x58f2,	// (0x00063690) popup_clock_analogue_window_cp10_t1

0x5923,	// (0x000636c1) clock_digital_number_pane_cp10_ParamLimits

0x5923,	// (0x000636c1) clock_digital_number_pane_cp10

0x593b,	// (0x000636d9) clock_digital_number_pane_cp11_ParamLimits

0x593b,	// (0x000636d9) clock_digital_number_pane_cp11

0x5953,	// (0x000636f1) clock_digital_number_pane_cp12_ParamLimits

0x5953,	// (0x000636f1) clock_digital_number_pane_cp12

0x596b,	// (0x00063709) clock_digital_number_pane_cp13_ParamLimits

0x596b,	// (0x00063709) clock_digital_number_pane_cp13

0x5983,	// (0x00063721) clock_digital_separator_pane_cp10_ParamLimits

0x5983,	// (0x00063721) clock_digital_separator_pane_cp10

0x599b,	// (0x00063739) popup_clock_digital_window_cp02_t1_ParamLimits

0x599b,	// (0x00063739) popup_clock_digital_window_cp02_t1

0xa814,	// (0x000685b2) clock_digital_number_pane_cp10_g1

0xa814,	// (0x000685b2) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0006d58d) clock_digital_number_pane_cp10_g

0xa814,	// (0x000685b2) clock_digital_separator_pane_cp10_g1

0xa814,	// (0x000685b2) clock_digital_separator_pane_g2_cp10

0xb3e4,	// (0x00069182) navi_pane_vded_g4

0xb3ed,	// (0x0006918b) navi_pane_vded_g5

0xb3f6,	// (0x00069194) navi_pane_vded_t1

0x9c4a,	// (0x000679e8) main_vded_pane

0x5a98,	// (0x00063836) main_vded_pane_g1

0x5aa4,	// (0x00063842) main_vded_pane_g2

0x5aae,	// (0x0006384c) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0006d592) main_vded_pane_g

0x5ab8,	// (0x00063856) main_vded_pane_t1

0x5ac6,	// (0x00063864) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0006d599) main_vded_pane_t

0x5ad4,	// (0x00063872) vded_slider_pane

0x5ade,	// (0x0006387c) vded_video_pane

0xd228,	// (0x0006afc6) vded_video_pane_g1

0x5aea,	// (0x00063888) vded_video_pane_g2

0xcc86,	// (0x0006aa24) vded_video_pane_g3

0x0002,

0xf800,	// (0x0006d59e) vded_video_pane_g

0xd232,	// (0x0006afd0) vded_slider_pane_g1

0xc9d3,	// (0x0006a771) vded_slider_pane_g2

0xd23b,	// (0x0006afd9) vded_slider_pane_g3

0xd244,	// (0x0006afe2) vded_slider_pane_g4

0xd24d,	// (0x0006afeb) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0006d5a5) vded_slider_pane_g

0x55cd,	// (0x0006336b) mup3_rocker_pane_ParamLimits

0x55cd,	// (0x0006336b) mup3_rocker_pane

0x5af3,	// (0x00063891) mup3_control_keys_pane_g1

0x5afb,	// (0x00063899) mup3_control_keys_pane_g2

0x5b03,	// (0x000638a1) mup3_control_keys_pane_g3

0x5b0b,	// (0x000638a9) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0006d5b0) mup3_control_keys_pane_g

0x0dca,	// (0x0005eb68) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0dca,	// (0x0005eb68) popup_toolbar2_fixed_window_cp01

0x55e9,	// (0x00063387) popup_toolbar2_fixed_window_cp02_ParamLimits

0x55e9,	// (0x00063387) popup_toolbar2_fixed_window_cp02

0xbbad,	// (0x0006994b) popup_call2_audio_second_window_t4_ParamLimits

0xbbad,	// (0x0006994b) popup_call2_audio_second_window_t4

0xc0db,	// (0x00069e79) popup_call2_audio_first_window_t6_ParamLimits

0xc0db,	// (0x00069e79) popup_call2_audio_first_window_t6

0xc371,	// (0x0006a10f) popup_call2_audio_out_window_t6_ParamLimits

0xc371,	// (0x0006a10f) popup_call2_audio_out_window_t6

0x9c4a,	// (0x000679e8) main_vitu_pane

0x5b1b,	// (0x000638b9) aid_size_cell_itu_ParamLimits

0x5b1b,	// (0x000638b9) aid_size_cell_itu

0x0dfc,	// (0x0005eb9a) bg_popup_window_pane_cp08_ParamLimits

0x0dfc,	// (0x0005eb9a) bg_popup_window_pane_cp08

0x5b29,	// (0x000638c7) field_vitu_entry_pane_ParamLimits

0x5b29,	// (0x000638c7) field_vitu_entry_pane

0x5b38,	// (0x000638d6) grid_vitu_function_pane_ParamLimits

0x5b38,	// (0x000638d6) grid_vitu_function_pane

0x5b48,	// (0x000638e6) grid_vitu_itu_pane_ParamLimits

0x5b48,	// (0x000638e6) grid_vitu_itu_pane

0x5b58,	// (0x000638f6) cell_vitu_itu_pane_ParamLimits

0x5b58,	// (0x000638f6) cell_vitu_itu_pane

0x5b6f,	// (0x0006390d) cell_vitu_function_pane_ParamLimits

0x5b6f,	// (0x0006390d) cell_vitu_function_pane

0xa2e1,	// (0x0006807f) bg_popup_sub_pane_cp08_ParamLimits

0xa2e1,	// (0x0006807f) bg_popup_sub_pane_cp08

0x5b83,	// (0x00063921) field_vitu_entry_pane_t1_ParamLimits

0x5b83,	// (0x00063921) field_vitu_entry_pane_t1

0xd26e,	// (0x0006b00c) field_vitu_entry_pane_t2_ParamLimits

0xd26e,	// (0x0006b00c) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0006d5be) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0006d5be) field_vitu_entry_pane_t

0xd28b,	// (0x0006b029) bg_button_pane_cp05_ParamLimits

0xd28b,	// (0x0006b029) bg_button_pane_cp05

0x5b9d,	// (0x0006393b) cell_vitu_itu_pane_g1

0x5bb5,	// (0x00063953) cell_vitu_itu_pane_t1_ParamLimits

0x5bb5,	// (0x00063953) cell_vitu_itu_pane_t1

0x5bc7,	// (0x00063965) cell_vitu_itu_pane_t2_ParamLimits

0x5bc7,	// (0x00063965) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0006d5c3) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0006d5c3) cell_vitu_itu_pane_t

0xd299,	// (0x0006b037) bg_button_pane_cp07

0x5c0a,	// (0x000639a8) cell_vitu_function_pane_g1

0x108f,	// (0x0005ee2d) main_calc_pane_g1

0x0bbe,	// (0x0005e95c) aid_visual_content_pane

0x9c4a,	// (0x000679e8) main_vradio_pane

0x5c13,	// (0x000639b1) main_vradio_pane_g1_ParamLimits

0x5c13,	// (0x000639b1) main_vradio_pane_g1

0xd2a3,	// (0x0006b041) main_vradio_pane_g2_ParamLimits

0xd2a3,	// (0x0006b041) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0006d5ca) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0006d5ca) main_vradio_pane_g

0x5c21,	// (0x000639bf) main_vradio_pane_t1_ParamLimits

0x5c21,	// (0x000639bf) main_vradio_pane_t1

0x5c33,	// (0x000639d1) main_vradio_pane_t2_ParamLimits

0x5c33,	// (0x000639d1) main_vradio_pane_t2

0xd2b0,	// (0x0006b04e) main_vradio_pane_t3_ParamLimits

0xd2b0,	// (0x0006b04e) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0006d5cf) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0006d5cf) main_vradio_pane_t

0x5c45,	// (0x000639e3) vradio_rocker_control_pane_ParamLimits

0x5c45,	// (0x000639e3) vradio_rocker_control_pane

0x5c51,	// (0x000639ef) vradio_station_info_pane_ParamLimits

0x5c51,	// (0x000639ef) vradio_station_info_pane

0xd2c4,	// (0x0006b062) vradio_frequency_info_pane_ParamLimits

0xd2c4,	// (0x0006b062) vradio_frequency_info_pane

0xcc86,	// (0x0006aa24) vradio_station_info_pane_g1

0xd2d3,	// (0x0006b071) vradio_station_info_pane_t1_ParamLimits

0xd2d3,	// (0x0006b071) vradio_station_info_pane_t1

0xd2f5,	// (0x0006b093) vradio_station_info_pane_t2_ParamLimits

0xd2f5,	// (0x0006b093) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0006d5d6) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0006d5d6) vradio_station_info_pane_t

0xd307,	// (0x0006b0a5) vradio_tuning_pane

0xd30f,	// (0x0006b0ad) vradio_rocker_control_pane_g1

0xd317,	// (0x0006b0b5) vradio_rocker_control_pane_g2

0xd31f,	// (0x0006b0bd) vradio_rocker_control_pane_g3

0xd327,	// (0x0006b0c5) vradio_rocker_control_pane_g4

0xd32f,	// (0x0006b0cd) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0006d5db) vradio_rocker_control_pane_g

0x5c5e,	// (0x000639fc) vradio_frequency_info_pane_g1

0xd337,	// (0x0006b0d5) vradio_frequency_info_pane_t1_ParamLimits

0xd337,	// (0x0006b0d5) vradio_frequency_info_pane_t1

0x5c68,	// (0x00063a06) vradio_tuning_pane_g1

0x5c73,	// (0x00063a11) vradio_tuning_pane_t1

0x9c70,	// (0x00067a0e) area_side_right_pane_ParamLimits

0x9c70,	// (0x00067a0e) area_side_right_pane

0xc7f0,	// (0x0006a58e) status_small_pane_g1

0xc7f8,	// (0x0006a596) status_small_pane_g2

0xc801,	// (0x0006a59f) status_small_pane_g3

0xc80a,	// (0x0006a5a8) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0006d396) status_small_pane_g

0xc813,	// (0x0006a5b1) status_small_pane_t1

0x9c4a,	// (0x000679e8) main_video3_pane

0xd34b,	// (0x0006b0e9) cams_zoom_vslider_pane

0xd353,	// (0x0006b0f1) image3_wide_pane_ParamLimits

0xd353,	// (0x0006b0f1) image3_wide_pane

0xd36d,	// (0x0006b10b) image3_wide_small_pane

0xd379,	// (0x0006b117) main_video3_pane_g1_ParamLimits

0xd379,	// (0x0006b117) main_video3_pane_g1

0xd395,	// (0x0006b133) main_video3_pane_g2_ParamLimits

0xd395,	// (0x0006b133) main_video3_pane_g2

0x0001,

0xf848,	// (0x0006d5e6) main_video3_pane_g_ParamLimits

0xf848,	// (0x0006d5e6) main_video3_pane_g

0xd3b1,	// (0x0006b14f) main_video3_pane_t1_ParamLimits

0xd3b1,	// (0x0006b14f) main_video3_pane_t1

0xd3dc,	// (0x0006b17a) main_video3_pane_t2_ParamLimits

0xd3dc,	// (0x0006b17a) main_video3_pane_t2

0xd409,	// (0x0006b1a7) main_video3_pane_t3_ParamLimits

0xd409,	// (0x0006b1a7) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0006d5eb) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0006d5eb) main_video3_pane_t

0xd436,	// (0x0006b1d4) cams_zoom_vslider_pane_g1

0xd43f,	// (0x0006b1dd) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0006d5f2) cams_zoom_vslider_pane_g

0xd447,	// (0x0006b1e5) small_slider_vertical_pane

0xcc86,	// (0x0006aa24) small_slider_vertical_pane_g1

0xcc86,	// (0x0006aa24) small_slider_vertical_pane_g2

0xd44f,	// (0x0006b1ed) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0006d5f7) small_slider_vertical_pane_g

0x9c4a,	// (0x000679e8) main_hwr_training_pane

0xd458,	// (0x0006b1f6) hwr_training_instruct_pane_ParamLimits

0xd458,	// (0x0006b1f6) hwr_training_instruct_pane

0x5c82,	// (0x00063a20) hwr_training_navi_pane_ParamLimits

0x5c82,	// (0x00063a20) hwr_training_navi_pane

0x5c9c,	// (0x00063a3a) hwr_training_write_pane_ParamLimits

0x5c9c,	// (0x00063a3a) hwr_training_write_pane

0x9c4a,	// (0x000679e8) bg_frame_shadow_pane

0xd48f,	// (0x0006b22d) hwr_training_write_pane_g1

0xd497,	// (0x0006b235) hwr_training_write_pane_g2

0xd49f,	// (0x0006b23d) hwr_training_write_pane_g3

0xd4a7,	// (0x0006b245) hwr_training_write_pane_g4

0xd4af,	// (0x0006b24d) hwr_training_write_pane_g5

0xd4b7,	// (0x0006b255) hwr_training_write_pane_g6

0xd4bf,	// (0x0006b25d) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0006d5fe) hwr_training_write_pane_g

0x5cd4,	// (0x00063a72) hwr_training_navi_pane_g1_ParamLimits

0x5cd4,	// (0x00063a72) hwr_training_navi_pane_g1

0x5ce6,	// (0x00063a84) hwr_training_navi_pane_g2_ParamLimits

0x5ce6,	// (0x00063a84) hwr_training_navi_pane_g2

0x5cf8,	// (0x00063a96) hwr_training_navi_pane_g3_ParamLimits

0x5cf8,	// (0x00063a96) hwr_training_navi_pane_g3

0x5d08,	// (0x00063aa6) hwr_training_navi_pane_g4_ParamLimits

0x5d08,	// (0x00063aa6) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0006d60d) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0006d60d) hwr_training_navi_pane_g

0x5d22,	// (0x00063ac0) hwr_training_navi_pane_t1

0x5d30,	// (0x00063ace) list_single_hwr_training_instruct_pane_ParamLimits

0x5d30,	// (0x00063ace) list_single_hwr_training_instruct_pane

0xd4c7,	// (0x0006b265) list_single_hwr_training_instruct_pane_t1

0xcbc6,	// (0x0006a964) bg_frame_shadow_pane_g1

0xd4d6,	// (0x0006b274) bg_frame_shadow_pane_g2

0xd4de,	// (0x0006b27c) bg_frame_shadow_pane_g3

0xd4e6,	// (0x0006b284) bg_frame_shadow_pane_g4

0xd4ee,	// (0x0006b28c) bg_frame_shadow_pane_g5

0xd4f6,	// (0x0006b294) bg_frame_shadow_pane_g6

0xd4fe,	// (0x0006b29c) bg_frame_shadow_pane_g7

0xa9ac,	// (0x0006874a) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0006d618) bg_frame_shadow_pane_g

0x9c4a,	// (0x000679e8) main_video_tele_dialer_pane

0x5d49,	// (0x00063ae7) aid_size_cell_video_keypad_ParamLimits

0x5d49,	// (0x00063ae7) aid_size_cell_video_keypad

0x5d59,	// (0x00063af7) grid_video_dialer_keypad_pane_ParamLimits

0x5d59,	// (0x00063af7) grid_video_dialer_keypad_pane

0x5d8b,	// (0x00063b29) video_down_pane_cp_ParamLimits

0x5d8b,	// (0x00063b29) video_down_pane_cp

0x5db3,	// (0x00063b51) cell_video_dialer_keypad_pane_ParamLimits

0x5db3,	// (0x00063b51) cell_video_dialer_keypad_pane

0xd506,	// (0x0006b2a4) bg_button_pane_cp08_ParamLimits

0xd506,	// (0x0006b2a4) bg_button_pane_cp08

0x5dca,	// (0x00063b68) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5dca,	// (0x00063b68) cell_video_dialer_keypad_pane_g1

0x55c1,	// (0x0006335f) mup3_rocker2_pane_ParamLimits

0x55c1,	// (0x0006335f) mup3_rocker2_pane

0xcc86,	// (0x0006aa24) mup3_rocker2_pane_g1

0x44a0,	// (0x0006223e) main_dialer2_pane

0x9c4a,	// (0x000679e8) main_mp4_pane

0x5e09,	// (0x00063ba7) main_mp4_pane_g1_ParamLimits

0x5e09,	// (0x00063ba7) main_mp4_pane_g1

0x5e17,	// (0x00063bb5) main_mp4_pane_g2_ParamLimits

0x5e17,	// (0x00063bb5) main_mp4_pane_g2

0x5e25,	// (0x00063bc3) main_mp4_pane_g3_ParamLimits

0x5e25,	// (0x00063bc3) main_mp4_pane_g3

0x5e78,	// (0x00063c16) main_mp4_pane_g4_ParamLimits

0x5e78,	// (0x00063c16) main_mp4_pane_g4

0x5ea0,	// (0x00063c3e) main_mp4_pane_g5_ParamLimits

0x5ea0,	// (0x00063c3e) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0006d638) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0006d638) main_mp4_pane_g

0x5ef0,	// (0x00063c8e) main_mp4_pane_t1_ParamLimits

0x5ef0,	// (0x00063c8e) main_mp4_pane_t1

0x5f4c,	// (0x00063cea) main_mp4_pane_t2_ParamLimits

0x5f4c,	// (0x00063cea) main_mp4_pane_t2

0xd512,	// (0x0006b2b0) main_mp4_pane_t3_ParamLimits

0xd512,	// (0x0006b2b0) main_mp4_pane_t3

0x5f9e,	// (0x00063d3c) main_mp4_pane_t4_ParamLimits

0x5f9e,	// (0x00063d3c) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0006d645) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0006d645) main_mp4_pane_t

0x5fde,	// (0x00063d7c) mp4_progress_pane_ParamLimits

0x5fde,	// (0x00063d7c) mp4_progress_pane

0x6028,	// (0x00063dc6) mp4_rocker_pane_ParamLimits

0x6028,	// (0x00063dc6) mp4_rocker_pane

0xd53a,	// (0x0006b2d8) mp4_progress_pane_t1

0xd553,	// (0x0006b2f1) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0006d64e) mp4_progress_pane_t

0xd56c,	// (0x0006b30a) mup_progress_pane_cp04

0xdaa3,	// (0x0006b841) mp4_rocker_pane_g1

0x604a,	// (0x00063de8) aid_cell_size_keypad2_ParamLimits

0x604a,	// (0x00063de8) aid_cell_size_keypad2

0x605a,	// (0x00063df8) dialer2_ne_pane_ParamLimits

0x605a,	// (0x00063df8) dialer2_ne_pane

0x6066,	// (0x00063e04) grid_dialer2_keypad_pane_ParamLimits

0x6066,	// (0x00063e04) grid_dialer2_keypad_pane

0xdaad,	// (0x0006b84b) bg_popup_call_pane_cp07_ParamLimits

0xdaad,	// (0x0006b84b) bg_popup_call_pane_cp07

0x6074,	// (0x00063e12) dialer2_ne_pane_t1_ParamLimits

0x6074,	// (0x00063e12) dialer2_ne_pane_t1

0x6099,	// (0x00063e37) cell_dialer2_keypad_pane_ParamLimits

0x6099,	// (0x00063e37) cell_dialer2_keypad_pane

0xd58a,	// (0x0006b328) bg_button_pane_pane_cp04_ParamLimits

0xd58a,	// (0x0006b328) bg_button_pane_pane_cp04

0x60b0,	// (0x00063e4e) cell_dialer2_keypad_pane_g1_ParamLimits

0x60b0,	// (0x00063e4e) cell_dialer2_keypad_pane_g1

0x1ffc,	// (0x0005fd9a) aid_placing_vt_set_content_ParamLimits

0x1ffc,	// (0x0005fd9a) aid_placing_vt_set_content

0x2024,	// (0x0005fdc2) aid_placing_vt_set_title_ParamLimits

0x2024,	// (0x0005fdc2) aid_placing_vt_set_title

0x9c4a,	// (0x000679e8) main_image3_pane

0x614a,	// (0x00063ee8) area_side_right_pane_cp01_ParamLimits

0x614a,	// (0x00063ee8) area_side_right_pane_cp01

0x6179,	// (0x00063f17) main_image3_pane_g1_ParamLimits

0x6179,	// (0x00063f17) main_image3_pane_g1

0x6187,	// (0x00063f25) main_image3_pane_g2_ParamLimits

0x6187,	// (0x00063f25) main_image3_pane_g2

0x61a0,	// (0x00063f3e) main_image3_pane_g3_ParamLimits

0x61a0,	// (0x00063f3e) main_image3_pane_g3

0x61b9,	// (0x00063f57) main_image3_pane_g4_ParamLimits

0x61b9,	// (0x00063f57) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0006d65d) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0006d65d) main_image3_pane_g

0x61d2,	// (0x00063f70) main_image3_pane_t1_ParamLimits

0x61d2,	// (0x00063f70) main_image3_pane_t1

0x61f7,	// (0x00063f95) main_image3_pane_t2_ParamLimits

0x61f7,	// (0x00063f95) main_image3_pane_t2

0x6216,	// (0x00063fb4) main_image3_pane_t3_ParamLimits

0x6216,	// (0x00063fb4) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0006d666) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0006d666) main_image3_pane_t

0x0dfc,	// (0x0005eb9a) grid_sctrl_middle_pane_cp01_ParamLimits

0x0dfc,	// (0x0005eb9a) grid_sctrl_middle_pane_cp01

0x6277,	// (0x00064015) cell_sctrl_middle_pane_cp01_ParamLimits

0x6277,	// (0x00064015) cell_sctrl_middle_pane_cp01

0x6288,	// (0x00064026) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6288,	// (0x00064026) cell_sctrl_middle_pane_cp01_g1

0x9c4a,	// (0x000679e8) main_call4_pane

0x6295,	// (0x00064033) aid_size_button_call4_ParamLimits

0x6295,	// (0x00064033) aid_size_button_call4

0x62c7,	// (0x00064065) call4_windows_pane_ParamLimits

0x62c7,	// (0x00064065) call4_windows_pane

0x62e3,	// (0x00064081) grid_call4_button_pane_ParamLimits

0x62e3,	// (0x00064081) grid_call4_button_pane

0xd596,	// (0x0006b334) call4_windows_conf_pane

0x6307,	// (0x000640a5) popup_call4_audio_first_window_ParamLimits

0x6307,	// (0x000640a5) popup_call4_audio_first_window

0x6333,	// (0x000640d1) popup_call4_audio_second_window_ParamLimits

0x6333,	// (0x000640d1) popup_call4_audio_second_window

0xd5d3,	// (0x0006b371) popup_call4_audio_wait_window_ParamLimits

0xd5d3,	// (0x0006b371) popup_call4_audio_wait_window

0x6347,	// (0x000640e5) cell_call4_button_pane_ParamLimits

0x6347,	// (0x000640e5) cell_call4_button_pane

0x636a,	// (0x00064108) bg_button_pane_cp09_ParamLimits

0x636a,	// (0x00064108) bg_button_pane_cp09

0x6376,	// (0x00064114) cell_call4_button_pane_g1_ParamLimits

0x6376,	// (0x00064114) cell_call4_button_pane_g1

0x6383,	// (0x00064121) cell_call4_button_pane_t1_ParamLimits

0x6383,	// (0x00064121) cell_call4_button_pane_t1

0xd627,	// (0x0006b3c5) popup_call4_audio_conf_window_ParamLimits

0xd627,	// (0x0006b3c5) popup_call4_audio_conf_window

0x55f6,	// (0x00063394) mup3_progress_pane_t1_ParamLimits

0x5615,	// (0x000633b3) mup3_progress_pane_t2_ParamLimits

0xcf31,	// (0x0006accf) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0006d53a) mup3_progress_pane_t_ParamLimits

0xcf4e,	// (0x0006acec) mup_progress_pane_cp03_ParamLimits

0x5b13,	// (0x000638b1) mup3_control_keys_pane_g4_copy1

0x600c,	// (0x00063daa) mp4_rocker2_pane_ParamLimits

0x600c,	// (0x00063daa) mp4_rocker2_pane

0xd641,	// (0x0006b3df) mp4_rocker2_pane_g1

0xd649,	// (0x0006b3e7) mp4_rocker2_pane_g2

0x6395,	// (0x00064133) mp4_rocker2_pane_g3

0x639d,	// (0x0006413b) mp4_rocker2_pane_g4

0x63a5,	// (0x00064143) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0006d66f) mp4_rocker2_pane_g

0x9c4a,	// (0x000679e8) main_camera4_pane

0x9c4a,	// (0x000679e8) main_video4_pane

0x5d67,	// (0x00063b05) main_video_tele_dialer_pane_t1_ParamLimits

0x5d67,	// (0x00063b05) main_video_tele_dialer_pane_t1

0x5d79,	// (0x00063b17) main_video_tele_dialer_pane_t2_ParamLimits

0x5d79,	// (0x00063b17) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0006d629) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0006d629) main_video_tele_dialer_pane_t

0x63c5,	// (0x00064163) cam4_autofocus_pane_ParamLimits

0x63c5,	// (0x00064163) cam4_autofocus_pane

0x63dd,	// (0x0006417b) cam4_image_uncrop_pane_ParamLimits

0x63dd,	// (0x0006417b) cam4_image_uncrop_pane

0x63f6,	// (0x00064194) cam4_indicators_pane_ParamLimits

0x63f6,	// (0x00064194) cam4_indicators_pane

0x6412,	// (0x000641b0) main_camera4_pane_g1_ParamLimits

0x6412,	// (0x000641b0) main_camera4_pane_g1

0x641e,	// (0x000641bc) main_camera4_pane_g2_ParamLimits

0x641e,	// (0x000641bc) main_camera4_pane_g2

0x641e,	// (0x000641bc) main_camera4_pane_g3_ParamLimits

0x641e,	// (0x000641bc) main_camera4_pane_g3

0x642a,	// (0x000641c8) main_camera4_pane_g4_ParamLimits

0x642a,	// (0x000641c8) main_camera4_pane_g4

0x6436,	// (0x000641d4) main_camera4_pane_g5_ParamLimits

0x6436,	// (0x000641d4) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0006d67a) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0006d67a) main_camera4_pane_g

0x6450,	// (0x000641ee) main_camera4_pane_t1_ParamLimits

0x6450,	// (0x000641ee) main_camera4_pane_t1

0x649a,	// (0x00064238) bg_tb_trans_pane_cp06

0x64b0,	// (0x0006424e) cam4_indicators_pane_g1

0x64c1,	// (0x0006425f) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0006d695) cam4_indicators_pane_g

0x64d9,	// (0x00064277) cam4_indicators_pane_t1

0x6503,	// (0x000642a1) main_video4_pane_g1_ParamLimits

0x6503,	// (0x000642a1) main_video4_pane_g1

0x650f,	// (0x000642ad) main_video4_pane_g2_ParamLimits

0x650f,	// (0x000642ad) main_video4_pane_g2

0x651b,	// (0x000642b9) main_video4_pane_g3_ParamLimits

0x651b,	// (0x000642b9) main_video4_pane_g3

0x6527,	// (0x000642c5) main_video4_pane_g4_ParamLimits

0x6527,	// (0x000642c5) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0006d69c) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0006d69c) main_video4_pane_g

0x6549,	// (0x000642e7) vid4_indicators_pane_ParamLimits

0x6549,	// (0x000642e7) vid4_indicators_pane

0x6568,	// (0x00064306) video4_image_uncrop_cif_pane_ParamLimits

0x6568,	// (0x00064306) video4_image_uncrop_cif_pane

0x6577,	// (0x00064315) video4_image_uncrop_nhd_pane_ParamLimits

0x6577,	// (0x00064315) video4_image_uncrop_nhd_pane

0x63dd,	// (0x0006417b) video4_image_uncrop_vga_pane_ParamLimits

0x63dd,	// (0x0006417b) video4_image_uncrop_vga_pane

0x6586,	// (0x00064324) bg_tb_trans_pane_cp07

0x659e,	// (0x0006433c) vid4_indicators_pane_g1

0x65b4,	// (0x00064352) vid4_indicators_pane_g2

0x65c8,	// (0x00064366) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0006d6a7) vid4_indicators_pane_g

0x65f9,	// (0x00064397) vid4_indicators_pane_t1

0x6610,	// (0x000643ae) cam4_autofocus_pane_g1

0x6618,	// (0x000643b6) cam4_autofocus_pane_g2

0x6620,	// (0x000643be) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0006d6b2) cam4_autofocus_pane_g

0x6628,	// (0x000643c6) cam4_autofocus_pane_g3_copy1

0x5d97,	// (0x00063b35) video_down_pane_cp_t1

0x5da5,	// (0x00063b43) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0006d62e) video_down_pane_cp_t

0x0dfc,	// (0x0005eb9a) popup_vitu2_window_ParamLimits

0x0dfc,	// (0x0005eb9a) popup_vitu2_window

0x6630,	// (0x000643ce) aid_size_cell2_itu2_ParamLimits

0x6630,	// (0x000643ce) aid_size_cell2_itu2

0x6652,	// (0x000643f0) aid_size_cell_itu2_ParamLimits

0x6652,	// (0x000643f0) aid_size_cell_itu2

0x6698,	// (0x00064436) bg_popup_window_pane_cp09_ParamLimits

0x6698,	// (0x00064436) bg_popup_window_pane_cp09

0x66a6,	// (0x00064444) field_vitu2_entry_pane_ParamLimits

0x66a6,	// (0x00064444) field_vitu2_entry_pane

0x66c6,	// (0x00064464) grid_vitu2_function_pane_ParamLimits

0x66c6,	// (0x00064464) grid_vitu2_function_pane

0x670a,	// (0x000644a8) grid_vitu2_itu_pane_ParamLimits

0x670a,	// (0x000644a8) grid_vitu2_itu_pane

0x6786,	// (0x00064524) cell_vitu2_itu_pane_ParamLimits

0x6786,	// (0x00064524) cell_vitu2_itu_pane

0x679d,	// (0x0006453b) cell_vitu2_function_pane_ParamLimits

0x679d,	// (0x0006453b) cell_vitu2_function_pane

0xd651,	// (0x0006b3ef) bg_popup_call_pane_cp08_ParamLimits

0xd651,	// (0x0006b3ef) bg_popup_call_pane_cp08

0xd668,	// (0x0006b406) field_vitu2_entry_pane_g1

0xd674,	// (0x0006b412) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0006d6b9) field_vitu2_entry_pane_g

0x67e1,	// (0x0006457f) field_vitu2_entry_pane_t1_ParamLimits

0x67e1,	// (0x0006457f) field_vitu2_entry_pane_t1

0xa2fb,	// (0x00068099) field_vitu2_entry_pane_t2_ParamLimits

0xa2fb,	// (0x00068099) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0006d6c0) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0006d6c0) field_vitu2_entry_pane_t

0x6811,	// (0x000645af) bg_button_pane_cp010_ParamLimits

0x6811,	// (0x000645af) bg_button_pane_cp010

0x681f,	// (0x000645bd) cell_vitu2_itu_pane_g1

0x683f,	// (0x000645dd) cell_vitu2_itu_pane_t1_ParamLimits

0x683f,	// (0x000645dd) cell_vitu2_itu_pane_t1

0x0ab6,	// (0x0005e854) cell_vitu2_itu_pane_t2_ParamLimits

0x0ab6,	// (0x0005e854) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0006d6ca) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0006d6ca) cell_vitu2_itu_pane_t

0x6586,	// (0x00064324) bg_button_pane_cp011

0x688b,	// (0x00064629) cell_vitu2_function_pane_g1

0x9c4a,	// (0x000679e8) main_myfav_hc_pane

0x6258,	// (0x00063ff6) popup_image3_note_pane_ParamLimits

0x6258,	// (0x00063ff6) popup_image3_note_pane

0x6266,	// (0x00064004) popup_image3_tool_bar_pane_ParamLimits

0x6266,	// (0x00064004) popup_image3_tool_bar_pane

0x0b2c,	// (0x0005e8ca) cell_vitu2_itu_pane_t3_ParamLimits

0x0b2c,	// (0x0005e8ca) cell_vitu2_itu_pane_t3

0x9c4a,	// (0x000679e8) bg_popup_trans_pane

0xd696,	// (0x0006b434) grid_image3_tool_bar_pane

0xd6a0,	// (0x0006b43e) bg_popup_trans_pane_g1

0xacf4,	// (0x00068a92) bg_popup_trans_pane_g2

0xd6a8,	// (0x0006b446) bg_popup_trans_pane_g3

0xd6b0,	// (0x0006b44e) bg_popup_trans_pane_g4

0xd6b8,	// (0x0006b456) bg_popup_trans_pane_g5

0xd6c0,	// (0x0006b45e) bg_popup_trans_pane_g6

0xd6c8,	// (0x0006b466) bg_popup_trans_pane_g7

0xd6d0,	// (0x0006b46e) bg_popup_trans_pane_g8

0xacd4,	// (0x00068a72) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0006d6d1) bg_popup_trans_pane_g

0xd6d8,	// (0x0006b476) cell_image3_tool_bar_pane_ParamLimits

0xd6d8,	// (0x0006b476) cell_image3_tool_bar_pane

0xcc86,	// (0x0006aa24) cell_image3_tool_bar_pane_g1

0x9c4a,	// (0x000679e8) bg_popup_trans_pane_cp1

0xd6ee,	// (0x0006b48c) popup_image3_note_pane_t1

0xd6fc,	// (0x0006b49a) popup_image3_note_pane_t2

0xd70a,	// (0x0006b4a8) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0006d6e4) popup_image3_note_pane_t

0xd71a,	// (0x0006b4b8) popup_image3_note_pane_t3_copy1

0x689f,	// (0x0006463d) bg_myfav_hc_instruction_pane_ParamLimits

0x689f,	// (0x0006463d) bg_myfav_hc_instruction_pane

0x68b7,	// (0x00064655) cell_myfav_contact_pane_ParamLimits

0x68b7,	// (0x00064655) cell_myfav_contact_pane

0x68d1,	// (0x0006466f) cell_myfav_contact_pane_cp1_ParamLimits

0x68d1,	// (0x0006466f) cell_myfav_contact_pane_cp1

0x68e9,	// (0x00064687) cell_myfav_contact_pane_cp2_ParamLimits

0x68e9,	// (0x00064687) cell_myfav_contact_pane_cp2

0x6901,	// (0x0006469f) cell_myfav_contact_pane_cp3_ParamLimits

0x6901,	// (0x0006469f) cell_myfav_contact_pane_cp3

0x6918,	// (0x000646b6) cell_myfav_contact_pane_cp4_ParamLimits

0x6918,	// (0x000646b6) cell_myfav_contact_pane_cp4

0x692e,	// (0x000646cc) cell_myfav_contact_pane_cp5_ParamLimits

0x692e,	// (0x000646cc) cell_myfav_contact_pane_cp5

0x6942,	// (0x000646e0) cell_myfav_contact_pane_cp6_ParamLimits

0x6942,	// (0x000646e0) cell_myfav_contact_pane_cp6

0x6956,	// (0x000646f4) cell_myfav_contact_pane_cp7_ParamLimits

0x6956,	// (0x000646f4) cell_myfav_contact_pane_cp7

0xd728,	// (0x0006b4c6) listscroll_gen_pane_cp05

0x696e,	// (0x0006470c) main_myfav_hc_pane_g1_ParamLimits

0x696e,	// (0x0006470c) main_myfav_hc_pane_g1

0x6988,	// (0x00064726) main_myfav_hc_pane_g2_ParamLimits

0x6988,	// (0x00064726) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0006d6eb) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0006d6eb) main_myfav_hc_pane_g

0x69ba,	// (0x00064758) main_myfav_hc_pane_t1_ParamLimits

0x69ba,	// (0x00064758) main_myfav_hc_pane_t1

0xd731,	// (0x0006b4cf) main_myfav_hc_pane_t2_ParamLimits

0xd731,	// (0x0006b4cf) main_myfav_hc_pane_t2

0xd743,	// (0x0006b4e1) main_myfav_hc_pane_t3_ParamLimits

0xd743,	// (0x0006b4e1) main_myfav_hc_pane_t3

0x69d1,	// (0x0006476f) main_myfav_hc_pane_t4_ParamLimits

0x69d1,	// (0x0006476f) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0006d6f2) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0006d6f2) main_myfav_hc_pane_t

0xcc86,	// (0x0006aa24) bg_myfav_hc_instruction_pane_g1

0xd755,	// (0x0006b4f3) cell_myfav_contact_pane_g1_ParamLimits

0xd755,	// (0x0006b4f3) cell_myfav_contact_pane_g1

0xd755,	// (0x0006b4f3) cell_myfav_contact_pane_g2_ParamLimits

0xd755,	// (0x0006b4f3) cell_myfav_contact_pane_g2

0xd761,	// (0x0006b4ff) cell_myfav_contact_pane_g3_ParamLimits

0xd761,	// (0x0006b4ff) cell_myfav_contact_pane_g3

0xcf1b,	// (0x0006acb9) cell_myfav_contact_pane_g4_ParamLimits

0xcf1b,	// (0x0006acb9) cell_myfav_contact_pane_g4

0xd76e,	// (0x0006b50c) cell_myfav_contact_pane_g5_ParamLimits

0xd76e,	// (0x0006b50c) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0006d6fd) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0006d6fd) cell_myfav_contact_pane_g

0x69a2,	// (0x00064740) main_myfav_hc_pane_g3_ParamLimits

0x69a2,	// (0x00064740) main_myfav_hc_pane_g3

0x0d0e,	// (0x0005eaac) popup_adpt_find_window

0x69fb,	// (0x00064799) afind_page_pane_ParamLimits

0x69fb,	// (0x00064799) afind_page_pane

0x6a08,	// (0x000647a6) aid_size_cell_afind_ParamLimits

0x6a08,	// (0x000647a6) aid_size_cell_afind

0x6a22,	// (0x000647c0) bg_popup_sub_pane_cp09_ParamLimits

0x6a22,	// (0x000647c0) bg_popup_sub_pane_cp09

0x6a2f,	// (0x000647cd) find_pane_cp01_ParamLimits

0x6a2f,	// (0x000647cd) find_pane_cp01

0xd77a,	// (0x0006b518) grid_afind_control_pane_ParamLimits

0xd77a,	// (0x0006b518) grid_afind_control_pane

0x6a3c,	// (0x000647da) grid_afind_pane_ParamLimits

0x6a3c,	// (0x000647da) grid_afind_pane

0x6a58,	// (0x000647f6) cell_afind_pane_ParamLimits

0x6a58,	// (0x000647f6) cell_afind_pane

0xcc86,	// (0x0006aa24) afind_page_pane_g1

0x6aa2,	// (0x00064840) afind_page_pane_g2

0x6aab,	// (0x00064849) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0006d708) afind_page_pane_g

0x6ab4,	// (0x00064852) afind_page_pane_t1

0xd78e,	// (0x0006b52c) cell_afind_grid_control_pane_ParamLimits

0xd78e,	// (0x0006b52c) cell_afind_grid_control_pane

0xd58a,	// (0x0006b328) bg_button_pane_cp69_ParamLimits

0xd58a,	// (0x0006b328) bg_button_pane_cp69

0x6ad4,	// (0x00064872) cell_afind_pane_g1_ParamLimits

0x6ad4,	// (0x00064872) cell_afind_pane_g1

0x6ae1,	// (0x0006487f) cell_afind_pane_t1_ParamLimits

0x6ae1,	// (0x0006487f) cell_afind_pane_t1

0xaae9,	// (0x00068887) bg_button_pane_cp72

0xd79d,	// (0x0006b53b) cell_afind_grid_control_pane_g1

0x401b,	// (0x00061db9) aid_image_placing_area_ParamLimits

0x401b,	// (0x00061db9) aid_image_placing_area

0xd256,	// (0x0006aff4) field_vitu_entry_pane_g1_ParamLimits

0xd256,	// (0x0006aff4) field_vitu_entry_pane_g1

0xd262,	// (0x0006b000) field_vitu_entry_pane_g2_ParamLimits

0xd262,	// (0x0006b000) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0006d5b9) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0006d5b9) field_vitu_entry_pane_g

0x5b9d,	// (0x0006393b) cell_vitu_itu_pane_g1_ParamLimits

0x5bed,	// (0x0006398b) cell_vitu_itu_pane_t3_ParamLimits

0x5bed,	// (0x0006398b) cell_vitu_itu_pane_t3

0xd53a,	// (0x0006b2d8) mp4_progress_pane_t1_ParamLimits

0xd553,	// (0x0006b2f1) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0006d64e) mp4_progress_pane_t_ParamLimits

0xd56c,	// (0x0006b30a) mup_progress_pane_cp04_ParamLimits

0x69e5,	// (0x00064783) main_myfav_hc_pane_t5_ParamLimits

0x69e5,	// (0x00064783) main_myfav_hc_pane_t5

0x9c68,	// (0x00067a06) aid_zoom_text_primary

0x0d0e,	// (0x0005eaac) popup_adpt_find_window_ParamLimits

0xa2e1,	// (0x0006807f) main_cam_set_pane

0x6404,	// (0x000641a2) cam4_zoom_pane_ParamLimits

0x6404,	// (0x000641a2) cam4_zoom_pane

0x6af3,	// (0x00064891) main_cam_set_pane_g1_ParamLimits

0x6af3,	// (0x00064891) main_cam_set_pane_g1

0x6b01,	// (0x0006489f) main_cam_set_pane_g2_ParamLimits

0x6b01,	// (0x0006489f) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0006d70f) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0006d70f) main_cam_set_pane_g

0x6b0d,	// (0x000648ab) main_cam_set_pane_t1_ParamLimits

0x6b0d,	// (0x000648ab) main_cam_set_pane_t1

0x6b29,	// (0x000648c7) main_cset_listscroll_pane_ParamLimits

0x6b29,	// (0x000648c7) main_cset_listscroll_pane

0x6b58,	// (0x000648f6) main_cset_slider_pane_ParamLimits

0x6b58,	// (0x000648f6) main_cset_slider_pane

0xd7ae,	// (0x0006b54c) main_cset_list_pane_ParamLimits

0xd7ae,	// (0x0006b54c) main_cset_list_pane

0xd7be,	// (0x0006b55c) scroll_pane_cp028

0x6b79,	// (0x00064917) aid_area_touch_slider

0x6b95,	// (0x00064933) cset_slider_pane

0x6bbf,	// (0x0006495d) main_cset_slider_pane_g1

0x6bd4,	// (0x00064972) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0006d714) main_cset_slider_pane_g

0xd7f7,	// (0x0006b595) main_cset_slider_pane_t1

0x6c90,	// (0x00064a2e) main_cset_slider_pane_t2

0x6caa,	// (0x00064a48) main_cset_slider_pane_t3

0x6cc4,	// (0x00064a62) main_cset_slider_pane_t4

0x6cde,	// (0x00064a7c) main_cset_slider_pane_t5

0x6cf8,	// (0x00064a96) main_cset_slider_pane_t6

0x6d0d,	// (0x00064aab) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0006d739) main_cset_slider_pane_t

0x6e11,	// (0x00064baf) cset_list_set_pane_ParamLimits

0x6e11,	// (0x00064baf) cset_list_set_pane

0x6e22,	// (0x00064bc0) aid_position_infowindow_above

0x6e2a,	// (0x00064bc8) aid_position_infowindow_below

0x6e32,	// (0x00064bd0) cset_list_set_pane_g1_ParamLimits

0x6e32,	// (0x00064bd0) cset_list_set_pane_g1

0x6e3e,	// (0x00064bdc) cset_list_set_pane_g3_ParamLimits

0x6e3e,	// (0x00064bdc) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0006d758) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0006d758) cset_list_set_pane_g

0x6e4d,	// (0x00064beb) cset_list_set_pane_t1_ParamLimits

0x6e4d,	// (0x00064beb) cset_list_set_pane_t1

0xa2e1,	// (0x0006807f) list_highlight_pane_cp021_ParamLimits

0xa2e1,	// (0x0006807f) list_highlight_pane_cp021

0xb544,	// (0x000692e2) cset_slider_pane_g1

0xb556,	// (0x000692f4) cset_slider_pane_g2

0xb54d,	// (0x000692eb) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0006d75d) cset_slider_pane_g

0x6e62,	// (0x00064c00) aid_area_touch_cam4_zoom

0x6e6a,	// (0x00064c08) cam4_zoom_cont_pane

0x6e72,	// (0x00064c10) cam4_zoom_pane_g1

0x6e7a,	// (0x00064c18) cam4_zoom_pane_g2

0x6e82,	// (0x00064c20) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0006d764) cam4_zoom_pane_g

0x6e8a,	// (0x00064c28) cam4_zoom_cont_pane_g1

0x6e93,	// (0x00064c31) cam4_zoom_cont_pane_g2

0x6e9c,	// (0x00064c3a) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0006d76b) cam4_zoom_cont_pane_g

0x62af,	// (0x0006404d) call4_image_pane_ParamLimits

0x62af,	// (0x0006404d) call4_image_pane

0xd596,	// (0x0006b334) call4_windows_conf_pane_ParamLimits

0xd5b1,	// (0x0006b34f) popup_call4_audio_in_window_ParamLimits

0xd5b1,	// (0x0006b34f) popup_call4_audio_in_window

0x9c4a,	// (0x000679e8) bg_popup_call2_act_pane_cp02

0xd61f,	// (0x0006b3bd) call4_list_conf_pane

0xcc86,	// (0x0006aa24) call4_image_pane_g1

0xcc86,	// (0x0006aa24) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0006d47a) call4_image_pane_g

0xd897,	// (0x0006b635) list_single_graphic_popup_conf4_pane_ParamLimits

0xd897,	// (0x0006b635) list_single_graphic_popup_conf4_pane

0x9c4a,	// (0x000679e8) list_highlight_pane_cp022

0xd8ac,	// (0x0006b64a) list_single_graphic_popup_conf4_pane_g1

0xb246,	// (0x00068fe4) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0006d772) list_single_graphic_popup_conf4_pane_g

0xd8b4,	// (0x0006b652) list_single_graphic_popup_conf4_pane_t1

0x217e,	// (0x0005ff1c) popup_vtel_slider_window_ParamLimits

0x217e,	// (0x0005ff1c) popup_vtel_slider_window

0xd578,	// (0x0006b316) dialer2_ne_pane_t2_ParamLimits

0xd578,	// (0x0006b316) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0006d653) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0006d653) dialer2_ne_pane_t

0xa2e1,	// (0x0006807f) bg_popup_sub_pane_cp010_ParamLimits

0xa2e1,	// (0x0006807f) bg_popup_sub_pane_cp010

0x6ea5,	// (0x00064c43) popup_vtel_slider_window_g1_ParamLimits

0x6ea5,	// (0x00064c43) popup_vtel_slider_window_g1

0x6eb1,	// (0x00064c4f) popup_vtel_slider_window_g2_ParamLimits

0x6eb1,	// (0x00064c4f) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0006d777) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0006d777) popup_vtel_slider_window_g

0x6ef9,	// (0x00064c97) vtel_slider_pane_ParamLimits

0x6ef9,	// (0x00064c97) vtel_slider_pane

0x6f08,	// (0x00064ca6) vtel_slider_pane_g1_ParamLimits

0x6f08,	// (0x00064ca6) vtel_slider_pane_g1

0x6f15,	// (0x00064cb3) vtel_slider_pane_g2_ParamLimits

0x6f15,	// (0x00064cb3) vtel_slider_pane_g2

0x6f22,	// (0x00064cc0) vtel_slider_pane_g3_ParamLimits

0x6f22,	// (0x00064cc0) vtel_slider_pane_g3

0x6f08,	// (0x00064ca6) vtel_slider_pane_g4_ParamLimits

0x6f08,	// (0x00064ca6) vtel_slider_pane_g4

0x6f2f,	// (0x00064ccd) vtel_slider_pane_g5_ParamLimits

0x6f2f,	// (0x00064ccd) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0006d780) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0006d780) vtel_slider_pane_g

0xa2e1,	// (0x0006807f) main_gallery2_pane

0x6678,	// (0x00064416) aid_size_row_itut2_dropdow_list_ParamLimits

0x6678,	// (0x00064416) aid_size_row_itut2_dropdow_list

0x66e8,	// (0x00064486) grid_vitu2_function_top_pane_ParamLimits

0x66e8,	// (0x00064486) grid_vitu2_function_top_pane

0x673e,	// (0x000644dc) popup_vitu2_dropdown_list_window_ParamLimits

0x673e,	// (0x000644dc) popup_vitu2_dropdown_list_window

0x6762,	// (0x00064500) popup_vitu2_match_list_window

0x6f4a,	// (0x00064ce8) cell_vitu2_function_top_pane_ParamLimits

0x6f4a,	// (0x00064ce8) cell_vitu2_function_top_pane

0x6f6c,	// (0x00064d0a) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6f6c,	// (0x00064d0a) cell_vitu2_function_top_pane_cp01

0x6f88,	// (0x00064d26) cell_vitu2_function_top_wide_pane_ParamLimits

0x6f88,	// (0x00064d26) cell_vitu2_function_top_wide_pane

0x6586,	// (0x00064324) bg_button_pane_cp012

0x6fa4,	// (0x00064d42) cell_vitu2_function_top_pane_g1

0x6fb8,	// (0x00064d56) bg_button_pane_cp013_ParamLimits

0x6fb8,	// (0x00064d56) bg_button_pane_cp013

0x6fd4,	// (0x00064d72) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6fd4,	// (0x00064d72) cell_vitu2_function_top_wide_pane_g1

0x6fec,	// (0x00064d8a) bg_popup_sub_pane_cp20

0x6ffa,	// (0x00064d98) list_vitu2_match_list_pane

0xd6a0,	// (0x0006b43e) bg_popup_sub_pane_cp20_g1

0xd6a8,	// (0x0006b446) bg_popup_sub_pane_cp20_g2

0xacf4,	// (0x00068a92) bg_popup_sub_pane_cp20_g3

0xd6b0,	// (0x0006b44e) bg_popup_sub_pane_cp20_g4

0xacd4,	// (0x00068a72) bg_popup_sub_pane_cp20_g5

0xd8ca,	// (0x0006b668) bg_popup_sub_pane_cp20_g6

0xd6c0,	// (0x0006b45e) bg_popup_sub_pane_cp20_g7

0xd6c8,	// (0x0006b466) bg_popup_sub_pane_cp20_g8

0xd6d0,	// (0x0006b46e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0006d78b) bg_popup_sub_pane_cp20_g

0x7012,	// (0x00064db0) list_vitu2_match_list_item_pane_ParamLimits

0x7012,	// (0x00064db0) list_vitu2_match_list_item_pane

0x7024,	// (0x00064dc2) list_vitu2_match_list_item_pane_t1

0x1168,	// (0x0005ef06) bg_popup_sub_pane_cp21

0x7076,	// (0x00064e14) grid_vitu2_dropdown_list_pane

0x707e,	// (0x00064e1c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x707e,	// (0x00064e1c) cell_vitu2_dropdown_list_char_pane

0x70a3,	// (0x00064e41) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x70a3,	// (0x00064e41) cell_vitu2_dropdown_list_ctrl_pane

0xd8d2,	// (0x0006b670) cell_vitu2_dropdown_list_char_pane_g1

0xd8db,	// (0x0006b679) cell_vitu2_dropdown_list_char_pane_g2

0xd8e4,	// (0x0006b682) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0006d7a8) cell_vitu2_dropdown_list_char_pane_g

0x70d1,	// (0x00064e6f) cell_vitu2_dropdown_list_char_pane_t1

0x70df,	// (0x00064e7d) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x70df,	// (0x00064e7d) cell_vitu2_dropdown_list_ctrl_pane_g1

0x70ef,	// (0x00064e8d) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x70ef,	// (0x00064e8d) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7100,	// (0x00064e9e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7100,	// (0x00064e9e) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7110,	// (0x00064eae) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7110,	// (0x00064eae) cell_vitu2_dropdown_list_ctrl_pane_g4

0x649a,	// (0x00064238) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x649a,	// (0x00064238) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0006d7af) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0006d7af) cell_vitu2_dropdown_list_ctrl_pane_g

0x7129,	// (0x00064ec7) aid_size_cell_gallery2_ParamLimits

0x7129,	// (0x00064ec7) aid_size_cell_gallery2

0x7143,	// (0x00064ee1) grid_gallery2_pane_ParamLimits

0x7143,	// (0x00064ee1) grid_gallery2_pane

0x5a22,	// (0x000637c0) scroll_pane_cp029_ParamLimits

0x5a22,	// (0x000637c0) scroll_pane_cp029

0x715a,	// (0x00064ef8) cell_gallery2_pane_ParamLimits

0x715a,	// (0x00064ef8) cell_gallery2_pane

0xd8ed,	// (0x0006b68b) cell_gallery2_pane_g2

0x71a6,	// (0x00064f44) cell_gallery2_pane_g3

0xd8f5,	// (0x0006b693) cell_gallery2_pane_g4

0xd8fd,	// (0x0006b69b) cell_gallery2_pane_g5

0xaa97,	// (0x00068835) grid_highlight_pane_cp10

0x6762,	// (0x00064500) popup_vitu2_match_list_window_ParamLimits

0x6776,	// (0x00064514) popup_vitu2_query_window_ParamLimits

0x6776,	// (0x00064514) popup_vitu2_query_window

0x1168,	// (0x0005ef06) bg_vitu2_candi_button_pane

0xd8d2,	// (0x0006b670) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8db,	// (0x0006b679) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8e4,	// (0x0006b682) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x71ae,	// (0x00064f4c) bg_button_pane_cp015

0x71c0,	// (0x00064f5e) bg_button_pane_cp016

0x71d3,	// (0x00064f71) bg_button_pane_cp017

0xc835,	// (0x0006a5d3) bg_popup_sub_pane_cp22

0xd905,	// (0x0006b6a3) popup_vitu2_query_window_g1

0x7218,	// (0x00064fb6) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0006d7ba) popup_vitu2_query_window_g

0x7235,	// (0x00064fd3) popup_vitu2_query_window_t1_ParamLimits

0x7235,	// (0x00064fd3) popup_vitu2_query_window_t1

0x7268,	// (0x00065006) popup_vitu2_query_window_t2_ParamLimits

0x7268,	// (0x00065006) popup_vitu2_query_window_t2

0x727a,	// (0x00065018) popup_vitu2_query_window_t3_ParamLimits

0x727a,	// (0x00065018) popup_vitu2_query_window_t3

0x72a2,	// (0x00065040) popup_vitu2_query_window_t4_ParamLimits

0x72a2,	// (0x00065040) popup_vitu2_query_window_t4

0x72c5,	// (0x00065063) popup_vitu2_query_window_t5_ParamLimits

0x72c5,	// (0x00065063) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0006d7c1) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0006d7c1) popup_vitu2_query_window_t

0xd7a6,	// (0x0006b544) main_cset_text_pane

0x6b79,	// (0x00064917) aid_area_touch_slider_ParamLimits

0x6b95,	// (0x00064933) cset_slider_pane_ParamLimits

0x6bbf,	// (0x0006495d) main_cset_slider_pane_g1_ParamLimits

0x6bd4,	// (0x00064972) main_cset_slider_pane_g2_ParamLimits

0xd7c7,	// (0x0006b565) main_cset_slider_pane_g3_ParamLimits

0xd7c7,	// (0x0006b565) main_cset_slider_pane_g3

0x6be9,	// (0x00064987) main_cset_slider_pane_g4_ParamLimits

0x6be9,	// (0x00064987) main_cset_slider_pane_g4

0x6bf8,	// (0x00064996) main_cset_slider_pane_g5_ParamLimits

0x6bf8,	// (0x00064996) main_cset_slider_pane_g5

0x6c04,	// (0x000649a2) main_cset_slider_pane_g6_ParamLimits

0x6c04,	// (0x000649a2) main_cset_slider_pane_g6

0xf976,	// (0x0006d714) main_cset_slider_pane_g_ParamLimits

0xd7f7,	// (0x0006b595) main_cset_slider_pane_t1_ParamLimits

0x6c90,	// (0x00064a2e) main_cset_slider_pane_t2_ParamLimits

0x6caa,	// (0x00064a48) main_cset_slider_pane_t3_ParamLimits

0x6cc4,	// (0x00064a62) main_cset_slider_pane_t4_ParamLimits

0x6cde,	// (0x00064a7c) main_cset_slider_pane_t5_ParamLimits

0x6cf8,	// (0x00064a96) main_cset_slider_pane_t6_ParamLimits

0x6d0d,	// (0x00064aab) main_cset_slider_pane_t7_ParamLimits

0x6d37,	// (0x00064ad5) main_cset_slider_pane_t8_ParamLimits

0x6d37,	// (0x00064ad5) main_cset_slider_pane_t8

0x6d5f,	// (0x00064afd) main_cset_slider_pane_t9_ParamLimits

0x6d5f,	// (0x00064afd) main_cset_slider_pane_t9

0x6d87,	// (0x00064b25) main_cset_slider_pane_t10_ParamLimits

0x6d87,	// (0x00064b25) main_cset_slider_pane_t10

0x6daf,	// (0x00064b4d) main_cset_slider_pane_t11_ParamLimits

0x6daf,	// (0x00064b4d) main_cset_slider_pane_t11

0x6dd7,	// (0x00064b75) main_cset_slider_pane_t12_ParamLimits

0x6dd7,	// (0x00064b75) main_cset_slider_pane_t12

0x6df4,	// (0x00064b92) main_cset_slider_pane_t13_ParamLimits

0x6df4,	// (0x00064b92) main_cset_slider_pane_t13

0xf99b,	// (0x0006d739) main_cset_slider_pane_t_ParamLimits

0x9c4a,	// (0x000679e8) bg_popup_sub_pane_cp011

0xd911,	// (0x0006b6af) main_cset_text_pane_g1

0xd919,	// (0x0006b6b7) main_cset_text_pane_t1

0xd927,	// (0x0006b6c5) main_cset_text_pane_t2

0xd935,	// (0x0006b6d3) main_cset_text_pane_t3

0xd943,	// (0x0006b6e1) main_cset_text_pane_t4

0xd951,	// (0x0006b6ef) main_cset_text_pane_t5

0xd95f,	// (0x0006b6fd) main_cset_text_pane_t6

0xd96d,	// (0x0006b70b) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0006d7d0) main_cset_text_pane_t

0x9c4a,	// (0x000679e8) main_cam4_burst_pane

0x9c4a,	// (0x000679e8) main_cam5_pane

0x6ac2,	// (0x00064860) bg_button_pane_cp019

0x6acb,	// (0x00064869) bg_button_pane_cp020

0xd7d3,	// (0x0006b571) main_cset_slider_pane_g7_ParamLimits

0xd7d3,	// (0x0006b571) main_cset_slider_pane_g7

0xd7df,	// (0x0006b57d) main_cset_slider_pane_g8_ParamLimits

0xd7df,	// (0x0006b57d) main_cset_slider_pane_g8

0x6c18,	// (0x000649b6) main_cset_slider_pane_g9_ParamLimits

0x6c18,	// (0x000649b6) main_cset_slider_pane_g9

0x6c24,	// (0x000649c2) main_cset_slider_pane_g10_ParamLimits

0x6c24,	// (0x000649c2) main_cset_slider_pane_g10

0x6c30,	// (0x000649ce) main_cset_slider_pane_g11_ParamLimits

0x6c30,	// (0x000649ce) main_cset_slider_pane_g11

0x6c3c,	// (0x000649da) main_cset_slider_pane_g12_ParamLimits

0x6c3c,	// (0x000649da) main_cset_slider_pane_g12

0x6c48,	// (0x000649e6) main_cset_slider_pane_g13_ParamLimits

0x6c48,	// (0x000649e6) main_cset_slider_pane_g13

0x6c54,	// (0x000649f2) main_cset_slider_pane_g14_ParamLimits

0x6c54,	// (0x000649f2) main_cset_slider_pane_g14

0x6c60,	// (0x000649fe) main_cset_slider_pane_g15_ParamLimits

0x6c60,	// (0x000649fe) main_cset_slider_pane_g15

0xd825,	// (0x0006b5c3) main_cset_slider_pane_t14_ParamLimits

0xd825,	// (0x0006b5c3) main_cset_slider_pane_t14

0xd85e,	// (0x0006b5fc) main_cset_slider_pane_t15_ParamLimits

0xd85e,	// (0x0006b5fc) main_cset_slider_pane_t15

0x733e,	// (0x000650dc) aid_cam4_burst_size_cell_ParamLimits

0x733e,	// (0x000650dc) aid_cam4_burst_size_cell

0x735a,	// (0x000650f8) grid_cam4_burst_pane_ParamLimits

0x735a,	// (0x000650f8) grid_cam4_burst_pane

0x738c,	// (0x0006512a) linegrid_cam4_burst_pane_ParamLimits

0x738c,	// (0x0006512a) linegrid_cam4_burst_pane

0x73aa,	// (0x00065148) scroll_pane_cp30_ParamLimits

0x73aa,	// (0x00065148) scroll_pane_cp30

0x73b6,	// (0x00065154) cell_cam4_burst_pane_ParamLimits

0x73b6,	// (0x00065154) cell_cam4_burst_pane

0xd97b,	// (0x0006b719) linegrid_cam4_burst_pane_g1_ParamLimits

0xd97b,	// (0x0006b719) linegrid_cam4_burst_pane_g1

0x73f6,	// (0x00065194) linegrid_cam4_burst_pane_g2_ParamLimits

0x73f6,	// (0x00065194) linegrid_cam4_burst_pane_g2

0xd988,	// (0x0006b726) linegrid_cam4_burst_pane_g3_ParamLimits

0xd988,	// (0x0006b726) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0006d7df) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0006d7df) linegrid_cam4_burst_pane_g

0x7407,	// (0x000651a5) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7407,	// (0x000651a5) linegrid_cam4_burst_pane_g3_copy1

0xd995,	// (0x0006b733) linegrid_cam4_burst_pane_g4_ParamLimits

0xd995,	// (0x0006b733) linegrid_cam4_burst_pane_g4

0x7421,	// (0x000651bf) linegrid_cam4_burst_pane_g5_ParamLimits

0x7421,	// (0x000651bf) linegrid_cam4_burst_pane_g5

0x7432,	// (0x000651d0) linegrid_cam4_burst_pane_g6_ParamLimits

0x7432,	// (0x000651d0) linegrid_cam4_burst_pane_g6

0xd9a2,	// (0x0006b740) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9a2,	// (0x0006b740) linegrid_cam4_burst_pane_g7

0x7449,	// (0x000651e7) cell_cam4_burst_pane_g1

0xd9bb,	// (0x0006b759) main_cam5_pane_t1_ParamLimits

0xd9bb,	// (0x0006b759) main_cam5_pane_t1

0xd9cd,	// (0x0006b76b) main_cam5_pane_t2_ParamLimits

0xd9cd,	// (0x0006b76b) main_cam5_pane_t2

0xd9df,	// (0x0006b77d) main_cam5_pane_t3_ParamLimits

0xd9df,	// (0x0006b77d) main_cam5_pane_t3

0xd9f1,	// (0x0006b78f) main_cam5_pane_t4_ParamLimits

0xd9f1,	// (0x0006b78f) main_cam5_pane_t4

0xda09,	// (0x0006b7a7) main_cam5_pane_t5_ParamLimits

0xda09,	// (0x0006b7a7) main_cam5_pane_t5

0xda1d,	// (0x0006b7bb) main_cam5_pane_t6_ParamLimits

0xda1d,	// (0x0006b7bb) main_cam5_pane_t6

0xda31,	// (0x0006b7cf) main_cam5_pane_t7_ParamLimits

0xda31,	// (0x0006b7cf) main_cam5_pane_t7

0xda43,	// (0x0006b7e1) main_cam5_pane_t8_ParamLimits

0xda43,	// (0x0006b7e1) main_cam5_pane_t8

0xdabb,	// (0x0006b859) main_cam5_pane_t9_ParamLimits

0xdabb,	// (0x0006b859) main_cam5_pane_t9

0xdacd,	// (0x0006b86b) main_cam5_pane_t10_ParamLimits

0xdacd,	// (0x0006b86b) main_cam5_pane_t10

0xdadf,	// (0x0006b87d) main_cam5_pane_t11_ParamLimits

0xdadf,	// (0x0006b87d) main_cam5_pane_t11

0xdaf3,	// (0x0006b891) main_cam5_pane_t12_ParamLimits

0xdaf3,	// (0x0006b891) main_cam5_pane_t12

0xdb0a,	// (0x0006b8a8) main_cam5_pane_t13_ParamLimits

0xdb0a,	// (0x0006b8a8) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0006d7eb) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0006d7eb) main_cam5_pane_t

0x0dbb,	// (0x0005eb59) popup_scut_keymap_window_ParamLimits

0x0dbb,	// (0x0005eb59) popup_scut_keymap_window

0x745c,	// (0x000651fa) aid_size_cell_brow_shortcut

0xaa97,	// (0x00068835) bg_popup_window_pane_cp010

0x7468,	// (0x00065206) grid_scut_pane

0x7474,	// (0x00065212) cell_scut_pane_ParamLimits

0x7474,	// (0x00065212) cell_scut_pane

0x748f,	// (0x0006522d) cell_scut_pane_g1

0xdb2d,	// (0x0006b8cb) cell_scut_pane_t1

0xdb3c,	// (0x0006b8da) cell_scut_pane_t2

0x7498,	// (0x00065236) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0006d806) cell_scut_pane_t

0x5217,	// (0x00062fb5) main_mup3_pane_g8_ParamLimits

0x5217,	// (0x00062fb5) main_mup3_pane_g8

0x6688,	// (0x00064426) area_vitu2_query_pane_ParamLimits

0x6688,	// (0x00064426) area_vitu2_query_pane

0x71e6,	// (0x00064f84) input_focus_pane_cp08

0xdb4b,	// (0x0006b8e9) area_vitu2_query_pane_g1

0x74a6,	// (0x00065244) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0006d80d) area_vitu2_query_pane_g

0x74b7,	// (0x00065255) area_vitu2_query_pane_t1_ParamLimits

0x74b7,	// (0x00065255) area_vitu2_query_pane_t1

0x74cb,	// (0x00065269) area_vitu2_query_pane_t2_ParamLimits

0x74cb,	// (0x00065269) area_vitu2_query_pane_t2

0x74df,	// (0x0006527d) area_vitu2_query_pane_t3_ParamLimits

0x74df,	// (0x0006527d) area_vitu2_query_pane_t3

0xa318,	// (0x000680b6) area_vitu2_query_pane_t4_ParamLimits

0xa318,	// (0x000680b6) area_vitu2_query_pane_t4

0xa340,	// (0x000680de) area_vitu2_query_pane_t5_ParamLimits

0xa340,	// (0x000680de) area_vitu2_query_pane_t5

0xa368,	// (0x00068106) area_vitu2_query_pane_t6_ParamLimits

0xa368,	// (0x00068106) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0006d812) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0006d812) area_vitu2_query_pane_t

0x7507,	// (0x000652a5) bg_button_pane_cp018

0x7515,	// (0x000652b3) bg_button_pane_cp021

0x7521,	// (0x000652bf) bg_button_pane_cp022

0x7532,	// (0x000652d0) input_focus_pane_cp09

0x362b,	// (0x000613c9) aid_size_touch_mv_arrow_left

0x3656,	// (0x000613f4) aid_size_touch_mv_arrow_right

0x6c78,	// (0x00064a16) main_cset_slider_pane_g16_ParamLimits

0x6c78,	// (0x00064a16) main_cset_slider_pane_g16

0x6c84,	// (0x00064a22) main_cset_slider_pane_g17_ParamLimits

0x6c84,	// (0x00064a22) main_cset_slider_pane_g17

0x7449,	// (0x000651e7) cell_cam4_burst_pane_g1_ParamLimits

0x9c4a,	// (0x000679e8) compa_mode_pane

0x6ebd,	// (0x00064c5b) popup_vtel_slider_window_g3_ParamLimits

0x6ebd,	// (0x00064c5b) popup_vtel_slider_window_g3

0x6ed1,	// (0x00064c6f) popup_vtel_slider_window_g4_ParamLimits

0x6ed1,	// (0x00064c6f) popup_vtel_slider_window_g4

0x6ee5,	// (0x00064c83) popup_vtel_slider_window_t1_ParamLimits

0x6ee5,	// (0x00064c83) popup_vtel_slider_window_t1

0x9c4a,	// (0x000679e8) main_cl_pane

0xc861,	// (0x0006a5ff) popup_imed_adjust2_window_ParamLimits

0xc835,	// (0x0006a5d3) bg_tb_trans_pane_cp05_ParamLimits

0xd183,	// (0x0006af21) popup_imed_adjust2_window_g1_ParamLimits

0xd192,	// (0x0006af30) popup_imed_adjust2_window_g2_ParamLimits

0xd192,	// (0x0006af30) popup_imed_adjust2_window_g2

0xd1a6,	// (0x0006af44) popup_imed_adjust2_window_g3_ParamLimits

0xd1a6,	// (0x0006af44) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0006d57d) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0006d57d) popup_imed_adjust2_window_g

0xd1b2,	// (0x0006af50) popup_imed_adjust2_window_t1_ParamLimits

0xd1ca,	// (0x0006af68) slider_imed_adjust_pane_ParamLimits

0xd1de,	// (0x0006af7c) slider_imed_adjust_pane_g1_ParamLimits

0xd1ee,	// (0x0006af8c) slider_imed_adjust_pane_g2_ParamLimits

0xd1fe,	// (0x0006af9c) slider_imed_adjust_pane_g3_ParamLimits

0xd20f,	// (0x0006afad) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0006d584) slider_imed_adjust_pane_g_ParamLimits

0x63ad,	// (0x0006414b) aid_touch_area_cam4_ParamLimits

0x63ad,	// (0x0006414b) aid_touch_area_cam4

0x63bd,	// (0x0006415b) battery_pane_cp01

0x6444,	// (0x000641e2) main_camera4_pane_g6_ParamLimits

0x6444,	// (0x000641e2) main_camera4_pane_g6

0x6462,	// (0x00064200) main_camera4_pane_t2_ParamLimits

0x6462,	// (0x00064200) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0006d687) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0006d687) main_camera4_pane_t

0x64f3,	// (0x00064291) aid_touch_area_vid4_ParamLimits

0x64f3,	// (0x00064291) aid_touch_area_vid4

0x6533,	// (0x000642d1) main_video4_pane_g5_ParamLimits

0x6533,	// (0x000642d1) main_video4_pane_g5

0x6559,	// (0x000642f7) vid4_progress_pane_ParamLimits

0x6559,	// (0x000642f7) vid4_progress_pane

0xd7eb,	// (0x0006b589) main_cset_slider_pane_g18_ParamLimits

0xd7eb,	// (0x0006b589) main_cset_slider_pane_g18

0xd9af,	// (0x0006b74d) cell_cam4_burst_pane_g2_ParamLimits

0xd9af,	// (0x0006b74d) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0006d7e6) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0006d7e6) cell_cam4_burst_pane_g

0x7543,	// (0x000652e1) bg_cl_pane_ParamLimits

0x7543,	// (0x000652e1) bg_cl_pane

0x754f,	// (0x000652ed) cl_header_pane_ParamLimits

0x754f,	// (0x000652ed) cl_header_pane

0x755b,	// (0x000652f9) cl_listscroll_pane_ParamLimits

0x755b,	// (0x000652f9) cl_listscroll_pane

0xdb57,	// (0x0006b8f5) bg_cl_pane_g1

0xdb5f,	// (0x0006b8fd) bg_cl_pane_g2

0xdb67,	// (0x0006b905) bg_cl_pane_g3

0xdb6f,	// (0x0006b90d) bg_cl_pane_g4

0xdb77,	// (0x0006b915) bg_cl_pane_g5

0xdb7f,	// (0x0006b91d) bg_cl_pane_g6

0xdb87,	// (0x0006b925) bg_cl_pane_g7

0xdb8f,	// (0x0006b92d) bg_cl_pane_g8

0xdb97,	// (0x0006b935) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0006d821) bg_cl_pane_g

0x7567,	// (0x00065305) aid_height_cl_leading_ParamLimits

0x7567,	// (0x00065305) aid_height_cl_leading

0x7573,	// (0x00065311) aid_height_cl_text_ParamLimits

0x7573,	// (0x00065311) aid_height_cl_text

0x0dfc,	// (0x0005eb9a) bg_cl_header_pane_ParamLimits

0x0dfc,	// (0x0005eb9a) bg_cl_header_pane

0x758b,	// (0x00065329) cl_header_pane_g1_ParamLimits

0x758b,	// (0x00065329) cl_header_pane_g1

0x7598,	// (0x00065336) cl_header_pane_t1_ParamLimits

0x7598,	// (0x00065336) cl_header_pane_t1

0xdb9f,	// (0x0006b93d) cl_list_pane

0xd7be,	// (0x0006b55c) hc_scroll_pane_cp01

0xacd4,	// (0x00068a72) bg_cl_header_pane_g1

0xd6a0,	// (0x0006b43e) bg_cl_header_pane_g2

0xacf4,	// (0x00068a92) bg_cl_header_pane_g3

0xd6b0,	// (0x0006b44e) bg_cl_header_pane_g4

0xd6a8,	// (0x0006b446) bg_cl_header_pane_g5

0xd8ca,	// (0x0006b668) bg_cl_header_pane_g6

0xd6c8,	// (0x0006b466) bg_cl_header_pane_g7

0xd6d0,	// (0x0006b46e) bg_cl_header_pane_g8

0xd6c0,	// (0x0006b45e) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0006d834) bg_cl_header_pane_g

0x75aa,	// (0x00065348) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x75aa,	// (0x00065348) hc_cl_list_double_graphic_heading_pane

0x75ba,	// (0x00065358) hc_cl_list_single_graphic_pane_ParamLimits

0x75ba,	// (0x00065358) hc_cl_list_single_graphic_pane

0x75cc,	// (0x0006536a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x75cc,	// (0x0006536a) hc_cl_list_single_graphic_pane_g1

0x75d8,	// (0x00065376) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x75d8,	// (0x00065376) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0006d847) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0006d847) hc_cl_list_single_graphic_pane_g

0x75ec,	// (0x0006538a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x75ec,	// (0x0006538a) hc_cl_list_single_graphic_pane_t1

0x75cc,	// (0x0006536a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x75cc,	// (0x0006536a) hc_cl_list_double_graphic_heading_pane_g1

0x7601,	// (0x0006539f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7601,	// (0x0006539f) hc_cl_list_double_graphic_heading_pane_g2

0x7615,	// (0x000653b3) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7615,	// (0x000653b3) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0006d84c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0006d84c) hc_cl_list_double_graphic_heading_pane_g

0x7629,	// (0x000653c7) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7629,	// (0x000653c7) hc_cl_list_double_graphic_heading_pane_t1

0x763e,	// (0x000653dc) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x763e,	// (0x000653dc) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0006d853) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0006d853) hc_cl_list_double_graphic_heading_pane_t

0x765b,	// (0x000653f9) vid4_progress_pane_g1

0x766d,	// (0x0006540b) vid4_progress_pane_g2

0x3d66,	// (0x00061b04) vid4_progress_pane_g3

0x767f,	// (0x0006541d) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0006d858) vid4_progress_pane_g

0x769d,	// (0x0006543b) vid4_progress_pane_t1

0x76b2,	// (0x00065450) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0006d863) vid4_progress_pane_t

0x76dd,	// (0x0006547b) wait_bar_pane_cp07

0xca73,	// (0x0006a811) blid_firmament_pane_ParamLimits

0xcab6,	// (0x0006a854) popup_blid_sat_info2_window_g1

0xcada,	// (0x0006a878) popup_blid_sat_info2_window_t3

0xcae8,	// (0x0006a886) popup_blid_sat_info2_window_t4

0xcaf6,	// (0x0006a894) popup_blid_sat_info2_window_t5

0xcb04,	// (0x0006a8a2) popup_blid_sat_info2_window_t6

0xcb14,	// (0x0006a8b2) popup_blid_sat_info2_window_t7

0xcb22,	// (0x0006a8c0) popup_blid_sat_info2_window_t8

0xcb30,	// (0x0006a8ce) popup_blid_sat_info2_window_t9

0xcb3e,	// (0x0006a8dc) popup_blid_sat_info2_window_t10

0xcc06,	// (0x0006a9a4) aid_firma_cardinal_ParamLimits

0xcc1a,	// (0x0006a9b8) blid_firmament_pane_t1_ParamLimits

0xcc31,	// (0x0006a9cf) blid_firmament_pane_t2_ParamLimits

0xcc48,	// (0x0006a9e6) blid_firmament_pane_t3_ParamLimits

0xcc5f,	// (0x0006a9fd) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0006d471) blid_firmament_pane_t_ParamLimits

0xcc76,	// (0x0006aa14) blid_sat_info_pane_ParamLimits

0xa2e1,	// (0x0006807f) main_cam_set_pane_ParamLimits

0x59bb,	// (0x00063759) aid_size_cell_colour_35_ParamLimits

0x59d5,	// (0x00063773) aid_size_cell_colour_112_ParamLimits

0x59ec,	// (0x0006378a) aid_size_cell_effect_ParamLimits

0xa2e1,	// (0x0006807f) bg_tb_trans_pane_cp02_ParamLimits

0xb155,	// (0x00068ef3) heading_imed_pane_ParamLimits

0x5a06,	// (0x000637a4) listscroll_imed_pane_ParamLimits

0xbe57,	// (0x00069bf5) popup_call2_audio_first_window_g5_ParamLimits

0xbe57,	// (0x00069bf5) popup_call2_audio_first_window_g5

0x6118,	// (0x00063eb6) aid_size_touch_image3_arrow_left_ParamLimits

0x6118,	// (0x00063eb6) aid_size_touch_image3_arrow_left

0x612e,	// (0x00063ecc) aid_size_touch_image3_arrow_right_ParamLimits

0x612e,	// (0x00063ecc) aid_size_touch_image3_arrow_right

0x76c8,	// (0x00065466) vid4_progress_pane_t3

0x5cb4,	// (0x00063a52) main_hwr_training_symbol_option_pane_ParamLimits

0x5cb4,	// (0x00063a52) main_hwr_training_symbol_option_pane

0xd47a,	// (0x0006b218) popup_hwr_training_preview_window_ParamLimits

0xd47a,	// (0x0006b218) popup_hwr_training_preview_window

0x5d15,	// (0x00063ab3) hwr_training_navi_pane_g5_ParamLimits

0x5d15,	// (0x00063ab3) hwr_training_navi_pane_g5

0xd68e,	// (0x0006b42c) popup_char_count_window

0x6fec,	// (0x00064d8a) bg_popup_sub_pane_cp20_ParamLimits

0x6ffa,	// (0x00064d98) list_vitu2_match_list_pane_ParamLimits

0x7006,	// (0x00064da4) vitu2_page_scroll_pane_ParamLimits

0x7006,	// (0x00064da4) vitu2_page_scroll_pane

0xdba8,	// (0x0006b946) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdba8,	// (0x0006b946) list_single_hwr_training_symbol_option_pane

0xdbbb,	// (0x0006b959) list_single_hwr_training_symbol_option_pane_g1

0xdbc3,	// (0x0006b961) list_single_hwr_training_symbol_option_pane_t1

0xdbd1,	// (0x0006b96f) bg_button_pane_cp023

0xdbda,	// (0x0006b978) bg_button_pane_cp024

0x7729,	// (0x000654c7) vitu2_page_scroll_pane_g1

0x7731,	// (0x000654cf) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0006d86a) vitu2_page_scroll_pane_g

0x773b,	// (0x000654d9) vitu2_page_scroll_pane_t1

0xdc0d,	// (0x0006b9ab) popup_char_count_window_g1

0xdc16,	// (0x0006b9b4) popup_char_count_window_g2

0xdc1f,	// (0x0006b9bd) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0006d86f) popup_char_count_window_g

0xdc28,	// (0x0006b9c6) popup_char_count_window_t1

0x9c4a,	// (0x000679e8) main_vded2_pane

0xd16f,	// (0x0006af0d) aid_size_cell_imed_line

0xd179,	// (0x0006af17) grid_imed_line_width_pane

0x65db,	// (0x00064379) vid4_indicators_pane_g4

0xdc36,	// (0x0006b9d4) cell_imed_line_width_pane_ParamLimits

0xdc36,	// (0x0006b9d4) cell_imed_line_width_pane

0xdc4c,	// (0x0006b9ea) cell_imed_line_width_pane_g1

0xd19e,	// (0x0006af3c) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0006d876) cell_imed_line_width_pane_g

0x774a,	// (0x000654e8) main_vded2_pane_g1_ParamLimits

0x774a,	// (0x000654e8) main_vded2_pane_g1

0x7759,	// (0x000654f7) main_vded2_pane_g2_ParamLimits

0x7759,	// (0x000654f7) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0006d87b) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0006d87b) main_vded2_pane_g

0x7767,	// (0x00065505) vded2_slider_pane_ParamLimits

0x7767,	// (0x00065505) vded2_slider_pane

0x7774,	// (0x00065512) aid_size_touch_vded2_end

0x777e,	// (0x0006551c) aid_size_touch_vded2_playhead

0xdc55,	// (0x0006b9f3) aid_size_touch_vded2_start

0xdc5d,	// (0x0006b9fb) vded2_slider_bg_pane

0xdc66,	// (0x0006ba04) vded2_slider_pane_g1

0xdc6f,	// (0x0006ba0d) vded2_slider_pane_g2

0x7786,	// (0x00065524) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0006d880) vded2_slider_pane_g

0xda88,	// (0x0006b826) vded2_slider_bg_pane_g1

0xda91,	// (0x0006b82f) vded2_slider_bg_pane_g2

0xda9a,	// (0x0006b838) vded2_slider_bg_pane_g3

0x0002,

0xf7a3,	// (0x0006d541) vded2_slider_bg_pane_g

0x3d7e,	// (0x00061b1c) aid_postcard_touch_down_pane_ParamLimits

0x3d7e,	// (0x00061b1c) aid_postcard_touch_down_pane

0x3d8e,	// (0x00061b2c) aid_postcard_touch_up_pane_ParamLimits

0x3d8e,	// (0x00061b2c) aid_postcard_touch_up_pane

0x9c4a,	// (0x000679e8) main_blid2_pane

0xc843,	// (0x0006a5e1) popup_blid2_search_window

0x9c4a,	// (0x000679e8) blid2_gps_pane

0x9c4a,	// (0x000679e8) blid2_navig_pane

0x9c4a,	// (0x000679e8) blid2_search_pane

0x9c4a,	// (0x000679e8) blid2_tripm_pane

0x778f,	// (0x0006552d) blid2_search_pane_g1_ParamLimits

0x778f,	// (0x0006552d) blid2_search_pane_g1

0x779b,	// (0x00065539) blid2_search_pane_t1_ParamLimits

0x779b,	// (0x00065539) blid2_search_pane_t1

0x77ad,	// (0x0006554b) aid_size_cell_blid2_gps_ParamLimits

0x77ad,	// (0x0006554b) aid_size_cell_blid2_gps

0x77bd,	// (0x0006555b) blid2_gps_pane_g1_ParamLimits

0x77bd,	// (0x0006555b) blid2_gps_pane_g1

0x77c9,	// (0x00065567) grid_blid2_satellite_pane_ParamLimits

0x77c9,	// (0x00065567) grid_blid2_satellite_pane

0x77d7,	// (0x00065575) blid2_navig_pane_g1_ParamLimits

0x77d7,	// (0x00065575) blid2_navig_pane_g1

0x77e3,	// (0x00065581) blid2_navig_pane_t1_ParamLimits

0x77e3,	// (0x00065581) blid2_navig_pane_t1

0x77f5,	// (0x00065593) blid2_navig_pane_t2_ParamLimits

0x77f5,	// (0x00065593) blid2_navig_pane_t2

0x0001,

0xfae9,	// (0x0006d887) blid2_navig_pane_t_ParamLimits

0xfae9,	// (0x0006d887) blid2_navig_pane_t

0x7807,	// (0x000655a5) blid2_navig_ring_pane_ParamLimits

0x7807,	// (0x000655a5) blid2_navig_ring_pane

0x7817,	// (0x000655b5) blid2_speed_pane_ParamLimits

0x7817,	// (0x000655b5) blid2_speed_pane

0x7823,	// (0x000655c1) blid2_tripm_pane_g1_ParamLimits

0x7823,	// (0x000655c1) blid2_tripm_pane_g1

0x7833,	// (0x000655d1) blid2_tripm_pane_g2_ParamLimits

0x7833,	// (0x000655d1) blid2_tripm_pane_g2

0x783f,	// (0x000655dd) blid2_tripm_pane_g3_ParamLimits

0x783f,	// (0x000655dd) blid2_tripm_pane_g3

0x784b,	// (0x000655e9) blid2_tripm_pane_g4_ParamLimits

0x784b,	// (0x000655e9) blid2_tripm_pane_g4

0x7857,	// (0x000655f5) blid2_tripm_pane_g5_ParamLimits

0x7857,	// (0x000655f5) blid2_tripm_pane_g5

0x0005,

0xfaee,	// (0x0006d88c) blid2_tripm_pane_g_ParamLimits

0xfaee,	// (0x0006d88c) blid2_tripm_pane_g

0x7873,	// (0x00065611) blid2_tripm_pane_t1_ParamLimits

0x7873,	// (0x00065611) blid2_tripm_pane_t1

0x7885,	// (0x00065623) blid2_tripm_pane_t2_ParamLimits

0x7885,	// (0x00065623) blid2_tripm_pane_t2

0x7897,	// (0x00065635) blid2_tripm_pane_t3_ParamLimits

0x7897,	// (0x00065635) blid2_tripm_pane_t3

0x0003,

0xfafb,	// (0x0006d899) blid2_tripm_pane_t_ParamLimits

0xfafb,	// (0x0006d899) blid2_tripm_pane_t

0x78c9,	// (0x00065667) cell_blid2_satellite_pane_ParamLimits

0x78c9,	// (0x00065667) cell_blid2_satellite_pane

0x78e7,	// (0x00065685) cell_blid2_satellite_pane_g1

0xdc77,	// (0x0006ba15) cell_blid2_satellite_pane_t1

0xcc86,	// (0x0006aa24) blid2_speed_pane_g1

0xdc85,	// (0x0006ba23) blid2_speed_pane_t1

0xdc93,	// (0x0006ba31) blid2_speed_pane_t2

0x0001,

0xfb04,	// (0x0006d8a2) blid2_speed_pane_t

0xcc86,	// (0x0006aa24) blid2_navig_ring_pane_g1

0x78f0,	// (0x0006568e) blid2_navig_ring_pane_g2

0x78f8,	// (0x00065696) blid2_navig_ring_pane_g3

0x7900,	// (0x0006569e) blid2_navig_ring_pane_g4

0x7908,	// (0x000656a6) blid2_navig_ring_pane_g5

0x0004,

0xfb09,	// (0x0006d8a7) blid2_navig_ring_pane_g

0x9c4a,	// (0x000679e8) bg_popup_window_pane_cp011

0xdca1,	// (0x0006ba3f) popup_blid2_search_window_g1

0xdca9,	// (0x0006ba47) popup_blid2_search_window_t1

0xdcb7,	// (0x0006ba55) popup_blid2_search_window_t2

0x0001,

0xfb14,	// (0x0006d8b2) popup_blid2_search_window_t

0xabe3,	// (0x00068981) main_browser_pane_g1

0xa8e1,	// (0x0006867f) main_browser_pane_ParamLimits

0x6586,	// (0x00064324) bg_button_pane_cp011_ParamLimits

0x688b,	// (0x00064629) cell_vitu2_function_pane_g1_ParamLimits

0xc835,	// (0x0006a5d3) bg_popup_sub_pane_cp22_ParamLimits

0x71e6,	// (0x00064f84) input_focus_pane_cp08_ParamLimits

0x71fd,	// (0x00064f9b) popup_vitu2_query_button_pane_ParamLimits

0x71fd,	// (0x00064f9b) popup_vitu2_query_button_pane

0x720e,	// (0x00064fac) popup_vitu2_query_input_button_pane

0xd905,	// (0x0006b6a3) popup_vitu2_query_window_g1_ParamLimits

0x7218,	// (0x00064fb6) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0006d7ba) popup_vitu2_query_window_g_ParamLimits

0x9c4a,	// (0x000679e8) bg_button_pane_cp026

0x7910,	// (0x000656ae) popup_vitu2_query_input_button_pane_g1

0x9c4a,	// (0x000679e8) bg_button_pane_cp025

0xdcc5,	// (0x0006ba63) popup_vitu2_query_button_pane_t1

0x4f17,	// (0x00062cb5) main_mp3_pane_t6

0x4f27,	// (0x00062cc5) popup_slider_window_cp01

0x64a8,	// (0x00064246) cam4_battery_pane

0x6594,	// (0x00064332) cam4_battery_pane_cp02

0x7653,	// (0x000653f1) cam4_battery_pane_cp01

0x7653,	// (0x000653f1) cam4_battery_pane_cp03

0xdaa3,	// (0x0006b841) cam4_battery_pane_g1

0xcc86,	// (0x0006aa24) cam4_battery_pane_g2

0x0001,

0xfb19,	// (0x0006d8b7) cam4_battery_pane_g

0xcb4c,	// (0x0006a8ea) popup_blid_sat_info2_window_t11

0x362b,	// (0x000613c9) aid_size_touch_mv_arrow_left_ParamLimits

0x3656,	// (0x000613f4) aid_size_touch_mv_arrow_right_ParamLimits

0xb374,	// (0x00069112) navi_pane_g1_ParamLimits

0x3695,	// (0x00061433) navi_pane_g2_ParamLimits

0x36c3,	// (0x00061461) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0006d183) navi_pane_g_ParamLimits

0x371d,	// (0x000614bb) navi_pane_mv_t1_ParamLimits

0x5a12,	// (0x000637b0) grid_imed_effect_pane_ParamLimits

0x2046,	// (0x0005fde4) aid_placing_vt_slider_lsc

0xab2e,	// (0x000688cc) aid_placing_vt_slider_prt

0xa2e1,	// (0x0006807f) bg_tb_trans_pane_cp01_ParamLimits

0xcdd6,	// (0x0006ab74) popup_image_details_window_g1_ParamLimits

0xcde9,	// (0x0006ab87) popup_image_details_window_g2_ParamLimits

0xcdfe,	// (0x0006ab9c) popup_image_details_window_g3_ParamLimits

0xcdfe,	// (0x0006ab9c) popup_image_details_window_g3

0xf718,	// (0x0006d4b6) popup_image_details_window_g_ParamLimits

0xce12,	// (0x0006abb0) popup_image_details_window_t1_ParamLimits

0xce24,	// (0x0006abc2) popup_image_details_window_t2_ParamLimits

0xce3d,	// (0x0006abdb) popup_image_details_window_t3_ParamLimits

0xce51,	// (0x0006abef) popup_image_details_window_t4_ParamLimits

0xce6c,	// (0x0006ac0a) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0006d4bd) popup_image_details_window_t_ParamLimits

0x757f,	// (0x0006531d) cl_header_name_pane_ParamLimits

0x757f,	// (0x0006531d) cl_header_name_pane

0x7918,	// (0x000656b6) cl_header_name_pane_t1_ParamLimits

0x7918,	// (0x000656b6) cl_header_name_pane_t1

0x792f,	// (0x000656cd) cl_header_name_pane_t2_ParamLimits

0x792f,	// (0x000656cd) cl_header_name_pane_t2

0x7959,	// (0x000656f7) cl_header_name_pane_t3_ParamLimits

0x7959,	// (0x000656f7) cl_header_name_pane_t3

0x0002,

0xfb1e,	// (0x0006d8bc) cl_header_name_pane_t_ParamLimits

0xfb1e,	// (0x0006d8bc) cl_header_name_pane_t

0x36ee,	// (0x0006148c) navi_pane_mv_g2_ParamLimits

0xd668,	// (0x0006b406) field_vitu2_entry_pane_g1_ParamLimits

0xd674,	// (0x0006b412) field_vitu2_entry_pane_g2_ParamLimits

0xd680,	// (0x0006b41e) field_vitu2_entry_pane_g3_ParamLimits

0xd680,	// (0x0006b41e) field_vitu2_entry_pane_g3

0xf91b,	// (0x0006d6b9) field_vitu2_entry_pane_g_ParamLimits

0x681f,	// (0x000645bd) cell_vitu2_itu_pane_g1_ParamLimits

0x6831,	// (0x000645cf) cell_vitu2_itu_pane_g2_ParamLimits

0x6831,	// (0x000645cf) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0006d6c5) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0006d6c5) cell_vitu2_itu_pane_g

0x6586,	// (0x00064324) bg_vkb2_func_pane_cp05_ParamLimits

0x6586,	// (0x00064324) bg_vkb2_func_pane_cp05

0x6586,	// (0x00064324) bg_vkb2_func_pane_cp03

0x6586,	// (0x00064324) bg_vkb2_func_pane_cp04

0x6586,	// (0x00064324) bg_vkb2_func_pane_cp10_ParamLimits

0x6586,	// (0x00064324) bg_vkb2_func_pane_cp10

0x7521,	// (0x000652bf) bg_vkb2_func_pane_cp08

0x7507,	// (0x000652a5) bg_vkb2_func_pane_cp06

0x7515,	// (0x000652b3) bg_vkb2_func_pane_cp07

0xdbe3,	// (0x0006b981) bg_vkb2_func_pane_cp11_ParamLimits

0xdbe3,	// (0x0006b981) bg_vkb2_func_pane_cp11

0xdbf8,	// (0x0006b996) bg_vkb2_func_pane_cp12_ParamLimits

0xdbf8,	// (0x0006b996) bg_vkb2_func_pane_cp12

0x9c4a,	// (0x000679e8) bg_vkb2_func_pane_cp09

0xd6a0,	// (0x0006b43e) bg_vkb2_func_pane_g1

0xacf4,	// (0x00068a92) bg_vkb2_func_pane_g2

0xd6a8,	// (0x0006b446) bg_vkb2_func_pane_g3

0xd6b0,	// (0x0006b44e) bg_vkb2_func_pane_g4

0xd8ca,	// (0x0006b668) bg_vkb2_func_pane_g5

0xd6c8,	// (0x0006b466) bg_vkb2_func_pane_g6

0xd6d0,	// (0x0006b46e) bg_vkb2_func_pane_g7

0xd6c0,	// (0x0006b45e) bg_vkb2_func_pane_g8

0xacd4,	// (0x00068a72) bg_vkb2_func_pane_g9

0x0008,

0xfb25,	// (0x0006d8c3) bg_vkb2_func_pane_g

0x7865,	// (0x00065603) blid2_tripm_pane_g6_ParamLimits

0x7865,	// (0x00065603) blid2_tripm_pane_g6

0xd532,	// (0x0006b2d0) mp4_progress_pane_g1

0x78bd,	// (0x0006565b) blid2_tripm_values_pane_ParamLimits

0x78bd,	// (0x0006565b) blid2_tripm_values_pane

0x797e,	// (0x0006571c) blid2_tripm_values_pane_t1

0x798c,	// (0x0006572a) blid2_tripm_values_pane_t2

0x799a,	// (0x00065738) blid2_tripm_values_pane_t3

0x79a8,	// (0x00065746) blid2_tripm_values_pane_t4

0x79b6,	// (0x00065754) blid2_tripm_values_pane_t5

0x79c4,	// (0x00065762) blid2_tripm_values_pane_t6

0x79d2,	// (0x00065770) blid2_tripm_values_pane_t7

0x79e0,	// (0x0006577e) blid2_tripm_values_pane_t8

0x79ee,	// (0x0006578c) blid2_tripm_values_pane_t9

0x0008,

0xfb38,	// (0x0006d8d6) blid2_tripm_values_pane_t

0x2084,	// (0x0005fe22) call_video_pane_t1_ParamLimits

0x20a1,	// (0x0005fe3f) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0006d00c) call_video_pane_t_ParamLimits

0x3c89,	// (0x00061a27) msg_header_pane_g1_ParamLimits

0xb589,	// (0x00069327) msg_header_pane_g2_ParamLimits

0xb589,	// (0x00069327) msg_header_pane_g2

0x0001,

0xf488,	// (0x0006d226) msg_header_pane_g_ParamLimits

0xf488,	// (0x0006d226) msg_header_pane_g

0xa8e1,	// (0x0006867f) main_clock2_pane_ParamLimits

0x57a1,	// (0x0006353f) grid_clock2_toolbar_pane_ParamLimits

0x57a1,	// (0x0006353f) grid_clock2_toolbar_pane

0x57a1,	// (0x0006353f) listscroll_clock2_pane_ParamLimits

0x57a1,	// (0x0006353f) listscroll_clock2_pane

0x5849,	// (0x000635e7) main_clock2_pane_t3_ParamLimits

0x5849,	// (0x000635e7) main_clock2_pane_t3

0x585b,	// (0x000635f9) main_clock2_pane_t4_ParamLimits

0x585b,	// (0x000635f9) main_clock2_pane_t4

0xdcd3,	// (0x0006ba71) cell_clock2_toolbar_pane

0xdcdb,	// (0x0006ba79) cell_clock2_toolbar_pane_cp01

0xdcdb,	// (0x0006ba79) cell_clock2_toolbar_pane_cp02

0xdce3,	// (0x0006ba81) cell_clock2_toolbar_pane_cp03

0xdceb,	// (0x0006ba89) list_clock2_pane

0xb2da,	// (0x00069078) scroll_pane_cp10

0xdcf3,	// (0x0006ba91) list_single_clock2_pane_ParamLimits

0xdcf3,	// (0x0006ba91) list_single_clock2_pane

0xaa97,	// (0x00068835) list_highlight_pane_cp08

0xdd00,	// (0x0006ba9e) list_single_clock2_pane_t1

0xdd0e,	// (0x0006baac) list_single_clock2_pane_t2

0x0001,

0xfb4b,	// (0x0006d8e9) list_single_clock2_pane_t

0x9c4a,	// (0x000679e8) bg_button_pane_cp10

0xdd1c,	// (0x0006baba) cell_clock2_toolbar_pane_g1

0x3ce0,	// (0x00061a7e) aid_main_viewer_pane_g1_ParamLimits

0x3ce0,	// (0x00061a7e) aid_main_viewer_pane_g1

0x3cec,	// (0x00061a8a) aid_main_viewer_pane_g2_ParamLimits

0x3cec,	// (0x00061a8a) aid_main_viewer_pane_g2

0x3cf8,	// (0x00061a96) aid_main_viewer_pane_g3_ParamLimits

0x3cf8,	// (0x00061a96) aid_main_viewer_pane_g3

0x3d09,	// (0x00061aa7) aid_main_viewer_pane_g4_ParamLimits

0x3d09,	// (0x00061aa7) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0006d237) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0006d237) aid_main_viewer_pane_g

0x4493,	// (0x00062231) main_calc_pane_ParamLimits

0x44a0,	// (0x0006223e) main_dialer2_pane_ParamLimits

0x9c4a,	// (0x000679e8) main_cam6_pane

0x9c4a,	// (0x000679e8) main_vid6_pane

0x57ad,	// (0x0006354b) listscroll_gen_pane_cp06_ParamLimits

0x57ad,	// (0x0006354b) listscroll_gen_pane_cp06

0x586d,	// (0x0006360b) main_clock2_pane_t5_ParamLimits

0x586d,	// (0x0006360b) main_clock2_pane_t5

0x58bc,	// (0x0006365a) aid_call2_pane_cp10_ParamLimits

0x58ce,	// (0x0006366c) aid_call_pane_cp10_ParamLimits

0xb349,	// (0x000690e7) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb349,	// (0x000690e7) popup_clock_analogue_window_cp10_g2_ParamLimits

0x58e0,	// (0x0006367e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x58e0,	// (0x0006367e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb349,	// (0x000690e7) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0006d572) popup_clock_analogue_window_cp10_g_ParamLimits

0x58f2,	// (0x00063690) popup_clock_analogue_window_cp10_t1_ParamLimits

0x60c5,	// (0x00063e63) cell_dialer2_keypad_pane_g2_ParamLimits

0x60c5,	// (0x00063e63) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0006d658) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0006d658) cell_dialer2_keypad_pane_g

0x60e1,	// (0x00063e7f) cell_dialer2_keypad_pane_t1

0x6b66,	// (0x00064904) main_cset_text2_pane_ParamLimits

0x6b66,	// (0x00064904) main_cset_text2_pane

0xdb4b,	// (0x0006b8e9) area_vitu2_query_pane_g1_ParamLimits

0x74a6,	// (0x00065244) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0006d80d) area_vitu2_query_pane_g_ParamLimits

0xa390,	// (0x0006812e) area_vitu2_query_pane_t7_ParamLimits

0xa390,	// (0x0006812e) area_vitu2_query_pane_t7

0x7507,	// (0x000652a5) bg_button_pane_cp018_ParamLimits

0x7515,	// (0x000652b3) bg_button_pane_cp021_ParamLimits

0x7521,	// (0x000652bf) bg_button_pane_cp022_ParamLimits

0x7521,	// (0x000652bf) bg_vkb2_func_pane_cp08_ParamLimits

0x7507,	// (0x000652a5) bg_vkb2_func_pane_cp06_ParamLimits

0x7515,	// (0x000652b3) bg_vkb2_func_pane_cp07_ParamLimits

0x7532,	// (0x000652d0) input_focus_pane_cp09_ParamLimits

0x79fc,	// (0x0006579a) cam6_autofocus_pane_ParamLimits

0x79fc,	// (0x0006579a) cam6_autofocus_pane

0x7a1e,	// (0x000657bc) cam6_image_uncrop_pane_ParamLimits

0x7a1e,	// (0x000657bc) cam6_image_uncrop_pane

0x7a4b,	// (0x000657e9) cam6_indi_pane_ParamLimits

0x7a4b,	// (0x000657e9) cam6_indi_pane

0x7a65,	// (0x00065803) cam6_mode_pane_ParamLimits

0x7a65,	// (0x00065803) cam6_mode_pane

0x7a79,	// (0x00065817) cam6_timer_pane_ParamLimits

0x7a79,	// (0x00065817) cam6_timer_pane

0x7a85,	// (0x00065823) cam6_zoom_pane_ParamLimits

0x7a85,	// (0x00065823) cam6_zoom_pane

0x7aa1,	// (0x0006583f) cam6_mode_pane_g1_ParamLimits

0x7aa1,	// (0x0006583f) cam6_mode_pane_g1

0x7aad,	// (0x0006584b) cam6_mode_pane_g2_ParamLimits

0x7aad,	// (0x0006584b) cam6_mode_pane_g2

0x7ab9,	// (0x00065857) cam6_mode_pane_g3_ParamLimits

0x7ab9,	// (0x00065857) cam6_mode_pane_g3

0x7ac5,	// (0x00065863) cam6_mode_pane_g4_ParamLimits

0x7ac5,	// (0x00065863) cam6_mode_pane_g4

0x0003,

0xfb50,	// (0x0006d8ee) cam6_mode_pane_g_ParamLimits

0xfb50,	// (0x0006d8ee) cam6_mode_pane_g

0xdaad,	// (0x0006b84b) bg_tb_trans_pane_cp08_ParamLimits

0xdaad,	// (0x0006b84b) bg_tb_trans_pane_cp08

0xdd24,	// (0x0006bac2) cam6_battery_pane_ParamLimits

0xdd24,	// (0x0006bac2) cam6_battery_pane

0xdd3a,	// (0x0006bad8) cam6_indi_pane_g1_ParamLimits

0xdd3a,	// (0x0006bad8) cam6_indi_pane_g1

0xdd4c,	// (0x0006baea) cam6_indi_pane_g2_ParamLimits

0xdd4c,	// (0x0006baea) cam6_indi_pane_g2

0xdd5e,	// (0x0006bafc) cam6_indi_pane_g3_ParamLimits

0xdd5e,	// (0x0006bafc) cam6_indi_pane_g3

0x0002,

0xfb59,	// (0x0006d8f7) cam6_indi_pane_g_ParamLimits

0xfb59,	// (0x0006d8f7) cam6_indi_pane_g

0xdd70,	// (0x0006bb0e) cam6_indi_pane_t1_ParamLimits

0xdd70,	// (0x0006bb0e) cam6_indi_pane_t1

0x6618,	// (0x000643b6) cam6_autofocus_pane_g1

0x6610,	// (0x000643ae) cam6_autofocus_pane_g2

0x6628,	// (0x000643c6) cam6_autofocus_pane_g3

0x6620,	// (0x000643be) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0006d8fe) cam6_autofocus_pane_g

0xdd96,	// (0x0006bb34) cam6_timer_pane_g1

0xdd9e,	// (0x0006bb3c) cam6_timer_pane_t1

0xddac,	// (0x0006bb4a) cam6_zoom_cont_pane

0xddb4,	// (0x0006bb52) cam6_zoom_pane_g1

0xddbc,	// (0x0006bb5a) cam6_zoom_pane_g2

0x7ad1,	// (0x0006586f) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0006d907) cam6_zoom_pane_g

0xcc86,	// (0x0006aa24) cam6_battery_pane_g1

0xcc86,	// (0x0006aa24) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0006d47a) cam6_battery_pane_g

0xddc4,	// (0x0006bb62) cam6_zoom_cont_pane_g1

0xddcd,	// (0x0006bb6b) cam6_zoom_cont_pane_g2

0xddd6,	// (0x0006bb74) cam6_zoom_cont_pane_g3

0x0002,

0xfb70,	// (0x0006d90e) cam6_zoom_cont_pane_g

0x7aee,	// (0x0006588c) cam6_mode_pane_cp_ParamLimits

0x7aee,	// (0x0006588c) cam6_mode_pane_cp

0x7b02,	// (0x000658a0) cam6_zoom_pane_cp_ParamLimits

0x7b02,	// (0x000658a0) cam6_zoom_pane_cp

0x7b1e,	// (0x000658bc) vid6_image_uncrop_cif_pane_ParamLimits

0x7b1e,	// (0x000658bc) vid6_image_uncrop_cif_pane

0x7b4a,	// (0x000658e8) vid6_image_uncrop_nhd_pane_ParamLimits

0x7b4a,	// (0x000658e8) vid6_image_uncrop_nhd_pane

0x7b69,	// (0x00065907) vid6_image_uncrop_vga_pane_ParamLimits

0x7b69,	// (0x00065907) vid6_image_uncrop_vga_pane

0x7b88,	// (0x00065926) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b88,	// (0x00065926) vid6_image_uncrop_wvga_pane

0x7ba7,	// (0x00065945) vid6_indi_pane_ParamLimits

0x7ba7,	// (0x00065945) vid6_indi_pane

0xdaad,	// (0x0006b84b) bg_tb_trans_pane_cp09_ParamLimits

0xdaad,	// (0x0006b84b) bg_tb_trans_pane_cp09

0xddee,	// (0x0006bb8c) cam6_battery_pane_cp_ParamLimits

0xddee,	// (0x0006bb8c) cam6_battery_pane_cp

0xddfa,	// (0x0006bb98) vid6_indi_pane_g1_ParamLimits

0xddfa,	// (0x0006bb98) vid6_indi_pane_g1

0xde0c,	// (0x0006bbaa) vid6_indi_pane_g2_ParamLimits

0xde0c,	// (0x0006bbaa) vid6_indi_pane_g2

0xde1e,	// (0x0006bbbc) vid6_indi_pane_g3_ParamLimits

0xde1e,	// (0x0006bbbc) vid6_indi_pane_g3

0xde35,	// (0x0006bbd3) vid6_indi_pane_g4_ParamLimits

0xde35,	// (0x0006bbd3) vid6_indi_pane_g4

0xde4c,	// (0x0006bbea) vid6_indi_pane_g5_ParamLimits

0xde4c,	// (0x0006bbea) vid6_indi_pane_g5

0x0004,

0xfb77,	// (0x0006d915) vid6_indi_pane_g_ParamLimits

0xfb77,	// (0x0006d915) vid6_indi_pane_g

0xde66,	// (0x0006bc04) vid6_indi_pane_t1_ParamLimits

0xde66,	// (0x0006bc04) vid6_indi_pane_t1

0xde7c,	// (0x0006bc1a) vid6_indi_pane_t2_ParamLimits

0xde7c,	// (0x0006bc1a) vid6_indi_pane_t2

0xdea4,	// (0x0006bc42) vid6_indi_pane_t3_ParamLimits

0xdea4,	// (0x0006bc42) vid6_indi_pane_t3

0xdecc,	// (0x0006bc6a) vid6_indi_pane_t4_ParamLimits

0xdecc,	// (0x0006bc6a) vid6_indi_pane_t4

0x0003,

0xfb82,	// (0x0006d920) vid6_indi_pane_t_ParamLimits

0xfb82,	// (0x0006d920) vid6_indi_pane_t

0xdef0,	// (0x0006bc8e) wait_bar_pane_cp08

0x7bcc,	// (0x0006596a) main_cset_text2_pane_t1_ParamLimits

0x7bcc,	// (0x0006596a) main_cset_text2_pane_t1

0x7ad9,	// (0x00065877) listscroll_gen_pane_cp06_t1_ParamLimits

0x7ad9,	// (0x00065877) listscroll_gen_pane_cp06_t1

0x9c4a,	// (0x000679e8) main_cam6_set_pane

0x649a,	// (0x00064238) bg_tb_trans_pane_cp06_ParamLimits

0x64b0,	// (0x0006424e) cam4_indicators_pane_g1_ParamLimits

0x64c1,	// (0x0006425f) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0006d695) cam4_indicators_pane_g_ParamLimits

0x64d9,	// (0x00064277) cam4_indicators_pane_t1_ParamLimits

0x6586,	// (0x00064324) bg_tb_trans_pane_cp07_ParamLimits

0x659e,	// (0x0006433c) vid4_indicators_pane_g1_ParamLimits

0x65b4,	// (0x00064352) vid4_indicators_pane_g2_ParamLimits

0x65c8,	// (0x00064366) vid4_indicators_pane_g3_ParamLimits

0x65db,	// (0x00064379) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0006d6a7) vid4_indicators_pane_g_ParamLimits

0x65f9,	// (0x00064397) vid4_indicators_pane_t1_ParamLimits

0x765b,	// (0x000653f9) vid4_progress_pane_g1_ParamLimits

0x766d,	// (0x0006540b) vid4_progress_pane_g2_ParamLimits

0x3d66,	// (0x00061b04) vid4_progress_pane_g3_ParamLimits

0x767f,	// (0x0006541d) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0006d858) vid4_progress_pane_g_ParamLimits

0x769d,	// (0x0006543b) vid4_progress_pane_t1_ParamLimits

0x76b2,	// (0x00065450) vid4_progress_pane_t2_ParamLimits

0x76c8,	// (0x00065466) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0006d863) vid4_progress_pane_t_ParamLimits

0x76dd,	// (0x0006547b) wait_bar_pane_cp07_ParamLimits

0x7bf3,	// (0x00065991) main_cam6_set_pane_g2_ParamLimits

0x7bf3,	// (0x00065991) main_cam6_set_pane_g2

0x7bff,	// (0x0006599d) main_cset6_listscroll_pane_ParamLimits

0x7bff,	// (0x0006599d) main_cset6_listscroll_pane

0x7c2c,	// (0x000659ca) main_cset6_slider_pane_ParamLimits

0x7c2c,	// (0x000659ca) main_cset6_slider_pane

0x7c38,	// (0x000659d6) main_cset6_text2_pane_ParamLimits

0x7c38,	// (0x000659d6) main_cset6_text2_pane

0xdeff,	// (0x0006bc9d) main_cset6_text_pane

0xdf07,	// (0x0006bca5) main_cset_list_pane_copy1_ParamLimits

0xdf07,	// (0x0006bca5) main_cset_list_pane_copy1

0xdf17,	// (0x0006bcb5) scroll_pane_cp028_copy1

0x7c4b,	// (0x000659e9) cset_list_set_pane_copy1

0x7c5b,	// (0x000659f9) aid_position_infowindow_above_copy1

0x7c63,	// (0x00065a01) aid_position_infowindow_below_copy1

0x7c6b,	// (0x00065a09) cset_list_set_pane_g1_copy1

0x7c73,	// (0x00065a11) cset_list_set_pane_g3_copy1_ParamLimits

0x7c73,	// (0x00065a11) cset_list_set_pane_g3_copy1

0x7c82,	// (0x00065a20) cset_list_set_pane_t1_copy1_ParamLimits

0x7c82,	// (0x00065a20) cset_list_set_pane_t1_copy1

0xa2e1,	// (0x0006807f) list_highlight_pane_cp021_copy1_ParamLimits

0xa2e1,	// (0x0006807f) list_highlight_pane_cp021_copy1

0xdf20,	// (0x0006bcbe) cset6_slider_pane_ParamLimits

0xdf20,	// (0x0006bcbe) cset6_slider_pane

0xdf4c,	// (0x0006bcea) main_cset6_slider_pane_g1_ParamLimits

0xdf4c,	// (0x0006bcea) main_cset6_slider_pane_g1

0x7c97,	// (0x00065a35) main_cset6_slider_pane_g2_ParamLimits

0x7c97,	// (0x00065a35) main_cset6_slider_pane_g2

0xdf74,	// (0x0006bd12) main_cset6_slider_pane_g3_ParamLimits

0xdf74,	// (0x0006bd12) main_cset6_slider_pane_g3

0x7cbf,	// (0x00065a5d) main_cset6_slider_pane_g4_ParamLimits

0x7cbf,	// (0x00065a5d) main_cset6_slider_pane_g4

0x7ccb,	// (0x00065a69) main_cset6_slider_pane_g5_ParamLimits

0x7ccb,	// (0x00065a69) main_cset6_slider_pane_g5

0xd7d3,	// (0x0006b571) main_cset6_slider_pane_g7_ParamLimits

0xd7d3,	// (0x0006b571) main_cset6_slider_pane_g7

0xd7df,	// (0x0006b57d) main_cset6_slider_pane_g8_ParamLimits

0xd7df,	// (0x0006b57d) main_cset6_slider_pane_g8

0x7cd7,	// (0x00065a75) main_cset6_slider_pane_g9_ParamLimits

0x7cd7,	// (0x00065a75) main_cset6_slider_pane_g9

0x7ce3,	// (0x00065a81) main_cset6_slider_pane_g10_ParamLimits

0x7ce3,	// (0x00065a81) main_cset6_slider_pane_g10

0x7cef,	// (0x00065a8d) main_cset6_slider_pane_g11_ParamLimits

0x7cef,	// (0x00065a8d) main_cset6_slider_pane_g11

0x7cfb,	// (0x00065a99) main_cset6_slider_pane_g12_ParamLimits

0x7cfb,	// (0x00065a99) main_cset6_slider_pane_g12

0x7d07,	// (0x00065aa5) main_cset6_slider_pane_g13_ParamLimits

0x7d07,	// (0x00065aa5) main_cset6_slider_pane_g13

0x7d13,	// (0x00065ab1) main_cset6_slider_pane_g14_ParamLimits

0x7d13,	// (0x00065ab1) main_cset6_slider_pane_g14

0x7d1f,	// (0x00065abd) main_cset6_slider_pane_g15_ParamLimits

0x7d1f,	// (0x00065abd) main_cset6_slider_pane_g15

0x7d37,	// (0x00065ad5) main_cset6_slider_pane_g16_ParamLimits

0x7d37,	// (0x00065ad5) main_cset6_slider_pane_g16

0x7d43,	// (0x00065ae1) main_cset6_slider_pane_g17_ParamLimits

0x7d43,	// (0x00065ae1) main_cset6_slider_pane_g17

0x0011,

0xfb8b,	// (0x0006d929) main_cset6_slider_pane_g_ParamLimits

0xfb8b,	// (0x0006d929) main_cset6_slider_pane_g

0xdf80,	// (0x0006bd1e) main_cset6_slider_pane_t1_ParamLimits

0xdf80,	// (0x0006bd1e) main_cset6_slider_pane_t1

0x7d67,	// (0x00065b05) main_cset6_slider_pane_t2_ParamLimits

0x7d67,	// (0x00065b05) main_cset6_slider_pane_t2

0x7d92,	// (0x00065b30) main_cset6_slider_pane_t3_ParamLimits

0x7d92,	// (0x00065b30) main_cset6_slider_pane_t3

0x7dbd,	// (0x00065b5b) main_cset6_slider_pane_t4_ParamLimits

0x7dbd,	// (0x00065b5b) main_cset6_slider_pane_t4

0x7de8,	// (0x00065b86) main_cset6_slider_pane_t5_ParamLimits

0x7de8,	// (0x00065b86) main_cset6_slider_pane_t5

0xdfc1,	// (0x0006bd5f) main_cset6_slider_pane_t7_ParamLimits

0xdfc1,	// (0x0006bd5f) main_cset6_slider_pane_t7

0x7e13,	// (0x00065bb1) main_cset6_slider_pane_t8_ParamLimits

0x7e13,	// (0x00065bb1) main_cset6_slider_pane_t8

0x7e37,	// (0x00065bd5) main_cset6_slider_pane_t9_ParamLimits

0x7e37,	// (0x00065bd5) main_cset6_slider_pane_t9

0x7e5b,	// (0x00065bf9) main_cset6_slider_pane_t10_ParamLimits

0x7e5b,	// (0x00065bf9) main_cset6_slider_pane_t10

0x7e7f,	// (0x00065c1d) main_cset6_slider_pane_t11_ParamLimits

0x7e7f,	// (0x00065c1d) main_cset6_slider_pane_t11

0xdff7,	// (0x0006bd95) main_cset6_slider_pane_t14_ParamLimits

0xdff7,	// (0x0006bd95) main_cset6_slider_pane_t14

0xe030,	// (0x0006bdce) main_cset6_slider_pane_t15_ParamLimits

0xe030,	// (0x0006bdce) main_cset6_slider_pane_t15

0x000b,

0xfbb0,	// (0x0006d94e) main_cset6_slider_pane_t_ParamLimits

0xfbb0,	// (0x0006d94e) main_cset6_slider_pane_t

0xda61,	// (0x0006b7ff) cset_slider_pane_g1_copy1

0xda6a,	// (0x0006b808) cset_slider_pane_g2_copy1

0xda73,	// (0x0006b811) cset_slider_pane_g3_copy1

0x9c4a,	// (0x000679e8) bg_popup_sub_pane_cp011_copy1

0xe069,	// (0x0006be07) main_cset_text_pane_g1_copy1

0xd919,	// (0x0006b6b7) main_cset_text_pane_t1_copy1

0xd927,	// (0x0006b6c5) main_cset_text_pane_t2_copy1

0xd935,	// (0x0006b6d3) main_cset_text_pane_t3_copy1

0xd943,	// (0x0006b6e1) main_cset_text_pane_t4_copy1

0xd951,	// (0x0006b6ef) main_cset_text_pane_t5_copy1

0xe071,	// (0x0006be0f) main_cset_text_pane_t6_copy1

0xe07f,	// (0x0006be1d) main_cset_text_pane_t7_copy1

0x7f48,	// (0x00065ce6) main_cset_text2_pane_t1_copy1

0xa2e1,	// (0x0006807f) main_ncimui_pane

0x44e5,	// (0x00062283) popup_query_ncimui_window_ParamLimits

0x44e5,	// (0x00062283) popup_query_ncimui_window

0xa2ef,	// (0x0006808d) field_cale_ev2_pane_g4_ParamLimits

0xa2ef,	// (0x0006808d) field_cale_ev2_pane_g4

0x5ddb,	// (0x00063b79) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5ddb,	// (0x00063b79) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0006d633) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0006d633) cell_video_dialer_keypad_pane_g

0x5df3,	// (0x00063b91) cell_video_dialer_keypad_pane_t1

0x9c4a,	// (0x000679e8) bg_popup_window_pane_cp012

0xb1c6,	// (0x00068f64) heading_pane_cp06

0xe0ab,	// (0x0006be49) ncim_query_content_pane

0x9c4a,	// (0x000679e8) bg_popup_heading_pane_cp01

0xe0b3,	// (0x0006be51) ncim_heading_pane_t1

0xe0c1,	// (0x0006be5f) ncim_indicator_popup_pane

0xe0d3,	// (0x0006be71) ncim_query_button_pane

0xe0e9,	// (0x0006be87) ncim_query_content_pane_t1

0xe0fb,	// (0x0006be99) ncim_query_content_pane_t2

0x0005,

0xfbf4,	// (0x0006d992) ncim_query_content_pane_t

0xe135,	// (0x0006bed3) ncim_query_list_pane

0xe147,	// (0x0006bee5) ncim_query_popup_pane

0xe0c1,	// (0x0006be5f) ncim_indicator_popup_pane_ParamLimits

0x80a4,	// (0x00065e42) ncim_query_content_pane_g1_ParamLimits

0x80a4,	// (0x00065e42) ncim_query_content_pane_g1

0xe0e9,	// (0x0006be87) ncim_query_content_pane_t1_ParamLimits

0xe0fb,	// (0x0006be99) ncim_query_content_pane_t2_ParamLimits

0x80b0,	// (0x00065e4e) ncim_query_content_pane_t3_ParamLimits

0x80b0,	// (0x00065e4e) ncim_query_content_pane_t3

0x80cd,	// (0x00065e6b) ncim_query_content_pane_t4_ParamLimits

0x80cd,	// (0x00065e6b) ncim_query_content_pane_t4

0x80ea,	// (0x00065e88) ncim_query_content_pane_t5_ParamLimits

0x80ea,	// (0x00065e88) ncim_query_content_pane_t5

0xe10d,	// (0x0006beab) ncim_query_content_pane_t6_ParamLimits

0xe10d,	// (0x0006beab) ncim_query_content_pane_t6

0xfbf4,	// (0x0006d992) ncim_query_content_pane_t_ParamLimits

0xe135,	// (0x0006bed3) ncim_query_list_pane_ParamLimits

0xe147,	// (0x0006bee5) ncim_query_popup_pane_ParamLimits

0xe15b,	// (0x0006bef9) wait_bar_pane_cp04

0x9c4a,	// (0x000679e8) input_focus_pane_cp011

0xe163,	// (0x0006bf01) ncim_query_popup_pane_t1

0xe171,	// (0x0006bf0f) ncim_list_query_list_pane_ParamLimits

0xe171,	// (0x0006bf0f) ncim_list_query_list_pane

0x9c4a,	// (0x000679e8) bg_button_pane_cp027

0xe184,	// (0x0006bf22) ncim_query_button_pane_g1

0x9c4a,	// (0x000679e8) list_highlight_pane_cp012

0xe18e,	// (0x0006bf2c) ncim_list_query_list_pane_g1

0xe196,	// (0x0006bf34) ncim_list_query_list_pane_t1

0x64cd,	// (0x0006426b) cam4_indicators_pane_g3_ParamLimits

0x64cd,	// (0x0006426b) cam4_indicators_pane_g3

0x65e7,	// (0x00064385) vid4_indicators_pane_g5_ParamLimits

0x65e7,	// (0x00064385) vid4_indicators_pane_g5

0x768e,	// (0x0006542c) vid4_progress_pane_g5_ParamLimits

0x768e,	// (0x0006542c) vid4_progress_pane_g5

0x7f7a,	// (0x00065d18) main_ncimui_pane_g1

0x7fe6,	// (0x00065d84) ncimui_group_query_pane_ParamLimits

0x7fe6,	// (0x00065d84) ncimui_group_query_pane

0x8040,	// (0x00065dde) ncimui_list_pane_ParamLimits

0x8040,	// (0x00065dde) ncimui_list_pane

0x8067,	// (0x00065e05) ncimui_text_pane_ParamLimits

0x8067,	// (0x00065e05) ncimui_text_pane

0x8107,	// (0x00065ea5) ncimui_text_pane_t1_ParamLimits

0x8107,	// (0x00065ea5) ncimui_text_pane_t1

0xe1a4,	// (0x0006bf42) ncimui_list_single_graphic_pane_ParamLimits

0xe1a4,	// (0x0006bf42) ncimui_list_single_graphic_pane

0x8126,	// (0x00065ec4) ncimui_query_pane_ParamLimits

0x8126,	// (0x00065ec4) ncimui_query_pane

0x9c4a,	// (0x000679e8) list_highlight_pane_cp013

0xe1b4,	// (0x0006bf52) ncim_list_query_list_pane_t1_copy1

0xe18e,	// (0x0006bf2c) ncim_list_single_graphic_pane_g1

0xe1c2,	// (0x0006bf60) ncim_query_button_pane_cp01

0xe1ce,	// (0x0006bf6c) ncim_query_entry_pane_ParamLimits

0xe1ce,	// (0x0006bf6c) ncim_query_entry_pane

0xe1e1,	// (0x0006bf7f) ncimui_query_pane_g1

0xe1ed,	// (0x0006bf8b) ncimui_query_pane_t1_ParamLimits

0xe1ed,	// (0x0006bf8b) ncimui_query_pane_t1

0xa2e1,	// (0x0006807f) input_focus_pane_cp012

0xe206,	// (0x0006bfa4) ncim_query_entry_pane_t1

0xa8e1,	// (0x0006867f) main_im_pane_ParamLimits

0xa2e1,	// (0x0006807f) main_mobtv_pane_ParamLimits

0xa2e1,	// (0x0006807f) main_mobtv_pane

0x7d4f,	// (0x00065aed) main_cset6_slider_pane_g18_ParamLimits

0x7d4f,	// (0x00065aed) main_cset6_slider_pane_g18

0x7d5b,	// (0x00065af9) main_cset6_slider_pane_g19_ParamLimits

0x7d5b,	// (0x00065af9) main_cset6_slider_pane_g19

0xd680,	// (0x0006b41e) bg_main_mobtv_pane_ParamLimits

0xd680,	// (0x0006b41e) bg_main_mobtv_pane

0x8139,	// (0x00065ed7) main_mobtv_info_pane

0x8144,	// (0x00065ee2) main_mobtv_loading_pane_ParamLimits

0x8144,	// (0x00065ee2) main_mobtv_loading_pane

0xe218,	// (0x0006bfb6) main_mobtv_pg_channel_list_pane

0xe222,	// (0x0006bfc0) main_mobtv_pg_hdr_pane

0x8151,	// (0x00065eef) main_mobtv_programe_curr_pane_ParamLimits

0x8151,	// (0x00065eef) main_mobtv_programe_curr_pane

0x815e,	// (0x00065efc) main_mobtv_programe_next_pane_ParamLimits

0x815e,	// (0x00065efc) main_mobtv_programe_next_pane

0xe22b,	// (0x0006bfc9) popup_mobtv_noti_window

0xcc86,	// (0x0006aa24) main_tv_pg_hdr_pane_g1

0xe235,	// (0x0006bfd3) main_tv_pg_hdr_pane_g2

0xe23d,	// (0x0006bfdb) main_tv_pg_hdr_pane_g3

0xe245,	// (0x0006bfe3) main_tv_pg_hdr_pane_g4

0xe24d,	// (0x0006bfeb) main_tv_pg_hdr_pane_g5

0xe257,	// (0x0006bff5) main_tv_pg_hdr_pane_g6

0xe261,	// (0x0006bfff) main_tv_pg_hdr_pane_g7

0xe26b,	// (0x0006c009) main_tv_pg_hdr_pane_g8

0xe275,	// (0x0006c013) main_tv_pg_hdr_pane_g9

0xe27f,	// (0x0006c01d) main_tv_pg_hdr_pane_g10

0xe289,	// (0x0006c027) main_tv_pg_hdr_pane_g11

0x000a,

0xfc01,	// (0x0006d99f) main_tv_pg_hdr_pane_g

0xe293,	// (0x0006c031) main_tv_pg_hdr_pane_t1

0xe2a1,	// (0x0006c03f) main_tv_pg_hdr_pane_t2

0xe2af,	// (0x0006c04d) main_tv_pg_hdr_pane_t3

0xe2bf,	// (0x0006c05d) main_tv_pg_hdr_pane_t4

0xe2cf,	// (0x0006c06d) main_tv_pg_hdr_pane_t5

0x0004,

0xfc18,	// (0x0006d9b6) main_tv_pg_hdr_pane_t

0xe2df,	// (0x0006c07d) single_mobtv_pg_channel_pane_ParamLimits

0xe2df,	// (0x0006c07d) single_mobtv_pg_channel_pane

0xe2f1,	// (0x0006c08f) single_mobtv_pg_channel_table_pane

0xe2fa,	// (0x0006c098) single_mobtv_pg_channel_thumb_pane

0xe303,	// (0x0006c0a1) single_tv_pg_channel_pane_g1

0xe30c,	// (0x0006c0aa) single_tv_pg_channel_pane_g2

0x0001,

0xfc23,	// (0x0006d9c1) single_tv_pg_channel_pane_g

0xceb6,	// (0x0006ac54) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xceb6,	// (0x0006ac54) bg_single_mobtv_pg_channel_thumb_pane

0xe315,	// (0x0006c0b3) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe315,	// (0x0006c0b3) single_mobtv_pg_channel_thumb_pane_g1

0xe323,	// (0x0006c0c1) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe323,	// (0x0006c0c1) single_mobtv_pg_channel_thumb_pane_g2

0xe32f,	// (0x0006c0cd) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe32f,	// (0x0006c0cd) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc28,	// (0x0006d9c6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc28,	// (0x0006d9c6) single_mobtv_pg_channel_thumb_pane_g

0xe33b,	// (0x0006c0d9) single_mobtv_pg_channel_thumb_pane_t1

0xe349,	// (0x0006c0e7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc2f,	// (0x0006d9cd) single_mobtv_pg_channel_thumb_pane_t

0xcc86,	// (0x0006aa24) bg_single_mobtv_pg_channel_table_pane_g1

0xcc86,	// (0x0006aa24) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0006d47a) bg_single_mobtv_pg_channel_table_pane_g

0xe357,	// (0x0006c0f5) single_mobtv_pg_channel_table_pane_t1

0xe365,	// (0x0006c103) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc34,	// (0x0006d9d2) single_mobtv_pg_channel_table_pane_t

0x8173,	// (0x00065f11) main_mobtv_info_pane_g1_ParamLimits

0x8173,	// (0x00065f11) main_mobtv_info_pane_g1

0x818f,	// (0x00065f2d) main_mobtv_info_pane_t1_ParamLimits

0x818f,	// (0x00065f2d) main_mobtv_info_pane_t1

0x8207,	// (0x00065fa5) main_mobtv_info_pane_t2_ParamLimits

0x8207,	// (0x00065fa5) main_mobtv_info_pane_t2

0x0002,

0xfc3e,	// (0x0006d9dc) main_mobtv_info_pane_t_ParamLimits

0xfc3e,	// (0x0006d9dc) main_mobtv_info_pane_t

0x8298,	// (0x00066036) wait_bar_pane_cp05

0x82aa,	// (0x00066048) main_mobtv_loading_pane_g1_ParamLimits

0x82aa,	// (0x00066048) main_mobtv_loading_pane_g1

0x82b6,	// (0x00066054) main_mobtv_loading_pane_g2_ParamLimits

0x82b6,	// (0x00066054) main_mobtv_loading_pane_g2

0x82c2,	// (0x00066060) main_mobtv_loading_pane_g3_ParamLimits

0x82c2,	// (0x00066060) main_mobtv_loading_pane_g3

0x0002,

0xfc45,	// (0x0006d9e3) main_mobtv_loading_pane_g_ParamLimits

0xfc45,	// (0x0006d9e3) main_mobtv_loading_pane_g

0xe38e,	// (0x0006c12c) main_mobtv_loading_pane_t1_ParamLimits

0xe38e,	// (0x0006c12c) main_mobtv_loading_pane_t1

0xe3a6,	// (0x0006c144) main_mobtv_loading_pane_t2_ParamLimits

0xe3a6,	// (0x0006c144) main_mobtv_loading_pane_t2

0x0001,

0xfc4c,	// (0x0006d9ea) main_mobtv_loading_pane_t_ParamLimits

0xfc4c,	// (0x0006d9ea) main_mobtv_loading_pane_t

0x82d0,	// (0x0006606e) wait_bar_pane_cp06_ParamLimits

0x82d0,	// (0x0006606e) wait_bar_pane_cp06

0xe3ca,	// (0x0006c168) main_mobtv_programe_curr_pane_t1

0xe3d8,	// (0x0006c176) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc51,	// (0x0006d9ef) main_mobtv_programe_curr_pane_t

0xe3e6,	// (0x0006c184) main_mobtv_programe_next_pane_t1

0xe3f4,	// (0x0006c192) main_mobtv_programe_next_pane_t2

0xe402,	// (0x0006c1a0) main_mobtv_programe_next_pane_t3

0x0002,

0xfc56,	// (0x0006d9f4) main_mobtv_programe_next_pane_t

0x9c4a,	// (0x000679e8) bg_popup_mobtv_noti_window_pane

0xe410,	// (0x0006c1ae) popup_mobtv_noti_window_g1

0xe418,	// (0x0006c1b6) popup_mobtv_noti_window_t1

0xe426,	// (0x0006c1c4) popup_mobtv_noti_window_t2

0x0001,

0xfc5d,	// (0x0006d9fb) popup_mobtv_noti_window_t

0xcc86,	// (0x0006aa24) bg_popup_mobtv_noti_window_pane_g1

0x9c4a,	// (0x000679e8) sc_clock_pane

0x9c4a,	// (0x000679e8) main_fs_bigclock_pane

0x78ab,	// (0x00065649) blid2_tripm_pane_t4_ParamLimits

0x78ab,	// (0x00065649) blid2_tripm_pane_t4

0x82dc,	// (0x0006607a) sc_clock_pane_g1_ParamLimits

0x82dc,	// (0x0006607a) sc_clock_pane_g1

0x82ea,	// (0x00066088) sc_clock_pane_t1_ParamLimits

0x82ea,	// (0x00066088) sc_clock_pane_t1

0x82ff,	// (0x0006609d) sc_clock_pane_t2_ParamLimits

0x82ff,	// (0x0006609d) sc_clock_pane_t2

0x8311,	// (0x000660af) sc_clock_pane_t3_ParamLimits

0x8311,	// (0x000660af) sc_clock_pane_t3

0x0004,

0xfc62,	// (0x0006da00) sc_clock_pane_t_ParamLimits

0xfc62,	// (0x0006da00) sc_clock_pane_t

0x91fc,	// (0x00066f9a) main_fs_bigclock_indicator_pane_ParamLimits

0x91fc,	// (0x00066f9a) main_fs_bigclock_indicator_pane

0x83a4,	// (0x00066142) main_fs_bigclock_pane_g1_ParamLimits

0x83a4,	// (0x00066142) main_fs_bigclock_pane_g1

0x9208,	// (0x00066fa6) main_fs_bigclock_pane_t1_ParamLimits

0x9208,	// (0x00066fa6) main_fs_bigclock_pane_t1

0x921a,	// (0x00066fb8) main_fs_bigclock_pane_t2_ParamLimits

0x921a,	// (0x00066fb8) main_fs_bigclock_pane_t2

0x922e,	// (0x00066fcc) main_fs_bigclock_pane_t3_ParamLimits

0x922e,	// (0x00066fcc) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x0006dc0a) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x0006dc0a) main_fs_bigclock_pane_t

0xec77,	// (0x0006ca15) main_fs_bigclock_indicator_pane_g1

0xe0db,	// (0x0006be79) ncim_query_content_pane_g2_ParamLimits

0xe0db,	// (0x0006be79) ncim_query_content_pane_g2

0x0001,

0xfbef,	// (0x0006d98d) ncim_query_content_pane_g_ParamLimits

0xfbef,	// (0x0006d98d) ncim_query_content_pane_g

0x8323,	// (0x000660c1) sc_clock_pane_t4_ParamLimits

0x8323,	// (0x000660c1) sc_clock_pane_t4

0xa2e1,	// (0x0006807f) main_radioblah_pane

0xd5e1,	// (0x0006b37f) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5e1,	// (0x0006b37f) cell_call4_button_pane_t1_copy1

0x7f96,	// (0x00065d34) main_ncimui_pane_t1_ParamLimits

0x7f96,	// (0x00065d34) main_ncimui_pane_t1

0x7fb0,	// (0x00065d4e) main_ncimui_pane_t2_ParamLimits

0x7fb0,	// (0x00065d4e) main_ncimui_pane_t2

0x0002,

0xfbe8,	// (0x0006d986) main_ncimui_pane_t_ParamLimits

0xfbe8,	// (0x0006d986) main_ncimui_pane_t

0xe579,	// (0x0006c317) main_radioblah_anim_pane_ParamLimits

0xe579,	// (0x0006c317) main_radioblah_anim_pane

0xe58a,	// (0x0006c328) main_radioblah_info_pane_ParamLimits

0xe58a,	// (0x0006c328) main_radioblah_info_pane

0xe59e,	// (0x0006c33c) main_radioblah_pane_t1_ParamLimits

0xe59e,	// (0x0006c33c) main_radioblah_pane_t1

0xe5ba,	// (0x0006c358) main_radioblah_pane_t2_ParamLimits

0xe5ba,	// (0x0006c358) main_radioblah_pane_t2

0x0003,

0xfc83,	// (0x0006da21) main_radioblah_pane_t_ParamLimits

0xfc83,	// (0x0006da21) main_radioblah_pane_t

0x83f6,	// (0x00066194) main_radioblah_rocker_ctrl_pane_ParamLimits

0x83f6,	// (0x00066194) main_radioblah_rocker_ctrl_pane

0xe602,	// (0x0006c3a0) main_radioblah_info_pane_t1_ParamLimits

0xe602,	// (0x0006c3a0) main_radioblah_info_pane_t1

0x843f,	// (0x000661dd) main_radioblah_info_pane_t2_ParamLimits

0x843f,	// (0x000661dd) main_radioblah_info_pane_t2

0x0003,

0xfc8c,	// (0x0006da2a) main_radioblah_info_pane_t_ParamLimits

0xfc8c,	// (0x0006da2a) main_radioblah_info_pane_t

0xcc86,	// (0x0006aa24) main_radioblah_rocker_ctrl_pane_g1

0x84ef,	// (0x0006628d) main_radioblah_rocker_ctrl_pane_g2

0x84f7,	// (0x00066295) main_radioblah_rocker_ctrl_pane_g3

0x84ff,	// (0x0006629d) main_radioblah_rocker_ctrl_pane_g4

0x8507,	// (0x000662a5) main_radioblah_rocker_ctrl_pane_g5

0x850f,	// (0x000662ad) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc95,	// (0x0006da33) main_radioblah_rocker_ctrl_pane_g

0x7f48,	// (0x00065ce6) main_cset_text2_pane_t1_copy1_ParamLimits

0x63ec,	// (0x0006418a) cam4_image_uncrop_qvga_pane

0x653f,	// (0x000642dd) vid4_image_uncrop_qcif_pane

0x7a3d,	// (0x000657db) cam6_image_uncrop_qvga_pane_ParamLimits

0x7a3d,	// (0x000657db) cam6_image_uncrop_qvga_pane

0xddde,	// (0x0006bb7c) vid6_image_uncrop_qcif_pane_ParamLimits

0xddde,	// (0x0006bb7c) vid6_image_uncrop_qcif_pane

0x9c4a,	// (0x000679e8) bg_popup_preview_window_pane_cp03

0xe08d,	// (0x0006be2b) list_cset_text2_pane

0xe095,	// (0x0006be33) main_cset6_text2_pane_g1

0xe09d,	// (0x0006be3b) main_cset6_text2_pane_t1

0x8517,	// (0x000662b5) list_cset_text2_pane_t1_ParamLimits

0x8517,	// (0x000662b5) list_cset_text2_pane_t1

0xa2e1,	// (0x0006807f) main_radioblah_pane_ParamLimits

0x8284,	// (0x00066022) main_mobtv_info_pane_t3_ParamLimits

0x8284,	// (0x00066022) main_mobtv_info_pane_t3

0x83e4,	// (0x00066182) main_radioblah_pane_g1

0x840f,	// (0x000661ad) main_radioblah_info_pane_g1

0x8494,	// (0x00066232) main_radioblah_info_pane_t3_ParamLimits

0x8494,	// (0x00066232) main_radioblah_info_pane_t3

0x3080,	// (0x00060e1e) highlight_cell_cale_month_pane_ParamLimits

0x3080,	// (0x00060e1e) highlight_cell_cale_month_pane

0x9c4a,	// (0x000679e8) main_phob_fisheye_pane

0xcf92,	// (0x0006ad30) scroll_pane_cp0031_ParamLimits

0xcf92,	// (0x0006ad30) scroll_pane_cp0031

0xdef0,	// (0x0006bc8e) wait_bar_pane_cp08_ParamLimits

0x7c4b,	// (0x000659e9) cset_list_set_pane_copy1_ParamLimits

0xe63c,	// (0x0006c3da) highlight_cell_cale_month_pane_g1

0x852e,	// (0x000662cc) highlight_cell_cale_month_pane_t1

0xdb9f,	// (0x0006b93d) list_gen_pane_cp01

0xd7be,	// (0x0006b55c) scroll_pane_01

0x853c,	// (0x000662da) list_single_double_fisheye_pane

0x8545,	// (0x000662e3) list_double_fisheye_pane_g1_ParamLimits

0x8545,	// (0x000662e3) list_double_fisheye_pane_g1

0x8551,	// (0x000662ef) list_double_fisheye_pane_g2_ParamLimits

0x8551,	// (0x000662ef) list_double_fisheye_pane_g2

0x8565,	// (0x00066303) list_double_fisheye_pane_g3_ParamLimits

0x8565,	// (0x00066303) list_double_fisheye_pane_g3

0x0004,

0xfca2,	// (0x0006da40) list_double_fisheye_pane_g_ParamLimits

0xfca2,	// (0x0006da40) list_double_fisheye_pane_g

0x858e,	// (0x0006632c) list_double_fisheye_pane_t1_ParamLimits

0x858e,	// (0x0006632c) list_double_fisheye_pane_t1

0x85a9,	// (0x00066347) list_double_fisheye_pane_t2_ParamLimits

0x85a9,	// (0x00066347) list_double_fisheye_pane_t2

0x0001,

0xfcad,	// (0x0006da4b) list_double_fisheye_pane_t_ParamLimits

0xfcad,	// (0x0006da4b) list_double_fisheye_pane_t

0x9c4a,	// (0x000679e8) main_call5_pane

0x8349,	// (0x000660e7) sc_swipe_pane_ParamLimits

0x8349,	// (0x000660e7) sc_swipe_pane

0x85d7,	// (0x00066375) call5_image_pane_ParamLimits

0x85d7,	// (0x00066375) call5_image_pane

0x85e9,	// (0x00066387) call5_swipe_1_pane_ParamLimits

0x85e9,	// (0x00066387) call5_swipe_1_pane

0x85f5,	// (0x00066393) call5_swipe_2_pane_ParamLimits

0x85f5,	// (0x00066393) call5_swipe_2_pane

0x8611,	// (0x000663af) popup_call5_audio_first_window_ParamLimits

0x8611,	// (0x000663af) popup_call5_audio_first_window

0xceb6,	// (0x0006ac54) call5_swipe_1_pane_g1_ParamLimits

0xceb6,	// (0x0006ac54) call5_swipe_1_pane_g1

0xe644,	// (0x0006c3e2) call5_swipe_1_pane_g2_ParamLimits

0xe644,	// (0x0006c3e2) call5_swipe_1_pane_g2

0x0001,

0xfcb2,	// (0x0006da50) call5_swipe_1_pane_g_ParamLimits

0xfcb2,	// (0x0006da50) call5_swipe_1_pane_g

0xe650,	// (0x0006c3ee) call5_swipe_1_pane_t1_ParamLimits

0xe650,	// (0x0006c3ee) call5_swipe_1_pane_t1

0xceb6,	// (0x0006ac54) call5_swipe_2_pane_g1_ParamLimits

0xceb6,	// (0x0006ac54) call5_swipe_2_pane_g1

0xe665,	// (0x0006c403) call5_swipe_2_pane_g2_ParamLimits

0xe665,	// (0x0006c403) call5_swipe_2_pane_g2

0x0001,

0xfcb7,	// (0x0006da55) call5_swipe_2_pane_g_ParamLimits

0xfcb7,	// (0x0006da55) call5_swipe_2_pane_g

0xe671,	// (0x0006c40f) call5_swipe_2_pane_t1_ParamLimits

0xe671,	// (0x0006c40f) call5_swipe_2_pane_t1

0xe686,	// (0x0006c424) sc_swipe_pane_g1_ParamLimits

0xe686,	// (0x0006c424) sc_swipe_pane_g1

0xe693,	// (0x0006c431) sc_swipe_pane_g2_ParamLimits

0xe693,	// (0x0006c431) sc_swipe_pane_g2

0x0001,

0xfcbc,	// (0x0006da5a) sc_swipe_pane_g_ParamLimits

0xfcbc,	// (0x0006da5a) sc_swipe_pane_g

0xe69f,	// (0x0006c43d) sc_swipe_pane_t1_ParamLimits

0xe69f,	// (0x0006c43d) sc_swipe_pane_t1

0x9c4a,	// (0x000679e8) main_cmail_launcher_pane

0x8621,	// (0x000663bf) aid_size_cell_cmail_l_ParamLimits

0x8621,	// (0x000663bf) aid_size_cell_cmail_l

0x8631,	// (0x000663cf) grid_cmail_l_pane_ParamLimits

0x8631,	// (0x000663cf) grid_cmail_l_pane

0x8641,	// (0x000663df) cell_cmail_l_pane_ParamLimits

0x8641,	// (0x000663df) cell_cmail_l_pane

0x8657,	// (0x000663f5) cell_cmail_l_pane_g1_ParamLimits

0x8657,	// (0x000663f5) cell_cmail_l_pane_g1

0x8663,	// (0x00066401) cell_cmail_l_pane_t1_ParamLimits

0x8663,	// (0x00066401) cell_cmail_l_pane_t1

0xe6b4,	// (0x0006c452) cell_cmail_l_pane_t2_ParamLimits

0xe6b4,	// (0x0006c452) cell_cmail_l_pane_t2

0x0001,

0xfcc1,	// (0x0006da5f) cell_cmail_l_pane_t_ParamLimits

0xfcc1,	// (0x0006da5f) cell_cmail_l_pane_t

0xa2e1,	// (0x0006807f) grid_highlight_pane_cp018_ParamLimits

0xa2e1,	// (0x0006807f) grid_highlight_pane_cp018

0x0c73,	// (0x0005ea11) main2_pane_ParamLimits

0x0c73,	// (0x0005ea11) main2_pane

0xa98c,	// (0x0006872a) popup_sp_fs_action_menu_bg_pane_g1

0xa994,	// (0x00068732) popup_sp_fs_action_menu_bg_pane_g2

0xa99c,	// (0x0006873a) popup_sp_fs_action_menu_bg_pane_g3

0xa9a4,	// (0x00068742) popup_sp_fs_action_menu_bg_pane_g4

0xa9ac,	// (0x0006874a) popup_sp_fs_action_menu_bg_pane_g5

0xa9b4,	// (0x00068752) popup_sp_fs_action_menu_bg_pane_g6

0xa9bc,	// (0x0006875a) popup_sp_fs_action_menu_bg_pane_g7

0xa9c4,	// (0x00068762) popup_sp_fs_action_menu_bg_pane_g8

0xa9cc,	// (0x0006876a) popup_sp_fs_action_menu_bg_pane_g9

0xa9d4,	// (0x00068772) popup_sp_fs_action_menu_bg_pane_g10

0xa9d4,	// (0x00068772) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0006cf28) popup_sp_fs_action_menu_bg_pane_g

0xa287,	// (0x00068025) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa287,	// (0x00068025) list_medium_line_x2_t3_g3_g1

0x1ed5,	// (0x0005fc73) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1ed5,	// (0x0005fc73) list_medium_line_x2_t3_g3_g2

0xa293,	// (0x00068031) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa293,	// (0x00068031) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0006cfd6) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0006cfd6) list_medium_line_x2_t3_g3_g

0x1ee1,	// (0x0005fc7f) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1ee1,	// (0x0005fc7f) list_medium_line_x2_t3_g3_t1

0x1ef6,	// (0x0005fc94) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1ef6,	// (0x0005fc94) list_medium_line_x2_t3_g3_t2

0x1f0a,	// (0x0005fca8) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1f0a,	// (0x0005fca8) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0006cfdd) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0006cfdd) list_medium_line_x2_t3_g3_t

0xa287,	// (0x00068025) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa287,	// (0x00068025) list_medium_line_x2_t3_g2_g1

0xa293,	// (0x00068031) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa293,	// (0x00068031) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0006cfe4) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0006cfe4) list_medium_line_x2_t3_g2_g

0x1f1f,	// (0x0005fcbd) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1f1f,	// (0x0005fcbd) list_medium_line_x2_t3_g2_t1

0x1f35,	// (0x0005fcd3) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1f35,	// (0x0005fcd3) list_medium_line_x2_t3_g2_t2

0x1f47,	// (0x0005fce5) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1f47,	// (0x0005fce5) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0006cfe9) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0006cfe9) list_medium_line_x2_t3_g2_t

0xa287,	// (0x00068025) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa287,	// (0x00068025) list_medium_line_x2_t4_g4_g1

0x1f65,	// (0x0005fd03) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1f65,	// (0x0005fd03) list_medium_line_x2_t4_g4_g2

0x1ed5,	// (0x0005fc73) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1ed5,	// (0x0005fc73) list_medium_line_x2_t4_g4_g3

0x1f71,	// (0x0005fd0f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1f71,	// (0x0005fd0f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0006cff0) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0006cff0) list_medium_line_x2_t4_g4_g

0x1f7d,	// (0x0005fd1b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1f7d,	// (0x0005fd1b) list_medium_line_x2_t4_g4_t1

0x1f97,	// (0x0005fd35) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1f97,	// (0x0005fd35) list_medium_line_x2_t4_g4_t2

0x1fad,	// (0x0005fd4b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1fad,	// (0x0005fd4b) list_medium_line_x2_t4_g4_t3

0x1fc2,	// (0x0005fd60) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1fc2,	// (0x0005fd60) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0006cff9) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0006cff9) list_medium_line_x2_t4_g4_t

0xa287,	// (0x00068025) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa287,	// (0x00068025) list_medium_line_x2_t2_g4_g1

0x1f65,	// (0x0005fd03) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1f65,	// (0x0005fd03) list_medium_line_x2_t2_g4_g2

0x1ed5,	// (0x0005fc73) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1ed5,	// (0x0005fc73) list_medium_line_x2_t2_g4_g3

0xa293,	// (0x00068031) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa293,	// (0x00068031) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0006d060) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0006d060) list_medium_line_x2_t2_g4_g

0x30a6,	// (0x00060e44) list_medium_line_x2_t2_g4_t1_ParamLimits

0x30a6,	// (0x00060e44) list_medium_line_x2_t2_g4_t1

0x1f0a,	// (0x0005fca8) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1f0a,	// (0x0005fca8) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0006d069) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0006d069) list_medium_line_x2_t2_g4_t

0xa287,	// (0x00068025) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa287,	// (0x00068025) list_medium_line_x2_t2_g3_g1

0x1ed5,	// (0x0005fc73) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1ed5,	// (0x0005fc73) list_medium_line_x2_t2_g3_g2

0xa293,	// (0x00068031) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa293,	// (0x00068031) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0006cfd6) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0006cfd6) list_medium_line_x2_t2_g3_g

0x30bb,	// (0x00060e59) list_medium_line_x2_t2_g3_t1_ParamLimits

0x30bb,	// (0x00060e59) list_medium_line_x2_t2_g3_t1

0x1f0a,	// (0x0005fca8) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1f0a,	// (0x0005fca8) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0006d06e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0006d06e) list_medium_line_x2_t2_g3_t

0x3251,	// (0x00060fef) main_sp_fs_list_pane_ParamLimits

0x3251,	// (0x00060fef) main_sp_fs_list_pane

0x325d,	// (0x00060ffb) sp_fs_scroll_pane_ParamLimits

0x325d,	// (0x00060ffb) sp_fs_scroll_pane

0x3269,	// (0x00061007) list_medium_line_x2_t3_t1

0x3279,	// (0x00061017) list_medium_line_x2_t3_t2

0x3287,	// (0x00061025) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0006d0b9) list_medium_line_x2_t3_t

0x3295,	// (0x00061033) list_medium_line_x3_t4_t1

0x32a5,	// (0x00061043) list_medium_line_x3_t4_t2

0x32b3,	// (0x00061051) list_medium_line_x3_t4_t3

0x3287,	// (0x00061025) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0006d0c0) list_medium_line_x3_t4_t

0x32c1,	// (0x0006105f) list_medium_line_x4_t5_t1

0x32d1,	// (0x0006106f) list_medium_line_x4_t5_t2

0x32b3,	// (0x00061051) list_medium_line_x4_t5_t3

0x32df,	// (0x0006107d) list_medium_line_x4_t5_t4

0x3287,	// (0x00061025) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0006d0c9) list_medium_line_x4_t5_t

0xa287,	// (0x00068025) list_medium_line_t4_g4_g1_ParamLimits

0xa287,	// (0x00068025) list_medium_line_t4_g4_g1

0xa29f,	// (0x0006803d) list_medium_line_t4_g4_g2_ParamLimits

0xa29f,	// (0x0006803d) list_medium_line_t4_g4_g2

0x32ed,	// (0x0006108b) list_medium_line_t4_g4_g3_ParamLimits

0x32ed,	// (0x0006108b) list_medium_line_t4_g4_g3

0xa293,	// (0x00068031) list_medium_line_t4_g4_g4_ParamLimits

0xa293,	// (0x00068031) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0006d0d4) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0006d0d4) list_medium_line_t4_g4_g

0x32f9,	// (0x00061097) list_medium_line_t4_g4_t1_ParamLimits

0x32f9,	// (0x00061097) list_medium_line_t4_g4_t1

0x330e,	// (0x000610ac) list_medium_line_t4_g4_t2_ParamLimits

0x330e,	// (0x000610ac) list_medium_line_t4_g4_t2

0x3324,	// (0x000610c2) list_medium_line_t4_g4_t3_ParamLimits

0x3324,	// (0x000610c2) list_medium_line_t4_g4_t3

0x1f0a,	// (0x0005fca8) list_medium_line_t4_g4_t4_ParamLimits

0x1f0a,	// (0x0005fca8) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0006d0dd) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0006d0dd) list_medium_line_t4_g4_t

0x344d,	// (0x000611eb) chi_dic_find_pane_g1

0x44ae,	// (0x0006224c) main_tport_pane

0x6f3c,	// (0x00064cda) list_medium_line_plain_t1

0x7032,	// (0x00064dd0) list_medium_line_t2_g2_g1_ParamLimits

0x7032,	// (0x00064dd0) list_medium_line_t2_g2_g1

0x703e,	// (0x00064ddc) list_medium_line_t2_g2_g2_ParamLimits

0x703e,	// (0x00064ddc) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0006d79e) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0006d79e) list_medium_line_t2_g2_g

0x704a,	// (0x00064de8) list_medium_line_t2_g2_t1_ParamLimits

0x704a,	// (0x00064de8) list_medium_line_t2_g2_t1

0x7061,	// (0x00064dff) list_medium_line_t2_g2_t2_ParamLimits

0x7061,	// (0x00064dff) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0006d7a3) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0006d7a3) list_medium_line_t2_g2_t

0xa3b4,	// (0x00068152) aid_sp_fs_list_icon_a_sm

0xa3bc,	// (0x0006815a) aid_sp_fs_list_icon_d

0xa3c4,	// (0x00068162) aid_sp_fs_text_primary

0xa3cd,	// (0x0006816b) aid_sp_fs_text_secondary

0x76f1,	// (0x0006548f) list_medium_line

0x76f1,	// (0x0006548f) list_medium_line_g2

0x76f1,	// (0x0006548f) list_medium_line_g3

0x76f1,	// (0x0006548f) list_medium_line_plain

0x76f1,	// (0x0006548f) list_medium_line_plain_t2

0x76f1,	// (0x0006548f) list_medium_line_plain_t3

0x76f1,	// (0x0006548f) list_medium_line_right_icon

0x76f1,	// (0x0006548f) list_medium_line_right_iconx2

0x76f1,	// (0x0006548f) list_medium_line_t2

0x76f1,	// (0x0006548f) list_medium_line_t2_g2

0x76f1,	// (0x0006548f) list_medium_line_t2_g3

0x76f1,	// (0x0006548f) list_medium_line_t2_right_icon

0x76f1,	// (0x0006548f) list_medium_line_t2_right_iconx2

0x76f1,	// (0x0006548f) list_medium_line_t3

0x76f1,	// (0x0006548f) list_medium_line_t3_g2

0x76f1,	// (0x0006548f) list_medium_line_t3_g3

0x76f1,	// (0x0006548f) list_medium_line_t3_right_iconx2

0x76fa,	// (0x00065498) list_medium_line_t4_g4

0x7703,	// (0x000654a1) list_medium_line_x2

0x7703,	// (0x000654a1) list_medium_line_x2_t2_g2

0x7703,	// (0x000654a1) list_medium_line_x2_t2_g3

0x7703,	// (0x000654a1) list_medium_line_x2_t2_g4

0x7703,	// (0x000654a1) list_medium_line_x2_t3

0x7703,	// (0x000654a1) list_medium_line_x2_t3_g2

0x7703,	// (0x000654a1) list_medium_line_x2_t3_g3

0x7703,	// (0x000654a1) list_medium_line_x2_t3_g4

0x7703,	// (0x000654a1) list_medium_line_x2_t4_g2

0x7703,	// (0x000654a1) list_medium_line_x2_t4_g4

0x770c,	// (0x000654aa) list_medium_line_x3

0x770c,	// (0x000654aa) list_medium_line_x3_t4

0x770c,	// (0x000654aa) list_medium_line_x3_t4_g4

0x76fa,	// (0x00065498) list_medium_line_x4_t4

0x76fa,	// (0x00065498) list_medium_line_x4_t4_g7

0x76fa,	// (0x00065498) list_medium_line_x4_t5

0x7715,	// (0x000654b3) list_single_fs_dyc_pane_ParamLimits

0x7715,	// (0x000654b3) list_single_fs_dyc_pane

0xa287,	// (0x00068025) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa287,	// (0x00068025) list_medium_line_x4_t4_g7_g1

0xa3d6,	// (0x00068174) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa3d6,	// (0x00068174) list_medium_line_x4_t4_g7_g2

0x7ea3,	// (0x00065c41) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7ea3,	// (0x00065c41) list_medium_line_x4_t4_g7_g3

0x7eb2,	// (0x00065c50) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7eb2,	// (0x00065c50) list_medium_line_x4_t4_g7_g4

0x7ebe,	// (0x00065c5c) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7ebe,	// (0x00065c5c) list_medium_line_x4_t4_g7_g5

0x7ecd,	// (0x00065c6b) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7ecd,	// (0x00065c6b) list_medium_line_x4_t4_g7_g6

0xa3e2,	// (0x00068180) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa3e2,	// (0x00068180) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc9,	// (0x0006d967) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc9,	// (0x0006d967) list_medium_line_x4_t4_g7_g

0x7edc,	// (0x00065c7a) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7edc,	// (0x00065c7a) list_medium_line_x4_t4_g7_t1

0x7ef1,	// (0x00065c8f) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7ef1,	// (0x00065c8f) list_medium_line_x4_t4_g7_t2

0x7f06,	// (0x00065ca4) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7f06,	// (0x00065ca4) list_medium_line_x4_t4_g7_t3

0x7f1b,	// (0x00065cb9) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7f1b,	// (0x00065cb9) list_medium_line_x4_t4_g7_t4

0xa3ee,	// (0x0006818c) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa3ee,	// (0x0006818c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd8,	// (0x0006d976) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd8,	// (0x0006d976) list_medium_line_x4_t4_g7_t

0x7f2d,	// (0x00065ccb) list_single_dyc_row_pane_ParamLimits

0x7f2d,	// (0x00065ccb) list_single_dyc_row_pane

0x85cb,	// (0x00066369) call5_gesture_pane_ParamLimits

0x85cb,	// (0x00066369) call5_gesture_pane

0x8601,	// (0x0006639f) call5_windows_pane_ParamLimits

0x8601,	// (0x0006639f) call5_windows_pane

0x8679,	// (0x00066417) call5_swipe_1_pane_cp_ParamLimits

0x8679,	// (0x00066417) call5_swipe_1_pane_cp

0x8685,	// (0x00066423) call5_swipe_2_pane_cp_ParamLimits

0x8685,	// (0x00066423) call5_swipe_2_pane_cp

0xaa97,	// (0x00068835) call5_image_pane_cp

0x8691,	// (0x0006642f) popup_call5_audio_first_window_cp_ParamLimits

0x8691,	// (0x0006642f) popup_call5_audio_first_window_cp

0xe686,	// (0x0006c424) call5_swipe_1_pane_g1_cp_ParamLimits

0xe686,	// (0x0006c424) call5_swipe_1_pane_g1_cp

0xe6c6,	// (0x0006c464) call5_swipe_1_pane_g2_cp

0xe69f,	// (0x0006c43d) call5_swipe_1_pane_t1_cp_ParamLimits

0xe69f,	// (0x0006c43d) call5_swipe_1_pane_t1_cp

0xe686,	// (0x0006c424) call5_swipe_2_pane_g1_cp_ParamLimits

0xe686,	// (0x0006c424) call5_swipe_2_pane_g1_cp

0xe6ce,	// (0x0006c46c) call5_swipe_2_pane_g2_cp

0xe6d6,	// (0x0006c474) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6d6,	// (0x0006c474) call5_swipe_2_pane_t1_cp

0xa2e1,	// (0x0006807f) main_sp_fs_email_pane

0xe6eb,	// (0x0006c489) main_sp_fs_listscroll_pane_te

0xa400,	// (0x0006819e) popup_sp_fs_action_menu_pane_ParamLimits

0xa400,	// (0x0006819e) popup_sp_fs_action_menu_pane

0xcc86,	// (0x0006aa24) bg_sp_fs_ctrlbar_pane_g1

0xd23b,	// (0x0006afd9) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd24d,	// (0x0006afeb) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd244,	// (0x0006afe2) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc86,	// (0x0006aa24) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc6,	// (0x0006da64) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca65,	// (0x0006a803) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca65,	// (0x0006a803) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6f4,	// (0x0006c492) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6f4,	// (0x0006c492) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe700,	// (0x0006c49e) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe700,	// (0x0006c49e) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfccf,	// (0x0006da6d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfccf,	// (0x0006da6d) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe70c,	// (0x0006c4aa) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe70c,	// (0x0006c4aa) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x869f,	// (0x0006643d) list_medium_line_t2_right_icon_g1

0x86a7,	// (0x00066445) list_medium_line_t2_right_icon_t1

0x86b7,	// (0x00066455) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd4,	// (0x0006da72) list_medium_line_t2_right_icon_t

0xc835,	// (0x0006a5d3) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc835,	// (0x0006a5d3) bg_sp_fs_ctrlbar_pane

0x871e,	// (0x000664bc) main_sp_fs_ctrlbar_button_pane_cp01

0x8726,	// (0x000664c4) main_sp_fs_ctrlbar_ddmenu_pane

0xd613,	// (0x0006b3b1) main_sp_fs_ctrlbar_pane_g1

0xe75e,	// (0x0006c4fc) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcd9,	// (0x0006da77) main_sp_fs_ctrlbar_pane_g

0xe76a,	// (0x0006c508) main_sp_fs_ctrlbar_pane_t1

0x8730,	// (0x000664ce) main_sp_fs_ctrlbar_pane

0x874a,	// (0x000664e8) main_sp_fs_listscroll_pane_te_cp01

0x875b,	// (0x000664f9) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x875b,	// (0x000664f9) popup_sp_fs_action_menu_pane_cp01

0xa2e1,	// (0x0006807f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa2e1,	// (0x0006807f) bg_sp_fs_highlight_list_pane_cp01

0xa446,	// (0x000681e4) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa446,	// (0x000681e4) sp_fs_action_menu_list_gene_pane_g1

0xe79a,	// (0x0006c538) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe79a,	// (0x0006c538) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce3,	// (0x0006da81) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce3,	// (0x0006da81) sp_fs_action_menu_list_gene_pane_g

0xa455,	// (0x000681f3) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa455,	// (0x000681f3) sp_fs_action_menu_list_gene_pane_t1

0xa46d,	// (0x0006820b) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa46d,	// (0x0006820b) sp_fs_action_menu_list_gene_pane

0xe7a7,	// (0x0006c545) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7a7,	// (0x0006c545) popup_sp_fs_action_menu_bg_pane

0xa490,	// (0x0006822e) sp_fs_action_menu_list_pane_ParamLimits

0xa490,	// (0x0006822e) sp_fs_action_menu_list_pane

0xe7b5,	// (0x0006c553) sp_fs_scroll_pane_cp01_ParamLimits

0xe7b5,	// (0x0006c553) sp_fs_scroll_pane_cp01

0x8785,	// (0x00066523) list_medium_line_plain_t2_t1

0x8795,	// (0x00066533) list_medium_line_plain_t2_t2

0x0001,

0xfce8,	// (0x0006da86) list_medium_line_plain_t2_t

0x87a3,	// (0x00066541) list_medium_line_plain_t3_t1

0x87b3,	// (0x00066551) list_medium_line_plain_t3_t2

0x87c1,	// (0x0006655f) list_medium_line_plain_t3_t3

0x0002,

0xfced,	// (0x0006da8b) list_medium_line_plain_t3_t

0xa287,	// (0x00068025) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa287,	// (0x00068025) list_medium_line_x2_t2_g2_g1

0xa293,	// (0x00068031) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa293,	// (0x00068031) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0006cfe4) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0006cfe4) list_medium_line_x2_t2_g2_g

0x32f9,	// (0x00061097) list_medium_line_x2_t2_g2_t1_ParamLimits

0x32f9,	// (0x00061097) list_medium_line_x2_t2_g2_t1

0x1f0a,	// (0x0005fca8) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1f0a,	// (0x0005fca8) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf4,	// (0x0006da92) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf4,	// (0x0006da92) list_medium_line_x2_t2_g2_t

0xa287,	// (0x00068025) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa287,	// (0x00068025) list_medium_line_x2_t4_g2_g1

0xa4b4,	// (0x00068252) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa4b4,	// (0x00068252) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcf9,	// (0x0006da97) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcf9,	// (0x0006da97) list_medium_line_x2_t4_g2_g

0x87cf,	// (0x0006656d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87cf,	// (0x0006656d) list_medium_line_x2_t4_g2_t1

0x87e9,	// (0x00066587) list_medium_line_x2_t4_g2_t2_ParamLimits

0x87e9,	// (0x00066587) list_medium_line_x2_t4_g2_t2

0x87ff,	// (0x0006659d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x87ff,	// (0x0006659d) list_medium_line_x2_t4_g2_t3

0x1f0a,	// (0x0005fca8) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1f0a,	// (0x0005fca8) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcfe,	// (0x0006da9c) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcfe,	// (0x0006da9c) list_medium_line_x2_t4_g2_t

0x8814,	// (0x000665b2) list_medium_line_t3_right_iconx2_g1

0x869f,	// (0x0006643d) list_medium_line_t3_right_iconx2_g2

0x881c,	// (0x000665ba) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd07,	// (0x0006daa5) list_medium_line_t3_right_iconx2_g

0x8826,	// (0x000665c4) list_medium_line_t3_right_iconx2_t1

0x8836,	// (0x000665d4) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd0e,	// (0x0006daac) list_medium_line_t3_right_iconx2_t

0xa287,	// (0x00068025) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa287,	// (0x00068025) list_medium_line_x3_t4_g4_g1

0x1ed5,	// (0x0005fc73) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1ed5,	// (0x0005fc73) list_medium_line_x3_t4_g4_g2

0xa29f,	// (0x0006803d) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa29f,	// (0x0006803d) list_medium_line_x3_t4_g4_g3

0x8844,	// (0x000665e2) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8844,	// (0x000665e2) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd13,	// (0x0006dab1) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd13,	// (0x0006dab1) list_medium_line_x3_t4_g4_g

0x8850,	// (0x000665ee) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8850,	// (0x000665ee) list_medium_line_x3_t4_g4_t1

0x8867,	// (0x00066605) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8867,	// (0x00066605) list_medium_line_x3_t4_g4_t2

0x887c,	// (0x0006661a) list_medium_line_x3_t4_g4_t3_ParamLimits

0x887c,	// (0x0006661a) list_medium_line_x3_t4_g4_t3

0x8891,	// (0x0006662f) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8891,	// (0x0006662f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1c,	// (0x0006daba) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1c,	// (0x0006daba) list_medium_line_x3_t4_g4_t

0x88ae,	// (0x0006664c) list_single_dyc_row_text_pane_t1_ParamLimits

0x88ae,	// (0x0006664c) list_single_dyc_row_text_pane_t1

0x88eb,	// (0x00066689) list_single_dyc_row_text_pane_t2_ParamLimits

0x88eb,	// (0x00066689) list_single_dyc_row_text_pane_t2

0xa4c6,	// (0x00068264) list_single_dyc_row_text_pane_t3_ParamLimits

0xa4c6,	// (0x00068264) list_single_dyc_row_text_pane_t3

0x0005,

0xfd25,	// (0x0006dac3) list_single_dyc_row_text_pane_t_ParamLimits

0xfd25,	// (0x0006dac3) list_single_dyc_row_text_pane_t

0xa4ea,	// (0x00068288) list_single_dyc_row_pane_g1_ParamLimits

0xa4ea,	// (0x00068288) list_single_dyc_row_pane_g1

0xa4f6,	// (0x00068294) list_single_dyc_row_pane_g2_ParamLimits

0xa4f6,	// (0x00068294) list_single_dyc_row_pane_g2

0xa502,	// (0x000682a0) list_single_dyc_row_pane_g3_ParamLimits

0xa502,	// (0x000682a0) list_single_dyc_row_pane_g3

0xa50e,	// (0x000682ac) list_single_dyc_row_pane_g4_ParamLimits

0xa50e,	// (0x000682ac) list_single_dyc_row_pane_g4

0x0003,

0xfd32,	// (0x0006dad0) list_single_dyc_row_pane_g_ParamLimits

0xfd32,	// (0x0006dad0) list_single_dyc_row_pane_g

0xa51a,	// (0x000682b8) list_single_dyc_row_text_pane_ParamLimits

0xa51a,	// (0x000682b8) list_single_dyc_row_text_pane

0x9c4a,	// (0x000679e8) bg_sp_fs_scroll_pane

0xe7ef,	// (0x0006c58d) thumb_sp_fs_scroll_pane

0x7032,	// (0x00064dd0) list_medium_line_g1_ParamLimits

0x7032,	// (0x00064dd0) list_medium_line_g1

0x8a14,	// (0x000667b2) list_medium_line_t1_ParamLimits

0x8a14,	// (0x000667b2) list_medium_line_t1

0xa287,	// (0x00068025) list_medium_line_x2_g1_ParamLimits

0xa287,	// (0x00068025) list_medium_line_x2_g1

0x1ed5,	// (0x0005fc73) list_medium_line_x2_g2_ParamLimits

0x1ed5,	// (0x0005fc73) list_medium_line_x2_g2

0x0001,

0xfd3b,	// (0x0006dad9) list_medium_line_x2_g_ParamLimits

0xfd3b,	// (0x0006dad9) list_medium_line_x2_g

0xa539,	// (0x000682d7) list_medium_line_x2_t1_ParamLimits

0xa539,	// (0x000682d7) list_medium_line_x2_t1

0xa287,	// (0x00068025) list_medium_line_x3_g1_ParamLimits

0xa287,	// (0x00068025) list_medium_line_x3_g1

0x1ed5,	// (0x0005fc73) list_medium_line_x3_g2_ParamLimits

0x1ed5,	// (0x0005fc73) list_medium_line_x3_g2

0x0001,

0xfd3b,	// (0x0006dad9) list_medium_line_x3_g_ParamLimits

0xfd3b,	// (0x0006dad9) list_medium_line_x3_g

0xa539,	// (0x000682d7) list_medium_line_x3_t1_ParamLimits

0xa539,	// (0x000682d7) list_medium_line_x3_t1

0xe7f8,	// (0x0006c596) thumb_sp_fs_scroll_pane_g1

0xe801,	// (0x0006c59f) thumb_sp_fs_scroll_pane_g2

0xe80a,	// (0x0006c5a8) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0006dade) thumb_sp_fs_scroll_pane_g

0xe7f8,	// (0x0006c596) bg_sp_fs_scroll_pane_g1

0xe801,	// (0x0006c59f) bg_sp_fs_scroll_pane_g2

0xe80a,	// (0x0006c5a8) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0006dade) bg_sp_fs_scroll_pane_g

0xa287,	// (0x00068025) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa287,	// (0x00068025) list_medium_line_x2_t3_g4_g1

0x1f65,	// (0x0005fd03) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1f65,	// (0x0005fd03) list_medium_line_x2_t3_g4_g2

0x1ed5,	// (0x0005fc73) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1ed5,	// (0x0005fc73) list_medium_line_x2_t3_g4_g3

0xa293,	// (0x00068031) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa293,	// (0x00068031) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0006d060) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0006d060) list_medium_line_x2_t3_g4_g

0x8a29,	// (0x000667c7) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a29,	// (0x000667c7) list_medium_line_x2_t3_g4_t1

0x8a3f,	// (0x000667dd) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a3f,	// (0x000667dd) list_medium_line_x2_t3_g4_t2

0x1f0a,	// (0x0005fca8) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1f0a,	// (0x0005fca8) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd47,	// (0x0006dae5) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd47,	// (0x0006dae5) list_medium_line_x2_t3_g4_t

0x7032,	// (0x00064dd0) list_medium_line_g2_g1_ParamLimits

0x7032,	// (0x00064dd0) list_medium_line_g2_g1

0x703e,	// (0x00064ddc) list_medium_line_g2_g2_ParamLimits

0x703e,	// (0x00064ddc) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0006d79e) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0006d79e) list_medium_line_g2_g

0x8a58,	// (0x000667f6) list_medium_line_g2_t1_ParamLimits

0x8a58,	// (0x000667f6) list_medium_line_g2_t1

0x7032,	// (0x00064dd0) list_medium_line_t3_g2_g1_ParamLimits

0x7032,	// (0x00064dd0) list_medium_line_t3_g2_g1

0x703e,	// (0x00064ddc) list_medium_line_t3_g2_g2_ParamLimits

0x703e,	// (0x00064ddc) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0006d79e) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0006d79e) list_medium_line_t3_g2_g

0x8a6d,	// (0x0006680b) list_medium_line_t3_g2_t1_ParamLimits

0x8a6d,	// (0x0006680b) list_medium_line_t3_g2_t1

0x8a87,	// (0x00066825) list_medium_line_t3_g2_t2_ParamLimits

0x8a87,	// (0x00066825) list_medium_line_t3_g2_t2

0x8a9d,	// (0x0006683b) list_medium_line_t3_g2_t3_ParamLimits

0x8a9d,	// (0x0006683b) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x0006daec) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x0006daec) list_medium_line_t3_g2_t

0x869f,	// (0x0006643d) list_medium_line_right_icon_g1

0x8ab4,	// (0x00066852) list_medium_line_right_icon_t1

0x7032,	// (0x00064dd0) list_medium_line_t2_g1_ParamLimits

0x7032,	// (0x00064dd0) list_medium_line_t2_g1

0x8ac2,	// (0x00066860) list_medium_line_t2_t1_ParamLimits

0x8ac2,	// (0x00066860) list_medium_line_t2_t1

0x8adc,	// (0x0006687a) list_medium_line_t2_t2_ParamLimits

0x8adc,	// (0x0006687a) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x0006daf3) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x0006daf3) list_medium_line_t2_t

0x7032,	// (0x00064dd0) list_medium_line_t3_g1_ParamLimits

0x7032,	// (0x00064dd0) list_medium_line_t3_g1

0x8af1,	// (0x0006688f) list_medium_line_t3_t1_ParamLimits

0x8af1,	// (0x0006688f) list_medium_line_t3_t1

0x8b08,	// (0x000668a6) list_medium_line_t3_t2_ParamLimits

0x8b08,	// (0x000668a6) list_medium_line_t3_t2

0x8b1d,	// (0x000668bb) list_medium_line_t3_t3_ParamLimits

0x8b1d,	// (0x000668bb) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x0006daf8) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x0006daf8) list_medium_line_t3_t

0x7032,	// (0x00064dd0) list_medium_line_g3_g1_ParamLimits

0x7032,	// (0x00064dd0) list_medium_line_g3_g1

0x8b2f,	// (0x000668cd) list_medium_line_g3_g2_ParamLimits

0x8b2f,	// (0x000668cd) list_medium_line_g3_g2

0x703e,	// (0x00064ddc) list_medium_line_g3_g3_ParamLimits

0x703e,	// (0x00064ddc) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x0006daff) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x0006daff) list_medium_line_g3_g

0x8b3b,	// (0x000668d9) list_medium_line_g3_t1_ParamLimits

0x8b3b,	// (0x000668d9) list_medium_line_g3_t1

0x7032,	// (0x00064dd0) list_medium_line_t2_g3_g1_ParamLimits

0x7032,	// (0x00064dd0) list_medium_line_t2_g3_g1

0x8b2f,	// (0x000668cd) list_medium_line_t2_g3_g2_ParamLimits

0x8b2f,	// (0x000668cd) list_medium_line_t2_g3_g2

0x703e,	// (0x00064ddc) list_medium_line_t2_g3_g3_ParamLimits

0x703e,	// (0x00064ddc) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x0006daff) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x0006daff) list_medium_line_t2_g3_g

0x8b50,	// (0x000668ee) list_medium_line_t2_g3_t1_ParamLimits

0x8b50,	// (0x000668ee) list_medium_line_t2_g3_t1

0x8b67,	// (0x00066905) list_medium_line_t2_g3_t2_ParamLimits

0x8b67,	// (0x00066905) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x0006db06) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x0006db06) list_medium_line_t2_g3_t

0x7032,	// (0x00064dd0) list_medium_line_t3_g3_g1_ParamLimits

0x7032,	// (0x00064dd0) list_medium_line_t3_g3_g1

0x8b2f,	// (0x000668cd) list_medium_line_t3_g3_g2_ParamLimits

0x8b2f,	// (0x000668cd) list_medium_line_t3_g3_g2

0x703e,	// (0x00064ddc) list_medium_line_t3_g3_g3_ParamLimits

0x703e,	// (0x00064ddc) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x0006daff) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x0006daff) list_medium_line_t3_g3_g

0x8b7c,	// (0x0006691a) list_medium_line_t3_g3_t1_ParamLimits

0x8b7c,	// (0x0006691a) list_medium_line_t3_g3_t1

0x8b90,	// (0x0006692e) list_medium_line_t3_g3_t2_ParamLimits

0x8b90,	// (0x0006692e) list_medium_line_t3_g3_t2

0x8ba2,	// (0x00066940) list_medium_line_t3_g3_t3_ParamLimits

0x8ba2,	// (0x00066940) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x0006db0b) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x0006db0b) list_medium_line_t3_g3_t

0x8814,	// (0x000665b2) list_medium_line_right_iconx2_g1

0x869f,	// (0x0006643d) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x0006db12) list_medium_line_right_iconx2_g

0x8bb6,	// (0x00066954) list_medium_line_right_iconx2_t1

0x8814,	// (0x000665b2) list_medium_line_t2_right_iconx2_g1

0x869f,	// (0x0006643d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x0006db12) list_medium_line_t2_right_iconx2_g

0x8bc4,	// (0x00066962) list_medium_line_t2_right_iconx2_t1

0x8bd4,	// (0x00066972) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x0006db17) list_medium_line_t2_right_iconx2_t

0x8be2,	// (0x00066980) list_medium_line_x4_t4_t1

0x8bf0,	// (0x0006698e) list_medium_line_x4_t4_t2

0x8c00,	// (0x0006699e) list_medium_line_x4_t4_t3

0x8c10,	// (0x000669ae) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x0006db1c) list_medium_line_x4_t4_t

0x8c4a,	// (0x000669e8) tport_appsw_pane_ParamLimits

0x8c4a,	// (0x000669e8) tport_appsw_pane

0x8c58,	// (0x000669f6) tport_contact_pane_ParamLimits

0x8c58,	// (0x000669f6) tport_contact_pane

0x8c68,	// (0x00066a06) tport_listscroll_pane_ParamLimits

0x8c68,	// (0x00066a06) tport_listscroll_pane

0x8c78,	// (0x00066a16) cell_tport_appsw_pane_ParamLimits

0x8c78,	// (0x00066a16) cell_tport_appsw_pane

0xcf1b,	// (0x0006acb9) tport_appsw_pane_g1_ParamLimits

0xcf1b,	// (0x0006acb9) tport_appsw_pane_g1

0xe813,	// (0x0006c5b1) tport_contact_pane_g1

0xe81c,	// (0x0006c5ba) tport_contact_pane_t1

0xe82a,	// (0x0006c5c8) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x0006db25) tport_contact_pane_t

0xe838,	// (0x0006c5d6) list_tport_pane

0xe841,	// (0x0006c5df) scroll_pane_cp_030

0x8cad,	// (0x00066a4b) cell_tport_appsw_pane_g1

0x8cbd,	// (0x00066a5b) cell_tport_appsw_pane_t1

0x8ccb,	// (0x00066a69) grid_highlight_pane_cp019

0x8cd3,	// (0x00066a71) list_tport_double_graphic_pane_ParamLimits

0x8cd3,	// (0x00066a71) list_tport_double_graphic_pane

0xa2e1,	// (0x0006807f) list_highlight_pane_cp023_ParamLimits

0xa2e1,	// (0x0006807f) list_highlight_pane_cp023

0x8ce0,	// (0x00066a7e) list_tport_double_graphic_pane_g1_ParamLimits

0x8ce0,	// (0x00066a7e) list_tport_double_graphic_pane_g1

0x8ced,	// (0x00066a8b) list_tport_double_graphic_pane_t1_ParamLimits

0x8ced,	// (0x00066a8b) list_tport_double_graphic_pane_t1

0x8d02,	// (0x00066aa0) list_tport_double_graphic_pane_t2_ParamLimits

0x8d02,	// (0x00066aa0) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x0006db31) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x0006db31) list_tport_double_graphic_pane_t

0x9c4a,	// (0x000679e8) main_cale_note_pane

0x67c6,	// (0x00064564) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x67c6,	// (0x00064564) cell_vitu2_function_top_wide_pane_cp01

0x8298,	// (0x00066036) wait_bar_pane_cp05_ParamLimits

0xa2e1,	// (0x0006807f) listscroll_cmail_pane

0xe852,	// (0x0006c5f0) list_cmail_pane

0x8d1e,	// (0x00066abc) list_cmail_body_pane

0x8d37,	// (0x00066ad5) list_single_cmail_header_caption_pane

0x8d58,	// (0x00066af6) list_single_cmail_header_detail_pane_ParamLimits

0x8d58,	// (0x00066af6) list_single_cmail_header_detail_pane

0x8d89,	// (0x00066b27) list_single_cmail_header_caption_pane_t1

0x8d99,	// (0x00066b37) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d99,	// (0x00066b37) list_single_cmail_header_detail_pane_g1

0xa54f,	// (0x000682ed) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa54f,	// (0x000682ed) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x0006db36) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x0006db36) list_single_cmail_header_detail_pane_g

0xa55b,	// (0x000682f9) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa55b,	// (0x000682f9) list_single_cmail_header_detail_pane_t1

0xa5c7,	// (0x00068365) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa5c7,	// (0x00068365) list_single_cmail_header_editor_pane_bg

0xe30c,	// (0x0006c0aa) list_cmail_body_pane_g1

0xe87f,	// (0x0006c61d) list_cmail_body_pane_t1

0xd6a0,	// (0x0006b43e) list_single_cmail_header_editor_pane_bg_g1

0xacf4,	// (0x00068a92) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6b0,	// (0x0006b44e) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6a8,	// (0x0006b446) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8ca,	// (0x0006b668) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6d0,	// (0x0006b46e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6c0,	// (0x0006b45e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6c8,	// (0x0006b466) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacd4,	// (0x00068a72) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8db1,	// (0x00066b4f) calenote_gesture_pane_ParamLimits

0x8db1,	// (0x00066b4f) calenote_gesture_pane

0x8dcb,	// (0x00066b69) calenote_window_pane_ParamLimits

0x8dcb,	// (0x00066b69) calenote_window_pane

0xe88d,	// (0x0006c62b) popup_note_window_cp01

0x8de3,	// (0x00066b81) calenote_swipe_1_pane_ParamLimits

0x8de3,	// (0x00066b81) calenote_swipe_1_pane

0x8685,	// (0x00066423) calenote_swipe_2_pane_ParamLimits

0x8685,	// (0x00066423) calenote_swipe_2_pane

0xe686,	// (0x0006c424) calenote_swipe_1_pane_g1_ParamLimits

0xe686,	// (0x0006c424) calenote_swipe_1_pane_g1

0xe693,	// (0x0006c431) calenote_swipe_1_pane_g2_ParamLimits

0xe693,	// (0x0006c431) calenote_swipe_1_pane_g2

0x0001,

0xfcbc,	// (0x0006da5a) calenote_swipe_1_pane_g_ParamLimits

0xfcbc,	// (0x0006da5a) calenote_swipe_1_pane_g

0xe89f,	// (0x0006c63d) calenote_swipe_1_pane_t1_ParamLimits

0xe89f,	// (0x0006c63d) calenote_swipe_1_pane_t1

0xe686,	// (0x0006c424) calenote_swipe_2_pane_g1_ParamLimits

0xe686,	// (0x0006c424) calenote_swipe_2_pane_g1

0xe8be,	// (0x0006c65c) calenote_swipe_2_pane_g2_ParamLimits

0xe8be,	// (0x0006c65c) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x0006db42) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x0006db42) calenote_swipe_2_pane_g

0xe8ca,	// (0x0006c668) calenote_swipe_2_pane_t1_ParamLimits

0xe8ca,	// (0x0006c668) calenote_swipe_2_pane_t1

0x9c4a,	// (0x000679e8) main_mup_navstr_pane

0x54c5,	// (0x00063263) main_mup3_pane_t7_ParamLimits

0x54c5,	// (0x00063263) main_mup3_pane_t7

0x5ec8,	// (0x00063c66) main_mp4_pane_g6_ParamLimits

0x5ec8,	// (0x00063c66) main_mp4_pane_g6

0x6246,	// (0x00063fe4) main_image3_pane_t4_ParamLimits

0x6246,	// (0x00063fe4) main_image3_pane_t4

0x8df6,	// (0x00066b94) popup_navstr_preview_pane_ParamLimits

0x8df6,	// (0x00066b94) popup_navstr_preview_pane

0x8e02,	// (0x00066ba0) scroll_navstr_pane_ParamLimits

0x8e02,	// (0x00066ba0) scroll_navstr_pane

0x9c4a,	// (0x000679e8) bg_popup_preview_window_pane_cp04

0xe8f1,	// (0x0006c68f) popup_navstr_preview_pane_t1

0x8e0e,	// (0x00066bac) scroll_navstr_pane_g1_ParamLimits

0x8e0e,	// (0x00066bac) scroll_navstr_pane_g1

0x8e1b,	// (0x00066bb9) scroll_navstr_pane_t1_ParamLimits

0x8e1b,	// (0x00066bb9) scroll_navstr_pane_t1

0xe896,	// (0x0006c634) bg_button_pane_cp014

0xe896,	// (0x0006c634) bg_button_pane_cp030

0x8571,	// (0x0006630f) list_double_fisheye_pane_g4_ParamLimits

0x8571,	// (0x0006630f) list_double_fisheye_pane_g4

0x857d,	// (0x0006631b) list_double_fisheye_pane_g5_ParamLimits

0x857d,	// (0x0006631b) list_double_fisheye_pane_g5

0xe85a,	// (0x0006c5f8) sp_fs_scroll_pane_cp03

0xd613,	// (0x0006b3b1) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe75e,	// (0x0006c4fc) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd9,	// (0x0006da77) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe76a,	// (0x0006c508) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8d14,	// (0x00066ab2) sp_fs_scroll_pane_cp02

0xa9f7,	// (0x00068795) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9f7,	// (0x00068795) popup_sp_fs_calendar_preview_list_single_pane

0x9c4a,	// (0x000679e8) main_cam6_pano_pane

0xa2e1,	// (0x0006807f) main_mup3_pane_ParamLimits

0x9c4a,	// (0x000679e8) main_phacti_pane

0x816b,	// (0x00065f09) bg_button_pane_cp11

0x8183,	// (0x00065f21) main_mobtv_info_pane_g2_ParamLimits

0x8183,	// (0x00065f21) main_mobtv_info_pane_g2

0x0001,

0xfc39,	// (0x0006d9d7) main_mobtv_info_pane_g_ParamLimits

0xfc39,	// (0x0006d9d7) main_mobtv_info_pane_g

0x8335,	// (0x000660d3) sc_clock_pane_t5_ParamLimits

0x8335,	// (0x000660d3) sc_clock_pane_t5

0x83e4,	// (0x00066182) main_radioblah_pane_g1_ParamLimits

0xe5d2,	// (0x0006c370) main_radioblah_pane_t3_ParamLimits

0xe5d2,	// (0x0006c370) main_radioblah_pane_t3

0xe5ea,	// (0x0006c388) main_radioblah_pane_t4_ParamLimits

0xe5ea,	// (0x0006c388) main_radioblah_pane_t4

0x8402,	// (0x000661a0) main_radioblah_text_pane_ParamLimits

0x8402,	// (0x000661a0) main_radioblah_text_pane

0x840f,	// (0x000661ad) main_radioblah_info_pane_g1_ParamLimits

0x84a8,	// (0x00066246) main_radioblah_info_pane_t4_ParamLimits

0x84a8,	// (0x00066246) main_radioblah_info_pane_t4

0xa2e1,	// (0x0006807f) main_sp_fs_calendar_pane

0x8e2d,	// (0x00066bcb) main_phacti_pane_g1

0x8e35,	// (0x00066bd3) phacti_note_pane_ParamLimits

0x8e35,	// (0x00066bd3) phacti_note_pane

0xe908,	// (0x0006c6a6) phacti_term_pane_ParamLimits

0xe908,	// (0x0006c6a6) phacti_term_pane

0xe91d,	// (0x0006c6bb) phacti_note_pane_t1_ParamLimits

0xe91d,	// (0x0006c6bb) phacti_note_pane_t1

0xa5de,	// (0x0006837c) phacti_term_pane_g1

0xa5e6,	// (0x00068384) phacti_term_pane_t1_ParamLimits

0xa5e6,	// (0x00068384) phacti_term_pane_t1

0xe934,	// (0x0006c6d2) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe93c,	// (0x0006c6da) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x0006db4c) popup_sp_fs_calendar_preview_list_single_pane_g

0xe944,	// (0x0006c6e2) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe944,	// (0x0006c6e2) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe95a,	// (0x0006c6f8) aid_popup_sp_fs_bg_corner_pane

0xcc86,	// (0x0006aa24) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c4a,	// (0x000679e8) popup_sp_fs_calendar_preview_bg_pane

0xe962,	// (0x0006c700) popup_sp_fs_calendar_preview_list_pane

0xc835,	// (0x0006a5d3) bg_main_sp_fs_cale_pane_ParamLimits

0xc835,	// (0x0006a5d3) bg_main_sp_fs_cale_pane

0xa619,	// (0x000683b7) listscroll_cale_mrui_pane_ParamLimits

0xa619,	// (0x000683b7) listscroll_cale_mrui_pane

0xa62e,	// (0x000683cc) listscroll_sp_fs_schedule_track_pane

0xa637,	// (0x000683d5) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa637,	// (0x000683d5) main_sp_fs_ctrlbar_pane_cp01

0xe96a,	// (0x0006c708) main_sp_fs_ribbon_pane

0xa64a,	// (0x000683e8) popup_sp_fs_cale_preview_window

0x8e94,	// (0x00066c32) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e94,	// (0x00066c32) list_single_sp_fs_schedule_track_pane

0x0dfc,	// (0x0005eb9a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0dfc,	// (0x0005eb9a) bg_sp_fs_highlight_list_pane_cp03

0x8ea9,	// (0x00066c47) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8ea9,	// (0x00066c47) list_single_sp_fs_schedule_track_pane_g1

0x8eb5,	// (0x00066c53) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8eb5,	// (0x00066c53) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x0006db51) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x0006db51) list_single_sp_fs_schedule_track_pane_g

0x8ec1,	// (0x00066c5f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ec1,	// (0x00066c5f) list_single_sp_fs_schedule_track_pane_t1

0x8edf,	// (0x00066c7d) sp_fs_schedule_track_pane_ParamLimits

0x8edf,	// (0x00066c7d) sp_fs_schedule_track_pane

0xe972,	// (0x0006c710) sp_fs_schedule_track_pane_g1

0xe97a,	// (0x0006c718) sp_fs_schedule_track_pane_g2

0xe982,	// (0x0006c720) sp_fs_schedule_track_pane_g3

0xe98a,	// (0x0006c728) sp_fs_schedule_track_pane_g4

0xe992,	// (0x0006c730) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x0006db56) sp_fs_schedule_track_pane_g

0xd6a0,	// (0x0006b43e) bg_sp_fs_schedule_viewer_highlight_g1

0xacf4,	// (0x00068a92) bg_sp_fs_schedule_viewer_highlight_g2

0xd6a8,	// (0x0006b446) bg_sp_fs_schedule_viewer_highlight_g3

0xd6b0,	// (0x0006b44e) bg_sp_fs_schedule_viewer_highlight_g4

0xd8ca,	// (0x0006b668) bg_sp_fs_schedule_viewer_highlight_g5

0xd6c0,	// (0x0006b45e) bg_sp_fs_schedule_viewer_highlight_g6

0xd6c8,	// (0x0006b466) bg_sp_fs_schedule_viewer_highlight_g7

0xd6d0,	// (0x0006b46e) bg_sp_fs_schedule_viewer_highlight_g8

0xacd4,	// (0x00068a72) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x0006db61) bg_sp_fs_schedule_viewer_highlight_g

0x9c4a,	// (0x000679e8) bg_main_sp_fs_ribbon_pane

0x8ef1,	// (0x00066c8f) main_sp_fs_ribbon_pane_g1

0xe99a,	// (0x0006c738) main_sp_fs_ribbon_pane_t1

0x8efa,	// (0x00066c98) main_sp_fs_ribbon_pane_t2

0xe9a9,	// (0x0006c747) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x0006db74) main_sp_fs_ribbon_pane_t

0xe9b8,	// (0x0006c756) main_sp_fs_ribbon_scheduler_pane

0xe9c0,	// (0x0006c75e) bg_main_sp_fs_ribbon_pane_g1

0xe9c9,	// (0x0006c767) bg_main_sp_fs_ribbon_pane_g2

0xe9d2,	// (0x0006c770) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x0006db7b) bg_main_sp_fs_ribbon_pane_g

0xe9da,	// (0x0006c778) main_sp_fs_ribbon_scheduler_pane_g1

0xe9e3,	// (0x0006c781) main_sp_fs_ribbon_scheduler_pane_g2

0xe9ec,	// (0x0006c78a) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x0006db82) main_sp_fs_ribbon_scheduler_pane_g

0xe9f5,	// (0x0006c793) list_cale_mrui_pane

0x8f09,	// (0x00066ca7) sp_fs_scroll_pane_cp07_ParamLimits

0x8f09,	// (0x00066ca7) sp_fs_scroll_pane_cp07

0x8f25,	// (0x00066cc3) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f25,	// (0x00066cc3) bg_sp_fs_schedule_viewer_highlight

0xea02,	// (0x0006c7a0) list_single_sp_fs_schedule_track_pane_cp01

0xea0a,	// (0x0006c7a8) list_sp_fs_schedule_track_pane

0xea12,	// (0x0006c7b0) sp_fs_scroll_pane_cp06_ParamLimits

0xea12,	// (0x0006c7b0) sp_fs_scroll_pane_cp06

0xcc86,	// (0x0006aa24) bgmain_sp_fs_calendar_pane_g1

0x8f32,	// (0x00066cd0) list_single_cale_mrui_pane_ParamLimits

0x8f32,	// (0x00066cd0) list_single_cale_mrui_pane

0xa65c,	// (0x000683fa) list_single_cale_mrui_row_pane_ParamLimits

0xa65c,	// (0x000683fa) list_single_cale_mrui_row_pane

0xa672,	// (0x00068410) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa672,	// (0x00068410) list_single_cale_mrui_row_pane_g1

0xa6aa,	// (0x00068448) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa6aa,	// (0x00068448) list_single_cale_mrui_row_pane_t1

0x8f47,	// (0x00066ce5) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f47,	// (0x00066ce5) list_single_cale_mrui_row_pane_t2

0xa6bc,	// (0x0006845a) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa6bc,	// (0x0006845a) list_single_cale_mrui_row_pane_t3

0xa6eb,	// (0x00068489) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa6eb,	// (0x00068489) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x0006db90) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x0006db90) list_single_cale_mrui_row_pane_t

0x8fad,	// (0x00066d4b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8fad,	// (0x00066d4b) list_single_cmail_header_editor_pane_bg_cp01

0x8fd1,	// (0x00066d6f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8fd1,	// (0x00066d6f) list_single_cmail_header_editor_pane_bg_cp02

0x8fed,	// (0x00066d8b) main_radioblah_text_pane_t1_ParamLimits

0x8fed,	// (0x00066d8b) main_radioblah_text_pane_t1

0xea31,	// (0x0006c7cf) cam6_indi_pane_cp01

0xea39,	// (0x0006c7d7) cam6_mode_pane_cp01

0xea41,	// (0x0006c7df) cam6_pano_pane

0xea4a,	// (0x0006c7e8) cam6_zoom_pane_cp01

0xea54,	// (0x0006c7f2) cam6_pano_image_pane

0xea5d,	// (0x0006c7fb) cam6_pano_pane_g1

0xe30c,	// (0x0006c0aa) cam6_pano_pane_g2

0xea66,	// (0x0006c804) cam6_pano_pane_g3

0xea6f,	// (0x0006c80d) cam6_pano_pane_g4

0xd228,	// (0x0006afc6) cam6_pano_pane_g5

0xea78,	// (0x0006c816) cam6_pano_pane_g6

0xea80,	// (0x0006c81e) cam6_pano_pane_g7

0xea88,	// (0x0006c826) cam6_pano_pane_g8

0xea91,	// (0x0006c82f) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x0006db99) cam6_pano_pane_g

0x9c4a,	// (0x000679e8) main_browser_tag_pane

0xe8e9,	// (0x0006c687) grid_navstr_albumart_pane

0xea9c,	// (0x0006c83a) cell_navstr_albumart_pane_ParamLimits

0xea9c,	// (0x0006c83a) cell_navstr_albumart_pane

0xeabb,	// (0x0006c859) cell_navstr_albumart_pane_g1

0xc642,	// (0x0006a3e0) cell_navstr_albumart_pane_g2

0xc652,	// (0x0006a3f0) cell_navstr_albumart_pane_g3

0xc64a,	// (0x0006a3e8) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x0006dbac) cell_navstr_albumart_pane_g

0x9007,	// (0x00066da5) bt_list_pane_ParamLimits

0x9007,	// (0x00066da5) bt_list_pane

0x9020,	// (0x00066dbe) bt_list_pane_t1

0x902f,	// (0x00066dcd) bt_list_pane_t2

0x0001,

0xfe17,	// (0x0006dbb5) bt_list_pane_t

0x9c4a,	// (0x000679e8) main_cale_prevew_pane

0x903e,	// (0x00066ddc) popup_cale_preview_window_ParamLimits

0x903e,	// (0x00066ddc) popup_cale_preview_window

0xa2e1,	// (0x0006807f) bg_popup_preview_window_pane_cp05_ParamLimits

0xa2e1,	// (0x0006807f) bg_popup_preview_window_pane_cp05

0xeac3,	// (0x0006c861) list_cale_preview_pane_ParamLimits

0xeac3,	// (0x0006c861) list_cale_preview_pane

0x9059,	// (0x00066df7) list_double_cale_preview_pane_ParamLimits

0x9059,	// (0x00066df7) list_double_cale_preview_pane

0x906d,	// (0x00066e0b) list_single_cale_preview_pane_ParamLimits

0x906d,	// (0x00066e0b) list_single_cale_preview_pane

0x9085,	// (0x00066e23) list_single_cale_preview_pane_g1

0x908d,	// (0x00066e2b) list_single_cale_preview_pane_t1_ParamLimits

0x908d,	// (0x00066e2b) list_single_cale_preview_pane_t1

0x90a2,	// (0x00066e40) list_double_cale_preview_pane_g1

0x90aa,	// (0x00066e48) list_double_cale_preview_pane_t1_ParamLimits

0x90aa,	// (0x00066e48) list_double_cale_preview_pane_t1

0x90bf,	// (0x00066e5d) list_double_cale_preview_pane_t2_ParamLimits

0x90bf,	// (0x00066e5d) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x0006dbba) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x0006dbba) list_double_cale_preview_pane_t

0x9c4a,	// (0x000679e8) main_ezdial_pane

0xa2e1,	// (0x0006807f) main_sp_fs_email_pane_ParamLimits

0x86c5,	// (0x00066463) cmail_ddmenu_btn01_pane_ParamLimits

0x86c5,	// (0x00066463) cmail_ddmenu_btn01_pane

0x86e2,	// (0x00066480) cmail_ddmenu_btn02_pane_ParamLimits

0x86e2,	// (0x00066480) cmail_ddmenu_btn02_pane

0x8700,	// (0x0006649e) cmail_ddmenu_btn03_pane_ParamLimits

0x8700,	// (0x0006649e) cmail_ddmenu_btn03_pane

0x8730,	// (0x000664ce) main_sp_fs_ctrlbar_pane_ParamLimits

0x874a,	// (0x000664e8) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d1e,	// (0x00066abc) list_cmail_body_pane_ParamLimits

0xe869,	// (0x0006c607) bg_button_pane_cp12

0xe872,	// (0x0006c610) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe872,	// (0x0006c610) list_single_cmail_header_detail_pane_g3

0xa5a3,	// (0x00068341) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa5a3,	// (0x00068341) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x0006db3d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x0006db3d) list_single_cmail_header_detail_pane_t

0xa5fb,	// (0x00068399) phacti_term_pane_t2_ParamLimits

0xa5fb,	// (0x00068399) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x0006db47) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x0006db47) phacti_term_pane_t

0xeacf,	// (0x0006c86d) aid_size_list_single_double

0x90d7,	// (0x00066e75) popup_ezdial_listscroll_window

0x90f9,	// (0x00066e97) popup_number_entry_window_cp01

0xaa97,	// (0x00068835) bg_popup_call_pane_cp09

0xeadb,	// (0x0006c879) ezdial_list_pane

0xeae3,	// (0x0006c881) scroll_pane_cp23

0xca65,	// (0x0006a803) bg_button_pane_cp028_ParamLimits

0xca65,	// (0x0006a803) bg_button_pane_cp028

0x9107,	// (0x00066ea5) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9107,	// (0x00066ea5) cmail_ddmenu_btn01_pane_g1

0x9119,	// (0x00066eb7) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9119,	// (0x00066eb7) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x0006dbbf) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x0006dbbf) cmail_ddmenu_btn01_pane_g

0xeaeb,	// (0x0006c889) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaeb,	// (0x0006c889) cmail_ddmenu_btn01_pane_t1

0xc835,	// (0x0006a5d3) bg_button_pane_cp029_ParamLimits

0xc835,	// (0x0006a5d3) bg_button_pane_cp029

0x9125,	// (0x00066ec3) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9125,	// (0x00066ec3) cmail_ddmenu_btn02_pane_g1

0x913d,	// (0x00066edb) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x913d,	// (0x00066edb) cmail_ddmenu_btn02_pane_t1

0x0dfc,	// (0x0005eb9a) bg_button_pane_cp031_ParamLimits

0x0dfc,	// (0x0005eb9a) bg_button_pane_cp031

0x9125,	// (0x00066ec3) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9125,	// (0x00066ec3) cmail_ddmenu_btn03_pane_g1

0x913d,	// (0x00066edb) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x913d,	// (0x00066edb) cmail_ddmenu_btn03_pane_t1

0x60e1,	// (0x00063e7f) cell_dialer2_keypad_pane_t1_ParamLimits

0x60fb,	// (0x00063e99) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x60fb,	// (0x00063e99) cell_dialer2_keypad_pane_t1_copy1

0x7fdc,	// (0x00065d7a) ncimui_group_button_pane

0xa2e1,	// (0x0006807f) main_sp_fs_calendar_pane_ParamLimits

0x8d37,	// (0x00066ad5) list_single_cmail_header_caption_pane_ParamLimits

0xa610,	// (0x000683ae) aid_recal_txt_sm_pane

0x9c4a,	// (0x000679e8) mian_recal_day_pane

0xa64a,	// (0x000683e8) popup_sp_fs_cale_preview_window_ParamLimits

0xeb01,	// (0x0006c89f) list_recal_day_pane

0xa736,	// (0x000684d4) list_single_recal_day_pane_ParamLimits

0xa736,	// (0x000684d4) list_single_recal_day_pane

0xeb28,	// (0x0006c8c6) list_single_recal_day_pane_g1_ParamLimits

0xeb28,	// (0x0006c8c6) list_single_recal_day_pane_g1

0xa748,	// (0x000684e6) list_single_recal_day_pane_g2_ParamLimits

0xa748,	// (0x000684e6) list_single_recal_day_pane_g2

0xa754,	// (0x000684f2) list_single_recal_day_pane_g3_ParamLimits

0xa754,	// (0x000684f2) list_single_recal_day_pane_g3

0x9161,	// (0x00066eff) list_single_recal_day_pane_g4_ParamLimits

0x9161,	// (0x00066eff) list_single_recal_day_pane_g4

0xa760,	// (0x000684fe) list_single_recal_day_pane_g5_ParamLimits

0xa760,	// (0x000684fe) list_single_recal_day_pane_g5

0xa76c,	// (0x0006850a) list_single_recal_day_pane_g6_ParamLimits

0xa76c,	// (0x0006850a) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x0006dbce) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x0006dbce) list_single_recal_day_pane_g

0xa780,	// (0x0006851e) list_single_recal_day_pane_t1

0xb161,	// (0x00068eff) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x0006dbd9) list_single_recal_day_pane_t

0x9179,	// (0x00066f17) ncimui_query_button_pane_ParamLimits

0x9179,	// (0x00066f17) ncimui_query_button_pane

0x9189,	// (0x00066f27) ncimui_query_button_pane_t1_ParamLimits

0x9189,	// (0x00066f27) ncimui_query_button_pane_t1

0xeb34,	// (0x0006c8d2) ncimui_query_button_pane_t2_ParamLimits

0xeb34,	// (0x0006c8d2) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x0006dbde) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x0006dbde) ncimui_query_button_pane_t

0x919c,	// (0x00066f3a) query_button_pane_ParamLimits

0x919c,	// (0x00066f3a) query_button_pane

0x9c4a,	// (0x000679e8) bg_button_pane_cp0028

0xeb47,	// (0x0006c8e5) query_button_pane_t1

0x44ae,	// (0x0006224c) main_tport_pane_ParamLimits

0x8c20,	// (0x000669be) bg_popup_window_pane_cp01_ParamLimits

0x8c20,	// (0x000669be) bg_popup_window_pane_cp01

0x8c2e,	// (0x000669cc) heading_pane_cp08_ParamLimits

0x8c2e,	// (0x000669cc) heading_pane_cp08

0x8c3c,	// (0x000669da) heading_pane_cp07_ParamLimits

0x8c3c,	// (0x000669da) heading_pane_cp07

0x8cad,	// (0x00066a4b) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x0006db2a) cell_tport_appsw_pane_g

0x3c0f,	// (0x000619ad) input_candi_list_open_g1

0xaea8,	// (0x00068c46) list_cale_time_pane_g6_ParamLimits

0xaea8,	// (0x00068c46) list_cale_time_pane_g6

0x4f31,	// (0x00062ccf) aid_size_touch_calib_1_ParamLimits

0x4f31,	// (0x00062ccf) aid_size_touch_calib_1

0x4f3d,	// (0x00062cdb) aid_size_touch_calib_2_ParamLimits

0x4f3d,	// (0x00062cdb) aid_size_touch_calib_2

0x4f4b,	// (0x00062ce9) aid_size_touch_calib_3_ParamLimits

0x4f4b,	// (0x00062ce9) aid_size_touch_calib_3

0x4f5b,	// (0x00062cf9) aid_size_touch_calib_4_ParamLimits

0x4f5b,	// (0x00062cf9) aid_size_touch_calib_4

0x4f69,	// (0x00062d07) main_touch_calib_button_group_pane_ParamLimits

0x4f69,	// (0x00062d07) main_touch_calib_button_group_pane

0x4f77,	// (0x00062d15) main_touch_calib_pane_g1_ParamLimits

0x4f83,	// (0x00062d21) main_touch_calib_pane_g2_ParamLimits

0x4f8f,	// (0x00062d2d) main_touch_calib_pane_g3_ParamLimits

0x4f9b,	// (0x00062d39) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0006d4ef) main_touch_calib_pane_g_ParamLimits

0x4fa7,	// (0x00062d45) main_touch_calib_pane_t1_ParamLimits

0x4fbe,	// (0x00062d5c) main_touch_calib_pane_t2_ParamLimits

0x4fd7,	// (0x00062d75) main_touch_calib_pane_t3_ParamLimits

0x4fed,	// (0x00062d8b) main_touch_calib_pane_t4_ParamLimits

0x5003,	// (0x00062da1) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0006d4f8) main_touch_calib_pane_t_ParamLimits

0xcfb6,	// (0x0006ad54) list_single_fp_cale_pane_g3_ParamLimits

0xcfb6,	// (0x0006ad54) list_single_fp_cale_pane_g3

0x6586,	// (0x00064324) bg_button_pane_cp012_ParamLimits

0x6586,	// (0x00064324) bg_vkb2_func_pane_cp03_ParamLimits

0x6fa4,	// (0x00064d42) cell_vitu2_function_top_pane_g1_ParamLimits

0x6586,	// (0x00064324) bg_vkb2_func_pane_cp04_ParamLimits

0x7f62,	// (0x00065d00) main_ncimui_button_group_pane_ParamLimits

0x7f62,	// (0x00065d00) main_ncimui_button_group_pane

0x7fca,	// (0x00065d68) main_ncimui_pane_t3_ParamLimits

0x7fca,	// (0x00065d68) main_ncimui_pane_t3

0xe8ff,	// (0x0006c69d) phacti_button_group_pane

0xeacf,	// (0x0006c86d) aid_size_list_single_double_ParamLimits

0x90d7,	// (0x00066e75) popup_ezdial_listscroll_window_ParamLimits

0x90f9,	// (0x00066e97) popup_number_entry_window_cp01_ParamLimits

0x91a9,	// (0x00066f47) phacti_button_pane_ParamLimits

0x91a9,	// (0x00066f47) phacti_button_pane

0x9c4a,	// (0x000679e8) bg_button_pane_cp14

0xeb55,	// (0x0006c8f3) phacti_button_pane_t1

0x91ba,	// (0x00066f58) main_touch_calib_button_pane_ParamLimits

0x91ba,	// (0x00066f58) main_touch_calib_button_pane

0xa8e1,	// (0x0006867f) bg_button_pane_cp18_ParamLimits

0xa8e1,	// (0x0006867f) bg_button_pane_cp18

0xeb63,	// (0x0006c901) main_touch_calib_button_pane_t1_ParamLimits

0xeb63,	// (0x0006c901) main_touch_calib_button_pane_t1

0xeb79,	// (0x0006c917) main_touch_calib_button_pane_t2_ParamLimits

0xeb79,	// (0x0006c917) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x0006dbe3) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x0006dbe3) main_touch_calib_button_pane_t

0x9c4a,	// (0x000679e8) cell_ncimui_button_pane

0x9c4a,	// (0x000679e8) bg_button_pane_cp032

0xeb97,	// (0x0006c935) cell_ncimui_button_pane_t1

0x6157,	// (0x00063ef5) image3_infobar_pane_ParamLimits

0x6157,	// (0x00063ef5) image3_infobar_pane

0x8357,	// (0x000660f5) fs_bigclock_status_pane_ParamLimits

0x8357,	// (0x000660f5) fs_bigclock_status_pane

0x8364,	// (0x00066102) main_fs_bigclock_clock_pane_ParamLimits

0x8364,	// (0x00066102) main_fs_bigclock_clock_pane

0x8380,	// (0x0006611e) main_fs_bigclock_indi_pane_ParamLimits

0x8380,	// (0x0006611e) main_fs_bigclock_indi_pane

0x83b2,	// (0x00066150) main_fs_bigclock_swipe_pane_ParamLimits

0x83b2,	// (0x00066150) main_fs_bigclock_swipe_pane

0x9c4a,	// (0x000679e8) main_fs_clock_dumped_data

0xe434,	// (0x0006c1d2) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe434,	// (0x0006c1d2) list_single_fs_bigclock_indicator_pane_g1

0xe45e,	// (0x0006c1fc) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe45e,	// (0x0006c1fc) list_single_fs_bigclock_indicator_pane_g2

0xe478,	// (0x0006c216) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe478,	// (0x0006c216) list_single_fs_bigclock_indicator_pane_g3

0xe492,	// (0x0006c230) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe492,	// (0x0006c230) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6d,	// (0x0006da0b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6d,	// (0x0006da0b) list_single_fs_bigclock_indicator_pane_g

0xe4bd,	// (0x0006c25b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4bd,	// (0x0006c25b) list_single_fs_bigclock_indicator_pane_t1

0xe4e5,	// (0x0006c283) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4e5,	// (0x0006c283) list_single_fs_bigclock_indicator_pane_t2

0xe50d,	// (0x0006c2ab) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe50d,	// (0x0006c2ab) list_single_fs_bigclock_indicator_pane_t3

0xe535,	// (0x0006c2d3) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe535,	// (0x0006c2d3) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc78,	// (0x0006da16) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc78,	// (0x0006da16) list_single_fs_bigclock_indicator_pane_t

0xeba5,	// (0x0006c943) image3_infobar_fav_pane_ParamLimits

0xeba5,	// (0x0006c943) image3_infobar_fav_pane

0xebb5,	// (0x0006c953) image3_infobar_loc_pane_ParamLimits

0xebb5,	// (0x0006c953) image3_infobar_loc_pane

0xebcb,	// (0x0006c969) image3_infobar_time_pane_ParamLimits

0xebcb,	// (0x0006c969) image3_infobar_time_pane

0xcc86,	// (0x0006aa24) image3_infobar_time_pane_g1

0xebdb,	// (0x0006c979) image3_infobar_time_pane_t1

0xcc86,	// (0x0006aa24) image3_infobar_loc_pane_g1

0xebe9,	// (0x0006c987) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x0006dbe8) image3_infobar_loc_pane_g

0xebf1,	// (0x0006c98f) image3_infobar_loc_pane_t1

0xcc86,	// (0x0006aa24) image3_infobar_fav_pane_g1

0xebff,	// (0x0006c99d) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x0006dbed) image3_infobar_fav_pane_g

0xec07,	// (0x0006c9a5) fs_bigclock_status_battery_pane

0xec10,	// (0x0006c9ae) fs_bigclock_status_signal_pane

0xec19,	// (0x0006c9b7) fs_bigclock_status_title_pane

0xec22,	// (0x0006c9c0) fs_bigclock_status_signal_pane_g1

0xec2b,	// (0x0006c9c9) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x0006dbf2) fs_bigclock_status_signal_pane_g

0xec33,	// (0x0006c9d1) fs_bigclock_status_battery_pane_g1

0xec3c,	// (0x0006c9da) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x0006dbf7) fs_bigclock_status_battery_pane_g

0xec44,	// (0x0006c9e2) fs_bigclock_status_title_pane_t1

0xcc86,	// (0x0006aa24) main_fs_bigclock_clock_pane_g1

0xec52,	// (0x0006c9f0) main_fs_bigclock_clock_pane_g2

0xec5d,	// (0x0006c9fb) main_fs_bigclock_clock_pane_g3

0xec5d,	// (0x0006c9fb) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x0006dbfc) main_fs_bigclock_clock_pane_g

0xec69,	// (0x0006ca07) main_fs_bigclock_clock_pane_t1

0x91ca,	// (0x00066f68) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x0006dc05) main_fs_bigclock_clock_pane_t

0x91d9,	// (0x00066f77) list_single_fs_bigclock_indicator_pane_ParamLimits

0x91d9,	// (0x00066f77) list_single_fs_bigclock_indicator_pane

0x91ea,	// (0x00066f88) list_single_fs_bigclock_pane_ParamLimits

0x91ea,	// (0x00066f88) list_single_fs_bigclock_pane

0xec80,	// (0x0006ca1e) main_fs_bigclock_indicator_pane_t1

0xec8f,	// (0x0006ca2d) list_single_fs_bigclock_pane_g1

0xec97,	// (0x0006ca35) list_single_fs_bigclock_pane_t1

0xcc86,	// (0x0006aa24) main_fs_bigclock_swipe_pane_g1

0xecda,	// (0x0006ca78) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x0006dc16) main_fs_bigclock_swipe_pane_g

0xece2,	// (0x0006ca80) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xece2,	// (0x0006ca80) main_fs_bigclock_swipe_pane_t1

0x333a,	// (0x000610d8) call_type_pane_ParamLimits

0x9c4a,	// (0x000679e8) main_btmg_pane

0xa69e,	// (0x0006843c) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa69e,	// (0x0006843c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x0006db89) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x0006db89) list_single_cale_mrui_row_pane_g

0xa724,	// (0x000684c2) list_recal_vselct_arw_lo_pane

0xeb20,	// (0x0006c8be) list_recal_vselct_arw_up_pane

0xa72c,	// (0x000684ca) list_recal_vselct_pane

0x9240,	// (0x00066fde) btmg_button_pane

0x924c,	// (0x00066fea) main_btmg_pane_g1

0x9c4a,	// (0x000679e8) bg_button_pane_cp044

0xecff,	// (0x0006ca9d) btmg_button_pane_t1

0xc821,	// (0x0006a5bf) aid_listscroll_gen

0xa2e1,	// (0x0006807f) main_cntbar_detail_pane

0xe84a,	// (0x0006c5e8) list_cmail_folder_pane

0xe85a,	// (0x0006c5f8) sp_fs_scroll_pane_cp03_ParamLimits

0x9254,	// (0x00066ff2) list_single_fs_dyc_pane_cp01_ParamLimits

0x9254,	// (0x00066ff2) list_single_fs_dyc_pane_cp01

0xed0d,	// (0x0006caab) aid_size_cmail_indent

0xb173,	// (0x00068f11) list_single_dyc_row_pane_cp01

0x9295,	// (0x00067033) cntbar_detail_list_pane_ParamLimits

0x9295,	// (0x00067033) cntbar_detail_list_pane

0x92d5,	// (0x00067073) main_cntbar_detail_cont_pane_ParamLimits

0x92d5,	// (0x00067073) main_cntbar_detail_cont_pane

0x325d,	// (0x00060ffb) scroll_pane_cp032_ParamLimits

0x325d,	// (0x00060ffb) scroll_pane_cp032

0x92e1,	// (0x0006707f) cntbar_detail_list_event_pane_ParamLimits

0x92e1,	// (0x0006707f) cntbar_detail_list_event_pane

0x92a3,	// (0x00067041) cntbar_detail_list_shct_pane

0xad42,	// (0x00068ae0) aid_list_gen

0xed16,	// (0x0006cab4) aid_scroll

0xed1f,	// (0x0006cabd) aid_size_touch_scroll_bar

0x7703,	// (0x000654a1) aid_list_double

0xed28,	// (0x0006cac6) aid_list_single

0x76f1,	// (0x0006548f) aid_list_single_lg

0xb17c,	// (0x00068f1a) aid_list_z_g_a_sm

0xb184,	// (0x00068f22) aid_list_z_g_d

0x92f1,	// (0x0006708f) aid_txt_z_prm

0x9301,	// (0x0006709f) aid_txt_z_prm_cp01

0x930f,	// (0x000670ad) aid_txt_z_sec

0x931d,	// (0x000670bb) main_cntbar_detail_cont_pane_g1_ParamLimits

0x931d,	// (0x000670bb) main_cntbar_detail_cont_pane_g1

0x932a,	// (0x000670c8) main_cntbar_detail_cont_pane_g2_ParamLimits

0x932a,	// (0x000670c8) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x0006dc1b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x0006dc1b) main_cntbar_detail_cont_pane_g

0xed31,	// (0x0006cacf) main_cntbar_detail_cont_pane_t1

0xed3f,	// (0x0006cadd) main_cntbar_detail_cont_pane_t2

0xed4d,	// (0x0006caeb) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x0006dc20) main_cntbar_detail_cont_pane_t

0x9336,	// (0x000670d4) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9336,	// (0x000670d4) cell_cntbar_detail_list_shct_pane

0xed5b,	// (0x0006caf9) cntbar_detail_list_shct_pane_g1

0xed64,	// (0x0006cb02) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x0006dc27) cntbar_detail_list_shct_pane_g

0x934a,	// (0x000670e8) cntbar_detail_list_event_pane_g1_ParamLimits

0x934a,	// (0x000670e8) cntbar_detail_list_event_pane_g1

0x9356,	// (0x000670f4) cntbar_detail_list_event_pane_g2_ParamLimits

0x9356,	// (0x000670f4) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x0006dc2c) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x0006dc2c) cntbar_detail_list_event_pane_g

0x93c4,	// (0x00067162) cntbar_detail_list_event_pane_t1_ParamLimits

0x93c4,	// (0x00067162) cntbar_detail_list_event_pane_t1

0x93d9,	// (0x00067177) cntbar_detail_list_event_pane_t2_ParamLimits

0x93d9,	// (0x00067177) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x0006dc39) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x0006dc39) cntbar_detail_list_event_pane_t

0xcc86,	// (0x0006aa24) cell_cntbar_detail_list_shct_pane_g1

0x370d,	// (0x000614ab) navi_pane_mv_g3

0xa2e1,	// (0x0006807f) main_cntbar_detail_pane_ParamLimits

0x9c4a,	// (0x000679e8) main_notif_wgt_pane

0x5e01,	// (0x00063b9f) aid_tch_main_mp4_pane_g4

0x6040,	// (0x00063dde) popup_slider_window_cp02

0xa71a,	// (0x000684b8) list_recal_day_event_pane

0x9275,	// (0x00067013) cntbar_detail_btn_pane_ParamLimits

0x9275,	// (0x00067013) cntbar_detail_btn_pane

0x9285,	// (0x00067023) cntbar_detail_btn_pane_cp01_ParamLimits

0x9285,	// (0x00067023) cntbar_detail_btn_pane_cp01

0x92a3,	// (0x00067041) cntbar_detail_list_shct_pane_ParamLimits

0x92af,	// (0x0006704d) cntbar_detail_pane_g1_ParamLimits

0x92af,	// (0x0006704d) cntbar_detail_pane_g1

0x92bf,	// (0x0006705d) cntbar_detail_pane_t1_ParamLimits

0x92bf,	// (0x0006705d) cntbar_detail_pane_t1

0x9362,	// (0x00067100) cntbar_detail_list_event_pane_g3_ParamLimits

0x9362,	// (0x00067100) cntbar_detail_list_event_pane_g3

0x937a,	// (0x00067118) cntbar_detail_list_event_pane_g4_ParamLimits

0x937a,	// (0x00067118) cntbar_detail_list_event_pane_g4

0x9392,	// (0x00067130) cntbar_detail_list_event_pane_g5_ParamLimits

0x9392,	// (0x00067130) cntbar_detail_list_event_pane_g5

0x93aa,	// (0x00067148) cntbar_detail_list_event_pane_g6_ParamLimits

0x93aa,	// (0x00067148) cntbar_detail_list_event_pane_g6

0x93ee,	// (0x0006718c) cntbar_detail_list_event_pane_t3_ParamLimits

0x93ee,	// (0x0006718c) cntbar_detail_list_event_pane_t3

0x9400,	// (0x0006719e) popup_notif_wgt_window_ParamLimits

0x9400,	// (0x0006719e) popup_notif_wgt_window

0x9410,	// (0x000671ae) popup_submenu_window_cp01_ParamLimits

0x9410,	// (0x000671ae) popup_submenu_window_cp01

0xaa97,	// (0x00068835) bg_popup_window_pane_cp10

0xed6d,	// (0x0006cb0b) listscroll_notif_wgt_pane

0xed7f,	// (0x0006cb1d) list_notif_wgt_window

0xed88,	// (0x0006cb26) scroll_pane_cp033

0x9420,	// (0x000671be) list_notif_wgt_row_pane_ParamLimits

0x9420,	// (0x000671be) list_notif_wgt_row_pane

0xed91,	// (0x0006cb2f) aid_size_list_notif_wgt_del

0xed9e,	// (0x0006cb3c) list_notif_wgt_row_pane_g1

0xedaa,	// (0x0006cb48) list_notif_wgt_row_pane_g2

0xedbe,	// (0x0006cb5c) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x0006dc40) list_notif_wgt_row_pane_g

0xedcb,	// (0x0006cb69) list_notif_wgt_row_pane_t1

0xede1,	// (0x0006cb7f) list_notif_wgt_row_pane_t2

0xedf3,	// (0x0006cb91) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x0006dc47) list_notif_wgt_row_pane_t

0xd8e4,	// (0x0006b682) list_recal_day_event_pane_g1

0xee05,	// (0x0006cba3) list_recal_day_event_pane_t1

0x9c4a,	// (0x000679e8) bg_button_pane_cp045

0xee14,	// (0x0006cbb2) cntbar_detail_btn_pane_t1

0xc835,	// (0x0006a5d3) main_callh_pane_ParamLimits

0xc835,	// (0x0006a5d3) main_callh_pane

0x9c4a,	// (0x000679e8) main_coverflow0_pane

0x9c4a,	// (0x000679e8) main_wgtman_pane

0x83ca,	// (0x00066168) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x83ca,	// (0x00066168) main_fs_bigclock_unlock_btn_pane

0x8ca5,	// (0x00066a43) bg_button_pane_cp16

0x8cb5,	// (0x00066a53) cell_tport_appsw_pane_g3

0x9431,	// (0x000671cf) cf0_flow_pane_ParamLimits

0x9431,	// (0x000671cf) cf0_flow_pane

0xee22,	// (0x0006cbc0) listscroll_cf0_pane

0xee2d,	// (0x0006cbcb) main_cf0_pane_g1

0x9440,	// (0x000671de) main_cf0_pane_t1_ParamLimits

0x9440,	// (0x000671de) main_cf0_pane_t1

0x9454,	// (0x000671f2) main_cf0_pane_t2_ParamLimits

0x9454,	// (0x000671f2) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x0006dc53) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x0006dc53) main_cf0_pane_t

0xee3f,	// (0x0006cbdd) scroll_pane_cp11

0x9468,	// (0x00067206) cf0_flow_pane_g1

0x9470,	// (0x0006720e) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x0006dc58) cf0_flow_pane_g

0x9478,	// (0x00067216) cf0_flow_pane_t1

0x9c4a,	// (0x000679e8) main_call6_pane

0x9c4a,	// (0x000679e8) main_calllock_pane

0x9486,	// (0x00067224) call6_btn_grp_pane_ParamLimits

0x9486,	// (0x00067224) call6_btn_grp_pane

0x9493,	// (0x00067231) call6_pane_g1_ParamLimits

0x9493,	// (0x00067231) call6_pane_g1

0x94a3,	// (0x00067241) popup_call6_1st_window_ParamLimits

0x94a3,	// (0x00067241) popup_call6_1st_window

0x94b1,	// (0x0006724f) popup_call6_2nd_window_ParamLimits

0x94b1,	// (0x0006724f) popup_call6_2nd_window

0x94bf,	// (0x0006725d) cell_call6_btn_pane_ParamLimits

0x94bf,	// (0x0006725d) cell_call6_btn_pane

0xaa97,	// (0x00068835) bg_popup_call2_in_pane_cp03

0xee4a,	// (0x0006cbe8) popup_call6_1st_window_g1

0xee52,	// (0x0006cbf0) popup_call6_1st_window_g2

0xee5a,	// (0x0006cbf8) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x0006dc5d) popup_call6_1st_window_g

0xee62,	// (0x0006cc00) popup_call6_1st_window_t1

0xee71,	// (0x0006cc0f) popup_call6_1st_window_t2

0xee81,	// (0x0006cc1f) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x0006dc64) popup_call6_1st_window_t

0xaa97,	// (0x00068835) bg_popup_call2_in_pane_cp04

0xee4a,	// (0x0006cbe8) popup_call6_2nd_window_g1

0xee52,	// (0x0006cbf0) popup_call6_2nd_window_g2

0xee5a,	// (0x0006cbf8) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x0006dc5d) popup_call6_2nd_window_g

0xee62,	// (0x0006cc00) popup_call6_2nd_window_t1

0x9c4a,	// (0x000679e8) bg_button_pane_cp15

0xee91,	// (0x0006cc2f) cell_call6_btn_pane_g1

0xee9a,	// (0x0006cc38) cell_call6_btn_pane_t1

0x94ce,	// (0x0006726c) listscroll_wgtman_pane_ParamLimits

0x94ce,	// (0x0006726c) listscroll_wgtman_pane

0x94ea,	// (0x00067288) wgtman_btn_pane_ParamLimits

0x94ea,	// (0x00067288) wgtman_btn_pane

0xb2da,	// (0x00069078) aid_scroll_copy1

0xeea9,	// (0x0006cc47) list_wgtman_pane

0x951f,	// (0x000672bd) wgtman_btn_pane_g1_ParamLimits

0x951f,	// (0x000672bd) wgtman_btn_pane_g1

0x9547,	// (0x000672e5) wgtman_btn_pane_t1_ParamLimits

0x9547,	// (0x000672e5) wgtman_btn_pane_t1

0xeeb3,	// (0x0006cc51) wgtman_btn_pane_t2_ParamLimits

0xeeb3,	// (0x0006cc51) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x0006dc6b) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x0006dc6b) wgtman_btn_pane_t

0x957e,	// (0x0006731c) listrow_wgtman_pane_ParamLimits

0x957e,	// (0x0006731c) listrow_wgtman_pane

0x9592,	// (0x00067330) listrow_wgtman_pane_g1

0x959f,	// (0x0006733d) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x0006dc70) listrow_wgtman_pane_g

0x95bd,	// (0x0006735b) listrow_wgtman_pane_t1

0x95d5,	// (0x00067373) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x0006dc75) listrow_wgtman_pane_t

0x95fb,	// (0x00067399) wait_bar_pane_cp09

0xeeca,	// (0x0006cc68) main_calllock_btn_pane

0xeed4,	// (0x0006cc72) main_calllock_pane_g1

0x9c4a,	// (0x000679e8) bg_button_pane_cp17

0xeee0,	// (0x0006cc7e) main_calllock_btn_pane_g1

0xeee9,	// (0x0006cc87) main_calllock_btn_pane_t1

0x9c4a,	// (0x000679e8) main_dialer3_pane

0x9c4a,	// (0x000679e8) main_fmrd2_pane

0xcc86,	// (0x0006aa24) main_fs_bigclock_unlock_btn_pane_g1

0xef00,	// (0x0006cc9e) main_fs_bigclock_unlock_btn_pane_t1

0x960d,	// (0x000673ab) area_fmrd2_info_pane_ParamLimits

0x960d,	// (0x000673ab) area_fmrd2_info_pane

0x9619,	// (0x000673b7) area_fmrd2_visual_pane_ParamLimits

0x9619,	// (0x000673b7) area_fmrd2_visual_pane

0x9627,	// (0x000673c5) fmrd2_indi_pane_ParamLimits

0x9627,	// (0x000673c5) fmrd2_indi_pane

0x9634,	// (0x000673d2) area_fmrd2_visual_pane_g1

0x963c,	// (0x000673da) area_fmrd2_visual_pane_t1

0x964c,	// (0x000673ea) area_fmrd2_visual_pane_t2

0x965c,	// (0x000673fa) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x0006dc7f) area_fmrd2_visual_pane_t

0x966c,	// (0x0006740a) area_fmrd2_info_pane_g1

0x9674,	// (0x00067412) area_fmrd2_info_pane_t1

0x9684,	// (0x00067422) area_fmrd2_info_pane_t2

0x9694,	// (0x00067432) area_fmrd2_info_pane_t3

0x96a4,	// (0x00067442) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x0006dc86) area_fmrd2_info_pane_t

0x96b4,	// (0x00067452) fmrd2_indi_pane_t1

0x96c4,	// (0x00067462) fmrd2_indi_pane_t2

0x96d4,	// (0x00067472) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x0006dc8f) fmrd2_indi_pane_t

0xe4a1,	// (0x0006c23f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4a1,	// (0x0006c23f) list_single_fs_bigclock_indicator_pane_g5

0xe551,	// (0x0006c2ef) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe551,	// (0x0006c2ef) list_single_fs_bigclock_indicator_pane_t5

0x8e4b,	// (0x00066be9) aid_cell_bcale_month_pane_ParamLimits

0x8e4b,	// (0x00066be9) aid_cell_bcale_month_pane

0x8e69,	// (0x00066c07) bcale_month_pane_ParamLimits

0x8e69,	// (0x00066c07) bcale_month_pane

0x8e85,	// (0x00066c23) bcale_preview_pane_ParamLimits

0x8e85,	// (0x00066c23) bcale_preview_pane

0xec97,	// (0x0006ca35) list_single_fs_bigclock_pane_t1_ParamLimits

0xecb6,	// (0x0006ca54) list_single_fs_bigclock_pane_t2_ParamLimits

0xecb6,	// (0x0006ca54) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x0006dc11) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0006dc11) list_single_fs_bigclock_pane_t

0xeef8,	// (0x0006cc96) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x0006dc7a) main_fs_bigclock_unlock_btn_pane_g

0x96e4,	// (0x00067482) aid_dia3_key_size_ParamLimits

0x96e4,	// (0x00067482) aid_dia3_key_size

0x96f0,	// (0x0006748e) aid_dia3_listrow_size_ParamLimits

0x96f0,	// (0x0006748e) aid_dia3_listrow_size

0x9700,	// (0x0006749e) dia3_keypad_fun_pane_ParamLimits

0x9700,	// (0x0006749e) dia3_keypad_fun_pane

0x9710,	// (0x000674ae) dia3_keypad_num_pane_ParamLimits

0x9710,	// (0x000674ae) dia3_keypad_num_pane

0x9720,	// (0x000674be) dia3_listscroll_pane_ParamLimits

0x9720,	// (0x000674be) dia3_listscroll_pane

0x972e,	// (0x000674cc) dia3_numentry_pane_ParamLimits

0x972e,	// (0x000674cc) dia3_numentry_pane

0xef0e,	// (0x0006ccac) dia3_list_pane

0xef19,	// (0x0006ccb7) scroll_pane_cp12

0x9c4a,	// (0x000679e8) bg_dia3_numentry_pane

0x973c,	// (0x000674da) dia3_numentry_pane_t1

0x974b,	// (0x000674e9) cell_dia3_key_num_pane

0x9753,	// (0x000674f1) cell_dia3_key0_fun_pane_ParamLimits

0x9753,	// (0x000674f1) cell_dia3_key0_fun_pane

0x9760,	// (0x000674fe) cell_dia3_key1_fun_pane_ParamLimits

0x9760,	// (0x000674fe) cell_dia3_key1_fun_pane

0x976d,	// (0x0006750b) dia3_listrow_pane

0xe184,	// (0x0006bf22) bg_dia3_numentry_pane_g1

0x9c4a,	// (0x000679e8) bg_button_pane_cp21

0xef24,	// (0x0006ccc2) cell_dia3_key_num_pane_t1

0xef32,	// (0x0006ccd0) cell_dia3_key_num_pane_t2

0xef41,	// (0x0006ccdf) cell_dia3_key_num_pane_t3

0xef50,	// (0x0006ccee) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x0006dc96) cell_dia3_key_num_pane_t

0x9c4a,	// (0x000679e8) bg_button_pane_cp19

0x977a,	// (0x00067518) cell_dia3_key0_fun_pane_g1

0x9c4a,	// (0x000679e8) bg_button_pane_cp20

0x9782,	// (0x00067520) cell_dia3_key1_fun_pane_g1

0x978a,	// (0x00067528) area_left_week_number_pane

0x979d,	// (0x0006753b) area_top_day_name_pane

0x97ab,	// (0x00067549) frame_month_view_pane

0xef5f,	// (0x0006ccfd) grid_month_view_pane

0x97c0,	// (0x0006755e) cell_top_day_name_pane_ParamLimits

0x97c0,	// (0x0006755e) cell_top_day_name_pane

0x97dc,	// (0x0006757a) cell_area_left_week_number_pane_ParamLimits

0x97dc,	// (0x0006757a) cell_area_left_week_number_pane

0x97fd,	// (0x0006759b) cell_month_view_pane_ParamLimits

0x97fd,	// (0x0006759b) cell_month_view_pane

0xef6d,	// (0x0006cd0b) frm_month_g1

0x9829,	// (0x000675c7) frm_month_g2

0x983a,	// (0x000675d8) frm_month_g3

0x984b,	// (0x000675e9) frm_month_g4

0x985c,	// (0x000675fa) frm_month_g5

0x986d,	// (0x0006760b) frm_month_g6

0x9880,	// (0x0006761e) frm_month_g7

0xef7a,	// (0x0006cd18) frm_month_g8

0x9893,	// (0x00067631) frm_month_g9

0x98a0,	// (0x0006763e) frm_month_g10

0x98ad,	// (0x0006764b) frm_month_g11

0x98ba,	// (0x00067658) frm_month_g12

0x98c7,	// (0x00067665) frm_month_g13

0x98d6,	// (0x00067674) frm_month_g14

0x98e5,	// (0x00067683) frm_month_g15

0x98f4,	// (0x00067692) frm_month_g16

0x000f,

0xff01,	// (0x0006dc9f) frm_month_g

0xef87,	// (0x0006cd25) cell_top_day_name_pane_t1

0x9903,	// (0x000676a1) cell_area_left_week_number_pane_g1

0x9912,	// (0x000676b0) cell_area_left_week_number_pane_t1

0xceb6,	// (0x0006ac54) cell_month_view_pane_g1

0x9928,	// (0x000676c6) cell_month_view_pane_t1

0x9c4a,	// (0x000679e8) main_fps_pane

0xe726,	// (0x0006c4c4) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe726,	// (0x0006c4c4) cmail_ddmenu_btn02_pane_cp1

0xe742,	// (0x0006c4e0) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe742,	// (0x0006c4e0) cmail_ddmenu_btn02_pane_cp2

0x9131,	// (0x00066ecf) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9131,	// (0x00066ecf) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x0006dbc4) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x0006dbc4) cmail_ddmenu_btn02_pane_g

0x914f,	// (0x00066eed) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x914f,	// (0x00066eed) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x0006dbc9) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x0006dbc9) cmail_ddmenu_btn02_pane_t

0x993e,	// (0x000676dc) fps_text_pane_ParamLimits

0x993e,	// (0x000676dc) fps_text_pane

0x994b,	// (0x000676e9) main_fps_pane_g1_ParamLimits

0x994b,	// (0x000676e9) main_fps_pane_g1

0x9957,	// (0x000676f5) wait_bar_pane_cp010_ParamLimits

0x9957,	// (0x000676f5) wait_bar_pane_cp010

0x9963,	// (0x00067701) fps_text_pane_t1_ParamLimits

0x9963,	// (0x00067701) fps_text_pane_t1

0x6474,	// (0x00064212) cam4_image_uncrop_pane_g1

0x647d,	// (0x0006421b) cam4_image_uncrop_pane_g2

0x6486,	// (0x00064224) cam4_image_uncrop_pane_g3

0x648f,	// (0x0006422d) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0006d68c) cam4_image_uncrop_pane_g

0x976d,	// (0x0006750b) dia3_listrow_pane_ParamLimits

0x9c4a,	// (0x000679e8) main_phob2_pane

0x8c87,	// (0x00066a25) cell_tport_appsw_pane_cp02_ParamLimits

0x8c87,	// (0x00066a25) cell_tport_appsw_pane_cp02

0x8c96,	// (0x00066a34) cell_tport_appsw_pane_cp03_ParamLimits

0x8c96,	// (0x00066a34) cell_tport_appsw_pane_cp03

0x9c4a,	// (0x000679e8) phob2_contact_card_pane

0x9c4a,	// (0x000679e8) phob2_listscroll_pane

0xef9a,	// (0x0006cd38) phob2_list_pane

0xefa2,	// (0x0006cd40) scroll_pane_cp034

0x997c,	// (0x0006771a) phob2_cc_data_pane_ParamLimits

0x997c,	// (0x0006771a) phob2_cc_data_pane

0x9998,	// (0x00067736) phob2_cc_listscroll_pane_ParamLimits

0x9998,	// (0x00067736) phob2_cc_listscroll_pane

0x99b4,	// (0x00067752) list_double_large_graphic_phob2_pane_ParamLimits

0x99b4,	// (0x00067752) list_double_large_graphic_phob2_pane

0x99cc,	// (0x0006776a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x99cc,	// (0x0006776a) list_double_large_graphic_phob2_pane_g1

0x99e2,	// (0x00067780) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x99e2,	// (0x00067780) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x0006dcc0) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x0006dcc0) list_double_large_graphic_phob2_pane_g

0x99ee,	// (0x0006778c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99ee,	// (0x0006778c) list_double_large_graphic_phob2_pane_t1

0x9a03,	// (0x000677a1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a03,	// (0x000677a1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x0006dcc5) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x0006dcc5) list_double_large_graphic_phob2_pane_t

0x9c4a,	// (0x000679e8) list_highlight_pane_cp024

0x9a15,	// (0x000677b3) phob2_cc_button_pane

0x9a1d,	// (0x000677bb) phob2_cc_data_pane_g1_ParamLimits

0x9a1d,	// (0x000677bb) phob2_cc_data_pane_g1

0x9a29,	// (0x000677c7) phob2_cc_data_pane_g2_ParamLimits

0x9a29,	// (0x000677c7) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x0006dcca) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x0006dcca) phob2_cc_data_pane_g

0x9a35,	// (0x000677d3) phob2_cc_data_pane_t1_ParamLimits

0x9a35,	// (0x000677d3) phob2_cc_data_pane_t1

0x9a47,	// (0x000677e5) phob2_cc_data_pane_t2_ParamLimits

0x9a47,	// (0x000677e5) phob2_cc_data_pane_t2

0x9a59,	// (0x000677f7) phob2_cc_data_pane_t3_ParamLimits

0x9a59,	// (0x000677f7) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x0006dccf) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x0006dccf) phob2_cc_data_pane_t

0xefaa,	// (0x0006cd48) phob2_cc_list_pane_ParamLimits

0xefaa,	// (0x0006cd48) phob2_cc_list_pane

0xda7c,	// (0x0006b81a) scroll_pane_cp035_ParamLimits

0xda7c,	// (0x0006b81a) scroll_pane_cp035

0xa2e1,	// (0x0006807f) bg_button_pane_cp033

0xefb6,	// (0x0006cd54) phob2_cc_button_pane_g1

0xefc2,	// (0x0006cd60) phob2_cc_button_pane_t1

0xefd7,	// (0x0006cd75) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x0006dcd6) phob2_cc_button_pane_t

0x9a6b,	// (0x00067809) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a6b,	// (0x00067809) list_double_large_graphic_phob2_cc_pane

0x9a87,	// (0x00067825) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a87,	// (0x00067825) list_double_large_graphic_phob2_cc_pane_g1

0x9a98,	// (0x00067836) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a98,	// (0x00067836) list_double_large_graphic_phob2_cc_pane_g2

0x9aa7,	// (0x00067845) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9aa7,	// (0x00067845) list_double_large_graphic_phob2_cc_pane_g3

0x9ab6,	// (0x00067854) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9ab6,	// (0x00067854) list_double_large_graphic_phob2_cc_pane_g4

0x9ac7,	// (0x00067865) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9ac7,	// (0x00067865) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x0006dcdb) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x0006dcdb) list_double_large_graphic_phob2_cc_pane_g

0x9ad6,	// (0x00067874) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9ad6,	// (0x00067874) list_double_large_graphic_phob2_cc_pane_t1

0x9aff,	// (0x0006789d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9aff,	// (0x0006789d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x0006dce6) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x0006dce6) list_double_large_graphic_phob2_cc_pane_t

0xefe9,	// (0x0006cd87) list_highlight_pane_cp025_ParamLimits

0xefe9,	// (0x0006cd87) list_highlight_pane_cp025

0xa2e1,	// (0x0006807f) bg_button_pane_cp033_ParamLimits

0xefb6,	// (0x0006cd54) phob2_cc_button_pane_g1_ParamLimits

0xefc2,	// (0x0006cd60) phob2_cc_button_pane_t1_ParamLimits

0xefd7,	// (0x0006cd75) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x0006dcd6) phob2_cc_button_pane_t_ParamLimits

0x0e0a,	// (0x0005eba8) popup_wgtman_window

0xd7be,	// (0x0006b55c) scroll_pane_cp038

0x9507,	// (0x000672a5) wgtman_btn_pane_cp_01_ParamLimits

0x9507,	// (0x000672a5) wgtman_btn_pane_cp_01

0xeff7,	// (0x0006cd95) wgtman_content_pane

0xf000,	// (0x0006cd9e) wgtman_heading_pane

0x9c4a,	// (0x000679e8) bg_heading_pane_cp02

0xf009,	// (0x0006cda7) wgtman_heading_pane_g1

0xf011,	// (0x0006cdaf) wgtman_heading_pane_t1

0xf01f,	// (0x0006cdbd) scroll_pane_cp036

0xf027,	// (0x0006cdc5) wgtman_list_pane

0xf02f,	// (0x0006cdcd) wgtman_list_pane_t1_ParamLimits

0xf02f,	// (0x0006cdcd) wgtman_list_pane_t1

0x63d1,	// (0x0006416f) cam4_grid_pane

0x71ae,	// (0x00064f4c) bg_button_pane_cp015_ParamLimits

0x71c0,	// (0x00064f5e) bg_button_pane_cp016_ParamLimits

0x71d3,	// (0x00064f71) bg_button_pane_cp017_ParamLimits

0x7229,	// (0x00064fc7) popup_vitu2_query_window_g3_ParamLimits

0x7229,	// (0x00064fc7) popup_vitu2_query_window_g3

0x72e8,	// (0x00065086) popup_vitu2_query_window_t6_ParamLimits

0x72e8,	// (0x00065086) popup_vitu2_query_window_t6

0x7313,	// (0x000650b1) popup_vitu2_query_window_t7_ParamLimits

0x7313,	// (0x000650b1) popup_vitu2_query_window_t7

0xe7db,	// (0x0006c579) cam4_grid_pane_g1

0xe7e4,	// (0x0006c582) cam4_grid_pane_g2

0xf049,	// (0x0006cde7) cam4_grid_pane_g3

0xf052,	// (0x0006cdf0) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x0006dceb) cam4_grid_pane_g

0x2046,	// (0x0005fde4) aid_placing_vt_slider_lsc_ParamLimits

0x2379,	// (0x00060117) vidtel_button_pane_ParamLimits

0x2379,	// (0x00060117) vidtel_button_pane

0x9c4a,	// (0x000679e8) bg_button_pane_cp034

0x9b28,	// (0x000678c6) vidtel_button_pane_g1

0x9b30,	// (0x000678ce) vidtel_button_pane_t1

0xd8c2,	// (0x0006b660) aid_size_vtel_slider_touch

0xda7c,	// (0x0006b81a) scroll_pane_cp039

0xe1c2,	// (0x0006bf60) ncim_query_button_pane_cp01_ParamLimits

0xe1e1,	// (0x0006bf7f) ncimui_query_pane_g1_ParamLimits

0xa2e1,	// (0x0006807f) input_focus_pane_cp012_ParamLimits

0xe206,	// (0x0006bfa4) ncim_query_entry_pane_t1_ParamLimits

0xda7c,	// (0x0006b81a) scroll_pane_cp039_ParamLimits

0x367f,	// (0x0006141d) navi_pane_bcale_mc_g1

0x3687,	// (0x00061425) navi_pane_bcale_mc_t1

0xe77f,	// (0x0006c51d) main_sp_fs_email_pane_g1

0xe78b,	// (0x0006c529) main_sp_fs_email_pane_g2

0x0001,

0xfcde,	// (0x0006da7c) main_sp_fs_email_pane_g

0xea24,	// (0x0006c7c2) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea24,	// (0x0006c7c2) list_single_cale_mrui_row_pane_g3

0x916f,	// (0x00066f0d) list_single_recal_day_pane_g5_event_pane

0xa778,	// (0x00068516) list_single_recal_day_pane_g7

0xf05d,	// (0x0006cdfb) list_recal_day_event_pane_cp01

0xf066,	// (0x0006ce04) list_recal_vselct_arw_lo_pane_cp01

0xf06e,	// (0x0006ce0c) list_recal_vselct_arw_up_pane_cp01

0xf076,	// (0x0006ce14) list_recal_vselct_pane_cp01

0xd8e4,	// (0x0006b682) list_recal_day_event_pane_cp01_g1

0xb18c,	// (0x00068f2a) list_recal_day_event_pane_cp01_t1

0xa780,	// (0x0006851e) list_single_recal_day_pane_t1_ParamLimits

0xb161,	// (0x00068eff) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x0006dbd9) list_single_recal_day_pane_t_ParamLimits

0xa81c,	// (0x000685ba) bg_notes_pane_ParamLimits

0xa8bf,	// (0x0006865d) list_notes_pane_ParamLimits

0x1159,	// (0x0005eef7) scroll_pane_cp06_ParamLimits

0xa8e1,	// (0x0006867f) main_notes_pane_ParamLimits

0x9c4a,	// (0x000679e8) main_welc_pane

0x9b46,	// (0x000678e4) main_welc_body_pane_ParamLimits

0x9b46,	// (0x000678e4) main_welc_body_pane

0x9b61,	// (0x000678ff) main_welc_opti_pane_ParamLimits

0x9b61,	// (0x000678ff) main_welc_opti_pane

0x9b96,	// (0x00067934) main_welc_pane_t1_ParamLimits

0x9b96,	// (0x00067934) main_welc_pane_t1

0x9bb4,	// (0x00067952) main_welc_body_row_pane_ParamLimits

0x9bb4,	// (0x00067952) main_welc_body_row_pane

0x9bce,	// (0x0006796c) main_welc_opti_row_pane_ParamLimits

0x9bce,	// (0x0006796c) main_welc_opti_row_pane

0xf080,	// (0x0006ce1e) main_welc_opti_row_pane_g1

0xf088,	// (0x0006ce26) main_welc_opti_row_pane_t1

0xf097,	// (0x0006ce35) main_welc_body_row_pane_t1

0xed77,	// (0x0006cb15) popup_notif_wgt_heading_pane

0xed91,	// (0x0006cb2f) aid_size_list_notif_wgt_del_ParamLimits

0xed9e,	// (0x0006cb3c) list_notif_wgt_row_pane_g1_ParamLimits

0xedaa,	// (0x0006cb48) list_notif_wgt_row_pane_g2_ParamLimits

0xedbe,	// (0x0006cb5c) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x0006dc40) list_notif_wgt_row_pane_g_ParamLimits

0xedcb,	// (0x0006cb69) list_notif_wgt_row_pane_t1_ParamLimits

0xede1,	// (0x0006cb7f) list_notif_wgt_row_pane_t2_ParamLimits

0xedf3,	// (0x0006cb91) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x0006dc47) list_notif_wgt_row_pane_t_ParamLimits

0x9592,	// (0x00067330) listrow_wgtman_pane_g1_ParamLimits

0x959f,	// (0x0006733d) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x0006dc70) listrow_wgtman_pane_g_ParamLimits

0x95bd,	// (0x0006735b) listrow_wgtman_pane_t1_ParamLimits

0x95d5,	// (0x00067373) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x0006dc75) listrow_wgtman_pane_t_ParamLimits

0x95fb,	// (0x00067399) wait_bar_pane_cp09_ParamLimits

0x9c4a,	// (0x000679e8) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0006ce44) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0006ce4c) popup_notif_wgt_heading_pane_t1

0x9c4a,	// (0x000679e8) main_vids_pane

0x9c4a,	// (0x000679e8) vids_listscroll_pane

0x9bdf,	// (0x0006797d) scroll_pane_cp040

0x9c4a,	// (0x000679e8) vids_list_pane

0x9bea,	// (0x00067988) vids_list_double_pane_ParamLimits

0x9bea,	// (0x00067988) vids_list_double_pane

0x9bfd,	// (0x0006799b) vids_list_double_pane_g1

0x9c06,	// (0x000679a4) vids_list_double_pane_t1

0x9c16,	// (0x000679b4) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x0006dcf9) vids_list_double_pane_t

0xa2e1,	// (0x0006807f) main_ncimui_pane_ParamLimits

0x7f7a,	// (0x00065d18) main_ncimui_pane_g1_ParamLimits

0x7f88,	// (0x00065d26) main_ncimui_pane_g2_ParamLimits

0x7f88,	// (0x00065d26) main_ncimui_pane_g2

0x0001,

0xfbe3,	// (0x0006d981) main_ncimui_pane_g_ParamLimits

0xfbe3,	// (0x0006d981) main_ncimui_pane_g

0x9b7c,	// (0x0006791a) main_welc_pane_g1_ParamLimits

0x9b7c,	// (0x0006791a) main_welc_pane_g1

0x9b88,	// (0x00067926) main_welc_pane_g2_ParamLimits

0x9b88,	// (0x00067926) main_welc_pane_g2

0x0001,

0xff56,	// (0x0006dcf4) main_welc_pane_g_ParamLimits

0xff56,	// (0x0006dcf4) main_welc_pane_g

0xa81c,	// (0x000685ba) listscroll_mce_pane_ParamLimits

0x3749,	// (0x000614e7) wait_bar_pane_cp10

0xc829,	// (0x0006a5c7) main_cale_day_pane_ParamLimits

0xc829,	// (0x0006a5c7) main_cale_week_pane_ParamLimits

0xa81c,	// (0x000685ba) main_messa_pane_ParamLimits

0x57cb,	// (0x00063569) main_clock2_btn_pane_ParamLimits

0x57cb,	// (0x00063569) main_clock2_btn_pane

0xd03e,	// (0x0006addc) main_clock2_btn_pane_cp01_ParamLimits

0xd03e,	// (0x0006addc) main_clock2_btn_pane_cp01

0xe9f5,	// (0x0006c793) list_cale_mrui_pane_ParamLimits

0xee37,	// (0x0006cbd5) main_cf0_pane_g2

0x0001,

0xfeb0,	// (0x0006dc4e) main_cf0_pane_g

0x978a,	// (0x00067528) area_left_week_number_pane_ParamLimits

0x979d,	// (0x0006753b) area_top_day_name_pane_ParamLimits

0x97ab,	// (0x00067549) frame_month_view_pane_ParamLimits

0xef5f,	// (0x0006ccfd) grid_month_view_pane_ParamLimits

0xef6d,	// (0x0006cd0b) frm_month_g1_ParamLimits

0x9829,	// (0x000675c7) frm_month_g2_ParamLimits

0x983a,	// (0x000675d8) frm_month_g3_ParamLimits

0x984b,	// (0x000675e9) frm_month_g4_ParamLimits

0x985c,	// (0x000675fa) frm_month_g5_ParamLimits

0x986d,	// (0x0006760b) frm_month_g6_ParamLimits

0x9880,	// (0x0006761e) frm_month_g7_ParamLimits

0xef7a,	// (0x0006cd18) frm_month_g8_ParamLimits

0x9893,	// (0x00067631) frm_month_g9_ParamLimits

0x98a0,	// (0x0006763e) frm_month_g10_ParamLimits

0x98ad,	// (0x0006764b) frm_month_g11_ParamLimits

0x98ba,	// (0x00067658) frm_month_g12_ParamLimits

0x98c7,	// (0x00067665) frm_month_g13_ParamLimits

0x98d6,	// (0x00067674) frm_month_g14_ParamLimits

0x98e5,	// (0x00067683) frm_month_g15_ParamLimits

0x98f4,	// (0x00067692) frm_month_g16_ParamLimits

0xff01,	// (0x0006dc9f) frm_month_g_ParamLimits

0xef87,	// (0x0006cd25) cell_top_day_name_pane_t1_ParamLimits

0x9903,	// (0x000676a1) cell_area_left_week_number_pane_g1_ParamLimits

0x9912,	// (0x000676b0) cell_area_left_week_number_pane_t1_ParamLimits

0xceb6,	// (0x0006ac54) cell_month_view_pane_g1_ParamLimits

0x9928,	// (0x000676c6) cell_month_view_pane_t1_ParamLimits

0xa814,	// (0x000685b2) main_clock2_btn_pane_g1

0xf0bc,	// (0x0006ce5a) main_clock2_btn_pane_t1

0xa2e1,	// (0x0006807f) listscroll_cmail_pane_ParamLimits

0xe77f,	// (0x0006c51d) main_sp_fs_email_pane_g1_ParamLimits

0xe78b,	// (0x0006c529) main_sp_fs_email_pane_g2_ParamLimits

0xfcde,	// (0x0006da7c) main_sp_fs_email_pane_g_ParamLimits

0xeb01,	// (0x0006c89f) list_recal_day_pane_ParamLimits

0xeb12,	// (0x0006c8b0) mian_recal_day_pane_t1

0x8961,	// (0x000666ff) list_single_dyc_row_text_pane_t4_ParamLimits

0x8961,	// (0x000666ff) list_single_dyc_row_text_pane_t4

0x899e,	// (0x0006673c) list_single_dyc_row_text_pane_t5_ParamLimits

0x899e,	// (0x0006673c) list_single_dyc_row_text_pane_t5

0xa4d8,	// (0x00068276) list_single_dyc_row_text_pane_t6_ParamLimits

0xa4d8,	// (0x00068276) list_single_dyc_row_text_pane_t6

0xae87,	// (0x00068c25) aid_mgn_list_cale_time_pane

0xa2e1,	// (0x0006807f) main_gallery2_pane_ParamLimits

0xd052,	// (0x0006adf0) main_clock2_pane_cp01_t1

0xd062,	// (0x0006ae00) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0006d562) main_clock2_pane_cp01_t

0x166d,	// (0x0005f40b) cale_week_scroll_pane_g16_ParamLimits

0x166d,	// (0x0005f40b) cale_week_scroll_pane_g16

0xaa97,	// (0x00068835) vorec_slider_pane

0x9b30,	// (0x000678ce) vidtel_button_pane_t1_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
