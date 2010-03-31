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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0001def6 };

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
0x2764,	// (0x0002065a) Screen

0x2770,	// (0x00020666) application_window

0x277c,	// (0x00020672) area_bottom_pane_ParamLimits

0x277c,	// (0x00020672) area_bottom_pane

0x0f06,	// (0x0001edfc) area_top_pane_ParamLimits

0x0f06,	// (0x0001edfc) area_top_pane

0x0f6a,	// (0x0001ee60) call_video_uplink_pane_ParamLimits

0x0f6a,	// (0x0001ee60) call_video_uplink_pane

0x0fa9,	// (0x0001ee9f) main_pane_ParamLimits

0x0fa9,	// (0x0001ee9f) main_pane

0xc4b9,	// (0x0002a3af) context_pane

0x55bc,	// (0x000234b2) navi_pane

0x55e2,	// (0x000234d8) popup_cale_events_window_ParamLimits

0x55e2,	// (0x000234d8) popup_cale_events_window

0xc4cc,	// (0x0002a3c2) popup_mup_playback_window

0x55fa,	// (0x000234f0) signal_pane

0xa409,	// (0x000282ff) main_browser_pane

0xb03b,	// (0x00028f31) main_burst_pane

0x15d9,	// (0x0001f4cf) main_calc_pane

0xc49f,	// (0x0002a395) main_cale_day_pane

0x2b95,	// (0x00020a8b) main_cale_month_pane

0xc49f,	// (0x0002a395) main_cale_week_pane

0xb03b,	// (0x00028f31) main_call_pane

0xa0db,	// (0x00027fd1) main_call_poc_pane

0xb03b,	// (0x00028f31) main_camera_pane

0xb03b,	// (0x00028f31) main_chi_dic_pane

0xad9e,	// (0x00028c94) main_clock_pane

0xa0db,	// (0x00027fd1) main_fmradio_pane

0xb03b,	// (0x00028f31) main_graph_messa_pane

0xa0db,	// (0x00027fd1) main_help_pane

0xa409,	// (0x000282ff) main_im_pane

0xa336,	// (0x0002822c) main_image_pane_ParamLimits

0xa336,	// (0x0002822c) main_image_pane

0xa0db,	// (0x00027fd1) main_location2_pane

0xb03b,	// (0x00028f31) main_location_pane

0xa336,	// (0x0002822c) main_messa_pane

0xa0db,	// (0x00027fd1) main_mp2_pane

0xb03b,	// (0x00028f31) main_mp_pane

0xa0db,	// (0x00027fd1) main_msg_pane

0xa0db,	// (0x00027fd1) main_mup_eq_pane

0xa0db,	// (0x00027fd1) main_mup_pane

0xa409,	// (0x000282ff) main_notes_pane

0xa0db,	// (0x00027fd1) main_pec_pane

0xa0db,	// (0x00027fd1) main_phob_pane

0xa0db,	// (0x00027fd1) main_pinb_pane

0xa0db,	// (0x00027fd1) main_postcard_pane

0xa0db,	// (0x00027fd1) main_qdial_pane

0xb03b,	// (0x00028f31) main_skin_pane

0xa0db,	// (0x00027fd1) main_smil2_pane

0xb03b,	// (0x00028f31) main_smil_pane

0xb03b,	// (0x00028f31) main_video_pane

0xb03b,	// (0x00028f31) main_video_tele_pane

0xa336,	// (0x0002822c) main_viewer_pane_ParamLimits

0xa336,	// (0x0002822c) main_viewer_pane

0xb03b,	// (0x00028f31) main_vorec_pane

0x1625,	// (0x0001f51b) popup_blid_sat_info_window_ParamLimits

0x1625,	// (0x0001f51b) popup_blid_sat_info_window

0x1645,	// (0x0001f53b) popup_dyc_status_message_window_ParamLimits

0x1645,	// (0x0001f53b) popup_dyc_status_message_window

0x1655,	// (0x0001f54b) popup_grid_large_graphic_window_ParamLimits

0x1655,	// (0x0001f54b) popup_grid_large_graphic_window

0x16e6,	// (0x0001f5dc) popup_loc_request_window_ParamLimits

0x16e6,	// (0x0001f5dc) popup_loc_request_window

0x1733,	// (0x0001f629) popup_wml_address_window_ParamLimits

0x1733,	// (0x0001f629) popup_wml_address_window

0x549e,	// (0x00023394) call_muted_g1

0x5160,	// (0x00023056) popup_call_audio_conf_window_ParamLimits

0x5160,	// (0x00023056) popup_call_audio_conf_window

0x54ae,	// (0x000233a4) popup_call_audio_first_window_ParamLimits

0x54ae,	// (0x000233a4) popup_call_audio_first_window

0x54ee,	// (0x000233e4) popup_call_audio_in_window_ParamLimits

0x54ee,	// (0x000233e4) popup_call_audio_in_window

0x5512,	// (0x00023408) popup_call_audio_out_window_ParamLimits

0x5512,	// (0x00023408) popup_call_audio_out_window

0x5534,	// (0x0002342a) popup_call_audio_second_window_ParamLimits

0x5534,	// (0x0002342a) popup_call_audio_second_window

0x5564,	// (0x0002345a) popup_call_audio_wait_window_ParamLimits

0x5564,	// (0x0002345a) popup_call_audio_wait_window

0x5585,	// (0x0002347b) popup_number_entry_window_ParamLimits

0x5585,	// (0x0002347b) popup_number_entry_window

0x9cc8,	// (0x00027bbe) bg_popup_call_pane_cp05_ParamLimits

0x9cc8,	// (0x00027bbe) bg_popup_call_pane_cp05

0x9ce8,	// (0x00027bde) popup_number_entry_window_t1

0x9cfb,	// (0x00027bf1) popup_number_entry_window_t2

0x9d0d,	// (0x00027c03) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0002cfc3) popup_number_entry_window_t

0x9d1f,	// (0x00027c15) text_title_cp2

0x9d32,	// (0x00027c28) bg_popup_call_pane_cp_ParamLimits

0x9d32,	// (0x00027c28) bg_popup_call_pane_cp

0x9d40,	// (0x00027c36) call_thumbnail_pane

0x9d48,	// (0x00027c3e) popup_call_audio_in_window_g1_ParamLimits

0x9d48,	// (0x00027c3e) popup_call_audio_in_window_g1

0x9d54,	// (0x00027c4a) popup_call_audio_in_window_g2_ParamLimits

0x9d54,	// (0x00027c4a) popup_call_audio_in_window_g2

0x9d60,	// (0x00027c56) popup_call_audio_in_window_g3_ParamLimits

0x9d60,	// (0x00027c56) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0002cfcc) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0002cfcc) popup_call_audio_in_window_g

0x9d6c,	// (0x00027c62) popup_call_audio_in_window_t1_ParamLimits

0x9d6c,	// (0x00027c62) popup_call_audio_in_window_t1

0x9d88,	// (0x00027c7e) popup_call_audio_in_window_t2_ParamLimits

0x9d88,	// (0x00027c7e) popup_call_audio_in_window_t2

0x9da4,	// (0x00027c9a) popup_call_audio_in_window_t3_ParamLimits

0x9da4,	// (0x00027c9a) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0002cfd3) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0002cfd3) popup_call_audio_in_window_t

0x9d32,	// (0x00027c28) bg_popup_call_pane_cp01_ParamLimits

0x9d32,	// (0x00027c28) bg_popup_call_pane_cp01

0x9d40,	// (0x00027c36) call_thumbnail_pane_cp02

0x9db7,	// (0x00027cad) call_type_pane_cp022

0x9dbf,	// (0x00027cb5) popup_call_audio_out_window_g1_ParamLimits

0x9dbf,	// (0x00027cb5) popup_call_audio_out_window_g1

0x9dd1,	// (0x00027cc7) popup_call_audio_out_window_g2_ParamLimits

0x9dd1,	// (0x00027cc7) popup_call_audio_out_window_g2

0x9ddd,	// (0x00027cd3) popup_call_audio_out_window_g3_ParamLimits

0x9ddd,	// (0x00027cd3) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0002cfda) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0002cfda) popup_call_audio_out_window_g

0x9def,	// (0x00027ce5) popup_call_audio_out_window_t1_ParamLimits

0x9def,	// (0x00027ce5) popup_call_audio_out_window_t1

0x9e07,	// (0x00027cfd) popup_call_audio_out_window_t2_ParamLimits

0x9e07,	// (0x00027cfd) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0002cfe1) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0002cfe1) popup_call_audio_out_window_t

0x9e1c,	// (0x00027d12) bg_popup_call_pane_ParamLimits

0x9e1c,	// (0x00027d12) bg_popup_call_pane

0x27f6,	// (0x000206ec) call_thumbnail_pane_cp_ParamLimits

0x27f6,	// (0x000206ec) call_thumbnail_pane_cp

0x9ea0,	// (0x00027d96) call_type_pane_cp01_ParamLimits

0x9ea0,	// (0x00027d96) call_type_pane_cp01

0x9ee4,	// (0x00027dda) popup_call_audio_first_window_g1_ParamLimits

0x9ee4,	// (0x00027dda) popup_call_audio_first_window_g1

0x9f30,	// (0x00027e26) popup_call_audio_first_window_g2_ParamLimits

0x9f30,	// (0x00027e26) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0002cfe6) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0002cfe6) popup_call_audio_first_window_g

0x9f74,	// (0x00027e6a) popup_call_audio_first_window_t1_ParamLimits

0x9f74,	// (0x00027e6a) popup_call_audio_first_window_t1

0xa020,	// (0x00027f16) popup_call_audio_first_window_t4_ParamLimits

0xa020,	// (0x00027f16) popup_call_audio_first_window_t4

0xa0ac,	// (0x00027fa2) popup_call_audio_first_window_t5_ParamLimits

0xa0ac,	// (0x00027fa2) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0002cfeb) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0002cfeb) popup_call_audio_first_window_t

0xa0db,	// (0x00027fd1) bg_popup_call_pane_cp02

0xa0e5,	// (0x00027fdb) call_type_pane_cp023

0xa0ed,	// (0x00027fe3) popup_call_audio_wait_window_g1

0xa0f5,	// (0x00027feb) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0002cff2) popup_call_audio_wait_window_g

0xa0fd,	// (0x00027ff3) popup_call_audio_wait_window_t3

0xa10b,	// (0x00028001) bg_popup_call_pane_cp03_ParamLimits

0xa10b,	// (0x00028001) bg_popup_call_pane_cp03

0xa16b,	// (0x00028061) call_thumbnail_pane_cp011_ParamLimits

0xa16b,	// (0x00028061) call_thumbnail_pane_cp011

0xa177,	// (0x0002806d) call_type_pane_cp034_ParamLimits

0xa177,	// (0x0002806d) call_type_pane_cp034

0xa1b3,	// (0x000280a9) popup_call_audio_second_window_g1_ParamLimits

0xa1b3,	// (0x000280a9) popup_call_audio_second_window_g1

0xa1ef,	// (0x000280e5) popup_call_audio_second_window_g2_ParamLimits

0xa1ef,	// (0x000280e5) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0002cff7) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0002cff7) popup_call_audio_second_window_g

0xa22b,	// (0x00028121) popup_call_audio_second_window_t1_ParamLimits

0xa22b,	// (0x00028121) popup_call_audio_second_window_t1

0xa2ac,	// (0x000281a2) popup_call_audio_second_window_t2_ParamLimits

0xa2ac,	// (0x000281a2) popup_call_audio_second_window_t2

0xa2e2,	// (0x000281d8) popup_call_audio_second_window_t3_ParamLimits

0xa2e2,	// (0x000281d8) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0002cffc) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0002cffc) popup_call_audio_second_window_t

0xa0db,	// (0x00027fd1) bg_popup_call_pane_cp04

0xa318,	// (0x0002820e) list_conf_pane

0xa320,	// (0x00028216) popup_call_audio_conf_window_t1

0xa32e,	// (0x00028224) call_thumbnail_pane_g1

0xa336,	// (0x0002822c) bg_pinb_pane_ParamLimits

0xa336,	// (0x0002822c) bg_pinb_pane

0xa344,	// (0x0002823a) find_pinb_pane

0xa34d,	// (0x00028243) listscroll_pinb_pane_ParamLimits

0xa34d,	// (0x00028243) listscroll_pinb_pane

0xa35c,	// (0x00028252) pinb_bg_pane_g1

0x281a,	// (0x00020710) pinb_bg_pane_g2

0x2826,	// (0x0002071c) pinb_bg_pane_g3

0x2832,	// (0x00020728) pinb_bg_pane_g4

0x283e,	// (0x00020734) pinb_bg_pane_g5

0x284a,	// (0x00020740) pinb_bg_pane_g6

0x2855,	// (0x0002074b) pinb_bg_pane_g7

0x2860,	// (0x00020756) pinb_bg_pane_g8

0x286b,	// (0x00020761) pinb_bg_pane_g9

0x2875,	// (0x0002076b) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0002d003) pinb_bg_pane_g

0x2892,	// (0x00020788) grid_pinb_pane

0x289d,	// (0x00020793) list_pinb_pane

0x28a8,	// (0x0002079e) scroll_pane_cp01_ParamLimits

0x28a8,	// (0x0002079e) scroll_pane_cp01

0xa366,	// (0x0002825c) find_pinb_pane_g1_ParamLimits

0xa366,	// (0x0002825c) find_pinb_pane_g1

0xa37e,	// (0x00028274) find_pinb_pane_t1

0xa390,	// (0x00028286) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0002d01d) find_pinb_pane_t

0xa3a5,	// (0x0002829b) input_focus_pane_cp01_ParamLimits

0xa3a5,	// (0x0002829b) input_focus_pane_cp01

0x28ba,	// (0x000207b0) cell_pinb_pane_ParamLimits

0x28ba,	// (0x000207b0) cell_pinb_pane

0x28e2,	// (0x000207d8) cell_pinb_pane_g1_ParamLimits

0x28e2,	// (0x000207d8) cell_pinb_pane_g1

0x28f7,	// (0x000207ed) cell_pinb_pane_g2_ParamLimits

0x28f7,	// (0x000207ed) cell_pinb_pane_g2

0xa3b1,	// (0x000282a7) cell_pinb_pane_g3_ParamLimits

0xa3b1,	// (0x000282a7) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0002d022) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0002d022) cell_pinb_pane_g

0xa0db,	// (0x00027fd1) grid_highlight_pane_cp01

0x2903,	// (0x000207f9) list_pinb_item_pane_ParamLimits

0x2903,	// (0x000207f9) list_pinb_item_pane

0xa0db,	// (0x00027fd1) list_highlight_pane_cp02

0x2929,	// (0x0002081f) list_pinb_item_pane_g1_ParamLimits

0x2929,	// (0x0002081f) list_pinb_item_pane_g1

0x2936,	// (0x0002082c) list_pinb_item_pane_g2_ParamLimits

0x2936,	// (0x0002082c) list_pinb_item_pane_g2

0x2942,	// (0x00020838) list_pinb_item_pane_g3_ParamLimits

0x2942,	// (0x00020838) list_pinb_item_pane_g3

0x2953,	// (0x00020849) list_pinb_item_pane_g4_ParamLimits

0x2953,	// (0x00020849) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0002d029) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0002d029) list_pinb_item_pane_g

0x295f,	// (0x00020855) list_pinb_item_pane_t1_ParamLimits

0x295f,	// (0x00020855) list_pinb_item_pane_t1

0x1197,	// (0x0001f08d) calc_display_pane

0x11b5,	// (0x0001f0ab) calc_paper_pane

0x11d1,	// (0x0001f0c7) grid_calc_pane

0xa0db,	// (0x00027fd1) bg_list_pane_cp01

0x2976,	// (0x0002086c) clock_g1

0x297e,	// (0x00020874) clock_g2

0x0001,

0xf13c,	// (0x0002d032) clock_g

0x2988,	// (0x0002087e) clock_t1_ParamLimits

0x2988,	// (0x0002087e) clock_t1

0x299d,	// (0x00020893) clock_t2_ParamLimits

0x299d,	// (0x00020893) clock_t2

0x29af,	// (0x000208a5) clock_t3_ParamLimits

0x29af,	// (0x000208a5) clock_t3

0x29c1,	// (0x000208b7) clock_t4_ParamLimits

0x29c1,	// (0x000208b7) clock_t4

0x29d3,	// (0x000208c9) clock_t5_ParamLimits

0x29d3,	// (0x000208c9) clock_t5

0x29e8,	// (0x000208de) clock_t6_ParamLimits

0x29e8,	// (0x000208de) clock_t6

0x29fa,	// (0x000208f0) clock_t7_ParamLimits

0x29fa,	// (0x000208f0) clock_t7

0x2a0c,	// (0x00020902) clock_t8_ParamLimits

0x2a0c,	// (0x00020902) clock_t8

0x2a22,	// (0x00020918) clock_t9_ParamLimits

0x2a22,	// (0x00020918) clock_t9

0x0008,

0xf141,	// (0x0002d037) clock_t_ParamLimits

0xf141,	// (0x0002d037) clock_t

0xa3bd,	// (0x000282b3) popup_clock_analogue_window_cp02

0xa3bd,	// (0x000282b3) popup_clock_digital_window_cp01

0xa3d3,	// (0x000282c9) listscroll_help_pane

0xa0db,	// (0x00027fd1) phob_pre_status_pane

0xa3dd,	// (0x000282d3) grid_qdial_pane

0xa336,	// (0x0002822c) listscroll_mce_pane

0xa336,	// (0x0002822c) bg_notes_pane

0xa3e7,	// (0x000282dd) list_notes_pane

0x2a38,	// (0x0002092e) scroll_pane_cp06

0xa3f5,	// (0x000282eb) bg_calc_paper_pane

0x11fd,	// (0x0001f0f3) list_calc_pane

0xa409,	// (0x000282ff) bg_calc_display_pane

0x1217,	// (0x0001f10d) calc_display_pane_t1

0x122c,	// (0x0001f122) calc_display_pane_t2

0x1241,	// (0x0001f137) calc_display_pane_t3

0x0002,

0xf154,	// (0x0002d04a) calc_display_pane_t

0x1253,	// (0x0001f149) cell_calc_pane_ParamLimits

0x1253,	// (0x0001f149) cell_calc_pane

0xa415,	// (0x0002830b) bg_calc_paper_pane_g1

0xa421,	// (0x00028317) bg_calc_paper_pane_g2

0xa42d,	// (0x00028323) bg_calc_paper_pane_g3

0xa439,	// (0x0002832f) bg_calc_paper_pane_g4

0xa445,	// (0x0002833b) bg_calc_paper_pane_g5

0x2a47,	// (0x0002093d) bg_calc_paper_pane_g6

0x2a58,	// (0x0002094e) bg_calc_paper_pane_g7

0x2a69,	// (0x0002095f) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0002d051) bg_calc_paper_pane_g

0x2a7a,	// (0x00020970) calc_bg_paper_pane_g9

0x2a8b,	// (0x00020981) list_calc_item_pane_ParamLimits

0x2a8b,	// (0x00020981) list_calc_item_pane

0xa451,	// (0x00028347) list_calc_item_pane_g1

0x1280,	// (0x0001f176) list_calc_item_pane_t1_ParamLimits

0x1280,	// (0x0001f176) list_calc_item_pane_t1

0x1292,	// (0x0001f188) list_calc_item_pane_t2_ParamLimits

0x1292,	// (0x0001f188) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0002d062) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0002d062) list_calc_item_pane_t

0xa45e,	// (0x00028354) cell_calc_pane_g1

0xa468,	// (0x0002835e) grid_highlight_pane_cp02

0x2aba,	// (0x000209b0) bg_calc_display_pane_g1

0x12c2,	// (0x0001f1b8) bg_calc_display_pane_g2

0xc5ae,	// (0x0002a4a4) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0002d06c) bg_calc_display_pane_g

0x12cc,	// (0x0001f1c2) cell_qdial_pane_ParamLimits

0x12cc,	// (0x0001f1c2) cell_qdial_pane

0x2ac3,	// (0x000209b9) cell_qdial_pane_g1_ParamLimits

0x2ac3,	// (0x000209b9) cell_qdial_pane_g1

0x2ad0,	// (0x000209c6) cell_qdial_pane_g2_ParamLimits

0x2ad0,	// (0x000209c6) cell_qdial_pane_g2

0xa48a,	// (0x00028380) cell_qdial_pane_g3_ParamLimits

0xa48a,	// (0x00028380) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0002d073) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0002d073) cell_qdial_pane_g

0x2aee,	// (0x000209e4) cell_qdial_pane_t1_ParamLimits

0x2aee,	// (0x000209e4) cell_qdial_pane_t1

0x2b06,	// (0x000209fc) cell_qdial_pane_t2_ParamLimits

0x2b06,	// (0x000209fc) cell_qdial_pane_t2

0x2b19,	// (0x00020a0f) cell_qdial_pane_t3_ParamLimits

0x2b19,	// (0x00020a0f) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0002d07c) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0002d07c) cell_qdial_pane_t

0xa0db,	// (0x00027fd1) grid_highlight_pane_cp04

0xa496,	// (0x0002838c) thumbnail_qdial_pane_ParamLimits

0xa496,	// (0x0002838c) thumbnail_qdial_pane

0xa4f2,	// (0x000283e8) list_help_pane

0xa4fb,	// (0x000283f1) scroll_pane_cp02

0x2b2c,	// (0x00020a22) help_list_pane_t1_ParamLimits

0x2b2c,	// (0x00020a22) help_list_pane_t1

0x12e0,	// (0x0001f1d6) bg_notes_pane_g2

0x12e8,	// (0x0001f1de) bg_notes_pane_g3

0x12f0,	// (0x0001f1e6) notes_bg_pane_g1

0x12f8,	// (0x0001f1ee) notes_bg_pane_g4

0x1300,	// (0x0001f1f6) notes_bg_pane_g5

0x1308,	// (0x0001f1fe) notes_bg_pane_g6

0x1310,	// (0x0001f206) notes_bg_pane_g7

0x1318,	// (0x0001f20e) notes_bg_pane_g8

0x1320,	// (0x0001f216) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0002d09a) notes_bg_pane_g

0x2b5f,	// (0x00020a55) list_notes_text_pane_ParamLimits

0x2b5f,	// (0x00020a55) list_notes_text_pane

0xa504,	// (0x000283fa) list_notes_text_pane_g1

0x2b87,	// (0x00020a7d) list_notes_text_pane_t1

0x2b95,	// (0x00020a8b) listscroll_cale_week_pane

0x2bba,	// (0x00020ab0) bg_cale_heading_pane

0xa527,	// (0x0002841d) bg_cale_pane_cp01

0x2bdc,	// (0x00020ad2) cale_week_corner_pane

0x2bf6,	// (0x00020aec) cale_week_day_heading_pane

0x2c18,	// (0x00020b0e) cale_week_scroll_pane_g1

0x2c35,	// (0x00020b2b) cale_week_scroll_pane_g2

0x2c48,	// (0x00020b3e) cale_week_scroll_pane_g3

0x2c5b,	// (0x00020b51) cale_week_scroll_pane_g4

0x2c6e,	// (0x00020b64) cale_week_scroll_pane_g5

0x2c81,	// (0x00020b77) cale_week_scroll_pane_g6

0x2c94,	// (0x00020b8a) cale_week_scroll_pane_g7

0x2ca7,	// (0x00020b9d) cale_week_scroll_pane_g8

0x2cbc,	// (0x00020bb2) cale_week_scroll_pane_g9

0x2ccf,	// (0x00020bc5) cale_week_scroll_pane_g10

0x2ce2,	// (0x00020bd8) cale_week_scroll_pane_g11

0x2cf5,	// (0x00020beb) cale_week_scroll_pane_g12

0x2d0c,	// (0x00020c02) cale_week_scroll_pane_g13

0x2d27,	// (0x00020c1d) cale_week_scroll_pane_g14

0x2d42,	// (0x00020c38) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0002d0a9) cale_week_scroll_pane_g

0x2d5d,	// (0x00020c53) cale_week_time_pane

0x2d72,	// (0x00020c68) grid_cale_week_pane

0xa557,	// (0x0002844d) scroll_pane_cp08

0x2d91,	// (0x00020c87) cell_cale_week_pane_ParamLimits

0x2d91,	// (0x00020c87) cell_cale_week_pane

0x2df3,	// (0x00020ce9) cale_week_day_heading_pane_t1

0x2e2e,	// (0x00020d24) cale_week_day_heading_pane_t2

0x2e69,	// (0x00020d5f) cale_week_day_heading_pane_t3

0x2ea4,	// (0x00020d9a) cale_week_day_heading_pane_t4

0x2edf,	// (0x00020dd5) cale_week_day_heading_pane_t5

0x2f1a,	// (0x00020e10) cale_week_day_heading_pane_t6

0x2f55,	// (0x00020e4b) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0002d0c8) cale_week_day_heading_pane_t

0xa574,	// (0x0002846a) bg_cale_side_pane

0x1328,	// (0x0001f21e) cale_week_time_pane_t1

0x1342,	// (0x0001f238) cale_week_time_pane_t2

0x135c,	// (0x0001f252) cale_week_time_pane_t3

0x1376,	// (0x0001f26c) cale_week_time_pane_t4

0x1390,	// (0x0001f286) cale_week_time_pane_t5

0x13aa,	// (0x0001f2a0) cale_week_time_pane_t6

0x13ca,	// (0x0001f2c0) cale_week_time_pane_t7

0x13ec,	// (0x0001f2e2) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0002d0d7) cale_week_time_pane_t

0x2f90,	// (0x00020e86) cell_cale_week_pane_g2

0x2fa3,	// (0x00020e99) cell_cale_week_pane_g3_ParamLimits

0x2fa3,	// (0x00020e99) cell_cale_week_pane_g3

0xa582,	// (0x00028478) grid_highlight_pane_cp07

0xa58a,	// (0x00028480) listscroll_gms_pane

0xa594,	// (0x0002848a) grid_gms_pane

0xa59d,	// (0x00028493) listscroll_gms_pane_g1

0xa5a5,	// (0x0002849b) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0002d0e8) listscroll_gms_pane_g

0x2fbb,	// (0x00020eb1) scroll_pane_cp010

0x2fc6,	// (0x00020ebc) cell_gms_pane_ParamLimits

0x2fc6,	// (0x00020ebc) cell_gms_pane

0x2fd9,	// (0x00020ecf) cell_gms_pane_g1

0xa5ad,	// (0x000284a3) cell_gms_pane_g2

0xa5b5,	// (0x000284ab) cell_gms_pane_g3

0xa5be,	// (0x000284b4) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0002d0ed) cell_gms_pane_g

0xa5c7,	// (0x000284bd) grid_highlight_pane_cp09

0x5446,	// (0x0002333c) phob_pre_status_pane_g1

0x544e,	// (0x00023344) phob_pre_status_pane_g2

0x5456,	// (0x0002334c) phob_pre_status_pane_g3

0x545e,	// (0x00023354) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x0002d4dc) phob_pre_status_pane_g

0x546e,	// (0x00023364) phob_pre_status_pane_t1

0x547e,	// (0x00023374) phob_pre_status_pane_t2

0x548e,	// (0x00023384) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x0002d4e7) phob_pre_status_pane_t

0xa0db,	// (0x00027fd1) bg_list_pane_cp05

0x1418,	// (0x0001f30e) grid_vorec_pane

0x1422,	// (0x0001f318) vorec_t1

0x1430,	// (0x0001f326) vorec_t2

0x143e,	// (0x0001f334) vorec_t3

0x144c,	// (0x0001f342) vorec_t4

0x145a,	// (0x0001f350) vorec_t5

0x1468,	// (0x0001f35e) vorec_t6

0x0006,

0xf200,	// (0x0002d0f6) vorec_t

0x1484,	// (0x0001f37a) wait_bar_pane_cp01

0x2fe1,	// (0x00020ed7) cell_vorec_pane_ParamLimits

0x2fe1,	// (0x00020ed7) cell_vorec_pane

0x148c,	// (0x0001f382) cell_vorec_pane_g1

0xa0db,	// (0x00027fd1) grid_highlight_pane_cp05

0x3004,	// (0x00020efa) cams_zoom_pane

0x3010,	// (0x00020f06) image_vga_pane

0x301f,	// (0x00020f15) main_camera_pane_g1

0x302d,	// (0x00020f23) main_camera_pane_g2

0x3039,	// (0x00020f2f) main_camera_pane_g3

0x3045,	// (0x00020f3b) main_camera_pane_g4

0x3051,	// (0x00020f47) main_camera_pane_g5

0x305d,	// (0x00020f53) main_camera_pane_g6

0x3069,	// (0x00020f5f) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0002d105) main_camera_pane_g

0x3075,	// (0x00020f6b) main_camera_pane_t1

0x3087,	// (0x00020f7d) main_camera_pane_t2

0x0001,

0xf220,	// (0x0002d116) main_camera_pane_t

0x30a8,	// (0x00020f9e) cams_zoom_pane_cp_ParamLimits

0x30a8,	// (0x00020f9e) cams_zoom_pane_cp

0x30cc,	// (0x00020fc2) image_cif_pane_ParamLimits

0x30cc,	// (0x00020fc2) image_cif_pane

0x30ea,	// (0x00020fe0) image_subqcif_pane

0x30f2,	// (0x00020fe8) main_video_pane_g1_ParamLimits

0x30f2,	// (0x00020fe8) main_video_pane_g1

0x3112,	// (0x00021008) main_video_pane_g2_ParamLimits

0x3112,	// (0x00021008) main_video_pane_g2

0x3142,	// (0x00021038) main_video_pane_g3_ParamLimits

0x3142,	// (0x00021038) main_video_pane_g3

0x316b,	// (0x00021061) main_video_pane_g4_ParamLimits

0x316b,	// (0x00021061) main_video_pane_g4

0x3194,	// (0x0002108a) main_video_pane_g5_ParamLimits

0x3194,	// (0x0002108a) main_video_pane_g5

0xa5db,	// (0x000284d1) main_video_pane_g6_ParamLimits

0xa5db,	// (0x000284d1) main_video_pane_g6

0x0006,

0xf225,	// (0x0002d11b) main_video_pane_g_ParamLimits

0xf225,	// (0x0002d11b) main_video_pane_g

0x31b6,	// (0x000210ac) main_video_pane_t1_ParamLimits

0x31b6,	// (0x000210ac) main_video_pane_t1

0xa5f5,	// (0x000284eb) cams_zoom_pane_g1

0xa5fe,	// (0x000284f4) cams_zoom_pane_g2

0xa607,	// (0x000284fd) cams_zoom_pane_g3

0xa610,	// (0x00028506) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0002d12a) cams_zoom_pane_g

0x3200,	// (0x000210f6) grid_cams_pane

0x320e,	// (0x00021104) linegrid_cams_pane

0x321c,	// (0x00021112) cell_cams_pane_ParamLimits

0x321c,	// (0x00021112) cell_cams_pane

0xa619,	// (0x0002850f) cams_burst_image_pane

0xa621,	// (0x00028517) cell_cams_pane_g1

0xa0db,	// (0x00027fd1) grid_highlight_pane_cp03

0xa45e,	// (0x00028354) mp_bg_pane_g1

0xa0db,	// (0x00027fd1) bg_list_pane_cp03

0xc3c4,	// (0x0002a2ba) bg_mp_pane

0xc3cc,	// (0x0002a2c2) grid_mp_pane

0xc3d4,	// (0x0002a2ca) media_player_g1

0xc3dc,	// (0x0002a2d2) media_player_t1

0xc3ea,	// (0x0002a2e0) media_player_t2

0xc3f8,	// (0x0002a2ee) media_player_t3

0xc406,	// (0x0002a2fc) media_player_t4

0xc414,	// (0x0002a30a) media_player_t5

0xc422,	// (0x0002a318) media_player_t6

0xc430,	// (0x0002a326) media_player_t7

0x0006,

0xf5d0,	// (0x0002d4c6) media_player_t

0xc43e,	// (0x0002a334) wait_bar_pane_cp02

0xf5b5,	// (0x0002d4ab) main_usb_pane_t

0x543d,	// (0x00023333) cell_mp_pane

0xa45e,	// (0x00028354) cell_mp_pane_g1

0xa0db,	// (0x00027fd1) grid_highlight_pane_cp06

0xa629,	// (0x0002851f) grid_skin_colour_pane

0xa631,	// (0x00028527) list_highlight_pane_cp03

0x3344,	// (0x0002123a) skin_g1

0xa639,	// (0x0002852f) skin_t1

0xa648,	// (0x0002853e) skin_t2

0x0001,

0xf269,	// (0x0002d15f) skin_t

0x334e,	// (0x00021244) cell_skin_colour_pane_ParamLimits

0x334e,	// (0x00021244) cell_skin_colour_pane

0xa656,	// (0x0002854c) cell_skin_colour_pane_g1

0x33d2,	// (0x000212c8) call_video_g1_ParamLimits

0x33d2,	// (0x000212c8) call_video_g1

0x33e2,	// (0x000212d8) call_video_g2_ParamLimits

0x33e2,	// (0x000212d8) call_video_g2

0x0001,

0xf26e,	// (0x0002d164) call_video_g_ParamLimits

0xf26e,	// (0x0002d164) call_video_g

0x343c,	// (0x00021332) call_video_uplink_pane_cp1_ParamLimits

0x343c,	// (0x00021332) call_video_uplink_pane_cp1

0xa668,	// (0x0002855e) call_video_uplink_pane_cp2

0x3508,	// (0x000213fe) video_down_crop_pane_ParamLimits

0x3508,	// (0x000213fe) video_down_crop_pane

0x3606,	// (0x000214fc) video_down_pane_ParamLimits

0x3606,	// (0x000214fc) video_down_pane

0xa670,	// (0x00028566) video_down_subqcif_pane_ParamLimits

0xa670,	// (0x00028566) video_down_subqcif_pane

0xa688,	// (0x0002857e) video_down_subqcif_pane_cp_ParamLimits

0xa688,	// (0x0002857e) video_down_subqcif_pane_cp

0xa6ae,	// (0x000285a4) im_reading_pane_ParamLimits

0xa6ae,	// (0x000285a4) im_reading_pane

0x3728,	// (0x0002161e) im_writing_pane_ParamLimits

0x3728,	// (0x0002161e) im_writing_pane

0x3746,	// (0x0002163c) im_reading_pane_t1

0xa6c8,	// (0x000285be) list_im_pane

0xa6d9,	// (0x000285cf) scroll_pane_cp07

0x379a,	// (0x00021690) im_writing_pane_t1_ParamLimits

0x379a,	// (0x00021690) im_writing_pane_t1

0xa6f2,	// (0x000285e8) im_writing_pane_t2_ParamLimits

0xa6f2,	// (0x000285e8) im_writing_pane_t2

0x0001,

0xf278,	// (0x0002d16e) im_writing_pane_t_ParamLimits

0xf278,	// (0x0002d16e) im_writing_pane_t

0xa0db,	// (0x00027fd1) input_focus_pane_cp04

0xa0db,	// (0x00027fd1) input_focus_pane_cp05

0x37af,	// (0x000216a5) list_im_single_pane_ParamLimits

0x37af,	// (0x000216a5) list_im_single_pane

0x37d3,	// (0x000216c9) list_single_im_pane_t1

0x5401,	// (0x000232f7) blid_accuracy_pane

0x5409,	// (0x000232ff) blid_compass_pane

0x5413,	// (0x00023309) main_location_t1

0x5421,	// (0x00023317) main_location_t2

0x542f,	// (0x00023325) main_location_t3

0x0002,

0xf5df,	// (0x0002d4d5) main_location_t

0xa0db,	// (0x00027fd1) aid_levels_location

0xa45e,	// (0x00028354) blid_accuracy_pane_g1

0xa45e,	// (0x00028354) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0002d1d0) blid_accuracy_pane_g

0xa73a,	// (0x00028630) wml_content_pane

0xa778,	// (0x0002866e) wml_button_pane_ParamLimits

0xa778,	// (0x0002866e) wml_button_pane

0x37e2,	// (0x000216d8) wml_list_single_large_pane_ParamLimits

0x37e2,	// (0x000216d8) wml_list_single_large_pane

0x380c,	// (0x00021702) wml_list_single_medium_pane_ParamLimits

0x380c,	// (0x00021702) wml_list_single_medium_pane

0x383d,	// (0x00021733) wml_list_single_small_pane_ParamLimits

0x383d,	// (0x00021733) wml_list_single_small_pane

0xa78c,	// (0x00028682) wml_selection_box_pane_ParamLimits

0xa78c,	// (0x00028682) wml_selection_box_pane

0xa79f,	// (0x00028695) wml_list_single_pane_t1

0xa7ae,	// (0x000286a4) wml_list_single_medium_pane_t1

0xa7bd,	// (0x000286b3) wml_list_single_large_pane_t1

0xa7cc,	// (0x000286c2) input_focus_pane_cp02_ParamLimits

0xa7cc,	// (0x000286c2) input_focus_pane_cp02

0xa7df,	// (0x000286d5) wml_selection_box_pane_g1

0xa7e8,	// (0x000286de) wml_selection_box_pane_t1_ParamLimits

0xa7e8,	// (0x000286de) wml_selection_box_pane_t1

0xa336,	// (0x0002822c) bg_wml_button_pane_ParamLimits

0xa336,	// (0x0002822c) bg_wml_button_pane

0xa800,	// (0x000286f6) wml_button_pane_g1

0xa808,	// (0x000286fe) wml_button_pane_t1

0xa800,	// (0x000286f6) wml_button_bg_pane_g1

0xa818,	// (0x0002870e) wml_button_bg_pane_g2

0xa820,	// (0x00028716) wml_button_bg_pane_g3

0xa828,	// (0x0002871e) wml_button_bg_pane_g4

0xa830,	// (0x00028726) wml_button_bg_pane_g5

0xa838,	// (0x0002872e) wml_button_bg_pane_g6

0xa840,	// (0x00028736) wml_button_bg_pane_g7

0xa848,	// (0x0002873e) wml_button_bg_pane_g8

0xa850,	// (0x00028746) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0002d173) wml_button_bg_pane_g

0x3877,	// (0x0002176d) bg_list_pane_cp02

0xa858,	// (0x0002874e) mce_header_pane_ParamLimits

0xa858,	// (0x0002874e) mce_header_pane

0xa86e,	// (0x00028764) mce_icon_pane

0xa86e,	// (0x00028764) mce_image_pane

0xa877,	// (0x0002876d) mce_text_pane_ParamLimits

0xa877,	// (0x0002876d) mce_text_pane

0x3881,	// (0x00021777) scroll_pane_cp03

0xa770,	// (0x00028666) scroll_pane_cp04

0xa88a,	// (0x00028780) scroll_pane_cp05_ParamLimits

0xa88a,	// (0x00028780) scroll_pane_cp05

0x388b,	// (0x00021781) mce_header_field_pane_ParamLimits

0x388b,	// (0x00021781) mce_header_field_pane

0x38ab,	// (0x000217a1) mce_header_field_pane_2_ParamLimits

0x38ab,	// (0x000217a1) mce_header_field_pane_2

0x38c1,	// (0x000217b7) mce_header_field_pane_3

0x38c9,	// (0x000217bf) list_single_mce_message_pane_ParamLimits

0x38c9,	// (0x000217bf) list_single_mce_message_pane

0x38f4,	// (0x000217ea) list_single_mce_smart_pane_ParamLimits

0x38f4,	// (0x000217ea) list_single_mce_smart_pane

0xa896,	// (0x0002878c) input_focus_pane_cp03

0xa89f,	// (0x00028795) list_header_data_pane

0x392a,	// (0x00021820) mce_header_field_pane_t1

0x3938,	// (0x0002182e) list_single_mce_header_pane_ParamLimits

0x3938,	// (0x0002182e) list_single_mce_header_pane

0xa8a7,	// (0x0002879d) list_single_mce_header_pane_t1

0xa8b6,	// (0x000287ac) list_single_mce_message_pane_g1

0xa8be,	// (0x000287b4) list_single_mce_message_pane_t1

0x398a,	// (0x00021880) bg_cale_heading_pane_cp01_ParamLimits

0x398a,	// (0x00021880) bg_cale_heading_pane_cp01

0xa8cc,	// (0x000287c2) bg_cale_pane_cp02_ParamLimits

0xa8cc,	// (0x000287c2) bg_cale_pane_cp02

0x39cd,	// (0x000218c3) cale_month_corner_pane

0x39e7,	// (0x000218dd) cale_month_day_heading_pane_ParamLimits

0x39e7,	// (0x000218dd) cale_month_day_heading_pane

0x3a42,	// (0x00021938) cale_month_pane_g1_ParamLimits

0x3a42,	// (0x00021938) cale_month_pane_g1

0x3a7a,	// (0x00021970) cale_month_pane_g2_ParamLimits

0x3a7a,	// (0x00021970) cale_month_pane_g2

0x3aa3,	// (0x00021999) cale_month_pane_g3_ParamLimits

0x3aa3,	// (0x00021999) cale_month_pane_g3

0x3aef,	// (0x000219e5) cale_month_pane_g4_ParamLimits

0x3aef,	// (0x000219e5) cale_month_pane_g4

0x3b3b,	// (0x00021a31) cale_month_pane_g5_ParamLimits

0x3b3b,	// (0x00021a31) cale_month_pane_g5

0x3b87,	// (0x00021a7d) cale_month_pane_g6_ParamLimits

0x3b87,	// (0x00021a7d) cale_month_pane_g6

0x3bd3,	// (0x00021ac9) cale_month_pane_g7_ParamLimits

0x3bd3,	// (0x00021ac9) cale_month_pane_g7

0x3c37,	// (0x00021b2d) cale_month_pane_g8_ParamLimits

0x3c37,	// (0x00021b2d) cale_month_pane_g8

0x3c9b,	// (0x00021b91) cale_month_pane_g9_ParamLimits

0x3c9b,	// (0x00021b91) cale_month_pane_g9

0x3cf9,	// (0x00021bef) cale_month_pane_g10_ParamLimits

0x3cf9,	// (0x00021bef) cale_month_pane_g10

0x3d55,	// (0x00021c4b) cale_month_pane_g11_ParamLimits

0x3d55,	// (0x00021c4b) cale_month_pane_g11

0x3da9,	// (0x00021c9f) cale_month_pane_g12_ParamLimits

0x3da9,	// (0x00021c9f) cale_month_pane_g12

0x3dff,	// (0x00021cf5) cale_month_pane_g13_ParamLimits

0x3dff,	// (0x00021cf5) cale_month_pane_g13

0x000c,

0xf290,	// (0x0002d186) cale_month_pane_g_ParamLimits

0xf290,	// (0x0002d186) cale_month_pane_g

0x3e55,	// (0x00021d4b) cale_month_week_pane

0x3e6a,	// (0x00021d60) grid_cale_month_pane_ParamLimits

0x3e6a,	// (0x00021d60) grid_cale_month_pane

0x3eb8,	// (0x00021dae) cale_month_day_heading_pane_t1

0x3f3e,	// (0x00021e34) cale_month_day_heading_pane_t2

0x3fcf,	// (0x00021ec5) cale_month_day_heading_pane_t3

0x4060,	// (0x00021f56) cale_month_day_heading_pane_t4

0x40f1,	// (0x00021fe7) cale_month_day_heading_pane_t5

0x4182,	// (0x00022078) cale_month_day_heading_pane_t6

0x4213,	// (0x00022109) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0002d1a1) cale_month_day_heading_pane_t

0xa574,	// (0x0002846a) bg_cale_side_pane_cp01

0x42bc,	// (0x000221b2) cale_month_week_pane_t1

0x42d5,	// (0x000221cb) cale_month_week_pane_t2

0x42ee,	// (0x000221e4) cale_month_week_pane_t3

0x4307,	// (0x000221fd) cale_month_week_pane_t4

0x4320,	// (0x00022216) cale_month_week_pane_t5

0x4341,	// (0x00022237) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0002d1b0) cale_month_week_pane_t

0x4362,	// (0x00022258) cell_cale_month_pane_ParamLimits

0x4362,	// (0x00022258) cell_cale_month_pane

0x1496,	// (0x0001f38c) cell_cale_month_pane_g1

0x14a2,	// (0x0001f398) cell_cale_month_pane_t1_ParamLimits

0x14a2,	// (0x0001f398) cell_cale_month_pane_t1

0xa582,	// (0x00028478) grid_highlight_pane_cp08

0xa45e,	// (0x00028354) main_smil_g1

0x44ae,	// (0x000223a4) smil_status_pane

0xa90b,	// (0x00028801) smil_text_pane

0xc2e4,	// (0x0002a1da) bg_popup_call3_rect_pane_g8

0xc2ec,	// (0x0002a1e2) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x0002d469) bg_popup_call3_rect_pane_g

0xc533,	// (0x0002a429) smil_status_volume_pane_g1

0xa915,	// (0x0002880b) smil_status_pane_t1

0x1768,	// (0x0001f65e) volume_smil_pane

0xa92c,	// (0x00028822) list_smil_text_pane

0x44c1,	// (0x000223b7) scroll_pane_cp011

0x44cc,	// (0x000223c2) smil_text_list_pane_t1_ParamLimits

0x44cc,	// (0x000223c2) smil_text_list_pane_t1

0x14c2,	// (0x0001f3b8) aid_volume_smil_ParamLimits

0x14c2,	// (0x0001f3b8) aid_volume_smil

0xa45e,	// (0x00028354) smil_volume_pane_g1

0xa45e,	// (0x00028354) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0002d1d0) smil_volume_pane_g

0x2b95,	// (0x00020a8b) listscroll_cale_day_pane

0xa936,	// (0x0002882c) bg_cale_pane

0xa94e,	// (0x00028844) list_cale_pane

0xa971,	// (0x00028867) scroll_pane_cp09

0xa982,	// (0x00028878) cale_bg_pane_g1

0xa98a,	// (0x00028880) cale_bg_pane_g2

0xa992,	// (0x00028888) cale_bg_pane_g3

0xa99a,	// (0x00028890) cale_bg_pane_g4

0xa9a2,	// (0x00028898) cale_bg_pane_g5

0xa9aa,	// (0x000288a0) cale_bg_pane_g6

0xa9b2,	// (0x000288a8) cale_bg_pane_g7

0xa9ba,	// (0x000288b0) cale_bg_pane_g8

0xa9c2,	// (0x000288b8) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0002d1d5) cale_bg_pane_g

0x454c,	// (0x00022442) list_cale_time_pane_ParamLimits

0x454c,	// (0x00022442) list_cale_time_pane

0xa9ca,	// (0x000288c0) list_cale_time_pane_g1_ParamLimits

0xa9ca,	// (0x000288c0) list_cale_time_pane_g1

0xa9d6,	// (0x000288cc) list_cale_time_pane_g2_ParamLimits

0xa9d6,	// (0x000288cc) list_cale_time_pane_g2

0x456e,	// (0x00022464) list_cale_time_pane_g3_ParamLimits

0x456e,	// (0x00022464) list_cale_time_pane_g3

0x457c,	// (0x00022472) list_cale_time_pane_g4_ParamLimits

0x457c,	// (0x00022472) list_cale_time_pane_g4

0x458a,	// (0x00022480) list_cale_time_pane_g5_ParamLimits

0x458a,	// (0x00022480) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0002d1e8) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0002d1e8) list_cale_time_pane_g

0xa9f0,	// (0x000288e6) list_cale_time_pane_t1_ParamLimits

0xa9f0,	// (0x000288e6) list_cale_time_pane_t1

0xaa18,	// (0x0002890e) list_cale_time_pane_t2_ParamLimits

0xaa18,	// (0x0002890e) list_cale_time_pane_t2

0x48bb,	// (0x000227b1) aid_blid_cardinal_pane

0x48fd,	// (0x000227f3) compass_pane_t4

0xaa40,	// (0x00028936) list_cale_time_pane_t4_ParamLimits

0xaa40,	// (0x00028936) list_cale_time_pane_t4

0x490b,	// (0x00022801) compass_pane_t5

0x491b,	// (0x00022811) compass_pane_t6

0x4929,	// (0x0002281f) compass_pane_t7

0xaee3,	// (0x00028dd9) navi_pane_cc_t1

0xb0e2,	// (0x00028fd8) aid_phob_thumbnail_center_pane

0x4f07,	// (0x00022dfd) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0002d1f5) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0002d1f5) list_cale_time_pane_t

0x9d32,	// (0x00027c28) bg_popup_window_pane_cp02_ParamLimits

0x9d32,	// (0x00027c28) bg_popup_window_pane_cp02

0xaa68,	// (0x0002895e) heading_pane_cp01_ParamLimits

0xaa68,	// (0x0002895e) heading_pane_cp01

0xaa74,	// (0x0002896a) loc_req_pane_ParamLimits

0xaa74,	// (0x0002896a) loc_req_pane

0xaa84,	// (0x0002897a) loc_type_pane_ParamLimits

0xaa84,	// (0x0002897a) loc_type_pane

0xaa96,	// (0x0002898c) loc_type_pane_t1_ParamLimits

0xaa96,	// (0x0002898c) loc_type_pane_t1

0xaaa8,	// (0x0002899e) loc_type_pane_t2_ParamLimits

0xaaa8,	// (0x0002899e) loc_type_pane_t2

0xaaba,	// (0x000289b0) loc_type_pane_t3_ParamLimits

0xaaba,	// (0x000289b0) loc_type_pane_t3

0x0002,

0xf306,	// (0x0002d1fc) loc_type_pane_t_ParamLimits

0xf306,	// (0x0002d1fc) loc_type_pane_t

0xaacc,	// (0x000289c2) list_loc_req_pane

0xaad6,	// (0x000289cc) scroll_pane_cp012

0x4598,	// (0x0002248e) list_single_loc_request_popup_menu_pane_ParamLimits

0x4598,	// (0x0002248e) list_single_loc_request_popup_menu_pane

0xaae1,	// (0x000289d7) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaae1,	// (0x000289d7) list_single_loc_request_popup_menu_pane_g1

0xaaed,	// (0x000289e3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaaed,	// (0x000289e3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0002d203) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0002d203) list_single_loc_request_popup_menu_pane_g

0xaaf9,	// (0x000289ef) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaaf9,	// (0x000289ef) list_single_loc_request_popup_menu_pane_t1

0x45aa,	// (0x000224a0) bg_popup_window_pane_cp03_ParamLimits

0x45aa,	// (0x000224a0) bg_popup_window_pane_cp03

0x45b8,	// (0x000224ae) heading_loc_req_pane_ParamLimits

0x45b8,	// (0x000224ae) heading_loc_req_pane

0x45c4,	// (0x000224ba) popup_dyc_status_message_window_g1_ParamLimits

0x45c4,	// (0x000224ba) popup_dyc_status_message_window_g1

0x45d0,	// (0x000224c6) popup_dyc_status_message_window_t1_ParamLimits

0x45d0,	// (0x000224c6) popup_dyc_status_message_window_t1

0x45e2,	// (0x000224d8) popup_dyc_status_message_window_t2_ParamLimits

0x45e2,	// (0x000224d8) popup_dyc_status_message_window_t2

0x45f4,	// (0x000224ea) popup_dyc_status_message_window_t3_ParamLimits

0x45f4,	// (0x000224ea) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0002d208) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0002d208) popup_dyc_status_message_window_t

0xa0db,	// (0x00027fd1) bg_heading_pane_cp01

0xab0f,	// (0x00028a05) heading_loc_req_pane_g1

0xab17,	// (0x00028a0d) heading_loc_req_pane_g2

0xab1f,	// (0x00028a15) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0002d20f) heading_loc_req_pane_g

0xab27,	// (0x00028a1d) heading_loc_req_pane_t1

0xab36,	// (0x00028a2c) bg_popup_sub_pane_cp01_ParamLimits

0xab36,	// (0x00028a2c) bg_popup_sub_pane_cp01

0xab44,	// (0x00028a3a) popup_cale_events_window_g1_ParamLimits

0xab44,	// (0x00028a3a) popup_cale_events_window_g1

0xab64,	// (0x00028a5a) popup_cale_events_window_g2_ParamLimits

0xab64,	// (0x00028a5a) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0002d243) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0002d243) popup_cale_events_window_g

0xab84,	// (0x00028a7a) popup_cale_events_window_t1_ParamLimits

0xab84,	// (0x00028a7a) popup_cale_events_window_t1

0xab96,	// (0x00028a8c) popup_cale_events_window_t2_ParamLimits

0xab96,	// (0x00028a8c) popup_cale_events_window_t2

0xabd4,	// (0x00028aca) popup_cale_events_window_t3_ParamLimits

0xabd4,	// (0x00028aca) popup_cale_events_window_t3

0xac0e,	// (0x00028b04) popup_cale_events_window_t4_ParamLimits

0xac0e,	// (0x00028b04) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0002d248) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0002d248) popup_cale_events_window_t

0x46fb,	// (0x000225f1) call_type_pane

0xafed,	// (0x00028ee3) popup_call_status_window_g1

0x4707,	// (0x000225fd) popup_call_status_window_g2

0x4713,	// (0x00022609) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0002d251) popup_call_status_window_g

0xac44,	// (0x00028b3a) call_type_pane_g1

0xac4d,	// (0x00028b43) call_type_pane_g2

0x0001,

0xf362,	// (0x0002d258) call_type_pane_g

0xa0db,	// (0x00027fd1) bg_popup_sub_pane_cp02

0xac56,	// (0x00028b4c) listscroll_popup_wml_pane

0xac5e,	// (0x00028b54) list_wml_pane

0xac68,	// (0x00028b5e) scroll_pane_cp013

0xac73,	// (0x00028b69) list_single_graphic_popup_wml_pane_ParamLimits

0xac73,	// (0x00028b69) list_single_graphic_popup_wml_pane

0xa45e,	// (0x00028354) list_single_graphic_popup_wml_pane_g1

0xac87,	// (0x00028b7d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0002d25d) list_single_graphic_popup_wml_pane_g

0xac8f,	// (0x00028b85) list_single_graphic_popup_wml_pane_t1

0xaca5,	// (0x00028b9b) aid_call_pane

0xa32e,	// (0x00028224) popup_clock_analogue_window_g1

0xa32e,	// (0x00028224) popup_clock_analogue_window_g2

0x14e4,	// (0x0001f3da) popup_clock_analogue_window_g3

0x14e4,	// (0x0001f3da) popup_clock_analogue_window_g4

0xa45e,	// (0x00028354) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0002d262) popup_clock_analogue_window_g

0x14ec,	// (0x0001f3e2) popup_clock_analogue_window_t1

0x14fa,	// (0x0001f3f0) clock_digital_number_pane_ParamLimits

0x14fa,	// (0x0001f3f0) clock_digital_number_pane

0x1506,	// (0x0001f3fc) clock_digital_number_pane_cp02_ParamLimits

0x1506,	// (0x0001f3fc) clock_digital_number_pane_cp02

0x1512,	// (0x0001f408) clock_digital_number_pane_cp03_ParamLimits

0x1512,	// (0x0001f408) clock_digital_number_pane_cp03

0x151e,	// (0x0001f414) clock_digital_number_pane_cp04_ParamLimits

0x151e,	// (0x0001f414) clock_digital_number_pane_cp04

0x152e,	// (0x0001f424) clock_digital_separator_pane_ParamLimits

0x152e,	// (0x0001f424) clock_digital_separator_pane

0x153a,	// (0x0001f430) popup_clock_digital_window_t1

0xa45e,	// (0x00028354) clock_digital_number_pane_g1

0xa45e,	// (0x00028354) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0002d1d0) clock_digital_number_pane_g

0xa45e,	// (0x00028354) clock_digital_separator_pane_g1

0xa45e,	// (0x00028354) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0002d1d0) clock_digital_separator_pane_g

0xa0db,	// (0x00027fd1) bg_popup_window_pane_cp04

0xacad,	// (0x00028ba3) heading_pane_cp03

0xacb5,	// (0x00028bab) listscroll_popup_gms_pane

0xacbd,	// (0x00028bb3) grid_large_graphic_popup_pane

0xacc7,	// (0x00028bbd) listscroll_popup_gms_pane_g1

0xaccf,	// (0x00028bc5) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0002d26d) listscroll_popup_gms_pane_g

0xa770,	// (0x00028666) scroll_pane_cp014

0x471f,	// (0x00022615) cell_large_graphic_popup_pane_ParamLimits

0x471f,	// (0x00022615) cell_large_graphic_popup_pane

0x4737,	// (0x0002262d) cell_large_graphic_popup_pane_g1_ParamLimits

0x4737,	// (0x0002262d) cell_large_graphic_popup_pane_g1

0xacd7,	// (0x00028bcd) cell_large_graphic_popup_pane_g2_ParamLimits

0xacd7,	// (0x00028bcd) cell_large_graphic_popup_pane_g2

0xace3,	// (0x00028bd9) cell_large_graphic_popup_pane_g3_ParamLimits

0xace3,	// (0x00028bd9) cell_large_graphic_popup_pane_g3

0xacf0,	// (0x00028be6) cell_large_graphic_popup_pane_g4_ParamLimits

0xacf0,	// (0x00028be6) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0002d272) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0002d272) cell_large_graphic_popup_pane_g

0xad00,	// (0x00028bf6) grid_highlight_pane_cp010

0xa45e,	// (0x00028354) bg_popup_call_pane_g1

0xad0a,	// (0x00028c00) list_single_graphic_popup_conf_pane_ParamLimits

0xad0a,	// (0x00028c00) list_single_graphic_popup_conf_pane

0xad1d,	// (0x00028c13) list_highlight_pane_cp01

0xad26,	// (0x00028c1c) list_single_graphic_popup_conf_pane_g1

0xad2e,	// (0x00028c24) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x0002d27b) list_single_graphic_popup_conf_pane_g

0xad36,	// (0x00028c2c) list_single_graphic_popup_conf_pane_t1

0xad44,	// (0x00028c3a) linegrid_cams_pane_g1

0x4743,	// (0x00022639) linegrid_cams_pane_g2

0xa5b5,	// (0x000284ab) linegrid_cams_pane_g3

0xad4d,	// (0x00028c43) linegrid_cams_pane_g4

0x474c,	// (0x00022642) linegrid_cams_pane_g5

0x4755,	// (0x0002264b) linegrid_cams_pane_g6

0xa5be,	// (0x000284b4) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0002d280) linegrid_cams_pane_g

0xad56,	// (0x00028c4c) popup_clock_analogue_window

0xad56,	// (0x00028c4c) popup_clock_digital_window

0xa0db,	// (0x00027fd1) popup_phob_thumbnail_window

0xa45e,	// (0x00028354) call_video_uplink_pane_g1

0xad5f,	// (0x00028c55) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x0002d28f) call_video_uplink_pane_g

0xad67,	// (0x00028c5d) video_uplink_pane

0xad6f,	// (0x00028c65) mce_image_pane_g1

0x475e,	// (0x00022654) mce_image_pane_g2

0x4768,	// (0x0002265e) mce_image_pane_g3

0x4770,	// (0x00022666) mce_image_pane_g4

0x4778,	// (0x0002266e) mce_image_pane_g5

0x0004,

0xf39e,	// (0x0002d294) mce_image_pane_g

0xad79,	// (0x00028c6f) control_top_pane_stacon_cp01_ParamLimits

0xad79,	// (0x00028c6f) control_top_pane_stacon_cp01

0xad8d,	// (0x00028c83) uni_indicator_pane_stacon_cp01_ParamLimits

0xad8d,	// (0x00028c83) uni_indicator_pane_stacon_cp01

0xad9e,	// (0x00028c94) bg_popup_sub_pane_cp03

0xada8,	// (0x00028c9e) chi_dic_find_pane

0x4780,	// (0x00022676) listscroll_chi_dic_pane

0xadb0,	// (0x00028ca6) main_pane_chidic_g1

0xadb8,	// (0x00028cae) chi_dic_find_pane_t1

0xadc6,	// (0x00028cbc) find_chidic_pane

0xadcf,	// (0x00028cc5) chi_dic_list_pane_ParamLimits

0xadcf,	// (0x00028cc5) chi_dic_list_pane

0xade0,	// (0x00028cd6) scroll_pane_cp020

0xade8,	// (0x00028cde) find_chidic_pane_t1

0xa0db,	// (0x00027fd1) input_focus_pane_cp06

0x4794,	// (0x0002268a) list_chi_dic_pane_ParamLimits

0x4794,	// (0x0002268a) list_chi_dic_pane

0x47ae,	// (0x000226a4) list_chi_dic_pane_t1_ParamLimits

0x47ae,	// (0x000226a4) list_chi_dic_pane_t1

0xa0db,	// (0x00027fd1) list_highlight_pane_cp020

0xadf7,	// (0x00028ced) bg_cale_heading_pane_g1

0x47c1,	// (0x000226b7) bg_cale_heading_pane_g2

0x47c9,	// (0x000226bf) bg_cale_heading_pane_g3

0x47d1,	// (0x000226c7) bg_cale_heading_pane_g4

0x47db,	// (0x000226d1) bg_cale_heading_pane_g5

0x47e5,	// (0x000226db) bg_cale_heading_pane_g6

0x47ed,	// (0x000226e3) bg_cale_heading_pane_g7

0x47f5,	// (0x000226eb) bg_cale_heading_pane_g8

0x47ff,	// (0x000226f5) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0002d29f) bg_cale_heading_pane_g

0xadf7,	// (0x00028ced) bg_cale_side_pane_g1

0x4809,	// (0x000226ff) bg_cale_side_pane_g2

0x4813,	// (0x00022709) bg_cale_side_pane_g3

0x481d,	// (0x00022713) bg_cale_side_pane_g4

0x4827,	// (0x0002271d) bg_cale_side_pane_g5

0x4831,	// (0x00022727) bg_cale_side_pane_g6

0x483b,	// (0x00022731) bg_cale_side_pane_g7

0x4845,	// (0x0002273b) bg_cale_side_pane_g8

0x484d,	// (0x00022743) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x0002d2b2) bg_cale_side_pane_g

0x4855,	// (0x0002274b) popup_call_status_window_ParamLimits

0x4855,	// (0x0002274b) popup_call_status_window

0xadff,	// (0x00028cf5) stacon_top_pane

0xae07,	// (0x00028cfd) status_pane_ParamLimits

0xae07,	// (0x00028cfd) status_pane

0xae1c,	// (0x00028d12) status_small_pane

0xae24,	// (0x00028d1a) control_pane

0xa0db,	// (0x00027fd1) stacon_bottom_pane

0xae2c,	// (0x00028d22) list_single_mce_smart_pane_t1_ParamLimits

0xae2c,	// (0x00028d22) list_single_mce_smart_pane_t1

0xae3f,	// (0x00028d35) list_single_mce_smart_pane_t2_ParamLimits

0xae3f,	// (0x00028d35) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x0002d2c5) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x0002d2c5) list_single_mce_smart_pane_t

0x4861,	// (0x00022757) compass_pane

0x486d,	// (0x00022763) main_location2_pane_t1

0x4881,	// (0x00022777) main_location2_pane_t2

0x4895,	// (0x0002278b) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x0002d2ca) main_location2_pane_t

0xae5e,	// (0x00028d54) compass_pane_g1_ParamLimits

0xae5e,	// (0x00028d54) compass_pane_g1

0x48df,	// (0x000227d5) compass_pane_t1

0x48ee,	// (0x000227e4) compass_pane_t2

0x0005,

0xf3dd,	// (0x0002d2d3) compass_pane_t

0x4939,	// (0x0002282f) text_secondary_cp61

0xaeda,	// (0x00028dd0) navi_pane_cams_g5

0xaf56,	// (0x00028e4c) navi_pane_im_t1

0xaf64,	// (0x00028e5a) navi_pane_mp_g1_ParamLimits

0xaf64,	// (0x00028e5a) navi_pane_mp_g1

0xaf78,	// (0x00028e6e) navi_pane_mp_g2_ParamLimits

0xaf78,	// (0x00028e6e) navi_pane_mp_g2

0xaf84,	// (0x00028e7a) navi_pane_mp_g3_ParamLimits

0xaf84,	// (0x00028e7a) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x0002d2e7) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x0002d2e7) navi_pane_mp_g

0xaf90,	// (0x00028e86) navi_pane_mp_t1

0xaf9e,	// (0x00028e94) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0002d2ee) navi_pane_mp_t

0xb023,	// (0x00028f19) navi_pane_vt_g1

0xaf90,	// (0x00028e86) navi_pane_vt_t1

0xb02b,	// (0x00028f21) navi_slider_pane

0xb03b,	// (0x00028f31) zooming_pane

0xb043,	// (0x00028f39) navi_slider_pane_g1

0x1557,	// (0x0001f44d) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x0002d2f5) navi_slider_pane_g

0xb067,	// (0x00028f5d) aid_levels_zoom

0xb06f,	// (0x00028f65) zooming_pane_g1

0xb077,	// (0x00028f6d) zooming_pane_g2

0xb077,	// (0x00028f6d) zooming_pane_g3

0x0002,

0xf40e,	// (0x0002d304) zooming_pane_g

0xb07f,	// (0x00028f75) level_10_zoom

0xb088,	// (0x00028f7e) level_11_zoom

0xb091,	// (0x00028f87) level_1_zoom

0xb09a,	// (0x00028f90) level_2_zoom

0xb0a3,	// (0x00028f99) level_3_zoom

0xb0ac,	// (0x00028fa2) level_4_zoom

0xb0b5,	// (0x00028fab) level_5_zoom

0xb0be,	// (0x00028fb4) level_6_zoom

0xb0c7,	// (0x00028fbd) level_7_zoom

0xb0d0,	// (0x00028fc6) level_8_zoom

0xb0d9,	// (0x00028fcf) level_9_zoom

0xb0ea,	// (0x00028fe0) popup_phob_thumbnail_window_g1

0xb0f2,	// (0x00028fe8) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0002d30b) popup_phob_thumbnail_window_g

0xc446,	// (0x0002a33c) level_1_location

0xc44e,	// (0x0002a344) level_2_location

0xc456,	// (0x0002a34c) level_3_location

0xc45e,	// (0x0002a354) level_4_location

0xb03b,	// (0x00028f31) level_5_location

0x4974,	// (0x0002286a) mce_icon_pane_g1

0x497c,	// (0x00022872) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0002d310) mce_icon_pane_g

0x4984,	// (0x0002287a) main_mup_pane_g1_ParamLimits

0x4984,	// (0x0002287a) main_mup_pane_g1

0x499c,	// (0x00022892) main_mup_pane_g2_ParamLimits

0x499c,	// (0x00022892) main_mup_pane_g2

0x49b8,	// (0x000228ae) main_mup_pane_g3_ParamLimits

0x49b8,	// (0x000228ae) main_mup_pane_g3

0x49d4,	// (0x000228ca) main_mup_pane_g4_ParamLimits

0x49d4,	// (0x000228ca) main_mup_pane_g4

0x49f0,	// (0x000228e6) main_mup_pane_g5_ParamLimits

0x49f0,	// (0x000228e6) main_mup_pane_g5

0x4a11,	// (0x00022907) main_mup_pane_g6_ParamLimits

0x4a11,	// (0x00022907) main_mup_pane_g6

0x4a2d,	// (0x00022923) main_mup_pane_g7_ParamLimits

0x4a2d,	// (0x00022923) main_mup_pane_g7

0x4a49,	// (0x0002293f) main_mup_pane_g8_ParamLimits

0x4a49,	// (0x0002293f) main_mup_pane_g8

0x4a69,	// (0x0002295f) main_mup_pane_g9_ParamLimits

0x4a69,	// (0x0002295f) main_mup_pane_g9

0x4a88,	// (0x0002297e) main_mup_pane_g10_ParamLimits

0x4a88,	// (0x0002297e) main_mup_pane_g10

0x4aa7,	// (0x0002299d) main_mup_pane_g11_ParamLimits

0x4aa7,	// (0x0002299d) main_mup_pane_g11

0x4abf,	// (0x000229b5) main_mup_pane_g12_ParamLimits

0x4abf,	// (0x000229b5) main_mup_pane_g12

0x4acd,	// (0x000229c3) main_mup_pane_g13_ParamLimits

0x4acd,	// (0x000229c3) main_mup_pane_g13

0x000c,

0xf41f,	// (0x0002d315) main_mup_pane_g_ParamLimits

0xf41f,	// (0x0002d315) main_mup_pane_g

0x4ae3,	// (0x000229d9) main_mup_pane_t1_ParamLimits

0x4ae3,	// (0x000229d9) main_mup_pane_t1

0x4b00,	// (0x000229f6) main_mup_pane_t2_ParamLimits

0x4b00,	// (0x000229f6) main_mup_pane_t2

0x4b1a,	// (0x00022a10) main_mup_pane_t3_ParamLimits

0x4b1a,	// (0x00022a10) main_mup_pane_t3

0x4b34,	// (0x00022a2a) main_mup_pane_t4_ParamLimits

0x4b34,	// (0x00022a2a) main_mup_pane_t4

0x4b46,	// (0x00022a3c) main_mup_pane_t5_ParamLimits

0x4b46,	// (0x00022a3c) main_mup_pane_t5

0x4b58,	// (0x00022a4e) main_mup_pane_t6_ParamLimits

0x4b58,	// (0x00022a4e) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0002d330) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0002d330) main_mup_pane_t

0x4b6e,	// (0x00022a64) mup_progress_pane_ParamLimits

0x4b6e,	// (0x00022a64) mup_progress_pane

0x4b7a,	// (0x00022a70) mup_visualizer_pane_ParamLimits

0x4b7a,	// (0x00022a70) mup_visualizer_pane

0x4bb4,	// (0x00022aaa) mup_volume_pane_ParamLimits

0x4bb4,	// (0x00022aaa) mup_volume_pane

0xafed,	// (0x00028ee3) mup_visualizer_pane_g1_ParamLimits

0xafed,	// (0x00028ee3) mup_visualizer_pane_g1

0xafed,	// (0x00028ee3) mup_visualizer_pane_g2_ParamLimits

0xafed,	// (0x00028ee3) mup_visualizer_pane_g2

0xae5e,	// (0x00028d54) mup_visualizer_pane_g3_ParamLimits

0xae5e,	// (0x00028d54) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0002d33d) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0002d33d) mup_visualizer_pane_g

0xa45e,	// (0x00028354) mup_volume_pane_g1

0xb102,	// (0x00028ff8) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x0002d344) mup_volume_pane_g

0xa45e,	// (0x00028354) mup_progress_pane_g1

0xb10b,	// (0x00029001) mup_progress_pane_g2

0xb114,	// (0x0002900a) mup_progress_pane_g3

0x0002,

0xf453,	// (0x0002d349) mup_progress_pane_g

0xa0db,	// (0x00027fd1) bg_popup_window_pane_cp05

0xb11d,	// (0x00029013) heading_pane_cp02_ParamLimits

0xb11d,	// (0x00029013) heading_pane_cp02

0xb137,	// (0x0002902d) list_popup_blid_pane

0xb13f,	// (0x00029035) list_blid_sat_info_pane_ParamLimits

0xb13f,	// (0x00029035) list_blid_sat_info_pane

0xb152,	// (0x00029048) list_blid_sat_info_pane_g1

0xb15a,	// (0x00029050) list_blid_sat_info_pane_t1

0x4cc1,	// (0x00022bb7) mup_equalizer_pane_ParamLimits

0x4cc1,	// (0x00022bb7) mup_equalizer_pane

0x4ce2,	// (0x00022bd8) mup_equalizer_pane_cp1_ParamLimits

0x4ce2,	// (0x00022bd8) mup_equalizer_pane_cp1

0x4d03,	// (0x00022bf9) mup_equalizer_pane_cp2_ParamLimits

0x4d03,	// (0x00022bf9) mup_equalizer_pane_cp2

0x4d24,	// (0x00022c1a) mup_equalizer_pane_cp3_ParamLimits

0x4d24,	// (0x00022c1a) mup_equalizer_pane_cp3

0x4d45,	// (0x00022c3b) mup_equalizer_pane_cp4_ParamLimits

0x4d45,	// (0x00022c3b) mup_equalizer_pane_cp4

0x4d66,	// (0x00022c5c) mup_equalizer_pane_cp5

0x4d7c,	// (0x00022c72) mup_equalizer_pane_cp6

0x4d94,	// (0x00022c8a) mup_equalizer_pane_cp7

0xc364,	// (0x0002a25a) bg_popup_call_poc_act_pane_g9

0xc36c,	// (0x0002a262) bg_popup_call_poc_act_pane_g10

0xc374,	// (0x0002a26a) bg_popup_call_poc_act_pane_g11

0x000a,

0xa336,	// (0x0002822c) mup_scale_pane

0xa45e,	// (0x00028354) mup_scale_pane_g1

0xb168,	// (0x0002905e) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x0002d365) mup_scale_pane_g

0xb18c,	// (0x00029082) msg_data_pane

0xb194,	// (0x0002908a) scroll_pane_cp017

0x4dbe,	// (0x00022cb4) bg_list_pane_cp04_ParamLimits

0x4dbe,	// (0x00022cb4) bg_list_pane_cp04

0xb1a4,	// (0x0002909a) msg_data_pane_g1

0x4dda,	// (0x00022cd0) msg_data_pane_g2

0x4de4,	// (0x00022cda) msg_data_pane_g3

0x4dec,	// (0x00022ce2) msg_data_pane_g4

0x4df4,	// (0x00022cea) msg_data_pane_g5

0x4dfc,	// (0x00022cf2) msg_data_pane_g6

0x4e04,	// (0x00022cfa) msg_data_pane_g7

0x0006,

0xf47e,	// (0x0002d374) msg_data_pane_g

0x4e0c,	// (0x00022d02) msg_text_pane_ParamLimits

0x4e0c,	// (0x00022d02) msg_text_pane

0x4e48,	// (0x00022d3e) qrid_highlight_pane_cp011_ParamLimits

0x4e48,	// (0x00022d3e) qrid_highlight_pane_cp011

0xa0db,	// (0x00027fd1) msg_body_pane

0xa0db,	// (0x00027fd1) msg_header_pane

0xb1ac,	// (0x000290a2) input_focus_pane_cp07

0xb1c1,	// (0x000290b7) msg_header_pane_t1_ParamLimits

0xb1c1,	// (0x000290b7) msg_header_pane_t1

0xb1d3,	// (0x000290c9) msg_header_pane_t2_ParamLimits

0xb1d3,	// (0x000290c9) msg_header_pane_t2

0x0001,

0xf492,	// (0x0002d388) msg_header_pane_t_ParamLimits

0xf492,	// (0x0002d388) msg_header_pane_t

0xb1e5,	// (0x000290db) msg_body_pane_g1

0xb1ed,	// (0x000290e3) msg_body_pane_t1_ParamLimits

0xb1ed,	// (0x000290e3) msg_body_pane_t1

0xb21e,	// (0x00029114) msg_body_pane_t2_ParamLimits

0xb21e,	// (0x00029114) msg_body_pane_t2

0xb230,	// (0x00029126) msg_body_pane_t3_ParamLimits

0xb230,	// (0x00029126) msg_body_pane_t3

0x0002,

0xf497,	// (0x0002d38d) msg_body_pane_t_ParamLimits

0xf497,	// (0x0002d38d) msg_body_pane_t

0x1599,	// (0x0001f48f) main_viewer_pane_g1_ParamLimits

0x1599,	// (0x0001f48f) main_viewer_pane_g1

0x15a5,	// (0x0001f49b) main_viewer_pane_g2_ParamLimits

0x15a5,	// (0x0001f49b) main_viewer_pane_g2

0x4e99,	// (0x00022d8f) main_viewer_pane_g3_ParamLimits

0x4e99,	// (0x00022d8f) main_viewer_pane_g3

0x4eaa,	// (0x00022da0) main_viewer_pane_g4_ParamLimits

0x4eaa,	// (0x00022da0) main_viewer_pane_g4

0x15b1,	// (0x0001f4a7) main_viewer_pane_g5_ParamLimits

0x15b1,	// (0x0001f4a7) main_viewer_pane_g5

0x15b1,	// (0x0001f4a7) main_viewer_pane_g7_ParamLimits

0x15b1,	// (0x0001f4a7) main_viewer_pane_g7

0xaae1,	// (0x000289d7) main_viewer_pane_g8_ParamLimits

0xaae1,	// (0x000289d7) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0002d39d) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0002d39d) main_viewer_pane_g

0xb242,	// (0x00029138) viewer_content_pane_ParamLimits

0xb242,	// (0x00029138) viewer_content_pane

0x4edb,	// (0x00022dd1) main_postcard_pane_g1_ParamLimits

0x4edb,	// (0x00022dd1) main_postcard_pane_g1

0x4ee9,	// (0x00022ddf) main_postcard_pane_g2_ParamLimits

0x4ee9,	// (0x00022ddf) main_postcard_pane_g2

0x4ef7,	// (0x00022ded) main_postcard_pane_g3_ParamLimits

0x4ef7,	// (0x00022ded) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0002d3ae) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0002d3ae) main_postcard_pane_g

0x4f07,	// (0x00022dfd) main_postcard_pane_g4

0xc546,	// (0x0002a43c) smil_status_volume_pane_g2

0x4f33,	// (0x00022e29) postcard_pane_ParamLimits

0x4f33,	// (0x00022e29) postcard_pane

0xafed,	// (0x00028ee3) postcard_pane_g1_ParamLimits

0xafed,	// (0x00028ee3) postcard_pane_g1

0x4f65,	// (0x00022e5b) postcard_pane_g2_ParamLimits

0x4f65,	// (0x00022e5b) postcard_pane_g2

0x4f71,	// (0x00022e67) postcard_pane_g3_ParamLimits

0x4f71,	// (0x00022e67) postcard_pane_g3

0xb250,	// (0x00029146) postcard_pane_g4_ParamLimits

0xb250,	// (0x00029146) postcard_pane_g4

0x4f7d,	// (0x00022e73) postcard_pane_g5_ParamLimits

0x4f7d,	// (0x00022e73) postcard_pane_g5

0x4f89,	// (0x00022e7f) postcard_pane_g6_ParamLimits

0x4f89,	// (0x00022e7f) postcard_pane_g6

0xb25e,	// (0x00029154) postcard_pane_g7_ParamLimits

0xb25e,	// (0x00029154) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0002d3bb) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0002d3bb) postcard_pane_g

0x4f95,	// (0x00022e8b) main_mp2_pane_g1_ParamLimits

0x4f95,	// (0x00022e8b) main_mp2_pane_g1

0x4fa1,	// (0x00022e97) main_mp2_pane_g2_ParamLimits

0x4fa1,	// (0x00022e97) main_mp2_pane_g2

0x4fad,	// (0x00022ea3) main_mp2_pane_g3_ParamLimits

0x4fad,	// (0x00022ea3) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x0002d3ca) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x0002d3ca) main_mp2_pane_g

0x4fb9,	// (0x00022eaf) main_mp2_pane_t1_ParamLimits

0x4fb9,	// (0x00022eaf) main_mp2_pane_t1

0x4fd0,	// (0x00022ec6) main_mp2_pane_t2_ParamLimits

0x4fd0,	// (0x00022ec6) main_mp2_pane_t2

0x4fe4,	// (0x00022eda) main_mp2_pane_t3_ParamLimits

0x4fe4,	// (0x00022eda) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x0002d3d1) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x0002d3d1) main_mp2_pane_t

0xb26c,	// (0x00029162) pec_content_pane_ParamLimits

0xb26c,	// (0x00029162) pec_content_pane

0xa770,	// (0x00028666) scroll_pane_cp015

0xb27e,	// (0x00029174) pec_attribute_pane_ParamLimits

0xb27e,	// (0x00029174) pec_attribute_pane

0x4ff6,	// (0x00022eec) pec_content_pane_g1_ParamLimits

0x4ff6,	// (0x00022eec) pec_content_pane_g1

0xb28e,	// (0x00029184) pec_content_pane_t1_ParamLimits

0xb28e,	// (0x00029184) pec_content_pane_t1

0xb2a0,	// (0x00029196) pec_content_pane_t2_ParamLimits

0xb2a0,	// (0x00029196) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x0002d3d8) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x0002d3d8) pec_content_pane_t

0x5002,	// (0x00022ef8) list_single_graphic_pane_cp01_ParamLimits

0x5002,	// (0x00022ef8) list_single_graphic_pane_cp01

0xa336,	// (0x0002822c) bg_popup_sub_pane_cp04

0xb2b2,	// (0x000291a8) popup_mup_playback_window_g1

0xb2be,	// (0x000291b4) popup_mup_playback_window_t1

0xb2d3,	// (0x000291c9) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x0002d3dd) popup_mup_playback_window_t

0xb30a,	// (0x00029200) main_image_pane_g1_ParamLimits

0xb30a,	// (0x00029200) main_image_pane_g1

0xb34d,	// (0x00029243) scroll_pane_cp018_ParamLimits

0xb34d,	// (0x00029243) scroll_pane_cp018

0xb365,	// (0x0002925b) scroll_pane_cp016_ParamLimits

0xb365,	// (0x0002925b) scroll_pane_cp016

0x509b,	// (0x00022f91) smil2_image_pane_ParamLimits

0x509b,	// (0x00022f91) smil2_image_pane

0x50cb,	// (0x00022fc1) smil2_root_pane_ParamLimits

0x50cb,	// (0x00022fc1) smil2_root_pane

0x50f7,	// (0x00022fed) smil2_text_pane_ParamLimits

0x50f7,	// (0x00022fed) smil2_text_pane

0xa0db,	// (0x00027fd1) bg_list_pane_cp06

0xb3a1,	// (0x00029297) grid_radio_pane

0xa0db,	// (0x00027fd1) bg_popup_window_pane_cp06

0xb3a9,	// (0x0002929f) main_fmradio_pane_t1

0xacad,	// (0x00028ba3) heading_pane_cp04

0xb3b7,	// (0x000292ad) main_fmradio_pane_t2

0xc37c,	// (0x0002a272) popup_cale_lunar_info_window_g1

0xb3c5,	// (0x000292bb) main_fmradio_pane_t3

0xc384,	// (0x0002a27a) popup_cale_lunar_info_window_g2

0xb3d3,	// (0x000292c9) main_fmradio_pane_t4

0x0001,

0xb3e1,	// (0x000292d7) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x0002d4b8) popup_cale_lunar_info_window_g

0xf4fc,	// (0x0002d3f2) main_fmradio_pane_t

0xb3ef,	// (0x000292e5) wait_bar_pane_cp03

0xb3f7,	// (0x000292ed) cell_fmradio_pane_ParamLimits

0xb3f7,	// (0x000292ed) cell_fmradio_pane

0xb25e,	// (0x00029154) cell_fmradio_pane_g1_ParamLimits

0xb25e,	// (0x00029154) cell_fmradio_pane_g1

0xa0db,	// (0x00027fd1) grid_highlight_pane_cp011

0xb40a,	// (0x00029300) poc_content_pane_ParamLimits

0xb40a,	// (0x00029300) poc_content_pane

0xb41c,	// (0x00029312) scroll_pane_cp019

0x5137,	// (0x0002302d) popup_call_poc_act_window_ParamLimits

0x5137,	// (0x0002302d) popup_call_poc_act_window

0x5144,	// (0x0002303a) popup_call_poc_inact_window_ParamLimits

0x5144,	// (0x0002303a) popup_call_poc_inact_window

0xf599,	// (0x0002d48f) bg_popup_call_poc_act_pane_g

0xc2f4,	// (0x0002a1ea) bg_popup_call_poc_inact_pane_g1

0xc2fc,	// (0x0002a1f2) bg_popup_call_poc_inact_pane_g2

0xb424,	// (0x0002931a) popup_call_poc_act_window_g2

0xc304,	// (0x0002a1fa) bg_popup_call_poc_inact_pane_g3

0xc30c,	// (0x0002a202) bg_popup_call_poc_inact_pane_g4

0xc314,	// (0x0002a20a) bg_popup_call_poc_inact_pane_g5

0xb42c,	// (0x00029322) popup_call_poc_act_window_t1_ParamLimits

0xb42c,	// (0x00029322) popup_call_poc_act_window_t1

0xb454,	// (0x0002934a) popup_call_poc_act_window_t2_ParamLimits

0xb454,	// (0x0002934a) popup_call_poc_act_window_t2

0xb47c,	// (0x00029372) popup_call_poc_act_window_t3_ParamLimits

0xb47c,	// (0x00029372) popup_call_poc_act_window_t3

0xb4a4,	// (0x0002939a) popup_call_poc_act_window_t4_ParamLimits

0xb4a4,	// (0x0002939a) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0002d3fd) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0002d3fd) popup_call_poc_act_window_t

0xc31c,	// (0x0002a212) bg_popup_call_poc_inact_pane_g6

0xc324,	// (0x0002a21a) bg_popup_call_poc_inact_pane_g7

0xc32c,	// (0x0002a222) bg_popup_call_poc_inact_pane_g8

0xb4b6,	// (0x000293ac) popup_call_poc_inact_window_g2

0xc334,	// (0x0002a22a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x0002d47c) bg_popup_call_poc_inact_pane_g

0xb4be,	// (0x000293b4) popup_call_poc_inact_window_t1_ParamLimits

0xb4be,	// (0x000293b4) popup_call_poc_inact_window_t1

0xb4d3,	// (0x000293c9) popup_call_poc_inact_window_t2_ParamLimits

0xb4d3,	// (0x000293c9) popup_call_poc_inact_window_t2

0xb4e8,	// (0x000293de) popup_call_poc_inact_window_t3_ParamLimits

0xb4e8,	// (0x000293de) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x0002d406) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x0002d406) popup_call_poc_inact_window_t

0xc4b9,	// (0x0002a3af) context_pane_ParamLimits

0x55fa,	// (0x000234f0) signal_pane_ParamLimits

0xb03b,	// (0x00028f31) main_call2_pane

0x170c,	// (0x0001f602) popup_phob_thumbnail2_window_ParamLimits

0x170c,	// (0x0001f602) popup_phob_thumbnail2_window

0x1569,	// (0x0001f45f) aid_hotspot_pointer_arrow_pane

0x1571,	// (0x0001f467) aid_hotspot_pointer_hand_pane

0x5466,	// (0x0002335c) phob_pre_status_pane_g5

0x3004,	// (0x00020efa) cams_zoom_pane_ParamLimits

0x3010,	// (0x00020f06) image_vga_pane_ParamLimits

0x301f,	// (0x00020f15) main_camera_pane_g1_ParamLimits

0x302d,	// (0x00020f23) main_camera_pane_g2_ParamLimits

0x3039,	// (0x00020f2f) main_camera_pane_g3_ParamLimits

0x3045,	// (0x00020f3b) main_camera_pane_g4_ParamLimits

0x3051,	// (0x00020f47) main_camera_pane_g5_ParamLimits

0x305d,	// (0x00020f53) main_camera_pane_g6_ParamLimits

0x3069,	// (0x00020f5f) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0002d105) main_camera_pane_g_ParamLimits

0x3075,	// (0x00020f6b) main_camera_pane_t1_ParamLimits

0x3087,	// (0x00020f7d) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0002d116) main_camera_pane_t_ParamLimits

0xa336,	// (0x0002822c) bg_popup_preview_window_pane_cp01_ParamLimits

0xa336,	// (0x0002822c) bg_popup_preview_window_pane_cp01

0xb4fd,	// (0x000293f3) popup_phob_thumbnail2_window_g1_ParamLimits

0xb4fd,	// (0x000293f3) popup_phob_thumbnail2_window_g1

0xa0db,	// (0x00027fd1) call2_cli_visual_pane

0x5160,	// (0x00023056) popup_call2_audio_conf_window_ParamLimits

0x5160,	// (0x00023056) popup_call2_audio_conf_window

0x5175,	// (0x0002306b) popup_call2_audio_first_window_ParamLimits

0x5175,	// (0x0002306b) popup_call2_audio_first_window

0x5213,	// (0x00023109) popup_call2_audio_in_window_ParamLimits

0x5213,	// (0x00023109) popup_call2_audio_in_window

0x5255,	// (0x0002314b) popup_call2_audio_out_window_ParamLimits

0x5255,	// (0x0002314b) popup_call2_audio_out_window

0x52b7,	// (0x000231ad) popup_call2_audio_second_window_ParamLimits

0x52b7,	// (0x000231ad) popup_call2_audio_second_window

0x5315,	// (0x0002320b) popup_call2_audio_wait_window_ParamLimits

0x5315,	// (0x0002320b) popup_call2_audio_wait_window

0xa0db,	// (0x00027fd1) bg_popup_call2_act_pane_cp03

0xa318,	// (0x0002820e) list_conf_pane_cp

0xb509,	// (0x000293ff) popup_call2_audio_conf_window_t1

0xad0a,	// (0x00028c00) list_single_graphic_popup_conf2_pane_ParamLimits

0xad0a,	// (0x00028c00) list_single_graphic_popup_conf2_pane

0xad1d,	// (0x00028c13) list_highlight_pane_cp04

0xb517,	// (0x0002940d) list_single_graphic_popup_conf2_pane_g1

0xad2e,	// (0x00028c24) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0002d40d) list_single_graphic_popup_conf2_pane_g

0xb521,	// (0x00029417) list_single_graphic_popup_conf2_pane_t1

0xb52f,	// (0x00029425) bg_popup_call2_act_pane_cp01_ParamLimits

0xb52f,	// (0x00029425) bg_popup_call2_act_pane_cp01

0xb5b9,	// (0x000294af) call_type_pane_cp05_ParamLimits

0xb5b9,	// (0x000294af) call_type_pane_cp05

0xb60d,	// (0x00029503) popup_call2_audio_second_window_g1_ParamLimits

0xb60d,	// (0x00029503) popup_call2_audio_second_window_g1

0xb661,	// (0x00029557) popup_call2_audio_second_window_g2_ParamLimits

0xb661,	// (0x00029557) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x0002d412) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x0002d412) popup_call2_audio_second_window_g

0xb6c6,	// (0x000295bc) popup_call2_audio_second_window_t1_ParamLimits

0xb6c6,	// (0x000295bc) popup_call2_audio_second_window_t1

0xb781,	// (0x00029677) popup_call2_audio_second_window_t2_ParamLimits

0xb781,	// (0x00029677) popup_call2_audio_second_window_t2

0xb7d4,	// (0x000296ca) popup_call2_audio_second_window_t3_ParamLimits

0xb7d4,	// (0x000296ca) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x0002d419) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x0002d419) popup_call2_audio_second_window_t

0xa0db,	// (0x00027fd1) bg_popup_call2_in_pane_cp02

0xa0e5,	// (0x00027fdb) call_type_pane_cp04

0xa0ed,	// (0x00027fe3) popup_call2_audio_wait_window_g1

0xa0f5,	// (0x00027feb) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0002cff2) popup_call2_audio_wait_window_g

0xa0fd,	// (0x00027ff3) popup_call2_audio_wait_window_t3

0xb8c7,	// (0x000297bd) bg_popup_call2_act_pane_ParamLimits

0xb8c7,	// (0x000297bd) bg_popup_call2_act_pane

0xb987,	// (0x0002987d) call_type_pane_cp03_ParamLimits

0xb987,	// (0x0002987d) call_type_pane_cp03

0xb9eb,	// (0x000298e1) popup_call2_audio_first_window_g1_ParamLimits

0xb9eb,	// (0x000298e1) popup_call2_audio_first_window_g1

0xba5b,	// (0x00029951) popup_call2_audio_first_window_g2_ParamLimits

0xba5b,	// (0x00029951) popup_call2_audio_first_window_g2

0xafed,	// (0x00028ee3) popup_call2_audio_first_window_g3_ParamLimits

0xafed,	// (0x00028ee3) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x0002d422) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x0002d422) popup_call2_audio_first_window_g

0xbb39,	// (0x00029a2f) popup_call2_audio_first_window_t1_ParamLimits

0xbb39,	// (0x00029a2f) popup_call2_audio_first_window_t1

0xbc3c,	// (0x00029b32) popup_call2_audio_first_window_t4_ParamLimits

0xbc3c,	// (0x00029b32) popup_call2_audio_first_window_t4

0xbd1f,	// (0x00029c15) popup_call2_audio_first_window_t5_ParamLimits

0xbd1f,	// (0x00029c15) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0002d42d) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0002d42d) popup_call2_audio_first_window_t

0xa32e,	// (0x00028224) bg_popup_call2_act_pane_g1

0xc38c,	// (0x0002a282) popup_cale_lunar_info_window_t1

0xc39a,	// (0x0002a290) popup_cale_lunar_info_window_t2

0xc3a8,	// (0x0002a29e) popup_cale_lunar_info_window_t3

0xa0db,	// (0x00027fd1) bg_popup_call2_bubble_pane

0xbe20,	// (0x00029d16) bg_popup_call2_in_pane_cp01_ParamLimits

0xbe20,	// (0x00029d16) bg_popup_call2_in_pane_cp01

0x9db7,	// (0x00027cad) call_type_pane_cp02

0xbe68,	// (0x00029d5e) popup_call2_audio_out_window_g1_ParamLimits

0xbe68,	// (0x00029d5e) popup_call2_audio_out_window_g1

0xbe94,	// (0x00029d8a) popup_call2_audio_out_window_g2_ParamLimits

0xbe94,	// (0x00029d8a) popup_call2_audio_out_window_g2

0xbebc,	// (0x00029db2) popup_call2_audio_out_window_g3_ParamLimits

0xbebc,	// (0x00029db2) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x0002d436) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x0002d436) popup_call2_audio_out_window_g

0xbef7,	// (0x00029ded) popup_call2_audio_out_window_t1_ParamLimits

0xbef7,	// (0x00029ded) popup_call2_audio_out_window_t1

0xbf56,	// (0x00029e4c) popup_call2_audio_out_window_t2_ParamLimits

0xbf56,	// (0x00029e4c) popup_call2_audio_out_window_t2

0xbfaa,	// (0x00029ea0) popup_call2_audio_out_window_t3_ParamLimits

0xbfaa,	// (0x00029ea0) popup_call2_audio_out_window_t3

0xbfc0,	// (0x00029eb6) popup_call2_audio_out_window_t4_ParamLimits

0xbfc0,	// (0x00029eb6) popup_call2_audio_out_window_t4

0xbfd6,	// (0x00029ecc) popup_call2_audio_out_window_t5_ParamLimits

0xbfd6,	// (0x00029ecc) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x0002d43f) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x0002d43f) popup_call2_audio_out_window_t

0xc03a,	// (0x00029f30) bg_popup_call2_in_pane_ParamLimits

0xc03a,	// (0x00029f30) bg_popup_call2_in_pane

0xc096,	// (0x00029f8c) popup_call2_audio_in_window_g1_ParamLimits

0xc096,	// (0x00029f8c) popup_call2_audio_in_window_g1

0xc0ce,	// (0x00029fc4) popup_call2_audio_in_window_g2_ParamLimits

0xc0ce,	// (0x00029fc4) popup_call2_audio_in_window_g2

0xc106,	// (0x00029ffc) popup_call2_audio_in_window_g3_ParamLimits

0xc106,	// (0x00029ffc) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x0002d44c) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x0002d44c) popup_call2_audio_in_window_g

0xc15e,	// (0x0002a054) popup_call2_audio_in_window_t1_ParamLimits

0xc15e,	// (0x0002a054) popup_call2_audio_in_window_t1

0xc1de,	// (0x0002a0d4) popup_call2_audio_in_window_t2_ParamLimits

0xc1de,	// (0x0002a0d4) popup_call2_audio_in_window_t2

0xc25e,	// (0x0002a154) popup_call2_audio_in_window_t3_ParamLimits

0xc25e,	// (0x0002a154) popup_call2_audio_in_window_t3

0xc278,	// (0x0002a16e) popup_call2_audio_in_window_t4_ParamLimits

0xc278,	// (0x0002a16e) popup_call2_audio_in_window_t4

0xc28a,	// (0x0002a180) popup_call2_audio_in_window_t5_ParamLimits

0xc28a,	// (0x0002a180) popup_call2_audio_in_window_t5

0xc29f,	// (0x0002a195) popup_call2_audio_in_window_t6_ParamLimits

0xc29f,	// (0x0002a195) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x0002d455) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x0002d455) popup_call2_audio_in_window_t

0xa32e,	// (0x00028224) bg_popup_call2_in_pane_g1

0xc3b6,	// (0x0002a2ac) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x0002d4bd) popup_cale_lunar_info_window_t

0xa336,	// (0x0002822c) bg_popup_call2_rect_pane_ParamLimits

0xa336,	// (0x0002822c) bg_popup_call2_rect_pane

0xa0db,	// (0x00027fd1) call2_cli_visual_graphic_pane

0xa0db,	// (0x00027fd1) call2_cli_visual_text_pane

0x175b,	// (0x0001f651) smil_status_volume_pane_g3

0x0002,

0xa45e,	// (0x00028354) call2_cli_visual_graphic_pane_g1

0xa45e,	// (0x00028354) call2_cli_visual_graphic_pane_g2

0xa45e,	// (0x00028354) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x0002d462) call2_cli_visual_graphic_pane_g

0xc2b4,	// (0x0002a1aa) bg_popup_call2_rect_pane_g1

0xa4ea,	// (0x000283e0) bg_popup_call2_rect_pane_g2

0xc2bc,	// (0x0002a1b2) bg_popup_call2_rect_pane_g3

0xc2c4,	// (0x0002a1ba) bg_popup_call2_rect_pane_g4

0xc2cc,	// (0x0002a1c2) bg_popup_call2_rect_pane_g5

0xc2d4,	// (0x0002a1ca) bg_popup_call2_rect_pane_g6

0xc2dc,	// (0x0002a1d2) bg_popup_call2_rect_pane_g7

0xc2e4,	// (0x0002a1da) bg_popup_call2_rect_pane_g8

0xc2ec,	// (0x0002a1e2) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x0002d469) bg_popup_call2_rect_pane_g

0xc2f4,	// (0x0002a1ea) bg_popup_call2_bubble_pane_g1

0xc2fc,	// (0x0002a1f2) bg_popup_call2_bubble_pane_g2

0xc304,	// (0x0002a1fa) bg_popup_call2_bubble_pane_g3

0xc30c,	// (0x0002a202) bg_popup_call2_bubble_pane_g4

0xc314,	// (0x0002a20a) bg_popup_call2_bubble_pane_g5

0xc31c,	// (0x0002a212) bg_popup_call2_bubble_pane_g6

0xc324,	// (0x0002a21a) bg_popup_call2_bubble_pane_g7

0xc32c,	// (0x0002a222) bg_popup_call2_bubble_pane_g8

0xc334,	// (0x0002a22a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x0002d47c) bg_popup_call2_bubble_pane_g

0x2ba5,	// (0x00020a9b) aid_cale_week_size_cell_pane

0x3099,	// (0x00020f8f) aid_cams_cif_uncrop_pane_ParamLimits

0x3099,	// (0x00020f8f) aid_cams_cif_uncrop_pane

0x31f4,	// (0x000210ea) aid_cams_size_cell_ParamLimits

0x31f4,	// (0x000210ea) aid_cams_size_cell

0x3200,	// (0x000210f6) grid_cams_pane_ParamLimits

0x320e,	// (0x00021104) linegrid_cams_pane_ParamLimits

0x33fa,	// (0x000212f0) call_video_pane_t1

0x341b,	// (0x00021311) call_video_pane_t2

0x0001,

0xf273,	// (0x0002d169) call_video_pane_t

0x3964,	// (0x0002185a) aid_cale_month_size_cell_pane_ParamLimits

0x3964,	// (0x0002185a) aid_cale_month_size_cell_pane

0xf610,	// (0x0002d506) smil_status_volume_pane_g

0x1768,	// (0x0001f65e) volume_smil_pane_ParamLimits

0x0e92,	// (0x0001ed88) aid_popup2_width_pane

0x2ae1,	// (0x000209d7) cell_qdial_pane_g4_ParamLimits

0x2ae1,	// (0x000209d7) cell_qdial_pane_g4

0x48bb,	// (0x000227b1) aid_blid_cardinal_pane_ParamLimits

0x48cb,	// (0x000227c1) aid_blid_destination_pane_ParamLimits

0x48cb,	// (0x000227c1) aid_blid_destination_pane

0xa336,	// (0x0002822c) bg_popup_call_poc_act_pane_ParamLimits

0xa336,	// (0x0002822c) bg_popup_call_poc_act_pane

0xa336,	// (0x0002822c) bg_popup_call_poc_inact_pane_ParamLimits

0xa336,	// (0x0002822c) bg_popup_call_poc_inact_pane

0xc33c,	// (0x0002a232) bg_popup_call_poc_act_pane_g1

0xc344,	// (0x0002a23a) bg_popup_call_poc_act_pane_g2

0xc34c,	// (0x0002a242) bg_popup_call_poc_act_pane_g3

0xc30c,	// (0x0002a202) bg_popup_call_poc_act_pane_g4

0xc314,	// (0x0002a20a) bg_popup_call_poc_act_pane_g5

0xc354,	// (0x0002a24a) bg_popup_call_poc_act_pane_g6

0xc324,	// (0x0002a21a) bg_popup_call_poc_act_pane_g7

0xc35c,	// (0x0002a252) bg_popup_call_poc_act_pane_g8

0xa0db,	// (0x00027fd1) main_usb_pane

0x163b,	// (0x0001f531) popup_cale_lunar_info_window

0x3746,	// (0x0002163c) im_reading_pane_t1_ParamLimits

0xa6c8,	// (0x000285be) list_im_pane_ParamLimits

0xa6d9,	// (0x000285cf) scroll_pane_cp07_ParamLimits

0xa0db,	// (0x00027fd1) grid_highlight_pane_cp012

0xa336,	// (0x0002822c) mup_scale_pane_ParamLimits

0xafed,	// (0x00028ee3) main_usb_pane_g1_ParamLimits

0xafed,	// (0x00028ee3) main_usb_pane_g1

0x5389,	// (0x0002327f) main_usb_pane_g2_ParamLimits

0x5389,	// (0x0002327f) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x0002d4a6) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x0002d4a6) main_usb_pane_g

0x5395,	// (0x0002328b) main_usb_pane_t1_ParamLimits

0x5395,	// (0x0002328b) main_usb_pane_t1

0x53a7,	// (0x0002329d) main_usb_pane_t2_ParamLimits

0x53a7,	// (0x0002329d) main_usb_pane_t2

0x53b9,	// (0x000232af) main_usb_pane_t3_ParamLimits

0x53b9,	// (0x000232af) main_usb_pane_t3

0x53cb,	// (0x000232c1) main_usb_pane_t4_ParamLimits

0x53cb,	// (0x000232c1) main_usb_pane_t4

0x53dd,	// (0x000232d3) main_usb_pane_t5_ParamLimits

0x53dd,	// (0x000232d3) main_usb_pane_t5

0x53ef,	// (0x000232e5) main_usb_pane_t6_ParamLimits

0x53ef,	// (0x000232e5) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x0002d4ab) main_usb_pane_t_ParamLimits

0x4861,	// (0x00022757) aid_text_placing

0x486d,	// (0x00022763) main_location2_pane_t1_ParamLimits

0x4881,	// (0x00022777) main_location2_pane_t2_ParamLimits

0x4895,	// (0x0002278b) main_location2_pane_t3_ParamLimits

0x48a9,	// (0x0002279f) main_location2_pane_t4_ParamLimits

0x48a9,	// (0x0002279f) main_location2_pane_t4

0xf3d4,	// (0x0002d2ca) main_location2_pane_t_ParamLimits

0xa372,	// (0x00028268) find_pinb_pane_g2_ParamLimits

0xa372,	// (0x00028268) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0002d018) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0002d018) find_pinb_pane_g

0xa37e,	// (0x00028274) find_pinb_pane_t1_ParamLimits

0xa390,	// (0x00028286) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0002d01d) find_pinb_pane_t_ParamLimits

0xa0db,	// (0x00027fd1) main_call3_pane

0x3eb8,	// (0x00021dae) cale_month_day_heading_pane_t1_ParamLimits

0x3f3e,	// (0x00021e34) cale_month_day_heading_pane_t2_ParamLimits

0x3fcf,	// (0x00021ec5) cale_month_day_heading_pane_t3_ParamLimits

0x4060,	// (0x00021f56) cale_month_day_heading_pane_t4_ParamLimits

0x40f1,	// (0x00021fe7) cale_month_day_heading_pane_t5_ParamLimits

0x4182,	// (0x00022078) cale_month_day_heading_pane_t6_ParamLimits

0x4213,	// (0x00022109) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0002d1a1) cale_month_day_heading_pane_t_ParamLimits

0xa923,	// (0x00028819) smil_status_volume_pane

0x4f4d,	// (0x00022e43) postcard_address_pane_ParamLimits

0x4f4d,	// (0x00022e43) postcard_address_pane

0x4f59,	// (0x00022e4f) postcard_message_pane_ParamLimits

0x4f59,	// (0x00022e4f) postcard_message_pane

0x5354,	// (0x0002324a) call2_cli_visual_pane_t1_ParamLimits

0x5354,	// (0x0002324a) call2_cli_visual_pane_t1

0x57e2,	// (0x000236d8) postcard_message_pane_t1_ParamLimits

0x57e2,	// (0x000236d8) postcard_message_pane_t1

0x57cb,	// (0x000236c1) postcard_address_pane_t1_ParamLimits

0x57cb,	// (0x000236c1) postcard_address_pane_t1

0x57bc,	// (0x000236b2) popup_call3_audio_in_window_ParamLimits

0x57bc,	// (0x000236b2) popup_call3_audio_in_window

0x56a0,	// (0x00023596) bg_popup_call3_in_pane_ParamLimits

0x56a0,	// (0x00023596) bg_popup_call3_in_pane

0x5702,	// (0x000235f8) popup_call3_audio_in_window_g1_ParamLimits

0x5702,	// (0x000235f8) popup_call3_audio_in_window_g1

0x571a,	// (0x00023610) popup_call3_audio_in_window_g2_ParamLimits

0x571a,	// (0x00023610) popup_call3_audio_in_window_g2

0x5732,	// (0x00023628) popup_call3_audio_in_window_g3_ParamLimits

0x5732,	// (0x00023628) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0002d50d) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0002d50d) popup_call3_audio_in_window_g

0x575a,	// (0x00023650) popup_call3_audio_in_window_t1_ParamLimits

0x575a,	// (0x00023650) popup_call3_audio_in_window_t1

0x5782,	// (0x00023678) popup_call3_audio_in_window_t2_ParamLimits

0x5782,	// (0x00023678) popup_call3_audio_in_window_t2

0x57aa,	// (0x000236a0) popup_call3_audio_in_window_t3_ParamLimits

0x57aa,	// (0x000236a0) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x0002d516) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x0002d516) popup_call3_audio_in_window_t

0xb03b,	// (0x00028f31) bg_popup_call3_rect_pane

0xc2b4,	// (0x0002a1aa) bg_popup_call3_rect_pane_g1

0xa4ea,	// (0x000283e0) bg_popup_call3_rect_pane_g2

0xc2bc,	// (0x0002a1b2) bg_popup_call3_rect_pane_g3

0xc2c4,	// (0x0002a1ba) bg_popup_call3_rect_pane_g4

0xc2cc,	// (0x0002a1c2) bg_popup_call3_rect_pane_g5

0xc2d4,	// (0x0002a1ca) bg_popup_call3_rect_pane_g6

0xc2dc,	// (0x0002a1d2) bg_popup_call3_rect_pane_g7

0x4bcf,	// (0x00022ac5) mup_visualizer_osc_pane

0xb0fa,	// (0x00028ff0) mup_visualizer_spec_pane

0x56c0,	// (0x000235b6) call3_video_qcif_pane_ParamLimits

0x56c0,	// (0x000235b6) call3_video_qcif_pane

0x56d2,	// (0x000235c8) call3_video_qcif_uncrop_pane_ParamLimits

0x56d2,	// (0x000235c8) call3_video_qcif_uncrop_pane

0x56e0,	// (0x000235d6) call3_video_subqcif_pane_ParamLimits

0x56e0,	// (0x000235d6) call3_video_subqcif_pane

0x56f2,	// (0x000235e8) call3_video_subqcif_uncrop_pane_ParamLimits

0x56f2,	// (0x000235e8) call3_video_subqcif_uncrop_pane

0x574a,	// (0x00023640) popup_call3_audio_in_window_g4_ParamLimits

0x574a,	// (0x00023640) popup_call3_audio_in_window_g4

0x568f,	// (0x00023585) mup_spec_half_pane

0x5698,	// (0x0002358e) mup_spec_half_pane_cp

0xc519,	// (0x0002a40f) mup_osc_middle_pane

0xc522,	// (0x0002a418) mup_visualizer_osc_pane_g1

0x5670,	// (0x00023566) mup_spec_bar_pane_ParamLimits

0x5670,	// (0x00023566) mup_spec_bar_pane

0xc506,	// (0x0002a3fc) mup_spec_bar_pane_g1

0xc510,	// (0x0002a406) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0002d501) mup_spec_bar_pane_g

0x2ba5,	// (0x00020a9b) aid_cale_week_size_cell_pane_ParamLimits

0x2bba,	// (0x00020ab0) bg_cale_heading_pane_ParamLimits

0xa527,	// (0x0002841d) bg_cale_pane_cp01_ParamLimits

0x2bdc,	// (0x00020ad2) cale_week_corner_pane_ParamLimits

0x2bf6,	// (0x00020aec) cale_week_day_heading_pane_ParamLimits

0x2c18,	// (0x00020b0e) cale_week_scroll_pane_g1_ParamLimits

0x2c35,	// (0x00020b2b) cale_week_scroll_pane_g2_ParamLimits

0x2c48,	// (0x00020b3e) cale_week_scroll_pane_g3_ParamLimits

0x2c5b,	// (0x00020b51) cale_week_scroll_pane_g4_ParamLimits

0x2c6e,	// (0x00020b64) cale_week_scroll_pane_g5_ParamLimits

0x2c81,	// (0x00020b77) cale_week_scroll_pane_g6_ParamLimits

0x2c94,	// (0x00020b8a) cale_week_scroll_pane_g7_ParamLimits

0x2ca7,	// (0x00020b9d) cale_week_scroll_pane_g8_ParamLimits

0x2cbc,	// (0x00020bb2) cale_week_scroll_pane_g9_ParamLimits

0x2ccf,	// (0x00020bc5) cale_week_scroll_pane_g10_ParamLimits

0x2ce2,	// (0x00020bd8) cale_week_scroll_pane_g11_ParamLimits

0x2cf5,	// (0x00020beb) cale_week_scroll_pane_g12_ParamLimits

0x2d0c,	// (0x00020c02) cale_week_scroll_pane_g13_ParamLimits

0x2d27,	// (0x00020c1d) cale_week_scroll_pane_g14_ParamLimits

0x2d42,	// (0x00020c38) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0002d0a9) cale_week_scroll_pane_g_ParamLimits

0x2d5d,	// (0x00020c53) cale_week_time_pane_ParamLimits

0x2d72,	// (0x00020c68) grid_cale_week_pane_ParamLimits

0xa545,	// (0x0002843b) listscroll_cale_week_pane_t1

0xa557,	// (0x0002844d) scroll_pane_cp08_ParamLimits

0x39cd,	// (0x000218c3) cale_month_corner_pane_ParamLimits

0xa8f9,	// (0x000287ef) cale_month_pane_t1

0x3e55,	// (0x00021d4b) cale_month_week_pane_ParamLimits

0xafed,	// (0x00028ee3) popup_call_status_window_g1_ParamLimits

0x4707,	// (0x000225fd) popup_call_status_window_g2_ParamLimits

0x4713,	// (0x00022609) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0002d251) popup_call_status_window_g_ParamLimits

0xac9d,	// (0x00028b93) aid_call2_pane

0x4e6b,	// (0x00022d61) msg_header_pane_g1

0x4f4d,	// (0x00022e43) postcard_address2_pane_ParamLimits

0x4f4d,	// (0x00022e43) postcard_address2_pane

0x4f59,	// (0x00022e4f) postcard_message2_pane_ParamLimits

0x4f59,	// (0x00022e4f) postcard_message2_pane

0x5608,	// (0x000234fe) message2_row_pane_ParamLimits

0x5608,	// (0x000234fe) message2_row_pane

0x5623,	// (0x00023519) address2_row_pane_ParamLimits

0x5623,	// (0x00023519) address2_row_pane

0xc4d4,	// (0x0002a3ca) postcard_message2_row_pane_g1

0xc4dc,	// (0x0002a3d2) postcard_message2_row_pane_t1

0xc4d4,	// (0x0002a3ca) address2_row_pane_g1

0xc4dc,	// (0x0002a3d2) address2_row_pane_t1

0x1410,	// (0x0001f306) aid_size_cell_vorec

0xa0db,	// (0x00027fd1) main_rss_pane

0x5636,	// (0x0002352c) rss_list_single_pane_ParamLimits

0x5636,	// (0x0002352c) rss_list_single_pane

0xc4ea,	// (0x0002a3e0) rss_list_single_pane_t1

0xc4f8,	// (0x0002a3ee) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x0002d4fc) rss_list_single_pane_t

0xa0db,	// (0x00027fd1) main_camera2_pane

0xa0db,	// (0x00027fd1) main_video2_pane

0x17c6,	// (0x0001f6bc) cams_zoom_pane_cp2_ParamLimits

0x17c6,	// (0x0001f6bc) cams_zoom_pane_cp2

0x17d2,	// (0x0001f6c8) image2_vga_pane_ParamLimits

0x17d2,	// (0x0001f6c8) image2_vga_pane

0x17e1,	// (0x0001f6d7) main_camera2_pane_g1_ParamLimits

0x17e1,	// (0x0001f6d7) main_camera2_pane_g1

0x17ed,	// (0x0001f6e3) main_camera2_pane_g2_ParamLimits

0x17ed,	// (0x0001f6e3) main_camera2_pane_g2

0x17f9,	// (0x0001f6ef) main_camera2_pane_g3_ParamLimits

0x17f9,	// (0x0001f6ef) main_camera2_pane_g3

0x1805,	// (0x0001f6fb) main_camera2_pane_g4_ParamLimits

0x1805,	// (0x0001f6fb) main_camera2_pane_g4

0x1811,	// (0x0001f707) main_camera2_pane_g5_ParamLimits

0x1811,	// (0x0001f707) main_camera2_pane_g5

0x181d,	// (0x0001f713) main_camera2_pane_g6_ParamLimits

0x181d,	// (0x0001f713) main_camera2_pane_g6

0x1829,	// (0x0001f71f) main_camera2_pane_g7_ParamLimits

0x1829,	// (0x0001f71f) main_camera2_pane_g7

0x1835,	// (0x0001f72b) main_camera2_pane_g8_ParamLimits

0x1835,	// (0x0001f72b) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0002d51d) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0002d51d) main_camera2_pane_g

0x184d,	// (0x0001f743) main_camera2_pane_t1_ParamLimits

0x184d,	// (0x0001f743) main_camera2_pane_t1

0x185f,	// (0x0001f755) main_camera2_pane_t2_ParamLimits

0x185f,	// (0x0001f755) main_camera2_pane_t2

0x1871,	// (0x0001f767) main_camera2_pane_t3_ParamLimits

0x1871,	// (0x0001f767) main_camera2_pane_t3

0x1883,	// (0x0001f779) main_camera2_pane_t4_ParamLimits

0x1883,	// (0x0001f779) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0002d530) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0002d530) main_camera2_pane_t

0x18e5,	// (0x0001f7db) cams_zoom_pane_cp4_ParamLimits

0x18e5,	// (0x0001f7db) cams_zoom_pane_cp4

0x18f5,	// (0x0001f7eb) image2_cif_pane_ParamLimits

0x18f5,	// (0x0001f7eb) image2_cif_pane

0x190a,	// (0x0001f800) image2_subqcif_pane_ParamLimits

0x190a,	// (0x0001f800) image2_subqcif_pane

0x1919,	// (0x0001f80f) main_video2_pane_g1_ParamLimits

0x1919,	// (0x0001f80f) main_video2_pane_g1

0x192b,	// (0x0001f821) main_video2_pane_g2_ParamLimits

0x192b,	// (0x0001f821) main_video2_pane_g2

0x193b,	// (0x0001f831) main_video2_pane_g3_ParamLimits

0x193b,	// (0x0001f831) main_video2_pane_g3

0x194b,	// (0x0001f841) main_video2_pane_g4_ParamLimits

0x194b,	// (0x0001f841) main_video2_pane_g4

0x195b,	// (0x0001f851) main_video2_pane_g5_ParamLimits

0x195b,	// (0x0001f851) main_video2_pane_g5

0x196b,	// (0x0001f861) main_video2_pane_g6_ParamLimits

0x196b,	// (0x0001f861) main_video2_pane_g6

0x0005,

0xf649,	// (0x0002d53f) main_video2_pane_g_ParamLimits

0xf649,	// (0x0002d53f) main_video2_pane_g

0x197d,	// (0x0001f873) main_video2_pane_t1_ParamLimits

0x197d,	// (0x0001f873) main_video2_pane_t1

0x1997,	// (0x0001f88d) main_video2_pane_t2_ParamLimits

0x1997,	// (0x0001f88d) main_video2_pane_t2

0x19bd,	// (0x0001f8b3) main_video2_pane_t3_ParamLimits

0x19bd,	// (0x0001f8b3) main_video2_pane_t3

0x0002,

0xf656,	// (0x0002d54c) main_video2_pane_t_ParamLimits

0xf656,	// (0x0002d54c) main_video2_pane_t

0x54a6,	// (0x0002339c) call_muted_g2

0x0001,

0xf5f8,	// (0x0002d4ee) call_muted_g

0xa0db,	// (0x00027fd1) main_mup2_pane

0xc559,	// (0x0002a44f) main_mup2_pane_g1_ParamLimits

0xc559,	// (0x0002a44f) main_mup2_pane_g1

0x57fd,	// (0x000236f3) main_mup2_pane_g2_ParamLimits

0x57fd,	// (0x000236f3) main_mup2_pane_g2

0x1a0c,	// (0x0001f902) main_mup_pane_g13_cp1

0x1a14,	// (0x0001f90a) mup_volume_pane_cp1

0x581d,	// (0x00023713) main_mup2_pane_g4_ParamLimits

0x581d,	// (0x00023713) main_mup2_pane_g4

0x5832,	// (0x00023728) main_mup2_pane_g5_ParamLimits

0x5832,	// (0x00023728) main_mup2_pane_g5

0x5847,	// (0x0002373d) main_mup2_pane_g6_ParamLimits

0x5847,	// (0x0002373d) main_mup2_pane_g6

0x585c,	// (0x00023752) main_mup2_pane_g7_ParamLimits

0x585c,	// (0x00023752) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x0002d553) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x0002d553) main_mup2_pane_g

0x5878,	// (0x0002376e) main_mup2_pane_t1_ParamLimits

0x5878,	// (0x0002376e) main_mup2_pane_t1

0x588f,	// (0x00023785) main_mup2_pane_t2_ParamLimits

0x588f,	// (0x00023785) main_mup2_pane_t2

0x58a6,	// (0x0002379c) main_mup2_pane_t3_ParamLimits

0x58a6,	// (0x0002379c) main_mup2_pane_t3

0x58bd,	// (0x000237b3) main_mup2_pane_t4_ParamLimits

0x58bd,	// (0x000237b3) main_mup2_pane_t4

0x58d7,	// (0x000237cd) main_mup2_pane_t5_ParamLimits

0x58d7,	// (0x000237cd) main_mup2_pane_t5

0x58f1,	// (0x000237e7) main_mup2_pane_t6_ParamLimits

0x58f1,	// (0x000237e7) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x0002d562) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x0002d562) main_mup2_pane_t

0x5929,	// (0x0002381f) mup2_visualizer_pane_ParamLimits

0x5929,	// (0x0002381f) mup2_visualizer_pane

0x595f,	// (0x00023855) mup_progress_pane_cp_ParamLimits

0x595f,	// (0x00023855) mup_progress_pane_cp

0x19f7,	// (0x0001f8ed) mup_volume_pane_cp_ParamLimits

0x19f7,	// (0x0001f8ed) mup_volume_pane_cp

0x5976,	// (0x0002386c) mup2_visualizer_pane_g1_ParamLimits

0x5976,	// (0x0002386c) mup2_visualizer_pane_g1

0xc565,	// (0x0002a45b) mup2_visualizer_pane_g2_ParamLimits

0xc565,	// (0x0002a45b) mup2_visualizer_pane_g2

0x598b,	// (0x00023881) mup2_visualizer_pane_g3_ParamLimits

0x598b,	// (0x00023881) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x0002d56f) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x0002d56f) mup2_visualizer_pane_g

0xb399,	// (0x0002928f) aid_size_cell_fmradio

0x15cf,	// (0x0001f4c5) aid_height_parent_landcape

0xa757,	// (0x0002864d) wml_content_pane_cp

0xa75f,	// (0x00028655) wml_tabs_pane

0xa768,	// (0x0002865e) popup_wml_miniature_window

0xa770,	// (0x00028666) scroll_pane_cp021

0xa784,	// (0x0002867a) wml_content_pane_comp8

0xa0db,	// (0x00027fd1) bg_popup_sub_pane_cp05

0xc583,	// (0x0002a479) popup_wml_miniature_window_g1

0xc58b,	// (0x0002a481) wml_miniature_view_pane

0x5999,	// (0x0002388f) aid_size_wml_view

0x59a1,	// (0x00023897) wml_miniature_view_pane_g1

0x59aa,	// (0x000238a0) wml_miniature_view_pane_g2

0x59b3,	// (0x000238a9) wml_miniature_view_pane_g3

0x59bb,	// (0x000238b1) wml_miniature_view_pane_g4

0x59c3,	// (0x000238b9) wml_miniature_view_pane_g5

0x59cb,	// (0x000238c1) wml_miniature_view_pane_g6

0x59d3,	// (0x000238c9) wml_miniature_view_pane_g7

0x59db,	// (0x000238d1) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x0002d576) wml_miniature_view_pane_g

0xc559,	// (0x0002a44f) background_graphic_ParamLimits

0xc559,	// (0x0002a44f) background_graphic

0xc593,	// (0x0002a489) wml_tabs_2_pane

0xc59c,	// (0x0002a492) wml_tabs_3_pane_ParamLimits

0xc59c,	// (0x0002a492) wml_tabs_3_pane

0xc5b7,	// (0x0002a4ad) wml_tabs_4_pane_ParamLimits

0xc5b7,	// (0x0002a4ad) wml_tabs_4_pane

0xc5cd,	// (0x0002a4c3) wml_tabs_5_pane_ParamLimits

0xc5cd,	// (0x0002a4c3) wml_tabs_5_pane

0xc5e7,	// (0x0002a4dd) wml_tabs_pane_g2_ParamLimits

0xc5e7,	// (0x0002a4dd) wml_tabs_pane_g2

0xc5fb,	// (0x0002a4f1) wml_tabs_pane_g3_ParamLimits

0xc5fb,	// (0x0002a4f1) wml_tabs_pane_g3

0x59e3,	// (0x000238d9) wml_tabs_2_active_pane_ParamLimits

0x59e3,	// (0x000238d9) wml_tabs_2_active_pane

0x59f3,	// (0x000238e9) wml_tabs_2_passive_pane_ParamLimits

0x59f3,	// (0x000238e9) wml_tabs_2_passive_pane

0x5a03,	// (0x000238f9) wml_tabs_3_active_pane_cp_ParamLimits

0x5a03,	// (0x000238f9) wml_tabs_3_active_pane_cp

0x5a14,	// (0x0002390a) wml_tabs_3_passive_pane_ParamLimits

0x5a14,	// (0x0002390a) wml_tabs_3_passive_pane

0x5a25,	// (0x0002391b) wml_tabs_3_passive_pane_cp_ParamLimits

0x5a25,	// (0x0002391b) wml_tabs_3_passive_pane_cp

0x5a36,	// (0x0002392c) tabs_4_active_pane

0x5a3e,	// (0x00023934) tabs_4_passive_pane

0x5a46,	// (0x0002393c) tabs_4_passive_pane_cp

0x5a4e,	// (0x00023944) tabs_4_passive_pane_cp2

0x5381,	// (0x00023277) aid_height_text

0x4b9c,	// (0x00022a92) mup_volume_cont_pane_ParamLimits

0x4b9c,	// (0x00022a92) mup_volume_cont_pane

0x2880,	// (0x00020776) aid_size_cell_pinb

0x288a,	// (0x00020780) aid_size_list_pinb

0x5948,	// (0x0002383e) mup2_volume_cont_pane_ParamLimits

0x5948,	// (0x0002383e) mup2_volume_cont_pane

0x19e3,	// (0x0001f8d9) mup2_volume_cont_pane_g1_ParamLimits

0x19e3,	// (0x0001f8d9) mup2_volume_cont_pane_g1

0x0e9e,	// (0x0001ed94) aid_size_cell_touch_ParamLimits

0x0e9e,	// (0x0001ed94) aid_size_cell_touch

0x1126,	// (0x0001f01c) touch_pane_ParamLimits

0x1126,	// (0x0001f01c) touch_pane

0x111c,	// (0x0001f012) main_rss2_pane

0xc618,	// (0x0002a50e) listscroll_rss2_pane

0xc621,	// (0x0002a517) rss2_navigation_pane

0xc629,	// (0x0002a51f) list_rss2_pane

0xade0,	// (0x00028cd6) scroll_pane_cp22

0xc631,	// (0x0002a527) rss2_navigation_pane_g1

0xc63a,	// (0x0002a530) rss2_navigation_pane_g2

0xc642,	// (0x0002a538) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x0002d587) rss2_navigation_pane_g

0xc64a,	// (0x0002a540) rss2_navigation_pane_t1

0x5a56,	// (0x0002394c) rss2_list_single_pane_ParamLimits

0x5a56,	// (0x0002394c) rss2_list_single_pane

0xc658,	// (0x0002a54e) rss2_list_single_pane_t2

0xc666,	// (0x0002a55c) rss2_list_single_pane_t3_ParamLimits

0xc666,	// (0x0002a55c) rss2_list_single_pane_t3

0xc683,	// (0x0002a579) rss2_list_single_pane_t4

0x44b9,	// (0x000223af) smil_status_pane_g1

0x15e6,	// (0x0001f4dc) main_image2_pane_ParamLimits

0x15e6,	// (0x0001f4dc) main_image2_pane

0x1841,	// (0x0001f737) main_camera2_pane_g9_ParamLimits

0x1841,	// (0x0001f737) main_camera2_pane_g9

0x1895,	// (0x0001f78b) main_camera2_pane_t5_ParamLimits

0x1895,	// (0x0001f78b) main_camera2_pane_t5

0x18a7,	// (0x0001f79d) main_camera2_pane_t6_ParamLimits

0x18a7,	// (0x0001f79d) main_camera2_pane_t6

0x5a87,	// (0x0002397d) main_image2_pane_g1_ParamLimits

0x5a87,	// (0x0002397d) main_image2_pane_g1

0x5121,	// (0x00023017) smil2_video_pane_ParamLimits

0x5121,	// (0x00023017) smil2_video_pane

0x0ed2,	// (0x0001edc8) aid_zoom_text_primary_cp

0x10c3,	// (0x0001efb9) popup_preview_fixed_window

0xa6c0,	// (0x000285b6) im_reading_pane_g1

0x178b,	// (0x0001f681) cams2_bc_adjust_pane_cp_ParamLimits

0x178b,	// (0x0001f681) cams2_bc_adjust_pane_cp

0x18d7,	// (0x0001f7cd) cams2_bc_adjust_pane_ParamLimits

0x18d7,	// (0x0001f7cd) cams2_bc_adjust_pane

0xd9cc,	// (0x0002b8c2) cams2_bc_adjust_pane_g1

0x1a1c,	// (0x0001f912) cams2_slider_pane

0x1a25,	// (0x0001f91b) cams2_slider_pane_g1

0x1a2e,	// (0x0001f924) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x0002d58e) cams2_slider_pane_g

0x1197,	// (0x0001f08d) calc_display_pane_ParamLimits

0x11b5,	// (0x0001f0ab) calc_paper_pane_ParamLimits

0x11d1,	// (0x0001f0c7) grid_calc_pane_ParamLimits

0x153a,	// (0x0001f430) popup_clock_digital_window_t1_ParamLimits

0xb336,	// (0x0002922c) main_image_pane_t1

0x117d,	// (0x0001f073) aid_size_cell_calc_ParamLimits

0x117d,	// (0x0001f073) aid_size_cell_calc

0x1617,	// (0x0001f50d) popup_blid_sat_info2_window_ParamLimits

0x1617,	// (0x0001f50d) popup_blid_sat_info2_window

0xc699,	// (0x0002a58f) aid_size_cell_blid

0xc6a1,	// (0x0002a597) bg_popup_window_pane_cp07

0xc6c4,	// (0x0002a5ba) grid_popup_blid_pane

0xc6ce,	// (0x0002a5c4) heading_pane_cp05_ParamLimits

0xc6ce,	// (0x0002a5c4) heading_pane_cp05

0xc798,	// (0x0002a68e) cell_popup_blid_pane_ParamLimits

0xc798,	// (0x0002a68e) cell_popup_blid_pane

0xc7bc,	// (0x0002a6b2) cell_popup_blid_pane_g1

0xc7c4,	// (0x0002a6ba) cell_popup_blid_pane_t1

0x590e,	// (0x00023804) mup2_indicator_pane_ParamLimits

0x590e,	// (0x00023804) mup2_indicator_pane

0xb03b,	// (0x00028f31) mup2_visualizer_osc_pane

0xc571,	// (0x0002a467) mup2_visualizer_spec_pane_ParamLimits

0xc571,	// (0x0002a467) mup2_visualizer_spec_pane

0x5a93,	// (0x00023989) mup2_spec_half_pane

0x5a9c,	// (0x00023992) mup2_spec_half_pane_cp

0x5aa6,	// (0x0002399c) mup2_spec_bar_pane_ParamLimits

0x5aa6,	// (0x0002399c) mup2_spec_bar_pane

0xc506,	// (0x0002a3fc) mup2_spec_bar_pane_g1

0xc510,	// (0x0002a406) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0002d501) mup2_spec_bar_pane_g

0x5ac5,	// (0x000239bb) mup2_osc_middle_pane

0xc522,	// (0x0002a418) mup2_visualizer_osc_pane_g1

0x9ce8,	// (0x00027bde) popup_number_entry_window_t1_ParamLimits

0x9cfb,	// (0x00027bf1) popup_number_entry_window_t2_ParamLimits

0x9d0d,	// (0x00027c03) popup_number_entry_window_t3_ParamLimits

0x27bd,	// (0x000206b3) popup_number_entry_window_t5_ParamLimits

0x27bd,	// (0x000206b3) popup_number_entry_window_t5

0xf0cd,	// (0x0002cfc3) popup_number_entry_window_t_ParamLimits

0x9d1f,	// (0x00027c15) text_title_cp2_ParamLimits

0x1579,	// (0x0001f46f) aid_hotspot_pointer_text2_pane

0x15c3,	// (0x0001f4b9) main_viewer_pane_g9_ParamLimits

0x15c3,	// (0x0001f4b9) main_viewer_pane_g9

0xa8f9,	// (0x000287ef) cale_month_pane_t1_ParamLimits

0xa936,	// (0x0002882c) bg_cale_pane_ParamLimits

0xa94e,	// (0x00028844) list_cale_pane_ParamLimits

0xa95f,	// (0x00028855) listscroll_cale_day_pane_t1

0xa971,	// (0x00028867) scroll_pane_cp09_ParamLimits

0x4bd7,	// (0x00022acd) main_mup_eq_pane_t1_ParamLimits

0x4bd7,	// (0x00022acd) main_mup_eq_pane_t1

0x4bf1,	// (0x00022ae7) main_mup_eq_pane_t2_ParamLimits

0x4bf1,	// (0x00022ae7) main_mup_eq_pane_t2

0x4c0b,	// (0x00022b01) main_mup_eq_pane_t3_ParamLimits

0x4c0b,	// (0x00022b01) main_mup_eq_pane_t3

0x4c23,	// (0x00022b19) main_mup_eq_pane_t4_ParamLimits

0x4c23,	// (0x00022b19) main_mup_eq_pane_t4

0x4c3b,	// (0x00022b31) main_mup_eq_pane_t5_ParamLimits

0x4c3b,	// (0x00022b31) main_mup_eq_pane_t5

0x4c53,	// (0x00022b49) main_mup_eq_pane_t6_ParamLimits

0x4c53,	// (0x00022b49) main_mup_eq_pane_t6

0x4c67,	// (0x00022b5d) main_mup_eq_pane_t7_ParamLimits

0x4c67,	// (0x00022b5d) main_mup_eq_pane_t7

0x4c7b,	// (0x00022b71) main_mup_eq_pane_t8_ParamLimits

0x4c7b,	// (0x00022b71) main_mup_eq_pane_t8

0x4c91,	// (0x00022b87) main_mup_eq_pane_t9_ParamLimits

0x4c91,	// (0x00022b87) main_mup_eq_pane_t9

0x4ca9,	// (0x00022b9f) main_mup_eq_pane_t10_ParamLimits

0x4ca9,	// (0x00022b9f) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0002d350) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0002d350) main_mup_eq_pane_t

0x4d66,	// (0x00022c5c) mup_equalizer_pane_cp5_ParamLimits

0x4d7c,	// (0x00022c72) mup_equalizer_pane_cp6_ParamLimits

0x4d94,	// (0x00022c8a) mup_equalizer_pane_cp7_ParamLimits

0x111c,	// (0x0001f012) main_gallery_pane

0xc52b,	// (0x0002a421) smil2_volume_pane

0xc533,	// (0x0002a429) smil_status_volume_pane_g1_ParamLimits

0xc546,	// (0x0002a43c) smil_status_volume_pane_g2_ParamLimits

0x175b,	// (0x0001f651) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x0002d506) smil_status_volume_pane_g_ParamLimits

0xc6a1,	// (0x0002a597) bg_popup_window_pane_cp07_ParamLimits

0xc6af,	// (0x0002a5a5) blid_firmament_pane

0x5ace,	// (0x000239c4) aid_size_cell_gallery_ParamLimits

0x5ace,	// (0x000239c4) aid_size_cell_gallery

0x5adc,	// (0x000239d2) grid_gallery_pane_ParamLimits

0x5adc,	// (0x000239d2) grid_gallery_pane

0x5aec,	// (0x000239e2) cell_gallery_pane_ParamLimits

0x5aec,	// (0x000239e2) cell_gallery_pane

0xc7d2,	// (0x0002a6c8) bg_cell_gallery_focus_pane_ParamLimits

0xc7d2,	// (0x0002a6c8) bg_cell_gallery_focus_pane

0xc7e4,	// (0x0002a6da) cell_gallery_pane_g1_ParamLimits

0xc7e4,	// (0x0002a6da) cell_gallery_pane_g1

0x5b3a,	// (0x00023a30) cell_gallery_pane_g2_ParamLimits

0x5b3a,	// (0x00023a30) cell_gallery_pane_g2

0x5b47,	// (0x00023a3d) cell_gallery_pane_g3_ParamLimits

0x5b47,	// (0x00023a3d) cell_gallery_pane_g3

0xc7f0,	// (0x0002a6e6) cell_gallery_pane_g4_ParamLimits

0xc7f0,	// (0x0002a6e6) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x0002d5b4) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x0002d5b4) cell_gallery_pane_g

0xc7fc,	// (0x0002a6f2) bg_cell_gallery_focus_pane_g1

0xc804,	// (0x0002a6fa) bg_cell_gallery_focus_pane_g2

0xc80c,	// (0x0002a702) bg_cell_gallery_focus_pane_g3

0xc814,	// (0x0002a70a) bg_cell_gallery_focus_pane_g4

0xc81c,	// (0x0002a712) bg_cell_gallery_focus_pane_g5

0xc824,	// (0x0002a71a) bg_cell_gallery_focus_pane_g6

0xc82c,	// (0x0002a722) bg_cell_gallery_focus_pane_g7

0xc834,	// (0x0002a72a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x0002d5bd) bg_cell_gallery_focus_pane_g

0xc83c,	// (0x0002a732) aid_firma_cardinal

0xc850,	// (0x0002a746) blid_firmament_pane_t1

0xc867,	// (0x0002a75d) blid_firmament_pane_t2

0xc87e,	// (0x0002a774) blid_firmament_pane_t3

0xc895,	// (0x0002a78b) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x0002d5ce) blid_firmament_pane_t

0xc8ac,	// (0x0002a7a2) blid_sat_info_pane

0xc8bc,	// (0x0002a7b2) blid_sat_info_pane_g1

0xc8bc,	// (0x0002a7b2) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x0002d5d7) blid_sat_info_pane_g

0xc8c6,	// (0x0002a7bc) blid_sat_info_pane_t1

0xc8d4,	// (0x0002a7ca) smil2_volume_content_pane

0xc8dd,	// (0x0002a7d3) smil2_volume_pane_g1

0xc5ae,	// (0x0002a4a4) smil2_volume_content_pane_g1

0xc8e5,	// (0x0002a7db) smil2_volume_content_pane_g2

0xc8ee,	// (0x0002a7e4) smil2_volume_content_pane_g3

0xc8f7,	// (0x0002a7ed) smil2_volume_content_pane_g4

0xc900,	// (0x0002a7f6) smil2_volume_content_pane_g5

0xc909,	// (0x0002a7ff) smil2_volume_content_pane_g6

0xc912,	// (0x0002a808) smil2_volume_content_pane_g7

0xc91b,	// (0x0002a811) smil2_volume_content_pane_g8

0xc924,	// (0x0002a81a) smil2_volume_content_pane_g9

0xc92d,	// (0x0002a823) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x0002d5dc) smil2_volume_content_pane_g

0x2df3,	// (0x00020ce9) cale_week_day_heading_pane_t1_ParamLimits

0x2e2e,	// (0x00020d24) cale_week_day_heading_pane_t2_ParamLimits

0x2e69,	// (0x00020d5f) cale_week_day_heading_pane_t3_ParamLimits

0x2ea4,	// (0x00020d9a) cale_week_day_heading_pane_t4_ParamLimits

0x2edf,	// (0x00020dd5) cale_week_day_heading_pane_t5_ParamLimits

0x2f1a,	// (0x00020e10) cale_week_day_heading_pane_t6_ParamLimits

0x2f55,	// (0x00020e4b) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0002d0c8) cale_week_day_heading_pane_t_ParamLimits

0xa574,	// (0x0002846a) bg_cale_side_pane_ParamLimits

0x1328,	// (0x0001f21e) cale_week_time_pane_t1_ParamLimits

0x1342,	// (0x0001f238) cale_week_time_pane_t2_ParamLimits

0x135c,	// (0x0001f252) cale_week_time_pane_t3_ParamLimits

0x1376,	// (0x0001f26c) cale_week_time_pane_t4_ParamLimits

0x1390,	// (0x0001f286) cale_week_time_pane_t5_ParamLimits

0x13aa,	// (0x0001f2a0) cale_week_time_pane_t6_ParamLimits

0x13ca,	// (0x0001f2c0) cale_week_time_pane_t7_ParamLimits

0x13ec,	// (0x0001f2e2) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0002d0d7) cale_week_time_pane_t_ParamLimits

0x2f90,	// (0x00020e86) cell_cale_week_pane_g2_ParamLimits

0xa574,	// (0x0002846a) bg_cale_side_pane_cp01_ParamLimits

0x42bc,	// (0x000221b2) cale_month_week_pane_t1_ParamLimits

0x42d5,	// (0x000221cb) cale_month_week_pane_t2_ParamLimits

0x42ee,	// (0x000221e4) cale_month_week_pane_t3_ParamLimits

0x4307,	// (0x000221fd) cale_month_week_pane_t4_ParamLimits

0x4320,	// (0x00022216) cale_month_week_pane_t5_ParamLimits

0x4341,	// (0x00022237) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0002d1b0) cale_month_week_pane_t_ParamLimits

0x1496,	// (0x0001f38c) cell_cale_month_pane_g1_ParamLimits

0x111c,	// (0x0001f012) main_cale_event_viewer_pane

0x9cbe,	// (0x00027bb4) listscroll_cale_event_viewer_pane

0xc936,	// (0x0002a82c) list_cale_ev_pane

0xc93e,	// (0x0002a834) scroll_pane_cp023

0xc94a,	// (0x0002a840) field_cale_ev_pane_ParamLimits

0xc94a,	// (0x0002a840) field_cale_ev_pane

0xc968,	// (0x0002a85e) field_cale_ev_content_pane_ParamLimits

0xc968,	// (0x0002a85e) field_cale_ev_content_pane

0xc974,	// (0x0002a86a) field_cale_ev_pane_g1_ParamLimits

0xc974,	// (0x0002a86a) field_cale_ev_pane_g1

0xc980,	// (0x0002a876) field_cale_ev_pane_g2_ParamLimits

0xc980,	// (0x0002a876) field_cale_ev_pane_g2

0xc998,	// (0x0002a88e) field_cale_ev_pane_g3_ParamLimits

0xc998,	// (0x0002a88e) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x0002d5f1) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x0002d5f1) field_cale_ev_pane_g

0xc9b0,	// (0x0002a8a6) field_cale_ev_pane_t1_ParamLimits

0xc9b0,	// (0x0002a8a6) field_cale_ev_pane_t1

0xc9c7,	// (0x0002a8bd) field_cale_ev_content_pane_t1_ParamLimits

0xc9c7,	// (0x0002a8bd) field_cale_ev_content_pane_t1

0x4e62,	// (0x00022d58) bg_button_pane_cp01

0x2b95,	// (0x00020a8b) listscroll_cale_week_pane_ParamLimits

0xa51e,	// (0x00028414) popup_toolbar_window_cp01

0xa545,	// (0x0002843b) listscroll_cale_week_pane_t1_ParamLimits

0x2b95,	// (0x00020a8b) listscroll_cale_day_pane_ParamLimits

0xa51e,	// (0x00028414) popup_toolbar_window_cp02

0xa95f,	// (0x00028855) listscroll_cale_day_pane_t1_ParamLimits

0x2b95,	// (0x00020a8b) main_cale_month_pane_ParamLimits

0x171e,	// (0x0001f614) popup_toolbar_window_cp03_ParamLimits

0x171e,	// (0x0001f614) popup_toolbar_window_cp03

0x5037,	// (0x00022f2d) main_image_pane_g2_ParamLimits

0x5037,	// (0x00022f2d) main_image_pane_g2

0x5043,	// (0x00022f39) main_image_pane_g3_ParamLimits

0x5043,	// (0x00022f39) main_image_pane_g3

0x0002,

0xf4ec,	// (0x0002d3e2) main_image_pane_g_ParamLimits

0xf4ec,	// (0x0002d3e2) main_image_pane_g

0xb336,	// (0x0002922c) main_image_pane_t1_ParamLimits

0x504f,	// (0x00022f45) main_image_pane_t2_ParamLimits

0x504f,	// (0x00022f45) main_image_pane_t2

0x5061,	// (0x00022f57) main_image_pane_t3_ParamLimits

0x5061,	// (0x00022f57) main_image_pane_t3

0x5073,	// (0x00022f69) main_image_pane_t4_ParamLimits

0x5073,	// (0x00022f69) main_image_pane_t4

0x0003,

0xf4f3,	// (0x0002d3e9) main_image_pane_t_ParamLimits

0xf4f3,	// (0x0002d3e9) main_image_pane_t

0x5085,	// (0x00022f7b) popup_image_details_window_cp01

0x508f,	// (0x00022f85) popup_toobar_trans_pane_cp01_ParamLimits

0x508f,	// (0x00022f85) popup_toobar_trans_pane_cp01

0x166e,	// (0x0001f564) popup_image_details_window_ParamLimits

0x166e,	// (0x0001f564) popup_image_details_window

0x167c,	// (0x0001f572) popup_image_focus_window

0x177d,	// (0x0001f673) camera2_autofocus_pane_ParamLimits

0x177d,	// (0x0001f673) camera2_autofocus_pane

0x9cbe,	// (0x00027bb4) bg_popup_sub_pane_cp06

0xc9e5,	// (0x0002a8db) popup_image_focus_window_g1

0xc9ed,	// (0x0002a8e3) popup_image_focus_window_g2

0xc9f5,	// (0x0002a8eb) popup_image_focus_window_g3

0xc9fd,	// (0x0002a8f3) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x0002d5f8) popup_image_focus_window_g

0xca05,	// (0x0002a8fb) popup_image_focus_window_t1

0xca13,	// (0x0002a909) popup_image_focus_window_t2

0xca23,	// (0x0002a919) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x0002d601) popup_image_focus_window_t

0xca31,	// (0x0002a927) camera2_autofocus_pane_g1

0xa3c5,	// (0x000282bb) bg_tb_trans_pane_cp01

0xca3f,	// (0x0002a935) popup_image_details_window_g1

0xca52,	// (0x0002a948) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x0002d613) popup_image_details_window_g

0xca7b,	// (0x0002a971) popup_image_details_window_t1

0xca8d,	// (0x0002a983) popup_image_details_window_t2

0xcaa6,	// (0x0002a99c) popup_image_details_window_t3

0xcaba,	// (0x0002a9b0) popup_image_details_window_t4

0xcad5,	// (0x0002a9cb) popup_image_details_window_t5

0x0004,

0xf724,	// (0x0002d61a) popup_image_details_window_t

0xa3f5,	// (0x000282eb) bg_calc_paper_pane_ParamLimits

0x111c,	// (0x0001f012) grid_highlight_pane_cp013

0x11fd,	// (0x0001f0f3) list_calc_pane_ParamLimits

0x120f,	// (0x0001f105) scroll_pane_cp024

0xa409,	// (0x000282ff) bg_calc_display_pane_ParamLimits

0x1217,	// (0x0001f10d) calc_display_pane_t1_ParamLimits

0x122c,	// (0x0001f122) calc_display_pane_t2_ParamLimits

0x1241,	// (0x0001f137) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0002d04a) calc_display_pane_t_ParamLimits

0x12aa,	// (0x0001f1a0) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0002d067) cell_calc_pane_g

0x12b3,	// (0x0001f1a9) cell_calc_pane_t1

0xa468,	// (0x0002835e) grid_highlight_pane_cp02_ParamLimits

0xa47e,	// (0x00028374) toolbar_button_pane_cp01_ParamLimits

0xa47e,	// (0x00028374) toolbar_button_pane_cp01

0xb37b,	// (0x00029271) temp_image_control_pane_ParamLimits

0xb37b,	// (0x00029271) temp_image_control_pane

0x15e6,	// (0x0001f4dc) main_mp3_pane

0xcaef,	// (0x0002a9e5) temp_image_control_pane_g1_ParamLimits

0xcaef,	// (0x0002a9e5) temp_image_control_pane_g1

0xcafd,	// (0x0002a9f3) temp_image_control_pane_g2_ParamLimits

0xcafd,	// (0x0002a9f3) temp_image_control_pane_g2

0xcb0f,	// (0x0002aa05) temp_image_control_pane_g3_ParamLimits

0xcb0f,	// (0x0002aa05) temp_image_control_pane_g3

0x5b84,	// (0x00023a7a) temp_image_control_pane_g4_ParamLimits

0x5b84,	// (0x00023a7a) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x0002d625) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x0002d625) temp_image_control_pane_g

0xcaef,	// (0x0002a9e5) main_mp3_pane_g1

0x5b95,	// (0x00023a8b) main_mp3_pane_g2

0x0007,

0xf738,	// (0x0002d62e) main_mp3_pane_g

0xcb52,	// (0x0002aa48) main_mp3_pane_t1

0xa5cf,	// (0x000284c5) main_camera_pane_g8_ParamLimits

0xa5cf,	// (0x000284c5) main_camera_pane_g8

0x31aa,	// (0x000210a0) main_video_pane_g7_ParamLimits

0x31aa,	// (0x000210a0) main_video_pane_g7

0x18c5,	// (0x0001f7bb) main_camera2_pane_t7_ParamLimits

0x18c5,	// (0x0001f7bb) main_camera2_pane_t7

0xa717,	// (0x0002860d) scroll_pane_cp025_ParamLimits

0xa717,	// (0x0002860d) scroll_pane_cp025

0xa72b,	// (0x00028621) scroll_pane_cp026_ParamLimits

0xa72b,	// (0x00028621) scroll_pane_cp026

0xa73a,	// (0x00028630) wml_content_pane_ParamLimits

0x111c,	// (0x0001f012) main_touch_calib_pane

0x5c39,	// (0x00023b2f) main_touch_calib_pane_g1

0x5c45,	// (0x00023b3b) main_touch_calib_pane_g2

0x5c51,	// (0x00023b47) main_touch_calib_pane_g3

0x5c5d,	// (0x00023b53) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x0002d64c) main_touch_calib_pane_g

0x5c69,	// (0x00023b5f) main_touch_calib_pane_t1

0x5c82,	// (0x00023b78) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x0002d655) main_touch_calib_pane_t

0xaebc,	// (0x00028db2) mup_progress_pane_cp02

0xaef1,	// (0x00028de7) navi_pane_g1

0xafac,	// (0x00028ea2) navi_pane_mp_t3

0x15e6,	// (0x0001f4dc) main_mp3_pane_ParamLimits

0x55bc,	// (0x000234b2) navi_pane_ParamLimits

0xcaef,	// (0x0002a9e5) main_mp3_pane_g1_ParamLimits

0x5b95,	// (0x00023a8b) main_mp3_pane_g2_ParamLimits

0x5ba1,	// (0x00023a97) main_mp3_pane_g3_ParamLimits

0x5ba1,	// (0x00023a97) main_mp3_pane_g3

0x5bad,	// (0x00023aa3) main_mp3_pane_g4_ParamLimits

0x5bad,	// (0x00023aa3) main_mp3_pane_g4

0xcb1f,	// (0x0002aa15) main_mp3_pane_g5_ParamLimits

0xcb1f,	// (0x0002aa15) main_mp3_pane_g5

0xcb2d,	// (0x0002aa23) main_mp3_pane_g6_ParamLimits

0xcb2d,	// (0x0002aa23) main_mp3_pane_g6

0xcb3a,	// (0x0002aa30) main_mp3_pane_g7_ParamLimits

0xcb3a,	// (0x0002aa30) main_mp3_pane_g7

0xcb46,	// (0x0002aa3c) main_mp3_pane_g8_ParamLimits

0xcb46,	// (0x0002aa3c) main_mp3_pane_g8

0xf738,	// (0x0002d62e) main_mp3_pane_g_ParamLimits

0x5bb9,	// (0x00023aaf) main_mp3_pane_t2

0x5bc9,	// (0x00023abf) main_mp3_pane_t3

0xcb60,	// (0x0002aa56) main_mp3_pane_t4

0xcb6e,	// (0x0002aa64) main_mp3_pane_t5

0x0005,

0xf749,	// (0x0002d63f) main_mp3_pane_t

0xcb7c,	// (0x0002aa72) mup_progress_pane_cp01

0x0ed2,	// (0x0001edc8) aid_zoom_text_secondary2

0xc936,	// (0x0002a82c) list_cale_ev2_pane

0xc93e,	// (0x0002a834) scroll_pane_cp023_ParamLimits

0x5cdd,	// (0x00023bd3) field_cale_ev2_pane_ParamLimits

0x5cdd,	// (0x00023bd3) field_cale_ev2_pane

0x5d06,	// (0x00023bfc) field_cale_ev2_pane_g1_ParamLimits

0x5d06,	// (0x00023bfc) field_cale_ev2_pane_g1

0x5d12,	// (0x00023c08) field_cale_ev2_pane_g2_ParamLimits

0x5d12,	// (0x00023c08) field_cale_ev2_pane_g2

0x5d2a,	// (0x00023c20) field_cale_ev2_pane_g3_ParamLimits

0x5d2a,	// (0x00023c20) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x0002d660) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x0002d660) field_cale_ev2_pane_g

0x5d42,	// (0x00023c38) field_cale_ev2_pane_t1_ParamLimits

0x5d42,	// (0x00023c38) field_cale_ev2_pane_t1

0x5d59,	// (0x00023c4f) field_cale_ev2_pane_t2_ParamLimits

0x5d59,	// (0x00023c4f) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x0002d669) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x0002d669) field_cale_ev2_pane_t

0x4f17,	// (0x00022e0d) main_postcard_pane_g5_ParamLimits

0x4f17,	// (0x00022e0d) main_postcard_pane_g5

0x4f25,	// (0x00022e1b) main_postcard_pane_g6_ParamLimits

0x4f25,	// (0x00022e1b) main_postcard_pane_g6

0x2ff4,	// (0x00020eea) camera2_autofocus_pane_cp_ParamLimits

0x2ff4,	// (0x00020eea) camera2_autofocus_pane_cp

0x15e6,	// (0x0001f4dc) main_mup3_pane

0x5d6e,	// (0x00023c64) main_mup3_pane_g1_ParamLimits

0x5d6e,	// (0x00023c64) main_mup3_pane_g1

0x5d8f,	// (0x00023c85) main_mup3_pane_g2_ParamLimits

0x5d8f,	// (0x00023c85) main_mup3_pane_g2

0x5e07,	// (0x00023cfd) main_mup3_pane_g3_ParamLimits

0x5e07,	// (0x00023cfd) main_mup3_pane_g3

0x5e4a,	// (0x00023d40) main_mup3_pane_g4_ParamLimits

0x5e4a,	// (0x00023d40) main_mup3_pane_g4

0x5e8d,	// (0x00023d83) main_mup3_pane_g5_ParamLimits

0x5e8d,	// (0x00023d83) main_mup3_pane_g5

0x5ed0,	// (0x00023dc6) main_mup3_pane_g6_ParamLimits

0x5ed0,	// (0x00023dc6) main_mup3_pane_g6

0xcbb0,	// (0x0002aaa6) main_mup3_pane_g7_ParamLimits

0xcbb0,	// (0x0002aaa6) main_mup3_pane_g7

0x0007,

0xf783,	// (0x0002d679) main_mup3_pane_g_ParamLimits

0xf783,	// (0x0002d679) main_mup3_pane_g

0x5f46,	// (0x00023e3c) main_mup3_pane_t1_ParamLimits

0x5f46,	// (0x00023e3c) main_mup3_pane_t1

0x5fb5,	// (0x00023eab) main_mup3_pane_t2_ParamLimits

0x5fb5,	// (0x00023eab) main_mup3_pane_t2

0x607e,	// (0x00023f74) main_mup3_pane_t4_ParamLimits

0x607e,	// (0x00023f74) main_mup3_pane_t4

0x60cc,	// (0x00023fc2) main_mup3_pane_t5_ParamLimits

0x60cc,	// (0x00023fc2) main_mup3_pane_t5

0x617c,	// (0x00024072) main_mup3_pane_t6_ParamLimits

0x617c,	// (0x00024072) main_mup3_pane_t6

0x0005,

0xf794,	// (0x0002d68a) main_mup3_pane_t_ParamLimits

0xf794,	// (0x0002d68a) main_mup3_pane_t

0x6228,	// (0x0002411e) mup3_progress_pane_ParamLimits

0x6228,	// (0x0002411e) mup3_progress_pane

0x62a6,	// (0x0002419c) popup_mup3_control_window_ParamLimits

0x62a6,	// (0x0002419c) popup_mup3_control_window

0xcbbe,	// (0x0002aab4) popup_mup3_text_window

0x62bf,	// (0x000241b5) mup3_progress_pane_t1

0x62de,	// (0x000241d4) mup3_progress_pane_t2

0xcbc6,	// (0x0002aabc) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x0002d697) mup3_progress_pane_t

0xcbe3,	// (0x0002aad9) mup_progress_pane_cp03

0x9cbe,	// (0x00027bb4) bg_tb_trans_pane_cp04

0x62fd,	// (0x000241f3) mup3_volume_pane

0x6305,	// (0x000241fb) popup_mup3_control_window_g1

0x630e,	// (0x00024204) mup3_volume_pane_g1

0x6317,	// (0x0002420d) mup3_volume_pane_g2

0x6320,	// (0x00024216) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x0002d69e) mup3_volume_pane_g

0x9cbe,	// (0x00027bb4) bg_tb_trans_pane_cp03

0xcbf3,	// (0x0002aae9) popup_mup3_text_window_g1

0xcbfb,	// (0x0002aaf1) popup_mup3_text_window_t1

0xa451,	// (0x00028347) list_calc_item_pane_g1_ParamLimits

0xc60f,	// (0x0002a505) mup_volume_pane_cp_g1

0x5c9b,	// (0x00023b91) main_touch_calib_pane_t3

0x5cb1,	// (0x00023ba7) main_touch_calib_pane_t4

0x5cc7,	// (0x00023bbd) main_touch_calib_pane_t5

0x0e8a,	// (0x0001ed80) aid_cell_size_toolbar2

0x0e92,	// (0x0001ed88) aid_popup3_width_pane

0x0ed2,	// (0x0001edc8) aid_zoom_text_msg_primary

0x1476,	// (0x0001f36c) vorec_t7

0xa415,	// (0x0002830b) bg_calc_paper_pane_g1_ParamLimits

0xa421,	// (0x00028317) bg_calc_paper_pane_g2_ParamLimits

0xa42d,	// (0x00028323) bg_calc_paper_pane_g3_ParamLimits

0xa439,	// (0x0002832f) bg_calc_paper_pane_g4_ParamLimits

0xa445,	// (0x0002833b) bg_calc_paper_pane_g5_ParamLimits

0x2a47,	// (0x0002093d) bg_calc_paper_pane_g6_ParamLimits

0x2a58,	// (0x0002094e) bg_calc_paper_pane_g7_ParamLimits

0x2a69,	// (0x0002095f) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0002d051) bg_calc_paper_pane_g_ParamLimits

0x2a7a,	// (0x00020970) calc_bg_paper_pane_g9_ParamLimits

0x30db,	// (0x00020fd1) image_qvga_pane_ParamLimits

0x30db,	// (0x00020fd1) image_qvga_pane

0xa336,	// (0x0002822c) bg_popup_sub_pane_cp04_ParamLimits

0xb2b2,	// (0x000291a8) popup_mup_playback_window_g1_ParamLimits

0xb2be,	// (0x000291b4) popup_mup_playback_window_t1_ParamLimits

0xb2d3,	// (0x000291c9) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x0002d3dd) popup_mup_playback_window_t_ParamLimits

0x580e,	// (0x00023704) main_mup2_pane_g3_ParamLimits

0x580e,	// (0x00023704) main_mup2_pane_g3

0x34a8,	// (0x0002139e) popup_toolbar_window_cp04

0xb6b5,	// (0x000295ab) popup_call2_audio_second_window_g3_ParamLimits

0xb6b5,	// (0x000295ab) popup_call2_audio_second_window_g3

0xbabf,	// (0x000299b5) popup_call2_audio_first_window_g4_ParamLimits

0xbabf,	// (0x000299b5) popup_call2_audio_first_window_g4

0xc13e,	// (0x0002a034) popup_call2_audio_in_window_g4_ParamLimits

0xc13e,	// (0x0002a034) popup_call2_audio_in_window_g4

0x502a,	// (0x00022f20) aid_area_sk_bg_cut_ParamLimits

0x502a,	// (0x00022f20) aid_area_sk_bg_cut

0xb2e8,	// (0x000291de) aid_area_sk_bg_cut_2_ParamLimits

0xb2e8,	// (0x000291de) aid_area_sk_bg_cut_2

0x5b2a,	// (0x00023a20) aid_placing_details_win

0x5b32,	// (0x00023a28) aid_placing_details_win_2

0xca31,	// (0x0002a927) camera2_autofocus_pane_g1_ParamLimits

0x10b4,	// (0x0001efaa) popup_fixed_preview_cale_window_ParamLimits

0x10b4,	// (0x0001efaa) popup_fixed_preview_cale_window

0xb04c,	// (0x00028f42) navi_slider_pane_g3

0xb055,	// (0x00028f4b) navi_slider_pane_g4

0xb05e,	// (0x00028f54) navi_slider_pane_g5

0xb04c,	// (0x00028f42) navi_slider_pane_g6

0x1560,	// (0x0001f456) navi_slider_pane_g7

0xb171,	// (0x00029067) mup_scale_pane_g3

0xb17a,	// (0x00029070) mup_scale_pane_g4

0xb183,	// (0x00029079) mup_scale_pane_g5

0x4dac,	// (0x00022ca2) mup_scale_pane_g6

0x4db5,	// (0x00022cab) mup_scale_pane_g7

0xb04c,	// (0x00028f42) cams2_slider_pane_g3

0xc691,	// (0x0002a587) cams2_slider_pane_g4

0x1a37,	// (0x0001f92d) cams2_slider_pane_g5

0xb04c,	// (0x00028f42) cams2_slider_pane_g6

0x1a3f,	// (0x0001f935) cams2_slider_pane_g7

0xc8bc,	// (0x0002a7b2) camera2_autofocus_pane_cp_g1

0xc49f,	// (0x0002a395) bg_popup_preview_window_pane_cp02_ParamLimits

0xc49f,	// (0x0002a395) bg_popup_preview_window_pane_cp02

0xcc09,	// (0x0002aaff) list_fp_cale_pane_ParamLimits

0xcc09,	// (0x0002aaff) list_fp_cale_pane

0xcc15,	// (0x0002ab0b) popup_fixed_preview_cale_window_t1_ParamLimits

0xcc15,	// (0x0002ab0b) popup_fixed_preview_cale_window_t1

0x6329,	// (0x0002421f) popup_fixed_preview_cale_window_t2_ParamLimits

0x6329,	// (0x0002421f) popup_fixed_preview_cale_window_t2

0x633e,	// (0x00024234) popup_fixed_preview_cale_window_t3_ParamLimits

0x633e,	// (0x00024234) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x0002d6a5) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x0002d6a5) popup_fixed_preview_cale_window_t

0x6353,	// (0x00024249) list_single_fp_cale_pane_ParamLimits

0x6353,	// (0x00024249) list_single_fp_cale_pane

0xcc33,	// (0x0002ab29) list_single_fp_cale_pane_g1_ParamLimits

0xcc33,	// (0x0002ab29) list_single_fp_cale_pane_g1

0xcc3f,	// (0x0002ab35) list_single_fp_cale_pane_g2_ParamLimits

0xcc3f,	// (0x0002ab35) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x0002d6ac) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x0002d6ac) list_single_fp_cale_pane_g

0xcc58,	// (0x0002ab4e) list_single_fp_cale_pane_t1_ParamLimits

0xcc58,	// (0x0002ab4e) list_single_fp_cale_pane_t1

0xcc6a,	// (0x0002ab60) list_single_fp_cale_pane_t2_ParamLimits

0xcc6a,	// (0x0002ab60) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x0002d6b3) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x0002d6b3) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x111c,	// (0x0001f012) main_dialer_pane

0x6366,	// (0x0002425c) aid_cell_size_keypad

0x6370,	// (0x00024266) dialer_ne_pane

0x637a,	// (0x00024270) grid_dialer_command_1_pane

0x6382,	// (0x00024278) grid_dialer_command_2_pane

0x638a,	// (0x00024280) grid_dialer_keypad_pane

0x639c,	// (0x00024292) bg_popup_call_pane_cp06_ParamLimits

0x639c,	// (0x00024292) bg_popup_call_pane_cp06

0x63a8,	// (0x0002429e) dialer_ne_clear_pane_ParamLimits

0x63a8,	// (0x0002429e) dialer_ne_clear_pane

0xcc9d,	// (0x0002ab93) dialer_ne_pane_g1

0xcca5,	// (0x0002ab9b) dialer_ne_pane_t1_ParamLimits

0xcca5,	// (0x0002ab9b) dialer_ne_pane_t1

0x63b4,	// (0x000242aa) dialer_ne_pane_t2_ParamLimits

0x63b4,	// (0x000242aa) dialer_ne_pane_t2

0x63d1,	// (0x000242c7) dialer_ne_pane_t3_ParamLimits

0x63d1,	// (0x000242c7) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x0002d6b8) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x0002d6b8) dialer_ne_pane_t

0x63f5,	// (0x000242eb) dialer_ne_pane_t3_copy1_ParamLimits

0x63f5,	// (0x000242eb) dialer_ne_pane_t3_copy1

0x6419,	// (0x0002430f) cell_dialer_keypad_pane_ParamLimits

0x6419,	// (0x0002430f) cell_dialer_keypad_pane

0x6430,	// (0x00024326) cell_dialer_command_1_pane_ParamLimits

0x6430,	// (0x00024326) cell_dialer_command_1_pane

0x6446,	// (0x0002433c) cell_dialer_command_2_pane_ParamLimits

0x6446,	// (0x0002433c) cell_dialer_command_2_pane

0xccb7,	// (0x0002abad) bg_button_pane_cp02_ParamLimits

0xccb7,	// (0x0002abad) bg_button_pane_cp02

0x6455,	// (0x0002434b) cell_dialer_keypad_pane_g1_ParamLimits

0x6455,	// (0x0002434b) cell_dialer_keypad_pane_g1

0xccb7,	// (0x0002abad) bg_button_pane_cp03_ParamLimits

0xccb7,	// (0x0002abad) bg_button_pane_cp03

0x646a,	// (0x00024360) cell_dialer_command_1_pane_g1_ParamLimits

0x646a,	// (0x00024360) cell_dialer_command_1_pane_g1

0xccc3,	// (0x0002abb9) bg_button_pane_cp04

0x647e,	// (0x00024374) cell_dialer_command_2_pane_g1

0xb03b,	// (0x00028f31) bg_button_pane_cp06

0xcccb,	// (0x0002abc1) dialer_ne_clear_pane_g1

0xaefd,	// (0x00028df3) navi_pane_g2

0xaf2b,	// (0x00028e21) navi_pane_g3

0x0002,

0xf3ea,	// (0x0002d2e0) navi_pane_g

0xafba,	// (0x00028eb0) navi_pane_mv_g2

0xaffb,	// (0x00028ef1) navi_pane_mv_g5

0x4948,	// (0x0002283e) navi_pane_mv_t1

0xa409,	// (0x000282ff) main_clock2_pane

0x64bc,	// (0x000243b2) main_clock2_list_pane_ParamLimits

0x64bc,	// (0x000243b2) main_clock2_list_pane

0x64e4,	// (0x000243da) main_clock2_pane_t1_ParamLimits

0x64e4,	// (0x000243da) main_clock2_pane_t1

0x6506,	// (0x000243fc) main_clock2_pane_t2_ParamLimits

0x6506,	// (0x000243fc) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0002d6bf) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0002d6bf) main_clock2_pane_t

0x6561,	// (0x00024457) popup_clock_analogue_window_cp03_ParamLimits

0x6561,	// (0x00024457) popup_clock_analogue_window_cp03

0x657f,	// (0x00024475) popup_clock_digital_window_cp02_ParamLimits

0x657f,	// (0x00024475) popup_clock_digital_window_cp02

0x65ec,	// (0x000244e2) main_clock2_list_single_pane_ParamLimits

0x65ec,	// (0x000244e2) main_clock2_list_single_pane

0xb03b,	// (0x00028f31) list_highlight_pane_cp05

0xcce9,	// (0x0002abdf) main_clock2_list_single_pane_t1

0x34a8,	// (0x0002139e) popup_toolbar_window_cp04_ParamLimits

0x5b54,	// (0x00023a4a) camera2_autofocus_pane_g2_ParamLimits

0x5b54,	// (0x00023a4a) camera2_autofocus_pane_g2

0x5b60,	// (0x00023a56) camera2_autofocus_pane_g3_ParamLimits

0x5b60,	// (0x00023a56) camera2_autofocus_pane_g3

0x5b6c,	// (0x00023a62) camera2_autofocus_pane_g4_ParamLimits

0x5b6c,	// (0x00023a62) camera2_autofocus_pane_g4

0x5b78,	// (0x00023a6e) camera2_autofocus_pane_g5_ParamLimits

0x5b78,	// (0x00023a6e) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x0002d608) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x0002d608) camera2_autofocus_pane_g

0xcb90,	// (0x0002aa86) camera2_autofocus_pane_cp_g2

0xcb98,	// (0x0002aa8e) camera2_autofocus_pane_cp_g3

0xcba0,	// (0x0002aa96) camera2_autofocus_pane_cp_g4

0xcba8,	// (0x0002aa9e) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x0002d66e) camera2_autofocus_pane_cp_g

0x6394,	// (0x0002428a) popup_dialer_spcha_window

0x9cbe,	// (0x00027bb4) bg_popup_sub_pane_cp07

0xccf7,	// (0x0002abed) list_spcha_pane

0xccff,	// (0x0002abf5) list_single_spcha_pane_ParamLimits

0xccff,	// (0x0002abf5) list_single_spcha_pane

0x9cbe,	// (0x00027bb4) list_highlight_pane_cp06

0xcd10,	// (0x0002ac06) list_single_spcha_pane_t1

0xbee8,	// (0x00029dde) popup_call2_audio_out_window_g4_ParamLimits

0xbee8,	// (0x00029dde) popup_call2_audio_out_window_g4

0x111c,	// (0x0001f012) main_imed2_pane

0x1684,	// (0x0001f57a) popup_imed_adjust2_window

0x1697,	// (0x0001f58d) popup_imed_trans_window_ParamLimits

0x1697,	// (0x0001f58d) popup_imed_trans_window

0xc6fa,	// (0x0002a5f0) popup_blid_sat_info2_window_t1

0xc708,	// (0x0002a5fe) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x0002d59d) popup_blid_sat_info2_window_t

0x661e,	// (0x00024514) aid_size_cell_colour_35

0x6638,	// (0x0002452e) aid_size_cell_colour_112

0x664f,	// (0x00024545) aid_size_cell_effect

0xa3c5,	// (0x000282bb) bg_tb_trans_pane_cp02

0xafe1,	// (0x00028ed7) heading_imed_pane

0x6669,	// (0x0002455f) listscroll_imed_pane

0xcd1e,	// (0x0002ac14) heading_imed_pane_g1

0xcd26,	// (0x0002ac1c) heading_imed_pane_t1

0xcd34,	// (0x0002ac2a) grid_imed_colour_35_pane_ParamLimits

0xcd34,	// (0x0002ac2a) grid_imed_colour_35_pane

0x6675,	// (0x0002456b) grid_imed_effect_pane

0xcd4b,	// (0x0002ac41) list_imed_aspect_pane

0x6685,	// (0x0002457b) scroll_pane_cp027_ParamLimits

0x6685,	// (0x0002457b) scroll_pane_cp027

0x6691,	// (0x00024587) cell_imed_effect_pane_ParamLimits

0x6691,	// (0x00024587) cell_imed_effect_pane

0xcd53,	// (0x0002ac49) cell_imed_colour_pane_ParamLimits

0xcd53,	// (0x0002ac49) cell_imed_colour_pane

0xcd95,	// (0x0002ac8b) cell_imed_colour_pane_g1_ParamLimits

0xcd95,	// (0x0002ac8b) cell_imed_colour_pane_g1

0xcda6,	// (0x0002ac9c) hgihlgiht_grid_pane_cp016_ParamLimits

0xcda6,	// (0x0002ac9c) hgihlgiht_grid_pane_cp016

0x66a9,	// (0x0002459f) cell_imed_effect_pane_g1

0x66b1,	// (0x000245a7) grid_highlight_pane_cp017

0xcdb7,	// (0x0002acad) list_imed_single_pane_ParamLimits

0xcdb7,	// (0x0002acad) list_imed_single_pane

0x9cbe,	// (0x00027bb4) list_highlight_pane_cp07

0xcdcc,	// (0x0002acc2) list_imed_aspect_pane_comp1_t1

0xc4ab,	// (0x0002a3a1) bg_tb_trans_pane_cp05

0xcdee,	// (0x0002ace4) popup_imed_adjust2_window_g1

0xce15,	// (0x0002ad0b) popup_imed_adjust2_window_t1

0xce2d,	// (0x0002ad23) slider_imed_adjust_pane

0xce41,	// (0x0002ad37) slider_imed_adjust_pane_g1

0xce51,	// (0x0002ad47) slider_imed_adjust_pane_g2

0xce61,	// (0x0002ad57) slider_imed_adjust_pane_g3

0xce72,	// (0x0002ad68) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0002d6dc) slider_imed_adjust_pane_g

0x66ba,	// (0x000245b0) aid_size_cell_clipart2

0x66c6,	// (0x000245bc) grid_imed_clipart_pane

0xce83,	// (0x0002ad79) scroll_pane_cp031

0x66d0,	// (0x000245c6) cell_imed_clipart_pane_ParamLimits

0x66d0,	// (0x000245c6) cell_imed_clipart_pane

0x66f2,	// (0x000245e8) cell_imed_clipart_pane_g1

0x9cbe,	// (0x00027bb4) grid_highlight_pane_cp014

0x64c8,	// (0x000243be) main_clock2_pane_g1_ParamLimits

0x64c8,	// (0x000243be) main_clock2_pane_g1

0x6597,	// (0x0002448d) aid_call2_pane_cp10

0x65a9,	// (0x0002449f) aid_call_pane_cp10

0xae5e,	// (0x00028d54) popup_clock_analogue_window_cp10_g1

0xae5e,	// (0x00028d54) popup_clock_analogue_window_cp10_g2

0x65bb,	// (0x000244b1) popup_clock_analogue_window_cp10_g3

0x65bb,	// (0x000244b1) popup_clock_analogue_window_cp10_g4

0xae5e,	// (0x00028d54) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0002d6ca) popup_clock_analogue_window_cp10_g

0x65cd,	// (0x000244c3) popup_clock_analogue_window_cp10_t1

0x1a48,	// (0x0001f93e) clock_digital_number_pane_cp10_ParamLimits

0x1a48,	// (0x0001f93e) clock_digital_number_pane_cp10

0x1a60,	// (0x0001f956) clock_digital_number_pane_cp11_ParamLimits

0x1a60,	// (0x0001f956) clock_digital_number_pane_cp11

0x1a78,	// (0x0001f96e) clock_digital_number_pane_cp12_ParamLimits

0x1a78,	// (0x0001f96e) clock_digital_number_pane_cp12

0x1a90,	// (0x0001f986) clock_digital_number_pane_cp13_ParamLimits

0x1a90,	// (0x0001f986) clock_digital_number_pane_cp13

0x1aa8,	// (0x0001f99e) clock_digital_separator_pane_cp10_ParamLimits

0x1aa8,	// (0x0001f99e) clock_digital_separator_pane_cp10

0x65fe,	// (0x000244f4) popup_clock_digital_window_cp02_t1_ParamLimits

0x65fe,	// (0x000244f4) popup_clock_digital_window_cp02_t1

0xa32e,	// (0x00028224) clock_digital_number_pane_cp10_g1

0xa32e,	// (0x00028224) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0002d6e5) clock_digital_number_pane_cp10_g

0xa32e,	// (0x00028224) clock_digital_separator_pane_cp10_g1

0xa32e,	// (0x00028224) clock_digital_separator_pane_g2_cp10

0xb003,	// (0x00028ef9) navi_pane_vded_g4

0xb00c,	// (0x00028f02) navi_pane_vded_g5

0xb015,	// (0x00028f0b) navi_pane_vded_t1

0x111c,	// (0x0001f012) main_vded_pane

0x66fb,	// (0x000245f1) main_vded_pane_g1

0x6707,	// (0x000245fd) main_vded_pane_g2

0x6711,	// (0x00024607) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0002d6ea) main_vded_pane_g

0x671b,	// (0x00024611) main_vded_pane_t1

0x6729,	// (0x0002461f) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0002d6f1) main_vded_pane_t

0x6737,	// (0x0002462d) vded_slider_pane

0x6741,	// (0x00024637) vded_video_pane

0xce8b,	// (0x0002ad81) vded_video_pane_g1

0x674b,	// (0x00024641) vded_video_pane_g2

0xc8bc,	// (0x0002a7b2) vded_video_pane_g3

0x0002,

0xf800,	// (0x0002d6f6) vded_video_pane_g

0xce95,	// (0x0002ad8b) vded_slider_pane_g1

0xc60f,	// (0x0002a505) vded_slider_pane_g2

0xce9e,	// (0x0002ad94) vded_slider_pane_g3

0xcea7,	// (0x0002ad9d) vded_slider_pane_g4

0xceb0,	// (0x0002ada6) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0002d6fd) vded_slider_pane_g

0x6298,	// (0x0002418e) mup3_rocker_pane_ParamLimits

0x6298,	// (0x0002418e) mup3_rocker_pane

0x6754,	// (0x0002464a) mup3_control_keys_pane_g1

0x675c,	// (0x00024652) mup3_control_keys_pane_g2

0x6764,	// (0x0002465a) mup3_control_keys_pane_g3

0x676c,	// (0x00024662) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0002d708) mup3_control_keys_pane_g

0x10dc,	// (0x0001efd2) popup_toolbar2_fixed_window_cp01_ParamLimits

0x10dc,	// (0x0001efd2) popup_toolbar2_fixed_window_cp01

0x62b2,	// (0x000241a8) popup_toolbar2_fixed_window_cp02_ParamLimits

0x62b2,	// (0x000241a8) popup_toolbar2_fixed_window_cp02

0xb827,	// (0x0002971d) popup_call2_audio_second_window_t4_ParamLimits

0xb827,	// (0x0002971d) popup_call2_audio_second_window_t4

0xbd55,	// (0x00029c4b) popup_call2_audio_first_window_t6_ParamLimits

0xbd55,	// (0x00029c4b) popup_call2_audio_first_window_t6

0xbfeb,	// (0x00029ee1) popup_call2_audio_out_window_t6_ParamLimits

0xbfeb,	// (0x00029ee1) popup_call2_audio_out_window_t6

0x111c,	// (0x0001f012) main_vitu_pane

0x677c,	// (0x00024672) aid_size_cell_itu_ParamLimits

0x677c,	// (0x00024672) aid_size_cell_itu

0xd3d5,	// (0x0002b2cb) bg_popup_window_pane_cp08_ParamLimits

0xd3d5,	// (0x0002b2cb) bg_popup_window_pane_cp08

0x678a,	// (0x00024680) field_vitu_entry_pane_ParamLimits

0x678a,	// (0x00024680) field_vitu_entry_pane

0x6799,	// (0x0002468f) grid_vitu_function_pane_ParamLimits

0x6799,	// (0x0002468f) grid_vitu_function_pane

0x67a9,	// (0x0002469f) grid_vitu_itu_pane_ParamLimits

0x67a9,	// (0x0002469f) grid_vitu_itu_pane

0x67b9,	// (0x000246af) cell_vitu_itu_pane_ParamLimits

0x67b9,	// (0x000246af) cell_vitu_itu_pane

0x67ce,	// (0x000246c4) cell_vitu_function_pane_ParamLimits

0x67ce,	// (0x000246c4) cell_vitu_function_pane

0xa3c5,	// (0x000282bb) bg_popup_sub_pane_cp08_ParamLimits

0xa3c5,	// (0x000282bb) bg_popup_sub_pane_cp08

0x67e0,	// (0x000246d6) field_vitu_entry_pane_t1_ParamLimits

0x67e0,	// (0x000246d6) field_vitu_entry_pane_t1

0xced1,	// (0x0002adc7) field_vitu_entry_pane_t2_ParamLimits

0xced1,	// (0x0002adc7) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0002d716) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0002d716) field_vitu_entry_pane_t

0xceee,	// (0x0002ade4) bg_button_pane_cp05_ParamLimits

0xceee,	// (0x0002ade4) bg_button_pane_cp05

0x67fc,	// (0x000246f2) cell_vitu_itu_pane_g1

0x6814,	// (0x0002470a) cell_vitu_itu_pane_t1_ParamLimits

0x6814,	// (0x0002470a) cell_vitu_itu_pane_t1

0x6826,	// (0x0002471c) cell_vitu_itu_pane_t2_ParamLimits

0x6826,	// (0x0002471c) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0002d71b) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0002d71b) cell_vitu_itu_pane_t

0xcefc,	// (0x0002adf2) bg_button_pane_cp07

0x685b,	// (0x00024751) cell_vitu_function_pane_g1

0x11f5,	// (0x0001f0eb) main_calc_pane_g1

0x0ec6,	// (0x0001edbc) aid_visual_content_pane

0x111c,	// (0x0001f012) main_vradio_pane

0x6864,	// (0x0002475a) main_vradio_pane_g1_ParamLimits

0x6864,	// (0x0002475a) main_vradio_pane_g1

0xcf06,	// (0x0002adfc) main_vradio_pane_g2_ParamLimits

0xcf06,	// (0x0002adfc) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0002d722) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0002d722) main_vradio_pane_g

0x6874,	// (0x0002476a) main_vradio_pane_t1_ParamLimits

0x6874,	// (0x0002476a) main_vradio_pane_t1

0x6886,	// (0x0002477c) main_vradio_pane_t2_ParamLimits

0x6886,	// (0x0002477c) main_vradio_pane_t2

0xcf13,	// (0x0002ae09) main_vradio_pane_t3_ParamLimits

0xcf13,	// (0x0002ae09) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0002d727) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0002d727) main_vradio_pane_t

0x6898,	// (0x0002478e) vradio_rocker_control_pane_ParamLimits

0x6898,	// (0x0002478e) vradio_rocker_control_pane

0x68a4,	// (0x0002479a) vradio_station_info_pane_ParamLimits

0x68a4,	// (0x0002479a) vradio_station_info_pane

0xcf27,	// (0x0002ae1d) vradio_frequency_info_pane_ParamLimits

0xcf27,	// (0x0002ae1d) vradio_frequency_info_pane

0xc8bc,	// (0x0002a7b2) vradio_station_info_pane_g1

0xcf36,	// (0x0002ae2c) vradio_station_info_pane_t1_ParamLimits

0xcf36,	// (0x0002ae2c) vradio_station_info_pane_t1

0xcf58,	// (0x0002ae4e) vradio_station_info_pane_t2_ParamLimits

0xcf58,	// (0x0002ae4e) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0002d72e) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0002d72e) vradio_station_info_pane_t

0xcf6a,	// (0x0002ae60) vradio_tuning_pane

0xcf72,	// (0x0002ae68) vradio_rocker_control_pane_g1

0xcf7a,	// (0x0002ae70) vradio_rocker_control_pane_g2

0xcf82,	// (0x0002ae78) vradio_rocker_control_pane_g3

0xcf8a,	// (0x0002ae80) vradio_rocker_control_pane_g4

0xcf92,	// (0x0002ae88) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0002d733) vradio_rocker_control_pane_g

0x68b3,	// (0x000247a9) vradio_frequency_info_pane_g1

0xcf9a,	// (0x0002ae90) vradio_frequency_info_pane_t1_ParamLimits

0xcf9a,	// (0x0002ae90) vradio_frequency_info_pane_t1

0x68bd,	// (0x000247b3) vradio_tuning_pane_g1

0x68c6,	// (0x000247bc) vradio_tuning_pane_t1

0x0ee2,	// (0x0001edd8) area_side_right_pane_ParamLimits

0x0ee2,	// (0x0001edd8) area_side_right_pane

0xc466,	// (0x0002a35c) status_small_pane_g1

0xc46e,	// (0x0002a364) status_small_pane_g2

0xc477,	// (0x0002a36d) status_small_pane_g3

0xc480,	// (0x0002a376) status_small_pane_g4

0x0003,

0xf5fd,	// (0x0002d4f3) status_small_pane_g

0xc489,	// (0x0002a37f) status_small_pane_t1

0x111c,	// (0x0001f012) main_video3_pane

0xcfae,	// (0x0002aea4) cams_zoom_vslider_pane

0xcfb6,	// (0x0002aeac) image3_wide_pane_ParamLimits

0xcfb6,	// (0x0002aeac) image3_wide_pane

0xcfd0,	// (0x0002aec6) image3_wide_small_pane

0xcfdc,	// (0x0002aed2) main_video3_pane_g1_ParamLimits

0xcfdc,	// (0x0002aed2) main_video3_pane_g1

0xcff8,	// (0x0002aeee) main_video3_pane_g2_ParamLimits

0xcff8,	// (0x0002aeee) main_video3_pane_g2

0x0001,

0xf848,	// (0x0002d73e) main_video3_pane_g_ParamLimits

0xf848,	// (0x0002d73e) main_video3_pane_g

0xd014,	// (0x0002af0a) main_video3_pane_t1_ParamLimits

0xd014,	// (0x0002af0a) main_video3_pane_t1

0xd03f,	// (0x0002af35) main_video3_pane_t2_ParamLimits

0xd03f,	// (0x0002af35) main_video3_pane_t2

0xd06a,	// (0x0002af60) main_video3_pane_t3_ParamLimits

0xd06a,	// (0x0002af60) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0002d743) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0002d743) main_video3_pane_t

0xd097,	// (0x0002af8d) cams_zoom_vslider_pane_g1

0xd0a0,	// (0x0002af96) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0002d74a) cams_zoom_vslider_pane_g

0xd0a8,	// (0x0002af9e) small_slider_vertical_pane

0xc8bc,	// (0x0002a7b2) small_slider_vertical_pane_g1

0xc8bc,	// (0x0002a7b2) small_slider_vertical_pane_g2

0xd0b0,	// (0x0002afa6) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0002d74f) small_slider_vertical_pane_g

0x111c,	// (0x0001f012) main_hwr_training_pane

0xd0b9,	// (0x0002afaf) hwr_training_instruct_pane_ParamLimits

0xd0b9,	// (0x0002afaf) hwr_training_instruct_pane

0x68d5,	// (0x000247cb) hwr_training_navi_pane_ParamLimits

0x68d5,	// (0x000247cb) hwr_training_navi_pane

0x68ef,	// (0x000247e5) hwr_training_write_pane_ParamLimits

0x68ef,	// (0x000247e5) hwr_training_write_pane

0x9cbe,	// (0x00027bb4) bg_frame_shadow_pane

0xd0f0,	// (0x0002afe6) hwr_training_write_pane_g1

0xd0f8,	// (0x0002afee) hwr_training_write_pane_g2

0xd100,	// (0x0002aff6) hwr_training_write_pane_g3

0xd108,	// (0x0002affe) hwr_training_write_pane_g4

0xd110,	// (0x0002b006) hwr_training_write_pane_g5

0xd118,	// (0x0002b00e) hwr_training_write_pane_g6

0xd120,	// (0x0002b016) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0002d756) hwr_training_write_pane_g

0x1ac0,	// (0x0001f9b6) hwr_training_navi_pane_g1_ParamLimits

0x1ac0,	// (0x0001f9b6) hwr_training_navi_pane_g1

0x1ad2,	// (0x0001f9c8) hwr_training_navi_pane_g2_ParamLimits

0x1ad2,	// (0x0001f9c8) hwr_training_navi_pane_g2

0x1ae4,	// (0x0001f9da) hwr_training_navi_pane_g3_ParamLimits

0x1ae4,	// (0x0001f9da) hwr_training_navi_pane_g3

0x1af4,	// (0x0001f9ea) hwr_training_navi_pane_g4_ParamLimits

0x1af4,	// (0x0001f9ea) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0002d765) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0002d765) hwr_training_navi_pane_g

0x1b0e,	// (0x0001fa04) hwr_training_navi_pane_t1

0x6927,	// (0x0002481d) list_single_hwr_training_instruct_pane_ParamLimits

0x6927,	// (0x0002481d) list_single_hwr_training_instruct_pane

0xd128,	// (0x0002b01e) list_single_hwr_training_instruct_pane_t1

0xc7fc,	// (0x0002a6f2) bg_frame_shadow_pane_g1

0xd137,	// (0x0002b02d) bg_frame_shadow_pane_g2

0xd13f,	// (0x0002b035) bg_frame_shadow_pane_g3

0xd147,	// (0x0002b03d) bg_frame_shadow_pane_g4

0xd14f,	// (0x0002b045) bg_frame_shadow_pane_g5

0xd157,	// (0x0002b04d) bg_frame_shadow_pane_g6

0xd15f,	// (0x0002b055) bg_frame_shadow_pane_g7

0xa4c2,	// (0x000283b8) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0002d770) bg_frame_shadow_pane_g

0x111c,	// (0x0001f012) main_video_tele_dialer_pane

0x1b1c,	// (0x0001fa12) aid_size_cell_video_keypad_ParamLimits

0x1b1c,	// (0x0001fa12) aid_size_cell_video_keypad

0x1b2c,	// (0x0001fa22) grid_video_dialer_keypad_pane_ParamLimits

0x1b2c,	// (0x0001fa22) grid_video_dialer_keypad_pane

0x1b60,	// (0x0001fa56) video_down_pane_cp_ParamLimits

0x1b60,	// (0x0001fa56) video_down_pane_cp

0x1b6e,	// (0x0001fa64) cell_video_dialer_keypad_pane_ParamLimits

0x1b6e,	// (0x0001fa64) cell_video_dialer_keypad_pane

0xd167,	// (0x0002b05d) bg_button_pane_cp08_ParamLimits

0xd167,	// (0x0002b05d) bg_button_pane_cp08

0x6968,	// (0x0002485e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6968,	// (0x0002485e) cell_video_dialer_keypad_pane_g1

0x628c,	// (0x00024182) mup3_rocker2_pane_ParamLimits

0x628c,	// (0x00024182) mup3_rocker2_pane

0xc8bc,	// (0x0002a7b2) mup3_rocker2_pane_g1

0x15f4,	// (0x0001f4ea) main_dialer2_pane

0x111c,	// (0x0001f012) main_mp4_pane

0x1b8b,	// (0x0001fa81) main_mp4_pane_g1_ParamLimits

0x1b8b,	// (0x0001fa81) main_mp4_pane_g1

0x1b99,	// (0x0001fa8f) main_mp4_pane_g2_ParamLimits

0x1b99,	// (0x0001fa8f) main_mp4_pane_g2

0x1ba7,	// (0x0001fa9d) main_mp4_pane_g3_ParamLimits

0x1ba7,	// (0x0001fa9d) main_mp4_pane_g3

0x1bec,	// (0x0001fae2) main_mp4_pane_g4_ParamLimits

0x1bec,	// (0x0001fae2) main_mp4_pane_g4

0x1c14,	// (0x0001fb0a) main_mp4_pane_g5_ParamLimits

0x1c14,	// (0x0001fb0a) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0002d790) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0002d790) main_mp4_pane_g

0x1c64,	// (0x0001fb5a) main_mp4_pane_t1_ParamLimits

0x1c64,	// (0x0001fb5a) main_mp4_pane_t1

0x1cc0,	// (0x0001fbb6) main_mp4_pane_t2_ParamLimits

0x1cc0,	// (0x0001fbb6) main_mp4_pane_t2

0xd173,	// (0x0002b069) main_mp4_pane_t3_ParamLimits

0xd173,	// (0x0002b069) main_mp4_pane_t3

0x1d12,	// (0x0001fc08) main_mp4_pane_t4_ParamLimits

0x1d12,	// (0x0001fc08) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0002d79d) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0002d79d) main_mp4_pane_t

0x1d56,	// (0x0001fc4c) mp4_progress_pane_ParamLimits

0x1d56,	// (0x0001fc4c) mp4_progress_pane

0x1da0,	// (0x0001fc96) mp4_rocker_pane_ParamLimits

0x1da0,	// (0x0001fc96) mp4_rocker_pane

0xd19b,	// (0x0002b091) mp4_progress_pane_t1

0xd1b4,	// (0x0002b0aa) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0002d7a6) mp4_progress_pane_t

0xd1cd,	// (0x0002b0c3) mup_progress_pane_cp04

0xda5f,	// (0x0002b955) mp4_rocker_pane_g1

0x1dc0,	// (0x0001fcb6) aid_cell_size_keypad2_ParamLimits

0x1dc0,	// (0x0001fcb6) aid_cell_size_keypad2

0x1dd0,	// (0x0001fcc6) dialer2_ne_pane_ParamLimits

0x1dd0,	// (0x0001fcc6) dialer2_ne_pane

0x1dde,	// (0x0001fcd4) grid_dialer2_keypad_pane_ParamLimits

0x1dde,	// (0x0001fcd4) grid_dialer2_keypad_pane

0xd3e3,	// (0x0002b2d9) bg_popup_call_pane_cp07_ParamLimits

0xd3e3,	// (0x0002b2d9) bg_popup_call_pane_cp07

0x699f,	// (0x00024895) dialer2_ne_pane_t1_ParamLimits

0x699f,	// (0x00024895) dialer2_ne_pane_t1

0x1dee,	// (0x0001fce4) cell_dialer2_keypad_pane_ParamLimits

0x1dee,	// (0x0001fce4) cell_dialer2_keypad_pane

0xd1eb,	// (0x0002b0e1) bg_button_pane_pane_cp04_ParamLimits

0xd1eb,	// (0x0002b0e1) bg_button_pane_pane_cp04

0x69c4,	// (0x000248ba) cell_dialer2_keypad_pane_g1_ParamLimits

0x69c4,	// (0x000248ba) cell_dialer2_keypad_pane_g1

0x336a,	// (0x00021260) aid_placing_vt_set_content_ParamLimits

0x336a,	// (0x00021260) aid_placing_vt_set_content

0x3396,	// (0x0002128c) aid_placing_vt_set_title_ParamLimits

0x3396,	// (0x0002128c) aid_placing_vt_set_title

0x111c,	// (0x0001f012) main_image3_pane

0x1e35,	// (0x0001fd2b) area_side_right_pane_cp01_ParamLimits

0x1e35,	// (0x0001fd2b) area_side_right_pane_cp01

0x1e62,	// (0x0001fd58) main_image3_pane_g1_ParamLimits

0x1e62,	// (0x0001fd58) main_image3_pane_g1

0x1e70,	// (0x0001fd66) main_image3_pane_g2_ParamLimits

0x1e70,	// (0x0001fd66) main_image3_pane_g2

0x1e89,	// (0x0001fd7f) main_image3_pane_g3_ParamLimits

0x1e89,	// (0x0001fd7f) main_image3_pane_g3

0x1ea2,	// (0x0001fd98) main_image3_pane_g4_ParamLimits

0x1ea2,	// (0x0001fd98) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0002d7b5) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0002d7b5) main_image3_pane_g

0x1ebb,	// (0x0001fdb1) main_image3_pane_t1_ParamLimits

0x1ebb,	// (0x0001fdb1) main_image3_pane_t1

0x1ee0,	// (0x0001fdd6) main_image3_pane_t2_ParamLimits

0x1ee0,	// (0x0001fdd6) main_image3_pane_t2

0x1eff,	// (0x0001fdf5) main_image3_pane_t3_ParamLimits

0x1eff,	// (0x0001fdf5) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0002d7be) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0002d7be) main_image3_pane_t

0xd3d5,	// (0x0002b2cb) grid_sctrl_middle_pane_cp01_ParamLimits

0xd3d5,	// (0x0002b2cb) grid_sctrl_middle_pane_cp01

0x6a2c,	// (0x00024922) cell_sctrl_middle_pane_cp01_ParamLimits

0x6a2c,	// (0x00024922) cell_sctrl_middle_pane_cp01

0x6a3d,	// (0x00024933) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6a3d,	// (0x00024933) cell_sctrl_middle_pane_cp01_g1

0x111c,	// (0x0001f012) main_call4_pane

0x6a4a,	// (0x00024940) aid_size_button_call4_ParamLimits

0x6a4a,	// (0x00024940) aid_size_button_call4

0x6a7a,	// (0x00024970) call4_windows_pane_ParamLimits

0x6a7a,	// (0x00024970) call4_windows_pane

0x6a94,	// (0x0002498a) grid_call4_button_pane_ParamLimits

0x6a94,	// (0x0002498a) grid_call4_button_pane

0xd1f7,	// (0x0002b0ed) call4_windows_conf_pane

0xd20e,	// (0x0002b104) popup_call4_audio_first_window_ParamLimits

0xd20e,	// (0x0002b104) popup_call4_audio_first_window

0xd25a,	// (0x0002b150) popup_call4_audio_second_window_ParamLimits

0xd25a,	// (0x0002b150) popup_call4_audio_second_window

0xd26e,	// (0x0002b164) popup_call4_audio_wait_window_ParamLimits

0xd26e,	// (0x0002b164) popup_call4_audio_wait_window

0x6ab8,	// (0x000249ae) cell_call4_button_pane_ParamLimits

0x6ab8,	// (0x000249ae) cell_call4_button_pane

0x6add,	// (0x000249d3) bg_button_pane_cp09_ParamLimits

0x6add,	// (0x000249d3) bg_button_pane_cp09

0x6ae9,	// (0x000249df) cell_call4_button_pane_g1_ParamLimits

0x6ae9,	// (0x000249df) cell_call4_button_pane_g1

0x6af6,	// (0x000249ec) cell_call4_button_pane_t1_ParamLimits

0x6af6,	// (0x000249ec) cell_call4_button_pane_t1

0xd2b6,	// (0x0002b1ac) popup_call4_audio_conf_window_ParamLimits

0xd2b6,	// (0x0002b1ac) popup_call4_audio_conf_window

0x62bf,	// (0x000241b5) mup3_progress_pane_t1_ParamLimits

0x62de,	// (0x000241d4) mup3_progress_pane_t2_ParamLimits

0xcbc6,	// (0x0002aabc) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x0002d697) mup3_progress_pane_t_ParamLimits

0xcbe3,	// (0x0002aad9) mup_progress_pane_cp03_ParamLimits

0x6774,	// (0x0002466a) mup3_control_keys_pane_g4_copy1

0x1d84,	// (0x0001fc7a) mp4_rocker2_pane_ParamLimits

0x1d84,	// (0x0001fc7a) mp4_rocker2_pane

0xd2ca,	// (0x0002b1c0) mp4_rocker2_pane_g1

0xd2d2,	// (0x0002b1c8) mp4_rocker2_pane_g2

0x1f60,	// (0x0001fe56) mp4_rocker2_pane_g3

0x1f68,	// (0x0001fe5e) mp4_rocker2_pane_g4

0x1f70,	// (0x0001fe66) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0002d7c7) mp4_rocker2_pane_g

0x111c,	// (0x0001f012) main_camera4_pane

0x111c,	// (0x0001f012) main_video4_pane

0x1b3c,	// (0x0001fa32) main_video_tele_dialer_pane_t1_ParamLimits

0x1b3c,	// (0x0001fa32) main_video_tele_dialer_pane_t1

0x1b4e,	// (0x0001fa44) main_video_tele_dialer_pane_t2_ParamLimits

0x1b4e,	// (0x0001fa44) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0002d781) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0002d781) main_video_tele_dialer_pane_t

0x1f90,	// (0x0001fe86) cam4_autofocus_pane_ParamLimits

0x1f90,	// (0x0001fe86) cam4_autofocus_pane

0x1faa,	// (0x0001fea0) cam4_image_uncrop_pane_ParamLimits

0x1faa,	// (0x0001fea0) cam4_image_uncrop_pane

0x1fc1,	// (0x0001feb7) cam4_indicators_pane_ParamLimits

0x1fc1,	// (0x0001feb7) cam4_indicators_pane

0x1fdd,	// (0x0001fed3) main_camera4_pane_g1_ParamLimits

0x1fdd,	// (0x0001fed3) main_camera4_pane_g1

0x1fe9,	// (0x0001fedf) main_camera4_pane_g2_ParamLimits

0x1fe9,	// (0x0001fedf) main_camera4_pane_g2

0x1fe9,	// (0x0001fedf) main_camera4_pane_g3_ParamLimits

0x1fe9,	// (0x0001fedf) main_camera4_pane_g3

0x1ff5,	// (0x0001feeb) main_camera4_pane_g4_ParamLimits

0x1ff5,	// (0x0001feeb) main_camera4_pane_g4

0x2001,	// (0x0001fef7) main_camera4_pane_g5_ParamLimits

0x2001,	// (0x0001fef7) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0002d7d2) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0002d7d2) main_camera4_pane_g

0x201b,	// (0x0001ff11) main_camera4_pane_t1_ParamLimits

0x201b,	// (0x0001ff11) main_camera4_pane_t1

0x203f,	// (0x0001ff35) bg_tb_trans_pane_cp06

0x2055,	// (0x0001ff4b) cam4_indicators_pane_g1

0x2066,	// (0x0001ff5c) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0002d7ed) cam4_indicators_pane_g

0x2084,	// (0x0001ff7a) cam4_indicators_pane_t1

0x20ae,	// (0x0001ffa4) main_video4_pane_g1_ParamLimits

0x20ae,	// (0x0001ffa4) main_video4_pane_g1

0x20ba,	// (0x0001ffb0) main_video4_pane_g2_ParamLimits

0x20ba,	// (0x0001ffb0) main_video4_pane_g2

0x20c6,	// (0x0001ffbc) main_video4_pane_g3_ParamLimits

0x20c6,	// (0x0001ffbc) main_video4_pane_g3

0x20d2,	// (0x0001ffc8) main_video4_pane_g4_ParamLimits

0x20d2,	// (0x0001ffc8) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0002d7f4) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0002d7f4) main_video4_pane_g

0x20f2,	// (0x0001ffe8) vid4_indicators_pane_ParamLimits

0x20f2,	// (0x0001ffe8) vid4_indicators_pane

0x2111,	// (0x00020007) video4_image_uncrop_cif_pane_ParamLimits

0x2111,	// (0x00020007) video4_image_uncrop_cif_pane

0x2120,	// (0x00020016) video4_image_uncrop_nhd_pane_ParamLimits

0x2120,	// (0x00020016) video4_image_uncrop_nhd_pane

0x1faa,	// (0x0001fea0) video4_image_uncrop_vga_pane_ParamLimits

0x1faa,	// (0x0001fea0) video4_image_uncrop_vga_pane

0x15e6,	// (0x0001f4dc) bg_tb_trans_pane_cp07

0x2137,	// (0x0002002d) vid4_indicators_pane_g1

0x214b,	// (0x00020041) vid4_indicators_pane_g2

0x215f,	// (0x00020055) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0002d7ff) vid4_indicators_pane_g

0x218e,	// (0x00020084) vid4_indicators_pane_t1

0x6b2c,	// (0x00024a22) cam4_autofocus_pane_g1

0x6b34,	// (0x00024a2a) cam4_autofocus_pane_g2

0x6b3c,	// (0x00024a32) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0002d80a) cam4_autofocus_pane_g

0x6b44,	// (0x00024a3a) cam4_autofocus_pane_g3_copy1

0x694c,	// (0x00024842) video_down_pane_cp_t1

0x695a,	// (0x00024850) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0002d786) video_down_pane_cp_t

0x110e,	// (0x0001f004) popup_vitu2_window_ParamLimits

0x110e,	// (0x0001f004) popup_vitu2_window

0x21a5,	// (0x0002009b) aid_size_cell2_itu2_ParamLimits

0x21a5,	// (0x0002009b) aid_size_cell2_itu2

0x21c7,	// (0x000200bd) aid_size_cell_itu2_ParamLimits

0x21c7,	// (0x000200bd) aid_size_cell_itu2

0x220b,	// (0x00020101) bg_popup_window_pane_cp09_ParamLimits

0x220b,	// (0x00020101) bg_popup_window_pane_cp09

0x2219,	// (0x0002010f) field_vitu2_entry_pane_ParamLimits

0x2219,	// (0x0002010f) field_vitu2_entry_pane

0x2239,	// (0x0002012f) grid_vitu2_function_pane_ParamLimits

0x2239,	// (0x0002012f) grid_vitu2_function_pane

0x227d,	// (0x00020173) grid_vitu2_itu_pane_ParamLimits

0x227d,	// (0x00020173) grid_vitu2_itu_pane

0x22f5,	// (0x000201eb) cell_vitu2_itu_pane_ParamLimits

0x22f5,	// (0x000201eb) cell_vitu2_itu_pane

0x230a,	// (0x00020200) cell_vitu2_function_pane_ParamLimits

0x230a,	// (0x00020200) cell_vitu2_function_pane

0xd2da,	// (0x0002b1d0) bg_popup_call_pane_cp08_ParamLimits

0xd2da,	// (0x0002b1d0) bg_popup_call_pane_cp08

0xd2f3,	// (0x0002b1e9) field_vitu2_entry_pane_g1

0xd2ff,	// (0x0002b1f5) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0002d811) field_vitu2_entry_pane_g

0x6b4c,	// (0x00024a42) field_vitu2_entry_pane_t1_ParamLimits

0x6b4c,	// (0x00024a42) field_vitu2_entry_pane_t1

0xd319,	// (0x0002b20f) field_vitu2_entry_pane_t2_ParamLimits

0xd319,	// (0x0002b20f) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0002d818) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0002d818) field_vitu2_entry_pane_t

0x2349,	// (0x0002023f) bg_button_pane_cp010_ParamLimits

0x2349,	// (0x0002023f) bg_button_pane_cp010

0x2357,	// (0x0002024d) cell_vitu2_itu_pane_g1

0x2380,	// (0x00020276) cell_vitu2_itu_pane_t1_ParamLimits

0x2380,	// (0x00020276) cell_vitu2_itu_pane_t1

0x23cc,	// (0x000202c2) cell_vitu2_itu_pane_t2_ParamLimits

0x23cc,	// (0x000202c2) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0002d822) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0002d822) cell_vitu2_itu_pane_t

0x15e6,	// (0x0001f4dc) bg_button_pane_cp011

0x248f,	// (0x00020385) cell_vitu2_function_pane_g1

0x111c,	// (0x0001f012) main_myfav_hc_pane

0x1f41,	// (0x0001fe37) popup_image3_note_pane_ParamLimits

0x1f41,	// (0x0001fe37) popup_image3_note_pane

0x1f4f,	// (0x0001fe45) popup_image3_tool_bar_pane_ParamLimits

0x1f4f,	// (0x0001fe45) popup_image3_tool_bar_pane

0x2442,	// (0x00020338) cell_vitu2_itu_pane_t3_ParamLimits

0x2442,	// (0x00020338) cell_vitu2_itu_pane_t3

0x9cbe,	// (0x00027bb4) bg_popup_trans_pane

0xd33e,	// (0x0002b234) grid_image3_tool_bar_pane

0xd348,	// (0x0002b23e) bg_popup_trans_pane_g1

0xa820,	// (0x00028716) bg_popup_trans_pane_g2

0xd350,	// (0x0002b246) bg_popup_trans_pane_g3

0xd358,	// (0x0002b24e) bg_popup_trans_pane_g4

0xd360,	// (0x0002b256) bg_popup_trans_pane_g5

0xd368,	// (0x0002b25e) bg_popup_trans_pane_g6

0xd370,	// (0x0002b266) bg_popup_trans_pane_g7

0xd378,	// (0x0002b26e) bg_popup_trans_pane_g8

0xa800,	// (0x000286f6) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0002d829) bg_popup_trans_pane_g

0xd380,	// (0x0002b276) cell_image3_tool_bar_pane_ParamLimits

0xd380,	// (0x0002b276) cell_image3_tool_bar_pane

0xc8bc,	// (0x0002a7b2) cell_image3_tool_bar_pane_g1

0x9cbe,	// (0x00027bb4) bg_popup_trans_pane_cp1

0xd394,	// (0x0002b28a) popup_image3_note_pane_t1

0xd3a2,	// (0x0002b298) popup_image3_note_pane_t2

0xd3b0,	// (0x0002b2a6) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0002d83c) popup_image3_note_pane_t

0xd3be,	// (0x0002b2b4) popup_image3_note_pane_t3_copy1

0x6b7c,	// (0x00024a72) bg_myfav_hc_instruction_pane_ParamLimits

0x6b7c,	// (0x00024a72) bg_myfav_hc_instruction_pane

0x6b94,	// (0x00024a8a) cell_myfav_contact_pane_ParamLimits

0x6b94,	// (0x00024a8a) cell_myfav_contact_pane

0x6bae,	// (0x00024aa4) cell_myfav_contact_pane_cp1_ParamLimits

0x6bae,	// (0x00024aa4) cell_myfav_contact_pane_cp1

0x6bc6,	// (0x00024abc) cell_myfav_contact_pane_cp2_ParamLimits

0x6bc6,	// (0x00024abc) cell_myfav_contact_pane_cp2

0x6bde,	// (0x00024ad4) cell_myfav_contact_pane_cp3_ParamLimits

0x6bde,	// (0x00024ad4) cell_myfav_contact_pane_cp3

0x6bf5,	// (0x00024aeb) cell_myfav_contact_pane_cp4_ParamLimits

0x6bf5,	// (0x00024aeb) cell_myfav_contact_pane_cp4

0x6c0b,	// (0x00024b01) cell_myfav_contact_pane_cp5_ParamLimits

0x6c0b,	// (0x00024b01) cell_myfav_contact_pane_cp5

0x6c1f,	// (0x00024b15) cell_myfav_contact_pane_cp6_ParamLimits

0x6c1f,	// (0x00024b15) cell_myfav_contact_pane_cp6

0x6c33,	// (0x00024b29) cell_myfav_contact_pane_cp7_ParamLimits

0x6c33,	// (0x00024b29) cell_myfav_contact_pane_cp7

0xd3cc,	// (0x0002b2c2) listscroll_gen_pane_cp05

0x6c4b,	// (0x00024b41) main_myfav_hc_pane_g1_ParamLimits

0x6c4b,	// (0x00024b41) main_myfav_hc_pane_g1

0x6c61,	// (0x00024b57) main_myfav_hc_pane_g2_ParamLimits

0x6c61,	// (0x00024b57) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0002d843) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0002d843) main_myfav_hc_pane_g

0x6c8f,	// (0x00024b85) main_myfav_hc_pane_t1_ParamLimits

0x6c8f,	// (0x00024b85) main_myfav_hc_pane_t1

0xd3f1,	// (0x0002b2e7) main_myfav_hc_pane_t2_ParamLimits

0xd3f1,	// (0x0002b2e7) main_myfav_hc_pane_t2

0xd403,	// (0x0002b2f9) main_myfav_hc_pane_t3_ParamLimits

0xd403,	// (0x0002b2f9) main_myfav_hc_pane_t3

0x6ca6,	// (0x00024b9c) main_myfav_hc_pane_t4_ParamLimits

0x6ca6,	// (0x00024b9c) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0002d84a) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0002d84a) main_myfav_hc_pane_t

0xc8bc,	// (0x0002a7b2) bg_myfav_hc_instruction_pane_g1

0xd415,	// (0x0002b30b) cell_myfav_contact_pane_g1_ParamLimits

0xd415,	// (0x0002b30b) cell_myfav_contact_pane_g1

0xd415,	// (0x0002b30b) cell_myfav_contact_pane_g2_ParamLimits

0xd415,	// (0x0002b30b) cell_myfav_contact_pane_g2

0xd421,	// (0x0002b317) cell_myfav_contact_pane_g3_ParamLimits

0xd421,	// (0x0002b317) cell_myfav_contact_pane_g3

0xcbb0,	// (0x0002aaa6) cell_myfav_contact_pane_g4_ParamLimits

0xcbb0,	// (0x0002aaa6) cell_myfav_contact_pane_g4

0xd42e,	// (0x0002b324) cell_myfav_contact_pane_g5_ParamLimits

0xd42e,	// (0x0002b324) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0002d855) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0002d855) cell_myfav_contact_pane_g

0x6c77,	// (0x00024b6d) main_myfav_hc_pane_g3_ParamLimits

0x6c77,	// (0x00024b6d) main_myfav_hc_pane_g3

0x1017,	// (0x0001ef0d) popup_adpt_find_window

0x6cd0,	// (0x00024bc6) afind_page_pane_ParamLimits

0x6cd0,	// (0x00024bc6) afind_page_pane

0x6cdd,	// (0x00024bd3) aid_size_cell_afind_ParamLimits

0x6cdd,	// (0x00024bd3) aid_size_cell_afind

0x6cf7,	// (0x00024bed) bg_popup_sub_pane_cp09_ParamLimits

0x6cf7,	// (0x00024bed) bg_popup_sub_pane_cp09

0x6d04,	// (0x00024bfa) find_pane_cp01_ParamLimits

0x6d04,	// (0x00024bfa) find_pane_cp01

0xd43a,	// (0x0002b330) grid_afind_control_pane_ParamLimits

0xd43a,	// (0x0002b330) grid_afind_control_pane

0x6d11,	// (0x00024c07) grid_afind_pane_ParamLimits

0x6d11,	// (0x00024c07) grid_afind_pane

0x6d2d,	// (0x00024c23) cell_afind_pane_ParamLimits

0x6d2d,	// (0x00024c23) cell_afind_pane

0xc8bc,	// (0x0002a7b2) afind_page_pane_g1

0x6d75,	// (0x00024c6b) afind_page_pane_g2

0x6d7e,	// (0x00024c74) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0002d860) afind_page_pane_g

0x6d87,	// (0x00024c7d) afind_page_pane_t1

0xd44e,	// (0x0002b344) cell_afind_grid_control_pane_ParamLimits

0xd44e,	// (0x0002b344) cell_afind_grid_control_pane

0xd1eb,	// (0x0002b0e1) bg_button_pane_cp69_ParamLimits

0xd1eb,	// (0x0002b0e1) bg_button_pane_cp69

0x6da7,	// (0x00024c9d) cell_afind_pane_g1_ParamLimits

0x6da7,	// (0x00024c9d) cell_afind_pane_g1

0x6db4,	// (0x00024caa) cell_afind_pane_t1_ParamLimits

0x6db4,	// (0x00024caa) cell_afind_pane_t1

0xa619,	// (0x0002850f) bg_button_pane_cp72

0xd45d,	// (0x0002b353) cell_afind_grid_control_pane_g1

0x5151,	// (0x00023047) aid_image_placing_area_ParamLimits

0x5151,	// (0x00023047) aid_image_placing_area

0xceb9,	// (0x0002adaf) field_vitu_entry_pane_g1_ParamLimits

0xceb9,	// (0x0002adaf) field_vitu_entry_pane_g1

0xcec5,	// (0x0002adbb) field_vitu_entry_pane_g2_ParamLimits

0xcec5,	// (0x0002adbb) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0002d711) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0002d711) field_vitu_entry_pane_g

0x67fc,	// (0x000246f2) cell_vitu_itu_pane_g1_ParamLimits

0x683e,	// (0x00024734) cell_vitu_itu_pane_t3_ParamLimits

0x683e,	// (0x00024734) cell_vitu_itu_pane_t3

0xd19b,	// (0x0002b091) mp4_progress_pane_t1_ParamLimits

0xd1b4,	// (0x0002b0aa) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0002d7a6) mp4_progress_pane_t_ParamLimits

0xd1cd,	// (0x0002b0c3) mup_progress_pane_cp04_ParamLimits

0x6cba,	// (0x00024bb0) main_myfav_hc_pane_t5_ParamLimits

0x6cba,	// (0x00024bb0) main_myfav_hc_pane_t5

0x0eda,	// (0x0001edd0) aid_zoom_text_primary

0x1017,	// (0x0001ef0d) popup_adpt_find_window_ParamLimits

0x15e6,	// (0x0001f4dc) main_cam_set_pane

0x1fcf,	// (0x0001fec5) cam4_zoom_pane_ParamLimits

0x1fcf,	// (0x0001fec5) cam4_zoom_pane

0x6dc6,	// (0x00024cbc) main_cam_set_pane_g1_ParamLimits

0x6dc6,	// (0x00024cbc) main_cam_set_pane_g1

0x6dd4,	// (0x00024cca) main_cam_set_pane_g2_ParamLimits

0x6dd4,	// (0x00024cca) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0002d867) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0002d867) main_cam_set_pane_g

0x6de0,	// (0x00024cd6) main_cam_set_pane_t1_ParamLimits

0x6de0,	// (0x00024cd6) main_cam_set_pane_t1

0x6dfc,	// (0x00024cf2) main_cset_listscroll_pane_ParamLimits

0x6dfc,	// (0x00024cf2) main_cset_listscroll_pane

0x6e27,	// (0x00024d1d) main_cset_slider_pane_ParamLimits

0x6e27,	// (0x00024d1d) main_cset_slider_pane

0xd46e,	// (0x0002b364) main_cset_list_pane_ParamLimits

0xd46e,	// (0x0002b364) main_cset_list_pane

0xd47e,	// (0x0002b374) scroll_pane_cp028

0x6e46,	// (0x00024d3c) aid_area_touch_slider

0x6e62,	// (0x00024d58) cset_slider_pane

0x6e8c,	// (0x00024d82) main_cset_slider_pane_g1

0x6ea1,	// (0x00024d97) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0002d86c) main_cset_slider_pane_g

0xd4c3,	// (0x0002b3b9) main_cset_slider_pane_t1

0x6f63,	// (0x00024e59) main_cset_slider_pane_t2

0x6f7d,	// (0x00024e73) main_cset_slider_pane_t3

0x6f97,	// (0x00024e8d) main_cset_slider_pane_t4

0x6fb1,	// (0x00024ea7) main_cset_slider_pane_t5

0x6fcf,	// (0x00024ec5) main_cset_slider_pane_t6

0x6fe6,	// (0x00024edc) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0002d891) main_cset_slider_pane_t

0x70f2,	// (0x00024fe8) cset_list_set_pane_ParamLimits

0x70f2,	// (0x00024fe8) cset_list_set_pane

0x7108,	// (0x00024ffe) aid_position_infowindow_above

0x7110,	// (0x00025006) aid_position_infowindow_below

0xd563,	// (0x0002b459) cset_list_set_pane_g1_ParamLimits

0xd563,	// (0x0002b459) cset_list_set_pane_g1

0xd56f,	// (0x0002b465) cset_list_set_pane_g3_ParamLimits

0xd56f,	// (0x0002b465) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0002d8b0) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0002d8b0) cset_list_set_pane_g

0xd57e,	// (0x0002b474) cset_list_set_pane_t1_ParamLimits

0xd57e,	// (0x0002b474) cset_list_set_pane_t1

0xa3c5,	// (0x000282bb) list_highlight_pane_cp021_ParamLimits

0xa3c5,	// (0x000282bb) list_highlight_pane_cp021

0xb171,	// (0x00029067) cset_slider_pane_g1

0xb183,	// (0x00029079) cset_slider_pane_g2

0xb17a,	// (0x00029070) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0002d8b5) cset_slider_pane_g

0x24a3,	// (0x00020399) aid_area_touch_cam4_zoom

0x24ab,	// (0x000203a1) cam4_zoom_cont_pane

0x24b3,	// (0x000203a9) cam4_zoom_pane_g1

0x24bb,	// (0x000203b1) cam4_zoom_pane_g2

0x24c3,	// (0x000203b9) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0002d8bc) cam4_zoom_pane_g

0x24cb,	// (0x000203c1) cam4_zoom_cont_pane_g1

0x24d4,	// (0x000203ca) cam4_zoom_cont_pane_g2

0x24dd,	// (0x000203d3) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0002d8c3) cam4_zoom_cont_pane_g

0x6a64,	// (0x0002495a) call4_image_pane_ParamLimits

0x6a64,	// (0x0002495a) call4_image_pane

0xd1f7,	// (0x0002b0ed) call4_windows_conf_pane_ParamLimits

0xd238,	// (0x0002b12e) popup_call4_audio_in_window_ParamLimits

0xd238,	// (0x0002b12e) popup_call4_audio_in_window

0x9cbe,	// (0x00027bb4) bg_popup_call2_act_pane_cp02

0xd2ae,	// (0x0002b1a4) call4_list_conf_pane

0xc8bc,	// (0x0002a7b2) call4_image_pane_g1

0xc8bc,	// (0x0002a7b2) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x0002d5d7) call4_image_pane_g

0xd593,	// (0x0002b489) list_single_graphic_popup_conf4_pane_ParamLimits

0xd593,	// (0x0002b489) list_single_graphic_popup_conf4_pane

0x9cbe,	// (0x00027bb4) list_highlight_pane_cp022

0xd5a6,	// (0x0002b49c) list_single_graphic_popup_conf4_pane_g1

0xad2e,	// (0x00028c24) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0002d8ca) list_single_graphic_popup_conf4_pane_g

0xd5ae,	// (0x0002b4a4) list_single_graphic_popup_conf4_pane_t1

0x34fa,	// (0x000213f0) popup_vtel_slider_window_ParamLimits

0x34fa,	// (0x000213f0) popup_vtel_slider_window

0xd1d9,	// (0x0002b0cf) dialer2_ne_pane_t2_ParamLimits

0xd1d9,	// (0x0002b0cf) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0002d7ab) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0002d7ab) dialer2_ne_pane_t

0xa3c5,	// (0x000282bb) bg_popup_sub_pane_cp010_ParamLimits

0xa3c5,	// (0x000282bb) bg_popup_sub_pane_cp010

0x7118,	// (0x0002500e) popup_vtel_slider_window_g1_ParamLimits

0x7118,	// (0x0002500e) popup_vtel_slider_window_g1

0x7124,	// (0x0002501a) popup_vtel_slider_window_g2_ParamLimits

0x7124,	// (0x0002501a) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0002d8cf) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0002d8cf) popup_vtel_slider_window_g

0x716c,	// (0x00025062) vtel_slider_pane_ParamLimits

0x716c,	// (0x00025062) vtel_slider_pane

0x717b,	// (0x00025071) vtel_slider_pane_g1_ParamLimits

0x717b,	// (0x00025071) vtel_slider_pane_g1

0x7188,	// (0x0002507e) vtel_slider_pane_g2_ParamLimits

0x7188,	// (0x0002507e) vtel_slider_pane_g2

0x7195,	// (0x0002508b) vtel_slider_pane_g3_ParamLimits

0x7195,	// (0x0002508b) vtel_slider_pane_g3

0x717b,	// (0x00025071) vtel_slider_pane_g4_ParamLimits

0x717b,	// (0x00025071) vtel_slider_pane_g4

0x71a2,	// (0x00025098) vtel_slider_pane_g5_ParamLimits

0x71a2,	// (0x00025098) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0002d8d8) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0002d8d8) vtel_slider_pane_g

0x15e6,	// (0x0001f4dc) main_gallery2_pane

0x21ed,	// (0x000200e3) aid_size_row_itut2_dropdow_list_ParamLimits

0x21ed,	// (0x000200e3) aid_size_row_itut2_dropdow_list

0x225b,	// (0x00020151) grid_vitu2_function_top_pane_ParamLimits

0x225b,	// (0x00020151) grid_vitu2_function_top_pane

0x22b1,	// (0x000201a7) popup_vitu2_dropdown_list_window_ParamLimits

0x22b1,	// (0x000201a7) popup_vitu2_dropdown_list_window

0x22d1,	// (0x000201c7) popup_vitu2_match_list_window

0x24e6,	// (0x000203dc) cell_vitu2_function_top_pane_ParamLimits

0x24e6,	// (0x000203dc) cell_vitu2_function_top_pane

0x2506,	// (0x000203fc) cell_vitu2_function_top_pane_cp01_ParamLimits

0x2506,	// (0x000203fc) cell_vitu2_function_top_pane_cp01

0x2524,	// (0x0002041a) cell_vitu2_function_top_wide_pane_ParamLimits

0x2524,	// (0x0002041a) cell_vitu2_function_top_wide_pane

0x15e6,	// (0x0001f4dc) bg_button_pane_cp012

0x2542,	// (0x00020438) cell_vitu2_function_top_pane_g1

0x2556,	// (0x0002044c) bg_button_pane_cp013_ParamLimits

0x2556,	// (0x0002044c) bg_button_pane_cp013

0x71bd,	// (0x000250b3) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x71bd,	// (0x000250b3) cell_vitu2_function_top_wide_pane_g1

0x110e,	// (0x0001f004) bg_popup_sub_pane_cp20

0x2572,	// (0x00020468) list_vitu2_match_list_pane

0xd348,	// (0x0002b23e) bg_popup_sub_pane_cp20_g1

0xd350,	// (0x0002b246) bg_popup_sub_pane_cp20_g2

0xa820,	// (0x00028716) bg_popup_sub_pane_cp20_g3

0xd358,	// (0x0002b24e) bg_popup_sub_pane_cp20_g4

0xa800,	// (0x000286f6) bg_popup_sub_pane_cp20_g5

0xd5c4,	// (0x0002b4ba) bg_popup_sub_pane_cp20_g6

0xd368,	// (0x0002b25e) bg_popup_sub_pane_cp20_g7

0xd370,	// (0x0002b266) bg_popup_sub_pane_cp20_g8

0xd378,	// (0x0002b26e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0002d8e3) bg_popup_sub_pane_cp20_g

0x258a,	// (0x00020480) list_vitu2_match_list_item_pane_ParamLimits

0x258a,	// (0x00020480) list_vitu2_match_list_item_pane

0x259c,	// (0x00020492) list_vitu2_match_list_item_pane_t1

0x111c,	// (0x0001f012) bg_popup_sub_pane_cp21

0x25aa,	// (0x000204a0) grid_vitu2_dropdown_list_pane

0x25b2,	// (0x000204a8) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x25b2,	// (0x000204a8) cell_vitu2_dropdown_list_char_pane

0x25d3,	// (0x000204c9) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x25d3,	// (0x000204c9) cell_vitu2_dropdown_list_ctrl_pane

0xd5cc,	// (0x0002b4c2) cell_vitu2_dropdown_list_char_pane_g1

0xd5d5,	// (0x0002b4cb) cell_vitu2_dropdown_list_char_pane_g2

0xd5de,	// (0x0002b4d4) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0002d900) cell_vitu2_dropdown_list_char_pane_g

0x25ff,	// (0x000204f5) cell_vitu2_dropdown_list_char_pane_t1

0x7219,	// (0x0002510f) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7219,	// (0x0002510f) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7226,	// (0x0002511c) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7226,	// (0x0002511c) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7233,	// (0x00025129) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7233,	// (0x00025129) cell_vitu2_dropdown_list_ctrl_pane_g3

0x260d,	// (0x00020503) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x260d,	// (0x00020503) cell_vitu2_dropdown_list_ctrl_pane_g4

0x203f,	// (0x0001ff35) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x203f,	// (0x0001ff35) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0002d907) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0002d907) cell_vitu2_dropdown_list_ctrl_pane_g

0x7240,	// (0x00025136) aid_size_cell_gallery2_ParamLimits

0x7240,	// (0x00025136) aid_size_cell_gallery2

0x725a,	// (0x00025150) grid_gallery2_pane_ParamLimits

0x725a,	// (0x00025150) grid_gallery2_pane

0x6685,	// (0x0002457b) scroll_pane_cp029_ParamLimits

0x6685,	// (0x0002457b) scroll_pane_cp029

0x7271,	// (0x00025167) cell_gallery2_pane_ParamLimits

0x7271,	// (0x00025167) cell_gallery2_pane

0xd5e7,	// (0x0002b4dd) cell_gallery2_pane_g2

0xe9d9,	// (0x0002c8cf) cell_gallery2_pane_g3

0xd5ef,	// (0x0002b4e5) cell_gallery2_pane_g4

0xd5f7,	// (0x0002b4ed) cell_gallery2_pane_g5

0xb03b,	// (0x00028f31) grid_highlight_pane_cp10

0x22d1,	// (0x000201c7) popup_vitu2_match_list_window_ParamLimits

0x22e5,	// (0x000201db) popup_vitu2_query_window_ParamLimits

0x22e5,	// (0x000201db) popup_vitu2_query_window

0x111c,	// (0x0001f012) bg_vitu2_candi_button_pane

0xd5cc,	// (0x0002b4c2) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd5d5,	// (0x0002b4cb) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd5de,	// (0x0002b4d4) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x72c2,	// (0x000251b8) bg_button_pane_cp015

0x72d4,	// (0x000251ca) bg_button_pane_cp016

0x72e7,	// (0x000251dd) bg_button_pane_cp017

0xc4ab,	// (0x0002a3a1) bg_popup_sub_pane_cp22

0xd5ff,	// (0x0002b4f5) popup_vitu2_query_window_g1

0x732c,	// (0x00025222) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0002d912) popup_vitu2_query_window_g

0x7349,	// (0x0002523f) popup_vitu2_query_window_t1_ParamLimits

0x7349,	// (0x0002523f) popup_vitu2_query_window_t1

0x737c,	// (0x00025272) popup_vitu2_query_window_t2_ParamLimits

0x737c,	// (0x00025272) popup_vitu2_query_window_t2

0x738e,	// (0x00025284) popup_vitu2_query_window_t3_ParamLimits

0x738e,	// (0x00025284) popup_vitu2_query_window_t3

0x73b6,	// (0x000252ac) popup_vitu2_query_window_t4_ParamLimits

0x73b6,	// (0x000252ac) popup_vitu2_query_window_t4

0x73d7,	// (0x000252cd) popup_vitu2_query_window_t5_ParamLimits

0x73d7,	// (0x000252cd) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0002d919) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0002d919) popup_vitu2_query_window_t

0xd466,	// (0x0002b35c) main_cset_text_pane

0x6e46,	// (0x00024d3c) aid_area_touch_slider_ParamLimits

0x6e62,	// (0x00024d58) cset_slider_pane_ParamLimits

0x6e8c,	// (0x00024d82) main_cset_slider_pane_g1_ParamLimits

0x6ea1,	// (0x00024d97) main_cset_slider_pane_g2_ParamLimits

0xd487,	// (0x0002b37d) main_cset_slider_pane_g3_ParamLimits

0xd487,	// (0x0002b37d) main_cset_slider_pane_g3

0x6eb6,	// (0x00024dac) main_cset_slider_pane_g4_ParamLimits

0x6eb6,	// (0x00024dac) main_cset_slider_pane_g4

0x6ec5,	// (0x00024dbb) main_cset_slider_pane_g5_ParamLimits

0x6ec5,	// (0x00024dbb) main_cset_slider_pane_g5

0x6ed3,	// (0x00024dc9) main_cset_slider_pane_g6_ParamLimits

0x6ed3,	// (0x00024dc9) main_cset_slider_pane_g6

0xf976,	// (0x0002d86c) main_cset_slider_pane_g_ParamLimits

0xd4c3,	// (0x0002b3b9) main_cset_slider_pane_t1_ParamLimits

0x6f63,	// (0x00024e59) main_cset_slider_pane_t2_ParamLimits

0x6f7d,	// (0x00024e73) main_cset_slider_pane_t3_ParamLimits

0x6f97,	// (0x00024e8d) main_cset_slider_pane_t4_ParamLimits

0x6fb1,	// (0x00024ea7) main_cset_slider_pane_t5_ParamLimits

0x6fcf,	// (0x00024ec5) main_cset_slider_pane_t6_ParamLimits

0x6fe6,	// (0x00024edc) main_cset_slider_pane_t7_ParamLimits

0x7014,	// (0x00024f0a) main_cset_slider_pane_t8_ParamLimits

0x7014,	// (0x00024f0a) main_cset_slider_pane_t8

0x703c,	// (0x00024f32) main_cset_slider_pane_t9_ParamLimits

0x703c,	// (0x00024f32) main_cset_slider_pane_t9

0x7064,	// (0x00024f5a) main_cset_slider_pane_t10_ParamLimits

0x7064,	// (0x00024f5a) main_cset_slider_pane_t10

0x708c,	// (0x00024f82) main_cset_slider_pane_t11_ParamLimits

0x708c,	// (0x00024f82) main_cset_slider_pane_t11

0x70b6,	// (0x00024fac) main_cset_slider_pane_t12_ParamLimits

0x70b6,	// (0x00024fac) main_cset_slider_pane_t12

0x70d3,	// (0x00024fc9) main_cset_slider_pane_t13_ParamLimits

0x70d3,	// (0x00024fc9) main_cset_slider_pane_t13

0xf99b,	// (0x0002d891) main_cset_slider_pane_t_ParamLimits

0x9cbe,	// (0x00027bb4) bg_popup_sub_pane_cp011

0xd626,	// (0x0002b51c) main_cset_text_pane_g1

0xd62e,	// (0x0002b524) main_cset_text_pane_t1

0xd63c,	// (0x0002b532) main_cset_text_pane_t2

0xd64a,	// (0x0002b540) main_cset_text_pane_t3

0xd658,	// (0x0002b54e) main_cset_text_pane_t4

0xd666,	// (0x0002b55c) main_cset_text_pane_t5

0xd674,	// (0x0002b56a) main_cset_text_pane_t6

0xd682,	// (0x0002b578) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0002d928) main_cset_text_pane_t

0x111c,	// (0x0001f012) main_cam4_burst_pane

0x111c,	// (0x0001f012) main_cam5_pane

0x6d95,	// (0x00024c8b) bg_button_pane_cp019

0x6d9e,	// (0x00024c94) bg_button_pane_cp020

0xd493,	// (0x0002b389) main_cset_slider_pane_g7_ParamLimits

0xd493,	// (0x0002b389) main_cset_slider_pane_g7

0xd49f,	// (0x0002b395) main_cset_slider_pane_g8_ParamLimits

0xd49f,	// (0x0002b395) main_cset_slider_pane_g8

0x6ee7,	// (0x00024ddd) main_cset_slider_pane_g9_ParamLimits

0x6ee7,	// (0x00024ddd) main_cset_slider_pane_g9

0x6ef3,	// (0x00024de9) main_cset_slider_pane_g10_ParamLimits

0x6ef3,	// (0x00024de9) main_cset_slider_pane_g10

0x6eff,	// (0x00024df5) main_cset_slider_pane_g11_ParamLimits

0x6eff,	// (0x00024df5) main_cset_slider_pane_g11

0x6f0b,	// (0x00024e01) main_cset_slider_pane_g12_ParamLimits

0x6f0b,	// (0x00024e01) main_cset_slider_pane_g12

0x6f17,	// (0x00024e0d) main_cset_slider_pane_g13_ParamLimits

0x6f17,	// (0x00024e0d) main_cset_slider_pane_g13

0x6f23,	// (0x00024e19) main_cset_slider_pane_g14_ParamLimits

0x6f23,	// (0x00024e19) main_cset_slider_pane_g14

0x6f2f,	// (0x00024e25) main_cset_slider_pane_g15_ParamLimits

0x6f2f,	// (0x00024e25) main_cset_slider_pane_g15

0xd4f1,	// (0x0002b3e7) main_cset_slider_pane_t14_ParamLimits

0xd4f1,	// (0x0002b3e7) main_cset_slider_pane_t14

0xd52a,	// (0x0002b420) main_cset_slider_pane_t15_ParamLimits

0xd52a,	// (0x0002b420) main_cset_slider_pane_t15

0x744e,	// (0x00025344) aid_cam4_burst_size_cell_ParamLimits

0x744e,	// (0x00025344) aid_cam4_burst_size_cell

0x746a,	// (0x00025360) grid_cam4_burst_pane_ParamLimits

0x746a,	// (0x00025360) grid_cam4_burst_pane

0x749a,	// (0x00025390) linegrid_cam4_burst_pane_ParamLimits

0x749a,	// (0x00025390) linegrid_cam4_burst_pane

0x74ba,	// (0x000253b0) scroll_pane_cp30_ParamLimits

0x74ba,	// (0x000253b0) scroll_pane_cp30

0x74c6,	// (0x000253bc) cell_cam4_burst_pane_ParamLimits

0x74c6,	// (0x000253bc) cell_cam4_burst_pane

0xd690,	// (0x0002b586) linegrid_cam4_burst_pane_g1_ParamLimits

0xd690,	// (0x0002b586) linegrid_cam4_burst_pane_g1

0x7502,	// (0x000253f8) linegrid_cam4_burst_pane_g2_ParamLimits

0x7502,	// (0x000253f8) linegrid_cam4_burst_pane_g2

0xd69d,	// (0x0002b593) linegrid_cam4_burst_pane_g3_ParamLimits

0xd69d,	// (0x0002b593) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0002d937) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0002d937) linegrid_cam4_burst_pane_g

0x7513,	// (0x00025409) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7513,	// (0x00025409) linegrid_cam4_burst_pane_g3_copy1

0xd6aa,	// (0x0002b5a0) linegrid_cam4_burst_pane_g4_ParamLimits

0xd6aa,	// (0x0002b5a0) linegrid_cam4_burst_pane_g4

0x752d,	// (0x00025423) linegrid_cam4_burst_pane_g5_ParamLimits

0x752d,	// (0x00025423) linegrid_cam4_burst_pane_g5

0x753e,	// (0x00025434) linegrid_cam4_burst_pane_g6_ParamLimits

0x753e,	// (0x00025434) linegrid_cam4_burst_pane_g6

0xd6c3,	// (0x0002b5b9) linegrid_cam4_burst_pane_g7_ParamLimits

0xd6c3,	// (0x0002b5b9) linegrid_cam4_burst_pane_g7

0x754f,	// (0x00025445) cell_cam4_burst_pane_g1

0xd6dc,	// (0x0002b5d2) main_cam5_pane_t1_ParamLimits

0xd6dc,	// (0x0002b5d2) main_cam5_pane_t1

0xd6ee,	// (0x0002b5e4) main_cam5_pane_t2_ParamLimits

0xd6ee,	// (0x0002b5e4) main_cam5_pane_t2

0xd700,	// (0x0002b5f6) main_cam5_pane_t3_ParamLimits

0xd700,	// (0x0002b5f6) main_cam5_pane_t3

0xd712,	// (0x0002b608) main_cam5_pane_t4_ParamLimits

0xd712,	// (0x0002b608) main_cam5_pane_t4

0xd72a,	// (0x0002b620) main_cam5_pane_t5_ParamLimits

0xd72a,	// (0x0002b620) main_cam5_pane_t5

0xd73e,	// (0x0002b634) main_cam5_pane_t6_ParamLimits

0xd73e,	// (0x0002b634) main_cam5_pane_t6

0xd752,	// (0x0002b648) main_cam5_pane_t7_ParamLimits

0xd752,	// (0x0002b648) main_cam5_pane_t7

0xd764,	// (0x0002b65a) main_cam5_pane_t8_ParamLimits

0xd764,	// (0x0002b65a) main_cam5_pane_t8

0xd780,	// (0x0002b676) main_cam5_pane_t9_ParamLimits

0xd780,	// (0x0002b676) main_cam5_pane_t9

0xd792,	// (0x0002b688) main_cam5_pane_t10_ParamLimits

0xd792,	// (0x0002b688) main_cam5_pane_t10

0xd7a4,	// (0x0002b69a) main_cam5_pane_t11_ParamLimits

0xd7a4,	// (0x0002b69a) main_cam5_pane_t11

0xd7b6,	// (0x0002b6ac) main_cam5_pane_t12_ParamLimits

0xd7b6,	// (0x0002b6ac) main_cam5_pane_t12

0xd7cb,	// (0x0002b6c1) main_cam5_pane_t13_ParamLimits

0xd7cb,	// (0x0002b6c1) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0002d943) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0002d943) main_cam5_pane_t

0x10cd,	// (0x0001efc3) popup_scut_keymap_window_ParamLimits

0x10cd,	// (0x0001efc3) popup_scut_keymap_window

0x7562,	// (0x00025458) aid_size_cell_brow_shortcut

0xb03b,	// (0x00028f31) bg_popup_window_pane_cp010

0x756e,	// (0x00025464) grid_scut_pane

0x757a,	// (0x00025470) cell_scut_pane_ParamLimits

0x757a,	// (0x00025470) cell_scut_pane

0x7591,	// (0x00025487) cell_scut_pane_g1

0xd7e8,	// (0x0002b6de) cell_scut_pane_t1

0xd7f7,	// (0x0002b6ed) cell_scut_pane_t2

0x759a,	// (0x00025490) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0002d95e) cell_scut_pane_t

0x5ede,	// (0x00023dd4) main_mup3_pane_g8_ParamLimits

0x5ede,	// (0x00023dd4) main_mup3_pane_g8

0x21fb,	// (0x000200f1) area_vitu2_query_pane_ParamLimits

0x21fb,	// (0x000200f1) area_vitu2_query_pane

0x72fa,	// (0x000251f0) input_focus_pane_cp08

0xd806,	// (0x0002b6fc) area_vitu2_query_pane_g1

0x75a8,	// (0x0002549e) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0002d965) area_vitu2_query_pane_g

0x75b9,	// (0x000254af) area_vitu2_query_pane_t1_ParamLimits

0x75b9,	// (0x000254af) area_vitu2_query_pane_t1

0x75cd,	// (0x000254c3) area_vitu2_query_pane_t2_ParamLimits

0x75cd,	// (0x000254c3) area_vitu2_query_pane_t2

0x75e1,	// (0x000254d7) area_vitu2_query_pane_t3_ParamLimits

0x75e1,	// (0x000254d7) area_vitu2_query_pane_t3

0xd812,	// (0x0002b708) area_vitu2_query_pane_t4_ParamLimits

0xd812,	// (0x0002b708) area_vitu2_query_pane_t4

0xd83a,	// (0x0002b730) area_vitu2_query_pane_t5_ParamLimits

0xd83a,	// (0x0002b730) area_vitu2_query_pane_t5

0xd862,	// (0x0002b758) area_vitu2_query_pane_t6_ParamLimits

0xd862,	// (0x0002b758) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0002d96a) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0002d96a) area_vitu2_query_pane_t

0x7609,	// (0x000254ff) bg_button_pane_cp018

0x7617,	// (0x0002550d) bg_button_pane_cp021

0x7623,	// (0x00025519) bg_button_pane_cp022

0x7634,	// (0x0002552a) input_focus_pane_cp09

0xae6a,	// (0x00028d60) aid_size_touch_mv_arrow_left

0xae93,	// (0x00028d89) aid_size_touch_mv_arrow_right

0x6f47,	// (0x00024e3d) main_cset_slider_pane_g16_ParamLimits

0x6f47,	// (0x00024e3d) main_cset_slider_pane_g16

0x6f55,	// (0x00024e4b) main_cset_slider_pane_g17_ParamLimits

0x6f55,	// (0x00024e4b) main_cset_slider_pane_g17

0x754f,	// (0x00025445) cell_cam4_burst_pane_g1_ParamLimits

0x9cbe,	// (0x00027bb4) compa_mode_pane

0x7130,	// (0x00025026) popup_vtel_slider_window_g3_ParamLimits

0x7130,	// (0x00025026) popup_vtel_slider_window_g3

0x7144,	// (0x0002503a) popup_vtel_slider_window_g4_ParamLimits

0x7144,	// (0x0002503a) popup_vtel_slider_window_g4

0x7158,	// (0x0002504e) popup_vtel_slider_window_t1_ParamLimits

0x7158,	// (0x0002504e) popup_vtel_slider_window_t1

0x111c,	// (0x0001f012) main_cl_pane

0x1684,	// (0x0001f57a) popup_imed_adjust2_window_ParamLimits

0xc4ab,	// (0x0002a3a1) bg_tb_trans_pane_cp05_ParamLimits

0xcdee,	// (0x0002ace4) popup_imed_adjust2_window_g1_ParamLimits

0xcdfd,	// (0x0002acf3) popup_imed_adjust2_window_g2_ParamLimits

0xcdfd,	// (0x0002acf3) popup_imed_adjust2_window_g2

0xce09,	// (0x0002acff) popup_imed_adjust2_window_g3_ParamLimits

0xce09,	// (0x0002acff) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0002d6d5) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0002d6d5) popup_imed_adjust2_window_g

0xce15,	// (0x0002ad0b) popup_imed_adjust2_window_t1_ParamLimits

0xce2d,	// (0x0002ad23) slider_imed_adjust_pane_ParamLimits

0xce41,	// (0x0002ad37) slider_imed_adjust_pane_g1_ParamLimits

0xce51,	// (0x0002ad47) slider_imed_adjust_pane_g2_ParamLimits

0xce61,	// (0x0002ad57) slider_imed_adjust_pane_g3_ParamLimits

0xce72,	// (0x0002ad68) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0002d6dc) slider_imed_adjust_pane_g_ParamLimits

0x1f78,	// (0x0001fe6e) aid_touch_area_cam4_ParamLimits

0x1f78,	// (0x0001fe6e) aid_touch_area_cam4

0x1f88,	// (0x0001fe7e) battery_pane_cp01

0x200f,	// (0x0001ff05) main_camera4_pane_g6_ParamLimits

0x200f,	// (0x0001ff05) main_camera4_pane_g6

0x202d,	// (0x0001ff23) main_camera4_pane_t2_ParamLimits

0x202d,	// (0x0001ff23) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0002d7df) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0002d7df) main_camera4_pane_t

0x209e,	// (0x0001ff94) aid_touch_area_vid4_ParamLimits

0x209e,	// (0x0001ff94) aid_touch_area_vid4

0x20de,	// (0x0001ffd4) main_video4_pane_g5_ParamLimits

0x20de,	// (0x0001ffd4) main_video4_pane_g5

0x2102,	// (0x0001fff8) vid4_progress_pane_ParamLimits

0x2102,	// (0x0001fff8) vid4_progress_pane

0xd4ab,	// (0x0002b3a1) main_cset_slider_pane_g18_ParamLimits

0xd4ab,	// (0x0002b3a1) main_cset_slider_pane_g18

0xd6d0,	// (0x0002b5c6) cell_cam4_burst_pane_g2_ParamLimits

0xd6d0,	// (0x0002b5c6) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0002d93e) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0002d93e) cell_cam4_burst_pane_g

0x7645,	// (0x0002553b) bg_cl_pane_ParamLimits

0x7645,	// (0x0002553b) bg_cl_pane

0x7651,	// (0x00025547) cl_header_pane_ParamLimits

0x7651,	// (0x00025547) cl_header_pane

0x765d,	// (0x00025553) cl_listscroll_pane_ParamLimits

0x765d,	// (0x00025553) cl_listscroll_pane

0xd8ae,	// (0x0002b7a4) bg_cl_pane_g1

0xd8b6,	// (0x0002b7ac) bg_cl_pane_g2

0xd8be,	// (0x0002b7b4) bg_cl_pane_g3

0xd8c6,	// (0x0002b7bc) bg_cl_pane_g4

0xd8ce,	// (0x0002b7c4) bg_cl_pane_g5

0xd8d6,	// (0x0002b7cc) bg_cl_pane_g6

0xd8de,	// (0x0002b7d4) bg_cl_pane_g7

0xd8e6,	// (0x0002b7dc) bg_cl_pane_g8

0xd8ee,	// (0x0002b7e4) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0002d979) bg_cl_pane_g

0x7669,	// (0x0002555f) aid_height_cl_leading_ParamLimits

0x7669,	// (0x0002555f) aid_height_cl_leading

0x7675,	// (0x0002556b) aid_height_cl_text_ParamLimits

0x7675,	// (0x0002556b) aid_height_cl_text

0xd3d5,	// (0x0002b2cb) bg_cl_header_pane_ParamLimits

0xd3d5,	// (0x0002b2cb) bg_cl_header_pane

0x768d,	// (0x00025583) cl_header_pane_g1_ParamLimits

0x768d,	// (0x00025583) cl_header_pane_g1

0x769a,	// (0x00025590) cl_header_pane_t1_ParamLimits

0x769a,	// (0x00025590) cl_header_pane_t1

0xd8f6,	// (0x0002b7ec) cl_list_pane

0xd47e,	// (0x0002b374) hc_scroll_pane_cp01

0xa800,	// (0x000286f6) bg_cl_header_pane_g1

0xd348,	// (0x0002b23e) bg_cl_header_pane_g2

0xa820,	// (0x00028716) bg_cl_header_pane_g3

0xd358,	// (0x0002b24e) bg_cl_header_pane_g4

0xd350,	// (0x0002b246) bg_cl_header_pane_g5

0xd5c4,	// (0x0002b4ba) bg_cl_header_pane_g6

0xd370,	// (0x0002b266) bg_cl_header_pane_g7

0xd378,	// (0x0002b26e) bg_cl_header_pane_g8

0xd368,	// (0x0002b25e) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0002d98c) bg_cl_header_pane_g

0x76ac,	// (0x000255a2) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x76ac,	// (0x000255a2) hc_cl_list_double_graphic_heading_pane

0x76bd,	// (0x000255b3) hc_cl_list_single_graphic_pane_ParamLimits

0x76bd,	// (0x000255b3) hc_cl_list_single_graphic_pane

0x76d6,	// (0x000255cc) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x76d6,	// (0x000255cc) hc_cl_list_single_graphic_pane_g1

0x76e2,	// (0x000255d8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x76e2,	// (0x000255d8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0002d99f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0002d99f) hc_cl_list_single_graphic_pane_g

0x76f6,	// (0x000255ec) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x76f6,	// (0x000255ec) hc_cl_list_single_graphic_pane_t1

0x76d6,	// (0x000255cc) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x76d6,	// (0x000255cc) hc_cl_list_double_graphic_heading_pane_g1

0x770b,	// (0x00025601) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x770b,	// (0x00025601) hc_cl_list_double_graphic_heading_pane_g2

0x771f,	// (0x00025615) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x771f,	// (0x00025615) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0002d9a4) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0002d9a4) hc_cl_list_double_graphic_heading_pane_g

0x7733,	// (0x00025629) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7733,	// (0x00025629) hc_cl_list_double_graphic_heading_pane_t1

0x7748,	// (0x0002563e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7748,	// (0x0002563e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0002d9ab) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0002d9ab) hc_cl_list_double_graphic_heading_pane_t

0x2631,	// (0x00020527) vid4_progress_pane_g1

0x2643,	// (0x00020539) vid4_progress_pane_g2

0xaae1,	// (0x000289d7) vid4_progress_pane_g3

0x2653,	// (0x00020549) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0002d9b0) vid4_progress_pane_g

0x2671,	// (0x00020567) vid4_progress_pane_t1

0x2686,	// (0x0002057c) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0002d9bb) vid4_progress_pane_t

0x26b1,	// (0x000205a7) wait_bar_pane_cp07

0xc6af,	// (0x0002a5a5) blid_firmament_pane_ParamLimits

0xc6f2,	// (0x0002a5e8) popup_blid_sat_info2_window_g1

0xc716,	// (0x0002a60c) popup_blid_sat_info2_window_t3

0xc724,	// (0x0002a61a) popup_blid_sat_info2_window_t4

0xc732,	// (0x0002a628) popup_blid_sat_info2_window_t5

0xc740,	// (0x0002a636) popup_blid_sat_info2_window_t6

0xc750,	// (0x0002a646) popup_blid_sat_info2_window_t7

0xc75e,	// (0x0002a654) popup_blid_sat_info2_window_t8

0xc76c,	// (0x0002a662) popup_blid_sat_info2_window_t9

0xc77a,	// (0x0002a670) popup_blid_sat_info2_window_t10

0xc83c,	// (0x0002a732) aid_firma_cardinal_ParamLimits

0xc850,	// (0x0002a746) blid_firmament_pane_t1_ParamLimits

0xc867,	// (0x0002a75d) blid_firmament_pane_t2_ParamLimits

0xc87e,	// (0x0002a774) blid_firmament_pane_t3_ParamLimits

0xc895,	// (0x0002a78b) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x0002d5ce) blid_firmament_pane_t_ParamLimits

0xc8ac,	// (0x0002a7a2) blid_sat_info_pane_ParamLimits

0x15e6,	// (0x0001f4dc) main_cam_set_pane_ParamLimits

0x661e,	// (0x00024514) aid_size_cell_colour_35_ParamLimits

0x6638,	// (0x0002452e) aid_size_cell_colour_112_ParamLimits

0x664f,	// (0x00024545) aid_size_cell_effect_ParamLimits

0xa3c5,	// (0x000282bb) bg_tb_trans_pane_cp02_ParamLimits

0xafe1,	// (0x00028ed7) heading_imed_pane_ParamLimits

0x6669,	// (0x0002455f) listscroll_imed_pane_ParamLimits

0xbad1,	// (0x000299c7) popup_call2_audio_first_window_g5_ParamLimits

0xbad1,	// (0x000299c7) popup_call2_audio_first_window_g5

0x1e03,	// (0x0001fcf9) aid_size_touch_image3_arrow_left_ParamLimits

0x1e03,	// (0x0001fcf9) aid_size_touch_image3_arrow_left

0x1e19,	// (0x0001fd0f) aid_size_touch_image3_arrow_right_ParamLimits

0x1e19,	// (0x0001fd0f) aid_size_touch_image3_arrow_right

0x269c,	// (0x00020592) vid4_progress_pane_t3

0x6907,	// (0x000247fd) main_hwr_training_symbol_option_pane_ParamLimits

0x6907,	// (0x000247fd) main_hwr_training_symbol_option_pane

0xd0db,	// (0x0002afd1) popup_hwr_training_preview_window_ParamLimits

0xd0db,	// (0x0002afd1) popup_hwr_training_preview_window

0x1b01,	// (0x0001f9f7) hwr_training_navi_pane_g5_ParamLimits

0x1b01,	// (0x0001f9f7) hwr_training_navi_pane_g5

0xd336,	// (0x0002b22c) popup_char_count_window

0x110e,	// (0x0001f004) bg_popup_sub_pane_cp20_ParamLimits

0x2572,	// (0x00020468) list_vitu2_match_list_pane_ParamLimits

0x257e,	// (0x00020474) vitu2_page_scroll_pane_ParamLimits

0x257e,	// (0x00020474) vitu2_page_scroll_pane

0xd921,	// (0x0002b817) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd921,	// (0x0002b817) list_single_hwr_training_symbol_option_pane

0xd934,	// (0x0002b82a) list_single_hwr_training_symbol_option_pane_g1

0xd93c,	// (0x0002b832) list_single_hwr_training_symbol_option_pane_t1

0xd94a,	// (0x0002b840) bg_button_pane_cp023

0xd953,	// (0x0002b849) bg_button_pane_cp024

0x778c,	// (0x00025682) vitu2_page_scroll_pane_g1

0x7794,	// (0x0002568a) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0002d9c2) vitu2_page_scroll_pane_g

0x779c,	// (0x00025692) vitu2_page_scroll_pane_t1

0xd986,	// (0x0002b87c) popup_char_count_window_g1

0xd98f,	// (0x0002b885) popup_char_count_window_g2

0xd998,	// (0x0002b88e) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0002d9c7) popup_char_count_window_g

0xd9a1,	// (0x0002b897) popup_char_count_window_t1

0x111c,	// (0x0001f012) main_vded2_pane

0xcdda,	// (0x0002acd0) aid_size_cell_imed_line

0xcde4,	// (0x0002acda) grid_imed_line_width_pane

0x2170,	// (0x00020066) vid4_indicators_pane_g4

0xd9af,	// (0x0002b8a5) cell_imed_line_width_pane_ParamLimits

0xd9af,	// (0x0002b8a5) cell_imed_line_width_pane

0xd9c3,	// (0x0002b8b9) cell_imed_line_width_pane_g1

0xd9cc,	// (0x0002b8c2) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0002d9ce) cell_imed_line_width_pane_g

0x77ab,	// (0x000256a1) main_vded2_pane_g1_ParamLimits

0x77ab,	// (0x000256a1) main_vded2_pane_g1

0x77b8,	// (0x000256ae) main_vded2_pane_g2_ParamLimits

0x77b8,	// (0x000256ae) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0002d9d3) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0002d9d3) main_vded2_pane_g

0x77c6,	// (0x000256bc) vded2_slider_pane_ParamLimits

0x77c6,	// (0x000256bc) vded2_slider_pane

0x77d3,	// (0x000256c9) aid_size_touch_vded2_end

0x77dd,	// (0x000256d3) aid_size_touch_vded2_playhead

0xd9d4,	// (0x0002b8ca) aid_size_touch_vded2_start

0xd9dc,	// (0x0002b8d2) vded2_slider_bg_pane

0xd9e5,	// (0x0002b8db) vded2_slider_pane_g1

0xd9ee,	// (0x0002b8e4) vded2_slider_pane_g2

0x77e5,	// (0x000256db) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0002d9d8) vded2_slider_pane_g

0xd9f6,	// (0x0002b8ec) vded2_slider_bg_pane_g1

0xd9ff,	// (0x0002b8f5) vded2_slider_bg_pane_g2

0xda08,	// (0x0002b8fe) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0002d9df) vded2_slider_bg_pane_g

0x4ebb,	// (0x00022db1) aid_postcard_touch_down_pane_ParamLimits

0x4ebb,	// (0x00022db1) aid_postcard_touch_down_pane

0x4ecb,	// (0x00022dc1) aid_postcard_touch_up_pane_ParamLimits

0x4ecb,	// (0x00022dc1) aid_postcard_touch_up_pane

0x111c,	// (0x0001f012) main_blid2_pane

0x160f,	// (0x0001f505) popup_blid2_search_window

0x9cbe,	// (0x00027bb4) blid2_gps_pane

0x9cbe,	// (0x00027bb4) blid2_navig_pane

0x9cbe,	// (0x00027bb4) blid2_search_pane

0x9cbe,	// (0x00027bb4) blid2_tripm_pane

0x77ee,	// (0x000256e4) blid2_search_pane_g1_ParamLimits

0x77ee,	// (0x000256e4) blid2_search_pane_g1

0x77fe,	// (0x000256f4) blid2_search_pane_t1_ParamLimits

0x77fe,	// (0x000256f4) blid2_search_pane_t1

0x7810,	// (0x00025706) aid_size_cell_blid2_gps_ParamLimits

0x7810,	// (0x00025706) aid_size_cell_blid2_gps

0x7820,	// (0x00025716) blid2_gps_pane_g1_ParamLimits

0x7820,	// (0x00025716) blid2_gps_pane_g1

0x782c,	// (0x00025722) grid_blid2_satellite_pane_ParamLimits

0x782c,	// (0x00025722) grid_blid2_satellite_pane

0x783c,	// (0x00025732) blid2_navig_pane_g1_ParamLimits

0x783c,	// (0x00025732) blid2_navig_pane_g1

0x7848,	// (0x0002573e) blid2_navig_pane_t1_ParamLimits

0x7848,	// (0x0002573e) blid2_navig_pane_t1

0x785a,	// (0x00025750) blid2_navig_pane_t2_ParamLimits

0x785a,	// (0x00025750) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0002d9e6) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0002d9e6) blid2_navig_pane_t

0x786c,	// (0x00025762) blid2_navig_ring_pane_ParamLimits

0x786c,	// (0x00025762) blid2_navig_ring_pane

0x787c,	// (0x00025772) blid2_speed_pane_ParamLimits

0x787c,	// (0x00025772) blid2_speed_pane

0x7888,	// (0x0002577e) blid2_tripm_pane_g1_ParamLimits

0x7888,	// (0x0002577e) blid2_tripm_pane_g1

0x7898,	// (0x0002578e) blid2_tripm_pane_g2_ParamLimits

0x7898,	// (0x0002578e) blid2_tripm_pane_g2

0x78a4,	// (0x0002579a) blid2_tripm_pane_g3_ParamLimits

0x78a4,	// (0x0002579a) blid2_tripm_pane_g3

0x78b0,	// (0x000257a6) blid2_tripm_pane_g4_ParamLimits

0x78b0,	// (0x000257a6) blid2_tripm_pane_g4

0x78bc,	// (0x000257b2) blid2_tripm_pane_g5_ParamLimits

0x78bc,	// (0x000257b2) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0002d9eb) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0002d9eb) blid2_tripm_pane_g

0x78d8,	// (0x000257ce) blid2_tripm_pane_t1_ParamLimits

0x78d8,	// (0x000257ce) blid2_tripm_pane_t1

0x78ec,	// (0x000257e2) blid2_tripm_pane_t2_ParamLimits

0x78ec,	// (0x000257e2) blid2_tripm_pane_t2

0x78fe,	// (0x000257f4) blid2_tripm_pane_t3_ParamLimits

0x78fe,	// (0x000257f4) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0002d9f8) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0002d9f8) blid2_tripm_pane_t

0x7930,	// (0x00025826) cell_blid2_satellite_pane_ParamLimits

0x7930,	// (0x00025826) cell_blid2_satellite_pane

0x794a,	// (0x00025840) cell_blid2_satellite_pane_g1

0xda11,	// (0x0002b907) cell_blid2_satellite_pane_t1

0xc8bc,	// (0x0002a7b2) blid2_speed_pane_g1

0xda1f,	// (0x0002b915) blid2_speed_pane_t1

0xda2d,	// (0x0002b923) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0002da01) blid2_speed_pane_t

0xc8bc,	// (0x0002a7b2) blid2_navig_ring_pane_g1

0x7953,	// (0x00025849) blid2_navig_ring_pane_g2

0x795b,	// (0x00025851) blid2_navig_ring_pane_g3

0x7963,	// (0x00025859) blid2_navig_ring_pane_g4

0x796b,	// (0x00025861) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0002da06) blid2_navig_ring_pane_g

0x9cbe,	// (0x00027bb4) bg_popup_window_pane_cp011

0xda3b,	// (0x0002b931) popup_blid2_search_window_g1

0xda43,	// (0x0002b939) popup_blid2_search_window_t1

0xda51,	// (0x0002b947) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0002da11) popup_blid2_search_window_t

0xa70f,	// (0x00028605) main_browser_pane_g1

0xa409,	// (0x000282ff) main_browser_pane_ParamLimits

0x15e6,	// (0x0001f4dc) bg_button_pane_cp011_ParamLimits

0x248f,	// (0x00020385) cell_vitu2_function_pane_g1_ParamLimits

0xc4ab,	// (0x0002a3a1) bg_popup_sub_pane_cp22_ParamLimits

0x72fa,	// (0x000251f0) input_focus_pane_cp08_ParamLimits

0x7311,	// (0x00025207) popup_vitu2_query_button_pane_ParamLimits

0x7311,	// (0x00025207) popup_vitu2_query_button_pane

0x7322,	// (0x00025218) popup_vitu2_query_input_button_pane

0xd5ff,	// (0x0002b4f5) popup_vitu2_query_window_g1_ParamLimits

0x732c,	// (0x00025222) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0002d912) popup_vitu2_query_window_g_ParamLimits

0x9cbe,	// (0x00027bb4) bg_button_pane_cp026

0x7973,	// (0x00025869) popup_vitu2_query_input_button_pane_g1

0x9cbe,	// (0x00027bb4) bg_button_pane_cp025

0xda69,	// (0x0002b95f) popup_vitu2_query_button_pane_t1

0x5bd9,	// (0x00023acf) main_mp3_pane_t6

0x5be9,	// (0x00023adf) popup_slider_window_cp01

0x204d,	// (0x0001ff43) cam4_battery_pane

0x212d,	// (0x00020023) cam4_battery_pane_cp02

0x2629,	// (0x0002051f) cam4_battery_pane_cp01

0x2629,	// (0x0002051f) cam4_battery_pane_cp03

0xda5f,	// (0x0002b955) cam4_battery_pane_g1

0xc8bc,	// (0x0002a7b2) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0002da16) cam4_battery_pane_g

0xc788,	// (0x0002a67e) popup_blid_sat_info2_window_t11

0xae6a,	// (0x00028d60) aid_size_touch_mv_arrow_left_ParamLimits

0xae93,	// (0x00028d89) aid_size_touch_mv_arrow_right_ParamLimits

0xaef1,	// (0x00028de7) navi_pane_g1_ParamLimits

0xaefd,	// (0x00028df3) navi_pane_g2_ParamLimits

0xaf2b,	// (0x00028e21) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0002d2e0) navi_pane_g_ParamLimits

0x4948,	// (0x0002283e) navi_pane_mv_t1_ParamLimits

0x6675,	// (0x0002456b) grid_imed_effect_pane_ParamLimits

0x33ba,	// (0x000212b0) aid_placing_vt_slider_lsc

0xa65e,	// (0x00028554) aid_placing_vt_slider_prt

0xa3c5,	// (0x000282bb) bg_tb_trans_pane_cp01_ParamLimits

0xca3f,	// (0x0002a935) popup_image_details_window_g1_ParamLimits

0xca52,	// (0x0002a948) popup_image_details_window_g2_ParamLimits

0xca67,	// (0x0002a95d) popup_image_details_window_g3_ParamLimits

0xca67,	// (0x0002a95d) popup_image_details_window_g3

0xf71d,	// (0x0002d613) popup_image_details_window_g_ParamLimits

0xca7b,	// (0x0002a971) popup_image_details_window_t1_ParamLimits

0xca8d,	// (0x0002a983) popup_image_details_window_t2_ParamLimits

0xcaa6,	// (0x0002a99c) popup_image_details_window_t3_ParamLimits

0xcaba,	// (0x0002a9b0) popup_image_details_window_t4_ParamLimits

0xcad5,	// (0x0002a9cb) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x0002d61a) popup_image_details_window_t_ParamLimits

0x7681,	// (0x00025577) cl_header_name_pane_ParamLimits

0x7681,	// (0x00025577) cl_header_name_pane

0x797b,	// (0x00025871) cl_header_name_pane_t1_ParamLimits

0x797b,	// (0x00025871) cl_header_name_pane_t1

0x7992,	// (0x00025888) cl_header_name_pane_t2_ParamLimits

0x7992,	// (0x00025888) cl_header_name_pane_t2

0x79bc,	// (0x000258b2) cl_header_name_pane_t3_ParamLimits

0x79bc,	// (0x000258b2) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0002da1b) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0002da1b) cl_header_name_pane_t

0xafba,	// (0x00028eb0) navi_pane_mv_g2_ParamLimits

0xd2f3,	// (0x0002b1e9) field_vitu2_entry_pane_g1_ParamLimits

0xd2ff,	// (0x0002b1f5) field_vitu2_entry_pane_g2_ParamLimits

0xd30b,	// (0x0002b201) field_vitu2_entry_pane_g3_ParamLimits

0xd30b,	// (0x0002b201) field_vitu2_entry_pane_g3

0xf91b,	// (0x0002d811) field_vitu2_entry_pane_g_ParamLimits

0x2357,	// (0x0002024d) cell_vitu2_itu_pane_g1_ParamLimits

0x2367,	// (0x0002025d) cell_vitu2_itu_pane_g2_ParamLimits

0x2367,	// (0x0002025d) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0002d81d) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0002d81d) cell_vitu2_itu_pane_g

0x15e6,	// (0x0001f4dc) bg_vkb2_func_pane_cp05_ParamLimits

0x15e6,	// (0x0001f4dc) bg_vkb2_func_pane_cp05

0x15e6,	// (0x0001f4dc) bg_vkb2_func_pane_cp03

0x15e6,	// (0x0001f4dc) bg_vkb2_func_pane_cp04

0x15e6,	// (0x0001f4dc) bg_vkb2_func_pane_cp10_ParamLimits

0x15e6,	// (0x0001f4dc) bg_vkb2_func_pane_cp10

0x7623,	// (0x00025519) bg_vkb2_func_pane_cp08

0x7609,	// (0x000254ff) bg_vkb2_func_pane_cp06

0x7617,	// (0x0002550d) bg_vkb2_func_pane_cp07

0xd95c,	// (0x0002b852) bg_vkb2_func_pane_cp11_ParamLimits

0xd95c,	// (0x0002b852) bg_vkb2_func_pane_cp11

0xd971,	// (0x0002b867) bg_vkb2_func_pane_cp12_ParamLimits

0xd971,	// (0x0002b867) bg_vkb2_func_pane_cp12

0x9cbe,	// (0x00027bb4) bg_vkb2_func_pane_cp09

0xd348,	// (0x0002b23e) bg_vkb2_func_pane_g1

0xa820,	// (0x00028716) bg_vkb2_func_pane_g2

0xd350,	// (0x0002b246) bg_vkb2_func_pane_g3

0xd358,	// (0x0002b24e) bg_vkb2_func_pane_g4

0xd5c4,	// (0x0002b4ba) bg_vkb2_func_pane_g5

0xd370,	// (0x0002b266) bg_vkb2_func_pane_g6

0xd378,	// (0x0002b26e) bg_vkb2_func_pane_g7

0xd368,	// (0x0002b25e) bg_vkb2_func_pane_g8

0xa800,	// (0x000286f6) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0002da22) bg_vkb2_func_pane_g

0x78ca,	// (0x000257c0) blid2_tripm_pane_g6_ParamLimits

0x78ca,	// (0x000257c0) blid2_tripm_pane_g6

0xd193,	// (0x0002b089) mp4_progress_pane_g1

0x7924,	// (0x0002581a) blid2_tripm_values_pane_ParamLimits

0x7924,	// (0x0002581a) blid2_tripm_values_pane

0x79e1,	// (0x000258d7) blid2_tripm_values_pane_t1

0x79ef,	// (0x000258e5) blid2_tripm_values_pane_t2

0x79fd,	// (0x000258f3) blid2_tripm_values_pane_t3

0x7a0b,	// (0x00025901) blid2_tripm_values_pane_t4

0x7a19,	// (0x0002590f) blid2_tripm_values_pane_t5

0x7a27,	// (0x0002591d) blid2_tripm_values_pane_t6

0x7a35,	// (0x0002592b) blid2_tripm_values_pane_t7

0x7a43,	// (0x00025939) blid2_tripm_values_pane_t8

0x7a51,	// (0x00025947) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0002da35) blid2_tripm_values_pane_t

0x33fa,	// (0x000212f0) call_video_pane_t1_ParamLimits

0x341b,	// (0x00021311) call_video_pane_t2_ParamLimits

0xf273,	// (0x0002d169) call_video_pane_t_ParamLimits

0x4e6b,	// (0x00022d61) msg_header_pane_g1_ParamLimits

0xb1b5,	// (0x000290ab) msg_header_pane_g2_ParamLimits

0xb1b5,	// (0x000290ab) msg_header_pane_g2

0x0001,

0xf48d,	// (0x0002d383) msg_header_pane_g_ParamLimits

0xf48d,	// (0x0002d383) msg_header_pane_g

0xa409,	// (0x000282ff) main_clock2_pane_ParamLimits

0x6486,	// (0x0002437c) grid_clock2_toolbar_pane_ParamLimits

0x6486,	// (0x0002437c) grid_clock2_toolbar_pane

0x6486,	// (0x0002437c) listscroll_clock2_pane_ParamLimits

0x6486,	// (0x0002437c) listscroll_clock2_pane

0x652a,	// (0x00024420) main_clock2_pane_t3_ParamLimits

0x652a,	// (0x00024420) main_clock2_pane_t3

0x653c,	// (0x00024432) main_clock2_pane_t4_ParamLimits

0x653c,	// (0x00024432) main_clock2_pane_t4

0xda77,	// (0x0002b96d) cell_clock2_toolbar_pane

0xda7f,	// (0x0002b975) cell_clock2_toolbar_pane_cp01

0xda7f,	// (0x0002b975) cell_clock2_toolbar_pane_cp02

0xda87,	// (0x0002b97d) cell_clock2_toolbar_pane_cp03

0xda8f,	// (0x0002b985) list_clock2_pane

0xade0,	// (0x00028cd6) scroll_pane_cp10

0xda97,	// (0x0002b98d) list_single_clock2_pane_ParamLimits

0xda97,	// (0x0002b98d) list_single_clock2_pane

0xb03b,	// (0x00028f31) list_highlight_pane_cp08

0xdaa4,	// (0x0002b99a) list_single_clock2_pane_t1

0xdab2,	// (0x0002b9a8) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0002da48) list_single_clock2_pane_t

0x9cbe,	// (0x00027bb4) bg_button_pane_cp10

0xdac0,	// (0x0002b9b6) cell_clock2_toolbar_pane_g1

0x1581,	// (0x0001f477) aid_main_viewer_pane_g1_ParamLimits

0x1581,	// (0x0001f477) aid_main_viewer_pane_g1

0x158d,	// (0x0001f483) aid_main_viewer_pane_g2_ParamLimits

0x158d,	// (0x0001f483) aid_main_viewer_pane_g2

0x4e77,	// (0x00022d6d) aid_main_viewer_pane_g3_ParamLimits

0x4e77,	// (0x00022d6d) aid_main_viewer_pane_g3

0x4e88,	// (0x00022d7e) aid_main_viewer_pane_g4_ParamLimits

0x4e88,	// (0x00022d7e) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x0002d394) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0002d394) aid_main_viewer_pane_g

0x15d9,	// (0x0001f4cf) main_calc_pane_ParamLimits

0x15f4,	// (0x0001f4ea) main_dialer2_pane_ParamLimits

0x111c,	// (0x0001f012) main_cam6_pane

0x111c,	// (0x0001f012) main_vid6_pane

0x6492,	// (0x00024388) listscroll_gen_pane_cp06_ParamLimits

0x6492,	// (0x00024388) listscroll_gen_pane_cp06

0x654e,	// (0x00024444) main_clock2_pane_t5_ParamLimits

0x654e,	// (0x00024444) main_clock2_pane_t5

0x6597,	// (0x0002448d) aid_call2_pane_cp10_ParamLimits

0x65a9,	// (0x0002449f) aid_call_pane_cp10_ParamLimits

0xae5e,	// (0x00028d54) popup_clock_analogue_window_cp10_g1_ParamLimits

0xae5e,	// (0x00028d54) popup_clock_analogue_window_cp10_g2_ParamLimits

0x65bb,	// (0x000244b1) popup_clock_analogue_window_cp10_g3_ParamLimits

0x65bb,	// (0x000244b1) popup_clock_analogue_window_cp10_g4_ParamLimits

0xae5e,	// (0x00028d54) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0002d6ca) popup_clock_analogue_window_cp10_g_ParamLimits

0x65cd,	// (0x000244c3) popup_clock_analogue_window_cp10_t1_ParamLimits

0x69d9,	// (0x000248cf) cell_dialer2_keypad_pane_g2_ParamLimits

0x69d9,	// (0x000248cf) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0002d7b0) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0002d7b0) cell_dialer2_keypad_pane_g

0x69f5,	// (0x000248eb) cell_dialer2_keypad_pane_t1

0x6e33,	// (0x00024d29) main_cset_text2_pane_ParamLimits

0x6e33,	// (0x00024d29) main_cset_text2_pane

0xd806,	// (0x0002b6fc) area_vitu2_query_pane_g1_ParamLimits

0x75a8,	// (0x0002549e) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0002d965) area_vitu2_query_pane_g_ParamLimits

0xd88a,	// (0x0002b780) area_vitu2_query_pane_t7_ParamLimits

0xd88a,	// (0x0002b780) area_vitu2_query_pane_t7

0x7609,	// (0x000254ff) bg_button_pane_cp018_ParamLimits

0x7617,	// (0x0002550d) bg_button_pane_cp021_ParamLimits

0x7623,	// (0x00025519) bg_button_pane_cp022_ParamLimits

0x7623,	// (0x00025519) bg_vkb2_func_pane_cp08_ParamLimits

0x7609,	// (0x000254ff) bg_vkb2_func_pane_cp06_ParamLimits

0x7617,	// (0x0002550d) bg_vkb2_func_pane_cp07_ParamLimits

0x7634,	// (0x0002552a) input_focus_pane_cp09_ParamLimits

0x26c3,	// (0x000205b9) cam6_autofocus_pane_ParamLimits

0x26c3,	// (0x000205b9) cam6_autofocus_pane

0x26e5,	// (0x000205db) cam6_image_uncrop_pane_ParamLimits

0x26e5,	// (0x000205db) cam6_image_uncrop_pane

0x2712,	// (0x00020608) cam6_indi_pane_ParamLimits

0x2712,	// (0x00020608) cam6_indi_pane

0x272c,	// (0x00020622) cam6_mode_pane_ParamLimits

0x272c,	// (0x00020622) cam6_mode_pane

0x2740,	// (0x00020636) cam6_timer_pane_ParamLimits

0x2740,	// (0x00020636) cam6_timer_pane

0x274c,	// (0x00020642) cam6_zoom_pane_ParamLimits

0x274c,	// (0x00020642) cam6_zoom_pane

0x7a5f,	// (0x00025955) cam6_mode_pane_g1_ParamLimits

0x7a5f,	// (0x00025955) cam6_mode_pane_g1

0x7a6b,	// (0x00025961) cam6_mode_pane_g2_ParamLimits

0x7a6b,	// (0x00025961) cam6_mode_pane_g2

0x7a77,	// (0x0002596d) cam6_mode_pane_g3_ParamLimits

0x7a77,	// (0x0002596d) cam6_mode_pane_g3

0x7a83,	// (0x00025979) cam6_mode_pane_g4_ParamLimits

0x7a83,	// (0x00025979) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0002da4d) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0002da4d) cam6_mode_pane_g

0xd3e3,	// (0x0002b2d9) bg_tb_trans_pane_cp08_ParamLimits

0xd3e3,	// (0x0002b2d9) bg_tb_trans_pane_cp08

0xdac8,	// (0x0002b9be) cam6_battery_pane_ParamLimits

0xdac8,	// (0x0002b9be) cam6_battery_pane

0xdade,	// (0x0002b9d4) cam6_indi_pane_g1_ParamLimits

0xdade,	// (0x0002b9d4) cam6_indi_pane_g1

0xdaf0,	// (0x0002b9e6) cam6_indi_pane_g2_ParamLimits

0xdaf0,	// (0x0002b9e6) cam6_indi_pane_g2

0xdb02,	// (0x0002b9f8) cam6_indi_pane_g3_ParamLimits

0xdb02,	// (0x0002b9f8) cam6_indi_pane_g3

0x0002,

0x0a88,	// (0x0001e97e) cam6_indi_pane_g_ParamLimits

0x0a88,	// (0x0001e97e) cam6_indi_pane_g

0xdb14,	// (0x0002ba0a) cam6_indi_pane_t1_ParamLimits

0xdb14,	// (0x0002ba0a) cam6_indi_pane_t1

0x6b34,	// (0x00024a2a) cam6_autofocus_pane_g1

0x6b2c,	// (0x00024a22) cam6_autofocus_pane_g2

0x6b44,	// (0x00024a3a) cam6_autofocus_pane_g3

0x6b3c,	// (0x00024a32) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0002da56) cam6_autofocus_pane_g

0xdb3a,	// (0x0002ba30) cam6_timer_pane_g1

0xdb42,	// (0x0002ba38) cam6_timer_pane_t1

0xdb50,	// (0x0002ba46) cam6_zoom_cont_pane

0xdb58,	// (0x0002ba4e) cam6_zoom_pane_g1

0xdb60,	// (0x0002ba56) cam6_zoom_pane_g2

0x7a8f,	// (0x00025985) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0002da5f) cam6_zoom_pane_g

0xc8bc,	// (0x0002a7b2) cam6_battery_pane_g1

0xc8bc,	// (0x0002a7b2) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x0002d5d7) cam6_battery_pane_g

0xdb68,	// (0x0002ba5e) cam6_zoom_cont_pane_g1

0xdb71,	// (0x0002ba67) cam6_zoom_cont_pane_g2

0xdb7a,	// (0x0002ba70) cam6_zoom_cont_pane_g3

0x0002,

0x0a9f,	// (0x0001e995) cam6_zoom_cont_pane_g

0x7aac,	// (0x000259a2) cam6_mode_pane_cp_ParamLimits

0x7aac,	// (0x000259a2) cam6_mode_pane_cp

0x7ac0,	// (0x000259b6) cam6_zoom_pane_cp_ParamLimits

0x7ac0,	// (0x000259b6) cam6_zoom_pane_cp

0x7ad8,	// (0x000259ce) vid6_image_uncrop_cif_pane_ParamLimits

0x7ad8,	// (0x000259ce) vid6_image_uncrop_cif_pane

0x7b04,	// (0x000259fa) vid6_image_uncrop_nhd_pane_ParamLimits

0x7b04,	// (0x000259fa) vid6_image_uncrop_nhd_pane

0x7b21,	// (0x00025a17) vid6_image_uncrop_vga_pane_ParamLimits

0x7b21,	// (0x00025a17) vid6_image_uncrop_vga_pane

0x7b40,	// (0x00025a36) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b40,	// (0x00025a36) vid6_image_uncrop_wvga_pane

0x7b5d,	// (0x00025a53) vid6_indi_pane_ParamLimits

0x7b5d,	// (0x00025a53) vid6_indi_pane

0xd3e3,	// (0x0002b2d9) bg_tb_trans_pane_cp09_ParamLimits

0xd3e3,	// (0x0002b2d9) bg_tb_trans_pane_cp09

0xdb92,	// (0x0002ba88) cam6_battery_pane_cp_ParamLimits

0xdb92,	// (0x0002ba88) cam6_battery_pane_cp

0xdb9e,	// (0x0002ba94) vid6_indi_pane_g1_ParamLimits

0xdb9e,	// (0x0002ba94) vid6_indi_pane_g1

0xdbb0,	// (0x0002baa6) vid6_indi_pane_g2_ParamLimits

0xdbb0,	// (0x0002baa6) vid6_indi_pane_g2

0xdbc2,	// (0x0002bab8) vid6_indi_pane_g3_ParamLimits

0xdbc2,	// (0x0002bab8) vid6_indi_pane_g3

0xdbd7,	// (0x0002bacd) vid6_indi_pane_g4_ParamLimits

0xdbd7,	// (0x0002bacd) vid6_indi_pane_g4

0xdbec,	// (0x0002bae2) vid6_indi_pane_g5_ParamLimits

0xdbec,	// (0x0002bae2) vid6_indi_pane_g5

0x0004,

0x0aa6,	// (0x0001e99c) vid6_indi_pane_g_ParamLimits

0x0aa6,	// (0x0001e99c) vid6_indi_pane_g

0xdc06,	// (0x0002bafc) vid6_indi_pane_t1_ParamLimits

0xdc06,	// (0x0002bafc) vid6_indi_pane_t1

0xdc1c,	// (0x0002bb12) vid6_indi_pane_t2_ParamLimits

0xdc1c,	// (0x0002bb12) vid6_indi_pane_t2

0xdc44,	// (0x0002bb3a) vid6_indi_pane_t3_ParamLimits

0xdc44,	// (0x0002bb3a) vid6_indi_pane_t3

0xdc6c,	// (0x0002bb62) vid6_indi_pane_t4_ParamLimits

0xdc6c,	// (0x0002bb62) vid6_indi_pane_t4

0x0003,

0x0ab1,	// (0x0001e9a7) vid6_indi_pane_t_ParamLimits

0x0ab1,	// (0x0001e9a7) vid6_indi_pane_t

0xdc90,	// (0x0002bb86) wait_bar_pane_cp08

0x7b82,	// (0x00025a78) main_cset_text2_pane_t1_ParamLimits

0x7b82,	// (0x00025a78) main_cset_text2_pane_t1

0x7a97,	// (0x0002598d) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a97,	// (0x0002598d) listscroll_gen_pane_cp06_t1

0x111c,	// (0x0001f012) main_cam6_set_pane

0x203f,	// (0x0001ff35) bg_tb_trans_pane_cp06_ParamLimits

0x2055,	// (0x0001ff4b) cam4_indicators_pane_g1_ParamLimits

0x2066,	// (0x0001ff5c) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0002d7ed) cam4_indicators_pane_g_ParamLimits

0x2084,	// (0x0001ff7a) cam4_indicators_pane_t1_ParamLimits

0x15e6,	// (0x0001f4dc) bg_tb_trans_pane_cp07_ParamLimits

0x2137,	// (0x0002002d) vid4_indicators_pane_g1_ParamLimits

0x214b,	// (0x00020041) vid4_indicators_pane_g2_ParamLimits

0x215f,	// (0x00020055) vid4_indicators_pane_g3_ParamLimits

0x2170,	// (0x00020066) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0002d7ff) vid4_indicators_pane_g_ParamLimits

0x218e,	// (0x00020084) vid4_indicators_pane_t1_ParamLimits

0x2631,	// (0x00020527) vid4_progress_pane_g1_ParamLimits

0x2643,	// (0x00020539) vid4_progress_pane_g2_ParamLimits

0xaae1,	// (0x000289d7) vid4_progress_pane_g3_ParamLimits

0x2653,	// (0x00020549) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0002d9b0) vid4_progress_pane_g_ParamLimits

0x2671,	// (0x00020567) vid4_progress_pane_t1_ParamLimits

0x2686,	// (0x0002057c) vid4_progress_pane_t2_ParamLimits

0x269c,	// (0x00020592) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0002d9bb) vid4_progress_pane_t_ParamLimits

0x26b1,	// (0x000205a7) wait_bar_pane_cp07_ParamLimits

0x7bb5,	// (0x00025aab) main_cam6_set_pane_g2_ParamLimits

0x7bb5,	// (0x00025aab) main_cam6_set_pane_g2

0x7bc1,	// (0x00025ab7) main_cset6_listscroll_pane_ParamLimits

0x7bc1,	// (0x00025ab7) main_cset6_listscroll_pane

0x7bec,	// (0x00025ae2) main_cset6_slider_pane_ParamLimits

0x7bec,	// (0x00025ae2) main_cset6_slider_pane

0x7bf8,	// (0x00025aee) main_cset6_text2_pane_ParamLimits

0x7bf8,	// (0x00025aee) main_cset6_text2_pane

0xdc9f,	// (0x0002bb95) main_cset6_text_pane

0xdca7,	// (0x0002bb9d) main_cset_list_pane_copy1_ParamLimits

0xdca7,	// (0x0002bb9d) main_cset_list_pane_copy1

0xdcb7,	// (0x0002bbad) scroll_pane_cp028_copy1

0x7c0b,	// (0x00025b01) cset_list_set_pane_copy1

0x7c1e,	// (0x00025b14) aid_position_infowindow_above_copy1

0x7c26,	// (0x00025b1c) aid_position_infowindow_below_copy1

0x7c2e,	// (0x00025b24) cset_list_set_pane_g1_copy1

0xd56f,	// (0x0002b465) cset_list_set_pane_g3_copy1_ParamLimits

0xd56f,	// (0x0002b465) cset_list_set_pane_g3_copy1

0xd57e,	// (0x0002b474) cset_list_set_pane_t1_copy1_ParamLimits

0xd57e,	// (0x0002b474) cset_list_set_pane_t1_copy1

0xa3c5,	// (0x000282bb) list_highlight_pane_cp021_copy1_ParamLimits

0xa3c5,	// (0x000282bb) list_highlight_pane_cp021_copy1

0xdcc0,	// (0x0002bbb6) cset6_slider_pane_ParamLimits

0xdcc0,	// (0x0002bbb6) cset6_slider_pane

0xdcec,	// (0x0002bbe2) main_cset6_slider_pane_g1_ParamLimits

0xdcec,	// (0x0002bbe2) main_cset6_slider_pane_g1

0x7c36,	// (0x00025b2c) main_cset6_slider_pane_g2_ParamLimits

0x7c36,	// (0x00025b2c) main_cset6_slider_pane_g2

0xdd14,	// (0x0002bc0a) main_cset6_slider_pane_g3_ParamLimits

0xdd14,	// (0x0002bc0a) main_cset6_slider_pane_g3

0x7c5e,	// (0x00025b54) main_cset6_slider_pane_g4_ParamLimits

0x7c5e,	// (0x00025b54) main_cset6_slider_pane_g4

0x7c6a,	// (0x00025b60) main_cset6_slider_pane_g5_ParamLimits

0x7c6a,	// (0x00025b60) main_cset6_slider_pane_g5

0xd493,	// (0x0002b389) main_cset6_slider_pane_g7_ParamLimits

0xd493,	// (0x0002b389) main_cset6_slider_pane_g7

0xd49f,	// (0x0002b395) main_cset6_slider_pane_g8_ParamLimits

0xd49f,	// (0x0002b395) main_cset6_slider_pane_g8

0x7c78,	// (0x00025b6e) main_cset6_slider_pane_g9_ParamLimits

0x7c78,	// (0x00025b6e) main_cset6_slider_pane_g9

0x7c84,	// (0x00025b7a) main_cset6_slider_pane_g10_ParamLimits

0x7c84,	// (0x00025b7a) main_cset6_slider_pane_g10

0x7c90,	// (0x00025b86) main_cset6_slider_pane_g11_ParamLimits

0x7c90,	// (0x00025b86) main_cset6_slider_pane_g11

0x7c9c,	// (0x00025b92) main_cset6_slider_pane_g12_ParamLimits

0x7c9c,	// (0x00025b92) main_cset6_slider_pane_g12

0x7ca8,	// (0x00025b9e) main_cset6_slider_pane_g13_ParamLimits

0x7ca8,	// (0x00025b9e) main_cset6_slider_pane_g13

0x7cb4,	// (0x00025baa) main_cset6_slider_pane_g14_ParamLimits

0x7cb4,	// (0x00025baa) main_cset6_slider_pane_g14

0x7cc0,	// (0x00025bb6) main_cset6_slider_pane_g15_ParamLimits

0x7cc0,	// (0x00025bb6) main_cset6_slider_pane_g15

0x7cd8,	// (0x00025bce) main_cset6_slider_pane_g16_ParamLimits

0x7cd8,	// (0x00025bce) main_cset6_slider_pane_g16

0x7ce6,	// (0x00025bdc) main_cset6_slider_pane_g17_ParamLimits

0x7ce6,	// (0x00025bdc) main_cset6_slider_pane_g17

0x0011,

0xfb70,	// (0x0002da66) main_cset6_slider_pane_g_ParamLimits

0xfb70,	// (0x0002da66) main_cset6_slider_pane_g

0xdd20,	// (0x0002bc16) main_cset6_slider_pane_t1_ParamLimits

0xdd20,	// (0x0002bc16) main_cset6_slider_pane_t1

0x7d0c,	// (0x00025c02) main_cset6_slider_pane_t2_ParamLimits

0x7d0c,	// (0x00025c02) main_cset6_slider_pane_t2

0x7d37,	// (0x00025c2d) main_cset6_slider_pane_t3_ParamLimits

0x7d37,	// (0x00025c2d) main_cset6_slider_pane_t3

0x7d62,	// (0x00025c58) main_cset6_slider_pane_t4_ParamLimits

0x7d62,	// (0x00025c58) main_cset6_slider_pane_t4

0x7d8d,	// (0x00025c83) main_cset6_slider_pane_t5_ParamLimits

0x7d8d,	// (0x00025c83) main_cset6_slider_pane_t5

0xdd61,	// (0x0002bc57) main_cset6_slider_pane_t7_ParamLimits

0xdd61,	// (0x0002bc57) main_cset6_slider_pane_t7

0x7dba,	// (0x00025cb0) main_cset6_slider_pane_t8_ParamLimits

0x7dba,	// (0x00025cb0) main_cset6_slider_pane_t8

0x7dde,	// (0x00025cd4) main_cset6_slider_pane_t9_ParamLimits

0x7dde,	// (0x00025cd4) main_cset6_slider_pane_t9

0x7e02,	// (0x00025cf8) main_cset6_slider_pane_t10_ParamLimits

0x7e02,	// (0x00025cf8) main_cset6_slider_pane_t10

0x7e26,	// (0x00025d1c) main_cset6_slider_pane_t11_ParamLimits

0x7e26,	// (0x00025d1c) main_cset6_slider_pane_t11

0xdd97,	// (0x0002bc8d) main_cset6_slider_pane_t14_ParamLimits

0xdd97,	// (0x0002bc8d) main_cset6_slider_pane_t14

0xddd0,	// (0x0002bcc6) main_cset6_slider_pane_t15_ParamLimits

0xddd0,	// (0x0002bcc6) main_cset6_slider_pane_t15

0x000b,

0xfb95,	// (0x0002da8b) main_cset6_slider_pane_t_ParamLimits

0xfb95,	// (0x0002da8b) main_cset6_slider_pane_t

0xd60b,	// (0x0002b501) cset_slider_pane_g1_copy1

0xd614,	// (0x0002b50a) cset_slider_pane_g2_copy1

0xd61d,	// (0x0002b513) cset_slider_pane_g3_copy1

0x9cbe,	// (0x00027bb4) bg_popup_sub_pane_cp011_copy1

0xde09,	// (0x0002bcff) main_cset_text_pane_g1_copy1

0xd62e,	// (0x0002b524) main_cset_text_pane_t1_copy1

0xd63c,	// (0x0002b532) main_cset_text_pane_t2_copy1

0xd64a,	// (0x0002b540) main_cset_text_pane_t3_copy1

0xd658,	// (0x0002b54e) main_cset_text_pane_t4_copy1

0xd666,	// (0x0002b55c) main_cset_text_pane_t5_copy1

0xde11,	// (0x0002bd07) main_cset_text_pane_t6_copy1

0xd682,	// (0x0002b578) main_cset_text_pane_t7_copy1

0x7f1b,	// (0x00025e11) main_cset_text2_pane_t1_copy1

0x15e6,	// (0x0001f4dc) main_ncimui_pane

0x1645,	// (0x0001f53b) popup_query_ncimui_window_ParamLimits

0x1645,	// (0x0001f53b) popup_query_ncimui_window

0xcb84,	// (0x0002aa7a) field_cale_ev2_pane_g4_ParamLimits

0xcb84,	// (0x0002aa7a) field_cale_ev2_pane_g4

0x6979,	// (0x0002486f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6979,	// (0x0002486f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0002d78b) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0002d78b) cell_video_dialer_keypad_pane_g

0x6991,	// (0x00024887) cell_video_dialer_keypad_pane_t1

0x9cbe,	// (0x00027bb4) bg_popup_window_pane_cp012

0xacad,	// (0x00028ba3) heading_pane_cp06

0xde3d,	// (0x0002bd33) ncim_query_content_pane

0x9cbe,	// (0x00027bb4) bg_popup_heading_pane_cp01

0xde45,	// (0x0002bd3b) ncim_heading_pane_t1

0xde53,	// (0x0002bd49) ncim_indicator_popup_pane

0xde65,	// (0x0002bd5b) ncim_query_button_pane

0xde79,	// (0x0002bd6f) ncim_query_content_pane_t1

0xde8b,	// (0x0002bd81) ncim_query_content_pane_t2

0x0005,

0xfbd9,	// (0x0002dacf) ncim_query_content_pane_t

0xdec5,	// (0x0002bdbb) ncim_query_list_pane

0xded7,	// (0x0002bdcd) ncim_query_popup_pane

0xde53,	// (0x0002bd49) ncim_indicator_popup_pane_ParamLimits

0x806e,	// (0x00025f64) ncim_query_content_pane_g1_ParamLimits

0x806e,	// (0x00025f64) ncim_query_content_pane_g1

0xde79,	// (0x0002bd6f) ncim_query_content_pane_t1_ParamLimits

0xde8b,	// (0x0002bd81) ncim_query_content_pane_t2_ParamLimits

0x807a,	// (0x00025f70) ncim_query_content_pane_t3_ParamLimits

0x807a,	// (0x00025f70) ncim_query_content_pane_t3

0x8097,	// (0x00025f8d) ncim_query_content_pane_t4_ParamLimits

0x8097,	// (0x00025f8d) ncim_query_content_pane_t4

0x80b4,	// (0x00025faa) ncim_query_content_pane_t5_ParamLimits

0x80b4,	// (0x00025faa) ncim_query_content_pane_t5

0xde9d,	// (0x0002bd93) ncim_query_content_pane_t6_ParamLimits

0xde9d,	// (0x0002bd93) ncim_query_content_pane_t6

0xfbd9,	// (0x0002dacf) ncim_query_content_pane_t_ParamLimits

0xdec5,	// (0x0002bdbb) ncim_query_list_pane_ParamLimits

0xded7,	// (0x0002bdcd) ncim_query_popup_pane_ParamLimits

0xdeeb,	// (0x0002bde1) wait_bar_pane_cp04

0x9cbe,	// (0x00027bb4) input_focus_pane_cp011

0xdef3,	// (0x0002bde9) ncim_query_popup_pane_t1

0xdf01,	// (0x0002bdf7) ncim_list_query_list_pane_ParamLimits

0xdf01,	// (0x0002bdf7) ncim_list_query_list_pane

0x9cbe,	// (0x00027bb4) bg_button_pane_cp027

0xdf0e,	// (0x0002be04) ncim_query_button_pane_g1

0x9cbe,	// (0x00027bb4) list_highlight_pane_cp012

0xdf18,	// (0x0002be0e) ncim_list_query_list_pane_g1

0xdf20,	// (0x0002be16) ncim_list_query_list_pane_t1

0x2075,	// (0x0001ff6b) cam4_indicators_pane_g3_ParamLimits

0x2075,	// (0x0001ff6b) cam4_indicators_pane_g3

0x217c,	// (0x00020072) vid4_indicators_pane_g5_ParamLimits

0x217c,	// (0x00020072) vid4_indicators_pane_g5

0x2662,	// (0x00020558) vid4_progress_pane_g5_ParamLimits

0x2662,	// (0x00020558) vid4_progress_pane_g5

0x7f5a,	// (0x00025e50) main_ncimui_pane_g1

0x7fc2,	// (0x00025eb8) ncimui_group_query_pane_ParamLimits

0x7fc2,	// (0x00025eb8) ncimui_group_query_pane

0x800a,	// (0x00025f00) ncimui_list_pane_ParamLimits

0x800a,	// (0x00025f00) ncimui_list_pane

0x8031,	// (0x00025f27) ncimui_text_pane_ParamLimits

0x8031,	// (0x00025f27) ncimui_text_pane

0x80d1,	// (0x00025fc7) ncimui_text_pane_t1_ParamLimits

0x80d1,	// (0x00025fc7) ncimui_text_pane_t1

0xdf2e,	// (0x0002be24) ncimui_list_single_graphic_pane_ParamLimits

0xdf2e,	// (0x0002be24) ncimui_list_single_graphic_pane

0x80f0,	// (0x00025fe6) ncimui_query_pane_ParamLimits

0x80f0,	// (0x00025fe6) ncimui_query_pane

0x9cbe,	// (0x00027bb4) list_highlight_pane_cp013

0xdf3e,	// (0x0002be34) ncim_list_query_list_pane_t1_copy1

0xdf18,	// (0x0002be0e) ncim_list_single_graphic_pane_g1

0xdf4c,	// (0x0002be42) ncim_query_button_pane_cp01

0xdf58,	// (0x0002be4e) ncim_query_entry_pane_ParamLimits

0xdf58,	// (0x0002be4e) ncim_query_entry_pane

0xdf6b,	// (0x0002be61) ncimui_query_pane_g1

0xdf77,	// (0x0002be6d) ncimui_query_pane_t1_ParamLimits

0xdf77,	// (0x0002be6d) ncimui_query_pane_t1

0xa3c5,	// (0x000282bb) input_focus_pane_cp012

0xdf90,	// (0x0002be86) ncim_query_entry_pane_t1

0xa409,	// (0x000282ff) main_im_pane_ParamLimits

0x15e6,	// (0x0001f4dc) main_mobtv_pane_ParamLimits

0x15e6,	// (0x0001f4dc) main_mobtv_pane

0x7cf4,	// (0x00025bea) main_cset6_slider_pane_g18_ParamLimits

0x7cf4,	// (0x00025bea) main_cset6_slider_pane_g18

0x7d00,	// (0x00025bf6) main_cset6_slider_pane_g19_ParamLimits

0x7d00,	// (0x00025bf6) main_cset6_slider_pane_g19

0xd30b,	// (0x0002b201) bg_main_mobtv_pane_ParamLimits

0xd30b,	// (0x0002b201) bg_main_mobtv_pane

0x8103,	// (0x00025ff9) main_mobtv_info_pane

0x810e,	// (0x00026004) main_mobtv_loading_pane_ParamLimits

0x810e,	// (0x00026004) main_mobtv_loading_pane

0xdfa2,	// (0x0002be98) main_mobtv_pg_channel_list_pane

0xdfac,	// (0x0002bea2) main_mobtv_pg_hdr_pane

0x811b,	// (0x00026011) main_mobtv_programe_curr_pane_ParamLimits

0x811b,	// (0x00026011) main_mobtv_programe_curr_pane

0x8128,	// (0x0002601e) main_mobtv_programe_next_pane_ParamLimits

0x8128,	// (0x0002601e) main_mobtv_programe_next_pane

0xdfb5,	// (0x0002beab) popup_mobtv_noti_window

0xc8bc,	// (0x0002a7b2) main_tv_pg_hdr_pane_g1

0xdfbd,	// (0x0002beb3) main_tv_pg_hdr_pane_g2

0xdfc5,	// (0x0002bebb) main_tv_pg_hdr_pane_g3

0xdfcd,	// (0x0002bec3) main_tv_pg_hdr_pane_g4

0xdfd5,	// (0x0002becb) main_tv_pg_hdr_pane_g5

0xdfdf,	// (0x0002bed5) main_tv_pg_hdr_pane_g6

0xdfe9,	// (0x0002bedf) main_tv_pg_hdr_pane_g7

0xdff3,	// (0x0002bee9) main_tv_pg_hdr_pane_g8

0xdffd,	// (0x0002bef3) main_tv_pg_hdr_pane_g9

0xe007,	// (0x0002befd) main_tv_pg_hdr_pane_g10

0xe011,	// (0x0002bf07) main_tv_pg_hdr_pane_g11

0x000a,

0xfbe6,	// (0x0002dadc) main_tv_pg_hdr_pane_g

0xe01b,	// (0x0002bf11) main_tv_pg_hdr_pane_t1

0xe029,	// (0x0002bf1f) main_tv_pg_hdr_pane_t2

0xe037,	// (0x0002bf2d) main_tv_pg_hdr_pane_t3

0xe047,	// (0x0002bf3d) main_tv_pg_hdr_pane_t4

0xe057,	// (0x0002bf4d) main_tv_pg_hdr_pane_t5

0x0004,

0x0b47,	// (0x0001ea3d) main_tv_pg_hdr_pane_t

0xe067,	// (0x0002bf5d) single_mobtv_pg_channel_pane_ParamLimits

0xe067,	// (0x0002bf5d) single_mobtv_pg_channel_pane

0xe079,	// (0x0002bf6f) single_mobtv_pg_channel_table_pane

0xe082,	// (0x0002bf78) single_mobtv_pg_channel_thumb_pane

0xe08b,	// (0x0002bf81) single_tv_pg_channel_pane_g1

0xe094,	// (0x0002bf8a) single_tv_pg_channel_pane_g2

0x0001,

0x0b52,	// (0x0001ea48) single_tv_pg_channel_pane_g

0xcb1f,	// (0x0002aa15) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcb1f,	// (0x0002aa15) bg_single_mobtv_pg_channel_thumb_pane

0xe09d,	// (0x0002bf93) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe09d,	// (0x0002bf93) single_mobtv_pg_channel_thumb_pane_g1

0xe0ab,	// (0x0002bfa1) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe0ab,	// (0x0002bfa1) single_mobtv_pg_channel_thumb_pane_g2

0xe0b7,	// (0x0002bfad) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe0b7,	// (0x0002bfad) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0b57,	// (0x0001ea4d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0b57,	// (0x0001ea4d) single_mobtv_pg_channel_thumb_pane_g

0xe0c3,	// (0x0002bfb9) single_mobtv_pg_channel_thumb_pane_t1

0xe0d1,	// (0x0002bfc7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0b5e,	// (0x0001ea54) single_mobtv_pg_channel_thumb_pane_t

0xc8bc,	// (0x0002a7b2) bg_single_mobtv_pg_channel_table_pane_g1

0xc8bc,	// (0x0002a7b2) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x0002d5d7) bg_single_mobtv_pg_channel_table_pane_g

0xe0df,	// (0x0002bfd5) single_mobtv_pg_channel_table_pane_t1

0xe0ed,	// (0x0002bfe3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0b63,	// (0x0001ea59) single_mobtv_pg_channel_table_pane_t

0x813d,	// (0x00026033) main_mobtv_info_pane_g1_ParamLimits

0x813d,	// (0x00026033) main_mobtv_info_pane_g1

0x8159,	// (0x0002604f) main_mobtv_info_pane_t1_ParamLimits

0x8159,	// (0x0002604f) main_mobtv_info_pane_t1

0x81d1,	// (0x000260c7) main_mobtv_info_pane_t2_ParamLimits

0x81d1,	// (0x000260c7) main_mobtv_info_pane_t2

0x0002,

0xfc02,	// (0x0002daf8) main_mobtv_info_pane_t_ParamLimits

0xfc02,	// (0x0002daf8) main_mobtv_info_pane_t

0x8260,	// (0x00026156) wait_bar_pane_cp05

0x8272,	// (0x00026168) main_mobtv_loading_pane_g1_ParamLimits

0x8272,	// (0x00026168) main_mobtv_loading_pane_g1

0x8280,	// (0x00026176) main_mobtv_loading_pane_g2_ParamLimits

0x8280,	// (0x00026176) main_mobtv_loading_pane_g2

0x828c,	// (0x00026182) main_mobtv_loading_pane_g3_ParamLimits

0x828c,	// (0x00026182) main_mobtv_loading_pane_g3

0x0002,

0xfc09,	// (0x0002daff) main_mobtv_loading_pane_g_ParamLimits

0xfc09,	// (0x0002daff) main_mobtv_loading_pane_g

0xe0fb,	// (0x0002bff1) main_mobtv_loading_pane_t1_ParamLimits

0xe0fb,	// (0x0002bff1) main_mobtv_loading_pane_t1

0xe113,	// (0x0002c009) main_mobtv_loading_pane_t2_ParamLimits

0xe113,	// (0x0002c009) main_mobtv_loading_pane_t2

0x0001,

0x0b7b,	// (0x0001ea71) main_mobtv_loading_pane_t_ParamLimits

0x0b7b,	// (0x0001ea71) main_mobtv_loading_pane_t

0x829a,	// (0x00026190) wait_bar_pane_cp06_ParamLimits

0x829a,	// (0x00026190) wait_bar_pane_cp06

0xe137,	// (0x0002c02d) main_mobtv_programe_curr_pane_t1

0xe145,	// (0x0002c03b) main_mobtv_programe_curr_pane_t2

0x0001,

0x0b80,	// (0x0001ea76) main_mobtv_programe_curr_pane_t

0xe153,	// (0x0002c049) main_mobtv_programe_next_pane_t1

0xe161,	// (0x0002c057) main_mobtv_programe_next_pane_t2

0xe16f,	// (0x0002c065) main_mobtv_programe_next_pane_t3

0x0002,

0x0b85,	// (0x0001ea7b) main_mobtv_programe_next_pane_t

0x9cbe,	// (0x00027bb4) bg_popup_mobtv_noti_window_pane

0xe17d,	// (0x0002c073) popup_mobtv_noti_window_g1

0xe185,	// (0x0002c07b) popup_mobtv_noti_window_t1

0xe193,	// (0x0002c089) popup_mobtv_noti_window_t2

0x0001,

0x0b8c,	// (0x0001ea82) popup_mobtv_noti_window_t

0xc8bc,	// (0x0002a7b2) bg_popup_mobtv_noti_window_pane_g1

0x111c,	// (0x0001f012) sc_clock_pane

0x111c,	// (0x0001f012) main_fs_bigclock_pane

0x7912,	// (0x00025808) blid2_tripm_pane_t4_ParamLimits

0x7912,	// (0x00025808) blid2_tripm_pane_t4

0x82a6,	// (0x0002619c) sc_clock_pane_g1_ParamLimits

0x82a6,	// (0x0002619c) sc_clock_pane_g1

0x82b4,	// (0x000261aa) sc_clock_pane_t1_ParamLimits

0x82b4,	// (0x000261aa) sc_clock_pane_t1

0x82c7,	// (0x000261bd) sc_clock_pane_t2_ParamLimits

0x82c7,	// (0x000261bd) sc_clock_pane_t2

0x82d9,	// (0x000261cf) sc_clock_pane_t3_ParamLimits

0x82d9,	// (0x000261cf) sc_clock_pane_t3

0x0004,

0xfc10,	// (0x0002db06) sc_clock_pane_t_ParamLimits

0xfc10,	// (0x0002db06) sc_clock_pane_t

0x92a2,	// (0x00027198) main_fs_bigclock_indicator_pane_ParamLimits

0x92a2,	// (0x00027198) main_fs_bigclock_indicator_pane

0x8374,	// (0x0002626a) main_fs_bigclock_pane_g1_ParamLimits

0x8374,	// (0x0002626a) main_fs_bigclock_pane_g1

0x92ae,	// (0x000271a4) main_fs_bigclock_pane_t1_ParamLimits

0x92ae,	// (0x000271a4) main_fs_bigclock_pane_t1

0x92c0,	// (0x000271b6) main_fs_bigclock_pane_t2_ParamLimits

0x92c0,	// (0x000271b6) main_fs_bigclock_pane_t2

0x92d4,	// (0x000271ca) main_fs_bigclock_pane_t3_ParamLimits

0x92d4,	// (0x000271ca) main_fs_bigclock_pane_t3

0x0002,

0xfd8a,	// (0x0002dc80) main_fs_bigclock_pane_t_ParamLimits

0xfd8a,	// (0x0002dc80) main_fs_bigclock_pane_t

0xec5e,	// (0x0002cb54) main_fs_bigclock_indicator_pane_g1

0xde6d,	// (0x0002bd63) ncim_query_content_pane_g2_ParamLimits

0xde6d,	// (0x0002bd63) ncim_query_content_pane_g2

0x0001,

0xfbd4,	// (0x0002daca) ncim_query_content_pane_g_ParamLimits

0xfbd4,	// (0x0002daca) ncim_query_content_pane_g

0x82ed,	// (0x000261e3) sc_clock_pane_t4_ParamLimits

0x82ed,	// (0x000261e3) sc_clock_pane_t4

0x15e6,	// (0x0001f4dc) main_radioblah_pane

0xd27c,	// (0x0002b172) cell_call4_button_pane_t1_copy1_ParamLimits

0xd27c,	// (0x0002b172) cell_call4_button_pane_t1_copy1

0x7f74,	// (0x00025e6a) main_ncimui_pane_t1_ParamLimits

0x7f74,	// (0x00025e6a) main_ncimui_pane_t1

0x7f8e,	// (0x00025e84) main_ncimui_pane_t2_ParamLimits

0x7f8e,	// (0x00025e84) main_ncimui_pane_t2

0x0002,

0xfbcd,	// (0x0002dac3) main_ncimui_pane_t_ParamLimits

0xfbcd,	// (0x0002dac3) main_ncimui_pane_t

0xe2cd,	// (0x0002c1c3) main_radioblah_anim_pane_ParamLimits

0xe2cd,	// (0x0002c1c3) main_radioblah_anim_pane

0xe2de,	// (0x0002c1d4) main_radioblah_info_pane_ParamLimits

0xe2de,	// (0x0002c1d4) main_radioblah_info_pane

0xe2f2,	// (0x0002c1e8) main_radioblah_pane_t1_ParamLimits

0xe2f2,	// (0x0002c1e8) main_radioblah_pane_t1

0xe30e,	// (0x0002c204) main_radioblah_pane_t2_ParamLimits

0xe30e,	// (0x0002c204) main_radioblah_pane_t2

0x0003,

0x0bb2,	// (0x0001eaa8) main_radioblah_pane_t_ParamLimits

0x0bb2,	// (0x0001eaa8) main_radioblah_pane_t

0x83c6,	// (0x000262bc) main_radioblah_rocker_ctrl_pane_ParamLimits

0x83c6,	// (0x000262bc) main_radioblah_rocker_ctrl_pane

0xe356,	// (0x0002c24c) main_radioblah_info_pane_t1_ParamLimits

0xe356,	// (0x0002c24c) main_radioblah_info_pane_t1

0x840b,	// (0x00026301) main_radioblah_info_pane_t2_ParamLimits

0x840b,	// (0x00026301) main_radioblah_info_pane_t2

0x0003,

0xfc1b,	// (0x0002db11) main_radioblah_info_pane_t_ParamLimits

0xfc1b,	// (0x0002db11) main_radioblah_info_pane_t

0xc8bc,	// (0x0002a7b2) main_radioblah_rocker_ctrl_pane_g1

0x84bb,	// (0x000263b1) main_radioblah_rocker_ctrl_pane_g2

0x84c3,	// (0x000263b9) main_radioblah_rocker_ctrl_pane_g3

0x84cb,	// (0x000263c1) main_radioblah_rocker_ctrl_pane_g4

0x84d3,	// (0x000263c9) main_radioblah_rocker_ctrl_pane_g5

0x84db,	// (0x000263d1) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc24,	// (0x0002db1a) main_radioblah_rocker_ctrl_pane_g

0x7f1b,	// (0x00025e11) main_cset_text2_pane_t1_copy1_ParamLimits

0x1fb9,	// (0x0001feaf) cam4_image_uncrop_qvga_pane

0x20ea,	// (0x0001ffe0) vid4_image_uncrop_qcif_pane

0x2704,	// (0x000205fa) cam6_image_uncrop_qvga_pane_ParamLimits

0x2704,	// (0x000205fa) cam6_image_uncrop_qvga_pane

0xdb82,	// (0x0002ba78) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb82,	// (0x0002ba78) vid6_image_uncrop_qcif_pane

0x9cbe,	// (0x00027bb4) bg_popup_preview_window_pane_cp03

0xde1f,	// (0x0002bd15) list_cset_text2_pane

0xde27,	// (0x0002bd1d) main_cset6_text2_pane_g1

0xde2f,	// (0x0002bd25) main_cset6_text2_pane_t1

0x84e3,	// (0x000263d9) list_cset_text2_pane_t1_ParamLimits

0x84e3,	// (0x000263d9) list_cset_text2_pane_t1

0x15e6,	// (0x0001f4dc) main_radioblah_pane_ParamLimits

0x824c,	// (0x00026142) main_mobtv_info_pane_t3_ParamLimits

0x824c,	// (0x00026142) main_mobtv_info_pane_t3

0x83b4,	// (0x000262aa) main_radioblah_pane_g1

0x83df,	// (0x000262d5) main_radioblah_info_pane_g1

0x8460,	// (0x00026356) main_radioblah_info_pane_t3_ParamLimits

0x8460,	// (0x00026356) main_radioblah_info_pane_t3

0x445e,	// (0x00022354) highlight_cell_cale_month_pane_ParamLimits

0x445e,	// (0x00022354) highlight_cell_cale_month_pane

0x111c,	// (0x0001f012) main_phob_fisheye_pane

0xcc27,	// (0x0002ab1d) scroll_pane_cp0031_ParamLimits

0xcc27,	// (0x0002ab1d) scroll_pane_cp0031

0xdc90,	// (0x0002bb86) wait_bar_pane_cp08_ParamLimits

0x7c0b,	// (0x00025b01) cset_list_set_pane_copy1_ParamLimits

0xe399,	// (0x0002c28f) highlight_cell_cale_month_pane_g1

0x8500,	// (0x000263f6) highlight_cell_cale_month_pane_t1

0xd8f6,	// (0x0002b7ec) list_gen_pane_cp01

0xd47e,	// (0x0002b374) scroll_pane_01

0x850e,	// (0x00026404) list_single_double_fisheye_pane

0x8517,	// (0x0002640d) list_double_fisheye_pane_g1_ParamLimits

0x8517,	// (0x0002640d) list_double_fisheye_pane_g1

0x8523,	// (0x00026419) list_double_fisheye_pane_g2_ParamLimits

0x8523,	// (0x00026419) list_double_fisheye_pane_g2

0x8537,	// (0x0002642d) list_double_fisheye_pane_g3_ParamLimits

0x8537,	// (0x0002642d) list_double_fisheye_pane_g3

0x0004,

0xfc31,	// (0x0002db27) list_double_fisheye_pane_g_ParamLimits

0xfc31,	// (0x0002db27) list_double_fisheye_pane_g

0x8560,	// (0x00026456) list_double_fisheye_pane_t1_ParamLimits

0x8560,	// (0x00026456) list_double_fisheye_pane_t1

0x857b,	// (0x00026471) list_double_fisheye_pane_t2_ParamLimits

0x857b,	// (0x00026471) list_double_fisheye_pane_t2

0x0001,

0xfc3c,	// (0x0002db32) list_double_fisheye_pane_t_ParamLimits

0xfc3c,	// (0x0002db32) list_double_fisheye_pane_t

0x111c,	// (0x0001f012) main_call5_pane

0x8313,	// (0x00026209) sc_swipe_pane_ParamLimits

0x8313,	// (0x00026209) sc_swipe_pane

0x85a9,	// (0x0002649f) call5_image_pane_ParamLimits

0x85a9,	// (0x0002649f) call5_image_pane

0x85b9,	// (0x000264af) call5_swipe_1_pane_ParamLimits

0x85b9,	// (0x000264af) call5_swipe_1_pane

0x85c5,	// (0x000264bb) call5_swipe_2_pane_ParamLimits

0x85c5,	// (0x000264bb) call5_swipe_2_pane

0x85df,	// (0x000264d5) popup_call5_audio_first_window_ParamLimits

0x85df,	// (0x000264d5) popup_call5_audio_first_window

0xcb1f,	// (0x0002aa15) call5_swipe_1_pane_g1_ParamLimits

0xcb1f,	// (0x0002aa15) call5_swipe_1_pane_g1

0xe3a1,	// (0x0002c297) call5_swipe_1_pane_g2_ParamLimits

0xe3a1,	// (0x0002c297) call5_swipe_1_pane_g2

0x0001,

0xfc41,	// (0x0002db37) call5_swipe_1_pane_g_ParamLimits

0xfc41,	// (0x0002db37) call5_swipe_1_pane_g

0xe3ad,	// (0x0002c2a3) call5_swipe_1_pane_t1_ParamLimits

0xe3ad,	// (0x0002c2a3) call5_swipe_1_pane_t1

0xcb1f,	// (0x0002aa15) call5_swipe_2_pane_g1_ParamLimits

0xcb1f,	// (0x0002aa15) call5_swipe_2_pane_g1

0xe3c2,	// (0x0002c2b8) call5_swipe_2_pane_g2_ParamLimits

0xe3c2,	// (0x0002c2b8) call5_swipe_2_pane_g2

0x0001,

0xfc46,	// (0x0002db3c) call5_swipe_2_pane_g_ParamLimits

0xfc46,	// (0x0002db3c) call5_swipe_2_pane_g

0xe3ce,	// (0x0002c2c4) call5_swipe_2_pane_t1_ParamLimits

0xe3ce,	// (0x0002c2c4) call5_swipe_2_pane_t1

0xe3e3,	// (0x0002c2d9) sc_swipe_pane_g1_ParamLimits

0xe3e3,	// (0x0002c2d9) sc_swipe_pane_g1

0xe3f0,	// (0x0002c2e6) sc_swipe_pane_g2_ParamLimits

0xe3f0,	// (0x0002c2e6) sc_swipe_pane_g2

0x0001,

0x0beb,	// (0x0001eae1) sc_swipe_pane_g_ParamLimits

0x0beb,	// (0x0001eae1) sc_swipe_pane_g

0xe3fc,	// (0x0002c2f2) sc_swipe_pane_t1_ParamLimits

0xe3fc,	// (0x0002c2f2) sc_swipe_pane_t1

0x111c,	// (0x0001f012) main_cmail_launcher_pane

0x85ed,	// (0x000264e3) aid_size_cell_cmail_l_ParamLimits

0x85ed,	// (0x000264e3) aid_size_cell_cmail_l

0x85fd,	// (0x000264f3) grid_cmail_l_pane_ParamLimits

0x85fd,	// (0x000264f3) grid_cmail_l_pane

0x860d,	// (0x00026503) cell_cmail_l_pane_ParamLimits

0x860d,	// (0x00026503) cell_cmail_l_pane

0x8621,	// (0x00026517) cell_cmail_l_pane_g1_ParamLimits

0x8621,	// (0x00026517) cell_cmail_l_pane_g1

0x862d,	// (0x00026523) cell_cmail_l_pane_t1_ParamLimits

0x862d,	// (0x00026523) cell_cmail_l_pane_t1

0xe411,	// (0x0002c307) cell_cmail_l_pane_t2_ParamLimits

0xe411,	// (0x0002c307) cell_cmail_l_pane_t2

0x0001,

0xfc4b,	// (0x0002db41) cell_cmail_l_pane_t_ParamLimits

0xfc4b,	// (0x0002db41) cell_cmail_l_pane_t

0xa3c5,	// (0x000282bb) grid_highlight_pane_cp018_ParamLimits

0xa3c5,	// (0x000282bb) grid_highlight_pane_cp018

0x0f7e,	// (0x0001ee74) main2_pane_ParamLimits

0x0f7e,	// (0x0001ee74) main2_pane

0xa4a2,	// (0x00028398) popup_sp_fs_action_menu_bg_pane_g1

0xa4aa,	// (0x000283a0) popup_sp_fs_action_menu_bg_pane_g2

0xa4b2,	// (0x000283a8) popup_sp_fs_action_menu_bg_pane_g3

0xa4ba,	// (0x000283b0) popup_sp_fs_action_menu_bg_pane_g4

0xa4c2,	// (0x000283b8) popup_sp_fs_action_menu_bg_pane_g5

0xa4ca,	// (0x000283c0) popup_sp_fs_action_menu_bg_pane_g6

0xa4d2,	// (0x000283c8) popup_sp_fs_action_menu_bg_pane_g7

0xa4da,	// (0x000283d0) popup_sp_fs_action_menu_bg_pane_g8

0xa4e2,	// (0x000283d8) popup_sp_fs_action_menu_bg_pane_g9

0xa4ea,	// (0x000283e0) popup_sp_fs_action_menu_bg_pane_g10

0xa4ea,	// (0x000283e0) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0002d083) popup_sp_fs_action_menu_bg_pane_g

0x322f,	// (0x00021125) list_medium_line_x2_t3_g3_g1_ParamLimits

0x322f,	// (0x00021125) list_medium_line_x2_t3_g3_g1

0x323b,	// (0x00021131) list_medium_line_x2_t3_g3_g2_ParamLimits

0x323b,	// (0x00021131) list_medium_line_x2_t3_g3_g2

0x3247,	// (0x0002113d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3247,	// (0x0002113d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0002d133) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0002d133) list_medium_line_x2_t3_g3_g

0x3253,	// (0x00021149) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3253,	// (0x00021149) list_medium_line_x2_t3_g3_t1

0x3268,	// (0x0002115e) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3268,	// (0x0002115e) list_medium_line_x2_t3_g3_t2

0x327a,	// (0x00021170) list_medium_line_x2_t3_g3_t3_ParamLimits

0x327a,	// (0x00021170) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0002d13a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0002d13a) list_medium_line_x2_t3_g3_t

0x322f,	// (0x00021125) list_medium_line_x2_t3_g2_g1_ParamLimits

0x322f,	// (0x00021125) list_medium_line_x2_t3_g2_g1

0x3247,	// (0x0002113d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3247,	// (0x0002113d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0002d141) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0002d141) list_medium_line_x2_t3_g2_g

0x328f,	// (0x00021185) list_medium_line_x2_t3_g2_t1_ParamLimits

0x328f,	// (0x00021185) list_medium_line_x2_t3_g2_t1

0x32a5,	// (0x0002119b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x32a5,	// (0x0002119b) list_medium_line_x2_t3_g2_t2

0x32b7,	// (0x000211ad) list_medium_line_x2_t3_g2_t3_ParamLimits

0x32b7,	// (0x000211ad) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0002d146) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0002d146) list_medium_line_x2_t3_g2_t

0x322f,	// (0x00021125) list_medium_line_x2_t4_g4_g1_ParamLimits

0x322f,	// (0x00021125) list_medium_line_x2_t4_g4_g1

0x32d5,	// (0x000211cb) list_medium_line_x2_t4_g4_g2_ParamLimits

0x32d5,	// (0x000211cb) list_medium_line_x2_t4_g4_g2

0x323b,	// (0x00021131) list_medium_line_x2_t4_g4_g3_ParamLimits

0x323b,	// (0x00021131) list_medium_line_x2_t4_g4_g3

0x32e1,	// (0x000211d7) list_medium_line_x2_t4_g4_g4_ParamLimits

0x32e1,	// (0x000211d7) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0002d14d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0002d14d) list_medium_line_x2_t4_g4_g

0x32ed,	// (0x000211e3) list_medium_line_x2_t4_g4_t1_ParamLimits

0x32ed,	// (0x000211e3) list_medium_line_x2_t4_g4_t1

0x3307,	// (0x000211fd) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3307,	// (0x000211fd) list_medium_line_x2_t4_g4_t2

0x331d,	// (0x00021213) list_medium_line_x2_t4_g4_t3_ParamLimits

0x331d,	// (0x00021213) list_medium_line_x2_t4_g4_t3

0x3332,	// (0x00021228) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3332,	// (0x00021228) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0002d156) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0002d156) list_medium_line_x2_t4_g4_t

0x322f,	// (0x00021125) list_medium_line_x2_t2_g4_g1_ParamLimits

0x322f,	// (0x00021125) list_medium_line_x2_t2_g4_g1

0x32d5,	// (0x000211cb) list_medium_line_x2_t2_g4_g2_ParamLimits

0x32d5,	// (0x000211cb) list_medium_line_x2_t2_g4_g2

0x323b,	// (0x00021131) list_medium_line_x2_t2_g4_g3_ParamLimits

0x323b,	// (0x00021131) list_medium_line_x2_t2_g4_g3

0x3247,	// (0x0002113d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3247,	// (0x0002113d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0002d1bd) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0002d1bd) list_medium_line_x2_t2_g4_g

0x4484,	// (0x0002237a) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4484,	// (0x0002237a) list_medium_line_x2_t2_g4_t1

0x327a,	// (0x00021170) list_medium_line_x2_t2_g4_t2_ParamLimits

0x327a,	// (0x00021170) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0002d1c6) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0002d1c6) list_medium_line_x2_t2_g4_t

0x322f,	// (0x00021125) list_medium_line_x2_t2_g3_g1_ParamLimits

0x322f,	// (0x00021125) list_medium_line_x2_t2_g3_g1

0x323b,	// (0x00021131) list_medium_line_x2_t2_g3_g2_ParamLimits

0x323b,	// (0x00021131) list_medium_line_x2_t2_g3_g2

0x3247,	// (0x0002113d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3247,	// (0x0002113d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0002d133) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0002d133) list_medium_line_x2_t2_g3_g

0x4499,	// (0x0002238f) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4499,	// (0x0002238f) list_medium_line_x2_t2_g3_t1

0x327a,	// (0x00021170) list_medium_line_x2_t2_g3_t2_ParamLimits

0x327a,	// (0x00021170) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0002d1cb) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0002d1cb) list_medium_line_x2_t2_g3_t

0x4606,	// (0x000224fc) main_sp_fs_list_pane_ParamLimits

0x4606,	// (0x000224fc) main_sp_fs_list_pane

0x4612,	// (0x00022508) sp_fs_scroll_pane_ParamLimits

0x4612,	// (0x00022508) sp_fs_scroll_pane

0x461e,	// (0x00022514) list_medium_line_x2_t3_t1

0x462e,	// (0x00022524) list_medium_line_x2_t3_t2

0x463c,	// (0x00022532) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0002d216) list_medium_line_x2_t3_t

0x464a,	// (0x00022540) list_medium_line_x3_t4_t1

0x465a,	// (0x00022550) list_medium_line_x3_t4_t2

0x4668,	// (0x0002255e) list_medium_line_x3_t4_t3

0x463c,	// (0x00022532) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0002d21d) list_medium_line_x3_t4_t

0x4676,	// (0x0002256c) list_medium_line_x4_t5_t1

0x4686,	// (0x0002257c) list_medium_line_x4_t5_t2

0x4668,	// (0x0002255e) list_medium_line_x4_t5_t3

0x4694,	// (0x0002258a) list_medium_line_x4_t5_t4

0x463c,	// (0x00022532) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0002d226) list_medium_line_x4_t5_t

0x322f,	// (0x00021125) list_medium_line_t4_g4_g1_ParamLimits

0x322f,	// (0x00021125) list_medium_line_t4_g4_g1

0x46a2,	// (0x00022598) list_medium_line_t4_g4_g2_ParamLimits

0x46a2,	// (0x00022598) list_medium_line_t4_g4_g2

0x46ae,	// (0x000225a4) list_medium_line_t4_g4_g3_ParamLimits

0x46ae,	// (0x000225a4) list_medium_line_t4_g4_g3

0x3247,	// (0x0002113d) list_medium_line_t4_g4_g4_ParamLimits

0x3247,	// (0x0002113d) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0002d231) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0002d231) list_medium_line_t4_g4_g

0x46ba,	// (0x000225b0) list_medium_line_t4_g4_t1_ParamLimits

0x46ba,	// (0x000225b0) list_medium_line_t4_g4_t1

0x46cf,	// (0x000225c5) list_medium_line_t4_g4_t2_ParamLimits

0x46cf,	// (0x000225c5) list_medium_line_t4_g4_t2

0x46e5,	// (0x000225db) list_medium_line_t4_g4_t3_ParamLimits

0x46e5,	// (0x000225db) list_medium_line_t4_g4_t3

0x327a,	// (0x00021170) list_medium_line_t4_g4_t4_ParamLimits

0x327a,	// (0x00021170) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0002d23a) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0002d23a) list_medium_line_t4_g4_t

0x4789,	// (0x0002267f) chi_dic_find_pane_g1

0x1602,	// (0x0001f4f8) main_tport_pane

0x71af,	// (0x000250a5) list_medium_line_plain_t1

0x71d5,	// (0x000250cb) list_medium_line_t2_g2_g1_ParamLimits

0x71d5,	// (0x000250cb) list_medium_line_t2_g2_g1

0x71e1,	// (0x000250d7) list_medium_line_t2_g2_g2_ParamLimits

0x71e1,	// (0x000250d7) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0002d8f6) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0002d8f6) list_medium_line_t2_g2_g

0x71ed,	// (0x000250e3) list_medium_line_t2_g2_t1_ParamLimits

0x71ed,	// (0x000250e3) list_medium_line_t2_g2_t1

0x7204,	// (0x000250fa) list_medium_line_t2_g2_t2_ParamLimits

0x7204,	// (0x000250fa) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0002d8fb) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0002d8fb) list_medium_line_t2_g2_t

0xd8ff,	// (0x0002b7f5) aid_sp_fs_list_icon_a_sm

0xd907,	// (0x0002b7fd) aid_sp_fs_list_icon_d

0xd90f,	// (0x0002b805) aid_sp_fs_text_primary

0xd918,	// (0x0002b80e) aid_sp_fs_text_secondary

0x775d,	// (0x00025653) list_medium_line

0x775d,	// (0x00025653) list_medium_line_g2

0x775d,	// (0x00025653) list_medium_line_g3

0x775d,	// (0x00025653) list_medium_line_plain

0x775d,	// (0x00025653) list_medium_line_plain_t2

0x775d,	// (0x00025653) list_medium_line_plain_t3

0x775d,	// (0x00025653) list_medium_line_right_icon

0x775d,	// (0x00025653) list_medium_line_right_iconx2

0x775d,	// (0x00025653) list_medium_line_t2

0x775d,	// (0x00025653) list_medium_line_t2_g2

0x775d,	// (0x00025653) list_medium_line_t2_g3

0x775d,	// (0x00025653) list_medium_line_t2_right_icon

0x775d,	// (0x00025653) list_medium_line_t2_right_iconx2

0x775d,	// (0x00025653) list_medium_line_t3

0x775d,	// (0x00025653) list_medium_line_t3_g2

0x775d,	// (0x00025653) list_medium_line_t3_g3

0x775d,	// (0x00025653) list_medium_line_t3_right_iconx2

0x7766,	// (0x0002565c) list_medium_line_t4_g4

0xe390,	// (0x0002c286) list_medium_line_x2

0xe390,	// (0x0002c286) list_medium_line_x2_t2_g2

0xe390,	// (0x0002c286) list_medium_line_x2_t2_g3

0xe390,	// (0x0002c286) list_medium_line_x2_t2_g4

0xe390,	// (0x0002c286) list_medium_line_x2_t3

0xe390,	// (0x0002c286) list_medium_line_x2_t3_g2

0xe390,	// (0x0002c286) list_medium_line_x2_t3_g3

0xe390,	// (0x0002c286) list_medium_line_x2_t3_g4

0xe390,	// (0x0002c286) list_medium_line_x2_t4_g2

0xe390,	// (0x0002c286) list_medium_line_x2_t4_g4

0x776f,	// (0x00025665) list_medium_line_x3

0x776f,	// (0x00025665) list_medium_line_x3_t4

0x776f,	// (0x00025665) list_medium_line_x3_t4_g4

0x7766,	// (0x0002565c) list_medium_line_x4_t4

0x7766,	// (0x0002565c) list_medium_line_x4_t4_g7

0x7766,	// (0x0002565c) list_medium_line_x4_t5

0x7778,	// (0x0002566e) list_single_fs_dyc_pane_ParamLimits

0x7778,	// (0x0002566e) list_single_fs_dyc_pane

0x322f,	// (0x00021125) list_medium_line_x4_t4_g7_g1_ParamLimits

0x322f,	// (0x00021125) list_medium_line_x4_t4_g7_g1

0x7e4a,	// (0x00025d40) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7e4a,	// (0x00025d40) list_medium_line_x4_t4_g7_g2

0x7e56,	// (0x00025d4c) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7e56,	// (0x00025d4c) list_medium_line_x4_t4_g7_g3

0x7e65,	// (0x00025d5b) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7e65,	// (0x00025d5b) list_medium_line_x4_t4_g7_g4

0x7e71,	// (0x00025d67) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7e71,	// (0x00025d67) list_medium_line_x4_t4_g7_g5

0x7e80,	// (0x00025d76) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7e80,	// (0x00025d76) list_medium_line_x4_t4_g7_g6

0x7e8f,	// (0x00025d85) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7e8f,	// (0x00025d85) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbae,	// (0x0002daa4) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbae,	// (0x0002daa4) list_medium_line_x4_t4_g7_g

0x7e9b,	// (0x00025d91) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7e9b,	// (0x00025d91) list_medium_line_x4_t4_g7_t1

0x7eb0,	// (0x00025da6) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7eb0,	// (0x00025da6) list_medium_line_x4_t4_g7_t2

0x7ec5,	// (0x00025dbb) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7ec5,	// (0x00025dbb) list_medium_line_x4_t4_g7_t3

0x7eda,	// (0x00025dd0) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7eda,	// (0x00025dd0) list_medium_line_x4_t4_g7_t4

0x7eec,	// (0x00025de2) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7eec,	// (0x00025de2) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbbd,	// (0x0002dab3) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbbd,	// (0x0002dab3) list_medium_line_x4_t4_g7_t

0x7efe,	// (0x00025df4) list_single_dyc_row_pane_ParamLimits

0x7efe,	// (0x00025df4) list_single_dyc_row_pane

0x859d,	// (0x00026493) call5_gesture_pane_ParamLimits

0x859d,	// (0x00026493) call5_gesture_pane

0x85d1,	// (0x000264c7) call5_windows_pane_ParamLimits

0x85d1,	// (0x000264c7) call5_windows_pane

0x8643,	// (0x00026539) call5_swipe_1_pane_cp_ParamLimits

0x8643,	// (0x00026539) call5_swipe_1_pane_cp

0x864f,	// (0x00026545) call5_swipe_2_pane_cp_ParamLimits

0x864f,	// (0x00026545) call5_swipe_2_pane_cp

0xb03b,	// (0x00028f31) call5_image_pane_cp

0x865b,	// (0x00026551) popup_call5_audio_first_window_cp_ParamLimits

0x865b,	// (0x00026551) popup_call5_audio_first_window_cp

0xe3e3,	// (0x0002c2d9) call5_swipe_1_pane_g1_cp_ParamLimits

0xe3e3,	// (0x0002c2d9) call5_swipe_1_pane_g1_cp

0xe423,	// (0x0002c319) call5_swipe_1_pane_g2_cp

0xe3fc,	// (0x0002c2f2) call5_swipe_1_pane_t1_cp_ParamLimits

0xe3fc,	// (0x0002c2f2) call5_swipe_1_pane_t1_cp

0xe3e3,	// (0x0002c2d9) call5_swipe_2_pane_g1_cp_ParamLimits

0xe3e3,	// (0x0002c2d9) call5_swipe_2_pane_g1_cp

0xe42b,	// (0x0002c321) call5_swipe_2_pane_g2_cp

0xe433,	// (0x0002c329) call5_swipe_2_pane_t1_cp_ParamLimits

0xe433,	// (0x0002c329) call5_swipe_2_pane_t1_cp

0xa3c5,	// (0x000282bb) main_sp_fs_email_pane

0xe448,	// (0x0002c33e) main_sp_fs_listscroll_pane_te

0x8669,	// (0x0002655f) popup_sp_fs_action_menu_pane_ParamLimits

0x8669,	// (0x0002655f) popup_sp_fs_action_menu_pane

0xc8bc,	// (0x0002a7b2) bg_sp_fs_ctrlbar_pane_g1

0xce9e,	// (0x0002ad94) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xceb0,	// (0x0002ada6) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcea7,	// (0x0002ad9d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc8bc,	// (0x0002a7b2) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc50,	// (0x0002db46) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc6a1,	// (0x0002a597) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc6a1,	// (0x0002a597) bg_sp_fs_ctrlbar_ddmenu_pane

0xe451,	// (0x0002c347) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe451,	// (0x0002c347) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe45d,	// (0x0002c353) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe45d,	// (0x0002c353) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0bfe,	// (0x0001eaf4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0bfe,	// (0x0001eaf4) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe469,	// (0x0002c35f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe469,	// (0x0002c35f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x86ad,	// (0x000265a3) list_medium_line_t2_right_icon_g1

0x86b5,	// (0x000265ab) list_medium_line_t2_right_icon_t1

0x86c5,	// (0x000265bb) list_medium_line_t2_right_icon_t2

0x0001,

0xfc59,	// (0x0002db4f) list_medium_line_t2_right_icon_t

0xc4ab,	// (0x0002a3a1) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc4ab,	// (0x0002a3a1) bg_sp_fs_ctrlbar_pane

0x872a,	// (0x00026620) main_sp_fs_ctrlbar_button_pane_cp01

0x8732,	// (0x00026628) main_sp_fs_ctrlbar_ddmenu_pane

0xe4bb,	// (0x0002c3b1) main_sp_fs_ctrlbar_pane_g1

0xe4c7,	// (0x0002c3bd) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0c08,	// (0x0001eafe) main_sp_fs_ctrlbar_pane_g

0xe4d3,	// (0x0002c3c9) main_sp_fs_ctrlbar_pane_t1

0x873c,	// (0x00026632) main_sp_fs_ctrlbar_pane

0x8752,	// (0x00026648) main_sp_fs_listscroll_pane_te_cp01

0x8763,	// (0x00026659) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8763,	// (0x00026659) popup_sp_fs_action_menu_pane_cp01

0xa3c5,	// (0x000282bb) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa3c5,	// (0x000282bb) bg_sp_fs_highlight_list_pane_cp01

0xe503,	// (0x0002c3f9) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe503,	// (0x0002c3f9) sp_fs_action_menu_list_gene_pane_g1

0xe512,	// (0x0002c408) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe512,	// (0x0002c408) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0x0c12,	// (0x0001eb08) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0x0c12,	// (0x0001eb08) sp_fs_action_menu_list_gene_pane_g

0xe51f,	// (0x0002c415) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe51f,	// (0x0002c415) sp_fs_action_menu_list_gene_pane_t1

0xe537,	// (0x0002c42d) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe537,	// (0x0002c42d) sp_fs_action_menu_list_gene_pane

0xe556,	// (0x0002c44c) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe556,	// (0x0002c44c) popup_sp_fs_action_menu_bg_pane

0xe564,	// (0x0002c45a) sp_fs_action_menu_list_pane_ParamLimits

0xe564,	// (0x0002c45a) sp_fs_action_menu_list_pane

0x878d,	// (0x00026683) sp_fs_scroll_pane_cp01_ParamLimits

0x878d,	// (0x00026683) sp_fs_scroll_pane_cp01

0x87b3,	// (0x000266a9) list_medium_line_plain_t2_t1

0x87c3,	// (0x000266b9) list_medium_line_plain_t2_t2

0x0001,

0xfc5e,	// (0x0002db54) list_medium_line_plain_t2_t

0x87d1,	// (0x000266c7) list_medium_line_plain_t3_t1

0x87e1,	// (0x000266d7) list_medium_line_plain_t3_t2

0x87ef,	// (0x000266e5) list_medium_line_plain_t3_t3

0x0002,

0xfc63,	// (0x0002db59) list_medium_line_plain_t3_t

0x322f,	// (0x00021125) list_medium_line_x2_t2_g2_g1_ParamLimits

0x322f,	// (0x00021125) list_medium_line_x2_t2_g2_g1

0x3247,	// (0x0002113d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3247,	// (0x0002113d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0002d141) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0002d141) list_medium_line_x2_t2_g2_g

0x46ba,	// (0x000225b0) list_medium_line_x2_t2_g2_t1_ParamLimits

0x46ba,	// (0x000225b0) list_medium_line_x2_t2_g2_t1

0x327a,	// (0x00021170) list_medium_line_x2_t2_g2_t2_ParamLimits

0x327a,	// (0x00021170) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc6a,	// (0x0002db60) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc6a,	// (0x0002db60) list_medium_line_x2_t2_g2_t

0x322f,	// (0x00021125) list_medium_line_x2_t4_g2_g1_ParamLimits

0x322f,	// (0x00021125) list_medium_line_x2_t4_g2_g1

0x3247,	// (0x0002113d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3247,	// (0x0002113d) list_medium_line_x2_t4_g2_g2

0x0001,

0xf24b,	// (0x0002d141) list_medium_line_x2_t4_g2_g_ParamLimits

0xf24b,	// (0x0002d141) list_medium_line_x2_t4_g2_g

0x87fd,	// (0x000266f3) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87fd,	// (0x000266f3) list_medium_line_x2_t4_g2_t1

0x8817,	// (0x0002670d) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8817,	// (0x0002670d) list_medium_line_x2_t4_g2_t2

0x882c,	// (0x00026722) list_medium_line_x2_t4_g2_t3_ParamLimits

0x882c,	// (0x00026722) list_medium_line_x2_t4_g2_t3

0x327a,	// (0x00021170) list_medium_line_x2_t4_g2_t4_ParamLimits

0x327a,	// (0x00021170) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc6f,	// (0x0002db65) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc6f,	// (0x0002db65) list_medium_line_x2_t4_g2_t

0x8841,	// (0x00026737) list_medium_line_t3_right_iconx2_g1

0x86ad,	// (0x000265a3) list_medium_line_t3_right_iconx2_g2

0x8849,	// (0x0002673f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc78,	// (0x0002db6e) list_medium_line_t3_right_iconx2_g

0x8851,	// (0x00026747) list_medium_line_t3_right_iconx2_t1

0x8861,	// (0x00026757) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc7f,	// (0x0002db75) list_medium_line_t3_right_iconx2_t

0x322f,	// (0x00021125) list_medium_line_x3_t4_g4_g1_ParamLimits

0x322f,	// (0x00021125) list_medium_line_x3_t4_g4_g1

0x323b,	// (0x00021131) list_medium_line_x3_t4_g4_g2_ParamLimits

0x323b,	// (0x00021131) list_medium_line_x3_t4_g4_g2

0x46a2,	// (0x00022598) list_medium_line_x3_t4_g4_g3_ParamLimits

0x46a2,	// (0x00022598) list_medium_line_x3_t4_g4_g3

0x886f,	// (0x00026765) list_medium_line_x3_t4_g4_g4_ParamLimits

0x886f,	// (0x00026765) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc84,	// (0x0002db7a) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc84,	// (0x0002db7a) list_medium_line_x3_t4_g4_g

0x887b,	// (0x00026771) list_medium_line_x3_t4_g4_t1_ParamLimits

0x887b,	// (0x00026771) list_medium_line_x3_t4_g4_t1

0x8892,	// (0x00026788) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8892,	// (0x00026788) list_medium_line_x3_t4_g4_t2

0x88a7,	// (0x0002679d) list_medium_line_x3_t4_g4_t3_ParamLimits

0x88a7,	// (0x0002679d) list_medium_line_x3_t4_g4_t3

0x88bc,	// (0x000267b2) list_medium_line_x3_t4_g4_t4_ParamLimits

0x88bc,	// (0x000267b2) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc8d,	// (0x0002db83) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc8d,	// (0x0002db83) list_medium_line_x3_t4_g4_t

0x88d9,	// (0x000267cf) list_single_dyc_row_text_pane_t1_ParamLimits

0x88d9,	// (0x000267cf) list_single_dyc_row_text_pane_t1

0x8910,	// (0x00026806) list_single_dyc_row_text_pane_t2_ParamLimits

0x8910,	// (0x00026806) list_single_dyc_row_text_pane_t2

0xe584,	// (0x0002c47a) list_single_dyc_row_text_pane_t3_ParamLimits

0xe584,	// (0x0002c47a) list_single_dyc_row_text_pane_t3

0x0005,

0xfc96,	// (0x0002db8c) list_single_dyc_row_text_pane_t_ParamLimits

0xfc96,	// (0x0002db8c) list_single_dyc_row_text_pane_t

0xe5a8,	// (0x0002c49e) list_single_dyc_row_pane_g1_ParamLimits

0xe5a8,	// (0x0002c49e) list_single_dyc_row_pane_g1

0xe5b4,	// (0x0002c4aa) list_single_dyc_row_pane_g2_ParamLimits

0xe5b4,	// (0x0002c4aa) list_single_dyc_row_pane_g2

0xe5c0,	// (0x0002c4b6) list_single_dyc_row_pane_g3_ParamLimits

0xe5c0,	// (0x0002c4b6) list_single_dyc_row_pane_g3

0xe5cc,	// (0x0002c4c2) list_single_dyc_row_pane_g4_ParamLimits

0xe5cc,	// (0x0002c4c2) list_single_dyc_row_pane_g4

0x0003,

0x0c5c,	// (0x0001eb52) list_single_dyc_row_pane_g_ParamLimits

0x0c5c,	// (0x0001eb52) list_single_dyc_row_pane_g

0xe5d8,	// (0x0002c4ce) list_single_dyc_row_text_pane_ParamLimits

0xe5d8,	// (0x0002c4ce) list_single_dyc_row_text_pane

0x9cbe,	// (0x00027bb4) bg_sp_fs_scroll_pane

0xe5f7,	// (0x0002c4ed) thumb_sp_fs_scroll_pane

0x71d5,	// (0x000250cb) list_medium_line_g1_ParamLimits

0x71d5,	// (0x000250cb) list_medium_line_g1

0x8a33,	// (0x00026929) list_medium_line_t1_ParamLimits

0x8a33,	// (0x00026929) list_medium_line_t1

0x322f,	// (0x00021125) list_medium_line_x2_g1_ParamLimits

0x322f,	// (0x00021125) list_medium_line_x2_g1

0x323b,	// (0x00021131) list_medium_line_x2_g2_ParamLimits

0x323b,	// (0x00021131) list_medium_line_x2_g2

0x0001,

0xfca3,	// (0x0002db99) list_medium_line_x2_g_ParamLimits

0xfca3,	// (0x0002db99) list_medium_line_x2_g

0xe600,	// (0x0002c4f6) list_medium_line_x2_t1_ParamLimits

0xe600,	// (0x0002c4f6) list_medium_line_x2_t1

0x322f,	// (0x00021125) list_medium_line_x3_g1_ParamLimits

0x322f,	// (0x00021125) list_medium_line_x3_g1

0x323b,	// (0x00021131) list_medium_line_x3_g2_ParamLimits

0x323b,	// (0x00021131) list_medium_line_x3_g2

0x0001,

0xfca3,	// (0x0002db99) list_medium_line_x3_g_ParamLimits

0xfca3,	// (0x0002db99) list_medium_line_x3_g

0xe600,	// (0x0002c4f6) list_medium_line_x3_t1_ParamLimits

0xe600,	// (0x0002c4f6) list_medium_line_x3_t1

0xe616,	// (0x0002c50c) thumb_sp_fs_scroll_pane_g1

0xe61f,	// (0x0002c515) thumb_sp_fs_scroll_pane_g2

0xe628,	// (0x0002c51e) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0c6a,	// (0x0001eb60) thumb_sp_fs_scroll_pane_g

0xe616,	// (0x0002c50c) bg_sp_fs_scroll_pane_g1

0xe61f,	// (0x0002c515) bg_sp_fs_scroll_pane_g2

0xe628,	// (0x0002c51e) bg_sp_fs_scroll_pane_g3

0x0002,

0x0c6a,	// (0x0001eb60) bg_sp_fs_scroll_pane_g

0x322f,	// (0x00021125) list_medium_line_x2_t3_g4_g1_ParamLimits

0x322f,	// (0x00021125) list_medium_line_x2_t3_g4_g1

0x32d5,	// (0x000211cb) list_medium_line_x2_t3_g4_g2_ParamLimits

0x32d5,	// (0x000211cb) list_medium_line_x2_t3_g4_g2

0x323b,	// (0x00021131) list_medium_line_x2_t3_g4_g3_ParamLimits

0x323b,	// (0x00021131) list_medium_line_x2_t3_g4_g3

0x3247,	// (0x0002113d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3247,	// (0x0002113d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0002d1bd) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0002d1bd) list_medium_line_x2_t3_g4_g

0x8a48,	// (0x0002693e) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a48,	// (0x0002693e) list_medium_line_x2_t3_g4_t1

0x8a5e,	// (0x00026954) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a5e,	// (0x00026954) list_medium_line_x2_t3_g4_t2

0x327a,	// (0x00021170) list_medium_line_x2_t3_g4_t3_ParamLimits

0x327a,	// (0x00021170) list_medium_line_x2_t3_g4_t3

0x0002,

0xfca8,	// (0x0002db9e) list_medium_line_x2_t3_g4_t_ParamLimits

0xfca8,	// (0x0002db9e) list_medium_line_x2_t3_g4_t

0x71d5,	// (0x000250cb) list_medium_line_g2_g1_ParamLimits

0x71d5,	// (0x000250cb) list_medium_line_g2_g1

0x71e1,	// (0x000250d7) list_medium_line_g2_g2_ParamLimits

0x71e1,	// (0x000250d7) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0002d8f6) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0002d8f6) list_medium_line_g2_g

0x8a78,	// (0x0002696e) list_medium_line_g2_t1_ParamLimits

0x8a78,	// (0x0002696e) list_medium_line_g2_t1

0x71d5,	// (0x000250cb) list_medium_line_t3_g2_g1_ParamLimits

0x71d5,	// (0x000250cb) list_medium_line_t3_g2_g1

0x71e1,	// (0x000250d7) list_medium_line_t3_g2_g2_ParamLimits

0x71e1,	// (0x000250d7) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0002d8f6) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0002d8f6) list_medium_line_t3_g2_g

0x8a8d,	// (0x00026983) list_medium_line_t3_g2_t1_ParamLimits

0x8a8d,	// (0x00026983) list_medium_line_t3_g2_t1

0x8aa4,	// (0x0002699a) list_medium_line_t3_g2_t2_ParamLimits

0x8aa4,	// (0x0002699a) list_medium_line_t3_g2_t2

0x8ab9,	// (0x000269af) list_medium_line_t3_g2_t3_ParamLimits

0x8ab9,	// (0x000269af) list_medium_line_t3_g2_t3

0x0002,

0xfcaf,	// (0x0002dba5) list_medium_line_t3_g2_t_ParamLimits

0xfcaf,	// (0x0002dba5) list_medium_line_t3_g2_t

0x86ad,	// (0x000265a3) list_medium_line_right_icon_g1

0x8ace,	// (0x000269c4) list_medium_line_right_icon_t1

0x71d5,	// (0x000250cb) list_medium_line_t2_g1_ParamLimits

0x71d5,	// (0x000250cb) list_medium_line_t2_g1

0x8adc,	// (0x000269d2) list_medium_line_t2_t1_ParamLimits

0x8adc,	// (0x000269d2) list_medium_line_t2_t1

0x8af6,	// (0x000269ec) list_medium_line_t2_t2_ParamLimits

0x8af6,	// (0x000269ec) list_medium_line_t2_t2

0x0001,

0xfcb6,	// (0x0002dbac) list_medium_line_t2_t_ParamLimits

0xfcb6,	// (0x0002dbac) list_medium_line_t2_t

0x71d5,	// (0x000250cb) list_medium_line_t3_g1_ParamLimits

0x71d5,	// (0x000250cb) list_medium_line_t3_g1

0x8b0b,	// (0x00026a01) list_medium_line_t3_t1_ParamLimits

0x8b0b,	// (0x00026a01) list_medium_line_t3_t1

0x8b22,	// (0x00026a18) list_medium_line_t3_t2_ParamLimits

0x8b22,	// (0x00026a18) list_medium_line_t3_t2

0x8b37,	// (0x00026a2d) list_medium_line_t3_t3_ParamLimits

0x8b37,	// (0x00026a2d) list_medium_line_t3_t3

0x0002,

0xfcbb,	// (0x0002dbb1) list_medium_line_t3_t_ParamLimits

0xfcbb,	// (0x0002dbb1) list_medium_line_t3_t

0x71d5,	// (0x000250cb) list_medium_line_g3_g1_ParamLimits

0x71d5,	// (0x000250cb) list_medium_line_g3_g1

0x8b49,	// (0x00026a3f) list_medium_line_g3_g2_ParamLimits

0x8b49,	// (0x00026a3f) list_medium_line_g3_g2

0x71e1,	// (0x000250d7) list_medium_line_g3_g3_ParamLimits

0x71e1,	// (0x000250d7) list_medium_line_g3_g3

0x0002,

0xfcc2,	// (0x0002dbb8) list_medium_line_g3_g_ParamLimits

0xfcc2,	// (0x0002dbb8) list_medium_line_g3_g

0x8b55,	// (0x00026a4b) list_medium_line_g3_t1_ParamLimits

0x8b55,	// (0x00026a4b) list_medium_line_g3_t1

0x71d5,	// (0x000250cb) list_medium_line_t2_g3_g1_ParamLimits

0x71d5,	// (0x000250cb) list_medium_line_t2_g3_g1

0x8b49,	// (0x00026a3f) list_medium_line_t2_g3_g2_ParamLimits

0x8b49,	// (0x00026a3f) list_medium_line_t2_g3_g2

0x71e1,	// (0x000250d7) list_medium_line_t2_g3_g3_ParamLimits

0x71e1,	// (0x000250d7) list_medium_line_t2_g3_g3

0x0002,

0xfcc2,	// (0x0002dbb8) list_medium_line_t2_g3_g_ParamLimits

0xfcc2,	// (0x0002dbb8) list_medium_line_t2_g3_g

0x8b6a,	// (0x00026a60) list_medium_line_t2_g3_t1_ParamLimits

0x8b6a,	// (0x00026a60) list_medium_line_t2_g3_t1

0x8b81,	// (0x00026a77) list_medium_line_t2_g3_t2_ParamLimits

0x8b81,	// (0x00026a77) list_medium_line_t2_g3_t2

0x0001,

0xfcc9,	// (0x0002dbbf) list_medium_line_t2_g3_t_ParamLimits

0xfcc9,	// (0x0002dbbf) list_medium_line_t2_g3_t

0x71d5,	// (0x000250cb) list_medium_line_t3_g3_g1_ParamLimits

0x71d5,	// (0x000250cb) list_medium_line_t3_g3_g1

0x8b49,	// (0x00026a3f) list_medium_line_t3_g3_g2_ParamLimits

0x8b49,	// (0x00026a3f) list_medium_line_t3_g3_g2

0x71e1,	// (0x000250d7) list_medium_line_t3_g3_g3_ParamLimits

0x71e1,	// (0x000250d7) list_medium_line_t3_g3_g3

0x0002,

0xfcc2,	// (0x0002dbb8) list_medium_line_t3_g3_g_ParamLimits

0xfcc2,	// (0x0002dbb8) list_medium_line_t3_g3_g

0x8b96,	// (0x00026a8c) list_medium_line_t3_g3_t1_ParamLimits

0x8b96,	// (0x00026a8c) list_medium_line_t3_g3_t1

0x8baa,	// (0x00026aa0) list_medium_line_t3_g3_t2_ParamLimits

0x8baa,	// (0x00026aa0) list_medium_line_t3_g3_t2

0x8bbc,	// (0x00026ab2) list_medium_line_t3_g3_t3_ParamLimits

0x8bbc,	// (0x00026ab2) list_medium_line_t3_g3_t3

0x0002,

0xfcce,	// (0x0002dbc4) list_medium_line_t3_g3_t_ParamLimits

0xfcce,	// (0x0002dbc4) list_medium_line_t3_g3_t

0x8841,	// (0x00026737) list_medium_line_right_iconx2_g1

0x86ad,	// (0x000265a3) list_medium_line_right_iconx2_g2

0x0001,

0xfcd5,	// (0x0002dbcb) list_medium_line_right_iconx2_g

0x8bce,	// (0x00026ac4) list_medium_line_right_iconx2_t1

0x8841,	// (0x00026737) list_medium_line_t2_right_iconx2_g1

0x86ad,	// (0x000265a3) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcd5,	// (0x0002dbcb) list_medium_line_t2_right_iconx2_g

0x8bdc,	// (0x00026ad2) list_medium_line_t2_right_iconx2_t1

0x8bec,	// (0x00026ae2) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcda,	// (0x0002dbd0) list_medium_line_t2_right_iconx2_t

0x8bfa,	// (0x00026af0) list_medium_line_x4_t4_t1

0x8c08,	// (0x00026afe) list_medium_line_x4_t4_t2

0x8c18,	// (0x00026b0e) list_medium_line_x4_t4_t3

0x8c28,	// (0x00026b1e) list_medium_line_x4_t4_t4

0x0003,

0xfcdf,	// (0x0002dbd5) list_medium_line_x4_t4_t

0x8c62,	// (0x00026b58) tport_appsw_pane_ParamLimits

0x8c62,	// (0x00026b58) tport_appsw_pane

0x8c70,	// (0x00026b66) tport_contact_pane_ParamLimits

0x8c70,	// (0x00026b66) tport_contact_pane

0x8c80,	// (0x00026b76) tport_listscroll_pane_ParamLimits

0x8c80,	// (0x00026b76) tport_listscroll_pane

0x8c90,	// (0x00026b86) cell_tport_appsw_pane_ParamLimits

0x8c90,	// (0x00026b86) cell_tport_appsw_pane

0xcbb0,	// (0x0002aaa6) tport_appsw_pane_g1_ParamLimits

0xcbb0,	// (0x0002aaa6) tport_appsw_pane_g1

0xe631,	// (0x0002c527) tport_contact_pane_g1

0xdef3,	// (0x0002bde9) tport_contact_pane_t1

0xe63a,	// (0x0002c530) tport_contact_pane_t2

0x0001,

0x0cb1,	// (0x0001eba7) tport_contact_pane_t

0xe648,	// (0x0002c53e) list_tport_pane

0xe651,	// (0x0002c547) scroll_pane_cp_030

0x8cc3,	// (0x00026bb9) cell_tport_appsw_pane_g1

0x8cd3,	// (0x00026bc9) cell_tport_appsw_pane_t1

0x8ce1,	// (0x00026bd7) grid_highlight_pane_cp019

0x8ce9,	// (0x00026bdf) list_tport_double_graphic_pane_ParamLimits

0x8ce9,	// (0x00026bdf) list_tport_double_graphic_pane

0xa3c5,	// (0x000282bb) list_highlight_pane_cp023_ParamLimits

0xa3c5,	// (0x000282bb) list_highlight_pane_cp023

0x8cfa,	// (0x00026bf0) list_tport_double_graphic_pane_g1_ParamLimits

0x8cfa,	// (0x00026bf0) list_tport_double_graphic_pane_g1

0x8d07,	// (0x00026bfd) list_tport_double_graphic_pane_t1_ParamLimits

0x8d07,	// (0x00026bfd) list_tport_double_graphic_pane_t1

0x8d1c,	// (0x00026c12) list_tport_double_graphic_pane_t2_ParamLimits

0x8d1c,	// (0x00026c12) list_tport_double_graphic_pane_t2

0x0001,

0xfcef,	// (0x0002dbe5) list_tport_double_graphic_pane_t_ParamLimits

0xfcef,	// (0x0002dbe5) list_tport_double_graphic_pane_t

0x9cbe,	// (0x00027bb4) main_cale_note_pane

0x232f,	// (0x00020225) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x232f,	// (0x00020225) cell_vitu2_function_top_wide_pane_cp01

0x8260,	// (0x00026156) wait_bar_pane_cp05_ParamLimits

0xa3c5,	// (0x000282bb) listscroll_cmail_pane

0xe65a,	// (0x0002c550) list_cmail_pane

0x8d2e,	// (0x00026c24) list_cmail_body_pane

0x8d4e,	// (0x00026c44) list_single_cmail_header_caption_pane

0x8d7a,	// (0x00026c70) list_single_cmail_header_detail_pane_ParamLimits

0x8d7a,	// (0x00026c70) list_single_cmail_header_detail_pane

0xe66a,	// (0x0002c560) list_single_cmail_header_caption_pane_t1

0x8db9,	// (0x00026caf) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8db9,	// (0x00026caf) list_single_cmail_header_detail_pane_g1

0xe678,	// (0x0002c56e) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe678,	// (0x0002c56e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcf4,	// (0x0002dbea) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcf4,	// (0x0002dbea) list_single_cmail_header_detail_pane_g

0x8dcf,	// (0x00026cc5) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8dcf,	// (0x00026cc5) list_single_cmail_header_detail_pane_t1

0x8e0b,	// (0x00026d01) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8e0b,	// (0x00026d01) list_single_cmail_header_editor_pane_bg

0xe094,	// (0x0002bf8a) list_cmail_body_pane_g1

0xe6b5,	// (0x0002c5ab) list_cmail_body_pane_t1

0xd348,	// (0x0002b23e) list_single_cmail_header_editor_pane_bg_g1

0xa820,	// (0x00028716) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd358,	// (0x0002b24e) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd350,	// (0x0002b246) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd5c4,	// (0x0002b4ba) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd378,	// (0x0002b26e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd368,	// (0x0002b25e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd370,	// (0x0002b266) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa800,	// (0x000286f6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8e22,	// (0x00026d18) calenote_gesture_pane_ParamLimits

0x8e22,	// (0x00026d18) calenote_gesture_pane

0x8e3c,	// (0x00026d32) calenote_window_pane_ParamLimits

0x8e3c,	// (0x00026d32) calenote_window_pane

0xe6c3,	// (0x0002c5b9) popup_note_window_cp01

0x8e54,	// (0x00026d4a) calenote_swipe_1_pane_ParamLimits

0x8e54,	// (0x00026d4a) calenote_swipe_1_pane

0x864f,	// (0x00026545) calenote_swipe_2_pane_ParamLimits

0x864f,	// (0x00026545) calenote_swipe_2_pane

0xe3e3,	// (0x0002c2d9) calenote_swipe_1_pane_g1_ParamLimits

0xe3e3,	// (0x0002c2d9) calenote_swipe_1_pane_g1

0xe3f0,	// (0x0002c2e6) calenote_swipe_1_pane_g2_ParamLimits

0xe3f0,	// (0x0002c2e6) calenote_swipe_1_pane_g2

0x0001,

0x0beb,	// (0x0001eae1) calenote_swipe_1_pane_g_ParamLimits

0x0beb,	// (0x0001eae1) calenote_swipe_1_pane_g

0xe6d5,	// (0x0002c5cb) calenote_swipe_1_pane_t1_ParamLimits

0xe6d5,	// (0x0002c5cb) calenote_swipe_1_pane_t1

0xe3e3,	// (0x0002c2d9) calenote_swipe_2_pane_g1_ParamLimits

0xe3e3,	// (0x0002c2d9) calenote_swipe_2_pane_g1

0xe6f4,	// (0x0002c5ea) calenote_swipe_2_pane_g2_ParamLimits

0xe6f4,	// (0x0002c5ea) calenote_swipe_2_pane_g2

0x0001,

0x0cce,	// (0x0001ebc4) calenote_swipe_2_pane_g_ParamLimits

0x0cce,	// (0x0001ebc4) calenote_swipe_2_pane_g

0xe700,	// (0x0002c5f6) calenote_swipe_2_pane_t1_ParamLimits

0xe700,	// (0x0002c5f6) calenote_swipe_2_pane_t1

0x9cbe,	// (0x00027bb4) main_mup_navstr_pane

0x618e,	// (0x00024084) main_mup3_pane_t7_ParamLimits

0x618e,	// (0x00024084) main_mup3_pane_t7

0x1c3c,	// (0x0001fb32) main_mp4_pane_g6_ParamLimits

0x1c3c,	// (0x0001fb32) main_mp4_pane_g6

0x1f2f,	// (0x0001fe25) main_image3_pane_t4_ParamLimits

0x1f2f,	// (0x0001fe25) main_image3_pane_t4

0x8e67,	// (0x00026d5d) popup_navstr_preview_pane_ParamLimits

0x8e67,	// (0x00026d5d) popup_navstr_preview_pane

0x8e73,	// (0x00026d69) scroll_navstr_pane_ParamLimits

0x8e73,	// (0x00026d69) scroll_navstr_pane

0x9cbe,	// (0x00027bb4) bg_popup_preview_window_pane_cp04

0xe727,	// (0x0002c61d) popup_navstr_preview_pane_t1

0x8e7f,	// (0x00026d75) scroll_navstr_pane_g1_ParamLimits

0x8e7f,	// (0x00026d75) scroll_navstr_pane_g1

0x8e8c,	// (0x00026d82) scroll_navstr_pane_t1_ParamLimits

0x8e8c,	// (0x00026d82) scroll_navstr_pane_t1

0xe6cc,	// (0x0002c5c2) bg_button_pane_cp014

0xe6cc,	// (0x0002c5c2) bg_button_pane_cp030

0x8543,	// (0x00026439) list_double_fisheye_pane_g4_ParamLimits

0x8543,	// (0x00026439) list_double_fisheye_pane_g4

0x854f,	// (0x00026445) list_double_fisheye_pane_g5_ParamLimits

0x854f,	// (0x00026445) list_double_fisheye_pane_g5

0xd4b7,	// (0x0002b3ad) sp_fs_scroll_pane_cp03

0xe4bb,	// (0x0002c3b1) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe4c7,	// (0x0002c3bd) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0c08,	// (0x0001eafe) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe4d3,	// (0x0002c3c9) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe662,	// (0x0002c558) sp_fs_scroll_pane_cp02

0xa50d,	// (0x00028403) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa50d,	// (0x00028403) popup_sp_fs_calendar_preview_list_single_pane

0x9cbe,	// (0x00027bb4) main_cam6_pano_pane

0x15e6,	// (0x0001f4dc) main_mup3_pane_ParamLimits

0x9cbe,	// (0x00027bb4) main_phacti_pane

0x8135,	// (0x0002602b) bg_button_pane_cp11

0x814d,	// (0x00026043) main_mobtv_info_pane_g2_ParamLimits

0x814d,	// (0x00026043) main_mobtv_info_pane_g2

0x0001,

0xfbfd,	// (0x0002daf3) main_mobtv_info_pane_g_ParamLimits

0xfbfd,	// (0x0002daf3) main_mobtv_info_pane_g

0x82ff,	// (0x000261f5) sc_clock_pane_t5_ParamLimits

0x82ff,	// (0x000261f5) sc_clock_pane_t5

0x83b4,	// (0x000262aa) main_radioblah_pane_g1_ParamLimits

0xe326,	// (0x0002c21c) main_radioblah_pane_t3_ParamLimits

0xe326,	// (0x0002c21c) main_radioblah_pane_t3

0xe33e,	// (0x0002c234) main_radioblah_pane_t4_ParamLimits

0xe33e,	// (0x0002c234) main_radioblah_pane_t4

0x83d2,	// (0x000262c8) main_radioblah_text_pane_ParamLimits

0x83d2,	// (0x000262c8) main_radioblah_text_pane

0x83df,	// (0x000262d5) main_radioblah_info_pane_g1_ParamLimits

0x8474,	// (0x0002636a) main_radioblah_info_pane_t4_ParamLimits

0x8474,	// (0x0002636a) main_radioblah_info_pane_t4

0xa3c5,	// (0x000282bb) main_sp_fs_calendar_pane

0x8e9e,	// (0x00026d94) main_phacti_pane_g1

0x8ea6,	// (0x00026d9c) phacti_note_pane_ParamLimits

0x8ea6,	// (0x00026d9c) phacti_note_pane

0xe73e,	// (0x0002c634) phacti_term_pane_ParamLimits

0xe73e,	// (0x0002c634) phacti_term_pane

0xe753,	// (0x0002c649) phacti_note_pane_t1_ParamLimits

0xe753,	// (0x0002c649) phacti_note_pane_t1

0xe76a,	// (0x0002c660) phacti_term_pane_g1

0xe772,	// (0x0002c668) phacti_term_pane_t1_ParamLimits

0xe772,	// (0x0002c668) phacti_term_pane_t1

0xe79c,	// (0x0002c692) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa621,	// (0x00028517) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd00,	// (0x0002dbf6) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7a4,	// (0x0002c69a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7a4,	// (0x0002c69a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7b9,	// (0x0002c6af) aid_popup_sp_fs_bg_corner_pane

0xc8bc,	// (0x0002a7b2) popup_sp_fs_calendar_preview_bg_pane_g1

0x9cbe,	// (0x00027bb4) popup_sp_fs_calendar_preview_bg_pane

0xe7c1,	// (0x0002c6b7) popup_sp_fs_calendar_preview_list_pane

0xc4ab,	// (0x0002a3a1) bg_main_sp_fs_cale_pane_ParamLimits

0xc4ab,	// (0x0002a3a1) bg_main_sp_fs_cale_pane

0xe7c9,	// (0x0002c6bf) listscroll_cale_mrui_pane_ParamLimits

0xe7c9,	// (0x0002c6bf) listscroll_cale_mrui_pane

0xe7de,	// (0x0002c6d4) listscroll_sp_fs_schedule_track_pane

0xe7e7,	// (0x0002c6dd) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7e7,	// (0x0002c6dd) main_sp_fs_ctrlbar_pane_cp01

0xe7fa,	// (0x0002c6f0) main_sp_fs_ribbon_pane

0xe802,	// (0x0002c6f8) popup_sp_fs_cale_preview_window

0x8f09,	// (0x00026dff) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8f09,	// (0x00026dff) list_single_sp_fs_schedule_track_pane

0xd3d5,	// (0x0002b2cb) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd3d5,	// (0x0002b2cb) bg_sp_fs_highlight_list_pane_cp03

0x8f2c,	// (0x00026e22) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8f2c,	// (0x00026e22) list_single_sp_fs_schedule_track_pane_g1

0x8f38,	// (0x00026e2e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8f38,	// (0x00026e2e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd05,	// (0x0002dbfb) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd05,	// (0x0002dbfb) list_single_sp_fs_schedule_track_pane_g

0x8f44,	// (0x00026e3a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8f44,	// (0x00026e3a) list_single_sp_fs_schedule_track_pane_t1

0x8f5c,	// (0x00026e52) sp_fs_schedule_track_pane_ParamLimits

0x8f5c,	// (0x00026e52) sp_fs_schedule_track_pane

0xe814,	// (0x0002c70a) sp_fs_schedule_track_pane_g1

0xe81c,	// (0x0002c712) sp_fs_schedule_track_pane_g2

0xe824,	// (0x0002c71a) sp_fs_schedule_track_pane_g3

0xe82c,	// (0x0002c722) sp_fs_schedule_track_pane_g4

0xe834,	// (0x0002c72a) sp_fs_schedule_track_pane_g5

0x0004,

0x0ce2,	// (0x0001ebd8) sp_fs_schedule_track_pane_g

0xd348,	// (0x0002b23e) bg_sp_fs_schedule_viewer_highlight_g1

0xa820,	// (0x00028716) bg_sp_fs_schedule_viewer_highlight_g2

0xd350,	// (0x0002b246) bg_sp_fs_schedule_viewer_highlight_g3

0xd358,	// (0x0002b24e) bg_sp_fs_schedule_viewer_highlight_g4

0xd5c4,	// (0x0002b4ba) bg_sp_fs_schedule_viewer_highlight_g5

0xd368,	// (0x0002b25e) bg_sp_fs_schedule_viewer_highlight_g6

0xd370,	// (0x0002b266) bg_sp_fs_schedule_viewer_highlight_g7

0xd378,	// (0x0002b26e) bg_sp_fs_schedule_viewer_highlight_g8

0xa800,	// (0x000286f6) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd0a,	// (0x0002dc00) bg_sp_fs_schedule_viewer_highlight_g

0x9cbe,	// (0x00027bb4) bg_main_sp_fs_ribbon_pane

0x8f6c,	// (0x00026e62) main_sp_fs_ribbon_pane_g1

0xe83c,	// (0x0002c732) main_sp_fs_ribbon_pane_t1

0x8f75,	// (0x00026e6b) main_sp_fs_ribbon_pane_t2

0xe84b,	// (0x0002c741) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd1d,	// (0x0002dc13) main_sp_fs_ribbon_pane_t

0xe85a,	// (0x0002c750) main_sp_fs_ribbon_scheduler_pane

0xe862,	// (0x0002c758) bg_main_sp_fs_ribbon_pane_g1

0xe86b,	// (0x0002c761) bg_main_sp_fs_ribbon_pane_g2

0xe874,	// (0x0002c76a) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0d07,	// (0x0001ebfd) bg_main_sp_fs_ribbon_pane_g

0xe87c,	// (0x0002c772) main_sp_fs_ribbon_scheduler_pane_g1

0xe885,	// (0x0002c77b) main_sp_fs_ribbon_scheduler_pane_g2

0xe88e,	// (0x0002c784) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0d0e,	// (0x0001ec04) main_sp_fs_ribbon_scheduler_pane_g

0xe897,	// (0x0002c78d) list_cale_mrui_pane

0x8f84,	// (0x00026e7a) sp_fs_scroll_pane_cp07_ParamLimits

0x8f84,	// (0x00026e7a) sp_fs_scroll_pane_cp07

0x8fa0,	// (0x00026e96) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8fa0,	// (0x00026e96) bg_sp_fs_schedule_viewer_highlight

0xe8a4,	// (0x0002c79a) list_single_sp_fs_schedule_track_pane_cp01

0xe8ac,	// (0x0002c7a2) list_sp_fs_schedule_track_pane

0xe8b4,	// (0x0002c7aa) sp_fs_scroll_pane_cp06_ParamLimits

0xe8b4,	// (0x0002c7aa) sp_fs_scroll_pane_cp06

0xc8bc,	// (0x0002a7b2) bgmain_sp_fs_calendar_pane_g1

0x8fad,	// (0x00026ea3) list_single_cale_mrui_pane_ParamLimits

0x8fad,	// (0x00026ea3) list_single_cale_mrui_pane

0xe8c6,	// (0x0002c7bc) list_single_cale_mrui_row_pane_ParamLimits

0xe8c6,	// (0x0002c7bc) list_single_cale_mrui_row_pane

0xe8d3,	// (0x0002c7c9) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8d3,	// (0x0002c7c9) list_single_cale_mrui_row_pane_g1

0xe918,	// (0x0002c80e) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe918,	// (0x0002c80e) list_single_cale_mrui_row_pane_t1

0x8fda,	// (0x00026ed0) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8fda,	// (0x00026ed0) list_single_cale_mrui_row_pane_t2

0xe92a,	// (0x0002c820) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe92a,	// (0x0002c820) list_single_cale_mrui_row_pane_t3

0xe959,	// (0x0002c84f) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe959,	// (0x0002c84f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd24,	// (0x0002dc1a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd24,	// (0x0002dc1a) list_single_cale_mrui_row_pane_t

0x9040,	// (0x00026f36) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9040,	// (0x00026f36) list_single_cmail_header_editor_pane_bg_cp01

0x9060,	// (0x00026f56) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9060,	// (0x00026f56) list_single_cmail_header_editor_pane_bg_cp02

0x907c,	// (0x00026f72) main_radioblah_text_pane_t1_ParamLimits

0x907c,	// (0x00026f72) main_radioblah_text_pane_t1

0xe988,	// (0x0002c87e) cam6_indi_pane_cp01

0xe990,	// (0x0002c886) cam6_mode_pane_cp01

0xe998,	// (0x0002c88e) cam6_pano_pane

0xe9a1,	// (0x0002c897) cam6_zoom_pane_cp01

0xe9a9,	// (0x0002c89f) cam6_pano_image_pane

0xe9b4,	// (0x0002c8aa) cam6_pano_pane_g1

0xe094,	// (0x0002bf8a) cam6_pano_pane_g2

0xe9bd,	// (0x0002c8b3) cam6_pano_pane_g3

0xe9c6,	// (0x0002c8bc) cam6_pano_pane_g4

0xce8b,	// (0x0002ad81) cam6_pano_pane_g5

0xe9cf,	// (0x0002c8c5) cam6_pano_pane_g6

0xe9d9,	// (0x0002c8cf) cam6_pano_pane_g7

0xe9e1,	// (0x0002c8d7) cam6_pano_pane_g8

0xe9ea,	// (0x0002c8e0) cam6_pano_pane_g9

0x0008,

0xfd2d,	// (0x0002dc23) cam6_pano_pane_g

0x9cbe,	// (0x00027bb4) main_browser_tag_pane

0xe71f,	// (0x0002c615) grid_navstr_albumart_pane

0xe9f5,	// (0x0002c8eb) cell_navstr_albumart_pane_ParamLimits

0xe9f5,	// (0x0002c8eb) cell_navstr_albumart_pane

0xea15,	// (0x0002c90b) cell_navstr_albumart_pane_g1

0xc2bc,	// (0x0002a1b2) cell_navstr_albumart_pane_g2

0xc2cc,	// (0x0002a1c2) cell_navstr_albumart_pane_g3

0xc2c4,	// (0x0002a1ba) cell_navstr_albumart_pane_g4

0x0003,

0xfd40,	// (0x0002dc36) cell_navstr_albumart_pane_g

0x9097,	// (0x00026f8d) bt_list_pane_ParamLimits

0x9097,	// (0x00026f8d) bt_list_pane

0x90b7,	// (0x00026fad) bt_list_pane_t1

0x90c6,	// (0x00026fbc) bt_list_pane_t2

0x0001,

0xfd49,	// (0x0002dc3f) bt_list_pane_t

0x9cbe,	// (0x00027bb4) main_cale_prevew_pane

0x90d5,	// (0x00026fcb) popup_cale_preview_window_ParamLimits

0x90d5,	// (0x00026fcb) popup_cale_preview_window

0xa3c5,	// (0x000282bb) bg_popup_preview_window_pane_cp05_ParamLimits

0xa3c5,	// (0x000282bb) bg_popup_preview_window_pane_cp05

0xea1d,	// (0x0002c913) list_cale_preview_pane_ParamLimits

0xea1d,	// (0x0002c913) list_cale_preview_pane

0x90ee,	// (0x00026fe4) list_double_cale_preview_pane_ParamLimits

0x90ee,	// (0x00026fe4) list_double_cale_preview_pane

0x9100,	// (0x00026ff6) list_single_cale_preview_pane_ParamLimits

0x9100,	// (0x00026ff6) list_single_cale_preview_pane

0x9116,	// (0x0002700c) list_single_cale_preview_pane_g1

0x911e,	// (0x00027014) list_single_cale_preview_pane_t1_ParamLimits

0x911e,	// (0x00027014) list_single_cale_preview_pane_t1

0x9133,	// (0x00027029) list_double_cale_preview_pane_g1

0x913b,	// (0x00027031) list_double_cale_preview_pane_t1_ParamLimits

0x913b,	// (0x00027031) list_double_cale_preview_pane_t1

0x9150,	// (0x00027046) list_double_cale_preview_pane_t2_ParamLimits

0x9150,	// (0x00027046) list_double_cale_preview_pane_t2

0x0001,

0xfd4e,	// (0x0002dc44) list_double_cale_preview_pane_t_ParamLimits

0xfd4e,	// (0x0002dc44) list_double_cale_preview_pane_t

0x9cbe,	// (0x00027bb4) main_ezdial_pane

0xa3c5,	// (0x000282bb) main_sp_fs_email_pane_ParamLimits

0x86d3,	// (0x000265c9) cmail_ddmenu_btn01_pane_ParamLimits

0x86d3,	// (0x000265c9) cmail_ddmenu_btn01_pane

0x86f0,	// (0x000265e6) cmail_ddmenu_btn02_pane_ParamLimits

0x86f0,	// (0x000265e6) cmail_ddmenu_btn02_pane

0x870e,	// (0x00026604) cmail_ddmenu_btn03_pane_ParamLimits

0x870e,	// (0x00026604) cmail_ddmenu_btn03_pane

0x873c,	// (0x00026632) main_sp_fs_ctrlbar_pane_ParamLimits

0x8752,	// (0x00026648) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d2e,	// (0x00026c24) list_cmail_body_pane_ParamLimits

0x8db0,	// (0x00026ca6) bg_button_pane_cp12

0xe684,	// (0x0002c57a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe684,	// (0x0002c57a) list_single_cmail_header_detail_pane_g3

0xe691,	// (0x0002c587) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe691,	// (0x0002c587) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcfb,	// (0x0002dbf1) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcfb,	// (0x0002dbf1) list_single_cmail_header_detail_pane_t

0xe787,	// (0x0002c67d) phacti_term_pane_t2_ParamLimits

0xe787,	// (0x0002c67d) phacti_term_pane_t2

0x0001,

0x0cd3,	// (0x0001ebc9) phacti_term_pane_t_ParamLimits

0x0cd3,	// (0x0001ebc9) phacti_term_pane_t

0xea29,	// (0x0002c91f) aid_size_list_single_double

0x9168,	// (0x0002705e) popup_ezdial_listscroll_window

0x9189,	// (0x0002707f) popup_number_entry_window_cp01

0xb03b,	// (0x00028f31) bg_popup_call_pane_cp09

0xea35,	// (0x0002c92b) ezdial_list_pane

0xea3d,	// (0x0002c933) scroll_pane_cp23

0xc6a1,	// (0x0002a597) bg_button_pane_cp028_ParamLimits

0xc6a1,	// (0x0002a597) bg_button_pane_cp028

0x9197,	// (0x0002708d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9197,	// (0x0002708d) cmail_ddmenu_btn01_pane_g1

0x91a7,	// (0x0002709d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x91a7,	// (0x0002709d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd53,	// (0x0002dc49) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd53,	// (0x0002dc49) cmail_ddmenu_btn01_pane_g

0xea45,	// (0x0002c93b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea45,	// (0x0002c93b) cmail_ddmenu_btn01_pane_t1

0xc4ab,	// (0x0002a3a1) bg_button_pane_cp029_ParamLimits

0xc4ab,	// (0x0002a3a1) bg_button_pane_cp029

0x91b3,	// (0x000270a9) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x91b3,	// (0x000270a9) cmail_ddmenu_btn02_pane_g1

0x91cb,	// (0x000270c1) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x91cb,	// (0x000270c1) cmail_ddmenu_btn02_pane_t1

0xd3d5,	// (0x0002b2cb) bg_button_pane_cp031_ParamLimits

0xd3d5,	// (0x0002b2cb) bg_button_pane_cp031

0x91b3,	// (0x000270a9) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x91b3,	// (0x000270a9) cmail_ddmenu_btn03_pane_g1

0x91cb,	// (0x000270c1) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x91cb,	// (0x000270c1) cmail_ddmenu_btn03_pane_t1

0x69f5,	// (0x000248eb) cell_dialer2_keypad_pane_t1_ParamLimits

0x6a0f,	// (0x00024905) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6a0f,	// (0x00024905) cell_dialer2_keypad_pane_t1_copy1

0x7fba,	// (0x00025eb0) ncimui_group_button_pane

0xa3c5,	// (0x000282bb) main_sp_fs_calendar_pane_ParamLimits

0x8d4e,	// (0x00026c44) list_single_cmail_header_caption_pane_ParamLimits

0xd918,	// (0x0002b80e) aid_recal_txt_sm_pane

0x9cbe,	// (0x00027bb4) mian_recal_day_pane

0xe802,	// (0x0002c6f8) popup_sp_fs_cale_preview_window_ParamLimits

0xea5b,	// (0x0002c951) list_recal_day_pane

0xeaaf,	// (0x0002c9a5) list_single_recal_day_pane_ParamLimits

0xeaaf,	// (0x0002c9a5) list_single_recal_day_pane

0xeac1,	// (0x0002c9b7) list_single_recal_day_pane_g1_ParamLimits

0xeac1,	// (0x0002c9b7) list_single_recal_day_pane_g1

0xeacd,	// (0x0002c9c3) list_single_recal_day_pane_g2_ParamLimits

0xeacd,	// (0x0002c9c3) list_single_recal_day_pane_g2

0xeadd,	// (0x0002c9d3) list_single_recal_day_pane_g3_ParamLimits

0xeadd,	// (0x0002c9d3) list_single_recal_day_pane_g3

0x91ef,	// (0x000270e5) list_single_recal_day_pane_g4_ParamLimits

0x91ef,	// (0x000270e5) list_single_recal_day_pane_g4

0xeae9,	// (0x0002c9df) list_single_recal_day_pane_g5_ParamLimits

0xeae9,	// (0x0002c9df) list_single_recal_day_pane_g5

0xeaf9,	// (0x0002c9ef) list_single_recal_day_pane_g6_ParamLimits

0xeaf9,	// (0x0002c9ef) list_single_recal_day_pane_g6

0x0004,

0xfd62,	// (0x0002dc58) list_single_recal_day_pane_g_ParamLimits

0xfd62,	// (0x0002dc58) list_single_recal_day_pane_g

0xeb0d,	// (0x0002ca03) list_single_recal_day_pane_t1

0xeb1f,	// (0x0002ca15) list_single_recal_day_pane_t2

0x0001,

0x0d65,	// (0x0001ec5b) list_single_recal_day_pane_t

0x920f,	// (0x00027105) ncimui_query_button_pane_ParamLimits

0x920f,	// (0x00027105) ncimui_query_button_pane

0x921f,	// (0x00027115) ncimui_query_button_pane_t1_ParamLimits

0x921f,	// (0x00027115) ncimui_query_button_pane_t1

0xeb31,	// (0x0002ca27) ncimui_query_button_pane_t2_ParamLimits

0xeb31,	// (0x0002ca27) ncimui_query_button_pane_t2

0x0001,

0xfd6d,	// (0x0002dc63) ncimui_query_button_pane_t_ParamLimits

0xfd6d,	// (0x0002dc63) ncimui_query_button_pane_t

0x9232,	// (0x00027128) query_button_pane_ParamLimits

0x9232,	// (0x00027128) query_button_pane

0x9cbe,	// (0x00027bb4) bg_button_pane_cp0028

0xeb44,	// (0x0002ca3a) query_button_pane_t1

0x1602,	// (0x0001f4f8) main_tport_pane_ParamLimits

0x8c38,	// (0x00026b2e) bg_popup_window_pane_cp01_ParamLimits

0x8c38,	// (0x00026b2e) bg_popup_window_pane_cp01

0x8c46,	// (0x00026b3c) heading_pane_cp08_ParamLimits

0x8c46,	// (0x00026b3c) heading_pane_cp08

0x8c54,	// (0x00026b4a) heading_pane_cp07_ParamLimits

0x8c54,	// (0x00026b4a) heading_pane_cp07

0x8cc3,	// (0x00026bb9) cell_tport_appsw_pane_g2

0x0002,

0xfce8,	// (0x0002dbde) cell_tport_appsw_pane_g

0xb19c,	// (0x00029092) input_candi_list_open_g1

0xa9e3,	// (0x000288d9) list_cale_time_pane_g6_ParamLimits

0xa9e3,	// (0x000288d9) list_cale_time_pane_g6

0x5bf3,	// (0x00023ae9) aid_size_touch_calib_1_ParamLimits

0x5bf3,	// (0x00023ae9) aid_size_touch_calib_1

0x5bff,	// (0x00023af5) aid_size_touch_calib_2_ParamLimits

0x5bff,	// (0x00023af5) aid_size_touch_calib_2

0x5c0d,	// (0x00023b03) aid_size_touch_calib_3_ParamLimits

0x5c0d,	// (0x00023b03) aid_size_touch_calib_3

0x5c1d,	// (0x00023b13) aid_size_touch_calib_4_ParamLimits

0x5c1d,	// (0x00023b13) aid_size_touch_calib_4

0x5c2b,	// (0x00023b21) main_touch_calib_button_group_pane_ParamLimits

0x5c2b,	// (0x00023b21) main_touch_calib_button_group_pane

0x5c39,	// (0x00023b2f) main_touch_calib_pane_g1_ParamLimits

0x5c45,	// (0x00023b3b) main_touch_calib_pane_g2_ParamLimits

0x5c51,	// (0x00023b47) main_touch_calib_pane_g3_ParamLimits

0x5c5d,	// (0x00023b53) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x0002d64c) main_touch_calib_pane_g_ParamLimits

0x5c69,	// (0x00023b5f) main_touch_calib_pane_t1_ParamLimits

0x5c82,	// (0x00023b78) main_touch_calib_pane_t2_ParamLimits

0x5c9b,	// (0x00023b91) main_touch_calib_pane_t3_ParamLimits

0x5cb1,	// (0x00023ba7) main_touch_calib_pane_t4_ParamLimits

0x5cc7,	// (0x00023bbd) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x0002d655) main_touch_calib_pane_t_ParamLimits

0xcc4b,	// (0x0002ab41) list_single_fp_cale_pane_g3_ParamLimits

0xcc4b,	// (0x0002ab41) list_single_fp_cale_pane_g3

0x15e6,	// (0x0001f4dc) bg_button_pane_cp012_ParamLimits

0x15e6,	// (0x0001f4dc) bg_vkb2_func_pane_cp03_ParamLimits

0x2542,	// (0x00020438) cell_vitu2_function_top_pane_g1_ParamLimits

0x15e6,	// (0x0001f4dc) bg_vkb2_func_pane_cp04_ParamLimits

0x7f42,	// (0x00025e38) main_ncimui_button_group_pane_ParamLimits

0x7f42,	// (0x00025e38) main_ncimui_button_group_pane

0x7fa8,	// (0x00025e9e) main_ncimui_pane_t3_ParamLimits

0x7fa8,	// (0x00025e9e) main_ncimui_pane_t3

0xe735,	// (0x0002c62b) phacti_button_group_pane

0xea29,	// (0x0002c91f) aid_size_list_single_double_ParamLimits

0x9168,	// (0x0002705e) popup_ezdial_listscroll_window_ParamLimits

0x9189,	// (0x0002707f) popup_number_entry_window_cp01_ParamLimits

0x923f,	// (0x00027135) phacti_button_pane_ParamLimits

0x923f,	// (0x00027135) phacti_button_pane

0x9cbe,	// (0x00027bb4) bg_button_pane_cp14

0xeb52,	// (0x0002ca48) phacti_button_pane_t1

0x9250,	// (0x00027146) main_touch_calib_button_pane_ParamLimits

0x9250,	// (0x00027146) main_touch_calib_button_pane

0xa409,	// (0x000282ff) bg_button_pane_cp18_ParamLimits

0xa409,	// (0x000282ff) bg_button_pane_cp18

0xeb60,	// (0x0002ca56) main_touch_calib_button_pane_t1_ParamLimits

0xeb60,	// (0x0002ca56) main_touch_calib_button_pane_t1

0xeb76,	// (0x0002ca6c) main_touch_calib_button_pane_t2_ParamLimits

0xeb76,	// (0x0002ca6c) main_touch_calib_button_pane_t2

0x0001,

0x0d6f,	// (0x0001ec65) main_touch_calib_button_pane_t_ParamLimits

0x0d6f,	// (0x0001ec65) main_touch_calib_button_pane_t

0x9cbe,	// (0x00027bb4) cell_ncimui_button_pane

0x9cbe,	// (0x00027bb4) bg_button_pane_cp032

0xeb94,	// (0x0002ca8a) cell_ncimui_button_pane_t1

0x1e42,	// (0x0001fd38) image3_infobar_pane_ParamLimits

0x1e42,	// (0x0001fd38) image3_infobar_pane

0x8321,	// (0x00026217) fs_bigclock_status_pane_ParamLimits

0x8321,	// (0x00026217) fs_bigclock_status_pane

0x832e,	// (0x00026224) main_fs_bigclock_clock_pane_ParamLimits

0x832e,	// (0x00026224) main_fs_bigclock_clock_pane

0x8352,	// (0x00026248) main_fs_bigclock_indi_pane_ParamLimits

0x8352,	// (0x00026248) main_fs_bigclock_indi_pane

0x8382,	// (0x00026278) main_fs_bigclock_swipe_pane_ParamLimits

0x8382,	// (0x00026278) main_fs_bigclock_swipe_pane

0x9cbe,	// (0x00027bb4) main_fs_clock_dumped_data

0xe1a1,	// (0x0002c097) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe1a1,	// (0x0002c097) list_single_fs_bigclock_indicator_pane_g1

0xe1bb,	// (0x0002c0b1) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe1bb,	// (0x0002c0b1) list_single_fs_bigclock_indicator_pane_g2

0xe1d5,	// (0x0002c0cb) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe1d5,	// (0x0002c0cb) list_single_fs_bigclock_indicator_pane_g3

0xe1ef,	// (0x0002c0e5) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe1ef,	// (0x0002c0e5) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0b9c,	// (0x0001ea92) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0b9c,	// (0x0001ea92) list_single_fs_bigclock_indicator_pane_g

0xe218,	// (0x0002c10e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe218,	// (0x0002c10e) list_single_fs_bigclock_indicator_pane_t1

0xe240,	// (0x0002c136) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe240,	// (0x0002c136) list_single_fs_bigclock_indicator_pane_t2

0xe268,	// (0x0002c15e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe268,	// (0x0002c15e) list_single_fs_bigclock_indicator_pane_t3

0xe290,	// (0x0002c186) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe290,	// (0x0002c186) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0ba7,	// (0x0001ea9d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0ba7,	// (0x0001ea9d) list_single_fs_bigclock_indicator_pane_t

0xeba2,	// (0x0002ca98) image3_infobar_fav_pane_ParamLimits

0xeba2,	// (0x0002ca98) image3_infobar_fav_pane

0xebb2,	// (0x0002caa8) image3_infobar_loc_pane_ParamLimits

0xebb2,	// (0x0002caa8) image3_infobar_loc_pane

0xebc6,	// (0x0002cabc) image3_infobar_time_pane_ParamLimits

0xebc6,	// (0x0002cabc) image3_infobar_time_pane

0xc8bc,	// (0x0002a7b2) image3_infobar_time_pane_g1

0xebd6,	// (0x0002cacc) image3_infobar_time_pane_t1

0xc8bc,	// (0x0002a7b2) image3_infobar_loc_pane_g1

0xebe4,	// (0x0002cada) image3_infobar_loc_pane_g2

0x0001,

0xfd72,	// (0x0002dc68) image3_infobar_loc_pane_g

0xebec,	// (0x0002cae2) image3_infobar_loc_pane_t1

0xc8bc,	// (0x0002a7b2) image3_infobar_fav_pane_g1

0xebfa,	// (0x0002caf0) image3_infobar_fav_pane_g2

0x0001,

0xfd77,	// (0x0002dc6d) image3_infobar_fav_pane_g

0xec02,	// (0x0002caf8) fs_bigclock_status_battery_pane

0xec0b,	// (0x0002cb01) fs_bigclock_status_signal_pane

0xec14,	// (0x0002cb0a) fs_bigclock_status_title_pane

0xec1d,	// (0x0002cb13) fs_bigclock_status_signal_pane_g1

0xec26,	// (0x0002cb1c) fs_bigclock_status_signal_pane_g2

0x0001,

0x0d7e,	// (0x0001ec74) fs_bigclock_status_signal_pane_g

0xec2e,	// (0x0002cb24) fs_bigclock_status_battery_pane_g1

0xec37,	// (0x0002cb2d) fs_bigclock_status_battery_pane_g2

0x0001,

0x0d83,	// (0x0001ec79) fs_bigclock_status_battery_pane_g

0xec3f,	// (0x0002cb35) fs_bigclock_status_title_pane_t1

0xc8bc,	// (0x0002a7b2) main_fs_bigclock_clock_pane_g1

0x9260,	// (0x00027156) main_fs_bigclock_clock_pane_g2

0x9260,	// (0x00027156) main_fs_bigclock_clock_pane_g3

0x9260,	// (0x00027156) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd7c,	// (0x0002dc72) main_fs_bigclock_clock_pane_g

0x9268,	// (0x0002715e) main_fs_bigclock_clock_pane_t1

0x9276,	// (0x0002716c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd85,	// (0x0002dc7b) main_fs_bigclock_clock_pane_t

0xec4d,	// (0x0002cb43) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec4d,	// (0x0002cb43) list_single_fs_bigclock_indicator_pane

0x9285,	// (0x0002717b) list_single_fs_bigclock_pane_ParamLimits

0x9285,	// (0x0002717b) list_single_fs_bigclock_pane

0xec67,	// (0x0002cb5d) main_fs_bigclock_indicator_pane_t1

0xec76,	// (0x0002cb6c) list_single_fs_bigclock_pane_g1

0xec7e,	// (0x0002cb74) list_single_fs_bigclock_pane_t1

0xc8bc,	// (0x0002a7b2) main_fs_bigclock_swipe_pane_g1

0xecc1,	// (0x0002cbb7) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd91,	// (0x0002dc87) main_fs_bigclock_swipe_pane_g

0xecc9,	// (0x0002cbbf) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecc9,	// (0x0002cbbf) main_fs_bigclock_swipe_pane_t1

0x46fb,	// (0x000225f1) call_type_pane_ParamLimits

0x9cbe,	// (0x00027bb4) main_btmg_pane

0xe8ff,	// (0x0002c7f5) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8ff,	// (0x0002c7f5) list_single_cale_mrui_row_pane_g2

0x0002,

0x0d15,	// (0x0001ec0b) list_single_cale_mrui_row_pane_g_ParamLimits

0x0d15,	// (0x0001ec0b) list_single_cale_mrui_row_pane_g

0xea96,	// (0x0002c98c) list_recal_vselct_arw_lo_pane

0xea9e,	// (0x0002c994) list_recal_vselct_arw_up_pane

0xeaa6,	// (0x0002c99c) list_recal_vselct_pane

0x92e6,	// (0x000271dc) btmg_button_pane

0x92f2,	// (0x000271e8) main_btmg_pane_g1

0x9cbe,	// (0x00027bb4) bg_button_pane_cp044

0xece6,	// (0x0002cbdc) btmg_button_pane_t1

0xc497,	// (0x0002a38d) aid_listscroll_gen

0xa3c5,	// (0x000282bb) main_cntbar_detail_pane

0xe65a,	// (0x0002c550) list_cmail_folder_pane

0xd4b7,	// (0x0002b3ad) sp_fs_scroll_pane_cp03_ParamLimits

0x8d4e,	// (0x00026c44) list_single_fs_dyc_pane_cp01_ParamLimits

0x8d4e,	// (0x00026c44) list_single_fs_dyc_pane_cp01

0xecf4,	// (0x0002cbea) aid_size_cmail_indent

0xecfd,	// (0x0002cbf3) list_single_dyc_row_pane_cp01

0x931a,	// (0x00027210) cntbar_detail_list_pane_ParamLimits

0x931a,	// (0x00027210) cntbar_detail_list_pane

0x9354,	// (0x0002724a) main_cntbar_detail_cont_pane_ParamLimits

0x9354,	// (0x0002724a) main_cntbar_detail_cont_pane

0x4612,	// (0x00022508) scroll_pane_cp032_ParamLimits

0x4612,	// (0x00022508) scroll_pane_cp032

0x9360,	// (0x00027256) cntbar_detail_list_event_pane_ParamLimits

0x9360,	// (0x00027256) cntbar_detail_list_event_pane

0x9326,	// (0x0002721c) cntbar_detail_list_shct_pane

0xa86e,	// (0x00028764) aid_list_gen

0xed06,	// (0x0002cbfc) aid_scroll

0xed0f,	// (0x0002cc05) aid_size_touch_scroll_bar

0xe390,	// (0x0002c286) aid_list_double

0x9374,	// (0x0002726a) aid_list_single

0x775d,	// (0x00025653) aid_list_single_lg

0x937d,	// (0x00027273) aid_list_z_g_a_sm

0x9385,	// (0x0002727b) aid_list_z_g_d

0x938d,	// (0x00027283) aid_txt_z_prm

0x939b,	// (0x00027291) aid_txt_z_prm_cp01

0x93a9,	// (0x0002729f) aid_txt_z_sec

0x93b7,	// (0x000272ad) main_cntbar_detail_cont_pane_g1_ParamLimits

0x93b7,	// (0x000272ad) main_cntbar_detail_cont_pane_g1

0x93c4,	// (0x000272ba) main_cntbar_detail_cont_pane_g2_ParamLimits

0x93c4,	// (0x000272ba) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd96,	// (0x0002dc8c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd96,	// (0x0002dc8c) main_cntbar_detail_cont_pane_g

0xed18,	// (0x0002cc0e) main_cntbar_detail_cont_pane_t1

0xed26,	// (0x0002cc1c) main_cntbar_detail_cont_pane_t2

0xed34,	// (0x0002cc2a) main_cntbar_detail_cont_pane_t3

0x0002,

0x0dac,	// (0x0001eca2) main_cntbar_detail_cont_pane_t

0x93d0,	// (0x000272c6) cell_cntbar_detail_list_shct_pane_ParamLimits

0x93d0,	// (0x000272c6) cell_cntbar_detail_list_shct_pane

0xed42,	// (0x0002cc38) cntbar_detail_list_shct_pane_g1

0xed4b,	// (0x0002cc41) cntbar_detail_list_shct_pane_g2

0x0001,

0x0db3,	// (0x0001eca9) cntbar_detail_list_shct_pane_g

0x93e4,	// (0x000272da) cntbar_detail_list_event_pane_g1_ParamLimits

0x93e4,	// (0x000272da) cntbar_detail_list_event_pane_g1

0x93f0,	// (0x000272e6) cntbar_detail_list_event_pane_g2_ParamLimits

0x93f0,	// (0x000272e6) cntbar_detail_list_event_pane_g2

0x0005,

0xfd9b,	// (0x0002dc91) cntbar_detail_list_event_pane_g_ParamLimits

0xfd9b,	// (0x0002dc91) cntbar_detail_list_event_pane_g

0x945c,	// (0x00027352) cntbar_detail_list_event_pane_t1_ParamLimits

0x945c,	// (0x00027352) cntbar_detail_list_event_pane_t1

0x9471,	// (0x00027367) cntbar_detail_list_event_pane_t2_ParamLimits

0x9471,	// (0x00027367) cntbar_detail_list_event_pane_t2

0x0002,

0xfda8,	// (0x0002dc9e) cntbar_detail_list_event_pane_t_ParamLimits

0xfda8,	// (0x0002dc9e) cntbar_detail_list_event_pane_t

0xc8bc,	// (0x0002a7b2) cell_cntbar_detail_list_shct_pane_g1

0xafd9,	// (0x00028ecf) navi_pane_mv_g3

0xa3c5,	// (0x000282bb) main_cntbar_detail_pane_ParamLimits

0x9cbe,	// (0x00027bb4) main_notif_wgt_pane

0x1b83,	// (0x0001fa79) aid_tch_main_mp4_pane_g4

0x1db8,	// (0x0001fcae) popup_slider_window_cp02

0xea8c,	// (0x0002c982) list_recal_day_event_pane

0x92fa,	// (0x000271f0) cntbar_detail_btn_pane_ParamLimits

0x92fa,	// (0x000271f0) cntbar_detail_btn_pane

0x930a,	// (0x00027200) cntbar_detail_btn_pane_cp01_ParamLimits

0x930a,	// (0x00027200) cntbar_detail_btn_pane_cp01

0x9326,	// (0x0002721c) cntbar_detail_list_shct_pane_ParamLimits

0x9332,	// (0x00027228) cntbar_detail_pane_g1_ParamLimits

0x9332,	// (0x00027228) cntbar_detail_pane_g1

0x933e,	// (0x00027234) cntbar_detail_pane_t1_ParamLimits

0x933e,	// (0x00027234) cntbar_detail_pane_t1

0x93fc,	// (0x000272f2) cntbar_detail_list_event_pane_g3_ParamLimits

0x93fc,	// (0x000272f2) cntbar_detail_list_event_pane_g3

0x9414,	// (0x0002730a) cntbar_detail_list_event_pane_g4_ParamLimits

0x9414,	// (0x0002730a) cntbar_detail_list_event_pane_g4

0x942c,	// (0x00027322) cntbar_detail_list_event_pane_g5_ParamLimits

0x942c,	// (0x00027322) cntbar_detail_list_event_pane_g5

0x9444,	// (0x0002733a) cntbar_detail_list_event_pane_g6_ParamLimits

0x9444,	// (0x0002733a) cntbar_detail_list_event_pane_g6

0x9486,	// (0x0002737c) cntbar_detail_list_event_pane_t3_ParamLimits

0x9486,	// (0x0002737c) cntbar_detail_list_event_pane_t3

0x9498,	// (0x0002738e) popup_notif_wgt_window_ParamLimits

0x9498,	// (0x0002738e) popup_notif_wgt_window

0x94a8,	// (0x0002739e) popup_submenu_window_cp01_ParamLimits

0x94a8,	// (0x0002739e) popup_submenu_window_cp01

0xb03b,	// (0x00028f31) bg_popup_window_pane_cp10

0xed54,	// (0x0002cc4a) listscroll_notif_wgt_pane

0xed66,	// (0x0002cc5c) list_notif_wgt_window

0xed6f,	// (0x0002cc65) scroll_pane_cp033

0x94ba,	// (0x000273b0) list_notif_wgt_row_pane_ParamLimits

0x94ba,	// (0x000273b0) list_notif_wgt_row_pane

0xed78,	// (0x0002cc6e) aid_size_list_notif_wgt_del

0xed85,	// (0x0002cc7b) list_notif_wgt_row_pane_g1

0xed91,	// (0x0002cc87) list_notif_wgt_row_pane_g2

0xed9d,	// (0x0002cc93) list_notif_wgt_row_pane_g3

0x0002,

0x0dcc,	// (0x0001ecc2) list_notif_wgt_row_pane_g

0xedaa,	// (0x0002cca0) list_notif_wgt_row_pane_t1

0xedbf,	// (0x0002ccb5) list_notif_wgt_row_pane_t2

0xedd1,	// (0x0002ccc7) list_notif_wgt_row_pane_t3

0x0002,

0x0dd3,	// (0x0001ecc9) list_notif_wgt_row_pane_t

0xd5de,	// (0x0002b4d4) list_recal_day_event_pane_g1

0xede3,	// (0x0002ccd9) list_recal_day_event_pane_t1

0x9cbe,	// (0x00027bb4) bg_button_pane_cp045

0x94cc,	// (0x000273c2) cntbar_detail_btn_pane_t1

0xc4ab,	// (0x0002a3a1) main_callh_pane_ParamLimits

0xc4ab,	// (0x0002a3a1) main_callh_pane

0x9cbe,	// (0x00027bb4) main_coverflow0_pane

0x9cbe,	// (0x00027bb4) main_wgtman_pane

0x839a,	// (0x00026290) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x839a,	// (0x00026290) main_fs_bigclock_unlock_btn_pane

0x8cbb,	// (0x00026bb1) bg_button_pane_cp16

0x8ccb,	// (0x00026bc1) cell_tport_appsw_pane_g3

0x94da,	// (0x000273d0) cf0_flow_pane_ParamLimits

0x94da,	// (0x000273d0) cf0_flow_pane

0xedf2,	// (0x0002cce8) listscroll_cf0_pane

0xedfd,	// (0x0002ccf3) main_cf0_pane_g1

0x94e9,	// (0x000273df) main_cf0_pane_t1_ParamLimits

0x94e9,	// (0x000273df) main_cf0_pane_t1

0x94fd,	// (0x000273f3) main_cf0_pane_t2_ParamLimits

0x94fd,	// (0x000273f3) main_cf0_pane_t2

0x0001,

0xfdaf,	// (0x0002dca5) main_cf0_pane_t_ParamLimits

0xfdaf,	// (0x0002dca5) main_cf0_pane_t

0xee0f,	// (0x0002cd05) scroll_pane_cp11

0x9511,	// (0x00027407) cf0_flow_pane_g1

0x9519,	// (0x0002740f) cf0_flow_pane_g2

0x0001,

0xfdb4,	// (0x0002dcaa) cf0_flow_pane_g

0x9521,	// (0x00027417) cf0_flow_pane_t1

0x9cbe,	// (0x00027bb4) main_call6_pane

0x9cbe,	// (0x00027bb4) main_calllock_pane

0x952f,	// (0x00027425) call6_btn_grp_pane_ParamLimits

0x952f,	// (0x00027425) call6_btn_grp_pane

0x953e,	// (0x00027434) call6_pane_g1_ParamLimits

0x953e,	// (0x00027434) call6_pane_g1

0x954d,	// (0x00027443) popup_call6_1st_window_ParamLimits

0x954d,	// (0x00027443) popup_call6_1st_window

0x955b,	// (0x00027451) popup_call6_2nd_window_ParamLimits

0x955b,	// (0x00027451) popup_call6_2nd_window

0x9569,	// (0x0002745f) cell_call6_btn_pane_ParamLimits

0x9569,	// (0x0002745f) cell_call6_btn_pane

0xb03b,	// (0x00028f31) bg_popup_call2_in_pane_cp03

0xee1a,	// (0x0002cd10) popup_call6_1st_window_g1

0xee22,	// (0x0002cd18) popup_call6_1st_window_g2

0xee2a,	// (0x0002cd20) popup_call6_1st_window_g3

0x0002,

0x0de9,	// (0x0001ecdf) popup_call6_1st_window_g

0xee32,	// (0x0002cd28) popup_call6_1st_window_t1

0xee41,	// (0x0002cd37) popup_call6_1st_window_t2

0xee51,	// (0x0002cd47) popup_call6_1st_window_t3

0x0002,

0x0df0,	// (0x0001ece6) popup_call6_1st_window_t

0xb03b,	// (0x00028f31) bg_popup_call2_in_pane_cp04

0xee1a,	// (0x0002cd10) popup_call6_2nd_window_g1

0xee22,	// (0x0002cd18) popup_call6_2nd_window_g2

0xee2a,	// (0x0002cd20) popup_call6_2nd_window_g3

0x0002,

0x0de9,	// (0x0001ecdf) popup_call6_2nd_window_g

0xee32,	// (0x0002cd28) popup_call6_2nd_window_t1

0x9cbe,	// (0x00027bb4) bg_button_pane_cp15

0xee61,	// (0x0002cd57) cell_call6_btn_pane_g1

0xee6a,	// (0x0002cd60) cell_call6_btn_pane_t1

0x9578,	// (0x0002746e) listscroll_wgtman_pane_ParamLimits

0x9578,	// (0x0002746e) listscroll_wgtman_pane

0x9594,	// (0x0002748a) wgtman_btn_pane_ParamLimits

0x9594,	// (0x0002748a) wgtman_btn_pane

0xade0,	// (0x00028cd6) aid_scroll_copy1

0xee79,	// (0x0002cd6f) list_wgtman_pane

0x95c9,	// (0x000274bf) wgtman_btn_pane_g1_ParamLimits

0x95c9,	// (0x000274bf) wgtman_btn_pane_g1

0x95f1,	// (0x000274e7) wgtman_btn_pane_t1_ParamLimits

0x95f1,	// (0x000274e7) wgtman_btn_pane_t1

0xee83,	// (0x0002cd79) wgtman_btn_pane_t2_ParamLimits

0xee83,	// (0x0002cd79) wgtman_btn_pane_t2

0x0001,

0xfdb9,	// (0x0002dcaf) wgtman_btn_pane_t_ParamLimits

0xfdb9,	// (0x0002dcaf) wgtman_btn_pane_t

0x9628,	// (0x0002751e) listrow_wgtman_pane_ParamLimits

0x9628,	// (0x0002751e) listrow_wgtman_pane

0x9643,	// (0x00027539) listrow_wgtman_pane_g1

0x9650,	// (0x00027546) listrow_wgtman_pane_g2

0x0001,

0xfdbe,	// (0x0002dcb4) listrow_wgtman_pane_g

0x966e,	// (0x00027564) listrow_wgtman_pane_t1

0x9686,	// (0x0002757c) listrow_wgtman_pane_t2

0x0001,

0xfdc3,	// (0x0002dcb9) listrow_wgtman_pane_t

0x96ac,	// (0x000275a2) wait_bar_pane_cp09

0xee9a,	// (0x0002cd90) main_calllock_btn_pane

0xeea4,	// (0x0002cd9a) main_calllock_pane_g1

0x9cbe,	// (0x00027bb4) bg_button_pane_cp17

0xeeb0,	// (0x0002cda6) main_calllock_btn_pane_g1

0xeeb9,	// (0x0002cdaf) main_calllock_btn_pane_t1

0x9cbe,	// (0x00027bb4) main_dialer3_pane

0x9cbe,	// (0x00027bb4) main_fmrd2_pane

0xc8bc,	// (0x0002a7b2) main_fs_bigclock_unlock_btn_pane_g1

0xeed0,	// (0x0002cdc6) main_fs_bigclock_unlock_btn_pane_t1

0x96be,	// (0x000275b4) area_fmrd2_info_pane_ParamLimits

0x96be,	// (0x000275b4) area_fmrd2_info_pane

0x96cc,	// (0x000275c2) area_fmrd2_visual_pane_ParamLimits

0x96cc,	// (0x000275c2) area_fmrd2_visual_pane

0x96da,	// (0x000275d0) fmrd2_indi_pane_ParamLimits

0x96da,	// (0x000275d0) fmrd2_indi_pane

0x96e7,	// (0x000275dd) area_fmrd2_visual_pane_g1

0x96ef,	// (0x000275e5) area_fmrd2_visual_pane_t1

0x96ff,	// (0x000275f5) area_fmrd2_visual_pane_t2

0x970f,	// (0x00027605) area_fmrd2_visual_pane_t3

0x0002,

0xfdcd,	// (0x0002dcc3) area_fmrd2_visual_pane_t

0x971f,	// (0x00027615) area_fmrd2_info_pane_g1

0x9727,	// (0x0002761d) area_fmrd2_info_pane_t1

0x9737,	// (0x0002762d) area_fmrd2_info_pane_t2

0x9747,	// (0x0002763d) area_fmrd2_info_pane_t3

0x9757,	// (0x0002764d) area_fmrd2_info_pane_t4

0x0003,

0xfdd4,	// (0x0002dcca) area_fmrd2_info_pane_t

0x9765,	// (0x0002765b) fmrd2_indi_pane_t1

0x9775,	// (0x0002766b) fmrd2_indi_pane_t2

0x9785,	// (0x0002767b) fmrd2_indi_pane_t3

0x0002,

0xfddd,	// (0x0002dcd3) fmrd2_indi_pane_t

0xe1fe,	// (0x0002c0f4) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe1fe,	// (0x0002c0f4) list_single_fs_bigclock_indicator_pane_g5

0xe2a5,	// (0x0002c19b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe2a5,	// (0x0002c19b) list_single_fs_bigclock_indicator_pane_t5

0x8ebc,	// (0x00026db2) aid_cell_bcale_month_pane_ParamLimits

0x8ebc,	// (0x00026db2) aid_cell_bcale_month_pane

0x8eda,	// (0x00026dd0) bcale_month_pane_ParamLimits

0x8eda,	// (0x00026dd0) bcale_month_pane

0x8ef8,	// (0x00026dee) bcale_preview_pane_ParamLimits

0x8ef8,	// (0x00026dee) bcale_preview_pane

0xec7e,	// (0x0002cb74) list_single_fs_bigclock_pane_t1_ParamLimits

0xec9d,	// (0x0002cb93) list_single_fs_bigclock_pane_t2_ParamLimits

0xec9d,	// (0x0002cb93) list_single_fs_bigclock_pane_t2

0x0001,

0x0d9d,	// (0x0001ec93) list_single_fs_bigclock_pane_t_ParamLimits

0x0d9d,	// (0x0001ec93) list_single_fs_bigclock_pane_t

0xeec8,	// (0x0002cdbe) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdc8,	// (0x0002dcbe) main_fs_bigclock_unlock_btn_pane_g

0x9793,	// (0x00027689) aid_dia3_key_size_ParamLimits

0x9793,	// (0x00027689) aid_dia3_key_size

0x979f,	// (0x00027695) aid_dia3_listrow_size_ParamLimits

0x979f,	// (0x00027695) aid_dia3_listrow_size

0x97af,	// (0x000276a5) dia3_keypad_fun_pane_ParamLimits

0x97af,	// (0x000276a5) dia3_keypad_fun_pane

0x97c1,	// (0x000276b7) dia3_keypad_num_pane_ParamLimits

0x97c1,	// (0x000276b7) dia3_keypad_num_pane

0x97d3,	// (0x000276c9) dia3_listscroll_pane_ParamLimits

0x97d3,	// (0x000276c9) dia3_listscroll_pane

0x97e1,	// (0x000276d7) dia3_numentry_pane_ParamLimits

0x97e1,	// (0x000276d7) dia3_numentry_pane

0xeede,	// (0x0002cdd4) dia3_list_pane

0xeee9,	// (0x0002cddf) scroll_pane_cp12

0x9cbe,	// (0x00027bb4) bg_dia3_numentry_pane

0x97ef,	// (0x000276e5) dia3_numentry_pane_t1

0x97fe,	// (0x000276f4) cell_dia3_key_num_pane

0x9806,	// (0x000276fc) cell_dia3_key0_fun_pane_ParamLimits

0x9806,	// (0x000276fc) cell_dia3_key0_fun_pane

0x9813,	// (0x00027709) cell_dia3_key1_fun_pane_ParamLimits

0x9813,	// (0x00027709) cell_dia3_key1_fun_pane

0x9820,	// (0x00027716) dia3_listrow_pane

0xdf0e,	// (0x0002be04) bg_dia3_numentry_pane_g1

0x9cbe,	// (0x00027bb4) bg_button_pane_cp21

0xeef4,	// (0x0002cdea) cell_dia3_key_num_pane_t1

0xef02,	// (0x0002cdf8) cell_dia3_key_num_pane_t2

0xef11,	// (0x0002ce07) cell_dia3_key_num_pane_t3

0xef20,	// (0x0002ce16) cell_dia3_key_num_pane_t4

0x0003,

0x0e22,	// (0x0001ed18) cell_dia3_key_num_pane_t

0x9cbe,	// (0x00027bb4) bg_button_pane_cp19

0x982d,	// (0x00027723) cell_dia3_key0_fun_pane_g1

0x9cbe,	// (0x00027bb4) bg_button_pane_cp20

0x9835,	// (0x0002772b) cell_dia3_key1_fun_pane_g1

0x983d,	// (0x00027733) area_left_week_number_pane

0x9850,	// (0x00027746) area_top_day_name_pane

0x985e,	// (0x00027754) frame_month_view_pane

0xef2f,	// (0x0002ce25) grid_month_view_pane

0x9873,	// (0x00027769) cell_top_day_name_pane_ParamLimits

0x9873,	// (0x00027769) cell_top_day_name_pane

0x988d,	// (0x00027783) cell_area_left_week_number_pane_ParamLimits

0x988d,	// (0x00027783) cell_area_left_week_number_pane

0x98b0,	// (0x000277a6) cell_month_view_pane_ParamLimits

0x98b0,	// (0x000277a6) cell_month_view_pane

0xef3d,	// (0x0002ce33) frm_month_g1

0x98dc,	// (0x000277d2) frm_month_g2

0x98ed,	// (0x000277e3) frm_month_g3

0x98fe,	// (0x000277f4) frm_month_g4

0x990f,	// (0x00027805) frm_month_g5

0x9922,	// (0x00027818) frm_month_g6

0x9935,	// (0x0002782b) frm_month_g7

0xef4a,	// (0x0002ce40) frm_month_g8

0x9948,	// (0x0002783e) frm_month_g9

0x9955,	// (0x0002784b) frm_month_g10

0x9962,	// (0x00027858) frm_month_g11

0x996f,	// (0x00027865) frm_month_g12

0x997c,	// (0x00027872) frm_month_g13

0x9989,	// (0x0002787f) frm_month_g14

0x9998,	// (0x0002788e) frm_month_g15

0x99a7,	// (0x0002789d) frm_month_g16

0x000f,

0xfde4,	// (0x0002dcda) frm_month_g

0xef57,	// (0x0002ce4d) cell_top_day_name_pane_t1

0x99b6,	// (0x000278ac) cell_area_left_week_number_pane_g1

0x99c5,	// (0x000278bb) cell_area_left_week_number_pane_t1

0xcb1f,	// (0x0002aa15) cell_month_view_pane_g1

0x99db,	// (0x000278d1) cell_month_view_pane_t1

0x9cbe,	// (0x00027bb4) main_fps_pane

0xe483,	// (0x0002c379) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe483,	// (0x0002c379) cmail_ddmenu_btn02_pane_cp1

0xe49f,	// (0x0002c395) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe49f,	// (0x0002c395) cmail_ddmenu_btn02_pane_cp2

0x91bf,	// (0x000270b5) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x91bf,	// (0x000270b5) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd58,	// (0x0002dc4e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd58,	// (0x0002dc4e) cmail_ddmenu_btn02_pane_g

0x91dd,	// (0x000270d3) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x91dd,	// (0x000270d3) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd5d,	// (0x0002dc53) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd5d,	// (0x0002dc53) cmail_ddmenu_btn02_pane_t

0x99f1,	// (0x000278e7) fps_text_pane_ParamLimits

0x99f1,	// (0x000278e7) fps_text_pane

0x99fe,	// (0x000278f4) main_fps_pane_g1_ParamLimits

0x99fe,	// (0x000278f4) main_fps_pane_g1

0x9a0c,	// (0x00027902) wait_bar_pane_cp010_ParamLimits

0x9a0c,	// (0x00027902) wait_bar_pane_cp010

0x9a18,	// (0x0002790e) fps_text_pane_t1_ParamLimits

0x9a18,	// (0x0002790e) fps_text_pane_t1

0x6b08,	// (0x000249fe) cam4_image_uncrop_pane_g1

0x6b11,	// (0x00024a07) cam4_image_uncrop_pane_g2

0x6b1a,	// (0x00024a10) cam4_image_uncrop_pane_g3

0x6b23,	// (0x00024a19) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0002d7e4) cam4_image_uncrop_pane_g

0x9820,	// (0x00027716) dia3_listrow_pane_ParamLimits

0x9cbe,	// (0x00027bb4) main_phob2_pane

0x8c9d,	// (0x00026b93) cell_tport_appsw_pane_cp02_ParamLimits

0x8c9d,	// (0x00026b93) cell_tport_appsw_pane_cp02

0x8cac,	// (0x00026ba2) cell_tport_appsw_pane_cp03_ParamLimits

0x8cac,	// (0x00026ba2) cell_tport_appsw_pane_cp03

0x9cbe,	// (0x00027bb4) phob2_contact_card_pane

0x9cbe,	// (0x00027bb4) phob2_listscroll_pane

0xef6a,	// (0x0002ce60) phob2_list_pane

0xef72,	// (0x0002ce68) scroll_pane_cp034

0x9a31,	// (0x00027927) phob2_cc_data_pane_ParamLimits

0x9a31,	// (0x00027927) phob2_cc_data_pane

0x9a4b,	// (0x00027941) phob2_cc_listscroll_pane_ParamLimits

0x9a4b,	// (0x00027941) phob2_cc_listscroll_pane

0x9a65,	// (0x0002795b) list_double_large_graphic_phob2_pane_ParamLimits

0x9a65,	// (0x0002795b) list_double_large_graphic_phob2_pane

0x9a83,	// (0x00027979) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a83,	// (0x00027979) list_double_large_graphic_phob2_pane_g1

0xef7a,	// (0x0002ce70) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xef7a,	// (0x0002ce70) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe05,	// (0x0002dcfb) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe05,	// (0x0002dcfb) list_double_large_graphic_phob2_pane_g

0x9a99,	// (0x0002798f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a99,	// (0x0002798f) list_double_large_graphic_phob2_pane_t1

0x9aae,	// (0x000279a4) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9aae,	// (0x000279a4) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe0a,	// (0x0002dd00) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe0a,	// (0x0002dd00) list_double_large_graphic_phob2_pane_t

0x9cbe,	// (0x00027bb4) list_highlight_pane_cp024

0x9ac0,	// (0x000279b6) phob2_cc_button_pane

0x9ac8,	// (0x000279be) phob2_cc_data_pane_g1_ParamLimits

0x9ac8,	// (0x000279be) phob2_cc_data_pane_g1

0x9ad4,	// (0x000279ca) phob2_cc_data_pane_g2_ParamLimits

0x9ad4,	// (0x000279ca) phob2_cc_data_pane_g2

0x0001,

0xfe0f,	// (0x0002dd05) phob2_cc_data_pane_g_ParamLimits

0xfe0f,	// (0x0002dd05) phob2_cc_data_pane_g

0x9ae0,	// (0x000279d6) phob2_cc_data_pane_t1_ParamLimits

0x9ae0,	// (0x000279d6) phob2_cc_data_pane_t1

0x9af2,	// (0x000279e8) phob2_cc_data_pane_t2_ParamLimits

0x9af2,	// (0x000279e8) phob2_cc_data_pane_t2

0x9b04,	// (0x000279fa) phob2_cc_data_pane_t3_ParamLimits

0x9b04,	// (0x000279fa) phob2_cc_data_pane_t3

0x0002,

0xfe14,	// (0x0002dd0a) phob2_cc_data_pane_t_ParamLimits

0xfe14,	// (0x0002dd0a) phob2_cc_data_pane_t

0xef86,	// (0x0002ce7c) phob2_cc_list_pane_ParamLimits

0xef86,	// (0x0002ce7c) phob2_cc_list_pane

0xd6b7,	// (0x0002b5ad) scroll_pane_cp035_ParamLimits

0xd6b7,	// (0x0002b5ad) scroll_pane_cp035

0xa3c5,	// (0x000282bb) bg_button_pane_cp033

0xef92,	// (0x0002ce88) phob2_cc_button_pane_g1

0xef9e,	// (0x0002ce94) phob2_cc_button_pane_t1

0xefb3,	// (0x0002cea9) phob2_cc_button_pane_t2

0x0001,

0x0e62,	// (0x0001ed58) phob2_cc_button_pane_t

0x9b16,	// (0x00027a0c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9b16,	// (0x00027a0c) list_double_large_graphic_phob2_cc_pane

0x9b3d,	// (0x00027a33) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9b3d,	// (0x00027a33) list_double_large_graphic_phob2_cc_pane_g1

0x9b4e,	// (0x00027a44) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9b4e,	// (0x00027a44) list_double_large_graphic_phob2_cc_pane_g2

0x9b5d,	// (0x00027a53) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9b5d,	// (0x00027a53) list_double_large_graphic_phob2_cc_pane_g3

0x9b6c,	// (0x00027a62) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9b6c,	// (0x00027a62) list_double_large_graphic_phob2_cc_pane_g4

0x9b7d,	// (0x00027a73) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b7d,	// (0x00027a73) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe1b,	// (0x0002dd11) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe1b,	// (0x0002dd11) list_double_large_graphic_phob2_cc_pane_g

0x9b8c,	// (0x00027a82) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9b8c,	// (0x00027a82) list_double_large_graphic_phob2_cc_pane_t1

0x9bb5,	// (0x00027aab) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9bb5,	// (0x00027aab) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe26,	// (0x0002dd1c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe26,	// (0x0002dd1c) list_double_large_graphic_phob2_cc_pane_t

0xefc5,	// (0x0002cebb) list_highlight_pane_cp025_ParamLimits

0xefc5,	// (0x0002cebb) list_highlight_pane_cp025

0xa3c5,	// (0x000282bb) bg_button_pane_cp033_ParamLimits

0xef92,	// (0x0002ce88) phob2_cc_button_pane_g1_ParamLimits

0xef9e,	// (0x0002ce94) phob2_cc_button_pane_t1_ParamLimits

0xefb3,	// (0x0002cea9) phob2_cc_button_pane_t2_ParamLimits

0x0e62,	// (0x0001ed58) phob2_cc_button_pane_t_ParamLimits

0x27b1,	// (0x000206a7) popup_wgtman_window

0xd47e,	// (0x0002b374) scroll_pane_cp038

0x95b1,	// (0x000274a7) wgtman_btn_pane_cp_01_ParamLimits

0x95b1,	// (0x000274a7) wgtman_btn_pane_cp_01

0xefd3,	// (0x0002cec9) wgtman_content_pane

0xefdc,	// (0x0002ced2) wgtman_heading_pane

0x9cbe,	// (0x00027bb4) bg_heading_pane_cp02

0xefe5,	// (0x0002cedb) wgtman_heading_pane_g1

0xefed,	// (0x0002cee3) wgtman_heading_pane_t1

0xeffb,	// (0x0002cef1) scroll_pane_cp036

0xf003,	// (0x0002cef9) wgtman_list_pane

0xf00b,	// (0x0002cf01) wgtman_list_pane_t1_ParamLimits

0xf00b,	// (0x0002cf01) wgtman_list_pane_t1

0x1f9e,	// (0x0001fe94) cam4_grid_pane

0x72c2,	// (0x000251b8) bg_button_pane_cp015_ParamLimits

0x72d4,	// (0x000251ca) bg_button_pane_cp016_ParamLimits

0x72e7,	// (0x000251dd) bg_button_pane_cp017_ParamLimits

0x733d,	// (0x00025233) popup_vitu2_query_window_g3_ParamLimits

0x733d,	// (0x00025233) popup_vitu2_query_window_g3

0x73f8,	// (0x000252ee) popup_vitu2_query_window_t6_ParamLimits

0x73f8,	// (0x000252ee) popup_vitu2_query_window_t6

0x7423,	// (0x00025319) popup_vitu2_query_window_t7_ParamLimits

0x7423,	// (0x00025319) popup_vitu2_query_window_t7

0xea6c,	// (0x0002c962) cam4_grid_pane_g1

0xea75,	// (0x0002c96b) cam4_grid_pane_g2

0xf025,	// (0x0002cf1b) cam4_grid_pane_g3

0xf02e,	// (0x0002cf24) cam4_grid_pane_g4

0x0003,

0x0e77,	// (0x0001ed6d) cam4_grid_pane_g

0x33ba,	// (0x000212b0) aid_placing_vt_slider_lsc_ParamLimits

0x3706,	// (0x000215fc) vidtel_button_pane_ParamLimits

0x3706,	// (0x000215fc) vidtel_button_pane

0xf039,	// (0x0002cf2f) bg_button_pane_cp034

0x9bde,	// (0x00027ad4) vidtel_button_pane_g1

0xf043,	// (0x0002cf39) vidtel_button_pane_t1

0xd5bc,	// (0x0002b4b2) aid_size_vtel_slider_touch

0xd6b7,	// (0x0002b5ad) scroll_pane_cp039

0xdf4c,	// (0x0002be42) ncim_query_button_pane_cp01_ParamLimits

0xdf6b,	// (0x0002be61) ncimui_query_pane_g1_ParamLimits

0xa3c5,	// (0x000282bb) input_focus_pane_cp012_ParamLimits

0xdf90,	// (0x0002be86) ncim_query_entry_pane_t1_ParamLimits

0xd6b7,	// (0x0002b5ad) scroll_pane_cp039_ParamLimits

0xaec4,	// (0x00028dba) navi_pane_bcale_mc_g1

0xaecc,	// (0x00028dc2) navi_pane_bcale_mc_t1

0xe4e8,	// (0x0002c3de) main_sp_fs_email_pane_g1

0xe4f4,	// (0x0002c3ea) main_sp_fs_email_pane_g2

0x0001,

0x0c0d,	// (0x0001eb03) main_sp_fs_email_pane_g

0xe90b,	// (0x0002c801) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe90b,	// (0x0002c801) list_single_cale_mrui_row_pane_g3

0x9205,	// (0x000270fb) list_single_recal_day_pane_g5_event_pane

0xeb05,	// (0x0002c9fb) list_single_recal_day_pane_g7

0xf051,	// (0x0002cf47) list_recal_day_event_pane_cp01

0xf05a,	// (0x0002cf50) list_recal_vselct_arw_lo_pane_cp01

0xf062,	// (0x0002cf58) list_recal_vselct_arw_up_pane_cp01

0xf06a,	// (0x0002cf60) list_recal_vselct_pane_cp01

0xd5de,	// (0x0002b4d4) list_recal_day_event_pane_cp01_g1

0xf074,	// (0x0002cf6a) list_recal_day_event_pane_cp01_t1

0xeb0d,	// (0x0002ca03) list_single_recal_day_pane_t1_ParamLimits

0xeb1f,	// (0x0002ca15) list_single_recal_day_pane_t2_ParamLimits

0x0d65,	// (0x0001ec5b) list_single_recal_day_pane_t_ParamLimits

0xa336,	// (0x0002822c) bg_notes_pane_ParamLimits

0xa3e7,	// (0x000282dd) list_notes_pane_ParamLimits

0x2a38,	// (0x0002092e) scroll_pane_cp06_ParamLimits

0xa409,	// (0x000282ff) main_notes_pane_ParamLimits

0x9cbe,	// (0x00027bb4) main_welc_pane

0x9be6,	// (0x00027adc) main_welc_body_pane_ParamLimits

0x9be6,	// (0x00027adc) main_welc_body_pane

0x9c00,	// (0x00027af6) main_welc_opti_pane_ParamLimits

0x9c00,	// (0x00027af6) main_welc_opti_pane

0x9c33,	// (0x00027b29) main_welc_pane_t1_ParamLimits

0x9c33,	// (0x00027b29) main_welc_pane_t1

0x9c4d,	// (0x00027b43) main_welc_body_row_pane_ParamLimits

0x9c4d,	// (0x00027b43) main_welc_body_row_pane

0xd3d5,	// (0x0002b2cb) main_welc_opti_row_pane_ParamLimits

0xd3d5,	// (0x0002b2cb) main_welc_opti_row_pane

0xf082,	// (0x0002cf78) main_welc_opti_row_pane_g1

0xf08a,	// (0x0002cf80) main_welc_opti_row_pane_t1

0xf09a,	// (0x0002cf90) main_welc_body_row_pane_t1

0xed5e,	// (0x0002cc54) popup_notif_wgt_heading_pane

0xed78,	// (0x0002cc6e) aid_size_list_notif_wgt_del_ParamLimits

0xed85,	// (0x0002cc7b) list_notif_wgt_row_pane_g1_ParamLimits

0xed91,	// (0x0002cc87) list_notif_wgt_row_pane_g2_ParamLimits

0xed9d,	// (0x0002cc93) list_notif_wgt_row_pane_g3_ParamLimits

0x0dcc,	// (0x0001ecc2) list_notif_wgt_row_pane_g_ParamLimits

0xedaa,	// (0x0002cca0) list_notif_wgt_row_pane_t1_ParamLimits

0xedbf,	// (0x0002ccb5) list_notif_wgt_row_pane_t2_ParamLimits

0xedd1,	// (0x0002ccc7) list_notif_wgt_row_pane_t3_ParamLimits

0x0dd3,	// (0x0001ecc9) list_notif_wgt_row_pane_t_ParamLimits

0x9643,	// (0x00027539) listrow_wgtman_pane_g1_ParamLimits

0x9650,	// (0x00027546) listrow_wgtman_pane_g2_ParamLimits

0xfdbe,	// (0x0002dcb4) listrow_wgtman_pane_g_ParamLimits

0x966e,	// (0x00027564) listrow_wgtman_pane_t1_ParamLimits

0x9686,	// (0x0002757c) listrow_wgtman_pane_t2_ParamLimits

0xfdc3,	// (0x0002dcb9) listrow_wgtman_pane_t_ParamLimits

0x96ac,	// (0x000275a2) wait_bar_pane_cp09_ParamLimits

0x9cbe,	// (0x00027bb4) bg_popup_heading_pane_cp02

0xf0a9,	// (0x0002cf9f) popup_notif_wgt_heading_pane_g1

0xf0b1,	// (0x0002cfa7) popup_notif_wgt_heading_pane_t1

0x9cbe,	// (0x00027bb4) main_vids_pane

0x9cbe,	// (0x00027bb4) vids_listscroll_pane

0x9c72,	// (0x00027b68) scroll_pane_cp040

0x9cbe,	// (0x00027bb4) vids_list_pane

0x9c7d,	// (0x00027b73) vids_list_double_pane_ParamLimits

0x9c7d,	// (0x00027b73) vids_list_double_pane

0x9c97,	// (0x00027b8d) vids_list_double_pane_g1

0x9ca0,	// (0x00027b96) vids_list_double_pane_t1

0x9cb0,	// (0x00027ba6) vids_list_double_pane_t2

0x0001,

0xfe30,	// (0x0002dd26) vids_list_double_pane_t

0x15e6,	// (0x0001f4dc) main_ncimui_pane_ParamLimits

0x7f5a,	// (0x00025e50) main_ncimui_pane_g1_ParamLimits

0x7f66,	// (0x00025e5c) main_ncimui_pane_g2_ParamLimits

0x7f66,	// (0x00025e5c) main_ncimui_pane_g2

0x0001,

0xfbc8,	// (0x0002dabe) main_ncimui_pane_g_ParamLimits

0xfbc8,	// (0x0002dabe) main_ncimui_pane_g

0x9c19,	// (0x00027b0f) main_welc_pane_g1_ParamLimits

0x9c19,	// (0x00027b0f) main_welc_pane_g1

0x9c25,	// (0x00027b1b) main_welc_pane_g2_ParamLimits

0x9c25,	// (0x00027b1b) main_welc_pane_g2

0x0001,

0xfe2b,	// (0x0002dd21) main_welc_pane_g_ParamLimits

0xfe2b,	// (0x0002dd21) main_welc_pane_g

0xa336,	// (0x0002822c) listscroll_mce_pane_ParamLimits

0xb033,	// (0x00028f29) wait_bar_pane_cp10

0xc49f,	// (0x0002a395) main_cale_day_pane_ParamLimits

0xc49f,	// (0x0002a395) main_cale_week_pane_ParamLimits

0xa336,	// (0x0002822c) main_messa_pane_ParamLimits

0x64b0,	// (0x000243a6) main_clock2_btn_pane_ParamLimits

0x64b0,	// (0x000243a6) main_clock2_btn_pane

0xccd3,	// (0x0002abc9) main_clock2_btn_pane_cp01_ParamLimits

0xccd3,	// (0x0002abc9) main_clock2_btn_pane_cp01

0xe897,	// (0x0002c78d) list_cale_mrui_pane_ParamLimits

0xee07,	// (0x0002ccfd) main_cf0_pane_g2

0x0001,

0x0dda,	// (0x0001ecd0) main_cf0_pane_g

0x983d,	// (0x00027733) area_left_week_number_pane_ParamLimits

0x9850,	// (0x00027746) area_top_day_name_pane_ParamLimits

0x985e,	// (0x00027754) frame_month_view_pane_ParamLimits

0xef2f,	// (0x0002ce25) grid_month_view_pane_ParamLimits

0xef3d,	// (0x0002ce33) frm_month_g1_ParamLimits

0x98dc,	// (0x000277d2) frm_month_g2_ParamLimits

0x98ed,	// (0x000277e3) frm_month_g3_ParamLimits

0x98fe,	// (0x000277f4) frm_month_g4_ParamLimits

0x990f,	// (0x00027805) frm_month_g5_ParamLimits

0x9922,	// (0x00027818) frm_month_g6_ParamLimits

0x9935,	// (0x0002782b) frm_month_g7_ParamLimits

0xef4a,	// (0x0002ce40) frm_month_g8_ParamLimits

0x9948,	// (0x0002783e) frm_month_g9_ParamLimits

0x9955,	// (0x0002784b) frm_month_g10_ParamLimits

0x9962,	// (0x00027858) frm_month_g11_ParamLimits

0x996f,	// (0x00027865) frm_month_g12_ParamLimits

0x997c,	// (0x00027872) frm_month_g13_ParamLimits

0x9989,	// (0x0002787f) frm_month_g14_ParamLimits

0x9998,	// (0x0002788e) frm_month_g15_ParamLimits

0x99a7,	// (0x0002789d) frm_month_g16_ParamLimits

0xfde4,	// (0x0002dcda) frm_month_g_ParamLimits

0xef57,	// (0x0002ce4d) cell_top_day_name_pane_t1_ParamLimits

0x99b6,	// (0x000278ac) cell_area_left_week_number_pane_g1_ParamLimits

0x99c5,	// (0x000278bb) cell_area_left_week_number_pane_t1_ParamLimits

0xcb1f,	// (0x0002aa15) cell_month_view_pane_g1_ParamLimits

0x99db,	// (0x000278d1) cell_month_view_pane_t1_ParamLimits

0xa32e,	// (0x00028224) main_clock2_btn_pane_g1

0xf0bf,	// (0x0002cfb5) main_clock2_btn_pane_t1

0xa3c5,	// (0x000282bb) listscroll_cmail_pane_ParamLimits

0xe4e8,	// (0x0002c3de) main_sp_fs_email_pane_g1_ParamLimits

0xe4f4,	// (0x0002c3ea) main_sp_fs_email_pane_g2_ParamLimits

0x0c0d,	// (0x0001eb03) main_sp_fs_email_pane_g_ParamLimits

0xea5b,	// (0x0002c951) list_recal_day_pane_ParamLimits

0xea7e,	// (0x0002c974) mian_recal_day_pane_t1

0x8986,	// (0x0002687c) list_single_dyc_row_text_pane_t4_ParamLimits

0x8986,	// (0x0002687c) list_single_dyc_row_text_pane_t4

0x89bd,	// (0x000268b3) list_single_dyc_row_text_pane_t5_ParamLimits

0x89bd,	// (0x000268b3) list_single_dyc_row_text_pane_t5

0xe596,	// (0x0002c48c) list_single_dyc_row_text_pane_t6_ParamLimits

0xe596,	// (0x0002c48c) list_single_dyc_row_text_pane_t6

0x4544,	// (0x0002243a) aid_mgn_list_cale_time_pane

0x15e6,	// (0x0001f4dc) main_gallery2_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
