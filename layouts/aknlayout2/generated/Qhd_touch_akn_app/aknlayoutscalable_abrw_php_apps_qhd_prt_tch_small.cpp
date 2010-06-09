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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0005a253 };

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
0x0f5a,	// (0x0005b1ad) Screen

0x0f66,	// (0x0005b1b9) application_window

0x0fc2,	// (0x0005b215) area_bottom_pane_ParamLimits

0x0fc2,	// (0x0005b215) area_bottom_pane

0x101b,	// (0x0005b26e) area_top_pane_ParamLimits

0x101b,	// (0x0005b26e) area_top_pane

0x107f,	// (0x0005b2d2) call_video_uplink_pane_ParamLimits

0x107f,	// (0x0005b2d2) call_video_uplink_pane

0x10be,	// (0x0005b311) main_pane_ParamLimits

0x10be,	// (0x0005b311) main_pane

0xdde9,	// (0x0006803c) context_pane

0x45a0,	// (0x0005e7f3) navi_pane

0x45c6,	// (0x0005e819) popup_cale_events_window_ParamLimits

0x45c6,	// (0x0005e819) popup_cale_events_window

0xddfc,	// (0x0006804f) popup_mup_playback_window

0x45de,	// (0x0005e831) signal_pane

0xb86d,	// (0x00065ac0) main_browser_pane

0xbf6b,	// (0x000661be) main_burst_pane

0x441e,	// (0x0005e671) main_calc_pane

0xddcf,	// (0x00068022) main_cale_day_pane

0x1821,	// (0x0005ba74) main_cale_month_pane

0xddcf,	// (0x00068022) main_cale_week_pane

0xbf6b,	// (0x000661be) main_call_pane

0xb54d,	// (0x000657a0) main_call_poc_pane

0xbf6b,	// (0x000661be) main_camera_pane

0xbf6b,	// (0x000661be) main_chi_dic_pane

0xc74e,	// (0x000669a1) main_clock_pane

0xb54d,	// (0x000657a0) main_fmradio_pane

0xbf6b,	// (0x000661be) main_graph_messa_pane

0xb54d,	// (0x000657a0) main_help_pane

0xb86d,	// (0x00065ac0) main_im_pane

0xb7a8,	// (0x000659fb) main_image_pane_ParamLimits

0xb7a8,	// (0x000659fb) main_image_pane

0xb54d,	// (0x000657a0) main_location2_pane

0xbf6b,	// (0x000661be) main_location_pane

0xb7a8,	// (0x000659fb) main_messa_pane

0xb54d,	// (0x000657a0) main_mp2_pane

0xbf6b,	// (0x000661be) main_mp_pane

0xb54d,	// (0x000657a0) main_msg_pane

0xb54d,	// (0x000657a0) main_mup_eq_pane

0xb54d,	// (0x000657a0) main_mup_pane

0xb86d,	// (0x00065ac0) main_notes_pane

0xb54d,	// (0x000657a0) main_pec_pane

0xb54d,	// (0x000657a0) main_phob_pane

0xb54d,	// (0x000657a0) main_pinb_pane

0xb54d,	// (0x000657a0) main_postcard_pane

0xb54d,	// (0x000657a0) main_qdial_pane

0xbf6b,	// (0x000661be) main_skin_pane

0xb54d,	// (0x000657a0) main_smil2_pane

0xbf6b,	// (0x000661be) main_smil_pane

0xbf6b,	// (0x000661be) main_video_pane

0xbf6b,	// (0x000661be) main_video_tele_pane

0xb7a8,	// (0x000659fb) main_viewer_pane_ParamLimits

0xb7a8,	// (0x000659fb) main_viewer_pane

0xbf6b,	// (0x000661be) main_vorec_pane

0x446a,	// (0x0005e6bd) popup_blid_sat_info_window_ParamLimits

0x446a,	// (0x0005e6bd) popup_blid_sat_info_window

0x448a,	// (0x0005e6dd) popup_dyc_status_message_window_ParamLimits

0x448a,	// (0x0005e6dd) popup_dyc_status_message_window

0x449a,	// (0x0005e6ed) popup_grid_large_graphic_window_ParamLimits

0x449a,	// (0x0005e6ed) popup_grid_large_graphic_window

0x452b,	// (0x0005e77e) popup_loc_request_window_ParamLimits

0x452b,	// (0x0005e77e) popup_loc_request_window

0x4578,	// (0x0005e7cb) popup_wml_address_window_ParamLimits

0x4578,	// (0x0005e7cb) popup_wml_address_window

0x42f6,	// (0x0005e549) call_muted_g1

0x3fb8,	// (0x0005e20b) popup_call_audio_conf_window_ParamLimits

0x3fb8,	// (0x0005e20b) popup_call_audio_conf_window

0x4306,	// (0x0005e559) popup_call_audio_first_window_ParamLimits

0x4306,	// (0x0005e559) popup_call_audio_first_window

0x4346,	// (0x0005e599) popup_call_audio_in_window_ParamLimits

0x4346,	// (0x0005e599) popup_call_audio_in_window

0x436a,	// (0x0005e5bd) popup_call_audio_out_window_ParamLimits

0x436a,	// (0x0005e5bd) popup_call_audio_out_window

0x438c,	// (0x0005e5df) popup_call_audio_second_window_ParamLimits

0x438c,	// (0x0005e5df) popup_call_audio_second_window

0x43bc,	// (0x0005e60f) popup_call_audio_wait_window_ParamLimits

0x43bc,	// (0x0005e60f) popup_call_audio_wait_window

0x43dd,	// (0x0005e630) popup_number_entry_window_ParamLimits

0x43dd,	// (0x0005e630) popup_number_entry_window

0xb13a,	// (0x0006538d) bg_popup_call_pane_cp05_ParamLimits

0xb13a,	// (0x0006538d) bg_popup_call_pane_cp05

0xb15a,	// (0x000653ad) popup_number_entry_window_t1

0xb16d,	// (0x000653c0) popup_number_entry_window_t2

0xb17f,	// (0x000653d2) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0006931d) popup_number_entry_window_t

0xb191,	// (0x000653e4) text_title_cp2

0xb1a4,	// (0x000653f7) bg_popup_call_pane_cp_ParamLimits

0xb1a4,	// (0x000653f7) bg_popup_call_pane_cp

0xb1b2,	// (0x00065405) call_thumbnail_pane

0xb1ba,	// (0x0006540d) popup_call_audio_in_window_g1_ParamLimits

0xb1ba,	// (0x0006540d) popup_call_audio_in_window_g1

0xb1c6,	// (0x00065419) popup_call_audio_in_window_g2_ParamLimits

0xb1c6,	// (0x00065419) popup_call_audio_in_window_g2

0xb1d2,	// (0x00065425) popup_call_audio_in_window_g3_ParamLimits

0xb1d2,	// (0x00065425) popup_call_audio_in_window_g3

0x0002,

0x0007,	// (0x0005a25a) popup_call_audio_in_window_g_ParamLimits

0x0007,	// (0x0005a25a) popup_call_audio_in_window_g

0xb1de,	// (0x00065431) popup_call_audio_in_window_t1_ParamLimits

0xb1de,	// (0x00065431) popup_call_audio_in_window_t1

0xb1fa,	// (0x0006544d) popup_call_audio_in_window_t2_ParamLimits

0xb1fa,	// (0x0006544d) popup_call_audio_in_window_t2

0xb216,	// (0x00065469) popup_call_audio_in_window_t3_ParamLimits

0xb216,	// (0x00065469) popup_call_audio_in_window_t3

0x0002,

0x000e,	// (0x0005a261) popup_call_audio_in_window_t_ParamLimits

0x000e,	// (0x0005a261) popup_call_audio_in_window_t

0xb1a4,	// (0x000653f7) bg_popup_call_pane_cp01_ParamLimits

0xb1a4,	// (0x000653f7) bg_popup_call_pane_cp01

0xb1b2,	// (0x00065405) call_thumbnail_pane_cp02

0xb229,	// (0x0006547c) call_type_pane_cp022

0xb231,	// (0x00065484) popup_call_audio_out_window_g1_ParamLimits

0xb231,	// (0x00065484) popup_call_audio_out_window_g1

0xb243,	// (0x00065496) popup_call_audio_out_window_g2_ParamLimits

0xb243,	// (0x00065496) popup_call_audio_out_window_g2

0xb24f,	// (0x000654a2) popup_call_audio_out_window_g3_ParamLimits

0xb24f,	// (0x000654a2) popup_call_audio_out_window_g3

0x0002,

0x0015,	// (0x0005a268) popup_call_audio_out_window_g_ParamLimits

0x0015,	// (0x0005a268) popup_call_audio_out_window_g

0xb261,	// (0x000654b4) popup_call_audio_out_window_t1_ParamLimits

0xb261,	// (0x000654b4) popup_call_audio_out_window_t1

0xb279,	// (0x000654cc) popup_call_audio_out_window_t2_ParamLimits

0xb279,	// (0x000654cc) popup_call_audio_out_window_t2

0x0001,

0x001c,	// (0x0005a26f) popup_call_audio_out_window_t_ParamLimits

0x001c,	// (0x0005a26f) popup_call_audio_out_window_t

0xb28e,	// (0x000654e1) bg_popup_call_pane_ParamLimits

0xb28e,	// (0x000654e1) bg_popup_call_pane

0x12d7,	// (0x0005b52a) call_thumbnail_pane_cp_ParamLimits

0x12d7,	// (0x0005b52a) call_thumbnail_pane_cp

0xb312,	// (0x00065565) call_type_pane_cp01_ParamLimits

0xb312,	// (0x00065565) call_type_pane_cp01

0xb356,	// (0x000655a9) popup_call_audio_first_window_g1_ParamLimits

0xb356,	// (0x000655a9) popup_call_audio_first_window_g1

0xb3a2,	// (0x000655f5) popup_call_audio_first_window_g2_ParamLimits

0xb3a2,	// (0x000655f5) popup_call_audio_first_window_g2

0x0001,

0x0021,	// (0x0005a274) popup_call_audio_first_window_g_ParamLimits

0x0021,	// (0x0005a274) popup_call_audio_first_window_g

0xb3e6,	// (0x00065639) popup_call_audio_first_window_t1_ParamLimits

0xb3e6,	// (0x00065639) popup_call_audio_first_window_t1

0xb492,	// (0x000656e5) popup_call_audio_first_window_t4_ParamLimits

0xb492,	// (0x000656e5) popup_call_audio_first_window_t4

0xb51e,	// (0x00065771) popup_call_audio_first_window_t5_ParamLimits

0xb51e,	// (0x00065771) popup_call_audio_first_window_t5

0x0002,

0x0026,	// (0x0005a279) popup_call_audio_first_window_t_ParamLimits

0x0026,	// (0x0005a279) popup_call_audio_first_window_t

0xb54d,	// (0x000657a0) bg_popup_call_pane_cp02

0xb557,	// (0x000657aa) call_type_pane_cp023

0xb55f,	// (0x000657b2) popup_call_audio_wait_window_g1

0xb567,	// (0x000657ba) popup_call_audio_wait_window_g2

0x0001,

0x002d,	// (0x0005a280) popup_call_audio_wait_window_g

0xb56f,	// (0x000657c2) popup_call_audio_wait_window_t3

0xb57d,	// (0x000657d0) bg_popup_call_pane_cp03_ParamLimits

0xb57d,	// (0x000657d0) bg_popup_call_pane_cp03

0xb5dd,	// (0x00065830) call_thumbnail_pane_cp011_ParamLimits

0xb5dd,	// (0x00065830) call_thumbnail_pane_cp011

0xb5e9,	// (0x0006583c) call_type_pane_cp034_ParamLimits

0xb5e9,	// (0x0006583c) call_type_pane_cp034

0xb625,	// (0x00065878) popup_call_audio_second_window_g1_ParamLimits

0xb625,	// (0x00065878) popup_call_audio_second_window_g1

0xb661,	// (0x000658b4) popup_call_audio_second_window_g2_ParamLimits

0xb661,	// (0x000658b4) popup_call_audio_second_window_g2

0x0001,

0x0032,	// (0x0005a285) popup_call_audio_second_window_g_ParamLimits

0x0032,	// (0x0005a285) popup_call_audio_second_window_g

0xb69d,	// (0x000658f0) popup_call_audio_second_window_t1_ParamLimits

0xb69d,	// (0x000658f0) popup_call_audio_second_window_t1

0xb71e,	// (0x00065971) popup_call_audio_second_window_t2_ParamLimits

0xb71e,	// (0x00065971) popup_call_audio_second_window_t2

0xb754,	// (0x000659a7) popup_call_audio_second_window_t3_ParamLimits

0xb754,	// (0x000659a7) popup_call_audio_second_window_t3

0x0002,

0x0037,	// (0x0005a28a) popup_call_audio_second_window_t_ParamLimits

0x0037,	// (0x0005a28a) popup_call_audio_second_window_t

0xb54d,	// (0x000657a0) bg_popup_call_pane_cp04

0xb78a,	// (0x000659dd) list_conf_pane

0xb792,	// (0x000659e5) popup_call_audio_conf_window_t1

0xb7a0,	// (0x000659f3) call_thumbnail_pane_g1

0xb7a8,	// (0x000659fb) bg_pinb_pane_ParamLimits

0xb7a8,	// (0x000659fb) bg_pinb_pane

0xb7b6,	// (0x00065a09) find_pinb_pane

0xb7bf,	// (0x00065a12) listscroll_pinb_pane_ParamLimits

0xb7bf,	// (0x00065a12) listscroll_pinb_pane

0xb7ce,	// (0x00065a21) pinb_bg_pane_g1

0x12fb,	// (0x0005b54e) pinb_bg_pane_g2

0x1307,	// (0x0005b55a) pinb_bg_pane_g3

0x1313,	// (0x0005b566) pinb_bg_pane_g4

0x131f,	// (0x0005b572) pinb_bg_pane_g5

0x132b,	// (0x0005b57e) pinb_bg_pane_g6

0x1336,	// (0x0005b589) pinb_bg_pane_g7

0x1341,	// (0x0005b594) pinb_bg_pane_g8

0x134c,	// (0x0005b59f) pinb_bg_pane_g9

0x1356,	// (0x0005b5a9) pinb_bg_pane_g10

0x0009,

0xf0d3,	// (0x00069326) pinb_bg_pane_g

0x1373,	// (0x0005b5c6) grid_pinb_pane

0x137e,	// (0x0005b5d1) list_pinb_pane

0x1389,	// (0x0005b5dc) scroll_pane_cp01_ParamLimits

0x1389,	// (0x0005b5dc) scroll_pane_cp01

0xb7d8,	// (0x00065a2b) find_pinb_pane_g1_ParamLimits

0xb7d8,	// (0x00065a2b) find_pinb_pane_g1

0xb7f0,	// (0x00065a43) find_pinb_pane_t1

0xb802,	// (0x00065a55) find_pinb_pane_t2

0x0001,

0x0058,	// (0x0005a2ab) find_pinb_pane_t

0xb817,	// (0x00065a6a) input_focus_pane_cp01_ParamLimits

0xb817,	// (0x00065a6a) input_focus_pane_cp01

0x139b,	// (0x0005b5ee) cell_pinb_pane_ParamLimits

0x139b,	// (0x0005b5ee) cell_pinb_pane

0x13c3,	// (0x0005b616) cell_pinb_pane_g1_ParamLimits

0x13c3,	// (0x0005b616) cell_pinb_pane_g1

0x13d8,	// (0x0005b62b) cell_pinb_pane_g2_ParamLimits

0x13d8,	// (0x0005b62b) cell_pinb_pane_g2

0xb823,	// (0x00065a76) cell_pinb_pane_g3_ParamLimits

0xb823,	// (0x00065a76) cell_pinb_pane_g3

0x0002,

0xf0e8,	// (0x0006933b) cell_pinb_pane_g_ParamLimits

0xf0e8,	// (0x0006933b) cell_pinb_pane_g

0xb54d,	// (0x000657a0) grid_highlight_pane_cp01

0x13e4,	// (0x0005b637) list_pinb_item_pane_ParamLimits

0x13e4,	// (0x0005b637) list_pinb_item_pane

0xb54d,	// (0x000657a0) list_highlight_pane_cp02

0x140a,	// (0x0005b65d) list_pinb_item_pane_g1_ParamLimits

0x140a,	// (0x0005b65d) list_pinb_item_pane_g1

0x1417,	// (0x0005b66a) list_pinb_item_pane_g2_ParamLimits

0x1417,	// (0x0005b66a) list_pinb_item_pane_g2

0x1423,	// (0x0005b676) list_pinb_item_pane_g3_ParamLimits

0x1423,	// (0x0005b676) list_pinb_item_pane_g3

0x1434,	// (0x0005b687) list_pinb_item_pane_g4_ParamLimits

0x1434,	// (0x0005b687) list_pinb_item_pane_g4

0x0003,

0xf0ef,	// (0x00069342) list_pinb_item_pane_g_ParamLimits

0xf0ef,	// (0x00069342) list_pinb_item_pane_g

0x1440,	// (0x0005b693) list_pinb_item_pane_t1_ParamLimits

0x1440,	// (0x0005b693) list_pinb_item_pane_t1

0x1471,	// (0x0005b6c4) calc_display_pane

0x148f,	// (0x0005b6e2) calc_paper_pane

0x14ab,	// (0x0005b6fe) grid_calc_pane

0xb54d,	// (0x000657a0) bg_list_pane_cp01

0x14d7,	// (0x0005b72a) clock_g1

0x14df,	// (0x0005b732) clock_g2

0x0001,

0xf0f8,	// (0x0006934b) clock_g

0x14e9,	// (0x0005b73c) clock_t1_ParamLimits

0x14e9,	// (0x0005b73c) clock_t1

0x14fe,	// (0x0005b751) clock_t2_ParamLimits

0x14fe,	// (0x0005b751) clock_t2

0x1510,	// (0x0005b763) clock_t3_ParamLimits

0x1510,	// (0x0005b763) clock_t3

0x1522,	// (0x0005b775) clock_t4_ParamLimits

0x1522,	// (0x0005b775) clock_t4

0x1534,	// (0x0005b787) clock_t5_ParamLimits

0x1534,	// (0x0005b787) clock_t5

0x1549,	// (0x0005b79c) clock_t6_ParamLimits

0x1549,	// (0x0005b79c) clock_t6

0x155b,	// (0x0005b7ae) clock_t7_ParamLimits

0x155b,	// (0x0005b7ae) clock_t7

0x156d,	// (0x0005b7c0) clock_t8_ParamLimits

0x156d,	// (0x0005b7c0) clock_t8

0x1583,	// (0x0005b7d6) clock_t9_ParamLimits

0x1583,	// (0x0005b7d6) clock_t9

0x0008,

0xf0fd,	// (0x00069350) clock_t_ParamLimits

0xf0fd,	// (0x00069350) clock_t

0xb82f,	// (0x00065a82) popup_clock_analogue_window_cp02

0xb82f,	// (0x00065a82) popup_clock_digital_window_cp01

0xb837,	// (0x00065a8a) listscroll_help_pane

0xb54d,	// (0x000657a0) phob_pre_status_pane

0xb841,	// (0x00065a94) grid_qdial_pane

0xb7a8,	// (0x000659fb) listscroll_mce_pane

0xb7a8,	// (0x000659fb) bg_notes_pane

0xb84b,	// (0x00065a9e) list_notes_pane

0x1599,	// (0x0005b7ec) scroll_pane_cp06

0xb859,	// (0x00065aac) bg_calc_paper_pane

0x15a8,	// (0x0005b7fb) list_calc_pane

0xb86d,	// (0x00065ac0) bg_calc_display_pane

0x15c2,	// (0x0005b815) calc_display_pane_t1

0x15d7,	// (0x0005b82a) calc_display_pane_t2

0x15ec,	// (0x0005b83f) calc_display_pane_t3

0x0002,

0xf110,	// (0x00069363) calc_display_pane_t

0x15fe,	// (0x0005b851) cell_calc_pane_ParamLimits

0x15fe,	// (0x0005b851) cell_calc_pane

0xb879,	// (0x00065acc) bg_calc_paper_pane_g1

0xb891,	// (0x00065ae4) bg_calc_paper_pane_g2

0xb885,	// (0x00065ad8) bg_calc_paper_pane_g3

0xbde2,	// (0x00066035) bg_calc_paper_pane_g4

0xb89d,	// (0x00065af0) bg_calc_paper_pane_g5

0x162b,	// (0x0005b87e) bg_calc_paper_pane_g6

0x163c,	// (0x0005b88f) bg_calc_paper_pane_g7

0x164d,	// (0x0005b8a0) bg_calc_paper_pane_g8

0x0007,

0xf117,	// (0x0006936a) bg_calc_paper_pane_g

0x165e,	// (0x0005b8b1) calc_bg_paper_pane_g9

0x166f,	// (0x0005b8c2) list_calc_item_pane_ParamLimits

0x166f,	// (0x0005b8c2) list_calc_item_pane

0xbdee,	// (0x00066041) list_calc_item_pane_g1

0x169e,	// (0x0005b8f1) list_calc_item_pane_t1_ParamLimits

0x169e,	// (0x0005b8f1) list_calc_item_pane_t1

0x16b0,	// (0x0005b903) list_calc_item_pane_t2_ParamLimits

0x16b0,	// (0x0005b903) list_calc_item_pane_t2

0x0001,

0xf128,	// (0x0006937b) list_calc_item_pane_t_ParamLimits

0xf128,	// (0x0006937b) list_calc_item_pane_t

0xbdfb,	// (0x0006604e) cell_calc_pane_g1

0xbe05,	// (0x00066058) grid_highlight_pane_cp02

0x16e0,	// (0x0005b933) bg_calc_display_pane_g1

0x16e9,	// (0x0005b93c) bg_calc_display_pane_g2

0xe20c,	// (0x0006845f) bg_calc_display_pane_g3

0x0002,

0xf132,	// (0x00069385) bg_calc_display_pane_g

0x16f3,	// (0x0005b946) cell_qdial_pane_ParamLimits

0x16f3,	// (0x0005b946) cell_qdial_pane

0x1707,	// (0x0005b95a) cell_qdial_pane_g1_ParamLimits

0x1707,	// (0x0005b95a) cell_qdial_pane_g1

0x1714,	// (0x0005b967) cell_qdial_pane_g2_ParamLimits

0x1714,	// (0x0005b967) cell_qdial_pane_g2

0xbe27,	// (0x0006607a) cell_qdial_pane_g3_ParamLimits

0xbe27,	// (0x0006607a) cell_qdial_pane_g3

0x0003,

0xf139,	// (0x0006938c) cell_qdial_pane_g_ParamLimits

0xf139,	// (0x0006938c) cell_qdial_pane_g

0x1732,	// (0x0005b985) cell_qdial_pane_t1_ParamLimits

0x1732,	// (0x0005b985) cell_qdial_pane_t1

0x174a,	// (0x0005b99d) cell_qdial_pane_t2_ParamLimits

0x174a,	// (0x0005b99d) cell_qdial_pane_t2

0x175d,	// (0x0005b9b0) cell_qdial_pane_t3_ParamLimits

0x175d,	// (0x0005b9b0) cell_qdial_pane_t3

0x0002,

0xf142,	// (0x00069395) cell_qdial_pane_t_ParamLimits

0xf142,	// (0x00069395) cell_qdial_pane_t

0xb54d,	// (0x000657a0) grid_highlight_pane_cp04

0xbe33,	// (0x00066086) thumbnail_qdial_pane_ParamLimits

0xbe33,	// (0x00066086) thumbnail_qdial_pane

0xbe8f,	// (0x000660e2) list_help_pane

0xbe98,	// (0x000660eb) scroll_pane_cp02

0x1770,	// (0x0005b9c3) help_list_pane_t1_ParamLimits

0x1770,	// (0x0005b9c3) help_list_pane_t1

0x17a3,	// (0x0005b9f6) bg_notes_pane_g2

0x17ab,	// (0x0005b9fe) bg_notes_pane_g3

0x17b3,	// (0x0005ba06) notes_bg_pane_g1

0x17bb,	// (0x0005ba0e) notes_bg_pane_g4

0x17c3,	// (0x0005ba16) notes_bg_pane_g5

0x17cb,	// (0x0005ba1e) notes_bg_pane_g6

0x17d3,	// (0x0005ba26) notes_bg_pane_g7

0x17db,	// (0x0005ba2e) notes_bg_pane_g8

0x17e3,	// (0x0005ba36) notes_bg_pane_g9

0x0006,

0xf149,	// (0x0006939c) notes_bg_pane_g

0x17eb,	// (0x0005ba3e) list_notes_text_pane_ParamLimits

0x17eb,	// (0x0005ba3e) list_notes_text_pane

0xbea1,	// (0x000660f4) list_notes_text_pane_g1

0x1813,	// (0x0005ba66) list_notes_text_pane_t1

0x1821,	// (0x0005ba74) listscroll_cale_week_pane

0x1846,	// (0x0005ba99) bg_cale_heading_pane

0xbec4,	// (0x00066117) bg_cale_pane_cp01

0x1866,	// (0x0005bab9) cale_week_corner_pane

0x1880,	// (0x0005bad3) cale_week_day_heading_pane

0x18a0,	// (0x0005baf3) cale_week_scroll_pane_g1

0x18bb,	// (0x0005bb0e) cale_week_scroll_pane_g2

0x18ce,	// (0x0005bb21) cale_week_scroll_pane_g3

0x18e1,	// (0x0005bb34) cale_week_scroll_pane_g4

0x18f4,	// (0x0005bb47) cale_week_scroll_pane_g5

0x1907,	// (0x0005bb5a) cale_week_scroll_pane_g6

0x191a,	// (0x0005bb6d) cale_week_scroll_pane_g7

0x192f,	// (0x0005bb82) cale_week_scroll_pane_g8

0x1944,	// (0x0005bb97) cale_week_scroll_pane_g9

0x1957,	// (0x0005bbaa) cale_week_scroll_pane_g10

0x196a,	// (0x0005bbbd) cale_week_scroll_pane_g11

0x197d,	// (0x0005bbd0) cale_week_scroll_pane_g12

0x1994,	// (0x0005bbe7) cale_week_scroll_pane_g13

0x19af,	// (0x0005bc02) cale_week_scroll_pane_g14

0x19ca,	// (0x0005bc1d) cale_week_scroll_pane_g15

0x000f,

0xf158,	// (0x000693ab) cale_week_scroll_pane_g

0x19fa,	// (0x0005bc4d) cale_week_time_pane

0x1a0f,	// (0x0005bc62) grid_cale_week_pane

0xbef3,	// (0x00066146) scroll_pane_cp08

0x1a2e,	// (0x0005bc81) cell_cale_week_pane_ParamLimits

0x1a2e,	// (0x0005bc81) cell_cale_week_pane

0x1a90,	// (0x0005bce3) cale_week_day_heading_pane_t1

0x1aab,	// (0x0005bcfe) cale_week_day_heading_pane_t2

0x1ac6,	// (0x0005bd19) cale_week_day_heading_pane_t3

0x1ae1,	// (0x0005bd34) cale_week_day_heading_pane_t4

0x1afc,	// (0x0005bd4f) cale_week_day_heading_pane_t5

0x1b17,	// (0x0005bd6a) cale_week_day_heading_pane_t6

0x1b32,	// (0x0005bd85) cale_week_day_heading_pane_t7

0x0006,

0xf179,	// (0x000693cc) cale_week_day_heading_pane_t

0xbf10,	// (0x00066163) bg_cale_side_pane

0x1b4d,	// (0x0005bda0) cale_week_time_pane_t1

0x1b67,	// (0x0005bdba) cale_week_time_pane_t2

0x1b81,	// (0x0005bdd4) cale_week_time_pane_t3

0x1b9b,	// (0x0005bdee) cale_week_time_pane_t4

0x1bb5,	// (0x0005be08) cale_week_time_pane_t5

0x1bcf,	// (0x0005be22) cale_week_time_pane_t6

0x1bed,	// (0x0005be40) cale_week_time_pane_t7

0x1c0f,	// (0x0005be62) cale_week_time_pane_t8

0x0007,

0xf188,	// (0x000693db) cale_week_time_pane_t

0x1c33,	// (0x0005be86) cell_cale_week_pane_g2

0x1c57,	// (0x0005beaa) cell_cale_week_pane_g3_ParamLimits

0x1c57,	// (0x0005beaa) cell_cale_week_pane_g3

0xbf1e,	// (0x00066171) grid_highlight_pane_cp07

0xbf26,	// (0x00066179) listscroll_gms_pane

0xbf30,	// (0x00066183) grid_gms_pane

0xbf39,	// (0x0006618c) listscroll_gms_pane_g1

0xbf41,	// (0x00066194) listscroll_gms_pane_g2

0x0001,

0x0125,	// (0x0005a378) listscroll_gms_pane_g

0x1c6f,	// (0x0005bec2) scroll_pane_cp010

0x1c7a,	// (0x0005becd) cell_gms_pane_ParamLimits

0x1c7a,	// (0x0005becd) cell_gms_pane

0x1c8d,	// (0x0005bee0) cell_gms_pane_g1

0xbf49,	// (0x0006619c) cell_gms_pane_g2

0xbf51,	// (0x000661a4) cell_gms_pane_g3

0xbf5a,	// (0x000661ad) cell_gms_pane_g4

0x0003,

0xf199,	// (0x000693ec) cell_gms_pane_g

0xbf63,	// (0x000661b6) grid_highlight_pane_cp09

0x429e,	// (0x0005e4f1) phob_pre_status_pane_g1

0x42a6,	// (0x0005e4f9) phob_pre_status_pane_g2

0x42ae,	// (0x0005e501) phob_pre_status_pane_g3

0x42b6,	// (0x0005e509) phob_pre_status_pane_g4

0x0004,

0xf3f6,	// (0x00069649) phob_pre_status_pane_g

0x42c6,	// (0x0005e519) phob_pre_status_pane_t1

0x42d6,	// (0x0005e529) phob_pre_status_pane_t2

0x42e6,	// (0x0005e539) phob_pre_status_pane_t3

0x0002,

0xf401,	// (0x00069654) phob_pre_status_pane_t

0xbf6b,	// (0x000661be) bg_list_pane_cp05

0x1c9d,	// (0x0005bef0) grid_vorec_pane

0x1ca7,	// (0x0005befa) vorec_t1

0x1cb5,	// (0x0005bf08) vorec_t2

0x1cc3,	// (0x0005bf16) vorec_t3

0x1cd1,	// (0x0005bf24) vorec_t4

0x9c28,	// (0x00063e7b) vorec_t5

0x9c36,	// (0x00063e89) vorec_t6

0x0004,

0xf1a2,	// (0x000693f5) vorec_t

0x9c44,	// (0x00063e97) wait_bar_pane_cp01

0x1ced,	// (0x0005bf40) cell_vorec_pane_ParamLimits

0x1ced,	// (0x0005bf40) cell_vorec_pane

0x1d00,	// (0x0005bf53) cell_vorec_pane_g1

0xb54d,	// (0x000657a0) grid_highlight_pane_cp05

0x1d1a,	// (0x0005bf6d) cams_zoom_pane

0x1d26,	// (0x0005bf79) image_vga_pane

0x1d35,	// (0x0005bf88) main_camera_pane_g1

0x1d43,	// (0x0005bf96) main_camera_pane_g2

0x1d4f,	// (0x0005bfa2) main_camera_pane_g3

0x1d5b,	// (0x0005bfae) main_camera_pane_g4

0x1d67,	// (0x0005bfba) main_camera_pane_g5

0x1d73,	// (0x0005bfc6) main_camera_pane_g6

0x1d7f,	// (0x0005bfd2) main_camera_pane_g7

0x0007,

0xf1ad,	// (0x00069400) main_camera_pane_g

0x1d8b,	// (0x0005bfde) main_camera_pane_t1

0x1d9d,	// (0x0005bff0) main_camera_pane_t2

0x0001,

0xf1be,	// (0x00069411) main_camera_pane_t

0x1dbe,	// (0x0005c011) cams_zoom_pane_cp_ParamLimits

0x1dbe,	// (0x0005c011) cams_zoom_pane_cp

0x1de2,	// (0x0005c035) image_cif_pane_ParamLimits

0x1de2,	// (0x0005c035) image_cif_pane

0x1e00,	// (0x0005c053) image_subqcif_pane

0x1e08,	// (0x0005c05b) main_video_pane_g1_ParamLimits

0x1e08,	// (0x0005c05b) main_video_pane_g1

0x1e28,	// (0x0005c07b) main_video_pane_g2_ParamLimits

0x1e28,	// (0x0005c07b) main_video_pane_g2

0x1e58,	// (0x0005c0ab) main_video_pane_g3_ParamLimits

0x1e58,	// (0x0005c0ab) main_video_pane_g3

0x1e81,	// (0x0005c0d4) main_video_pane_g4_ParamLimits

0x1e81,	// (0x0005c0d4) main_video_pane_g4

0x1eaa,	// (0x0005c0fd) main_video_pane_g5_ParamLimits

0x1eaa,	// (0x0005c0fd) main_video_pane_g5

0xbf7f,	// (0x000661d2) main_video_pane_g6_ParamLimits

0xbf7f,	// (0x000661d2) main_video_pane_g6

0x0006,

0xf1c3,	// (0x00069416) main_video_pane_g_ParamLimits

0xf1c3,	// (0x00069416) main_video_pane_g

0x1ecc,	// (0x0005c11f) main_video_pane_t1_ParamLimits

0x1ecc,	// (0x0005c11f) main_video_pane_t1

0xbf99,	// (0x000661ec) cams_zoom_pane_g1

0xbfa2,	// (0x000661f5) cams_zoom_pane_g2

0xbfab,	// (0x000661fe) cams_zoom_pane_g3

0xbfb4,	// (0x00066207) cams_zoom_pane_g4

0x0003,

0x0163,	// (0x0005a3b6) cams_zoom_pane_g

0x1f16,	// (0x0005c169) grid_cams_pane

0x1f24,	// (0x0005c177) linegrid_cams_pane

0x1f32,	// (0x0005c185) cell_cams_pane_ParamLimits

0x1f32,	// (0x0005c185) cell_cams_pane

0xbfbd,	// (0x00066210) cams_burst_image_pane

0xbfc5,	// (0x00066218) cell_cams_pane_g1

0xb54d,	// (0x000657a0) grid_highlight_pane_cp03

0xbdfb,	// (0x0006604e) mp_bg_pane_g1

0xb54d,	// (0x000657a0) bg_list_pane_cp03

0xdcf4,	// (0x00067f47) bg_mp_pane

0xdcfc,	// (0x00067f4f) grid_mp_pane

0xdd04,	// (0x00067f57) media_player_g1

0xdd0c,	// (0x00067f5f) media_player_t1

0xdd1a,	// (0x00067f6d) media_player_t2

0xdd28,	// (0x00067f7b) media_player_t3

0xdd36,	// (0x00067f89) media_player_t4

0xdd44,	// (0x00067f97) media_player_t5

0xdd52,	// (0x00067fa5) media_player_t6

0xdd60,	// (0x00067fb3) media_player_t7

0x0006,

0x04ff,	// (0x0005a752) media_player_t

0xdd6e,	// (0x00067fc1) wait_bar_pane_cp02

0xf3e2,	// (0x00069635) main_usb_pane_t

0x4295,	// (0x0005e4e8) cell_mp_pane

0xbdfb,	// (0x0006604e) cell_mp_pane_g1

0xb54d,	// (0x000657a0) grid_highlight_pane_cp06

0xbfcd,	// (0x00066220) grid_skin_colour_pane

0xbfd5,	// (0x00066228) list_highlight_pane_cp03

0x2059,	// (0x0005c2ac) skin_g1

0xbfdd,	// (0x00066230) skin_t1

0xbfec,	// (0x0006623f) skin_t2

0x0001,

0x0198,	// (0x0005a3eb) skin_t

0x2063,	// (0x0005c2b6) cell_skin_colour_pane_ParamLimits

0x2063,	// (0x0005c2b6) cell_skin_colour_pane

0xbffa,	// (0x0006624d) cell_skin_colour_pane_g1

0x20e7,	// (0x0005c33a) call_video_g1_ParamLimits

0x20e7,	// (0x0005c33a) call_video_g1

0x20f7,	// (0x0005c34a) call_video_g2_ParamLimits

0x20f7,	// (0x0005c34a) call_video_g2

0x0001,

0xf1fe,	// (0x00069451) call_video_g_ParamLimits

0xf1fe,	// (0x00069451) call_video_g

0x2151,	// (0x0005c3a4) call_video_uplink_pane_cp1_ParamLimits

0x2151,	// (0x0005c3a4) call_video_uplink_pane_cp1

0xc00c,	// (0x0006625f) call_video_uplink_pane_cp2

0x221d,	// (0x0005c470) video_down_crop_pane_ParamLimits

0x221d,	// (0x0005c470) video_down_crop_pane

0x231b,	// (0x0005c56e) video_down_pane_ParamLimits

0x231b,	// (0x0005c56e) video_down_pane

0xc014,	// (0x00066267) video_down_subqcif_pane_ParamLimits

0xc014,	// (0x00066267) video_down_subqcif_pane

0xc02c,	// (0x0006627f) video_down_subqcif_pane_cp_ParamLimits

0xc02c,	// (0x0006627f) video_down_subqcif_pane_cp

0xc052,	// (0x000662a5) im_reading_pane_ParamLimits

0xc052,	// (0x000662a5) im_reading_pane

0x243b,	// (0x0005c68e) im_writing_pane_ParamLimits

0x243b,	// (0x0005c68e) im_writing_pane

0x2459,	// (0x0005c6ac) im_reading_pane_t1

0xc06c,	// (0x000662bf) list_im_pane

0xc07d,	// (0x000662d0) scroll_pane_cp07

0x24ad,	// (0x0005c700) im_writing_pane_t1_ParamLimits

0x24ad,	// (0x0005c700) im_writing_pane_t1

0xc096,	// (0x000662e9) im_writing_pane_t2_ParamLimits

0xc096,	// (0x000662e9) im_writing_pane_t2

0x0001,

0xf208,	// (0x0006945b) im_writing_pane_t_ParamLimits

0xf208,	// (0x0006945b) im_writing_pane_t

0xb54d,	// (0x000657a0) input_focus_pane_cp04

0xb54d,	// (0x000657a0) input_focus_pane_cp05

0x24c2,	// (0x0005c715) list_im_single_pane_ParamLimits

0x24c2,	// (0x0005c715) list_im_single_pane

0x24e6,	// (0x0005c739) list_single_im_pane_t1

0x4259,	// (0x0005e4ac) blid_accuracy_pane

0x4261,	// (0x0005e4b4) blid_compass_pane

0x426b,	// (0x0005e4be) main_location_t1

0x4279,	// (0x0005e4cc) main_location_t2

0x4287,	// (0x0005e4da) main_location_t3

0x0002,

0xf3ef,	// (0x00069642) main_location_t

0xb54d,	// (0x000657a0) aid_levels_location

0xbdfb,	// (0x0006604e) blid_accuracy_pane_g1

0xbdfb,	// (0x0006604e) blid_accuracy_pane_g2

0x0001,

0x0209,	// (0x0005a45c) blid_accuracy_pane_g

0xc0de,	// (0x00066331) wml_content_pane

0xc11c,	// (0x0006636f) wml_button_pane_ParamLimits

0xc11c,	// (0x0006636f) wml_button_pane

0x24f5,	// (0x0005c748) wml_list_single_large_pane_ParamLimits

0x24f5,	// (0x0005c748) wml_list_single_large_pane

0x251f,	// (0x0005c772) wml_list_single_medium_pane_ParamLimits

0x251f,	// (0x0005c772) wml_list_single_medium_pane

0x2550,	// (0x0005c7a3) wml_list_single_small_pane_ParamLimits

0x2550,	// (0x0005c7a3) wml_list_single_small_pane

0xc130,	// (0x00066383) wml_selection_box_pane_ParamLimits

0xc130,	// (0x00066383) wml_selection_box_pane

0xc143,	// (0x00066396) wml_list_single_pane_t1

0xc152,	// (0x000663a5) wml_list_single_medium_pane_t1

0xc161,	// (0x000663b4) wml_list_single_large_pane_t1

0xc170,	// (0x000663c3) input_focus_pane_cp02_ParamLimits

0xc170,	// (0x000663c3) input_focus_pane_cp02

0xc183,	// (0x000663d6) wml_selection_box_pane_g1

0xc18c,	// (0x000663df) wml_selection_box_pane_t1_ParamLimits

0xc18c,	// (0x000663df) wml_selection_box_pane_t1

0xb7a8,	// (0x000659fb) bg_wml_button_pane_ParamLimits

0xb7a8,	// (0x000659fb) bg_wml_button_pane

0xc1a4,	// (0x000663f7) wml_button_pane_g1

0xc1ac,	// (0x000663ff) wml_button_pane_t1

0xc1a4,	// (0x000663f7) wml_button_bg_pane_g1

0xc1bc,	// (0x0006640f) wml_button_bg_pane_g2

0xc1c4,	// (0x00066417) wml_button_bg_pane_g3

0xc1cc,	// (0x0006641f) wml_button_bg_pane_g4

0xc1d4,	// (0x00066427) wml_button_bg_pane_g5

0xc1dc,	// (0x0006642f) wml_button_bg_pane_g6

0xc1e4,	// (0x00066437) wml_button_bg_pane_g7

0xc1ec,	// (0x0006643f) wml_button_bg_pane_g8

0xc1f4,	// (0x00066447) wml_button_bg_pane_g9

0x0008,

0x01ac,	// (0x0005a3ff) wml_button_bg_pane_g

0x258a,	// (0x0005c7dd) bg_list_pane_cp02

0xc1fc,	// (0x0006644f) mce_header_pane_ParamLimits

0xc1fc,	// (0x0006644f) mce_header_pane

0xc212,	// (0x00066465) mce_icon_pane

0xc212,	// (0x00066465) mce_image_pane

0xc21b,	// (0x0006646e) mce_text_pane_ParamLimits

0xc21b,	// (0x0006646e) mce_text_pane

0x2594,	// (0x0005c7e7) scroll_pane_cp03

0xc114,	// (0x00066367) scroll_pane_cp04

0xc22e,	// (0x00066481) scroll_pane_cp05_ParamLimits

0xc22e,	// (0x00066481) scroll_pane_cp05

0x259e,	// (0x0005c7f1) mce_header_field_pane_ParamLimits

0x259e,	// (0x0005c7f1) mce_header_field_pane

0x25be,	// (0x0005c811) mce_header_field_pane_2_ParamLimits

0x25be,	// (0x0005c811) mce_header_field_pane_2

0x25d4,	// (0x0005c827) mce_header_field_pane_3

0x25dc,	// (0x0005c82f) list_single_mce_message_pane_ParamLimits

0x25dc,	// (0x0005c82f) list_single_mce_message_pane

0x2607,	// (0x0005c85a) list_single_mce_smart_pane_ParamLimits

0x2607,	// (0x0005c85a) list_single_mce_smart_pane

0xc23a,	// (0x0006648d) input_focus_pane_cp03

0xc243,	// (0x00066496) list_header_data_pane

0x263d,	// (0x0005c890) mce_header_field_pane_t1

0x264b,	// (0x0005c89e) list_single_mce_header_pane_ParamLimits

0x264b,	// (0x0005c89e) list_single_mce_header_pane

0xc24b,	// (0x0006649e) list_single_mce_header_pane_t1

0xc25a,	// (0x000664ad) list_single_mce_message_pane_g1

0xc262,	// (0x000664b5) list_single_mce_message_pane_t1

0x269d,	// (0x0005c8f0) bg_cale_heading_pane_cp01_ParamLimits

0x269d,	// (0x0005c8f0) bg_cale_heading_pane_cp01

0xc270,	// (0x000664c3) bg_cale_pane_cp02_ParamLimits

0xc270,	// (0x000664c3) bg_cale_pane_cp02

0x26eb,	// (0x0005c93e) cale_month_corner_pane

0x270a,	// (0x0005c95d) cale_month_day_heading_pane_ParamLimits

0x270a,	// (0x0005c95d) cale_month_day_heading_pane

0x2770,	// (0x0005c9c3) cale_month_pane_g1_ParamLimits

0x2770,	// (0x0005c9c3) cale_month_pane_g1

0x27b3,	// (0x0005ca06) cale_month_pane_g2_ParamLimits

0x27b3,	// (0x0005ca06) cale_month_pane_g2

0x27eb,	// (0x0005ca3e) cale_month_pane_g3_ParamLimits

0x27eb,	// (0x0005ca3e) cale_month_pane_g3

0x2837,	// (0x0005ca8a) cale_month_pane_g4_ParamLimits

0x2837,	// (0x0005ca8a) cale_month_pane_g4

0x2883,	// (0x0005cad6) cale_month_pane_g5_ParamLimits

0x2883,	// (0x0005cad6) cale_month_pane_g5

0x28cf,	// (0x0005cb22) cale_month_pane_g6_ParamLimits

0x28cf,	// (0x0005cb22) cale_month_pane_g6

0x291b,	// (0x0005cb6e) cale_month_pane_g7_ParamLimits

0x291b,	// (0x0005cb6e) cale_month_pane_g7

0x297f,	// (0x0005cbd2) cale_month_pane_g8_ParamLimits

0x297f,	// (0x0005cbd2) cale_month_pane_g8

0x29e3,	// (0x0005cc36) cale_month_pane_g9_ParamLimits

0x29e3,	// (0x0005cc36) cale_month_pane_g9

0x2a41,	// (0x0005cc94) cale_month_pane_g10_ParamLimits

0x2a41,	// (0x0005cc94) cale_month_pane_g10

0x2a9d,	// (0x0005ccf0) cale_month_pane_g11_ParamLimits

0x2a9d,	// (0x0005ccf0) cale_month_pane_g11

0x2af1,	// (0x0005cd44) cale_month_pane_g12_ParamLimits

0x2af1,	// (0x0005cd44) cale_month_pane_g12

0x2b47,	// (0x0005cd9a) cale_month_pane_g13_ParamLimits

0x2b47,	// (0x0005cd9a) cale_month_pane_g13

0x000c,

0xf20d,	// (0x00069460) cale_month_pane_g_ParamLimits

0xf20d,	// (0x00069460) cale_month_pane_g

0x2b9d,	// (0x0005cdf0) cale_month_week_pane

0x2bc1,	// (0x0005ce14) grid_cale_month_pane_ParamLimits

0x2bc1,	// (0x0005ce14) grid_cale_month_pane

0x2c1a,	// (0x0005ce6d) cale_month_day_heading_pane_t1

0x2ca0,	// (0x0005cef3) cale_month_day_heading_pane_t2

0x2d19,	// (0x0005cf6c) cale_month_day_heading_pane_t3

0x2d92,	// (0x0005cfe5) cale_month_day_heading_pane_t4

0x2e0b,	// (0x0005d05e) cale_month_day_heading_pane_t5

0x2e84,	// (0x0005d0d7) cale_month_day_heading_pane_t6

0x2efd,	// (0x0005d150) cale_month_day_heading_pane_t7

0x0006,

0xf228,	// (0x0006947b) cale_month_day_heading_pane_t

0xbf10,	// (0x00066163) bg_cale_side_pane_cp01

0x2f8e,	// (0x0005d1e1) cale_month_week_pane_t1

0x2fa7,	// (0x0005d1fa) cale_month_week_pane_t2

0x2fc0,	// (0x0005d213) cale_month_week_pane_t3

0x2fd9,	// (0x0005d22c) cale_month_week_pane_t4

0x2ff2,	// (0x0005d245) cale_month_week_pane_t5

0x3013,	// (0x0005d266) cale_month_week_pane_t6

0x0005,

0xf237,	// (0x0006948a) cale_month_week_pane_t

0x3034,	// (0x0005d287) cell_cale_month_pane_ParamLimits

0x3034,	// (0x0005d287) cell_cale_month_pane

0x3180,	// (0x0005d3d3) cell_cale_month_pane_g1

0x318c,	// (0x0005d3df) cell_cale_month_pane_t1_ParamLimits

0x318c,	// (0x0005d3df) cell_cale_month_pane_t1

0xbf1e,	// (0x00066171) grid_highlight_pane_cp08

0xbdfb,	// (0x0006604e) main_smil_g1

0x31b8,	// (0x0005d40b) smil_status_pane

0xc2af,	// (0x00066502) smil_text_pane

0xdc14,	// (0x00067e67) bg_popup_call3_rect_pane_g8

0xdc1c,	// (0x00067e6f) bg_popup_call3_rect_pane_g9

0x0008,

0x04a2,	// (0x0005a6f5) bg_popup_call3_rect_pane_g

0xde76,	// (0x000680c9) smil_status_volume_pane_g1

0xc2b9,	// (0x0006650c) smil_status_pane_t1

0x4691,	// (0x0005e8e4) volume_smil_pane

0xc2d0,	// (0x00066523) list_smil_text_pane

0x31cb,	// (0x0005d41e) scroll_pane_cp011

0x31d6,	// (0x0005d429) smil_text_list_pane_t1_ParamLimits

0x31d6,	// (0x0005d429) smil_text_list_pane_t1

0x324e,	// (0x0005d4a1) aid_volume_smil_ParamLimits

0x324e,	// (0x0005d4a1) aid_volume_smil

0xbdfb,	// (0x0006604e) smil_volume_pane_g1

0xbdfb,	// (0x0006604e) smil_volume_pane_g2

0x0001,

0x0209,	// (0x0005a45c) smil_volume_pane_g

0x1821,	// (0x0005ba74) listscroll_cale_day_pane

0xc2da,	// (0x0006652d) bg_cale_pane

0xc2f2,	// (0x00066545) list_cale_pane

0xc315,	// (0x00066568) scroll_pane_cp09

0xc326,	// (0x00066579) cale_bg_pane_g1

0xc32e,	// (0x00066581) cale_bg_pane_g2

0xc336,	// (0x00066589) cale_bg_pane_g3

0xc33e,	// (0x00066591) cale_bg_pane_g4

0xc346,	// (0x00066599) cale_bg_pane_g5

0xc34e,	// (0x000665a1) cale_bg_pane_g6

0xc356,	// (0x000665a9) cale_bg_pane_g7

0xc35e,	// (0x000665b1) cale_bg_pane_g8

0xc366,	// (0x000665b9) cale_bg_pane_g9

0x0008,

0x020e,	// (0x0005a461) cale_bg_pane_g

0x3278,	// (0x0005d4cb) list_cale_time_pane_ParamLimits

0x3278,	// (0x0005d4cb) list_cale_time_pane

0xc36e,	// (0x000665c1) list_cale_time_pane_g1_ParamLimits

0xc36e,	// (0x000665c1) list_cale_time_pane_g1

0xc37a,	// (0x000665cd) list_cale_time_pane_g2_ParamLimits

0xc37a,	// (0x000665cd) list_cale_time_pane_g2

0x329a,	// (0x0005d4ed) list_cale_time_pane_g3_ParamLimits

0x329a,	// (0x0005d4ed) list_cale_time_pane_g3

0x32a8,	// (0x0005d4fb) list_cale_time_pane_g4_ParamLimits

0x32a8,	// (0x0005d4fb) list_cale_time_pane_g4

0x32b6,	// (0x0005d509) list_cale_time_pane_g5_ParamLimits

0x32b6,	// (0x0005d509) list_cale_time_pane_g5

0x0005,

0xf257,	// (0x000694aa) list_cale_time_pane_g_ParamLimits

0xf257,	// (0x000694aa) list_cale_time_pane_g

0xc394,	// (0x000665e7) list_cale_time_pane_t1_ParamLimits

0xc394,	// (0x000665e7) list_cale_time_pane_t1

0xc3bc,	// (0x0006660f) list_cale_time_pane_t2_ParamLimits

0xc3bc,	// (0x0006660f) list_cale_time_pane_t2

0x364c,	// (0x0005d89f) aid_blid_cardinal_pane

0x368e,	// (0x0005d8e1) compass_pane_t4

0xc3e4,	// (0x00066637) list_cale_time_pane_t4_ParamLimits

0xc3e4,	// (0x00066637) list_cale_time_pane_t4

0x369c,	// (0x0005d8ef) compass_pane_t5

0x36ac,	// (0x0005d8ff) compass_pane_t6

0x36ba,	// (0x0005d90d) compass_pane_t7

0xc893,	// (0x00066ae6) navi_pane_cc_t1

0xca7e,	// (0x00066cd1) aid_phob_thumbnail_center_pane

0x3d5f,	// (0x0005dfb2) main_postcard_pane_g4_ParamLimits

0x0002,

0x022e,	// (0x0005a481) list_cale_time_pane_t_ParamLimits

0x022e,	// (0x0005a481) list_cale_time_pane_t

0xb1a4,	// (0x000653f7) bg_popup_window_pane_cp02_ParamLimits

0xb1a4,	// (0x000653f7) bg_popup_window_pane_cp02

0xc40c,	// (0x0006665f) heading_pane_cp01_ParamLimits

0xc40c,	// (0x0006665f) heading_pane_cp01

0xc418,	// (0x0006666b) loc_req_pane_ParamLimits

0xc418,	// (0x0006666b) loc_req_pane

0xc428,	// (0x0006667b) loc_type_pane_ParamLimits

0xc428,	// (0x0006667b) loc_type_pane

0xc43a,	// (0x0006668d) loc_type_pane_t1_ParamLimits

0xc43a,	// (0x0006668d) loc_type_pane_t1

0xc44c,	// (0x0006669f) loc_type_pane_t2_ParamLimits

0xc44c,	// (0x0006669f) loc_type_pane_t2

0xc45e,	// (0x000666b1) loc_type_pane_t3_ParamLimits

0xc45e,	// (0x000666b1) loc_type_pane_t3

0x0002,

0x0235,	// (0x0005a488) loc_type_pane_t_ParamLimits

0x0235,	// (0x0005a488) loc_type_pane_t

0xc470,	// (0x000666c3) list_loc_req_pane

0xc47a,	// (0x000666cd) scroll_pane_cp012

0x32c4,	// (0x0005d517) list_single_loc_request_popup_menu_pane_ParamLimits

0x32c4,	// (0x0005d517) list_single_loc_request_popup_menu_pane

0xc485,	// (0x000666d8) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc485,	// (0x000666d8) list_single_loc_request_popup_menu_pane_g1

0xc491,	// (0x000666e4) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc491,	// (0x000666e4) list_single_loc_request_popup_menu_pane_g2

0x0001,

0x023c,	// (0x0005a48f) list_single_loc_request_popup_menu_pane_g_ParamLimits

0x023c,	// (0x0005a48f) list_single_loc_request_popup_menu_pane_g

0xc49d,	// (0x000666f0) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc49d,	// (0x000666f0) list_single_loc_request_popup_menu_pane_t1

0x32d6,	// (0x0005d529) bg_popup_window_pane_cp03_ParamLimits

0x32d6,	// (0x0005d529) bg_popup_window_pane_cp03

0x32e4,	// (0x0005d537) heading_loc_req_pane_ParamLimits

0x32e4,	// (0x0005d537) heading_loc_req_pane

0x32f0,	// (0x0005d543) popup_dyc_status_message_window_g1_ParamLimits

0x32f0,	// (0x0005d543) popup_dyc_status_message_window_g1

0x32fc,	// (0x0005d54f) popup_dyc_status_message_window_t1_ParamLimits

0x32fc,	// (0x0005d54f) popup_dyc_status_message_window_t1

0x330e,	// (0x0005d561) popup_dyc_status_message_window_t2_ParamLimits

0x330e,	// (0x0005d561) popup_dyc_status_message_window_t2

0x3320,	// (0x0005d573) popup_dyc_status_message_window_t3_ParamLimits

0x3320,	// (0x0005d573) popup_dyc_status_message_window_t3

0x0002,

0xf264,	// (0x000694b7) popup_dyc_status_message_window_t_ParamLimits

0xf264,	// (0x000694b7) popup_dyc_status_message_window_t

0xb54d,	// (0x000657a0) bg_heading_pane_cp01

0xc4bf,	// (0x00066712) heading_loc_req_pane_g1

0xc4c7,	// (0x0006671a) heading_loc_req_pane_g2

0xc4cf,	// (0x00066722) heading_loc_req_pane_g3

0x0002,

0x0248,	// (0x0005a49b) heading_loc_req_pane_g

0xc4d7,	// (0x0006672a) heading_loc_req_pane_t1

0xc4e6,	// (0x00066739) bg_popup_sub_pane_cp01_ParamLimits

0xc4e6,	// (0x00066739) bg_popup_sub_pane_cp01

0xc4f4,	// (0x00066747) popup_cale_events_window_g1_ParamLimits

0xc4f4,	// (0x00066747) popup_cale_events_window_g1

0xc514,	// (0x00066767) popup_cale_events_window_g2_ParamLimits

0xc514,	// (0x00066767) popup_cale_events_window_g2

0x0001,

0x027c,	// (0x0005a4cf) popup_cale_events_window_g_ParamLimits

0x027c,	// (0x0005a4cf) popup_cale_events_window_g

0xc534,	// (0x00066787) popup_cale_events_window_t1_ParamLimits

0xc534,	// (0x00066787) popup_cale_events_window_t1

0xc546,	// (0x00066799) popup_cale_events_window_t2_ParamLimits

0xc546,	// (0x00066799) popup_cale_events_window_t2

0xc584,	// (0x000667d7) popup_cale_events_window_t3_ParamLimits

0xc584,	// (0x000667d7) popup_cale_events_window_t3

0xc5be,	// (0x00066811) popup_cale_events_window_t4_ParamLimits

0xc5be,	// (0x00066811) popup_cale_events_window_t4

0x0003,

0x0281,	// (0x0005a4d4) popup_cale_events_window_t_ParamLimits

0x0281,	// (0x0005a4d4) popup_cale_events_window_t

0x3419,	// (0x0005d66c) call_type_pane

0xca70,	// (0x00066cc3) popup_call_status_window_g1

0x3425,	// (0x0005d678) popup_call_status_window_g2

0x3431,	// (0x0005d684) popup_call_status_window_g3

0x0002,

0xf298,	// (0x000694eb) popup_call_status_window_g

0xc5f4,	// (0x00066847) call_type_pane_g1

0xc5fd,	// (0x00066850) call_type_pane_g2

0x0001,

0x0291,	// (0x0005a4e4) call_type_pane_g

0xb54d,	// (0x000657a0) bg_popup_sub_pane_cp02

0xc606,	// (0x00066859) listscroll_popup_wml_pane

0xc60e,	// (0x00066861) list_wml_pane

0xc618,	// (0x0006686b) scroll_pane_cp013

0xc623,	// (0x00066876) list_single_graphic_popup_wml_pane_ParamLimits

0xc623,	// (0x00066876) list_single_graphic_popup_wml_pane

0xbdfb,	// (0x0006604e) list_single_graphic_popup_wml_pane_g1

0xc637,	// (0x0006688a) list_single_graphic_popup_wml_pane_g2

0x0001,

0x0296,	// (0x0005a4e9) list_single_graphic_popup_wml_pane_g

0xc63f,	// (0x00066892) list_single_graphic_popup_wml_pane_t1

0xc64d,	// (0x000668a0) aid_call_pane

0xb7a0,	// (0x000659f3) popup_clock_analogue_window_g1

0xb7a0,	// (0x000659f3) popup_clock_analogue_window_g2

0x343d,	// (0x0005d690) popup_clock_analogue_window_g3

0x343d,	// (0x0005d690) popup_clock_analogue_window_g4

0xbdfb,	// (0x0006604e) popup_clock_analogue_window_g5

0x0004,

0xf29f,	// (0x000694f2) popup_clock_analogue_window_g

0x3445,	// (0x0005d698) popup_clock_analogue_window_t1

0x3453,	// (0x0005d6a6) clock_digital_number_pane_ParamLimits

0x3453,	// (0x0005d6a6) clock_digital_number_pane

0x345f,	// (0x0005d6b2) clock_digital_number_pane_cp02_ParamLimits

0x345f,	// (0x0005d6b2) clock_digital_number_pane_cp02

0x346b,	// (0x0005d6be) clock_digital_number_pane_cp03_ParamLimits

0x346b,	// (0x0005d6be) clock_digital_number_pane_cp03

0x3477,	// (0x0005d6ca) clock_digital_number_pane_cp04_ParamLimits

0x3477,	// (0x0005d6ca) clock_digital_number_pane_cp04

0x3487,	// (0x0005d6da) clock_digital_separator_pane_ParamLimits

0x3487,	// (0x0005d6da) clock_digital_separator_pane

0x3493,	// (0x0005d6e6) popup_clock_digital_window_t1

0xbdfb,	// (0x0006604e) clock_digital_number_pane_g1

0xbdfb,	// (0x0006604e) clock_digital_number_pane_g2

0x0001,

0x0209,	// (0x0005a45c) clock_digital_number_pane_g

0xbdfb,	// (0x0006604e) clock_digital_separator_pane_g1

0xbdfb,	// (0x0006604e) clock_digital_separator_pane_g2

0x0001,

0x0209,	// (0x0005a45c) clock_digital_separator_pane_g

0xb54d,	// (0x000657a0) bg_popup_window_pane_cp04

0xc65d,	// (0x000668b0) heading_pane_cp03

0xc665,	// (0x000668b8) listscroll_popup_gms_pane

0xc66d,	// (0x000668c0) grid_large_graphic_popup_pane

0xc677,	// (0x000668ca) listscroll_popup_gms_pane_g1

0xc67f,	// (0x000668d2) listscroll_popup_gms_pane_g2

0x0001,

0x02a6,	// (0x0005a4f9) listscroll_popup_gms_pane_g

0xc114,	// (0x00066367) scroll_pane_cp014

0x34b0,	// (0x0005d703) cell_large_graphic_popup_pane_ParamLimits

0x34b0,	// (0x0005d703) cell_large_graphic_popup_pane

0x34c8,	// (0x0005d71b) cell_large_graphic_popup_pane_g1_ParamLimits

0x34c8,	// (0x0005d71b) cell_large_graphic_popup_pane_g1

0xc687,	// (0x000668da) cell_large_graphic_popup_pane_g2_ParamLimits

0xc687,	// (0x000668da) cell_large_graphic_popup_pane_g2

0xc693,	// (0x000668e6) cell_large_graphic_popup_pane_g3_ParamLimits

0xc693,	// (0x000668e6) cell_large_graphic_popup_pane_g3

0xc6a0,	// (0x000668f3) cell_large_graphic_popup_pane_g4_ParamLimits

0xc6a0,	// (0x000668f3) cell_large_graphic_popup_pane_g4

0x0003,

0xf2aa,	// (0x000694fd) cell_large_graphic_popup_pane_g_ParamLimits

0xf2aa,	// (0x000694fd) cell_large_graphic_popup_pane_g

0xc6b0,	// (0x00066903) grid_highlight_pane_cp010

0xbdfb,	// (0x0006604e) bg_popup_call_pane_g1

0xc6ba,	// (0x0006690d) list_single_graphic_popup_conf_pane_ParamLimits

0xc6ba,	// (0x0006690d) list_single_graphic_popup_conf_pane

0xc6cd,	// (0x00066920) list_highlight_pane_cp01

0xc6d6,	// (0x00066929) list_single_graphic_popup_conf_pane_g1

0xc6de,	// (0x00066931) list_single_graphic_popup_conf_pane_g2

0x0001,

0x02b4,	// (0x0005a507) list_single_graphic_popup_conf_pane_g

0xc6e6,	// (0x00066939) list_single_graphic_popup_conf_pane_t1

0xc6f4,	// (0x00066947) linegrid_cams_pane_g1

0x34d4,	// (0x0005d727) linegrid_cams_pane_g2

0xbf51,	// (0x000661a4) linegrid_cams_pane_g3

0xc6fd,	// (0x00066950) linegrid_cams_pane_g4

0x34dd,	// (0x0005d730) linegrid_cams_pane_g5

0x34e6,	// (0x0005d739) linegrid_cams_pane_g6

0xbf5a,	// (0x000661ad) linegrid_cams_pane_g7

0x0006,

0xf2b3,	// (0x00069506) linegrid_cams_pane_g

0xc706,	// (0x00066959) popup_clock_analogue_window

0xc706,	// (0x00066959) popup_clock_digital_window

0xb54d,	// (0x000657a0) popup_phob_thumbnail_window

0xbdfb,	// (0x0006604e) call_video_uplink_pane_g1

0xc70f,	// (0x00066962) call_video_uplink_pane_g2

0x0001,

0x02c8,	// (0x0005a51b) call_video_uplink_pane_g

0xc717,	// (0x0006696a) video_uplink_pane

0xc71f,	// (0x00066972) mce_image_pane_g1

0x34ef,	// (0x0005d742) mce_image_pane_g2

0x34f9,	// (0x0005d74c) mce_image_pane_g3

0x3501,	// (0x0005d754) mce_image_pane_g4

0x3509,	// (0x0005d75c) mce_image_pane_g5

0x0004,

0xf2c2,	// (0x00069515) mce_image_pane_g

0xc729,	// (0x0006697c) control_top_pane_stacon_cp01_ParamLimits

0xc729,	// (0x0006697c) control_top_pane_stacon_cp01

0xc73d,	// (0x00066990) uni_indicator_pane_stacon_cp01_ParamLimits

0xc73d,	// (0x00066990) uni_indicator_pane_stacon_cp01

0xc74e,	// (0x000669a1) bg_popup_sub_pane_cp03

0xc758,	// (0x000669ab) chi_dic_find_pane

0x3511,	// (0x0005d764) listscroll_chi_dic_pane

0xc760,	// (0x000669b3) main_pane_chidic_g1

0xc768,	// (0x000669bb) chi_dic_find_pane_t1

0xc776,	// (0x000669c9) find_chidic_pane

0xc77f,	// (0x000669d2) chi_dic_list_pane_ParamLimits

0xc77f,	// (0x000669d2) chi_dic_list_pane

0xc790,	// (0x000669e3) scroll_pane_cp020

0xc798,	// (0x000669eb) find_chidic_pane_t1

0xb54d,	// (0x000657a0) input_focus_pane_cp06

0x3525,	// (0x0005d778) list_chi_dic_pane_ParamLimits

0x3525,	// (0x0005d778) list_chi_dic_pane

0x353f,	// (0x0005d792) list_chi_dic_pane_t1_ParamLimits

0x353f,	// (0x0005d792) list_chi_dic_pane_t1

0xb54d,	// (0x000657a0) list_highlight_pane_cp020

0xc7a7,	// (0x000669fa) bg_cale_heading_pane_g1

0x3552,	// (0x0005d7a5) bg_cale_heading_pane_g2

0x355a,	// (0x0005d7ad) bg_cale_heading_pane_g3

0x3562,	// (0x0005d7b5) bg_cale_heading_pane_g4

0x356c,	// (0x0005d7bf) bg_cale_heading_pane_g5

0x3576,	// (0x0005d7c9) bg_cale_heading_pane_g6

0x357e,	// (0x0005d7d1) bg_cale_heading_pane_g7

0x3586,	// (0x0005d7d9) bg_cale_heading_pane_g8

0x3590,	// (0x0005d7e3) bg_cale_heading_pane_g9

0x0008,

0xf2cd,	// (0x00069520) bg_cale_heading_pane_g

0xc7a7,	// (0x000669fa) bg_cale_side_pane_g1

0x359a,	// (0x0005d7ed) bg_cale_side_pane_g2

0x35a4,	// (0x0005d7f7) bg_cale_side_pane_g3

0x35ae,	// (0x0005d801) bg_cale_side_pane_g4

0x35b8,	// (0x0005d80b) bg_cale_side_pane_g5

0x35c2,	// (0x0005d815) bg_cale_side_pane_g6

0x35cc,	// (0x0005d81f) bg_cale_side_pane_g7

0x35d6,	// (0x0005d829) bg_cale_side_pane_g8

0x35de,	// (0x0005d831) bg_cale_side_pane_g9

0x0008,

0xf2e0,	// (0x00069533) bg_cale_side_pane_g

0x35e6,	// (0x0005d839) popup_call_status_window_ParamLimits

0x35e6,	// (0x0005d839) popup_call_status_window

0xc7af,	// (0x00066a02) stacon_top_pane

0xc7b7,	// (0x00066a0a) status_pane_ParamLimits

0xc7b7,	// (0x00066a0a) status_pane

0xc7cc,	// (0x00066a1f) status_small_pane

0xc7d4,	// (0x00066a27) control_pane

0xb54d,	// (0x000657a0) stacon_bottom_pane

0xc7dc,	// (0x00066a2f) list_single_mce_smart_pane_t1_ParamLimits

0xc7dc,	// (0x00066a2f) list_single_mce_smart_pane_t1

0xc7ef,	// (0x00066a42) list_single_mce_smart_pane_t2_ParamLimits

0xc7ef,	// (0x00066a42) list_single_mce_smart_pane_t2

0x0001,

0x02fe,	// (0x0005a551) list_single_mce_smart_pane_t_ParamLimits

0x02fe,	// (0x0005a551) list_single_mce_smart_pane_t

0x35f2,	// (0x0005d845) compass_pane

0x35fe,	// (0x0005d851) main_location2_pane_t1

0x3612,	// (0x0005d865) main_location2_pane_t2

0x3626,	// (0x0005d879) main_location2_pane_t3

0x0003,

0xf2f3,	// (0x00069546) main_location2_pane_t

0xc80e,	// (0x00066a61) compass_pane_g1_ParamLimits

0xc80e,	// (0x00066a61) compass_pane_g1

0x3670,	// (0x0005d8c3) compass_pane_t1

0x367f,	// (0x0005d8d2) compass_pane_t2

0x0005,

0xf2fc,	// (0x0006954f) compass_pane_t

0x36ca,	// (0x0005d91d) text_secondary_cp61

0xc88a,	// (0x00066add) navi_pane_cams_g5

0xc906,	// (0x00066b59) navi_pane_im_t1

0xc914,	// (0x00066b67) navi_pane_mp_g1_ParamLimits

0xc914,	// (0x00066b67) navi_pane_mp_g1

0xc928,	// (0x00066b7b) navi_pane_mp_g2_ParamLimits

0xc928,	// (0x00066b7b) navi_pane_mp_g2

0xc934,	// (0x00066b87) navi_pane_mp_g3_ParamLimits

0xc934,	// (0x00066b87) navi_pane_mp_g3

0x0002,

0x0320,	// (0x0005a573) navi_pane_mp_g_ParamLimits

0x0320,	// (0x0005a573) navi_pane_mp_g

0xc940,	// (0x00066b93) navi_pane_mp_t1

0xc94e,	// (0x00066ba1) navi_pane_mp_t2

0x0002,

0x0327,	// (0x0005a57a) navi_pane_mp_t

0xc9b9,	// (0x00066c0c) navi_pane_vt_g1

0xc940,	// (0x00066b93) navi_pane_vt_t1

0xc9c1,	// (0x00066c14) navi_slider_pane

0xbf6b,	// (0x000661be) zooming_pane

0xc9d1,	// (0x00066c24) navi_slider_pane_g1

0x3705,	// (0x0005d958) navi_slider_pane_g2

0x0006,

0xf309,	// (0x0006955c) navi_slider_pane_g

0xc9f5,	// (0x00066c48) aid_levels_zoom

0xc9fd,	// (0x00066c50) zooming_pane_g1

0xca05,	// (0x00066c58) zooming_pane_g2

0xca05,	// (0x00066c58) zooming_pane_g3

0x0002,

0x033d,	// (0x0005a590) zooming_pane_g

0xca0d,	// (0x00066c60) level_10_zoom

0xca16,	// (0x00066c69) level_11_zoom

0xca1f,	// (0x00066c72) level_1_zoom

0xca28,	// (0x00066c7b) level_2_zoom

0xca31,	// (0x00066c84) level_3_zoom

0xca3a,	// (0x00066c8d) level_4_zoom

0xca43,	// (0x00066c96) level_5_zoom

0xca4c,	// (0x00066c9f) level_6_zoom

0xca55,	// (0x00066ca8) level_7_zoom

0xca5e,	// (0x00066cb1) level_8_zoom

0xca67,	// (0x00066cba) level_9_zoom

0xca86,	// (0x00066cd9) popup_phob_thumbnail_window_g1

0xca8e,	// (0x00066ce1) popup_phob_thumbnail_window_g2

0x0001,

0x0344,	// (0x0005a597) popup_phob_thumbnail_window_g

0xdd76,	// (0x00067fc9) level_1_location

0xdd7e,	// (0x00067fd1) level_2_location

0xdd86,	// (0x00067fd9) level_3_location

0xdd8e,	// (0x00067fe1) level_4_location

0xbf6b,	// (0x000661be) level_5_location

0x3717,	// (0x0005d96a) mce_icon_pane_g1

0x371f,	// (0x0005d972) mce_icon_pane_g2

0x0001,

0xf318,	// (0x0006956b) mce_icon_pane_g

0x3727,	// (0x0005d97a) main_mup_pane_g1_ParamLimits

0x3727,	// (0x0005d97a) main_mup_pane_g1

0x373f,	// (0x0005d992) main_mup_pane_g2_ParamLimits

0x373f,	// (0x0005d992) main_mup_pane_g2

0x375b,	// (0x0005d9ae) main_mup_pane_g3_ParamLimits

0x375b,	// (0x0005d9ae) main_mup_pane_g3

0x3777,	// (0x0005d9ca) main_mup_pane_g4_ParamLimits

0x3777,	// (0x0005d9ca) main_mup_pane_g4

0x3793,	// (0x0005d9e6) main_mup_pane_g5_ParamLimits

0x3793,	// (0x0005d9e6) main_mup_pane_g5

0x37b4,	// (0x0005da07) main_mup_pane_g6_ParamLimits

0x37b4,	// (0x0005da07) main_mup_pane_g6

0x37d0,	// (0x0005da23) main_mup_pane_g7_ParamLimits

0x37d0,	// (0x0005da23) main_mup_pane_g7

0x37ec,	// (0x0005da3f) main_mup_pane_g8_ParamLimits

0x37ec,	// (0x0005da3f) main_mup_pane_g8

0x380c,	// (0x0005da5f) main_mup_pane_g9_ParamLimits

0x380c,	// (0x0005da5f) main_mup_pane_g9

0x382b,	// (0x0005da7e) main_mup_pane_g10_ParamLimits

0x382b,	// (0x0005da7e) main_mup_pane_g10

0x384a,	// (0x0005da9d) main_mup_pane_g11_ParamLimits

0x384a,	// (0x0005da9d) main_mup_pane_g11

0x3862,	// (0x0005dab5) main_mup_pane_g12_ParamLimits

0x3862,	// (0x0005dab5) main_mup_pane_g12

0x3870,	// (0x0005dac3) main_mup_pane_g13_ParamLimits

0x3870,	// (0x0005dac3) main_mup_pane_g13

0x000c,

0xf31d,	// (0x00069570) main_mup_pane_g_ParamLimits

0xf31d,	// (0x00069570) main_mup_pane_g

0x3886,	// (0x0005dad9) main_mup_pane_t1_ParamLimits

0x3886,	// (0x0005dad9) main_mup_pane_t1

0x38a3,	// (0x0005daf6) main_mup_pane_t2_ParamLimits

0x38a3,	// (0x0005daf6) main_mup_pane_t2

0x38bd,	// (0x0005db10) main_mup_pane_t3_ParamLimits

0x38bd,	// (0x0005db10) main_mup_pane_t3

0x38d7,	// (0x0005db2a) main_mup_pane_t4_ParamLimits

0x38d7,	// (0x0005db2a) main_mup_pane_t4

0x38e9,	// (0x0005db3c) main_mup_pane_t5_ParamLimits

0x38e9,	// (0x0005db3c) main_mup_pane_t5

0x38fb,	// (0x0005db4e) main_mup_pane_t6_ParamLimits

0x38fb,	// (0x0005db4e) main_mup_pane_t6

0x0005,

0xf338,	// (0x0006958b) main_mup_pane_t_ParamLimits

0xf338,	// (0x0006958b) main_mup_pane_t

0x3911,	// (0x0005db64) mup_progress_pane_ParamLimits

0x3911,	// (0x0005db64) mup_progress_pane

0x391d,	// (0x0005db70) mup_visualizer_pane_ParamLimits

0x391d,	// (0x0005db70) mup_visualizer_pane

0x3957,	// (0x0005dbaa) mup_volume_pane_ParamLimits

0x3957,	// (0x0005dbaa) mup_volume_pane

0xca70,	// (0x00066cc3) mup_visualizer_pane_g1_ParamLimits

0xca70,	// (0x00066cc3) mup_visualizer_pane_g1

0xca70,	// (0x00066cc3) mup_visualizer_pane_g2_ParamLimits

0xca70,	// (0x00066cc3) mup_visualizer_pane_g2

0xc80e,	// (0x00066a61) mup_visualizer_pane_g3_ParamLimits

0xc80e,	// (0x00066a61) mup_visualizer_pane_g3

0x0002,

0x0376,	// (0x0005a5c9) mup_visualizer_pane_g_ParamLimits

0x0376,	// (0x0005a5c9) mup_visualizer_pane_g

0xbdfb,	// (0x0006604e) mup_volume_pane_g1

0xca9e,	// (0x00066cf1) mup_volume_pane_g2

0x0001,

0x037d,	// (0x0005a5d0) mup_volume_pane_g

0xbdfb,	// (0x0006604e) mup_progress_pane_g1

0xcaa7,	// (0x00066cfa) mup_progress_pane_g2

0xcab0,	// (0x00066d03) mup_progress_pane_g3

0x0002,

0x0382,	// (0x0005a5d5) mup_progress_pane_g

0xb54d,	// (0x000657a0) bg_popup_window_pane_cp05

0xcab9,	// (0x00066d0c) heading_pane_cp02_ParamLimits

0xcab9,	// (0x00066d0c) heading_pane_cp02

0xcad3,	// (0x00066d26) list_popup_blid_pane

0xcadb,	// (0x00066d2e) list_blid_sat_info_pane_ParamLimits

0xcadb,	// (0x00066d2e) list_blid_sat_info_pane

0xcaee,	// (0x00066d41) list_blid_sat_info_pane_g1

0xcaf6,	// (0x00066d49) list_blid_sat_info_pane_t1

0x3a64,	// (0x0005dcb7) mup_equalizer_pane_ParamLimits

0x3a64,	// (0x0005dcb7) mup_equalizer_pane

0x3a85,	// (0x0005dcd8) mup_equalizer_pane_cp1_ParamLimits

0x3a85,	// (0x0005dcd8) mup_equalizer_pane_cp1

0x3aa6,	// (0x0005dcf9) mup_equalizer_pane_cp2_ParamLimits

0x3aa6,	// (0x0005dcf9) mup_equalizer_pane_cp2

0x3ac7,	// (0x0005dd1a) mup_equalizer_pane_cp3_ParamLimits

0x3ac7,	// (0x0005dd1a) mup_equalizer_pane_cp3

0x3ae8,	// (0x0005dd3b) mup_equalizer_pane_cp4_ParamLimits

0x3ae8,	// (0x0005dd3b) mup_equalizer_pane_cp4

0x3b09,	// (0x0005dd5c) mup_equalizer_pane_cp5

0x3b1f,	// (0x0005dd72) mup_equalizer_pane_cp6

0x3b37,	// (0x0005dd8a) mup_equalizer_pane_cp7

0xdc94,	// (0x00067ee7) bg_popup_call_poc_act_pane_g9

0xdc9c,	// (0x00067eef) bg_popup_call_poc_act_pane_g10

0xdca4,	// (0x00067ef7) bg_popup_call_poc_act_pane_g11

0x000a,

0xb7a8,	// (0x000659fb) mup_scale_pane

0xbdfb,	// (0x0006604e) mup_scale_pane_g1

0xcb04,	// (0x00066d57) mup_scale_pane_g2

0x0006,

0xf35a,	// (0x000695ad) mup_scale_pane_g

0xcb28,	// (0x00066d7b) msg_data_pane

0xcb30,	// (0x00066d83) scroll_pane_cp017

0x3b61,	// (0x0005ddb4) bg_list_pane_cp04_ParamLimits

0x3b61,	// (0x0005ddb4) bg_list_pane_cp04

0xcb38,	// (0x00066d8b) msg_data_pane_g1

0x3b7d,	// (0x0005ddd0) msg_data_pane_g2

0x3b87,	// (0x0005ddda) msg_data_pane_g3

0x3b8f,	// (0x0005dde2) msg_data_pane_g4

0x3b97,	// (0x0005ddea) msg_data_pane_g5

0x3b9f,	// (0x0005ddf2) msg_data_pane_g6

0x3ba7,	// (0x0005ddfa) msg_data_pane_g7

0x0006,

0xf369,	// (0x000695bc) msg_data_pane_g

0x3baf,	// (0x0005de02) msg_text_pane_ParamLimits

0x3baf,	// (0x0005de02) msg_text_pane

0x3c00,	// (0x0005de53) qrid_highlight_pane_cp011_ParamLimits

0x3c00,	// (0x0005de53) qrid_highlight_pane_cp011

0xb54d,	// (0x000657a0) msg_body_pane

0xb54d,	// (0x000657a0) msg_header_pane

0xcb49,	// (0x00066d9c) input_focus_pane_cp07

0x3c26,	// (0x0005de79) msg_header_pane_t1_ParamLimits

0x3c26,	// (0x0005de79) msg_header_pane_t1

0x9c88,	// (0x00063edb) msg_header_pane_t2_ParamLimits

0x9c88,	// (0x00063edb) msg_header_pane_t2

0x0001,

0xf37d,	// (0x000695d0) msg_header_pane_t_ParamLimits

0xf37d,	// (0x000695d0) msg_header_pane_t

0xcb5e,	// (0x00066db1) msg_body_pane_g1

0x3c38,	// (0x0005de8b) msg_body_pane_t1_ParamLimits

0x3c38,	// (0x0005de8b) msg_body_pane_t1

0x9c9a,	// (0x00063eed) msg_body_pane_t2_ParamLimits

0x9c9a,	// (0x00063eed) msg_body_pane_t2

0x9cac,	// (0x00063eff) msg_body_pane_t3_ParamLimits

0x9cac,	// (0x00063eff) msg_body_pane_t3

0x0002,

0xf382,	// (0x000695d5) msg_body_pane_t_ParamLimits

0xf382,	// (0x000695d5) msg_body_pane_t

0x3cbb,	// (0x0005df0e) main_viewer_pane_g1_ParamLimits

0x3cbb,	// (0x0005df0e) main_viewer_pane_g1

0x3cc7,	// (0x0005df1a) main_viewer_pane_g2_ParamLimits

0x3cc7,	// (0x0005df1a) main_viewer_pane_g2

0x3cd3,	// (0x0005df26) main_viewer_pane_g3_ParamLimits

0x3cd3,	// (0x0005df26) main_viewer_pane_g3

0x3ce4,	// (0x0005df37) main_viewer_pane_g4_ParamLimits

0x3ce4,	// (0x0005df37) main_viewer_pane_g4

0x3cf5,	// (0x0005df48) main_viewer_pane_g5_ParamLimits

0x3cf5,	// (0x0005df48) main_viewer_pane_g5

0x3cf5,	// (0x0005df48) main_viewer_pane_g7_ParamLimits

0x3cf5,	// (0x0005df48) main_viewer_pane_g7

0xc485,	// (0x000666d8) main_viewer_pane_g8_ParamLimits

0xc485,	// (0x000666d8) main_viewer_pane_g8

0x0007,

0xf392,	// (0x000695e5) main_viewer_pane_g_ParamLimits

0xf392,	// (0x000695e5) main_viewer_pane_g

0xcb66,	// (0x00066db9) viewer_content_pane_ParamLimits

0xcb66,	// (0x00066db9) viewer_content_pane

0x3d33,	// (0x0005df86) main_postcard_pane_g1_ParamLimits

0x3d33,	// (0x0005df86) main_postcard_pane_g1

0x3d41,	// (0x0005df94) main_postcard_pane_g2_ParamLimits

0x3d41,	// (0x0005df94) main_postcard_pane_g2

0x3d4f,	// (0x0005dfa2) main_postcard_pane_g3_ParamLimits

0x3d4f,	// (0x0005dfa2) main_postcard_pane_g3

0x0005,

0xf3a3,	// (0x000695f6) main_postcard_pane_g_ParamLimits

0xf3a3,	// (0x000695f6) main_postcard_pane_g

0x3d5f,	// (0x0005dfb2) main_postcard_pane_g4

0xde63,	// (0x000680b6) smil_status_volume_pane_g2

0x3d8b,	// (0x0005dfde) postcard_pane_ParamLimits

0x3d8b,	// (0x0005dfde) postcard_pane

0xca70,	// (0x00066cc3) postcard_pane_g1_ParamLimits

0xca70,	// (0x00066cc3) postcard_pane_g1

0x3dbd,	// (0x0005e010) postcard_pane_g2_ParamLimits

0x3dbd,	// (0x0005e010) postcard_pane_g2

0x3dc9,	// (0x0005e01c) postcard_pane_g3_ParamLimits

0x3dc9,	// (0x0005e01c) postcard_pane_g3

0xcb82,	// (0x00066dd5) postcard_pane_g4_ParamLimits

0xcb82,	// (0x00066dd5) postcard_pane_g4

0x3dd5,	// (0x0005e028) postcard_pane_g5_ParamLimits

0x3dd5,	// (0x0005e028) postcard_pane_g5

0x3de1,	// (0x0005e034) postcard_pane_g6_ParamLimits

0x3de1,	// (0x0005e034) postcard_pane_g6

0xcb74,	// (0x00066dc7) postcard_pane_g7_ParamLimits

0xcb74,	// (0x00066dc7) postcard_pane_g7

0x0006,

0xf3b0,	// (0x00069603) postcard_pane_g_ParamLimits

0xf3b0,	// (0x00069603) postcard_pane_g

0x3ded,	// (0x0005e040) main_mp2_pane_g1_ParamLimits

0x3ded,	// (0x0005e040) main_mp2_pane_g1

0x3df9,	// (0x0005e04c) main_mp2_pane_g2_ParamLimits

0x3df9,	// (0x0005e04c) main_mp2_pane_g2

0x3e05,	// (0x0005e058) main_mp2_pane_g3_ParamLimits

0x3e05,	// (0x0005e058) main_mp2_pane_g3

0x0002,

0xf3bf,	// (0x00069612) main_mp2_pane_g_ParamLimits

0xf3bf,	// (0x00069612) main_mp2_pane_g

0x3e11,	// (0x0005e064) main_mp2_pane_t1_ParamLimits

0x3e11,	// (0x0005e064) main_mp2_pane_t1

0x3e28,	// (0x0005e07b) main_mp2_pane_t2_ParamLimits

0x3e28,	// (0x0005e07b) main_mp2_pane_t2

0x3e3c,	// (0x0005e08f) main_mp2_pane_t3_ParamLimits

0x3e3c,	// (0x0005e08f) main_mp2_pane_t3

0x0002,

0xf3c6,	// (0x00069619) main_mp2_pane_t_ParamLimits

0xf3c6,	// (0x00069619) main_mp2_pane_t

0xcb90,	// (0x00066de3) pec_content_pane_ParamLimits

0xcb90,	// (0x00066de3) pec_content_pane

0xc114,	// (0x00066367) scroll_pane_cp015

0xcba2,	// (0x00066df5) pec_attribute_pane_ParamLimits

0xcba2,	// (0x00066df5) pec_attribute_pane

0x3e4e,	// (0x0005e0a1) pec_content_pane_g1_ParamLimits

0x3e4e,	// (0x0005e0a1) pec_content_pane_g1

0xcbb2,	// (0x00066e05) pec_content_pane_t1_ParamLimits

0xcbb2,	// (0x00066e05) pec_content_pane_t1

0xcbc4,	// (0x00066e17) pec_content_pane_t2_ParamLimits

0xcbc4,	// (0x00066e17) pec_content_pane_t2

0x0001,

0x0411,	// (0x0005a664) pec_content_pane_t_ParamLimits

0x0411,	// (0x0005a664) pec_content_pane_t

0x3e5a,	// (0x0005e0ad) list_single_graphic_pane_cp01_ParamLimits

0x3e5a,	// (0x0005e0ad) list_single_graphic_pane_cp01

0xb7a8,	// (0x000659fb) bg_popup_sub_pane_cp04

0xcbd6,	// (0x00066e29) popup_mup_playback_window_g1

0xcbe2,	// (0x00066e35) popup_mup_playback_window_t1

0xcbf7,	// (0x00066e4a) popup_mup_playback_window_t2

0x0001,

0x0416,	// (0x0005a669) popup_mup_playback_window_t

0xcc2e,	// (0x00066e81) main_image_pane_g1_ParamLimits

0xcc2e,	// (0x00066e81) main_image_pane_g1

0xcc71,	// (0x00066ec4) scroll_pane_cp018_ParamLimits

0xcc71,	// (0x00066ec4) scroll_pane_cp018

0xcc89,	// (0x00066edc) scroll_pane_cp016_ParamLimits

0xcc89,	// (0x00066edc) scroll_pane_cp016

0x3ef3,	// (0x0005e146) smil2_image_pane_ParamLimits

0x3ef3,	// (0x0005e146) smil2_image_pane

0x3f23,	// (0x0005e176) smil2_root_pane_ParamLimits

0x3f23,	// (0x0005e176) smil2_root_pane

0x3f4f,	// (0x0005e1a2) smil2_text_pane_ParamLimits

0x3f4f,	// (0x0005e1a2) smil2_text_pane

0xb54d,	// (0x000657a0) bg_list_pane_cp06

0xccc5,	// (0x00066f18) grid_radio_pane

0xb54d,	// (0x000657a0) bg_popup_window_pane_cp06

0xcccd,	// (0x00066f20) main_fmradio_pane_t1

0xc65d,	// (0x000668b0) heading_pane_cp04

0xccdb,	// (0x00066f2e) main_fmradio_pane_t2

0xdcac,	// (0x00067eff) popup_cale_lunar_info_window_g1

0xcce9,	// (0x00066f3c) main_fmradio_pane_t3

0xdcb4,	// (0x00067f07) popup_cale_lunar_info_window_g2

0xccf7,	// (0x00066f4a) main_fmradio_pane_t4

0x0001,

0xcd05,	// (0x00066f58) main_fmradio_pane_t5

0x0004,

0x04f1,	// (0x0005a744) popup_cale_lunar_info_window_g

0x042b,	// (0x0005a67e) main_fmradio_pane_t

0xcd13,	// (0x00066f66) wait_bar_pane_cp03

0xcd1b,	// (0x00066f6e) cell_fmradio_pane_ParamLimits

0xcd1b,	// (0x00066f6e) cell_fmradio_pane

0xcb74,	// (0x00066dc7) cell_fmradio_pane_g1_ParamLimits

0xcb74,	// (0x00066dc7) cell_fmradio_pane_g1

0xb54d,	// (0x000657a0) grid_highlight_pane_cp011

0xcd2e,	// (0x00066f81) poc_content_pane_ParamLimits

0xcd2e,	// (0x00066f81) poc_content_pane

0xcd40,	// (0x00066f93) scroll_pane_cp019

0x3f8f,	// (0x0005e1e2) popup_call_poc_act_window_ParamLimits

0x3f8f,	// (0x0005e1e2) popup_call_poc_act_window

0x3f9c,	// (0x0005e1ef) popup_call_poc_inact_window_ParamLimits

0x3f9c,	// (0x0005e1ef) popup_call_poc_inact_window

0x04c8,	// (0x0005a71b) bg_popup_call_poc_act_pane_g

0xdc24,	// (0x00067e77) bg_popup_call_poc_inact_pane_g1

0xdc2c,	// (0x00067e7f) bg_popup_call_poc_inact_pane_g2

0xcd48,	// (0x00066f9b) popup_call_poc_act_window_g2

0xdc34,	// (0x00067e87) bg_popup_call_poc_inact_pane_g3

0xdc3c,	// (0x00067e8f) bg_popup_call_poc_inact_pane_g4

0xdc44,	// (0x00067e97) bg_popup_call_poc_inact_pane_g5

0xcd50,	// (0x00066fa3) popup_call_poc_act_window_t1_ParamLimits

0xcd50,	// (0x00066fa3) popup_call_poc_act_window_t1

0xcd78,	// (0x00066fcb) popup_call_poc_act_window_t2_ParamLimits

0xcd78,	// (0x00066fcb) popup_call_poc_act_window_t2

0xcda0,	// (0x00066ff3) popup_call_poc_act_window_t3_ParamLimits

0xcda0,	// (0x00066ff3) popup_call_poc_act_window_t3

0xcdc8,	// (0x0006701b) popup_call_poc_act_window_t4_ParamLimits

0xcdc8,	// (0x0006701b) popup_call_poc_act_window_t4

0x0003,

0x0436,	// (0x0005a689) popup_call_poc_act_window_t_ParamLimits

0x0436,	// (0x0005a689) popup_call_poc_act_window_t

0xdc4c,	// (0x00067e9f) bg_popup_call_poc_inact_pane_g6

0xdc54,	// (0x00067ea7) bg_popup_call_poc_inact_pane_g7

0xdc5c,	// (0x00067eaf) bg_popup_call_poc_inact_pane_g8

0xcdda,	// (0x0006702d) popup_call_poc_inact_window_g2

0xdc64,	// (0x00067eb7) bg_popup_call_poc_inact_pane_g9

0x0008,

0x04b5,	// (0x0005a708) bg_popup_call_poc_inact_pane_g

0xcde2,	// (0x00067035) popup_call_poc_inact_window_t1_ParamLimits

0xcde2,	// (0x00067035) popup_call_poc_inact_window_t1

0xcdf7,	// (0x0006704a) popup_call_poc_inact_window_t2_ParamLimits

0xcdf7,	// (0x0006704a) popup_call_poc_inact_window_t2

0xce0c,	// (0x0006705f) popup_call_poc_inact_window_t3_ParamLimits

0xce0c,	// (0x0006705f) popup_call_poc_inact_window_t3

0x0002,

0x043f,	// (0x0005a692) popup_call_poc_inact_window_t_ParamLimits

0x043f,	// (0x0005a692) popup_call_poc_inact_window_t

0xdde9,	// (0x0006803c) context_pane_ParamLimits

0x45de,	// (0x0005e831) signal_pane_ParamLimits

0xbf6b,	// (0x000661be) main_call2_pane

0x4551,	// (0x0005e7a4) popup_phob_thumbnail2_window_ParamLimits

0x4551,	// (0x0005e7a4) popup_phob_thumbnail2_window

0x3c69,	// (0x0005debc) aid_hotspot_pointer_arrow_pane

0x3c71,	// (0x0005dec4) aid_hotspot_pointer_hand_pane

0x42be,	// (0x0005e511) phob_pre_status_pane_g5

0x1d1a,	// (0x0005bf6d) cams_zoom_pane_ParamLimits

0x1d26,	// (0x0005bf79) image_vga_pane_ParamLimits

0x1d35,	// (0x0005bf88) main_camera_pane_g1_ParamLimits

0x1d43,	// (0x0005bf96) main_camera_pane_g2_ParamLimits

0x1d4f,	// (0x0005bfa2) main_camera_pane_g3_ParamLimits

0x1d5b,	// (0x0005bfae) main_camera_pane_g4_ParamLimits

0x1d67,	// (0x0005bfba) main_camera_pane_g5_ParamLimits

0x1d73,	// (0x0005bfc6) main_camera_pane_g6_ParamLimits

0x1d7f,	// (0x0005bfd2) main_camera_pane_g7_ParamLimits

0xf1ad,	// (0x00069400) main_camera_pane_g_ParamLimits

0x1d8b,	// (0x0005bfde) main_camera_pane_t1_ParamLimits

0x1d9d,	// (0x0005bff0) main_camera_pane_t2_ParamLimits

0xf1be,	// (0x00069411) main_camera_pane_t_ParamLimits

0xb7a8,	// (0x000659fb) bg_popup_preview_window_pane_cp01_ParamLimits

0xb7a8,	// (0x000659fb) bg_popup_preview_window_pane_cp01

0xce21,	// (0x00067074) popup_phob_thumbnail2_window_g1_ParamLimits

0xce21,	// (0x00067074) popup_phob_thumbnail2_window_g1

0xb54d,	// (0x000657a0) call2_cli_visual_pane

0x3fb8,	// (0x0005e20b) popup_call2_audio_conf_window_ParamLimits

0x3fb8,	// (0x0005e20b) popup_call2_audio_conf_window

0x3fcd,	// (0x0005e220) popup_call2_audio_first_window_ParamLimits

0x3fcd,	// (0x0005e220) popup_call2_audio_first_window

0x406b,	// (0x0005e2be) popup_call2_audio_in_window_ParamLimits

0x406b,	// (0x0005e2be) popup_call2_audio_in_window

0x40ad,	// (0x0005e300) popup_call2_audio_out_window_ParamLimits

0x40ad,	// (0x0005e300) popup_call2_audio_out_window

0x410f,	// (0x0005e362) popup_call2_audio_second_window_ParamLimits

0x410f,	// (0x0005e362) popup_call2_audio_second_window

0x416d,	// (0x0005e3c0) popup_call2_audio_wait_window_ParamLimits

0x416d,	// (0x0005e3c0) popup_call2_audio_wait_window

0xb54d,	// (0x000657a0) bg_popup_call2_act_pane_cp03

0xb78a,	// (0x000659dd) list_conf_pane_cp

0xce2d,	// (0x00067080) popup_call2_audio_conf_window_t1

0xc6ba,	// (0x0006690d) list_single_graphic_popup_conf2_pane_ParamLimits

0xc6ba,	// (0x0006690d) list_single_graphic_popup_conf2_pane

0xc6cd,	// (0x00066920) list_highlight_pane_cp04

0xce3b,	// (0x0006708e) list_single_graphic_popup_conf2_pane_g1

0xc6de,	// (0x00066931) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x0446,	// (0x0005a699) list_single_graphic_popup_conf2_pane_g

0xce45,	// (0x00067098) list_single_graphic_popup_conf2_pane_t1

0xce53,	// (0x000670a6) bg_popup_call2_act_pane_cp01_ParamLimits

0xce53,	// (0x000670a6) bg_popup_call2_act_pane_cp01

0xcedd,	// (0x00067130) call_type_pane_cp05_ParamLimits

0xcedd,	// (0x00067130) call_type_pane_cp05

0xcf31,	// (0x00067184) popup_call2_audio_second_window_g1_ParamLimits

0xcf31,	// (0x00067184) popup_call2_audio_second_window_g1

0xcf85,	// (0x000671d8) popup_call2_audio_second_window_g2_ParamLimits

0xcf85,	// (0x000671d8) popup_call2_audio_second_window_g2

0x0002,

0x044b,	// (0x0005a69e) popup_call2_audio_second_window_g_ParamLimits

0x044b,	// (0x0005a69e) popup_call2_audio_second_window_g

0xcfea,	// (0x0006723d) popup_call2_audio_second_window_t1_ParamLimits

0xcfea,	// (0x0006723d) popup_call2_audio_second_window_t1

0xd0a5,	// (0x000672f8) popup_call2_audio_second_window_t2_ParamLimits

0xd0a5,	// (0x000672f8) popup_call2_audio_second_window_t2

0xd0f8,	// (0x0006734b) popup_call2_audio_second_window_t3_ParamLimits

0xd0f8,	// (0x0006734b) popup_call2_audio_second_window_t3

0x0003,

0x0452,	// (0x0005a6a5) popup_call2_audio_second_window_t_ParamLimits

0x0452,	// (0x0005a6a5) popup_call2_audio_second_window_t

0xb54d,	// (0x000657a0) bg_popup_call2_in_pane_cp02

0xb557,	// (0x000657aa) call_type_pane_cp04

0xb55f,	// (0x000657b2) popup_call2_audio_wait_window_g1

0xb567,	// (0x000657ba) popup_call2_audio_wait_window_g2

0x0001,

0x002d,	// (0x0005a280) popup_call2_audio_wait_window_g

0xb56f,	// (0x000657c2) popup_call2_audio_wait_window_t3

0xd1eb,	// (0x0006743e) bg_popup_call2_act_pane_ParamLimits

0xd1eb,	// (0x0006743e) bg_popup_call2_act_pane

0xd2ab,	// (0x000674fe) call_type_pane_cp03_ParamLimits

0xd2ab,	// (0x000674fe) call_type_pane_cp03

0xd30f,	// (0x00067562) popup_call2_audio_first_window_g1_ParamLimits

0xd30f,	// (0x00067562) popup_call2_audio_first_window_g1

0xd37f,	// (0x000675d2) popup_call2_audio_first_window_g2_ParamLimits

0xd37f,	// (0x000675d2) popup_call2_audio_first_window_g2

0xca70,	// (0x00066cc3) popup_call2_audio_first_window_g3_ParamLimits

0xca70,	// (0x00066cc3) popup_call2_audio_first_window_g3

0x0004,

0x045b,	// (0x0005a6ae) popup_call2_audio_first_window_g_ParamLimits

0x045b,	// (0x0005a6ae) popup_call2_audio_first_window_g

0xd45d,	// (0x000676b0) popup_call2_audio_first_window_t1_ParamLimits

0xd45d,	// (0x000676b0) popup_call2_audio_first_window_t1

0xd560,	// (0x000677b3) popup_call2_audio_first_window_t4_ParamLimits

0xd560,	// (0x000677b3) popup_call2_audio_first_window_t4

0xd643,	// (0x00067896) popup_call2_audio_first_window_t5_ParamLimits

0xd643,	// (0x00067896) popup_call2_audio_first_window_t5

0x0003,

0x0466,	// (0x0005a6b9) popup_call2_audio_first_window_t_ParamLimits

0x0466,	// (0x0005a6b9) popup_call2_audio_first_window_t

0xb7a0,	// (0x000659f3) bg_popup_call2_act_pane_g1

0xdcbc,	// (0x00067f0f) popup_cale_lunar_info_window_t1

0xdcca,	// (0x00067f1d) popup_cale_lunar_info_window_t2

0xdcd8,	// (0x00067f2b) popup_cale_lunar_info_window_t3

0xb54d,	// (0x000657a0) bg_popup_call2_bubble_pane

0xd750,	// (0x000679a3) bg_popup_call2_in_pane_cp01_ParamLimits

0xd750,	// (0x000679a3) bg_popup_call2_in_pane_cp01

0xb229,	// (0x0006547c) call_type_pane_cp02

0xd798,	// (0x000679eb) popup_call2_audio_out_window_g1_ParamLimits

0xd798,	// (0x000679eb) popup_call2_audio_out_window_g1

0xd7c4,	// (0x00067a17) popup_call2_audio_out_window_g2_ParamLimits

0xd7c4,	// (0x00067a17) popup_call2_audio_out_window_g2

0xd7ec,	// (0x00067a3f) popup_call2_audio_out_window_g3_ParamLimits

0xd7ec,	// (0x00067a3f) popup_call2_audio_out_window_g3

0x0003,

0x046f,	// (0x0005a6c2) popup_call2_audio_out_window_g_ParamLimits

0x046f,	// (0x0005a6c2) popup_call2_audio_out_window_g

0xd827,	// (0x00067a7a) popup_call2_audio_out_window_t1_ParamLimits

0xd827,	// (0x00067a7a) popup_call2_audio_out_window_t1

0xd886,	// (0x00067ad9) popup_call2_audio_out_window_t2_ParamLimits

0xd886,	// (0x00067ad9) popup_call2_audio_out_window_t2

0xd8da,	// (0x00067b2d) popup_call2_audio_out_window_t3_ParamLimits

0xd8da,	// (0x00067b2d) popup_call2_audio_out_window_t3

0xd8f0,	// (0x00067b43) popup_call2_audio_out_window_t4_ParamLimits

0xd8f0,	// (0x00067b43) popup_call2_audio_out_window_t4

0xd906,	// (0x00067b59) popup_call2_audio_out_window_t5_ParamLimits

0xd906,	// (0x00067b59) popup_call2_audio_out_window_t5

0x0005,

0x0478,	// (0x0005a6cb) popup_call2_audio_out_window_t_ParamLimits

0x0478,	// (0x0005a6cb) popup_call2_audio_out_window_t

0xd96a,	// (0x00067bbd) bg_popup_call2_in_pane_ParamLimits

0xd96a,	// (0x00067bbd) bg_popup_call2_in_pane

0xd9c6,	// (0x00067c19) popup_call2_audio_in_window_g1_ParamLimits

0xd9c6,	// (0x00067c19) popup_call2_audio_in_window_g1

0xd9fe,	// (0x00067c51) popup_call2_audio_in_window_g2_ParamLimits

0xd9fe,	// (0x00067c51) popup_call2_audio_in_window_g2

0xda36,	// (0x00067c89) popup_call2_audio_in_window_g3_ParamLimits

0xda36,	// (0x00067c89) popup_call2_audio_in_window_g3

0x0003,

0x0485,	// (0x0005a6d8) popup_call2_audio_in_window_g_ParamLimits

0x0485,	// (0x0005a6d8) popup_call2_audio_in_window_g

0xda8e,	// (0x00067ce1) popup_call2_audio_in_window_t1_ParamLimits

0xda8e,	// (0x00067ce1) popup_call2_audio_in_window_t1

0xdb0e,	// (0x00067d61) popup_call2_audio_in_window_t2_ParamLimits

0xdb0e,	// (0x00067d61) popup_call2_audio_in_window_t2

0xdb8e,	// (0x00067de1) popup_call2_audio_in_window_t3_ParamLimits

0xdb8e,	// (0x00067de1) popup_call2_audio_in_window_t3

0xdba8,	// (0x00067dfb) popup_call2_audio_in_window_t4_ParamLimits

0xdba8,	// (0x00067dfb) popup_call2_audio_in_window_t4

0xdbba,	// (0x00067e0d) popup_call2_audio_in_window_t5_ParamLimits

0xdbba,	// (0x00067e0d) popup_call2_audio_in_window_t5

0xdbcf,	// (0x00067e22) popup_call2_audio_in_window_t6_ParamLimits

0xdbcf,	// (0x00067e22) popup_call2_audio_in_window_t6

0x0005,

0x048e,	// (0x0005a6e1) popup_call2_audio_in_window_t_ParamLimits

0x048e,	// (0x0005a6e1) popup_call2_audio_in_window_t

0xb7a0,	// (0x000659f3) bg_popup_call2_in_pane_g1

0xdce6,	// (0x00067f39) popup_cale_lunar_info_window_t4

0x0003,

0x04f6,	// (0x0005a749) popup_cale_lunar_info_window_t

0xb7a8,	// (0x000659fb) bg_popup_call2_rect_pane_ParamLimits

0xb7a8,	// (0x000659fb) bg_popup_call2_rect_pane

0xb54d,	// (0x000657a0) call2_cli_visual_graphic_pane

0xb54d,	// (0x000657a0) call2_cli_visual_text_pane

0x4684,	// (0x0005e8d7) smil_status_volume_pane_g3

0x0002,

0xbdfb,	// (0x0006604e) call2_cli_visual_graphic_pane_g1

0xbdfb,	// (0x0006604e) call2_cli_visual_graphic_pane_g2

0xbdfb,	// (0x0006604e) call2_cli_visual_graphic_pane_g3

0x0002,

0x049b,	// (0x0005a6ee) call2_cli_visual_graphic_pane_g

0xdbe4,	// (0x00067e37) bg_popup_call2_rect_pane_g1

0xbe87,	// (0x000660da) bg_popup_call2_rect_pane_g2

0xdbec,	// (0x00067e3f) bg_popup_call2_rect_pane_g3

0xdbf4,	// (0x00067e47) bg_popup_call2_rect_pane_g4

0xdbfc,	// (0x00067e4f) bg_popup_call2_rect_pane_g5

0xdc04,	// (0x00067e57) bg_popup_call2_rect_pane_g6

0xdc0c,	// (0x00067e5f) bg_popup_call2_rect_pane_g7

0xdc14,	// (0x00067e67) bg_popup_call2_rect_pane_g8

0xdc1c,	// (0x00067e6f) bg_popup_call2_rect_pane_g9

0x0008,

0x04a2,	// (0x0005a6f5) bg_popup_call2_rect_pane_g

0xdc24,	// (0x00067e77) bg_popup_call2_bubble_pane_g1

0xdc2c,	// (0x00067e7f) bg_popup_call2_bubble_pane_g2

0xdc34,	// (0x00067e87) bg_popup_call2_bubble_pane_g3

0xdc3c,	// (0x00067e8f) bg_popup_call2_bubble_pane_g4

0xdc44,	// (0x00067e97) bg_popup_call2_bubble_pane_g5

0xdc4c,	// (0x00067e9f) bg_popup_call2_bubble_pane_g6

0xdc54,	// (0x00067ea7) bg_popup_call2_bubble_pane_g7

0xdc5c,	// (0x00067eaf) bg_popup_call2_bubble_pane_g8

0xdc64,	// (0x00067eb7) bg_popup_call2_bubble_pane_g9

0x0008,

0x04b5,	// (0x0005a708) bg_popup_call2_bubble_pane_g

0x1831,	// (0x0005ba84) aid_cale_week_size_cell_pane

0x1daf,	// (0x0005c002) aid_cams_cif_uncrop_pane_ParamLimits

0x1daf,	// (0x0005c002) aid_cams_cif_uncrop_pane

0x1f0a,	// (0x0005c15d) aid_cams_size_cell_ParamLimits

0x1f0a,	// (0x0005c15d) aid_cams_size_cell

0x1f16,	// (0x0005c169) grid_cams_pane_ParamLimits

0x1f24,	// (0x0005c177) linegrid_cams_pane_ParamLimits

0x210f,	// (0x0005c362) call_video_pane_t1

0x2130,	// (0x0005c383) call_video_pane_t2

0x0001,

0xf203,	// (0x00069456) call_video_pane_t

0x2677,	// (0x0005c8ca) aid_cale_month_size_cell_pane_ParamLimits

0x2677,	// (0x0005c8ca) aid_cale_month_size_cell_pane

0xf40d,	// (0x00069660) smil_status_volume_pane_g

0x4691,	// (0x0005e8e4) volume_smil_pane_ParamLimits

0x0f7a,	// (0x0005b1cd) aid_popup2_width_pane

0x1725,	// (0x0005b978) cell_qdial_pane_g4_ParamLimits

0x1725,	// (0x0005b978) cell_qdial_pane_g4

0x364c,	// (0x0005d89f) aid_blid_cardinal_pane_ParamLimits

0x365c,	// (0x0005d8af) aid_blid_destination_pane_ParamLimits

0x365c,	// (0x0005d8af) aid_blid_destination_pane

0xb7a8,	// (0x000659fb) bg_popup_call_poc_act_pane_ParamLimits

0xb7a8,	// (0x000659fb) bg_popup_call_poc_act_pane

0xb7a8,	// (0x000659fb) bg_popup_call_poc_inact_pane_ParamLimits

0xb7a8,	// (0x000659fb) bg_popup_call_poc_inact_pane

0xdc6c,	// (0x00067ebf) bg_popup_call_poc_act_pane_g1

0xdc74,	// (0x00067ec7) bg_popup_call_poc_act_pane_g2

0xdc7c,	// (0x00067ecf) bg_popup_call_poc_act_pane_g3

0xdc3c,	// (0x00067e8f) bg_popup_call_poc_act_pane_g4

0xdc44,	// (0x00067e97) bg_popup_call_poc_act_pane_g5

0xdc84,	// (0x00067ed7) bg_popup_call_poc_act_pane_g6

0xdc54,	// (0x00067ea7) bg_popup_call_poc_act_pane_g7

0xdc8c,	// (0x00067edf) bg_popup_call_poc_act_pane_g8

0xb54d,	// (0x000657a0) main_usb_pane

0x4480,	// (0x0005e6d3) popup_cale_lunar_info_window

0x2459,	// (0x0005c6ac) im_reading_pane_t1_ParamLimits

0xc06c,	// (0x000662bf) list_im_pane_ParamLimits

0xc07d,	// (0x000662d0) scroll_pane_cp07_ParamLimits

0xb54d,	// (0x000657a0) grid_highlight_pane_cp012

0xb7a8,	// (0x000659fb) mup_scale_pane_ParamLimits

0xca70,	// (0x00066cc3) main_usb_pane_g1_ParamLimits

0xca70,	// (0x00066cc3) main_usb_pane_g1

0x41e1,	// (0x0005e434) main_usb_pane_g2_ParamLimits

0x41e1,	// (0x0005e434) main_usb_pane_g2

0x0001,

0xf3dd,	// (0x00069630) main_usb_pane_g_ParamLimits

0xf3dd,	// (0x00069630) main_usb_pane_g

0x41ed,	// (0x0005e440) main_usb_pane_t1_ParamLimits

0x41ed,	// (0x0005e440) main_usb_pane_t1

0x41ff,	// (0x0005e452) main_usb_pane_t2_ParamLimits

0x41ff,	// (0x0005e452) main_usb_pane_t2

0x4211,	// (0x0005e464) main_usb_pane_t3_ParamLimits

0x4211,	// (0x0005e464) main_usb_pane_t3

0x4223,	// (0x0005e476) main_usb_pane_t4_ParamLimits

0x4223,	// (0x0005e476) main_usb_pane_t4

0x4235,	// (0x0005e488) main_usb_pane_t5_ParamLimits

0x4235,	// (0x0005e488) main_usb_pane_t5

0x4247,	// (0x0005e49a) main_usb_pane_t6_ParamLimits

0x4247,	// (0x0005e49a) main_usb_pane_t6

0x0005,

0xf3e2,	// (0x00069635) main_usb_pane_t_ParamLimits

0x35f2,	// (0x0005d845) aid_text_placing

0x35fe,	// (0x0005d851) main_location2_pane_t1_ParamLimits

0x3612,	// (0x0005d865) main_location2_pane_t2_ParamLimits

0x3626,	// (0x0005d879) main_location2_pane_t3_ParamLimits

0x363a,	// (0x0005d88d) main_location2_pane_t4_ParamLimits

0x363a,	// (0x0005d88d) main_location2_pane_t4

0xf2f3,	// (0x00069546) main_location2_pane_t_ParamLimits

0xb7e4,	// (0x00065a37) find_pinb_pane_g2_ParamLimits

0xb7e4,	// (0x00065a37) find_pinb_pane_g2

0x0001,

0x0053,	// (0x0005a2a6) find_pinb_pane_g_ParamLimits

0x0053,	// (0x0005a2a6) find_pinb_pane_g

0xb7f0,	// (0x00065a43) find_pinb_pane_t1_ParamLimits

0xb802,	// (0x00065a55) find_pinb_pane_t2_ParamLimits

0x0058,	// (0x0005a2ab) find_pinb_pane_t_ParamLimits

0xb54d,	// (0x000657a0) main_call3_pane

0x2c1a,	// (0x0005ce6d) cale_month_day_heading_pane_t1_ParamLimits

0x2ca0,	// (0x0005cef3) cale_month_day_heading_pane_t2_ParamLimits

0x2d19,	// (0x0005cf6c) cale_month_day_heading_pane_t3_ParamLimits

0x2d92,	// (0x0005cfe5) cale_month_day_heading_pane_t4_ParamLimits

0x2e0b,	// (0x0005d05e) cale_month_day_heading_pane_t5_ParamLimits

0x2e84,	// (0x0005d0d7) cale_month_day_heading_pane_t6_ParamLimits

0x2efd,	// (0x0005d150) cale_month_day_heading_pane_t7_ParamLimits

0xf228,	// (0x0006947b) cale_month_day_heading_pane_t_ParamLimits

0xc2c7,	// (0x0006651a) smil_status_volume_pane

0x3da5,	// (0x0005dff8) postcard_address_pane_ParamLimits

0x3da5,	// (0x0005dff8) postcard_address_pane

0x3db1,	// (0x0005e004) postcard_message_pane_ParamLimits

0x3db1,	// (0x0005e004) postcard_message_pane

0x41ac,	// (0x0005e3ff) call2_cli_visual_pane_t1_ParamLimits

0x41ac,	// (0x0005e3ff) call2_cli_visual_pane_t1

0x47e8,	// (0x0005ea3b) postcard_message_pane_t1_ParamLimits

0x47e8,	// (0x0005ea3b) postcard_message_pane_t1

0x47d1,	// (0x0005ea24) postcard_address_pane_t1_ParamLimits

0x47d1,	// (0x0005ea24) postcard_address_pane_t1

0x47c2,	// (0x0005ea15) popup_call3_audio_in_window_ParamLimits

0x47c2,	// (0x0005ea15) popup_call3_audio_in_window

0x46a6,	// (0x0005e8f9) bg_popup_call3_in_pane_ParamLimits

0x46a6,	// (0x0005e8f9) bg_popup_call3_in_pane

0x4708,	// (0x0005e95b) popup_call3_audio_in_window_g1_ParamLimits

0x4708,	// (0x0005e95b) popup_call3_audio_in_window_g1

0x4720,	// (0x0005e973) popup_call3_audio_in_window_g2_ParamLimits

0x4720,	// (0x0005e973) popup_call3_audio_in_window_g2

0x4738,	// (0x0005e98b) popup_call3_audio_in_window_g3_ParamLimits

0x4738,	// (0x0005e98b) popup_call3_audio_in_window_g3

0x0003,

0xf414,	// (0x00069667) popup_call3_audio_in_window_g_ParamLimits

0xf414,	// (0x00069667) popup_call3_audio_in_window_g

0x4760,	// (0x0005e9b3) popup_call3_audio_in_window_t1_ParamLimits

0x4760,	// (0x0005e9b3) popup_call3_audio_in_window_t1

0x4788,	// (0x0005e9db) popup_call3_audio_in_window_t2_ParamLimits

0x4788,	// (0x0005e9db) popup_call3_audio_in_window_t2

0x47b0,	// (0x0005ea03) popup_call3_audio_in_window_t3_ParamLimits

0x47b0,	// (0x0005ea03) popup_call3_audio_in_window_t3

0x0002,

0xf41d,	// (0x00069670) popup_call3_audio_in_window_t_ParamLimits

0xf41d,	// (0x00069670) popup_call3_audio_in_window_t

0xbf6b,	// (0x000661be) bg_popup_call3_rect_pane

0xdbe4,	// (0x00067e37) bg_popup_call3_rect_pane_g1

0xbe87,	// (0x000660da) bg_popup_call3_rect_pane_g2

0xdbec,	// (0x00067e3f) bg_popup_call3_rect_pane_g3

0xdbf4,	// (0x00067e47) bg_popup_call3_rect_pane_g4

0xdbfc,	// (0x00067e4f) bg_popup_call3_rect_pane_g5

0xdc04,	// (0x00067e57) bg_popup_call3_rect_pane_g6

0xdc0c,	// (0x00067e5f) bg_popup_call3_rect_pane_g7

0x3972,	// (0x0005dbc5) mup_visualizer_osc_pane

0xca96,	// (0x00066ce9) mup_visualizer_spec_pane

0x46c6,	// (0x0005e919) call3_video_qcif_pane_ParamLimits

0x46c6,	// (0x0005e919) call3_video_qcif_pane

0x46d8,	// (0x0005e92b) call3_video_qcif_uncrop_pane_ParamLimits

0x46d8,	// (0x0005e92b) call3_video_qcif_uncrop_pane

0x46e6,	// (0x0005e939) call3_video_subqcif_pane_ParamLimits

0x46e6,	// (0x0005e939) call3_video_subqcif_pane

0x46f8,	// (0x0005e94b) call3_video_subqcif_uncrop_pane_ParamLimits

0x46f8,	// (0x0005e94b) call3_video_subqcif_uncrop_pane

0x4750,	// (0x0005e9a3) popup_call3_audio_in_window_g4_ParamLimits

0x4750,	// (0x0005e9a3) popup_call3_audio_in_window_g4

0x4673,	// (0x0005e8c6) mup_spec_half_pane

0x467c,	// (0x0005e8cf) mup_spec_half_pane_cp

0xde49,	// (0x0006809c) mup_osc_middle_pane

0xde52,	// (0x000680a5) mup_visualizer_osc_pane_g1

0x4654,	// (0x0005e8a7) mup_spec_bar_pane_ParamLimits

0x4654,	// (0x0005e8a7) mup_spec_bar_pane

0xde36,	// (0x00068089) mup_spec_bar_pane_g1

0xde40,	// (0x00068093) mup_spec_bar_pane_g2

0x0001,

0x053a,	// (0x0005a78d) mup_spec_bar_pane_g

0x1831,	// (0x0005ba84) aid_cale_week_size_cell_pane_ParamLimits

0x1846,	// (0x0005ba99) bg_cale_heading_pane_ParamLimits

0xbec4,	// (0x00066117) bg_cale_pane_cp01_ParamLimits

0x1866,	// (0x0005bab9) cale_week_corner_pane_ParamLimits

0x1880,	// (0x0005bad3) cale_week_day_heading_pane_ParamLimits

0x18a0,	// (0x0005baf3) cale_week_scroll_pane_g1_ParamLimits

0x18bb,	// (0x0005bb0e) cale_week_scroll_pane_g2_ParamLimits

0x18ce,	// (0x0005bb21) cale_week_scroll_pane_g3_ParamLimits

0x18e1,	// (0x0005bb34) cale_week_scroll_pane_g4_ParamLimits

0x18f4,	// (0x0005bb47) cale_week_scroll_pane_g5_ParamLimits

0x1907,	// (0x0005bb5a) cale_week_scroll_pane_g6_ParamLimits

0x191a,	// (0x0005bb6d) cale_week_scroll_pane_g7_ParamLimits

0x192f,	// (0x0005bb82) cale_week_scroll_pane_g8_ParamLimits

0x1944,	// (0x0005bb97) cale_week_scroll_pane_g9_ParamLimits

0x1957,	// (0x0005bbaa) cale_week_scroll_pane_g10_ParamLimits

0x196a,	// (0x0005bbbd) cale_week_scroll_pane_g11_ParamLimits

0x197d,	// (0x0005bbd0) cale_week_scroll_pane_g12_ParamLimits

0x1994,	// (0x0005bbe7) cale_week_scroll_pane_g13_ParamLimits

0x19af,	// (0x0005bc02) cale_week_scroll_pane_g14_ParamLimits

0x19ca,	// (0x0005bc1d) cale_week_scroll_pane_g15_ParamLimits

0xf158,	// (0x000693ab) cale_week_scroll_pane_g_ParamLimits

0x19fa,	// (0x0005bc4d) cale_week_time_pane_ParamLimits

0x1a0f,	// (0x0005bc62) grid_cale_week_pane_ParamLimits

0xbee1,	// (0x00066134) listscroll_cale_week_pane_t1

0xbef3,	// (0x00066146) scroll_pane_cp08_ParamLimits

0x26eb,	// (0x0005c93e) cale_month_corner_pane_ParamLimits

0xc29d,	// (0x000664f0) cale_month_pane_t1

0x2b9d,	// (0x0005cdf0) cale_month_week_pane_ParamLimits

0xca70,	// (0x00066cc3) popup_call_status_window_g1_ParamLimits

0x3425,	// (0x0005d678) popup_call_status_window_g2_ParamLimits

0x3431,	// (0x0005d684) popup_call_status_window_g3_ParamLimits

0xf298,	// (0x000694eb) popup_call_status_window_g_ParamLimits

0xc655,	// (0x000668a8) aid_call2_pane

0x3c1a,	// (0x0005de6d) msg_header_pane_g1

0x3da5,	// (0x0005dff8) postcard_address2_pane_ParamLimits

0x3da5,	// (0x0005dff8) postcard_address2_pane

0x3db1,	// (0x0005e004) postcard_message2_pane_ParamLimits

0x3db1,	// (0x0005e004) postcard_message2_pane

0x45ec,	// (0x0005e83f) message2_row_pane_ParamLimits

0x45ec,	// (0x0005e83f) message2_row_pane

0x4607,	// (0x0005e85a) address2_row_pane_ParamLimits

0x4607,	// (0x0005e85a) address2_row_pane

0xde04,	// (0x00068057) postcard_message2_row_pane_g1

0xde0c,	// (0x0006805f) postcard_message2_row_pane_t1

0xde04,	// (0x00068057) address2_row_pane_g1

0xde0c,	// (0x0006805f) address2_row_pane_t1

0x1c95,	// (0x0005bee8) aid_size_cell_vorec

0xb54d,	// (0x000657a0) main_rss_pane

0x461a,	// (0x0005e86d) rss_list_single_pane_ParamLimits

0x461a,	// (0x0005e86d) rss_list_single_pane

0xde1a,	// (0x0006806d) rss_list_single_pane_t1

0xde28,	// (0x0006807b) rss_list_single_pane_t2

0x0001,

0x0535,	// (0x0005a788) rss_list_single_pane_t

0xb54d,	// (0x000657a0) main_camera2_pane

0xb54d,	// (0x000657a0) main_video2_pane

0x484c,	// (0x0005ea9f) cams_zoom_pane_cp2_ParamLimits

0x484c,	// (0x0005ea9f) cams_zoom_pane_cp2

0x4858,	// (0x0005eaab) image2_vga_pane_ParamLimits

0x4858,	// (0x0005eaab) image2_vga_pane

0x4867,	// (0x0005eaba) main_camera2_pane_g1_ParamLimits

0x4867,	// (0x0005eaba) main_camera2_pane_g1

0x4873,	// (0x0005eac6) main_camera2_pane_g2_ParamLimits

0x4873,	// (0x0005eac6) main_camera2_pane_g2

0x487f,	// (0x0005ead2) main_camera2_pane_g3_ParamLimits

0x487f,	// (0x0005ead2) main_camera2_pane_g3

0x488b,	// (0x0005eade) main_camera2_pane_g4_ParamLimits

0x488b,	// (0x0005eade) main_camera2_pane_g4

0x4897,	// (0x0005eaea) main_camera2_pane_g5_ParamLimits

0x4897,	// (0x0005eaea) main_camera2_pane_g5

0x48a3,	// (0x0005eaf6) main_camera2_pane_g6_ParamLimits

0x48a3,	// (0x0005eaf6) main_camera2_pane_g6

0x48af,	// (0x0005eb02) main_camera2_pane_g7_ParamLimits

0x48af,	// (0x0005eb02) main_camera2_pane_g7

0x48bb,	// (0x0005eb0e) main_camera2_pane_g8_ParamLimits

0x48bb,	// (0x0005eb0e) main_camera2_pane_g8

0x0008,

0xf424,	// (0x00069677) main_camera2_pane_g_ParamLimits

0xf424,	// (0x00069677) main_camera2_pane_g

0x48d3,	// (0x0005eb26) main_camera2_pane_t1_ParamLimits

0x48d3,	// (0x0005eb26) main_camera2_pane_t1

0x48e5,	// (0x0005eb38) main_camera2_pane_t2_ParamLimits

0x48e5,	// (0x0005eb38) main_camera2_pane_t2

0x48f7,	// (0x0005eb4a) main_camera2_pane_t3_ParamLimits

0x48f7,	// (0x0005eb4a) main_camera2_pane_t3

0x4909,	// (0x0005eb5c) main_camera2_pane_t4_ParamLimits

0x4909,	// (0x0005eb5c) main_camera2_pane_t4

0x0006,

0xf437,	// (0x0006968a) main_camera2_pane_t_ParamLimits

0xf437,	// (0x0006968a) main_camera2_pane_t

0x496b,	// (0x0005ebbe) cams_zoom_pane_cp4_ParamLimits

0x496b,	// (0x0005ebbe) cams_zoom_pane_cp4

0x497b,	// (0x0005ebce) image2_cif_pane_ParamLimits

0x497b,	// (0x0005ebce) image2_cif_pane

0x4990,	// (0x0005ebe3) image2_subqcif_pane_ParamLimits

0x4990,	// (0x0005ebe3) image2_subqcif_pane

0x499f,	// (0x0005ebf2) main_video2_pane_g1_ParamLimits

0x499f,	// (0x0005ebf2) main_video2_pane_g1

0x49b1,	// (0x0005ec04) main_video2_pane_g2_ParamLimits

0x49b1,	// (0x0005ec04) main_video2_pane_g2

0x49c1,	// (0x0005ec14) main_video2_pane_g3_ParamLimits

0x49c1,	// (0x0005ec14) main_video2_pane_g3

0x49d1,	// (0x0005ec24) main_video2_pane_g4_ParamLimits

0x49d1,	// (0x0005ec24) main_video2_pane_g4

0x49e1,	// (0x0005ec34) main_video2_pane_g5_ParamLimits

0x49e1,	// (0x0005ec34) main_video2_pane_g5

0x49f1,	// (0x0005ec44) main_video2_pane_g6_ParamLimits

0x49f1,	// (0x0005ec44) main_video2_pane_g6

0x0005,

0xf446,	// (0x00069699) main_video2_pane_g_ParamLimits

0xf446,	// (0x00069699) main_video2_pane_g

0x4a03,	// (0x0005ec56) main_video2_pane_t1_ParamLimits

0x4a03,	// (0x0005ec56) main_video2_pane_t1

0x4a1d,	// (0x0005ec70) main_video2_pane_t2_ParamLimits

0x4a1d,	// (0x0005ec70) main_video2_pane_t2

0x4a43,	// (0x0005ec96) main_video2_pane_t3_ParamLimits

0x4a43,	// (0x0005ec96) main_video2_pane_t3

0x0002,

0xf453,	// (0x000696a6) main_video2_pane_t_ParamLimits

0xf453,	// (0x000696a6) main_video2_pane_t

0x42fe,	// (0x0005e551) call_muted_g2

0x0001,

0xf408,	// (0x0006965b) call_muted_g

0xb54d,	// (0x000657a0) main_mup2_pane

0xdeb7,	// (0x0006810a) main_mup2_pane_g1_ParamLimits

0xdeb7,	// (0x0006810a) main_mup2_pane_g1

0x4a69,	// (0x0005ecbc) main_mup2_pane_g2_ParamLimits

0x4a69,	// (0x0005ecbc) main_mup2_pane_g2

0x4ceb,	// (0x0005ef3e) main_mup_pane_g13_cp1

0x4cf3,	// (0x0005ef46) mup_volume_pane_cp1

0x4a89,	// (0x0005ecdc) main_mup2_pane_g4_ParamLimits

0x4a89,	// (0x0005ecdc) main_mup2_pane_g4

0x4a9e,	// (0x0005ecf1) main_mup2_pane_g5_ParamLimits

0x4a9e,	// (0x0005ecf1) main_mup2_pane_g5

0x4ab3,	// (0x0005ed06) main_mup2_pane_g6_ParamLimits

0x4ab3,	// (0x0005ed06) main_mup2_pane_g6

0x4ac8,	// (0x0005ed1b) main_mup2_pane_g7_ParamLimits

0x4ac8,	// (0x0005ed1b) main_mup2_pane_g7

0x0006,

0xf45a,	// (0x000696ad) main_mup2_pane_g_ParamLimits

0xf45a,	// (0x000696ad) main_mup2_pane_g

0x4ae4,	// (0x0005ed37) main_mup2_pane_t1_ParamLimits

0x4ae4,	// (0x0005ed37) main_mup2_pane_t1

0x4afb,	// (0x0005ed4e) main_mup2_pane_t2_ParamLimits

0x4afb,	// (0x0005ed4e) main_mup2_pane_t2

0x4b12,	// (0x0005ed65) main_mup2_pane_t3_ParamLimits

0x4b12,	// (0x0005ed65) main_mup2_pane_t3

0x4b29,	// (0x0005ed7c) main_mup2_pane_t4_ParamLimits

0x4b29,	// (0x0005ed7c) main_mup2_pane_t4

0x4b43,	// (0x0005ed96) main_mup2_pane_t5_ParamLimits

0x4b43,	// (0x0005ed96) main_mup2_pane_t5

0x4b5d,	// (0x0005edb0) main_mup2_pane_t6_ParamLimits

0x4b5d,	// (0x0005edb0) main_mup2_pane_t6

0x0005,

0xf469,	// (0x000696bc) main_mup2_pane_t_ParamLimits

0xf469,	// (0x000696bc) main_mup2_pane_t

0x4b95,	// (0x0005ede8) mup2_visualizer_pane_ParamLimits

0x4b95,	// (0x0005ede8) mup2_visualizer_pane

0x4bcb,	// (0x0005ee1e) mup_progress_pane_cp_ParamLimits

0x4bcb,	// (0x0005ee1e) mup_progress_pane_cp

0x4cd6,	// (0x0005ef29) mup_volume_pane_cp_ParamLimits

0x4cd6,	// (0x0005ef29) mup_volume_pane_cp

0x4be2,	// (0x0005ee35) mup2_visualizer_pane_g1_ParamLimits

0x4be2,	// (0x0005ee35) mup2_visualizer_pane_g1

0xde89,	// (0x000680dc) mup2_visualizer_pane_g2_ParamLimits

0xde89,	// (0x000680dc) mup2_visualizer_pane_g2

0x4bf7,	// (0x0005ee4a) mup2_visualizer_pane_g3_ParamLimits

0x4bf7,	// (0x0005ee4a) mup2_visualizer_pane_g3

0x0002,

0xf476,	// (0x000696c9) mup2_visualizer_pane_g_ParamLimits

0xf476,	// (0x000696c9) mup2_visualizer_pane_g

0xccbd,	// (0x00066f10) aid_size_cell_fmradio

0x4414,	// (0x0005e667) aid_height_parent_landcape

0xc0fb,	// (0x0006634e) wml_content_pane_cp

0xc103,	// (0x00066356) wml_tabs_pane

0xc10c,	// (0x0006635f) popup_wml_miniature_window

0xc114,	// (0x00066367) scroll_pane_cp021

0xc128,	// (0x0006637b) wml_content_pane_comp8

0xb54d,	// (0x000657a0) bg_popup_sub_pane_cp05

0xdea7,	// (0x000680fa) popup_wml_miniature_window_g1

0xdeaf,	// (0x00068102) wml_miniature_view_pane

0x4c05,	// (0x0005ee58) aid_size_wml_view

0x4c0d,	// (0x0005ee60) wml_miniature_view_pane_g1

0x4c16,	// (0x0005ee69) wml_miniature_view_pane_g2

0x4c1f,	// (0x0005ee72) wml_miniature_view_pane_g3

0x4c27,	// (0x0005ee7a) wml_miniature_view_pane_g4

0x4c2f,	// (0x0005ee82) wml_miniature_view_pane_g5

0x4c37,	// (0x0005ee8a) wml_miniature_view_pane_g6

0x4c3f,	// (0x0005ee92) wml_miniature_view_pane_g7

0x4c47,	// (0x0005ee9a) wml_miniature_view_pane_g8

0x0007,

0xf47d,	// (0x000696d0) wml_miniature_view_pane_g

0xdeb7,	// (0x0006810a) background_graphic_ParamLimits

0xdeb7,	// (0x0006810a) background_graphic

0xdec3,	// (0x00068116) wml_tabs_2_pane

0xdecc,	// (0x0006811f) wml_tabs_3_pane_ParamLimits

0xdecc,	// (0x0006811f) wml_tabs_3_pane

0xdede,	// (0x00068131) wml_tabs_4_pane_ParamLimits

0xdede,	// (0x00068131) wml_tabs_4_pane

0xdef4,	// (0x00068147) wml_tabs_5_pane_ParamLimits

0xdef4,	// (0x00068147) wml_tabs_5_pane

0xdf0e,	// (0x00068161) wml_tabs_pane_g2_ParamLimits

0xdf0e,	// (0x00068161) wml_tabs_pane_g2

0xdf22,	// (0x00068175) wml_tabs_pane_g3_ParamLimits

0xdf22,	// (0x00068175) wml_tabs_pane_g3

0x4c4f,	// (0x0005eea2) wml_tabs_2_active_pane_ParamLimits

0x4c4f,	// (0x0005eea2) wml_tabs_2_active_pane

0x4c5f,	// (0x0005eeb2) wml_tabs_2_passive_pane_ParamLimits

0x4c5f,	// (0x0005eeb2) wml_tabs_2_passive_pane

0x4c6f,	// (0x0005eec2) wml_tabs_3_active_pane_cp_ParamLimits

0x4c6f,	// (0x0005eec2) wml_tabs_3_active_pane_cp

0x4c80,	// (0x0005eed3) wml_tabs_3_passive_pane_ParamLimits

0x4c80,	// (0x0005eed3) wml_tabs_3_passive_pane

0x4c91,	// (0x0005eee4) wml_tabs_3_passive_pane_cp_ParamLimits

0x4c91,	// (0x0005eee4) wml_tabs_3_passive_pane_cp

0x4ca2,	// (0x0005eef5) tabs_4_active_pane

0x4caa,	// (0x0005eefd) tabs_4_passive_pane

0x4cb2,	// (0x0005ef05) tabs_4_passive_pane_cp

0x4cba,	// (0x0005ef0d) tabs_4_passive_pane_cp2

0x41d9,	// (0x0005e42c) aid_height_text

0x393f,	// (0x0005db92) mup_volume_cont_pane_ParamLimits

0x393f,	// (0x0005db92) mup_volume_cont_pane

0x1361,	// (0x0005b5b4) aid_size_cell_pinb

0x136b,	// (0x0005b5be) aid_size_list_pinb

0x4bb4,	// (0x0005ee07) mup2_volume_cont_pane_ParamLimits

0x4bb4,	// (0x0005ee07) mup2_volume_cont_pane

0x4cc2,	// (0x0005ef15) mup2_volume_cont_pane_g1_ParamLimits

0x4cc2,	// (0x0005ef15) mup2_volume_cont_pane_g1

0x0f86,	// (0x0005b1d9) aid_size_cell_touch_ParamLimits

0x0f86,	// (0x0005b1d9) aid_size_cell_touch

0x1247,	// (0x0005b49a) touch_pane_ParamLimits

0x1247,	// (0x0005b49a) touch_pane

0x123d,	// (0x0005b490) main_rss2_pane

0xdf3f,	// (0x00068192) listscroll_rss2_pane

0xdf48,	// (0x0006819b) rss2_navigation_pane

0xdf50,	// (0x000681a3) list_rss2_pane

0xc790,	// (0x000669e3) scroll_pane_cp22

0xdf58,	// (0x000681ab) rss2_navigation_pane_g1

0xdf61,	// (0x000681b4) rss2_navigation_pane_g2

0xdf69,	// (0x000681bc) rss2_navigation_pane_g3

0x0002,

0x05c0,	// (0x0005a813) rss2_navigation_pane_g

0xdf71,	// (0x000681c4) rss2_navigation_pane_t1

0x4cfb,	// (0x0005ef4e) rss2_list_single_pane_ParamLimits

0x4cfb,	// (0x0005ef4e) rss2_list_single_pane

0xdf7f,	// (0x000681d2) rss2_list_single_pane_t2

0xdf8d,	// (0x000681e0) rss2_list_single_pane_t3_ParamLimits

0xdf8d,	// (0x000681e0) rss2_list_single_pane_t3

0xdfaa,	// (0x000681fd) rss2_list_single_pane_t4

0x31c3,	// (0x0005d416) smil_status_pane_g1

0x442b,	// (0x0005e67e) main_image2_pane_ParamLimits

0x442b,	// (0x0005e67e) main_image2_pane

0x48c7,	// (0x0005eb1a) main_camera2_pane_g9_ParamLimits

0x48c7,	// (0x0005eb1a) main_camera2_pane_g9

0x491b,	// (0x0005eb6e) main_camera2_pane_t5_ParamLimits

0x491b,	// (0x0005eb6e) main_camera2_pane_t5

0x492d,	// (0x0005eb80) main_camera2_pane_t6_ParamLimits

0x492d,	// (0x0005eb80) main_camera2_pane_t6

0x4d2c,	// (0x0005ef7f) main_image2_pane_g1_ParamLimits

0x4d2c,	// (0x0005ef7f) main_image2_pane_g1

0x3f79,	// (0x0005e1cc) smil2_video_pane_ParamLimits

0x3f79,	// (0x0005e1cc) smil2_video_pane

0x0e8a,	// (0x0005b0dd) aid_zoom_text_primary_cp

0x11d8,	// (0x0005b42b) popup_preview_fixed_window

0xc064,	// (0x000662b7) im_reading_pane_g1

0x4811,	// (0x0005ea64) cams2_bc_adjust_pane_cp_ParamLimits

0x4811,	// (0x0005ea64) cams2_bc_adjust_pane_cp

0x495d,	// (0x0005ebb0) cams2_bc_adjust_pane_ParamLimits

0x495d,	// (0x0005ebb0) cams2_bc_adjust_pane

0x9fea,	// (0x0006423d) cams2_bc_adjust_pane_g1

0x4d38,	// (0x0005ef8b) cams2_slider_pane

0x4d41,	// (0x0005ef94) cams2_slider_pane_g1

0x4d4a,	// (0x0005ef9d) cams2_slider_pane_g2

0x0006,

0xf48e,	// (0x000696e1) cams2_slider_pane_g

0x1471,	// (0x0005b6c4) calc_display_pane_ParamLimits

0x148f,	// (0x0005b6e2) calc_paper_pane_ParamLimits

0x14ab,	// (0x0005b6fe) grid_calc_pane_ParamLimits

0x3493,	// (0x0005d6e6) popup_clock_digital_window_t1_ParamLimits

0xcc5a,	// (0x00066ead) main_image_pane_t1

0x1457,	// (0x0005b6aa) aid_size_cell_calc_ParamLimits

0x1457,	// (0x0005b6aa) aid_size_cell_calc

0x445c,	// (0x0005e6af) popup_blid_sat_info2_window_ParamLimits

0x445c,	// (0x0005e6af) popup_blid_sat_info2_window

0xdfc0,	// (0x00068213) aid_size_cell_blid

0xdfc8,	// (0x0006821b) bg_popup_window_pane_cp07

0xdfeb,	// (0x0006823e) grid_popup_blid_pane

0xdff5,	// (0x00068248) heading_pane_cp05_ParamLimits

0xdff5,	// (0x00068248) heading_pane_cp05

0xe0bf,	// (0x00068312) cell_popup_blid_pane_ParamLimits

0xe0bf,	// (0x00068312) cell_popup_blid_pane

0xe0e3,	// (0x00068336) cell_popup_blid_pane_g1

0xe0eb,	// (0x0006833e) cell_popup_blid_pane_t1

0x4b7a,	// (0x0005edcd) mup2_indicator_pane_ParamLimits

0x4b7a,	// (0x0005edcd) mup2_indicator_pane

0xbf6b,	// (0x000661be) mup2_visualizer_osc_pane

0xde95,	// (0x000680e8) mup2_visualizer_spec_pane_ParamLimits

0xde95,	// (0x000680e8) mup2_visualizer_spec_pane

0x4d64,	// (0x0005efb7) mup2_spec_half_pane

0x4d6d,	// (0x0005efc0) mup2_spec_half_pane_cp

0x4d77,	// (0x0005efca) mup2_spec_bar_pane_ParamLimits

0x4d77,	// (0x0005efca) mup2_spec_bar_pane

0xde36,	// (0x00068089) mup2_spec_bar_pane_g1

0xde40,	// (0x00068093) mup2_spec_bar_pane_g2

0x0001,

0x053a,	// (0x0005a78d) mup2_spec_bar_pane_g

0x4d96,	// (0x0005efe9) mup2_osc_middle_pane

0xde52,	// (0x000680a5) mup2_visualizer_osc_pane_g1

0xb15a,	// (0x000653ad) popup_number_entry_window_t1_ParamLimits

0xb16d,	// (0x000653c0) popup_number_entry_window_t2_ParamLimits

0xb17f,	// (0x000653d2) popup_number_entry_window_t3_ParamLimits

0x129e,	// (0x0005b4f1) popup_number_entry_window_t5_ParamLimits

0x129e,	// (0x0005b4f1) popup_number_entry_window_t5

0xf0ca,	// (0x0006931d) popup_number_entry_window_t_ParamLimits

0xb191,	// (0x000653e4) text_title_cp2_ParamLimits

0x3c79,	// (0x0005decc) aid_hotspot_pointer_text2_pane

0x3d07,	// (0x0005df5a) main_viewer_pane_g9_ParamLimits

0x3d07,	// (0x0005df5a) main_viewer_pane_g9

0xc29d,	// (0x000664f0) cale_month_pane_t1_ParamLimits

0xc2da,	// (0x0006652d) bg_cale_pane_ParamLimits

0xc2f2,	// (0x00066545) list_cale_pane_ParamLimits

0xc303,	// (0x00066556) listscroll_cale_day_pane_t1

0xc315,	// (0x00066568) scroll_pane_cp09_ParamLimits

0x397a,	// (0x0005dbcd) main_mup_eq_pane_t1_ParamLimits

0x397a,	// (0x0005dbcd) main_mup_eq_pane_t1

0x3994,	// (0x0005dbe7) main_mup_eq_pane_t2_ParamLimits

0x3994,	// (0x0005dbe7) main_mup_eq_pane_t2

0x39ae,	// (0x0005dc01) main_mup_eq_pane_t3_ParamLimits

0x39ae,	// (0x0005dc01) main_mup_eq_pane_t3

0x39c6,	// (0x0005dc19) main_mup_eq_pane_t4_ParamLimits

0x39c6,	// (0x0005dc19) main_mup_eq_pane_t4

0x39de,	// (0x0005dc31) main_mup_eq_pane_t5_ParamLimits

0x39de,	// (0x0005dc31) main_mup_eq_pane_t5

0x39f6,	// (0x0005dc49) main_mup_eq_pane_t6_ParamLimits

0x39f6,	// (0x0005dc49) main_mup_eq_pane_t6

0x3a0a,	// (0x0005dc5d) main_mup_eq_pane_t7_ParamLimits

0x3a0a,	// (0x0005dc5d) main_mup_eq_pane_t7

0x3a1e,	// (0x0005dc71) main_mup_eq_pane_t8_ParamLimits

0x3a1e,	// (0x0005dc71) main_mup_eq_pane_t8

0x3a34,	// (0x0005dc87) main_mup_eq_pane_t9_ParamLimits

0x3a34,	// (0x0005dc87) main_mup_eq_pane_t9

0x3a4c,	// (0x0005dc9f) main_mup_eq_pane_t10_ParamLimits

0x3a4c,	// (0x0005dc9f) main_mup_eq_pane_t10

0x0009,

0xf345,	// (0x00069598) main_mup_eq_pane_t_ParamLimits

0xf345,	// (0x00069598) main_mup_eq_pane_t

0x3b09,	// (0x0005dd5c) mup_equalizer_pane_cp5_ParamLimits

0x3b1f,	// (0x0005dd72) mup_equalizer_pane_cp6_ParamLimits

0x3b37,	// (0x0005dd8a) mup_equalizer_pane_cp7_ParamLimits

0x123d,	// (0x0005b490) main_gallery_pane

0xde5b,	// (0x000680ae) smil2_volume_pane

0xde76,	// (0x000680c9) smil_status_volume_pane_g1_ParamLimits

0xde63,	// (0x000680b6) smil_status_volume_pane_g2_ParamLimits

0x4684,	// (0x0005e8d7) smil_status_volume_pane_g3_ParamLimits

0xf40d,	// (0x00069660) smil_status_volume_pane_g_ParamLimits

0xdfc8,	// (0x0006821b) bg_popup_window_pane_cp07_ParamLimits

0xdfd6,	// (0x00068229) blid_firmament_pane

0x4d9f,	// (0x0005eff2) aid_size_cell_gallery_ParamLimits

0x4d9f,	// (0x0005eff2) aid_size_cell_gallery

0x4dad,	// (0x0005f000) grid_gallery_pane_ParamLimits

0x4dad,	// (0x0005f000) grid_gallery_pane

0x4dbd,	// (0x0005f010) cell_gallery_pane_ParamLimits

0x4dbd,	// (0x0005f010) cell_gallery_pane

0xe0f9,	// (0x0006834c) bg_cell_gallery_focus_pane_ParamLimits

0xe0f9,	// (0x0006834c) bg_cell_gallery_focus_pane

0xe10b,	// (0x0006835e) cell_gallery_pane_g1_ParamLimits

0xe10b,	// (0x0006835e) cell_gallery_pane_g1

0x4e0b,	// (0x0005f05e) cell_gallery_pane_g2_ParamLimits

0x4e0b,	// (0x0005f05e) cell_gallery_pane_g2

0x4e18,	// (0x0005f06b) cell_gallery_pane_g3_ParamLimits

0x4e18,	// (0x0005f06b) cell_gallery_pane_g3

0xe117,	// (0x0006836a) cell_gallery_pane_g4_ParamLimits

0xe117,	// (0x0006836a) cell_gallery_pane_g4

0x0003,

0xf49d,	// (0x000696f0) cell_gallery_pane_g_ParamLimits

0xf49d,	// (0x000696f0) cell_gallery_pane_g

0xe123,	// (0x00068376) bg_cell_gallery_focus_pane_g1

0xe12b,	// (0x0006837e) bg_cell_gallery_focus_pane_g2

0xe133,	// (0x00068386) bg_cell_gallery_focus_pane_g3

0xe13b,	// (0x0006838e) bg_cell_gallery_focus_pane_g4

0xe143,	// (0x00068396) bg_cell_gallery_focus_pane_g5

0xe14b,	// (0x0006839e) bg_cell_gallery_focus_pane_g6

0xe153,	// (0x000683a6) bg_cell_gallery_focus_pane_g7

0xe15b,	// (0x000683ae) bg_cell_gallery_focus_pane_g8

0x0007,

0x05f6,	// (0x0005a849) bg_cell_gallery_focus_pane_g

0xe163,	// (0x000683b6) aid_firma_cardinal

0xe177,	// (0x000683ca) blid_firmament_pane_t1

0xe18e,	// (0x000683e1) blid_firmament_pane_t2

0xe1a5,	// (0x000683f8) blid_firmament_pane_t3

0xe1bc,	// (0x0006840f) blid_firmament_pane_t4

0x0003,

0x0607,	// (0x0005a85a) blid_firmament_pane_t

0xe1d3,	// (0x00068426) blid_sat_info_pane

0xe1e3,	// (0x00068436) blid_sat_info_pane_g1

0xe1e3,	// (0x00068436) blid_sat_info_pane_g2

0x0001,

0x0610,	// (0x0005a863) blid_sat_info_pane_g

0xe1ed,	// (0x00068440) blid_sat_info_pane_t1

0xe1fb,	// (0x0006844e) smil2_volume_content_pane

0xe204,	// (0x00068457) smil2_volume_pane_g1

0xe20c,	// (0x0006845f) smil2_volume_content_pane_g1

0xe215,	// (0x00068468) smil2_volume_content_pane_g2

0xe21e,	// (0x00068471) smil2_volume_content_pane_g3

0xe227,	// (0x0006847a) smil2_volume_content_pane_g4

0xe230,	// (0x00068483) smil2_volume_content_pane_g5

0xe239,	// (0x0006848c) smil2_volume_content_pane_g6

0xe242,	// (0x00068495) smil2_volume_content_pane_g7

0xe24b,	// (0x0006849e) smil2_volume_content_pane_g8

0xe254,	// (0x000684a7) smil2_volume_content_pane_g9

0xe25d,	// (0x000684b0) smil2_volume_content_pane_g10

0x0009,

0x0615,	// (0x0005a868) smil2_volume_content_pane_g

0x1a90,	// (0x0005bce3) cale_week_day_heading_pane_t1_ParamLimits

0x1aab,	// (0x0005bcfe) cale_week_day_heading_pane_t2_ParamLimits

0x1ac6,	// (0x0005bd19) cale_week_day_heading_pane_t3_ParamLimits

0x1ae1,	// (0x0005bd34) cale_week_day_heading_pane_t4_ParamLimits

0x1afc,	// (0x0005bd4f) cale_week_day_heading_pane_t5_ParamLimits

0x1b17,	// (0x0005bd6a) cale_week_day_heading_pane_t6_ParamLimits

0x1b32,	// (0x0005bd85) cale_week_day_heading_pane_t7_ParamLimits

0xf179,	// (0x000693cc) cale_week_day_heading_pane_t_ParamLimits

0xbf10,	// (0x00066163) bg_cale_side_pane_ParamLimits

0x1b4d,	// (0x0005bda0) cale_week_time_pane_t1_ParamLimits

0x1b67,	// (0x0005bdba) cale_week_time_pane_t2_ParamLimits

0x1b81,	// (0x0005bdd4) cale_week_time_pane_t3_ParamLimits

0x1b9b,	// (0x0005bdee) cale_week_time_pane_t4_ParamLimits

0x1bb5,	// (0x0005be08) cale_week_time_pane_t5_ParamLimits

0x1bcf,	// (0x0005be22) cale_week_time_pane_t6_ParamLimits

0x1bed,	// (0x0005be40) cale_week_time_pane_t7_ParamLimits

0x1c0f,	// (0x0005be62) cale_week_time_pane_t8_ParamLimits

0xf188,	// (0x000693db) cale_week_time_pane_t_ParamLimits

0x1c33,	// (0x0005be86) cell_cale_week_pane_g2_ParamLimits

0xbf10,	// (0x00066163) bg_cale_side_pane_cp01_ParamLimits

0x2f8e,	// (0x0005d1e1) cale_month_week_pane_t1_ParamLimits

0x2fa7,	// (0x0005d1fa) cale_month_week_pane_t2_ParamLimits

0x2fc0,	// (0x0005d213) cale_month_week_pane_t3_ParamLimits

0x2fd9,	// (0x0005d22c) cale_month_week_pane_t4_ParamLimits

0x2ff2,	// (0x0005d245) cale_month_week_pane_t5_ParamLimits

0x3013,	// (0x0005d266) cale_month_week_pane_t6_ParamLimits

0xf237,	// (0x0006948a) cale_month_week_pane_t_ParamLimits

0x3180,	// (0x0005d3d3) cell_cale_month_pane_g1_ParamLimits

0x123d,	// (0x0005b490) main_cale_event_viewer_pane

0xb130,	// (0x00065383) listscroll_cale_event_viewer_pane

0xe266,	// (0x000684b9) list_cale_ev_pane

0xe26e,	// (0x000684c1) scroll_pane_cp023

0xe27a,	// (0x000684cd) field_cale_ev_pane_ParamLimits

0xe27a,	// (0x000684cd) field_cale_ev_pane

0xe298,	// (0x000684eb) field_cale_ev_content_pane_ParamLimits

0xe298,	// (0x000684eb) field_cale_ev_content_pane

0xe2a4,	// (0x000684f7) field_cale_ev_pane_g1_ParamLimits

0xe2a4,	// (0x000684f7) field_cale_ev_pane_g1

0xe2b0,	// (0x00068503) field_cale_ev_pane_g2_ParamLimits

0xe2b0,	// (0x00068503) field_cale_ev_pane_g2

0xe2c8,	// (0x0006851b) field_cale_ev_pane_g3_ParamLimits

0xe2c8,	// (0x0006851b) field_cale_ev_pane_g3

0x0002,

0x062a,	// (0x0005a87d) field_cale_ev_pane_g_ParamLimits

0x062a,	// (0x0005a87d) field_cale_ev_pane_g

0xe2e0,	// (0x00068533) field_cale_ev_pane_t1_ParamLimits

0xe2e0,	// (0x00068533) field_cale_ev_pane_t1

0xe2f7,	// (0x0006854a) field_cale_ev_content_pane_t1_ParamLimits

0xe2f7,	// (0x0006854a) field_cale_ev_content_pane_t1

0xcb40,	// (0x00066d93) bg_button_pane_cp01

0x1821,	// (0x0005ba74) listscroll_cale_week_pane_ParamLimits

0xbebb,	// (0x0006610e) popup_toolbar_window_cp01

0xbee1,	// (0x00066134) listscroll_cale_week_pane_t1_ParamLimits

0x1821,	// (0x0005ba74) listscroll_cale_day_pane_ParamLimits

0xbebb,	// (0x0006610e) popup_toolbar_window_cp02

0xc303,	// (0x00066556) listscroll_cale_day_pane_t1_ParamLimits

0x1821,	// (0x0005ba74) main_cale_month_pane_ParamLimits

0x4563,	// (0x0005e7b6) popup_toolbar_window_cp03_ParamLimits

0x4563,	// (0x0005e7b6) popup_toolbar_window_cp03

0x3e8f,	// (0x0005e0e2) main_image_pane_g2_ParamLimits

0x3e8f,	// (0x0005e0e2) main_image_pane_g2

0x3e9b,	// (0x0005e0ee) main_image_pane_g3_ParamLimits

0x3e9b,	// (0x0005e0ee) main_image_pane_g3

0x0002,

0xf3cd,	// (0x00069620) main_image_pane_g_ParamLimits

0xf3cd,	// (0x00069620) main_image_pane_g

0xcc5a,	// (0x00066ead) main_image_pane_t1_ParamLimits

0x3ea7,	// (0x0005e0fa) main_image_pane_t2_ParamLimits

0x3ea7,	// (0x0005e0fa) main_image_pane_t2

0x3eb9,	// (0x0005e10c) main_image_pane_t3_ParamLimits

0x3eb9,	// (0x0005e10c) main_image_pane_t3

0x3ecb,	// (0x0005e11e) main_image_pane_t4_ParamLimits

0x3ecb,	// (0x0005e11e) main_image_pane_t4

0x0003,

0xf3d4,	// (0x00069627) main_image_pane_t_ParamLimits

0xf3d4,	// (0x00069627) main_image_pane_t

0x3edd,	// (0x0005e130) popup_image_details_window_cp01

0x3ee7,	// (0x0005e13a) popup_toobar_trans_pane_cp01_ParamLimits

0x3ee7,	// (0x0005e13a) popup_toobar_trans_pane_cp01

0x44b3,	// (0x0005e706) popup_image_details_window_ParamLimits

0x44b3,	// (0x0005e706) popup_image_details_window

0x44c1,	// (0x0005e714) popup_image_focus_window

0x4803,	// (0x0005ea56) camera2_autofocus_pane_ParamLimits

0x4803,	// (0x0005ea56) camera2_autofocus_pane

0xb130,	// (0x00065383) bg_popup_sub_pane_cp06

0xe315,	// (0x00068568) popup_image_focus_window_g1

0xe31d,	// (0x00068570) popup_image_focus_window_g2

0xe325,	// (0x00068578) popup_image_focus_window_g3

0xe32d,	// (0x00068580) popup_image_focus_window_g4

0x0003,

0x0631,	// (0x0005a884) popup_image_focus_window_g

0xe335,	// (0x00068588) popup_image_focus_window_t1

0xe343,	// (0x00068596) popup_image_focus_window_t2

0xe353,	// (0x000685a6) popup_image_focus_window_t3

0x0002,

0x063a,	// (0x0005a88d) popup_image_focus_window_t

0xe361,	// (0x000685b4) camera2_autofocus_pane_g1

0xbdd4,	// (0x00066027) bg_tb_trans_pane_cp01

0xe36f,	// (0x000685c2) popup_image_details_window_g1

0xe382,	// (0x000685d5) popup_image_details_window_g2

0x0002,

0x064c,	// (0x0005a89f) popup_image_details_window_g

0xe3ab,	// (0x000685fe) popup_image_details_window_t1

0xe3bd,	// (0x00068610) popup_image_details_window_t2

0xe3d6,	// (0x00068629) popup_image_details_window_t3

0xe3ea,	// (0x0006863d) popup_image_details_window_t4

0xe405,	// (0x00068658) popup_image_details_window_t5

0x0004,

0x0653,	// (0x0005a8a6) popup_image_details_window_t

0xb859,	// (0x00065aac) bg_calc_paper_pane_ParamLimits

0x123d,	// (0x0005b490) grid_highlight_pane_cp013

0x15a8,	// (0x0005b7fb) list_calc_pane_ParamLimits

0x15ba,	// (0x0005b80d) scroll_pane_cp024

0xb86d,	// (0x00065ac0) bg_calc_display_pane_ParamLimits

0x15c2,	// (0x0005b815) calc_display_pane_t1_ParamLimits

0x15d7,	// (0x0005b82a) calc_display_pane_t2_ParamLimits

0x15ec,	// (0x0005b83f) calc_display_pane_t3_ParamLimits

0xf110,	// (0x00069363) calc_display_pane_t_ParamLimits

0x16c8,	// (0x0005b91b) cell_calc_pane_g2

0x0001,

0xf12d,	// (0x00069380) cell_calc_pane_g

0x16d1,	// (0x0005b924) cell_calc_pane_t1

0xbe05,	// (0x00066058) grid_highlight_pane_cp02_ParamLimits

0xbe1b,	// (0x0006606e) toolbar_button_pane_cp01_ParamLimits

0xbe1b,	// (0x0006606e) toolbar_button_pane_cp01

0xcc9f,	// (0x00066ef2) temp_image_control_pane_ParamLimits

0xcc9f,	// (0x00066ef2) temp_image_control_pane

0x442b,	// (0x0005e67e) main_mp3_pane

0xe41f,	// (0x00068672) temp_image_control_pane_g1_ParamLimits

0xe41f,	// (0x00068672) temp_image_control_pane_g1

0xe42d,	// (0x00068680) temp_image_control_pane_g2_ParamLimits

0xe42d,	// (0x00068680) temp_image_control_pane_g2

0xe43f,	// (0x00068692) temp_image_control_pane_g3_ParamLimits

0xe43f,	// (0x00068692) temp_image_control_pane_g3

0x4e55,	// (0x0005f0a8) temp_image_control_pane_g4_ParamLimits

0x4e55,	// (0x0005f0a8) temp_image_control_pane_g4

0x0003,

0xf4b1,	// (0x00069704) temp_image_control_pane_g_ParamLimits

0xf4b1,	// (0x00069704) temp_image_control_pane_g

0xe41f,	// (0x00068672) main_mp3_pane_g1

0x4e66,	// (0x0005f0b9) main_mp3_pane_g2

0x0007,

0xf4ba,	// (0x0006970d) main_mp3_pane_g

0xe482,	// (0x000686d5) main_mp3_pane_t1

0xbf73,	// (0x000661c6) main_camera_pane_g8_ParamLimits

0xbf73,	// (0x000661c6) main_camera_pane_g8

0x1ec0,	// (0x0005c113) main_video_pane_g7_ParamLimits

0x1ec0,	// (0x0005c113) main_video_pane_g7

0x494b,	// (0x0005eb9e) main_camera2_pane_t7_ParamLimits

0x494b,	// (0x0005eb9e) main_camera2_pane_t7

0xc0bb,	// (0x0006630e) scroll_pane_cp025_ParamLimits

0xc0bb,	// (0x0006630e) scroll_pane_cp025

0xc0cf,	// (0x00066322) scroll_pane_cp026_ParamLimits

0xc0cf,	// (0x00066322) scroll_pane_cp026

0xc0de,	// (0x00066331) wml_content_pane_ParamLimits

0x123d,	// (0x0005b490) main_touch_calib_pane

0x4f0a,	// (0x0005f15d) main_touch_calib_pane_g1

0x4f16,	// (0x0005f169) main_touch_calib_pane_g2

0x4f22,	// (0x0005f175) main_touch_calib_pane_g3

0x4f2e,	// (0x0005f181) main_touch_calib_pane_g4

0x0003,

0xf4d8,	// (0x0006972b) main_touch_calib_pane_g

0x4f3a,	// (0x0005f18d) main_touch_calib_pane_t1

0x4f53,	// (0x0005f1a6) main_touch_calib_pane_t2

0x0004,

0xf4e1,	// (0x00069734) main_touch_calib_pane_t

0xc86c,	// (0x00066abf) mup_progress_pane_cp02

0xc8a1,	// (0x00066af4) navi_pane_g1

0xc95c,	// (0x00066baf) navi_pane_mp_t3

0x442b,	// (0x0005e67e) main_mp3_pane_ParamLimits

0x45a0,	// (0x0005e7f3) navi_pane_ParamLimits

0xe41f,	// (0x00068672) main_mp3_pane_g1_ParamLimits

0x4e66,	// (0x0005f0b9) main_mp3_pane_g2_ParamLimits

0x4e72,	// (0x0005f0c5) main_mp3_pane_g3_ParamLimits

0x4e72,	// (0x0005f0c5) main_mp3_pane_g3

0x4e7e,	// (0x0005f0d1) main_mp3_pane_g4_ParamLimits

0x4e7e,	// (0x0005f0d1) main_mp3_pane_g4

0xe44f,	// (0x000686a2) main_mp3_pane_g5_ParamLimits

0xe44f,	// (0x000686a2) main_mp3_pane_g5

0xe45d,	// (0x000686b0) main_mp3_pane_g6_ParamLimits

0xe45d,	// (0x000686b0) main_mp3_pane_g6

0xe46a,	// (0x000686bd) main_mp3_pane_g7_ParamLimits

0xe46a,	// (0x000686bd) main_mp3_pane_g7

0xe476,	// (0x000686c9) main_mp3_pane_g8_ParamLimits

0xe476,	// (0x000686c9) main_mp3_pane_g8

0xf4ba,	// (0x0006970d) main_mp3_pane_g_ParamLimits

0x4e8a,	// (0x0005f0dd) main_mp3_pane_t2

0x4e9a,	// (0x0005f0ed) main_mp3_pane_t3

0xe490,	// (0x000686e3) main_mp3_pane_t4

0xe49e,	// (0x000686f1) main_mp3_pane_t5

0x0005,

0xf4cb,	// (0x0006971e) main_mp3_pane_t

0xe4ac,	// (0x000686ff) mup_progress_pane_cp01

0x0e8a,	// (0x0005b0dd) aid_zoom_text_secondary2

0xe266,	// (0x000684b9) list_cale_ev2_pane

0xe26e,	// (0x000684c1) scroll_pane_cp023_ParamLimits

0x4fae,	// (0x0005f201) field_cale_ev2_pane_ParamLimits

0x4fae,	// (0x0005f201) field_cale_ev2_pane

0x9cbe,	// (0x00063f11) field_cale_ev2_pane_g1_ParamLimits

0x9cbe,	// (0x00063f11) field_cale_ev2_pane_g1

0x9cca,	// (0x00063f1d) field_cale_ev2_pane_g2_ParamLimits

0x9cca,	// (0x00063f1d) field_cale_ev2_pane_g2

0x9ce2,	// (0x00063f35) field_cale_ev2_pane_g3_ParamLimits

0x9ce2,	// (0x00063f35) field_cale_ev2_pane_g3

0x0003,

0xf4ec,	// (0x0006973f) field_cale_ev2_pane_g_ParamLimits

0xf4ec,	// (0x0006973f) field_cale_ev2_pane_g

0x4fd7,	// (0x0005f22a) field_cale_ev2_pane_t1_ParamLimits

0x4fd7,	// (0x0005f22a) field_cale_ev2_pane_t1

0x4fee,	// (0x0005f241) field_cale_ev2_pane_t2_ParamLimits

0x4fee,	// (0x0005f241) field_cale_ev2_pane_t2

0x0001,

0xf4f5,	// (0x00069748) field_cale_ev2_pane_t_ParamLimits

0xf4f5,	// (0x00069748) field_cale_ev2_pane_t

0x3d6f,	// (0x0005dfc2) main_postcard_pane_g5_ParamLimits

0x3d6f,	// (0x0005dfc2) main_postcard_pane_g5

0x3d7d,	// (0x0005dfd0) main_postcard_pane_g6_ParamLimits

0x3d7d,	// (0x0005dfd0) main_postcard_pane_g6

0x1d0a,	// (0x0005bf5d) camera2_autofocus_pane_cp_ParamLimits

0x1d0a,	// (0x0005bf5d) camera2_autofocus_pane_cp

0x442b,	// (0x0005e67e) main_mup3_pane

0x5022,	// (0x0005f275) main_mup3_pane_g1_ParamLimits

0x5022,	// (0x0005f275) main_mup3_pane_g1

0x5043,	// (0x0005f296) main_mup3_pane_g2_ParamLimits

0x5043,	// (0x0005f296) main_mup3_pane_g2

0x50bb,	// (0x0005f30e) main_mup3_pane_g3_ParamLimits

0x50bb,	// (0x0005f30e) main_mup3_pane_g3

0x50fe,	// (0x0005f351) main_mup3_pane_g4_ParamLimits

0x50fe,	// (0x0005f351) main_mup3_pane_g4

0x5141,	// (0x0005f394) main_mup3_pane_g5_ParamLimits

0x5141,	// (0x0005f394) main_mup3_pane_g5

0x5184,	// (0x0005f3d7) main_mup3_pane_g6_ParamLimits

0x5184,	// (0x0005f3d7) main_mup3_pane_g6

0xe4d4,	// (0x00068727) main_mup3_pane_g7_ParamLimits

0xe4d4,	// (0x00068727) main_mup3_pane_g7

0x0007,

0xf4fa,	// (0x0006974d) main_mup3_pane_g_ParamLimits

0xf4fa,	// (0x0006974d) main_mup3_pane_g

0x51fa,	// (0x0005f44d) main_mup3_pane_t1_ParamLimits

0x51fa,	// (0x0005f44d) main_mup3_pane_t1

0x5269,	// (0x0005f4bc) main_mup3_pane_t2_ParamLimits

0x5269,	// (0x0005f4bc) main_mup3_pane_t2

0x5332,	// (0x0005f585) main_mup3_pane_t4_ParamLimits

0x5332,	// (0x0005f585) main_mup3_pane_t4

0x5380,	// (0x0005f5d3) main_mup3_pane_t5_ParamLimits

0x5380,	// (0x0005f5d3) main_mup3_pane_t5

0x5430,	// (0x0005f683) main_mup3_pane_t6_ParamLimits

0x5430,	// (0x0005f683) main_mup3_pane_t6

0x0005,

0xf50b,	// (0x0006975e) main_mup3_pane_t_ParamLimits

0xf50b,	// (0x0006975e) main_mup3_pane_t

0x54dc,	// (0x0005f72f) mup3_progress_pane_ParamLimits

0x54dc,	// (0x0005f72f) mup3_progress_pane

0x555a,	// (0x0005f7ad) popup_mup3_control_window_ParamLimits

0x555a,	// (0x0005f7ad) popup_mup3_control_window

0xe4e2,	// (0x00068735) popup_mup3_text_window

0x5573,	// (0x0005f7c6) mup3_progress_pane_t1

0x5592,	// (0x0005f7e5) mup3_progress_pane_t2

0xe4ea,	// (0x0006873d) mup3_progress_pane_t3

0x0002,

0xf518,	// (0x0006976b) mup3_progress_pane_t

0xe507,	// (0x0006875a) mup_progress_pane_cp03

0xb130,	// (0x00065383) bg_tb_trans_pane_cp04

0x55b1,	// (0x0005f804) mup3_volume_pane

0x55b9,	// (0x0005f80c) popup_mup3_control_window_g1

0x55c2,	// (0x0005f815) mup3_volume_pane_g1

0x55cb,	// (0x0005f81e) mup3_volume_pane_g2

0x55d4,	// (0x0005f827) mup3_volume_pane_g3

0x0002,

0xf51f,	// (0x00069772) mup3_volume_pane_g

0xb130,	// (0x00065383) bg_tb_trans_pane_cp03

0xe517,	// (0x0006876a) popup_mup3_text_window_g1

0xe51f,	// (0x00068772) popup_mup3_text_window_t1

0xbdee,	// (0x00066041) list_calc_item_pane_g1_ParamLimits

0xdf36,	// (0x00068189) mup_volume_pane_cp_g1

0x4f6c,	// (0x0005f1bf) main_touch_calib_pane_t3

0x4f82,	// (0x0005f1d5) main_touch_calib_pane_t4

0x4f98,	// (0x0005f1eb) main_touch_calib_pane_t5

0x0f72,	// (0x0005b1c5) aid_cell_size_toolbar2

0x0f7a,	// (0x0005b1cd) aid_popup3_width_pane

0x0e82,	// (0x0005b0d5) aid_zoom_text_msg_primary

0x1cdf,	// (0x0005bf32) vorec_t7

0xb879,	// (0x00065acc) bg_calc_paper_pane_g1_ParamLimits

0xb891,	// (0x00065ae4) bg_calc_paper_pane_g2_ParamLimits

0xb885,	// (0x00065ad8) bg_calc_paper_pane_g3_ParamLimits

0xbde2,	// (0x00066035) bg_calc_paper_pane_g4_ParamLimits

0xb89d,	// (0x00065af0) bg_calc_paper_pane_g5_ParamLimits

0x162b,	// (0x0005b87e) bg_calc_paper_pane_g6_ParamLimits

0x163c,	// (0x0005b88f) bg_calc_paper_pane_g7_ParamLimits

0x164d,	// (0x0005b8a0) bg_calc_paper_pane_g8_ParamLimits

0xf117,	// (0x0006936a) bg_calc_paper_pane_g_ParamLimits

0x165e,	// (0x0005b8b1) calc_bg_paper_pane_g9_ParamLimits

0x1df1,	// (0x0005c044) image_qvga_pane_ParamLimits

0x1df1,	// (0x0005c044) image_qvga_pane

0xb7a8,	// (0x000659fb) bg_popup_sub_pane_cp04_ParamLimits

0xcbd6,	// (0x00066e29) popup_mup_playback_window_g1_ParamLimits

0xcbe2,	// (0x00066e35) popup_mup_playback_window_t1_ParamLimits

0xcbf7,	// (0x00066e4a) popup_mup_playback_window_t2_ParamLimits

0x0416,	// (0x0005a669) popup_mup_playback_window_t_ParamLimits

0x4a7a,	// (0x0005eccd) main_mup2_pane_g3_ParamLimits

0x4a7a,	// (0x0005eccd) main_mup2_pane_g3

0x21bd,	// (0x0005c410) popup_toolbar_window_cp04

0xcfd9,	// (0x0006722c) popup_call2_audio_second_window_g3_ParamLimits

0xcfd9,	// (0x0006722c) popup_call2_audio_second_window_g3

0xd3e3,	// (0x00067636) popup_call2_audio_first_window_g4_ParamLimits

0xd3e3,	// (0x00067636) popup_call2_audio_first_window_g4

0xda6e,	// (0x00067cc1) popup_call2_audio_in_window_g4_ParamLimits

0xda6e,	// (0x00067cc1) popup_call2_audio_in_window_g4

0x3e82,	// (0x0005e0d5) aid_area_sk_bg_cut_ParamLimits

0x3e82,	// (0x0005e0d5) aid_area_sk_bg_cut

0xcc0c,	// (0x00066e5f) aid_area_sk_bg_cut_2_ParamLimits

0xcc0c,	// (0x00066e5f) aid_area_sk_bg_cut_2

0x4dfb,	// (0x0005f04e) aid_placing_details_win

0x4e03,	// (0x0005f056) aid_placing_details_win_2

0xe361,	// (0x000685b4) camera2_autofocus_pane_g1_ParamLimits

0x11c9,	// (0x0005b41c) popup_fixed_preview_cale_window_ParamLimits

0x11c9,	// (0x0005b41c) popup_fixed_preview_cale_window

0xc9ec,	// (0x00066c3f) navi_slider_pane_g3

0xc9e3,	// (0x00066c36) navi_slider_pane_g4

0xc9da,	// (0x00066c2d) navi_slider_pane_g5

0xc9ec,	// (0x00066c3f) navi_slider_pane_g6

0x370e,	// (0x0005d961) navi_slider_pane_g7

0xcb0d,	// (0x00066d60) mup_scale_pane_g3

0xcb16,	// (0x00066d69) mup_scale_pane_g4

0xcb1f,	// (0x00066d72) mup_scale_pane_g5

0x3b4f,	// (0x0005dda2) mup_scale_pane_g6

0x3b58,	// (0x0005ddab) mup_scale_pane_g7

0xc9ec,	// (0x00066c3f) cams2_slider_pane_g3

0xdfb8,	// (0x0006820b) cams2_slider_pane_g4

0x4d53,	// (0x0005efa6) cams2_slider_pane_g5

0xc9ec,	// (0x00066c3f) cams2_slider_pane_g6

0x4d5b,	// (0x0005efae) cams2_slider_pane_g7

0xe1e3,	// (0x00068436) camera2_autofocus_pane_cp_g1

0xddcf,	// (0x00068022) bg_popup_preview_window_pane_cp02_ParamLimits

0xddcf,	// (0x00068022) bg_popup_preview_window_pane_cp02

0xe52d,	// (0x00068780) list_fp_cale_pane_ParamLimits

0xe52d,	// (0x00068780) list_fp_cale_pane

0xe539,	// (0x0006878c) popup_fixed_preview_cale_window_t1_ParamLimits

0xe539,	// (0x0006878c) popup_fixed_preview_cale_window_t1

0x55dd,	// (0x0005f830) popup_fixed_preview_cale_window_t2_ParamLimits

0x55dd,	// (0x0005f830) popup_fixed_preview_cale_window_t2

0x55f2,	// (0x0005f845) popup_fixed_preview_cale_window_t3_ParamLimits

0x55f2,	// (0x0005f845) popup_fixed_preview_cale_window_t3

0x0002,

0xf526,	// (0x00069779) popup_fixed_preview_cale_window_t_ParamLimits

0xf526,	// (0x00069779) popup_fixed_preview_cale_window_t

0x5607,	// (0x0005f85a) list_single_fp_cale_pane_ParamLimits

0x5607,	// (0x0005f85a) list_single_fp_cale_pane

0xe557,	// (0x000687aa) list_single_fp_cale_pane_g1_ParamLimits

0xe557,	// (0x000687aa) list_single_fp_cale_pane_g1

0xe563,	// (0x000687b6) list_single_fp_cale_pane_g2_ParamLimits

0xe563,	// (0x000687b6) list_single_fp_cale_pane_g2

0x0002,

0x06e5,	// (0x0005a938) list_single_fp_cale_pane_g_ParamLimits

0x06e5,	// (0x0005a938) list_single_fp_cale_pane_g

0xe57c,	// (0x000687cf) list_single_fp_cale_pane_t1_ParamLimits

0xe57c,	// (0x000687cf) list_single_fp_cale_pane_t1

0xe58e,	// (0x000687e1) list_single_fp_cale_pane_t2_ParamLimits

0xe58e,	// (0x000687e1) list_single_fp_cale_pane_t2

0x0001,

0x06ec,	// (0x0005a93f) list_single_fp_cale_pane_t_ParamLimits

0x06ec,	// (0x0005a93f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x123d,	// (0x0005b490) main_dialer_pane

0x561a,	// (0x0005f86d) aid_cell_size_keypad

0x5624,	// (0x0005f877) dialer_ne_pane

0x562e,	// (0x0005f881) grid_dialer_command_1_pane

0x5636,	// (0x0005f889) grid_dialer_command_2_pane

0x563e,	// (0x0005f891) grid_dialer_keypad_pane

0x5650,	// (0x0005f8a3) bg_popup_call_pane_cp06_ParamLimits

0x5650,	// (0x0005f8a3) bg_popup_call_pane_cp06

0x565c,	// (0x0005f8af) dialer_ne_clear_pane_ParamLimits

0x565c,	// (0x0005f8af) dialer_ne_clear_pane

0xe5c1,	// (0x00068814) dialer_ne_pane_g1

0xe5c9,	// (0x0006881c) dialer_ne_pane_t1_ParamLimits

0xe5c9,	// (0x0006881c) dialer_ne_pane_t1

0x5668,	// (0x0005f8bb) dialer_ne_pane_t2_ParamLimits

0x5668,	// (0x0005f8bb) dialer_ne_pane_t2

0x5685,	// (0x0005f8d8) dialer_ne_pane_t3_ParamLimits

0x5685,	// (0x0005f8d8) dialer_ne_pane_t3

0x0002,

0xf52d,	// (0x00069780) dialer_ne_pane_t_ParamLimits

0xf52d,	// (0x00069780) dialer_ne_pane_t

0x56a9,	// (0x0005f8fc) dialer_ne_pane_t3_copy1_ParamLimits

0x56a9,	// (0x0005f8fc) dialer_ne_pane_t3_copy1

0x56cd,	// (0x0005f920) cell_dialer_keypad_pane_ParamLimits

0x56cd,	// (0x0005f920) cell_dialer_keypad_pane

0x56e4,	// (0x0005f937) cell_dialer_command_1_pane_ParamLimits

0x56e4,	// (0x0005f937) cell_dialer_command_1_pane

0x56fa,	// (0x0005f94d) cell_dialer_command_2_pane_ParamLimits

0x56fa,	// (0x0005f94d) cell_dialer_command_2_pane

0xe5db,	// (0x0006882e) bg_button_pane_cp02_ParamLimits

0xe5db,	// (0x0006882e) bg_button_pane_cp02

0x5709,	// (0x0005f95c) cell_dialer_keypad_pane_g1_ParamLimits

0x5709,	// (0x0005f95c) cell_dialer_keypad_pane_g1

0xe5db,	// (0x0006882e) bg_button_pane_cp03_ParamLimits

0xe5db,	// (0x0006882e) bg_button_pane_cp03

0x571e,	// (0x0005f971) cell_dialer_command_1_pane_g1_ParamLimits

0x571e,	// (0x0005f971) cell_dialer_command_1_pane_g1

0xe5e7,	// (0x0006883a) bg_button_pane_cp04

0x5732,	// (0x0005f985) cell_dialer_command_2_pane_g1

0xbf6b,	// (0x000661be) bg_button_pane_cp06

0xe5ef,	// (0x00068842) dialer_ne_clear_pane_g1

0xc8ad,	// (0x00066b00) navi_pane_g2

0xc8db,	// (0x00066b2e) navi_pane_g3

0x0002,

0x0319,	// (0x0005a56c) navi_pane_g

0xc96a,	// (0x00066bbd) navi_pane_mv_g2

0xc991,	// (0x00066be4) navi_pane_mv_g5

0x36d9,	// (0x0005d92c) navi_pane_mv_t1

0xb86d,	// (0x00065ac0) main_clock2_pane

0x5772,	// (0x0005f9c5) main_clock2_list_pane_ParamLimits

0x5772,	// (0x0005f9c5) main_clock2_list_pane

0x579a,	// (0x0005f9ed) main_clock2_pane_t1_ParamLimits

0x579a,	// (0x0005f9ed) main_clock2_pane_t1

0x57bc,	// (0x0005fa0f) main_clock2_pane_t2_ParamLimits

0x57bc,	// (0x0005fa0f) main_clock2_pane_t2

0x0004,

0xf534,	// (0x00069787) main_clock2_pane_t_ParamLimits

0xf534,	// (0x00069787) main_clock2_pane_t

0x5817,	// (0x0005fa6a) popup_clock_analogue_window_cp03_ParamLimits

0x5817,	// (0x0005fa6a) popup_clock_analogue_window_cp03

0x5835,	// (0x0005fa88) popup_clock_digital_window_cp02_ParamLimits

0x5835,	// (0x0005fa88) popup_clock_digital_window_cp02

0x58a2,	// (0x0005faf5) main_clock2_list_single_pane_ParamLimits

0x58a2,	// (0x0005faf5) main_clock2_list_single_pane

0xbf6b,	// (0x000661be) list_highlight_pane_cp05

0xe62d,	// (0x00068880) main_clock2_list_single_pane_t1

0x21bd,	// (0x0005c410) popup_toolbar_window_cp04_ParamLimits

0x4e25,	// (0x0005f078) camera2_autofocus_pane_g2_ParamLimits

0x4e25,	// (0x0005f078) camera2_autofocus_pane_g2

0x4e31,	// (0x0005f084) camera2_autofocus_pane_g3_ParamLimits

0x4e31,	// (0x0005f084) camera2_autofocus_pane_g3

0x4e3d,	// (0x0005f090) camera2_autofocus_pane_g4_ParamLimits

0x4e3d,	// (0x0005f090) camera2_autofocus_pane_g4

0x4e49,	// (0x0005f09c) camera2_autofocus_pane_g5_ParamLimits

0x4e49,	// (0x0005f09c) camera2_autofocus_pane_g5

0x0004,

0xf4a6,	// (0x000696f9) camera2_autofocus_pane_g_ParamLimits

0xf4a6,	// (0x000696f9) camera2_autofocus_pane_g

0xe4b4,	// (0x00068707) camera2_autofocus_pane_cp_g2

0xe4bc,	// (0x0006870f) camera2_autofocus_pane_cp_g3

0xe4c4,	// (0x00068717) camera2_autofocus_pane_cp_g4

0xe4cc,	// (0x0006871f) camera2_autofocus_pane_cp_g5

0x0004,

0x06a7,	// (0x0005a8fa) camera2_autofocus_pane_cp_g

0x5648,	// (0x0005f89b) popup_dialer_spcha_window

0xb130,	// (0x00065383) bg_popup_sub_pane_cp07

0xe63b,	// (0x0006888e) list_spcha_pane

0xe643,	// (0x00068896) list_single_spcha_pane_ParamLimits

0xe643,	// (0x00068896) list_single_spcha_pane

0xb130,	// (0x00065383) list_highlight_pane_cp06

0xe654,	// (0x000688a7) list_single_spcha_pane_t1

0xd818,	// (0x00067a6b) popup_call2_audio_out_window_g4_ParamLimits

0xd818,	// (0x00067a6b) popup_call2_audio_out_window_g4

0x123d,	// (0x0005b490) main_imed2_pane

0x44c9,	// (0x0005e71c) popup_imed_adjust2_window

0x44dc,	// (0x0005e72f) popup_imed_trans_window_ParamLimits

0x44dc,	// (0x0005e72f) popup_imed_trans_window

0xe021,	// (0x00068274) popup_blid_sat_info2_window_t1

0xe02f,	// (0x00068282) popup_blid_sat_info2_window_t2

0x000a,

0x05d6,	// (0x0005a829) popup_blid_sat_info2_window_t

0x594b,	// (0x0005fb9e) aid_size_cell_colour_35

0x5965,	// (0x0005fbb8) aid_size_cell_colour_112

0x597c,	// (0x0005fbcf) aid_size_cell_effect

0xbdd4,	// (0x00066027) bg_tb_trans_pane_cp02

0xc4b3,	// (0x00066706) heading_imed_pane

0x5996,	// (0x0005fbe9) listscroll_imed_pane

0xe662,	// (0x000688b5) heading_imed_pane_g1

0xe66a,	// (0x000688bd) heading_imed_pane_t1

0xe678,	// (0x000688cb) grid_imed_colour_35_pane_ParamLimits

0xe678,	// (0x000688cb) grid_imed_colour_35_pane

0x59a2,	// (0x0005fbf5) grid_imed_effect_pane

0xe68f,	// (0x000688e2) list_imed_aspect_pane

0x59b2,	// (0x0005fc05) scroll_pane_cp027_ParamLimits

0x59b2,	// (0x0005fc05) scroll_pane_cp027

0x59be,	// (0x0005fc11) cell_imed_effect_pane_ParamLimits

0x59be,	// (0x0005fc11) cell_imed_effect_pane

0xe697,	// (0x000688ea) cell_imed_colour_pane_ParamLimits

0xe697,	// (0x000688ea) cell_imed_colour_pane

0xe6d9,	// (0x0006892c) cell_imed_colour_pane_g1_ParamLimits

0xe6d9,	// (0x0006892c) cell_imed_colour_pane_g1

0xe6ea,	// (0x0006893d) hgihlgiht_grid_pane_cp016_ParamLimits

0xe6ea,	// (0x0006893d) hgihlgiht_grid_pane_cp016

0x59d6,	// (0x0005fc29) cell_imed_effect_pane_g1

0x59de,	// (0x0005fc31) grid_highlight_pane_cp017

0xe6fb,	// (0x0006894e) list_imed_single_pane_ParamLimits

0xe6fb,	// (0x0006894e) list_imed_single_pane

0xb130,	// (0x00065383) list_highlight_pane_cp07

0xe710,	// (0x00068963) list_imed_aspect_pane_comp1_t1

0xdddb,	// (0x0006802e) bg_tb_trans_pane_cp05

0xe732,	// (0x00068985) popup_imed_adjust2_window_g1

0xe759,	// (0x000689ac) popup_imed_adjust2_window_t1

0xe771,	// (0x000689c4) slider_imed_adjust_pane

0xe785,	// (0x000689d8) slider_imed_adjust_pane_g1

0xe795,	// (0x000689e8) slider_imed_adjust_pane_g2

0xe7a5,	// (0x000689f8) slider_imed_adjust_pane_g3

0xe7b6,	// (0x00068a09) slider_imed_adjust_pane_g4

0x0003,

0x071a,	// (0x0005a96d) slider_imed_adjust_pane_g

0x59e7,	// (0x0005fc3a) aid_size_cell_clipart2

0x59f3,	// (0x0005fc46) grid_imed_clipart_pane

0xe7c7,	// (0x00068a1a) scroll_pane_cp031

0x59fd,	// (0x0005fc50) cell_imed_clipart_pane_ParamLimits

0x59fd,	// (0x0005fc50) cell_imed_clipart_pane

0x5a1f,	// (0x0005fc72) cell_imed_clipart_pane_g1

0xb130,	// (0x00065383) grid_highlight_pane_cp014

0x577e,	// (0x0005f9d1) main_clock2_pane_g1_ParamLimits

0x577e,	// (0x0005f9d1) main_clock2_pane_g1

0x584d,	// (0x0005faa0) aid_call2_pane_cp10

0x585f,	// (0x0005fab2) aid_call_pane_cp10

0xc80e,	// (0x00066a61) popup_clock_analogue_window_cp10_g1

0xc80e,	// (0x00066a61) popup_clock_analogue_window_cp10_g2

0x5871,	// (0x0005fac4) popup_clock_analogue_window_cp10_g3

0x5871,	// (0x0005fac4) popup_clock_analogue_window_cp10_g4

0xc80e,	// (0x00066a61) popup_clock_analogue_window_cp10_g5

0x0004,

0xf53f,	// (0x00069792) popup_clock_analogue_window_cp10_g

0x5883,	// (0x0005fad6) popup_clock_analogue_window_cp10_t1

0x58b4,	// (0x0005fb07) clock_digital_number_pane_cp10_ParamLimits

0x58b4,	// (0x0005fb07) clock_digital_number_pane_cp10

0x58cc,	// (0x0005fb1f) clock_digital_number_pane_cp11_ParamLimits

0x58cc,	// (0x0005fb1f) clock_digital_number_pane_cp11

0x58e4,	// (0x0005fb37) clock_digital_number_pane_cp12_ParamLimits

0x58e4,	// (0x0005fb37) clock_digital_number_pane_cp12

0x58fc,	// (0x0005fb4f) clock_digital_number_pane_cp13_ParamLimits

0x58fc,	// (0x0005fb4f) clock_digital_number_pane_cp13

0x5914,	// (0x0005fb67) clock_digital_separator_pane_cp10_ParamLimits

0x5914,	// (0x0005fb67) clock_digital_separator_pane_cp10

0x592c,	// (0x0005fb7f) popup_clock_digital_window_cp02_t1_ParamLimits

0x592c,	// (0x0005fb7f) popup_clock_digital_window_cp02_t1

0xb7a0,	// (0x000659f3) clock_digital_number_pane_cp10_g1

0xb7a0,	// (0x000659f3) clock_digital_number_pane_cp10_g2

0x0001,

0x0723,	// (0x0005a976) clock_digital_number_pane_cp10_g

0xb7a0,	// (0x000659f3) clock_digital_separator_pane_cp10_g1

0xb7a0,	// (0x000659f3) clock_digital_separator_pane_g2_cp10

0xc999,	// (0x00066bec) navi_pane_vded_g4

0xc9a2,	// (0x00066bf5) navi_pane_vded_g5

0xc9ab,	// (0x00066bfe) navi_pane_vded_t1

0x123d,	// (0x0005b490) main_vded_pane

0x5a28,	// (0x0005fc7b) main_vded_pane_g1

0x5a34,	// (0x0005fc87) main_vded_pane_g2

0x5a3e,	// (0x0005fc91) main_vded_pane_g3

0x0002,

0xf54a,	// (0x0006979d) main_vded_pane_g

0x5a48,	// (0x0005fc9b) main_vded_pane_t1

0x5a56,	// (0x0005fca9) main_vded_pane_t2

0x0001,

0xf551,	// (0x000697a4) main_vded_pane_t

0x5a64,	// (0x0005fcb7) vded_slider_pane

0x5a6e,	// (0x0005fcc1) vded_video_pane

0xe7cf,	// (0x00068a22) vded_video_pane_g1

0x5a78,	// (0x0005fccb) vded_video_pane_g2

0xe1e3,	// (0x00068436) vded_video_pane_g3

0x0002,

0xf556,	// (0x000697a9) vded_video_pane_g

0xe7d9,	// (0x00068a2c) vded_slider_pane_g1

0xdf36,	// (0x00068189) vded_slider_pane_g2

0xe7e2,	// (0x00068a35) vded_slider_pane_g3

0xe7eb,	// (0x00068a3e) vded_slider_pane_g4

0xe7f4,	// (0x00068a47) vded_slider_pane_g5

0x0004,

0x073b,	// (0x0005a98e) vded_slider_pane_g

0x554c,	// (0x0005f79f) mup3_rocker_pane_ParamLimits

0x554c,	// (0x0005f79f) mup3_rocker_pane

0x5a81,	// (0x0005fcd4) mup3_control_keys_pane_g1

0x5a89,	// (0x0005fcdc) mup3_control_keys_pane_g2

0x5a91,	// (0x0005fce4) mup3_control_keys_pane_g3

0x5a99,	// (0x0005fcec) mup3_control_keys_pane_g4

0x0003,

0xf55d,	// (0x000697b0) mup3_control_keys_pane_g

0x11f1,	// (0x0005b444) popup_toolbar2_fixed_window_cp01_ParamLimits

0x11f1,	// (0x0005b444) popup_toolbar2_fixed_window_cp01

0x5566,	// (0x0005f7b9) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5566,	// (0x0005f7b9) popup_toolbar2_fixed_window_cp02

0xd14b,	// (0x0006739e) popup_call2_audio_second_window_t4_ParamLimits

0xd14b,	// (0x0006739e) popup_call2_audio_second_window_t4

0xd679,	// (0x000678cc) popup_call2_audio_first_window_t6_ParamLimits

0xd679,	// (0x000678cc) popup_call2_audio_first_window_t6

0xd91b,	// (0x00067b6e) popup_call2_audio_out_window_t6_ParamLimits

0xd91b,	// (0x00067b6e) popup_call2_audio_out_window_t6

0x123d,	// (0x0005b490) main_vitu_pane

0x5aa9,	// (0x0005fcfc) aid_size_cell_itu_ParamLimits

0x5aa9,	// (0x0005fcfc) aid_size_cell_itu

0xf092,	// (0x000692e5) bg_popup_window_pane_cp08_ParamLimits

0xf092,	// (0x000692e5) bg_popup_window_pane_cp08

0x5ab7,	// (0x0005fd0a) field_vitu_entry_pane_ParamLimits

0x5ab7,	// (0x0005fd0a) field_vitu_entry_pane

0x5ac6,	// (0x0005fd19) grid_vitu_function_pane_ParamLimits

0x5ac6,	// (0x0005fd19) grid_vitu_function_pane

0x5ad6,	// (0x0005fd29) grid_vitu_itu_pane_ParamLimits

0x5ad6,	// (0x0005fd29) grid_vitu_itu_pane

0x5ae6,	// (0x0005fd39) cell_vitu_itu_pane_ParamLimits

0x5ae6,	// (0x0005fd39) cell_vitu_itu_pane

0x5afb,	// (0x0005fd4e) cell_vitu_function_pane_ParamLimits

0x5afb,	// (0x0005fd4e) cell_vitu_function_pane

0xbdd4,	// (0x00066027) bg_popup_sub_pane_cp08_ParamLimits

0xbdd4,	// (0x00066027) bg_popup_sub_pane_cp08

0x5b0d,	// (0x0005fd60) field_vitu_entry_pane_t1_ParamLimits

0x5b0d,	// (0x0005fd60) field_vitu_entry_pane_t1

0xe815,	// (0x00068a68) field_vitu_entry_pane_t2_ParamLimits

0xe815,	// (0x00068a68) field_vitu_entry_pane_t2

0x0001,

0xf566,	// (0x000697b9) field_vitu_entry_pane_t_ParamLimits

0xf566,	// (0x000697b9) field_vitu_entry_pane_t

0xe832,	// (0x00068a85) bg_button_pane_cp05_ParamLimits

0xe832,	// (0x00068a85) bg_button_pane_cp05

0x5b29,	// (0x0005fd7c) cell_vitu_itu_pane_g1

0x5b41,	// (0x0005fd94) cell_vitu_itu_pane_t1_ParamLimits

0x5b41,	// (0x0005fd94) cell_vitu_itu_pane_t1

0x5b53,	// (0x0005fda6) cell_vitu_itu_pane_t2_ParamLimits

0x5b53,	// (0x0005fda6) cell_vitu_itu_pane_t2

0x0002,

0xf56b,	// (0x000697be) cell_vitu_itu_pane_t_ParamLimits

0xf56b,	// (0x000697be) cell_vitu_itu_pane_t

0xe840,	// (0x00068a93) bg_button_pane_cp07

0x5b88,	// (0x0005fddb) cell_vitu_function_pane_g1

0x14cf,	// (0x0005b722) main_calc_pane_g1

0x0fae,	// (0x0005b201) aid_visual_content_pane

0x123d,	// (0x0005b490) main_vradio_pane

0x5b91,	// (0x0005fde4) main_vradio_pane_g1_ParamLimits

0x5b91,	// (0x0005fde4) main_vradio_pane_g1

0xe84a,	// (0x00068a9d) main_vradio_pane_g2_ParamLimits

0xe84a,	// (0x00068a9d) main_vradio_pane_g2

0x0001,

0xf572,	// (0x000697c5) main_vradio_pane_g_ParamLimits

0xf572,	// (0x000697c5) main_vradio_pane_g

0x5ba1,	// (0x0005fdf4) main_vradio_pane_t1_ParamLimits

0x5ba1,	// (0x0005fdf4) main_vradio_pane_t1

0x5bb3,	// (0x0005fe06) main_vradio_pane_t2_ParamLimits

0x5bb3,	// (0x0005fe06) main_vradio_pane_t2

0xe857,	// (0x00068aaa) main_vradio_pane_t3_ParamLimits

0xe857,	// (0x00068aaa) main_vradio_pane_t3

0x0002,

0xf577,	// (0x000697ca) main_vradio_pane_t_ParamLimits

0xf577,	// (0x000697ca) main_vradio_pane_t

0x5bc5,	// (0x0005fe18) vradio_rocker_control_pane_ParamLimits

0x5bc5,	// (0x0005fe18) vradio_rocker_control_pane

0x5bd1,	// (0x0005fe24) vradio_station_info_pane_ParamLimits

0x5bd1,	// (0x0005fe24) vradio_station_info_pane

0xe86b,	// (0x00068abe) vradio_frequency_info_pane_ParamLimits

0xe86b,	// (0x00068abe) vradio_frequency_info_pane

0xe1e3,	// (0x00068436) vradio_station_info_pane_g1

0xe87a,	// (0x00068acd) vradio_station_info_pane_t1_ParamLimits

0xe87a,	// (0x00068acd) vradio_station_info_pane_t1

0xe89c,	// (0x00068aef) vradio_station_info_pane_t2_ParamLimits

0xe89c,	// (0x00068aef) vradio_station_info_pane_t2

0x0001,

0x076c,	// (0x0005a9bf) vradio_station_info_pane_t_ParamLimits

0x076c,	// (0x0005a9bf) vradio_station_info_pane_t

0xe8ae,	// (0x00068b01) vradio_tuning_pane

0xe8b6,	// (0x00068b09) vradio_rocker_control_pane_g1

0xe8be,	// (0x00068b11) vradio_rocker_control_pane_g2

0xe8c6,	// (0x00068b19) vradio_rocker_control_pane_g3

0xe8ce,	// (0x00068b21) vradio_rocker_control_pane_g4

0xe8d6,	// (0x00068b29) vradio_rocker_control_pane_g5

0x0004,

0x0771,	// (0x0005a9c4) vradio_rocker_control_pane_g

0x5be0,	// (0x0005fe33) vradio_frequency_info_pane_g1

0xe8de,	// (0x00068b31) vradio_frequency_info_pane_t1_ParamLimits

0xe8de,	// (0x00068b31) vradio_frequency_info_pane_t1

0x5bea,	// (0x0005fe3d) vradio_tuning_pane_g1

0x5bf3,	// (0x0005fe46) vradio_tuning_pane_t1

0x0ff7,	// (0x0005b24a) area_side_right_pane_ParamLimits

0x0ff7,	// (0x0005b24a) area_side_right_pane

0xdd96,	// (0x00067fe9) status_small_pane_g1

0xdd9e,	// (0x00067ff1) status_small_pane_g2

0xdda7,	// (0x00067ffa) status_small_pane_g3

0xddb0,	// (0x00068003) status_small_pane_g4

0x0003,

0x052c,	// (0x0005a77f) status_small_pane_g

0xddb9,	// (0x0006800c) status_small_pane_t1

0x123d,	// (0x0005b490) main_video3_pane

0xe8f2,	// (0x00068b45) cams_zoom_vslider_pane

0xe8fa,	// (0x00068b4d) image3_wide_pane_ParamLimits

0xe8fa,	// (0x00068b4d) image3_wide_pane

0xe914,	// (0x00068b67) image3_wide_small_pane

0xe920,	// (0x00068b73) main_video3_pane_g1_ParamLimits

0xe920,	// (0x00068b73) main_video3_pane_g1

0xe93c,	// (0x00068b8f) main_video3_pane_g2_ParamLimits

0xe93c,	// (0x00068b8f) main_video3_pane_g2

0x0001,

0x077c,	// (0x0005a9cf) main_video3_pane_g_ParamLimits

0x077c,	// (0x0005a9cf) main_video3_pane_g

0xe958,	// (0x00068bab) main_video3_pane_t1_ParamLimits

0xe958,	// (0x00068bab) main_video3_pane_t1

0xe983,	// (0x00068bd6) main_video3_pane_t2_ParamLimits

0xe983,	// (0x00068bd6) main_video3_pane_t2

0xe9ae,	// (0x00068c01) main_video3_pane_t3_ParamLimits

0xe9ae,	// (0x00068c01) main_video3_pane_t3

0x0002,

0x0781,	// (0x0005a9d4) main_video3_pane_t_ParamLimits

0x0781,	// (0x0005a9d4) main_video3_pane_t

0xe9db,	// (0x00068c2e) cams_zoom_vslider_pane_g1

0xe9e4,	// (0x00068c37) cams_zoom_vslider_pane_g2

0x0001,

0x0788,	// (0x0005a9db) cams_zoom_vslider_pane_g

0xe9ec,	// (0x00068c3f) small_slider_vertical_pane

0xe1e3,	// (0x00068436) small_slider_vertical_pane_g1

0xe1e3,	// (0x00068436) small_slider_vertical_pane_g2

0xe9f4,	// (0x00068c47) small_slider_vertical_pane_g3

0x0002,

0x078d,	// (0x0005a9e0) small_slider_vertical_pane_g

0x123d,	// (0x0005b490) main_hwr_training_pane

0xe9fd,	// (0x00068c50) hwr_training_instruct_pane_ParamLimits

0xe9fd,	// (0x00068c50) hwr_training_instruct_pane

0x5c02,	// (0x0005fe55) hwr_training_navi_pane_ParamLimits

0x5c02,	// (0x0005fe55) hwr_training_navi_pane

0x5c1c,	// (0x0005fe6f) hwr_training_write_pane_ParamLimits

0x5c1c,	// (0x0005fe6f) hwr_training_write_pane

0xb130,	// (0x00065383) bg_frame_shadow_pane

0xea34,	// (0x00068c87) hwr_training_write_pane_g1

0xea3c,	// (0x00068c8f) hwr_training_write_pane_g2

0xea44,	// (0x00068c97) hwr_training_write_pane_g3

0xea4c,	// (0x00068c9f) hwr_training_write_pane_g4

0xea54,	// (0x00068ca7) hwr_training_write_pane_g5

0xea5c,	// (0x00068caf) hwr_training_write_pane_g6

0xea64,	// (0x00068cb7) hwr_training_write_pane_g7

0x0006,

0x0794,	// (0x0005a9e7) hwr_training_write_pane_g

0x5c54,	// (0x0005fea7) hwr_training_navi_pane_g1_ParamLimits

0x5c54,	// (0x0005fea7) hwr_training_navi_pane_g1

0x5c66,	// (0x0005feb9) hwr_training_navi_pane_g2_ParamLimits

0x5c66,	// (0x0005feb9) hwr_training_navi_pane_g2

0x5c78,	// (0x0005fecb) hwr_training_navi_pane_g3_ParamLimits

0x5c78,	// (0x0005fecb) hwr_training_navi_pane_g3

0x5c88,	// (0x0005fedb) hwr_training_navi_pane_g4_ParamLimits

0x5c88,	// (0x0005fedb) hwr_training_navi_pane_g4

0x0004,

0xf57e,	// (0x000697d1) hwr_training_navi_pane_g_ParamLimits

0xf57e,	// (0x000697d1) hwr_training_navi_pane_g

0x5ca2,	// (0x0005fef5) hwr_training_navi_pane_t1

0x5cb0,	// (0x0005ff03) list_single_hwr_training_instruct_pane_ParamLimits

0x5cb0,	// (0x0005ff03) list_single_hwr_training_instruct_pane

0xea6c,	// (0x00068cbf) list_single_hwr_training_instruct_pane_t1

0xe123,	// (0x00068376) bg_frame_shadow_pane_g1

0xea7b,	// (0x00068cce) bg_frame_shadow_pane_g2

0xea83,	// (0x00068cd6) bg_frame_shadow_pane_g3

0xea8b,	// (0x00068cde) bg_frame_shadow_pane_g4

0xea93,	// (0x00068ce6) bg_frame_shadow_pane_g5

0xea9b,	// (0x00068cee) bg_frame_shadow_pane_g6

0xeaa3,	// (0x00068cf6) bg_frame_shadow_pane_g7

0xbe5f,	// (0x000660b2) bg_frame_shadow_pane_g8

0x0007,

0x07ae,	// (0x0005aa01) bg_frame_shadow_pane_g

0x123d,	// (0x0005b490) main_video_tele_dialer_pane

0x5cd5,	// (0x0005ff28) aid_size_cell_video_keypad_ParamLimits

0x5cd5,	// (0x0005ff28) aid_size_cell_video_keypad

0x5ce5,	// (0x0005ff38) grid_video_dialer_keypad_pane_ParamLimits

0x5ce5,	// (0x0005ff38) grid_video_dialer_keypad_pane

0x5d19,	// (0x0005ff6c) video_down_pane_cp_ParamLimits

0x5d19,	// (0x0005ff6c) video_down_pane_cp

0x5d43,	// (0x0005ff96) cell_video_dialer_keypad_pane_ParamLimits

0x5d43,	// (0x0005ff96) cell_video_dialer_keypad_pane

0xeaab,	// (0x00068cfe) bg_button_pane_cp08_ParamLimits

0xeaab,	// (0x00068cfe) bg_button_pane_cp08

0x5d58,	// (0x0005ffab) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5d58,	// (0x0005ffab) cell_video_dialer_keypad_pane_g1

0x5540,	// (0x0005f793) mup3_rocker2_pane_ParamLimits

0x5540,	// (0x0005f793) mup3_rocker2_pane

0xe1e3,	// (0x00068436) mup3_rocker2_pane_g1

0x4439,	// (0x0005e68c) main_dialer2_pane

0x123d,	// (0x0005b490) main_mp4_pane

0x5d97,	// (0x0005ffea) main_mp4_pane_g1_ParamLimits

0x5d97,	// (0x0005ffea) main_mp4_pane_g1

0x5da5,	// (0x0005fff8) main_mp4_pane_g2_ParamLimits

0x5da5,	// (0x0005fff8) main_mp4_pane_g2

0x5db3,	// (0x00060006) main_mp4_pane_g3_ParamLimits

0x5db3,	// (0x00060006) main_mp4_pane_g3

0x5df8,	// (0x0006004b) main_mp4_pane_g4_ParamLimits

0x5df8,	// (0x0006004b) main_mp4_pane_g4

0x5e20,	// (0x00060073) main_mp4_pane_g5_ParamLimits

0x5e20,	// (0x00060073) main_mp4_pane_g5

0x0005,

0xf598,	// (0x000697eb) main_mp4_pane_g_ParamLimits

0xf598,	// (0x000697eb) main_mp4_pane_g

0x5e70,	// (0x000600c3) main_mp4_pane_t1_ParamLimits

0x5e70,	// (0x000600c3) main_mp4_pane_t1

0x5ecc,	// (0x0006011f) main_mp4_pane_t2_ParamLimits

0x5ecc,	// (0x0006011f) main_mp4_pane_t2

0xeab7,	// (0x00068d0a) main_mp4_pane_t3_ParamLimits

0xeab7,	// (0x00068d0a) main_mp4_pane_t3

0x5f1e,	// (0x00060171) main_mp4_pane_t4_ParamLimits

0x5f1e,	// (0x00060171) main_mp4_pane_t4

0x0003,

0xf5a5,	// (0x000697f8) main_mp4_pane_t_ParamLimits

0xf5a5,	// (0x000697f8) main_mp4_pane_t

0x5f62,	// (0x000601b5) mp4_progress_pane_ParamLimits

0x5f62,	// (0x000601b5) mp4_progress_pane

0x5fac,	// (0x000601ff) mp4_rocker_pane_ParamLimits

0x5fac,	// (0x000601ff) mp4_rocker_pane

0xeadf,	// (0x00068d32) mp4_progress_pane_t1

0xeaf8,	// (0x00068d4b) mp4_progress_pane_t2

0x0001,

0x07e4,	// (0x0005aa37) mp4_progress_pane_t

0xeb11,	// (0x00068d64) mup_progress_pane_cp04

0xa086,	// (0x000642d9) mp4_rocker_pane_g1

0x5fcc,	// (0x0006021f) aid_cell_size_keypad2_ParamLimits

0x5fcc,	// (0x0006021f) aid_cell_size_keypad2

0x5fdc,	// (0x0006022f) dialer2_ne_pane_ParamLimits

0x5fdc,	// (0x0006022f) dialer2_ne_pane

0x5fea,	// (0x0006023d) grid_dialer2_keypad_pane_ParamLimits

0x5fea,	// (0x0006023d) grid_dialer2_keypad_pane

0xf084,	// (0x000692d7) bg_popup_call_pane_cp07_ParamLimits

0xf084,	// (0x000692d7) bg_popup_call_pane_cp07

0x5ffa,	// (0x0006024d) dialer2_ne_pane_t1_ParamLimits

0x5ffa,	// (0x0006024d) dialer2_ne_pane_t1

0x601f,	// (0x00060272) cell_dialer2_keypad_pane_ParamLimits

0x601f,	// (0x00060272) cell_dialer2_keypad_pane

0xeb2f,	// (0x00068d82) bg_button_pane_pane_cp04_ParamLimits

0xeb2f,	// (0x00068d82) bg_button_pane_pane_cp04

0x6034,	// (0x00060287) cell_dialer2_keypad_pane_g1_ParamLimits

0x6034,	// (0x00060287) cell_dialer2_keypad_pane_g1

0x207f,	// (0x0005c2d2) aid_placing_vt_set_content_ParamLimits

0x207f,	// (0x0005c2d2) aid_placing_vt_set_content

0x20ab,	// (0x0005c2fe) aid_placing_vt_set_title_ParamLimits

0x20ab,	// (0x0005c2fe) aid_placing_vt_set_title

0x123d,	// (0x0005b490) main_image3_pane

0x60ce,	// (0x00060321) area_side_right_pane_cp01_ParamLimits

0x60ce,	// (0x00060321) area_side_right_pane_cp01

0x60fb,	// (0x0006034e) main_image3_pane_g1_ParamLimits

0x60fb,	// (0x0006034e) main_image3_pane_g1

0x6109,	// (0x0006035c) main_image3_pane_g2_ParamLimits

0x6109,	// (0x0006035c) main_image3_pane_g2

0x6122,	// (0x00060375) main_image3_pane_g3_ParamLimits

0x6122,	// (0x00060375) main_image3_pane_g3

0x613b,	// (0x0006038e) main_image3_pane_g4_ParamLimits

0x613b,	// (0x0006038e) main_image3_pane_g4

0x0003,

0xf5b8,	// (0x0006980b) main_image3_pane_g_ParamLimits

0xf5b8,	// (0x0006980b) main_image3_pane_g

0x6154,	// (0x000603a7) main_image3_pane_t1_ParamLimits

0x6154,	// (0x000603a7) main_image3_pane_t1

0x6179,	// (0x000603cc) main_image3_pane_t2_ParamLimits

0x6179,	// (0x000603cc) main_image3_pane_t2

0x6198,	// (0x000603eb) main_image3_pane_t3_ParamLimits

0x6198,	// (0x000603eb) main_image3_pane_t3

0x0003,

0xf5c1,	// (0x00069814) main_image3_pane_t_ParamLimits

0xf5c1,	// (0x00069814) main_image3_pane_t

0xf092,	// (0x000692e5) grid_sctrl_middle_pane_cp01_ParamLimits

0xf092,	// (0x000692e5) grid_sctrl_middle_pane_cp01

0x61f9,	// (0x0006044c) cell_sctrl_middle_pane_cp01_ParamLimits

0x61f9,	// (0x0006044c) cell_sctrl_middle_pane_cp01

0x620a,	// (0x0006045d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x620a,	// (0x0006045d) cell_sctrl_middle_pane_cp01_g1

0x123d,	// (0x0005b490) main_call4_pane

0x6217,	// (0x0006046a) aid_size_button_call4_ParamLimits

0x6217,	// (0x0006046a) aid_size_button_call4

0x6247,	// (0x0006049a) call4_windows_pane_ParamLimits

0x6247,	// (0x0006049a) call4_windows_pane

0x6261,	// (0x000604b4) grid_call4_button_pane_ParamLimits

0x6261,	// (0x000604b4) grid_call4_button_pane

0xeb3b,	// (0x00068d8e) call4_windows_conf_pane

0xeb52,	// (0x00068da5) popup_call4_audio_first_window_ParamLimits

0xeb52,	// (0x00068da5) popup_call4_audio_first_window

0xeb9a,	// (0x00068ded) popup_call4_audio_second_window_ParamLimits

0xeb9a,	// (0x00068ded) popup_call4_audio_second_window

0xebb3,	// (0x00068e06) popup_call4_audio_wait_window_ParamLimits

0xebb3,	// (0x00068e06) popup_call4_audio_wait_window

0x6285,	// (0x000604d8) cell_call4_button_pane_ParamLimits

0x6285,	// (0x000604d8) cell_call4_button_pane

0x62aa,	// (0x000604fd) bg_button_pane_cp09_ParamLimits

0x62aa,	// (0x000604fd) bg_button_pane_cp09

0x62b6,	// (0x00060509) cell_call4_button_pane_g1_ParamLimits

0x62b6,	// (0x00060509) cell_call4_button_pane_g1

0x62c3,	// (0x00060516) cell_call4_button_pane_t1_ParamLimits

0x62c3,	// (0x00060516) cell_call4_button_pane_t1

0xebc9,	// (0x00068e1c) popup_call4_audio_conf_window_ParamLimits

0xebc9,	// (0x00068e1c) popup_call4_audio_conf_window

0x5573,	// (0x0005f7c6) mup3_progress_pane_t1_ParamLimits

0x5592,	// (0x0005f7e5) mup3_progress_pane_t2_ParamLimits

0xe4ea,	// (0x0006873d) mup3_progress_pane_t3_ParamLimits

0xf518,	// (0x0006976b) mup3_progress_pane_t_ParamLimits

0xe507,	// (0x0006875a) mup_progress_pane_cp03_ParamLimits

0x5aa1,	// (0x0005fcf4) mup3_control_keys_pane_g4_copy1

0x5f90,	// (0x000601e3) mp4_rocker2_pane_ParamLimits

0x5f90,	// (0x000601e3) mp4_rocker2_pane

0xebe5,	// (0x00068e38) mp4_rocker2_pane_g1

0xebdd,	// (0x00068e30) mp4_rocker2_pane_g2

0x6307,	// (0x0006055a) mp4_rocker2_pane_g3

0x630f,	// (0x00060562) mp4_rocker2_pane_g4

0x6317,	// (0x0006056a) mp4_rocker2_pane_g5

0x0004,

0xf5ca,	// (0x0006981d) mp4_rocker2_pane_g

0x123d,	// (0x0005b490) main_camera4_pane

0x123d,	// (0x0005b490) main_video4_pane

0x5cf5,	// (0x0005ff48) main_video_tele_dialer_pane_t1_ParamLimits

0x5cf5,	// (0x0005ff48) main_video_tele_dialer_pane_t1

0x5d07,	// (0x0005ff5a) main_video_tele_dialer_pane_t2_ParamLimits

0x5d07,	// (0x0005ff5a) main_video_tele_dialer_pane_t2

0x0001,

0xf589,	// (0x000697dc) main_video_tele_dialer_pane_t_ParamLimits

0xf589,	// (0x000697dc) main_video_tele_dialer_pane_t

0x6337,	// (0x0006058a) cam4_autofocus_pane_ParamLimits

0x6337,	// (0x0006058a) cam4_autofocus_pane

0x6351,	// (0x000605a4) cam4_image_uncrop_pane_ParamLimits

0x6351,	// (0x000605a4) cam4_image_uncrop_pane

0x6368,	// (0x000605bb) cam4_indicators_pane_ParamLimits

0x6368,	// (0x000605bb) cam4_indicators_pane

0x6384,	// (0x000605d7) main_camera4_pane_g1_ParamLimits

0x6384,	// (0x000605d7) main_camera4_pane_g1

0x6390,	// (0x000605e3) main_camera4_pane_g2_ParamLimits

0x6390,	// (0x000605e3) main_camera4_pane_g2

0x6390,	// (0x000605e3) main_camera4_pane_g3_ParamLimits

0x6390,	// (0x000605e3) main_camera4_pane_g3

0x639c,	// (0x000605ef) main_camera4_pane_g4_ParamLimits

0x639c,	// (0x000605ef) main_camera4_pane_g4

0x63a8,	// (0x000605fb) main_camera4_pane_g5_ParamLimits

0x63a8,	// (0x000605fb) main_camera4_pane_g5

0x0005,

0xf5d5,	// (0x00069828) main_camera4_pane_g_ParamLimits

0xf5d5,	// (0x00069828) main_camera4_pane_g

0x63c2,	// (0x00060615) main_camera4_pane_t1_ParamLimits

0x63c2,	// (0x00060615) main_camera4_pane_t1

0x640a,	// (0x0006065d) bg_tb_trans_pane_cp06

0x6420,	// (0x00060673) cam4_indicators_pane_g1

0x6431,	// (0x00060684) cam4_indicators_pane_g2

0x0002,

0xf5f0,	// (0x00069843) cam4_indicators_pane_g

0x644f,	// (0x000606a2) cam4_indicators_pane_t1

0x6479,	// (0x000606cc) main_video4_pane_g1_ParamLimits

0x6479,	// (0x000606cc) main_video4_pane_g1

0x6485,	// (0x000606d8) main_video4_pane_g2_ParamLimits

0x6485,	// (0x000606d8) main_video4_pane_g2

0x6491,	// (0x000606e4) main_video4_pane_g3_ParamLimits

0x6491,	// (0x000606e4) main_video4_pane_g3

0x649d,	// (0x000606f0) main_video4_pane_g4_ParamLimits

0x649d,	// (0x000606f0) main_video4_pane_g4

0x0004,

0xf5f7,	// (0x0006984a) main_video4_pane_g_ParamLimits

0xf5f7,	// (0x0006984a) main_video4_pane_g

0x64bd,	// (0x00060710) vid4_indicators_pane_ParamLimits

0x64bd,	// (0x00060710) vid4_indicators_pane

0x64dc,	// (0x0006072f) video4_image_uncrop_cif_pane_ParamLimits

0x64dc,	// (0x0006072f) video4_image_uncrop_cif_pane

0x64eb,	// (0x0006073e) video4_image_uncrop_nhd_pane_ParamLimits

0x64eb,	// (0x0006073e) video4_image_uncrop_nhd_pane

0x6351,	// (0x000605a4) video4_image_uncrop_vga_pane_ParamLimits

0x6351,	// (0x000605a4) video4_image_uncrop_vga_pane

0x442b,	// (0x0005e67e) bg_tb_trans_pane_cp07

0x6502,	// (0x00060755) vid4_indicators_pane_g1

0x6516,	// (0x00060769) vid4_indicators_pane_g2

0x652a,	// (0x0006077d) vid4_indicators_pane_g3

0x0004,

0xf602,	// (0x00069855) vid4_indicators_pane_g

0x6559,	// (0x000607ac) vid4_indicators_pane_t1

0x6570,	// (0x000607c3) cam4_autofocus_pane_g1

0x6578,	// (0x000607cb) cam4_autofocus_pane_g2

0x6580,	// (0x000607d3) cam4_autofocus_pane_g3

0x0002,

0xf60d,	// (0x00069860) cam4_autofocus_pane_g

0x6588,	// (0x000607db) cam4_autofocus_pane_g3_copy1

0x5d27,	// (0x0005ff7a) video_down_pane_cp_t1

0x5d35,	// (0x0005ff88) video_down_pane_cp_t2

0x0001,

0xf58e,	// (0x000697e1) video_down_pane_cp_t

0x1223,	// (0x0005b476) popup_vitu2_window_ParamLimits

0x1223,	// (0x0005b476) popup_vitu2_window

0x6590,	// (0x000607e3) aid_size_cell2_itu2_ParamLimits

0x6590,	// (0x000607e3) aid_size_cell2_itu2

0x65b2,	// (0x00060805) aid_size_cell_itu2_ParamLimits

0x65b2,	// (0x00060805) aid_size_cell_itu2

0x65f6,	// (0x00060849) bg_popup_window_pane_cp09_ParamLimits

0x65f6,	// (0x00060849) bg_popup_window_pane_cp09

0x6604,	// (0x00060857) field_vitu2_entry_pane_ParamLimits

0x6604,	// (0x00060857) field_vitu2_entry_pane

0x6624,	// (0x00060877) grid_vitu2_function_pane_ParamLimits

0x6624,	// (0x00060877) grid_vitu2_function_pane

0x6668,	// (0x000608bb) grid_vitu2_itu_pane_ParamLimits

0x6668,	// (0x000608bb) grid_vitu2_itu_pane

0x66e4,	// (0x00060937) cell_vitu2_itu_pane_ParamLimits

0x66e4,	// (0x00060937) cell_vitu2_itu_pane

0x66fd,	// (0x00060950) cell_vitu2_function_pane_ParamLimits

0x66fd,	// (0x00060950) cell_vitu2_function_pane

0xebed,	// (0x00068e40) bg_popup_call_pane_cp08_ParamLimits

0xebed,	// (0x00068e40) bg_popup_call_pane_cp08

0xec04,	// (0x00068e57) field_vitu2_entry_pane_g1

0xec10,	// (0x00068e63) field_vitu2_entry_pane_g2

0x0002,

0x084f,	// (0x0005aaa2) field_vitu2_entry_pane_g

0x673e,	// (0x00060991) field_vitu2_entry_pane_t1_ParamLimits

0x673e,	// (0x00060991) field_vitu2_entry_pane_t1

0x9d06,	// (0x00063f59) field_vitu2_entry_pane_t2_ParamLimits

0x9d06,	// (0x00063f59) field_vitu2_entry_pane_t2

0x0001,

0xf614,	// (0x00069867) field_vitu2_entry_pane_t_ParamLimits

0xf614,	// (0x00069867) field_vitu2_entry_pane_t

0x6770,	// (0x000609c3) bg_button_pane_cp010_ParamLimits

0x6770,	// (0x000609c3) bg_button_pane_cp010

0x677e,	// (0x000609d1) cell_vitu2_itu_pane_g1

0x679e,	// (0x000609f1) cell_vitu2_itu_pane_t1_ParamLimits

0x679e,	// (0x000609f1) cell_vitu2_itu_pane_t1

0x0e92,	// (0x0005b0e5) cell_vitu2_itu_pane_t2_ParamLimits

0x0e92,	// (0x0005b0e5) cell_vitu2_itu_pane_t2

0x0002,

0xf61e,	// (0x00069871) cell_vitu2_itu_pane_t_ParamLimits

0xf61e,	// (0x00069871) cell_vitu2_itu_pane_t

0x442b,	// (0x0005e67e) bg_button_pane_cp011

0x67ea,	// (0x00060a3d) cell_vitu2_function_pane_g1

0x123d,	// (0x0005b490) main_myfav_hc_pane

0x61da,	// (0x0006042d) popup_image3_note_pane_ParamLimits

0x61da,	// (0x0006042d) popup_image3_note_pane

0x61e8,	// (0x0006043b) popup_image3_tool_bar_pane_ParamLimits

0x61e8,	// (0x0006043b) popup_image3_tool_bar_pane

0x0f08,	// (0x0005b15b) cell_vitu2_itu_pane_t3_ParamLimits

0x0f08,	// (0x0005b15b) cell_vitu2_itu_pane_t3

0xb130,	// (0x00065383) bg_popup_trans_pane

0xec32,	// (0x00068e85) grid_image3_tool_bar_pane

0xec3c,	// (0x00068e8f) bg_popup_trans_pane_g1

0xc1c4,	// (0x00066417) bg_popup_trans_pane_g2

0xec44,	// (0x00068e97) bg_popup_trans_pane_g3

0xec4c,	// (0x00068e9f) bg_popup_trans_pane_g4

0xec54,	// (0x00068ea7) bg_popup_trans_pane_g5

0xec5c,	// (0x00068eaf) bg_popup_trans_pane_g6

0xec64,	// (0x00068eb7) bg_popup_trans_pane_g7

0xec6c,	// (0x00068ebf) bg_popup_trans_pane_g8

0xc1a4,	// (0x000663f7) bg_popup_trans_pane_g9

0x0008,

0x0867,	// (0x0005aaba) bg_popup_trans_pane_g

0xec74,	// (0x00068ec7) cell_image3_tool_bar_pane_ParamLimits

0xec74,	// (0x00068ec7) cell_image3_tool_bar_pane

0xe1e3,	// (0x00068436) cell_image3_tool_bar_pane_g1

0xb130,	// (0x00065383) bg_popup_trans_pane_cp1

0xec88,	// (0x00068edb) popup_image3_note_pane_t1

0xec96,	// (0x00068ee9) popup_image3_note_pane_t2

0xeca4,	// (0x00068ef7) popup_image3_note_pane_t3

0x0002,

0x087a,	// (0x0005aacd) popup_image3_note_pane_t

0xecb2,	// (0x00068f05) popup_image3_note_pane_t3_copy1

0x67fe,	// (0x00060a51) bg_myfav_hc_instruction_pane_ParamLimits

0x67fe,	// (0x00060a51) bg_myfav_hc_instruction_pane

0x6816,	// (0x00060a69) cell_myfav_contact_pane_ParamLimits

0x6816,	// (0x00060a69) cell_myfav_contact_pane

0x6830,	// (0x00060a83) cell_myfav_contact_pane_cp1_ParamLimits

0x6830,	// (0x00060a83) cell_myfav_contact_pane_cp1

0x6848,	// (0x00060a9b) cell_myfav_contact_pane_cp2_ParamLimits

0x6848,	// (0x00060a9b) cell_myfav_contact_pane_cp2

0x6860,	// (0x00060ab3) cell_myfav_contact_pane_cp3_ParamLimits

0x6860,	// (0x00060ab3) cell_myfav_contact_pane_cp3

0x6877,	// (0x00060aca) cell_myfav_contact_pane_cp4_ParamLimits

0x6877,	// (0x00060aca) cell_myfav_contact_pane_cp4

0x688d,	// (0x00060ae0) cell_myfav_contact_pane_cp5_ParamLimits

0x688d,	// (0x00060ae0) cell_myfav_contact_pane_cp5

0x68a1,	// (0x00060af4) cell_myfav_contact_pane_cp6_ParamLimits

0x68a1,	// (0x00060af4) cell_myfav_contact_pane_cp6

0x68b5,	// (0x00060b08) cell_myfav_contact_pane_cp7_ParamLimits

0x68b5,	// (0x00060b08) cell_myfav_contact_pane_cp7

0xecc0,	// (0x00068f13) listscroll_gen_pane_cp05

0x68cd,	// (0x00060b20) main_myfav_hc_pane_g1_ParamLimits

0x68cd,	// (0x00060b20) main_myfav_hc_pane_g1

0x68e3,	// (0x00060b36) main_myfav_hc_pane_g2_ParamLimits

0x68e3,	// (0x00060b36) main_myfav_hc_pane_g2

0x0002,

0xf625,	// (0x00069878) main_myfav_hc_pane_g_ParamLimits

0xf625,	// (0x00069878) main_myfav_hc_pane_g

0x6911,	// (0x00060b64) main_myfav_hc_pane_t1_ParamLimits

0x6911,	// (0x00060b64) main_myfav_hc_pane_t1

0xecc9,	// (0x00068f1c) main_myfav_hc_pane_t2_ParamLimits

0xecc9,	// (0x00068f1c) main_myfav_hc_pane_t2

0xecdb,	// (0x00068f2e) main_myfav_hc_pane_t3_ParamLimits

0xecdb,	// (0x00068f2e) main_myfav_hc_pane_t3

0x6928,	// (0x00060b7b) main_myfav_hc_pane_t4_ParamLimits

0x6928,	// (0x00060b7b) main_myfav_hc_pane_t4

0x0004,

0xf62c,	// (0x0006987f) main_myfav_hc_pane_t_ParamLimits

0xf62c,	// (0x0006987f) main_myfav_hc_pane_t

0xe1e3,	// (0x00068436) bg_myfav_hc_instruction_pane_g1

0xeced,	// (0x00068f40) cell_myfav_contact_pane_g1_ParamLimits

0xeced,	// (0x00068f40) cell_myfav_contact_pane_g1

0xeced,	// (0x00068f40) cell_myfav_contact_pane_g2_ParamLimits

0xeced,	// (0x00068f40) cell_myfav_contact_pane_g2

0xecf9,	// (0x00068f4c) cell_myfav_contact_pane_g3_ParamLimits

0xecf9,	// (0x00068f4c) cell_myfav_contact_pane_g3

0xe4d4,	// (0x00068727) cell_myfav_contact_pane_g4_ParamLimits

0xe4d4,	// (0x00068727) cell_myfav_contact_pane_g4

0xed06,	// (0x00068f59) cell_myfav_contact_pane_g5_ParamLimits

0xed06,	// (0x00068f59) cell_myfav_contact_pane_g5

0x0004,

0x0893,	// (0x0005aae6) cell_myfav_contact_pane_g_ParamLimits

0x0893,	// (0x0005aae6) cell_myfav_contact_pane_g

0x68f9,	// (0x00060b4c) main_myfav_hc_pane_g3_ParamLimits

0x68f9,	// (0x00060b4c) main_myfav_hc_pane_g3

0x112c,	// (0x0005b37f) popup_adpt_find_window

0x6952,	// (0x00060ba5) afind_page_pane_ParamLimits

0x6952,	// (0x00060ba5) afind_page_pane

0x695f,	// (0x00060bb2) aid_size_cell_afind_ParamLimits

0x695f,	// (0x00060bb2) aid_size_cell_afind

0x6979,	// (0x00060bcc) bg_popup_sub_pane_cp09_ParamLimits

0x6979,	// (0x00060bcc) bg_popup_sub_pane_cp09

0x6986,	// (0x00060bd9) find_pane_cp01_ParamLimits

0x6986,	// (0x00060bd9) find_pane_cp01

0xed12,	// (0x00068f65) grid_afind_control_pane_ParamLimits

0xed12,	// (0x00068f65) grid_afind_control_pane

0x6993,	// (0x00060be6) grid_afind_pane_ParamLimits

0x6993,	// (0x00060be6) grid_afind_pane

0x69af,	// (0x00060c02) cell_afind_pane_ParamLimits

0x69af,	// (0x00060c02) cell_afind_pane

0xe1e3,	// (0x00068436) afind_page_pane_g1

0x69f7,	// (0x00060c4a) afind_page_pane_g2

0x6a00,	// (0x00060c53) afind_page_pane_g3

0x0002,

0xf637,	// (0x0006988a) afind_page_pane_g

0x6a09,	// (0x00060c5c) afind_page_pane_t1

0xed26,	// (0x00068f79) cell_afind_grid_control_pane_ParamLimits

0xed26,	// (0x00068f79) cell_afind_grid_control_pane

0xeb2f,	// (0x00068d82) bg_button_pane_cp69_ParamLimits

0xeb2f,	// (0x00068d82) bg_button_pane_cp69

0x6a29,	// (0x00060c7c) cell_afind_pane_g1_ParamLimits

0x6a29,	// (0x00060c7c) cell_afind_pane_g1

0x6a36,	// (0x00060c89) cell_afind_pane_t1_ParamLimits

0x6a36,	// (0x00060c89) cell_afind_pane_t1

0xbfbd,	// (0x00066210) bg_button_pane_cp72

0xed35,	// (0x00068f88) cell_afind_grid_control_pane_g1

0x3fa9,	// (0x0005e1fc) aid_image_placing_area_ParamLimits

0x3fa9,	// (0x0005e1fc) aid_image_placing_area

0xe7fd,	// (0x00068a50) field_vitu_entry_pane_g1_ParamLimits

0xe7fd,	// (0x00068a50) field_vitu_entry_pane_g1

0xe809,	// (0x00068a5c) field_vitu_entry_pane_g2_ParamLimits

0xe809,	// (0x00068a5c) field_vitu_entry_pane_g2

0x0001,

0x074f,	// (0x0005a9a2) field_vitu_entry_pane_g_ParamLimits

0x074f,	// (0x0005a9a2) field_vitu_entry_pane_g

0x5b29,	// (0x0005fd7c) cell_vitu_itu_pane_g1_ParamLimits

0x5b6b,	// (0x0005fdbe) cell_vitu_itu_pane_t3_ParamLimits

0x5b6b,	// (0x0005fdbe) cell_vitu_itu_pane_t3

0xeadf,	// (0x00068d32) mp4_progress_pane_t1_ParamLimits

0xeaf8,	// (0x00068d4b) mp4_progress_pane_t2_ParamLimits

0x07e4,	// (0x0005aa37) mp4_progress_pane_t_ParamLimits

0xeb11,	// (0x00068d64) mup_progress_pane_cp04_ParamLimits

0x693c,	// (0x00060b8f) main_myfav_hc_pane_t5_ParamLimits

0x693c,	// (0x00060b8f) main_myfav_hc_pane_t5

0x0fba,	// (0x0005b20d) aid_zoom_text_primary

0x112c,	// (0x0005b37f) popup_adpt_find_window_ParamLimits

0x442b,	// (0x0005e67e) main_cam_set_pane

0x6376,	// (0x000605c9) cam4_zoom_pane_ParamLimits

0x6376,	// (0x000605c9) cam4_zoom_pane

0x6a48,	// (0x00060c9b) main_cam_set_pane_g1_ParamLimits

0x6a48,	// (0x00060c9b) main_cam_set_pane_g1

0x6a56,	// (0x00060ca9) main_cam_set_pane_g2_ParamLimits

0x6a56,	// (0x00060ca9) main_cam_set_pane_g2

0x0001,

0xf63e,	// (0x00069891) main_cam_set_pane_g_ParamLimits

0xf63e,	// (0x00069891) main_cam_set_pane_g

0x6a62,	// (0x00060cb5) main_cam_set_pane_t1_ParamLimits

0x6a62,	// (0x00060cb5) main_cam_set_pane_t1

0x6a7e,	// (0x00060cd1) main_cset_listscroll_pane_ParamLimits

0x6a7e,	// (0x00060cd1) main_cset_listscroll_pane

0x6aa9,	// (0x00060cfc) main_cset_slider_pane_ParamLimits

0x6aa9,	// (0x00060cfc) main_cset_slider_pane

0xed46,	// (0x00068f99) main_cset_list_pane_ParamLimits

0xed46,	// (0x00068f99) main_cset_list_pane

0xed56,	// (0x00068fa9) scroll_pane_cp028

0x6ac8,	// (0x00060d1b) aid_area_touch_slider

0x6ae4,	// (0x00060d37) cset_slider_pane

0x6b0e,	// (0x00060d61) main_cset_slider_pane_g1

0x6b23,	// (0x00060d76) main_cset_slider_pane_g2

0x0011,

0xf643,	// (0x00069896) main_cset_slider_pane_g

0xed8f,	// (0x00068fe2) main_cset_slider_pane_t1

0x6be5,	// (0x00060e38) main_cset_slider_pane_t2

0x6bff,	// (0x00060e52) main_cset_slider_pane_t3

0x6c19,	// (0x00060e6c) main_cset_slider_pane_t4

0x6c33,	// (0x00060e86) main_cset_slider_pane_t5

0x6c51,	// (0x00060ea4) main_cset_slider_pane_t6

0x6c68,	// (0x00060ebb) main_cset_slider_pane_t7

0x000e,

0xf668,	// (0x000698bb) main_cset_slider_pane_t

0x6d74,	// (0x00060fc7) cset_list_set_pane_ParamLimits

0x6d74,	// (0x00060fc7) cset_list_set_pane

0x6d8a,	// (0x00060fdd) aid_position_infowindow_above

0x6d92,	// (0x00060fe5) aid_position_infowindow_below

0x9d23,	// (0x00063f76) cset_list_set_pane_g1_ParamLimits

0x9d23,	// (0x00063f76) cset_list_set_pane_g1

0x9d2f,	// (0x00063f82) cset_list_set_pane_g3_ParamLimits

0x9d2f,	// (0x00063f82) cset_list_set_pane_g3

0x0001,

0xf687,	// (0x000698da) cset_list_set_pane_g_ParamLimits

0xf687,	// (0x000698da) cset_list_set_pane_g

0x9d3e,	// (0x00063f91) cset_list_set_pane_t1_ParamLimits

0x9d3e,	// (0x00063f91) cset_list_set_pane_t1

0xbdd4,	// (0x00066027) list_highlight_pane_cp021_ParamLimits

0xbdd4,	// (0x00066027) list_highlight_pane_cp021

0xcb0d,	// (0x00066d60) cset_slider_pane_g1

0xcb1f,	// (0x00066d72) cset_slider_pane_g2

0xcb16,	// (0x00066d69) cset_slider_pane_g3

0x0002,

0x08f3,	// (0x0005ab46) cset_slider_pane_g

0x6d9a,	// (0x00060fed) aid_area_touch_cam4_zoom

0x6da2,	// (0x00060ff5) cam4_zoom_cont_pane

0x6daa,	// (0x00060ffd) cam4_zoom_pane_g1

0x6db2,	// (0x00061005) cam4_zoom_pane_g2

0x6dba,	// (0x0006100d) cam4_zoom_pane_g3

0x0002,

0xf68c,	// (0x000698df) cam4_zoom_pane_g

0x6dc2,	// (0x00061015) cam4_zoom_cont_pane_g1

0x6dcb,	// (0x0006101e) cam4_zoom_cont_pane_g2

0x6dd4,	// (0x00061027) cam4_zoom_cont_pane_g3

0x0002,

0xf693,	// (0x000698e6) cam4_zoom_cont_pane_g

0x6231,	// (0x00060484) call4_image_pane_ParamLimits

0x6231,	// (0x00060484) call4_image_pane

0xeb3b,	// (0x00068d8e) call4_windows_conf_pane_ParamLimits

0xeb78,	// (0x00068dcb) popup_call4_audio_in_window_ParamLimits

0xeb78,	// (0x00068dcb) popup_call4_audio_in_window

0xb130,	// (0x00065383) bg_popup_call2_act_pane_cp02

0xebc1,	// (0x00068e14) call4_list_conf_pane

0xe1e3,	// (0x00068436) call4_image_pane_g1

0xe1e3,	// (0x00068436) call4_image_pane_g2

0x0001,

0x0610,	// (0x0005a863) call4_image_pane_g

0xee4a,	// (0x0006909d) list_single_graphic_popup_conf4_pane_ParamLimits

0xee4a,	// (0x0006909d) list_single_graphic_popup_conf4_pane

0xb130,	// (0x00065383) list_highlight_pane_cp022

0xee5d,	// (0x000690b0) list_single_graphic_popup_conf4_pane_g1

0xc6de,	// (0x00066931) list_single_graphic_popup_conf4_pane_g2

0x0001,

0x0908,	// (0x0005ab5b) list_single_graphic_popup_conf4_pane_g

0xee65,	// (0x000690b8) list_single_graphic_popup_conf4_pane_t1

0x220f,	// (0x0005c462) popup_vtel_slider_window_ParamLimits

0x220f,	// (0x0005c462) popup_vtel_slider_window

0xeb1d,	// (0x00068d70) dialer2_ne_pane_t2_ParamLimits

0xeb1d,	// (0x00068d70) dialer2_ne_pane_t2

0x0001,

0xf5ae,	// (0x00069801) dialer2_ne_pane_t_ParamLimits

0xf5ae,	// (0x00069801) dialer2_ne_pane_t

0xbdd4,	// (0x00066027) bg_popup_sub_pane_cp010_ParamLimits

0xbdd4,	// (0x00066027) bg_popup_sub_pane_cp010

0x6ddd,	// (0x00061030) popup_vtel_slider_window_g1_ParamLimits

0x6ddd,	// (0x00061030) popup_vtel_slider_window_g1

0x6de9,	// (0x0006103c) popup_vtel_slider_window_g2_ParamLimits

0x6de9,	// (0x0006103c) popup_vtel_slider_window_g2

0x0003,

0xf69a,	// (0x000698ed) popup_vtel_slider_window_g_ParamLimits

0xf69a,	// (0x000698ed) popup_vtel_slider_window_g

0x6e31,	// (0x00061084) vtel_slider_pane_ParamLimits

0x6e31,	// (0x00061084) vtel_slider_pane

0x6e40,	// (0x00061093) vtel_slider_pane_g1_ParamLimits

0x6e40,	// (0x00061093) vtel_slider_pane_g1

0x6e4d,	// (0x000610a0) vtel_slider_pane_g2_ParamLimits

0x6e4d,	// (0x000610a0) vtel_slider_pane_g2

0x6e5a,	// (0x000610ad) vtel_slider_pane_g3_ParamLimits

0x6e5a,	// (0x000610ad) vtel_slider_pane_g3

0x6e40,	// (0x00061093) vtel_slider_pane_g4_ParamLimits

0x6e40,	// (0x00061093) vtel_slider_pane_g4

0x6e67,	// (0x000610ba) vtel_slider_pane_g5_ParamLimits

0x6e67,	// (0x000610ba) vtel_slider_pane_g5

0x0004,

0xf6a3,	// (0x000698f6) vtel_slider_pane_g_ParamLimits

0xf6a3,	// (0x000698f6) vtel_slider_pane_g

0x442b,	// (0x0005e67e) main_gallery2_pane

0x65d8,	// (0x0006082b) aid_size_row_itut2_dropdow_list_ParamLimits

0x65d8,	// (0x0006082b) aid_size_row_itut2_dropdow_list

0x6646,	// (0x00060899) grid_vitu2_function_top_pane_ParamLimits

0x6646,	// (0x00060899) grid_vitu2_function_top_pane

0x66a0,	// (0x000608f3) popup_vitu2_dropdown_list_window_ParamLimits

0x66a0,	// (0x000608f3) popup_vitu2_dropdown_list_window

0x66c0,	// (0x00060913) popup_vitu2_match_list_window

0x6e82,	// (0x000610d5) cell_vitu2_function_top_pane_ParamLimits

0x6e82,	// (0x000610d5) cell_vitu2_function_top_pane

0x6e9c,	// (0x000610ef) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6e9c,	// (0x000610ef) cell_vitu2_function_top_pane_cp01

0x6eb8,	// (0x0006110b) cell_vitu2_function_top_wide_pane_ParamLimits

0x6eb8,	// (0x0006110b) cell_vitu2_function_top_wide_pane

0x442b,	// (0x0005e67e) bg_button_pane_cp012

0x6ed4,	// (0x00061127) cell_vitu2_function_top_pane_g1

0x6ee8,	// (0x0006113b) bg_button_pane_cp013_ParamLimits

0x6ee8,	// (0x0006113b) bg_button_pane_cp013

0x6f04,	// (0x00061157) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6f04,	// (0x00061157) cell_vitu2_function_top_wide_pane_g1

0x1223,	// (0x0005b476) bg_popup_sub_pane_cp20

0x6f1c,	// (0x0006116f) list_vitu2_match_list_pane

0xec3c,	// (0x00068e8f) bg_popup_sub_pane_cp20_g1

0xec44,	// (0x00068e97) bg_popup_sub_pane_cp20_g2

0xc1c4,	// (0x00066417) bg_popup_sub_pane_cp20_g3

0xec4c,	// (0x00068e9f) bg_popup_sub_pane_cp20_g4

0xc1a4,	// (0x000663f7) bg_popup_sub_pane_cp20_g5

0xee7b,	// (0x000690ce) bg_popup_sub_pane_cp20_g6

0xec5c,	// (0x00068eaf) bg_popup_sub_pane_cp20_g7

0xec64,	// (0x00068eb7) bg_popup_sub_pane_cp20_g8

0xec6c,	// (0x00068ebf) bg_popup_sub_pane_cp20_g9

0x0008,

0x0921,	// (0x0005ab74) bg_popup_sub_pane_cp20_g

0x6f34,	// (0x00061187) list_vitu2_match_list_item_pane_ParamLimits

0x6f34,	// (0x00061187) list_vitu2_match_list_item_pane

0x6f46,	// (0x00061199) list_vitu2_match_list_item_pane_t1

0x123d,	// (0x0005b490) bg_popup_sub_pane_cp21

0x6f9c,	// (0x000611ef) grid_vitu2_dropdown_list_pane

0x6fa4,	// (0x000611f7) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6fa4,	// (0x000611f7) cell_vitu2_dropdown_list_char_pane

0x6fc5,	// (0x00061218) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6fc5,	// (0x00061218) cell_vitu2_dropdown_list_ctrl_pane

0xee95,	// (0x000690e8) cell_vitu2_dropdown_list_char_pane_g1

0xee8c,	// (0x000690df) cell_vitu2_dropdown_list_char_pane_g2

0xee83,	// (0x000690d6) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf6b8,	// (0x0006990b) cell_vitu2_dropdown_list_char_pane_g

0x6ff1,	// (0x00061244) cell_vitu2_dropdown_list_char_pane_t1

0x6fff,	// (0x00061252) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6fff,	// (0x00061252) cell_vitu2_dropdown_list_ctrl_pane_g1

0x700f,	// (0x00061262) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x700f,	// (0x00061262) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7020,	// (0x00061273) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7020,	// (0x00061273) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7030,	// (0x00061283) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7030,	// (0x00061283) cell_vitu2_dropdown_list_ctrl_pane_g4

0x640a,	// (0x0006065d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x640a,	// (0x0006065d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf6bf,	// (0x00069912) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf6bf,	// (0x00069912) cell_vitu2_dropdown_list_ctrl_pane_g

0x704c,	// (0x0006129f) aid_size_cell_gallery2_ParamLimits

0x704c,	// (0x0006129f) aid_size_cell_gallery2

0x7066,	// (0x000612b9) grid_gallery2_pane_ParamLimits

0x7066,	// (0x000612b9) grid_gallery2_pane

0x707d,	// (0x000612d0) scroll_pane_cp029_ParamLimits

0x707d,	// (0x000612d0) scroll_pane_cp029

0x708d,	// (0x000612e0) cell_gallery2_pane_ParamLimits

0x708d,	// (0x000612e0) cell_gallery2_pane

0xee9e,	// (0x000690f1) cell_gallery2_pane_g2

0xa3c9,	// (0x0006461c) cell_gallery2_pane_g3

0xeea6,	// (0x000690f9) cell_gallery2_pane_g4

0xeeae,	// (0x00069101) cell_gallery2_pane_g5

0xbf6b,	// (0x000661be) grid_highlight_pane_cp10

0x66c0,	// (0x00060913) popup_vitu2_match_list_window_ParamLimits

0x66d4,	// (0x00060927) popup_vitu2_query_window_ParamLimits

0x66d4,	// (0x00060927) popup_vitu2_query_window

0x123d,	// (0x0005b490) bg_vitu2_candi_button_pane

0xee95,	// (0x000690e8) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xee8c,	// (0x000690df) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xee83,	// (0x000690d6) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x70e2,	// (0x00061335) bg_button_pane_cp015

0x70f4,	// (0x00061347) bg_button_pane_cp016

0x7107,	// (0x0006135a) bg_button_pane_cp017

0xdddb,	// (0x0006802e) bg_popup_sub_pane_cp22

0xeeb6,	// (0x00069109) popup_vitu2_query_window_g1

0x714c,	// (0x0006139f) popup_vitu2_query_window_g2

0x0002,

0xf6ca,	// (0x0006991d) popup_vitu2_query_window_g

0x7169,	// (0x000613bc) popup_vitu2_query_window_t1_ParamLimits

0x7169,	// (0x000613bc) popup_vitu2_query_window_t1

0x719c,	// (0x000613ef) popup_vitu2_query_window_t2_ParamLimits

0x719c,	// (0x000613ef) popup_vitu2_query_window_t2

0x71ae,	// (0x00061401) popup_vitu2_query_window_t3_ParamLimits

0x71ae,	// (0x00061401) popup_vitu2_query_window_t3

0x71d6,	// (0x00061429) popup_vitu2_query_window_t4_ParamLimits

0x71d6,	// (0x00061429) popup_vitu2_query_window_t4

0x71f7,	// (0x0006144a) popup_vitu2_query_window_t5_ParamLimits

0x71f7,	// (0x0006144a) popup_vitu2_query_window_t5

0x0006,

0xf6d1,	// (0x00069924) popup_vitu2_query_window_t_ParamLimits

0xf6d1,	// (0x00069924) popup_vitu2_query_window_t

0xed3e,	// (0x00068f91) main_cset_text_pane

0x6ac8,	// (0x00060d1b) aid_area_touch_slider_ParamLimits

0x6ae4,	// (0x00060d37) cset_slider_pane_ParamLimits

0x6b0e,	// (0x00060d61) main_cset_slider_pane_g1_ParamLimits

0x6b23,	// (0x00060d76) main_cset_slider_pane_g2_ParamLimits

0xed5f,	// (0x00068fb2) main_cset_slider_pane_g3_ParamLimits

0xed5f,	// (0x00068fb2) main_cset_slider_pane_g3

0x6b38,	// (0x00060d8b) main_cset_slider_pane_g4_ParamLimits

0x6b38,	// (0x00060d8b) main_cset_slider_pane_g4

0x6b47,	// (0x00060d9a) main_cset_slider_pane_g5_ParamLimits

0x6b47,	// (0x00060d9a) main_cset_slider_pane_g5

0x6b55,	// (0x00060da8) main_cset_slider_pane_g6_ParamLimits

0x6b55,	// (0x00060da8) main_cset_slider_pane_g6

0xf643,	// (0x00069896) main_cset_slider_pane_g_ParamLimits

0xed8f,	// (0x00068fe2) main_cset_slider_pane_t1_ParamLimits

0x6be5,	// (0x00060e38) main_cset_slider_pane_t2_ParamLimits

0x6bff,	// (0x00060e52) main_cset_slider_pane_t3_ParamLimits

0x6c19,	// (0x00060e6c) main_cset_slider_pane_t4_ParamLimits

0x6c33,	// (0x00060e86) main_cset_slider_pane_t5_ParamLimits

0x6c51,	// (0x00060ea4) main_cset_slider_pane_t6_ParamLimits

0x6c68,	// (0x00060ebb) main_cset_slider_pane_t7_ParamLimits

0x6c96,	// (0x00060ee9) main_cset_slider_pane_t8_ParamLimits

0x6c96,	// (0x00060ee9) main_cset_slider_pane_t8

0x6cbe,	// (0x00060f11) main_cset_slider_pane_t9_ParamLimits

0x6cbe,	// (0x00060f11) main_cset_slider_pane_t9

0x6ce6,	// (0x00060f39) main_cset_slider_pane_t10_ParamLimits

0x6ce6,	// (0x00060f39) main_cset_slider_pane_t10

0x6d0e,	// (0x00060f61) main_cset_slider_pane_t11_ParamLimits

0x6d0e,	// (0x00060f61) main_cset_slider_pane_t11

0x6d38,	// (0x00060f8b) main_cset_slider_pane_t12_ParamLimits

0x6d38,	// (0x00060f8b) main_cset_slider_pane_t12

0x6d55,	// (0x00060fa8) main_cset_slider_pane_t13_ParamLimits

0x6d55,	// (0x00060fa8) main_cset_slider_pane_t13

0xf668,	// (0x000698bb) main_cset_slider_pane_t_ParamLimits

0xb130,	// (0x00065383) bg_popup_sub_pane_cp011

0xeec2,	// (0x00069115) main_cset_text_pane_g1

0xeeca,	// (0x0006911d) main_cset_text_pane_t1

0xeed8,	// (0x0006912b) main_cset_text_pane_t2

0xeee6,	// (0x00069139) main_cset_text_pane_t3

0xeef4,	// (0x00069147) main_cset_text_pane_t4

0xef02,	// (0x00069155) main_cset_text_pane_t5

0xef10,	// (0x00069163) main_cset_text_pane_t6

0xef1e,	// (0x00069171) main_cset_text_pane_t7

0x0006,

0x0966,	// (0x0005abb9) main_cset_text_pane_t

0x123d,	// (0x0005b490) main_cam4_burst_pane

0x123d,	// (0x0005b490) main_cam5_pane

0x6a17,	// (0x00060c6a) bg_button_pane_cp019

0x6a20,	// (0x00060c73) bg_button_pane_cp020

0xed6b,	// (0x00068fbe) main_cset_slider_pane_g7_ParamLimits

0xed6b,	// (0x00068fbe) main_cset_slider_pane_g7

0xed77,	// (0x00068fca) main_cset_slider_pane_g8_ParamLimits

0xed77,	// (0x00068fca) main_cset_slider_pane_g8

0x6b69,	// (0x00060dbc) main_cset_slider_pane_g9_ParamLimits

0x6b69,	// (0x00060dbc) main_cset_slider_pane_g9

0x6b75,	// (0x00060dc8) main_cset_slider_pane_g10_ParamLimits

0x6b75,	// (0x00060dc8) main_cset_slider_pane_g10

0x6b81,	// (0x00060dd4) main_cset_slider_pane_g11_ParamLimits

0x6b81,	// (0x00060dd4) main_cset_slider_pane_g11

0x6b8d,	// (0x00060de0) main_cset_slider_pane_g12_ParamLimits

0x6b8d,	// (0x00060de0) main_cset_slider_pane_g12

0x6b99,	// (0x00060dec) main_cset_slider_pane_g13_ParamLimits

0x6b99,	// (0x00060dec) main_cset_slider_pane_g13

0x6ba5,	// (0x00060df8) main_cset_slider_pane_g14_ParamLimits

0x6ba5,	// (0x00060df8) main_cset_slider_pane_g14

0x6bb1,	// (0x00060e04) main_cset_slider_pane_g15_ParamLimits

0x6bb1,	// (0x00060e04) main_cset_slider_pane_g15

0xedbd,	// (0x00069010) main_cset_slider_pane_t14_ParamLimits

0xedbd,	// (0x00069010) main_cset_slider_pane_t14

0xedf6,	// (0x00069049) main_cset_slider_pane_t15_ParamLimits

0xedf6,	// (0x00069049) main_cset_slider_pane_t15

0x726e,	// (0x000614c1) aid_cam4_burst_size_cell_ParamLimits

0x726e,	// (0x000614c1) aid_cam4_burst_size_cell

0x728a,	// (0x000614dd) grid_cam4_burst_pane_ParamLimits

0x728a,	// (0x000614dd) grid_cam4_burst_pane

0x72ba,	// (0x0006150d) linegrid_cam4_burst_pane_ParamLimits

0x72ba,	// (0x0006150d) linegrid_cam4_burst_pane

0x72da,	// (0x0006152d) scroll_pane_cp30_ParamLimits

0x72da,	// (0x0006152d) scroll_pane_cp30

0x72e6,	// (0x00061539) cell_cam4_burst_pane_ParamLimits

0x72e6,	// (0x00061539) cell_cam4_burst_pane

0xef38,	// (0x0006918b) linegrid_cam4_burst_pane_g1_ParamLimits

0xef38,	// (0x0006918b) linegrid_cam4_burst_pane_g1

0x7322,	// (0x00061575) linegrid_cam4_burst_pane_g2_ParamLimits

0x7322,	// (0x00061575) linegrid_cam4_burst_pane_g2

0xef45,	// (0x00069198) linegrid_cam4_burst_pane_g3_ParamLimits

0xef45,	// (0x00069198) linegrid_cam4_burst_pane_g3

0x0002,

0xf6e0,	// (0x00069933) linegrid_cam4_burst_pane_g_ParamLimits

0xf6e0,	// (0x00069933) linegrid_cam4_burst_pane_g

0x7333,	// (0x00061586) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7333,	// (0x00061586) linegrid_cam4_burst_pane_g3_copy1

0xef52,	// (0x000691a5) linegrid_cam4_burst_pane_g4_ParamLimits

0xef52,	// (0x000691a5) linegrid_cam4_burst_pane_g4

0x734d,	// (0x000615a0) linegrid_cam4_burst_pane_g5_ParamLimits

0x734d,	// (0x000615a0) linegrid_cam4_burst_pane_g5

0x735e,	// (0x000615b1) linegrid_cam4_burst_pane_g6_ParamLimits

0x735e,	// (0x000615b1) linegrid_cam4_burst_pane_g6

0xef5f,	// (0x000691b2) linegrid_cam4_burst_pane_g7_ParamLimits

0xef5f,	// (0x000691b2) linegrid_cam4_burst_pane_g7

0x736f,	// (0x000615c2) cell_cam4_burst_pane_g1

0xef78,	// (0x000691cb) main_cam5_pane_t1_ParamLimits

0xef78,	// (0x000691cb) main_cam5_pane_t1

0xef8a,	// (0x000691dd) main_cam5_pane_t2_ParamLimits

0xef8a,	// (0x000691dd) main_cam5_pane_t2

0xef9c,	// (0x000691ef) main_cam5_pane_t3_ParamLimits

0xef9c,	// (0x000691ef) main_cam5_pane_t3

0xefae,	// (0x00069201) main_cam5_pane_t4_ParamLimits

0xefae,	// (0x00069201) main_cam5_pane_t4

0xefc6,	// (0x00069219) main_cam5_pane_t5_ParamLimits

0xefc6,	// (0x00069219) main_cam5_pane_t5

0xefda,	// (0x0006922d) main_cam5_pane_t6_ParamLimits

0xefda,	// (0x0006922d) main_cam5_pane_t6

0xefee,	// (0x00069241) main_cam5_pane_t7_ParamLimits

0xefee,	// (0x00069241) main_cam5_pane_t7

0xf000,	// (0x00069253) main_cam5_pane_t8_ParamLimits

0xf000,	// (0x00069253) main_cam5_pane_t8

0xf01c,	// (0x0006926f) main_cam5_pane_t9_ParamLimits

0xf01c,	// (0x0006926f) main_cam5_pane_t9

0xf02e,	// (0x00069281) main_cam5_pane_t10_ParamLimits

0xf02e,	// (0x00069281) main_cam5_pane_t10

0xf040,	// (0x00069293) main_cam5_pane_t11_ParamLimits

0xf040,	// (0x00069293) main_cam5_pane_t11

0xf052,	// (0x000692a5) main_cam5_pane_t12_ParamLimits

0xf052,	// (0x000692a5) main_cam5_pane_t12

0xf067,	// (0x000692ba) main_cam5_pane_t13_ParamLimits

0xf067,	// (0x000692ba) main_cam5_pane_t13

0x000c,

0x0981,	// (0x0005abd4) main_cam5_pane_t_ParamLimits

0x0981,	// (0x0005abd4) main_cam5_pane_t

0x11e2,	// (0x0005b435) popup_scut_keymap_window_ParamLimits

0x11e2,	// (0x0005b435) popup_scut_keymap_window

0x7382,	// (0x000615d5) aid_size_cell_brow_shortcut

0xbf6b,	// (0x000661be) bg_popup_window_pane_cp010

0x738e,	// (0x000615e1) grid_scut_pane

0x739a,	// (0x000615ed) cell_scut_pane_ParamLimits

0x739a,	// (0x000615ed) cell_scut_pane

0x73b1,	// (0x00061604) cell_scut_pane_g1

0xf0a0,	// (0x000692f3) cell_scut_pane_t1

0xf0af,	// (0x00069302) cell_scut_pane_t2

0x73ba,	// (0x0006160d) cell_scut_pane_t3

0x0002,

0xf6ec,	// (0x0006993f) cell_scut_pane_t

0x5192,	// (0x0005f3e5) main_mup3_pane_g8_ParamLimits

0x5192,	// (0x0005f3e5) main_mup3_pane_g8

0x65e6,	// (0x00060839) area_vitu2_query_pane_ParamLimits

0x65e6,	// (0x00060839) area_vitu2_query_pane

0x711a,	// (0x0006136d) input_focus_pane_cp08

0xf0be,	// (0x00069311) area_vitu2_query_pane_g1

0x73c8,	// (0x0006161b) area_vitu2_query_pane_g2

0x0001,

0xf6f3,	// (0x00069946) area_vitu2_query_pane_g

0x73d9,	// (0x0006162c) area_vitu2_query_pane_t1_ParamLimits

0x73d9,	// (0x0006162c) area_vitu2_query_pane_t1

0x73ed,	// (0x00061640) area_vitu2_query_pane_t2_ParamLimits

0x73ed,	// (0x00061640) area_vitu2_query_pane_t2

0x7401,	// (0x00061654) area_vitu2_query_pane_t3_ParamLimits

0x7401,	// (0x00061654) area_vitu2_query_pane_t3

0x9d53,	// (0x00063fa6) area_vitu2_query_pane_t4_ParamLimits

0x9d53,	// (0x00063fa6) area_vitu2_query_pane_t4

0x9d7b,	// (0x00063fce) area_vitu2_query_pane_t5_ParamLimits

0x9d7b,	// (0x00063fce) area_vitu2_query_pane_t5

0x9da3,	// (0x00063ff6) area_vitu2_query_pane_t6_ParamLimits

0x9da3,	// (0x00063ff6) area_vitu2_query_pane_t6

0x0006,

0xf6f8,	// (0x0006994b) area_vitu2_query_pane_t_ParamLimits

0xf6f8,	// (0x0006994b) area_vitu2_query_pane_t

0x7429,	// (0x0006167c) bg_button_pane_cp018

0x7437,	// (0x0006168a) bg_button_pane_cp021

0x7443,	// (0x00061696) bg_button_pane_cp022

0x7454,	// (0x000616a7) input_focus_pane_cp09

0xc81a,	// (0x00066a6d) aid_size_touch_mv_arrow_left

0xc843,	// (0x00066a96) aid_size_touch_mv_arrow_right

0x6bc9,	// (0x00060e1c) main_cset_slider_pane_g16_ParamLimits

0x6bc9,	// (0x00060e1c) main_cset_slider_pane_g16

0x6bd7,	// (0x00060e2a) main_cset_slider_pane_g17_ParamLimits

0x6bd7,	// (0x00060e2a) main_cset_slider_pane_g17

0x736f,	// (0x000615c2) cell_cam4_burst_pane_g1_ParamLimits

0xb130,	// (0x00065383) compa_mode_pane

0x6df5,	// (0x00061048) popup_vtel_slider_window_g3_ParamLimits

0x6df5,	// (0x00061048) popup_vtel_slider_window_g3

0x6e09,	// (0x0006105c) popup_vtel_slider_window_g4_ParamLimits

0x6e09,	// (0x0006105c) popup_vtel_slider_window_g4

0x6e1d,	// (0x00061070) popup_vtel_slider_window_t1_ParamLimits

0x6e1d,	// (0x00061070) popup_vtel_slider_window_t1

0x123d,	// (0x0005b490) main_cl_pane

0x44c9,	// (0x0005e71c) popup_imed_adjust2_window_ParamLimits

0xdddb,	// (0x0006802e) bg_tb_trans_pane_cp05_ParamLimits

0xe732,	// (0x00068985) popup_imed_adjust2_window_g1_ParamLimits

0xe741,	// (0x00068994) popup_imed_adjust2_window_g2_ParamLimits

0xe741,	// (0x00068994) popup_imed_adjust2_window_g2

0xe74d,	// (0x000689a0) popup_imed_adjust2_window_g3_ParamLimits

0xe74d,	// (0x000689a0) popup_imed_adjust2_window_g3

0x0002,

0x0713,	// (0x0005a966) popup_imed_adjust2_window_g_ParamLimits

0x0713,	// (0x0005a966) popup_imed_adjust2_window_g

0xe759,	// (0x000689ac) popup_imed_adjust2_window_t1_ParamLimits

0xe771,	// (0x000689c4) slider_imed_adjust_pane_ParamLimits

0xe785,	// (0x000689d8) slider_imed_adjust_pane_g1_ParamLimits

0xe795,	// (0x000689e8) slider_imed_adjust_pane_g2_ParamLimits

0xe7a5,	// (0x000689f8) slider_imed_adjust_pane_g3_ParamLimits

0xe7b6,	// (0x00068a09) slider_imed_adjust_pane_g4_ParamLimits

0x071a,	// (0x0005a96d) slider_imed_adjust_pane_g_ParamLimits

0x631f,	// (0x00060572) aid_touch_area_cam4_ParamLimits

0x631f,	// (0x00060572) aid_touch_area_cam4

0x632f,	// (0x00060582) battery_pane_cp01

0x63b6,	// (0x00060609) main_camera4_pane_g6_ParamLimits

0x63b6,	// (0x00060609) main_camera4_pane_g6

0x63d4,	// (0x00060627) main_camera4_pane_t2_ParamLimits

0x63d4,	// (0x00060627) main_camera4_pane_t2

0x0001,

0xf5e2,	// (0x00069835) main_camera4_pane_t_ParamLimits

0xf5e2,	// (0x00069835) main_camera4_pane_t

0x6469,	// (0x000606bc) aid_touch_area_vid4_ParamLimits

0x6469,	// (0x000606bc) aid_touch_area_vid4

0x64a9,	// (0x000606fc) main_video4_pane_g5_ParamLimits

0x64a9,	// (0x000606fc) main_video4_pane_g5

0x64cd,	// (0x00060720) vid4_progress_pane_ParamLimits

0x64cd,	// (0x00060720) vid4_progress_pane

0xed83,	// (0x00068fd6) main_cset_slider_pane_g18_ParamLimits

0xed83,	// (0x00068fd6) main_cset_slider_pane_g18

0xef6c,	// (0x000691bf) cell_cam4_burst_pane_g2_ParamLimits

0xef6c,	// (0x000691bf) cell_cam4_burst_pane_g2

0x0001,

0xf6e7,	// (0x0006993a) cell_cam4_burst_pane_g_ParamLimits

0xf6e7,	// (0x0006993a) cell_cam4_burst_pane_g

0x7465,	// (0x000616b8) bg_cl_pane_ParamLimits

0x7465,	// (0x000616b8) bg_cl_pane

0x7471,	// (0x000616c4) cl_header_pane_ParamLimits

0x7471,	// (0x000616c4) cl_header_pane

0x747d,	// (0x000616d0) cl_listscroll_pane_ParamLimits

0x747d,	// (0x000616d0) cl_listscroll_pane

0x9def,	// (0x00064042) bg_cl_pane_g1

0x9df7,	// (0x0006404a) bg_cl_pane_g2

0x9dff,	// (0x00064052) bg_cl_pane_g3

0x9e07,	// (0x0006405a) bg_cl_pane_g4

0x9e0f,	// (0x00064062) bg_cl_pane_g5

0x9e17,	// (0x0006406a) bg_cl_pane_g6

0x9e1f,	// (0x00064072) bg_cl_pane_g7

0x9e27,	// (0x0006407a) bg_cl_pane_g8

0x9e2f,	// (0x00064082) bg_cl_pane_g9

0x0008,

0xf707,	// (0x0006995a) bg_cl_pane_g

0x7489,	// (0x000616dc) aid_height_cl_leading_ParamLimits

0x7489,	// (0x000616dc) aid_height_cl_leading

0x7495,	// (0x000616e8) aid_height_cl_text_ParamLimits

0x7495,	// (0x000616e8) aid_height_cl_text

0xf092,	// (0x000692e5) bg_cl_header_pane_ParamLimits

0xf092,	// (0x000692e5) bg_cl_header_pane

0x74ad,	// (0x00061700) cl_header_pane_g1_ParamLimits

0x74ad,	// (0x00061700) cl_header_pane_g1

0x74ba,	// (0x0006170d) cl_header_pane_t1_ParamLimits

0x74ba,	// (0x0006170d) cl_header_pane_t1

0x9e37,	// (0x0006408a) cl_list_pane

0xed56,	// (0x00068fa9) hc_scroll_pane_cp01

0xc1a4,	// (0x000663f7) bg_cl_header_pane_g1

0xec3c,	// (0x00068e8f) bg_cl_header_pane_g2

0xc1c4,	// (0x00066417) bg_cl_header_pane_g3

0xec4c,	// (0x00068e9f) bg_cl_header_pane_g4

0xec44,	// (0x00068e97) bg_cl_header_pane_g5

0xee7b,	// (0x000690ce) bg_cl_header_pane_g6

0xec64,	// (0x00068eb7) bg_cl_header_pane_g7

0xec6c,	// (0x00068ebf) bg_cl_header_pane_g8

0xec5c,	// (0x00068eaf) bg_cl_header_pane_g9

0x0008,

0x09ca,	// (0x0005ac1d) bg_cl_header_pane_g

0x74cc,	// (0x0006171f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x74cc,	// (0x0006171f) hc_cl_list_double_graphic_heading_pane

0x74dd,	// (0x00061730) hc_cl_list_single_graphic_pane_ParamLimits

0x74dd,	// (0x00061730) hc_cl_list_single_graphic_pane

0x74f6,	// (0x00061749) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x74f6,	// (0x00061749) hc_cl_list_single_graphic_pane_g1

0x7502,	// (0x00061755) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7502,	// (0x00061755) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf71a,	// (0x0006996d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf71a,	// (0x0006996d) hc_cl_list_single_graphic_pane_g

0x7516,	// (0x00061769) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7516,	// (0x00061769) hc_cl_list_single_graphic_pane_t1

0x74f6,	// (0x00061749) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x74f6,	// (0x00061749) hc_cl_list_double_graphic_heading_pane_g1

0x752b,	// (0x0006177e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x752b,	// (0x0006177e) hc_cl_list_double_graphic_heading_pane_g2

0x753f,	// (0x00061792) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x753f,	// (0x00061792) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf71f,	// (0x00069972) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf71f,	// (0x00069972) hc_cl_list_double_graphic_heading_pane_g

0x7553,	// (0x000617a6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7553,	// (0x000617a6) hc_cl_list_double_graphic_heading_pane_t1

0x7568,	// (0x000617bb) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7568,	// (0x000617bb) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf726,	// (0x00069979) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf726,	// (0x00069979) hc_cl_list_double_graphic_heading_pane_t

0x7585,	// (0x000617d8) vid4_progress_pane_g1

0x7595,	// (0x000617e8) vid4_progress_pane_g2

0x75a5,	// (0x000617f8) vid4_progress_pane_g3

0x75b7,	// (0x0006180a) vid4_progress_pane_g4

0x0004,

0xf72b,	// (0x0006997e) vid4_progress_pane_g

0x75cf,	// (0x00061822) vid4_progress_pane_t1

0x75e5,	// (0x00061838) vid4_progress_pane_t2

0x0002,

0xf736,	// (0x00069989) vid4_progress_pane_t

0x760f,	// (0x00061862) wait_bar_pane_cp07

0xdfd6,	// (0x00068229) blid_firmament_pane_ParamLimits

0xe019,	// (0x0006826c) popup_blid_sat_info2_window_g1

0xe03d,	// (0x00068290) popup_blid_sat_info2_window_t3

0xe04b,	// (0x0006829e) popup_blid_sat_info2_window_t4

0xe059,	// (0x000682ac) popup_blid_sat_info2_window_t5

0xe067,	// (0x000682ba) popup_blid_sat_info2_window_t6

0xe077,	// (0x000682ca) popup_blid_sat_info2_window_t7

0xe085,	// (0x000682d8) popup_blid_sat_info2_window_t8

0xe093,	// (0x000682e6) popup_blid_sat_info2_window_t9

0xe0a1,	// (0x000682f4) popup_blid_sat_info2_window_t10

0xe163,	// (0x000683b6) aid_firma_cardinal_ParamLimits

0xe177,	// (0x000683ca) blid_firmament_pane_t1_ParamLimits

0xe18e,	// (0x000683e1) blid_firmament_pane_t2_ParamLimits

0xe1a5,	// (0x000683f8) blid_firmament_pane_t3_ParamLimits

0xe1bc,	// (0x0006840f) blid_firmament_pane_t4_ParamLimits

0x0607,	// (0x0005a85a) blid_firmament_pane_t_ParamLimits

0xe1d3,	// (0x00068426) blid_sat_info_pane_ParamLimits

0x442b,	// (0x0005e67e) main_cam_set_pane_ParamLimits

0x594b,	// (0x0005fb9e) aid_size_cell_colour_35_ParamLimits

0x5965,	// (0x0005fbb8) aid_size_cell_colour_112_ParamLimits

0x597c,	// (0x0005fbcf) aid_size_cell_effect_ParamLimits

0xbdd4,	// (0x00066027) bg_tb_trans_pane_cp02_ParamLimits

0xc4b3,	// (0x00066706) heading_imed_pane_ParamLimits

0x5996,	// (0x0005fbe9) listscroll_imed_pane_ParamLimits

0xd3f5,	// (0x00067648) popup_call2_audio_first_window_g5_ParamLimits

0xd3f5,	// (0x00067648) popup_call2_audio_first_window_g5

0x609c,	// (0x000602ef) aid_size_touch_image3_arrow_left_ParamLimits

0x609c,	// (0x000602ef) aid_size_touch_image3_arrow_left

0x60b2,	// (0x00060305) aid_size_touch_image3_arrow_right_ParamLimits

0x60b2,	// (0x00060305) aid_size_touch_image3_arrow_right

0x75fa,	// (0x0006184d) vid4_progress_pane_t3

0x5c34,	// (0x0005fe87) main_hwr_training_symbol_option_pane_ParamLimits

0x5c34,	// (0x0005fe87) main_hwr_training_symbol_option_pane

0xea1f,	// (0x00068c72) popup_hwr_training_preview_window_ParamLimits

0xea1f,	// (0x00068c72) popup_hwr_training_preview_window

0x5c95,	// (0x0005fee8) hwr_training_navi_pane_g5_ParamLimits

0x5c95,	// (0x0005fee8) hwr_training_navi_pane_g5

0xec2a,	// (0x00068e7d) popup_char_count_window

0x1223,	// (0x0005b476) bg_popup_sub_pane_cp20_ParamLimits

0x6f1c,	// (0x0006116f) list_vitu2_match_list_pane_ParamLimits

0x6f28,	// (0x0006117b) vitu2_page_scroll_pane_ParamLimits

0x6f28,	// (0x0006117b) vitu2_page_scroll_pane

0x9f51,	// (0x000641a4) list_single_hwr_training_symbol_option_pane_ParamLimits

0x9f51,	// (0x000641a4) list_single_hwr_training_symbol_option_pane

0x9f64,	// (0x000641b7) list_single_hwr_training_symbol_option_pane_g1

0x9f6c,	// (0x000641bf) list_single_hwr_training_symbol_option_pane_t1

0x9f7a,	// (0x000641cd) bg_button_pane_cp023

0x9f83,	// (0x000641d6) bg_button_pane_cp024

0x765a,	// (0x000618ad) vitu2_page_scroll_pane_g1

0x7662,	// (0x000618b5) vitu2_page_scroll_pane_g2

0x0001,

0xf73d,	// (0x00069990) vitu2_page_scroll_pane_g

0x766a,	// (0x000618bd) vitu2_page_scroll_pane_t1

0xdf36,	// (0x00068189) popup_char_count_window_g1

0x9fb6,	// (0x00064209) popup_char_count_window_g2

0x9fbf,	// (0x00064212) popup_char_count_window_g3

0x0002,

0xf742,	// (0x00069995) popup_char_count_window_g

0x9fc8,	// (0x0006421b) popup_char_count_window_t1

0x123d,	// (0x0005b490) main_vded2_pane

0xe71e,	// (0x00068971) aid_size_cell_imed_line

0xe728,	// (0x0006897b) grid_imed_line_width_pane

0x653b,	// (0x0006078e) vid4_indicators_pane_g4

0x9fd6,	// (0x00064229) cell_imed_line_width_pane_ParamLimits

0x9fd6,	// (0x00064229) cell_imed_line_width_pane

0x9ff2,	// (0x00064245) cell_imed_line_width_pane_g1

0x9fea,	// (0x0006423d) cell_imed_line_width_pane_g2

0x0001,

0xf749,	// (0x0006999c) cell_imed_line_width_pane_g

0x7679,	// (0x000618cc) main_vded2_pane_g1_ParamLimits

0x7679,	// (0x000618cc) main_vded2_pane_g1

0x7686,	// (0x000618d9) main_vded2_pane_g2_ParamLimits

0x7686,	// (0x000618d9) main_vded2_pane_g2

0x0001,

0xf74e,	// (0x000699a1) main_vded2_pane_g_ParamLimits

0xf74e,	// (0x000699a1) main_vded2_pane_g

0x7694,	// (0x000618e7) vded2_slider_pane_ParamLimits

0x7694,	// (0x000618e7) vded2_slider_pane

0x76a1,	// (0x000618f4) aid_size_touch_vded2_end

0x76ab,	// (0x000618fe) aid_size_touch_vded2_playhead

0x9ffb,	// (0x0006424e) aid_size_touch_vded2_start

0xa003,	// (0x00064256) vded2_slider_bg_pane

0xa00c,	// (0x0006425f) vded2_slider_pane_g1

0xa015,	// (0x00064268) vded2_slider_pane_g2

0x76b3,	// (0x00061906) vded2_slider_pane_g3

0x0002,

0xf753,	// (0x000699a6) vded2_slider_pane_g

0xa01d,	// (0x00064270) vded2_slider_bg_pane_g1

0xa026,	// (0x00064279) vded2_slider_bg_pane_g2

0xa02f,	// (0x00064282) vded2_slider_bg_pane_g3

0x0002,

0xf75a,	// (0x000699ad) vded2_slider_bg_pane_g

0x3d13,	// (0x0005df66) aid_postcard_touch_down_pane_ParamLimits

0x3d13,	// (0x0005df66) aid_postcard_touch_down_pane

0x3d23,	// (0x0005df76) aid_postcard_touch_up_pane_ParamLimits

0x3d23,	// (0x0005df76) aid_postcard_touch_up_pane

0x123d,	// (0x0005b490) main_blid2_pane

0x4454,	// (0x0005e6a7) popup_blid2_search_window

0xb130,	// (0x00065383) blid2_gps_pane

0xb130,	// (0x00065383) blid2_navig_pane

0xb130,	// (0x00065383) blid2_search_pane

0xb130,	// (0x00065383) blid2_tripm_pane

0x76bc,	// (0x0006190f) blid2_search_pane_g1_ParamLimits

0x76bc,	// (0x0006190f) blid2_search_pane_g1

0x76cc,	// (0x0006191f) blid2_search_pane_t1_ParamLimits

0x76cc,	// (0x0006191f) blid2_search_pane_t1

0x76de,	// (0x00061931) aid_size_cell_blid2_gps_ParamLimits

0x76de,	// (0x00061931) aid_size_cell_blid2_gps

0x76ee,	// (0x00061941) blid2_gps_pane_g1_ParamLimits

0x76ee,	// (0x00061941) blid2_gps_pane_g1

0x76fa,	// (0x0006194d) grid_blid2_satellite_pane_ParamLimits

0x76fa,	// (0x0006194d) grid_blid2_satellite_pane

0x770a,	// (0x0006195d) blid2_navig_pane_g1_ParamLimits

0x770a,	// (0x0006195d) blid2_navig_pane_g1

0x7716,	// (0x00061969) blid2_navig_pane_t1_ParamLimits

0x7716,	// (0x00061969) blid2_navig_pane_t1

0x7728,	// (0x0006197b) blid2_navig_pane_t2_ParamLimits

0x7728,	// (0x0006197b) blid2_navig_pane_t2

0x0001,

0xf761,	// (0x000699b4) blid2_navig_pane_t_ParamLimits

0xf761,	// (0x000699b4) blid2_navig_pane_t

0x773a,	// (0x0006198d) blid2_navig_ring_pane_ParamLimits

0x773a,	// (0x0006198d) blid2_navig_ring_pane

0x774a,	// (0x0006199d) blid2_speed_pane_ParamLimits

0x774a,	// (0x0006199d) blid2_speed_pane

0x7756,	// (0x000619a9) blid2_tripm_pane_g1_ParamLimits

0x7756,	// (0x000619a9) blid2_tripm_pane_g1

0x7766,	// (0x000619b9) blid2_tripm_pane_g2_ParamLimits

0x7766,	// (0x000619b9) blid2_tripm_pane_g2

0x7772,	// (0x000619c5) blid2_tripm_pane_g3_ParamLimits

0x7772,	// (0x000619c5) blid2_tripm_pane_g3

0x777e,	// (0x000619d1) blid2_tripm_pane_g4_ParamLimits

0x777e,	// (0x000619d1) blid2_tripm_pane_g4

0x778a,	// (0x000619dd) blid2_tripm_pane_g5_ParamLimits

0x778a,	// (0x000619dd) blid2_tripm_pane_g5

0x0005,

0xf766,	// (0x000699b9) blid2_tripm_pane_g_ParamLimits

0xf766,	// (0x000699b9) blid2_tripm_pane_g

0x77a6,	// (0x000619f9) blid2_tripm_pane_t1_ParamLimits

0x77a6,	// (0x000619f9) blid2_tripm_pane_t1

0x77ba,	// (0x00061a0d) blid2_tripm_pane_t2_ParamLimits

0x77ba,	// (0x00061a0d) blid2_tripm_pane_t2

0x77cc,	// (0x00061a1f) blid2_tripm_pane_t3_ParamLimits

0x77cc,	// (0x00061a1f) blid2_tripm_pane_t3

0x0003,

0xf773,	// (0x000699c6) blid2_tripm_pane_t_ParamLimits

0xf773,	// (0x000699c6) blid2_tripm_pane_t

0x77fe,	// (0x00061a51) cell_blid2_satellite_pane_ParamLimits

0x77fe,	// (0x00061a51) cell_blid2_satellite_pane

0x7818,	// (0x00061a6b) cell_blid2_satellite_pane_g1

0xa038,	// (0x0006428b) cell_blid2_satellite_pane_t1

0xe1e3,	// (0x00068436) blid2_speed_pane_g1

0xa046,	// (0x00064299) blid2_speed_pane_t1

0xa054,	// (0x000642a7) blid2_speed_pane_t2

0x0001,

0xf77c,	// (0x000699cf) blid2_speed_pane_t

0xe1e3,	// (0x00068436) blid2_navig_ring_pane_g1

0x7821,	// (0x00061a74) blid2_navig_ring_pane_g2

0x7829,	// (0x00061a7c) blid2_navig_ring_pane_g3

0x7831,	// (0x00061a84) blid2_navig_ring_pane_g4

0x7839,	// (0x00061a8c) blid2_navig_ring_pane_g5

0x0004,

0xf781,	// (0x000699d4) blid2_navig_ring_pane_g

0xb130,	// (0x00065383) bg_popup_window_pane_cp011

0xa062,	// (0x000642b5) popup_blid2_search_window_g1

0xa06a,	// (0x000642bd) popup_blid2_search_window_t1

0xa078,	// (0x000642cb) popup_blid2_search_window_t2

0x0001,

0xf78c,	// (0x000699df) popup_blid2_search_window_t

0xc0b3,	// (0x00066306) main_browser_pane_g1

0xb86d,	// (0x00065ac0) main_browser_pane_ParamLimits

0x442b,	// (0x0005e67e) bg_button_pane_cp011_ParamLimits

0x67ea,	// (0x00060a3d) cell_vitu2_function_pane_g1_ParamLimits

0xdddb,	// (0x0006802e) bg_popup_sub_pane_cp22_ParamLimits

0x711a,	// (0x0006136d) input_focus_pane_cp08_ParamLimits

0x7131,	// (0x00061384) popup_vitu2_query_button_pane_ParamLimits

0x7131,	// (0x00061384) popup_vitu2_query_button_pane

0x7142,	// (0x00061395) popup_vitu2_query_input_button_pane

0xeeb6,	// (0x00069109) popup_vitu2_query_window_g1_ParamLimits

0x714c,	// (0x0006139f) popup_vitu2_query_window_g2_ParamLimits

0xf6ca,	// (0x0006991d) popup_vitu2_query_window_g_ParamLimits

0xb130,	// (0x00065383) bg_button_pane_cp026

0x7841,	// (0x00061a94) popup_vitu2_query_input_button_pane_g1

0xb130,	// (0x00065383) bg_button_pane_cp025

0xa090,	// (0x000642e3) popup_vitu2_query_button_pane_t1

0x4eaa,	// (0x0005f0fd) main_mp3_pane_t6

0x4eba,	// (0x0005f10d) popup_slider_window_cp01

0x6418,	// (0x0006066b) cam4_battery_pane

0x64f8,	// (0x0006074b) cam4_battery_pane_cp02

0x757d,	// (0x000617d0) cam4_battery_pane_cp01

0x757d,	// (0x000617d0) cam4_battery_pane_cp03

0xa086,	// (0x000642d9) cam4_battery_pane_g1

0xe1e3,	// (0x00068436) cam4_battery_pane_g2

0x0001,

0xf791,	// (0x000699e4) cam4_battery_pane_g

0xe0af,	// (0x00068302) popup_blid_sat_info2_window_t11

0xc81a,	// (0x00066a6d) aid_size_touch_mv_arrow_left_ParamLimits

0xc843,	// (0x00066a96) aid_size_touch_mv_arrow_right_ParamLimits

0xc8a1,	// (0x00066af4) navi_pane_g1_ParamLimits

0xc8ad,	// (0x00066b00) navi_pane_g2_ParamLimits

0xc8db,	// (0x00066b2e) navi_pane_g3_ParamLimits

0x0319,	// (0x0005a56c) navi_pane_g_ParamLimits

0x36d9,	// (0x0005d92c) navi_pane_mv_t1_ParamLimits

0x59a2,	// (0x0005fbf5) grid_imed_effect_pane_ParamLimits

0x20cf,	// (0x0005c322) aid_placing_vt_slider_lsc

0xc002,	// (0x00066255) aid_placing_vt_slider_prt

0xbdd4,	// (0x00066027) bg_tb_trans_pane_cp01_ParamLimits

0xe36f,	// (0x000685c2) popup_image_details_window_g1_ParamLimits

0xe382,	// (0x000685d5) popup_image_details_window_g2_ParamLimits

0xe397,	// (0x000685ea) popup_image_details_window_g3_ParamLimits

0xe397,	// (0x000685ea) popup_image_details_window_g3

0x064c,	// (0x0005a89f) popup_image_details_window_g_ParamLimits

0xe3ab,	// (0x000685fe) popup_image_details_window_t1_ParamLimits

0xe3bd,	// (0x00068610) popup_image_details_window_t2_ParamLimits

0xe3d6,	// (0x00068629) popup_image_details_window_t3_ParamLimits

0xe3ea,	// (0x0006863d) popup_image_details_window_t4_ParamLimits

0xe405,	// (0x00068658) popup_image_details_window_t5_ParamLimits

0x0653,	// (0x0005a8a6) popup_image_details_window_t_ParamLimits

0x74a1,	// (0x000616f4) cl_header_name_pane_ParamLimits

0x74a1,	// (0x000616f4) cl_header_name_pane

0x7849,	// (0x00061a9c) cl_header_name_pane_t1_ParamLimits

0x7849,	// (0x00061a9c) cl_header_name_pane_t1

0x7860,	// (0x00061ab3) cl_header_name_pane_t2_ParamLimits

0x7860,	// (0x00061ab3) cl_header_name_pane_t2

0x788a,	// (0x00061add) cl_header_name_pane_t3_ParamLimits

0x788a,	// (0x00061add) cl_header_name_pane_t3

0x0002,

0xf796,	// (0x000699e9) cl_header_name_pane_t_ParamLimits

0xf796,	// (0x000699e9) cl_header_name_pane_t

0xc96a,	// (0x00066bbd) navi_pane_mv_g2_ParamLimits

0xec04,	// (0x00068e57) field_vitu2_entry_pane_g1_ParamLimits

0xec10,	// (0x00068e63) field_vitu2_entry_pane_g2_ParamLimits

0xec1c,	// (0x00068e6f) field_vitu2_entry_pane_g3_ParamLimits

0xec1c,	// (0x00068e6f) field_vitu2_entry_pane_g3

0x084f,	// (0x0005aaa2) field_vitu2_entry_pane_g_ParamLimits

0x677e,	// (0x000609d1) cell_vitu2_itu_pane_g1_ParamLimits

0x6790,	// (0x000609e3) cell_vitu2_itu_pane_g2_ParamLimits

0x6790,	// (0x000609e3) cell_vitu2_itu_pane_g2

0x0001,

0xf619,	// (0x0006986c) cell_vitu2_itu_pane_g_ParamLimits

0xf619,	// (0x0006986c) cell_vitu2_itu_pane_g

0x442b,	// (0x0005e67e) bg_vkb2_func_pane_cp05_ParamLimits

0x442b,	// (0x0005e67e) bg_vkb2_func_pane_cp05

0x442b,	// (0x0005e67e) bg_vkb2_func_pane_cp03

0x442b,	// (0x0005e67e) bg_vkb2_func_pane_cp04

0x442b,	// (0x0005e67e) bg_vkb2_func_pane_cp10_ParamLimits

0x442b,	// (0x0005e67e) bg_vkb2_func_pane_cp10

0x7443,	// (0x00061696) bg_vkb2_func_pane_cp08

0x7429,	// (0x0006167c) bg_vkb2_func_pane_cp06

0x7437,	// (0x0006168a) bg_vkb2_func_pane_cp07

0x9f8c,	// (0x000641df) bg_vkb2_func_pane_cp11_ParamLimits

0x9f8c,	// (0x000641df) bg_vkb2_func_pane_cp11

0x9fa1,	// (0x000641f4) bg_vkb2_func_pane_cp12_ParamLimits

0x9fa1,	// (0x000641f4) bg_vkb2_func_pane_cp12

0xb130,	// (0x00065383) bg_vkb2_func_pane_cp09

0xec3c,	// (0x00068e8f) bg_vkb2_func_pane_g1

0xc1c4,	// (0x00066417) bg_vkb2_func_pane_g2

0xec44,	// (0x00068e97) bg_vkb2_func_pane_g3

0xec4c,	// (0x00068e9f) bg_vkb2_func_pane_g4

0xee7b,	// (0x000690ce) bg_vkb2_func_pane_g5

0xec64,	// (0x00068eb7) bg_vkb2_func_pane_g6

0xec6c,	// (0x00068ebf) bg_vkb2_func_pane_g7

0xec5c,	// (0x00068eaf) bg_vkb2_func_pane_g8

0xc1a4,	// (0x000663f7) bg_vkb2_func_pane_g9

0x0008,

0x0a60,	// (0x0005acb3) bg_vkb2_func_pane_g

0x7798,	// (0x000619eb) blid2_tripm_pane_g6_ParamLimits

0x7798,	// (0x000619eb) blid2_tripm_pane_g6

0xead7,	// (0x00068d2a) mp4_progress_pane_g1

0x77f2,	// (0x00061a45) blid2_tripm_values_pane_ParamLimits

0x77f2,	// (0x00061a45) blid2_tripm_values_pane

0x78af,	// (0x00061b02) blid2_tripm_values_pane_t1

0x78bd,	// (0x00061b10) blid2_tripm_values_pane_t2

0x78cb,	// (0x00061b1e) blid2_tripm_values_pane_t3

0x78d9,	// (0x00061b2c) blid2_tripm_values_pane_t4

0x78e7,	// (0x00061b3a) blid2_tripm_values_pane_t5

0x78f5,	// (0x00061b48) blid2_tripm_values_pane_t6

0x7903,	// (0x00061b56) blid2_tripm_values_pane_t7

0x7911,	// (0x00061b64) blid2_tripm_values_pane_t8

0x791f,	// (0x00061b72) blid2_tripm_values_pane_t9

0x0008,

0xf79d,	// (0x000699f0) blid2_tripm_values_pane_t

0x210f,	// (0x0005c362) call_video_pane_t1_ParamLimits

0x2130,	// (0x0005c383) call_video_pane_t2_ParamLimits

0xf203,	// (0x00069456) call_video_pane_t_ParamLimits

0x3c1a,	// (0x0005de6d) msg_header_pane_g1_ParamLimits

0xcb52,	// (0x00066da5) msg_header_pane_g2_ParamLimits

0xcb52,	// (0x00066da5) msg_header_pane_g2

0x0001,

0xf378,	// (0x000695cb) msg_header_pane_g_ParamLimits

0xf378,	// (0x000695cb) msg_header_pane_g

0xb86d,	// (0x00065ac0) main_clock2_pane_ParamLimits

0x573a,	// (0x0005f98d) grid_clock2_toolbar_pane_ParamLimits

0x573a,	// (0x0005f98d) grid_clock2_toolbar_pane

0x573a,	// (0x0005f98d) listscroll_clock2_pane_ParamLimits

0x573a,	// (0x0005f98d) listscroll_clock2_pane

0x57e0,	// (0x0005fa33) main_clock2_pane_t3_ParamLimits

0x57e0,	// (0x0005fa33) main_clock2_pane_t3

0x57f2,	// (0x0005fa45) main_clock2_pane_t4_ParamLimits

0x57f2,	// (0x0005fa45) main_clock2_pane_t4

0xa09e,	// (0x000642f1) cell_clock2_toolbar_pane

0xa0a6,	// (0x000642f9) cell_clock2_toolbar_pane_cp01

0xa0a6,	// (0x000642f9) cell_clock2_toolbar_pane_cp02

0xa0ae,	// (0x00064301) cell_clock2_toolbar_pane_cp03

0xa0b6,	// (0x00064309) list_clock2_pane

0xc790,	// (0x000669e3) scroll_pane_cp10

0xa0be,	// (0x00064311) list_single_clock2_pane_ParamLimits

0xa0be,	// (0x00064311) list_single_clock2_pane

0xbf6b,	// (0x000661be) list_highlight_pane_cp08

0xa0cb,	// (0x0006431e) list_single_clock2_pane_t1

0xa0d9,	// (0x0006432c) list_single_clock2_pane_t2

0x0001,

0xf7b0,	// (0x00069a03) list_single_clock2_pane_t

0xb130,	// (0x00065383) bg_button_pane_cp10

0xa0e7,	// (0x0006433a) cell_clock2_toolbar_pane_g1

0x3c81,	// (0x0005ded4) aid_main_viewer_pane_g1_ParamLimits

0x3c81,	// (0x0005ded4) aid_main_viewer_pane_g1

0x3c8d,	// (0x0005dee0) aid_main_viewer_pane_g2_ParamLimits

0x3c8d,	// (0x0005dee0) aid_main_viewer_pane_g2

0x3c99,	// (0x0005deec) aid_main_viewer_pane_g3_ParamLimits

0x3c99,	// (0x0005deec) aid_main_viewer_pane_g3

0x3caa,	// (0x0005defd) aid_main_viewer_pane_g4_ParamLimits

0x3caa,	// (0x0005defd) aid_main_viewer_pane_g4

0x0003,

0xf389,	// (0x000695dc) aid_main_viewer_pane_g_ParamLimits

0xf389,	// (0x000695dc) aid_main_viewer_pane_g

0x441e,	// (0x0005e671) main_calc_pane_ParamLimits

0x4439,	// (0x0005e68c) main_dialer2_pane_ParamLimits

0x123d,	// (0x0005b490) main_cam6_pane

0x123d,	// (0x0005b490) main_vid6_pane

0x5746,	// (0x0005f999) listscroll_gen_pane_cp06_ParamLimits

0x5746,	// (0x0005f999) listscroll_gen_pane_cp06

0x5804,	// (0x0005fa57) main_clock2_pane_t5_ParamLimits

0x5804,	// (0x0005fa57) main_clock2_pane_t5

0x584d,	// (0x0005faa0) aid_call2_pane_cp10_ParamLimits

0x585f,	// (0x0005fab2) aid_call_pane_cp10_ParamLimits

0xc80e,	// (0x00066a61) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc80e,	// (0x00066a61) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5871,	// (0x0005fac4) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5871,	// (0x0005fac4) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc80e,	// (0x00066a61) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf53f,	// (0x00069792) popup_clock_analogue_window_cp10_g_ParamLimits

0x5883,	// (0x0005fad6) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6049,	// (0x0006029c) cell_dialer2_keypad_pane_g2_ParamLimits

0x6049,	// (0x0006029c) cell_dialer2_keypad_pane_g2

0x0001,

0xf5b3,	// (0x00069806) cell_dialer2_keypad_pane_g_ParamLimits

0xf5b3,	// (0x00069806) cell_dialer2_keypad_pane_g

0x6065,	// (0x000602b8) cell_dialer2_keypad_pane_t1

0x6ab5,	// (0x00060d08) main_cset_text2_pane_ParamLimits

0x6ab5,	// (0x00060d08) main_cset_text2_pane

0xf0be,	// (0x00069311) area_vitu2_query_pane_g1_ParamLimits

0x73c8,	// (0x0006161b) area_vitu2_query_pane_g2_ParamLimits

0xf6f3,	// (0x00069946) area_vitu2_query_pane_g_ParamLimits

0x9dcb,	// (0x0006401e) area_vitu2_query_pane_t7_ParamLimits

0x9dcb,	// (0x0006401e) area_vitu2_query_pane_t7

0x7429,	// (0x0006167c) bg_button_pane_cp018_ParamLimits

0x7437,	// (0x0006168a) bg_button_pane_cp021_ParamLimits

0x7443,	// (0x00061696) bg_button_pane_cp022_ParamLimits

0x7443,	// (0x00061696) bg_vkb2_func_pane_cp08_ParamLimits

0x7429,	// (0x0006167c) bg_vkb2_func_pane_cp06_ParamLimits

0x7437,	// (0x0006168a) bg_vkb2_func_pane_cp07_ParamLimits

0x7454,	// (0x000616a7) input_focus_pane_cp09_ParamLimits

0x792d,	// (0x00061b80) cam6_autofocus_pane_ParamLimits

0x792d,	// (0x00061b80) cam6_autofocus_pane

0x794f,	// (0x00061ba2) cam6_image_uncrop_pane_ParamLimits

0x794f,	// (0x00061ba2) cam6_image_uncrop_pane

0x797c,	// (0x00061bcf) cam6_indi_pane_ParamLimits

0x797c,	// (0x00061bcf) cam6_indi_pane

0x7996,	// (0x00061be9) cam6_mode_pane_ParamLimits

0x7996,	// (0x00061be9) cam6_mode_pane

0x79aa,	// (0x00061bfd) cam6_timer_pane_ParamLimits

0x79aa,	// (0x00061bfd) cam6_timer_pane

0x79b6,	// (0x00061c09) cam6_zoom_pane_ParamLimits

0x79b6,	// (0x00061c09) cam6_zoom_pane

0x79ce,	// (0x00061c21) cam6_mode_pane_g1_ParamLimits

0x79ce,	// (0x00061c21) cam6_mode_pane_g1

0x79da,	// (0x00061c2d) cam6_mode_pane_g2_ParamLimits

0x79da,	// (0x00061c2d) cam6_mode_pane_g2

0x79e6,	// (0x00061c39) cam6_mode_pane_g3_ParamLimits

0x79e6,	// (0x00061c39) cam6_mode_pane_g3

0x79f2,	// (0x00061c45) cam6_mode_pane_g4_ParamLimits

0x79f2,	// (0x00061c45) cam6_mode_pane_g4

0x0003,

0xf7b5,	// (0x00069a08) cam6_mode_pane_g_ParamLimits

0xf7b5,	// (0x00069a08) cam6_mode_pane_g

0xf084,	// (0x000692d7) bg_tb_trans_pane_cp08_ParamLimits

0xf084,	// (0x000692d7) bg_tb_trans_pane_cp08

0xa0ef,	// (0x00064342) cam6_battery_pane_ParamLimits

0xa0ef,	// (0x00064342) cam6_battery_pane

0xa105,	// (0x00064358) cam6_indi_pane_g1_ParamLimits

0xa105,	// (0x00064358) cam6_indi_pane_g1

0xa117,	// (0x0006436a) cam6_indi_pane_g2_ParamLimits

0xa117,	// (0x0006436a) cam6_indi_pane_g2

0xa129,	// (0x0006437c) cam6_indi_pane_g3_ParamLimits

0xa129,	// (0x0006437c) cam6_indi_pane_g3

0x0002,

0xf7be,	// (0x00069a11) cam6_indi_pane_g_ParamLimits

0xf7be,	// (0x00069a11) cam6_indi_pane_g

0xa13b,	// (0x0006438e) cam6_indi_pane_t1_ParamLimits

0xa13b,	// (0x0006438e) cam6_indi_pane_t1

0x6578,	// (0x000607cb) cam6_autofocus_pane_g1

0x6570,	// (0x000607c3) cam6_autofocus_pane_g2

0x6588,	// (0x000607db) cam6_autofocus_pane_g3

0x6580,	// (0x000607d3) cam6_autofocus_pane_g4

0x0003,

0xf7c5,	// (0x00069a18) cam6_autofocus_pane_g

0xa161,	// (0x000643b4) cam6_timer_pane_g1

0xa169,	// (0x000643bc) cam6_timer_pane_t1

0xa177,	// (0x000643ca) cam6_zoom_cont_pane

0xa17f,	// (0x000643d2) cam6_zoom_pane_g1

0xa187,	// (0x000643da) cam6_zoom_pane_g2

0x79fe,	// (0x00061c51) cam6_zoom_pane_g3

0x0002,

0xf7ce,	// (0x00069a21) cam6_zoom_pane_g

0xe1e3,	// (0x00068436) cam6_battery_pane_g1

0xe1e3,	// (0x00068436) cam6_battery_pane_g2

0x0001,

0x0610,	// (0x0005a863) cam6_battery_pane_g

0xa18f,	// (0x000643e2) cam6_zoom_cont_pane_g1

0xa198,	// (0x000643eb) cam6_zoom_cont_pane_g2

0xa1a1,	// (0x000643f4) cam6_zoom_cont_pane_g3

0x0002,

0xf7d5,	// (0x00069a28) cam6_zoom_cont_pane_g

0x7a1b,	// (0x00061c6e) cam6_mode_pane_cp_ParamLimits

0x7a1b,	// (0x00061c6e) cam6_mode_pane_cp

0x7a2f,	// (0x00061c82) cam6_zoom_pane_cp_ParamLimits

0x7a2f,	// (0x00061c82) cam6_zoom_pane_cp

0x7a47,	// (0x00061c9a) vid6_image_uncrop_cif_pane_ParamLimits

0x7a47,	// (0x00061c9a) vid6_image_uncrop_cif_pane

0x7a73,	// (0x00061cc6) vid6_image_uncrop_nhd_pane_ParamLimits

0x7a73,	// (0x00061cc6) vid6_image_uncrop_nhd_pane

0x7a90,	// (0x00061ce3) vid6_image_uncrop_vga_pane_ParamLimits

0x7a90,	// (0x00061ce3) vid6_image_uncrop_vga_pane

0x7aaf,	// (0x00061d02) vid6_image_uncrop_wvga_pane_ParamLimits

0x7aaf,	// (0x00061d02) vid6_image_uncrop_wvga_pane

0x7acc,	// (0x00061d1f) vid6_indi_pane_ParamLimits

0x7acc,	// (0x00061d1f) vid6_indi_pane

0xf084,	// (0x000692d7) bg_tb_trans_pane_cp09_ParamLimits

0xf084,	// (0x000692d7) bg_tb_trans_pane_cp09

0xa1b9,	// (0x0006440c) cam6_battery_pane_cp_ParamLimits

0xa1b9,	// (0x0006440c) cam6_battery_pane_cp

0xa1c5,	// (0x00064418) vid6_indi_pane_g1_ParamLimits

0xa1c5,	// (0x00064418) vid6_indi_pane_g1

0xa1d7,	// (0x0006442a) vid6_indi_pane_g2_ParamLimits

0xa1d7,	// (0x0006442a) vid6_indi_pane_g2

0xa1e9,	// (0x0006443c) vid6_indi_pane_g3_ParamLimits

0xa1e9,	// (0x0006443c) vid6_indi_pane_g3

0xa1fe,	// (0x00064451) vid6_indi_pane_g4_ParamLimits

0xa1fe,	// (0x00064451) vid6_indi_pane_g4

0xa47d,	// (0x000646d0) vid6_indi_pane_g5_ParamLimits

0xa47d,	// (0x000646d0) vid6_indi_pane_g5

0x0004,

0xf7dc,	// (0x00069a2f) vid6_indi_pane_g_ParamLimits

0xf7dc,	// (0x00069a2f) vid6_indi_pane_g

0xa497,	// (0x000646ea) vid6_indi_pane_t1_ParamLimits

0xa497,	// (0x000646ea) vid6_indi_pane_t1

0xa4ad,	// (0x00064700) vid6_indi_pane_t2_ParamLimits

0xa4ad,	// (0x00064700) vid6_indi_pane_t2

0xa4d5,	// (0x00064728) vid6_indi_pane_t3_ParamLimits

0xa4d5,	// (0x00064728) vid6_indi_pane_t3

0xa4fd,	// (0x00064750) vid6_indi_pane_t4_ParamLimits

0xa4fd,	// (0x00064750) vid6_indi_pane_t4

0x0003,

0x0abd,	// (0x0005ad10) vid6_indi_pane_t_ParamLimits

0x0abd,	// (0x0005ad10) vid6_indi_pane_t

0xa521,	// (0x00064774) wait_bar_pane_cp08

0x7af1,	// (0x00061d44) main_cset_text2_pane_t1_ParamLimits

0x7af1,	// (0x00061d44) main_cset_text2_pane_t1

0x7a06,	// (0x00061c59) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a06,	// (0x00061c59) listscroll_gen_pane_cp06_t1

0x123d,	// (0x0005b490) main_cam6_set_pane

0x640a,	// (0x0006065d) bg_tb_trans_pane_cp06_ParamLimits

0x6420,	// (0x00060673) cam4_indicators_pane_g1_ParamLimits

0x6431,	// (0x00060684) cam4_indicators_pane_g2_ParamLimits

0xf5f0,	// (0x00069843) cam4_indicators_pane_g_ParamLimits

0x644f,	// (0x000606a2) cam4_indicators_pane_t1_ParamLimits

0x442b,	// (0x0005e67e) bg_tb_trans_pane_cp07_ParamLimits

0x6502,	// (0x00060755) vid4_indicators_pane_g1_ParamLimits

0x6516,	// (0x00060769) vid4_indicators_pane_g2_ParamLimits

0x652a,	// (0x0006077d) vid4_indicators_pane_g3_ParamLimits

0x653b,	// (0x0006078e) vid4_indicators_pane_g4_ParamLimits

0xf602,	// (0x00069855) vid4_indicators_pane_g_ParamLimits

0x6559,	// (0x000607ac) vid4_indicators_pane_t1_ParamLimits

0x7585,	// (0x000617d8) vid4_progress_pane_g1_ParamLimits

0x7595,	// (0x000617e8) vid4_progress_pane_g2_ParamLimits

0x75a5,	// (0x000617f8) vid4_progress_pane_g3_ParamLimits

0x75b7,	// (0x0006180a) vid4_progress_pane_g4_ParamLimits

0xf72b,	// (0x0006997e) vid4_progress_pane_g_ParamLimits

0x75cf,	// (0x00061822) vid4_progress_pane_t1_ParamLimits

0x75e5,	// (0x00061838) vid4_progress_pane_t2_ParamLimits

0x75fa,	// (0x0006184d) vid4_progress_pane_t3_ParamLimits

0xf736,	// (0x00069989) vid4_progress_pane_t_ParamLimits

0x760f,	// (0x00061862) wait_bar_pane_cp07_ParamLimits

0x7b24,	// (0x00061d77) main_cam6_set_pane_g2_ParamLimits

0x7b24,	// (0x00061d77) main_cam6_set_pane_g2

0x7b30,	// (0x00061d83) main_cset6_listscroll_pane_ParamLimits

0x7b30,	// (0x00061d83) main_cset6_listscroll_pane

0x7b5b,	// (0x00061dae) main_cset6_slider_pane_ParamLimits

0x7b5b,	// (0x00061dae) main_cset6_slider_pane

0x7b67,	// (0x00061dba) main_cset6_text2_pane_ParamLimits

0x7b67,	// (0x00061dba) main_cset6_text2_pane

0xa530,	// (0x00064783) main_cset6_text_pane

0xa538,	// (0x0006478b) main_cset_list_pane_copy1_ParamLimits

0xa538,	// (0x0006478b) main_cset_list_pane_copy1

0xa548,	// (0x0006479b) scroll_pane_cp028_copy1

0x7b7a,	// (0x00061dcd) cset_list_set_pane_copy1

0x7b8d,	// (0x00061de0) aid_position_infowindow_above_copy1

0x7b95,	// (0x00061de8) aid_position_infowindow_below_copy1

0x7b9d,	// (0x00061df0) cset_list_set_pane_g1_copy1

0x9d2f,	// (0x00063f82) cset_list_set_pane_g3_copy1_ParamLimits

0x9d2f,	// (0x00063f82) cset_list_set_pane_g3_copy1

0x9d3e,	// (0x00063f91) cset_list_set_pane_t1_copy1_ParamLimits

0x9d3e,	// (0x00063f91) cset_list_set_pane_t1_copy1

0xbdd4,	// (0x00066027) list_highlight_pane_cp021_copy1_ParamLimits

0xbdd4,	// (0x00066027) list_highlight_pane_cp021_copy1

0xa551,	// (0x000647a4) cset6_slider_pane_ParamLimits

0xa551,	// (0x000647a4) cset6_slider_pane

0xa57d,	// (0x000647d0) main_cset6_slider_pane_g1_ParamLimits

0xa57d,	// (0x000647d0) main_cset6_slider_pane_g1

0x7ba5,	// (0x00061df8) main_cset6_slider_pane_g2_ParamLimits

0x7ba5,	// (0x00061df8) main_cset6_slider_pane_g2

0xa5a5,	// (0x000647f8) main_cset6_slider_pane_g3_ParamLimits

0xa5a5,	// (0x000647f8) main_cset6_slider_pane_g3

0x7bcd,	// (0x00061e20) main_cset6_slider_pane_g4_ParamLimits

0x7bcd,	// (0x00061e20) main_cset6_slider_pane_g4

0x7bd9,	// (0x00061e2c) main_cset6_slider_pane_g5_ParamLimits

0x7bd9,	// (0x00061e2c) main_cset6_slider_pane_g5

0xed6b,	// (0x00068fbe) main_cset6_slider_pane_g7_ParamLimits

0xed6b,	// (0x00068fbe) main_cset6_slider_pane_g7

0xed77,	// (0x00068fca) main_cset6_slider_pane_g8_ParamLimits

0xed77,	// (0x00068fca) main_cset6_slider_pane_g8

0x7be7,	// (0x00061e3a) main_cset6_slider_pane_g9_ParamLimits

0x7be7,	// (0x00061e3a) main_cset6_slider_pane_g9

0x7bf3,	// (0x00061e46) main_cset6_slider_pane_g10_ParamLimits

0x7bf3,	// (0x00061e46) main_cset6_slider_pane_g10

0x7bff,	// (0x00061e52) main_cset6_slider_pane_g11_ParamLimits

0x7bff,	// (0x00061e52) main_cset6_slider_pane_g11

0x7c0b,	// (0x00061e5e) main_cset6_slider_pane_g12_ParamLimits

0x7c0b,	// (0x00061e5e) main_cset6_slider_pane_g12

0x7c17,	// (0x00061e6a) main_cset6_slider_pane_g13_ParamLimits

0x7c17,	// (0x00061e6a) main_cset6_slider_pane_g13

0x7c23,	// (0x00061e76) main_cset6_slider_pane_g14_ParamLimits

0x7c23,	// (0x00061e76) main_cset6_slider_pane_g14

0x7c2f,	// (0x00061e82) main_cset6_slider_pane_g15_ParamLimits

0x7c2f,	// (0x00061e82) main_cset6_slider_pane_g15

0x7c47,	// (0x00061e9a) main_cset6_slider_pane_g16_ParamLimits

0x7c47,	// (0x00061e9a) main_cset6_slider_pane_g16

0x7c55,	// (0x00061ea8) main_cset6_slider_pane_g17_ParamLimits

0x7c55,	// (0x00061ea8) main_cset6_slider_pane_g17

0x0011,

0xf7e7,	// (0x00069a3a) main_cset6_slider_pane_g_ParamLimits

0xf7e7,	// (0x00069a3a) main_cset6_slider_pane_g

0xa5b1,	// (0x00064804) main_cset6_slider_pane_t1_ParamLimits

0xa5b1,	// (0x00064804) main_cset6_slider_pane_t1

0x7c7b,	// (0x00061ece) main_cset6_slider_pane_t2_ParamLimits

0x7c7b,	// (0x00061ece) main_cset6_slider_pane_t2

0x7ca6,	// (0x00061ef9) main_cset6_slider_pane_t3_ParamLimits

0x7ca6,	// (0x00061ef9) main_cset6_slider_pane_t3

0x7cd1,	// (0x00061f24) main_cset6_slider_pane_t4_ParamLimits

0x7cd1,	// (0x00061f24) main_cset6_slider_pane_t4

0x7cfc,	// (0x00061f4f) main_cset6_slider_pane_t5_ParamLimits

0x7cfc,	// (0x00061f4f) main_cset6_slider_pane_t5

0xa5f2,	// (0x00064845) main_cset6_slider_pane_t7_ParamLimits

0xa5f2,	// (0x00064845) main_cset6_slider_pane_t7

0x7d29,	// (0x00061f7c) main_cset6_slider_pane_t8_ParamLimits

0x7d29,	// (0x00061f7c) main_cset6_slider_pane_t8

0x7d4d,	// (0x00061fa0) main_cset6_slider_pane_t9_ParamLimits

0x7d4d,	// (0x00061fa0) main_cset6_slider_pane_t9

0x7d71,	// (0x00061fc4) main_cset6_slider_pane_t10_ParamLimits

0x7d71,	// (0x00061fc4) main_cset6_slider_pane_t10

0x7d95,	// (0x00061fe8) main_cset6_slider_pane_t11_ParamLimits

0x7d95,	// (0x00061fe8) main_cset6_slider_pane_t11

0xa628,	// (0x0006487b) main_cset6_slider_pane_t14_ParamLimits

0xa628,	// (0x0006487b) main_cset6_slider_pane_t14

0xa661,	// (0x000648b4) main_cset6_slider_pane_t15_ParamLimits

0xa661,	// (0x000648b4) main_cset6_slider_pane_t15

0x000b,

0xf80c,	// (0x00069a5f) main_cset6_slider_pane_t_ParamLimits

0xf80c,	// (0x00069a5f) main_cset6_slider_pane_t

0xee2f,	// (0x00069082) cset_slider_pane_g1_copy1

0xee38,	// (0x0006908b) cset_slider_pane_g2_copy1

0xee41,	// (0x00069094) cset_slider_pane_g3_copy1

0xb130,	// (0x00065383) bg_popup_sub_pane_cp011_copy1

0xa69a,	// (0x000648ed) main_cset_text_pane_g1_copy1

0xeeca,	// (0x0006911d) main_cset_text_pane_t1_copy1

0xeed8,	// (0x0006912b) main_cset_text_pane_t2_copy1

0xeee6,	// (0x00069139) main_cset_text_pane_t3_copy1

0xeef4,	// (0x00069147) main_cset_text_pane_t4_copy1

0xef02,	// (0x00069155) main_cset_text_pane_t5_copy1

0xa6a2,	// (0x000648f5) main_cset_text_pane_t6_copy1

0xa6b0,	// (0x00064903) main_cset_text_pane_t7_copy1

0x7e91,	// (0x000620e4) main_cset_text2_pane_t1_copy1

0x442b,	// (0x0005e67e) main_ncimui_pane

0x448a,	// (0x0005e6dd) popup_query_ncimui_window_ParamLimits

0x448a,	// (0x0005e6dd) popup_query_ncimui_window

0x9cfa,	// (0x00063f4d) field_cale_ev2_pane_g4_ParamLimits

0x9cfa,	// (0x00063f4d) field_cale_ev2_pane_g4

0x5d69,	// (0x0005ffbc) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5d69,	// (0x0005ffbc) cell_video_dialer_keypad_pane_g2

0x0001,

0xf593,	// (0x000697e6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf593,	// (0x000697e6) cell_video_dialer_keypad_pane_g

0x5d81,	// (0x0005ffd4) cell_video_dialer_keypad_pane_t1

0xb130,	// (0x00065383) bg_popup_window_pane_cp012

0xc65d,	// (0x000668b0) heading_pane_cp06

0xa6dc,	// (0x0006492f) ncim_query_content_pane

0xb130,	// (0x00065383) bg_popup_heading_pane_cp01

0xa6e4,	// (0x00064937) ncim_heading_pane_t1

0xa6f2,	// (0x00064945) ncim_indicator_popup_pane

0xa704,	// (0x00064957) ncim_query_button_pane

0xa718,	// (0x0006496b) ncim_query_content_pane_t1

0xa72a,	// (0x0006497d) ncim_query_content_pane_t2

0x0005,

0xf850,	// (0x00069aa3) ncim_query_content_pane_t

0xa764,	// (0x000649b7) ncim_query_list_pane

0xa776,	// (0x000649c9) ncim_query_popup_pane

0xa6f2,	// (0x00064945) ncim_indicator_popup_pane_ParamLimits

0x7fe4,	// (0x00062237) ncim_query_content_pane_g1_ParamLimits

0x7fe4,	// (0x00062237) ncim_query_content_pane_g1

0xa718,	// (0x0006496b) ncim_query_content_pane_t1_ParamLimits

0xa72a,	// (0x0006497d) ncim_query_content_pane_t2_ParamLimits

0x7ff0,	// (0x00062243) ncim_query_content_pane_t3_ParamLimits

0x7ff0,	// (0x00062243) ncim_query_content_pane_t3

0x800d,	// (0x00062260) ncim_query_content_pane_t4_ParamLimits

0x800d,	// (0x00062260) ncim_query_content_pane_t4

0x802a,	// (0x0006227d) ncim_query_content_pane_t5_ParamLimits

0x802a,	// (0x0006227d) ncim_query_content_pane_t5

0xa73c,	// (0x0006498f) ncim_query_content_pane_t6_ParamLimits

0xa73c,	// (0x0006498f) ncim_query_content_pane_t6

0xf850,	// (0x00069aa3) ncim_query_content_pane_t_ParamLimits

0xa764,	// (0x000649b7) ncim_query_list_pane_ParamLimits

0xa776,	// (0x000649c9) ncim_query_popup_pane_ParamLimits

0xa78a,	// (0x000649dd) wait_bar_pane_cp04

0xb130,	// (0x00065383) input_focus_pane_cp011

0xa792,	// (0x000649e5) ncim_query_popup_pane_t1

0xa7a0,	// (0x000649f3) ncim_list_query_list_pane_ParamLimits

0xa7a0,	// (0x000649f3) ncim_list_query_list_pane

0xb130,	// (0x00065383) bg_button_pane_cp027

0xa7ad,	// (0x00064a00) ncim_query_button_pane_g1

0xb130,	// (0x00065383) list_highlight_pane_cp012

0xa7b7,	// (0x00064a0a) ncim_list_query_list_pane_g1

0xa7bf,	// (0x00064a12) ncim_list_query_list_pane_t1

0x6440,	// (0x00060693) cam4_indicators_pane_g3_ParamLimits

0x6440,	// (0x00060693) cam4_indicators_pane_g3

0x6547,	// (0x0006079a) vid4_indicators_pane_g5_ParamLimits

0x6547,	// (0x0006079a) vid4_indicators_pane_g5

0x75c3,	// (0x00061816) vid4_progress_pane_g5_ParamLimits

0x75c3,	// (0x00061816) vid4_progress_pane_g5

0x7ed0,	// (0x00062123) main_ncimui_pane_g1

0x7f38,	// (0x0006218b) ncimui_group_query_pane_ParamLimits

0x7f38,	// (0x0006218b) ncimui_group_query_pane

0x7f80,	// (0x000621d3) ncimui_list_pane_ParamLimits

0x7f80,	// (0x000621d3) ncimui_list_pane

0x7fa7,	// (0x000621fa) ncimui_text_pane_ParamLimits

0x7fa7,	// (0x000621fa) ncimui_text_pane

0x8047,	// (0x0006229a) ncimui_text_pane_t1_ParamLimits

0x8047,	// (0x0006229a) ncimui_text_pane_t1

0xa7cd,	// (0x00064a20) ncimui_list_single_graphic_pane_ParamLimits

0xa7cd,	// (0x00064a20) ncimui_list_single_graphic_pane

0x8066,	// (0x000622b9) ncimui_query_pane_ParamLimits

0x8066,	// (0x000622b9) ncimui_query_pane

0xb130,	// (0x00065383) list_highlight_pane_cp013

0xa7dd,	// (0x00064a30) ncim_list_query_list_pane_t1_copy1

0xa7b7,	// (0x00064a0a) ncim_list_single_graphic_pane_g1

0x8079,	// (0x000622cc) ncim_query_button_pane_cp01

0x8085,	// (0x000622d8) ncim_query_entry_pane_ParamLimits

0x8085,	// (0x000622d8) ncim_query_entry_pane

0x8098,	// (0x000622eb) ncimui_query_pane_g1

0x80a4,	// (0x000622f7) ncimui_query_pane_t1_ParamLimits

0x80a4,	// (0x000622f7) ncimui_query_pane_t1

0xbdd4,	// (0x00066027) input_focus_pane_cp012

0xa7eb,	// (0x00064a3e) ncim_query_entry_pane_t1

0xb86d,	// (0x00065ac0) main_im_pane_ParamLimits

0x442b,	// (0x0005e67e) main_mobtv_pane_ParamLimits

0x442b,	// (0x0005e67e) main_mobtv_pane

0x7c63,	// (0x00061eb6) main_cset6_slider_pane_g18_ParamLimits

0x7c63,	// (0x00061eb6) main_cset6_slider_pane_g18

0x7c6f,	// (0x00061ec2) main_cset6_slider_pane_g19_ParamLimits

0x7c6f,	// (0x00061ec2) main_cset6_slider_pane_g19

0xec1c,	// (0x00068e6f) bg_main_mobtv_pane_ParamLimits

0xec1c,	// (0x00068e6f) bg_main_mobtv_pane

0x80bd,	// (0x00062310) main_mobtv_info_pane

0x80c8,	// (0x0006231b) main_mobtv_loading_pane_ParamLimits

0x80c8,	// (0x0006231b) main_mobtv_loading_pane

0xa7fd,	// (0x00064a50) main_mobtv_pg_channel_list_pane

0xa807,	// (0x00064a5a) main_mobtv_pg_hdr_pane

0x80d5,	// (0x00062328) main_mobtv_programe_curr_pane_ParamLimits

0x80d5,	// (0x00062328) main_mobtv_programe_curr_pane

0x80e2,	// (0x00062335) main_mobtv_programe_next_pane_ParamLimits

0x80e2,	// (0x00062335) main_mobtv_programe_next_pane

0xa810,	// (0x00064a63) popup_mobtv_noti_window

0xe1e3,	// (0x00068436) main_tv_pg_hdr_pane_g1

0xa818,	// (0x00064a6b) main_tv_pg_hdr_pane_g2

0xa820,	// (0x00064a73) main_tv_pg_hdr_pane_g3

0xa828,	// (0x00064a7b) main_tv_pg_hdr_pane_g4

0xa830,	// (0x00064a83) main_tv_pg_hdr_pane_g5

0xa83a,	// (0x00064a8d) main_tv_pg_hdr_pane_g6

0xa844,	// (0x00064a97) main_tv_pg_hdr_pane_g7

0xa84e,	// (0x00064aa1) main_tv_pg_hdr_pane_g8

0xa858,	// (0x00064aab) main_tv_pg_hdr_pane_g9

0xa862,	// (0x00064ab5) main_tv_pg_hdr_pane_g10

0xa86c,	// (0x00064abf) main_tv_pg_hdr_pane_g11

0x000a,

0x0b3c,	// (0x0005ad8f) main_tv_pg_hdr_pane_g

0xa876,	// (0x00064ac9) main_tv_pg_hdr_pane_t1

0xa884,	// (0x00064ad7) main_tv_pg_hdr_pane_t2

0xa892,	// (0x00064ae5) main_tv_pg_hdr_pane_t3

0xa8a2,	// (0x00064af5) main_tv_pg_hdr_pane_t4

0xa8b2,	// (0x00064b05) main_tv_pg_hdr_pane_t5

0x0004,

0x0b53,	// (0x0005ada6) main_tv_pg_hdr_pane_t

0xa8c2,	// (0x00064b15) single_mobtv_pg_channel_pane_ParamLimits

0xa8c2,	// (0x00064b15) single_mobtv_pg_channel_pane

0xa8d4,	// (0x00064b27) single_mobtv_pg_channel_table_pane

0xa8dd,	// (0x00064b30) single_mobtv_pg_channel_thumb_pane

0xa8e6,	// (0x00064b39) single_tv_pg_channel_pane_g1

0xa8ef,	// (0x00064b42) single_tv_pg_channel_pane_g2

0x0001,

0x0b5e,	// (0x0005adb1) single_tv_pg_channel_pane_g

0xe44f,	// (0x000686a2) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe44f,	// (0x000686a2) bg_single_mobtv_pg_channel_thumb_pane

0xa8f8,	// (0x00064b4b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xa8f8,	// (0x00064b4b) single_mobtv_pg_channel_thumb_pane_g1

0xa906,	// (0x00064b59) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xa906,	// (0x00064b59) single_mobtv_pg_channel_thumb_pane_g2

0xa912,	// (0x00064b65) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xa912,	// (0x00064b65) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0b63,	// (0x0005adb6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0b63,	// (0x0005adb6) single_mobtv_pg_channel_thumb_pane_g

0xa91e,	// (0x00064b71) single_mobtv_pg_channel_thumb_pane_t1

0xa92c,	// (0x00064b7f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0b6a,	// (0x0005adbd) single_mobtv_pg_channel_thumb_pane_t

0xe1e3,	// (0x00068436) bg_single_mobtv_pg_channel_table_pane_g1

0xe1e3,	// (0x00068436) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x0610,	// (0x0005a863) bg_single_mobtv_pg_channel_table_pane_g

0xa93a,	// (0x00064b8d) single_mobtv_pg_channel_table_pane_t1

0xa948,	// (0x00064b9b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0b6f,	// (0x0005adc2) single_mobtv_pg_channel_table_pane_t

0x80f7,	// (0x0006234a) main_mobtv_info_pane_g1_ParamLimits

0x80f7,	// (0x0006234a) main_mobtv_info_pane_g1

0x8113,	// (0x00062366) main_mobtv_info_pane_t1_ParamLimits

0x8113,	// (0x00062366) main_mobtv_info_pane_t1

0x818b,	// (0x000623de) main_mobtv_info_pane_t2_ParamLimits

0x818b,	// (0x000623de) main_mobtv_info_pane_t2

0x0002,

0xf862,	// (0x00069ab5) main_mobtv_info_pane_t_ParamLimits

0xf862,	// (0x00069ab5) main_mobtv_info_pane_t

0x821a,	// (0x0006246d) wait_bar_pane_cp05

0x822c,	// (0x0006247f) main_mobtv_loading_pane_g1_ParamLimits

0x822c,	// (0x0006247f) main_mobtv_loading_pane_g1

0x823a,	// (0x0006248d) main_mobtv_loading_pane_g2_ParamLimits

0x823a,	// (0x0006248d) main_mobtv_loading_pane_g2

0x8246,	// (0x00062499) main_mobtv_loading_pane_g3_ParamLimits

0x8246,	// (0x00062499) main_mobtv_loading_pane_g3

0x0002,

0xf869,	// (0x00069abc) main_mobtv_loading_pane_g_ParamLimits

0xf869,	// (0x00069abc) main_mobtv_loading_pane_g

0xa956,	// (0x00064ba9) main_mobtv_loading_pane_t1_ParamLimits

0xa956,	// (0x00064ba9) main_mobtv_loading_pane_t1

0xa96e,	// (0x00064bc1) main_mobtv_loading_pane_t2_ParamLimits

0xa96e,	// (0x00064bc1) main_mobtv_loading_pane_t2

0x0001,

0x0b87,	// (0x0005adda) main_mobtv_loading_pane_t_ParamLimits

0x0b87,	// (0x0005adda) main_mobtv_loading_pane_t

0x8254,	// (0x000624a7) wait_bar_pane_cp06_ParamLimits

0x8254,	// (0x000624a7) wait_bar_pane_cp06

0xa992,	// (0x00064be5) main_mobtv_programe_curr_pane_t1

0xa9a0,	// (0x00064bf3) main_mobtv_programe_curr_pane_t2

0x0001,

0x0b8c,	// (0x0005addf) main_mobtv_programe_curr_pane_t

0xa9ae,	// (0x00064c01) main_mobtv_programe_next_pane_t1

0xa9bc,	// (0x00064c0f) main_mobtv_programe_next_pane_t2

0xa9ca,	// (0x00064c1d) main_mobtv_programe_next_pane_t3

0x0002,

0x0b91,	// (0x0005ade4) main_mobtv_programe_next_pane_t

0xb130,	// (0x00065383) bg_popup_mobtv_noti_window_pane

0xa9d8,	// (0x00064c2b) popup_mobtv_noti_window_g1

0xa9e0,	// (0x00064c33) popup_mobtv_noti_window_t1

0xa9ee,	// (0x00064c41) popup_mobtv_noti_window_t2

0x0001,

0x0b98,	// (0x0005adeb) popup_mobtv_noti_window_t

0xe1e3,	// (0x00068436) bg_popup_mobtv_noti_window_pane_g1

0x123d,	// (0x0005b490) sc_clock_pane

0x123d,	// (0x0005b490) main_fs_bigclock_pane

0x77e0,	// (0x00061a33) blid2_tripm_pane_t4_ParamLimits

0x77e0,	// (0x00061a33) blid2_tripm_pane_t4

0x8260,	// (0x000624b3) sc_clock_pane_g1_ParamLimits

0x8260,	// (0x000624b3) sc_clock_pane_g1

0x826e,	// (0x000624c1) sc_clock_pane_t1_ParamLimits

0x826e,	// (0x000624c1) sc_clock_pane_t1

0x8281,	// (0x000624d4) sc_clock_pane_t2_ParamLimits

0x8281,	// (0x000624d4) sc_clock_pane_t2

0x8293,	// (0x000624e6) sc_clock_pane_t3_ParamLimits

0x8293,	// (0x000624e6) sc_clock_pane_t3

0x0004,

0xf870,	// (0x00069ac3) sc_clock_pane_t_ParamLimits

0xf870,	// (0x00069ac3) sc_clock_pane_t

0x91d6,	// (0x00063429) main_fs_bigclock_indicator_pane_ParamLimits

0x91d6,	// (0x00063429) main_fs_bigclock_indicator_pane

0x8316,	// (0x00062569) main_fs_bigclock_pane_g1_ParamLimits

0x8316,	// (0x00062569) main_fs_bigclock_pane_g1

0x91e2,	// (0x00063435) main_fs_bigclock_pane_t1_ParamLimits

0x91e2,	// (0x00063435) main_fs_bigclock_pane_t1

0x91f4,	// (0x00063447) main_fs_bigclock_pane_t2_ParamLimits

0x91f4,	// (0x00063447) main_fs_bigclock_pane_t2

0x9208,	// (0x0006345b) main_fs_bigclock_pane_t3_ParamLimits

0x9208,	// (0x0006345b) main_fs_bigclock_pane_t3

0x0002,

0xf9e4,	// (0x00069c37) main_fs_bigclock_pane_t_ParamLimits

0xf9e4,	// (0x00069c37) main_fs_bigclock_pane_t

0xb9c0,	// (0x00065c13) main_fs_bigclock_indicator_pane_g1

0xa70c,	// (0x0006495f) ncim_query_content_pane_g2_ParamLimits

0xa70c,	// (0x0006495f) ncim_query_content_pane_g2

0x0001,

0xf84b,	// (0x00069a9e) ncim_query_content_pane_g_ParamLimits

0xf84b,	// (0x00069a9e) ncim_query_content_pane_g

0x82a7,	// (0x000624fa) sc_clock_pane_t4_ParamLimits

0x82a7,	// (0x000624fa) sc_clock_pane_t4

0x442b,	// (0x0005e67e) main_radioblah_pane

0x62d5,	// (0x00060528) cell_call4_button_pane_t1_copy1_ParamLimits

0x62d5,	// (0x00060528) cell_call4_button_pane_t1_copy1

0x7eea,	// (0x0006213d) main_ncimui_pane_t1_ParamLimits

0x7eea,	// (0x0006213d) main_ncimui_pane_t1

0x7f04,	// (0x00062157) main_ncimui_pane_t2_ParamLimits

0x7f04,	// (0x00062157) main_ncimui_pane_t2

0x0002,

0xf844,	// (0x00069a97) main_ncimui_pane_t_ParamLimits

0xf844,	// (0x00069a97) main_ncimui_pane_t

0xab33,	// (0x00064d86) main_radioblah_anim_pane_ParamLimits

0xab33,	// (0x00064d86) main_radioblah_anim_pane

0xab44,	// (0x00064d97) main_radioblah_info_pane_ParamLimits

0xab44,	// (0x00064d97) main_radioblah_info_pane

0xab58,	// (0x00064dab) main_radioblah_pane_t1_ParamLimits

0xab58,	// (0x00064dab) main_radioblah_pane_t1

0xab74,	// (0x00064dc7) main_radioblah_pane_t2_ParamLimits

0xab74,	// (0x00064dc7) main_radioblah_pane_t2

0x0003,

0x0bbe,	// (0x0005ae11) main_radioblah_pane_t_ParamLimits

0x0bbe,	// (0x0005ae11) main_radioblah_pane_t

0x836c,	// (0x000625bf) main_radioblah_rocker_ctrl_pane_ParamLimits

0x836c,	// (0x000625bf) main_radioblah_rocker_ctrl_pane

0xabbc,	// (0x00064e0f) main_radioblah_info_pane_t1_ParamLimits

0xabbc,	// (0x00064e0f) main_radioblah_info_pane_t1

0x83b1,	// (0x00062604) main_radioblah_info_pane_t2_ParamLimits

0x83b1,	// (0x00062604) main_radioblah_info_pane_t2

0x0003,

0xf87b,	// (0x00069ace) main_radioblah_info_pane_t_ParamLimits

0xf87b,	// (0x00069ace) main_radioblah_info_pane_t

0xe1e3,	// (0x00068436) main_radioblah_rocker_ctrl_pane_g1

0x8461,	// (0x000626b4) main_radioblah_rocker_ctrl_pane_g2

0x8469,	// (0x000626bc) main_radioblah_rocker_ctrl_pane_g3

0x8471,	// (0x000626c4) main_radioblah_rocker_ctrl_pane_g4

0x8479,	// (0x000626cc) main_radioblah_rocker_ctrl_pane_g5

0x8481,	// (0x000626d4) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xf884,	// (0x00069ad7) main_radioblah_rocker_ctrl_pane_g

0x7e91,	// (0x000620e4) main_cset_text2_pane_t1_copy1_ParamLimits

0x6360,	// (0x000605b3) cam4_image_uncrop_qvga_pane

0x64b5,	// (0x00060708) vid4_image_uncrop_qcif_pane

0x796e,	// (0x00061bc1) cam6_image_uncrop_qvga_pane_ParamLimits

0x796e,	// (0x00061bc1) cam6_image_uncrop_qvga_pane

0xa1a9,	// (0x000643fc) vid6_image_uncrop_qcif_pane_ParamLimits

0xa1a9,	// (0x000643fc) vid6_image_uncrop_qcif_pane

0xb130,	// (0x00065383) bg_popup_preview_window_pane_cp03

0xa6be,	// (0x00064911) list_cset_text2_pane

0xa6c6,	// (0x00064919) main_cset6_text2_pane_g1

0xa6ce,	// (0x00064921) main_cset6_text2_pane_t1

0x8489,	// (0x000626dc) list_cset_text2_pane_t1_ParamLimits

0x8489,	// (0x000626dc) list_cset_text2_pane_t1

0x442b,	// (0x0005e67e) main_radioblah_pane_ParamLimits

0x8206,	// (0x00062459) main_mobtv_info_pane_t3_ParamLimits

0x8206,	// (0x00062459) main_mobtv_info_pane_t3

0x835a,	// (0x000625ad) main_radioblah_pane_g1

0x8385,	// (0x000625d8) main_radioblah_info_pane_g1

0x8406,	// (0x00062659) main_radioblah_info_pane_t3_ParamLimits

0x8406,	// (0x00062659) main_radioblah_info_pane_t3

0x3130,	// (0x0005d383) highlight_cell_cale_month_pane_ParamLimits

0x3130,	// (0x0005d383) highlight_cell_cale_month_pane

0x123d,	// (0x0005b490) main_phob_fisheye_pane

0xe54b,	// (0x0006879e) scroll_pane_cp0031_ParamLimits

0xe54b,	// (0x0006879e) scroll_pane_cp0031

0xa521,	// (0x00064774) wait_bar_pane_cp08_ParamLimits

0x7b7a,	// (0x00061dcd) cset_list_set_pane_copy1_ParamLimits

0xabf6,	// (0x00064e49) highlight_cell_cale_month_pane_g1

0x84a6,	// (0x000626f9) highlight_cell_cale_month_pane_t1

0x9e37,	// (0x0006408a) list_gen_pane_cp01

0xed56,	// (0x00068fa9) scroll_pane_01

0x84b4,	// (0x00062707) list_single_double_fisheye_pane

0x84bd,	// (0x00062710) list_double_fisheye_pane_g1_ParamLimits

0x84bd,	// (0x00062710) list_double_fisheye_pane_g1

0x84c9,	// (0x0006271c) list_double_fisheye_pane_g2_ParamLimits

0x84c9,	// (0x0006271c) list_double_fisheye_pane_g2

0x84dd,	// (0x00062730) list_double_fisheye_pane_g3_ParamLimits

0x84dd,	// (0x00062730) list_double_fisheye_pane_g3

0x0004,

0xf891,	// (0x00069ae4) list_double_fisheye_pane_g_ParamLimits

0xf891,	// (0x00069ae4) list_double_fisheye_pane_g

0x8506,	// (0x00062759) list_double_fisheye_pane_t1_ParamLimits

0x8506,	// (0x00062759) list_double_fisheye_pane_t1

0x8521,	// (0x00062774) list_double_fisheye_pane_t2_ParamLimits

0x8521,	// (0x00062774) list_double_fisheye_pane_t2

0x0001,

0xf89c,	// (0x00069aef) list_double_fisheye_pane_t_ParamLimits

0xf89c,	// (0x00069aef) list_double_fisheye_pane_t

0x123d,	// (0x0005b490) main_call5_pane

0x82cd,	// (0x00062520) sc_swipe_pane_ParamLimits

0x82cd,	// (0x00062520) sc_swipe_pane

0x854f,	// (0x000627a2) call5_image_pane_ParamLimits

0x854f,	// (0x000627a2) call5_image_pane

0x855f,	// (0x000627b2) call5_swipe_1_pane_ParamLimits

0x855f,	// (0x000627b2) call5_swipe_1_pane

0x856b,	// (0x000627be) call5_swipe_2_pane_ParamLimits

0x856b,	// (0x000627be) call5_swipe_2_pane

0x8585,	// (0x000627d8) popup_call5_audio_first_window_ParamLimits

0x8585,	// (0x000627d8) popup_call5_audio_first_window

0xe44f,	// (0x000686a2) call5_swipe_1_pane_g1_ParamLimits

0xe44f,	// (0x000686a2) call5_swipe_1_pane_g1

0xabfe,	// (0x00064e51) call5_swipe_1_pane_g2_ParamLimits

0xabfe,	// (0x00064e51) call5_swipe_1_pane_g2

0x0001,

0x0bed,	// (0x0005ae40) call5_swipe_1_pane_g_ParamLimits

0x0bed,	// (0x0005ae40) call5_swipe_1_pane_g

0xac0a,	// (0x00064e5d) call5_swipe_1_pane_t1_ParamLimits

0xac0a,	// (0x00064e5d) call5_swipe_1_pane_t1

0xe44f,	// (0x000686a2) call5_swipe_2_pane_g1_ParamLimits

0xe44f,	// (0x000686a2) call5_swipe_2_pane_g1

0xac1f,	// (0x00064e72) call5_swipe_2_pane_g2_ParamLimits

0xac1f,	// (0x00064e72) call5_swipe_2_pane_g2

0x0001,

0x0bf2,	// (0x0005ae45) call5_swipe_2_pane_g_ParamLimits

0x0bf2,	// (0x0005ae45) call5_swipe_2_pane_g

0xac2b,	// (0x00064e7e) call5_swipe_2_pane_t1_ParamLimits

0xac2b,	// (0x00064e7e) call5_swipe_2_pane_t1

0xac40,	// (0x00064e93) sc_swipe_pane_g1_ParamLimits

0xac40,	// (0x00064e93) sc_swipe_pane_g1

0xac4d,	// (0x00064ea0) sc_swipe_pane_g2_ParamLimits

0xac4d,	// (0x00064ea0) sc_swipe_pane_g2

0x0001,

0x0bf7,	// (0x0005ae4a) sc_swipe_pane_g_ParamLimits

0x0bf7,	// (0x0005ae4a) sc_swipe_pane_g

0xac59,	// (0x00064eac) sc_swipe_pane_t1_ParamLimits

0xac59,	// (0x00064eac) sc_swipe_pane_t1

0x123d,	// (0x0005b490) main_cmail_launcher_pane

0x8593,	// (0x000627e6) aid_size_cell_cmail_l_ParamLimits

0x8593,	// (0x000627e6) aid_size_cell_cmail_l

0x85a1,	// (0x000627f4) grid_cmail_l_pane_ParamLimits

0x85a1,	// (0x000627f4) grid_cmail_l_pane

0x85b1,	// (0x00062804) cell_cmail_l_pane_ParamLimits

0x85b1,	// (0x00062804) cell_cmail_l_pane

0xac6e,	// (0x00064ec1) cell_cmail_l_pane_g1_ParamLimits

0xac6e,	// (0x00064ec1) cell_cmail_l_pane_g1

0xac7a,	// (0x00064ecd) cell_cmail_l_pane_t1_ParamLimits

0xac7a,	// (0x00064ecd) cell_cmail_l_pane_t1

0xac90,	// (0x00064ee3) cell_cmail_l_pane_t2_ParamLimits

0xac90,	// (0x00064ee3) cell_cmail_l_pane_t2

0x0001,

0x0bfc,	// (0x0005ae4f) cell_cmail_l_pane_t_ParamLimits

0x0bfc,	// (0x0005ae4f) cell_cmail_l_pane_t

0xbdd4,	// (0x00066027) grid_highlight_pane_cp018_ParamLimits

0xbdd4,	// (0x00066027) grid_highlight_pane_cp018

0x1093,	// (0x0005b2e6) main2_pane_ParamLimits

0x1093,	// (0x0005b2e6) main2_pane

0xbe3f,	// (0x00066092) popup_sp_fs_action_menu_bg_pane_g1

0xbe47,	// (0x0006609a) popup_sp_fs_action_menu_bg_pane_g2

0xbe4f,	// (0x000660a2) popup_sp_fs_action_menu_bg_pane_g3

0xbe57,	// (0x000660aa) popup_sp_fs_action_menu_bg_pane_g4

0xbe5f,	// (0x000660b2) popup_sp_fs_action_menu_bg_pane_g5

0xbe67,	// (0x000660ba) popup_sp_fs_action_menu_bg_pane_g6

0xbe6f,	// (0x000660c2) popup_sp_fs_action_menu_bg_pane_g7

0xbe77,	// (0x000660ca) popup_sp_fs_action_menu_bg_pane_g8

0xbe7f,	// (0x000660d2) popup_sp_fs_action_menu_bg_pane_g9

0xbe87,	// (0x000660da) popup_sp_fs_action_menu_bg_pane_g10

0xbe87,	// (0x000660da) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0x00be,	// (0x0005a311) popup_sp_fs_action_menu_bg_pane_g

0x1f45,	// (0x0005c198) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1f45,	// (0x0005c198) list_medium_line_x2_t3_g3_g1

0x1f51,	// (0x0005c1a4) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1f51,	// (0x0005c1a4) list_medium_line_x2_t3_g3_g2

0x1f5d,	// (0x0005c1b0) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1f5d,	// (0x0005c1b0) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d2,	// (0x00069425) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d2,	// (0x00069425) list_medium_line_x2_t3_g3_g

0x1f69,	// (0x0005c1bc) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1f69,	// (0x0005c1bc) list_medium_line_x2_t3_g3_t1

0x1f7e,	// (0x0005c1d1) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1f7e,	// (0x0005c1d1) list_medium_line_x2_t3_g3_t2

0x1f90,	// (0x0005c1e3) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1f90,	// (0x0005c1e3) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1d9,	// (0x0006942c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1d9,	// (0x0006942c) list_medium_line_x2_t3_g3_t

0x1f45,	// (0x0005c198) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1f45,	// (0x0005c198) list_medium_line_x2_t3_g2_g1

0x1f5d,	// (0x0005c1b0) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1f5d,	// (0x0005c1b0) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e0,	// (0x00069433) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e0,	// (0x00069433) list_medium_line_x2_t3_g2_g

0x1fa5,	// (0x0005c1f8) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1fa5,	// (0x0005c1f8) list_medium_line_x2_t3_g2_t1

0x1fbb,	// (0x0005c20e) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1fbb,	// (0x0005c20e) list_medium_line_x2_t3_g2_t2

0x1fcd,	// (0x0005c220) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1fcd,	// (0x0005c220) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e5,	// (0x00069438) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e5,	// (0x00069438) list_medium_line_x2_t3_g2_t

0x1f45,	// (0x0005c198) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1f45,	// (0x0005c198) list_medium_line_x2_t4_g4_g1

0x1fea,	// (0x0005c23d) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1fea,	// (0x0005c23d) list_medium_line_x2_t4_g4_g2

0x1f51,	// (0x0005c1a4) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1f51,	// (0x0005c1a4) list_medium_line_x2_t4_g4_g3

0x1ff6,	// (0x0005c249) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1ff6,	// (0x0005c249) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x0006943f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x0006943f) list_medium_line_x2_t4_g4_g

0x2002,	// (0x0005c255) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2002,	// (0x0005c255) list_medium_line_x2_t4_g4_t1

0x201c,	// (0x0005c26f) list_medium_line_x2_t4_g4_t2_ParamLimits

0x201c,	// (0x0005c26f) list_medium_line_x2_t4_g4_t2

0x2032,	// (0x0005c285) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2032,	// (0x0005c285) list_medium_line_x2_t4_g4_t3

0x2047,	// (0x0005c29a) list_medium_line_x2_t4_g4_t4_ParamLimits

0x2047,	// (0x0005c29a) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x00069448) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x00069448) list_medium_line_x2_t4_g4_t

0x1f45,	// (0x0005c198) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1f45,	// (0x0005c198) list_medium_line_x2_t2_g4_g1

0x1fea,	// (0x0005c23d) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1fea,	// (0x0005c23d) list_medium_line_x2_t2_g4_g2

0x1f51,	// (0x0005c1a4) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1f51,	// (0x0005c1a4) list_medium_line_x2_t2_g4_g3

0x1f5d,	// (0x0005c1b0) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1f5d,	// (0x0005c1b0) list_medium_line_x2_t2_g4_g4

0x0003,

0xf244,	// (0x00069497) list_medium_line_x2_t2_g4_g_ParamLimits

0xf244,	// (0x00069497) list_medium_line_x2_t2_g4_g

0x3156,	// (0x0005d3a9) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3156,	// (0x0005d3a9) list_medium_line_x2_t2_g4_t1

0x1f90,	// (0x0005c1e3) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1f90,	// (0x0005c1e3) list_medium_line_x2_t2_g4_t2

0x0001,

0xf24d,	// (0x000694a0) list_medium_line_x2_t2_g4_t_ParamLimits

0xf24d,	// (0x000694a0) list_medium_line_x2_t2_g4_t

0x1f45,	// (0x0005c198) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1f45,	// (0x0005c198) list_medium_line_x2_t2_g3_g1

0x1f51,	// (0x0005c1a4) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1f51,	// (0x0005c1a4) list_medium_line_x2_t2_g3_g2

0x1f5d,	// (0x0005c1b0) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1f5d,	// (0x0005c1b0) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d2,	// (0x00069425) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d2,	// (0x00069425) list_medium_line_x2_t2_g3_g

0x316b,	// (0x0005d3be) list_medium_line_x2_t2_g3_t1_ParamLimits

0x316b,	// (0x0005d3be) list_medium_line_x2_t2_g3_t1

0x1f90,	// (0x0005c1e3) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1f90,	// (0x0005c1e3) list_medium_line_x2_t2_g3_t2

0x0001,

0xf252,	// (0x000694a5) list_medium_line_x2_t2_g3_t_ParamLimits

0xf252,	// (0x000694a5) list_medium_line_x2_t2_g3_t

0x3332,	// (0x0005d585) main_sp_fs_list_pane_ParamLimits

0x3332,	// (0x0005d585) main_sp_fs_list_pane

0x333e,	// (0x0005d591) sp_fs_scroll_pane_ParamLimits

0x333e,	// (0x0005d591) sp_fs_scroll_pane

0x334a,	// (0x0005d59d) list_medium_line_x2_t3_t1

0x335a,	// (0x0005d5ad) list_medium_line_x2_t3_t2

0x3368,	// (0x0005d5bb) list_medium_line_x2_t3_t3

0x0002,

0xf26b,	// (0x000694be) list_medium_line_x2_t3_t

0x3376,	// (0x0005d5c9) list_medium_line_x3_t4_t1

0x3386,	// (0x0005d5d9) list_medium_line_x3_t4_t2

0x3394,	// (0x0005d5e7) list_medium_line_x3_t4_t3

0x3368,	// (0x0005d5bb) list_medium_line_x3_t4_t4

0x0003,

0xf272,	// (0x000694c5) list_medium_line_x3_t4_t

0x33a2,	// (0x0005d5f5) list_medium_line_x4_t5_t1

0x33b2,	// (0x0005d605) list_medium_line_x4_t5_t2

0x3394,	// (0x0005d5e7) list_medium_line_x4_t5_t3

0x33c0,	// (0x0005d613) list_medium_line_x4_t5_t4

0x3368,	// (0x0005d5bb) list_medium_line_x4_t5_t5

0x0004,

0xf27b,	// (0x000694ce) list_medium_line_x4_t5_t

0x1f45,	// (0x0005c198) list_medium_line_t4_g4_g1_ParamLimits

0x1f45,	// (0x0005c198) list_medium_line_t4_g4_g1

0x1ff6,	// (0x0005c249) list_medium_line_t4_g4_g2_ParamLimits

0x1ff6,	// (0x0005c249) list_medium_line_t4_g4_g2

0x33ce,	// (0x0005d621) list_medium_line_t4_g4_g3_ParamLimits

0x33ce,	// (0x0005d621) list_medium_line_t4_g4_g3

0x1f5d,	// (0x0005c1b0) list_medium_line_t4_g4_g4_ParamLimits

0x1f5d,	// (0x0005c1b0) list_medium_line_t4_g4_g4

0x0003,

0xf286,	// (0x000694d9) list_medium_line_t4_g4_g_ParamLimits

0xf286,	// (0x000694d9) list_medium_line_t4_g4_g

0x33da,	// (0x0005d62d) list_medium_line_t4_g4_t1_ParamLimits

0x33da,	// (0x0005d62d) list_medium_line_t4_g4_t1

0x33ef,	// (0x0005d642) list_medium_line_t4_g4_t2_ParamLimits

0x33ef,	// (0x0005d642) list_medium_line_t4_g4_t2

0x3404,	// (0x0005d657) list_medium_line_t4_g4_t3_ParamLimits

0x3404,	// (0x0005d657) list_medium_line_t4_g4_t3

0x1f90,	// (0x0005c1e3) list_medium_line_t4_g4_t4_ParamLimits

0x1f90,	// (0x0005c1e3) list_medium_line_t4_g4_t4

0x0003,

0xf28f,	// (0x000694e2) list_medium_line_t4_g4_t_ParamLimits

0xf28f,	// (0x000694e2) list_medium_line_t4_g4_t

0x351a,	// (0x0005d76d) chi_dic_find_pane_g1

0x4447,	// (0x0005e69a) main_tport_pane

0x6e74,	// (0x000610c7) list_medium_line_plain_t1

0x6f54,	// (0x000611a7) list_medium_line_t2_g2_g1_ParamLimits

0x6f54,	// (0x000611a7) list_medium_line_t2_g2_g1

0x6f60,	// (0x000611b3) list_medium_line_t2_g2_g2_ParamLimits

0x6f60,	// (0x000611b3) list_medium_line_t2_g2_g2

0x0001,

0xf6ae,	// (0x00069901) list_medium_line_t2_g2_g_ParamLimits

0xf6ae,	// (0x00069901) list_medium_line_t2_g2_g

0x6f6c,	// (0x000611bf) list_medium_line_t2_g2_t1_ParamLimits

0x6f6c,	// (0x000611bf) list_medium_line_t2_g2_t1

0x6f86,	// (0x000611d9) list_medium_line_t2_g2_t2_ParamLimits

0x6f86,	// (0x000611d9) list_medium_line_t2_g2_t2

0x0001,

0xf6b3,	// (0x00069906) list_medium_line_t2_g2_t_ParamLimits

0xf6b3,	// (0x00069906) list_medium_line_t2_g2_t

0x9e40,	// (0x00064093) aid_sp_fs_list_icon_a_sm

0x9e48,	// (0x0006409b) aid_sp_fs_list_icon_d

0x9e50,	// (0x000640a3) aid_sp_fs_text_primary

0x9f48,	// (0x0006419b) aid_sp_fs_text_secondary

0x7622,	// (0x00061875) list_medium_line

0x7622,	// (0x00061875) list_medium_line_g2

0x7622,	// (0x00061875) list_medium_line_g3

0x7622,	// (0x00061875) list_medium_line_plain

0x7622,	// (0x00061875) list_medium_line_plain_t2

0x7622,	// (0x00061875) list_medium_line_plain_t3

0x7622,	// (0x00061875) list_medium_line_right_icon

0x7622,	// (0x00061875) list_medium_line_right_iconx2

0x7622,	// (0x00061875) list_medium_line_t2

0x7622,	// (0x00061875) list_medium_line_t2_g2

0x7622,	// (0x00061875) list_medium_line_t2_g3

0x7622,	// (0x00061875) list_medium_line_t2_right_icon

0x7622,	// (0x00061875) list_medium_line_t2_right_iconx2

0x7622,	// (0x00061875) list_medium_line_t3

0x7622,	// (0x00061875) list_medium_line_t3_g2

0x7622,	// (0x00061875) list_medium_line_t3_g3

0x7622,	// (0x00061875) list_medium_line_t3_right_iconx2

0x762b,	// (0x0006187e) list_medium_line_t4_g4

0x7634,	// (0x00061887) list_medium_line_x2

0x7634,	// (0x00061887) list_medium_line_x2_t2_g2

0x7634,	// (0x00061887) list_medium_line_x2_t2_g3

0x7634,	// (0x00061887) list_medium_line_x2_t2_g4

0x7634,	// (0x00061887) list_medium_line_x2_t3

0x7634,	// (0x00061887) list_medium_line_x2_t3_g2

0x7634,	// (0x00061887) list_medium_line_x2_t3_g3

0x7634,	// (0x00061887) list_medium_line_x2_t3_g4

0x7634,	// (0x00061887) list_medium_line_x2_t4_g2

0x7634,	// (0x00061887) list_medium_line_x2_t4_g4

0x763d,	// (0x00061890) list_medium_line_x3

0x763d,	// (0x00061890) list_medium_line_x3_t4

0x763d,	// (0x00061890) list_medium_line_x3_t4_g4

0x762b,	// (0x0006187e) list_medium_line_x4_t4

0x762b,	// (0x0006187e) list_medium_line_x4_t4_g7

0x762b,	// (0x0006187e) list_medium_line_x4_t5

0x7646,	// (0x00061899) list_single_fs_dyc_pane_ParamLimits

0x7646,	// (0x00061899) list_single_fs_dyc_pane

0x1f45,	// (0x0005c198) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1f45,	// (0x0005c198) list_medium_line_x4_t4_g7_g1

0x7db9,	// (0x0006200c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7db9,	// (0x0006200c) list_medium_line_x4_t4_g7_g2

0x7dc5,	// (0x00062018) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7dc5,	// (0x00062018) list_medium_line_x4_t4_g7_g3

0x7dd4,	// (0x00062027) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7dd4,	// (0x00062027) list_medium_line_x4_t4_g7_g4

0x7de0,	// (0x00062033) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7de0,	// (0x00062033) list_medium_line_x4_t4_g7_g5

0x7def,	// (0x00062042) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7def,	// (0x00062042) list_medium_line_x4_t4_g7_g6

0x7dfe,	// (0x00062051) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7dfe,	// (0x00062051) list_medium_line_x4_t4_g7_g7

0x0006,

0xf825,	// (0x00069a78) list_medium_line_x4_t4_g7_g_ParamLimits

0xf825,	// (0x00069a78) list_medium_line_x4_t4_g7_g

0x7e0a,	// (0x0006205d) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7e0a,	// (0x0006205d) list_medium_line_x4_t4_g7_t1

0x7e1f,	// (0x00062072) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7e1f,	// (0x00062072) list_medium_line_x4_t4_g7_t2

0x7e34,	// (0x00062087) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7e34,	// (0x00062087) list_medium_line_x4_t4_g7_t3

0x7e49,	// (0x0006209c) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7e49,	// (0x0006209c) list_medium_line_x4_t4_g7_t4

0x7e5b,	// (0x000620ae) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7e5b,	// (0x000620ae) list_medium_line_x4_t4_g7_t5

0x0004,

0xf834,	// (0x00069a87) list_medium_line_x4_t4_g7_t_ParamLimits

0xf834,	// (0x00069a87) list_medium_line_x4_t4_g7_t

0x7e6d,	// (0x000620c0) list_single_dyc_row_pane_ParamLimits

0x7e6d,	// (0x000620c0) list_single_dyc_row_pane

0x8543,	// (0x00062796) call5_gesture_pane_ParamLimits

0x8543,	// (0x00062796) call5_gesture_pane

0x8577,	// (0x000627ca) call5_windows_pane_ParamLimits

0x8577,	// (0x000627ca) call5_windows_pane

0x85ca,	// (0x0006281d) call5_swipe_1_pane_cp_ParamLimits

0x85ca,	// (0x0006281d) call5_swipe_1_pane_cp

0x85d6,	// (0x00062829) call5_swipe_2_pane_cp_ParamLimits

0x85d6,	// (0x00062829) call5_swipe_2_pane_cp

0xbf6b,	// (0x000661be) call5_image_pane_cp

0x85e2,	// (0x00062835) popup_call5_audio_first_window_cp_ParamLimits

0x85e2,	// (0x00062835) popup_call5_audio_first_window_cp

0xac40,	// (0x00064e93) call5_swipe_1_pane_g1_cp_ParamLimits

0xac40,	// (0x00064e93) call5_swipe_1_pane_g1_cp

0xacad,	// (0x00064f00) call5_swipe_1_pane_g2_cp

0xac59,	// (0x00064eac) call5_swipe_1_pane_t1_cp_ParamLimits

0xac59,	// (0x00064eac) call5_swipe_1_pane_t1_cp

0xac40,	// (0x00064e93) call5_swipe_2_pane_g1_cp_ParamLimits

0xac40,	// (0x00064e93) call5_swipe_2_pane_g1_cp

0xacb5,	// (0x00064f08) call5_swipe_2_pane_g2_cp

0xacbd,	// (0x00064f10) call5_swipe_2_pane_t1_cp_ParamLimits

0xacbd,	// (0x00064f10) call5_swipe_2_pane_t1_cp

0xbdd4,	// (0x00066027) main_sp_fs_email_pane

0xacd2,	// (0x00064f25) main_sp_fs_listscroll_pane_te

0x85f0,	// (0x00062843) popup_sp_fs_action_menu_pane_ParamLimits

0x85f0,	// (0x00062843) popup_sp_fs_action_menu_pane

0xe1e3,	// (0x00068436) bg_sp_fs_ctrlbar_pane_g1

0xacdb,	// (0x00064f2e) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xace4,	// (0x00064f37) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xaced,	// (0x00064f40) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe1e3,	// (0x00068436) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x0c01,	// (0x0005ae54) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xdfc8,	// (0x0006821b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xdfc8,	// (0x0006821b) bg_sp_fs_ctrlbar_ddmenu_pane

0xacf6,	// (0x00064f49) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xacf6,	// (0x00064f49) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xad02,	// (0x00064f55) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xad02,	// (0x00064f55) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0c0a,	// (0x0005ae5d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0c0a,	// (0x0005ae5d) main_sp_fs_ctrlbar_ddmenu_pane_g

0xad0e,	// (0x00064f61) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xad0e,	// (0x00064f61) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8632,	// (0x00062885) list_medium_line_t2_right_icon_g1

0x863a,	// (0x0006288d) list_medium_line_t2_right_icon_t1

0x864a,	// (0x0006289d) list_medium_line_t2_right_icon_t2

0x0001,

0xf8a1,	// (0x00069af4) list_medium_line_t2_right_icon_t

0xdddb,	// (0x0006802e) bg_sp_fs_ctrlbar_pane_ParamLimits

0xdddb,	// (0x0006802e) bg_sp_fs_ctrlbar_pane

0x86af,	// (0x00062902) main_sp_fs_ctrlbar_button_pane_cp01

0x86b7,	// (0x0006290a) main_sp_fs_ctrlbar_ddmenu_pane

0xad60,	// (0x00064fb3) main_sp_fs_ctrlbar_pane_g1

0xad6c,	// (0x00064fbf) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0c14,	// (0x0005ae67) main_sp_fs_ctrlbar_pane_g

0xad78,	// (0x00064fcb) main_sp_fs_ctrlbar_pane_t1

0x86c1,	// (0x00062914) main_sp_fs_ctrlbar_pane

0x86d7,	// (0x0006292a) main_sp_fs_listscroll_pane_te_cp01

0x86e8,	// (0x0006293b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x86e8,	// (0x0006293b) popup_sp_fs_action_menu_pane_cp01

0xbdd4,	// (0x00066027) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xbdd4,	// (0x00066027) bg_sp_fs_highlight_list_pane_cp01

0x9e59,	// (0x000640ac) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x9e59,	// (0x000640ac) sp_fs_action_menu_list_gene_pane_g1

0xada8,	// (0x00064ffb) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xada8,	// (0x00064ffb) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xf8a6,	// (0x00069af9) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xf8a6,	// (0x00069af9) sp_fs_action_menu_list_gene_pane_g

0x9e68,	// (0x000640bb) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x9e68,	// (0x000640bb) sp_fs_action_menu_list_gene_pane_t1

0x9e80,	// (0x000640d3) sp_fs_action_menu_list_gene_pane_ParamLimits

0x9e80,	// (0x000640d3) sp_fs_action_menu_list_gene_pane

0xadb5,	// (0x00065008) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xadb5,	// (0x00065008) popup_sp_fs_action_menu_bg_pane

0x9e9f,	// (0x000640f2) sp_fs_action_menu_list_pane_ParamLimits

0x9e9f,	// (0x000640f2) sp_fs_action_menu_list_pane

0x8712,	// (0x00062965) sp_fs_scroll_pane_cp01_ParamLimits

0x8712,	// (0x00062965) sp_fs_scroll_pane_cp01

0x8738,	// (0x0006298b) list_medium_line_plain_t2_t1

0x8748,	// (0x0006299b) list_medium_line_plain_t2_t2

0x0001,

0xf8ab,	// (0x00069afe) list_medium_line_plain_t2_t

0x8756,	// (0x000629a9) list_medium_line_plain_t3_t1

0x8766,	// (0x000629b9) list_medium_line_plain_t3_t2

0x8774,	// (0x000629c7) list_medium_line_plain_t3_t3

0x0002,

0xf8b0,	// (0x00069b03) list_medium_line_plain_t3_t

0x1f45,	// (0x0005c198) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1f45,	// (0x0005c198) list_medium_line_x2_t2_g2_g1

0x1f5d,	// (0x0005c1b0) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1f5d,	// (0x0005c1b0) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e0,	// (0x00069433) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e0,	// (0x00069433) list_medium_line_x2_t2_g2_g

0x33da,	// (0x0005d62d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x33da,	// (0x0005d62d) list_medium_line_x2_t2_g2_t1

0x1f90,	// (0x0005c1e3) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1f90,	// (0x0005c1e3) list_medium_line_x2_t2_g2_t2

0x0001,

0xf8b7,	// (0x00069b0a) list_medium_line_x2_t2_g2_t_ParamLimits

0xf8b7,	// (0x00069b0a) list_medium_line_x2_t2_g2_t

0x1f45,	// (0x0005c198) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1f45,	// (0x0005c198) list_medium_line_x2_t4_g2_g1

0x8782,	// (0x000629d5) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8782,	// (0x000629d5) list_medium_line_x2_t4_g2_g2

0x0001,

0xf8bc,	// (0x00069b0f) list_medium_line_x2_t4_g2_g_ParamLimits

0xf8bc,	// (0x00069b0f) list_medium_line_x2_t4_g2_g

0x8794,	// (0x000629e7) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8794,	// (0x000629e7) list_medium_line_x2_t4_g2_t1

0x87ae,	// (0x00062a01) list_medium_line_x2_t4_g2_t2_ParamLimits

0x87ae,	// (0x00062a01) list_medium_line_x2_t4_g2_t2

0x87c4,	// (0x00062a17) list_medium_line_x2_t4_g2_t3_ParamLimits

0x87c4,	// (0x00062a17) list_medium_line_x2_t4_g2_t3

0x1f90,	// (0x0005c1e3) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1f90,	// (0x0005c1e3) list_medium_line_x2_t4_g2_t4

0x0003,

0xf8c1,	// (0x00069b14) list_medium_line_x2_t4_g2_t_ParamLimits

0xf8c1,	// (0x00069b14) list_medium_line_x2_t4_g2_t

0x87d9,	// (0x00062a2c) list_medium_line_t3_right_iconx2_g1

0x8632,	// (0x00062885) list_medium_line_t3_right_iconx2_g2

0x87e1,	// (0x00062a34) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf8ca,	// (0x00069b1d) list_medium_line_t3_right_iconx2_g

0x87e9,	// (0x00062a3c) list_medium_line_t3_right_iconx2_t1

0x87f9,	// (0x00062a4c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xf8d1,	// (0x00069b24) list_medium_line_t3_right_iconx2_t

0x1f45,	// (0x0005c198) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1f45,	// (0x0005c198) list_medium_line_x3_t4_g4_g1

0x1f51,	// (0x0005c1a4) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1f51,	// (0x0005c1a4) list_medium_line_x3_t4_g4_g2

0x1ff6,	// (0x0005c249) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1ff6,	// (0x0005c249) list_medium_line_x3_t4_g4_g3

0x8807,	// (0x00062a5a) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8807,	// (0x00062a5a) list_medium_line_x3_t4_g4_g4

0x0003,

0xf8d6,	// (0x00069b29) list_medium_line_x3_t4_g4_g_ParamLimits

0xf8d6,	// (0x00069b29) list_medium_line_x3_t4_g4_g

0x8813,	// (0x00062a66) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8813,	// (0x00062a66) list_medium_line_x3_t4_g4_t1

0x882a,	// (0x00062a7d) list_medium_line_x3_t4_g4_t2_ParamLimits

0x882a,	// (0x00062a7d) list_medium_line_x3_t4_g4_t2

0x33ef,	// (0x0005d642) list_medium_line_x3_t4_g4_t3_ParamLimits

0x33ef,	// (0x0005d642) list_medium_line_x3_t4_g4_t3

0x883f,	// (0x00062a92) list_medium_line_x3_t4_g4_t4_ParamLimits

0x883f,	// (0x00062a92) list_medium_line_x3_t4_g4_t4

0x0003,

0xf8df,	// (0x00069b32) list_medium_line_x3_t4_g4_t_ParamLimits

0xf8df,	// (0x00069b32) list_medium_line_x3_t4_g4_t

0x885c,	// (0x00062aaf) list_single_dyc_row_text_pane_t1_ParamLimits

0x885c,	// (0x00062aaf) list_single_dyc_row_text_pane_t1

0x8893,	// (0x00062ae6) list_single_dyc_row_text_pane_t2_ParamLimits

0x8893,	// (0x00062ae6) list_single_dyc_row_text_pane_t2

0x9ebf,	// (0x00064112) list_single_dyc_row_text_pane_t3_ParamLimits

0x9ebf,	// (0x00064112) list_single_dyc_row_text_pane_t3

0x0005,

0xf8e8,	// (0x00069b3b) list_single_dyc_row_text_pane_t_ParamLimits

0xf8e8,	// (0x00069b3b) list_single_dyc_row_text_pane_t

0x9ee3,	// (0x00064136) list_single_dyc_row_pane_g1_ParamLimits

0x9ee3,	// (0x00064136) list_single_dyc_row_pane_g1

0x9eef,	// (0x00064142) list_single_dyc_row_pane_g2_ParamLimits

0x9eef,	// (0x00064142) list_single_dyc_row_pane_g2

0x9efb,	// (0x0006414e) list_single_dyc_row_pane_g3_ParamLimits

0x9efb,	// (0x0006414e) list_single_dyc_row_pane_g3

0x9f07,	// (0x0006415a) list_single_dyc_row_pane_g4_ParamLimits

0x9f07,	// (0x0006415a) list_single_dyc_row_pane_g4

0x0003,

0xf8f5,	// (0x00069b48) list_single_dyc_row_pane_g_ParamLimits

0xf8f5,	// (0x00069b48) list_single_dyc_row_pane_g

0x9f13,	// (0x00064166) list_single_dyc_row_text_pane_ParamLimits

0x9f13,	// (0x00064166) list_single_dyc_row_text_pane

0xb130,	// (0x00065383) bg_sp_fs_scroll_pane

0xadc3,	// (0x00065016) thumb_sp_fs_scroll_pane

0x6f54,	// (0x000611a7) list_medium_line_g1_ParamLimits

0x6f54,	// (0x000611a7) list_medium_line_g1

0x89b6,	// (0x00062c09) list_medium_line_t1_ParamLimits

0x89b6,	// (0x00062c09) list_medium_line_t1

0x1f45,	// (0x0005c198) list_medium_line_x2_g1_ParamLimits

0x1f45,	// (0x0005c198) list_medium_line_x2_g1

0x1f51,	// (0x0005c1a4) list_medium_line_x2_g2_ParamLimits

0x1f51,	// (0x0005c1a4) list_medium_line_x2_g2

0x0001,

0xf8fe,	// (0x00069b51) list_medium_line_x2_g_ParamLimits

0xf8fe,	// (0x00069b51) list_medium_line_x2_g

0x9f32,	// (0x00064185) list_medium_line_x2_t1_ParamLimits

0x9f32,	// (0x00064185) list_medium_line_x2_t1

0x1f45,	// (0x0005c198) list_medium_line_x3_g1_ParamLimits

0x1f45,	// (0x0005c198) list_medium_line_x3_g1

0x1f51,	// (0x0005c1a4) list_medium_line_x3_g2_ParamLimits

0x1f51,	// (0x0005c1a4) list_medium_line_x3_g2

0x0001,

0xf8fe,	// (0x00069b51) list_medium_line_x3_g_ParamLimits

0xf8fe,	// (0x00069b51) list_medium_line_x3_g

0x9f32,	// (0x00064185) list_medium_line_x3_t1_ParamLimits

0x9f32,	// (0x00064185) list_medium_line_x3_t1

0xadcc,	// (0x0006501f) thumb_sp_fs_scroll_pane_g1

0xadd5,	// (0x00065028) thumb_sp_fs_scroll_pane_g2

0xadde,	// (0x00065031) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0c7b,	// (0x0005aece) thumb_sp_fs_scroll_pane_g

0xadcc,	// (0x0006501f) bg_sp_fs_scroll_pane_g1

0xadd5,	// (0x00065028) bg_sp_fs_scroll_pane_g2

0xadde,	// (0x00065031) bg_sp_fs_scroll_pane_g3

0x0002,

0x0c7b,	// (0x0005aece) bg_sp_fs_scroll_pane_g

0x1f45,	// (0x0005c198) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1f45,	// (0x0005c198) list_medium_line_x2_t3_g4_g1

0x1fea,	// (0x0005c23d) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1fea,	// (0x0005c23d) list_medium_line_x2_t3_g4_g2

0x1f51,	// (0x0005c1a4) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1f51,	// (0x0005c1a4) list_medium_line_x2_t3_g4_g3

0x1f5d,	// (0x0005c1b0) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1f5d,	// (0x0005c1b0) list_medium_line_x2_t3_g4_g4

0x0003,

0xf244,	// (0x00069497) list_medium_line_x2_t3_g4_g_ParamLimits

0xf244,	// (0x00069497) list_medium_line_x2_t3_g4_g

0x89cb,	// (0x00062c1e) list_medium_line_x2_t3_g4_t1_ParamLimits

0x89cb,	// (0x00062c1e) list_medium_line_x2_t3_g4_t1

0x89e1,	// (0x00062c34) list_medium_line_x2_t3_g4_t2_ParamLimits

0x89e1,	// (0x00062c34) list_medium_line_x2_t3_g4_t2

0x1f90,	// (0x0005c1e3) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1f90,	// (0x0005c1e3) list_medium_line_x2_t3_g4_t3

0x0002,

0xf903,	// (0x00069b56) list_medium_line_x2_t3_g4_t_ParamLimits

0xf903,	// (0x00069b56) list_medium_line_x2_t3_g4_t

0x6f54,	// (0x000611a7) list_medium_line_g2_g1_ParamLimits

0x6f54,	// (0x000611a7) list_medium_line_g2_g1

0x6f60,	// (0x000611b3) list_medium_line_g2_g2_ParamLimits

0x6f60,	// (0x000611b3) list_medium_line_g2_g2

0x0001,

0xf6ae,	// (0x00069901) list_medium_line_g2_g_ParamLimits

0xf6ae,	// (0x00069901) list_medium_line_g2_g

0x89fb,	// (0x00062c4e) list_medium_line_g2_t1_ParamLimits

0x89fb,	// (0x00062c4e) list_medium_line_g2_t1

0x6f54,	// (0x000611a7) list_medium_line_t3_g2_g1_ParamLimits

0x6f54,	// (0x000611a7) list_medium_line_t3_g2_g1

0x6f60,	// (0x000611b3) list_medium_line_t3_g2_g2_ParamLimits

0x6f60,	// (0x000611b3) list_medium_line_t3_g2_g2

0x0001,

0xf6ae,	// (0x00069901) list_medium_line_t3_g2_g_ParamLimits

0xf6ae,	// (0x00069901) list_medium_line_t3_g2_g

0x8a10,	// (0x00062c63) list_medium_line_t3_g2_t1_ParamLimits

0x8a10,	// (0x00062c63) list_medium_line_t3_g2_t1

0x8a2a,	// (0x00062c7d) list_medium_line_t3_g2_t2_ParamLimits

0x8a2a,	// (0x00062c7d) list_medium_line_t3_g2_t2

0x8a40,	// (0x00062c93) list_medium_line_t3_g2_t3_ParamLimits

0x8a40,	// (0x00062c93) list_medium_line_t3_g2_t3

0x0002,

0xf90a,	// (0x00069b5d) list_medium_line_t3_g2_t_ParamLimits

0xf90a,	// (0x00069b5d) list_medium_line_t3_g2_t

0x8632,	// (0x00062885) list_medium_line_right_icon_g1

0x8a56,	// (0x00062ca9) list_medium_line_right_icon_t1

0x6f54,	// (0x000611a7) list_medium_line_t2_g1_ParamLimits

0x6f54,	// (0x000611a7) list_medium_line_t2_g1

0x8a64,	// (0x00062cb7) list_medium_line_t2_t1_ParamLimits

0x8a64,	// (0x00062cb7) list_medium_line_t2_t1

0x8a7e,	// (0x00062cd1) list_medium_line_t2_t2_ParamLimits

0x8a7e,	// (0x00062cd1) list_medium_line_t2_t2

0x0001,

0xf911,	// (0x00069b64) list_medium_line_t2_t_ParamLimits

0xf911,	// (0x00069b64) list_medium_line_t2_t

0x6f54,	// (0x000611a7) list_medium_line_t3_g1_ParamLimits

0x6f54,	// (0x000611a7) list_medium_line_t3_g1

0x8a93,	// (0x00062ce6) list_medium_line_t3_t1_ParamLimits

0x8a93,	// (0x00062ce6) list_medium_line_t3_t1

0x8aad,	// (0x00062d00) list_medium_line_t3_t2_ParamLimits

0x8aad,	// (0x00062d00) list_medium_line_t3_t2

0x8ac3,	// (0x00062d16) list_medium_line_t3_t3_ParamLimits

0x8ac3,	// (0x00062d16) list_medium_line_t3_t3

0x0002,

0xf916,	// (0x00069b69) list_medium_line_t3_t_ParamLimits

0xf916,	// (0x00069b69) list_medium_line_t3_t

0x6f54,	// (0x000611a7) list_medium_line_g3_g1_ParamLimits

0x6f54,	// (0x000611a7) list_medium_line_g3_g1

0x8ad8,	// (0x00062d2b) list_medium_line_g3_g2_ParamLimits

0x8ad8,	// (0x00062d2b) list_medium_line_g3_g2

0x6f60,	// (0x000611b3) list_medium_line_g3_g3_ParamLimits

0x6f60,	// (0x000611b3) list_medium_line_g3_g3

0x0002,

0xf91d,	// (0x00069b70) list_medium_line_g3_g_ParamLimits

0xf91d,	// (0x00069b70) list_medium_line_g3_g

0x8ae4,	// (0x00062d37) list_medium_line_g3_t1_ParamLimits

0x8ae4,	// (0x00062d37) list_medium_line_g3_t1

0x6f54,	// (0x000611a7) list_medium_line_t2_g3_g1_ParamLimits

0x6f54,	// (0x000611a7) list_medium_line_t2_g3_g1

0x8ad8,	// (0x00062d2b) list_medium_line_t2_g3_g2_ParamLimits

0x8ad8,	// (0x00062d2b) list_medium_line_t2_g3_g2

0x6f60,	// (0x000611b3) list_medium_line_t2_g3_g3_ParamLimits

0x6f60,	// (0x000611b3) list_medium_line_t2_g3_g3

0x0002,

0xf91d,	// (0x00069b70) list_medium_line_t2_g3_g_ParamLimits

0xf91d,	// (0x00069b70) list_medium_line_t2_g3_g

0x8af9,	// (0x00062d4c) list_medium_line_t2_g3_t1_ParamLimits

0x8af9,	// (0x00062d4c) list_medium_line_t2_g3_t1

0x8b13,	// (0x00062d66) list_medium_line_t2_g3_t2_ParamLimits

0x8b13,	// (0x00062d66) list_medium_line_t2_g3_t2

0x0001,

0xf924,	// (0x00069b77) list_medium_line_t2_g3_t_ParamLimits

0xf924,	// (0x00069b77) list_medium_line_t2_g3_t

0x6f54,	// (0x000611a7) list_medium_line_t3_g3_g1_ParamLimits

0x6f54,	// (0x000611a7) list_medium_line_t3_g3_g1

0x8ad8,	// (0x00062d2b) list_medium_line_t3_g3_g2_ParamLimits

0x8ad8,	// (0x00062d2b) list_medium_line_t3_g3_g2

0x6f60,	// (0x000611b3) list_medium_line_t3_g3_g3_ParamLimits

0x6f60,	// (0x000611b3) list_medium_line_t3_g3_g3

0x0002,

0xf91d,	// (0x00069b70) list_medium_line_t3_g3_g_ParamLimits

0xf91d,	// (0x00069b70) list_medium_line_t3_g3_g

0x8b29,	// (0x00062d7c) list_medium_line_t3_g3_t1_ParamLimits

0x8b29,	// (0x00062d7c) list_medium_line_t3_g3_t1

0x8b42,	// (0x00062d95) list_medium_line_t3_g3_t2_ParamLimits

0x8b42,	// (0x00062d95) list_medium_line_t3_g3_t2

0x8b58,	// (0x00062dab) list_medium_line_t3_g3_t3_ParamLimits

0x8b58,	// (0x00062dab) list_medium_line_t3_g3_t3

0x0002,

0xf929,	// (0x00069b7c) list_medium_line_t3_g3_t_ParamLimits

0xf929,	// (0x00069b7c) list_medium_line_t3_g3_t

0x87d9,	// (0x00062a2c) list_medium_line_right_iconx2_g1

0x8632,	// (0x00062885) list_medium_line_right_iconx2_g2

0x0001,

0xf930,	// (0x00069b83) list_medium_line_right_iconx2_g

0x8b6e,	// (0x00062dc1) list_medium_line_right_iconx2_t1

0x87d9,	// (0x00062a2c) list_medium_line_t2_right_iconx2_g1

0x8632,	// (0x00062885) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf930,	// (0x00069b83) list_medium_line_t2_right_iconx2_g

0x8b7c,	// (0x00062dcf) list_medium_line_t2_right_iconx2_t1

0x8b8c,	// (0x00062ddf) list_medium_line_t2_right_iconx2_t2

0x0001,

0xf935,	// (0x00069b88) list_medium_line_t2_right_iconx2_t

0x8b9a,	// (0x00062ded) list_medium_line_x4_t4_t1

0x8ba8,	// (0x00062dfb) list_medium_line_x4_t4_t2

0x8bb8,	// (0x00062e0b) list_medium_line_x4_t4_t3

0x8bc8,	// (0x00062e1b) list_medium_line_x4_t4_t4

0x0003,

0xf93a,	// (0x00069b8d) list_medium_line_x4_t4_t

0x8c02,	// (0x00062e55) tport_appsw_pane_ParamLimits

0x8c02,	// (0x00062e55) tport_appsw_pane

0x8c10,	// (0x00062e63) tport_contact_pane_ParamLimits

0x8c10,	// (0x00062e63) tport_contact_pane

0x8c20,	// (0x00062e73) tport_listscroll_pane_ParamLimits

0x8c20,	// (0x00062e73) tport_listscroll_pane

0x8c30,	// (0x00062e83) cell_tport_appsw_pane_ParamLimits

0x8c30,	// (0x00062e83) cell_tport_appsw_pane

0xe4d4,	// (0x00068727) tport_appsw_pane_g1_ParamLimits

0xe4d4,	// (0x00068727) tport_appsw_pane_g1

0xade7,	// (0x0006503a) tport_contact_pane_g1

0xa792,	// (0x000649e5) tport_contact_pane_t1

0xadf0,	// (0x00065043) tport_contact_pane_t2

0x0001,

0x0cc2,	// (0x0005af15) tport_contact_pane_t

0xadfe,	// (0x00065051) list_tport_pane

0xae07,	// (0x0006505a) scroll_pane_cp_030

0x8c63,	// (0x00062eb6) cell_tport_appsw_pane_g1

0x8c73,	// (0x00062ec6) cell_tport_appsw_pane_t1

0x8c81,	// (0x00062ed4) grid_highlight_pane_cp019

0x8c89,	// (0x00062edc) list_tport_double_graphic_pane_ParamLimits

0x8c89,	// (0x00062edc) list_tport_double_graphic_pane

0xbdd4,	// (0x00066027) list_highlight_pane_cp023_ParamLimits

0xbdd4,	// (0x00066027) list_highlight_pane_cp023

0x8c9a,	// (0x00062eed) list_tport_double_graphic_pane_g1_ParamLimits

0x8c9a,	// (0x00062eed) list_tport_double_graphic_pane_g1

0x8ca7,	// (0x00062efa) list_tport_double_graphic_pane_t1_ParamLimits

0x8ca7,	// (0x00062efa) list_tport_double_graphic_pane_t1

0x8cbc,	// (0x00062f0f) list_tport_double_graphic_pane_t2_ParamLimits

0x8cbc,	// (0x00062f0f) list_tport_double_graphic_pane_t2

0x0001,

0xf94a,	// (0x00069b9d) list_tport_double_graphic_pane_t_ParamLimits

0xf94a,	// (0x00069b9d) list_tport_double_graphic_pane_t

0xb130,	// (0x00065383) main_cale_note_pane

0x6724,	// (0x00060977) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6724,	// (0x00060977) cell_vitu2_function_top_wide_pane_cp01

0x821a,	// (0x0006246d) wait_bar_pane_cp05_ParamLimits

0xbdd4,	// (0x00066027) listscroll_cmail_pane

0xae10,	// (0x00065063) list_cmail_pane

0x8cce,	// (0x00062f21) list_cmail_body_pane

0x8cf5,	// (0x00062f48) list_single_cmail_header_caption_pane

0x8d20,	// (0x00062f73) list_single_cmail_header_detail_pane_ParamLimits

0x8d20,	// (0x00062f73) list_single_cmail_header_detail_pane

0xae20,	// (0x00065073) list_single_cmail_header_caption_pane_t1

0x8d56,	// (0x00062fa9) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d56,	// (0x00062fa9) list_single_cmail_header_detail_pane_g1

0xa213,	// (0x00064466) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa213,	// (0x00064466) list_single_cmail_header_detail_pane_g2

0x0002,

0xf94f,	// (0x00069ba2) list_single_cmail_header_detail_pane_g_ParamLimits

0xf94f,	// (0x00069ba2) list_single_cmail_header_detail_pane_g

0xa21f,	// (0x00064472) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa21f,	// (0x00064472) list_single_cmail_header_detail_pane_t1

0xa27f,	// (0x000644d2) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa27f,	// (0x000644d2) list_single_cmail_header_editor_pane_bg

0xa8ef,	// (0x00064b42) list_cmail_body_pane_g1

0xae44,	// (0x00065097) list_cmail_body_pane_t1

0xec3c,	// (0x00068e8f) list_single_cmail_header_editor_pane_bg_g1

0xc1c4,	// (0x00066417) list_single_cmail_header_editor_pane_bg_g1_copy1

0xec4c,	// (0x00068e9f) list_single_cmail_header_editor_pane_bg_g1_copy2

0xec44,	// (0x00068e97) list_single_cmail_header_editor_pane_bg_g1_copy3

0xee7b,	// (0x000690ce) list_single_cmail_header_editor_pane_bg_g1_copy4

0xec6c,	// (0x00068ebf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xec5c,	// (0x00068eaf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xec64,	// (0x00068eb7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc1a4,	// (0x000663f7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8d6c,	// (0x00062fbf) calenote_gesture_pane_ParamLimits

0x8d6c,	// (0x00062fbf) calenote_gesture_pane

0x8d86,	// (0x00062fd9) calenote_window_pane_ParamLimits

0x8d86,	// (0x00062fd9) calenote_window_pane

0xae52,	// (0x000650a5) popup_note_window_cp01

0x8d9e,	// (0x00062ff1) calenote_swipe_1_pane_ParamLimits

0x8d9e,	// (0x00062ff1) calenote_swipe_1_pane

0x85d6,	// (0x00062829) calenote_swipe_2_pane_ParamLimits

0x85d6,	// (0x00062829) calenote_swipe_2_pane

0xac40,	// (0x00064e93) calenote_swipe_1_pane_g1_ParamLimits

0xac40,	// (0x00064e93) calenote_swipe_1_pane_g1

0xac4d,	// (0x00064ea0) calenote_swipe_1_pane_g2_ParamLimits

0xac4d,	// (0x00064ea0) calenote_swipe_1_pane_g2

0x0001,

0x0bf7,	// (0x0005ae4a) calenote_swipe_1_pane_g_ParamLimits

0x0bf7,	// (0x0005ae4a) calenote_swipe_1_pane_g

0xae64,	// (0x000650b7) calenote_swipe_1_pane_t1_ParamLimits

0xae64,	// (0x000650b7) calenote_swipe_1_pane_t1

0xac40,	// (0x00064e93) calenote_swipe_2_pane_g1_ParamLimits

0xac40,	// (0x00064e93) calenote_swipe_2_pane_g1

0xae83,	// (0x000650d6) calenote_swipe_2_pane_g2_ParamLimits

0xae83,	// (0x000650d6) calenote_swipe_2_pane_g2

0x0001,

0x0cdf,	// (0x0005af32) calenote_swipe_2_pane_g_ParamLimits

0x0cdf,	// (0x0005af32) calenote_swipe_2_pane_g

0xae8f,	// (0x000650e2) calenote_swipe_2_pane_t1_ParamLimits

0xae8f,	// (0x000650e2) calenote_swipe_2_pane_t1

0xb130,	// (0x00065383) main_mup_navstr_pane

0x5442,	// (0x0005f695) main_mup3_pane_t7_ParamLimits

0x5442,	// (0x0005f695) main_mup3_pane_t7

0x5e48,	// (0x0006009b) main_mp4_pane_g6_ParamLimits

0x5e48,	// (0x0006009b) main_mp4_pane_g6

0x61c8,	// (0x0006041b) main_image3_pane_t4_ParamLimits

0x61c8,	// (0x0006041b) main_image3_pane_t4

0x8db1,	// (0x00063004) popup_navstr_preview_pane_ParamLimits

0x8db1,	// (0x00063004) popup_navstr_preview_pane

0x8dbd,	// (0x00063010) scroll_navstr_pane_ParamLimits

0x8dbd,	// (0x00063010) scroll_navstr_pane

0xb130,	// (0x00065383) bg_popup_preview_window_pane_cp04

0xaeb6,	// (0x00065109) popup_navstr_preview_pane_t1

0x8dc9,	// (0x0006301c) scroll_navstr_pane_g1_ParamLimits

0x8dc9,	// (0x0006301c) scroll_navstr_pane_g1

0x8dd6,	// (0x00063029) scroll_navstr_pane_t1_ParamLimits

0x8dd6,	// (0x00063029) scroll_navstr_pane_t1

0xae5b,	// (0x000650ae) bg_button_pane_cp014

0xae5b,	// (0x000650ae) bg_button_pane_cp030

0x84e9,	// (0x0006273c) list_double_fisheye_pane_g4_ParamLimits

0x84e9,	// (0x0006273c) list_double_fisheye_pane_g4

0x84f5,	// (0x00062748) list_double_fisheye_pane_g5_ParamLimits

0x84f5,	// (0x00062748) list_double_fisheye_pane_g5

0xd744,	// (0x00067997) sp_fs_scroll_pane_cp03

0xad60,	// (0x00064fb3) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xad6c,	// (0x00064fbf) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0c14,	// (0x0005ae67) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xad78,	// (0x00064fcb) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xae18,	// (0x0006506b) sp_fs_scroll_pane_cp02

0xbeaa,	// (0x000660fd) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xbeaa,	// (0x000660fd) popup_sp_fs_calendar_preview_list_single_pane

0xb130,	// (0x00065383) main_cam6_pano_pane

0x442b,	// (0x0005e67e) main_mup3_pane_ParamLimits

0xb130,	// (0x00065383) main_phacti_pane

0x80ef,	// (0x00062342) bg_button_pane_cp11

0x8107,	// (0x0006235a) main_mobtv_info_pane_g2_ParamLimits

0x8107,	// (0x0006235a) main_mobtv_info_pane_g2

0x0001,

0xf85d,	// (0x00069ab0) main_mobtv_info_pane_g_ParamLimits

0xf85d,	// (0x00069ab0) main_mobtv_info_pane_g

0x82b9,	// (0x0006250c) sc_clock_pane_t5_ParamLimits

0x82b9,	// (0x0006250c) sc_clock_pane_t5

0x835a,	// (0x000625ad) main_radioblah_pane_g1_ParamLimits

0xab8c,	// (0x00064ddf) main_radioblah_pane_t3_ParamLimits

0xab8c,	// (0x00064ddf) main_radioblah_pane_t3

0xaba4,	// (0x00064df7) main_radioblah_pane_t4_ParamLimits

0xaba4,	// (0x00064df7) main_radioblah_pane_t4

0x8378,	// (0x000625cb) main_radioblah_text_pane_ParamLimits

0x8378,	// (0x000625cb) main_radioblah_text_pane

0x8385,	// (0x000625d8) main_radioblah_info_pane_g1_ParamLimits

0x841a,	// (0x0006266d) main_radioblah_info_pane_t4_ParamLimits

0x841a,	// (0x0006266d) main_radioblah_info_pane_t4

0xbdd4,	// (0x00066027) main_sp_fs_calendar_pane

0x8de8,	// (0x0006303b) main_phacti_pane_g1

0x8df0,	// (0x00063043) phacti_note_pane_ParamLimits

0x8df0,	// (0x00063043) phacti_note_pane

0xaecd,	// (0x00065120) phacti_term_pane_ParamLimits

0xaecd,	// (0x00065120) phacti_term_pane

0xaee2,	// (0x00065135) phacti_note_pane_t1_ParamLimits

0xaee2,	// (0x00065135) phacti_note_pane_t1

0xa296,	// (0x000644e9) phacti_term_pane_g1

0xa29e,	// (0x000644f1) phacti_term_pane_t1_ParamLimits

0xa29e,	// (0x000644f1) phacti_term_pane_t1

0xaef9,	// (0x0006514c) popup_sp_fs_calendar_preview_list_single_pane_g1

0xbf49,	// (0x0006619c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0ce9,	// (0x0005af3c) popup_sp_fs_calendar_preview_list_single_pane_g

0xaf01,	// (0x00065154) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xaf01,	// (0x00065154) popup_sp_fs_calendar_preview_list_single_pane_t1

0xaf17,	// (0x0006516a) aid_popup_sp_fs_bg_corner_pane

0xe1e3,	// (0x00068436) popup_sp_fs_calendar_preview_bg_pane_g1

0xb130,	// (0x00065383) popup_sp_fs_calendar_preview_bg_pane

0xaf1f,	// (0x00065172) popup_sp_fs_calendar_preview_list_pane

0xdddb,	// (0x0006802e) bg_main_sp_fs_cale_pane_ParamLimits

0xdddb,	// (0x0006802e) bg_main_sp_fs_cale_pane

0xa2d1,	// (0x00064524) listscroll_cale_mrui_pane_ParamLimits

0xa2d1,	// (0x00064524) listscroll_cale_mrui_pane

0xa2e6,	// (0x00064539) listscroll_sp_fs_schedule_track_pane

0xa2ef,	// (0x00064542) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa2ef,	// (0x00064542) main_sp_fs_ctrlbar_pane_cp01

0xaf27,	// (0x0006517a) main_sp_fs_ribbon_pane

0xa302,	// (0x00064555) popup_sp_fs_cale_preview_window

0x8e53,	// (0x000630a6) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e53,	// (0x000630a6) list_single_sp_fs_schedule_track_pane

0xf092,	// (0x000692e5) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xf092,	// (0x000692e5) bg_sp_fs_highlight_list_pane_cp03

0x8e75,	// (0x000630c8) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e75,	// (0x000630c8) list_single_sp_fs_schedule_track_pane_g1

0x8e81,	// (0x000630d4) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e81,	// (0x000630d4) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xf960,	// (0x00069bb3) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xf960,	// (0x00069bb3) list_single_sp_fs_schedule_track_pane_g

0x8e8d,	// (0x000630e0) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8e8d,	// (0x000630e0) list_single_sp_fs_schedule_track_pane_t1

0x8ea5,	// (0x000630f8) sp_fs_schedule_track_pane_ParamLimits

0x8ea5,	// (0x000630f8) sp_fs_schedule_track_pane

0xaf2f,	// (0x00065182) sp_fs_schedule_track_pane_g1

0xaf37,	// (0x0006518a) sp_fs_schedule_track_pane_g2

0xaf3f,	// (0x00065192) sp_fs_schedule_track_pane_g3

0xaf47,	// (0x0006519a) sp_fs_schedule_track_pane_g4

0xaf4f,	// (0x000651a2) sp_fs_schedule_track_pane_g5

0x0004,

0xf965,	// (0x00069bb8) sp_fs_schedule_track_pane_g

0xec3c,	// (0x00068e8f) bg_sp_fs_schedule_viewer_highlight_g1

0xc1c4,	// (0x00066417) bg_sp_fs_schedule_viewer_highlight_g2

0xec44,	// (0x00068e97) bg_sp_fs_schedule_viewer_highlight_g3

0xec4c,	// (0x00068e9f) bg_sp_fs_schedule_viewer_highlight_g4

0xee7b,	// (0x000690ce) bg_sp_fs_schedule_viewer_highlight_g5

0xec5c,	// (0x00068eaf) bg_sp_fs_schedule_viewer_highlight_g6

0xec64,	// (0x00068eb7) bg_sp_fs_schedule_viewer_highlight_g7

0xec6c,	// (0x00068ebf) bg_sp_fs_schedule_viewer_highlight_g8

0xc1a4,	// (0x000663f7) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0x0cf3,	// (0x0005af46) bg_sp_fs_schedule_viewer_highlight_g

0xb130,	// (0x00065383) bg_main_sp_fs_ribbon_pane

0x8eb5,	// (0x00063108) main_sp_fs_ribbon_pane_g1

0xaf57,	// (0x000651aa) main_sp_fs_ribbon_pane_t1

0x8ebe,	// (0x00063111) main_sp_fs_ribbon_pane_t2

0xaf66,	// (0x000651b9) main_sp_fs_ribbon_pane_t3

0x0002,

0xf970,	// (0x00069bc3) main_sp_fs_ribbon_pane_t

0xaf75,	// (0x000651c8) main_sp_fs_ribbon_scheduler_pane

0xaf7d,	// (0x000651d0) bg_main_sp_fs_ribbon_pane_g1

0xaf86,	// (0x000651d9) bg_main_sp_fs_ribbon_pane_g2

0xaf8f,	// (0x000651e2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf977,	// (0x00069bca) bg_main_sp_fs_ribbon_pane_g

0xaf97,	// (0x000651ea) main_sp_fs_ribbon_scheduler_pane_g1

0xafa0,	// (0x000651f3) main_sp_fs_ribbon_scheduler_pane_g2

0xafa9,	// (0x000651fc) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf97e,	// (0x00069bd1) main_sp_fs_ribbon_scheduler_pane_g

0xafb2,	// (0x00065205) list_cale_mrui_pane

0x8ecd,	// (0x00063120) sp_fs_scroll_pane_cp07_ParamLimits

0x8ecd,	// (0x00063120) sp_fs_scroll_pane_cp07

0x8ee9,	// (0x0006313c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8ee9,	// (0x0006313c) bg_sp_fs_schedule_viewer_highlight

0xafbf,	// (0x00065212) list_single_sp_fs_schedule_track_pane_cp01

0xafc7,	// (0x0006521a) list_sp_fs_schedule_track_pane

0xafcf,	// (0x00065222) sp_fs_scroll_pane_cp06_ParamLimits

0xafcf,	// (0x00065222) sp_fs_scroll_pane_cp06

0xe1e3,	// (0x00068436) bgmain_sp_fs_calendar_pane_g1

0x8ef6,	// (0x00063149) list_single_cale_mrui_pane_ParamLimits

0x8ef6,	// (0x00063149) list_single_cale_mrui_pane

0xa314,	// (0x00064567) list_single_cale_mrui_row_pane_ParamLimits

0xa314,	// (0x00064567) list_single_cale_mrui_row_pane

0xa321,	// (0x00064574) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa321,	// (0x00064574) list_single_cale_mrui_row_pane_g1

0xa359,	// (0x000645ac) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa359,	// (0x000645ac) list_single_cale_mrui_row_pane_t1

0x8f24,	// (0x00063177) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f24,	// (0x00063177) list_single_cale_mrui_row_pane_t2

0xa36b,	// (0x000645be) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa36b,	// (0x000645be) list_single_cale_mrui_row_pane_t3

0xa39a,	// (0x000645ed) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa39a,	// (0x000645ed) list_single_cale_mrui_row_pane_t4

0x0003,

0xf98c,	// (0x00069bdf) list_single_cale_mrui_row_pane_t_ParamLimits

0xf98c,	// (0x00069bdf) list_single_cale_mrui_row_pane_t

0x8f8a,	// (0x000631dd) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8f8a,	// (0x000631dd) list_single_cmail_header_editor_pane_bg_cp01

0x8faa,	// (0x000631fd) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8faa,	// (0x000631fd) list_single_cmail_header_editor_pane_bg_cp02

0x8fc6,	// (0x00063219) main_radioblah_text_pane_t1_ParamLimits

0x8fc6,	// (0x00063219) main_radioblah_text_pane_t1

0xafee,	// (0x00065241) cam6_indi_pane_cp01

0xaff6,	// (0x00065249) cam6_mode_pane_cp01

0xaffe,	// (0x00065251) cam6_pano_pane

0xb007,	// (0x0006525a) cam6_zoom_pane_cp01

0xb00f,	// (0x00065262) cam6_pano_image_pane

0xb01a,	// (0x0006526d) cam6_pano_pane_g1

0xa8ef,	// (0x00064b42) cam6_pano_pane_g2

0xb023,	// (0x00065276) cam6_pano_pane_g3

0xb02c,	// (0x0006527f) cam6_pano_pane_g4

0xe7cf,	// (0x00068a22) cam6_pano_pane_g5

0xb035,	// (0x00065288) cam6_pano_pane_g6

0xa3c9,	// (0x0006461c) cam6_pano_pane_g7

0xb03f,	// (0x00065292) cam6_pano_pane_g8

0xb048,	// (0x0006529b) cam6_pano_pane_g9

0x0008,

0xf995,	// (0x00069be8) cam6_pano_pane_g

0xb130,	// (0x00065383) main_browser_tag_pane

0xaeae,	// (0x00065101) grid_navstr_albumart_pane

0xb053,	// (0x000652a6) cell_navstr_albumart_pane_ParamLimits

0xb053,	// (0x000652a6) cell_navstr_albumart_pane

0xb073,	// (0x000652c6) cell_navstr_albumart_pane_g1

0xdbec,	// (0x00067e3f) cell_navstr_albumart_pane_g2

0xdbfc,	// (0x00067e4f) cell_navstr_albumart_pane_g3

0xdbf4,	// (0x00067e47) cell_navstr_albumart_pane_g4

0x0003,

0x0d30,	// (0x0005af83) cell_navstr_albumart_pane_g

0x8fe1,	// (0x00063234) bt_list_pane_ParamLimits

0x8fe1,	// (0x00063234) bt_list_pane

0x9001,	// (0x00063254) bt_list_pane_t1

0x9010,	// (0x00063263) bt_list_pane_t2

0x0001,

0xf9a8,	// (0x00069bfb) bt_list_pane_t

0xb130,	// (0x00065383) main_cale_prevew_pane

0x901f,	// (0x00063272) popup_cale_preview_window_ParamLimits

0x901f,	// (0x00063272) popup_cale_preview_window

0xbdd4,	// (0x00066027) bg_popup_preview_window_pane_cp05_ParamLimits

0xbdd4,	// (0x00066027) bg_popup_preview_window_pane_cp05

0xb07b,	// (0x000652ce) list_cale_preview_pane_ParamLimits

0xb07b,	// (0x000652ce) list_cale_preview_pane

0x9038,	// (0x0006328b) list_double_cale_preview_pane_ParamLimits

0x9038,	// (0x0006328b) list_double_cale_preview_pane

0x904a,	// (0x0006329d) list_single_cale_preview_pane_ParamLimits

0x904a,	// (0x0006329d) list_single_cale_preview_pane

0x9060,	// (0x000632b3) list_single_cale_preview_pane_g1

0x9068,	// (0x000632bb) list_single_cale_preview_pane_t1_ParamLimits

0x9068,	// (0x000632bb) list_single_cale_preview_pane_t1

0x907d,	// (0x000632d0) list_double_cale_preview_pane_g1

0x9085,	// (0x000632d8) list_double_cale_preview_pane_t1_ParamLimits

0x9085,	// (0x000632d8) list_double_cale_preview_pane_t1

0x909a,	// (0x000632ed) list_double_cale_preview_pane_t2_ParamLimits

0x909a,	// (0x000632ed) list_double_cale_preview_pane_t2

0x0001,

0xf9ad,	// (0x00069c00) list_double_cale_preview_pane_t_ParamLimits

0xf9ad,	// (0x00069c00) list_double_cale_preview_pane_t

0xb130,	// (0x00065383) main_ezdial_pane

0xbdd4,	// (0x00066027) main_sp_fs_email_pane_ParamLimits

0x8658,	// (0x000628ab) cmail_ddmenu_btn01_pane_ParamLimits

0x8658,	// (0x000628ab) cmail_ddmenu_btn01_pane

0x8675,	// (0x000628c8) cmail_ddmenu_btn02_pane_ParamLimits

0x8675,	// (0x000628c8) cmail_ddmenu_btn02_pane

0x8693,	// (0x000628e6) cmail_ddmenu_btn03_pane_ParamLimits

0x8693,	// (0x000628e6) cmail_ddmenu_btn03_pane

0x86c1,	// (0x00062914) main_sp_fs_ctrlbar_pane_ParamLimits

0x86d7,	// (0x0006292a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8cce,	// (0x00062f21) list_cmail_body_pane_ParamLimits

0xae2e,	// (0x00065081) bg_button_pane_cp12

0xae37,	// (0x0006508a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xae37,	// (0x0006508a) list_single_cmail_header_detail_pane_g3

0xa25b,	// (0x000644ae) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa25b,	// (0x000644ae) list_single_cmail_header_detail_pane_t2

0x0001,

0xf956,	// (0x00069ba9) list_single_cmail_header_detail_pane_t_ParamLimits

0xf956,	// (0x00069ba9) list_single_cmail_header_detail_pane_t

0xa2b3,	// (0x00064506) phacti_term_pane_t2_ParamLimits

0xa2b3,	// (0x00064506) phacti_term_pane_t2

0x0001,

0xf95b,	// (0x00069bae) phacti_term_pane_t_ParamLimits

0xf95b,	// (0x00069bae) phacti_term_pane_t

0xb087,	// (0x000652da) aid_size_list_single_double

0x90b2,	// (0x00063305) popup_ezdial_listscroll_window

0x90d3,	// (0x00063326) popup_number_entry_window_cp01

0xbf6b,	// (0x000661be) bg_popup_call_pane_cp09

0xb093,	// (0x000652e6) ezdial_list_pane

0xb09b,	// (0x000652ee) scroll_pane_cp23

0xdfc8,	// (0x0006821b) bg_button_pane_cp028_ParamLimits

0xdfc8,	// (0x0006821b) bg_button_pane_cp028

0x90e1,	// (0x00063334) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x90e1,	// (0x00063334) cmail_ddmenu_btn01_pane_g1

0x90f1,	// (0x00063344) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x90f1,	// (0x00063344) cmail_ddmenu_btn01_pane_g2

0x0001,

0xf9b2,	// (0x00069c05) cmail_ddmenu_btn01_pane_g_ParamLimits

0xf9b2,	// (0x00069c05) cmail_ddmenu_btn01_pane_g

0xb0a3,	// (0x000652f6) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb0a3,	// (0x000652f6) cmail_ddmenu_btn01_pane_t1

0xdddb,	// (0x0006802e) bg_button_pane_cp029_ParamLimits

0xdddb,	// (0x0006802e) bg_button_pane_cp029

0x90f1,	// (0x00063344) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x90f1,	// (0x00063344) cmail_ddmenu_btn02_pane_g1

0x910a,	// (0x0006335d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x910a,	// (0x0006335d) cmail_ddmenu_btn02_pane_t1

0xf092,	// (0x000692e5) bg_button_pane_cp031_ParamLimits

0xf092,	// (0x000692e5) bg_button_pane_cp031

0x90f1,	// (0x00063344) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x90f1,	// (0x00063344) cmail_ddmenu_btn03_pane_g1

0x910a,	// (0x0006335d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x910a,	// (0x0006335d) cmail_ddmenu_btn03_pane_t1

0x6065,	// (0x000602b8) cell_dialer2_keypad_pane_t1_ParamLimits

0x607f,	// (0x000602d2) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x607f,	// (0x000602d2) cell_dialer2_keypad_pane_t1_copy1

0x7f30,	// (0x00062183) ncimui_group_button_pane

0xbdd4,	// (0x00066027) main_sp_fs_calendar_pane_ParamLimits

0x8cf5,	// (0x00062f48) list_single_cmail_header_caption_pane_ParamLimits

0xa2c8,	// (0x0006451b) aid_recal_txt_sm_pane

0xb130,	// (0x00065383) mian_recal_day_pane

0xa302,	// (0x00064555) popup_sp_fs_cale_preview_window_ParamLimits

0xb0b8,	// (0x0006530b) list_recal_day_pane

0xa3ec,	// (0x0006463f) list_single_recal_day_pane_ParamLimits

0xa3ec,	// (0x0006463f) list_single_recal_day_pane

0xb0df,	// (0x00065332) list_single_recal_day_pane_g1_ParamLimits

0xb0df,	// (0x00065332) list_single_recal_day_pane_g1

0xa3fe,	// (0x00064651) list_single_recal_day_pane_g2_ParamLimits

0xa3fe,	// (0x00064651) list_single_recal_day_pane_g2

0xa40a,	// (0x0006465d) list_single_recal_day_pane_g3_ParamLimits

0xa40a,	// (0x0006465d) list_single_recal_day_pane_g3

0x912e,	// (0x00063381) list_single_recal_day_pane_g4_ParamLimits

0x912e,	// (0x00063381) list_single_recal_day_pane_g4

0xa416,	// (0x00064669) list_single_recal_day_pane_g5_ParamLimits

0xa416,	// (0x00064669) list_single_recal_day_pane_g5

0xa422,	// (0x00064675) list_single_recal_day_pane_g6_ParamLimits

0xa422,	// (0x00064675) list_single_recal_day_pane_g6

0x0004,

0xf9c1,	// (0x00069c14) list_single_recal_day_pane_g_ParamLimits

0xf9c1,	// (0x00069c14) list_single_recal_day_pane_g

0xa436,	// (0x00064689) list_single_recal_day_pane_t1

0xa448,	// (0x0006469b) list_single_recal_day_pane_t2

0x0001,

0xf9cc,	// (0x00069c1f) list_single_recal_day_pane_t

0x9146,	// (0x00063399) ncimui_query_button_pane_ParamLimits

0x9146,	// (0x00063399) ncimui_query_button_pane

0x9156,	// (0x000633a9) ncimui_query_button_pane_t1_ParamLimits

0x9156,	// (0x000633a9) ncimui_query_button_pane_t1

0xb0eb,	// (0x0006533e) ncimui_query_button_pane_t2_ParamLimits

0xb0eb,	// (0x0006533e) ncimui_query_button_pane_t2

0x0001,

0xf9d1,	// (0x00069c24) ncimui_query_button_pane_t_ParamLimits

0xf9d1,	// (0x00069c24) ncimui_query_button_pane_t

0x9169,	// (0x000633bc) query_button_pane_ParamLimits

0x9169,	// (0x000633bc) query_button_pane

0xb130,	// (0x00065383) bg_button_pane_cp0028

0xb0fe,	// (0x00065351) query_button_pane_t1

0x4447,	// (0x0005e69a) main_tport_pane_ParamLimits

0x8bd8,	// (0x00062e2b) bg_popup_window_pane_cp01_ParamLimits

0x8bd8,	// (0x00062e2b) bg_popup_window_pane_cp01

0x8be6,	// (0x00062e39) heading_pane_cp08_ParamLimits

0x8be6,	// (0x00062e39) heading_pane_cp08

0x8bf4,	// (0x00062e47) heading_pane_cp07_ParamLimits

0x8bf4,	// (0x00062e47) heading_pane_cp07

0x8c63,	// (0x00062eb6) cell_tport_appsw_pane_g2

0x0002,

0xf943,	// (0x00069b96) cell_tport_appsw_pane_g

0x9c80,	// (0x00063ed3) input_candi_list_open_g1

0xc387,	// (0x000665da) list_cale_time_pane_g6_ParamLimits

0xc387,	// (0x000665da) list_cale_time_pane_g6

0x4ec4,	// (0x0005f117) aid_size_touch_calib_1_ParamLimits

0x4ec4,	// (0x0005f117) aid_size_touch_calib_1

0x4ed0,	// (0x0005f123) aid_size_touch_calib_2_ParamLimits

0x4ed0,	// (0x0005f123) aid_size_touch_calib_2

0x4ede,	// (0x0005f131) aid_size_touch_calib_3_ParamLimits

0x4ede,	// (0x0005f131) aid_size_touch_calib_3

0x4eee,	// (0x0005f141) aid_size_touch_calib_4_ParamLimits

0x4eee,	// (0x0005f141) aid_size_touch_calib_4

0x4efc,	// (0x0005f14f) main_touch_calib_button_group_pane_ParamLimits

0x4efc,	// (0x0005f14f) main_touch_calib_button_group_pane

0x4f0a,	// (0x0005f15d) main_touch_calib_pane_g1_ParamLimits

0x4f16,	// (0x0005f169) main_touch_calib_pane_g2_ParamLimits

0x4f22,	// (0x0005f175) main_touch_calib_pane_g3_ParamLimits

0x4f2e,	// (0x0005f181) main_touch_calib_pane_g4_ParamLimits

0xf4d8,	// (0x0006972b) main_touch_calib_pane_g_ParamLimits

0x4f3a,	// (0x0005f18d) main_touch_calib_pane_t1_ParamLimits

0x4f53,	// (0x0005f1a6) main_touch_calib_pane_t2_ParamLimits

0x4f6c,	// (0x0005f1bf) main_touch_calib_pane_t3_ParamLimits

0x4f82,	// (0x0005f1d5) main_touch_calib_pane_t4_ParamLimits

0x4f98,	// (0x0005f1eb) main_touch_calib_pane_t5_ParamLimits

0xf4e1,	// (0x00069734) main_touch_calib_pane_t_ParamLimits

0xe56f,	// (0x000687c2) list_single_fp_cale_pane_g3_ParamLimits

0xe56f,	// (0x000687c2) list_single_fp_cale_pane_g3

0x442b,	// (0x0005e67e) bg_button_pane_cp012_ParamLimits

0x442b,	// (0x0005e67e) bg_vkb2_func_pane_cp03_ParamLimits

0x6ed4,	// (0x00061127) cell_vitu2_function_top_pane_g1_ParamLimits

0x442b,	// (0x0005e67e) bg_vkb2_func_pane_cp04_ParamLimits

0x7eb8,	// (0x0006210b) main_ncimui_button_group_pane_ParamLimits

0x7eb8,	// (0x0006210b) main_ncimui_button_group_pane

0x7f1e,	// (0x00062171) main_ncimui_pane_t3_ParamLimits

0x7f1e,	// (0x00062171) main_ncimui_pane_t3

0xaec4,	// (0x00065117) phacti_button_group_pane

0xb087,	// (0x000652da) aid_size_list_single_double_ParamLimits

0x90b2,	// (0x00063305) popup_ezdial_listscroll_window_ParamLimits

0x90d3,	// (0x00063326) popup_number_entry_window_cp01_ParamLimits

0x9176,	// (0x000633c9) phacti_button_pane_ParamLimits

0x9176,	// (0x000633c9) phacti_button_pane

0xb130,	// (0x00065383) bg_button_pane_cp14

0xb10c,	// (0x0006535f) phacti_button_pane_t1

0x9187,	// (0x000633da) main_touch_calib_button_pane_ParamLimits

0x9187,	// (0x000633da) main_touch_calib_button_pane

0xb86d,	// (0x00065ac0) bg_button_pane_cp18_ParamLimits

0xb86d,	// (0x00065ac0) bg_button_pane_cp18

0xb11a,	// (0x0006536d) main_touch_calib_button_pane_t1_ParamLimits

0xb11a,	// (0x0006536d) main_touch_calib_button_pane_t1

0xb8bb,	// (0x00065b0e) main_touch_calib_button_pane_t2_ParamLimits

0xb8bb,	// (0x00065b0e) main_touch_calib_button_pane_t2

0x0001,

0x0d67,	// (0x0005afba) main_touch_calib_button_pane_t_ParamLimits

0x0d67,	// (0x0005afba) main_touch_calib_button_pane_t

0xb130,	// (0x00065383) cell_ncimui_button_pane

0xb130,	// (0x00065383) bg_button_pane_cp032

0xb8d9,	// (0x00065b2c) cell_ncimui_button_pane_t1

0x60db,	// (0x0006032e) image3_infobar_pane_ParamLimits

0x60db,	// (0x0006032e) image3_infobar_pane

0x82db,	// (0x0006252e) fs_bigclock_status_pane_ParamLimits

0x82db,	// (0x0006252e) fs_bigclock_status_pane

0x82e8,	// (0x0006253b) main_fs_bigclock_clock_pane_ParamLimits

0x82e8,	// (0x0006253b) main_fs_bigclock_clock_pane

0x82fc,	// (0x0006254f) main_fs_bigclock_indi_pane_ParamLimits

0x82fc,	// (0x0006254f) main_fs_bigclock_indi_pane

0x8324,	// (0x00062577) main_fs_bigclock_swipe_pane_ParamLimits

0x8324,	// (0x00062577) main_fs_bigclock_swipe_pane

0xb130,	// (0x00065383) main_fs_clock_dumped_data

0xa9fc,	// (0x00064c4f) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xa9fc,	// (0x00064c4f) list_single_fs_bigclock_indicator_pane_g1

0xaa17,	// (0x00064c6a) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xaa17,	// (0x00064c6a) list_single_fs_bigclock_indicator_pane_g2

0xaa31,	// (0x00064c84) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xaa31,	// (0x00064c84) list_single_fs_bigclock_indicator_pane_g3

0xaa4b,	// (0x00064c9e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xaa4b,	// (0x00064c9e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0ba8,	// (0x0005adfb) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0ba8,	// (0x0005adfb) list_single_fs_bigclock_indicator_pane_g

0xaa76,	// (0x00064cc9) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xaa76,	// (0x00064cc9) list_single_fs_bigclock_indicator_pane_t1

0xaa9e,	// (0x00064cf1) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xaa9e,	// (0x00064cf1) list_single_fs_bigclock_indicator_pane_t2

0xaac6,	// (0x00064d19) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xaac6,	// (0x00064d19) list_single_fs_bigclock_indicator_pane_t3

0xaaee,	// (0x00064d41) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xaaee,	// (0x00064d41) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0bb3,	// (0x0005ae06) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0bb3,	// (0x0005ae06) list_single_fs_bigclock_indicator_pane_t

0xb8e7,	// (0x00065b3a) image3_infobar_fav_pane_ParamLimits

0xb8e7,	// (0x00065b3a) image3_infobar_fav_pane

0xb8f7,	// (0x00065b4a) image3_infobar_loc_pane_ParamLimits

0xb8f7,	// (0x00065b4a) image3_infobar_loc_pane

0xb90b,	// (0x00065b5e) image3_infobar_time_pane_ParamLimits

0xb90b,	// (0x00065b5e) image3_infobar_time_pane

0xe1e3,	// (0x00068436) image3_infobar_time_pane_g1

0xb91b,	// (0x00065b6e) image3_infobar_time_pane_t1

0xe1e3,	// (0x00068436) image3_infobar_loc_pane_g1

0xb929,	// (0x00065b7c) image3_infobar_loc_pane_g2

0x0001,

0x0d6c,	// (0x0005afbf) image3_infobar_loc_pane_g

0xb931,	// (0x00065b84) image3_infobar_loc_pane_t1

0xe1e3,	// (0x00068436) image3_infobar_fav_pane_g1

0xb93f,	// (0x00065b92) image3_infobar_fav_pane_g2

0x0001,

0x0d71,	// (0x0005afc4) image3_infobar_fav_pane_g

0xb947,	// (0x00065b9a) fs_bigclock_status_battery_pane

0xb950,	// (0x00065ba3) fs_bigclock_status_signal_pane

0xb959,	// (0x00065bac) fs_bigclock_status_title_pane

0xb962,	// (0x00065bb5) fs_bigclock_status_signal_pane_g1

0xb96b,	// (0x00065bbe) fs_bigclock_status_signal_pane_g2

0x0001,

0x0d76,	// (0x0005afc9) fs_bigclock_status_signal_pane_g

0xb973,	// (0x00065bc6) fs_bigclock_status_battery_pane_g1

0xb97c,	// (0x00065bcf) fs_bigclock_status_battery_pane_g2

0x0001,

0x0d7b,	// (0x0005afce) fs_bigclock_status_battery_pane_g

0xb984,	// (0x00065bd7) fs_bigclock_status_title_pane_t1

0x9197,	// (0x000633ea) main_fs_bigclock_clock_pane_g1

0x9197,	// (0x000633ea) main_fs_bigclock_clock_pane_g2

0x91a4,	// (0x000633f7) main_fs_bigclock_clock_pane_g3

0x91a4,	// (0x000633f7) main_fs_bigclock_clock_pane_g4

0x0003,

0xf9d6,	// (0x00069c29) main_fs_bigclock_clock_pane_g

0x91b0,	// (0x00063403) main_fs_bigclock_clock_pane_t1

0x91c3,	// (0x00063416) main_fs_bigclock_clock_pane_t2

0x0001,

0xf9df,	// (0x00069c32) main_fs_bigclock_clock_pane_t

0xb992,	// (0x00065be5) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb992,	// (0x00065be5) list_single_fs_bigclock_indicator_pane

0xb9a3,	// (0x00065bf6) list_single_fs_bigclock_pane_ParamLimits

0xb9a3,	// (0x00065bf6) list_single_fs_bigclock_pane

0xb9c9,	// (0x00065c1c) main_fs_bigclock_indicator_pane_t1

0xb9d8,	// (0x00065c2b) list_single_fs_bigclock_pane_g1

0xb9e0,	// (0x00065c33) list_single_fs_bigclock_pane_t1

0xe1e3,	// (0x00068436) main_fs_bigclock_swipe_pane_g1

0xba23,	// (0x00065c76) main_fs_bigclock_swipe_pane_g2

0x0001,

0x0d9a,	// (0x0005afed) main_fs_bigclock_swipe_pane_g

0xba2b,	// (0x00065c7e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xba2b,	// (0x00065c7e) main_fs_bigclock_swipe_pane_t1

0x3419,	// (0x0005d66c) call_type_pane_ParamLimits

0xb130,	// (0x00065383) main_btmg_pane

0xa34d,	// (0x000645a0) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa34d,	// (0x000645a0) list_single_cale_mrui_row_pane_g2

0x0002,

0xf985,	// (0x00069bd8) list_single_cale_mrui_row_pane_g_ParamLimits

0xf985,	// (0x00069bd8) list_single_cale_mrui_row_pane_g

0xa3db,	// (0x0006462e) list_recal_vselct_arw_lo_pane

0xb0d7,	// (0x0006532a) list_recal_vselct_arw_up_pane

0xa3e3,	// (0x00064636) list_recal_vselct_pane

0x921a,	// (0x0006346d) btmg_button_pane

0x9226,	// (0x00063479) main_btmg_pane_g1

0xb130,	// (0x00065383) bg_button_pane_cp044

0xba48,	// (0x00065c9b) btmg_button_pane_t1

0xddc7,	// (0x0006801a) aid_listscroll_gen

0xbdd4,	// (0x00066027) main_cntbar_detail_pane

0xae10,	// (0x00065063) list_cmail_folder_pane

0xd744,	// (0x00067997) sp_fs_scroll_pane_cp03_ParamLimits

0x922e,	// (0x00063481) list_single_fs_dyc_pane_cp01_ParamLimits

0x922e,	// (0x00063481) list_single_fs_dyc_pane_cp01

0xba56,	// (0x00065ca9) aid_size_cmail_indent

0xa45a,	// (0x000646ad) list_single_dyc_row_pane_cp01

0x927a,	// (0x000634cd) cntbar_detail_list_pane_ParamLimits

0x927a,	// (0x000634cd) cntbar_detail_list_pane

0x92b4,	// (0x00063507) main_cntbar_detail_cont_pane_ParamLimits

0x92b4,	// (0x00063507) main_cntbar_detail_cont_pane

0x333e,	// (0x0005d591) scroll_pane_cp032_ParamLimits

0x333e,	// (0x0005d591) scroll_pane_cp032

0x92c0,	// (0x00063513) cntbar_detail_list_event_pane_ParamLimits

0x92c0,	// (0x00063513) cntbar_detail_list_event_pane

0x9286,	// (0x000634d9) cntbar_detail_list_shct_pane

0xc212,	// (0x00066465) aid_list_gen

0xba5f,	// (0x00065cb2) aid_scroll

0xba68,	// (0x00065cbb) aid_size_touch_scroll_bar

0x7634,	// (0x00061887) aid_list_double

0x92d4,	// (0x00063527) aid_list_single

0x7622,	// (0x00061875) aid_list_single_lg

0x92dd,	// (0x00063530) aid_list_z_g_a_sm

0x92e5,	// (0x00063538) aid_list_z_g_d

0x92ed,	// (0x00063540) aid_txt_z_prm

0x92fb,	// (0x0006354e) aid_txt_z_prm_cp01

0x9309,	// (0x0006355c) aid_txt_z_sec

0x9317,	// (0x0006356a) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9317,	// (0x0006356a) main_cntbar_detail_cont_pane_g1

0x9324,	// (0x00063577) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9324,	// (0x00063577) main_cntbar_detail_cont_pane_g2

0x0001,

0xf9eb,	// (0x00069c3e) main_cntbar_detail_cont_pane_g_ParamLimits

0xf9eb,	// (0x00069c3e) main_cntbar_detail_cont_pane_g

0xba71,	// (0x00065cc4) main_cntbar_detail_cont_pane_t1

0xba7f,	// (0x00065cd2) main_cntbar_detail_cont_pane_t2

0xba8d,	// (0x00065ce0) main_cntbar_detail_cont_pane_t3

0x0002,

0x0da4,	// (0x0005aff7) main_cntbar_detail_cont_pane_t

0x9330,	// (0x00063583) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9330,	// (0x00063583) cell_cntbar_detail_list_shct_pane

0xba9b,	// (0x00065cee) cntbar_detail_list_shct_pane_g1

0xbaa4,	// (0x00065cf7) cntbar_detail_list_shct_pane_g2

0x0001,

0x0dab,	// (0x0005affe) cntbar_detail_list_shct_pane_g

0x9344,	// (0x00063597) cntbar_detail_list_event_pane_g1_ParamLimits

0x9344,	// (0x00063597) cntbar_detail_list_event_pane_g1

0x9350,	// (0x000635a3) cntbar_detail_list_event_pane_g2_ParamLimits

0x9350,	// (0x000635a3) cntbar_detail_list_event_pane_g2

0x0005,

0xf9f0,	// (0x00069c43) cntbar_detail_list_event_pane_g_ParamLimits

0xf9f0,	// (0x00069c43) cntbar_detail_list_event_pane_g

0x93bc,	// (0x0006360f) cntbar_detail_list_event_pane_t1_ParamLimits

0x93bc,	// (0x0006360f) cntbar_detail_list_event_pane_t1

0x93d1,	// (0x00063624) cntbar_detail_list_event_pane_t2_ParamLimits

0x93d1,	// (0x00063624) cntbar_detail_list_event_pane_t2

0x0002,

0xf9fd,	// (0x00069c50) cntbar_detail_list_event_pane_t_ParamLimits

0xf9fd,	// (0x00069c50) cntbar_detail_list_event_pane_t

0xe1e3,	// (0x00068436) cell_cntbar_detail_list_shct_pane_g1

0xc989,	// (0x00066bdc) navi_pane_mv_g3

0xbdd4,	// (0x00066027) main_cntbar_detail_pane_ParamLimits

0xb130,	// (0x00065383) main_notif_wgt_pane

0x5d8f,	// (0x0005ffe2) aid_tch_main_mp4_pane_g4

0x5fc4,	// (0x00060217) popup_slider_window_cp02

0xa3d1,	// (0x00064624) list_recal_day_event_pane

0x925a,	// (0x000634ad) cntbar_detail_btn_pane_ParamLimits

0x925a,	// (0x000634ad) cntbar_detail_btn_pane

0x926a,	// (0x000634bd) cntbar_detail_btn_pane_cp01_ParamLimits

0x926a,	// (0x000634bd) cntbar_detail_btn_pane_cp01

0x9286,	// (0x000634d9) cntbar_detail_list_shct_pane_ParamLimits

0x9292,	// (0x000634e5) cntbar_detail_pane_g1_ParamLimits

0x9292,	// (0x000634e5) cntbar_detail_pane_g1

0x929e,	// (0x000634f1) cntbar_detail_pane_t1_ParamLimits

0x929e,	// (0x000634f1) cntbar_detail_pane_t1

0x935c,	// (0x000635af) cntbar_detail_list_event_pane_g3_ParamLimits

0x935c,	// (0x000635af) cntbar_detail_list_event_pane_g3

0x9374,	// (0x000635c7) cntbar_detail_list_event_pane_g4_ParamLimits

0x9374,	// (0x000635c7) cntbar_detail_list_event_pane_g4

0x938c,	// (0x000635df) cntbar_detail_list_event_pane_g5_ParamLimits

0x938c,	// (0x000635df) cntbar_detail_list_event_pane_g5

0x93a4,	// (0x000635f7) cntbar_detail_list_event_pane_g6_ParamLimits

0x93a4,	// (0x000635f7) cntbar_detail_list_event_pane_g6

0x93e6,	// (0x00063639) cntbar_detail_list_event_pane_t3_ParamLimits

0x93e6,	// (0x00063639) cntbar_detail_list_event_pane_t3

0x93f8,	// (0x0006364b) popup_notif_wgt_window_ParamLimits

0x93f8,	// (0x0006364b) popup_notif_wgt_window

0x9408,	// (0x0006365b) popup_submenu_window_cp01_ParamLimits

0x9408,	// (0x0006365b) popup_submenu_window_cp01

0xbf6b,	// (0x000661be) bg_popup_window_pane_cp10

0xbaad,	// (0x00065d00) listscroll_notif_wgt_pane

0xbabf,	// (0x00065d12) list_notif_wgt_window

0xbac8,	// (0x00065d1b) scroll_pane_cp033

0x941a,	// (0x0006366d) list_notif_wgt_row_pane_ParamLimits

0x941a,	// (0x0006366d) list_notif_wgt_row_pane

0xbad1,	// (0x00065d24) aid_size_list_notif_wgt_del

0xbade,	// (0x00065d31) list_notif_wgt_row_pane_g1

0xbaea,	// (0x00065d3d) list_notif_wgt_row_pane_g2

0xbaf9,	// (0x00065d4c) list_notif_wgt_row_pane_g3

0x0002,

0x0dc4,	// (0x0005b017) list_notif_wgt_row_pane_g

0xbb06,	// (0x00065d59) list_notif_wgt_row_pane_t1

0xbb1c,	// (0x00065d6f) list_notif_wgt_row_pane_t2

0xbb2e,	// (0x00065d81) list_notif_wgt_row_pane_t3

0x0002,

0x0dcb,	// (0x0005b01e) list_notif_wgt_row_pane_t

0xee83,	// (0x000690d6) list_recal_day_event_pane_g1

0xbb40,	// (0x00065d93) list_recal_day_event_pane_t1

0xb130,	// (0x00065383) bg_button_pane_cp045

0x942c,	// (0x0006367f) cntbar_detail_btn_pane_t1

0xdddb,	// (0x0006802e) main_callh_pane_ParamLimits

0xdddb,	// (0x0006802e) main_callh_pane

0xb130,	// (0x00065383) main_coverflow0_pane

0xb130,	// (0x00065383) main_wgtman_pane

0x833c,	// (0x0006258f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x833c,	// (0x0006258f) main_fs_bigclock_unlock_btn_pane

0x8c5b,	// (0x00062eae) bg_button_pane_cp16

0x8c6b,	// (0x00062ebe) cell_tport_appsw_pane_g3

0x943a,	// (0x0006368d) cf0_flow_pane_ParamLimits

0x943a,	// (0x0006368d) cf0_flow_pane

0xbb4f,	// (0x00065da2) listscroll_cf0_pane

0xbb5a,	// (0x00065dad) main_cf0_pane_g1

0x9449,	// (0x0006369c) main_cf0_pane_t1_ParamLimits

0x9449,	// (0x0006369c) main_cf0_pane_t1

0x945d,	// (0x000636b0) main_cf0_pane_t2_ParamLimits

0x945d,	// (0x000636b0) main_cf0_pane_t2

0x0001,

0xfa04,	// (0x00069c57) main_cf0_pane_t_ParamLimits

0xfa04,	// (0x00069c57) main_cf0_pane_t

0xbb6c,	// (0x00065dbf) scroll_pane_cp11

0x9471,	// (0x000636c4) cf0_flow_pane_g1

0x9479,	// (0x000636cc) cf0_flow_pane_g2

0x0001,

0xfa09,	// (0x00069c5c) cf0_flow_pane_g

0x9481,	// (0x000636d4) cf0_flow_pane_t1

0xb130,	// (0x00065383) main_call6_pane

0xb130,	// (0x00065383) main_calllock_pane

0x948f,	// (0x000636e2) call6_btn_grp_pane_ParamLimits

0x948f,	// (0x000636e2) call6_btn_grp_pane

0x949e,	// (0x000636f1) call6_pane_g1_ParamLimits

0x949e,	// (0x000636f1) call6_pane_g1

0x94ae,	// (0x00063701) popup_call6_1st_window_ParamLimits

0x94ae,	// (0x00063701) popup_call6_1st_window

0x94bc,	// (0x0006370f) popup_call6_2nd_window_ParamLimits

0x94bc,	// (0x0006370f) popup_call6_2nd_window

0x94ca,	// (0x0006371d) cell_call6_btn_pane_ParamLimits

0x94ca,	// (0x0006371d) cell_call6_btn_pane

0xbf6b,	// (0x000661be) bg_popup_call2_in_pane_cp03

0xbb77,	// (0x00065dca) popup_call6_1st_window_g1

0xbb7f,	// (0x00065dd2) popup_call6_1st_window_g2

0xbb87,	// (0x00065dda) popup_call6_1st_window_g3

0x0002,

0x0de1,	// (0x0005b034) popup_call6_1st_window_g

0xbb8f,	// (0x00065de2) popup_call6_1st_window_t1

0xbb9e,	// (0x00065df1) popup_call6_1st_window_t2

0xbbac,	// (0x00065dff) popup_call6_1st_window_t3

0x0002,

0x0de8,	// (0x0005b03b) popup_call6_1st_window_t

0xbf6b,	// (0x000661be) bg_popup_call2_in_pane_cp04

0xbb77,	// (0x00065dca) popup_call6_2nd_window_g1

0xbb7f,	// (0x00065dd2) popup_call6_2nd_window_g2

0xbb87,	// (0x00065dda) popup_call6_2nd_window_g3

0x0002,

0x0de1,	// (0x0005b034) popup_call6_2nd_window_g

0xbb8f,	// (0x00065de2) popup_call6_2nd_window_t1

0x123d,	// (0x0005b490) bg_button_pane_cp15

0x94d9,	// (0x0006372c) cell_call6_btn_pane_g1

0x94e2,	// (0x00063735) cell_call6_btn_pane_t1

0x94f1,	// (0x00063744) listscroll_wgtman_pane_ParamLimits

0x94f1,	// (0x00063744) listscroll_wgtman_pane

0x950d,	// (0x00063760) wgtman_btn_pane_ParamLimits

0x950d,	// (0x00063760) wgtman_btn_pane

0xc790,	// (0x000669e3) aid_scroll_copy1

0xbbc3,	// (0x00065e16) list_wgtman_pane

0x9542,	// (0x00063795) wgtman_btn_pane_g1_ParamLimits

0x9542,	// (0x00063795) wgtman_btn_pane_g1

0x956a,	// (0x000637bd) wgtman_btn_pane_t1_ParamLimits

0x956a,	// (0x000637bd) wgtman_btn_pane_t1

0xbbcd,	// (0x00065e20) wgtman_btn_pane_t2_ParamLimits

0xbbcd,	// (0x00065e20) wgtman_btn_pane_t2

0x0001,

0xfa0e,	// (0x00069c61) wgtman_btn_pane_t_ParamLimits

0xfa0e,	// (0x00069c61) wgtman_btn_pane_t

0x95a1,	// (0x000637f4) listrow_wgtman_pane_ParamLimits

0x95a1,	// (0x000637f4) listrow_wgtman_pane

0x95bc,	// (0x0006380f) listrow_wgtman_pane_g1

0x95c9,	// (0x0006381c) listrow_wgtman_pane_g2

0x0001,

0xfa13,	// (0x00069c66) listrow_wgtman_pane_g

0x95e7,	// (0x0006383a) listrow_wgtman_pane_t1

0x95ff,	// (0x00063852) listrow_wgtman_pane_t2

0x0001,

0xfa18,	// (0x00069c6b) listrow_wgtman_pane_t

0x9625,	// (0x00063878) wait_bar_pane_cp09

0xbbe4,	// (0x00065e37) main_calllock_btn_pane

0xbbee,	// (0x00065e41) main_calllock_pane_g1

0xb130,	// (0x00065383) bg_button_pane_cp17

0xbbba,	// (0x00065e0d) main_calllock_btn_pane_g1

0xbbfa,	// (0x00065e4d) main_calllock_btn_pane_t1

0xb130,	// (0x00065383) main_dialer3_pane

0xb130,	// (0x00065383) main_fmrd2_pane

0xe1e3,	// (0x00068436) main_fs_bigclock_unlock_btn_pane_g1

0x963f,	// (0x00063892) main_fs_bigclock_unlock_btn_pane_t1

0x964d,	// (0x000638a0) area_fmrd2_info_pane_ParamLimits

0x964d,	// (0x000638a0) area_fmrd2_info_pane

0x965b,	// (0x000638ae) area_fmrd2_visual_pane_ParamLimits

0x965b,	// (0x000638ae) area_fmrd2_visual_pane

0x9669,	// (0x000638bc) fmrd2_indi_pane_ParamLimits

0x9669,	// (0x000638bc) fmrd2_indi_pane

0x9676,	// (0x000638c9) area_fmrd2_visual_pane_g1

0x967e,	// (0x000638d1) area_fmrd2_visual_pane_t1

0x968e,	// (0x000638e1) area_fmrd2_visual_pane_t2

0x969e,	// (0x000638f1) area_fmrd2_visual_pane_t3

0x0002,

0xfa22,	// (0x00069c75) area_fmrd2_visual_pane_t

0x96ae,	// (0x00063901) area_fmrd2_info_pane_g1

0x96b6,	// (0x00063909) area_fmrd2_info_pane_t1

0x96c6,	// (0x00063919) area_fmrd2_info_pane_t2

0x96d6,	// (0x00063929) area_fmrd2_info_pane_t3

0x96e6,	// (0x00063939) area_fmrd2_info_pane_t4

0x0003,

0xfa29,	// (0x00069c7c) area_fmrd2_info_pane_t

0x96f4,	// (0x00063947) fmrd2_indi_pane_t1

0x9704,	// (0x00063957) fmrd2_indi_pane_t2

0x9714,	// (0x00063967) fmrd2_indi_pane_t3

0x0002,

0xfa32,	// (0x00069c85) fmrd2_indi_pane_t

0xaa5a,	// (0x00064cad) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xaa5a,	// (0x00064cad) list_single_fs_bigclock_indicator_pane_g5

0xab0b,	// (0x00064d5e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xab0b,	// (0x00064d5e) list_single_fs_bigclock_indicator_pane_t5

0x8e06,	// (0x00063059) aid_cell_bcale_month_pane_ParamLimits

0x8e06,	// (0x00063059) aid_cell_bcale_month_pane

0x8e24,	// (0x00063077) bcale_month_pane_ParamLimits

0x8e24,	// (0x00063077) bcale_month_pane

0x8e42,	// (0x00063095) bcale_preview_pane_ParamLimits

0x8e42,	// (0x00063095) bcale_preview_pane

0xb9e0,	// (0x00065c33) list_single_fs_bigclock_pane_t1_ParamLimits

0xb9ff,	// (0x00065c52) list_single_fs_bigclock_pane_t2_ParamLimits

0xb9ff,	// (0x00065c52) list_single_fs_bigclock_pane_t2

0x0001,

0x0d95,	// (0x0005afe8) list_single_fs_bigclock_pane_t_ParamLimits

0x0d95,	// (0x0005afe8) list_single_fs_bigclock_pane_t

0x9637,	// (0x0006388a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfa1d,	// (0x00069c70) main_fs_bigclock_unlock_btn_pane_g

0x9722,	// (0x00063975) aid_dia3_key_size_ParamLimits

0x9722,	// (0x00063975) aid_dia3_key_size

0x972e,	// (0x00063981) aid_dia3_listrow_size_ParamLimits

0x972e,	// (0x00063981) aid_dia3_listrow_size

0x973e,	// (0x00063991) dia3_keypad_fun_pane_ParamLimits

0x973e,	// (0x00063991) dia3_keypad_fun_pane

0x9750,	// (0x000639a3) dia3_keypad_num_pane_ParamLimits

0x9750,	// (0x000639a3) dia3_keypad_num_pane

0x9762,	// (0x000639b5) dia3_listscroll_pane_ParamLimits

0x9762,	// (0x000639b5) dia3_listscroll_pane

0x9770,	// (0x000639c3) dia3_numentry_pane_ParamLimits

0x9770,	// (0x000639c3) dia3_numentry_pane

0xbc09,	// (0x00065e5c) dia3_list_pane

0xbc14,	// (0x00065e67) scroll_pane_cp12

0xb130,	// (0x00065383) bg_dia3_numentry_pane

0x977e,	// (0x000639d1) dia3_numentry_pane_t1

0x978d,	// (0x000639e0) cell_dia3_key_num_pane

0x9795,	// (0x000639e8) cell_dia3_key0_fun_pane_ParamLimits

0x9795,	// (0x000639e8) cell_dia3_key0_fun_pane

0x97a2,	// (0x000639f5) cell_dia3_key1_fun_pane_ParamLimits

0x97a2,	// (0x000639f5) cell_dia3_key1_fun_pane

0x97af,	// (0x00063a02) dia3_listrow_pane

0xa7ad,	// (0x00064a00) bg_dia3_numentry_pane_g1

0xb130,	// (0x00065383) bg_button_pane_cp21

0xbc1f,	// (0x00065e72) cell_dia3_key_num_pane_t1

0xbc2d,	// (0x00065e80) cell_dia3_key_num_pane_t2

0xbc3c,	// (0x00065e8f) cell_dia3_key_num_pane_t3

0xbc4b,	// (0x00065e9e) cell_dia3_key_num_pane_t4

0x0003,

0x0e1a,	// (0x0005b06d) cell_dia3_key_num_pane_t

0xb130,	// (0x00065383) bg_button_pane_cp19

0x97bc,	// (0x00063a0f) cell_dia3_key0_fun_pane_g1

0xb130,	// (0x00065383) bg_button_pane_cp20

0x97c4,	// (0x00063a17) cell_dia3_key1_fun_pane_g1

0x97cc,	// (0x00063a1f) area_left_week_number_pane

0x97df,	// (0x00063a32) area_top_day_name_pane

0x97ed,	// (0x00063a40) frame_month_view_pane

0xbc5a,	// (0x00065ead) grid_month_view_pane

0x9802,	// (0x00063a55) cell_top_day_name_pane_ParamLimits

0x9802,	// (0x00063a55) cell_top_day_name_pane

0x981c,	// (0x00063a6f) cell_area_left_week_number_pane_ParamLimits

0x981c,	// (0x00063a6f) cell_area_left_week_number_pane

0x983f,	// (0x00063a92) cell_month_view_pane_ParamLimits

0x983f,	// (0x00063a92) cell_month_view_pane

0xbc68,	// (0x00065ebb) frm_month_g1

0x986b,	// (0x00063abe) frm_month_g2

0x987c,	// (0x00063acf) frm_month_g3

0x988d,	// (0x00063ae0) frm_month_g4

0x989e,	// (0x00063af1) frm_month_g5

0x98b1,	// (0x00063b04) frm_month_g6

0x98c4,	// (0x00063b17) frm_month_g7

0xbc75,	// (0x00065ec8) frm_month_g8

0x98d7,	// (0x00063b2a) frm_month_g9

0x98e4,	// (0x00063b37) frm_month_g10

0x98f1,	// (0x00063b44) frm_month_g11

0x98fe,	// (0x00063b51) frm_month_g12

0x990b,	// (0x00063b5e) frm_month_g13

0x9918,	// (0x00063b6b) frm_month_g14

0x9927,	// (0x00063b7a) frm_month_g15

0x9936,	// (0x00063b89) frm_month_g16

0x000f,

0xfa39,	// (0x00069c8c) frm_month_g

0xbc82,	// (0x00065ed5) cell_top_day_name_pane_t1

0x9945,	// (0x00063b98) cell_area_left_week_number_pane_g1

0x9954,	// (0x00063ba7) cell_area_left_week_number_pane_t1

0xe44f,	// (0x000686a2) cell_month_view_pane_g1

0x996a,	// (0x00063bbd) cell_month_view_pane_t1

0xb130,	// (0x00065383) main_fps_pane

0xad28,	// (0x00064f7b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xad28,	// (0x00064f7b) cmail_ddmenu_btn02_pane_cp1

0xad44,	// (0x00064f97) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xad44,	// (0x00064f97) cmail_ddmenu_btn02_pane_cp2

0x90fd,	// (0x00063350) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x90fd,	// (0x00063350) cmail_ddmenu_btn02_pane_g2

0x0001,

0xf9b7,	// (0x00069c0a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xf9b7,	// (0x00069c0a) cmail_ddmenu_btn02_pane_g

0x911c,	// (0x0006336f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x911c,	// (0x0006336f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xf9bc,	// (0x00069c0f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xf9bc,	// (0x00069c0f) cmail_ddmenu_btn02_pane_t

0x9980,	// (0x00063bd3) fps_text_pane_ParamLimits

0x9980,	// (0x00063bd3) fps_text_pane

0x998d,	// (0x00063be0) main_fps_pane_g1_ParamLimits

0x998d,	// (0x00063be0) main_fps_pane_g1

0x999b,	// (0x00063bee) wait_bar_pane_cp010_ParamLimits

0x999b,	// (0x00063bee) wait_bar_pane_cp010

0x99a7,	// (0x00063bfa) fps_text_pane_t1_ParamLimits

0x99a7,	// (0x00063bfa) fps_text_pane_t1

0x63e6,	// (0x00060639) cam4_image_uncrop_pane_g1

0x63ef,	// (0x00060642) cam4_image_uncrop_pane_g2

0x63f8,	// (0x0006064b) cam4_image_uncrop_pane_g3

0x6401,	// (0x00060654) cam4_image_uncrop_pane_g4

0x0003,

0xf5e7,	// (0x0006983a) cam4_image_uncrop_pane_g

0x97af,	// (0x00063a02) dia3_listrow_pane_ParamLimits

0xb130,	// (0x00065383) main_phob2_pane

0x8c3d,	// (0x00062e90) cell_tport_appsw_pane_cp02_ParamLimits

0x8c3d,	// (0x00062e90) cell_tport_appsw_pane_cp02

0x8c4c,	// (0x00062e9f) cell_tport_appsw_pane_cp03_ParamLimits

0x8c4c,	// (0x00062e9f) cell_tport_appsw_pane_cp03

0xb130,	// (0x00065383) phob2_contact_card_pane

0xb130,	// (0x00065383) phob2_listscroll_pane

0xbc95,	// (0x00065ee8) phob2_list_pane

0xbc9d,	// (0x00065ef0) scroll_pane_cp034

0x99c0,	// (0x00063c13) phob2_cc_data_pane_ParamLimits

0x99c0,	// (0x00063c13) phob2_cc_data_pane

0x99da,	// (0x00063c2d) phob2_cc_listscroll_pane_ParamLimits

0x99da,	// (0x00063c2d) phob2_cc_listscroll_pane

0x95a1,	// (0x000637f4) list_double_large_graphic_phob2_pane_ParamLimits

0x95a1,	// (0x000637f4) list_double_large_graphic_phob2_pane

0x99f4,	// (0x00063c47) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x99f4,	// (0x00063c47) list_double_large_graphic_phob2_pane_g1

0x9a0a,	// (0x00063c5d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a0a,	// (0x00063c5d) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfa5a,	// (0x00069cad) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfa5a,	// (0x00069cad) list_double_large_graphic_phob2_pane_g

0x9a16,	// (0x00063c69) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a16,	// (0x00063c69) list_double_large_graphic_phob2_pane_t1

0x9a2b,	// (0x00063c7e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a2b,	// (0x00063c7e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfa5f,	// (0x00069cb2) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfa5f,	// (0x00069cb2) list_double_large_graphic_phob2_pane_t

0xb130,	// (0x00065383) list_highlight_pane_cp024

0x9a3d,	// (0x00063c90) phob2_cc_button_pane

0x9a45,	// (0x00063c98) phob2_cc_data_pane_g1_ParamLimits

0x9a45,	// (0x00063c98) phob2_cc_data_pane_g1

0x9a51,	// (0x00063ca4) phob2_cc_data_pane_g2_ParamLimits

0x9a51,	// (0x00063ca4) phob2_cc_data_pane_g2

0x0001,

0xfa64,	// (0x00069cb7) phob2_cc_data_pane_g_ParamLimits

0xfa64,	// (0x00069cb7) phob2_cc_data_pane_g

0x9a5d,	// (0x00063cb0) phob2_cc_data_pane_t1_ParamLimits

0x9a5d,	// (0x00063cb0) phob2_cc_data_pane_t1

0x9a6f,	// (0x00063cc2) phob2_cc_data_pane_t2_ParamLimits

0x9a6f,	// (0x00063cc2) phob2_cc_data_pane_t2

0x9a81,	// (0x00063cd4) phob2_cc_data_pane_t3_ParamLimits

0x9a81,	// (0x00063cd4) phob2_cc_data_pane_t3

0x0002,

0xfa69,	// (0x00069cbc) phob2_cc_data_pane_t_ParamLimits

0xfa69,	// (0x00069cbc) phob2_cc_data_pane_t

0xbca5,	// (0x00065ef8) phob2_cc_list_pane_ParamLimits

0xbca5,	// (0x00065ef8) phob2_cc_list_pane

0xef2c,	// (0x0006917f) scroll_pane_cp035_ParamLimits

0xef2c,	// (0x0006917f) scroll_pane_cp035

0xbdd4,	// (0x00066027) bg_button_pane_cp033

0xbcb1,	// (0x00065f04) phob2_cc_button_pane_g1

0xbcbd,	// (0x00065f10) phob2_cc_button_pane_t1

0xbcd2,	// (0x00065f25) phob2_cc_button_pane_t2

0x0001,

0x0e5a,	// (0x0005b0ad) phob2_cc_button_pane_t

0x9a93,	// (0x00063ce6) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a93,	// (0x00063ce6) list_double_large_graphic_phob2_cc_pane

0x9aba,	// (0x00063d0d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9aba,	// (0x00063d0d) list_double_large_graphic_phob2_cc_pane_g1

0xa463,	// (0x000646b6) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa463,	// (0x000646b6) list_double_large_graphic_phob2_cc_pane_g2

0x9acb,	// (0x00063d1e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9acb,	// (0x00063d1e) list_double_large_graphic_phob2_cc_pane_g3

0x9ad7,	// (0x00063d2a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9ad7,	// (0x00063d2a) list_double_large_graphic_phob2_cc_pane_g4

0x9ae3,	// (0x00063d36) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9ae3,	// (0x00063d36) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfa70,	// (0x00069cc3) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfa70,	// (0x00069cc3) list_double_large_graphic_phob2_cc_pane_g

0x9aef,	// (0x00063d42) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9aef,	// (0x00063d42) list_double_large_graphic_phob2_cc_pane_t1

0x9b18,	// (0x00063d6b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9b18,	// (0x00063d6b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfa7b,	// (0x00069cce) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfa7b,	// (0x00069cce) list_double_large_graphic_phob2_cc_pane_t

0xbce4,	// (0x00065f37) list_highlight_pane_cp025_ParamLimits

0xbce4,	// (0x00065f37) list_highlight_pane_cp025

0xbdd4,	// (0x00066027) bg_button_pane_cp033_ParamLimits

0xbcb1,	// (0x00065f04) phob2_cc_button_pane_g1_ParamLimits

0xbcbd,	// (0x00065f10) phob2_cc_button_pane_t1_ParamLimits

0xbcd2,	// (0x00065f25) phob2_cc_button_pane_t2_ParamLimits

0x0e5a,	// (0x0005b0ad) phob2_cc_button_pane_t_ParamLimits

0x1231,	// (0x0005b484) popup_wgtman_window

0xed56,	// (0x00068fa9) scroll_pane_cp038

0x952a,	// (0x0006377d) wgtman_btn_pane_cp_01_ParamLimits

0x952a,	// (0x0006377d) wgtman_btn_pane_cp_01

0xbcf2,	// (0x00065f45) wgtman_content_pane

0xbcfb,	// (0x00065f4e) wgtman_heading_pane

0xb130,	// (0x00065383) bg_heading_pane_cp02

0xbd04,	// (0x00065f57) wgtman_heading_pane_g1

0xbd0c,	// (0x00065f5f) wgtman_heading_pane_t1

0xbd1a,	// (0x00065f6d) scroll_pane_cp036

0xbd22,	// (0x00065f75) wgtman_list_pane

0xbd2a,	// (0x00065f7d) wgtman_list_pane_t1_ParamLimits

0xbd2a,	// (0x00065f7d) wgtman_list_pane_t1

0x6345,	// (0x00060598) cam4_grid_pane

0x70e2,	// (0x00061335) bg_button_pane_cp015_ParamLimits

0x70f4,	// (0x00061347) bg_button_pane_cp016_ParamLimits

0x7107,	// (0x0006135a) bg_button_pane_cp017_ParamLimits

0x715d,	// (0x000613b0) popup_vitu2_query_window_g3_ParamLimits

0x715d,	// (0x000613b0) popup_vitu2_query_window_g3

0x7218,	// (0x0006146b) popup_vitu2_query_window_t6_ParamLimits

0x7218,	// (0x0006146b) popup_vitu2_query_window_t6

0x7243,	// (0x00061496) popup_vitu2_query_window_t7_ParamLimits

0x7243,	// (0x00061496) popup_vitu2_query_window_t7

0xb8a9,	// (0x00065afc) cam4_grid_pane_g1

0xb8b2,	// (0x00065b05) cam4_grid_pane_g2

0xbd44,	// (0x00065f97) cam4_grid_pane_g3

0xbd4d,	// (0x00065fa0) cam4_grid_pane_g4

0x0003,

0x0e6f,	// (0x0005b0c2) cam4_grid_pane_g

0x20cf,	// (0x0005c322) aid_placing_vt_slider_lsc_ParamLimits

0x241b,	// (0x0005c66e) vidtel_button_pane_ParamLimits

0x241b,	// (0x0005c66e) vidtel_button_pane

0xb130,	// (0x00065383) bg_button_pane_cp034

0xbd58,	// (0x00065fab) vidtel_button_pane_g1

0xbd60,	// (0x00065fb3) vidtel_button_pane_t1

0xee73,	// (0x000690c6) aid_size_vtel_slider_touch

0xef2c,	// (0x0006917f) scroll_pane_cp039

0x8079,	// (0x000622cc) ncim_query_button_pane_cp01_ParamLimits

0x8098,	// (0x000622eb) ncimui_query_pane_g1_ParamLimits

0xbdd4,	// (0x00066027) input_focus_pane_cp012_ParamLimits

0xa7eb,	// (0x00064a3e) ncim_query_entry_pane_t1_ParamLimits

0xef2c,	// (0x0006917f) scroll_pane_cp039_ParamLimits

0xc874,	// (0x00066ac7) navi_pane_bcale_mc_g1

0xc87c,	// (0x00066acf) navi_pane_bcale_mc_t1

0xad8d,	// (0x00064fe0) main_sp_fs_email_pane_g1

0xad99,	// (0x00064fec) main_sp_fs_email_pane_g2

0x0001,

0x0c19,	// (0x0005ae6c) main_sp_fs_email_pane_g

0xafe1,	// (0x00065234) list_single_cale_mrui_row_pane_g3_ParamLimits

0xafe1,	// (0x00065234) list_single_cale_mrui_row_pane_g3

0x913c,	// (0x0006338f) list_single_recal_day_pane_g5_event_pane

0xa42e,	// (0x00064681) list_single_recal_day_pane_g7

0xbd76,	// (0x00065fc9) list_recal_day_event_pane_cp01

0xbd7f,	// (0x00065fd2) list_recal_vselct_arw_lo_pane_cp01

0xbd87,	// (0x00065fda) list_recal_vselct_arw_up_pane_cp01

0xbd8f,	// (0x00065fe2) list_recal_vselct_pane_cp01

0xee83,	// (0x000690d6) list_recal_day_event_pane_cp01_g1

0xa46f,	// (0x000646c2) list_recal_day_event_pane_cp01_t1

0xa436,	// (0x00064689) list_single_recal_day_pane_t1_ParamLimits

0xa448,	// (0x0006469b) list_single_recal_day_pane_t2_ParamLimits

0xf9cc,	// (0x00069c1f) list_single_recal_day_pane_t_ParamLimits

0xb7a8,	// (0x000659fb) bg_notes_pane_ParamLimits

0xb84b,	// (0x00065a9e) list_notes_pane_ParamLimits

0x1599,	// (0x0005b7ec) scroll_pane_cp06_ParamLimits

0xb86d,	// (0x00065ac0) main_notes_pane_ParamLimits

0xb130,	// (0x00065383) main_welc_pane

0x9b41,	// (0x00063d94) main_welc_body_pane_ParamLimits

0x9b41,	// (0x00063d94) main_welc_body_pane

0x9b5b,	// (0x00063dae) main_welc_opti_pane_ParamLimits

0x9b5b,	// (0x00063dae) main_welc_opti_pane

0x9b8e,	// (0x00063de1) main_welc_pane_t1_ParamLimits

0x9b8e,	// (0x00063de1) main_welc_pane_t1

0x9ba8,	// (0x00063dfb) main_welc_body_row_pane_ParamLimits

0x9ba8,	// (0x00063dfb) main_welc_body_row_pane

0xf092,	// (0x000692e5) main_welc_opti_row_pane_ParamLimits

0xf092,	// (0x000692e5) main_welc_opti_row_pane

0xbd99,	// (0x00065fec) main_welc_opti_row_pane_g1

0x9bcd,	// (0x00063e20) main_welc_opti_row_pane_t1

0xbda1,	// (0x00065ff4) main_welc_body_row_pane_t1

0xbab7,	// (0x00065d0a) popup_notif_wgt_heading_pane

0xbad1,	// (0x00065d24) aid_size_list_notif_wgt_del_ParamLimits

0xbade,	// (0x00065d31) list_notif_wgt_row_pane_g1_ParamLimits

0xbaea,	// (0x00065d3d) list_notif_wgt_row_pane_g2_ParamLimits

0xbaf9,	// (0x00065d4c) list_notif_wgt_row_pane_g3_ParamLimits

0x0dc4,	// (0x0005b017) list_notif_wgt_row_pane_g_ParamLimits

0xbb06,	// (0x00065d59) list_notif_wgt_row_pane_t1_ParamLimits

0xbb1c,	// (0x00065d6f) list_notif_wgt_row_pane_t2_ParamLimits

0xbb2e,	// (0x00065d81) list_notif_wgt_row_pane_t3_ParamLimits

0x0dcb,	// (0x0005b01e) list_notif_wgt_row_pane_t_ParamLimits

0x95bc,	// (0x0006380f) listrow_wgtman_pane_g1_ParamLimits

0x95c9,	// (0x0006381c) listrow_wgtman_pane_g2_ParamLimits

0xfa13,	// (0x00069c66) listrow_wgtman_pane_g_ParamLimits

0x95e7,	// (0x0006383a) listrow_wgtman_pane_t1_ParamLimits

0x95ff,	// (0x00063852) listrow_wgtman_pane_t2_ParamLimits

0xfa18,	// (0x00069c6b) listrow_wgtman_pane_t_ParamLimits

0x9625,	// (0x00063878) wait_bar_pane_cp09_ParamLimits

0xb130,	// (0x00065383) bg_popup_heading_pane_cp02

0xbdb0,	// (0x00066003) popup_notif_wgt_heading_pane_g1

0xbdb8,	// (0x0006600b) popup_notif_wgt_heading_pane_t1

0xb130,	// (0x00065383) main_vids_pane

0xb130,	// (0x00065383) vids_listscroll_pane

0x9bdc,	// (0x00063e2f) scroll_pane_cp040

0xb130,	// (0x00065383) vids_list_pane

0x9be7,	// (0x00063e3a) vids_list_double_pane_ParamLimits

0x9be7,	// (0x00063e3a) vids_list_double_pane

0x9c01,	// (0x00063e54) vids_list_double_pane_g1

0x9c0a,	// (0x00063e5d) vids_list_double_pane_t1

0x9c1a,	// (0x00063e6d) vids_list_double_pane_t2

0x0001,

0xfa85,	// (0x00069cd8) vids_list_double_pane_t

0x442b,	// (0x0005e67e) main_ncimui_pane_ParamLimits

0x7ed0,	// (0x00062123) main_ncimui_pane_g1_ParamLimits

0x7edc,	// (0x0006212f) main_ncimui_pane_g2_ParamLimits

0x7edc,	// (0x0006212f) main_ncimui_pane_g2

0x0001,

0xf83f,	// (0x00069a92) main_ncimui_pane_g_ParamLimits

0xf83f,	// (0x00069a92) main_ncimui_pane_g

0x9b74,	// (0x00063dc7) main_welc_pane_g1_ParamLimits

0x9b74,	// (0x00063dc7) main_welc_pane_g1

0x9b80,	// (0x00063dd3) main_welc_pane_g2_ParamLimits

0x9b80,	// (0x00063dd3) main_welc_pane_g2

0x0001,

0xfa80,	// (0x00069cd3) main_welc_pane_g_ParamLimits

0xfa80,	// (0x00069cd3) main_welc_pane_g

0xb7a8,	// (0x000659fb) listscroll_mce_pane_ParamLimits

0xc9c9,	// (0x00066c1c) wait_bar_pane_cp10

0xddcf,	// (0x00068022) main_cale_day_pane_ParamLimits

0xddcf,	// (0x00068022) main_cale_week_pane_ParamLimits

0xb7a8,	// (0x000659fb) main_messa_pane_ParamLimits

0x5766,	// (0x0005f9b9) main_clock2_btn_pane_ParamLimits

0x5766,	// (0x0005f9b9) main_clock2_btn_pane

0xe5f7,	// (0x0006884a) main_clock2_btn_pane_cp01_ParamLimits

0xe5f7,	// (0x0006884a) main_clock2_btn_pane_cp01

0xafb2,	// (0x00065205) list_cale_mrui_pane_ParamLimits

0xbb64,	// (0x00065db7) main_cf0_pane_g2

0x0001,

0x0dd2,	// (0x0005b025) main_cf0_pane_g

0x97cc,	// (0x00063a1f) area_left_week_number_pane_ParamLimits

0x97df,	// (0x00063a32) area_top_day_name_pane_ParamLimits

0x97ed,	// (0x00063a40) frame_month_view_pane_ParamLimits

0xbc5a,	// (0x00065ead) grid_month_view_pane_ParamLimits

0xbc68,	// (0x00065ebb) frm_month_g1_ParamLimits

0x986b,	// (0x00063abe) frm_month_g2_ParamLimits

0x987c,	// (0x00063acf) frm_month_g3_ParamLimits

0x988d,	// (0x00063ae0) frm_month_g4_ParamLimits

0x989e,	// (0x00063af1) frm_month_g5_ParamLimits

0x98b1,	// (0x00063b04) frm_month_g6_ParamLimits

0x98c4,	// (0x00063b17) frm_month_g7_ParamLimits

0xbc75,	// (0x00065ec8) frm_month_g8_ParamLimits

0x98d7,	// (0x00063b2a) frm_month_g9_ParamLimits

0x98e4,	// (0x00063b37) frm_month_g10_ParamLimits

0x98f1,	// (0x00063b44) frm_month_g11_ParamLimits

0x98fe,	// (0x00063b51) frm_month_g12_ParamLimits

0x990b,	// (0x00063b5e) frm_month_g13_ParamLimits

0x9918,	// (0x00063b6b) frm_month_g14_ParamLimits

0x9927,	// (0x00063b7a) frm_month_g15_ParamLimits

0x9936,	// (0x00063b89) frm_month_g16_ParamLimits

0xfa39,	// (0x00069c8c) frm_month_g_ParamLimits

0xbc82,	// (0x00065ed5) cell_top_day_name_pane_t1_ParamLimits

0x9945,	// (0x00063b98) cell_area_left_week_number_pane_g1_ParamLimits

0x9954,	// (0x00063ba7) cell_area_left_week_number_pane_t1_ParamLimits

0xe44f,	// (0x000686a2) cell_month_view_pane_g1_ParamLimits

0x996a,	// (0x00063bbd) cell_month_view_pane_t1_ParamLimits

0xb7a0,	// (0x000659f3) main_clock2_btn_pane_g1

0xbdc6,	// (0x00066019) main_clock2_btn_pane_t1

0xbdd4,	// (0x00066027) listscroll_cmail_pane_ParamLimits

0xad8d,	// (0x00064fe0) main_sp_fs_email_pane_g1_ParamLimits

0xad99,	// (0x00064fec) main_sp_fs_email_pane_g2_ParamLimits

0x0c19,	// (0x0005ae6c) main_sp_fs_email_pane_g_ParamLimits

0xb0b8,	// (0x0006530b) list_recal_day_pane_ParamLimits

0xb0c9,	// (0x0006531c) mian_recal_day_pane_t1

0x8909,	// (0x00062b5c) list_single_dyc_row_text_pane_t4_ParamLimits

0x8909,	// (0x00062b5c) list_single_dyc_row_text_pane_t4

0x8940,	// (0x00062b93) list_single_dyc_row_text_pane_t5_ParamLimits

0x8940,	// (0x00062b93) list_single_dyc_row_text_pane_t5

0x9ed1,	// (0x00064124) list_single_dyc_row_text_pane_t6_ParamLimits

0x9ed1,	// (0x00064124) list_single_dyc_row_text_pane_t6

0x3270,	// (0x0005d4c3) aid_mgn_list_cale_time_pane

0x442b,	// (0x0005e67e) main_gallery2_pane_ParamLimits

0xe60d,	// (0x00068860) main_clock2_pane_cp01_t1

0xe61d,	// (0x00068870) main_clock2_pane_cp01_t3

0x0001,

0x06f8,	// (0x0005a94b) main_clock2_pane_cp01_t

0x19e5,	// (0x0005bc38) cale_week_scroll_pane_g16_ParamLimits

0x19e5,	// (0x0005bc38) cale_week_scroll_pane_g16

0xbf6b,	// (0x000661be) vorec_slider_pane

0xbd60,	// (0x00065fb3) vidtel_button_pane_t1_ParamLimits

0x9197,	// (0x000633ea) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9197,	// (0x000633ea) main_fs_bigclock_clock_pane_g2_ParamLimits

0x91a4,	// (0x000633f7) main_fs_bigclock_clock_pane_g3_ParamLimits

0x91a4,	// (0x000633f7) main_fs_bigclock_clock_pane_g4_ParamLimits

0xf9d6,	// (0x00069c29) main_fs_bigclock_clock_pane_g_ParamLimits

0x91b0,	// (0x00063403) main_fs_bigclock_clock_pane_t1_ParamLimits

0x91c3,	// (0x00063416) main_fs_bigclock_clock_pane_t2_ParamLimits

0xf9df,	// (0x00069c32) main_fs_bigclock_clock_pane_t_ParamLimits

0x5003,	// (0x0005f256) main_mup3_lyrics_pane_ParamLimits

0x5003,	// (0x0005f256) main_mup3_lyrics_pane

0x9c4e,	// (0x00063ea1) main_mup3_lyrics_pane_t1_ParamLimits

0x9c4e,	// (0x00063ea1) main_mup3_lyrics_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
