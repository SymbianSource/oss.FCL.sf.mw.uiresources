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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00095300 };

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
0x0eab,	// (0x000961ab) Screen

0x0eb7,	// (0x000961b7) application_window

0x0f13,	// (0x00096213) area_bottom_pane_ParamLimits

0x0f13,	// (0x00096213) area_bottom_pane

0x0f6c,	// (0x0009626c) area_top_pane_ParamLimits

0x0f6c,	// (0x0009626c) area_top_pane

0x0fd0,	// (0x000962d0) call_video_uplink_pane_ParamLimits

0x0fd0,	// (0x000962d0) call_video_uplink_pane

0x100f,	// (0x0009630f) main_pane_ParamLimits

0x100f,	// (0x0009630f) main_pane

0xbc8a,	// (0x000a0f8a) context_pane

0x451c,	// (0x0009981c) navi_pane

0x4542,	// (0x00099842) popup_cale_events_window_ParamLimits

0x4542,	// (0x00099842) popup_cale_events_window

0xbc9d,	// (0x000a0f9d) popup_mup_playback_window

0x455a,	// (0x0009985a) signal_pane

0xef93,	// (0x000a4293) main_browser_pane

0x9e18,	// (0x0009f118) main_burst_pane

0x439a,	// (0x0009969a) main_calc_pane

0xbc70,	// (0x000a0f70) main_cale_day_pane

0x1778,	// (0x00096a78) main_cale_month_pane

0xbc70,	// (0x000a0f70) main_cale_week_pane

0x9e18,	// (0x0009f118) main_call_pane

0xec73,	// (0x000a3f73) main_call_poc_pane

0x9e18,	// (0x0009f118) main_camera_pane

0x9e18,	// (0x0009f118) main_chi_dic_pane

0xa5fd,	// (0x0009f8fd) main_clock_pane

0xec73,	// (0x000a3f73) main_fmradio_pane

0x9e18,	// (0x0009f118) main_graph_messa_pane

0xec73,	// (0x000a3f73) main_help_pane

0xef93,	// (0x000a4293) main_im_pane

0xeece,	// (0x000a41ce) main_image_pane_ParamLimits

0xeece,	// (0x000a41ce) main_image_pane

0xec73,	// (0x000a3f73) main_location2_pane

0x9e18,	// (0x0009f118) main_location_pane

0xeece,	// (0x000a41ce) main_messa_pane

0xec73,	// (0x000a3f73) main_mp2_pane

0x9e18,	// (0x0009f118) main_mp_pane

0xec73,	// (0x000a3f73) main_msg_pane

0xec73,	// (0x000a3f73) main_mup_eq_pane

0xec73,	// (0x000a3f73) main_mup_pane

0xef93,	// (0x000a4293) main_notes_pane

0xec73,	// (0x000a3f73) main_pec_pane

0xec73,	// (0x000a3f73) main_phob_pane

0xec73,	// (0x000a3f73) main_pinb_pane

0xec73,	// (0x000a3f73) main_postcard_pane

0xec73,	// (0x000a3f73) main_qdial_pane

0x9e18,	// (0x0009f118) main_skin_pane

0xec73,	// (0x000a3f73) main_smil2_pane

0x9e18,	// (0x0009f118) main_smil_pane

0x9e18,	// (0x0009f118) main_video_pane

0x9e18,	// (0x0009f118) main_video_tele_pane

0xeece,	// (0x000a41ce) main_viewer_pane_ParamLimits

0xeece,	// (0x000a41ce) main_viewer_pane

0x9e18,	// (0x0009f118) main_vorec_pane

0x43e6,	// (0x000996e6) popup_blid_sat_info_window_ParamLimits

0x43e6,	// (0x000996e6) popup_blid_sat_info_window

0x4406,	// (0x00099706) popup_dyc_status_message_window_ParamLimits

0x4406,	// (0x00099706) popup_dyc_status_message_window

0x4416,	// (0x00099716) popup_grid_large_graphic_window_ParamLimits

0x4416,	// (0x00099716) popup_grid_large_graphic_window

0x44a7,	// (0x000997a7) popup_loc_request_window_ParamLimits

0x44a7,	// (0x000997a7) popup_loc_request_window

0x44f4,	// (0x000997f4) popup_wml_address_window_ParamLimits

0x44f4,	// (0x000997f4) popup_wml_address_window

0x4272,	// (0x00099572) call_muted_g1

0x3f34,	// (0x00099234) popup_call_audio_conf_window_ParamLimits

0x3f34,	// (0x00099234) popup_call_audio_conf_window

0x4282,	// (0x00099582) popup_call_audio_first_window_ParamLimits

0x4282,	// (0x00099582) popup_call_audio_first_window

0x42c2,	// (0x000995c2) popup_call_audio_in_window_ParamLimits

0x42c2,	// (0x000995c2) popup_call_audio_in_window

0x42e6,	// (0x000995e6) popup_call_audio_out_window_ParamLimits

0x42e6,	// (0x000995e6) popup_call_audio_out_window

0x4308,	// (0x00099608) popup_call_audio_second_window_ParamLimits

0x4308,	// (0x00099608) popup_call_audio_second_window

0x4338,	// (0x00099638) popup_call_audio_wait_window_ParamLimits

0x4338,	// (0x00099638) popup_call_audio_wait_window

0x4359,	// (0x00099659) popup_number_entry_window_ParamLimits

0x4359,	// (0x00099659) popup_number_entry_window

0xe7e1,	// (0x000a3ae1) bg_popup_call_pane_cp05_ParamLimits

0xe7e1,	// (0x000a3ae1) bg_popup_call_pane_cp05

0xe801,	// (0x000a3b01) popup_number_entry_window_t1

0xe814,	// (0x000a3b14) popup_number_entry_window_t2

0xe826,	// (0x000a3b26) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x000a43c6) popup_number_entry_window_t

0xe838,	// (0x000a3b38) text_title_cp2

0xe84b,	// (0x000a3b4b) bg_popup_call_pane_cp_ParamLimits

0xe84b,	// (0x000a3b4b) bg_popup_call_pane_cp

0xe859,	// (0x000a3b59) call_thumbnail_pane

0xe861,	// (0x000a3b61) popup_call_audio_in_window_g1_ParamLimits

0xe861,	// (0x000a3b61) popup_call_audio_in_window_g1

0xe86d,	// (0x000a3b6d) popup_call_audio_in_window_g2_ParamLimits

0xe86d,	// (0x000a3b6d) popup_call_audio_in_window_g2

0xe879,	// (0x000a3b79) popup_call_audio_in_window_g3_ParamLimits

0xe879,	// (0x000a3b79) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x000a43cf) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x000a43cf) popup_call_audio_in_window_g

0xe885,	// (0x000a3b85) popup_call_audio_in_window_t1_ParamLimits

0xe885,	// (0x000a3b85) popup_call_audio_in_window_t1

0xe8a1,	// (0x000a3ba1) popup_call_audio_in_window_t2_ParamLimits

0xe8a1,	// (0x000a3ba1) popup_call_audio_in_window_t2

0xe8bd,	// (0x000a3bbd) popup_call_audio_in_window_t3_ParamLimits

0xe8bd,	// (0x000a3bbd) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x000a43d6) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x000a43d6) popup_call_audio_in_window_t

0xe84b,	// (0x000a3b4b) bg_popup_call_pane_cp01_ParamLimits

0xe84b,	// (0x000a3b4b) bg_popup_call_pane_cp01

0xe859,	// (0x000a3b59) call_thumbnail_pane_cp02

0xe8d0,	// (0x000a3bd0) call_type_pane_cp022

0xe8d8,	// (0x000a3bd8) popup_call_audio_out_window_g1_ParamLimits

0xe8d8,	// (0x000a3bd8) popup_call_audio_out_window_g1

0xe8ea,	// (0x000a3bea) popup_call_audio_out_window_g2_ParamLimits

0xe8ea,	// (0x000a3bea) popup_call_audio_out_window_g2

0xe8f6,	// (0x000a3bf6) popup_call_audio_out_window_g3_ParamLimits

0xe8f6,	// (0x000a3bf6) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x000a43dd) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x000a43dd) popup_call_audio_out_window_g

0xe908,	// (0x000a3c08) popup_call_audio_out_window_t1_ParamLimits

0xe908,	// (0x000a3c08) popup_call_audio_out_window_t1

0xe99f,	// (0x000a3c9f) popup_call_audio_out_window_t2_ParamLimits

0xe99f,	// (0x000a3c9f) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x000a43e4) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x000a43e4) popup_call_audio_out_window_t

0xe9b4,	// (0x000a3cb4) bg_popup_call_pane_ParamLimits

0xe9b4,	// (0x000a3cb4) bg_popup_call_pane

0x1228,	// (0x00096528) call_thumbnail_pane_cp_ParamLimits

0x1228,	// (0x00096528) call_thumbnail_pane_cp

0xea38,	// (0x000a3d38) call_type_pane_cp01_ParamLimits

0xea38,	// (0x000a3d38) call_type_pane_cp01

0xea7c,	// (0x000a3d7c) popup_call_audio_first_window_g1_ParamLimits

0xea7c,	// (0x000a3d7c) popup_call_audio_first_window_g1

0xeac8,	// (0x000a3dc8) popup_call_audio_first_window_g2_ParamLimits

0xeac8,	// (0x000a3dc8) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x000a43e9) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x000a43e9) popup_call_audio_first_window_g

0xeb0c,	// (0x000a3e0c) popup_call_audio_first_window_t1_ParamLimits

0xeb0c,	// (0x000a3e0c) popup_call_audio_first_window_t1

0xebb8,	// (0x000a3eb8) popup_call_audio_first_window_t4_ParamLimits

0xebb8,	// (0x000a3eb8) popup_call_audio_first_window_t4

0xec44,	// (0x000a3f44) popup_call_audio_first_window_t5_ParamLimits

0xec44,	// (0x000a3f44) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x000a43ee) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x000a43ee) popup_call_audio_first_window_t

0xec73,	// (0x000a3f73) bg_popup_call_pane_cp02

0xec7d,	// (0x000a3f7d) call_type_pane_cp023

0xec85,	// (0x000a3f85) popup_call_audio_wait_window_g1

0xec8d,	// (0x000a3f8d) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000a43f5) popup_call_audio_wait_window_g

0xec95,	// (0x000a3f95) popup_call_audio_wait_window_t3

0xeca3,	// (0x000a3fa3) bg_popup_call_pane_cp03_ParamLimits

0xeca3,	// (0x000a3fa3) bg_popup_call_pane_cp03

0xed03,	// (0x000a4003) call_thumbnail_pane_cp011_ParamLimits

0xed03,	// (0x000a4003) call_thumbnail_pane_cp011

0xed0f,	// (0x000a400f) call_type_pane_cp034_ParamLimits

0xed0f,	// (0x000a400f) call_type_pane_cp034

0xed4b,	// (0x000a404b) popup_call_audio_second_window_g1_ParamLimits

0xed4b,	// (0x000a404b) popup_call_audio_second_window_g1

0xed87,	// (0x000a4087) popup_call_audio_second_window_g2_ParamLimits

0xed87,	// (0x000a4087) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x000a43fa) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x000a43fa) popup_call_audio_second_window_g

0xedc3,	// (0x000a40c3) popup_call_audio_second_window_t1_ParamLimits

0xedc3,	// (0x000a40c3) popup_call_audio_second_window_t1

0xee44,	// (0x000a4144) popup_call_audio_second_window_t2_ParamLimits

0xee44,	// (0x000a4144) popup_call_audio_second_window_t2

0xee7a,	// (0x000a417a) popup_call_audio_second_window_t3_ParamLimits

0xee7a,	// (0x000a417a) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x000a43ff) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x000a43ff) popup_call_audio_second_window_t

0xec73,	// (0x000a3f73) bg_popup_call_pane_cp04

0xeeb0,	// (0x000a41b0) list_conf_pane

0xeeb8,	// (0x000a41b8) popup_call_audio_conf_window_t1

0xeec6,	// (0x000a41c6) call_thumbnail_pane_g1

0xeece,	// (0x000a41ce) bg_pinb_pane_ParamLimits

0xeece,	// (0x000a41ce) bg_pinb_pane

0xeedc,	// (0x000a41dc) find_pinb_pane

0xeee5,	// (0x000a41e5) listscroll_pinb_pane_ParamLimits

0xeee5,	// (0x000a41e5) listscroll_pinb_pane

0xeef4,	// (0x000a41f4) pinb_bg_pane_g1

0x124c,	// (0x0009654c) pinb_bg_pane_g2

0x1258,	// (0x00096558) pinb_bg_pane_g3

0x1264,	// (0x00096564) pinb_bg_pane_g4

0x1270,	// (0x00096570) pinb_bg_pane_g5

0x127c,	// (0x0009657c) pinb_bg_pane_g6

0x1287,	// (0x00096587) pinb_bg_pane_g7

0x1292,	// (0x00096592) pinb_bg_pane_g8

0x129d,	// (0x0009659d) pinb_bg_pane_g9

0x12a7,	// (0x000965a7) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x000a4406) pinb_bg_pane_g

0x12c4,	// (0x000965c4) grid_pinb_pane

0x12cf,	// (0x000965cf) list_pinb_pane

0x12da,	// (0x000965da) scroll_pane_cp01_ParamLimits

0x12da,	// (0x000965da) scroll_pane_cp01

0xeefe,	// (0x000a41fe) find_pinb_pane_g1_ParamLimits

0xeefe,	// (0x000a41fe) find_pinb_pane_g1

0xef16,	// (0x000a4216) find_pinb_pane_t1

0xef28,	// (0x000a4228) find_pinb_pane_t2

0x0001,

0xf120,	// (0x000a4420) find_pinb_pane_t

0xef3d,	// (0x000a423d) input_focus_pane_cp01_ParamLimits

0xef3d,	// (0x000a423d) input_focus_pane_cp01

0x12ec,	// (0x000965ec) cell_pinb_pane_ParamLimits

0x12ec,	// (0x000965ec) cell_pinb_pane

0x1314,	// (0x00096614) cell_pinb_pane_g1_ParamLimits

0x1314,	// (0x00096614) cell_pinb_pane_g1

0x1329,	// (0x00096629) cell_pinb_pane_g2_ParamLimits

0x1329,	// (0x00096629) cell_pinb_pane_g2

0xef49,	// (0x000a4249) cell_pinb_pane_g3_ParamLimits

0xef49,	// (0x000a4249) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x000a4425) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x000a4425) cell_pinb_pane_g

0xec73,	// (0x000a3f73) grid_highlight_pane_cp01

0x1335,	// (0x00096635) list_pinb_item_pane_ParamLimits

0x1335,	// (0x00096635) list_pinb_item_pane

0xec73,	// (0x000a3f73) list_highlight_pane_cp02

0x135b,	// (0x0009665b) list_pinb_item_pane_g1_ParamLimits

0x135b,	// (0x0009665b) list_pinb_item_pane_g1

0x1368,	// (0x00096668) list_pinb_item_pane_g2_ParamLimits

0x1368,	// (0x00096668) list_pinb_item_pane_g2

0x1374,	// (0x00096674) list_pinb_item_pane_g3_ParamLimits

0x1374,	// (0x00096674) list_pinb_item_pane_g3

0x1385,	// (0x00096685) list_pinb_item_pane_g4_ParamLimits

0x1385,	// (0x00096685) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x000a442c) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x000a442c) list_pinb_item_pane_g

0x1391,	// (0x00096691) list_pinb_item_pane_t1_ParamLimits

0x1391,	// (0x00096691) list_pinb_item_pane_t1

0x13c2,	// (0x000966c2) calc_display_pane

0x13e0,	// (0x000966e0) calc_paper_pane

0x13fc,	// (0x000966fc) grid_calc_pane

0xec73,	// (0x000a3f73) bg_list_pane_cp01

0x1428,	// (0x00096728) clock_g1

0x1430,	// (0x00096730) clock_g2

0x0001,

0xf135,	// (0x000a4435) clock_g

0x143a,	// (0x0009673a) clock_t1_ParamLimits

0x143a,	// (0x0009673a) clock_t1

0x144f,	// (0x0009674f) clock_t2_ParamLimits

0x144f,	// (0x0009674f) clock_t2

0x1461,	// (0x00096761) clock_t3_ParamLimits

0x1461,	// (0x00096761) clock_t3

0x1473,	// (0x00096773) clock_t4_ParamLimits

0x1473,	// (0x00096773) clock_t4

0x1485,	// (0x00096785) clock_t5_ParamLimits

0x1485,	// (0x00096785) clock_t5

0x149a,	// (0x0009679a) clock_t6_ParamLimits

0x149a,	// (0x0009679a) clock_t6

0x14ac,	// (0x000967ac) clock_t7_ParamLimits

0x14ac,	// (0x000967ac) clock_t7

0x14be,	// (0x000967be) clock_t8_ParamLimits

0x14be,	// (0x000967be) clock_t8

0x14d4,	// (0x000967d4) clock_t9_ParamLimits

0x14d4,	// (0x000967d4) clock_t9

0x0008,

0xf13a,	// (0x000a443a) clock_t_ParamLimits

0xf13a,	// (0x000a443a) clock_t

0xef55,	// (0x000a4255) popup_clock_analogue_window_cp02

0xef55,	// (0x000a4255) popup_clock_digital_window_cp01

0xef5d,	// (0x000a425d) listscroll_help_pane

0xec73,	// (0x000a3f73) phob_pre_status_pane

0xef67,	// (0x000a4267) grid_qdial_pane

0xeece,	// (0x000a41ce) listscroll_mce_pane

0xeece,	// (0x000a41ce) bg_notes_pane

0xef71,	// (0x000a4271) list_notes_pane

0x14ea,	// (0x000967ea) scroll_pane_cp06

0xef7f,	// (0x000a427f) bg_calc_paper_pane

0x14f9,	// (0x000967f9) list_calc_pane

0xef93,	// (0x000a4293) bg_calc_display_pane

0x1513,	// (0x00096813) calc_display_pane_t1

0x1528,	// (0x00096828) calc_display_pane_t2

0x153d,	// (0x0009683d) calc_display_pane_t3

0x0002,

0xf14d,	// (0x000a444d) calc_display_pane_t

0x154f,	// (0x0009684f) cell_calc_pane_ParamLimits

0x154f,	// (0x0009684f) cell_calc_pane

0xef9f,	// (0x000a429f) bg_calc_paper_pane_g1

0xefab,	// (0x000a42ab) bg_calc_paper_pane_g2

0xefb7,	// (0x000a42b7) bg_calc_paper_pane_g3

0xefc3,	// (0x000a42c3) bg_calc_paper_pane_g4

0xefcf,	// (0x000a42cf) bg_calc_paper_pane_g5

0x157c,	// (0x0009687c) bg_calc_paper_pane_g6

0x158d,	// (0x0009688d) bg_calc_paper_pane_g7

0x159e,	// (0x0009689e) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x000a4454) bg_calc_paper_pane_g

0x15af,	// (0x000968af) calc_bg_paper_pane_g9

0x15c0,	// (0x000968c0) list_calc_item_pane_ParamLimits

0x15c0,	// (0x000968c0) list_calc_item_pane

0xefdb,	// (0x000a42db) list_calc_item_pane_g1

0x15ec,	// (0x000968ec) list_calc_item_pane_t1_ParamLimits

0x15ec,	// (0x000968ec) list_calc_item_pane_t1

0x15fe,	// (0x000968fe) list_calc_item_pane_t2_ParamLimits

0x15fe,	// (0x000968fe) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x000a4465) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x000a4465) list_calc_item_pane_t

0xefe8,	// (0x000a42e8) cell_calc_pane_g1

0xeff2,	// (0x000a42f2) grid_highlight_pane_cp02

0x162e,	// (0x0009692e) bg_calc_display_pane_g1

0x1637,	// (0x00096937) bg_calc_display_pane_g2

0x1641,	// (0x00096941) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x000a446f) bg_calc_display_pane_g

0x164a,	// (0x0009694a) cell_qdial_pane_ParamLimits

0x164a,	// (0x0009694a) cell_qdial_pane

0x165e,	// (0x0009695e) cell_qdial_pane_g1_ParamLimits

0x165e,	// (0x0009695e) cell_qdial_pane_g1

0x166b,	// (0x0009696b) cell_qdial_pane_g2_ParamLimits

0x166b,	// (0x0009696b) cell_qdial_pane_g2

0xf014,	// (0x000a4314) cell_qdial_pane_g3_ParamLimits

0xf014,	// (0x000a4314) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x000a4476) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x000a4476) cell_qdial_pane_g

0x1689,	// (0x00096989) cell_qdial_pane_t1_ParamLimits

0x1689,	// (0x00096989) cell_qdial_pane_t1

0x16a1,	// (0x000969a1) cell_qdial_pane_t2_ParamLimits

0x16a1,	// (0x000969a1) cell_qdial_pane_t2

0x16b4,	// (0x000969b4) cell_qdial_pane_t3_ParamLimits

0x16b4,	// (0x000969b4) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x000a447f) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x000a447f) cell_qdial_pane_t

0xec73,	// (0x000a3f73) grid_highlight_pane_cp04

0xf020,	// (0x000a4320) thumbnail_qdial_pane_ParamLimits

0xf020,	// (0x000a4320) thumbnail_qdial_pane

0x9d3c,	// (0x0009f03c) list_help_pane

0x9d45,	// (0x0009f045) scroll_pane_cp02

0x16c7,	// (0x000969c7) help_list_pane_t1_ParamLimits

0x16c7,	// (0x000969c7) help_list_pane_t1

0x16fa,	// (0x000969fa) bg_notes_pane_g2

0x1702,	// (0x00096a02) bg_notes_pane_g3

0x170a,	// (0x00096a0a) notes_bg_pane_g1

0x1712,	// (0x00096a12) notes_bg_pane_g4

0x171a,	// (0x00096a1a) notes_bg_pane_g5

0x1722,	// (0x00096a22) notes_bg_pane_g6

0x172a,	// (0x00096a2a) notes_bg_pane_g7

0x1732,	// (0x00096a32) notes_bg_pane_g8

0x173a,	// (0x00096a3a) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x000a449d) notes_bg_pane_g

0x1742,	// (0x00096a42) list_notes_text_pane_ParamLimits

0x1742,	// (0x00096a42) list_notes_text_pane

0x9d4e,	// (0x0009f04e) list_notes_text_pane_g1

0x176a,	// (0x00096a6a) list_notes_text_pane_t1

0x1778,	// (0x00096a78) listscroll_cale_week_pane

0x179d,	// (0x00096a9d) bg_cale_heading_pane

0x9d71,	// (0x0009f071) bg_cale_pane_cp01

0x17bd,	// (0x00096abd) cale_week_corner_pane

0x17d7,	// (0x00096ad7) cale_week_day_heading_pane

0x17f7,	// (0x00096af7) cale_week_scroll_pane_g1

0x1812,	// (0x00096b12) cale_week_scroll_pane_g2

0x1825,	// (0x00096b25) cale_week_scroll_pane_g3

0x1838,	// (0x00096b38) cale_week_scroll_pane_g4

0x184b,	// (0x00096b4b) cale_week_scroll_pane_g5

0x185e,	// (0x00096b5e) cale_week_scroll_pane_g6

0x1871,	// (0x00096b71) cale_week_scroll_pane_g7

0x1886,	// (0x00096b86) cale_week_scroll_pane_g8

0x189b,	// (0x00096b9b) cale_week_scroll_pane_g9

0x18ae,	// (0x00096bae) cale_week_scroll_pane_g10

0x18c1,	// (0x00096bc1) cale_week_scroll_pane_g11

0x18d4,	// (0x00096bd4) cale_week_scroll_pane_g12

0x18eb,	// (0x00096beb) cale_week_scroll_pane_g13

0x1906,	// (0x00096c06) cale_week_scroll_pane_g14

0x1921,	// (0x00096c21) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x000a44ac) cale_week_scroll_pane_g

0x1951,	// (0x00096c51) cale_week_time_pane

0x1966,	// (0x00096c66) grid_cale_week_pane

0x9da0,	// (0x0009f0a0) scroll_pane_cp08

0x1985,	// (0x00096c85) cell_cale_week_pane_ParamLimits

0x1985,	// (0x00096c85) cell_cale_week_pane

0x19e7,	// (0x00096ce7) cale_week_day_heading_pane_t1

0x1a02,	// (0x00096d02) cale_week_day_heading_pane_t2

0x1a1d,	// (0x00096d1d) cale_week_day_heading_pane_t3

0x1a38,	// (0x00096d38) cale_week_day_heading_pane_t4

0x1a53,	// (0x00096d53) cale_week_day_heading_pane_t5

0x1a6e,	// (0x00096d6e) cale_week_day_heading_pane_t6

0x1a89,	// (0x00096d89) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x000a44cd) cale_week_day_heading_pane_t

0x9dbd,	// (0x0009f0bd) bg_cale_side_pane

0x1aa4,	// (0x00096da4) cale_week_time_pane_t1

0x1abe,	// (0x00096dbe) cale_week_time_pane_t2

0x1ad8,	// (0x00096dd8) cale_week_time_pane_t3

0x1af2,	// (0x00096df2) cale_week_time_pane_t4

0x1b0c,	// (0x00096e0c) cale_week_time_pane_t5

0x1b26,	// (0x00096e26) cale_week_time_pane_t6

0x1b44,	// (0x00096e44) cale_week_time_pane_t7

0x1b66,	// (0x00096e66) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x000a44dc) cale_week_time_pane_t

0x1b8a,	// (0x00096e8a) cell_cale_week_pane_g2

0x1bae,	// (0x00096eae) cell_cale_week_pane_g3_ParamLimits

0x1bae,	// (0x00096eae) cell_cale_week_pane_g3

0x9dcb,	// (0x0009f0cb) grid_highlight_pane_cp07

0x9dd3,	// (0x0009f0d3) listscroll_gms_pane

0x9ddd,	// (0x0009f0dd) grid_gms_pane

0x9de6,	// (0x0009f0e6) listscroll_gms_pane_g1

0x9dee,	// (0x0009f0ee) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x000a44ed) listscroll_gms_pane_g

0x1bc6,	// (0x00096ec6) scroll_pane_cp010

0x1bd1,	// (0x00096ed1) cell_gms_pane_ParamLimits

0x1bd1,	// (0x00096ed1) cell_gms_pane

0x1be4,	// (0x00096ee4) cell_gms_pane_g1

0x9df6,	// (0x0009f0f6) cell_gms_pane_g2

0x9dfe,	// (0x0009f0fe) cell_gms_pane_g3

0x9e07,	// (0x0009f107) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x000a44f2) cell_gms_pane_g

0x9e10,	// (0x0009f110) grid_highlight_pane_cp09

0x421a,	// (0x0009951a) phob_pre_status_pane_g1

0x4222,	// (0x00099522) phob_pre_status_pane_g2

0x422a,	// (0x0009952a) phob_pre_status_pane_g3

0x4232,	// (0x00099532) phob_pre_status_pane_g4

0x0004,

0xf5dd,	// (0x000a48dd) phob_pre_status_pane_g

0x4242,	// (0x00099542) phob_pre_status_pane_t1

0x4252,	// (0x00099552) phob_pre_status_pane_t2

0x4262,	// (0x00099562) phob_pre_status_pane_t3

0x0002,

0xf5e8,	// (0x000a48e8) phob_pre_status_pane_t

0x9e18,	// (0x0009f118) bg_list_pane_cp05

0x1bf4,	// (0x00096ef4) grid_vorec_pane

0x1bfe,	// (0x00096efe) vorec_t1

0x1c0c,	// (0x00096f0c) vorec_t2

0x1c1a,	// (0x00096f1a) vorec_t3

0x1c28,	// (0x00096f28) vorec_t4

0x9cc4,	// (0x0009efc4) vorec_t5

0x9cd2,	// (0x0009efd2) vorec_t6

0x0004,

0xf1fb,	// (0x000a44fb) vorec_t

0x9ce0,	// (0x0009efe0) wait_bar_pane_cp01

0x1c44,	// (0x00096f44) cell_vorec_pane_ParamLimits

0x1c44,	// (0x00096f44) cell_vorec_pane

0x1c57,	// (0x00096f57) cell_vorec_pane_g1

0xec73,	// (0x000a3f73) grid_highlight_pane_cp05

0x1c71,	// (0x00096f71) cams_zoom_pane

0x1c7d,	// (0x00096f7d) image_vga_pane

0x1c8c,	// (0x00096f8c) main_camera_pane_g1

0x1c9a,	// (0x00096f9a) main_camera_pane_g2

0x1ca6,	// (0x00096fa6) main_camera_pane_g3

0x1cb2,	// (0x00096fb2) main_camera_pane_g4

0x1cbe,	// (0x00096fbe) main_camera_pane_g5

0x1cca,	// (0x00096fca) main_camera_pane_g6

0x1cd6,	// (0x00096fd6) main_camera_pane_g7

0x0007,

0xf206,	// (0x000a4506) main_camera_pane_g

0x1ce2,	// (0x00096fe2) main_camera_pane_t1

0x1cf4,	// (0x00096ff4) main_camera_pane_t2

0x0001,

0xf217,	// (0x000a4517) main_camera_pane_t

0x1d15,	// (0x00097015) cams_zoom_pane_cp_ParamLimits

0x1d15,	// (0x00097015) cams_zoom_pane_cp

0x1d39,	// (0x00097039) image_cif_pane_ParamLimits

0x1d39,	// (0x00097039) image_cif_pane

0x1d57,	// (0x00097057) image_subqcif_pane

0x1d5f,	// (0x0009705f) main_video_pane_g1_ParamLimits

0x1d5f,	// (0x0009705f) main_video_pane_g1

0x1d7f,	// (0x0009707f) main_video_pane_g2_ParamLimits

0x1d7f,	// (0x0009707f) main_video_pane_g2

0x1daf,	// (0x000970af) main_video_pane_g3_ParamLimits

0x1daf,	// (0x000970af) main_video_pane_g3

0x1dd8,	// (0x000970d8) main_video_pane_g4_ParamLimits

0x1dd8,	// (0x000970d8) main_video_pane_g4

0x1e01,	// (0x00097101) main_video_pane_g5_ParamLimits

0x1e01,	// (0x00097101) main_video_pane_g5

0x9e2c,	// (0x0009f12c) main_video_pane_g6_ParamLimits

0x9e2c,	// (0x0009f12c) main_video_pane_g6

0x0006,

0xf21c,	// (0x000a451c) main_video_pane_g_ParamLimits

0xf21c,	// (0x000a451c) main_video_pane_g

0x1e23,	// (0x00097123) main_video_pane_t1_ParamLimits

0x1e23,	// (0x00097123) main_video_pane_t1

0x9e46,	// (0x0009f146) cams_zoom_pane_g1

0x9e4f,	// (0x0009f14f) cams_zoom_pane_g2

0x9e58,	// (0x0009f158) cams_zoom_pane_g3

0x9e61,	// (0x0009f161) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x000a452b) cams_zoom_pane_g

0x1e6d,	// (0x0009716d) grid_cams_pane

0x1e7b,	// (0x0009717b) linegrid_cams_pane

0x1e89,	// (0x00097189) cell_cams_pane_ParamLimits

0x1e89,	// (0x00097189) cell_cams_pane

0x9e6a,	// (0x0009f16a) cams_burst_image_pane

0x9e72,	// (0x0009f172) cell_cams_pane_g1

0xec73,	// (0x000a3f73) grid_highlight_pane_cp03

0xefe8,	// (0x000a42e8) mp_bg_pane_g1

0xec73,	// (0x000a3f73) bg_list_pane_cp03

0xbb95,	// (0x000a0e95) bg_mp_pane

0xbb9d,	// (0x000a0e9d) grid_mp_pane

0xbba5,	// (0x000a0ea5) media_player_g1

0xbbad,	// (0x000a0ead) media_player_t1

0xbbbb,	// (0x000a0ebb) media_player_t2

0xbbc9,	// (0x000a0ec9) media_player_t3

0xbbd7,	// (0x000a0ed7) media_player_t4

0xbbe5,	// (0x000a0ee5) media_player_t5

0xbbf3,	// (0x000a0ef3) media_player_t6

0xbc01,	// (0x000a0f01) media_player_t7

0x0006,

0xf5c7,	// (0x000a48c7) media_player_t

0xbc0f,	// (0x000a0f0f) wait_bar_pane_cp02

0xf5ac,	// (0x000a48ac) main_usb_pane_t

0x4211,	// (0x00099511) cell_mp_pane

0xefe8,	// (0x000a42e8) cell_mp_pane_g1

0xec73,	// (0x000a3f73) grid_highlight_pane_cp06

0x9e7a,	// (0x0009f17a) grid_skin_colour_pane

0x9e82,	// (0x0009f182) list_highlight_pane_cp03

0x1f93,	// (0x00097293) skin_g1

0x9e8a,	// (0x0009f18a) skin_t1

0x9e99,	// (0x0009f199) skin_t2

0x0001,

0xf260,	// (0x000a4560) skin_t

0x1f9d,	// (0x0009729d) cell_skin_colour_pane_ParamLimits

0x1f9d,	// (0x0009729d) cell_skin_colour_pane

0x9ea7,	// (0x0009f1a7) cell_skin_colour_pane_g1

0x2021,	// (0x00097321) call_video_g1_ParamLimits

0x2021,	// (0x00097321) call_video_g1

0x2031,	// (0x00097331) call_video_g2_ParamLimits

0x2031,	// (0x00097331) call_video_g2

0x0001,

0xf265,	// (0x000a4565) call_video_g_ParamLimits

0xf265,	// (0x000a4565) call_video_g

0x208b,	// (0x0009738b) call_video_uplink_pane_cp1_ParamLimits

0x208b,	// (0x0009738b) call_video_uplink_pane_cp1

0x9eb9,	// (0x0009f1b9) call_video_uplink_pane_cp2

0x2157,	// (0x00097457) video_down_crop_pane_ParamLimits

0x2157,	// (0x00097457) video_down_crop_pane

0x2255,	// (0x00097555) video_down_pane_ParamLimits

0x2255,	// (0x00097555) video_down_pane

0x9ec1,	// (0x0009f1c1) video_down_subqcif_pane_ParamLimits

0x9ec1,	// (0x0009f1c1) video_down_subqcif_pane

0x9ed9,	// (0x0009f1d9) video_down_subqcif_pane_cp_ParamLimits

0x9ed9,	// (0x0009f1d9) video_down_subqcif_pane_cp

0x9eff,	// (0x0009f1ff) im_reading_pane_ParamLimits

0x9eff,	// (0x0009f1ff) im_reading_pane

0x2375,	// (0x00097675) im_writing_pane_ParamLimits

0x2375,	// (0x00097675) im_writing_pane

0x2393,	// (0x00097693) im_reading_pane_t1

0x9f19,	// (0x0009f219) list_im_pane

0x9f2a,	// (0x0009f22a) scroll_pane_cp07

0x23e7,	// (0x000976e7) im_writing_pane_t1_ParamLimits

0x23e7,	// (0x000976e7) im_writing_pane_t1

0x9f43,	// (0x0009f243) im_writing_pane_t2_ParamLimits

0x9f43,	// (0x0009f243) im_writing_pane_t2

0x0001,

0xf26f,	// (0x000a456f) im_writing_pane_t_ParamLimits

0xf26f,	// (0x000a456f) im_writing_pane_t

0xec73,	// (0x000a3f73) input_focus_pane_cp04

0xec73,	// (0x000a3f73) input_focus_pane_cp05

0x23fc,	// (0x000976fc) list_im_single_pane_ParamLimits

0x23fc,	// (0x000976fc) list_im_single_pane

0x2420,	// (0x00097720) list_single_im_pane_t1

0x41d5,	// (0x000994d5) blid_accuracy_pane

0x41dd,	// (0x000994dd) blid_compass_pane

0x41e7,	// (0x000994e7) main_location_t1

0x41f5,	// (0x000994f5) main_location_t2

0x4203,	// (0x00099503) main_location_t3

0x0002,

0xf5d6,	// (0x000a48d6) main_location_t

0xec73,	// (0x000a3f73) aid_levels_location

0xefe8,	// (0x000a42e8) blid_accuracy_pane_g1

0xefe8,	// (0x000a42e8) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x000a45d1) blid_accuracy_pane_g

0x9f8b,	// (0x0009f28b) wml_content_pane

0x9fc9,	// (0x0009f2c9) wml_button_pane_ParamLimits

0x9fc9,	// (0x0009f2c9) wml_button_pane

0x242f,	// (0x0009772f) wml_list_single_large_pane_ParamLimits

0x242f,	// (0x0009772f) wml_list_single_large_pane

0x2459,	// (0x00097759) wml_list_single_medium_pane_ParamLimits

0x2459,	// (0x00097759) wml_list_single_medium_pane

0x248a,	// (0x0009778a) wml_list_single_small_pane_ParamLimits

0x248a,	// (0x0009778a) wml_list_single_small_pane

0x9fdd,	// (0x0009f2dd) wml_selection_box_pane_ParamLimits

0x9fdd,	// (0x0009f2dd) wml_selection_box_pane

0x9ff0,	// (0x0009f2f0) wml_list_single_pane_t1

0x9fff,	// (0x0009f2ff) wml_list_single_medium_pane_t1

0xa00e,	// (0x0009f30e) wml_list_single_large_pane_t1

0xa01d,	// (0x0009f31d) input_focus_pane_cp02_ParamLimits

0xa01d,	// (0x0009f31d) input_focus_pane_cp02

0xa030,	// (0x0009f330) wml_selection_box_pane_g1

0xa039,	// (0x0009f339) wml_selection_box_pane_t1_ParamLimits

0xa039,	// (0x0009f339) wml_selection_box_pane_t1

0xeece,	// (0x000a41ce) bg_wml_button_pane_ParamLimits

0xeece,	// (0x000a41ce) bg_wml_button_pane

0xa051,	// (0x0009f351) wml_button_pane_g1

0xa059,	// (0x0009f359) wml_button_pane_t1

0xa051,	// (0x0009f351) wml_button_bg_pane_g1

0xa069,	// (0x0009f369) wml_button_bg_pane_g2

0xa071,	// (0x0009f371) wml_button_bg_pane_g3

0xa079,	// (0x0009f379) wml_button_bg_pane_g4

0xa081,	// (0x0009f381) wml_button_bg_pane_g5

0xa089,	// (0x0009f389) wml_button_bg_pane_g6

0xa091,	// (0x0009f391) wml_button_bg_pane_g7

0xa099,	// (0x0009f399) wml_button_bg_pane_g8

0xa0a1,	// (0x0009f3a1) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x000a4574) wml_button_bg_pane_g

0x24c4,	// (0x000977c4) bg_list_pane_cp02

0xa0a9,	// (0x0009f3a9) mce_header_pane_ParamLimits

0xa0a9,	// (0x0009f3a9) mce_header_pane

0xa0bf,	// (0x0009f3bf) mce_icon_pane

0xa0bf,	// (0x0009f3bf) mce_image_pane

0xa0c8,	// (0x0009f3c8) mce_text_pane_ParamLimits

0xa0c8,	// (0x0009f3c8) mce_text_pane

0x24ce,	// (0x000977ce) scroll_pane_cp03

0x9fc1,	// (0x0009f2c1) scroll_pane_cp04

0xa0db,	// (0x0009f3db) scroll_pane_cp05_ParamLimits

0xa0db,	// (0x0009f3db) scroll_pane_cp05

0x24d8,	// (0x000977d8) mce_header_field_pane_ParamLimits

0x24d8,	// (0x000977d8) mce_header_field_pane

0x24f8,	// (0x000977f8) mce_header_field_pane_2_ParamLimits

0x24f8,	// (0x000977f8) mce_header_field_pane_2

0x250e,	// (0x0009780e) mce_header_field_pane_3

0x2516,	// (0x00097816) list_single_mce_message_pane_ParamLimits

0x2516,	// (0x00097816) list_single_mce_message_pane

0x2541,	// (0x00097841) list_single_mce_smart_pane_ParamLimits

0x2541,	// (0x00097841) list_single_mce_smart_pane

0xa0e7,	// (0x0009f3e7) input_focus_pane_cp03

0xa0f0,	// (0x0009f3f0) list_header_data_pane

0x2577,	// (0x00097877) mce_header_field_pane_t1

0x2585,	// (0x00097885) list_single_mce_header_pane_ParamLimits

0x2585,	// (0x00097885) list_single_mce_header_pane

0xa0f8,	// (0x0009f3f8) list_single_mce_header_pane_t1

0xa107,	// (0x0009f407) list_single_mce_message_pane_g1

0xa10f,	// (0x0009f40f) list_single_mce_message_pane_t1

0x25d7,	// (0x000978d7) bg_cale_heading_pane_cp01_ParamLimits

0x25d7,	// (0x000978d7) bg_cale_heading_pane_cp01

0xa11d,	// (0x0009f41d) bg_cale_pane_cp02_ParamLimits

0xa11d,	// (0x0009f41d) bg_cale_pane_cp02

0x2625,	// (0x00097925) cale_month_corner_pane

0x2644,	// (0x00097944) cale_month_day_heading_pane_ParamLimits

0x2644,	// (0x00097944) cale_month_day_heading_pane

0x26aa,	// (0x000979aa) cale_month_pane_g1_ParamLimits

0x26aa,	// (0x000979aa) cale_month_pane_g1

0x26ed,	// (0x000979ed) cale_month_pane_g2_ParamLimits

0x26ed,	// (0x000979ed) cale_month_pane_g2

0x2725,	// (0x00097a25) cale_month_pane_g3_ParamLimits

0x2725,	// (0x00097a25) cale_month_pane_g3

0x2771,	// (0x00097a71) cale_month_pane_g4_ParamLimits

0x2771,	// (0x00097a71) cale_month_pane_g4

0x27bd,	// (0x00097abd) cale_month_pane_g5_ParamLimits

0x27bd,	// (0x00097abd) cale_month_pane_g5

0x2809,	// (0x00097b09) cale_month_pane_g6_ParamLimits

0x2809,	// (0x00097b09) cale_month_pane_g6

0x2855,	// (0x00097b55) cale_month_pane_g7_ParamLimits

0x2855,	// (0x00097b55) cale_month_pane_g7

0x28b9,	// (0x00097bb9) cale_month_pane_g8_ParamLimits

0x28b9,	// (0x00097bb9) cale_month_pane_g8

0x291d,	// (0x00097c1d) cale_month_pane_g9_ParamLimits

0x291d,	// (0x00097c1d) cale_month_pane_g9

0x297b,	// (0x00097c7b) cale_month_pane_g10_ParamLimits

0x297b,	// (0x00097c7b) cale_month_pane_g10

0x29d7,	// (0x00097cd7) cale_month_pane_g11_ParamLimits

0x29d7,	// (0x00097cd7) cale_month_pane_g11

0x2a2b,	// (0x00097d2b) cale_month_pane_g12_ParamLimits

0x2a2b,	// (0x00097d2b) cale_month_pane_g12

0x2a81,	// (0x00097d81) cale_month_pane_g13_ParamLimits

0x2a81,	// (0x00097d81) cale_month_pane_g13

0x000c,

0xf287,	// (0x000a4587) cale_month_pane_g_ParamLimits

0xf287,	// (0x000a4587) cale_month_pane_g

0x2ad7,	// (0x00097dd7) cale_month_week_pane

0x2afb,	// (0x00097dfb) grid_cale_month_pane_ParamLimits

0x2afb,	// (0x00097dfb) grid_cale_month_pane

0x2b54,	// (0x00097e54) cale_month_day_heading_pane_t1

0x2bda,	// (0x00097eda) cale_month_day_heading_pane_t2

0x2c53,	// (0x00097f53) cale_month_day_heading_pane_t3

0x2ccc,	// (0x00097fcc) cale_month_day_heading_pane_t4

0x2d45,	// (0x00098045) cale_month_day_heading_pane_t5

0x2dbe,	// (0x000980be) cale_month_day_heading_pane_t6

0x2e37,	// (0x00098137) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x000a45a2) cale_month_day_heading_pane_t

0x9dbd,	// (0x0009f0bd) bg_cale_side_pane_cp01

0x2ec8,	// (0x000981c8) cale_month_week_pane_t1

0x2ee1,	// (0x000981e1) cale_month_week_pane_t2

0x2efa,	// (0x000981fa) cale_month_week_pane_t3

0x2f13,	// (0x00098213) cale_month_week_pane_t4

0x2f2c,	// (0x0009822c) cale_month_week_pane_t5

0x2f4d,	// (0x0009824d) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x000a45b1) cale_month_week_pane_t

0x2f6e,	// (0x0009826e) cell_cale_month_pane_ParamLimits

0x2f6e,	// (0x0009826e) cell_cale_month_pane

0x30ba,	// (0x000983ba) cell_cale_month_pane_g1

0x30c6,	// (0x000983c6) cell_cale_month_pane_t1_ParamLimits

0x30c6,	// (0x000983c6) cell_cale_month_pane_t1

0x9dcb,	// (0x0009f0cb) grid_highlight_pane_cp08

0xefe8,	// (0x000a42e8) main_smil_g1

0x30f2,	// (0x000983f2) smil_status_pane

0xa15c,	// (0x0009f45c) smil_text_pane

0xbab5,	// (0x000a0db5) bg_popup_call3_rect_pane_g8

0xbabd,	// (0x000a0dbd) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x000a486a) bg_popup_call3_rect_pane_g

0xbd04,	// (0x000a1004) smil_status_volume_pane_g1

0xa166,	// (0x0009f466) smil_status_pane_t1

0x460d,	// (0x0009990d) volume_smil_pane

0xa17d,	// (0x0009f47d) list_smil_text_pane

0x3105,	// (0x00098405) scroll_pane_cp011

0x3110,	// (0x00098410) smil_text_list_pane_t1_ParamLimits

0x3110,	// (0x00098410) smil_text_list_pane_t1

0x3188,	// (0x00098488) aid_volume_smil_ParamLimits

0x3188,	// (0x00098488) aid_volume_smil

0xefe8,	// (0x000a42e8) smil_volume_pane_g1

0xefe8,	// (0x000a42e8) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x000a45d1) smil_volume_pane_g

0x1778,	// (0x00096a78) listscroll_cale_day_pane

0xa187,	// (0x0009f487) bg_cale_pane

0xa19f,	// (0x0009f49f) list_cale_pane

0xa1c2,	// (0x0009f4c2) scroll_pane_cp09

0xa1d3,	// (0x0009f4d3) cale_bg_pane_g1

0xa1db,	// (0x0009f4db) cale_bg_pane_g2

0xa1e3,	// (0x0009f4e3) cale_bg_pane_g3

0xa1eb,	// (0x0009f4eb) cale_bg_pane_g4

0xa1f3,	// (0x0009f4f3) cale_bg_pane_g5

0xa1fb,	// (0x0009f4fb) cale_bg_pane_g6

0xa203,	// (0x0009f503) cale_bg_pane_g7

0xa20b,	// (0x0009f50b) cale_bg_pane_g8

0xa213,	// (0x0009f513) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x000a45d6) cale_bg_pane_g

0x31b2,	// (0x000984b2) list_cale_time_pane_ParamLimits

0x31b2,	// (0x000984b2) list_cale_time_pane

0xa21b,	// (0x0009f51b) list_cale_time_pane_g1_ParamLimits

0xa21b,	// (0x0009f51b) list_cale_time_pane_g1

0xa227,	// (0x0009f527) list_cale_time_pane_g2_ParamLimits

0xa227,	// (0x0009f527) list_cale_time_pane_g2

0x31d4,	// (0x000984d4) list_cale_time_pane_g3_ParamLimits

0x31d4,	// (0x000984d4) list_cale_time_pane_g3

0x31e2,	// (0x000984e2) list_cale_time_pane_g4_ParamLimits

0x31e2,	// (0x000984e2) list_cale_time_pane_g4

0x31f0,	// (0x000984f0) list_cale_time_pane_g5_ParamLimits

0x31f0,	// (0x000984f0) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x000a45e9) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x000a45e9) list_cale_time_pane_g

0xa241,	// (0x0009f541) list_cale_time_pane_t1_ParamLimits

0xa241,	// (0x0009f541) list_cale_time_pane_t1

0xa269,	// (0x0009f569) list_cale_time_pane_t2_ParamLimits

0xa269,	// (0x0009f569) list_cale_time_pane_t2

0x3592,	// (0x00098892) aid_blid_cardinal_pane

0x35d4,	// (0x000988d4) compass_pane_t4

0xa291,	// (0x0009f591) list_cale_time_pane_t4_ParamLimits

0xa291,	// (0x0009f591) list_cale_time_pane_t4

0x35e2,	// (0x000988e2) compass_pane_t5

0x35f2,	// (0x000988f2) compass_pane_t6

0x3600,	// (0x00098900) compass_pane_t7

0xa742,	// (0x0009fa42) navi_pane_cc_t1

0xa91f,	// (0x0009fc1f) aid_phob_thumbnail_center_pane

0x3cdb,	// (0x00098fdb) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x000a45f6) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x000a45f6) list_cale_time_pane_t

0xe84b,	// (0x000a3b4b) bg_popup_window_pane_cp02_ParamLimits

0xe84b,	// (0x000a3b4b) bg_popup_window_pane_cp02

0xa2b9,	// (0x0009f5b9) heading_pane_cp01_ParamLimits

0xa2b9,	// (0x0009f5b9) heading_pane_cp01

0xa2c5,	// (0x0009f5c5) loc_req_pane_ParamLimits

0xa2c5,	// (0x0009f5c5) loc_req_pane

0xa2d5,	// (0x0009f5d5) loc_type_pane_ParamLimits

0xa2d5,	// (0x0009f5d5) loc_type_pane

0xa2e7,	// (0x0009f5e7) loc_type_pane_t1_ParamLimits

0xa2e7,	// (0x0009f5e7) loc_type_pane_t1

0xa2f9,	// (0x0009f5f9) loc_type_pane_t2_ParamLimits

0xa2f9,	// (0x0009f5f9) loc_type_pane_t2

0xa30b,	// (0x0009f60b) loc_type_pane_t3_ParamLimits

0xa30b,	// (0x0009f60b) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x000a45fd) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x000a45fd) loc_type_pane_t

0xa31d,	// (0x0009f61d) list_loc_req_pane

0xa327,	// (0x0009f627) scroll_pane_cp012

0x31fe,	// (0x000984fe) list_single_loc_request_popup_menu_pane_ParamLimits

0x31fe,	// (0x000984fe) list_single_loc_request_popup_menu_pane

0xa332,	// (0x0009f632) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa332,	// (0x0009f632) list_single_loc_request_popup_menu_pane_g1

0xa33e,	// (0x0009f63e) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa33e,	// (0x0009f63e) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x000a4604) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x000a4604) list_single_loc_request_popup_menu_pane_g

0xa34a,	// (0x0009f64a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa34a,	// (0x0009f64a) list_single_loc_request_popup_menu_pane_t1

0x3210,	// (0x00098510) bg_popup_window_pane_cp03_ParamLimits

0x3210,	// (0x00098510) bg_popup_window_pane_cp03

0x321e,	// (0x0009851e) heading_loc_req_pane_ParamLimits

0x321e,	// (0x0009851e) heading_loc_req_pane

0x322a,	// (0x0009852a) popup_dyc_status_message_window_g1_ParamLimits

0x322a,	// (0x0009852a) popup_dyc_status_message_window_g1

0x3236,	// (0x00098536) popup_dyc_status_message_window_t1_ParamLimits

0x3236,	// (0x00098536) popup_dyc_status_message_window_t1

0x3248,	// (0x00098548) popup_dyc_status_message_window_t2_ParamLimits

0x3248,	// (0x00098548) popup_dyc_status_message_window_t2

0x325a,	// (0x0009855a) popup_dyc_status_message_window_t3_ParamLimits

0x325a,	// (0x0009855a) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x000a4609) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x000a4609) popup_dyc_status_message_window_t

0xec73,	// (0x000a3f73) bg_heading_pane_cp01

0xa360,	// (0x0009f660) heading_loc_req_pane_g1

0xa368,	// (0x0009f668) heading_loc_req_pane_g2

0xa370,	// (0x0009f670) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x000a4610) heading_loc_req_pane_g

0xa378,	// (0x0009f678) heading_loc_req_pane_t1

0xa387,	// (0x0009f687) bg_popup_sub_pane_cp01_ParamLimits

0xa387,	// (0x0009f687) bg_popup_sub_pane_cp01

0xa395,	// (0x0009f695) popup_cale_events_window_g1_ParamLimits

0xa395,	// (0x0009f695) popup_cale_events_window_g1

0xa3b5,	// (0x0009f6b5) popup_cale_events_window_g2_ParamLimits

0xa3b5,	// (0x0009f6b5) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x000a4644) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x000a4644) popup_cale_events_window_g

0xa3d5,	// (0x0009f6d5) popup_cale_events_window_t1_ParamLimits

0xa3d5,	// (0x0009f6d5) popup_cale_events_window_t1

0xa3e7,	// (0x0009f6e7) popup_cale_events_window_t2_ParamLimits

0xa3e7,	// (0x0009f6e7) popup_cale_events_window_t2

0xa425,	// (0x0009f725) popup_cale_events_window_t3_ParamLimits

0xa425,	// (0x0009f725) popup_cale_events_window_t3

0xa45f,	// (0x0009f75f) popup_cale_events_window_t4_ParamLimits

0xa45f,	// (0x0009f75f) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x000a4649) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x000a4649) popup_cale_events_window_t

0x335f,	// (0x0009865f) call_type_pane

0xa495,	// (0x0009f795) popup_call_status_window_g1

0x336b,	// (0x0009866b) popup_call_status_window_g2

0x3377,	// (0x00098677) popup_call_status_window_g3

0x0002,

0xf352,	// (0x000a4652) popup_call_status_window_g

0xa4a3,	// (0x0009f7a3) call_type_pane_g1

0xa4ac,	// (0x0009f7ac) call_type_pane_g2

0x0001,

0xf359,	// (0x000a4659) call_type_pane_g

0xec73,	// (0x000a3f73) bg_popup_sub_pane_cp02

0xa4b5,	// (0x0009f7b5) listscroll_popup_wml_pane

0xa4bd,	// (0x0009f7bd) list_wml_pane

0xa4c7,	// (0x0009f7c7) scroll_pane_cp013

0xa4d2,	// (0x0009f7d2) list_single_graphic_popup_wml_pane_ParamLimits

0xa4d2,	// (0x0009f7d2) list_single_graphic_popup_wml_pane

0xefe8,	// (0x000a42e8) list_single_graphic_popup_wml_pane_g1

0xa4e6,	// (0x0009f7e6) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x000a465e) list_single_graphic_popup_wml_pane_g

0xa4ee,	// (0x0009f7ee) list_single_graphic_popup_wml_pane_t1

0xa504,	// (0x0009f804) aid_call_pane

0xeec6,	// (0x000a41c6) popup_clock_analogue_window_g1

0xeec6,	// (0x000a41c6) popup_clock_analogue_window_g2

0x3383,	// (0x00098683) popup_clock_analogue_window_g3

0x3383,	// (0x00098683) popup_clock_analogue_window_g4

0xefe8,	// (0x000a42e8) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x000a4663) popup_clock_analogue_window_g

0x338b,	// (0x0009868b) popup_clock_analogue_window_t1

0x3399,	// (0x00098699) clock_digital_number_pane_ParamLimits

0x3399,	// (0x00098699) clock_digital_number_pane

0x33a5,	// (0x000986a5) clock_digital_number_pane_cp02_ParamLimits

0x33a5,	// (0x000986a5) clock_digital_number_pane_cp02

0x33b1,	// (0x000986b1) clock_digital_number_pane_cp03_ParamLimits

0x33b1,	// (0x000986b1) clock_digital_number_pane_cp03

0x33bd,	// (0x000986bd) clock_digital_number_pane_cp04_ParamLimits

0x33bd,	// (0x000986bd) clock_digital_number_pane_cp04

0x33cd,	// (0x000986cd) clock_digital_separator_pane_ParamLimits

0x33cd,	// (0x000986cd) clock_digital_separator_pane

0x33d9,	// (0x000986d9) popup_clock_digital_window_t1

0xefe8,	// (0x000a42e8) clock_digital_number_pane_g1

0xefe8,	// (0x000a42e8) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x000a45d1) clock_digital_number_pane_g

0xefe8,	// (0x000a42e8) clock_digital_separator_pane_g1

0xefe8,	// (0x000a42e8) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x000a45d1) clock_digital_separator_pane_g

0xec73,	// (0x000a3f73) bg_popup_window_pane_cp04

0xa50c,	// (0x0009f80c) heading_pane_cp03

0xa514,	// (0x0009f814) listscroll_popup_gms_pane

0xa51c,	// (0x0009f81c) grid_large_graphic_popup_pane

0xa526,	// (0x0009f826) listscroll_popup_gms_pane_g1

0xa52e,	// (0x0009f82e) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x000a466e) listscroll_popup_gms_pane_g

0x9fc1,	// (0x0009f2c1) scroll_pane_cp014

0x33f6,	// (0x000986f6) cell_large_graphic_popup_pane_ParamLimits

0x33f6,	// (0x000986f6) cell_large_graphic_popup_pane

0x340e,	// (0x0009870e) cell_large_graphic_popup_pane_g1_ParamLimits

0x340e,	// (0x0009870e) cell_large_graphic_popup_pane_g1

0xa536,	// (0x0009f836) cell_large_graphic_popup_pane_g2_ParamLimits

0xa536,	// (0x0009f836) cell_large_graphic_popup_pane_g2

0xa542,	// (0x0009f842) cell_large_graphic_popup_pane_g3_ParamLimits

0xa542,	// (0x0009f842) cell_large_graphic_popup_pane_g3

0xa54f,	// (0x0009f84f) cell_large_graphic_popup_pane_g4_ParamLimits

0xa54f,	// (0x0009f84f) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x000a4673) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x000a4673) cell_large_graphic_popup_pane_g

0xa55f,	// (0x0009f85f) grid_highlight_pane_cp010

0xefe8,	// (0x000a42e8) bg_popup_call_pane_g1

0xa569,	// (0x0009f869) list_single_graphic_popup_conf_pane_ParamLimits

0xa569,	// (0x0009f869) list_single_graphic_popup_conf_pane

0xa57c,	// (0x0009f87c) list_highlight_pane_cp01

0xa585,	// (0x0009f885) list_single_graphic_popup_conf_pane_g1

0xa58d,	// (0x0009f88d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x000a467c) list_single_graphic_popup_conf_pane_g

0xa595,	// (0x0009f895) list_single_graphic_popup_conf_pane_t1

0xa5a3,	// (0x0009f8a3) linegrid_cams_pane_g1

0x341a,	// (0x0009871a) linegrid_cams_pane_g2

0x9dfe,	// (0x0009f0fe) linegrid_cams_pane_g3

0xa5ac,	// (0x0009f8ac) linegrid_cams_pane_g4

0x3423,	// (0x00098723) linegrid_cams_pane_g5

0x342c,	// (0x0009872c) linegrid_cams_pane_g6

0x9e07,	// (0x0009f107) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x000a4681) linegrid_cams_pane_g

0xa5b5,	// (0x0009f8b5) popup_clock_analogue_window

0xa5b5,	// (0x0009f8b5) popup_clock_digital_window

0xec73,	// (0x000a3f73) popup_phob_thumbnail_window

0xefe8,	// (0x000a42e8) call_video_uplink_pane_g1

0xa5be,	// (0x0009f8be) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x000a4690) call_video_uplink_pane_g

0xa5c6,	// (0x0009f8c6) video_uplink_pane

0xa5ce,	// (0x0009f8ce) mce_image_pane_g1

0x3435,	// (0x00098735) mce_image_pane_g2

0x343f,	// (0x0009873f) mce_image_pane_g3

0x3447,	// (0x00098747) mce_image_pane_g4

0x344f,	// (0x0009874f) mce_image_pane_g5

0x0004,

0xf395,	// (0x000a4695) mce_image_pane_g

0xa5d8,	// (0x0009f8d8) control_top_pane_stacon_cp01_ParamLimits

0xa5d8,	// (0x0009f8d8) control_top_pane_stacon_cp01

0xa5ec,	// (0x0009f8ec) uni_indicator_pane_stacon_cp01_ParamLimits

0xa5ec,	// (0x0009f8ec) uni_indicator_pane_stacon_cp01

0xa5fd,	// (0x0009f8fd) bg_popup_sub_pane_cp03

0xa607,	// (0x0009f907) chi_dic_find_pane

0x3457,	// (0x00098757) listscroll_chi_dic_pane

0xa60f,	// (0x0009f90f) main_pane_chidic_g1

0xa617,	// (0x0009f917) chi_dic_find_pane_t1

0xa625,	// (0x0009f925) find_chidic_pane

0xa62e,	// (0x0009f92e) chi_dic_list_pane_ParamLimits

0xa62e,	// (0x0009f92e) chi_dic_list_pane

0xa63f,	// (0x0009f93f) scroll_pane_cp020

0xa647,	// (0x0009f947) find_chidic_pane_t1

0xec73,	// (0x000a3f73) input_focus_pane_cp06

0x346b,	// (0x0009876b) list_chi_dic_pane_ParamLimits

0x346b,	// (0x0009876b) list_chi_dic_pane

0x3485,	// (0x00098785) list_chi_dic_pane_t1_ParamLimits

0x3485,	// (0x00098785) list_chi_dic_pane_t1

0xec73,	// (0x000a3f73) list_highlight_pane_cp020

0xa656,	// (0x0009f956) bg_cale_heading_pane_g1

0x3498,	// (0x00098798) bg_cale_heading_pane_g2

0x34a0,	// (0x000987a0) bg_cale_heading_pane_g3

0x34a8,	// (0x000987a8) bg_cale_heading_pane_g4

0x34b2,	// (0x000987b2) bg_cale_heading_pane_g5

0x34bc,	// (0x000987bc) bg_cale_heading_pane_g6

0x34c4,	// (0x000987c4) bg_cale_heading_pane_g7

0x34cc,	// (0x000987cc) bg_cale_heading_pane_g8

0x34d6,	// (0x000987d6) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x000a46a0) bg_cale_heading_pane_g

0xa656,	// (0x0009f956) bg_cale_side_pane_g1

0x34e0,	// (0x000987e0) bg_cale_side_pane_g2

0x34ea,	// (0x000987ea) bg_cale_side_pane_g3

0x34f4,	// (0x000987f4) bg_cale_side_pane_g4

0x34fe,	// (0x000987fe) bg_cale_side_pane_g5

0x3508,	// (0x00098808) bg_cale_side_pane_g6

0x3512,	// (0x00098812) bg_cale_side_pane_g7

0x351c,	// (0x0009881c) bg_cale_side_pane_g8

0x3524,	// (0x00098824) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x000a46b3) bg_cale_side_pane_g

0x352c,	// (0x0009882c) popup_call_status_window_ParamLimits

0x352c,	// (0x0009882c) popup_call_status_window

0xa65e,	// (0x0009f95e) stacon_top_pane

0xa666,	// (0x0009f966) status_pane_ParamLimits

0xa666,	// (0x0009f966) status_pane

0xa67b,	// (0x0009f97b) status_small_pane

0xa683,	// (0x0009f983) control_pane

0xec73,	// (0x000a3f73) stacon_bottom_pane

0xa68b,	// (0x0009f98b) list_single_mce_smart_pane_t1_ParamLimits

0xa68b,	// (0x0009f98b) list_single_mce_smart_pane_t1

0xa69e,	// (0x0009f99e) list_single_mce_smart_pane_t2_ParamLimits

0xa69e,	// (0x0009f99e) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x000a46c6) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x000a46c6) list_single_mce_smart_pane_t

0x3538,	// (0x00098838) compass_pane

0x3544,	// (0x00098844) main_location2_pane_t1

0x3558,	// (0x00098858) main_location2_pane_t2

0x356c,	// (0x0009886c) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x000a46cb) main_location2_pane_t

0xa6bd,	// (0x0009f9bd) compass_pane_g1_ParamLimits

0xa6bd,	// (0x0009f9bd) compass_pane_g1

0x35b6,	// (0x000988b6) compass_pane_t1

0x35c5,	// (0x000988c5) compass_pane_t2

0x0005,

0xf3d4,	// (0x000a46d4) compass_pane_t

0x3610,	// (0x00098910) text_secondary_cp61

0xa739,	// (0x0009fa39) navi_pane_cams_g5

0xa7b5,	// (0x0009fab5) navi_pane_im_t1

0xa7c3,	// (0x0009fac3) navi_pane_mp_g1_ParamLimits

0xa7c3,	// (0x0009fac3) navi_pane_mp_g1

0xa7d7,	// (0x0009fad7) navi_pane_mp_g2_ParamLimits

0xa7d7,	// (0x0009fad7) navi_pane_mp_g2

0xa7e3,	// (0x0009fae3) navi_pane_mp_g3_ParamLimits

0xa7e3,	// (0x0009fae3) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x000a46e8) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x000a46e8) navi_pane_mp_g

0xa7ef,	// (0x0009faef) navi_pane_mp_t1

0xa7fd,	// (0x0009fafd) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x000a46ef) navi_pane_mp_t

0xa868,	// (0x0009fb68) navi_pane_vt_g1

0xa7ef,	// (0x0009faef) navi_pane_vt_t1

0xa870,	// (0x0009fb70) navi_slider_pane

0x9e18,	// (0x0009f118) zooming_pane

0xa880,	// (0x0009fb80) navi_slider_pane_g1

0x364b,	// (0x0009894b) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x000a46f6) navi_slider_pane_g

0xa8a4,	// (0x0009fba4) aid_levels_zoom

0xa8ac,	// (0x0009fbac) zooming_pane_g1

0xa8b4,	// (0x0009fbb4) zooming_pane_g2

0xa8b4,	// (0x0009fbb4) zooming_pane_g3

0x0002,

0xf405,	// (0x000a4705) zooming_pane_g

0xa8bc,	// (0x0009fbbc) level_10_zoom

0xa8c5,	// (0x0009fbc5) level_11_zoom

0xa8ce,	// (0x0009fbce) level_1_zoom

0xa8d7,	// (0x0009fbd7) level_2_zoom

0xa8e0,	// (0x0009fbe0) level_3_zoom

0xa8e9,	// (0x0009fbe9) level_4_zoom

0xa8f2,	// (0x0009fbf2) level_5_zoom

0xa8fb,	// (0x0009fbfb) level_6_zoom

0xa904,	// (0x0009fc04) level_7_zoom

0xa90d,	// (0x0009fc0d) level_8_zoom

0xa916,	// (0x0009fc16) level_9_zoom

0xa927,	// (0x0009fc27) popup_phob_thumbnail_window_g1

0xa92f,	// (0x0009fc2f) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x000a470c) popup_phob_thumbnail_window_g

0xbc17,	// (0x000a0f17) level_1_location

0xbc1f,	// (0x000a0f1f) level_2_location

0xbc27,	// (0x000a0f27) level_3_location

0xbc2f,	// (0x000a0f2f) level_4_location

0x9e18,	// (0x0009f118) level_5_location

0x365d,	// (0x0009895d) mce_icon_pane_g1

0x3665,	// (0x00098965) mce_icon_pane_g2

0x0001,

0xf411,	// (0x000a4711) mce_icon_pane_g

0x366d,	// (0x0009896d) main_mup_pane_g1_ParamLimits

0x366d,	// (0x0009896d) main_mup_pane_g1

0x3685,	// (0x00098985) main_mup_pane_g2_ParamLimits

0x3685,	// (0x00098985) main_mup_pane_g2

0x36a1,	// (0x000989a1) main_mup_pane_g3_ParamLimits

0x36a1,	// (0x000989a1) main_mup_pane_g3

0x36bd,	// (0x000989bd) main_mup_pane_g4_ParamLimits

0x36bd,	// (0x000989bd) main_mup_pane_g4

0x36d9,	// (0x000989d9) main_mup_pane_g5_ParamLimits

0x36d9,	// (0x000989d9) main_mup_pane_g5

0x36fa,	// (0x000989fa) main_mup_pane_g6_ParamLimits

0x36fa,	// (0x000989fa) main_mup_pane_g6

0x3716,	// (0x00098a16) main_mup_pane_g7_ParamLimits

0x3716,	// (0x00098a16) main_mup_pane_g7

0x3732,	// (0x00098a32) main_mup_pane_g8_ParamLimits

0x3732,	// (0x00098a32) main_mup_pane_g8

0x3752,	// (0x00098a52) main_mup_pane_g9_ParamLimits

0x3752,	// (0x00098a52) main_mup_pane_g9

0x3771,	// (0x00098a71) main_mup_pane_g10_ParamLimits

0x3771,	// (0x00098a71) main_mup_pane_g10

0x3790,	// (0x00098a90) main_mup_pane_g11_ParamLimits

0x3790,	// (0x00098a90) main_mup_pane_g11

0x37a8,	// (0x00098aa8) main_mup_pane_g12_ParamLimits

0x37a8,	// (0x00098aa8) main_mup_pane_g12

0x37b6,	// (0x00098ab6) main_mup_pane_g13_ParamLimits

0x37b6,	// (0x00098ab6) main_mup_pane_g13

0x000c,

0xf416,	// (0x000a4716) main_mup_pane_g_ParamLimits

0xf416,	// (0x000a4716) main_mup_pane_g

0x37cc,	// (0x00098acc) main_mup_pane_t1_ParamLimits

0x37cc,	// (0x00098acc) main_mup_pane_t1

0x37e9,	// (0x00098ae9) main_mup_pane_t2_ParamLimits

0x37e9,	// (0x00098ae9) main_mup_pane_t2

0x3803,	// (0x00098b03) main_mup_pane_t3_ParamLimits

0x3803,	// (0x00098b03) main_mup_pane_t3

0x381d,	// (0x00098b1d) main_mup_pane_t4_ParamLimits

0x381d,	// (0x00098b1d) main_mup_pane_t4

0x382f,	// (0x00098b2f) main_mup_pane_t5_ParamLimits

0x382f,	// (0x00098b2f) main_mup_pane_t5

0x3841,	// (0x00098b41) main_mup_pane_t6_ParamLimits

0x3841,	// (0x00098b41) main_mup_pane_t6

0x0005,

0xf431,	// (0x000a4731) main_mup_pane_t_ParamLimits

0xf431,	// (0x000a4731) main_mup_pane_t

0x3857,	// (0x00098b57) mup_progress_pane_ParamLimits

0x3857,	// (0x00098b57) mup_progress_pane

0x3863,	// (0x00098b63) mup_visualizer_pane_ParamLimits

0x3863,	// (0x00098b63) mup_visualizer_pane

0x389d,	// (0x00098b9d) mup_volume_pane_ParamLimits

0x389d,	// (0x00098b9d) mup_volume_pane

0xa495,	// (0x0009f795) mup_visualizer_pane_g1_ParamLimits

0xa495,	// (0x0009f795) mup_visualizer_pane_g1

0xa495,	// (0x0009f795) mup_visualizer_pane_g2_ParamLimits

0xa495,	// (0x0009f795) mup_visualizer_pane_g2

0xa6bd,	// (0x0009f9bd) mup_visualizer_pane_g3_ParamLimits

0xa6bd,	// (0x0009f9bd) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x000a473e) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x000a473e) mup_visualizer_pane_g

0xefe8,	// (0x000a42e8) mup_volume_pane_g1

0xa93f,	// (0x0009fc3f) mup_volume_pane_g2

0x0001,

0xf445,	// (0x000a4745) mup_volume_pane_g

0xefe8,	// (0x000a42e8) mup_progress_pane_g1

0xa948,	// (0x0009fc48) mup_progress_pane_g2

0xa951,	// (0x0009fc51) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x000a474a) mup_progress_pane_g

0xec73,	// (0x000a3f73) bg_popup_window_pane_cp05

0xa95a,	// (0x0009fc5a) heading_pane_cp02_ParamLimits

0xa95a,	// (0x0009fc5a) heading_pane_cp02

0xa974,	// (0x0009fc74) list_popup_blid_pane

0xa97c,	// (0x0009fc7c) list_blid_sat_info_pane_ParamLimits

0xa97c,	// (0x0009fc7c) list_blid_sat_info_pane

0xa98f,	// (0x0009fc8f) list_blid_sat_info_pane_g1

0xa997,	// (0x0009fc97) list_blid_sat_info_pane_t1

0x39aa,	// (0x00098caa) mup_equalizer_pane_ParamLimits

0x39aa,	// (0x00098caa) mup_equalizer_pane

0x39cb,	// (0x00098ccb) mup_equalizer_pane_cp1_ParamLimits

0x39cb,	// (0x00098ccb) mup_equalizer_pane_cp1

0x39ec,	// (0x00098cec) mup_equalizer_pane_cp2_ParamLimits

0x39ec,	// (0x00098cec) mup_equalizer_pane_cp2

0x3a0d,	// (0x00098d0d) mup_equalizer_pane_cp3_ParamLimits

0x3a0d,	// (0x00098d0d) mup_equalizer_pane_cp3

0x3a2e,	// (0x00098d2e) mup_equalizer_pane_cp4_ParamLimits

0x3a2e,	// (0x00098d2e) mup_equalizer_pane_cp4

0x3a4f,	// (0x00098d4f) mup_equalizer_pane_cp5

0x3a65,	// (0x00098d65) mup_equalizer_pane_cp6

0x3a7d,	// (0x00098d7d) mup_equalizer_pane_cp7

0xbb35,	// (0x000a0e35) bg_popup_call_poc_act_pane_g9

0xbb3d,	// (0x000a0e3d) bg_popup_call_poc_act_pane_g10

0xbb45,	// (0x000a0e45) bg_popup_call_poc_act_pane_g11

0x000a,

0xeece,	// (0x000a41ce) mup_scale_pane

0xefe8,	// (0x000a42e8) mup_scale_pane_g1

0xa9a5,	// (0x0009fca5) mup_scale_pane_g2

0x0006,

0xf466,	// (0x000a4766) mup_scale_pane_g

0xa9c9,	// (0x0009fcc9) msg_data_pane

0xa9d1,	// (0x0009fcd1) scroll_pane_cp017

0x3aa7,	// (0x00098da7) bg_list_pane_cp04_ParamLimits

0x3aa7,	// (0x00098da7) bg_list_pane_cp04

0xa9d9,	// (0x0009fcd9) msg_data_pane_g1

0x3acd,	// (0x00098dcd) msg_data_pane_g2

0x3ad7,	// (0x00098dd7) msg_data_pane_g3

0x3adf,	// (0x00098ddf) msg_data_pane_g4

0x3ae7,	// (0x00098de7) msg_data_pane_g5

0x3aef,	// (0x00098def) msg_data_pane_g6

0x3af7,	// (0x00098df7) msg_data_pane_g7

0x0006,

0xf475,	// (0x000a4775) msg_data_pane_g

0x3aff,	// (0x00098dff) msg_text_pane_ParamLimits

0x3aff,	// (0x00098dff) msg_text_pane

0x3b46,	// (0x00098e46) qrid_highlight_pane_cp011_ParamLimits

0x3b46,	// (0x00098e46) qrid_highlight_pane_cp011

0xec73,	// (0x000a3f73) msg_body_pane

0xec73,	// (0x000a3f73) msg_header_pane

0xa9ea,	// (0x0009fcea) input_focus_pane_cp07

0x3b6c,	// (0x00098e6c) msg_header_pane_t1_ParamLimits

0x3b6c,	// (0x00098e6c) msg_header_pane_t1

0x3b7e,	// (0x00098e7e) msg_header_pane_t2_ParamLimits

0x3b7e,	// (0x00098e7e) msg_header_pane_t2

0x0001,

0xf489,	// (0x000a4789) msg_header_pane_t_ParamLimits

0xf489,	// (0x000a4789) msg_header_pane_t

0xa9ff,	// (0x0009fcff) msg_body_pane_g1

0x3b90,	// (0x00098e90) msg_body_pane_t1_ParamLimits

0x3b90,	// (0x00098e90) msg_body_pane_t1

0x3bc1,	// (0x00098ec1) msg_body_pane_t2_ParamLimits

0x3bc1,	// (0x00098ec1) msg_body_pane_t2

0x3bd3,	// (0x00098ed3) msg_body_pane_t3_ParamLimits

0x3bd3,	// (0x00098ed3) msg_body_pane_t3

0x0002,

0xf48e,	// (0x000a478e) msg_body_pane_t_ParamLimits

0xf48e,	// (0x000a478e) msg_body_pane_t

0x3c37,	// (0x00098f37) main_viewer_pane_g1_ParamLimits

0x3c37,	// (0x00098f37) main_viewer_pane_g1

0x3c43,	// (0x00098f43) main_viewer_pane_g2_ParamLimits

0x3c43,	// (0x00098f43) main_viewer_pane_g2

0x3c4f,	// (0x00098f4f) main_viewer_pane_g3_ParamLimits

0x3c4f,	// (0x00098f4f) main_viewer_pane_g3

0x3c60,	// (0x00098f60) main_viewer_pane_g4_ParamLimits

0x3c60,	// (0x00098f60) main_viewer_pane_g4

0x3c71,	// (0x00098f71) main_viewer_pane_g5_ParamLimits

0x3c71,	// (0x00098f71) main_viewer_pane_g5

0x3c71,	// (0x00098f71) main_viewer_pane_g7_ParamLimits

0x3c71,	// (0x00098f71) main_viewer_pane_g7

0xa332,	// (0x0009f632) main_viewer_pane_g8_ParamLimits

0xa332,	// (0x0009f632) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x000a479e) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x000a479e) main_viewer_pane_g

0xaa07,	// (0x0009fd07) viewer_content_pane_ParamLimits

0xaa07,	// (0x0009fd07) viewer_content_pane

0x3caf,	// (0x00098faf) main_postcard_pane_g1_ParamLimits

0x3caf,	// (0x00098faf) main_postcard_pane_g1

0x3cbd,	// (0x00098fbd) main_postcard_pane_g2_ParamLimits

0x3cbd,	// (0x00098fbd) main_postcard_pane_g2

0x3ccb,	// (0x00098fcb) main_postcard_pane_g3_ParamLimits

0x3ccb,	// (0x00098fcb) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x000a47af) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x000a47af) main_postcard_pane_g

0x3cdb,	// (0x00098fdb) main_postcard_pane_g4

0xbd17,	// (0x000a1017) smil_status_volume_pane_g2

0x3d07,	// (0x00099007) postcard_pane_ParamLimits

0x3d07,	// (0x00099007) postcard_pane

0xa495,	// (0x0009f795) postcard_pane_g1_ParamLimits

0xa495,	// (0x0009f795) postcard_pane_g1

0x3d39,	// (0x00099039) postcard_pane_g2_ParamLimits

0x3d39,	// (0x00099039) postcard_pane_g2

0x3d45,	// (0x00099045) postcard_pane_g3_ParamLimits

0x3d45,	// (0x00099045) postcard_pane_g3

0xaa15,	// (0x0009fd15) postcard_pane_g4_ParamLimits

0xaa15,	// (0x0009fd15) postcard_pane_g4

0x3d51,	// (0x00099051) postcard_pane_g5_ParamLimits

0x3d51,	// (0x00099051) postcard_pane_g5

0x3d5d,	// (0x0009905d) postcard_pane_g6_ParamLimits

0x3d5d,	// (0x0009905d) postcard_pane_g6

0xaa23,	// (0x0009fd23) postcard_pane_g7_ParamLimits

0xaa23,	// (0x0009fd23) postcard_pane_g7

0x0006,

0xf4bc,	// (0x000a47bc) postcard_pane_g_ParamLimits

0xf4bc,	// (0x000a47bc) postcard_pane_g

0x3d69,	// (0x00099069) main_mp2_pane_g1_ParamLimits

0x3d69,	// (0x00099069) main_mp2_pane_g1

0x3d75,	// (0x00099075) main_mp2_pane_g2_ParamLimits

0x3d75,	// (0x00099075) main_mp2_pane_g2

0x3d81,	// (0x00099081) main_mp2_pane_g3_ParamLimits

0x3d81,	// (0x00099081) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x000a47cb) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x000a47cb) main_mp2_pane_g

0x3d8d,	// (0x0009908d) main_mp2_pane_t1_ParamLimits

0x3d8d,	// (0x0009908d) main_mp2_pane_t1

0x3da4,	// (0x000990a4) main_mp2_pane_t2_ParamLimits

0x3da4,	// (0x000990a4) main_mp2_pane_t2

0x3db8,	// (0x000990b8) main_mp2_pane_t3_ParamLimits

0x3db8,	// (0x000990b8) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x000a47d2) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x000a47d2) main_mp2_pane_t

0xaa31,	// (0x0009fd31) pec_content_pane_ParamLimits

0xaa31,	// (0x0009fd31) pec_content_pane

0x9fc1,	// (0x0009f2c1) scroll_pane_cp015

0xaa43,	// (0x0009fd43) pec_attribute_pane_ParamLimits

0xaa43,	// (0x0009fd43) pec_attribute_pane

0x3dca,	// (0x000990ca) pec_content_pane_g1_ParamLimits

0x3dca,	// (0x000990ca) pec_content_pane_g1

0xaa53,	// (0x0009fd53) pec_content_pane_t1_ParamLimits

0xaa53,	// (0x0009fd53) pec_content_pane_t1

0xaa65,	// (0x0009fd65) pec_content_pane_t2_ParamLimits

0xaa65,	// (0x0009fd65) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x000a47d9) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x000a47d9) pec_content_pane_t

0x3dd6,	// (0x000990d6) list_single_graphic_pane_cp01_ParamLimits

0x3dd6,	// (0x000990d6) list_single_graphic_pane_cp01

0xeece,	// (0x000a41ce) bg_popup_sub_pane_cp04

0xaa77,	// (0x0009fd77) popup_mup_playback_window_g1

0xaa83,	// (0x0009fd83) popup_mup_playback_window_t1

0xaa98,	// (0x0009fd98) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x000a47de) popup_mup_playback_window_t

0xaacf,	// (0x0009fdcf) main_image_pane_g1_ParamLimits

0xaacf,	// (0x0009fdcf) main_image_pane_g1

0xab12,	// (0x0009fe12) scroll_pane_cp018_ParamLimits

0xab12,	// (0x0009fe12) scroll_pane_cp018

0xab2a,	// (0x0009fe2a) scroll_pane_cp016_ParamLimits

0xab2a,	// (0x0009fe2a) scroll_pane_cp016

0x3e6f,	// (0x0009916f) smil2_image_pane_ParamLimits

0x3e6f,	// (0x0009916f) smil2_image_pane

0x3e9f,	// (0x0009919f) smil2_root_pane_ParamLimits

0x3e9f,	// (0x0009919f) smil2_root_pane

0x3ecb,	// (0x000991cb) smil2_text_pane_ParamLimits

0x3ecb,	// (0x000991cb) smil2_text_pane

0xec73,	// (0x000a3f73) bg_list_pane_cp06

0xab66,	// (0x0009fe66) grid_radio_pane

0xec73,	// (0x000a3f73) bg_popup_window_pane_cp06

0xab6e,	// (0x0009fe6e) main_fmradio_pane_t1

0xa50c,	// (0x0009f80c) heading_pane_cp04

0xab7c,	// (0x0009fe7c) main_fmradio_pane_t2

0xbb4d,	// (0x000a0e4d) popup_cale_lunar_info_window_g1

0xab8a,	// (0x0009fe8a) main_fmradio_pane_t3

0xbb55,	// (0x000a0e55) popup_cale_lunar_info_window_g2

0xab98,	// (0x0009fe98) main_fmradio_pane_t4

0x0001,

0xaba6,	// (0x0009fea6) main_fmradio_pane_t5

0x0004,

0xf5b9,	// (0x000a48b9) popup_cale_lunar_info_window_g

0xf4f3,	// (0x000a47f3) main_fmradio_pane_t

0xabb4,	// (0x0009feb4) wait_bar_pane_cp03

0xabbc,	// (0x0009febc) cell_fmradio_pane_ParamLimits

0xabbc,	// (0x0009febc) cell_fmradio_pane

0xaa23,	// (0x0009fd23) cell_fmradio_pane_g1_ParamLimits

0xaa23,	// (0x0009fd23) cell_fmradio_pane_g1

0xec73,	// (0x000a3f73) grid_highlight_pane_cp011

0xabcf,	// (0x0009fecf) poc_content_pane_ParamLimits

0xabcf,	// (0x0009fecf) poc_content_pane

0xabe1,	// (0x0009fee1) scroll_pane_cp019

0x3f0b,	// (0x0009920b) popup_call_poc_act_window_ParamLimits

0x3f0b,	// (0x0009920b) popup_call_poc_act_window

0x3f18,	// (0x00099218) popup_call_poc_inact_window_ParamLimits

0x3f18,	// (0x00099218) popup_call_poc_inact_window

0xf590,	// (0x000a4890) bg_popup_call_poc_act_pane_g

0xbac5,	// (0x000a0dc5) bg_popup_call_poc_inact_pane_g1

0xbacd,	// (0x000a0dcd) bg_popup_call_poc_inact_pane_g2

0xabe9,	// (0x0009fee9) popup_call_poc_act_window_g2

0xbad5,	// (0x000a0dd5) bg_popup_call_poc_inact_pane_g3

0xbadd,	// (0x000a0ddd) bg_popup_call_poc_inact_pane_g4

0xbae5,	// (0x000a0de5) bg_popup_call_poc_inact_pane_g5

0xabf1,	// (0x0009fef1) popup_call_poc_act_window_t1_ParamLimits

0xabf1,	// (0x0009fef1) popup_call_poc_act_window_t1

0xac19,	// (0x0009ff19) popup_call_poc_act_window_t2_ParamLimits

0xac19,	// (0x0009ff19) popup_call_poc_act_window_t2

0xac41,	// (0x0009ff41) popup_call_poc_act_window_t3_ParamLimits

0xac41,	// (0x0009ff41) popup_call_poc_act_window_t3

0xac69,	// (0x0009ff69) popup_call_poc_act_window_t4_ParamLimits

0xac69,	// (0x0009ff69) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x000a47fe) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x000a47fe) popup_call_poc_act_window_t

0xbaed,	// (0x000a0ded) bg_popup_call_poc_inact_pane_g6

0xbaf5,	// (0x000a0df5) bg_popup_call_poc_inact_pane_g7

0xbafd,	// (0x000a0dfd) bg_popup_call_poc_inact_pane_g8

0xac7b,	// (0x0009ff7b) popup_call_poc_inact_window_g2

0xbb05,	// (0x000a0e05) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf57d,	// (0x000a487d) bg_popup_call_poc_inact_pane_g

0xac83,	// (0x0009ff83) popup_call_poc_inact_window_t1_ParamLimits

0xac83,	// (0x0009ff83) popup_call_poc_inact_window_t1

0xac98,	// (0x0009ff98) popup_call_poc_inact_window_t2_ParamLimits

0xac98,	// (0x0009ff98) popup_call_poc_inact_window_t2

0xacad,	// (0x0009ffad) popup_call_poc_inact_window_t3_ParamLimits

0xacad,	// (0x0009ffad) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x000a4807) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x000a4807) popup_call_poc_inact_window_t

0xbc8a,	// (0x000a0f8a) context_pane_ParamLimits

0x455a,	// (0x0009985a) signal_pane_ParamLimits

0x9e18,	// (0x0009f118) main_call2_pane

0x44cd,	// (0x000997cd) popup_phob_thumbnail2_window_ParamLimits

0x44cd,	// (0x000997cd) popup_phob_thumbnail2_window

0x3be5,	// (0x00098ee5) aid_hotspot_pointer_arrow_pane

0x3bed,	// (0x00098eed) aid_hotspot_pointer_hand_pane

0x423a,	// (0x0009953a) phob_pre_status_pane_g5

0x1c71,	// (0x00096f71) cams_zoom_pane_ParamLimits

0x1c7d,	// (0x00096f7d) image_vga_pane_ParamLimits

0x1c8c,	// (0x00096f8c) main_camera_pane_g1_ParamLimits

0x1c9a,	// (0x00096f9a) main_camera_pane_g2_ParamLimits

0x1ca6,	// (0x00096fa6) main_camera_pane_g3_ParamLimits

0x1cb2,	// (0x00096fb2) main_camera_pane_g4_ParamLimits

0x1cbe,	// (0x00096fbe) main_camera_pane_g5_ParamLimits

0x1cca,	// (0x00096fca) main_camera_pane_g6_ParamLimits

0x1cd6,	// (0x00096fd6) main_camera_pane_g7_ParamLimits

0xf206,	// (0x000a4506) main_camera_pane_g_ParamLimits

0x1ce2,	// (0x00096fe2) main_camera_pane_t1_ParamLimits

0x1cf4,	// (0x00096ff4) main_camera_pane_t2_ParamLimits

0xf217,	// (0x000a4517) main_camera_pane_t_ParamLimits

0xeece,	// (0x000a41ce) bg_popup_preview_window_pane_cp01_ParamLimits

0xeece,	// (0x000a41ce) bg_popup_preview_window_pane_cp01

0xacc2,	// (0x0009ffc2) popup_phob_thumbnail2_window_g1_ParamLimits

0xacc2,	// (0x0009ffc2) popup_phob_thumbnail2_window_g1

0xec73,	// (0x000a3f73) call2_cli_visual_pane

0x3f34,	// (0x00099234) popup_call2_audio_conf_window_ParamLimits

0x3f34,	// (0x00099234) popup_call2_audio_conf_window

0x3f49,	// (0x00099249) popup_call2_audio_first_window_ParamLimits

0x3f49,	// (0x00099249) popup_call2_audio_first_window

0x3fe7,	// (0x000992e7) popup_call2_audio_in_window_ParamLimits

0x3fe7,	// (0x000992e7) popup_call2_audio_in_window

0x4029,	// (0x00099329) popup_call2_audio_out_window_ParamLimits

0x4029,	// (0x00099329) popup_call2_audio_out_window

0x408b,	// (0x0009938b) popup_call2_audio_second_window_ParamLimits

0x408b,	// (0x0009938b) popup_call2_audio_second_window

0x40e9,	// (0x000993e9) popup_call2_audio_wait_window_ParamLimits

0x40e9,	// (0x000993e9) popup_call2_audio_wait_window

0xec73,	// (0x000a3f73) bg_popup_call2_act_pane_cp03

0xeeb0,	// (0x000a41b0) list_conf_pane_cp

0xacce,	// (0x0009ffce) popup_call2_audio_conf_window_t1

0xa569,	// (0x0009f869) list_single_graphic_popup_conf2_pane_ParamLimits

0xa569,	// (0x0009f869) list_single_graphic_popup_conf2_pane

0xa57c,	// (0x0009f87c) list_highlight_pane_cp04

0xacdc,	// (0x0009ffdc) list_single_graphic_popup_conf2_pane_g1

0xa58d,	// (0x0009f88d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x000a480e) list_single_graphic_popup_conf2_pane_g

0xace6,	// (0x0009ffe6) list_single_graphic_popup_conf2_pane_t1

0xacf4,	// (0x0009fff4) bg_popup_call2_act_pane_cp01_ParamLimits

0xacf4,	// (0x0009fff4) bg_popup_call2_act_pane_cp01

0xad7e,	// (0x000a007e) call_type_pane_cp05_ParamLimits

0xad7e,	// (0x000a007e) call_type_pane_cp05

0xadd2,	// (0x000a00d2) popup_call2_audio_second_window_g1_ParamLimits

0xadd2,	// (0x000a00d2) popup_call2_audio_second_window_g1

0xae26,	// (0x000a0126) popup_call2_audio_second_window_g2_ParamLimits

0xae26,	// (0x000a0126) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x000a4813) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x000a4813) popup_call2_audio_second_window_g

0xae8b,	// (0x000a018b) popup_call2_audio_second_window_t1_ParamLimits

0xae8b,	// (0x000a018b) popup_call2_audio_second_window_t1

0xaf46,	// (0x000a0246) popup_call2_audio_second_window_t2_ParamLimits

0xaf46,	// (0x000a0246) popup_call2_audio_second_window_t2

0xaf99,	// (0x000a0299) popup_call2_audio_second_window_t3_ParamLimits

0xaf99,	// (0x000a0299) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x000a481a) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x000a481a) popup_call2_audio_second_window_t

0xec73,	// (0x000a3f73) bg_popup_call2_in_pane_cp02

0xec7d,	// (0x000a3f7d) call_type_pane_cp04

0xec85,	// (0x000a3f85) popup_call2_audio_wait_window_g1

0xec8d,	// (0x000a3f8d) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000a43f5) popup_call2_audio_wait_window_g

0xec95,	// (0x000a3f95) popup_call2_audio_wait_window_t3

0xb08c,	// (0x000a038c) bg_popup_call2_act_pane_ParamLimits

0xb08c,	// (0x000a038c) bg_popup_call2_act_pane

0xb14c,	// (0x000a044c) call_type_pane_cp03_ParamLimits

0xb14c,	// (0x000a044c) call_type_pane_cp03

0xb1b0,	// (0x000a04b0) popup_call2_audio_first_window_g1_ParamLimits

0xb1b0,	// (0x000a04b0) popup_call2_audio_first_window_g1

0xb220,	// (0x000a0520) popup_call2_audio_first_window_g2_ParamLimits

0xb220,	// (0x000a0520) popup_call2_audio_first_window_g2

0xa495,	// (0x0009f795) popup_call2_audio_first_window_g3_ParamLimits

0xa495,	// (0x0009f795) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x000a4823) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x000a4823) popup_call2_audio_first_window_g

0xb2fe,	// (0x000a05fe) popup_call2_audio_first_window_t1_ParamLimits

0xb2fe,	// (0x000a05fe) popup_call2_audio_first_window_t1

0xb401,	// (0x000a0701) popup_call2_audio_first_window_t4_ParamLimits

0xb401,	// (0x000a0701) popup_call2_audio_first_window_t4

0xb4e4,	// (0x000a07e4) popup_call2_audio_first_window_t5_ParamLimits

0xb4e4,	// (0x000a07e4) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x000a482e) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x000a482e) popup_call2_audio_first_window_t

0xeec6,	// (0x000a41c6) bg_popup_call2_act_pane_g1

0xbb5d,	// (0x000a0e5d) popup_cale_lunar_info_window_t1

0xbb6b,	// (0x000a0e6b) popup_cale_lunar_info_window_t2

0xbb79,	// (0x000a0e79) popup_cale_lunar_info_window_t3

0xec73,	// (0x000a3f73) bg_popup_call2_bubble_pane

0xb5e5,	// (0x000a08e5) bg_popup_call2_in_pane_cp01_ParamLimits

0xb5e5,	// (0x000a08e5) bg_popup_call2_in_pane_cp01

0xe8d0,	// (0x000a3bd0) call_type_pane_cp02

0xb62d,	// (0x000a092d) popup_call2_audio_out_window_g1_ParamLimits

0xb62d,	// (0x000a092d) popup_call2_audio_out_window_g1

0xb659,	// (0x000a0959) popup_call2_audio_out_window_g2_ParamLimits

0xb659,	// (0x000a0959) popup_call2_audio_out_window_g2

0xb681,	// (0x000a0981) popup_call2_audio_out_window_g3_ParamLimits

0xb681,	// (0x000a0981) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x000a4837) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x000a4837) popup_call2_audio_out_window_g

0xb6bc,	// (0x000a09bc) popup_call2_audio_out_window_t1_ParamLimits

0xb6bc,	// (0x000a09bc) popup_call2_audio_out_window_t1

0xb71b,	// (0x000a0a1b) popup_call2_audio_out_window_t2_ParamLimits

0xb71b,	// (0x000a0a1b) popup_call2_audio_out_window_t2

0xb76f,	// (0x000a0a6f) popup_call2_audio_out_window_t3_ParamLimits

0xb76f,	// (0x000a0a6f) popup_call2_audio_out_window_t3

0xb785,	// (0x000a0a85) popup_call2_audio_out_window_t4_ParamLimits

0xb785,	// (0x000a0a85) popup_call2_audio_out_window_t4

0xb79b,	// (0x000a0a9b) popup_call2_audio_out_window_t5_ParamLimits

0xb79b,	// (0x000a0a9b) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x000a4840) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x000a4840) popup_call2_audio_out_window_t

0xb7ff,	// (0x000a0aff) bg_popup_call2_in_pane_ParamLimits

0xb7ff,	// (0x000a0aff) bg_popup_call2_in_pane

0xb85b,	// (0x000a0b5b) popup_call2_audio_in_window_g1_ParamLimits

0xb85b,	// (0x000a0b5b) popup_call2_audio_in_window_g1

0xb893,	// (0x000a0b93) popup_call2_audio_in_window_g2_ParamLimits

0xb893,	// (0x000a0b93) popup_call2_audio_in_window_g2

0xb8cb,	// (0x000a0bcb) popup_call2_audio_in_window_g3_ParamLimits

0xb8cb,	// (0x000a0bcb) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x000a484d) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x000a484d) popup_call2_audio_in_window_g

0xb923,	// (0x000a0c23) popup_call2_audio_in_window_t1_ParamLimits

0xb923,	// (0x000a0c23) popup_call2_audio_in_window_t1

0xb9a3,	// (0x000a0ca3) popup_call2_audio_in_window_t2_ParamLimits

0xb9a3,	// (0x000a0ca3) popup_call2_audio_in_window_t2

0xba23,	// (0x000a0d23) popup_call2_audio_in_window_t3_ParamLimits

0xba23,	// (0x000a0d23) popup_call2_audio_in_window_t3

0xba3d,	// (0x000a0d3d) popup_call2_audio_in_window_t4_ParamLimits

0xba3d,	// (0x000a0d3d) popup_call2_audio_in_window_t4

0xba5b,	// (0x000a0d5b) popup_call2_audio_in_window_t5_ParamLimits

0xba5b,	// (0x000a0d5b) popup_call2_audio_in_window_t5

0xba70,	// (0x000a0d70) popup_call2_audio_in_window_t6_ParamLimits

0xba70,	// (0x000a0d70) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x000a4856) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x000a4856) popup_call2_audio_in_window_t

0xeec6,	// (0x000a41c6) bg_popup_call2_in_pane_g1

0xbb87,	// (0x000a0e87) popup_cale_lunar_info_window_t4

0x0003,

0xf5be,	// (0x000a48be) popup_cale_lunar_info_window_t

0xeece,	// (0x000a41ce) bg_popup_call2_rect_pane_ParamLimits

0xeece,	// (0x000a41ce) bg_popup_call2_rect_pane

0xec73,	// (0x000a3f73) call2_cli_visual_graphic_pane

0xec73,	// (0x000a3f73) call2_cli_visual_text_pane

0x4600,	// (0x00099900) smil_status_volume_pane_g3

0x0002,

0xefe8,	// (0x000a42e8) call2_cli_visual_graphic_pane_g1

0xefe8,	// (0x000a42e8) call2_cli_visual_graphic_pane_g2

0xefe8,	// (0x000a42e8) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x000a4863) call2_cli_visual_graphic_pane_g

0xba85,	// (0x000a0d85) bg_popup_call2_rect_pane_g1

0x9d34,	// (0x0009f034) bg_popup_call2_rect_pane_g2

0xba8d,	// (0x000a0d8d) bg_popup_call2_rect_pane_g3

0xba95,	// (0x000a0d95) bg_popup_call2_rect_pane_g4

0xba9d,	// (0x000a0d9d) bg_popup_call2_rect_pane_g5

0xbaa5,	// (0x000a0da5) bg_popup_call2_rect_pane_g6

0xbaad,	// (0x000a0dad) bg_popup_call2_rect_pane_g7

0xbab5,	// (0x000a0db5) bg_popup_call2_rect_pane_g8

0xbabd,	// (0x000a0dbd) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x000a486a) bg_popup_call2_rect_pane_g

0xbac5,	// (0x000a0dc5) bg_popup_call2_bubble_pane_g1

0xbacd,	// (0x000a0dcd) bg_popup_call2_bubble_pane_g2

0xbad5,	// (0x000a0dd5) bg_popup_call2_bubble_pane_g3

0xbadd,	// (0x000a0ddd) bg_popup_call2_bubble_pane_g4

0xbae5,	// (0x000a0de5) bg_popup_call2_bubble_pane_g5

0xbaed,	// (0x000a0ded) bg_popup_call2_bubble_pane_g6

0xbaf5,	// (0x000a0df5) bg_popup_call2_bubble_pane_g7

0xbafd,	// (0x000a0dfd) bg_popup_call2_bubble_pane_g8

0xbb05,	// (0x000a0e05) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x000a487d) bg_popup_call2_bubble_pane_g

0x1788,	// (0x00096a88) aid_cale_week_size_cell_pane

0x1d06,	// (0x00097006) aid_cams_cif_uncrop_pane_ParamLimits

0x1d06,	// (0x00097006) aid_cams_cif_uncrop_pane

0x1e61,	// (0x00097161) aid_cams_size_cell_ParamLimits

0x1e61,	// (0x00097161) aid_cams_size_cell

0x1e6d,	// (0x0009716d) grid_cams_pane_ParamLimits

0x1e7b,	// (0x0009717b) linegrid_cams_pane_ParamLimits

0x2049,	// (0x00097349) call_video_pane_t1

0x206a,	// (0x0009736a) call_video_pane_t2

0x0001,

0xf26a,	// (0x000a456a) call_video_pane_t

0x25b1,	// (0x000978b1) aid_cale_month_size_cell_pane_ParamLimits

0x25b1,	// (0x000978b1) aid_cale_month_size_cell_pane

0xf607,	// (0x000a4907) smil_status_volume_pane_g

0x460d,	// (0x0009990d) volume_smil_pane_ParamLimits

0x0ecb,	// (0x000961cb) aid_popup2_width_pane

0x167c,	// (0x0009697c) cell_qdial_pane_g4_ParamLimits

0x167c,	// (0x0009697c) cell_qdial_pane_g4

0x3592,	// (0x00098892) aid_blid_cardinal_pane_ParamLimits

0x35a2,	// (0x000988a2) aid_blid_destination_pane_ParamLimits

0x35a2,	// (0x000988a2) aid_blid_destination_pane

0xeece,	// (0x000a41ce) bg_popup_call_poc_act_pane_ParamLimits

0xeece,	// (0x000a41ce) bg_popup_call_poc_act_pane

0xeece,	// (0x000a41ce) bg_popup_call_poc_inact_pane_ParamLimits

0xeece,	// (0x000a41ce) bg_popup_call_poc_inact_pane

0xbb0d,	// (0x000a0e0d) bg_popup_call_poc_act_pane_g1

0xbb15,	// (0x000a0e15) bg_popup_call_poc_act_pane_g2

0xbb1d,	// (0x000a0e1d) bg_popup_call_poc_act_pane_g3

0xbadd,	// (0x000a0ddd) bg_popup_call_poc_act_pane_g4

0xbae5,	// (0x000a0de5) bg_popup_call_poc_act_pane_g5

0xbb25,	// (0x000a0e25) bg_popup_call_poc_act_pane_g6

0xbaf5,	// (0x000a0df5) bg_popup_call_poc_act_pane_g7

0xbb2d,	// (0x000a0e2d) bg_popup_call_poc_act_pane_g8

0xec73,	// (0x000a3f73) main_usb_pane

0x43fc,	// (0x000996fc) popup_cale_lunar_info_window

0x2393,	// (0x00097693) im_reading_pane_t1_ParamLimits

0x9f19,	// (0x0009f219) list_im_pane_ParamLimits

0x9f2a,	// (0x0009f22a) scroll_pane_cp07_ParamLimits

0xec73,	// (0x000a3f73) grid_highlight_pane_cp012

0xeece,	// (0x000a41ce) mup_scale_pane_ParamLimits

0xa495,	// (0x0009f795) main_usb_pane_g1_ParamLimits

0xa495,	// (0x0009f795) main_usb_pane_g1

0x415d,	// (0x0009945d) main_usb_pane_g2_ParamLimits

0x415d,	// (0x0009945d) main_usb_pane_g2

0x0001,

0xf5a7,	// (0x000a48a7) main_usb_pane_g_ParamLimits

0xf5a7,	// (0x000a48a7) main_usb_pane_g

0x4169,	// (0x00099469) main_usb_pane_t1_ParamLimits

0x4169,	// (0x00099469) main_usb_pane_t1

0x417b,	// (0x0009947b) main_usb_pane_t2_ParamLimits

0x417b,	// (0x0009947b) main_usb_pane_t2

0x418d,	// (0x0009948d) main_usb_pane_t3_ParamLimits

0x418d,	// (0x0009948d) main_usb_pane_t3

0x419f,	// (0x0009949f) main_usb_pane_t4_ParamLimits

0x419f,	// (0x0009949f) main_usb_pane_t4

0x41b1,	// (0x000994b1) main_usb_pane_t5_ParamLimits

0x41b1,	// (0x000994b1) main_usb_pane_t5

0x41c3,	// (0x000994c3) main_usb_pane_t6_ParamLimits

0x41c3,	// (0x000994c3) main_usb_pane_t6

0x0005,

0xf5ac,	// (0x000a48ac) main_usb_pane_t_ParamLimits

0x3538,	// (0x00098838) aid_text_placing

0x3544,	// (0x00098844) main_location2_pane_t1_ParamLimits

0x3558,	// (0x00098858) main_location2_pane_t2_ParamLimits

0x356c,	// (0x0009886c) main_location2_pane_t3_ParamLimits

0x3580,	// (0x00098880) main_location2_pane_t4_ParamLimits

0x3580,	// (0x00098880) main_location2_pane_t4

0xf3cb,	// (0x000a46cb) main_location2_pane_t_ParamLimits

0xef0a,	// (0x000a420a) find_pinb_pane_g2_ParamLimits

0xef0a,	// (0x000a420a) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x000a441b) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x000a441b) find_pinb_pane_g

0xef16,	// (0x000a4216) find_pinb_pane_t1_ParamLimits

0xef28,	// (0x000a4228) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x000a4420) find_pinb_pane_t_ParamLimits

0xec73,	// (0x000a3f73) main_call3_pane

0x2b54,	// (0x00097e54) cale_month_day_heading_pane_t1_ParamLimits

0x2bda,	// (0x00097eda) cale_month_day_heading_pane_t2_ParamLimits

0x2c53,	// (0x00097f53) cale_month_day_heading_pane_t3_ParamLimits

0x2ccc,	// (0x00097fcc) cale_month_day_heading_pane_t4_ParamLimits

0x2d45,	// (0x00098045) cale_month_day_heading_pane_t5_ParamLimits

0x2dbe,	// (0x000980be) cale_month_day_heading_pane_t6_ParamLimits

0x2e37,	// (0x00098137) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x000a45a2) cale_month_day_heading_pane_t_ParamLimits

0xa174,	// (0x0009f474) smil_status_volume_pane

0x3d21,	// (0x00099021) postcard_address_pane_ParamLimits

0x3d21,	// (0x00099021) postcard_address_pane

0x3d2d,	// (0x0009902d) postcard_message_pane_ParamLimits

0x3d2d,	// (0x0009902d) postcard_message_pane

0x4128,	// (0x00099428) call2_cli_visual_pane_t1_ParamLimits

0x4128,	// (0x00099428) call2_cli_visual_pane_t1

0x4764,	// (0x00099a64) postcard_message_pane_t1_ParamLimits

0x4764,	// (0x00099a64) postcard_message_pane_t1

0x474d,	// (0x00099a4d) postcard_address_pane_t1_ParamLimits

0x474d,	// (0x00099a4d) postcard_address_pane_t1

0x473e,	// (0x00099a3e) popup_call3_audio_in_window_ParamLimits

0x473e,	// (0x00099a3e) popup_call3_audio_in_window

0x4622,	// (0x00099922) bg_popup_call3_in_pane_ParamLimits

0x4622,	// (0x00099922) bg_popup_call3_in_pane

0x4684,	// (0x00099984) popup_call3_audio_in_window_g1_ParamLimits

0x4684,	// (0x00099984) popup_call3_audio_in_window_g1

0x469c,	// (0x0009999c) popup_call3_audio_in_window_g2_ParamLimits

0x469c,	// (0x0009999c) popup_call3_audio_in_window_g2

0x46b4,	// (0x000999b4) popup_call3_audio_in_window_g3_ParamLimits

0x46b4,	// (0x000999b4) popup_call3_audio_in_window_g3

0x0003,

0xf60e,	// (0x000a490e) popup_call3_audio_in_window_g_ParamLimits

0xf60e,	// (0x000a490e) popup_call3_audio_in_window_g

0x46dc,	// (0x000999dc) popup_call3_audio_in_window_t1_ParamLimits

0x46dc,	// (0x000999dc) popup_call3_audio_in_window_t1

0x4704,	// (0x00099a04) popup_call3_audio_in_window_t2_ParamLimits

0x4704,	// (0x00099a04) popup_call3_audio_in_window_t2

0x472c,	// (0x00099a2c) popup_call3_audio_in_window_t3_ParamLimits

0x472c,	// (0x00099a2c) popup_call3_audio_in_window_t3

0x0002,

0xf617,	// (0x000a4917) popup_call3_audio_in_window_t_ParamLimits

0xf617,	// (0x000a4917) popup_call3_audio_in_window_t

0x9e18,	// (0x0009f118) bg_popup_call3_rect_pane

0xba85,	// (0x000a0d85) bg_popup_call3_rect_pane_g1

0x9d34,	// (0x0009f034) bg_popup_call3_rect_pane_g2

0xba8d,	// (0x000a0d8d) bg_popup_call3_rect_pane_g3

0xba95,	// (0x000a0d95) bg_popup_call3_rect_pane_g4

0xba9d,	// (0x000a0d9d) bg_popup_call3_rect_pane_g5

0xbaa5,	// (0x000a0da5) bg_popup_call3_rect_pane_g6

0xbaad,	// (0x000a0dad) bg_popup_call3_rect_pane_g7

0x38b8,	// (0x00098bb8) mup_visualizer_osc_pane

0xa937,	// (0x0009fc37) mup_visualizer_spec_pane

0x4642,	// (0x00099942) call3_video_qcif_pane_ParamLimits

0x4642,	// (0x00099942) call3_video_qcif_pane

0x4654,	// (0x00099954) call3_video_qcif_uncrop_pane_ParamLimits

0x4654,	// (0x00099954) call3_video_qcif_uncrop_pane

0x4662,	// (0x00099962) call3_video_subqcif_pane_ParamLimits

0x4662,	// (0x00099962) call3_video_subqcif_pane

0x4674,	// (0x00099974) call3_video_subqcif_uncrop_pane_ParamLimits

0x4674,	// (0x00099974) call3_video_subqcif_uncrop_pane

0x46cc,	// (0x000999cc) popup_call3_audio_in_window_g4_ParamLimits

0x46cc,	// (0x000999cc) popup_call3_audio_in_window_g4

0x45ef,	// (0x000998ef) mup_spec_half_pane

0x45f8,	// (0x000998f8) mup_spec_half_pane_cp

0xbcea,	// (0x000a0fea) mup_osc_middle_pane

0xbcf3,	// (0x000a0ff3) mup_visualizer_osc_pane_g1

0x45d0,	// (0x000998d0) mup_spec_bar_pane_ParamLimits

0x45d0,	// (0x000998d0) mup_spec_bar_pane

0xbcd7,	// (0x000a0fd7) mup_spec_bar_pane_g1

0xbce1,	// (0x000a0fe1) mup_spec_bar_pane_g2

0x0001,

0xf602,	// (0x000a4902) mup_spec_bar_pane_g

0x1788,	// (0x00096a88) aid_cale_week_size_cell_pane_ParamLimits

0x179d,	// (0x00096a9d) bg_cale_heading_pane_ParamLimits

0x9d71,	// (0x0009f071) bg_cale_pane_cp01_ParamLimits

0x17bd,	// (0x00096abd) cale_week_corner_pane_ParamLimits

0x17d7,	// (0x00096ad7) cale_week_day_heading_pane_ParamLimits

0x17f7,	// (0x00096af7) cale_week_scroll_pane_g1_ParamLimits

0x1812,	// (0x00096b12) cale_week_scroll_pane_g2_ParamLimits

0x1825,	// (0x00096b25) cale_week_scroll_pane_g3_ParamLimits

0x1838,	// (0x00096b38) cale_week_scroll_pane_g4_ParamLimits

0x184b,	// (0x00096b4b) cale_week_scroll_pane_g5_ParamLimits

0x185e,	// (0x00096b5e) cale_week_scroll_pane_g6_ParamLimits

0x1871,	// (0x00096b71) cale_week_scroll_pane_g7_ParamLimits

0x1886,	// (0x00096b86) cale_week_scroll_pane_g8_ParamLimits

0x189b,	// (0x00096b9b) cale_week_scroll_pane_g9_ParamLimits

0x18ae,	// (0x00096bae) cale_week_scroll_pane_g10_ParamLimits

0x18c1,	// (0x00096bc1) cale_week_scroll_pane_g11_ParamLimits

0x18d4,	// (0x00096bd4) cale_week_scroll_pane_g12_ParamLimits

0x18eb,	// (0x00096beb) cale_week_scroll_pane_g13_ParamLimits

0x1906,	// (0x00096c06) cale_week_scroll_pane_g14_ParamLimits

0x1921,	// (0x00096c21) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x000a44ac) cale_week_scroll_pane_g_ParamLimits

0x1951,	// (0x00096c51) cale_week_time_pane_ParamLimits

0x1966,	// (0x00096c66) grid_cale_week_pane_ParamLimits

0x9d8e,	// (0x0009f08e) listscroll_cale_week_pane_t1

0x9da0,	// (0x0009f0a0) scroll_pane_cp08_ParamLimits

0x2625,	// (0x00097925) cale_month_corner_pane_ParamLimits

0xa14a,	// (0x0009f44a) cale_month_pane_t1

0x2ad7,	// (0x00097dd7) cale_month_week_pane_ParamLimits

0xa495,	// (0x0009f795) popup_call_status_window_g1_ParamLimits

0x336b,	// (0x0009866b) popup_call_status_window_g2_ParamLimits

0x3377,	// (0x00098677) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x000a4652) popup_call_status_window_g_ParamLimits

0xa4fc,	// (0x0009f7fc) aid_call2_pane

0x3b60,	// (0x00098e60) msg_header_pane_g1

0x3d21,	// (0x00099021) postcard_address2_pane_ParamLimits

0x3d21,	// (0x00099021) postcard_address2_pane

0x3d2d,	// (0x0009902d) postcard_message2_pane_ParamLimits

0x3d2d,	// (0x0009902d) postcard_message2_pane

0x4568,	// (0x00099868) message2_row_pane_ParamLimits

0x4568,	// (0x00099868) message2_row_pane

0x4583,	// (0x00099883) address2_row_pane_ParamLimits

0x4583,	// (0x00099883) address2_row_pane

0xbca5,	// (0x000a0fa5) postcard_message2_row_pane_g1

0xbcad,	// (0x000a0fad) postcard_message2_row_pane_t1

0xbca5,	// (0x000a0fa5) address2_row_pane_g1

0xbcad,	// (0x000a0fad) address2_row_pane_t1

0x1bec,	// (0x00096eec) aid_size_cell_vorec

0xec73,	// (0x000a3f73) main_rss_pane

0x4596,	// (0x00099896) rss_list_single_pane_ParamLimits

0x4596,	// (0x00099896) rss_list_single_pane

0xbcbb,	// (0x000a0fbb) rss_list_single_pane_t1

0xbcc9,	// (0x000a0fc9) rss_list_single_pane_t2

0x0001,

0xf5fd,	// (0x000a48fd) rss_list_single_pane_t

0xec73,	// (0x000a3f73) main_camera2_pane

0xec73,	// (0x000a3f73) main_video2_pane

0x47c8,	// (0x00099ac8) cams_zoom_pane_cp2_ParamLimits

0x47c8,	// (0x00099ac8) cams_zoom_pane_cp2

0x47d4,	// (0x00099ad4) image2_vga_pane_ParamLimits

0x47d4,	// (0x00099ad4) image2_vga_pane

0x47e3,	// (0x00099ae3) main_camera2_pane_g1_ParamLimits

0x47e3,	// (0x00099ae3) main_camera2_pane_g1

0x47ef,	// (0x00099aef) main_camera2_pane_g2_ParamLimits

0x47ef,	// (0x00099aef) main_camera2_pane_g2

0x47fb,	// (0x00099afb) main_camera2_pane_g3_ParamLimits

0x47fb,	// (0x00099afb) main_camera2_pane_g3

0x4807,	// (0x00099b07) main_camera2_pane_g4_ParamLimits

0x4807,	// (0x00099b07) main_camera2_pane_g4

0x4813,	// (0x00099b13) main_camera2_pane_g5_ParamLimits

0x4813,	// (0x00099b13) main_camera2_pane_g5

0x481f,	// (0x00099b1f) main_camera2_pane_g6_ParamLimits

0x481f,	// (0x00099b1f) main_camera2_pane_g6

0x482b,	// (0x00099b2b) main_camera2_pane_g7_ParamLimits

0x482b,	// (0x00099b2b) main_camera2_pane_g7

0x4837,	// (0x00099b37) main_camera2_pane_g8_ParamLimits

0x4837,	// (0x00099b37) main_camera2_pane_g8

0x0008,

0xf61e,	// (0x000a491e) main_camera2_pane_g_ParamLimits

0xf61e,	// (0x000a491e) main_camera2_pane_g

0x484f,	// (0x00099b4f) main_camera2_pane_t1_ParamLimits

0x484f,	// (0x00099b4f) main_camera2_pane_t1

0x4861,	// (0x00099b61) main_camera2_pane_t2_ParamLimits

0x4861,	// (0x00099b61) main_camera2_pane_t2

0x4873,	// (0x00099b73) main_camera2_pane_t3_ParamLimits

0x4873,	// (0x00099b73) main_camera2_pane_t3

0x4885,	// (0x00099b85) main_camera2_pane_t4_ParamLimits

0x4885,	// (0x00099b85) main_camera2_pane_t4

0x0006,

0xf631,	// (0x000a4931) main_camera2_pane_t_ParamLimits

0xf631,	// (0x000a4931) main_camera2_pane_t

0x48e7,	// (0x00099be7) cams_zoom_pane_cp4_ParamLimits

0x48e7,	// (0x00099be7) cams_zoom_pane_cp4

0x48f7,	// (0x00099bf7) image2_cif_pane_ParamLimits

0x48f7,	// (0x00099bf7) image2_cif_pane

0x490c,	// (0x00099c0c) image2_subqcif_pane_ParamLimits

0x490c,	// (0x00099c0c) image2_subqcif_pane

0x491b,	// (0x00099c1b) main_video2_pane_g1_ParamLimits

0x491b,	// (0x00099c1b) main_video2_pane_g1

0x492d,	// (0x00099c2d) main_video2_pane_g2_ParamLimits

0x492d,	// (0x00099c2d) main_video2_pane_g2

0x493d,	// (0x00099c3d) main_video2_pane_g3_ParamLimits

0x493d,	// (0x00099c3d) main_video2_pane_g3

0x494d,	// (0x00099c4d) main_video2_pane_g4_ParamLimits

0x494d,	// (0x00099c4d) main_video2_pane_g4

0x495d,	// (0x00099c5d) main_video2_pane_g5_ParamLimits

0x495d,	// (0x00099c5d) main_video2_pane_g5

0x496d,	// (0x00099c6d) main_video2_pane_g6_ParamLimits

0x496d,	// (0x00099c6d) main_video2_pane_g6

0x0005,

0xf640,	// (0x000a4940) main_video2_pane_g_ParamLimits

0xf640,	// (0x000a4940) main_video2_pane_g

0x497f,	// (0x00099c7f) main_video2_pane_t1_ParamLimits

0x497f,	// (0x00099c7f) main_video2_pane_t1

0x4999,	// (0x00099c99) main_video2_pane_t2_ParamLimits

0x4999,	// (0x00099c99) main_video2_pane_t2

0x49bf,	// (0x00099cbf) main_video2_pane_t3_ParamLimits

0x49bf,	// (0x00099cbf) main_video2_pane_t3

0x0002,

0xf64d,	// (0x000a494d) main_video2_pane_t_ParamLimits

0xf64d,	// (0x000a494d) main_video2_pane_t

0x427a,	// (0x0009957a) call_muted_g2

0x0001,

0xf5ef,	// (0x000a48ef) call_muted_g

0xec73,	// (0x000a3f73) main_mup2_pane

0xbd2a,	// (0x000a102a) main_mup2_pane_g1_ParamLimits

0xbd2a,	// (0x000a102a) main_mup2_pane_g1

0x49e5,	// (0x00099ce5) main_mup2_pane_g2_ParamLimits

0x49e5,	// (0x00099ce5) main_mup2_pane_g2

0x4c67,	// (0x00099f67) main_mup_pane_g13_cp1

0x4c6f,	// (0x00099f6f) mup_volume_pane_cp1

0x4a05,	// (0x00099d05) main_mup2_pane_g4_ParamLimits

0x4a05,	// (0x00099d05) main_mup2_pane_g4

0x4a1a,	// (0x00099d1a) main_mup2_pane_g5_ParamLimits

0x4a1a,	// (0x00099d1a) main_mup2_pane_g5

0x4a2f,	// (0x00099d2f) main_mup2_pane_g6_ParamLimits

0x4a2f,	// (0x00099d2f) main_mup2_pane_g6

0x4a44,	// (0x00099d44) main_mup2_pane_g7_ParamLimits

0x4a44,	// (0x00099d44) main_mup2_pane_g7

0x0006,

0xf654,	// (0x000a4954) main_mup2_pane_g_ParamLimits

0xf654,	// (0x000a4954) main_mup2_pane_g

0x4a60,	// (0x00099d60) main_mup2_pane_t1_ParamLimits

0x4a60,	// (0x00099d60) main_mup2_pane_t1

0x4a77,	// (0x00099d77) main_mup2_pane_t2_ParamLimits

0x4a77,	// (0x00099d77) main_mup2_pane_t2

0x4a8e,	// (0x00099d8e) main_mup2_pane_t3_ParamLimits

0x4a8e,	// (0x00099d8e) main_mup2_pane_t3

0x4aa5,	// (0x00099da5) main_mup2_pane_t4_ParamLimits

0x4aa5,	// (0x00099da5) main_mup2_pane_t4

0x4abf,	// (0x00099dbf) main_mup2_pane_t5_ParamLimits

0x4abf,	// (0x00099dbf) main_mup2_pane_t5

0x4ad9,	// (0x00099dd9) main_mup2_pane_t6_ParamLimits

0x4ad9,	// (0x00099dd9) main_mup2_pane_t6

0x0005,

0xf663,	// (0x000a4963) main_mup2_pane_t_ParamLimits

0xf663,	// (0x000a4963) main_mup2_pane_t

0x4b11,	// (0x00099e11) mup2_visualizer_pane_ParamLimits

0x4b11,	// (0x00099e11) mup2_visualizer_pane

0x4b47,	// (0x00099e47) mup_progress_pane_cp_ParamLimits

0x4b47,	// (0x00099e47) mup_progress_pane_cp

0x4c52,	// (0x00099f52) mup_volume_pane_cp_ParamLimits

0x4c52,	// (0x00099f52) mup_volume_pane_cp

0x4b5e,	// (0x00099e5e) mup2_visualizer_pane_g1_ParamLimits

0x4b5e,	// (0x00099e5e) mup2_visualizer_pane_g1

0xbd36,	// (0x000a1036) mup2_visualizer_pane_g2_ParamLimits

0xbd36,	// (0x000a1036) mup2_visualizer_pane_g2

0x4b73,	// (0x00099e73) mup2_visualizer_pane_g3_ParamLimits

0x4b73,	// (0x00099e73) mup2_visualizer_pane_g3

0x0002,

0xf670,	// (0x000a4970) mup2_visualizer_pane_g_ParamLimits

0xf670,	// (0x000a4970) mup2_visualizer_pane_g

0xab5e,	// (0x0009fe5e) aid_size_cell_fmradio

0x4390,	// (0x00099690) aid_height_parent_landcape

0x9fa8,	// (0x0009f2a8) wml_content_pane_cp

0x9fb0,	// (0x0009f2b0) wml_tabs_pane

0x9fb9,	// (0x0009f2b9) popup_wml_miniature_window

0x9fc1,	// (0x0009f2c1) scroll_pane_cp021

0x9fd5,	// (0x0009f2d5) wml_content_pane_comp8

0xec73,	// (0x000a3f73) bg_popup_sub_pane_cp05

0xbd54,	// (0x000a1054) popup_wml_miniature_window_g1

0xbd5c,	// (0x000a105c) wml_miniature_view_pane

0x4b81,	// (0x00099e81) aid_size_wml_view

0x4b89,	// (0x00099e89) wml_miniature_view_pane_g1

0x4b92,	// (0x00099e92) wml_miniature_view_pane_g2

0x4b9b,	// (0x00099e9b) wml_miniature_view_pane_g3

0x4ba3,	// (0x00099ea3) wml_miniature_view_pane_g4

0x4bab,	// (0x00099eab) wml_miniature_view_pane_g5

0x4bb3,	// (0x00099eb3) wml_miniature_view_pane_g6

0x4bbb,	// (0x00099ebb) wml_miniature_view_pane_g7

0x4bc3,	// (0x00099ec3) wml_miniature_view_pane_g8

0x0007,

0xf677,	// (0x000a4977) wml_miniature_view_pane_g

0xbd2a,	// (0x000a102a) background_graphic_ParamLimits

0xbd2a,	// (0x000a102a) background_graphic

0xbd64,	// (0x000a1064) wml_tabs_2_pane

0xbd6d,	// (0x000a106d) wml_tabs_3_pane_ParamLimits

0xbd6d,	// (0x000a106d) wml_tabs_3_pane

0xbd7f,	// (0x000a107f) wml_tabs_4_pane_ParamLimits

0xbd7f,	// (0x000a107f) wml_tabs_4_pane

0xbd95,	// (0x000a1095) wml_tabs_5_pane_ParamLimits

0xbd95,	// (0x000a1095) wml_tabs_5_pane

0xbdaf,	// (0x000a10af) wml_tabs_pane_g2_ParamLimits

0xbdaf,	// (0x000a10af) wml_tabs_pane_g2

0xbdc3,	// (0x000a10c3) wml_tabs_pane_g3_ParamLimits

0xbdc3,	// (0x000a10c3) wml_tabs_pane_g3

0x4bcb,	// (0x00099ecb) wml_tabs_2_active_pane_ParamLimits

0x4bcb,	// (0x00099ecb) wml_tabs_2_active_pane

0x4bdb,	// (0x00099edb) wml_tabs_2_passive_pane_ParamLimits

0x4bdb,	// (0x00099edb) wml_tabs_2_passive_pane

0x4beb,	// (0x00099eeb) wml_tabs_3_active_pane_cp_ParamLimits

0x4beb,	// (0x00099eeb) wml_tabs_3_active_pane_cp

0x4bfc,	// (0x00099efc) wml_tabs_3_passive_pane_ParamLimits

0x4bfc,	// (0x00099efc) wml_tabs_3_passive_pane

0x4c0d,	// (0x00099f0d) wml_tabs_3_passive_pane_cp_ParamLimits

0x4c0d,	// (0x00099f0d) wml_tabs_3_passive_pane_cp

0x4c1e,	// (0x00099f1e) tabs_4_active_pane

0x4c26,	// (0x00099f26) tabs_4_passive_pane

0x4c2e,	// (0x00099f2e) tabs_4_passive_pane_cp

0x4c36,	// (0x00099f36) tabs_4_passive_pane_cp2

0x4155,	// (0x00099455) aid_height_text

0x3885,	// (0x00098b85) mup_volume_cont_pane_ParamLimits

0x3885,	// (0x00098b85) mup_volume_cont_pane

0x12b2,	// (0x000965b2) aid_size_cell_pinb

0x12bc,	// (0x000965bc) aid_size_list_pinb

0x4b30,	// (0x00099e30) mup2_volume_cont_pane_ParamLimits

0x4b30,	// (0x00099e30) mup2_volume_cont_pane

0x4c3e,	// (0x00099f3e) mup2_volume_cont_pane_g1_ParamLimits

0x4c3e,	// (0x00099f3e) mup2_volume_cont_pane_g1

0x0ed7,	// (0x000961d7) aid_size_cell_touch_ParamLimits

0x0ed7,	// (0x000961d7) aid_size_cell_touch

0x1198,	// (0x00096498) touch_pane_ParamLimits

0x1198,	// (0x00096498) touch_pane

0x118e,	// (0x0009648e) main_rss2_pane

0xbde0,	// (0x000a10e0) listscroll_rss2_pane

0xbde9,	// (0x000a10e9) rss2_navigation_pane

0xbdf1,	// (0x000a10f1) list_rss2_pane

0xa63f,	// (0x0009f93f) scroll_pane_cp22

0xbdf9,	// (0x000a10f9) rss2_navigation_pane_g1

0xbe02,	// (0x000a1102) rss2_navigation_pane_g2

0xbe0a,	// (0x000a110a) rss2_navigation_pane_g3

0x0002,

0xf688,	// (0x000a4988) rss2_navigation_pane_g

0xbe12,	// (0x000a1112) rss2_navigation_pane_t1

0x4c77,	// (0x00099f77) rss2_list_single_pane_ParamLimits

0x4c77,	// (0x00099f77) rss2_list_single_pane

0xbe20,	// (0x000a1120) rss2_list_single_pane_t2

0xbe2e,	// (0x000a112e) rss2_list_single_pane_t3_ParamLimits

0xbe2e,	// (0x000a112e) rss2_list_single_pane_t3

0xbe4b,	// (0x000a114b) rss2_list_single_pane_t4

0x30fd,	// (0x000983fd) smil_status_pane_g1

0x43a7,	// (0x000996a7) main_image2_pane_ParamLimits

0x43a7,	// (0x000996a7) main_image2_pane

0x4843,	// (0x00099b43) main_camera2_pane_g9_ParamLimits

0x4843,	// (0x00099b43) main_camera2_pane_g9

0x4897,	// (0x00099b97) main_camera2_pane_t5_ParamLimits

0x4897,	// (0x00099b97) main_camera2_pane_t5

0x48a9,	// (0x00099ba9) main_camera2_pane_t6_ParamLimits

0x48a9,	// (0x00099ba9) main_camera2_pane_t6

0x4ca8,	// (0x00099fa8) main_image2_pane_g1_ParamLimits

0x4ca8,	// (0x00099fa8) main_image2_pane_g1

0x3ef5,	// (0x000991f5) smil2_video_pane_ParamLimits

0x3ef5,	// (0x000991f5) smil2_video_pane

0x0f0b,	// (0x0009620b) aid_zoom_text_primary_cp

0x1129,	// (0x00096429) popup_preview_fixed_window

0x9f11,	// (0x0009f211) im_reading_pane_g1

0x478d,	// (0x00099a8d) cams2_bc_adjust_pane_cp_ParamLimits

0x478d,	// (0x00099a8d) cams2_bc_adjust_pane_cp

0x48d9,	// (0x00099bd9) cams2_bc_adjust_pane_ParamLimits

0x48d9,	// (0x00099bd9) cams2_bc_adjust_pane

0xd0c7,	// (0x000a23c7) cams2_bc_adjust_pane_g1

0x4cb4,	// (0x00099fb4) cams2_slider_pane

0x4cbd,	// (0x00099fbd) cams2_slider_pane_g1

0x4cc6,	// (0x00099fc6) cams2_slider_pane_g2

0x0006,

0xf68f,	// (0x000a498f) cams2_slider_pane_g

0x13c2,	// (0x000966c2) calc_display_pane_ParamLimits

0x13e0,	// (0x000966e0) calc_paper_pane_ParamLimits

0x13fc,	// (0x000966fc) grid_calc_pane_ParamLimits

0x33d9,	// (0x000986d9) popup_clock_digital_window_t1_ParamLimits

0xaafb,	// (0x0009fdfb) main_image_pane_t1

0x13a8,	// (0x000966a8) aid_size_cell_calc_ParamLimits

0x13a8,	// (0x000966a8) aid_size_cell_calc

0x43d8,	// (0x000996d8) popup_blid_sat_info2_window_ParamLimits

0x43d8,	// (0x000996d8) popup_blid_sat_info2_window

0xbe61,	// (0x000a1161) aid_size_cell_blid

0xbe69,	// (0x000a1169) bg_popup_window_pane_cp07

0xbe8c,	// (0x000a118c) grid_popup_blid_pane

0xbe96,	// (0x000a1196) heading_pane_cp05_ParamLimits

0xbe96,	// (0x000a1196) heading_pane_cp05

0xbf60,	// (0x000a1260) cell_popup_blid_pane_ParamLimits

0xbf60,	// (0x000a1260) cell_popup_blid_pane

0xbf84,	// (0x000a1284) cell_popup_blid_pane_g1

0xbf8c,	// (0x000a128c) cell_popup_blid_pane_t1

0x4af6,	// (0x00099df6) mup2_indicator_pane_ParamLimits

0x4af6,	// (0x00099df6) mup2_indicator_pane

0x9e18,	// (0x0009f118) mup2_visualizer_osc_pane

0xbd42,	// (0x000a1042) mup2_visualizer_spec_pane_ParamLimits

0xbd42,	// (0x000a1042) mup2_visualizer_spec_pane

0x4ce0,	// (0x00099fe0) mup2_spec_half_pane

0x4ce9,	// (0x00099fe9) mup2_spec_half_pane_cp

0x4cf3,	// (0x00099ff3) mup2_spec_bar_pane_ParamLimits

0x4cf3,	// (0x00099ff3) mup2_spec_bar_pane

0xbcd7,	// (0x000a0fd7) mup2_spec_bar_pane_g1

0xbce1,	// (0x000a0fe1) mup2_spec_bar_pane_g2

0x0001,

0xf602,	// (0x000a4902) mup2_spec_bar_pane_g

0x4d12,	// (0x0009a012) mup2_osc_middle_pane

0xbcf3,	// (0x000a0ff3) mup2_visualizer_osc_pane_g1

0xe801,	// (0x000a3b01) popup_number_entry_window_t1_ParamLimits

0xe814,	// (0x000a3b14) popup_number_entry_window_t2_ParamLimits

0xe826,	// (0x000a3b26) popup_number_entry_window_t3_ParamLimits

0x11ef,	// (0x000964ef) popup_number_entry_window_t5_ParamLimits

0x11ef,	// (0x000964ef) popup_number_entry_window_t5

0xf0c6,	// (0x000a43c6) popup_number_entry_window_t_ParamLimits

0xe838,	// (0x000a3b38) text_title_cp2_ParamLimits

0x3bf5,	// (0x00098ef5) aid_hotspot_pointer_text2_pane

0x3c83,	// (0x00098f83) main_viewer_pane_g9_ParamLimits

0x3c83,	// (0x00098f83) main_viewer_pane_g9

0xa14a,	// (0x0009f44a) cale_month_pane_t1_ParamLimits

0xa187,	// (0x0009f487) bg_cale_pane_ParamLimits

0xa19f,	// (0x0009f49f) list_cale_pane_ParamLimits

0xa1b0,	// (0x0009f4b0) listscroll_cale_day_pane_t1

0xa1c2,	// (0x0009f4c2) scroll_pane_cp09_ParamLimits

0x38c0,	// (0x00098bc0) main_mup_eq_pane_t1_ParamLimits

0x38c0,	// (0x00098bc0) main_mup_eq_pane_t1

0x38da,	// (0x00098bda) main_mup_eq_pane_t2_ParamLimits

0x38da,	// (0x00098bda) main_mup_eq_pane_t2

0x38f4,	// (0x00098bf4) main_mup_eq_pane_t3_ParamLimits

0x38f4,	// (0x00098bf4) main_mup_eq_pane_t3

0x390c,	// (0x00098c0c) main_mup_eq_pane_t4_ParamLimits

0x390c,	// (0x00098c0c) main_mup_eq_pane_t4

0x3924,	// (0x00098c24) main_mup_eq_pane_t5_ParamLimits

0x3924,	// (0x00098c24) main_mup_eq_pane_t5

0x393c,	// (0x00098c3c) main_mup_eq_pane_t6_ParamLimits

0x393c,	// (0x00098c3c) main_mup_eq_pane_t6

0x3950,	// (0x00098c50) main_mup_eq_pane_t7_ParamLimits

0x3950,	// (0x00098c50) main_mup_eq_pane_t7

0x3964,	// (0x00098c64) main_mup_eq_pane_t8_ParamLimits

0x3964,	// (0x00098c64) main_mup_eq_pane_t8

0x397a,	// (0x00098c7a) main_mup_eq_pane_t9_ParamLimits

0x397a,	// (0x00098c7a) main_mup_eq_pane_t9

0x3992,	// (0x00098c92) main_mup_eq_pane_t10_ParamLimits

0x3992,	// (0x00098c92) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x000a4751) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x000a4751) main_mup_eq_pane_t

0x3a4f,	// (0x00098d4f) mup_equalizer_pane_cp5_ParamLimits

0x3a65,	// (0x00098d65) mup_equalizer_pane_cp6_ParamLimits

0x3a7d,	// (0x00098d7d) mup_equalizer_pane_cp7_ParamLimits

0x118e,	// (0x0009648e) main_gallery_pane

0xbcfc,	// (0x000a0ffc) smil2_volume_pane

0xbd04,	// (0x000a1004) smil_status_volume_pane_g1_ParamLimits

0xbd17,	// (0x000a1017) smil_status_volume_pane_g2_ParamLimits

0x4600,	// (0x00099900) smil_status_volume_pane_g3_ParamLimits

0xf607,	// (0x000a4907) smil_status_volume_pane_g_ParamLimits

0xbe69,	// (0x000a1169) bg_popup_window_pane_cp07_ParamLimits

0xbe77,	// (0x000a1177) blid_firmament_pane

0x4d1b,	// (0x0009a01b) aid_size_cell_gallery_ParamLimits

0x4d1b,	// (0x0009a01b) aid_size_cell_gallery

0x4d29,	// (0x0009a029) grid_gallery_pane_ParamLimits

0x4d29,	// (0x0009a029) grid_gallery_pane

0x4d39,	// (0x0009a039) cell_gallery_pane_ParamLimits

0x4d39,	// (0x0009a039) cell_gallery_pane

0xbf9a,	// (0x000a129a) bg_cell_gallery_focus_pane_ParamLimits

0xbf9a,	// (0x000a129a) bg_cell_gallery_focus_pane

0xbfac,	// (0x000a12ac) cell_gallery_pane_g1_ParamLimits

0xbfac,	// (0x000a12ac) cell_gallery_pane_g1

0x4d87,	// (0x0009a087) cell_gallery_pane_g2_ParamLimits

0x4d87,	// (0x0009a087) cell_gallery_pane_g2

0x4d94,	// (0x0009a094) cell_gallery_pane_g3_ParamLimits

0x4d94,	// (0x0009a094) cell_gallery_pane_g3

0xbfb8,	// (0x000a12b8) cell_gallery_pane_g4_ParamLimits

0xbfb8,	// (0x000a12b8) cell_gallery_pane_g4

0x0003,

0xf6b5,	// (0x000a49b5) cell_gallery_pane_g_ParamLimits

0xf6b5,	// (0x000a49b5) cell_gallery_pane_g

0xbfc4,	// (0x000a12c4) bg_cell_gallery_focus_pane_g1

0xbfcc,	// (0x000a12cc) bg_cell_gallery_focus_pane_g2

0xbfd4,	// (0x000a12d4) bg_cell_gallery_focus_pane_g3

0xbfdc,	// (0x000a12dc) bg_cell_gallery_focus_pane_g4

0xbfe4,	// (0x000a12e4) bg_cell_gallery_focus_pane_g5

0xbfec,	// (0x000a12ec) bg_cell_gallery_focus_pane_g6

0xbff4,	// (0x000a12f4) bg_cell_gallery_focus_pane_g7

0xbffc,	// (0x000a12fc) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6be,	// (0x000a49be) bg_cell_gallery_focus_pane_g

0xc010,	// (0x000a1310) aid_firma_cardinal

0xc024,	// (0x000a1324) blid_firmament_pane_t1

0xc03b,	// (0x000a133b) blid_firmament_pane_t2

0xc052,	// (0x000a1352) blid_firmament_pane_t3

0xc069,	// (0x000a1369) blid_firmament_pane_t4

0x0003,

0xf6cf,	// (0x000a49cf) blid_firmament_pane_t

0xc080,	// (0x000a1380) blid_sat_info_pane

0xc090,	// (0x000a1390) blid_sat_info_pane_g1

0xc090,	// (0x000a1390) blid_sat_info_pane_g2

0x0001,

0xf6d8,	// (0x000a49d8) blid_sat_info_pane_g

0xc09a,	// (0x000a139a) blid_sat_info_pane_t1

0xc0a8,	// (0x000a13a8) smil2_volume_content_pane

0xc0b1,	// (0x000a13b1) smil2_volume_pane_g1

0xf05c,	// (0x000a435c) smil2_volume_content_pane_g1

0xc0b9,	// (0x000a13b9) smil2_volume_content_pane_g2

0xc0c2,	// (0x000a13c2) smil2_volume_content_pane_g3

0xc0cb,	// (0x000a13cb) smil2_volume_content_pane_g4

0xc0d4,	// (0x000a13d4) smil2_volume_content_pane_g5

0xc0dd,	// (0x000a13dd) smil2_volume_content_pane_g6

0xc0e6,	// (0x000a13e6) smil2_volume_content_pane_g7

0xc0ef,	// (0x000a13ef) smil2_volume_content_pane_g8

0xc0f8,	// (0x000a13f8) smil2_volume_content_pane_g9

0xc101,	// (0x000a1401) smil2_volume_content_pane_g10

0x0009,

0xf6dd,	// (0x000a49dd) smil2_volume_content_pane_g

0x19e7,	// (0x00096ce7) cale_week_day_heading_pane_t1_ParamLimits

0x1a02,	// (0x00096d02) cale_week_day_heading_pane_t2_ParamLimits

0x1a1d,	// (0x00096d1d) cale_week_day_heading_pane_t3_ParamLimits

0x1a38,	// (0x00096d38) cale_week_day_heading_pane_t4_ParamLimits

0x1a53,	// (0x00096d53) cale_week_day_heading_pane_t5_ParamLimits

0x1a6e,	// (0x00096d6e) cale_week_day_heading_pane_t6_ParamLimits

0x1a89,	// (0x00096d89) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x000a44cd) cale_week_day_heading_pane_t_ParamLimits

0x9dbd,	// (0x0009f0bd) bg_cale_side_pane_ParamLimits

0x1aa4,	// (0x00096da4) cale_week_time_pane_t1_ParamLimits

0x1abe,	// (0x00096dbe) cale_week_time_pane_t2_ParamLimits

0x1ad8,	// (0x00096dd8) cale_week_time_pane_t3_ParamLimits

0x1af2,	// (0x00096df2) cale_week_time_pane_t4_ParamLimits

0x1b0c,	// (0x00096e0c) cale_week_time_pane_t5_ParamLimits

0x1b26,	// (0x00096e26) cale_week_time_pane_t6_ParamLimits

0x1b44,	// (0x00096e44) cale_week_time_pane_t7_ParamLimits

0x1b66,	// (0x00096e66) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x000a44dc) cale_week_time_pane_t_ParamLimits

0x1b8a,	// (0x00096e8a) cell_cale_week_pane_g2_ParamLimits

0x9dbd,	// (0x0009f0bd) bg_cale_side_pane_cp01_ParamLimits

0x2ec8,	// (0x000981c8) cale_month_week_pane_t1_ParamLimits

0x2ee1,	// (0x000981e1) cale_month_week_pane_t2_ParamLimits

0x2efa,	// (0x000981fa) cale_month_week_pane_t3_ParamLimits

0x2f13,	// (0x00098213) cale_month_week_pane_t4_ParamLimits

0x2f2c,	// (0x0009822c) cale_month_week_pane_t5_ParamLimits

0x2f4d,	// (0x0009824d) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x000a45b1) cale_month_week_pane_t_ParamLimits

0x30ba,	// (0x000983ba) cell_cale_month_pane_g1_ParamLimits

0x118e,	// (0x0009648e) main_cale_event_viewer_pane

0xe7d7,	// (0x000a3ad7) listscroll_cale_event_viewer_pane

0xc10a,	// (0x000a140a) list_cale_ev_pane

0xc112,	// (0x000a1412) scroll_pane_cp023

0xc11e,	// (0x000a141e) field_cale_ev_pane_ParamLimits

0xc11e,	// (0x000a141e) field_cale_ev_pane

0xc13c,	// (0x000a143c) field_cale_ev_content_pane_ParamLimits

0xc13c,	// (0x000a143c) field_cale_ev_content_pane

0xc148,	// (0x000a1448) field_cale_ev_pane_g1_ParamLimits

0xc148,	// (0x000a1448) field_cale_ev_pane_g1

0xc154,	// (0x000a1454) field_cale_ev_pane_g2_ParamLimits

0xc154,	// (0x000a1454) field_cale_ev_pane_g2

0xc16c,	// (0x000a146c) field_cale_ev_pane_g3_ParamLimits

0xc16c,	// (0x000a146c) field_cale_ev_pane_g3

0x0002,

0xf6f2,	// (0x000a49f2) field_cale_ev_pane_g_ParamLimits

0xf6f2,	// (0x000a49f2) field_cale_ev_pane_g

0xc184,	// (0x000a1484) field_cale_ev_pane_t1_ParamLimits

0xc184,	// (0x000a1484) field_cale_ev_pane_t1

0xc19b,	// (0x000a149b) field_cale_ev_content_pane_t1_ParamLimits

0xc19b,	// (0x000a149b) field_cale_ev_content_pane_t1

0xa9e1,	// (0x0009fce1) bg_button_pane_cp01

0x1778,	// (0x00096a78) listscroll_cale_week_pane_ParamLimits

0x9d68,	// (0x0009f068) popup_toolbar_window_cp01

0x9d8e,	// (0x0009f08e) listscroll_cale_week_pane_t1_ParamLimits

0x1778,	// (0x00096a78) listscroll_cale_day_pane_ParamLimits

0x9d68,	// (0x0009f068) popup_toolbar_window_cp02

0xa1b0,	// (0x0009f4b0) listscroll_cale_day_pane_t1_ParamLimits

0x1778,	// (0x00096a78) main_cale_month_pane_ParamLimits

0x44df,	// (0x000997df) popup_toolbar_window_cp03_ParamLimits

0x44df,	// (0x000997df) popup_toolbar_window_cp03

0x3e0b,	// (0x0009910b) main_image_pane_g2_ParamLimits

0x3e0b,	// (0x0009910b) main_image_pane_g2

0x3e17,	// (0x00099117) main_image_pane_g3_ParamLimits

0x3e17,	// (0x00099117) main_image_pane_g3

0x0002,

0xf4e3,	// (0x000a47e3) main_image_pane_g_ParamLimits

0xf4e3,	// (0x000a47e3) main_image_pane_g

0xaafb,	// (0x0009fdfb) main_image_pane_t1_ParamLimits

0x3e23,	// (0x00099123) main_image_pane_t2_ParamLimits

0x3e23,	// (0x00099123) main_image_pane_t2

0x3e35,	// (0x00099135) main_image_pane_t3_ParamLimits

0x3e35,	// (0x00099135) main_image_pane_t3

0x3e47,	// (0x00099147) main_image_pane_t4_ParamLimits

0x3e47,	// (0x00099147) main_image_pane_t4

0x0003,

0xf4ea,	// (0x000a47ea) main_image_pane_t_ParamLimits

0xf4ea,	// (0x000a47ea) main_image_pane_t

0x3e59,	// (0x00099159) popup_image_details_window_cp01

0x3e63,	// (0x00099163) popup_toobar_trans_pane_cp01_ParamLimits

0x3e63,	// (0x00099163) popup_toobar_trans_pane_cp01

0x442f,	// (0x0009972f) popup_image_details_window_ParamLimits

0x442f,	// (0x0009972f) popup_image_details_window

0x443d,	// (0x0009973d) popup_image_focus_window

0x477f,	// (0x00099a7f) camera2_autofocus_pane_ParamLimits

0x477f,	// (0x00099a7f) camera2_autofocus_pane

0xe7d7,	// (0x000a3ad7) bg_popup_sub_pane_cp06

0xc1b9,	// (0x000a14b9) popup_image_focus_window_g1

0xc1c1,	// (0x000a14c1) popup_image_focus_window_g2

0xc1c9,	// (0x000a14c9) popup_image_focus_window_g3

0xc1d1,	// (0x000a14d1) popup_image_focus_window_g4

0x0003,

0xf6f9,	// (0x000a49f9) popup_image_focus_window_g

0xc1d9,	// (0x000a14d9) popup_image_focus_window_t1

0xc1e7,	// (0x000a14e7) popup_image_focus_window_t2

0xc1f7,	// (0x000a14f7) popup_image_focus_window_t3

0x0002,

0xf702,	// (0x000a4a02) popup_image_focus_window_t

0xc205,	// (0x000a1505) camera2_autofocus_pane_g1

0xe920,	// (0x000a3c20) bg_tb_trans_pane_cp01

0xc213,	// (0x000a1513) popup_image_details_window_g1

0xc226,	// (0x000a1526) popup_image_details_window_g2

0x0002,

0xf714,	// (0x000a4a14) popup_image_details_window_g

0xc24f,	// (0x000a154f) popup_image_details_window_t1

0xc261,	// (0x000a1561) popup_image_details_window_t2

0xc27a,	// (0x000a157a) popup_image_details_window_t3

0xc28e,	// (0x000a158e) popup_image_details_window_t4

0xc2a9,	// (0x000a15a9) popup_image_details_window_t5

0x0004,

0xf71b,	// (0x000a4a1b) popup_image_details_window_t

0xef7f,	// (0x000a427f) bg_calc_paper_pane_ParamLimits

0x118e,	// (0x0009648e) grid_highlight_pane_cp013

0x14f9,	// (0x000967f9) list_calc_pane_ParamLimits

0x150b,	// (0x0009680b) scroll_pane_cp024

0xef93,	// (0x000a4293) bg_calc_display_pane_ParamLimits

0x1513,	// (0x00096813) calc_display_pane_t1_ParamLimits

0x1528,	// (0x00096828) calc_display_pane_t2_ParamLimits

0x153d,	// (0x0009683d) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x000a444d) calc_display_pane_t_ParamLimits

0x1616,	// (0x00096916) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x000a446a) cell_calc_pane_g

0x161f,	// (0x0009691f) cell_calc_pane_t1

0xeff2,	// (0x000a42f2) grid_highlight_pane_cp02_ParamLimits

0xf008,	// (0x000a4308) toolbar_button_pane_cp01_ParamLimits

0xf008,	// (0x000a4308) toolbar_button_pane_cp01

0xab40,	// (0x0009fe40) temp_image_control_pane_ParamLimits

0xab40,	// (0x0009fe40) temp_image_control_pane

0x43a7,	// (0x000996a7) main_mp3_pane

0xc2c3,	// (0x000a15c3) temp_image_control_pane_g1_ParamLimits

0xc2c3,	// (0x000a15c3) temp_image_control_pane_g1

0xc2d1,	// (0x000a15d1) temp_image_control_pane_g2_ParamLimits

0xc2d1,	// (0x000a15d1) temp_image_control_pane_g2

0xc2e3,	// (0x000a15e3) temp_image_control_pane_g3_ParamLimits

0xc2e3,	// (0x000a15e3) temp_image_control_pane_g3

0x4dd1,	// (0x0009a0d1) temp_image_control_pane_g4_ParamLimits

0x4dd1,	// (0x0009a0d1) temp_image_control_pane_g4

0x0003,

0xf726,	// (0x000a4a26) temp_image_control_pane_g_ParamLimits

0xf726,	// (0x000a4a26) temp_image_control_pane_g

0xc2c3,	// (0x000a15c3) main_mp3_pane_g1

0x4de2,	// (0x0009a0e2) main_mp3_pane_g2

0x0007,

0xf72f,	// (0x000a4a2f) main_mp3_pane_g

0xc326,	// (0x000a1626) main_mp3_pane_t1

0x9e20,	// (0x0009f120) main_camera_pane_g8_ParamLimits

0x9e20,	// (0x0009f120) main_camera_pane_g8

0x1e17,	// (0x00097117) main_video_pane_g7_ParamLimits

0x1e17,	// (0x00097117) main_video_pane_g7

0x48c7,	// (0x00099bc7) main_camera2_pane_t7_ParamLimits

0x48c7,	// (0x00099bc7) main_camera2_pane_t7

0x9f68,	// (0x0009f268) scroll_pane_cp025_ParamLimits

0x9f68,	// (0x0009f268) scroll_pane_cp025

0x9f7c,	// (0x0009f27c) scroll_pane_cp026_ParamLimits

0x9f7c,	// (0x0009f27c) scroll_pane_cp026

0x9f8b,	// (0x0009f28b) wml_content_pane_ParamLimits

0x118e,	// (0x0009648e) main_touch_calib_pane

0x4e86,	// (0x0009a186) main_touch_calib_pane_g1

0x4e92,	// (0x0009a192) main_touch_calib_pane_g2

0x4e9e,	// (0x0009a19e) main_touch_calib_pane_g3

0x4eaa,	// (0x0009a1aa) main_touch_calib_pane_g4

0x0003,

0xf74d,	// (0x000a4a4d) main_touch_calib_pane_g

0x4eb6,	// (0x0009a1b6) main_touch_calib_pane_t1

0x4ecf,	// (0x0009a1cf) main_touch_calib_pane_t2

0x0004,

0xf756,	// (0x000a4a56) main_touch_calib_pane_t

0xa71b,	// (0x0009fa1b) mup_progress_pane_cp02

0xa750,	// (0x0009fa50) navi_pane_g1

0xa80b,	// (0x0009fb0b) navi_pane_mp_t3

0x43a7,	// (0x000996a7) main_mp3_pane_ParamLimits

0x451c,	// (0x0009981c) navi_pane_ParamLimits

0xc2c3,	// (0x000a15c3) main_mp3_pane_g1_ParamLimits

0x4de2,	// (0x0009a0e2) main_mp3_pane_g2_ParamLimits

0x4dee,	// (0x0009a0ee) main_mp3_pane_g3_ParamLimits

0x4dee,	// (0x0009a0ee) main_mp3_pane_g3

0x4dfa,	// (0x0009a0fa) main_mp3_pane_g4_ParamLimits

0x4dfa,	// (0x0009a0fa) main_mp3_pane_g4

0xc2f3,	// (0x000a15f3) main_mp3_pane_g5_ParamLimits

0xc2f3,	// (0x000a15f3) main_mp3_pane_g5

0xc301,	// (0x000a1601) main_mp3_pane_g6_ParamLimits

0xc301,	// (0x000a1601) main_mp3_pane_g6

0xc30e,	// (0x000a160e) main_mp3_pane_g7_ParamLimits

0xc30e,	// (0x000a160e) main_mp3_pane_g7

0xc31a,	// (0x000a161a) main_mp3_pane_g8_ParamLimits

0xc31a,	// (0x000a161a) main_mp3_pane_g8

0xf72f,	// (0x000a4a2f) main_mp3_pane_g_ParamLimits

0x4e06,	// (0x0009a106) main_mp3_pane_t2

0x4e16,	// (0x0009a116) main_mp3_pane_t3

0xc334,	// (0x000a1634) main_mp3_pane_t4

0xc342,	// (0x000a1642) main_mp3_pane_t5

0x0005,

0xf740,	// (0x000a4a40) main_mp3_pane_t

0xc350,	// (0x000a1650) mup_progress_pane_cp01

0x0f0b,	// (0x0009620b) aid_zoom_text_secondary2

0xc10a,	// (0x000a140a) list_cale_ev2_pane

0xc112,	// (0x000a1412) scroll_pane_cp023_ParamLimits

0x4f2a,	// (0x0009a22a) field_cale_ev2_pane_ParamLimits

0x4f2a,	// (0x0009a22a) field_cale_ev2_pane

0x4f53,	// (0x0009a253) field_cale_ev2_pane_g1_ParamLimits

0x4f53,	// (0x0009a253) field_cale_ev2_pane_g1

0x4f5f,	// (0x0009a25f) field_cale_ev2_pane_g2_ParamLimits

0x4f5f,	// (0x0009a25f) field_cale_ev2_pane_g2

0x4f77,	// (0x0009a277) field_cale_ev2_pane_g3_ParamLimits

0x4f77,	// (0x0009a277) field_cale_ev2_pane_g3

0x0003,

0xf761,	// (0x000a4a61) field_cale_ev2_pane_g_ParamLimits

0xf761,	// (0x000a4a61) field_cale_ev2_pane_g

0xc364,	// (0x000a1664) field_cale_ev2_pane_t1_ParamLimits

0xc364,	// (0x000a1664) field_cale_ev2_pane_t1

0xc37b,	// (0x000a167b) field_cale_ev2_pane_t2_ParamLimits

0xc37b,	// (0x000a167b) field_cale_ev2_pane_t2

0x0001,

0xf76a,	// (0x000a4a6a) field_cale_ev2_pane_t_ParamLimits

0xf76a,	// (0x000a4a6a) field_cale_ev2_pane_t

0x3ceb,	// (0x00098feb) main_postcard_pane_g5_ParamLimits

0x3ceb,	// (0x00098feb) main_postcard_pane_g5

0x3cf9,	// (0x00098ff9) main_postcard_pane_g6_ParamLimits

0x3cf9,	// (0x00098ff9) main_postcard_pane_g6

0x1c61,	// (0x00096f61) camera2_autofocus_pane_cp_ParamLimits

0x1c61,	// (0x00096f61) camera2_autofocus_pane_cp

0x43a7,	// (0x000996a7) main_mup3_pane

0x4fae,	// (0x0009a2ae) main_mup3_pane_g1_ParamLimits

0x4fae,	// (0x0009a2ae) main_mup3_pane_g1

0x4fcf,	// (0x0009a2cf) main_mup3_pane_g2_ParamLimits

0x4fcf,	// (0x0009a2cf) main_mup3_pane_g2

0x5047,	// (0x0009a347) main_mup3_pane_g3_ParamLimits

0x5047,	// (0x0009a347) main_mup3_pane_g3

0x508a,	// (0x0009a38a) main_mup3_pane_g4_ParamLimits

0x508a,	// (0x0009a38a) main_mup3_pane_g4

0x50cd,	// (0x0009a3cd) main_mup3_pane_g5_ParamLimits

0x50cd,	// (0x0009a3cd) main_mup3_pane_g5

0x5110,	// (0x0009a410) main_mup3_pane_g6_ParamLimits

0x5110,	// (0x0009a410) main_mup3_pane_g6

0xc3b0,	// (0x000a16b0) main_mup3_pane_g7_ParamLimits

0xc3b0,	// (0x000a16b0) main_mup3_pane_g7

0x0007,

0xf77a,	// (0x000a4a7a) main_mup3_pane_g_ParamLimits

0xf77a,	// (0x000a4a7a) main_mup3_pane_g

0x5186,	// (0x0009a486) main_mup3_pane_t1_ParamLimits

0x5186,	// (0x0009a486) main_mup3_pane_t1

0x51f5,	// (0x0009a4f5) main_mup3_pane_t2_ParamLimits

0x51f5,	// (0x0009a4f5) main_mup3_pane_t2

0x52be,	// (0x0009a5be) main_mup3_pane_t4_ParamLimits

0x52be,	// (0x0009a5be) main_mup3_pane_t4

0x530c,	// (0x0009a60c) main_mup3_pane_t5_ParamLimits

0x530c,	// (0x0009a60c) main_mup3_pane_t5

0x53bc,	// (0x0009a6bc) main_mup3_pane_t6_ParamLimits

0x53bc,	// (0x0009a6bc) main_mup3_pane_t6

0x0005,

0xf78b,	// (0x000a4a8b) main_mup3_pane_t_ParamLimits

0xf78b,	// (0x000a4a8b) main_mup3_pane_t

0x5468,	// (0x0009a768) mup3_progress_pane_ParamLimits

0x5468,	// (0x0009a768) mup3_progress_pane

0x54e6,	// (0x0009a7e6) popup_mup3_control_window_ParamLimits

0x54e6,	// (0x0009a7e6) popup_mup3_control_window

0xc3be,	// (0x000a16be) popup_mup3_text_window

0x54ff,	// (0x0009a7ff) mup3_progress_pane_t1

0x551e,	// (0x0009a81e) mup3_progress_pane_t2

0xc3c6,	// (0x000a16c6) mup3_progress_pane_t3

0x0002,

0xf798,	// (0x000a4a98) mup3_progress_pane_t

0xc3e3,	// (0x000a16e3) mup_progress_pane_cp03

0xe7d7,	// (0x000a3ad7) bg_tb_trans_pane_cp04

0x553d,	// (0x0009a83d) mup3_volume_pane

0x5545,	// (0x0009a845) popup_mup3_control_window_g1

0x554e,	// (0x0009a84e) mup3_volume_pane_g1

0x5557,	// (0x0009a857) mup3_volume_pane_g2

0x5560,	// (0x0009a860) mup3_volume_pane_g3

0x0002,

0xf79f,	// (0x000a4a9f) mup3_volume_pane_g

0xe7d7,	// (0x000a3ad7) bg_tb_trans_pane_cp03

0xc3f3,	// (0x000a16f3) popup_mup3_text_window_g1

0xc3fb,	// (0x000a16fb) popup_mup3_text_window_t1

0xefdb,	// (0x000a42db) list_calc_item_pane_g1_ParamLimits

0xbdd7,	// (0x000a10d7) mup_volume_pane_cp_g1

0x4ee8,	// (0x0009a1e8) main_touch_calib_pane_t3

0x4efe,	// (0x0009a1fe) main_touch_calib_pane_t4

0x4f14,	// (0x0009a214) main_touch_calib_pane_t5

0x0ec3,	// (0x000961c3) aid_cell_size_toolbar2

0x0ecb,	// (0x000961cb) aid_popup3_width_pane

0x0dd3,	// (0x000960d3) aid_zoom_text_msg_primary

0x1c36,	// (0x00096f36) vorec_t7

0xef9f,	// (0x000a429f) bg_calc_paper_pane_g1_ParamLimits

0xefab,	// (0x000a42ab) bg_calc_paper_pane_g2_ParamLimits

0xefb7,	// (0x000a42b7) bg_calc_paper_pane_g3_ParamLimits

0xefc3,	// (0x000a42c3) bg_calc_paper_pane_g4_ParamLimits

0xefcf,	// (0x000a42cf) bg_calc_paper_pane_g5_ParamLimits

0x157c,	// (0x0009687c) bg_calc_paper_pane_g6_ParamLimits

0x158d,	// (0x0009688d) bg_calc_paper_pane_g7_ParamLimits

0x159e,	// (0x0009689e) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x000a4454) bg_calc_paper_pane_g_ParamLimits

0x15af,	// (0x000968af) calc_bg_paper_pane_g9_ParamLimits

0x1d48,	// (0x00097048) image_qvga_pane_ParamLimits

0x1d48,	// (0x00097048) image_qvga_pane

0xeece,	// (0x000a41ce) bg_popup_sub_pane_cp04_ParamLimits

0xaa77,	// (0x0009fd77) popup_mup_playback_window_g1_ParamLimits

0xaa83,	// (0x0009fd83) popup_mup_playback_window_t1_ParamLimits

0xaa98,	// (0x0009fd98) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x000a47de) popup_mup_playback_window_t_ParamLimits

0x49f6,	// (0x00099cf6) main_mup2_pane_g3_ParamLimits

0x49f6,	// (0x00099cf6) main_mup2_pane_g3

0x20f7,	// (0x000973f7) popup_toolbar_window_cp04

0xae7a,	// (0x000a017a) popup_call2_audio_second_window_g3_ParamLimits

0xae7a,	// (0x000a017a) popup_call2_audio_second_window_g3

0xb284,	// (0x000a0584) popup_call2_audio_first_window_g4_ParamLimits

0xb284,	// (0x000a0584) popup_call2_audio_first_window_g4

0xb903,	// (0x000a0c03) popup_call2_audio_in_window_g4_ParamLimits

0xb903,	// (0x000a0c03) popup_call2_audio_in_window_g4

0x3dfe,	// (0x000990fe) aid_area_sk_bg_cut_ParamLimits

0x3dfe,	// (0x000990fe) aid_area_sk_bg_cut

0xaaad,	// (0x0009fdad) aid_area_sk_bg_cut_2_ParamLimits

0xaaad,	// (0x0009fdad) aid_area_sk_bg_cut_2

0x4d77,	// (0x0009a077) aid_placing_details_win

0x4d7f,	// (0x0009a07f) aid_placing_details_win_2

0xc205,	// (0x000a1505) camera2_autofocus_pane_g1_ParamLimits

0x111a,	// (0x0009641a) popup_fixed_preview_cale_window_ParamLimits

0x111a,	// (0x0009641a) popup_fixed_preview_cale_window

0xa889,	// (0x0009fb89) navi_slider_pane_g3

0xa892,	// (0x0009fb92) navi_slider_pane_g4

0xa89b,	// (0x0009fb9b) navi_slider_pane_g5

0xa889,	// (0x0009fb89) navi_slider_pane_g6

0x3654,	// (0x00098954) navi_slider_pane_g7

0xa9ae,	// (0x0009fcae) mup_scale_pane_g3

0xa9b7,	// (0x0009fcb7) mup_scale_pane_g4

0xa9c0,	// (0x0009fcc0) mup_scale_pane_g5

0x3a95,	// (0x00098d95) mup_scale_pane_g6

0x3a9e,	// (0x00098d9e) mup_scale_pane_g7

0xa889,	// (0x0009fb89) cams2_slider_pane_g3

0xbe59,	// (0x000a1159) cams2_slider_pane_g4

0x4ccf,	// (0x00099fcf) cams2_slider_pane_g5

0xa889,	// (0x0009fb89) cams2_slider_pane_g6

0x4cd7,	// (0x00099fd7) cams2_slider_pane_g7

0xc090,	// (0x000a1390) camera2_autofocus_pane_cp_g1

0xbc70,	// (0x000a0f70) bg_popup_preview_window_pane_cp02_ParamLimits

0xbc70,	// (0x000a0f70) bg_popup_preview_window_pane_cp02

0xc409,	// (0x000a1709) list_fp_cale_pane_ParamLimits

0xc409,	// (0x000a1709) list_fp_cale_pane

0xc415,	// (0x000a1715) popup_fixed_preview_cale_window_t1_ParamLimits

0xc415,	// (0x000a1715) popup_fixed_preview_cale_window_t1

0x5569,	// (0x0009a869) popup_fixed_preview_cale_window_t2_ParamLimits

0x5569,	// (0x0009a869) popup_fixed_preview_cale_window_t2

0x557e,	// (0x0009a87e) popup_fixed_preview_cale_window_t3_ParamLimits

0x557e,	// (0x0009a87e) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a6,	// (0x000a4aa6) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a6,	// (0x000a4aa6) popup_fixed_preview_cale_window_t

0x5593,	// (0x0009a893) list_single_fp_cale_pane_ParamLimits

0x5593,	// (0x0009a893) list_single_fp_cale_pane

0xc433,	// (0x000a1733) list_single_fp_cale_pane_g1_ParamLimits

0xc433,	// (0x000a1733) list_single_fp_cale_pane_g1

0xc43f,	// (0x000a173f) list_single_fp_cale_pane_g2_ParamLimits

0xc43f,	// (0x000a173f) list_single_fp_cale_pane_g2

0x0002,

0xf7ad,	// (0x000a4aad) list_single_fp_cale_pane_g_ParamLimits

0xf7ad,	// (0x000a4aad) list_single_fp_cale_pane_g

0xc458,	// (0x000a1758) list_single_fp_cale_pane_t1_ParamLimits

0xc458,	// (0x000a1758) list_single_fp_cale_pane_t1

0xc46a,	// (0x000a176a) list_single_fp_cale_pane_t2_ParamLimits

0xc46a,	// (0x000a176a) list_single_fp_cale_pane_t2

0x0001,

0xf7b4,	// (0x000a4ab4) list_single_fp_cale_pane_t_ParamLimits

0xf7b4,	// (0x000a4ab4) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x118e,	// (0x0009648e) main_dialer_pane

0x55a6,	// (0x0009a8a6) aid_cell_size_keypad

0x55b0,	// (0x0009a8b0) dialer_ne_pane

0x55ba,	// (0x0009a8ba) grid_dialer_command_1_pane

0x55c2,	// (0x0009a8c2) grid_dialer_command_2_pane

0x55ca,	// (0x0009a8ca) grid_dialer_keypad_pane

0x55dc,	// (0x0009a8dc) bg_popup_call_pane_cp06_ParamLimits

0x55dc,	// (0x0009a8dc) bg_popup_call_pane_cp06

0x55e8,	// (0x0009a8e8) dialer_ne_clear_pane_ParamLimits

0x55e8,	// (0x0009a8e8) dialer_ne_clear_pane

0xc49d,	// (0x000a179d) dialer_ne_pane_g1

0xc4a5,	// (0x000a17a5) dialer_ne_pane_t1_ParamLimits

0xc4a5,	// (0x000a17a5) dialer_ne_pane_t1

0x55f4,	// (0x0009a8f4) dialer_ne_pane_t2_ParamLimits

0x55f4,	// (0x0009a8f4) dialer_ne_pane_t2

0x5611,	// (0x0009a911) dialer_ne_pane_t3_ParamLimits

0x5611,	// (0x0009a911) dialer_ne_pane_t3

0x0002,

0xf7b9,	// (0x000a4ab9) dialer_ne_pane_t_ParamLimits

0xf7b9,	// (0x000a4ab9) dialer_ne_pane_t

0x5635,	// (0x0009a935) dialer_ne_pane_t3_copy1_ParamLimits

0x5635,	// (0x0009a935) dialer_ne_pane_t3_copy1

0x5659,	// (0x0009a959) cell_dialer_keypad_pane_ParamLimits

0x5659,	// (0x0009a959) cell_dialer_keypad_pane

0x5670,	// (0x0009a970) cell_dialer_command_1_pane_ParamLimits

0x5670,	// (0x0009a970) cell_dialer_command_1_pane

0x5686,	// (0x0009a986) cell_dialer_command_2_pane_ParamLimits

0x5686,	// (0x0009a986) cell_dialer_command_2_pane

0xc4b7,	// (0x000a17b7) bg_button_pane_cp02_ParamLimits

0xc4b7,	// (0x000a17b7) bg_button_pane_cp02

0x5695,	// (0x0009a995) cell_dialer_keypad_pane_g1_ParamLimits

0x5695,	// (0x0009a995) cell_dialer_keypad_pane_g1

0xc4b7,	// (0x000a17b7) bg_button_pane_cp03_ParamLimits

0xc4b7,	// (0x000a17b7) bg_button_pane_cp03

0x56aa,	// (0x0009a9aa) cell_dialer_command_1_pane_g1_ParamLimits

0x56aa,	// (0x0009a9aa) cell_dialer_command_1_pane_g1

0xc4c3,	// (0x000a17c3) bg_button_pane_cp04

0x56be,	// (0x0009a9be) cell_dialer_command_2_pane_g1

0x9e18,	// (0x0009f118) bg_button_pane_cp06

0xc4cb,	// (0x000a17cb) dialer_ne_clear_pane_g1

0xa75c,	// (0x0009fa5c) navi_pane_g2

0xa78a,	// (0x0009fa8a) navi_pane_g3

0x0002,

0xf3e1,	// (0x000a46e1) navi_pane_g

0xa819,	// (0x0009fb19) navi_pane_mv_g2

0xa840,	// (0x0009fb40) navi_pane_mv_g5

0x361f,	// (0x0009891f) navi_pane_mv_t1

0xef93,	// (0x000a4293) main_clock2_pane

0xe92e,	// (0x000a3c2e) main_clock2_list_pane_ParamLimits

0xe92e,	// (0x000a3c2e) main_clock2_list_pane

0x571a,	// (0x0009aa1a) main_clock2_pane_t1_ParamLimits

0x571a,	// (0x0009aa1a) main_clock2_pane_t1

0x5748,	// (0x0009aa48) main_clock2_pane_t2_ParamLimits

0x5748,	// (0x0009aa48) main_clock2_pane_t2

0x0004,

0xf7c5,	// (0x000a4ac5) main_clock2_pane_t_ParamLimits

0xf7c5,	// (0x000a4ac5) main_clock2_pane_t

0x57ad,	// (0x0009aaad) popup_clock_analogue_window_cp03_ParamLimits

0x57ad,	// (0x0009aaad) popup_clock_analogue_window_cp03

0x57cb,	// (0x0009aacb) popup_clock_digital_window_cp02_ParamLimits

0x57cb,	// (0x0009aacb) popup_clock_digital_window_cp02

0x5840,	// (0x0009ab40) main_clock2_list_single_pane_ParamLimits

0x5840,	// (0x0009ab40) main_clock2_list_single_pane

0x9e18,	// (0x0009f118) list_highlight_pane_cp05

0xc509,	// (0x000a1809) main_clock2_list_single_pane_t1

0x20f7,	// (0x000973f7) popup_toolbar_window_cp04_ParamLimits

0x4da1,	// (0x0009a0a1) camera2_autofocus_pane_g2_ParamLimits

0x4da1,	// (0x0009a0a1) camera2_autofocus_pane_g2

0x4dad,	// (0x0009a0ad) camera2_autofocus_pane_g3_ParamLimits

0x4dad,	// (0x0009a0ad) camera2_autofocus_pane_g3

0x4db9,	// (0x0009a0b9) camera2_autofocus_pane_g4_ParamLimits

0x4db9,	// (0x0009a0b9) camera2_autofocus_pane_g4

0x4dc5,	// (0x0009a0c5) camera2_autofocus_pane_g5_ParamLimits

0x4dc5,	// (0x0009a0c5) camera2_autofocus_pane_g5

0x0004,

0xf709,	// (0x000a4a09) camera2_autofocus_pane_g_ParamLimits

0xf709,	// (0x000a4a09) camera2_autofocus_pane_g

0xc390,	// (0x000a1690) camera2_autofocus_pane_cp_g2

0xc398,	// (0x000a1698) camera2_autofocus_pane_cp_g3

0xc3a0,	// (0x000a16a0) camera2_autofocus_pane_cp_g4

0xc3a8,	// (0x000a16a8) camera2_autofocus_pane_cp_g5

0x0004,

0xf76f,	// (0x000a4a6f) camera2_autofocus_pane_cp_g

0x55d4,	// (0x0009a8d4) popup_dialer_spcha_window

0xe7d7,	// (0x000a3ad7) bg_popup_sub_pane_cp07

0xc517,	// (0x000a1817) list_spcha_pane

0xc51f,	// (0x000a181f) list_single_spcha_pane_ParamLimits

0xc51f,	// (0x000a181f) list_single_spcha_pane

0xe7d7,	// (0x000a3ad7) list_highlight_pane_cp06

0xc530,	// (0x000a1830) list_single_spcha_pane_t1

0xb6ad,	// (0x000a09ad) popup_call2_audio_out_window_g4_ParamLimits

0xb6ad,	// (0x000a09ad) popup_call2_audio_out_window_g4

0x118e,	// (0x0009648e) main_imed2_pane

0x4445,	// (0x00099745) popup_imed_adjust2_window

0x4458,	// (0x00099758) popup_imed_trans_window_ParamLimits

0x4458,	// (0x00099758) popup_imed_trans_window

0xbec2,	// (0x000a11c2) popup_blid_sat_info2_window_t1

0xbed0,	// (0x000a11d0) popup_blid_sat_info2_window_t2

0x000a,

0xf69e,	// (0x000a499e) popup_blid_sat_info2_window_t

0x58f5,	// (0x0009abf5) aid_size_cell_colour_35

0x590f,	// (0x0009ac0f) aid_size_cell_colour_112

0x5926,	// (0x0009ac26) aid_size_cell_effect

0xe920,	// (0x000a3c20) bg_tb_trans_pane_cp02

0xba4f,	// (0x000a0d4f) heading_imed_pane

0x5940,	// (0x0009ac40) listscroll_imed_pane

0xc53e,	// (0x000a183e) heading_imed_pane_g1

0xc546,	// (0x000a1846) heading_imed_pane_t1

0xc554,	// (0x000a1854) grid_imed_colour_35_pane_ParamLimits

0xc554,	// (0x000a1854) grid_imed_colour_35_pane

0x594c,	// (0x0009ac4c) grid_imed_effect_pane

0xc56b,	// (0x000a186b) list_imed_aspect_pane

0x595c,	// (0x0009ac5c) scroll_pane_cp027_ParamLimits

0x595c,	// (0x0009ac5c) scroll_pane_cp027

0x5968,	// (0x0009ac68) cell_imed_effect_pane_ParamLimits

0x5968,	// (0x0009ac68) cell_imed_effect_pane

0xc573,	// (0x000a1873) cell_imed_colour_pane_ParamLimits

0xc573,	// (0x000a1873) cell_imed_colour_pane

0xc5b5,	// (0x000a18b5) cell_imed_colour_pane_g1_ParamLimits

0xc5b5,	// (0x000a18b5) cell_imed_colour_pane_g1

0xc5c6,	// (0x000a18c6) hgihlgiht_grid_pane_cp016_ParamLimits

0xc5c6,	// (0x000a18c6) hgihlgiht_grid_pane_cp016

0x5980,	// (0x0009ac80) cell_imed_effect_pane_g1

0x5988,	// (0x0009ac88) grid_highlight_pane_cp017

0xc5d7,	// (0x000a18d7) list_imed_single_pane_ParamLimits

0xc5d7,	// (0x000a18d7) list_imed_single_pane

0xe7d7,	// (0x000a3ad7) list_highlight_pane_cp07

0xc5ec,	// (0x000a18ec) list_imed_aspect_pane_comp1_t1

0xbc7c,	// (0x000a0f7c) bg_tb_trans_pane_cp05

0xc60e,	// (0x000a190e) popup_imed_adjust2_window_g1

0xc635,	// (0x000a1935) popup_imed_adjust2_window_t1

0xc64d,	// (0x000a194d) slider_imed_adjust_pane

0xc661,	// (0x000a1961) slider_imed_adjust_pane_g1

0xc671,	// (0x000a1971) slider_imed_adjust_pane_g2

0xc681,	// (0x000a1981) slider_imed_adjust_pane_g3

0xc692,	// (0x000a1992) slider_imed_adjust_pane_g4

0x0003,

0xf7e2,	// (0x000a4ae2) slider_imed_adjust_pane_g

0x5991,	// (0x0009ac91) aid_size_cell_clipart2

0x599d,	// (0x0009ac9d) grid_imed_clipart_pane

0xc6a3,	// (0x000a19a3) scroll_pane_cp031

0x59a7,	// (0x0009aca7) cell_imed_clipart_pane_ParamLimits

0x59a7,	// (0x0009aca7) cell_imed_clipart_pane

0x59c9,	// (0x0009acc9) cell_imed_clipart_pane_g1

0xe7d7,	// (0x000a3ad7) grid_highlight_pane_cp014

0x56fc,	// (0x0009a9fc) main_clock2_pane_g1_ParamLimits

0x56fc,	// (0x0009a9fc) main_clock2_pane_g1

0x57e7,	// (0x0009aae7) aid_call2_pane_cp10

0x57f9,	// (0x0009aaf9) aid_call_pane_cp10

0xa6bd,	// (0x0009f9bd) popup_clock_analogue_window_cp10_g1

0xa6bd,	// (0x0009f9bd) popup_clock_analogue_window_cp10_g2

0x580b,	// (0x0009ab0b) popup_clock_analogue_window_cp10_g3

0x580b,	// (0x0009ab0b) popup_clock_analogue_window_cp10_g4

0xa6bd,	// (0x0009f9bd) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d0,	// (0x000a4ad0) popup_clock_analogue_window_cp10_g

0x5821,	// (0x0009ab21) popup_clock_analogue_window_cp10_t1

0x5852,	// (0x0009ab52) clock_digital_number_pane_cp10_ParamLimits

0x5852,	// (0x0009ab52) clock_digital_number_pane_cp10

0x586c,	// (0x0009ab6c) clock_digital_number_pane_cp11_ParamLimits

0x586c,	// (0x0009ab6c) clock_digital_number_pane_cp11

0x5886,	// (0x0009ab86) clock_digital_number_pane_cp12_ParamLimits

0x5886,	// (0x0009ab86) clock_digital_number_pane_cp12

0x58a0,	// (0x0009aba0) clock_digital_number_pane_cp13_ParamLimits

0x58a0,	// (0x0009aba0) clock_digital_number_pane_cp13

0x58ba,	// (0x0009abba) clock_digital_separator_pane_cp10_ParamLimits

0x58ba,	// (0x0009abba) clock_digital_separator_pane_cp10

0x58d4,	// (0x0009abd4) popup_clock_digital_window_cp02_t1_ParamLimits

0x58d4,	// (0x0009abd4) popup_clock_digital_window_cp02_t1

0xeec6,	// (0x000a41c6) clock_digital_number_pane_cp10_g1

0xeec6,	// (0x000a41c6) clock_digital_number_pane_cp10_g2

0x0001,

0xf7eb,	// (0x000a4aeb) clock_digital_number_pane_cp10_g

0xeec6,	// (0x000a41c6) clock_digital_separator_pane_cp10_g1

0xeec6,	// (0x000a41c6) clock_digital_separator_pane_g2_cp10

0xa848,	// (0x0009fb48) navi_pane_vded_g4

0xa851,	// (0x0009fb51) navi_pane_vded_g5

0xa85a,	// (0x0009fb5a) navi_pane_vded_t1

0x118e,	// (0x0009648e) main_vded_pane

0x59d2,	// (0x0009acd2) main_vded_pane_g1

0x59de,	// (0x0009acde) main_vded_pane_g2

0x59e8,	// (0x0009ace8) main_vded_pane_g3

0x0002,

0xf7f0,	// (0x000a4af0) main_vded_pane_g

0x59f2,	// (0x0009acf2) main_vded_pane_t1

0x5a00,	// (0x0009ad00) main_vded_pane_t2

0x0001,

0xf7f7,	// (0x000a4af7) main_vded_pane_t

0x5a0e,	// (0x0009ad0e) vded_slider_pane

0x5a18,	// (0x0009ad18) vded_video_pane

0xc6ab,	// (0x000a19ab) vded_video_pane_g1

0x5a22,	// (0x0009ad22) vded_video_pane_g2

0xc090,	// (0x000a1390) vded_video_pane_g3

0x0002,

0xf7fc,	// (0x000a4afc) vded_video_pane_g

0xc6b5,	// (0x000a19b5) vded_slider_pane_g1

0xbdd7,	// (0x000a10d7) vded_slider_pane_g2

0xc6be,	// (0x000a19be) vded_slider_pane_g3

0xc6c7,	// (0x000a19c7) vded_slider_pane_g4

0xc6d0,	// (0x000a19d0) vded_slider_pane_g5

0x0004,

0xf803,	// (0x000a4b03) vded_slider_pane_g

0x54d8,	// (0x0009a7d8) mup3_rocker_pane_ParamLimits

0x54d8,	// (0x0009a7d8) mup3_rocker_pane

0x5a2b,	// (0x0009ad2b) mup3_control_keys_pane_g1

0x5a33,	// (0x0009ad33) mup3_control_keys_pane_g2

0x5a3b,	// (0x0009ad3b) mup3_control_keys_pane_g3

0x5a43,	// (0x0009ad43) mup3_control_keys_pane_g4

0x0003,

0xf80e,	// (0x000a4b0e) mup3_control_keys_pane_g

0x1142,	// (0x00096442) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1142,	// (0x00096442) popup_toolbar2_fixed_window_cp01

0x54f2,	// (0x0009a7f2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x54f2,	// (0x0009a7f2) popup_toolbar2_fixed_window_cp02

0xafec,	// (0x000a02ec) popup_call2_audio_second_window_t4_ParamLimits

0xafec,	// (0x000a02ec) popup_call2_audio_second_window_t4

0xb51a,	// (0x000a081a) popup_call2_audio_first_window_t6_ParamLimits

0xb51a,	// (0x000a081a) popup_call2_audio_first_window_t6

0xb7b0,	// (0x000a0ab0) popup_call2_audio_out_window_t6_ParamLimits

0xb7b0,	// (0x000a0ab0) popup_call2_audio_out_window_t6

0x118e,	// (0x0009648e) main_vitu_pane

0x5a53,	// (0x0009ad53) aid_size_cell_itu_ParamLimits

0x5a53,	// (0x0009ad53) aid_size_cell_itu

0xe92e,	// (0x000a3c2e) bg_popup_window_pane_cp08_ParamLimits

0xe92e,	// (0x000a3c2e) bg_popup_window_pane_cp08

0x5a61,	// (0x0009ad61) field_vitu_entry_pane_ParamLimits

0x5a61,	// (0x0009ad61) field_vitu_entry_pane

0x5a70,	// (0x0009ad70) grid_vitu_function_pane_ParamLimits

0x5a70,	// (0x0009ad70) grid_vitu_function_pane

0x5a80,	// (0x0009ad80) grid_vitu_itu_pane_ParamLimits

0x5a80,	// (0x0009ad80) grid_vitu_itu_pane

0x5a90,	// (0x0009ad90) cell_vitu_itu_pane_ParamLimits

0x5a90,	// (0x0009ad90) cell_vitu_itu_pane

0x5aa5,	// (0x0009ada5) cell_vitu_function_pane_ParamLimits

0x5aa5,	// (0x0009ada5) cell_vitu_function_pane

0xe920,	// (0x000a3c20) bg_popup_sub_pane_cp08_ParamLimits

0xe920,	// (0x000a3c20) bg_popup_sub_pane_cp08

0x5ab7,	// (0x0009adb7) field_vitu_entry_pane_t1_ParamLimits

0x5ab7,	// (0x0009adb7) field_vitu_entry_pane_t1

0xc6f1,	// (0x000a19f1) field_vitu_entry_pane_t2_ParamLimits

0xc6f1,	// (0x000a19f1) field_vitu_entry_pane_t2

0x0001,

0xf81c,	// (0x000a4b1c) field_vitu_entry_pane_t_ParamLimits

0xf81c,	// (0x000a4b1c) field_vitu_entry_pane_t

0xc70e,	// (0x000a1a0e) bg_button_pane_cp05_ParamLimits

0xc70e,	// (0x000a1a0e) bg_button_pane_cp05

0x5ad3,	// (0x0009add3) cell_vitu_itu_pane_g1

0x5aeb,	// (0x0009adeb) cell_vitu_itu_pane_t1_ParamLimits

0x5aeb,	// (0x0009adeb) cell_vitu_itu_pane_t1

0x5afd,	// (0x0009adfd) cell_vitu_itu_pane_t2_ParamLimits

0x5afd,	// (0x0009adfd) cell_vitu_itu_pane_t2

0x0002,

0xf821,	// (0x000a4b21) cell_vitu_itu_pane_t_ParamLimits

0xf821,	// (0x000a4b21) cell_vitu_itu_pane_t

0xc71c,	// (0x000a1a1c) bg_button_pane_cp07

0x5b32,	// (0x0009ae32) cell_vitu_function_pane_g1

0x1420,	// (0x00096720) main_calc_pane_g1

0x0eff,	// (0x000961ff) aid_visual_content_pane

0x118e,	// (0x0009648e) main_vradio_pane

0x5b3b,	// (0x0009ae3b) main_vradio_pane_g1_ParamLimits

0x5b3b,	// (0x0009ae3b) main_vradio_pane_g1

0xc726,	// (0x000a1a26) main_vradio_pane_g2_ParamLimits

0xc726,	// (0x000a1a26) main_vradio_pane_g2

0x0001,

0xf828,	// (0x000a4b28) main_vradio_pane_g_ParamLimits

0xf828,	// (0x000a4b28) main_vradio_pane_g

0x5b4b,	// (0x0009ae4b) main_vradio_pane_t1_ParamLimits

0x5b4b,	// (0x0009ae4b) main_vradio_pane_t1

0x5b5d,	// (0x0009ae5d) main_vradio_pane_t2_ParamLimits

0x5b5d,	// (0x0009ae5d) main_vradio_pane_t2

0xc733,	// (0x000a1a33) main_vradio_pane_t3_ParamLimits

0xc733,	// (0x000a1a33) main_vradio_pane_t3

0x0002,

0xf82d,	// (0x000a4b2d) main_vradio_pane_t_ParamLimits

0xf82d,	// (0x000a4b2d) main_vradio_pane_t

0x5b6f,	// (0x0009ae6f) vradio_rocker_control_pane_ParamLimits

0x5b6f,	// (0x0009ae6f) vradio_rocker_control_pane

0x5b7b,	// (0x0009ae7b) vradio_station_info_pane_ParamLimits

0x5b7b,	// (0x0009ae7b) vradio_station_info_pane

0xc747,	// (0x000a1a47) vradio_frequency_info_pane_ParamLimits

0xc747,	// (0x000a1a47) vradio_frequency_info_pane

0xc090,	// (0x000a1390) vradio_station_info_pane_g1

0xc756,	// (0x000a1a56) vradio_station_info_pane_t1_ParamLimits

0xc756,	// (0x000a1a56) vradio_station_info_pane_t1

0xc778,	// (0x000a1a78) vradio_station_info_pane_t2_ParamLimits

0xc778,	// (0x000a1a78) vradio_station_info_pane_t2

0x0001,

0xf834,	// (0x000a4b34) vradio_station_info_pane_t_ParamLimits

0xf834,	// (0x000a4b34) vradio_station_info_pane_t

0xc78a,	// (0x000a1a8a) vradio_tuning_pane

0xc792,	// (0x000a1a92) vradio_rocker_control_pane_g1

0xc79a,	// (0x000a1a9a) vradio_rocker_control_pane_g2

0xc7a2,	// (0x000a1aa2) vradio_rocker_control_pane_g3

0xc7aa,	// (0x000a1aaa) vradio_rocker_control_pane_g4

0xc7b2,	// (0x000a1ab2) vradio_rocker_control_pane_g5

0x0004,

0xf839,	// (0x000a4b39) vradio_rocker_control_pane_g

0x5b8a,	// (0x0009ae8a) vradio_frequency_info_pane_g1

0xc7ba,	// (0x000a1aba) vradio_frequency_info_pane_t1_ParamLimits

0xc7ba,	// (0x000a1aba) vradio_frequency_info_pane_t1

0x5b94,	// (0x0009ae94) vradio_tuning_pane_g1

0x5b9d,	// (0x0009ae9d) vradio_tuning_pane_t1

0x0f48,	// (0x00096248) area_side_right_pane_ParamLimits

0x0f48,	// (0x00096248) area_side_right_pane

0xbc37,	// (0x000a0f37) status_small_pane_g1

0xbc3f,	// (0x000a0f3f) status_small_pane_g2

0xbc48,	// (0x000a0f48) status_small_pane_g3

0xbc51,	// (0x000a0f51) status_small_pane_g4

0x0003,

0xf5f4,	// (0x000a48f4) status_small_pane_g

0xbc5a,	// (0x000a0f5a) status_small_pane_t1

0x118e,	// (0x0009648e) main_video3_pane

0xc7ce,	// (0x000a1ace) cams_zoom_vslider_pane

0xc7d6,	// (0x000a1ad6) image3_wide_pane_ParamLimits

0xc7d6,	// (0x000a1ad6) image3_wide_pane

0xc7f0,	// (0x000a1af0) image3_wide_small_pane

0xc7fc,	// (0x000a1afc) main_video3_pane_g1_ParamLimits

0xc7fc,	// (0x000a1afc) main_video3_pane_g1

0xc818,	// (0x000a1b18) main_video3_pane_g2_ParamLimits

0xc818,	// (0x000a1b18) main_video3_pane_g2

0x0001,

0xf844,	// (0x000a4b44) main_video3_pane_g_ParamLimits

0xf844,	// (0x000a4b44) main_video3_pane_g

0xc834,	// (0x000a1b34) main_video3_pane_t1_ParamLimits

0xc834,	// (0x000a1b34) main_video3_pane_t1

0xc85f,	// (0x000a1b5f) main_video3_pane_t2_ParamLimits

0xc85f,	// (0x000a1b5f) main_video3_pane_t2

0xc88a,	// (0x000a1b8a) main_video3_pane_t3_ParamLimits

0xc88a,	// (0x000a1b8a) main_video3_pane_t3

0x0002,

0xf849,	// (0x000a4b49) main_video3_pane_t_ParamLimits

0xf849,	// (0x000a4b49) main_video3_pane_t

0xc8b7,	// (0x000a1bb7) cams_zoom_vslider_pane_g1

0xc8c0,	// (0x000a1bc0) cams_zoom_vslider_pane_g2

0x0001,

0xf850,	// (0x000a4b50) cams_zoom_vslider_pane_g

0xc8c8,	// (0x000a1bc8) small_slider_vertical_pane

0xc090,	// (0x000a1390) small_slider_vertical_pane_g1

0xc090,	// (0x000a1390) small_slider_vertical_pane_g2

0xc8d0,	// (0x000a1bd0) small_slider_vertical_pane_g3

0x0002,

0xf855,	// (0x000a4b55) small_slider_vertical_pane_g

0x118e,	// (0x0009648e) main_hwr_training_pane

0xc8d9,	// (0x000a1bd9) hwr_training_instruct_pane_ParamLimits

0xc8d9,	// (0x000a1bd9) hwr_training_instruct_pane

0x5bac,	// (0x0009aeac) hwr_training_navi_pane_ParamLimits

0x5bac,	// (0x0009aeac) hwr_training_navi_pane

0x5bc6,	// (0x0009aec6) hwr_training_write_pane_ParamLimits

0x5bc6,	// (0x0009aec6) hwr_training_write_pane

0xe7d7,	// (0x000a3ad7) bg_frame_shadow_pane

0xc910,	// (0x000a1c10) hwr_training_write_pane_g1

0xc918,	// (0x000a1c18) hwr_training_write_pane_g2

0xc920,	// (0x000a1c20) hwr_training_write_pane_g3

0xc928,	// (0x000a1c28) hwr_training_write_pane_g4

0xc930,	// (0x000a1c30) hwr_training_write_pane_g5

0xc938,	// (0x000a1c38) hwr_training_write_pane_g6

0xc940,	// (0x000a1c40) hwr_training_write_pane_g7

0x0006,

0xf85c,	// (0x000a4b5c) hwr_training_write_pane_g

0x5bfe,	// (0x0009aefe) hwr_training_navi_pane_g1_ParamLimits

0x5bfe,	// (0x0009aefe) hwr_training_navi_pane_g1

0x5c10,	// (0x0009af10) hwr_training_navi_pane_g2_ParamLimits

0x5c10,	// (0x0009af10) hwr_training_navi_pane_g2

0x5c22,	// (0x0009af22) hwr_training_navi_pane_g3_ParamLimits

0x5c22,	// (0x0009af22) hwr_training_navi_pane_g3

0x5c32,	// (0x0009af32) hwr_training_navi_pane_g4_ParamLimits

0x5c32,	// (0x0009af32) hwr_training_navi_pane_g4

0x0004,

0xf86b,	// (0x000a4b6b) hwr_training_navi_pane_g_ParamLimits

0xf86b,	// (0x000a4b6b) hwr_training_navi_pane_g

0x5c4c,	// (0x0009af4c) hwr_training_navi_pane_t1

0x5c5a,	// (0x0009af5a) list_single_hwr_training_instruct_pane_ParamLimits

0x5c5a,	// (0x0009af5a) list_single_hwr_training_instruct_pane

0xc948,	// (0x000a1c48) list_single_hwr_training_instruct_pane_t1

0xbfc4,	// (0x000a12c4) bg_frame_shadow_pane_g1

0xc957,	// (0x000a1c57) bg_frame_shadow_pane_g2

0xc95f,	// (0x000a1c5f) bg_frame_shadow_pane_g3

0xc967,	// (0x000a1c67) bg_frame_shadow_pane_g4

0xc96f,	// (0x000a1c6f) bg_frame_shadow_pane_g5

0xc977,	// (0x000a1c77) bg_frame_shadow_pane_g6

0xc97f,	// (0x000a1c7f) bg_frame_shadow_pane_g7

0xf04c,	// (0x000a434c) bg_frame_shadow_pane_g8

0x0007,

0xf876,	// (0x000a4b76) bg_frame_shadow_pane_g

0x118e,	// (0x0009648e) main_video_tele_dialer_pane

0x5c7f,	// (0x0009af7f) aid_size_cell_video_keypad_ParamLimits

0x5c7f,	// (0x0009af7f) aid_size_cell_video_keypad

0x5c8f,	// (0x0009af8f) grid_video_dialer_keypad_pane_ParamLimits

0x5c8f,	// (0x0009af8f) grid_video_dialer_keypad_pane

0x5cc3,	// (0x0009afc3) video_down_pane_cp_ParamLimits

0x5cc3,	// (0x0009afc3) video_down_pane_cp

0x5ced,	// (0x0009afed) cell_video_dialer_keypad_pane_ParamLimits

0x5ced,	// (0x0009afed) cell_video_dialer_keypad_pane

0xc987,	// (0x000a1c87) bg_button_pane_cp08_ParamLimits

0xc987,	// (0x000a1c87) bg_button_pane_cp08

0x5d02,	// (0x0009b002) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5d02,	// (0x0009b002) cell_video_dialer_keypad_pane_g1

0x54cc,	// (0x0009a7cc) mup3_rocker2_pane_ParamLimits

0x54cc,	// (0x0009a7cc) mup3_rocker2_pane

0xc090,	// (0x000a1390) mup3_rocker2_pane_g1

0x43b5,	// (0x000996b5) main_dialer2_pane

0x118e,	// (0x0009648e) main_mp4_pane

0x5d57,	// (0x0009b057) main_mp4_pane_g1_ParamLimits

0x5d57,	// (0x0009b057) main_mp4_pane_g1

0x5d65,	// (0x0009b065) main_mp4_pane_g2_ParamLimits

0x5d65,	// (0x0009b065) main_mp4_pane_g2

0x5d73,	// (0x0009b073) main_mp4_pane_g3_ParamLimits

0x5d73,	// (0x0009b073) main_mp4_pane_g3

0x5db8,	// (0x0009b0b8) main_mp4_pane_g4_ParamLimits

0x5db8,	// (0x0009b0b8) main_mp4_pane_g4

0x5de6,	// (0x0009b0e6) main_mp4_pane_g5_ParamLimits

0x5de6,	// (0x0009b0e6) main_mp4_pane_g5

0x0007,

0xf896,	// (0x000a4b96) main_mp4_pane_g_ParamLimits

0xf896,	// (0x000a4b96) main_mp4_pane_g

0x5e5a,	// (0x0009b15a) main_mp4_pane_t1_ParamLimits

0x5e5a,	// (0x0009b15a) main_mp4_pane_t1

0x5eb6,	// (0x0009b1b6) main_mp4_pane_t2_ParamLimits

0x5eb6,	// (0x0009b1b6) main_mp4_pane_t2

0xc993,	// (0x000a1c93) main_mp4_pane_t3_ParamLimits

0xc993,	// (0x000a1c93) main_mp4_pane_t3

0x5f08,	// (0x0009b208) main_mp4_pane_t4_ParamLimits

0x5f08,	// (0x0009b208) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000a4ba7) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000a4ba7) main_mp4_pane_t

0x5f4c,	// (0x0009b24c) mp4_progress_pane_ParamLimits

0x5f4c,	// (0x0009b24c) mp4_progress_pane

0x5f96,	// (0x0009b296) mp4_rocker_pane_ParamLimits

0x5f96,	// (0x0009b296) mp4_rocker_pane

0xc9c1,	// (0x000a1cc1) mp4_progress_pane_t1

0xc9da,	// (0x000a1cda) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000a4bb0) mp4_progress_pane_t

0xc9f3,	// (0x000a1cf3) mup_progress_pane_cp04

0xd0cf,	// (0x000a23cf) mp4_rocker_pane_g1

0x5fb6,	// (0x0009b2b6) aid_cell_size_keypad2_ParamLimits

0x5fb6,	// (0x0009b2b6) aid_cell_size_keypad2

0x5fc6,	// (0x0009b2c6) dialer2_ne_pane_ParamLimits

0x5fc6,	// (0x0009b2c6) dialer2_ne_pane

0x5fd4,	// (0x0009b2d4) grid_dialer2_keypad_pane_ParamLimits

0x5fd4,	// (0x0009b2d4) grid_dialer2_keypad_pane

0xd0d9,	// (0x000a23d9) bg_popup_call_pane_cp07_ParamLimits

0xd0d9,	// (0x000a23d9) bg_popup_call_pane_cp07

0x5fe4,	// (0x0009b2e4) dialer2_ne_pane_t1_ParamLimits

0x5fe4,	// (0x0009b2e4) dialer2_ne_pane_t1

0x6009,	// (0x0009b309) cell_dialer2_keypad_pane_ParamLimits

0x6009,	// (0x0009b309) cell_dialer2_keypad_pane

0xca18,	// (0x000a1d18) bg_button_pane_pane_cp04_ParamLimits

0xca18,	// (0x000a1d18) bg_button_pane_pane_cp04

0x601e,	// (0x0009b31e) cell_dialer2_keypad_pane_g1_ParamLimits

0x601e,	// (0x0009b31e) cell_dialer2_keypad_pane_g1

0x1fb9,	// (0x000972b9) aid_placing_vt_set_content_ParamLimits

0x1fb9,	// (0x000972b9) aid_placing_vt_set_content

0x1fe5,	// (0x000972e5) aid_placing_vt_set_title_ParamLimits

0x1fe5,	// (0x000972e5) aid_placing_vt_set_title

0x118e,	// (0x0009648e) main_image3_pane

0x60b8,	// (0x0009b3b8) area_side_right_pane_cp01_ParamLimits

0x60b8,	// (0x0009b3b8) area_side_right_pane_cp01

0x60e5,	// (0x0009b3e5) main_image3_pane_g1_ParamLimits

0x60e5,	// (0x0009b3e5) main_image3_pane_g1

0x60f3,	// (0x0009b3f3) main_image3_pane_g2_ParamLimits

0x60f3,	// (0x0009b3f3) main_image3_pane_g2

0x610c,	// (0x0009b40c) main_image3_pane_g3_ParamLimits

0x610c,	// (0x0009b40c) main_image3_pane_g3

0x6125,	// (0x0009b425) main_image3_pane_g4_ParamLimits

0x6125,	// (0x0009b425) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000a4bbf) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000a4bbf) main_image3_pane_g

0x613e,	// (0x0009b43e) main_image3_pane_t1_ParamLimits

0x613e,	// (0x0009b43e) main_image3_pane_t1

0x6163,	// (0x0009b463) main_image3_pane_t2_ParamLimits

0x6163,	// (0x0009b463) main_image3_pane_t2

0x6182,	// (0x0009b482) main_image3_pane_t3_ParamLimits

0x6182,	// (0x0009b482) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000a4bc8) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000a4bc8) main_image3_pane_t

0xe92e,	// (0x000a3c2e) grid_sctrl_middle_pane_cp01_ParamLimits

0xe92e,	// (0x000a3c2e) grid_sctrl_middle_pane_cp01

0x61e3,	// (0x0009b4e3) cell_sctrl_middle_pane_cp01_ParamLimits

0x61e3,	// (0x0009b4e3) cell_sctrl_middle_pane_cp01

0x61f4,	// (0x0009b4f4) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x61f4,	// (0x0009b4f4) cell_sctrl_middle_pane_cp01_g1

0x118e,	// (0x0009648e) main_call4_pane

0x6201,	// (0x0009b501) aid_size_button_call4_ParamLimits

0x6201,	// (0x0009b501) aid_size_button_call4

0x6237,	// (0x0009b537) call4_windows_pane_ParamLimits

0x6237,	// (0x0009b537) call4_windows_pane

0x624c,	// (0x0009b54c) grid_call4_button_pane_ParamLimits

0x624c,	// (0x0009b54c) grid_call4_button_pane

0x627a,	// (0x0009b57a) call4_windows_conf_pane

0x6291,	// (0x0009b591) popup_call4_audio_first_window_ParamLimits

0x6291,	// (0x0009b591) popup_call4_audio_first_window

0x62e1,	// (0x0009b5e1) popup_call4_audio_second_window_ParamLimits

0x62e1,	// (0x0009b5e1) popup_call4_audio_second_window

0x62fa,	// (0x0009b5fa) popup_call4_audio_wait_window_ParamLimits

0x62fa,	// (0x0009b5fa) popup_call4_audio_wait_window

0x6308,	// (0x0009b608) cell_call4_button_pane_ParamLimits

0x6308,	// (0x0009b608) cell_call4_button_pane

0x632b,	// (0x0009b62b) bg_button_pane_cp09_ParamLimits

0x632b,	// (0x0009b62b) bg_button_pane_cp09

0x6337,	// (0x0009b637) cell_call4_button_pane_g1_ParamLimits

0x6337,	// (0x0009b637) cell_call4_button_pane_g1

0x6344,	// (0x0009b644) cell_call4_button_pane_t1_ParamLimits

0x6344,	// (0x0009b644) cell_call4_button_pane_t1

0xca2c,	// (0x000a1d2c) popup_call4_audio_conf_window_ParamLimits

0xca2c,	// (0x000a1d2c) popup_call4_audio_conf_window

0x54ff,	// (0x0009a7ff) mup3_progress_pane_t1_ParamLimits

0x551e,	// (0x0009a81e) mup3_progress_pane_t2_ParamLimits

0xc3c6,	// (0x000a16c6) mup3_progress_pane_t3_ParamLimits

0xf798,	// (0x000a4a98) mup3_progress_pane_t_ParamLimits

0xc3e3,	// (0x000a16e3) mup_progress_pane_cp03_ParamLimits

0x5a4b,	// (0x0009ad4b) mup3_control_keys_pane_g4_copy1

0x5f7a,	// (0x0009b27a) mp4_rocker2_pane_ParamLimits

0x5f7a,	// (0x0009b27a) mp4_rocker2_pane

0xca40,	// (0x000a1d40) mp4_rocker2_pane_g1

0xca48,	// (0x000a1d48) mp4_rocker2_pane_g2

0x6388,	// (0x0009b688) mp4_rocker2_pane_g3

0x6390,	// (0x0009b690) mp4_rocker2_pane_g4

0x6398,	// (0x0009b698) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000a4bd1) mp4_rocker2_pane_g

0x118e,	// (0x0009648e) main_camera4_pane

0x118e,	// (0x0009648e) main_video4_pane

0x5c9f,	// (0x0009af9f) main_video_tele_dialer_pane_t1_ParamLimits

0x5c9f,	// (0x0009af9f) main_video_tele_dialer_pane_t1

0x5cb1,	// (0x0009afb1) main_video_tele_dialer_pane_t2_ParamLimits

0x5cb1,	// (0x0009afb1) main_video_tele_dialer_pane_t2

0x0001,

0xf887,	// (0x000a4b87) main_video_tele_dialer_pane_t_ParamLimits

0xf887,	// (0x000a4b87) main_video_tele_dialer_pane_t

0x63b8,	// (0x0009b6b8) cam4_autofocus_pane_ParamLimits

0x63b8,	// (0x0009b6b8) cam4_autofocus_pane

0x63d2,	// (0x0009b6d2) cam4_image_uncrop_pane_ParamLimits

0x63d2,	// (0x0009b6d2) cam4_image_uncrop_pane

0x63e9,	// (0x0009b6e9) cam4_indicators_pane_ParamLimits

0x63e9,	// (0x0009b6e9) cam4_indicators_pane

0x6405,	// (0x0009b705) main_camera4_pane_g1_ParamLimits

0x6405,	// (0x0009b705) main_camera4_pane_g1

0x6411,	// (0x0009b711) main_camera4_pane_g2_ParamLimits

0x6411,	// (0x0009b711) main_camera4_pane_g2

0x6411,	// (0x0009b711) main_camera4_pane_g3_ParamLimits

0x6411,	// (0x0009b711) main_camera4_pane_g3

0x641d,	// (0x0009b71d) main_camera4_pane_g4_ParamLimits

0x641d,	// (0x0009b71d) main_camera4_pane_g4

0x6429,	// (0x0009b729) main_camera4_pane_g5_ParamLimits

0x6429,	// (0x0009b729) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000a4bdc) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000a4bdc) main_camera4_pane_g

0x6443,	// (0x0009b743) main_camera4_pane_t1_ParamLimits

0x6443,	// (0x0009b743) main_camera4_pane_t1

0x648b,	// (0x0009b78b) bg_tb_trans_pane_cp06

0x64a1,	// (0x0009b7a1) cam4_indicators_pane_g1

0x64b2,	// (0x0009b7b2) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000a4bf7) cam4_indicators_pane_g

0x64d0,	// (0x0009b7d0) cam4_indicators_pane_t1

0x64fa,	// (0x0009b7fa) main_video4_pane_g1_ParamLimits

0x64fa,	// (0x0009b7fa) main_video4_pane_g1

0x6506,	// (0x0009b806) main_video4_pane_g2_ParamLimits

0x6506,	// (0x0009b806) main_video4_pane_g2

0x6512,	// (0x0009b812) main_video4_pane_g3_ParamLimits

0x6512,	// (0x0009b812) main_video4_pane_g3

0x651e,	// (0x0009b81e) main_video4_pane_g4_ParamLimits

0x651e,	// (0x0009b81e) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000a4bfe) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000a4bfe) main_video4_pane_g

0x653e,	// (0x0009b83e) vid4_indicators_pane_ParamLimits

0x653e,	// (0x0009b83e) vid4_indicators_pane

0x655d,	// (0x0009b85d) video4_image_uncrop_cif_pane_ParamLimits

0x655d,	// (0x0009b85d) video4_image_uncrop_cif_pane

0x656c,	// (0x0009b86c) video4_image_uncrop_nhd_pane_ParamLimits

0x656c,	// (0x0009b86c) video4_image_uncrop_nhd_pane

0x63d2,	// (0x0009b6d2) video4_image_uncrop_vga_pane_ParamLimits

0x63d2,	// (0x0009b6d2) video4_image_uncrop_vga_pane

0x43a7,	// (0x000996a7) bg_tb_trans_pane_cp07

0x6583,	// (0x0009b883) vid4_indicators_pane_g1

0x6597,	// (0x0009b897) vid4_indicators_pane_g2

0x65ab,	// (0x0009b8ab) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000a4c09) vid4_indicators_pane_g

0x65da,	// (0x0009b8da) vid4_indicators_pane_t1

0x65f1,	// (0x0009b8f1) cam4_autofocus_pane_g1

0x65f9,	// (0x0009b8f9) cam4_autofocus_pane_g2

0x6601,	// (0x0009b901) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000a4c14) cam4_autofocus_pane_g

0x6609,	// (0x0009b909) cam4_autofocus_pane_g3_copy1

0x5cd1,	// (0x0009afd1) video_down_pane_cp_t1

0x5cdf,	// (0x0009afdf) video_down_pane_cp_t2

0x0001,

0xf88c,	// (0x000a4b8c) video_down_pane_cp_t

0x1174,	// (0x00096474) popup_vitu2_window_ParamLimits

0x1174,	// (0x00096474) popup_vitu2_window

0x6611,	// (0x0009b911) aid_size_cell2_itu2_ParamLimits

0x6611,	// (0x0009b911) aid_size_cell2_itu2

0x6633,	// (0x0009b933) aid_size_cell_itu2_ParamLimits

0x6633,	// (0x0009b933) aid_size_cell_itu2

0x6677,	// (0x0009b977) bg_popup_window_pane_cp09_ParamLimits

0x6677,	// (0x0009b977) bg_popup_window_pane_cp09

0x6685,	// (0x0009b985) field_vitu2_entry_pane_ParamLimits

0x6685,	// (0x0009b985) field_vitu2_entry_pane

0x66a5,	// (0x0009b9a5) grid_vitu2_function_pane_ParamLimits

0x66a5,	// (0x0009b9a5) grid_vitu2_function_pane

0x66e9,	// (0x0009b9e9) grid_vitu2_itu_pane_ParamLimits

0x66e9,	// (0x0009b9e9) grid_vitu2_itu_pane

0x6765,	// (0x0009ba65) cell_vitu2_itu_pane_ParamLimits

0x6765,	// (0x0009ba65) cell_vitu2_itu_pane

0x677e,	// (0x0009ba7e) cell_vitu2_function_pane_ParamLimits

0x677e,	// (0x0009ba7e) cell_vitu2_function_pane

0xca50,	// (0x000a1d50) bg_popup_call_pane_cp08_ParamLimits

0xca50,	// (0x000a1d50) bg_popup_call_pane_cp08

0xca67,	// (0x000a1d67) field_vitu2_entry_pane_g1

0xca73,	// (0x000a1d73) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000a4c1b) field_vitu2_entry_pane_g

0x67bf,	// (0x0009babf) field_vitu2_entry_pane_t1_ParamLimits

0x67bf,	// (0x0009babf) field_vitu2_entry_pane_t1

0xca8d,	// (0x000a1d8d) field_vitu2_entry_pane_t2_ParamLimits

0xca8d,	// (0x000a1d8d) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000a4c22) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000a4c22) field_vitu2_entry_pane_t

0x67ef,	// (0x0009baef) bg_button_pane_cp010_ParamLimits

0x67ef,	// (0x0009baef) bg_button_pane_cp010

0x67fd,	// (0x0009bafd) cell_vitu2_itu_pane_g1

0x681d,	// (0x0009bb1d) cell_vitu2_itu_pane_t1_ParamLimits

0x681d,	// (0x0009bb1d) cell_vitu2_itu_pane_t1

0x0de3,	// (0x000960e3) cell_vitu2_itu_pane_t2_ParamLimits

0x0de3,	// (0x000960e3) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000a4c2c) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000a4c2c) cell_vitu2_itu_pane_t

0x43a7,	// (0x000996a7) bg_button_pane_cp011

0x6869,	// (0x0009bb69) cell_vitu2_function_pane_g1

0x118e,	// (0x0009648e) main_myfav_hc_pane

0x61c4,	// (0x0009b4c4) popup_image3_note_pane_ParamLimits

0x61c4,	// (0x0009b4c4) popup_image3_note_pane

0x61d2,	// (0x0009b4d2) popup_image3_tool_bar_pane_ParamLimits

0x61d2,	// (0x0009b4d2) popup_image3_tool_bar_pane

0x0e59,	// (0x00096159) cell_vitu2_itu_pane_t3_ParamLimits

0x0e59,	// (0x00096159) cell_vitu2_itu_pane_t3

0xe7d7,	// (0x000a3ad7) bg_popup_trans_pane

0xcab2,	// (0x000a1db2) grid_image3_tool_bar_pane

0xcabc,	// (0x000a1dbc) bg_popup_trans_pane_g1

0xa071,	// (0x0009f371) bg_popup_trans_pane_g2

0xcac4,	// (0x000a1dc4) bg_popup_trans_pane_g3

0xcacc,	// (0x000a1dcc) bg_popup_trans_pane_g4

0xcad4,	// (0x000a1dd4) bg_popup_trans_pane_g5

0xcadc,	// (0x000a1ddc) bg_popup_trans_pane_g6

0xcae4,	// (0x000a1de4) bg_popup_trans_pane_g7

0xcaec,	// (0x000a1dec) bg_popup_trans_pane_g8

0xa051,	// (0x0009f351) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000a4c33) bg_popup_trans_pane_g

0xcaf4,	// (0x000a1df4) cell_image3_tool_bar_pane_ParamLimits

0xcaf4,	// (0x000a1df4) cell_image3_tool_bar_pane

0xc090,	// (0x000a1390) cell_image3_tool_bar_pane_g1

0xe7d7,	// (0x000a3ad7) bg_popup_trans_pane_cp1

0xcb08,	// (0x000a1e08) popup_image3_note_pane_t1

0xcb16,	// (0x000a1e16) popup_image3_note_pane_t2

0xcb24,	// (0x000a1e24) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000a4c46) popup_image3_note_pane_t

0xcb32,	// (0x000a1e32) popup_image3_note_pane_t3_copy1

0x687d,	// (0x0009bb7d) bg_myfav_hc_instruction_pane_ParamLimits

0x687d,	// (0x0009bb7d) bg_myfav_hc_instruction_pane

0x6895,	// (0x0009bb95) cell_myfav_contact_pane_ParamLimits

0x6895,	// (0x0009bb95) cell_myfav_contact_pane

0x68af,	// (0x0009bbaf) cell_myfav_contact_pane_cp1_ParamLimits

0x68af,	// (0x0009bbaf) cell_myfav_contact_pane_cp1

0x68c7,	// (0x0009bbc7) cell_myfav_contact_pane_cp2_ParamLimits

0x68c7,	// (0x0009bbc7) cell_myfav_contact_pane_cp2

0x68df,	// (0x0009bbdf) cell_myfav_contact_pane_cp3_ParamLimits

0x68df,	// (0x0009bbdf) cell_myfav_contact_pane_cp3

0x68f6,	// (0x0009bbf6) cell_myfav_contact_pane_cp4_ParamLimits

0x68f6,	// (0x0009bbf6) cell_myfav_contact_pane_cp4

0x690c,	// (0x0009bc0c) cell_myfav_contact_pane_cp5_ParamLimits

0x690c,	// (0x0009bc0c) cell_myfav_contact_pane_cp5

0x6920,	// (0x0009bc20) cell_myfav_contact_pane_cp6_ParamLimits

0x6920,	// (0x0009bc20) cell_myfav_contact_pane_cp6

0x6934,	// (0x0009bc34) cell_myfav_contact_pane_cp7_ParamLimits

0x6934,	// (0x0009bc34) cell_myfav_contact_pane_cp7

0xcb40,	// (0x000a1e40) listscroll_gen_pane_cp05

0x694c,	// (0x0009bc4c) main_myfav_hc_pane_g1_ParamLimits

0x694c,	// (0x0009bc4c) main_myfav_hc_pane_g1

0x6962,	// (0x0009bc62) main_myfav_hc_pane_g2_ParamLimits

0x6962,	// (0x0009bc62) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000a4c4d) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000a4c4d) main_myfav_hc_pane_g

0x6990,	// (0x0009bc90) main_myfav_hc_pane_t1_ParamLimits

0x6990,	// (0x0009bc90) main_myfav_hc_pane_t1

0xcb49,	// (0x000a1e49) main_myfav_hc_pane_t2_ParamLimits

0xcb49,	// (0x000a1e49) main_myfav_hc_pane_t2

0xcb5b,	// (0x000a1e5b) main_myfav_hc_pane_t3_ParamLimits

0xcb5b,	// (0x000a1e5b) main_myfav_hc_pane_t3

0x69a7,	// (0x0009bca7) main_myfav_hc_pane_t4_ParamLimits

0x69a7,	// (0x0009bca7) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000a4c54) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000a4c54) main_myfav_hc_pane_t

0xc090,	// (0x000a1390) bg_myfav_hc_instruction_pane_g1

0xcb7f,	// (0x000a1e7f) cell_myfav_contact_pane_g1_ParamLimits

0xcb7f,	// (0x000a1e7f) cell_myfav_contact_pane_g1

0xcb7f,	// (0x000a1e7f) cell_myfav_contact_pane_g2_ParamLimits

0xcb7f,	// (0x000a1e7f) cell_myfav_contact_pane_g2

0xcb8b,	// (0x000a1e8b) cell_myfav_contact_pane_g3_ParamLimits

0xcb8b,	// (0x000a1e8b) cell_myfav_contact_pane_g3

0xc3b0,	// (0x000a16b0) cell_myfav_contact_pane_g4_ParamLimits

0xc3b0,	// (0x000a16b0) cell_myfav_contact_pane_g4

0xcb98,	// (0x000a1e98) cell_myfav_contact_pane_g5_ParamLimits

0xcb98,	// (0x000a1e98) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000a4c5f) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000a4c5f) cell_myfav_contact_pane_g

0x6978,	// (0x0009bc78) main_myfav_hc_pane_g3_ParamLimits

0x6978,	// (0x0009bc78) main_myfav_hc_pane_g3

0x107d,	// (0x0009637d) popup_adpt_find_window

0x69d1,	// (0x0009bcd1) afind_page_pane_ParamLimits

0x69d1,	// (0x0009bcd1) afind_page_pane

0x69de,	// (0x0009bcde) aid_size_cell_afind_ParamLimits

0x69de,	// (0x0009bcde) aid_size_cell_afind

0x69f8,	// (0x0009bcf8) bg_popup_sub_pane_cp09_ParamLimits

0x69f8,	// (0x0009bcf8) bg_popup_sub_pane_cp09

0x6a05,	// (0x0009bd05) find_pane_cp01_ParamLimits

0x6a05,	// (0x0009bd05) find_pane_cp01

0xcba4,	// (0x000a1ea4) grid_afind_control_pane_ParamLimits

0xcba4,	// (0x000a1ea4) grid_afind_control_pane

0x6a12,	// (0x0009bd12) grid_afind_pane_ParamLimits

0x6a12,	// (0x0009bd12) grid_afind_pane

0x6a2e,	// (0x0009bd2e) cell_afind_pane_ParamLimits

0x6a2e,	// (0x0009bd2e) cell_afind_pane

0xc090,	// (0x000a1390) afind_page_pane_g1

0x6a76,	// (0x0009bd76) afind_page_pane_g2

0x6a7f,	// (0x0009bd7f) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000a4c6a) afind_page_pane_g

0x6a88,	// (0x0009bd88) afind_page_pane_t1

0xcbb8,	// (0x000a1eb8) cell_afind_grid_control_pane_ParamLimits

0xcbb8,	// (0x000a1eb8) cell_afind_grid_control_pane

0xca18,	// (0x000a1d18) bg_button_pane_cp69_ParamLimits

0xca18,	// (0x000a1d18) bg_button_pane_cp69

0x6aa8,	// (0x0009bda8) cell_afind_pane_g1_ParamLimits

0x6aa8,	// (0x0009bda8) cell_afind_pane_g1

0x6ab5,	// (0x0009bdb5) cell_afind_pane_t1_ParamLimits

0x6ab5,	// (0x0009bdb5) cell_afind_pane_t1

0x9e6a,	// (0x0009f16a) bg_button_pane_cp72

0xcbc7,	// (0x000a1ec7) cell_afind_grid_control_pane_g1

0x3f25,	// (0x00099225) aid_image_placing_area_ParamLimits

0x3f25,	// (0x00099225) aid_image_placing_area

0xc6d9,	// (0x000a19d9) field_vitu_entry_pane_g1_ParamLimits

0xc6d9,	// (0x000a19d9) field_vitu_entry_pane_g1

0xc6e5,	// (0x000a19e5) field_vitu_entry_pane_g2_ParamLimits

0xc6e5,	// (0x000a19e5) field_vitu_entry_pane_g2

0x0001,

0xf817,	// (0x000a4b17) field_vitu_entry_pane_g_ParamLimits

0xf817,	// (0x000a4b17) field_vitu_entry_pane_g

0x5ad3,	// (0x0009add3) cell_vitu_itu_pane_g1_ParamLimits

0x5b15,	// (0x0009ae15) cell_vitu_itu_pane_t3_ParamLimits

0x5b15,	// (0x0009ae15) cell_vitu_itu_pane_t3

0xc9c1,	// (0x000a1cc1) mp4_progress_pane_t1_ParamLimits

0xc9da,	// (0x000a1cda) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000a4bb0) mp4_progress_pane_t_ParamLimits

0xc9f3,	// (0x000a1cf3) mup_progress_pane_cp04_ParamLimits

0x69bb,	// (0x0009bcbb) main_myfav_hc_pane_t5_ParamLimits

0x69bb,	// (0x0009bcbb) main_myfav_hc_pane_t5

0x0ddb,	// (0x000960db) aid_zoom_text_primary

0x107d,	// (0x0009637d) popup_adpt_find_window_ParamLimits

0x43a7,	// (0x000996a7) main_cam_set_pane

0x63f7,	// (0x0009b6f7) cam4_zoom_pane_ParamLimits

0x63f7,	// (0x0009b6f7) cam4_zoom_pane

0x6ac7,	// (0x0009bdc7) main_cam_set_pane_g1_ParamLimits

0x6ac7,	// (0x0009bdc7) main_cam_set_pane_g1

0x6ad5,	// (0x0009bdd5) main_cam_set_pane_g2_ParamLimits

0x6ad5,	// (0x0009bdd5) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000a4c71) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000a4c71) main_cam_set_pane_g

0x6ae1,	// (0x0009bde1) main_cam_set_pane_t1_ParamLimits

0x6ae1,	// (0x0009bde1) main_cam_set_pane_t1

0x6afd,	// (0x0009bdfd) main_cset_listscroll_pane_ParamLimits

0x6afd,	// (0x0009bdfd) main_cset_listscroll_pane

0x6b28,	// (0x0009be28) main_cset_slider_pane_ParamLimits

0x6b28,	// (0x0009be28) main_cset_slider_pane

0xcbd8,	// (0x000a1ed8) main_cset_list_pane_ParamLimits

0xcbd8,	// (0x000a1ed8) main_cset_list_pane

0xcbe8,	// (0x000a1ee8) scroll_pane_cp028

0x6b47,	// (0x0009be47) aid_area_touch_slider

0x6b63,	// (0x0009be63) cset_slider_pane

0x6b8d,	// (0x0009be8d) main_cset_slider_pane_g1

0x6ba2,	// (0x0009bea2) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000a4c76) main_cset_slider_pane_g

0xcc21,	// (0x000a1f21) main_cset_slider_pane_t1

0x6c64,	// (0x0009bf64) main_cset_slider_pane_t2

0x6c7e,	// (0x0009bf7e) main_cset_slider_pane_t3

0x6c98,	// (0x0009bf98) main_cset_slider_pane_t4

0x6cb2,	// (0x0009bfb2) main_cset_slider_pane_t5

0x6cd0,	// (0x0009bfd0) main_cset_slider_pane_t6

0x6ce7,	// (0x0009bfe7) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000a4c9b) main_cset_slider_pane_t

0x6df3,	// (0x0009c0f3) cset_list_set_pane_ParamLimits

0x6df3,	// (0x0009c0f3) cset_list_set_pane

0x6e09,	// (0x0009c109) aid_position_infowindow_above

0x6e11,	// (0x0009c111) aid_position_infowindow_below

0xf065,	// (0x000a4365) cset_list_set_pane_g1_ParamLimits

0xf065,	// (0x000a4365) cset_list_set_pane_g1

0xccc1,	// (0x000a1fc1) cset_list_set_pane_g3_ParamLimits

0xccc1,	// (0x000a1fc1) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000a4cba) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000a4cba) cset_list_set_pane_g

0xccd0,	// (0x000a1fd0) cset_list_set_pane_t1_ParamLimits

0xccd0,	// (0x000a1fd0) cset_list_set_pane_t1

0xe920,	// (0x000a3c20) list_highlight_pane_cp021_ParamLimits

0xe920,	// (0x000a3c20) list_highlight_pane_cp021

0xa9ae,	// (0x0009fcae) cset_slider_pane_g1

0xa9c0,	// (0x0009fcc0) cset_slider_pane_g2

0xa9b7,	// (0x0009fcb7) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000a4cbf) cset_slider_pane_g

0x6e19,	// (0x0009c119) aid_area_touch_cam4_zoom

0x6e21,	// (0x0009c121) cam4_zoom_cont_pane

0x6e29,	// (0x0009c129) cam4_zoom_pane_g1

0x6e31,	// (0x0009c131) cam4_zoom_pane_g2

0x6e39,	// (0x0009c139) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000a4cc6) cam4_zoom_pane_g

0x6e41,	// (0x0009c141) cam4_zoom_cont_pane_g1

0x6e4a,	// (0x0009c14a) cam4_zoom_cont_pane_g2

0x6e53,	// (0x0009c153) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000a4ccd) cam4_zoom_cont_pane_g

0x621b,	// (0x0009b51b) call4_image_pane_ParamLimits

0x621b,	// (0x0009b51b) call4_image_pane

0x627a,	// (0x0009b57a) call4_windows_conf_pane_ParamLimits

0x62bf,	// (0x0009b5bf) popup_call4_audio_in_window_ParamLimits

0x62bf,	// (0x0009b5bf) popup_call4_audio_in_window

0xe7d7,	// (0x000a3ad7) bg_popup_call2_act_pane_cp02

0xca24,	// (0x000a1d24) call4_list_conf_pane

0xc090,	// (0x000a1390) call4_image_pane_g1

0xc090,	// (0x000a1390) call4_image_pane_g2

0x0001,

0xf6d8,	// (0x000a49d8) call4_image_pane_g

0xcce5,	// (0x000a1fe5) list_single_graphic_popup_conf4_pane_ParamLimits

0xcce5,	// (0x000a1fe5) list_single_graphic_popup_conf4_pane

0xe7d7,	// (0x000a3ad7) list_highlight_pane_cp022

0xccf8,	// (0x000a1ff8) list_single_graphic_popup_conf4_pane_g1

0xa58d,	// (0x0009f88d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000a4cd4) list_single_graphic_popup_conf4_pane_g

0xcd00,	// (0x000a2000) list_single_graphic_popup_conf4_pane_t1

0x2149,	// (0x00097449) popup_vtel_slider_window_ParamLimits

0x2149,	// (0x00097449) popup_vtel_slider_window

0xca06,	// (0x000a1d06) dialer2_ne_pane_t2_ParamLimits

0xca06,	// (0x000a1d06) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000a4bb5) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000a4bb5) dialer2_ne_pane_t

0xe920,	// (0x000a3c20) bg_popup_sub_pane_cp010_ParamLimits

0xe920,	// (0x000a3c20) bg_popup_sub_pane_cp010

0x6e5c,	// (0x0009c15c) popup_vtel_slider_window_g1_ParamLimits

0x6e5c,	// (0x0009c15c) popup_vtel_slider_window_g1

0x6e68,	// (0x0009c168) popup_vtel_slider_window_g2_ParamLimits

0x6e68,	// (0x0009c168) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000a4cd9) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000a4cd9) popup_vtel_slider_window_g

0x6eb0,	// (0x0009c1b0) vtel_slider_pane_ParamLimits

0x6eb0,	// (0x0009c1b0) vtel_slider_pane

0x6ebf,	// (0x0009c1bf) vtel_slider_pane_g1_ParamLimits

0x6ebf,	// (0x0009c1bf) vtel_slider_pane_g1

0x6ecc,	// (0x0009c1cc) vtel_slider_pane_g2_ParamLimits

0x6ecc,	// (0x0009c1cc) vtel_slider_pane_g2

0x6ed9,	// (0x0009c1d9) vtel_slider_pane_g3_ParamLimits

0x6ed9,	// (0x0009c1d9) vtel_slider_pane_g3

0x6ebf,	// (0x0009c1bf) vtel_slider_pane_g4_ParamLimits

0x6ebf,	// (0x0009c1bf) vtel_slider_pane_g4

0x6ee6,	// (0x0009c1e6) vtel_slider_pane_g5_ParamLimits

0x6ee6,	// (0x0009c1e6) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000a4ce2) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000a4ce2) vtel_slider_pane_g

0x43a7,	// (0x000996a7) main_gallery2_pane

0x6659,	// (0x0009b959) aid_size_row_itut2_dropdow_list_ParamLimits

0x6659,	// (0x0009b959) aid_size_row_itut2_dropdow_list

0x66c7,	// (0x0009b9c7) grid_vitu2_function_top_pane_ParamLimits

0x66c7,	// (0x0009b9c7) grid_vitu2_function_top_pane

0x6721,	// (0x0009ba21) popup_vitu2_dropdown_list_window_ParamLimits

0x6721,	// (0x0009ba21) popup_vitu2_dropdown_list_window

0x6741,	// (0x0009ba41) popup_vitu2_match_list_window

0x6f01,	// (0x0009c201) cell_vitu2_function_top_pane_ParamLimits

0x6f01,	// (0x0009c201) cell_vitu2_function_top_pane

0x6f1b,	// (0x0009c21b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6f1b,	// (0x0009c21b) cell_vitu2_function_top_pane_cp01

0x6f37,	// (0x0009c237) cell_vitu2_function_top_wide_pane_ParamLimits

0x6f37,	// (0x0009c237) cell_vitu2_function_top_wide_pane

0x43a7,	// (0x000996a7) bg_button_pane_cp012

0x6f53,	// (0x0009c253) cell_vitu2_function_top_pane_g1

0x6f67,	// (0x0009c267) bg_button_pane_cp013_ParamLimits

0x6f67,	// (0x0009c267) bg_button_pane_cp013

0x6f83,	// (0x0009c283) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6f83,	// (0x0009c283) cell_vitu2_function_top_wide_pane_g1

0x1174,	// (0x00096474) bg_popup_sub_pane_cp20

0x6f9b,	// (0x0009c29b) list_vitu2_match_list_pane

0xcabc,	// (0x000a1dbc) bg_popup_sub_pane_cp20_g1

0xcac4,	// (0x000a1dc4) bg_popup_sub_pane_cp20_g2

0xa071,	// (0x0009f371) bg_popup_sub_pane_cp20_g3

0xcacc,	// (0x000a1dcc) bg_popup_sub_pane_cp20_g4

0xa051,	// (0x0009f351) bg_popup_sub_pane_cp20_g5

0xcd16,	// (0x000a2016) bg_popup_sub_pane_cp20_g6

0xcadc,	// (0x000a1ddc) bg_popup_sub_pane_cp20_g7

0xcae4,	// (0x000a1de4) bg_popup_sub_pane_cp20_g8

0xcaec,	// (0x000a1dec) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000a4ced) bg_popup_sub_pane_cp20_g

0x6fb3,	// (0x0009c2b3) list_vitu2_match_list_item_pane_ParamLimits

0x6fb3,	// (0x0009c2b3) list_vitu2_match_list_item_pane

0x6fc5,	// (0x0009c2c5) list_vitu2_match_list_item_pane_t1

0x118e,	// (0x0009648e) bg_popup_sub_pane_cp21

0x701b,	// (0x0009c31b) grid_vitu2_dropdown_list_pane

0x7023,	// (0x0009c323) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7023,	// (0x0009c323) cell_vitu2_dropdown_list_char_pane

0x7044,	// (0x0009c344) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7044,	// (0x0009c344) cell_vitu2_dropdown_list_ctrl_pane

0xcd42,	// (0x000a2042) cell_vitu2_dropdown_list_char_pane_g1

0xcd4b,	// (0x000a204b) cell_vitu2_dropdown_list_char_pane_g2

0xcd1e,	// (0x000a201e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000a4d0a) cell_vitu2_dropdown_list_char_pane_g

0x7070,	// (0x0009c370) cell_vitu2_dropdown_list_char_pane_t1

0x707e,	// (0x0009c37e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x707e,	// (0x0009c37e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x708e,	// (0x0009c38e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x708e,	// (0x0009c38e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x709f,	// (0x0009c39f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x709f,	// (0x0009c39f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x70af,	// (0x0009c3af) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x70af,	// (0x0009c3af) cell_vitu2_dropdown_list_ctrl_pane_g4

0x648b,	// (0x0009b78b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x648b,	// (0x0009b78b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000a4d11) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000a4d11) cell_vitu2_dropdown_list_ctrl_pane_g

0x70cb,	// (0x0009c3cb) aid_size_cell_gallery2_ParamLimits

0x70cb,	// (0x0009c3cb) aid_size_cell_gallery2

0x70e5,	// (0x0009c3e5) grid_gallery2_pane_ParamLimits

0x70e5,	// (0x0009c3e5) grid_gallery2_pane

0x70fc,	// (0x0009c3fc) scroll_pane_cp029_ParamLimits

0x70fc,	// (0x0009c3fc) scroll_pane_cp029

0x710c,	// (0x0009c40c) cell_gallery2_pane_ParamLimits

0x710c,	// (0x0009c40c) cell_gallery2_pane

0xcd54,	// (0x000a2054) cell_gallery2_pane_g2

0xe0ae,	// (0x000a33ae) cell_gallery2_pane_g3

0xcd5c,	// (0x000a205c) cell_gallery2_pane_g4

0xcd64,	// (0x000a2064) cell_gallery2_pane_g5

0x9e18,	// (0x0009f118) grid_highlight_pane_cp10

0x6741,	// (0x0009ba41) popup_vitu2_match_list_window_ParamLimits

0x6755,	// (0x0009ba55) popup_vitu2_query_window_ParamLimits

0x6755,	// (0x0009ba55) popup_vitu2_query_window

0x118e,	// (0x0009648e) bg_vitu2_candi_button_pane

0xcd42,	// (0x000a2042) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcd4b,	// (0x000a204b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcd1e,	// (0x000a201e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7161,	// (0x0009c461) bg_button_pane_cp015

0x7173,	// (0x0009c473) bg_button_pane_cp016

0x7186,	// (0x0009c486) bg_button_pane_cp017

0xbc7c,	// (0x000a0f7c) bg_popup_sub_pane_cp22

0xcd6c,	// (0x000a206c) popup_vitu2_query_window_g1

0x71cb,	// (0x0009c4cb) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000a4d1c) popup_vitu2_query_window_g

0x71e8,	// (0x0009c4e8) popup_vitu2_query_window_t1_ParamLimits

0x71e8,	// (0x0009c4e8) popup_vitu2_query_window_t1

0x721b,	// (0x0009c51b) popup_vitu2_query_window_t2_ParamLimits

0x721b,	// (0x0009c51b) popup_vitu2_query_window_t2

0x722d,	// (0x0009c52d) popup_vitu2_query_window_t3_ParamLimits

0x722d,	// (0x0009c52d) popup_vitu2_query_window_t3

0x7255,	// (0x0009c555) popup_vitu2_query_window_t4_ParamLimits

0x7255,	// (0x0009c555) popup_vitu2_query_window_t4

0x7276,	// (0x0009c576) popup_vitu2_query_window_t5_ParamLimits

0x7276,	// (0x0009c576) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000a4d23) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000a4d23) popup_vitu2_query_window_t

0xcbd0,	// (0x000a1ed0) main_cset_text_pane

0x6b47,	// (0x0009be47) aid_area_touch_slider_ParamLimits

0x6b63,	// (0x0009be63) cset_slider_pane_ParamLimits

0x6b8d,	// (0x0009be8d) main_cset_slider_pane_g1_ParamLimits

0x6ba2,	// (0x0009bea2) main_cset_slider_pane_g2_ParamLimits

0xcbf1,	// (0x000a1ef1) main_cset_slider_pane_g3_ParamLimits

0xcbf1,	// (0x000a1ef1) main_cset_slider_pane_g3

0x6bb7,	// (0x0009beb7) main_cset_slider_pane_g4_ParamLimits

0x6bb7,	// (0x0009beb7) main_cset_slider_pane_g4

0x6bc6,	// (0x0009bec6) main_cset_slider_pane_g5_ParamLimits

0x6bc6,	// (0x0009bec6) main_cset_slider_pane_g5

0x6bd4,	// (0x0009bed4) main_cset_slider_pane_g6_ParamLimits

0x6bd4,	// (0x0009bed4) main_cset_slider_pane_g6

0xf976,	// (0x000a4c76) main_cset_slider_pane_g_ParamLimits

0xcc21,	// (0x000a1f21) main_cset_slider_pane_t1_ParamLimits

0x6c64,	// (0x0009bf64) main_cset_slider_pane_t2_ParamLimits

0x6c7e,	// (0x0009bf7e) main_cset_slider_pane_t3_ParamLimits

0x6c98,	// (0x0009bf98) main_cset_slider_pane_t4_ParamLimits

0x6cb2,	// (0x0009bfb2) main_cset_slider_pane_t5_ParamLimits

0x6cd0,	// (0x0009bfd0) main_cset_slider_pane_t6_ParamLimits

0x6ce7,	// (0x0009bfe7) main_cset_slider_pane_t7_ParamLimits

0x6d15,	// (0x0009c015) main_cset_slider_pane_t8_ParamLimits

0x6d15,	// (0x0009c015) main_cset_slider_pane_t8

0x6d3d,	// (0x0009c03d) main_cset_slider_pane_t9_ParamLimits

0x6d3d,	// (0x0009c03d) main_cset_slider_pane_t9

0x6d65,	// (0x0009c065) main_cset_slider_pane_t10_ParamLimits

0x6d65,	// (0x0009c065) main_cset_slider_pane_t10

0x6d8d,	// (0x0009c08d) main_cset_slider_pane_t11_ParamLimits

0x6d8d,	// (0x0009c08d) main_cset_slider_pane_t11

0x6db7,	// (0x0009c0b7) main_cset_slider_pane_t12_ParamLimits

0x6db7,	// (0x0009c0b7) main_cset_slider_pane_t12

0x6dd4,	// (0x0009c0d4) main_cset_slider_pane_t13_ParamLimits

0x6dd4,	// (0x0009c0d4) main_cset_slider_pane_t13

0xf99b,	// (0x000a4c9b) main_cset_slider_pane_t_ParamLimits

0xe7d7,	// (0x000a3ad7) bg_popup_sub_pane_cp011

0xcd78,	// (0x000a2078) main_cset_text_pane_g1

0xcd80,	// (0x000a2080) main_cset_text_pane_t1

0xcd8e,	// (0x000a208e) main_cset_text_pane_t2

0xcd9c,	// (0x000a209c) main_cset_text_pane_t3

0xcdaa,	// (0x000a20aa) main_cset_text_pane_t4

0xcdb8,	// (0x000a20b8) main_cset_text_pane_t5

0xcdc6,	// (0x000a20c6) main_cset_text_pane_t6

0xcdd4,	// (0x000a20d4) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000a4d32) main_cset_text_pane_t

0x118e,	// (0x0009648e) main_cam4_burst_pane

0x118e,	// (0x0009648e) main_cam5_pane

0x6a96,	// (0x0009bd96) bg_button_pane_cp019

0x6a9f,	// (0x0009bd9f) bg_button_pane_cp020

0xcbfd,	// (0x000a1efd) main_cset_slider_pane_g7_ParamLimits

0xcbfd,	// (0x000a1efd) main_cset_slider_pane_g7

0xcc09,	// (0x000a1f09) main_cset_slider_pane_g8_ParamLimits

0xcc09,	// (0x000a1f09) main_cset_slider_pane_g8

0x6be8,	// (0x0009bee8) main_cset_slider_pane_g9_ParamLimits

0x6be8,	// (0x0009bee8) main_cset_slider_pane_g9

0x6bf4,	// (0x0009bef4) main_cset_slider_pane_g10_ParamLimits

0x6bf4,	// (0x0009bef4) main_cset_slider_pane_g10

0x6c00,	// (0x0009bf00) main_cset_slider_pane_g11_ParamLimits

0x6c00,	// (0x0009bf00) main_cset_slider_pane_g11

0x6c0c,	// (0x0009bf0c) main_cset_slider_pane_g12_ParamLimits

0x6c0c,	// (0x0009bf0c) main_cset_slider_pane_g12

0x6c18,	// (0x0009bf18) main_cset_slider_pane_g13_ParamLimits

0x6c18,	// (0x0009bf18) main_cset_slider_pane_g13

0x6c24,	// (0x0009bf24) main_cset_slider_pane_g14_ParamLimits

0x6c24,	// (0x0009bf24) main_cset_slider_pane_g14

0x6c30,	// (0x0009bf30) main_cset_slider_pane_g15_ParamLimits

0x6c30,	// (0x0009bf30) main_cset_slider_pane_g15

0xcc4f,	// (0x000a1f4f) main_cset_slider_pane_t14_ParamLimits

0xcc4f,	// (0x000a1f4f) main_cset_slider_pane_t14

0xcc88,	// (0x000a1f88) main_cset_slider_pane_t15_ParamLimits

0xcc88,	// (0x000a1f88) main_cset_slider_pane_t15

0x72ed,	// (0x0009c5ed) aid_cam4_burst_size_cell_ParamLimits

0x72ed,	// (0x0009c5ed) aid_cam4_burst_size_cell

0x7309,	// (0x0009c609) grid_cam4_burst_pane_ParamLimits

0x7309,	// (0x0009c609) grid_cam4_burst_pane

0x7339,	// (0x0009c639) linegrid_cam4_burst_pane_ParamLimits

0x7339,	// (0x0009c639) linegrid_cam4_burst_pane

0x7359,	// (0x0009c659) scroll_pane_cp30_ParamLimits

0x7359,	// (0x0009c659) scroll_pane_cp30

0x7365,	// (0x0009c665) cell_cam4_burst_pane_ParamLimits

0x7365,	// (0x0009c665) cell_cam4_burst_pane

0xcde2,	// (0x000a20e2) linegrid_cam4_burst_pane_g1_ParamLimits

0xcde2,	// (0x000a20e2) linegrid_cam4_burst_pane_g1

0x73a1,	// (0x0009c6a1) linegrid_cam4_burst_pane_g2_ParamLimits

0x73a1,	// (0x0009c6a1) linegrid_cam4_burst_pane_g2

0xcdef,	// (0x000a20ef) linegrid_cam4_burst_pane_g3_ParamLimits

0xcdef,	// (0x000a20ef) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000a4d41) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000a4d41) linegrid_cam4_burst_pane_g

0x73b2,	// (0x0009c6b2) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x73b2,	// (0x0009c6b2) linegrid_cam4_burst_pane_g3_copy1

0xcdfc,	// (0x000a20fc) linegrid_cam4_burst_pane_g4_ParamLimits

0xcdfc,	// (0x000a20fc) linegrid_cam4_burst_pane_g4

0x73cc,	// (0x0009c6cc) linegrid_cam4_burst_pane_g5_ParamLimits

0x73cc,	// (0x0009c6cc) linegrid_cam4_burst_pane_g5

0x73dd,	// (0x0009c6dd) linegrid_cam4_burst_pane_g6_ParamLimits

0x73dd,	// (0x0009c6dd) linegrid_cam4_burst_pane_g6

0xce09,	// (0x000a2109) linegrid_cam4_burst_pane_g7_ParamLimits

0xce09,	// (0x000a2109) linegrid_cam4_burst_pane_g7

0x73ee,	// (0x0009c6ee) cell_cam4_burst_pane_g1

0xce22,	// (0x000a2122) main_cam5_pane_t1_ParamLimits

0xce22,	// (0x000a2122) main_cam5_pane_t1

0xce34,	// (0x000a2134) main_cam5_pane_t2_ParamLimits

0xce34,	// (0x000a2134) main_cam5_pane_t2

0xce46,	// (0x000a2146) main_cam5_pane_t3_ParamLimits

0xce46,	// (0x000a2146) main_cam5_pane_t3

0xce58,	// (0x000a2158) main_cam5_pane_t4_ParamLimits

0xce58,	// (0x000a2158) main_cam5_pane_t4

0xce70,	// (0x000a2170) main_cam5_pane_t5_ParamLimits

0xce70,	// (0x000a2170) main_cam5_pane_t5

0xce84,	// (0x000a2184) main_cam5_pane_t6_ParamLimits

0xce84,	// (0x000a2184) main_cam5_pane_t6

0xce98,	// (0x000a2198) main_cam5_pane_t7_ParamLimits

0xce98,	// (0x000a2198) main_cam5_pane_t7

0xceaa,	// (0x000a21aa) main_cam5_pane_t8_ParamLimits

0xceaa,	// (0x000a21aa) main_cam5_pane_t8

0xcec6,	// (0x000a21c6) main_cam5_pane_t9_ParamLimits

0xcec6,	// (0x000a21c6) main_cam5_pane_t9

0xced8,	// (0x000a21d8) main_cam5_pane_t10_ParamLimits

0xced8,	// (0x000a21d8) main_cam5_pane_t10

0xceea,	// (0x000a21ea) main_cam5_pane_t11_ParamLimits

0xceea,	// (0x000a21ea) main_cam5_pane_t11

0xcf08,	// (0x000a2208) main_cam5_pane_t12_ParamLimits

0xcf08,	// (0x000a2208) main_cam5_pane_t12

0xcf1d,	// (0x000a221d) main_cam5_pane_t13_ParamLimits

0xcf1d,	// (0x000a221d) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000a4d4d) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000a4d4d) main_cam5_pane_t

0x1133,	// (0x00096433) popup_scut_keymap_window_ParamLimits

0x1133,	// (0x00096433) popup_scut_keymap_window

0x7401,	// (0x0009c701) aid_size_cell_brow_shortcut

0x9e18,	// (0x0009f118) bg_popup_window_pane_cp010

0x740d,	// (0x0009c70d) grid_scut_pane

0x7419,	// (0x0009c719) cell_scut_pane_ParamLimits

0x7419,	// (0x0009c719) cell_scut_pane

0x7430,	// (0x0009c730) cell_scut_pane_g1

0xcf3a,	// (0x000a223a) cell_scut_pane_t1

0xcf49,	// (0x000a2249) cell_scut_pane_t2

0x7439,	// (0x0009c739) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000a4d68) cell_scut_pane_t

0x511e,	// (0x0009a41e) main_mup3_pane_g8_ParamLimits

0x511e,	// (0x0009a41e) main_mup3_pane_g8

0x6667,	// (0x0009b967) area_vitu2_query_pane_ParamLimits

0x6667,	// (0x0009b967) area_vitu2_query_pane

0x7199,	// (0x0009c499) input_focus_pane_cp08

0xcf58,	// (0x000a2258) area_vitu2_query_pane_g1

0x7447,	// (0x0009c747) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000a4d6f) area_vitu2_query_pane_g

0x7458,	// (0x0009c758) area_vitu2_query_pane_t1_ParamLimits

0x7458,	// (0x0009c758) area_vitu2_query_pane_t1

0x746c,	// (0x0009c76c) area_vitu2_query_pane_t2_ParamLimits

0x746c,	// (0x0009c76c) area_vitu2_query_pane_t2

0x7480,	// (0x0009c780) area_vitu2_query_pane_t3_ParamLimits

0x7480,	// (0x0009c780) area_vitu2_query_pane_t3

0xcf64,	// (0x000a2264) area_vitu2_query_pane_t4_ParamLimits

0xcf64,	// (0x000a2264) area_vitu2_query_pane_t4

0xcf8c,	// (0x000a228c) area_vitu2_query_pane_t5_ParamLimits

0xcf8c,	// (0x000a228c) area_vitu2_query_pane_t5

0xcfb4,	// (0x000a22b4) area_vitu2_query_pane_t6_ParamLimits

0xcfb4,	// (0x000a22b4) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000a4d74) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000a4d74) area_vitu2_query_pane_t

0x74a8,	// (0x0009c7a8) bg_button_pane_cp018

0x74b6,	// (0x0009c7b6) bg_button_pane_cp021

0x74c2,	// (0x0009c7c2) bg_button_pane_cp022

0x74d3,	// (0x0009c7d3) input_focus_pane_cp09

0xa6c9,	// (0x0009f9c9) aid_size_touch_mv_arrow_left

0xa6f2,	// (0x0009f9f2) aid_size_touch_mv_arrow_right

0x6c48,	// (0x0009bf48) main_cset_slider_pane_g16_ParamLimits

0x6c48,	// (0x0009bf48) main_cset_slider_pane_g16

0x6c56,	// (0x0009bf56) main_cset_slider_pane_g17_ParamLimits

0x6c56,	// (0x0009bf56) main_cset_slider_pane_g17

0x73ee,	// (0x0009c6ee) cell_cam4_burst_pane_g1_ParamLimits

0xe7d7,	// (0x000a3ad7) compa_mode_pane

0x6e74,	// (0x0009c174) popup_vtel_slider_window_g3_ParamLimits

0x6e74,	// (0x0009c174) popup_vtel_slider_window_g3

0x6e88,	// (0x0009c188) popup_vtel_slider_window_g4_ParamLimits

0x6e88,	// (0x0009c188) popup_vtel_slider_window_g4

0x6e9c,	// (0x0009c19c) popup_vtel_slider_window_t1_ParamLimits

0x6e9c,	// (0x0009c19c) popup_vtel_slider_window_t1

0x118e,	// (0x0009648e) main_cl_pane

0x4445,	// (0x00099745) popup_imed_adjust2_window_ParamLimits

0xbc7c,	// (0x000a0f7c) bg_tb_trans_pane_cp05_ParamLimits

0xc60e,	// (0x000a190e) popup_imed_adjust2_window_g1_ParamLimits

0xc61d,	// (0x000a191d) popup_imed_adjust2_window_g2_ParamLimits

0xc61d,	// (0x000a191d) popup_imed_adjust2_window_g2

0xc629,	// (0x000a1929) popup_imed_adjust2_window_g3_ParamLimits

0xc629,	// (0x000a1929) popup_imed_adjust2_window_g3

0x0002,

0xf7db,	// (0x000a4adb) popup_imed_adjust2_window_g_ParamLimits

0xf7db,	// (0x000a4adb) popup_imed_adjust2_window_g

0xc635,	// (0x000a1935) popup_imed_adjust2_window_t1_ParamLimits

0xc64d,	// (0x000a194d) slider_imed_adjust_pane_ParamLimits

0xc661,	// (0x000a1961) slider_imed_adjust_pane_g1_ParamLimits

0xc671,	// (0x000a1971) slider_imed_adjust_pane_g2_ParamLimits

0xc681,	// (0x000a1981) slider_imed_adjust_pane_g3_ParamLimits

0xc692,	// (0x000a1992) slider_imed_adjust_pane_g4_ParamLimits

0xf7e2,	// (0x000a4ae2) slider_imed_adjust_pane_g_ParamLimits

0x63a0,	// (0x0009b6a0) aid_touch_area_cam4_ParamLimits

0x63a0,	// (0x0009b6a0) aid_touch_area_cam4

0x63b0,	// (0x0009b6b0) battery_pane_cp01

0x6437,	// (0x0009b737) main_camera4_pane_g6_ParamLimits

0x6437,	// (0x0009b737) main_camera4_pane_g6

0x6455,	// (0x0009b755) main_camera4_pane_t2_ParamLimits

0x6455,	// (0x0009b755) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000a4be9) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000a4be9) main_camera4_pane_t

0x64ea,	// (0x0009b7ea) aid_touch_area_vid4_ParamLimits

0x64ea,	// (0x0009b7ea) aid_touch_area_vid4

0x652a,	// (0x0009b82a) main_video4_pane_g5_ParamLimits

0x652a,	// (0x0009b82a) main_video4_pane_g5

0x654e,	// (0x0009b84e) vid4_progress_pane_ParamLimits

0x654e,	// (0x0009b84e) vid4_progress_pane

0xcc15,	// (0x000a1f15) main_cset_slider_pane_g18_ParamLimits

0xcc15,	// (0x000a1f15) main_cset_slider_pane_g18

0xce16,	// (0x000a2116) cell_cam4_burst_pane_g2_ParamLimits

0xce16,	// (0x000a2116) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000a4d48) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000a4d48) cell_cam4_burst_pane_g

0x74e4,	// (0x0009c7e4) bg_cl_pane_ParamLimits

0x74e4,	// (0x0009c7e4) bg_cl_pane

0x74f0,	// (0x0009c7f0) cl_header_pane_ParamLimits

0x74f0,	// (0x0009c7f0) cl_header_pane

0x74fc,	// (0x0009c7fc) cl_listscroll_pane_ParamLimits

0x74fc,	// (0x0009c7fc) cl_listscroll_pane

0xd000,	// (0x000a2300) bg_cl_pane_g1

0xd008,	// (0x000a2308) bg_cl_pane_g2

0xd010,	// (0x000a2310) bg_cl_pane_g3

0xd018,	// (0x000a2318) bg_cl_pane_g4

0xd020,	// (0x000a2320) bg_cl_pane_g5

0xd028,	// (0x000a2328) bg_cl_pane_g6

0xd030,	// (0x000a2330) bg_cl_pane_g7

0xd038,	// (0x000a2338) bg_cl_pane_g8

0xd040,	// (0x000a2340) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000a4d83) bg_cl_pane_g

0x7508,	// (0x0009c808) aid_height_cl_leading_ParamLimits

0x7508,	// (0x0009c808) aid_height_cl_leading

0x7514,	// (0x0009c814) aid_height_cl_text_ParamLimits

0x7514,	// (0x0009c814) aid_height_cl_text

0xe92e,	// (0x000a3c2e) bg_cl_header_pane_ParamLimits

0xe92e,	// (0x000a3c2e) bg_cl_header_pane

0x752c,	// (0x0009c82c) cl_header_pane_g1_ParamLimits

0x752c,	// (0x0009c82c) cl_header_pane_g1

0x7539,	// (0x0009c839) cl_header_pane_t1_ParamLimits

0x7539,	// (0x0009c839) cl_header_pane_t1

0xd048,	// (0x000a2348) cl_list_pane

0xcbe8,	// (0x000a1ee8) hc_scroll_pane_cp01

0xa051,	// (0x0009f351) bg_cl_header_pane_g1

0xcabc,	// (0x000a1dbc) bg_cl_header_pane_g2

0xa071,	// (0x0009f371) bg_cl_header_pane_g3

0xcacc,	// (0x000a1dcc) bg_cl_header_pane_g4

0xcac4,	// (0x000a1dc4) bg_cl_header_pane_g5

0xcd16,	// (0x000a2016) bg_cl_header_pane_g6

0xcae4,	// (0x000a1de4) bg_cl_header_pane_g7

0xcaec,	// (0x000a1dec) bg_cl_header_pane_g8

0xcadc,	// (0x000a1ddc) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000a4d96) bg_cl_header_pane_g

0x754b,	// (0x0009c84b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x754b,	// (0x0009c84b) hc_cl_list_double_graphic_heading_pane

0x755c,	// (0x0009c85c) hc_cl_list_single_graphic_pane_ParamLimits

0x755c,	// (0x0009c85c) hc_cl_list_single_graphic_pane

0x7575,	// (0x0009c875) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7575,	// (0x0009c875) hc_cl_list_single_graphic_pane_g1

0x7581,	// (0x0009c881) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7581,	// (0x0009c881) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000a4da9) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000a4da9) hc_cl_list_single_graphic_pane_g

0x7595,	// (0x0009c895) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7595,	// (0x0009c895) hc_cl_list_single_graphic_pane_t1

0x7575,	// (0x0009c875) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7575,	// (0x0009c875) hc_cl_list_double_graphic_heading_pane_g1

0x75aa,	// (0x0009c8aa) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x75aa,	// (0x0009c8aa) hc_cl_list_double_graphic_heading_pane_g2

0x75be,	// (0x0009c8be) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x75be,	// (0x0009c8be) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000a4dae) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000a4dae) hc_cl_list_double_graphic_heading_pane_g

0x75d2,	// (0x0009c8d2) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x75d2,	// (0x0009c8d2) hc_cl_list_double_graphic_heading_pane_t1

0x75e7,	// (0x0009c8e7) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x75e7,	// (0x0009c8e7) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000a4db5) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000a4db5) hc_cl_list_double_graphic_heading_pane_t

0x7604,	// (0x0009c904) vid4_progress_pane_g1

0x7614,	// (0x0009c914) vid4_progress_pane_g2

0x7624,	// (0x0009c924) vid4_progress_pane_g3

0x7636,	// (0x0009c936) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000a4dba) vid4_progress_pane_g

0x764e,	// (0x0009c94e) vid4_progress_pane_t1

0x7664,	// (0x0009c964) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000a4dc5) vid4_progress_pane_t

0x768e,	// (0x0009c98e) wait_bar_pane_cp07

0xbe77,	// (0x000a1177) blid_firmament_pane_ParamLimits

0xbeba,	// (0x000a11ba) popup_blid_sat_info2_window_g1

0xbede,	// (0x000a11de) popup_blid_sat_info2_window_t3

0xbeec,	// (0x000a11ec) popup_blid_sat_info2_window_t4

0xbefa,	// (0x000a11fa) popup_blid_sat_info2_window_t5

0xbf08,	// (0x000a1208) popup_blid_sat_info2_window_t6

0xbf18,	// (0x000a1218) popup_blid_sat_info2_window_t7

0xbf26,	// (0x000a1226) popup_blid_sat_info2_window_t8

0xbf34,	// (0x000a1234) popup_blid_sat_info2_window_t9

0xbf42,	// (0x000a1242) popup_blid_sat_info2_window_t10

0xc010,	// (0x000a1310) aid_firma_cardinal_ParamLimits

0xc024,	// (0x000a1324) blid_firmament_pane_t1_ParamLimits

0xc03b,	// (0x000a133b) blid_firmament_pane_t2_ParamLimits

0xc052,	// (0x000a1352) blid_firmament_pane_t3_ParamLimits

0xc069,	// (0x000a1369) blid_firmament_pane_t4_ParamLimits

0xf6cf,	// (0x000a49cf) blid_firmament_pane_t_ParamLimits

0xc080,	// (0x000a1380) blid_sat_info_pane_ParamLimits

0x43a7,	// (0x000996a7) main_cam_set_pane_ParamLimits

0x58f5,	// (0x0009abf5) aid_size_cell_colour_35_ParamLimits

0x590f,	// (0x0009ac0f) aid_size_cell_colour_112_ParamLimits

0x5926,	// (0x0009ac26) aid_size_cell_effect_ParamLimits

0xe920,	// (0x000a3c20) bg_tb_trans_pane_cp02_ParamLimits

0xba4f,	// (0x000a0d4f) heading_imed_pane_ParamLimits

0x5940,	// (0x0009ac40) listscroll_imed_pane_ParamLimits

0xb296,	// (0x000a0596) popup_call2_audio_first_window_g5_ParamLimits

0xb296,	// (0x000a0596) popup_call2_audio_first_window_g5

0x6086,	// (0x0009b386) aid_size_touch_image3_arrow_left_ParamLimits

0x6086,	// (0x0009b386) aid_size_touch_image3_arrow_left

0x609c,	// (0x0009b39c) aid_size_touch_image3_arrow_right_ParamLimits

0x609c,	// (0x0009b39c) aid_size_touch_image3_arrow_right

0x7679,	// (0x0009c979) vid4_progress_pane_t3

0x5bde,	// (0x0009aede) main_hwr_training_symbol_option_pane_ParamLimits

0x5bde,	// (0x0009aede) main_hwr_training_symbol_option_pane

0xc8fb,	// (0x000a1bfb) popup_hwr_training_preview_window_ParamLimits

0xc8fb,	// (0x000a1bfb) popup_hwr_training_preview_window

0x5c3f,	// (0x0009af3f) hwr_training_navi_pane_g5_ParamLimits

0x5c3f,	// (0x0009af3f) hwr_training_navi_pane_g5

0xcaaa,	// (0x000a1daa) popup_char_count_window

0x1174,	// (0x00096474) bg_popup_sub_pane_cp20_ParamLimits

0x6f9b,	// (0x0009c29b) list_vitu2_match_list_pane_ParamLimits

0x6fa7,	// (0x0009c2a7) vitu2_page_scroll_pane_ParamLimits

0x6fa7,	// (0x0009c2a7) vitu2_page_scroll_pane

0xd062,	// (0x000a2362) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd062,	// (0x000a2362) list_single_hwr_training_symbol_option_pane

0xd075,	// (0x000a2375) list_single_hwr_training_symbol_option_pane_g1

0xd07d,	// (0x000a237d) list_single_hwr_training_symbol_option_pane_t1

0xd08b,	// (0x000a238b) bg_button_pane_cp023

0xd094,	// (0x000a2394) bg_button_pane_cp024

0x76d0,	// (0x0009c9d0) vitu2_page_scroll_pane_g1

0x76d8,	// (0x0009c9d8) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000a4dcc) vitu2_page_scroll_pane_g

0x76e0,	// (0x0009c9e0) vitu2_page_scroll_pane_t1

0xbdd7,	// (0x000a10d7) popup_char_count_window_g1

0xd0e7,	// (0x000a23e7) popup_char_count_window_g2

0xd0f0,	// (0x000a23f0) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000a4dd1) popup_char_count_window_g

0xd0f9,	// (0x000a23f9) popup_char_count_window_t1

0x118e,	// (0x0009648e) main_vded2_pane

0xc5fa,	// (0x000a18fa) aid_size_cell_imed_line

0xc604,	// (0x000a1904) grid_imed_line_width_pane

0x65bc,	// (0x0009b8bc) vid4_indicators_pane_g4

0xd107,	// (0x000a2407) cell_imed_line_width_pane_ParamLimits

0xd107,	// (0x000a2407) cell_imed_line_width_pane

0xd11b,	// (0x000a241b) cell_imed_line_width_pane_g1

0xd0c7,	// (0x000a23c7) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000a4dd8) cell_imed_line_width_pane_g

0x76ef,	// (0x0009c9ef) main_vded2_pane_g1_ParamLimits

0x76ef,	// (0x0009c9ef) main_vded2_pane_g1

0x76fc,	// (0x0009c9fc) main_vded2_pane_g2_ParamLimits

0x76fc,	// (0x0009c9fc) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000a4ddd) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000a4ddd) main_vded2_pane_g

0x770a,	// (0x0009ca0a) vded2_slider_pane_ParamLimits

0x770a,	// (0x0009ca0a) vded2_slider_pane

0x7717,	// (0x0009ca17) aid_size_touch_vded2_end

0x7721,	// (0x0009ca21) aid_size_touch_vded2_playhead

0xd124,	// (0x000a2424) aid_size_touch_vded2_start

0xd12c,	// (0x000a242c) vded2_slider_bg_pane

0xd135,	// (0x000a2435) vded2_slider_pane_g1

0xd13e,	// (0x000a243e) vded2_slider_pane_g2

0x7729,	// (0x0009ca29) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000a4de2) vded2_slider_pane_g

0xd146,	// (0x000a2446) vded2_slider_bg_pane_g1

0xd14f,	// (0x000a244f) vded2_slider_bg_pane_g2

0xd158,	// (0x000a2458) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x000a4de9) vded2_slider_bg_pane_g

0x3c8f,	// (0x00098f8f) aid_postcard_touch_down_pane_ParamLimits

0x3c8f,	// (0x00098f8f) aid_postcard_touch_down_pane

0x3c9f,	// (0x00098f9f) aid_postcard_touch_up_pane_ParamLimits

0x3c9f,	// (0x00098f9f) aid_postcard_touch_up_pane

0x118e,	// (0x0009648e) main_blid2_pane

0x43d0,	// (0x000996d0) popup_blid2_search_window

0xe7d7,	// (0x000a3ad7) blid2_gps_pane

0xe7d7,	// (0x000a3ad7) blid2_navig_pane

0xe7d7,	// (0x000a3ad7) blid2_search_pane

0xe7d7,	// (0x000a3ad7) blid2_tripm_pane

0x7732,	// (0x0009ca32) blid2_search_pane_g1_ParamLimits

0x7732,	// (0x0009ca32) blid2_search_pane_g1

0x7742,	// (0x0009ca42) blid2_search_pane_t1_ParamLimits

0x7742,	// (0x0009ca42) blid2_search_pane_t1

0x7754,	// (0x0009ca54) aid_size_cell_blid2_gps_ParamLimits

0x7754,	// (0x0009ca54) aid_size_cell_blid2_gps

0x7764,	// (0x0009ca64) blid2_gps_pane_g1_ParamLimits

0x7764,	// (0x0009ca64) blid2_gps_pane_g1

0x7770,	// (0x0009ca70) grid_blid2_satellite_pane_ParamLimits

0x7770,	// (0x0009ca70) grid_blid2_satellite_pane

0x7780,	// (0x0009ca80) blid2_navig_pane_g1_ParamLimits

0x7780,	// (0x0009ca80) blid2_navig_pane_g1

0x778c,	// (0x0009ca8c) blid2_navig_pane_t1_ParamLimits

0x778c,	// (0x0009ca8c) blid2_navig_pane_t1

0x779e,	// (0x0009ca9e) blid2_navig_pane_t2_ParamLimits

0x779e,	// (0x0009ca9e) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x000a4df0) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x000a4df0) blid2_navig_pane_t

0x77b0,	// (0x0009cab0) blid2_navig_ring_pane_ParamLimits

0x77b0,	// (0x0009cab0) blid2_navig_ring_pane

0x77c0,	// (0x0009cac0) blid2_speed_pane_ParamLimits

0x77c0,	// (0x0009cac0) blid2_speed_pane

0x77cc,	// (0x0009cacc) blid2_tripm_pane_g1_ParamLimits

0x77cc,	// (0x0009cacc) blid2_tripm_pane_g1

0x77dc,	// (0x0009cadc) blid2_tripm_pane_g2_ParamLimits

0x77dc,	// (0x0009cadc) blid2_tripm_pane_g2

0x77e8,	// (0x0009cae8) blid2_tripm_pane_g3_ParamLimits

0x77e8,	// (0x0009cae8) blid2_tripm_pane_g3

0x77f4,	// (0x0009caf4) blid2_tripm_pane_g4_ParamLimits

0x77f4,	// (0x0009caf4) blid2_tripm_pane_g4

0x7800,	// (0x0009cb00) blid2_tripm_pane_g5_ParamLimits

0x7800,	// (0x0009cb00) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x000a4df5) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x000a4df5) blid2_tripm_pane_g

0x781c,	// (0x0009cb1c) blid2_tripm_pane_t1_ParamLimits

0x781c,	// (0x0009cb1c) blid2_tripm_pane_t1

0x7830,	// (0x0009cb30) blid2_tripm_pane_t2_ParamLimits

0x7830,	// (0x0009cb30) blid2_tripm_pane_t2

0x7842,	// (0x0009cb42) blid2_tripm_pane_t3_ParamLimits

0x7842,	// (0x0009cb42) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x000a4e02) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x000a4e02) blid2_tripm_pane_t

0x7874,	// (0x0009cb74) cell_blid2_satellite_pane_ParamLimits

0x7874,	// (0x0009cb74) cell_blid2_satellite_pane

0x788e,	// (0x0009cb8e) cell_blid2_satellite_pane_g1

0xd161,	// (0x000a2461) cell_blid2_satellite_pane_t1

0xc090,	// (0x000a1390) blid2_speed_pane_g1

0xd16f,	// (0x000a246f) blid2_speed_pane_t1

0xd17d,	// (0x000a247d) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x000a4e0b) blid2_speed_pane_t

0xc090,	// (0x000a1390) blid2_navig_ring_pane_g1

0x7897,	// (0x0009cb97) blid2_navig_ring_pane_g2

0x789f,	// (0x0009cb9f) blid2_navig_ring_pane_g3

0x78a7,	// (0x0009cba7) blid2_navig_ring_pane_g4

0x78af,	// (0x0009cbaf) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x000a4e10) blid2_navig_ring_pane_g

0xe7d7,	// (0x000a3ad7) bg_popup_window_pane_cp011

0xd18b,	// (0x000a248b) popup_blid2_search_window_g1

0xd193,	// (0x000a2493) popup_blid2_search_window_t1

0xd1a1,	// (0x000a24a1) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x000a4e1b) popup_blid2_search_window_t

0x9f60,	// (0x0009f260) main_browser_pane_g1

0xef93,	// (0x000a4293) main_browser_pane_ParamLimits

0x43a7,	// (0x000996a7) bg_button_pane_cp011_ParamLimits

0x6869,	// (0x0009bb69) cell_vitu2_function_pane_g1_ParamLimits

0xbc7c,	// (0x000a0f7c) bg_popup_sub_pane_cp22_ParamLimits

0x7199,	// (0x0009c499) input_focus_pane_cp08_ParamLimits

0x71b0,	// (0x0009c4b0) popup_vitu2_query_button_pane_ParamLimits

0x71b0,	// (0x0009c4b0) popup_vitu2_query_button_pane

0x71c1,	// (0x0009c4c1) popup_vitu2_query_input_button_pane

0xcd6c,	// (0x000a206c) popup_vitu2_query_window_g1_ParamLimits

0x71cb,	// (0x0009c4cb) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000a4d1c) popup_vitu2_query_window_g_ParamLimits

0xe7d7,	// (0x000a3ad7) bg_button_pane_cp026

0x78b7,	// (0x0009cbb7) popup_vitu2_query_input_button_pane_g1

0xe7d7,	// (0x000a3ad7) bg_button_pane_cp025

0xd1af,	// (0x000a24af) popup_vitu2_query_button_pane_t1

0x4e26,	// (0x0009a126) main_mp3_pane_t6

0x4e36,	// (0x0009a136) popup_slider_window_cp01

0x6499,	// (0x0009b799) cam4_battery_pane

0x6579,	// (0x0009b879) cam4_battery_pane_cp02

0x75fc,	// (0x0009c8fc) cam4_battery_pane_cp01

0x75fc,	// (0x0009c8fc) cam4_battery_pane_cp03

0xd0cf,	// (0x000a23cf) cam4_battery_pane_g1

0xc090,	// (0x000a1390) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x000a4e20) cam4_battery_pane_g

0xbf50,	// (0x000a1250) popup_blid_sat_info2_window_t11

0xa6c9,	// (0x0009f9c9) aid_size_touch_mv_arrow_left_ParamLimits

0xa6f2,	// (0x0009f9f2) aid_size_touch_mv_arrow_right_ParamLimits

0xa750,	// (0x0009fa50) navi_pane_g1_ParamLimits

0xa75c,	// (0x0009fa5c) navi_pane_g2_ParamLimits

0xa78a,	// (0x0009fa8a) navi_pane_g3_ParamLimits

0xf3e1,	// (0x000a46e1) navi_pane_g_ParamLimits

0x361f,	// (0x0009891f) navi_pane_mv_t1_ParamLimits

0x594c,	// (0x0009ac4c) grid_imed_effect_pane_ParamLimits

0x2009,	// (0x00097309) aid_placing_vt_slider_lsc

0x9eaf,	// (0x0009f1af) aid_placing_vt_slider_prt

0xe920,	// (0x000a3c20) bg_tb_trans_pane_cp01_ParamLimits

0xc213,	// (0x000a1513) popup_image_details_window_g1_ParamLimits

0xc226,	// (0x000a1526) popup_image_details_window_g2_ParamLimits

0xc23b,	// (0x000a153b) popup_image_details_window_g3_ParamLimits

0xc23b,	// (0x000a153b) popup_image_details_window_g3

0xf714,	// (0x000a4a14) popup_image_details_window_g_ParamLimits

0xc24f,	// (0x000a154f) popup_image_details_window_t1_ParamLimits

0xc261,	// (0x000a1561) popup_image_details_window_t2_ParamLimits

0xc27a,	// (0x000a157a) popup_image_details_window_t3_ParamLimits

0xc28e,	// (0x000a158e) popup_image_details_window_t4_ParamLimits

0xc2a9,	// (0x000a15a9) popup_image_details_window_t5_ParamLimits

0xf71b,	// (0x000a4a1b) popup_image_details_window_t_ParamLimits

0x7520,	// (0x0009c820) cl_header_name_pane_ParamLimits

0x7520,	// (0x0009c820) cl_header_name_pane

0x78bf,	// (0x0009cbbf) cl_header_name_pane_t1_ParamLimits

0x78bf,	// (0x0009cbbf) cl_header_name_pane_t1

0x78d6,	// (0x0009cbd6) cl_header_name_pane_t2_ParamLimits

0x78d6,	// (0x0009cbd6) cl_header_name_pane_t2

0x7900,	// (0x0009cc00) cl_header_name_pane_t3_ParamLimits

0x7900,	// (0x0009cc00) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x000a4e25) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x000a4e25) cl_header_name_pane_t

0xa819,	// (0x0009fb19) navi_pane_mv_g2_ParamLimits

0xca67,	// (0x000a1d67) field_vitu2_entry_pane_g1_ParamLimits

0xca73,	// (0x000a1d73) field_vitu2_entry_pane_g2_ParamLimits

0xca7f,	// (0x000a1d7f) field_vitu2_entry_pane_g3_ParamLimits

0xca7f,	// (0x000a1d7f) field_vitu2_entry_pane_g3

0xf91b,	// (0x000a4c1b) field_vitu2_entry_pane_g_ParamLimits

0x67fd,	// (0x0009bafd) cell_vitu2_itu_pane_g1_ParamLimits

0x680f,	// (0x0009bb0f) cell_vitu2_itu_pane_g2_ParamLimits

0x680f,	// (0x0009bb0f) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000a4c27) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000a4c27) cell_vitu2_itu_pane_g

0x43a7,	// (0x000996a7) bg_vkb2_func_pane_cp05_ParamLimits

0x43a7,	// (0x000996a7) bg_vkb2_func_pane_cp05

0x43a7,	// (0x000996a7) bg_vkb2_func_pane_cp03

0x43a7,	// (0x000996a7) bg_vkb2_func_pane_cp04

0x43a7,	// (0x000996a7) bg_vkb2_func_pane_cp10_ParamLimits

0x43a7,	// (0x000996a7) bg_vkb2_func_pane_cp10

0x74c2,	// (0x0009c7c2) bg_vkb2_func_pane_cp08

0x74a8,	// (0x0009c7a8) bg_vkb2_func_pane_cp06

0x74b6,	// (0x0009c7b6) bg_vkb2_func_pane_cp07

0xd09d,	// (0x000a239d) bg_vkb2_func_pane_cp11_ParamLimits

0xd09d,	// (0x000a239d) bg_vkb2_func_pane_cp11

0xd0b2,	// (0x000a23b2) bg_vkb2_func_pane_cp12_ParamLimits

0xd0b2,	// (0x000a23b2) bg_vkb2_func_pane_cp12

0xe7d7,	// (0x000a3ad7) bg_vkb2_func_pane_cp09

0xcabc,	// (0x000a1dbc) bg_vkb2_func_pane_g1

0xa071,	// (0x0009f371) bg_vkb2_func_pane_g2

0xcac4,	// (0x000a1dc4) bg_vkb2_func_pane_g3

0xcacc,	// (0x000a1dcc) bg_vkb2_func_pane_g4

0xcd16,	// (0x000a2016) bg_vkb2_func_pane_g5

0xcae4,	// (0x000a1de4) bg_vkb2_func_pane_g6

0xcaec,	// (0x000a1dec) bg_vkb2_func_pane_g7

0xcadc,	// (0x000a1ddc) bg_vkb2_func_pane_g8

0xa051,	// (0x0009f351) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x000a4e2c) bg_vkb2_func_pane_g

0x780e,	// (0x0009cb0e) blid2_tripm_pane_g6_ParamLimits

0x780e,	// (0x0009cb0e) blid2_tripm_pane_g6

0xc9b9,	// (0x000a1cb9) mp4_progress_pane_g1

0x7868,	// (0x0009cb68) blid2_tripm_values_pane_ParamLimits

0x7868,	// (0x0009cb68) blid2_tripm_values_pane

0x7925,	// (0x0009cc25) blid2_tripm_values_pane_t1

0x7933,	// (0x0009cc33) blid2_tripm_values_pane_t2

0x7941,	// (0x0009cc41) blid2_tripm_values_pane_t3

0x794f,	// (0x0009cc4f) blid2_tripm_values_pane_t4

0x795d,	// (0x0009cc5d) blid2_tripm_values_pane_t5

0x796b,	// (0x0009cc6b) blid2_tripm_values_pane_t6

0x7979,	// (0x0009cc79) blid2_tripm_values_pane_t7

0x7987,	// (0x0009cc87) blid2_tripm_values_pane_t8

0x7995,	// (0x0009cc95) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x000a4e3f) blid2_tripm_values_pane_t

0x2049,	// (0x00097349) call_video_pane_t1_ParamLimits

0x206a,	// (0x0009736a) call_video_pane_t2_ParamLimits

0xf26a,	// (0x000a456a) call_video_pane_t_ParamLimits

0x3b60,	// (0x00098e60) msg_header_pane_g1_ParamLimits

0xa9f3,	// (0x0009fcf3) msg_header_pane_g2_ParamLimits

0xa9f3,	// (0x0009fcf3) msg_header_pane_g2

0x0001,

0xf484,	// (0x000a4784) msg_header_pane_g_ParamLimits

0xf484,	// (0x000a4784) msg_header_pane_g

0xef93,	// (0x000a4293) main_clock2_pane_ParamLimits

0x56c6,	// (0x0009a9c6) grid_clock2_toolbar_pane_ParamLimits

0x56c6,	// (0x0009a9c6) grid_clock2_toolbar_pane

0x56c6,	// (0x0009a9c6) listscroll_clock2_pane_ParamLimits

0x56c6,	// (0x0009a9c6) listscroll_clock2_pane

0x5776,	// (0x0009aa76) main_clock2_pane_t3_ParamLimits

0x5776,	// (0x0009aa76) main_clock2_pane_t3

0x5788,	// (0x0009aa88) main_clock2_pane_t4_ParamLimits

0x5788,	// (0x0009aa88) main_clock2_pane_t4

0xd1bd,	// (0x000a24bd) cell_clock2_toolbar_pane

0xd1c5,	// (0x000a24c5) cell_clock2_toolbar_pane_cp01

0xd1c5,	// (0x000a24c5) cell_clock2_toolbar_pane_cp02

0xd1cd,	// (0x000a24cd) cell_clock2_toolbar_pane_cp03

0xd1d5,	// (0x000a24d5) list_clock2_pane

0xa63f,	// (0x0009f93f) scroll_pane_cp10

0xd1dd,	// (0x000a24dd) list_single_clock2_pane_ParamLimits

0xd1dd,	// (0x000a24dd) list_single_clock2_pane

0x9e18,	// (0x0009f118) list_highlight_pane_cp08

0xd1ea,	// (0x000a24ea) list_single_clock2_pane_t1

0xd1f8,	// (0x000a24f8) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000a4e52) list_single_clock2_pane_t

0xe7d7,	// (0x000a3ad7) bg_button_pane_cp10

0xd206,	// (0x000a2506) cell_clock2_toolbar_pane_g1

0x3bfd,	// (0x00098efd) aid_main_viewer_pane_g1_ParamLimits

0x3bfd,	// (0x00098efd) aid_main_viewer_pane_g1

0x3c09,	// (0x00098f09) aid_main_viewer_pane_g2_ParamLimits

0x3c09,	// (0x00098f09) aid_main_viewer_pane_g2

0x3c15,	// (0x00098f15) aid_main_viewer_pane_g3_ParamLimits

0x3c15,	// (0x00098f15) aid_main_viewer_pane_g3

0x3c26,	// (0x00098f26) aid_main_viewer_pane_g4_ParamLimits

0x3c26,	// (0x00098f26) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x000a4795) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x000a4795) aid_main_viewer_pane_g

0x439a,	// (0x0009969a) main_calc_pane_ParamLimits

0x43b5,	// (0x000996b5) main_dialer2_pane_ParamLimits

0x118e,	// (0x0009648e) main_cam6_pane

0x118e,	// (0x0009648e) main_vid6_pane

0x56d2,	// (0x0009a9d2) listscroll_gen_pane_cp06_ParamLimits

0x56d2,	// (0x0009a9d2) listscroll_gen_pane_cp06

0x579a,	// (0x0009aa9a) main_clock2_pane_t5_ParamLimits

0x579a,	// (0x0009aa9a) main_clock2_pane_t5

0x57e7,	// (0x0009aae7) aid_call2_pane_cp10_ParamLimits

0x57f9,	// (0x0009aaf9) aid_call_pane_cp10_ParamLimits

0xa6bd,	// (0x0009f9bd) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa6bd,	// (0x0009f9bd) popup_clock_analogue_window_cp10_g2_ParamLimits

0x580b,	// (0x0009ab0b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x580b,	// (0x0009ab0b) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa6bd,	// (0x0009f9bd) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d0,	// (0x000a4ad0) popup_clock_analogue_window_cp10_g_ParamLimits

0x5821,	// (0x0009ab21) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6033,	// (0x0009b333) cell_dialer2_keypad_pane_g2_ParamLimits

0x6033,	// (0x0009b333) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000a4bba) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000a4bba) cell_dialer2_keypad_pane_g

0x604f,	// (0x0009b34f) cell_dialer2_keypad_pane_t1

0x6b34,	// (0x0009be34) main_cset_text2_pane_ParamLimits

0x6b34,	// (0x0009be34) main_cset_text2_pane

0xcf58,	// (0x000a2258) area_vitu2_query_pane_g1_ParamLimits

0x7447,	// (0x0009c747) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000a4d6f) area_vitu2_query_pane_g_ParamLimits

0xcfdc,	// (0x000a22dc) area_vitu2_query_pane_t7_ParamLimits

0xcfdc,	// (0x000a22dc) area_vitu2_query_pane_t7

0x74a8,	// (0x0009c7a8) bg_button_pane_cp018_ParamLimits

0x74b6,	// (0x0009c7b6) bg_button_pane_cp021_ParamLimits

0x74c2,	// (0x0009c7c2) bg_button_pane_cp022_ParamLimits

0x74c2,	// (0x0009c7c2) bg_vkb2_func_pane_cp08_ParamLimits

0x74a8,	// (0x0009c7a8) bg_vkb2_func_pane_cp06_ParamLimits

0x74b6,	// (0x0009c7b6) bg_vkb2_func_pane_cp07_ParamLimits

0x74d3,	// (0x0009c7d3) input_focus_pane_cp09_ParamLimits

0x79a3,	// (0x0009cca3) cam6_autofocus_pane_ParamLimits

0x79a3,	// (0x0009cca3) cam6_autofocus_pane

0x79c5,	// (0x0009ccc5) cam6_image_uncrop_pane_ParamLimits

0x79c5,	// (0x0009ccc5) cam6_image_uncrop_pane

0x79f2,	// (0x0009ccf2) cam6_indi_pane_ParamLimits

0x79f2,	// (0x0009ccf2) cam6_indi_pane

0x7a0c,	// (0x0009cd0c) cam6_mode_pane_ParamLimits

0x7a0c,	// (0x0009cd0c) cam6_mode_pane

0x7a20,	// (0x0009cd20) cam6_timer_pane_ParamLimits

0x7a20,	// (0x0009cd20) cam6_timer_pane

0x7a2c,	// (0x0009cd2c) cam6_zoom_pane_ParamLimits

0x7a2c,	// (0x0009cd2c) cam6_zoom_pane

0x7a44,	// (0x0009cd44) cam6_mode_pane_g1_ParamLimits

0x7a44,	// (0x0009cd44) cam6_mode_pane_g1

0x7a50,	// (0x0009cd50) cam6_mode_pane_g2_ParamLimits

0x7a50,	// (0x0009cd50) cam6_mode_pane_g2

0x7a5c,	// (0x0009cd5c) cam6_mode_pane_g3_ParamLimits

0x7a5c,	// (0x0009cd5c) cam6_mode_pane_g3

0x7a68,	// (0x0009cd68) cam6_mode_pane_g4_ParamLimits

0x7a68,	// (0x0009cd68) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000a4e57) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000a4e57) cam6_mode_pane_g

0xd0d9,	// (0x000a23d9) bg_tb_trans_pane_cp08_ParamLimits

0xd0d9,	// (0x000a23d9) bg_tb_trans_pane_cp08

0xd20e,	// (0x000a250e) cam6_battery_pane_ParamLimits

0xd20e,	// (0x000a250e) cam6_battery_pane

0xd224,	// (0x000a2524) cam6_indi_pane_g1_ParamLimits

0xd224,	// (0x000a2524) cam6_indi_pane_g1

0xd236,	// (0x000a2536) cam6_indi_pane_g2_ParamLimits

0xd236,	// (0x000a2536) cam6_indi_pane_g2

0xd248,	// (0x000a2548) cam6_indi_pane_g3_ParamLimits

0xd248,	// (0x000a2548) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000a4e60) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000a4e60) cam6_indi_pane_g

0xd25a,	// (0x000a255a) cam6_indi_pane_t1_ParamLimits

0xd25a,	// (0x000a255a) cam6_indi_pane_t1

0x65f9,	// (0x0009b8f9) cam6_autofocus_pane_g1

0x65f1,	// (0x0009b8f1) cam6_autofocus_pane_g2

0x6609,	// (0x0009b909) cam6_autofocus_pane_g3

0x6601,	// (0x0009b901) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000a4e67) cam6_autofocus_pane_g

0xd280,	// (0x000a2580) cam6_timer_pane_g1

0xd288,	// (0x000a2588) cam6_timer_pane_t1

0xd296,	// (0x000a2596) cam6_zoom_cont_pane

0xd29e,	// (0x000a259e) cam6_zoom_pane_g1

0xd2a6,	// (0x000a25a6) cam6_zoom_pane_g2

0x7a74,	// (0x0009cd74) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000a4e70) cam6_zoom_pane_g

0xc090,	// (0x000a1390) cam6_battery_pane_g1

0xc090,	// (0x000a1390) cam6_battery_pane_g2

0x0001,

0xf6d8,	// (0x000a49d8) cam6_battery_pane_g

0xd2ae,	// (0x000a25ae) cam6_zoom_cont_pane_g1

0xd2b7,	// (0x000a25b7) cam6_zoom_cont_pane_g2

0xd2c0,	// (0x000a25c0) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000a4e77) cam6_zoom_cont_pane_g

0x7a91,	// (0x0009cd91) cam6_mode_pane_cp_ParamLimits

0x7a91,	// (0x0009cd91) cam6_mode_pane_cp

0x7aa5,	// (0x0009cda5) cam6_zoom_pane_cp_ParamLimits

0x7aa5,	// (0x0009cda5) cam6_zoom_pane_cp

0x7abd,	// (0x0009cdbd) vid6_image_uncrop_cif_pane_ParamLimits

0x7abd,	// (0x0009cdbd) vid6_image_uncrop_cif_pane

0x7ae9,	// (0x0009cde9) vid6_image_uncrop_nhd_pane_ParamLimits

0x7ae9,	// (0x0009cde9) vid6_image_uncrop_nhd_pane

0x7b06,	// (0x0009ce06) vid6_image_uncrop_vga_pane_ParamLimits

0x7b06,	// (0x0009ce06) vid6_image_uncrop_vga_pane

0x7b25,	// (0x0009ce25) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b25,	// (0x0009ce25) vid6_image_uncrop_wvga_pane

0x7b42,	// (0x0009ce42) vid6_indi_pane_ParamLimits

0x7b42,	// (0x0009ce42) vid6_indi_pane

0xd0d9,	// (0x000a23d9) bg_tb_trans_pane_cp09_ParamLimits

0xd0d9,	// (0x000a23d9) bg_tb_trans_pane_cp09

0xd2d8,	// (0x000a25d8) cam6_battery_pane_cp_ParamLimits

0xd2d8,	// (0x000a25d8) cam6_battery_pane_cp

0xd2e4,	// (0x000a25e4) vid6_indi_pane_g1_ParamLimits

0xd2e4,	// (0x000a25e4) vid6_indi_pane_g1

0xd2f6,	// (0x000a25f6) vid6_indi_pane_g2_ParamLimits

0xd2f6,	// (0x000a25f6) vid6_indi_pane_g2

0xd308,	// (0x000a2608) vid6_indi_pane_g3_ParamLimits

0xd308,	// (0x000a2608) vid6_indi_pane_g3

0xd31d,	// (0x000a261d) vid6_indi_pane_g4_ParamLimits

0xd31d,	// (0x000a261d) vid6_indi_pane_g4

0xd332,	// (0x000a2632) vid6_indi_pane_g5_ParamLimits

0xd332,	// (0x000a2632) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000a4e7e) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000a4e7e) vid6_indi_pane_g

0xd34c,	// (0x000a264c) vid6_indi_pane_t1_ParamLimits

0xd34c,	// (0x000a264c) vid6_indi_pane_t1

0xd362,	// (0x000a2662) vid6_indi_pane_t2_ParamLimits

0xd362,	// (0x000a2662) vid6_indi_pane_t2

0xd38a,	// (0x000a268a) vid6_indi_pane_t3_ParamLimits

0xd38a,	// (0x000a268a) vid6_indi_pane_t3

0xd3b2,	// (0x000a26b2) vid6_indi_pane_t4_ParamLimits

0xd3b2,	// (0x000a26b2) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000a4e89) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000a4e89) vid6_indi_pane_t

0xd3d6,	// (0x000a26d6) wait_bar_pane_cp08

0x7b67,	// (0x0009ce67) main_cset_text2_pane_t1_ParamLimits

0x7b67,	// (0x0009ce67) main_cset_text2_pane_t1

0x7a7c,	// (0x0009cd7c) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a7c,	// (0x0009cd7c) listscroll_gen_pane_cp06_t1

0x118e,	// (0x0009648e) main_cam6_set_pane

0x648b,	// (0x0009b78b) bg_tb_trans_pane_cp06_ParamLimits

0x64a1,	// (0x0009b7a1) cam4_indicators_pane_g1_ParamLimits

0x64b2,	// (0x0009b7b2) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000a4bf7) cam4_indicators_pane_g_ParamLimits

0x64d0,	// (0x0009b7d0) cam4_indicators_pane_t1_ParamLimits

0x43a7,	// (0x000996a7) bg_tb_trans_pane_cp07_ParamLimits

0x6583,	// (0x0009b883) vid4_indicators_pane_g1_ParamLimits

0x6597,	// (0x0009b897) vid4_indicators_pane_g2_ParamLimits

0x65ab,	// (0x0009b8ab) vid4_indicators_pane_g3_ParamLimits

0x65bc,	// (0x0009b8bc) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000a4c09) vid4_indicators_pane_g_ParamLimits

0x65da,	// (0x0009b8da) vid4_indicators_pane_t1_ParamLimits

0x7604,	// (0x0009c904) vid4_progress_pane_g1_ParamLimits

0x7614,	// (0x0009c914) vid4_progress_pane_g2_ParamLimits

0x7624,	// (0x0009c924) vid4_progress_pane_g3_ParamLimits

0x7636,	// (0x0009c936) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000a4dba) vid4_progress_pane_g_ParamLimits

0x764e,	// (0x0009c94e) vid4_progress_pane_t1_ParamLimits

0x7664,	// (0x0009c964) vid4_progress_pane_t2_ParamLimits

0x7679,	// (0x0009c979) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000a4dc5) vid4_progress_pane_t_ParamLimits

0x768e,	// (0x0009c98e) wait_bar_pane_cp07_ParamLimits

0x7b9a,	// (0x0009ce9a) main_cam6_set_pane_g2_ParamLimits

0x7b9a,	// (0x0009ce9a) main_cam6_set_pane_g2

0x7ba6,	// (0x0009cea6) main_cset6_listscroll_pane_ParamLimits

0x7ba6,	// (0x0009cea6) main_cset6_listscroll_pane

0x7bd1,	// (0x0009ced1) main_cset6_slider_pane_ParamLimits

0x7bd1,	// (0x0009ced1) main_cset6_slider_pane

0x7bdd,	// (0x0009cedd) main_cset6_text2_pane_ParamLimits

0x7bdd,	// (0x0009cedd) main_cset6_text2_pane

0xd3e5,	// (0x000a26e5) main_cset6_text_pane

0xd3ed,	// (0x000a26ed) main_cset_list_pane_copy1_ParamLimits

0xd3ed,	// (0x000a26ed) main_cset_list_pane_copy1

0xd3fd,	// (0x000a26fd) scroll_pane_cp028_copy1

0x7bf0,	// (0x0009cef0) cset_list_set_pane_copy1

0x7c03,	// (0x0009cf03) aid_position_infowindow_above_copy1

0x7c0b,	// (0x0009cf0b) aid_position_infowindow_below_copy1

0x7c13,	// (0x0009cf13) cset_list_set_pane_g1_copy1

0xccc1,	// (0x000a1fc1) cset_list_set_pane_g3_copy1_ParamLimits

0xccc1,	// (0x000a1fc1) cset_list_set_pane_g3_copy1

0xccd0,	// (0x000a1fd0) cset_list_set_pane_t1_copy1_ParamLimits

0xccd0,	// (0x000a1fd0) cset_list_set_pane_t1_copy1

0xe920,	// (0x000a3c20) list_highlight_pane_cp021_copy1_ParamLimits

0xe920,	// (0x000a3c20) list_highlight_pane_cp021_copy1

0xd406,	// (0x000a2706) cset6_slider_pane_ParamLimits

0xd406,	// (0x000a2706) cset6_slider_pane

0xd432,	// (0x000a2732) main_cset6_slider_pane_g1_ParamLimits

0xd432,	// (0x000a2732) main_cset6_slider_pane_g1

0x7c1b,	// (0x0009cf1b) main_cset6_slider_pane_g2_ParamLimits

0x7c1b,	// (0x0009cf1b) main_cset6_slider_pane_g2

0xd45a,	// (0x000a275a) main_cset6_slider_pane_g3_ParamLimits

0xd45a,	// (0x000a275a) main_cset6_slider_pane_g3

0x7c43,	// (0x0009cf43) main_cset6_slider_pane_g4_ParamLimits

0x7c43,	// (0x0009cf43) main_cset6_slider_pane_g4

0x7c4f,	// (0x0009cf4f) main_cset6_slider_pane_g5_ParamLimits

0x7c4f,	// (0x0009cf4f) main_cset6_slider_pane_g5

0xcbfd,	// (0x000a1efd) main_cset6_slider_pane_g7_ParamLimits

0xcbfd,	// (0x000a1efd) main_cset6_slider_pane_g7

0xcc09,	// (0x000a1f09) main_cset6_slider_pane_g8_ParamLimits

0xcc09,	// (0x000a1f09) main_cset6_slider_pane_g8

0x7c5d,	// (0x0009cf5d) main_cset6_slider_pane_g9_ParamLimits

0x7c5d,	// (0x0009cf5d) main_cset6_slider_pane_g9

0x7c69,	// (0x0009cf69) main_cset6_slider_pane_g10_ParamLimits

0x7c69,	// (0x0009cf69) main_cset6_slider_pane_g10

0x7c75,	// (0x0009cf75) main_cset6_slider_pane_g11_ParamLimits

0x7c75,	// (0x0009cf75) main_cset6_slider_pane_g11

0x7c81,	// (0x0009cf81) main_cset6_slider_pane_g12_ParamLimits

0x7c81,	// (0x0009cf81) main_cset6_slider_pane_g12

0x7c8d,	// (0x0009cf8d) main_cset6_slider_pane_g13_ParamLimits

0x7c8d,	// (0x0009cf8d) main_cset6_slider_pane_g13

0x7c99,	// (0x0009cf99) main_cset6_slider_pane_g14_ParamLimits

0x7c99,	// (0x0009cf99) main_cset6_slider_pane_g14

0x7ca5,	// (0x0009cfa5) main_cset6_slider_pane_g15_ParamLimits

0x7ca5,	// (0x0009cfa5) main_cset6_slider_pane_g15

0x7cbd,	// (0x0009cfbd) main_cset6_slider_pane_g16_ParamLimits

0x7cbd,	// (0x0009cfbd) main_cset6_slider_pane_g16

0x7ccb,	// (0x0009cfcb) main_cset6_slider_pane_g17_ParamLimits

0x7ccb,	// (0x0009cfcb) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000a4e92) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000a4e92) main_cset6_slider_pane_g

0xd466,	// (0x000a2766) main_cset6_slider_pane_t1_ParamLimits

0xd466,	// (0x000a2766) main_cset6_slider_pane_t1

0x7cf1,	// (0x0009cff1) main_cset6_slider_pane_t2_ParamLimits

0x7cf1,	// (0x0009cff1) main_cset6_slider_pane_t2

0x7d1c,	// (0x0009d01c) main_cset6_slider_pane_t3_ParamLimits

0x7d1c,	// (0x0009d01c) main_cset6_slider_pane_t3

0x7d47,	// (0x0009d047) main_cset6_slider_pane_t4_ParamLimits

0x7d47,	// (0x0009d047) main_cset6_slider_pane_t4

0x7d72,	// (0x0009d072) main_cset6_slider_pane_t5_ParamLimits

0x7d72,	// (0x0009d072) main_cset6_slider_pane_t5

0xd4a7,	// (0x000a27a7) main_cset6_slider_pane_t7_ParamLimits

0xd4a7,	// (0x000a27a7) main_cset6_slider_pane_t7

0x7d9f,	// (0x0009d09f) main_cset6_slider_pane_t8_ParamLimits

0x7d9f,	// (0x0009d09f) main_cset6_slider_pane_t8

0x7dc3,	// (0x0009d0c3) main_cset6_slider_pane_t9_ParamLimits

0x7dc3,	// (0x0009d0c3) main_cset6_slider_pane_t9

0x7de7,	// (0x0009d0e7) main_cset6_slider_pane_t10_ParamLimits

0x7de7,	// (0x0009d0e7) main_cset6_slider_pane_t10

0x7e0b,	// (0x0009d10b) main_cset6_slider_pane_t11_ParamLimits

0x7e0b,	// (0x0009d10b) main_cset6_slider_pane_t11

0xd4dd,	// (0x000a27dd) main_cset6_slider_pane_t14_ParamLimits

0xd4dd,	// (0x000a27dd) main_cset6_slider_pane_t14

0xd516,	// (0x000a2816) main_cset6_slider_pane_t15_ParamLimits

0xd516,	// (0x000a2816) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000a4eb7) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000a4eb7) main_cset6_slider_pane_t

0xcd27,	// (0x000a2027) cset_slider_pane_g1_copy1

0xcd30,	// (0x000a2030) cset_slider_pane_g2_copy1

0xcd39,	// (0x000a2039) cset_slider_pane_g3_copy1

0xe7d7,	// (0x000a3ad7) bg_popup_sub_pane_cp011_copy1

0xd54f,	// (0x000a284f) main_cset_text_pane_g1_copy1

0xcd80,	// (0x000a2080) main_cset_text_pane_t1_copy1

0xcd8e,	// (0x000a208e) main_cset_text_pane_t2_copy1

0xcd9c,	// (0x000a209c) main_cset_text_pane_t3_copy1

0xcdaa,	// (0x000a20aa) main_cset_text_pane_t4_copy1

0xcdb8,	// (0x000a20b8) main_cset_text_pane_t5_copy1

0xd557,	// (0x000a2857) main_cset_text_pane_t6_copy1

0xd565,	// (0x000a2865) main_cset_text_pane_t7_copy1

0x7f07,	// (0x0009d207) main_cset_text2_pane_t1_copy1

0x43a7,	// (0x000996a7) main_ncimui_pane

0x4406,	// (0x00099706) popup_query_ncimui_window_ParamLimits

0x4406,	// (0x00099706) popup_query_ncimui_window

0xc358,	// (0x000a1658) field_cale_ev2_pane_g4_ParamLimits

0xc358,	// (0x000a1658) field_cale_ev2_pane_g4

0x5d13,	// (0x0009b013) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5d13,	// (0x0009b013) cell_video_dialer_keypad_pane_g2

0x0001,

0xf891,	// (0x000a4b91) cell_video_dialer_keypad_pane_g_ParamLimits

0xf891,	// (0x000a4b91) cell_video_dialer_keypad_pane_g

0x5d2b,	// (0x0009b02b) cell_video_dialer_keypad_pane_t1

0xe7d7,	// (0x000a3ad7) bg_popup_window_pane_cp012

0xa50c,	// (0x0009f80c) heading_pane_cp06

0xd591,	// (0x000a2891) ncim_query_content_pane

0xe7d7,	// (0x000a3ad7) bg_popup_heading_pane_cp01

0xd599,	// (0x000a2899) ncim_heading_pane_t1

0xd5a7,	// (0x000a28a7) ncim_indicator_popup_pane

0xd5b9,	// (0x000a28b9) ncim_query_button_pane

0xd5cd,	// (0x000a28cd) ncim_query_content_pane_t1

0xd5df,	// (0x000a28df) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x000a4efb) ncim_query_content_pane_t

0xd619,	// (0x000a2919) ncim_query_list_pane

0xd62b,	// (0x000a292b) ncim_query_popup_pane

0xd5a7,	// (0x000a28a7) ncim_indicator_popup_pane_ParamLimits

0x805a,	// (0x0009d35a) ncim_query_content_pane_g1_ParamLimits

0x805a,	// (0x0009d35a) ncim_query_content_pane_g1

0xd5cd,	// (0x000a28cd) ncim_query_content_pane_t1_ParamLimits

0xd5df,	// (0x000a28df) ncim_query_content_pane_t2_ParamLimits

0x8066,	// (0x0009d366) ncim_query_content_pane_t3_ParamLimits

0x8066,	// (0x0009d366) ncim_query_content_pane_t3

0x8083,	// (0x0009d383) ncim_query_content_pane_t4_ParamLimits

0x8083,	// (0x0009d383) ncim_query_content_pane_t4

0x80a0,	// (0x0009d3a0) ncim_query_content_pane_t5_ParamLimits

0x80a0,	// (0x0009d3a0) ncim_query_content_pane_t5

0xd5f1,	// (0x000a28f1) ncim_query_content_pane_t6_ParamLimits

0xd5f1,	// (0x000a28f1) ncim_query_content_pane_t6

0xfbfb,	// (0x000a4efb) ncim_query_content_pane_t_ParamLimits

0xd619,	// (0x000a2919) ncim_query_list_pane_ParamLimits

0xd62b,	// (0x000a292b) ncim_query_popup_pane_ParamLimits

0xd63f,	// (0x000a293f) wait_bar_pane_cp04

0xe7d7,	// (0x000a3ad7) input_focus_pane_cp011

0xd647,	// (0x000a2947) ncim_query_popup_pane_t1

0xd655,	// (0x000a2955) ncim_list_query_list_pane_ParamLimits

0xd655,	// (0x000a2955) ncim_list_query_list_pane

0xe7d7,	// (0x000a3ad7) bg_button_pane_cp027

0xd662,	// (0x000a2962) ncim_query_button_pane_g1

0xe7d7,	// (0x000a3ad7) list_highlight_pane_cp012

0xd66c,	// (0x000a296c) ncim_list_query_list_pane_g1

0xd674,	// (0x000a2974) ncim_list_query_list_pane_t1

0x64c1,	// (0x0009b7c1) cam4_indicators_pane_g3_ParamLimits

0x64c1,	// (0x0009b7c1) cam4_indicators_pane_g3

0x65c8,	// (0x0009b8c8) vid4_indicators_pane_g5_ParamLimits

0x65c8,	// (0x0009b8c8) vid4_indicators_pane_g5

0x7642,	// (0x0009c942) vid4_progress_pane_g5_ParamLimits

0x7642,	// (0x0009c942) vid4_progress_pane_g5

0x7f46,	// (0x0009d246) main_ncimui_pane_g1

0x7fae,	// (0x0009d2ae) ncimui_group_query_pane_ParamLimits

0x7fae,	// (0x0009d2ae) ncimui_group_query_pane

0x7ff6,	// (0x0009d2f6) ncimui_list_pane_ParamLimits

0x7ff6,	// (0x0009d2f6) ncimui_list_pane

0x801d,	// (0x0009d31d) ncimui_text_pane_ParamLimits

0x801d,	// (0x0009d31d) ncimui_text_pane

0x80bd,	// (0x0009d3bd) ncimui_text_pane_t1_ParamLimits

0x80bd,	// (0x0009d3bd) ncimui_text_pane_t1

0xd682,	// (0x000a2982) ncimui_list_single_graphic_pane_ParamLimits

0xd682,	// (0x000a2982) ncimui_list_single_graphic_pane

0x80dc,	// (0x0009d3dc) ncimui_query_pane_ParamLimits

0x80dc,	// (0x0009d3dc) ncimui_query_pane

0xe7d7,	// (0x000a3ad7) list_highlight_pane_cp013

0xd692,	// (0x000a2992) ncim_list_query_list_pane_t1_copy1

0xd66c,	// (0x000a296c) ncim_list_single_graphic_pane_g1

0x80ef,	// (0x0009d3ef) ncim_query_button_pane_cp01

0x80fb,	// (0x0009d3fb) ncim_query_entry_pane_ParamLimits

0x80fb,	// (0x0009d3fb) ncim_query_entry_pane

0x810e,	// (0x0009d40e) ncimui_query_pane_g1

0x811a,	// (0x0009d41a) ncimui_query_pane_t1_ParamLimits

0x811a,	// (0x0009d41a) ncimui_query_pane_t1

0xe920,	// (0x000a3c20) input_focus_pane_cp012

0xd6a0,	// (0x000a29a0) ncim_query_entry_pane_t1

0xef93,	// (0x000a4293) main_im_pane_ParamLimits

0x43a7,	// (0x000996a7) main_mobtv_pane_ParamLimits

0x43a7,	// (0x000996a7) main_mobtv_pane

0x7cd9,	// (0x0009cfd9) main_cset6_slider_pane_g18_ParamLimits

0x7cd9,	// (0x0009cfd9) main_cset6_slider_pane_g18

0x7ce5,	// (0x0009cfe5) main_cset6_slider_pane_g19_ParamLimits

0x7ce5,	// (0x0009cfe5) main_cset6_slider_pane_g19

0xca7f,	// (0x000a1d7f) bg_main_mobtv_pane_ParamLimits

0xca7f,	// (0x000a1d7f) bg_main_mobtv_pane

0x8133,	// (0x0009d433) main_mobtv_info_pane

0x813e,	// (0x0009d43e) main_mobtv_loading_pane_ParamLimits

0x813e,	// (0x0009d43e) main_mobtv_loading_pane

0xd6b2,	// (0x000a29b2) main_mobtv_pg_channel_list_pane

0xd6bc,	// (0x000a29bc) main_mobtv_pg_hdr_pane

0x814b,	// (0x0009d44b) main_mobtv_programe_curr_pane_ParamLimits

0x814b,	// (0x0009d44b) main_mobtv_programe_curr_pane

0x8158,	// (0x0009d458) main_mobtv_programe_next_pane_ParamLimits

0x8158,	// (0x0009d458) main_mobtv_programe_next_pane

0xd6c5,	// (0x000a29c5) popup_mobtv_noti_window

0xc090,	// (0x000a1390) main_tv_pg_hdr_pane_g1

0xd6cd,	// (0x000a29cd) main_tv_pg_hdr_pane_g2

0xd6d5,	// (0x000a29d5) main_tv_pg_hdr_pane_g3

0xd6dd,	// (0x000a29dd) main_tv_pg_hdr_pane_g4

0xd6e5,	// (0x000a29e5) main_tv_pg_hdr_pane_g5

0xd6ef,	// (0x000a29ef) main_tv_pg_hdr_pane_g6

0xd6f9,	// (0x000a29f9) main_tv_pg_hdr_pane_g7

0xd703,	// (0x000a2a03) main_tv_pg_hdr_pane_g8

0xd70d,	// (0x000a2a0d) main_tv_pg_hdr_pane_g9

0xd717,	// (0x000a2a17) main_tv_pg_hdr_pane_g10

0xd721,	// (0x000a2a21) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x000a4f08) main_tv_pg_hdr_pane_g

0xd72b,	// (0x000a2a2b) main_tv_pg_hdr_pane_t1

0xd739,	// (0x000a2a39) main_tv_pg_hdr_pane_t2

0xd747,	// (0x000a2a47) main_tv_pg_hdr_pane_t3

0xd757,	// (0x000a2a57) main_tv_pg_hdr_pane_t4

0xd767,	// (0x000a2a67) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x000a4f1f) main_tv_pg_hdr_pane_t

0xd777,	// (0x000a2a77) single_mobtv_pg_channel_pane_ParamLimits

0xd777,	// (0x000a2a77) single_mobtv_pg_channel_pane

0xd789,	// (0x000a2a89) single_mobtv_pg_channel_table_pane

0xd792,	// (0x000a2a92) single_mobtv_pg_channel_thumb_pane

0xd79b,	// (0x000a2a9b) single_tv_pg_channel_pane_g1

0xd7a4,	// (0x000a2aa4) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x000a4f2a) single_tv_pg_channel_pane_g

0xc2f3,	// (0x000a15f3) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc2f3,	// (0x000a15f3) bg_single_mobtv_pg_channel_thumb_pane

0xd7ad,	// (0x000a2aad) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd7ad,	// (0x000a2aad) single_mobtv_pg_channel_thumb_pane_g1

0xd7bb,	// (0x000a2abb) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd7bb,	// (0x000a2abb) single_mobtv_pg_channel_thumb_pane_g2

0xd7c7,	// (0x000a2ac7) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd7c7,	// (0x000a2ac7) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x000a4f2f) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x000a4f2f) single_mobtv_pg_channel_thumb_pane_g

0xd7d3,	// (0x000a2ad3) single_mobtv_pg_channel_thumb_pane_t1

0xd7e1,	// (0x000a2ae1) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x000a4f36) single_mobtv_pg_channel_thumb_pane_t

0xc090,	// (0x000a1390) bg_single_mobtv_pg_channel_table_pane_g1

0xc090,	// (0x000a1390) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d8,	// (0x000a49d8) bg_single_mobtv_pg_channel_table_pane_g

0xd7ef,	// (0x000a2aef) single_mobtv_pg_channel_table_pane_t1

0xd7fd,	// (0x000a2afd) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x000a4f3b) single_mobtv_pg_channel_table_pane_t

0x816d,	// (0x0009d46d) main_mobtv_info_pane_g1_ParamLimits

0x816d,	// (0x0009d46d) main_mobtv_info_pane_g1

0x8189,	// (0x0009d489) main_mobtv_info_pane_t1_ParamLimits

0x8189,	// (0x0009d489) main_mobtv_info_pane_t1

0x8201,	// (0x0009d501) main_mobtv_info_pane_t2_ParamLimits

0x8201,	// (0x0009d501) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000a4f45) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000a4f45) main_mobtv_info_pane_t

0x8290,	// (0x0009d590) wait_bar_pane_cp05

0x82a2,	// (0x0009d5a2) main_mobtv_loading_pane_g1_ParamLimits

0x82a2,	// (0x0009d5a2) main_mobtv_loading_pane_g1

0x82b0,	// (0x0009d5b0) main_mobtv_loading_pane_g2_ParamLimits

0x82b0,	// (0x0009d5b0) main_mobtv_loading_pane_g2

0x82bc,	// (0x0009d5bc) main_mobtv_loading_pane_g3_ParamLimits

0x82bc,	// (0x0009d5bc) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000a4f4c) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000a4f4c) main_mobtv_loading_pane_g

0xd80b,	// (0x000a2b0b) main_mobtv_loading_pane_t1_ParamLimits

0xd80b,	// (0x000a2b0b) main_mobtv_loading_pane_t1

0xd823,	// (0x000a2b23) main_mobtv_loading_pane_t2_ParamLimits

0xd823,	// (0x000a2b23) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000a4f53) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000a4f53) main_mobtv_loading_pane_t

0x82ca,	// (0x0009d5ca) wait_bar_pane_cp06_ParamLimits

0x82ca,	// (0x0009d5ca) wait_bar_pane_cp06

0xd847,	// (0x000a2b47) main_mobtv_programe_curr_pane_t1

0xd855,	// (0x000a2b55) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000a4f58) main_mobtv_programe_curr_pane_t

0xd863,	// (0x000a2b63) main_mobtv_programe_next_pane_t1

0xd871,	// (0x000a2b71) main_mobtv_programe_next_pane_t2

0xd87f,	// (0x000a2b7f) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000a4f5d) main_mobtv_programe_next_pane_t

0xe7d7,	// (0x000a3ad7) bg_popup_mobtv_noti_window_pane

0xd88d,	// (0x000a2b8d) popup_mobtv_noti_window_g1

0xd895,	// (0x000a2b95) popup_mobtv_noti_window_t1

0xd8a3,	// (0x000a2ba3) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000a4f64) popup_mobtv_noti_window_t

0xc090,	// (0x000a1390) bg_popup_mobtv_noti_window_pane_g1

0x118e,	// (0x0009648e) sc_clock_pane

0x118e,	// (0x0009648e) main_fs_bigclock_pane

0x7856,	// (0x0009cb56) blid2_tripm_pane_t4_ParamLimits

0x7856,	// (0x0009cb56) blid2_tripm_pane_t4

0x82d6,	// (0x0009d5d6) sc_clock_pane_g1_ParamLimits

0x82d6,	// (0x0009d5d6) sc_clock_pane_g1

0x82e4,	// (0x0009d5e4) sc_clock_pane_t1_ParamLimits

0x82e4,	// (0x0009d5e4) sc_clock_pane_t1

0x82f7,	// (0x0009d5f7) sc_clock_pane_t2_ParamLimits

0x82f7,	// (0x0009d5f7) sc_clock_pane_t2

0x8309,	// (0x0009d609) sc_clock_pane_t3_ParamLimits

0x8309,	// (0x0009d609) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000a4f69) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000a4f69) sc_clock_pane_t

0x9226,	// (0x0009e526) main_fs_bigclock_indicator_pane_ParamLimits

0x9226,	// (0x0009e526) main_fs_bigclock_indicator_pane

0x838c,	// (0x0009d68c) main_fs_bigclock_pane_g1_ParamLimits

0x838c,	// (0x0009d68c) main_fs_bigclock_pane_g1

0x9232,	// (0x0009e532) main_fs_bigclock_pane_t1_ParamLimits

0x9232,	// (0x0009e532) main_fs_bigclock_pane_t1

0x9244,	// (0x0009e544) main_fs_bigclock_pane_t2_ParamLimits

0x9244,	// (0x0009e544) main_fs_bigclock_pane_t2

0x9258,	// (0x0009e558) main_fs_bigclock_pane_t3_ParamLimits

0x9258,	// (0x0009e558) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000a5173) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000a5173) main_fs_bigclock_pane_t

0xe40f,	// (0x000a370f) main_fs_bigclock_indicator_pane_g1

0xd5c1,	// (0x000a28c1) ncim_query_content_pane_g2_ParamLimits

0xd5c1,	// (0x000a28c1) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x000a4ef6) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x000a4ef6) ncim_query_content_pane_g

0x831d,	// (0x0009d61d) sc_clock_pane_t4_ParamLimits

0x831d,	// (0x0009d61d) sc_clock_pane_t4

0x43a7,	// (0x000996a7) main_radioblah_pane

0x6356,	// (0x0009b656) cell_call4_button_pane_t1_copy1_ParamLimits

0x6356,	// (0x0009b656) cell_call4_button_pane_t1_copy1

0x7f60,	// (0x0009d260) main_ncimui_pane_t1_ParamLimits

0x7f60,	// (0x0009d260) main_ncimui_pane_t1

0x7f7a,	// (0x0009d27a) main_ncimui_pane_t2_ParamLimits

0x7f7a,	// (0x0009d27a) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x000a4eef) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x000a4eef) main_ncimui_pane_t

0xd9e8,	// (0x000a2ce8) main_radioblah_anim_pane_ParamLimits

0xd9e8,	// (0x000a2ce8) main_radioblah_anim_pane

0xd9f9,	// (0x000a2cf9) main_radioblah_info_pane_ParamLimits

0xd9f9,	// (0x000a2cf9) main_radioblah_info_pane

0xda0d,	// (0x000a2d0d) main_radioblah_pane_t1_ParamLimits

0xda0d,	// (0x000a2d0d) main_radioblah_pane_t1

0xda29,	// (0x000a2d29) main_radioblah_pane_t2_ParamLimits

0xda29,	// (0x000a2d29) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000a4f8a) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000a4f8a) main_radioblah_pane_t

0x83e2,	// (0x0009d6e2) main_radioblah_rocker_ctrl_pane_ParamLimits

0x83e2,	// (0x0009d6e2) main_radioblah_rocker_ctrl_pane

0xda71,	// (0x000a2d71) main_radioblah_info_pane_t1_ParamLimits

0xda71,	// (0x000a2d71) main_radioblah_info_pane_t1

0x8427,	// (0x0009d727) main_radioblah_info_pane_t2_ParamLimits

0x8427,	// (0x0009d727) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000a4f93) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000a4f93) main_radioblah_info_pane_t

0xc090,	// (0x000a1390) main_radioblah_rocker_ctrl_pane_g1

0x84d7,	// (0x0009d7d7) main_radioblah_rocker_ctrl_pane_g2

0x84df,	// (0x0009d7df) main_radioblah_rocker_ctrl_pane_g3

0x84e7,	// (0x0009d7e7) main_radioblah_rocker_ctrl_pane_g4

0x84ef,	// (0x0009d7ef) main_radioblah_rocker_ctrl_pane_g5

0x84f7,	// (0x0009d7f7) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000a4f9c) main_radioblah_rocker_ctrl_pane_g

0x7f07,	// (0x0009d207) main_cset_text2_pane_t1_copy1_ParamLimits

0x63e1,	// (0x0009b6e1) cam4_image_uncrop_qvga_pane

0x6536,	// (0x0009b836) vid4_image_uncrop_qcif_pane

0x79e4,	// (0x0009cce4) cam6_image_uncrop_qvga_pane_ParamLimits

0x79e4,	// (0x0009cce4) cam6_image_uncrop_qvga_pane

0xd2c8,	// (0x000a25c8) vid6_image_uncrop_qcif_pane_ParamLimits

0xd2c8,	// (0x000a25c8) vid6_image_uncrop_qcif_pane

0xe7d7,	// (0x000a3ad7) bg_popup_preview_window_pane_cp03

0xd573,	// (0x000a2873) list_cset_text2_pane

0xd57b,	// (0x000a287b) main_cset6_text2_pane_g1

0xd583,	// (0x000a2883) main_cset6_text2_pane_t1

0x84ff,	// (0x0009d7ff) list_cset_text2_pane_t1_ParamLimits

0x84ff,	// (0x0009d7ff) list_cset_text2_pane_t1

0x43a7,	// (0x000996a7) main_radioblah_pane_ParamLimits

0x827c,	// (0x0009d57c) main_mobtv_info_pane_t3_ParamLimits

0x827c,	// (0x0009d57c) main_mobtv_info_pane_t3

0x83d0,	// (0x0009d6d0) main_radioblah_pane_g1

0x83fb,	// (0x0009d6fb) main_radioblah_info_pane_g1

0x847c,	// (0x0009d77c) main_radioblah_info_pane_t3_ParamLimits

0x847c,	// (0x0009d77c) main_radioblah_info_pane_t3

0x306a,	// (0x0009836a) highlight_cell_cale_month_pane_ParamLimits

0x306a,	// (0x0009836a) highlight_cell_cale_month_pane

0x118e,	// (0x0009648e) main_phob_fisheye_pane

0xc427,	// (0x000a1727) scroll_pane_cp0031_ParamLimits

0xc427,	// (0x000a1727) scroll_pane_cp0031

0xd3d6,	// (0x000a26d6) wait_bar_pane_cp08_ParamLimits

0x7bf0,	// (0x0009cef0) cset_list_set_pane_copy1_ParamLimits

0xdaab,	// (0x000a2dab) highlight_cell_cale_month_pane_g1

0x851c,	// (0x0009d81c) highlight_cell_cale_month_pane_t1

0xd048,	// (0x000a2348) list_gen_pane_cp01

0xcbe8,	// (0x000a1ee8) scroll_pane_01

0x852a,	// (0x0009d82a) list_single_double_fisheye_pane

0x8533,	// (0x0009d833) list_double_fisheye_pane_g1_ParamLimits

0x8533,	// (0x0009d833) list_double_fisheye_pane_g1

0x853f,	// (0x0009d83f) list_double_fisheye_pane_g2_ParamLimits

0x853f,	// (0x0009d83f) list_double_fisheye_pane_g2

0x8553,	// (0x0009d853) list_double_fisheye_pane_g3_ParamLimits

0x8553,	// (0x0009d853) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000a4fa9) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000a4fa9) list_double_fisheye_pane_g

0x857c,	// (0x0009d87c) list_double_fisheye_pane_t1_ParamLimits

0x857c,	// (0x0009d87c) list_double_fisheye_pane_t1

0x8597,	// (0x0009d897) list_double_fisheye_pane_t2_ParamLimits

0x8597,	// (0x0009d897) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000a4fb4) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000a4fb4) list_double_fisheye_pane_t

0x118e,	// (0x0009648e) main_call5_pane

0x8343,	// (0x0009d643) sc_swipe_pane_ParamLimits

0x8343,	// (0x0009d643) sc_swipe_pane

0x85c5,	// (0x0009d8c5) call5_image_pane_ParamLimits

0x85c5,	// (0x0009d8c5) call5_image_pane

0x85d5,	// (0x0009d8d5) call5_swipe_1_pane_ParamLimits

0x85d5,	// (0x0009d8d5) call5_swipe_1_pane

0x85e1,	// (0x0009d8e1) call5_swipe_2_pane_ParamLimits

0x85e1,	// (0x0009d8e1) call5_swipe_2_pane

0x85fb,	// (0x0009d8fb) popup_call5_audio_first_window_ParamLimits

0x85fb,	// (0x0009d8fb) popup_call5_audio_first_window

0xc2f3,	// (0x000a15f3) call5_swipe_1_pane_g1_ParamLimits

0xc2f3,	// (0x000a15f3) call5_swipe_1_pane_g1

0xdab3,	// (0x000a2db3) call5_swipe_1_pane_g2_ParamLimits

0xdab3,	// (0x000a2db3) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000a4fb9) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000a4fb9) call5_swipe_1_pane_g

0xdabf,	// (0x000a2dbf) call5_swipe_1_pane_t1_ParamLimits

0xdabf,	// (0x000a2dbf) call5_swipe_1_pane_t1

0xc2f3,	// (0x000a15f3) call5_swipe_2_pane_g1_ParamLimits

0xc2f3,	// (0x000a15f3) call5_swipe_2_pane_g1

0xdad4,	// (0x000a2dd4) call5_swipe_2_pane_g2_ParamLimits

0xdad4,	// (0x000a2dd4) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000a4fbe) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000a4fbe) call5_swipe_2_pane_g

0xdae0,	// (0x000a2de0) call5_swipe_2_pane_t1_ParamLimits

0xdae0,	// (0x000a2de0) call5_swipe_2_pane_t1

0xdaf5,	// (0x000a2df5) sc_swipe_pane_g1_ParamLimits

0xdaf5,	// (0x000a2df5) sc_swipe_pane_g1

0xdb02,	// (0x000a2e02) sc_swipe_pane_g2_ParamLimits

0xdb02,	// (0x000a2e02) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000a4fc3) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000a4fc3) sc_swipe_pane_g

0xdb0e,	// (0x000a2e0e) sc_swipe_pane_t1_ParamLimits

0xdb0e,	// (0x000a2e0e) sc_swipe_pane_t1

0x118e,	// (0x0009648e) main_cmail_launcher_pane

0x8609,	// (0x0009d909) aid_size_cell_cmail_l_ParamLimits

0x8609,	// (0x0009d909) aid_size_cell_cmail_l

0x8617,	// (0x0009d917) grid_cmail_l_pane_ParamLimits

0x8617,	// (0x0009d917) grid_cmail_l_pane

0x8627,	// (0x0009d927) cell_cmail_l_pane_ParamLimits

0x8627,	// (0x0009d927) cell_cmail_l_pane

0xdb23,	// (0x000a2e23) cell_cmail_l_pane_g1_ParamLimits

0xdb23,	// (0x000a2e23) cell_cmail_l_pane_g1

0xdb2f,	// (0x000a2e2f) cell_cmail_l_pane_t1_ParamLimits

0xdb2f,	// (0x000a2e2f) cell_cmail_l_pane_t1

0xdb45,	// (0x000a2e45) cell_cmail_l_pane_t2_ParamLimits

0xdb45,	// (0x000a2e45) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000a4fc8) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000a4fc8) cell_cmail_l_pane_t

0xe920,	// (0x000a3c20) grid_highlight_pane_cp018_ParamLimits

0xe920,	// (0x000a3c20) grid_highlight_pane_cp018

0x0fe4,	// (0x000962e4) main2_pane_ParamLimits

0x0fe4,	// (0x000962e4) main2_pane

0xf02c,	// (0x000a432c) popup_sp_fs_action_menu_bg_pane_g1

0xf034,	// (0x000a4334) popup_sp_fs_action_menu_bg_pane_g2

0xf03c,	// (0x000a433c) popup_sp_fs_action_menu_bg_pane_g3

0xf044,	// (0x000a4344) popup_sp_fs_action_menu_bg_pane_g4

0xf04c,	// (0x000a434c) popup_sp_fs_action_menu_bg_pane_g5

0xf054,	// (0x000a4354) popup_sp_fs_action_menu_bg_pane_g6

0x9d1c,	// (0x0009f01c) popup_sp_fs_action_menu_bg_pane_g7

0x9d24,	// (0x0009f024) popup_sp_fs_action_menu_bg_pane_g8

0x9d2c,	// (0x0009f02c) popup_sp_fs_action_menu_bg_pane_g9

0x9d34,	// (0x0009f034) popup_sp_fs_action_menu_bg_pane_g10

0x9d34,	// (0x0009f034) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x000a4486) popup_sp_fs_action_menu_bg_pane_g

0x1e9c,	// (0x0009719c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1e9c,	// (0x0009719c) list_medium_line_x2_t3_g3_g1

0x1ea8,	// (0x000971a8) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1ea8,	// (0x000971a8) list_medium_line_x2_t3_g3_g2

0x1eb4,	// (0x000971b4) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1eb4,	// (0x000971b4) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x000a4534) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x000a4534) list_medium_line_x2_t3_g3_g

0x1ec0,	// (0x000971c0) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1ec0,	// (0x000971c0) list_medium_line_x2_t3_g3_t1

0x1ed5,	// (0x000971d5) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1ed5,	// (0x000971d5) list_medium_line_x2_t3_g3_t2

0x1ee7,	// (0x000971e7) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1ee7,	// (0x000971e7) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x000a453b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x000a453b) list_medium_line_x2_t3_g3_t

0x1e9c,	// (0x0009719c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1e9c,	// (0x0009719c) list_medium_line_x2_t3_g2_g1

0x1eb4,	// (0x000971b4) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1eb4,	// (0x000971b4) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x000a4542) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x000a4542) list_medium_line_x2_t3_g2_g

0x1efc,	// (0x000971fc) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1efc,	// (0x000971fc) list_medium_line_x2_t3_g2_t1

0x1f12,	// (0x00097212) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1f12,	// (0x00097212) list_medium_line_x2_t3_g2_t2

0x1ee7,	// (0x000971e7) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1ee7,	// (0x000971e7) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x000a4547) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x000a4547) list_medium_line_x2_t3_g2_t

0x1e9c,	// (0x0009719c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1e9c,	// (0x0009719c) list_medium_line_x2_t4_g4_g1

0x1f24,	// (0x00097224) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1f24,	// (0x00097224) list_medium_line_x2_t4_g4_g2

0x1ea8,	// (0x000971a8) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1ea8,	// (0x000971a8) list_medium_line_x2_t4_g4_g3

0x1f30,	// (0x00097230) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1f30,	// (0x00097230) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x000a454e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x000a454e) list_medium_line_x2_t4_g4_g

0x1f3c,	// (0x0009723c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1f3c,	// (0x0009723c) list_medium_line_x2_t4_g4_t1

0x1f56,	// (0x00097256) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1f56,	// (0x00097256) list_medium_line_x2_t4_g4_t2

0x1f6c,	// (0x0009726c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1f6c,	// (0x0009726c) list_medium_line_x2_t4_g4_t3

0x1f81,	// (0x00097281) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1f81,	// (0x00097281) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x000a4557) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x000a4557) list_medium_line_x2_t4_g4_t

0x1e9c,	// (0x0009719c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1e9c,	// (0x0009719c) list_medium_line_x2_t2_g4_g1

0x1f24,	// (0x00097224) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1f24,	// (0x00097224) list_medium_line_x2_t2_g4_g2

0x1ea8,	// (0x000971a8) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1ea8,	// (0x000971a8) list_medium_line_x2_t2_g4_g3

0x1eb4,	// (0x000971b4) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1eb4,	// (0x000971b4) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x000a45be) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x000a45be) list_medium_line_x2_t2_g4_g

0x3090,	// (0x00098390) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3090,	// (0x00098390) list_medium_line_x2_t2_g4_t1

0x1ee7,	// (0x000971e7) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1ee7,	// (0x000971e7) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x000a45c7) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x000a45c7) list_medium_line_x2_t2_g4_t

0x1e9c,	// (0x0009719c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1e9c,	// (0x0009719c) list_medium_line_x2_t2_g3_g1

0x1ea8,	// (0x000971a8) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1ea8,	// (0x000971a8) list_medium_line_x2_t2_g3_g2

0x1eb4,	// (0x000971b4) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1eb4,	// (0x000971b4) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x000a4534) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x000a4534) list_medium_line_x2_t2_g3_g

0x30a5,	// (0x000983a5) list_medium_line_x2_t2_g3_t1_ParamLimits

0x30a5,	// (0x000983a5) list_medium_line_x2_t2_g3_t1

0x1ee7,	// (0x000971e7) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1ee7,	// (0x000971e7) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x000a45cc) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x000a45cc) list_medium_line_x2_t2_g3_t

0x326c,	// (0x0009856c) main_sp_fs_list_pane_ParamLimits

0x326c,	// (0x0009856c) main_sp_fs_list_pane

0x3278,	// (0x00098578) sp_fs_scroll_pane_ParamLimits

0x3278,	// (0x00098578) sp_fs_scroll_pane

0x3284,	// (0x00098584) list_medium_line_x2_t3_t1

0x3294,	// (0x00098594) list_medium_line_x2_t3_t2

0x32a2,	// (0x000985a2) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x000a4617) list_medium_line_x2_t3_t

0x32b0,	// (0x000985b0) list_medium_line_x3_t4_t1

0x32c0,	// (0x000985c0) list_medium_line_x3_t4_t2

0x32ce,	// (0x000985ce) list_medium_line_x3_t4_t3

0x32a2,	// (0x000985a2) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x000a461e) list_medium_line_x3_t4_t

0x32dc,	// (0x000985dc) list_medium_line_x4_t5_t1

0x32ec,	// (0x000985ec) list_medium_line_x4_t5_t2

0x32ce,	// (0x000985ce) list_medium_line_x4_t5_t3

0x32fa,	// (0x000985fa) list_medium_line_x4_t5_t4

0x32a2,	// (0x000985a2) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x000a4627) list_medium_line_x4_t5_t

0x1e9c,	// (0x0009719c) list_medium_line_t4_g4_g1_ParamLimits

0x1e9c,	// (0x0009719c) list_medium_line_t4_g4_g1

0x3308,	// (0x00098608) list_medium_line_t4_g4_g2_ParamLimits

0x3308,	// (0x00098608) list_medium_line_t4_g4_g2

0x3314,	// (0x00098614) list_medium_line_t4_g4_g3_ParamLimits

0x3314,	// (0x00098614) list_medium_line_t4_g4_g3

0x1eb4,	// (0x000971b4) list_medium_line_t4_g4_g4_ParamLimits

0x1eb4,	// (0x000971b4) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x000a4632) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x000a4632) list_medium_line_t4_g4_g

0x3320,	// (0x00098620) list_medium_line_t4_g4_t1_ParamLimits

0x3320,	// (0x00098620) list_medium_line_t4_g4_t1

0x3335,	// (0x00098635) list_medium_line_t4_g4_t2_ParamLimits

0x3335,	// (0x00098635) list_medium_line_t4_g4_t2

0x334a,	// (0x0009864a) list_medium_line_t4_g4_t3_ParamLimits

0x334a,	// (0x0009864a) list_medium_line_t4_g4_t3

0x1ee7,	// (0x000971e7) list_medium_line_t4_g4_t4_ParamLimits

0x1ee7,	// (0x000971e7) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x000a463b) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x000a463b) list_medium_line_t4_g4_t

0x3460,	// (0x00098760) chi_dic_find_pane_g1

0x43c3,	// (0x000996c3) main_tport_pane

0x6ef3,	// (0x0009c1f3) list_medium_line_plain_t1

0x6fd3,	// (0x0009c2d3) list_medium_line_t2_g2_g1_ParamLimits

0x6fd3,	// (0x0009c2d3) list_medium_line_t2_g2_g1

0x6fdf,	// (0x0009c2df) list_medium_line_t2_g2_g2_ParamLimits

0x6fdf,	// (0x0009c2df) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000a4d00) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000a4d00) list_medium_line_t2_g2_g

0x6feb,	// (0x0009c2eb) list_medium_line_t2_g2_t1_ParamLimits

0x6feb,	// (0x0009c2eb) list_medium_line_t2_g2_t1

0x7005,	// (0x0009c305) list_medium_line_t2_g2_t2_ParamLimits

0x7005,	// (0x0009c305) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000a4d05) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000a4d05) list_medium_line_t2_g2_t

0xd051,	// (0x000a2351) aid_sp_fs_list_icon_a_sm

0xf071,	// (0x000a4371) aid_sp_fs_list_icon_d

0xf079,	// (0x000a4379) aid_sp_fs_text_primary

0xd059,	// (0x000a2359) aid_sp_fs_text_secondary

0x76a1,	// (0x0009c9a1) list_medium_line

0x76a1,	// (0x0009c9a1) list_medium_line_g2

0x76a1,	// (0x0009c9a1) list_medium_line_g3

0x76a1,	// (0x0009c9a1) list_medium_line_plain

0x76a1,	// (0x0009c9a1) list_medium_line_plain_t2

0x76a1,	// (0x0009c9a1) list_medium_line_plain_t3

0x76a1,	// (0x0009c9a1) list_medium_line_right_icon

0x76a1,	// (0x0009c9a1) list_medium_line_right_iconx2

0x76a1,	// (0x0009c9a1) list_medium_line_t2

0x76a1,	// (0x0009c9a1) list_medium_line_t2_g2

0x76a1,	// (0x0009c9a1) list_medium_line_t2_g3

0x76a1,	// (0x0009c9a1) list_medium_line_t2_right_icon

0x76a1,	// (0x0009c9a1) list_medium_line_t2_right_iconx2

0x76a1,	// (0x0009c9a1) list_medium_line_t3

0x76a1,	// (0x0009c9a1) list_medium_line_t3_g2

0x76a1,	// (0x0009c9a1) list_medium_line_t3_g3

0x76a1,	// (0x0009c9a1) list_medium_line_t3_right_iconx2

0x76aa,	// (0x0009c9aa) list_medium_line_t4_g4

0xf082,	// (0x000a4382) list_medium_line_x2

0xf082,	// (0x000a4382) list_medium_line_x2_t2_g2

0xf082,	// (0x000a4382) list_medium_line_x2_t2_g3

0xf082,	// (0x000a4382) list_medium_line_x2_t2_g4

0xf082,	// (0x000a4382) list_medium_line_x2_t3

0xf082,	// (0x000a4382) list_medium_line_x2_t3_g2

0xf082,	// (0x000a4382) list_medium_line_x2_t3_g3

0xf082,	// (0x000a4382) list_medium_line_x2_t3_g4

0xf082,	// (0x000a4382) list_medium_line_x2_t4_g2

0xf082,	// (0x000a4382) list_medium_line_x2_t4_g4

0x76b3,	// (0x0009c9b3) list_medium_line_x3

0x76b3,	// (0x0009c9b3) list_medium_line_x3_t4

0x76b3,	// (0x0009c9b3) list_medium_line_x3_t4_g4

0x76aa,	// (0x0009c9aa) list_medium_line_x4_t4

0x76aa,	// (0x0009c9aa) list_medium_line_x4_t4_g7

0x76aa,	// (0x0009c9aa) list_medium_line_x4_t5

0x76bc,	// (0x0009c9bc) list_single_fs_dyc_pane_ParamLimits

0x76bc,	// (0x0009c9bc) list_single_fs_dyc_pane

0x1e9c,	// (0x0009719c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1e9c,	// (0x0009719c) list_medium_line_x4_t4_g7_g1

0x7e2f,	// (0x0009d12f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7e2f,	// (0x0009d12f) list_medium_line_x4_t4_g7_g2

0x7e3b,	// (0x0009d13b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7e3b,	// (0x0009d13b) list_medium_line_x4_t4_g7_g3

0x7e4a,	// (0x0009d14a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7e4a,	// (0x0009d14a) list_medium_line_x4_t4_g7_g4

0x7e56,	// (0x0009d156) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7e56,	// (0x0009d156) list_medium_line_x4_t4_g7_g5

0x7e65,	// (0x0009d165) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7e65,	// (0x0009d165) list_medium_line_x4_t4_g7_g6

0x7e74,	// (0x0009d174) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7e74,	// (0x0009d174) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000a4ed0) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000a4ed0) list_medium_line_x4_t4_g7_g

0x7e80,	// (0x0009d180) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7e80,	// (0x0009d180) list_medium_line_x4_t4_g7_t1

0x7e95,	// (0x0009d195) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7e95,	// (0x0009d195) list_medium_line_x4_t4_g7_t2

0x7eaa,	// (0x0009d1aa) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7eaa,	// (0x0009d1aa) list_medium_line_x4_t4_g7_t3

0x7ebf,	// (0x0009d1bf) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7ebf,	// (0x0009d1bf) list_medium_line_x4_t4_g7_t4

0x7ed1,	// (0x0009d1d1) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7ed1,	// (0x0009d1d1) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000a4edf) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000a4edf) list_medium_line_x4_t4_g7_t

0x7ee3,	// (0x0009d1e3) list_single_dyc_row_pane_ParamLimits

0x7ee3,	// (0x0009d1e3) list_single_dyc_row_pane

0x85b9,	// (0x0009d8b9) call5_gesture_pane_ParamLimits

0x85b9,	// (0x0009d8b9) call5_gesture_pane

0x85ed,	// (0x0009d8ed) call5_windows_pane_ParamLimits

0x85ed,	// (0x0009d8ed) call5_windows_pane

0x8640,	// (0x0009d940) call5_swipe_1_pane_cp_ParamLimits

0x8640,	// (0x0009d940) call5_swipe_1_pane_cp

0x864c,	// (0x0009d94c) call5_swipe_2_pane_cp_ParamLimits

0x864c,	// (0x0009d94c) call5_swipe_2_pane_cp

0x9e18,	// (0x0009f118) call5_image_pane_cp

0x8658,	// (0x0009d958) popup_call5_audio_first_window_cp_ParamLimits

0x8658,	// (0x0009d958) popup_call5_audio_first_window_cp

0xdaf5,	// (0x000a2df5) call5_swipe_1_pane_g1_cp_ParamLimits

0xdaf5,	// (0x000a2df5) call5_swipe_1_pane_g1_cp

0xdb62,	// (0x000a2e62) call5_swipe_1_pane_g2_cp

0xdb0e,	// (0x000a2e0e) call5_swipe_1_pane_t1_cp_ParamLimits

0xdb0e,	// (0x000a2e0e) call5_swipe_1_pane_t1_cp

0xdaf5,	// (0x000a2df5) call5_swipe_2_pane_g1_cp_ParamLimits

0xdaf5,	// (0x000a2df5) call5_swipe_2_pane_g1_cp

0xdb6a,	// (0x000a2e6a) call5_swipe_2_pane_g2_cp

0xdb72,	// (0x000a2e72) call5_swipe_2_pane_t1_cp_ParamLimits

0xdb72,	// (0x000a2e72) call5_swipe_2_pane_t1_cp

0xe920,	// (0x000a3c20) main_sp_fs_email_pane

0xdb87,	// (0x000a2e87) main_sp_fs_listscroll_pane_te

0x8666,	// (0x0009d966) popup_sp_fs_action_menu_pane_ParamLimits

0x8666,	// (0x0009d966) popup_sp_fs_action_menu_pane

0xc090,	// (0x000a1390) bg_sp_fs_ctrlbar_pane_g1

0xdb90,	// (0x000a2e90) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xdb99,	// (0x000a2e99) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xdba2,	// (0x000a2ea2) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc090,	// (0x000a1390) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000a4fcd) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbe69,	// (0x000a1169) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbe69,	// (0x000a1169) bg_sp_fs_ctrlbar_ddmenu_pane

0xdbab,	// (0x000a2eab) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdbab,	// (0x000a2eab) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdbb7,	// (0x000a2eb7) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdbb7,	// (0x000a2eb7) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000a4fd6) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000a4fd6) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdbc3,	// (0x000a2ec3) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdbc3,	// (0x000a2ec3) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x86aa,	// (0x0009d9aa) list_medium_line_t2_right_icon_g1

0x86b2,	// (0x0009d9b2) list_medium_line_t2_right_icon_t1

0x86c2,	// (0x0009d9c2) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000a4fdb) list_medium_line_t2_right_icon_t

0xbc7c,	// (0x000a0f7c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbc7c,	// (0x000a0f7c) bg_sp_fs_ctrlbar_pane

0x8727,	// (0x0009da27) main_sp_fs_ctrlbar_button_pane_cp01

0x872f,	// (0x0009da2f) main_sp_fs_ctrlbar_ddmenu_pane

0xdc15,	// (0x000a2f15) main_sp_fs_ctrlbar_pane_g1

0xdc21,	// (0x000a2f21) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000a4fe0) main_sp_fs_ctrlbar_pane_g

0xdc2d,	// (0x000a2f2d) main_sp_fs_ctrlbar_pane_t1

0x8739,	// (0x0009da39) main_sp_fs_ctrlbar_pane

0x874f,	// (0x0009da4f) main_sp_fs_listscroll_pane_te_cp01

0x8760,	// (0x0009da60) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8760,	// (0x0009da60) popup_sp_fs_action_menu_pane_cp01

0xe920,	// (0x000a3c20) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe920,	// (0x000a3c20) bg_sp_fs_highlight_list_pane_cp01

0xdc5d,	// (0x000a2f5d) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdc5d,	// (0x000a2f5d) sp_fs_action_menu_list_gene_pane_g1

0xdc6c,	// (0x000a2f6c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdc6c,	// (0x000a2f6c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000a4fea) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000a4fea) sp_fs_action_menu_list_gene_pane_g

0xdc79,	// (0x000a2f79) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdc79,	// (0x000a2f79) sp_fs_action_menu_list_gene_pane_t1

0xdc91,	// (0x000a2f91) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdc91,	// (0x000a2f91) sp_fs_action_menu_list_gene_pane

0xdcb2,	// (0x000a2fb2) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdcb2,	// (0x000a2fb2) popup_sp_fs_action_menu_bg_pane

0xdcc0,	// (0x000a2fc0) sp_fs_action_menu_list_pane_ParamLimits

0xdcc0,	// (0x000a2fc0) sp_fs_action_menu_list_pane

0xf08b,	// (0x000a438b) sp_fs_scroll_pane_cp01_ParamLimits

0xf08b,	// (0x000a438b) sp_fs_scroll_pane_cp01

0x878a,	// (0x0009da8a) list_medium_line_plain_t2_t1

0x879a,	// (0x0009da9a) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000a4fef) list_medium_line_plain_t2_t

0x87a8,	// (0x0009daa8) list_medium_line_plain_t3_t1

0x87b8,	// (0x0009dab8) list_medium_line_plain_t3_t2

0x87c6,	// (0x0009dac6) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000a4ff4) list_medium_line_plain_t3_t

0x1e9c,	// (0x0009719c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1e9c,	// (0x0009719c) list_medium_line_x2_t2_g2_g1

0x1eb4,	// (0x000971b4) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1eb4,	// (0x000971b4) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x000a4542) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x000a4542) list_medium_line_x2_t2_g2_g

0x3320,	// (0x00098620) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3320,	// (0x00098620) list_medium_line_x2_t2_g2_t1

0x1ee7,	// (0x000971e7) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1ee7,	// (0x000971e7) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000a4ffb) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000a4ffb) list_medium_line_x2_t2_g2_t

0x1e9c,	// (0x0009719c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1e9c,	// (0x0009719c) list_medium_line_x2_t4_g2_g1

0x87d4,	// (0x0009dad4) list_medium_line_x2_t4_g2_g2_ParamLimits

0x87d4,	// (0x0009dad4) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000a5000) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000a5000) list_medium_line_x2_t4_g2_g

0x87e6,	// (0x0009dae6) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87e6,	// (0x0009dae6) list_medium_line_x2_t4_g2_t1

0x8800,	// (0x0009db00) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8800,	// (0x0009db00) list_medium_line_x2_t4_g2_t2

0x8816,	// (0x0009db16) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8816,	// (0x0009db16) list_medium_line_x2_t4_g2_t3

0x1ee7,	// (0x000971e7) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1ee7,	// (0x000971e7) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000a5005) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000a5005) list_medium_line_x2_t4_g2_t

0x882b,	// (0x0009db2b) list_medium_line_t3_right_iconx2_g1

0x86aa,	// (0x0009d9aa) list_medium_line_t3_right_iconx2_g2

0x8833,	// (0x0009db33) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000a500e) list_medium_line_t3_right_iconx2_g

0x883b,	// (0x0009db3b) list_medium_line_t3_right_iconx2_t1

0x884b,	// (0x0009db4b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000a5015) list_medium_line_t3_right_iconx2_t

0x1e9c,	// (0x0009719c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1e9c,	// (0x0009719c) list_medium_line_x3_t4_g4_g1

0x1ea8,	// (0x000971a8) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1ea8,	// (0x000971a8) list_medium_line_x3_t4_g4_g2

0x3308,	// (0x00098608) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3308,	// (0x00098608) list_medium_line_x3_t4_g4_g3

0x8859,	// (0x0009db59) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8859,	// (0x0009db59) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000a501a) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000a501a) list_medium_line_x3_t4_g4_g

0x8865,	// (0x0009db65) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8865,	// (0x0009db65) list_medium_line_x3_t4_g4_t1

0x887c,	// (0x0009db7c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x887c,	// (0x0009db7c) list_medium_line_x3_t4_g4_t2

0x3335,	// (0x00098635) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3335,	// (0x00098635) list_medium_line_x3_t4_g4_t3

0x8891,	// (0x0009db91) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8891,	// (0x0009db91) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000a5023) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000a5023) list_medium_line_x3_t4_g4_t

0x88ae,	// (0x0009dbae) list_single_dyc_row_text_pane_t1_ParamLimits

0x88ae,	// (0x0009dbae) list_single_dyc_row_text_pane_t1

0x88e5,	// (0x0009dbe5) list_single_dyc_row_text_pane_t2_ParamLimits

0x88e5,	// (0x0009dbe5) list_single_dyc_row_text_pane_t2

0xdce2,	// (0x000a2fe2) list_single_dyc_row_text_pane_t3_ParamLimits

0xdce2,	// (0x000a2fe2) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000a502c) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000a502c) list_single_dyc_row_text_pane_t

0xdd06,	// (0x000a3006) list_single_dyc_row_pane_g1_ParamLimits

0xdd06,	// (0x000a3006) list_single_dyc_row_pane_g1

0xdd12,	// (0x000a3012) list_single_dyc_row_pane_g2_ParamLimits

0xdd12,	// (0x000a3012) list_single_dyc_row_pane_g2

0xdd1e,	// (0x000a301e) list_single_dyc_row_pane_g3_ParamLimits

0xdd1e,	// (0x000a301e) list_single_dyc_row_pane_g3

0xdd2a,	// (0x000a302a) list_single_dyc_row_pane_g4_ParamLimits

0xdd2a,	// (0x000a302a) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000a5039) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000a5039) list_single_dyc_row_pane_g

0xdd36,	// (0x000a3036) list_single_dyc_row_text_pane_ParamLimits

0xdd36,	// (0x000a3036) list_single_dyc_row_text_pane

0xe7d7,	// (0x000a3ad7) bg_sp_fs_scroll_pane

0xdd55,	// (0x000a3055) thumb_sp_fs_scroll_pane

0x6fd3,	// (0x0009c2d3) list_medium_line_g1_ParamLimits

0x6fd3,	// (0x0009c2d3) list_medium_line_g1

0x8a08,	// (0x0009dd08) list_medium_line_t1_ParamLimits

0x8a08,	// (0x0009dd08) list_medium_line_t1

0x1e9c,	// (0x0009719c) list_medium_line_x2_g1_ParamLimits

0x1e9c,	// (0x0009719c) list_medium_line_x2_g1

0x1ea8,	// (0x000971a8) list_medium_line_x2_g2_ParamLimits

0x1ea8,	// (0x000971a8) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000a5042) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000a5042) list_medium_line_x2_g

0xdd5e,	// (0x000a305e) list_medium_line_x2_t1_ParamLimits

0xdd5e,	// (0x000a305e) list_medium_line_x2_t1

0x1e9c,	// (0x0009719c) list_medium_line_x3_g1_ParamLimits

0x1e9c,	// (0x0009719c) list_medium_line_x3_g1

0x1ea8,	// (0x000971a8) list_medium_line_x3_g2_ParamLimits

0x1ea8,	// (0x000971a8) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000a5042) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000a5042) list_medium_line_x3_g

0xdd5e,	// (0x000a305e) list_medium_line_x3_t1_ParamLimits

0xdd5e,	// (0x000a305e) list_medium_line_x3_t1

0xdd74,	// (0x000a3074) thumb_sp_fs_scroll_pane_g1

0xdd7d,	// (0x000a307d) thumb_sp_fs_scroll_pane_g2

0xdd86,	// (0x000a3086) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000a5047) thumb_sp_fs_scroll_pane_g

0xdd74,	// (0x000a3074) bg_sp_fs_scroll_pane_g1

0xdd7d,	// (0x000a307d) bg_sp_fs_scroll_pane_g2

0xdd86,	// (0x000a3086) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000a5047) bg_sp_fs_scroll_pane_g

0x1e9c,	// (0x0009719c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1e9c,	// (0x0009719c) list_medium_line_x2_t3_g4_g1

0x1f24,	// (0x00097224) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1f24,	// (0x00097224) list_medium_line_x2_t3_g4_g2

0x1ea8,	// (0x000971a8) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1ea8,	// (0x000971a8) list_medium_line_x2_t3_g4_g3

0x1eb4,	// (0x000971b4) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1eb4,	// (0x000971b4) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x000a45be) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x000a45be) list_medium_line_x2_t3_g4_g

0x8a1d,	// (0x0009dd1d) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a1d,	// (0x0009dd1d) list_medium_line_x2_t3_g4_t1

0x8a33,	// (0x0009dd33) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a33,	// (0x0009dd33) list_medium_line_x2_t3_g4_t2

0x1ee7,	// (0x000971e7) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1ee7,	// (0x000971e7) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000a504e) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000a504e) list_medium_line_x2_t3_g4_t

0x6fd3,	// (0x0009c2d3) list_medium_line_g2_g1_ParamLimits

0x6fd3,	// (0x0009c2d3) list_medium_line_g2_g1

0x6fdf,	// (0x0009c2df) list_medium_line_g2_g2_ParamLimits

0x6fdf,	// (0x0009c2df) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000a4d00) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000a4d00) list_medium_line_g2_g

0x8a4d,	// (0x0009dd4d) list_medium_line_g2_t1_ParamLimits

0x8a4d,	// (0x0009dd4d) list_medium_line_g2_t1

0x6fd3,	// (0x0009c2d3) list_medium_line_t3_g2_g1_ParamLimits

0x6fd3,	// (0x0009c2d3) list_medium_line_t3_g2_g1

0x6fdf,	// (0x0009c2df) list_medium_line_t3_g2_g2_ParamLimits

0x6fdf,	// (0x0009c2df) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000a4d00) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000a4d00) list_medium_line_t3_g2_g

0x8a62,	// (0x0009dd62) list_medium_line_t3_g2_t1_ParamLimits

0x8a62,	// (0x0009dd62) list_medium_line_t3_g2_t1

0x8a7c,	// (0x0009dd7c) list_medium_line_t3_g2_t2_ParamLimits

0x8a7c,	// (0x0009dd7c) list_medium_line_t3_g2_t2

0x8a92,	// (0x0009dd92) list_medium_line_t3_g2_t3_ParamLimits

0x8a92,	// (0x0009dd92) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000a5055) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000a5055) list_medium_line_t3_g2_t

0x86aa,	// (0x0009d9aa) list_medium_line_right_icon_g1

0x8aa8,	// (0x0009dda8) list_medium_line_right_icon_t1

0x6fd3,	// (0x0009c2d3) list_medium_line_t2_g1_ParamLimits

0x6fd3,	// (0x0009c2d3) list_medium_line_t2_g1

0x8ab6,	// (0x0009ddb6) list_medium_line_t2_t1_ParamLimits

0x8ab6,	// (0x0009ddb6) list_medium_line_t2_t1

0x8ad0,	// (0x0009ddd0) list_medium_line_t2_t2_ParamLimits

0x8ad0,	// (0x0009ddd0) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000a505c) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000a505c) list_medium_line_t2_t

0x6fd3,	// (0x0009c2d3) list_medium_line_t3_g1_ParamLimits

0x6fd3,	// (0x0009c2d3) list_medium_line_t3_g1

0x8ae5,	// (0x0009dde5) list_medium_line_t3_t1_ParamLimits

0x8ae5,	// (0x0009dde5) list_medium_line_t3_t1

0x8aff,	// (0x0009ddff) list_medium_line_t3_t2_ParamLimits

0x8aff,	// (0x0009ddff) list_medium_line_t3_t2

0x8b15,	// (0x0009de15) list_medium_line_t3_t3_ParamLimits

0x8b15,	// (0x0009de15) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000a5061) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000a5061) list_medium_line_t3_t

0x6fd3,	// (0x0009c2d3) list_medium_line_g3_g1_ParamLimits

0x6fd3,	// (0x0009c2d3) list_medium_line_g3_g1

0x8b2a,	// (0x0009de2a) list_medium_line_g3_g2_ParamLimits

0x8b2a,	// (0x0009de2a) list_medium_line_g3_g2

0x6fdf,	// (0x0009c2df) list_medium_line_g3_g3_ParamLimits

0x6fdf,	// (0x0009c2df) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000a5068) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000a5068) list_medium_line_g3_g

0x8b36,	// (0x0009de36) list_medium_line_g3_t1_ParamLimits

0x8b36,	// (0x0009de36) list_medium_line_g3_t1

0x6fd3,	// (0x0009c2d3) list_medium_line_t2_g3_g1_ParamLimits

0x6fd3,	// (0x0009c2d3) list_medium_line_t2_g3_g1

0x8b2a,	// (0x0009de2a) list_medium_line_t2_g3_g2_ParamLimits

0x8b2a,	// (0x0009de2a) list_medium_line_t2_g3_g2

0x6fdf,	// (0x0009c2df) list_medium_line_t2_g3_g3_ParamLimits

0x6fdf,	// (0x0009c2df) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000a5068) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000a5068) list_medium_line_t2_g3_g

0x8b4b,	// (0x0009de4b) list_medium_line_t2_g3_t1_ParamLimits

0x8b4b,	// (0x0009de4b) list_medium_line_t2_g3_t1

0x8b65,	// (0x0009de65) list_medium_line_t2_g3_t2_ParamLimits

0x8b65,	// (0x0009de65) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000a506f) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000a506f) list_medium_line_t2_g3_t

0x6fd3,	// (0x0009c2d3) list_medium_line_t3_g3_g1_ParamLimits

0x6fd3,	// (0x0009c2d3) list_medium_line_t3_g3_g1

0x8b2a,	// (0x0009de2a) list_medium_line_t3_g3_g2_ParamLimits

0x8b2a,	// (0x0009de2a) list_medium_line_t3_g3_g2

0x6fdf,	// (0x0009c2df) list_medium_line_t3_g3_g3_ParamLimits

0x6fdf,	// (0x0009c2df) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000a5068) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000a5068) list_medium_line_t3_g3_g

0x8b7b,	// (0x0009de7b) list_medium_line_t3_g3_t1_ParamLimits

0x8b7b,	// (0x0009de7b) list_medium_line_t3_g3_t1

0x8b94,	// (0x0009de94) list_medium_line_t3_g3_t2_ParamLimits

0x8b94,	// (0x0009de94) list_medium_line_t3_g3_t2

0x8baa,	// (0x0009deaa) list_medium_line_t3_g3_t3_ParamLimits

0x8baa,	// (0x0009deaa) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000a5074) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000a5074) list_medium_line_t3_g3_t

0x882b,	// (0x0009db2b) list_medium_line_right_iconx2_g1

0x86aa,	// (0x0009d9aa) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000a507b) list_medium_line_right_iconx2_g

0x8bc0,	// (0x0009dec0) list_medium_line_right_iconx2_t1

0x882b,	// (0x0009db2b) list_medium_line_t2_right_iconx2_g1

0x86aa,	// (0x0009d9aa) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000a507b) list_medium_line_t2_right_iconx2_g

0x8bce,	// (0x0009dece) list_medium_line_t2_right_iconx2_t1

0x8bde,	// (0x0009dede) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000a5080) list_medium_line_t2_right_iconx2_t

0x8bec,	// (0x0009deec) list_medium_line_x4_t4_t1

0x8bfa,	// (0x0009defa) list_medium_line_x4_t4_t2

0x8c0a,	// (0x0009df0a) list_medium_line_x4_t4_t3

0x8c1a,	// (0x0009df1a) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000a5085) list_medium_line_x4_t4_t

0x8c54,	// (0x0009df54) tport_appsw_pane_ParamLimits

0x8c54,	// (0x0009df54) tport_appsw_pane

0x8c62,	// (0x0009df62) tport_contact_pane_ParamLimits

0x8c62,	// (0x0009df62) tport_contact_pane

0x8c72,	// (0x0009df72) tport_listscroll_pane_ParamLimits

0x8c72,	// (0x0009df72) tport_listscroll_pane

0x8c82,	// (0x0009df82) cell_tport_appsw_pane_ParamLimits

0x8c82,	// (0x0009df82) cell_tport_appsw_pane

0xc3b0,	// (0x000a16b0) tport_appsw_pane_g1_ParamLimits

0xc3b0,	// (0x000a16b0) tport_appsw_pane_g1

0xdd8f,	// (0x000a308f) tport_contact_pane_g1

0xd647,	// (0x000a2947) tport_contact_pane_t1

0xdd98,	// (0x000a3098) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000a508e) tport_contact_pane_t

0xdda6,	// (0x000a30a6) list_tport_pane

0xddaf,	// (0x000a30af) scroll_pane_cp_030

0x8cb5,	// (0x0009dfb5) cell_tport_appsw_pane_g1

0x8cc5,	// (0x0009dfc5) cell_tport_appsw_pane_t1

0x8cd3,	// (0x0009dfd3) grid_highlight_pane_cp019

0x8cdb,	// (0x0009dfdb) list_tport_double_graphic_pane_ParamLimits

0x8cdb,	// (0x0009dfdb) list_tport_double_graphic_pane

0xe920,	// (0x000a3c20) list_highlight_pane_cp023_ParamLimits

0xe920,	// (0x000a3c20) list_highlight_pane_cp023

0x8cec,	// (0x0009dfec) list_tport_double_graphic_pane_g1_ParamLimits

0x8cec,	// (0x0009dfec) list_tport_double_graphic_pane_g1

0x8cf9,	// (0x0009dff9) list_tport_double_graphic_pane_t1_ParamLimits

0x8cf9,	// (0x0009dff9) list_tport_double_graphic_pane_t1

0x8d0e,	// (0x0009e00e) list_tport_double_graphic_pane_t2_ParamLimits

0x8d0e,	// (0x0009e00e) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000a509a) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000a509a) list_tport_double_graphic_pane_t

0xe7d7,	// (0x000a3ad7) main_cale_note_pane

0x67a5,	// (0x0009baa5) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x67a5,	// (0x0009baa5) cell_vitu2_function_top_wide_pane_cp01

0x8290,	// (0x0009d590) wait_bar_pane_cp05_ParamLimits

0xe920,	// (0x000a3c20) listscroll_cmail_pane

0xddb8,	// (0x000a30b8) list_cmail_pane

0x8d20,	// (0x0009e020) list_cmail_body_pane

0x8d47,	// (0x0009e047) list_single_cmail_header_caption_pane

0x8d72,	// (0x0009e072) list_single_cmail_header_detail_pane_ParamLimits

0x8d72,	// (0x0009e072) list_single_cmail_header_detail_pane

0xddc8,	// (0x000a30c8) list_single_cmail_header_caption_pane_t1

0x8da8,	// (0x0009e0a8) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8da8,	// (0x0009e0a8) list_single_cmail_header_detail_pane_g1

0xf0b1,	// (0x000a43b1) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf0b1,	// (0x000a43b1) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000a509f) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000a509f) list_single_cmail_header_detail_pane_g

0xddec,	// (0x000a30ec) list_single_cmail_header_detail_pane_t1_ParamLimits

0xddec,	// (0x000a30ec) list_single_cmail_header_detail_pane_t1

0xde4c,	// (0x000a314c) list_single_cmail_header_editor_pane_bg_ParamLimits

0xde4c,	// (0x000a314c) list_single_cmail_header_editor_pane_bg

0xd7a4,	// (0x000a2aa4) list_cmail_body_pane_g1

0xde63,	// (0x000a3163) list_cmail_body_pane_t1

0xcabc,	// (0x000a1dbc) list_single_cmail_header_editor_pane_bg_g1

0xa071,	// (0x0009f371) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcacc,	// (0x000a1dcc) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcac4,	// (0x000a1dc4) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcd16,	// (0x000a2016) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcaec,	// (0x000a1dec) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcadc,	// (0x000a1ddc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcae4,	// (0x000a1de4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa051,	// (0x0009f351) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8dbe,	// (0x0009e0be) calenote_gesture_pane_ParamLimits

0x8dbe,	// (0x0009e0be) calenote_gesture_pane

0x8dd8,	// (0x0009e0d8) calenote_window_pane_ParamLimits

0x8dd8,	// (0x0009e0d8) calenote_window_pane

0xde71,	// (0x000a3171) popup_note_window_cp01

0x8df0,	// (0x0009e0f0) calenote_swipe_1_pane_ParamLimits

0x8df0,	// (0x0009e0f0) calenote_swipe_1_pane

0x864c,	// (0x0009d94c) calenote_swipe_2_pane_ParamLimits

0x864c,	// (0x0009d94c) calenote_swipe_2_pane

0xdaf5,	// (0x000a2df5) calenote_swipe_1_pane_g1_ParamLimits

0xdaf5,	// (0x000a2df5) calenote_swipe_1_pane_g1

0xdb02,	// (0x000a2e02) calenote_swipe_1_pane_g2_ParamLimits

0xdb02,	// (0x000a2e02) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000a4fc3) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000a4fc3) calenote_swipe_1_pane_g

0xde83,	// (0x000a3183) calenote_swipe_1_pane_t1_ParamLimits

0xde83,	// (0x000a3183) calenote_swipe_1_pane_t1

0xdaf5,	// (0x000a2df5) calenote_swipe_2_pane_g1_ParamLimits

0xdaf5,	// (0x000a2df5) calenote_swipe_2_pane_g1

0xdea2,	// (0x000a31a2) calenote_swipe_2_pane_g2_ParamLimits

0xdea2,	// (0x000a31a2) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000a50ab) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000a50ab) calenote_swipe_2_pane_g

0xdeae,	// (0x000a31ae) calenote_swipe_2_pane_t1_ParamLimits

0xdeae,	// (0x000a31ae) calenote_swipe_2_pane_t1

0xe7d7,	// (0x000a3ad7) main_mup_navstr_pane

0x53ce,	// (0x0009a6ce) main_mup3_pane_t7_ParamLimits

0x53ce,	// (0x0009a6ce) main_mup3_pane_t7

0x5e14,	// (0x0009b114) main_mp4_pane_g6_ParamLimits

0x5e14,	// (0x0009b114) main_mp4_pane_g6

0x61b2,	// (0x0009b4b2) main_image3_pane_t4_ParamLimits

0x61b2,	// (0x0009b4b2) main_image3_pane_t4

0x8e03,	// (0x0009e103) popup_navstr_preview_pane_ParamLimits

0x8e03,	// (0x0009e103) popup_navstr_preview_pane

0x8e0f,	// (0x0009e10f) scroll_navstr_pane_ParamLimits

0x8e0f,	// (0x0009e10f) scroll_navstr_pane

0xe7d7,	// (0x000a3ad7) bg_popup_preview_window_pane_cp04

0xded5,	// (0x000a31d5) popup_navstr_preview_pane_t1

0x8e1b,	// (0x0009e11b) scroll_navstr_pane_g1_ParamLimits

0x8e1b,	// (0x0009e11b) scroll_navstr_pane_g1

0x8e28,	// (0x0009e128) scroll_navstr_pane_t1_ParamLimits

0x8e28,	// (0x0009e128) scroll_navstr_pane_t1

0xde7a,	// (0x000a317a) bg_button_pane_cp014

0xde7a,	// (0x000a317a) bg_button_pane_cp030

0x855f,	// (0x0009d85f) list_double_fisheye_pane_g4_ParamLimits

0x855f,	// (0x0009d85f) list_double_fisheye_pane_g4

0x856b,	// (0x0009d86b) list_double_fisheye_pane_g5_ParamLimits

0x856b,	// (0x0009d86b) list_double_fisheye_pane_g5

0xc004,	// (0x000a1304) sp_fs_scroll_pane_cp03

0xdc15,	// (0x000a2f15) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdc21,	// (0x000a2f21) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000a4fe0) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdc2d,	// (0x000a2f2d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xddc0,	// (0x000a30c0) sp_fs_scroll_pane_cp02

0x9d57,	// (0x0009f057) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9d57,	// (0x0009f057) popup_sp_fs_calendar_preview_list_single_pane

0xe7d7,	// (0x000a3ad7) main_cam6_pano_pane

0x43a7,	// (0x000996a7) main_mup3_pane_ParamLimits

0xe7d7,	// (0x000a3ad7) main_phacti_pane

0x8165,	// (0x0009d465) bg_button_pane_cp11

0x817d,	// (0x0009d47d) main_mobtv_info_pane_g2_ParamLimits

0x817d,	// (0x0009d47d) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x000a4f40) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x000a4f40) main_mobtv_info_pane_g

0x832f,	// (0x0009d62f) sc_clock_pane_t5_ParamLimits

0x832f,	// (0x0009d62f) sc_clock_pane_t5

0x83d0,	// (0x0009d6d0) main_radioblah_pane_g1_ParamLimits

0xda41,	// (0x000a2d41) main_radioblah_pane_t3_ParamLimits

0xda41,	// (0x000a2d41) main_radioblah_pane_t3

0xda59,	// (0x000a2d59) main_radioblah_pane_t4_ParamLimits

0xda59,	// (0x000a2d59) main_radioblah_pane_t4

0x83ee,	// (0x0009d6ee) main_radioblah_text_pane_ParamLimits

0x83ee,	// (0x0009d6ee) main_radioblah_text_pane

0x83fb,	// (0x0009d6fb) main_radioblah_info_pane_g1_ParamLimits

0x8490,	// (0x0009d790) main_radioblah_info_pane_t4_ParamLimits

0x8490,	// (0x0009d790) main_radioblah_info_pane_t4

0xe920,	// (0x000a3c20) main_sp_fs_calendar_pane

0x8e3a,	// (0x0009e13a) main_phacti_pane_g1

0x8e42,	// (0x0009e142) phacti_note_pane_ParamLimits

0x8e42,	// (0x0009e142) phacti_note_pane

0xdeec,	// (0x000a31ec) phacti_term_pane_ParamLimits

0xdeec,	// (0x000a31ec) phacti_term_pane

0xdf01,	// (0x000a3201) phacti_note_pane_t1_ParamLimits

0xdf01,	// (0x000a3201) phacti_note_pane_t1

0xdf18,	// (0x000a3218) phacti_term_pane_g1

0xdf20,	// (0x000a3220) phacti_term_pane_t1_ParamLimits

0xdf20,	// (0x000a3220) phacti_term_pane_t1

0xdf4a,	// (0x000a324a) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9df6,	// (0x0009f0f6) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000a50b5) popup_sp_fs_calendar_preview_list_single_pane_g

0xdf52,	// (0x000a3252) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xdf52,	// (0x000a3252) popup_sp_fs_calendar_preview_list_single_pane_t1

0xdf68,	// (0x000a3268) aid_popup_sp_fs_bg_corner_pane

0xc090,	// (0x000a1390) popup_sp_fs_calendar_preview_bg_pane_g1

0xe7d7,	// (0x000a3ad7) popup_sp_fs_calendar_preview_bg_pane

0xdf70,	// (0x000a3270) popup_sp_fs_calendar_preview_list_pane

0xbc7c,	// (0x000a0f7c) bg_main_sp_fs_cale_pane_ParamLimits

0xbc7c,	// (0x000a0f7c) bg_main_sp_fs_cale_pane

0xdf78,	// (0x000a3278) listscroll_cale_mrui_pane_ParamLimits

0xdf78,	// (0x000a3278) listscroll_cale_mrui_pane

0xdf8d,	// (0x000a328d) listscroll_sp_fs_schedule_track_pane

0xdf96,	// (0x000a3296) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xdf96,	// (0x000a3296) main_sp_fs_ctrlbar_pane_cp01

0xdfa9,	// (0x000a32a9) main_sp_fs_ribbon_pane

0xdfb1,	// (0x000a32b1) popup_sp_fs_cale_preview_window

0x8ea5,	// (0x0009e1a5) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8ea5,	// (0x0009e1a5) list_single_sp_fs_schedule_track_pane

0xe92e,	// (0x000a3c2e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe92e,	// (0x000a3c2e) bg_sp_fs_highlight_list_pane_cp03

0x8ec7,	// (0x0009e1c7) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8ec7,	// (0x0009e1c7) list_single_sp_fs_schedule_track_pane_g1

0x8ed3,	// (0x0009e1d3) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8ed3,	// (0x0009e1d3) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000a50ba) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000a50ba) list_single_sp_fs_schedule_track_pane_g

0x8edf,	// (0x0009e1df) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8edf,	// (0x0009e1df) list_single_sp_fs_schedule_track_pane_t1

0x8ef7,	// (0x0009e1f7) sp_fs_schedule_track_pane_ParamLimits

0x8ef7,	// (0x0009e1f7) sp_fs_schedule_track_pane

0xdfc3,	// (0x000a32c3) sp_fs_schedule_track_pane_g1

0xdfcb,	// (0x000a32cb) sp_fs_schedule_track_pane_g2

0xdfd3,	// (0x000a32d3) sp_fs_schedule_track_pane_g3

0xdfdb,	// (0x000a32db) sp_fs_schedule_track_pane_g4

0xdfe3,	// (0x000a32e3) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000a50bf) sp_fs_schedule_track_pane_g

0xcabc,	// (0x000a1dbc) bg_sp_fs_schedule_viewer_highlight_g1

0xa071,	// (0x0009f371) bg_sp_fs_schedule_viewer_highlight_g2

0xcac4,	// (0x000a1dc4) bg_sp_fs_schedule_viewer_highlight_g3

0xcacc,	// (0x000a1dcc) bg_sp_fs_schedule_viewer_highlight_g4

0xcd16,	// (0x000a2016) bg_sp_fs_schedule_viewer_highlight_g5

0xcadc,	// (0x000a1ddc) bg_sp_fs_schedule_viewer_highlight_g6

0xcae4,	// (0x000a1de4) bg_sp_fs_schedule_viewer_highlight_g7

0xcaec,	// (0x000a1dec) bg_sp_fs_schedule_viewer_highlight_g8

0xa051,	// (0x0009f351) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000a50ca) bg_sp_fs_schedule_viewer_highlight_g

0xe7d7,	// (0x000a3ad7) bg_main_sp_fs_ribbon_pane

0x8f07,	// (0x0009e207) main_sp_fs_ribbon_pane_g1

0xdfeb,	// (0x000a32eb) main_sp_fs_ribbon_pane_t1

0x8f10,	// (0x0009e210) main_sp_fs_ribbon_pane_t2

0xdffa,	// (0x000a32fa) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000a50dd) main_sp_fs_ribbon_pane_t

0xe009,	// (0x000a3309) main_sp_fs_ribbon_scheduler_pane

0xe011,	// (0x000a3311) bg_main_sp_fs_ribbon_pane_g1

0xe01a,	// (0x000a331a) bg_main_sp_fs_ribbon_pane_g2

0xe023,	// (0x000a3323) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000a50e4) bg_main_sp_fs_ribbon_pane_g

0xe02b,	// (0x000a332b) main_sp_fs_ribbon_scheduler_pane_g1

0xe034,	// (0x000a3334) main_sp_fs_ribbon_scheduler_pane_g2

0xe03d,	// (0x000a333d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000a50eb) main_sp_fs_ribbon_scheduler_pane_g

0xe046,	// (0x000a3346) list_cale_mrui_pane

0x8f1f,	// (0x0009e21f) sp_fs_scroll_pane_cp07_ParamLimits

0x8f1f,	// (0x0009e21f) sp_fs_scroll_pane_cp07

0x8f3b,	// (0x0009e23b) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f3b,	// (0x0009e23b) bg_sp_fs_schedule_viewer_highlight

0xe053,	// (0x000a3353) list_single_sp_fs_schedule_track_pane_cp01

0xe05b,	// (0x000a335b) list_sp_fs_schedule_track_pane

0xe063,	// (0x000a3363) sp_fs_scroll_pane_cp06_ParamLimits

0xe063,	// (0x000a3363) sp_fs_scroll_pane_cp06

0xc090,	// (0x000a1390) bgmain_sp_fs_calendar_pane_g1

0x8f48,	// (0x0009e248) list_single_cale_mrui_pane_ParamLimits

0x8f48,	// (0x0009e248) list_single_cale_mrui_pane

0xe075,	// (0x000a3375) list_single_cale_mrui_row_pane_ParamLimits

0xe075,	// (0x000a3375) list_single_cale_mrui_row_pane

0xe082,	// (0x000a3382) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe082,	// (0x000a3382) list_single_cale_mrui_row_pane_g1

0xe0cf,	// (0x000a33cf) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe0cf,	// (0x000a33cf) list_single_cale_mrui_row_pane_t1

0x8f75,	// (0x0009e275) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f75,	// (0x0009e275) list_single_cale_mrui_row_pane_t2

0xe0e1,	// (0x000a33e1) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe0e1,	// (0x000a33e1) list_single_cale_mrui_row_pane_t3

0xe110,	// (0x000a3410) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe110,	// (0x000a3410) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000a50f9) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000a50f9) list_single_cale_mrui_row_pane_t

0x8fdb,	// (0x0009e2db) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8fdb,	// (0x0009e2db) list_single_cmail_header_editor_pane_bg_cp01

0x8ffb,	// (0x0009e2fb) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8ffb,	// (0x0009e2fb) list_single_cmail_header_editor_pane_bg_cp02

0x9017,	// (0x0009e317) main_radioblah_text_pane_t1_ParamLimits

0x9017,	// (0x0009e317) main_radioblah_text_pane_t1

0xe13f,	// (0x000a343f) cam6_indi_pane_cp01

0xe147,	// (0x000a3447) cam6_mode_pane_cp01

0xe14f,	// (0x000a344f) cam6_pano_pane

0xe158,	// (0x000a3458) cam6_zoom_pane_cp01

0xe160,	// (0x000a3460) cam6_pano_image_pane

0xe16b,	// (0x000a346b) cam6_pano_pane_g1

0xd7a4,	// (0x000a2aa4) cam6_pano_pane_g2

0xe174,	// (0x000a3474) cam6_pano_pane_g3

0xe17d,	// (0x000a347d) cam6_pano_pane_g4

0xc6ab,	// (0x000a19ab) cam6_pano_pane_g5

0xe186,	// (0x000a3486) cam6_pano_pane_g6

0xe0ae,	// (0x000a33ae) cam6_pano_pane_g7

0xe190,	// (0x000a3490) cam6_pano_pane_g8

0xe199,	// (0x000a3499) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000a5102) cam6_pano_pane_g

0xe7d7,	// (0x000a3ad7) main_browser_tag_pane

0xdecd,	// (0x000a31cd) grid_navstr_albumart_pane

0xe1a4,	// (0x000a34a4) cell_navstr_albumart_pane_ParamLimits

0xe1a4,	// (0x000a34a4) cell_navstr_albumart_pane

0xe1c4,	// (0x000a34c4) cell_navstr_albumart_pane_g1

0xba8d,	// (0x000a0d8d) cell_navstr_albumart_pane_g2

0xba9d,	// (0x000a0d9d) cell_navstr_albumart_pane_g3

0xba95,	// (0x000a0d95) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000a5115) cell_navstr_albumart_pane_g

0x9032,	// (0x0009e332) bt_list_pane_ParamLimits

0x9032,	// (0x0009e332) bt_list_pane

0x9052,	// (0x0009e352) bt_list_pane_t1

0x9061,	// (0x0009e361) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000a511e) bt_list_pane_t

0xe7d7,	// (0x000a3ad7) main_cale_prevew_pane

0x9070,	// (0x0009e370) popup_cale_preview_window_ParamLimits

0x9070,	// (0x0009e370) popup_cale_preview_window

0xe920,	// (0x000a3c20) bg_popup_preview_window_pane_cp05_ParamLimits

0xe920,	// (0x000a3c20) bg_popup_preview_window_pane_cp05

0xe1cc,	// (0x000a34cc) list_cale_preview_pane_ParamLimits

0xe1cc,	// (0x000a34cc) list_cale_preview_pane

0x9089,	// (0x0009e389) list_double_cale_preview_pane_ParamLimits

0x9089,	// (0x0009e389) list_double_cale_preview_pane

0x909b,	// (0x0009e39b) list_single_cale_preview_pane_ParamLimits

0x909b,	// (0x0009e39b) list_single_cale_preview_pane

0x90b1,	// (0x0009e3b1) list_single_cale_preview_pane_g1

0x90b9,	// (0x0009e3b9) list_single_cale_preview_pane_t1_ParamLimits

0x90b9,	// (0x0009e3b9) list_single_cale_preview_pane_t1

0x90ce,	// (0x0009e3ce) list_double_cale_preview_pane_g1

0x90d6,	// (0x0009e3d6) list_double_cale_preview_pane_t1_ParamLimits

0x90d6,	// (0x0009e3d6) list_double_cale_preview_pane_t1

0x90eb,	// (0x0009e3eb) list_double_cale_preview_pane_t2_ParamLimits

0x90eb,	// (0x0009e3eb) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000a5123) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000a5123) list_double_cale_preview_pane_t

0xe7d7,	// (0x000a3ad7) main_ezdial_pane

0xe920,	// (0x000a3c20) main_sp_fs_email_pane_ParamLimits

0x86d0,	// (0x0009d9d0) cmail_ddmenu_btn01_pane_ParamLimits

0x86d0,	// (0x0009d9d0) cmail_ddmenu_btn01_pane

0x86ed,	// (0x0009d9ed) cmail_ddmenu_btn02_pane_ParamLimits

0x86ed,	// (0x0009d9ed) cmail_ddmenu_btn02_pane

0x870b,	// (0x0009da0b) cmail_ddmenu_btn03_pane_ParamLimits

0x870b,	// (0x0009da0b) cmail_ddmenu_btn03_pane

0x8739,	// (0x0009da39) main_sp_fs_ctrlbar_pane_ParamLimits

0x874f,	// (0x0009da4f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d20,	// (0x0009e020) list_cmail_body_pane_ParamLimits

0xddd6,	// (0x000a30d6) bg_button_pane_cp12

0xdddf,	// (0x000a30df) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdddf,	// (0x000a30df) list_single_cmail_header_detail_pane_g3

0xde28,	// (0x000a3128) list_single_cmail_header_detail_pane_t2_ParamLimits

0xde28,	// (0x000a3128) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000a50a6) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000a50a6) list_single_cmail_header_detail_pane_t

0xdf35,	// (0x000a3235) phacti_term_pane_t2_ParamLimits

0xdf35,	// (0x000a3235) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000a50b0) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000a50b0) phacti_term_pane_t

0xe1d8,	// (0x000a34d8) aid_size_list_single_double

0x9103,	// (0x0009e403) popup_ezdial_listscroll_window

0x9124,	// (0x0009e424) popup_number_entry_window_cp01

0x9e18,	// (0x0009f118) bg_popup_call_pane_cp09

0xe1e4,	// (0x000a34e4) ezdial_list_pane

0xe1ec,	// (0x000a34ec) scroll_pane_cp23

0xbe69,	// (0x000a1169) bg_button_pane_cp028_ParamLimits

0xbe69,	// (0x000a1169) bg_button_pane_cp028

0x9132,	// (0x0009e432) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9132,	// (0x0009e432) cmail_ddmenu_btn01_pane_g1

0x9142,	// (0x0009e442) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9142,	// (0x0009e442) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000a5128) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000a5128) cmail_ddmenu_btn01_pane_g

0xe1f4,	// (0x000a34f4) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe1f4,	// (0x000a34f4) cmail_ddmenu_btn01_pane_t1

0xbc7c,	// (0x000a0f7c) bg_button_pane_cp029_ParamLimits

0xbc7c,	// (0x000a0f7c) bg_button_pane_cp029

0x9142,	// (0x0009e442) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9142,	// (0x0009e442) cmail_ddmenu_btn02_pane_g1

0x915a,	// (0x0009e45a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x915a,	// (0x0009e45a) cmail_ddmenu_btn02_pane_t1

0xe92e,	// (0x000a3c2e) bg_button_pane_cp031_ParamLimits

0xe92e,	// (0x000a3c2e) bg_button_pane_cp031

0x9142,	// (0x0009e442) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9142,	// (0x0009e442) cmail_ddmenu_btn03_pane_g1

0x915a,	// (0x0009e45a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x915a,	// (0x0009e45a) cmail_ddmenu_btn03_pane_t1

0x604f,	// (0x0009b34f) cell_dialer2_keypad_pane_t1_ParamLimits

0x6069,	// (0x0009b369) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6069,	// (0x0009b369) cell_dialer2_keypad_pane_t1_copy1

0x7fa6,	// (0x0009d2a6) ncimui_group_button_pane

0xe920,	// (0x000a3c20) main_sp_fs_calendar_pane_ParamLimits

0x8d47,	// (0x0009e047) list_single_cmail_header_caption_pane_ParamLimits

0xf0bd,	// (0x000a43bd) aid_recal_txt_sm_pane

0xe7d7,	// (0x000a3ad7) mian_recal_day_pane

0xdfb1,	// (0x000a32b1) popup_sp_fs_cale_preview_window_ParamLimits

0xe209,	// (0x000a3509) list_recal_day_pane

0xe24b,	// (0x000a354b) list_single_recal_day_pane_ParamLimits

0xe24b,	// (0x000a354b) list_single_recal_day_pane

0xe25d,	// (0x000a355d) list_single_recal_day_pane_g1_ParamLimits

0xe25d,	// (0x000a355d) list_single_recal_day_pane_g1

0xe269,	// (0x000a3569) list_single_recal_day_pane_g2_ParamLimits

0xe269,	// (0x000a3569) list_single_recal_day_pane_g2

0xe275,	// (0x000a3575) list_single_recal_day_pane_g3_ParamLimits

0xe275,	// (0x000a3575) list_single_recal_day_pane_g3

0x917e,	// (0x0009e47e) list_single_recal_day_pane_g4_ParamLimits

0x917e,	// (0x0009e47e) list_single_recal_day_pane_g4

0xe281,	// (0x000a3581) list_single_recal_day_pane_g5_ParamLimits

0xe281,	// (0x000a3581) list_single_recal_day_pane_g5

0xe28d,	// (0x000a358d) list_single_recal_day_pane_g6_ParamLimits

0xe28d,	// (0x000a358d) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000a5137) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000a5137) list_single_recal_day_pane_g

0xe2a1,	// (0x000a35a1) list_single_recal_day_pane_t1

0xe2b3,	// (0x000a35b3) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x000a5142) list_single_recal_day_pane_t

0x9196,	// (0x0009e496) ncimui_query_button_pane_ParamLimits

0x9196,	// (0x0009e496) ncimui_query_button_pane

0x91a6,	// (0x0009e4a6) ncimui_query_button_pane_t1_ParamLimits

0x91a6,	// (0x0009e4a6) ncimui_query_button_pane_t1

0xe2c5,	// (0x000a35c5) ncimui_query_button_pane_t2_ParamLimits

0xe2c5,	// (0x000a35c5) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000a5147) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000a5147) ncimui_query_button_pane_t

0x91b9,	// (0x0009e4b9) query_button_pane_ParamLimits

0x91b9,	// (0x0009e4b9) query_button_pane

0xe7d7,	// (0x000a3ad7) bg_button_pane_cp0028

0xe2d8,	// (0x000a35d8) query_button_pane_t1

0x43c3,	// (0x000996c3) main_tport_pane_ParamLimits

0x8c2a,	// (0x0009df2a) bg_popup_window_pane_cp01_ParamLimits

0x8c2a,	// (0x0009df2a) bg_popup_window_pane_cp01

0x8c38,	// (0x0009df38) heading_pane_cp08_ParamLimits

0x8c38,	// (0x0009df38) heading_pane_cp08

0x8c46,	// (0x0009df46) heading_pane_cp07_ParamLimits

0x8c46,	// (0x0009df46) heading_pane_cp07

0x8cb5,	// (0x0009dfb5) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000a5093) cell_tport_appsw_pane_g

0x3ac5,	// (0x00098dc5) input_candi_list_open_g1

0xa234,	// (0x0009f534) list_cale_time_pane_g6_ParamLimits

0xa234,	// (0x0009f534) list_cale_time_pane_g6

0x4e40,	// (0x0009a140) aid_size_touch_calib_1_ParamLimits

0x4e40,	// (0x0009a140) aid_size_touch_calib_1

0x4e4c,	// (0x0009a14c) aid_size_touch_calib_2_ParamLimits

0x4e4c,	// (0x0009a14c) aid_size_touch_calib_2

0x4e5a,	// (0x0009a15a) aid_size_touch_calib_3_ParamLimits

0x4e5a,	// (0x0009a15a) aid_size_touch_calib_3

0x4e6a,	// (0x0009a16a) aid_size_touch_calib_4_ParamLimits

0x4e6a,	// (0x0009a16a) aid_size_touch_calib_4

0x4e78,	// (0x0009a178) main_touch_calib_button_group_pane_ParamLimits

0x4e78,	// (0x0009a178) main_touch_calib_button_group_pane

0x4e86,	// (0x0009a186) main_touch_calib_pane_g1_ParamLimits

0x4e92,	// (0x0009a192) main_touch_calib_pane_g2_ParamLimits

0x4e9e,	// (0x0009a19e) main_touch_calib_pane_g3_ParamLimits

0x4eaa,	// (0x0009a1aa) main_touch_calib_pane_g4_ParamLimits

0xf74d,	// (0x000a4a4d) main_touch_calib_pane_g_ParamLimits

0x4eb6,	// (0x0009a1b6) main_touch_calib_pane_t1_ParamLimits

0x4ecf,	// (0x0009a1cf) main_touch_calib_pane_t2_ParamLimits

0x4ee8,	// (0x0009a1e8) main_touch_calib_pane_t3_ParamLimits

0x4efe,	// (0x0009a1fe) main_touch_calib_pane_t4_ParamLimits

0x4f14,	// (0x0009a214) main_touch_calib_pane_t5_ParamLimits

0xf756,	// (0x000a4a56) main_touch_calib_pane_t_ParamLimits

0xc44b,	// (0x000a174b) list_single_fp_cale_pane_g3_ParamLimits

0xc44b,	// (0x000a174b) list_single_fp_cale_pane_g3

0x43a7,	// (0x000996a7) bg_button_pane_cp012_ParamLimits

0x43a7,	// (0x000996a7) bg_vkb2_func_pane_cp03_ParamLimits

0x6f53,	// (0x0009c253) cell_vitu2_function_top_pane_g1_ParamLimits

0x43a7,	// (0x000996a7) bg_vkb2_func_pane_cp04_ParamLimits

0x7f2e,	// (0x0009d22e) main_ncimui_button_group_pane_ParamLimits

0x7f2e,	// (0x0009d22e) main_ncimui_button_group_pane

0x7f94,	// (0x0009d294) main_ncimui_pane_t3_ParamLimits

0x7f94,	// (0x0009d294) main_ncimui_pane_t3

0xdee3,	// (0x000a31e3) phacti_button_group_pane

0xe1d8,	// (0x000a34d8) aid_size_list_single_double_ParamLimits

0x9103,	// (0x0009e403) popup_ezdial_listscroll_window_ParamLimits

0x9124,	// (0x0009e424) popup_number_entry_window_cp01_ParamLimits

0x91c6,	// (0x0009e4c6) phacti_button_pane_ParamLimits

0x91c6,	// (0x0009e4c6) phacti_button_pane

0xe7d7,	// (0x000a3ad7) bg_button_pane_cp14

0xe2e6,	// (0x000a35e6) phacti_button_pane_t1

0x91d7,	// (0x0009e4d7) main_touch_calib_button_pane_ParamLimits

0x91d7,	// (0x0009e4d7) main_touch_calib_button_pane

0xef93,	// (0x000a4293) bg_button_pane_cp18_ParamLimits

0xef93,	// (0x000a4293) bg_button_pane_cp18

0xe2f4,	// (0x000a35f4) main_touch_calib_button_pane_t1_ParamLimits

0xe2f4,	// (0x000a35f4) main_touch_calib_button_pane_t1

0xe30a,	// (0x000a360a) main_touch_calib_button_pane_t2_ParamLimits

0xe30a,	// (0x000a360a) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000a514c) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000a514c) main_touch_calib_button_pane_t

0xe7d7,	// (0x000a3ad7) cell_ncimui_button_pane

0xe7d7,	// (0x000a3ad7) bg_button_pane_cp032

0xe328,	// (0x000a3628) cell_ncimui_button_pane_t1

0x60c5,	// (0x0009b3c5) image3_infobar_pane_ParamLimits

0x60c5,	// (0x0009b3c5) image3_infobar_pane

0x8351,	// (0x0009d651) fs_bigclock_status_pane_ParamLimits

0x8351,	// (0x0009d651) fs_bigclock_status_pane

0x835e,	// (0x0009d65e) main_fs_bigclock_clock_pane_ParamLimits

0x835e,	// (0x0009d65e) main_fs_bigclock_clock_pane

0x8372,	// (0x0009d672) main_fs_bigclock_indi_pane_ParamLimits

0x8372,	// (0x0009d672) main_fs_bigclock_indi_pane

0x839a,	// (0x0009d69a) main_fs_bigclock_swipe_pane_ParamLimits

0x839a,	// (0x0009d69a) main_fs_bigclock_swipe_pane

0xe7d7,	// (0x000a3ad7) main_fs_clock_dumped_data

0xd8b1,	// (0x000a2bb1) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd8b1,	// (0x000a2bb1) list_single_fs_bigclock_indicator_pane_g1

0xd8cc,	// (0x000a2bcc) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd8cc,	// (0x000a2bcc) list_single_fs_bigclock_indicator_pane_g2

0xd8e6,	// (0x000a2be6) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd8e6,	// (0x000a2be6) list_single_fs_bigclock_indicator_pane_g3

0xd900,	// (0x000a2c00) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd900,	// (0x000a2c00) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000a4f74) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000a4f74) list_single_fs_bigclock_indicator_pane_g

0xd92b,	// (0x000a2c2b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd92b,	// (0x000a2c2b) list_single_fs_bigclock_indicator_pane_t1

0xd953,	// (0x000a2c53) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd953,	// (0x000a2c53) list_single_fs_bigclock_indicator_pane_t2

0xd97b,	// (0x000a2c7b) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd97b,	// (0x000a2c7b) list_single_fs_bigclock_indicator_pane_t3

0xd9a3,	// (0x000a2ca3) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd9a3,	// (0x000a2ca3) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000a4f7f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000a4f7f) list_single_fs_bigclock_indicator_pane_t

0xe336,	// (0x000a3636) image3_infobar_fav_pane_ParamLimits

0xe336,	// (0x000a3636) image3_infobar_fav_pane

0xe346,	// (0x000a3646) image3_infobar_loc_pane_ParamLimits

0xe346,	// (0x000a3646) image3_infobar_loc_pane

0xe35a,	// (0x000a365a) image3_infobar_time_pane_ParamLimits

0xe35a,	// (0x000a365a) image3_infobar_time_pane

0xc090,	// (0x000a1390) image3_infobar_time_pane_g1

0xe36a,	// (0x000a366a) image3_infobar_time_pane_t1

0xc090,	// (0x000a1390) image3_infobar_loc_pane_g1

0xe378,	// (0x000a3678) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000a5151) image3_infobar_loc_pane_g

0xe380,	// (0x000a3680) image3_infobar_loc_pane_t1

0xc090,	// (0x000a1390) image3_infobar_fav_pane_g1

0xe38e,	// (0x000a368e) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000a5156) image3_infobar_fav_pane_g

0xe396,	// (0x000a3696) fs_bigclock_status_battery_pane

0xe39f,	// (0x000a369f) fs_bigclock_status_signal_pane

0xe3a8,	// (0x000a36a8) fs_bigclock_status_title_pane

0xe3b1,	// (0x000a36b1) fs_bigclock_status_signal_pane_g1

0xe3ba,	// (0x000a36ba) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000a515b) fs_bigclock_status_signal_pane_g

0xe3c2,	// (0x000a36c2) fs_bigclock_status_battery_pane_g1

0xe3cb,	// (0x000a36cb) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000a5160) fs_bigclock_status_battery_pane_g

0xe3d3,	// (0x000a36d3) fs_bigclock_status_title_pane_t1

0x91e7,	// (0x0009e4e7) main_fs_bigclock_clock_pane_g1

0x91e7,	// (0x0009e4e7) main_fs_bigclock_clock_pane_g2

0x91f4,	// (0x0009e4f4) main_fs_bigclock_clock_pane_g3

0x91f4,	// (0x0009e4f4) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000a5165) main_fs_bigclock_clock_pane_g

0x9200,	// (0x0009e500) main_fs_bigclock_clock_pane_t1

0x9213,	// (0x0009e513) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000a516e) main_fs_bigclock_clock_pane_t

0xe3e1,	// (0x000a36e1) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe3e1,	// (0x000a36e1) list_single_fs_bigclock_indicator_pane

0xe3f2,	// (0x000a36f2) list_single_fs_bigclock_pane_ParamLimits

0xe3f2,	// (0x000a36f2) list_single_fs_bigclock_pane

0xe418,	// (0x000a3718) main_fs_bigclock_indicator_pane_t1

0xe427,	// (0x000a3727) list_single_fs_bigclock_pane_g1

0xe42f,	// (0x000a372f) list_single_fs_bigclock_pane_t1

0xc090,	// (0x000a1390) main_fs_bigclock_swipe_pane_g1

0xe472,	// (0x000a3772) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000a517f) main_fs_bigclock_swipe_pane_g

0xe47a,	// (0x000a377a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe47a,	// (0x000a377a) main_fs_bigclock_swipe_pane_t1

0x335f,	// (0x0009865f) call_type_pane_ParamLimits

0xe7d7,	// (0x000a3ad7) main_btmg_pane

0xe0b6,	// (0x000a33b6) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe0b6,	// (0x000a33b6) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000a50f2) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000a50f2) list_single_cale_mrui_row_pane_g

0xe232,	// (0x000a3532) list_recal_vselct_arw_lo_pane

0xe23a,	// (0x000a353a) list_recal_vselct_arw_up_pane

0xe242,	// (0x000a3542) list_recal_vselct_pane

0x926a,	// (0x0009e56a) btmg_button_pane

0x9276,	// (0x0009e576) main_btmg_pane_g1

0xe7d7,	// (0x000a3ad7) bg_button_pane_cp044

0xe497,	// (0x000a3797) btmg_button_pane_t1

0xbc68,	// (0x000a0f68) aid_listscroll_gen

0xe920,	// (0x000a3c20) main_cntbar_detail_pane

0xddb8,	// (0x000a30b8) list_cmail_folder_pane

0xc004,	// (0x000a1304) sp_fs_scroll_pane_cp03_ParamLimits

0x927e,	// (0x0009e57e) list_single_fs_dyc_pane_cp01_ParamLimits

0x927e,	// (0x0009e57e) list_single_fs_dyc_pane_cp01

0xe4a5,	// (0x000a37a5) aid_size_cmail_indent

0xe4ae,	// (0x000a37ae) list_single_dyc_row_pane_cp01

0x92c3,	// (0x0009e5c3) cntbar_detail_list_pane_ParamLimits

0x92c3,	// (0x0009e5c3) cntbar_detail_list_pane

0x92fd,	// (0x0009e5fd) main_cntbar_detail_cont_pane_ParamLimits

0x92fd,	// (0x0009e5fd) main_cntbar_detail_cont_pane

0x3278,	// (0x00098578) scroll_pane_cp032_ParamLimits

0x3278,	// (0x00098578) scroll_pane_cp032

0x9309,	// (0x0009e609) cntbar_detail_list_event_pane_ParamLimits

0x9309,	// (0x0009e609) cntbar_detail_list_event_pane

0x92cf,	// (0x0009e5cf) cntbar_detail_list_shct_pane

0xa0bf,	// (0x0009f3bf) aid_list_gen

0xe4b7,	// (0x000a37b7) aid_scroll

0xe4c0,	// (0x000a37c0) aid_size_touch_scroll_bar

0xf082,	// (0x000a4382) aid_list_double

0x931d,	// (0x0009e61d) aid_list_single

0x76a1,	// (0x0009c9a1) aid_list_single_lg

0x9326,	// (0x0009e626) aid_list_z_g_a_sm

0x932e,	// (0x0009e62e) aid_list_z_g_d

0x9336,	// (0x0009e636) aid_txt_z_prm

0x9344,	// (0x0009e644) aid_txt_z_prm_cp01

0x9352,	// (0x0009e652) aid_txt_z_sec

0x9360,	// (0x0009e660) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9360,	// (0x0009e660) main_cntbar_detail_cont_pane_g1

0x936d,	// (0x0009e66d) main_cntbar_detail_cont_pane_g2_ParamLimits

0x936d,	// (0x0009e66d) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000a5184) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000a5184) main_cntbar_detail_cont_pane_g

0xe4c9,	// (0x000a37c9) main_cntbar_detail_cont_pane_t1

0xe4d7,	// (0x000a37d7) main_cntbar_detail_cont_pane_t2

0xe4e5,	// (0x000a37e5) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000a5189) main_cntbar_detail_cont_pane_t

0x9379,	// (0x0009e679) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9379,	// (0x0009e679) cell_cntbar_detail_list_shct_pane

0xe4f3,	// (0x000a37f3) cntbar_detail_list_shct_pane_g1

0xe4fc,	// (0x000a37fc) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000a5190) cntbar_detail_list_shct_pane_g

0x938d,	// (0x0009e68d) cntbar_detail_list_event_pane_g1_ParamLimits

0x938d,	// (0x0009e68d) cntbar_detail_list_event_pane_g1

0x9399,	// (0x0009e699) cntbar_detail_list_event_pane_g2_ParamLimits

0x9399,	// (0x0009e699) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000a5195) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000a5195) cntbar_detail_list_event_pane_g

0x9405,	// (0x0009e705) cntbar_detail_list_event_pane_t1_ParamLimits

0x9405,	// (0x0009e705) cntbar_detail_list_event_pane_t1

0x941a,	// (0x0009e71a) cntbar_detail_list_event_pane_t2_ParamLimits

0x941a,	// (0x0009e71a) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000a51a2) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000a51a2) cntbar_detail_list_event_pane_t

0xc090,	// (0x000a1390) cell_cntbar_detail_list_shct_pane_g1

0xa838,	// (0x0009fb38) navi_pane_mv_g3

0xe920,	// (0x000a3c20) main_cntbar_detail_pane_ParamLimits

0xe7d7,	// (0x000a3ad7) main_notif_wgt_pane

0x5d4f,	// (0x0009b04f) aid_tch_main_mp4_pane_g4

0x5fae,	// (0x0009b2ae) popup_slider_window_cp02

0xe228,	// (0x000a3528) list_recal_day_event_pane

0x92a3,	// (0x0009e5a3) cntbar_detail_btn_pane_ParamLimits

0x92a3,	// (0x0009e5a3) cntbar_detail_btn_pane

0x92b3,	// (0x0009e5b3) cntbar_detail_btn_pane_cp01_ParamLimits

0x92b3,	// (0x0009e5b3) cntbar_detail_btn_pane_cp01

0x92cf,	// (0x0009e5cf) cntbar_detail_list_shct_pane_ParamLimits

0x92db,	// (0x0009e5db) cntbar_detail_pane_g1_ParamLimits

0x92db,	// (0x0009e5db) cntbar_detail_pane_g1

0x92e7,	// (0x0009e5e7) cntbar_detail_pane_t1_ParamLimits

0x92e7,	// (0x0009e5e7) cntbar_detail_pane_t1

0x93a5,	// (0x0009e6a5) cntbar_detail_list_event_pane_g3_ParamLimits

0x93a5,	// (0x0009e6a5) cntbar_detail_list_event_pane_g3

0x93bd,	// (0x0009e6bd) cntbar_detail_list_event_pane_g4_ParamLimits

0x93bd,	// (0x0009e6bd) cntbar_detail_list_event_pane_g4

0x93d5,	// (0x0009e6d5) cntbar_detail_list_event_pane_g5_ParamLimits

0x93d5,	// (0x0009e6d5) cntbar_detail_list_event_pane_g5

0x93ed,	// (0x0009e6ed) cntbar_detail_list_event_pane_g6_ParamLimits

0x93ed,	// (0x0009e6ed) cntbar_detail_list_event_pane_g6

0x942f,	// (0x0009e72f) cntbar_detail_list_event_pane_t3_ParamLimits

0x942f,	// (0x0009e72f) cntbar_detail_list_event_pane_t3

0x9441,	// (0x0009e741) popup_notif_wgt_window_ParamLimits

0x9441,	// (0x0009e741) popup_notif_wgt_window

0x9451,	// (0x0009e751) popup_submenu_window_cp01_ParamLimits

0x9451,	// (0x0009e751) popup_submenu_window_cp01

0x9e18,	// (0x0009f118) bg_popup_window_pane_cp10

0xe505,	// (0x000a3805) listscroll_notif_wgt_pane

0xe517,	// (0x000a3817) list_notif_wgt_window

0xe520,	// (0x000a3820) scroll_pane_cp033

0x9463,	// (0x0009e763) list_notif_wgt_row_pane_ParamLimits

0x9463,	// (0x0009e763) list_notif_wgt_row_pane

0xe529,	// (0x000a3829) aid_size_list_notif_wgt_del

0xe536,	// (0x000a3836) list_notif_wgt_row_pane_g1

0xe542,	// (0x000a3842) list_notif_wgt_row_pane_g2

0xe551,	// (0x000a3851) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000a51a9) list_notif_wgt_row_pane_g

0xe55e,	// (0x000a385e) list_notif_wgt_row_pane_t1

0xe574,	// (0x000a3874) list_notif_wgt_row_pane_t2

0xe586,	// (0x000a3886) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000a51b0) list_notif_wgt_row_pane_t

0xcd1e,	// (0x000a201e) list_recal_day_event_pane_g1

0xe598,	// (0x000a3898) list_recal_day_event_pane_t1

0xe7d7,	// (0x000a3ad7) bg_button_pane_cp045

0x9475,	// (0x0009e775) cntbar_detail_btn_pane_t1

0xbc7c,	// (0x000a0f7c) main_callh_pane_ParamLimits

0xbc7c,	// (0x000a0f7c) main_callh_pane

0xe7d7,	// (0x000a3ad7) main_coverflow0_pane

0xe7d7,	// (0x000a3ad7) main_wgtman_pane

0x83b2,	// (0x0009d6b2) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x83b2,	// (0x0009d6b2) main_fs_bigclock_unlock_btn_pane

0x8cad,	// (0x0009dfad) bg_button_pane_cp16

0x8cbd,	// (0x0009dfbd) cell_tport_appsw_pane_g3

0x9483,	// (0x0009e783) cf0_flow_pane_ParamLimits

0x9483,	// (0x0009e783) cf0_flow_pane

0xe5a7,	// (0x000a38a7) listscroll_cf0_pane

0xe5b2,	// (0x000a38b2) main_cf0_pane_g1

0x9492,	// (0x0009e792) main_cf0_pane_t1_ParamLimits

0x9492,	// (0x0009e792) main_cf0_pane_t1

0x94a6,	// (0x0009e7a6) main_cf0_pane_t2_ParamLimits

0x94a6,	// (0x0009e7a6) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000a51bc) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000a51bc) main_cf0_pane_t

0xe5c4,	// (0x000a38c4) scroll_pane_cp11

0x94ba,	// (0x0009e7ba) cf0_flow_pane_g1

0x94c2,	// (0x0009e7c2) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000a51c1) cf0_flow_pane_g

0x94ca,	// (0x0009e7ca) cf0_flow_pane_t1

0xe7d7,	// (0x000a3ad7) main_call6_pane

0xe7d7,	// (0x000a3ad7) main_calllock_pane

0x94d8,	// (0x0009e7d8) call6_btn_grp_pane_ParamLimits

0x94d8,	// (0x0009e7d8) call6_btn_grp_pane

0x94e7,	// (0x0009e7e7) call6_pane_g1_ParamLimits

0x94e7,	// (0x0009e7e7) call6_pane_g1

0x94f7,	// (0x0009e7f7) popup_call6_1st_window_ParamLimits

0x94f7,	// (0x0009e7f7) popup_call6_1st_window

0x9505,	// (0x0009e805) popup_call6_2nd_window_ParamLimits

0x9505,	// (0x0009e805) popup_call6_2nd_window

0x9513,	// (0x0009e813) cell_call6_btn_pane_ParamLimits

0x9513,	// (0x0009e813) cell_call6_btn_pane

0x9e18,	// (0x0009f118) bg_popup_call2_in_pane_cp03

0xe5cf,	// (0x000a38cf) popup_call6_1st_window_g1

0xe5d7,	// (0x000a38d7) popup_call6_1st_window_g2

0xe5df,	// (0x000a38df) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000a51c6) popup_call6_1st_window_g

0xe5e7,	// (0x000a38e7) popup_call6_1st_window_t1

0xe5f6,	// (0x000a38f6) popup_call6_1st_window_t2

0xe604,	// (0x000a3904) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000a51cd) popup_call6_1st_window_t

0x9e18,	// (0x0009f118) bg_popup_call2_in_pane_cp04

0xe5cf,	// (0x000a38cf) popup_call6_2nd_window_g1

0xe5d7,	// (0x000a38d7) popup_call6_2nd_window_g2

0xe5df,	// (0x000a38df) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000a51c6) popup_call6_2nd_window_g

0xe5e7,	// (0x000a38e7) popup_call6_2nd_window_t1

0x118e,	// (0x0009648e) bg_button_pane_cp15

0x9522,	// (0x0009e822) cell_call6_btn_pane_g1

0x952b,	// (0x0009e82b) cell_call6_btn_pane_t1

0x953a,	// (0x0009e83a) listscroll_wgtman_pane_ParamLimits

0x953a,	// (0x0009e83a) listscroll_wgtman_pane

0x9556,	// (0x0009e856) wgtman_btn_pane_ParamLimits

0x9556,	// (0x0009e856) wgtman_btn_pane

0xa63f,	// (0x0009f93f) aid_scroll_copy1

0xe612,	// (0x000a3912) list_wgtman_pane

0x958b,	// (0x0009e88b) wgtman_btn_pane_g1_ParamLimits

0x958b,	// (0x0009e88b) wgtman_btn_pane_g1

0x95b3,	// (0x0009e8b3) wgtman_btn_pane_t1_ParamLimits

0x95b3,	// (0x0009e8b3) wgtman_btn_pane_t1

0xe61c,	// (0x000a391c) wgtman_btn_pane_t2_ParamLimits

0xe61c,	// (0x000a391c) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000a51d4) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000a51d4) wgtman_btn_pane_t

0x95ea,	// (0x0009e8ea) listrow_wgtman_pane_ParamLimits

0x95ea,	// (0x0009e8ea) listrow_wgtman_pane

0x9605,	// (0x0009e905) listrow_wgtman_pane_g1

0x9612,	// (0x0009e912) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000a51d9) listrow_wgtman_pane_g

0x9630,	// (0x0009e930) listrow_wgtman_pane_t1

0x9648,	// (0x0009e948) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000a51de) listrow_wgtman_pane_t

0x966e,	// (0x0009e96e) wait_bar_pane_cp09

0xe633,	// (0x000a3933) main_calllock_btn_pane

0xe63d,	// (0x000a393d) main_calllock_pane_g1

0xe7d7,	// (0x000a3ad7) bg_button_pane_cp17

0xe649,	// (0x000a3949) main_calllock_btn_pane_g1

0xe652,	// (0x000a3952) main_calllock_btn_pane_t1

0xe7d7,	// (0x000a3ad7) main_dialer3_pane

0xe7d7,	// (0x000a3ad7) main_fmrd2_pane

0xc090,	// (0x000a1390) main_fs_bigclock_unlock_btn_pane_g1

0x9688,	// (0x0009e988) main_fs_bigclock_unlock_btn_pane_t1

0x9696,	// (0x0009e996) area_fmrd2_info_pane_ParamLimits

0x9696,	// (0x0009e996) area_fmrd2_info_pane

0x96a4,	// (0x0009e9a4) area_fmrd2_visual_pane_ParamLimits

0x96a4,	// (0x0009e9a4) area_fmrd2_visual_pane

0x96b2,	// (0x0009e9b2) fmrd2_indi_pane_ParamLimits

0x96b2,	// (0x0009e9b2) fmrd2_indi_pane

0x96bf,	// (0x0009e9bf) area_fmrd2_visual_pane_g1

0x96c7,	// (0x0009e9c7) area_fmrd2_visual_pane_t1

0x96d7,	// (0x0009e9d7) area_fmrd2_visual_pane_t2

0x96e7,	// (0x0009e9e7) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000a51e8) area_fmrd2_visual_pane_t

0x96f7,	// (0x0009e9f7) area_fmrd2_info_pane_g1

0x96ff,	// (0x0009e9ff) area_fmrd2_info_pane_t1

0x970f,	// (0x0009ea0f) area_fmrd2_info_pane_t2

0x971f,	// (0x0009ea1f) area_fmrd2_info_pane_t3

0x972f,	// (0x0009ea2f) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000a51ef) area_fmrd2_info_pane_t

0x973d,	// (0x0009ea3d) fmrd2_indi_pane_t1

0x974d,	// (0x0009ea4d) fmrd2_indi_pane_t2

0x975d,	// (0x0009ea5d) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000a51f8) fmrd2_indi_pane_t

0xd90f,	// (0x000a2c0f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd90f,	// (0x000a2c0f) list_single_fs_bigclock_indicator_pane_g5

0xd9c0,	// (0x000a2cc0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd9c0,	// (0x000a2cc0) list_single_fs_bigclock_indicator_pane_t5

0x8e58,	// (0x0009e158) aid_cell_bcale_month_pane_ParamLimits

0x8e58,	// (0x0009e158) aid_cell_bcale_month_pane

0x8e76,	// (0x0009e176) bcale_month_pane_ParamLimits

0x8e76,	// (0x0009e176) bcale_month_pane

0x8e94,	// (0x0009e194) bcale_preview_pane_ParamLimits

0x8e94,	// (0x0009e194) bcale_preview_pane

0xe42f,	// (0x000a372f) list_single_fs_bigclock_pane_t1_ParamLimits

0xe44e,	// (0x000a374e) list_single_fs_bigclock_pane_t2_ParamLimits

0xe44e,	// (0x000a374e) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000a517a) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000a517a) list_single_fs_bigclock_pane_t

0x9680,	// (0x0009e980) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000a51e3) main_fs_bigclock_unlock_btn_pane_g

0x976b,	// (0x0009ea6b) aid_dia3_key_size_ParamLimits

0x976b,	// (0x0009ea6b) aid_dia3_key_size

0x9777,	// (0x0009ea77) aid_dia3_listrow_size_ParamLimits

0x9777,	// (0x0009ea77) aid_dia3_listrow_size

0x9787,	// (0x0009ea87) dia3_keypad_fun_pane_ParamLimits

0x9787,	// (0x0009ea87) dia3_keypad_fun_pane

0x9799,	// (0x0009ea99) dia3_keypad_num_pane_ParamLimits

0x9799,	// (0x0009ea99) dia3_keypad_num_pane

0x97ab,	// (0x0009eaab) dia3_listscroll_pane_ParamLimits

0x97ab,	// (0x0009eaab) dia3_listscroll_pane

0x97b9,	// (0x0009eab9) dia3_numentry_pane_ParamLimits

0x97b9,	// (0x0009eab9) dia3_numentry_pane

0xe661,	// (0x000a3961) dia3_list_pane

0xe66c,	// (0x000a396c) scroll_pane_cp12

0xe7d7,	// (0x000a3ad7) bg_dia3_numentry_pane

0x97c7,	// (0x0009eac7) dia3_numentry_pane_t1

0x97d6,	// (0x0009ead6) cell_dia3_key_num_pane

0x97de,	// (0x0009eade) cell_dia3_key0_fun_pane_ParamLimits

0x97de,	// (0x0009eade) cell_dia3_key0_fun_pane

0x97eb,	// (0x0009eaeb) cell_dia3_key1_fun_pane_ParamLimits

0x97eb,	// (0x0009eaeb) cell_dia3_key1_fun_pane

0x97f8,	// (0x0009eaf8) dia3_listrow_pane

0xd662,	// (0x000a2962) bg_dia3_numentry_pane_g1

0xe7d7,	// (0x000a3ad7) bg_button_pane_cp21

0xe677,	// (0x000a3977) cell_dia3_key_num_pane_t1

0xe685,	// (0x000a3985) cell_dia3_key_num_pane_t2

0xe694,	// (0x000a3994) cell_dia3_key_num_pane_t3

0xe6a3,	// (0x000a39a3) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000a51ff) cell_dia3_key_num_pane_t

0xe7d7,	// (0x000a3ad7) bg_button_pane_cp19

0x9805,	// (0x0009eb05) cell_dia3_key0_fun_pane_g1

0xe7d7,	// (0x000a3ad7) bg_button_pane_cp20

0x980d,	// (0x0009eb0d) cell_dia3_key1_fun_pane_g1

0x9815,	// (0x0009eb15) area_left_week_number_pane

0x9828,	// (0x0009eb28) area_top_day_name_pane

0x9836,	// (0x0009eb36) frame_month_view_pane

0xe6b2,	// (0x000a39b2) grid_month_view_pane

0x984b,	// (0x0009eb4b) cell_top_day_name_pane_ParamLimits

0x984b,	// (0x0009eb4b) cell_top_day_name_pane

0x9865,	// (0x0009eb65) cell_area_left_week_number_pane_ParamLimits

0x9865,	// (0x0009eb65) cell_area_left_week_number_pane

0x9888,	// (0x0009eb88) cell_month_view_pane_ParamLimits

0x9888,	// (0x0009eb88) cell_month_view_pane

0xe6c0,	// (0x000a39c0) frm_month_g1

0x98b4,	// (0x0009ebb4) frm_month_g2

0x98c5,	// (0x0009ebc5) frm_month_g3

0x98d6,	// (0x0009ebd6) frm_month_g4

0x98e7,	// (0x0009ebe7) frm_month_g5

0x98fa,	// (0x0009ebfa) frm_month_g6

0x990d,	// (0x0009ec0d) frm_month_g7

0xe6cd,	// (0x000a39cd) frm_month_g8

0x9920,	// (0x0009ec20) frm_month_g9

0x992d,	// (0x0009ec2d) frm_month_g10

0x993a,	// (0x0009ec3a) frm_month_g11

0x9947,	// (0x0009ec47) frm_month_g12

0x9954,	// (0x0009ec54) frm_month_g13

0x9961,	// (0x0009ec61) frm_month_g14

0x9970,	// (0x0009ec70) frm_month_g15

0x997f,	// (0x0009ec7f) frm_month_g16

0x000f,

0xff08,	// (0x000a5208) frm_month_g

0xe6da,	// (0x000a39da) cell_top_day_name_pane_t1

0x998e,	// (0x0009ec8e) cell_area_left_week_number_pane_g1

0x999d,	// (0x0009ec9d) cell_area_left_week_number_pane_t1

0xc2f3,	// (0x000a15f3) cell_month_view_pane_g1

0x99b3,	// (0x0009ecb3) cell_month_view_pane_t1

0xe7d7,	// (0x000a3ad7) main_fps_pane

0xdbdd,	// (0x000a2edd) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdbdd,	// (0x000a2edd) cmail_ddmenu_btn02_pane_cp1

0xdbf9,	// (0x000a2ef9) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdbf9,	// (0x000a2ef9) cmail_ddmenu_btn02_pane_cp2

0x914e,	// (0x0009e44e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x914e,	// (0x0009e44e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000a512d) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000a512d) cmail_ddmenu_btn02_pane_g

0x916c,	// (0x0009e46c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x916c,	// (0x0009e46c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000a5132) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000a5132) cmail_ddmenu_btn02_pane_t

0x99c9,	// (0x0009ecc9) fps_text_pane_ParamLimits

0x99c9,	// (0x0009ecc9) fps_text_pane

0x99d6,	// (0x0009ecd6) main_fps_pane_g1_ParamLimits

0x99d6,	// (0x0009ecd6) main_fps_pane_g1

0x99e4,	// (0x0009ece4) wait_bar_pane_cp010_ParamLimits

0x99e4,	// (0x0009ece4) wait_bar_pane_cp010

0x99f0,	// (0x0009ecf0) fps_text_pane_t1_ParamLimits

0x99f0,	// (0x0009ecf0) fps_text_pane_t1

0x6467,	// (0x0009b767) cam4_image_uncrop_pane_g1

0x6470,	// (0x0009b770) cam4_image_uncrop_pane_g2

0x6479,	// (0x0009b779) cam4_image_uncrop_pane_g3

0x6482,	// (0x0009b782) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000a4bee) cam4_image_uncrop_pane_g

0x97f8,	// (0x0009eaf8) dia3_listrow_pane_ParamLimits

0xe7d7,	// (0x000a3ad7) main_phob2_pane

0x8c8f,	// (0x0009df8f) cell_tport_appsw_pane_cp02_ParamLimits

0x8c8f,	// (0x0009df8f) cell_tport_appsw_pane_cp02

0x8c9e,	// (0x0009df9e) cell_tport_appsw_pane_cp03_ParamLimits

0x8c9e,	// (0x0009df9e) cell_tport_appsw_pane_cp03

0xe7d7,	// (0x000a3ad7) phob2_contact_card_pane

0xe7d7,	// (0x000a3ad7) phob2_listscroll_pane

0xe6ed,	// (0x000a39ed) phob2_list_pane

0xe6f5,	// (0x000a39f5) scroll_pane_cp034

0x9a09,	// (0x0009ed09) phob2_cc_data_pane_ParamLimits

0x9a09,	// (0x0009ed09) phob2_cc_data_pane

0x9a23,	// (0x0009ed23) phob2_cc_listscroll_pane_ParamLimits

0x9a23,	// (0x0009ed23) phob2_cc_listscroll_pane

0x95ea,	// (0x0009e8ea) list_double_large_graphic_phob2_pane_ParamLimits

0x95ea,	// (0x0009e8ea) list_double_large_graphic_phob2_pane

0x9a3d,	// (0x0009ed3d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a3d,	// (0x0009ed3d) list_double_large_graphic_phob2_pane_g1

0x9a53,	// (0x0009ed53) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a53,	// (0x0009ed53) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x000a5229) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x000a5229) list_double_large_graphic_phob2_pane_g

0x9a5f,	// (0x0009ed5f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a5f,	// (0x0009ed5f) list_double_large_graphic_phob2_pane_t1

0x9a74,	// (0x0009ed74) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a74,	// (0x0009ed74) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x000a522e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x000a522e) list_double_large_graphic_phob2_pane_t

0xe7d7,	// (0x000a3ad7) list_highlight_pane_cp024

0x9a86,	// (0x0009ed86) phob2_cc_button_pane

0x9a8e,	// (0x0009ed8e) phob2_cc_data_pane_g1_ParamLimits

0x9a8e,	// (0x0009ed8e) phob2_cc_data_pane_g1

0x9a9a,	// (0x0009ed9a) phob2_cc_data_pane_g2_ParamLimits

0x9a9a,	// (0x0009ed9a) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x000a5233) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x000a5233) phob2_cc_data_pane_g

0x9aa6,	// (0x0009eda6) phob2_cc_data_pane_t1_ParamLimits

0x9aa6,	// (0x0009eda6) phob2_cc_data_pane_t1

0x9ab8,	// (0x0009edb8) phob2_cc_data_pane_t2_ParamLimits

0x9ab8,	// (0x0009edb8) phob2_cc_data_pane_t2

0x9aca,	// (0x0009edca) phob2_cc_data_pane_t3_ParamLimits

0x9aca,	// (0x0009edca) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000a5238) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000a5238) phob2_cc_data_pane_t

0xe6fd,	// (0x000a39fd) phob2_cc_list_pane_ParamLimits

0xe6fd,	// (0x000a39fd) phob2_cc_list_pane

0xcefc,	// (0x000a21fc) scroll_pane_cp035_ParamLimits

0xcefc,	// (0x000a21fc) scroll_pane_cp035

0xe920,	// (0x000a3c20) bg_button_pane_cp033

0xe709,	// (0x000a3a09) phob2_cc_button_pane_g1

0xe715,	// (0x000a3a15) phob2_cc_button_pane_t1

0xe72a,	// (0x000a3a2a) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000a523f) phob2_cc_button_pane_t

0x9adc,	// (0x0009eddc) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9adc,	// (0x0009eddc) list_double_large_graphic_phob2_cc_pane

0x9b4a,	// (0x0009ee4a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9b4a,	// (0x0009ee4a) list_double_large_graphic_phob2_cc_pane_g1

0x9b5b,	// (0x0009ee5b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9b5b,	// (0x0009ee5b) list_double_large_graphic_phob2_cc_pane_g2

0x9b67,	// (0x0009ee67) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9b67,	// (0x0009ee67) list_double_large_graphic_phob2_cc_pane_g3

0x9b73,	// (0x0009ee73) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9b73,	// (0x0009ee73) list_double_large_graphic_phob2_cc_pane_g4

0x9b7f,	// (0x0009ee7f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b7f,	// (0x0009ee7f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000a5244) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000a5244) list_double_large_graphic_phob2_cc_pane_g

0x9b8b,	// (0x0009ee8b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9b8b,	// (0x0009ee8b) list_double_large_graphic_phob2_cc_pane_t1

0x9bb4,	// (0x0009eeb4) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9bb4,	// (0x0009eeb4) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000a524f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000a524f) list_double_large_graphic_phob2_cc_pane_t

0xe73c,	// (0x000a3a3c) list_highlight_pane_cp025_ParamLimits

0xe73c,	// (0x000a3a3c) list_highlight_pane_cp025

0xe920,	// (0x000a3c20) bg_button_pane_cp033_ParamLimits

0xe709,	// (0x000a3a09) phob2_cc_button_pane_g1_ParamLimits

0xe715,	// (0x000a3a15) phob2_cc_button_pane_t1_ParamLimits

0xe72a,	// (0x000a3a2a) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000a523f) phob2_cc_button_pane_t_ParamLimits

0x1182,	// (0x00096482) popup_wgtman_window

0xcbe8,	// (0x000a1ee8) scroll_pane_cp038

0x9573,	// (0x0009e873) wgtman_btn_pane_cp_01_ParamLimits

0x9573,	// (0x0009e873) wgtman_btn_pane_cp_01

0xe74a,	// (0x000a3a4a) wgtman_content_pane

0xe753,	// (0x000a3a53) wgtman_heading_pane

0xe7d7,	// (0x000a3ad7) bg_heading_pane_cp02

0xe75c,	// (0x000a3a5c) wgtman_heading_pane_g1

0xe764,	// (0x000a3a64) wgtman_heading_pane_t1

0xe772,	// (0x000a3a72) scroll_pane_cp036

0xe77a,	// (0x000a3a7a) wgtman_list_pane

0xe782,	// (0x000a3a82) wgtman_list_pane_t1_ParamLimits

0xe782,	// (0x000a3a82) wgtman_list_pane_t1

0x63c6,	// (0x0009b6c6) cam4_grid_pane

0x7161,	// (0x0009c461) bg_button_pane_cp015_ParamLimits

0x7173,	// (0x0009c473) bg_button_pane_cp016_ParamLimits

0x7186,	// (0x0009c486) bg_button_pane_cp017_ParamLimits

0x71dc,	// (0x0009c4dc) popup_vitu2_query_window_g3_ParamLimits

0x71dc,	// (0x0009c4dc) popup_vitu2_query_window_g3

0x7297,	// (0x0009c597) popup_vitu2_query_window_t6_ParamLimits

0x7297,	// (0x0009c597) popup_vitu2_query_window_t6

0x72c2,	// (0x0009c5c2) popup_vitu2_query_window_t7_ParamLimits

0x72c2,	// (0x0009c5c2) popup_vitu2_query_window_t7

0xcb6d,	// (0x000a1e6d) cam4_grid_pane_g1

0xcb76,	// (0x000a1e76) cam4_grid_pane_g2

0xe79c,	// (0x000a3a9c) cam4_grid_pane_g3

0xe7a5,	// (0x000a3aa5) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000a5254) cam4_grid_pane_g

0x2009,	// (0x00097309) aid_placing_vt_slider_lsc_ParamLimits

0x2355,	// (0x00097655) vidtel_button_pane_ParamLimits

0x2355,	// (0x00097655) vidtel_button_pane

0xe7d7,	// (0x000a3ad7) bg_button_pane_cp034

0xe7b0,	// (0x000a3ab0) vidtel_button_pane_g1

0xe7b8,	// (0x000a3ab8) vidtel_button_pane_t1

0xcd0e,	// (0x000a200e) aid_size_vtel_slider_touch

0xcefc,	// (0x000a21fc) scroll_pane_cp039

0x80ef,	// (0x0009d3ef) ncim_query_button_pane_cp01_ParamLimits

0x810e,	// (0x0009d40e) ncimui_query_pane_g1_ParamLimits

0xe920,	// (0x000a3c20) input_focus_pane_cp012_ParamLimits

0xd6a0,	// (0x000a29a0) ncim_query_entry_pane_t1_ParamLimits

0xcefc,	// (0x000a21fc) scroll_pane_cp039_ParamLimits

0xa723,	// (0x0009fa23) navi_pane_bcale_mc_g1

0xa72b,	// (0x0009fa2b) navi_pane_bcale_mc_t1

0xdc42,	// (0x000a2f42) main_sp_fs_email_pane_g1

0xdc4e,	// (0x000a2f4e) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000a4fe5) main_sp_fs_email_pane_g

0xe0c2,	// (0x000a33c2) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe0c2,	// (0x000a33c2) list_single_cale_mrui_row_pane_g3

0x918c,	// (0x0009e48c) list_single_recal_day_pane_g5_event_pane

0xe299,	// (0x000a3599) list_single_recal_day_pane_g7

0xe7ce,	// (0x000a3ace) list_recal_day_event_pane_cp01

0xe93c,	// (0x000a3c3c) list_recal_vselct_arw_lo_pane_cp01

0xe944,	// (0x000a3c44) list_recal_vselct_arw_up_pane_cp01

0xe94c,	// (0x000a3c4c) list_recal_vselct_pane_cp01

0xcd1e,	// (0x000a201e) list_recal_day_event_pane_cp01_g1

0xe956,	// (0x000a3c56) list_recal_day_event_pane_cp01_t1

0xe2a1,	// (0x000a35a1) list_single_recal_day_pane_t1_ParamLimits

0xe2b3,	// (0x000a35b3) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x000a5142) list_single_recal_day_pane_t_ParamLimits

0xeece,	// (0x000a41ce) bg_notes_pane_ParamLimits

0xef71,	// (0x000a4271) list_notes_pane_ParamLimits

0x14ea,	// (0x000967ea) scroll_pane_cp06_ParamLimits

0xef93,	// (0x000a4293) main_notes_pane_ParamLimits

0xe7d7,	// (0x000a3ad7) main_welc_pane

0x9bdd,	// (0x0009eedd) main_welc_body_pane_ParamLimits

0x9bdd,	// (0x0009eedd) main_welc_body_pane

0x9bf7,	// (0x0009eef7) main_welc_opti_pane_ParamLimits

0x9bf7,	// (0x0009eef7) main_welc_opti_pane

0x9c2a,	// (0x0009ef2a) main_welc_pane_t1_ParamLimits

0x9c2a,	// (0x0009ef2a) main_welc_pane_t1

0x9c44,	// (0x0009ef44) main_welc_body_row_pane_ParamLimits

0x9c44,	// (0x0009ef44) main_welc_body_row_pane

0xe92e,	// (0x000a3c2e) main_welc_opti_row_pane_ParamLimits

0xe92e,	// (0x000a3c2e) main_welc_opti_row_pane

0xe964,	// (0x000a3c64) main_welc_opti_row_pane_g1

0x9c69,	// (0x0009ef69) main_welc_opti_row_pane_t1

0xe96c,	// (0x000a3c6c) main_welc_body_row_pane_t1

0xe50f,	// (0x000a380f) popup_notif_wgt_heading_pane

0xe529,	// (0x000a3829) aid_size_list_notif_wgt_del_ParamLimits

0xe536,	// (0x000a3836) list_notif_wgt_row_pane_g1_ParamLimits

0xe542,	// (0x000a3842) list_notif_wgt_row_pane_g2_ParamLimits

0xe551,	// (0x000a3851) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000a51a9) list_notif_wgt_row_pane_g_ParamLimits

0xe55e,	// (0x000a385e) list_notif_wgt_row_pane_t1_ParamLimits

0xe574,	// (0x000a3874) list_notif_wgt_row_pane_t2_ParamLimits

0xe586,	// (0x000a3886) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000a51b0) list_notif_wgt_row_pane_t_ParamLimits

0x9605,	// (0x0009e905) listrow_wgtman_pane_g1_ParamLimits

0x9612,	// (0x0009e912) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000a51d9) listrow_wgtman_pane_g_ParamLimits

0x9630,	// (0x0009e930) listrow_wgtman_pane_t1_ParamLimits

0x9648,	// (0x0009e948) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000a51de) listrow_wgtman_pane_t_ParamLimits

0x966e,	// (0x0009e96e) wait_bar_pane_cp09_ParamLimits

0xe7d7,	// (0x000a3ad7) bg_popup_heading_pane_cp02

0xe97b,	// (0x000a3c7b) popup_notif_wgt_heading_pane_g1

0xe983,	// (0x000a3c83) popup_notif_wgt_heading_pane_t1

0xe7d7,	// (0x000a3ad7) main_vids_pane

0xe7d7,	// (0x000a3ad7) vids_listscroll_pane

0x9c78,	// (0x0009ef78) scroll_pane_cp040

0xe7d7,	// (0x000a3ad7) vids_list_pane

0x9c83,	// (0x0009ef83) vids_list_double_pane_ParamLimits

0x9c83,	// (0x0009ef83) vids_list_double_pane

0x9c9d,	// (0x0009ef9d) vids_list_double_pane_g1

0x9ca6,	// (0x0009efa6) vids_list_double_pane_t1

0x9cb6,	// (0x0009efb6) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000a5262) vids_list_double_pane_t

0x43a7,	// (0x000996a7) main_ncimui_pane_ParamLimits

0x7f46,	// (0x0009d246) main_ncimui_pane_g1_ParamLimits

0x7f52,	// (0x0009d252) main_ncimui_pane_g2_ParamLimits

0x7f52,	// (0x0009d252) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x000a4eea) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x000a4eea) main_ncimui_pane_g

0x9c10,	// (0x0009ef10) main_welc_pane_g1_ParamLimits

0x9c10,	// (0x0009ef10) main_welc_pane_g1

0x9c1c,	// (0x0009ef1c) main_welc_pane_g2_ParamLimits

0x9c1c,	// (0x0009ef1c) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000a525d) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000a525d) main_welc_pane_g

0xeece,	// (0x000a41ce) listscroll_mce_pane_ParamLimits

0xa878,	// (0x0009fb78) wait_bar_pane_cp10

0xbc70,	// (0x000a0f70) main_cale_day_pane_ParamLimits

0xbc70,	// (0x000a0f70) main_cale_week_pane_ParamLimits

0xeece,	// (0x000a41ce) main_messa_pane_ParamLimits

0x56f0,	// (0x0009a9f0) main_clock2_btn_pane_ParamLimits

0x56f0,	// (0x0009a9f0) main_clock2_btn_pane

0xc4d3,	// (0x000a17d3) main_clock2_btn_pane_cp01_ParamLimits

0xc4d3,	// (0x000a17d3) main_clock2_btn_pane_cp01

0xe046,	// (0x000a3346) list_cale_mrui_pane_ParamLimits

0xe5bc,	// (0x000a38bc) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000a51b7) main_cf0_pane_g

0x9815,	// (0x0009eb15) area_left_week_number_pane_ParamLimits

0x9828,	// (0x0009eb28) area_top_day_name_pane_ParamLimits

0x9836,	// (0x0009eb36) frame_month_view_pane_ParamLimits

0xe6b2,	// (0x000a39b2) grid_month_view_pane_ParamLimits

0xe6c0,	// (0x000a39c0) frm_month_g1_ParamLimits

0x98b4,	// (0x0009ebb4) frm_month_g2_ParamLimits

0x98c5,	// (0x0009ebc5) frm_month_g3_ParamLimits

0x98d6,	// (0x0009ebd6) frm_month_g4_ParamLimits

0x98e7,	// (0x0009ebe7) frm_month_g5_ParamLimits

0x98fa,	// (0x0009ebfa) frm_month_g6_ParamLimits

0x990d,	// (0x0009ec0d) frm_month_g7_ParamLimits

0xe6cd,	// (0x000a39cd) frm_month_g8_ParamLimits

0x9920,	// (0x0009ec20) frm_month_g9_ParamLimits

0x992d,	// (0x0009ec2d) frm_month_g10_ParamLimits

0x993a,	// (0x0009ec3a) frm_month_g11_ParamLimits

0x9947,	// (0x0009ec47) frm_month_g12_ParamLimits

0x9954,	// (0x0009ec54) frm_month_g13_ParamLimits

0x9961,	// (0x0009ec61) frm_month_g14_ParamLimits

0x9970,	// (0x0009ec70) frm_month_g15_ParamLimits

0x997f,	// (0x0009ec7f) frm_month_g16_ParamLimits

0xff08,	// (0x000a5208) frm_month_g_ParamLimits

0xe6da,	// (0x000a39da) cell_top_day_name_pane_t1_ParamLimits

0x998e,	// (0x0009ec8e) cell_area_left_week_number_pane_g1_ParamLimits

0x999d,	// (0x0009ec9d) cell_area_left_week_number_pane_t1_ParamLimits

0xc2f3,	// (0x000a15f3) cell_month_view_pane_g1_ParamLimits

0x99b3,	// (0x0009ecb3) cell_month_view_pane_t1_ParamLimits

0xeec6,	// (0x000a41c6) main_clock2_btn_pane_g1

0xe991,	// (0x000a3c91) main_clock2_btn_pane_t1

0xe920,	// (0x000a3c20) listscroll_cmail_pane_ParamLimits

0xdc42,	// (0x000a2f42) main_sp_fs_email_pane_g1_ParamLimits

0xdc4e,	// (0x000a2f4e) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000a4fe5) main_sp_fs_email_pane_g_ParamLimits

0xe209,	// (0x000a3509) list_recal_day_pane_ParamLimits

0xe21a,	// (0x000a351a) mian_recal_day_pane_t1

0x895b,	// (0x0009dc5b) list_single_dyc_row_text_pane_t4_ParamLimits

0x895b,	// (0x0009dc5b) list_single_dyc_row_text_pane_t4

0x8992,	// (0x0009dc92) list_single_dyc_row_text_pane_t5_ParamLimits

0x8992,	// (0x0009dc92) list_single_dyc_row_text_pane_t5

0xdcf4,	// (0x000a2ff4) list_single_dyc_row_text_pane_t6_ParamLimits

0xdcf4,	// (0x000a2ff4) list_single_dyc_row_text_pane_t6

0x31aa,	// (0x000984aa) aid_mgn_list_cale_time_pane

0x43a7,	// (0x000996a7) main_gallery2_pane_ParamLimits

0xc4e9,	// (0x000a17e9) main_clock2_pane_cp01_t1

0xc4f9,	// (0x000a17f9) main_clock2_pane_cp01_t3

0x0001,

0xf7c0,	// (0x000a4ac0) main_clock2_pane_cp01_t

0x193c,	// (0x00096c3c) cale_week_scroll_pane_g16_ParamLimits

0x193c,	// (0x00096c3c) cale_week_scroll_pane_g16

0x9e18,	// (0x0009f118) vorec_slider_pane

0xe7b8,	// (0x000a3ab8) vidtel_button_pane_t1_ParamLimits

0x91e7,	// (0x0009e4e7) main_fs_bigclock_clock_pane_g1_ParamLimits

0x91e7,	// (0x0009e4e7) main_fs_bigclock_clock_pane_g2_ParamLimits

0x91f4,	// (0x0009e4f4) main_fs_bigclock_clock_pane_g3_ParamLimits

0x91f4,	// (0x0009e4f4) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x000a5165) main_fs_bigclock_clock_pane_g_ParamLimits

0x9200,	// (0x0009e500) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9213,	// (0x0009e513) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x000a516e) main_fs_bigclock_clock_pane_t_ParamLimits

0x4f8f,	// (0x0009a28f) main_mup3_lyrics_pane_ParamLimits

0x4f8f,	// (0x0009a28f) main_mup3_lyrics_pane

0x9cea,	// (0x0009efea) main_mup3_lyrics_pane_t1_ParamLimits

0x9cea,	// (0x0009efea) main_mup3_lyrics_pane_t1

0x5d39,	// (0x0009b039) aid_main_mp4_pane_t1_area

0x5d43,	// (0x0009b043) aid_main_mp4_pane_t2_area

0x5e42,	// (0x0009b142) main_mp4_pane_g7_ParamLimits

0x5e42,	// (0x0009b142) main_mp4_pane_g7

0x5e4e,	// (0x0009b14e) main_mp4_pane_g8_ParamLimits

0x5e4e,	// (0x0009b14e) main_mp4_pane_g8

0x626e,	// (0x0009b56e) aid_call6_pane_g1_size

0x9b1e,	// (0x0009ee1e) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9b1e,	// (0x0009ee1e) list_double_large_graphic_phob2_other_pane

0xa1d3,	// (0x0009f4d3) list_double_large_graphic_phob2_other_pane_g1

0xe7d7,	// (0x000a3ad7) list_highlight_pane_cp026
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
