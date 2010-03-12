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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00065e6a };

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
0x7670,	// (0x0006d4da) Screen

0x767c,	// (0x0006d4e6) application_window

0x76e2,	// (0x0006d54c) area_bottom_pane_ParamLimits

0x76e2,	// (0x0006d54c) area_bottom_pane

0x773b,	// (0x0006d5a5) area_top_pane_ParamLimits

0x773b,	// (0x0006d5a5) area_top_pane

0x779f,	// (0x0006d609) call_video_uplink_pane_ParamLimits

0x779f,	// (0x0006d609) call_video_uplink_pane

0x77dc,	// (0x0006d646) main_pane_ParamLimits

0x77dc,	// (0x0006d646) main_pane

0x28dd,	// (0x00068747) context_pane

0xa793,	// (0x000705fd) navi_pane

0xa7b3,	// (0x0007061d) popup_cale_events_window_ParamLimits

0xa7b3,	// (0x0007061d) popup_cale_events_window

0x28f0,	// (0x0006875a) popup_mup_playback_window

0xa7cb,	// (0x00070635) signal_pane

0x0846,	// (0x000666b0) main_browser_pane

0x1440,	// (0x000672aa) main_burst_pane

0xa61e,	// (0x00070488) main_calc_pane

0x1440,	// (0x000672aa) main_cale_day_pane

0x0846,	// (0x000666b0) main_cale_month_pane

0x1440,	// (0x000672aa) main_cale_week_pane

0x1440,	// (0x000672aa) main_call_pane

0x04f6,	// (0x00066360) main_call_poc_pane

0x1440,	// (0x000672aa) main_camera_pane

0x1440,	// (0x000672aa) main_chi_dic_pane

0x12c5,	// (0x0006712f) main_clock_pane

0x04f6,	// (0x00066360) main_fmradio_pane

0x1440,	// (0x000672aa) main_graph_messa_pane

0x04f6,	// (0x00066360) main_help_pane

0x0846,	// (0x000666b0) main_im_pane

0x0751,	// (0x000665bb) main_image_pane_ParamLimits

0x0751,	// (0x000665bb) main_image_pane

0x04f6,	// (0x00066360) main_location2_pane

0x1440,	// (0x000672aa) main_location_pane

0x04f6,	// (0x00066360) main_messa_pane

0x04f6,	// (0x00066360) main_mp2_pane

0x1440,	// (0x000672aa) main_mp_pane

0x04f6,	// (0x00066360) main_msg_pane

0x04f6,	// (0x00066360) main_mup_eq_pane

0x04f6,	// (0x00066360) main_mup_pane

0x0846,	// (0x000666b0) main_notes_pane

0x04f6,	// (0x00066360) main_pec_pane

0x04f6,	// (0x00066360) main_phob_pane

0x04f6,	// (0x00066360) main_pinb_pane

0x04f6,	// (0x00066360) main_postcard_pane

0x04f6,	// (0x00066360) main_qdial_pane

0x1440,	// (0x000672aa) main_skin_pane

0x04f6,	// (0x00066360) main_smil2_pane

0x1440,	// (0x000672aa) main_smil_pane

0x1440,	// (0x000672aa) main_video_pane

0x1440,	// (0x000672aa) main_video_tele_pane

0x0751,	// (0x000665bb) main_viewer_pane_ParamLimits

0x0751,	// (0x000665bb) main_viewer_pane

0x1440,	// (0x000672aa) main_vorec_pane

0xa65c,	// (0x000704c6) popup_blid_sat_info_window_ParamLimits

0xa65c,	// (0x000704c6) popup_blid_sat_info_window

0xa67c,	// (0x000704e6) popup_dyc_status_message_window_ParamLimits

0xa67c,	// (0x000704e6) popup_dyc_status_message_window

0xa68c,	// (0x000704f6) popup_grid_large_graphic_window_ParamLimits

0xa68c,	// (0x000704f6) popup_grid_large_graphic_window

0xa71d,	// (0x00070587) popup_loc_request_window_ParamLimits

0xa71d,	// (0x00070587) popup_loc_request_window

0xa76b,	// (0x000705d5) popup_wml_address_window_ParamLimits

0xa76b,	// (0x000705d5) popup_wml_address_window

0xa4f6,	// (0x00070360) call_muted_g1

0xa1b8,	// (0x00070022) popup_call_audio_conf_window_ParamLimits

0xa1b8,	// (0x00070022) popup_call_audio_conf_window

0xa506,	// (0x00070370) popup_call_audio_first_window_ParamLimits

0xa506,	// (0x00070370) popup_call_audio_first_window

0xa546,	// (0x000703b0) popup_call_audio_in_window_ParamLimits

0xa546,	// (0x000703b0) popup_call_audio_in_window

0xa56a,	// (0x000703d4) popup_call_audio_out_window_ParamLimits

0xa56a,	// (0x000703d4) popup_call_audio_out_window

0xa58c,	// (0x000703f6) popup_call_audio_second_window_ParamLimits

0xa58c,	// (0x000703f6) popup_call_audio_second_window

0xa5bc,	// (0x00070426) popup_call_audio_wait_window_ParamLimits

0xa5bc,	// (0x00070426) popup_call_audio_wait_window

0xa5dd,	// (0x00070447) popup_number_entry_window_ParamLimits

0xa5dd,	// (0x00070447) popup_number_entry_window

0x00e3,	// (0x00065f4d) bg_popup_call_pane_cp05_ParamLimits

0x00e3,	// (0x00065f4d) bg_popup_call_pane_cp05

0x0103,	// (0x00065f6d) popup_number_entry_window_t1

0x0116,	// (0x00065f80) popup_number_entry_window_t2

0x0128,	// (0x00065f92) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x00074f42) popup_number_entry_window_t

0x013a,	// (0x00065fa4) text_title_cp2

0x014d,	// (0x00065fb7) bg_popup_call_pane_cp_ParamLimits

0x014d,	// (0x00065fb7) bg_popup_call_pane_cp

0x015b,	// (0x00065fc5) call_thumbnail_pane

0x0163,	// (0x00065fcd) popup_call_audio_in_window_g1_ParamLimits

0x0163,	// (0x00065fcd) popup_call_audio_in_window_g1

0x016f,	// (0x00065fd9) popup_call_audio_in_window_g2_ParamLimits

0x016f,	// (0x00065fd9) popup_call_audio_in_window_g2

0x017b,	// (0x00065fe5) popup_call_audio_in_window_g3_ParamLimits

0x017b,	// (0x00065fe5) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x00074f4b) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x00074f4b) popup_call_audio_in_window_g

0x0187,	// (0x00065ff1) popup_call_audio_in_window_t1_ParamLimits

0x0187,	// (0x00065ff1) popup_call_audio_in_window_t1

0x01a3,	// (0x0006600d) popup_call_audio_in_window_t2_ParamLimits

0x01a3,	// (0x0006600d) popup_call_audio_in_window_t2

0x01bf,	// (0x00066029) popup_call_audio_in_window_t3_ParamLimits

0x01bf,	// (0x00066029) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x00074f52) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x00074f52) popup_call_audio_in_window_t

0x014d,	// (0x00065fb7) bg_popup_call_pane_cp01_ParamLimits

0x014d,	// (0x00065fb7) bg_popup_call_pane_cp01

0x015b,	// (0x00065fc5) call_thumbnail_pane_cp02

0x01d2,	// (0x0006603c) call_type_pane_cp022

0x01da,	// (0x00066044) popup_call_audio_out_window_g1_ParamLimits

0x01da,	// (0x00066044) popup_call_audio_out_window_g1

0x01ec,	// (0x00066056) popup_call_audio_out_window_g2_ParamLimits

0x01ec,	// (0x00066056) popup_call_audio_out_window_g2

0x01f8,	// (0x00066062) popup_call_audio_out_window_g3_ParamLimits

0x01f8,	// (0x00066062) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x00074f59) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x00074f59) popup_call_audio_out_window_g

0x020a,	// (0x00066074) popup_call_audio_out_window_t1_ParamLimits

0x020a,	// (0x00066074) popup_call_audio_out_window_t1

0x0222,	// (0x0006608c) popup_call_audio_out_window_t2_ParamLimits

0x0222,	// (0x0006608c) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x00074f60) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x00074f60) popup_call_audio_out_window_t

0x0237,	// (0x000660a1) bg_popup_call_pane_ParamLimits

0x0237,	// (0x000660a1) bg_popup_call_pane

0x79e1,	// (0x0006d84b) call_thumbnail_pane_cp_ParamLimits

0x79e1,	// (0x0006d84b) call_thumbnail_pane_cp

0x02bb,	// (0x00066125) call_type_pane_cp01_ParamLimits

0x02bb,	// (0x00066125) call_type_pane_cp01

0x02ff,	// (0x00066169) popup_call_audio_first_window_g1_ParamLimits

0x02ff,	// (0x00066169) popup_call_audio_first_window_g1

0x034b,	// (0x000661b5) popup_call_audio_first_window_g2_ParamLimits

0x034b,	// (0x000661b5) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x00074f65) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x00074f65) popup_call_audio_first_window_g

0x038f,	// (0x000661f9) popup_call_audio_first_window_t1_ParamLimits

0x038f,	// (0x000661f9) popup_call_audio_first_window_t1

0x043b,	// (0x000662a5) popup_call_audio_first_window_t4_ParamLimits

0x043b,	// (0x000662a5) popup_call_audio_first_window_t4

0x04c7,	// (0x00066331) popup_call_audio_first_window_t5_ParamLimits

0x04c7,	// (0x00066331) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x00074f6a) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x00074f6a) popup_call_audio_first_window_t

0x04f6,	// (0x00066360) bg_popup_call_pane_cp02

0x0500,	// (0x0006636a) call_type_pane_cp023

0x0508,	// (0x00066372) popup_call_audio_wait_window_g1

0x0510,	// (0x0006637a) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x00074f71) popup_call_audio_wait_window_g

0x0518,	// (0x00066382) popup_call_audio_wait_window_t3

0x0526,	// (0x00066390) bg_popup_call_pane_cp03_ParamLimits

0x0526,	// (0x00066390) bg_popup_call_pane_cp03

0x0586,	// (0x000663f0) call_thumbnail_pane_cp011_ParamLimits

0x0586,	// (0x000663f0) call_thumbnail_pane_cp011

0x0592,	// (0x000663fc) call_type_pane_cp034_ParamLimits

0x0592,	// (0x000663fc) call_type_pane_cp034

0x05ce,	// (0x00066438) popup_call_audio_second_window_g1_ParamLimits

0x05ce,	// (0x00066438) popup_call_audio_second_window_g1

0x060a,	// (0x00066474) popup_call_audio_second_window_g2_ParamLimits

0x060a,	// (0x00066474) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x00074f76) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x00074f76) popup_call_audio_second_window_g

0x0646,	// (0x000664b0) popup_call_audio_second_window_t1_ParamLimits

0x0646,	// (0x000664b0) popup_call_audio_second_window_t1

0x06c7,	// (0x00066531) popup_call_audio_second_window_t2_ParamLimits

0x06c7,	// (0x00066531) popup_call_audio_second_window_t2

0x06fd,	// (0x00066567) popup_call_audio_second_window_t3_ParamLimits

0x06fd,	// (0x00066567) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x00074f7b) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x00074f7b) popup_call_audio_second_window_t

0x04f6,	// (0x00066360) bg_popup_call_pane_cp04

0x0733,	// (0x0006659d) list_conf_pane

0x073b,	// (0x000665a5) popup_call_audio_conf_window_t1

0x0749,	// (0x000665b3) call_thumbnail_pane_g1

0x0751,	// (0x000665bb) bg_pinb_pane_ParamLimits

0x0751,	// (0x000665bb) bg_pinb_pane

0x075f,	// (0x000665c9) find_pinb_pane

0x0768,	// (0x000665d2) listscroll_pinb_pane_ParamLimits

0x0768,	// (0x000665d2) listscroll_pinb_pane

0x0777,	// (0x000665e1) pinb_bg_pane_g1

0x7a05,	// (0x0006d86f) pinb_bg_pane_g2

0x7a11,	// (0x0006d87b) pinb_bg_pane_g3

0x7a1d,	// (0x0006d887) pinb_bg_pane_g4

0x7a29,	// (0x0006d893) pinb_bg_pane_g5

0x7a35,	// (0x0006d89f) pinb_bg_pane_g6

0x7a40,	// (0x0006d8aa) pinb_bg_pane_g7

0x7a4b,	// (0x0006d8b5) pinb_bg_pane_g8

0x7a56,	// (0x0006d8c0) pinb_bg_pane_g9

0x7a60,	// (0x0006d8ca) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x00074f82) pinb_bg_pane_g

0x7a7d,	// (0x0006d8e7) grid_pinb_pane

0x7a88,	// (0x0006d8f2) list_pinb_pane

0x7a93,	// (0x0006d8fd) scroll_pane_cp01_ParamLimits

0x7a93,	// (0x0006d8fd) scroll_pane_cp01

0x0781,	// (0x000665eb) find_pinb_pane_g1_ParamLimits

0x0781,	// (0x000665eb) find_pinb_pane_g1

0x0799,	// (0x00066603) find_pinb_pane_t1

0x07ab,	// (0x00066615) find_pinb_pane_t2

0x0001,

0xf132,	// (0x00074f9c) find_pinb_pane_t

0x07c0,	// (0x0006662a) input_focus_pane_cp01_ParamLimits

0x07c0,	// (0x0006662a) input_focus_pane_cp01

0x7aa5,	// (0x0006d90f) cell_pinb_pane_ParamLimits

0x7aa5,	// (0x0006d90f) cell_pinb_pane

0x7acd,	// (0x0006d937) cell_pinb_pane_g1_ParamLimits

0x7acd,	// (0x0006d937) cell_pinb_pane_g1

0x7ae2,	// (0x0006d94c) cell_pinb_pane_g2_ParamLimits

0x7ae2,	// (0x0006d94c) cell_pinb_pane_g2

0x07cc,	// (0x00066636) cell_pinb_pane_g3_ParamLimits

0x07cc,	// (0x00066636) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x00074fa1) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x00074fa1) cell_pinb_pane_g

0x04f6,	// (0x00066360) grid_highlight_pane_cp01

0x7aee,	// (0x0006d958) list_pinb_item_pane_ParamLimits

0x7aee,	// (0x0006d958) list_pinb_item_pane

0x04f6,	// (0x00066360) list_highlight_pane_cp02

0x7b14,	// (0x0006d97e) list_pinb_item_pane_g1_ParamLimits

0x7b14,	// (0x0006d97e) list_pinb_item_pane_g1

0x7b21,	// (0x0006d98b) list_pinb_item_pane_g2_ParamLimits

0x7b21,	// (0x0006d98b) list_pinb_item_pane_g2

0x7b2d,	// (0x0006d997) list_pinb_item_pane_g3_ParamLimits

0x7b2d,	// (0x0006d997) list_pinb_item_pane_g3

0x7b3e,	// (0x0006d9a8) list_pinb_item_pane_g4_ParamLimits

0x7b3e,	// (0x0006d9a8) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x00074fa8) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x00074fa8) list_pinb_item_pane_g

0x7b4a,	// (0x0006d9b4) list_pinb_item_pane_t1_ParamLimits

0x7b4a,	// (0x0006d9b4) list_pinb_item_pane_t1

0x7b7b,	// (0x0006d9e5) calc_display_pane

0x7b99,	// (0x0006da03) calc_paper_pane

0x7bb5,	// (0x0006da1f) grid_calc_pane

0x04f6,	// (0x00066360) bg_list_pane_cp01

0x7be1,	// (0x0006da4b) clock_g1

0x7be9,	// (0x0006da53) clock_g2

0x0001,

0xf147,	// (0x00074fb1) clock_g

0x7bf3,	// (0x0006da5d) clock_t1_ParamLimits

0x7bf3,	// (0x0006da5d) clock_t1

0x7c08,	// (0x0006da72) clock_t2_ParamLimits

0x7c08,	// (0x0006da72) clock_t2

0x7c1a,	// (0x0006da84) clock_t3_ParamLimits

0x7c1a,	// (0x0006da84) clock_t3

0x7c2c,	// (0x0006da96) clock_t4_ParamLimits

0x7c2c,	// (0x0006da96) clock_t4

0x7c3e,	// (0x0006daa8) clock_t5_ParamLimits

0x7c3e,	// (0x0006daa8) clock_t5

0x7c53,	// (0x0006dabd) clock_t6_ParamLimits

0x7c53,	// (0x0006dabd) clock_t6

0x7c65,	// (0x0006dacf) clock_t7_ParamLimits

0x7c65,	// (0x0006dacf) clock_t7

0x7c77,	// (0x0006dae1) clock_t8_ParamLimits

0x7c77,	// (0x0006dae1) clock_t8

0x7c8d,	// (0x0006daf7) clock_t9_ParamLimits

0x7c8d,	// (0x0006daf7) clock_t9

0x0008,

0xf14c,	// (0x00074fb6) clock_t_ParamLimits

0xf14c,	// (0x00074fb6) clock_t

0x07e0,	// (0x0006664a) popup_clock_analogue_window_cp02

0x07e0,	// (0x0006664a) popup_clock_digital_window_cp01

0x07e8,	// (0x00066652) listscroll_help_pane

0x04f6,	// (0x00066360) phob_pre_status_pane

0x07f2,	// (0x0006665c) grid_qdial_pane

0x04f6,	// (0x00066360) listscroll_mce_pane

0x07fc,	// (0x00066666) bg_notes_pane

0x080a,	// (0x00066674) list_notes_pane

0x7ca3,	// (0x0006db0d) scroll_pane_cp06

0x0818,	// (0x00066682) bg_calc_paper_pane

0x7cb2,	// (0x0006db1c) list_calc_pane

0x0846,	// (0x000666b0) bg_calc_display_pane

0x7ccc,	// (0x0006db36) calc_display_pane_t1

0x7ce1,	// (0x0006db4b) calc_display_pane_t2

0x7cf6,	// (0x0006db60) calc_display_pane_t3

0x0002,

0xf15f,	// (0x00074fc9) calc_display_pane_t

0x7d08,	// (0x0006db72) cell_calc_pane_ParamLimits

0x7d08,	// (0x0006db72) cell_calc_pane

0x0864,	// (0x000666ce) bg_calc_paper_pane_g1

0x087c,	// (0x000666e6) bg_calc_paper_pane_g2

0x0870,	// (0x000666da) bg_calc_paper_pane_g3

0x0894,	// (0x000666fe) bg_calc_paper_pane_g4

0x0888,	// (0x000666f2) bg_calc_paper_pane_g5

0x7d35,	// (0x0006db9f) bg_calc_paper_pane_g6

0x7d46,	// (0x0006dbb0) bg_calc_paper_pane_g7

0x7d57,	// (0x0006dbc1) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x00074fd0) bg_calc_paper_pane_g

0x7d68,	// (0x0006dbd2) calc_bg_paper_pane_g9

0x7d79,	// (0x0006dbe3) list_calc_item_pane_ParamLimits

0x7d79,	// (0x0006dbe3) list_calc_item_pane

0x08a0,	// (0x0006670a) list_calc_item_pane_g1

0x7da8,	// (0x0006dc12) list_calc_item_pane_t1_ParamLimits

0x7da8,	// (0x0006dc12) list_calc_item_pane_t1

0x7dba,	// (0x0006dc24) list_calc_item_pane_t2_ParamLimits

0x7dba,	// (0x0006dc24) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x00074fe1) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x00074fe1) list_calc_item_pane_t

0x08bf,	// (0x00066729) cell_calc_pane_g1

0x08c9,	// (0x00066733) grid_highlight_pane_cp02

0x2dbf,	// (0x00068c29) bg_calc_display_pane_g1

0x7dea,	// (0x0006dc54) bg_calc_display_pane_g2

0x7df4,	// (0x0006dc5e) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x00074feb) bg_calc_display_pane_g

0x7dfd,	// (0x0006dc67) cell_qdial_pane_ParamLimits

0x7dfd,	// (0x0006dc67) cell_qdial_pane

0x7e11,	// (0x0006dc7b) cell_qdial_pane_g1_ParamLimits

0x7e11,	// (0x0006dc7b) cell_qdial_pane_g1

0x7e1e,	// (0x0006dc88) cell_qdial_pane_g2_ParamLimits

0x7e1e,	// (0x0006dc88) cell_qdial_pane_g2

0x08eb,	// (0x00066755) cell_qdial_pane_g3_ParamLimits

0x08eb,	// (0x00066755) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x00074ff2) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x00074ff2) cell_qdial_pane_g

0x7e3c,	// (0x0006dca6) cell_qdial_pane_t1_ParamLimits

0x7e3c,	// (0x0006dca6) cell_qdial_pane_t1

0x7e54,	// (0x0006dcbe) cell_qdial_pane_t2_ParamLimits

0x7e54,	// (0x0006dcbe) cell_qdial_pane_t2

0x7e67,	// (0x0006dcd1) cell_qdial_pane_t3_ParamLimits

0x7e67,	// (0x0006dcd1) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x00074ffb) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x00074ffb) cell_qdial_pane_t

0x04f6,	// (0x00066360) grid_highlight_pane_cp04

0x08f7,	// (0x00066761) thumbnail_qdial_pane_ParamLimits

0x08f7,	// (0x00066761) thumbnail_qdial_pane

0x0953,	// (0x000667bd) list_help_pane

0x095c,	// (0x000667c6) scroll_pane_cp02

0x7e7a,	// (0x0006dce4) help_list_pane_t1_ParamLimits

0x7e7a,	// (0x0006dce4) help_list_pane_t1

0x7ead,	// (0x0006dd17) bg_notes_pane_g2

0x7eb5,	// (0x0006dd1f) bg_notes_pane_g3

0x7ebd,	// (0x0006dd27) notes_bg_pane_g1

0x7ec5,	// (0x0006dd2f) notes_bg_pane_g4

0x7ecd,	// (0x0006dd37) notes_bg_pane_g5

0x7ed5,	// (0x0006dd3f) notes_bg_pane_g6

0x7edd,	// (0x0006dd47) notes_bg_pane_g7

0x7ee5,	// (0x0006dd4f) notes_bg_pane_g8

0x7eed,	// (0x0006dd57) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x00075019) notes_bg_pane_g

0x7ef5,	// (0x0006dd5f) list_notes_text_pane_ParamLimits

0x7ef5,	// (0x0006dd5f) list_notes_text_pane

0x09ad,	// (0x00066817) list_notes_text_pane_g1

0x64e0,	// (0x0006c34a) list_notes_text_pane_t1

0x0846,	// (0x000666b0) listscroll_cale_week_pane

0x7f3a,	// (0x0006dda4) bg_cale_heading_pane

0x09c7,	// (0x00066831) bg_cale_pane_cp01

0x7f56,	// (0x0006ddc0) cale_week_corner_pane

0x7f6c,	// (0x0006ddd6) cale_week_day_heading_pane

0x7f88,	// (0x0006ddf2) cale_week_scroll_pane_g1

0x7fa1,	// (0x0006de0b) cale_week_scroll_pane_g2

0x7fb2,	// (0x0006de1c) cale_week_scroll_pane_g3

0x7fc3,	// (0x0006de2d) cale_week_scroll_pane_g4

0x7fd4,	// (0x0006de3e) cale_week_scroll_pane_g5

0x7fe5,	// (0x0006de4f) cale_week_scroll_pane_g6

0x7ff6,	// (0x0006de60) cale_week_scroll_pane_g7

0x8009,	// (0x0006de73) cale_week_scroll_pane_g8

0x801c,	// (0x0006de86) cale_week_scroll_pane_g9

0x802d,	// (0x0006de97) cale_week_scroll_pane_g10

0x803e,	// (0x0006dea8) cale_week_scroll_pane_g11

0x804f,	// (0x0006deb9) cale_week_scroll_pane_g12

0x8060,	// (0x0006deca) cale_week_scroll_pane_g13

0x8079,	// (0x0006dee3) cale_week_scroll_pane_g14

0x8092,	// (0x0006defc) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x00075028) cale_week_scroll_pane_g

0x80ab,	// (0x0006df15) cale_week_time_pane

0x80be,	// (0x0006df28) grid_cale_week_pane

0x80db,	// (0x0006df45) scroll_pane_cp08

0x80f5,	// (0x0006df5f) cell_cale_week_pane_ParamLimits

0x80f5,	// (0x0006df5f) cell_cale_week_pane

0x8141,	// (0x0006dfab) cale_week_day_heading_pane_t1

0x815a,	// (0x0006dfc4) cale_week_day_heading_pane_t2

0x8173,	// (0x0006dfdd) cale_week_day_heading_pane_t3

0x818c,	// (0x0006dff6) cale_week_day_heading_pane_t4

0x81a5,	// (0x0006e00f) cale_week_day_heading_pane_t5

0x81be,	// (0x0006e028) cale_week_day_heading_pane_t6

0x81d7,	// (0x0006e041) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x00075047) cale_week_day_heading_pane_t

0x09f2,	// (0x0006685c) bg_cale_side_pane

0x81f0,	// (0x0006e05a) cale_week_time_pane_t1

0x8208,	// (0x0006e072) cale_week_time_pane_t2

0x8220,	// (0x0006e08a) cale_week_time_pane_t3

0x8238,	// (0x0006e0a2) cale_week_time_pane_t4

0x8250,	// (0x0006e0ba) cale_week_time_pane_t5

0x8268,	// (0x0006e0d2) cale_week_time_pane_t6

0x8280,	// (0x0006e0ea) cale_week_time_pane_t7

0x82a0,	// (0x0006e10a) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x00075056) cale_week_time_pane_t

0x82c0,	// (0x0006e12a) cell_cale_week_pane_g2

0x82d1,	// (0x0006e13b) cell_cale_week_pane_g3_ParamLimits

0x82d1,	// (0x0006e13b) cell_cale_week_pane_g3

0x0a00,	// (0x0006686a) grid_highlight_pane_cp07

0x0a08,	// (0x00066872) listscroll_gms_pane

0x0a12,	// (0x0006687c) grid_gms_pane

0x0a1b,	// (0x00066885) listscroll_gms_pane_g1

0x0a23,	// (0x0006688d) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x00075067) listscroll_gms_pane_g

0x82e9,	// (0x0006e153) scroll_pane_cp010

0x82f4,	// (0x0006e15e) cell_gms_pane_ParamLimits

0x82f4,	// (0x0006e15e) cell_gms_pane

0x8307,	// (0x0006e171) cell_gms_pane_g1

0x0a2b,	// (0x00066895) cell_gms_pane_g2

0x0a33,	// (0x0006689d) cell_gms_pane_g3

0x0a3c,	// (0x000668a6) cell_gms_pane_g4

0x0003,

0xf202,	// (0x0007506c) cell_gms_pane_g

0x0a45,	// (0x000668af) grid_highlight_pane_cp09

0xa49e,	// (0x00070308) phob_pre_status_pane_g1

0xa4a6,	// (0x00070310) phob_pre_status_pane_g2

0xa4ae,	// (0x00070318) phob_pre_status_pane_g3

0xa4b6,	// (0x00070320) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x0007545b) phob_pre_status_pane_g

0xa4c6,	// (0x00070330) phob_pre_status_pane_t1

0xa4d6,	// (0x00070340) phob_pre_status_pane_t2

0xa4e6,	// (0x00070350) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x00075466) phob_pre_status_pane_t

0x04f6,	// (0x00066360) bg_list_pane_cp05

0x8317,	// (0x0006e181) grid_vorec_pane

0x8323,	// (0x0006e18d) vorec_t1

0x8331,	// (0x0006e19b) vorec_t2

0x833f,	// (0x0006e1a9) vorec_t3

0x834d,	// (0x0006e1b7) vorec_t4

0x835b,	// (0x0006e1c5) vorec_t5

0x8369,	// (0x0006e1d3) vorec_t6

0x0006,

0xf20b,	// (0x00075075) vorec_t

0x8385,	// (0x0006e1ef) wait_bar_pane_cp01

0x838d,	// (0x0006e1f7) cell_vorec_pane_ParamLimits

0x838d,	// (0x0006e1f7) cell_vorec_pane

0x0a5b,	// (0x000668c5) cell_vorec_pane_g1

0x04f6,	// (0x00066360) grid_highlight_pane_cp05

0x83b0,	// (0x0006e21a) cams_zoom_pane

0x83bc,	// (0x0006e226) image_vga_pane

0x83cb,	// (0x0006e235) main_camera_pane_g1

0x83d9,	// (0x0006e243) main_camera_pane_g2

0x83e5,	// (0x0006e24f) main_camera_pane_g3

0x83f1,	// (0x0006e25b) main_camera_pane_g4

0x83fd,	// (0x0006e267) main_camera_pane_g5

0x8409,	// (0x0006e273) main_camera_pane_g6

0x8415,	// (0x0006e27f) main_camera_pane_g7

0x0007,

0xf21a,	// (0x00075084) main_camera_pane_g

0x8421,	// (0x0006e28b) main_camera_pane_t1

0x8433,	// (0x0006e29d) main_camera_pane_t2

0x0001,

0xf22b,	// (0x00075095) main_camera_pane_t

0x8454,	// (0x0006e2be) cams_zoom_pane_cp_ParamLimits

0x8454,	// (0x0006e2be) cams_zoom_pane_cp

0x8478,	// (0x0006e2e2) image_cif_pane_ParamLimits

0x8478,	// (0x0006e2e2) image_cif_pane

0x8496,	// (0x0006e300) image_subqcif_pane

0x849e,	// (0x0006e308) main_video_pane_g1_ParamLimits

0x849e,	// (0x0006e308) main_video_pane_g1

0x84be,	// (0x0006e328) main_video_pane_g2_ParamLimits

0x84be,	// (0x0006e328) main_video_pane_g2

0x84ee,	// (0x0006e358) main_video_pane_g3_ParamLimits

0x84ee,	// (0x0006e358) main_video_pane_g3

0x8517,	// (0x0006e381) main_video_pane_g4_ParamLimits

0x8517,	// (0x0006e381) main_video_pane_g4

0x8540,	// (0x0006e3aa) main_video_pane_g5_ParamLimits

0x8540,	// (0x0006e3aa) main_video_pane_g5

0x0a71,	// (0x000668db) main_video_pane_g6_ParamLimits

0x0a71,	// (0x000668db) main_video_pane_g6

0x0006,

0xf230,	// (0x0007509a) main_video_pane_g_ParamLimits

0xf230,	// (0x0007509a) main_video_pane_g

0x8562,	// (0x0006e3cc) main_video_pane_t1_ParamLimits

0x8562,	// (0x0006e3cc) main_video_pane_t1

0x0a8b,	// (0x000668f5) cams_zoom_pane_g1

0x0a94,	// (0x000668fe) cams_zoom_pane_g2

0x0a9d,	// (0x00066907) cams_zoom_pane_g3

0x0aa6,	// (0x00066910) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x000750a9) cams_zoom_pane_g

0x85ac,	// (0x0006e416) grid_cams_pane

0x85ba,	// (0x0006e424) linegrid_cams_pane

0x85c8,	// (0x0006e432) cell_cams_pane_ParamLimits

0x85c8,	// (0x0006e432) cell_cams_pane

0x0aaf,	// (0x00066919) cams_burst_image_pane

0x0ab7,	// (0x00066921) cell_cams_pane_g1

0x04f6,	// (0x00066360) grid_highlight_pane_cp03

0x08bf,	// (0x00066729) mp_bg_pane_g1

0x04f6,	// (0x00066360) bg_list_pane_cp03

0x27a7,	// (0x00068611) bg_mp_pane

0x27af,	// (0x00068619) grid_mp_pane

0x27b7,	// (0x00068621) media_player_g1

0x27bf,	// (0x00068629) media_player_t1

0x27cd,	// (0x00068637) media_player_t2

0x27db,	// (0x00068645) media_player_t3

0x27e9,	// (0x00068653) media_player_t4

0x27f7,	// (0x00068661) media_player_t5

0x2805,	// (0x0006866f) media_player_t6

0x2813,	// (0x0006867d) media_player_t7

0x0006,

0xf5db,	// (0x00075445) media_player_t

0x2821,	// (0x0006868b) wait_bar_pane_cp02

0xf5c0,	// (0x0007542a) main_usb_pane_t

0xa495,	// (0x000702ff) cell_mp_pane

0x08bf,	// (0x00066729) cell_mp_pane_g1

0x04f6,	// (0x00066360) grid_highlight_pane_cp06

0x0abf,	// (0x00066929) grid_skin_colour_pane

0x0ac7,	// (0x00066931) list_highlight_pane_cp03

0x85db,	// (0x0006e445) skin_g1

0x0acf,	// (0x00066939) skin_t1

0x0ade,	// (0x00066948) skin_t2

0x0001,

0xf274,	// (0x000750de) skin_t

0x85e5,	// (0x0006e44f) cell_skin_colour_pane_ParamLimits

0x85e5,	// (0x0006e44f) cell_skin_colour_pane

0x0aec,	// (0x00066956) cell_skin_colour_pane_g1

0x8669,	// (0x0006e4d3) call_video_g1_ParamLimits

0x8669,	// (0x0006e4d3) call_video_g1

0x8679,	// (0x0006e4e3) call_video_g2_ParamLimits

0x8679,	// (0x0006e4e3) call_video_g2

0x0001,

0xf279,	// (0x000750e3) call_video_g_ParamLimits

0xf279,	// (0x000750e3) call_video_g

0x86d3,	// (0x0006e53d) call_video_uplink_pane_cp1_ParamLimits

0x86d3,	// (0x0006e53d) call_video_uplink_pane_cp1

0x0afe,	// (0x00066968) call_video_uplink_pane_cp2

0x879f,	// (0x0006e609) video_down_crop_pane_ParamLimits

0x879f,	// (0x0006e609) video_down_crop_pane

0x889d,	// (0x0006e707) video_down_pane_ParamLimits

0x889d,	// (0x0006e707) video_down_pane

0x0b06,	// (0x00066970) video_down_subqcif_pane_ParamLimits

0x0b06,	// (0x00066970) video_down_subqcif_pane

0x0b1e,	// (0x00066988) video_down_subqcif_pane_cp_ParamLimits

0x0b1e,	// (0x00066988) video_down_subqcif_pane_cp

0x0b44,	// (0x000669ae) im_reading_pane_ParamLimits

0x0b44,	// (0x000669ae) im_reading_pane

0x89bf,	// (0x0006e829) im_writing_pane_ParamLimits

0x89bf,	// (0x0006e829) im_writing_pane

0x89dd,	// (0x0006e847) im_reading_pane_t1

0x0b5e,	// (0x000669c8) list_im_pane

0x0b6f,	// (0x000669d9) scroll_pane_cp07

0x8a31,	// (0x0006e89b) im_writing_pane_t1_ParamLimits

0x8a31,	// (0x0006e89b) im_writing_pane_t1

0x0b88,	// (0x000669f2) im_writing_pane_t2_ParamLimits

0x0b88,	// (0x000669f2) im_writing_pane_t2

0x0001,

0xf283,	// (0x000750ed) im_writing_pane_t_ParamLimits

0xf283,	// (0x000750ed) im_writing_pane_t

0x04f6,	// (0x00066360) input_focus_pane_cp04

0x04f6,	// (0x00066360) input_focus_pane_cp05

0x8a46,	// (0x0006e8b0) list_im_single_pane_ParamLimits

0x8a46,	// (0x0006e8b0) list_im_single_pane

0x8a6a,	// (0x0006e8d4) list_single_im_pane_t1

0xa459,	// (0x000702c3) blid_accuracy_pane

0xa461,	// (0x000702cb) blid_compass_pane

0xa46b,	// (0x000702d5) main_location_t1

0xa479,	// (0x000702e3) main_location_t2

0xa487,	// (0x000702f1) main_location_t3

0x0002,

0xf5ea,	// (0x00075454) main_location_t

0x04f6,	// (0x00066360) aid_levels_location

0x08bf,	// (0x00066729) blid_accuracy_pane_g1

0x08bf,	// (0x00066729) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x0007514f) blid_accuracy_pane_g

0x0bd0,	// (0x00066a3a) wml_content_pane

0x0c0e,	// (0x00066a78) wml_button_pane_ParamLimits

0x0c0e,	// (0x00066a78) wml_button_pane

0x8a79,	// (0x0006e8e3) wml_list_single_large_pane_ParamLimits

0x8a79,	// (0x0006e8e3) wml_list_single_large_pane

0x8aa3,	// (0x0006e90d) wml_list_single_medium_pane_ParamLimits

0x8aa3,	// (0x0006e90d) wml_list_single_medium_pane

0x8ad4,	// (0x0006e93e) wml_list_single_small_pane_ParamLimits

0x8ad4,	// (0x0006e93e) wml_list_single_small_pane

0x0c22,	// (0x00066a8c) wml_selection_box_pane_ParamLimits

0x0c22,	// (0x00066a8c) wml_selection_box_pane

0x0c35,	// (0x00066a9f) wml_list_single_pane_t1

0x0c44,	// (0x00066aae) wml_list_single_medium_pane_t1

0x0c53,	// (0x00066abd) wml_list_single_large_pane_t1

0x0c62,	// (0x00066acc) input_focus_pane_cp02_ParamLimits

0x0c62,	// (0x00066acc) input_focus_pane_cp02

0x0c75,	// (0x00066adf) wml_selection_box_pane_g1

0x0c7e,	// (0x00066ae8) wml_selection_box_pane_t1_ParamLimits

0x0c7e,	// (0x00066ae8) wml_selection_box_pane_t1

0x0751,	// (0x000665bb) bg_wml_button_pane_ParamLimits

0x0751,	// (0x000665bb) bg_wml_button_pane

0x0c96,	// (0x00066b00) wml_button_pane_g1

0x0c9e,	// (0x00066b08) wml_button_pane_t1

0x0c96,	// (0x00066b00) wml_button_bg_pane_g1

0x0cae,	// (0x00066b18) wml_button_bg_pane_g2

0x0cb6,	// (0x00066b20) wml_button_bg_pane_g3

0x0cbe,	// (0x00066b28) wml_button_bg_pane_g4

0x0cc6,	// (0x00066b30) wml_button_bg_pane_g5

0x0cce,	// (0x00066b38) wml_button_bg_pane_g6

0x0cd6,	// (0x00066b40) wml_button_bg_pane_g7

0x0cde,	// (0x00066b48) wml_button_bg_pane_g8

0x0ce6,	// (0x00066b50) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x000750f2) wml_button_bg_pane_g

0x8b0e,	// (0x0006e978) bg_list_pane_cp02

0x0cee,	// (0x00066b58) mce_header_pane_ParamLimits

0x0cee,	// (0x00066b58) mce_header_pane

0x0d04,	// (0x00066b6e) mce_icon_pane

0x0d04,	// (0x00066b6e) mce_image_pane

0x0d0d,	// (0x00066b77) mce_text_pane_ParamLimits

0x0d0d,	// (0x00066b77) mce_text_pane

0x8b18,	// (0x0006e982) scroll_pane_cp03

0x0c06,	// (0x00066a70) scroll_pane_cp04

0x0d20,	// (0x00066b8a) scroll_pane_cp05_ParamLimits

0x0d20,	// (0x00066b8a) scroll_pane_cp05

0x8b22,	// (0x0006e98c) mce_header_field_pane_ParamLimits

0x8b22,	// (0x0006e98c) mce_header_field_pane

0x8b42,	// (0x0006e9ac) mce_header_field_pane_2_ParamLimits

0x8b42,	// (0x0006e9ac) mce_header_field_pane_2

0x8b58,	// (0x0006e9c2) mce_header_field_pane_3

0x8b60,	// (0x0006e9ca) list_single_mce_message_pane_ParamLimits

0x8b60,	// (0x0006e9ca) list_single_mce_message_pane

0x8b85,	// (0x0006e9ef) list_single_mce_smart_pane_ParamLimits

0x8b85,	// (0x0006e9ef) list_single_mce_smart_pane

0x0d2c,	// (0x00066b96) input_focus_pane_cp03

0x0d35,	// (0x00066b9f) list_header_data_pane

0x8bb5,	// (0x0006ea1f) mce_header_field_pane_t1

0x8bc3,	// (0x0006ea2d) list_single_mce_header_pane_ParamLimits

0x8bc3,	// (0x0006ea2d) list_single_mce_header_pane

0x0d3d,	// (0x00066ba7) list_single_mce_header_pane_t1

0x0d4c,	// (0x00066bb6) list_single_mce_message_pane_g1

0x0d54,	// (0x00066bbe) list_single_mce_message_pane_t1

0x8c07,	// (0x0006ea71) bg_cale_heading_pane_cp01_ParamLimits

0x8c07,	// (0x0006ea71) bg_cale_heading_pane_cp01

0x0d62,	// (0x00066bcc) bg_cale_pane_cp02_ParamLimits

0x0d62,	// (0x00066bcc) bg_cale_pane_cp02

0x8c3a,	// (0x0006eaa4) cale_month_corner_pane

0x8c50,	// (0x0006eaba) cale_month_day_heading_pane_ParamLimits

0x8c50,	// (0x0006eaba) cale_month_day_heading_pane

0x8c93,	// (0x0006eafd) cale_month_pane_g1_ParamLimits

0x8c93,	// (0x0006eafd) cale_month_pane_g1

0x8cbf,	// (0x0006eb29) cale_month_pane_g2_ParamLimits

0x8cbf,	// (0x0006eb29) cale_month_pane_g2

0x8ce2,	// (0x0006eb4c) cale_month_pane_g3_ParamLimits

0x8ce2,	// (0x0006eb4c) cale_month_pane_g3

0x8d1e,	// (0x0006eb88) cale_month_pane_g4_ParamLimits

0x8d1e,	// (0x0006eb88) cale_month_pane_g4

0x8d5a,	// (0x0006ebc4) cale_month_pane_g5_ParamLimits

0x8d5a,	// (0x0006ebc4) cale_month_pane_g5

0x8d96,	// (0x0006ec00) cale_month_pane_g6_ParamLimits

0x8d96,	// (0x0006ec00) cale_month_pane_g6

0x8dd2,	// (0x0006ec3c) cale_month_pane_g7_ParamLimits

0x8dd2,	// (0x0006ec3c) cale_month_pane_g7

0x8e1e,	// (0x0006ec88) cale_month_pane_g8_ParamLimits

0x8e1e,	// (0x0006ec88) cale_month_pane_g8

0x8e6a,	// (0x0006ecd4) cale_month_pane_g9_ParamLimits

0x8e6a,	// (0x0006ecd4) cale_month_pane_g9

0x8eb0,	// (0x0006ed1a) cale_month_pane_g10_ParamLimits

0x8eb0,	// (0x0006ed1a) cale_month_pane_g10

0x8eea,	// (0x0006ed54) cale_month_pane_g11_ParamLimits

0x8eea,	// (0x0006ed54) cale_month_pane_g11

0x8f28,	// (0x0006ed92) cale_month_pane_g12_ParamLimits

0x8f28,	// (0x0006ed92) cale_month_pane_g12

0x8f66,	// (0x0006edd0) cale_month_pane_g13_ParamLimits

0x8f66,	// (0x0006edd0) cale_month_pane_g13

0x000c,

0xf29b,	// (0x00075105) cale_month_pane_g_ParamLimits

0xf29b,	// (0x00075105) cale_month_pane_g

0x8fa4,	// (0x0006ee0e) cale_month_week_pane

0x8fb7,	// (0x0006ee21) grid_cale_month_pane_ParamLimits

0x8fb7,	// (0x0006ee21) grid_cale_month_pane

0x8ff5,	// (0x0006ee5f) cale_month_day_heading_pane_t1

0x9053,	// (0x0006eebd) cale_month_day_heading_pane_t2

0x90b8,	// (0x0006ef22) cale_month_day_heading_pane_t3

0x911d,	// (0x0006ef87) cale_month_day_heading_pane_t4

0x9182,	// (0x0006efec) cale_month_day_heading_pane_t5

0x91e7,	// (0x0006f051) cale_month_day_heading_pane_t6

0x924c,	// (0x0006f0b6) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x00075120) cale_month_day_heading_pane_t

0x09f2,	// (0x0006685c) bg_cale_side_pane_cp01

0x92c1,	// (0x0006f12b) cale_month_week_pane_t1

0x92d8,	// (0x0006f142) cale_month_week_pane_t2

0x92ef,	// (0x0006f159) cale_month_week_pane_t3

0x9306,	// (0x0006f170) cale_month_week_pane_t4

0x931d,	// (0x0006f187) cale_month_week_pane_t5

0x9338,	// (0x0006f1a2) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x0007512f) cale_month_week_pane_t

0x9357,	// (0x0006f1c1) cell_cale_month_pane_ParamLimits

0x9357,	// (0x0006f1c1) cell_cale_month_pane

0x941d,	// (0x0006f287) cell_cale_month_pane_g1

0x9429,	// (0x0006f293) cell_cale_month_pane_t1_ParamLimits

0x9429,	// (0x0006f293) cell_cale_month_pane_t1

0x0a00,	// (0x0006686a) grid_highlight_pane_cp08

0x08bf,	// (0x00066729) main_smil_g1

0x9445,	// (0x0006f2af) smil_status_pane

0x0da3,	// (0x00066c0d) smil_text_pane

0x26c7,	// (0x00068531) bg_popup_call3_rect_pane_g8

0x26cf,	// (0x00068539) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x000753e8) bg_popup_call3_rect_pane_g

0x296a,	// (0x000687d4) smil_status_volume_pane_g1

0x0dad,	// (0x00066c17) smil_status_pane_t1

0xa87e,	// (0x000706e8) volume_smil_pane

0x0dc4,	// (0x00066c2e) list_smil_text_pane

0x9458,	// (0x0006f2c2) scroll_pane_cp011

0x9463,	// (0x0006f2cd) smil_text_list_pane_t1_ParamLimits

0x9463,	// (0x0006f2cd) smil_text_list_pane_t1

0x94db,	// (0x0006f345) aid_volume_smil_ParamLimits

0x94db,	// (0x0006f345) aid_volume_smil

0x08bf,	// (0x00066729) smil_volume_pane_g1

0x08bf,	// (0x00066729) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x0007514f) smil_volume_pane_g

0x0846,	// (0x000666b0) listscroll_cale_day_pane

0x0df0,	// (0x00066c5a) bg_cale_pane

0x0e08,	// (0x00066c72) list_cale_pane

0x0e19,	// (0x00066c83) scroll_pane_cp09

0x0e2a,	// (0x00066c94) cale_bg_pane_g1

0x0e32,	// (0x00066c9c) cale_bg_pane_g2

0x0e3a,	// (0x00066ca4) cale_bg_pane_g3

0x0e42,	// (0x00066cac) cale_bg_pane_g4

0x0e4a,	// (0x00066cb4) cale_bg_pane_g5

0x0e52,	// (0x00066cbc) cale_bg_pane_g6

0x0e5a,	// (0x00066cc4) cale_bg_pane_g7

0x0e62,	// (0x00066ccc) cale_bg_pane_g8

0x0e6a,	// (0x00066cd4) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x00075154) cale_bg_pane_g

0x94fd,	// (0x0006f367) list_cale_time_pane_ParamLimits

0x94fd,	// (0x0006f367) list_cale_time_pane

0x0e72,	// (0x00066cdc) list_cale_time_pane_g1_ParamLimits

0x0e72,	// (0x00066cdc) list_cale_time_pane_g1

0x0e7e,	// (0x00066ce8) list_cale_time_pane_g2_ParamLimits

0x0e7e,	// (0x00066ce8) list_cale_time_pane_g2

0x9519,	// (0x0006f383) list_cale_time_pane_g3_ParamLimits

0x9519,	// (0x0006f383) list_cale_time_pane_g3

0x9527,	// (0x0006f391) list_cale_time_pane_g4_ParamLimits

0x9527,	// (0x0006f391) list_cale_time_pane_g4

0x9535,	// (0x0006f39f) list_cale_time_pane_g5_ParamLimits

0x9535,	// (0x0006f39f) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x00075167) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x00075167) list_cale_time_pane_g

0x0e98,	// (0x00066d02) list_cale_time_pane_t1_ParamLimits

0x0e98,	// (0x00066d02) list_cale_time_pane_t1

0x0ec0,	// (0x00066d2a) list_cale_time_pane_t2_ParamLimits

0x0ec0,	// (0x00066d2a) list_cale_time_pane_t2

0x980c,	// (0x0006f676) aid_blid_cardinal_pane

0x984e,	// (0x0006f6b8) compass_pane_t4

0x0ee8,	// (0x00066d52) list_cale_time_pane_t4_ParamLimits

0x0ee8,	// (0x00066d52) list_cale_time_pane_t4

0x985c,	// (0x0006f6c6) compass_pane_t5

0x986c,	// (0x0006f6d6) compass_pane_t6

0x987a,	// (0x0006f6e4) compass_pane_t7

0x1392,	// (0x000671fc) navi_pane_cc_t1

0x14f9,	// (0x00067363) aid_phob_thumbnail_center_pane

0x9f5f,	// (0x0006fdc9) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x00075174) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x00075174) list_cale_time_pane_t

0x014d,	// (0x00065fb7) bg_popup_window_pane_cp02_ParamLimits

0x014d,	// (0x00065fb7) bg_popup_window_pane_cp02

0x0f10,	// (0x00066d7a) heading_pane_cp01_ParamLimits

0x0f10,	// (0x00066d7a) heading_pane_cp01

0x0f1c,	// (0x00066d86) loc_req_pane_ParamLimits

0x0f1c,	// (0x00066d86) loc_req_pane

0x0f2c,	// (0x00066d96) loc_type_pane_ParamLimits

0x0f2c,	// (0x00066d96) loc_type_pane

0x0f3e,	// (0x00066da8) loc_type_pane_t1_ParamLimits

0x0f3e,	// (0x00066da8) loc_type_pane_t1

0x0f50,	// (0x00066dba) loc_type_pane_t2_ParamLimits

0x0f50,	// (0x00066dba) loc_type_pane_t2

0x0f62,	// (0x00066dcc) loc_type_pane_t3_ParamLimits

0x0f62,	// (0x00066dcc) loc_type_pane_t3

0x0002,

0xf311,	// (0x0007517b) loc_type_pane_t_ParamLimits

0xf311,	// (0x0007517b) loc_type_pane_t

0x0f74,	// (0x00066dde) list_loc_req_pane

0x0f7e,	// (0x00066de8) scroll_pane_cp012

0x9543,	// (0x0006f3ad) list_single_loc_request_popup_menu_pane_ParamLimits

0x9543,	// (0x0006f3ad) list_single_loc_request_popup_menu_pane

0x0f89,	// (0x00066df3) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0f89,	// (0x00066df3) list_single_loc_request_popup_menu_pane_g1

0x0f95,	// (0x00066dff) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0f95,	// (0x00066dff) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x00075182) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x00075182) list_single_loc_request_popup_menu_pane_g

0x0fa1,	// (0x00066e0b) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0fa1,	// (0x00066e0b) list_single_loc_request_popup_menu_pane_t1

0x9555,	// (0x0006f3bf) bg_popup_window_pane_cp03_ParamLimits

0x9555,	// (0x0006f3bf) bg_popup_window_pane_cp03

0x9563,	// (0x0006f3cd) heading_loc_req_pane_ParamLimits

0x9563,	// (0x0006f3cd) heading_loc_req_pane

0x956f,	// (0x0006f3d9) popup_dyc_status_message_window_g1_ParamLimits

0x956f,	// (0x0006f3d9) popup_dyc_status_message_window_g1

0x957b,	// (0x0006f3e5) popup_dyc_status_message_window_t1_ParamLimits

0x957b,	// (0x0006f3e5) popup_dyc_status_message_window_t1

0x958d,	// (0x0006f3f7) popup_dyc_status_message_window_t2_ParamLimits

0x958d,	// (0x0006f3f7) popup_dyc_status_message_window_t2

0x959f,	// (0x0006f409) popup_dyc_status_message_window_t3_ParamLimits

0x959f,	// (0x0006f409) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x00075187) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x00075187) popup_dyc_status_message_window_t

0x04f6,	// (0x00066360) bg_heading_pane_cp01

0x0fc3,	// (0x00066e2d) heading_loc_req_pane_g1

0x0fcb,	// (0x00066e35) heading_loc_req_pane_g2

0x0fd3,	// (0x00066e3d) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x0007518e) heading_loc_req_pane_g

0x0fdb,	// (0x00066e45) heading_loc_req_pane_t1

0x0fea,	// (0x00066e54) bg_popup_sub_pane_cp01_ParamLimits

0x0fea,	// (0x00066e54) bg_popup_sub_pane_cp01

0x0ff8,	// (0x00066e62) popup_cale_events_window_g1_ParamLimits

0x0ff8,	// (0x00066e62) popup_cale_events_window_g1

0x1018,	// (0x00066e82) popup_cale_events_window_g2_ParamLimits

0x1018,	// (0x00066e82) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x000751c2) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x000751c2) popup_cale_events_window_g

0x1038,	// (0x00066ea2) popup_cale_events_window_t1_ParamLimits

0x1038,	// (0x00066ea2) popup_cale_events_window_t1

0x104a,	// (0x00066eb4) popup_cale_events_window_t2_ParamLimits

0x104a,	// (0x00066eb4) popup_cale_events_window_t2

0x1088,	// (0x00066ef2) popup_cale_events_window_t3_ParamLimits

0x1088,	// (0x00066ef2) popup_cale_events_window_t3

0x10c2,	// (0x00066f2c) popup_cale_events_window_t4_ParamLimits

0x10c2,	// (0x00066f2c) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x000751c7) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x000751c7) popup_cale_events_window_t

0x95c9,	// (0x0006f433) call_type_pane

0x1511,	// (0x0006737b) popup_call_status_window_g1

0x95d5,	// (0x0006f43f) popup_call_status_window_g2

0x95e1,	// (0x0006f44b) popup_call_status_window_g3

0x0002,

0xf366,	// (0x000751d0) popup_call_status_window_g

0x10f8,	// (0x00066f62) call_type_pane_g1

0x1101,	// (0x00066f6b) call_type_pane_g2

0x0001,

0xf36d,	// (0x000751d7) call_type_pane_g

0x04f6,	// (0x00066360) bg_popup_sub_pane_cp02

0x110a,	// (0x00066f74) listscroll_popup_wml_pane

0x1112,	// (0x00066f7c) list_wml_pane

0x111c,	// (0x00066f86) scroll_pane_cp013

0x1127,	// (0x00066f91) list_single_graphic_popup_wml_pane_ParamLimits

0x1127,	// (0x00066f91) list_single_graphic_popup_wml_pane

0x08bf,	// (0x00066729) list_single_graphic_popup_wml_pane_g1

0x113b,	// (0x00066fa5) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x000751dc) list_single_graphic_popup_wml_pane_g

0x1143,	// (0x00066fad) list_single_graphic_popup_wml_pane_t1

0x1151,	// (0x00066fbb) aid_call_pane

0x0749,	// (0x000665b3) popup_clock_analogue_window_g1

0x0749,	// (0x000665b3) popup_clock_analogue_window_g2

0x95ed,	// (0x0006f457) popup_clock_analogue_window_g3

0x95ed,	// (0x0006f457) popup_clock_analogue_window_g4

0x08bf,	// (0x00066729) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x000751e1) popup_clock_analogue_window_g

0x95f5,	// (0x0006f45f) popup_clock_analogue_window_t1

0x9603,	// (0x0006f46d) clock_digital_number_pane_ParamLimits

0x9603,	// (0x0006f46d) clock_digital_number_pane

0x960f,	// (0x0006f479) clock_digital_number_pane_cp02_ParamLimits

0x960f,	// (0x0006f479) clock_digital_number_pane_cp02

0x961b,	// (0x0006f485) clock_digital_number_pane_cp03_ParamLimits

0x961b,	// (0x0006f485) clock_digital_number_pane_cp03

0x9627,	// (0x0006f491) clock_digital_number_pane_cp04_ParamLimits

0x9627,	// (0x0006f491) clock_digital_number_pane_cp04

0x9637,	// (0x0006f4a1) clock_digital_separator_pane_ParamLimits

0x9637,	// (0x0006f4a1) clock_digital_separator_pane

0x9643,	// (0x0006f4ad) popup_clock_digital_window_t1

0x08bf,	// (0x00066729) clock_digital_number_pane_g1

0x08bf,	// (0x00066729) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x0007514f) clock_digital_number_pane_g

0x08bf,	// (0x00066729) clock_digital_separator_pane_g1

0x08bf,	// (0x00066729) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x0007514f) clock_digital_separator_pane_g

0x04f6,	// (0x00066360) bg_popup_window_pane_cp04

0x11d4,	// (0x0006703e) heading_pane_cp03

0x11dc,	// (0x00067046) listscroll_popup_gms_pane

0x11e4,	// (0x0006704e) grid_large_graphic_popup_pane

0x11ee,	// (0x00067058) listscroll_popup_gms_pane_g1

0x11f6,	// (0x00067060) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x000751ec) listscroll_popup_gms_pane_g

0x0c06,	// (0x00066a70) scroll_pane_cp014

0x9660,	// (0x0006f4ca) cell_large_graphic_popup_pane_ParamLimits

0x9660,	// (0x0006f4ca) cell_large_graphic_popup_pane

0x9678,	// (0x0006f4e2) cell_large_graphic_popup_pane_g1_ParamLimits

0x9678,	// (0x0006f4e2) cell_large_graphic_popup_pane_g1

0x11fe,	// (0x00067068) cell_large_graphic_popup_pane_g2_ParamLimits

0x11fe,	// (0x00067068) cell_large_graphic_popup_pane_g2

0x120a,	// (0x00067074) cell_large_graphic_popup_pane_g3_ParamLimits

0x120a,	// (0x00067074) cell_large_graphic_popup_pane_g3

0x1217,	// (0x00067081) cell_large_graphic_popup_pane_g4_ParamLimits

0x1217,	// (0x00067081) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x000751f1) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x000751f1) cell_large_graphic_popup_pane_g

0x1227,	// (0x00067091) grid_highlight_pane_cp010

0x08bf,	// (0x00066729) bg_popup_call_pane_g1

0x1231,	// (0x0006709b) list_single_graphic_popup_conf_pane_ParamLimits

0x1231,	// (0x0006709b) list_single_graphic_popup_conf_pane

0x1244,	// (0x000670ae) list_highlight_pane_cp01

0x124d,	// (0x000670b7) list_single_graphic_popup_conf_pane_g1

0x1255,	// (0x000670bf) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x000751fa) list_single_graphic_popup_conf_pane_g

0x125d,	// (0x000670c7) list_single_graphic_popup_conf_pane_t1

0x126b,	// (0x000670d5) linegrid_cams_pane_g1

0x9684,	// (0x0006f4ee) linegrid_cams_pane_g2

0x0a33,	// (0x0006689d) linegrid_cams_pane_g3

0x1274,	// (0x000670de) linegrid_cams_pane_g4

0x968d,	// (0x0006f4f7) linegrid_cams_pane_g5

0x9696,	// (0x0006f500) linegrid_cams_pane_g6

0x0a3c,	// (0x000668a6) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x000751ff) linegrid_cams_pane_g

0x127d,	// (0x000670e7) popup_clock_analogue_window

0x127d,	// (0x000670e7) popup_clock_digital_window

0x04f6,	// (0x00066360) popup_phob_thumbnail_window

0x08bf,	// (0x00066729) call_video_uplink_pane_g1

0x1286,	// (0x000670f0) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x0007520e) call_video_uplink_pane_g

0x128e,	// (0x000670f8) video_uplink_pane

0x1296,	// (0x00067100) mce_image_pane_g1

0x969f,	// (0x0006f509) mce_image_pane_g2

0x96a9,	// (0x0006f513) mce_image_pane_g3

0x96b1,	// (0x0006f51b) mce_image_pane_g4

0x96b9,	// (0x0006f523) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x00075213) mce_image_pane_g

0x12a0,	// (0x0006710a) control_top_pane_stacon_cp01_ParamLimits

0x12a0,	// (0x0006710a) control_top_pane_stacon_cp01

0x12b4,	// (0x0006711e) uni_indicator_pane_stacon_cp01_ParamLimits

0x12b4,	// (0x0006711e) uni_indicator_pane_stacon_cp01

0x12c5,	// (0x0006712f) bg_popup_sub_pane_cp03

0x96c1,	// (0x0006f52b) chi_dic_find_pane

0x96c9,	// (0x0006f533) listscroll_chi_dic_pane

0x96d2,	// (0x0006f53c) main_pane_chidic_g1

0x12cf,	// (0x00067139) chi_dic_find_pane_t1

0x12dd,	// (0x00067147) find_chidic_pane

0x12e6,	// (0x00067150) chi_dic_list_pane_ParamLimits

0x12e6,	// (0x00067150) chi_dic_list_pane

0x12f7,	// (0x00067161) scroll_pane_cp020

0x12ff,	// (0x00067169) find_chidic_pane_t1

0x04f6,	// (0x00066360) input_focus_pane_cp06

0x96e5,	// (0x0006f54f) list_chi_dic_pane_ParamLimits

0x96e5,	// (0x0006f54f) list_chi_dic_pane

0x96ff,	// (0x0006f569) list_chi_dic_pane_t1_ParamLimits

0x96ff,	// (0x0006f569) list_chi_dic_pane_t1

0x04f6,	// (0x00066360) list_highlight_pane_cp020

0x130e,	// (0x00067178) bg_cale_heading_pane_g1

0x9712,	// (0x0006f57c) bg_cale_heading_pane_g2

0x971a,	// (0x0006f584) bg_cale_heading_pane_g3

0x9722,	// (0x0006f58c) bg_cale_heading_pane_g4

0x972c,	// (0x0006f596) bg_cale_heading_pane_g5

0x9736,	// (0x0006f5a0) bg_cale_heading_pane_g6

0x973e,	// (0x0006f5a8) bg_cale_heading_pane_g7

0x9746,	// (0x0006f5b0) bg_cale_heading_pane_g8

0x9750,	// (0x0006f5ba) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x0007521e) bg_cale_heading_pane_g

0x130e,	// (0x00067178) bg_cale_side_pane_g1

0x975a,	// (0x0006f5c4) bg_cale_side_pane_g2

0x9764,	// (0x0006f5ce) bg_cale_side_pane_g3

0x976e,	// (0x0006f5d8) bg_cale_side_pane_g4

0x9778,	// (0x0006f5e2) bg_cale_side_pane_g5

0x9782,	// (0x0006f5ec) bg_cale_side_pane_g6

0x978c,	// (0x0006f5f6) bg_cale_side_pane_g7

0x9796,	// (0x0006f600) bg_cale_side_pane_g8

0x979e,	// (0x0006f608) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x00075231) bg_cale_side_pane_g

0x97a6,	// (0x0006f610) popup_call_status_window_ParamLimits

0x97a6,	// (0x0006f610) popup_call_status_window

0x1316,	// (0x00067180) stacon_top_pane

0x131e,	// (0x00067188) status_pane_ParamLimits

0x131e,	// (0x00067188) status_pane

0x1333,	// (0x0006719d) status_small_pane

0x133b,	// (0x000671a5) control_pane

0x04f6,	// (0x00066360) stacon_bottom_pane

0x1343,	// (0x000671ad) list_single_mce_smart_pane_t1_ParamLimits

0x1343,	// (0x000671ad) list_single_mce_smart_pane_t1

0x1356,	// (0x000671c0) list_single_mce_smart_pane_t2_ParamLimits

0x1356,	// (0x000671c0) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x00075244) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x00075244) list_single_mce_smart_pane_t

0x97b2,	// (0x0006f61c) compass_pane

0x97be,	// (0x0006f628) main_location2_pane_t1

0x97d2,	// (0x0006f63c) main_location2_pane_t2

0x97e6,	// (0x0006f650) main_location2_pane_t3

0x0003,

0xf3df,	// (0x00075249) main_location2_pane_t

0x1375,	// (0x000671df) compass_pane_g1_ParamLimits

0x1375,	// (0x000671df) compass_pane_g1

0x9830,	// (0x0006f69a) compass_pane_t1

0x983f,	// (0x0006f6a9) compass_pane_t2

0x0005,

0xf3e8,	// (0x00075252) compass_pane_t

0x988a,	// (0x0006f6f4) text_secondary_cp61

0x1389,	// (0x000671f3) navi_pane_cams_g5

0x13ac,	// (0x00067216) navi_pane_im_t1

0x13ba,	// (0x00067224) navi_pane_mp_g1_ParamLimits

0x13ba,	// (0x00067224) navi_pane_mp_g1

0x13ce,	// (0x00067238) navi_pane_mp_g2_ParamLimits

0x13ce,	// (0x00067238) navi_pane_mp_g2

0x13da,	// (0x00067244) navi_pane_mp_g3_ParamLimits

0x13da,	// (0x00067244) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x00075266) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x00075266) navi_pane_mp_g

0x13e6,	// (0x00067250) navi_pane_mp_t1

0x13f4,	// (0x0006725e) navi_pane_mp_t2

0x0002,

0xf403,	// (0x0007526d) navi_pane_mp_t

0x1430,	// (0x0006729a) navi_pane_vt_g1

0x13e6,	// (0x00067250) navi_pane_vt_t1

0x1438,	// (0x000672a2) navi_slider_pane

0x1440,	// (0x000672aa) zooming_pane

0x1448,	// (0x000672b2) navi_slider_pane_g1

0x99b5,	// (0x0006f81f) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x00075274) navi_slider_pane_g

0x147e,	// (0x000672e8) aid_levels_zoom

0x1486,	// (0x000672f0) zooming_pane_g1

0x148e,	// (0x000672f8) zooming_pane_g2

0x148e,	// (0x000672f8) zooming_pane_g3

0x0002,

0xf419,	// (0x00075283) zooming_pane_g

0x1496,	// (0x00067300) level_10_zoom

0x149f,	// (0x00067309) level_11_zoom

0x14a8,	// (0x00067312) level_1_zoom

0x14b1,	// (0x0006731b) level_2_zoom

0x14ba,	// (0x00067324) level_3_zoom

0x14c3,	// (0x0006732d) level_4_zoom

0x14cc,	// (0x00067336) level_5_zoom

0x14d5,	// (0x0006733f) level_6_zoom

0x14de,	// (0x00067348) level_7_zoom

0x14e7,	// (0x00067351) level_8_zoom

0x14f0,	// (0x0006735a) level_9_zoom

0x1501,	// (0x0006736b) popup_phob_thumbnail_window_g1

0x1509,	// (0x00067373) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x0007528a) popup_phob_thumbnail_window_g

0x2829,	// (0x00068693) level_1_location

0x2831,	// (0x0006869b) level_2_location

0x2839,	// (0x000686a3) level_3_location

0x2841,	// (0x000686ab) level_4_location

0x1440,	// (0x000672aa) level_5_location

0x99c7,	// (0x0006f831) mce_icon_pane_g1

0x99cf,	// (0x0006f839) mce_icon_pane_g2

0x0001,

0xf425,	// (0x0007528f) mce_icon_pane_g

0x99d7,	// (0x0006f841) main_mup_pane_g1_ParamLimits

0x99d7,	// (0x0006f841) main_mup_pane_g1

0x99ef,	// (0x0006f859) main_mup_pane_g2_ParamLimits

0x99ef,	// (0x0006f859) main_mup_pane_g2

0x9a0b,	// (0x0006f875) main_mup_pane_g3_ParamLimits

0x9a0b,	// (0x0006f875) main_mup_pane_g3

0x9a27,	// (0x0006f891) main_mup_pane_g4_ParamLimits

0x9a27,	// (0x0006f891) main_mup_pane_g4

0x9a43,	// (0x0006f8ad) main_mup_pane_g5_ParamLimits

0x9a43,	// (0x0006f8ad) main_mup_pane_g5

0x9a64,	// (0x0006f8ce) main_mup_pane_g6_ParamLimits

0x9a64,	// (0x0006f8ce) main_mup_pane_g6

0x9a80,	// (0x0006f8ea) main_mup_pane_g7_ParamLimits

0x9a80,	// (0x0006f8ea) main_mup_pane_g7

0x9a9c,	// (0x0006f906) main_mup_pane_g8_ParamLimits

0x9a9c,	// (0x0006f906) main_mup_pane_g8

0x9abc,	// (0x0006f926) main_mup_pane_g9_ParamLimits

0x9abc,	// (0x0006f926) main_mup_pane_g9

0x9adb,	// (0x0006f945) main_mup_pane_g10_ParamLimits

0x9adb,	// (0x0006f945) main_mup_pane_g10

0x9afa,	// (0x0006f964) main_mup_pane_g11_ParamLimits

0x9afa,	// (0x0006f964) main_mup_pane_g11

0x9b12,	// (0x0006f97c) main_mup_pane_g12_ParamLimits

0x9b12,	// (0x0006f97c) main_mup_pane_g12

0x9b20,	// (0x0006f98a) main_mup_pane_g13_ParamLimits

0x9b20,	// (0x0006f98a) main_mup_pane_g13

0x000c,

0xf42a,	// (0x00075294) main_mup_pane_g_ParamLimits

0xf42a,	// (0x00075294) main_mup_pane_g

0x9b36,	// (0x0006f9a0) main_mup_pane_t1_ParamLimits

0x9b36,	// (0x0006f9a0) main_mup_pane_t1

0x9b53,	// (0x0006f9bd) main_mup_pane_t2_ParamLimits

0x9b53,	// (0x0006f9bd) main_mup_pane_t2

0x9b6d,	// (0x0006f9d7) main_mup_pane_t3_ParamLimits

0x9b6d,	// (0x0006f9d7) main_mup_pane_t3

0x9b87,	// (0x0006f9f1) main_mup_pane_t4_ParamLimits

0x9b87,	// (0x0006f9f1) main_mup_pane_t4

0x9b99,	// (0x0006fa03) main_mup_pane_t5_ParamLimits

0x9b99,	// (0x0006fa03) main_mup_pane_t5

0x9bab,	// (0x0006fa15) main_mup_pane_t6_ParamLimits

0x9bab,	// (0x0006fa15) main_mup_pane_t6

0x0005,

0xf445,	// (0x000752af) main_mup_pane_t_ParamLimits

0xf445,	// (0x000752af) main_mup_pane_t

0x9bc1,	// (0x0006fa2b) mup_progress_pane_ParamLimits

0x9bc1,	// (0x0006fa2b) mup_progress_pane

0x9bcd,	// (0x0006fa37) mup_visualizer_pane_ParamLimits

0x9bcd,	// (0x0006fa37) mup_visualizer_pane

0x9c07,	// (0x0006fa71) mup_volume_pane_ParamLimits

0x9c07,	// (0x0006fa71) mup_volume_pane

0x1511,	// (0x0006737b) mup_visualizer_pane_g1_ParamLimits

0x1511,	// (0x0006737b) mup_visualizer_pane_g1

0x1511,	// (0x0006737b) mup_visualizer_pane_g2_ParamLimits

0x1511,	// (0x0006737b) mup_visualizer_pane_g2

0x1375,	// (0x000671df) mup_visualizer_pane_g3_ParamLimits

0x1375,	// (0x000671df) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x000752bc) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x000752bc) mup_visualizer_pane_g

0x08bf,	// (0x00066729) mup_volume_pane_g1

0x1527,	// (0x00067391) mup_volume_pane_g2

0x0001,

0xf459,	// (0x000752c3) mup_volume_pane_g

0x08bf,	// (0x00066729) mup_progress_pane_g1

0x1530,	// (0x0006739a) mup_progress_pane_g2

0x1539,	// (0x000673a3) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x000752c8) mup_progress_pane_g

0x04f6,	// (0x00066360) bg_popup_window_pane_cp05

0x1542,	// (0x000673ac) heading_pane_cp02_ParamLimits

0x1542,	// (0x000673ac) heading_pane_cp02

0x155c,	// (0x000673c6) list_popup_blid_pane

0x1564,	// (0x000673ce) list_blid_sat_info_pane_ParamLimits

0x1564,	// (0x000673ce) list_blid_sat_info_pane

0x1577,	// (0x000673e1) list_blid_sat_info_pane_g1

0x157f,	// (0x000673e9) list_blid_sat_info_pane_t1

0x9d14,	// (0x0006fb7e) mup_equalizer_pane_ParamLimits

0x9d14,	// (0x0006fb7e) mup_equalizer_pane

0x9d35,	// (0x0006fb9f) mup_equalizer_pane_cp1_ParamLimits

0x9d35,	// (0x0006fb9f) mup_equalizer_pane_cp1

0x9d56,	// (0x0006fbc0) mup_equalizer_pane_cp2_ParamLimits

0x9d56,	// (0x0006fbc0) mup_equalizer_pane_cp2

0x9d77,	// (0x0006fbe1) mup_equalizer_pane_cp3_ParamLimits

0x9d77,	// (0x0006fbe1) mup_equalizer_pane_cp3

0x9d98,	// (0x0006fc02) mup_equalizer_pane_cp4_ParamLimits

0x9d98,	// (0x0006fc02) mup_equalizer_pane_cp4

0x9db9,	// (0x0006fc23) mup_equalizer_pane_cp5

0x9dcf,	// (0x0006fc39) mup_equalizer_pane_cp6

0x9de7,	// (0x0006fc51) mup_equalizer_pane_cp7

0x2747,	// (0x000685b1) bg_popup_call_poc_act_pane_g9

0x274f,	// (0x000685b9) bg_popup_call_poc_act_pane_g10

0x2757,	// (0x000685c1) bg_popup_call_poc_act_pane_g11

0x000a,

0x0751,	// (0x000665bb) mup_scale_pane

0x08bf,	// (0x00066729) mup_scale_pane_g1

0x158d,	// (0x000673f7) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x000752e4) mup_scale_pane_g

0x15b1,	// (0x0006741b) msg_data_pane

0x15b9,	// (0x00067423) scroll_pane_cp017

0x66fb,	// (0x0006c565) bg_list_pane_cp04_ParamLimits

0x66fb,	// (0x0006c565) bg_list_pane_cp04

0x15c1,	// (0x0006742b) msg_data_pane_g1

0x9e11,	// (0x0006fc7b) msg_data_pane_g2

0x9e1b,	// (0x0006fc85) msg_data_pane_g3

0x9e23,	// (0x0006fc8d) msg_data_pane_g4

0x9e2b,	// (0x0006fc95) msg_data_pane_g5

0x9e33,	// (0x0006fc9d) msg_data_pane_g6

0x9e3b,	// (0x0006fca5) msg_data_pane_g7

0x0006,

0xf489,	// (0x000752f3) msg_data_pane_g

0x6721,	// (0x0006c58b) msg_text_pane_ParamLimits

0x6721,	// (0x0006c58b) msg_text_pane

0x9e43,	// (0x0006fcad) qrid_highlight_pane_cp011_ParamLimits

0x9e43,	// (0x0006fcad) qrid_highlight_pane_cp011

0x04f6,	// (0x00066360) msg_body_pane

0x04f6,	// (0x00066360) msg_header_pane

0x15d2,	// (0x0006743c) input_focus_pane_cp07

0x6764,	// (0x0006c5ce) msg_header_pane_t1_ParamLimits

0x6764,	// (0x0006c5ce) msg_header_pane_t1

0x6776,	// (0x0006c5e0) msg_header_pane_t2_ParamLimits

0x6776,	// (0x0006c5e0) msg_header_pane_t2

0x0001,

0xf49d,	// (0x00075307) msg_header_pane_t_ParamLimits

0xf49d,	// (0x00075307) msg_header_pane_t

0x15e7,	// (0x00067451) msg_body_pane_g1

0x6788,	// (0x0006c5f2) msg_body_pane_t1_ParamLimits

0x6788,	// (0x0006c5f2) msg_body_pane_t1

0x67b9,	// (0x0006c623) msg_body_pane_t2_ParamLimits

0x67b9,	// (0x0006c623) msg_body_pane_t2

0x67cb,	// (0x0006c635) msg_body_pane_t3_ParamLimits

0x67cb,	// (0x0006c635) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x0007530c) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x0007530c) msg_body_pane_t

0x9eaf,	// (0x0006fd19) main_viewer_pane_g1_ParamLimits

0x9eaf,	// (0x0006fd19) main_viewer_pane_g1

0x9ebb,	// (0x0006fd25) main_viewer_pane_g2_ParamLimits

0x9ebb,	// (0x0006fd25) main_viewer_pane_g2

0x9ec7,	// (0x0006fd31) main_viewer_pane_g3_ParamLimits

0x9ec7,	// (0x0006fd31) main_viewer_pane_g3

0x9ed8,	// (0x0006fd42) main_viewer_pane_g4_ParamLimits

0x9ed8,	// (0x0006fd42) main_viewer_pane_g4

0x9ee9,	// (0x0006fd53) main_viewer_pane_g5_ParamLimits

0x9ee9,	// (0x0006fd53) main_viewer_pane_g5

0x9ee9,	// (0x0006fd53) main_viewer_pane_g7_ParamLimits

0x9ee9,	// (0x0006fd53) main_viewer_pane_g7

0x9efb,	// (0x0006fd65) main_viewer_pane_g8_ParamLimits

0x9efb,	// (0x0006fd65) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x0007531c) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x0007531c) main_viewer_pane_g

0x1625,	// (0x0006748f) viewer_content_pane_ParamLimits

0x1625,	// (0x0006748f) viewer_content_pane

0x9f33,	// (0x0006fd9d) main_postcard_pane_g1_ParamLimits

0x9f33,	// (0x0006fd9d) main_postcard_pane_g1

0x9f41,	// (0x0006fdab) main_postcard_pane_g2_ParamLimits

0x9f41,	// (0x0006fdab) main_postcard_pane_g2

0x9f4f,	// (0x0006fdb9) main_postcard_pane_g3_ParamLimits

0x9f4f,	// (0x0006fdb9) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x0007532d) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x0007532d) main_postcard_pane_g

0x9f5f,	// (0x0006fdc9) main_postcard_pane_g4

0x2957,	// (0x000687c1) smil_status_volume_pane_g2

0x9f8b,	// (0x0006fdf5) postcard_pane_ParamLimits

0x9f8b,	// (0x0006fdf5) postcard_pane

0x1511,	// (0x0006737b) postcard_pane_g1_ParamLimits

0x1511,	// (0x0006737b) postcard_pane_g1

0x9fbd,	// (0x0006fe27) postcard_pane_g2_ParamLimits

0x9fbd,	// (0x0006fe27) postcard_pane_g2

0x9fc9,	// (0x0006fe33) postcard_pane_g3_ParamLimits

0x9fc9,	// (0x0006fe33) postcard_pane_g3

0x1641,	// (0x000674ab) postcard_pane_g4_ParamLimits

0x1641,	// (0x000674ab) postcard_pane_g4

0x9fd5,	// (0x0006fe3f) postcard_pane_g5_ParamLimits

0x9fd5,	// (0x0006fe3f) postcard_pane_g5

0x9fe1,	// (0x0006fe4b) postcard_pane_g6_ParamLimits

0x9fe1,	// (0x0006fe4b) postcard_pane_g6

0x1633,	// (0x0006749d) postcard_pane_g7_ParamLimits

0x1633,	// (0x0006749d) postcard_pane_g7

0x0006,

0xf4d0,	// (0x0007533a) postcard_pane_g_ParamLimits

0xf4d0,	// (0x0007533a) postcard_pane_g

0x9fed,	// (0x0006fe57) main_mp2_pane_g1_ParamLimits

0x9fed,	// (0x0006fe57) main_mp2_pane_g1

0x9ff9,	// (0x0006fe63) main_mp2_pane_g2_ParamLimits

0x9ff9,	// (0x0006fe63) main_mp2_pane_g2

0xa005,	// (0x0006fe6f) main_mp2_pane_g3_ParamLimits

0xa005,	// (0x0006fe6f) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x00075349) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x00075349) main_mp2_pane_g

0xa011,	// (0x0006fe7b) main_mp2_pane_t1_ParamLimits

0xa011,	// (0x0006fe7b) main_mp2_pane_t1

0xa028,	// (0x0006fe92) main_mp2_pane_t2_ParamLimits

0xa028,	// (0x0006fe92) main_mp2_pane_t2

0xa03c,	// (0x0006fea6) main_mp2_pane_t3_ParamLimits

0xa03c,	// (0x0006fea6) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x00075350) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x00075350) main_mp2_pane_t

0x164f,	// (0x000674b9) pec_content_pane_ParamLimits

0x164f,	// (0x000674b9) pec_content_pane

0x0c06,	// (0x00066a70) scroll_pane_cp015

0x1661,	// (0x000674cb) pec_attribute_pane_ParamLimits

0x1661,	// (0x000674cb) pec_attribute_pane

0xa04e,	// (0x0006feb8) pec_content_pane_g1_ParamLimits

0xa04e,	// (0x0006feb8) pec_content_pane_g1

0x1671,	// (0x000674db) pec_content_pane_t1_ParamLimits

0x1671,	// (0x000674db) pec_content_pane_t1

0x1683,	// (0x000674ed) pec_content_pane_t2_ParamLimits

0x1683,	// (0x000674ed) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x00075357) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x00075357) pec_content_pane_t

0xa05a,	// (0x0006fec4) list_single_graphic_pane_cp01_ParamLimits

0xa05a,	// (0x0006fec4) list_single_graphic_pane_cp01

0x0751,	// (0x000665bb) bg_popup_sub_pane_cp04

0x1695,	// (0x000674ff) popup_mup_playback_window_g1

0x16a1,	// (0x0006750b) popup_mup_playback_window_t1

0x16b6,	// (0x00067520) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x0007535c) popup_mup_playback_window_t

0x16ed,	// (0x00067557) main_image_pane_g1_ParamLimits

0x16ed,	// (0x00067557) main_image_pane_g1

0x1730,	// (0x0006759a) scroll_pane_cp018_ParamLimits

0x1730,	// (0x0006759a) scroll_pane_cp018

0x1748,	// (0x000675b2) scroll_pane_cp016_ParamLimits

0x1748,	// (0x000675b2) scroll_pane_cp016

0xa0f3,	// (0x0006ff5d) smil2_image_pane_ParamLimits

0xa0f3,	// (0x0006ff5d) smil2_image_pane

0xa123,	// (0x0006ff8d) smil2_root_pane_ParamLimits

0xa123,	// (0x0006ff8d) smil2_root_pane

0xa14f,	// (0x0006ffb9) smil2_text_pane_ParamLimits

0xa14f,	// (0x0006ffb9) smil2_text_pane

0x04f6,	// (0x00066360) bg_list_pane_cp06

0x1784,	// (0x000675ee) grid_radio_pane

0x04f6,	// (0x00066360) bg_popup_window_pane_cp06

0x178c,	// (0x000675f6) main_fmradio_pane_t1

0x11d4,	// (0x0006703e) heading_pane_cp04

0x179a,	// (0x00067604) main_fmradio_pane_t2

0x275f,	// (0x000685c9) popup_cale_lunar_info_window_g1

0x17a8,	// (0x00067612) main_fmradio_pane_t3

0x2767,	// (0x000685d1) popup_cale_lunar_info_window_g2

0x17b6,	// (0x00067620) main_fmradio_pane_t4

0x0001,

0x17c4,	// (0x0006762e) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x00075437) popup_cale_lunar_info_window_g

0xf507,	// (0x00075371) main_fmradio_pane_t

0x17d2,	// (0x0006763c) wait_bar_pane_cp03

0x17da,	// (0x00067644) cell_fmradio_pane_ParamLimits

0x17da,	// (0x00067644) cell_fmradio_pane

0x1633,	// (0x0006749d) cell_fmradio_pane_g1_ParamLimits

0x1633,	// (0x0006749d) cell_fmradio_pane_g1

0x04f6,	// (0x00066360) grid_highlight_pane_cp011

0x17ed,	// (0x00067657) poc_content_pane_ParamLimits

0x17ed,	// (0x00067657) poc_content_pane

0x17ff,	// (0x00067669) scroll_pane_cp019

0xa18f,	// (0x0006fff9) popup_call_poc_act_window_ParamLimits

0xa18f,	// (0x0006fff9) popup_call_poc_act_window

0xa19c,	// (0x00070006) popup_call_poc_inact_window_ParamLimits

0xa19c,	// (0x00070006) popup_call_poc_inact_window

0xf5a4,	// (0x0007540e) bg_popup_call_poc_act_pane_g

0x26d7,	// (0x00068541) bg_popup_call_poc_inact_pane_g1

0x26df,	// (0x00068549) bg_popup_call_poc_inact_pane_g2

0x1807,	// (0x00067671) popup_call_poc_act_window_g2

0x26e7,	// (0x00068551) bg_popup_call_poc_inact_pane_g3

0x26ef,	// (0x00068559) bg_popup_call_poc_inact_pane_g4

0x26f7,	// (0x00068561) bg_popup_call_poc_inact_pane_g5

0x180f,	// (0x00067679) popup_call_poc_act_window_t1_ParamLimits

0x180f,	// (0x00067679) popup_call_poc_act_window_t1

0x1837,	// (0x000676a1) popup_call_poc_act_window_t2_ParamLimits

0x1837,	// (0x000676a1) popup_call_poc_act_window_t2

0x185f,	// (0x000676c9) popup_call_poc_act_window_t3_ParamLimits

0x185f,	// (0x000676c9) popup_call_poc_act_window_t3

0x1887,	// (0x000676f1) popup_call_poc_act_window_t4_ParamLimits

0x1887,	// (0x000676f1) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x0007537c) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x0007537c) popup_call_poc_act_window_t

0x26ff,	// (0x00068569) bg_popup_call_poc_inact_pane_g6

0x2707,	// (0x00068571) bg_popup_call_poc_inact_pane_g7

0x270f,	// (0x00068579) bg_popup_call_poc_inact_pane_g8

0x1899,	// (0x00067703) popup_call_poc_inact_window_g2

0x2717,	// (0x00068581) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x000753fb) bg_popup_call_poc_inact_pane_g

0x18a1,	// (0x0006770b) popup_call_poc_inact_window_t1_ParamLimits

0x18a1,	// (0x0006770b) popup_call_poc_inact_window_t1

0x18b6,	// (0x00067720) popup_call_poc_inact_window_t2_ParamLimits

0x18b6,	// (0x00067720) popup_call_poc_inact_window_t2

0x18cb,	// (0x00067735) popup_call_poc_inact_window_t3_ParamLimits

0x18cb,	// (0x00067735) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x00075385) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x00075385) popup_call_poc_inact_window_t

0x28dd,	// (0x00068747) context_pane_ParamLimits

0xa7cb,	// (0x00070635) signal_pane_ParamLimits

0x1440,	// (0x000672aa) main_call2_pane

0xa743,	// (0x000705ad) popup_phob_thumbnail2_window_ParamLimits

0xa743,	// (0x000705ad) popup_phob_thumbnail2_window

0x9e5d,	// (0x0006fcc7) aid_hotspot_pointer_arrow_pane

0x9e65,	// (0x0006fccf) aid_hotspot_pointer_hand_pane

0xa4be,	// (0x00070328) phob_pre_status_pane_g5

0x83b0,	// (0x0006e21a) cams_zoom_pane_ParamLimits

0x83bc,	// (0x0006e226) image_vga_pane_ParamLimits

0x83cb,	// (0x0006e235) main_camera_pane_g1_ParamLimits

0x83d9,	// (0x0006e243) main_camera_pane_g2_ParamLimits

0x83e5,	// (0x0006e24f) main_camera_pane_g3_ParamLimits

0x83f1,	// (0x0006e25b) main_camera_pane_g4_ParamLimits

0x83fd,	// (0x0006e267) main_camera_pane_g5_ParamLimits

0x8409,	// (0x0006e273) main_camera_pane_g6_ParamLimits

0x8415,	// (0x0006e27f) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x00075084) main_camera_pane_g_ParamLimits

0x8421,	// (0x0006e28b) main_camera_pane_t1_ParamLimits

0x8433,	// (0x0006e29d) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x00075095) main_camera_pane_t_ParamLimits

0x0751,	// (0x000665bb) bg_popup_preview_window_pane_cp01_ParamLimits

0x0751,	// (0x000665bb) bg_popup_preview_window_pane_cp01

0x18e0,	// (0x0006774a) popup_phob_thumbnail2_window_g1_ParamLimits

0x18e0,	// (0x0006774a) popup_phob_thumbnail2_window_g1

0x04f6,	// (0x00066360) call2_cli_visual_pane

0xa1b8,	// (0x00070022) popup_call2_audio_conf_window_ParamLimits

0xa1b8,	// (0x00070022) popup_call2_audio_conf_window

0xa1cd,	// (0x00070037) popup_call2_audio_first_window_ParamLimits

0xa1cd,	// (0x00070037) popup_call2_audio_first_window

0xa26b,	// (0x000700d5) popup_call2_audio_in_window_ParamLimits

0xa26b,	// (0x000700d5) popup_call2_audio_in_window

0xa2ad,	// (0x00070117) popup_call2_audio_out_window_ParamLimits

0xa2ad,	// (0x00070117) popup_call2_audio_out_window

0xa30f,	// (0x00070179) popup_call2_audio_second_window_ParamLimits

0xa30f,	// (0x00070179) popup_call2_audio_second_window

0xa36d,	// (0x000701d7) popup_call2_audio_wait_window_ParamLimits

0xa36d,	// (0x000701d7) popup_call2_audio_wait_window

0x04f6,	// (0x00066360) bg_popup_call2_act_pane_cp03

0x0733,	// (0x0006659d) list_conf_pane_cp

0x18ec,	// (0x00067756) popup_call2_audio_conf_window_t1

0x1231,	// (0x0006709b) list_single_graphic_popup_conf2_pane_ParamLimits

0x1231,	// (0x0006709b) list_single_graphic_popup_conf2_pane

0x1244,	// (0x000670ae) list_highlight_pane_cp04

0x18fa,	// (0x00067764) list_single_graphic_popup_conf2_pane_g1

0x1255,	// (0x000670bf) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x0007538c) list_single_graphic_popup_conf2_pane_g

0x1904,	// (0x0006776e) list_single_graphic_popup_conf2_pane_t1

0x1912,	// (0x0006777c) bg_popup_call2_act_pane_cp01_ParamLimits

0x1912,	// (0x0006777c) bg_popup_call2_act_pane_cp01

0x199c,	// (0x00067806) call_type_pane_cp05_ParamLimits

0x199c,	// (0x00067806) call_type_pane_cp05

0x19f0,	// (0x0006785a) popup_call2_audio_second_window_g1_ParamLimits

0x19f0,	// (0x0006785a) popup_call2_audio_second_window_g1

0x1a44,	// (0x000678ae) popup_call2_audio_second_window_g2_ParamLimits

0x1a44,	// (0x000678ae) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x00075391) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x00075391) popup_call2_audio_second_window_g

0x1aa9,	// (0x00067913) popup_call2_audio_second_window_t1_ParamLimits

0x1aa9,	// (0x00067913) popup_call2_audio_second_window_t1

0x1b64,	// (0x000679ce) popup_call2_audio_second_window_t2_ParamLimits

0x1b64,	// (0x000679ce) popup_call2_audio_second_window_t2

0x1bb7,	// (0x00067a21) popup_call2_audio_second_window_t3_ParamLimits

0x1bb7,	// (0x00067a21) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x00075398) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x00075398) popup_call2_audio_second_window_t

0x04f6,	// (0x00066360) bg_popup_call2_in_pane_cp02

0x0500,	// (0x0006636a) call_type_pane_cp04

0x0508,	// (0x00066372) popup_call2_audio_wait_window_g1

0x0510,	// (0x0006637a) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x00074f71) popup_call2_audio_wait_window_g

0x0518,	// (0x00066382) popup_call2_audio_wait_window_t3

0x1caa,	// (0x00067b14) bg_popup_call2_act_pane_ParamLimits

0x1caa,	// (0x00067b14) bg_popup_call2_act_pane

0x1d6a,	// (0x00067bd4) call_type_pane_cp03_ParamLimits

0x1d6a,	// (0x00067bd4) call_type_pane_cp03

0x1dce,	// (0x00067c38) popup_call2_audio_first_window_g1_ParamLimits

0x1dce,	// (0x00067c38) popup_call2_audio_first_window_g1

0x1e3e,	// (0x00067ca8) popup_call2_audio_first_window_g2_ParamLimits

0x1e3e,	// (0x00067ca8) popup_call2_audio_first_window_g2

0x1511,	// (0x0006737b) popup_call2_audio_first_window_g3_ParamLimits

0x1511,	// (0x0006737b) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x000753a1) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x000753a1) popup_call2_audio_first_window_g

0x1f1c,	// (0x00067d86) popup_call2_audio_first_window_t1_ParamLimits

0x1f1c,	// (0x00067d86) popup_call2_audio_first_window_t1

0x201f,	// (0x00067e89) popup_call2_audio_first_window_t4_ParamLimits

0x201f,	// (0x00067e89) popup_call2_audio_first_window_t4

0x2102,	// (0x00067f6c) popup_call2_audio_first_window_t5_ParamLimits

0x2102,	// (0x00067f6c) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x000753ac) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x000753ac) popup_call2_audio_first_window_t

0x0749,	// (0x000665b3) bg_popup_call2_act_pane_g1

0x276f,	// (0x000685d9) popup_cale_lunar_info_window_t1

0x277d,	// (0x000685e7) popup_cale_lunar_info_window_t2

0x278b,	// (0x000685f5) popup_cale_lunar_info_window_t3

0x04f6,	// (0x00066360) bg_popup_call2_bubble_pane

0x2203,	// (0x0006806d) bg_popup_call2_in_pane_cp01_ParamLimits

0x2203,	// (0x0006806d) bg_popup_call2_in_pane_cp01

0x01d2,	// (0x0006603c) call_type_pane_cp02

0x224b,	// (0x000680b5) popup_call2_audio_out_window_g1_ParamLimits

0x224b,	// (0x000680b5) popup_call2_audio_out_window_g1

0x2277,	// (0x000680e1) popup_call2_audio_out_window_g2_ParamLimits

0x2277,	// (0x000680e1) popup_call2_audio_out_window_g2

0x229f,	// (0x00068109) popup_call2_audio_out_window_g3_ParamLimits

0x229f,	// (0x00068109) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x000753b5) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x000753b5) popup_call2_audio_out_window_g

0x22da,	// (0x00068144) popup_call2_audio_out_window_t1_ParamLimits

0x22da,	// (0x00068144) popup_call2_audio_out_window_t1

0x2339,	// (0x000681a3) popup_call2_audio_out_window_t2_ParamLimits

0x2339,	// (0x000681a3) popup_call2_audio_out_window_t2

0x238d,	// (0x000681f7) popup_call2_audio_out_window_t3_ParamLimits

0x238d,	// (0x000681f7) popup_call2_audio_out_window_t3

0x23a3,	// (0x0006820d) popup_call2_audio_out_window_t4_ParamLimits

0x23a3,	// (0x0006820d) popup_call2_audio_out_window_t4

0x23b9,	// (0x00068223) popup_call2_audio_out_window_t5_ParamLimits

0x23b9,	// (0x00068223) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x000753be) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x000753be) popup_call2_audio_out_window_t

0x241d,	// (0x00068287) bg_popup_call2_in_pane_ParamLimits

0x241d,	// (0x00068287) bg_popup_call2_in_pane

0x2479,	// (0x000682e3) popup_call2_audio_in_window_g1_ParamLimits

0x2479,	// (0x000682e3) popup_call2_audio_in_window_g1

0x24b1,	// (0x0006831b) popup_call2_audio_in_window_g2_ParamLimits

0x24b1,	// (0x0006831b) popup_call2_audio_in_window_g2

0x24e9,	// (0x00068353) popup_call2_audio_in_window_g3_ParamLimits

0x24e9,	// (0x00068353) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x000753cb) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x000753cb) popup_call2_audio_in_window_g

0x2541,	// (0x000683ab) popup_call2_audio_in_window_t1_ParamLimits

0x2541,	// (0x000683ab) popup_call2_audio_in_window_t1

0x25c1,	// (0x0006842b) popup_call2_audio_in_window_t2_ParamLimits

0x25c1,	// (0x0006842b) popup_call2_audio_in_window_t2

0x2641,	// (0x000684ab) popup_call2_audio_in_window_t3_ParamLimits

0x2641,	// (0x000684ab) popup_call2_audio_in_window_t3

0x265b,	// (0x000684c5) popup_call2_audio_in_window_t4_ParamLimits

0x265b,	// (0x000684c5) popup_call2_audio_in_window_t4

0x266d,	// (0x000684d7) popup_call2_audio_in_window_t5_ParamLimits

0x266d,	// (0x000684d7) popup_call2_audio_in_window_t5

0x2682,	// (0x000684ec) popup_call2_audio_in_window_t6_ParamLimits

0x2682,	// (0x000684ec) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x000753d4) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x000753d4) popup_call2_audio_in_window_t

0x0749,	// (0x000665b3) bg_popup_call2_in_pane_g1

0x2799,	// (0x00068603) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x0007543c) popup_cale_lunar_info_window_t

0x0751,	// (0x000665bb) bg_popup_call2_rect_pane_ParamLimits

0x0751,	// (0x000665bb) bg_popup_call2_rect_pane

0x04f6,	// (0x00066360) call2_cli_visual_graphic_pane

0x04f6,	// (0x00066360) call2_cli_visual_text_pane

0xa871,	// (0x000706db) smil_status_volume_pane_g3

0x0002,

0x08bf,	// (0x00066729) call2_cli_visual_graphic_pane_g1

0x08bf,	// (0x00066729) call2_cli_visual_graphic_pane_g2

0x08bf,	// (0x00066729) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x000753e1) call2_cli_visual_graphic_pane_g

0x2697,	// (0x00068501) bg_popup_call2_rect_pane_g1

0x094b,	// (0x000667b5) bg_popup_call2_rect_pane_g2

0x269f,	// (0x00068509) bg_popup_call2_rect_pane_g3

0x26a7,	// (0x00068511) bg_popup_call2_rect_pane_g4

0x26af,	// (0x00068519) bg_popup_call2_rect_pane_g5

0x26b7,	// (0x00068521) bg_popup_call2_rect_pane_g6

0x26bf,	// (0x00068529) bg_popup_call2_rect_pane_g7

0x26c7,	// (0x00068531) bg_popup_call2_rect_pane_g8

0x26cf,	// (0x00068539) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x000753e8) bg_popup_call2_rect_pane_g

0x26d7,	// (0x00068541) bg_popup_call2_bubble_pane_g1

0x26df,	// (0x00068549) bg_popup_call2_bubble_pane_g2

0x26e7,	// (0x00068551) bg_popup_call2_bubble_pane_g3

0x26ef,	// (0x00068559) bg_popup_call2_bubble_pane_g4

0x26f7,	// (0x00068561) bg_popup_call2_bubble_pane_g5

0x26ff,	// (0x00068569) bg_popup_call2_bubble_pane_g6

0x2707,	// (0x00068571) bg_popup_call2_bubble_pane_g7

0x270f,	// (0x00068579) bg_popup_call2_bubble_pane_g8

0x2717,	// (0x00068581) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x000753fb) bg_popup_call2_bubble_pane_g

0x7f27,	// (0x0006dd91) aid_cale_week_size_cell_pane

0x8445,	// (0x0006e2af) aid_cams_cif_uncrop_pane_ParamLimits

0x8445,	// (0x0006e2af) aid_cams_cif_uncrop_pane

0x85a0,	// (0x0006e40a) aid_cams_size_cell_ParamLimits

0x85a0,	// (0x0006e40a) aid_cams_size_cell

0x85ac,	// (0x0006e416) grid_cams_pane_ParamLimits

0x85ba,	// (0x0006e424) linegrid_cams_pane_ParamLimits

0x8691,	// (0x0006e4fb) call_video_pane_t1

0x86b2,	// (0x0006e51c) call_video_pane_t2

0x0001,

0xf27e,	// (0x000750e8) call_video_pane_t

0x8be9,	// (0x0006ea53) aid_cale_month_size_cell_pane_ParamLimits

0x8be9,	// (0x0006ea53) aid_cale_month_size_cell_pane

0xf61b,	// (0x00075485) smil_status_volume_pane_g

0xa87e,	// (0x000706e8) volume_smil_pane_ParamLimits

0x769a,	// (0x0006d504) aid_popup2_width_pane

0x7e2f,	// (0x0006dc99) cell_qdial_pane_g4_ParamLimits

0x7e2f,	// (0x0006dc99) cell_qdial_pane_g4

0x980c,	// (0x0006f676) aid_blid_cardinal_pane_ParamLimits

0x981c,	// (0x0006f686) aid_blid_destination_pane_ParamLimits

0x981c,	// (0x0006f686) aid_blid_destination_pane

0x0751,	// (0x000665bb) bg_popup_call_poc_act_pane_ParamLimits

0x0751,	// (0x000665bb) bg_popup_call_poc_act_pane

0x0751,	// (0x000665bb) bg_popup_call_poc_inact_pane_ParamLimits

0x0751,	// (0x000665bb) bg_popup_call_poc_inact_pane

0x271f,	// (0x00068589) bg_popup_call_poc_act_pane_g1

0x2727,	// (0x00068591) bg_popup_call_poc_act_pane_g2

0x272f,	// (0x00068599) bg_popup_call_poc_act_pane_g3

0x26ef,	// (0x00068559) bg_popup_call_poc_act_pane_g4

0x26f7,	// (0x00068561) bg_popup_call_poc_act_pane_g5

0x2737,	// (0x000685a1) bg_popup_call_poc_act_pane_g6

0x2707,	// (0x00068571) bg_popup_call_poc_act_pane_g7

0x273f,	// (0x000685a9) bg_popup_call_poc_act_pane_g8

0x04f6,	// (0x00066360) main_usb_pane

0xa672,	// (0x000704dc) popup_cale_lunar_info_window

0x89dd,	// (0x0006e847) im_reading_pane_t1_ParamLimits

0x0b5e,	// (0x000669c8) list_im_pane_ParamLimits

0x0b6f,	// (0x000669d9) scroll_pane_cp07_ParamLimits

0x04f6,	// (0x00066360) grid_highlight_pane_cp012

0x0751,	// (0x000665bb) mup_scale_pane_ParamLimits

0x1511,	// (0x0006737b) main_usb_pane_g1_ParamLimits

0x1511,	// (0x0006737b) main_usb_pane_g1

0xa3e1,	// (0x0007024b) main_usb_pane_g2_ParamLimits

0xa3e1,	// (0x0007024b) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x00075425) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x00075425) main_usb_pane_g

0xa3ed,	// (0x00070257) main_usb_pane_t1_ParamLimits

0xa3ed,	// (0x00070257) main_usb_pane_t1

0xa3ff,	// (0x00070269) main_usb_pane_t2_ParamLimits

0xa3ff,	// (0x00070269) main_usb_pane_t2

0xa411,	// (0x0007027b) main_usb_pane_t3_ParamLimits

0xa411,	// (0x0007027b) main_usb_pane_t3

0xa423,	// (0x0007028d) main_usb_pane_t4_ParamLimits

0xa423,	// (0x0007028d) main_usb_pane_t4

0xa435,	// (0x0007029f) main_usb_pane_t5_ParamLimits

0xa435,	// (0x0007029f) main_usb_pane_t5

0xa447,	// (0x000702b1) main_usb_pane_t6_ParamLimits

0xa447,	// (0x000702b1) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x0007542a) main_usb_pane_t_ParamLimits

0x97b2,	// (0x0006f61c) aid_text_placing

0x97be,	// (0x0006f628) main_location2_pane_t1_ParamLimits

0x97d2,	// (0x0006f63c) main_location2_pane_t2_ParamLimits

0x97e6,	// (0x0006f650) main_location2_pane_t3_ParamLimits

0x97fa,	// (0x0006f664) main_location2_pane_t4_ParamLimits

0x97fa,	// (0x0006f664) main_location2_pane_t4

0xf3df,	// (0x00075249) main_location2_pane_t_ParamLimits

0x078d,	// (0x000665f7) find_pinb_pane_g2_ParamLimits

0x078d,	// (0x000665f7) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x00074f97) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x00074f97) find_pinb_pane_g

0x0799,	// (0x00066603) find_pinb_pane_t1_ParamLimits

0x07ab,	// (0x00066615) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x00074f9c) find_pinb_pane_t_ParamLimits

0x04f6,	// (0x00066360) main_call3_pane

0x8ff5,	// (0x0006ee5f) cale_month_day_heading_pane_t1_ParamLimits

0x9053,	// (0x0006eebd) cale_month_day_heading_pane_t2_ParamLimits

0x90b8,	// (0x0006ef22) cale_month_day_heading_pane_t3_ParamLimits

0x911d,	// (0x0006ef87) cale_month_day_heading_pane_t4_ParamLimits

0x9182,	// (0x0006efec) cale_month_day_heading_pane_t5_ParamLimits

0x91e7,	// (0x0006f051) cale_month_day_heading_pane_t6_ParamLimits

0x924c,	// (0x0006f0b6) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x00075120) cale_month_day_heading_pane_t_ParamLimits

0x0dbb,	// (0x00066c25) smil_status_volume_pane

0x9fa5,	// (0x0006fe0f) postcard_address_pane_ParamLimits

0x9fa5,	// (0x0006fe0f) postcard_address_pane

0x9fb1,	// (0x0006fe1b) postcard_message_pane_ParamLimits

0x9fb1,	// (0x0006fe1b) postcard_message_pane

0xa3ac,	// (0x00070216) call2_cli_visual_pane_t1_ParamLimits

0xa3ac,	// (0x00070216) call2_cli_visual_pane_t1

0xa9d5,	// (0x0007083f) postcard_message_pane_t1_ParamLimits

0xa9d5,	// (0x0007083f) postcard_message_pane_t1

0xa9be,	// (0x00070828) postcard_address_pane_t1_ParamLimits

0xa9be,	// (0x00070828) postcard_address_pane_t1

0xa9af,	// (0x00070819) popup_call3_audio_in_window_ParamLimits

0xa9af,	// (0x00070819) popup_call3_audio_in_window

0xa893,	// (0x000706fd) bg_popup_call3_in_pane_ParamLimits

0xa893,	// (0x000706fd) bg_popup_call3_in_pane

0xa8f5,	// (0x0007075f) popup_call3_audio_in_window_g1_ParamLimits

0xa8f5,	// (0x0007075f) popup_call3_audio_in_window_g1

0xa90d,	// (0x00070777) popup_call3_audio_in_window_g2_ParamLimits

0xa90d,	// (0x00070777) popup_call3_audio_in_window_g2

0xa925,	// (0x0007078f) popup_call3_audio_in_window_g3_ParamLimits

0xa925,	// (0x0007078f) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x0007548c) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x0007548c) popup_call3_audio_in_window_g

0xa94d,	// (0x000707b7) popup_call3_audio_in_window_t1_ParamLimits

0xa94d,	// (0x000707b7) popup_call3_audio_in_window_t1

0xa975,	// (0x000707df) popup_call3_audio_in_window_t2_ParamLimits

0xa975,	// (0x000707df) popup_call3_audio_in_window_t2

0xa99d,	// (0x00070807) popup_call3_audio_in_window_t3_ParamLimits

0xa99d,	// (0x00070807) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x00075495) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x00075495) popup_call3_audio_in_window_t

0x1440,	// (0x000672aa) bg_popup_call3_rect_pane

0x2697,	// (0x00068501) bg_popup_call3_rect_pane_g1

0x094b,	// (0x000667b5) bg_popup_call3_rect_pane_g2

0x269f,	// (0x00068509) bg_popup_call3_rect_pane_g3

0x26a7,	// (0x00068511) bg_popup_call3_rect_pane_g4

0x26af,	// (0x00068519) bg_popup_call3_rect_pane_g5

0x26b7,	// (0x00068521) bg_popup_call3_rect_pane_g6

0x26bf,	// (0x00068529) bg_popup_call3_rect_pane_g7

0x9c22,	// (0x0006fa8c) mup_visualizer_osc_pane

0x151f,	// (0x00067389) mup_visualizer_spec_pane

0xa8b3,	// (0x0007071d) call3_video_qcif_pane_ParamLimits

0xa8b3,	// (0x0007071d) call3_video_qcif_pane

0xa8c5,	// (0x0007072f) call3_video_qcif_uncrop_pane_ParamLimits

0xa8c5,	// (0x0007072f) call3_video_qcif_uncrop_pane

0xa8d3,	// (0x0007073d) call3_video_subqcif_pane_ParamLimits

0xa8d3,	// (0x0007073d) call3_video_subqcif_pane

0xa8e5,	// (0x0007074f) call3_video_subqcif_uncrop_pane_ParamLimits

0xa8e5,	// (0x0007074f) call3_video_subqcif_uncrop_pane

0xa93d,	// (0x000707a7) popup_call3_audio_in_window_g4_ParamLimits

0xa93d,	// (0x000707a7) popup_call3_audio_in_window_g4

0xa860,	// (0x000706ca) mup_spec_half_pane

0xa869,	// (0x000706d3) mup_spec_half_pane_cp

0x293d,	// (0x000687a7) mup_osc_middle_pane

0x2946,	// (0x000687b0) mup_visualizer_osc_pane_g1

0xa841,	// (0x000706ab) mup_spec_bar_pane_ParamLimits

0xa841,	// (0x000706ab) mup_spec_bar_pane

0x292a,	// (0x00068794) mup_spec_bar_pane_g1

0x2934,	// (0x0006879e) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00075480) mup_spec_bar_pane_g

0x7f27,	// (0x0006dd91) aid_cale_week_size_cell_pane_ParamLimits

0x7f3a,	// (0x0006dda4) bg_cale_heading_pane_ParamLimits

0x09c7,	// (0x00066831) bg_cale_pane_cp01_ParamLimits

0x7f56,	// (0x0006ddc0) cale_week_corner_pane_ParamLimits

0x7f6c,	// (0x0006ddd6) cale_week_day_heading_pane_ParamLimits

0x7f88,	// (0x0006ddf2) cale_week_scroll_pane_g1_ParamLimits

0x7fa1,	// (0x0006de0b) cale_week_scroll_pane_g2_ParamLimits

0x7fb2,	// (0x0006de1c) cale_week_scroll_pane_g3_ParamLimits

0x7fc3,	// (0x0006de2d) cale_week_scroll_pane_g4_ParamLimits

0x7fd4,	// (0x0006de3e) cale_week_scroll_pane_g5_ParamLimits

0x7fe5,	// (0x0006de4f) cale_week_scroll_pane_g6_ParamLimits

0x7ff6,	// (0x0006de60) cale_week_scroll_pane_g7_ParamLimits

0x8009,	// (0x0006de73) cale_week_scroll_pane_g8_ParamLimits

0x801c,	// (0x0006de86) cale_week_scroll_pane_g9_ParamLimits

0x802d,	// (0x0006de97) cale_week_scroll_pane_g10_ParamLimits

0x803e,	// (0x0006dea8) cale_week_scroll_pane_g11_ParamLimits

0x804f,	// (0x0006deb9) cale_week_scroll_pane_g12_ParamLimits

0x8060,	// (0x0006deca) cale_week_scroll_pane_g13_ParamLimits

0x8079,	// (0x0006dee3) cale_week_scroll_pane_g14_ParamLimits

0x8092,	// (0x0006defc) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x00075028) cale_week_scroll_pane_g_ParamLimits

0x80ab,	// (0x0006df15) cale_week_time_pane_ParamLimits

0x80be,	// (0x0006df28) grid_cale_week_pane_ParamLimits

0x09e0,	// (0x0006684a) listscroll_cale_week_pane_t1

0x80db,	// (0x0006df45) scroll_pane_cp08_ParamLimits

0x8c3a,	// (0x0006eaa4) cale_month_corner_pane_ParamLimits

0x0d85,	// (0x00066bef) cale_month_pane_t1

0x8fa4,	// (0x0006ee0e) cale_month_week_pane_ParamLimits

0x1511,	// (0x0006737b) popup_call_status_window_g1_ParamLimits

0x95d5,	// (0x0006f43f) popup_call_status_window_g2_ParamLimits

0x95e1,	// (0x0006f44b) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x000751d0) popup_call_status_window_g_ParamLimits

0x1159,	// (0x00066fc3) aid_call2_pane

0x6758,	// (0x0006c5c2) msg_header_pane_g1

0x9fa5,	// (0x0006fe0f) postcard_address2_pane_ParamLimits

0x9fa5,	// (0x0006fe0f) postcard_address2_pane

0x9fb1,	// (0x0006fe1b) postcard_message2_pane_ParamLimits

0x9fb1,	// (0x0006fe1b) postcard_message2_pane

0xa7d9,	// (0x00070643) message2_row_pane_ParamLimits

0xa7d9,	// (0x00070643) message2_row_pane

0xa7f4,	// (0x0007065e) address2_row_pane_ParamLimits

0xa7f4,	// (0x0007065e) address2_row_pane

0x28f8,	// (0x00068762) postcard_message2_row_pane_g1

0x2900,	// (0x0006876a) postcard_message2_row_pane_t1

0x28f8,	// (0x00068762) address2_row_pane_g1

0x2900,	// (0x0006876a) address2_row_pane_t1

0x830f,	// (0x0006e179) aid_size_cell_vorec

0x04f6,	// (0x00066360) main_rss_pane

0xa807,	// (0x00070671) rss_list_single_pane_ParamLimits

0xa807,	// (0x00070671) rss_list_single_pane

0x290e,	// (0x00068778) rss_list_single_pane_t1

0x291c,	// (0x00068786) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x0007547b) rss_list_single_pane_t

0x04f6,	// (0x00066360) main_camera2_pane

0x04f6,	// (0x00066360) main_video2_pane

0xaa39,	// (0x000708a3) cams_zoom_pane_cp2_ParamLimits

0xaa39,	// (0x000708a3) cams_zoom_pane_cp2

0xaa45,	// (0x000708af) image2_vga_pane_ParamLimits

0xaa45,	// (0x000708af) image2_vga_pane

0xaa54,	// (0x000708be) main_camera2_pane_g1_ParamLimits

0xaa54,	// (0x000708be) main_camera2_pane_g1

0xaa60,	// (0x000708ca) main_camera2_pane_g2_ParamLimits

0xaa60,	// (0x000708ca) main_camera2_pane_g2

0xaa6c,	// (0x000708d6) main_camera2_pane_g3_ParamLimits

0xaa6c,	// (0x000708d6) main_camera2_pane_g3

0xaa78,	// (0x000708e2) main_camera2_pane_g4_ParamLimits

0xaa78,	// (0x000708e2) main_camera2_pane_g4

0xaa84,	// (0x000708ee) main_camera2_pane_g5_ParamLimits

0xaa84,	// (0x000708ee) main_camera2_pane_g5

0xaa90,	// (0x000708fa) main_camera2_pane_g6_ParamLimits

0xaa90,	// (0x000708fa) main_camera2_pane_g6

0xaa9c,	// (0x00070906) main_camera2_pane_g7_ParamLimits

0xaa9c,	// (0x00070906) main_camera2_pane_g7

0xaaa8,	// (0x00070912) main_camera2_pane_g8_ParamLimits

0xaaa8,	// (0x00070912) main_camera2_pane_g8

0x0008,

0xf632,	// (0x0007549c) main_camera2_pane_g_ParamLimits

0xf632,	// (0x0007549c) main_camera2_pane_g

0xaac0,	// (0x0007092a) main_camera2_pane_t1_ParamLimits

0xaac0,	// (0x0007092a) main_camera2_pane_t1

0xaad2,	// (0x0007093c) main_camera2_pane_t2_ParamLimits

0xaad2,	// (0x0007093c) main_camera2_pane_t2

0xaae4,	// (0x0007094e) main_camera2_pane_t3_ParamLimits

0xaae4,	// (0x0007094e) main_camera2_pane_t3

0xaaf6,	// (0x00070960) main_camera2_pane_t4_ParamLimits

0xaaf6,	// (0x00070960) main_camera2_pane_t4

0x0006,

0xf645,	// (0x000754af) main_camera2_pane_t_ParamLimits

0xf645,	// (0x000754af) main_camera2_pane_t

0xab58,	// (0x000709c2) cams_zoom_pane_cp4_ParamLimits

0xab58,	// (0x000709c2) cams_zoom_pane_cp4

0xab68,	// (0x000709d2) image2_cif_pane_ParamLimits

0xab68,	// (0x000709d2) image2_cif_pane

0xab7d,	// (0x000709e7) image2_subqcif_pane_ParamLimits

0xab7d,	// (0x000709e7) image2_subqcif_pane

0xab8c,	// (0x000709f6) main_video2_pane_g1_ParamLimits

0xab8c,	// (0x000709f6) main_video2_pane_g1

0xab9e,	// (0x00070a08) main_video2_pane_g2_ParamLimits

0xab9e,	// (0x00070a08) main_video2_pane_g2

0xabae,	// (0x00070a18) main_video2_pane_g3_ParamLimits

0xabae,	// (0x00070a18) main_video2_pane_g3

0xabbe,	// (0x00070a28) main_video2_pane_g4_ParamLimits

0xabbe,	// (0x00070a28) main_video2_pane_g4

0xabce,	// (0x00070a38) main_video2_pane_g5_ParamLimits

0xabce,	// (0x00070a38) main_video2_pane_g5

0xabde,	// (0x00070a48) main_video2_pane_g6_ParamLimits

0xabde,	// (0x00070a48) main_video2_pane_g6

0x0005,

0xf654,	// (0x000754be) main_video2_pane_g_ParamLimits

0xf654,	// (0x000754be) main_video2_pane_g

0xabf0,	// (0x00070a5a) main_video2_pane_t1_ParamLimits

0xabf0,	// (0x00070a5a) main_video2_pane_t1

0xac0a,	// (0x00070a74) main_video2_pane_t2_ParamLimits

0xac0a,	// (0x00070a74) main_video2_pane_t2

0xac30,	// (0x00070a9a) main_video2_pane_t3_ParamLimits

0xac30,	// (0x00070a9a) main_video2_pane_t3

0x0002,

0xf661,	// (0x000754cb) main_video2_pane_t_ParamLimits

0xf661,	// (0x000754cb) main_video2_pane_t

0xa4fe,	// (0x00070368) call_muted_g2

0x0001,

0xf603,	// (0x0007546d) call_muted_g

0x04f6,	// (0x00066360) main_mup2_pane

0x29fd,	// (0x00068867) main_mup2_pane_g1_ParamLimits

0x29fd,	// (0x00068867) main_mup2_pane_g1

0xac56,	// (0x00070ac0) main_mup2_pane_g2_ParamLimits

0xac56,	// (0x00070ac0) main_mup2_pane_g2

0xaed8,	// (0x00070d42) main_mup_pane_g13_cp1

0xaee0,	// (0x00070d4a) mup_volume_pane_cp1

0xac76,	// (0x00070ae0) main_mup2_pane_g4_ParamLimits

0xac76,	// (0x00070ae0) main_mup2_pane_g4

0xac8b,	// (0x00070af5) main_mup2_pane_g5_ParamLimits

0xac8b,	// (0x00070af5) main_mup2_pane_g5

0xaca0,	// (0x00070b0a) main_mup2_pane_g6_ParamLimits

0xaca0,	// (0x00070b0a) main_mup2_pane_g6

0xacb5,	// (0x00070b1f) main_mup2_pane_g7_ParamLimits

0xacb5,	// (0x00070b1f) main_mup2_pane_g7

0x0006,

0xf668,	// (0x000754d2) main_mup2_pane_g_ParamLimits

0xf668,	// (0x000754d2) main_mup2_pane_g

0xacd1,	// (0x00070b3b) main_mup2_pane_t1_ParamLimits

0xacd1,	// (0x00070b3b) main_mup2_pane_t1

0xace8,	// (0x00070b52) main_mup2_pane_t2_ParamLimits

0xace8,	// (0x00070b52) main_mup2_pane_t2

0xacff,	// (0x00070b69) main_mup2_pane_t3_ParamLimits

0xacff,	// (0x00070b69) main_mup2_pane_t3

0xad16,	// (0x00070b80) main_mup2_pane_t4_ParamLimits

0xad16,	// (0x00070b80) main_mup2_pane_t4

0xad30,	// (0x00070b9a) main_mup2_pane_t5_ParamLimits

0xad30,	// (0x00070b9a) main_mup2_pane_t5

0xad4a,	// (0x00070bb4) main_mup2_pane_t6_ParamLimits

0xad4a,	// (0x00070bb4) main_mup2_pane_t6

0x0005,

0xf677,	// (0x000754e1) main_mup2_pane_t_ParamLimits

0xf677,	// (0x000754e1) main_mup2_pane_t

0xad82,	// (0x00070bec) mup2_visualizer_pane_ParamLimits

0xad82,	// (0x00070bec) mup2_visualizer_pane

0xadb8,	// (0x00070c22) mup_progress_pane_cp_ParamLimits

0xadb8,	// (0x00070c22) mup_progress_pane_cp

0xaec3,	// (0x00070d2d) mup_volume_pane_cp_ParamLimits

0xaec3,	// (0x00070d2d) mup_volume_pane_cp

0xadcf,	// (0x00070c39) mup2_visualizer_pane_g1_ParamLimits

0xadcf,	// (0x00070c39) mup2_visualizer_pane_g1

0x29cf,	// (0x00068839) mup2_visualizer_pane_g2_ParamLimits

0x29cf,	// (0x00068839) mup2_visualizer_pane_g2

0xade4,	// (0x00070c4e) mup2_visualizer_pane_g3_ParamLimits

0xade4,	// (0x00070c4e) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x000754ee) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x000754ee) mup2_visualizer_pane_g

0x177c,	// (0x000675e6) aid_size_cell_fmradio

0xa614,	// (0x0007047e) aid_height_parent_landcape

0x0bed,	// (0x00066a57) wml_content_pane_cp

0x0bf5,	// (0x00066a5f) wml_tabs_pane

0x0bfe,	// (0x00066a68) popup_wml_miniature_window

0x0c06,	// (0x00066a70) scroll_pane_cp021

0x0c1a,	// (0x00066a84) wml_content_pane_comp8

0x04f6,	// (0x00066360) bg_popup_sub_pane_cp05

0x29ed,	// (0x00068857) popup_wml_miniature_window_g1

0x29f5,	// (0x0006885f) wml_miniature_view_pane

0xadf2,	// (0x00070c5c) aid_size_wml_view

0xadfa,	// (0x00070c64) wml_miniature_view_pane_g1

0xae03,	// (0x00070c6d) wml_miniature_view_pane_g2

0xae0c,	// (0x00070c76) wml_miniature_view_pane_g3

0xae14,	// (0x00070c7e) wml_miniature_view_pane_g4

0xae1c,	// (0x00070c86) wml_miniature_view_pane_g5

0xae24,	// (0x00070c8e) wml_miniature_view_pane_g6

0xae2c,	// (0x00070c96) wml_miniature_view_pane_g7

0xae34,	// (0x00070c9e) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x000754f5) wml_miniature_view_pane_g

0x29fd,	// (0x00068867) background_graphic_ParamLimits

0x29fd,	// (0x00068867) background_graphic

0x2a09,	// (0x00068873) wml_tabs_2_pane

0x2a12,	// (0x0006887c) wml_tabs_3_pane_ParamLimits

0x2a12,	// (0x0006887c) wml_tabs_3_pane

0x2a24,	// (0x0006888e) wml_tabs_4_pane_ParamLimits

0x2a24,	// (0x0006888e) wml_tabs_4_pane

0x2a3a,	// (0x000688a4) wml_tabs_5_pane_ParamLimits

0x2a3a,	// (0x000688a4) wml_tabs_5_pane

0x2a54,	// (0x000688be) wml_tabs_pane_g2_ParamLimits

0x2a54,	// (0x000688be) wml_tabs_pane_g2

0x2a68,	// (0x000688d2) wml_tabs_pane_g3_ParamLimits

0x2a68,	// (0x000688d2) wml_tabs_pane_g3

0xae3c,	// (0x00070ca6) wml_tabs_2_active_pane_ParamLimits

0xae3c,	// (0x00070ca6) wml_tabs_2_active_pane

0xae4c,	// (0x00070cb6) wml_tabs_2_passive_pane_ParamLimits

0xae4c,	// (0x00070cb6) wml_tabs_2_passive_pane

0xae5c,	// (0x00070cc6) wml_tabs_3_active_pane_cp_ParamLimits

0xae5c,	// (0x00070cc6) wml_tabs_3_active_pane_cp

0xae6d,	// (0x00070cd7) wml_tabs_3_passive_pane_ParamLimits

0xae6d,	// (0x00070cd7) wml_tabs_3_passive_pane

0xae7e,	// (0x00070ce8) wml_tabs_3_passive_pane_cp_ParamLimits

0xae7e,	// (0x00070ce8) wml_tabs_3_passive_pane_cp

0xae8f,	// (0x00070cf9) tabs_4_active_pane

0xae97,	// (0x00070d01) tabs_4_passive_pane

0xae9f,	// (0x00070d09) tabs_4_passive_pane_cp

0xaea7,	// (0x00070d11) tabs_4_passive_pane_cp2

0xa3d9,	// (0x00070243) aid_height_text

0x9bef,	// (0x0006fa59) mup_volume_cont_pane_ParamLimits

0x9bef,	// (0x0006fa59) mup_volume_cont_pane

0x7a6b,	// (0x0006d8d5) aid_size_cell_pinb

0x7a75,	// (0x0006d8df) aid_size_list_pinb

0xada1,	// (0x00070c0b) mup2_volume_cont_pane_ParamLimits

0xada1,	// (0x00070c0b) mup2_volume_cont_pane

0xaeaf,	// (0x00070d19) mup2_volume_cont_pane_g1_ParamLimits

0xaeaf,	// (0x00070d19) mup2_volume_cont_pane_g1

0x76a6,	// (0x0006d510) aid_size_cell_touch_ParamLimits

0x76a6,	// (0x0006d510) aid_size_cell_touch

0x7951,	// (0x0006d7bb) touch_pane_ParamLimits

0x7951,	// (0x0006d7bb) touch_pane

0x7688,	// (0x0006d4f2) main_rss2_pane

0x2abe,	// (0x00068928) listscroll_rss2_pane

0x2ac7,	// (0x00068931) rss2_navigation_pane

0x2acf,	// (0x00068939) list_rss2_pane

0x12f7,	// (0x00067161) scroll_pane_cp22

0x2ad7,	// (0x00068941) rss2_navigation_pane_g1

0x2ae0,	// (0x0006894a) rss2_navigation_pane_g2

0x2ae8,	// (0x00068952) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x00075506) rss2_navigation_pane_g

0x2af0,	// (0x0006895a) rss2_navigation_pane_t1

0xaee8,	// (0x00070d52) rss2_list_single_pane_ParamLimits

0xaee8,	// (0x00070d52) rss2_list_single_pane

0x2afe,	// (0x00068968) rss2_list_single_pane_t2

0x2b0c,	// (0x00068976) rss2_list_single_pane_t3_ParamLimits

0x2b0c,	// (0x00068976) rss2_list_single_pane_t3

0x2b29,	// (0x00068993) rss2_list_single_pane_t4

0x9450,	// (0x0006f2ba) smil_status_pane_g1

0x2890,	// (0x000686fa) main_image2_pane_ParamLimits

0x2890,	// (0x000686fa) main_image2_pane

0xaab4,	// (0x0007091e) main_camera2_pane_g9_ParamLimits

0xaab4,	// (0x0007091e) main_camera2_pane_g9

0xab08,	// (0x00070972) main_camera2_pane_t5_ParamLimits

0xab08,	// (0x00070972) main_camera2_pane_t5

0xab1a,	// (0x00070984) main_camera2_pane_t6_ParamLimits

0xab1a,	// (0x00070984) main_camera2_pane_t6

0xaf19,	// (0x00070d83) main_image2_pane_g1_ParamLimits

0xaf19,	// (0x00070d83) main_image2_pane_g1

0xa179,	// (0x0006ffe3) smil2_video_pane_ParamLimits

0xa179,	// (0x0006ffe3) smil2_video_pane

0x76da,	// (0x0006d544) aid_zoom_text_primary_cp

0x78f6,	// (0x0006d760) popup_preview_fixed_window

0x0b56,	// (0x000669c0) im_reading_pane_g1

0xa9fe,	// (0x00070868) cams2_bc_adjust_pane_cp_ParamLimits

0xa9fe,	// (0x00070868) cams2_bc_adjust_pane_cp

0xab4a,	// (0x000709b4) cams2_bc_adjust_pane_ParamLimits

0xab4a,	// (0x000709b4) cams2_bc_adjust_pane

0xaf25,	// (0x00070d8f) cams2_bc_adjust_pane_g1

0xaf2d,	// (0x00070d97) cams2_slider_pane

0xaf36,	// (0x00070da0) cams2_slider_pane_g1

0xaf3f,	// (0x00070da9) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x0007550d) cams2_slider_pane_g

0x7b7b,	// (0x0006d9e5) calc_display_pane_ParamLimits

0x7b99,	// (0x0006da03) calc_paper_pane_ParamLimits

0x7bb5,	// (0x0006da1f) grid_calc_pane_ParamLimits

0x9643,	// (0x0006f4ad) popup_clock_digital_window_t1_ParamLimits

0x1719,	// (0x00067583) main_image_pane_t1

0x7b61,	// (0x0006d9cb) aid_size_cell_calc_ParamLimits

0x7b61,	// (0x0006d9cb) aid_size_cell_calc

0xa64e,	// (0x000704b8) popup_blid_sat_info2_window_ParamLimits

0xa64e,	// (0x000704b8) popup_blid_sat_info2_window

0x2b73,	// (0x000689dd) aid_size_cell_blid

0x2b7b,	// (0x000689e5) bg_popup_window_pane_cp07

0x2b9e,	// (0x00068a08) grid_popup_blid_pane

0x2ba8,	// (0x00068a12) heading_pane_cp05_ParamLimits

0x2ba8,	// (0x00068a12) heading_pane_cp05

0x2c72,	// (0x00068adc) cell_popup_blid_pane_ParamLimits

0x2c72,	// (0x00068adc) cell_popup_blid_pane

0x2c96,	// (0x00068b00) cell_popup_blid_pane_g1

0x2c9e,	// (0x00068b08) cell_popup_blid_pane_t1

0xad67,	// (0x00070bd1) mup2_indicator_pane_ParamLimits

0xad67,	// (0x00070bd1) mup2_indicator_pane

0x1440,	// (0x000672aa) mup2_visualizer_osc_pane

0x29db,	// (0x00068845) mup2_visualizer_spec_pane_ParamLimits

0x29db,	// (0x00068845) mup2_visualizer_spec_pane

0xaf59,	// (0x00070dc3) mup2_spec_half_pane

0xaf62,	// (0x00070dcc) mup2_spec_half_pane_cp

0xaf6c,	// (0x00070dd6) mup2_spec_bar_pane_ParamLimits

0xaf6c,	// (0x00070dd6) mup2_spec_bar_pane

0x292a,	// (0x00068794) mup2_spec_bar_pane_g1

0x2934,	// (0x0006879e) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00075480) mup2_spec_bar_pane_g

0xaf8b,	// (0x00070df5) mup2_osc_middle_pane

0x2946,	// (0x000687b0) mup2_visualizer_osc_pane_g1

0x0103,	// (0x00065f6d) popup_number_entry_window_t1_ParamLimits

0x0116,	// (0x00065f80) popup_number_entry_window_t2_ParamLimits

0x0128,	// (0x00065f92) popup_number_entry_window_t3_ParamLimits

0x79a8,	// (0x0006d812) popup_number_entry_window_t5_ParamLimits

0x79a8,	// (0x0006d812) popup_number_entry_window_t5

0xf0d8,	// (0x00074f42) popup_number_entry_window_t_ParamLimits

0x013a,	// (0x00065fa4) text_title_cp2_ParamLimits

0x9e6d,	// (0x0006fcd7) aid_hotspot_pointer_text2_pane

0x9f07,	// (0x0006fd71) main_viewer_pane_g9_ParamLimits

0x9f07,	// (0x0006fd71) main_viewer_pane_g9

0x0d85,	// (0x00066bef) cale_month_pane_t1_ParamLimits

0x0df0,	// (0x00066c5a) bg_cale_pane_ParamLimits

0x0e08,	// (0x00066c72) list_cale_pane_ParamLimits

0x09e0,	// (0x0006684a) listscroll_cale_day_pane_t1

0x0e19,	// (0x00066c83) scroll_pane_cp09_ParamLimits

0x9c2a,	// (0x0006fa94) main_mup_eq_pane_t1_ParamLimits

0x9c2a,	// (0x0006fa94) main_mup_eq_pane_t1

0x9c44,	// (0x0006faae) main_mup_eq_pane_t2_ParamLimits

0x9c44,	// (0x0006faae) main_mup_eq_pane_t2

0x9c5e,	// (0x0006fac8) main_mup_eq_pane_t3_ParamLimits

0x9c5e,	// (0x0006fac8) main_mup_eq_pane_t3

0x9c76,	// (0x0006fae0) main_mup_eq_pane_t4_ParamLimits

0x9c76,	// (0x0006fae0) main_mup_eq_pane_t4

0x9c8e,	// (0x0006faf8) main_mup_eq_pane_t5_ParamLimits

0x9c8e,	// (0x0006faf8) main_mup_eq_pane_t5

0x9ca6,	// (0x0006fb10) main_mup_eq_pane_t6_ParamLimits

0x9ca6,	// (0x0006fb10) main_mup_eq_pane_t6

0x9cba,	// (0x0006fb24) main_mup_eq_pane_t7_ParamLimits

0x9cba,	// (0x0006fb24) main_mup_eq_pane_t7

0x9cce,	// (0x0006fb38) main_mup_eq_pane_t8_ParamLimits

0x9cce,	// (0x0006fb38) main_mup_eq_pane_t8

0x9ce4,	// (0x0006fb4e) main_mup_eq_pane_t9_ParamLimits

0x9ce4,	// (0x0006fb4e) main_mup_eq_pane_t9

0x9cfc,	// (0x0006fb66) main_mup_eq_pane_t10_ParamLimits

0x9cfc,	// (0x0006fb66) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x000752cf) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x000752cf) main_mup_eq_pane_t

0x9db9,	// (0x0006fc23) mup_equalizer_pane_cp5_ParamLimits

0x9dcf,	// (0x0006fc39) mup_equalizer_pane_cp6_ParamLimits

0x9de7,	// (0x0006fc51) mup_equalizer_pane_cp7_ParamLimits

0x7688,	// (0x0006d4f2) main_gallery_pane

0x294f,	// (0x000687b9) smil2_volume_pane

0x296a,	// (0x000687d4) smil_status_volume_pane_g1_ParamLimits

0x2957,	// (0x000687c1) smil_status_volume_pane_g2_ParamLimits

0xa871,	// (0x000706db) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x00075485) smil_status_volume_pane_g_ParamLimits

0x2b7b,	// (0x000689e5) bg_popup_window_pane_cp07_ParamLimits

0x2b89,	// (0x000689f3) blid_firmament_pane

0xaf94,	// (0x00070dfe) aid_size_cell_gallery_ParamLimits

0xaf94,	// (0x00070dfe) aid_size_cell_gallery

0xafa2,	// (0x00070e0c) grid_gallery_pane_ParamLimits

0xafa2,	// (0x00070e0c) grid_gallery_pane

0xafb2,	// (0x00070e1c) cell_gallery_pane_ParamLimits

0xafb2,	// (0x00070e1c) cell_gallery_pane

0x2cac,	// (0x00068b16) bg_cell_gallery_focus_pane_ParamLimits

0x2cac,	// (0x00068b16) bg_cell_gallery_focus_pane

0x2cbe,	// (0x00068b28) cell_gallery_pane_g1_ParamLimits

0x2cbe,	// (0x00068b28) cell_gallery_pane_g1

0xb000,	// (0x00070e6a) cell_gallery_pane_g2_ParamLimits

0xb000,	// (0x00070e6a) cell_gallery_pane_g2

0xb00d,	// (0x00070e77) cell_gallery_pane_g3_ParamLimits

0xb00d,	// (0x00070e77) cell_gallery_pane_g3

0x2cca,	// (0x00068b34) cell_gallery_pane_g4_ParamLimits

0x2cca,	// (0x00068b34) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x00075533) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x00075533) cell_gallery_pane_g

0x2cd6,	// (0x00068b40) bg_cell_gallery_focus_pane_g1

0x2cde,	// (0x00068b48) bg_cell_gallery_focus_pane_g2

0x2ce6,	// (0x00068b50) bg_cell_gallery_focus_pane_g3

0x2cee,	// (0x00068b58) bg_cell_gallery_focus_pane_g4

0x2cf6,	// (0x00068b60) bg_cell_gallery_focus_pane_g5

0x2cfe,	// (0x00068b68) bg_cell_gallery_focus_pane_g6

0x2d06,	// (0x00068b70) bg_cell_gallery_focus_pane_g7

0x2d0e,	// (0x00068b78) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x0007553c) bg_cell_gallery_focus_pane_g

0x2d16,	// (0x00068b80) aid_firma_cardinal

0x2d2a,	// (0x00068b94) blid_firmament_pane_t1

0x2d41,	// (0x00068bab) blid_firmament_pane_t2

0x2d58,	// (0x00068bc2) blid_firmament_pane_t3

0x2d6f,	// (0x00068bd9) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x0007554d) blid_firmament_pane_t

0x2d86,	// (0x00068bf0) blid_sat_info_pane

0x2d96,	// (0x00068c00) blid_sat_info_pane_g1

0x2d96,	// (0x00068c00) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x00075556) blid_sat_info_pane_g

0x2da0,	// (0x00068c0a) blid_sat_info_pane_t1

0x2dae,	// (0x00068c18) smil2_volume_content_pane

0x2db7,	// (0x00068c21) smil2_volume_pane_g1

0x2dbf,	// (0x00068c29) smil2_volume_content_pane_g1

0x2dc8,	// (0x00068c32) smil2_volume_content_pane_g2

0x2dd1,	// (0x00068c3b) smil2_volume_content_pane_g3

0x2dda,	// (0x00068c44) smil2_volume_content_pane_g4

0x2de3,	// (0x00068c4d) smil2_volume_content_pane_g5

0x2dec,	// (0x00068c56) smil2_volume_content_pane_g6

0x2df5,	// (0x00068c5f) smil2_volume_content_pane_g7

0x2dfe,	// (0x00068c68) smil2_volume_content_pane_g8

0x2e07,	// (0x00068c71) smil2_volume_content_pane_g9

0x2e10,	// (0x00068c7a) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x0007555b) smil2_volume_content_pane_g

0x8141,	// (0x0006dfab) cale_week_day_heading_pane_t1_ParamLimits

0x815a,	// (0x0006dfc4) cale_week_day_heading_pane_t2_ParamLimits

0x8173,	// (0x0006dfdd) cale_week_day_heading_pane_t3_ParamLimits

0x818c,	// (0x0006dff6) cale_week_day_heading_pane_t4_ParamLimits

0x81a5,	// (0x0006e00f) cale_week_day_heading_pane_t5_ParamLimits

0x81be,	// (0x0006e028) cale_week_day_heading_pane_t6_ParamLimits

0x81d7,	// (0x0006e041) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x00075047) cale_week_day_heading_pane_t_ParamLimits

0x09f2,	// (0x0006685c) bg_cale_side_pane_ParamLimits

0x81f0,	// (0x0006e05a) cale_week_time_pane_t1_ParamLimits

0x8208,	// (0x0006e072) cale_week_time_pane_t2_ParamLimits

0x8220,	// (0x0006e08a) cale_week_time_pane_t3_ParamLimits

0x8238,	// (0x0006e0a2) cale_week_time_pane_t4_ParamLimits

0x8250,	// (0x0006e0ba) cale_week_time_pane_t5_ParamLimits

0x8268,	// (0x0006e0d2) cale_week_time_pane_t6_ParamLimits

0x8280,	// (0x0006e0ea) cale_week_time_pane_t7_ParamLimits

0x82a0,	// (0x0006e10a) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x00075056) cale_week_time_pane_t_ParamLimits

0x82c0,	// (0x0006e12a) cell_cale_week_pane_g2_ParamLimits

0x09f2,	// (0x0006685c) bg_cale_side_pane_cp01_ParamLimits

0x92c1,	// (0x0006f12b) cale_month_week_pane_t1_ParamLimits

0x92d8,	// (0x0006f142) cale_month_week_pane_t2_ParamLimits

0x92ef,	// (0x0006f159) cale_month_week_pane_t3_ParamLimits

0x9306,	// (0x0006f170) cale_month_week_pane_t4_ParamLimits

0x931d,	// (0x0006f187) cale_month_week_pane_t5_ParamLimits

0x9338,	// (0x0006f1a2) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x0007512f) cale_month_week_pane_t_ParamLimits

0x941d,	// (0x0006f287) cell_cale_month_pane_g1_ParamLimits

0x7688,	// (0x0006d4f2) main_cale_event_viewer_pane

0x7688,	// (0x0006d4f2) listscroll_cale_event_viewer_pane

0x2e19,	// (0x00068c83) list_cale_ev_pane

0x2e21,	// (0x00068c8b) scroll_pane_cp023

0x2e2d,	// (0x00068c97) field_cale_ev_pane_ParamLimits

0x2e2d,	// (0x00068c97) field_cale_ev_pane

0x2e4b,	// (0x00068cb5) field_cale_ev_content_pane_ParamLimits

0x2e4b,	// (0x00068cb5) field_cale_ev_content_pane

0x2e57,	// (0x00068cc1) field_cale_ev_pane_g1_ParamLimits

0x2e57,	// (0x00068cc1) field_cale_ev_pane_g1

0x2e63,	// (0x00068ccd) field_cale_ev_pane_g2_ParamLimits

0x2e63,	// (0x00068ccd) field_cale_ev_pane_g2

0x2e7b,	// (0x00068ce5) field_cale_ev_pane_g3_ParamLimits

0x2e7b,	// (0x00068ce5) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x00075570) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x00075570) field_cale_ev_pane_g

0x2e93,	// (0x00068cfd) field_cale_ev_pane_t1_ParamLimits

0x2e93,	// (0x00068cfd) field_cale_ev_pane_t1

0x2eaa,	// (0x00068d14) field_cale_ev_content_pane_t1_ParamLimits

0x2eaa,	// (0x00068d14) field_cale_ev_content_pane_t1

0x15c9,	// (0x00067433) bg_button_pane_cp01

0x0846,	// (0x000666b0) listscroll_cale_week_pane_ParamLimits

0x7f1d,	// (0x0006dd87) popup_toolbar_window_cp01

0x09e0,	// (0x0006684a) listscroll_cale_week_pane_t1_ParamLimits

0x0846,	// (0x000666b0) listscroll_cale_day_pane_ParamLimits

0x7f1d,	// (0x0006dd87) popup_toolbar_window_cp02

0x09e0,	// (0x0006684a) listscroll_cale_day_pane_t1_ParamLimits

0x0846,	// (0x000666b0) main_cale_month_pane_ParamLimits

0xa755,	// (0x000705bf) popup_toolbar_window_cp03_ParamLimits

0xa755,	// (0x000705bf) popup_toolbar_window_cp03

0xa08f,	// (0x0006fef9) main_image_pane_g2_ParamLimits

0xa08f,	// (0x0006fef9) main_image_pane_g2

0xa09b,	// (0x0006ff05) main_image_pane_g3_ParamLimits

0xa09b,	// (0x0006ff05) main_image_pane_g3

0x0002,

0xf4f7,	// (0x00075361) main_image_pane_g_ParamLimits

0xf4f7,	// (0x00075361) main_image_pane_g

0x1719,	// (0x00067583) main_image_pane_t1_ParamLimits

0xa0a7,	// (0x0006ff11) main_image_pane_t2_ParamLimits

0xa0a7,	// (0x0006ff11) main_image_pane_t2

0xa0b9,	// (0x0006ff23) main_image_pane_t3_ParamLimits

0xa0b9,	// (0x0006ff23) main_image_pane_t3

0xa0cb,	// (0x0006ff35) main_image_pane_t4_ParamLimits

0xa0cb,	// (0x0006ff35) main_image_pane_t4

0x0003,

0xf4fe,	// (0x00075368) main_image_pane_t_ParamLimits

0xf4fe,	// (0x00075368) main_image_pane_t

0xa0dd,	// (0x0006ff47) popup_image_details_window_cp01

0xa0e7,	// (0x0006ff51) popup_toobar_trans_pane_cp01_ParamLimits

0xa0e7,	// (0x0006ff51) popup_toobar_trans_pane_cp01

0xa6a5,	// (0x0007050f) popup_image_details_window_ParamLimits

0xa6a5,	// (0x0007050f) popup_image_details_window

0xa6b3,	// (0x0007051d) popup_image_focus_window

0xa9f0,	// (0x0007085a) camera2_autofocus_pane_ParamLimits

0xa9f0,	// (0x0007085a) camera2_autofocus_pane

0x7688,	// (0x0006d4f2) bg_popup_sub_pane_cp06

0x2ec8,	// (0x00068d32) popup_image_focus_window_g1

0x2ed0,	// (0x00068d3a) popup_image_focus_window_g2

0x2ed8,	// (0x00068d42) popup_image_focus_window_g3

0x2ee0,	// (0x00068d4a) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x00075577) popup_image_focus_window_g

0x2ee8,	// (0x00068d52) popup_image_focus_window_t1

0x2ef6,	// (0x00068d60) popup_image_focus_window_t2

0x2f06,	// (0x00068d70) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x00075580) popup_image_focus_window_t

0x2f14,	// (0x00068d7e) camera2_autofocus_pane_g1

0x2890,	// (0x000686fa) bg_tb_trans_pane_cp01

0x2f22,	// (0x00068d8c) popup_image_details_window_g1

0x2f35,	// (0x00068d9f) popup_image_details_window_g2

0x0002,

0xf728,	// (0x00075592) popup_image_details_window_g

0x2f5e,	// (0x00068dc8) popup_image_details_window_t1

0x2f70,	// (0x00068dda) popup_image_details_window_t2

0x2f89,	// (0x00068df3) popup_image_details_window_t3

0x2f9d,	// (0x00068e07) popup_image_details_window_t4

0x2fb8,	// (0x00068e22) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x00075599) popup_image_details_window_t

0x0818,	// (0x00066682) bg_calc_paper_pane_ParamLimits

0x7688,	// (0x0006d4f2) grid_highlight_pane_cp013

0x7cb2,	// (0x0006db1c) list_calc_pane_ParamLimits

0x7cc4,	// (0x0006db2e) scroll_pane_cp024

0x0846,	// (0x000666b0) bg_calc_display_pane_ParamLimits

0x7ccc,	// (0x0006db36) calc_display_pane_t1_ParamLimits

0x7ce1,	// (0x0006db4b) calc_display_pane_t2_ParamLimits

0x7cf6,	// (0x0006db60) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x00074fc9) calc_display_pane_t_ParamLimits

0x7dd2,	// (0x0006dc3c) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x00074fe6) cell_calc_pane_g

0x7ddb,	// (0x0006dc45) cell_calc_pane_t1

0x08c9,	// (0x00066733) grid_highlight_pane_cp02_ParamLimits

0x08df,	// (0x00066749) toolbar_button_pane_cp01_ParamLimits

0x08df,	// (0x00066749) toolbar_button_pane_cp01

0x175e,	// (0x000675c8) temp_image_control_pane_ParamLimits

0x175e,	// (0x000675c8) temp_image_control_pane

0x2890,	// (0x000686fa) main_mp3_pane

0x2fd2,	// (0x00068e3c) temp_image_control_pane_g1_ParamLimits

0x2fd2,	// (0x00068e3c) temp_image_control_pane_g1

0x2fe0,	// (0x00068e4a) temp_image_control_pane_g2_ParamLimits

0x2fe0,	// (0x00068e4a) temp_image_control_pane_g2

0x2ff2,	// (0x00068e5c) temp_image_control_pane_g3_ParamLimits

0x2ff2,	// (0x00068e5c) temp_image_control_pane_g3

0xb04a,	// (0x00070eb4) temp_image_control_pane_g4_ParamLimits

0xb04a,	// (0x00070eb4) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x000755a4) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x000755a4) temp_image_control_pane_g

0x2fd2,	// (0x00068e3c) main_mp3_pane_g1

0xb05b,	// (0x00070ec5) main_mp3_pane_g2

0x0007,

0xf743,	// (0x000755ad) main_mp3_pane_g

0x3035,	// (0x00068e9f) main_mp3_pane_t1

0x0a65,	// (0x000668cf) main_camera_pane_g8_ParamLimits

0x0a65,	// (0x000668cf) main_camera_pane_g8

0x8556,	// (0x0006e3c0) main_video_pane_g7_ParamLimits

0x8556,	// (0x0006e3c0) main_video_pane_g7

0xab38,	// (0x000709a2) main_camera2_pane_t7_ParamLimits

0xab38,	// (0x000709a2) main_camera2_pane_t7

0x0bad,	// (0x00066a17) scroll_pane_cp025_ParamLimits

0x0bad,	// (0x00066a17) scroll_pane_cp025

0x0bc1,	// (0x00066a2b) scroll_pane_cp026_ParamLimits

0x0bc1,	// (0x00066a2b) scroll_pane_cp026

0x0bd0,	// (0x00066a3a) wml_content_pane_ParamLimits

0x7688,	// (0x0006d4f2) main_touch_calib_pane

0xb0ff,	// (0x00070f69) main_touch_calib_pane_g1

0xb10b,	// (0x00070f75) main_touch_calib_pane_g2

0xb117,	// (0x00070f81) main_touch_calib_pane_g3

0xb123,	// (0x00070f8d) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x000755cb) main_touch_calib_pane_g

0xb12f,	// (0x00070f99) main_touch_calib_pane_t1

0xb146,	// (0x00070fb0) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x000755d4) main_touch_calib_pane_t

0x1381,	// (0x000671eb) mup_progress_pane_cp02

0x13a0,	// (0x0006720a) navi_pane_g1

0x1402,	// (0x0006726c) navi_pane_mp_t3

0x2890,	// (0x000686fa) main_mp3_pane_ParamLimits

0xa793,	// (0x000705fd) navi_pane_ParamLimits

0x2fd2,	// (0x00068e3c) main_mp3_pane_g1_ParamLimits

0xb05b,	// (0x00070ec5) main_mp3_pane_g2_ParamLimits

0xb067,	// (0x00070ed1) main_mp3_pane_g3_ParamLimits

0xb067,	// (0x00070ed1) main_mp3_pane_g3

0xb073,	// (0x00070edd) main_mp3_pane_g4_ParamLimits

0xb073,	// (0x00070edd) main_mp3_pane_g4

0x3002,	// (0x00068e6c) main_mp3_pane_g5_ParamLimits

0x3002,	// (0x00068e6c) main_mp3_pane_g5

0x3010,	// (0x00068e7a) main_mp3_pane_g6_ParamLimits

0x3010,	// (0x00068e7a) main_mp3_pane_g6

0x301d,	// (0x00068e87) main_mp3_pane_g7_ParamLimits

0x301d,	// (0x00068e87) main_mp3_pane_g7

0x3029,	// (0x00068e93) main_mp3_pane_g8_ParamLimits

0x3029,	// (0x00068e93) main_mp3_pane_g8

0xf743,	// (0x000755ad) main_mp3_pane_g_ParamLimits

0xb07f,	// (0x00070ee9) main_mp3_pane_t2

0xb08f,	// (0x00070ef9) main_mp3_pane_t3

0x3043,	// (0x00068ead) main_mp3_pane_t4

0x3051,	// (0x00068ebb) main_mp3_pane_t5

0x0005,

0xf754,	// (0x000755be) main_mp3_pane_t

0x305f,	// (0x00068ec9) mup_progress_pane_cp01

0x76da,	// (0x0006d544) aid_zoom_text_secondary2

0x2e19,	// (0x00068c83) list_cale_ev2_pane

0x2e21,	// (0x00068c8b) scroll_pane_cp023_ParamLimits

0xb19b,	// (0x00071005) field_cale_ev2_pane_ParamLimits

0xb19b,	// (0x00071005) field_cale_ev2_pane

0xb1c4,	// (0x0007102e) field_cale_ev2_pane_g1_ParamLimits

0xb1c4,	// (0x0007102e) field_cale_ev2_pane_g1

0xb1d0,	// (0x0007103a) field_cale_ev2_pane_g2_ParamLimits

0xb1d0,	// (0x0007103a) field_cale_ev2_pane_g2

0xb1e8,	// (0x00071052) field_cale_ev2_pane_g3_ParamLimits

0xb1e8,	// (0x00071052) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x000755df) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x000755df) field_cale_ev2_pane_g

0x67dd,	// (0x0006c647) field_cale_ev2_pane_t1_ParamLimits

0x67dd,	// (0x0006c647) field_cale_ev2_pane_t1

0x67f4,	// (0x0006c65e) field_cale_ev2_pane_t2_ParamLimits

0x67f4,	// (0x0006c65e) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x000755e8) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x000755e8) field_cale_ev2_pane_t

0x9f6f,	// (0x0006fdd9) main_postcard_pane_g5_ParamLimits

0x9f6f,	// (0x0006fdd9) main_postcard_pane_g5

0x9f7d,	// (0x0006fde7) main_postcard_pane_g6_ParamLimits

0x9f7d,	// (0x0006fde7) main_postcard_pane_g6

0x83a0,	// (0x0006e20a) camera2_autofocus_pane_cp_ParamLimits

0x83a0,	// (0x0006e20a) camera2_autofocus_pane_cp

0x2890,	// (0x000686fa) main_mup3_pane

0xb22c,	// (0x00071096) main_mup3_pane_g1_ParamLimits

0xb22c,	// (0x00071096) main_mup3_pane_g1

0xb24d,	// (0x000710b7) main_mup3_pane_g2_ParamLimits

0xb24d,	// (0x000710b7) main_mup3_pane_g2

0xb2c5,	// (0x0007112f) main_mup3_pane_g3_ParamLimits

0xb2c5,	// (0x0007112f) main_mup3_pane_g3

0xb308,	// (0x00071172) main_mup3_pane_g4_ParamLimits

0xb308,	// (0x00071172) main_mup3_pane_g4

0xb34b,	// (0x000711b5) main_mup3_pane_g5_ParamLimits

0xb34b,	// (0x000711b5) main_mup3_pane_g5

0xb38e,	// (0x000711f8) main_mup3_pane_g6_ParamLimits

0xb38e,	// (0x000711f8) main_mup3_pane_g6

0x3067,	// (0x00068ed1) main_mup3_pane_g7_ParamLimits

0x3067,	// (0x00068ed1) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x000755f8) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x000755f8) main_mup3_pane_g

0xb404,	// (0x0007126e) main_mup3_pane_t1_ParamLimits

0xb404,	// (0x0007126e) main_mup3_pane_t1

0xb473,	// (0x000712dd) main_mup3_pane_t2_ParamLimits

0xb473,	// (0x000712dd) main_mup3_pane_t2

0xb53c,	// (0x000713a6) main_mup3_pane_t4_ParamLimits

0xb53c,	// (0x000713a6) main_mup3_pane_t4

0xb58a,	// (0x000713f4) main_mup3_pane_t5_ParamLimits

0xb58a,	// (0x000713f4) main_mup3_pane_t5

0xb63a,	// (0x000714a4) main_mup3_pane_t6_ParamLimits

0xb63a,	// (0x000714a4) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x00075609) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x00075609) main_mup3_pane_t

0xb6e6,	// (0x00071550) mup3_progress_pane_ParamLimits

0xb6e6,	// (0x00071550) mup3_progress_pane

0xb764,	// (0x000715ce) popup_mup3_control_window_ParamLimits

0xb764,	// (0x000715ce) popup_mup3_control_window

0x3075,	// (0x00068edf) popup_mup3_text_window

0xb77d,	// (0x000715e7) mup3_progress_pane_t1

0xb79c,	// (0x00071606) mup3_progress_pane_t2

0x307d,	// (0x00068ee7) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x00075616) mup3_progress_pane_t

0x309a,	// (0x00068f04) mup_progress_pane_cp03

0x7688,	// (0x0006d4f2) bg_tb_trans_pane_cp04

0xb7bb,	// (0x00071625) mup3_volume_pane

0xb7c3,	// (0x0007162d) popup_mup3_control_window_g1

0xb7cc,	// (0x00071636) mup3_volume_pane_g1

0xb7d5,	// (0x0007163f) mup3_volume_pane_g2

0xb7de,	// (0x00071648) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x0007561d) mup3_volume_pane_g

0x7688,	// (0x0006d4f2) bg_tb_trans_pane_cp03

0x30aa,	// (0x00068f14) popup_mup3_text_window_g1

0x30b2,	// (0x00068f1c) popup_mup3_text_window_t1

0x08a0,	// (0x0006670a) list_calc_item_pane_g1_ParamLimits

0x2aa5,	// (0x0006890f) mup_volume_pane_cp_g1

0xb15d,	// (0x00070fc7) main_touch_calib_pane_t3

0xb171,	// (0x00070fdb) main_touch_calib_pane_t4

0xb185,	// (0x00070fef) main_touch_calib_pane_t5

0x7692,	// (0x0006d4fc) aid_cell_size_toolbar2

0x769a,	// (0x0006d504) aid_popup3_width_pane

0x64d0,	// (0x0006c33a) aid_zoom_text_msg_primary

0x8377,	// (0x0006e1e1) vorec_t7

0x0864,	// (0x000666ce) bg_calc_paper_pane_g1_ParamLimits

0x087c,	// (0x000666e6) bg_calc_paper_pane_g2_ParamLimits

0x0870,	// (0x000666da) bg_calc_paper_pane_g3_ParamLimits

0x0894,	// (0x000666fe) bg_calc_paper_pane_g4_ParamLimits

0x0888,	// (0x000666f2) bg_calc_paper_pane_g5_ParamLimits

0x7d35,	// (0x0006db9f) bg_calc_paper_pane_g6_ParamLimits

0x7d46,	// (0x0006dbb0) bg_calc_paper_pane_g7_ParamLimits

0x7d57,	// (0x0006dbc1) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x00074fd0) bg_calc_paper_pane_g_ParamLimits

0x7d68,	// (0x0006dbd2) calc_bg_paper_pane_g9_ParamLimits

0x8487,	// (0x0006e2f1) image_qvga_pane_ParamLimits

0x8487,	// (0x0006e2f1) image_qvga_pane

0x0751,	// (0x000665bb) bg_popup_sub_pane_cp04_ParamLimits

0x1695,	// (0x000674ff) popup_mup_playback_window_g1_ParamLimits

0x16a1,	// (0x0006750b) popup_mup_playback_window_t1_ParamLimits

0x16b6,	// (0x00067520) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x0007535c) popup_mup_playback_window_t_ParamLimits

0xac67,	// (0x00070ad1) main_mup2_pane_g3_ParamLimits

0xac67,	// (0x00070ad1) main_mup2_pane_g3

0x873f,	// (0x0006e5a9) popup_toolbar_window_cp04

0x1a98,	// (0x00067902) popup_call2_audio_second_window_g3_ParamLimits

0x1a98,	// (0x00067902) popup_call2_audio_second_window_g3

0x1ea2,	// (0x00067d0c) popup_call2_audio_first_window_g4_ParamLimits

0x1ea2,	// (0x00067d0c) popup_call2_audio_first_window_g4

0x2521,	// (0x0006838b) popup_call2_audio_in_window_g4_ParamLimits

0x2521,	// (0x0006838b) popup_call2_audio_in_window_g4

0xa082,	// (0x0006feec) aid_area_sk_bg_cut_ParamLimits

0xa082,	// (0x0006feec) aid_area_sk_bg_cut

0x16cb,	// (0x00067535) aid_area_sk_bg_cut_2_ParamLimits

0x16cb,	// (0x00067535) aid_area_sk_bg_cut_2

0xaff0,	// (0x00070e5a) aid_placing_details_win

0xaff8,	// (0x00070e62) aid_placing_details_win_2

0x2f14,	// (0x00068d7e) camera2_autofocus_pane_g1_ParamLimits

0x78e7,	// (0x0006d751) popup_fixed_preview_cale_window_ParamLimits

0x78e7,	// (0x0006d751) popup_fixed_preview_cale_window

0x146c,	// (0x000672d6) navi_slider_pane_g3

0x1463,	// (0x000672cd) navi_slider_pane_g4

0x145a,	// (0x000672c4) navi_slider_pane_g5

0x146c,	// (0x000672d6) navi_slider_pane_g6

0x99be,	// (0x0006f828) navi_slider_pane_g7

0x1596,	// (0x00067400) mup_scale_pane_g3

0x159f,	// (0x00067409) mup_scale_pane_g4

0x15a8,	// (0x00067412) mup_scale_pane_g5

0x9dff,	// (0x0006fc69) mup_scale_pane_g6

0x9e08,	// (0x0006fc72) mup_scale_pane_g7

0x146c,	// (0x000672d6) cams2_slider_pane_g3

0x2b5a,	// (0x000689c4) cams2_slider_pane_g4

0xaf48,	// (0x00070db2) cams2_slider_pane_g5

0x146c,	// (0x000672d6) cams2_slider_pane_g6

0xaf50,	// (0x00070dba) cams2_slider_pane_g7

0x2d96,	// (0x00068c00) camera2_autofocus_pane_cp_g1

0x30c0,	// (0x00068f2a) bg_popup_preview_window_pane_cp02_ParamLimits

0x30c0,	// (0x00068f2a) bg_popup_preview_window_pane_cp02

0x30cc,	// (0x00068f36) list_fp_cale_pane_ParamLimits

0x30cc,	// (0x00068f36) list_fp_cale_pane

0x30d8,	// (0x00068f42) popup_fixed_preview_cale_window_t1_ParamLimits

0x30d8,	// (0x00068f42) popup_fixed_preview_cale_window_t1

0xb7e7,	// (0x00071651) popup_fixed_preview_cale_window_t2_ParamLimits

0xb7e7,	// (0x00071651) popup_fixed_preview_cale_window_t2

0xb7fc,	// (0x00071666) popup_fixed_preview_cale_window_t3_ParamLimits

0xb7fc,	// (0x00071666) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x00075624) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x00075624) popup_fixed_preview_cale_window_t

0xb811,	// (0x0007167b) list_single_fp_cale_pane_ParamLimits

0xb811,	// (0x0007167b) list_single_fp_cale_pane

0x30f6,	// (0x00068f60) list_single_fp_cale_pane_g1_ParamLimits

0x30f6,	// (0x00068f60) list_single_fp_cale_pane_g1

0x3102,	// (0x00068f6c) list_single_fp_cale_pane_g2_ParamLimits

0x3102,	// (0x00068f6c) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x0007562b) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x0007562b) list_single_fp_cale_pane_g

0x311b,	// (0x00068f85) list_single_fp_cale_pane_t1_ParamLimits

0x311b,	// (0x00068f85) list_single_fp_cale_pane_t1

0x312d,	// (0x00068f97) list_single_fp_cale_pane_t2_ParamLimits

0x312d,	// (0x00068f97) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x00075632) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x00075632) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7688,	// (0x0006d4f2) main_dialer_pane

0xb823,	// (0x0007168d) aid_cell_size_keypad

0xb82d,	// (0x00071697) dialer_ne_pane

0xb837,	// (0x000716a1) grid_dialer_command_1_pane

0xb83f,	// (0x000716a9) grid_dialer_command_2_pane

0xb847,	// (0x000716b1) grid_dialer_keypad_pane

0xb859,	// (0x000716c3) bg_popup_call_pane_cp06_ParamLimits

0xb859,	// (0x000716c3) bg_popup_call_pane_cp06

0xb865,	// (0x000716cf) dialer_ne_clear_pane_ParamLimits

0xb865,	// (0x000716cf) dialer_ne_clear_pane

0x3160,	// (0x00068fca) dialer_ne_pane_g1

0x3168,	// (0x00068fd2) dialer_ne_pane_t1_ParamLimits

0x3168,	// (0x00068fd2) dialer_ne_pane_t1

0xb871,	// (0x000716db) dialer_ne_pane_t2_ParamLimits

0xb871,	// (0x000716db) dialer_ne_pane_t2

0xb88e,	// (0x000716f8) dialer_ne_pane_t3_ParamLimits

0xb88e,	// (0x000716f8) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x00075637) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x00075637) dialer_ne_pane_t

0xb8b2,	// (0x0007171c) dialer_ne_pane_t3_copy1_ParamLimits

0xb8b2,	// (0x0007171c) dialer_ne_pane_t3_copy1

0xb8d6,	// (0x00071740) cell_dialer_keypad_pane_ParamLimits

0xb8d6,	// (0x00071740) cell_dialer_keypad_pane

0xb8ed,	// (0x00071757) cell_dialer_command_1_pane_ParamLimits

0xb8ed,	// (0x00071757) cell_dialer_command_1_pane

0xb903,	// (0x0007176d) cell_dialer_command_2_pane_ParamLimits

0xb903,	// (0x0007176d) cell_dialer_command_2_pane

0x317a,	// (0x00068fe4) bg_button_pane_cp02_ParamLimits

0x317a,	// (0x00068fe4) bg_button_pane_cp02

0xb912,	// (0x0007177c) cell_dialer_keypad_pane_g1_ParamLimits

0xb912,	// (0x0007177c) cell_dialer_keypad_pane_g1

0x317a,	// (0x00068fe4) bg_button_pane_cp03_ParamLimits

0x317a,	// (0x00068fe4) bg_button_pane_cp03

0xb927,	// (0x00071791) cell_dialer_command_1_pane_g1_ParamLimits

0xb927,	// (0x00071791) cell_dialer_command_1_pane_g1

0x3186,	// (0x00068ff0) bg_button_pane_cp04

0xb93b,	// (0x000717a5) cell_dialer_command_2_pane_g1

0x1440,	// (0x000672aa) bg_button_pane_cp06

0x318e,	// (0x00068ff8) dialer_ne_clear_pane_g1

0x9901,	// (0x0006f76b) navi_pane_g2

0x992f,	// (0x0006f799) navi_pane_g3

0x0002,

0xf3f5,	// (0x0007525f) navi_pane_g

0x995a,	// (0x0006f7c4) navi_pane_mv_g2

0x9981,	// (0x0006f7eb) navi_pane_mv_g5

0x9989,	// (0x0006f7f3) navi_pane_mv_t1

0x0846,	// (0x000666b0) main_clock2_pane

0xb96c,	// (0x000717d6) main_clock2_list_pane_ParamLimits

0xb96c,	// (0x000717d6) main_clock2_list_pane

0xb994,	// (0x000717fe) main_clock2_pane_t1_ParamLimits

0xb994,	// (0x000717fe) main_clock2_pane_t1

0xb9b6,	// (0x00071820) main_clock2_pane_t2_ParamLimits

0xb9b6,	// (0x00071820) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x0007563e) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x0007563e) main_clock2_pane_t

0xba11,	// (0x0007187b) popup_clock_analogue_window_cp03_ParamLimits

0xba11,	// (0x0007187b) popup_clock_analogue_window_cp03

0xba2f,	// (0x00071899) popup_clock_digital_window_cp02_ParamLimits

0xba2f,	// (0x00071899) popup_clock_digital_window_cp02

0xba9c,	// (0x00071906) main_clock2_list_single_pane_ParamLimits

0xba9c,	// (0x00071906) main_clock2_list_single_pane

0x1440,	// (0x000672aa) list_highlight_pane_cp05

0x3196,	// (0x00069000) main_clock2_list_single_pane_t1

0x873f,	// (0x0006e5a9) popup_toolbar_window_cp04_ParamLimits

0xb01a,	// (0x00070e84) camera2_autofocus_pane_g2_ParamLimits

0xb01a,	// (0x00070e84) camera2_autofocus_pane_g2

0xb026,	// (0x00070e90) camera2_autofocus_pane_g3_ParamLimits

0xb026,	// (0x00070e90) camera2_autofocus_pane_g3

0xb032,	// (0x00070e9c) camera2_autofocus_pane_g4_ParamLimits

0xb032,	// (0x00070e9c) camera2_autofocus_pane_g4

0xb03e,	// (0x00070ea8) camera2_autofocus_pane_g5_ParamLimits

0xb03e,	// (0x00070ea8) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x00075587) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x00075587) camera2_autofocus_pane_g

0xb20c,	// (0x00071076) camera2_autofocus_pane_cp_g2

0xb214,	// (0x0007107e) camera2_autofocus_pane_cp_g3

0xb21c,	// (0x00071086) camera2_autofocus_pane_cp_g4

0xb224,	// (0x0007108e) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x000755ed) camera2_autofocus_pane_cp_g

0xb851,	// (0x000716bb) popup_dialer_spcha_window

0x7688,	// (0x0006d4f2) bg_popup_sub_pane_cp07

0x31a4,	// (0x0006900e) list_spcha_pane

0x31ac,	// (0x00069016) list_single_spcha_pane_ParamLimits

0x31ac,	// (0x00069016) list_single_spcha_pane

0x7688,	// (0x0006d4f2) list_highlight_pane_cp06

0x31bd,	// (0x00069027) list_single_spcha_pane_t1

0x22cb,	// (0x00068135) popup_call2_audio_out_window_g4_ParamLimits

0x22cb,	// (0x00068135) popup_call2_audio_out_window_g4

0x7688,	// (0x0006d4f2) main_imed2_pane

0xa6bb,	// (0x00070525) popup_imed_adjust2_window

0xa6ce,	// (0x00070538) popup_imed_trans_window_ParamLimits

0xa6ce,	// (0x00070538) popup_imed_trans_window

0x2bd4,	// (0x00068a3e) popup_blid_sat_info2_window_t1

0x2be2,	// (0x00068a4c) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x0007551c) popup_blid_sat_info2_window_t

0xbb46,	// (0x000719b0) aid_size_cell_colour_35

0xbb60,	// (0x000719ca) aid_size_cell_colour_112

0xbb77,	// (0x000719e1) aid_size_cell_effect

0x2890,	// (0x000686fa) bg_tb_trans_pane_cp02

0x0fb7,	// (0x00066e21) heading_imed_pane

0xbb91,	// (0x000719fb) listscroll_imed_pane

0x31cb,	// (0x00069035) heading_imed_pane_g1

0x31d3,	// (0x0006903d) heading_imed_pane_t1

0x31e1,	// (0x0006904b) grid_imed_colour_35_pane_ParamLimits

0x31e1,	// (0x0006904b) grid_imed_colour_35_pane

0xbb9d,	// (0x00071a07) grid_imed_effect_pane

0x31f8,	// (0x00069062) list_imed_aspect_pane

0xbbad,	// (0x00071a17) scroll_pane_cp027_ParamLimits

0xbbad,	// (0x00071a17) scroll_pane_cp027

0xbbb9,	// (0x00071a23) cell_imed_effect_pane_ParamLimits

0xbbb9,	// (0x00071a23) cell_imed_effect_pane

0x3200,	// (0x0006906a) cell_imed_colour_pane_ParamLimits

0x3200,	// (0x0006906a) cell_imed_colour_pane

0x3242,	// (0x000690ac) cell_imed_colour_pane_g1_ParamLimits

0x3242,	// (0x000690ac) cell_imed_colour_pane_g1

0x3253,	// (0x000690bd) hgihlgiht_grid_pane_cp016_ParamLimits

0x3253,	// (0x000690bd) hgihlgiht_grid_pane_cp016

0xbbd1,	// (0x00071a3b) cell_imed_effect_pane_g1

0xbbd9,	// (0x00071a43) grid_highlight_pane_cp017

0x3264,	// (0x000690ce) list_imed_single_pane_ParamLimits

0x3264,	// (0x000690ce) list_imed_single_pane

0x7688,	// (0x0006d4f2) list_highlight_pane_cp07

0x3279,	// (0x000690e3) list_imed_aspect_pane_comp1_t1

0x2882,	// (0x000686ec) bg_tb_trans_pane_cp05

0x329b,	// (0x00069105) popup_imed_adjust2_window_g1

0x32c2,	// (0x0006912c) popup_imed_adjust2_window_t1

0x32da,	// (0x00069144) slider_imed_adjust_pane

0x32ee,	// (0x00069158) slider_imed_adjust_pane_g1

0x32fe,	// (0x00069168) slider_imed_adjust_pane_g2

0x330e,	// (0x00069178) slider_imed_adjust_pane_g3

0x331f,	// (0x00069189) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x0007565b) slider_imed_adjust_pane_g

0xbbe2,	// (0x00071a4c) aid_size_cell_clipart2

0xbbee,	// (0x00071a58) grid_imed_clipart_pane

0x3330,	// (0x0006919a) scroll_pane_cp031

0xbbf8,	// (0x00071a62) cell_imed_clipart_pane_ParamLimits

0xbbf8,	// (0x00071a62) cell_imed_clipart_pane

0xbc1a,	// (0x00071a84) cell_imed_clipart_pane_g1

0x7688,	// (0x0006d4f2) grid_highlight_pane_cp014

0xb978,	// (0x000717e2) main_clock2_pane_g1_ParamLimits

0xb978,	// (0x000717e2) main_clock2_pane_g1

0xba47,	// (0x000718b1) aid_call2_pane_cp10

0xba59,	// (0x000718c3) aid_call_pane_cp10

0x1375,	// (0x000671df) popup_clock_analogue_window_cp10_g1

0x1375,	// (0x000671df) popup_clock_analogue_window_cp10_g2

0xba6b,	// (0x000718d5) popup_clock_analogue_window_cp10_g3

0xba6b,	// (0x000718d5) popup_clock_analogue_window_cp10_g4

0x1375,	// (0x000671df) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x00075649) popup_clock_analogue_window_cp10_g

0xba7d,	// (0x000718e7) popup_clock_analogue_window_cp10_t1

0xbaae,	// (0x00071918) clock_digital_number_pane_cp10_ParamLimits

0xbaae,	// (0x00071918) clock_digital_number_pane_cp10

0xbac6,	// (0x00071930) clock_digital_number_pane_cp11_ParamLimits

0xbac6,	// (0x00071930) clock_digital_number_pane_cp11

0xbade,	// (0x00071948) clock_digital_number_pane_cp12_ParamLimits

0xbade,	// (0x00071948) clock_digital_number_pane_cp12

0xbaf6,	// (0x00071960) clock_digital_number_pane_cp13_ParamLimits

0xbaf6,	// (0x00071960) clock_digital_number_pane_cp13

0xbb0e,	// (0x00071978) clock_digital_separator_pane_cp10_ParamLimits

0xbb0e,	// (0x00071978) clock_digital_separator_pane_cp10

0xbb26,	// (0x00071990) popup_clock_digital_window_cp02_t1_ParamLimits

0xbb26,	// (0x00071990) popup_clock_digital_window_cp02_t1

0x0749,	// (0x000665b3) clock_digital_number_pane_cp10_g1

0x0749,	// (0x000665b3) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x00075664) clock_digital_number_pane_cp10_g

0x0749,	// (0x000665b3) clock_digital_separator_pane_cp10_g1

0x0749,	// (0x000665b3) clock_digital_separator_pane_g2_cp10

0x1410,	// (0x0006727a) navi_pane_vded_g4

0x1419,	// (0x00067283) navi_pane_vded_g5

0x1422,	// (0x0006728c) navi_pane_vded_t1

0x7688,	// (0x0006d4f2) main_vded_pane

0xbc23,	// (0x00071a8d) main_vded_pane_g1

0xbc2f,	// (0x00071a99) main_vded_pane_g2

0xbc39,	// (0x00071aa3) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x00075669) main_vded_pane_g

0xbc43,	// (0x00071aad) main_vded_pane_t1

0xbc51,	// (0x00071abb) main_vded_pane_t2

0x0001,

0xf806,	// (0x00075670) main_vded_pane_t

0xbc5f,	// (0x00071ac9) vded_slider_pane

0xbc69,	// (0x00071ad3) vded_video_pane

0x3338,	// (0x000691a2) vded_video_pane_g1

0xbc73,	// (0x00071add) vded_video_pane_g2

0x2d96,	// (0x00068c00) vded_video_pane_g3

0x0002,

0xf80b,	// (0x00075675) vded_video_pane_g

0x3342,	// (0x000691ac) vded_slider_pane_g1

0x2aa5,	// (0x0006890f) vded_slider_pane_g2

0x334b,	// (0x000691b5) vded_slider_pane_g3

0x3354,	// (0x000691be) vded_slider_pane_g4

0x335d,	// (0x000691c7) vded_slider_pane_g5

0x0004,

0xf812,	// (0x0007567c) vded_slider_pane_g

0xb756,	// (0x000715c0) mup3_rocker_pane_ParamLimits

0xb756,	// (0x000715c0) mup3_rocker_pane

0xbc7c,	// (0x00071ae6) mup3_control_keys_pane_g1

0xbc84,	// (0x00071aee) mup3_control_keys_pane_g2

0xbc8c,	// (0x00071af6) mup3_control_keys_pane_g3

0xbc94,	// (0x00071afe) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x00075687) mup3_control_keys_pane_g

0x790f,	// (0x0006d779) popup_toolbar2_fixed_window_cp01_ParamLimits

0x790f,	// (0x0006d779) popup_toolbar2_fixed_window_cp01

0xb770,	// (0x000715da) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb770,	// (0x000715da) popup_toolbar2_fixed_window_cp02

0x1c0a,	// (0x00067a74) popup_call2_audio_second_window_t4_ParamLimits

0x1c0a,	// (0x00067a74) popup_call2_audio_second_window_t4

0x2138,	// (0x00067fa2) popup_call2_audio_first_window_t6_ParamLimits

0x2138,	// (0x00067fa2) popup_call2_audio_first_window_t6

0x23ce,	// (0x00068238) popup_call2_audio_out_window_t6_ParamLimits

0x23ce,	// (0x00068238) popup_call2_audio_out_window_t6

0x7688,	// (0x0006d4f2) main_vitu_pane

0xbca4,	// (0x00071b0e) aid_size_cell_itu_ParamLimits

0xbca4,	// (0x00071b0e) aid_size_cell_itu

0x7937,	// (0x0006d7a1) bg_popup_window_pane_cp08_ParamLimits

0x7937,	// (0x0006d7a1) bg_popup_window_pane_cp08

0xbcb2,	// (0x00071b1c) field_vitu_entry_pane_ParamLimits

0xbcb2,	// (0x00071b1c) field_vitu_entry_pane

0xbcc1,	// (0x00071b2b) grid_vitu_function_pane_ParamLimits

0xbcc1,	// (0x00071b2b) grid_vitu_function_pane

0xbcd1,	// (0x00071b3b) grid_vitu_itu_pane_ParamLimits

0xbcd1,	// (0x00071b3b) grid_vitu_itu_pane

0xbce1,	// (0x00071b4b) cell_vitu_itu_pane_ParamLimits

0xbce1,	// (0x00071b4b) cell_vitu_itu_pane

0xbcf6,	// (0x00071b60) cell_vitu_function_pane_ParamLimits

0xbcf6,	// (0x00071b60) cell_vitu_function_pane

0x2890,	// (0x000686fa) bg_popup_sub_pane_cp08_ParamLimits

0x2890,	// (0x000686fa) bg_popup_sub_pane_cp08

0xbd08,	// (0x00071b72) field_vitu_entry_pane_t1_ParamLimits

0xbd08,	// (0x00071b72) field_vitu_entry_pane_t1

0x337e,	// (0x000691e8) field_vitu_entry_pane_t2_ParamLimits

0x337e,	// (0x000691e8) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x00075695) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x00075695) field_vitu_entry_pane_t

0x339b,	// (0x00069205) bg_button_pane_cp05_ParamLimits

0x339b,	// (0x00069205) bg_button_pane_cp05

0xbd24,	// (0x00071b8e) cell_vitu_itu_pane_g1

0xbd3c,	// (0x00071ba6) cell_vitu_itu_pane_t1_ParamLimits

0xbd3c,	// (0x00071ba6) cell_vitu_itu_pane_t1

0xbd4e,	// (0x00071bb8) cell_vitu_itu_pane_t2_ParamLimits

0xbd4e,	// (0x00071bb8) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x0007569a) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x0007569a) cell_vitu_itu_pane_t

0x33a9,	// (0x00069213) bg_button_pane_cp07

0xbd83,	// (0x00071bed) cell_vitu_function_pane_g1

0x7bd9,	// (0x0006da43) main_calc_pane_g1

0x76ce,	// (0x0006d538) aid_visual_content_pane

0x7688,	// (0x0006d4f2) main_vradio_pane

0xbd8c,	// (0x00071bf6) main_vradio_pane_g1_ParamLimits

0xbd8c,	// (0x00071bf6) main_vradio_pane_g1

0x33b3,	// (0x0006921d) main_vradio_pane_g2_ParamLimits

0x33b3,	// (0x0006921d) main_vradio_pane_g2

0x0001,

0xf837,	// (0x000756a1) main_vradio_pane_g_ParamLimits

0xf837,	// (0x000756a1) main_vradio_pane_g

0xbd9c,	// (0x00071c06) main_vradio_pane_t1_ParamLimits

0xbd9c,	// (0x00071c06) main_vradio_pane_t1

0xbdae,	// (0x00071c18) main_vradio_pane_t2_ParamLimits

0xbdae,	// (0x00071c18) main_vradio_pane_t2

0x33c0,	// (0x0006922a) main_vradio_pane_t3_ParamLimits

0x33c0,	// (0x0006922a) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x000756a6) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x000756a6) main_vradio_pane_t

0xbdc0,	// (0x00071c2a) vradio_rocker_control_pane_ParamLimits

0xbdc0,	// (0x00071c2a) vradio_rocker_control_pane

0xbdcc,	// (0x00071c36) vradio_station_info_pane_ParamLimits

0xbdcc,	// (0x00071c36) vradio_station_info_pane

0x33d4,	// (0x0006923e) vradio_frequency_info_pane_ParamLimits

0x33d4,	// (0x0006923e) vradio_frequency_info_pane

0x2d96,	// (0x00068c00) vradio_station_info_pane_g1

0x33e3,	// (0x0006924d) vradio_station_info_pane_t1_ParamLimits

0x33e3,	// (0x0006924d) vradio_station_info_pane_t1

0x3405,	// (0x0006926f) vradio_station_info_pane_t2_ParamLimits

0x3405,	// (0x0006926f) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x000756ad) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x000756ad) vradio_station_info_pane_t

0x3417,	// (0x00069281) vradio_tuning_pane

0x341f,	// (0x00069289) vradio_rocker_control_pane_g1

0x3427,	// (0x00069291) vradio_rocker_control_pane_g2

0x342f,	// (0x00069299) vradio_rocker_control_pane_g3

0x3437,	// (0x000692a1) vradio_rocker_control_pane_g4

0x343f,	// (0x000692a9) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x000756b2) vradio_rocker_control_pane_g

0xbddb,	// (0x00071c45) vradio_frequency_info_pane_g1

0x3447,	// (0x000692b1) vradio_frequency_info_pane_t1_ParamLimits

0x3447,	// (0x000692b1) vradio_frequency_info_pane_t1

0xbde5,	// (0x00071c4f) vradio_tuning_pane_g1

0xbdee,	// (0x00071c58) vradio_tuning_pane_t1

0x7717,	// (0x0006d581) area_side_right_pane_ParamLimits

0x7717,	// (0x0006d581) area_side_right_pane

0x2849,	// (0x000686b3) status_small_pane_g1

0x2851,	// (0x000686bb) status_small_pane_g2

0x285a,	// (0x000686c4) status_small_pane_g3

0x2863,	// (0x000686cd) status_small_pane_g4

0x0003,

0xf608,	// (0x00075472) status_small_pane_g

0x286c,	// (0x000686d6) status_small_pane_t1

0x7688,	// (0x0006d4f2) main_video3_pane

0x345b,	// (0x000692c5) cams_zoom_vslider_pane

0x3463,	// (0x000692cd) image3_wide_pane_ParamLimits

0x3463,	// (0x000692cd) image3_wide_pane

0x347d,	// (0x000692e7) image3_wide_small_pane

0x3489,	// (0x000692f3) main_video3_pane_g1_ParamLimits

0x3489,	// (0x000692f3) main_video3_pane_g1

0x34a5,	// (0x0006930f) main_video3_pane_g2_ParamLimits

0x34a5,	// (0x0006930f) main_video3_pane_g2

0x0001,

0xf853,	// (0x000756bd) main_video3_pane_g_ParamLimits

0xf853,	// (0x000756bd) main_video3_pane_g

0x34c1,	// (0x0006932b) main_video3_pane_t1_ParamLimits

0x34c1,	// (0x0006932b) main_video3_pane_t1

0x34ec,	// (0x00069356) main_video3_pane_t2_ParamLimits

0x34ec,	// (0x00069356) main_video3_pane_t2

0x3517,	// (0x00069381) main_video3_pane_t3_ParamLimits

0x3517,	// (0x00069381) main_video3_pane_t3

0x0002,

0xf858,	// (0x000756c2) main_video3_pane_t_ParamLimits

0xf858,	// (0x000756c2) main_video3_pane_t

0x3544,	// (0x000693ae) cams_zoom_vslider_pane_g1

0x354d,	// (0x000693b7) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x000756c9) cams_zoom_vslider_pane_g

0x3555,	// (0x000693bf) small_slider_vertical_pane

0x2d96,	// (0x00068c00) small_slider_vertical_pane_g1

0x2d96,	// (0x00068c00) small_slider_vertical_pane_g2

0x355d,	// (0x000693c7) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x000756ce) small_slider_vertical_pane_g

0x7688,	// (0x0006d4f2) main_hwr_training_pane

0x3566,	// (0x000693d0) hwr_training_instruct_pane_ParamLimits

0x3566,	// (0x000693d0) hwr_training_instruct_pane

0xbdfd,	// (0x00071c67) hwr_training_navi_pane_ParamLimits

0xbdfd,	// (0x00071c67) hwr_training_navi_pane

0xbe17,	// (0x00071c81) hwr_training_write_pane_ParamLimits

0xbe17,	// (0x00071c81) hwr_training_write_pane

0x7688,	// (0x0006d4f2) bg_frame_shadow_pane

0x359d,	// (0x00069407) hwr_training_write_pane_g1

0x35a5,	// (0x0006940f) hwr_training_write_pane_g2

0x35ad,	// (0x00069417) hwr_training_write_pane_g3

0x35b5,	// (0x0006941f) hwr_training_write_pane_g4

0x35bd,	// (0x00069427) hwr_training_write_pane_g5

0x35c5,	// (0x0006942f) hwr_training_write_pane_g6

0x35cd,	// (0x00069437) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x000756d5) hwr_training_write_pane_g

0xbe4f,	// (0x00071cb9) hwr_training_navi_pane_g1_ParamLimits

0xbe4f,	// (0x00071cb9) hwr_training_navi_pane_g1

0xbe61,	// (0x00071ccb) hwr_training_navi_pane_g2_ParamLimits

0xbe61,	// (0x00071ccb) hwr_training_navi_pane_g2

0xbe73,	// (0x00071cdd) hwr_training_navi_pane_g3_ParamLimits

0xbe73,	// (0x00071cdd) hwr_training_navi_pane_g3

0xbe83,	// (0x00071ced) hwr_training_navi_pane_g4_ParamLimits

0xbe83,	// (0x00071ced) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x000756e4) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x000756e4) hwr_training_navi_pane_g

0xbe9d,	// (0x00071d07) hwr_training_navi_pane_t1

0xbeab,	// (0x00071d15) list_single_hwr_training_instruct_pane_ParamLimits

0xbeab,	// (0x00071d15) list_single_hwr_training_instruct_pane

0x35d5,	// (0x0006943f) list_single_hwr_training_instruct_pane_t1

0x2cd6,	// (0x00068b40) bg_frame_shadow_pane_g1

0x35e4,	// (0x0006944e) bg_frame_shadow_pane_g2

0x35ec,	// (0x00069456) bg_frame_shadow_pane_g3

0x35f4,	// (0x0006945e) bg_frame_shadow_pane_g4

0x35fc,	// (0x00069466) bg_frame_shadow_pane_g5

0x3604,	// (0x0006946e) bg_frame_shadow_pane_g6

0x360c,	// (0x00069476) bg_frame_shadow_pane_g7

0x0923,	// (0x0006678d) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x000756ef) bg_frame_shadow_pane_g

0x7688,	// (0x0006d4f2) main_video_tele_dialer_pane

0xbed0,	// (0x00071d3a) aid_size_cell_video_keypad_ParamLimits

0xbed0,	// (0x00071d3a) aid_size_cell_video_keypad

0xbee0,	// (0x00071d4a) grid_video_dialer_keypad_pane_ParamLimits

0xbee0,	// (0x00071d4a) grid_video_dialer_keypad_pane

0xbf12,	// (0x00071d7c) video_down_pane_cp_ParamLimits

0xbf12,	// (0x00071d7c) video_down_pane_cp

0xbf1e,	// (0x00071d88) cell_video_dialer_keypad_pane_ParamLimits

0xbf1e,	// (0x00071d88) cell_video_dialer_keypad_pane

0x3630,	// (0x0006949a) bg_button_pane_cp08_ParamLimits

0x3630,	// (0x0006949a) bg_button_pane_cp08

0xbf33,	// (0x00071d9d) cell_video_dialer_keypad_pane_g1_ParamLimits

0xbf33,	// (0x00071d9d) cell_video_dialer_keypad_pane_g1

0xb74a,	// (0x000715b4) mup3_rocker2_pane_ParamLimits

0xb74a,	// (0x000715b4) mup3_rocker2_pane

0x2d96,	// (0x00068c00) mup3_rocker2_pane_g1

0xa62b,	// (0x00070495) main_dialer2_pane

0x7688,	// (0x0006d4f2) main_mp4_pane

0xbf75,	// (0x00071ddf) main_mp4_pane_g1_ParamLimits

0xbf75,	// (0x00071ddf) main_mp4_pane_g1

0xbf83,	// (0x00071ded) main_mp4_pane_g2_ParamLimits

0xbf83,	// (0x00071ded) main_mp4_pane_g2

0xbf91,	// (0x00071dfb) main_mp4_pane_g3_ParamLimits

0xbf91,	// (0x00071dfb) main_mp4_pane_g3

0xbfd6,	// (0x00071e40) main_mp4_pane_g4_ParamLimits

0xbfd6,	// (0x00071e40) main_mp4_pane_g4

0xbffe,	// (0x00071e68) main_mp4_pane_g5_ParamLimits

0xbffe,	// (0x00071e68) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x0007570f) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x0007570f) main_mp4_pane_g

0xc04e,	// (0x00071eb8) main_mp4_pane_t1_ParamLimits

0xc04e,	// (0x00071eb8) main_mp4_pane_t1

0xc0aa,	// (0x00071f14) main_mp4_pane_t2_ParamLimits

0xc0aa,	// (0x00071f14) main_mp4_pane_t2

0x363c,	// (0x000694a6) main_mp4_pane_t3_ParamLimits

0x363c,	// (0x000694a6) main_mp4_pane_t3

0xc0fc,	// (0x00071f66) main_mp4_pane_t4_ParamLimits

0xc0fc,	// (0x00071f66) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x0007571c) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x0007571c) main_mp4_pane_t

0xc140,	// (0x00071faa) mp4_progress_pane_ParamLimits

0xc140,	// (0x00071faa) mp4_progress_pane

0xc18a,	// (0x00071ff4) mp4_rocker_pane_ParamLimits

0xc18a,	// (0x00071ff4) mp4_rocker_pane

0x3664,	// (0x000694ce) mp4_progress_pane_t1

0x367d,	// (0x000694e7) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x00075725) mp4_progress_pane_t

0x3696,	// (0x00069500) mup_progress_pane_cp04

0x2d96,	// (0x00068c00) mp4_rocker_pane_g1

0xc1aa,	// (0x00072014) aid_cell_size_keypad2_ParamLimits

0xc1aa,	// (0x00072014) aid_cell_size_keypad2

0xc1ba,	// (0x00072024) dialer2_ne_pane_ParamLimits

0xc1ba,	// (0x00072024) dialer2_ne_pane

0xc1c8,	// (0x00072032) grid_dialer2_keypad_pane_ParamLimits

0xc1c8,	// (0x00072032) grid_dialer2_keypad_pane

0x44ac,	// (0x0006a316) bg_popup_call_pane_cp07_ParamLimits

0x44ac,	// (0x0006a316) bg_popup_call_pane_cp07

0xc1d8,	// (0x00072042) dialer2_ne_pane_t1_ParamLimits

0xc1d8,	// (0x00072042) dialer2_ne_pane_t1

0xc1fd,	// (0x00072067) cell_dialer2_keypad_pane_ParamLimits

0xc1fd,	// (0x00072067) cell_dialer2_keypad_pane

0x36be,	// (0x00069528) bg_button_pane_pane_cp04_ParamLimits

0x36be,	// (0x00069528) bg_button_pane_pane_cp04

0xc212,	// (0x0007207c) cell_dialer2_keypad_pane_g1_ParamLimits

0xc212,	// (0x0007207c) cell_dialer2_keypad_pane_g1

0x8601,	// (0x0006e46b) aid_placing_vt_set_content_ParamLimits

0x8601,	// (0x0006e46b) aid_placing_vt_set_content

0x862d,	// (0x0006e497) aid_placing_vt_set_title_ParamLimits

0x862d,	// (0x0006e497) aid_placing_vt_set_title

0x7688,	// (0x0006d4f2) main_image3_pane

0xc2ac,	// (0x00072116) area_side_right_pane_cp01_ParamLimits

0xc2ac,	// (0x00072116) area_side_right_pane_cp01

0xf001,	// (0x00074e6b) main_image3_pane_g1_ParamLimits

0xf001,	// (0x00074e6b) main_image3_pane_g1

0xc2d9,	// (0x00072143) main_image3_pane_g2_ParamLimits

0xc2d9,	// (0x00072143) main_image3_pane_g2

0xc2f2,	// (0x0007215c) main_image3_pane_g3_ParamLimits

0xc2f2,	// (0x0007215c) main_image3_pane_g3

0xc30b,	// (0x00072175) main_image3_pane_g4_ParamLimits

0xc30b,	// (0x00072175) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x00075734) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x00075734) main_image3_pane_g

0xc324,	// (0x0007218e) main_image3_pane_t1_ParamLimits

0xc324,	// (0x0007218e) main_image3_pane_t1

0xc349,	// (0x000721b3) main_image3_pane_t2_ParamLimits

0xc349,	// (0x000721b3) main_image3_pane_t2

0xc368,	// (0x000721d2) main_image3_pane_t3_ParamLimits

0xc368,	// (0x000721d2) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x0007573d) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x0007573d) main_image3_pane_t

0x7937,	// (0x0006d7a1) grid_sctrl_middle_pane_cp01_ParamLimits

0x7937,	// (0x0006d7a1) grid_sctrl_middle_pane_cp01

0xc3c9,	// (0x00072233) cell_sctrl_middle_pane_cp01_ParamLimits

0xc3c9,	// (0x00072233) cell_sctrl_middle_pane_cp01

0xc3da,	// (0x00072244) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc3da,	// (0x00072244) cell_sctrl_middle_pane_cp01_g1

0x7688,	// (0x0006d4f2) main_call4_pane

0xc3e7,	// (0x00072251) aid_size_button_call4_ParamLimits

0xc3e7,	// (0x00072251) aid_size_button_call4

0xc417,	// (0x00072281) call4_windows_pane_ParamLimits

0xc417,	// (0x00072281) call4_windows_pane

0xc431,	// (0x0007229b) grid_call4_button_pane_ParamLimits

0xc431,	// (0x0007229b) grid_call4_button_pane

0x36ca,	// (0x00069534) call4_windows_conf_pane

0x36e1,	// (0x0006954b) popup_call4_audio_first_window_ParamLimits

0x36e1,	// (0x0006954b) popup_call4_audio_first_window

0x372d,	// (0x00069597) popup_call4_audio_second_window_ParamLimits

0x372d,	// (0x00069597) popup_call4_audio_second_window

0x3741,	// (0x000695ab) popup_call4_audio_wait_window_ParamLimits

0x3741,	// (0x000695ab) popup_call4_audio_wait_window

0xc455,	// (0x000722bf) cell_call4_button_pane_ParamLimits

0xc455,	// (0x000722bf) cell_call4_button_pane

0xc47a,	// (0x000722e4) bg_button_pane_cp09_ParamLimits

0xc47a,	// (0x000722e4) bg_button_pane_cp09

0xc486,	// (0x000722f0) cell_call4_button_pane_g1_ParamLimits

0xc486,	// (0x000722f0) cell_call4_button_pane_g1

0xc493,	// (0x000722fd) cell_call4_button_pane_t1_ParamLimits

0xc493,	// (0x000722fd) cell_call4_button_pane_t1

0x3789,	// (0x000695f3) popup_call4_audio_conf_window_ParamLimits

0x3789,	// (0x000695f3) popup_call4_audio_conf_window

0xb77d,	// (0x000715e7) mup3_progress_pane_t1_ParamLimits

0xb79c,	// (0x00071606) mup3_progress_pane_t2_ParamLimits

0x307d,	// (0x00068ee7) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x00075616) mup3_progress_pane_t_ParamLimits

0x309a,	// (0x00068f04) mup_progress_pane_cp03_ParamLimits

0xbc9c,	// (0x00071b06) mup3_control_keys_pane_g4_copy1

0xc16e,	// (0x00071fd8) mp4_rocker2_pane_ParamLimits

0xc16e,	// (0x00071fd8) mp4_rocker2_pane

0x37a5,	// (0x0006960f) mp4_rocker2_pane_g1

0x379d,	// (0x00069607) mp4_rocker2_pane_g2

0xc4a5,	// (0x0007230f) mp4_rocker2_pane_g3

0xc4ad,	// (0x00072317) mp4_rocker2_pane_g4

0xc4b5,	// (0x0007231f) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x00075746) mp4_rocker2_pane_g

0x7688,	// (0x0006d4f2) main_camera4_pane

0x7688,	// (0x0006d4f2) main_video4_pane

0xbeee,	// (0x00071d58) main_video_tele_dialer_pane_t1_ParamLimits

0xbeee,	// (0x00071d58) main_video_tele_dialer_pane_t1

0xbf00,	// (0x00071d6a) main_video_tele_dialer_pane_t2_ParamLimits

0xbf00,	// (0x00071d6a) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x00075700) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x00075700) main_video_tele_dialer_pane_t

0xc4d5,	// (0x0007233f) cam4_autofocus_pane_ParamLimits

0xc4d5,	// (0x0007233f) cam4_autofocus_pane

0xc4ef,	// (0x00072359) cam4_image_uncrop_pane_ParamLimits

0xc4ef,	// (0x00072359) cam4_image_uncrop_pane

0xc506,	// (0x00072370) cam4_indicators_pane_ParamLimits

0xc506,	// (0x00072370) cam4_indicators_pane

0xc522,	// (0x0007238c) main_camera4_pane_g1_ParamLimits

0xc522,	// (0x0007238c) main_camera4_pane_g1

0xc52e,	// (0x00072398) main_camera4_pane_g2_ParamLimits

0xc52e,	// (0x00072398) main_camera4_pane_g2

0xc52e,	// (0x00072398) main_camera4_pane_g3_ParamLimits

0xc52e,	// (0x00072398) main_camera4_pane_g3

0xc53a,	// (0x000723a4) main_camera4_pane_g4_ParamLimits

0xc53a,	// (0x000723a4) main_camera4_pane_g4

0xc546,	// (0x000723b0) main_camera4_pane_g5_ParamLimits

0xc546,	// (0x000723b0) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x00075751) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x00075751) main_camera4_pane_g

0xc560,	// (0x000723ca) main_camera4_pane_t1_ParamLimits

0xc560,	// (0x000723ca) main_camera4_pane_t1

0x3002,	// (0x00068e6c) bg_tb_trans_pane_cp06

0xc5b0,	// (0x0007241a) cam4_indicators_pane_g1

0xc5c1,	// (0x0007242b) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x0007576c) cam4_indicators_pane_g

0xc5df,	// (0x00072449) cam4_indicators_pane_t1

0xc609,	// (0x00072473) main_video4_pane_g1_ParamLimits

0xc609,	// (0x00072473) main_video4_pane_g1

0xc615,	// (0x0007247f) main_video4_pane_g2_ParamLimits

0xc615,	// (0x0007247f) main_video4_pane_g2

0xc621,	// (0x0007248b) main_video4_pane_g3_ParamLimits

0xc621,	// (0x0007248b) main_video4_pane_g3

0xc62d,	// (0x00072497) main_video4_pane_g4_ParamLimits

0xc62d,	// (0x00072497) main_video4_pane_g4

0x0004,

0xf909,	// (0x00075773) main_video4_pane_g_ParamLimits

0xf909,	// (0x00075773) main_video4_pane_g

0xc64d,	// (0x000724b7) vid4_indicators_pane_ParamLimits

0xc64d,	// (0x000724b7) vid4_indicators_pane

0xc66c,	// (0x000724d6) video4_image_uncrop_cif_pane_ParamLimits

0xc66c,	// (0x000724d6) video4_image_uncrop_cif_pane

0xc67b,	// (0x000724e5) video4_image_uncrop_nhd_pane_ParamLimits

0xc67b,	// (0x000724e5) video4_image_uncrop_nhd_pane

0xc4ef,	// (0x00072359) video4_image_uncrop_vga_pane_ParamLimits

0xc4ef,	// (0x00072359) video4_image_uncrop_vga_pane

0x2890,	// (0x000686fa) bg_tb_trans_pane_cp07

0xc692,	// (0x000724fc) vid4_indicators_pane_g1

0xc6a6,	// (0x00072510) vid4_indicators_pane_g2

0xc6ba,	// (0x00072524) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x0007577e) vid4_indicators_pane_g

0xc6e9,	// (0x00072553) vid4_indicators_pane_t1

0xc700,	// (0x0007256a) cam4_autofocus_pane_g1

0xc708,	// (0x00072572) cam4_autofocus_pane_g2

0xc710,	// (0x0007257a) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x00075789) cam4_autofocus_pane_g

0xc718,	// (0x00072582) cam4_autofocus_pane_g3_copy1

0x3614,	// (0x0006947e) video_down_pane_cp_t1

0x3622,	// (0x0006948c) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x00075705) video_down_pane_cp_t

0x7937,	// (0x0006d7a1) popup_vitu2_window_ParamLimits

0x7937,	// (0x0006d7a1) popup_vitu2_window

0xc720,	// (0x0007258a) aid_size_cell2_itu2_ParamLimits

0xc720,	// (0x0007258a) aid_size_cell2_itu2

0xc742,	// (0x000725ac) aid_size_cell_itu2_ParamLimits

0xc742,	// (0x000725ac) aid_size_cell_itu2

0x44ac,	// (0x0006a316) bg_popup_window_pane_cp09_ParamLimits

0x44ac,	// (0x0006a316) bg_popup_window_pane_cp09

0xc786,	// (0x000725f0) field_vitu2_entry_pane_ParamLimits

0xc786,	// (0x000725f0) field_vitu2_entry_pane

0xc7a6,	// (0x00072610) grid_vitu2_function_pane_ParamLimits

0xc7a6,	// (0x00072610) grid_vitu2_function_pane

0xc7ea,	// (0x00072654) grid_vitu2_itu_pane_ParamLimits

0xc7ea,	// (0x00072654) grid_vitu2_itu_pane

0xc862,	// (0x000726cc) cell_vitu2_itu_pane_ParamLimits

0xc862,	// (0x000726cc) cell_vitu2_itu_pane

0xc877,	// (0x000726e1) cell_vitu2_function_pane_ParamLimits

0xc877,	// (0x000726e1) cell_vitu2_function_pane

0x4356,	// (0x0006a1c0) bg_popup_call_pane_cp08_ParamLimits

0x4356,	// (0x0006a1c0) bg_popup_call_pane_cp08

0x436f,	// (0x0006a1d9) field_vitu2_entry_pane_g1

0x437b,	// (0x0006a1e5) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x00075790) field_vitu2_entry_pane_g

0x6809,	// (0x0006c673) field_vitu2_entry_pane_t1_ParamLimits

0x6809,	// (0x0006c673) field_vitu2_entry_pane_t1

0x6838,	// (0x0006c6a2) field_vitu2_entry_pane_t2_ParamLimits

0x6838,	// (0x0006c6a2) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x00075797) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x00075797) field_vitu2_entry_pane_t

0xc8b6,	// (0x00072720) bg_button_pane_cp010_ParamLimits

0xc8b6,	// (0x00072720) bg_button_pane_cp010

0xc8c4,	// (0x0007272e) cell_vitu2_itu_pane_g1

0xc8e2,	// (0x0007274c) cell_vitu2_itu_pane_t1_ParamLimits

0xc8e2,	// (0x0007274c) cell_vitu2_itu_pane_t1

0x6855,	// (0x0006c6bf) cell_vitu2_itu_pane_t2_ParamLimits

0x6855,	// (0x0006c6bf) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x000757a1) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x000757a1) cell_vitu2_itu_pane_t

0x2890,	// (0x000686fa) bg_button_pane_cp011

0xc934,	// (0x0007279e) cell_vitu2_function_pane_g1

0x7688,	// (0x0006d4f2) main_myfav_hc_pane

0xc3aa,	// (0x00072214) popup_image3_note_pane_ParamLimits

0xc3aa,	// (0x00072214) popup_image3_note_pane

0xc3b8,	// (0x00072222) popup_image3_tool_bar_pane_ParamLimits

0xc3b8,	// (0x00072222) popup_image3_tool_bar_pane

0x68c3,	// (0x0006c72d) cell_vitu2_itu_pane_t3_ParamLimits

0x68c3,	// (0x0006c72d) cell_vitu2_itu_pane_t3

0x7688,	// (0x0006d4f2) bg_popup_trans_pane

0x439d,	// (0x0006a207) grid_image3_tool_bar_pane

0x44ba,	// (0x0006a324) bg_popup_trans_pane_g1

0x0cb6,	// (0x00066b20) bg_popup_trans_pane_g2

0x44c2,	// (0x0006a32c) bg_popup_trans_pane_g3

0x44ca,	// (0x0006a334) bg_popup_trans_pane_g4

0x44d2,	// (0x0006a33c) bg_popup_trans_pane_g5

0x44da,	// (0x0006a344) bg_popup_trans_pane_g6

0x44e2,	// (0x0006a34c) bg_popup_trans_pane_g7

0x44ea,	// (0x0006a354) bg_popup_trans_pane_g8

0x0c96,	// (0x00066b00) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x000757a8) bg_popup_trans_pane_g

0x44f2,	// (0x0006a35c) cell_image3_tool_bar_pane_ParamLimits

0x44f2,	// (0x0006a35c) cell_image3_tool_bar_pane

0x2d96,	// (0x00068c00) cell_image3_tool_bar_pane_g1

0x7688,	// (0x0006d4f2) bg_popup_trans_pane_cp1

0x4506,	// (0x0006a370) popup_image3_note_pane_t1

0x4514,	// (0x0006a37e) popup_image3_note_pane_t2

0x4522,	// (0x0006a38c) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x000757bb) popup_image3_note_pane_t

0x4530,	// (0x0006a39a) popup_image3_note_pane_t3_copy1

0xc948,	// (0x000727b2) bg_myfav_hc_instruction_pane_ParamLimits

0xc948,	// (0x000727b2) bg_myfav_hc_instruction_pane

0xc960,	// (0x000727ca) cell_myfav_contact_pane_ParamLimits

0xc960,	// (0x000727ca) cell_myfav_contact_pane

0xc97a,	// (0x000727e4) cell_myfav_contact_pane_cp1_ParamLimits

0xc97a,	// (0x000727e4) cell_myfav_contact_pane_cp1

0xc992,	// (0x000727fc) cell_myfav_contact_pane_cp2_ParamLimits

0xc992,	// (0x000727fc) cell_myfav_contact_pane_cp2

0xc9aa,	// (0x00072814) cell_myfav_contact_pane_cp3_ParamLimits

0xc9aa,	// (0x00072814) cell_myfav_contact_pane_cp3

0xc9c1,	// (0x0007282b) cell_myfav_contact_pane_cp4_ParamLimits

0xc9c1,	// (0x0007282b) cell_myfav_contact_pane_cp4

0xc9d7,	// (0x00072841) cell_myfav_contact_pane_cp5_ParamLimits

0xc9d7,	// (0x00072841) cell_myfav_contact_pane_cp5

0xc9eb,	// (0x00072855) cell_myfav_contact_pane_cp6_ParamLimits

0xc9eb,	// (0x00072855) cell_myfav_contact_pane_cp6

0xc9ff,	// (0x00072869) cell_myfav_contact_pane_cp7_ParamLimits

0xc9ff,	// (0x00072869) cell_myfav_contact_pane_cp7

0x453e,	// (0x0006a3a8) listscroll_gen_pane_cp05

0xca17,	// (0x00072881) main_myfav_hc_pane_g1_ParamLimits

0xca17,	// (0x00072881) main_myfav_hc_pane_g1

0xca2d,	// (0x00072897) main_myfav_hc_pane_g2_ParamLimits

0xca2d,	// (0x00072897) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x000757c2) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x000757c2) main_myfav_hc_pane_g

0xca5b,	// (0x000728c5) main_myfav_hc_pane_t1_ParamLimits

0xca5b,	// (0x000728c5) main_myfav_hc_pane_t1

0x4547,	// (0x0006a3b1) main_myfav_hc_pane_t2_ParamLimits

0x4547,	// (0x0006a3b1) main_myfav_hc_pane_t2

0x4559,	// (0x0006a3c3) main_myfav_hc_pane_t3_ParamLimits

0x4559,	// (0x0006a3c3) main_myfav_hc_pane_t3

0xca72,	// (0x000728dc) main_myfav_hc_pane_t4_ParamLimits

0xca72,	// (0x000728dc) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x000757c9) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x000757c9) main_myfav_hc_pane_t

0x2d96,	// (0x00068c00) bg_myfav_hc_instruction_pane_g1

0x456b,	// (0x0006a3d5) cell_myfav_contact_pane_g1_ParamLimits

0x456b,	// (0x0006a3d5) cell_myfav_contact_pane_g1

0x456b,	// (0x0006a3d5) cell_myfav_contact_pane_g2_ParamLimits

0x456b,	// (0x0006a3d5) cell_myfav_contact_pane_g2

0x4577,	// (0x0006a3e1) cell_myfav_contact_pane_g3_ParamLimits

0x4577,	// (0x0006a3e1) cell_myfav_contact_pane_g3

0x3067,	// (0x00068ed1) cell_myfav_contact_pane_g4_ParamLimits

0x3067,	// (0x00068ed1) cell_myfav_contact_pane_g4

0x4584,	// (0x0006a3ee) cell_myfav_contact_pane_g5_ParamLimits

0x4584,	// (0x0006a3ee) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x000757d4) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x000757d4) cell_myfav_contact_pane_g

0xca43,	// (0x000728ad) main_myfav_hc_pane_g3_ParamLimits

0xca43,	// (0x000728ad) main_myfav_hc_pane_g3

0x784a,	// (0x0006d6b4) popup_adpt_find_window

0xca9c,	// (0x00072906) afind_page_pane_ParamLimits

0xca9c,	// (0x00072906) afind_page_pane

0xcaa9,	// (0x00072913) aid_size_cell_afind_ParamLimits

0xcaa9,	// (0x00072913) aid_size_cell_afind

0xcac3,	// (0x0007292d) bg_popup_sub_pane_cp09_ParamLimits

0xcac3,	// (0x0007292d) bg_popup_sub_pane_cp09

0xcad0,	// (0x0007293a) find_pane_cp01_ParamLimits

0xcad0,	// (0x0007293a) find_pane_cp01

0x4590,	// (0x0006a3fa) grid_afind_control_pane_ParamLimits

0x4590,	// (0x0006a3fa) grid_afind_control_pane

0xcadd,	// (0x00072947) grid_afind_pane_ParamLimits

0xcadd,	// (0x00072947) grid_afind_pane

0xcaf9,	// (0x00072963) cell_afind_pane_ParamLimits

0xcaf9,	// (0x00072963) cell_afind_pane

0x2d96,	// (0x00068c00) afind_page_pane_g1

0xcb41,	// (0x000729ab) afind_page_pane_g2

0xcb4a,	// (0x000729b4) afind_page_pane_g3

0x0002,

0xf975,	// (0x000757df) afind_page_pane_g

0xcb53,	// (0x000729bd) afind_page_pane_t1

0x45a4,	// (0x0006a40e) cell_afind_grid_control_pane_ParamLimits

0x45a4,	// (0x0006a40e) cell_afind_grid_control_pane

0x36be,	// (0x00069528) bg_button_pane_cp69_ParamLimits

0x36be,	// (0x00069528) bg_button_pane_cp69

0xcb73,	// (0x000729dd) cell_afind_pane_g1_ParamLimits

0xcb73,	// (0x000729dd) cell_afind_pane_g1

0xcb80,	// (0x000729ea) cell_afind_pane_t1_ParamLimits

0xcb80,	// (0x000729ea) cell_afind_pane_t1

0x0aaf,	// (0x00066919) bg_button_pane_cp72

0x45b3,	// (0x0006a41d) cell_afind_grid_control_pane_g1

0xa1a9,	// (0x00070013) aid_image_placing_area_ParamLimits

0xa1a9,	// (0x00070013) aid_image_placing_area

0x3366,	// (0x000691d0) field_vitu_entry_pane_g1_ParamLimits

0x3366,	// (0x000691d0) field_vitu_entry_pane_g1

0x3372,	// (0x000691dc) field_vitu_entry_pane_g2_ParamLimits

0x3372,	// (0x000691dc) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x00075690) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x00075690) field_vitu_entry_pane_g

0xbd24,	// (0x00071b8e) cell_vitu_itu_pane_g1_ParamLimits

0xbd66,	// (0x00071bd0) cell_vitu_itu_pane_t3_ParamLimits

0xbd66,	// (0x00071bd0) cell_vitu_itu_pane_t3

0x3664,	// (0x000694ce) mp4_progress_pane_t1_ParamLimits

0x367d,	// (0x000694e7) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x00075725) mp4_progress_pane_t_ParamLimits

0x3696,	// (0x00069500) mup_progress_pane_cp04_ParamLimits

0xca86,	// (0x000728f0) main_myfav_hc_pane_t5_ParamLimits

0xca86,	// (0x000728f0) main_myfav_hc_pane_t5

0x64d8,	// (0x0006c342) aid_zoom_text_primary

0x784a,	// (0x0006d6b4) popup_adpt_find_window_ParamLimits

0x2890,	// (0x000686fa) main_cam_set_pane

0xc514,	// (0x0007237e) cam4_zoom_pane_ParamLimits

0xc514,	// (0x0007237e) cam4_zoom_pane

0xcb92,	// (0x000729fc) main_cam_set_pane_g1_ParamLimits

0xcb92,	// (0x000729fc) main_cam_set_pane_g1

0xcba0,	// (0x00072a0a) main_cam_set_pane_g2_ParamLimits

0xcba0,	// (0x00072a0a) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x000757e6) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x000757e6) main_cam_set_pane_g

0xcbac,	// (0x00072a16) main_cam_set_pane_t1_ParamLimits

0xcbac,	// (0x00072a16) main_cam_set_pane_t1

0xcbc8,	// (0x00072a32) main_cset_listscroll_pane_ParamLimits

0xcbc8,	// (0x00072a32) main_cset_listscroll_pane

0xcbf3,	// (0x00072a5d) main_cset_slider_pane_ParamLimits

0xcbf3,	// (0x00072a5d) main_cset_slider_pane

0x45c4,	// (0x0006a42e) main_cset_list_pane_ParamLimits

0x45c4,	// (0x0006a42e) main_cset_list_pane

0x45d4,	// (0x0006a43e) scroll_pane_cp028

0xcc12,	// (0x00072a7c) aid_area_touch_slider

0xcc2e,	// (0x00072a98) cset_slider_pane

0xcc58,	// (0x00072ac2) main_cset_slider_pane_g1

0xcc6d,	// (0x00072ad7) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x000757eb) main_cset_slider_pane_g

0x460d,	// (0x0006a477) main_cset_slider_pane_t1

0xcd2f,	// (0x00072b99) main_cset_slider_pane_t2

0xcd49,	// (0x00072bb3) main_cset_slider_pane_t3

0xcd63,	// (0x00072bcd) main_cset_slider_pane_t4

0xcd7d,	// (0x00072be7) main_cset_slider_pane_t5

0xcd9b,	// (0x00072c05) main_cset_slider_pane_t6

0xcdb2,	// (0x00072c1c) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x00075810) main_cset_slider_pane_t

0xcebe,	// (0x00072d28) cset_list_set_pane_ParamLimits

0xcebe,	// (0x00072d28) cset_list_set_pane

0xced4,	// (0x00072d3e) aid_position_infowindow_above

0xcedc,	// (0x00072d46) aid_position_infowindow_below

0xcee4,	// (0x00072d4e) cset_list_set_pane_g1_ParamLimits

0xcee4,	// (0x00072d4e) cset_list_set_pane_g1

0x6910,	// (0x0006c77a) cset_list_set_pane_g3_ParamLimits

0x6910,	// (0x0006c77a) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x0007582f) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x0007582f) cset_list_set_pane_g

0x691f,	// (0x0006c789) cset_list_set_pane_t1_ParamLimits

0x691f,	// (0x0006c789) cset_list_set_pane_t1

0x2890,	// (0x000686fa) list_highlight_pane_cp021_ParamLimits

0x2890,	// (0x000686fa) list_highlight_pane_cp021

0x1596,	// (0x00067400) cset_slider_pane_g1

0x15a8,	// (0x00067412) cset_slider_pane_g2

0x159f,	// (0x00067409) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x00075834) cset_slider_pane_g

0xcef0,	// (0x00072d5a) aid_area_touch_cam4_zoom

0xcef8,	// (0x00072d62) cam4_zoom_cont_pane

0xcf00,	// (0x00072d6a) cam4_zoom_pane_g1

0xcf08,	// (0x00072d72) cam4_zoom_pane_g2

0xcf10,	// (0x00072d7a) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x0007583b) cam4_zoom_pane_g

0x4e37,	// (0x0006aca1) cam4_zoom_cont_pane_g1

0x4e40,	// (0x0006acaa) cam4_zoom_cont_pane_g2

0x4e49,	// (0x0006acb3) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x00075842) cam4_zoom_cont_pane_g

0xc401,	// (0x0007226b) call4_image_pane_ParamLimits

0xc401,	// (0x0007226b) call4_image_pane

0x36ca,	// (0x00069534) call4_windows_conf_pane_ParamLimits

0x370b,	// (0x00069575) popup_call4_audio_in_window_ParamLimits

0x370b,	// (0x00069575) popup_call4_audio_in_window

0x7688,	// (0x0006d4f2) bg_popup_call2_act_pane_cp02

0x3781,	// (0x000695eb) call4_list_conf_pane

0x2d96,	// (0x00068c00) call4_image_pane_g1

0x2d96,	// (0x00068c00) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x00075556) call4_image_pane_g

0x46ad,	// (0x0006a517) list_single_graphic_popup_conf4_pane_ParamLimits

0x46ad,	// (0x0006a517) list_single_graphic_popup_conf4_pane

0x7688,	// (0x0006d4f2) list_highlight_pane_cp022

0x46c0,	// (0x0006a52a) list_single_graphic_popup_conf4_pane_g1

0x1255,	// (0x000670bf) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x00075849) list_single_graphic_popup_conf4_pane_g

0x46c8,	// (0x0006a532) list_single_graphic_popup_conf4_pane_t1

0x8791,	// (0x0006e5fb) popup_vtel_slider_window_ParamLimits

0x8791,	// (0x0006e5fb) popup_vtel_slider_window

0x36ac,	// (0x00069516) dialer2_ne_pane_t2_ParamLimits

0x36ac,	// (0x00069516) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x0007572a) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x0007572a) dialer2_ne_pane_t

0x2890,	// (0x000686fa) bg_popup_sub_pane_cp010_ParamLimits

0x2890,	// (0x000686fa) bg_popup_sub_pane_cp010

0xcf18,	// (0x00072d82) popup_vtel_slider_window_g1_ParamLimits

0xcf18,	// (0x00072d82) popup_vtel_slider_window_g1

0xcf24,	// (0x00072d8e) popup_vtel_slider_window_g2_ParamLimits

0xcf24,	// (0x00072d8e) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x0007584e) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x0007584e) popup_vtel_slider_window_g

0xcf6c,	// (0x00072dd6) vtel_slider_pane_ParamLimits

0xcf6c,	// (0x00072dd6) vtel_slider_pane

0xcf7b,	// (0x00072de5) vtel_slider_pane_g1_ParamLimits

0xcf7b,	// (0x00072de5) vtel_slider_pane_g1

0xcf88,	// (0x00072df2) vtel_slider_pane_g2_ParamLimits

0xcf88,	// (0x00072df2) vtel_slider_pane_g2

0xcf95,	// (0x00072dff) vtel_slider_pane_g3_ParamLimits

0xcf95,	// (0x00072dff) vtel_slider_pane_g3

0xcf7b,	// (0x00072de5) vtel_slider_pane_g4_ParamLimits

0xcf7b,	// (0x00072de5) vtel_slider_pane_g4

0xcfa2,	// (0x00072e0c) vtel_slider_pane_g5_ParamLimits

0xcfa2,	// (0x00072e0c) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x00075857) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x00075857) vtel_slider_pane_g

0x7688,	// (0x0006d4f2) main_gallery2_pane

0xc768,	// (0x000725d2) aid_size_row_itut2_dropdow_list_ParamLimits

0xc768,	// (0x000725d2) aid_size_row_itut2_dropdow_list

0xc7c8,	// (0x00072632) grid_vitu2_function_top_pane_ParamLimits

0xc7c8,	// (0x00072632) grid_vitu2_function_top_pane

0xc81e,	// (0x00072688) popup_vitu2_dropdown_list_window_ParamLimits

0xc81e,	// (0x00072688) popup_vitu2_dropdown_list_window

0xc83e,	// (0x000726a8) popup_vitu2_match_list_window

0xcfaf,	// (0x00072e19) cell_vitu2_function_top_pane_ParamLimits

0xcfaf,	// (0x00072e19) cell_vitu2_function_top_pane

0xcfcf,	// (0x00072e39) cell_vitu2_function_top_pane_cp01_ParamLimits

0xcfcf,	// (0x00072e39) cell_vitu2_function_top_pane_cp01

0xcfed,	// (0x00072e57) cell_vitu2_function_top_wide_pane_ParamLimits

0xcfed,	// (0x00072e57) cell_vitu2_function_top_wide_pane

0x2890,	// (0x000686fa) bg_button_pane_cp012

0xd00b,	// (0x00072e75) cell_vitu2_function_top_pane_g1

0xd01a,	// (0x00072e84) bg_button_pane_cp013_ParamLimits

0xd01a,	// (0x00072e84) bg_button_pane_cp013

0xd036,	// (0x00072ea0) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xd036,	// (0x00072ea0) cell_vitu2_function_top_wide_pane_g1

0x7937,	// (0x0006d7a1) bg_popup_sub_pane_cp20

0xd04e,	// (0x00072eb8) list_vitu2_match_list_pane

0x44ba,	// (0x0006a324) bg_popup_sub_pane_cp20_g1

0x44c2,	// (0x0006a32c) bg_popup_sub_pane_cp20_g2

0x0cb6,	// (0x00066b20) bg_popup_sub_pane_cp20_g3

0x44ca,	// (0x0006a334) bg_popup_sub_pane_cp20_g4

0x0c96,	// (0x00066b00) bg_popup_sub_pane_cp20_g5

0x46de,	// (0x0006a548) bg_popup_sub_pane_cp20_g6

0x44da,	// (0x0006a344) bg_popup_sub_pane_cp20_g7

0x44e2,	// (0x0006a34c) bg_popup_sub_pane_cp20_g8

0x44ea,	// (0x0006a354) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x00075862) bg_popup_sub_pane_cp20_g

0xd066,	// (0x00072ed0) list_vitu2_match_list_item_pane_ParamLimits

0xd066,	// (0x00072ed0) list_vitu2_match_list_item_pane

0xd078,	// (0x00072ee2) list_vitu2_match_list_item_pane_t1

0x7688,	// (0x0006d4f2) bg_popup_sub_pane_cp21

0x110a,	// (0x00066f74) grid_vitu2_dropdown_list_pane

0xd086,	// (0x00072ef0) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xd086,	// (0x00072ef0) cell_vitu2_dropdown_list_char_pane

0xd0a7,	// (0x00072f11) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xd0a7,	// (0x00072f11) cell_vitu2_dropdown_list_ctrl_pane

0x46f8,	// (0x0006a562) cell_vitu2_dropdown_list_char_pane_g1

0x46ef,	// (0x0006a559) cell_vitu2_dropdown_list_char_pane_g2

0x46e6,	// (0x0006a550) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x0007587f) cell_vitu2_dropdown_list_char_pane_g

0xd0d3,	// (0x00072f3d) cell_vitu2_dropdown_list_char_pane_t1

0xd0e1,	// (0x00072f4b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xd0e1,	// (0x00072f4b) cell_vitu2_dropdown_list_ctrl_pane_g1

0xd0f1,	// (0x00072f5b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xd0f1,	// (0x00072f5b) cell_vitu2_dropdown_list_ctrl_pane_g2

0xd102,	// (0x00072f6c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xd102,	// (0x00072f6c) cell_vitu2_dropdown_list_ctrl_pane_g3

0xd112,	// (0x00072f7c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xd112,	// (0x00072f7c) cell_vitu2_dropdown_list_ctrl_pane_g4

0x3002,	// (0x00068e6c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x3002,	// (0x00068e6c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x00075886) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x00075886) cell_vitu2_dropdown_list_ctrl_pane_g

0xd12e,	// (0x00072f98) aid_size_cell_gallery2_ParamLimits

0xd12e,	// (0x00072f98) aid_size_cell_gallery2

0xd13c,	// (0x00072fa6) grid_gallery2_pane_ParamLimits

0xd13c,	// (0x00072fa6) grid_gallery2_pane

0xd14b,	// (0x00072fb5) scroll_pane_cp029_ParamLimits

0xd14b,	// (0x00072fb5) scroll_pane_cp029

0xd157,	// (0x00072fc1) cell_gallery2_pane_ParamLimits

0xd157,	// (0x00072fc1) cell_gallery2_pane

0x4701,	// (0x0006a56b) cell_gallery2_pane_g2

0x3899,	// (0x00069703) cell_gallery2_pane_g3

0x470b,	// (0x0006a575) cell_gallery2_pane_g4

0x4713,	// (0x0006a57d) cell_gallery2_pane_g5

0x1440,	// (0x000672aa) grid_highlight_pane_cp10

0xc83e,	// (0x000726a8) popup_vitu2_match_list_window_ParamLimits

0xc852,	// (0x000726bc) popup_vitu2_query_window_ParamLimits

0xc852,	// (0x000726bc) popup_vitu2_query_window

0x7688,	// (0x0006d4f2) bg_vitu2_candi_button_pane

0x46f8,	// (0x0006a562) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x46ef,	// (0x0006a559) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x46e6,	// (0x0006a550) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6989,	// (0x0006c7f3) bg_button_pane_cp015

0xd185,	// (0x00072fef) bg_button_pane_cp016

0xd198,	// (0x00073002) bg_button_pane_cp017

0x2882,	// (0x000686ec) bg_popup_sub_pane_cp22

0x471b,	// (0x0006a585) popup_vitu2_query_window_g1

0x69bc,	// (0x0006c826) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x00075891) popup_vitu2_query_window_g

0x69d9,	// (0x0006c843) popup_vitu2_query_window_t1_ParamLimits

0x69d9,	// (0x0006c843) popup_vitu2_query_window_t1

0x6a0c,	// (0x0006c876) popup_vitu2_query_window_t2_ParamLimits

0x6a0c,	// (0x0006c876) popup_vitu2_query_window_t2

0x6a1e,	// (0x0006c888) popup_vitu2_query_window_t3_ParamLimits

0x6a1e,	// (0x0006c888) popup_vitu2_query_window_t3

0xd1bc,	// (0x00073026) popup_vitu2_query_window_t4_ParamLimits

0xd1bc,	// (0x00073026) popup_vitu2_query_window_t4

0xd1dd,	// (0x00073047) popup_vitu2_query_window_t5_ParamLimits

0xd1dd,	// (0x00073047) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x00075898) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x00075898) popup_vitu2_query_window_t

0x45bc,	// (0x0006a426) main_cset_text_pane

0xcc12,	// (0x00072a7c) aid_area_touch_slider_ParamLimits

0xcc2e,	// (0x00072a98) cset_slider_pane_ParamLimits

0xcc58,	// (0x00072ac2) main_cset_slider_pane_g1_ParamLimits

0xcc6d,	// (0x00072ad7) main_cset_slider_pane_g2_ParamLimits

0x45dd,	// (0x0006a447) main_cset_slider_pane_g3_ParamLimits

0x45dd,	// (0x0006a447) main_cset_slider_pane_g3

0xcc82,	// (0x00072aec) main_cset_slider_pane_g4_ParamLimits

0xcc82,	// (0x00072aec) main_cset_slider_pane_g4

0xcc91,	// (0x00072afb) main_cset_slider_pane_g5_ParamLimits

0xcc91,	// (0x00072afb) main_cset_slider_pane_g5

0xcc9f,	// (0x00072b09) main_cset_slider_pane_g6_ParamLimits

0xcc9f,	// (0x00072b09) main_cset_slider_pane_g6

0xf981,	// (0x000757eb) main_cset_slider_pane_g_ParamLimits

0x460d,	// (0x0006a477) main_cset_slider_pane_t1_ParamLimits

0xcd2f,	// (0x00072b99) main_cset_slider_pane_t2_ParamLimits

0xcd49,	// (0x00072bb3) main_cset_slider_pane_t3_ParamLimits

0xcd63,	// (0x00072bcd) main_cset_slider_pane_t4_ParamLimits

0xcd7d,	// (0x00072be7) main_cset_slider_pane_t5_ParamLimits

0xcd9b,	// (0x00072c05) main_cset_slider_pane_t6_ParamLimits

0xcdb2,	// (0x00072c1c) main_cset_slider_pane_t7_ParamLimits

0xcde0,	// (0x00072c4a) main_cset_slider_pane_t8_ParamLimits

0xcde0,	// (0x00072c4a) main_cset_slider_pane_t8

0xce08,	// (0x00072c72) main_cset_slider_pane_t9_ParamLimits

0xce08,	// (0x00072c72) main_cset_slider_pane_t9

0xce30,	// (0x00072c9a) main_cset_slider_pane_t10_ParamLimits

0xce30,	// (0x00072c9a) main_cset_slider_pane_t10

0xce58,	// (0x00072cc2) main_cset_slider_pane_t11_ParamLimits

0xce58,	// (0x00072cc2) main_cset_slider_pane_t11

0xce82,	// (0x00072cec) main_cset_slider_pane_t12_ParamLimits

0xce82,	// (0x00072cec) main_cset_slider_pane_t12

0xce9f,	// (0x00072d09) main_cset_slider_pane_t13_ParamLimits

0xce9f,	// (0x00072d09) main_cset_slider_pane_t13

0xf9a6,	// (0x00075810) main_cset_slider_pane_t_ParamLimits

0x7688,	// (0x0006d4f2) bg_popup_sub_pane_cp011

0x4727,	// (0x0006a591) main_cset_text_pane_g1

0x472f,	// (0x0006a599) main_cset_text_pane_t1

0x473d,	// (0x0006a5a7) main_cset_text_pane_t2

0x474b,	// (0x0006a5b5) main_cset_text_pane_t3

0x4759,	// (0x0006a5c3) main_cset_text_pane_t4

0x4767,	// (0x0006a5d1) main_cset_text_pane_t5

0x4775,	// (0x0006a5df) main_cset_text_pane_t6

0x4783,	// (0x0006a5ed) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x000758a7) main_cset_text_pane_t

0x7688,	// (0x0006d4f2) main_cam4_burst_pane

0x7688,	// (0x0006d4f2) main_cam5_pane

0xcb61,	// (0x000729cb) bg_button_pane_cp019

0xcb6a,	// (0x000729d4) bg_button_pane_cp020

0x45e9,	// (0x0006a453) main_cset_slider_pane_g7_ParamLimits

0x45e9,	// (0x0006a453) main_cset_slider_pane_g7

0x45f5,	// (0x0006a45f) main_cset_slider_pane_g8_ParamLimits

0x45f5,	// (0x0006a45f) main_cset_slider_pane_g8

0xccb3,	// (0x00072b1d) main_cset_slider_pane_g9_ParamLimits

0xccb3,	// (0x00072b1d) main_cset_slider_pane_g9

0xccbf,	// (0x00072b29) main_cset_slider_pane_g10_ParamLimits

0xccbf,	// (0x00072b29) main_cset_slider_pane_g10

0xcccb,	// (0x00072b35) main_cset_slider_pane_g11_ParamLimits

0xcccb,	// (0x00072b35) main_cset_slider_pane_g11

0xccd7,	// (0x00072b41) main_cset_slider_pane_g12_ParamLimits

0xccd7,	// (0x00072b41) main_cset_slider_pane_g12

0xcce3,	// (0x00072b4d) main_cset_slider_pane_g13_ParamLimits

0xcce3,	// (0x00072b4d) main_cset_slider_pane_g13

0xccef,	// (0x00072b59) main_cset_slider_pane_g14_ParamLimits

0xccef,	// (0x00072b59) main_cset_slider_pane_g14

0xccfb,	// (0x00072b65) main_cset_slider_pane_g15_ParamLimits

0xccfb,	// (0x00072b65) main_cset_slider_pane_g15

0x463b,	// (0x0006a4a5) main_cset_slider_pane_t14_ParamLimits

0x463b,	// (0x0006a4a5) main_cset_slider_pane_t14

0x4674,	// (0x0006a4de) main_cset_slider_pane_t15_ParamLimits

0x4674,	// (0x0006a4de) main_cset_slider_pane_t15

0xd1fe,	// (0x00073068) aid_cam4_burst_size_cell_ParamLimits

0xd1fe,	// (0x00073068) aid_cam4_burst_size_cell

0xd21a,	// (0x00073084) grid_cam4_burst_pane_ParamLimits

0xd21a,	// (0x00073084) grid_cam4_burst_pane

0xd24a,	// (0x000730b4) linegrid_cam4_burst_pane_ParamLimits

0xd24a,	// (0x000730b4) linegrid_cam4_burst_pane

0xd26a,	// (0x000730d4) scroll_pane_cp30_ParamLimits

0xd26a,	// (0x000730d4) scroll_pane_cp30

0xd276,	// (0x000730e0) cell_cam4_burst_pane_ParamLimits

0xd276,	// (0x000730e0) cell_cam4_burst_pane

0x4791,	// (0x0006a5fb) linegrid_cam4_burst_pane_g1_ParamLimits

0x4791,	// (0x0006a5fb) linegrid_cam4_burst_pane_g1

0xd2b2,	// (0x0007311c) linegrid_cam4_burst_pane_g2_ParamLimits

0xd2b2,	// (0x0007311c) linegrid_cam4_burst_pane_g2

0x479e,	// (0x0006a608) linegrid_cam4_burst_pane_g3_ParamLimits

0x479e,	// (0x0006a608) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x000758b6) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x000758b6) linegrid_cam4_burst_pane_g

0xd2c3,	// (0x0007312d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xd2c3,	// (0x0007312d) linegrid_cam4_burst_pane_g3_copy1

0x47ab,	// (0x0006a615) linegrid_cam4_burst_pane_g4_ParamLimits

0x47ab,	// (0x0006a615) linegrid_cam4_burst_pane_g4

0xd2dd,	// (0x00073147) linegrid_cam4_burst_pane_g5_ParamLimits

0xd2dd,	// (0x00073147) linegrid_cam4_burst_pane_g5

0xd2ee,	// (0x00073158) linegrid_cam4_burst_pane_g6_ParamLimits

0xd2ee,	// (0x00073158) linegrid_cam4_burst_pane_g6

0x47b8,	// (0x0006a622) linegrid_cam4_burst_pane_g7_ParamLimits

0x47b8,	// (0x0006a622) linegrid_cam4_burst_pane_g7

0xd2ff,	// (0x00073169) cell_cam4_burst_pane_g1

0x47d1,	// (0x0006a63b) main_cam5_pane_t1_ParamLimits

0x47d1,	// (0x0006a63b) main_cam5_pane_t1

0x47e3,	// (0x0006a64d) main_cam5_pane_t2_ParamLimits

0x47e3,	// (0x0006a64d) main_cam5_pane_t2

0x47f5,	// (0x0006a65f) main_cam5_pane_t3_ParamLimits

0x47f5,	// (0x0006a65f) main_cam5_pane_t3

0x4807,	// (0x0006a671) main_cam5_pane_t4_ParamLimits

0x4807,	// (0x0006a671) main_cam5_pane_t4

0x481f,	// (0x0006a689) main_cam5_pane_t5_ParamLimits

0x481f,	// (0x0006a689) main_cam5_pane_t5

0x4833,	// (0x0006a69d) main_cam5_pane_t6_ParamLimits

0x4833,	// (0x0006a69d) main_cam5_pane_t6

0x4847,	// (0x0006a6b1) main_cam5_pane_t7_ParamLimits

0x4847,	// (0x0006a6b1) main_cam5_pane_t7

0x4859,	// (0x0006a6c3) main_cam5_pane_t8_ParamLimits

0x4859,	// (0x0006a6c3) main_cam5_pane_t8

0x4875,	// (0x0006a6df) main_cam5_pane_t9_ParamLimits

0x4875,	// (0x0006a6df) main_cam5_pane_t9

0x4887,	// (0x0006a6f1) main_cam5_pane_t10_ParamLimits

0x4887,	// (0x0006a6f1) main_cam5_pane_t10

0x4899,	// (0x0006a703) main_cam5_pane_t11_ParamLimits

0x4899,	// (0x0006a703) main_cam5_pane_t11

0x48ab,	// (0x0006a715) main_cam5_pane_t12_ParamLimits

0x48ab,	// (0x0006a715) main_cam5_pane_t12

0x48c0,	// (0x0006a72a) main_cam5_pane_t13_ParamLimits

0x48c0,	// (0x0006a72a) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x000758c2) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x000758c2) main_cam5_pane_t

0x7900,	// (0x0006d76a) popup_scut_keymap_window_ParamLimits

0x7900,	// (0x0006d76a) popup_scut_keymap_window

0xd312,	// (0x0007317c) aid_size_cell_brow_shortcut

0x1440,	// (0x000672aa) bg_popup_window_pane_cp010

0xd31e,	// (0x00073188) grid_scut_pane

0xd32a,	// (0x00073194) cell_scut_pane_ParamLimits

0xd32a,	// (0x00073194) cell_scut_pane

0xd341,	// (0x000731ab) cell_scut_pane_g1

0x48dd,	// (0x0006a747) cell_scut_pane_t1

0x48ec,	// (0x0006a756) cell_scut_pane_t2

0xd34a,	// (0x000731b4) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x000758dd) cell_scut_pane_t

0xb39c,	// (0x00071206) main_mup3_pane_g8_ParamLimits

0xb39c,	// (0x00071206) main_mup3_pane_g8

0xc776,	// (0x000725e0) area_vitu2_query_pane_ParamLimits

0xc776,	// (0x000725e0) area_vitu2_query_pane

0x699b,	// (0x0006c805) input_focus_pane_cp08

0x48fb,	// (0x0006a765) area_vitu2_query_pane_g1

0x6a9c,	// (0x0006c906) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x000758e4) area_vitu2_query_pane_g

0xd358,	// (0x000731c2) area_vitu2_query_pane_t1_ParamLimits

0xd358,	// (0x000731c2) area_vitu2_query_pane_t1

0xd36c,	// (0x000731d6) area_vitu2_query_pane_t2_ParamLimits

0xd36c,	// (0x000731d6) area_vitu2_query_pane_t2

0x6aad,	// (0x0006c917) area_vitu2_query_pane_t3_ParamLimits

0x6aad,	// (0x0006c917) area_vitu2_query_pane_t3

0x6ad5,	// (0x0006c93f) area_vitu2_query_pane_t4_ParamLimits

0x6ad5,	// (0x0006c93f) area_vitu2_query_pane_t4

0x6afd,	// (0x0006c967) area_vitu2_query_pane_t5_ParamLimits

0x6afd,	// (0x0006c967) area_vitu2_query_pane_t5

0x6b25,	// (0x0006c98f) area_vitu2_query_pane_t6_ParamLimits

0x6b25,	// (0x0006c98f) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x000758e9) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x000758e9) area_vitu2_query_pane_t

0xd380,	// (0x000731ea) bg_button_pane_cp018

0xd38e,	// (0x000731f8) bg_button_pane_cp021

0x6b71,	// (0x0006c9db) bg_button_pane_cp022

0x6b82,	// (0x0006c9ec) input_focus_pane_cp09

0x9899,	// (0x0006f703) aid_size_touch_mv_arrow_left

0x98c2,	// (0x0006f72c) aid_size_touch_mv_arrow_right

0xcd13,	// (0x00072b7d) main_cset_slider_pane_g16_ParamLimits

0xcd13,	// (0x00072b7d) main_cset_slider_pane_g16

0xcd21,	// (0x00072b8b) main_cset_slider_pane_g17_ParamLimits

0xcd21,	// (0x00072b8b) main_cset_slider_pane_g17

0xd2ff,	// (0x00073169) cell_cam4_burst_pane_g1_ParamLimits

0x7688,	// (0x0006d4f2) compa_mode_pane

0xcf30,	// (0x00072d9a) popup_vtel_slider_window_g3_ParamLimits

0xcf30,	// (0x00072d9a) popup_vtel_slider_window_g3

0xcf44,	// (0x00072dae) popup_vtel_slider_window_g4_ParamLimits

0xcf44,	// (0x00072dae) popup_vtel_slider_window_g4

0xcf58,	// (0x00072dc2) popup_vtel_slider_window_t1_ParamLimits

0xcf58,	// (0x00072dc2) popup_vtel_slider_window_t1

0x7688,	// (0x0006d4f2) main_cl_pane

0xa6bb,	// (0x00070525) popup_imed_adjust2_window_ParamLimits

0x2882,	// (0x000686ec) bg_tb_trans_pane_cp05_ParamLimits

0x329b,	// (0x00069105) popup_imed_adjust2_window_g1_ParamLimits

0x32aa,	// (0x00069114) popup_imed_adjust2_window_g2_ParamLimits

0x32aa,	// (0x00069114) popup_imed_adjust2_window_g2

0x32b6,	// (0x00069120) popup_imed_adjust2_window_g3_ParamLimits

0x32b6,	// (0x00069120) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x00075654) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x00075654) popup_imed_adjust2_window_g

0x32c2,	// (0x0006912c) popup_imed_adjust2_window_t1_ParamLimits

0x32da,	// (0x00069144) slider_imed_adjust_pane_ParamLimits

0x32ee,	// (0x00069158) slider_imed_adjust_pane_g1_ParamLimits

0x32fe,	// (0x00069168) slider_imed_adjust_pane_g2_ParamLimits

0x330e,	// (0x00069178) slider_imed_adjust_pane_g3_ParamLimits

0x331f,	// (0x00069189) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x0007565b) slider_imed_adjust_pane_g_ParamLimits

0xc4bd,	// (0x00072327) aid_touch_area_cam4_ParamLimits

0xc4bd,	// (0x00072327) aid_touch_area_cam4

0xc4cd,	// (0x00072337) battery_pane_cp01

0xc554,	// (0x000723be) main_camera4_pane_g6_ParamLimits

0xc554,	// (0x000723be) main_camera4_pane_g6

0xc572,	// (0x000723dc) main_camera4_pane_t2_ParamLimits

0xc572,	// (0x000723dc) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x0007575e) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x0007575e) main_camera4_pane_t

0xc5f9,	// (0x00072463) aid_touch_area_vid4_ParamLimits

0xc5f9,	// (0x00072463) aid_touch_area_vid4

0xc639,	// (0x000724a3) main_video4_pane_g5_ParamLimits

0xc639,	// (0x000724a3) main_video4_pane_g5

0xc65d,	// (0x000724c7) vid4_progress_pane_ParamLimits

0xc65d,	// (0x000724c7) vid4_progress_pane

0x4601,	// (0x0006a46b) main_cset_slider_pane_g18_ParamLimits

0x4601,	// (0x0006a46b) main_cset_slider_pane_g18

0x47c5,	// (0x0006a62f) cell_cam4_burst_pane_g2_ParamLimits

0x47c5,	// (0x0006a62f) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x000758bd) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x000758bd) cell_cam4_burst_pane_g

0xd39a,	// (0x00073204) bg_cl_pane_ParamLimits

0xd39a,	// (0x00073204) bg_cl_pane

0xd3a6,	// (0x00073210) cl_header_pane_ParamLimits

0xd3a6,	// (0x00073210) cl_header_pane

0xd3b2,	// (0x0007321c) cl_listscroll_pane_ParamLimits

0xd3b2,	// (0x0007321c) cl_listscroll_pane

0x4907,	// (0x0006a771) bg_cl_pane_g1

0x490f,	// (0x0006a779) bg_cl_pane_g2

0x4917,	// (0x0006a781) bg_cl_pane_g3

0x491f,	// (0x0006a789) bg_cl_pane_g4

0x4927,	// (0x0006a791) bg_cl_pane_g5

0x492f,	// (0x0006a799) bg_cl_pane_g6

0x4937,	// (0x0006a7a1) bg_cl_pane_g7

0x493f,	// (0x0006a7a9) bg_cl_pane_g8

0x4947,	// (0x0006a7b1) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x000758f8) bg_cl_pane_g

0xd3be,	// (0x00073228) aid_height_cl_leading_ParamLimits

0xd3be,	// (0x00073228) aid_height_cl_leading

0xd3ca,	// (0x00073234) aid_height_cl_text_ParamLimits

0xd3ca,	// (0x00073234) aid_height_cl_text

0x7937,	// (0x0006d7a1) bg_cl_header_pane_ParamLimits

0x7937,	// (0x0006d7a1) bg_cl_header_pane

0xd3e2,	// (0x0007324c) cl_header_pane_g1_ParamLimits

0xd3e2,	// (0x0007324c) cl_header_pane_g1

0xd3ef,	// (0x00073259) cl_header_pane_t1_ParamLimits

0xd3ef,	// (0x00073259) cl_header_pane_t1

0x494f,	// (0x0006a7b9) cl_list_pane

0x45d4,	// (0x0006a43e) hc_scroll_pane_cp01

0x0c96,	// (0x00066b00) bg_cl_header_pane_g1

0x44ba,	// (0x0006a324) bg_cl_header_pane_g2

0x0cb6,	// (0x00066b20) bg_cl_header_pane_g3

0x44ca,	// (0x0006a334) bg_cl_header_pane_g4

0x44c2,	// (0x0006a32c) bg_cl_header_pane_g5

0x46de,	// (0x0006a548) bg_cl_header_pane_g6

0x44e2,	// (0x0006a34c) bg_cl_header_pane_g7

0x44ea,	// (0x0006a354) bg_cl_header_pane_g8

0x44da,	// (0x0006a344) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x0007590b) bg_cl_header_pane_g

0xd401,	// (0x0007326b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xd401,	// (0x0007326b) hc_cl_list_double_graphic_heading_pane

0xd412,	// (0x0007327c) hc_cl_list_single_graphic_pane_ParamLimits

0xd412,	// (0x0007327c) hc_cl_list_single_graphic_pane

0xd42b,	// (0x00073295) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xd42b,	// (0x00073295) hc_cl_list_single_graphic_pane_g1

0xd437,	// (0x000732a1) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd437,	// (0x000732a1) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x0007591e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x0007591e) hc_cl_list_single_graphic_pane_g

0xd44b,	// (0x000732b5) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd44b,	// (0x000732b5) hc_cl_list_single_graphic_pane_t1

0xd42b,	// (0x00073295) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xd42b,	// (0x00073295) hc_cl_list_double_graphic_heading_pane_g1

0xd460,	// (0x000732ca) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd460,	// (0x000732ca) hc_cl_list_double_graphic_heading_pane_g2

0xd474,	// (0x000732de) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd474,	// (0x000732de) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x00075923) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x00075923) hc_cl_list_double_graphic_heading_pane_g

0xd488,	// (0x000732f2) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd488,	// (0x000732f2) hc_cl_list_double_graphic_heading_pane_t1

0xd49d,	// (0x00073307) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd49d,	// (0x00073307) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x0007592a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x0007592a) hc_cl_list_double_graphic_heading_pane_t

0xd4ba,	// (0x00073324) vid4_progress_pane_g1

0xd4cc,	// (0x00073336) vid4_progress_pane_g2

0x9efb,	// (0x0006fd65) vid4_progress_pane_g3

0xd4dc,	// (0x00073346) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x0007592f) vid4_progress_pane_g

0xd4fa,	// (0x00073364) vid4_progress_pane_t1

0xd50f,	// (0x00073379) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x0007593a) vid4_progress_pane_t

0xd53a,	// (0x000733a4) wait_bar_pane_cp07

0x2b89,	// (0x000689f3) blid_firmament_pane_ParamLimits

0x2bcc,	// (0x00068a36) popup_blid_sat_info2_window_g1

0x2bf0,	// (0x00068a5a) popup_blid_sat_info2_window_t3

0x2bfe,	// (0x00068a68) popup_blid_sat_info2_window_t4

0x2c0c,	// (0x00068a76) popup_blid_sat_info2_window_t5

0x2c1a,	// (0x00068a84) popup_blid_sat_info2_window_t6

0x2c2a,	// (0x00068a94) popup_blid_sat_info2_window_t7

0x2c38,	// (0x00068aa2) popup_blid_sat_info2_window_t8

0x2c46,	// (0x00068ab0) popup_blid_sat_info2_window_t9

0x2c54,	// (0x00068abe) popup_blid_sat_info2_window_t10

0x2d16,	// (0x00068b80) aid_firma_cardinal_ParamLimits

0x2d2a,	// (0x00068b94) blid_firmament_pane_t1_ParamLimits

0x2d41,	// (0x00068bab) blid_firmament_pane_t2_ParamLimits

0x2d58,	// (0x00068bc2) blid_firmament_pane_t3_ParamLimits

0x2d6f,	// (0x00068bd9) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x0007554d) blid_firmament_pane_t_ParamLimits

0x2d86,	// (0x00068bf0) blid_sat_info_pane_ParamLimits

0x2890,	// (0x000686fa) main_cam_set_pane_ParamLimits

0xbb46,	// (0x000719b0) aid_size_cell_colour_35_ParamLimits

0xbb60,	// (0x000719ca) aid_size_cell_colour_112_ParamLimits

0xbb77,	// (0x000719e1) aid_size_cell_effect_ParamLimits

0x2890,	// (0x000686fa) bg_tb_trans_pane_cp02_ParamLimits

0x0fb7,	// (0x00066e21) heading_imed_pane_ParamLimits

0xbb91,	// (0x000719fb) listscroll_imed_pane_ParamLimits

0x1eb4,	// (0x00067d1e) popup_call2_audio_first_window_g5_ParamLimits

0x1eb4,	// (0x00067d1e) popup_call2_audio_first_window_g5

0xc27a,	// (0x000720e4) aid_size_touch_image3_arrow_left_ParamLimits

0xc27a,	// (0x000720e4) aid_size_touch_image3_arrow_left

0xc290,	// (0x000720fa) aid_size_touch_image3_arrow_right_ParamLimits

0xc290,	// (0x000720fa) aid_size_touch_image3_arrow_right

0xd525,	// (0x0007338f) vid4_progress_pane_t3

0xbe2f,	// (0x00071c99) main_hwr_training_symbol_option_pane_ParamLimits

0xbe2f,	// (0x00071c99) main_hwr_training_symbol_option_pane

0x3588,	// (0x000693f2) popup_hwr_training_preview_window_ParamLimits

0x3588,	// (0x000693f2) popup_hwr_training_preview_window

0xbe90,	// (0x00071cfa) hwr_training_navi_pane_g5_ParamLimits

0xbe90,	// (0x00071cfa) hwr_training_navi_pane_g5

0x4395,	// (0x0006a1ff) popup_char_count_window

0x7937,	// (0x0006d7a1) bg_popup_sub_pane_cp20_ParamLimits

0xd04e,	// (0x00072eb8) list_vitu2_match_list_pane_ParamLimits

0xd05a,	// (0x00072ec4) vitu2_page_scroll_pane_ParamLimits

0xd05a,	// (0x00072ec4) vitu2_page_scroll_pane

0x4961,	// (0x0006a7cb) list_single_hwr_training_symbol_option_pane_ParamLimits

0x4961,	// (0x0006a7cb) list_single_hwr_training_symbol_option_pane

0x4974,	// (0x0006a7de) list_single_hwr_training_symbol_option_pane_g1

0x497c,	// (0x0006a7e6) list_single_hwr_training_symbol_option_pane_t1

0x498a,	// (0x0006a7f4) bg_button_pane_cp023

0x4993,	// (0x0006a7fd) bg_button_pane_cp024

0xd554,	// (0x000733be) vitu2_page_scroll_pane_g1

0xd55c,	// (0x000733c6) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x00075941) vitu2_page_scroll_pane_g

0xd564,	// (0x000733ce) vitu2_page_scroll_pane_t1

0x49c6,	// (0x0006a830) popup_char_count_window_g1

0x49cf,	// (0x0006a839) popup_char_count_window_g2

0x49d8,	// (0x0006a842) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x00075946) popup_char_count_window_g

0x49e1,	// (0x0006a84b) popup_char_count_window_t1

0x7688,	// (0x0006d4f2) main_vded2_pane

0x3287,	// (0x000690f1) aid_size_cell_imed_line

0x3291,	// (0x000690fb) grid_imed_line_width_pane

0xc6cb,	// (0x00072535) vid4_indicators_pane_g4

0x49ef,	// (0x0006a859) cell_imed_line_width_pane_ParamLimits

0x49ef,	// (0x0006a859) cell_imed_line_width_pane

0x4a03,	// (0x0006a86d) cell_imed_line_width_pane_g1

0x2b37,	// (0x000689a1) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x0007594d) cell_imed_line_width_pane_g

0xd573,	// (0x000733dd) main_vded2_pane_g1_ParamLimits

0xd573,	// (0x000733dd) main_vded2_pane_g1

0xd580,	// (0x000733ea) main_vded2_pane_g2_ParamLimits

0xd580,	// (0x000733ea) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x00075952) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x00075952) main_vded2_pane_g

0xd58e,	// (0x000733f8) vded2_slider_pane_ParamLimits

0xd58e,	// (0x000733f8) vded2_slider_pane

0xd59b,	// (0x00073405) aid_size_touch_vded2_end

0xd5a5,	// (0x0007340f) aid_size_touch_vded2_playhead

0x4a0c,	// (0x0006a876) aid_size_touch_vded2_start

0x4a14,	// (0x0006a87e) vded2_slider_bg_pane

0x4a1d,	// (0x0006a887) vded2_slider_pane_g1

0x4a26,	// (0x0006a890) vded2_slider_pane_g2

0xd5ad,	// (0x00073417) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x00075957) vded2_slider_pane_g

0x4a2e,	// (0x0006a898) vded2_slider_bg_pane_g1

0x4a37,	// (0x0006a8a1) vded2_slider_bg_pane_g2

0x4a40,	// (0x0006a8aa) vded2_slider_bg_pane_g3

0x0002,

0xfaf4,	// (0x0007595e) vded2_slider_bg_pane_g

0x9f13,	// (0x0006fd7d) aid_postcard_touch_down_pane_ParamLimits

0x9f13,	// (0x0006fd7d) aid_postcard_touch_down_pane

0x9f23,	// (0x0006fd8d) aid_postcard_touch_up_pane_ParamLimits

0x9f23,	// (0x0006fd8d) aid_postcard_touch_up_pane

0x7688,	// (0x0006d4f2) main_blid2_pane

0xa646,	// (0x000704b0) popup_blid2_search_window

0x7688,	// (0x0006d4f2) blid2_gps_pane

0x7688,	// (0x0006d4f2) blid2_navig_pane

0x7688,	// (0x0006d4f2) blid2_search_pane

0x7688,	// (0x0006d4f2) blid2_tripm_pane

0xd5b6,	// (0x00073420) blid2_search_pane_g1_ParamLimits

0xd5b6,	// (0x00073420) blid2_search_pane_g1

0xd5c6,	// (0x00073430) blid2_search_pane_t1_ParamLimits

0xd5c6,	// (0x00073430) blid2_search_pane_t1

0xd5d8,	// (0x00073442) aid_size_cell_blid2_gps_ParamLimits

0xd5d8,	// (0x00073442) aid_size_cell_blid2_gps

0xd5e8,	// (0x00073452) blid2_gps_pane_g1_ParamLimits

0xd5e8,	// (0x00073452) blid2_gps_pane_g1

0xd5f4,	// (0x0007345e) grid_blid2_satellite_pane_ParamLimits

0xd5f4,	// (0x0007345e) grid_blid2_satellite_pane

0xd604,	// (0x0007346e) blid2_navig_pane_g1_ParamLimits

0xd604,	// (0x0007346e) blid2_navig_pane_g1

0xd610,	// (0x0007347a) blid2_navig_pane_t1_ParamLimits

0xd610,	// (0x0007347a) blid2_navig_pane_t1

0xd622,	// (0x0007348c) blid2_navig_pane_t2_ParamLimits

0xd622,	// (0x0007348c) blid2_navig_pane_t2

0x0001,

0xfafb,	// (0x00075965) blid2_navig_pane_t_ParamLimits

0xfafb,	// (0x00075965) blid2_navig_pane_t

0xd634,	// (0x0007349e) blid2_navig_ring_pane_ParamLimits

0xd634,	// (0x0007349e) blid2_navig_ring_pane

0xd644,	// (0x000734ae) blid2_speed_pane_ParamLimits

0xd644,	// (0x000734ae) blid2_speed_pane

0xd650,	// (0x000734ba) blid2_tripm_pane_g1_ParamLimits

0xd650,	// (0x000734ba) blid2_tripm_pane_g1

0xd660,	// (0x000734ca) blid2_tripm_pane_g2_ParamLimits

0xd660,	// (0x000734ca) blid2_tripm_pane_g2

0xd66c,	// (0x000734d6) blid2_tripm_pane_g3_ParamLimits

0xd66c,	// (0x000734d6) blid2_tripm_pane_g3

0xd678,	// (0x000734e2) blid2_tripm_pane_g4_ParamLimits

0xd678,	// (0x000734e2) blid2_tripm_pane_g4

0xd684,	// (0x000734ee) blid2_tripm_pane_g5_ParamLimits

0xd684,	// (0x000734ee) blid2_tripm_pane_g5

0x0005,

0xfb00,	// (0x0007596a) blid2_tripm_pane_g_ParamLimits

0xfb00,	// (0x0007596a) blid2_tripm_pane_g

0xd6a0,	// (0x0007350a) blid2_tripm_pane_t1_ParamLimits

0xd6a0,	// (0x0007350a) blid2_tripm_pane_t1

0xd6b4,	// (0x0007351e) blid2_tripm_pane_t2_ParamLimits

0xd6b4,	// (0x0007351e) blid2_tripm_pane_t2

0xd6c6,	// (0x00073530) blid2_tripm_pane_t3_ParamLimits

0xd6c6,	// (0x00073530) blid2_tripm_pane_t3

0x0003,

0xfb0d,	// (0x00075977) blid2_tripm_pane_t_ParamLimits

0xfb0d,	// (0x00075977) blid2_tripm_pane_t

0xd6f8,	// (0x00073562) cell_blid2_satellite_pane_ParamLimits

0xd6f8,	// (0x00073562) cell_blid2_satellite_pane

0xd712,	// (0x0007357c) cell_blid2_satellite_pane_g1

0x4a49,	// (0x0006a8b3) cell_blid2_satellite_pane_t1

0x2d96,	// (0x00068c00) blid2_speed_pane_g1

0x4a57,	// (0x0006a8c1) blid2_speed_pane_t1

0x4a65,	// (0x0006a8cf) blid2_speed_pane_t2

0x0001,

0xfb16,	// (0x00075980) blid2_speed_pane_t

0x2d96,	// (0x00068c00) blid2_navig_ring_pane_g1

0xd71b,	// (0x00073585) blid2_navig_ring_pane_g2

0xd723,	// (0x0007358d) blid2_navig_ring_pane_g3

0xd72b,	// (0x00073595) blid2_navig_ring_pane_g4

0xd733,	// (0x0007359d) blid2_navig_ring_pane_g5

0x0004,

0xfb1b,	// (0x00075985) blid2_navig_ring_pane_g

0x7688,	// (0x0006d4f2) bg_popup_window_pane_cp011

0x4a73,	// (0x0006a8dd) popup_blid2_search_window_g1

0x4a7b,	// (0x0006a8e5) popup_blid2_search_window_t1

0x4a89,	// (0x0006a8f3) popup_blid2_search_window_t2

0x0001,

0xfb26,	// (0x00075990) popup_blid2_search_window_t

0x0ba5,	// (0x00066a0f) main_browser_pane_g1

0x0846,	// (0x000666b0) main_browser_pane_ParamLimits

0x2890,	// (0x000686fa) bg_button_pane_cp011_ParamLimits

0xc934,	// (0x0007279e) cell_vitu2_function_pane_g1_ParamLimits

0x2882,	// (0x000686ec) bg_popup_sub_pane_cp22_ParamLimits

0x699b,	// (0x0006c805) input_focus_pane_cp08_ParamLimits

0xd1ab,	// (0x00073015) popup_vitu2_query_button_pane_ParamLimits

0xd1ab,	// (0x00073015) popup_vitu2_query_button_pane

0x69b2,	// (0x0006c81c) popup_vitu2_query_input_button_pane

0x471b,	// (0x0006a585) popup_vitu2_query_window_g1_ParamLimits

0x69bc,	// (0x0006c826) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x00075891) popup_vitu2_query_window_g_ParamLimits

0x7688,	// (0x0006d4f2) bg_button_pane_cp026

0xd73b,	// (0x000735a5) popup_vitu2_query_input_button_pane_g1

0x7688,	// (0x0006d4f2) bg_button_pane_cp025

0x4a97,	// (0x0006a901) popup_vitu2_query_button_pane_t1

0xb09f,	// (0x00070f09) main_mp3_pane_t6

0xb0af,	// (0x00070f19) popup_slider_window_cp01

0xc5a8,	// (0x00072412) cam4_battery_pane

0xc688,	// (0x000724f2) cam4_battery_pane_cp02

0xd4b2,	// (0x0007331c) cam4_battery_pane_cp01

0xd4b2,	// (0x0007331c) cam4_battery_pane_cp03

0x2d96,	// (0x00068c00) cam4_battery_pane_g1

0x36a2,	// (0x0006950c) cam4_battery_pane_g2

0x0001,

0xfb2b,	// (0x00075995) cam4_battery_pane_g

0x2c62,	// (0x00068acc) popup_blid_sat_info2_window_t11

0x9899,	// (0x0006f703) aid_size_touch_mv_arrow_left_ParamLimits

0x98c2,	// (0x0006f72c) aid_size_touch_mv_arrow_right_ParamLimits

0x13a0,	// (0x0006720a) navi_pane_g1_ParamLimits

0x9901,	// (0x0006f76b) navi_pane_g2_ParamLimits

0x992f,	// (0x0006f799) navi_pane_g3_ParamLimits

0xf3f5,	// (0x0007525f) navi_pane_g_ParamLimits

0x9989,	// (0x0006f7f3) navi_pane_mv_t1_ParamLimits

0xbb9d,	// (0x00071a07) grid_imed_effect_pane_ParamLimits

0x8651,	// (0x0006e4bb) aid_placing_vt_slider_lsc

0x0af4,	// (0x0006695e) aid_placing_vt_slider_prt

0x2890,	// (0x000686fa) bg_tb_trans_pane_cp01_ParamLimits

0x2f22,	// (0x00068d8c) popup_image_details_window_g1_ParamLimits

0x2f35,	// (0x00068d9f) popup_image_details_window_g2_ParamLimits

0x2f4a,	// (0x00068db4) popup_image_details_window_g3_ParamLimits

0x2f4a,	// (0x00068db4) popup_image_details_window_g3

0xf728,	// (0x00075592) popup_image_details_window_g_ParamLimits

0x2f5e,	// (0x00068dc8) popup_image_details_window_t1_ParamLimits

0x2f70,	// (0x00068dda) popup_image_details_window_t2_ParamLimits

0x2f89,	// (0x00068df3) popup_image_details_window_t3_ParamLimits

0x2f9d,	// (0x00068e07) popup_image_details_window_t4_ParamLimits

0x2fb8,	// (0x00068e22) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x00075599) popup_image_details_window_t_ParamLimits

0xd3d6,	// (0x00073240) cl_header_name_pane_ParamLimits

0xd3d6,	// (0x00073240) cl_header_name_pane

0xd743,	// (0x000735ad) cl_header_name_pane_t1_ParamLimits

0xd743,	// (0x000735ad) cl_header_name_pane_t1

0xd75a,	// (0x000735c4) cl_header_name_pane_t2_ParamLimits

0xd75a,	// (0x000735c4) cl_header_name_pane_t2

0xd784,	// (0x000735ee) cl_header_name_pane_t3_ParamLimits

0xd784,	// (0x000735ee) cl_header_name_pane_t3

0x0002,

0xfb30,	// (0x0007599a) cl_header_name_pane_t_ParamLimits

0xfb30,	// (0x0007599a) cl_header_name_pane_t

0x995a,	// (0x0006f7c4) navi_pane_mv_g2_ParamLimits

0x436f,	// (0x0006a1d9) field_vitu2_entry_pane_g1_ParamLimits

0x437b,	// (0x0006a1e5) field_vitu2_entry_pane_g2_ParamLimits

0x4387,	// (0x0006a1f1) field_vitu2_entry_pane_g3_ParamLimits

0x4387,	// (0x0006a1f1) field_vitu2_entry_pane_g3

0xf926,	// (0x00075790) field_vitu2_entry_pane_g_ParamLimits

0xc8c4,	// (0x0007272e) cell_vitu2_itu_pane_g1_ParamLimits

0xc8d4,	// (0x0007273e) cell_vitu2_itu_pane_g2_ParamLimits

0xc8d4,	// (0x0007273e) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x0007579c) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x0007579c) cell_vitu2_itu_pane_g

0x2890,	// (0x000686fa) bg_vkb2_func_pane_cp05_ParamLimits

0x2890,	// (0x000686fa) bg_vkb2_func_pane_cp05

0x2890,	// (0x000686fa) bg_vkb2_func_pane_cp03

0x2890,	// (0x000686fa) bg_vkb2_func_pane_cp04

0x2890,	// (0x000686fa) bg_vkb2_func_pane_cp10_ParamLimits

0x2890,	// (0x000686fa) bg_vkb2_func_pane_cp10

0x6b71,	// (0x0006c9db) bg_vkb2_func_pane_cp08

0xd380,	// (0x000731ea) bg_vkb2_func_pane_cp06

0xd38e,	// (0x000731f8) bg_vkb2_func_pane_cp07

0x499c,	// (0x0006a806) bg_vkb2_func_pane_cp11_ParamLimits

0x499c,	// (0x0006a806) bg_vkb2_func_pane_cp11

0x49b1,	// (0x0006a81b) bg_vkb2_func_pane_cp12_ParamLimits

0x49b1,	// (0x0006a81b) bg_vkb2_func_pane_cp12

0x7688,	// (0x0006d4f2) bg_vkb2_func_pane_cp09

0x44ba,	// (0x0006a324) bg_vkb2_func_pane_g1

0x0cb6,	// (0x00066b20) bg_vkb2_func_pane_g2

0x44c2,	// (0x0006a32c) bg_vkb2_func_pane_g3

0x44ca,	// (0x0006a334) bg_vkb2_func_pane_g4

0x46de,	// (0x0006a548) bg_vkb2_func_pane_g5

0x44e2,	// (0x0006a34c) bg_vkb2_func_pane_g6

0x44ea,	// (0x0006a354) bg_vkb2_func_pane_g7

0x44da,	// (0x0006a344) bg_vkb2_func_pane_g8

0x0c96,	// (0x00066b00) bg_vkb2_func_pane_g9

0x0008,

0xfb37,	// (0x000759a1) bg_vkb2_func_pane_g

0xd692,	// (0x000734fc) blid2_tripm_pane_g6_ParamLimits

0xd692,	// (0x000734fc) blid2_tripm_pane_g6

0x365c,	// (0x000694c6) mp4_progress_pane_g1

0xd6ec,	// (0x00073556) blid2_tripm_values_pane_ParamLimits

0xd6ec,	// (0x00073556) blid2_tripm_values_pane

0xd7a9,	// (0x00073613) blid2_tripm_values_pane_t1

0xd7b7,	// (0x00073621) blid2_tripm_values_pane_t2

0xd7c5,	// (0x0007362f) blid2_tripm_values_pane_t3

0xd7d3,	// (0x0007363d) blid2_tripm_values_pane_t4

0xd7e1,	// (0x0007364b) blid2_tripm_values_pane_t5

0xd7ef,	// (0x00073659) blid2_tripm_values_pane_t6

0xd7fd,	// (0x00073667) blid2_tripm_values_pane_t7

0xd80b,	// (0x00073675) blid2_tripm_values_pane_t8

0xd819,	// (0x00073683) blid2_tripm_values_pane_t9

0x0008,

0xfb4a,	// (0x000759b4) blid2_tripm_values_pane_t

0x8691,	// (0x0006e4fb) call_video_pane_t1_ParamLimits

0x86b2,	// (0x0006e51c) call_video_pane_t2_ParamLimits

0xf27e,	// (0x000750e8) call_video_pane_t_ParamLimits

0x6758,	// (0x0006c5c2) msg_header_pane_g1_ParamLimits

0x15db,	// (0x00067445) msg_header_pane_g2_ParamLimits

0x15db,	// (0x00067445) msg_header_pane_g2

0x0001,

0xf498,	// (0x00075302) msg_header_pane_g_ParamLimits

0xf498,	// (0x00075302) msg_header_pane_g

0x0846,	// (0x000666b0) main_clock2_pane_ParamLimits

0xb943,	// (0x000717ad) grid_clock2_toolbar_pane_ParamLimits

0xb943,	// (0x000717ad) grid_clock2_toolbar_pane

0xb943,	// (0x000717ad) listscroll_clock2_pane_ParamLimits

0xb943,	// (0x000717ad) listscroll_clock2_pane

0xb9da,	// (0x00071844) main_clock2_pane_t3_ParamLimits

0xb9da,	// (0x00071844) main_clock2_pane_t3

0xb9ec,	// (0x00071856) main_clock2_pane_t4_ParamLimits

0xb9ec,	// (0x00071856) main_clock2_pane_t4

0x4aa5,	// (0x0006a90f) cell_clock2_toolbar_pane

0x4aad,	// (0x0006a917) cell_clock2_toolbar_pane_cp01

0x4aad,	// (0x0006a917) cell_clock2_toolbar_pane_cp02

0x4ab5,	// (0x0006a91f) cell_clock2_toolbar_pane_cp03

0x4abd,	// (0x0006a927) list_clock2_pane

0x12f7,	// (0x00067161) scroll_pane_cp10

0x4ac5,	// (0x0006a92f) list_single_clock2_pane_ParamLimits

0x4ac5,	// (0x0006a92f) list_single_clock2_pane

0x1440,	// (0x000672aa) list_highlight_pane_cp08

0x4ad2,	// (0x0006a93c) list_single_clock2_pane_t1

0x4ae0,	// (0x0006a94a) list_single_clock2_pane_t2

0x0001,

0xfb5d,	// (0x000759c7) list_single_clock2_pane_t

0x7688,	// (0x0006d4f2) bg_button_pane_cp10

0x4aee,	// (0x0006a958) cell_clock2_toolbar_pane_g1

0x9e75,	// (0x0006fcdf) aid_main_viewer_pane_g1_ParamLimits

0x9e75,	// (0x0006fcdf) aid_main_viewer_pane_g1

0x9e81,	// (0x0006fceb) aid_main_viewer_pane_g2_ParamLimits

0x9e81,	// (0x0006fceb) aid_main_viewer_pane_g2

0x9e8d,	// (0x0006fcf7) aid_main_viewer_pane_g3_ParamLimits

0x9e8d,	// (0x0006fcf7) aid_main_viewer_pane_g3

0x9e9e,	// (0x0006fd08) aid_main_viewer_pane_g4_ParamLimits

0x9e9e,	// (0x0006fd08) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x00075313) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x00075313) aid_main_viewer_pane_g

0xa61e,	// (0x00070488) main_calc_pane_ParamLimits

0xa62b,	// (0x00070495) main_dialer2_pane_ParamLimits

0x7688,	// (0x0006d4f2) main_cam6_pane

0x7688,	// (0x0006d4f2) main_vid6_pane

0xb94f,	// (0x000717b9) listscroll_gen_pane_cp06_ParamLimits

0xb94f,	// (0x000717b9) listscroll_gen_pane_cp06

0xb9fe,	// (0x00071868) main_clock2_pane_t5_ParamLimits

0xb9fe,	// (0x00071868) main_clock2_pane_t5

0xba47,	// (0x000718b1) aid_call2_pane_cp10_ParamLimits

0xba59,	// (0x000718c3) aid_call_pane_cp10_ParamLimits

0x1375,	// (0x000671df) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1375,	// (0x000671df) popup_clock_analogue_window_cp10_g2_ParamLimits

0xba6b,	// (0x000718d5) popup_clock_analogue_window_cp10_g3_ParamLimits

0xba6b,	// (0x000718d5) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1375,	// (0x000671df) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x00075649) popup_clock_analogue_window_cp10_g_ParamLimits

0xba7d,	// (0x000718e7) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc227,	// (0x00072091) cell_dialer2_keypad_pane_g2_ParamLimits

0xc227,	// (0x00072091) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x0007572f) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x0007572f) cell_dialer2_keypad_pane_g

0xc243,	// (0x000720ad) cell_dialer2_keypad_pane_t1

0xcbff,	// (0x00072a69) main_cset_text2_pane_ParamLimits

0xcbff,	// (0x00072a69) main_cset_text2_pane

0x48fb,	// (0x0006a765) area_vitu2_query_pane_g1_ParamLimits

0x6a9c,	// (0x0006c906) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x000758e4) area_vitu2_query_pane_g_ParamLimits

0x6b4d,	// (0x0006c9b7) area_vitu2_query_pane_t7_ParamLimits

0x6b4d,	// (0x0006c9b7) area_vitu2_query_pane_t7

0xd380,	// (0x000731ea) bg_button_pane_cp018_ParamLimits

0xd38e,	// (0x000731f8) bg_button_pane_cp021_ParamLimits

0x6b71,	// (0x0006c9db) bg_button_pane_cp022_ParamLimits

0x6b71,	// (0x0006c9db) bg_vkb2_func_pane_cp08_ParamLimits

0xd380,	// (0x000731ea) bg_vkb2_func_pane_cp06_ParamLimits

0xd38e,	// (0x000731f8) bg_vkb2_func_pane_cp07_ParamLimits

0x6b82,	// (0x0006c9ec) input_focus_pane_cp09_ParamLimits

0xd827,	// (0x00073691) cam6_autofocus_pane_ParamLimits

0xd827,	// (0x00073691) cam6_autofocus_pane

0xd849,	// (0x000736b3) cam6_image_uncrop_pane_ParamLimits

0xd849,	// (0x000736b3) cam6_image_uncrop_pane

0xd876,	// (0x000736e0) cam6_indi_pane_ParamLimits

0xd876,	// (0x000736e0) cam6_indi_pane

0xd890,	// (0x000736fa) cam6_mode_pane_ParamLimits

0xd890,	// (0x000736fa) cam6_mode_pane

0xd8a4,	// (0x0007370e) cam6_timer_pane_ParamLimits

0xd8a4,	// (0x0007370e) cam6_timer_pane

0xd8b0,	// (0x0007371a) cam6_zoom_pane_ParamLimits

0xd8b0,	// (0x0007371a) cam6_zoom_pane

0xd8c8,	// (0x00073732) cam6_mode_pane_g1_ParamLimits

0xd8c8,	// (0x00073732) cam6_mode_pane_g1

0xd8d4,	// (0x0007373e) cam6_mode_pane_g2_ParamLimits

0xd8d4,	// (0x0007373e) cam6_mode_pane_g2

0xd8e0,	// (0x0007374a) cam6_mode_pane_g3_ParamLimits

0xd8e0,	// (0x0007374a) cam6_mode_pane_g3

0xd8ec,	// (0x00073756) cam6_mode_pane_g4_ParamLimits

0xd8ec,	// (0x00073756) cam6_mode_pane_g4

0x0003,

0xfb62,	// (0x000759cc) cam6_mode_pane_g_ParamLimits

0xfb62,	// (0x000759cc) cam6_mode_pane_g

0x44ac,	// (0x0006a316) bg_tb_trans_pane_cp08_ParamLimits

0x44ac,	// (0x0006a316) bg_tb_trans_pane_cp08

0x4af6,	// (0x0006a960) cam6_battery_pane_ParamLimits

0x4af6,	// (0x0006a960) cam6_battery_pane

0x4b0c,	// (0x0006a976) cam6_indi_pane_g1_ParamLimits

0x4b0c,	// (0x0006a976) cam6_indi_pane_g1

0x4b1e,	// (0x0006a988) cam6_indi_pane_g2_ParamLimits

0x4b1e,	// (0x0006a988) cam6_indi_pane_g2

0x4b30,	// (0x0006a99a) cam6_indi_pane_g3_ParamLimits

0x4b30,	// (0x0006a99a) cam6_indi_pane_g3

0x0002,

0xfb6b,	// (0x000759d5) cam6_indi_pane_g_ParamLimits

0xfb6b,	// (0x000759d5) cam6_indi_pane_g

0x4b42,	// (0x0006a9ac) cam6_indi_pane_t1_ParamLimits

0x4b42,	// (0x0006a9ac) cam6_indi_pane_t1

0xc700,	// (0x0007256a) cam6_autofocus_pane_g1

0xc708,	// (0x00072572) cam6_autofocus_pane_g2

0xc710,	// (0x0007257a) cam6_autofocus_pane_g3

0xc718,	// (0x00072582) cam6_autofocus_pane_g4

0x0003,

0xfb72,	// (0x000759dc) cam6_autofocus_pane_g

0x4b68,	// (0x0006a9d2) cam6_timer_pane_g1

0x4b70,	// (0x0006a9da) cam6_timer_pane_t1

0x4b7e,	// (0x0006a9e8) cam6_zoom_cont_pane

0x4b86,	// (0x0006a9f0) cam6_zoom_pane_g1

0x4b8e,	// (0x0006a9f8) cam6_zoom_pane_g2

0xd8f8,	// (0x00073762) cam6_zoom_pane_g3

0x0002,

0xfb7b,	// (0x000759e5) cam6_zoom_pane_g

0x2d96,	// (0x00068c00) cam6_battery_pane_g1

0x2d96,	// (0x00068c00) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x00075556) cam6_battery_pane_g

0x4b96,	// (0x0006aa00) cam6_zoom_cont_pane_g1

0x4b9f,	// (0x0006aa09) cam6_zoom_cont_pane_g2

0x4ba8,	// (0x0006aa12) cam6_zoom_cont_pane_g3

0x0002,

0xfb82,	// (0x000759ec) cam6_zoom_cont_pane_g

0xd915,	// (0x0007377f) cam6_mode_pane_cp_ParamLimits

0xd915,	// (0x0007377f) cam6_mode_pane_cp

0xd8b0,	// (0x0007371a) cam6_zoom_pane_cp_ParamLimits

0xd8b0,	// (0x0007371a) cam6_zoom_pane_cp

0xd929,	// (0x00073793) vid6_image_uncrop_cif_pane_ParamLimits

0xd929,	// (0x00073793) vid6_image_uncrop_cif_pane

0xd955,	// (0x000737bf) vid6_image_uncrop_nhd_pane_ParamLimits

0xd955,	// (0x000737bf) vid6_image_uncrop_nhd_pane

0xd849,	// (0x000736b3) vid6_image_uncrop_vga_pane_ParamLimits

0xd849,	// (0x000736b3) vid6_image_uncrop_vga_pane

0xd972,	// (0x000737dc) vid6_image_uncrop_wvga_pane_ParamLimits

0xd972,	// (0x000737dc) vid6_image_uncrop_wvga_pane

0xd98f,	// (0x000737f9) vid6_indi_pane_ParamLimits

0xd98f,	// (0x000737f9) vid6_indi_pane

0x44ac,	// (0x0006a316) bg_tb_trans_pane_cp09_ParamLimits

0x44ac,	// (0x0006a316) bg_tb_trans_pane_cp09

0x4bc0,	// (0x0006aa2a) cam6_battery_pane_cp_ParamLimits

0x4bc0,	// (0x0006aa2a) cam6_battery_pane_cp

0x4bcc,	// (0x0006aa36) vid6_indi_pane_g1_ParamLimits

0x4bcc,	// (0x0006aa36) vid6_indi_pane_g1

0x4bde,	// (0x0006aa48) vid6_indi_pane_g2_ParamLimits

0x4bde,	// (0x0006aa48) vid6_indi_pane_g2

0x4bf0,	// (0x0006aa5a) vid6_indi_pane_g3_ParamLimits

0x4bf0,	// (0x0006aa5a) vid6_indi_pane_g3

0x4c05,	// (0x0006aa6f) vid6_indi_pane_g4_ParamLimits

0x4c05,	// (0x0006aa6f) vid6_indi_pane_g4

0x4c1a,	// (0x0006aa84) vid6_indi_pane_g5_ParamLimits

0x4c1a,	// (0x0006aa84) vid6_indi_pane_g5

0x0004,

0xfb89,	// (0x000759f3) vid6_indi_pane_g_ParamLimits

0xfb89,	// (0x000759f3) vid6_indi_pane_g

0x4c34,	// (0x0006aa9e) vid6_indi_pane_t1_ParamLimits

0x4c34,	// (0x0006aa9e) vid6_indi_pane_t1

0x4c4a,	// (0x0006aab4) vid6_indi_pane_t2_ParamLimits

0x4c4a,	// (0x0006aab4) vid6_indi_pane_t2

0x4c72,	// (0x0006aadc) vid6_indi_pane_t3_ParamLimits

0x4c72,	// (0x0006aadc) vid6_indi_pane_t3

0x4c9a,	// (0x0006ab04) vid6_indi_pane_t4_ParamLimits

0x4c9a,	// (0x0006ab04) vid6_indi_pane_t4

0x0003,

0xfb94,	// (0x000759fe) vid6_indi_pane_t_ParamLimits

0xfb94,	// (0x000759fe) vid6_indi_pane_t

0x4cbe,	// (0x0006ab28) wait_bar_pane_cp08

0xd9b4,	// (0x0007381e) main_cset_text2_pane_t1_ParamLimits

0xd9b4,	// (0x0007381e) main_cset_text2_pane_t1

0xd900,	// (0x0007376a) listscroll_gen_pane_cp06_t1_ParamLimits

0xd900,	// (0x0007376a) listscroll_gen_pane_cp06_t1

0x7688,	// (0x0006d4f2) main_cam6_set_pane

0x3002,	// (0x00068e6c) bg_tb_trans_pane_cp06_ParamLimits

0xc5b0,	// (0x0007241a) cam4_indicators_pane_g1_ParamLimits

0xc5c1,	// (0x0007242b) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x0007576c) cam4_indicators_pane_g_ParamLimits

0xc5df,	// (0x00072449) cam4_indicators_pane_t1_ParamLimits

0x2890,	// (0x000686fa) bg_tb_trans_pane_cp07_ParamLimits

0xc692,	// (0x000724fc) vid4_indicators_pane_g1_ParamLimits

0xc6a6,	// (0x00072510) vid4_indicators_pane_g2_ParamLimits

0xc6ba,	// (0x00072524) vid4_indicators_pane_g3_ParamLimits

0xc6cb,	// (0x00072535) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x0007577e) vid4_indicators_pane_g_ParamLimits

0xc6e9,	// (0x00072553) vid4_indicators_pane_t1_ParamLimits

0xd4ba,	// (0x00073324) vid4_progress_pane_g1_ParamLimits

0xd4cc,	// (0x00073336) vid4_progress_pane_g2_ParamLimits

0x9efb,	// (0x0006fd65) vid4_progress_pane_g3_ParamLimits

0xd4dc,	// (0x00073346) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x0007592f) vid4_progress_pane_g_ParamLimits

0xd4fa,	// (0x00073364) vid4_progress_pane_t1_ParamLimits

0xd50f,	// (0x00073379) vid4_progress_pane_t2_ParamLimits

0xd525,	// (0x0007338f) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x0007593a) vid4_progress_pane_t_ParamLimits

0xd53a,	// (0x000733a4) wait_bar_pane_cp07_ParamLimits

0xd9e7,	// (0x00073851) main_cam6_set_pane_g2_ParamLimits

0xd9e7,	// (0x00073851) main_cam6_set_pane_g2

0xd9f3,	// (0x0007385d) main_cset6_listscroll_pane_ParamLimits

0xd9f3,	// (0x0007385d) main_cset6_listscroll_pane

0xda1e,	// (0x00073888) main_cset6_slider_pane_ParamLimits

0xda1e,	// (0x00073888) main_cset6_slider_pane

0xda2a,	// (0x00073894) main_cset6_text2_pane_ParamLimits

0xda2a,	// (0x00073894) main_cset6_text2_pane

0x4ccd,	// (0x0006ab37) main_cset6_text_pane

0x4cd5,	// (0x0006ab3f) main_cset_list_pane_copy1_ParamLimits

0x4cd5,	// (0x0006ab3f) main_cset_list_pane_copy1

0x4ce5,	// (0x0006ab4f) scroll_pane_cp028_copy1

0xda3d,	// (0x000738a7) cset_list_set_pane_copy1

0xda50,	// (0x000738ba) aid_position_infowindow_above_copy1

0xda58,	// (0x000738c2) aid_position_infowindow_below_copy1

0xda60,	// (0x000738ca) cset_list_set_pane_g1_copy1

0x6910,	// (0x0006c77a) cset_list_set_pane_g3_copy1_ParamLimits

0x6910,	// (0x0006c77a) cset_list_set_pane_g3_copy1

0x691f,	// (0x0006c789) cset_list_set_pane_t1_copy1_ParamLimits

0x691f,	// (0x0006c789) cset_list_set_pane_t1_copy1

0x2890,	// (0x000686fa) list_highlight_pane_cp021_copy1_ParamLimits

0x2890,	// (0x000686fa) list_highlight_pane_cp021_copy1

0x4cee,	// (0x0006ab58) cset6_slider_pane_ParamLimits

0x4cee,	// (0x0006ab58) cset6_slider_pane

0x4d1a,	// (0x0006ab84) main_cset6_slider_pane_g1_ParamLimits

0x4d1a,	// (0x0006ab84) main_cset6_slider_pane_g1

0xda68,	// (0x000738d2) main_cset6_slider_pane_g2_ParamLimits

0xda68,	// (0x000738d2) main_cset6_slider_pane_g2

0x4d42,	// (0x0006abac) main_cset6_slider_pane_g3_ParamLimits

0x4d42,	// (0x0006abac) main_cset6_slider_pane_g3

0xda90,	// (0x000738fa) main_cset6_slider_pane_g4_ParamLimits

0xda90,	// (0x000738fa) main_cset6_slider_pane_g4

0xda9c,	// (0x00073906) main_cset6_slider_pane_g5_ParamLimits

0xda9c,	// (0x00073906) main_cset6_slider_pane_g5

0x45e9,	// (0x0006a453) main_cset6_slider_pane_g7_ParamLimits

0x45e9,	// (0x0006a453) main_cset6_slider_pane_g7

0x45f5,	// (0x0006a45f) main_cset6_slider_pane_g8_ParamLimits

0x45f5,	// (0x0006a45f) main_cset6_slider_pane_g8

0xdaaa,	// (0x00073914) main_cset6_slider_pane_g9_ParamLimits

0xdaaa,	// (0x00073914) main_cset6_slider_pane_g9

0xdab6,	// (0x00073920) main_cset6_slider_pane_g10_ParamLimits

0xdab6,	// (0x00073920) main_cset6_slider_pane_g10

0xdac2,	// (0x0007392c) main_cset6_slider_pane_g11_ParamLimits

0xdac2,	// (0x0007392c) main_cset6_slider_pane_g11

0xdace,	// (0x00073938) main_cset6_slider_pane_g12_ParamLimits

0xdace,	// (0x00073938) main_cset6_slider_pane_g12

0xdada,	// (0x00073944) main_cset6_slider_pane_g13_ParamLimits

0xdada,	// (0x00073944) main_cset6_slider_pane_g13

0xdae6,	// (0x00073950) main_cset6_slider_pane_g14_ParamLimits

0xdae6,	// (0x00073950) main_cset6_slider_pane_g14

0xdaf2,	// (0x0007395c) main_cset6_slider_pane_g15_ParamLimits

0xdaf2,	// (0x0007395c) main_cset6_slider_pane_g15

0xdb0a,	// (0x00073974) main_cset6_slider_pane_g16_ParamLimits

0xdb0a,	// (0x00073974) main_cset6_slider_pane_g16

0xdb18,	// (0x00073982) main_cset6_slider_pane_g17_ParamLimits

0xdb18,	// (0x00073982) main_cset6_slider_pane_g17

0x0011,

0xfb9d,	// (0x00075a07) main_cset6_slider_pane_g_ParamLimits

0xfb9d,	// (0x00075a07) main_cset6_slider_pane_g

0x4d4e,	// (0x0006abb8) main_cset6_slider_pane_t1_ParamLimits

0x4d4e,	// (0x0006abb8) main_cset6_slider_pane_t1

0xdb3e,	// (0x000739a8) main_cset6_slider_pane_t2_ParamLimits

0xdb3e,	// (0x000739a8) main_cset6_slider_pane_t2

0xdb69,	// (0x000739d3) main_cset6_slider_pane_t3_ParamLimits

0xdb69,	// (0x000739d3) main_cset6_slider_pane_t3

0xdb94,	// (0x000739fe) main_cset6_slider_pane_t4_ParamLimits

0xdb94,	// (0x000739fe) main_cset6_slider_pane_t4

0xdbbf,	// (0x00073a29) main_cset6_slider_pane_t5_ParamLimits

0xdbbf,	// (0x00073a29) main_cset6_slider_pane_t5

0x4d8f,	// (0x0006abf9) main_cset6_slider_pane_t7_ParamLimits

0x4d8f,	// (0x0006abf9) main_cset6_slider_pane_t7

0xdbec,	// (0x00073a56) main_cset6_slider_pane_t8_ParamLimits

0xdbec,	// (0x00073a56) main_cset6_slider_pane_t8

0xdc10,	// (0x00073a7a) main_cset6_slider_pane_t9_ParamLimits

0xdc10,	// (0x00073a7a) main_cset6_slider_pane_t9

0xdc34,	// (0x00073a9e) main_cset6_slider_pane_t10_ParamLimits

0xdc34,	// (0x00073a9e) main_cset6_slider_pane_t10

0xdc58,	// (0x00073ac2) main_cset6_slider_pane_t11_ParamLimits

0xdc58,	// (0x00073ac2) main_cset6_slider_pane_t11

0x4dc5,	// (0x0006ac2f) main_cset6_slider_pane_t14_ParamLimits

0x4dc5,	// (0x0006ac2f) main_cset6_slider_pane_t14

0x4dfe,	// (0x0006ac68) main_cset6_slider_pane_t15_ParamLimits

0x4dfe,	// (0x0006ac68) main_cset6_slider_pane_t15

0x000b,

0xfbc2,	// (0x00075a2c) main_cset6_slider_pane_t_ParamLimits

0xfbc2,	// (0x00075a2c) main_cset6_slider_pane_t

0x4e37,	// (0x0006aca1) cset_slider_pane_g1_copy1

0x4e40,	// (0x0006acaa) cset_slider_pane_g2_copy1

0x4e49,	// (0x0006acb3) cset_slider_pane_g3_copy1

0x7688,	// (0x0006d4f2) bg_popup_sub_pane_cp011_copy1

0x4e52,	// (0x0006acbc) main_cset_text_pane_g1_copy1

0x472f,	// (0x0006a599) main_cset_text_pane_t1_copy1

0x473d,	// (0x0006a5a7) main_cset_text_pane_t2_copy1

0x474b,	// (0x0006a5b5) main_cset_text_pane_t3_copy1

0x4759,	// (0x0006a5c3) main_cset_text_pane_t4_copy1

0x4767,	// (0x0006a5d1) main_cset_text_pane_t5_copy1

0x4e5a,	// (0x0006acc4) main_cset_text_pane_t6_copy1

0x4e68,	// (0x0006acd2) main_cset_text_pane_t7_copy1

0xdc7c,	// (0x00073ae6) main_cset_text2_pane_t1_copy1

0x2890,	// (0x000686fa) main_ncimui_pane

0xa67c,	// (0x000704e6) popup_query_ncimui_window_ParamLimits

0xa67c,	// (0x000704e6) popup_query_ncimui_window

0xb200,	// (0x0007106a) field_cale_ev2_pane_g4_ParamLimits

0xb200,	// (0x0007106a) field_cale_ev2_pane_g4

0xbf47,	// (0x00071db1) cell_video_dialer_keypad_pane_g2_ParamLimits

0xbf47,	// (0x00071db1) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x0007570a) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x0007570a) cell_video_dialer_keypad_pane_g

0xbf5f,	// (0x00071dc9) cell_video_dialer_keypad_pane_t1

0x7688,	// (0x0006d4f2) bg_popup_window_pane_cp012

0x11d4,	// (0x0006703e) heading_pane_cp06

0x4ea0,	// (0x0006ad0a) ncim_query_content_pane

0x7688,	// (0x0006d4f2) bg_popup_heading_pane_cp01

0x4ea8,	// (0x0006ad12) ncim_heading_pane_t1

0x4eb6,	// (0x0006ad20) ncim_indicator_popup_pane

0x4ec8,	// (0x0006ad32) ncim_query_button_pane

0x4edc,	// (0x0006ad46) ncim_query_content_pane_t1

0x4eee,	// (0x0006ad58) ncim_query_content_pane_t2

0x0005,

0xfc06,	// (0x00075a70) ncim_query_content_pane_t

0x4f28,	// (0x0006ad92) ncim_query_list_pane

0x4f3a,	// (0x0006ada4) ncim_query_popup_pane

0x4eb6,	// (0x0006ad20) ncim_indicator_popup_pane_ParamLimits

0xddcf,	// (0x00073c39) ncim_query_content_pane_g1_ParamLimits

0xddcf,	// (0x00073c39) ncim_query_content_pane_g1

0x4edc,	// (0x0006ad46) ncim_query_content_pane_t1_ParamLimits

0x4eee,	// (0x0006ad58) ncim_query_content_pane_t2_ParamLimits

0xdddb,	// (0x00073c45) ncim_query_content_pane_t3_ParamLimits

0xdddb,	// (0x00073c45) ncim_query_content_pane_t3

0xddf8,	// (0x00073c62) ncim_query_content_pane_t4_ParamLimits

0xddf8,	// (0x00073c62) ncim_query_content_pane_t4

0xde15,	// (0x00073c7f) ncim_query_content_pane_t5_ParamLimits

0xde15,	// (0x00073c7f) ncim_query_content_pane_t5

0x4f00,	// (0x0006ad6a) ncim_query_content_pane_t6_ParamLimits

0x4f00,	// (0x0006ad6a) ncim_query_content_pane_t6

0xfc06,	// (0x00075a70) ncim_query_content_pane_t_ParamLimits

0x4f28,	// (0x0006ad92) ncim_query_list_pane_ParamLimits

0x4f3a,	// (0x0006ada4) ncim_query_popup_pane_ParamLimits

0x4f4e,	// (0x0006adb8) wait_bar_pane_cp04

0x7688,	// (0x0006d4f2) input_focus_pane_cp011

0x4f56,	// (0x0006adc0) ncim_query_popup_pane_t1

0x4f64,	// (0x0006adce) ncim_list_query_list_pane_ParamLimits

0x4f64,	// (0x0006adce) ncim_list_query_list_pane

0x7688,	// (0x0006d4f2) bg_button_pane_cp027

0x4f71,	// (0x0006addb) ncim_query_button_pane_g1

0x7688,	// (0x0006d4f2) list_highlight_pane_cp012

0x4f7b,	// (0x0006ade5) ncim_list_query_list_pane_g1

0x4f83,	// (0x0006aded) ncim_list_query_list_pane_t1

0xc5d0,	// (0x0007243a) cam4_indicators_pane_g3_ParamLimits

0xc5d0,	// (0x0007243a) cam4_indicators_pane_g3

0xc6d7,	// (0x00072541) vid4_indicators_pane_g5_ParamLimits

0xc6d7,	// (0x00072541) vid4_indicators_pane_g5

0xd4eb,	// (0x00073355) vid4_progress_pane_g5_ParamLimits

0xd4eb,	// (0x00073355) vid4_progress_pane_g5

0xdcbb,	// (0x00073b25) main_ncimui_pane_g1

0xdd23,	// (0x00073b8d) ncimui_group_query_pane_ParamLimits

0xdd23,	// (0x00073b8d) ncimui_group_query_pane

0xdd6b,	// (0x00073bd5) ncimui_list_pane_ParamLimits

0xdd6b,	// (0x00073bd5) ncimui_list_pane

0xdd92,	// (0x00073bfc) ncimui_text_pane_ParamLimits

0xdd92,	// (0x00073bfc) ncimui_text_pane

0xde32,	// (0x00073c9c) ncimui_text_pane_t1_ParamLimits

0xde32,	// (0x00073c9c) ncimui_text_pane_t1

0x4f91,	// (0x0006adfb) ncimui_list_single_graphic_pane_ParamLimits

0x4f91,	// (0x0006adfb) ncimui_list_single_graphic_pane

0xde51,	// (0x00073cbb) ncimui_query_pane_ParamLimits

0xde51,	// (0x00073cbb) ncimui_query_pane

0x7688,	// (0x0006d4f2) list_highlight_pane_cp013

0x4fa1,	// (0x0006ae0b) ncim_list_query_list_pane_t1_copy1

0x4f7b,	// (0x0006ade5) ncim_list_single_graphic_pane_g1

0x4faf,	// (0x0006ae19) ncim_query_button_pane_cp01

0x4fbb,	// (0x0006ae25) ncim_query_entry_pane_ParamLimits

0x4fbb,	// (0x0006ae25) ncim_query_entry_pane

0x4fce,	// (0x0006ae38) ncimui_query_pane_g1

0x4fda,	// (0x0006ae44) ncimui_query_pane_t1_ParamLimits

0x4fda,	// (0x0006ae44) ncimui_query_pane_t1

0x2890,	// (0x000686fa) input_focus_pane_cp012

0x4ff3,	// (0x0006ae5d) ncim_query_entry_pane_t1

0x0846,	// (0x000666b0) main_im_pane_ParamLimits

0x2890,	// (0x000686fa) main_mobtv_pane_ParamLimits

0x2890,	// (0x000686fa) main_mobtv_pane

0xdb26,	// (0x00073990) main_cset6_slider_pane_g18_ParamLimits

0xdb26,	// (0x00073990) main_cset6_slider_pane_g18

0xdb32,	// (0x0007399c) main_cset6_slider_pane_g19_ParamLimits

0xdb32,	// (0x0007399c) main_cset6_slider_pane_g19

0x4387,	// (0x0006a1f1) bg_main_mobtv_pane_ParamLimits

0x4387,	// (0x0006a1f1) bg_main_mobtv_pane

0xde64,	// (0x00073cce) main_mobtv_info_pane

0xde6f,	// (0x00073cd9) main_mobtv_loading_pane_ParamLimits

0xde6f,	// (0x00073cd9) main_mobtv_loading_pane

0x5005,	// (0x0006ae6f) main_mobtv_pg_channel_list_pane

0x500f,	// (0x0006ae79) main_mobtv_pg_hdr_pane

0xde7c,	// (0x00073ce6) main_mobtv_programe_curr_pane_ParamLimits

0xde7c,	// (0x00073ce6) main_mobtv_programe_curr_pane

0xde89,	// (0x00073cf3) main_mobtv_programe_next_pane_ParamLimits

0xde89,	// (0x00073cf3) main_mobtv_programe_next_pane

0x5018,	// (0x0006ae82) popup_mobtv_noti_window

0x2d96,	// (0x00068c00) main_tv_pg_hdr_pane_g1

0x5020,	// (0x0006ae8a) main_tv_pg_hdr_pane_g2

0x5028,	// (0x0006ae92) main_tv_pg_hdr_pane_g3

0x5030,	// (0x0006ae9a) main_tv_pg_hdr_pane_g4

0x5038,	// (0x0006aea2) main_tv_pg_hdr_pane_g5

0x5042,	// (0x0006aeac) main_tv_pg_hdr_pane_g6

0x504c,	// (0x0006aeb6) main_tv_pg_hdr_pane_g7

0x5056,	// (0x0006aec0) main_tv_pg_hdr_pane_g8

0x5060,	// (0x0006aeca) main_tv_pg_hdr_pane_g9

0x506a,	// (0x0006aed4) main_tv_pg_hdr_pane_g10

0x5074,	// (0x0006aede) main_tv_pg_hdr_pane_g11

0x000a,

0xfc13,	// (0x00075a7d) main_tv_pg_hdr_pane_g

0x507e,	// (0x0006aee8) main_tv_pg_hdr_pane_t1

0x508c,	// (0x0006aef6) main_tv_pg_hdr_pane_t2

0x509a,	// (0x0006af04) main_tv_pg_hdr_pane_t3

0x50aa,	// (0x0006af14) main_tv_pg_hdr_pane_t4

0x50ba,	// (0x0006af24) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2a,	// (0x00075a94) main_tv_pg_hdr_pane_t

0x50ca,	// (0x0006af34) single_mobtv_pg_channel_pane_ParamLimits

0x50ca,	// (0x0006af34) single_mobtv_pg_channel_pane

0x50dc,	// (0x0006af46) single_mobtv_pg_channel_table_pane

0x50e5,	// (0x0006af4f) single_mobtv_pg_channel_thumb_pane

0x50ee,	// (0x0006af58) single_tv_pg_channel_pane_g1

0x50f7,	// (0x0006af61) single_tv_pg_channel_pane_g2

0x0001,

0xfc35,	// (0x00075a9f) single_tv_pg_channel_pane_g

0x3002,	// (0x00068e6c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x3002,	// (0x00068e6c) bg_single_mobtv_pg_channel_thumb_pane

0x5100,	// (0x0006af6a) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x5100,	// (0x0006af6a) single_mobtv_pg_channel_thumb_pane_g1

0x510e,	// (0x0006af78) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x510e,	// (0x0006af78) single_mobtv_pg_channel_thumb_pane_g2

0x511a,	// (0x0006af84) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x511a,	// (0x0006af84) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3a,	// (0x00075aa4) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3a,	// (0x00075aa4) single_mobtv_pg_channel_thumb_pane_g

0x5126,	// (0x0006af90) single_mobtv_pg_channel_thumb_pane_t1

0x5134,	// (0x0006af9e) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc41,	// (0x00075aab) single_mobtv_pg_channel_thumb_pane_t

0x2d96,	// (0x00068c00) bg_single_mobtv_pg_channel_table_pane_g1

0x2d96,	// (0x00068c00) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x00075556) bg_single_mobtv_pg_channel_table_pane_g

0x5142,	// (0x0006afac) single_mobtv_pg_channel_table_pane_t1

0x5150,	// (0x0006afba) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc46,	// (0x00075ab0) single_mobtv_pg_channel_table_pane_t

0xde9e,	// (0x00073d08) main_mobtv_info_pane_g1_ParamLimits

0xde9e,	// (0x00073d08) main_mobtv_info_pane_g1

0xdeba,	// (0x00073d24) main_mobtv_info_pane_t1_ParamLimits

0xdeba,	// (0x00073d24) main_mobtv_info_pane_t1

0xdf32,	// (0x00073d9c) main_mobtv_info_pane_t2_ParamLimits

0xdf32,	// (0x00073d9c) main_mobtv_info_pane_t2

0x0002,

0xfc50,	// (0x00075aba) main_mobtv_info_pane_t_ParamLimits

0xfc50,	// (0x00075aba) main_mobtv_info_pane_t

0xdfc1,	// (0x00073e2b) wait_bar_pane_cp05

0xdfd3,	// (0x00073e3d) main_mobtv_loading_pane_g1_ParamLimits

0xdfd3,	// (0x00073e3d) main_mobtv_loading_pane_g1

0xdfe1,	// (0x00073e4b) main_mobtv_loading_pane_g2_ParamLimits

0xdfe1,	// (0x00073e4b) main_mobtv_loading_pane_g2

0xdfed,	// (0x00073e57) main_mobtv_loading_pane_g3_ParamLimits

0xdfed,	// (0x00073e57) main_mobtv_loading_pane_g3

0x0002,

0xfc57,	// (0x00075ac1) main_mobtv_loading_pane_g_ParamLimits

0xfc57,	// (0x00075ac1) main_mobtv_loading_pane_g

0x515e,	// (0x0006afc8) main_mobtv_loading_pane_t1_ParamLimits

0x515e,	// (0x0006afc8) main_mobtv_loading_pane_t1

0x5176,	// (0x0006afe0) main_mobtv_loading_pane_t2_ParamLimits

0x5176,	// (0x0006afe0) main_mobtv_loading_pane_t2

0x0001,

0xfc5e,	// (0x00075ac8) main_mobtv_loading_pane_t_ParamLimits

0xfc5e,	// (0x00075ac8) main_mobtv_loading_pane_t

0xdffb,	// (0x00073e65) wait_bar_pane_cp06_ParamLimits

0xdffb,	// (0x00073e65) wait_bar_pane_cp06

0x519a,	// (0x0006b004) main_mobtv_programe_curr_pane_t1

0x51a8,	// (0x0006b012) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc63,	// (0x00075acd) main_mobtv_programe_curr_pane_t

0x51b6,	// (0x0006b020) main_mobtv_programe_next_pane_t1

0x51c4,	// (0x0006b02e) main_mobtv_programe_next_pane_t2

0x51d2,	// (0x0006b03c) main_mobtv_programe_next_pane_t3

0x0002,

0xfc68,	// (0x00075ad2) main_mobtv_programe_next_pane_t

0x7688,	// (0x0006d4f2) bg_popup_mobtv_noti_window_pane

0x51e0,	// (0x0006b04a) popup_mobtv_noti_window_g1

0x51e8,	// (0x0006b052) popup_mobtv_noti_window_t1

0x51f6,	// (0x0006b060) popup_mobtv_noti_window_t2

0x0001,

0xfc6f,	// (0x00075ad9) popup_mobtv_noti_window_t

0x2d96,	// (0x00068c00) bg_popup_mobtv_noti_window_pane_g1

0x7688,	// (0x0006d4f2) sc_clock_pane

0x7688,	// (0x0006d4f2) main_fs_bigclock_pane

0xd6da,	// (0x00073544) blid2_tripm_pane_t4_ParamLimits

0xd6da,	// (0x00073544) blid2_tripm_pane_t4

0xe007,	// (0x00073e71) sc_clock_pane_g1_ParamLimits

0xe007,	// (0x00073e71) sc_clock_pane_g1

0xe015,	// (0x00073e7f) sc_clock_pane_t1_ParamLimits

0xe015,	// (0x00073e7f) sc_clock_pane_t1

0xe028,	// (0x00073e92) sc_clock_pane_t2_ParamLimits

0xe028,	// (0x00073e92) sc_clock_pane_t2

0xe03a,	// (0x00073ea4) sc_clock_pane_t3_ParamLimits

0xe03a,	// (0x00073ea4) sc_clock_pane_t3

0x0004,

0xfc74,	// (0x00075ade) sc_clock_pane_t_ParamLimits

0xfc74,	// (0x00075ade) sc_clock_pane_t

0xe84d,	// (0x000746b7) main_fs_bigclock_indicator_pane_ParamLimits

0xe84d,	// (0x000746b7) main_fs_bigclock_indicator_pane

0xe0c7,	// (0x00073f31) main_fs_bigclock_pane_g1_ParamLimits

0xe0c7,	// (0x00073f31) main_fs_bigclock_pane_g1

0xe859,	// (0x000746c3) main_fs_bigclock_pane_t1_ParamLimits

0xe859,	// (0x000746c3) main_fs_bigclock_pane_t1

0xe86b,	// (0x000746d5) main_fs_bigclock_pane_t2_ParamLimits

0xe86b,	// (0x000746d5) main_fs_bigclock_pane_t2

0xe87f,	// (0x000746e9) main_fs_bigclock_pane_t3_ParamLimits

0xe87f,	// (0x000746e9) main_fs_bigclock_pane_t3

0x0002,

0xfe78,	// (0x00075ce2) main_fs_bigclock_pane_t_ParamLimits

0xfe78,	// (0x00075ce2) main_fs_bigclock_pane_t

0x3b11,	// (0x0006997b) main_fs_bigclock_indicator_pane_g1

0x4ed0,	// (0x0006ad3a) ncim_query_content_pane_g2_ParamLimits

0x4ed0,	// (0x0006ad3a) ncim_query_content_pane_g2

0x0001,

0xfc01,	// (0x00075a6b) ncim_query_content_pane_g_ParamLimits

0xfc01,	// (0x00075a6b) ncim_query_content_pane_g

0xe04e,	// (0x00073eb8) sc_clock_pane_t4_ParamLimits

0xe04e,	// (0x00073eb8) sc_clock_pane_t4

0x2890,	// (0x000686fa) main_radioblah_pane

0x374f,	// (0x000695b9) cell_call4_button_pane_t1_copy1_ParamLimits

0x374f,	// (0x000695b9) cell_call4_button_pane_t1_copy1

0xdcd5,	// (0x00073b3f) main_ncimui_pane_t1_ParamLimits

0xdcd5,	// (0x00073b3f) main_ncimui_pane_t1

0xdcef,	// (0x00073b59) main_ncimui_pane_t2_ParamLimits

0xdcef,	// (0x00073b59) main_ncimui_pane_t2

0x0002,

0xfbfa,	// (0x00075a64) main_ncimui_pane_t_ParamLimits

0xfbfa,	// (0x00075a64) main_ncimui_pane_t

0x533c,	// (0x0006b1a6) main_radioblah_anim_pane_ParamLimits

0x533c,	// (0x0006b1a6) main_radioblah_anim_pane

0x534d,	// (0x0006b1b7) main_radioblah_info_pane_ParamLimits

0x534d,	// (0x0006b1b7) main_radioblah_info_pane

0x5361,	// (0x0006b1cb) main_radioblah_pane_t1_ParamLimits

0x5361,	// (0x0006b1cb) main_radioblah_pane_t1

0x537d,	// (0x0006b1e7) main_radioblah_pane_t2_ParamLimits

0x537d,	// (0x0006b1e7) main_radioblah_pane_t2

0x0003,

0xfc95,	// (0x00075aff) main_radioblah_pane_t_ParamLimits

0xfc95,	// (0x00075aff) main_radioblah_pane_t

0xe119,	// (0x00073f83) main_radioblah_rocker_ctrl_pane_ParamLimits

0xe119,	// (0x00073f83) main_radioblah_rocker_ctrl_pane

0x53c5,	// (0x0006b22f) main_radioblah_info_pane_t1_ParamLimits

0x53c5,	// (0x0006b22f) main_radioblah_info_pane_t1

0xe15e,	// (0x00073fc8) main_radioblah_info_pane_t2_ParamLimits

0xe15e,	// (0x00073fc8) main_radioblah_info_pane_t2

0x0003,

0xfc9e,	// (0x00075b08) main_radioblah_info_pane_t_ParamLimits

0xfc9e,	// (0x00075b08) main_radioblah_info_pane_t

0x2d96,	// (0x00068c00) main_radioblah_rocker_ctrl_pane_g1

0xe20e,	// (0x00074078) main_radioblah_rocker_ctrl_pane_g2

0xe216,	// (0x00074080) main_radioblah_rocker_ctrl_pane_g3

0xe21e,	// (0x00074088) main_radioblah_rocker_ctrl_pane_g4

0xe226,	// (0x00074090) main_radioblah_rocker_ctrl_pane_g5

0xe22e,	// (0x00074098) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca7,	// (0x00075b11) main_radioblah_rocker_ctrl_pane_g

0xdc7c,	// (0x00073ae6) main_cset_text2_pane_t1_copy1_ParamLimits

0xc4fe,	// (0x00072368) cam4_image_uncrop_qvga_pane

0xc645,	// (0x000724af) vid4_image_uncrop_qcif_pane

0xd868,	// (0x000736d2) cam6_image_uncrop_qvga_pane_ParamLimits

0xd868,	// (0x000736d2) cam6_image_uncrop_qvga_pane

0x4bb0,	// (0x0006aa1a) vid6_image_uncrop_qcif_pane_ParamLimits

0x4bb0,	// (0x0006aa1a) vid6_image_uncrop_qcif_pane

0x7688,	// (0x0006d4f2) bg_popup_preview_window_pane_cp03

0x4e76,	// (0x0006ace0) list_cset_text2_pane

0x4e8a,	// (0x0006acf4) main_cset6_text2_pane_g1

0x4e92,	// (0x0006acfc) main_cset6_text2_pane_t1

0xe236,	// (0x000740a0) list_cset_text2_pane_t1_ParamLimits

0xe236,	// (0x000740a0) list_cset_text2_pane_t1

0x2890,	// (0x000686fa) main_radioblah_pane_ParamLimits

0xdfad,	// (0x00073e17) main_mobtv_info_pane_t3_ParamLimits

0xdfad,	// (0x00073e17) main_mobtv_info_pane_t3

0xe107,	// (0x00073f71) main_radioblah_pane_g1

0xe132,	// (0x00073f9c) main_radioblah_info_pane_g1

0xe1b3,	// (0x0007401d) main_radioblah_info_pane_t3_ParamLimits

0xe1b3,	// (0x0007401d) main_radioblah_info_pane_t3

0x93ff,	// (0x0006f269) highlight_cell_cale_month_pane_ParamLimits

0x93ff,	// (0x0006f269) highlight_cell_cale_month_pane

0x7688,	// (0x0006d4f2) main_phob_fisheye_pane

0x30ea,	// (0x00068f54) scroll_pane_cp0031_ParamLimits

0x30ea,	// (0x00068f54) scroll_pane_cp0031

0x4cbe,	// (0x0006ab28) wait_bar_pane_cp08_ParamLimits

0xda3d,	// (0x000738a7) cset_list_set_pane_copy1_ParamLimits

0x53ff,	// (0x0006b269) highlight_cell_cale_month_pane_g1

0xe253,	// (0x000740bd) highlight_cell_cale_month_pane_t1

0x494f,	// (0x0006a7b9) list_gen_pane_cp01

0x45d4,	// (0x0006a43e) scroll_pane_01

0x6cad,	// (0x0006cb17) list_single_double_fisheye_pane

0x6cb6,	// (0x0006cb20) list_double_fisheye_pane_g1_ParamLimits

0x6cb6,	// (0x0006cb20) list_double_fisheye_pane_g1

0x6cc2,	// (0x0006cb2c) list_double_fisheye_pane_g2_ParamLimits

0x6cc2,	// (0x0006cb2c) list_double_fisheye_pane_g2

0x6cd6,	// (0x0006cb40) list_double_fisheye_pane_g3_ParamLimits

0x6cd6,	// (0x0006cb40) list_double_fisheye_pane_g3

0x0004,

0xfcb4,	// (0x00075b1e) list_double_fisheye_pane_g_ParamLimits

0xfcb4,	// (0x00075b1e) list_double_fisheye_pane_g

0x6cff,	// (0x0006cb69) list_double_fisheye_pane_t1_ParamLimits

0x6cff,	// (0x0006cb69) list_double_fisheye_pane_t1

0x6d1a,	// (0x0006cb84) list_double_fisheye_pane_t2_ParamLimits

0x6d1a,	// (0x0006cb84) list_double_fisheye_pane_t2

0x0001,

0xfcbf,	// (0x00075b29) list_double_fisheye_pane_t_ParamLimits

0xfcbf,	// (0x00075b29) list_double_fisheye_pane_t

0x7688,	// (0x0006d4f2) main_call5_pane

0xe074,	// (0x00073ede) sc_swipe_pane_ParamLimits

0xe074,	// (0x00073ede) sc_swipe_pane

0xe26d,	// (0x000740d7) call5_image_pane_ParamLimits

0xe26d,	// (0x000740d7) call5_image_pane

0xe27d,	// (0x000740e7) call5_swipe_1_pane_ParamLimits

0xe27d,	// (0x000740e7) call5_swipe_1_pane

0xe289,	// (0x000740f3) call5_swipe_2_pane_ParamLimits

0xe289,	// (0x000740f3) call5_swipe_2_pane

0xe2a3,	// (0x0007410d) popup_call5_audio_first_window_ParamLimits

0xe2a3,	// (0x0007410d) popup_call5_audio_first_window

0x3002,	// (0x00068e6c) call5_swipe_1_pane_g1_ParamLimits

0x3002,	// (0x00068e6c) call5_swipe_1_pane_g1

0x5407,	// (0x0006b271) call5_swipe_1_pane_g2_ParamLimits

0x5407,	// (0x0006b271) call5_swipe_1_pane_g2

0x0001,

0xfcc4,	// (0x00075b2e) call5_swipe_1_pane_g_ParamLimits

0xfcc4,	// (0x00075b2e) call5_swipe_1_pane_g

0x5413,	// (0x0006b27d) call5_swipe_1_pane_t1_ParamLimits

0x5413,	// (0x0006b27d) call5_swipe_1_pane_t1

0x3002,	// (0x00068e6c) call5_swipe_2_pane_g1_ParamLimits

0x3002,	// (0x00068e6c) call5_swipe_2_pane_g1

0x5428,	// (0x0006b292) call5_swipe_2_pane_g2_ParamLimits

0x5428,	// (0x0006b292) call5_swipe_2_pane_g2

0x0001,

0xfcc9,	// (0x00075b33) call5_swipe_2_pane_g_ParamLimits

0xfcc9,	// (0x00075b33) call5_swipe_2_pane_g

0x5434,	// (0x0006b29e) call5_swipe_2_pane_t1_ParamLimits

0x5434,	// (0x0006b29e) call5_swipe_2_pane_t1

0x5449,	// (0x0006b2b3) sc_swipe_pane_g1_ParamLimits

0x5449,	// (0x0006b2b3) sc_swipe_pane_g1

0x5456,	// (0x0006b2c0) sc_swipe_pane_g2_ParamLimits

0x5456,	// (0x0006b2c0) sc_swipe_pane_g2

0x0001,

0xfcce,	// (0x00075b38) sc_swipe_pane_g_ParamLimits

0xfcce,	// (0x00075b38) sc_swipe_pane_g

0x5462,	// (0x0006b2cc) sc_swipe_pane_t1_ParamLimits

0x5462,	// (0x0006b2cc) sc_swipe_pane_t1

0x7688,	// (0x0006d4f2) main_cmail_launcher_pane

0xe2b1,	// (0x0007411b) aid_size_cell_cmail_l_ParamLimits

0xe2b1,	// (0x0007411b) aid_size_cell_cmail_l

0xe2c1,	// (0x0007412b) grid_cmail_l_pane_ParamLimits

0xe2c1,	// (0x0007412b) grid_cmail_l_pane

0xe2d1,	// (0x0007413b) cell_cmail_l_pane_ParamLimits

0xe2d1,	// (0x0007413b) cell_cmail_l_pane

0xe2e5,	// (0x0007414f) cell_cmail_l_pane_g1_ParamLimits

0xe2e5,	// (0x0007414f) cell_cmail_l_pane_g1

0xe2f1,	// (0x0007415b) cell_cmail_l_pane_t1_ParamLimits

0xe2f1,	// (0x0007415b) cell_cmail_l_pane_t1

0x5477,	// (0x0006b2e1) cell_cmail_l_pane_t2_ParamLimits

0x5477,	// (0x0006b2e1) cell_cmail_l_pane_t2

0x0001,

0xfcd3,	// (0x00075b3d) cell_cmail_l_pane_t_ParamLimits

0xfcd3,	// (0x00075b3d) cell_cmail_l_pane_t

0x2890,	// (0x000686fa) grid_highlight_pane_cp018_ParamLimits

0x2890,	// (0x000686fa) grid_highlight_pane_cp018

0x77b3,	// (0x0006d61d) main2_pane_ParamLimits

0x77b3,	// (0x0006d61d) main2_pane

0x0903,	// (0x0006676d) popup_sp_fs_action_menu_bg_pane_g1

0x090b,	// (0x00066775) popup_sp_fs_action_menu_bg_pane_g2

0x0913,	// (0x0006677d) popup_sp_fs_action_menu_bg_pane_g3

0x091b,	// (0x00066785) popup_sp_fs_action_menu_bg_pane_g4

0x0923,	// (0x0006678d) popup_sp_fs_action_menu_bg_pane_g5

0x092b,	// (0x00066795) popup_sp_fs_action_menu_bg_pane_g6

0x0933,	// (0x0006679d) popup_sp_fs_action_menu_bg_pane_g7

0x093b,	// (0x000667a5) popup_sp_fs_action_menu_bg_pane_g8

0x0943,	// (0x000667ad) popup_sp_fs_action_menu_bg_pane_g9

0x094b,	// (0x000667b5) popup_sp_fs_action_menu_bg_pane_g10

0x094b,	// (0x000667b5) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x00075002) popup_sp_fs_action_menu_bg_pane_g

0x64ee,	// (0x0006c358) list_medium_line_x2_t3_g3_g1_ParamLimits

0x64ee,	// (0x0006c358) list_medium_line_x2_t3_g3_g1

0x64fa,	// (0x0006c364) list_medium_line_x2_t3_g3_g2_ParamLimits

0x64fa,	// (0x0006c364) list_medium_line_x2_t3_g3_g2

0x6506,	// (0x0006c370) list_medium_line_x2_t3_g3_g3_ParamLimits

0x6506,	// (0x0006c370) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x000750b2) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x000750b2) list_medium_line_x2_t3_g3_g

0x6512,	// (0x0006c37c) list_medium_line_x2_t3_g3_t1_ParamLimits

0x6512,	// (0x0006c37c) list_medium_line_x2_t3_g3_t1

0x6527,	// (0x0006c391) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6527,	// (0x0006c391) list_medium_line_x2_t3_g3_t2

0x6539,	// (0x0006c3a3) list_medium_line_x2_t3_g3_t3_ParamLimits

0x6539,	// (0x0006c3a3) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x000750b9) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x000750b9) list_medium_line_x2_t3_g3_t

0x64ee,	// (0x0006c358) list_medium_line_x2_t3_g2_g1_ParamLimits

0x64ee,	// (0x0006c358) list_medium_line_x2_t3_g2_g1

0x6506,	// (0x0006c370) list_medium_line_x2_t3_g2_g2_ParamLimits

0x6506,	// (0x0006c370) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x000750c0) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x000750c0) list_medium_line_x2_t3_g2_g

0x654e,	// (0x0006c3b8) list_medium_line_x2_t3_g2_t1_ParamLimits

0x654e,	// (0x0006c3b8) list_medium_line_x2_t3_g2_t1

0x6564,	// (0x0006c3ce) list_medium_line_x2_t3_g2_t2_ParamLimits

0x6564,	// (0x0006c3ce) list_medium_line_x2_t3_g2_t2

0x6576,	// (0x0006c3e0) list_medium_line_x2_t3_g2_t3_ParamLimits

0x6576,	// (0x0006c3e0) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x000750c5) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x000750c5) list_medium_line_x2_t3_g2_t

0x64ee,	// (0x0006c358) list_medium_line_x2_t4_g4_g1_ParamLimits

0x64ee,	// (0x0006c358) list_medium_line_x2_t4_g4_g1

0x6593,	// (0x0006c3fd) list_medium_line_x2_t4_g4_g2_ParamLimits

0x6593,	// (0x0006c3fd) list_medium_line_x2_t4_g4_g2

0x64fa,	// (0x0006c364) list_medium_line_x2_t4_g4_g3_ParamLimits

0x64fa,	// (0x0006c364) list_medium_line_x2_t4_g4_g3

0x659f,	// (0x0006c409) list_medium_line_x2_t4_g4_g4_ParamLimits

0x659f,	// (0x0006c409) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x000750cc) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x000750cc) list_medium_line_x2_t4_g4_g

0x65ab,	// (0x0006c415) list_medium_line_x2_t4_g4_t1_ParamLimits

0x65ab,	// (0x0006c415) list_medium_line_x2_t4_g4_t1

0x65c5,	// (0x0006c42f) list_medium_line_x2_t4_g4_t2_ParamLimits

0x65c5,	// (0x0006c42f) list_medium_line_x2_t4_g4_t2

0x65db,	// (0x0006c445) list_medium_line_x2_t4_g4_t3_ParamLimits

0x65db,	// (0x0006c445) list_medium_line_x2_t4_g4_t3

0x65f0,	// (0x0006c45a) list_medium_line_x2_t4_g4_t4_ParamLimits

0x65f0,	// (0x0006c45a) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x000750d5) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x000750d5) list_medium_line_x2_t4_g4_t

0x64ee,	// (0x0006c358) list_medium_line_x2_t2_g4_g1_ParamLimits

0x64ee,	// (0x0006c358) list_medium_line_x2_t2_g4_g1

0x6593,	// (0x0006c3fd) list_medium_line_x2_t2_g4_g2_ParamLimits

0x6593,	// (0x0006c3fd) list_medium_line_x2_t2_g4_g2

0x64fa,	// (0x0006c364) list_medium_line_x2_t2_g4_g3_ParamLimits

0x64fa,	// (0x0006c364) list_medium_line_x2_t2_g4_g3

0x6506,	// (0x0006c370) list_medium_line_x2_t2_g4_g4_ParamLimits

0x6506,	// (0x0006c370) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x0007513c) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x0007513c) list_medium_line_x2_t2_g4_g

0x6602,	// (0x0006c46c) list_medium_line_x2_t2_g4_t1_ParamLimits

0x6602,	// (0x0006c46c) list_medium_line_x2_t2_g4_t1

0x6539,	// (0x0006c3a3) list_medium_line_x2_t2_g4_t2_ParamLimits

0x6539,	// (0x0006c3a3) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x00075145) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x00075145) list_medium_line_x2_t2_g4_t

0x64ee,	// (0x0006c358) list_medium_line_x2_t2_g3_g1_ParamLimits

0x64ee,	// (0x0006c358) list_medium_line_x2_t2_g3_g1

0x64fa,	// (0x0006c364) list_medium_line_x2_t2_g3_g2_ParamLimits

0x64fa,	// (0x0006c364) list_medium_line_x2_t2_g3_g2

0x6506,	// (0x0006c370) list_medium_line_x2_t2_g3_g3_ParamLimits

0x6506,	// (0x0006c370) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x000750b2) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x000750b2) list_medium_line_x2_t2_g3_g

0x6617,	// (0x0006c481) list_medium_line_x2_t2_g3_t1_ParamLimits

0x6617,	// (0x0006c481) list_medium_line_x2_t2_g3_t1

0x6539,	// (0x0006c3a3) list_medium_line_x2_t2_g3_t2_ParamLimits

0x6539,	// (0x0006c3a3) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x0007514a) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x0007514a) list_medium_line_x2_t2_g3_t

0x95b1,	// (0x0006f41b) main_sp_fs_list_pane_ParamLimits

0x95b1,	// (0x0006f41b) main_sp_fs_list_pane

0x95bd,	// (0x0006f427) sp_fs_scroll_pane_ParamLimits

0x95bd,	// (0x0006f427) sp_fs_scroll_pane

0x662c,	// (0x0006c496) list_medium_line_x2_t3_t1

0x663c,	// (0x0006c4a6) list_medium_line_x2_t3_t2

0x664a,	// (0x0006c4b4) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x00075195) list_medium_line_x2_t3_t

0x6658,	// (0x0006c4c2) list_medium_line_x3_t4_t1

0x6668,	// (0x0006c4d2) list_medium_line_x3_t4_t2

0x6676,	// (0x0006c4e0) list_medium_line_x3_t4_t3

0x664a,	// (0x0006c4b4) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x0007519c) list_medium_line_x3_t4_t

0x6684,	// (0x0006c4ee) list_medium_line_x4_t5_t1

0x6694,	// (0x0006c4fe) list_medium_line_x4_t5_t2

0x6676,	// (0x0006c4e0) list_medium_line_x4_t5_t3

0x66a2,	// (0x0006c50c) list_medium_line_x4_t5_t4

0x664a,	// (0x0006c4b4) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x000751a5) list_medium_line_x4_t5_t

0x64ee,	// (0x0006c358) list_medium_line_t4_g4_g1_ParamLimits

0x64ee,	// (0x0006c358) list_medium_line_t4_g4_g1

0x659f,	// (0x0006c409) list_medium_line_t4_g4_g2_ParamLimits

0x659f,	// (0x0006c409) list_medium_line_t4_g4_g2

0x66b0,	// (0x0006c51a) list_medium_line_t4_g4_g3_ParamLimits

0x66b0,	// (0x0006c51a) list_medium_line_t4_g4_g3

0x6506,	// (0x0006c370) list_medium_line_t4_g4_g4_ParamLimits

0x6506,	// (0x0006c370) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x000751b0) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x000751b0) list_medium_line_t4_g4_g

0x66bc,	// (0x0006c526) list_medium_line_t4_g4_t1_ParamLimits

0x66bc,	// (0x0006c526) list_medium_line_t4_g4_t1

0x66d1,	// (0x0006c53b) list_medium_line_t4_g4_t2_ParamLimits

0x66d1,	// (0x0006c53b) list_medium_line_t4_g4_t2

0x66e6,	// (0x0006c550) list_medium_line_t4_g4_t3_ParamLimits

0x66e6,	// (0x0006c550) list_medium_line_t4_g4_t3

0x6539,	// (0x0006c3a3) list_medium_line_t4_g4_t4_ParamLimits

0x6539,	// (0x0006c3a3) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x000751b9) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x000751b9) list_medium_line_t4_g4_t

0x96da,	// (0x0006f544) chi_dic_find_pane_g1

0xa639,	// (0x000704a3) main_tport_pane

0x6934,	// (0x0006c79e) list_medium_line_plain_t1

0x6942,	// (0x0006c7ac) list_medium_line_t2_g2_g1_ParamLimits

0x6942,	// (0x0006c7ac) list_medium_line_t2_g2_g1

0x694e,	// (0x0006c7b8) list_medium_line_t2_g2_g2_ParamLimits

0x694e,	// (0x0006c7b8) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x00075875) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x00075875) list_medium_line_t2_g2_g

0x695a,	// (0x0006c7c4) list_medium_line_t2_g2_t1_ParamLimits

0x695a,	// (0x0006c7c4) list_medium_line_t2_g2_t1

0x6974,	// (0x0006c7de) list_medium_line_t2_g2_t2_ParamLimits

0x6974,	// (0x0006c7de) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x0007587a) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x0007587a) list_medium_line_t2_g2_t

0x6b93,	// (0x0006c9fd) aid_sp_fs_list_icon_a_sm

0xd54c,	// (0x000733b6) aid_sp_fs_list_icon_d

0x3bb0,	// (0x00069a1a) aid_sp_fs_text_primary

0x6b9b,	// (0x0006ca05) aid_sp_fs_text_secondary

0x6ba4,	// (0x0006ca0e) list_medium_line

0x6ba4,	// (0x0006ca0e) list_medium_line_g2

0x6ba4,	// (0x0006ca0e) list_medium_line_g3

0x6ba4,	// (0x0006ca0e) list_medium_line_plain

0x6ba4,	// (0x0006ca0e) list_medium_line_plain_t2

0x6ba4,	// (0x0006ca0e) list_medium_line_plain_t3

0x6ba4,	// (0x0006ca0e) list_medium_line_right_icon

0x6ba4,	// (0x0006ca0e) list_medium_line_right_iconx2

0x6ba4,	// (0x0006ca0e) list_medium_line_t2

0x6ba4,	// (0x0006ca0e) list_medium_line_t2_g2

0x6ba4,	// (0x0006ca0e) list_medium_line_t2_g3

0x6ba4,	// (0x0006ca0e) list_medium_line_t2_right_icon

0x6ba4,	// (0x0006ca0e) list_medium_line_t2_right_iconx2

0x6ba4,	// (0x0006ca0e) list_medium_line_t3

0x6ba4,	// (0x0006ca0e) list_medium_line_t3_g2

0x6ba4,	// (0x0006ca0e) list_medium_line_t3_g3

0x6ba4,	// (0x0006ca0e) list_medium_line_t3_right_iconx2

0x6bad,	// (0x0006ca17) list_medium_line_t4_g4

0x6bb6,	// (0x0006ca20) list_medium_line_x2

0x6bb6,	// (0x0006ca20) list_medium_line_x2_t2_g2

0x6bb6,	// (0x0006ca20) list_medium_line_x2_t2_g3

0x6bb6,	// (0x0006ca20) list_medium_line_x2_t2_g4

0x6bb6,	// (0x0006ca20) list_medium_line_x2_t3

0x6bb6,	// (0x0006ca20) list_medium_line_x2_t3_g2

0x6bb6,	// (0x0006ca20) list_medium_line_x2_t3_g3

0x6bb6,	// (0x0006ca20) list_medium_line_x2_t3_g4

0x6bb6,	// (0x0006ca20) list_medium_line_x2_t4_g2

0x6bb6,	// (0x0006ca20) list_medium_line_x2_t4_g4

0x6bbf,	// (0x0006ca29) list_medium_line_x3

0x6bbf,	// (0x0006ca29) list_medium_line_x3_t4

0x6bbf,	// (0x0006ca29) list_medium_line_x3_t4_g4

0x6bad,	// (0x0006ca17) list_medium_line_x4_t4

0x6bad,	// (0x0006ca17) list_medium_line_x4_t4_g7

0x6bad,	// (0x0006ca17) list_medium_line_x4_t5

0x6bc8,	// (0x0006ca32) list_single_fs_dyc_pane_ParamLimits

0x6bc8,	// (0x0006ca32) list_single_fs_dyc_pane

0x64ee,	// (0x0006c358) list_medium_line_x4_t4_g7_g1_ParamLimits

0x64ee,	// (0x0006c358) list_medium_line_x4_t4_g7_g1

0x6bdc,	// (0x0006ca46) list_medium_line_x4_t4_g7_g2_ParamLimits

0x6bdc,	// (0x0006ca46) list_medium_line_x4_t4_g7_g2

0x6be8,	// (0x0006ca52) list_medium_line_x4_t4_g7_g3_ParamLimits

0x6be8,	// (0x0006ca52) list_medium_line_x4_t4_g7_g3

0x6bf7,	// (0x0006ca61) list_medium_line_x4_t4_g7_g4_ParamLimits

0x6bf7,	// (0x0006ca61) list_medium_line_x4_t4_g7_g4

0x6c03,	// (0x0006ca6d) list_medium_line_x4_t4_g7_g5_ParamLimits

0x6c03,	// (0x0006ca6d) list_medium_line_x4_t4_g7_g5

0x6c12,	// (0x0006ca7c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x6c12,	// (0x0006ca7c) list_medium_line_x4_t4_g7_g6

0x6c21,	// (0x0006ca8b) list_medium_line_x4_t4_g7_g7_ParamLimits

0x6c21,	// (0x0006ca8b) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbdb,	// (0x00075a45) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbdb,	// (0x00075a45) list_medium_line_x4_t4_g7_g

0x6c2d,	// (0x0006ca97) list_medium_line_x4_t4_g7_t1_ParamLimits

0x6c2d,	// (0x0006ca97) list_medium_line_x4_t4_g7_t1

0x6c42,	// (0x0006caac) list_medium_line_x4_t4_g7_t2_ParamLimits

0x6c42,	// (0x0006caac) list_medium_line_x4_t4_g7_t2

0x6c57,	// (0x0006cac1) list_medium_line_x4_t4_g7_t3_ParamLimits

0x6c57,	// (0x0006cac1) list_medium_line_x4_t4_g7_t3

0x6c6c,	// (0x0006cad6) list_medium_line_x4_t4_g7_t4_ParamLimits

0x6c6c,	// (0x0006cad6) list_medium_line_x4_t4_g7_t4

0x6c7e,	// (0x0006cae8) list_medium_line_x4_t4_g7_t5_ParamLimits

0x6c7e,	// (0x0006cae8) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbea,	// (0x00075a54) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbea,	// (0x00075a54) list_medium_line_x4_t4_g7_t

0x6c90,	// (0x0006cafa) list_single_dyc_row_pane_ParamLimits

0x6c90,	// (0x0006cafa) list_single_dyc_row_pane

0xe261,	// (0x000740cb) call5_gesture_pane_ParamLimits

0xe261,	// (0x000740cb) call5_gesture_pane

0xe295,	// (0x000740ff) call5_windows_pane_ParamLimits

0xe295,	// (0x000740ff) call5_windows_pane

0xe307,	// (0x00074171) call5_swipe_1_pane_cp_ParamLimits

0xe307,	// (0x00074171) call5_swipe_1_pane_cp

0xe313,	// (0x0007417d) call5_swipe_2_pane_cp_ParamLimits

0xe313,	// (0x0007417d) call5_swipe_2_pane_cp

0x1440,	// (0x000672aa) call5_image_pane_cp

0xe31f,	// (0x00074189) popup_call5_audio_first_window_cp_ParamLimits

0xe31f,	// (0x00074189) popup_call5_audio_first_window_cp

0x5449,	// (0x0006b2b3) call5_swipe_1_pane_g1_cp_ParamLimits

0x5449,	// (0x0006b2b3) call5_swipe_1_pane_g1_cp

0x5489,	// (0x0006b2f3) call5_swipe_1_pane_g2_cp

0x5462,	// (0x0006b2cc) call5_swipe_1_pane_t1_cp_ParamLimits

0x5462,	// (0x0006b2cc) call5_swipe_1_pane_t1_cp

0x5449,	// (0x0006b2b3) call5_swipe_2_pane_g1_cp_ParamLimits

0x5449,	// (0x0006b2b3) call5_swipe_2_pane_g1_cp

0x5491,	// (0x0006b2fb) call5_swipe_2_pane_g2_cp

0x5499,	// (0x0006b303) call5_swipe_2_pane_t1_cp_ParamLimits

0x5499,	// (0x0006b303) call5_swipe_2_pane_t1_cp

0x2890,	// (0x000686fa) main_sp_fs_email_pane

0x54ae,	// (0x0006b318) main_sp_fs_listscroll_pane_te

0x6d3c,	// (0x0006cba6) popup_sp_fs_action_menu_pane_ParamLimits

0x6d3c,	// (0x0006cba6) popup_sp_fs_action_menu_pane

0x2d96,	// (0x00068c00) bg_sp_fs_ctrlbar_pane_g1

0x54b7,	// (0x0006b321) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x54c0,	// (0x0006b32a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x54c9,	// (0x0006b333) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2d96,	// (0x00068c00) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd8,	// (0x00075b42) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2b7b,	// (0x000689e5) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2b7b,	// (0x000689e5) bg_sp_fs_ctrlbar_ddmenu_pane

0x54d2,	// (0x0006b33c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x54d2,	// (0x0006b33c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x54de,	// (0x0006b348) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x54de,	// (0x0006b348) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce1,	// (0x00075b4b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce1,	// (0x00075b4b) main_sp_fs_ctrlbar_ddmenu_pane_g

0x54ea,	// (0x0006b354) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x54ea,	// (0x0006b354) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x6d80,	// (0x0006cbea) list_medium_line_t2_right_icon_g1

0x6d88,	// (0x0006cbf2) list_medium_line_t2_right_icon_t1

0x6d98,	// (0x0006cc02) list_medium_line_t2_right_icon_t2

0x0001,

0xfce6,	// (0x00075b50) list_medium_line_t2_right_icon_t

0x2882,	// (0x000686ec) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2882,	// (0x000686ec) bg_sp_fs_ctrlbar_pane

0xe384,	// (0x000741ee) main_sp_fs_ctrlbar_button_pane_cp01

0xe38c,	// (0x000741f6) main_sp_fs_ctrlbar_ddmenu_pane

0x553c,	// (0x0006b3a6) main_sp_fs_ctrlbar_pane_g1

0x5548,	// (0x0006b3b2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfceb,	// (0x00075b55) main_sp_fs_ctrlbar_pane_g

0x5554,	// (0x0006b3be) main_sp_fs_ctrlbar_pane_t1

0x6da6,	// (0x0006cc10) main_sp_fs_ctrlbar_pane

0x6dc0,	// (0x0006cc2a) main_sp_fs_listscroll_pane_te_cp01

0x6dd1,	// (0x0006cc3b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6dd1,	// (0x0006cc3b) popup_sp_fs_action_menu_pane_cp01

0x2890,	// (0x000686fa) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x2890,	// (0x000686fa) bg_sp_fs_highlight_list_pane_cp01

0x6dfb,	// (0x0006cc65) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x6dfb,	// (0x0006cc65) sp_fs_action_menu_list_gene_pane_g1

0x5579,	// (0x0006b3e3) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x5579,	// (0x0006b3e3) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf5,	// (0x00075b5f) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf5,	// (0x00075b5f) sp_fs_action_menu_list_gene_pane_g

0x6e0a,	// (0x0006cc74) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x6e0a,	// (0x0006cc74) sp_fs_action_menu_list_gene_pane_t1

0x6e22,	// (0x0006cc8c) sp_fs_action_menu_list_gene_pane_ParamLimits

0x6e22,	// (0x0006cc8c) sp_fs_action_menu_list_gene_pane

0x5586,	// (0x0006b3f0) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x5586,	// (0x0006b3f0) popup_sp_fs_action_menu_bg_pane

0x6e43,	// (0x0006ccad) sp_fs_action_menu_list_pane_ParamLimits

0x6e43,	// (0x0006ccad) sp_fs_action_menu_list_pane

0x5594,	// (0x0006b3fe) sp_fs_scroll_pane_cp01_ParamLimits

0x5594,	// (0x0006b3fe) sp_fs_scroll_pane_cp01

0x6e65,	// (0x0006cccf) list_medium_line_plain_t2_t1

0x6e75,	// (0x0006ccdf) list_medium_line_plain_t2_t2

0x0001,

0xfcfa,	// (0x00075b64) list_medium_line_plain_t2_t

0x6e83,	// (0x0006cced) list_medium_line_plain_t3_t1

0x6e93,	// (0x0006ccfd) list_medium_line_plain_t3_t2

0x6ea1,	// (0x0006cd0b) list_medium_line_plain_t3_t3

0x0002,

0xfcff,	// (0x00075b69) list_medium_line_plain_t3_t

0x64ee,	// (0x0006c358) list_medium_line_x2_t2_g2_g1_ParamLimits

0x64ee,	// (0x0006c358) list_medium_line_x2_t2_g2_g1

0x6506,	// (0x0006c370) list_medium_line_x2_t2_g2_g2_ParamLimits

0x6506,	// (0x0006c370) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x000750c0) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x000750c0) list_medium_line_x2_t2_g2_g

0x66bc,	// (0x0006c526) list_medium_line_x2_t2_g2_t1_ParamLimits

0x66bc,	// (0x0006c526) list_medium_line_x2_t2_g2_t1

0x6539,	// (0x0006c3a3) list_medium_line_x2_t2_g2_t2_ParamLimits

0x6539,	// (0x0006c3a3) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd06,	// (0x00075b70) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd06,	// (0x00075b70) list_medium_line_x2_t2_g2_t

0x64ee,	// (0x0006c358) list_medium_line_x2_t4_g2_g1_ParamLimits

0x64ee,	// (0x0006c358) list_medium_line_x2_t4_g2_g1

0x6eaf,	// (0x0006cd19) list_medium_line_x2_t4_g2_g2_ParamLimits

0x6eaf,	// (0x0006cd19) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0b,	// (0x00075b75) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0b,	// (0x00075b75) list_medium_line_x2_t4_g2_g

0x6ec1,	// (0x0006cd2b) list_medium_line_x2_t4_g2_t1_ParamLimits

0x6ec1,	// (0x0006cd2b) list_medium_line_x2_t4_g2_t1

0x6ed8,	// (0x0006cd42) list_medium_line_x2_t4_g2_t2_ParamLimits

0x6ed8,	// (0x0006cd42) list_medium_line_x2_t4_g2_t2

0x6eed,	// (0x0006cd57) list_medium_line_x2_t4_g2_t3_ParamLimits

0x6eed,	// (0x0006cd57) list_medium_line_x2_t4_g2_t3

0x6539,	// (0x0006c3a3) list_medium_line_x2_t4_g2_t4_ParamLimits

0x6539,	// (0x0006c3a3) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd10,	// (0x00075b7a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd10,	// (0x00075b7a) list_medium_line_x2_t4_g2_t

0x6eff,	// (0x0006cd69) list_medium_line_t3_right_iconx2_g1

0x6d80,	// (0x0006cbea) list_medium_line_t3_right_iconx2_g2

0x6f07,	// (0x0006cd71) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd19,	// (0x00075b83) list_medium_line_t3_right_iconx2_g

0x6f0f,	// (0x0006cd79) list_medium_line_t3_right_iconx2_t1

0x6f1f,	// (0x0006cd89) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd20,	// (0x00075b8a) list_medium_line_t3_right_iconx2_t

0x64ee,	// (0x0006c358) list_medium_line_x3_t4_g4_g1_ParamLimits

0x64ee,	// (0x0006c358) list_medium_line_x3_t4_g4_g1

0x64fa,	// (0x0006c364) list_medium_line_x3_t4_g4_g2_ParamLimits

0x64fa,	// (0x0006c364) list_medium_line_x3_t4_g4_g2

0x659f,	// (0x0006c409) list_medium_line_x3_t4_g4_g3_ParamLimits

0x659f,	// (0x0006c409) list_medium_line_x3_t4_g4_g3

0x6f2d,	// (0x0006cd97) list_medium_line_x3_t4_g4_g4_ParamLimits

0x6f2d,	// (0x0006cd97) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd25,	// (0x00075b8f) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd25,	// (0x00075b8f) list_medium_line_x3_t4_g4_g

0x6f39,	// (0x0006cda3) list_medium_line_x3_t4_g4_t1_ParamLimits

0x6f39,	// (0x0006cda3) list_medium_line_x3_t4_g4_t1

0x6f50,	// (0x0006cdba) list_medium_line_x3_t4_g4_t2_ParamLimits

0x6f50,	// (0x0006cdba) list_medium_line_x3_t4_g4_t2

0x66d1,	// (0x0006c53b) list_medium_line_x3_t4_g4_t3_ParamLimits

0x66d1,	// (0x0006c53b) list_medium_line_x3_t4_g4_t3

0x6f65,	// (0x0006cdcf) list_medium_line_x3_t4_g4_t4_ParamLimits

0x6f65,	// (0x0006cdcf) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2e,	// (0x00075b98) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2e,	// (0x00075b98) list_medium_line_x3_t4_g4_t

0x6f82,	// (0x0006cdec) list_single_dyc_row_text_pane_t1_ParamLimits

0x6f82,	// (0x0006cdec) list_single_dyc_row_text_pane_t1

0x6fb9,	// (0x0006ce23) list_single_dyc_row_text_pane_t2_ParamLimits

0x6fb9,	// (0x0006ce23) list_single_dyc_row_text_pane_t2

0x7013,	// (0x0006ce7d) list_single_dyc_row_text_pane_t3_ParamLimits

0x7013,	// (0x0006ce7d) list_single_dyc_row_text_pane_t3

0x0002,

0xfd37,	// (0x00075ba1) list_single_dyc_row_text_pane_t_ParamLimits

0xfd37,	// (0x00075ba1) list_single_dyc_row_text_pane_t

0x7025,	// (0x0006ce8f) list_single_dyc_row_pane_g1_ParamLimits

0x7025,	// (0x0006ce8f) list_single_dyc_row_pane_g1

0x7031,	// (0x0006ce9b) list_single_dyc_row_pane_g2_ParamLimits

0x7031,	// (0x0006ce9b) list_single_dyc_row_pane_g2

0x703d,	// (0x0006cea7) list_single_dyc_row_pane_g3_ParamLimits

0x703d,	// (0x0006cea7) list_single_dyc_row_pane_g3

0x7049,	// (0x0006ceb3) list_single_dyc_row_pane_g4_ParamLimits

0x7049,	// (0x0006ceb3) list_single_dyc_row_pane_g4

0x0003,

0xfd3e,	// (0x00075ba8) list_single_dyc_row_pane_g_ParamLimits

0xfd3e,	// (0x00075ba8) list_single_dyc_row_pane_g

0x7055,	// (0x0006cebf) list_single_dyc_row_text_pane_ParamLimits

0x7055,	// (0x0006cebf) list_single_dyc_row_text_pane

0x7688,	// (0x0006d4f2) bg_sp_fs_scroll_pane

0x55ba,	// (0x0006b424) thumb_sp_fs_scroll_pane

0x6942,	// (0x0006c7ac) list_medium_line_g1_ParamLimits

0x6942,	// (0x0006c7ac) list_medium_line_g1

0x7074,	// (0x0006cede) list_medium_line_t1_ParamLimits

0x7074,	// (0x0006cede) list_medium_line_t1

0x64ee,	// (0x0006c358) list_medium_line_x2_g1_ParamLimits

0x64ee,	// (0x0006c358) list_medium_line_x2_g1

0x64fa,	// (0x0006c364) list_medium_line_x2_g2_ParamLimits

0x64fa,	// (0x0006c364) list_medium_line_x2_g2

0x0001,

0xfd47,	// (0x00075bb1) list_medium_line_x2_g_ParamLimits

0xfd47,	// (0x00075bb1) list_medium_line_x2_g

0x7089,	// (0x0006cef3) list_medium_line_x2_t1_ParamLimits

0x7089,	// (0x0006cef3) list_medium_line_x2_t1

0x64ee,	// (0x0006c358) list_medium_line_x3_g1_ParamLimits

0x64ee,	// (0x0006c358) list_medium_line_x3_g1

0x64fa,	// (0x0006c364) list_medium_line_x3_g2_ParamLimits

0x64fa,	// (0x0006c364) list_medium_line_x3_g2

0x0001,

0xfd47,	// (0x00075bb1) list_medium_line_x3_g_ParamLimits

0xfd47,	// (0x00075bb1) list_medium_line_x3_g

0x7089,	// (0x0006cef3) list_medium_line_x3_t1_ParamLimits

0x7089,	// (0x0006cef3) list_medium_line_x3_t1

0x55c3,	// (0x0006b42d) thumb_sp_fs_scroll_pane_g1

0x55cc,	// (0x0006b436) thumb_sp_fs_scroll_pane_g2

0x55d5,	// (0x0006b43f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x00075bb6) thumb_sp_fs_scroll_pane_g

0x55c3,	// (0x0006b42d) bg_sp_fs_scroll_pane_g1

0x55cc,	// (0x0006b436) bg_sp_fs_scroll_pane_g2

0x55d5,	// (0x0006b43f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x00075bb6) bg_sp_fs_scroll_pane_g

0x64ee,	// (0x0006c358) list_medium_line_x2_t3_g4_g1_ParamLimits

0x64ee,	// (0x0006c358) list_medium_line_x2_t3_g4_g1

0x6593,	// (0x0006c3fd) list_medium_line_x2_t3_g4_g2_ParamLimits

0x6593,	// (0x0006c3fd) list_medium_line_x2_t3_g4_g2

0x64fa,	// (0x0006c364) list_medium_line_x2_t3_g4_g3_ParamLimits

0x64fa,	// (0x0006c364) list_medium_line_x2_t3_g4_g3

0x6506,	// (0x0006c370) list_medium_line_x2_t3_g4_g4_ParamLimits

0x6506,	// (0x0006c370) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x0007513c) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x0007513c) list_medium_line_x2_t3_g4_g

0x709f,	// (0x0006cf09) list_medium_line_x2_t3_g4_t1_ParamLimits

0x709f,	// (0x0006cf09) list_medium_line_x2_t3_g4_t1

0x70b5,	// (0x0006cf1f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x70b5,	// (0x0006cf1f) list_medium_line_x2_t3_g4_t2

0x6539,	// (0x0006c3a3) list_medium_line_x2_t3_g4_t3_ParamLimits

0x6539,	// (0x0006c3a3) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd53,	// (0x00075bbd) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd53,	// (0x00075bbd) list_medium_line_x2_t3_g4_t

0x6942,	// (0x0006c7ac) list_medium_line_g2_g1_ParamLimits

0x6942,	// (0x0006c7ac) list_medium_line_g2_g1

0x694e,	// (0x0006c7b8) list_medium_line_g2_g2_ParamLimits

0x694e,	// (0x0006c7b8) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x00075875) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x00075875) list_medium_line_g2_g

0x70cf,	// (0x0006cf39) list_medium_line_g2_t1_ParamLimits

0x70cf,	// (0x0006cf39) list_medium_line_g2_t1

0x6942,	// (0x0006c7ac) list_medium_line_t3_g2_g1_ParamLimits

0x6942,	// (0x0006c7ac) list_medium_line_t3_g2_g1

0x694e,	// (0x0006c7b8) list_medium_line_t3_g2_g2_ParamLimits

0x694e,	// (0x0006c7b8) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x00075875) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x00075875) list_medium_line_t3_g2_g

0x70e4,	// (0x0006cf4e) list_medium_line_t3_g2_t1_ParamLimits

0x70e4,	// (0x0006cf4e) list_medium_line_t3_g2_t1

0x70fb,	// (0x0006cf65) list_medium_line_t3_g2_t2_ParamLimits

0x70fb,	// (0x0006cf65) list_medium_line_t3_g2_t2

0x7110,	// (0x0006cf7a) list_medium_line_t3_g2_t3_ParamLimits

0x7110,	// (0x0006cf7a) list_medium_line_t3_g2_t3

0x0002,

0xfd5a,	// (0x00075bc4) list_medium_line_t3_g2_t_ParamLimits

0xfd5a,	// (0x00075bc4) list_medium_line_t3_g2_t

0x6d80,	// (0x0006cbea) list_medium_line_right_icon_g1

0x7125,	// (0x0006cf8f) list_medium_line_right_icon_t1

0x6942,	// (0x0006c7ac) list_medium_line_t2_g1_ParamLimits

0x6942,	// (0x0006c7ac) list_medium_line_t2_g1

0x7133,	// (0x0006cf9d) list_medium_line_t2_t1_ParamLimits

0x7133,	// (0x0006cf9d) list_medium_line_t2_t1

0x714d,	// (0x0006cfb7) list_medium_line_t2_t2_ParamLimits

0x714d,	// (0x0006cfb7) list_medium_line_t2_t2

0x0001,

0xfd61,	// (0x00075bcb) list_medium_line_t2_t_ParamLimits

0xfd61,	// (0x00075bcb) list_medium_line_t2_t

0x6942,	// (0x0006c7ac) list_medium_line_t3_g1_ParamLimits

0x6942,	// (0x0006c7ac) list_medium_line_t3_g1

0x7162,	// (0x0006cfcc) list_medium_line_t3_t1_ParamLimits

0x7162,	// (0x0006cfcc) list_medium_line_t3_t1

0x7179,	// (0x0006cfe3) list_medium_line_t3_t2_ParamLimits

0x7179,	// (0x0006cfe3) list_medium_line_t3_t2

0x718e,	// (0x0006cff8) list_medium_line_t3_t3_ParamLimits

0x718e,	// (0x0006cff8) list_medium_line_t3_t3

0x0002,

0xfd66,	// (0x00075bd0) list_medium_line_t3_t_ParamLimits

0xfd66,	// (0x00075bd0) list_medium_line_t3_t

0x6942,	// (0x0006c7ac) list_medium_line_g3_g1_ParamLimits

0x6942,	// (0x0006c7ac) list_medium_line_g3_g1

0x71a0,	// (0x0006d00a) list_medium_line_g3_g2_ParamLimits

0x71a0,	// (0x0006d00a) list_medium_line_g3_g2

0x694e,	// (0x0006c7b8) list_medium_line_g3_g3_ParamLimits

0x694e,	// (0x0006c7b8) list_medium_line_g3_g3

0x0002,

0xfd6d,	// (0x00075bd7) list_medium_line_g3_g_ParamLimits

0xfd6d,	// (0x00075bd7) list_medium_line_g3_g

0x71ac,	// (0x0006d016) list_medium_line_g3_t1_ParamLimits

0x71ac,	// (0x0006d016) list_medium_line_g3_t1

0x6942,	// (0x0006c7ac) list_medium_line_t2_g3_g1_ParamLimits

0x6942,	// (0x0006c7ac) list_medium_line_t2_g3_g1

0x71a0,	// (0x0006d00a) list_medium_line_t2_g3_g2_ParamLimits

0x71a0,	// (0x0006d00a) list_medium_line_t2_g3_g2

0x694e,	// (0x0006c7b8) list_medium_line_t2_g3_g3_ParamLimits

0x694e,	// (0x0006c7b8) list_medium_line_t2_g3_g3

0x0002,

0xfd6d,	// (0x00075bd7) list_medium_line_t2_g3_g_ParamLimits

0xfd6d,	// (0x00075bd7) list_medium_line_t2_g3_g

0x71c1,	// (0x0006d02b) list_medium_line_t2_g3_t1_ParamLimits

0x71c1,	// (0x0006d02b) list_medium_line_t2_g3_t1

0x71db,	// (0x0006d045) list_medium_line_t2_g3_t2_ParamLimits

0x71db,	// (0x0006d045) list_medium_line_t2_g3_t2

0x0001,

0xfd74,	// (0x00075bde) list_medium_line_t2_g3_t_ParamLimits

0xfd74,	// (0x00075bde) list_medium_line_t2_g3_t

0x6942,	// (0x0006c7ac) list_medium_line_t3_g3_g1_ParamLimits

0x6942,	// (0x0006c7ac) list_medium_line_t3_g3_g1

0x71a0,	// (0x0006d00a) list_medium_line_t3_g3_g2_ParamLimits

0x71a0,	// (0x0006d00a) list_medium_line_t3_g3_g2

0x694e,	// (0x0006c7b8) list_medium_line_t3_g3_g3_ParamLimits

0x694e,	// (0x0006c7b8) list_medium_line_t3_g3_g3

0x0002,

0xfd6d,	// (0x00075bd7) list_medium_line_t3_g3_g_ParamLimits

0xfd6d,	// (0x00075bd7) list_medium_line_t3_g3_g

0x71f0,	// (0x0006d05a) list_medium_line_t3_g3_t1_ParamLimits

0x71f0,	// (0x0006d05a) list_medium_line_t3_g3_t1

0x7204,	// (0x0006d06e) list_medium_line_t3_g3_t2_ParamLimits

0x7204,	// (0x0006d06e) list_medium_line_t3_g3_t2

0x7216,	// (0x0006d080) list_medium_line_t3_g3_t3_ParamLimits

0x7216,	// (0x0006d080) list_medium_line_t3_g3_t3

0x0002,

0xfd79,	// (0x00075be3) list_medium_line_t3_g3_t_ParamLimits

0xfd79,	// (0x00075be3) list_medium_line_t3_g3_t

0x6eff,	// (0x0006cd69) list_medium_line_right_iconx2_g1

0x6d80,	// (0x0006cbea) list_medium_line_right_iconx2_g2

0x0001,

0xfd80,	// (0x00075bea) list_medium_line_right_iconx2_g

0x7228,	// (0x0006d092) list_medium_line_right_iconx2_t1

0x6eff,	// (0x0006cd69) list_medium_line_t2_right_iconx2_g1

0x6d80,	// (0x0006cbea) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd80,	// (0x00075bea) list_medium_line_t2_right_iconx2_g

0x7236,	// (0x0006d0a0) list_medium_line_t2_right_iconx2_t1

0x7246,	// (0x0006d0b0) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd85,	// (0x00075bef) list_medium_line_t2_right_iconx2_t

0x7254,	// (0x0006d0be) list_medium_line_x4_t4_t1

0x7262,	// (0x0006d0cc) list_medium_line_x4_t4_t2

0x7272,	// (0x0006d0dc) list_medium_line_x4_t4_t3

0x7282,	// (0x0006d0ec) list_medium_line_x4_t4_t4

0x0003,

0xfd8a,	// (0x00075bf4) list_medium_line_x4_t4_t

0xe3bf,	// (0x00074229) tport_appsw_pane_ParamLimits

0xe3bf,	// (0x00074229) tport_appsw_pane

0xe3cb,	// (0x00074235) tport_contact_pane_ParamLimits

0xe3cb,	// (0x00074235) tport_contact_pane

0xe3db,	// (0x00074245) tport_listscroll_pane_ParamLimits

0xe3db,	// (0x00074245) tport_listscroll_pane

0xe3eb,	// (0x00074255) cell_tport_appsw_pane_ParamLimits

0xe3eb,	// (0x00074255) cell_tport_appsw_pane

0x3067,	// (0x00068ed1) tport_appsw_pane_g1_ParamLimits

0x3067,	// (0x00068ed1) tport_appsw_pane_g1

0x55de,	// (0x0006b448) tport_contact_pane_g1

0x4f56,	// (0x0006adc0) tport_contact_pane_t1

0x55e7,	// (0x0006b451) tport_contact_pane_t2

0x0001,

0xfd93,	// (0x00075bfd) tport_contact_pane_t

0x55f5,	// (0x0006b45f) list_tport_pane

0x55fe,	// (0x0006b468) scroll_pane_cp_030

0x560f,	// (0x0006b479) cell_tport_appsw_pane_g1

0x561f,	// (0x0006b489) cell_tport_appsw_pane_t1

0x7688,	// (0x0006d4f2) grid_highlight_pane_cp019

0xe416,	// (0x00074280) list_tport_double_graphic_pane_ParamLimits

0xe416,	// (0x00074280) list_tport_double_graphic_pane

0x2890,	// (0x000686fa) list_highlight_pane_cp023_ParamLimits

0x2890,	// (0x000686fa) list_highlight_pane_cp023

0xe428,	// (0x00074292) list_tport_double_graphic_pane_g1_ParamLimits

0xe428,	// (0x00074292) list_tport_double_graphic_pane_g1

0xe435,	// (0x0007429f) list_tport_double_graphic_pane_t1_ParamLimits

0xe435,	// (0x0007429f) list_tport_double_graphic_pane_t1

0xe44a,	// (0x000742b4) list_tport_double_graphic_pane_t2_ParamLimits

0xe44a,	// (0x000742b4) list_tport_double_graphic_pane_t2

0x0001,

0xfd9f,	// (0x00075c09) list_tport_double_graphic_pane_t_ParamLimits

0xfd9f,	// (0x00075c09) list_tport_double_graphic_pane_t

0x7688,	// (0x0006d4f2) main_cale_note_pane

0xc89c,	// (0x00072706) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xc89c,	// (0x00072706) cell_vitu2_function_top_wide_pane_cp01

0xdfc1,	// (0x00073e2b) wait_bar_pane_cp05_ParamLimits

0x7688,	// (0x0006d4f2) listscroll_cmail_pane

0x5635,	// (0x0006b49f) list_cmail_pane

0xe466,	// (0x000742d0) list_cmail_body_pane

0xe480,	// (0x000742ea) list_single_cmail_header_caption_pane

0xe4a5,	// (0x0007430f) list_single_cmail_header_detail_pane_ParamLimits

0xe4a5,	// (0x0007430f) list_single_cmail_header_detail_pane

0xe4d5,	// (0x0007433f) list_single_cmail_header_caption_pane_t1

0x7292,	// (0x0006d0fc) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7292,	// (0x0006d0fc) list_single_cmail_header_detail_pane_g1

0xe4e3,	// (0x0007434d) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe4e3,	// (0x0007434d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda4,	// (0x00075c0e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda4,	// (0x00075c0e) list_single_cmail_header_detail_pane_g

0x72a8,	// (0x0006d112) list_single_cmail_header_detail_pane_t1_ParamLimits

0x72a8,	// (0x0006d112) list_single_cmail_header_detail_pane_t1

0x7306,	// (0x0006d170) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7306,	// (0x0006d170) list_single_cmail_header_editor_pane_bg

0x50f7,	// (0x0006af61) list_cmail_body_pane_g1

0x5663,	// (0x0006b4cd) list_cmail_body_pane_t1

0x44ba,	// (0x0006a324) list_single_cmail_header_editor_pane_bg_g1

0x0cb6,	// (0x00066b20) list_single_cmail_header_editor_pane_bg_g1_copy1

0x44ca,	// (0x0006a334) list_single_cmail_header_editor_pane_bg_g1_copy2

0x44c2,	// (0x0006a32c) list_single_cmail_header_editor_pane_bg_g1_copy3

0x46de,	// (0x0006a548) list_single_cmail_header_editor_pane_bg_g1_copy4

0x44ea,	// (0x0006a354) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x44da,	// (0x0006a344) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x44e2,	// (0x0006a34c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0c96,	// (0x00066b00) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe4ef,	// (0x00074359) calenote_gesture_pane_ParamLimits

0xe4ef,	// (0x00074359) calenote_gesture_pane

0xe509,	// (0x00074373) calenote_window_pane_ParamLimits

0xe509,	// (0x00074373) calenote_window_pane

0x5671,	// (0x0006b4db) popup_note_window_cp01

0xe521,	// (0x0007438b) calenote_swipe_1_pane_ParamLimits

0xe521,	// (0x0007438b) calenote_swipe_1_pane

0xe313,	// (0x0007417d) calenote_swipe_2_pane_ParamLimits

0xe313,	// (0x0007417d) calenote_swipe_2_pane

0x5449,	// (0x0006b2b3) calenote_swipe_1_pane_g1_ParamLimits

0x5449,	// (0x0006b2b3) calenote_swipe_1_pane_g1

0x5456,	// (0x0006b2c0) calenote_swipe_1_pane_g2_ParamLimits

0x5456,	// (0x0006b2c0) calenote_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x00075b38) calenote_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x00075b38) calenote_swipe_1_pane_g

0x5683,	// (0x0006b4ed) calenote_swipe_1_pane_t1_ParamLimits

0x5683,	// (0x0006b4ed) calenote_swipe_1_pane_t1

0x5449,	// (0x0006b2b3) calenote_swipe_2_pane_g1_ParamLimits

0x5449,	// (0x0006b2b3) calenote_swipe_2_pane_g1

0x56a2,	// (0x0006b50c) calenote_swipe_2_pane_g2_ParamLimits

0x56a2,	// (0x0006b50c) calenote_swipe_2_pane_g2

0x0001,

0xfdb0,	// (0x00075c1a) calenote_swipe_2_pane_g_ParamLimits

0xfdb0,	// (0x00075c1a) calenote_swipe_2_pane_g

0x56ae,	// (0x0006b518) calenote_swipe_2_pane_t1_ParamLimits

0x56ae,	// (0x0006b518) calenote_swipe_2_pane_t1

0x7688,	// (0x0006d4f2) main_mup_navstr_pane

0xb64c,	// (0x000714b6) main_mup3_pane_t7_ParamLimits

0xb64c,	// (0x000714b6) main_mup3_pane_t7

0xc026,	// (0x00071e90) main_mp4_pane_g6_ParamLimits

0xc026,	// (0x00071e90) main_mp4_pane_g6

0xc398,	// (0x00072202) main_image3_pane_t4_ParamLimits

0xc398,	// (0x00072202) main_image3_pane_t4

0xe534,	// (0x0007439e) popup_navstr_preview_pane_ParamLimits

0xe534,	// (0x0007439e) popup_navstr_preview_pane

0xe540,	// (0x000743aa) scroll_navstr_pane_ParamLimits

0xe540,	// (0x000743aa) scroll_navstr_pane

0x7688,	// (0x0006d4f2) bg_popup_preview_window_pane_cp04

0x56d5,	// (0x0006b53f) popup_navstr_preview_pane_t1

0xe54c,	// (0x000743b6) scroll_navstr_pane_g1_ParamLimits

0xe54c,	// (0x000743b6) scroll_navstr_pane_g1

0xe559,	// (0x000743c3) scroll_navstr_pane_t1_ParamLimits

0xe559,	// (0x000743c3) scroll_navstr_pane_t1

0x567a,	// (0x0006b4e4) bg_button_pane_cp014

0x567a,	// (0x0006b4e4) bg_button_pane_cp030

0x6ce2,	// (0x0006cb4c) list_double_fisheye_pane_g4_ParamLimits

0x6ce2,	// (0x0006cb4c) list_double_fisheye_pane_g4

0x6cee,	// (0x0006cb58) list_double_fisheye_pane_g5_ParamLimits

0x6cee,	// (0x0006cb58) list_double_fisheye_pane_g5

0x563d,	// (0x0006b4a7) sp_fs_scroll_pane_cp03

0x553c,	// (0x0006b3a6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x5548,	// (0x0006b3b2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfceb,	// (0x00075b55) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x5554,	// (0x0006b3be) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe45c,	// (0x000742c6) sp_fs_scroll_pane_cp02

0x09b6,	// (0x00066820) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x09b6,	// (0x00066820) popup_sp_fs_calendar_preview_list_single_pane

0x7688,	// (0x0006d4f2) main_cam6_pano_pane

0x2890,	// (0x000686fa) main_mup3_pane_ParamLimits

0x7688,	// (0x0006d4f2) main_phacti_pane

0xde96,	// (0x00073d00) bg_button_pane_cp11

0xdeae,	// (0x00073d18) main_mobtv_info_pane_g2_ParamLimits

0xdeae,	// (0x00073d18) main_mobtv_info_pane_g2

0x0001,

0xfc4b,	// (0x00075ab5) main_mobtv_info_pane_g_ParamLimits

0xfc4b,	// (0x00075ab5) main_mobtv_info_pane_g

0xe060,	// (0x00073eca) sc_clock_pane_t5_ParamLimits

0xe060,	// (0x00073eca) sc_clock_pane_t5

0xe107,	// (0x00073f71) main_radioblah_pane_g1_ParamLimits

0x5395,	// (0x0006b1ff) main_radioblah_pane_t3_ParamLimits

0x5395,	// (0x0006b1ff) main_radioblah_pane_t3

0x53ad,	// (0x0006b217) main_radioblah_pane_t4_ParamLimits

0x53ad,	// (0x0006b217) main_radioblah_pane_t4

0xe125,	// (0x00073f8f) main_radioblah_text_pane_ParamLimits

0xe125,	// (0x00073f8f) main_radioblah_text_pane

0xe132,	// (0x00073f9c) main_radioblah_info_pane_g1_ParamLimits

0xe1c7,	// (0x00074031) main_radioblah_info_pane_t4_ParamLimits

0xe1c7,	// (0x00074031) main_radioblah_info_pane_t4

0x2890,	// (0x000686fa) main_sp_fs_calendar_pane

0xe56b,	// (0x000743d5) main_phacti_pane_g1

0xe573,	// (0x000743dd) phacti_note_pane_ParamLimits

0xe573,	// (0x000743dd) phacti_note_pane

0x56ec,	// (0x0006b556) phacti_term_pane_ParamLimits

0x56ec,	// (0x0006b556) phacti_term_pane

0x5701,	// (0x0006b56b) phacti_note_pane_t1_ParamLimits

0x5701,	// (0x0006b56b) phacti_note_pane_t1

0x7318,	// (0x0006d182) phacti_term_pane_g1

0x7320,	// (0x0006d18a) phacti_term_pane_t1_ParamLimits

0x7320,	// (0x0006d18a) phacti_term_pane_t1

0x5718,	// (0x0006b582) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0ab7,	// (0x00066921) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdba,	// (0x00075c24) popup_sp_fs_calendar_preview_list_single_pane_g

0x5720,	// (0x0006b58a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x5720,	// (0x0006b58a) popup_sp_fs_calendar_preview_list_single_pane_t1

0x5735,	// (0x0006b59f) aid_popup_sp_fs_bg_corner_pane

0x2d96,	// (0x00068c00) popup_sp_fs_calendar_preview_bg_pane_g1

0x7688,	// (0x0006d4f2) popup_sp_fs_calendar_preview_bg_pane

0x573d,	// (0x0006b5a7) popup_sp_fs_calendar_preview_list_pane

0x2890,	// (0x000686fa) bg_main_sp_fs_cale_pane_ParamLimits

0x2890,	// (0x000686fa) bg_main_sp_fs_cale_pane

0x734a,	// (0x0006d1b4) listscroll_cale_mrui_pane_ParamLimits

0x734a,	// (0x0006d1b4) listscroll_cale_mrui_pane

0x735e,	// (0x0006d1c8) listscroll_sp_fs_schedule_track_pane

0x7367,	// (0x0006d1d1) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x7367,	// (0x0006d1d1) main_sp_fs_ctrlbar_pane_cp01

0x5745,	// (0x0006b5af) main_sp_fs_ribbon_pane

0xf00f,	// (0x00074e79) popup_sp_fs_cale_preview_window

0xe5ba,	// (0x00074424) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe5ba,	// (0x00074424) list_single_sp_fs_schedule_track_pane

0x7937,	// (0x0006d7a1) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x7937,	// (0x0006d7a1) bg_sp_fs_highlight_list_pane_cp03

0xe5d9,	// (0x00074443) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe5d9,	// (0x00074443) list_single_sp_fs_schedule_track_pane_g1

0xe5e5,	// (0x0007444f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe5e5,	// (0x0007444f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdbf,	// (0x00075c29) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdbf,	// (0x00075c29) list_single_sp_fs_schedule_track_pane_g

0xe5f1,	// (0x0007445b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe5f1,	// (0x0007445b) list_single_sp_fs_schedule_track_pane_t1

0xe609,	// (0x00074473) sp_fs_schedule_track_pane_ParamLimits

0xe609,	// (0x00074473) sp_fs_schedule_track_pane

0xf021,	// (0x00074e8b) sp_fs_schedule_track_pane_g1

0xf029,	// (0x00074e93) sp_fs_schedule_track_pane_g2

0xf031,	// (0x00074e9b) sp_fs_schedule_track_pane_g3

0xf039,	// (0x00074ea3) sp_fs_schedule_track_pane_g4

0xf041,	// (0x00074eab) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc4,	// (0x00075c2e) sp_fs_schedule_track_pane_g

0x44ba,	// (0x0006a324) bg_sp_fs_schedule_viewer_highlight_g1

0x0cb6,	// (0x00066b20) bg_sp_fs_schedule_viewer_highlight_g2

0x44c2,	// (0x0006a32c) bg_sp_fs_schedule_viewer_highlight_g3

0x44ca,	// (0x0006a334) bg_sp_fs_schedule_viewer_highlight_g4

0x46de,	// (0x0006a548) bg_sp_fs_schedule_viewer_highlight_g5

0x44da,	// (0x0006a344) bg_sp_fs_schedule_viewer_highlight_g6

0x44e2,	// (0x0006a34c) bg_sp_fs_schedule_viewer_highlight_g7

0x44ea,	// (0x0006a354) bg_sp_fs_schedule_viewer_highlight_g8

0x0c96,	// (0x00066b00) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdcf,	// (0x00075c39) bg_sp_fs_schedule_viewer_highlight_g

0x7688,	// (0x0006d4f2) bg_main_sp_fs_ribbon_pane

0xe619,	// (0x00074483) main_sp_fs_ribbon_pane_g1

0xf049,	// (0x00074eb3) main_sp_fs_ribbon_pane_t1

0xe622,	// (0x0007448c) main_sp_fs_ribbon_pane_t2

0xf058,	// (0x00074ec2) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde2,	// (0x00075c4c) main_sp_fs_ribbon_pane_t

0xf067,	// (0x00074ed1) main_sp_fs_ribbon_scheduler_pane

0xf06f,	// (0x00074ed9) bg_main_sp_fs_ribbon_pane_g1

0xf078,	// (0x00074ee2) bg_main_sp_fs_ribbon_pane_g2

0xf081,	// (0x00074eeb) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde9,	// (0x00075c53) bg_main_sp_fs_ribbon_pane_g

0xf089,	// (0x00074ef3) main_sp_fs_ribbon_scheduler_pane_g1

0xf092,	// (0x00074efc) main_sp_fs_ribbon_scheduler_pane_g2

0xf09b,	// (0x00074f05) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf0,	// (0x00075c5a) main_sp_fs_ribbon_scheduler_pane_g

0xf0a4,	// (0x00074f0e) list_cale_mrui_pane

0xe631,	// (0x0007449b) sp_fs_scroll_pane_cp07_ParamLimits

0xe631,	// (0x0007449b) sp_fs_scroll_pane_cp07

0xe647,	// (0x000744b1) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe647,	// (0x000744b1) bg_sp_fs_schedule_viewer_highlight

0xf0ad,	// (0x00074f17) list_single_sp_fs_schedule_track_pane_cp01

0xf0b5,	// (0x00074f1f) list_sp_fs_schedule_track_pane

0xf0bd,	// (0x00074f27) sp_fs_scroll_pane_cp06_ParamLimits

0xf0bd,	// (0x00074f27) sp_fs_scroll_pane_cp06

0x2d96,	// (0x00068c00) bgmain_sp_fs_calendar_pane_g1

0x7378,	// (0x0006d1e2) list_single_cale_mrui_pane_ParamLimits

0x7378,	// (0x0006d1e2) list_single_cale_mrui_pane

0x73a0,	// (0x0006d20a) list_single_cale_mrui_row_pane_ParamLimits

0x73a0,	// (0x0006d20a) list_single_cale_mrui_row_pane

0x73ad,	// (0x0006d217) list_single_cale_mrui_row_pane_g1_ParamLimits

0x73ad,	// (0x0006d217) list_single_cale_mrui_row_pane_g1

0x73e5,	// (0x0006d24f) list_single_cale_mrui_row_pane_t1_ParamLimits

0x73e5,	// (0x0006d24f) list_single_cale_mrui_row_pane_t1

0x73f7,	// (0x0006d261) list_single_cale_mrui_row_pane_t2_ParamLimits

0x73f7,	// (0x0006d261) list_single_cale_mrui_row_pane_t2

0x745d,	// (0x0006d2c7) list_single_cale_mrui_row_pane_t3_ParamLimits

0x745d,	// (0x0006d2c7) list_single_cale_mrui_row_pane_t3

0x748c,	// (0x0006d2f6) list_single_cale_mrui_row_pane_t4_ParamLimits

0x748c,	// (0x0006d2f6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdfe,	// (0x00075c68) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdfe,	// (0x00075c68) list_single_cale_mrui_row_pane_t

0x74bb,	// (0x0006d325) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x74bb,	// (0x0006d325) list_single_cmail_header_editor_pane_bg_cp01

0x74db,	// (0x0006d345) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x74db,	// (0x0006d345) list_single_cmail_header_editor_pane_bg_cp02

0xe654,	// (0x000744be) main_radioblah_text_pane_t1_ParamLimits

0xe654,	// (0x000744be) main_radioblah_text_pane_t1

0x3848,	// (0x000696b2) cam6_indi_pane_cp01

0x3850,	// (0x000696ba) cam6_mode_pane_cp01

0x3858,	// (0x000696c2) cam6_pano_pane

0x3861,	// (0x000696cb) cam6_zoom_pane_cp01

0x3869,	// (0x000696d3) cam6_pano_image_pane

0x3874,	// (0x000696de) cam6_pano_pane_g1

0x50f7,	// (0x0006af61) cam6_pano_pane_g2

0x387d,	// (0x000696e7) cam6_pano_pane_g3

0x3886,	// (0x000696f0) cam6_pano_pane_g4

0x3338,	// (0x000691a2) cam6_pano_pane_g5

0x388f,	// (0x000696f9) cam6_pano_pane_g6

0x3899,	// (0x00069703) cam6_pano_pane_g7

0x38a1,	// (0x0006970b) cam6_pano_pane_g8

0x38aa,	// (0x00069714) cam6_pano_pane_g9

0x0008,

0xfe07,	// (0x00075c71) cam6_pano_pane_g

0x7688,	// (0x0006d4f2) main_browser_tag_pane

0x56cd,	// (0x0006b537) grid_navstr_albumart_pane

0x38b5,	// (0x0006971f) cell_navstr_albumart_pane_ParamLimits

0x38b5,	// (0x0006971f) cell_navstr_albumart_pane

0x38d8,	// (0x00069742) cell_navstr_albumart_pane_g1

0x269f,	// (0x00068509) cell_navstr_albumart_pane_g2

0x26af,	// (0x00068519) cell_navstr_albumart_pane_g3

0x26a7,	// (0x00068511) cell_navstr_albumart_pane_g4

0x0003,

0xfe1a,	// (0x00075c84) cell_navstr_albumart_pane_g

0xe66f,	// (0x000744d9) bt_list_pane_ParamLimits

0xe66f,	// (0x000744d9) bt_list_pane

0xe68f,	// (0x000744f9) bt_list_pane_t1

0xe69e,	// (0x00074508) bt_list_pane_t2

0x0001,

0xfe23,	// (0x00075c8d) bt_list_pane_t

0x7688,	// (0x0006d4f2) main_cale_prevew_pane

0xe6ad,	// (0x00074517) popup_cale_preview_window_ParamLimits

0xe6ad,	// (0x00074517) popup_cale_preview_window

0x2890,	// (0x000686fa) bg_popup_preview_window_pane_cp05_ParamLimits

0x2890,	// (0x000686fa) bg_popup_preview_window_pane_cp05

0x38e0,	// (0x0006974a) list_cale_preview_pane_ParamLimits

0x38e0,	// (0x0006974a) list_cale_preview_pane

0xe6c6,	// (0x00074530) list_double_cale_preview_pane_ParamLimits

0xe6c6,	// (0x00074530) list_double_cale_preview_pane

0xe6d8,	// (0x00074542) list_single_cale_preview_pane_ParamLimits

0xe6d8,	// (0x00074542) list_single_cale_preview_pane

0xe6ee,	// (0x00074558) list_single_cale_preview_pane_g1

0xe6f6,	// (0x00074560) list_single_cale_preview_pane_t1_ParamLimits

0xe6f6,	// (0x00074560) list_single_cale_preview_pane_t1

0xe70b,	// (0x00074575) list_double_cale_preview_pane_g1

0xe713,	// (0x0007457d) list_double_cale_preview_pane_t1_ParamLimits

0xe713,	// (0x0007457d) list_double_cale_preview_pane_t1

0xe728,	// (0x00074592) list_double_cale_preview_pane_t2_ParamLimits

0xe728,	// (0x00074592) list_double_cale_preview_pane_t2

0x0001,

0xfe28,	// (0x00075c92) list_double_cale_preview_pane_t_ParamLimits

0xfe28,	// (0x00075c92) list_double_cale_preview_pane_t

0x7688,	// (0x0006d4f2) main_ezdial_pane

0x2890,	// (0x000686fa) main_sp_fs_email_pane_ParamLimits

0xe32d,	// (0x00074197) cmail_ddmenu_btn01_pane_ParamLimits

0xe32d,	// (0x00074197) cmail_ddmenu_btn01_pane

0xe34a,	// (0x000741b4) cmail_ddmenu_btn02_pane_ParamLimits

0xe34a,	// (0x000741b4) cmail_ddmenu_btn02_pane

0xe368,	// (0x000741d2) cmail_ddmenu_btn03_pane_ParamLimits

0xe368,	// (0x000741d2) cmail_ddmenu_btn03_pane

0x6da6,	// (0x0006cc10) main_sp_fs_ctrlbar_pane_ParamLimits

0x6dc0,	// (0x0006cc2a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe466,	// (0x000742d0) list_cmail_body_pane_ParamLimits

0x564d,	// (0x0006b4b7) bg_button_pane_cp12

0x5656,	// (0x0006b4c0) list_single_cmail_header_detail_pane_g3_ParamLimits

0x5656,	// (0x0006b4c0) list_single_cmail_header_detail_pane_g3

0x72e2,	// (0x0006d14c) list_single_cmail_header_detail_pane_t2_ParamLimits

0x72e2,	// (0x0006d14c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdab,	// (0x00075c15) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdab,	// (0x00075c15) list_single_cmail_header_detail_pane_t

0x7335,	// (0x0006d19f) phacti_term_pane_t2_ParamLimits

0x7335,	// (0x0006d19f) phacti_term_pane_t2

0x0001,

0xfdb5,	// (0x00075c1f) phacti_term_pane_t_ParamLimits

0xfdb5,	// (0x00075c1f) phacti_term_pane_t

0x38ec,	// (0x00069756) aid_size_list_single_double

0xe740,	// (0x000745aa) popup_ezdial_listscroll_window

0xe761,	// (0x000745cb) popup_number_entry_window_cp01

0x1440,	// (0x000672aa) bg_popup_call_pane_cp09

0x38f8,	// (0x00069762) ezdial_list_pane

0x3900,	// (0x0006976a) scroll_pane_cp23

0x2b7b,	// (0x000689e5) bg_button_pane_cp028_ParamLimits

0x2b7b,	// (0x000689e5) bg_button_pane_cp028

0xe76f,	// (0x000745d9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe76f,	// (0x000745d9) cmail_ddmenu_btn01_pane_g1

0xe781,	// (0x000745eb) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe781,	// (0x000745eb) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2d,	// (0x00075c97) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2d,	// (0x00075c97) cmail_ddmenu_btn01_pane_g

0x3908,	// (0x00069772) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3908,	// (0x00069772) cmail_ddmenu_btn01_pane_t1

0x2882,	// (0x000686ec) bg_button_pane_cp029_ParamLimits

0x2882,	// (0x000686ec) bg_button_pane_cp029

0xe781,	// (0x000745eb) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe781,	// (0x000745eb) cmail_ddmenu_btn02_pane_g1

0xe799,	// (0x00074603) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe799,	// (0x00074603) cmail_ddmenu_btn02_pane_t1

0x7937,	// (0x0006d7a1) bg_button_pane_cp031_ParamLimits

0x7937,	// (0x0006d7a1) bg_button_pane_cp031

0xe781,	// (0x000745eb) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe781,	// (0x000745eb) cmail_ddmenu_btn03_pane_g1

0xe799,	// (0x00074603) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe799,	// (0x00074603) cmail_ddmenu_btn03_pane_t1

0xc243,	// (0x000720ad) cell_dialer2_keypad_pane_t1_ParamLimits

0xc25d,	// (0x000720c7) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc25d,	// (0x000720c7) cell_dialer2_keypad_pane_t1_copy1

0xdd1b,	// (0x00073b85) ncimui_group_button_pane

0x2890,	// (0x000686fa) main_sp_fs_calendar_pane_ParamLimits

0xe480,	// (0x000742ea) list_single_cmail_header_caption_pane_ParamLimits

0x4958,	// (0x0006a7c2) aid_recal_txt_sm_pane

0x7688,	// (0x0006d4f2) mian_recal_day_pane

0xf00f,	// (0x00074e79) popup_sp_fs_cale_preview_window_ParamLimits

0x7688,	// (0x0006d4f2) list_recal_day_pane

0x3937,	// (0x000697a1) list_single_recal_day_pane_ParamLimits

0x3937,	// (0x000697a1) list_single_recal_day_pane

0x3949,	// (0x000697b3) list_single_recal_day_pane_g1_ParamLimits

0x3949,	// (0x000697b3) list_single_recal_day_pane_g1

0x3955,	// (0x000697bf) list_single_recal_day_pane_g2_ParamLimits

0x3955,	// (0x000697bf) list_single_recal_day_pane_g2

0x3965,	// (0x000697cf) list_single_recal_day_pane_g3_ParamLimits

0x3965,	// (0x000697cf) list_single_recal_day_pane_g3

0xe7bd,	// (0x00074627) list_single_recal_day_pane_g4_ParamLimits

0xe7bd,	// (0x00074627) list_single_recal_day_pane_g4

0x3971,	// (0x000697db) list_single_recal_day_pane_g5_ParamLimits

0x3971,	// (0x000697db) list_single_recal_day_pane_g5

0x3981,	// (0x000697eb) list_single_recal_day_pane_g6_ParamLimits

0x3981,	// (0x000697eb) list_single_recal_day_pane_g6

0x0004,

0xfe3c,	// (0x00075ca6) list_single_recal_day_pane_g_ParamLimits

0xfe3c,	// (0x00075ca6) list_single_recal_day_pane_g

0x3998,	// (0x00069802) list_single_recal_day_pane_t1

0x39aa,	// (0x00069814) list_single_recal_day_pane_t2

0x0001,

0xfe47,	// (0x00075cb1) list_single_recal_day_pane_t

0xe7dd,	// (0x00074647) ncimui_query_button_pane_ParamLimits

0xe7dd,	// (0x00074647) ncimui_query_button_pane

0xe7ed,	// (0x00074657) ncimui_query_button_pane_t1_ParamLimits

0xe7ed,	// (0x00074657) ncimui_query_button_pane_t1

0x39bf,	// (0x00069829) ncimui_query_button_pane_t2_ParamLimits

0x39bf,	// (0x00069829) ncimui_query_button_pane_t2

0x0001,

0xfe4c,	// (0x00075cb6) ncimui_query_button_pane_t_ParamLimits

0xfe4c,	// (0x00075cb6) ncimui_query_button_pane_t

0xe800,	// (0x0007466a) query_button_pane_ParamLimits

0xe800,	// (0x0007466a) query_button_pane

0x7688,	// (0x0006d4f2) bg_button_pane_cp0028

0x39d2,	// (0x0006983c) query_button_pane_t1

0xa639,	// (0x000704a3) main_tport_pane_ParamLimits

0xe396,	// (0x00074200) bg_popup_window_pane_cp01_ParamLimits

0xe396,	// (0x00074200) bg_popup_window_pane_cp01

0xe3a3,	// (0x0007420d) heading_pane_cp08_ParamLimits

0xe3a3,	// (0x0007420d) heading_pane_cp08

0xe3b1,	// (0x0007421b) heading_pane_cp07_ParamLimits

0xe3b1,	// (0x0007421b) heading_pane_cp07

0x560f,	// (0x0006b479) cell_tport_appsw_pane_g2

0x0002,

0xfd98,	// (0x00075c02) cell_tport_appsw_pane_g

0x6719,	// (0x0006c583) input_candi_list_open_g1

0x0e8b,	// (0x00066cf5) list_cale_time_pane_g6_ParamLimits

0x0e8b,	// (0x00066cf5) list_cale_time_pane_g6

0xb0b9,	// (0x00070f23) aid_size_touch_calib_1_ParamLimits

0xb0b9,	// (0x00070f23) aid_size_touch_calib_1

0xb0c5,	// (0x00070f2f) aid_size_touch_calib_2_ParamLimits

0xb0c5,	// (0x00070f2f) aid_size_touch_calib_2

0xb0d3,	// (0x00070f3d) aid_size_touch_calib_3_ParamLimits

0xb0d3,	// (0x00070f3d) aid_size_touch_calib_3

0xb0e3,	// (0x00070f4d) aid_size_touch_calib_4_ParamLimits

0xb0e3,	// (0x00070f4d) aid_size_touch_calib_4

0xb0f1,	// (0x00070f5b) main_touch_calib_button_group_pane_ParamLimits

0xb0f1,	// (0x00070f5b) main_touch_calib_button_group_pane

0xb0ff,	// (0x00070f69) main_touch_calib_pane_g1_ParamLimits

0xb10b,	// (0x00070f75) main_touch_calib_pane_g2_ParamLimits

0xb117,	// (0x00070f81) main_touch_calib_pane_g3_ParamLimits

0xb123,	// (0x00070f8d) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x000755cb) main_touch_calib_pane_g_ParamLimits

0xb12f,	// (0x00070f99) main_touch_calib_pane_t1_ParamLimits

0xb146,	// (0x00070fb0) main_touch_calib_pane_t2_ParamLimits

0xb15d,	// (0x00070fc7) main_touch_calib_pane_t3_ParamLimits

0xb171,	// (0x00070fdb) main_touch_calib_pane_t4_ParamLimits

0xb185,	// (0x00070fef) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x000755d4) main_touch_calib_pane_t_ParamLimits

0x310e,	// (0x00068f78) list_single_fp_cale_pane_g3_ParamLimits

0x310e,	// (0x00068f78) list_single_fp_cale_pane_g3

0x2890,	// (0x000686fa) bg_button_pane_cp012_ParamLimits

0x2890,	// (0x000686fa) bg_vkb2_func_pane_cp03_ParamLimits

0xd00b,	// (0x00072e75) cell_vitu2_function_top_pane_g1_ParamLimits

0x2890,	// (0x000686fa) bg_vkb2_func_pane_cp04_ParamLimits

0xdca3,	// (0x00073b0d) main_ncimui_button_group_pane_ParamLimits

0xdca3,	// (0x00073b0d) main_ncimui_button_group_pane

0xdd09,	// (0x00073b73) main_ncimui_pane_t3_ParamLimits

0xdd09,	// (0x00073b73) main_ncimui_pane_t3

0x56e3,	// (0x0006b54d) phacti_button_group_pane

0x38ec,	// (0x00069756) aid_size_list_single_double_ParamLimits

0xe740,	// (0x000745aa) popup_ezdial_listscroll_window_ParamLimits

0xe761,	// (0x000745cb) popup_number_entry_window_cp01_ParamLimits

0xe80d,	// (0x00074677) phacti_button_pane_ParamLimits

0xe80d,	// (0x00074677) phacti_button_pane

0x7688,	// (0x0006d4f2) bg_button_pane_cp14

0x39e0,	// (0x0006984a) phacti_button_pane_t1

0xe81e,	// (0x00074688) main_touch_calib_button_pane_ParamLimits

0xe81e,	// (0x00074688) main_touch_calib_button_pane

0x0846,	// (0x000666b0) bg_button_pane_cp18_ParamLimits

0x0846,	// (0x000666b0) bg_button_pane_cp18

0x39ee,	// (0x00069858) main_touch_calib_button_pane_t1_ParamLimits

0x39ee,	// (0x00069858) main_touch_calib_button_pane_t1

0x3a04,	// (0x0006986e) main_touch_calib_button_pane_t2_ParamLimits

0x3a04,	// (0x0006986e) main_touch_calib_button_pane_t2

0x0001,

0xfe51,	// (0x00075cbb) main_touch_calib_button_pane_t_ParamLimits

0xfe51,	// (0x00075cbb) main_touch_calib_button_pane_t

0x7688,	// (0x0006d4f2) cell_ncimui_button_pane

0x7688,	// (0x0006d4f2) bg_button_pane_cp032

0x3a22,	// (0x0006988c) cell_ncimui_button_pane_t1

0xc2b9,	// (0x00072123) image3_infobar_pane_ParamLimits

0xc2b9,	// (0x00072123) image3_infobar_pane

0xe082,	// (0x00073eec) fs_bigclock_status_pane_ParamLimits

0xe082,	// (0x00073eec) fs_bigclock_status_pane

0xe08f,	// (0x00073ef9) main_fs_bigclock_clock_pane_ParamLimits

0xe08f,	// (0x00073ef9) main_fs_bigclock_clock_pane

0xe0a5,	// (0x00073f0f) main_fs_bigclock_indi_pane_ParamLimits

0xe0a5,	// (0x00073f0f) main_fs_bigclock_indi_pane

0xe0d5,	// (0x00073f3f) main_fs_bigclock_swipe_pane_ParamLimits

0xe0d5,	// (0x00073f3f) main_fs_bigclock_swipe_pane

0x7688,	// (0x0006d4f2) main_fs_clock_dumped_data

0x5204,	// (0x0006b06e) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x5204,	// (0x0006b06e) list_single_fs_bigclock_indicator_pane_g1

0x522a,	// (0x0006b094) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x522a,	// (0x0006b094) list_single_fs_bigclock_indicator_pane_g2

0x5244,	// (0x0006b0ae) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x5244,	// (0x0006b0ae) list_single_fs_bigclock_indicator_pane_g3

0x525e,	// (0x0006b0c8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x525e,	// (0x0006b0c8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7f,	// (0x00075ae9) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7f,	// (0x00075ae9) list_single_fs_bigclock_indicator_pane_g

0x5287,	// (0x0006b0f1) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x5287,	// (0x0006b0f1) list_single_fs_bigclock_indicator_pane_t1

0x52af,	// (0x0006b119) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x52af,	// (0x0006b119) list_single_fs_bigclock_indicator_pane_t2

0x52d7,	// (0x0006b141) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x52d7,	// (0x0006b141) list_single_fs_bigclock_indicator_pane_t3

0x52ff,	// (0x0006b169) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x52ff,	// (0x0006b169) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8a,	// (0x00075af4) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8a,	// (0x00075af4) list_single_fs_bigclock_indicator_pane_t

0x3a30,	// (0x0006989a) image3_infobar_fav_pane_ParamLimits

0x3a30,	// (0x0006989a) image3_infobar_fav_pane

0x3a40,	// (0x000698aa) image3_infobar_loc_pane_ParamLimits

0x3a40,	// (0x000698aa) image3_infobar_loc_pane

0x3a54,	// (0x000698be) image3_infobar_time_pane_ParamLimits

0x3a54,	// (0x000698be) image3_infobar_time_pane

0x2d96,	// (0x00068c00) image3_infobar_time_pane_g1

0x3a64,	// (0x000698ce) image3_infobar_time_pane_t1

0x2d96,	// (0x00068c00) image3_infobar_loc_pane_g1

0x3a72,	// (0x000698dc) image3_infobar_loc_pane_g2

0x0001,

0xfe56,	// (0x00075cc0) image3_infobar_loc_pane_g

0x3a7a,	// (0x000698e4) image3_infobar_loc_pane_t1

0x2d96,	// (0x00068c00) image3_infobar_fav_pane_g1

0x3a88,	// (0x000698f2) image3_infobar_fav_pane_g2

0x0001,

0xfe5b,	// (0x00075cc5) image3_infobar_fav_pane_g

0x3a90,	// (0x000698fa) fs_bigclock_status_battery_pane

0x3a99,	// (0x00069903) fs_bigclock_status_signal_pane

0x3aa2,	// (0x0006990c) fs_bigclock_status_title_pane

0x3aab,	// (0x00069915) fs_bigclock_status_signal_pane_g1

0x3ab4,	// (0x0006991e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe60,	// (0x00075cca) fs_bigclock_status_signal_pane_g

0x3abc,	// (0x00069926) fs_bigclock_status_battery_pane_g1

0x3ac5,	// (0x0006992f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe65,	// (0x00075ccf) fs_bigclock_status_battery_pane_g

0x3acd,	// (0x00069937) fs_bigclock_status_title_pane_t1

0x2d96,	// (0x00068c00) main_fs_bigclock_clock_pane_g1

0x3adb,	// (0x00069945) main_fs_bigclock_clock_pane_g2

0x3adb,	// (0x00069945) main_fs_bigclock_clock_pane_g3

0x3adb,	// (0x00069945) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6a,	// (0x00075cd4) main_fs_bigclock_clock_pane_g

0x3ae3,	// (0x0006994d) main_fs_bigclock_clock_pane_t1

0x3af1,	// (0x0006995b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe73,	// (0x00075cdd) main_fs_bigclock_clock_pane_t

0x3b00,	// (0x0006996a) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3b00,	// (0x0006996a) list_single_fs_bigclock_indicator_pane

0xe830,	// (0x0007469a) list_single_fs_bigclock_pane_ParamLimits

0xe830,	// (0x0007469a) list_single_fs_bigclock_pane

0x3b1a,	// (0x00069984) main_fs_bigclock_indicator_pane_t1

0x3b29,	// (0x00069993) list_single_fs_bigclock_pane_g1

0x3b31,	// (0x0006999b) list_single_fs_bigclock_pane_t1

0x2d96,	// (0x00068c00) main_fs_bigclock_swipe_pane_g1

0x3b74,	// (0x000699de) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe84,	// (0x00075cee) main_fs_bigclock_swipe_pane_g

0x3b7c,	// (0x000699e6) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3b7c,	// (0x000699e6) main_fs_bigclock_swipe_pane_t1

0x95c9,	// (0x0006f433) call_type_pane_ParamLimits

0x7688,	// (0x0006d4f2) main_btmg_pane

0x73d9,	// (0x0006d243) list_single_cale_mrui_row_pane_g2_ParamLimits

0x73d9,	// (0x0006d243) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf7,	// (0x00075c61) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf7,	// (0x00075c61) list_single_cale_mrui_row_pane_g

0x3927,	// (0x00069791) list_recal_vselct_arw_lo_pane

0x392f,	// (0x00069799) list_recal_vselct_arw_up_pane

0xf0cf,	// (0x00074f39) list_recal_vselct_pane

0xe891,	// (0x000746fb) btmg_button_pane

0xe89d,	// (0x00074707) main_btmg_pane_g1

0x7688,	// (0x0006d4f2) bg_button_pane_cp044

0x3b99,	// (0x00069a03) btmg_button_pane_t1

0x287a,	// (0x000686e4) aid_listscroll_gen

0x2890,	// (0x000686fa) main_cntbar_detail_pane

0x562d,	// (0x0006b497) list_cmail_folder_pane

0x563d,	// (0x0006b4a7) sp_fs_scroll_pane_cp03_ParamLimits

0x74f7,	// (0x0006d361) list_single_fs_dyc_pane_cp01_ParamLimits

0x74f7,	// (0x0006d361) list_single_fs_dyc_pane_cp01

0x3ba7,	// (0x00069a11) aid_size_cmail_indent

0x7519,	// (0x0006d383) list_single_dyc_row_pane_cp01

0xe8c5,	// (0x0007472f) cntbar_detail_list_pane_ParamLimits

0xe8c5,	// (0x0007472f) cntbar_detail_list_pane

0xe8ff,	// (0x00074769) main_cntbar_detail_cont_pane_ParamLimits

0xe8ff,	// (0x00074769) main_cntbar_detail_cont_pane

0x95bd,	// (0x0006f427) scroll_pane_cp032_ParamLimits

0x95bd,	// (0x0006f427) scroll_pane_cp032

0xe90b,	// (0x00074775) cntbar_detail_list_event_pane_ParamLimits

0xe90b,	// (0x00074775) cntbar_detail_list_event_pane

0xe8d1,	// (0x0007473b) cntbar_detail_list_shct_pane

0x0d04,	// (0x00066b6e) aid_list_gen

0x3bb9,	// (0x00069a23) aid_scroll

0x3bc2,	// (0x00069a2c) aid_size_touch_scroll_bar

0x7522,	// (0x0006d38c) aid_list_double

0x3bcb,	// (0x00069a35) aid_list_single

0xe91f,	// (0x00074789) aid_list_single_lg

0x752b,	// (0x0006d395) aid_list_z_g_a_sm

0xe928,	// (0x00074792) aid_list_z_g_d

0x7533,	// (0x0006d39d) aid_txt_z_prm

0x7541,	// (0x0006d3ab) aid_txt_z_prm_cp01

0x754f,	// (0x0006d3b9) aid_txt_z_sec

0xe930,	// (0x0007479a) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe930,	// (0x0007479a) main_cntbar_detail_cont_pane_g1

0xe93d,	// (0x000747a7) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe93d,	// (0x000747a7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe89,	// (0x00075cf3) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe89,	// (0x00075cf3) main_cntbar_detail_cont_pane_g

0x3bf2,	// (0x00069a5c) main_cntbar_detail_cont_pane_t1

0x3c00,	// (0x00069a6a) main_cntbar_detail_cont_pane_t2

0x3c0e,	// (0x00069a78) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe8e,	// (0x00075cf8) main_cntbar_detail_cont_pane_t

0xe949,	// (0x000747b3) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe949,	// (0x000747b3) cell_cntbar_detail_list_shct_pane

0x3c1c,	// (0x00069a86) cntbar_detail_list_shct_pane_g1

0x3c25,	// (0x00069a8f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe95,	// (0x00075cff) cntbar_detail_list_shct_pane_g

0xe95d,	// (0x000747c7) cntbar_detail_list_event_pane_g1_ParamLimits

0xe95d,	// (0x000747c7) cntbar_detail_list_event_pane_g1

0xe969,	// (0x000747d3) cntbar_detail_list_event_pane_g2_ParamLimits

0xe969,	// (0x000747d3) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9a,	// (0x00075d04) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9a,	// (0x00075d04) cntbar_detail_list_event_pane_g

0xe9d5,	// (0x0007483f) cntbar_detail_list_event_pane_t1_ParamLimits

0xe9d5,	// (0x0007483f) cntbar_detail_list_event_pane_t1

0xe9ea,	// (0x00074854) cntbar_detail_list_event_pane_t2_ParamLimits

0xe9ea,	// (0x00074854) cntbar_detail_list_event_pane_t2

0x0002,

0xfea7,	// (0x00075d11) cntbar_detail_list_event_pane_t_ParamLimits

0xfea7,	// (0x00075d11) cntbar_detail_list_event_pane_t

0x2d96,	// (0x00068c00) cell_cntbar_detail_list_shct_pane_g1

0x9979,	// (0x0006f7e3) navi_pane_mv_g3

0x2890,	// (0x000686fa) main_cntbar_detail_pane_ParamLimits

0x7688,	// (0x0006d4f2) main_notif_wgt_pane

0xbf6d,	// (0x00071dd7) aid_tch_main_mp4_pane_g4

0xc1a2,	// (0x0007200c) popup_slider_window_cp02

0x391d,	// (0x00069787) list_recal_day_event_pane

0xe8a5,	// (0x0007470f) cntbar_detail_btn_pane_ParamLimits

0xe8a5,	// (0x0007470f) cntbar_detail_btn_pane

0xe8b5,	// (0x0007471f) cntbar_detail_btn_pane_cp01_ParamLimits

0xe8b5,	// (0x0007471f) cntbar_detail_btn_pane_cp01

0xe8d1,	// (0x0007473b) cntbar_detail_list_shct_pane_ParamLimits

0xe8dd,	// (0x00074747) cntbar_detail_pane_g1_ParamLimits

0xe8dd,	// (0x00074747) cntbar_detail_pane_g1

0xe8e9,	// (0x00074753) cntbar_detail_pane_t1_ParamLimits

0xe8e9,	// (0x00074753) cntbar_detail_pane_t1

0xe975,	// (0x000747df) cntbar_detail_list_event_pane_g3_ParamLimits

0xe975,	// (0x000747df) cntbar_detail_list_event_pane_g3

0xe98d,	// (0x000747f7) cntbar_detail_list_event_pane_g4_ParamLimits

0xe98d,	// (0x000747f7) cntbar_detail_list_event_pane_g4

0xe9a5,	// (0x0007480f) cntbar_detail_list_event_pane_g5_ParamLimits

0xe9a5,	// (0x0007480f) cntbar_detail_list_event_pane_g5

0xe9bd,	// (0x00074827) cntbar_detail_list_event_pane_g6_ParamLimits

0xe9bd,	// (0x00074827) cntbar_detail_list_event_pane_g6

0xe9ff,	// (0x00074869) cntbar_detail_list_event_pane_t3_ParamLimits

0xe9ff,	// (0x00074869) cntbar_detail_list_event_pane_t3

0xea11,	// (0x0007487b) popup_notif_wgt_window_ParamLimits

0xea11,	// (0x0007487b) popup_notif_wgt_window

0xea21,	// (0x0007488b) popup_submenu_window_cp01_ParamLimits

0xea21,	// (0x0007488b) popup_submenu_window_cp01

0x1440,	// (0x000672aa) bg_popup_window_pane_cp10

0x3c2e,	// (0x00069a98) listscroll_notif_wgt_pane

0x3c3f,	// (0x00069aa9) list_notif_wgt_window

0x3c48,	// (0x00069ab2) scroll_pane_cp033

0xe6c6,	// (0x00074530) list_notif_wgt_row_pane_ParamLimits

0xe6c6,	// (0x00074530) list_notif_wgt_row_pane

0x3c51,	// (0x00069abb) aid_size_list_notif_wgt_del

0x3c5e,	// (0x00069ac8) list_notif_wgt_row_pane_g1

0x3c6a,	// (0x00069ad4) list_notif_wgt_row_pane_g2

0x3c76,	// (0x00069ae0) list_notif_wgt_row_pane_g3

0x0002,

0xfeae,	// (0x00075d18) list_notif_wgt_row_pane_g

0x3c83,	// (0x00069aed) list_notif_wgt_row_pane_t1

0x3c98,	// (0x00069b02) list_notif_wgt_row_pane_t2

0x3caa,	// (0x00069b14) list_notif_wgt_row_pane_t3

0x0002,

0xfeb5,	// (0x00075d1f) list_notif_wgt_row_pane_t

0x46f8,	// (0x0006a562) list_recal_day_event_pane_g1

0x3cbc,	// (0x00069b26) list_recal_day_event_pane_t1

0x7688,	// (0x0006d4f2) bg_button_pane_cp045

0x3ccb,	// (0x00069b35) cntbar_detail_btn_pane_t1

0x2882,	// (0x000686ec) main_callh_pane_ParamLimits

0x2882,	// (0x000686ec) main_callh_pane

0x7688,	// (0x0006d4f2) main_coverflow0_pane

0x7688,	// (0x0006d4f2) main_wgtman_pane

0xe0ed,	// (0x00073f57) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xe0ed,	// (0x00073f57) main_fs_bigclock_unlock_btn_pane

0x5607,	// (0x0006b471) bg_button_pane_cp16

0x5617,	// (0x0006b481) cell_tport_appsw_pane_g3

0xea2f,	// (0x00074899) cf0_flow_pane_ParamLimits

0xea2f,	// (0x00074899) cf0_flow_pane

0x3cd9,	// (0x00069b43) listscroll_cf0_pane

0x3ce4,	// (0x00069b4e) main_cf0_pane_g1

0xea3e,	// (0x000748a8) main_cf0_pane_t1_ParamLimits

0xea3e,	// (0x000748a8) main_cf0_pane_t1

0xea52,	// (0x000748bc) main_cf0_pane_t2_ParamLimits

0xea52,	// (0x000748bc) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x00075d26) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x00075d26) main_cf0_pane_t

0x3cee,	// (0x00069b58) scroll_pane_cp11

0xea66,	// (0x000748d0) cf0_flow_pane_g1

0xea6e,	// (0x000748d8) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x00075d2b) cf0_flow_pane_g

0xea76,	// (0x000748e0) cf0_flow_pane_t1

0x7688,	// (0x0006d4f2) main_call6_pane

0x7688,	// (0x0006d4f2) main_calllock_pane

0xea84,	// (0x000748ee) call6_btn_grp_pane_ParamLimits

0xea84,	// (0x000748ee) call6_btn_grp_pane

0xea93,	// (0x000748fd) call6_pane_g1_ParamLimits

0xea93,	// (0x000748fd) call6_pane_g1

0xeaa2,	// (0x0007490c) popup_call6_1st_window_ParamLimits

0xeaa2,	// (0x0007490c) popup_call6_1st_window

0xeab0,	// (0x0007491a) popup_call6_2nd_window_ParamLimits

0xeab0,	// (0x0007491a) popup_call6_2nd_window

0xeabe,	// (0x00074928) cell_call6_btn_pane_ParamLimits

0xeabe,	// (0x00074928) cell_call6_btn_pane

0x1440,	// (0x000672aa) bg_popup_call2_in_pane_cp03

0x3cf9,	// (0x00069b63) popup_call6_1st_window_g1

0x3d01,	// (0x00069b6b) popup_call6_1st_window_g2

0x3d09,	// (0x00069b73) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x00075d30) popup_call6_1st_window_g

0x3d11,	// (0x00069b7b) popup_call6_1st_window_t1

0x3d20,	// (0x00069b8a) popup_call6_1st_window_t2

0x3d30,	// (0x00069b9a) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x00075d37) popup_call6_1st_window_t

0x1440,	// (0x000672aa) bg_popup_call2_in_pane_cp04

0x3cf9,	// (0x00069b63) popup_call6_2nd_window_g1

0x3d01,	// (0x00069b6b) popup_call6_2nd_window_g2

0x3d09,	// (0x00069b73) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x00075d30) popup_call6_2nd_window_g

0x3d11,	// (0x00069b7b) popup_call6_2nd_window_t1

0x7688,	// (0x0006d4f2) bg_button_pane_cp15

0x3d40,	// (0x00069baa) cell_call6_btn_pane_g1

0x3d49,	// (0x00069bb3) cell_call6_btn_pane_t1

0xeacd,	// (0x00074937) listscroll_wgtman_pane_ParamLimits

0xeacd,	// (0x00074937) listscroll_wgtman_pane

0xeaeb,	// (0x00074955) wgtman_btn_pane_ParamLimits

0xeaeb,	// (0x00074955) wgtman_btn_pane

0x12f7,	// (0x00067161) aid_scroll_copy1

0x3d58,	// (0x00069bc2) list_wgtman_pane

0xeb20,	// (0x0007498a) wgtman_btn_pane_g1_ParamLimits

0xeb20,	// (0x0007498a) wgtman_btn_pane_g1

0xeb48,	// (0x000749b2) wgtman_btn_pane_t1_ParamLimits

0xeb48,	// (0x000749b2) wgtman_btn_pane_t1

0x3d62,	// (0x00069bcc) wgtman_btn_pane_t2_ParamLimits

0x3d62,	// (0x00069bcc) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x00075d3e) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x00075d3e) wgtman_btn_pane_t

0xeb7f,	// (0x000749e9) listrow_wgtman_pane_ParamLimits

0xeb7f,	// (0x000749e9) listrow_wgtman_pane

0xeb9a,	// (0x00074a04) listrow_wgtman_pane_g1

0xeba7,	// (0x00074a11) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x00075d43) listrow_wgtman_pane_g

0x755d,	// (0x0006d3c7) listrow_wgtman_pane_t1

0x7575,	// (0x0006d3df) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x00075d48) listrow_wgtman_pane_t

0x759b,	// (0x0006d405) wait_bar_pane_cp09

0x3d79,	// (0x00069be3) main_calllock_btn_pane

0x3d83,	// (0x00069bed) main_calllock_pane_g1

0x7688,	// (0x0006d4f2) bg_button_pane_cp17

0x3d8f,	// (0x00069bf9) main_calllock_btn_pane_g1

0x3d98,	// (0x00069c02) main_calllock_btn_pane_t1

0x7688,	// (0x0006d4f2) main_dialer3_pane

0x7688,	// (0x0006d4f2) main_fmrd2_pane

0x2d96,	// (0x00068c00) main_fs_bigclock_unlock_btn_pane_g1

0x3daf,	// (0x00069c19) main_fs_bigclock_unlock_btn_pane_t1

0xebc5,	// (0x00074a2f) area_fmrd2_info_pane_ParamLimits

0xebc5,	// (0x00074a2f) area_fmrd2_info_pane

0xebd3,	// (0x00074a3d) area_fmrd2_visual_pane_ParamLimits

0xebd3,	// (0x00074a3d) area_fmrd2_visual_pane

0xebe1,	// (0x00074a4b) fmrd2_indi_pane_ParamLimits

0xebe1,	// (0x00074a4b) fmrd2_indi_pane

0xebee,	// (0x00074a58) area_fmrd2_visual_pane_g1

0xebf6,	// (0x00074a60) area_fmrd2_visual_pane_t1

0xec06,	// (0x00074a70) area_fmrd2_visual_pane_t2

0xec16,	// (0x00074a80) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00075d52) area_fmrd2_visual_pane_t

0xec26,	// (0x00074a90) area_fmrd2_info_pane_g1

0xec2e,	// (0x00074a98) area_fmrd2_info_pane_t1

0xec3e,	// (0x00074aa8) area_fmrd2_info_pane_t2

0xec4e,	// (0x00074ab8) area_fmrd2_info_pane_t3

0xec5e,	// (0x00074ac8) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x00075d59) area_fmrd2_info_pane_t

0xec6c,	// (0x00074ad6) fmrd2_indi_pane_t1

0xec7c,	// (0x00074ae6) fmrd2_indi_pane_t2

0xec8c,	// (0x00074af6) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x00075d62) fmrd2_indi_pane_t

0x526d,	// (0x0006b0d7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x526d,	// (0x0006b0d7) list_single_fs_bigclock_indicator_pane_g5

0x5314,	// (0x0006b17e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x5314,	// (0x0006b17e) list_single_fs_bigclock_indicator_pane_t5

0xe589,	// (0x000743f3) aid_cell_bcale_month_pane_ParamLimits

0xe589,	// (0x000743f3) aid_cell_bcale_month_pane

0xe599,	// (0x00074403) bcale_month_pane_ParamLimits

0xe599,	// (0x00074403) bcale_month_pane

0xe5a9,	// (0x00074413) bcale_preview_pane_ParamLimits

0xe5a9,	// (0x00074413) bcale_preview_pane

0x3b31,	// (0x0006999b) list_single_fs_bigclock_pane_t1_ParamLimits

0x3b50,	// (0x000699ba) list_single_fs_bigclock_pane_t2_ParamLimits

0x3b50,	// (0x000699ba) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7f,	// (0x00075ce9) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7f,	// (0x00075ce9) list_single_fs_bigclock_pane_t

0x3da7,	// (0x00069c11) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x00075d4d) main_fs_bigclock_unlock_btn_pane_g

0xec9a,	// (0x00074b04) aid_dia3_key_size_ParamLimits

0xec9a,	// (0x00074b04) aid_dia3_key_size

0xeca6,	// (0x00074b10) aid_dia3_listrow_size_ParamLimits

0xeca6,	// (0x00074b10) aid_dia3_listrow_size

0xecb6,	// (0x00074b20) dia3_keypad_fun_pane_ParamLimits

0xecb6,	// (0x00074b20) dia3_keypad_fun_pane

0xecc8,	// (0x00074b32) dia3_keypad_num_pane_ParamLimits

0xecc8,	// (0x00074b32) dia3_keypad_num_pane

0xecda,	// (0x00074b44) dia3_listscroll_pane_ParamLimits

0xecda,	// (0x00074b44) dia3_listscroll_pane

0xece8,	// (0x00074b52) dia3_numentry_pane_ParamLimits

0xece8,	// (0x00074b52) dia3_numentry_pane

0x3dbd,	// (0x00069c27) dia3_list_pane

0x3dc8,	// (0x00069c32) scroll_pane_cp12

0x7688,	// (0x0006d4f2) bg_dia3_numentry_pane

0xecf6,	// (0x00074b60) dia3_numentry_pane_t1

0xed05,	// (0x00074b6f) cell_dia3_key_num_pane

0xed0d,	// (0x00074b77) cell_dia3_key0_fun_pane_ParamLimits

0xed0d,	// (0x00074b77) cell_dia3_key0_fun_pane

0xed1a,	// (0x00074b84) cell_dia3_key1_fun_pane_ParamLimits

0xed1a,	// (0x00074b84) cell_dia3_key1_fun_pane

0xed27,	// (0x00074b91) dia3_listrow_pane

0x4f71,	// (0x0006addb) bg_dia3_numentry_pane_g1

0x7688,	// (0x0006d4f2) bg_button_pane_cp21

0x3dd3,	// (0x00069c3d) cell_dia3_key_num_pane_t1

0x3de1,	// (0x00069c4b) cell_dia3_key_num_pane_t2

0x3df0,	// (0x00069c5a) cell_dia3_key_num_pane_t3

0x3dff,	// (0x00069c69) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x00075d69) cell_dia3_key_num_pane_t

0x7688,	// (0x0006d4f2) bg_button_pane_cp19

0xed34,	// (0x00074b9e) cell_dia3_key0_fun_pane_g1

0x7688,	// (0x0006d4f2) bg_button_pane_cp20

0xed3c,	// (0x00074ba6) cell_dia3_key1_fun_pane_g1

0xed44,	// (0x00074bae) area_left_week_number_pane

0xed4e,	// (0x00074bb8) area_top_day_name_pane

0xed5a,	// (0x00074bc4) frame_month_view_pane

0xed64,	// (0x00074bce) grid_month_view_pane

0x3e0e,	// (0x00069c78) cell_top_day_name_pane_ParamLimits

0x3e0e,	// (0x00069c78) cell_top_day_name_pane

0xed6e,	// (0x00074bd8) cell_area_left_week_number_pane_ParamLimits

0xed6e,	// (0x00074bd8) cell_area_left_week_number_pane

0xed82,	// (0x00074bec) cell_month_view_pane_ParamLimits

0xed82,	// (0x00074bec) cell_month_view_pane

0x3e28,	// (0x00069c92) frm_month_g1

0xed9f,	// (0x00074c09) frm_month_g2

0xeda9,	// (0x00074c13) frm_month_g3

0xedb3,	// (0x00074c1d) frm_month_g4

0xedbd,	// (0x00074c27) frm_month_g5

0xedc7,	// (0x00074c31) frm_month_g6

0xedd1,	// (0x00074c3b) frm_month_g7

0x3e31,	// (0x00069c9b) frm_month_g8

0x3e3a,	// (0x00069ca4) frm_month_g9

0x3e43,	// (0x00069cad) frm_month_g10

0x3e4c,	// (0x00069cb6) frm_month_g11

0x3e55,	// (0x00069cbf) frm_month_g12

0x3e5e,	// (0x00069cc8) frm_month_g13

0x3e67,	// (0x00069cd1) frm_month_g14

0x3e72,	// (0x00069cdc) frm_month_g15

0x3e7d,	// (0x00069ce7) frm_month_g16

0x000f,

0xff08,	// (0x00075d72) frm_month_g

0xeddb,	// (0x00074c45) cell_top_day_name_pane_t1

0xedea,	// (0x00074c54) cell_area_left_week_number_pane_g1

0xedf2,	// (0x00074c5c) cell_area_left_week_number_pane_t1

0x2d96,	// (0x00068c00) cell_month_view_pane_g1

0xee01,	// (0x00074c6b) cell_month_view_pane_t1

0x7688,	// (0x0006d4f2) main_fps_pane

0x5504,	// (0x0006b36e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x5504,	// (0x0006b36e) cmail_ddmenu_btn02_pane_cp1

0x5520,	// (0x0006b38a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x5520,	// (0x0006b38a) cmail_ddmenu_btn02_pane_cp2

0xe78d,	// (0x000745f7) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe78d,	// (0x000745f7) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe32,	// (0x00075c9c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe32,	// (0x00075c9c) cmail_ddmenu_btn02_pane_g

0xe7ab,	// (0x00074615) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe7ab,	// (0x00074615) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe37,	// (0x00075ca1) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe37,	// (0x00075ca1) cmail_ddmenu_btn02_pane_t

0xee10,	// (0x00074c7a) fps_text_pane_ParamLimits

0xee10,	// (0x00074c7a) fps_text_pane

0xee1d,	// (0x00074c87) main_fps_pane_g1_ParamLimits

0xee1d,	// (0x00074c87) main_fps_pane_g1

0xee2b,	// (0x00074c95) wait_bar_pane_cp010_ParamLimits

0xee2b,	// (0x00074c95) wait_bar_pane_cp010

0xee37,	// (0x00074ca1) fps_text_pane_t1_ParamLimits

0xee37,	// (0x00074ca1) fps_text_pane_t1

0xc584,	// (0x000723ee) cam4_image_uncrop_pane_g1

0xc58d,	// (0x000723f7) cam4_image_uncrop_pane_g2

0xc596,	// (0x00072400) cam4_image_uncrop_pane_g3

0xc59f,	// (0x00072409) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x00075763) cam4_image_uncrop_pane_g

0xed27,	// (0x00074b91) dia3_listrow_pane_ParamLimits

0x7688,	// (0x0006d4f2) main_phob2_pane

0xe3f8,	// (0x00074262) cell_tport_appsw_pane_cp02_ParamLimits

0xe3f8,	// (0x00074262) cell_tport_appsw_pane_cp02

0xe407,	// (0x00074271) cell_tport_appsw_pane_cp03_ParamLimits

0xe407,	// (0x00074271) cell_tport_appsw_pane_cp03

0x7688,	// (0x0006d4f2) phob2_contact_card_pane

0x7688,	// (0x0006d4f2) phob2_listscroll_pane

0x3e88,	// (0x00069cf2) phob2_list_pane

0x3e90,	// (0x00069cfa) scroll_pane_cp034

0xee50,	// (0x00074cba) phob2_cc_data_pane_ParamLimits

0xee50,	// (0x00074cba) phob2_cc_data_pane

0xee6a,	// (0x00074cd4) phob2_cc_listscroll_pane_ParamLimits

0xee6a,	// (0x00074cd4) phob2_cc_listscroll_pane

0xee84,	// (0x00074cee) list_double_large_graphic_phob2_pane_ParamLimits

0xee84,	// (0x00074cee) list_double_large_graphic_phob2_pane

0xeea2,	// (0x00074d0c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xeea2,	// (0x00074d0c) list_double_large_graphic_phob2_pane_g1

0x75ad,	// (0x0006d417) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x75ad,	// (0x0006d417) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00075d93) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00075d93) list_double_large_graphic_phob2_pane_g

0x75b9,	// (0x0006d423) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x75b9,	// (0x0006d423) list_double_large_graphic_phob2_pane_t1

0x75ce,	// (0x0006d438) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x75ce,	// (0x0006d438) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00075d98) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00075d98) list_double_large_graphic_phob2_pane_t

0x7688,	// (0x0006d4f2) list_highlight_pane_cp024

0x3e98,	// (0x00069d02) phob2_cc_button_pane

0xeeaf,	// (0x00074d19) phob2_cc_data_pane_g1_ParamLimits

0xeeaf,	// (0x00074d19) phob2_cc_data_pane_g1

0xeebb,	// (0x00074d25) phob2_cc_data_pane_g2_ParamLimits

0xeebb,	// (0x00074d25) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00075d9d) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00075d9d) phob2_cc_data_pane_g

0xeec7,	// (0x00074d31) phob2_cc_data_pane_t1_ParamLimits

0xeec7,	// (0x00074d31) phob2_cc_data_pane_t1

0xeed9,	// (0x00074d43) phob2_cc_data_pane_t2_ParamLimits

0xeed9,	// (0x00074d43) phob2_cc_data_pane_t2

0xeeeb,	// (0x00074d55) phob2_cc_data_pane_t3_ParamLimits

0xeeeb,	// (0x00074d55) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x00075da2) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x00075da2) phob2_cc_data_pane_t

0x3ea0,	// (0x00069d0a) phob2_cc_list_pane_ParamLimits

0x3ea0,	// (0x00069d0a) phob2_cc_list_pane

0x4e7e,	// (0x0006ace8) scroll_pane_cp035_ParamLimits

0x4e7e,	// (0x0006ace8) scroll_pane_cp035

0x2890,	// (0x000686fa) bg_button_pane_cp033

0x3eac,	// (0x00069d16) phob2_cc_button_pane_g1

0x3eb8,	// (0x00069d22) phob2_cc_button_pane_t1

0x3ecd,	// (0x00069d37) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x00075da9) phob2_cc_button_pane_t

0xeefd,	// (0x00074d67) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xeefd,	// (0x00074d67) list_double_large_graphic_phob2_cc_pane

0xef24,	// (0x00074d8e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xef24,	// (0x00074d8e) list_double_large_graphic_phob2_cc_pane_g1

0x75e0,	// (0x0006d44a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x75e0,	// (0x0006d44a) list_double_large_graphic_phob2_cc_pane_g2

0x75ef,	// (0x0006d459) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x75ef,	// (0x0006d459) list_double_large_graphic_phob2_cc_pane_g3

0x75fe,	// (0x0006d468) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x75fe,	// (0x0006d468) list_double_large_graphic_phob2_cc_pane_g4

0x760f,	// (0x0006d479) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x760f,	// (0x0006d479) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x00075dae) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x00075dae) list_double_large_graphic_phob2_cc_pane_g

0x761e,	// (0x0006d488) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x761e,	// (0x0006d488) list_double_large_graphic_phob2_cc_pane_t1

0x7647,	// (0x0006d4b1) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x7647,	// (0x0006d4b1) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x00075db9) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x00075db9) list_double_large_graphic_phob2_cc_pane_t

0x3edf,	// (0x00069d49) list_highlight_pane_cp025_ParamLimits

0x3edf,	// (0x00069d49) list_highlight_pane_cp025

0x2890,	// (0x000686fa) bg_button_pane_cp033_ParamLimits

0x3eac,	// (0x00069d16) phob2_cc_button_pane_g1_ParamLimits

0x3eb8,	// (0x00069d22) phob2_cc_button_pane_t1_ParamLimits

0x3ecd,	// (0x00069d37) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x00075da9) phob2_cc_button_pane_t_ParamLimits

0x7945,	// (0x0006d7af) popup_wgtman_window

0x45d4,	// (0x0006a43e) scroll_pane_cp038

0xeb08,	// (0x00074972) wgtman_btn_pane_cp_01_ParamLimits

0xeb08,	// (0x00074972) wgtman_btn_pane_cp_01

0x3eed,	// (0x00069d57) wgtman_content_pane

0x3ef6,	// (0x00069d60) wgtman_heading_pane

0x7688,	// (0x0006d4f2) bg_heading_pane_cp02

0x3eff,	// (0x00069d69) wgtman_heading_pane_g1

0x3f07,	// (0x00069d71) wgtman_heading_pane_t1

0x3f15,	// (0x00069d7f) scroll_pane_cp036

0x3f1d,	// (0x00069d87) wgtman_list_pane

0x3f25,	// (0x00069d8f) wgtman_list_pane_t1_ParamLimits

0x3f25,	// (0x00069d8f) wgtman_list_pane_t1

0xc4e3,	// (0x0007234d) cam4_grid_pane

0x6989,	// (0x0006c7f3) bg_button_pane_cp015_ParamLimits

0xd185,	// (0x00072fef) bg_button_pane_cp016_ParamLimits

0xd198,	// (0x00073002) bg_button_pane_cp017_ParamLimits

0x69cd,	// (0x0006c837) popup_vitu2_query_window_g3_ParamLimits

0x69cd,	// (0x0006c837) popup_vitu2_query_window_g3

0x6a46,	// (0x0006c8b0) popup_vitu2_query_window_t6_ParamLimits

0x6a46,	// (0x0006c8b0) popup_vitu2_query_window_t6

0x6a71,	// (0x0006c8db) popup_vitu2_query_window_t7_ParamLimits

0x6a71,	// (0x0006c8db) popup_vitu2_query_window_t7

0x37ad,	// (0x00069617) cam4_grid_pane_g1

0x37b6,	// (0x00069620) cam4_grid_pane_g2

0x3f3f,	// (0x00069da9) cam4_grid_pane_g3

0x3f48,	// (0x00069db2) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x00075dbe) cam4_grid_pane_g

0x8651,	// (0x0006e4bb) aid_placing_vt_slider_lsc_ParamLimits

0x899d,	// (0x0006e807) vidtel_button_pane_ParamLimits

0x899d,	// (0x0006e807) vidtel_button_pane

0x3f53,	// (0x00069dbd) bg_button_pane_cp034

0xef35,	// (0x00074d9f) vidtel_button_pane_g1

0x3f5d,	// (0x00069dc7) vidtel_button_pane_t1

0x46d6,	// (0x0006a540) aid_size_vtel_slider_touch

0x4e7e,	// (0x0006ace8) scroll_pane_cp039

0x4faf,	// (0x0006ae19) ncim_query_button_pane_cp01_ParamLimits

0x4fce,	// (0x0006ae38) ncimui_query_pane_g1_ParamLimits

0x2890,	// (0x000686fa) input_focus_pane_cp012_ParamLimits

0x4ff3,	// (0x0006ae5d) ncim_query_entry_pane_t1_ParamLimits

0x4e7e,	// (0x0006ace8) scroll_pane_cp039_ParamLimits

0x98eb,	// (0x0006f755) navi_pane_bcale_mc_g1

0x98f3,	// (0x0006f75d) navi_pane_bcale_mc_t1

0x5569,	// (0x0006b3d3) main_sp_fs_email_pane_g1

0x5571,	// (0x0006b3db) main_sp_fs_email_pane_g2

0x0001,

0xfcf0,	// (0x00075b5a) main_sp_fs_email_pane_g

0x37cb,	// (0x00069635) list_single_cale_mrui_row_pane_g3_ParamLimits

0x37cb,	// (0x00069635) list_single_cale_mrui_row_pane_g3

0xe7d3,	// (0x0007463d) list_single_recal_day_pane_g5_event_pane

0x3990,	// (0x000697fa) list_single_recal_day_pane_g7

0x3f6b,	// (0x00069dd5) list_recal_day_event_pane_cp01

0x3f74,	// (0x00069dde) list_recal_vselct_arw_lo_pane_cp01

0x3f7c,	// (0x00069de6) list_recal_vselct_arw_up_pane_cp01

0x3f84,	// (0x00069dee) list_recal_vselct_pane_cp01

0x46f8,	// (0x0006a562) list_recal_day_event_pane_cp01_g1

0x3f8e,	// (0x00069df8) list_recal_day_event_pane_cp01_t1

0x3998,	// (0x00069802) list_single_recal_day_pane_t1_ParamLimits

0x39aa,	// (0x00069814) list_single_recal_day_pane_t2_ParamLimits

0xfe47,	// (0x00075cb1) list_single_recal_day_pane_t_ParamLimits

0x07fc,	// (0x00066666) bg_notes_pane_ParamLimits

0x080a,	// (0x00066674) list_notes_pane_ParamLimits

0x7ca3,	// (0x0006db0d) scroll_pane_cp06_ParamLimits

0x0846,	// (0x000666b0) main_notes_pane_ParamLimits

0x7688,	// (0x0006d4f2) main_welc_pane

0xef3d,	// (0x00074da7) main_welc_body_pane_ParamLimits

0xef3d,	// (0x00074da7) main_welc_body_pane

0xef57,	// (0x00074dc1) main_welc_opti_pane_ParamLimits

0xef57,	// (0x00074dc1) main_welc_opti_pane

0xef8a,	// (0x00074df4) main_welc_pane_t1_ParamLimits

0xef8a,	// (0x00074df4) main_welc_pane_t1

0xe480,	// (0x000742ea) main_welc_body_row_pane_ParamLimits

0xe480,	// (0x000742ea) main_welc_body_row_pane

0xefa4,	// (0x00074e0e) main_welc_opti_row_pane_ParamLimits

0xefa4,	// (0x00074e0e) main_welc_opti_row_pane

0x3f9c,	// (0x00069e06) main_welc_opti_row_pane_g1

0x3fa4,	// (0x00069e0e) main_welc_opti_row_pane_t1

0x3fb3,	// (0x00069e1d) main_welc_body_row_pane_t1

0x3c37,	// (0x00069aa1) popup_notif_wgt_heading_pane

0x3c51,	// (0x00069abb) aid_size_list_notif_wgt_del_ParamLimits

0x3c5e,	// (0x00069ac8) list_notif_wgt_row_pane_g1_ParamLimits

0x3c6a,	// (0x00069ad4) list_notif_wgt_row_pane_g2_ParamLimits

0x3c76,	// (0x00069ae0) list_notif_wgt_row_pane_g3_ParamLimits

0xfeae,	// (0x00075d18) list_notif_wgt_row_pane_g_ParamLimits

0x3c83,	// (0x00069aed) list_notif_wgt_row_pane_t1_ParamLimits

0x3c98,	// (0x00069b02) list_notif_wgt_row_pane_t2_ParamLimits

0x3caa,	// (0x00069b14) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb5,	// (0x00075d1f) list_notif_wgt_row_pane_t_ParamLimits

0xeb9a,	// (0x00074a04) listrow_wgtman_pane_g1_ParamLimits

0xeba7,	// (0x00074a11) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x00075d43) listrow_wgtman_pane_g_ParamLimits

0x755d,	// (0x0006d3c7) listrow_wgtman_pane_t1_ParamLimits

0x7575,	// (0x0006d3df) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x00075d48) listrow_wgtman_pane_t_ParamLimits

0x759b,	// (0x0006d405) wait_bar_pane_cp09_ParamLimits

0x7688,	// (0x0006d4f2) bg_popup_heading_pane_cp02

0x3fc2,	// (0x00069e2c) popup_notif_wgt_heading_pane_g1

0x3fca,	// (0x00069e34) popup_notif_wgt_heading_pane_t1

0x7688,	// (0x0006d4f2) main_vids_pane

0x7688,	// (0x0006d4f2) vids_listscroll_pane

0xefb5,	// (0x00074e1f) scroll_pane_cp040

0x7688,	// (0x0006d4f2) vids_list_pane

0xefc0,	// (0x00074e2a) vids_list_double_pane_ParamLimits

0xefc0,	// (0x00074e2a) vids_list_double_pane

0xefda,	// (0x00074e44) vids_list_double_pane_g1

0xefe3,	// (0x00074e4d) vids_list_double_pane_t1

0xeff3,	// (0x00074e5d) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x00075dcc) vids_list_double_pane_t

0x2890,	// (0x000686fa) main_ncimui_pane_ParamLimits

0xdcbb,	// (0x00073b25) main_ncimui_pane_g1_ParamLimits

0xdcc7,	// (0x00073b31) main_ncimui_pane_g2_ParamLimits

0xdcc7,	// (0x00073b31) main_ncimui_pane_g2

0x0001,

0xfbf5,	// (0x00075a5f) main_ncimui_pane_g_ParamLimits

0xfbf5,	// (0x00075a5f) main_ncimui_pane_g

0xef70,	// (0x00074dda) main_welc_pane_g1_ParamLimits

0xef70,	// (0x00074dda) main_welc_pane_g1

0xef7c,	// (0x00074de6) main_welc_pane_g2_ParamLimits

0xef7c,	// (0x00074de6) main_welc_pane_g2

0x0001,

0xff5d,	// (0x00075dc7) main_welc_pane_g_ParamLimits

0xff5d,	// (0x00075dc7) main_welc_pane_g
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
