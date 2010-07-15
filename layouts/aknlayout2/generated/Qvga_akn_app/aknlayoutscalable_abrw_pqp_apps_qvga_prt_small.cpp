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

#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0004b47d };

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
0x5a23,	// (0x00050ea0) Screen

0x5a2d,	// (0x00050eaa) application_window

0x5a7f,	// (0x00050efc) area_bottom_pane_ParamLimits

0x5a7f,	// (0x00050efc) area_bottom_pane

0x5abb,	// (0x00050f38) area_top_pane_ParamLimits

0x5abb,	// (0x00050f38) area_top_pane

0x5b17,	// (0x00050f94) call_video_uplink_pane_ParamLimits

0x5b17,	// (0x00050f94) call_video_uplink_pane

0x5b52,	// (0x00050fcf) main_pane_ParamLimits

0x5b52,	// (0x00050fcf) main_pane

0xe278,	// (0x000596f5) context_pane

0x8a5a,	// (0x00053ed7) navi_pane

0x8a74,	// (0x00053ef1) popup_cale_events_window_ParamLimits

0x8a74,	// (0x00053ef1) popup_cale_events_window

0xe28b,	// (0x00059708) popup_mup_playback_window

0x8a8b,	// (0x00053f08) signal_pane

0x3142,	// (0x0004e5bf) main_browser_pane

0x3311,	// (0x0004e78e) main_burst_pane

0x5c7b,	// (0x000510f8) main_calc_pane

0xe254,	// (0x000596d1) main_cale_day_pane

0x61cc,	// (0x00051649) main_cale_month_pane

0xe254,	// (0x000596d1) main_cale_week_pane

0x3311,	// (0x0004e78e) main_call_pane

0x2e1e,	// (0x0004e29b) main_call_poc_pane

0x3311,	// (0x0004e78e) main_camera_pane

0x3311,	// (0x0004e78e) main_chi_dic_pane

0x3b1c,	// (0x0004ef99) main_clock_pane

0x2e1e,	// (0x0004e29b) main_fmradio_pane

0x3311,	// (0x0004e78e) main_graph_messa_pane

0x2e1e,	// (0x0004e29b) main_help_pane

0x3142,	// (0x0004e5bf) main_im_pane

0x3079,	// (0x0004e4f6) main_image_pane_ParamLimits

0x3079,	// (0x0004e4f6) main_image_pane

0x2e1e,	// (0x0004e29b) main_location2_pane

0x3311,	// (0x0004e78e) main_location_pane

0x3079,	// (0x0004e4f6) main_messa_pane

0x2e1e,	// (0x0004e29b) main_mp2_pane

0x3311,	// (0x0004e78e) main_mp_pane

0x2e1e,	// (0x0004e29b) main_msg_pane

0x2e1e,	// (0x0004e29b) main_mup_eq_pane

0x2e1e,	// (0x0004e29b) main_mup_pane

0x3142,	// (0x0004e5bf) main_notes_pane

0x2e1e,	// (0x0004e29b) main_pec_pane

0x2e1e,	// (0x0004e29b) main_phob_pane

0x2e1e,	// (0x0004e29b) main_pinb_pane

0x2e1e,	// (0x0004e29b) main_postcard_pane

0x2e1e,	// (0x0004e29b) main_qdial_pane

0x3311,	// (0x0004e78e) main_skin_pane

0x2e1e,	// (0x0004e29b) main_smil2_pane

0x3311,	// (0x0004e78e) main_smil_pane

0x3311,	// (0x0004e78e) main_video_pane

0x3311,	// (0x0004e78e) main_video_tele_pane

0x3079,	// (0x0004e4f6) main_viewer_pane_ParamLimits

0x3079,	// (0x0004e4f6) main_viewer_pane

0x3311,	// (0x0004e78e) main_vorec_pane

0x8958,	// (0x00053dd5) popup_blid_sat_info_window_ParamLimits

0x8958,	// (0x00053dd5) popup_blid_sat_info_window

0x8974,	// (0x00053df1) popup_dyc_status_message_window_ParamLimits

0x8974,	// (0x00053df1) popup_dyc_status_message_window

0x8980,	// (0x00053dfd) popup_grid_large_graphic_window_ParamLimits

0x8980,	// (0x00053dfd) popup_grid_large_graphic_window

0x89f1,	// (0x00053e6e) popup_loc_request_window_ParamLimits

0x89f1,	// (0x00053e6e) popup_loc_request_window

0x8a34,	// (0x00053eb1) popup_wml_address_window_ParamLimits

0x8a34,	// (0x00053eb1) popup_wml_address_window

0x8827,	// (0x00053ca4) call_muted_g1

0x8562,	// (0x000539df) popup_call_audio_conf_window_ParamLimits

0x8562,	// (0x000539df) popup_call_audio_conf_window

0x8837,	// (0x00053cb4) popup_call_audio_first_window_ParamLimits

0x8837,	// (0x00053cb4) popup_call_audio_first_window

0x886b,	// (0x00053ce8) popup_call_audio_in_window_ParamLimits

0x886b,	// (0x00053ce8) popup_call_audio_in_window

0x8887,	// (0x00053d04) popup_call_audio_out_window_ParamLimits

0x8887,	// (0x00053d04) popup_call_audio_out_window

0x88a3,	// (0x00053d20) popup_call_audio_second_window_ParamLimits

0x88a3,	// (0x00053d20) popup_call_audio_second_window

0x88cb,	// (0x00053d48) popup_call_audio_wait_window_ParamLimits

0x88cb,	// (0x00053d48) popup_call_audio_wait_window

0x88ea,	// (0x00053d67) popup_number_entry_window_ParamLimits

0x88ea,	// (0x00053d67) popup_number_entry_window

0x02c6,	// (0x0004b743) bg_popup_call_pane_cp05_ParamLimits

0x02c6,	// (0x0004b743) bg_popup_call_pane_cp05

0x2924,	// (0x0004dda1) popup_number_entry_window_t1

0x2937,	// (0x0004ddb4) popup_number_entry_window_t2

0x2949,	// (0x0004ddc6) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0005a52c) popup_number_entry_window_t

0x295b,	// (0x0004ddd8) text_title_cp2

0x296e,	// (0x0004ddeb) bg_popup_call_pane_cp_ParamLimits

0x296e,	// (0x0004ddeb) bg_popup_call_pane_cp

0x297c,	// (0x0004ddf9) call_thumbnail_pane

0x2984,	// (0x0004de01) popup_call_audio_in_window_g1_ParamLimits

0x2984,	// (0x0004de01) popup_call_audio_in_window_g1

0x2990,	// (0x0004de0d) popup_call_audio_in_window_g2_ParamLimits

0x2990,	// (0x0004de0d) popup_call_audio_in_window_g2

0x299c,	// (0x0004de19) popup_call_audio_in_window_g3_ParamLimits

0x299c,	// (0x0004de19) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0005a535) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0005a535) popup_call_audio_in_window_g

0x29a8,	// (0x0004de25) popup_call_audio_in_window_t1_ParamLimits

0x29a8,	// (0x0004de25) popup_call_audio_in_window_t1

0x29c3,	// (0x0004de40) popup_call_audio_in_window_t2_ParamLimits

0x29c3,	// (0x0004de40) popup_call_audio_in_window_t2

0x29de,	// (0x0004de5b) popup_call_audio_in_window_t3_ParamLimits

0x29de,	// (0x0004de5b) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0005a53c) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0005a53c) popup_call_audio_in_window_t

0x296e,	// (0x0004ddeb) bg_popup_call_pane_cp01_ParamLimits

0x296e,	// (0x0004ddeb) bg_popup_call_pane_cp01

0x297c,	// (0x0004ddf9) call_thumbnail_pane_cp02

0x29f1,	// (0x0004de6e) call_type_pane_cp022

0x29f9,	// (0x0004de76) popup_call_audio_out_window_g1_ParamLimits

0x29f9,	// (0x0004de76) popup_call_audio_out_window_g1

0x2a0b,	// (0x0004de88) popup_call_audio_out_window_g2_ParamLimits

0x2a0b,	// (0x0004de88) popup_call_audio_out_window_g2

0x2a17,	// (0x0004de94) popup_call_audio_out_window_g3_ParamLimits

0x2a17,	// (0x0004de94) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0005a543) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0005a543) popup_call_audio_out_window_g

0x2a29,	// (0x0004dea6) popup_call_audio_out_window_t1_ParamLimits

0x2a29,	// (0x0004dea6) popup_call_audio_out_window_t1

0x2a41,	// (0x0004debe) popup_call_audio_out_window_t2_ParamLimits

0x2a41,	// (0x0004debe) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0005a54a) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0005a54a) popup_call_audio_out_window_t

0x2a56,	// (0x0004ded3) bg_popup_call_pane_ParamLimits

0x2a56,	// (0x0004ded3) bg_popup_call_pane

0x5d1d,	// (0x0005119a) call_thumbnail_pane_cp_ParamLimits

0x5d1d,	// (0x0005119a) call_thumbnail_pane_cp

0x2ada,	// (0x0004df57) call_type_pane_cp01_ParamLimits

0x2ada,	// (0x0004df57) call_type_pane_cp01

0x2b1e,	// (0x0004df9b) popup_call_audio_first_window_g1_ParamLimits

0x2b1e,	// (0x0004df9b) popup_call_audio_first_window_g1

0x2b6a,	// (0x0004dfe7) popup_call_audio_first_window_g2_ParamLimits

0x2b6a,	// (0x0004dfe7) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0005a54f) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0005a54f) popup_call_audio_first_window_g

0x2cb7,	// (0x0004e134) popup_call_audio_first_window_t1_ParamLimits

0x2cb7,	// (0x0004e134) popup_call_audio_first_window_t1

0x2d63,	// (0x0004e1e0) popup_call_audio_first_window_t4_ParamLimits

0x2d63,	// (0x0004e1e0) popup_call_audio_first_window_t4

0x2def,	// (0x0004e26c) popup_call_audio_first_window_t5_ParamLimits

0x2def,	// (0x0004e26c) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0005a554) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0005a554) popup_call_audio_first_window_t

0x2e1e,	// (0x0004e29b) bg_popup_call_pane_cp02

0x2e28,	// (0x0004e2a5) call_type_pane_cp023

0x2e30,	// (0x0004e2ad) popup_call_audio_wait_window_g1

0x2e38,	// (0x0004e2b5) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0005a55b) popup_call_audio_wait_window_g

0x2e40,	// (0x0004e2bd) popup_call_audio_wait_window_t3

0x2e4e,	// (0x0004e2cb) bg_popup_call_pane_cp03_ParamLimits

0x2e4e,	// (0x0004e2cb) bg_popup_call_pane_cp03

0x2eae,	// (0x0004e32b) call_thumbnail_pane_cp011_ParamLimits

0x2eae,	// (0x0004e32b) call_thumbnail_pane_cp011

0x2eba,	// (0x0004e337) call_type_pane_cp034_ParamLimits

0x2eba,	// (0x0004e337) call_type_pane_cp034

0x2ef6,	// (0x0004e373) popup_call_audio_second_window_g1_ParamLimits

0x2ef6,	// (0x0004e373) popup_call_audio_second_window_g1

0x2f32,	// (0x0004e3af) popup_call_audio_second_window_g2_ParamLimits

0x2f32,	// (0x0004e3af) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0005a560) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0005a560) popup_call_audio_second_window_g

0x2f6e,	// (0x0004e3eb) popup_call_audio_second_window_t1_ParamLimits

0x2f6e,	// (0x0004e3eb) popup_call_audio_second_window_t1

0x2fef,	// (0x0004e46c) popup_call_audio_second_window_t2_ParamLimits

0x2fef,	// (0x0004e46c) popup_call_audio_second_window_t2

0x3025,	// (0x0004e4a2) popup_call_audio_second_window_t3_ParamLimits

0x3025,	// (0x0004e4a2) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0005a565) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0005a565) popup_call_audio_second_window_t

0x2e1e,	// (0x0004e29b) bg_popup_call_pane_cp04

0x305b,	// (0x0004e4d8) list_conf_pane

0x3063,	// (0x0004e4e0) popup_call_audio_conf_window_t1

0x3071,	// (0x0004e4ee) call_thumbnail_pane_g1

0x3079,	// (0x0004e4f6) bg_pinb_pane_ParamLimits

0x3079,	// (0x0004e4f6) bg_pinb_pane

0x3087,	// (0x0004e504) find_pinb_pane

0x3090,	// (0x0004e50d) listscroll_pinb_pane_ParamLimits

0x3090,	// (0x0004e50d) listscroll_pinb_pane

0x309f,	// (0x0004e51c) pinb_bg_pane_g1

0x5d41,	// (0x000511be) pinb_bg_pane_g2

0x5d4b,	// (0x000511c8) pinb_bg_pane_g3

0x5d55,	// (0x000511d2) pinb_bg_pane_g4

0x5d5f,	// (0x000511dc) pinb_bg_pane_g5

0x5d69,	// (0x000511e6) pinb_bg_pane_g6

0x5d74,	// (0x000511f1) pinb_bg_pane_g7

0x5d7f,	// (0x000511fc) pinb_bg_pane_g8

0x5d88,	// (0x00051205) pinb_bg_pane_g9

0x5d90,	// (0x0005120d) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0005a56c) pinb_bg_pane_g

0x5dad,	// (0x0005122a) grid_pinb_pane

0x5db6,	// (0x00051233) list_pinb_pane

0x5dc1,	// (0x0005123e) scroll_pane_cp01_ParamLimits

0x5dc1,	// (0x0005123e) scroll_pane_cp01

0x30a9,	// (0x0004e526) find_pinb_pane_g1_ParamLimits

0x30a9,	// (0x0004e526) find_pinb_pane_g1

0x30c1,	// (0x0004e53e) find_pinb_pane_t1

0x30d3,	// (0x0004e550) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0005a586) find_pinb_pane_t

0x30e8,	// (0x0004e565) input_focus_pane_cp01_ParamLimits

0x30e8,	// (0x0004e565) input_focus_pane_cp01

0x5dd1,	// (0x0005124e) cell_pinb_pane_ParamLimits

0x5dd1,	// (0x0005124e) cell_pinb_pane

0x5dea,	// (0x00051267) cell_pinb_pane_g1_ParamLimits

0x5dea,	// (0x00051267) cell_pinb_pane_g1

0x5dfe,	// (0x0005127b) cell_pinb_pane_g2_ParamLimits

0x5dfe,	// (0x0005127b) cell_pinb_pane_g2

0x30f4,	// (0x0004e571) cell_pinb_pane_g3_ParamLimits

0x30f4,	// (0x0004e571) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0005a58b) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0005a58b) cell_pinb_pane_g

0x2e1e,	// (0x0004e29b) grid_highlight_pane_cp01

0x5e0a,	// (0x00051287) list_pinb_item_pane_ParamLimits

0x5e0a,	// (0x00051287) list_pinb_item_pane

0x2e1e,	// (0x0004e29b) list_highlight_pane_cp02

0x5e1f,	// (0x0005129c) list_pinb_item_pane_g1_ParamLimits

0x5e1f,	// (0x0005129c) list_pinb_item_pane_g1

0x5e2c,	// (0x000512a9) list_pinb_item_pane_g2_ParamLimits

0x5e2c,	// (0x000512a9) list_pinb_item_pane_g2

0x5e38,	// (0x000512b5) list_pinb_item_pane_g3_ParamLimits

0x5e38,	// (0x000512b5) list_pinb_item_pane_g3

0x5e47,	// (0x000512c4) list_pinb_item_pane_g4_ParamLimits

0x5e47,	// (0x000512c4) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0005a592) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0005a592) list_pinb_item_pane_g

0x5e53,	// (0x000512d0) list_pinb_item_pane_t1_ParamLimits

0x5e53,	// (0x000512d0) list_pinb_item_pane_t1

0x5e84,	// (0x00051301) calc_display_pane

0x5e9c,	// (0x00051319) calc_paper_pane

0x5eb8,	// (0x00051335) grid_calc_pane

0x2e1e,	// (0x0004e29b) bg_list_pane_cp01

0x5ed8,	// (0x00051355) clock_g1

0x5ee0,	// (0x0005135d) clock_g2

0x0001,

0xf11e,	// (0x0005a59b) clock_g

0x5ee8,	// (0x00051365) clock_t1_ParamLimits

0x5ee8,	// (0x00051365) clock_t1

0x5efd,	// (0x0005137a) clock_t2_ParamLimits

0x5efd,	// (0x0005137a) clock_t2

0x5f0f,	// (0x0005138c) clock_t3_ParamLimits

0x5f0f,	// (0x0005138c) clock_t3

0x5f21,	// (0x0005139e) clock_t4_ParamLimits

0x5f21,	// (0x0005139e) clock_t4

0x5f33,	// (0x000513b0) clock_t5_ParamLimits

0x5f33,	// (0x000513b0) clock_t5

0x5f48,	// (0x000513c5) clock_t6_ParamLimits

0x5f48,	// (0x000513c5) clock_t6

0x5f5a,	// (0x000513d7) clock_t7_ParamLimits

0x5f5a,	// (0x000513d7) clock_t7

0x5f6c,	// (0x000513e9) clock_t8_ParamLimits

0x5f6c,	// (0x000513e9) clock_t8

0x5f7e,	// (0x000513fb) clock_t9_ParamLimits

0x5f7e,	// (0x000513fb) clock_t9

0x0008,

0xf123,	// (0x0005a5a0) clock_t_ParamLimits

0xf123,	// (0x0005a5a0) clock_t

0x3100,	// (0x0004e57d) popup_clock_analogue_window_cp02

0x3100,	// (0x0004e57d) popup_clock_digital_window_cp01

0x3108,	// (0x0004e585) listscroll_help_pane

0x2e1e,	// (0x0004e29b) phob_pre_status_pane

0x3112,	// (0x0004e58f) grid_qdial_pane

0x3079,	// (0x0004e4f6) listscroll_mce_pane

0x3079,	// (0x0004e4f6) bg_notes_pane

0x311c,	// (0x0004e599) list_notes_pane

0x5f90,	// (0x0005140d) scroll_pane_cp06

0x312a,	// (0x0004e5a7) bg_calc_paper_pane

0x5f9d,	// (0x0005141a) list_calc_pane

0x3142,	// (0x0004e5bf) bg_calc_display_pane

0x5fb7,	// (0x00051434) calc_display_pane_t1

0x5fcc,	// (0x00051449) calc_display_pane_t2

0x5fe1,	// (0x0005145e) calc_display_pane_t3

0x0002,

0xf136,	// (0x0005a5b3) calc_display_pane_t

0x5ff3,	// (0x00051470) cell_calc_pane_ParamLimits

0x5ff3,	// (0x00051470) cell_calc_pane

0x314e,	// (0x0004e5cb) bg_calc_paper_pane_g1

0x3166,	// (0x0004e5e3) bg_calc_paper_pane_g2

0x315a,	// (0x0004e5d7) bg_calc_paper_pane_g3

0x317e,	// (0x0004e5fb) bg_calc_paper_pane_g4

0x3172,	// (0x0004e5ef) bg_calc_paper_pane_g5

0x601a,	// (0x00051497) bg_calc_paper_pane_g6

0x6029,	// (0x000514a6) bg_calc_paper_pane_g7

0x6038,	// (0x000514b5) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0005a5ba) bg_calc_paper_pane_g

0x6047,	// (0x000514c4) calc_bg_paper_pane_g9

0x6056,	// (0x000514d3) list_calc_item_pane_ParamLimits

0x6056,	// (0x000514d3) list_calc_item_pane

0x318a,	// (0x0004e607) list_calc_item_pane_g1

0x606f,	// (0x000514ec) list_calc_item_pane_t1_ParamLimits

0x606f,	// (0x000514ec) list_calc_item_pane_t1

0x6081,	// (0x000514fe) list_calc_item_pane_t2_ParamLimits

0x6081,	// (0x000514fe) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0005a5cb) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0005a5cb) list_calc_item_pane_t

0x3197,	// (0x0004e614) cell_calc_pane_g1

0x31a1,	// (0x0004e61e) grid_highlight_pane_cp02

0x31cc,	// (0x0004e649) bg_calc_display_pane_g1

0x60af,	// (0x0005152c) bg_calc_display_pane_g2

0x31c3,	// (0x0004e640) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0005a5d5) bg_calc_display_pane_g

0x60b9,	// (0x00051536) cell_qdial_pane_ParamLimits

0x60b9,	// (0x00051536) cell_qdial_pane

0x60cb,	// (0x00051548) cell_qdial_pane_g1_ParamLimits

0x60cb,	// (0x00051548) cell_qdial_pane_g1

0x60d8,	// (0x00051555) cell_qdial_pane_g2_ParamLimits

0x60d8,	// (0x00051555) cell_qdial_pane_g2

0x31d5,	// (0x0004e652) cell_qdial_pane_g3_ParamLimits

0x31d5,	// (0x0004e652) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0005a5dc) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0005a5dc) cell_qdial_pane_g

0x60f6,	// (0x00051573) cell_qdial_pane_t1_ParamLimits

0x60f6,	// (0x00051573) cell_qdial_pane_t1

0x610e,	// (0x0005158b) cell_qdial_pane_t2_ParamLimits

0x610e,	// (0x0005158b) cell_qdial_pane_t2

0x6121,	// (0x0005159e) cell_qdial_pane_t3_ParamLimits

0x6121,	// (0x0005159e) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0005a5e5) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0005a5e5) cell_qdial_pane_t

0x2e1e,	// (0x0004e29b) grid_highlight_pane_cp04

0x31e1,	// (0x0004e65e) thumbnail_qdial_pane_ParamLimits

0x31e1,	// (0x0004e65e) thumbnail_qdial_pane

0x323d,	// (0x0004e6ba) list_help_pane

0x3247,	// (0x0004e6c4) scroll_pane_cp02

0x6134,	// (0x000515b1) help_list_pane_t1_ParamLimits

0x6134,	// (0x000515b1) help_list_pane_t1

0x6152,	// (0x000515cf) bg_notes_pane_g2

0x615a,	// (0x000515d7) bg_notes_pane_g3

0x6162,	// (0x000515df) notes_bg_pane_g1

0x616a,	// (0x000515e7) notes_bg_pane_g4

0x6172,	// (0x000515ef) notes_bg_pane_g5

0x617a,	// (0x000515f7) notes_bg_pane_g6

0x6182,	// (0x000515ff) notes_bg_pane_g7

0x618a,	// (0x00051607) notes_bg_pane_g8

0x6192,	// (0x0005160f) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0005a603) notes_bg_pane_g

0x619a,	// (0x00051617) list_notes_text_pane_ParamLimits

0x619a,	// (0x00051617) list_notes_text_pane

0x3250,	// (0x0004e6cd) list_notes_text_pane_g1

0x61be,	// (0x0005163b) list_notes_text_pane_t1

0x61cc,	// (0x00051649) listscroll_cale_week_pane

0x61f1,	// (0x0005166e) bg_cale_heading_pane

0x3273,	// (0x0004e6f0) bg_cale_pane_cp01

0x6209,	// (0x00051686) cale_week_corner_pane

0x6223,	// (0x000516a0) cale_week_day_heading_pane

0x623b,	// (0x000516b8) cale_week_scroll_pane_g1

0x624e,	// (0x000516cb) cale_week_scroll_pane_g2

0x6261,	// (0x000516de) cale_week_scroll_pane_g3

0x6274,	// (0x000516f1) cale_week_scroll_pane_g4

0x6287,	// (0x00051704) cale_week_scroll_pane_g5

0x629a,	// (0x00051717) cale_week_scroll_pane_g6

0x62ad,	// (0x0005172a) cale_week_scroll_pane_g7

0x62c0,	// (0x0005173d) cale_week_scroll_pane_g8

0x62d3,	// (0x00051750) cale_week_scroll_pane_g9

0x62e6,	// (0x00051763) cale_week_scroll_pane_g10

0x62f9,	// (0x00051776) cale_week_scroll_pane_g11

0x630c,	// (0x00051789) cale_week_scroll_pane_g12

0x631f,	// (0x0005179c) cale_week_scroll_pane_g13

0x6332,	// (0x000517af) cale_week_scroll_pane_g14

0x6345,	// (0x000517c2) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0005a612) cale_week_scroll_pane_g

0x636b,	// (0x000517e8) cale_week_time_pane

0x637e,	// (0x000517fb) grid_cale_week_pane

0x32a2,	// (0x0004e71f) scroll_pane_cp08

0x6393,	// (0x00051810) cell_cale_week_pane_ParamLimits

0x6393,	// (0x00051810) cell_cale_week_pane

0x63e1,	// (0x0005185e) cale_week_day_heading_pane_t1

0x641c,	// (0x00051899) cale_week_day_heading_pane_t2

0x6457,	// (0x000518d4) cale_week_day_heading_pane_t3

0x6492,	// (0x0005190f) cale_week_day_heading_pane_t4

0x64cd,	// (0x0005194a) cale_week_day_heading_pane_t5

0x6508,	// (0x00051985) cale_week_day_heading_pane_t6

0x6543,	// (0x000519c0) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0005a633) cale_week_day_heading_pane_t

0x32bf,	// (0x0004e73c) bg_cale_side_pane

0x657e,	// (0x000519fb) cale_week_time_pane_t1

0x65b8,	// (0x00051a35) cale_week_time_pane_t2

0x65f2,	// (0x00051a6f) cale_week_time_pane_t3

0x662c,	// (0x00051aa9) cale_week_time_pane_t4

0x6666,	// (0x00051ae3) cale_week_time_pane_t5

0x66a0,	// (0x00051b1d) cale_week_time_pane_t6

0x66da,	// (0x00051b57) cale_week_time_pane_t7

0x6714,	// (0x00051b91) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0005a642) cale_week_time_pane_t

0x674e,	// (0x00051bcb) cell_cale_week_pane_g2

0x6772,	// (0x00051bef) cell_cale_week_pane_g3_ParamLimits

0x6772,	// (0x00051bef) cell_cale_week_pane_g3

0x32cd,	// (0x0004e74a) grid_highlight_pane_cp07

0x32d5,	// (0x0004e752) listscroll_gms_pane

0x32df,	// (0x0004e75c) grid_gms_pane

0x32e8,	// (0x0004e765) listscroll_gms_pane_g1

0x32f0,	// (0x0004e76d) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0005a653) listscroll_gms_pane_g

0x678a,	// (0x00051c07) scroll_pane_cp010

0x6793,	// (0x00051c10) cell_gms_pane_ParamLimits

0x6793,	// (0x00051c10) cell_gms_pane

0x67a4,	// (0x00051c21) cell_gms_pane_g1

0x32f8,	// (0x0004e775) cell_gms_pane_g2

0x3250,	// (0x0004e6cd) cell_gms_pane_g3

0x3300,	// (0x0004e77d) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0005a658) cell_gms_pane_g

0x3309,	// (0x0004e786) grid_highlight_pane_cp09

0x87d5,	// (0x00053c52) phob_pre_status_pane_g1

0x87dd,	// (0x00053c5a) phob_pre_status_pane_g2

0x87e5,	// (0x00053c62) phob_pre_status_pane_g3

0x87ed,	// (0x00053c6a) phob_pre_status_pane_g4

0x0004,

0xf5d9,	// (0x0005aa56) phob_pre_status_pane_g

0x87fd,	// (0x00053c7a) phob_pre_status_pane_t1

0x880b,	// (0x00053c88) phob_pre_status_pane_t2

0x8819,	// (0x00053c96) phob_pre_status_pane_t3

0x0002,

0xf5e4,	// (0x0005aa61) phob_pre_status_pane_t

0x3311,	// (0x0004e78e) bg_list_pane_cp05

0x67ac,	// (0x00051c29) grid_vorec_pane

0x3319,	// (0x0004e796) vorec_t1

0x3327,	// (0x0004e7a4) vorec_t2

0x3335,	// (0x0004e7b2) vorec_t3

0x67b4,	// (0x00051c31) vorec_t4

0xdb53,	// (0x00058fd0) vorec_t5

0xdb61,	// (0x00058fde) vorec_t6

0x0004,

0xf1e4,	// (0x0005a661) vorec_t

0xdb6f,	// (0x00058fec) wait_bar_pane_cp01

0x33d2,	// (0x0004e84f) cell_vorec_pane_ParamLimits

0x33d2,	// (0x0004e84f) cell_vorec_pane

0x67c2,	// (0x00051c3f) cell_vorec_pane_g1

0x2e1e,	// (0x0004e29b) grid_highlight_pane_cp05

0x67d8,	// (0x00051c55) cams_zoom_pane

0x67e4,	// (0x00051c61) image_vga_pane

0x67f1,	// (0x00051c6e) main_camera_pane_g1

0x67fd,	// (0x00051c7a) main_camera_pane_g2

0x6809,	// (0x00051c86) main_camera_pane_g3

0x6815,	// (0x00051c92) main_camera_pane_g4

0x6821,	// (0x00051c9e) main_camera_pane_g5

0x682d,	// (0x00051caa) main_camera_pane_g6

0x6839,	// (0x00051cb6) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0005a66c) main_camera_pane_g

0x6845,	// (0x00051cc2) main_camera_pane_t1

0x6857,	// (0x00051cd4) main_camera_pane_t2

0x0001,

0xf200,	// (0x0005a67d) main_camera_pane_t

0x687b,	// (0x00051cf8) cams_zoom_pane_cp_ParamLimits

0x687b,	// (0x00051cf8) cams_zoom_pane_cp

0x689f,	// (0x00051d1c) image_cif_pane_ParamLimits

0x689f,	// (0x00051d1c) image_cif_pane

0x68b9,	// (0x00051d36) image_subqcif_pane

0x68c1,	// (0x00051d3e) main_video_pane_g1_ParamLimits

0x68c1,	// (0x00051d3e) main_video_pane_g1

0x68e1,	// (0x00051d5e) main_video_pane_g2_ParamLimits

0x68e1,	// (0x00051d5e) main_video_pane_g2

0x690f,	// (0x00051d8c) main_video_pane_g3_ParamLimits

0x690f,	// (0x00051d8c) main_video_pane_g3

0x6938,	// (0x00051db5) main_video_pane_g4_ParamLimits

0x6938,	// (0x00051db5) main_video_pane_g4

0x6961,	// (0x00051dde) main_video_pane_g5_ParamLimits

0x6961,	// (0x00051dde) main_video_pane_g5

0x335d,	// (0x0004e7da) main_video_pane_g6_ParamLimits

0x335d,	// (0x0004e7da) main_video_pane_g6

0x0006,

0xf205,	// (0x0005a682) main_video_pane_g_ParamLimits

0xf205,	// (0x0005a682) main_video_pane_g

0x6983,	// (0x00051e00) main_video_pane_t1_ParamLimits

0x6983,	// (0x00051e00) main_video_pane_t1

0x3377,	// (0x0004e7f4) cams_zoom_pane_g1

0x3380,	// (0x0004e7fd) cams_zoom_pane_g2

0x3389,	// (0x0004e806) cams_zoom_pane_g3

0x3392,	// (0x0004e80f) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0005a691) cams_zoom_pane_g

0x69cd,	// (0x00051e4a) grid_cams_pane

0x69d9,	// (0x00051e56) linegrid_cams_pane

0x69e5,	// (0x00051e62) cell_cams_pane_ParamLimits

0x69e5,	// (0x00051e62) cell_cams_pane

0x339b,	// (0x0004e818) cams_burst_image_pane

0x33a3,	// (0x0004e820) cell_cams_pane_g1

0x2e1e,	// (0x0004e29b) grid_highlight_pane_cp03

0x3197,	// (0x0004e614) mp_bg_pane_g1

0x2e1e,	// (0x0004e29b) bg_list_pane_cp03

0xe179,	// (0x000595f6) bg_mp_pane

0xe181,	// (0x000595fe) grid_mp_pane

0xe189,	// (0x00059606) media_player_g1

0xe191,	// (0x0005960e) media_player_t1

0xe19f,	// (0x0005961c) media_player_t2

0xe1ad,	// (0x0005962a) media_player_t3

0xe1bb,	// (0x00059638) media_player_t4

0xe1c9,	// (0x00059646) media_player_t5

0xe1d7,	// (0x00059654) media_player_t6

0xe1e5,	// (0x00059662) media_player_t7

0x0006,

0xf5c3,	// (0x0005aa40) media_player_t

0xe1f3,	// (0x00059670) wait_bar_pane_cp02

0xf5a8,	// (0x0005aa25) main_usb_pane_t

0x87cc,	// (0x00053c49) cell_mp_pane

0x3197,	// (0x0004e614) cell_mp_pane_g1

0x2e1e,	// (0x0004e29b) grid_highlight_pane_cp06

0x33ab,	// (0x0004e828) grid_skin_colour_pane

0x33b3,	// (0x0004e830) list_highlight_pane_cp03

0x6a48,	// (0x00051ec5) skin_g1

0x33bb,	// (0x0004e838) skin_t1

0x33e5,	// (0x0004e862) skin_t2

0x0001,

0xf249,	// (0x0005a6c6) skin_t

0x6a50,	// (0x00051ecd) cell_skin_colour_pane_ParamLimits

0x6a50,	// (0x00051ecd) cell_skin_colour_pane

0x33f3,	// (0x0004e870) cell_skin_colour_pane_g1

0x6ac6,	// (0x00051f43) call_video_g1_ParamLimits

0x6ac6,	// (0x00051f43) call_video_g1

0x6ad2,	// (0x00051f4f) call_video_g2_ParamLimits

0x6ad2,	// (0x00051f4f) call_video_g2

0x0001,

0xf24e,	// (0x0005a6cb) call_video_g_ParamLimits

0xf24e,	// (0x0005a6cb) call_video_g

0x6b22,	// (0x00051f9f) call_video_uplink_pane_cp1_ParamLimits

0x6b22,	// (0x00051f9f) call_video_uplink_pane_cp1

0x3405,	// (0x0004e882) call_video_uplink_pane_cp2

0x6bde,	// (0x0005205b) video_down_crop_pane_ParamLimits

0x6bde,	// (0x0005205b) video_down_crop_pane

0x6ca8,	// (0x00052125) video_down_pane_ParamLimits

0x6ca8,	// (0x00052125) video_down_pane

0x340d,	// (0x0004e88a) video_down_subqcif_pane_ParamLimits

0x340d,	// (0x0004e88a) video_down_subqcif_pane

0x3425,	// (0x0004e8a2) video_down_subqcif_pane_cp_ParamLimits

0x3425,	// (0x0004e8a2) video_down_subqcif_pane_cp

0x3449,	// (0x0004e8c6) im_reading_pane_ParamLimits

0x3449,	// (0x0004e8c6) im_reading_pane

0x6d74,	// (0x000521f1) im_writing_pane_ParamLimits

0x6d74,	// (0x000521f1) im_writing_pane

0x6d8a,	// (0x00052207) im_reading_pane_t1

0x3463,	// (0x0004e8e0) list_im_pane

0x3474,	// (0x0004e8f1) scroll_pane_cp07

0x6dc2,	// (0x0005223f) im_writing_pane_t1_ParamLimits

0x6dc2,	// (0x0005223f) im_writing_pane_t1

0x348d,	// (0x0004e90a) im_writing_pane_t2_ParamLimits

0x348d,	// (0x0004e90a) im_writing_pane_t2

0x0001,

0xf258,	// (0x0005a6d5) im_writing_pane_t_ParamLimits

0xf258,	// (0x0005a6d5) im_writing_pane_t

0x2e1e,	// (0x0004e29b) input_focus_pane_cp04

0x2e1e,	// (0x0004e29b) input_focus_pane_cp05

0x6dd7,	// (0x00052254) list_im_single_pane_ParamLimits

0x6dd7,	// (0x00052254) list_im_single_pane

0x34aa,	// (0x0004e927) list_single_im_pane_t1

0x8792,	// (0x00053c0f) blid_accuracy_pane

0x879a,	// (0x00053c17) blid_compass_pane

0x87a2,	// (0x00053c1f) main_location_t1

0x87b0,	// (0x00053c2d) main_location_t2

0x87be,	// (0x00053c3b) main_location_t3

0x0002,

0xf5d2,	// (0x0005aa4f) main_location_t

0x2e1e,	// (0x0004e29b) aid_levels_location

0x3197,	// (0x0004e614) blid_accuracy_pane_g1

0x3197,	// (0x0004e614) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0005a737) blid_accuracy_pane_g

0x34e4,	// (0x0004e961) wml_content_pane

0x3522,	// (0x0004e99f) wml_button_pane_ParamLimits

0x3522,	// (0x0004e99f) wml_button_pane

0x6def,	// (0x0005226c) wml_list_single_large_pane_ParamLimits

0x6def,	// (0x0005226c) wml_list_single_large_pane

0x6e06,	// (0x00052283) wml_list_single_medium_pane_ParamLimits

0x6e06,	// (0x00052283) wml_list_single_medium_pane

0x6e1e,	// (0x0005229b) wml_list_single_small_pane_ParamLimits

0x6e1e,	// (0x0005229b) wml_list_single_small_pane

0x3536,	// (0x0004e9b3) wml_selection_box_pane_ParamLimits

0x3536,	// (0x0004e9b3) wml_selection_box_pane

0x3549,	// (0x0004e9c6) wml_list_single_pane_t1

0x3558,	// (0x0004e9d5) wml_list_single_medium_pane_t1

0x3567,	// (0x0004e9e4) wml_list_single_large_pane_t1

0x3576,	// (0x0004e9f3) input_focus_pane_cp02_ParamLimits

0x3576,	// (0x0004e9f3) input_focus_pane_cp02

0x3589,	// (0x0004ea06) wml_selection_box_pane_g1

0x3592,	// (0x0004ea0f) wml_selection_box_pane_t1_ParamLimits

0x3592,	// (0x0004ea0f) wml_selection_box_pane_t1

0x3079,	// (0x0004e4f6) bg_wml_button_pane_ParamLimits

0x3079,	// (0x0004e4f6) bg_wml_button_pane

0x35aa,	// (0x0004ea27) wml_button_pane_g1

0x35b2,	// (0x0004ea2f) wml_button_pane_t1

0x35aa,	// (0x0004ea27) wml_button_bg_pane_g1

0x35c2,	// (0x0004ea3f) wml_button_bg_pane_g2

0x35ca,	// (0x0004ea47) wml_button_bg_pane_g3

0x35d2,	// (0x0004ea4f) wml_button_bg_pane_g4

0x35da,	// (0x0004ea57) wml_button_bg_pane_g5

0x35e2,	// (0x0004ea5f) wml_button_bg_pane_g6

0x35ea,	// (0x0004ea67) wml_button_bg_pane_g7

0x35f2,	// (0x0004ea6f) wml_button_bg_pane_g8

0x35fa,	// (0x0004ea77) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0005a6da) wml_button_bg_pane_g

0x6e39,	// (0x000522b6) bg_list_pane_cp02

0x3602,	// (0x0004ea7f) mce_header_pane_ParamLimits

0x3602,	// (0x0004ea7f) mce_header_pane

0x3616,	// (0x0004ea93) mce_icon_pane

0x3616,	// (0x0004ea93) mce_image_pane

0x361f,	// (0x0004ea9c) mce_text_pane_ParamLimits

0x361f,	// (0x0004ea9c) mce_text_pane

0x6e42,	// (0x000522bf) scroll_pane_cp03

0x6e42,	// (0x000522bf) scroll_pane_cp04

0x3633,	// (0x0004eab0) scroll_pane_cp05_ParamLimits

0x3633,	// (0x0004eab0) scroll_pane_cp05

0x6e4a,	// (0x000522c7) mce_header_field_pane_ParamLimits

0x6e4a,	// (0x000522c7) mce_header_field_pane

0x6e6a,	// (0x000522e7) mce_header_field_pane_2_ParamLimits

0x6e6a,	// (0x000522e7) mce_header_field_pane_2

0x6e80,	// (0x000522fd) mce_header_field_pane_3

0x6e88,	// (0x00052305) list_single_mce_message_pane_ParamLimits

0x6e88,	// (0x00052305) list_single_mce_message_pane

0x6e9f,	// (0x0005231c) list_single_mce_smart_pane_ParamLimits

0x6e9f,	// (0x0005231c) list_single_mce_smart_pane

0x363f,	// (0x0004eabc) input_focus_pane_cp03

0x3648,	// (0x0004eac5) list_header_data_pane

0x6ec1,	// (0x0005233e) mce_header_field_pane_t1

0x6ecf,	// (0x0005234c) list_single_mce_header_pane_ParamLimits

0x6ecf,	// (0x0005234c) list_single_mce_header_pane

0x3650,	// (0x0004eacd) list_single_mce_header_pane_t1

0x365f,	// (0x0004eadc) list_single_mce_message_pane_g1

0x3668,	// (0x0004eae5) list_single_mce_message_pane_t1

0x6f0d,	// (0x0005238a) bg_cale_heading_pane_cp01_ParamLimits

0x6f0d,	// (0x0005238a) bg_cale_heading_pane_cp01

0x3677,	// (0x0004eaf4) bg_cale_pane_cp02_ParamLimits

0x3677,	// (0x0004eaf4) bg_cale_pane_cp02

0x6f3c,	// (0x000523b9) cale_month_corner_pane

0x6f56,	// (0x000523d3) cale_month_day_heading_pane_ParamLimits

0x6f56,	// (0x000523d3) cale_month_day_heading_pane

0x6f85,	// (0x00052402) cale_month_pane_g1_ParamLimits

0x6f85,	// (0x00052402) cale_month_pane_g1

0x6fa9,	// (0x00052426) cale_month_pane_g2_ParamLimits

0x6fa9,	// (0x00052426) cale_month_pane_g2

0x6fc8,	// (0x00052445) cale_month_pane_g3_ParamLimits

0x6fc8,	// (0x00052445) cale_month_pane_g3

0x7004,	// (0x00052481) cale_month_pane_g4_ParamLimits

0x7004,	// (0x00052481) cale_month_pane_g4

0x7040,	// (0x000524bd) cale_month_pane_g5_ParamLimits

0x7040,	// (0x000524bd) cale_month_pane_g5

0x707c,	// (0x000524f9) cale_month_pane_g6_ParamLimits

0x707c,	// (0x000524f9) cale_month_pane_g6

0x70b8,	// (0x00052535) cale_month_pane_g7_ParamLimits

0x70b8,	// (0x00052535) cale_month_pane_g7

0x70f4,	// (0x00052571) cale_month_pane_g8_ParamLimits

0x70f4,	// (0x00052571) cale_month_pane_g8

0x7130,	// (0x000525ad) cale_month_pane_g9_ParamLimits

0x7130,	// (0x000525ad) cale_month_pane_g9

0x716a,	// (0x000525e7) cale_month_pane_g10_ParamLimits

0x716a,	// (0x000525e7) cale_month_pane_g10

0x71a4,	// (0x00052621) cale_month_pane_g11_ParamLimits

0x71a4,	// (0x00052621) cale_month_pane_g11

0x71de,	// (0x0005265b) cale_month_pane_g12_ParamLimits

0x71de,	// (0x0005265b) cale_month_pane_g12

0x7218,	// (0x00052695) cale_month_pane_g13_ParamLimits

0x7218,	// (0x00052695) cale_month_pane_g13

0x000c,

0xf270,	// (0x0005a6ed) cale_month_pane_g_ParamLimits

0xf270,	// (0x0005a6ed) cale_month_pane_g

0x7252,	// (0x000526cf) cale_month_week_pane

0x7265,	// (0x000526e2) grid_cale_month_pane_ParamLimits

0x7265,	// (0x000526e2) grid_cale_month_pane

0x728b,	// (0x00052708) cale_month_day_heading_pane_t1

0x7311,	// (0x0005278e) cale_month_day_heading_pane_t2

0x73a2,	// (0x0005281f) cale_month_day_heading_pane_t3

0x7433,	// (0x000528b0) cale_month_day_heading_pane_t4

0x74c4,	// (0x00052941) cale_month_day_heading_pane_t5

0x7555,	// (0x000529d2) cale_month_day_heading_pane_t6

0x75e6,	// (0x00052a63) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0005a708) cale_month_day_heading_pane_t

0x32bf,	// (0x0004e73c) bg_cale_side_pane_cp01

0x7677,	// (0x00052af4) cale_month_week_pane_t1

0x76b0,	// (0x00052b2d) cale_month_week_pane_t2

0x76e9,	// (0x00052b66) cale_month_week_pane_t3

0x7722,	// (0x00052b9f) cale_month_week_pane_t4

0x775b,	// (0x00052bd8) cale_month_week_pane_t5

0x7794,	// (0x00052c11) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0005a717) cale_month_week_pane_t

0x77cd,	// (0x00052c4a) cell_cale_month_pane_ParamLimits

0x77cd,	// (0x00052c4a) cell_cale_month_pane

0x78bb,	// (0x00052d38) cell_cale_month_pane_g1

0x78c7,	// (0x00052d44) cell_cale_month_pane_t1_ParamLimits

0x78c7,	// (0x00052d44) cell_cale_month_pane_t1

0x32cd,	// (0x0004e74a) grid_highlight_pane_cp08

0x3197,	// (0x0004e614) main_smil_g1

0x78e7,	// (0x00052d64) smil_status_pane

0x36b6,	// (0x0004eb33) smil_text_pane

0xe059,	// (0x000594d6) bg_popup_call3_rect_pane_g8

0xe061,	// (0x000594de) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0005a9d0) bg_popup_call3_rect_pane_g

0xe2f2,	// (0x0005976f) smil_status_volume_pane_g1

0x78f8,	// (0x00052d75) smil_status_pane_t1

0x8b1d,	// (0x00053f9a) volume_smil_pane

0x36c0,	// (0x0004eb3d) list_smil_text_pane

0x790f,	// (0x00052d8c) scroll_pane_cp011

0x7918,	// (0x00052d95) smil_text_list_pane_t1_ParamLimits

0x7918,	// (0x00052d95) smil_text_list_pane_t1

0x7957,	// (0x00052dd4) aid_volume_smil_ParamLimits

0x7957,	// (0x00052dd4) aid_volume_smil

0x3197,	// (0x0004e614) smil_volume_pane_g1

0x3197,	// (0x0004e614) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0005a737) smil_volume_pane_g

0x61cc,	// (0x00051649) listscroll_cale_day_pane

0x36ca,	// (0x0004eb47) bg_cale_pane

0x36e2,	// (0x0004eb5f) list_cale_pane

0x3705,	// (0x0004eb82) scroll_pane_cp09

0x3716,	// (0x0004eb93) cale_bg_pane_g1

0x371e,	// (0x0004eb9b) cale_bg_pane_g2

0x3726,	// (0x0004eba3) cale_bg_pane_g3

0x372e,	// (0x0004ebab) cale_bg_pane_g4

0x3736,	// (0x0004ebb3) cale_bg_pane_g5

0x373e,	// (0x0004ebbb) cale_bg_pane_g6

0x3746,	// (0x0004ebc3) cale_bg_pane_g7

0x374e,	// (0x0004ebcb) cale_bg_pane_g8

0x3756,	// (0x0004ebd3) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0005a73c) cale_bg_pane_g

0x7981,	// (0x00052dfe) list_cale_time_pane_ParamLimits

0x7981,	// (0x00052dfe) list_cale_time_pane

0x375e,	// (0x0004ebdb) list_cale_time_pane_g1_ParamLimits

0x375e,	// (0x0004ebdb) list_cale_time_pane_g1

0x376a,	// (0x0004ebe7) list_cale_time_pane_g2_ParamLimits

0x376a,	// (0x0004ebe7) list_cale_time_pane_g2

0x7995,	// (0x00052e12) list_cale_time_pane_g3_ParamLimits

0x7995,	// (0x00052e12) list_cale_time_pane_g3

0x79a1,	// (0x00052e1e) list_cale_time_pane_g4_ParamLimits

0x79a1,	// (0x00052e1e) list_cale_time_pane_g4

0x79ad,	// (0x00052e2a) list_cale_time_pane_g5_ParamLimits

0x79ad,	// (0x00052e2a) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0005a74f) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0005a74f) list_cale_time_pane_g

0x3784,	// (0x0004ec01) list_cale_time_pane_t1_ParamLimits

0x3784,	// (0x0004ec01) list_cale_time_pane_t1

0x37ac,	// (0x0004ec29) list_cale_time_pane_t2_ParamLimits

0x37ac,	// (0x0004ec29) list_cale_time_pane_t2

0x7cc4,	// (0x00053141) aid_blid_cardinal_pane

0x7d02,	// (0x0005317f) compass_pane_t4

0x37d4,	// (0x0004ec51) list_cale_time_pane_t4_ParamLimits

0x37d4,	// (0x0004ec51) list_cale_time_pane_t4

0x7d10,	// (0x0005318d) compass_pane_t5

0x7d1e,	// (0x0005319b) compass_pane_t6

0x7d2c,	// (0x000531a9) compass_pane_t7

0x3c41,	// (0x0004f0be) navi_pane_cc_t1

0x3de6,	// (0x0004f263) aid_phob_thumbnail_center_pane

0x833f,	// (0x000537bc) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0005a75c) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0005a75c) list_cale_time_pane_t

0x296e,	// (0x0004ddeb) bg_popup_window_pane_cp02_ParamLimits

0x296e,	// (0x0004ddeb) bg_popup_window_pane_cp02

0x37fc,	// (0x0004ec79) heading_pane_cp01_ParamLimits

0x37fc,	// (0x0004ec79) heading_pane_cp01

0x3808,	// (0x0004ec85) loc_req_pane_ParamLimits

0x3808,	// (0x0004ec85) loc_req_pane

0x3818,	// (0x0004ec95) loc_type_pane_ParamLimits

0x3818,	// (0x0004ec95) loc_type_pane

0x382a,	// (0x0004eca7) loc_type_pane_t1_ParamLimits

0x382a,	// (0x0004eca7) loc_type_pane_t1

0x383c,	// (0x0004ecb9) loc_type_pane_t2_ParamLimits

0x383c,	// (0x0004ecb9) loc_type_pane_t2

0x384e,	// (0x0004eccb) loc_type_pane_t3_ParamLimits

0x384e,	// (0x0004eccb) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0005a763) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0005a763) loc_type_pane_t

0x3860,	// (0x0004ecdd) list_loc_req_pane

0x386a,	// (0x0004ece7) scroll_pane_cp012

0x79b9,	// (0x00052e36) list_single_loc_request_popup_menu_pane_ParamLimits

0x79b9,	// (0x00052e36) list_single_loc_request_popup_menu_pane

0x3873,	// (0x0004ecf0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3873,	// (0x0004ecf0) list_single_loc_request_popup_menu_pane_g1

0x387f,	// (0x0004ecfc) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x387f,	// (0x0004ecfc) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0005a76a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0005a76a) list_single_loc_request_popup_menu_pane_g

0x388b,	// (0x0004ed08) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x388b,	// (0x0004ed08) list_single_loc_request_popup_menu_pane_t1

0x79cb,	// (0x00052e48) bg_popup_window_pane_cp03_ParamLimits

0x79cb,	// (0x00052e48) bg_popup_window_pane_cp03

0x79d9,	// (0x00052e56) heading_loc_req_pane_ParamLimits

0x79d9,	// (0x00052e56) heading_loc_req_pane

0x79e5,	// (0x00052e62) popup_dyc_status_message_window_g1_ParamLimits

0x79e5,	// (0x00052e62) popup_dyc_status_message_window_g1

0x79f1,	// (0x00052e6e) popup_dyc_status_message_window_t1_ParamLimits

0x79f1,	// (0x00052e6e) popup_dyc_status_message_window_t1

0x7a03,	// (0x00052e80) popup_dyc_status_message_window_t2_ParamLimits

0x7a03,	// (0x00052e80) popup_dyc_status_message_window_t2

0x7a15,	// (0x00052e92) popup_dyc_status_message_window_t3_ParamLimits

0x7a15,	// (0x00052e92) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0005a76f) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0005a76f) popup_dyc_status_message_window_t

0x2e1e,	// (0x0004e29b) bg_heading_pane_cp01

0x38a1,	// (0x0004ed1e) heading_loc_req_pane_g1

0x38a9,	// (0x0004ed26) heading_loc_req_pane_g2

0x38b1,	// (0x0004ed2e) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0005a776) heading_loc_req_pane_g

0x38b9,	// (0x0004ed36) heading_loc_req_pane_t1

0x38c8,	// (0x0004ed45) bg_popup_sub_pane_cp01_ParamLimits

0x38c8,	// (0x0004ed45) bg_popup_sub_pane_cp01

0x38d6,	// (0x0004ed53) popup_cale_events_window_g1_ParamLimits

0x38d6,	// (0x0004ed53) popup_cale_events_window_g1

0x38f6,	// (0x0004ed73) popup_cale_events_window_g2_ParamLimits

0x38f6,	// (0x0004ed73) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0005a7aa) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0005a7aa) popup_cale_events_window_g

0x3916,	// (0x0004ed93) popup_cale_events_window_t1_ParamLimits

0x3916,	// (0x0004ed93) popup_cale_events_window_t1

0x3928,	// (0x0004eda5) popup_cale_events_window_t2_ParamLimits

0x3928,	// (0x0004eda5) popup_cale_events_window_t2

0x3966,	// (0x0004ede3) popup_cale_events_window_t3_ParamLimits

0x3966,	// (0x0004ede3) popup_cale_events_window_t3

0x39a0,	// (0x0004ee1d) popup_cale_events_window_t4_ParamLimits

0x39a0,	// (0x0004ee1d) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0005a7af) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0005a7af) popup_cale_events_window_t

0x7a9b,	// (0x00052f18) call_type_pane

0x3afd,	// (0x0004ef7a) popup_call_status_window_g1

0x7aa7,	// (0x00052f24) popup_call_status_window_g2

0x7ab3,	// (0x00052f30) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0005a7b8) popup_call_status_window_g

0x39d6,	// (0x0004ee53) call_type_pane_g1

0x39df,	// (0x0004ee5c) call_type_pane_g2

0x0001,

0xf342,	// (0x0005a7bf) call_type_pane_g

0x2e1e,	// (0x0004e29b) bg_popup_sub_pane_cp02

0x39e8,	// (0x0004ee65) listscroll_popup_wml_pane

0x39f0,	// (0x0004ee6d) list_wml_pane

0x39fa,	// (0x0004ee77) scroll_pane_cp013

0x7abf,	// (0x00052f3c) list_single_graphic_popup_wml_pane_ParamLimits

0x7abf,	// (0x00052f3c) list_single_graphic_popup_wml_pane

0x3197,	// (0x0004e614) list_single_graphic_popup_wml_pane_g1

0x3a03,	// (0x0004ee80) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0005a7c4) list_single_graphic_popup_wml_pane_g

0x3a0b,	// (0x0004ee88) list_single_graphic_popup_wml_pane_t1

0x3a19,	// (0x0004ee96) aid_call_pane

0x3071,	// (0x0004e4ee) popup_clock_analogue_window_g1

0x3071,	// (0x0004e4ee) popup_clock_analogue_window_g2

0x7ad3,	// (0x00052f50) popup_clock_analogue_window_g3

0x7ad3,	// (0x00052f50) popup_clock_analogue_window_g4

0x3197,	// (0x0004e614) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0005a7c9) popup_clock_analogue_window_g

0x7adb,	// (0x00052f58) popup_clock_analogue_window_t1

0x7ae9,	// (0x00052f66) clock_digital_number_pane_ParamLimits

0x7ae9,	// (0x00052f66) clock_digital_number_pane

0x7af5,	// (0x00052f72) clock_digital_number_pane_cp02_ParamLimits

0x7af5,	// (0x00052f72) clock_digital_number_pane_cp02

0x7b01,	// (0x00052f7e) clock_digital_number_pane_cp03_ParamLimits

0x7b01,	// (0x00052f7e) clock_digital_number_pane_cp03

0x7b0d,	// (0x00052f8a) clock_digital_number_pane_cp04_ParamLimits

0x7b0d,	// (0x00052f8a) clock_digital_number_pane_cp04

0x7b19,	// (0x00052f96) clock_digital_separator_pane_ParamLimits

0x7b19,	// (0x00052f96) clock_digital_separator_pane

0x7b25,	// (0x00052fa2) popup_clock_digital_window_t1

0x3197,	// (0x0004e614) clock_digital_number_pane_g1

0x3197,	// (0x0004e614) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0005a737) clock_digital_number_pane_g

0x3197,	// (0x0004e614) clock_digital_separator_pane_g1

0x3197,	// (0x0004e614) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0005a737) clock_digital_separator_pane_g

0x2e1e,	// (0x0004e29b) bg_popup_window_pane_cp04

0x3a29,	// (0x0004eea6) heading_pane_cp03

0x3a31,	// (0x0004eeae) listscroll_popup_gms_pane

0x3a39,	// (0x0004eeb6) grid_large_graphic_popup_pane

0x3a43,	// (0x0004eec0) listscroll_popup_gms_pane_g1

0x3a4b,	// (0x0004eec8) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0005a7d4) listscroll_popup_gms_pane_g

0x351a,	// (0x0004e997) scroll_pane_cp014

0x7b42,	// (0x00052fbf) cell_large_graphic_popup_pane_ParamLimits

0x7b42,	// (0x00052fbf) cell_large_graphic_popup_pane

0x7b59,	// (0x00052fd6) cell_large_graphic_popup_pane_g1_ParamLimits

0x7b59,	// (0x00052fd6) cell_large_graphic_popup_pane_g1

0x3a53,	// (0x0004eed0) cell_large_graphic_popup_pane_g2_ParamLimits

0x3a53,	// (0x0004eed0) cell_large_graphic_popup_pane_g2

0x3a5f,	// (0x0004eedc) cell_large_graphic_popup_pane_g3_ParamLimits

0x3a5f,	// (0x0004eedc) cell_large_graphic_popup_pane_g3

0x3a6c,	// (0x0004eee9) cell_large_graphic_popup_pane_g4_ParamLimits

0x3a6c,	// (0x0004eee9) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0005a7d9) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0005a7d9) cell_large_graphic_popup_pane_g

0x3a7c,	// (0x0004eef9) grid_highlight_pane_cp010

0x3197,	// (0x0004e614) bg_popup_call_pane_g1

0x3a86,	// (0x0004ef03) list_single_graphic_popup_conf_pane_ParamLimits

0x3a86,	// (0x0004ef03) list_single_graphic_popup_conf_pane

0x3a99,	// (0x0004ef16) list_highlight_pane_cp01

0x3aa2,	// (0x0004ef1f) list_single_graphic_popup_conf_pane_g1

0x3aaa,	// (0x0004ef27) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0005a7e2) list_single_graphic_popup_conf_pane_g

0x3ab2,	// (0x0004ef2f) list_single_graphic_popup_conf_pane_t1

0x3ac0,	// (0x0004ef3d) linegrid_cams_pane_g1

0x7b65,	// (0x00052fe2) linegrid_cams_pane_g2

0x3250,	// (0x0004e6cd) linegrid_cams_pane_g3

0x3ac9,	// (0x0004ef46) linegrid_cams_pane_g4

0x7b6e,	// (0x00052feb) linegrid_cams_pane_g5

0x7b77,	// (0x00052ff4) linegrid_cams_pane_g6

0x3300,	// (0x0004e77d) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0005a7e7) linegrid_cams_pane_g

0x3ad2,	// (0x0004ef4f) popup_clock_analogue_window

0x3ad2,	// (0x0004ef4f) popup_clock_digital_window

0x2e1e,	// (0x0004e29b) popup_phob_thumbnail_window

0x3197,	// (0x0004e614) call_video_uplink_pane_g1

0x3adb,	// (0x0004ef58) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0005a7f6) call_video_uplink_pane_g

0x32cd,	// (0x0004e74a) video_uplink_pane

0x3ae3,	// (0x0004ef60) mce_image_pane_g1

0x7b80,	// (0x00052ffd) mce_image_pane_g2

0x7b88,	// (0x00053005) mce_image_pane_g3

0x7b90,	// (0x0005300d) mce_image_pane_g4

0x7b98,	// (0x00053015) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0005a7fb) mce_image_pane_g

0x3aed,	// (0x0004ef6a) control_top_pane_stacon_cp01_ParamLimits

0x3aed,	// (0x0004ef6a) control_top_pane_stacon_cp01

0x3b0b,	// (0x0004ef88) uni_indicator_pane_stacon_cp01_ParamLimits

0x3b0b,	// (0x0004ef88) uni_indicator_pane_stacon_cp01

0x3b1c,	// (0x0004ef99) bg_popup_sub_pane_cp03

0x3b26,	// (0x0004efa3) chi_dic_find_pane

0x7ba0,	// (0x0005301d) listscroll_chi_dic_pane

0x3b2e,	// (0x0004efab) main_pane_chidic_g1

0x3b36,	// (0x0004efb3) chi_dic_find_pane_t1

0x3b44,	// (0x0004efc1) find_chidic_pane

0x3b4d,	// (0x0004efca) chi_dic_list_pane_ParamLimits

0x3b4d,	// (0x0004efca) chi_dic_list_pane

0x3b5e,	// (0x0004efdb) scroll_pane_cp020

0x3b66,	// (0x0004efe3) find_chidic_pane_t1

0x2e1e,	// (0x0004e29b) input_focus_pane_cp06

0x7bb2,	// (0x0005302f) list_chi_dic_pane_ParamLimits

0x7bb2,	// (0x0005302f) list_chi_dic_pane

0x7bc5,	// (0x00053042) list_chi_dic_pane_t1_ParamLimits

0x7bc5,	// (0x00053042) list_chi_dic_pane_t1

0x2e1e,	// (0x0004e29b) list_highlight_pane_cp020

0x3b75,	// (0x0004eff2) bg_cale_heading_pane_g1

0x7bd8,	// (0x00053055) bg_cale_heading_pane_g2

0x7be0,	// (0x0005305d) bg_cale_heading_pane_g3

0x7be8,	// (0x00053065) bg_cale_heading_pane_g4

0x7bf0,	// (0x0005306d) bg_cale_heading_pane_g5

0x7bf8,	// (0x00053075) bg_cale_heading_pane_g6

0x7c00,	// (0x0005307d) bg_cale_heading_pane_g7

0x7c08,	// (0x00053085) bg_cale_heading_pane_g8

0x7c10,	// (0x0005308d) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0005a806) bg_cale_heading_pane_g

0x3b75,	// (0x0004eff2) bg_cale_side_pane_g1

0x7c18,	// (0x00053095) bg_cale_side_pane_g2

0x7c20,	// (0x0005309d) bg_cale_side_pane_g3

0x7c28,	// (0x000530a5) bg_cale_side_pane_g4

0x7c30,	// (0x000530ad) bg_cale_side_pane_g5

0x7c38,	// (0x000530b5) bg_cale_side_pane_g6

0x7c40,	// (0x000530bd) bg_cale_side_pane_g7

0x7c48,	// (0x000530c5) bg_cale_side_pane_g8

0x7c50,	// (0x000530cd) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0005a819) bg_cale_side_pane_g

0x7c58,	// (0x000530d5) popup_call_status_window_ParamLimits

0x7c58,	// (0x000530d5) popup_call_status_window

0x3b7d,	// (0x0004effa) stacon_top_pane

0x3b85,	// (0x0004f002) status_pane_ParamLimits

0x3b85,	// (0x0004f002) status_pane

0x3b9f,	// (0x0004f01c) status_small_pane

0x3ba7,	// (0x0004f024) control_pane

0x2e1e,	// (0x0004e29b) stacon_bottom_pane

0x3baf,	// (0x0004f02c) list_single_mce_smart_pane_t1_ParamLimits

0x3baf,	// (0x0004f02c) list_single_mce_smart_pane_t1

0x3bc2,	// (0x0004f03f) list_single_mce_smart_pane_t2_ParamLimits

0x3bc2,	// (0x0004f03f) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0005a82c) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0005a82c) list_single_mce_smart_pane_t

0x7c67,	// (0x000530e4) compass_pane

0x7c70,	// (0x000530ed) main_location2_pane_t1

0x7c86,	// (0x00053103) main_location2_pane_t2

0x7c9c,	// (0x00053119) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0005a831) main_location2_pane_t

0x3bea,	// (0x0004f067) compass_pane_g1_ParamLimits

0x3bea,	// (0x0004f067) compass_pane_g1

0x7ce4,	// (0x00053161) compass_pane_t1

0x7cf3,	// (0x00053170) compass_pane_t2

0x0005,

0xf3bd,	// (0x0005a83a) compass_pane_t

0x7d3a,	// (0x000531b7) text_secondary_cp61

0x3c38,	// (0x0004f0b5) navi_pane_cams_g5

0x3c84,	// (0x0004f101) navi_pane_im_t1

0x3c92,	// (0x0004f10f) navi_pane_mp_g1_ParamLimits

0x3c92,	// (0x0004f10f) navi_pane_mp_g1

0x3ca6,	// (0x0004f123) navi_pane_mp_g2_ParamLimits

0x3ca6,	// (0x0004f123) navi_pane_mp_g2

0x3cb2,	// (0x0004f12f) navi_pane_mp_g3_ParamLimits

0x3cb2,	// (0x0004f12f) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0005a84e) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0005a84e) navi_pane_mp_g

0x3cbe,	// (0x0004f13b) navi_pane_mp_t1

0x3ccc,	// (0x0004f149) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0005a855) navi_pane_mp_t

0x3d37,	// (0x0004f1b4) navi_pane_vt_g1

0x3cbe,	// (0x0004f13b) navi_pane_vt_t1

0x3d3f,	// (0x0004f1bc) navi_slider_pane

0x3311,	// (0x0004e78e) zooming_pane

0x3d47,	// (0x0004f1c4) navi_slider_pane_g1

0x7dbc,	// (0x00053239) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0005a85c) navi_slider_pane_g

0x3d6b,	// (0x0004f1e8) aid_levels_zoom

0x3d73,	// (0x0004f1f0) zooming_pane_g1

0x3d7b,	// (0x0004f1f8) zooming_pane_g2

0x3d7b,	// (0x0004f1f8) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0005a86b) zooming_pane_g

0x3d83,	// (0x0004f200) level_10_zoom

0x3d8c,	// (0x0004f209) level_11_zoom

0x3d95,	// (0x0004f212) level_1_zoom

0x3d9e,	// (0x0004f21b) level_2_zoom

0x3da7,	// (0x0004f224) level_3_zoom

0x3db0,	// (0x0004f22d) level_4_zoom

0x3db9,	// (0x0004f236) level_5_zoom

0x3dc2,	// (0x0004f23f) level_6_zoom

0x3dcb,	// (0x0004f248) level_7_zoom

0x3dd4,	// (0x0004f251) level_8_zoom

0x3ddd,	// (0x0004f25a) level_9_zoom

0x3dee,	// (0x0004f26b) popup_phob_thumbnail_window_g1

0x3df6,	// (0x0004f273) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0005a872) popup_phob_thumbnail_window_g

0xe1fb,	// (0x00059678) level_1_location

0xe203,	// (0x00059680) level_2_location

0xe20b,	// (0x00059688) level_3_location

0xe213,	// (0x00059690) level_4_location

0x3311,	// (0x0004e78e) level_5_location

0x7dce,	// (0x0005324b) mce_icon_pane_g1

0x7dd6,	// (0x00053253) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0005a877) mce_icon_pane_g

0x7dde,	// (0x0005325b) main_mup_pane_g1_ParamLimits

0x7dde,	// (0x0005325b) main_mup_pane_g1

0x7df6,	// (0x00053273) main_mup_pane_g2_ParamLimits

0x7df6,	// (0x00053273) main_mup_pane_g2

0x7e12,	// (0x0005328f) main_mup_pane_g3_ParamLimits

0x7e12,	// (0x0005328f) main_mup_pane_g3

0x7e2e,	// (0x000532ab) main_mup_pane_g4_ParamLimits

0x7e2e,	// (0x000532ab) main_mup_pane_g4

0x7e4a,	// (0x000532c7) main_mup_pane_g5_ParamLimits

0x7e4a,	// (0x000532c7) main_mup_pane_g5

0x7e67,	// (0x000532e4) main_mup_pane_g6_ParamLimits

0x7e67,	// (0x000532e4) main_mup_pane_g6

0x7e83,	// (0x00053300) main_mup_pane_g7_ParamLimits

0x7e83,	// (0x00053300) main_mup_pane_g7

0x7e9f,	// (0x0005331c) main_mup_pane_g8_ParamLimits

0x7e9f,	// (0x0005331c) main_mup_pane_g8

0x7ebb,	// (0x00053338) main_mup_pane_g9_ParamLimits

0x7ebb,	// (0x00053338) main_mup_pane_g9

0x7ed2,	// (0x0005334f) main_mup_pane_g10_ParamLimits

0x7ed2,	// (0x0005334f) main_mup_pane_g10

0x7ee9,	// (0x00053366) main_mup_pane_g11_ParamLimits

0x7ee9,	// (0x00053366) main_mup_pane_g11

0x7efd,	// (0x0005337a) main_mup_pane_g12_ParamLimits

0x7efd,	// (0x0005337a) main_mup_pane_g12

0x7f09,	// (0x00053386) main_mup_pane_g13_ParamLimits

0x7f09,	// (0x00053386) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0005a87c) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0005a87c) main_mup_pane_g

0x7f1d,	// (0x0005339a) main_mup_pane_t1_ParamLimits

0x7f1d,	// (0x0005339a) main_mup_pane_t1

0x7f3a,	// (0x000533b7) main_mup_pane_t2_ParamLimits

0x7f3a,	// (0x000533b7) main_mup_pane_t2

0x7f54,	// (0x000533d1) main_mup_pane_t3_ParamLimits

0x7f54,	// (0x000533d1) main_mup_pane_t3

0x7f6e,	// (0x000533eb) main_mup_pane_t4_ParamLimits

0x7f6e,	// (0x000533eb) main_mup_pane_t4

0x7f80,	// (0x000533fd) main_mup_pane_t5_ParamLimits

0x7f80,	// (0x000533fd) main_mup_pane_t5

0x7f92,	// (0x0005340f) main_mup_pane_t6_ParamLimits

0x7f92,	// (0x0005340f) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0005a897) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0005a897) main_mup_pane_t

0x7fa8,	// (0x00053425) mup_progress_pane_ParamLimits

0x7fa8,	// (0x00053425) mup_progress_pane

0x7fb4,	// (0x00053431) mup_visualizer_pane_ParamLimits

0x7fb4,	// (0x00053431) mup_visualizer_pane

0x7fe2,	// (0x0005345f) mup_volume_pane_ParamLimits

0x7fe2,	// (0x0005345f) mup_volume_pane

0x3afd,	// (0x0004ef7a) mup_visualizer_pane_g1_ParamLimits

0x3afd,	// (0x0004ef7a) mup_visualizer_pane_g1

0x3afd,	// (0x0004ef7a) mup_visualizer_pane_g2_ParamLimits

0x3afd,	// (0x0004ef7a) mup_visualizer_pane_g2

0x3bea,	// (0x0004f067) mup_visualizer_pane_g3_ParamLimits

0x3bea,	// (0x0004f067) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0005a8a4) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0005a8a4) mup_visualizer_pane_g

0x3197,	// (0x0004e614) mup_volume_pane_g1

0x3e06,	// (0x0004f283) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0005a8ab) mup_volume_pane_g

0x3197,	// (0x0004e614) mup_progress_pane_g1

0x3e0f,	// (0x0004f28c) mup_progress_pane_g2

0x3e18,	// (0x0004f295) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0005a8b0) mup_progress_pane_g

0x2e1e,	// (0x0004e29b) bg_popup_window_pane_cp05

0x3e21,	// (0x0004f29e) heading_pane_cp02_ParamLimits

0x3e21,	// (0x0004f29e) heading_pane_cp02

0x3e3b,	// (0x0004f2b8) list_popup_blid_pane

0x3e43,	// (0x0004f2c0) list_blid_sat_info_pane_ParamLimits

0x3e43,	// (0x0004f2c0) list_blid_sat_info_pane

0x3e56,	// (0x0004f2d3) list_blid_sat_info_pane_g1

0x3e5e,	// (0x0004f2db) list_blid_sat_info_pane_t1

0x80d5,	// (0x00053552) mup_equalizer_pane_ParamLimits

0x80d5,	// (0x00053552) mup_equalizer_pane

0x80ee,	// (0x0005356b) mup_equalizer_pane_cp1_ParamLimits

0x80ee,	// (0x0005356b) mup_equalizer_pane_cp1

0x8107,	// (0x00053584) mup_equalizer_pane_cp2_ParamLimits

0x8107,	// (0x00053584) mup_equalizer_pane_cp2

0x8120,	// (0x0005359d) mup_equalizer_pane_cp3_ParamLimits

0x8120,	// (0x0005359d) mup_equalizer_pane_cp3

0x8139,	// (0x000535b6) mup_equalizer_pane_cp4_ParamLimits

0x8139,	// (0x000535b6) mup_equalizer_pane_cp4

0x8152,	// (0x000535cf) mup_equalizer_pane_cp5

0x8164,	// (0x000535e1) mup_equalizer_pane_cp6

0x8176,	// (0x000535f3) mup_equalizer_pane_cp7

0xe0d9,	// (0x00059556) bg_popup_call_poc_act_pane_g9

0xe0e1,	// (0x0005955e) bg_popup_call_poc_act_pane_g10

0xe0e9,	// (0x00059566) bg_popup_call_poc_act_pane_g11

0x000a,

0x3079,	// (0x0004e4f6) mup_scale_pane

0x3197,	// (0x0004e614) mup_scale_pane_g1

0x3e6c,	// (0x0004f2e9) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0005a8cc) mup_scale_pane_g

0x3e90,	// (0x0004f30d) msg_data_pane

0x3e98,	// (0x0004f315) scroll_pane_cp017

0x819a,	// (0x00053617) bg_list_pane_cp04_ParamLimits

0x819a,	// (0x00053617) bg_list_pane_cp04

0x3ea0,	// (0x0004f31d) msg_data_pane_g1

0x7b80,	// (0x00052ffd) msg_data_pane_g2

0x7b88,	// (0x00053005) msg_data_pane_g3

0x81ba,	// (0x00053637) msg_data_pane_g4

0x7b98,	// (0x00053015) msg_data_pane_g5

0x7dce,	// (0x0005324b) msg_data_pane_g6

0x81c2,	// (0x0005363f) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0005a8db) msg_data_pane_g

0x81ca,	// (0x00053647) msg_text_pane_ParamLimits

0x81ca,	// (0x00053647) msg_text_pane

0x81f6,	// (0x00053673) qrid_highlight_pane_cp011_ParamLimits

0x81f6,	// (0x00053673) qrid_highlight_pane_cp011

0x2e1e,	// (0x0004e29b) msg_body_pane

0x2e1e,	// (0x0004e29b) msg_header_pane

0x3eb1,	// (0x0004f32e) input_focus_pane_cp07

0x8218,	// (0x00053695) msg_header_pane_t1_ParamLimits

0x8218,	// (0x00053695) msg_header_pane_t1

0x05c5,	// (0x0004ba42) msg_header_pane_t2_ParamLimits

0x05c5,	// (0x0004ba42) msg_header_pane_t2

0x0001,

0xf472,	// (0x0005a8ef) msg_header_pane_t_ParamLimits

0xf472,	// (0x0005a8ef) msg_header_pane_t

0x3ec6,	// (0x0004f343) msg_body_pane_g1

0x822a,	// (0x000536a7) msg_body_pane_t1_ParamLimits

0x822a,	// (0x000536a7) msg_body_pane_t1

0x05d7,	// (0x0004ba54) msg_body_pane_t2_ParamLimits

0x05d7,	// (0x0004ba54) msg_body_pane_t2

0x05e9,	// (0x0004ba66) msg_body_pane_t3_ParamLimits

0x05e9,	// (0x0004ba66) msg_body_pane_t3

0x0002,

0xf477,	// (0x0005a8f4) msg_body_pane_t_ParamLimits

0xf477,	// (0x0005a8f4) msg_body_pane_t

0x82a3,	// (0x00053720) main_viewer_pane_g1_ParamLimits

0x82a3,	// (0x00053720) main_viewer_pane_g1

0x82af,	// (0x0005372c) main_viewer_pane_g2_ParamLimits

0x82af,	// (0x0005372c) main_viewer_pane_g2

0x82bb,	// (0x00053738) main_viewer_pane_g3_ParamLimits

0x82bb,	// (0x00053738) main_viewer_pane_g3

0x82ca,	// (0x00053747) main_viewer_pane_g4_ParamLimits

0x82ca,	// (0x00053747) main_viewer_pane_g4

0x82d9,	// (0x00053756) main_viewer_pane_g5_ParamLimits

0x82d9,	// (0x00053756) main_viewer_pane_g5

0x82d9,	// (0x00053756) main_viewer_pane_g7_ParamLimits

0x82d9,	// (0x00053756) main_viewer_pane_g7

0x82eb,	// (0x00053768) main_viewer_pane_g8_ParamLimits

0x82eb,	// (0x00053768) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0005a904) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0005a904) main_viewer_pane_g

0x3ece,	// (0x0004f34b) viewer_content_pane_ParamLimits

0x3ece,	// (0x0004f34b) viewer_content_pane

0x831b,	// (0x00053798) main_postcard_pane_g1_ParamLimits

0x831b,	// (0x00053798) main_postcard_pane_g1

0x8327,	// (0x000537a4) main_postcard_pane_g2_ParamLimits

0x8327,	// (0x000537a4) main_postcard_pane_g2

0x8333,	// (0x000537b0) main_postcard_pane_g3_ParamLimits

0x8333,	// (0x000537b0) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0005a915) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0005a915) main_postcard_pane_g

0x833f,	// (0x000537bc) main_postcard_pane_g4

0xe305,	// (0x00059782) smil_status_volume_pane_g2

0x8363,	// (0x000537e0) postcard_pane_ParamLimits

0x8363,	// (0x000537e0) postcard_pane

0x3afd,	// (0x0004ef7a) postcard_pane_g1_ParamLimits

0x3afd,	// (0x0004ef7a) postcard_pane_g1

0x8393,	// (0x00053810) postcard_pane_g2_ParamLimits

0x8393,	// (0x00053810) postcard_pane_g2

0x839f,	// (0x0005381c) postcard_pane_g3_ParamLimits

0x839f,	// (0x0005381c) postcard_pane_g3

0x3eea,	// (0x0004f367) postcard_pane_g4_ParamLimits

0x3eea,	// (0x0004f367) postcard_pane_g4

0x83ab,	// (0x00053828) postcard_pane_g5_ParamLimits

0x83ab,	// (0x00053828) postcard_pane_g5

0x83b7,	// (0x00053834) postcard_pane_g6_ParamLimits

0x83b7,	// (0x00053834) postcard_pane_g6

0x3edc,	// (0x0004f359) postcard_pane_g7_ParamLimits

0x3edc,	// (0x0004f359) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0005a922) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0005a922) postcard_pane_g

0x83c3,	// (0x00053840) main_mp2_pane_g1_ParamLimits

0x83c3,	// (0x00053840) main_mp2_pane_g1

0x83cf,	// (0x0005384c) main_mp2_pane_g2_ParamLimits

0x83cf,	// (0x0005384c) main_mp2_pane_g2

0x83db,	// (0x00053858) main_mp2_pane_g3_ParamLimits

0x83db,	// (0x00053858) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0005a931) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0005a931) main_mp2_pane_g

0x83e7,	// (0x00053864) main_mp2_pane_t1_ParamLimits

0x83e7,	// (0x00053864) main_mp2_pane_t1

0x83fc,	// (0x00053879) main_mp2_pane_t2_ParamLimits

0x83fc,	// (0x00053879) main_mp2_pane_t2

0x840e,	// (0x0005388b) main_mp2_pane_t3_ParamLimits

0x840e,	// (0x0005388b) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0005a938) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0005a938) main_mp2_pane_t

0x3ef8,	// (0x0004f375) pec_content_pane_ParamLimits

0x3ef8,	// (0x0004f375) pec_content_pane

0x351a,	// (0x0004e997) scroll_pane_cp015

0x3f0a,	// (0x0004f387) pec_attribute_pane_ParamLimits

0x3f0a,	// (0x0004f387) pec_attribute_pane

0x8420,	// (0x0005389d) pec_content_pane_g1_ParamLimits

0x8420,	// (0x0005389d) pec_content_pane_g1

0x3f1a,	// (0x0004f397) pec_content_pane_t1_ParamLimits

0x3f1a,	// (0x0004f397) pec_content_pane_t1

0x3f2c,	// (0x0004f3a9) pec_content_pane_t2_ParamLimits

0x3f2c,	// (0x0004f3a9) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0005a93f) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0005a93f) pec_content_pane_t

0x842c,	// (0x000538a9) list_single_graphic_pane_cp01_ParamLimits

0x842c,	// (0x000538a9) list_single_graphic_pane_cp01

0x3079,	// (0x0004e4f6) bg_popup_sub_pane_cp04

0x3f3e,	// (0x0004f3bb) popup_mup_playback_window_g1

0x3f4a,	// (0x0004f3c7) popup_mup_playback_window_t1

0x3f5f,	// (0x0004f3dc) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0005a944) popup_mup_playback_window_t

0x3f96,	// (0x0004f413) main_image_pane_g1_ParamLimits

0x3f96,	// (0x0004f413) main_image_pane_g1

0x3fd9,	// (0x0004f456) scroll_pane_cp018_ParamLimits

0x3fd9,	// (0x0004f456) scroll_pane_cp018

0x3ff1,	// (0x0004f46e) scroll_pane_cp016_ParamLimits

0x3ff1,	// (0x0004f46e) scroll_pane_cp016

0x84b1,	// (0x0005392e) smil2_image_pane_ParamLimits

0x84b1,	// (0x0005392e) smil2_image_pane

0x84d9,	// (0x00053956) smil2_root_pane_ParamLimits

0x84d9,	// (0x00053956) smil2_root_pane

0x8505,	// (0x00053982) smil2_text_pane_ParamLimits

0x8505,	// (0x00053982) smil2_text_pane

0x2e1e,	// (0x0004e29b) bg_list_pane_cp06

0x4025,	// (0x0004f4a2) grid_radio_pane

0x2e1e,	// (0x0004e29b) bg_popup_window_pane_cp06

0x402d,	// (0x0004f4aa) main_fmradio_pane_t1

0x3a29,	// (0x0004eea6) heading_pane_cp04

0x403b,	// (0x0004f4b8) main_fmradio_pane_t2

0xe131,	// (0x000595ae) popup_cale_lunar_info_window_g1

0x4049,	// (0x0004f4c6) main_fmradio_pane_t3

0xe139,	// (0x000595b6) popup_cale_lunar_info_window_g2

0x4057,	// (0x0004f4d4) main_fmradio_pane_t4

0x0001,

0x4065,	// (0x0004f4e2) main_fmradio_pane_t5

0x0004,

0xf5b5,	// (0x0005aa32) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0005a959) main_fmradio_pane_t

0x4073,	// (0x0004f4f0) wait_bar_pane_cp03

0x33d2,	// (0x0004e84f) cell_fmradio_pane_ParamLimits

0x33d2,	// (0x0004e84f) cell_fmradio_pane

0x3edc,	// (0x0004f359) cell_fmradio_pane_g1_ParamLimits

0x3edc,	// (0x0004f359) cell_fmradio_pane_g1

0x2e1e,	// (0x0004e29b) grid_highlight_pane_cp011

0x407b,	// (0x0004f4f8) poc_content_pane_ParamLimits

0x407b,	// (0x0004f4f8) poc_content_pane

0x408e,	// (0x0004f50b) scroll_pane_cp019

0x8539,	// (0x000539b6) popup_call_poc_act_window_ParamLimits

0x8539,	// (0x000539b6) popup_call_poc_act_window

0x8546,	// (0x000539c3) popup_call_poc_inact_window_ParamLimits

0x8546,	// (0x000539c3) popup_call_poc_inact_window

0xf579,	// (0x0005a9f6) bg_popup_call_poc_act_pane_g

0xe0f1,	// (0x0005956e) bg_popup_call_poc_inact_pane_g1

0xe0f9,	// (0x00059576) bg_popup_call_poc_inact_pane_g2

0x4096,	// (0x0004f513) popup_call_poc_act_window_g2

0xe101,	// (0x0005957e) bg_popup_call_poc_inact_pane_g3

0xe081,	// (0x000594fe) bg_popup_call_poc_inact_pane_g4

0xe109,	// (0x00059586) bg_popup_call_poc_inact_pane_g5

0x409e,	// (0x0004f51b) popup_call_poc_act_window_t1_ParamLimits

0x409e,	// (0x0004f51b) popup_call_poc_act_window_t1

0x40c6,	// (0x0004f543) popup_call_poc_act_window_t2_ParamLimits

0x40c6,	// (0x0004f543) popup_call_poc_act_window_t2

0x40ee,	// (0x0004f56b) popup_call_poc_act_window_t3_ParamLimits

0x40ee,	// (0x0004f56b) popup_call_poc_act_window_t3

0x4116,	// (0x0004f593) popup_call_poc_act_window_t4_ParamLimits

0x4116,	// (0x0004f593) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0005a964) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0005a964) popup_call_poc_act_window_t

0xe111,	// (0x0005958e) bg_popup_call_poc_inact_pane_g6

0xe119,	// (0x00059596) bg_popup_call_poc_inact_pane_g7

0xe121,	// (0x0005959e) bg_popup_call_poc_inact_pane_g8

0x4128,	// (0x0004f5a5) popup_call_poc_inact_window_g2

0xe129,	// (0x000595a6) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf590,	// (0x0005aa0d) bg_popup_call_poc_inact_pane_g

0x4130,	// (0x0004f5ad) popup_call_poc_inact_window_t1_ParamLimits

0x4130,	// (0x0004f5ad) popup_call_poc_inact_window_t1

0x4145,	// (0x0004f5c2) popup_call_poc_inact_window_t2_ParamLimits

0x4145,	// (0x0004f5c2) popup_call_poc_inact_window_t2

0x415a,	// (0x0004f5d7) popup_call_poc_inact_window_t3_ParamLimits

0x415a,	// (0x0004f5d7) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0005a96d) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0005a96d) popup_call_poc_inact_window_t

0xe278,	// (0x000596f5) context_pane_ParamLimits

0x8a8b,	// (0x00053f08) signal_pane_ParamLimits

0x3311,	// (0x0004e78e) main_call2_pane

0x8a0d,	// (0x00053e8a) popup_phob_thumbnail2_window_ParamLimits

0x8a0d,	// (0x00053e8a) popup_phob_thumbnail2_window

0x8255,	// (0x000536d2) aid_hotspot_pointer_arrow_pane

0x825d,	// (0x000536da) aid_hotspot_pointer_hand_pane

0x87f5,	// (0x00053c72) phob_pre_status_pane_g5

0x67d8,	// (0x00051c55) cams_zoom_pane_ParamLimits

0x67e4,	// (0x00051c61) image_vga_pane_ParamLimits

0x67f1,	// (0x00051c6e) main_camera_pane_g1_ParamLimits

0x67fd,	// (0x00051c7a) main_camera_pane_g2_ParamLimits

0x6809,	// (0x00051c86) main_camera_pane_g3_ParamLimits

0x6815,	// (0x00051c92) main_camera_pane_g4_ParamLimits

0x6821,	// (0x00051c9e) main_camera_pane_g5_ParamLimits

0x682d,	// (0x00051caa) main_camera_pane_g6_ParamLimits

0x6839,	// (0x00051cb6) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0005a66c) main_camera_pane_g_ParamLimits

0x6845,	// (0x00051cc2) main_camera_pane_t1_ParamLimits

0x6857,	// (0x00051cd4) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0005a67d) main_camera_pane_t_ParamLimits

0x3079,	// (0x0004e4f6) bg_popup_preview_window_pane_cp01_ParamLimits

0x3079,	// (0x0004e4f6) bg_popup_preview_window_pane_cp01

0x416f,	// (0x0004f5ec) popup_phob_thumbnail2_window_g1_ParamLimits

0x416f,	// (0x0004f5ec) popup_phob_thumbnail2_window_g1

0x2e1e,	// (0x0004e29b) call2_cli_visual_pane

0x8562,	// (0x000539df) popup_call2_audio_conf_window_ParamLimits

0x8562,	// (0x000539df) popup_call2_audio_conf_window

0x8575,	// (0x000539f2) popup_call2_audio_first_window_ParamLimits

0x8575,	// (0x000539f2) popup_call2_audio_first_window

0x85f1,	// (0x00053a6e) popup_call2_audio_in_window_ParamLimits

0x85f1,	// (0x00053a6e) popup_call2_audio_in_window

0x8621,	// (0x00053a9e) popup_call2_audio_out_window_ParamLimits

0x8621,	// (0x00053a9e) popup_call2_audio_out_window

0x866d,	// (0x00053aea) popup_call2_audio_second_window_ParamLimits

0x866d,	// (0x00053aea) popup_call2_audio_second_window

0x86b9,	// (0x00053b36) popup_call2_audio_wait_window_ParamLimits

0x86b9,	// (0x00053b36) popup_call2_audio_wait_window

0x2e1e,	// (0x0004e29b) bg_popup_call2_act_pane_cp03

0x305b,	// (0x0004e4d8) list_conf_pane_cp

0x417b,	// (0x0004f5f8) popup_call2_audio_conf_window_t1

0x3a86,	// (0x0004ef03) list_single_graphic_popup_conf2_pane_ParamLimits

0x3a86,	// (0x0004ef03) list_single_graphic_popup_conf2_pane

0x3a99,	// (0x0004ef16) list_highlight_pane_cp04

0x4189,	// (0x0004f606) list_single_graphic_popup_conf2_pane_g1

0x3aaa,	// (0x0004ef27) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0005a974) list_single_graphic_popup_conf2_pane_g

0x4191,	// (0x0004f60e) list_single_graphic_popup_conf2_pane_t1

0x419f,	// (0x0004f61c) bg_popup_call2_act_pane_cp01_ParamLimits

0x419f,	// (0x0004f61c) bg_popup_call2_act_pane_cp01

0x4229,	// (0x0004f6a6) call_type_pane_cp05_ParamLimits

0x4229,	// (0x0004f6a6) call_type_pane_cp05

0x427d,	// (0x0004f6fa) popup_call2_audio_second_window_g1_ParamLimits

0x427d,	// (0x0004f6fa) popup_call2_audio_second_window_g1

0x42d1,	// (0x0004f74e) popup_call2_audio_second_window_g2_ParamLimits

0x42d1,	// (0x0004f74e) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0005a979) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0005a979) popup_call2_audio_second_window_g

0x4336,	// (0x0004f7b3) popup_call2_audio_second_window_t1_ParamLimits

0x4336,	// (0x0004f7b3) popup_call2_audio_second_window_t1

0x43f1,	// (0x0004f86e) popup_call2_audio_second_window_t2_ParamLimits

0x43f1,	// (0x0004f86e) popup_call2_audio_second_window_t2

0x4444,	// (0x0004f8c1) popup_call2_audio_second_window_t3_ParamLimits

0x4444,	// (0x0004f8c1) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0005a980) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0005a980) popup_call2_audio_second_window_t

0x2e1e,	// (0x0004e29b) bg_popup_call2_in_pane_cp02

0x2e28,	// (0x0004e2a5) call_type_pane_cp04

0x2e30,	// (0x0004e2ad) popup_call2_audio_wait_window_g1

0x2e38,	// (0x0004e2b5) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0005a55b) popup_call2_audio_wait_window_g

0x2e40,	// (0x0004e2bd) popup_call2_audio_wait_window_t3

0x4537,	// (0x0004f9b4) bg_popup_call2_act_pane_ParamLimits

0x4537,	// (0x0004f9b4) bg_popup_call2_act_pane

0x45f7,	// (0x0004fa74) call_type_pane_cp03_ParamLimits

0x45f7,	// (0x0004fa74) call_type_pane_cp03

0x465b,	// (0x0004fad8) popup_call2_audio_first_window_g1_ParamLimits

0x465b,	// (0x0004fad8) popup_call2_audio_first_window_g1

0x46cb,	// (0x0004fb48) popup_call2_audio_first_window_g2_ParamLimits

0x46cb,	// (0x0004fb48) popup_call2_audio_first_window_g2

0x3afd,	// (0x0004ef7a) popup_call2_audio_first_window_g3_ParamLimits

0x3afd,	// (0x0004ef7a) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0005a989) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0005a989) popup_call2_audio_first_window_g

0x47a9,	// (0x0004fc26) popup_call2_audio_first_window_t1_ParamLimits

0x47a9,	// (0x0004fc26) popup_call2_audio_first_window_t1

0x48ac,	// (0x0004fd29) popup_call2_audio_first_window_t4_ParamLimits

0x48ac,	// (0x0004fd29) popup_call2_audio_first_window_t4

0x49a9,	// (0x0004fe26) popup_call2_audio_first_window_t5_ParamLimits

0x49a9,	// (0x0004fe26) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0005a994) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0005a994) popup_call2_audio_first_window_t

0x3071,	// (0x0004e4ee) bg_popup_call2_act_pane_g1

0xe141,	// (0x000595be) popup_cale_lunar_info_window_t1

0xe14f,	// (0x000595cc) popup_cale_lunar_info_window_t2

0xe15d,	// (0x000595da) popup_cale_lunar_info_window_t3

0x2e1e,	// (0x0004e29b) bg_popup_call2_bubble_pane

0xdb95,	// (0x00059012) bg_popup_call2_in_pane_cp01_ParamLimits

0xdb95,	// (0x00059012) bg_popup_call2_in_pane_cp01

0x29f1,	// (0x0004de6e) call_type_pane_cp02

0xdbdd,	// (0x0005905a) popup_call2_audio_out_window_g1_ParamLimits

0xdbdd,	// (0x0005905a) popup_call2_audio_out_window_g1

0xdc09,	// (0x00059086) popup_call2_audio_out_window_g2_ParamLimits

0xdc09,	// (0x00059086) popup_call2_audio_out_window_g2

0xdc31,	// (0x000590ae) popup_call2_audio_out_window_g3_ParamLimits

0xdc31,	// (0x000590ae) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0005a99d) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0005a99d) popup_call2_audio_out_window_g

0xdc6c,	// (0x000590e9) popup_call2_audio_out_window_t1_ParamLimits

0xdc6c,	// (0x000590e9) popup_call2_audio_out_window_t1

0xdccb,	// (0x00059148) popup_call2_audio_out_window_t2_ParamLimits

0xdccb,	// (0x00059148) popup_call2_audio_out_window_t2

0xdd1f,	// (0x0005919c) popup_call2_audio_out_window_t3_ParamLimits

0xdd1f,	// (0x0005919c) popup_call2_audio_out_window_t3

0xdd35,	// (0x000591b2) popup_call2_audio_out_window_t4_ParamLimits

0xdd35,	// (0x000591b2) popup_call2_audio_out_window_t4

0xdd4b,	// (0x000591c8) popup_call2_audio_out_window_t5_ParamLimits

0xdd4b,	// (0x000591c8) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0005a9a6) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0005a9a6) popup_call2_audio_out_window_t

0xddaf,	// (0x0005922c) bg_popup_call2_in_pane_ParamLimits

0xddaf,	// (0x0005922c) bg_popup_call2_in_pane

0xde0b,	// (0x00059288) popup_call2_audio_in_window_g1_ParamLimits

0xde0b,	// (0x00059288) popup_call2_audio_in_window_g1

0xde43,	// (0x000592c0) popup_call2_audio_in_window_g2_ParamLimits

0xde43,	// (0x000592c0) popup_call2_audio_in_window_g2

0xde7b,	// (0x000592f8) popup_call2_audio_in_window_g3_ParamLimits

0xde7b,	// (0x000592f8) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0005a9b3) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0005a9b3) popup_call2_audio_in_window_g

0xded3,	// (0x00059350) popup_call2_audio_in_window_t1_ParamLimits

0xded3,	// (0x00059350) popup_call2_audio_in_window_t1

0xdf53,	// (0x000593d0) popup_call2_audio_in_window_t2_ParamLimits

0xdf53,	// (0x000593d0) popup_call2_audio_in_window_t2

0xdfd3,	// (0x00059450) popup_call2_audio_in_window_t3_ParamLimits

0xdfd3,	// (0x00059450) popup_call2_audio_in_window_t3

0xdfed,	// (0x0005946a) popup_call2_audio_in_window_t4_ParamLimits

0xdfed,	// (0x0005946a) popup_call2_audio_in_window_t4

0xdfff,	// (0x0005947c) popup_call2_audio_in_window_t5_ParamLimits

0xdfff,	// (0x0005947c) popup_call2_audio_in_window_t5

0xe014,	// (0x00059491) popup_call2_audio_in_window_t6_ParamLimits

0xe014,	// (0x00059491) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0005a9bc) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0005a9bc) popup_call2_audio_in_window_t

0x3071,	// (0x0004e4ee) bg_popup_call2_in_pane_g1

0xe16b,	// (0x000595e8) popup_cale_lunar_info_window_t4

0x0003,

0xf5ba,	// (0x0005aa37) popup_cale_lunar_info_window_t

0x3079,	// (0x0004e4f6) bg_popup_call2_rect_pane_ParamLimits

0x3079,	// (0x0004e4f6) bg_popup_call2_rect_pane

0x2e1e,	// (0x0004e29b) call2_cli_visual_graphic_pane

0x2e1e,	// (0x0004e29b) call2_cli_visual_text_pane

0x8b10,	// (0x00053f8d) smil_status_volume_pane_g3

0x0002,

0x3197,	// (0x0004e614) call2_cli_visual_graphic_pane_g1

0x3197,	// (0x0004e614) call2_cli_visual_graphic_pane_g2

0x3197,	// (0x0004e614) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0005a9c9) call2_cli_visual_graphic_pane_g

0xe029,	// (0x000594a6) bg_popup_call2_rect_pane_g1

0x3235,	// (0x0004e6b2) bg_popup_call2_rect_pane_g2

0xe031,	// (0x000594ae) bg_popup_call2_rect_pane_g3

0xe039,	// (0x000594b6) bg_popup_call2_rect_pane_g4

0xe041,	// (0x000594be) bg_popup_call2_rect_pane_g5

0xe049,	// (0x000594c6) bg_popup_call2_rect_pane_g6

0xe051,	// (0x000594ce) bg_popup_call2_rect_pane_g7

0xe059,	// (0x000594d6) bg_popup_call2_rect_pane_g8

0xe061,	// (0x000594de) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0005a9d0) bg_popup_call2_rect_pane_g

0xe069,	// (0x000594e6) bg_popup_call2_bubble_pane_g1

0xe071,	// (0x000594ee) bg_popup_call2_bubble_pane_g2

0xe079,	// (0x000594f6) bg_popup_call2_bubble_pane_g3

0xe081,	// (0x000594fe) bg_popup_call2_bubble_pane_g4

0xe089,	// (0x00059506) bg_popup_call2_bubble_pane_g5

0xe091,	// (0x0005950e) bg_popup_call2_bubble_pane_g6

0xe099,	// (0x00059516) bg_popup_call2_bubble_pane_g7

0xe0a1,	// (0x0005951e) bg_popup_call2_bubble_pane_g8

0xe0a9,	// (0x00059526) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0005a9e3) bg_popup_call2_bubble_pane_g

0x61dc,	// (0x00051659) aid_cale_week_size_cell_pane

0x6869,	// (0x00051ce6) aid_cams_cif_uncrop_pane_ParamLimits

0x6869,	// (0x00051ce6) aid_cams_cif_uncrop_pane

0x69c1,	// (0x00051e3e) aid_cams_size_cell_ParamLimits

0x69c1,	// (0x00051e3e) aid_cams_size_cell

0x69cd,	// (0x00051e4a) grid_cams_pane_ParamLimits

0x69d9,	// (0x00051e56) linegrid_cams_pane_ParamLimits

0x6ae8,	// (0x00051f65) call_video_pane_t1

0x6b05,	// (0x00051f82) call_video_pane_t2

0x0001,

0xf253,	// (0x0005a6d0) call_video_pane_t

0x6ee7,	// (0x00052364) aid_cale_month_size_cell_pane_ParamLimits

0x6ee7,	// (0x00052364) aid_cale_month_size_cell_pane

0xf603,	// (0x0005aa80) smil_status_volume_pane_g

0x8b1d,	// (0x00053f9a) volume_smil_pane_ParamLimits

0x5a3f,	// (0x00050ebc) aid_popup2_width_pane

0x60e9,	// (0x00051566) cell_qdial_pane_g4_ParamLimits

0x60e9,	// (0x00051566) cell_qdial_pane_g4

0x7cc4,	// (0x00053141) aid_blid_cardinal_pane_ParamLimits

0x7cd0,	// (0x0005314d) aid_blid_destination_pane_ParamLimits

0x7cd0,	// (0x0005314d) aid_blid_destination_pane

0x3079,	// (0x0004e4f6) bg_popup_call_poc_act_pane_ParamLimits

0x3079,	// (0x0004e4f6) bg_popup_call_poc_act_pane

0x3079,	// (0x0004e4f6) bg_popup_call_poc_inact_pane_ParamLimits

0x3079,	// (0x0004e4f6) bg_popup_call_poc_inact_pane

0xe0b1,	// (0x0005952e) bg_popup_call_poc_act_pane_g1

0xe0b9,	// (0x00059536) bg_popup_call_poc_act_pane_g2

0xe0c1,	// (0x0005953e) bg_popup_call_poc_act_pane_g3

0xe081,	// (0x000594fe) bg_popup_call_poc_act_pane_g4

0xe089,	// (0x00059506) bg_popup_call_poc_act_pane_g5

0xe0c9,	// (0x00059546) bg_popup_call_poc_act_pane_g6

0xe099,	// (0x00059516) bg_popup_call_poc_act_pane_g7

0xe0d1,	// (0x0005954e) bg_popup_call_poc_act_pane_g8

0x2e1e,	// (0x0004e29b) main_usb_pane

0x896c,	// (0x00053de9) popup_cale_lunar_info_window

0x6d8a,	// (0x00052207) im_reading_pane_t1_ParamLimits

0x3463,	// (0x0004e8e0) list_im_pane_ParamLimits

0x3474,	// (0x0004e8f1) scroll_pane_cp07_ParamLimits

0x2e1e,	// (0x0004e29b) grid_highlight_pane_cp012

0x3079,	// (0x0004e4f6) mup_scale_pane_ParamLimits

0x3afd,	// (0x0004ef7a) main_usb_pane_g1_ParamLimits

0x3afd,	// (0x0004ef7a) main_usb_pane_g1

0x871a,	// (0x00053b97) main_usb_pane_g2_ParamLimits

0x871a,	// (0x00053b97) main_usb_pane_g2

0x0001,

0xf5a3,	// (0x0005aa20) main_usb_pane_g_ParamLimits

0xf5a3,	// (0x0005aa20) main_usb_pane_g

0x8726,	// (0x00053ba3) main_usb_pane_t1_ParamLimits

0x8726,	// (0x00053ba3) main_usb_pane_t1

0x8738,	// (0x00053bb5) main_usb_pane_t2_ParamLimits

0x8738,	// (0x00053bb5) main_usb_pane_t2

0x874a,	// (0x00053bc7) main_usb_pane_t3_ParamLimits

0x874a,	// (0x00053bc7) main_usb_pane_t3

0x875c,	// (0x00053bd9) main_usb_pane_t4_ParamLimits

0x875c,	// (0x00053bd9) main_usb_pane_t4

0x876e,	// (0x00053beb) main_usb_pane_t5_ParamLimits

0x876e,	// (0x00053beb) main_usb_pane_t5

0x8780,	// (0x00053bfd) main_usb_pane_t6_ParamLimits

0x8780,	// (0x00053bfd) main_usb_pane_t6

0x0005,

0xf5a8,	// (0x0005aa25) main_usb_pane_t_ParamLimits

0x3be1,	// (0x0004f05e) aid_text_placing

0x7c70,	// (0x000530ed) main_location2_pane_t1_ParamLimits

0x7c86,	// (0x00053103) main_location2_pane_t2_ParamLimits

0x7c9c,	// (0x00053119) main_location2_pane_t3_ParamLimits

0x7cb2,	// (0x0005312f) main_location2_pane_t4_ParamLimits

0x7cb2,	// (0x0005312f) main_location2_pane_t4

0xf3b4,	// (0x0005a831) main_location2_pane_t_ParamLimits

0x30b5,	// (0x0004e532) find_pinb_pane_g2_ParamLimits

0x30b5,	// (0x0004e532) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0005a581) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0005a581) find_pinb_pane_g

0x30c1,	// (0x0004e53e) find_pinb_pane_t1_ParamLimits

0x30d3,	// (0x0004e550) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0005a586) find_pinb_pane_t_ParamLimits

0x2e1e,	// (0x0004e29b) main_call3_pane

0x728b,	// (0x00052708) cale_month_day_heading_pane_t1_ParamLimits

0x7311,	// (0x0005278e) cale_month_day_heading_pane_t2_ParamLimits

0x73a2,	// (0x0005281f) cale_month_day_heading_pane_t3_ParamLimits

0x7433,	// (0x000528b0) cale_month_day_heading_pane_t4_ParamLimits

0x74c4,	// (0x00052941) cale_month_day_heading_pane_t5_ParamLimits

0x7555,	// (0x000529d2) cale_month_day_heading_pane_t6_ParamLimits

0x75e6,	// (0x00052a63) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0005a708) cale_month_day_heading_pane_t_ParamLimits

0x7906,	// (0x00052d83) smil_status_volume_pane

0x837b,	// (0x000537f8) postcard_address_pane_ParamLimits

0x837b,	// (0x000537f8) postcard_address_pane

0x8387,	// (0x00053804) postcard_message_pane_ParamLimits

0x8387,	// (0x00053804) postcard_message_pane

0x86f6,	// (0x00053b73) call2_cli_visual_pane_t1_ParamLimits

0x86f6,	// (0x00053b73) call2_cli_visual_pane_t1

0x8c6e,	// (0x000540eb) postcard_message_pane_t1_ParamLimits

0x8c6e,	// (0x000540eb) postcard_message_pane_t1

0x8c57,	// (0x000540d4) postcard_address_pane_t1_ParamLimits

0x8c57,	// (0x000540d4) postcard_address_pane_t1

0x8c4a,	// (0x000540c7) popup_call3_audio_in_window_ParamLimits

0x8c4a,	// (0x000540c7) popup_call3_audio_in_window

0x8b32,	// (0x00053faf) bg_popup_call3_in_pane_ParamLimits

0x8b32,	// (0x00053faf) bg_popup_call3_in_pane

0x8b90,	// (0x0005400d) popup_call3_audio_in_window_g1_ParamLimits

0x8b90,	// (0x0005400d) popup_call3_audio_in_window_g1

0x8ba8,	// (0x00054025) popup_call3_audio_in_window_g2_ParamLimits

0x8ba8,	// (0x00054025) popup_call3_audio_in_window_g2

0x8bc0,	// (0x0005403d) popup_call3_audio_in_window_g3_ParamLimits

0x8bc0,	// (0x0005403d) popup_call3_audio_in_window_g3

0x0003,

0xf60a,	// (0x0005aa87) popup_call3_audio_in_window_g_ParamLimits

0xf60a,	// (0x0005aa87) popup_call3_audio_in_window_g

0x8be8,	// (0x00054065) popup_call3_audio_in_window_t1_ParamLimits

0x8be8,	// (0x00054065) popup_call3_audio_in_window_t1

0x8c10,	// (0x0005408d) popup_call3_audio_in_window_t2_ParamLimits

0x8c10,	// (0x0005408d) popup_call3_audio_in_window_t2

0x8c38,	// (0x000540b5) popup_call3_audio_in_window_t3_ParamLimits

0x8c38,	// (0x000540b5) popup_call3_audio_in_window_t3

0x0002,

0xf613,	// (0x0005aa90) popup_call3_audio_in_window_t_ParamLimits

0xf613,	// (0x0005aa90) popup_call3_audio_in_window_t

0x3311,	// (0x0004e78e) bg_popup_call3_rect_pane

0xe029,	// (0x000594a6) bg_popup_call3_rect_pane_g1

0x3235,	// (0x0004e6b2) bg_popup_call3_rect_pane_g2

0xe031,	// (0x000594ae) bg_popup_call3_rect_pane_g3

0xe039,	// (0x000594b6) bg_popup_call3_rect_pane_g4

0xe041,	// (0x000594be) bg_popup_call3_rect_pane_g5

0xe049,	// (0x000594c6) bg_popup_call3_rect_pane_g6

0xe051,	// (0x000594ce) bg_popup_call3_rect_pane_g7

0x7ffd,	// (0x0005347a) mup_visualizer_osc_pane

0x3dfe,	// (0x0004f27b) mup_visualizer_spec_pane

0x8b52,	// (0x00053fcf) call3_video_qcif_pane_ParamLimits

0x8b52,	// (0x00053fcf) call3_video_qcif_pane

0x8b62,	// (0x00053fdf) call3_video_qcif_uncrop_pane_ParamLimits

0x8b62,	// (0x00053fdf) call3_video_qcif_uncrop_pane

0x8b6e,	// (0x00053feb) call3_video_subqcif_pane_ParamLimits

0x8b6e,	// (0x00053feb) call3_video_subqcif_pane

0x8b80,	// (0x00053ffd) call3_video_subqcif_uncrop_pane_ParamLimits

0x8b80,	// (0x00053ffd) call3_video_subqcif_uncrop_pane

0x8bd8,	// (0x00054055) popup_call3_audio_in_window_g4_ParamLimits

0x8bd8,	// (0x00054055) popup_call3_audio_in_window_g4

0x8aff,	// (0x00053f7c) mup_spec_half_pane

0x8b08,	// (0x00053f85) mup_spec_half_pane_cp

0xe2d8,	// (0x00059755) mup_osc_middle_pane

0xe2e1,	// (0x0005975e) mup_visualizer_osc_pane_g1

0x8ae0,	// (0x00053f5d) mup_spec_bar_pane_ParamLimits

0x8ae0,	// (0x00053f5d) mup_spec_bar_pane

0xe2c5,	// (0x00059742) mup_spec_bar_pane_g1

0xe2cf,	// (0x0005974c) mup_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0005aa7b) mup_spec_bar_pane_g

0x61dc,	// (0x00051659) aid_cale_week_size_cell_pane_ParamLimits

0x61f1,	// (0x0005166e) bg_cale_heading_pane_ParamLimits

0x3273,	// (0x0004e6f0) bg_cale_pane_cp01_ParamLimits

0x6209,	// (0x00051686) cale_week_corner_pane_ParamLimits

0x6223,	// (0x000516a0) cale_week_day_heading_pane_ParamLimits

0x623b,	// (0x000516b8) cale_week_scroll_pane_g1_ParamLimits

0x624e,	// (0x000516cb) cale_week_scroll_pane_g2_ParamLimits

0x6261,	// (0x000516de) cale_week_scroll_pane_g3_ParamLimits

0x6274,	// (0x000516f1) cale_week_scroll_pane_g4_ParamLimits

0x6287,	// (0x00051704) cale_week_scroll_pane_g5_ParamLimits

0x629a,	// (0x00051717) cale_week_scroll_pane_g6_ParamLimits

0x62ad,	// (0x0005172a) cale_week_scroll_pane_g7_ParamLimits

0x62c0,	// (0x0005173d) cale_week_scroll_pane_g8_ParamLimits

0x62d3,	// (0x00051750) cale_week_scroll_pane_g9_ParamLimits

0x62e6,	// (0x00051763) cale_week_scroll_pane_g10_ParamLimits

0x62f9,	// (0x00051776) cale_week_scroll_pane_g11_ParamLimits

0x630c,	// (0x00051789) cale_week_scroll_pane_g12_ParamLimits

0x631f,	// (0x0005179c) cale_week_scroll_pane_g13_ParamLimits

0x6332,	// (0x000517af) cale_week_scroll_pane_g14_ParamLimits

0x6345,	// (0x000517c2) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0005a612) cale_week_scroll_pane_g_ParamLimits

0x636b,	// (0x000517e8) cale_week_time_pane_ParamLimits

0x637e,	// (0x000517fb) grid_cale_week_pane_ParamLimits

0x3290,	// (0x0004e70d) listscroll_cale_week_pane_t1

0x32a2,	// (0x0004e71f) scroll_pane_cp08_ParamLimits

0x6f3c,	// (0x000523b9) cale_month_corner_pane_ParamLimits

0x36a4,	// (0x0004eb21) cale_month_pane_t1

0x7252,	// (0x000526cf) cale_month_week_pane_ParamLimits

0x3afd,	// (0x0004ef7a) popup_call_status_window_g1_ParamLimits

0x7aa7,	// (0x00052f24) popup_call_status_window_g2_ParamLimits

0x7ab3,	// (0x00052f30) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0005a7b8) popup_call_status_window_g_ParamLimits

0x3a21,	// (0x0004ee9e) aid_call2_pane

0x820c,	// (0x00053689) msg_header_pane_g1

0x837b,	// (0x000537f8) postcard_address2_pane_ParamLimits

0x837b,	// (0x000537f8) postcard_address2_pane

0x8387,	// (0x00053804) postcard_message2_pane_ParamLimits

0x8387,	// (0x00053804) postcard_message2_pane

0x8a97,	// (0x00053f14) message2_row_pane_ParamLimits

0x8a97,	// (0x00053f14) message2_row_pane

0x8aaf,	// (0x00053f2c) address2_row_pane_ParamLimits

0x8aaf,	// (0x00053f2c) address2_row_pane

0xe293,	// (0x00059710) postcard_message2_row_pane_g1

0xe29b,	// (0x00059718) postcard_message2_row_pane_t1

0xe293,	// (0x00059710) address2_row_pane_g1

0xe29b,	// (0x00059718) address2_row_pane_t1

0x33ca,	// (0x0004e847) aid_size_cell_vorec

0x2e1e,	// (0x0004e29b) main_rss_pane

0x8ac2,	// (0x00053f3f) rss_list_single_pane_ParamLimits

0x8ac2,	// (0x00053f3f) rss_list_single_pane

0xe2a9,	// (0x00059726) rss_list_single_pane_t1

0xe2b7,	// (0x00059734) rss_list_single_pane_t2

0x0001,

0xf5f9,	// (0x0005aa76) rss_list_single_pane_t

0x2e1e,	// (0x0004e29b) main_camera2_pane

0x2e1e,	// (0x0004e29b) main_video2_pane

0x8cbe,	// (0x0005413b) cams_zoom_pane_cp2_ParamLimits

0x8cbe,	// (0x0005413b) cams_zoom_pane_cp2

0x8cca,	// (0x00054147) image2_vga_pane_ParamLimits

0x8cca,	// (0x00054147) image2_vga_pane

0x8cd9,	// (0x00054156) main_camera2_pane_g1_ParamLimits

0x8cd9,	// (0x00054156) main_camera2_pane_g1

0x8ce5,	// (0x00054162) main_camera2_pane_g2_ParamLimits

0x8ce5,	// (0x00054162) main_camera2_pane_g2

0x8cf1,	// (0x0005416e) main_camera2_pane_g3_ParamLimits

0x8cf1,	// (0x0005416e) main_camera2_pane_g3

0x8cfd,	// (0x0005417a) main_camera2_pane_g4_ParamLimits

0x8cfd,	// (0x0005417a) main_camera2_pane_g4

0x8d09,	// (0x00054186) main_camera2_pane_g5_ParamLimits

0x8d09,	// (0x00054186) main_camera2_pane_g5

0x8d15,	// (0x00054192) main_camera2_pane_g6_ParamLimits

0x8d15,	// (0x00054192) main_camera2_pane_g6

0x8d21,	// (0x0005419e) main_camera2_pane_g7_ParamLimits

0x8d21,	// (0x0005419e) main_camera2_pane_g7

0x8d2d,	// (0x000541aa) main_camera2_pane_g8_ParamLimits

0x8d2d,	// (0x000541aa) main_camera2_pane_g8

0x0008,

0xf61a,	// (0x0005aa97) main_camera2_pane_g_ParamLimits

0xf61a,	// (0x0005aa97) main_camera2_pane_g

0x8d45,	// (0x000541c2) main_camera2_pane_t1_ParamLimits

0x8d45,	// (0x000541c2) main_camera2_pane_t1

0x8d57,	// (0x000541d4) main_camera2_pane_t2_ParamLimits

0x8d57,	// (0x000541d4) main_camera2_pane_t2

0x8d69,	// (0x000541e6) main_camera2_pane_t3_ParamLimits

0x8d69,	// (0x000541e6) main_camera2_pane_t3

0x8d7b,	// (0x000541f8) main_camera2_pane_t4_ParamLimits

0x8d7b,	// (0x000541f8) main_camera2_pane_t4

0x0006,

0xf62d,	// (0x0005aaaa) main_camera2_pane_t_ParamLimits

0xf62d,	// (0x0005aaaa) main_camera2_pane_t

0x8dd6,	// (0x00054253) cams_zoom_pane_cp4_ParamLimits

0x8dd6,	// (0x00054253) cams_zoom_pane_cp4

0x8de6,	// (0x00054263) image2_cif_pane_ParamLimits

0x8de6,	// (0x00054263) image2_cif_pane

0x8df7,	// (0x00054274) image2_subqcif_pane_ParamLimits

0x8df7,	// (0x00054274) image2_subqcif_pane

0x8e04,	// (0x00054281) main_video2_pane_g1_ParamLimits

0x8e04,	// (0x00054281) main_video2_pane_g1

0x8e16,	// (0x00054293) main_video2_pane_g2_ParamLimits

0x8e16,	// (0x00054293) main_video2_pane_g2

0x8e26,	// (0x000542a3) main_video2_pane_g3_ParamLimits

0x8e26,	// (0x000542a3) main_video2_pane_g3

0x8e36,	// (0x000542b3) main_video2_pane_g4_ParamLimits

0x8e36,	// (0x000542b3) main_video2_pane_g4

0x8e46,	// (0x000542c3) main_video2_pane_g5_ParamLimits

0x8e46,	// (0x000542c3) main_video2_pane_g5

0x8e56,	// (0x000542d3) main_video2_pane_g6_ParamLimits

0x8e56,	// (0x000542d3) main_video2_pane_g6

0x0005,

0xf63c,	// (0x0005aab9) main_video2_pane_g_ParamLimits

0xf63c,	// (0x0005aab9) main_video2_pane_g

0x8e68,	// (0x000542e5) main_video2_pane_t1_ParamLimits

0x8e68,	// (0x000542e5) main_video2_pane_t1

0x8e82,	// (0x000542ff) main_video2_pane_t2_ParamLimits

0x8e82,	// (0x000542ff) main_video2_pane_t2

0x8ea8,	// (0x00054325) main_video2_pane_t3_ParamLimits

0x8ea8,	// (0x00054325) main_video2_pane_t3

0x0002,

0xf649,	// (0x0005aac6) main_video2_pane_t_ParamLimits

0xf649,	// (0x0005aac6) main_video2_pane_t

0x882f,	// (0x00053cac) call_muted_g2

0x0001,

0xf5eb,	// (0x0005aa68) call_muted_g

0x2e1e,	// (0x0004e29b) main_mup2_pane

0xe318,	// (0x00059795) main_mup2_pane_g1_ParamLimits

0xe318,	// (0x00059795) main_mup2_pane_g1

0x8ece,	// (0x0005434b) main_mup2_pane_g2_ParamLimits

0x8ece,	// (0x0005434b) main_mup2_pane_g2

0x913e,	// (0x000545bb) main_mup_pane_g13_cp1

0x9146,	// (0x000545c3) mup_volume_pane_cp1

0x8eee,	// (0x0005436b) main_mup2_pane_g4_ParamLimits

0x8eee,	// (0x0005436b) main_mup2_pane_g4

0x8eff,	// (0x0005437c) main_mup2_pane_g5_ParamLimits

0x8eff,	// (0x0005437c) main_mup2_pane_g5

0x8f10,	// (0x0005438d) main_mup2_pane_g6_ParamLimits

0x8f10,	// (0x0005438d) main_mup2_pane_g6

0x8f21,	// (0x0005439e) main_mup2_pane_g7_ParamLimits

0x8f21,	// (0x0005439e) main_mup2_pane_g7

0x0006,

0xf650,	// (0x0005aacd) main_mup2_pane_g_ParamLimits

0xf650,	// (0x0005aacd) main_mup2_pane_g

0x8f3d,	// (0x000543ba) main_mup2_pane_t1_ParamLimits

0x8f3d,	// (0x000543ba) main_mup2_pane_t1

0x8f54,	// (0x000543d1) main_mup2_pane_t2_ParamLimits

0x8f54,	// (0x000543d1) main_mup2_pane_t2

0x8f6b,	// (0x000543e8) main_mup2_pane_t3_ParamLimits

0x8f6b,	// (0x000543e8) main_mup2_pane_t3

0x8f82,	// (0x000543ff) main_mup2_pane_t4_ParamLimits

0x8f82,	// (0x000543ff) main_mup2_pane_t4

0x8f9c,	// (0x00054419) main_mup2_pane_t5_ParamLimits

0x8f9c,	// (0x00054419) main_mup2_pane_t5

0x8fb6,	// (0x00054433) main_mup2_pane_t6_ParamLimits

0x8fb6,	// (0x00054433) main_mup2_pane_t6

0x0005,

0xf65f,	// (0x0005aadc) main_mup2_pane_t_ParamLimits

0xf65f,	// (0x0005aadc) main_mup2_pane_t

0x8fee,	// (0x0005446b) mup2_visualizer_pane_ParamLimits

0x8fee,	// (0x0005446b) mup2_visualizer_pane

0x9020,	// (0x0005449d) mup_progress_pane_cp_ParamLimits

0x9020,	// (0x0005449d) mup_progress_pane_cp

0x9129,	// (0x000545a6) mup_volume_pane_cp_ParamLimits

0x9129,	// (0x000545a6) mup_volume_pane_cp

0x9037,	// (0x000544b4) mup2_visualizer_pane_g1_ParamLimits

0x9037,	// (0x000544b4) mup2_visualizer_pane_g1

0xe324,	// (0x000597a1) mup2_visualizer_pane_g2_ParamLimits

0xe324,	// (0x000597a1) mup2_visualizer_pane_g2

0x904c,	// (0x000544c9) mup2_visualizer_pane_g3_ParamLimits

0x904c,	// (0x000544c9) mup2_visualizer_pane_g3

0x0002,

0xf66c,	// (0x0005aae9) mup2_visualizer_pane_g_ParamLimits

0xf66c,	// (0x0005aae9) mup2_visualizer_pane_g

0x33ca,	// (0x0004e847) aid_size_cell_fmradio

0x8911,	// (0x00053d8e) aid_height_parent_landcape

0x3501,	// (0x0004e97e) wml_content_pane_cp

0x3509,	// (0x0004e986) wml_tabs_pane

0x3512,	// (0x0004e98f) popup_wml_miniature_window

0x351a,	// (0x0004e997) scroll_pane_cp021

0x352e,	// (0x0004e9ab) wml_content_pane_comp8

0x2e1e,	// (0x0004e29b) bg_popup_sub_pane_cp05

0xe342,	// (0x000597bf) popup_wml_miniature_window_g1

0xe34a,	// (0x000597c7) wml_miniature_view_pane

0x9058,	// (0x000544d5) aid_size_wml_view

0x9060,	// (0x000544dd) wml_miniature_view_pane_g1

0x9069,	// (0x000544e6) wml_miniature_view_pane_g2

0x9072,	// (0x000544ef) wml_miniature_view_pane_g3

0x907a,	// (0x000544f7) wml_miniature_view_pane_g4

0x9082,	// (0x000544ff) wml_miniature_view_pane_g5

0x908a,	// (0x00054507) wml_miniature_view_pane_g6

0x9092,	// (0x0005450f) wml_miniature_view_pane_g7

0x909a,	// (0x00054517) wml_miniature_view_pane_g8

0x0007,

0xf673,	// (0x0005aaf0) wml_miniature_view_pane_g

0xe318,	// (0x00059795) background_graphic_ParamLimits

0xe318,	// (0x00059795) background_graphic

0xe352,	// (0x000597cf) wml_tabs_2_pane

0xe35b,	// (0x000597d8) wml_tabs_3_pane_ParamLimits

0xe35b,	// (0x000597d8) wml_tabs_3_pane

0xe36d,	// (0x000597ea) wml_tabs_4_pane_ParamLimits

0xe36d,	// (0x000597ea) wml_tabs_4_pane

0xe383,	// (0x00059800) wml_tabs_5_pane_ParamLimits

0xe383,	// (0x00059800) wml_tabs_5_pane

0xe39d,	// (0x0005981a) wml_tabs_pane_g2_ParamLimits

0xe39d,	// (0x0005981a) wml_tabs_pane_g2

0xe3b1,	// (0x0005982e) wml_tabs_pane_g3_ParamLimits

0xe3b1,	// (0x0005982e) wml_tabs_pane_g3

0x90a2,	// (0x0005451f) wml_tabs_2_active_pane_ParamLimits

0x90a2,	// (0x0005451f) wml_tabs_2_active_pane

0x90b2,	// (0x0005452f) wml_tabs_2_passive_pane_ParamLimits

0x90b2,	// (0x0005452f) wml_tabs_2_passive_pane

0x90c2,	// (0x0005453f) wml_tabs_3_active_pane_cp_ParamLimits

0x90c2,	// (0x0005453f) wml_tabs_3_active_pane_cp

0x90d3,	// (0x00054550) wml_tabs_3_passive_pane_ParamLimits

0x90d3,	// (0x00054550) wml_tabs_3_passive_pane

0x90e4,	// (0x00054561) wml_tabs_3_passive_pane_cp_ParamLimits

0x90e4,	// (0x00054561) wml_tabs_3_passive_pane_cp

0x90f5,	// (0x00054572) tabs_4_active_pane

0x90fd,	// (0x0005457a) tabs_4_passive_pane

0x9105,	// (0x00054582) tabs_4_passive_pane_cp

0x910d,	// (0x0005458a) tabs_4_passive_pane_cp2

0x8712,	// (0x00053b8f) aid_height_text

0x7fca,	// (0x00053447) mup_volume_cont_pane_ParamLimits

0x7fca,	// (0x00053447) mup_volume_cont_pane

0x5d9b,	// (0x00051218) aid_size_cell_pinb

0x5da5,	// (0x00051222) aid_size_list_pinb

0x9009,	// (0x00054486) mup2_volume_cont_pane_ParamLimits

0x9009,	// (0x00054486) mup2_volume_cont_pane

0x9115,	// (0x00054592) mup2_volume_cont_pane_g1_ParamLimits

0x9115,	// (0x00054592) mup2_volume_cont_pane_g1

0x5a47,	// (0x00050ec4) aid_size_cell_touch_ParamLimits

0x5a47,	// (0x00050ec4) aid_size_cell_touch

0x5c9b,	// (0x00051118) touch_pane_ParamLimits

0x5c9b,	// (0x00051118) touch_pane

0x5c91,	// (0x0005110e) main_rss2_pane

0xe3ce,	// (0x0005984b) listscroll_rss2_pane

0xe3d7,	// (0x00059854) rss2_navigation_pane

0xe3df,	// (0x0005985c) list_rss2_pane

0x3b5e,	// (0x0004efdb) scroll_pane_cp22

0xe3e7,	// (0x00059864) rss2_navigation_pane_g1

0xe3f0,	// (0x0005986d) rss2_navigation_pane_g2

0xe3f8,	// (0x00059875) rss2_navigation_pane_g3

0x0002,

0xf684,	// (0x0005ab01) rss2_navigation_pane_g

0xe400,	// (0x0005987d) rss2_navigation_pane_t1

0x914e,	// (0x000545cb) rss2_list_single_pane_ParamLimits

0x914e,	// (0x000545cb) rss2_list_single_pane

0xe40e,	// (0x0005988b) rss2_list_single_pane_t2

0xe41c,	// (0x00059899) rss2_list_single_pane_t3_ParamLimits

0xe41c,	// (0x00059899) rss2_list_single_pane_t3

0xe439,	// (0x000598b6) rss2_list_single_pane_t4

0x78f0,	// (0x00052d6d) smil_status_pane_g1

0x891b,	// (0x00053d98) main_image2_pane_ParamLimits

0x891b,	// (0x00053d98) main_image2_pane

0x8d39,	// (0x000541b6) main_camera2_pane_g9_ParamLimits

0x8d39,	// (0x000541b6) main_camera2_pane_g9

0x8d8d,	// (0x0005420a) main_camera2_pane_t5_ParamLimits

0x8d8d,	// (0x0005420a) main_camera2_pane_t5

0x8d9f,	// (0x0005421c) main_camera2_pane_t6_ParamLimits

0x8d9f,	// (0x0005421c) main_camera2_pane_t6

0x9165,	// (0x000545e2) main_image2_pane_g1_ParamLimits

0x9165,	// (0x000545e2) main_image2_pane_g1

0x8527,	// (0x000539a4) smil2_video_pane_ParamLimits

0x8527,	// (0x000539a4) smil2_video_pane

0x5953,	// (0x00050dd0) aid_zoom_text_primary_cp

0x5c32,	// (0x000510af) popup_preview_fixed_window

0x345b,	// (0x0004e8d8) im_reading_pane_g1

0x8c95,	// (0x00054112) cams2_bc_adjust_pane_cp_ParamLimits

0x8c95,	// (0x00054112) cams2_bc_adjust_pane_cp

0x8dca,	// (0x00054247) cams2_bc_adjust_pane_ParamLimits

0x8dca,	// (0x00054247) cams2_bc_adjust_pane

0xe447,	// (0x000598c4) cams2_bc_adjust_pane_g1

0x9171,	// (0x000545ee) cams2_slider_pane

0x917a,	// (0x000545f7) cams2_slider_pane_g1

0x9183,	// (0x00054600) cams2_slider_pane_g2

0x0006,

0xf68b,	// (0x0005ab08) cams2_slider_pane_g

0x5e84,	// (0x00051301) calc_display_pane_ParamLimits

0x5e9c,	// (0x00051319) calc_paper_pane_ParamLimits

0x5eb8,	// (0x00051335) grid_calc_pane_ParamLimits

0x7b25,	// (0x00052fa2) popup_clock_digital_window_t1_ParamLimits

0x3fc2,	// (0x0004f43f) main_image_pane_t1

0x5e6a,	// (0x000512e7) aid_size_cell_calc_ParamLimits

0x5e6a,	// (0x000512e7) aid_size_cell_calc

0x894c,	// (0x00053dc9) popup_blid_sat_info2_window_ParamLimits

0x894c,	// (0x00053dc9) popup_blid_sat_info2_window

0xe457,	// (0x000598d4) aid_size_cell_blid

0xe45f,	// (0x000598dc) bg_popup_window_pane_cp07

0xe482,	// (0x000598ff) grid_popup_blid_pane

0xe48a,	// (0x00059907) heading_pane_cp05_ParamLimits

0xe48a,	// (0x00059907) heading_pane_cp05

0xe552,	// (0x000599cf) cell_popup_blid_pane_ParamLimits

0xe552,	// (0x000599cf) cell_popup_blid_pane

0xe572,	// (0x000599ef) cell_popup_blid_pane_g1

0xe57a,	// (0x000599f7) cell_popup_blid_pane_t1

0x8fd3,	// (0x00054450) mup2_indicator_pane_ParamLimits

0x8fd3,	// (0x00054450) mup2_indicator_pane

0x3311,	// (0x0004e78e) mup2_visualizer_osc_pane

0xe330,	// (0x000597ad) mup2_visualizer_spec_pane_ParamLimits

0xe330,	// (0x000597ad) mup2_visualizer_spec_pane

0x919d,	// (0x0005461a) mup2_spec_half_pane

0x91a6,	// (0x00054623) mup2_spec_half_pane_cp

0x91ae,	// (0x0005462b) mup2_spec_bar_pane_ParamLimits

0x91ae,	// (0x0005462b) mup2_spec_bar_pane

0xe2c5,	// (0x00059742) mup2_spec_bar_pane_g1

0xe2cf,	// (0x0005974c) mup2_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0005aa7b) mup2_spec_bar_pane_g

0x91cd,	// (0x0005464a) mup2_osc_middle_pane

0xe2e1,	// (0x0005975e) mup2_visualizer_osc_pane_g1

0x2924,	// (0x0004dda1) popup_number_entry_window_t1_ParamLimits

0x2937,	// (0x0004ddb4) popup_number_entry_window_t2_ParamLimits

0x2949,	// (0x0004ddc6) popup_number_entry_window_t3_ParamLimits

0x5ce8,	// (0x00051165) popup_number_entry_window_t5_ParamLimits

0x5ce8,	// (0x00051165) popup_number_entry_window_t5

0xf0af,	// (0x0005a52c) popup_number_entry_window_t_ParamLimits

0x295b,	// (0x0004ddd8) text_title_cp2_ParamLimits

0x8265,	// (0x000536e2) aid_hotspot_pointer_text2_pane

0x82f7,	// (0x00053774) main_viewer_pane_g9_ParamLimits

0x82f7,	// (0x00053774) main_viewer_pane_g9

0x36a4,	// (0x0004eb21) cale_month_pane_t1_ParamLimits

0x36ca,	// (0x0004eb47) bg_cale_pane_ParamLimits

0x36e2,	// (0x0004eb5f) list_cale_pane_ParamLimits

0x36f3,	// (0x0004eb70) listscroll_cale_day_pane_t1

0x3705,	// (0x0004eb82) scroll_pane_cp09_ParamLimits

0x8005,	// (0x00053482) main_mup_eq_pane_t1_ParamLimits

0x8005,	// (0x00053482) main_mup_eq_pane_t1

0x801b,	// (0x00053498) main_mup_eq_pane_t2_ParamLimits

0x801b,	// (0x00053498) main_mup_eq_pane_t2

0x8031,	// (0x000534ae) main_mup_eq_pane_t3_ParamLimits

0x8031,	// (0x000534ae) main_mup_eq_pane_t3

0x8047,	// (0x000534c4) main_mup_eq_pane_t4_ParamLimits

0x8047,	// (0x000534c4) main_mup_eq_pane_t4

0x805d,	// (0x000534da) main_mup_eq_pane_t5_ParamLimits

0x805d,	// (0x000534da) main_mup_eq_pane_t5

0x8073,	// (0x000534f0) main_mup_eq_pane_t6_ParamLimits

0x8073,	// (0x000534f0) main_mup_eq_pane_t6

0x8085,	// (0x00053502) main_mup_eq_pane_t7_ParamLimits

0x8085,	// (0x00053502) main_mup_eq_pane_t7

0x8097,	// (0x00053514) main_mup_eq_pane_t8_ParamLimits

0x8097,	// (0x00053514) main_mup_eq_pane_t8

0x80a9,	// (0x00053526) main_mup_eq_pane_t9_ParamLimits

0x80a9,	// (0x00053526) main_mup_eq_pane_t9

0x80bf,	// (0x0005353c) main_mup_eq_pane_t10_ParamLimits

0x80bf,	// (0x0005353c) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0005a8b7) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0005a8b7) main_mup_eq_pane_t

0x8152,	// (0x000535cf) mup_equalizer_pane_cp5_ParamLimits

0x8164,	// (0x000535e1) mup_equalizer_pane_cp6_ParamLimits

0x8176,	// (0x000535f3) mup_equalizer_pane_cp7_ParamLimits

0x5c91,	// (0x0005110e) main_gallery_pane

0xe2ea,	// (0x00059767) smil2_volume_pane

0xe2f2,	// (0x0005976f) smil_status_volume_pane_g1_ParamLimits

0xe305,	// (0x00059782) smil_status_volume_pane_g2_ParamLimits

0x8b10,	// (0x00053f8d) smil_status_volume_pane_g3_ParamLimits

0xf603,	// (0x0005aa80) smil_status_volume_pane_g_ParamLimits

0xe45f,	// (0x000598dc) bg_popup_window_pane_cp07_ParamLimits

0xe46d,	// (0x000598ea) blid_firmament_pane

0x91d6,	// (0x00054653) aid_size_cell_gallery_ParamLimits

0x91d6,	// (0x00054653) aid_size_cell_gallery

0x91e4,	// (0x00054661) grid_gallery_pane_ParamLimits

0x91e4,	// (0x00054661) grid_gallery_pane

0x91f0,	// (0x0005466d) cell_gallery_pane_ParamLimits

0x91f0,	// (0x0005466d) cell_gallery_pane

0xe588,	// (0x00059a05) bg_cell_gallery_focus_pane_ParamLimits

0xe588,	// (0x00059a05) bg_cell_gallery_focus_pane

0xe59a,	// (0x00059a17) cell_gallery_pane_g1_ParamLimits

0xe59a,	// (0x00059a17) cell_gallery_pane_g1

0x922f,	// (0x000546ac) cell_gallery_pane_g2_ParamLimits

0x922f,	// (0x000546ac) cell_gallery_pane_g2

0x923c,	// (0x000546b9) cell_gallery_pane_g3_ParamLimits

0x923c,	// (0x000546b9) cell_gallery_pane_g3

0xe5a6,	// (0x00059a23) cell_gallery_pane_g4_ParamLimits

0xe5a6,	// (0x00059a23) cell_gallery_pane_g4

0x0003,

0xf6b1,	// (0x0005ab2e) cell_gallery_pane_g_ParamLimits

0xf6b1,	// (0x0005ab2e) cell_gallery_pane_g

0xe5b2,	// (0x00059a2f) bg_cell_gallery_focus_pane_g1

0xe5ba,	// (0x00059a37) bg_cell_gallery_focus_pane_g2

0xe5c2,	// (0x00059a3f) bg_cell_gallery_focus_pane_g3

0xe5ca,	// (0x00059a47) bg_cell_gallery_focus_pane_g4

0xe5d2,	// (0x00059a4f) bg_cell_gallery_focus_pane_g5

0xe5da,	// (0x00059a57) bg_cell_gallery_focus_pane_g6

0xe5e2,	// (0x00059a5f) bg_cell_gallery_focus_pane_g7

0xe5ea,	// (0x00059a67) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6ba,	// (0x0005ab37) bg_cell_gallery_focus_pane_g

0xe5f2,	// (0x00059a6f) aid_firma_cardinal

0xe606,	// (0x00059a83) blid_firmament_pane_t1

0xe61d,	// (0x00059a9a) blid_firmament_pane_t2

0xe634,	// (0x00059ab1) blid_firmament_pane_t3

0xe64b,	// (0x00059ac8) blid_firmament_pane_t4

0x0003,

0xf6cb,	// (0x0005ab48) blid_firmament_pane_t

0xe662,	// (0x00059adf) blid_sat_info_pane

0xe672,	// (0x00059aef) blid_sat_info_pane_g1

0xe672,	// (0x00059aef) blid_sat_info_pane_g2

0x0001,

0xf6d4,	// (0x0005ab51) blid_sat_info_pane_g

0xe67c,	// (0x00059af9) blid_sat_info_pane_t1

0xe68a,	// (0x00059b07) smil2_volume_content_pane

0xe693,	// (0x00059b10) smil2_volume_pane_g1

0xe69b,	// (0x00059b18) smil2_volume_content_pane_g1

0xe6a4,	// (0x00059b21) smil2_volume_content_pane_g2

0xe6ad,	// (0x00059b2a) smil2_volume_content_pane_g3

0xe6b6,	// (0x00059b33) smil2_volume_content_pane_g4

0xe6bf,	// (0x00059b3c) smil2_volume_content_pane_g5

0xe6c8,	// (0x00059b45) smil2_volume_content_pane_g6

0xe6d1,	// (0x00059b4e) smil2_volume_content_pane_g7

0xe6da,	// (0x00059b57) smil2_volume_content_pane_g8

0xe6e3,	// (0x00059b60) smil2_volume_content_pane_g9

0xe6ec,	// (0x00059b69) smil2_volume_content_pane_g10

0x0009,

0xf6d9,	// (0x0005ab56) smil2_volume_content_pane_g

0x63e1,	// (0x0005185e) cale_week_day_heading_pane_t1_ParamLimits

0x641c,	// (0x00051899) cale_week_day_heading_pane_t2_ParamLimits

0x6457,	// (0x000518d4) cale_week_day_heading_pane_t3_ParamLimits

0x6492,	// (0x0005190f) cale_week_day_heading_pane_t4_ParamLimits

0x64cd,	// (0x0005194a) cale_week_day_heading_pane_t5_ParamLimits

0x6508,	// (0x00051985) cale_week_day_heading_pane_t6_ParamLimits

0x6543,	// (0x000519c0) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0005a633) cale_week_day_heading_pane_t_ParamLimits

0x32bf,	// (0x0004e73c) bg_cale_side_pane_ParamLimits

0x657e,	// (0x000519fb) cale_week_time_pane_t1_ParamLimits

0x65b8,	// (0x00051a35) cale_week_time_pane_t2_ParamLimits

0x65f2,	// (0x00051a6f) cale_week_time_pane_t3_ParamLimits

0x662c,	// (0x00051aa9) cale_week_time_pane_t4_ParamLimits

0x6666,	// (0x00051ae3) cale_week_time_pane_t5_ParamLimits

0x66a0,	// (0x00051b1d) cale_week_time_pane_t6_ParamLimits

0x66da,	// (0x00051b57) cale_week_time_pane_t7_ParamLimits

0x6714,	// (0x00051b91) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0005a642) cale_week_time_pane_t_ParamLimits

0x674e,	// (0x00051bcb) cell_cale_week_pane_g2_ParamLimits

0x32bf,	// (0x0004e73c) bg_cale_side_pane_cp01_ParamLimits

0x7677,	// (0x00052af4) cale_month_week_pane_t1_ParamLimits

0x76b0,	// (0x00052b2d) cale_month_week_pane_t2_ParamLimits

0x76e9,	// (0x00052b66) cale_month_week_pane_t3_ParamLimits

0x7722,	// (0x00052b9f) cale_month_week_pane_t4_ParamLimits

0x775b,	// (0x00052bd8) cale_month_week_pane_t5_ParamLimits

0x7794,	// (0x00052c11) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0005a717) cale_month_week_pane_t_ParamLimits

0x78bb,	// (0x00052d38) cell_cale_month_pane_g1_ParamLimits

0x5c91,	// (0x0005110e) main_cale_event_viewer_pane

0x026b,	// (0x0004b6e8) listscroll_cale_event_viewer_pane

0xe6f5,	// (0x00059b72) list_cale_ev_pane

0xe6fd,	// (0x00059b7a) scroll_pane_cp023

0x9249,	// (0x000546c6) field_cale_ev_pane_ParamLimits

0x9249,	// (0x000546c6) field_cale_ev_pane

0xe709,	// (0x00059b86) field_cale_ev_content_pane_ParamLimits

0xe709,	// (0x00059b86) field_cale_ev_content_pane

0xe715,	// (0x00059b92) field_cale_ev_pane_g1_ParamLimits

0xe715,	// (0x00059b92) field_cale_ev_pane_g1

0xe721,	// (0x00059b9e) field_cale_ev_pane_g2_ParamLimits

0xe721,	// (0x00059b9e) field_cale_ev_pane_g2

0xe739,	// (0x00059bb6) field_cale_ev_pane_g3_ParamLimits

0xe739,	// (0x00059bb6) field_cale_ev_pane_g3

0x0002,

0xf6ee,	// (0x0005ab6b) field_cale_ev_pane_g_ParamLimits

0xf6ee,	// (0x0005ab6b) field_cale_ev_pane_g

0xe751,	// (0x00059bce) field_cale_ev_pane_t1_ParamLimits

0xe751,	// (0x00059bce) field_cale_ev_pane_t1

0x9263,	// (0x000546e0) field_cale_ev_content_pane_t1_ParamLimits

0x9263,	// (0x000546e0) field_cale_ev_content_pane_t1

0x3ea8,	// (0x0004f325) bg_button_pane_cp01

0x61cc,	// (0x00051649) listscroll_cale_week_pane_ParamLimits

0x326a,	// (0x0004e6e7) popup_toolbar_window_cp01

0x3290,	// (0x0004e70d) listscroll_cale_week_pane_t1_ParamLimits

0x61cc,	// (0x00051649) listscroll_cale_day_pane_ParamLimits

0x326a,	// (0x0004e6e7) popup_toolbar_window_cp02

0x36f3,	// (0x0004eb70) listscroll_cale_day_pane_t1_ParamLimits

0x61cc,	// (0x00051649) main_cale_month_pane_ParamLimits

0x8a1f,	// (0x00053e9c) popup_toolbar_window_cp03_ParamLimits

0x8a1f,	// (0x00053e9c) popup_toolbar_window_cp03

0x844f,	// (0x000538cc) main_image_pane_g2_ParamLimits

0x844f,	// (0x000538cc) main_image_pane_g2

0x845b,	// (0x000538d8) main_image_pane_g3_ParamLimits

0x845b,	// (0x000538d8) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0005a949) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0005a949) main_image_pane_g

0x3fc2,	// (0x0004f43f) main_image_pane_t1_ParamLimits

0x8467,	// (0x000538e4) main_image_pane_t2_ParamLimits

0x8467,	// (0x000538e4) main_image_pane_t2

0x8479,	// (0x000538f6) main_image_pane_t3_ParamLimits

0x8479,	// (0x000538f6) main_image_pane_t3

0x848b,	// (0x00053908) main_image_pane_t4_ParamLimits

0x848b,	// (0x00053908) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0005a950) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0005a950) main_image_pane_t

0x849d,	// (0x0005391a) popup_image_details_window_cp01

0x84a5,	// (0x00053922) popup_toobar_trans_pane_cp01_ParamLimits

0x84a5,	// (0x00053922) popup_toobar_trans_pane_cp01

0x8993,	// (0x00053e10) popup_image_details_window_ParamLimits

0x8993,	// (0x00053e10) popup_image_details_window

0x899f,	// (0x00053e1c) popup_image_focus_window

0x8c89,	// (0x00054106) camera2_autofocus_pane_ParamLimits

0x8c89,	// (0x00054106) camera2_autofocus_pane

0x026b,	// (0x0004b6e8) bg_popup_sub_pane_cp06

0xe768,	// (0x00059be5) popup_image_focus_window_g1

0xe770,	// (0x00059bed) popup_image_focus_window_g2

0xe778,	// (0x00059bf5) popup_image_focus_window_g3

0xe780,	// (0x00059bfd) popup_image_focus_window_g4

0x0003,

0xf6f5,	// (0x0005ab72) popup_image_focus_window_g

0xe788,	// (0x00059c05) popup_image_focus_window_t1

0xe796,	// (0x00059c13) popup_image_focus_window_t2

0xe7a5,	// (0x00059c22) popup_image_focus_window_t3

0x0002,

0xf6fe,	// (0x0005ab7b) popup_image_focus_window_t

0xe7b3,	// (0x00059c30) camera2_autofocus_pane_g1

0x498f,	// (0x0004fe0c) bg_tb_trans_pane_cp01

0xe7c1,	// (0x00059c3e) popup_image_details_window_g1

0xe7d4,	// (0x00059c51) popup_image_details_window_g2

0x0002,

0xf710,	// (0x0005ab8d) popup_image_details_window_g

0xe7fd,	// (0x00059c7a) popup_image_details_window_t1

0xe80f,	// (0x00059c8c) popup_image_details_window_t2

0xe828,	// (0x00059ca5) popup_image_details_window_t3

0xe83c,	// (0x00059cb9) popup_image_details_window_t4

0xe857,	// (0x00059cd4) popup_image_details_window_t5

0x0004,

0xf717,	// (0x0005ab94) popup_image_details_window_t

0x312a,	// (0x0004e5a7) bg_calc_paper_pane_ParamLimits

0x5c91,	// (0x0005110e) grid_highlight_pane_cp013

0x5f9d,	// (0x0005141a) list_calc_pane_ParamLimits

0x5faf,	// (0x0005142c) scroll_pane_cp024

0x3142,	// (0x0004e5bf) bg_calc_display_pane_ParamLimits

0x5fb7,	// (0x00051434) calc_display_pane_t1_ParamLimits

0x5fcc,	// (0x00051449) calc_display_pane_t2_ParamLimits

0x5fe1,	// (0x0005145e) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0005a5b3) calc_display_pane_t_ParamLimits

0x6097,	// (0x00051514) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0005a5d0) cell_calc_pane_g

0x60a0,	// (0x0005151d) cell_calc_pane_t1

0x31a1,	// (0x0004e61e) grid_highlight_pane_cp02_ParamLimits

0x31b7,	// (0x0004e634) toolbar_button_pane_cp01_ParamLimits

0x31b7,	// (0x0004e634) toolbar_button_pane_cp01

0x4007,	// (0x0004f484) temp_image_control_pane_ParamLimits

0x4007,	// (0x0004f484) temp_image_control_pane

0x891b,	// (0x00053d98) main_mp3_pane

0xe871,	// (0x00059cee) temp_image_control_pane_g1_ParamLimits

0xe871,	// (0x00059cee) temp_image_control_pane_g1

0xe87f,	// (0x00059cfc) temp_image_control_pane_g2_ParamLimits

0xe87f,	// (0x00059cfc) temp_image_control_pane_g2

0xe891,	// (0x00059d0e) temp_image_control_pane_g3_ParamLimits

0xe891,	// (0x00059d0e) temp_image_control_pane_g3

0x92ad,	// (0x0005472a) temp_image_control_pane_g4_ParamLimits

0x92ad,	// (0x0005472a) temp_image_control_pane_g4

0x0003,

0xf722,	// (0x0005ab9f) temp_image_control_pane_g_ParamLimits

0xf722,	// (0x0005ab9f) temp_image_control_pane_g

0xe871,	// (0x00059cee) main_mp3_pane_g1

0x92be,	// (0x0005473b) main_mp3_pane_g2

0x0007,

0xf72b,	// (0x0005aba8) main_mp3_pane_g

0xe8d4,	// (0x00059d51) main_mp3_pane_t1

0x3351,	// (0x0004e7ce) main_camera_pane_g8_ParamLimits

0x3351,	// (0x0004e7ce) main_camera_pane_g8

0x6977,	// (0x00051df4) main_video_pane_g7_ParamLimits

0x6977,	// (0x00051df4) main_video_pane_g7

0x8db8,	// (0x00054235) main_camera2_pane_t7_ParamLimits

0x8db8,	// (0x00054235) main_camera2_pane_t7

0x34c1,	// (0x0004e93e) scroll_pane_cp025_ParamLimits

0x34c1,	// (0x0004e93e) scroll_pane_cp025

0x34d5,	// (0x0004e952) scroll_pane_cp026_ParamLimits

0x34d5,	// (0x0004e952) scroll_pane_cp026

0x34e4,	// (0x0004e961) wml_content_pane_ParamLimits

0x5c91,	// (0x0005110e) main_touch_calib_pane

0x9356,	// (0x000547d3) main_touch_calib_pane_g1

0x9362,	// (0x000547df) main_touch_calib_pane_g2

0x936e,	// (0x000547eb) main_touch_calib_pane_g3

0x937a,	// (0x000547f7) main_touch_calib_pane_g4

0x0003,

0xf749,	// (0x0005abc6) main_touch_calib_pane_g

0x9386,	// (0x00054803) main_touch_calib_pane_t1

0x939b,	// (0x00054818) main_touch_calib_pane_t2

0x0004,

0xf752,	// (0x0005abcf) main_touch_calib_pane_t

0x3c1a,	// (0x0004f097) mup_progress_pane_cp02

0x3c4f,	// (0x0004f0cc) navi_pane_g1

0x3cda,	// (0x0004f157) navi_pane_mp_t3

0x891b,	// (0x00053d98) main_mp3_pane_ParamLimits

0x8a5a,	// (0x00053ed7) navi_pane_ParamLimits

0xe871,	// (0x00059cee) main_mp3_pane_g1_ParamLimits

0x92be,	// (0x0005473b) main_mp3_pane_g2_ParamLimits

0x92ca,	// (0x00054747) main_mp3_pane_g3_ParamLimits

0x92ca,	// (0x00054747) main_mp3_pane_g3

0x92d6,	// (0x00054753) main_mp3_pane_g4_ParamLimits

0x92d6,	// (0x00054753) main_mp3_pane_g4

0xe8a1,	// (0x00059d1e) main_mp3_pane_g5_ParamLimits

0xe8a1,	// (0x00059d1e) main_mp3_pane_g5

0xe8af,	// (0x00059d2c) main_mp3_pane_g6_ParamLimits

0xe8af,	// (0x00059d2c) main_mp3_pane_g6

0xe8bc,	// (0x00059d39) main_mp3_pane_g7_ParamLimits

0xe8bc,	// (0x00059d39) main_mp3_pane_g7

0xe8c8,	// (0x00059d45) main_mp3_pane_g8_ParamLimits

0xe8c8,	// (0x00059d45) main_mp3_pane_g8

0xf72b,	// (0x0005aba8) main_mp3_pane_g_ParamLimits

0x92e2,	// (0x0005475f) main_mp3_pane_t2

0x92f0,	// (0x0005476d) main_mp3_pane_t3

0xe8e2,	// (0x00059d5f) main_mp3_pane_t4

0xe8f0,	// (0x00059d6d) main_mp3_pane_t5

0x0005,

0xf73c,	// (0x0005abb9) main_mp3_pane_t

0xe8fe,	// (0x00059d7b) mup_progress_pane_cp01

0x5953,	// (0x00050dd0) aid_zoom_text_secondary2

0xe6f5,	// (0x00059b72) list_cale_ev2_pane

0xe6fd,	// (0x00059b7a) scroll_pane_cp023_ParamLimits

0x93e6,	// (0x00054863) field_cale_ev2_pane_ParamLimits

0x93e6,	// (0x00054863) field_cale_ev2_pane

0x0747,	// (0x0004bbc4) field_cale_ev2_pane_g1_ParamLimits

0x0747,	// (0x0004bbc4) field_cale_ev2_pane_g1

0x0753,	// (0x0004bbd0) field_cale_ev2_pane_g2_ParamLimits

0x0753,	// (0x0004bbd0) field_cale_ev2_pane_g2

0x076b,	// (0x0004bbe8) field_cale_ev2_pane_g3_ParamLimits

0x076b,	// (0x0004bbe8) field_cale_ev2_pane_g3

0x0003,

0xf75d,	// (0x0005abda) field_cale_ev2_pane_g_ParamLimits

0xf75d,	// (0x0005abda) field_cale_ev2_pane_g

0x078f,	// (0x0004bc0c) field_cale_ev2_pane_t1_ParamLimits

0x078f,	// (0x0004bc0c) field_cale_ev2_pane_t1

0x07a6,	// (0x0004bc23) field_cale_ev2_pane_t2_ParamLimits

0x07a6,	// (0x0004bc23) field_cale_ev2_pane_t2

0x0001,

0xf766,	// (0x0005abe3) field_cale_ev2_pane_t_ParamLimits

0xf766,	// (0x0005abe3) field_cale_ev2_pane_t

0x834b,	// (0x000537c8) main_postcard_pane_g5_ParamLimits

0x834b,	// (0x000537c8) main_postcard_pane_g5

0x8357,	// (0x000537d4) main_postcard_pane_g6_ParamLimits

0x8357,	// (0x000537d4) main_postcard_pane_g6

0x67cc,	// (0x00051c49) camera2_autofocus_pane_cp_ParamLimits

0x67cc,	// (0x00051c49) camera2_autofocus_pane_cp

0x891b,	// (0x00053d98) main_mup3_pane

0x9435,	// (0x000548b2) main_mup3_pane_g1_ParamLimits

0x9435,	// (0x000548b2) main_mup3_pane_g1

0x9456,	// (0x000548d3) main_mup3_pane_g2_ParamLimits

0x9456,	// (0x000548d3) main_mup3_pane_g2

0x94c3,	// (0x00054940) main_mup3_pane_g3_ParamLimits

0x94c3,	// (0x00054940) main_mup3_pane_g3

0x94fe,	// (0x0005497b) main_mup3_pane_g4_ParamLimits

0x94fe,	// (0x0005497b) main_mup3_pane_g4

0x9539,	// (0x000549b6) main_mup3_pane_g5_ParamLimits

0x9539,	// (0x000549b6) main_mup3_pane_g5

0x9574,	// (0x000549f1) main_mup3_pane_g6_ParamLimits

0x9574,	// (0x000549f1) main_mup3_pane_g6

0xe906,	// (0x00059d83) main_mup3_pane_g7_ParamLimits

0xe906,	// (0x00059d83) main_mup3_pane_g7

0x0007,

0xf776,	// (0x0005abf3) main_mup3_pane_g_ParamLimits

0xf776,	// (0x0005abf3) main_mup3_pane_g

0x95e2,	// (0x00054a5f) main_mup3_pane_t1_ParamLimits

0x95e2,	// (0x00054a5f) main_mup3_pane_t1

0x9643,	// (0x00054ac0) main_mup3_pane_t2_ParamLimits

0x9643,	// (0x00054ac0) main_mup3_pane_t2

0x96fe,	// (0x00054b7b) main_mup3_pane_t4_ParamLimits

0x96fe,	// (0x00054b7b) main_mup3_pane_t4

0x9744,	// (0x00054bc1) main_mup3_pane_t5_ParamLimits

0x9744,	// (0x00054bc1) main_mup3_pane_t5

0x97e8,	// (0x00054c65) main_mup3_pane_t6_ParamLimits

0x97e8,	// (0x00054c65) main_mup3_pane_t6

0x0005,

0xf787,	// (0x0005ac04) main_mup3_pane_t_ParamLimits

0xf787,	// (0x0005ac04) main_mup3_pane_t

0x9890,	// (0x00054d0d) mup3_progress_pane_ParamLimits

0x9890,	// (0x00054d0d) mup3_progress_pane

0x98f4,	// (0x00054d71) popup_mup3_control_window_ParamLimits

0x98f4,	// (0x00054d71) popup_mup3_control_window

0xe914,	// (0x00059d91) popup_mup3_text_window

0x990d,	// (0x00054d8a) mup3_progress_pane_t1

0x992b,	// (0x00054da8) mup3_progress_pane_t2

0xe91c,	// (0x00059d99) mup3_progress_pane_t3

0x0002,

0xf794,	// (0x0005ac11) mup3_progress_pane_t

0xe939,	// (0x00059db6) mup_progress_pane_cp03

0x026b,	// (0x0004b6e8) bg_tb_trans_pane_cp04

0x9949,	// (0x00054dc6) mup3_volume_pane

0x9951,	// (0x00054dce) popup_mup3_control_window_g1

0x995a,	// (0x00054dd7) mup3_volume_pane_g1

0x9963,	// (0x00054de0) mup3_volume_pane_g2

0x996c,	// (0x00054de9) mup3_volume_pane_g3

0x0002,

0xf79b,	// (0x0005ac18) mup3_volume_pane_g

0x026b,	// (0x0004b6e8) bg_tb_trans_pane_cp03

0xe949,	// (0x00059dc6) popup_mup3_text_window_g1

0xe951,	// (0x00059dce) popup_mup3_text_window_t1

0x318a,	// (0x0004e607) list_calc_item_pane_g1_ParamLimits

0xe3c5,	// (0x00059842) mup_volume_pane_cp_g1

0x93b0,	// (0x0005482d) main_touch_calib_pane_t3

0x93c2,	// (0x0005483f) main_touch_calib_pane_t4

0x93d4,	// (0x00054851) main_touch_calib_pane_t5

0x5a37,	// (0x00050eb4) aid_cell_size_toolbar2

0x5a3f,	// (0x00050ebc) aid_popup3_width_pane

0x594b,	// (0x00050dc8) aid_zoom_text_msg_primary

0x3343,	// (0x0004e7c0) vorec_t7

0x314e,	// (0x0004e5cb) bg_calc_paper_pane_g1_ParamLimits

0x3166,	// (0x0004e5e3) bg_calc_paper_pane_g2_ParamLimits

0x315a,	// (0x0004e5d7) bg_calc_paper_pane_g3_ParamLimits

0x317e,	// (0x0004e5fb) bg_calc_paper_pane_g4_ParamLimits

0x3172,	// (0x0004e5ef) bg_calc_paper_pane_g5_ParamLimits

0x601a,	// (0x00051497) bg_calc_paper_pane_g6_ParamLimits

0x6029,	// (0x000514a6) bg_calc_paper_pane_g7_ParamLimits

0x6038,	// (0x000514b5) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0005a5ba) bg_calc_paper_pane_g_ParamLimits

0x6047,	// (0x000514c4) calc_bg_paper_pane_g9_ParamLimits

0x68ac,	// (0x00051d29) image_qvga_pane_ParamLimits

0x68ac,	// (0x00051d29) image_qvga_pane

0x3079,	// (0x0004e4f6) bg_popup_sub_pane_cp04_ParamLimits

0x3f3e,	// (0x0004f3bb) popup_mup_playback_window_g1_ParamLimits

0x3f4a,	// (0x0004f3c7) popup_mup_playback_window_t1_ParamLimits

0x3f5f,	// (0x0004f3dc) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0005a944) popup_mup_playback_window_t_ParamLimits

0x8edf,	// (0x0005435c) main_mup2_pane_g3_ParamLimits

0x8edf,	// (0x0005435c) main_mup2_pane_g3

0x6b8c,	// (0x00052009) popup_toolbar_window_cp04

0x4325,	// (0x0004f7a2) popup_call2_audio_second_window_g3_ParamLimits

0x4325,	// (0x0004f7a2) popup_call2_audio_second_window_g3

0x472f,	// (0x0004fbac) popup_call2_audio_first_window_g4_ParamLimits

0x472f,	// (0x0004fbac) popup_call2_audio_first_window_g4

0xdeb3,	// (0x00059330) popup_call2_audio_in_window_g4_ParamLimits

0xdeb3,	// (0x00059330) popup_call2_audio_in_window_g4

0x8442,	// (0x000538bf) aid_area_sk_bg_cut_ParamLimits

0x8442,	// (0x000538bf) aid_area_sk_bg_cut

0x3f74,	// (0x0004f3f1) aid_area_sk_bg_cut_2_ParamLimits

0x3f74,	// (0x0004f3f1) aid_area_sk_bg_cut_2

0x921f,	// (0x0005469c) aid_placing_details_win

0x9227,	// (0x000546a4) aid_placing_details_win_2

0xe7b3,	// (0x00059c30) camera2_autofocus_pane_g1_ParamLimits

0x5c25,	// (0x000510a2) popup_fixed_preview_cale_window_ParamLimits

0x5c25,	// (0x000510a2) popup_fixed_preview_cale_window

0x3d62,	// (0x0004f1df) navi_slider_pane_g3

0x3d59,	// (0x0004f1d6) navi_slider_pane_g4

0x3d50,	// (0x0004f1cd) navi_slider_pane_g5

0x3d62,	// (0x0004f1df) navi_slider_pane_g6

0x7dc5,	// (0x00053242) navi_slider_pane_g7

0x3e75,	// (0x0004f2f2) mup_scale_pane_g3

0x3e7e,	// (0x0004f2fb) mup_scale_pane_g4

0x3e87,	// (0x0004f304) mup_scale_pane_g5

0x8188,	// (0x00053605) mup_scale_pane_g6

0x8191,	// (0x0005360e) mup_scale_pane_g7

0x3d62,	// (0x0004f1df) cams2_slider_pane_g3

0xe44f,	// (0x000598cc) cams2_slider_pane_g4

0x918c,	// (0x00054609) cams2_slider_pane_g5

0x3d62,	// (0x0004f1df) cams2_slider_pane_g6

0x9194,	// (0x00054611) cams2_slider_pane_g7

0xe672,	// (0x00059aef) camera2_autofocus_pane_cp_g1

0xe254,	// (0x000596d1) bg_popup_preview_window_pane_cp02_ParamLimits

0xe254,	// (0x000596d1) bg_popup_preview_window_pane_cp02

0xe95f,	// (0x00059ddc) list_fp_cale_pane_ParamLimits

0xe95f,	// (0x00059ddc) list_fp_cale_pane

0xe96b,	// (0x00059de8) popup_fixed_preview_cale_window_t1_ParamLimits

0xe96b,	// (0x00059de8) popup_fixed_preview_cale_window_t1

0x9975,	// (0x00054df2) popup_fixed_preview_cale_window_t2_ParamLimits

0x9975,	// (0x00054df2) popup_fixed_preview_cale_window_t2

0x998a,	// (0x00054e07) popup_fixed_preview_cale_window_t3_ParamLimits

0x998a,	// (0x00054e07) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a2,	// (0x0005ac1f) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a2,	// (0x0005ac1f) popup_fixed_preview_cale_window_t

0x999f,	// (0x00054e1c) list_single_fp_cale_pane_ParamLimits

0x999f,	// (0x00054e1c) list_single_fp_cale_pane

0xe989,	// (0x00059e06) list_single_fp_cale_pane_g1_ParamLimits

0xe989,	// (0x00059e06) list_single_fp_cale_pane_g1

0xe995,	// (0x00059e12) list_single_fp_cale_pane_g2_ParamLimits

0xe995,	// (0x00059e12) list_single_fp_cale_pane_g2

0x0002,

0xf7a9,	// (0x0005ac26) list_single_fp_cale_pane_g_ParamLimits

0xf7a9,	// (0x0005ac26) list_single_fp_cale_pane_g

0xe9ae,	// (0x00059e2b) list_single_fp_cale_pane_t1_ParamLimits

0xe9ae,	// (0x00059e2b) list_single_fp_cale_pane_t1

0xe9c0,	// (0x00059e3d) list_single_fp_cale_pane_t2_ParamLimits

0xe9c0,	// (0x00059e3d) list_single_fp_cale_pane_t2

0x0001,

0xf7b0,	// (0x0005ac2d) list_single_fp_cale_pane_t_ParamLimits

0xf7b0,	// (0x0005ac2d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5c91,	// (0x0005110e) main_dialer_pane

0x99af,	// (0x00054e2c) aid_cell_size_keypad

0x99b9,	// (0x00054e36) dialer_ne_pane

0x99c1,	// (0x00054e3e) grid_dialer_command_1_pane

0x99c9,	// (0x00054e46) grid_dialer_command_2_pane

0x99d1,	// (0x00054e4e) grid_dialer_keypad_pane

0x99e1,	// (0x00054e5e) bg_popup_call_pane_cp06_ParamLimits

0x99e1,	// (0x00054e5e) bg_popup_call_pane_cp06

0x99ed,	// (0x00054e6a) dialer_ne_clear_pane_ParamLimits

0x99ed,	// (0x00054e6a) dialer_ne_clear_pane

0xe9f3,	// (0x00059e70) dialer_ne_pane_g1

0xe9fb,	// (0x00059e78) dialer_ne_pane_t1_ParamLimits

0xe9fb,	// (0x00059e78) dialer_ne_pane_t1

0x99f9,	// (0x00054e76) dialer_ne_pane_t2_ParamLimits

0x99f9,	// (0x00054e76) dialer_ne_pane_t2

0x9a16,	// (0x00054e93) dialer_ne_pane_t3_ParamLimits

0x9a16,	// (0x00054e93) dialer_ne_pane_t3

0x0002,

0xf7b5,	// (0x0005ac32) dialer_ne_pane_t_ParamLimits

0xf7b5,	// (0x0005ac32) dialer_ne_pane_t

0x9a3a,	// (0x00054eb7) dialer_ne_pane_t3_copy1_ParamLimits

0x9a3a,	// (0x00054eb7) dialer_ne_pane_t3_copy1

0x9a5e,	// (0x00054edb) cell_dialer_keypad_pane_ParamLimits

0x9a5e,	// (0x00054edb) cell_dialer_keypad_pane

0x9a73,	// (0x00054ef0) cell_dialer_command_1_pane_ParamLimits

0x9a73,	// (0x00054ef0) cell_dialer_command_1_pane

0x9a89,	// (0x00054f06) cell_dialer_command_2_pane_ParamLimits

0x9a89,	// (0x00054f06) cell_dialer_command_2_pane

0xea0d,	// (0x00059e8a) bg_button_pane_cp02_ParamLimits

0xea0d,	// (0x00059e8a) bg_button_pane_cp02

0x9a98,	// (0x00054f15) cell_dialer_keypad_pane_g1_ParamLimits

0x9a98,	// (0x00054f15) cell_dialer_keypad_pane_g1

0xea0d,	// (0x00059e8a) bg_button_pane_cp03_ParamLimits

0xea0d,	// (0x00059e8a) bg_button_pane_cp03

0x9aad,	// (0x00054f2a) cell_dialer_command_1_pane_g1_ParamLimits

0x9aad,	// (0x00054f2a) cell_dialer_command_1_pane_g1

0xea19,	// (0x00059e96) bg_button_pane_cp04

0x9ac0,	// (0x00054f3d) cell_dialer_command_2_pane_g1

0x3311,	// (0x0004e78e) bg_button_pane_cp06

0xea21,	// (0x00059e9e) dialer_ne_clear_pane_g1

0x3c5b,	// (0x0004f0d8) navi_pane_g2

0x7d6d,	// (0x000531ea) navi_pane_g3

0x0002,

0xf3ca,	// (0x0005a847) navi_pane_g

0x3ce8,	// (0x0004f165) navi_pane_mv_g2

0x3d0f,	// (0x0004f18c) navi_pane_mv_g5

0x7d8a,	// (0x00053207) navi_pane_mv_t1

0x3142,	// (0x0004e5bf) main_clock2_pane

0x9afc,	// (0x00054f79) main_clock2_list_pane_ParamLimits

0x9afc,	// (0x00054f79) main_clock2_list_pane

0x9b22,	// (0x00054f9f) main_clock2_pane_t1_ParamLimits

0x9b22,	// (0x00054f9f) main_clock2_pane_t1

0x9b42,	// (0x00054fbf) main_clock2_pane_t2_ParamLimits

0x9b42,	// (0x00054fbf) main_clock2_pane_t2

0x0004,

0xf7c1,	// (0x0005ac3e) main_clock2_pane_t_ParamLimits

0xf7c1,	// (0x0005ac3e) main_clock2_pane_t

0x9b9b,	// (0x00055018) popup_clock_analogue_window_cp03_ParamLimits

0x9b9b,	// (0x00055018) popup_clock_analogue_window_cp03

0x9bb9,	// (0x00055036) popup_clock_digital_window_cp02_ParamLimits

0x9bb9,	// (0x00055036) popup_clock_digital_window_cp02

0x9c26,	// (0x000550a3) main_clock2_list_single_pane_ParamLimits

0x9c26,	// (0x000550a3) main_clock2_list_single_pane

0x3311,	// (0x0004e78e) list_highlight_pane_cp05

0xea59,	// (0x00059ed6) main_clock2_list_single_pane_t1

0x6b8c,	// (0x00052009) popup_toolbar_window_cp04_ParamLimits

0x927d,	// (0x000546fa) camera2_autofocus_pane_g2_ParamLimits

0x927d,	// (0x000546fa) camera2_autofocus_pane_g2

0x9289,	// (0x00054706) camera2_autofocus_pane_g3_ParamLimits

0x9289,	// (0x00054706) camera2_autofocus_pane_g3

0x9295,	// (0x00054712) camera2_autofocus_pane_g4_ParamLimits

0x9295,	// (0x00054712) camera2_autofocus_pane_g4

0x92a1,	// (0x0005471e) camera2_autofocus_pane_g5_ParamLimits

0x92a1,	// (0x0005471e) camera2_autofocus_pane_g5

0x0004,

0xf705,	// (0x0005ab82) camera2_autofocus_pane_g_ParamLimits

0xf705,	// (0x0005ab82) camera2_autofocus_pane_g

0x93fc,	// (0x00054879) camera2_autofocus_pane_cp_g2

0x9404,	// (0x00054881) camera2_autofocus_pane_cp_g3

0x940c,	// (0x00054889) camera2_autofocus_pane_cp_g4

0x9414,	// (0x00054891) camera2_autofocus_pane_cp_g5

0x0004,

0xf76b,	// (0x0005abe8) camera2_autofocus_pane_cp_g

0x99d9,	// (0x00054e56) popup_dialer_spcha_window

0x026b,	// (0x0004b6e8) bg_popup_sub_pane_cp07

0xea67,	// (0x00059ee4) list_spcha_pane

0xea6f,	// (0x00059eec) list_single_spcha_pane_ParamLimits

0xea6f,	// (0x00059eec) list_single_spcha_pane

0x026b,	// (0x0004b6e8) list_highlight_pane_cp06

0xea80,	// (0x00059efd) list_single_spcha_pane_t1

0xdc5d,	// (0x000590da) popup_call2_audio_out_window_g4_ParamLimits

0xdc5d,	// (0x000590da) popup_call2_audio_out_window_g4

0x5c91,	// (0x0005110e) main_imed2_pane

0x89a7,	// (0x00053e24) popup_imed_adjust2_window

0x89b8,	// (0x00053e35) popup_imed_trans_window_ParamLimits

0x89b8,	// (0x00053e35) popup_imed_trans_window

0xe4b6,	// (0x00059933) popup_blid_sat_info2_window_t1

0xe4c4,	// (0x00059941) popup_blid_sat_info2_window_t2

0x000a,

0xf69a,	// (0x0005ab17) popup_blid_sat_info2_window_t

0x9cd0,	// (0x0005514d) aid_size_cell_colour_35

0x9ce7,	// (0x00055164) aid_size_cell_colour_112

0x9cfe,	// (0x0005517b) aid_size_cell_effect

0x498f,	// (0x0004fe0c) bg_tb_trans_pane_cp02

0x499d,	// (0x0004fe1a) heading_imed_pane

0x9d18,	// (0x00055195) listscroll_imed_pane

0xea8e,	// (0x00059f0b) heading_imed_pane_g1

0xea96,	// (0x00059f13) heading_imed_pane_t1

0xeaa4,	// (0x00059f21) grid_imed_colour_35_pane_ParamLimits

0xeaa4,	// (0x00059f21) grid_imed_colour_35_pane

0x9d24,	// (0x000551a1) grid_imed_effect_pane

0xeab7,	// (0x00059f34) list_imed_aspect_pane

0x9d30,	// (0x000551ad) scroll_pane_cp027_ParamLimits

0x9d30,	// (0x000551ad) scroll_pane_cp027

0x9d3c,	// (0x000551b9) cell_imed_effect_pane_ParamLimits

0x9d3c,	// (0x000551b9) cell_imed_effect_pane

0xeabf,	// (0x00059f3c) cell_imed_colour_pane_ParamLimits

0xeabf,	// (0x00059f3c) cell_imed_colour_pane

0xeaf9,	// (0x00059f76) cell_imed_colour_pane_g1_ParamLimits

0xeaf9,	// (0x00059f76) cell_imed_colour_pane_g1

0xeb0a,	// (0x00059f87) hgihlgiht_grid_pane_cp016_ParamLimits

0xeb0a,	// (0x00059f87) hgihlgiht_grid_pane_cp016

0x9d52,	// (0x000551cf) cell_imed_effect_pane_g1

0x9d5a,	// (0x000551d7) grid_highlight_pane_cp017

0xeb1b,	// (0x00059f98) list_imed_single_pane_ParamLimits

0xeb1b,	// (0x00059f98) list_imed_single_pane

0x026b,	// (0x0004b6e8) list_highlight_pane_cp07

0xeb2e,	// (0x00059fab) list_imed_aspect_pane_comp1_t1

0xe260,	// (0x000596dd) bg_tb_trans_pane_cp05

0xeb4e,	// (0x00059fcb) popup_imed_adjust2_window_g1

0xeb75,	// (0x00059ff2) popup_imed_adjust2_window_t1

0xeb8d,	// (0x0005a00a) slider_imed_adjust_pane

0xeba1,	// (0x0005a01e) slider_imed_adjust_pane_g1

0xebb1,	// (0x0005a02e) slider_imed_adjust_pane_g2

0xebc1,	// (0x0005a03e) slider_imed_adjust_pane_g3

0xebd2,	// (0x0005a04f) slider_imed_adjust_pane_g4

0x0003,

0xf7de,	// (0x0005ac5b) slider_imed_adjust_pane_g

0x9d63,	// (0x000551e0) aid_size_cell_clipart2

0x9d6f,	// (0x000551ec) grid_imed_clipart_pane

0xebe3,	// (0x0005a060) scroll_pane_cp031

0x9d79,	// (0x000551f6) cell_imed_clipart_pane_ParamLimits

0x9d79,	// (0x000551f6) cell_imed_clipart_pane

0x9d90,	// (0x0005520d) cell_imed_clipart_pane_g1

0x026b,	// (0x0004b6e8) grid_highlight_pane_cp014

0x9b08,	// (0x00054f85) main_clock2_pane_g1_ParamLimits

0x9b08,	// (0x00054f85) main_clock2_pane_g1

0x9bd1,	// (0x0005504e) aid_call2_pane_cp10

0x9be3,	// (0x00055060) aid_call_pane_cp10

0x3bea,	// (0x0004f067) popup_clock_analogue_window_cp10_g1

0x3bea,	// (0x0004f067) popup_clock_analogue_window_cp10_g2

0x9bf5,	// (0x00055072) popup_clock_analogue_window_cp10_g3

0x9bf5,	// (0x00055072) popup_clock_analogue_window_cp10_g4

0x3bea,	// (0x0004f067) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7cc,	// (0x0005ac49) popup_clock_analogue_window_cp10_g

0x9c07,	// (0x00055084) popup_clock_analogue_window_cp10_t1

0x9c38,	// (0x000550b5) clock_digital_number_pane_cp10_ParamLimits

0x9c38,	// (0x000550b5) clock_digital_number_pane_cp10

0x9c50,	// (0x000550cd) clock_digital_number_pane_cp11_ParamLimits

0x9c50,	// (0x000550cd) clock_digital_number_pane_cp11

0x9c68,	// (0x000550e5) clock_digital_number_pane_cp12_ParamLimits

0x9c68,	// (0x000550e5) clock_digital_number_pane_cp12

0x9c80,	// (0x000550fd) clock_digital_number_pane_cp13_ParamLimits

0x9c80,	// (0x000550fd) clock_digital_number_pane_cp13

0x9c98,	// (0x00055115) clock_digital_separator_pane_cp10_ParamLimits

0x9c98,	// (0x00055115) clock_digital_separator_pane_cp10

0x9cb0,	// (0x0005512d) popup_clock_digital_window_cp02_t1_ParamLimits

0x9cb0,	// (0x0005512d) popup_clock_digital_window_cp02_t1

0x3071,	// (0x0004e4ee) clock_digital_number_pane_cp10_g1

0x3071,	// (0x0004e4ee) clock_digital_number_pane_cp10_g2

0x0001,

0xf7e7,	// (0x0005ac64) clock_digital_number_pane_cp10_g

0x3071,	// (0x0004e4ee) clock_digital_separator_pane_cp10_g1

0x3071,	// (0x0004e4ee) clock_digital_separator_pane_g2_cp10

0x3d17,	// (0x0004f194) navi_pane_vded_g4

0x3d20,	// (0x0004f19d) navi_pane_vded_g5

0x3d29,	// (0x0004f1a6) navi_pane_vded_t1

0x5c91,	// (0x0005110e) main_vded_pane

0x9d99,	// (0x00055216) main_vded_pane_g1

0x9da1,	// (0x0005521e) main_vded_pane_g2

0x9da9,	// (0x00055226) main_vded_pane_g3

0x0002,

0xf7ec,	// (0x0005ac69) main_vded_pane_g

0x9db1,	// (0x0005522e) main_vded_pane_t1

0x9dbf,	// (0x0005523c) main_vded_pane_t2

0x0001,

0xf7f3,	// (0x0005ac70) main_vded_pane_t

0x9dcd,	// (0x0005524a) vded_slider_pane

0x9dd5,	// (0x00055252) vded_video_pane

0xebeb,	// (0x0005a068) vded_video_pane_g1

0x9ddd,	// (0x0005525a) vded_video_pane_g2

0xe672,	// (0x00059aef) vded_video_pane_g3

0x0002,

0xf7f8,	// (0x0005ac75) vded_video_pane_g

0xebf5,	// (0x0005a072) vded_slider_pane_g1

0xe3c5,	// (0x00059842) vded_slider_pane_g2

0xebfe,	// (0x0005a07b) vded_slider_pane_g3

0xec07,	// (0x0005a084) vded_slider_pane_g4

0xec10,	// (0x0005a08d) vded_slider_pane_g5

0x0004,

0xf7ff,	// (0x0005ac7c) vded_slider_pane_g

0x98e8,	// (0x00054d65) mup3_rocker_pane_ParamLimits

0x98e8,	// (0x00054d65) mup3_rocker_pane

0x9de6,	// (0x00055263) mup3_control_keys_pane_g1

0x9dee,	// (0x0005526b) mup3_control_keys_pane_g2

0x9df6,	// (0x00055273) mup3_control_keys_pane_g3

0x9dfe,	// (0x0005527b) mup3_control_keys_pane_g4

0x0003,

0xf80a,	// (0x0005ac87) mup3_control_keys_pane_g

0x5c49,	// (0x000510c6) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5c49,	// (0x000510c6) popup_toolbar2_fixed_window_cp01

0x9900,	// (0x00054d7d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9900,	// (0x00054d7d) popup_toolbar2_fixed_window_cp02

0x4497,	// (0x0004f914) popup_call2_audio_second_window_t4_ParamLimits

0x4497,	// (0x0004f914) popup_call2_audio_second_window_t4

0x49df,	// (0x0004fe5c) popup_call2_audio_first_window_t6_ParamLimits

0x49df,	// (0x0004fe5c) popup_call2_audio_first_window_t6

0xdd60,	// (0x000591dd) popup_call2_audio_out_window_t6_ParamLimits

0xdd60,	// (0x000591dd) popup_call2_audio_out_window_t6

0x5c91,	// (0x0005110e) main_vitu_pane

0x9e0e,	// (0x0005528b) aid_size_cell_itu_ParamLimits

0x9e0e,	// (0x0005528b) aid_size_cell_itu

0x2886,	// (0x0004dd03) bg_popup_window_pane_cp08_ParamLimits

0x2886,	// (0x0004dd03) bg_popup_window_pane_cp08

0x9e1c,	// (0x00055299) field_vitu_entry_pane_ParamLimits

0x9e1c,	// (0x00055299) field_vitu_entry_pane

0x9e29,	// (0x000552a6) grid_vitu_function_pane_ParamLimits

0x9e29,	// (0x000552a6) grid_vitu_function_pane

0x9e35,	// (0x000552b2) grid_vitu_itu_pane_ParamLimits

0x9e35,	// (0x000552b2) grid_vitu_itu_pane

0x9e41,	// (0x000552be) cell_vitu_itu_pane_ParamLimits

0x9e41,	// (0x000552be) cell_vitu_itu_pane

0x9e56,	// (0x000552d3) cell_vitu_function_pane_ParamLimits

0x9e56,	// (0x000552d3) cell_vitu_function_pane

0x498f,	// (0x0004fe0c) bg_popup_sub_pane_cp08_ParamLimits

0x498f,	// (0x0004fe0c) bg_popup_sub_pane_cp08

0x9e68,	// (0x000552e5) field_vitu_entry_pane_t1_ParamLimits

0x9e68,	// (0x000552e5) field_vitu_entry_pane_t1

0xec31,	// (0x0005a0ae) field_vitu_entry_pane_t2_ParamLimits

0xec31,	// (0x0005a0ae) field_vitu_entry_pane_t2

0x0001,

0xf818,	// (0x0005ac95) field_vitu_entry_pane_t_ParamLimits

0xf818,	// (0x0005ac95) field_vitu_entry_pane_t

0xec4e,	// (0x0005a0cb) bg_button_pane_cp05_ParamLimits

0xec4e,	// (0x0005a0cb) bg_button_pane_cp05

0x9e81,	// (0x000552fe) cell_vitu_itu_pane_g1

0x9e99,	// (0x00055316) cell_vitu_itu_pane_t1_ParamLimits

0x9e99,	// (0x00055316) cell_vitu_itu_pane_t1

0x9eab,	// (0x00055328) cell_vitu_itu_pane_t2_ParamLimits

0x9eab,	// (0x00055328) cell_vitu_itu_pane_t2

0x0002,

0xf81d,	// (0x0005ac9a) cell_vitu_itu_pane_t_ParamLimits

0xf81d,	// (0x0005ac9a) cell_vitu_itu_pane_t

0xec5c,	// (0x0005a0d9) bg_button_pane_cp07

0x9ee0,	// (0x0005535d) cell_vitu_function_pane_g1

0x5ed0,	// (0x0005134d) main_calc_pane_g1

0x5a6f,	// (0x00050eec) aid_visual_content_pane

0x5c91,	// (0x0005110e) main_vradio_pane

0x9ee9,	// (0x00055366) main_vradio_pane_g1_ParamLimits

0x9ee9,	// (0x00055366) main_vradio_pane_g1

0xec66,	// (0x0005a0e3) main_vradio_pane_g2_ParamLimits

0xec66,	// (0x0005a0e3) main_vradio_pane_g2

0x0001,

0xf824,	// (0x0005aca1) main_vradio_pane_g_ParamLimits

0xf824,	// (0x0005aca1) main_vradio_pane_g

0x9ef7,	// (0x00055374) main_vradio_pane_t1_ParamLimits

0x9ef7,	// (0x00055374) main_vradio_pane_t1

0x9f09,	// (0x00055386) main_vradio_pane_t2_ParamLimits

0x9f09,	// (0x00055386) main_vradio_pane_t2

0xec73,	// (0x0005a0f0) main_vradio_pane_t3_ParamLimits

0xec73,	// (0x0005a0f0) main_vradio_pane_t3

0x0002,

0xf829,	// (0x0005aca6) main_vradio_pane_t_ParamLimits

0xf829,	// (0x0005aca6) main_vradio_pane_t

0x9f1b,	// (0x00055398) vradio_rocker_control_pane_ParamLimits

0x9f1b,	// (0x00055398) vradio_rocker_control_pane

0x9f27,	// (0x000553a4) vradio_station_info_pane_ParamLimits

0x9f27,	// (0x000553a4) vradio_station_info_pane

0xec85,	// (0x0005a102) vradio_frequency_info_pane_ParamLimits

0xec85,	// (0x0005a102) vradio_frequency_info_pane

0xe672,	// (0x00059aef) vradio_station_info_pane_g1

0xec94,	// (0x0005a111) vradio_station_info_pane_t1_ParamLimits

0xec94,	// (0x0005a111) vradio_station_info_pane_t1

0xecb6,	// (0x0005a133) vradio_station_info_pane_t2_ParamLimits

0xecb6,	// (0x0005a133) vradio_station_info_pane_t2

0x0001,

0xf830,	// (0x0005acad) vradio_station_info_pane_t_ParamLimits

0xf830,	// (0x0005acad) vradio_station_info_pane_t

0xecc8,	// (0x0005a145) vradio_tuning_pane

0xecd0,	// (0x0005a14d) vradio_rocker_control_pane_g1

0xecd8,	// (0x0005a155) vradio_rocker_control_pane_g2

0xece0,	// (0x0005a15d) vradio_rocker_control_pane_g3

0xece8,	// (0x0005a165) vradio_rocker_control_pane_g4

0xecf0,	// (0x0005a16d) vradio_rocker_control_pane_g5

0x0004,

0xf835,	// (0x0005acb2) vradio_rocker_control_pane_g

0x9f34,	// (0x000553b1) vradio_frequency_info_pane_g1

0xecf8,	// (0x0005a175) vradio_frequency_info_pane_t1_ParamLimits

0xecf8,	// (0x0005a175) vradio_frequency_info_pane_t1

0x9f3c,	// (0x000553b9) vradio_tuning_pane_g1

0x9f45,	// (0x000553c2) vradio_tuning_pane_t1

0x5aae,	// (0x00050f2b) area_side_right_pane_ParamLimits

0x5aae,	// (0x00050f2b) area_side_right_pane

0xe21b,	// (0x00059698) status_small_pane_g1

0xe223,	// (0x000596a0) status_small_pane_g2

0xe22c,	// (0x000596a9) status_small_pane_g3

0xe235,	// (0x000596b2) status_small_pane_g4

0x0003,

0xf5f0,	// (0x0005aa6d) status_small_pane_g

0xe23e,	// (0x000596bb) status_small_pane_t1

0x5c91,	// (0x0005110e) main_video3_pane

0xed0c,	// (0x0005a189) cams_zoom_vslider_pane

0xed14,	// (0x0005a191) image3_wide_pane_ParamLimits

0xed14,	// (0x0005a191) image3_wide_pane

0xed2e,	// (0x0005a1ab) image3_wide_small_pane

0xed38,	// (0x0005a1b5) main_video3_pane_g1_ParamLimits

0xed38,	// (0x0005a1b5) main_video3_pane_g1

0xed54,	// (0x0005a1d1) main_video3_pane_g2_ParamLimits

0xed54,	// (0x0005a1d1) main_video3_pane_g2

0x0001,

0xf840,	// (0x0005acbd) main_video3_pane_g_ParamLimits

0xf840,	// (0x0005acbd) main_video3_pane_g

0xed70,	// (0x0005a1ed) main_video3_pane_t1_ParamLimits

0xed70,	// (0x0005a1ed) main_video3_pane_t1

0xed9b,	// (0x0005a218) main_video3_pane_t2_ParamLimits

0xed9b,	// (0x0005a218) main_video3_pane_t2

0xedc6,	// (0x0005a243) main_video3_pane_t3_ParamLimits

0xedc6,	// (0x0005a243) main_video3_pane_t3

0x0002,

0xf845,	// (0x0005acc2) main_video3_pane_t_ParamLimits

0xf845,	// (0x0005acc2) main_video3_pane_t

0xedf1,	// (0x0005a26e) cams_zoom_vslider_pane_g1

0xedfa,	// (0x0005a277) cams_zoom_vslider_pane_g2

0x0001,

0xf84c,	// (0x0005acc9) cams_zoom_vslider_pane_g

0xee02,	// (0x0005a27f) small_slider_vertical_pane

0xe672,	// (0x00059aef) small_slider_vertical_pane_g1

0xe672,	// (0x00059aef) small_slider_vertical_pane_g2

0xee0a,	// (0x0005a287) small_slider_vertical_pane_g3

0x0002,

0xf851,	// (0x0005acce) small_slider_vertical_pane_g

0x5c91,	// (0x0005110e) main_hwr_training_pane

0xee13,	// (0x0005a290) hwr_training_instruct_pane_ParamLimits

0xee13,	// (0x0005a290) hwr_training_instruct_pane

0x9f54,	// (0x000553d1) hwr_training_navi_pane_ParamLimits

0x9f54,	// (0x000553d1) hwr_training_navi_pane

0x9f68,	// (0x000553e5) hwr_training_write_pane_ParamLimits

0x9f68,	// (0x000553e5) hwr_training_write_pane

0x026b,	// (0x0004b6e8) bg_frame_shadow_pane

0xee42,	// (0x0005a2bf) hwr_training_write_pane_g1

0xee4a,	// (0x0005a2c7) hwr_training_write_pane_g2

0xee52,	// (0x0005a2cf) hwr_training_write_pane_g3

0xee5a,	// (0x0005a2d7) hwr_training_write_pane_g4

0xee62,	// (0x0005a2df) hwr_training_write_pane_g5

0xee6a,	// (0x0005a2e7) hwr_training_write_pane_g6

0xee72,	// (0x0005a2ef) hwr_training_write_pane_g7

0x0006,

0xf858,	// (0x0005acd5) hwr_training_write_pane_g

0x9f96,	// (0x00055413) hwr_training_navi_pane_g1_ParamLimits

0x9f96,	// (0x00055413) hwr_training_navi_pane_g1

0x9fa8,	// (0x00055425) hwr_training_navi_pane_g2_ParamLimits

0x9fa8,	// (0x00055425) hwr_training_navi_pane_g2

0x9fba,	// (0x00055437) hwr_training_navi_pane_g3_ParamLimits

0x9fba,	// (0x00055437) hwr_training_navi_pane_g3

0x9fca,	// (0x00055447) hwr_training_navi_pane_g4_ParamLimits

0x9fca,	// (0x00055447) hwr_training_navi_pane_g4

0x0004,

0xf867,	// (0x0005ace4) hwr_training_navi_pane_g_ParamLimits

0xf867,	// (0x0005ace4) hwr_training_navi_pane_g

0x9fe4,	// (0x00055461) hwr_training_navi_pane_t1

0x9ff2,	// (0x0005546f) list_single_hwr_training_instruct_pane_ParamLimits

0x9ff2,	// (0x0005546f) list_single_hwr_training_instruct_pane

0xee7a,	// (0x0005a2f7) list_single_hwr_training_instruct_pane_t1

0xe5b2,	// (0x00059a2f) bg_frame_shadow_pane_g1

0xee89,	// (0x0005a306) bg_frame_shadow_pane_g2

0xee91,	// (0x0005a30e) bg_frame_shadow_pane_g3

0xee99,	// (0x0005a316) bg_frame_shadow_pane_g4

0xeea1,	// (0x0005a31e) bg_frame_shadow_pane_g5

0xeea9,	// (0x0005a326) bg_frame_shadow_pane_g6

0xeeb1,	// (0x0005a32e) bg_frame_shadow_pane_g7

0x320d,	// (0x0004e68a) bg_frame_shadow_pane_g8

0x0007,

0xf872,	// (0x0005acef) bg_frame_shadow_pane_g

0x5c91,	// (0x0005110e) main_video_tele_dialer_pane

0xa00a,	// (0x00055487) aid_size_cell_video_keypad_ParamLimits

0xa00a,	// (0x00055487) aid_size_cell_video_keypad

0xa01a,	// (0x00055497) grid_video_dialer_keypad_pane_ParamLimits

0xa01a,	// (0x00055497) grid_video_dialer_keypad_pane

0xa04a,	// (0x000554c7) video_down_pane_cp_ParamLimits

0xa04a,	// (0x000554c7) video_down_pane_cp

0xa072,	// (0x000554ef) cell_video_dialer_keypad_pane_ParamLimits

0xa072,	// (0x000554ef) cell_video_dialer_keypad_pane

0xeeb9,	// (0x0005a336) bg_button_pane_cp08_ParamLimits

0xeeb9,	// (0x0005a336) bg_button_pane_cp08

0xa087,	// (0x00055504) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa087,	// (0x00055504) cell_video_dialer_keypad_pane_g1

0x98dc,	// (0x00054d59) mup3_rocker2_pane_ParamLimits

0x98dc,	// (0x00054d59) mup3_rocker2_pane

0xe672,	// (0x00059aef) mup3_rocker2_pane_g1

0x8929,	// (0x00053da6) main_dialer2_pane

0x5c91,	// (0x0005110e) main_mp4_pane

0xa0ce,	// (0x0005554b) main_mp4_pane_g1_ParamLimits

0xa0ce,	// (0x0005554b) main_mp4_pane_g1

0xa0dc,	// (0x00055559) main_mp4_pane_g2_ParamLimits

0xa0dc,	// (0x00055559) main_mp4_pane_g2

0xa0ea,	// (0x00055567) main_mp4_pane_g3_ParamLimits

0xa0ea,	// (0x00055567) main_mp4_pane_g3

0xa11f,	// (0x0005559c) main_mp4_pane_g4_ParamLimits

0xa11f,	// (0x0005559c) main_mp4_pane_g4

0xa14d,	// (0x000555ca) main_mp4_pane_g5_ParamLimits

0xa14d,	// (0x000555ca) main_mp4_pane_g5

0x0007,

0xf892,	// (0x0005ad0f) main_mp4_pane_g_ParamLimits

0xf892,	// (0x0005ad0f) main_mp4_pane_g

0xa1c1,	// (0x0005563e) main_mp4_pane_t1_ParamLimits

0xa1c1,	// (0x0005563e) main_mp4_pane_t1

0xa219,	// (0x00055696) main_mp4_pane_t2_ParamLimits

0xa219,	// (0x00055696) main_mp4_pane_t2

0xeec5,	// (0x0005a342) main_mp4_pane_t3_ParamLimits

0xeec5,	// (0x0005a342) main_mp4_pane_t3

0xa26b,	// (0x000556e8) main_mp4_pane_t4_ParamLimits

0xa26b,	// (0x000556e8) main_mp4_pane_t4

0x0003,

0xf8a3,	// (0x0005ad20) main_mp4_pane_t_ParamLimits

0xf8a3,	// (0x0005ad20) main_mp4_pane_t

0xa2ab,	// (0x00055728) mp4_progress_pane_ParamLimits

0xa2ab,	// (0x00055728) mp4_progress_pane

0xa2ef,	// (0x0005576c) mp4_rocker_pane_ParamLimits

0xa2ef,	// (0x0005576c) mp4_rocker_pane

0xeef3,	// (0x0005a370) mp4_progress_pane_t1

0xef0a,	// (0x0005a387) mp4_progress_pane_t2

0x0001,

0xf8ac,	// (0x0005ad29) mp4_progress_pane_t

0xef21,	// (0x0005a39e) mup_progress_pane_cp04

0xef2d,	// (0x0005a3aa) mp4_rocker_pane_g1

0xa30d,	// (0x0005578a) aid_cell_size_keypad2_ParamLimits

0xa30d,	// (0x0005578a) aid_cell_size_keypad2

0xa31d,	// (0x0005579a) dialer2_ne_pane_ParamLimits

0xa31d,	// (0x0005579a) dialer2_ne_pane

0xa329,	// (0x000557a6) grid_dialer2_keypad_pane_ParamLimits

0xa329,	// (0x000557a6) grid_dialer2_keypad_pane

0x11f5,	// (0x0004c672) bg_popup_call_pane_cp07_ParamLimits

0x11f5,	// (0x0004c672) bg_popup_call_pane_cp07

0xa335,	// (0x000557b2) dialer2_ne_pane_t1_ParamLimits

0xa335,	// (0x000557b2) dialer2_ne_pane_t1

0xa35a,	// (0x000557d7) cell_dialer2_keypad_pane_ParamLimits

0xa35a,	// (0x000557d7) cell_dialer2_keypad_pane

0xef49,	// (0x0005a3c6) bg_button_pane_pane_cp04_ParamLimits

0xef49,	// (0x0005a3c6) bg_button_pane_pane_cp04

0xa36f,	// (0x000557ec) cell_dialer2_keypad_pane_g1_ParamLimits

0xa36f,	// (0x000557ec) cell_dialer2_keypad_pane_g1

0x6a68,	// (0x00051ee5) aid_placing_vt_set_content_ParamLimits

0x6a68,	// (0x00051ee5) aid_placing_vt_set_content

0x6a8e,	// (0x00051f0b) aid_placing_vt_set_title_ParamLimits

0x6a8e,	// (0x00051f0b) aid_placing_vt_set_title

0x5c91,	// (0x0005110e) main_image3_pane

0xa3e3,	// (0x00055860) area_side_right_pane_cp01_ParamLimits

0xa3e3,	// (0x00055860) area_side_right_pane_cp01

0xa410,	// (0x0005588d) main_image3_pane_g1_ParamLimits

0xa410,	// (0x0005588d) main_image3_pane_g1

0xa41e,	// (0x0005589b) main_image3_pane_g2_ParamLimits

0xa41e,	// (0x0005589b) main_image3_pane_g2

0xa435,	// (0x000558b2) main_image3_pane_g3_ParamLimits

0xa435,	// (0x000558b2) main_image3_pane_g3

0xa44c,	// (0x000558c9) main_image3_pane_g4_ParamLimits

0xa44c,	// (0x000558c9) main_image3_pane_g4

0x0003,

0xf8bb,	// (0x0005ad38) main_image3_pane_g_ParamLimits

0xf8bb,	// (0x0005ad38) main_image3_pane_g

0xa463,	// (0x000558e0) main_image3_pane_t1_ParamLimits

0xa463,	// (0x000558e0) main_image3_pane_t1

0xa488,	// (0x00055905) main_image3_pane_t2_ParamLimits

0xa488,	// (0x00055905) main_image3_pane_t2

0xa4a7,	// (0x00055924) main_image3_pane_t3_ParamLimits

0xa4a7,	// (0x00055924) main_image3_pane_t3

0x0003,

0xf8c4,	// (0x0005ad41) main_image3_pane_t_ParamLimits

0xf8c4,	// (0x0005ad41) main_image3_pane_t

0x2886,	// (0x0004dd03) grid_sctrl_middle_pane_cp01_ParamLimits

0x2886,	// (0x0004dd03) grid_sctrl_middle_pane_cp01

0xa502,	// (0x0005597f) cell_sctrl_middle_pane_cp01_ParamLimits

0xa502,	// (0x0005597f) cell_sctrl_middle_pane_cp01

0xa513,	// (0x00055990) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa513,	// (0x00055990) cell_sctrl_middle_pane_cp01_g1

0x5c91,	// (0x0005110e) main_call4_pane

0xa520,	// (0x0005599d) aid_size_button_call4_ParamLimits

0xa520,	// (0x0005599d) aid_size_button_call4

0xa54a,	// (0x000559c7) call4_windows_pane_ParamLimits

0xa54a,	// (0x000559c7) call4_windows_pane

0xa55e,	// (0x000559db) grid_call4_button_pane_ParamLimits

0xa55e,	// (0x000559db) grid_call4_button_pane

0xef6d,	// (0x0005a3ea) call4_windows_conf_pane

0xa580,	// (0x000559fd) popup_call4_audio_first_window_ParamLimits

0xa580,	// (0x000559fd) popup_call4_audio_first_window

0xa5a0,	// (0x00055a1d) popup_call4_audio_second_window_ParamLimits

0xa5a0,	// (0x00055a1d) popup_call4_audio_second_window

0xefa0,	// (0x0005a41d) popup_call4_audio_wait_window_ParamLimits

0xefa0,	// (0x0005a41d) popup_call4_audio_wait_window

0xa5b2,	// (0x00055a2f) cell_call4_button_pane_ParamLimits

0xa5b2,	// (0x00055a2f) cell_call4_button_pane

0x31b7,	// (0x0004e634) bg_button_pane_cp09_ParamLimits

0x31b7,	// (0x0004e634) bg_button_pane_cp09

0xa5d5,	// (0x00055a52) cell_call4_button_pane_g1_ParamLimits

0xa5d5,	// (0x00055a52) cell_call4_button_pane_g1

0xa5e2,	// (0x00055a5f) cell_call4_button_pane_t1_ParamLimits

0xa5e2,	// (0x00055a5f) cell_call4_button_pane_t1

0xefb4,	// (0x0005a431) popup_call4_audio_conf_window_ParamLimits

0xefb4,	// (0x0005a431) popup_call4_audio_conf_window

0x990d,	// (0x00054d8a) mup3_progress_pane_t1_ParamLimits

0x992b,	// (0x00054da8) mup3_progress_pane_t2_ParamLimits

0xe91c,	// (0x00059d99) mup3_progress_pane_t3_ParamLimits

0xf794,	// (0x0005ac11) mup3_progress_pane_t_ParamLimits

0xe939,	// (0x00059db6) mup_progress_pane_cp03_ParamLimits

0x9e06,	// (0x00055283) mup3_control_keys_pane_g4_copy1

0xa2d9,	// (0x00055756) mp4_rocker2_pane_ParamLimits

0xa2d9,	// (0x00055756) mp4_rocker2_pane

0xefc8,	// (0x0005a445) mp4_rocker2_pane_g1

0xefd0,	// (0x0005a44d) mp4_rocker2_pane_g2

0xa626,	// (0x00055aa3) mp4_rocker2_pane_g3

0xa62e,	// (0x00055aab) mp4_rocker2_pane_g4

0xa636,	// (0x00055ab3) mp4_rocker2_pane_g5

0x0004,

0xf8cd,	// (0x0005ad4a) mp4_rocker2_pane_g

0x5c91,	// (0x0005110e) main_camera4_pane

0x5c91,	// (0x0005110e) main_video4_pane

0xa026,	// (0x000554a3) main_video_tele_dialer_pane_t1_ParamLimits

0xa026,	// (0x000554a3) main_video_tele_dialer_pane_t1

0xa038,	// (0x000554b5) main_video_tele_dialer_pane_t2_ParamLimits

0xa038,	// (0x000554b5) main_video_tele_dialer_pane_t2

0x0001,

0xf883,	// (0x0005ad00) main_video_tele_dialer_pane_t_ParamLimits

0xf883,	// (0x0005ad00) main_video_tele_dialer_pane_t

0xa654,	// (0x00055ad1) cam4_autofocus_pane_ParamLimits

0xa654,	// (0x00055ad1) cam4_autofocus_pane

0xa66a,	// (0x00055ae7) cam4_image_uncrop_pane_ParamLimits

0xa66a,	// (0x00055ae7) cam4_image_uncrop_pane

0xa67f,	// (0x00055afc) cam4_indicators_pane_ParamLimits

0xa67f,	// (0x00055afc) cam4_indicators_pane

0xa699,	// (0x00055b16) main_camera4_pane_g1_ParamLimits

0xa699,	// (0x00055b16) main_camera4_pane_g1

0xa6a5,	// (0x00055b22) main_camera4_pane_g2_ParamLimits

0xa6a5,	// (0x00055b22) main_camera4_pane_g2

0xa6a5,	// (0x00055b22) main_camera4_pane_g3_ParamLimits

0xa6a5,	// (0x00055b22) main_camera4_pane_g3

0xa6b1,	// (0x00055b2e) main_camera4_pane_g4_ParamLimits

0xa6b1,	// (0x00055b2e) main_camera4_pane_g4

0xa6bd,	// (0x00055b3a) main_camera4_pane_g5_ParamLimits

0xa6bd,	// (0x00055b3a) main_camera4_pane_g5

0x0005,

0xf8d8,	// (0x0005ad55) main_camera4_pane_g_ParamLimits

0xf8d8,	// (0x0005ad55) main_camera4_pane_g

0xa6d7,	// (0x00055b54) main_camera4_pane_t1_ParamLimits

0xa6d7,	// (0x00055b54) main_camera4_pane_t1

0xa71f,	// (0x00055b9c) bg_tb_trans_pane_cp06

0xa735,	// (0x00055bb2) cam4_indicators_pane_g1

0xa745,	// (0x00055bc2) cam4_indicators_pane_g2

0x0002,

0xf8f3,	// (0x0005ad70) cam4_indicators_pane_g

0xa765,	// (0x00055be2) cam4_indicators_pane_t1

0xa78d,	// (0x00055c0a) main_video4_pane_g1_ParamLimits

0xa78d,	// (0x00055c0a) main_video4_pane_g1

0xa6a5,	// (0x00055b22) main_video4_pane_g2_ParamLimits

0xa6a5,	// (0x00055b22) main_video4_pane_g2

0xa6a5,	// (0x00055b22) main_video4_pane_g3_ParamLimits

0xa6a5,	// (0x00055b22) main_video4_pane_g3

0xa6b1,	// (0x00055b2e) main_video4_pane_g4_ParamLimits

0xa6b1,	// (0x00055b2e) main_video4_pane_g4

0x0004,

0xf8fa,	// (0x0005ad77) main_video4_pane_g_ParamLimits

0xf8fa,	// (0x0005ad77) main_video4_pane_g

0xa7a1,	// (0x00055c1e) vid4_indicators_pane_ParamLimits

0xa7a1,	// (0x00055c1e) vid4_indicators_pane

0xa7bf,	// (0x00055c3c) video4_image_uncrop_cif_pane_ParamLimits

0xa7bf,	// (0x00055c3c) video4_image_uncrop_cif_pane

0xa7cc,	// (0x00055c49) video4_image_uncrop_nhd_pane_ParamLimits

0xa7cc,	// (0x00055c49) video4_image_uncrop_nhd_pane

0xa66a,	// (0x00055ae7) video4_image_uncrop_vga_pane_ParamLimits

0xa66a,	// (0x00055ae7) video4_image_uncrop_vga_pane

0x891b,	// (0x00053d98) bg_tb_trans_pane_cp07

0xa735,	// (0x00055bb2) vid4_indicators_pane_g1

0xa7d9,	// (0x00055c56) vid4_indicators_pane_g2

0xa7e9,	// (0x00055c66) vid4_indicators_pane_g3

0x0004,

0xf905,	// (0x0005ad82) vid4_indicators_pane_g

0xa816,	// (0x00055c93) vid4_indicators_pane_t1

0xa830,	// (0x00055cad) cam4_autofocus_pane_g1

0xa838,	// (0x00055cb5) cam4_autofocus_pane_g2

0xa840,	// (0x00055cbd) cam4_autofocus_pane_g3

0x0002,

0xf910,	// (0x0005ad8d) cam4_autofocus_pane_g

0xa848,	// (0x00055cc5) cam4_autofocus_pane_g3_copy1

0xa056,	// (0x000554d3) video_down_pane_cp_t1

0xa064,	// (0x000554e1) video_down_pane_cp_t2

0x0001,

0xf888,	// (0x0005ad05) video_down_pane_cp_t

0x5c7b,	// (0x000510f8) popup_vitu2_window_ParamLimits

0x5c7b,	// (0x000510f8) popup_vitu2_window

0xa850,	// (0x00055ccd) aid_size_cell2_itu2_ParamLimits

0xa850,	// (0x00055ccd) aid_size_cell2_itu2

0xa872,	// (0x00055cef) aid_size_cell_itu2_ParamLimits

0xa872,	// (0x00055cef) aid_size_cell_itu2

0xa8b0,	// (0x00055d2d) bg_popup_window_pane_cp09_ParamLimits

0xa8b0,	// (0x00055d2d) bg_popup_window_pane_cp09

0xa8be,	// (0x00055d3b) field_vitu2_entry_pane_ParamLimits

0xa8be,	// (0x00055d3b) field_vitu2_entry_pane

0xa8d2,	// (0x00055d4f) grid_vitu2_function_pane_ParamLimits

0xa8d2,	// (0x00055d4f) grid_vitu2_function_pane

0xa900,	// (0x00055d7d) grid_vitu2_itu_pane_ParamLimits

0xa900,	// (0x00055d7d) grid_vitu2_itu_pane

0xa958,	// (0x00055dd5) cell_vitu2_itu_pane_ParamLimits

0xa958,	// (0x00055dd5) cell_vitu2_itu_pane

0xa970,	// (0x00055ded) cell_vitu2_function_pane_ParamLimits

0xa970,	// (0x00055ded) cell_vitu2_function_pane

0xefd8,	// (0x0005a455) bg_popup_call_pane_cp08_ParamLimits

0xefd8,	// (0x0005a455) bg_popup_call_pane_cp08

0xefef,	// (0x0005a46c) field_vitu2_entry_pane_g1

0xeffb,	// (0x0005a478) field_vitu2_entry_pane_g2

0x0002,

0xf917,	// (0x0005ad94) field_vitu2_entry_pane_g

0xa9af,	// (0x00055e2c) field_vitu2_entry_pane_t1_ParamLimits

0xa9af,	// (0x00055e2c) field_vitu2_entry_pane_t1

0x0b5d,	// (0x0004bfda) field_vitu2_entry_pane_t2_ParamLimits

0x0b5d,	// (0x0004bfda) field_vitu2_entry_pane_t2

0x0001,

0xf91e,	// (0x0005ad9b) field_vitu2_entry_pane_t_ParamLimits

0xf91e,	// (0x0005ad9b) field_vitu2_entry_pane_t

0xa9dd,	// (0x00055e5a) bg_button_pane_cp010_ParamLimits

0xa9dd,	// (0x00055e5a) bg_button_pane_cp010

0xa9eb,	// (0x00055e68) cell_vitu2_itu_pane_g1

0xaa0b,	// (0x00055e88) cell_vitu2_itu_pane_t1_ParamLimits

0xaa0b,	// (0x00055e88) cell_vitu2_itu_pane_t1

0x595b,	// (0x00050dd8) cell_vitu2_itu_pane_t2_ParamLimits

0x595b,	// (0x00050dd8) cell_vitu2_itu_pane_t2

0x0002,

0xf928,	// (0x0005ada5) cell_vitu2_itu_pane_t_ParamLimits

0xf928,	// (0x0005ada5) cell_vitu2_itu_pane_t

0x891b,	// (0x00053d98) bg_button_pane_cp011

0xaa57,	// (0x00055ed4) cell_vitu2_function_pane_g1

0x5c91,	// (0x0005110e) main_myfav_hc_pane

0xa4e7,	// (0x00055964) popup_image3_note_pane_ParamLimits

0xa4e7,	// (0x00055964) popup_image3_note_pane

0xa4f3,	// (0x00055970) popup_image3_tool_bar_pane_ParamLimits

0xa4f3,	// (0x00055970) popup_image3_tool_bar_pane

0x59d1,	// (0x00050e4e) cell_vitu2_itu_pane_t3_ParamLimits

0x59d1,	// (0x00050e4e) cell_vitu2_itu_pane_t3

0x026b,	// (0x0004b6e8) bg_popup_trans_pane

0xf01d,	// (0x0005a49a) grid_image3_tool_bar_pane

0xf027,	// (0x0005a4a4) bg_popup_trans_pane_g1

0x35ca,	// (0x0004ea47) bg_popup_trans_pane_g2

0xf02f,	// (0x0005a4ac) bg_popup_trans_pane_g3

0xf037,	// (0x0005a4b4) bg_popup_trans_pane_g4

0xf03f,	// (0x0005a4bc) bg_popup_trans_pane_g5

0xf047,	// (0x0005a4c4) bg_popup_trans_pane_g6

0xf04f,	// (0x0005a4cc) bg_popup_trans_pane_g7

0xf057,	// (0x0005a4d4) bg_popup_trans_pane_g8

0x35aa,	// (0x0004ea27) bg_popup_trans_pane_g9

0x0008,

0xf92f,	// (0x0005adac) bg_popup_trans_pane_g

0xf05f,	// (0x0005a4dc) cell_image3_tool_bar_pane_ParamLimits

0xf05f,	// (0x0005a4dc) cell_image3_tool_bar_pane

0xe672,	// (0x00059aef) cell_image3_tool_bar_pane_g1

0x026b,	// (0x0004b6e8) bg_popup_trans_pane_cp1

0xf073,	// (0x0005a4f0) popup_image3_note_pane_t1

0xf081,	// (0x0005a4fe) popup_image3_note_pane_t2

0xf08f,	// (0x0005a50c) popup_image3_note_pane_t3

0x0002,

0xf942,	// (0x0005adbf) popup_image3_note_pane_t

0x0b8c,	// (0x0004c009) popup_image3_note_pane_t3_copy1

0xaa6b,	// (0x00055ee8) bg_myfav_hc_instruction_pane_ParamLimits

0xaa6b,	// (0x00055ee8) bg_myfav_hc_instruction_pane

0xaa7d,	// (0x00055efa) cell_myfav_contact_pane_ParamLimits

0xaa7d,	// (0x00055efa) cell_myfav_contact_pane

0xaa97,	// (0x00055f14) cell_myfav_contact_pane_cp1_ParamLimits

0xaa97,	// (0x00055f14) cell_myfav_contact_pane_cp1

0xaaad,	// (0x00055f2a) cell_myfav_contact_pane_cp2_ParamLimits

0xaaad,	// (0x00055f2a) cell_myfav_contact_pane_cp2

0xaac3,	// (0x00055f40) cell_myfav_contact_pane_cp3_ParamLimits

0xaac3,	// (0x00055f40) cell_myfav_contact_pane_cp3

0xaad8,	// (0x00055f55) cell_myfav_contact_pane_cp4_ParamLimits

0xaad8,	// (0x00055f55) cell_myfav_contact_pane_cp4

0xaaec,	// (0x00055f69) cell_myfav_contact_pane_cp5_ParamLimits

0xaaec,	// (0x00055f69) cell_myfav_contact_pane_cp5

0xab00,	// (0x00055f7d) cell_myfav_contact_pane_cp6_ParamLimits

0xab00,	// (0x00055f7d) cell_myfav_contact_pane_cp6

0xab14,	// (0x00055f91) cell_myfav_contact_pane_cp7_ParamLimits

0xab14,	// (0x00055f91) cell_myfav_contact_pane_cp7

0x0b9a,	// (0x0004c017) listscroll_gen_pane_cp05

0xab2c,	// (0x00055fa9) main_myfav_hc_pane_g1_ParamLimits

0xab2c,	// (0x00055fa9) main_myfav_hc_pane_g1

0xab42,	// (0x00055fbf) main_myfav_hc_pane_g2_ParamLimits

0xab42,	// (0x00055fbf) main_myfav_hc_pane_g2

0x0002,

0xf949,	// (0x0005adc6) main_myfav_hc_pane_g_ParamLimits

0xf949,	// (0x0005adc6) main_myfav_hc_pane_g

0xab6c,	// (0x00055fe9) main_myfav_hc_pane_t1_ParamLimits

0xab6c,	// (0x00055fe9) main_myfav_hc_pane_t1

0x0ba3,	// (0x0004c020) main_myfav_hc_pane_t2_ParamLimits

0x0ba3,	// (0x0004c020) main_myfav_hc_pane_t2

0x0bb5,	// (0x0004c032) main_myfav_hc_pane_t3_ParamLimits

0x0bb5,	// (0x0004c032) main_myfav_hc_pane_t3

0xab81,	// (0x00055ffe) main_myfav_hc_pane_t4_ParamLimits

0xab81,	// (0x00055ffe) main_myfav_hc_pane_t4

0x0004,

0xf950,	// (0x0005adcd) main_myfav_hc_pane_t_ParamLimits

0xf950,	// (0x0005adcd) main_myfav_hc_pane_t

0xe672,	// (0x00059aef) bg_myfav_hc_instruction_pane_g1

0x0bc7,	// (0x0004c044) cell_myfav_contact_pane_g1_ParamLimits

0x0bc7,	// (0x0004c044) cell_myfav_contact_pane_g1

0x0bc7,	// (0x0004c044) cell_myfav_contact_pane_g2_ParamLimits

0x0bc7,	// (0x0004c044) cell_myfav_contact_pane_g2

0x0bd3,	// (0x0004c050) cell_myfav_contact_pane_g3_ParamLimits

0x0bd3,	// (0x0004c050) cell_myfav_contact_pane_g3

0xe906,	// (0x00059d83) cell_myfav_contact_pane_g4_ParamLimits

0xe906,	// (0x00059d83) cell_myfav_contact_pane_g4

0x0be0,	// (0x0004c05d) cell_myfav_contact_pane_g5_ParamLimits

0x0be0,	// (0x0004c05d) cell_myfav_contact_pane_g5

0x0004,

0xf95b,	// (0x0005add8) cell_myfav_contact_pane_g_ParamLimits

0xf95b,	// (0x0005add8) cell_myfav_contact_pane_g

0xab58,	// (0x00055fd5) main_myfav_hc_pane_g3_ParamLimits

0xab58,	// (0x00055fd5) main_myfav_hc_pane_g3

0x5bbf,	// (0x0005103c) popup_adpt_find_window

0xaba5,	// (0x00056022) afind_page_pane_ParamLimits

0xaba5,	// (0x00056022) afind_page_pane

0xabb2,	// (0x0005602f) aid_size_cell_afind_ParamLimits

0xabb2,	// (0x0005602f) aid_size_cell_afind

0xabcc,	// (0x00056049) bg_popup_sub_pane_cp09_ParamLimits

0xabcc,	// (0x00056049) bg_popup_sub_pane_cp09

0xabd9,	// (0x00056056) find_pane_cp01_ParamLimits

0xabd9,	// (0x00056056) find_pane_cp01

0x0bec,	// (0x0004c069) grid_afind_control_pane_ParamLimits

0x0bec,	// (0x0004c069) grid_afind_control_pane

0xabe6,	// (0x00056063) grid_afind_pane_ParamLimits

0xabe6,	// (0x00056063) grid_afind_pane

0xabfc,	// (0x00056079) cell_afind_pane_ParamLimits

0xabfc,	// (0x00056079) cell_afind_pane

0xe672,	// (0x00059aef) afind_page_pane_g1

0xac32,	// (0x000560af) afind_page_pane_g2

0xac3b,	// (0x000560b8) afind_page_pane_g3

0x0002,

0xf966,	// (0x0005ade3) afind_page_pane_g

0xac44,	// (0x000560c1) afind_page_pane_t1

0x0c00,	// (0x0004c07d) cell_afind_grid_control_pane_ParamLimits

0x0c00,	// (0x0004c07d) cell_afind_grid_control_pane

0xef49,	// (0x0005a3c6) bg_button_pane_cp69_ParamLimits

0xef49,	// (0x0005a3c6) bg_button_pane_cp69

0xac64,	// (0x000560e1) cell_afind_pane_g1_ParamLimits

0xac64,	// (0x000560e1) cell_afind_pane_g1

0xac71,	// (0x000560ee) cell_afind_pane_t1_ParamLimits

0xac71,	// (0x000560ee) cell_afind_pane_t1

0x339b,	// (0x0004e818) bg_button_pane_cp72

0x0c0f,	// (0x0004c08c) cell_afind_grid_control_pane_g1

0x8553,	// (0x000539d0) aid_image_placing_area_ParamLimits

0x8553,	// (0x000539d0) aid_image_placing_area

0xec19,	// (0x0005a096) field_vitu_entry_pane_g1_ParamLimits

0xec19,	// (0x0005a096) field_vitu_entry_pane_g1

0xec25,	// (0x0005a0a2) field_vitu_entry_pane_g2_ParamLimits

0xec25,	// (0x0005a0a2) field_vitu_entry_pane_g2

0x0001,

0xf813,	// (0x0005ac90) field_vitu_entry_pane_g_ParamLimits

0xf813,	// (0x0005ac90) field_vitu_entry_pane_g

0x9e81,	// (0x000552fe) cell_vitu_itu_pane_g1_ParamLimits

0x9ec3,	// (0x00055340) cell_vitu_itu_pane_t3_ParamLimits

0x9ec3,	// (0x00055340) cell_vitu_itu_pane_t3

0xeef3,	// (0x0005a370) mp4_progress_pane_t1_ParamLimits

0xef0a,	// (0x0005a387) mp4_progress_pane_t2_ParamLimits

0xf8ac,	// (0x0005ad29) mp4_progress_pane_t_ParamLimits

0xef21,	// (0x0005a39e) mup_progress_pane_cp04_ParamLimits

0xab93,	// (0x00056010) main_myfav_hc_pane_t5_ParamLimits

0xab93,	// (0x00056010) main_myfav_hc_pane_t5

0x5a77,	// (0x00050ef4) aid_zoom_text_primary

0x5bbf,	// (0x0005103c) popup_adpt_find_window_ParamLimits

0x891b,	// (0x00053d98) main_cam_set_pane

0xa68d,	// (0x00055b0a) cam4_zoom_pane_ParamLimits

0xa68d,	// (0x00055b0a) cam4_zoom_pane

0xac83,	// (0x00056100) main_cam_set_pane_g1_ParamLimits

0xac83,	// (0x00056100) main_cam_set_pane_g1

0xac91,	// (0x0005610e) main_cam_set_pane_g2_ParamLimits

0xac91,	// (0x0005610e) main_cam_set_pane_g2

0x0001,

0xf96d,	// (0x0005adea) main_cam_set_pane_g_ParamLimits

0xf96d,	// (0x0005adea) main_cam_set_pane_g

0xac9d,	// (0x0005611a) main_cam_set_pane_t1_ParamLimits

0xac9d,	// (0x0005611a) main_cam_set_pane_t1

0xacaf,	// (0x0005612c) main_cset_listscroll_pane_ParamLimits

0xacaf,	// (0x0005612c) main_cset_listscroll_pane

0xacd8,	// (0x00056155) main_cset_slider_pane_ParamLimits

0xacd8,	// (0x00056155) main_cset_slider_pane

0x0c20,	// (0x0004c09d) main_cset_list_pane_ParamLimits

0x0c20,	// (0x0004c09d) main_cset_list_pane

0x0c30,	// (0x0004c0ad) scroll_pane_cp028

0xacf7,	// (0x00056174) aid_area_touch_slider

0xad13,	// (0x00056190) cset_slider_pane

0xad3d,	// (0x000561ba) main_cset_slider_pane_g1

0xad52,	// (0x000561cf) main_cset_slider_pane_g2

0x0011,

0xf972,	// (0x0005adef) main_cset_slider_pane_g

0x0c69,	// (0x0004c0e6) main_cset_slider_pane_t1

0xae0e,	// (0x0005628b) main_cset_slider_pane_t2

0xae28,	// (0x000562a5) main_cset_slider_pane_t3

0xae42,	// (0x000562bf) main_cset_slider_pane_t4

0xae5c,	// (0x000562d9) main_cset_slider_pane_t5

0xae76,	// (0x000562f3) main_cset_slider_pane_t6

0xae8b,	// (0x00056308) main_cset_slider_pane_t7

0x000e,

0xf997,	// (0x0005ae14) main_cset_slider_pane_t

0xaf8f,	// (0x0005640c) cset_list_set_pane_ParamLimits

0xaf8f,	// (0x0005640c) cset_list_set_pane

0xaf9f,	// (0x0005641c) aid_position_infowindow_above

0xafa7,	// (0x00056424) aid_position_infowindow_below

0xafaf,	// (0x0005642c) cset_list_set_pane_g1_ParamLimits

0xafaf,	// (0x0005642c) cset_list_set_pane_g1

0xafbb,	// (0x00056438) cset_list_set_pane_g3_ParamLimits

0xafbb,	// (0x00056438) cset_list_set_pane_g3

0x0001,

0xf9b6,	// (0x0005ae33) cset_list_set_pane_g_ParamLimits

0xf9b6,	// (0x0005ae33) cset_list_set_pane_g

0xafca,	// (0x00056447) cset_list_set_pane_t1_ParamLimits

0xafca,	// (0x00056447) cset_list_set_pane_t1

0x498f,	// (0x0004fe0c) list_highlight_pane_cp021_ParamLimits

0x498f,	// (0x0004fe0c) list_highlight_pane_cp021

0x3e75,	// (0x0004f2f2) cset_slider_pane_g1

0x3e87,	// (0x0004f304) cset_slider_pane_g2

0x3e7e,	// (0x0004f2fb) cset_slider_pane_g3

0x0002,

0xf9bb,	// (0x0005ae38) cset_slider_pane_g

0xafdf,	// (0x0005645c) aid_area_touch_cam4_zoom

0xafe7,	// (0x00056464) cam4_zoom_cont_pane

0xafef,	// (0x0005646c) cam4_zoom_pane_g1

0xaff7,	// (0x00056474) cam4_zoom_pane_g2

0xafff,	// (0x0005647c) cam4_zoom_pane_g3

0x0002,

0xf9c2,	// (0x0005ae3f) cam4_zoom_pane_g

0xb007,	// (0x00056484) cam4_zoom_cont_pane_g1

0xb010,	// (0x0005648d) cam4_zoom_cont_pane_g2

0xb019,	// (0x00056496) cam4_zoom_cont_pane_g3

0x0002,

0xf9c9,	// (0x0005ae46) cam4_zoom_cont_pane_g

0xa53a,	// (0x000559b7) call4_image_pane_ParamLimits

0xa53a,	// (0x000559b7) call4_image_pane

0xef6d,	// (0x0005a3ea) call4_windows_conf_pane_ParamLimits

0xef80,	// (0x0005a3fd) popup_call4_audio_in_window_ParamLimits

0xef80,	// (0x0005a3fd) popup_call4_audio_in_window

0x026b,	// (0x0004b6e8) bg_popup_call2_act_pane_cp02

0xefac,	// (0x0005a429) call4_list_conf_pane

0xe672,	// (0x00059aef) call4_image_pane_g1

0xe672,	// (0x00059aef) call4_image_pane_g2

0x0001,

0xf6d4,	// (0x0005ab51) call4_image_pane_g

0x0d24,	// (0x0004c1a1) list_single_graphic_popup_conf4_pane_ParamLimits

0x0d24,	// (0x0004c1a1) list_single_graphic_popup_conf4_pane

0x026b,	// (0x0004b6e8) list_highlight_pane_cp022

0x0d37,	// (0x0004c1b4) list_single_graphic_popup_conf4_pane_g1

0x3aaa,	// (0x0004ef27) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d0,	// (0x0005ae4d) list_single_graphic_popup_conf4_pane_g

0x0d3f,	// (0x0004c1bc) list_single_graphic_popup_conf4_pane_t1

0x6bd2,	// (0x0005204f) popup_vtel_slider_window_ParamLimits

0x6bd2,	// (0x0005204f) popup_vtel_slider_window

0xef37,	// (0x0005a3b4) dialer2_ne_pane_t2_ParamLimits

0xef37,	// (0x0005a3b4) dialer2_ne_pane_t2

0x0001,

0xf8b1,	// (0x0005ad2e) dialer2_ne_pane_t_ParamLimits

0xf8b1,	// (0x0005ad2e) dialer2_ne_pane_t

0x498f,	// (0x0004fe0c) bg_popup_sub_pane_cp010_ParamLimits

0x498f,	// (0x0004fe0c) bg_popup_sub_pane_cp010

0xb022,	// (0x0005649f) popup_vtel_slider_window_g1_ParamLimits

0xb022,	// (0x0005649f) popup_vtel_slider_window_g1

0xb02e,	// (0x000564ab) popup_vtel_slider_window_g2_ParamLimits

0xb02e,	// (0x000564ab) popup_vtel_slider_window_g2

0x0003,

0xf9d5,	// (0x0005ae52) popup_vtel_slider_window_g_ParamLimits

0xf9d5,	// (0x0005ae52) popup_vtel_slider_window_g

0xb074,	// (0x000564f1) vtel_slider_pane_ParamLimits

0xb074,	// (0x000564f1) vtel_slider_pane

0xb083,	// (0x00056500) vtel_slider_pane_g1_ParamLimits

0xb083,	// (0x00056500) vtel_slider_pane_g1

0xb090,	// (0x0005650d) vtel_slider_pane_g2_ParamLimits

0xb090,	// (0x0005650d) vtel_slider_pane_g2

0xb09d,	// (0x0005651a) vtel_slider_pane_g3_ParamLimits

0xb09d,	// (0x0005651a) vtel_slider_pane_g3

0xb083,	// (0x00056500) vtel_slider_pane_g4_ParamLimits

0xb083,	// (0x00056500) vtel_slider_pane_g4

0xb0aa,	// (0x00056527) vtel_slider_pane_g5_ParamLimits

0xb0aa,	// (0x00056527) vtel_slider_pane_g5

0x0004,

0xf9de,	// (0x0005ae5b) vtel_slider_pane_g_ParamLimits

0xf9de,	// (0x0005ae5b) vtel_slider_pane_g

0x891b,	// (0x00053d98) main_gallery2_pane

0xa898,	// (0x00055d15) aid_size_row_itut2_dropdow_list_ParamLimits

0xa898,	// (0x00055d15) aid_size_row_itut2_dropdow_list

0xa8e8,	// (0x00055d65) grid_vitu2_function_top_pane_ParamLimits

0xa8e8,	// (0x00055d65) grid_vitu2_function_top_pane

0xa924,	// (0x00055da1) popup_vitu2_dropdown_list_window_ParamLimits

0xa924,	// (0x00055da1) popup_vitu2_dropdown_list_window

0xa93c,	// (0x00055db9) popup_vitu2_match_list_window

0xb0c5,	// (0x00056542) cell_vitu2_function_top_pane_ParamLimits

0xb0c5,	// (0x00056542) cell_vitu2_function_top_pane

0xb0dd,	// (0x0005655a) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb0dd,	// (0x0005655a) cell_vitu2_function_top_pane_cp01

0xb0f9,	// (0x00056576) cell_vitu2_function_top_wide_pane_ParamLimits

0xb0f9,	// (0x00056576) cell_vitu2_function_top_wide_pane

0x891b,	// (0x00053d98) bg_button_pane_cp012

0xb115,	// (0x00056592) cell_vitu2_function_top_pane_g1

0xb129,	// (0x000565a6) bg_button_pane_cp013_ParamLimits

0xb129,	// (0x000565a6) bg_button_pane_cp013

0xb145,	// (0x000565c2) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb145,	// (0x000565c2) cell_vitu2_function_top_wide_pane_g1

0x5c7b,	// (0x000510f8) bg_popup_sub_pane_cp20

0xb15d,	// (0x000565da) list_vitu2_match_list_pane

0xf027,	// (0x0005a4a4) bg_popup_sub_pane_cp20_g1

0xf02f,	// (0x0005a4ac) bg_popup_sub_pane_cp20_g2

0x35ca,	// (0x0004ea47) bg_popup_sub_pane_cp20_g3

0xf037,	// (0x0005a4b4) bg_popup_sub_pane_cp20_g4

0x35aa,	// (0x0004ea27) bg_popup_sub_pane_cp20_g5

0x0d55,	// (0x0004c1d2) bg_popup_sub_pane_cp20_g6

0xf047,	// (0x0005a4c4) bg_popup_sub_pane_cp20_g7

0xf04f,	// (0x0005a4cc) bg_popup_sub_pane_cp20_g8

0xf057,	// (0x0005a4d4) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9e9,	// (0x0005ae66) bg_popup_sub_pane_cp20_g

0xb175,	// (0x000565f2) list_vitu2_match_list_item_pane_ParamLimits

0xb175,	// (0x000565f2) list_vitu2_match_list_item_pane

0xb187,	// (0x00056604) list_vitu2_match_list_item_pane_t1

0x5c91,	// (0x0005110e) bg_popup_sub_pane_cp21

0xb1dc,	// (0x00056659) grid_vitu2_dropdown_list_pane

0xb1e4,	// (0x00056661) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb1e4,	// (0x00056661) cell_vitu2_dropdown_list_char_pane

0xb205,	// (0x00056682) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb205,	// (0x00056682) cell_vitu2_dropdown_list_ctrl_pane

0x0d6f,	// (0x0004c1ec) cell_vitu2_dropdown_list_char_pane_g1

0x0d66,	// (0x0004c1e3) cell_vitu2_dropdown_list_char_pane_g2

0x0d5d,	// (0x0004c1da) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa06,	// (0x0005ae83) cell_vitu2_dropdown_list_char_pane_g

0xb231,	// (0x000566ae) cell_vitu2_dropdown_list_char_pane_t1

0xb23f,	// (0x000566bc) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb23f,	// (0x000566bc) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb24f,	// (0x000566cc) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb24f,	// (0x000566cc) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb260,	// (0x000566dd) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb260,	// (0x000566dd) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb270,	// (0x000566ed) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb270,	// (0x000566ed) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa71f,	// (0x00055b9c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa71f,	// (0x00055b9c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa0d,	// (0x0005ae8a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa0d,	// (0x0005ae8a) cell_vitu2_dropdown_list_ctrl_pane_g

0xb289,	// (0x00056706) aid_size_cell_gallery2_ParamLimits

0xb289,	// (0x00056706) aid_size_cell_gallery2

0xb2a3,	// (0x00056720) grid_gallery2_pane_ParamLimits

0xb2a3,	// (0x00056720) grid_gallery2_pane

0x9d30,	// (0x000551ad) scroll_pane_cp029_ParamLimits

0x9d30,	// (0x000551ad) scroll_pane_cp029

0xb2b4,	// (0x00056731) cell_gallery2_pane_ParamLimits

0xb2b4,	// (0x00056731) cell_gallery2_pane

0x0d78,	// (0x0004c1f5) cell_gallery2_pane_g2

0xb301,	// (0x0005677e) cell_gallery2_pane_g3

0x0d80,	// (0x0004c1fd) cell_gallery2_pane_g4

0x0d88,	// (0x0004c205) cell_gallery2_pane_g5

0x3311,	// (0x0004e78e) grid_highlight_pane_cp10

0xa93c,	// (0x00055db9) popup_vitu2_match_list_window_ParamLimits

0xa94c,	// (0x00055dc9) popup_vitu2_query_window_ParamLimits

0xa94c,	// (0x00055dc9) popup_vitu2_query_window

0x5c91,	// (0x0005110e) bg_vitu2_candi_button_pane

0x0d6f,	// (0x0004c1ec) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x0d66,	// (0x0004c1e3) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x0d5d,	// (0x0004c1da) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb309,	// (0x00056786) bg_button_pane_cp015

0xb319,	// (0x00056796) bg_button_pane_cp016

0xb32c,	// (0x000567a9) bg_button_pane_cp017

0xe260,	// (0x000596dd) bg_popup_sub_pane_cp22

0x0d90,	// (0x0004c20d) popup_vitu2_query_window_g1

0xb36f,	// (0x000567ec) popup_vitu2_query_window_g2

0x0002,

0xfa18,	// (0x0005ae95) popup_vitu2_query_window_g

0xb38a,	// (0x00056807) popup_vitu2_query_window_t1_ParamLimits

0xb38a,	// (0x00056807) popup_vitu2_query_window_t1

0xb3bd,	// (0x0005683a) popup_vitu2_query_window_t2_ParamLimits

0xb3bd,	// (0x0005683a) popup_vitu2_query_window_t2

0xb3cf,	// (0x0005684c) popup_vitu2_query_window_t3_ParamLimits

0xb3cf,	// (0x0005684c) popup_vitu2_query_window_t3

0xb3f7,	// (0x00056874) popup_vitu2_query_window_t4_ParamLimits

0xb3f7,	// (0x00056874) popup_vitu2_query_window_t4

0xb414,	// (0x00056891) popup_vitu2_query_window_t5_ParamLimits

0xb414,	// (0x00056891) popup_vitu2_query_window_t5

0x0006,

0xfa1f,	// (0x0005ae9c) popup_vitu2_query_window_t_ParamLimits

0xfa1f,	// (0x0005ae9c) popup_vitu2_query_window_t

0x0c18,	// (0x0004c095) main_cset_text_pane

0xacf7,	// (0x00056174) aid_area_touch_slider_ParamLimits

0xad13,	// (0x00056190) cset_slider_pane_ParamLimits

0xad3d,	// (0x000561ba) main_cset_slider_pane_g1_ParamLimits

0xad52,	// (0x000561cf) main_cset_slider_pane_g2_ParamLimits

0x0c39,	// (0x0004c0b6) main_cset_slider_pane_g3_ParamLimits

0x0c39,	// (0x0004c0b6) main_cset_slider_pane_g3

0xad67,	// (0x000561e4) main_cset_slider_pane_g4_ParamLimits

0xad67,	// (0x000561e4) main_cset_slider_pane_g4

0xad76,	// (0x000561f3) main_cset_slider_pane_g5_ParamLimits

0xad76,	// (0x000561f3) main_cset_slider_pane_g5

0xad82,	// (0x000561ff) main_cset_slider_pane_g6_ParamLimits

0xad82,	// (0x000561ff) main_cset_slider_pane_g6

0xf972,	// (0x0005adef) main_cset_slider_pane_g_ParamLimits

0x0c69,	// (0x0004c0e6) main_cset_slider_pane_t1_ParamLimits

0xae0e,	// (0x0005628b) main_cset_slider_pane_t2_ParamLimits

0xae28,	// (0x000562a5) main_cset_slider_pane_t3_ParamLimits

0xae42,	// (0x000562bf) main_cset_slider_pane_t4_ParamLimits

0xae5c,	// (0x000562d9) main_cset_slider_pane_t5_ParamLimits

0xae76,	// (0x000562f3) main_cset_slider_pane_t6_ParamLimits

0xae8b,	// (0x00056308) main_cset_slider_pane_t7_ParamLimits

0xaeb5,	// (0x00056332) main_cset_slider_pane_t8_ParamLimits

0xaeb5,	// (0x00056332) main_cset_slider_pane_t8

0xaedd,	// (0x0005635a) main_cset_slider_pane_t9_ParamLimits

0xaedd,	// (0x0005635a) main_cset_slider_pane_t9

0xaf05,	// (0x00056382) main_cset_slider_pane_t10_ParamLimits

0xaf05,	// (0x00056382) main_cset_slider_pane_t10

0xaf2d,	// (0x000563aa) main_cset_slider_pane_t11_ParamLimits

0xaf2d,	// (0x000563aa) main_cset_slider_pane_t11

0xaf55,	// (0x000563d2) main_cset_slider_pane_t12_ParamLimits

0xaf55,	// (0x000563d2) main_cset_slider_pane_t12

0xaf72,	// (0x000563ef) main_cset_slider_pane_t13_ParamLimits

0xaf72,	// (0x000563ef) main_cset_slider_pane_t13

0xf997,	// (0x0005ae14) main_cset_slider_pane_t_ParamLimits

0x026b,	// (0x0004b6e8) bg_popup_sub_pane_cp011

0x0d9c,	// (0x0004c219) main_cset_text_pane_g1

0x0da4,	// (0x0004c221) main_cset_text_pane_t1

0x0db2,	// (0x0004c22f) main_cset_text_pane_t2

0x0dc0,	// (0x0004c23d) main_cset_text_pane_t3

0x0dce,	// (0x0004c24b) main_cset_text_pane_t4

0x0ddc,	// (0x0004c259) main_cset_text_pane_t5

0x0dea,	// (0x0004c267) main_cset_text_pane_t6

0x0df8,	// (0x0004c275) main_cset_text_pane_t7

0x0006,

0xfa2e,	// (0x0005aeab) main_cset_text_pane_t

0x5c91,	// (0x0005110e) main_cam4_burst_pane

0x5c91,	// (0x0005110e) main_cam5_pane

0xac52,	// (0x000560cf) bg_button_pane_cp019

0xac5b,	// (0x000560d8) bg_button_pane_cp020

0x0c45,	// (0x0004c0c2) main_cset_slider_pane_g7_ParamLimits

0x0c45,	// (0x0004c0c2) main_cset_slider_pane_g7

0x0c51,	// (0x0004c0ce) main_cset_slider_pane_g8_ParamLimits

0x0c51,	// (0x0004c0ce) main_cset_slider_pane_g8

0xad96,	// (0x00056213) main_cset_slider_pane_g9_ParamLimits

0xad96,	// (0x00056213) main_cset_slider_pane_g9

0xada2,	// (0x0005621f) main_cset_slider_pane_g10_ParamLimits

0xada2,	// (0x0005621f) main_cset_slider_pane_g10

0xadae,	// (0x0005622b) main_cset_slider_pane_g11_ParamLimits

0xadae,	// (0x0005622b) main_cset_slider_pane_g11

0xadba,	// (0x00056237) main_cset_slider_pane_g12_ParamLimits

0xadba,	// (0x00056237) main_cset_slider_pane_g12

0xadc6,	// (0x00056243) main_cset_slider_pane_g13_ParamLimits

0xadc6,	// (0x00056243) main_cset_slider_pane_g13

0xadd2,	// (0x0005624f) main_cset_slider_pane_g14_ParamLimits

0xadd2,	// (0x0005624f) main_cset_slider_pane_g14

0xadde,	// (0x0005625b) main_cset_slider_pane_g15_ParamLimits

0xadde,	// (0x0005625b) main_cset_slider_pane_g15

0x0c97,	// (0x0004c114) main_cset_slider_pane_t14_ParamLimits

0x0c97,	// (0x0004c114) main_cset_slider_pane_t14

0x0cd0,	// (0x0004c14d) main_cset_slider_pane_t15_ParamLimits

0x0cd0,	// (0x0004c14d) main_cset_slider_pane_t15

0xb487,	// (0x00056904) aid_cam4_burst_size_cell_ParamLimits

0xb487,	// (0x00056904) aid_cam4_burst_size_cell

0xb4a3,	// (0x00056920) grid_cam4_burst_pane_ParamLimits

0xb4a3,	// (0x00056920) grid_cam4_burst_pane

0xb4c5,	// (0x00056942) linegrid_cam4_burst_pane_ParamLimits

0xb4c5,	// (0x00056942) linegrid_cam4_burst_pane

0xb4e3,	// (0x00056960) scroll_pane_cp30_ParamLimits

0xb4e3,	// (0x00056960) scroll_pane_cp30

0xb4ef,	// (0x0005696c) cell_cam4_burst_pane_ParamLimits

0xb4ef,	// (0x0005696c) cell_cam4_burst_pane

0x0e06,	// (0x0004c283) linegrid_cam4_burst_pane_g1_ParamLimits

0x0e06,	// (0x0004c283) linegrid_cam4_burst_pane_g1

0xb527,	// (0x000569a4) linegrid_cam4_burst_pane_g2_ParamLimits

0xb527,	// (0x000569a4) linegrid_cam4_burst_pane_g2

0x0e13,	// (0x0004c290) linegrid_cam4_burst_pane_g3_ParamLimits

0x0e13,	// (0x0004c290) linegrid_cam4_burst_pane_g3

0x0002,

0xfa3d,	// (0x0005aeba) linegrid_cam4_burst_pane_g_ParamLimits

0xfa3d,	// (0x0005aeba) linegrid_cam4_burst_pane_g

0xb538,	// (0x000569b5) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb538,	// (0x000569b5) linegrid_cam4_burst_pane_g3_copy1

0x0e20,	// (0x0004c29d) linegrid_cam4_burst_pane_g4_ParamLimits

0x0e20,	// (0x0004c29d) linegrid_cam4_burst_pane_g4

0xb552,	// (0x000569cf) linegrid_cam4_burst_pane_g5_ParamLimits

0xb552,	// (0x000569cf) linegrid_cam4_burst_pane_g5

0xb563,	// (0x000569e0) linegrid_cam4_burst_pane_g6_ParamLimits

0xb563,	// (0x000569e0) linegrid_cam4_burst_pane_g6

0x0e2d,	// (0x0004c2aa) linegrid_cam4_burst_pane_g7_ParamLimits

0x0e2d,	// (0x0004c2aa) linegrid_cam4_burst_pane_g7

0xb574,	// (0x000569f1) cell_cam4_burst_pane_g1

0x0e46,	// (0x0004c2c3) main_cam5_pane_t1_ParamLimits

0x0e46,	// (0x0004c2c3) main_cam5_pane_t1

0x0e58,	// (0x0004c2d5) main_cam5_pane_t2_ParamLimits

0x0e58,	// (0x0004c2d5) main_cam5_pane_t2

0x0e6a,	// (0x0004c2e7) main_cam5_pane_t3_ParamLimits

0x0e6a,	// (0x0004c2e7) main_cam5_pane_t3

0x0e7c,	// (0x0004c2f9) main_cam5_pane_t4_ParamLimits

0x0e7c,	// (0x0004c2f9) main_cam5_pane_t4

0x0e92,	// (0x0004c30f) main_cam5_pane_t5_ParamLimits

0x0e92,	// (0x0004c30f) main_cam5_pane_t5

0x0ea4,	// (0x0004c321) main_cam5_pane_t6_ParamLimits

0x0ea4,	// (0x0004c321) main_cam5_pane_t6

0x0eb6,	// (0x0004c333) main_cam5_pane_t7_ParamLimits

0x0eb6,	// (0x0004c333) main_cam5_pane_t7

0x0ec8,	// (0x0004c345) main_cam5_pane_t8_ParamLimits

0x0ec8,	// (0x0004c345) main_cam5_pane_t8

0x0ee4,	// (0x0004c361) main_cam5_pane_t9_ParamLimits

0x0ee4,	// (0x0004c361) main_cam5_pane_t9

0x0ef6,	// (0x0004c373) main_cam5_pane_t10_ParamLimits

0x0ef6,	// (0x0004c373) main_cam5_pane_t10

0x0f08,	// (0x0004c385) main_cam5_pane_t11_ParamLimits

0x0f08,	// (0x0004c385) main_cam5_pane_t11

0x0f1a,	// (0x0004c397) main_cam5_pane_t12_ParamLimits

0x0f1a,	// (0x0004c397) main_cam5_pane_t12

0x0f2f,	// (0x0004c3ac) main_cam5_pane_t13_ParamLimits

0x0f2f,	// (0x0004c3ac) main_cam5_pane_t13

0x000c,

0xfa49,	// (0x0005aec6) main_cam5_pane_t_ParamLimits

0xfa49,	// (0x0005aec6) main_cam5_pane_t

0x5c3a,	// (0x000510b7) popup_scut_keymap_window_ParamLimits

0x5c3a,	// (0x000510b7) popup_scut_keymap_window

0xb587,	// (0x00056a04) aid_size_cell_brow_shortcut

0x3311,	// (0x0004e78e) bg_popup_window_pane_cp010

0xb593,	// (0x00056a10) grid_scut_pane

0xb59d,	// (0x00056a1a) cell_scut_pane_ParamLimits

0xb59d,	// (0x00056a1a) cell_scut_pane

0xb5b2,	// (0x00056a2f) cell_scut_pane_g1

0x0f4c,	// (0x0004c3c9) cell_scut_pane_t1

0x0f5b,	// (0x0004c3d8) cell_scut_pane_t2

0xb5bb,	// (0x00056a38) cell_scut_pane_t3

0x0002,

0xfa64,	// (0x0005aee1) cell_scut_pane_t

0x9580,	// (0x000549fd) main_mup3_pane_g8_ParamLimits

0x9580,	// (0x000549fd) main_mup3_pane_g8

0xa8a4,	// (0x00055d21) area_vitu2_query_pane_ParamLimits

0xa8a4,	// (0x00055d21) area_vitu2_query_pane

0xb33f,	// (0x000567bc) input_focus_pane_cp08

0x0f6a,	// (0x0004c3e7) area_vitu2_query_pane_g1

0xb5c9,	// (0x00056a46) area_vitu2_query_pane_g2

0x0001,

0xfa6b,	// (0x0005aee8) area_vitu2_query_pane_g

0xb5d8,	// (0x00056a55) area_vitu2_query_pane_t1_ParamLimits

0xb5d8,	// (0x00056a55) area_vitu2_query_pane_t1

0xb5ea,	// (0x00056a67) area_vitu2_query_pane_t2_ParamLimits

0xb5ea,	// (0x00056a67) area_vitu2_query_pane_t2

0xb5fc,	// (0x00056a79) area_vitu2_query_pane_t3_ParamLimits

0xb5fc,	// (0x00056a79) area_vitu2_query_pane_t3

0x0f76,	// (0x0004c3f3) area_vitu2_query_pane_t4_ParamLimits

0x0f76,	// (0x0004c3f3) area_vitu2_query_pane_t4

0x0f9e,	// (0x0004c41b) area_vitu2_query_pane_t5_ParamLimits

0x0f9e,	// (0x0004c41b) area_vitu2_query_pane_t5

0x0fc6,	// (0x0004c443) area_vitu2_query_pane_t6_ParamLimits

0x0fc6,	// (0x0004c443) area_vitu2_query_pane_t6

0x0006,

0xfa70,	// (0x0005aeed) area_vitu2_query_pane_t_ParamLimits

0xfa70,	// (0x0005aeed) area_vitu2_query_pane_t

0xb624,	// (0x00056aa1) bg_button_pane_cp018

0xb631,	// (0x00056aae) bg_button_pane_cp021

0xb63d,	// (0x00056aba) bg_button_pane_cp022

0xb64c,	// (0x00056ac9) input_focus_pane_cp09

0x7d49,	// (0x000531c6) aid_size_touch_mv_arrow_left

0x3bf6,	// (0x0004f073) aid_size_touch_mv_arrow_right

0xadf6,	// (0x00056273) main_cset_slider_pane_g16_ParamLimits

0xadf6,	// (0x00056273) main_cset_slider_pane_g16

0xae02,	// (0x0005627f) main_cset_slider_pane_g17_ParamLimits

0xae02,	// (0x0005627f) main_cset_slider_pane_g17

0xb574,	// (0x000569f1) cell_cam4_burst_pane_g1_ParamLimits

0x026b,	// (0x0004b6e8) compa_mode_pane

0xb03a,	// (0x000564b7) popup_vtel_slider_window_g3_ParamLimits

0xb03a,	// (0x000564b7) popup_vtel_slider_window_g3

0xb04e,	// (0x000564cb) popup_vtel_slider_window_g4_ParamLimits

0xb04e,	// (0x000564cb) popup_vtel_slider_window_g4

0xb062,	// (0x000564df) popup_vtel_slider_window_t1_ParamLimits

0xb062,	// (0x000564df) popup_vtel_slider_window_t1

0x5c91,	// (0x0005110e) main_cl_pane

0x89a7,	// (0x00053e24) popup_imed_adjust2_window_ParamLimits

0xe260,	// (0x000596dd) bg_tb_trans_pane_cp05_ParamLimits

0xeb4e,	// (0x00059fcb) popup_imed_adjust2_window_g1_ParamLimits

0xeb5d,	// (0x00059fda) popup_imed_adjust2_window_g2_ParamLimits

0xeb5d,	// (0x00059fda) popup_imed_adjust2_window_g2

0xeb69,	// (0x00059fe6) popup_imed_adjust2_window_g3_ParamLimits

0xeb69,	// (0x00059fe6) popup_imed_adjust2_window_g3

0x0002,

0xf7d7,	// (0x0005ac54) popup_imed_adjust2_window_g_ParamLimits

0xf7d7,	// (0x0005ac54) popup_imed_adjust2_window_g

0xeb75,	// (0x00059ff2) popup_imed_adjust2_window_t1_ParamLimits

0xeb8d,	// (0x0005a00a) slider_imed_adjust_pane_ParamLimits

0xeba1,	// (0x0005a01e) slider_imed_adjust_pane_g1_ParamLimits

0xebb1,	// (0x0005a02e) slider_imed_adjust_pane_g2_ParamLimits

0xebc1,	// (0x0005a03e) slider_imed_adjust_pane_g3_ParamLimits

0xebd2,	// (0x0005a04f) slider_imed_adjust_pane_g4_ParamLimits

0xf7de,	// (0x0005ac5b) slider_imed_adjust_pane_g_ParamLimits

0xa63e,	// (0x00055abb) aid_touch_area_cam4_ParamLimits

0xa63e,	// (0x00055abb) aid_touch_area_cam4

0xa64c,	// (0x00055ac9) battery_pane_cp01

0xa6cb,	// (0x00055b48) main_camera4_pane_g6_ParamLimits

0xa6cb,	// (0x00055b48) main_camera4_pane_g6

0xa6e9,	// (0x00055b66) main_camera4_pane_t2_ParamLimits

0xa6e9,	// (0x00055b66) main_camera4_pane_t2

0x0001,

0xf8e5,	// (0x0005ad62) main_camera4_pane_t_ParamLimits

0xf8e5,	// (0x0005ad62) main_camera4_pane_t

0xa77f,	// (0x00055bfc) aid_touch_area_vid4_ParamLimits

0xa77f,	// (0x00055bfc) aid_touch_area_vid4

0xa6cb,	// (0x00055b48) main_video4_pane_g5_ParamLimits

0xa6cb,	// (0x00055b48) main_video4_pane_g5

0xa7af,	// (0x00055c2c) vid4_progress_pane_ParamLimits

0xa7af,	// (0x00055c2c) vid4_progress_pane

0x0c5d,	// (0x0004c0da) main_cset_slider_pane_g18_ParamLimits

0x0c5d,	// (0x0004c0da) main_cset_slider_pane_g18

0x0e3a,	// (0x0004c2b7) cell_cam4_burst_pane_g2_ParamLimits

0x0e3a,	// (0x0004c2b7) cell_cam4_burst_pane_g2

0x0001,

0xfa44,	// (0x0005aec1) cell_cam4_burst_pane_g_ParamLimits

0xfa44,	// (0x0005aec1) cell_cam4_burst_pane_g

0xb65b,	// (0x00056ad8) bg_cl_pane_ParamLimits

0xb65b,	// (0x00056ad8) bg_cl_pane

0xb667,	// (0x00056ae4) cl_header_pane_ParamLimits

0xb667,	// (0x00056ae4) cl_header_pane

0xb673,	// (0x00056af0) cl_listscroll_pane_ParamLimits

0xb673,	// (0x00056af0) cl_listscroll_pane

0x1012,	// (0x0004c48f) bg_cl_pane_g1

0x101a,	// (0x0004c497) bg_cl_pane_g2

0x1022,	// (0x0004c49f) bg_cl_pane_g3

0x102a,	// (0x0004c4a7) bg_cl_pane_g4

0x1032,	// (0x0004c4af) bg_cl_pane_g5

0x103a,	// (0x0004c4b7) bg_cl_pane_g6

0x1042,	// (0x0004c4bf) bg_cl_pane_g7

0x104a,	// (0x0004c4c7) bg_cl_pane_g8

0x1052,	// (0x0004c4cf) bg_cl_pane_g9

0x0008,

0xfa7f,	// (0x0005aefc) bg_cl_pane_g

0xb67f,	// (0x00056afc) aid_height_cl_leading_ParamLimits

0xb67f,	// (0x00056afc) aid_height_cl_leading

0xb68b,	// (0x00056b08) aid_height_cl_text_ParamLimits

0xb68b,	// (0x00056b08) aid_height_cl_text

0x2886,	// (0x0004dd03) bg_cl_header_pane_ParamLimits

0x2886,	// (0x0004dd03) bg_cl_header_pane

0xb6a3,	// (0x00056b20) cl_header_pane_g1_ParamLimits

0xb6a3,	// (0x00056b20) cl_header_pane_g1

0xb6b0,	// (0x00056b2d) cl_header_pane_t1_ParamLimits

0xb6b0,	// (0x00056b2d) cl_header_pane_t1

0x105a,	// (0x0004c4d7) cl_list_pane

0x1063,	// (0x0004c4e0) hc_scroll_pane_cp01

0x35aa,	// (0x0004ea27) bg_cl_header_pane_g1

0xf027,	// (0x0005a4a4) bg_cl_header_pane_g2

0x35ca,	// (0x0004ea47) bg_cl_header_pane_g3

0xf037,	// (0x0005a4b4) bg_cl_header_pane_g4

0xf02f,	// (0x0005a4ac) bg_cl_header_pane_g5

0x0d55,	// (0x0004c1d2) bg_cl_header_pane_g6

0xf04f,	// (0x0005a4cc) bg_cl_header_pane_g7

0xf057,	// (0x0005a4d4) bg_cl_header_pane_g8

0xf047,	// (0x0005a4c4) bg_cl_header_pane_g9

0x0008,

0xfa92,	// (0x0005af0f) bg_cl_header_pane_g

0xb6c2,	// (0x00056b3f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb6c2,	// (0x00056b3f) hc_cl_list_double_graphic_heading_pane

0xb6d2,	// (0x00056b4f) hc_cl_list_single_graphic_pane_ParamLimits

0xb6d2,	// (0x00056b4f) hc_cl_list_single_graphic_pane

0xb6e4,	// (0x00056b61) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb6e4,	// (0x00056b61) hc_cl_list_single_graphic_pane_g1

0xb6f0,	// (0x00056b6d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb6f0,	// (0x00056b6d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa5,	// (0x0005af22) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa5,	// (0x0005af22) hc_cl_list_single_graphic_pane_g

0xb704,	// (0x00056b81) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb704,	// (0x00056b81) hc_cl_list_single_graphic_pane_t1

0xb6e4,	// (0x00056b61) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb6e4,	// (0x00056b61) hc_cl_list_double_graphic_heading_pane_g1

0xb719,	// (0x00056b96) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb719,	// (0x00056b96) hc_cl_list_double_graphic_heading_pane_g2

0xb72d,	// (0x00056baa) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb72d,	// (0x00056baa) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaaa,	// (0x0005af27) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaaa,	// (0x0005af27) hc_cl_list_double_graphic_heading_pane_g

0xb741,	// (0x00056bbe) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb741,	// (0x00056bbe) hc_cl_list_double_graphic_heading_pane_t1

0xb756,	// (0x00056bd3) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb756,	// (0x00056bd3) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab1,	// (0x0005af2e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab1,	// (0x0005af2e) hc_cl_list_double_graphic_heading_pane_t

0xb76b,	// (0x00056be8) vid4_progress_pane_g1

0xb77a,	// (0x00056bf7) vid4_progress_pane_g2

0xb789,	// (0x00056c06) vid4_progress_pane_g3

0xb798,	// (0x00056c15) vid4_progress_pane_g4

0x0004,

0xfab6,	// (0x0005af33) vid4_progress_pane_g

0xb7b0,	// (0x00056c2d) vid4_progress_pane_t1

0xb7c6,	// (0x00056c43) vid4_progress_pane_t2

0x0002,

0xfac1,	// (0x0005af3e) vid4_progress_pane_t

0xb7f0,	// (0x00056c6d) wait_bar_pane_cp07

0xe46d,	// (0x000598ea) blid_firmament_pane_ParamLimits

0xe4ae,	// (0x0005992b) popup_blid_sat_info2_window_g1

0xe4d2,	// (0x0005994f) popup_blid_sat_info2_window_t3

0xe4e0,	// (0x0005995d) popup_blid_sat_info2_window_t4

0xe4ee,	// (0x0005996b) popup_blid_sat_info2_window_t5

0xe4fc,	// (0x00059979) popup_blid_sat_info2_window_t6

0xe50c,	// (0x00059989) popup_blid_sat_info2_window_t7

0xe51a,	// (0x00059997) popup_blid_sat_info2_window_t8

0xe528,	// (0x000599a5) popup_blid_sat_info2_window_t9

0xe536,	// (0x000599b3) popup_blid_sat_info2_window_t10

0xe5f2,	// (0x00059a6f) aid_firma_cardinal_ParamLimits

0xe606,	// (0x00059a83) blid_firmament_pane_t1_ParamLimits

0xe61d,	// (0x00059a9a) blid_firmament_pane_t2_ParamLimits

0xe634,	// (0x00059ab1) blid_firmament_pane_t3_ParamLimits

0xe64b,	// (0x00059ac8) blid_firmament_pane_t4_ParamLimits

0xf6cb,	// (0x0005ab48) blid_firmament_pane_t_ParamLimits

0xe662,	// (0x00059adf) blid_sat_info_pane_ParamLimits

0x891b,	// (0x00053d98) main_cam_set_pane_ParamLimits

0x9cd0,	// (0x0005514d) aid_size_cell_colour_35_ParamLimits

0x9ce7,	// (0x00055164) aid_size_cell_colour_112_ParamLimits

0x9cfe,	// (0x0005517b) aid_size_cell_effect_ParamLimits

0x498f,	// (0x0004fe0c) bg_tb_trans_pane_cp02_ParamLimits

0x499d,	// (0x0004fe1a) heading_imed_pane_ParamLimits

0x9d18,	// (0x00055195) listscroll_imed_pane_ParamLimits

0x4741,	// (0x0004fbbe) popup_call2_audio_first_window_g5_ParamLimits

0x4741,	// (0x0004fbbe) popup_call2_audio_first_window_g5

0xa3bb,	// (0x00055838) aid_size_touch_image3_arrow_left_ParamLimits

0xa3bb,	// (0x00055838) aid_size_touch_image3_arrow_left

0xa3cf,	// (0x0005584c) aid_size_touch_image3_arrow_right_ParamLimits

0xa3cf,	// (0x0005584c) aid_size_touch_image3_arrow_right

0xb7db,	// (0x00056c58) vid4_progress_pane_t3

0x9f7c,	// (0x000553f9) main_hwr_training_symbol_option_pane_ParamLimits

0x9f7c,	// (0x000553f9) main_hwr_training_symbol_option_pane

0xee2d,	// (0x0005a2aa) popup_hwr_training_preview_window_ParamLimits

0xee2d,	// (0x0005a2aa) popup_hwr_training_preview_window

0x9fd7,	// (0x00055454) hwr_training_navi_pane_g5_ParamLimits

0x9fd7,	// (0x00055454) hwr_training_navi_pane_g5

0xf015,	// (0x0005a492) popup_char_count_window

0x5c7b,	// (0x000510f8) bg_popup_sub_pane_cp20_ParamLimits

0xb15d,	// (0x000565da) list_vitu2_match_list_pane_ParamLimits

0xb169,	// (0x000565e6) vitu2_page_scroll_pane_ParamLimits

0xb169,	// (0x000565e6) vitu2_page_scroll_pane

0x10a0,	// (0x0004c51d) list_single_hwr_training_symbol_option_pane_ParamLimits

0x10a0,	// (0x0004c51d) list_single_hwr_training_symbol_option_pane

0x10b3,	// (0x0004c530) list_single_hwr_training_symbol_option_pane_g1

0x10bb,	// (0x0004c538) list_single_hwr_training_symbol_option_pane_t1

0x10c9,	// (0x0004c546) bg_button_pane_cp023

0x10d2,	// (0x0004c54f) bg_button_pane_cp024

0xb814,	// (0x00056c91) vitu2_page_scroll_pane_g1

0xb81c,	// (0x00056c99) vitu2_page_scroll_pane_g2

0x0001,

0xfac8,	// (0x0005af45) vitu2_page_scroll_pane_g

0xb824,	// (0x00056ca1) vitu2_page_scroll_pane_t1

0xe69b,	// (0x00059b18) popup_char_count_window_g1

0x1105,	// (0x0004c582) popup_char_count_window_g2

0x110e,	// (0x0004c58b) popup_char_count_window_g3

0x0002,

0xfacd,	// (0x0005af4a) popup_char_count_window_g

0x1117,	// (0x0004c594) popup_char_count_window_t1

0x5c91,	// (0x0005110e) main_vded2_pane

0xeb3c,	// (0x00059fb9) aid_size_cell_imed_line

0xeb46,	// (0x00059fc3) grid_imed_line_width_pane

0xa7fa,	// (0x00055c77) vid4_indicators_pane_g4

0x1125,	// (0x0004c5a2) cell_imed_line_width_pane_ParamLimits

0x1125,	// (0x0004c5a2) cell_imed_line_width_pane

0x1137,	// (0x0004c5b4) cell_imed_line_width_pane_g1

0xe447,	// (0x000598c4) cell_imed_line_width_pane_g2

0x0001,

0xfad4,	// (0x0005af51) cell_imed_line_width_pane_g

0xb833,	// (0x00056cb0) main_vded2_pane_g1_ParamLimits

0xb833,	// (0x00056cb0) main_vded2_pane_g1

0xb840,	// (0x00056cbd) main_vded2_pane_g2_ParamLimits

0xb840,	// (0x00056cbd) main_vded2_pane_g2

0x0001,

0xfad9,	// (0x0005af56) main_vded2_pane_g_ParamLimits

0xfad9,	// (0x0005af56) main_vded2_pane_g

0xb84c,	// (0x00056cc9) vded2_slider_pane_ParamLimits

0xb84c,	// (0x00056cc9) vded2_slider_pane

0xb859,	// (0x00056cd6) aid_size_touch_vded2_end

0xb861,	// (0x00056cde) aid_size_touch_vded2_playhead

0xb869,	// (0x00056ce6) aid_size_touch_vded2_start

0xb871,	// (0x00056cee) vded2_slider_bg_pane

0xb87a,	// (0x00056cf7) vded2_slider_pane_g1

0xb883,	// (0x00056d00) vded2_slider_pane_g2

0xb88b,	// (0x00056d08) vded2_slider_pane_g3

0x0002,

0xfade,	// (0x0005af5b) vded2_slider_pane_g

0xb894,	// (0x00056d11) vded2_slider_bg_pane_g1

0xb89d,	// (0x00056d1a) vded2_slider_bg_pane_g2

0xb8a6,	// (0x00056d23) vded2_slider_bg_pane_g3

0x0002,

0xfae5,	// (0x0005af62) vded2_slider_bg_pane_g

0x8303,	// (0x00053780) aid_postcard_touch_down_pane_ParamLimits

0x8303,	// (0x00053780) aid_postcard_touch_down_pane

0x830f,	// (0x0005378c) aid_postcard_touch_up_pane_ParamLimits

0x830f,	// (0x0005378c) aid_postcard_touch_up_pane

0x5c91,	// (0x0005110e) main_blid2_pane

0x8944,	// (0x00053dc1) popup_blid2_search_window

0x026b,	// (0x0004b6e8) blid2_gps_pane

0x026b,	// (0x0004b6e8) blid2_navig_pane

0x026b,	// (0x0004b6e8) blid2_search_pane

0x026b,	// (0x0004b6e8) blid2_tripm_pane

0xb8af,	// (0x00056d2c) blid2_search_pane_g1_ParamLimits

0xb8af,	// (0x00056d2c) blid2_search_pane_g1

0xb8bb,	// (0x00056d38) blid2_search_pane_t1_ParamLimits

0xb8bb,	// (0x00056d38) blid2_search_pane_t1

0xb8cd,	// (0x00056d4a) aid_size_cell_blid2_gps_ParamLimits

0xb8cd,	// (0x00056d4a) aid_size_cell_blid2_gps

0xb8dd,	// (0x00056d5a) blid2_gps_pane_g1_ParamLimits

0xb8dd,	// (0x00056d5a) blid2_gps_pane_g1

0xb8e9,	// (0x00056d66) grid_blid2_satellite_pane_ParamLimits

0xb8e9,	// (0x00056d66) grid_blid2_satellite_pane

0xb8f5,	// (0x00056d72) blid2_navig_pane_g1_ParamLimits

0xb8f5,	// (0x00056d72) blid2_navig_pane_g1

0xb901,	// (0x00056d7e) blid2_navig_pane_t1_ParamLimits

0xb901,	// (0x00056d7e) blid2_navig_pane_t1

0xb913,	// (0x00056d90) blid2_navig_pane_t2_ParamLimits

0xb913,	// (0x00056d90) blid2_navig_pane_t2

0x0001,

0xfaec,	// (0x0005af69) blid2_navig_pane_t_ParamLimits

0xfaec,	// (0x0005af69) blid2_navig_pane_t

0xb925,	// (0x00056da2) blid2_navig_ring_pane_ParamLimits

0xb925,	// (0x00056da2) blid2_navig_ring_pane

0xb931,	// (0x00056dae) blid2_speed_pane_ParamLimits

0xb931,	// (0x00056dae) blid2_speed_pane

0xb93d,	// (0x00056dba) blid2_tripm_pane_g1_ParamLimits

0xb93d,	// (0x00056dba) blid2_tripm_pane_g1

0xb949,	// (0x00056dc6) blid2_tripm_pane_g2_ParamLimits

0xb949,	// (0x00056dc6) blid2_tripm_pane_g2

0xb955,	// (0x00056dd2) blid2_tripm_pane_g3_ParamLimits

0xb955,	// (0x00056dd2) blid2_tripm_pane_g3

0xb961,	// (0x00056dde) blid2_tripm_pane_g4_ParamLimits

0xb961,	// (0x00056dde) blid2_tripm_pane_g4

0xb96d,	// (0x00056dea) blid2_tripm_pane_g5_ParamLimits

0xb96d,	// (0x00056dea) blid2_tripm_pane_g5

0x0005,

0xfaf1,	// (0x0005af6e) blid2_tripm_pane_g_ParamLimits

0xfaf1,	// (0x0005af6e) blid2_tripm_pane_g

0xb985,	// (0x00056e02) blid2_tripm_pane_t1_ParamLimits

0xb985,	// (0x00056e02) blid2_tripm_pane_t1

0xb997,	// (0x00056e14) blid2_tripm_pane_t2_ParamLimits

0xb997,	// (0x00056e14) blid2_tripm_pane_t2

0xb9a9,	// (0x00056e26) blid2_tripm_pane_t3_ParamLimits

0xb9a9,	// (0x00056e26) blid2_tripm_pane_t3

0x0003,

0xfafe,	// (0x0005af7b) blid2_tripm_pane_t_ParamLimits

0xfafe,	// (0x0005af7b) blid2_tripm_pane_t

0xb9d9,	// (0x00056e56) cell_blid2_satellite_pane_ParamLimits

0xb9d9,	// (0x00056e56) cell_blid2_satellite_pane

0xb9f1,	// (0x00056e6e) cell_blid2_satellite_pane_g1

0x1140,	// (0x0004c5bd) cell_blid2_satellite_pane_t1

0xe672,	// (0x00059aef) blid2_speed_pane_g1

0x114e,	// (0x0004c5cb) blid2_speed_pane_t1

0x115c,	// (0x0004c5d9) blid2_speed_pane_t2

0x0001,

0xfb07,	// (0x0005af84) blid2_speed_pane_t

0xe672,	// (0x00059aef) blid2_navig_ring_pane_g1

0xb9fa,	// (0x00056e77) blid2_navig_ring_pane_g2

0xba02,	// (0x00056e7f) blid2_navig_ring_pane_g3

0xba0a,	// (0x00056e87) blid2_navig_ring_pane_g4

0xba12,	// (0x00056e8f) blid2_navig_ring_pane_g5

0x0004,

0xfb0c,	// (0x0005af89) blid2_navig_ring_pane_g

0x026b,	// (0x0004b6e8) bg_popup_window_pane_cp011

0x116a,	// (0x0004c5e7) popup_blid2_search_window_g1

0x1172,	// (0x0004c5ef) popup_blid2_search_window_t1

0x1180,	// (0x0004c5fd) popup_blid2_search_window_t2

0x0001,

0xfb17,	// (0x0005af94) popup_blid2_search_window_t

0x34b9,	// (0x0004e936) main_browser_pane_g1

0x3142,	// (0x0004e5bf) main_browser_pane_ParamLimits

0x891b,	// (0x00053d98) bg_button_pane_cp011_ParamLimits

0xaa57,	// (0x00055ed4) cell_vitu2_function_pane_g1_ParamLimits

0xe260,	// (0x000596dd) bg_popup_sub_pane_cp22_ParamLimits

0xb33f,	// (0x000567bc) input_focus_pane_cp08_ParamLimits

0xb356,	// (0x000567d3) popup_vitu2_query_button_pane_ParamLimits

0xb356,	// (0x000567d3) popup_vitu2_query_button_pane

0xb367,	// (0x000567e4) popup_vitu2_query_input_button_pane

0x0d90,	// (0x0004c20d) popup_vitu2_query_window_g1_ParamLimits

0xb36f,	// (0x000567ec) popup_vitu2_query_window_g2_ParamLimits

0xfa18,	// (0x0005ae95) popup_vitu2_query_window_g_ParamLimits

0x026b,	// (0x0004b6e8) bg_button_pane_cp026

0xba1a,	// (0x00056e97) popup_vitu2_query_input_button_pane_g1

0x026b,	// (0x0004b6e8) bg_button_pane_cp025

0x118e,	// (0x0004c60b) popup_vitu2_query_button_pane_t1

0x92fe,	// (0x0005477b) main_mp3_pane_t6

0x930c,	// (0x00054789) popup_slider_window_cp01

0xa72d,	// (0x00055baa) cam4_battery_pane

0xa72d,	// (0x00055baa) cam4_battery_pane_cp02

0xa72d,	// (0x00055baa) cam4_battery_pane_cp01

0xa72d,	// (0x00055baa) cam4_battery_pane_cp03

0xef2d,	// (0x0005a3aa) cam4_battery_pane_g1

0xe672,	// (0x00059aef) cam4_battery_pane_g2

0x0001,

0xfb1c,	// (0x0005af99) cam4_battery_pane_g

0xe544,	// (0x000599c1) popup_blid_sat_info2_window_t11

0x7d49,	// (0x000531c6) aid_size_touch_mv_arrow_left_ParamLimits

0x3bf6,	// (0x0004f073) aid_size_touch_mv_arrow_right_ParamLimits

0x3c4f,	// (0x0004f0cc) navi_pane_g1_ParamLimits

0x3c5b,	// (0x0004f0d8) navi_pane_g2_ParamLimits

0x7d6d,	// (0x000531ea) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0005a847) navi_pane_g_ParamLimits

0x7d8a,	// (0x00053207) navi_pane_mv_t1_ParamLimits

0x9d24,	// (0x000551a1) grid_imed_effect_pane_ParamLimits

0x6aae,	// (0x00051f2b) aid_placing_vt_slider_lsc

0x33fb,	// (0x0004e878) aid_placing_vt_slider_prt

0x498f,	// (0x0004fe0c) bg_tb_trans_pane_cp01_ParamLimits

0xe7c1,	// (0x00059c3e) popup_image_details_window_g1_ParamLimits

0xe7d4,	// (0x00059c51) popup_image_details_window_g2_ParamLimits

0xe7e9,	// (0x00059c66) popup_image_details_window_g3_ParamLimits

0xe7e9,	// (0x00059c66) popup_image_details_window_g3

0xf710,	// (0x0005ab8d) popup_image_details_window_g_ParamLimits

0xe7fd,	// (0x00059c7a) popup_image_details_window_t1_ParamLimits

0xe80f,	// (0x00059c8c) popup_image_details_window_t2_ParamLimits

0xe828,	// (0x00059ca5) popup_image_details_window_t3_ParamLimits

0xe83c,	// (0x00059cb9) popup_image_details_window_t4_ParamLimits

0xe857,	// (0x00059cd4) popup_image_details_window_t5_ParamLimits

0xf717,	// (0x0005ab94) popup_image_details_window_t_ParamLimits

0xb697,	// (0x00056b14) cl_header_name_pane_ParamLimits

0xb697,	// (0x00056b14) cl_header_name_pane

0xba22,	// (0x00056e9f) cl_header_name_pane_t1_ParamLimits

0xba22,	// (0x00056e9f) cl_header_name_pane_t1

0xba39,	// (0x00056eb6) cl_header_name_pane_t2_ParamLimits

0xba39,	// (0x00056eb6) cl_header_name_pane_t2

0xba63,	// (0x00056ee0) cl_header_name_pane_t3_ParamLimits

0xba63,	// (0x00056ee0) cl_header_name_pane_t3

0x0002,

0xfb21,	// (0x0005af9e) cl_header_name_pane_t_ParamLimits

0xfb21,	// (0x0005af9e) cl_header_name_pane_t

0x3ce8,	// (0x0004f165) navi_pane_mv_g2_ParamLimits

0xefef,	// (0x0005a46c) field_vitu2_entry_pane_g1_ParamLimits

0xeffb,	// (0x0005a478) field_vitu2_entry_pane_g2_ParamLimits

0xf007,	// (0x0005a484) field_vitu2_entry_pane_g3_ParamLimits

0xf007,	// (0x0005a484) field_vitu2_entry_pane_g3

0xf917,	// (0x0005ad94) field_vitu2_entry_pane_g_ParamLimits

0xa9eb,	// (0x00055e68) cell_vitu2_itu_pane_g1_ParamLimits

0xa9fd,	// (0x00055e7a) cell_vitu2_itu_pane_g2_ParamLimits

0xa9fd,	// (0x00055e7a) cell_vitu2_itu_pane_g2

0x0001,

0xf923,	// (0x0005ada0) cell_vitu2_itu_pane_g_ParamLimits

0xf923,	// (0x0005ada0) cell_vitu2_itu_pane_g

0x891b,	// (0x00053d98) bg_vkb2_func_pane_cp05_ParamLimits

0x891b,	// (0x00053d98) bg_vkb2_func_pane_cp05

0x891b,	// (0x00053d98) bg_vkb2_func_pane_cp03

0x891b,	// (0x00053d98) bg_vkb2_func_pane_cp04

0x891b,	// (0x00053d98) bg_vkb2_func_pane_cp10_ParamLimits

0x891b,	// (0x00053d98) bg_vkb2_func_pane_cp10

0xb63d,	// (0x00056aba) bg_vkb2_func_pane_cp08

0xb624,	// (0x00056aa1) bg_vkb2_func_pane_cp06

0xb631,	// (0x00056aae) bg_vkb2_func_pane_cp07

0x10db,	// (0x0004c558) bg_vkb2_func_pane_cp11_ParamLimits

0x10db,	// (0x0004c558) bg_vkb2_func_pane_cp11

0x10f0,	// (0x0004c56d) bg_vkb2_func_pane_cp12_ParamLimits

0x10f0,	// (0x0004c56d) bg_vkb2_func_pane_cp12

0x026b,	// (0x0004b6e8) bg_vkb2_func_pane_cp09

0xf027,	// (0x0005a4a4) bg_vkb2_func_pane_g1

0x35ca,	// (0x0004ea47) bg_vkb2_func_pane_g2

0xf02f,	// (0x0005a4ac) bg_vkb2_func_pane_g3

0xf037,	// (0x0005a4b4) bg_vkb2_func_pane_g4

0x0d55,	// (0x0004c1d2) bg_vkb2_func_pane_g5

0xf04f,	// (0x0005a4cc) bg_vkb2_func_pane_g6

0xf057,	// (0x0005a4d4) bg_vkb2_func_pane_g7

0xf047,	// (0x0005a4c4) bg_vkb2_func_pane_g8

0x35aa,	// (0x0004ea27) bg_vkb2_func_pane_g9

0x0008,

0xfb28,	// (0x0005afa5) bg_vkb2_func_pane_g

0xb979,	// (0x00056df6) blid2_tripm_pane_g6_ParamLimits

0xb979,	// (0x00056df6) blid2_tripm_pane_g6

0xeeeb,	// (0x0005a368) mp4_progress_pane_g1

0xb9cd,	// (0x00056e4a) blid2_tripm_values_pane_ParamLimits

0xb9cd,	// (0x00056e4a) blid2_tripm_values_pane

0xba88,	// (0x00056f05) blid2_tripm_values_pane_t1

0xba96,	// (0x00056f13) blid2_tripm_values_pane_t2

0xbaa4,	// (0x00056f21) blid2_tripm_values_pane_t3

0xbab2,	// (0x00056f2f) blid2_tripm_values_pane_t4

0xbac0,	// (0x00056f3d) blid2_tripm_values_pane_t5

0xbace,	// (0x00056f4b) blid2_tripm_values_pane_t6

0xbadc,	// (0x00056f59) blid2_tripm_values_pane_t7

0xbaea,	// (0x00056f67) blid2_tripm_values_pane_t8

0xbaf8,	// (0x00056f75) blid2_tripm_values_pane_t9

0x0008,

0xfb3b,	// (0x0005afb8) blid2_tripm_values_pane_t

0x6ae8,	// (0x00051f65) call_video_pane_t1_ParamLimits

0x6b05,	// (0x00051f82) call_video_pane_t2_ParamLimits

0xf253,	// (0x0005a6d0) call_video_pane_t_ParamLimits

0x820c,	// (0x00053689) msg_header_pane_g1_ParamLimits

0x3eba,	// (0x0004f337) msg_header_pane_g2_ParamLimits

0x3eba,	// (0x0004f337) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0005a8ea) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0005a8ea) msg_header_pane_g

0x3142,	// (0x0004e5bf) main_clock2_pane_ParamLimits

0x9ac8,	// (0x00054f45) grid_clock2_toolbar_pane_ParamLimits

0x9ac8,	// (0x00054f45) grid_clock2_toolbar_pane

0x9ac8,	// (0x00054f45) listscroll_clock2_pane_ParamLimits

0x9ac8,	// (0x00054f45) listscroll_clock2_pane

0x9b64,	// (0x00054fe1) main_clock2_pane_t3_ParamLimits

0x9b64,	// (0x00054fe1) main_clock2_pane_t3

0x9b76,	// (0x00054ff3) main_clock2_pane_t4_ParamLimits

0x9b76,	// (0x00054ff3) main_clock2_pane_t4

0x119c,	// (0x0004c619) cell_clock2_toolbar_pane

0x11a4,	// (0x0004c621) cell_clock2_toolbar_pane_cp01

0x11a4,	// (0x0004c621) cell_clock2_toolbar_pane_cp02

0x11ac,	// (0x0004c629) cell_clock2_toolbar_pane_cp03

0x11b4,	// (0x0004c631) list_clock2_pane

0x11bc,	// (0x0004c639) scroll_pane_cp10

0x11c4,	// (0x0004c641) list_single_clock2_pane_ParamLimits

0x11c4,	// (0x0004c641) list_single_clock2_pane

0x3311,	// (0x0004e78e) list_highlight_pane_cp08

0x11d1,	// (0x0004c64e) list_single_clock2_pane_t1

0x11df,	// (0x0004c65c) list_single_clock2_pane_t2

0x0001,

0xfb4e,	// (0x0005afcb) list_single_clock2_pane_t

0x026b,	// (0x0004b6e8) bg_button_pane_cp10

0x11ed,	// (0x0004c66a) cell_clock2_toolbar_pane_g1

0x826d,	// (0x000536ea) aid_main_viewer_pane_g1_ParamLimits

0x826d,	// (0x000536ea) aid_main_viewer_pane_g1

0x8279,	// (0x000536f6) aid_main_viewer_pane_g2_ParamLimits

0x8279,	// (0x000536f6) aid_main_viewer_pane_g2

0x8285,	// (0x00053702) aid_main_viewer_pane_g3_ParamLimits

0x8285,	// (0x00053702) aid_main_viewer_pane_g3

0x8294,	// (0x00053711) aid_main_viewer_pane_g4_ParamLimits

0x8294,	// (0x00053711) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0005a8fb) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0005a8fb) aid_main_viewer_pane_g

0x5c7b,	// (0x000510f8) main_calc_pane_ParamLimits

0x8929,	// (0x00053da6) main_dialer2_pane_ParamLimits

0x5c91,	// (0x0005110e) main_cam6_pane

0x5c91,	// (0x0005110e) main_vid6_pane

0x9ad4,	// (0x00054f51) listscroll_gen_pane_cp06_ParamLimits

0x9ad4,	// (0x00054f51) listscroll_gen_pane_cp06

0x9b88,	// (0x00055005) main_clock2_pane_t5_ParamLimits

0x9b88,	// (0x00055005) main_clock2_pane_t5

0x9bd1,	// (0x0005504e) aid_call2_pane_cp10_ParamLimits

0x9be3,	// (0x00055060) aid_call_pane_cp10_ParamLimits

0x3bea,	// (0x0004f067) popup_clock_analogue_window_cp10_g1_ParamLimits

0x3bea,	// (0x0004f067) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9bf5,	// (0x00055072) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9bf5,	// (0x00055072) popup_clock_analogue_window_cp10_g4_ParamLimits

0x3bea,	// (0x0004f067) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7cc,	// (0x0005ac49) popup_clock_analogue_window_cp10_g_ParamLimits

0x9c07,	// (0x00055084) popup_clock_analogue_window_cp10_t1_ParamLimits

0xef55,	// (0x0005a3d2) cell_dialer2_keypad_pane_g2_ParamLimits

0xef55,	// (0x0005a3d2) cell_dialer2_keypad_pane_g2

0x0001,

0xf8b6,	// (0x0005ad33) cell_dialer2_keypad_pane_g_ParamLimits

0xf8b6,	// (0x0005ad33) cell_dialer2_keypad_pane_g

0xa384,	// (0x00055801) cell_dialer2_keypad_pane_t1

0xace4,	// (0x00056161) main_cset_text2_pane_ParamLimits

0xace4,	// (0x00056161) main_cset_text2_pane

0x0f6a,	// (0x0004c3e7) area_vitu2_query_pane_g1_ParamLimits

0xb5c9,	// (0x00056a46) area_vitu2_query_pane_g2_ParamLimits

0xfa6b,	// (0x0005aee8) area_vitu2_query_pane_g_ParamLimits

0x0fee,	// (0x0004c46b) area_vitu2_query_pane_t7_ParamLimits

0x0fee,	// (0x0004c46b) area_vitu2_query_pane_t7

0xb624,	// (0x00056aa1) bg_button_pane_cp018_ParamLimits

0xb631,	// (0x00056aae) bg_button_pane_cp021_ParamLimits

0xb63d,	// (0x00056aba) bg_button_pane_cp022_ParamLimits

0xb63d,	// (0x00056aba) bg_vkb2_func_pane_cp08_ParamLimits

0xb624,	// (0x00056aa1) bg_vkb2_func_pane_cp06_ParamLimits

0xb631,	// (0x00056aae) bg_vkb2_func_pane_cp07_ParamLimits

0xb64c,	// (0x00056ac9) input_focus_pane_cp09_ParamLimits

0xbb06,	// (0x00056f83) cam6_autofocus_pane_ParamLimits

0xbb06,	// (0x00056f83) cam6_autofocus_pane

0xbb22,	// (0x00056f9f) cam6_image_uncrop_pane_ParamLimits

0xbb22,	// (0x00056f9f) cam6_image_uncrop_pane

0xbb45,	// (0x00056fc2) cam6_indi_pane_ParamLimits

0xbb45,	// (0x00056fc2) cam6_indi_pane

0xbb5f,	// (0x00056fdc) cam6_mode_pane_ParamLimits

0xbb5f,	// (0x00056fdc) cam6_mode_pane

0xbb73,	// (0x00056ff0) cam6_timer_pane_ParamLimits

0xbb73,	// (0x00056ff0) cam6_timer_pane

0xbb7f,	// (0x00056ffc) cam6_zoom_pane_ParamLimits

0xbb7f,	// (0x00056ffc) cam6_zoom_pane

0xbb95,	// (0x00057012) cam6_mode_pane_g1_ParamLimits

0xbb95,	// (0x00057012) cam6_mode_pane_g1

0xbba1,	// (0x0005701e) cam6_mode_pane_g2_ParamLimits

0xbba1,	// (0x0005701e) cam6_mode_pane_g2

0xbbad,	// (0x0005702a) cam6_mode_pane_g3_ParamLimits

0xbbad,	// (0x0005702a) cam6_mode_pane_g3

0xbbb9,	// (0x00057036) cam6_mode_pane_g4_ParamLimits

0xbbb9,	// (0x00057036) cam6_mode_pane_g4

0x0003,

0xfb53,	// (0x0005afd0) cam6_mode_pane_g_ParamLimits

0xfb53,	// (0x0005afd0) cam6_mode_pane_g

0x11f5,	// (0x0004c672) bg_tb_trans_pane_cp08_ParamLimits

0x11f5,	// (0x0004c672) bg_tb_trans_pane_cp08

0x1203,	// (0x0004c680) cam6_battery_pane_ParamLimits

0x1203,	// (0x0004c680) cam6_battery_pane

0x1219,	// (0x0004c696) cam6_indi_pane_g1_ParamLimits

0x1219,	// (0x0004c696) cam6_indi_pane_g1

0x122b,	// (0x0004c6a8) cam6_indi_pane_g2_ParamLimits

0x122b,	// (0x0004c6a8) cam6_indi_pane_g2

0x123d,	// (0x0004c6ba) cam6_indi_pane_g3_ParamLimits

0x123d,	// (0x0004c6ba) cam6_indi_pane_g3

0x0002,

0xfb5c,	// (0x0005afd9) cam6_indi_pane_g_ParamLimits

0xfb5c,	// (0x0005afd9) cam6_indi_pane_g

0x124f,	// (0x0004c6cc) cam6_indi_pane_t1_ParamLimits

0x124f,	// (0x0004c6cc) cam6_indi_pane_t1

0xa838,	// (0x00055cb5) cam6_autofocus_pane_g1

0xa830,	// (0x00055cad) cam6_autofocus_pane_g2

0xa848,	// (0x00055cc5) cam6_autofocus_pane_g3

0xa840,	// (0x00055cbd) cam6_autofocus_pane_g4

0x0003,

0xfb63,	// (0x0005afe0) cam6_autofocus_pane_g

0x1275,	// (0x0004c6f2) cam6_timer_pane_g1

0x127d,	// (0x0004c6fa) cam6_timer_pane_t1

0x128b,	// (0x0004c708) cam6_zoom_cont_pane

0x1293,	// (0x0004c710) cam6_zoom_pane_g1

0x129b,	// (0x0004c718) cam6_zoom_pane_g2

0xbbc5,	// (0x00057042) cam6_zoom_pane_g3

0x0002,

0xfb6c,	// (0x0005afe9) cam6_zoom_pane_g

0xe672,	// (0x00059aef) cam6_battery_pane_g1

0xe672,	// (0x00059aef) cam6_battery_pane_g2

0x0001,

0xf6d4,	// (0x0005ab51) cam6_battery_pane_g

0x12a3,	// (0x0004c720) cam6_zoom_cont_pane_g1

0x12ac,	// (0x0004c729) cam6_zoom_cont_pane_g2

0x12b5,	// (0x0004c732) cam6_zoom_cont_pane_g3

0x0002,

0xfb73,	// (0x0005aff0) cam6_zoom_cont_pane_g

0xbbe2,	// (0x0005705f) cam6_mode_pane_cp_ParamLimits

0xbbe2,	// (0x0005705f) cam6_mode_pane_cp

0xbbf6,	// (0x00057073) cam6_zoom_pane_cp_ParamLimits

0xbbf6,	// (0x00057073) cam6_zoom_pane_cp

0xbc0c,	// (0x00057089) vid6_image_uncrop_cif_pane_ParamLimits

0xbc0c,	// (0x00057089) vid6_image_uncrop_cif_pane

0xbc2e,	// (0x000570ab) vid6_image_uncrop_nhd_pane_ParamLimits

0xbc2e,	// (0x000570ab) vid6_image_uncrop_nhd_pane

0xbc45,	// (0x000570c2) vid6_image_uncrop_vga_pane_ParamLimits

0xbc45,	// (0x000570c2) vid6_image_uncrop_vga_pane

0xbc5c,	// (0x000570d9) vid6_image_uncrop_wvga_pane_ParamLimits

0xbc5c,	// (0x000570d9) vid6_image_uncrop_wvga_pane

0xbc73,	// (0x000570f0) vid6_indi_pane_ParamLimits

0xbc73,	// (0x000570f0) vid6_indi_pane

0x11f5,	// (0x0004c672) bg_tb_trans_pane_cp09_ParamLimits

0x11f5,	// (0x0004c672) bg_tb_trans_pane_cp09

0x12c9,	// (0x0004c746) cam6_battery_pane_cp_ParamLimits

0x12c9,	// (0x0004c746) cam6_battery_pane_cp

0x12d5,	// (0x0004c752) vid6_indi_pane_g1_ParamLimits

0x12d5,	// (0x0004c752) vid6_indi_pane_g1

0x12e7,	// (0x0004c764) vid6_indi_pane_g2_ParamLimits

0x12e7,	// (0x0004c764) vid6_indi_pane_g2

0x12f9,	// (0x0004c776) vid6_indi_pane_g3_ParamLimits

0x12f9,	// (0x0004c776) vid6_indi_pane_g3

0x130e,	// (0x0004c78b) vid6_indi_pane_g4_ParamLimits

0x130e,	// (0x0004c78b) vid6_indi_pane_g4

0x1323,	// (0x0004c7a0) vid6_indi_pane_g5_ParamLimits

0x1323,	// (0x0004c7a0) vid6_indi_pane_g5

0x0004,

0xfb7a,	// (0x0005aff7) vid6_indi_pane_g_ParamLimits

0xfb7a,	// (0x0005aff7) vid6_indi_pane_g

0x133d,	// (0x0004c7ba) vid6_indi_pane_t1_ParamLimits

0x133d,	// (0x0004c7ba) vid6_indi_pane_t1

0x1353,	// (0x0004c7d0) vid6_indi_pane_t2_ParamLimits

0x1353,	// (0x0004c7d0) vid6_indi_pane_t2

0x137b,	// (0x0004c7f8) vid6_indi_pane_t3_ParamLimits

0x137b,	// (0x0004c7f8) vid6_indi_pane_t3

0x13a3,	// (0x0004c820) vid6_indi_pane_t4_ParamLimits

0x13a3,	// (0x0004c820) vid6_indi_pane_t4

0x0003,

0xfb85,	// (0x0005b002) vid6_indi_pane_t_ParamLimits

0xfb85,	// (0x0005b002) vid6_indi_pane_t

0x13c7,	// (0x0004c844) wait_bar_pane_cp08

0xbc93,	// (0x00057110) main_cset_text2_pane_t1_ParamLimits

0xbc93,	// (0x00057110) main_cset_text2_pane_t1

0xbbcd,	// (0x0005704a) listscroll_gen_pane_cp06_t1_ParamLimits

0xbbcd,	// (0x0005704a) listscroll_gen_pane_cp06_t1

0x5c91,	// (0x0005110e) main_cam6_set_pane

0xa71f,	// (0x00055b9c) bg_tb_trans_pane_cp06_ParamLimits

0xa735,	// (0x00055bb2) cam4_indicators_pane_g1_ParamLimits

0xa745,	// (0x00055bc2) cam4_indicators_pane_g2_ParamLimits

0xf8f3,	// (0x0005ad70) cam4_indicators_pane_g_ParamLimits

0xa765,	// (0x00055be2) cam4_indicators_pane_t1_ParamLimits

0x891b,	// (0x00053d98) bg_tb_trans_pane_cp07_ParamLimits

0xa735,	// (0x00055bb2) vid4_indicators_pane_g1_ParamLimits

0xa7d9,	// (0x00055c56) vid4_indicators_pane_g2_ParamLimits

0xa7e9,	// (0x00055c66) vid4_indicators_pane_g3_ParamLimits

0xa7fa,	// (0x00055c77) vid4_indicators_pane_g4_ParamLimits

0xf905,	// (0x0005ad82) vid4_indicators_pane_g_ParamLimits

0xa816,	// (0x00055c93) vid4_indicators_pane_t1_ParamLimits

0xb76b,	// (0x00056be8) vid4_progress_pane_g1_ParamLimits

0xb77a,	// (0x00056bf7) vid4_progress_pane_g2_ParamLimits

0xb789,	// (0x00056c06) vid4_progress_pane_g3_ParamLimits

0xb798,	// (0x00056c15) vid4_progress_pane_g4_ParamLimits

0xfab6,	// (0x0005af33) vid4_progress_pane_g_ParamLimits

0xb7b0,	// (0x00056c2d) vid4_progress_pane_t1_ParamLimits

0xb7c6,	// (0x00056c43) vid4_progress_pane_t2_ParamLimits

0xb7db,	// (0x00056c58) vid4_progress_pane_t3_ParamLimits

0xfac1,	// (0x0005af3e) vid4_progress_pane_t_ParamLimits

0xb7f0,	// (0x00056c6d) wait_bar_pane_cp07_ParamLimits

0xbcaf,	// (0x0005712c) main_cam6_set_pane_g2_ParamLimits

0xbcaf,	// (0x0005712c) main_cam6_set_pane_g2

0xbcbb,	// (0x00057138) main_cset6_listscroll_pane_ParamLimits

0xbcbb,	// (0x00057138) main_cset6_listscroll_pane

0xbce4,	// (0x00057161) main_cset6_slider_pane_ParamLimits

0xbce4,	// (0x00057161) main_cset6_slider_pane

0xbcf0,	// (0x0005716d) main_cset6_text2_pane_ParamLimits

0xbcf0,	// (0x0005716d) main_cset6_text2_pane

0x13d7,	// (0x0004c854) main_cset6_text_pane

0x0c20,	// (0x0004c09d) main_cset_list_pane_copy1_ParamLimits

0x0c20,	// (0x0004c09d) main_cset_list_pane_copy1

0x0c30,	// (0x0004c0ad) scroll_pane_cp028_copy1

0xbd03,	// (0x00057180) cset_list_set_pane_copy1

0xaf9f,	// (0x0005641c) aid_position_infowindow_above_copy1

0xafa7,	// (0x00056424) aid_position_infowindow_below_copy1

0xbd12,	// (0x0005718f) cset_list_set_pane_g1_copy1

0xbd1a,	// (0x00057197) cset_list_set_pane_g3_copy1_ParamLimits

0xbd1a,	// (0x00057197) cset_list_set_pane_g3_copy1

0xbd29,	// (0x000571a6) cset_list_set_pane_t1_copy1_ParamLimits

0xbd29,	// (0x000571a6) cset_list_set_pane_t1_copy1

0x498f,	// (0x0004fe0c) list_highlight_pane_cp021_copy1_ParamLimits

0x498f,	// (0x0004fe0c) list_highlight_pane_cp021_copy1

0x13df,	// (0x0004c85c) cset6_slider_pane_ParamLimits

0x13df,	// (0x0004c85c) cset6_slider_pane

0x140b,	// (0x0004c888) main_cset6_slider_pane_g1_ParamLimits

0x140b,	// (0x0004c888) main_cset6_slider_pane_g1

0xbd3e,	// (0x000571bb) main_cset6_slider_pane_g2_ParamLimits

0xbd3e,	// (0x000571bb) main_cset6_slider_pane_g2

0x0c45,	// (0x0004c0c2) main_cset6_slider_pane_g3_ParamLimits

0x0c45,	// (0x0004c0c2) main_cset6_slider_pane_g3

0xbd66,	// (0x000571e3) main_cset6_slider_pane_g4_ParamLimits

0xbd66,	// (0x000571e3) main_cset6_slider_pane_g4

0xbd72,	// (0x000571ef) main_cset6_slider_pane_g5_ParamLimits

0xbd72,	// (0x000571ef) main_cset6_slider_pane_g5

0x0c45,	// (0x0004c0c2) main_cset6_slider_pane_g7_ParamLimits

0x0c45,	// (0x0004c0c2) main_cset6_slider_pane_g7

0x0c51,	// (0x0004c0ce) main_cset6_slider_pane_g8_ParamLimits

0x0c51,	// (0x0004c0ce) main_cset6_slider_pane_g8

0xbd7e,	// (0x000571fb) main_cset6_slider_pane_g9_ParamLimits

0xbd7e,	// (0x000571fb) main_cset6_slider_pane_g9

0xbd8a,	// (0x00057207) main_cset6_slider_pane_g10_ParamLimits

0xbd8a,	// (0x00057207) main_cset6_slider_pane_g10

0xbd66,	// (0x000571e3) main_cset6_slider_pane_g11_ParamLimits

0xbd66,	// (0x000571e3) main_cset6_slider_pane_g11

0xbd96,	// (0x00057213) main_cset6_slider_pane_g12_ParamLimits

0xbd96,	// (0x00057213) main_cset6_slider_pane_g12

0xbda2,	// (0x0005721f) main_cset6_slider_pane_g13_ParamLimits

0xbda2,	// (0x0005721f) main_cset6_slider_pane_g13

0xbdae,	// (0x0005722b) main_cset6_slider_pane_g14_ParamLimits

0xbdae,	// (0x0005722b) main_cset6_slider_pane_g14

0xbdba,	// (0x00057237) main_cset6_slider_pane_g15_ParamLimits

0xbdba,	// (0x00057237) main_cset6_slider_pane_g15

0xbd72,	// (0x000571ef) main_cset6_slider_pane_g16_ParamLimits

0xbd72,	// (0x000571ef) main_cset6_slider_pane_g16

0xbdd2,	// (0x0005724f) main_cset6_slider_pane_g17_ParamLimits

0xbdd2,	// (0x0005724f) main_cset6_slider_pane_g17

0x0011,

0xfb8e,	// (0x0005b00b) main_cset6_slider_pane_g_ParamLimits

0xfb8e,	// (0x0005b00b) main_cset6_slider_pane_g

0x1433,	// (0x0004c8b0) main_cset6_slider_pane_t1_ParamLimits

0x1433,	// (0x0004c8b0) main_cset6_slider_pane_t1

0xbdde,	// (0x0005725b) main_cset6_slider_pane_t2_ParamLimits

0xbdde,	// (0x0005725b) main_cset6_slider_pane_t2

0x1474,	// (0x0004c8f1) main_cset6_slider_pane_t3_ParamLimits

0x1474,	// (0x0004c8f1) main_cset6_slider_pane_t3

0xbe09,	// (0x00057286) main_cset6_slider_pane_t4_ParamLimits

0xbe09,	// (0x00057286) main_cset6_slider_pane_t4

0x149f,	// (0x0004c91c) main_cset6_slider_pane_t5_ParamLimits

0x149f,	// (0x0004c91c) main_cset6_slider_pane_t5

0x14ca,	// (0x0004c947) main_cset6_slider_pane_t7_ParamLimits

0x14ca,	// (0x0004c947) main_cset6_slider_pane_t7

0xbe34,	// (0x000572b1) main_cset6_slider_pane_t8_ParamLimits

0xbe34,	// (0x000572b1) main_cset6_slider_pane_t8

0xbe58,	// (0x000572d5) main_cset6_slider_pane_t9_ParamLimits

0xbe58,	// (0x000572d5) main_cset6_slider_pane_t9

0xbe7c,	// (0x000572f9) main_cset6_slider_pane_t10_ParamLimits

0xbe7c,	// (0x000572f9) main_cset6_slider_pane_t10

0xbea0,	// (0x0005731d) main_cset6_slider_pane_t11_ParamLimits

0xbea0,	// (0x0005731d) main_cset6_slider_pane_t11

0x1500,	// (0x0004c97d) main_cset6_slider_pane_t14_ParamLimits

0x1500,	// (0x0004c97d) main_cset6_slider_pane_t14

0x1539,	// (0x0004c9b6) main_cset6_slider_pane_t15_ParamLimits

0x1539,	// (0x0004c9b6) main_cset6_slider_pane_t15

0x000b,

0xfbb3,	// (0x0005b030) main_cset6_slider_pane_t_ParamLimits

0xfbb3,	// (0x0005b030) main_cset6_slider_pane_t

0x0d09,	// (0x0004c186) cset_slider_pane_g1_copy1

0x0d12,	// (0x0004c18f) cset_slider_pane_g2_copy1

0x0d1b,	// (0x0004c198) cset_slider_pane_g3_copy1

0x026b,	// (0x0004b6e8) bg_popup_sub_pane_cp011_copy1

0x0d9c,	// (0x0004c219) main_cset_text_pane_g1_copy1

0x0da4,	// (0x0004c221) main_cset_text_pane_t1_copy1

0x0db2,	// (0x0004c22f) main_cset_text_pane_t2_copy1

0x0dc0,	// (0x0004c23d) main_cset_text_pane_t3_copy1

0x0dce,	// (0x0004c24b) main_cset_text_pane_t4_copy1

0x0ddc,	// (0x0004c259) main_cset_text_pane_t5_copy1

0x0dea,	// (0x0004c267) main_cset_text_pane_t6_copy1

0x0df8,	// (0x0004c275) main_cset_text_pane_t7_copy1

0xbee1,	// (0x0005735e) main_cset_text2_pane_t1_copy1

0x891b,	// (0x00053d98) main_ncimui_pane

0x8974,	// (0x00053df1) popup_query_ncimui_window_ParamLimits

0x8974,	// (0x00053df1) popup_query_ncimui_window

0x0783,	// (0x0004bc00) field_cale_ev2_pane_g4_ParamLimits

0x0783,	// (0x0004bc00) field_cale_ev2_pane_g4

0xa098,	// (0x00055515) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa098,	// (0x00055515) cell_video_dialer_keypad_pane_g2

0x0001,

0xf88d,	// (0x0005ad0a) cell_video_dialer_keypad_pane_g_ParamLimits

0xf88d,	// (0x0005ad0a) cell_video_dialer_keypad_pane_g

0xa0b0,	// (0x0005552d) cell_video_dialer_keypad_pane_t1

0x026b,	// (0x0004b6e8) bg_popup_window_pane_cp012

0x3a29,	// (0x0004eea6) heading_pane_cp06

0x1650,	// (0x0004cacd) ncim_query_content_pane

0x026b,	// (0x0004b6e8) bg_popup_heading_pane_cp01

0x1658,	// (0x0004cad5) ncim_heading_pane_t1

0x1666,	// (0x0004cae3) ncim_indicator_popup_pane

0x1678,	// (0x0004caf5) ncim_query_button_pane

0x168c,	// (0x0004cb09) ncim_query_content_pane_t1

0x169e,	// (0x0004cb1b) ncim_query_content_pane_t2

0x0005,

0xfbf7,	// (0x0005b074) ncim_query_content_pane_t

0x16d8,	// (0x0004cb55) ncim_query_list_pane

0x16ea,	// (0x0004cb67) ncim_query_popup_pane

0x1666,	// (0x0004cae3) ncim_indicator_popup_pane_ParamLimits

0xc022,	// (0x0005749f) ncim_query_content_pane_g1_ParamLimits

0xc022,	// (0x0005749f) ncim_query_content_pane_g1

0x168c,	// (0x0004cb09) ncim_query_content_pane_t1_ParamLimits

0x169e,	// (0x0004cb1b) ncim_query_content_pane_t2_ParamLimits

0xc02e,	// (0x000574ab) ncim_query_content_pane_t3_ParamLimits

0xc02e,	// (0x000574ab) ncim_query_content_pane_t3

0xc04b,	// (0x000574c8) ncim_query_content_pane_t4_ParamLimits

0xc04b,	// (0x000574c8) ncim_query_content_pane_t4

0xc068,	// (0x000574e5) ncim_query_content_pane_t5_ParamLimits

0xc068,	// (0x000574e5) ncim_query_content_pane_t5

0x16b0,	// (0x0004cb2d) ncim_query_content_pane_t6_ParamLimits

0x16b0,	// (0x0004cb2d) ncim_query_content_pane_t6

0xfbf7,	// (0x0005b074) ncim_query_content_pane_t_ParamLimits

0x16d8,	// (0x0004cb55) ncim_query_list_pane_ParamLimits

0x16ea,	// (0x0004cb67) ncim_query_popup_pane_ParamLimits

0x16fe,	// (0x0004cb7b) wait_bar_pane_cp04

0x026b,	// (0x0004b6e8) input_focus_pane_cp011

0x1706,	// (0x0004cb83) ncim_query_popup_pane_t1

0x1714,	// (0x0004cb91) ncim_list_query_list_pane_ParamLimits

0x1714,	// (0x0004cb91) ncim_list_query_list_pane

0x026b,	// (0x0004b6e8) bg_button_pane_cp027

0x1727,	// (0x0004cba4) ncim_query_button_pane_g1

0x026b,	// (0x0004b6e8) list_highlight_pane_cp012

0x1731,	// (0x0004cbae) ncim_list_query_list_pane_g1

0x1739,	// (0x0004cbb6) ncim_list_query_list_pane_t1

0xa755,	// (0x00055bd2) cam4_indicators_pane_g3_ParamLimits

0xa755,	// (0x00055bd2) cam4_indicators_pane_g3

0xa806,	// (0x00055c83) vid4_indicators_pane_g5_ParamLimits

0xa806,	// (0x00055c83) vid4_indicators_pane_g5

0xb7a4,	// (0x00056c21) vid4_progress_pane_g5_ParamLimits

0xb7a4,	// (0x00056c21) vid4_progress_pane_g5

0xbf12,	// (0x0005738f) main_ncimui_pane_g1

0xbf78,	// (0x000573f5) ncimui_group_query_pane_ParamLimits

0xbf78,	// (0x000573f5) ncimui_group_query_pane

0xbfc0,	// (0x0005743d) ncimui_list_pane_ParamLimits

0xbfc0,	// (0x0005743d) ncimui_list_pane

0xbfe5,	// (0x00057462) ncimui_text_pane_ParamLimits

0xbfe5,	// (0x00057462) ncimui_text_pane

0xc085,	// (0x00057502) ncimui_text_pane_t1_ParamLimits

0xc085,	// (0x00057502) ncimui_text_pane_t1

0x1750,	// (0x0004cbcd) ncimui_list_single_graphic_pane_ParamLimits

0x1750,	// (0x0004cbcd) ncimui_list_single_graphic_pane

0xc0a3,	// (0x00057520) ncimui_query_pane_ParamLimits

0xc0a3,	// (0x00057520) ncimui_query_pane

0x026b,	// (0x0004b6e8) list_highlight_pane_cp013

0x1760,	// (0x0004cbdd) ncim_list_query_list_pane_t1_copy1

0x176e,	// (0x0004cbeb) ncim_list_single_graphic_pane_g1

0x1776,	// (0x0004cbf3) ncim_query_button_pane_cp01

0x1782,	// (0x0004cbff) ncim_query_entry_pane_ParamLimits

0x1782,	// (0x0004cbff) ncim_query_entry_pane

0x1795,	// (0x0004cc12) ncimui_query_pane_g1

0x17a1,	// (0x0004cc1e) ncimui_query_pane_t1_ParamLimits

0x17a1,	// (0x0004cc1e) ncimui_query_pane_t1

0x498f,	// (0x0004fe0c) input_focus_pane_cp012

0x17ba,	// (0x0004cc37) ncim_query_entry_pane_t1

0x3142,	// (0x0004e5bf) main_im_pane_ParamLimits

0x891b,	// (0x00053d98) main_mobtv_pane_ParamLimits

0x891b,	// (0x00053d98) main_mobtv_pane

0xbd7e,	// (0x000571fb) main_cset6_slider_pane_g18_ParamLimits

0xbd7e,	// (0x000571fb) main_cset6_slider_pane_g18

0xbda2,	// (0x0005721f) main_cset6_slider_pane_g19_ParamLimits

0xbda2,	// (0x0005721f) main_cset6_slider_pane_g19

0xf007,	// (0x0005a484) bg_main_mobtv_pane_ParamLimits

0xf007,	// (0x0005a484) bg_main_mobtv_pane

0xc0b3,	// (0x00057530) main_mobtv_info_pane

0xc0bc,	// (0x00057539) main_mobtv_loading_pane_ParamLimits

0xc0bc,	// (0x00057539) main_mobtv_loading_pane

0x17da,	// (0x0004cc57) main_mobtv_pg_channel_list_pane

0x17e4,	// (0x0004cc61) main_mobtv_pg_hdr_pane

0xc0c9,	// (0x00057546) main_mobtv_programe_curr_pane_ParamLimits

0xc0c9,	// (0x00057546) main_mobtv_programe_curr_pane

0xc0d6,	// (0x00057553) main_mobtv_programe_next_pane_ParamLimits

0xc0d6,	// (0x00057553) main_mobtv_programe_next_pane

0x17ed,	// (0x0004cc6a) popup_mobtv_noti_window

0xe672,	// (0x00059aef) main_tv_pg_hdr_pane_g1

0x17f5,	// (0x0004cc72) main_tv_pg_hdr_pane_g2

0x17fd,	// (0x0004cc7a) main_tv_pg_hdr_pane_g3

0x1805,	// (0x0004cc82) main_tv_pg_hdr_pane_g4

0x180d,	// (0x0004cc8a) main_tv_pg_hdr_pane_g5

0x1815,	// (0x0004cc92) main_tv_pg_hdr_pane_g6

0x181d,	// (0x0004cc9a) main_tv_pg_hdr_pane_g7

0x1825,	// (0x0004cca2) main_tv_pg_hdr_pane_g8

0x182d,	// (0x0004ccaa) main_tv_pg_hdr_pane_g9

0x1835,	// (0x0004ccb2) main_tv_pg_hdr_pane_g10

0x183f,	// (0x0004ccbc) main_tv_pg_hdr_pane_g11

0x000a,

0xfc04,	// (0x0005b081) main_tv_pg_hdr_pane_g

0x1849,	// (0x0004ccc6) main_tv_pg_hdr_pane_t1

0x1857,	// (0x0004ccd4) main_tv_pg_hdr_pane_t2

0x1865,	// (0x0004cce2) main_tv_pg_hdr_pane_t3

0x1873,	// (0x0004ccf0) main_tv_pg_hdr_pane_t4

0x1881,	// (0x0004ccfe) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1b,	// (0x0005b098) main_tv_pg_hdr_pane_t

0x188f,	// (0x0004cd0c) single_mobtv_pg_channel_pane_ParamLimits

0x188f,	// (0x0004cd0c) single_mobtv_pg_channel_pane

0x18a1,	// (0x0004cd1e) single_mobtv_pg_channel_table_pane

0x18aa,	// (0x0004cd27) single_mobtv_pg_channel_thumb_pane

0x18b3,	// (0x0004cd30) single_tv_pg_channel_pane_g1

0x18bc,	// (0x0004cd39) single_tv_pg_channel_pane_g2

0x0001,

0xfc26,	// (0x0005b0a3) single_tv_pg_channel_pane_g

0xe8a1,	// (0x00059d1e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe8a1,	// (0x00059d1e) bg_single_mobtv_pg_channel_thumb_pane

0x18c5,	// (0x0004cd42) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x18c5,	// (0x0004cd42) single_mobtv_pg_channel_thumb_pane_g1

0x18d3,	// (0x0004cd50) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x18d3,	// (0x0004cd50) single_mobtv_pg_channel_thumb_pane_g2

0x18df,	// (0x0004cd5c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x18df,	// (0x0004cd5c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2b,	// (0x0005b0a8) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2b,	// (0x0005b0a8) single_mobtv_pg_channel_thumb_pane_g

0x18eb,	// (0x0004cd68) single_mobtv_pg_channel_thumb_pane_t1

0x18f9,	// (0x0004cd76) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc32,	// (0x0005b0af) single_mobtv_pg_channel_thumb_pane_t

0xe672,	// (0x00059aef) bg_single_mobtv_pg_channel_table_pane_g1

0xe672,	// (0x00059aef) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d4,	// (0x0005ab51) bg_single_mobtv_pg_channel_table_pane_g

0x1907,	// (0x0004cd84) single_mobtv_pg_channel_table_pane_t1

0x1915,	// (0x0004cd92) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc37,	// (0x0005b0b4) single_mobtv_pg_channel_table_pane_t

0xc0eb,	// (0x00057568) main_mobtv_info_pane_g1_ParamLimits

0xc0eb,	// (0x00057568) main_mobtv_info_pane_g1

0xc107,	// (0x00057584) main_mobtv_info_pane_t1_ParamLimits

0xc107,	// (0x00057584) main_mobtv_info_pane_t1

0xc16d,	// (0x000575ea) main_mobtv_info_pane_t2_ParamLimits

0xc16d,	// (0x000575ea) main_mobtv_info_pane_t2

0x0002,

0xfc41,	// (0x0005b0be) main_mobtv_info_pane_t_ParamLimits

0xfc41,	// (0x0005b0be) main_mobtv_info_pane_t

0xc1f0,	// (0x0005766d) wait_bar_pane_cp05

0xc200,	// (0x0005767d) main_mobtv_loading_pane_g1_ParamLimits

0xc200,	// (0x0005767d) main_mobtv_loading_pane_g1

0xc20c,	// (0x00057689) main_mobtv_loading_pane_g2_ParamLimits

0xc20c,	// (0x00057689) main_mobtv_loading_pane_g2

0xc218,	// (0x00057695) main_mobtv_loading_pane_g3_ParamLimits

0xc218,	// (0x00057695) main_mobtv_loading_pane_g3

0x0002,

0xfc48,	// (0x0005b0c5) main_mobtv_loading_pane_g_ParamLimits

0xfc48,	// (0x0005b0c5) main_mobtv_loading_pane_g

0x1923,	// (0x0004cda0) main_mobtv_loading_pane_t1_ParamLimits

0x1923,	// (0x0004cda0) main_mobtv_loading_pane_t1

0x193b,	// (0x0004cdb8) main_mobtv_loading_pane_t2_ParamLimits

0x193b,	// (0x0004cdb8) main_mobtv_loading_pane_t2

0x0001,

0xfc4f,	// (0x0005b0cc) main_mobtv_loading_pane_t_ParamLimits

0xfc4f,	// (0x0005b0cc) main_mobtv_loading_pane_t

0xc224,	// (0x000576a1) wait_bar_pane_cp06_ParamLimits

0xc224,	// (0x000576a1) wait_bar_pane_cp06

0x195f,	// (0x0004cddc) main_mobtv_programe_curr_pane_t1

0x196d,	// (0x0004cdea) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc54,	// (0x0005b0d1) main_mobtv_programe_curr_pane_t

0x197b,	// (0x0004cdf8) main_mobtv_programe_next_pane_t1

0x1989,	// (0x0004ce06) main_mobtv_programe_next_pane_t2

0x1997,	// (0x0004ce14) main_mobtv_programe_next_pane_t3

0x0002,

0xfc59,	// (0x0005b0d6) main_mobtv_programe_next_pane_t

0x026b,	// (0x0004b6e8) bg_popup_mobtv_noti_window_pane

0x19a5,	// (0x0004ce22) popup_mobtv_noti_window_g1

0x19ad,	// (0x0004ce2a) popup_mobtv_noti_window_t1

0x19bb,	// (0x0004ce38) popup_mobtv_noti_window_t2

0x0001,

0xfc60,	// (0x0005b0dd) popup_mobtv_noti_window_t

0xe672,	// (0x00059aef) bg_popup_mobtv_noti_window_pane_g1

0x5c91,	// (0x0005110e) sc_clock_pane

0x5c91,	// (0x0005110e) main_fs_bigclock_pane

0xb9bb,	// (0x00056e38) blid2_tripm_pane_t4_ParamLimits

0xb9bb,	// (0x00056e38) blid2_tripm_pane_t4

0xc230,	// (0x000576ad) sc_clock_pane_g1_ParamLimits

0xc230,	// (0x000576ad) sc_clock_pane_g1

0xc23e,	// (0x000576bb) sc_clock_pane_t1_ParamLimits

0xc23e,	// (0x000576bb) sc_clock_pane_t1

0xc251,	// (0x000576ce) sc_clock_pane_t2_ParamLimits

0xc251,	// (0x000576ce) sc_clock_pane_t2

0xc263,	// (0x000576e0) sc_clock_pane_t3_ParamLimits

0xc263,	// (0x000576e0) sc_clock_pane_t3

0x0004,

0xfc65,	// (0x0005b0e2) sc_clock_pane_t_ParamLimits

0xfc65,	// (0x0005b0e2) sc_clock_pane_t

0xd163,	// (0x000585e0) main_fs_bigclock_indicator_pane_ParamLimits

0xd163,	// (0x000585e0) main_fs_bigclock_indicator_pane

0xc2de,	// (0x0005775b) main_fs_bigclock_pane_g1_ParamLimits

0xc2de,	// (0x0005775b) main_fs_bigclock_pane_g1

0xd16f,	// (0x000585ec) main_fs_bigclock_pane_t1_ParamLimits

0xd16f,	// (0x000585ec) main_fs_bigclock_pane_t1

0xd181,	// (0x000585fe) main_fs_bigclock_pane_t2_ParamLimits

0xd181,	// (0x000585fe) main_fs_bigclock_pane_t2

0xd193,	// (0x00058610) main_fs_bigclock_pane_t3_ParamLimits

0xd193,	// (0x00058610) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0005b2f0) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0005b2f0) main_fs_bigclock_pane_t

0x248c,	// (0x0004d909) main_fs_bigclock_indicator_pane_g1

0x1680,	// (0x0004cafd) ncim_query_content_pane_g2_ParamLimits

0x1680,	// (0x0004cafd) ncim_query_content_pane_g2

0x0001,

0xfbf2,	// (0x0005b06f) ncim_query_content_pane_g_ParamLimits

0xfbf2,	// (0x0005b06f) ncim_query_content_pane_g

0xc275,	// (0x000576f2) sc_clock_pane_t4_ParamLimits

0xc275,	// (0x000576f2) sc_clock_pane_t4

0x891b,	// (0x00053d98) main_radioblah_pane

0xa5f4,	// (0x00055a71) cell_call4_button_pane_t1_copy1_ParamLimits

0xa5f4,	// (0x00055a71) cell_call4_button_pane_t1_copy1

0xbf2a,	// (0x000573a7) main_ncimui_pane_t1_ParamLimits

0xbf2a,	// (0x000573a7) main_ncimui_pane_t1

0xbf44,	// (0x000573c1) main_ncimui_pane_t2_ParamLimits

0xbf44,	// (0x000573c1) main_ncimui_pane_t2

0x0002,

0xfbeb,	// (0x0005b068) main_ncimui_pane_t_ParamLimits

0xfbeb,	// (0x0005b068) main_ncimui_pane_t

0x1afc,	// (0x0004cf79) main_radioblah_anim_pane_ParamLimits

0x1afc,	// (0x0004cf79) main_radioblah_anim_pane

0x1b0d,	// (0x0004cf8a) main_radioblah_info_pane_ParamLimits

0x1b0d,	// (0x0004cf8a) main_radioblah_info_pane

0x1b21,	// (0x0004cf9e) main_radioblah_pane_t1_ParamLimits

0x1b21,	// (0x0004cf9e) main_radioblah_pane_t1

0x1b3d,	// (0x0004cfba) main_radioblah_pane_t2_ParamLimits

0x1b3d,	// (0x0004cfba) main_radioblah_pane_t2

0x0003,

0xfc86,	// (0x0005b103) main_radioblah_pane_t_ParamLimits

0xfc86,	// (0x0005b103) main_radioblah_pane_t

0xc326,	// (0x000577a3) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc326,	// (0x000577a3) main_radioblah_rocker_ctrl_pane

0x1b85,	// (0x0004d002) main_radioblah_info_pane_t1_ParamLimits

0x1b85,	// (0x0004d002) main_radioblah_info_pane_t1

0xc36b,	// (0x000577e8) main_radioblah_info_pane_t2_ParamLimits

0xc36b,	// (0x000577e8) main_radioblah_info_pane_t2

0x0003,

0xfc8f,	// (0x0005b10c) main_radioblah_info_pane_t_ParamLimits

0xfc8f,	// (0x0005b10c) main_radioblah_info_pane_t

0xe672,	// (0x00059aef) main_radioblah_rocker_ctrl_pane_g1

0xc413,	// (0x00057890) main_radioblah_rocker_ctrl_pane_g2

0xc41b,	// (0x00057898) main_radioblah_rocker_ctrl_pane_g3

0xc423,	// (0x000578a0) main_radioblah_rocker_ctrl_pane_g4

0xc42b,	// (0x000578a8) main_radioblah_rocker_ctrl_pane_g5

0xc433,	// (0x000578b0) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc98,	// (0x0005b115) main_radioblah_rocker_ctrl_pane_g

0xbee1,	// (0x0005735e) main_cset_text2_pane_t1_copy1_ParamLimits

0xa677,	// (0x00055af4) cam4_image_uncrop_qvga_pane

0xa799,	// (0x00055c16) vid4_image_uncrop_qcif_pane

0xbb39,	// (0x00056fb6) cam6_image_uncrop_qvga_pane_ParamLimits

0xbb39,	// (0x00056fb6) cam6_image_uncrop_qvga_pane

0x12bd,	// (0x0004c73a) vid6_image_uncrop_qcif_pane_ParamLimits

0x12bd,	// (0x0004c73a) vid6_image_uncrop_qcif_pane

0x026b,	// (0x0004b6e8) bg_popup_preview_window_pane_cp03

0x1626,	// (0x0004caa3) list_cset_text2_pane

0x162e,	// (0x0004caab) main_cset6_text2_pane_g1

0x1636,	// (0x0004cab3) main_cset6_text2_pane_t1

0x282c,	// (0x0004dca9) list_cset_text2_pane_t1_ParamLimits

0x282c,	// (0x0004dca9) list_cset_text2_pane_t1

0x891b,	// (0x00053d98) main_radioblah_pane_ParamLimits

0xc1de,	// (0x0005765b) main_mobtv_info_pane_t3_ParamLimits

0xc1de,	// (0x0005765b) main_mobtv_info_pane_t3

0xc314,	// (0x00057791) main_radioblah_pane_g1

0xc33f,	// (0x000577bc) main_radioblah_info_pane_g1

0xc3ba,	// (0x00057837) main_radioblah_info_pane_t3_ParamLimits

0xc3ba,	// (0x00057837) main_radioblah_info_pane_t3

0x7895,	// (0x00052d12) highlight_cell_cale_month_pane_ParamLimits

0x7895,	// (0x00052d12) highlight_cell_cale_month_pane

0x5c91,	// (0x0005110e) main_phob_fisheye_pane

0xe97d,	// (0x00059dfa) scroll_pane_cp0031_ParamLimits

0xe97d,	// (0x00059dfa) scroll_pane_cp0031

0x13c7,	// (0x0004c844) wait_bar_pane_cp08_ParamLimits

0xbd03,	// (0x00057180) cset_list_set_pane_copy1_ParamLimits

0x1bbf,	// (0x0004d03c) highlight_cell_cale_month_pane_g1

0xc43b,	// (0x000578b8) highlight_cell_cale_month_pane_t1

0x1bc7,	// (0x0004d044) list_gen_pane_cp01

0x0c30,	// (0x0004c0ad) scroll_pane_01

0x4ab3,	// (0x0004ff30) list_single_double_fisheye_pane

0x1bd0,	// (0x0004d04d) list_double_fisheye_pane_g1_ParamLimits

0x1bd0,	// (0x0004d04d) list_double_fisheye_pane_g1

0x1bdc,	// (0x0004d059) list_double_fisheye_pane_g2_ParamLimits

0x1bdc,	// (0x0004d059) list_double_fisheye_pane_g2

0x4abc,	// (0x0004ff39) list_double_fisheye_pane_g3_ParamLimits

0x4abc,	// (0x0004ff39) list_double_fisheye_pane_g3

0x0004,

0xfca5,	// (0x0005b122) list_double_fisheye_pane_g_ParamLimits

0xfca5,	// (0x0005b122) list_double_fisheye_pane_g

0x1c0d,	// (0x0004d08a) list_double_fisheye_pane_t1_ParamLimits

0x1c0d,	// (0x0004d08a) list_double_fisheye_pane_t1

0x1c28,	// (0x0004d0a5) list_double_fisheye_pane_t2_ParamLimits

0x1c28,	// (0x0004d0a5) list_double_fisheye_pane_t2

0x0001,

0xfcb0,	// (0x0005b12d) list_double_fisheye_pane_t_ParamLimits

0xfcb0,	// (0x0005b12d) list_double_fisheye_pane_t

0x5c91,	// (0x0005110e) main_call5_pane

0xc29b,	// (0x00057718) sc_swipe_pane_ParamLimits

0xc29b,	// (0x00057718) sc_swipe_pane

0xc455,	// (0x000578d2) call5_image_pane_ParamLimits

0xc455,	// (0x000578d2) call5_image_pane

0xc461,	// (0x000578de) call5_swipe_1_pane_ParamLimits

0xc461,	// (0x000578de) call5_swipe_1_pane

0xc46d,	// (0x000578ea) call5_swipe_2_pane_ParamLimits

0xc46d,	// (0x000578ea) call5_swipe_2_pane

0xc485,	// (0x00057902) popup_call5_audio_first_window_ParamLimits

0xc485,	// (0x00057902) popup_call5_audio_first_window

0xe8a1,	// (0x00059d1e) call5_swipe_1_pane_g1_ParamLimits

0xe8a1,	// (0x00059d1e) call5_swipe_1_pane_g1

0x1c4a,	// (0x0004d0c7) call5_swipe_1_pane_g2_ParamLimits

0x1c4a,	// (0x0004d0c7) call5_swipe_1_pane_g2

0x0001,

0xfcb5,	// (0x0005b132) call5_swipe_1_pane_g_ParamLimits

0xfcb5,	// (0x0005b132) call5_swipe_1_pane_g

0x1c56,	// (0x0004d0d3) call5_swipe_1_pane_t1_ParamLimits

0x1c56,	// (0x0004d0d3) call5_swipe_1_pane_t1

0xe8a1,	// (0x00059d1e) call5_swipe_2_pane_g1_ParamLimits

0xe8a1,	// (0x00059d1e) call5_swipe_2_pane_g1

0x1c6b,	// (0x0004d0e8) call5_swipe_2_pane_g2_ParamLimits

0x1c6b,	// (0x0004d0e8) call5_swipe_2_pane_g2

0x0001,

0xfcba,	// (0x0005b137) call5_swipe_2_pane_g_ParamLimits

0xfcba,	// (0x0005b137) call5_swipe_2_pane_g

0x1c77,	// (0x0004d0f4) call5_swipe_2_pane_t1_ParamLimits

0x1c77,	// (0x0004d0f4) call5_swipe_2_pane_t1

0x1c8c,	// (0x0004d109) sc_swipe_pane_g1_ParamLimits

0x1c8c,	// (0x0004d109) sc_swipe_pane_g1

0x1c99,	// (0x0004d116) sc_swipe_pane_g2_ParamLimits

0x1c99,	// (0x0004d116) sc_swipe_pane_g2

0x0001,

0xfcbf,	// (0x0005b13c) sc_swipe_pane_g_ParamLimits

0xfcbf,	// (0x0005b13c) sc_swipe_pane_g

0x1ca5,	// (0x0004d122) sc_swipe_pane_t1_ParamLimits

0x1ca5,	// (0x0004d122) sc_swipe_pane_t1

0x5c91,	// (0x0005110e) main_cmail_launcher_pane

0xc491,	// (0x0005790e) aid_size_cell_cmail_l_ParamLimits

0xc491,	// (0x0005790e) aid_size_cell_cmail_l

0xc4a1,	// (0x0005791e) grid_cmail_l_pane_ParamLimits

0xc4a1,	// (0x0005791e) grid_cmail_l_pane

0xc4ad,	// (0x0005792a) cell_cmail_l_pane_ParamLimits

0xc4ad,	// (0x0005792a) cell_cmail_l_pane

0xc4bf,	// (0x0005793c) cell_cmail_l_pane_g1_ParamLimits

0xc4bf,	// (0x0005793c) cell_cmail_l_pane_g1

0xc4cf,	// (0x0005794c) cell_cmail_l_pane_t1_ParamLimits

0xc4cf,	// (0x0005794c) cell_cmail_l_pane_t1

0xc4e5,	// (0x00057962) cell_cmail_l_pane_t2_ParamLimits

0xc4e5,	// (0x00057962) cell_cmail_l_pane_t2

0x0001,

0xfcc4,	// (0x0005b141) cell_cmail_l_pane_t_ParamLimits

0xfcc4,	// (0x0005b141) cell_cmail_l_pane_t

0x498f,	// (0x0004fe0c) grid_highlight_pane_cp018_ParamLimits

0x498f,	// (0x0004fe0c) grid_highlight_pane_cp018

0x5b2b,	// (0x00050fa8) main2_pane_ParamLimits

0x5b2b,	// (0x00050fa8) main2_pane

0x31ed,	// (0x0004e66a) popup_sp_fs_action_menu_bg_pane_g1

0x31f5,	// (0x0004e672) popup_sp_fs_action_menu_bg_pane_g2

0x31fd,	// (0x0004e67a) popup_sp_fs_action_menu_bg_pane_g3

0x3205,	// (0x0004e682) popup_sp_fs_action_menu_bg_pane_g4

0x320d,	// (0x0004e68a) popup_sp_fs_action_menu_bg_pane_g5

0x3215,	// (0x0004e692) popup_sp_fs_action_menu_bg_pane_g6

0x321d,	// (0x0004e69a) popup_sp_fs_action_menu_bg_pane_g7

0x3225,	// (0x0004e6a2) popup_sp_fs_action_menu_bg_pane_g8

0x322d,	// (0x0004e6aa) popup_sp_fs_action_menu_bg_pane_g9

0x3235,	// (0x0004e6b2) popup_sp_fs_action_menu_bg_pane_g10

0x3235,	// (0x0004e6b2) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0005a5ec) popup_sp_fs_action_menu_bg_pane_g

0x03b2,	// (0x0004b82f) list_medium_line_x2_t3_g3_g1_ParamLimits

0x03b2,	// (0x0004b82f) list_medium_line_x2_t3_g3_g1

0x03be,	// (0x0004b83b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x03be,	// (0x0004b83b) list_medium_line_x2_t3_g3_g2

0x03ca,	// (0x0004b847) list_medium_line_x2_t3_g3_g3_ParamLimits

0x03ca,	// (0x0004b847) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0005a69a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0005a69a) list_medium_line_x2_t3_g3_g

0x03d6,	// (0x0004b853) list_medium_line_x2_t3_g3_t1_ParamLimits

0x03d6,	// (0x0004b853) list_medium_line_x2_t3_g3_t1

0x69f8,	// (0x00051e75) list_medium_line_x2_t3_g3_t2_ParamLimits

0x69f8,	// (0x00051e75) list_medium_line_x2_t3_g3_t2

0x03eb,	// (0x0004b868) list_medium_line_x2_t3_g3_t3_ParamLimits

0x03eb,	// (0x0004b868) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0005a6a1) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0005a6a1) list_medium_line_x2_t3_g3_t

0x03b2,	// (0x0004b82f) list_medium_line_x2_t3_g2_g1_ParamLimits

0x03b2,	// (0x0004b82f) list_medium_line_x2_t3_g2_g1

0x03ca,	// (0x0004b847) list_medium_line_x2_t3_g2_g2_ParamLimits

0x03ca,	// (0x0004b847) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0005a6a8) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0005a6a8) list_medium_line_x2_t3_g2_g

0x0400,	// (0x0004b87d) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0400,	// (0x0004b87d) list_medium_line_x2_t3_g2_t1

0x0416,	// (0x0004b893) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0416,	// (0x0004b893) list_medium_line_x2_t3_g2_t2

0x03eb,	// (0x0004b868) list_medium_line_x2_t3_g2_t3_ParamLimits

0x03eb,	// (0x0004b868) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0005a6ad) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0005a6ad) list_medium_line_x2_t3_g2_t

0x03b2,	// (0x0004b82f) list_medium_line_x2_t4_g4_g1_ParamLimits

0x03b2,	// (0x0004b82f) list_medium_line_x2_t4_g4_g1

0x0428,	// (0x0004b8a5) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0428,	// (0x0004b8a5) list_medium_line_x2_t4_g4_g2

0x03be,	// (0x0004b83b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x03be,	// (0x0004b83b) list_medium_line_x2_t4_g4_g3

0x0434,	// (0x0004b8b1) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0434,	// (0x0004b8b1) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0005a6b4) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0005a6b4) list_medium_line_x2_t4_g4_g

0x6a0a,	// (0x00051e87) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6a0a,	// (0x00051e87) list_medium_line_x2_t4_g4_t1

0x6a21,	// (0x00051e9e) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6a21,	// (0x00051e9e) list_medium_line_x2_t4_g4_t2

0x6a36,	// (0x00051eb3) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6a36,	// (0x00051eb3) list_medium_line_x2_t4_g4_t3

0x0440,	// (0x0004b8bd) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0440,	// (0x0004b8bd) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0005a6bd) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0005a6bd) list_medium_line_x2_t4_g4_t

0x03b2,	// (0x0004b82f) list_medium_line_x2_t2_g4_g1_ParamLimits

0x03b2,	// (0x0004b82f) list_medium_line_x2_t2_g4_g1

0x0428,	// (0x0004b8a5) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0428,	// (0x0004b8a5) list_medium_line_x2_t2_g4_g2

0x03be,	// (0x0004b83b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x03be,	// (0x0004b83b) list_medium_line_x2_t2_g4_g3

0x03ca,	// (0x0004b847) list_medium_line_x2_t2_g4_g4_ParamLimits

0x03ca,	// (0x0004b847) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0005a724) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0005a724) list_medium_line_x2_t2_g4_g

0x0452,	// (0x0004b8cf) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0452,	// (0x0004b8cf) list_medium_line_x2_t2_g4_t1

0x03eb,	// (0x0004b868) list_medium_line_x2_t2_g4_t2_ParamLimits

0x03eb,	// (0x0004b868) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0005a72d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0005a72d) list_medium_line_x2_t2_g4_t

0x03b2,	// (0x0004b82f) list_medium_line_x2_t2_g3_g1_ParamLimits

0x03b2,	// (0x0004b82f) list_medium_line_x2_t2_g3_g1

0x03be,	// (0x0004b83b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x03be,	// (0x0004b83b) list_medium_line_x2_t2_g3_g2

0x03ca,	// (0x0004b847) list_medium_line_x2_t2_g3_g3_ParamLimits

0x03ca,	// (0x0004b847) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0005a69a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0005a69a) list_medium_line_x2_t2_g3_g

0x0467,	// (0x0004b8e4) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0467,	// (0x0004b8e4) list_medium_line_x2_t2_g3_t1

0x03eb,	// (0x0004b868) list_medium_line_x2_t2_g3_t2_ParamLimits

0x03eb,	// (0x0004b868) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0005a732) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0005a732) list_medium_line_x2_t2_g3_t

0x7a27,	// (0x00052ea4) main_sp_fs_list_pane_ParamLimits

0x7a27,	// (0x00052ea4) main_sp_fs_list_pane

0x7a34,	// (0x00052eb1) sp_fs_scroll_pane_ParamLimits

0x7a34,	// (0x00052eb1) sp_fs_scroll_pane

0x7a41,	// (0x00052ebe) list_medium_line_x2_t3_t1

0x7a51,	// (0x00052ece) list_medium_line_x2_t3_t2

0x04aa,	// (0x0004b927) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0005a77d) list_medium_line_x2_t3_t

0x7a5f,	// (0x00052edc) list_medium_line_x3_t4_t1

0x7a6f,	// (0x00052eec) list_medium_line_x3_t4_t2

0x04b8,	// (0x0004b935) list_medium_line_x3_t4_t3

0x04c6,	// (0x0004b943) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0005a784) list_medium_line_x3_t4_t

0x7a7d,	// (0x00052efa) list_medium_line_x4_t5_t1

0x7a8d,	// (0x00052f0a) list_medium_line_x4_t5_t2

0x04b8,	// (0x0004b935) list_medium_line_x4_t5_t3

0x04d4,	// (0x0004b951) list_medium_line_x4_t5_t4

0x04c6,	// (0x0004b943) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0005a78d) list_medium_line_x4_t5_t

0x03b2,	// (0x0004b82f) list_medium_line_t4_g4_g1_ParamLimits

0x03b2,	// (0x0004b82f) list_medium_line_t4_g4_g1

0x0434,	// (0x0004b8b1) list_medium_line_t4_g4_g2_ParamLimits

0x0434,	// (0x0004b8b1) list_medium_line_t4_g4_g2

0x04e2,	// (0x0004b95f) list_medium_line_t4_g4_g3_ParamLimits

0x04e2,	// (0x0004b95f) list_medium_line_t4_g4_g3

0x03ca,	// (0x0004b847) list_medium_line_t4_g4_g4_ParamLimits

0x03ca,	// (0x0004b847) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0005a798) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0005a798) list_medium_line_t4_g4_g

0x04ee,	// (0x0004b96b) list_medium_line_t4_g4_t1_ParamLimits

0x04ee,	// (0x0004b96b) list_medium_line_t4_g4_t1

0x0503,	// (0x0004b980) list_medium_line_t4_g4_t2_ParamLimits

0x0503,	// (0x0004b980) list_medium_line_t4_g4_t2

0x0519,	// (0x0004b996) list_medium_line_t4_g4_t3_ParamLimits

0x0519,	// (0x0004b996) list_medium_line_t4_g4_t3

0x052f,	// (0x0004b9ac) list_medium_line_t4_g4_t4_ParamLimits

0x052f,	// (0x0004b9ac) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0005a7a1) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0005a7a1) list_medium_line_t4_g4_t

0x7ba9,	// (0x00053026) chi_dic_find_pane_g1

0x8937,	// (0x00053db4) main_tport_pane

0xb0b7,	// (0x00056534) list_medium_line_plain_t1

0xb195,	// (0x00056612) list_medium_line_t2_g2_g1_ParamLimits

0xb195,	// (0x00056612) list_medium_line_t2_g2_g1

0xb1a1,	// (0x0005661e) list_medium_line_t2_g2_g2_ParamLimits

0xb1a1,	// (0x0005661e) list_medium_line_t2_g2_g2

0x0001,

0xf9fc,	// (0x0005ae79) list_medium_line_t2_g2_g_ParamLimits

0xf9fc,	// (0x0005ae79) list_medium_line_t2_g2_g

0xb1ad,	// (0x0005662a) list_medium_line_t2_g2_t1_ParamLimits

0xb1ad,	// (0x0005662a) list_medium_line_t2_g2_t1

0xb1c7,	// (0x00056644) list_medium_line_t2_g2_t2_ParamLimits

0xb1c7,	// (0x00056644) list_medium_line_t2_g2_t2

0x0001,

0xfa01,	// (0x0005ae7e) list_medium_line_t2_g2_t_ParamLimits

0xfa01,	// (0x0005ae7e) list_medium_line_t2_g2_t

0x106c,	// (0x0004c4e9) aid_sp_fs_list_icon_a_sm

0x1074,	// (0x0004c4f1) aid_sp_fs_list_icon_d

0x107c,	// (0x0004c4f9) aid_sp_fs_text_primary

0x1085,	// (0x0004c502) aid_sp_fs_text_secondary

0x10c9,	// (0x0004c546) list_medium_line

0x10c9,	// (0x0004c546) list_medium_line_g2

0x10c9,	// (0x0004c546) list_medium_line_g3

0x10c9,	// (0x0004c546) list_medium_line_plain

0x10c9,	// (0x0004c546) list_medium_line_plain_t2

0x10c9,	// (0x0004c546) list_medium_line_plain_t3

0x10c9,	// (0x0004c546) list_medium_line_right_icon

0x10c9,	// (0x0004c546) list_medium_line_right_iconx2

0x10c9,	// (0x0004c546) list_medium_line_t2

0x10c9,	// (0x0004c546) list_medium_line_t2_g2

0x10c9,	// (0x0004c546) list_medium_line_t2_g3

0x10c9,	// (0x0004c546) list_medium_line_t2_right_icon

0x10c9,	// (0x0004c546) list_medium_line_t2_right_iconx2

0x10c9,	// (0x0004c546) list_medium_line_t3

0x10c9,	// (0x0004c546) list_medium_line_t3_g2

0x10c9,	// (0x0004c546) list_medium_line_t3_g3

0x10c9,	// (0x0004c546) list_medium_line_t3_right_iconx2

0x4aaa,	// (0x0004ff27) list_medium_line_t4_g4

0x108e,	// (0x0004c50b) list_medium_line_x2

0x108e,	// (0x0004c50b) list_medium_line_x2_t2_g2

0x108e,	// (0x0004c50b) list_medium_line_x2_t2_g3

0x108e,	// (0x0004c50b) list_medium_line_x2_t2_g4

0x108e,	// (0x0004c50b) list_medium_line_x2_t3

0x108e,	// (0x0004c50b) list_medium_line_x2_t3_g2

0x108e,	// (0x0004c50b) list_medium_line_x2_t3_g3

0x108e,	// (0x0004c50b) list_medium_line_x2_t3_g4

0x108e,	// (0x0004c50b) list_medium_line_x2_t4_g2

0x108e,	// (0x0004c50b) list_medium_line_x2_t4_g4

0x1097,	// (0x0004c514) list_medium_line_x3

0x1097,	// (0x0004c514) list_medium_line_x3_t4

0x1097,	// (0x0004c514) list_medium_line_x3_t4_g4

0x4aaa,	// (0x0004ff27) list_medium_line_x4_t4

0x4aaa,	// (0x0004ff27) list_medium_line_x4_t4_g7

0x4aaa,	// (0x0004ff27) list_medium_line_x4_t5

0xb800,	// (0x00056c7d) list_single_fs_dyc_pane_ParamLimits

0xb800,	// (0x00056c7d) list_single_fs_dyc_pane

0x03b2,	// (0x0004b82f) list_medium_line_x4_t4_g7_g1_ParamLimits

0x03b2,	// (0x0004b82f) list_medium_line_x4_t4_g7_g1

0x1572,	// (0x0004c9ef) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1572,	// (0x0004c9ef) list_medium_line_x4_t4_g7_g2

0x157e,	// (0x0004c9fb) list_medium_line_x4_t4_g7_g3_ParamLimits

0x157e,	// (0x0004c9fb) list_medium_line_x4_t4_g7_g3

0x158d,	// (0x0004ca0a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x158d,	// (0x0004ca0a) list_medium_line_x4_t4_g7_g4

0x1599,	// (0x0004ca16) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1599,	// (0x0004ca16) list_medium_line_x4_t4_g7_g5

0x15a8,	// (0x0004ca25) list_medium_line_x4_t4_g7_g6_ParamLimits

0x15a8,	// (0x0004ca25) list_medium_line_x4_t4_g7_g6

0x15b7,	// (0x0004ca34) list_medium_line_x4_t4_g7_g7_ParamLimits

0x15b7,	// (0x0004ca34) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbcc,	// (0x0005b049) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbcc,	// (0x0005b049) list_medium_line_x4_t4_g7_g

0x15c3,	// (0x0004ca40) list_medium_line_x4_t4_g7_t1_ParamLimits

0x15c3,	// (0x0004ca40) list_medium_line_x4_t4_g7_t1

0x15d8,	// (0x0004ca55) list_medium_line_x4_t4_g7_t2_ParamLimits

0x15d8,	// (0x0004ca55) list_medium_line_x4_t4_g7_t2

0x15ed,	// (0x0004ca6a) list_medium_line_x4_t4_g7_t3_ParamLimits

0x15ed,	// (0x0004ca6a) list_medium_line_x4_t4_g7_t3

0x1602,	// (0x0004ca7f) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1602,	// (0x0004ca7f) list_medium_line_x4_t4_g7_t4

0x1614,	// (0x0004ca91) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1614,	// (0x0004ca91) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdb,	// (0x0005b058) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdb,	// (0x0005b058) list_medium_line_x4_t4_g7_t

0xbec4,	// (0x00057341) list_single_dyc_row_pane_ParamLimits

0xbec4,	// (0x00057341) list_single_dyc_row_pane

0xc449,	// (0x000578c6) call5_gesture_pane_ParamLimits

0xc449,	// (0x000578c6) call5_gesture_pane

0xc479,	// (0x000578f6) call5_windows_pane_ParamLimits

0xc479,	// (0x000578f6) call5_windows_pane

0xc4fd,	// (0x0005797a) call5_swipe_1_pane_cp_ParamLimits

0xc4fd,	// (0x0005797a) call5_swipe_1_pane_cp

0xc509,	// (0x00057986) call5_swipe_2_pane_cp_ParamLimits

0xc509,	// (0x00057986) call5_swipe_2_pane_cp

0x3311,	// (0x0004e78e) call5_image_pane_cp

0xc515,	// (0x00057992) popup_call5_audio_first_window_cp_ParamLimits

0xc515,	// (0x00057992) popup_call5_audio_first_window_cp

0x1c8c,	// (0x0004d109) call5_swipe_1_pane_g1_cp_ParamLimits

0x1c8c,	// (0x0004d109) call5_swipe_1_pane_g1_cp

0x1cba,	// (0x0004d137) call5_swipe_1_pane_g2_cp

0x1ca5,	// (0x0004d122) call5_swipe_1_pane_t1_cp_ParamLimits

0x1ca5,	// (0x0004d122) call5_swipe_1_pane_t1_cp

0x1c8c,	// (0x0004d109) call5_swipe_2_pane_g1_cp_ParamLimits

0x1c8c,	// (0x0004d109) call5_swipe_2_pane_g1_cp

0x1cc2,	// (0x0004d13f) call5_swipe_2_pane_g2_cp

0x1cca,	// (0x0004d147) call5_swipe_2_pane_t1_cp_ParamLimits

0x1cca,	// (0x0004d147) call5_swipe_2_pane_t1_cp

0x498f,	// (0x0004fe0c) main_sp_fs_email_pane

0x1cdf,	// (0x0004d15c) main_sp_fs_listscroll_pane_te

0xc521,	// (0x0005799e) popup_sp_fs_action_menu_pane_ParamLimits

0xc521,	// (0x0005799e) popup_sp_fs_action_menu_pane

0xe672,	// (0x00059aef) bg_sp_fs_ctrlbar_pane_g1

0xebfe,	// (0x0005a07b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xec10,	// (0x0005a08d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xec07,	// (0x0005a084) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe672,	// (0x00059aef) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc9,	// (0x0005b146) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe45f,	// (0x000598dc) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe45f,	// (0x000598dc) bg_sp_fs_ctrlbar_ddmenu_pane

0x1ce8,	// (0x0004d165) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x1ce8,	// (0x0004d165) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x1cf4,	// (0x0004d171) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x1cf4,	// (0x0004d171) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd2,	// (0x0005b14f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd2,	// (0x0005b14f) main_sp_fs_ctrlbar_ddmenu_pane_g

0x1d00,	// (0x0004d17d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x1d00,	// (0x0004d17d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc553,	// (0x000579d0) list_medium_line_t2_right_icon_g1

0xc55b,	// (0x000579d8) list_medium_line_t2_right_icon_t1

0xc56a,	// (0x000579e7) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd7,	// (0x0005b154) list_medium_line_t2_right_icon_t

0xe260,	// (0x000596dd) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe260,	// (0x000596dd) bg_sp_fs_ctrlbar_pane

0xc5cd,	// (0x00057a4a) main_sp_fs_ctrlbar_button_pane_cp01

0xc5d5,	// (0x00057a52) main_sp_fs_ctrlbar_ddmenu_pane

0x1d52,	// (0x0004d1cf) main_sp_fs_ctrlbar_pane_g1

0x1d5e,	// (0x0004d1db) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcdc,	// (0x0005b159) main_sp_fs_ctrlbar_pane_g

0xc60f,	// (0x00057a8c) main_sp_fs_ctrlbar_pane_t1

0xc657,	// (0x00057ad4) main_sp_fs_ctrlbar_pane

0xc66b,	// (0x00057ae8) main_sp_fs_listscroll_pane_te_cp01

0xc67c,	// (0x00057af9) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc67c,	// (0x00057af9) popup_sp_fs_action_menu_pane_cp01

0x498f,	// (0x0004fe0c) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x498f,	// (0x0004fe0c) bg_sp_fs_highlight_list_pane_cp01

0xc69c,	// (0x00057b19) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc69c,	// (0x00057b19) sp_fs_action_menu_list_gene_pane_g1

0x1d85,	// (0x0004d202) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x1d85,	// (0x0004d202) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0005b167) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0005b167) sp_fs_action_menu_list_gene_pane_g

0xc6ab,	// (0x00057b28) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xc6ab,	// (0x00057b28) sp_fs_action_menu_list_gene_pane_t1

0xc6c3,	// (0x00057b40) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc6c3,	// (0x00057b40) sp_fs_action_menu_list_gene_pane

0x1d92,	// (0x0004d20f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x1d92,	// (0x0004d20f) popup_sp_fs_action_menu_bg_pane

0xc6e0,	// (0x00057b5d) sp_fs_action_menu_list_pane_ParamLimits

0xc6e0,	// (0x00057b5d) sp_fs_action_menu_list_pane

0x1da0,	// (0x0004d21d) sp_fs_scroll_pane_cp01_ParamLimits

0x1da0,	// (0x0004d21d) sp_fs_scroll_pane_cp01

0xc6fe,	// (0x00057b7b) list_medium_line_plain_t2_t1

0xc70d,	// (0x00057b8a) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0005b16c) list_medium_line_plain_t2_t

0xc71b,	// (0x00057b98) list_medium_line_plain_t3_t1

0xc72b,	// (0x00057ba8) list_medium_line_plain_t3_t2

0xc739,	// (0x00057bb6) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0005b171) list_medium_line_plain_t3_t

0x03b2,	// (0x0004b82f) list_medium_line_x2_t2_g2_g1_ParamLimits

0x03b2,	// (0x0004b82f) list_medium_line_x2_t2_g2_g1

0x03ca,	// (0x0004b847) list_medium_line_x2_t2_g2_g2_ParamLimits

0x03ca,	// (0x0004b847) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0005a6a8) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0005a6a8) list_medium_line_x2_t2_g2_g

0x04ee,	// (0x0004b96b) list_medium_line_x2_t2_g2_t1_ParamLimits

0x04ee,	// (0x0004b96b) list_medium_line_x2_t2_g2_t1

0x03eb,	// (0x0004b868) list_medium_line_x2_t2_g2_t2_ParamLimits

0x03eb,	// (0x0004b868) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0005b178) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0005b178) list_medium_line_x2_t2_g2_t

0x03b2,	// (0x0004b82f) list_medium_line_x2_t4_g2_g1_ParamLimits

0x03b2,	// (0x0004b82f) list_medium_line_x2_t4_g2_g1

0x1dc6,	// (0x0004d243) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1dc6,	// (0x0004d243) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0005b17d) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0005b17d) list_medium_line_x2_t4_g2_g

0xc747,	// (0x00057bc4) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc747,	// (0x00057bc4) list_medium_line_x2_t4_g2_t1

0xc75e,	// (0x00057bdb) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc75e,	// (0x00057bdb) list_medium_line_x2_t4_g2_t2

0xc773,	// (0x00057bf0) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc773,	// (0x00057bf0) list_medium_line_x2_t4_g2_t3

0x03eb,	// (0x0004b868) list_medium_line_x2_t4_g2_t4_ParamLimits

0x03eb,	// (0x0004b868) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0005b182) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0005b182) list_medium_line_x2_t4_g2_t

0xc785,	// (0x00057c02) list_medium_line_t3_right_iconx2_g1

0xc553,	// (0x000579d0) list_medium_line_t3_right_iconx2_g2

0xc78d,	// (0x00057c0a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0005b18b) list_medium_line_t3_right_iconx2_g

0xc795,	// (0x00057c12) list_medium_line_t3_right_iconx2_t1

0xc7a5,	// (0x00057c22) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0005b192) list_medium_line_t3_right_iconx2_t

0x03b2,	// (0x0004b82f) list_medium_line_x3_t4_g4_g1_ParamLimits

0x03b2,	// (0x0004b82f) list_medium_line_x3_t4_g4_g1

0x03be,	// (0x0004b83b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x03be,	// (0x0004b83b) list_medium_line_x3_t4_g4_g2

0x0434,	// (0x0004b8b1) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0434,	// (0x0004b8b1) list_medium_line_x3_t4_g4_g3

0x1dd8,	// (0x0004d255) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1dd8,	// (0x0004d255) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0005b197) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0005b197) list_medium_line_x3_t4_g4_g

0xc7b3,	// (0x00057c30) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc7b3,	// (0x00057c30) list_medium_line_x3_t4_g4_t1

0xc7ca,	// (0x00057c47) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc7ca,	// (0x00057c47) list_medium_line_x3_t4_g4_t2

0x1de4,	// (0x0004d261) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1de4,	// (0x0004d261) list_medium_line_x3_t4_g4_t3

0x1df9,	// (0x0004d276) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1df9,	// (0x0004d276) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0005b1a0) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0005b1a0) list_medium_line_x3_t4_g4_t

0xc7df,	// (0x00057c5c) list_single_dyc_row_text_pane_t1_ParamLimits

0xc7df,	// (0x00057c5c) list_single_dyc_row_text_pane_t1

0xc816,	// (0x00057c93) list_single_dyc_row_text_pane_t2_ParamLimits

0xc816,	// (0x00057c93) list_single_dyc_row_text_pane_t2

0x1e16,	// (0x0004d293) list_single_dyc_row_text_pane_t3_ParamLimits

0x1e16,	// (0x0004d293) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0005b1a9) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0005b1a9) list_single_dyc_row_text_pane_t

0x1e3a,	// (0x0004d2b7) list_single_dyc_row_pane_g1_ParamLimits

0x1e3a,	// (0x0004d2b7) list_single_dyc_row_pane_g1

0x1e46,	// (0x0004d2c3) list_single_dyc_row_pane_g2_ParamLimits

0x1e46,	// (0x0004d2c3) list_single_dyc_row_pane_g2

0x1e52,	// (0x0004d2cf) list_single_dyc_row_pane_g3_ParamLimits

0x1e52,	// (0x0004d2cf) list_single_dyc_row_pane_g3

0x1e5e,	// (0x0004d2db) list_single_dyc_row_pane_g4_ParamLimits

0x1e5e,	// (0x0004d2db) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0005b1b6) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0005b1b6) list_single_dyc_row_pane_g

0x1e6a,	// (0x0004d2e7) list_single_dyc_row_text_pane_ParamLimits

0x1e6a,	// (0x0004d2e7) list_single_dyc_row_text_pane

0x026b,	// (0x0004b6e8) bg_sp_fs_scroll_pane

0x1e89,	// (0x0004d306) thumb_sp_fs_scroll_pane

0xb195,	// (0x00056612) list_medium_line_g1_ParamLimits

0xb195,	// (0x00056612) list_medium_line_g1

0xc92e,	// (0x00057dab) list_medium_line_t1_ParamLimits

0xc92e,	// (0x00057dab) list_medium_line_t1

0x03b2,	// (0x0004b82f) list_medium_line_x2_g1_ParamLimits

0x03b2,	// (0x0004b82f) list_medium_line_x2_g1

0x03be,	// (0x0004b83b) list_medium_line_x2_g2_ParamLimits

0x03be,	// (0x0004b83b) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0005b1bf) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0005b1bf) list_medium_line_x2_g

0x1e92,	// (0x0004d30f) list_medium_line_x2_t1_ParamLimits

0x1e92,	// (0x0004d30f) list_medium_line_x2_t1

0x03b2,	// (0x0004b82f) list_medium_line_x3_g1_ParamLimits

0x03b2,	// (0x0004b82f) list_medium_line_x3_g1

0x03be,	// (0x0004b83b) list_medium_line_x3_g2_ParamLimits

0x03be,	// (0x0004b83b) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0005b1bf) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0005b1bf) list_medium_line_x3_g

0x1e92,	// (0x0004d30f) list_medium_line_x3_t1_ParamLimits

0x1e92,	// (0x0004d30f) list_medium_line_x3_t1

0x1ea8,	// (0x0004d325) thumb_sp_fs_scroll_pane_g1

0x1eb1,	// (0x0004d32e) thumb_sp_fs_scroll_pane_g2

0x1eba,	// (0x0004d337) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0005b1c4) thumb_sp_fs_scroll_pane_g

0x1ea8,	// (0x0004d325) bg_sp_fs_scroll_pane_g1

0x1eb1,	// (0x0004d32e) bg_sp_fs_scroll_pane_g2

0x1eba,	// (0x0004d337) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0005b1c4) bg_sp_fs_scroll_pane_g

0x03b2,	// (0x0004b82f) list_medium_line_x2_t3_g4_g1_ParamLimits

0x03b2,	// (0x0004b82f) list_medium_line_x2_t3_g4_g1

0x0428,	// (0x0004b8a5) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0428,	// (0x0004b8a5) list_medium_line_x2_t3_g4_g2

0x03be,	// (0x0004b83b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x03be,	// (0x0004b83b) list_medium_line_x2_t3_g4_g3

0x03ca,	// (0x0004b847) list_medium_line_x2_t3_g4_g4_ParamLimits

0x03ca,	// (0x0004b847) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0005a724) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0005a724) list_medium_line_x2_t3_g4_g

0xc943,	// (0x00057dc0) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc943,	// (0x00057dc0) list_medium_line_x2_t3_g4_t1

0xc959,	// (0x00057dd6) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc959,	// (0x00057dd6) list_medium_line_x2_t3_g4_t2

0x03eb,	// (0x0004b868) list_medium_line_x2_t3_g4_t3_ParamLimits

0x03eb,	// (0x0004b868) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0005b1cb) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0005b1cb) list_medium_line_x2_t3_g4_t

0xb195,	// (0x00056612) list_medium_line_g2_g1_ParamLimits

0xb195,	// (0x00056612) list_medium_line_g2_g1

0xb1a1,	// (0x0005661e) list_medium_line_g2_g2_ParamLimits

0xb1a1,	// (0x0005661e) list_medium_line_g2_g2

0x0001,

0xf9fc,	// (0x0005ae79) list_medium_line_g2_g_ParamLimits

0xf9fc,	// (0x0005ae79) list_medium_line_g2_g

0xc972,	// (0x00057def) list_medium_line_g2_t1_ParamLimits

0xc972,	// (0x00057def) list_medium_line_g2_t1

0xb195,	// (0x00056612) list_medium_line_t3_g2_g1_ParamLimits

0xb195,	// (0x00056612) list_medium_line_t3_g2_g1

0xb1a1,	// (0x0005661e) list_medium_line_t3_g2_g2_ParamLimits

0xb1a1,	// (0x0005661e) list_medium_line_t3_g2_g2

0x0001,

0xf9fc,	// (0x0005ae79) list_medium_line_t3_g2_g_ParamLimits

0xf9fc,	// (0x0005ae79) list_medium_line_t3_g2_g

0xc987,	// (0x00057e04) list_medium_line_t3_g2_t1_ParamLimits

0xc987,	// (0x00057e04) list_medium_line_t3_g2_t1

0xc9a1,	// (0x00057e1e) list_medium_line_t3_g2_t2_ParamLimits

0xc9a1,	// (0x00057e1e) list_medium_line_t3_g2_t2

0xc9b6,	// (0x00057e33) list_medium_line_t3_g2_t3_ParamLimits

0xc9b6,	// (0x00057e33) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0005b1d2) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0005b1d2) list_medium_line_t3_g2_t

0xc553,	// (0x000579d0) list_medium_line_right_icon_g1

0xc9cc,	// (0x00057e49) list_medium_line_right_icon_t1

0xb195,	// (0x00056612) list_medium_line_t2_g1_ParamLimits

0xb195,	// (0x00056612) list_medium_line_t2_g1

0xc9da,	// (0x00057e57) list_medium_line_t2_t1_ParamLimits

0xc9da,	// (0x00057e57) list_medium_line_t2_t1

0xc9f0,	// (0x00057e6d) list_medium_line_t2_t2_ParamLimits

0xc9f0,	// (0x00057e6d) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0005b1d9) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0005b1d9) list_medium_line_t2_t

0xb195,	// (0x00056612) list_medium_line_t3_g1_ParamLimits

0xb195,	// (0x00056612) list_medium_line_t3_g1

0xca02,	// (0x00057e7f) list_medium_line_t3_t1_ParamLimits

0xca02,	// (0x00057e7f) list_medium_line_t3_t1

0xca19,	// (0x00057e96) list_medium_line_t3_t2_ParamLimits

0xca19,	// (0x00057e96) list_medium_line_t3_t2

0xca2e,	// (0x00057eab) list_medium_line_t3_t3_ParamLimits

0xca2e,	// (0x00057eab) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0005b1de) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0005b1de) list_medium_line_t3_t

0xb195,	// (0x00056612) list_medium_line_g3_g1_ParamLimits

0xb195,	// (0x00056612) list_medium_line_g3_g1

0xca40,	// (0x00057ebd) list_medium_line_g3_g2_ParamLimits

0xca40,	// (0x00057ebd) list_medium_line_g3_g2

0xb1a1,	// (0x0005661e) list_medium_line_g3_g3_ParamLimits

0xb1a1,	// (0x0005661e) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0005b1e5) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0005b1e5) list_medium_line_g3_g

0xca4c,	// (0x00057ec9) list_medium_line_g3_t1_ParamLimits

0xca4c,	// (0x00057ec9) list_medium_line_g3_t1

0xb195,	// (0x00056612) list_medium_line_t2_g3_g1_ParamLimits

0xb195,	// (0x00056612) list_medium_line_t2_g3_g1

0xca40,	// (0x00057ebd) list_medium_line_t2_g3_g2_ParamLimits

0xca40,	// (0x00057ebd) list_medium_line_t2_g3_g2

0xb1a1,	// (0x0005661e) list_medium_line_t2_g3_g3_ParamLimits

0xb1a1,	// (0x0005661e) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0005b1e5) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0005b1e5) list_medium_line_t2_g3_g

0xca61,	// (0x00057ede) list_medium_line_t2_g3_t1_ParamLimits

0xca61,	// (0x00057ede) list_medium_line_t2_g3_t1

0xca7b,	// (0x00057ef8) list_medium_line_t2_g3_t2_ParamLimits

0xca7b,	// (0x00057ef8) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0005b1ec) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0005b1ec) list_medium_line_t2_g3_t

0xb195,	// (0x00056612) list_medium_line_t3_g3_g1_ParamLimits

0xb195,	// (0x00056612) list_medium_line_t3_g3_g1

0xca40,	// (0x00057ebd) list_medium_line_t3_g3_g2_ParamLimits

0xca40,	// (0x00057ebd) list_medium_line_t3_g3_g2

0xb1a1,	// (0x0005661e) list_medium_line_t3_g3_g3_ParamLimits

0xb1a1,	// (0x0005661e) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0005b1e5) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0005b1e5) list_medium_line_t3_g3_g

0xca90,	// (0x00057f0d) list_medium_line_t3_g3_t1_ParamLimits

0xca90,	// (0x00057f0d) list_medium_line_t3_g3_t1

0xcaa4,	// (0x00057f21) list_medium_line_t3_g3_t2_ParamLimits

0xcaa4,	// (0x00057f21) list_medium_line_t3_g3_t2

0xcab6,	// (0x00057f33) list_medium_line_t3_g3_t3_ParamLimits

0xcab6,	// (0x00057f33) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0005b1f1) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0005b1f1) list_medium_line_t3_g3_t

0xc785,	// (0x00057c02) list_medium_line_right_iconx2_g1

0xc553,	// (0x000579d0) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005b1f8) list_medium_line_right_iconx2_g

0xcac8,	// (0x00057f45) list_medium_line_right_iconx2_t1

0xc785,	// (0x00057c02) list_medium_line_t2_right_iconx2_g1

0xc553,	// (0x000579d0) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005b1f8) list_medium_line_t2_right_iconx2_g

0xcad6,	// (0x00057f53) list_medium_line_t2_right_iconx2_t1

0xcae6,	// (0x00057f63) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0005b1fd) list_medium_line_t2_right_iconx2_t

0x1ec3,	// (0x0004d340) list_medium_line_x4_t4_t1

0xcaf4,	// (0x00057f71) list_medium_line_x4_t4_t2

0xcb02,	// (0x00057f7f) list_medium_line_x4_t4_t3

0xcb10,	// (0x00057f8d) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0005b202) list_medium_line_x4_t4_t

0xcb42,	// (0x00057fbf) tport_appsw_pane_ParamLimits

0xcb42,	// (0x00057fbf) tport_appsw_pane

0xcb4e,	// (0x00057fcb) tport_contact_pane_ParamLimits

0xcb4e,	// (0x00057fcb) tport_contact_pane

0xcb5c,	// (0x00057fd9) tport_listscroll_pane_ParamLimits

0xcb5c,	// (0x00057fd9) tport_listscroll_pane

0xcb6a,	// (0x00057fe7) cell_tport_appsw_pane_ParamLimits

0xcb6a,	// (0x00057fe7) cell_tport_appsw_pane

0xe906,	// (0x00059d83) tport_appsw_pane_g1_ParamLimits

0xe906,	// (0x00059d83) tport_appsw_pane_g1

0x1ed1,	// (0x0004d34e) tport_contact_pane_g1

0x1eda,	// (0x0004d357) tport_contact_pane_t1

0x1ee8,	// (0x0004d365) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0005b20b) tport_contact_pane_t

0x1ef6,	// (0x0004d373) list_tport_pane

0x3247,	// (0x0004e6c4) scroll_pane_cp_030

0x1f07,	// (0x0004d384) cell_tport_appsw_pane_g1

0x1f17,	// (0x0004d394) cell_tport_appsw_pane_t1

0x1f25,	// (0x0004d3a2) grid_highlight_pane_cp019

0xcb91,	// (0x0005800e) list_tport_double_graphic_pane_ParamLimits

0xcb91,	// (0x0005800e) list_tport_double_graphic_pane

0x498f,	// (0x0004fe0c) list_highlight_pane_cp023_ParamLimits

0x498f,	// (0x0004fe0c) list_highlight_pane_cp023

0xcb9e,	// (0x0005801b) list_tport_double_graphic_pane_g1_ParamLimits

0xcb9e,	// (0x0005801b) list_tport_double_graphic_pane_g1

0xcbab,	// (0x00058028) list_tport_double_graphic_pane_t1_ParamLimits

0xcbab,	// (0x00058028) list_tport_double_graphic_pane_t1

0xcbc0,	// (0x0005803d) list_tport_double_graphic_pane_t2_ParamLimits

0xcbc0,	// (0x0005803d) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0005b217) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0005b217) list_tport_double_graphic_pane_t

0x026b,	// (0x0004b6e8) main_cale_note_pane

0xa995,	// (0x00055e12) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa995,	// (0x00055e12) cell_vitu2_function_top_wide_pane_cp01

0xc1f0,	// (0x0005766d) wait_bar_pane_cp05_ParamLimits

0x498f,	// (0x0004fe0c) listscroll_cmail_pane

0x1f2d,	// (0x0004d3aa) list_cmail_pane

0xcbd2,	// (0x0005804f) list_cmail_body_pane

0xcbd2,	// (0x0005804f) list_single_cmail_header_caption_pane

0xcbeb,	// (0x00058068) list_single_cmail_header_detail_pane_ParamLimits

0xcbeb,	// (0x00058068) list_single_cmail_header_detail_pane

0x1f49,	// (0x0004d3c6) list_single_cmail_header_caption_pane_t1

0xcc16,	// (0x00058093) list_single_cmail_header_detail_pane_g1_ParamLimits

0xcc16,	// (0x00058093) list_single_cmail_header_detail_pane_g1

0x1f60,	// (0x0004d3dd) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1f60,	// (0x0004d3dd) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0005b21c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0005b21c) list_single_cmail_header_detail_pane_g

0xcc2c,	// (0x000580a9) list_single_cmail_header_detail_pane_t1_ParamLimits

0xcc2c,	// (0x000580a9) list_single_cmail_header_detail_pane_t1

0x1f9d,	// (0x0004d41a) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1f9d,	// (0x0004d41a) list_single_cmail_header_editor_pane_bg

0x1fb4,	// (0x0004d431) list_cmail_body_pane_g1

0x1fbd,	// (0x0004d43a) list_cmail_body_pane_t1

0xf027,	// (0x0005a4a4) list_single_cmail_header_editor_pane_bg_g1

0x35ca,	// (0x0004ea47) list_single_cmail_header_editor_pane_bg_g1_copy1

0xf037,	// (0x0005a4b4) list_single_cmail_header_editor_pane_bg_g1_copy2

0xf02f,	// (0x0005a4ac) list_single_cmail_header_editor_pane_bg_g1_copy3

0x0d55,	// (0x0004c1d2) list_single_cmail_header_editor_pane_bg_g1_copy4

0xf057,	// (0x0005a4d4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xf047,	// (0x0005a4c4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xf04f,	// (0x0005a4cc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x35aa,	// (0x0004ea27) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcc68,	// (0x000580e5) calenote_gesture_pane_ParamLimits

0xcc68,	// (0x000580e5) calenote_gesture_pane

0xcc80,	// (0x000580fd) calenote_window_pane_ParamLimits

0xcc80,	// (0x000580fd) calenote_window_pane

0x1fcb,	// (0x0004d448) popup_note_window_cp01

0xcc98,	// (0x00058115) calenote_swipe_1_pane_ParamLimits

0xcc98,	// (0x00058115) calenote_swipe_1_pane

0xc509,	// (0x00057986) calenote_swipe_2_pane_ParamLimits

0xc509,	// (0x00057986) calenote_swipe_2_pane

0x1c8c,	// (0x0004d109) calenote_swipe_1_pane_g1_ParamLimits

0x1c8c,	// (0x0004d109) calenote_swipe_1_pane_g1

0x1c99,	// (0x0004d116) calenote_swipe_1_pane_g2_ParamLimits

0x1c99,	// (0x0004d116) calenote_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0005b13c) calenote_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0005b13c) calenote_swipe_1_pane_g

0x1fdd,	// (0x0004d45a) calenote_swipe_1_pane_t1_ParamLimits

0x1fdd,	// (0x0004d45a) calenote_swipe_1_pane_t1

0x1c8c,	// (0x0004d109) calenote_swipe_2_pane_g1_ParamLimits

0x1c8c,	// (0x0004d109) calenote_swipe_2_pane_g1

0x1ffc,	// (0x0004d479) calenote_swipe_2_pane_g2_ParamLimits

0x1ffc,	// (0x0004d479) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0005b228) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0005b228) calenote_swipe_2_pane_g

0x2008,	// (0x0004d485) calenote_swipe_2_pane_t1_ParamLimits

0x2008,	// (0x0004d485) calenote_swipe_2_pane_t1

0x026b,	// (0x0004b6e8) main_mup_navstr_pane

0x97fa,	// (0x00054c77) main_mup3_pane_t7_ParamLimits

0x97fa,	// (0x00054c77) main_mup3_pane_t7

0xa17b,	// (0x000555f8) main_mp4_pane_g6_ParamLimits

0xa17b,	// (0x000555f8) main_mp4_pane_g6

0xa4d5,	// (0x00055952) main_image3_pane_t4_ParamLimits

0xa4d5,	// (0x00055952) main_image3_pane_t4

0xccab,	// (0x00058128) popup_navstr_preview_pane_ParamLimits

0xccab,	// (0x00058128) popup_navstr_preview_pane

0xccb7,	// (0x00058134) scroll_navstr_pane_ParamLimits

0xccb7,	// (0x00058134) scroll_navstr_pane

0x026b,	// (0x0004b6e8) bg_popup_preview_window_pane_cp04

0x202f,	// (0x0004d4ac) popup_navstr_preview_pane_t1

0xccc3,	// (0x00058140) scroll_navstr_pane_g1_ParamLimits

0xccc3,	// (0x00058140) scroll_navstr_pane_g1

0xccd0,	// (0x0005814d) scroll_navstr_pane_t1_ParamLimits

0xccd0,	// (0x0005814d) scroll_navstr_pane_t1

0x1fd4,	// (0x0004d451) bg_button_pane_cp014

0x1fd4,	// (0x0004d451) bg_button_pane_cp030

0x1bf0,	// (0x0004d06d) list_double_fisheye_pane_g4_ParamLimits

0x1bf0,	// (0x0004d06d) list_double_fisheye_pane_g4

0x1bfc,	// (0x0004d079) list_double_fisheye_pane_g5_ParamLimits

0x1bfc,	// (0x0004d079) list_double_fisheye_pane_g5

0x1f3d,	// (0x0004d3ba) sp_fs_scroll_pane_cp03

0x1d52,	// (0x0004d1cf) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x1d5e,	// (0x0004d1db) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcdc,	// (0x0005b159) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc60f,	// (0x00057a8c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x1f35,	// (0x0004d3b2) sp_fs_scroll_pane_cp02

0x3259,	// (0x0004e6d6) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x3259,	// (0x0004e6d6) popup_sp_fs_calendar_preview_list_single_pane

0x026b,	// (0x0004b6e8) main_cam6_pano_pane

0x891b,	// (0x00053d98) main_mup3_pane_ParamLimits

0x026b,	// (0x0004b6e8) main_phacti_pane

0xc0e3,	// (0x00057560) bg_button_pane_cp11

0xc0fb,	// (0x00057578) main_mobtv_info_pane_g2_ParamLimits

0xc0fb,	// (0x00057578) main_mobtv_info_pane_g2

0x0001,

0xfc3c,	// (0x0005b0b9) main_mobtv_info_pane_g_ParamLimits

0xfc3c,	// (0x0005b0b9) main_mobtv_info_pane_g

0xc287,	// (0x00057704) sc_clock_pane_t5_ParamLimits

0xc287,	// (0x00057704) sc_clock_pane_t5

0xc314,	// (0x00057791) main_radioblah_pane_g1_ParamLimits

0x1b55,	// (0x0004cfd2) main_radioblah_pane_t3_ParamLimits

0x1b55,	// (0x0004cfd2) main_radioblah_pane_t3

0x1b6d,	// (0x0004cfea) main_radioblah_pane_t4_ParamLimits

0x1b6d,	// (0x0004cfea) main_radioblah_pane_t4

0xc332,	// (0x000577af) main_radioblah_text_pane_ParamLimits

0xc332,	// (0x000577af) main_radioblah_text_pane

0xc33f,	// (0x000577bc) main_radioblah_info_pane_g1_ParamLimits

0xc3cc,	// (0x00057849) main_radioblah_info_pane_t4_ParamLimits

0xc3cc,	// (0x00057849) main_radioblah_info_pane_t4

0x498f,	// (0x0004fe0c) main_sp_fs_calendar_pane

0xcce2,	// (0x0005815f) main_phacti_pane_g1

0xccea,	// (0x00058167) phacti_note_pane_ParamLimits

0xccea,	// (0x00058167) phacti_note_pane

0x2046,	// (0x0004d4c3) phacti_term_pane_ParamLimits

0x2046,	// (0x0004d4c3) phacti_term_pane

0x205b,	// (0x0004d4d8) phacti_note_pane_t1_ParamLimits

0x205b,	// (0x0004d4d8) phacti_note_pane_t1

0x2072,	// (0x0004d4ef) phacti_term_pane_g1

0x207a,	// (0x0004d4f7) phacti_term_pane_t1_ParamLimits

0x207a,	// (0x0004d4f7) phacti_term_pane_t1

0x20a4,	// (0x0004d521) popup_sp_fs_calendar_preview_list_single_pane_g1

0x20ac,	// (0x0004d529) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0005b232) popup_sp_fs_calendar_preview_list_single_pane_g

0x20b4,	// (0x0004d531) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x20b4,	// (0x0004d531) popup_sp_fs_calendar_preview_list_single_pane_t1

0x20ca,	// (0x0004d547) aid_popup_sp_fs_bg_corner_pane

0xe672,	// (0x00059aef) popup_sp_fs_calendar_preview_bg_pane_g1

0x026b,	// (0x0004b6e8) popup_sp_fs_calendar_preview_bg_pane

0x20d2,	// (0x0004d54f) popup_sp_fs_calendar_preview_list_pane

0xe260,	// (0x000596dd) bg_main_sp_fs_cale_pane_ParamLimits

0xe260,	// (0x000596dd) bg_main_sp_fs_cale_pane

0x20e3,	// (0x0004d560) listscroll_cale_mrui_pane_ParamLimits

0x20e3,	// (0x0004d560) listscroll_cale_mrui_pane

0x20f8,	// (0x0004d575) listscroll_sp_fs_schedule_track_pane

0x2101,	// (0x0004d57e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x2101,	// (0x0004d57e) main_sp_fs_ctrlbar_pane_cp01

0x2114,	// (0x0004d591) main_sp_fs_ribbon_pane

0x211c,	// (0x0004d599) popup_sp_fs_cale_preview_window

0xcd41,	// (0x000581be) list_single_sp_fs_schedule_track_pane_ParamLimits

0xcd41,	// (0x000581be) list_single_sp_fs_schedule_track_pane

0x2886,	// (0x0004dd03) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2886,	// (0x0004dd03) bg_sp_fs_highlight_list_pane_cp03

0xcd57,	// (0x000581d4) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xcd57,	// (0x000581d4) list_single_sp_fs_schedule_track_pane_g1

0xcd63,	// (0x000581e0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcd63,	// (0x000581e0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0005b237) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0005b237) list_single_sp_fs_schedule_track_pane_g

0xcd6f,	// (0x000581ec) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xcd6f,	// (0x000581ec) list_single_sp_fs_schedule_track_pane_t1

0xcd87,	// (0x00058204) sp_fs_schedule_track_pane_ParamLimits

0xcd87,	// (0x00058204) sp_fs_schedule_track_pane

0x212b,	// (0x0004d5a8) sp_fs_schedule_track_pane_g1

0x2133,	// (0x0004d5b0) sp_fs_schedule_track_pane_g2

0x213b,	// (0x0004d5b8) sp_fs_schedule_track_pane_g3

0x2143,	// (0x0004d5c0) sp_fs_schedule_track_pane_g4

0x214b,	// (0x0004d5c8) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0005b23c) sp_fs_schedule_track_pane_g

0xf027,	// (0x0005a4a4) bg_sp_fs_schedule_viewer_highlight_g1

0x35ca,	// (0x0004ea47) bg_sp_fs_schedule_viewer_highlight_g2

0xf02f,	// (0x0005a4ac) bg_sp_fs_schedule_viewer_highlight_g3

0xf037,	// (0x0005a4b4) bg_sp_fs_schedule_viewer_highlight_g4

0x0d55,	// (0x0004c1d2) bg_sp_fs_schedule_viewer_highlight_g5

0xf047,	// (0x0005a4c4) bg_sp_fs_schedule_viewer_highlight_g6

0xf04f,	// (0x0005a4cc) bg_sp_fs_schedule_viewer_highlight_g7

0xf057,	// (0x0005a4d4) bg_sp_fs_schedule_viewer_highlight_g8

0x35aa,	// (0x0004ea27) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0005b247) bg_sp_fs_schedule_viewer_highlight_g

0x026b,	// (0x0004b6e8) bg_main_sp_fs_ribbon_pane

0xa704,	// (0x00055b81) main_sp_fs_ribbon_pane_g1

0x2153,	// (0x0004d5d0) main_sp_fs_ribbon_pane_t1

0xcd97,	// (0x00058214) main_sp_fs_ribbon_pane_t2

0x2162,	// (0x0004d5df) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0005b25a) main_sp_fs_ribbon_pane_t

0x2171,	// (0x0004d5ee) main_sp_fs_ribbon_scheduler_pane

0x2179,	// (0x0004d5f6) bg_main_sp_fs_ribbon_pane_g1

0x2182,	// (0x0004d5ff) bg_main_sp_fs_ribbon_pane_g2

0x218b,	// (0x0004d608) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0005b261) bg_main_sp_fs_ribbon_pane_g

0x2193,	// (0x0004d610) main_sp_fs_ribbon_scheduler_pane_g1

0x219c,	// (0x0004d619) main_sp_fs_ribbon_scheduler_pane_g2

0x21a5,	// (0x0004d622) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0005b268) main_sp_fs_ribbon_scheduler_pane_g

0x21ae,	// (0x0004d62b) list_cale_mrui_pane

0xcda6,	// (0x00058223) sp_fs_scroll_pane_cp07_ParamLimits

0xcda6,	// (0x00058223) sp_fs_scroll_pane_cp07

0xcdbe,	// (0x0005823b) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcdbe,	// (0x0005823b) bg_sp_fs_schedule_viewer_highlight

0x21bb,	// (0x0004d638) list_single_sp_fs_schedule_track_pane_cp01

0x21c3,	// (0x0004d640) list_sp_fs_schedule_track_pane

0x21cb,	// (0x0004d648) sp_fs_scroll_pane_cp06_ParamLimits

0x21cb,	// (0x0004d648) sp_fs_scroll_pane_cp06

0xe672,	// (0x00059aef) bgmain_sp_fs_calendar_pane_g1

0xcdcb,	// (0x00058248) list_single_cale_mrui_pane_ParamLimits

0xcdcb,	// (0x00058248) list_single_cale_mrui_pane

0x21dd,	// (0x0004d65a) list_single_cale_mrui_row_pane_ParamLimits

0x21dd,	// (0x0004d65a) list_single_cale_mrui_row_pane

0xcded,	// (0x0005826a) list_single_cale_mrui_row_pane_g1_ParamLimits

0xcded,	// (0x0005826a) list_single_cale_mrui_row_pane_g1

0xce25,	// (0x000582a2) list_single_cale_mrui_row_pane_t1_ParamLimits

0xce25,	// (0x000582a2) list_single_cale_mrui_row_pane_t1

0xce37,	// (0x000582b4) list_single_cale_mrui_row_pane_t2_ParamLimits

0xce37,	// (0x000582b4) list_single_cale_mrui_row_pane_t2

0xce9d,	// (0x0005831a) list_single_cale_mrui_row_pane_t3_ParamLimits

0xce9d,	// (0x0005831a) list_single_cale_mrui_row_pane_t3

0xcecc,	// (0x00058349) list_single_cale_mrui_row_pane_t4_ParamLimits

0xcecc,	// (0x00058349) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0005b276) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0005b276) list_single_cale_mrui_row_pane_t

0xcefb,	// (0x00058378) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xcefb,	// (0x00058378) list_single_cmail_header_editor_pane_bg_cp01

0xcf1f,	// (0x0005839c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xcf1f,	// (0x0005839c) list_single_cmail_header_editor_pane_bg_cp02

0xcf3d,	// (0x000583ba) main_radioblah_text_pane_t1_ParamLimits

0xcf3d,	// (0x000583ba) main_radioblah_text_pane_t1

0x2200,	// (0x0004d67d) cam6_indi_pane_cp01

0x2208,	// (0x0004d685) cam6_mode_pane_cp01

0x2210,	// (0x0004d68d) cam6_pano_pane

0x2219,	// (0x0004d696) cam6_zoom_pane_cp01

0x2221,	// (0x0004d69e) cam6_pano_image_pane

0x222a,	// (0x0004d6a7) cam6_pano_pane_g1

0x18bc,	// (0x0004cd39) cam6_pano_pane_g2

0x2233,	// (0x0004d6b0) cam6_pano_pane_g3

0x223c,	// (0x0004d6b9) cam6_pano_pane_g4

0xebeb,	// (0x0005a068) cam6_pano_pane_g5

0x2245,	// (0x0004d6c2) cam6_pano_pane_g6

0x224d,	// (0x0004d6ca) cam6_pano_pane_g7

0x2255,	// (0x0004d6d2) cam6_pano_pane_g8

0x225e,	// (0x0004d6db) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0005b27f) cam6_pano_pane_g

0x026b,	// (0x0004b6e8) main_browser_tag_pane

0x2027,	// (0x0004d4a4) grid_navstr_albumart_pane

0x2267,	// (0x0004d6e4) cell_navstr_albumart_pane_ParamLimits

0x2267,	// (0x0004d6e4) cell_navstr_albumart_pane

0x3ea0,	// (0x0004f31d) cell_navstr_albumart_pane_g1

0xe031,	// (0x000594ae) cell_navstr_albumart_pane_g2

0xe041,	// (0x000594be) cell_navstr_albumart_pane_g3

0xe039,	// (0x000594b6) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0005b292) cell_navstr_albumart_pane_g

0xcf56,	// (0x000583d3) bt_list_pane_ParamLimits

0xcf56,	// (0x000583d3) bt_list_pane

0xcf6b,	// (0x000583e8) bt_list_pane_t1

0xcf7a,	// (0x000583f7) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0005b29b) bt_list_pane_t

0x026b,	// (0x0004b6e8) main_cale_prevew_pane

0xcf89,	// (0x00058406) popup_cale_preview_window_ParamLimits

0xcf89,	// (0x00058406) popup_cale_preview_window

0x498f,	// (0x0004fe0c) bg_popup_preview_window_pane_cp05_ParamLimits

0x498f,	// (0x0004fe0c) bg_popup_preview_window_pane_cp05

0x227e,	// (0x0004d6fb) list_cale_preview_pane_ParamLimits

0x227e,	// (0x0004d6fb) list_cale_preview_pane

0xcf9e,	// (0x0005841b) list_double_cale_preview_pane_ParamLimits

0xcf9e,	// (0x0005841b) list_double_cale_preview_pane

0xcfaf,	// (0x0005842c) list_single_cale_preview_pane_ParamLimits

0xcfaf,	// (0x0005842c) list_single_cale_preview_pane

0xcfc3,	// (0x00058440) list_single_cale_preview_pane_g1

0xcfcb,	// (0x00058448) list_single_cale_preview_pane_t1_ParamLimits

0xcfcb,	// (0x00058448) list_single_cale_preview_pane_t1

0x228a,	// (0x0004d707) list_double_cale_preview_pane_g1

0x2292,	// (0x0004d70f) list_double_cale_preview_pane_t1_ParamLimits

0x2292,	// (0x0004d70f) list_double_cale_preview_pane_t1

0xcfe0,	// (0x0005845d) list_double_cale_preview_pane_t2_ParamLimits

0xcfe0,	// (0x0005845d) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0005b2a0) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0005b2a0) list_double_cale_preview_pane_t

0x026b,	// (0x0004b6e8) main_ezdial_pane

0x498f,	// (0x0004fe0c) main_sp_fs_email_pane_ParamLimits

0xc578,	// (0x000579f5) cmail_ddmenu_btn01_pane_ParamLimits

0xc578,	// (0x000579f5) cmail_ddmenu_btn01_pane

0xc595,	// (0x00057a12) cmail_ddmenu_btn02_pane_ParamLimits

0xc595,	// (0x00057a12) cmail_ddmenu_btn02_pane

0xc5b3,	// (0x00057a30) cmail_ddmenu_btn03_pane_ParamLimits

0xc5b3,	// (0x00057a30) cmail_ddmenu_btn03_pane

0xc657,	// (0x00057ad4) main_sp_fs_ctrlbar_pane_ParamLimits

0xc66b,	// (0x00057ae8) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcbd2,	// (0x0005804f) list_cmail_body_pane_ParamLimits

0x1f57,	// (0x0004d3d4) bg_button_pane_cp12

0x1f6c,	// (0x0004d3e9) list_single_cmail_header_detail_pane_g3_ParamLimits

0x1f6c,	// (0x0004d3e9) list_single_cmail_header_detail_pane_g3

0x1f79,	// (0x0004d3f6) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1f79,	// (0x0004d3f6) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0005b223) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0005b223) list_single_cmail_header_detail_pane_t

0x208f,	// (0x0004d50c) phacti_term_pane_t2_ParamLimits

0x208f,	// (0x0004d50c) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0005b22d) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0005b22d) phacti_term_pane_t

0x22a7,	// (0x0004d724) aid_size_list_single_double

0xcff8,	// (0x00058475) popup_ezdial_listscroll_window

0xd011,	// (0x0005848e) popup_number_entry_window_cp01

0x3311,	// (0x0004e78e) bg_popup_call_pane_cp09

0x22b3,	// (0x0004d730) ezdial_list_pane

0x22bb,	// (0x0004d738) scroll_pane_cp23

0xe45f,	// (0x000598dc) bg_button_pane_cp028_ParamLimits

0xe45f,	// (0x000598dc) bg_button_pane_cp028

0xd01d,	// (0x0005849a) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd01d,	// (0x0005849a) cmail_ddmenu_btn01_pane_g1

0xd02d,	// (0x000584aa) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd02d,	// (0x000584aa) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0005b2a5) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0005b2a5) cmail_ddmenu_btn01_pane_g

0x22c3,	// (0x0004d740) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x22c3,	// (0x0004d740) cmail_ddmenu_btn01_pane_t1

0xe260,	// (0x000596dd) bg_button_pane_cp029_ParamLimits

0xe260,	// (0x000596dd) bg_button_pane_cp029

0xd02d,	// (0x000584aa) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd02d,	// (0x000584aa) cmail_ddmenu_btn02_pane_g1

0xd045,	// (0x000584c2) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd045,	// (0x000584c2) cmail_ddmenu_btn02_pane_t1

0x2886,	// (0x0004dd03) bg_button_pane_cp031_ParamLimits

0x2886,	// (0x0004dd03) bg_button_pane_cp031

0xd02d,	// (0x000584aa) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd02d,	// (0x000584aa) cmail_ddmenu_btn03_pane_g1

0xd045,	// (0x000584c2) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd045,	// (0x000584c2) cmail_ddmenu_btn03_pane_t1

0xa384,	// (0x00055801) cell_dialer2_keypad_pane_t1_ParamLimits

0xa39e,	// (0x0005581b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa39e,	// (0x0005581b) cell_dialer2_keypad_pane_t1_copy1

0xbf70,	// (0x000573ed) ncimui_group_button_pane

0x498f,	// (0x0004fe0c) main_sp_fs_calendar_pane_ParamLimits

0xcbd2,	// (0x0005804f) list_single_cmail_header_caption_pane_ParamLimits

0x20da,	// (0x0004d557) aid_recal_txt_sm_pane

0x026b,	// (0x0004b6e8) mian_recal_day_pane

0x211c,	// (0x0004d599) popup_sp_fs_cale_preview_window_ParamLimits

0x22d8,	// (0x0004d755) list_recal_day_pane

0x231a,	// (0x0004d797) list_single_recal_day_pane_ParamLimits

0x231a,	// (0x0004d797) list_single_recal_day_pane

0x232c,	// (0x0004d7a9) list_single_recal_day_pane_g1_ParamLimits

0x232c,	// (0x0004d7a9) list_single_recal_day_pane_g1

0x2338,	// (0x0004d7b5) list_single_recal_day_pane_g2_ParamLimits

0x2338,	// (0x0004d7b5) list_single_recal_day_pane_g2

0x2344,	// (0x0004d7c1) list_single_recal_day_pane_g3_ParamLimits

0x2344,	// (0x0004d7c1) list_single_recal_day_pane_g3

0xd069,	// (0x000584e6) list_single_recal_day_pane_g4_ParamLimits

0xd069,	// (0x000584e6) list_single_recal_day_pane_g4

0x2350,	// (0x0004d7cd) list_single_recal_day_pane_g5_ParamLimits

0x2350,	// (0x0004d7cd) list_single_recal_day_pane_g5

0xd07d,	// (0x000584fa) list_single_recal_day_pane_g6_ParamLimits

0xd07d,	// (0x000584fa) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0005b2b4) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0005b2b4) list_single_recal_day_pane_g

0x2364,	// (0x0004d7e1) list_single_recal_day_pane_t1

0xd08c,	// (0x00058509) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0005b2bf) list_single_recal_day_pane_t

0xd0a1,	// (0x0005851e) ncimui_query_button_pane_ParamLimits

0xd0a1,	// (0x0005851e) ncimui_query_button_pane

0xd0b1,	// (0x0005852e) ncimui_query_button_pane_t1_ParamLimits

0xd0b1,	// (0x0005852e) ncimui_query_button_pane_t1

0x2376,	// (0x0004d7f3) ncimui_query_button_pane_t2_ParamLimits

0x2376,	// (0x0004d7f3) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0005b2c4) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0005b2c4) ncimui_query_button_pane_t

0xd0c4,	// (0x00058541) query_button_pane_ParamLimits

0xd0c4,	// (0x00058541) query_button_pane

0x026b,	// (0x0004b6e8) bg_button_pane_cp0028

0x2389,	// (0x0004d806) query_button_pane_t1

0x8937,	// (0x00053db4) main_tport_pane_ParamLimits

0xcb1e,	// (0x00057f9b) bg_popup_window_pane_cp01_ParamLimits

0xcb1e,	// (0x00057f9b) bg_popup_window_pane_cp01

0xcb2a,	// (0x00057fa7) heading_pane_cp08_ParamLimits

0xcb2a,	// (0x00057fa7) heading_pane_cp08

0xcb36,	// (0x00057fb3) heading_pane_cp07_ParamLimits

0xcb36,	// (0x00057fb3) heading_pane_cp07

0x1f07,	// (0x0004d384) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0005b210) cell_tport_appsw_pane_g

0x81b2,	// (0x0005362f) input_candi_list_open_g1

0x3777,	// (0x0004ebf4) list_cale_time_pane_g6_ParamLimits

0x3777,	// (0x0004ebf4) list_cale_time_pane_g6

0x9314,	// (0x00054791) aid_size_touch_calib_1_ParamLimits

0x9314,	// (0x00054791) aid_size_touch_calib_1

0x9320,	// (0x0005479d) aid_size_touch_calib_2_ParamLimits

0x9320,	// (0x0005479d) aid_size_touch_calib_2

0x932c,	// (0x000547a9) aid_size_touch_calib_3_ParamLimits

0x932c,	// (0x000547a9) aid_size_touch_calib_3

0x933a,	// (0x000547b7) aid_size_touch_calib_4_ParamLimits

0x933a,	// (0x000547b7) aid_size_touch_calib_4

0x9348,	// (0x000547c5) main_touch_calib_button_group_pane_ParamLimits

0x9348,	// (0x000547c5) main_touch_calib_button_group_pane

0x9356,	// (0x000547d3) main_touch_calib_pane_g1_ParamLimits

0x9362,	// (0x000547df) main_touch_calib_pane_g2_ParamLimits

0x936e,	// (0x000547eb) main_touch_calib_pane_g3_ParamLimits

0x937a,	// (0x000547f7) main_touch_calib_pane_g4_ParamLimits

0xf749,	// (0x0005abc6) main_touch_calib_pane_g_ParamLimits

0x9386,	// (0x00054803) main_touch_calib_pane_t1_ParamLimits

0x939b,	// (0x00054818) main_touch_calib_pane_t2_ParamLimits

0x93b0,	// (0x0005482d) main_touch_calib_pane_t3_ParamLimits

0x93c2,	// (0x0005483f) main_touch_calib_pane_t4_ParamLimits

0x93d4,	// (0x00054851) main_touch_calib_pane_t5_ParamLimits

0xf752,	// (0x0005abcf) main_touch_calib_pane_t_ParamLimits

0xe9a1,	// (0x00059e1e) list_single_fp_cale_pane_g3_ParamLimits

0xe9a1,	// (0x00059e1e) list_single_fp_cale_pane_g3

0x891b,	// (0x00053d98) bg_button_pane_cp012_ParamLimits

0x891b,	// (0x00053d98) bg_vkb2_func_pane_cp03_ParamLimits

0xb115,	// (0x00056592) cell_vitu2_function_top_pane_g1_ParamLimits

0x891b,	// (0x00053d98) bg_vkb2_func_pane_cp04_ParamLimits

0xbefc,	// (0x00057379) main_ncimui_button_group_pane_ParamLimits

0xbefc,	// (0x00057379) main_ncimui_button_group_pane

0xbf5e,	// (0x000573db) main_ncimui_pane_t3_ParamLimits

0xbf5e,	// (0x000573db) main_ncimui_pane_t3

0x203d,	// (0x0004d4ba) phacti_button_group_pane

0x22a7,	// (0x0004d724) aid_size_list_single_double_ParamLimits

0xcff8,	// (0x00058475) popup_ezdial_listscroll_window_ParamLimits

0xd011,	// (0x0005848e) popup_number_entry_window_cp01_ParamLimits

0xd0d1,	// (0x0005854e) phacti_button_pane_ParamLimits

0xd0d1,	// (0x0005854e) phacti_button_pane

0x026b,	// (0x0004b6e8) bg_button_pane_cp14

0x2397,	// (0x0004d814) phacti_button_pane_t1

0xd0e0,	// (0x0005855d) main_touch_calib_button_pane_ParamLimits

0xd0e0,	// (0x0005855d) main_touch_calib_button_pane

0x3142,	// (0x0004e5bf) bg_button_pane_cp18_ParamLimits

0x3142,	// (0x0004e5bf) bg_button_pane_cp18

0xd0f1,	// (0x0005856e) main_touch_calib_button_pane_t1_ParamLimits

0xd0f1,	// (0x0005856e) main_touch_calib_button_pane_t1

0xd107,	// (0x00058584) main_touch_calib_button_pane_t2_ParamLimits

0xd107,	// (0x00058584) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0005b2c9) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0005b2c9) main_touch_calib_button_pane_t

0x026b,	// (0x0004b6e8) cell_ncimui_button_pane

0x026b,	// (0x0004b6e8) bg_button_pane_cp032

0x23a5,	// (0x0004d822) cell_ncimui_button_pane_t1

0xa3f0,	// (0x0005586d) image3_infobar_pane_ParamLimits

0xa3f0,	// (0x0005586d) image3_infobar_pane

0xc2a7,	// (0x00057724) fs_bigclock_status_pane_ParamLimits

0xc2a7,	// (0x00057724) fs_bigclock_status_pane

0xc2b4,	// (0x00057731) main_fs_bigclock_clock_pane_ParamLimits

0xc2b4,	// (0x00057731) main_fs_bigclock_clock_pane

0xc2cc,	// (0x00057749) main_fs_bigclock_indi_pane_ParamLimits

0xc2cc,	// (0x00057749) main_fs_bigclock_indi_pane

0xc2ec,	// (0x00057769) main_fs_bigclock_swipe_pane_ParamLimits

0xc2ec,	// (0x00057769) main_fs_bigclock_swipe_pane

0x026b,	// (0x0004b6e8) main_fs_clock_dumped_data

0x19c9,	// (0x0004ce46) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x19c9,	// (0x0004ce46) list_single_fs_bigclock_indicator_pane_g1

0x19e3,	// (0x0004ce60) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x19e3,	// (0x0004ce60) list_single_fs_bigclock_indicator_pane_g2

0x19fd,	// (0x0004ce7a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x19fd,	// (0x0004ce7a) list_single_fs_bigclock_indicator_pane_g3

0x1a17,	// (0x0004ce94) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x1a17,	// (0x0004ce94) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc70,	// (0x0005b0ed) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc70,	// (0x0005b0ed) list_single_fs_bigclock_indicator_pane_g

0x1a40,	// (0x0004cebd) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x1a40,	// (0x0004cebd) list_single_fs_bigclock_indicator_pane_t1

0x1a68,	// (0x0004cee5) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x1a68,	// (0x0004cee5) list_single_fs_bigclock_indicator_pane_t2

0x1a90,	// (0x0004cf0d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x1a90,	// (0x0004cf0d) list_single_fs_bigclock_indicator_pane_t3

0x1ab8,	// (0x0004cf35) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x1ab8,	// (0x0004cf35) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7b,	// (0x0005b0f8) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7b,	// (0x0005b0f8) list_single_fs_bigclock_indicator_pane_t

0x23b3,	// (0x0004d830) image3_infobar_fav_pane_ParamLimits

0x23b3,	// (0x0004d830) image3_infobar_fav_pane

0x23c3,	// (0x0004d840) image3_infobar_loc_pane_ParamLimits

0x23c3,	// (0x0004d840) image3_infobar_loc_pane

0x23d7,	// (0x0004d854) image3_infobar_time_pane_ParamLimits

0x23d7,	// (0x0004d854) image3_infobar_time_pane

0xe672,	// (0x00059aef) image3_infobar_time_pane_g1

0x23e7,	// (0x0004d864) image3_infobar_time_pane_t1

0xe672,	// (0x00059aef) image3_infobar_loc_pane_g1

0x23f5,	// (0x0004d872) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0005b2ce) image3_infobar_loc_pane_g

0x23fd,	// (0x0004d87a) image3_infobar_loc_pane_t1

0xe672,	// (0x00059aef) image3_infobar_fav_pane_g1

0x240b,	// (0x0004d888) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0005b2d3) image3_infobar_fav_pane_g

0x2413,	// (0x0004d890) fs_bigclock_status_battery_pane

0x241c,	// (0x0004d899) fs_bigclock_status_signal_pane

0x2425,	// (0x0004d8a2) fs_bigclock_status_title_pane

0x242e,	// (0x0004d8ab) fs_bigclock_status_signal_pane_g1

0x2437,	// (0x0004d8b4) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0005b2d8) fs_bigclock_status_signal_pane_g

0x243f,	// (0x0004d8bc) fs_bigclock_status_battery_pane_g1

0x2448,	// (0x0004d8c5) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0005b2dd) fs_bigclock_status_battery_pane_g

0x2450,	// (0x0004d8cd) fs_bigclock_status_title_pane_t1

0xe906,	// (0x00059d83) main_fs_bigclock_clock_pane_g1

0xd125,	// (0x000585a2) main_fs_bigclock_clock_pane_g2

0xd132,	// (0x000585af) main_fs_bigclock_clock_pane_g3

0xd132,	// (0x000585af) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0005b2e2) main_fs_bigclock_clock_pane_g

0xd13e,	// (0x000585bb) main_fs_bigclock_clock_pane_t1

0xd150,	// (0x000585cd) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0005b2eb) main_fs_bigclock_clock_pane_t

0x245e,	// (0x0004d8db) list_single_fs_bigclock_indicator_pane_ParamLimits

0x245e,	// (0x0004d8db) list_single_fs_bigclock_indicator_pane

0x246f,	// (0x0004d8ec) list_single_fs_bigclock_pane_ParamLimits

0x246f,	// (0x0004d8ec) list_single_fs_bigclock_pane

0x2495,	// (0x0004d912) main_fs_bigclock_indicator_pane_t1

0x24a4,	// (0x0004d921) list_single_fs_bigclock_pane_g1

0x24ac,	// (0x0004d929) list_single_fs_bigclock_pane_t1

0xe672,	// (0x00059aef) main_fs_bigclock_swipe_pane_g1

0x24ec,	// (0x0004d969) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0005b2fc) main_fs_bigclock_swipe_pane_g

0x24f4,	// (0x0004d971) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x24f4,	// (0x0004d971) main_fs_bigclock_swipe_pane_t1

0x7a9b,	// (0x00052f18) call_type_pane_ParamLimits

0x026b,	// (0x0004b6e8) main_btmg_pane

0xce19,	// (0x00058296) list_single_cale_mrui_row_pane_g2_ParamLimits

0xce19,	// (0x00058296) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0005b26f) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0005b26f) list_single_cale_mrui_row_pane_g

0x2301,	// (0x0004d77e) list_recal_vselct_arw_lo_pane

0x2309,	// (0x0004d786) list_recal_vselct_arw_up_pane

0x2311,	// (0x0004d78e) list_recal_vselct_pane

0x2511,	// (0x0004d98e) btmg_button_pane

0xd1a5,	// (0x00058622) main_btmg_pane_g1

0x026b,	// (0x0004b6e8) bg_button_pane_cp044

0x2519,	// (0x0004d996) btmg_button_pane_t1

0xe24c,	// (0x000596c9) aid_listscroll_gen

0x498f,	// (0x0004fe0c) main_cntbar_detail_pane

0x1f2d,	// (0x0004d3aa) list_cmail_folder_pane

0x1f3d,	// (0x0004d3ba) sp_fs_scroll_pane_cp03_ParamLimits

0xcbd2,	// (0x0005804f) list_single_fs_dyc_pane_cp01_ParamLimits

0xcbd2,	// (0x0005804f) list_single_fs_dyc_pane_cp01

0x2527,	// (0x0004d9a4) aid_size_cmail_indent

0x2530,	// (0x0004d9ad) list_single_dyc_row_pane_cp01

0xd1c7,	// (0x00058644) cntbar_detail_list_pane_ParamLimits

0xd1c7,	// (0x00058644) cntbar_detail_list_pane

0xd1fd,	// (0x0005867a) main_cntbar_detail_cont_pane_ParamLimits

0xd1fd,	// (0x0005867a) main_cntbar_detail_cont_pane

0xd209,	// (0x00058686) scroll_pane_cp032_ParamLimits

0xd209,	// (0x00058686) scroll_pane_cp032

0xd215,	// (0x00058692) cntbar_detail_list_event_pane_ParamLimits

0xd215,	// (0x00058692) cntbar_detail_list_event_pane

0xd1d3,	// (0x00058650) cntbar_detail_list_shct_pane

0x2539,	// (0x0004d9b6) aid_list_gen

0x3247,	// (0x0004e6c4) aid_scroll

0x1063,	// (0x0004c4e0) aid_size_touch_scroll_bar

0x108e,	// (0x0004c50b) aid_list_double

0x10c9,	// (0x0004c546) aid_list_single

0x10c9,	// (0x0004c546) aid_list_single_lg

0xd225,	// (0x000586a2) aid_list_z_g_a_sm

0xd22d,	// (0x000586aa) aid_list_z_g_d

0xd235,	// (0x000586b2) aid_txt_z_prm

0x2542,	// (0x0004d9bf) aid_txt_z_prm_cp01

0x2550,	// (0x0004d9cd) aid_txt_z_sec

0xd243,	// (0x000586c0) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd243,	// (0x000586c0) main_cntbar_detail_cont_pane_g1

0xd250,	// (0x000586cd) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd250,	// (0x000586cd) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0005b301) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0005b301) main_cntbar_detail_cont_pane_g

0x255e,	// (0x0004d9db) main_cntbar_detail_cont_pane_t1

0x256c,	// (0x0004d9e9) main_cntbar_detail_cont_pane_t2

0x257a,	// (0x0004d9f7) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0005b306) main_cntbar_detail_cont_pane_t

0xd25c,	// (0x000586d9) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd25c,	// (0x000586d9) cell_cntbar_detail_list_shct_pane

0x2588,	// (0x0004da05) cntbar_detail_list_shct_pane_g1

0x2591,	// (0x0004da0e) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0005b30d) cntbar_detail_list_shct_pane_g

0xd26e,	// (0x000586eb) cntbar_detail_list_event_pane_g1_ParamLimits

0xd26e,	// (0x000586eb) cntbar_detail_list_event_pane_g1

0xd27a,	// (0x000586f7) cntbar_detail_list_event_pane_g2_ParamLimits

0xd27a,	// (0x000586f7) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0005b312) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0005b312) cntbar_detail_list_event_pane_g

0xd2e6,	// (0x00058763) cntbar_detail_list_event_pane_t1_ParamLimits

0xd2e6,	// (0x00058763) cntbar_detail_list_event_pane_t1

0xd2fb,	// (0x00058778) cntbar_detail_list_event_pane_t2_ParamLimits

0xd2fb,	// (0x00058778) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0005b31f) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0005b31f) cntbar_detail_list_event_pane_t

0xe672,	// (0x00059aef) cell_cntbar_detail_list_shct_pane_g1

0x3d07,	// (0x0004f184) navi_pane_mv_g3

0x498f,	// (0x0004fe0c) main_cntbar_detail_pane_ParamLimits

0x026b,	// (0x0004b6e8) main_notif_wgt_pane

0xa0c6,	// (0x00055543) aid_tch_main_mp4_pane_g4

0xa305,	// (0x00055782) popup_slider_window_cp02

0x22f7,	// (0x0004d774) list_recal_day_event_pane

0xd1ad,	// (0x0005862a) cntbar_detail_btn_pane_ParamLimits

0xd1ad,	// (0x0005862a) cntbar_detail_btn_pane

0xd1b9,	// (0x00058636) cntbar_detail_btn_pane_cp01_ParamLimits

0xd1b9,	// (0x00058636) cntbar_detail_btn_pane_cp01

0xd1d3,	// (0x00058650) cntbar_detail_list_shct_pane_ParamLimits

0xd1df,	// (0x0005865c) cntbar_detail_pane_g1_ParamLimits

0xd1df,	// (0x0005865c) cntbar_detail_pane_g1

0xd1eb,	// (0x00058668) cntbar_detail_pane_t1_ParamLimits

0xd1eb,	// (0x00058668) cntbar_detail_pane_t1

0xd286,	// (0x00058703) cntbar_detail_list_event_pane_g3_ParamLimits

0xd286,	// (0x00058703) cntbar_detail_list_event_pane_g3

0xd29e,	// (0x0005871b) cntbar_detail_list_event_pane_g4_ParamLimits

0xd29e,	// (0x0005871b) cntbar_detail_list_event_pane_g4

0xd2b6,	// (0x00058733) cntbar_detail_list_event_pane_g5_ParamLimits

0xd2b6,	// (0x00058733) cntbar_detail_list_event_pane_g5

0xd2ce,	// (0x0005874b) cntbar_detail_list_event_pane_g6_ParamLimits

0xd2ce,	// (0x0005874b) cntbar_detail_list_event_pane_g6

0xd310,	// (0x0005878d) cntbar_detail_list_event_pane_t3_ParamLimits

0xd310,	// (0x0005878d) cntbar_detail_list_event_pane_t3

0xd322,	// (0x0005879f) popup_notif_wgt_window_ParamLimits

0xd322,	// (0x0005879f) popup_notif_wgt_window

0xd330,	// (0x000587ad) popup_submenu_window_cp01_ParamLimits

0xd330,	// (0x000587ad) popup_submenu_window_cp01

0x3311,	// (0x0004e78e) bg_popup_window_pane_cp10

0x259a,	// (0x0004da17) listscroll_notif_wgt_pane

0x25ab,	// (0x0004da28) list_notif_wgt_window

0x25b4,	// (0x0004da31) scroll_pane_cp033

0xd33c,	// (0x000587b9) list_notif_wgt_row_pane_ParamLimits

0xd33c,	// (0x000587b9) list_notif_wgt_row_pane

0x25bd,	// (0x0004da3a) aid_size_list_notif_wgt_del

0x25ca,	// (0x0004da47) list_notif_wgt_row_pane_g1

0x25d6,	// (0x0004da53) list_notif_wgt_row_pane_g2

0x25ea,	// (0x0004da67) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0005b326) list_notif_wgt_row_pane_g

0x25f7,	// (0x0004da74) list_notif_wgt_row_pane_t1

0x260d,	// (0x0004da8a) list_notif_wgt_row_pane_t2

0x261f,	// (0x0004da9c) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0005b32d) list_notif_wgt_row_pane_t

0x0d5d,	// (0x0004c1da) list_recal_day_event_pane_g1

0x2631,	// (0x0004daae) list_recal_day_event_pane_t1

0x026b,	// (0x0004b6e8) bg_button_pane_cp045

0xd34e,	// (0x000587cb) cntbar_detail_btn_pane_t1

0xe260,	// (0x000596dd) main_callh_pane_ParamLimits

0xe260,	// (0x000596dd) main_callh_pane

0x026b,	// (0x0004b6e8) main_coverflow0_pane

0x026b,	// (0x0004b6e8) main_wgtman_pane

0xc2fe,	// (0x0005777b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc2fe,	// (0x0005777b) main_fs_bigclock_unlock_btn_pane

0x1eff,	// (0x0004d37c) bg_button_pane_cp16

0x1f0f,	// (0x0004d38c) cell_tport_appsw_pane_g3

0xd35c,	// (0x000587d9) cf0_flow_pane_ParamLimits

0xd35c,	// (0x000587d9) cf0_flow_pane

0x2640,	// (0x0004dabd) listscroll_cf0_pane

0x2649,	// (0x0004dac6) main_cf0_pane_g1

0xd36b,	// (0x000587e8) main_cf0_pane_t1_ParamLimits

0xd36b,	// (0x000587e8) main_cf0_pane_t1

0xd37d,	// (0x000587fa) main_cf0_pane_t2_ParamLimits

0xd37d,	// (0x000587fa) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0005b339) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0005b339) main_cf0_pane_t

0x265b,	// (0x0004dad8) scroll_pane_cp11

0xd38f,	// (0x0005880c) cf0_flow_pane_g1

0xd397,	// (0x00058814) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0005b33e) cf0_flow_pane_g

0xd39f,	// (0x0005881c) cf0_flow_pane_t1

0x026b,	// (0x0004b6e8) main_call6_pane

0x026b,	// (0x0004b6e8) main_calllock_pane

0xd3ad,	// (0x0005882a) call6_btn_grp_pane_ParamLimits

0xd3ad,	// (0x0005882a) call6_btn_grp_pane

0xd3ba,	// (0x00058837) call6_pane_g1_ParamLimits

0xd3ba,	// (0x00058837) call6_pane_g1

0xd3c7,	// (0x00058844) popup_call6_1st_window_ParamLimits

0xd3c7,	// (0x00058844) popup_call6_1st_window

0xd3d3,	// (0x00058850) popup_call6_2nd_window_ParamLimits

0xd3d3,	// (0x00058850) popup_call6_2nd_window

0xd3df,	// (0x0005885c) cell_call6_btn_pane_ParamLimits

0xd3df,	// (0x0005885c) cell_call6_btn_pane

0x3311,	// (0x0004e78e) bg_popup_call2_in_pane_cp03

0x2664,	// (0x0004dae1) popup_call6_1st_window_g1

0x266c,	// (0x0004dae9) popup_call6_1st_window_g2

0x2674,	// (0x0004daf1) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0005b343) popup_call6_1st_window_g

0x267c,	// (0x0004daf9) popup_call6_1st_window_t1

0x268b,	// (0x0004db08) popup_call6_1st_window_t2

0x2699,	// (0x0004db16) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0005b34a) popup_call6_1st_window_t

0x3311,	// (0x0004e78e) bg_popup_call2_in_pane_cp04

0x2664,	// (0x0004dae1) popup_call6_2nd_window_g1

0x266c,	// (0x0004dae9) popup_call6_2nd_window_g2

0x2674,	// (0x0004daf1) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0005b343) popup_call6_2nd_window_g

0x267c,	// (0x0004daf9) popup_call6_2nd_window_t1

0x5c91,	// (0x0005110e) bg_button_pane_cp15

0xd3ee,	// (0x0005886b) cell_call6_btn_pane_g1

0xd3f7,	// (0x00058874) cell_call6_btn_pane_t1

0xd406,	// (0x00058883) listscroll_wgtman_pane_ParamLimits

0xd406,	// (0x00058883) listscroll_wgtman_pane

0xd422,	// (0x0005889f) wgtman_btn_pane_ParamLimits

0xd422,	// (0x0005889f) wgtman_btn_pane

0x3b5e,	// (0x0004efdb) aid_scroll_copy1

0x26a7,	// (0x0004db24) list_wgtman_pane

0xd455,	// (0x000588d2) wgtman_btn_pane_g1_ParamLimits

0xd455,	// (0x000588d2) wgtman_btn_pane_g1

0xd47d,	// (0x000588fa) wgtman_btn_pane_t1_ParamLimits

0xd47d,	// (0x000588fa) wgtman_btn_pane_t1

0x26b1,	// (0x0004db2e) wgtman_btn_pane_t2_ParamLimits

0x26b1,	// (0x0004db2e) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0005b351) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0005b351) wgtman_btn_pane_t

0xd4b4,	// (0x00058931) listrow_wgtman_pane_ParamLimits

0xd4b4,	// (0x00058931) listrow_wgtman_pane

0xd4c5,	// (0x00058942) listrow_wgtman_pane_g1

0xd4d2,	// (0x0005894f) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0005b356) listrow_wgtman_pane_g

0xd4ea,	// (0x00058967) listrow_wgtman_pane_t1

0xd502,	// (0x0005897f) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0005b35b) listrow_wgtman_pane_t

0xd528,	// (0x000589a5) wait_bar_pane_cp09

0x26c8,	// (0x0004db45) main_calllock_btn_pane

0x26d0,	// (0x0004db4d) main_calllock_pane_g1

0x026b,	// (0x0004b6e8) bg_button_pane_cp17

0x26d9,	// (0x0004db56) main_calllock_btn_pane_g1

0x26e2,	// (0x0004db5f) main_calllock_btn_pane_t1

0x026b,	// (0x0004b6e8) main_dialer3_pane

0x026b,	// (0x0004b6e8) main_fmrd2_pane

0xe672,	// (0x00059aef) main_fs_bigclock_unlock_btn_pane_g1

0x26f9,	// (0x0004db76) main_fs_bigclock_unlock_btn_pane_t1

0xd53a,	// (0x000589b7) area_fmrd2_info_pane_ParamLimits

0xd53a,	// (0x000589b7) area_fmrd2_info_pane

0xd546,	// (0x000589c3) area_fmrd2_visual_pane_ParamLimits

0xd546,	// (0x000589c3) area_fmrd2_visual_pane

0xd554,	// (0x000589d1) fmrd2_indi_pane_ParamLimits

0xd554,	// (0x000589d1) fmrd2_indi_pane

0xd561,	// (0x000589de) area_fmrd2_visual_pane_g1

0xd569,	// (0x000589e6) area_fmrd2_visual_pane_t1

0xd577,	// (0x000589f4) area_fmrd2_visual_pane_t2

0xd585,	// (0x00058a02) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0005b365) area_fmrd2_visual_pane_t

0xd593,	// (0x00058a10) area_fmrd2_info_pane_g1

0xd59b,	// (0x00058a18) area_fmrd2_info_pane_t1

0xd5a9,	// (0x00058a26) area_fmrd2_info_pane_t2

0xd5b7,	// (0x00058a34) area_fmrd2_info_pane_t3

0xd5c5,	// (0x00058a42) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0005b36c) area_fmrd2_info_pane_t

0xd5d3,	// (0x00058a50) fmrd2_indi_pane_t1

0xd5e1,	// (0x00058a5e) fmrd2_indi_pane_t2

0xd5ef,	// (0x00058a6c) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0005b375) fmrd2_indi_pane_t

0x1a26,	// (0x0004cea3) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x1a26,	// (0x0004cea3) list_single_fs_bigclock_indicator_pane_g5

0x1ad4,	// (0x0004cf51) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x1ad4,	// (0x0004cf51) list_single_fs_bigclock_indicator_pane_t5

0xccfe,	// (0x0005817b) aid_cell_bcale_month_pane_ParamLimits

0xccfe,	// (0x0005817b) aid_cell_bcale_month_pane

0xcd1c,	// (0x00058199) bcale_month_pane_ParamLimits

0xcd1c,	// (0x00058199) bcale_month_pane

0xcd32,	// (0x000581af) bcale_preview_pane_ParamLimits

0xcd32,	// (0x000581af) bcale_preview_pane

0x24ac,	// (0x0004d929) list_single_fs_bigclock_pane_t1_ParamLimits

0x24c8,	// (0x0004d945) list_single_fs_bigclock_pane_t2_ParamLimits

0x24c8,	// (0x0004d945) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0005b2f7) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0005b2f7) list_single_fs_bigclock_pane_t

0x26f1,	// (0x0004db6e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0005b360) main_fs_bigclock_unlock_btn_pane_g

0xd5fd,	// (0x00058a7a) aid_dia3_key_size_ParamLimits

0xd5fd,	// (0x00058a7a) aid_dia3_key_size

0xd609,	// (0x00058a86) aid_dia3_listrow_size_ParamLimits

0xd609,	// (0x00058a86) aid_dia3_listrow_size

0xd617,	// (0x00058a94) dia3_keypad_fun_pane_ParamLimits

0xd617,	// (0x00058a94) dia3_keypad_fun_pane

0xd623,	// (0x00058aa0) dia3_keypad_num_pane_ParamLimits

0xd623,	// (0x00058aa0) dia3_keypad_num_pane

0xd62f,	// (0x00058aac) dia3_listscroll_pane_ParamLimits

0xd62f,	// (0x00058aac) dia3_listscroll_pane

0xd63b,	// (0x00058ab8) dia3_numentry_pane_ParamLimits

0xd63b,	// (0x00058ab8) dia3_numentry_pane

0x2707,	// (0x0004db84) dia3_list_pane

0x2710,	// (0x0004db8d) scroll_pane_cp12

0x026b,	// (0x0004b6e8) bg_dia3_numentry_pane

0xd647,	// (0x00058ac4) dia3_numentry_pane_t1

0xd656,	// (0x00058ad3) cell_dia3_key_num_pane

0xd65e,	// (0x00058adb) cell_dia3_key0_fun_pane_ParamLimits

0xd65e,	// (0x00058adb) cell_dia3_key0_fun_pane

0xd66b,	// (0x00058ae8) cell_dia3_key1_fun_pane_ParamLimits

0xd66b,	// (0x00058ae8) cell_dia3_key1_fun_pane

0xd678,	// (0x00058af5) dia3_listrow_pane

0x1727,	// (0x0004cba4) bg_dia3_numentry_pane_g1

0x026b,	// (0x0004b6e8) bg_button_pane_cp21

0x2719,	// (0x0004db96) cell_dia3_key_num_pane_t1

0x2727,	// (0x0004dba4) cell_dia3_key_num_pane_t2

0x2736,	// (0x0004dbb3) cell_dia3_key_num_pane_t3

0x2745,	// (0x0004dbc2) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0005b37c) cell_dia3_key_num_pane_t

0x026b,	// (0x0004b6e8) bg_button_pane_cp19

0x2754,	// (0x0004dbd1) cell_dia3_key0_fun_pane_g1

0x026b,	// (0x0004b6e8) bg_button_pane_cp20

0xd685,	// (0x00058b02) cell_dia3_key1_fun_pane_g1

0xd68d,	// (0x00058b0a) area_left_week_number_pane

0xd69e,	// (0x00058b1b) area_top_day_name_pane

0xd6aa,	// (0x00058b27) frame_month_view_pane

0x275c,	// (0x0004dbd9) grid_month_view_pane

0xd6bb,	// (0x00058b38) cell_top_day_name_pane_ParamLimits

0xd6bb,	// (0x00058b38) cell_top_day_name_pane

0xd6d1,	// (0x00058b4e) cell_area_left_week_number_pane_ParamLimits

0xd6d1,	// (0x00058b4e) cell_area_left_week_number_pane

0xd6f0,	// (0x00058b6d) cell_month_view_pane_ParamLimits

0xd6f0,	// (0x00058b6d) cell_month_view_pane

0x276a,	// (0x0004dbe7) frm_month_g1

0xd716,	// (0x00058b93) frm_month_g2

0xd725,	// (0x00058ba2) frm_month_g3

0xd734,	// (0x00058bb1) frm_month_g4

0xd743,	// (0x00058bc0) frm_month_g5

0xd752,	// (0x00058bcf) frm_month_g6

0xd761,	// (0x00058bde) frm_month_g7

0x2777,	// (0x0004dbf4) frm_month_g8

0xd770,	// (0x00058bed) frm_month_g9

0xd77d,	// (0x00058bfa) frm_month_g10

0xd78a,	// (0x00058c07) frm_month_g11

0xd797,	// (0x00058c14) frm_month_g12

0xd7a4,	// (0x00058c21) frm_month_g13

0xd7b1,	// (0x00058c2e) frm_month_g14

0xd7be,	// (0x00058c3b) frm_month_g15

0xd7cb,	// (0x00058c48) frm_month_g16

0x000f,

0xff08,	// (0x0005b385) frm_month_g

0x2784,	// (0x0004dc01) cell_top_day_name_pane_t1

0xd7d8,	// (0x00058c55) cell_area_left_week_number_pane_g1

0xd7e7,	// (0x00058c64) cell_area_left_week_number_pane_t1

0xe8a1,	// (0x00059d1e) cell_month_view_pane_g1

0xd7fd,	// (0x00058c7a) cell_month_view_pane_t1

0x026b,	// (0x0004b6e8) main_fps_pane

0x1d1a,	// (0x0004d197) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x1d1a,	// (0x0004d197) cmail_ddmenu_btn02_pane_cp1

0x1d36,	// (0x0004d1b3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x1d36,	// (0x0004d1b3) cmail_ddmenu_btn02_pane_cp2

0xd039,	// (0x000584b6) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd039,	// (0x000584b6) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0005b2aa) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0005b2aa) cmail_ddmenu_btn02_pane_g

0xd057,	// (0x000584d4) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd057,	// (0x000584d4) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0005b2af) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0005b2af) cmail_ddmenu_btn02_pane_t

0xd813,	// (0x00058c90) fps_text_pane_ParamLimits

0xd813,	// (0x00058c90) fps_text_pane

0xd820,	// (0x00058c9d) main_fps_pane_g1_ParamLimits

0xd820,	// (0x00058c9d) main_fps_pane_g1

0xd82c,	// (0x00058ca9) wait_bar_pane_cp010_ParamLimits

0xd82c,	// (0x00058ca9) wait_bar_pane_cp010

0xd838,	// (0x00058cb5) fps_text_pane_t1_ParamLimits

0xd838,	// (0x00058cb5) fps_text_pane_t1

0xa6fb,	// (0x00055b78) cam4_image_uncrop_pane_g1

0xa704,	// (0x00055b81) cam4_image_uncrop_pane_g2

0xa70d,	// (0x00055b8a) cam4_image_uncrop_pane_g3

0xa716,	// (0x00055b93) cam4_image_uncrop_pane_g4

0x0003,

0xf8ea,	// (0x0005ad67) cam4_image_uncrop_pane_g

0xd678,	// (0x00058af5) dia3_listrow_pane_ParamLimits

0x026b,	// (0x0004b6e8) main_phob2_pane

0xcb77,	// (0x00057ff4) cell_tport_appsw_pane_cp02_ParamLimits

0xcb77,	// (0x00057ff4) cell_tport_appsw_pane_cp02

0xcb84,	// (0x00058001) cell_tport_appsw_pane_cp03_ParamLimits

0xcb84,	// (0x00058001) cell_tport_appsw_pane_cp03

0x026b,	// (0x0004b6e8) phob2_contact_card_pane

0x026b,	// (0x0004b6e8) phob2_listscroll_pane

0x2797,	// (0x0004dc14) phob2_list_pane

0x279f,	// (0x0004dc1c) scroll_pane_cp034

0xd851,	// (0x00058cce) phob2_cc_data_pane_ParamLimits

0xd851,	// (0x00058cce) phob2_cc_data_pane

0xd869,	// (0x00058ce6) phob2_cc_listscroll_pane_ParamLimits

0xd869,	// (0x00058ce6) phob2_cc_listscroll_pane

0xd881,	// (0x00058cfe) list_double_large_graphic_phob2_pane_ParamLimits

0xd881,	// (0x00058cfe) list_double_large_graphic_phob2_pane

0xd893,	// (0x00058d10) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd893,	// (0x00058d10) list_double_large_graphic_phob2_pane_g1

0xd8a9,	// (0x00058d26) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd8a9,	// (0x00058d26) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0005b3a6) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0005b3a6) list_double_large_graphic_phob2_pane_g

0xd8b5,	// (0x00058d32) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd8b5,	// (0x00058d32) list_double_large_graphic_phob2_pane_t1

0xd8cb,	// (0x00058d48) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd8cb,	// (0x00058d48) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0005b3ab) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0005b3ab) list_double_large_graphic_phob2_pane_t

0x026b,	// (0x0004b6e8) list_highlight_pane_cp024

0xd8e0,	// (0x00058d5d) phob2_cc_button_pane

0xd8e8,	// (0x00058d65) phob2_cc_data_pane_g1_ParamLimits

0xd8e8,	// (0x00058d65) phob2_cc_data_pane_g1

0xd8f4,	// (0x00058d71) phob2_cc_data_pane_g2_ParamLimits

0xd8f4,	// (0x00058d71) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0005b3b0) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0005b3b0) phob2_cc_data_pane_g

0xd900,	// (0x00058d7d) phob2_cc_data_pane_t1_ParamLimits

0xd900,	// (0x00058d7d) phob2_cc_data_pane_t1

0xd912,	// (0x00058d8f) phob2_cc_data_pane_t2_ParamLimits

0xd912,	// (0x00058d8f) phob2_cc_data_pane_t2

0xd924,	// (0x00058da1) phob2_cc_data_pane_t3_ParamLimits

0xd924,	// (0x00058da1) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0005b3b5) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0005b3b5) phob2_cc_data_pane_t

0x27a7,	// (0x0004dc24) phob2_cc_list_pane_ParamLimits

0x27a7,	// (0x0004dc24) phob2_cc_list_pane

0x1644,	// (0x0004cac1) scroll_pane_cp035_ParamLimits

0x1644,	// (0x0004cac1) scroll_pane_cp035

0x498f,	// (0x0004fe0c) bg_button_pane_cp033

0x27b3,	// (0x0004dc30) phob2_cc_button_pane_g1

0x27bf,	// (0x0004dc3c) phob2_cc_button_pane_t1

0x27d4,	// (0x0004dc51) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0005b3bc) phob2_cc_button_pane_t

0xd936,	// (0x00058db3) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd936,	// (0x00058db3) list_double_large_graphic_phob2_cc_pane

0xd97c,	// (0x00058df9) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd97c,	// (0x00058df9) list_double_large_graphic_phob2_cc_pane_g1

0xd98d,	// (0x00058e0a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd98d,	// (0x00058e0a) list_double_large_graphic_phob2_cc_pane_g2

0xd99c,	// (0x00058e19) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd99c,	// (0x00058e19) list_double_large_graphic_phob2_cc_pane_g3

0xd9ab,	// (0x00058e28) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd9ab,	// (0x00058e28) list_double_large_graphic_phob2_cc_pane_g4

0xd9bc,	// (0x00058e39) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd9bc,	// (0x00058e39) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0005b3c1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0005b3c1) list_double_large_graphic_phob2_cc_pane_g

0xd9cb,	// (0x00058e48) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd9cb,	// (0x00058e48) list_double_large_graphic_phob2_cc_pane_t1

0xd9f4,	// (0x00058e71) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd9f4,	// (0x00058e71) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0005b3cc) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0005b3cc) list_double_large_graphic_phob2_cc_pane_t

0x27e6,	// (0x0004dc63) list_highlight_pane_cp025_ParamLimits

0x27e6,	// (0x0004dc63) list_highlight_pane_cp025

0x498f,	// (0x0004fe0c) bg_button_pane_cp033_ParamLimits

0x27b3,	// (0x0004dc30) phob2_cc_button_pane_g1_ParamLimits

0x27bf,	// (0x0004dc3c) phob2_cc_button_pane_t1_ParamLimits

0x27d4,	// (0x0004dc51) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0005b3bc) phob2_cc_button_pane_t_ParamLimits

0x5c89,	// (0x00051106) popup_wgtman_window

0x1747,	// (0x0004cbc4) scroll_pane_cp038

0xd43d,	// (0x000588ba) wgtman_btn_pane_cp_01_ParamLimits

0xd43d,	// (0x000588ba) wgtman_btn_pane_cp_01

0x27f4,	// (0x0004dc71) wgtman_content_pane

0x27fd,	// (0x0004dc7a) wgtman_heading_pane

0x026b,	// (0x0004b6e8) bg_heading_pane_cp02

0x2806,	// (0x0004dc83) wgtman_heading_pane_g1

0x280e,	// (0x0004dc8b) wgtman_heading_pane_t1

0x281c,	// (0x0004dc99) scroll_pane_cp036

0x2824,	// (0x0004dca1) wgtman_list_pane

0x282c,	// (0x0004dca9) wgtman_list_pane_t1_ParamLimits

0x282c,	// (0x0004dca9) wgtman_list_pane_t1

0xa660,	// (0x00055add) cam4_grid_pane

0xb309,	// (0x00056786) bg_button_pane_cp015_ParamLimits

0xb319,	// (0x00056796) bg_button_pane_cp016_ParamLimits

0xb32c,	// (0x000567a9) bg_button_pane_cp017_ParamLimits

0xb37e,	// (0x000567fb) popup_vitu2_query_window_g3_ParamLimits

0xb37e,	// (0x000567fb) popup_vitu2_query_window_g3

0xb431,	// (0x000568ae) popup_vitu2_query_window_t6_ParamLimits

0xb431,	// (0x000568ae) popup_vitu2_query_window_t6

0xb45c,	// (0x000568d9) popup_vitu2_query_window_t7_ParamLimits

0xb45c,	// (0x000568d9) popup_vitu2_query_window_t7

0xf09d,	// (0x0005a51a) cam4_grid_pane_g1

0xf0a6,	// (0x0005a523) cam4_grid_pane_g2

0x2843,	// (0x0004dcc0) cam4_grid_pane_g3

0x284c,	// (0x0004dcc9) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0005b3d1) cam4_grid_pane_g

0x6aae,	// (0x00051f2b) aid_placing_vt_slider_lsc_ParamLimits

0x6d58,	// (0x000521d5) vidtel_button_pane_ParamLimits

0x6d58,	// (0x000521d5) vidtel_button_pane

0x026b,	// (0x0004b6e8) bg_button_pane_cp034

0xda1d,	// (0x00058e9a) vidtel_button_pane_g1

0xda25,	// (0x00058ea2) vidtel_button_pane_t1

0x0d4d,	// (0x0004c1ca) aid_size_vtel_slider_touch

0x1644,	// (0x0004cac1) scroll_pane_cp039

0x1776,	// (0x0004cbf3) ncim_query_button_pane_cp01_ParamLimits

0x1795,	// (0x0004cc12) ncimui_query_pane_g1_ParamLimits

0x498f,	// (0x0004fe0c) input_focus_pane_cp012_ParamLimits

0x17ba,	// (0x0004cc37) ncim_query_entry_pane_t1_ParamLimits

0x1644,	// (0x0004cac1) scroll_pane_cp039_ParamLimits

0x3c22,	// (0x0004f09f) navi_pane_bcale_mc_g1

0x3c2a,	// (0x0004f0a7) navi_pane_bcale_mc_t1

0x1d6a,	// (0x0004d1e7) main_sp_fs_email_pane_g1

0x1d76,	// (0x0004d1f3) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0005b162) main_sp_fs_email_pane_g

0x21f3,	// (0x0004d670) list_single_cale_mrui_row_pane_g3_ParamLimits

0x21f3,	// (0x0004d670) list_single_cale_mrui_row_pane_g3

0xd075,	// (0x000584f2) list_single_recal_day_pane_g5_event_pane

0x235c,	// (0x0004d7d9) list_single_recal_day_pane_g7

0x2855,	// (0x0004dcd2) list_recal_day_event_pane_cp01

0x285e,	// (0x0004dcdb) list_recal_vselct_arw_lo_pane_cp01

0x2866,	// (0x0004dce3) list_recal_vselct_arw_up_pane_cp01

0x286e,	// (0x0004dceb) list_recal_vselct_pane_cp01

0x0d5d,	// (0x0004c1da) list_recal_day_event_pane_cp01_g1

0x2878,	// (0x0004dcf5) list_recal_day_event_pane_cp01_t1

0x2364,	// (0x0004d7e1) list_single_recal_day_pane_t1_ParamLimits

0xd08c,	// (0x00058509) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0005b2bf) list_single_recal_day_pane_t_ParamLimits

0x3079,	// (0x0004e4f6) bg_notes_pane_ParamLimits

0x311c,	// (0x0004e599) list_notes_pane_ParamLimits

0x5f90,	// (0x0005140d) scroll_pane_cp06_ParamLimits

0x3142,	// (0x0004e5bf) main_notes_pane_ParamLimits

0x498f,	// (0x0004fe0c) main_welc_pane

0xda48,	// (0x00058ec5) main_welc_body_pane_ParamLimits

0xda48,	// (0x00058ec5) main_welc_body_pane

0xda61,	// (0x00058ede) main_welc_opti_pane_ParamLimits

0xda61,	// (0x00058ede) main_welc_opti_pane

0xda9a,	// (0x00058f17) main_welc_pane_t1_ParamLimits

0xda9a,	// (0x00058f17) main_welc_pane_t1

0xdaee,	// (0x00058f6b) main_welc_body_row_pane_ParamLimits

0xdaee,	// (0x00058f6b) main_welc_body_row_pane

0x2886,	// (0x0004dd03) main_welc_opti_row_pane_ParamLimits

0x2886,	// (0x0004dd03) main_welc_opti_row_pane

0x2894,	// (0x0004dd11) main_welc_opti_row_pane_g1

0xdb03,	// (0x00058f80) main_welc_opti_row_pane_t1

0x289c,	// (0x0004dd19) main_welc_body_row_pane_t1

0x25a3,	// (0x0004da20) popup_notif_wgt_heading_pane

0x25bd,	// (0x0004da3a) aid_size_list_notif_wgt_del_ParamLimits

0x25ca,	// (0x0004da47) list_notif_wgt_row_pane_g1_ParamLimits

0x25d6,	// (0x0004da53) list_notif_wgt_row_pane_g2_ParamLimits

0x25ea,	// (0x0004da67) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0005b326) list_notif_wgt_row_pane_g_ParamLimits

0x25f7,	// (0x0004da74) list_notif_wgt_row_pane_t1_ParamLimits

0x260d,	// (0x0004da8a) list_notif_wgt_row_pane_t2_ParamLimits

0x261f,	// (0x0004da9c) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0005b32d) list_notif_wgt_row_pane_t_ParamLimits

0xd4c5,	// (0x00058942) listrow_wgtman_pane_g1_ParamLimits

0xd4d2,	// (0x0005894f) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0005b356) listrow_wgtman_pane_g_ParamLimits

0xd4ea,	// (0x00058967) listrow_wgtman_pane_t1_ParamLimits

0xd502,	// (0x0005897f) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0005b35b) listrow_wgtman_pane_t_ParamLimits

0xd528,	// (0x000589a5) wait_bar_pane_cp09_ParamLimits

0x026b,	// (0x0004b6e8) bg_popup_heading_pane_cp02

0x28ab,	// (0x0004dd28) popup_notif_wgt_heading_pane_g1

0x28b3,	// (0x0004dd30) popup_notif_wgt_heading_pane_t1

0xe26e,	// (0x000596eb) main_vids_pane

0x026b,	// (0x0004b6e8) vids_listscroll_pane

0xdb12,	// (0x00058f8f) scroll_pane_cp040

0x026b,	// (0x0004b6e8) vids_list_pane

0xdb1b,	// (0x00058f98) vids_list_double_pane_ParamLimits

0xdb1b,	// (0x00058f98) vids_list_double_pane

0xdb2c,	// (0x00058fa9) vids_list_double_pane_g1

0xdb35,	// (0x00058fb2) vids_list_double_pane_t1

0xdb45,	// (0x00058fc2) vids_list_double_pane_t2

0x0001,

0xff6b,	// (0x0005b3e8) vids_list_double_pane_t

0x891b,	// (0x00053d98) main_ncimui_pane_ParamLimits

0xbf12,	// (0x0005738f) main_ncimui_pane_g1_ParamLimits

0xbf1e,	// (0x0005739b) main_ncimui_pane_g2_ParamLimits

0xbf1e,	// (0x0005739b) main_ncimui_pane_g2

0x0001,

0xfbe6,	// (0x0005b063) main_ncimui_pane_g_ParamLimits

0xfbe6,	// (0x0005b063) main_ncimui_pane_g

0xda76,	// (0x00058ef3) main_welc_pane_g1_ParamLimits

0xda76,	// (0x00058ef3) main_welc_pane_g1

0xda82,	// (0x00058eff) main_welc_pane_g2_ParamLimits

0xda82,	// (0x00058eff) main_welc_pane_g2

0x0002,

0xff5d,	// (0x0005b3da) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0005b3da) main_welc_pane_g

0x3079,	// (0x0004e4f6) listscroll_mce_pane_ParamLimits

0x7db4,	// (0x00053231) wait_bar_pane_cp10

0xe254,	// (0x000596d1) main_cale_day_pane_ParamLimits

0xe254,	// (0x000596d1) main_cale_week_pane_ParamLimits

0x3079,	// (0x0004e4f6) main_messa_pane_ParamLimits

0x9af0,	// (0x00054f6d) main_clock2_btn_pane_ParamLimits

0x9af0,	// (0x00054f6d) main_clock2_btn_pane

0xea29,	// (0x00059ea6) main_clock2_btn_pane_cp01_ParamLimits

0xea29,	// (0x00059ea6) main_clock2_btn_pane_cp01

0x21ae,	// (0x0004d62b) list_cale_mrui_pane_ParamLimits

0x2653,	// (0x0004dad0) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0005b334) main_cf0_pane_g

0xd68d,	// (0x00058b0a) area_left_week_number_pane_ParamLimits

0xd69e,	// (0x00058b1b) area_top_day_name_pane_ParamLimits

0xd6aa,	// (0x00058b27) frame_month_view_pane_ParamLimits

0x275c,	// (0x0004dbd9) grid_month_view_pane_ParamLimits

0x276a,	// (0x0004dbe7) frm_month_g1_ParamLimits

0xd716,	// (0x00058b93) frm_month_g2_ParamLimits

0xd725,	// (0x00058ba2) frm_month_g3_ParamLimits

0xd734,	// (0x00058bb1) frm_month_g4_ParamLimits

0xd743,	// (0x00058bc0) frm_month_g5_ParamLimits

0xd752,	// (0x00058bcf) frm_month_g6_ParamLimits

0xd761,	// (0x00058bde) frm_month_g7_ParamLimits

0x2777,	// (0x0004dbf4) frm_month_g8_ParamLimits

0xd770,	// (0x00058bed) frm_month_g9_ParamLimits

0xd77d,	// (0x00058bfa) frm_month_g10_ParamLimits

0xd78a,	// (0x00058c07) frm_month_g11_ParamLimits

0xd797,	// (0x00058c14) frm_month_g12_ParamLimits

0xd7a4,	// (0x00058c21) frm_month_g13_ParamLimits

0xd7b1,	// (0x00058c2e) frm_month_g14_ParamLimits

0xd7be,	// (0x00058c3b) frm_month_g15_ParamLimits

0xd7cb,	// (0x00058c48) frm_month_g16_ParamLimits

0xff08,	// (0x0005b385) frm_month_g_ParamLimits

0x2784,	// (0x0004dc01) cell_top_day_name_pane_t1_ParamLimits

0xd7d8,	// (0x00058c55) cell_area_left_week_number_pane_g1_ParamLimits

0xd7e7,	// (0x00058c64) cell_area_left_week_number_pane_t1_ParamLimits

0xe8a1,	// (0x00059d1e) cell_month_view_pane_g1_ParamLimits

0xd7fd,	// (0x00058c7a) cell_month_view_pane_t1_ParamLimits

0x3071,	// (0x0004e4ee) main_clock2_btn_pane_g1

0x28c1,	// (0x0004dd3e) main_clock2_btn_pane_t1

0x498f,	// (0x0004fe0c) listscroll_cmail_pane_ParamLimits

0x1d6a,	// (0x0004d1e7) main_sp_fs_email_pane_g1_ParamLimits

0x1d76,	// (0x0004d1f3) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0005b162) main_sp_fs_email_pane_g_ParamLimits

0x22d8,	// (0x0004d755) list_recal_day_pane_ParamLimits

0x22e9,	// (0x0004d766) mian_recal_day_pane_t1

0xc887,	// (0x00057d04) list_single_dyc_row_text_pane_t4_ParamLimits

0xc887,	// (0x00057d04) list_single_dyc_row_text_pane_t4

0xc8be,	// (0x00057d3b) list_single_dyc_row_text_pane_t5_ParamLimits

0xc8be,	// (0x00057d3b) list_single_dyc_row_text_pane_t5

0x1e28,	// (0x0004d2a5) list_single_dyc_row_text_pane_t6_ParamLimits

0x1e28,	// (0x0004d2a5) list_single_dyc_row_text_pane_t6

0x7979,	// (0x00052df6) aid_mgn_list_cale_time_pane

0x891b,	// (0x00053d98) main_gallery2_pane_ParamLimits

0xea3d,	// (0x00059eba) main_clock2_pane_cp01_t1

0xea4b,	// (0x00059ec8) main_clock2_pane_cp01_t3

0x0001,

0xf7bc,	// (0x0005ac39) main_clock2_pane_cp01_t

0x6358,	// (0x000517d5) cale_week_scroll_pane_g16_ParamLimits

0x6358,	// (0x000517d5) cale_week_scroll_pane_g16

0x3311,	// (0x0004e78e) vorec_slider_pane

0xda25,	// (0x00058ea2) vidtel_button_pane_t1_ParamLimits

0xe906,	// (0x00059d83) main_fs_bigclock_clock_pane_g1_ParamLimits

0xd125,	// (0x000585a2) main_fs_bigclock_clock_pane_g2_ParamLimits

0xd132,	// (0x000585af) main_fs_bigclock_clock_pane_g3_ParamLimits

0xd132,	// (0x000585af) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x0005b2e2) main_fs_bigclock_clock_pane_g_ParamLimits

0xd13e,	// (0x000585bb) main_fs_bigclock_clock_pane_t1_ParamLimits

0xd150,	// (0x000585cd) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x0005b2eb) main_fs_bigclock_clock_pane_t_ParamLimits

0x941c,	// (0x00054899) main_mup3_lyrics_pane_ParamLimits

0x941c,	// (0x00054899) main_mup3_lyrics_pane

0xdb77,	// (0x00058ff4) main_mup3_lyrics_pane_t1_ParamLimits

0xdb77,	// (0x00058ff4) main_mup3_lyrics_pane_t1

0xa0be,	// (0x0005553b) aid_main_mp4_pane_t1_area

0xa0be,	// (0x0005553b) aid_main_mp4_pane_t2_area

0xa1a9,	// (0x00055626) main_mp4_pane_g7_ParamLimits

0xa1a9,	// (0x00055626) main_mp4_pane_g7

0xa1b5,	// (0x00055632) main_mp4_pane_g8_ParamLimits

0xa1b5,	// (0x00055632) main_mp4_pane_g8

0xa578,	// (0x000559f5) aid_call6_pane_g1_size

0xd960,	// (0x00058ddd) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd960,	// (0x00058ddd) list_double_large_graphic_phob2_other_pane

0x3b75,	// (0x0004eff2) list_double_large_graphic_phob2_other_pane_g1

0x026b,	// (0x0004b6e8) list_highlight_pane_cp026

0x498f,	// (0x0004fe0c) main_welc_pane_ParamLimits

0xc5df,	// (0x00057a5c) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xc5df,	// (0x00057a5c) main_sp_fs_ctrlbar_pane_g3

0xc5f7,	// (0x00057a74) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xc5f7,	// (0x00057a74) main_sp_fs_ctrlbar_pane_g4

0xc637,	// (0x00057ab4) toolbar2_fixed_button_pane_cp01

0xc641,	// (0x00057abe) toolbar2_fixed_button_pane_cp02

0xc64c,	// (0x00057ac9) toolbar2_fixed_button_pane_cp03

0xda3b,	// (0x00058eb8) list_welc_entry_pane_ParamLimits

0xda3b,	// (0x00058eb8) list_welc_entry_pane

0xda8e,	// (0x00058f0b) main_welc_pane_g3_ParamLimits

0xda8e,	// (0x00058f0b) main_welc_pane_g3

0xdab2,	// (0x00058f2f) main_welc_pane_t2_ParamLimits

0xdab2,	// (0x00058f2f) main_welc_pane_t2

0xdac4,	// (0x00058f41) main_welc_pane_t3_ParamLimits

0xdac4,	// (0x00058f41) main_welc_pane_t3

0x0002,

0xff64,	// (0x0005b3e1) main_welc_pane_t_ParamLimits

0xff64,	// (0x0005b3e1) main_welc_pane_t

0xdad6,	// (0x00058f53) welc_button_pane_ParamLimits

0xdad6,	// (0x00058f53) welc_button_pane

0xdae2,	// (0x00058f5f) welc_service_logo_pane_ParamLimits

0xdae2,	// (0x00058f5f) welc_service_logo_pane

0x28cf,	// (0x0004dd4c) list_single_welc_entry_pane_ParamLimits

0x28cf,	// (0x0004dd4c) list_single_welc_entry_pane

0x28e0,	// (0x0004dd5d) list_single_welc_entry_pane_g1

0x28e8,	// (0x0004dd65) list_single_welc_entry_pane_t1

0x28f6,	// (0x0004dd73) list_single_welc_entry_pane_t2

0x0001,

0xff70,	// (0x0005b3ed) list_single_welc_entry_pane_t

0x026b,	// (0x0004b6e8) bg_button_pane_cp035

0x2904,	// (0x0004dd81) welc_button_pane_t1

0x2912,	// (0x0004dd8f) welc_service_logo_pane_g1

0x291b,	// (0x0004dd98) welc_service_logo_pane_g2

0x0001,

0xff75,	// (0x0005b3f2) welc_service_logo_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Small
