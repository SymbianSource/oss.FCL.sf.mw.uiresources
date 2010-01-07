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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0004269f };

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
0x64c8,	// (0x00048b67) Screen

0x64d2,	// (0x00048b71) application_window

0x6504,	// (0x00048ba3) area_bottom_pane_ParamLimits

0x6504,	// (0x00048ba3) area_bottom_pane

0x6533,	// (0x00048bd2) area_top_pane_ParamLimits

0x6533,	// (0x00048bd2) area_top_pane

0xdbbd,	// (0x0005025c) call_video_uplink_pane_ParamLimits

0xdbbd,	// (0x0005025c) call_video_uplink_pane

0x65b6,	// (0x00048c55) main_pane_ParamLimits

0x65b6,	// (0x00048c55) main_pane

0x2be5,	// (0x00045284) context_pane

0x8ef5,	// (0x0004b594) navi_pane

0x8f0f,	// (0x0004b5ae) popup_cale_events_window_ParamLimits

0x8f0f,	// (0x0004b5ae) popup_cale_events_window

0x2bf8,	// (0x00045297) popup_mup_playback_window

0x8f26,	// (0x0004b5c5) signal_pane

0xe314,	// (0x000509b3) main_browser_pane

0x172d,	// (0x00043dcc) main_burst_pane

0x3952,	// (0x00045ff1) main_calc_pane

0x172d,	// (0x00043dcc) main_cale_day_pane

0xe43c,	// (0x00050adb) main_cale_month_pane

0x172d,	// (0x00043dcc) main_cale_week_pane

0x172d,	// (0x00043dcc) main_call_pane

0xdfea,	// (0x00050689) main_call_poc_pane

0x172d,	// (0x00043dcc) main_camera_pane

0x172d,	// (0x00043dcc) main_chi_dic_pane

0xec77,	// (0x00051316) main_clock_pane

0xdfea,	// (0x00050689) main_fmradio_pane

0x172d,	// (0x00043dcc) main_graph_messa_pane

0xdfea,	// (0x00050689) main_help_pane

0xe314,	// (0x000509b3) main_im_pane

0xe245,	// (0x000508e4) main_image_pane_ParamLimits

0xe245,	// (0x000508e4) main_image_pane

0xdfea,	// (0x00050689) main_location2_pane

0x172d,	// (0x00043dcc) main_location_pane

0xdfea,	// (0x00050689) main_messa_pane

0xdfea,	// (0x00050689) main_mp2_pane

0x172d,	// (0x00043dcc) main_mp_pane

0xdfea,	// (0x00050689) main_msg_pane

0xdfea,	// (0x00050689) main_mup_eq_pane

0xdfea,	// (0x00050689) main_mup_pane

0x172d,	// (0x00043dcc) main_notes_pane

0xdfea,	// (0x00050689) main_pec_pane

0xdfea,	// (0x00050689) main_phob_pane

0xdfea,	// (0x00050689) main_pinb_pane

0xdfea,	// (0x00050689) main_postcard_pane

0xdfea,	// (0x00050689) main_qdial_pane

0x172d,	// (0x00043dcc) main_skin_pane

0xdfea,	// (0x00050689) main_smil2_pane

0x172d,	// (0x00043dcc) main_smil_pane

0x172d,	// (0x00043dcc) main_video_pane

0x172d,	// (0x00043dcc) main_video_tele_pane

0xe245,	// (0x000508e4) main_viewer_pane_ParamLimits

0xe245,	// (0x000508e4) main_viewer_pane

0x172d,	// (0x00043dcc) main_vorec_pane

0x8e27,	// (0x0004b4c6) popup_blid_sat_info_window_ParamLimits

0x8e27,	// (0x0004b4c6) popup_blid_sat_info_window

0x8e3b,	// (0x0004b4da) popup_dyc_status_message_window_ParamLimits

0x8e3b,	// (0x0004b4da) popup_dyc_status_message_window

0x8e47,	// (0x0004b4e6) popup_grid_large_graphic_window_ParamLimits

0x8e47,	// (0x0004b4e6) popup_grid_large_graphic_window

0x8e9f,	// (0x0004b53e) popup_loc_request_window_ParamLimits

0x8e9f,	// (0x0004b53e) popup_loc_request_window

0x8ecf,	// (0x0004b56e) popup_wml_address_window_ParamLimits

0x8ecf,	// (0x0004b56e) popup_wml_address_window

0x8d0c,	// (0x0004b3ab) call_muted_g1

0x8a47,	// (0x0004b0e6) popup_call_audio_conf_window_ParamLimits

0x8a47,	// (0x0004b0e6) popup_call_audio_conf_window

0x8d1c,	// (0x0004b3bb) popup_call_audio_first_window_ParamLimits

0x8d1c,	// (0x0004b3bb) popup_call_audio_first_window

0x8d50,	// (0x0004b3ef) popup_call_audio_in_window_ParamLimits

0x8d50,	// (0x0004b3ef) popup_call_audio_in_window

0x8d6c,	// (0x0004b40b) popup_call_audio_out_window_ParamLimits

0x8d6c,	// (0x0004b40b) popup_call_audio_out_window

0x8d88,	// (0x0004b427) popup_call_audio_second_window_ParamLimits

0x8d88,	// (0x0004b427) popup_call_audio_second_window

0x8db0,	// (0x0004b44f) popup_call_audio_wait_window_ParamLimits

0x8db0,	// (0x0004b44f) popup_call_audio_wait_window

0x8dcf,	// (0x0004b46e) popup_number_entry_window_ParamLimits

0x8dcf,	// (0x0004b46e) popup_number_entry_window

0xdbd9,	// (0x00050278) bg_popup_call_pane_cp05_ParamLimits

0xdbd9,	// (0x00050278) bg_popup_call_pane_cp05

0xdbf9,	// (0x00050298) popup_number_entry_window_t1

0xdc0c,	// (0x000502ab) popup_number_entry_window_t2

0xdc1e,	// (0x000502bd) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x0005179a) popup_number_entry_window_t

0xdc30,	// (0x000502cf) text_title_cp2

0xdc43,	// (0x000502e2) bg_popup_call_pane_cp_ParamLimits

0xdc43,	// (0x000502e2) bg_popup_call_pane_cp

0xdc51,	// (0x000502f0) call_thumbnail_pane

0xdc59,	// (0x000502f8) popup_call_audio_in_window_g1_ParamLimits

0xdc59,	// (0x000502f8) popup_call_audio_in_window_g1

0xdc65,	// (0x00050304) popup_call_audio_in_window_g2_ParamLimits

0xdc65,	// (0x00050304) popup_call_audio_in_window_g2

0xdc71,	// (0x00050310) popup_call_audio_in_window_g3_ParamLimits

0xdc71,	// (0x00050310) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x000517a3) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x000517a3) popup_call_audio_in_window_g

0xdc7d,	// (0x0005031c) popup_call_audio_in_window_t1_ParamLimits

0xdc7d,	// (0x0005031c) popup_call_audio_in_window_t1

0xdc98,	// (0x00050337) popup_call_audio_in_window_t2_ParamLimits

0xdc98,	// (0x00050337) popup_call_audio_in_window_t2

0xdcb3,	// (0x00050352) popup_call_audio_in_window_t3_ParamLimits

0xdcb3,	// (0x00050352) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x000517aa) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x000517aa) popup_call_audio_in_window_t

0xdc43,	// (0x000502e2) bg_popup_call_pane_cp01_ParamLimits

0xdc43,	// (0x000502e2) bg_popup_call_pane_cp01

0xdc51,	// (0x000502f0) call_thumbnail_pane_cp02

0xdcc6,	// (0x00050365) call_type_pane_cp022

0xdcce,	// (0x0005036d) popup_call_audio_out_window_g1_ParamLimits

0xdcce,	// (0x0005036d) popup_call_audio_out_window_g1

0xdce0,	// (0x0005037f) popup_call_audio_out_window_g2_ParamLimits

0xdce0,	// (0x0005037f) popup_call_audio_out_window_g2

0xdcec,	// (0x0005038b) popup_call_audio_out_window_g3_ParamLimits

0xdcec,	// (0x0005038b) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x000517b1) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x000517b1) popup_call_audio_out_window_g

0xdcfe,	// (0x0005039d) popup_call_audio_out_window_t1_ParamLimits

0xdcfe,	// (0x0005039d) popup_call_audio_out_window_t1

0xdd16,	// (0x000503b5) popup_call_audio_out_window_t2_ParamLimits

0xdd16,	// (0x000503b5) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x000517b8) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x000517b8) popup_call_audio_out_window_t

0xdd2b,	// (0x000503ca) bg_popup_call_pane_ParamLimits

0xdd2b,	// (0x000503ca) bg_popup_call_pane

0x6767,	// (0x00048e06) call_thumbnail_pane_cp_ParamLimits

0x6767,	// (0x00048e06) call_thumbnail_pane_cp

0xddaf,	// (0x0005044e) call_type_pane_cp01_ParamLimits

0xddaf,	// (0x0005044e) call_type_pane_cp01

0xddf3,	// (0x00050492) popup_call_audio_first_window_g1_ParamLimits

0xddf3,	// (0x00050492) popup_call_audio_first_window_g1

0xde3f,	// (0x000504de) popup_call_audio_first_window_g2_ParamLimits

0xde3f,	// (0x000504de) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x000517bd) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x000517bd) popup_call_audio_first_window_g

0xde83,	// (0x00050522) popup_call_audio_first_window_t1_ParamLimits

0xde83,	// (0x00050522) popup_call_audio_first_window_t1

0xdf2f,	// (0x000505ce) popup_call_audio_first_window_t4_ParamLimits

0xdf2f,	// (0x000505ce) popup_call_audio_first_window_t4

0xdfbb,	// (0x0005065a) popup_call_audio_first_window_t5_ParamLimits

0xdfbb,	// (0x0005065a) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x000517c2) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x000517c2) popup_call_audio_first_window_t

0xdfea,	// (0x00050689) bg_popup_call_pane_cp02

0xdff4,	// (0x00050693) call_type_pane_cp023

0xdffc,	// (0x0005069b) popup_call_audio_wait_window_g1

0xe004,	// (0x000506a3) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x000517c9) popup_call_audio_wait_window_g

0xe00c,	// (0x000506ab) popup_call_audio_wait_window_t3

0xe01a,	// (0x000506b9) bg_popup_call_pane_cp03_ParamLimits

0xe01a,	// (0x000506b9) bg_popup_call_pane_cp03

0xe07a,	// (0x00050719) call_thumbnail_pane_cp011_ParamLimits

0xe07a,	// (0x00050719) call_thumbnail_pane_cp011

0xe086,	// (0x00050725) call_type_pane_cp034_ParamLimits

0xe086,	// (0x00050725) call_type_pane_cp034

0xe0c2,	// (0x00050761) popup_call_audio_second_window_g1_ParamLimits

0xe0c2,	// (0x00050761) popup_call_audio_second_window_g1

0xe0fe,	// (0x0005079d) popup_call_audio_second_window_g2_ParamLimits

0xe0fe,	// (0x0005079d) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x000517ce) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x000517ce) popup_call_audio_second_window_g

0xe13a,	// (0x000507d9) popup_call_audio_second_window_t1_ParamLimits

0xe13a,	// (0x000507d9) popup_call_audio_second_window_t1

0xe1bb,	// (0x0005085a) popup_call_audio_second_window_t2_ParamLimits

0xe1bb,	// (0x0005085a) popup_call_audio_second_window_t2

0xe1f1,	// (0x00050890) popup_call_audio_second_window_t3_ParamLimits

0xe1f1,	// (0x00050890) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x000517d3) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x000517d3) popup_call_audio_second_window_t

0xdfea,	// (0x00050689) bg_popup_call_pane_cp04

0xe227,	// (0x000508c6) list_conf_pane

0xe22f,	// (0x000508ce) popup_call_audio_conf_window_t1

0xe23d,	// (0x000508dc) call_thumbnail_pane_g1

0xe245,	// (0x000508e4) bg_pinb_pane_ParamLimits

0xe245,	// (0x000508e4) bg_pinb_pane

0xe253,	// (0x000508f2) find_pinb_pane

0xe25c,	// (0x000508fb) listscroll_pinb_pane_ParamLimits

0xe25c,	// (0x000508fb) listscroll_pinb_pane

0xe26b,	// (0x0005090a) pinb_bg_pane_g1

0x678b,	// (0x00048e2a) pinb_bg_pane_g2

0x6795,	// (0x00048e34) pinb_bg_pane_g3

0x679f,	// (0x00048e3e) pinb_bg_pane_g4

0x67a9,	// (0x00048e48) pinb_bg_pane_g5

0x67b3,	// (0x00048e52) pinb_bg_pane_g6

0x67be,	// (0x00048e5d) pinb_bg_pane_g7

0x67c9,	// (0x00048e68) pinb_bg_pane_g8

0x67d2,	// (0x00048e71) pinb_bg_pane_g9

0x67da,	// (0x00048e79) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x000517da) pinb_bg_pane_g

0x67f7,	// (0x00048e96) grid_pinb_pane

0x6800,	// (0x00048e9f) list_pinb_pane

0x680b,	// (0x00048eaa) scroll_pane_cp01_ParamLimits

0x680b,	// (0x00048eaa) scroll_pane_cp01

0xe275,	// (0x00050914) find_pinb_pane_g1_ParamLimits

0xe275,	// (0x00050914) find_pinb_pane_g1

0xe28d,	// (0x0005092c) find_pinb_pane_t1

0xe29f,	// (0x0005093e) find_pinb_pane_t2

0x0001,

0xf155,	// (0x000517f4) find_pinb_pane_t

0xe2b4,	// (0x00050953) input_focus_pane_cp01_ParamLimits

0xe2b4,	// (0x00050953) input_focus_pane_cp01

0x681b,	// (0x00048eba) cell_pinb_pane_ParamLimits

0x681b,	// (0x00048eba) cell_pinb_pane

0x6834,	// (0x00048ed3) cell_pinb_pane_g1_ParamLimits

0x6834,	// (0x00048ed3) cell_pinb_pane_g1

0x6848,	// (0x00048ee7) cell_pinb_pane_g2_ParamLimits

0x6848,	// (0x00048ee7) cell_pinb_pane_g2

0xe2c0,	// (0x0005095f) cell_pinb_pane_g3_ParamLimits

0xe2c0,	// (0x0005095f) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x000517f9) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x000517f9) cell_pinb_pane_g

0xdfea,	// (0x00050689) grid_highlight_pane_cp01

0x6854,	// (0x00048ef3) list_pinb_item_pane_ParamLimits

0x6854,	// (0x00048ef3) list_pinb_item_pane

0xdfea,	// (0x00050689) list_highlight_pane_cp02

0x6869,	// (0x00048f08) list_pinb_item_pane_g1_ParamLimits

0x6869,	// (0x00048f08) list_pinb_item_pane_g1

0x6876,	// (0x00048f15) list_pinb_item_pane_g2_ParamLimits

0x6876,	// (0x00048f15) list_pinb_item_pane_g2

0x6882,	// (0x00048f21) list_pinb_item_pane_g3_ParamLimits

0x6882,	// (0x00048f21) list_pinb_item_pane_g3

0x6891,	// (0x00048f30) list_pinb_item_pane_g4_ParamLimits

0x6891,	// (0x00048f30) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x00051800) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x00051800) list_pinb_item_pane_g

0x689d,	// (0x00048f3c) list_pinb_item_pane_t1_ParamLimits

0x689d,	// (0x00048f3c) list_pinb_item_pane_t1

0x68ce,	// (0x00048f6d) calc_display_pane

0x68e6,	// (0x00048f85) calc_paper_pane

0x6902,	// (0x00048fa1) grid_calc_pane

0xdfea,	// (0x00050689) bg_list_pane_cp01

0x6922,	// (0x00048fc1) clock_g1

0x692a,	// (0x00048fc9) clock_g2

0x0001,

0xf16a,	// (0x00051809) clock_g

0x6932,	// (0x00048fd1) clock_t1_ParamLimits

0x6932,	// (0x00048fd1) clock_t1

0x6947,	// (0x00048fe6) clock_t2_ParamLimits

0x6947,	// (0x00048fe6) clock_t2

0x6959,	// (0x00048ff8) clock_t3_ParamLimits

0x6959,	// (0x00048ff8) clock_t3

0x696b,	// (0x0004900a) clock_t4_ParamLimits

0x696b,	// (0x0004900a) clock_t4

0x697d,	// (0x0004901c) clock_t5_ParamLimits

0x697d,	// (0x0004901c) clock_t5

0x6992,	// (0x00049031) clock_t6_ParamLimits

0x6992,	// (0x00049031) clock_t6

0x69a4,	// (0x00049043) clock_t7_ParamLimits

0x69a4,	// (0x00049043) clock_t7

0x69b6,	// (0x00049055) clock_t8_ParamLimits

0x69b6,	// (0x00049055) clock_t8

0x69c8,	// (0x00049067) clock_t9_ParamLimits

0x69c8,	// (0x00049067) clock_t9

0x0008,

0xf16f,	// (0x0005180e) clock_t_ParamLimits

0xf16f,	// (0x0005180e) clock_t

0xe2cc,	// (0x0005096b) popup_clock_analogue_window_cp02

0xe2cc,	// (0x0005096b) popup_clock_digital_window_cp01

0xe2d4,	// (0x00050973) listscroll_help_pane

0xdfea,	// (0x00050689) phob_pre_status_pane

0xe2de,	// (0x0005097d) grid_qdial_pane

0xdfea,	// (0x00050689) listscroll_mce_pane

0xe2e8,	// (0x00050987) bg_notes_pane

0xe2f2,	// (0x00050991) list_notes_pane

0x69da,	// (0x00049079) scroll_pane_cp06

0xe2fc,	// (0x0005099b) bg_calc_paper_pane

0x69ed,	// (0x0004908c) list_calc_pane

0xe314,	// (0x000509b3) bg_calc_display_pane

0x6a07,	// (0x000490a6) calc_display_pane_t1

0x6a1c,	// (0x000490bb) calc_display_pane_t2

0x6a31,	// (0x000490d0) calc_display_pane_t3

0x0002,

0xf182,	// (0x00051821) calc_display_pane_t

0x6a43,	// (0x000490e2) cell_calc_pane_ParamLimits

0x6a43,	// (0x000490e2) cell_calc_pane

0xe320,	// (0x000509bf) bg_calc_paper_pane_g1

0xe32c,	// (0x000509cb) bg_calc_paper_pane_g2

0xe338,	// (0x000509d7) bg_calc_paper_pane_g3

0xe344,	// (0x000509e3) bg_calc_paper_pane_g4

0xe350,	// (0x000509ef) bg_calc_paper_pane_g5

0x6a6a,	// (0x00049109) bg_calc_paper_pane_g6

0x6a79,	// (0x00049118) bg_calc_paper_pane_g7

0x6a88,	// (0x00049127) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x00051828) bg_calc_paper_pane_g

0x6a97,	// (0x00049136) calc_bg_paper_pane_g9

0x6aa6,	// (0x00049145) list_calc_item_pane_ParamLimits

0x6aa6,	// (0x00049145) list_calc_item_pane

0xe35c,	// (0x000509fb) list_calc_item_pane_g1

0x6abf,	// (0x0004915e) list_calc_item_pane_t1_ParamLimits

0x6abf,	// (0x0004915e) list_calc_item_pane_t1

0x6ad1,	// (0x00049170) list_calc_item_pane_t2_ParamLimits

0x6ad1,	// (0x00049170) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x00051839) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x00051839) list_calc_item_pane_t

0xe369,	// (0x00050a08) cell_calc_pane_g1

0xe373,	// (0x00050a12) grid_highlight_pane_cp02

0xe395,	// (0x00050a34) bg_calc_display_pane_g1

0x6aff,	// (0x0004919e) bg_calc_display_pane_g2

0xe39e,	// (0x00050a3d) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x00051843) bg_calc_display_pane_g

0x6b09,	// (0x000491a8) cell_qdial_pane_ParamLimits

0x6b09,	// (0x000491a8) cell_qdial_pane

0x6b1b,	// (0x000491ba) cell_qdial_pane_g1_ParamLimits

0x6b1b,	// (0x000491ba) cell_qdial_pane_g1

0x6b28,	// (0x000491c7) cell_qdial_pane_g2_ParamLimits

0x6b28,	// (0x000491c7) cell_qdial_pane_g2

0xe3a7,	// (0x00050a46) cell_qdial_pane_g3_ParamLimits

0xe3a7,	// (0x00050a46) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x0005184a) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x0005184a) cell_qdial_pane_g

0x6b46,	// (0x000491e5) cell_qdial_pane_t1_ParamLimits

0x6b46,	// (0x000491e5) cell_qdial_pane_t1

0x6b5e,	// (0x000491fd) cell_qdial_pane_t2_ParamLimits

0x6b5e,	// (0x000491fd) cell_qdial_pane_t2

0x6b71,	// (0x00049210) cell_qdial_pane_t3_ParamLimits

0x6b71,	// (0x00049210) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x00051853) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x00051853) cell_qdial_pane_t

0xdfea,	// (0x00050689) grid_highlight_pane_cp04

0xe3b3,	// (0x00050a52) thumbnail_qdial_pane_ParamLimits

0xe3b3,	// (0x00050a52) thumbnail_qdial_pane

0xe40f,	// (0x00050aae) list_help_pane

0xe419,	// (0x00050ab8) scroll_pane_cp02

0x6b84,	// (0x00049223) help_list_pane_t1_ParamLimits

0x6b84,	// (0x00049223) help_list_pane_t1

0x6ba2,	// (0x00049241) bg_notes_pane_g2

0x6baa,	// (0x00049249) bg_notes_pane_g3

0x6bb2,	// (0x00049251) notes_bg_pane_g1

0x6bba,	// (0x00049259) notes_bg_pane_g4

0x6bc2,	// (0x00049261) notes_bg_pane_g5

0x6bca,	// (0x00049269) notes_bg_pane_g6

0x6bd2,	// (0x00049271) notes_bg_pane_g7

0x6bda,	// (0x00049279) notes_bg_pane_g8

0x6be2,	// (0x00049281) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x00051871) notes_bg_pane_g

0x6bea,	// (0x00049289) list_notes_text_pane_ParamLimits

0x6bea,	// (0x00049289) list_notes_text_pane

0xe422,	// (0x00050ac1) list_notes_text_pane_g1

0x6c00,	// (0x0004929f) list_notes_text_pane_t1

0xe43c,	// (0x00050adb) listscroll_cale_week_pane

0x6c29,	// (0x000492c8) bg_cale_heading_pane

0xe44b,	// (0x00050aea) bg_cale_pane_cp01

0x6c3d,	// (0x000492dc) cale_week_corner_pane

0x6c53,	// (0x000492f2) cale_week_day_heading_pane

0x6c67,	// (0x00049306) cale_week_scroll_pane_g1

0x6c78,	// (0x00049317) cale_week_scroll_pane_g2

0x6c89,	// (0x00049328) cale_week_scroll_pane_g3

0x6c9a,	// (0x00049339) cale_week_scroll_pane_g4

0x6cab,	// (0x0004934a) cale_week_scroll_pane_g5

0x6cbc,	// (0x0004935b) cale_week_scroll_pane_g6

0x6ccd,	// (0x0004936c) cale_week_scroll_pane_g7

0x6cde,	// (0x0004937d) cale_week_scroll_pane_g8

0x6cef,	// (0x0004938e) cale_week_scroll_pane_g9

0x6d00,	// (0x0004939f) cale_week_scroll_pane_g10

0x6d11,	// (0x000493b0) cale_week_scroll_pane_g11

0x6d22,	// (0x000493c1) cale_week_scroll_pane_g12

0x6d33,	// (0x000493d2) cale_week_scroll_pane_g13

0x6d44,	// (0x000493e3) cale_week_scroll_pane_g14

0x6d55,	// (0x000493f4) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x00051880) cale_week_scroll_pane_g

0x6d66,	// (0x00049405) cale_week_time_pane

0x6d77,	// (0x00049416) grid_cale_week_pane

0x6d8a,	// (0x00049429) scroll_pane_cp08

0x6da2,	// (0x00049441) cell_cale_week_pane_ParamLimits

0x6da2,	// (0x00049441) cell_cale_week_pane

0x6dde,	// (0x0004947d) cale_week_day_heading_pane_t1

0x6df7,	// (0x00049496) cale_week_day_heading_pane_t2

0x6e10,	// (0x000494af) cale_week_day_heading_pane_t3

0x6e29,	// (0x000494c8) cale_week_day_heading_pane_t4

0x6e42,	// (0x000494e1) cale_week_day_heading_pane_t5

0x6e5b,	// (0x000494fa) cale_week_day_heading_pane_t6

0x6e74,	// (0x00049513) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0005189f) cale_week_day_heading_pane_t

0xe476,	// (0x00050b15) bg_cale_side_pane

0x6e8d,	// (0x0004952c) cale_week_time_pane_t1

0x6eb9,	// (0x00049558) cale_week_time_pane_t2

0x6ee5,	// (0x00049584) cale_week_time_pane_t3

0x6f11,	// (0x000495b0) cale_week_time_pane_t4

0x6f3d,	// (0x000495dc) cale_week_time_pane_t5

0x6f69,	// (0x00049608) cale_week_time_pane_t6

0x6f95,	// (0x00049634) cale_week_time_pane_t7

0x6fc1,	// (0x00049660) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x000518ae) cale_week_time_pane_t

0x6fed,	// (0x0004968c) cell_cale_week_pane_g2

0x7009,	// (0x000496a8) cell_cale_week_pane_g3_ParamLimits

0x7009,	// (0x000496a8) cell_cale_week_pane_g3

0xe484,	// (0x00050b23) grid_highlight_pane_cp07

0xe48c,	// (0x00050b2b) listscroll_gms_pane

0xe496,	// (0x00050b35) grid_gms_pane

0xe49f,	// (0x00050b3e) listscroll_gms_pane_g1

0xe4a7,	// (0x00050b46) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x000518bf) listscroll_gms_pane_g

0x7021,	// (0x000496c0) scroll_pane_cp010

0x702a,	// (0x000496c9) cell_gms_pane_ParamLimits

0x702a,	// (0x000496c9) cell_gms_pane

0x703b,	// (0x000496da) cell_gms_pane_g1

0xe4af,	// (0x00050b4e) cell_gms_pane_g2

0xe422,	// (0x00050ac1) cell_gms_pane_g3

0xe4b7,	// (0x00050b56) cell_gms_pane_g4

0x0003,

0xf225,	// (0x000518c4) cell_gms_pane_g

0xe4c0,	// (0x00050b5f) grid_highlight_pane_cp09

0x8cba,	// (0x0004b359) phob_pre_status_pane_g1

0x8cc2,	// (0x0004b361) phob_pre_status_pane_g2

0x8cca,	// (0x0004b369) phob_pre_status_pane_g3

0x8cd2,	// (0x0004b371) phob_pre_status_pane_g4

0x0004,

0xf627,	// (0x00051cc6) phob_pre_status_pane_g

0x8ce2,	// (0x0004b381) phob_pre_status_pane_t1

0x8cf0,	// (0x0004b38f) phob_pre_status_pane_t2

0x8cfe,	// (0x0004b39d) phob_pre_status_pane_t3

0x0002,

0xf632,	// (0x00051cd1) phob_pre_status_pane_t

0xdfea,	// (0x00050689) bg_list_pane_cp05

0x704b,	// (0x000496ea) grid_vorec_pane

0x7053,	// (0x000496f2) vorec_t1

0x7061,	// (0x00049700) vorec_t2

0x706f,	// (0x0004970e) vorec_t3

0x707d,	// (0x0004971c) vorec_t4

0x708b,	// (0x0004972a) vorec_t5

0x7099,	// (0x00049738) vorec_t6

0x0006,

0xf22e,	// (0x000518cd) vorec_t

0x70b5,	// (0x00049754) wait_bar_pane_cp01

0x1ab5,	// (0x00044154) cell_vorec_pane_ParamLimits

0x1ab5,	// (0x00044154) cell_vorec_pane

0xe4c8,	// (0x00050b67) cell_vorec_pane_g1

0xdfea,	// (0x00050689) grid_highlight_pane_cp05

0x70c9,	// (0x00049768) cams_zoom_pane

0x70d5,	// (0x00049774) image_vga_pane

0x70e2,	// (0x00049781) main_camera_pane_g1

0x70ee,	// (0x0004978d) main_camera_pane_g2

0x70fa,	// (0x00049799) main_camera_pane_g3

0x7106,	// (0x000497a5) main_camera_pane_g4

0x7112,	// (0x000497b1) main_camera_pane_g5

0x711e,	// (0x000497bd) main_camera_pane_g6

0x712a,	// (0x000497c9) main_camera_pane_g7

0x0007,

0xf23d,	// (0x000518dc) main_camera_pane_g

0x7136,	// (0x000497d5) main_camera_pane_t1

0x7148,	// (0x000497e7) main_camera_pane_t2

0x0001,

0xf24e,	// (0x000518ed) main_camera_pane_t

0x716c,	// (0x0004980b) cams_zoom_pane_cp_ParamLimits

0x716c,	// (0x0004980b) cams_zoom_pane_cp

0x7190,	// (0x0004982f) image_cif_pane_ParamLimits

0x7190,	// (0x0004982f) image_cif_pane

0x71aa,	// (0x00049849) image_subqcif_pane

0x71b2,	// (0x00049851) main_video_pane_g1_ParamLimits

0x71b2,	// (0x00049851) main_video_pane_g1

0x71d2,	// (0x00049871) main_video_pane_g2_ParamLimits

0x71d2,	// (0x00049871) main_video_pane_g2

0x7200,	// (0x0004989f) main_video_pane_g3_ParamLimits

0x7200,	// (0x0004989f) main_video_pane_g3

0x7229,	// (0x000498c8) main_video_pane_g4_ParamLimits

0x7229,	// (0x000498c8) main_video_pane_g4

0x7252,	// (0x000498f1) main_video_pane_g5_ParamLimits

0x7252,	// (0x000498f1) main_video_pane_g5

0xe4de,	// (0x00050b7d) main_video_pane_g6_ParamLimits

0xe4de,	// (0x00050b7d) main_video_pane_g6

0x0006,

0xf253,	// (0x000518f2) main_video_pane_g_ParamLimits

0xf253,	// (0x000518f2) main_video_pane_g

0x7274,	// (0x00049913) main_video_pane_t1_ParamLimits

0x7274,	// (0x00049913) main_video_pane_t1

0xe4f8,	// (0x00050b97) cams_zoom_pane_g1

0xe501,	// (0x00050ba0) cams_zoom_pane_g2

0xe50a,	// (0x00050ba9) cams_zoom_pane_g3

0xe513,	// (0x00050bb2) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x00051901) cams_zoom_pane_g

0x72be,	// (0x0004995d) grid_cams_pane

0x72ca,	// (0x00049969) linegrid_cams_pane

0x72d6,	// (0x00049975) cell_cams_pane_ParamLimits

0x72d6,	// (0x00049975) cell_cams_pane

0xe51c,	// (0x00050bbb) cams_burst_image_pane

0xe524,	// (0x00050bc3) cell_cams_pane_g1

0xdfea,	// (0x00050689) grid_highlight_pane_cp03

0xe369,	// (0x00050a08) mp_bg_pane_g1

0xdfea,	// (0x00050689) bg_list_pane_cp03

0x2ac1,	// (0x00045160) bg_mp_pane

0x2ac9,	// (0x00045168) grid_mp_pane

0x2ad1,	// (0x00045170) media_player_g1

0x2ad9,	// (0x00045178) media_player_t1

0x2ae7,	// (0x00045186) media_player_t2

0x2af5,	// (0x00045194) media_player_t3

0x2b03,	// (0x000451a2) media_player_t4

0x2b11,	// (0x000451b0) media_player_t5

0x2b1f,	// (0x000451be) media_player_t6

0x2b2d,	// (0x000451cc) media_player_t7

0x0006,

0xf611,	// (0x00051cb0) media_player_t

0x2b3b,	// (0x000451da) wait_bar_pane_cp02

0xf5f6,	// (0x00051c95) main_usb_pane_t

0x8cb1,	// (0x0004b350) cell_mp_pane

0xe369,	// (0x00050a08) cell_mp_pane_g1

0xdfea,	// (0x00050689) grid_highlight_pane_cp06

0xe52c,	// (0x00050bcb) grid_skin_colour_pane

0xe534,	// (0x00050bd3) list_highlight_pane_cp03

0x7339,	// (0x000499d8) skin_g1

0xe53c,	// (0x00050bdb) skin_t1

0xe54b,	// (0x00050bea) skin_t2

0x0001,

0xf297,	// (0x00051936) skin_t

0x7341,	// (0x000499e0) cell_skin_colour_pane_ParamLimits

0x7341,	// (0x000499e0) cell_skin_colour_pane

0xe559,	// (0x00050bf8) cell_skin_colour_pane_g1

0x738a,	// (0x00049a29) call_video_g1_ParamLimits

0x738a,	// (0x00049a29) call_video_g1

0x7396,	// (0x00049a35) call_video_g2_ParamLimits

0x7396,	// (0x00049a35) call_video_g2

0x0001,

0xf29c,	// (0x0005193b) call_video_g_ParamLimits

0xf29c,	// (0x0005193b) call_video_g

0x73ce,	// (0x00049a6d) call_video_uplink_pane_cp1_ParamLimits

0x73ce,	// (0x00049a6d) call_video_uplink_pane_cp1

0xe573,	// (0x00050c12) call_video_uplink_pane_cp2

0x745d,	// (0x00049afc) video_down_crop_pane_ParamLimits

0x745d,	// (0x00049afc) video_down_crop_pane

0x7513,	// (0x00049bb2) video_down_pane_ParamLimits

0x7513,	// (0x00049bb2) video_down_pane

0xe57b,	// (0x00050c1a) video_down_subqcif_pane_ParamLimits

0xe57b,	// (0x00050c1a) video_down_subqcif_pane

0xe593,	// (0x00050c32) video_down_subqcif_pane_cp_ParamLimits

0xe593,	// (0x00050c32) video_down_subqcif_pane_cp

0xe5b7,	// (0x00050c56) im_reading_pane_ParamLimits

0xe5b7,	// (0x00050c56) im_reading_pane

0x75b1,	// (0x00049c50) im_writing_pane_ParamLimits

0x75b1,	// (0x00049c50) im_writing_pane

0x75c7,	// (0x00049c66) im_reading_pane_t1

0xe5d1,	// (0x00050c70) list_im_pane

0xe5e2,	// (0x00050c81) scroll_pane_cp07

0x75ff,	// (0x00049c9e) im_writing_pane_t1_ParamLimits

0x75ff,	// (0x00049c9e) im_writing_pane_t1

0xe5fb,	// (0x00050c9a) im_writing_pane_t2_ParamLimits

0xe5fb,	// (0x00050c9a) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x00051945) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x00051945) im_writing_pane_t

0xdfea,	// (0x00050689) input_focus_pane_cp04

0xdfea,	// (0x00050689) input_focus_pane_cp05

0x7614,	// (0x00049cb3) list_im_single_pane_ParamLimits

0x7614,	// (0x00049cb3) list_im_single_pane

0xe618,	// (0x00050cb7) list_single_im_pane_t1

0x8c77,	// (0x0004b316) blid_accuracy_pane

0x8c7f,	// (0x0004b31e) blid_compass_pane

0x8c87,	// (0x0004b326) main_location_t1

0x8c95,	// (0x0004b334) main_location_t2

0x8ca3,	// (0x0004b342) main_location_t3

0x0002,

0xf620,	// (0x00051cbf) main_location_t

0xdfea,	// (0x00050689) aid_levels_location

0xe369,	// (0x00050a08) blid_accuracy_pane_g1

0xe369,	// (0x00050a08) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x000519a7) blid_accuracy_pane_g

0xe652,	// (0x00050cf1) wml_content_pane

0xe690,	// (0x00050d2f) wml_button_pane_ParamLimits

0xe690,	// (0x00050d2f) wml_button_pane

0x762c,	// (0x00049ccb) wml_list_single_large_pane_ParamLimits

0x762c,	// (0x00049ccb) wml_list_single_large_pane

0x7643,	// (0x00049ce2) wml_list_single_medium_pane_ParamLimits

0x7643,	// (0x00049ce2) wml_list_single_medium_pane

0x765b,	// (0x00049cfa) wml_list_single_small_pane_ParamLimits

0x765b,	// (0x00049cfa) wml_list_single_small_pane

0xe6a4,	// (0x00050d43) wml_selection_box_pane_ParamLimits

0xe6a4,	// (0x00050d43) wml_selection_box_pane

0xe6b7,	// (0x00050d56) wml_list_single_pane_t1

0xe6c6,	// (0x00050d65) wml_list_single_medium_pane_t1

0xe6d5,	// (0x00050d74) wml_list_single_large_pane_t1

0xe6e4,	// (0x00050d83) input_focus_pane_cp02_ParamLimits

0xe6e4,	// (0x00050d83) input_focus_pane_cp02

0xe6f7,	// (0x00050d96) wml_selection_box_pane_g1

0xe700,	// (0x00050d9f) wml_selection_box_pane_t1_ParamLimits

0xe700,	// (0x00050d9f) wml_selection_box_pane_t1

0xe245,	// (0x000508e4) bg_wml_button_pane_ParamLimits

0xe245,	// (0x000508e4) bg_wml_button_pane

0xe718,	// (0x00050db7) wml_button_pane_g1

0xe720,	// (0x00050dbf) wml_button_pane_t1

0xe718,	// (0x00050db7) wml_button_bg_pane_g1

0xe730,	// (0x00050dcf) wml_button_bg_pane_g2

0xe738,	// (0x00050dd7) wml_button_bg_pane_g3

0xe740,	// (0x00050ddf) wml_button_bg_pane_g4

0xe748,	// (0x00050de7) wml_button_bg_pane_g5

0xe750,	// (0x00050def) wml_button_bg_pane_g6

0xe758,	// (0x00050df7) wml_button_bg_pane_g7

0xe760,	// (0x00050dff) wml_button_bg_pane_g8

0xe768,	// (0x00050e07) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x0005194a) wml_button_bg_pane_g

0x7676,	// (0x00049d15) bg_list_pane_cp02

0xe770,	// (0x00050e0f) mce_header_pane_ParamLimits

0xe770,	// (0x00050e0f) mce_header_pane

0xe784,	// (0x00050e23) mce_icon_pane

0xe784,	// (0x00050e23) mce_image_pane

0xe78d,	// (0x00050e2c) mce_text_pane_ParamLimits

0xe78d,	// (0x00050e2c) mce_text_pane

0x767f,	// (0x00049d1e) scroll_pane_cp03

0x767f,	// (0x00049d1e) scroll_pane_cp04

0xe7a1,	// (0x00050e40) scroll_pane_cp05_ParamLimits

0xe7a1,	// (0x00050e40) scroll_pane_cp05

0x7687,	// (0x00049d26) mce_header_field_pane_ParamLimits

0x7687,	// (0x00049d26) mce_header_field_pane

0x76a7,	// (0x00049d46) mce_header_field_pane_2_ParamLimits

0x76a7,	// (0x00049d46) mce_header_field_pane_2

0x76bd,	// (0x00049d5c) mce_header_field_pane_3

0x76c5,	// (0x00049d64) list_single_mce_message_pane_ParamLimits

0x76c5,	// (0x00049d64) list_single_mce_message_pane

0x76dc,	// (0x00049d7b) list_single_mce_smart_pane_ParamLimits

0x76dc,	// (0x00049d7b) list_single_mce_smart_pane

0xe7ad,	// (0x00050e4c) input_focus_pane_cp03

0xe7b6,	// (0x00050e55) list_header_data_pane

0x76fe,	// (0x00049d9d) mce_header_field_pane_t1

0x770c,	// (0x00049dab) list_single_mce_header_pane_ParamLimits

0x770c,	// (0x00049dab) list_single_mce_header_pane

0xe7be,	// (0x00050e5d) list_single_mce_header_pane_t1

0xe7cd,	// (0x00050e6c) list_single_mce_message_pane_g1

0xe7d6,	// (0x00050e75) list_single_mce_message_pane_t1

0x7742,	// (0x00049de1) bg_cale_heading_pane_cp01_ParamLimits

0x7742,	// (0x00049de1) bg_cale_heading_pane_cp01

0xe7e5,	// (0x00050e84) bg_cale_pane_cp02_ParamLimits

0xe7e5,	// (0x00050e84) bg_cale_pane_cp02

0x7765,	// (0x00049e04) cale_month_corner_pane

0x777b,	// (0x00049e1a) cale_month_day_heading_pane_ParamLimits

0x777b,	// (0x00049e1a) cale_month_day_heading_pane

0x779e,	// (0x00049e3d) cale_month_pane_g1_ParamLimits

0x779e,	// (0x00049e3d) cale_month_pane_g1

0x77ba,	// (0x00049e59) cale_month_pane_g2_ParamLimits

0x77ba,	// (0x00049e59) cale_month_pane_g2

0x77d3,	// (0x00049e72) cale_month_pane_g3_ParamLimits

0x77d3,	// (0x00049e72) cale_month_pane_g3

0x77ff,	// (0x00049e9e) cale_month_pane_g4_ParamLimits

0x77ff,	// (0x00049e9e) cale_month_pane_g4

0x782b,	// (0x00049eca) cale_month_pane_g5_ParamLimits

0x782b,	// (0x00049eca) cale_month_pane_g5

0x7857,	// (0x00049ef6) cale_month_pane_g6_ParamLimits

0x7857,	// (0x00049ef6) cale_month_pane_g6

0x7883,	// (0x00049f22) cale_month_pane_g7_ParamLimits

0x7883,	// (0x00049f22) cale_month_pane_g7

0x78af,	// (0x00049f4e) cale_month_pane_g8_ParamLimits

0x78af,	// (0x00049f4e) cale_month_pane_g8

0x78db,	// (0x00049f7a) cale_month_pane_g9_ParamLimits

0x78db,	// (0x00049f7a) cale_month_pane_g9

0x7905,	// (0x00049fa4) cale_month_pane_g10_ParamLimits

0x7905,	// (0x00049fa4) cale_month_pane_g10

0x792f,	// (0x00049fce) cale_month_pane_g11_ParamLimits

0x792f,	// (0x00049fce) cale_month_pane_g11

0x7959,	// (0x00049ff8) cale_month_pane_g12_ParamLimits

0x7959,	// (0x00049ff8) cale_month_pane_g12

0x7983,	// (0x0004a022) cale_month_pane_g13_ParamLimits

0x7983,	// (0x0004a022) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0005195d) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0005195d) cale_month_pane_g

0x79ad,	// (0x0004a04c) cale_month_week_pane

0x79be,	// (0x0004a05d) grid_cale_month_pane_ParamLimits

0x79be,	// (0x0004a05d) grid_cale_month_pane

0x79dc,	// (0x0004a07b) cale_month_day_heading_pane_t1

0x7a3a,	// (0x0004a0d9) cale_month_day_heading_pane_t2

0x7a9f,	// (0x0004a13e) cale_month_day_heading_pane_t3

0x7b04,	// (0x0004a1a3) cale_month_day_heading_pane_t4

0x7b69,	// (0x0004a208) cale_month_day_heading_pane_t5

0x7bce,	// (0x0004a26d) cale_month_day_heading_pane_t6

0x7c33,	// (0x0004a2d2) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x00051978) cale_month_day_heading_pane_t

0xe476,	// (0x00050b15) bg_cale_side_pane_cp01

0x7c98,	// (0x0004a337) cale_month_week_pane_t1

0x7caf,	// (0x0004a34e) cale_month_week_pane_t2

0x7cc6,	// (0x0004a365) cale_month_week_pane_t3

0x7cdd,	// (0x0004a37c) cale_month_week_pane_t4

0x7cf4,	// (0x0004a393) cale_month_week_pane_t5

0x7d0b,	// (0x0004a3aa) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x00051987) cale_month_week_pane_t

0x7d22,	// (0x0004a3c1) cell_cale_month_pane_ParamLimits

0x7d22,	// (0x0004a3c1) cell_cale_month_pane

0x7dc8,	// (0x0004a467) cell_cale_month_pane_g1

0x7dd4,	// (0x0004a473) cell_cale_month_pane_t1_ParamLimits

0x7dd4,	// (0x0004a473) cell_cale_month_pane_t1

0xe484,	// (0x00050b23) grid_highlight_pane_cp08

0xe369,	// (0x00050a08) main_smil_g1

0x7df0,	// (0x0004a48f) smil_status_pane

0xe81a,	// (0x00050eb9) smil_text_pane

0x29a1,	// (0x00045040) bg_popup_call3_rect_pane_g8

0x29a9,	// (0x00045048) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x00051c40) bg_popup_call3_rect_pane_g

0x2c72,	// (0x00045311) smil_status_volume_pane_g1

0xe824,	// (0x00050ec3) smil_status_pane_t1

0x8fb8,	// (0x0004b657) volume_smil_pane

0xe83b,	// (0x00050eda) list_smil_text_pane

0x7e01,	// (0x0004a4a0) scroll_pane_cp011

0x7e0a,	// (0x0004a4a9) smil_text_list_pane_t1_ParamLimits

0x7e0a,	// (0x0004a4a9) smil_text_list_pane_t1

0x7e4f,	// (0x0004a4ee) aid_volume_smil_ParamLimits

0x7e4f,	// (0x0004a4ee) aid_volume_smil

0xe369,	// (0x00050a08) smil_volume_pane_g1

0xe369,	// (0x00050a08) smil_volume_pane_g2

0x0001,

0xf308,	// (0x000519a7) smil_volume_pane_g

0xe314,	// (0x000509b3) listscroll_cale_day_pane

0xe845,	// (0x00050ee4) bg_cale_pane

0xe85d,	// (0x00050efc) list_cale_pane

0xe86e,	// (0x00050f0d) scroll_pane_cp09

0xe87f,	// (0x00050f1e) cale_bg_pane_g1

0xe887,	// (0x00050f26) cale_bg_pane_g2

0xe88f,	// (0x00050f2e) cale_bg_pane_g3

0xe897,	// (0x00050f36) cale_bg_pane_g4

0xe89f,	// (0x00050f3e) cale_bg_pane_g5

0xe8a7,	// (0x00050f46) cale_bg_pane_g6

0xe8af,	// (0x00050f4e) cale_bg_pane_g7

0xe8b7,	// (0x00050f56) cale_bg_pane_g8

0xe8bf,	// (0x00050f5e) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x000519ac) cale_bg_pane_g

0x7e71,	// (0x0004a510) list_cale_time_pane_ParamLimits

0x7e71,	// (0x0004a510) list_cale_time_pane

0xe8c7,	// (0x00050f66) list_cale_time_pane_g1_ParamLimits

0xe8c7,	// (0x00050f66) list_cale_time_pane_g1

0xe8d3,	// (0x00050f72) list_cale_time_pane_g2_ParamLimits

0xe8d3,	// (0x00050f72) list_cale_time_pane_g2

0x7e88,	// (0x0004a527) list_cale_time_pane_g3_ParamLimits

0x7e88,	// (0x0004a527) list_cale_time_pane_g3

0x7e94,	// (0x0004a533) list_cale_time_pane_g4_ParamLimits

0x7e94,	// (0x0004a533) list_cale_time_pane_g4

0x7ea0,	// (0x0004a53f) list_cale_time_pane_g5_ParamLimits

0x7ea0,	// (0x0004a53f) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x000519bf) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x000519bf) list_cale_time_pane_g

0xe8ed,	// (0x00050f8c) list_cale_time_pane_t1_ParamLimits

0xe8ed,	// (0x00050f8c) list_cale_time_pane_t1

0xe915,	// (0x00050fb4) list_cale_time_pane_t2_ParamLimits

0xe915,	// (0x00050fb4) list_cale_time_pane_t2

0x81b7,	// (0x0004a856) aid_blid_cardinal_pane

0x81f5,	// (0x0004a894) compass_pane_t4

0xe93d,	// (0x00050fdc) list_cale_time_pane_t4_ParamLimits

0xe93d,	// (0x00050fdc) list_cale_time_pane_t4

0x8203,	// (0x0004a8a2) compass_pane_t5

0x8211,	// (0x0004a8b0) compass_pane_t6

0x821f,	// (0x0004a8be) compass_pane_t7

0x1630,	// (0x00043ccf) navi_pane_cc_t1

0x17d4,	// (0x00043e73) aid_phob_thumbnail_center_pane

0x8824,	// (0x0004aec3) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x000519cc) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x000519cc) list_cale_time_pane_t

0xdc43,	// (0x000502e2) bg_popup_window_pane_cp02_ParamLimits

0xdc43,	// (0x000502e2) bg_popup_window_pane_cp02

0xe965,	// (0x00051004) heading_pane_cp01_ParamLimits

0xe965,	// (0x00051004) heading_pane_cp01

0xe971,	// (0x00051010) loc_req_pane_ParamLimits

0xe971,	// (0x00051010) loc_req_pane

0xe981,	// (0x00051020) loc_type_pane_ParamLimits

0xe981,	// (0x00051020) loc_type_pane

0xe993,	// (0x00051032) loc_type_pane_t1_ParamLimits

0xe993,	// (0x00051032) loc_type_pane_t1

0xe9a5,	// (0x00051044) loc_type_pane_t2_ParamLimits

0xe9a5,	// (0x00051044) loc_type_pane_t2

0xe9b7,	// (0x00051056) loc_type_pane_t3_ParamLimits

0xe9b7,	// (0x00051056) loc_type_pane_t3

0x0002,

0xf334,	// (0x000519d3) loc_type_pane_t_ParamLimits

0xf334,	// (0x000519d3) loc_type_pane_t

0xe9c9,	// (0x00051068) list_loc_req_pane

0xe9d3,	// (0x00051072) scroll_pane_cp012

0x7eac,	// (0x0004a54b) list_single_loc_request_popup_menu_pane_ParamLimits

0x7eac,	// (0x0004a54b) list_single_loc_request_popup_menu_pane

0xe9dc,	// (0x0005107b) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe9dc,	// (0x0005107b) list_single_loc_request_popup_menu_pane_g1

0xe9e8,	// (0x00051087) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe9e8,	// (0x00051087) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x000519da) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x000519da) list_single_loc_request_popup_menu_pane_g

0xe9f4,	// (0x00051093) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe9f4,	// (0x00051093) list_single_loc_request_popup_menu_pane_t1

0x7ebe,	// (0x0004a55d) bg_popup_window_pane_cp03_ParamLimits

0x7ebe,	// (0x0004a55d) bg_popup_window_pane_cp03

0x7ecc,	// (0x0004a56b) heading_loc_req_pane_ParamLimits

0x7ecc,	// (0x0004a56b) heading_loc_req_pane

0x7ed8,	// (0x0004a577) popup_dyc_status_message_window_g1_ParamLimits

0x7ed8,	// (0x0004a577) popup_dyc_status_message_window_g1

0x7ee4,	// (0x0004a583) popup_dyc_status_message_window_t1_ParamLimits

0x7ee4,	// (0x0004a583) popup_dyc_status_message_window_t1

0x7ef6,	// (0x0004a595) popup_dyc_status_message_window_t2_ParamLimits

0x7ef6,	// (0x0004a595) popup_dyc_status_message_window_t2

0x7f08,	// (0x0004a5a7) popup_dyc_status_message_window_t3_ParamLimits

0x7f08,	// (0x0004a5a7) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x000519df) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x000519df) popup_dyc_status_message_window_t

0xdfea,	// (0x00050689) bg_heading_pane_cp01

0xea0a,	// (0x000510a9) heading_loc_req_pane_g1

0xea12,	// (0x000510b1) heading_loc_req_pane_g2

0xea1a,	// (0x000510b9) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x000519e6) heading_loc_req_pane_g

0xea22,	// (0x000510c1) heading_loc_req_pane_t1

0xea31,	// (0x000510d0) bg_popup_sub_pane_cp01_ParamLimits

0xea31,	// (0x000510d0) bg_popup_sub_pane_cp01

0xea3f,	// (0x000510de) popup_cale_events_window_g1_ParamLimits

0xea3f,	// (0x000510de) popup_cale_events_window_g1

0xea5f,	// (0x000510fe) popup_cale_events_window_g2_ParamLimits

0xea5f,	// (0x000510fe) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x00051a1a) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x00051a1a) popup_cale_events_window_g

0xea7f,	// (0x0005111e) popup_cale_events_window_t1_ParamLimits

0xea7f,	// (0x0005111e) popup_cale_events_window_t1

0xea91,	// (0x00051130) popup_cale_events_window_t2_ParamLimits

0xea91,	// (0x00051130) popup_cale_events_window_t2

0xeacf,	// (0x0005116e) popup_cale_events_window_t3_ParamLimits

0xeacf,	// (0x0005116e) popup_cale_events_window_t3

0xeb09,	// (0x000511a8) popup_cale_events_window_t4_ParamLimits

0xeb09,	// (0x000511a8) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x00051a1f) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x00051a1f) popup_cale_events_window_t

0x7f8e,	// (0x0004a62d) call_type_pane

0x17ec,	// (0x00043e8b) popup_call_status_window_g1

0x7f9a,	// (0x0004a639) popup_call_status_window_g2

0x7fa6,	// (0x0004a645) popup_call_status_window_g3

0x0002,

0xf389,	// (0x00051a28) popup_call_status_window_g

0xeb3f,	// (0x000511de) call_type_pane_g1

0xeb48,	// (0x000511e7) call_type_pane_g2

0x0001,

0xf390,	// (0x00051a2f) call_type_pane_g

0xdfea,	// (0x00050689) bg_popup_sub_pane_cp02

0xeb51,	// (0x000511f0) listscroll_popup_wml_pane

0xeb59,	// (0x000511f8) list_wml_pane

0xeb63,	// (0x00051202) scroll_pane_cp013

0x7fb2,	// (0x0004a651) list_single_graphic_popup_wml_pane_ParamLimits

0x7fb2,	// (0x0004a651) list_single_graphic_popup_wml_pane

0xe369,	// (0x00050a08) list_single_graphic_popup_wml_pane_g1

0xeb6c,	// (0x0005120b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x00051a34) list_single_graphic_popup_wml_pane_g

0xeb74,	// (0x00051213) list_single_graphic_popup_wml_pane_t1

0xeb8a,	// (0x00051229) aid_call_pane

0xe23d,	// (0x000508dc) popup_clock_analogue_window_g1

0xe23d,	// (0x000508dc) popup_clock_analogue_window_g2

0x7fc6,	// (0x0004a665) popup_clock_analogue_window_g3

0x7fc6,	// (0x0004a665) popup_clock_analogue_window_g4

0xe369,	// (0x00050a08) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x00051a39) popup_clock_analogue_window_g

0x7fce,	// (0x0004a66d) popup_clock_analogue_window_t1

0x7fdc,	// (0x0004a67b) clock_digital_number_pane_ParamLimits

0x7fdc,	// (0x0004a67b) clock_digital_number_pane

0x7fe8,	// (0x0004a687) clock_digital_number_pane_cp02_ParamLimits

0x7fe8,	// (0x0004a687) clock_digital_number_pane_cp02

0x7ff4,	// (0x0004a693) clock_digital_number_pane_cp03_ParamLimits

0x7ff4,	// (0x0004a693) clock_digital_number_pane_cp03

0x8000,	// (0x0004a69f) clock_digital_number_pane_cp04_ParamLimits

0x8000,	// (0x0004a69f) clock_digital_number_pane_cp04

0x800c,	// (0x0004a6ab) clock_digital_separator_pane_ParamLimits

0x800c,	// (0x0004a6ab) clock_digital_separator_pane

0x8018,	// (0x0004a6b7) popup_clock_digital_window_t1

0xe369,	// (0x00050a08) clock_digital_number_pane_g1

0xe369,	// (0x00050a08) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x000519a7) clock_digital_number_pane_g

0xe369,	// (0x00050a08) clock_digital_separator_pane_g1

0xe369,	// (0x00050a08) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x000519a7) clock_digital_separator_pane_g

0xdfea,	// (0x00050689) bg_popup_window_pane_cp04

0xeb92,	// (0x00051231) heading_pane_cp03

0xeb9a,	// (0x00051239) listscroll_popup_gms_pane

0xeba2,	// (0x00051241) grid_large_graphic_popup_pane

0xebac,	// (0x0005124b) listscroll_popup_gms_pane_g1

0xebb4,	// (0x00051253) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x00051a44) listscroll_popup_gms_pane_g

0xe688,	// (0x00050d27) scroll_pane_cp014

0x8035,	// (0x0004a6d4) cell_large_graphic_popup_pane_ParamLimits

0x8035,	// (0x0004a6d4) cell_large_graphic_popup_pane

0x804c,	// (0x0004a6eb) cell_large_graphic_popup_pane_g1_ParamLimits

0x804c,	// (0x0004a6eb) cell_large_graphic_popup_pane_g1

0xebbc,	// (0x0005125b) cell_large_graphic_popup_pane_g2_ParamLimits

0xebbc,	// (0x0005125b) cell_large_graphic_popup_pane_g2

0xebc8,	// (0x00051267) cell_large_graphic_popup_pane_g3_ParamLimits

0xebc8,	// (0x00051267) cell_large_graphic_popup_pane_g3

0xebd5,	// (0x00051274) cell_large_graphic_popup_pane_g4_ParamLimits

0xebd5,	// (0x00051274) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x00051a49) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x00051a49) cell_large_graphic_popup_pane_g

0xebe5,	// (0x00051284) grid_highlight_pane_cp010

0xe369,	// (0x00050a08) bg_popup_call_pane_g1

0xebef,	// (0x0005128e) list_single_graphic_popup_conf_pane_ParamLimits

0xebef,	// (0x0005128e) list_single_graphic_popup_conf_pane

0xec02,	// (0x000512a1) list_highlight_pane_cp01

0xec0b,	// (0x000512aa) list_single_graphic_popup_conf_pane_g1

0xec13,	// (0x000512b2) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x00051a52) list_single_graphic_popup_conf_pane_g

0xec1b,	// (0x000512ba) list_single_graphic_popup_conf_pane_t1

0xec29,	// (0x000512c8) linegrid_cams_pane_g1

0x8058,	// (0x0004a6f7) linegrid_cams_pane_g2

0xe422,	// (0x00050ac1) linegrid_cams_pane_g3

0xec32,	// (0x000512d1) linegrid_cams_pane_g4

0x8061,	// (0x0004a700) linegrid_cams_pane_g5

0x806a,	// (0x0004a709) linegrid_cams_pane_g6

0xe4b7,	// (0x00050b56) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x00051a57) linegrid_cams_pane_g

0xec3b,	// (0x000512da) popup_clock_analogue_window

0xec3b,	// (0x000512da) popup_clock_digital_window

0xdfea,	// (0x00050689) popup_phob_thumbnail_window

0xe369,	// (0x00050a08) call_video_uplink_pane_g1

0xec44,	// (0x000512e3) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x00051a66) call_video_uplink_pane_g

0xe484,	// (0x00050b23) video_uplink_pane

0xec4c,	// (0x000512eb) mce_image_pane_g1

0x8073,	// (0x0004a712) mce_image_pane_g2

0x807b,	// (0x0004a71a) mce_image_pane_g3

0x8083,	// (0x0004a722) mce_image_pane_g4

0x808b,	// (0x0004a72a) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x00051a6b) mce_image_pane_g

0xec56,	// (0x000512f5) control_top_pane_stacon_cp01_ParamLimits

0xec56,	// (0x000512f5) control_top_pane_stacon_cp01

0xec66,	// (0x00051305) uni_indicator_pane_stacon_cp01_ParamLimits

0xec66,	// (0x00051305) uni_indicator_pane_stacon_cp01

0xec77,	// (0x00051316) bg_popup_sub_pane_cp03

0xec81,	// (0x00051320) chi_dic_find_pane

0x8093,	// (0x0004a732) listscroll_chi_dic_pane

0xec89,	// (0x00051328) main_pane_chidic_g1

0xec91,	// (0x00051330) chi_dic_find_pane_t1

0xec9f,	// (0x0005133e) find_chidic_pane

0xeca8,	// (0x00051347) chi_dic_list_pane_ParamLimits

0xeca8,	// (0x00051347) chi_dic_list_pane

0xecb9,	// (0x00051358) scroll_pane_cp020

0xecc1,	// (0x00051360) find_chidic_pane_t1

0xdfea,	// (0x00050689) input_focus_pane_cp06

0x80a5,	// (0x0004a744) list_chi_dic_pane_ParamLimits

0x80a5,	// (0x0004a744) list_chi_dic_pane

0x80b8,	// (0x0004a757) list_chi_dic_pane_t1_ParamLimits

0x80b8,	// (0x0004a757) list_chi_dic_pane_t1

0xdfea,	// (0x00050689) list_highlight_pane_cp020

0xecd0,	// (0x0005136f) bg_cale_heading_pane_g1

0x80cb,	// (0x0004a76a) bg_cale_heading_pane_g2

0x80d3,	// (0x0004a772) bg_cale_heading_pane_g3

0x80db,	// (0x0004a77a) bg_cale_heading_pane_g4

0x80e3,	// (0x0004a782) bg_cale_heading_pane_g5

0x80eb,	// (0x0004a78a) bg_cale_heading_pane_g6

0x80f3,	// (0x0004a792) bg_cale_heading_pane_g7

0x80fb,	// (0x0004a79a) bg_cale_heading_pane_g8

0x8103,	// (0x0004a7a2) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x00051a76) bg_cale_heading_pane_g

0xecd0,	// (0x0005136f) bg_cale_side_pane_g1

0x810b,	// (0x0004a7aa) bg_cale_side_pane_g2

0x8113,	// (0x0004a7b2) bg_cale_side_pane_g3

0x811b,	// (0x0004a7ba) bg_cale_side_pane_g4

0x8123,	// (0x0004a7c2) bg_cale_side_pane_g5

0x812b,	// (0x0004a7ca) bg_cale_side_pane_g6

0x8133,	// (0x0004a7d2) bg_cale_side_pane_g7

0x813b,	// (0x0004a7da) bg_cale_side_pane_g8

0x8143,	// (0x0004a7e2) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x00051a89) bg_cale_side_pane_g

0x814b,	// (0x0004a7ea) popup_call_status_window_ParamLimits

0x814b,	// (0x0004a7ea) popup_call_status_window

0xecd8,	// (0x00051377) stacon_top_pane

0xece0,	// (0x0005137f) status_pane_ParamLimits

0xece0,	// (0x0005137f) status_pane

0x15af,	// (0x00043c4e) status_small_pane

0x15b7,	// (0x00043c56) control_pane

0xdfea,	// (0x00050689) stacon_bottom_pane

0x15bf,	// (0x00043c5e) list_single_mce_smart_pane_t1_ParamLimits

0x15bf,	// (0x00043c5e) list_single_mce_smart_pane_t1

0x15d2,	// (0x00043c71) list_single_mce_smart_pane_t2_ParamLimits

0x15d2,	// (0x00043c71) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x00051a9c) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x00051a9c) list_single_mce_smart_pane_t

0x815a,	// (0x0004a7f9) compass_pane

0x8163,	// (0x0004a802) main_location2_pane_t1

0x8179,	// (0x0004a818) main_location2_pane_t2

0x818f,	// (0x0004a82e) main_location2_pane_t3

0x0003,

0xf402,	// (0x00051aa1) main_location2_pane_t

0x15fa,	// (0x00043c99) compass_pane_g1_ParamLimits

0x15fa,	// (0x00043c99) compass_pane_g1

0x81d7,	// (0x0004a876) compass_pane_t1

0x81e6,	// (0x0004a885) compass_pane_t2

0x0005,

0xf40b,	// (0x00051aaa) compass_pane_t

0x822d,	// (0x0004a8cc) text_secondary_cp61

0x1627,	// (0x00043cc6) navi_pane_cams_g5

0x1668,	// (0x00043d07) navi_pane_im_t1

0x1676,	// (0x00043d15) navi_pane_mp_g1_ParamLimits

0x1676,	// (0x00043d15) navi_pane_mp_g1

0x168a,	// (0x00043d29) navi_pane_mp_g2_ParamLimits

0x168a,	// (0x00043d29) navi_pane_mp_g2

0x1696,	// (0x00043d35) navi_pane_mp_g3_ParamLimits

0x1696,	// (0x00043d35) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x00051abe) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x00051abe) navi_pane_mp_g

0x16a2,	// (0x00043d41) navi_pane_mp_t1

0x16b0,	// (0x00043d4f) navi_pane_mp_t2

0x0002,

0xf426,	// (0x00051ac5) navi_pane_mp_t

0x171d,	// (0x00043dbc) navi_pane_vt_g1

0x16a2,	// (0x00043d41) navi_pane_vt_t1

0x1725,	// (0x00043dc4) navi_slider_pane

0x172d,	// (0x00043dcc) zooming_pane

0x1735,	// (0x00043dd4) navi_slider_pane_g1

0x82a4,	// (0x0004a943) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x00051acc) navi_slider_pane_g

0x1759,	// (0x00043df8) aid_levels_zoom

0x1761,	// (0x00043e00) zooming_pane_g1

0x1769,	// (0x00043e08) zooming_pane_g2

0x1769,	// (0x00043e08) zooming_pane_g3

0x0002,

0xf43c,	// (0x00051adb) zooming_pane_g

0x1771,	// (0x00043e10) level_10_zoom

0x177a,	// (0x00043e19) level_11_zoom

0x1783,	// (0x00043e22) level_1_zoom

0x178c,	// (0x00043e2b) level_2_zoom

0x1795,	// (0x00043e34) level_3_zoom

0x179e,	// (0x00043e3d) level_4_zoom

0x17a7,	// (0x00043e46) level_5_zoom

0x17b0,	// (0x00043e4f) level_6_zoom

0x17b9,	// (0x00043e58) level_7_zoom

0x17c2,	// (0x00043e61) level_8_zoom

0x17cb,	// (0x00043e6a) level_9_zoom

0x17dc,	// (0x00043e7b) popup_phob_thumbnail_window_g1

0x17e4,	// (0x00043e83) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x00051ae2) popup_phob_thumbnail_window_g

0x2b43,	// (0x000451e2) level_1_location

0x2b4b,	// (0x000451ea) level_2_location

0x2b53,	// (0x000451f2) level_3_location

0x2b5b,	// (0x000451fa) level_4_location

0x172d,	// (0x00043dcc) level_5_location

0x82b6,	// (0x0004a955) mce_icon_pane_g1

0x82be,	// (0x0004a95d) mce_icon_pane_g2

0x0001,

0xf448,	// (0x00051ae7) mce_icon_pane_g

0x82c6,	// (0x0004a965) main_mup_pane_g1_ParamLimits

0x82c6,	// (0x0004a965) main_mup_pane_g1

0x82de,	// (0x0004a97d) main_mup_pane_g2_ParamLimits

0x82de,	// (0x0004a97d) main_mup_pane_g2

0x82fa,	// (0x0004a999) main_mup_pane_g3_ParamLimits

0x82fa,	// (0x0004a999) main_mup_pane_g3

0x8316,	// (0x0004a9b5) main_mup_pane_g4_ParamLimits

0x8316,	// (0x0004a9b5) main_mup_pane_g4

0x8332,	// (0x0004a9d1) main_mup_pane_g5_ParamLimits

0x8332,	// (0x0004a9d1) main_mup_pane_g5

0x834f,	// (0x0004a9ee) main_mup_pane_g6_ParamLimits

0x834f,	// (0x0004a9ee) main_mup_pane_g6

0x836b,	// (0x0004aa0a) main_mup_pane_g7_ParamLimits

0x836b,	// (0x0004aa0a) main_mup_pane_g7

0x8387,	// (0x0004aa26) main_mup_pane_g8_ParamLimits

0x8387,	// (0x0004aa26) main_mup_pane_g8

0x83a3,	// (0x0004aa42) main_mup_pane_g9_ParamLimits

0x83a3,	// (0x0004aa42) main_mup_pane_g9

0x83ba,	// (0x0004aa59) main_mup_pane_g10_ParamLimits

0x83ba,	// (0x0004aa59) main_mup_pane_g10

0x83d1,	// (0x0004aa70) main_mup_pane_g11_ParamLimits

0x83d1,	// (0x0004aa70) main_mup_pane_g11

0x83e5,	// (0x0004aa84) main_mup_pane_g12_ParamLimits

0x83e5,	// (0x0004aa84) main_mup_pane_g12

0x83f1,	// (0x0004aa90) main_mup_pane_g13_ParamLimits

0x83f1,	// (0x0004aa90) main_mup_pane_g13

0x000c,

0xf44d,	// (0x00051aec) main_mup_pane_g_ParamLimits

0xf44d,	// (0x00051aec) main_mup_pane_g

0x8405,	// (0x0004aaa4) main_mup_pane_t1_ParamLimits

0x8405,	// (0x0004aaa4) main_mup_pane_t1

0x8422,	// (0x0004aac1) main_mup_pane_t2_ParamLimits

0x8422,	// (0x0004aac1) main_mup_pane_t2

0x843c,	// (0x0004aadb) main_mup_pane_t3_ParamLimits

0x843c,	// (0x0004aadb) main_mup_pane_t3

0x8456,	// (0x0004aaf5) main_mup_pane_t4_ParamLimits

0x8456,	// (0x0004aaf5) main_mup_pane_t4

0x8468,	// (0x0004ab07) main_mup_pane_t5_ParamLimits

0x8468,	// (0x0004ab07) main_mup_pane_t5

0x847a,	// (0x0004ab19) main_mup_pane_t6_ParamLimits

0x847a,	// (0x0004ab19) main_mup_pane_t6

0x0005,

0xf468,	// (0x00051b07) main_mup_pane_t_ParamLimits

0xf468,	// (0x00051b07) main_mup_pane_t

0x8490,	// (0x0004ab2f) mup_progress_pane_ParamLimits

0x8490,	// (0x0004ab2f) mup_progress_pane

0x849c,	// (0x0004ab3b) mup_visualizer_pane_ParamLimits

0x849c,	// (0x0004ab3b) mup_visualizer_pane

0x84ca,	// (0x0004ab69) mup_volume_pane_ParamLimits

0x84ca,	// (0x0004ab69) mup_volume_pane

0x17ec,	// (0x00043e8b) mup_visualizer_pane_g1_ParamLimits

0x17ec,	// (0x00043e8b) mup_visualizer_pane_g1

0x17ec,	// (0x00043e8b) mup_visualizer_pane_g2_ParamLimits

0x17ec,	// (0x00043e8b) mup_visualizer_pane_g2

0x15fa,	// (0x00043c99) mup_visualizer_pane_g3_ParamLimits

0x15fa,	// (0x00043c99) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x00051b14) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x00051b14) mup_visualizer_pane_g

0xe369,	// (0x00050a08) mup_volume_pane_g1

0x1802,	// (0x00043ea1) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x00051b1b) mup_volume_pane_g

0xe369,	// (0x00050a08) mup_progress_pane_g1

0x180b,	// (0x00043eaa) mup_progress_pane_g2

0x1814,	// (0x00043eb3) mup_progress_pane_g3

0x0002,

0xf481,	// (0x00051b20) mup_progress_pane_g

0xdfea,	// (0x00050689) bg_popup_window_pane_cp05

0x181d,	// (0x00043ebc) heading_pane_cp02_ParamLimits

0x181d,	// (0x00043ebc) heading_pane_cp02

0x1837,	// (0x00043ed6) list_popup_blid_pane

0x183f,	// (0x00043ede) list_blid_sat_info_pane_ParamLimits

0x183f,	// (0x00043ede) list_blid_sat_info_pane

0x1852,	// (0x00043ef1) list_blid_sat_info_pane_g1

0x185a,	// (0x00043ef9) list_blid_sat_info_pane_t1

0x85bd,	// (0x0004ac5c) mup_equalizer_pane_ParamLimits

0x85bd,	// (0x0004ac5c) mup_equalizer_pane

0x85d6,	// (0x0004ac75) mup_equalizer_pane_cp1_ParamLimits

0x85d6,	// (0x0004ac75) mup_equalizer_pane_cp1

0x85ef,	// (0x0004ac8e) mup_equalizer_pane_cp2_ParamLimits

0x85ef,	// (0x0004ac8e) mup_equalizer_pane_cp2

0x8608,	// (0x0004aca7) mup_equalizer_pane_cp3_ParamLimits

0x8608,	// (0x0004aca7) mup_equalizer_pane_cp3

0x8621,	// (0x0004acc0) mup_equalizer_pane_cp4_ParamLimits

0x8621,	// (0x0004acc0) mup_equalizer_pane_cp4

0x863a,	// (0x0004acd9) mup_equalizer_pane_cp5

0x864c,	// (0x0004aceb) mup_equalizer_pane_cp6

0x865e,	// (0x0004acfd) mup_equalizer_pane_cp7

0x2a21,	// (0x000450c0) bg_popup_call_poc_act_pane_g9

0x2a29,	// (0x000450c8) bg_popup_call_poc_act_pane_g10

0x2a31,	// (0x000450d0) bg_popup_call_poc_act_pane_g11

0x000a,

0xe245,	// (0x000508e4) mup_scale_pane

0xe369,	// (0x00050a08) mup_scale_pane_g1

0x1868,	// (0x00043f07) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x00051b3c) mup_scale_pane_g

0x188c,	// (0x00043f2b) msg_data_pane

0x1894,	// (0x00043f33) scroll_pane_cp017

0x8682,	// (0x0004ad21) bg_list_pane_cp04_ParamLimits

0x8682,	// (0x0004ad21) bg_list_pane_cp04

0x189c,	// (0x00043f3b) msg_data_pane_g1

0x8073,	// (0x0004a712) msg_data_pane_g2

0x807b,	// (0x0004a71a) msg_data_pane_g3

0x86a2,	// (0x0004ad41) msg_data_pane_g4

0x808b,	// (0x0004a72a) msg_data_pane_g5

0x82b6,	// (0x0004a955) msg_data_pane_g6

0x86aa,	// (0x0004ad49) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x00051b4b) msg_data_pane_g

0x86b2,	// (0x0004ad51) msg_text_pane_ParamLimits

0x86b2,	// (0x0004ad51) msg_text_pane

0x86db,	// (0x0004ad7a) qrid_highlight_pane_cp011_ParamLimits

0x86db,	// (0x0004ad7a) qrid_highlight_pane_cp011

0xdfea,	// (0x00050689) msg_body_pane

0xdfea,	// (0x00050689) msg_header_pane

0x18ad,	// (0x00043f4c) input_focus_pane_cp07

0x86fd,	// (0x0004ad9c) msg_header_pane_t1_ParamLimits

0x86fd,	// (0x0004ad9c) msg_header_pane_t1

0x18c2,	// (0x00043f61) msg_header_pane_t2_ParamLimits

0x18c2,	// (0x00043f61) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x00051b5f) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x00051b5f) msg_header_pane_t

0x18d4,	// (0x00043f73) msg_body_pane_g1

0x870f,	// (0x0004adae) msg_body_pane_t1_ParamLimits

0x870f,	// (0x0004adae) msg_body_pane_t1

0x18dc,	// (0x00043f7b) msg_body_pane_t2_ParamLimits

0x18dc,	// (0x00043f7b) msg_body_pane_t2

0x18ee,	// (0x00043f8d) msg_body_pane_t3_ParamLimits

0x18ee,	// (0x00043f8d) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x00051b64) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x00051b64) msg_body_pane_t

0x8788,	// (0x0004ae27) main_viewer_pane_g1_ParamLimits

0x8788,	// (0x0004ae27) main_viewer_pane_g1

0x8794,	// (0x0004ae33) main_viewer_pane_g2_ParamLimits

0x8794,	// (0x0004ae33) main_viewer_pane_g2

0x87a0,	// (0x0004ae3f) main_viewer_pane_g3_ParamLimits

0x87a0,	// (0x0004ae3f) main_viewer_pane_g3

0x87af,	// (0x0004ae4e) main_viewer_pane_g4_ParamLimits

0x87af,	// (0x0004ae4e) main_viewer_pane_g4

0x87be,	// (0x0004ae5d) main_viewer_pane_g5_ParamLimits

0x87be,	// (0x0004ae5d) main_viewer_pane_g5

0x87be,	// (0x0004ae5d) main_viewer_pane_g7_ParamLimits

0x87be,	// (0x0004ae5d) main_viewer_pane_g7

0x87d0,	// (0x0004ae6f) main_viewer_pane_g8_ParamLimits

0x87d0,	// (0x0004ae6f) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x00051b74) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x00051b74) main_viewer_pane_g

0x1900,	// (0x00043f9f) viewer_content_pane_ParamLimits

0x1900,	// (0x00043f9f) viewer_content_pane

0x8800,	// (0x0004ae9f) main_postcard_pane_g1_ParamLimits

0x8800,	// (0x0004ae9f) main_postcard_pane_g1

0x880c,	// (0x0004aeab) main_postcard_pane_g2_ParamLimits

0x880c,	// (0x0004aeab) main_postcard_pane_g2

0x8818,	// (0x0004aeb7) main_postcard_pane_g3_ParamLimits

0x8818,	// (0x0004aeb7) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x00051b85) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x00051b85) main_postcard_pane_g

0x8824,	// (0x0004aec3) main_postcard_pane_g4

0x2c5f,	// (0x000452fe) smil_status_volume_pane_g2

0x8848,	// (0x0004aee7) postcard_pane_ParamLimits

0x8848,	// (0x0004aee7) postcard_pane

0x17ec,	// (0x00043e8b) postcard_pane_g1_ParamLimits

0x17ec,	// (0x00043e8b) postcard_pane_g1

0x8878,	// (0x0004af17) postcard_pane_g2_ParamLimits

0x8878,	// (0x0004af17) postcard_pane_g2

0x8884,	// (0x0004af23) postcard_pane_g3_ParamLimits

0x8884,	// (0x0004af23) postcard_pane_g3

0x191c,	// (0x00043fbb) postcard_pane_g4_ParamLimits

0x191c,	// (0x00043fbb) postcard_pane_g4

0x8890,	// (0x0004af2f) postcard_pane_g5_ParamLimits

0x8890,	// (0x0004af2f) postcard_pane_g5

0x889c,	// (0x0004af3b) postcard_pane_g6_ParamLimits

0x889c,	// (0x0004af3b) postcard_pane_g6

0x190e,	// (0x00043fad) postcard_pane_g7_ParamLimits

0x190e,	// (0x00043fad) postcard_pane_g7

0x0006,

0xf4f3,	// (0x00051b92) postcard_pane_g_ParamLimits

0xf4f3,	// (0x00051b92) postcard_pane_g

0x88a8,	// (0x0004af47) main_mp2_pane_g1_ParamLimits

0x88a8,	// (0x0004af47) main_mp2_pane_g1

0x88b4,	// (0x0004af53) main_mp2_pane_g2_ParamLimits

0x88b4,	// (0x0004af53) main_mp2_pane_g2

0x88c0,	// (0x0004af5f) main_mp2_pane_g3_ParamLimits

0x88c0,	// (0x0004af5f) main_mp2_pane_g3

0x0002,

0xf502,	// (0x00051ba1) main_mp2_pane_g_ParamLimits

0xf502,	// (0x00051ba1) main_mp2_pane_g

0x88cc,	// (0x0004af6b) main_mp2_pane_t1_ParamLimits

0x88cc,	// (0x0004af6b) main_mp2_pane_t1

0x88e1,	// (0x0004af80) main_mp2_pane_t2_ParamLimits

0x88e1,	// (0x0004af80) main_mp2_pane_t2

0x88f3,	// (0x0004af92) main_mp2_pane_t3_ParamLimits

0x88f3,	// (0x0004af92) main_mp2_pane_t3

0x0002,

0xf509,	// (0x00051ba8) main_mp2_pane_t_ParamLimits

0xf509,	// (0x00051ba8) main_mp2_pane_t

0x192a,	// (0x00043fc9) pec_content_pane_ParamLimits

0x192a,	// (0x00043fc9) pec_content_pane

0xe688,	// (0x00050d27) scroll_pane_cp015

0x193c,	// (0x00043fdb) pec_attribute_pane_ParamLimits

0x193c,	// (0x00043fdb) pec_attribute_pane

0x8905,	// (0x0004afa4) pec_content_pane_g1_ParamLimits

0x8905,	// (0x0004afa4) pec_content_pane_g1

0x194c,	// (0x00043feb) pec_content_pane_t1_ParamLimits

0x194c,	// (0x00043feb) pec_content_pane_t1

0x195e,	// (0x00043ffd) pec_content_pane_t2_ParamLimits

0x195e,	// (0x00043ffd) pec_content_pane_t2

0x0001,

0xf510,	// (0x00051baf) pec_content_pane_t_ParamLimits

0xf510,	// (0x00051baf) pec_content_pane_t

0x8911,	// (0x0004afb0) list_single_graphic_pane_cp01_ParamLimits

0x8911,	// (0x0004afb0) list_single_graphic_pane_cp01

0xe245,	// (0x000508e4) bg_popup_sub_pane_cp04

0x1970,	// (0x0004400f) popup_mup_playback_window_g1

0x197c,	// (0x0004401b) popup_mup_playback_window_t1

0x1991,	// (0x00044030) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x00051bb4) popup_mup_playback_window_t

0x19c8,	// (0x00044067) main_image_pane_g1_ParamLimits

0x19c8,	// (0x00044067) main_image_pane_g1

0x1a0b,	// (0x000440aa) scroll_pane_cp018_ParamLimits

0x1a0b,	// (0x000440aa) scroll_pane_cp018

0x1a23,	// (0x000440c2) scroll_pane_cp016_ParamLimits

0x1a23,	// (0x000440c2) scroll_pane_cp016

0x8996,	// (0x0004b035) smil2_image_pane_ParamLimits

0x8996,	// (0x0004b035) smil2_image_pane

0x89be,	// (0x0004b05d) smil2_root_pane_ParamLimits

0x89be,	// (0x0004b05d) smil2_root_pane

0x89ea,	// (0x0004b089) smil2_text_pane_ParamLimits

0x89ea,	// (0x0004b089) smil2_text_pane

0xdfea,	// (0x00050689) bg_list_pane_cp06

0x1a5f,	// (0x000440fe) grid_radio_pane

0xdfea,	// (0x00050689) bg_popup_window_pane_cp06

0x1a67,	// (0x00044106) main_fmradio_pane_t1

0xeb92,	// (0x00051231) heading_pane_cp04

0x1a75,	// (0x00044114) main_fmradio_pane_t2

0x2a79,	// (0x00045118) popup_cale_lunar_info_window_g1

0x1a83,	// (0x00044122) main_fmradio_pane_t3

0x2a81,	// (0x00045120) popup_cale_lunar_info_window_g2

0x1a91,	// (0x00044130) main_fmradio_pane_t4

0x0001,

0x1a9f,	// (0x0004413e) main_fmradio_pane_t5

0x0004,

0xf603,	// (0x00051ca2) popup_cale_lunar_info_window_g

0xf52a,	// (0x00051bc9) main_fmradio_pane_t

0x1aad,	// (0x0004414c) wait_bar_pane_cp03

0x1ab5,	// (0x00044154) cell_fmradio_pane_ParamLimits

0x1ab5,	// (0x00044154) cell_fmradio_pane

0x190e,	// (0x00043fad) cell_fmradio_pane_g1_ParamLimits

0x190e,	// (0x00043fad) cell_fmradio_pane_g1

0xdfea,	// (0x00050689) grid_highlight_pane_cp011

0x1ac8,	// (0x00044167) poc_content_pane_ParamLimits

0x1ac8,	// (0x00044167) poc_content_pane

0x1adb,	// (0x0004417a) scroll_pane_cp019

0x8a1e,	// (0x0004b0bd) popup_call_poc_act_window_ParamLimits

0x8a1e,	// (0x0004b0bd) popup_call_poc_act_window

0x8a2b,	// (0x0004b0ca) popup_call_poc_inact_window_ParamLimits

0x8a2b,	// (0x0004b0ca) popup_call_poc_inact_window

0xf5c7,	// (0x00051c66) bg_popup_call_poc_act_pane_g

0x2a39,	// (0x000450d8) bg_popup_call_poc_inact_pane_g1

0x2a41,	// (0x000450e0) bg_popup_call_poc_inact_pane_g2

0x1ae3,	// (0x00044182) popup_call_poc_act_window_g2

0x2a49,	// (0x000450e8) bg_popup_call_poc_inact_pane_g3

0x29c9,	// (0x00045068) bg_popup_call_poc_inact_pane_g4

0x2a51,	// (0x000450f0) bg_popup_call_poc_inact_pane_g5

0x1aeb,	// (0x0004418a) popup_call_poc_act_window_t1_ParamLimits

0x1aeb,	// (0x0004418a) popup_call_poc_act_window_t1

0x1b13,	// (0x000441b2) popup_call_poc_act_window_t2_ParamLimits

0x1b13,	// (0x000441b2) popup_call_poc_act_window_t2

0x1b3b,	// (0x000441da) popup_call_poc_act_window_t3_ParamLimits

0x1b3b,	// (0x000441da) popup_call_poc_act_window_t3

0x1b63,	// (0x00044202) popup_call_poc_act_window_t4_ParamLimits

0x1b63,	// (0x00044202) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x00051bd4) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x00051bd4) popup_call_poc_act_window_t

0x2a59,	// (0x000450f8) bg_popup_call_poc_inact_pane_g6

0x2a61,	// (0x00045100) bg_popup_call_poc_inact_pane_g7

0x2a69,	// (0x00045108) bg_popup_call_poc_inact_pane_g8

0x1b75,	// (0x00044214) popup_call_poc_inact_window_g2

0x2a71,	// (0x00045110) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5de,	// (0x00051c7d) bg_popup_call_poc_inact_pane_g

0x1b7d,	// (0x0004421c) popup_call_poc_inact_window_t1_ParamLimits

0x1b7d,	// (0x0004421c) popup_call_poc_inact_window_t1

0x1b92,	// (0x00044231) popup_call_poc_inact_window_t2_ParamLimits

0x1b92,	// (0x00044231) popup_call_poc_inact_window_t2

0x1ba7,	// (0x00044246) popup_call_poc_inact_window_t3_ParamLimits

0x1ba7,	// (0x00044246) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x00051bdd) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x00051bdd) popup_call_poc_inact_window_t

0x2be5,	// (0x00045284) context_pane_ParamLimits

0x8f26,	// (0x0004b5c5) signal_pane_ParamLimits

0x172d,	// (0x00043dcc) main_call2_pane

0x2bd3,	// (0x00045272) popup_phob_thumbnail2_window_ParamLimits

0x2bd3,	// (0x00045272) popup_phob_thumbnail2_window

0x873a,	// (0x0004add9) aid_hotspot_pointer_arrow_pane

0x8742,	// (0x0004ade1) aid_hotspot_pointer_hand_pane

0x8cda,	// (0x0004b379) phob_pre_status_pane_g5

0x70c9,	// (0x00049768) cams_zoom_pane_ParamLimits

0x70d5,	// (0x00049774) image_vga_pane_ParamLimits

0x70e2,	// (0x00049781) main_camera_pane_g1_ParamLimits

0x70ee,	// (0x0004978d) main_camera_pane_g2_ParamLimits

0x70fa,	// (0x00049799) main_camera_pane_g3_ParamLimits

0x7106,	// (0x000497a5) main_camera_pane_g4_ParamLimits

0x7112,	// (0x000497b1) main_camera_pane_g5_ParamLimits

0x711e,	// (0x000497bd) main_camera_pane_g6_ParamLimits

0x712a,	// (0x000497c9) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x000518dc) main_camera_pane_g_ParamLimits

0x7136,	// (0x000497d5) main_camera_pane_t1_ParamLimits

0x7148,	// (0x000497e7) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x000518ed) main_camera_pane_t_ParamLimits

0xe245,	// (0x000508e4) bg_popup_preview_window_pane_cp01_ParamLimits

0xe245,	// (0x000508e4) bg_popup_preview_window_pane_cp01

0x1bbc,	// (0x0004425b) popup_phob_thumbnail2_window_g1_ParamLimits

0x1bbc,	// (0x0004425b) popup_phob_thumbnail2_window_g1

0xdfea,	// (0x00050689) call2_cli_visual_pane

0x8a47,	// (0x0004b0e6) popup_call2_audio_conf_window_ParamLimits

0x8a47,	// (0x0004b0e6) popup_call2_audio_conf_window

0x8a5a,	// (0x0004b0f9) popup_call2_audio_first_window_ParamLimits

0x8a5a,	// (0x0004b0f9) popup_call2_audio_first_window

0x8ad6,	// (0x0004b175) popup_call2_audio_in_window_ParamLimits

0x8ad6,	// (0x0004b175) popup_call2_audio_in_window

0x8b06,	// (0x0004b1a5) popup_call2_audio_out_window_ParamLimits

0x8b06,	// (0x0004b1a5) popup_call2_audio_out_window

0x8b52,	// (0x0004b1f1) popup_call2_audio_second_window_ParamLimits

0x8b52,	// (0x0004b1f1) popup_call2_audio_second_window

0x8b9e,	// (0x0004b23d) popup_call2_audio_wait_window_ParamLimits

0x8b9e,	// (0x0004b23d) popup_call2_audio_wait_window

0xdfea,	// (0x00050689) bg_popup_call2_act_pane_cp03

0xe227,	// (0x000508c6) list_conf_pane_cp

0x1bc8,	// (0x00044267) popup_call2_audio_conf_window_t1

0xebef,	// (0x0005128e) list_single_graphic_popup_conf2_pane_ParamLimits

0xebef,	// (0x0005128e) list_single_graphic_popup_conf2_pane

0xec02,	// (0x000512a1) list_highlight_pane_cp04

0x1bd6,	// (0x00044275) list_single_graphic_popup_conf2_pane_g1

0xec13,	// (0x000512b2) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x00051be4) list_single_graphic_popup_conf2_pane_g

0x1bde,	// (0x0004427d) list_single_graphic_popup_conf2_pane_t1

0x1bec,	// (0x0004428b) bg_popup_call2_act_pane_cp01_ParamLimits

0x1bec,	// (0x0004428b) bg_popup_call2_act_pane_cp01

0x1c76,	// (0x00044315) call_type_pane_cp05_ParamLimits

0x1c76,	// (0x00044315) call_type_pane_cp05

0x1cca,	// (0x00044369) popup_call2_audio_second_window_g1_ParamLimits

0x1cca,	// (0x00044369) popup_call2_audio_second_window_g1

0x1d1e,	// (0x000443bd) popup_call2_audio_second_window_g2_ParamLimits

0x1d1e,	// (0x000443bd) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x00051be9) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x00051be9) popup_call2_audio_second_window_g

0x1d83,	// (0x00044422) popup_call2_audio_second_window_t1_ParamLimits

0x1d83,	// (0x00044422) popup_call2_audio_second_window_t1

0x1e3e,	// (0x000444dd) popup_call2_audio_second_window_t2_ParamLimits

0x1e3e,	// (0x000444dd) popup_call2_audio_second_window_t2

0x1e91,	// (0x00044530) popup_call2_audio_second_window_t3_ParamLimits

0x1e91,	// (0x00044530) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x00051bf0) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x00051bf0) popup_call2_audio_second_window_t

0xdfea,	// (0x00050689) bg_popup_call2_in_pane_cp02

0xdff4,	// (0x00050693) call_type_pane_cp04

0xdffc,	// (0x0005069b) popup_call2_audio_wait_window_g1

0xe004,	// (0x000506a3) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x000517c9) popup_call2_audio_wait_window_g

0xe00c,	// (0x000506ab) popup_call2_audio_wait_window_t3

0x1f84,	// (0x00044623) bg_popup_call2_act_pane_ParamLimits

0x1f84,	// (0x00044623) bg_popup_call2_act_pane

0x2044,	// (0x000446e3) call_type_pane_cp03_ParamLimits

0x2044,	// (0x000446e3) call_type_pane_cp03

0x20a8,	// (0x00044747) popup_call2_audio_first_window_g1_ParamLimits

0x20a8,	// (0x00044747) popup_call2_audio_first_window_g1

0x2118,	// (0x000447b7) popup_call2_audio_first_window_g2_ParamLimits

0x2118,	// (0x000447b7) popup_call2_audio_first_window_g2

0x17ec,	// (0x00043e8b) popup_call2_audio_first_window_g3_ParamLimits

0x17ec,	// (0x00043e8b) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x00051bf9) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x00051bf9) popup_call2_audio_first_window_g

0x21f6,	// (0x00044895) popup_call2_audio_first_window_t1_ParamLimits

0x21f6,	// (0x00044895) popup_call2_audio_first_window_t1

0x22f9,	// (0x00044998) popup_call2_audio_first_window_t4_ParamLimits

0x22f9,	// (0x00044998) popup_call2_audio_first_window_t4

0x23dc,	// (0x00044a7b) popup_call2_audio_first_window_t5_ParamLimits

0x23dc,	// (0x00044a7b) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x00051c04) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x00051c04) popup_call2_audio_first_window_t

0xe23d,	// (0x000508dc) bg_popup_call2_act_pane_g1

0x2a89,	// (0x00045128) popup_cale_lunar_info_window_t1

0x2a97,	// (0x00045136) popup_cale_lunar_info_window_t2

0x2aa5,	// (0x00045144) popup_cale_lunar_info_window_t3

0xdfea,	// (0x00050689) bg_popup_call2_bubble_pane

0x24dd,	// (0x00044b7c) bg_popup_call2_in_pane_cp01_ParamLimits

0x24dd,	// (0x00044b7c) bg_popup_call2_in_pane_cp01

0xdcc6,	// (0x00050365) call_type_pane_cp02

0x2525,	// (0x00044bc4) popup_call2_audio_out_window_g1_ParamLimits

0x2525,	// (0x00044bc4) popup_call2_audio_out_window_g1

0x2551,	// (0x00044bf0) popup_call2_audio_out_window_g2_ParamLimits

0x2551,	// (0x00044bf0) popup_call2_audio_out_window_g2

0x2579,	// (0x00044c18) popup_call2_audio_out_window_g3_ParamLimits

0x2579,	// (0x00044c18) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x00051c0d) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x00051c0d) popup_call2_audio_out_window_g

0x25b4,	// (0x00044c53) popup_call2_audio_out_window_t1_ParamLimits

0x25b4,	// (0x00044c53) popup_call2_audio_out_window_t1

0x2613,	// (0x00044cb2) popup_call2_audio_out_window_t2_ParamLimits

0x2613,	// (0x00044cb2) popup_call2_audio_out_window_t2

0x2667,	// (0x00044d06) popup_call2_audio_out_window_t3_ParamLimits

0x2667,	// (0x00044d06) popup_call2_audio_out_window_t3

0x267d,	// (0x00044d1c) popup_call2_audio_out_window_t4_ParamLimits

0x267d,	// (0x00044d1c) popup_call2_audio_out_window_t4

0x2693,	// (0x00044d32) popup_call2_audio_out_window_t5_ParamLimits

0x2693,	// (0x00044d32) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x00051c16) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x00051c16) popup_call2_audio_out_window_t

0x26f7,	// (0x00044d96) bg_popup_call2_in_pane_ParamLimits

0x26f7,	// (0x00044d96) bg_popup_call2_in_pane

0x2753,	// (0x00044df2) popup_call2_audio_in_window_g1_ParamLimits

0x2753,	// (0x00044df2) popup_call2_audio_in_window_g1

0x278b,	// (0x00044e2a) popup_call2_audio_in_window_g2_ParamLimits

0x278b,	// (0x00044e2a) popup_call2_audio_in_window_g2

0x27c3,	// (0x00044e62) popup_call2_audio_in_window_g3_ParamLimits

0x27c3,	// (0x00044e62) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x00051c23) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x00051c23) popup_call2_audio_in_window_g

0x281b,	// (0x00044eba) popup_call2_audio_in_window_t1_ParamLimits

0x281b,	// (0x00044eba) popup_call2_audio_in_window_t1

0x289b,	// (0x00044f3a) popup_call2_audio_in_window_t2_ParamLimits

0x289b,	// (0x00044f3a) popup_call2_audio_in_window_t2

0x291b,	// (0x00044fba) popup_call2_audio_in_window_t3_ParamLimits

0x291b,	// (0x00044fba) popup_call2_audio_in_window_t3

0x2935,	// (0x00044fd4) popup_call2_audio_in_window_t4_ParamLimits

0x2935,	// (0x00044fd4) popup_call2_audio_in_window_t4

0x2947,	// (0x00044fe6) popup_call2_audio_in_window_t5_ParamLimits

0x2947,	// (0x00044fe6) popup_call2_audio_in_window_t5

0x295c,	// (0x00044ffb) popup_call2_audio_in_window_t6_ParamLimits

0x295c,	// (0x00044ffb) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x00051c2c) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x00051c2c) popup_call2_audio_in_window_t

0xe23d,	// (0x000508dc) bg_popup_call2_in_pane_g1

0x2ab3,	// (0x00045152) popup_cale_lunar_info_window_t4

0x0003,

0xf608,	// (0x00051ca7) popup_cale_lunar_info_window_t

0xe245,	// (0x000508e4) bg_popup_call2_rect_pane_ParamLimits

0xe245,	// (0x000508e4) bg_popup_call2_rect_pane

0xdfea,	// (0x00050689) call2_cli_visual_graphic_pane

0xdfea,	// (0x00050689) call2_cli_visual_text_pane

0x8fab,	// (0x0004b64a) smil_status_volume_pane_g3

0x0002,

0xe369,	// (0x00050a08) call2_cli_visual_graphic_pane_g1

0xe369,	// (0x00050a08) call2_cli_visual_graphic_pane_g2

0xe369,	// (0x00050a08) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x00051c39) call2_cli_visual_graphic_pane_g

0x2971,	// (0x00045010) bg_popup_call2_rect_pane_g1

0xe407,	// (0x00050aa6) bg_popup_call2_rect_pane_g2

0x2979,	// (0x00045018) bg_popup_call2_rect_pane_g3

0x2981,	// (0x00045020) bg_popup_call2_rect_pane_g4

0x2989,	// (0x00045028) bg_popup_call2_rect_pane_g5

0x2991,	// (0x00045030) bg_popup_call2_rect_pane_g6

0x2999,	// (0x00045038) bg_popup_call2_rect_pane_g7

0x29a1,	// (0x00045040) bg_popup_call2_rect_pane_g8

0x29a9,	// (0x00045048) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x00051c40) bg_popup_call2_rect_pane_g

0x29b1,	// (0x00045050) bg_popup_call2_bubble_pane_g1

0x29b9,	// (0x00045058) bg_popup_call2_bubble_pane_g2

0x29c1,	// (0x00045060) bg_popup_call2_bubble_pane_g3

0x29c9,	// (0x00045068) bg_popup_call2_bubble_pane_g4

0x29d1,	// (0x00045070) bg_popup_call2_bubble_pane_g5

0x29d9,	// (0x00045078) bg_popup_call2_bubble_pane_g6

0x29e1,	// (0x00045080) bg_popup_call2_bubble_pane_g7

0x29e9,	// (0x00045088) bg_popup_call2_bubble_pane_g8

0x29f1,	// (0x00045090) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x00051c53) bg_popup_call2_bubble_pane_g

0x6c16,	// (0x000492b5) aid_cale_week_size_cell_pane

0x715a,	// (0x000497f9) aid_cams_cif_uncrop_pane_ParamLimits

0x715a,	// (0x000497f9) aid_cams_cif_uncrop_pane

0x72b2,	// (0x00049951) aid_cams_size_cell_ParamLimits

0x72b2,	// (0x00049951) aid_cams_size_cell

0x72be,	// (0x0004995d) grid_cams_pane_ParamLimits

0x72ca,	// (0x00049969) linegrid_cams_pane_ParamLimits

0x73a2,	// (0x00049a41) call_video_pane_t1

0x73b8,	// (0x00049a57) call_video_pane_t2

0x0001,

0xf2a1,	// (0x00051940) call_video_pane_t

0x7724,	// (0x00049dc3) aid_cale_month_size_cell_pane_ParamLimits

0x7724,	// (0x00049dc3) aid_cale_month_size_cell_pane

0xf651,	// (0x00051cf0) smil_status_volume_pane_g

0x8fb8,	// (0x0004b657) volume_smil_pane_ParamLimits

0xdba0,	// (0x0005023f) aid_popup2_width_pane

0x6b39,	// (0x000491d8) cell_qdial_pane_g4_ParamLimits

0x6b39,	// (0x000491d8) cell_qdial_pane_g4

0x81b7,	// (0x0004a856) aid_blid_cardinal_pane_ParamLimits

0x81c3,	// (0x0004a862) aid_blid_destination_pane_ParamLimits

0x81c3,	// (0x0004a862) aid_blid_destination_pane

0xe245,	// (0x000508e4) bg_popup_call_poc_act_pane_ParamLimits

0xe245,	// (0x000508e4) bg_popup_call_poc_act_pane

0xe245,	// (0x000508e4) bg_popup_call_poc_inact_pane_ParamLimits

0xe245,	// (0x000508e4) bg_popup_call_poc_inact_pane

0x29f9,	// (0x00045098) bg_popup_call_poc_act_pane_g1

0x2a01,	// (0x000450a0) bg_popup_call_poc_act_pane_g2

0x2a09,	// (0x000450a8) bg_popup_call_poc_act_pane_g3

0x29c9,	// (0x00045068) bg_popup_call_poc_act_pane_g4

0x29d1,	// (0x00045070) bg_popup_call_poc_act_pane_g5

0x2a11,	// (0x000450b0) bg_popup_call_poc_act_pane_g6

0x29e1,	// (0x00045080) bg_popup_call_poc_act_pane_g7

0x2a19,	// (0x000450b8) bg_popup_call_poc_act_pane_g8

0xdfea,	// (0x00050689) main_usb_pane

0x2bb2,	// (0x00045251) popup_cale_lunar_info_window

0x75c7,	// (0x00049c66) im_reading_pane_t1_ParamLimits

0xe5d1,	// (0x00050c70) list_im_pane_ParamLimits

0xe5e2,	// (0x00050c81) scroll_pane_cp07_ParamLimits

0xdfea,	// (0x00050689) grid_highlight_pane_cp012

0xe245,	// (0x000508e4) mup_scale_pane_ParamLimits

0x17ec,	// (0x00043e8b) main_usb_pane_g1_ParamLimits

0x17ec,	// (0x00043e8b) main_usb_pane_g1

0x8bff,	// (0x0004b29e) main_usb_pane_g2_ParamLimits

0x8bff,	// (0x0004b29e) main_usb_pane_g2

0x0001,

0xf5f1,	// (0x00051c90) main_usb_pane_g_ParamLimits

0xf5f1,	// (0x00051c90) main_usb_pane_g

0x8c0b,	// (0x0004b2aa) main_usb_pane_t1_ParamLimits

0x8c0b,	// (0x0004b2aa) main_usb_pane_t1

0x8c1d,	// (0x0004b2bc) main_usb_pane_t2_ParamLimits

0x8c1d,	// (0x0004b2bc) main_usb_pane_t2

0x8c2f,	// (0x0004b2ce) main_usb_pane_t3_ParamLimits

0x8c2f,	// (0x0004b2ce) main_usb_pane_t3

0x8c41,	// (0x0004b2e0) main_usb_pane_t4_ParamLimits

0x8c41,	// (0x0004b2e0) main_usb_pane_t4

0x8c53,	// (0x0004b2f2) main_usb_pane_t5_ParamLimits

0x8c53,	// (0x0004b2f2) main_usb_pane_t5

0x8c65,	// (0x0004b304) main_usb_pane_t6_ParamLimits

0x8c65,	// (0x0004b304) main_usb_pane_t6

0x0005,

0xf5f6,	// (0x00051c95) main_usb_pane_t_ParamLimits

0x15f1,	// (0x00043c90) aid_text_placing

0x8163,	// (0x0004a802) main_location2_pane_t1_ParamLimits

0x8179,	// (0x0004a818) main_location2_pane_t2_ParamLimits

0x818f,	// (0x0004a82e) main_location2_pane_t3_ParamLimits

0x81a5,	// (0x0004a844) main_location2_pane_t4_ParamLimits

0x81a5,	// (0x0004a844) main_location2_pane_t4

0xf402,	// (0x00051aa1) main_location2_pane_t_ParamLimits

0xe281,	// (0x00050920) find_pinb_pane_g2_ParamLimits

0xe281,	// (0x00050920) find_pinb_pane_g2

0x0001,

0xf150,	// (0x000517ef) find_pinb_pane_g_ParamLimits

0xf150,	// (0x000517ef) find_pinb_pane_g

0xe28d,	// (0x0005092c) find_pinb_pane_t1_ParamLimits

0xe29f,	// (0x0005093e) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x000517f4) find_pinb_pane_t_ParamLimits

0xdfea,	// (0x00050689) main_call3_pane

0x79dc,	// (0x0004a07b) cale_month_day_heading_pane_t1_ParamLimits

0x7a3a,	// (0x0004a0d9) cale_month_day_heading_pane_t2_ParamLimits

0x7a9f,	// (0x0004a13e) cale_month_day_heading_pane_t3_ParamLimits

0x7b04,	// (0x0004a1a3) cale_month_day_heading_pane_t4_ParamLimits

0x7b69,	// (0x0004a208) cale_month_day_heading_pane_t5_ParamLimits

0x7bce,	// (0x0004a26d) cale_month_day_heading_pane_t6_ParamLimits

0x7c33,	// (0x0004a2d2) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x00051978) cale_month_day_heading_pane_t_ParamLimits

0xe832,	// (0x00050ed1) smil_status_volume_pane

0x8860,	// (0x0004aeff) postcard_address_pane_ParamLimits

0x8860,	// (0x0004aeff) postcard_address_pane

0x886c,	// (0x0004af0b) postcard_message_pane_ParamLimits

0x886c,	// (0x0004af0b) postcard_message_pane

0x8bdb,	// (0x0004b27a) call2_cli_visual_pane_t1_ParamLimits

0x8bdb,	// (0x0004b27a) call2_cli_visual_pane_t1

0x9109,	// (0x0004b7a8) postcard_message_pane_t1_ParamLimits

0x9109,	// (0x0004b7a8) postcard_message_pane_t1

0x90f2,	// (0x0004b791) postcard_address_pane_t1_ParamLimits

0x90f2,	// (0x0004b791) postcard_address_pane_t1

0x90e5,	// (0x0004b784) popup_call3_audio_in_window_ParamLimits

0x90e5,	// (0x0004b784) popup_call3_audio_in_window

0x8fcd,	// (0x0004b66c) bg_popup_call3_in_pane_ParamLimits

0x8fcd,	// (0x0004b66c) bg_popup_call3_in_pane

0x902b,	// (0x0004b6ca) popup_call3_audio_in_window_g1_ParamLimits

0x902b,	// (0x0004b6ca) popup_call3_audio_in_window_g1

0x9043,	// (0x0004b6e2) popup_call3_audio_in_window_g2_ParamLimits

0x9043,	// (0x0004b6e2) popup_call3_audio_in_window_g2

0x905b,	// (0x0004b6fa) popup_call3_audio_in_window_g3_ParamLimits

0x905b,	// (0x0004b6fa) popup_call3_audio_in_window_g3

0x0003,

0xf658,	// (0x00051cf7) popup_call3_audio_in_window_g_ParamLimits

0xf658,	// (0x00051cf7) popup_call3_audio_in_window_g

0x9083,	// (0x0004b722) popup_call3_audio_in_window_t1_ParamLimits

0x9083,	// (0x0004b722) popup_call3_audio_in_window_t1

0x90ab,	// (0x0004b74a) popup_call3_audio_in_window_t2_ParamLimits

0x90ab,	// (0x0004b74a) popup_call3_audio_in_window_t2

0x90d3,	// (0x0004b772) popup_call3_audio_in_window_t3_ParamLimits

0x90d3,	// (0x0004b772) popup_call3_audio_in_window_t3

0x0002,

0xf661,	// (0x00051d00) popup_call3_audio_in_window_t_ParamLimits

0xf661,	// (0x00051d00) popup_call3_audio_in_window_t

0x172d,	// (0x00043dcc) bg_popup_call3_rect_pane

0x2971,	// (0x00045010) bg_popup_call3_rect_pane_g1

0xe407,	// (0x00050aa6) bg_popup_call3_rect_pane_g2

0x2979,	// (0x00045018) bg_popup_call3_rect_pane_g3

0x2981,	// (0x00045020) bg_popup_call3_rect_pane_g4

0x2989,	// (0x00045028) bg_popup_call3_rect_pane_g5

0x2991,	// (0x00045030) bg_popup_call3_rect_pane_g6

0x2999,	// (0x00045038) bg_popup_call3_rect_pane_g7

0x84e5,	// (0x0004ab84) mup_visualizer_osc_pane

0x17fa,	// (0x00043e99) mup_visualizer_spec_pane

0x8fed,	// (0x0004b68c) call3_video_qcif_pane_ParamLimits

0x8fed,	// (0x0004b68c) call3_video_qcif_pane

0x8ffd,	// (0x0004b69c) call3_video_qcif_uncrop_pane_ParamLimits

0x8ffd,	// (0x0004b69c) call3_video_qcif_uncrop_pane

0x9009,	// (0x0004b6a8) call3_video_subqcif_pane_ParamLimits

0x9009,	// (0x0004b6a8) call3_video_subqcif_pane

0x901b,	// (0x0004b6ba) call3_video_subqcif_uncrop_pane_ParamLimits

0x901b,	// (0x0004b6ba) call3_video_subqcif_uncrop_pane

0x9073,	// (0x0004b712) popup_call3_audio_in_window_g4_ParamLimits

0x9073,	// (0x0004b712) popup_call3_audio_in_window_g4

0x8f9a,	// (0x0004b639) mup_spec_half_pane

0x8fa3,	// (0x0004b642) mup_spec_half_pane_cp

0x2c45,	// (0x000452e4) mup_osc_middle_pane

0x2c4e,	// (0x000452ed) mup_visualizer_osc_pane_g1

0x8f7b,	// (0x0004b61a) mup_spec_bar_pane_ParamLimits

0x8f7b,	// (0x0004b61a) mup_spec_bar_pane

0x2c32,	// (0x000452d1) mup_spec_bar_pane_g1

0x2c3c,	// (0x000452db) mup_spec_bar_pane_g2

0x0001,

0xf64c,	// (0x00051ceb) mup_spec_bar_pane_g

0x6c16,	// (0x000492b5) aid_cale_week_size_cell_pane_ParamLimits

0x6c29,	// (0x000492c8) bg_cale_heading_pane_ParamLimits

0xe44b,	// (0x00050aea) bg_cale_pane_cp01_ParamLimits

0x6c3d,	// (0x000492dc) cale_week_corner_pane_ParamLimits

0x6c53,	// (0x000492f2) cale_week_day_heading_pane_ParamLimits

0x6c67,	// (0x00049306) cale_week_scroll_pane_g1_ParamLimits

0x6c78,	// (0x00049317) cale_week_scroll_pane_g2_ParamLimits

0x6c89,	// (0x00049328) cale_week_scroll_pane_g3_ParamLimits

0x6c9a,	// (0x00049339) cale_week_scroll_pane_g4_ParamLimits

0x6cab,	// (0x0004934a) cale_week_scroll_pane_g5_ParamLimits

0x6cbc,	// (0x0004935b) cale_week_scroll_pane_g6_ParamLimits

0x6ccd,	// (0x0004936c) cale_week_scroll_pane_g7_ParamLimits

0x6cde,	// (0x0004937d) cale_week_scroll_pane_g8_ParamLimits

0x6cef,	// (0x0004938e) cale_week_scroll_pane_g9_ParamLimits

0x6d00,	// (0x0004939f) cale_week_scroll_pane_g10_ParamLimits

0x6d11,	// (0x000493b0) cale_week_scroll_pane_g11_ParamLimits

0x6d22,	// (0x000493c1) cale_week_scroll_pane_g12_ParamLimits

0x6d33,	// (0x000493d2) cale_week_scroll_pane_g13_ParamLimits

0x6d44,	// (0x000493e3) cale_week_scroll_pane_g14_ParamLimits

0x6d55,	// (0x000493f4) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x00051880) cale_week_scroll_pane_g_ParamLimits

0x6d66,	// (0x00049405) cale_week_time_pane_ParamLimits

0x6d77,	// (0x00049416) grid_cale_week_pane_ParamLimits

0xe464,	// (0x00050b03) listscroll_cale_week_pane_t1

0x6d8a,	// (0x00049429) scroll_pane_cp08_ParamLimits

0x7765,	// (0x00049e04) cale_month_corner_pane_ParamLimits

0xe808,	// (0x00050ea7) cale_month_pane_t1

0x79ad,	// (0x0004a04c) cale_month_week_pane_ParamLimits

0x17ec,	// (0x00043e8b) popup_call_status_window_g1_ParamLimits

0x7f9a,	// (0x0004a639) popup_call_status_window_g2_ParamLimits

0x7fa6,	// (0x0004a645) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x00051a28) popup_call_status_window_g_ParamLimits

0xeb82,	// (0x00051221) aid_call2_pane

0x86f1,	// (0x0004ad90) msg_header_pane_g1

0x8860,	// (0x0004aeff) postcard_address2_pane_ParamLimits

0x8860,	// (0x0004aeff) postcard_address2_pane

0x886c,	// (0x0004af0b) postcard_message2_pane_ParamLimits

0x886c,	// (0x0004af0b) postcard_message2_pane

0x8f32,	// (0x0004b5d1) message2_row_pane_ParamLimits

0x8f32,	// (0x0004b5d1) message2_row_pane

0x8f4a,	// (0x0004b5e9) address2_row_pane_ParamLimits

0x8f4a,	// (0x0004b5e9) address2_row_pane

0x2c00,	// (0x0004529f) postcard_message2_row_pane_g1

0x2c08,	// (0x000452a7) postcard_message2_row_pane_t1

0x2c00,	// (0x0004529f) address2_row_pane_g1

0x2c08,	// (0x000452a7) address2_row_pane_t1

0x7043,	// (0x000496e2) aid_size_cell_vorec

0xdfea,	// (0x00050689) main_rss_pane

0x8f5d,	// (0x0004b5fc) rss_list_single_pane_ParamLimits

0x8f5d,	// (0x0004b5fc) rss_list_single_pane

0x2c16,	// (0x000452b5) rss_list_single_pane_t1

0x2c24,	// (0x000452c3) rss_list_single_pane_t2

0x0001,

0xf647,	// (0x00051ce6) rss_list_single_pane_t

0xdfea,	// (0x00050689) main_camera2_pane

0xdfea,	// (0x00050689) main_video2_pane

0x9159,	// (0x0004b7f8) cams_zoom_pane_cp2_ParamLimits

0x9159,	// (0x0004b7f8) cams_zoom_pane_cp2

0x9165,	// (0x0004b804) image2_vga_pane_ParamLimits

0x9165,	// (0x0004b804) image2_vga_pane

0x9174,	// (0x0004b813) main_camera2_pane_g1_ParamLimits

0x9174,	// (0x0004b813) main_camera2_pane_g1

0x9180,	// (0x0004b81f) main_camera2_pane_g2_ParamLimits

0x9180,	// (0x0004b81f) main_camera2_pane_g2

0x918c,	// (0x0004b82b) main_camera2_pane_g3_ParamLimits

0x918c,	// (0x0004b82b) main_camera2_pane_g3

0x9198,	// (0x0004b837) main_camera2_pane_g4_ParamLimits

0x9198,	// (0x0004b837) main_camera2_pane_g4

0x91a4,	// (0x0004b843) main_camera2_pane_g5_ParamLimits

0x91a4,	// (0x0004b843) main_camera2_pane_g5

0x91b0,	// (0x0004b84f) main_camera2_pane_g6_ParamLimits

0x91b0,	// (0x0004b84f) main_camera2_pane_g6

0x91bc,	// (0x0004b85b) main_camera2_pane_g7_ParamLimits

0x91bc,	// (0x0004b85b) main_camera2_pane_g7

0x91c8,	// (0x0004b867) main_camera2_pane_g8_ParamLimits

0x91c8,	// (0x0004b867) main_camera2_pane_g8

0x0008,

0xf668,	// (0x00051d07) main_camera2_pane_g_ParamLimits

0xf668,	// (0x00051d07) main_camera2_pane_g

0x91e0,	// (0x0004b87f) main_camera2_pane_t1_ParamLimits

0x91e0,	// (0x0004b87f) main_camera2_pane_t1

0x91f2,	// (0x0004b891) main_camera2_pane_t2_ParamLimits

0x91f2,	// (0x0004b891) main_camera2_pane_t2

0x9204,	// (0x0004b8a3) main_camera2_pane_t3_ParamLimits

0x9204,	// (0x0004b8a3) main_camera2_pane_t3

0x9216,	// (0x0004b8b5) main_camera2_pane_t4_ParamLimits

0x9216,	// (0x0004b8b5) main_camera2_pane_t4

0x0006,

0xf67b,	// (0x00051d1a) main_camera2_pane_t_ParamLimits

0xf67b,	// (0x00051d1a) main_camera2_pane_t

0x9271,	// (0x0004b910) cams_zoom_pane_cp4_ParamLimits

0x9271,	// (0x0004b910) cams_zoom_pane_cp4

0x9281,	// (0x0004b920) image2_cif_pane_ParamLimits

0x9281,	// (0x0004b920) image2_cif_pane

0x9292,	// (0x0004b931) image2_subqcif_pane_ParamLimits

0x9292,	// (0x0004b931) image2_subqcif_pane

0x929f,	// (0x0004b93e) main_video2_pane_g1_ParamLimits

0x929f,	// (0x0004b93e) main_video2_pane_g1

0x92b1,	// (0x0004b950) main_video2_pane_g2_ParamLimits

0x92b1,	// (0x0004b950) main_video2_pane_g2

0x92c1,	// (0x0004b960) main_video2_pane_g3_ParamLimits

0x92c1,	// (0x0004b960) main_video2_pane_g3

0x92d1,	// (0x0004b970) main_video2_pane_g4_ParamLimits

0x92d1,	// (0x0004b970) main_video2_pane_g4

0x92e1,	// (0x0004b980) main_video2_pane_g5_ParamLimits

0x92e1,	// (0x0004b980) main_video2_pane_g5

0x92f1,	// (0x0004b990) main_video2_pane_g6_ParamLimits

0x92f1,	// (0x0004b990) main_video2_pane_g6

0x0005,

0xf68a,	// (0x00051d29) main_video2_pane_g_ParamLimits

0xf68a,	// (0x00051d29) main_video2_pane_g

0x9303,	// (0x0004b9a2) main_video2_pane_t1_ParamLimits

0x9303,	// (0x0004b9a2) main_video2_pane_t1

0x931d,	// (0x0004b9bc) main_video2_pane_t2_ParamLimits

0x931d,	// (0x0004b9bc) main_video2_pane_t2

0x9343,	// (0x0004b9e2) main_video2_pane_t3_ParamLimits

0x9343,	// (0x0004b9e2) main_video2_pane_t3

0x0002,

0xf697,	// (0x00051d36) main_video2_pane_t_ParamLimits

0xf697,	// (0x00051d36) main_video2_pane_t

0x8d14,	// (0x0004b3b3) call_muted_g2

0x0001,

0xf639,	// (0x00051cd8) call_muted_g

0xdfea,	// (0x00050689) main_mup2_pane

0x2cb3,	// (0x00045352) main_mup2_pane_g1_ParamLimits

0x2cb3,	// (0x00045352) main_mup2_pane_g1

0x9369,	// (0x0004ba08) main_mup2_pane_g2_ParamLimits

0x9369,	// (0x0004ba08) main_mup2_pane_g2

0x95d9,	// (0x0004bc78) main_mup_pane_g13_cp1

0x95e1,	// (0x0004bc80) mup_volume_pane_cp1

0x9389,	// (0x0004ba28) main_mup2_pane_g4_ParamLimits

0x9389,	// (0x0004ba28) main_mup2_pane_g4

0x939a,	// (0x0004ba39) main_mup2_pane_g5_ParamLimits

0x939a,	// (0x0004ba39) main_mup2_pane_g5

0x93ab,	// (0x0004ba4a) main_mup2_pane_g6_ParamLimits

0x93ab,	// (0x0004ba4a) main_mup2_pane_g6

0x93bc,	// (0x0004ba5b) main_mup2_pane_g7_ParamLimits

0x93bc,	// (0x0004ba5b) main_mup2_pane_g7

0x0006,

0xf69e,	// (0x00051d3d) main_mup2_pane_g_ParamLimits

0xf69e,	// (0x00051d3d) main_mup2_pane_g

0x93d8,	// (0x0004ba77) main_mup2_pane_t1_ParamLimits

0x93d8,	// (0x0004ba77) main_mup2_pane_t1

0x93ef,	// (0x0004ba8e) main_mup2_pane_t2_ParamLimits

0x93ef,	// (0x0004ba8e) main_mup2_pane_t2

0x9406,	// (0x0004baa5) main_mup2_pane_t3_ParamLimits

0x9406,	// (0x0004baa5) main_mup2_pane_t3

0x941d,	// (0x0004babc) main_mup2_pane_t4_ParamLimits

0x941d,	// (0x0004babc) main_mup2_pane_t4

0x9437,	// (0x0004bad6) main_mup2_pane_t5_ParamLimits

0x9437,	// (0x0004bad6) main_mup2_pane_t5

0x9451,	// (0x0004baf0) main_mup2_pane_t6_ParamLimits

0x9451,	// (0x0004baf0) main_mup2_pane_t6

0x0005,

0xf6ad,	// (0x00051d4c) main_mup2_pane_t_ParamLimits

0xf6ad,	// (0x00051d4c) main_mup2_pane_t

0x9489,	// (0x0004bb28) mup2_visualizer_pane_ParamLimits

0x9489,	// (0x0004bb28) mup2_visualizer_pane

0x94bb,	// (0x0004bb5a) mup_progress_pane_cp_ParamLimits

0x94bb,	// (0x0004bb5a) mup_progress_pane_cp

0x95c4,	// (0x0004bc63) mup_volume_pane_cp_ParamLimits

0x95c4,	// (0x0004bc63) mup_volume_pane_cp

0x94d2,	// (0x0004bb71) mup2_visualizer_pane_g1_ParamLimits

0x94d2,	// (0x0004bb71) mup2_visualizer_pane_g1

0x2c85,	// (0x00045324) mup2_visualizer_pane_g2_ParamLimits

0x2c85,	// (0x00045324) mup2_visualizer_pane_g2

0x94e7,	// (0x0004bb86) mup2_visualizer_pane_g3_ParamLimits

0x94e7,	// (0x0004bb86) mup2_visualizer_pane_g3

0x0002,

0xf6ba,	// (0x00051d59) mup2_visualizer_pane_g_ParamLimits

0xf6ba,	// (0x00051d59) mup2_visualizer_pane_g

0x1a57,	// (0x000440f6) aid_size_cell_fmradio

0x8df6,	// (0x0004b495) aid_height_parent_landcape

0xe66f,	// (0x00050d0e) wml_content_pane_cp

0xe677,	// (0x00050d16) wml_tabs_pane

0xe680,	// (0x00050d1f) popup_wml_miniature_window

0xe688,	// (0x00050d27) scroll_pane_cp021

0xe69c,	// (0x00050d3b) wml_content_pane_comp8

0xdfea,	// (0x00050689) bg_popup_sub_pane_cp05

0x2ca3,	// (0x00045342) popup_wml_miniature_window_g1

0x2cab,	// (0x0004534a) wml_miniature_view_pane

0x94f3,	// (0x0004bb92) aid_size_wml_view

0x94fb,	// (0x0004bb9a) wml_miniature_view_pane_g1

0x9504,	// (0x0004bba3) wml_miniature_view_pane_g2

0x950d,	// (0x0004bbac) wml_miniature_view_pane_g3

0x9515,	// (0x0004bbb4) wml_miniature_view_pane_g4

0x951d,	// (0x0004bbbc) wml_miniature_view_pane_g5

0x9525,	// (0x0004bbc4) wml_miniature_view_pane_g6

0x952d,	// (0x0004bbcc) wml_miniature_view_pane_g7

0x9535,	// (0x0004bbd4) wml_miniature_view_pane_g8

0x0007,

0xf6c1,	// (0x00051d60) wml_miniature_view_pane_g

0x2cb3,	// (0x00045352) background_graphic_ParamLimits

0x2cb3,	// (0x00045352) background_graphic

0x2cbf,	// (0x0004535e) wml_tabs_2_pane

0x2cc8,	// (0x00045367) wml_tabs_3_pane_ParamLimits

0x2cc8,	// (0x00045367) wml_tabs_3_pane

0x2cda,	// (0x00045379) wml_tabs_4_pane_ParamLimits

0x2cda,	// (0x00045379) wml_tabs_4_pane

0x2cf0,	// (0x0004538f) wml_tabs_5_pane_ParamLimits

0x2cf0,	// (0x0004538f) wml_tabs_5_pane

0x2d0a,	// (0x000453a9) wml_tabs_pane_g2_ParamLimits

0x2d0a,	// (0x000453a9) wml_tabs_pane_g2

0x2d1e,	// (0x000453bd) wml_tabs_pane_g3_ParamLimits

0x2d1e,	// (0x000453bd) wml_tabs_pane_g3

0x953d,	// (0x0004bbdc) wml_tabs_2_active_pane_ParamLimits

0x953d,	// (0x0004bbdc) wml_tabs_2_active_pane

0x954d,	// (0x0004bbec) wml_tabs_2_passive_pane_ParamLimits

0x954d,	// (0x0004bbec) wml_tabs_2_passive_pane

0x955d,	// (0x0004bbfc) wml_tabs_3_active_pane_cp_ParamLimits

0x955d,	// (0x0004bbfc) wml_tabs_3_active_pane_cp

0x956e,	// (0x0004bc0d) wml_tabs_3_passive_pane_ParamLimits

0x956e,	// (0x0004bc0d) wml_tabs_3_passive_pane

0x957f,	// (0x0004bc1e) wml_tabs_3_passive_pane_cp_ParamLimits

0x957f,	// (0x0004bc1e) wml_tabs_3_passive_pane_cp

0x9590,	// (0x0004bc2f) tabs_4_active_pane

0x9598,	// (0x0004bc37) tabs_4_passive_pane

0x95a0,	// (0x0004bc3f) tabs_4_passive_pane_cp

0x95a8,	// (0x0004bc47) tabs_4_passive_pane_cp2

0x8bf7,	// (0x0004b296) aid_height_text

0x84b2,	// (0x0004ab51) mup_volume_cont_pane_ParamLimits

0x84b2,	// (0x0004ab51) mup_volume_cont_pane

0x67e5,	// (0x00048e84) aid_size_cell_pinb

0x67ef,	// (0x00048e8e) aid_size_list_pinb

0x94a4,	// (0x0004bb43) mup2_volume_cont_pane_ParamLimits

0x94a4,	// (0x0004bb43) mup2_volume_cont_pane

0x95b0,	// (0x0004bc4f) mup2_volume_cont_pane_g1_ParamLimits

0x95b0,	// (0x0004bc4f) mup2_volume_cont_pane_g1

0x64dc,	// (0x00048b7b) aid_size_cell_touch_ParamLimits

0x64dc,	// (0x00048b7b) aid_size_cell_touch

0x66e5,	// (0x00048d84) touch_pane_ParamLimits

0x66e5,	// (0x00048d84) touch_pane

0xdb8e,	// (0x0005022d) main_rss2_pane

0x2d3b,	// (0x000453da) listscroll_rss2_pane

0x2d44,	// (0x000453e3) rss2_navigation_pane

0x2d4c,	// (0x000453eb) list_rss2_pane

0xecb9,	// (0x00051358) scroll_pane_cp22

0x2d54,	// (0x000453f3) rss2_navigation_pane_g1

0x2d5d,	// (0x000453fc) rss2_navigation_pane_g2

0x2d65,	// (0x00045404) rss2_navigation_pane_g3

0x0002,

0xf6d2,	// (0x00051d71) rss2_navigation_pane_g

0x2d6d,	// (0x0004540c) rss2_navigation_pane_t1

0x95e9,	// (0x0004bc88) rss2_list_single_pane_ParamLimits

0x95e9,	// (0x0004bc88) rss2_list_single_pane

0x2d7b,	// (0x0004541a) rss2_list_single_pane_t2

0x2d89,	// (0x00045428) rss2_list_single_pane_t3_ParamLimits

0x2d89,	// (0x00045428) rss2_list_single_pane_t3

0x2da6,	// (0x00045445) rss2_list_single_pane_t4

0x7df9,	// (0x0004a498) smil_status_pane_g1

0xecfa,	// (0x00051399) main_image2_pane_ParamLimits

0xecfa,	// (0x00051399) main_image2_pane

0x91d4,	// (0x0004b873) main_camera2_pane_g9_ParamLimits

0x91d4,	// (0x0004b873) main_camera2_pane_g9

0x9228,	// (0x0004b8c7) main_camera2_pane_t5_ParamLimits

0x9228,	// (0x0004b8c7) main_camera2_pane_t5

0x923a,	// (0x0004b8d9) main_camera2_pane_t6_ParamLimits

0x923a,	// (0x0004b8d9) main_camera2_pane_t6

0x9600,	// (0x0004bc9f) main_image2_pane_g1_ParamLimits

0x9600,	// (0x0004bc9f) main_image2_pane_g1

0x8a0c,	// (0x0004b0ab) smil2_video_pane_ParamLimits

0x8a0c,	// (0x0004b0ab) smil2_video_pane

0x127a,	// (0x00043919) aid_zoom_text_primary_cp

0xdbd1,	// (0x00050270) popup_preview_fixed_window

0xe5c9,	// (0x00050c68) im_reading_pane_g1

0x9130,	// (0x0004b7cf) cams2_bc_adjust_pane_cp_ParamLimits

0x9130,	// (0x0004b7cf) cams2_bc_adjust_pane_cp

0x9265,	// (0x0004b904) cams2_bc_adjust_pane_ParamLimits

0x9265,	// (0x0004b904) cams2_bc_adjust_pane

0x404f,	// (0x000466ee) cams2_bc_adjust_pane_g1

0x960c,	// (0x0004bcab) cams2_slider_pane

0x9615,	// (0x0004bcb4) cams2_slider_pane_g1

0x961e,	// (0x0004bcbd) cams2_slider_pane_g2

0x0006,

0xf6d9,	// (0x00051d78) cams2_slider_pane_g

0x68ce,	// (0x00048f6d) calc_display_pane_ParamLimits

0x68e6,	// (0x00048f85) calc_paper_pane_ParamLimits

0x6902,	// (0x00048fa1) grid_calc_pane_ParamLimits

0x8018,	// (0x0004a6b7) popup_clock_digital_window_t1_ParamLimits

0x19f4,	// (0x00044093) main_image_pane_t1

0x68b4,	// (0x00048f53) aid_size_cell_calc_ParamLimits

0x68b4,	// (0x00048f53) aid_size_cell_calc

0x8e1b,	// (0x0004b4ba) popup_blid_sat_info2_window_ParamLimits

0x8e1b,	// (0x0004b4ba) popup_blid_sat_info2_window

0x2dbc,	// (0x0004545b) aid_size_cell_blid

0x2dc4,	// (0x00045463) bg_popup_window_pane_cp07

0x2de7,	// (0x00045486) grid_popup_blid_pane

0x2def,	// (0x0004548e) heading_pane_cp05_ParamLimits

0x2def,	// (0x0004548e) heading_pane_cp05

0x2eb7,	// (0x00045556) cell_popup_blid_pane_ParamLimits

0x2eb7,	// (0x00045556) cell_popup_blid_pane

0x2ed7,	// (0x00045576) cell_popup_blid_pane_g1

0x2edf,	// (0x0004557e) cell_popup_blid_pane_t1

0x946e,	// (0x0004bb0d) mup2_indicator_pane_ParamLimits

0x946e,	// (0x0004bb0d) mup2_indicator_pane

0x172d,	// (0x00043dcc) mup2_visualizer_osc_pane

0x2c91,	// (0x00045330) mup2_visualizer_spec_pane_ParamLimits

0x2c91,	// (0x00045330) mup2_visualizer_spec_pane

0x9638,	// (0x0004bcd7) mup2_spec_half_pane

0x9641,	// (0x0004bce0) mup2_spec_half_pane_cp

0x9649,	// (0x0004bce8) mup2_spec_bar_pane_ParamLimits

0x9649,	// (0x0004bce8) mup2_spec_bar_pane

0x2c32,	// (0x000452d1) mup2_spec_bar_pane_g1

0x2c3c,	// (0x000452db) mup2_spec_bar_pane_g2

0x0001,

0xf64c,	// (0x00051ceb) mup2_spec_bar_pane_g

0x9668,	// (0x0004bd07) mup2_osc_middle_pane

0x2c4e,	// (0x000452ed) mup2_visualizer_osc_pane_g1

0xdbf9,	// (0x00050298) popup_number_entry_window_t1_ParamLimits

0xdc0c,	// (0x000502ab) popup_number_entry_window_t2_ParamLimits

0xdc1e,	// (0x000502bd) popup_number_entry_window_t3_ParamLimits

0x6732,	// (0x00048dd1) popup_number_entry_window_t5_ParamLimits

0x6732,	// (0x00048dd1) popup_number_entry_window_t5

0xf0fb,	// (0x0005179a) popup_number_entry_window_t_ParamLimits

0xdc30,	// (0x000502cf) text_title_cp2_ParamLimits

0x874a,	// (0x0004ade9) aid_hotspot_pointer_text2_pane

0x87dc,	// (0x0004ae7b) main_viewer_pane_g9_ParamLimits

0x87dc,	// (0x0004ae7b) main_viewer_pane_g9

0xe808,	// (0x00050ea7) cale_month_pane_t1_ParamLimits

0xe845,	// (0x00050ee4) bg_cale_pane_ParamLimits

0xe85d,	// (0x00050efc) list_cale_pane_ParamLimits

0xe464,	// (0x00050b03) listscroll_cale_day_pane_t1

0xe86e,	// (0x00050f0d) scroll_pane_cp09_ParamLimits

0x84ed,	// (0x0004ab8c) main_mup_eq_pane_t1_ParamLimits

0x84ed,	// (0x0004ab8c) main_mup_eq_pane_t1

0x8503,	// (0x0004aba2) main_mup_eq_pane_t2_ParamLimits

0x8503,	// (0x0004aba2) main_mup_eq_pane_t2

0x8519,	// (0x0004abb8) main_mup_eq_pane_t3_ParamLimits

0x8519,	// (0x0004abb8) main_mup_eq_pane_t3

0x852f,	// (0x0004abce) main_mup_eq_pane_t4_ParamLimits

0x852f,	// (0x0004abce) main_mup_eq_pane_t4

0x8545,	// (0x0004abe4) main_mup_eq_pane_t5_ParamLimits

0x8545,	// (0x0004abe4) main_mup_eq_pane_t5

0x855b,	// (0x0004abfa) main_mup_eq_pane_t6_ParamLimits

0x855b,	// (0x0004abfa) main_mup_eq_pane_t6

0x856d,	// (0x0004ac0c) main_mup_eq_pane_t7_ParamLimits

0x856d,	// (0x0004ac0c) main_mup_eq_pane_t7

0x857f,	// (0x0004ac1e) main_mup_eq_pane_t8_ParamLimits

0x857f,	// (0x0004ac1e) main_mup_eq_pane_t8

0x8591,	// (0x0004ac30) main_mup_eq_pane_t9_ParamLimits

0x8591,	// (0x0004ac30) main_mup_eq_pane_t9

0x85a7,	// (0x0004ac46) main_mup_eq_pane_t10_ParamLimits

0x85a7,	// (0x0004ac46) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x00051b27) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x00051b27) main_mup_eq_pane_t

0x863a,	// (0x0004acd9) mup_equalizer_pane_cp5_ParamLimits

0x864c,	// (0x0004aceb) mup_equalizer_pane_cp6_ParamLimits

0x865e,	// (0x0004acfd) mup_equalizer_pane_cp7_ParamLimits

0xdb8e,	// (0x0005022d) main_gallery_pane

0x2c57,	// (0x000452f6) smil2_volume_pane

0x2c72,	// (0x00045311) smil_status_volume_pane_g1_ParamLimits

0x2c5f,	// (0x000452fe) smil_status_volume_pane_g2_ParamLimits

0x8fab,	// (0x0004b64a) smil_status_volume_pane_g3_ParamLimits

0xf651,	// (0x00051cf0) smil_status_volume_pane_g_ParamLimits

0x2dc4,	// (0x00045463) bg_popup_window_pane_cp07_ParamLimits

0x2dd2,	// (0x00045471) blid_firmament_pane

0x9671,	// (0x0004bd10) aid_size_cell_gallery_ParamLimits

0x9671,	// (0x0004bd10) aid_size_cell_gallery

0x967f,	// (0x0004bd1e) grid_gallery_pane_ParamLimits

0x967f,	// (0x0004bd1e) grid_gallery_pane

0x968b,	// (0x0004bd2a) cell_gallery_pane_ParamLimits

0x968b,	// (0x0004bd2a) cell_gallery_pane

0x2eed,	// (0x0004558c) bg_cell_gallery_focus_pane_ParamLimits

0x2eed,	// (0x0004558c) bg_cell_gallery_focus_pane

0x2eff,	// (0x0004559e) cell_gallery_pane_g1_ParamLimits

0x2eff,	// (0x0004559e) cell_gallery_pane_g1

0x96ca,	// (0x0004bd69) cell_gallery_pane_g2_ParamLimits

0x96ca,	// (0x0004bd69) cell_gallery_pane_g2

0x96d7,	// (0x0004bd76) cell_gallery_pane_g3_ParamLimits

0x96d7,	// (0x0004bd76) cell_gallery_pane_g3

0x2f0b,	// (0x000455aa) cell_gallery_pane_g4_ParamLimits

0x2f0b,	// (0x000455aa) cell_gallery_pane_g4

0x0003,

0xf6ff,	// (0x00051d9e) cell_gallery_pane_g_ParamLimits

0xf6ff,	// (0x00051d9e) cell_gallery_pane_g

0x2f17,	// (0x000455b6) bg_cell_gallery_focus_pane_g1

0x2f1f,	// (0x000455be) bg_cell_gallery_focus_pane_g2

0x2f27,	// (0x000455c6) bg_cell_gallery_focus_pane_g3

0x2f2f,	// (0x000455ce) bg_cell_gallery_focus_pane_g4

0x2f37,	// (0x000455d6) bg_cell_gallery_focus_pane_g5

0x2f3f,	// (0x000455de) bg_cell_gallery_focus_pane_g6

0x2f47,	// (0x000455e6) bg_cell_gallery_focus_pane_g7

0x2f4f,	// (0x000455ee) bg_cell_gallery_focus_pane_g8

0x0007,

0xf708,	// (0x00051da7) bg_cell_gallery_focus_pane_g

0x2f57,	// (0x000455f6) aid_firma_cardinal

0x2f6b,	// (0x0004560a) blid_firmament_pane_t1

0x2f82,	// (0x00045621) blid_firmament_pane_t2

0x2f99,	// (0x00045638) blid_firmament_pane_t3

0x2fb0,	// (0x0004564f) blid_firmament_pane_t4

0x0003,

0xf719,	// (0x00051db8) blid_firmament_pane_t

0x2fc7,	// (0x00045666) blid_sat_info_pane

0x2fd7,	// (0x00045676) blid_sat_info_pane_g1

0x2fd7,	// (0x00045676) blid_sat_info_pane_g2

0x0001,

0xf722,	// (0x00051dc1) blid_sat_info_pane_g

0x2fe1,	// (0x00045680) blid_sat_info_pane_t1

0x2fef,	// (0x0004568e) smil2_volume_content_pane

0x2ff8,	// (0x00045697) smil2_volume_pane_g1

0x3000,	// (0x0004569f) smil2_volume_content_pane_g1

0x3009,	// (0x000456a8) smil2_volume_content_pane_g2

0x3012,	// (0x000456b1) smil2_volume_content_pane_g3

0x301b,	// (0x000456ba) smil2_volume_content_pane_g4

0x3024,	// (0x000456c3) smil2_volume_content_pane_g5

0x302d,	// (0x000456cc) smil2_volume_content_pane_g6

0x3036,	// (0x000456d5) smil2_volume_content_pane_g7

0x303f,	// (0x000456de) smil2_volume_content_pane_g8

0x3048,	// (0x000456e7) smil2_volume_content_pane_g9

0x3051,	// (0x000456f0) smil2_volume_content_pane_g10

0x0009,

0xf727,	// (0x00051dc6) smil2_volume_content_pane_g

0x6dde,	// (0x0004947d) cale_week_day_heading_pane_t1_ParamLimits

0x6df7,	// (0x00049496) cale_week_day_heading_pane_t2_ParamLimits

0x6e10,	// (0x000494af) cale_week_day_heading_pane_t3_ParamLimits

0x6e29,	// (0x000494c8) cale_week_day_heading_pane_t4_ParamLimits

0x6e42,	// (0x000494e1) cale_week_day_heading_pane_t5_ParamLimits

0x6e5b,	// (0x000494fa) cale_week_day_heading_pane_t6_ParamLimits

0x6e74,	// (0x00049513) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0005189f) cale_week_day_heading_pane_t_ParamLimits

0xe476,	// (0x00050b15) bg_cale_side_pane_ParamLimits

0x6e8d,	// (0x0004952c) cale_week_time_pane_t1_ParamLimits

0x6eb9,	// (0x00049558) cale_week_time_pane_t2_ParamLimits

0x6ee5,	// (0x00049584) cale_week_time_pane_t3_ParamLimits

0x6f11,	// (0x000495b0) cale_week_time_pane_t4_ParamLimits

0x6f3d,	// (0x000495dc) cale_week_time_pane_t5_ParamLimits

0x6f69,	// (0x00049608) cale_week_time_pane_t6_ParamLimits

0x6f95,	// (0x00049634) cale_week_time_pane_t7_ParamLimits

0x6fc1,	// (0x00049660) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x000518ae) cale_week_time_pane_t_ParamLimits

0x6fed,	// (0x0004968c) cell_cale_week_pane_g2_ParamLimits

0xe476,	// (0x00050b15) bg_cale_side_pane_cp01_ParamLimits

0x7c98,	// (0x0004a337) cale_month_week_pane_t1_ParamLimits

0x7caf,	// (0x0004a34e) cale_month_week_pane_t2_ParamLimits

0x7cc6,	// (0x0004a365) cale_month_week_pane_t3_ParamLimits

0x7cdd,	// (0x0004a37c) cale_month_week_pane_t4_ParamLimits

0x7cf4,	// (0x0004a393) cale_month_week_pane_t5_ParamLimits

0x7d0b,	// (0x0004a3aa) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x00051987) cale_month_week_pane_t_ParamLimits

0x7dc8,	// (0x0004a467) cell_cale_month_pane_g1_ParamLimits

0xdb8e,	// (0x0005022d) main_cale_event_viewer_pane

0xdb8e,	// (0x0005022d) listscroll_cale_event_viewer_pane

0x305a,	// (0x000456f9) list_cale_ev_pane

0x3062,	// (0x00045701) scroll_pane_cp023

0x96e4,	// (0x0004bd83) field_cale_ev_pane_ParamLimits

0x96e4,	// (0x0004bd83) field_cale_ev_pane

0x306e,	// (0x0004570d) field_cale_ev_content_pane_ParamLimits

0x306e,	// (0x0004570d) field_cale_ev_content_pane

0x307a,	// (0x00045719) field_cale_ev_pane_g1_ParamLimits

0x307a,	// (0x00045719) field_cale_ev_pane_g1

0x3086,	// (0x00045725) field_cale_ev_pane_g2_ParamLimits

0x3086,	// (0x00045725) field_cale_ev_pane_g2

0x309e,	// (0x0004573d) field_cale_ev_pane_g3_ParamLimits

0x309e,	// (0x0004573d) field_cale_ev_pane_g3

0x0002,

0xf73c,	// (0x00051ddb) field_cale_ev_pane_g_ParamLimits

0xf73c,	// (0x00051ddb) field_cale_ev_pane_g

0x30b6,	// (0x00045755) field_cale_ev_pane_t1_ParamLimits

0x30b6,	// (0x00045755) field_cale_ev_pane_t1

0x96fe,	// (0x0004bd9d) field_cale_ev_content_pane_t1_ParamLimits

0x96fe,	// (0x0004bd9d) field_cale_ev_content_pane_t1

0x18a4,	// (0x00043f43) bg_button_pane_cp01

0xe43c,	// (0x00050adb) listscroll_cale_week_pane_ParamLimits

0x6c0e,	// (0x000492ad) popup_toolbar_window_cp01

0xe464,	// (0x00050b03) listscroll_cale_week_pane_t1_ParamLimits

0xe314,	// (0x000509b3) listscroll_cale_day_pane_ParamLimits

0x6c0e,	// (0x000492ad) popup_toolbar_window_cp02

0xe464,	// (0x00050b03) listscroll_cale_day_pane_t1_ParamLimits

0xe43c,	// (0x00050adb) main_cale_month_pane_ParamLimits

0x8ebb,	// (0x0004b55a) popup_toolbar_window_cp03_ParamLimits

0x8ebb,	// (0x0004b55a) popup_toolbar_window_cp03

0x8934,	// (0x0004afd3) main_image_pane_g2_ParamLimits

0x8934,	// (0x0004afd3) main_image_pane_g2

0x8940,	// (0x0004afdf) main_image_pane_g3_ParamLimits

0x8940,	// (0x0004afdf) main_image_pane_g3

0x0002,

0xf51a,	// (0x00051bb9) main_image_pane_g_ParamLimits

0xf51a,	// (0x00051bb9) main_image_pane_g

0x19f4,	// (0x00044093) main_image_pane_t1_ParamLimits

0x894c,	// (0x0004afeb) main_image_pane_t2_ParamLimits

0x894c,	// (0x0004afeb) main_image_pane_t2

0x895e,	// (0x0004affd) main_image_pane_t3_ParamLimits

0x895e,	// (0x0004affd) main_image_pane_t3

0x8970,	// (0x0004b00f) main_image_pane_t4_ParamLimits

0x8970,	// (0x0004b00f) main_image_pane_t4

0x0003,

0xf521,	// (0x00051bc0) main_image_pane_t_ParamLimits

0xf521,	// (0x00051bc0) main_image_pane_t

0x8982,	// (0x0004b021) popup_image_details_window_cp01

0x898a,	// (0x0004b029) popup_toobar_trans_pane_cp01_ParamLimits

0x898a,	// (0x0004b029) popup_toobar_trans_pane_cp01

0x8e5a,	// (0x0004b4f9) popup_image_details_window_ParamLimits

0x8e5a,	// (0x0004b4f9) popup_image_details_window

0x2bba,	// (0x00045259) popup_image_focus_window

0x9124,	// (0x0004b7c3) camera2_autofocus_pane_ParamLimits

0x9124,	// (0x0004b7c3) camera2_autofocus_pane

0xdb8e,	// (0x0005022d) bg_popup_sub_pane_cp06

0x30cd,	// (0x0004576c) popup_image_focus_window_g1

0x30d5,	// (0x00045774) popup_image_focus_window_g2

0x30dd,	// (0x0004577c) popup_image_focus_window_g3

0x30e5,	// (0x00045784) popup_image_focus_window_g4

0x0003,

0xf743,	// (0x00051de2) popup_image_focus_window_g

0x30ed,	// (0x0004578c) popup_image_focus_window_t1

0x30fb,	// (0x0004579a) popup_image_focus_window_t2

0x310a,	// (0x000457a9) popup_image_focus_window_t3

0x0002,

0xf74c,	// (0x00051deb) popup_image_focus_window_t

0x3118,	// (0x000457b7) camera2_autofocus_pane_g1

0xecfa,	// (0x00051399) bg_tb_trans_pane_cp01

0x3126,	// (0x000457c5) popup_image_details_window_g1

0x3139,	// (0x000457d8) popup_image_details_window_g2

0x0002,

0xf75e,	// (0x00051dfd) popup_image_details_window_g

0x3162,	// (0x00045801) popup_image_details_window_t1

0x3174,	// (0x00045813) popup_image_details_window_t2

0x318d,	// (0x0004582c) popup_image_details_window_t3

0x31a1,	// (0x00045840) popup_image_details_window_t4

0x31bc,	// (0x0004585b) popup_image_details_window_t5

0x0004,

0xf765,	// (0x00051e04) popup_image_details_window_t

0xe2fc,	// (0x0005099b) bg_calc_paper_pane_ParamLimits

0x69e3,	// (0x00049082) grid_highlight_pane_cp013

0x69ed,	// (0x0004908c) list_calc_pane_ParamLimits

0x69ff,	// (0x0004909e) scroll_pane_cp024

0xe314,	// (0x000509b3) bg_calc_display_pane_ParamLimits

0x6a07,	// (0x000490a6) calc_display_pane_t1_ParamLimits

0x6a1c,	// (0x000490bb) calc_display_pane_t2_ParamLimits

0x6a31,	// (0x000490d0) calc_display_pane_t3_ParamLimits

0xf182,	// (0x00051821) calc_display_pane_t_ParamLimits

0x6ae7,	// (0x00049186) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0005183e) cell_calc_pane_g

0x6af0,	// (0x0004918f) cell_calc_pane_t1

0xe373,	// (0x00050a12) grid_highlight_pane_cp02_ParamLimits

0xe389,	// (0x00050a28) toolbar_button_pane_cp01_ParamLimits

0xe389,	// (0x00050a28) toolbar_button_pane_cp01

0x1a39,	// (0x000440d8) temp_image_control_pane_ParamLimits

0x1a39,	// (0x000440d8) temp_image_control_pane

0xecfa,	// (0x00051399) main_mp3_pane

0x31d6,	// (0x00045875) temp_image_control_pane_g1_ParamLimits

0x31d6,	// (0x00045875) temp_image_control_pane_g1

0x31e4,	// (0x00045883) temp_image_control_pane_g2_ParamLimits

0x31e4,	// (0x00045883) temp_image_control_pane_g2

0x31f6,	// (0x00045895) temp_image_control_pane_g3_ParamLimits

0x31f6,	// (0x00045895) temp_image_control_pane_g3

0x9748,	// (0x0004bde7) temp_image_control_pane_g4_ParamLimits

0x9748,	// (0x0004bde7) temp_image_control_pane_g4

0x0003,

0xf770,	// (0x00051e0f) temp_image_control_pane_g_ParamLimits

0xf770,	// (0x00051e0f) temp_image_control_pane_g

0x31d6,	// (0x00045875) main_mp3_pane_g1

0x9759,	// (0x0004bdf8) main_mp3_pane_g2

0x0007,

0xf779,	// (0x00051e18) main_mp3_pane_g

0x3239,	// (0x000458d8) main_mp3_pane_t1

0xe4d2,	// (0x00050b71) main_camera_pane_g8_ParamLimits

0xe4d2,	// (0x00050b71) main_camera_pane_g8

0x7268,	// (0x00049907) main_video_pane_g7_ParamLimits

0x7268,	// (0x00049907) main_video_pane_g7

0x9253,	// (0x0004b8f2) main_camera2_pane_t7_ParamLimits

0x9253,	// (0x0004b8f2) main_camera2_pane_t7

0xe62f,	// (0x00050cce) scroll_pane_cp025_ParamLimits

0xe62f,	// (0x00050cce) scroll_pane_cp025

0xe643,	// (0x00050ce2) scroll_pane_cp026_ParamLimits

0xe643,	// (0x00050ce2) scroll_pane_cp026

0xe652,	// (0x00050cf1) wml_content_pane_ParamLimits

0xdb8e,	// (0x0005022d) main_touch_calib_pane

0x97f0,	// (0x0004be8f) main_touch_calib_pane_g1

0x97fc,	// (0x0004be9b) main_touch_calib_pane_g2

0x9808,	// (0x0004bea7) main_touch_calib_pane_g3

0x9814,	// (0x0004beb3) main_touch_calib_pane_g4

0x0003,

0xf797,	// (0x00051e36) main_touch_calib_pane_g

0x9820,	// (0x0004bebf) main_touch_calib_pane_t1

0x9835,	// (0x0004bed4) main_touch_calib_pane_t2

0x0004,

0xf7a0,	// (0x00051e3f) main_touch_calib_pane_t

0x161f,	// (0x00043cbe) mup_progress_pane_cp02

0x163e,	// (0x00043cdd) navi_pane_g1

0x16be,	// (0x00043d5d) navi_pane_mp_t3

0xecfa,	// (0x00051399) main_mp3_pane_ParamLimits

0x8ef5,	// (0x0004b594) navi_pane_ParamLimits

0x31d6,	// (0x00045875) main_mp3_pane_g1_ParamLimits

0x9759,	// (0x0004bdf8) main_mp3_pane_g2_ParamLimits

0x9765,	// (0x0004be04) main_mp3_pane_g3_ParamLimits

0x9765,	// (0x0004be04) main_mp3_pane_g3

0x9771,	// (0x0004be10) main_mp3_pane_g4_ParamLimits

0x9771,	// (0x0004be10) main_mp3_pane_g4

0x3206,	// (0x000458a5) main_mp3_pane_g5_ParamLimits

0x3206,	// (0x000458a5) main_mp3_pane_g5

0x3214,	// (0x000458b3) main_mp3_pane_g6_ParamLimits

0x3214,	// (0x000458b3) main_mp3_pane_g6

0x3221,	// (0x000458c0) main_mp3_pane_g7_ParamLimits

0x3221,	// (0x000458c0) main_mp3_pane_g7

0x322d,	// (0x000458cc) main_mp3_pane_g8_ParamLimits

0x322d,	// (0x000458cc) main_mp3_pane_g8

0xf779,	// (0x00051e18) main_mp3_pane_g_ParamLimits

0x977d,	// (0x0004be1c) main_mp3_pane_t2

0x978b,	// (0x0004be2a) main_mp3_pane_t3

0x3247,	// (0x000458e6) main_mp3_pane_t4

0x3255,	// (0x000458f4) main_mp3_pane_t5

0x0005,

0xf78a,	// (0x00051e29) main_mp3_pane_t

0x3263,	// (0x00045902) mup_progress_pane_cp01

0x127a,	// (0x00043919) aid_zoom_text_secondary2

0x305a,	// (0x000456f9) list_cale_ev2_pane

0x3062,	// (0x00045701) scroll_pane_cp023_ParamLimits

0x9880,	// (0x0004bf1f) field_cale_ev2_pane_ParamLimits

0x9880,	// (0x0004bf1f) field_cale_ev2_pane

0x326b,	// (0x0004590a) field_cale_ev2_pane_g1_ParamLimits

0x326b,	// (0x0004590a) field_cale_ev2_pane_g1

0x3277,	// (0x00045916) field_cale_ev2_pane_g2_ParamLimits

0x3277,	// (0x00045916) field_cale_ev2_pane_g2

0x328f,	// (0x0004592e) field_cale_ev2_pane_g3_ParamLimits

0x328f,	// (0x0004592e) field_cale_ev2_pane_g3

0x0003,

0xf7ab,	// (0x00051e4a) field_cale_ev2_pane_g_ParamLimits

0xf7ab,	// (0x00051e4a) field_cale_ev2_pane_g

0x32b3,	// (0x00045952) field_cale_ev2_pane_t1_ParamLimits

0x32b3,	// (0x00045952) field_cale_ev2_pane_t1

0x32ca,	// (0x00045969) field_cale_ev2_pane_t2_ParamLimits

0x32ca,	// (0x00045969) field_cale_ev2_pane_t2

0x0001,

0xf7b4,	// (0x00051e53) field_cale_ev2_pane_t_ParamLimits

0xf7b4,	// (0x00051e53) field_cale_ev2_pane_t

0x8830,	// (0x0004aecf) main_postcard_pane_g5_ParamLimits

0x8830,	// (0x0004aecf) main_postcard_pane_g5

0x883c,	// (0x0004aedb) main_postcard_pane_g6_ParamLimits

0x883c,	// (0x0004aedb) main_postcard_pane_g6

0x70bd,	// (0x0004975c) camera2_autofocus_pane_cp_ParamLimits

0x70bd,	// (0x0004975c) camera2_autofocus_pane_cp

0xecfa,	// (0x00051399) main_mup3_pane

0x98b6,	// (0x0004bf55) main_mup3_pane_g1_ParamLimits

0x98b6,	// (0x0004bf55) main_mup3_pane_g1

0x98d7,	// (0x0004bf76) main_mup3_pane_g2_ParamLimits

0x98d7,	// (0x0004bf76) main_mup3_pane_g2

0x993a,	// (0x0004bfd9) main_mup3_pane_g3_ParamLimits

0x993a,	// (0x0004bfd9) main_mup3_pane_g3

0x9975,	// (0x0004c014) main_mup3_pane_g4_ParamLimits

0x9975,	// (0x0004c014) main_mup3_pane_g4

0x99b0,	// (0x0004c04f) main_mup3_pane_g5_ParamLimits

0x99b0,	// (0x0004c04f) main_mup3_pane_g5

0x99eb,	// (0x0004c08a) main_mup3_pane_g6_ParamLimits

0x99eb,	// (0x0004c08a) main_mup3_pane_g6

0x32df,	// (0x0004597e) main_mup3_pane_g7_ParamLimits

0x32df,	// (0x0004597e) main_mup3_pane_g7

0x0007,

0xf7c4,	// (0x00051e63) main_mup3_pane_g_ParamLimits

0xf7c4,	// (0x00051e63) main_mup3_pane_g

0x9a59,	// (0x0004c0f8) main_mup3_pane_t1_ParamLimits

0x9a59,	// (0x0004c0f8) main_mup3_pane_t1

0x9abc,	// (0x0004c15b) main_mup3_pane_t2_ParamLimits

0x9abc,	// (0x0004c15b) main_mup3_pane_t2

0x9b79,	// (0x0004c218) main_mup3_pane_t4_ParamLimits

0x9b79,	// (0x0004c218) main_mup3_pane_t4

0x9bbf,	// (0x0004c25e) main_mup3_pane_t5_ParamLimits

0x9bbf,	// (0x0004c25e) main_mup3_pane_t5

0x9c63,	// (0x0004c302) main_mup3_pane_t6_ParamLimits

0x9c63,	// (0x0004c302) main_mup3_pane_t6

0x0005,

0xf7d5,	// (0x00051e74) main_mup3_pane_t_ParamLimits

0xf7d5,	// (0x00051e74) main_mup3_pane_t

0x9d0b,	// (0x0004c3aa) mup3_progress_pane_ParamLimits

0x9d0b,	// (0x0004c3aa) mup3_progress_pane

0x9d51,	// (0x0004c3f0) popup_mup3_control_window_ParamLimits

0x9d51,	// (0x0004c3f0) popup_mup3_control_window

0x32ed,	// (0x0004598c) popup_mup3_text_window

0x9d6a,	// (0x0004c409) mup3_progress_pane_t1

0x9d80,	// (0x0004c41f) mup3_progress_pane_t2

0x32f5,	// (0x00045994) mup3_progress_pane_t3

0x0002,

0xf7e2,	// (0x00051e81) mup3_progress_pane_t

0x330c,	// (0x000459ab) mup_progress_pane_cp03

0xdb8e,	// (0x0005022d) bg_tb_trans_pane_cp04

0x9d96,	// (0x0004c435) mup3_volume_pane

0x9d9e,	// (0x0004c43d) popup_mup3_control_window_g1

0x9da7,	// (0x0004c446) mup3_volume_pane_g1

0x9db0,	// (0x0004c44f) mup3_volume_pane_g2

0x9db9,	// (0x0004c458) mup3_volume_pane_g3

0x0002,

0xf7e9,	// (0x00051e88) mup3_volume_pane_g

0xdb8e,	// (0x0005022d) bg_tb_trans_pane_cp03

0x331c,	// (0x000459bb) popup_mup3_text_window_g1

0x3324,	// (0x000459c3) popup_mup3_text_window_t1

0xe35c,	// (0x000509fb) list_calc_item_pane_g1_ParamLimits

0x2d32,	// (0x000453d1) mup_volume_pane_cp_g1

0x984a,	// (0x0004bee9) main_touch_calib_pane_t3

0x985c,	// (0x0004befb) main_touch_calib_pane_t4

0x986e,	// (0x0004bf0d) main_touch_calib_pane_t5

0xdb98,	// (0x00050237) aid_cell_size_toolbar2

0xdba0,	// (0x0005023f) aid_popup3_width_pane

0x1272,	// (0x00043911) aid_zoom_text_msg_primary

0x70a7,	// (0x00049746) vorec_t7

0xe320,	// (0x000509bf) bg_calc_paper_pane_g1_ParamLimits

0xe32c,	// (0x000509cb) bg_calc_paper_pane_g2_ParamLimits

0xe338,	// (0x000509d7) bg_calc_paper_pane_g3_ParamLimits

0xe344,	// (0x000509e3) bg_calc_paper_pane_g4_ParamLimits

0xe350,	// (0x000509ef) bg_calc_paper_pane_g5_ParamLimits

0x6a6a,	// (0x00049109) bg_calc_paper_pane_g6_ParamLimits

0x6a79,	// (0x00049118) bg_calc_paper_pane_g7_ParamLimits

0x6a88,	// (0x00049127) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x00051828) bg_calc_paper_pane_g_ParamLimits

0x6a97,	// (0x00049136) calc_bg_paper_pane_g9_ParamLimits

0x719d,	// (0x0004983c) image_qvga_pane_ParamLimits

0x719d,	// (0x0004983c) image_qvga_pane

0xe245,	// (0x000508e4) bg_popup_sub_pane_cp04_ParamLimits

0x1970,	// (0x0004400f) popup_mup_playback_window_g1_ParamLimits

0x197c,	// (0x0004401b) popup_mup_playback_window_t1_ParamLimits

0x1991,	// (0x00044030) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x00051bb4) popup_mup_playback_window_t_ParamLimits

0x937a,	// (0x0004ba19) main_mup2_pane_g3_ParamLimits

0x937a,	// (0x0004ba19) main_mup2_pane_g3

0x740b,	// (0x00049aaa) popup_toolbar_window_cp04

0x1d72,	// (0x00044411) popup_call2_audio_second_window_g3_ParamLimits

0x1d72,	// (0x00044411) popup_call2_audio_second_window_g3

0x217c,	// (0x0004481b) popup_call2_audio_first_window_g4_ParamLimits

0x217c,	// (0x0004481b) popup_call2_audio_first_window_g4

0x27fb,	// (0x00044e9a) popup_call2_audio_in_window_g4_ParamLimits

0x27fb,	// (0x00044e9a) popup_call2_audio_in_window_g4

0x8927,	// (0x0004afc6) aid_area_sk_bg_cut_ParamLimits

0x8927,	// (0x0004afc6) aid_area_sk_bg_cut

0x19a6,	// (0x00044045) aid_area_sk_bg_cut_2_ParamLimits

0x19a6,	// (0x00044045) aid_area_sk_bg_cut_2

0x96ba,	// (0x0004bd59) aid_placing_details_win

0x96c2,	// (0x0004bd61) aid_placing_details_win_2

0x3118,	// (0x000457b7) camera2_autofocus_pane_g1_ParamLimits

0x6699,	// (0x00048d38) popup_fixed_preview_cale_window_ParamLimits

0x6699,	// (0x00048d38) popup_fixed_preview_cale_window

0x1750,	// (0x00043def) navi_slider_pane_g3

0x1747,	// (0x00043de6) navi_slider_pane_g4

0x173e,	// (0x00043ddd) navi_slider_pane_g5

0x1750,	// (0x00043def) navi_slider_pane_g6

0x82ad,	// (0x0004a94c) navi_slider_pane_g7

0x1871,	// (0x00043f10) mup_scale_pane_g3

0x187a,	// (0x00043f19) mup_scale_pane_g4

0x1883,	// (0x00043f22) mup_scale_pane_g5

0x8670,	// (0x0004ad0f) mup_scale_pane_g6

0x8679,	// (0x0004ad18) mup_scale_pane_g7

0x1750,	// (0x00043def) cams2_slider_pane_g3

0x2db4,	// (0x00045453) cams2_slider_pane_g4

0x9627,	// (0x0004bcc6) cams2_slider_pane_g5

0x1750,	// (0x00043def) cams2_slider_pane_g6

0x962f,	// (0x0004bcce) cams2_slider_pane_g7

0x2fd7,	// (0x00045676) camera2_autofocus_pane_cp_g1

0x3332,	// (0x000459d1) bg_popup_preview_window_pane_cp02_ParamLimits

0x3332,	// (0x000459d1) bg_popup_preview_window_pane_cp02

0x9dc2,	// (0x0004c461) list_fp_cale_pane_ParamLimits

0x9dc2,	// (0x0004c461) list_fp_cale_pane

0x333e,	// (0x000459dd) popup_fixed_preview_cale_window_t1_ParamLimits

0x333e,	// (0x000459dd) popup_fixed_preview_cale_window_t1

0x9dd2,	// (0x0004c471) popup_fixed_preview_cale_window_t2_ParamLimits

0x9dd2,	// (0x0004c471) popup_fixed_preview_cale_window_t2

0x9de7,	// (0x0004c486) popup_fixed_preview_cale_window_t3_ParamLimits

0x9de7,	// (0x0004c486) popup_fixed_preview_cale_window_t3

0x0002,

0xf7f0,	// (0x00051e8f) popup_fixed_preview_cale_window_t_ParamLimits

0xf7f0,	// (0x00051e8f) popup_fixed_preview_cale_window_t

0x9df9,	// (0x0004c498) list_single_fp_cale_pane_ParamLimits

0x9df9,	// (0x0004c498) list_single_fp_cale_pane

0x9e06,	// (0x0004c4a5) list_single_fp_cale_pane_g1_ParamLimits

0x9e06,	// (0x0004c4a5) list_single_fp_cale_pane_g1

0x335c,	// (0x000459fb) list_single_fp_cale_pane_g2_ParamLimits

0x335c,	// (0x000459fb) list_single_fp_cale_pane_g2

0x0002,

0xf7f7,	// (0x00051e96) list_single_fp_cale_pane_g_ParamLimits

0xf7f7,	// (0x00051e96) list_single_fp_cale_pane_g

0x9e12,	// (0x0004c4b1) list_single_fp_cale_pane_t1_ParamLimits

0x9e12,	// (0x0004c4b1) list_single_fp_cale_pane_t1

0x9e24,	// (0x0004c4c3) list_single_fp_cale_pane_t2_ParamLimits

0x9e24,	// (0x0004c4c3) list_single_fp_cale_pane_t2

0x0001,

0xf7fe,	// (0x00051e9d) list_single_fp_cale_pane_t_ParamLimits

0xf7fe,	// (0x00051e9d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xdb8e,	// (0x0005022d) main_dialer_pane

0x9e57,	// (0x0004c4f6) aid_cell_size_keypad

0x9e61,	// (0x0004c500) dialer_ne_pane

0x9e69,	// (0x0004c508) grid_dialer_command_1_pane

0x9e71,	// (0x0004c510) grid_dialer_command_2_pane

0x9e79,	// (0x0004c518) grid_dialer_keypad_pane

0x9e89,	// (0x0004c528) bg_popup_call_pane_cp06_ParamLimits

0x9e89,	// (0x0004c528) bg_popup_call_pane_cp06

0x9e95,	// (0x0004c534) dialer_ne_clear_pane_ParamLimits

0x9e95,	// (0x0004c534) dialer_ne_clear_pane

0x3375,	// (0x00045a14) dialer_ne_pane_g1

0x337d,	// (0x00045a1c) dialer_ne_pane_t1_ParamLimits

0x337d,	// (0x00045a1c) dialer_ne_pane_t1

0x9ea1,	// (0x0004c540) dialer_ne_pane_t2_ParamLimits

0x9ea1,	// (0x0004c540) dialer_ne_pane_t2

0x9ebe,	// (0x0004c55d) dialer_ne_pane_t3_ParamLimits

0x9ebe,	// (0x0004c55d) dialer_ne_pane_t3

0x0002,

0xf803,	// (0x00051ea2) dialer_ne_pane_t_ParamLimits

0xf803,	// (0x00051ea2) dialer_ne_pane_t

0x9ee2,	// (0x0004c581) dialer_ne_pane_t3_copy1_ParamLimits

0x9ee2,	// (0x0004c581) dialer_ne_pane_t3_copy1

0x9f06,	// (0x0004c5a5) cell_dialer_keypad_pane_ParamLimits

0x9f06,	// (0x0004c5a5) cell_dialer_keypad_pane

0x9f1b,	// (0x0004c5ba) cell_dialer_command_1_pane_ParamLimits

0x9f1b,	// (0x0004c5ba) cell_dialer_command_1_pane

0x9f31,	// (0x0004c5d0) cell_dialer_command_2_pane_ParamLimits

0x9f31,	// (0x0004c5d0) cell_dialer_command_2_pane

0x338f,	// (0x00045a2e) bg_button_pane_cp02_ParamLimits

0x338f,	// (0x00045a2e) bg_button_pane_cp02

0x9f40,	// (0x0004c5df) cell_dialer_keypad_pane_g1_ParamLimits

0x9f40,	// (0x0004c5df) cell_dialer_keypad_pane_g1

0x338f,	// (0x00045a2e) bg_button_pane_cp03_ParamLimits

0x338f,	// (0x00045a2e) bg_button_pane_cp03

0x9f55,	// (0x0004c5f4) cell_dialer_command_1_pane_g1_ParamLimits

0x9f55,	// (0x0004c5f4) cell_dialer_command_1_pane_g1

0x339b,	// (0x00045a3a) bg_button_pane_cp04

0x9f68,	// (0x0004c607) cell_dialer_command_2_pane_g1

0x172d,	// (0x00043dcc) bg_button_pane_cp06

0x33a3,	// (0x00045a42) dialer_ne_clear_pane_g1

0x164a,	// (0x00043ce9) navi_pane_g2

0x8255,	// (0x0004a8f4) navi_pane_g3

0x0002,

0xf418,	// (0x00051ab7) navi_pane_g

0x16cc,	// (0x00043d6b) navi_pane_mv_g2

0x16f4,	// (0x00043d93) navi_pane_mv_g5

0x827a,	// (0x0004a919) navi_pane_mv_t1

0xe314,	// (0x000509b3) main_clock2_pane

0x9f97,	// (0x0004c636) main_clock2_list_pane_ParamLimits

0x9f97,	// (0x0004c636) main_clock2_list_pane

0x9fbd,	// (0x0004c65c) main_clock2_pane_t1_ParamLimits

0x9fbd,	// (0x0004c65c) main_clock2_pane_t1

0x9fe7,	// (0x0004c686) main_clock2_pane_t2_ParamLimits

0x9fe7,	// (0x0004c686) main_clock2_pane_t2

0x0004,

0xf80a,	// (0x00051ea9) main_clock2_pane_t_ParamLimits

0xf80a,	// (0x00051ea9) main_clock2_pane_t

0xa04a,	// (0x0004c6e9) popup_clock_analogue_window_cp03_ParamLimits

0xa04a,	// (0x0004c6e9) popup_clock_analogue_window_cp03

0xa066,	// (0x0004c705) popup_clock_digital_window_cp02_ParamLimits

0xa066,	// (0x0004c705) popup_clock_digital_window_cp02

0xa0b4,	// (0x0004c753) main_clock2_list_single_pane_ParamLimits

0xa0b4,	// (0x0004c753) main_clock2_list_single_pane

0x172d,	// (0x00043dcc) list_highlight_pane_cp05

0x33ab,	// (0x00045a4a) main_clock2_list_single_pane_t1

0x740b,	// (0x00049aaa) popup_toolbar_window_cp04_ParamLimits

0x9718,	// (0x0004bdb7) camera2_autofocus_pane_g2_ParamLimits

0x9718,	// (0x0004bdb7) camera2_autofocus_pane_g2

0x9724,	// (0x0004bdc3) camera2_autofocus_pane_g3_ParamLimits

0x9724,	// (0x0004bdc3) camera2_autofocus_pane_g3

0x9730,	// (0x0004bdcf) camera2_autofocus_pane_g4_ParamLimits

0x9730,	// (0x0004bdcf) camera2_autofocus_pane_g4

0x973c,	// (0x0004bddb) camera2_autofocus_pane_g5_ParamLimits

0x973c,	// (0x0004bddb) camera2_autofocus_pane_g5

0x0004,

0xf753,	// (0x00051df2) camera2_autofocus_pane_g_ParamLimits

0xf753,	// (0x00051df2) camera2_autofocus_pane_g

0x9896,	// (0x0004bf35) camera2_autofocus_pane_cp_g2

0x989e,	// (0x0004bf3d) camera2_autofocus_pane_cp_g3

0x98a6,	// (0x0004bf45) camera2_autofocus_pane_cp_g4

0x98ae,	// (0x0004bf4d) camera2_autofocus_pane_cp_g5

0x0004,

0xf7b9,	// (0x00051e58) camera2_autofocus_pane_cp_g

0x9e81,	// (0x0004c520) popup_dialer_spcha_window

0xdb8e,	// (0x0005022d) bg_popup_sub_pane_cp07

0x33b9,	// (0x00045a58) list_spcha_pane

0x33c1,	// (0x00045a60) list_single_spcha_pane_ParamLimits

0x33c1,	// (0x00045a60) list_single_spcha_pane

0xdb8e,	// (0x0005022d) list_highlight_pane_cp06

0x33d2,	// (0x00045a71) list_single_spcha_pane_t1

0x25a5,	// (0x00044c44) popup_call2_audio_out_window_g4_ParamLimits

0x25a5,	// (0x00044c44) popup_call2_audio_out_window_g4

0xdb8e,	// (0x0005022d) main_imed2_pane

0x2bc2,	// (0x00045261) popup_imed_adjust2_window

0x8e66,	// (0x0004b505) popup_imed_trans_window_ParamLimits

0x8e66,	// (0x0004b505) popup_imed_trans_window

0x2e1b,	// (0x000454ba) popup_blid_sat_info2_window_t1

0x2e29,	// (0x000454c8) popup_blid_sat_info2_window_t2

0x000a,

0xf6e8,	// (0x00051d87) popup_blid_sat_info2_window_t

0xa15c,	// (0x0004c7fb) aid_size_cell_colour_35

0xa173,	// (0x0004c812) aid_size_cell_colour_112

0xa18a,	// (0x0004c829) aid_size_cell_effect

0xecfa,	// (0x00051399) bg_tb_trans_pane_cp02

0xed08,	// (0x000513a7) heading_imed_pane

0xa1a4,	// (0x0004c843) listscroll_imed_pane

0x33e0,	// (0x00045a7f) heading_imed_pane_g1

0x33e8,	// (0x00045a87) heading_imed_pane_t1

0x33f6,	// (0x00045a95) grid_imed_colour_35_pane_ParamLimits

0x33f6,	// (0x00045a95) grid_imed_colour_35_pane

0xa1b0,	// (0x0004c84f) grid_imed_effect_pane

0x3409,	// (0x00045aa8) list_imed_aspect_pane

0xa1bc,	// (0x0004c85b) scroll_pane_cp027_ParamLimits

0xa1bc,	// (0x0004c85b) scroll_pane_cp027

0xa1c8,	// (0x0004c867) cell_imed_effect_pane_ParamLimits

0xa1c8,	// (0x0004c867) cell_imed_effect_pane

0x3411,	// (0x00045ab0) cell_imed_colour_pane_ParamLimits

0x3411,	// (0x00045ab0) cell_imed_colour_pane

0x344b,	// (0x00045aea) cell_imed_colour_pane_g1_ParamLimits

0x344b,	// (0x00045aea) cell_imed_colour_pane_g1

0x345c,	// (0x00045afb) hgihlgiht_grid_pane_cp016_ParamLimits

0x345c,	// (0x00045afb) hgihlgiht_grid_pane_cp016

0xa1de,	// (0x0004c87d) cell_imed_effect_pane_g1

0xa1e6,	// (0x0004c885) grid_highlight_pane_cp017

0x346d,	// (0x00045b0c) list_imed_single_pane_ParamLimits

0x346d,	// (0x00045b0c) list_imed_single_pane

0xdb8e,	// (0x0005022d) list_highlight_pane_cp07

0x3480,	// (0x00045b1f) list_imed_aspect_pane_comp1_t1

0x2b9c,	// (0x0004523b) bg_tb_trans_pane_cp05

0x34a0,	// (0x00045b3f) popup_imed_adjust2_window_g1

0x34c7,	// (0x00045b66) popup_imed_adjust2_window_t1

0x34df,	// (0x00045b7e) slider_imed_adjust_pane

0x34f3,	// (0x00045b92) slider_imed_adjust_pane_g1

0x3503,	// (0x00045ba2) slider_imed_adjust_pane_g2

0x3513,	// (0x00045bb2) slider_imed_adjust_pane_g3

0x3524,	// (0x00045bc3) slider_imed_adjust_pane_g4

0x0003,

0xf827,	// (0x00051ec6) slider_imed_adjust_pane_g

0xa1ef,	// (0x0004c88e) aid_size_cell_clipart2

0xa1fb,	// (0x0004c89a) grid_imed_clipart_pane

0x3535,	// (0x00045bd4) scroll_pane_cp031

0xa205,	// (0x0004c8a4) cell_imed_clipart_pane_ParamLimits

0xa205,	// (0x0004c8a4) cell_imed_clipart_pane

0xa21c,	// (0x0004c8bb) cell_imed_clipart_pane_g1

0xdb8e,	// (0x0005022d) grid_highlight_pane_cp014

0x9fa3,	// (0x0004c642) main_clock2_pane_g1_ParamLimits

0x9fa3,	// (0x0004c642) main_clock2_pane_g1

0xa07e,	// (0x0004c71d) aid_call2_pane_cp10

0xa08a,	// (0x0004c729) aid_call_pane_cp10

0x15fa,	// (0x00043c99) popup_clock_analogue_window_cp10_g1

0x15fa,	// (0x00043c99) popup_clock_analogue_window_cp10_g2

0xa096,	// (0x0004c735) popup_clock_analogue_window_cp10_g3

0xa096,	// (0x0004c735) popup_clock_analogue_window_cp10_g4

0x15fa,	// (0x00043c99) popup_clock_analogue_window_cp10_g5

0x0004,

0xf815,	// (0x00051eb4) popup_clock_analogue_window_cp10_g

0xa0a2,	// (0x0004c741) popup_clock_analogue_window_cp10_t1

0xa0c6,	// (0x0004c765) clock_digital_number_pane_cp10_ParamLimits

0xa0c6,	// (0x0004c765) clock_digital_number_pane_cp10

0xa0de,	// (0x0004c77d) clock_digital_number_pane_cp11_ParamLimits

0xa0de,	// (0x0004c77d) clock_digital_number_pane_cp11

0xa0f6,	// (0x0004c795) clock_digital_number_pane_cp12_ParamLimits

0xa0f6,	// (0x0004c795) clock_digital_number_pane_cp12

0xa10e,	// (0x0004c7ad) clock_digital_number_pane_cp13_ParamLimits

0xa10e,	// (0x0004c7ad) clock_digital_number_pane_cp13

0xa126,	// (0x0004c7c5) clock_digital_separator_pane_cp10_ParamLimits

0xa126,	// (0x0004c7c5) clock_digital_separator_pane_cp10

0xa13e,	// (0x0004c7dd) popup_clock_digital_window_cp02_t1_ParamLimits

0xa13e,	// (0x0004c7dd) popup_clock_digital_window_cp02_t1

0xe23d,	// (0x000508dc) clock_digital_number_pane_cp10_g1

0xe23d,	// (0x000508dc) clock_digital_number_pane_cp10_g2

0x0001,

0xf830,	// (0x00051ecf) clock_digital_number_pane_cp10_g

0xe23d,	// (0x000508dc) clock_digital_separator_pane_cp10_g1

0xe23d,	// (0x000508dc) clock_digital_separator_pane_g2_cp10

0x16fd,	// (0x00043d9c) navi_pane_vded_g4

0x1706,	// (0x00043da5) navi_pane_vded_g5

0x170f,	// (0x00043dae) navi_pane_vded_t1

0xdb8e,	// (0x0005022d) main_vded_pane

0xa225,	// (0x0004c8c4) main_vded_pane_g1

0xa22d,	// (0x0004c8cc) main_vded_pane_g2

0xa235,	// (0x0004c8d4) main_vded_pane_g3

0x0002,

0xf835,	// (0x00051ed4) main_vded_pane_g

0xa23d,	// (0x0004c8dc) main_vded_pane_t1

0xa24b,	// (0x0004c8ea) main_vded_pane_t2

0x0001,

0xf83c,	// (0x00051edb) main_vded_pane_t

0xa259,	// (0x0004c8f8) vded_slider_pane

0xa261,	// (0x0004c900) vded_video_pane

0x353d,	// (0x00045bdc) vded_video_pane_g1

0xa269,	// (0x0004c908) vded_video_pane_g2

0x2fd7,	// (0x00045676) vded_video_pane_g3

0x0002,

0xf841,	// (0x00051ee0) vded_video_pane_g

0x3547,	// (0x00045be6) vded_slider_pane_g1

0x2d32,	// (0x000453d1) vded_slider_pane_g2

0x3550,	// (0x00045bef) vded_slider_pane_g3

0x3559,	// (0x00045bf8) vded_slider_pane_g4

0x3562,	// (0x00045c01) vded_slider_pane_g5

0x0004,

0xf848,	// (0x00051ee7) vded_slider_pane_g

0x9d45,	// (0x0004c3e4) mup3_rocker_pane_ParamLimits

0x9d45,	// (0x0004c3e4) mup3_rocker_pane

0xa272,	// (0x0004c911) mup3_control_keys_pane_g1

0xa27a,	// (0x0004c919) mup3_control_keys_pane_g2

0xa282,	// (0x0004c921) mup3_control_keys_pane_g3

0xa28a,	// (0x0004c929) mup3_control_keys_pane_g4

0x0003,

0xf853,	// (0x00051ef2) mup3_control_keys_pane_g

0x66b5,	// (0x00048d54) popup_toolbar2_fixed_window_cp01_ParamLimits

0x66b5,	// (0x00048d54) popup_toolbar2_fixed_window_cp01

0x9d5d,	// (0x0004c3fc) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9d5d,	// (0x0004c3fc) popup_toolbar2_fixed_window_cp02

0x1ee4,	// (0x00044583) popup_call2_audio_second_window_t4_ParamLimits

0x1ee4,	// (0x00044583) popup_call2_audio_second_window_t4

0x2412,	// (0x00044ab1) popup_call2_audio_first_window_t6_ParamLimits

0x2412,	// (0x00044ab1) popup_call2_audio_first_window_t6

0x26a8,	// (0x00044d47) popup_call2_audio_out_window_t6_ParamLimits

0x26a8,	// (0x00044d47) popup_call2_audio_out_window_t6

0xdb8e,	// (0x0005022d) main_vitu_pane

0xa29a,	// (0x0004c939) aid_size_cell_itu_ParamLimits

0xa29a,	// (0x0004c939) aid_size_cell_itu

0x3952,	// (0x00045ff1) bg_popup_window_pane_cp08_ParamLimits

0x3952,	// (0x00045ff1) bg_popup_window_pane_cp08

0xa2a8,	// (0x0004c947) field_vitu_entry_pane_ParamLimits

0xa2a8,	// (0x0004c947) field_vitu_entry_pane

0xa2b5,	// (0x0004c954) grid_vitu_function_pane_ParamLimits

0xa2b5,	// (0x0004c954) grid_vitu_function_pane

0xa2c1,	// (0x0004c960) grid_vitu_itu_pane_ParamLimits

0xa2c1,	// (0x0004c960) grid_vitu_itu_pane

0xa2cd,	// (0x0004c96c) cell_vitu_itu_pane_ParamLimits

0xa2cd,	// (0x0004c96c) cell_vitu_itu_pane

0xa2e2,	// (0x0004c981) cell_vitu_function_pane_ParamLimits

0xa2e2,	// (0x0004c981) cell_vitu_function_pane

0xecfa,	// (0x00051399) bg_popup_sub_pane_cp08_ParamLimits

0xecfa,	// (0x00051399) bg_popup_sub_pane_cp08

0xa2f4,	// (0x0004c993) field_vitu_entry_pane_t1_ParamLimits

0xa2f4,	// (0x0004c993) field_vitu_entry_pane_t1

0x3583,	// (0x00045c22) field_vitu_entry_pane_t2_ParamLimits

0x3583,	// (0x00045c22) field_vitu_entry_pane_t2

0x0001,

0xf861,	// (0x00051f00) field_vitu_entry_pane_t_ParamLimits

0xf861,	// (0x00051f00) field_vitu_entry_pane_t

0x35a0,	// (0x00045c3f) bg_button_pane_cp05_ParamLimits

0x35a0,	// (0x00045c3f) bg_button_pane_cp05

0xa30d,	// (0x0004c9ac) cell_vitu_itu_pane_g1

0xa325,	// (0x0004c9c4) cell_vitu_itu_pane_t1_ParamLimits

0xa325,	// (0x0004c9c4) cell_vitu_itu_pane_t1

0xa337,	// (0x0004c9d6) cell_vitu_itu_pane_t2_ParamLimits

0xa337,	// (0x0004c9d6) cell_vitu_itu_pane_t2

0x0002,

0xf866,	// (0x00051f05) cell_vitu_itu_pane_t_ParamLimits

0xf866,	// (0x00051f05) cell_vitu_itu_pane_t

0x35ae,	// (0x00045c4d) bg_button_pane_cp07

0xa36c,	// (0x0004ca0b) cell_vitu_function_pane_g1

0x691a,	// (0x00048fb9) main_calc_pane_g1

0x64fc,	// (0x00048b9b) aid_visual_content_pane

0xdb8e,	// (0x0005022d) main_vradio_pane

0xa375,	// (0x0004ca14) main_vradio_pane_g1_ParamLimits

0xa375,	// (0x0004ca14) main_vradio_pane_g1

0x35b8,	// (0x00045c57) main_vradio_pane_g2_ParamLimits

0x35b8,	// (0x00045c57) main_vradio_pane_g2

0x0001,

0xf86d,	// (0x00051f0c) main_vradio_pane_g_ParamLimits

0xf86d,	// (0x00051f0c) main_vradio_pane_g

0xa383,	// (0x0004ca22) main_vradio_pane_t1_ParamLimits

0xa383,	// (0x0004ca22) main_vradio_pane_t1

0xa395,	// (0x0004ca34) main_vradio_pane_t2_ParamLimits

0xa395,	// (0x0004ca34) main_vradio_pane_t2

0x35c5,	// (0x00045c64) main_vradio_pane_t3_ParamLimits

0x35c5,	// (0x00045c64) main_vradio_pane_t3

0x0002,

0xf872,	// (0x00051f11) main_vradio_pane_t_ParamLimits

0xf872,	// (0x00051f11) main_vradio_pane_t

0xa3a7,	// (0x0004ca46) vradio_rocker_control_pane_ParamLimits

0xa3a7,	// (0x0004ca46) vradio_rocker_control_pane

0xa3b3,	// (0x0004ca52) vradio_station_info_pane_ParamLimits

0xa3b3,	// (0x0004ca52) vradio_station_info_pane

0x35d7,	// (0x00045c76) vradio_frequency_info_pane_ParamLimits

0x35d7,	// (0x00045c76) vradio_frequency_info_pane

0x2fd7,	// (0x00045676) vradio_station_info_pane_g1

0x35e6,	// (0x00045c85) vradio_station_info_pane_t1_ParamLimits

0x35e6,	// (0x00045c85) vradio_station_info_pane_t1

0x3608,	// (0x00045ca7) vradio_station_info_pane_t2_ParamLimits

0x3608,	// (0x00045ca7) vradio_station_info_pane_t2

0x0001,

0xf879,	// (0x00051f18) vradio_station_info_pane_t_ParamLimits

0xf879,	// (0x00051f18) vradio_station_info_pane_t

0x361a,	// (0x00045cb9) vradio_tuning_pane

0x3622,	// (0x00045cc1) vradio_rocker_control_pane_g1

0x362a,	// (0x00045cc9) vradio_rocker_control_pane_g2

0x3632,	// (0x00045cd1) vradio_rocker_control_pane_g3

0x363a,	// (0x00045cd9) vradio_rocker_control_pane_g4

0x3642,	// (0x00045ce1) vradio_rocker_control_pane_g5

0x0004,

0xf87e,	// (0x00051f1d) vradio_rocker_control_pane_g

0xa3c0,	// (0x0004ca5f) vradio_frequency_info_pane_g1

0x364a,	// (0x00045ce9) vradio_frequency_info_pane_t1_ParamLimits

0x364a,	// (0x00045ce9) vradio_frequency_info_pane_t1

0xa3c8,	// (0x0004ca67) vradio_tuning_pane_g1

0xa3d1,	// (0x0004ca70) vradio_tuning_pane_t1

0xdbb0,	// (0x0005024f) area_side_right_pane_ParamLimits

0xdbb0,	// (0x0005024f) area_side_right_pane

0x2b63,	// (0x00045202) status_small_pane_g1

0x2b6b,	// (0x0004520a) status_small_pane_g2

0x2b74,	// (0x00045213) status_small_pane_g3

0x2b7d,	// (0x0004521c) status_small_pane_g4

0x0003,

0xf63e,	// (0x00051cdd) status_small_pane_g

0x2b86,	// (0x00045225) status_small_pane_t1

0xdb8e,	// (0x0005022d) main_video3_pane

0x365e,	// (0x00045cfd) cams_zoom_vslider_pane

0x3666,	// (0x00045d05) image3_wide_pane_ParamLimits

0x3666,	// (0x00045d05) image3_wide_pane

0x3680,	// (0x00045d1f) image3_wide_small_pane

0x368a,	// (0x00045d29) main_video3_pane_g1_ParamLimits

0x368a,	// (0x00045d29) main_video3_pane_g1

0x36a6,	// (0x00045d45) main_video3_pane_g2_ParamLimits

0x36a6,	// (0x00045d45) main_video3_pane_g2

0x0001,

0xf889,	// (0x00051f28) main_video3_pane_g_ParamLimits

0xf889,	// (0x00051f28) main_video3_pane_g

0x36c2,	// (0x00045d61) main_video3_pane_t1_ParamLimits

0x36c2,	// (0x00045d61) main_video3_pane_t1

0x36ed,	// (0x00045d8c) main_video3_pane_t2_ParamLimits

0x36ed,	// (0x00045d8c) main_video3_pane_t2

0x3718,	// (0x00045db7) main_video3_pane_t3_ParamLimits

0x3718,	// (0x00045db7) main_video3_pane_t3

0x0002,

0xf88e,	// (0x00051f2d) main_video3_pane_t_ParamLimits

0xf88e,	// (0x00051f2d) main_video3_pane_t

0x3743,	// (0x00045de2) cams_zoom_vslider_pane_g1

0x374c,	// (0x00045deb) cams_zoom_vslider_pane_g2

0x0001,

0xf895,	// (0x00051f34) cams_zoom_vslider_pane_g

0x3754,	// (0x00045df3) small_slider_vertical_pane

0x2fd7,	// (0x00045676) small_slider_vertical_pane_g1

0x2fd7,	// (0x00045676) small_slider_vertical_pane_g2

0x375c,	// (0x00045dfb) small_slider_vertical_pane_g3

0x0002,

0xf89a,	// (0x00051f39) small_slider_vertical_pane_g

0xdb8e,	// (0x0005022d) main_hwr_training_pane

0x3765,	// (0x00045e04) hwr_training_instruct_pane_ParamLimits

0x3765,	// (0x00045e04) hwr_training_instruct_pane

0xa3e0,	// (0x0004ca7f) hwr_training_navi_pane_ParamLimits

0xa3e0,	// (0x0004ca7f) hwr_training_navi_pane

0xa3f4,	// (0x0004ca93) hwr_training_write_pane_ParamLimits

0xa3f4,	// (0x0004ca93) hwr_training_write_pane

0xdb8e,	// (0x0005022d) bg_frame_shadow_pane

0x3794,	// (0x00045e33) hwr_training_write_pane_g1

0x379c,	// (0x00045e3b) hwr_training_write_pane_g2

0x37a4,	// (0x00045e43) hwr_training_write_pane_g3

0x37ac,	// (0x00045e4b) hwr_training_write_pane_g4

0x37b4,	// (0x00045e53) hwr_training_write_pane_g5

0x37bc,	// (0x00045e5b) hwr_training_write_pane_g6

0x37c4,	// (0x00045e63) hwr_training_write_pane_g7

0x0006,

0xf8a1,	// (0x00051f40) hwr_training_write_pane_g

0xa422,	// (0x0004cac1) hwr_training_navi_pane_g1_ParamLimits

0xa422,	// (0x0004cac1) hwr_training_navi_pane_g1

0xa434,	// (0x0004cad3) hwr_training_navi_pane_g2_ParamLimits

0xa434,	// (0x0004cad3) hwr_training_navi_pane_g2

0xa446,	// (0x0004cae5) hwr_training_navi_pane_g3_ParamLimits

0xa446,	// (0x0004cae5) hwr_training_navi_pane_g3

0xa456,	// (0x0004caf5) hwr_training_navi_pane_g4_ParamLimits

0xa456,	// (0x0004caf5) hwr_training_navi_pane_g4

0x0004,

0xf8b0,	// (0x00051f4f) hwr_training_navi_pane_g_ParamLimits

0xf8b0,	// (0x00051f4f) hwr_training_navi_pane_g

0xa470,	// (0x0004cb0f) hwr_training_navi_pane_t1

0xa47e,	// (0x0004cb1d) list_single_hwr_training_instruct_pane_ParamLimits

0xa47e,	// (0x0004cb1d) list_single_hwr_training_instruct_pane

0x37cc,	// (0x00045e6b) list_single_hwr_training_instruct_pane_t1

0x2f17,	// (0x000455b6) bg_frame_shadow_pane_g1

0x37db,	// (0x00045e7a) bg_frame_shadow_pane_g2

0x37e3,	// (0x00045e82) bg_frame_shadow_pane_g3

0x37eb,	// (0x00045e8a) bg_frame_shadow_pane_g4

0x37f3,	// (0x00045e92) bg_frame_shadow_pane_g5

0x37fb,	// (0x00045e9a) bg_frame_shadow_pane_g6

0x3803,	// (0x00045ea2) bg_frame_shadow_pane_g7

0xe3df,	// (0x00050a7e) bg_frame_shadow_pane_g8

0x0007,

0xf8bb,	// (0x00051f5a) bg_frame_shadow_pane_g

0xdb8e,	// (0x0005022d) main_video_tele_dialer_pane

0xa496,	// (0x0004cb35) aid_size_cell_video_keypad_ParamLimits

0xa496,	// (0x0004cb35) aid_size_cell_video_keypad

0xa4a6,	// (0x0004cb45) grid_video_dialer_keypad_pane_ParamLimits

0xa4a6,	// (0x0004cb45) grid_video_dialer_keypad_pane

0xa4d6,	// (0x0004cb75) video_down_pane_cp_ParamLimits

0xa4d6,	// (0x0004cb75) video_down_pane_cp

0xa4fe,	// (0x0004cb9d) cell_video_dialer_keypad_pane_ParamLimits

0xa4fe,	// (0x0004cb9d) cell_video_dialer_keypad_pane

0x380b,	// (0x00045eaa) bg_button_pane_cp08_ParamLimits

0x380b,	// (0x00045eaa) bg_button_pane_cp08

0xa513,	// (0x0004cbb2) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa513,	// (0x0004cbb2) cell_video_dialer_keypad_pane_g1

0x9d39,	// (0x0004c3d8) mup3_rocker2_pane_ParamLimits

0x9d39,	// (0x0004c3d8) mup3_rocker2_pane

0x2fd7,	// (0x00045676) mup3_rocker2_pane_g1

0x8e00,	// (0x0004b49f) main_dialer2_pane

0xdb8e,	// (0x0005022d) main_mp4_pane

0xa552,	// (0x0004cbf1) main_mp4_pane_g1_ParamLimits

0xa552,	// (0x0004cbf1) main_mp4_pane_g1

0xa560,	// (0x0004cbff) main_mp4_pane_g2_ParamLimits

0xa560,	// (0x0004cbff) main_mp4_pane_g2

0xa56e,	// (0x0004cc0d) main_mp4_pane_g3_ParamLimits

0xa56e,	// (0x0004cc0d) main_mp4_pane_g3

0xa5a3,	// (0x0004cc42) main_mp4_pane_g4_ParamLimits

0xa5a3,	// (0x0004cc42) main_mp4_pane_g4

0xa5d1,	// (0x0004cc70) main_mp4_pane_g5_ParamLimits

0xa5d1,	// (0x0004cc70) main_mp4_pane_g5

0x0005,

0xf8db,	// (0x00051f7a) main_mp4_pane_g_ParamLimits

0xf8db,	// (0x00051f7a) main_mp4_pane_g

0xa62d,	// (0x0004cccc) main_mp4_pane_t1_ParamLimits

0xa62d,	// (0x0004cccc) main_mp4_pane_t1

0xa685,	// (0x0004cd24) main_mp4_pane_t2_ParamLimits

0xa685,	// (0x0004cd24) main_mp4_pane_t2

0x3817,	// (0x00045eb6) main_mp4_pane_t3_ParamLimits

0x3817,	// (0x00045eb6) main_mp4_pane_t3

0xa6d7,	// (0x0004cd76) main_mp4_pane_t4_ParamLimits

0xa6d7,	// (0x0004cd76) main_mp4_pane_t4

0x0003,

0xf8e8,	// (0x00051f87) main_mp4_pane_t_ParamLimits

0xf8e8,	// (0x00051f87) main_mp4_pane_t

0xa717,	// (0x0004cdb6) mp4_progress_pane_ParamLimits

0xa717,	// (0x0004cdb6) mp4_progress_pane

0xa75b,	// (0x0004cdfa) mp4_rocker_pane_ParamLimits

0xa75b,	// (0x0004cdfa) mp4_rocker_pane

0x3845,	// (0x00045ee4) mp4_progress_pane_t1

0x385c,	// (0x00045efb) mp4_progress_pane_t2

0x0001,

0xf8f1,	// (0x00051f90) mp4_progress_pane_t

0x3873,	// (0x00045f12) mup_progress_pane_cp04

0x40b3,	// (0x00046752) mp4_rocker_pane_g1

0xa779,	// (0x0004ce18) aid_cell_size_keypad2_ParamLimits

0xa779,	// (0x0004ce18) aid_cell_size_keypad2

0xa789,	// (0x0004ce28) dialer2_ne_pane_ParamLimits

0xa789,	// (0x0004ce28) dialer2_ne_pane

0xa795,	// (0x0004ce34) grid_dialer2_keypad_pane_ParamLimits

0xa795,	// (0x0004ce34) grid_dialer2_keypad_pane

0x410e,	// (0x000467ad) bg_popup_call_pane_cp07_ParamLimits

0x410e,	// (0x000467ad) bg_popup_call_pane_cp07

0xa7a1,	// (0x0004ce40) dialer2_ne_pane_t1_ParamLimits

0xa7a1,	// (0x0004ce40) dialer2_ne_pane_t1

0xa7c6,	// (0x0004ce65) cell_dialer2_keypad_pane_ParamLimits

0xa7c6,	// (0x0004ce65) cell_dialer2_keypad_pane

0x3891,	// (0x00045f30) bg_button_pane_pane_cp04_ParamLimits

0x3891,	// (0x00045f30) bg_button_pane_pane_cp04

0xa7db,	// (0x0004ce7a) cell_dialer2_keypad_pane_g1_ParamLimits

0xa7db,	// (0x0004ce7a) cell_dialer2_keypad_pane_g1

0x7359,	// (0x000499f8) aid_placing_vt_set_content_ParamLimits

0x7359,	// (0x000499f8) aid_placing_vt_set_content

0x7373,	// (0x00049a12) aid_placing_vt_set_title_ParamLimits

0x7373,	// (0x00049a12) aid_placing_vt_set_title

0xdb8e,	// (0x0005022d) main_image3_pane

0xa84f,	// (0x0004ceee) area_side_right_pane_cp01_ParamLimits

0xa84f,	// (0x0004ceee) area_side_right_pane_cp01

0xa87c,	// (0x0004cf1b) main_image3_pane_g1_ParamLimits

0xa87c,	// (0x0004cf1b) main_image3_pane_g1

0xa88a,	// (0x0004cf29) main_image3_pane_g2_ParamLimits

0xa88a,	// (0x0004cf29) main_image3_pane_g2

0xa8a1,	// (0x0004cf40) main_image3_pane_g3_ParamLimits

0xa8a1,	// (0x0004cf40) main_image3_pane_g3

0xa8b8,	// (0x0004cf57) main_image3_pane_g4_ParamLimits

0xa8b8,	// (0x0004cf57) main_image3_pane_g4

0x0003,

0xf900,	// (0x00051f9f) main_image3_pane_g_ParamLimits

0xf900,	// (0x00051f9f) main_image3_pane_g

0xa8cf,	// (0x0004cf6e) main_image3_pane_t1_ParamLimits

0xa8cf,	// (0x0004cf6e) main_image3_pane_t1

0xa8f4,	// (0x0004cf93) main_image3_pane_t2_ParamLimits

0xa8f4,	// (0x0004cf93) main_image3_pane_t2

0xa913,	// (0x0004cfb2) main_image3_pane_t3_ParamLimits

0xa913,	// (0x0004cfb2) main_image3_pane_t3

0x0003,

0xf909,	// (0x00051fa8) main_image3_pane_t_ParamLimits

0xf909,	// (0x00051fa8) main_image3_pane_t

0x3952,	// (0x00045ff1) grid_sctrl_middle_pane_cp01_ParamLimits

0x3952,	// (0x00045ff1) grid_sctrl_middle_pane_cp01

0xa96e,	// (0x0004d00d) cell_sctrl_middle_pane_cp01_ParamLimits

0xa96e,	// (0x0004d00d) cell_sctrl_middle_pane_cp01

0xa97f,	// (0x0004d01e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa97f,	// (0x0004d01e) cell_sctrl_middle_pane_cp01_g1

0xdb8e,	// (0x0005022d) main_call4_pane

0xa98c,	// (0x0004d02b) aid_size_button_call4_ParamLimits

0xa98c,	// (0x0004d02b) aid_size_button_call4

0xa9b6,	// (0x0004d055) call4_windows_pane_ParamLimits

0xa9b6,	// (0x0004d055) call4_windows_pane

0xa9ca,	// (0x0004d069) grid_call4_button_pane_ParamLimits

0xa9ca,	// (0x0004d069) grid_call4_button_pane

0x38b5,	// (0x00045f54) call4_windows_conf_pane

0xa9e4,	// (0x0004d083) popup_call4_audio_first_window_ParamLimits

0xa9e4,	// (0x0004d083) popup_call4_audio_first_window

0xaa04,	// (0x0004d0a3) popup_call4_audio_second_window_ParamLimits

0xaa04,	// (0x0004d0a3) popup_call4_audio_second_window

0x38e8,	// (0x00045f87) popup_call4_audio_wait_window_ParamLimits

0x38e8,	// (0x00045f87) popup_call4_audio_wait_window

0xaa16,	// (0x0004d0b5) cell_call4_button_pane_ParamLimits

0xaa16,	// (0x0004d0b5) cell_call4_button_pane

0xe389,	// (0x00050a28) bg_button_pane_cp09_ParamLimits

0xe389,	// (0x00050a28) bg_button_pane_cp09

0xaa39,	// (0x0004d0d8) cell_call4_button_pane_g1_ParamLimits

0xaa39,	// (0x0004d0d8) cell_call4_button_pane_g1

0xaa46,	// (0x0004d0e5) cell_call4_button_pane_t1_ParamLimits

0xaa46,	// (0x0004d0e5) cell_call4_button_pane_t1

0x392e,	// (0x00045fcd) popup_call4_audio_conf_window_ParamLimits

0x392e,	// (0x00045fcd) popup_call4_audio_conf_window

0x9d6a,	// (0x0004c409) mup3_progress_pane_t1_ParamLimits

0x9d80,	// (0x0004c41f) mup3_progress_pane_t2_ParamLimits

0x32f5,	// (0x00045994) mup3_progress_pane_t3_ParamLimits

0xf7e2,	// (0x00051e81) mup3_progress_pane_t_ParamLimits

0x330c,	// (0x000459ab) mup_progress_pane_cp03_ParamLimits

0xa292,	// (0x0004c931) mup3_control_keys_pane_g4_copy1

0xa745,	// (0x0004cde4) mp4_rocker2_pane_ParamLimits

0xa745,	// (0x0004cde4) mp4_rocker2_pane

0x394a,	// (0x00045fe9) mp4_rocker2_pane_g1

0x3942,	// (0x00045fe1) mp4_rocker2_pane_g2

0xaa58,	// (0x0004d0f7) mp4_rocker2_pane_g3

0xaa60,	// (0x0004d0ff) mp4_rocker2_pane_g4

0xaa68,	// (0x0004d107) mp4_rocker2_pane_g5

0x0004,

0xf912,	// (0x00051fb1) mp4_rocker2_pane_g

0xdb8e,	// (0x0005022d) main_camera4_pane

0xdb8e,	// (0x0005022d) main_video4_pane

0xa4b2,	// (0x0004cb51) main_video_tele_dialer_pane_t1_ParamLimits

0xa4b2,	// (0x0004cb51) main_video_tele_dialer_pane_t1

0xa4c4,	// (0x0004cb63) main_video_tele_dialer_pane_t2_ParamLimits

0xa4c4,	// (0x0004cb63) main_video_tele_dialer_pane_t2

0x0001,

0xf8cc,	// (0x00051f6b) main_video_tele_dialer_pane_t_ParamLimits

0xf8cc,	// (0x00051f6b) main_video_tele_dialer_pane_t

0xaa86,	// (0x0004d125) cam4_autofocus_pane_ParamLimits

0xaa86,	// (0x0004d125) cam4_autofocus_pane

0xaa92,	// (0x0004d131) cam4_image_uncrop_pane_ParamLimits

0xaa92,	// (0x0004d131) cam4_image_uncrop_pane

0xaaa7,	// (0x0004d146) cam4_indicators_pane_ParamLimits

0xaaa7,	// (0x0004d146) cam4_indicators_pane

0xaac1,	// (0x0004d160) main_camera4_pane_g1_ParamLimits

0xaac1,	// (0x0004d160) main_camera4_pane_g1

0xaacd,	// (0x0004d16c) main_camera4_pane_g2_ParamLimits

0xaacd,	// (0x0004d16c) main_camera4_pane_g2

0xaacd,	// (0x0004d16c) main_camera4_pane_g3_ParamLimits

0xaacd,	// (0x0004d16c) main_camera4_pane_g3

0xaad9,	// (0x0004d178) main_camera4_pane_g4_ParamLimits

0xaad9,	// (0x0004d178) main_camera4_pane_g4

0xaae5,	// (0x0004d184) main_camera4_pane_g5_ParamLimits

0xaae5,	// (0x0004d184) main_camera4_pane_g5

0x0005,

0xf91d,	// (0x00051fbc) main_camera4_pane_g_ParamLimits

0xf91d,	// (0x00051fbc) main_camera4_pane_g

0xaaff,	// (0x0004d19e) main_camera4_pane_t1_ParamLimits

0xaaff,	// (0x0004d19e) main_camera4_pane_t1

0xab47,	// (0x0004d1e6) bg_tb_trans_pane_cp06

0xab5d,	// (0x0004d1fc) cam4_indicators_pane_g1

0xab6d,	// (0x0004d20c) cam4_indicators_pane_g2

0x0002,

0xf938,	// (0x00051fd7) cam4_indicators_pane_g

0xab8d,	// (0x0004d22c) cam4_indicators_pane_t1

0xabb5,	// (0x0004d254) main_video4_pane_g1_ParamLimits

0xabb5,	// (0x0004d254) main_video4_pane_g1

0xaacd,	// (0x0004d16c) main_video4_pane_g2_ParamLimits

0xaacd,	// (0x0004d16c) main_video4_pane_g2

0xaacd,	// (0x0004d16c) main_video4_pane_g3_ParamLimits

0xaacd,	// (0x0004d16c) main_video4_pane_g3

0xaad9,	// (0x0004d178) main_video4_pane_g4_ParamLimits

0xaad9,	// (0x0004d178) main_video4_pane_g4

0x0004,

0xf93f,	// (0x00051fde) main_video4_pane_g_ParamLimits

0xf93f,	// (0x00051fde) main_video4_pane_g

0xabc9,	// (0x0004d268) vid4_indicators_pane_ParamLimits

0xabc9,	// (0x0004d268) vid4_indicators_pane

0xabe7,	// (0x0004d286) video4_image_uncrop_cif_pane_ParamLimits

0xabe7,	// (0x0004d286) video4_image_uncrop_cif_pane

0xabf4,	// (0x0004d293) video4_image_uncrop_nhd_pane_ParamLimits

0xabf4,	// (0x0004d293) video4_image_uncrop_nhd_pane

0xaa92,	// (0x0004d131) video4_image_uncrop_vga_pane_ParamLimits

0xaa92,	// (0x0004d131) video4_image_uncrop_vga_pane

0xac01,	// (0x0004d2a0) bg_tb_trans_pane_cp07

0xab5d,	// (0x0004d1fc) vid4_indicators_pane_g1

0xac0f,	// (0x0004d2ae) vid4_indicators_pane_g2

0xac1f,	// (0x0004d2be) vid4_indicators_pane_g3

0x0004,

0xf94a,	// (0x00051fe9) vid4_indicators_pane_g

0xac4c,	// (0x0004d2eb) vid4_indicators_pane_t1

0xac66,	// (0x0004d305) cam4_autofocus_pane_g1

0xac6e,	// (0x0004d30d) cam4_autofocus_pane_g2

0xac76,	// (0x0004d315) cam4_autofocus_pane_g3

0x0002,

0xf955,	// (0x00051ff4) cam4_autofocus_pane_g

0xac7e,	// (0x0004d31d) cam4_autofocus_pane_g3_copy1

0xa4e2,	// (0x0004cb81) video_down_pane_cp_t1

0xa4f0,	// (0x0004cb8f) video_down_pane_cp_t2

0x0001,

0xf8d1,	// (0x00051f70) video_down_pane_cp_t

0x3952,	// (0x00045ff1) popup_vitu2_window_ParamLimits

0x3952,	// (0x00045ff1) popup_vitu2_window

0xac86,	// (0x0004d325) aid_size_cell2_itu2_ParamLimits

0xac86,	// (0x0004d325) aid_size_cell2_itu2

0xaca8,	// (0x0004d347) aid_size_cell_itu2_ParamLimits

0xaca8,	// (0x0004d347) aid_size_cell_itu2

0xace6,	// (0x0004d385) bg_popup_window_pane_cp09_ParamLimits

0xace6,	// (0x0004d385) bg_popup_window_pane_cp09

0xacf4,	// (0x0004d393) field_vitu2_entry_pane_ParamLimits

0xacf4,	// (0x0004d393) field_vitu2_entry_pane

0xad0a,	// (0x0004d3a9) grid_vitu2_function_pane_ParamLimits

0xad0a,	// (0x0004d3a9) grid_vitu2_function_pane

0xad3c,	// (0x0004d3db) grid_vitu2_itu_pane_ParamLimits

0xad3c,	// (0x0004d3db) grid_vitu2_itu_pane

0xad92,	// (0x0004d431) cell_vitu2_itu_pane_ParamLimits

0xad92,	// (0x0004d431) cell_vitu2_itu_pane

0xada7,	// (0x0004d446) cell_vitu2_function_pane_ParamLimits

0xada7,	// (0x0004d446) cell_vitu2_function_pane

0x3960,	// (0x00045fff) bg_popup_call_pane_cp08_ParamLimits

0x3960,	// (0x00045fff) bg_popup_call_pane_cp08

0x3979,	// (0x00046018) field_vitu2_entry_pane_g1

0x3985,	// (0x00046024) field_vitu2_entry_pane_g2

0x0002,

0xf95c,	// (0x00051ffb) field_vitu2_entry_pane_g

0x399f,	// (0x0004603e) field_vitu2_entry_pane_t1_ParamLimits

0x399f,	// (0x0004603e) field_vitu2_entry_pane_t1

0x39bb,	// (0x0004605a) field_vitu2_entry_pane_t2_ParamLimits

0x39bb,	// (0x0004605a) field_vitu2_entry_pane_t2

0x0001,

0xf963,	// (0x00052002) field_vitu2_entry_pane_t_ParamLimits

0xf963,	// (0x00052002) field_vitu2_entry_pane_t

0xade6,	// (0x0004d485) bg_button_pane_cp010_ParamLimits

0xade6,	// (0x0004d485) bg_button_pane_cp010

0xadf4,	// (0x0004d493) cell_vitu2_itu_pane_g1

0xae12,	// (0x0004d4b1) cell_vitu2_itu_pane_t1_ParamLimits

0xae12,	// (0x0004d4b1) cell_vitu2_itu_pane_t1

0x640d,	// (0x00048aac) cell_vitu2_itu_pane_t2_ParamLimits

0x640d,	// (0x00048aac) cell_vitu2_itu_pane_t2

0x0002,

0xf96d,	// (0x0005200c) cell_vitu2_itu_pane_t_ParamLimits

0xf96d,	// (0x0005200c) cell_vitu2_itu_pane_t

0xac01,	// (0x0004d2a0) bg_button_pane_cp011

0xae64,	// (0x0004d503) cell_vitu2_function_pane_g1

0xdb8e,	// (0x0005022d) main_myfav_hc_pane

0xa953,	// (0x0004cff2) popup_image3_note_pane_ParamLimits

0xa953,	// (0x0004cff2) popup_image3_note_pane

0xa95f,	// (0x0004cffe) popup_image3_tool_bar_pane_ParamLimits

0xa95f,	// (0x0004cffe) popup_image3_tool_bar_pane

0x647b,	// (0x00048b1a) cell_vitu2_itu_pane_t3_ParamLimits

0x647b,	// (0x00048b1a) cell_vitu2_itu_pane_t3

0xdb8e,	// (0x0005022d) bg_popup_trans_pane

0x39e0,	// (0x0004607f) grid_image3_tool_bar_pane

0x39ea,	// (0x00046089) bg_popup_trans_pane_g1

0xe738,	// (0x00050dd7) bg_popup_trans_pane_g2

0x39f2,	// (0x00046091) bg_popup_trans_pane_g3

0x39fa,	// (0x00046099) bg_popup_trans_pane_g4

0x3a02,	// (0x000460a1) bg_popup_trans_pane_g5

0x3a0a,	// (0x000460a9) bg_popup_trans_pane_g6

0x3a12,	// (0x000460b1) bg_popup_trans_pane_g7

0x3a1a,	// (0x000460b9) bg_popup_trans_pane_g8

0xe718,	// (0x00050db7) bg_popup_trans_pane_g9

0x0008,

0xf974,	// (0x00052013) bg_popup_trans_pane_g

0xed14,	// (0x000513b3) cell_image3_tool_bar_pane_ParamLimits

0xed14,	// (0x000513b3) cell_image3_tool_bar_pane

0x2fd7,	// (0x00045676) cell_image3_tool_bar_pane_g1

0xdb8e,	// (0x0005022d) bg_popup_trans_pane_cp1

0x3a22,	// (0x000460c1) popup_image3_note_pane_t1

0x3a30,	// (0x000460cf) popup_image3_note_pane_t2

0x3a3e,	// (0x000460dd) popup_image3_note_pane_t3

0x0002,

0xf987,	// (0x00052026) popup_image3_note_pane_t

0x3a4c,	// (0x000460eb) popup_image3_note_pane_t3_copy1

0xae78,	// (0x0004d517) bg_myfav_hc_instruction_pane_ParamLimits

0xae78,	// (0x0004d517) bg_myfav_hc_instruction_pane

0xae8a,	// (0x0004d529) cell_myfav_contact_pane_ParamLimits

0xae8a,	// (0x0004d529) cell_myfav_contact_pane

0xaea4,	// (0x0004d543) cell_myfav_contact_pane_cp1_ParamLimits

0xaea4,	// (0x0004d543) cell_myfav_contact_pane_cp1

0xaeba,	// (0x0004d559) cell_myfav_contact_pane_cp2_ParamLimits

0xaeba,	// (0x0004d559) cell_myfav_contact_pane_cp2

0xaed0,	// (0x0004d56f) cell_myfav_contact_pane_cp3_ParamLimits

0xaed0,	// (0x0004d56f) cell_myfav_contact_pane_cp3

0xaee5,	// (0x0004d584) cell_myfav_contact_pane_cp4_ParamLimits

0xaee5,	// (0x0004d584) cell_myfav_contact_pane_cp4

0xaef9,	// (0x0004d598) cell_myfav_contact_pane_cp5_ParamLimits

0xaef9,	// (0x0004d598) cell_myfav_contact_pane_cp5

0xaf0d,	// (0x0004d5ac) cell_myfav_contact_pane_cp6_ParamLimits

0xaf0d,	// (0x0004d5ac) cell_myfav_contact_pane_cp6

0xaf21,	// (0x0004d5c0) cell_myfav_contact_pane_cp7_ParamLimits

0xaf21,	// (0x0004d5c0) cell_myfav_contact_pane_cp7

0x3a5a,	// (0x000460f9) listscroll_gen_pane_cp05

0xaf39,	// (0x0004d5d8) main_myfav_hc_pane_g1_ParamLimits

0xaf39,	// (0x0004d5d8) main_myfav_hc_pane_g1

0xaf4f,	// (0x0004d5ee) main_myfav_hc_pane_g2_ParamLimits

0xaf4f,	// (0x0004d5ee) main_myfav_hc_pane_g2

0x0002,

0xf98e,	// (0x0005202d) main_myfav_hc_pane_g_ParamLimits

0xf98e,	// (0x0005202d) main_myfav_hc_pane_g

0xaf79,	// (0x0004d618) main_myfav_hc_pane_t1_ParamLimits

0xaf79,	// (0x0004d618) main_myfav_hc_pane_t1

0x3a63,	// (0x00046102) main_myfav_hc_pane_t2_ParamLimits

0x3a63,	// (0x00046102) main_myfav_hc_pane_t2

0x3a75,	// (0x00046114) main_myfav_hc_pane_t3_ParamLimits

0x3a75,	// (0x00046114) main_myfav_hc_pane_t3

0xaf8e,	// (0x0004d62d) main_myfav_hc_pane_t4_ParamLimits

0xaf8e,	// (0x0004d62d) main_myfav_hc_pane_t4

0x0004,

0xf995,	// (0x00052034) main_myfav_hc_pane_t_ParamLimits

0xf995,	// (0x00052034) main_myfav_hc_pane_t

0x2fd7,	// (0x00045676) bg_myfav_hc_instruction_pane_g1

0x3a87,	// (0x00046126) cell_myfav_contact_pane_g1_ParamLimits

0x3a87,	// (0x00046126) cell_myfav_contact_pane_g1

0x3a87,	// (0x00046126) cell_myfav_contact_pane_g2_ParamLimits

0x3a87,	// (0x00046126) cell_myfav_contact_pane_g2

0x3a93,	// (0x00046132) cell_myfav_contact_pane_g3_ParamLimits

0x3a93,	// (0x00046132) cell_myfav_contact_pane_g3

0x32df,	// (0x0004597e) cell_myfav_contact_pane_g4_ParamLimits

0x32df,	// (0x0004597e) cell_myfav_contact_pane_g4

0x3aa0,	// (0x0004613f) cell_myfav_contact_pane_g5_ParamLimits

0x3aa0,	// (0x0004613f) cell_myfav_contact_pane_g5

0x0004,

0xf9a0,	// (0x0005203f) cell_myfav_contact_pane_g_ParamLimits

0xf9a0,	// (0x0005203f) cell_myfav_contact_pane_g

0xaf65,	// (0x0004d604) main_myfav_hc_pane_g3_ParamLimits

0xaf65,	// (0x0004d604) main_myfav_hc_pane_g3

0x6633,	// (0x00048cd2) popup_adpt_find_window

0xafb2,	// (0x0004d651) afind_page_pane_ParamLimits

0xafb2,	// (0x0004d651) afind_page_pane

0xafbf,	// (0x0004d65e) aid_size_cell_afind_ParamLimits

0xafbf,	// (0x0004d65e) aid_size_cell_afind

0xafd9,	// (0x0004d678) bg_popup_sub_pane_cp09_ParamLimits

0xafd9,	// (0x0004d678) bg_popup_sub_pane_cp09

0xafe6,	// (0x0004d685) find_pane_cp01_ParamLimits

0xafe6,	// (0x0004d685) find_pane_cp01

0x3aac,	// (0x0004614b) grid_afind_control_pane_ParamLimits

0x3aac,	// (0x0004614b) grid_afind_control_pane

0xaff3,	// (0x0004d692) grid_afind_pane_ParamLimits

0xaff3,	// (0x0004d692) grid_afind_pane

0xb009,	// (0x0004d6a8) cell_afind_pane_ParamLimits

0xb009,	// (0x0004d6a8) cell_afind_pane

0x2fd7,	// (0x00045676) afind_page_pane_g1

0xb03f,	// (0x0004d6de) afind_page_pane_g2

0xb048,	// (0x0004d6e7) afind_page_pane_g3

0x0002,

0xf9ab,	// (0x0005204a) afind_page_pane_g

0xb051,	// (0x0004d6f0) afind_page_pane_t1

0x3ac0,	// (0x0004615f) cell_afind_grid_control_pane_ParamLimits

0x3ac0,	// (0x0004615f) cell_afind_grid_control_pane

0x3891,	// (0x00045f30) bg_button_pane_cp69_ParamLimits

0x3891,	// (0x00045f30) bg_button_pane_cp69

0xb071,	// (0x0004d710) cell_afind_pane_g1_ParamLimits

0xb071,	// (0x0004d710) cell_afind_pane_g1

0xb07e,	// (0x0004d71d) cell_afind_pane_t1_ParamLimits

0xb07e,	// (0x0004d71d) cell_afind_pane_t1

0xe51c,	// (0x00050bbb) bg_button_pane_cp72

0x3acf,	// (0x0004616e) cell_afind_grid_control_pane_g1

0x8a38,	// (0x0004b0d7) aid_image_placing_area_ParamLimits

0x8a38,	// (0x0004b0d7) aid_image_placing_area

0x356b,	// (0x00045c0a) field_vitu_entry_pane_g1_ParamLimits

0x356b,	// (0x00045c0a) field_vitu_entry_pane_g1

0x3577,	// (0x00045c16) field_vitu_entry_pane_g2_ParamLimits

0x3577,	// (0x00045c16) field_vitu_entry_pane_g2

0x0001,

0xf85c,	// (0x00051efb) field_vitu_entry_pane_g_ParamLimits

0xf85c,	// (0x00051efb) field_vitu_entry_pane_g

0xa30d,	// (0x0004c9ac) cell_vitu_itu_pane_g1_ParamLimits

0xa34f,	// (0x0004c9ee) cell_vitu_itu_pane_t3_ParamLimits

0xa34f,	// (0x0004c9ee) cell_vitu_itu_pane_t3

0x3845,	// (0x00045ee4) mp4_progress_pane_t1_ParamLimits

0x385c,	// (0x00045efb) mp4_progress_pane_t2_ParamLimits

0xf8f1,	// (0x00051f90) mp4_progress_pane_t_ParamLimits

0x3873,	// (0x00045f12) mup_progress_pane_cp04_ParamLimits

0xafa0,	// (0x0004d63f) main_myfav_hc_pane_t5_ParamLimits

0xafa0,	// (0x0004d63f) main_myfav_hc_pane_t5

0xdba8,	// (0x00050247) aid_zoom_text_primary

0x6633,	// (0x00048cd2) popup_adpt_find_window_ParamLimits

0xecfa,	// (0x00051399) main_cam_set_pane

0xaab5,	// (0x0004d154) cam4_zoom_pane_ParamLimits

0xaab5,	// (0x0004d154) cam4_zoom_pane

0xb090,	// (0x0004d72f) main_cam_set_pane_g1_ParamLimits

0xb090,	// (0x0004d72f) main_cam_set_pane_g1

0xb09e,	// (0x0004d73d) main_cam_set_pane_g2_ParamLimits

0xb09e,	// (0x0004d73d) main_cam_set_pane_g2

0x0001,

0xf9b2,	// (0x00052051) main_cam_set_pane_g_ParamLimits

0xf9b2,	// (0x00052051) main_cam_set_pane_g

0xb0aa,	// (0x0004d749) main_cam_set_pane_t1_ParamLimits

0xb0aa,	// (0x0004d749) main_cam_set_pane_t1

0xb0bc,	// (0x0004d75b) main_cset_listscroll_pane_ParamLimits

0xb0bc,	// (0x0004d75b) main_cset_listscroll_pane

0xb0e5,	// (0x0004d784) main_cset_slider_pane_ParamLimits

0xb0e5,	// (0x0004d784) main_cset_slider_pane

0x3ae0,	// (0x0004617f) main_cset_list_pane_ParamLimits

0x3ae0,	// (0x0004617f) main_cset_list_pane

0x3af0,	// (0x0004618f) scroll_pane_cp028

0xb104,	// (0x0004d7a3) aid_area_touch_slider

0xb120,	// (0x0004d7bf) cset_slider_pane

0xb14a,	// (0x0004d7e9) main_cset_slider_pane_g1

0xb15f,	// (0x0004d7fe) main_cset_slider_pane_g2

0x0011,

0xf9b7,	// (0x00052056) main_cset_slider_pane_g

0x3b29,	// (0x000461c8) main_cset_slider_pane_t1

0xb21b,	// (0x0004d8ba) main_cset_slider_pane_t2

0xb235,	// (0x0004d8d4) main_cset_slider_pane_t3

0xb24f,	// (0x0004d8ee) main_cset_slider_pane_t4

0xb269,	// (0x0004d908) main_cset_slider_pane_t5

0xb283,	// (0x0004d922) main_cset_slider_pane_t6

0xb298,	// (0x0004d937) main_cset_slider_pane_t7

0x000e,

0xf9dc,	// (0x0005207b) main_cset_slider_pane_t

0xb39c,	// (0x0004da3b) cset_list_set_pane_ParamLimits

0xb39c,	// (0x0004da3b) cset_list_set_pane

0xb3ac,	// (0x0004da4b) aid_position_infowindow_above

0xb3b4,	// (0x0004da53) aid_position_infowindow_below

0x3bc9,	// (0x00046268) cset_list_set_pane_g1_ParamLimits

0x3bc9,	// (0x00046268) cset_list_set_pane_g1

0xb3bc,	// (0x0004da5b) cset_list_set_pane_g3_ParamLimits

0xb3bc,	// (0x0004da5b) cset_list_set_pane_g3

0x0001,

0xf9fb,	// (0x0005209a) cset_list_set_pane_g_ParamLimits

0xf9fb,	// (0x0005209a) cset_list_set_pane_g

0x3bd5,	// (0x00046274) cset_list_set_pane_t1_ParamLimits

0x3bd5,	// (0x00046274) cset_list_set_pane_t1

0xecfa,	// (0x00051399) list_highlight_pane_cp021_ParamLimits

0xecfa,	// (0x00051399) list_highlight_pane_cp021

0x1871,	// (0x00043f10) cset_slider_pane_g1

0x1883,	// (0x00043f22) cset_slider_pane_g2

0x187a,	// (0x00043f19) cset_slider_pane_g3

0x0002,

0xfa00,	// (0x0005209f) cset_slider_pane_g

0xb3cb,	// (0x0004da6a) aid_area_touch_cam4_zoom

0xb3d3,	// (0x0004da72) cam4_zoom_cont_pane

0xb3db,	// (0x0004da7a) cam4_zoom_pane_g1

0xb3e3,	// (0x0004da82) cam4_zoom_pane_g2

0xb3eb,	// (0x0004da8a) cam4_zoom_pane_g3

0x0002,

0xfa07,	// (0x000520a6) cam4_zoom_pane_g

0xb3f3,	// (0x0004da92) cam4_zoom_cont_pane_g1

0xb3fc,	// (0x0004da9b) cam4_zoom_cont_pane_g2

0xb405,	// (0x0004daa4) cam4_zoom_cont_pane_g3

0x0002,

0xfa0e,	// (0x000520ad) cam4_zoom_cont_pane_g

0xa9a6,	// (0x0004d045) call4_image_pane_ParamLimits

0xa9a6,	// (0x0004d045) call4_image_pane

0x38b5,	// (0x00045f54) call4_windows_conf_pane_ParamLimits

0x38c8,	// (0x00045f67) popup_call4_audio_in_window_ParamLimits

0x38c8,	// (0x00045f67) popup_call4_audio_in_window

0xdb8e,	// (0x0005022d) bg_popup_call2_act_pane_cp02

0x3926,	// (0x00045fc5) call4_list_conf_pane

0x2fd7,	// (0x00045676) call4_image_pane_g1

0x2fd7,	// (0x00045676) call4_image_pane_g2

0x0001,

0xf722,	// (0x00051dc1) call4_image_pane_g

0x3c05,	// (0x000462a4) list_single_graphic_popup_conf4_pane_ParamLimits

0x3c05,	// (0x000462a4) list_single_graphic_popup_conf4_pane

0xdb8e,	// (0x0005022d) list_highlight_pane_cp022

0x3c18,	// (0x000462b7) list_single_graphic_popup_conf4_pane_g1

0xec13,	// (0x000512b2) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa15,	// (0x000520b4) list_single_graphic_popup_conf4_pane_g

0x3c20,	// (0x000462bf) list_single_graphic_popup_conf4_pane_t1

0x7451,	// (0x00049af0) popup_vtel_slider_window_ParamLimits

0x7451,	// (0x00049af0) popup_vtel_slider_window

0x387f,	// (0x00045f1e) dialer2_ne_pane_t2_ParamLimits

0x387f,	// (0x00045f1e) dialer2_ne_pane_t2

0x0001,

0xf8f6,	// (0x00051f95) dialer2_ne_pane_t_ParamLimits

0xf8f6,	// (0x00051f95) dialer2_ne_pane_t

0xecfa,	// (0x00051399) bg_popup_sub_pane_cp010_ParamLimits

0xecfa,	// (0x00051399) bg_popup_sub_pane_cp010

0xb40e,	// (0x0004daad) popup_vtel_slider_window_g1_ParamLimits

0xb40e,	// (0x0004daad) popup_vtel_slider_window_g1

0xb41a,	// (0x0004dab9) popup_vtel_slider_window_g2_ParamLimits

0xb41a,	// (0x0004dab9) popup_vtel_slider_window_g2

0x0003,

0xfa1a,	// (0x000520b9) popup_vtel_slider_window_g_ParamLimits

0xfa1a,	// (0x000520b9) popup_vtel_slider_window_g

0xb460,	// (0x0004daff) vtel_slider_pane_ParamLimits

0xb460,	// (0x0004daff) vtel_slider_pane

0xb46f,	// (0x0004db0e) vtel_slider_pane_g1_ParamLimits

0xb46f,	// (0x0004db0e) vtel_slider_pane_g1

0xb47c,	// (0x0004db1b) vtel_slider_pane_g2_ParamLimits

0xb47c,	// (0x0004db1b) vtel_slider_pane_g2

0xb489,	// (0x0004db28) vtel_slider_pane_g3_ParamLimits

0xb489,	// (0x0004db28) vtel_slider_pane_g3

0xb46f,	// (0x0004db0e) vtel_slider_pane_g4_ParamLimits

0xb46f,	// (0x0004db0e) vtel_slider_pane_g4

0xb496,	// (0x0004db35) vtel_slider_pane_g5_ParamLimits

0xb496,	// (0x0004db35) vtel_slider_pane_g5

0x0004,

0xfa23,	// (0x000520c2) vtel_slider_pane_g_ParamLimits

0xfa23,	// (0x000520c2) vtel_slider_pane_g

0xdb8e,	// (0x0005022d) main_gallery2_pane

0xacce,	// (0x0004d36d) aid_size_row_itut2_dropdow_list_ParamLimits

0xacce,	// (0x0004d36d) aid_size_row_itut2_dropdow_list

0xad22,	// (0x0004d3c1) grid_vitu2_function_top_pane_ParamLimits

0xad22,	// (0x0004d3c1) grid_vitu2_function_top_pane

0xad5c,	// (0x0004d3fb) popup_vitu2_dropdown_list_window_ParamLimits

0xad5c,	// (0x0004d3fb) popup_vitu2_dropdown_list_window

0xad76,	// (0x0004d415) popup_vitu2_match_list_window

0xb4a3,	// (0x0004db42) cell_vitu2_function_top_pane_ParamLimits

0xb4a3,	// (0x0004db42) cell_vitu2_function_top_pane

0xb4c3,	// (0x0004db62) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb4c3,	// (0x0004db62) cell_vitu2_function_top_pane_cp01

0xb4e3,	// (0x0004db82) cell_vitu2_function_top_wide_pane_ParamLimits

0xb4e3,	// (0x0004db82) cell_vitu2_function_top_wide_pane

0xac01,	// (0x0004d2a0) bg_button_pane_cp012

0xb501,	// (0x0004dba0) cell_vitu2_function_top_pane_g1

0xb510,	// (0x0004dbaf) bg_button_pane_cp013_ParamLimits

0xb510,	// (0x0004dbaf) bg_button_pane_cp013

0xb52c,	// (0x0004dbcb) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb52c,	// (0x0004dbcb) cell_vitu2_function_top_wide_pane_g1

0xb544,	// (0x0004dbe3) bg_popup_sub_pane_cp20

0xb552,	// (0x0004dbf1) list_vitu2_match_list_pane

0x39ea,	// (0x00046089) bg_popup_sub_pane_cp20_g1

0x39f2,	// (0x00046091) bg_popup_sub_pane_cp20_g2

0xe738,	// (0x00050dd7) bg_popup_sub_pane_cp20_g3

0x39fa,	// (0x00046099) bg_popup_sub_pane_cp20_g4

0xe718,	// (0x00050db7) bg_popup_sub_pane_cp20_g5

0x3c3c,	// (0x000462db) bg_popup_sub_pane_cp20_g6

0x3a0a,	// (0x000460a9) bg_popup_sub_pane_cp20_g7

0x3a12,	// (0x000460b1) bg_popup_sub_pane_cp20_g8

0x3a1a,	// (0x000460b9) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa2e,	// (0x000520cd) bg_popup_sub_pane_cp20_g

0xb56a,	// (0x0004dc09) list_vitu2_match_list_item_pane_ParamLimits

0xb56a,	// (0x0004dc09) list_vitu2_match_list_item_pane

0xb57c,	// (0x0004dc1b) list_vitu2_match_list_item_pane_t1

0x69e3,	// (0x00049082) bg_popup_sub_pane_cp21

0xb5b6,	// (0x0004dc55) grid_vitu2_dropdown_list_pane

0xb5be,	// (0x0004dc5d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb5be,	// (0x0004dc5d) cell_vitu2_dropdown_list_char_pane

0xb5df,	// (0x0004dc7e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb5df,	// (0x0004dc7e) cell_vitu2_dropdown_list_ctrl_pane

0x3c56,	// (0x000462f5) cell_vitu2_dropdown_list_char_pane_g1

0x3c4d,	// (0x000462ec) cell_vitu2_dropdown_list_char_pane_g2

0x3c44,	// (0x000462e3) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa4b,	// (0x000520ea) cell_vitu2_dropdown_list_char_pane_g

0xb60b,	// (0x0004dcaa) cell_vitu2_dropdown_list_char_pane_t1

0xb619,	// (0x0004dcb8) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb619,	// (0x0004dcb8) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb629,	// (0x0004dcc8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb629,	// (0x0004dcc8) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb63a,	// (0x0004dcd9) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb63a,	// (0x0004dcd9) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb64a,	// (0x0004dce9) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb64a,	// (0x0004dce9) cell_vitu2_dropdown_list_ctrl_pane_g4

0xab47,	// (0x0004d1e6) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xab47,	// (0x0004d1e6) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa52,	// (0x000520f1) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa52,	// (0x000520f1) cell_vitu2_dropdown_list_ctrl_pane_g

0xb663,	// (0x0004dd02) aid_size_cell_gallery2_ParamLimits

0xb663,	// (0x0004dd02) aid_size_cell_gallery2

0xb671,	// (0x0004dd10) grid_gallery2_pane_ParamLimits

0xb671,	// (0x0004dd10) grid_gallery2_pane

0xb67e,	// (0x0004dd1d) scroll_pane_cp029_ParamLimits

0xb67e,	// (0x0004dd1d) scroll_pane_cp029

0xb68a,	// (0x0004dd29) cell_gallery2_pane_ParamLimits

0xb68a,	// (0x0004dd29) cell_gallery2_pane

0x3c5f,	// (0x000462fe) cell_gallery2_pane_g2

0xb6b6,	// (0x0004dd55) cell_gallery2_pane_g3

0x3c69,	// (0x00046308) cell_gallery2_pane_g4

0x3c71,	// (0x00046310) cell_gallery2_pane_g5

0x172d,	// (0x00043dcc) grid_highlight_pane_cp10

0xad76,	// (0x0004d415) popup_vitu2_match_list_window_ParamLimits

0xad86,	// (0x0004d425) popup_vitu2_query_window_ParamLimits

0xad86,	// (0x0004d425) popup_vitu2_query_window

0x69e3,	// (0x00049082) bg_vitu2_candi_button_pane

0x3c56,	// (0x000462f5) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x3c4d,	// (0x000462ec) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x3c44,	// (0x000462e3) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb6be,	// (0x0004dd5d) bg_button_pane_cp015

0xb6c6,	// (0x0004dd65) bg_button_pane_cp016

0xb6d0,	// (0x0004dd6f) bg_button_pane_cp017

0xecfa,	// (0x00051399) bg_popup_sub_pane_cp22

0x3c79,	// (0x00046318) popup_vitu2_query_window_g1

0xb6f8,	// (0x0004dd97) popup_vitu2_query_window_g2

0x0001,

0xfa5d,	// (0x000520fc) popup_vitu2_query_window_g

0xb704,	// (0x0004dda3) popup_vitu2_query_window_t1_ParamLimits

0xb704,	// (0x0004dda3) popup_vitu2_query_window_t1

0xb72c,	// (0x0004ddcb) popup_vitu2_query_window_t2_ParamLimits

0xb72c,	// (0x0004ddcb) popup_vitu2_query_window_t2

0xb73e,	// (0x0004dddd) popup_vitu2_query_window_t3_ParamLimits

0xb73e,	// (0x0004dddd) popup_vitu2_query_window_t3

0xb766,	// (0x0004de05) popup_vitu2_query_window_t4_ParamLimits

0xb766,	// (0x0004de05) popup_vitu2_query_window_t4

0xb778,	// (0x0004de17) popup_vitu2_query_window_t5_ParamLimits

0xb778,	// (0x0004de17) popup_vitu2_query_window_t5

0x0004,

0xfa62,	// (0x00052101) popup_vitu2_query_window_t_ParamLimits

0xfa62,	// (0x00052101) popup_vitu2_query_window_t

0x3ad8,	// (0x00046177) main_cset_text_pane

0xb104,	// (0x0004d7a3) aid_area_touch_slider_ParamLimits

0xb120,	// (0x0004d7bf) cset_slider_pane_ParamLimits

0xb14a,	// (0x0004d7e9) main_cset_slider_pane_g1_ParamLimits

0xb15f,	// (0x0004d7fe) main_cset_slider_pane_g2_ParamLimits

0x3af9,	// (0x00046198) main_cset_slider_pane_g3_ParamLimits

0x3af9,	// (0x00046198) main_cset_slider_pane_g3

0xb174,	// (0x0004d813) main_cset_slider_pane_g4_ParamLimits

0xb174,	// (0x0004d813) main_cset_slider_pane_g4

0xb183,	// (0x0004d822) main_cset_slider_pane_g5_ParamLimits

0xb183,	// (0x0004d822) main_cset_slider_pane_g5

0xb18f,	// (0x0004d82e) main_cset_slider_pane_g6_ParamLimits

0xb18f,	// (0x0004d82e) main_cset_slider_pane_g6

0xf9b7,	// (0x00052056) main_cset_slider_pane_g_ParamLimits

0x3b29,	// (0x000461c8) main_cset_slider_pane_t1_ParamLimits

0xb21b,	// (0x0004d8ba) main_cset_slider_pane_t2_ParamLimits

0xb235,	// (0x0004d8d4) main_cset_slider_pane_t3_ParamLimits

0xb24f,	// (0x0004d8ee) main_cset_slider_pane_t4_ParamLimits

0xb269,	// (0x0004d908) main_cset_slider_pane_t5_ParamLimits

0xb283,	// (0x0004d922) main_cset_slider_pane_t6_ParamLimits

0xb298,	// (0x0004d937) main_cset_slider_pane_t7_ParamLimits

0xb2c2,	// (0x0004d961) main_cset_slider_pane_t8_ParamLimits

0xb2c2,	// (0x0004d961) main_cset_slider_pane_t8

0xb2ea,	// (0x0004d989) main_cset_slider_pane_t9_ParamLimits

0xb2ea,	// (0x0004d989) main_cset_slider_pane_t9

0xb312,	// (0x0004d9b1) main_cset_slider_pane_t10_ParamLimits

0xb312,	// (0x0004d9b1) main_cset_slider_pane_t10

0xb33a,	// (0x0004d9d9) main_cset_slider_pane_t11_ParamLimits

0xb33a,	// (0x0004d9d9) main_cset_slider_pane_t11

0xb362,	// (0x0004da01) main_cset_slider_pane_t12_ParamLimits

0xb362,	// (0x0004da01) main_cset_slider_pane_t12

0xb37f,	// (0x0004da1e) main_cset_slider_pane_t13_ParamLimits

0xb37f,	// (0x0004da1e) main_cset_slider_pane_t13

0xf9dc,	// (0x0005207b) main_cset_slider_pane_t_ParamLimits

0xdb8e,	// (0x0005022d) bg_popup_sub_pane_cp011

0x3c85,	// (0x00046324) main_cset_text_pane_g1

0x3c8d,	// (0x0004632c) main_cset_text_pane_t1

0x3c9b,	// (0x0004633a) main_cset_text_pane_t2

0x3ca9,	// (0x00046348) main_cset_text_pane_t3

0x3cb7,	// (0x00046356) main_cset_text_pane_t4

0x3cc5,	// (0x00046364) main_cset_text_pane_t5

0x3cd3,	// (0x00046372) main_cset_text_pane_t6

0x3ce1,	// (0x00046380) main_cset_text_pane_t7

0x0006,

0xfa6d,	// (0x0005210c) main_cset_text_pane_t

0xdb8e,	// (0x0005022d) main_cam4_burst_pane

0xdb8e,	// (0x0005022d) main_cam5_pane

0xb05f,	// (0x0004d6fe) bg_button_pane_cp019

0xb068,	// (0x0004d707) bg_button_pane_cp020

0x3b05,	// (0x000461a4) main_cset_slider_pane_g7_ParamLimits

0x3b05,	// (0x000461a4) main_cset_slider_pane_g7

0x3b11,	// (0x000461b0) main_cset_slider_pane_g8_ParamLimits

0x3b11,	// (0x000461b0) main_cset_slider_pane_g8

0xb1a3,	// (0x0004d842) main_cset_slider_pane_g9_ParamLimits

0xb1a3,	// (0x0004d842) main_cset_slider_pane_g9

0xb1af,	// (0x0004d84e) main_cset_slider_pane_g10_ParamLimits

0xb1af,	// (0x0004d84e) main_cset_slider_pane_g10

0xb1bb,	// (0x0004d85a) main_cset_slider_pane_g11_ParamLimits

0xb1bb,	// (0x0004d85a) main_cset_slider_pane_g11

0xb1c7,	// (0x0004d866) main_cset_slider_pane_g12_ParamLimits

0xb1c7,	// (0x0004d866) main_cset_slider_pane_g12

0xb1d3,	// (0x0004d872) main_cset_slider_pane_g13_ParamLimits

0xb1d3,	// (0x0004d872) main_cset_slider_pane_g13

0xb1df,	// (0x0004d87e) main_cset_slider_pane_g14_ParamLimits

0xb1df,	// (0x0004d87e) main_cset_slider_pane_g14

0xb1eb,	// (0x0004d88a) main_cset_slider_pane_g15_ParamLimits

0xb1eb,	// (0x0004d88a) main_cset_slider_pane_g15

0x3b57,	// (0x000461f6) main_cset_slider_pane_t14_ParamLimits

0x3b57,	// (0x000461f6) main_cset_slider_pane_t14

0x3b90,	// (0x0004622f) main_cset_slider_pane_t15_ParamLimits

0x3b90,	// (0x0004622f) main_cset_slider_pane_t15

0xb78a,	// (0x0004de29) aid_cam4_burst_size_cell_ParamLimits

0xb78a,	// (0x0004de29) aid_cam4_burst_size_cell

0xb7a6,	// (0x0004de45) grid_cam4_burst_pane_ParamLimits

0xb7a6,	// (0x0004de45) grid_cam4_burst_pane

0xb7c8,	// (0x0004de67) linegrid_cam4_burst_pane_ParamLimits

0xb7c8,	// (0x0004de67) linegrid_cam4_burst_pane

0xb7e6,	// (0x0004de85) scroll_pane_cp30_ParamLimits

0xb7e6,	// (0x0004de85) scroll_pane_cp30

0xb7f2,	// (0x0004de91) cell_cam4_burst_pane_ParamLimits

0xb7f2,	// (0x0004de91) cell_cam4_burst_pane

0x3cef,	// (0x0004638e) linegrid_cam4_burst_pane_g1_ParamLimits

0x3cef,	// (0x0004638e) linegrid_cam4_burst_pane_g1

0xb82a,	// (0x0004dec9) linegrid_cam4_burst_pane_g2_ParamLimits

0xb82a,	// (0x0004dec9) linegrid_cam4_burst_pane_g2

0x3cfc,	// (0x0004639b) linegrid_cam4_burst_pane_g3_ParamLimits

0x3cfc,	// (0x0004639b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa7c,	// (0x0005211b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa7c,	// (0x0005211b) linegrid_cam4_burst_pane_g

0xb83b,	// (0x0004deda) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb83b,	// (0x0004deda) linegrid_cam4_burst_pane_g3_copy1

0x3d09,	// (0x000463a8) linegrid_cam4_burst_pane_g4_ParamLimits

0x3d09,	// (0x000463a8) linegrid_cam4_burst_pane_g4

0xb855,	// (0x0004def4) linegrid_cam4_burst_pane_g5_ParamLimits

0xb855,	// (0x0004def4) linegrid_cam4_burst_pane_g5

0xb866,	// (0x0004df05) linegrid_cam4_burst_pane_g6_ParamLimits

0xb866,	// (0x0004df05) linegrid_cam4_burst_pane_g6

0x3d16,	// (0x000463b5) linegrid_cam4_burst_pane_g7_ParamLimits

0x3d16,	// (0x000463b5) linegrid_cam4_burst_pane_g7

0xb877,	// (0x0004df16) cell_cam4_burst_pane_g1

0x3d2f,	// (0x000463ce) main_cam5_pane_t1_ParamLimits

0x3d2f,	// (0x000463ce) main_cam5_pane_t1

0x3d41,	// (0x000463e0) main_cam5_pane_t2_ParamLimits

0x3d41,	// (0x000463e0) main_cam5_pane_t2

0x3d53,	// (0x000463f2) main_cam5_pane_t3_ParamLimits

0x3d53,	// (0x000463f2) main_cam5_pane_t3

0x3d65,	// (0x00046404) main_cam5_pane_t4_ParamLimits

0x3d65,	// (0x00046404) main_cam5_pane_t4

0x3d7b,	// (0x0004641a) main_cam5_pane_t5_ParamLimits

0x3d7b,	// (0x0004641a) main_cam5_pane_t5

0x3d8d,	// (0x0004642c) main_cam5_pane_t6_ParamLimits

0x3d8d,	// (0x0004642c) main_cam5_pane_t6

0x3d9f,	// (0x0004643e) main_cam5_pane_t7_ParamLimits

0x3d9f,	// (0x0004643e) main_cam5_pane_t7

0x3db1,	// (0x00046450) main_cam5_pane_t8_ParamLimits

0x3db1,	// (0x00046450) main_cam5_pane_t8

0x3dcd,	// (0x0004646c) main_cam5_pane_t9_ParamLimits

0x3dcd,	// (0x0004646c) main_cam5_pane_t9

0x3ddf,	// (0x0004647e) main_cam5_pane_t10_ParamLimits

0x3ddf,	// (0x0004647e) main_cam5_pane_t10

0x3df1,	// (0x00046490) main_cam5_pane_t11_ParamLimits

0x3df1,	// (0x00046490) main_cam5_pane_t11

0x3e03,	// (0x000464a2) main_cam5_pane_t12_ParamLimits

0x3e03,	// (0x000464a2) main_cam5_pane_t12

0x3e18,	// (0x000464b7) main_cam5_pane_t13_ParamLimits

0x3e18,	// (0x000464b7) main_cam5_pane_t13

0x000c,

0xfa88,	// (0x00052127) main_cam5_pane_t_ParamLimits

0xfa88,	// (0x00052127) main_cam5_pane_t

0x66a6,	// (0x00048d45) popup_scut_keymap_window_ParamLimits

0x66a6,	// (0x00048d45) popup_scut_keymap_window

0xb88a,	// (0x0004df29) aid_size_cell_brow_shortcut

0x172d,	// (0x00043dcc) bg_popup_window_pane_cp010

0xb896,	// (0x0004df35) grid_scut_pane

0xb8a0,	// (0x0004df3f) cell_scut_pane_ParamLimits

0xb8a0,	// (0x0004df3f) cell_scut_pane

0xb8b5,	// (0x0004df54) cell_scut_pane_g1

0x3e35,	// (0x000464d4) cell_scut_pane_t1

0x3e44,	// (0x000464e3) cell_scut_pane_t2

0xb8be,	// (0x0004df5d) cell_scut_pane_t3

0x0002,

0xfaa3,	// (0x00052142) cell_scut_pane_t

0x99f7,	// (0x0004c096) main_mup3_pane_g8_ParamLimits

0x99f7,	// (0x0004c096) main_mup3_pane_g8

0xacda,	// (0x0004d379) area_vitu2_query_pane_ParamLimits

0xacda,	// (0x0004d379) area_vitu2_query_pane

0xb6da,	// (0x0004dd79) input_focus_pane_cp08

0x3e53,	// (0x000464f2) area_vitu2_query_pane_g1

0xb8cc,	// (0x0004df6b) area_vitu2_query_pane_g2

0x0001,

0xfaaa,	// (0x00052149) area_vitu2_query_pane_g

0xb8db,	// (0x0004df7a) area_vitu2_query_pane_t1_ParamLimits

0xb8db,	// (0x0004df7a) area_vitu2_query_pane_t1

0xb8ed,	// (0x0004df8c) area_vitu2_query_pane_t2_ParamLimits

0xb8ed,	// (0x0004df8c) area_vitu2_query_pane_t2

0xb8ff,	// (0x0004df9e) area_vitu2_query_pane_t3_ParamLimits

0xb8ff,	// (0x0004df9e) area_vitu2_query_pane_t3

0x3e5f,	// (0x000464fe) area_vitu2_query_pane_t4_ParamLimits

0x3e5f,	// (0x000464fe) area_vitu2_query_pane_t4

0x3e87,	// (0x00046526) area_vitu2_query_pane_t5_ParamLimits

0x3e87,	// (0x00046526) area_vitu2_query_pane_t5

0x3eaf,	// (0x0004654e) area_vitu2_query_pane_t6_ParamLimits

0x3eaf,	// (0x0004654e) area_vitu2_query_pane_t6

0x0006,

0xfaaf,	// (0x0005214e) area_vitu2_query_pane_t_ParamLimits

0xfaaf,	// (0x0005214e) area_vitu2_query_pane_t

0xb927,	// (0x0004dfc6) bg_button_pane_cp018

0xb934,	// (0x0004dfd3) bg_button_pane_cp021

0xb940,	// (0x0004dfdf) bg_button_pane_cp022

0xb94f,	// (0x0004dfee) input_focus_pane_cp09

0x823c,	// (0x0004a8db) aid_size_touch_mv_arrow_left

0x1606,	// (0x00043ca5) aid_size_touch_mv_arrow_right

0xb203,	// (0x0004d8a2) main_cset_slider_pane_g16_ParamLimits

0xb203,	// (0x0004d8a2) main_cset_slider_pane_g16

0xb20f,	// (0x0004d8ae) main_cset_slider_pane_g17_ParamLimits

0xb20f,	// (0x0004d8ae) main_cset_slider_pane_g17

0xb877,	// (0x0004df16) cell_cam4_burst_pane_g1_ParamLimits

0xdb8e,	// (0x0005022d) compa_mode_pane

0xb426,	// (0x0004dac5) popup_vtel_slider_window_g3_ParamLimits

0xb426,	// (0x0004dac5) popup_vtel_slider_window_g3

0xb43a,	// (0x0004dad9) popup_vtel_slider_window_g4_ParamLimits

0xb43a,	// (0x0004dad9) popup_vtel_slider_window_g4

0xb44e,	// (0x0004daed) popup_vtel_slider_window_t1_ParamLimits

0xb44e,	// (0x0004daed) popup_vtel_slider_window_t1

0xdb8e,	// (0x0005022d) main_cl_pane

0x2bc2,	// (0x00045261) popup_imed_adjust2_window_ParamLimits

0x2b9c,	// (0x0004523b) bg_tb_trans_pane_cp05_ParamLimits

0x34a0,	// (0x00045b3f) popup_imed_adjust2_window_g1_ParamLimits

0x34af,	// (0x00045b4e) popup_imed_adjust2_window_g2_ParamLimits

0x34af,	// (0x00045b4e) popup_imed_adjust2_window_g2

0x34bb,	// (0x00045b5a) popup_imed_adjust2_window_g3_ParamLimits

0x34bb,	// (0x00045b5a) popup_imed_adjust2_window_g3

0x0002,

0xf820,	// (0x00051ebf) popup_imed_adjust2_window_g_ParamLimits

0xf820,	// (0x00051ebf) popup_imed_adjust2_window_g

0x34c7,	// (0x00045b66) popup_imed_adjust2_window_t1_ParamLimits

0x34df,	// (0x00045b7e) slider_imed_adjust_pane_ParamLimits

0x34f3,	// (0x00045b92) slider_imed_adjust_pane_g1_ParamLimits

0x3503,	// (0x00045ba2) slider_imed_adjust_pane_g2_ParamLimits

0x3513,	// (0x00045bb2) slider_imed_adjust_pane_g3_ParamLimits

0x3524,	// (0x00045bc3) slider_imed_adjust_pane_g4_ParamLimits

0xf827,	// (0x00051ec6) slider_imed_adjust_pane_g_ParamLimits

0xaa70,	// (0x0004d10f) aid_touch_area_cam4_ParamLimits

0xaa70,	// (0x0004d10f) aid_touch_area_cam4

0xaa7e,	// (0x0004d11d) battery_pane_cp01

0xaaf3,	// (0x0004d192) main_camera4_pane_g6_ParamLimits

0xaaf3,	// (0x0004d192) main_camera4_pane_g6

0xab11,	// (0x0004d1b0) main_camera4_pane_t2_ParamLimits

0xab11,	// (0x0004d1b0) main_camera4_pane_t2

0x0001,

0xf92a,	// (0x00051fc9) main_camera4_pane_t_ParamLimits

0xf92a,	// (0x00051fc9) main_camera4_pane_t

0xaba7,	// (0x0004d246) aid_touch_area_vid4_ParamLimits

0xaba7,	// (0x0004d246) aid_touch_area_vid4

0xaaf3,	// (0x0004d192) main_video4_pane_g5_ParamLimits

0xaaf3,	// (0x0004d192) main_video4_pane_g5

0xabd7,	// (0x0004d276) vid4_progress_pane_ParamLimits

0xabd7,	// (0x0004d276) vid4_progress_pane

0x3b1d,	// (0x000461bc) main_cset_slider_pane_g18_ParamLimits

0x3b1d,	// (0x000461bc) main_cset_slider_pane_g18

0x3d23,	// (0x000463c2) cell_cam4_burst_pane_g2_ParamLimits

0x3d23,	// (0x000463c2) cell_cam4_burst_pane_g2

0x0001,

0xfa83,	// (0x00052122) cell_cam4_burst_pane_g_ParamLimits

0xfa83,	// (0x00052122) cell_cam4_burst_pane_g

0xb95e,	// (0x0004dffd) bg_cl_pane_ParamLimits

0xb95e,	// (0x0004dffd) bg_cl_pane

0xb96a,	// (0x0004e009) cl_header_pane_ParamLimits

0xb96a,	// (0x0004e009) cl_header_pane

0xb976,	// (0x0004e015) cl_listscroll_pane_ParamLimits

0xb976,	// (0x0004e015) cl_listscroll_pane

0x3efb,	// (0x0004659a) bg_cl_pane_g1

0x3f03,	// (0x000465a2) bg_cl_pane_g2

0x3f0b,	// (0x000465aa) bg_cl_pane_g3

0x3f13,	// (0x000465b2) bg_cl_pane_g4

0x3f1b,	// (0x000465ba) bg_cl_pane_g5

0x3f23,	// (0x000465c2) bg_cl_pane_g6

0x3f2b,	// (0x000465ca) bg_cl_pane_g7

0x3f33,	// (0x000465d2) bg_cl_pane_g8

0x3f3b,	// (0x000465da) bg_cl_pane_g9

0x0008,

0xfabe,	// (0x0005215d) bg_cl_pane_g

0xb982,	// (0x0004e021) aid_height_cl_leading_ParamLimits

0xb982,	// (0x0004e021) aid_height_cl_leading

0xb98e,	// (0x0004e02d) aid_height_cl_text_ParamLimits

0xb98e,	// (0x0004e02d) aid_height_cl_text

0x3952,	// (0x00045ff1) bg_cl_header_pane_ParamLimits

0x3952,	// (0x00045ff1) bg_cl_header_pane

0xb9a6,	// (0x0004e045) cl_header_pane_g1_ParamLimits

0xb9a6,	// (0x0004e045) cl_header_pane_g1

0xb9b3,	// (0x0004e052) cl_header_pane_t1_ParamLimits

0xb9b3,	// (0x0004e052) cl_header_pane_t1

0x3f43,	// (0x000465e2) cl_list_pane

0x3f4c,	// (0x000465eb) hc_scroll_pane_cp01

0xe718,	// (0x00050db7) bg_cl_header_pane_g1

0x39ea,	// (0x00046089) bg_cl_header_pane_g2

0xe738,	// (0x00050dd7) bg_cl_header_pane_g3

0x39fa,	// (0x00046099) bg_cl_header_pane_g4

0x39f2,	// (0x00046091) bg_cl_header_pane_g5

0x3c3c,	// (0x000462db) bg_cl_header_pane_g6

0x3a12,	// (0x000460b1) bg_cl_header_pane_g7

0x3a1a,	// (0x000460b9) bg_cl_header_pane_g8

0x3a0a,	// (0x000460a9) bg_cl_header_pane_g9

0x0008,

0xfad1,	// (0x00052170) bg_cl_header_pane_g

0xb9c5,	// (0x0004e064) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb9c5,	// (0x0004e064) hc_cl_list_double_graphic_heading_pane

0xb9d5,	// (0x0004e074) hc_cl_list_single_graphic_pane_ParamLimits

0xb9d5,	// (0x0004e074) hc_cl_list_single_graphic_pane

0xb9e7,	// (0x0004e086) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb9e7,	// (0x0004e086) hc_cl_list_single_graphic_pane_g1

0xb9f3,	// (0x0004e092) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb9f3,	// (0x0004e092) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfae4,	// (0x00052183) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfae4,	// (0x00052183) hc_cl_list_single_graphic_pane_g

0xba07,	// (0x0004e0a6) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xba07,	// (0x0004e0a6) hc_cl_list_single_graphic_pane_t1

0xb9e7,	// (0x0004e086) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb9e7,	// (0x0004e086) hc_cl_list_double_graphic_heading_pane_g1

0xba1c,	// (0x0004e0bb) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xba1c,	// (0x0004e0bb) hc_cl_list_double_graphic_heading_pane_g2

0xba30,	// (0x0004e0cf) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xba30,	// (0x0004e0cf) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfae9,	// (0x00052188) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfae9,	// (0x00052188) hc_cl_list_double_graphic_heading_pane_g

0xba44,	// (0x0004e0e3) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xba44,	// (0x0004e0e3) hc_cl_list_double_graphic_heading_pane_t1

0xba59,	// (0x0004e0f8) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xba59,	// (0x0004e0f8) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaf0,	// (0x0005218f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaf0,	// (0x0005218f) hc_cl_list_double_graphic_heading_pane_t

0xba6e,	// (0x0004e10d) vid4_progress_pane_g1

0xba7d,	// (0x0004e11c) vid4_progress_pane_g2

0xba8c,	// (0x0004e12b) vid4_progress_pane_g3

0xba9b,	// (0x0004e13a) vid4_progress_pane_g4

0x0004,

0xfaf5,	// (0x00052194) vid4_progress_pane_g

0xbab3,	// (0x0004e152) vid4_progress_pane_t1

0xbac9,	// (0x0004e168) vid4_progress_pane_t2

0x0002,

0xfb00,	// (0x0005219f) vid4_progress_pane_t

0xbaf3,	// (0x0004e192) wait_bar_pane_cp07

0x2dd2,	// (0x00045471) blid_firmament_pane_ParamLimits

0x2e13,	// (0x000454b2) popup_blid_sat_info2_window_g1

0x2e37,	// (0x000454d6) popup_blid_sat_info2_window_t3

0x2e45,	// (0x000454e4) popup_blid_sat_info2_window_t4

0x2e53,	// (0x000454f2) popup_blid_sat_info2_window_t5

0x2e61,	// (0x00045500) popup_blid_sat_info2_window_t6

0x2e71,	// (0x00045510) popup_blid_sat_info2_window_t7

0x2e7f,	// (0x0004551e) popup_blid_sat_info2_window_t8

0x2e8d,	// (0x0004552c) popup_blid_sat_info2_window_t9

0x2e9b,	// (0x0004553a) popup_blid_sat_info2_window_t10

0x2f57,	// (0x000455f6) aid_firma_cardinal_ParamLimits

0x2f6b,	// (0x0004560a) blid_firmament_pane_t1_ParamLimits

0x2f82,	// (0x00045621) blid_firmament_pane_t2_ParamLimits

0x2f99,	// (0x00045638) blid_firmament_pane_t3_ParamLimits

0x2fb0,	// (0x0004564f) blid_firmament_pane_t4_ParamLimits

0xf719,	// (0x00051db8) blid_firmament_pane_t_ParamLimits

0x2fc7,	// (0x00045666) blid_sat_info_pane_ParamLimits

0xecfa,	// (0x00051399) main_cam_set_pane_ParamLimits

0xa15c,	// (0x0004c7fb) aid_size_cell_colour_35_ParamLimits

0xa173,	// (0x0004c812) aid_size_cell_colour_112_ParamLimits

0xa18a,	// (0x0004c829) aid_size_cell_effect_ParamLimits

0xecfa,	// (0x00051399) bg_tb_trans_pane_cp02_ParamLimits

0xed08,	// (0x000513a7) heading_imed_pane_ParamLimits

0xa1a4,	// (0x0004c843) listscroll_imed_pane_ParamLimits

0x218e,	// (0x0004482d) popup_call2_audio_first_window_g5_ParamLimits

0x218e,	// (0x0004482d) popup_call2_audio_first_window_g5

0xa827,	// (0x0004cec6) aid_size_touch_image3_arrow_left_ParamLimits

0xa827,	// (0x0004cec6) aid_size_touch_image3_arrow_left

0xa83b,	// (0x0004ceda) aid_size_touch_image3_arrow_right_ParamLimits

0xa83b,	// (0x0004ceda) aid_size_touch_image3_arrow_right

0xbade,	// (0x0004e17d) vid4_progress_pane_t3

0xa408,	// (0x0004caa7) main_hwr_training_symbol_option_pane_ParamLimits

0xa408,	// (0x0004caa7) main_hwr_training_symbol_option_pane

0x377f,	// (0x00045e1e) popup_hwr_training_preview_window_ParamLimits

0x377f,	// (0x00045e1e) popup_hwr_training_preview_window

0xa463,	// (0x0004cb02) hwr_training_navi_pane_g5_ParamLimits

0xa463,	// (0x0004cb02) hwr_training_navi_pane_g5

0x39d8,	// (0x00046077) popup_char_count_window

0xb544,	// (0x0004dbe3) bg_popup_sub_pane_cp20_ParamLimits

0xb552,	// (0x0004dbf1) list_vitu2_match_list_pane_ParamLimits

0xb55e,	// (0x0004dbfd) vitu2_page_scroll_pane_ParamLimits

0xb55e,	// (0x0004dbfd) vitu2_page_scroll_pane

0x3faf,	// (0x0004664e) list_single_hwr_training_symbol_option_pane_ParamLimits

0x3faf,	// (0x0004664e) list_single_hwr_training_symbol_option_pane

0x3fc2,	// (0x00046661) list_single_hwr_training_symbol_option_pane_g1

0x3fca,	// (0x00046669) list_single_hwr_training_symbol_option_pane_t1

0x3fd8,	// (0x00046677) bg_button_pane_cp023

0x3fe1,	// (0x00046680) bg_button_pane_cp024

0xbb03,	// (0x0004e1a2) vitu2_page_scroll_pane_g1

0xbb0b,	// (0x0004e1aa) vitu2_page_scroll_pane_g2

0x0001,

0xfb07,	// (0x000521a6) vitu2_page_scroll_pane_g

0xbb13,	// (0x0004e1b2) vitu2_page_scroll_pane_t1

0x2d32,	// (0x000453d1) popup_char_count_window_g1

0x4014,	// (0x000466b3) popup_char_count_window_g2

0x401d,	// (0x000466bc) popup_char_count_window_g3

0x0002,

0xfb0c,	// (0x000521ab) popup_char_count_window_g

0x4026,	// (0x000466c5) popup_char_count_window_t1

0xdb8e,	// (0x0005022d) main_vded2_pane

0x348e,	// (0x00045b2d) aid_size_cell_imed_line

0x3498,	// (0x00045b37) grid_imed_line_width_pane

0xac30,	// (0x0004d2cf) vid4_indicators_pane_g4

0x4034,	// (0x000466d3) cell_imed_line_width_pane_ParamLimits

0x4034,	// (0x000466d3) cell_imed_line_width_pane

0x4046,	// (0x000466e5) cell_imed_line_width_pane_g1

0x404f,	// (0x000466ee) cell_imed_line_width_pane_g2

0x0001,

0xfb13,	// (0x000521b2) cell_imed_line_width_pane_g

0xbb22,	// (0x0004e1c1) main_vded2_pane_g1_ParamLimits

0xbb22,	// (0x0004e1c1) main_vded2_pane_g1

0xbb2f,	// (0x0004e1ce) main_vded2_pane_g2_ParamLimits

0xbb2f,	// (0x0004e1ce) main_vded2_pane_g2

0x0001,

0xfb18,	// (0x000521b7) main_vded2_pane_g_ParamLimits

0xfb18,	// (0x000521b7) main_vded2_pane_g

0xbb3b,	// (0x0004e1da) vded2_slider_pane_ParamLimits

0xbb3b,	// (0x0004e1da) vded2_slider_pane

0xbb48,	// (0x0004e1e7) aid_size_touch_vded2_end

0xbb50,	// (0x0004e1ef) aid_size_touch_vded2_playhead

0xbb58,	// (0x0004e1f7) aid_size_touch_vded2_start

0xbb60,	// (0x0004e1ff) vded2_slider_bg_pane

0xbb69,	// (0x0004e208) vded2_slider_pane_g1

0xbb72,	// (0x0004e211) vded2_slider_pane_g2

0xbb7a,	// (0x0004e219) vded2_slider_pane_g3

0x0002,

0xfb1d,	// (0x000521bc) vded2_slider_pane_g

0xbb83,	// (0x0004e222) vded2_slider_bg_pane_g1

0xbb8c,	// (0x0004e22b) vded2_slider_bg_pane_g2

0xbb95,	// (0x0004e234) vded2_slider_bg_pane_g3

0x0002,

0xfb24,	// (0x000521c3) vded2_slider_bg_pane_g

0x87e8,	// (0x0004ae87) aid_postcard_touch_down_pane_ParamLimits

0x87e8,	// (0x0004ae87) aid_postcard_touch_down_pane

0x87f4,	// (0x0004ae93) aid_postcard_touch_up_pane_ParamLimits

0x87f4,	// (0x0004ae93) aid_postcard_touch_up_pane

0xdb8e,	// (0x0005022d) main_blid2_pane

0x2baa,	// (0x00045249) popup_blid2_search_window

0xdb8e,	// (0x0005022d) blid2_gps_pane

0xdb8e,	// (0x0005022d) blid2_navig_pane

0xdb8e,	// (0x0005022d) blid2_search_pane

0xdb8e,	// (0x0005022d) blid2_tripm_pane

0xbb9e,	// (0x0004e23d) blid2_search_pane_g1_ParamLimits

0xbb9e,	// (0x0004e23d) blid2_search_pane_g1

0xbbaa,	// (0x0004e249) blid2_search_pane_t1_ParamLimits

0xbbaa,	// (0x0004e249) blid2_search_pane_t1

0xbbbc,	// (0x0004e25b) aid_size_cell_blid2_gps_ParamLimits

0xbbbc,	// (0x0004e25b) aid_size_cell_blid2_gps

0xbbcc,	// (0x0004e26b) blid2_gps_pane_g1_ParamLimits

0xbbcc,	// (0x0004e26b) blid2_gps_pane_g1

0xbbd8,	// (0x0004e277) grid_blid2_satellite_pane_ParamLimits

0xbbd8,	// (0x0004e277) grid_blid2_satellite_pane

0xbbe4,	// (0x0004e283) blid2_navig_pane_g1_ParamLimits

0xbbe4,	// (0x0004e283) blid2_navig_pane_g1

0xbbf0,	// (0x0004e28f) blid2_navig_pane_t1_ParamLimits

0xbbf0,	// (0x0004e28f) blid2_navig_pane_t1

0xbc02,	// (0x0004e2a1) blid2_navig_pane_t2_ParamLimits

0xbc02,	// (0x0004e2a1) blid2_navig_pane_t2

0x0001,

0xfb2b,	// (0x000521ca) blid2_navig_pane_t_ParamLimits

0xfb2b,	// (0x000521ca) blid2_navig_pane_t

0xbc14,	// (0x0004e2b3) blid2_navig_ring_pane_ParamLimits

0xbc14,	// (0x0004e2b3) blid2_navig_ring_pane

0xbc20,	// (0x0004e2bf) blid2_speed_pane_ParamLimits

0xbc20,	// (0x0004e2bf) blid2_speed_pane

0xbc2c,	// (0x0004e2cb) blid2_tripm_pane_g1_ParamLimits

0xbc2c,	// (0x0004e2cb) blid2_tripm_pane_g1

0xbc38,	// (0x0004e2d7) blid2_tripm_pane_g2_ParamLimits

0xbc38,	// (0x0004e2d7) blid2_tripm_pane_g2

0xbc44,	// (0x0004e2e3) blid2_tripm_pane_g3_ParamLimits

0xbc44,	// (0x0004e2e3) blid2_tripm_pane_g3

0xbc50,	// (0x0004e2ef) blid2_tripm_pane_g4_ParamLimits

0xbc50,	// (0x0004e2ef) blid2_tripm_pane_g4

0xbc5c,	// (0x0004e2fb) blid2_tripm_pane_g5_ParamLimits

0xbc5c,	// (0x0004e2fb) blid2_tripm_pane_g5

0x0005,

0xfb30,	// (0x000521cf) blid2_tripm_pane_g_ParamLimits

0xfb30,	// (0x000521cf) blid2_tripm_pane_g

0xbc74,	// (0x0004e313) blid2_tripm_pane_t1_ParamLimits

0xbc74,	// (0x0004e313) blid2_tripm_pane_t1

0xbc86,	// (0x0004e325) blid2_tripm_pane_t2_ParamLimits

0xbc86,	// (0x0004e325) blid2_tripm_pane_t2

0xbc98,	// (0x0004e337) blid2_tripm_pane_t3_ParamLimits

0xbc98,	// (0x0004e337) blid2_tripm_pane_t3

0x0003,

0xfb3d,	// (0x000521dc) blid2_tripm_pane_t_ParamLimits

0xfb3d,	// (0x000521dc) blid2_tripm_pane_t

0xbcc8,	// (0x0004e367) cell_blid2_satellite_pane_ParamLimits

0xbcc8,	// (0x0004e367) cell_blid2_satellite_pane

0xbce0,	// (0x0004e37f) cell_blid2_satellite_pane_g1

0x4057,	// (0x000466f6) cell_blid2_satellite_pane_t1

0x2fd7,	// (0x00045676) blid2_speed_pane_g1

0x4065,	// (0x00046704) blid2_speed_pane_t1

0x4073,	// (0x00046712) blid2_speed_pane_t2

0x0001,

0xfb46,	// (0x000521e5) blid2_speed_pane_t

0x2fd7,	// (0x00045676) blid2_navig_ring_pane_g1

0xbce9,	// (0x0004e388) blid2_navig_ring_pane_g2

0xbcf1,	// (0x0004e390) blid2_navig_ring_pane_g3

0xbcf9,	// (0x0004e398) blid2_navig_ring_pane_g4

0xbd01,	// (0x0004e3a0) blid2_navig_ring_pane_g5

0x0004,

0xfb4b,	// (0x000521ea) blid2_navig_ring_pane_g

0xdb8e,	// (0x0005022d) bg_popup_window_pane_cp011

0x4081,	// (0x00046720) popup_blid2_search_window_g1

0x4089,	// (0x00046728) popup_blid2_search_window_t1

0x4097,	// (0x00046736) popup_blid2_search_window_t2

0x0001,

0xfb56,	// (0x000521f5) popup_blid2_search_window_t

0xe627,	// (0x00050cc6) main_browser_pane_g1

0xe314,	// (0x000509b3) main_browser_pane_ParamLimits

0xac01,	// (0x0004d2a0) bg_button_pane_cp011_ParamLimits

0xae64,	// (0x0004d503) cell_vitu2_function_pane_g1_ParamLimits

0xecfa,	// (0x00051399) bg_popup_sub_pane_cp22_ParamLimits

0xb6da,	// (0x0004dd79) input_focus_pane_cp08_ParamLimits

0xb6e7,	// (0x0004dd86) popup_vitu2_query_button_pane_ParamLimits

0xb6e7,	// (0x0004dd86) popup_vitu2_query_button_pane

0xb6be,	// (0x0004dd5d) popup_vitu2_query_input_button_pane

0x3c79,	// (0x00046318) popup_vitu2_query_window_g1_ParamLimits

0xb6f8,	// (0x0004dd97) popup_vitu2_query_window_g2_ParamLimits

0xfa5d,	// (0x000520fc) popup_vitu2_query_window_g_ParamLimits

0xdb8e,	// (0x0005022d) bg_button_pane_cp026

0xbd09,	// (0x0004e3a8) popup_vitu2_query_input_button_pane_g1

0xdb8e,	// (0x0005022d) bg_button_pane_cp025

0x40a5,	// (0x00046744) popup_vitu2_query_button_pane_t1

0x9799,	// (0x0004be38) main_mp3_pane_t6

0x97a7,	// (0x0004be46) popup_slider_window_cp01

0xab55,	// (0x0004d1f4) cam4_battery_pane

0xab55,	// (0x0004d1f4) cam4_battery_pane_cp02

0xab55,	// (0x0004d1f4) cam4_battery_pane_cp01

0xab55,	// (0x0004d1f4) cam4_battery_pane_cp03

0x40b3,	// (0x00046752) cam4_battery_pane_g1

0x2fd7,	// (0x00045676) cam4_battery_pane_g2

0x0001,

0xfb5b,	// (0x000521fa) cam4_battery_pane_g

0x2ea9,	// (0x00045548) popup_blid_sat_info2_window_t11

0x823c,	// (0x0004a8db) aid_size_touch_mv_arrow_left_ParamLimits

0x1606,	// (0x00043ca5) aid_size_touch_mv_arrow_right_ParamLimits

0x163e,	// (0x00043cdd) navi_pane_g1_ParamLimits

0x164a,	// (0x00043ce9) navi_pane_g2_ParamLimits

0x8255,	// (0x0004a8f4) navi_pane_g3_ParamLimits

0xf418,	// (0x00051ab7) navi_pane_g_ParamLimits

0x827a,	// (0x0004a919) navi_pane_mv_t1_ParamLimits

0xa1b0,	// (0x0004c84f) grid_imed_effect_pane_ParamLimits

0xe561,	// (0x00050c00) aid_placing_vt_slider_lsc

0xe569,	// (0x00050c08) aid_placing_vt_slider_prt

0xecfa,	// (0x00051399) bg_tb_trans_pane_cp01_ParamLimits

0x3126,	// (0x000457c5) popup_image_details_window_g1_ParamLimits

0x3139,	// (0x000457d8) popup_image_details_window_g2_ParamLimits

0x314e,	// (0x000457ed) popup_image_details_window_g3_ParamLimits

0x314e,	// (0x000457ed) popup_image_details_window_g3

0xf75e,	// (0x00051dfd) popup_image_details_window_g_ParamLimits

0x3162,	// (0x00045801) popup_image_details_window_t1_ParamLimits

0x3174,	// (0x00045813) popup_image_details_window_t2_ParamLimits

0x318d,	// (0x0004582c) popup_image_details_window_t3_ParamLimits

0x31a1,	// (0x00045840) popup_image_details_window_t4_ParamLimits

0x31bc,	// (0x0004585b) popup_image_details_window_t5_ParamLimits

0xf765,	// (0x00051e04) popup_image_details_window_t_ParamLimits

0xb99a,	// (0x0004e039) cl_header_name_pane_ParamLimits

0xb99a,	// (0x0004e039) cl_header_name_pane

0xbd11,	// (0x0004e3b0) cl_header_name_pane_t1_ParamLimits

0xbd11,	// (0x0004e3b0) cl_header_name_pane_t1

0xbd28,	// (0x0004e3c7) cl_header_name_pane_t2_ParamLimits

0xbd28,	// (0x0004e3c7) cl_header_name_pane_t2

0xbd52,	// (0x0004e3f1) cl_header_name_pane_t3_ParamLimits

0xbd52,	// (0x0004e3f1) cl_header_name_pane_t3

0x0002,

0xfb60,	// (0x000521ff) cl_header_name_pane_t_ParamLimits

0xfb60,	// (0x000521ff) cl_header_name_pane_t

0x16cc,	// (0x00043d6b) navi_pane_mv_g2_ParamLimits

0x3979,	// (0x00046018) field_vitu2_entry_pane_g1_ParamLimits

0x3985,	// (0x00046024) field_vitu2_entry_pane_g2_ParamLimits

0x3991,	// (0x00046030) field_vitu2_entry_pane_g3_ParamLimits

0x3991,	// (0x00046030) field_vitu2_entry_pane_g3

0xf95c,	// (0x00051ffb) field_vitu2_entry_pane_g_ParamLimits

0xadf4,	// (0x0004d493) cell_vitu2_itu_pane_g1_ParamLimits

0xae04,	// (0x0004d4a3) cell_vitu2_itu_pane_g2_ParamLimits

0xae04,	// (0x0004d4a3) cell_vitu2_itu_pane_g2

0x0001,

0xf968,	// (0x00052007) cell_vitu2_itu_pane_g_ParamLimits

0xf968,	// (0x00052007) cell_vitu2_itu_pane_g

0xac01,	// (0x0004d2a0) bg_vkb2_func_pane_cp05_ParamLimits

0xac01,	// (0x0004d2a0) bg_vkb2_func_pane_cp05

0xac01,	// (0x0004d2a0) bg_vkb2_func_pane_cp03

0xac01,	// (0x0004d2a0) bg_vkb2_func_pane_cp04

0xac01,	// (0x0004d2a0) bg_vkb2_func_pane_cp10_ParamLimits

0xac01,	// (0x0004d2a0) bg_vkb2_func_pane_cp10

0xb940,	// (0x0004dfdf) bg_vkb2_func_pane_cp08

0xb927,	// (0x0004dfc6) bg_vkb2_func_pane_cp06

0xb934,	// (0x0004dfd3) bg_vkb2_func_pane_cp07

0x3fea,	// (0x00046689) bg_vkb2_func_pane_cp11_ParamLimits

0x3fea,	// (0x00046689) bg_vkb2_func_pane_cp11

0x3fff,	// (0x0004669e) bg_vkb2_func_pane_cp12_ParamLimits

0x3fff,	// (0x0004669e) bg_vkb2_func_pane_cp12

0xdb8e,	// (0x0005022d) bg_vkb2_func_pane_cp09

0x39ea,	// (0x00046089) bg_vkb2_func_pane_g1

0xe738,	// (0x00050dd7) bg_vkb2_func_pane_g2

0x39f2,	// (0x00046091) bg_vkb2_func_pane_g3

0x39fa,	// (0x00046099) bg_vkb2_func_pane_g4

0x3c3c,	// (0x000462db) bg_vkb2_func_pane_g5

0x3a12,	// (0x000460b1) bg_vkb2_func_pane_g6

0x3a1a,	// (0x000460b9) bg_vkb2_func_pane_g7

0x3a0a,	// (0x000460a9) bg_vkb2_func_pane_g8

0xe718,	// (0x00050db7) bg_vkb2_func_pane_g9

0x0008,

0xfb67,	// (0x00052206) bg_vkb2_func_pane_g

0xbc68,	// (0x0004e307) blid2_tripm_pane_g6_ParamLimits

0xbc68,	// (0x0004e307) blid2_tripm_pane_g6

0x383d,	// (0x00045edc) mp4_progress_pane_g1

0xbcbc,	// (0x0004e35b) blid2_tripm_values_pane_ParamLimits

0xbcbc,	// (0x0004e35b) blid2_tripm_values_pane

0xbd77,	// (0x0004e416) blid2_tripm_values_pane_t1

0xbd85,	// (0x0004e424) blid2_tripm_values_pane_t2

0xbd93,	// (0x0004e432) blid2_tripm_values_pane_t3

0xbda1,	// (0x0004e440) blid2_tripm_values_pane_t4

0xbdaf,	// (0x0004e44e) blid2_tripm_values_pane_t5

0xbdbd,	// (0x0004e45c) blid2_tripm_values_pane_t6

0xbdcb,	// (0x0004e46a) blid2_tripm_values_pane_t7

0xbdd9,	// (0x0004e478) blid2_tripm_values_pane_t8

0xbde7,	// (0x0004e486) blid2_tripm_values_pane_t9

0x0008,

0xfb7a,	// (0x00052219) blid2_tripm_values_pane_t

0x73a2,	// (0x00049a41) call_video_pane_t1_ParamLimits

0x73b8,	// (0x00049a57) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x00051940) call_video_pane_t_ParamLimits

0x86f1,	// (0x0004ad90) msg_header_pane_g1_ParamLimits

0x18b6,	// (0x00043f55) msg_header_pane_g2_ParamLimits

0x18b6,	// (0x00043f55) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x00051b5a) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x00051b5a) msg_header_pane_g

0xe314,	// (0x000509b3) main_clock2_pane_ParamLimits

0x9f70,	// (0x0004c60f) grid_clock2_toolbar_pane_ParamLimits

0x9f70,	// (0x0004c60f) grid_clock2_toolbar_pane

0x9f70,	// (0x0004c60f) listscroll_clock2_pane_ParamLimits

0x9f70,	// (0x0004c60f) listscroll_clock2_pane

0xa013,	// (0x0004c6b2) main_clock2_pane_t3_ParamLimits

0xa013,	// (0x0004c6b2) main_clock2_pane_t3

0xa025,	// (0x0004c6c4) main_clock2_pane_t4_ParamLimits

0xa025,	// (0x0004c6c4) main_clock2_pane_t4

0x40bd,	// (0x0004675c) cell_clock2_toolbar_pane

0x40c5,	// (0x00046764) cell_clock2_toolbar_pane_cp01

0x40c5,	// (0x00046764) cell_clock2_toolbar_pane_cp02

0x40cd,	// (0x0004676c) cell_clock2_toolbar_pane_cp03

0x40d5,	// (0x00046774) list_clock2_pane

0xecb9,	// (0x00051358) scroll_pane_cp10

0x40dd,	// (0x0004677c) list_single_clock2_pane_ParamLimits

0x40dd,	// (0x0004677c) list_single_clock2_pane

0x172d,	// (0x00043dcc) list_highlight_pane_cp08

0x40ea,	// (0x00046789) list_single_clock2_pane_t1

0x40f8,	// (0x00046797) list_single_clock2_pane_t2

0x0001,

0xfb8d,	// (0x0005222c) list_single_clock2_pane_t

0xdb8e,	// (0x0005022d) bg_button_pane_cp10

0x4106,	// (0x000467a5) cell_clock2_toolbar_pane_g1

0x8752,	// (0x0004adf1) aid_main_viewer_pane_g1_ParamLimits

0x8752,	// (0x0004adf1) aid_main_viewer_pane_g1

0x875e,	// (0x0004adfd) aid_main_viewer_pane_g2_ParamLimits

0x875e,	// (0x0004adfd) aid_main_viewer_pane_g2

0x876a,	// (0x0004ae09) aid_main_viewer_pane_g3_ParamLimits

0x876a,	// (0x0004ae09) aid_main_viewer_pane_g3

0x8779,	// (0x0004ae18) aid_main_viewer_pane_g4_ParamLimits

0x8779,	// (0x0004ae18) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x00051b6b) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x00051b6b) aid_main_viewer_pane_g

0x3952,	// (0x00045ff1) main_calc_pane_ParamLimits

0x8e00,	// (0x0004b49f) main_dialer2_pane_ParamLimits

0xdb8e,	// (0x0005022d) main_cam6_pane

0xdb8e,	// (0x0005022d) main_vid6_pane

0x9f7c,	// (0x0004c61b) listscroll_gen_pane_cp06_ParamLimits

0x9f7c,	// (0x0004c61b) listscroll_gen_pane_cp06

0xa037,	// (0x0004c6d6) main_clock2_pane_t5_ParamLimits

0xa037,	// (0x0004c6d6) main_clock2_pane_t5

0xa07e,	// (0x0004c71d) aid_call2_pane_cp10_ParamLimits

0xa08a,	// (0x0004c729) aid_call_pane_cp10_ParamLimits

0x15fa,	// (0x00043c99) popup_clock_analogue_window_cp10_g1_ParamLimits

0x15fa,	// (0x00043c99) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa096,	// (0x0004c735) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa096,	// (0x0004c735) popup_clock_analogue_window_cp10_g4_ParamLimits

0x15fa,	// (0x00043c99) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf815,	// (0x00051eb4) popup_clock_analogue_window_cp10_g_ParamLimits

0xa0a2,	// (0x0004c741) popup_clock_analogue_window_cp10_t1_ParamLimits

0x389d,	// (0x00045f3c) cell_dialer2_keypad_pane_g2_ParamLimits

0x389d,	// (0x00045f3c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8fb,	// (0x00051f9a) cell_dialer2_keypad_pane_g_ParamLimits

0xf8fb,	// (0x00051f9a) cell_dialer2_keypad_pane_g

0xa7f0,	// (0x0004ce8f) cell_dialer2_keypad_pane_t1

0xb0f1,	// (0x0004d790) main_cset_text2_pane_ParamLimits

0xb0f1,	// (0x0004d790) main_cset_text2_pane

0x3e53,	// (0x000464f2) area_vitu2_query_pane_g1_ParamLimits

0xb8cc,	// (0x0004df6b) area_vitu2_query_pane_g2_ParamLimits

0xfaaa,	// (0x00052149) area_vitu2_query_pane_g_ParamLimits

0x3ed7,	// (0x00046576) area_vitu2_query_pane_t7_ParamLimits

0x3ed7,	// (0x00046576) area_vitu2_query_pane_t7

0xb927,	// (0x0004dfc6) bg_button_pane_cp018_ParamLimits

0xb934,	// (0x0004dfd3) bg_button_pane_cp021_ParamLimits

0xb940,	// (0x0004dfdf) bg_button_pane_cp022_ParamLimits

0xb940,	// (0x0004dfdf) bg_vkb2_func_pane_cp08_ParamLimits

0xb927,	// (0x0004dfc6) bg_vkb2_func_pane_cp06_ParamLimits

0xb934,	// (0x0004dfd3) bg_vkb2_func_pane_cp07_ParamLimits

0xb94f,	// (0x0004dfee) input_focus_pane_cp09_ParamLimits

0xbdf5,	// (0x0004e494) cam6_autofocus_pane_ParamLimits

0xbdf5,	// (0x0004e494) cam6_autofocus_pane

0xbe11,	// (0x0004e4b0) cam6_image_uncrop_pane_ParamLimits

0xbe11,	// (0x0004e4b0) cam6_image_uncrop_pane

0xbe34,	// (0x0004e4d3) cam6_indi_pane_ParamLimits

0xbe34,	// (0x0004e4d3) cam6_indi_pane

0xbe4e,	// (0x0004e4ed) cam6_mode_pane_ParamLimits

0xbe4e,	// (0x0004e4ed) cam6_mode_pane

0xbe62,	// (0x0004e501) cam6_timer_pane_ParamLimits

0xbe62,	// (0x0004e501) cam6_timer_pane

0xbe6e,	// (0x0004e50d) cam6_zoom_pane_ParamLimits

0xbe6e,	// (0x0004e50d) cam6_zoom_pane

0xbe84,	// (0x0004e523) cam6_mode_pane_g1_ParamLimits

0xbe84,	// (0x0004e523) cam6_mode_pane_g1

0xbe90,	// (0x0004e52f) cam6_mode_pane_g2_ParamLimits

0xbe90,	// (0x0004e52f) cam6_mode_pane_g2

0xbe9c,	// (0x0004e53b) cam6_mode_pane_g3_ParamLimits

0xbe9c,	// (0x0004e53b) cam6_mode_pane_g3

0xbea8,	// (0x0004e547) cam6_mode_pane_g4_ParamLimits

0xbea8,	// (0x0004e547) cam6_mode_pane_g4

0x0003,

0xfb92,	// (0x00052231) cam6_mode_pane_g_ParamLimits

0xfb92,	// (0x00052231) cam6_mode_pane_g

0x410e,	// (0x000467ad) bg_tb_trans_pane_cp08_ParamLimits

0x410e,	// (0x000467ad) bg_tb_trans_pane_cp08

0x411c,	// (0x000467bb) cam6_battery_pane_ParamLimits

0x411c,	// (0x000467bb) cam6_battery_pane

0x4132,	// (0x000467d1) cam6_indi_pane_g1_ParamLimits

0x4132,	// (0x000467d1) cam6_indi_pane_g1

0x4144,	// (0x000467e3) cam6_indi_pane_g2_ParamLimits

0x4144,	// (0x000467e3) cam6_indi_pane_g2

0x4156,	// (0x000467f5) cam6_indi_pane_g3_ParamLimits

0x4156,	// (0x000467f5) cam6_indi_pane_g3

0x0002,

0xfb9b,	// (0x0005223a) cam6_indi_pane_g_ParamLimits

0xfb9b,	// (0x0005223a) cam6_indi_pane_g

0x4168,	// (0x00046807) cam6_indi_pane_t1_ParamLimits

0x4168,	// (0x00046807) cam6_indi_pane_t1

0xac6e,	// (0x0004d30d) cam6_autofocus_pane_g1

0xac66,	// (0x0004d305) cam6_autofocus_pane_g2

0xac7e,	// (0x0004d31d) cam6_autofocus_pane_g3

0xac76,	// (0x0004d315) cam6_autofocus_pane_g4

0x0003,

0xfba2,	// (0x00052241) cam6_autofocus_pane_g

0x418e,	// (0x0004682d) cam6_timer_pane_g1

0x4196,	// (0x00046835) cam6_timer_pane_t1

0x41a4,	// (0x00046843) cam6_zoom_cont_pane

0x41ac,	// (0x0004684b) cam6_zoom_pane_g1

0x41b4,	// (0x00046853) cam6_zoom_pane_g2

0xbeb4,	// (0x0004e553) cam6_zoom_pane_g3

0x0002,

0xfbab,	// (0x0005224a) cam6_zoom_pane_g

0x2fd7,	// (0x00045676) cam6_battery_pane_g1

0x2fd7,	// (0x00045676) cam6_battery_pane_g2

0x0001,

0xf722,	// (0x00051dc1) cam6_battery_pane_g

0x41bc,	// (0x0004685b) cam6_zoom_cont_pane_g1

0x41c5,	// (0x00046864) cam6_zoom_cont_pane_g2

0x41ce,	// (0x0004686d) cam6_zoom_cont_pane_g3

0x0002,

0xfbb2,	// (0x00052251) cam6_zoom_cont_pane_g

0xbed1,	// (0x0004e570) cam6_mode_pane_cp_ParamLimits

0xbed1,	// (0x0004e570) cam6_mode_pane_cp

0xbee5,	// (0x0004e584) cam6_zoom_pane_cp_ParamLimits

0xbee5,	// (0x0004e584) cam6_zoom_pane_cp

0xbefb,	// (0x0004e59a) vid6_image_uncrop_cif_pane_ParamLimits

0xbefb,	// (0x0004e59a) vid6_image_uncrop_cif_pane

0xbf1d,	// (0x0004e5bc) vid6_image_uncrop_nhd_pane_ParamLimits

0xbf1d,	// (0x0004e5bc) vid6_image_uncrop_nhd_pane

0xbf34,	// (0x0004e5d3) vid6_image_uncrop_vga_pane_ParamLimits

0xbf34,	// (0x0004e5d3) vid6_image_uncrop_vga_pane

0xbf4b,	// (0x0004e5ea) vid6_image_uncrop_wvga_pane_ParamLimits

0xbf4b,	// (0x0004e5ea) vid6_image_uncrop_wvga_pane

0xbf62,	// (0x0004e601) vid6_indi_pane_ParamLimits

0xbf62,	// (0x0004e601) vid6_indi_pane

0x410e,	// (0x000467ad) bg_tb_trans_pane_cp09_ParamLimits

0x410e,	// (0x000467ad) bg_tb_trans_pane_cp09

0x41e2,	// (0x00046881) cam6_battery_pane_cp_ParamLimits

0x41e2,	// (0x00046881) cam6_battery_pane_cp

0x41ee,	// (0x0004688d) vid6_indi_pane_g1_ParamLimits

0x41ee,	// (0x0004688d) vid6_indi_pane_g1

0x4200,	// (0x0004689f) vid6_indi_pane_g2_ParamLimits

0x4200,	// (0x0004689f) vid6_indi_pane_g2

0x4212,	// (0x000468b1) vid6_indi_pane_g3_ParamLimits

0x4212,	// (0x000468b1) vid6_indi_pane_g3

0x4227,	// (0x000468c6) vid6_indi_pane_g4_ParamLimits

0x4227,	// (0x000468c6) vid6_indi_pane_g4

0x423c,	// (0x000468db) vid6_indi_pane_g5_ParamLimits

0x423c,	// (0x000468db) vid6_indi_pane_g5

0x0004,

0xfbb9,	// (0x00052258) vid6_indi_pane_g_ParamLimits

0xfbb9,	// (0x00052258) vid6_indi_pane_g

0x4256,	// (0x000468f5) vid6_indi_pane_t1_ParamLimits

0x4256,	// (0x000468f5) vid6_indi_pane_t1

0x426c,	// (0x0004690b) vid6_indi_pane_t2_ParamLimits

0x426c,	// (0x0004690b) vid6_indi_pane_t2

0x4294,	// (0x00046933) vid6_indi_pane_t3_ParamLimits

0x4294,	// (0x00046933) vid6_indi_pane_t3

0x42bc,	// (0x0004695b) vid6_indi_pane_t4_ParamLimits

0x42bc,	// (0x0004695b) vid6_indi_pane_t4

0x0003,

0xfbc4,	// (0x00052263) vid6_indi_pane_t_ParamLimits

0xfbc4,	// (0x00052263) vid6_indi_pane_t

0x42e0,	// (0x0004697f) wait_bar_pane_cp08

0xbf82,	// (0x0004e621) main_cset_text2_pane_t1_ParamLimits

0xbf82,	// (0x0004e621) main_cset_text2_pane_t1

0xbebc,	// (0x0004e55b) listscroll_gen_pane_cp06_t1_ParamLimits

0xbebc,	// (0x0004e55b) listscroll_gen_pane_cp06_t1

0xdb8e,	// (0x0005022d) main_cam6_set_pane

0xab47,	// (0x0004d1e6) bg_tb_trans_pane_cp06_ParamLimits

0xab5d,	// (0x0004d1fc) cam4_indicators_pane_g1_ParamLimits

0xab6d,	// (0x0004d20c) cam4_indicators_pane_g2_ParamLimits

0xf938,	// (0x00051fd7) cam4_indicators_pane_g_ParamLimits

0xab8d,	// (0x0004d22c) cam4_indicators_pane_t1_ParamLimits

0xac01,	// (0x0004d2a0) bg_tb_trans_pane_cp07_ParamLimits

0xab5d,	// (0x0004d1fc) vid4_indicators_pane_g1_ParamLimits

0xac0f,	// (0x0004d2ae) vid4_indicators_pane_g2_ParamLimits

0xac1f,	// (0x0004d2be) vid4_indicators_pane_g3_ParamLimits

0xac30,	// (0x0004d2cf) vid4_indicators_pane_g4_ParamLimits

0xf94a,	// (0x00051fe9) vid4_indicators_pane_g_ParamLimits

0xac4c,	// (0x0004d2eb) vid4_indicators_pane_t1_ParamLimits

0xba6e,	// (0x0004e10d) vid4_progress_pane_g1_ParamLimits

0xba7d,	// (0x0004e11c) vid4_progress_pane_g2_ParamLimits

0xba8c,	// (0x0004e12b) vid4_progress_pane_g3_ParamLimits

0xba9b,	// (0x0004e13a) vid4_progress_pane_g4_ParamLimits

0xfaf5,	// (0x00052194) vid4_progress_pane_g_ParamLimits

0xbab3,	// (0x0004e152) vid4_progress_pane_t1_ParamLimits

0xbac9,	// (0x0004e168) vid4_progress_pane_t2_ParamLimits

0xbade,	// (0x0004e17d) vid4_progress_pane_t3_ParamLimits

0xfb00,	// (0x0005219f) vid4_progress_pane_t_ParamLimits

0xbaf3,	// (0x0004e192) wait_bar_pane_cp07_ParamLimits

0xbf9e,	// (0x0004e63d) main_cam6_set_pane_g2_ParamLimits

0xbf9e,	// (0x0004e63d) main_cam6_set_pane_g2

0xbfaa,	// (0x0004e649) main_cset6_listscroll_pane_ParamLimits

0xbfaa,	// (0x0004e649) main_cset6_listscroll_pane

0xbfd3,	// (0x0004e672) main_cset6_slider_pane_ParamLimits

0xbfd3,	// (0x0004e672) main_cset6_slider_pane

0xbfdf,	// (0x0004e67e) main_cset6_text2_pane_ParamLimits

0xbfdf,	// (0x0004e67e) main_cset6_text2_pane

0x42f0,	// (0x0004698f) main_cset6_text_pane

0x3ae0,	// (0x0004617f) main_cset_list_pane_copy1_ParamLimits

0x3ae0,	// (0x0004617f) main_cset_list_pane_copy1

0x3af0,	// (0x0004618f) scroll_pane_cp028_copy1

0xbff2,	// (0x0004e691) cset_list_set_pane_copy1

0xb3ac,	// (0x0004da4b) aid_position_infowindow_above_copy1

0xb3b4,	// (0x0004da53) aid_position_infowindow_below_copy1

0xc001,	// (0x0004e6a0) cset_list_set_pane_g1_copy1

0xc009,	// (0x0004e6a8) cset_list_set_pane_g3_copy1_ParamLimits

0xc009,	// (0x0004e6a8) cset_list_set_pane_g3_copy1

0xc018,	// (0x0004e6b7) cset_list_set_pane_t1_copy1_ParamLimits

0xc018,	// (0x0004e6b7) cset_list_set_pane_t1_copy1

0xecfa,	// (0x00051399) list_highlight_pane_cp021_copy1_ParamLimits

0xecfa,	// (0x00051399) list_highlight_pane_cp021_copy1

0x42f8,	// (0x00046997) cset6_slider_pane_ParamLimits

0x42f8,	// (0x00046997) cset6_slider_pane

0x4324,	// (0x000469c3) main_cset6_slider_pane_g1_ParamLimits

0x4324,	// (0x000469c3) main_cset6_slider_pane_g1

0xc02d,	// (0x0004e6cc) main_cset6_slider_pane_g2_ParamLimits

0xc02d,	// (0x0004e6cc) main_cset6_slider_pane_g2

0x3b05,	// (0x000461a4) main_cset6_slider_pane_g3_ParamLimits

0x3b05,	// (0x000461a4) main_cset6_slider_pane_g3

0xc055,	// (0x0004e6f4) main_cset6_slider_pane_g4_ParamLimits

0xc055,	// (0x0004e6f4) main_cset6_slider_pane_g4

0xc061,	// (0x0004e700) main_cset6_slider_pane_g5_ParamLimits

0xc061,	// (0x0004e700) main_cset6_slider_pane_g5

0x3b05,	// (0x000461a4) main_cset6_slider_pane_g7_ParamLimits

0x3b05,	// (0x000461a4) main_cset6_slider_pane_g7

0x3b11,	// (0x000461b0) main_cset6_slider_pane_g8_ParamLimits

0x3b11,	// (0x000461b0) main_cset6_slider_pane_g8

0xc06d,	// (0x0004e70c) main_cset6_slider_pane_g9_ParamLimits

0xc06d,	// (0x0004e70c) main_cset6_slider_pane_g9

0xc079,	// (0x0004e718) main_cset6_slider_pane_g10_ParamLimits

0xc079,	// (0x0004e718) main_cset6_slider_pane_g10

0xc055,	// (0x0004e6f4) main_cset6_slider_pane_g11_ParamLimits

0xc055,	// (0x0004e6f4) main_cset6_slider_pane_g11

0xc085,	// (0x0004e724) main_cset6_slider_pane_g12_ParamLimits

0xc085,	// (0x0004e724) main_cset6_slider_pane_g12

0xc091,	// (0x0004e730) main_cset6_slider_pane_g13_ParamLimits

0xc091,	// (0x0004e730) main_cset6_slider_pane_g13

0xc09d,	// (0x0004e73c) main_cset6_slider_pane_g14_ParamLimits

0xc09d,	// (0x0004e73c) main_cset6_slider_pane_g14

0xc0a9,	// (0x0004e748) main_cset6_slider_pane_g15_ParamLimits

0xc0a9,	// (0x0004e748) main_cset6_slider_pane_g15

0xc061,	// (0x0004e700) main_cset6_slider_pane_g16_ParamLimits

0xc061,	// (0x0004e700) main_cset6_slider_pane_g16

0xc0c1,	// (0x0004e760) main_cset6_slider_pane_g17_ParamLimits

0xc0c1,	// (0x0004e760) main_cset6_slider_pane_g17

0x0011,

0xfbcd,	// (0x0005226c) main_cset6_slider_pane_g_ParamLimits

0xfbcd,	// (0x0005226c) main_cset6_slider_pane_g

0x434c,	// (0x000469eb) main_cset6_slider_pane_t1_ParamLimits

0x434c,	// (0x000469eb) main_cset6_slider_pane_t1

0xc0cd,	// (0x0004e76c) main_cset6_slider_pane_t2_ParamLimits

0xc0cd,	// (0x0004e76c) main_cset6_slider_pane_t2

0x438d,	// (0x00046a2c) main_cset6_slider_pane_t3_ParamLimits

0x438d,	// (0x00046a2c) main_cset6_slider_pane_t3

0xc0f8,	// (0x0004e797) main_cset6_slider_pane_t4_ParamLimits

0xc0f8,	// (0x0004e797) main_cset6_slider_pane_t4

0x43b8,	// (0x00046a57) main_cset6_slider_pane_t5_ParamLimits

0x43b8,	// (0x00046a57) main_cset6_slider_pane_t5

0x43e3,	// (0x00046a82) main_cset6_slider_pane_t7_ParamLimits

0x43e3,	// (0x00046a82) main_cset6_slider_pane_t7

0xc123,	// (0x0004e7c2) main_cset6_slider_pane_t8_ParamLimits

0xc123,	// (0x0004e7c2) main_cset6_slider_pane_t8

0xc147,	// (0x0004e7e6) main_cset6_slider_pane_t9_ParamLimits

0xc147,	// (0x0004e7e6) main_cset6_slider_pane_t9

0xc16b,	// (0x0004e80a) main_cset6_slider_pane_t10_ParamLimits

0xc16b,	// (0x0004e80a) main_cset6_slider_pane_t10

0xc18f,	// (0x0004e82e) main_cset6_slider_pane_t11_ParamLimits

0xc18f,	// (0x0004e82e) main_cset6_slider_pane_t11

0x4419,	// (0x00046ab8) main_cset6_slider_pane_t14_ParamLimits

0x4419,	// (0x00046ab8) main_cset6_slider_pane_t14

0x4452,	// (0x00046af1) main_cset6_slider_pane_t15_ParamLimits

0x4452,	// (0x00046af1) main_cset6_slider_pane_t15

0x000b,

0xfbf2,	// (0x00052291) main_cset6_slider_pane_t_ParamLimits

0xfbf2,	// (0x00052291) main_cset6_slider_pane_t

0x3bea,	// (0x00046289) cset_slider_pane_g1_copy1

0x3bf3,	// (0x00046292) cset_slider_pane_g2_copy1

0x3bfc,	// (0x0004629b) cset_slider_pane_g3_copy1

0xdb8e,	// (0x0005022d) bg_popup_sub_pane_cp011_copy1

0x3c85,	// (0x00046324) main_cset_text_pane_g1_copy1

0x3c8d,	// (0x0004632c) main_cset_text_pane_t1_copy1

0x3c9b,	// (0x0004633a) main_cset_text_pane_t2_copy1

0x3ca9,	// (0x00046348) main_cset_text_pane_t3_copy1

0x3cb7,	// (0x00046356) main_cset_text_pane_t4_copy1

0x3cc5,	// (0x00046364) main_cset_text_pane_t5_copy1

0x3cd3,	// (0x00046372) main_cset_text_pane_t6_copy1

0x3ce1,	// (0x00046380) main_cset_text_pane_t7_copy1

0xc1b3,	// (0x0004e852) main_cset_text2_pane_t1_copy1

0xdb8e,	// (0x0005022d) main_ncimui_pane

0x8e3b,	// (0x0004b4da) popup_query_ncimui_window_ParamLimits

0x8e3b,	// (0x0004b4da) popup_query_ncimui_window

0x32a7,	// (0x00045946) field_cale_ev2_pane_g4_ParamLimits

0x32a7,	// (0x00045946) field_cale_ev2_pane_g4

0xa524,	// (0x0004cbc3) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa524,	// (0x0004cbc3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8d6,	// (0x00051f75) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8d6,	// (0x00051f75) cell_video_dialer_keypad_pane_g

0xa53c,	// (0x0004cbdb) cell_video_dialer_keypad_pane_t1

0xdb8e,	// (0x0005022d) bg_popup_window_pane_cp012

0xeb92,	// (0x00051231) heading_pane_cp06

0x4574,	// (0x00046c13) ncim_query_content_pane

0xdb8e,	// (0x0005022d) bg_popup_heading_pane_cp01

0x457c,	// (0x00046c1b) ncim_heading_pane_t1

0x458a,	// (0x00046c29) ncim_indicator_popup_pane

0x459c,	// (0x00046c3b) ncim_query_button_pane

0x45b0,	// (0x00046c4f) ncim_query_content_pane_t1

0x45c2,	// (0x00046c61) ncim_query_content_pane_t2

0x0005,

0xfc31,	// (0x000522d0) ncim_query_content_pane_t

0x45fc,	// (0x00046c9b) ncim_query_list_pane

0x460e,	// (0x00046cad) ncim_query_popup_pane

0x458a,	// (0x00046c29) ncim_indicator_popup_pane_ParamLimits

0xc294,	// (0x0004e933) ncim_query_content_pane_g1_ParamLimits

0xc294,	// (0x0004e933) ncim_query_content_pane_g1

0x45b0,	// (0x00046c4f) ncim_query_content_pane_t1_ParamLimits

0x45c2,	// (0x00046c61) ncim_query_content_pane_t2_ParamLimits

0xc2a0,	// (0x0004e93f) ncim_query_content_pane_t3_ParamLimits

0xc2a0,	// (0x0004e93f) ncim_query_content_pane_t3

0xc2bd,	// (0x0004e95c) ncim_query_content_pane_t4_ParamLimits

0xc2bd,	// (0x0004e95c) ncim_query_content_pane_t4

0xc2da,	// (0x0004e979) ncim_query_content_pane_t5_ParamLimits

0xc2da,	// (0x0004e979) ncim_query_content_pane_t5

0x45d4,	// (0x00046c73) ncim_query_content_pane_t6_ParamLimits

0x45d4,	// (0x00046c73) ncim_query_content_pane_t6

0xfc31,	// (0x000522d0) ncim_query_content_pane_t_ParamLimits

0x45fc,	// (0x00046c9b) ncim_query_list_pane_ParamLimits

0x460e,	// (0x00046cad) ncim_query_popup_pane_ParamLimits

0x4622,	// (0x00046cc1) wait_bar_pane_cp04

0xdb8e,	// (0x0005022d) input_focus_pane_cp011

0x462a,	// (0x00046cc9) ncim_query_popup_pane_t1

0x4638,	// (0x00046cd7) ncim_list_query_list_pane_ParamLimits

0x4638,	// (0x00046cd7) ncim_list_query_list_pane

0xdb8e,	// (0x0005022d) bg_button_pane_cp027

0x464b,	// (0x00046cea) ncim_query_button_pane_g1

0xdb8e,	// (0x0005022d) list_highlight_pane_cp012

0x4655,	// (0x00046cf4) ncim_list_query_list_pane_g1

0x465d,	// (0x00046cfc) ncim_list_query_list_pane_t1

0xab7d,	// (0x0004d21c) cam4_indicators_pane_g3_ParamLimits

0xab7d,	// (0x0004d21c) cam4_indicators_pane_g3

0xac3c,	// (0x0004d2db) vid4_indicators_pane_g5_ParamLimits

0xac3c,	// (0x0004d2db) vid4_indicators_pane_g5

0xbaa7,	// (0x0004e146) vid4_progress_pane_g5_ParamLimits

0xbaa7,	// (0x0004e146) vid4_progress_pane_g5

0xc1de,	// (0x0004e87d) main_ncimui_pane_g1

0xc224,	// (0x0004e8c3) ncimui_group_query_pane_ParamLimits

0xc224,	// (0x0004e8c3) ncimui_group_query_pane

0xc258,	// (0x0004e8f7) ncimui_list_pane_ParamLimits

0xc258,	// (0x0004e8f7) ncimui_list_pane

0xc270,	// (0x0004e90f) ncimui_text_pane_ParamLimits

0xc270,	// (0x0004e90f) ncimui_text_pane

0xc2f7,	// (0x0004e996) ncimui_text_pane_t1_ParamLimits

0xc2f7,	// (0x0004e996) ncimui_text_pane_t1

0x4674,	// (0x00046d13) ncimui_list_single_graphic_pane_ParamLimits

0x4674,	// (0x00046d13) ncimui_list_single_graphic_pane

0xc315,	// (0x0004e9b4) ncimui_query_pane_ParamLimits

0xc315,	// (0x0004e9b4) ncimui_query_pane

0xdb8e,	// (0x0005022d) list_highlight_pane_cp013

0x4681,	// (0x00046d20) ncim_list_query_list_pane_t1_copy1

0x468f,	// (0x00046d2e) ncim_list_single_graphic_pane_g1

0x4697,	// (0x00046d36) ncim_query_button_pane_cp01

0x469f,	// (0x00046d3e) ncim_query_entry_pane_ParamLimits

0x469f,	// (0x00046d3e) ncim_query_entry_pane

0x46af,	// (0x00046d4e) ncimui_query_pane_g1

0x46b7,	// (0x00046d56) ncimui_query_pane_t1_ParamLimits

0x46b7,	// (0x00046d56) ncimui_query_pane_t1

0xdb8e,	// (0x0005022d) input_focus_pane_cp012

0x462a,	// (0x00046cc9) ncim_query_entry_pane_t1

0xe314,	// (0x000509b3) main_im_pane_ParamLimits

0xecfa,	// (0x00051399) main_mobtv_pane_ParamLimits

0xecfa,	// (0x00051399) main_mobtv_pane

0xc06d,	// (0x0004e70c) main_cset6_slider_pane_g18_ParamLimits

0xc06d,	// (0x0004e70c) main_cset6_slider_pane_g18

0xc091,	// (0x0004e730) main_cset6_slider_pane_g19_ParamLimits

0xc091,	// (0x0004e730) main_cset6_slider_pane_g19

0x3991,	// (0x00046030) bg_main_mobtv_pane_ParamLimits

0x3991,	// (0x00046030) bg_main_mobtv_pane

0xc325,	// (0x0004e9c4) main_mobtv_info_pane

0xc32e,	// (0x0004e9cd) main_mobtv_loading_pane_ParamLimits

0xc32e,	// (0x0004e9cd) main_mobtv_loading_pane

0x46db,	// (0x00046d7a) main_mobtv_pg_channel_list_pane

0x46e5,	// (0x00046d84) main_mobtv_pg_hdr_pane

0xc33b,	// (0x0004e9da) main_mobtv_programe_curr_pane_ParamLimits

0xc33b,	// (0x0004e9da) main_mobtv_programe_curr_pane

0xc348,	// (0x0004e9e7) main_mobtv_programe_next_pane_ParamLimits

0xc348,	// (0x0004e9e7) main_mobtv_programe_next_pane

0x46ee,	// (0x00046d8d) popup_mobtv_noti_window

0x2fd7,	// (0x00045676) main_tv_pg_hdr_pane_g1

0x46f6,	// (0x00046d95) main_tv_pg_hdr_pane_g2

0x46fe,	// (0x00046d9d) main_tv_pg_hdr_pane_g3

0x4706,	// (0x00046da5) main_tv_pg_hdr_pane_g4

0x470e,	// (0x00046dad) main_tv_pg_hdr_pane_g5

0x4716,	// (0x00046db5) main_tv_pg_hdr_pane_g6

0x471e,	// (0x00046dbd) main_tv_pg_hdr_pane_g7

0x4726,	// (0x00046dc5) main_tv_pg_hdr_pane_g8

0x472e,	// (0x00046dcd) main_tv_pg_hdr_pane_g9

0x4736,	// (0x00046dd5) main_tv_pg_hdr_pane_g10

0x4740,	// (0x00046ddf) main_tv_pg_hdr_pane_g11

0x000a,

0xfc3e,	// (0x000522dd) main_tv_pg_hdr_pane_g

0x474a,	// (0x00046de9) main_tv_pg_hdr_pane_t1

0x4758,	// (0x00046df7) main_tv_pg_hdr_pane_t2

0x4766,	// (0x00046e05) main_tv_pg_hdr_pane_t3

0x4774,	// (0x00046e13) main_tv_pg_hdr_pane_t4

0x4782,	// (0x00046e21) main_tv_pg_hdr_pane_t5

0x0004,

0xfc55,	// (0x000522f4) main_tv_pg_hdr_pane_t

0x4790,	// (0x00046e2f) single_mobtv_pg_channel_pane_ParamLimits

0x4790,	// (0x00046e2f) single_mobtv_pg_channel_pane

0x47a2,	// (0x00046e41) single_mobtv_pg_channel_table_pane

0x47ab,	// (0x00046e4a) single_mobtv_pg_channel_thumb_pane

0x47b4,	// (0x00046e53) single_tv_pg_channel_pane_g1

0x47bd,	// (0x00046e5c) single_tv_pg_channel_pane_g2

0x0001,

0xfc60,	// (0x000522ff) single_tv_pg_channel_pane_g

0x3206,	// (0x000458a5) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x3206,	// (0x000458a5) bg_single_mobtv_pg_channel_thumb_pane

0x47c6,	// (0x00046e65) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x47c6,	// (0x00046e65) single_mobtv_pg_channel_thumb_pane_g1

0x47d4,	// (0x00046e73) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x47d4,	// (0x00046e73) single_mobtv_pg_channel_thumb_pane_g2

0x47e0,	// (0x00046e7f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x47e0,	// (0x00046e7f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc65,	// (0x00052304) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc65,	// (0x00052304) single_mobtv_pg_channel_thumb_pane_g

0x47ec,	// (0x00046e8b) single_mobtv_pg_channel_thumb_pane_t1

0x47fa,	// (0x00046e99) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc6c,	// (0x0005230b) single_mobtv_pg_channel_thumb_pane_t

0x2fd7,	// (0x00045676) bg_single_mobtv_pg_channel_table_pane_g1

0x2fd7,	// (0x00045676) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf722,	// (0x00051dc1) bg_single_mobtv_pg_channel_table_pane_g

0x4808,	// (0x00046ea7) single_mobtv_pg_channel_table_pane_t1

0x4816,	// (0x00046eb5) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc71,	// (0x00052310) single_mobtv_pg_channel_table_pane_t

0xc35d,	// (0x0004e9fc) main_mobtv_info_pane_g1_ParamLimits

0xc35d,	// (0x0004e9fc) main_mobtv_info_pane_g1

0xc379,	// (0x0004ea18) main_mobtv_info_pane_t1_ParamLimits

0xc379,	// (0x0004ea18) main_mobtv_info_pane_t1

0xc3df,	// (0x0004ea7e) main_mobtv_info_pane_t2_ParamLimits

0xc3df,	// (0x0004ea7e) main_mobtv_info_pane_t2

0x0002,

0xfc7b,	// (0x0005231a) main_mobtv_info_pane_t_ParamLimits

0xfc7b,	// (0x0005231a) main_mobtv_info_pane_t

0xc462,	// (0x0004eb01) wait_bar_pane_cp05

0xc472,	// (0x0004eb11) main_mobtv_loading_pane_g1_ParamLimits

0xc472,	// (0x0004eb11) main_mobtv_loading_pane_g1

0xc47e,	// (0x0004eb1d) main_mobtv_loading_pane_g2_ParamLimits

0xc47e,	// (0x0004eb1d) main_mobtv_loading_pane_g2

0xc48a,	// (0x0004eb29) main_mobtv_loading_pane_g3_ParamLimits

0xc48a,	// (0x0004eb29) main_mobtv_loading_pane_g3

0x0002,

0xfc82,	// (0x00052321) main_mobtv_loading_pane_g_ParamLimits

0xfc82,	// (0x00052321) main_mobtv_loading_pane_g

0x4824,	// (0x00046ec3) main_mobtv_loading_pane_t1_ParamLimits

0x4824,	// (0x00046ec3) main_mobtv_loading_pane_t1

0x483c,	// (0x00046edb) main_mobtv_loading_pane_t2_ParamLimits

0x483c,	// (0x00046edb) main_mobtv_loading_pane_t2

0x0001,

0xfc89,	// (0x00052328) main_mobtv_loading_pane_t_ParamLimits

0xfc89,	// (0x00052328) main_mobtv_loading_pane_t

0xc496,	// (0x0004eb35) wait_bar_pane_cp06_ParamLimits

0xc496,	// (0x0004eb35) wait_bar_pane_cp06

0x4860,	// (0x00046eff) main_mobtv_programe_curr_pane_t1

0x486e,	// (0x00046f0d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc8e,	// (0x0005232d) main_mobtv_programe_curr_pane_t

0x487c,	// (0x00046f1b) main_mobtv_programe_next_pane_t1

0x488a,	// (0x00046f29) main_mobtv_programe_next_pane_t2

0x4898,	// (0x00046f37) main_mobtv_programe_next_pane_t3

0x0002,

0xfc93,	// (0x00052332) main_mobtv_programe_next_pane_t

0xdb8e,	// (0x0005022d) bg_popup_mobtv_noti_window_pane

0x48a6,	// (0x00046f45) popup_mobtv_noti_window_g1

0x48ae,	// (0x00046f4d) popup_mobtv_noti_window_t1

0x48bc,	// (0x00046f5b) popup_mobtv_noti_window_t2

0x0001,

0xfc9a,	// (0x00052339) popup_mobtv_noti_window_t

0x2fd7,	// (0x00045676) bg_popup_mobtv_noti_window_pane_g1

0xdb8e,	// (0x0005022d) sc_clock_pane

0xdb8e,	// (0x0005022d) main_fs_bigclock_pane

0xbcaa,	// (0x0004e349) blid2_tripm_pane_t4_ParamLimits

0xbcaa,	// (0x0004e349) blid2_tripm_pane_t4

0xc4a2,	// (0x0004eb41) sc_clock_pane_g1_ParamLimits

0xc4a2,	// (0x0004eb41) sc_clock_pane_g1

0xc4b0,	// (0x0004eb4f) sc_clock_pane_t1_ParamLimits

0xc4b0,	// (0x0004eb4f) sc_clock_pane_t1

0xc4c3,	// (0x0004eb62) sc_clock_pane_t2_ParamLimits

0xc4c3,	// (0x0004eb62) sc_clock_pane_t2

0xc4d5,	// (0x0004eb74) sc_clock_pane_t3_ParamLimits

0xc4d5,	// (0x0004eb74) sc_clock_pane_t3

0x0004,

0xfc9f,	// (0x0005233e) sc_clock_pane_t_ParamLimits

0xfc9f,	// (0x0005233e) sc_clock_pane_t

0xd44b,	// (0x0004faea) main_fs_bigclock_indicator_pane_ParamLimits

0xd44b,	// (0x0004faea) main_fs_bigclock_indicator_pane

0xc54d,	// (0x0004ebec) main_fs_bigclock_pane_g1_ParamLimits

0xc54d,	// (0x0004ebec) main_fs_bigclock_pane_g1

0xd457,	// (0x0004faf6) main_fs_bigclock_pane_t1_ParamLimits

0xd457,	// (0x0004faf6) main_fs_bigclock_pane_t1

0xd469,	// (0x0004fb08) main_fs_bigclock_pane_t2_ParamLimits

0xd469,	// (0x0004fb08) main_fs_bigclock_pane_t2

0xd47b,	// (0x0004fb1a) main_fs_bigclock_pane_t3_ParamLimits

0xd47b,	// (0x0004fb1a) main_fs_bigclock_pane_t3

0x0002,

0xfe99,	// (0x00052538) main_fs_bigclock_pane_t_ParamLimits

0xfe99,	// (0x00052538) main_fs_bigclock_pane_t

0xd48d,	// (0x0004fb2c) main_fs_bigclock_indicator_pane_g1

0x45a4,	// (0x00046c43) ncim_query_content_pane_g2_ParamLimits

0x45a4,	// (0x00046c43) ncim_query_content_pane_g2

0x0001,

0xfc2c,	// (0x000522cb) ncim_query_content_pane_g_ParamLimits

0xfc2c,	// (0x000522cb) ncim_query_content_pane_g

0xc4e7,	// (0x0004eb86) sc_clock_pane_t4_ParamLimits

0xc4e7,	// (0x0004eb86) sc_clock_pane_t4

0xecfa,	// (0x00051399) main_radioblah_pane

0x38f4,	// (0x00045f93) cell_call4_button_pane_t1_copy1_ParamLimits

0x38f4,	// (0x00045f93) cell_call4_button_pane_t1_copy1

0xc1e6,	// (0x0004e885) main_ncimui_pane_t1_ParamLimits

0xc1e6,	// (0x0004e885) main_ncimui_pane_t1

0xc1f8,	// (0x0004e897) main_ncimui_pane_t2_ParamLimits

0xc1f8,	// (0x0004e897) main_ncimui_pane_t2

0x0002,

0xfc25,	// (0x000522c4) main_ncimui_pane_t_ParamLimits

0xfc25,	// (0x000522c4) main_ncimui_pane_t

0x49e6,	// (0x00047085) main_radioblah_anim_pane_ParamLimits

0x49e6,	// (0x00047085) main_radioblah_anim_pane

0x49f7,	// (0x00047096) main_radioblah_info_pane_ParamLimits

0x49f7,	// (0x00047096) main_radioblah_info_pane

0x4a0b,	// (0x000470aa) main_radioblah_pane_t1_ParamLimits

0x4a0b,	// (0x000470aa) main_radioblah_pane_t1

0x4a27,	// (0x000470c6) main_radioblah_pane_t2_ParamLimits

0x4a27,	// (0x000470c6) main_radioblah_pane_t2

0x0003,

0xfcc0,	// (0x0005235f) main_radioblah_pane_t_ParamLimits

0xfcc0,	// (0x0005235f) main_radioblah_pane_t

0xc595,	// (0x0004ec34) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc595,	// (0x0004ec34) main_radioblah_rocker_ctrl_pane

0x4a6f,	// (0x0004710e) main_radioblah_info_pane_t1_ParamLimits

0x4a6f,	// (0x0004710e) main_radioblah_info_pane_t1

0xc5da,	// (0x0004ec79) main_radioblah_info_pane_t2_ParamLimits

0xc5da,	// (0x0004ec79) main_radioblah_info_pane_t2

0x0003,

0xfcc9,	// (0x00052368) main_radioblah_info_pane_t_ParamLimits

0xfcc9,	// (0x00052368) main_radioblah_info_pane_t

0x2fd7,	// (0x00045676) main_radioblah_rocker_ctrl_pane_g1

0xc682,	// (0x0004ed21) main_radioblah_rocker_ctrl_pane_g2

0xc68a,	// (0x0004ed29) main_radioblah_rocker_ctrl_pane_g3

0xc692,	// (0x0004ed31) main_radioblah_rocker_ctrl_pane_g4

0xc69a,	// (0x0004ed39) main_radioblah_rocker_ctrl_pane_g5

0xc6a2,	// (0x0004ed41) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcd2,	// (0x00052371) main_radioblah_rocker_ctrl_pane_g

0xc1b3,	// (0x0004e852) main_cset_text2_pane_t1_copy1_ParamLimits

0xaa9f,	// (0x0004d13e) cam4_image_uncrop_qvga_pane

0xabc1,	// (0x0004d260) vid4_image_uncrop_qcif_pane

0xbe28,	// (0x0004e4c7) cam6_image_uncrop_qvga_pane_ParamLimits

0xbe28,	// (0x0004e4c7) cam6_image_uncrop_qvga_pane

0x41d6,	// (0x00046875) vid6_image_uncrop_qcif_pane_ParamLimits

0x41d6,	// (0x00046875) vid6_image_uncrop_qcif_pane

0xdb8e,	// (0x0005022d) bg_popup_preview_window_pane_cp03

0x4556,	// (0x00046bf5) list_cset_text2_pane

0x455e,	// (0x00046bfd) main_cset6_text2_pane_g1

0x4566,	// (0x00046c05) main_cset6_text2_pane_t1

0xc6aa,	// (0x0004ed49) list_cset_text2_pane_t1_ParamLimits

0xc6aa,	// (0x0004ed49) list_cset_text2_pane_t1

0xecfa,	// (0x00051399) main_radioblah_pane_ParamLimits

0xc450,	// (0x0004eaef) main_mobtv_info_pane_t3_ParamLimits

0xc450,	// (0x0004eaef) main_mobtv_info_pane_t3

0xc583,	// (0x0004ec22) main_radioblah_pane_g1

0xc5ae,	// (0x0004ec4d) main_radioblah_info_pane_g1

0xc629,	// (0x0004ecc8) main_radioblah_info_pane_t3_ParamLimits

0xc629,	// (0x0004ecc8) main_radioblah_info_pane_t3

0x7daa,	// (0x0004a449) highlight_cell_cale_month_pane_ParamLimits

0x7daa,	// (0x0004a449) highlight_cell_cale_month_pane

0xdb8e,	// (0x0005022d) main_phob_fisheye_pane

0x3350,	// (0x000459ef) scroll_pane_cp0031_ParamLimits

0x3350,	// (0x000459ef) scroll_pane_cp0031

0x42e0,	// (0x0004697f) wait_bar_pane_cp08_ParamLimits

0xbff2,	// (0x0004e691) cset_list_set_pane_copy1_ParamLimits

0x4aa9,	// (0x00047148) highlight_cell_cale_month_pane_g1

0xc6c1,	// (0x0004ed60) highlight_cell_cale_month_pane_t1

0x4ab1,	// (0x00047150) list_gen_pane_cp01

0x3af0,	// (0x0004618f) scroll_pane_01

0xed28,	// (0x000513c7) list_single_double_fisheye_pane

0x4aba,	// (0x00047159) list_double_fisheye_pane_g1_ParamLimits

0x4aba,	// (0x00047159) list_double_fisheye_pane_g1

0x4ac6,	// (0x00047165) list_double_fisheye_pane_g2_ParamLimits

0x4ac6,	// (0x00047165) list_double_fisheye_pane_g2

0xed31,	// (0x000513d0) list_double_fisheye_pane_g3_ParamLimits

0xed31,	// (0x000513d0) list_double_fisheye_pane_g3

0x0004,

0xfcdf,	// (0x0005237e) list_double_fisheye_pane_g_ParamLimits

0xfcdf,	// (0x0005237e) list_double_fisheye_pane_g

0x4af7,	// (0x00047196) list_double_fisheye_pane_t1_ParamLimits

0x4af7,	// (0x00047196) list_double_fisheye_pane_t1

0x4b12,	// (0x000471b1) list_double_fisheye_pane_t2_ParamLimits

0x4b12,	// (0x000471b1) list_double_fisheye_pane_t2

0x0001,

0xfcea,	// (0x00052389) list_double_fisheye_pane_t_ParamLimits

0xfcea,	// (0x00052389) list_double_fisheye_pane_t

0xdb8e,	// (0x0005022d) main_call5_pane

0xc50d,	// (0x0004ebac) sc_swipe_pane_ParamLimits

0xc50d,	// (0x0004ebac) sc_swipe_pane

0xc6db,	// (0x0004ed7a) call5_image_pane_ParamLimits

0xc6db,	// (0x0004ed7a) call5_image_pane

0xc6e7,	// (0x0004ed86) call5_swipe_1_pane_ParamLimits

0xc6e7,	// (0x0004ed86) call5_swipe_1_pane

0xc6f3,	// (0x0004ed92) call5_swipe_2_pane_ParamLimits

0xc6f3,	// (0x0004ed92) call5_swipe_2_pane

0xc70b,	// (0x0004edaa) popup_call5_audio_first_window_ParamLimits

0xc70b,	// (0x0004edaa) popup_call5_audio_first_window

0x3206,	// (0x000458a5) call5_swipe_1_pane_g1_ParamLimits

0x3206,	// (0x000458a5) call5_swipe_1_pane_g1

0x4b34,	// (0x000471d3) call5_swipe_1_pane_g2_ParamLimits

0x4b34,	// (0x000471d3) call5_swipe_1_pane_g2

0x0001,

0xfcef,	// (0x0005238e) call5_swipe_1_pane_g_ParamLimits

0xfcef,	// (0x0005238e) call5_swipe_1_pane_g

0x4b40,	// (0x000471df) call5_swipe_1_pane_t1_ParamLimits

0x4b40,	// (0x000471df) call5_swipe_1_pane_t1

0x3206,	// (0x000458a5) call5_swipe_2_pane_g1_ParamLimits

0x3206,	// (0x000458a5) call5_swipe_2_pane_g1

0x4b55,	// (0x000471f4) call5_swipe_2_pane_g2_ParamLimits

0x4b55,	// (0x000471f4) call5_swipe_2_pane_g2

0x0001,

0xfcf4,	// (0x00052393) call5_swipe_2_pane_g_ParamLimits

0xfcf4,	// (0x00052393) call5_swipe_2_pane_g

0x4b61,	// (0x00047200) call5_swipe_2_pane_t1_ParamLimits

0x4b61,	// (0x00047200) call5_swipe_2_pane_t1

0x4b76,	// (0x00047215) sc_swipe_pane_g1_ParamLimits

0x4b76,	// (0x00047215) sc_swipe_pane_g1

0x4b83,	// (0x00047222) sc_swipe_pane_g2_ParamLimits

0x4b83,	// (0x00047222) sc_swipe_pane_g2

0x0001,

0xfcf9,	// (0x00052398) sc_swipe_pane_g_ParamLimits

0xfcf9,	// (0x00052398) sc_swipe_pane_g

0x4b8f,	// (0x0004722e) sc_swipe_pane_t1_ParamLimits

0x4b8f,	// (0x0004722e) sc_swipe_pane_t1

0xdb8e,	// (0x0005022d) main_cmail_launcher_pane

0xc717,	// (0x0004edb6) aid_size_cell_cmail_l_ParamLimits

0xc717,	// (0x0004edb6) aid_size_cell_cmail_l

0xc727,	// (0x0004edc6) grid_cmail_l_pane_ParamLimits

0xc727,	// (0x0004edc6) grid_cmail_l_pane

0xc733,	// (0x0004edd2) cell_cmail_l_pane_ParamLimits

0xc733,	// (0x0004edd2) cell_cmail_l_pane

0xc745,	// (0x0004ede4) cell_cmail_l_pane_g1_ParamLimits

0xc745,	// (0x0004ede4) cell_cmail_l_pane_g1

0xc755,	// (0x0004edf4) cell_cmail_l_pane_t1_ParamLimits

0xc755,	// (0x0004edf4) cell_cmail_l_pane_t1

0x4ba4,	// (0x00047243) cell_cmail_l_pane_t2_ParamLimits

0x4ba4,	// (0x00047243) cell_cmail_l_pane_t2

0x0001,

0xfcfe,	// (0x0005239d) cell_cmail_l_pane_t_ParamLimits

0xfcfe,	// (0x0005239d) cell_cmail_l_pane_t

0xecfa,	// (0x00051399) grid_highlight_pane_cp018_ParamLimits

0xecfa,	// (0x00051399) grid_highlight_pane_cp018

0x658f,	// (0x00048c2e) main2_pane_ParamLimits

0x658f,	// (0x00048c2e) main2_pane

0xe3bf,	// (0x00050a5e) popup_sp_fs_action_menu_bg_pane_g1

0xe3c7,	// (0x00050a66) popup_sp_fs_action_menu_bg_pane_g2

0xe3cf,	// (0x00050a6e) popup_sp_fs_action_menu_bg_pane_g3

0xe3d7,	// (0x00050a76) popup_sp_fs_action_menu_bg_pane_g4

0xe3df,	// (0x00050a7e) popup_sp_fs_action_menu_bg_pane_g5

0xe3e7,	// (0x00050a86) popup_sp_fs_action_menu_bg_pane_g6

0xe3ef,	// (0x00050a8e) popup_sp_fs_action_menu_bg_pane_g7

0xe3f7,	// (0x00050a96) popup_sp_fs_action_menu_bg_pane_g8

0xe3ff,	// (0x00050a9e) popup_sp_fs_action_menu_bg_pane_g9

0xe407,	// (0x00050aa6) popup_sp_fs_action_menu_bg_pane_g10

0xe407,	// (0x00050aa6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x0005185a) popup_sp_fs_action_menu_bg_pane_g

0x13ae,	// (0x00043a4d) list_medium_line_x2_t3_g3_g1_ParamLimits

0x13ae,	// (0x00043a4d) list_medium_line_x2_t3_g3_g1

0x13ba,	// (0x00043a59) list_medium_line_x2_t3_g3_g2_ParamLimits

0x13ba,	// (0x00043a59) list_medium_line_x2_t3_g3_g2

0x13c6,	// (0x00043a65) list_medium_line_x2_t3_g3_g3_ParamLimits

0x13c6,	// (0x00043a65) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0005190a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0005190a) list_medium_line_x2_t3_g3_g

0x13d2,	// (0x00043a71) list_medium_line_x2_t3_g3_t1_ParamLimits

0x13d2,	// (0x00043a71) list_medium_line_x2_t3_g3_t1

0x72e9,	// (0x00049988) list_medium_line_x2_t3_g3_t2_ParamLimits

0x72e9,	// (0x00049988) list_medium_line_x2_t3_g3_t2

0x13e7,	// (0x00043a86) list_medium_line_x2_t3_g3_t3_ParamLimits

0x13e7,	// (0x00043a86) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x00051911) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x00051911) list_medium_line_x2_t3_g3_t

0x13ae,	// (0x00043a4d) list_medium_line_x2_t3_g2_g1_ParamLimits

0x13ae,	// (0x00043a4d) list_medium_line_x2_t3_g2_g1

0x13c6,	// (0x00043a65) list_medium_line_x2_t3_g2_g2_ParamLimits

0x13c6,	// (0x00043a65) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x00051918) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x00051918) list_medium_line_x2_t3_g2_g

0x13fc,	// (0x00043a9b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x13fc,	// (0x00043a9b) list_medium_line_x2_t3_g2_t1

0x1412,	// (0x00043ab1) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1412,	// (0x00043ab1) list_medium_line_x2_t3_g2_t2

0x13e7,	// (0x00043a86) list_medium_line_x2_t3_g2_t3_ParamLimits

0x13e7,	// (0x00043a86) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0005191d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0005191d) list_medium_line_x2_t3_g2_t

0x13ae,	// (0x00043a4d) list_medium_line_x2_t4_g4_g1_ParamLimits

0x13ae,	// (0x00043a4d) list_medium_line_x2_t4_g4_g1

0x1424,	// (0x00043ac3) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1424,	// (0x00043ac3) list_medium_line_x2_t4_g4_g2

0x13ba,	// (0x00043a59) list_medium_line_x2_t4_g4_g3_ParamLimits

0x13ba,	// (0x00043a59) list_medium_line_x2_t4_g4_g3

0x1430,	// (0x00043acf) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1430,	// (0x00043acf) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x00051924) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x00051924) list_medium_line_x2_t4_g4_g

0x72fb,	// (0x0004999a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x72fb,	// (0x0004999a) list_medium_line_x2_t4_g4_t1

0x7312,	// (0x000499b1) list_medium_line_x2_t4_g4_t2_ParamLimits

0x7312,	// (0x000499b1) list_medium_line_x2_t4_g4_t2

0x7327,	// (0x000499c6) list_medium_line_x2_t4_g4_t3_ParamLimits

0x7327,	// (0x000499c6) list_medium_line_x2_t4_g4_t3

0x143c,	// (0x00043adb) list_medium_line_x2_t4_g4_t4_ParamLimits

0x143c,	// (0x00043adb) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0005192d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0005192d) list_medium_line_x2_t4_g4_t

0x13ae,	// (0x00043a4d) list_medium_line_x2_t2_g4_g1_ParamLimits

0x13ae,	// (0x00043a4d) list_medium_line_x2_t2_g4_g1

0x1424,	// (0x00043ac3) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1424,	// (0x00043ac3) list_medium_line_x2_t2_g4_g2

0x13ba,	// (0x00043a59) list_medium_line_x2_t2_g4_g3_ParamLimits

0x13ba,	// (0x00043a59) list_medium_line_x2_t2_g4_g3

0x13c6,	// (0x00043a65) list_medium_line_x2_t2_g4_g4_ParamLimits

0x13c6,	// (0x00043a65) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x00051994) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x00051994) list_medium_line_x2_t2_g4_g

0x144e,	// (0x00043aed) list_medium_line_x2_t2_g4_t1_ParamLimits

0x144e,	// (0x00043aed) list_medium_line_x2_t2_g4_t1

0x13e7,	// (0x00043a86) list_medium_line_x2_t2_g4_t2_ParamLimits

0x13e7,	// (0x00043a86) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x0005199d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x0005199d) list_medium_line_x2_t2_g4_t

0x13ae,	// (0x00043a4d) list_medium_line_x2_t2_g3_g1_ParamLimits

0x13ae,	// (0x00043a4d) list_medium_line_x2_t2_g3_g1

0x13ba,	// (0x00043a59) list_medium_line_x2_t2_g3_g2_ParamLimits

0x13ba,	// (0x00043a59) list_medium_line_x2_t2_g3_g2

0x13c6,	// (0x00043a65) list_medium_line_x2_t2_g3_g3_ParamLimits

0x13c6,	// (0x00043a65) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0005190a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0005190a) list_medium_line_x2_t2_g3_g

0x1463,	// (0x00043b02) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1463,	// (0x00043b02) list_medium_line_x2_t2_g3_t1

0x13e7,	// (0x00043a86) list_medium_line_x2_t2_g3_t2_ParamLimits

0x13e7,	// (0x00043a86) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x000519a2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x000519a2) list_medium_line_x2_t2_g3_t

0x7f1a,	// (0x0004a5b9) main_sp_fs_list_pane_ParamLimits

0x7f1a,	// (0x0004a5b9) main_sp_fs_list_pane

0x7f27,	// (0x0004a5c6) sp_fs_scroll_pane_ParamLimits

0x7f27,	// (0x0004a5c6) sp_fs_scroll_pane

0x7f34,	// (0x0004a5d3) list_medium_line_x2_t3_t1

0x7f44,	// (0x0004a5e3) list_medium_line_x2_t3_t2

0x14a6,	// (0x00043b45) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x000519ed) list_medium_line_x2_t3_t

0x7f52,	// (0x0004a5f1) list_medium_line_x3_t4_t1

0x7f62,	// (0x0004a601) list_medium_line_x3_t4_t2

0x14b4,	// (0x00043b53) list_medium_line_x3_t4_t3

0x14c2,	// (0x00043b61) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x000519f4) list_medium_line_x3_t4_t

0x7f70,	// (0x0004a60f) list_medium_line_x4_t5_t1

0x7f80,	// (0x0004a61f) list_medium_line_x4_t5_t2

0x14b4,	// (0x00043b53) list_medium_line_x4_t5_t3

0x14d0,	// (0x00043b6f) list_medium_line_x4_t5_t4

0x14c2,	// (0x00043b61) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x000519fd) list_medium_line_x4_t5_t

0x13ae,	// (0x00043a4d) list_medium_line_t4_g4_g1_ParamLimits

0x13ae,	// (0x00043a4d) list_medium_line_t4_g4_g1

0x1430,	// (0x00043acf) list_medium_line_t4_g4_g2_ParamLimits

0x1430,	// (0x00043acf) list_medium_line_t4_g4_g2

0x14de,	// (0x00043b7d) list_medium_line_t4_g4_g3_ParamLimits

0x14de,	// (0x00043b7d) list_medium_line_t4_g4_g3

0x13c6,	// (0x00043a65) list_medium_line_t4_g4_g4_ParamLimits

0x13c6,	// (0x00043a65) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x00051a08) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x00051a08) list_medium_line_t4_g4_g

0x14ea,	// (0x00043b89) list_medium_line_t4_g4_t1_ParamLimits

0x14ea,	// (0x00043b89) list_medium_line_t4_g4_t1

0x14ff,	// (0x00043b9e) list_medium_line_t4_g4_t2_ParamLimits

0x14ff,	// (0x00043b9e) list_medium_line_t4_g4_t2

0x1515,	// (0x00043bb4) list_medium_line_t4_g4_t3_ParamLimits

0x1515,	// (0x00043bb4) list_medium_line_t4_g4_t3

0x152b,	// (0x00043bca) list_medium_line_t4_g4_t4_ParamLimits

0x152b,	// (0x00043bca) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x00051a11) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x00051a11) list_medium_line_t4_g4_t

0x809c,	// (0x0004a73b) chi_dic_find_pane_g1

0x8e0e,	// (0x0004b4ad) main_tport_pane

0x3c2e,	// (0x000462cd) list_medium_line_plain_t1

0x13ae,	// (0x00043a4d) list_medium_line_t2_g2_g1_ParamLimits

0x13ae,	// (0x00043a4d) list_medium_line_t2_g2_g1

0x13ba,	// (0x00043a59) list_medium_line_t2_g2_g2_ParamLimits

0x13ba,	// (0x00043a59) list_medium_line_t2_g2_g2

0x0001,

0xfa41,	// (0x000520e0) list_medium_line_t2_g2_g_ParamLimits

0xfa41,	// (0x000520e0) list_medium_line_t2_g2_g

0xb58a,	// (0x0004dc29) list_medium_line_t2_g2_t1_ParamLimits

0xb58a,	// (0x0004dc29) list_medium_line_t2_g2_t1

0xb5a1,	// (0x0004dc40) list_medium_line_t2_g2_t2_ParamLimits

0xb5a1,	// (0x0004dc40) list_medium_line_t2_g2_t2

0x0001,

0xfa46,	// (0x000520e5) list_medium_line_t2_g2_t_ParamLimits

0xfa46,	// (0x000520e5) list_medium_line_t2_g2_t

0x3f55,	// (0x000465f4) aid_sp_fs_list_icon_a_sm

0x3f5d,	// (0x000465fc) aid_sp_fs_list_icon_d

0x3f65,	// (0x00046604) aid_sp_fs_text_primary

0x3f6e,	// (0x0004660d) aid_sp_fs_text_secondary

0x3f77,	// (0x00046616) list_medium_line

0x3f77,	// (0x00046616) list_medium_line_g2

0x3f77,	// (0x00046616) list_medium_line_g3

0x3f77,	// (0x00046616) list_medium_line_plain

0x3f77,	// (0x00046616) list_medium_line_plain_t2

0x3f77,	// (0x00046616) list_medium_line_plain_t3

0x3f77,	// (0x00046616) list_medium_line_right_icon

0x3f77,	// (0x00046616) list_medium_line_right_iconx2

0x3f77,	// (0x00046616) list_medium_line_t2

0x3f77,	// (0x00046616) list_medium_line_t2_g2

0x3f77,	// (0x00046616) list_medium_line_t2_g3

0x3f77,	// (0x00046616) list_medium_line_t2_right_icon

0x3f77,	// (0x00046616) list_medium_line_t2_right_iconx2

0x3f77,	// (0x00046616) list_medium_line_t3

0x3f77,	// (0x00046616) list_medium_line_t3_g2

0x3f77,	// (0x00046616) list_medium_line_t3_g3

0x3f77,	// (0x00046616) list_medium_line_t3_right_iconx2

0x3f80,	// (0x0004661f) list_medium_line_t4_g4

0x3f89,	// (0x00046628) list_medium_line_x2

0x3f89,	// (0x00046628) list_medium_line_x2_t2_g2

0x3f89,	// (0x00046628) list_medium_line_x2_t2_g3

0x3f89,	// (0x00046628) list_medium_line_x2_t2_g4

0x3f89,	// (0x00046628) list_medium_line_x2_t3

0x3f89,	// (0x00046628) list_medium_line_x2_t3_g2

0x3f89,	// (0x00046628) list_medium_line_x2_t3_g3

0x3f89,	// (0x00046628) list_medium_line_x2_t3_g4

0x3f89,	// (0x00046628) list_medium_line_x2_t4_g2

0x3f89,	// (0x00046628) list_medium_line_x2_t4_g4

0x3f92,	// (0x00046631) list_medium_line_x3

0x3f92,	// (0x00046631) list_medium_line_x3_t4

0x3f92,	// (0x00046631) list_medium_line_x3_t4_g4

0x3f80,	// (0x0004661f) list_medium_line_x4_t4

0x3f80,	// (0x0004661f) list_medium_line_x4_t4_g7

0x3f80,	// (0x0004661f) list_medium_line_x4_t5

0x3f9b,	// (0x0004663a) list_single_fs_dyc_pane_ParamLimits

0x3f9b,	// (0x0004663a) list_single_fs_dyc_pane

0x13ae,	// (0x00043a4d) list_medium_line_x4_t4_g7_g1_ParamLimits

0x13ae,	// (0x00043a4d) list_medium_line_x4_t4_g7_g1

0x448b,	// (0x00046b2a) list_medium_line_x4_t4_g7_g2_ParamLimits

0x448b,	// (0x00046b2a) list_medium_line_x4_t4_g7_g2

0x4497,	// (0x00046b36) list_medium_line_x4_t4_g7_g3_ParamLimits

0x4497,	// (0x00046b36) list_medium_line_x4_t4_g7_g3

0x44a6,	// (0x00046b45) list_medium_line_x4_t4_g7_g4_ParamLimits

0x44a6,	// (0x00046b45) list_medium_line_x4_t4_g7_g4

0x44b2,	// (0x00046b51) list_medium_line_x4_t4_g7_g5_ParamLimits

0x44b2,	// (0x00046b51) list_medium_line_x4_t4_g7_g5

0x44c1,	// (0x00046b60) list_medium_line_x4_t4_g7_g6_ParamLimits

0x44c1,	// (0x00046b60) list_medium_line_x4_t4_g7_g6

0x44d0,	// (0x00046b6f) list_medium_line_x4_t4_g7_g7_ParamLimits

0x44d0,	// (0x00046b6f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc0b,	// (0x000522aa) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc0b,	// (0x000522aa) list_medium_line_x4_t4_g7_g

0x44dc,	// (0x00046b7b) list_medium_line_x4_t4_g7_t1_ParamLimits

0x44dc,	// (0x00046b7b) list_medium_line_x4_t4_g7_t1

0x44f1,	// (0x00046b90) list_medium_line_x4_t4_g7_t2_ParamLimits

0x44f1,	// (0x00046b90) list_medium_line_x4_t4_g7_t2

0x4506,	// (0x00046ba5) list_medium_line_x4_t4_g7_t3_ParamLimits

0x4506,	// (0x00046ba5) list_medium_line_x4_t4_g7_t3

0x451b,	// (0x00046bba) list_medium_line_x4_t4_g7_t4_ParamLimits

0x451b,	// (0x00046bba) list_medium_line_x4_t4_g7_t4

0x452d,	// (0x00046bcc) list_medium_line_x4_t4_g7_t5_ParamLimits

0x452d,	// (0x00046bcc) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc1a,	// (0x000522b9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc1a,	// (0x000522b9) list_medium_line_x4_t4_g7_t

0x453f,	// (0x00046bde) list_single_dyc_row_pane_ParamLimits

0x453f,	// (0x00046bde) list_single_dyc_row_pane

0xc6cf,	// (0x0004ed6e) call5_gesture_pane_ParamLimits

0xc6cf,	// (0x0004ed6e) call5_gesture_pane

0xc6ff,	// (0x0004ed9e) call5_windows_pane_ParamLimits

0xc6ff,	// (0x0004ed9e) call5_windows_pane

0xc76b,	// (0x0004ee0a) call5_swipe_1_pane_cp_ParamLimits

0xc76b,	// (0x0004ee0a) call5_swipe_1_pane_cp

0xc777,	// (0x0004ee16) call5_swipe_2_pane_cp_ParamLimits

0xc777,	// (0x0004ee16) call5_swipe_2_pane_cp

0x172d,	// (0x00043dcc) call5_image_pane_cp

0xc783,	// (0x0004ee22) popup_call5_audio_first_window_cp_ParamLimits

0xc783,	// (0x0004ee22) popup_call5_audio_first_window_cp

0x4b76,	// (0x00047215) call5_swipe_1_pane_g1_cp_ParamLimits

0x4b76,	// (0x00047215) call5_swipe_1_pane_g1_cp

0x4bb6,	// (0x00047255) call5_swipe_1_pane_g2_cp

0x4b8f,	// (0x0004722e) call5_swipe_1_pane_t1_cp_ParamLimits

0x4b8f,	// (0x0004722e) call5_swipe_1_pane_t1_cp

0x4b76,	// (0x00047215) call5_swipe_2_pane_g1_cp_ParamLimits

0x4b76,	// (0x00047215) call5_swipe_2_pane_g1_cp

0x4bbe,	// (0x0004725d) call5_swipe_2_pane_g2_cp

0x4bc6,	// (0x00047265) call5_swipe_2_pane_t1_cp_ParamLimits

0x4bc6,	// (0x00047265) call5_swipe_2_pane_t1_cp

0xecfa,	// (0x00051399) main_sp_fs_email_pane

0x4bdb,	// (0x0004727a) main_sp_fs_listscroll_pane_te

0xc78f,	// (0x0004ee2e) popup_sp_fs_action_menu_pane_ParamLimits

0xc78f,	// (0x0004ee2e) popup_sp_fs_action_menu_pane

0x2fd7,	// (0x00045676) bg_sp_fs_ctrlbar_pane_g1

0x4be4,	// (0x00047283) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x4bed,	// (0x0004728c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x4bf6,	// (0x00047295) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2fd7,	// (0x00045676) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd03,	// (0x000523a2) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2dc4,	// (0x00045463) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2dc4,	// (0x00045463) bg_sp_fs_ctrlbar_ddmenu_pane

0x4bff,	// (0x0004729e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x4bff,	// (0x0004729e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xed3d,	// (0x000513dc) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xed3d,	// (0x000513dc) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd0c,	// (0x000523ab) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd0c,	// (0x000523ab) main_sp_fs_ctrlbar_ddmenu_pane_g

0x4c0b,	// (0x000472aa) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x4c0b,	// (0x000472aa) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x4c25,	// (0x000472c4) list_medium_line_t2_right_icon_g1

0xc7bf,	// (0x0004ee5e) list_medium_line_t2_right_icon_t1

0xc7ce,	// (0x0004ee6d) list_medium_line_t2_right_icon_t2

0x0001,

0xfd11,	// (0x000523b0) list_medium_line_t2_right_icon_t

0x2b9c,	// (0x0004523b) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2b9c,	// (0x0004523b) bg_sp_fs_ctrlbar_pane

0xc831,	// (0x0004eed0) main_sp_fs_ctrlbar_button_pane_cp01

0xc839,	// (0x0004eed8) main_sp_fs_ctrlbar_ddmenu_pane

0x4c75,	// (0x00047314) main_sp_fs_ctrlbar_pane_g1

0x4c81,	// (0x00047320) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd16,	// (0x000523b5) main_sp_fs_ctrlbar_pane_g

0x4c8d,	// (0x0004732c) main_sp_fs_ctrlbar_pane_t1

0xc843,	// (0x0004eee2) main_sp_fs_ctrlbar_pane

0xc85b,	// (0x0004eefa) main_sp_fs_listscroll_pane_te_cp01

0xc86c,	// (0x0004ef0b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc86c,	// (0x0004ef0b) popup_sp_fs_action_menu_pane_cp01

0xecfa,	// (0x00051399) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xecfa,	// (0x00051399) bg_sp_fs_highlight_list_pane_cp01

0xc888,	// (0x0004ef27) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc888,	// (0x0004ef27) sp_fs_action_menu_list_gene_pane_g1

0x4ca2,	// (0x00047341) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x4ca2,	// (0x00047341) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd1b,	// (0x000523ba) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd1b,	// (0x000523ba) sp_fs_action_menu_list_gene_pane_g

0x4caf,	// (0x0004734e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x4caf,	// (0x0004734e) sp_fs_action_menu_list_gene_pane_t1

0xc897,	// (0x0004ef36) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc897,	// (0x0004ef36) sp_fs_action_menu_list_gene_pane

0x4cc7,	// (0x00047366) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x4cc7,	// (0x00047366) popup_sp_fs_action_menu_bg_pane

0xc8b4,	// (0x0004ef53) sp_fs_action_menu_list_pane_ParamLimits

0xc8b4,	// (0x0004ef53) sp_fs_action_menu_list_pane

0x4cd5,	// (0x00047374) sp_fs_scroll_pane_cp01_ParamLimits

0x4cd5,	// (0x00047374) sp_fs_scroll_pane_cp01

0xc8d0,	// (0x0004ef6f) list_medium_line_plain_t2_t1

0xc8df,	// (0x0004ef7e) list_medium_line_plain_t2_t2

0x0001,

0xfd20,	// (0x000523bf) list_medium_line_plain_t2_t

0xc8ed,	// (0x0004ef8c) list_medium_line_plain_t3_t1

0xc8fd,	// (0x0004ef9c) list_medium_line_plain_t3_t2

0xc90b,	// (0x0004efaa) list_medium_line_plain_t3_t3

0x0002,

0xfd25,	// (0x000523c4) list_medium_line_plain_t3_t

0x13ae,	// (0x00043a4d) list_medium_line_x2_t2_g2_g1_ParamLimits

0x13ae,	// (0x00043a4d) list_medium_line_x2_t2_g2_g1

0x13c6,	// (0x00043a65) list_medium_line_x2_t2_g2_g2_ParamLimits

0x13c6,	// (0x00043a65) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x00051918) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x00051918) list_medium_line_x2_t2_g2_g

0x14ea,	// (0x00043b89) list_medium_line_x2_t2_g2_t1_ParamLimits

0x14ea,	// (0x00043b89) list_medium_line_x2_t2_g2_t1

0x13e7,	// (0x00043a86) list_medium_line_x2_t2_g2_t2_ParamLimits

0x13e7,	// (0x00043a86) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd2c,	// (0x000523cb) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd2c,	// (0x000523cb) list_medium_line_x2_t2_g2_t

0x13ae,	// (0x00043a4d) list_medium_line_x2_t4_g2_g1_ParamLimits

0x13ae,	// (0x00043a4d) list_medium_line_x2_t4_g2_g1

0x4cfb,	// (0x0004739a) list_medium_line_x2_t4_g2_g2_ParamLimits

0x4cfb,	// (0x0004739a) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd31,	// (0x000523d0) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd31,	// (0x000523d0) list_medium_line_x2_t4_g2_g

0xc919,	// (0x0004efb8) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc919,	// (0x0004efb8) list_medium_line_x2_t4_g2_t1

0xc933,	// (0x0004efd2) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc933,	// (0x0004efd2) list_medium_line_x2_t4_g2_t2

0xc948,	// (0x0004efe7) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc948,	// (0x0004efe7) list_medium_line_x2_t4_g2_t3

0x13e7,	// (0x00043a86) list_medium_line_x2_t4_g2_t4_ParamLimits

0x13e7,	// (0x00043a86) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd36,	// (0x000523d5) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd36,	// (0x000523d5) list_medium_line_x2_t4_g2_t

0x4d0c,	// (0x000473ab) list_medium_line_t3_right_iconx2_g1

0x4c25,	// (0x000472c4) list_medium_line_t3_right_iconx2_g2

0xc95d,	// (0x0004effc) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd3f,	// (0x000523de) list_medium_line_t3_right_iconx2_g

0x4c2d,	// (0x000472cc) list_medium_line_t3_right_iconx2_t1

0xc965,	// (0x0004f004) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd46,	// (0x000523e5) list_medium_line_t3_right_iconx2_t

0x13ae,	// (0x00043a4d) list_medium_line_x3_t4_g4_g1_ParamLimits

0x13ae,	// (0x00043a4d) list_medium_line_x3_t4_g4_g1

0x13ba,	// (0x00043a59) list_medium_line_x3_t4_g4_g2_ParamLimits

0x13ba,	// (0x00043a59) list_medium_line_x3_t4_g4_g2

0x1430,	// (0x00043acf) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1430,	// (0x00043acf) list_medium_line_x3_t4_g4_g3

0x4d14,	// (0x000473b3) list_medium_line_x3_t4_g4_g4_ParamLimits

0x4d14,	// (0x000473b3) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd4b,	// (0x000523ea) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd4b,	// (0x000523ea) list_medium_line_x3_t4_g4_g

0xb58a,	// (0x0004dc29) list_medium_line_x3_t4_g4_t1_ParamLimits

0xb58a,	// (0x0004dc29) list_medium_line_x3_t4_g4_t1

0xb5a1,	// (0x0004dc40) list_medium_line_x3_t4_g4_t2_ParamLimits

0xb5a1,	// (0x0004dc40) list_medium_line_x3_t4_g4_t2

0x4d20,	// (0x000473bf) list_medium_line_x3_t4_g4_t3_ParamLimits

0x4d20,	// (0x000473bf) list_medium_line_x3_t4_g4_t3

0x4d35,	// (0x000473d4) list_medium_line_x3_t4_g4_t4_ParamLimits

0x4d35,	// (0x000473d4) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd54,	// (0x000523f3) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd54,	// (0x000523f3) list_medium_line_x3_t4_g4_t

0xc973,	// (0x0004f012) list_single_dyc_row_text_pane_t1_ParamLimits

0xc973,	// (0x0004f012) list_single_dyc_row_text_pane_t1

0xc9aa,	// (0x0004f049) list_single_dyc_row_text_pane_t2_ParamLimits

0xc9aa,	// (0x0004f049) list_single_dyc_row_text_pane_t2

0x4d52,	// (0x000473f1) list_single_dyc_row_text_pane_t3_ParamLimits

0x4d52,	// (0x000473f1) list_single_dyc_row_text_pane_t3

0x0002,

0xfd5d,	// (0x000523fc) list_single_dyc_row_text_pane_t_ParamLimits

0xfd5d,	// (0x000523fc) list_single_dyc_row_text_pane_t

0x4d64,	// (0x00047403) list_single_dyc_row_pane_g1_ParamLimits

0x4d64,	// (0x00047403) list_single_dyc_row_pane_g1

0x4d70,	// (0x0004740f) list_single_dyc_row_pane_g2_ParamLimits

0x4d70,	// (0x0004740f) list_single_dyc_row_pane_g2

0x4d7c,	// (0x0004741b) list_single_dyc_row_pane_g3_ParamLimits

0x4d7c,	// (0x0004741b) list_single_dyc_row_pane_g3

0x4d88,	// (0x00047427) list_single_dyc_row_pane_g4_ParamLimits

0x4d88,	// (0x00047427) list_single_dyc_row_pane_g4

0x0003,

0xfd64,	// (0x00052403) list_single_dyc_row_pane_g_ParamLimits

0xfd64,	// (0x00052403) list_single_dyc_row_pane_g

0x4d94,	// (0x00047433) list_single_dyc_row_text_pane_ParamLimits

0x4d94,	// (0x00047433) list_single_dyc_row_text_pane

0xdb8e,	// (0x0005022d) bg_sp_fs_scroll_pane

0x4db3,	// (0x00047452) thumb_sp_fs_scroll_pane

0x13ae,	// (0x00043a4d) list_medium_line_g1_ParamLimits

0x13ae,	// (0x00043a4d) list_medium_line_g1

0x14ea,	// (0x00043b89) list_medium_line_t1_ParamLimits

0x14ea,	// (0x00043b89) list_medium_line_t1

0x13ae,	// (0x00043a4d) list_medium_line_x2_g1_ParamLimits

0x13ae,	// (0x00043a4d) list_medium_line_x2_g1

0x13ba,	// (0x00043a59) list_medium_line_x2_g2_ParamLimits

0x13ba,	// (0x00043a59) list_medium_line_x2_g2

0x0001,

0xfa41,	// (0x000520e0) list_medium_line_x2_g_ParamLimits

0xfa41,	// (0x000520e0) list_medium_line_x2_g

0x4dbc,	// (0x0004745b) list_medium_line_x2_t1_ParamLimits

0x4dbc,	// (0x0004745b) list_medium_line_x2_t1

0x13ae,	// (0x00043a4d) list_medium_line_x3_g1_ParamLimits

0x13ae,	// (0x00043a4d) list_medium_line_x3_g1

0x13ba,	// (0x00043a59) list_medium_line_x3_g2_ParamLimits

0x13ba,	// (0x00043a59) list_medium_line_x3_g2

0x0001,

0xfa41,	// (0x000520e0) list_medium_line_x3_g_ParamLimits

0xfa41,	// (0x000520e0) list_medium_line_x3_g

0x4dbc,	// (0x0004745b) list_medium_line_x3_t1_ParamLimits

0x4dbc,	// (0x0004745b) list_medium_line_x3_t1

0x4dd2,	// (0x00047471) thumb_sp_fs_scroll_pane_g1

0x4ddb,	// (0x0004747a) thumb_sp_fs_scroll_pane_g2

0x4de4,	// (0x00047483) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd6d,	// (0x0005240c) thumb_sp_fs_scroll_pane_g

0x4dd2,	// (0x00047471) bg_sp_fs_scroll_pane_g1

0x4ddb,	// (0x0004747a) bg_sp_fs_scroll_pane_g2

0x4de4,	// (0x00047483) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd6d,	// (0x0005240c) bg_sp_fs_scroll_pane_g

0x13ae,	// (0x00043a4d) list_medium_line_x2_t3_g4_g1_ParamLimits

0x13ae,	// (0x00043a4d) list_medium_line_x2_t3_g4_g1

0x1424,	// (0x00043ac3) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1424,	// (0x00043ac3) list_medium_line_x2_t3_g4_g2

0x13ba,	// (0x00043a59) list_medium_line_x2_t3_g4_g3_ParamLimits

0x13ba,	// (0x00043a59) list_medium_line_x2_t3_g4_g3

0x13c6,	// (0x00043a65) list_medium_line_x2_t3_g4_g4_ParamLimits

0x13c6,	// (0x00043a65) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x00051994) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x00051994) list_medium_line_x2_t3_g4_g

0xc9fe,	// (0x0004f09d) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc9fe,	// (0x0004f09d) list_medium_line_x2_t3_g4_t1

0xca14,	// (0x0004f0b3) list_medium_line_x2_t3_g4_t2_ParamLimits

0xca14,	// (0x0004f0b3) list_medium_line_x2_t3_g4_t2

0x13e7,	// (0x00043a86) list_medium_line_x2_t3_g4_t3_ParamLimits

0x13e7,	// (0x00043a86) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd74,	// (0x00052413) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd74,	// (0x00052413) list_medium_line_x2_t3_g4_t

0x13ae,	// (0x00043a4d) list_medium_line_g2_g1_ParamLimits

0x13ae,	// (0x00043a4d) list_medium_line_g2_g1

0x13ba,	// (0x00043a59) list_medium_line_g2_g2_ParamLimits

0x13ba,	// (0x00043a59) list_medium_line_g2_g2

0x0001,

0xfa41,	// (0x000520e0) list_medium_line_g2_g_ParamLimits

0xfa41,	// (0x000520e0) list_medium_line_g2_g

0x1463,	// (0x00043b02) list_medium_line_g2_t1_ParamLimits

0x1463,	// (0x00043b02) list_medium_line_g2_t1

0x13ae,	// (0x00043a4d) list_medium_line_t3_g2_g1_ParamLimits

0x13ae,	// (0x00043a4d) list_medium_line_t3_g2_g1

0x13ba,	// (0x00043a59) list_medium_line_t3_g2_g2_ParamLimits

0x13ba,	// (0x00043a59) list_medium_line_t3_g2_g2

0x0001,

0xfa41,	// (0x000520e0) list_medium_line_t3_g2_g_ParamLimits

0xfa41,	// (0x000520e0) list_medium_line_t3_g2_g

0xca2d,	// (0x0004f0cc) list_medium_line_t3_g2_t1_ParamLimits

0xca2d,	// (0x0004f0cc) list_medium_line_t3_g2_t1

0xca47,	// (0x0004f0e6) list_medium_line_t3_g2_t2_ParamLimits

0xca47,	// (0x0004f0e6) list_medium_line_t3_g2_t2

0xca5c,	// (0x0004f0fb) list_medium_line_t3_g2_t3_ParamLimits

0xca5c,	// (0x0004f0fb) list_medium_line_t3_g2_t3

0x0002,

0xfd7b,	// (0x0005241a) list_medium_line_t3_g2_t_ParamLimits

0xfd7b,	// (0x0005241a) list_medium_line_t3_g2_t

0x4c25,	// (0x000472c4) list_medium_line_right_icon_g1

0x4ded,	// (0x0004748c) list_medium_line_right_icon_t1

0x13ae,	// (0x00043a4d) list_medium_line_t2_g1_ParamLimits

0x13ae,	// (0x00043a4d) list_medium_line_t2_g1

0xca72,	// (0x0004f111) list_medium_line_t2_t1_ParamLimits

0xca72,	// (0x0004f111) list_medium_line_t2_t1

0xca88,	// (0x0004f127) list_medium_line_t2_t2_ParamLimits

0xca88,	// (0x0004f127) list_medium_line_t2_t2

0x0001,

0xfd82,	// (0x00052421) list_medium_line_t2_t_ParamLimits

0xfd82,	// (0x00052421) list_medium_line_t2_t

0x13ae,	// (0x00043a4d) list_medium_line_t3_g1_ParamLimits

0x13ae,	// (0x00043a4d) list_medium_line_t3_g1

0xca9a,	// (0x0004f139) list_medium_line_t3_t1_ParamLimits

0xca9a,	// (0x0004f139) list_medium_line_t3_t1

0xcab1,	// (0x0004f150) list_medium_line_t3_t2_ParamLimits

0xcab1,	// (0x0004f150) list_medium_line_t3_t2

0xcac6,	// (0x0004f165) list_medium_line_t3_t3_ParamLimits

0xcac6,	// (0x0004f165) list_medium_line_t3_t3

0x0002,

0xfd87,	// (0x00052426) list_medium_line_t3_t_ParamLimits

0xfd87,	// (0x00052426) list_medium_line_t3_t

0x13ae,	// (0x00043a4d) list_medium_line_g3_g1_ParamLimits

0x13ae,	// (0x00043a4d) list_medium_line_g3_g1

0x1424,	// (0x00043ac3) list_medium_line_g3_g2_ParamLimits

0x1424,	// (0x00043ac3) list_medium_line_g3_g2

0x13ba,	// (0x00043a59) list_medium_line_g3_g3_ParamLimits

0x13ba,	// (0x00043a59) list_medium_line_g3_g3

0x0002,

0xfd8e,	// (0x0005242d) list_medium_line_g3_g_ParamLimits

0xfd8e,	// (0x0005242d) list_medium_line_g3_g

0x144e,	// (0x00043aed) list_medium_line_g3_t1_ParamLimits

0x144e,	// (0x00043aed) list_medium_line_g3_t1

0x13ae,	// (0x00043a4d) list_medium_line_t2_g3_g1_ParamLimits

0x13ae,	// (0x00043a4d) list_medium_line_t2_g3_g1

0x1424,	// (0x00043ac3) list_medium_line_t2_g3_g2_ParamLimits

0x1424,	// (0x00043ac3) list_medium_line_t2_g3_g2

0x13ba,	// (0x00043a59) list_medium_line_t2_g3_g3_ParamLimits

0x13ba,	// (0x00043a59) list_medium_line_t2_g3_g3

0x0002,

0xfd8e,	// (0x0005242d) list_medium_line_t2_g3_g_ParamLimits

0xfd8e,	// (0x0005242d) list_medium_line_t2_g3_g

0xcad8,	// (0x0004f177) list_medium_line_t2_g3_t1_ParamLimits

0xcad8,	// (0x0004f177) list_medium_line_t2_g3_t1

0xcaf2,	// (0x0004f191) list_medium_line_t2_g3_t2_ParamLimits

0xcaf2,	// (0x0004f191) list_medium_line_t2_g3_t2

0x0001,

0xfd95,	// (0x00052434) list_medium_line_t2_g3_t_ParamLimits

0xfd95,	// (0x00052434) list_medium_line_t2_g3_t

0x13ae,	// (0x00043a4d) list_medium_line_t3_g3_g1_ParamLimits

0x13ae,	// (0x00043a4d) list_medium_line_t3_g3_g1

0x1424,	// (0x00043ac3) list_medium_line_t3_g3_g2_ParamLimits

0x1424,	// (0x00043ac3) list_medium_line_t3_g3_g2

0x13ba,	// (0x00043a59) list_medium_line_t3_g3_g3_ParamLimits

0x13ba,	// (0x00043a59) list_medium_line_t3_g3_g3

0x0002,

0xfd8e,	// (0x0005242d) list_medium_line_t3_g3_g_ParamLimits

0xfd8e,	// (0x0005242d) list_medium_line_t3_g3_g

0xcb07,	// (0x0004f1a6) list_medium_line_t3_g3_t1_ParamLimits

0xcb07,	// (0x0004f1a6) list_medium_line_t3_g3_t1

0xcb20,	// (0x0004f1bf) list_medium_line_t3_g3_t2_ParamLimits

0xcb20,	// (0x0004f1bf) list_medium_line_t3_g3_t2

0xcb36,	// (0x0004f1d5) list_medium_line_t3_g3_t3_ParamLimits

0xcb36,	// (0x0004f1d5) list_medium_line_t3_g3_t3

0x0002,

0xfd9a,	// (0x00052439) list_medium_line_t3_g3_t_ParamLimits

0xfd9a,	// (0x00052439) list_medium_line_t3_g3_t

0x4d0c,	// (0x000473ab) list_medium_line_right_iconx2_g1

0x4c25,	// (0x000472c4) list_medium_line_right_iconx2_g2

0x0001,

0xfda1,	// (0x00052440) list_medium_line_right_iconx2_g

0x4dfb,	// (0x0004749a) list_medium_line_right_iconx2_t1

0x4d0c,	// (0x000473ab) list_medium_line_t2_right_iconx2_g1

0x4c25,	// (0x000472c4) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfda1,	// (0x00052440) list_medium_line_t2_right_iconx2_g

0xcb4c,	// (0x0004f1eb) list_medium_line_t2_right_iconx2_t1

0xcb5c,	// (0x0004f1fb) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfda6,	// (0x00052445) list_medium_line_t2_right_iconx2_t

0x3c2e,	// (0x000462cd) list_medium_line_x4_t4_t1

0xcb6a,	// (0x0004f209) list_medium_line_x4_t4_t2

0xcb78,	// (0x0004f217) list_medium_line_x4_t4_t3

0xcb86,	// (0x0004f225) list_medium_line_x4_t4_t4

0x0003,

0xfdab,	// (0x0005244a) list_medium_line_x4_t4_t

0xcbb9,	// (0x0004f258) tport_appsw_pane_ParamLimits

0xcbb9,	// (0x0004f258) tport_appsw_pane

0xcbc5,	// (0x0004f264) tport_contact_pane_ParamLimits

0xcbc5,	// (0x0004f264) tport_contact_pane

0xcbd3,	// (0x0004f272) tport_listscroll_pane_ParamLimits

0xcbd3,	// (0x0004f272) tport_listscroll_pane

0xcbe1,	// (0x0004f280) cell_tport_appsw_pane_ParamLimits

0xcbe1,	// (0x0004f280) cell_tport_appsw_pane

0x32df,	// (0x0004597e) tport_appsw_pane_g1_ParamLimits

0x32df,	// (0x0004597e) tport_appsw_pane_g1

0x4e09,	// (0x000474a8) tport_contact_pane_g1

0x4e12,	// (0x000474b1) tport_contact_pane_t1

0x4e20,	// (0x000474bf) tport_contact_pane_t2

0x0001,

0xfdb4,	// (0x00052453) tport_contact_pane_t

0x4e2e,	// (0x000474cd) list_tport_pane

0xe419,	// (0x00050ab8) scroll_pane_cp_030

0x4e3f,	// (0x000474de) cell_tport_appsw_pane_g1

0x4e4f,	// (0x000474ee) cell_tport_appsw_pane_t1

0xdb8e,	// (0x0005022d) grid_highlight_pane_cp019

0xcc08,	// (0x0004f2a7) list_tport_double_graphic_pane_ParamLimits

0xcc08,	// (0x0004f2a7) list_tport_double_graphic_pane

0xecfa,	// (0x00051399) list_highlight_pane_cp023_ParamLimits

0xecfa,	// (0x00051399) list_highlight_pane_cp023

0xcc15,	// (0x0004f2b4) list_tport_double_graphic_pane_g1_ParamLimits

0xcc15,	// (0x0004f2b4) list_tport_double_graphic_pane_g1

0xcc22,	// (0x0004f2c1) list_tport_double_graphic_pane_t1_ParamLimits

0xcc22,	// (0x0004f2c1) list_tport_double_graphic_pane_t1

0xcc37,	// (0x0004f2d6) list_tport_double_graphic_pane_t2_ParamLimits

0xcc37,	// (0x0004f2d6) list_tport_double_graphic_pane_t2

0x0001,

0xfdc0,	// (0x0005245f) list_tport_double_graphic_pane_t_ParamLimits

0xfdc0,	// (0x0005245f) list_tport_double_graphic_pane_t

0xdb8e,	// (0x0005022d) main_cale_note_pane

0xadcc,	// (0x0004d46b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xadcc,	// (0x0004d46b) cell_vitu2_function_top_wide_pane_cp01

0xc462,	// (0x0004eb01) wait_bar_pane_cp05_ParamLimits

0xdb8e,	// (0x0005022d) listscroll_cmail_pane

0x4e5d,	// (0x000474fc) list_cmail_pane

0xcc49,	// (0x0004f2e8) list_cmail_body_pane

0xcc49,	// (0x0004f2e8) list_single_cmail_header_caption_pane

0xcc61,	// (0x0004f300) list_single_cmail_header_detail_pane_ParamLimits

0xcc61,	// (0x0004f300) list_single_cmail_header_detail_pane

0x4e79,	// (0x00047518) list_single_cmail_header_caption_pane_t1

0xcc8b,	// (0x0004f32a) list_single_cmail_header_detail_pane_g1_ParamLimits

0xcc8b,	// (0x0004f32a) list_single_cmail_header_detail_pane_g1

0x13ba,	// (0x00043a59) list_single_cmail_header_detail_pane_g2_ParamLimits

0x13ba,	// (0x00043a59) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdc5,	// (0x00052464) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdc5,	// (0x00052464) list_single_cmail_header_detail_pane_g

0x4e9c,	// (0x0004753b) list_single_cmail_header_detail_pane_t1_ParamLimits

0x4e9c,	// (0x0004753b) list_single_cmail_header_detail_pane_t1

0x4ec4,	// (0x00047563) list_single_cmail_header_editor_pane_bg_ParamLimits

0x4ec4,	// (0x00047563) list_single_cmail_header_editor_pane_bg

0x4ed6,	// (0x00047575) list_cmail_body_pane_g1

0x4edf,	// (0x0004757e) list_cmail_body_pane_t1

0x39ea,	// (0x00046089) list_single_cmail_header_editor_pane_bg_g1

0xe738,	// (0x00050dd7) list_single_cmail_header_editor_pane_bg_g1_copy1

0x39fa,	// (0x00046099) list_single_cmail_header_editor_pane_bg_g1_copy2

0x39f2,	// (0x00046091) list_single_cmail_header_editor_pane_bg_g1_copy3

0x3c3c,	// (0x000462db) list_single_cmail_header_editor_pane_bg_g1_copy4

0x3a1a,	// (0x000460b9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x3a0a,	// (0x000460a9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3a12,	// (0x000460b1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe718,	// (0x00050db7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xccc5,	// (0x0004f364) calenote_gesture_pane_ParamLimits

0xccc5,	// (0x0004f364) calenote_gesture_pane

0xccdd,	// (0x0004f37c) calenote_window_pane_ParamLimits

0xccdd,	// (0x0004f37c) calenote_window_pane

0xccf5,	// (0x0004f394) popup_note_window_cp01

0xccfe,	// (0x0004f39d) calenote_swipe_1_pane_ParamLimits

0xccfe,	// (0x0004f39d) calenote_swipe_1_pane

0xc777,	// (0x0004ee16) calenote_swipe_2_pane_ParamLimits

0xc777,	// (0x0004ee16) calenote_swipe_2_pane

0x4b76,	// (0x00047215) calenote_swipe_1_pane_g1_ParamLimits

0x4b76,	// (0x00047215) calenote_swipe_1_pane_g1

0x4b83,	// (0x00047222) calenote_swipe_1_pane_g2_ParamLimits

0x4b83,	// (0x00047222) calenote_swipe_1_pane_g2

0x0001,

0xfcf9,	// (0x00052398) calenote_swipe_1_pane_g_ParamLimits

0xfcf9,	// (0x00052398) calenote_swipe_1_pane_g

0xcd1a,	// (0x0004f3b9) calenote_swipe_1_pane_t1_ParamLimits

0xcd1a,	// (0x0004f3b9) calenote_swipe_1_pane_t1

0x4b76,	// (0x00047215) calenote_swipe_2_pane_g1_ParamLimits

0x4b76,	// (0x00047215) calenote_swipe_2_pane_g1

0xcd39,	// (0x0004f3d8) calenote_swipe_2_pane_g2_ParamLimits

0xcd39,	// (0x0004f3d8) calenote_swipe_2_pane_g2

0x0001,

0xfdd1,	// (0x00052470) calenote_swipe_2_pane_g_ParamLimits

0xfdd1,	// (0x00052470) calenote_swipe_2_pane_g

0xcd45,	// (0x0004f3e4) calenote_swipe_2_pane_t1_ParamLimits

0xcd45,	// (0x0004f3e4) calenote_swipe_2_pane_t1

0xdb8e,	// (0x0005022d) main_mup_navstr_pane

0x9c75,	// (0x0004c314) main_mup3_pane_t7_ParamLimits

0x9c75,	// (0x0004c314) main_mup3_pane_t7

0xa5ff,	// (0x0004cc9e) main_mp4_pane_g6_ParamLimits

0xa5ff,	// (0x0004cc9e) main_mp4_pane_g6

0xa941,	// (0x0004cfe0) main_image3_pane_t4_ParamLimits

0xa941,	// (0x0004cfe0) main_image3_pane_t4

0xcd6c,	// (0x0004f40b) popup_navstr_preview_pane_ParamLimits

0xcd6c,	// (0x0004f40b) popup_navstr_preview_pane

0xcd78,	// (0x0004f417) scroll_navstr_pane_ParamLimits

0xcd78,	// (0x0004f417) scroll_navstr_pane

0xdb8e,	// (0x0005022d) bg_popup_preview_window_pane_cp04

0xcd84,	// (0x0004f423) popup_navstr_preview_pane_t1

0xcd92,	// (0x0004f431) scroll_navstr_pane_g1_ParamLimits

0xcd92,	// (0x0004f431) scroll_navstr_pane_g1

0xcd9f,	// (0x0004f43e) scroll_navstr_pane_t1_ParamLimits

0xcd9f,	// (0x0004f43e) scroll_navstr_pane_t1

0xcd11,	// (0x0004f3b0) bg_button_pane_cp014

0xcd11,	// (0x0004f3b0) bg_button_pane_cp030

0x4ada,	// (0x00047179) list_double_fisheye_pane_g4_ParamLimits

0x4ada,	// (0x00047179) list_double_fisheye_pane_g4

0x4ae6,	// (0x00047185) list_double_fisheye_pane_g5_ParamLimits

0x4ae6,	// (0x00047185) list_double_fisheye_pane_g5

0x4e6d,	// (0x0004750c) sp_fs_scroll_pane_cp03

0x4c75,	// (0x00047314) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x4c81,	// (0x00047320) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd16,	// (0x000523b5) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x4c8d,	// (0x0004732c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x4e65,	// (0x00047504) sp_fs_scroll_pane_cp02

0xe42b,	// (0x00050aca) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe42b,	// (0x00050aca) popup_sp_fs_calendar_preview_list_single_pane

0xdb8e,	// (0x0005022d) main_cam6_pano_pane

0xecfa,	// (0x00051399) main_mup3_pane_ParamLimits

0xdb8e,	// (0x0005022d) main_phacti_pane

0xc355,	// (0x0004e9f4) bg_button_pane_cp11

0xc36d,	// (0x0004ea0c) main_mobtv_info_pane_g2_ParamLimits

0xc36d,	// (0x0004ea0c) main_mobtv_info_pane_g2

0x0001,

0xfc76,	// (0x00052315) main_mobtv_info_pane_g_ParamLimits

0xfc76,	// (0x00052315) main_mobtv_info_pane_g

0xc4f9,	// (0x0004eb98) sc_clock_pane_t5_ParamLimits

0xc4f9,	// (0x0004eb98) sc_clock_pane_t5

0xc583,	// (0x0004ec22) main_radioblah_pane_g1_ParamLimits

0x4a3f,	// (0x000470de) main_radioblah_pane_t3_ParamLimits

0x4a3f,	// (0x000470de) main_radioblah_pane_t3

0x4a57,	// (0x000470f6) main_radioblah_pane_t4_ParamLimits

0x4a57,	// (0x000470f6) main_radioblah_pane_t4

0xc5a1,	// (0x0004ec40) main_radioblah_text_pane_ParamLimits

0xc5a1,	// (0x0004ec40) main_radioblah_text_pane

0xc5ae,	// (0x0004ec4d) main_radioblah_info_pane_g1_ParamLimits

0xc63b,	// (0x0004ecda) main_radioblah_info_pane_t4_ParamLimits

0xc63b,	// (0x0004ecda) main_radioblah_info_pane_t4

0xecfa,	// (0x00051399) main_sp_fs_calendar_pane

0xcdb1,	// (0x0004f450) main_phacti_pane_g1

0xcdc2,	// (0x0004f461) phacti_note_pane_ParamLimits

0xcdc2,	// (0x0004f461) phacti_note_pane

0xcdd6,	// (0x0004f475) phacti_term_pane_ParamLimits

0xcdd6,	// (0x0004f475) phacti_term_pane

0xcdeb,	// (0x0004f48a) phacti_note_pane_t1_ParamLimits

0xcdeb,	// (0x0004f48a) phacti_note_pane_t1

0x4eed,	// (0x0004758c) phacti_term_pane_g1

0x4ef5,	// (0x00047594) phacti_term_pane_t1_ParamLimits

0x4ef5,	// (0x00047594) phacti_term_pane_t1

0xce02,	// (0x0004f4a1) popup_sp_fs_calendar_preview_list_single_pane_g1

0xce0a,	// (0x0004f4a9) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfddb,	// (0x0005247a) popup_sp_fs_calendar_preview_list_single_pane_g

0xce12,	// (0x0004f4b1) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xce12,	// (0x0004f4b1) popup_sp_fs_calendar_preview_list_single_pane_t1

0xce28,	// (0x0004f4c7) aid_popup_sp_fs_bg_corner_pane

0x2fd7,	// (0x00045676) popup_sp_fs_calendar_preview_bg_pane_g1

0xdb8e,	// (0x0005022d) popup_sp_fs_calendar_preview_bg_pane

0xce30,	// (0x0004f4cf) popup_sp_fs_calendar_preview_list_pane

0xecfa,	// (0x00051399) bg_main_sp_fs_cale_pane_ParamLimits

0xecfa,	// (0x00051399) bg_main_sp_fs_cale_pane

0x4f1f,	// (0x000475be) listscroll_cale_mrui_pane_ParamLimits

0x4f1f,	// (0x000475be) listscroll_cale_mrui_pane

0x4f33,	// (0x000475d2) listscroll_sp_fs_schedule_track_pane

0x4f3c,	// (0x000475db) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x4f3c,	// (0x000475db) main_sp_fs_ctrlbar_pane_cp01

0xce5f,	// (0x0004f4fe) main_sp_fs_ribbon_pane

0x4f4d,	// (0x000475ec) popup_sp_fs_cale_preview_window

0xce67,	// (0x0004f506) list_single_sp_fs_schedule_track_pane_ParamLimits

0xce67,	// (0x0004f506) list_single_sp_fs_schedule_track_pane

0x3952,	// (0x00045ff1) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3952,	// (0x00045ff1) bg_sp_fs_highlight_list_pane_cp03

0xce7c,	// (0x0004f51b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xce7c,	// (0x0004f51b) list_single_sp_fs_schedule_track_pane_g1

0xce88,	// (0x0004f527) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xce88,	// (0x0004f527) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfde0,	// (0x0005247f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfde0,	// (0x0005247f) list_single_sp_fs_schedule_track_pane_g

0xce94,	// (0x0004f533) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xce94,	// (0x0004f533) list_single_sp_fs_schedule_track_pane_t1

0xceac,	// (0x0004f54b) sp_fs_schedule_track_pane_ParamLimits

0xceac,	// (0x0004f54b) sp_fs_schedule_track_pane

0xcebc,	// (0x0004f55b) sp_fs_schedule_track_pane_g1

0xcec4,	// (0x0004f563) sp_fs_schedule_track_pane_g2

0xcecc,	// (0x0004f56b) sp_fs_schedule_track_pane_g3

0xced4,	// (0x0004f573) sp_fs_schedule_track_pane_g4

0xcedc,	// (0x0004f57b) sp_fs_schedule_track_pane_g5

0x0004,

0xfde5,	// (0x00052484) sp_fs_schedule_track_pane_g

0x39ea,	// (0x00046089) bg_sp_fs_schedule_viewer_highlight_g1

0xe738,	// (0x00050dd7) bg_sp_fs_schedule_viewer_highlight_g2

0x39f2,	// (0x00046091) bg_sp_fs_schedule_viewer_highlight_g3

0x39fa,	// (0x00046099) bg_sp_fs_schedule_viewer_highlight_g4

0x3c3c,	// (0x000462db) bg_sp_fs_schedule_viewer_highlight_g5

0x3a0a,	// (0x000460a9) bg_sp_fs_schedule_viewer_highlight_g6

0x3a12,	// (0x000460b1) bg_sp_fs_schedule_viewer_highlight_g7

0x3a1a,	// (0x000460b9) bg_sp_fs_schedule_viewer_highlight_g8

0xe718,	// (0x00050db7) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdf0,	// (0x0005248f) bg_sp_fs_schedule_viewer_highlight_g

0xdb8e,	// (0x0005022d) bg_main_sp_fs_ribbon_pane

0xab2c,	// (0x0004d1cb) main_sp_fs_ribbon_pane_g1

0xcee4,	// (0x0004f583) main_sp_fs_ribbon_pane_t1

0xcef3,	// (0x0004f592) main_sp_fs_ribbon_pane_t2

0xcf02,	// (0x0004f5a1) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe03,	// (0x000524a2) main_sp_fs_ribbon_pane_t

0xcf11,	// (0x0004f5b0) main_sp_fs_ribbon_scheduler_pane

0xcf19,	// (0x0004f5b8) bg_main_sp_fs_ribbon_pane_g1

0xcf22,	// (0x0004f5c1) bg_main_sp_fs_ribbon_pane_g2

0xcf2b,	// (0x0004f5ca) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe0a,	// (0x000524a9) bg_main_sp_fs_ribbon_pane_g

0xcf33,	// (0x0004f5d2) main_sp_fs_ribbon_scheduler_pane_g1

0xcf3c,	// (0x0004f5db) main_sp_fs_ribbon_scheduler_pane_g2

0xcf45,	// (0x0004f5e4) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe11,	// (0x000524b0) main_sp_fs_ribbon_scheduler_pane_g

0x4ab1,	// (0x00047150) list_cale_mrui_pane

0xcf4e,	// (0x0004f5ed) sp_fs_scroll_pane_cp07_ParamLimits

0xcf4e,	// (0x0004f5ed) sp_fs_scroll_pane_cp07

0xcf63,	// (0x0004f602) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcf63,	// (0x0004f602) bg_sp_fs_schedule_viewer_highlight

0xcf70,	// (0x0004f60f) list_single_sp_fs_schedule_track_pane_cp01

0xcf78,	// (0x0004f617) list_sp_fs_schedule_track_pane

0xcf80,	// (0x0004f61f) sp_fs_scroll_pane_cp06_ParamLimits

0xcf80,	// (0x0004f61f) sp_fs_scroll_pane_cp06

0x2fd7,	// (0x00045676) bgmain_sp_fs_calendar_pane_g1

0xcf92,	// (0x0004f631) list_single_cale_mrui_pane_ParamLimits

0xcf92,	// (0x0004f631) list_single_cale_mrui_pane

0x4f5c,	// (0x000475fb) list_single_cale_mrui_row_pane_ParamLimits

0x4f5c,	// (0x000475fb) list_single_cale_mrui_row_pane

0x4f69,	// (0x00047608) list_single_cale_mrui_row_pane_g1_ParamLimits

0x4f69,	// (0x00047608) list_single_cale_mrui_row_pane_g1

0x4fa1,	// (0x00047640) list_single_cale_mrui_row_pane_t1_ParamLimits

0x4fa1,	// (0x00047640) list_single_cale_mrui_row_pane_t1

0xcfb8,	// (0x0004f657) list_single_cale_mrui_row_pane_t2_ParamLimits

0xcfb8,	// (0x0004f657) list_single_cale_mrui_row_pane_t2

0x4fb3,	// (0x00047652) list_single_cale_mrui_row_pane_t3_ParamLimits

0x4fb3,	// (0x00047652) list_single_cale_mrui_row_pane_t3

0x4fe2,	// (0x00047681) list_single_cale_mrui_row_pane_t4_ParamLimits

0x4fe2,	// (0x00047681) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe1d,	// (0x000524bc) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe1d,	// (0x000524bc) list_single_cale_mrui_row_pane_t

0xd01e,	// (0x0004f6bd) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd01e,	// (0x0004f6bd) list_single_cmail_header_editor_pane_bg_cp01

0xd042,	// (0x0004f6e1) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd042,	// (0x0004f6e1) list_single_cmail_header_editor_pane_bg_cp02

0xd060,	// (0x0004f6ff) main_radioblah_text_pane_t1_ParamLimits

0xd060,	// (0x0004f6ff) main_radioblah_text_pane_t1

0xd079,	// (0x0004f718) cam6_indi_pane_cp01

0xd081,	// (0x0004f720) cam6_mode_pane_cp01

0xd089,	// (0x0004f728) cam6_pano_pane

0xd092,	// (0x0004f731) cam6_zoom_pane_cp01

0xd09a,	// (0x0004f739) cam6_pano_image_pane

0xd0a3,	// (0x0004f742) cam6_pano_pane_g1

0x47bd,	// (0x00046e5c) cam6_pano_pane_g2

0xd0ac,	// (0x0004f74b) cam6_pano_pane_g3

0xd0b5,	// (0x0004f754) cam6_pano_pane_g4

0x353d,	// (0x00045bdc) cam6_pano_pane_g5

0xd0be,	// (0x0004f75d) cam6_pano_pane_g6

0xd0c6,	// (0x0004f765) cam6_pano_pane_g7

0xd0ce,	// (0x0004f76d) cam6_pano_pane_g8

0xd0d7,	// (0x0004f776) cam6_pano_pane_g9

0x0008,

0xfe26,	// (0x000524c5) cam6_pano_pane_g

0xdb8e,	// (0x0005022d) main_browser_tag_pane

0xcd64,	// (0x0004f403) grid_navstr_albumart_pane

0xd0e0,	// (0x0004f77f) cell_navstr_albumart_pane_ParamLimits

0xd0e0,	// (0x0004f77f) cell_navstr_albumart_pane

0x189c,	// (0x00043f3b) cell_navstr_albumart_pane_g1

0x2979,	// (0x00045018) cell_navstr_albumart_pane_g2

0x2989,	// (0x00045028) cell_navstr_albumart_pane_g3

0x2981,	// (0x00045020) cell_navstr_albumart_pane_g4

0x0003,

0xfe39,	// (0x000524d8) cell_navstr_albumart_pane_g

0xd0f7,	// (0x0004f796) bt_list_pane_ParamLimits

0xd0f7,	// (0x0004f796) bt_list_pane

0xd10c,	// (0x0004f7ab) bt_list_pane_t1

0xd11b,	// (0x0004f7ba) bt_list_pane_t2

0x0001,

0xfe42,	// (0x000524e1) bt_list_pane_t

0xdb8e,	// (0x0005022d) main_cale_prevew_pane

0xd12a,	// (0x0004f7c9) popup_cale_preview_window_ParamLimits

0xd12a,	// (0x0004f7c9) popup_cale_preview_window

0xecfa,	// (0x00051399) bg_popup_preview_window_pane_cp05_ParamLimits

0xecfa,	// (0x00051399) bg_popup_preview_window_pane_cp05

0xd13f,	// (0x0004f7de) list_cale_preview_pane_ParamLimits

0xd13f,	// (0x0004f7de) list_cale_preview_pane

0xd14b,	// (0x0004f7ea) list_double_cale_preview_pane_ParamLimits

0xd14b,	// (0x0004f7ea) list_double_cale_preview_pane

0xd15c,	// (0x0004f7fb) list_single_cale_preview_pane_ParamLimits

0xd15c,	// (0x0004f7fb) list_single_cale_preview_pane

0xd170,	// (0x0004f80f) list_single_cale_preview_pane_g1

0xd178,	// (0x0004f817) list_single_cale_preview_pane_t1_ParamLimits

0xd178,	// (0x0004f817) list_single_cale_preview_pane_t1

0xd18d,	// (0x0004f82c) list_double_cale_preview_pane_g1

0xd195,	// (0x0004f834) list_double_cale_preview_pane_t1_ParamLimits

0xd195,	// (0x0004f834) list_double_cale_preview_pane_t1

0xd1aa,	// (0x0004f849) list_double_cale_preview_pane_t2_ParamLimits

0xd1aa,	// (0x0004f849) list_double_cale_preview_pane_t2

0x0001,

0xfe47,	// (0x000524e6) list_double_cale_preview_pane_t_ParamLimits

0xfe47,	// (0x000524e6) list_double_cale_preview_pane_t

0xdb8e,	// (0x0005022d) main_ezdial_pane

0xecfa,	// (0x00051399) main_sp_fs_email_pane_ParamLimits

0xc7dc,	// (0x0004ee7b) cmail_ddmenu_btn01_pane_ParamLimits

0xc7dc,	// (0x0004ee7b) cmail_ddmenu_btn01_pane

0xc7f9,	// (0x0004ee98) cmail_ddmenu_btn02_pane_ParamLimits

0xc7f9,	// (0x0004ee98) cmail_ddmenu_btn02_pane

0xc817,	// (0x0004eeb6) cmail_ddmenu_btn03_pane_ParamLimits

0xc817,	// (0x0004eeb6) cmail_ddmenu_btn03_pane

0xc843,	// (0x0004eee2) main_sp_fs_ctrlbar_pane_ParamLimits

0xc85b,	// (0x0004eefa) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcc49,	// (0x0004f2e8) list_cmail_body_pane_ParamLimits

0x4e87,	// (0x00047526) bg_button_pane_cp12

0x4e8f,	// (0x0004752e) list_single_cmail_header_detail_pane_g3_ParamLimits

0x4e8f,	// (0x0004752e) list_single_cmail_header_detail_pane_g3

0xcca1,	// (0x0004f340) list_single_cmail_header_detail_pane_t2_ParamLimits

0xcca1,	// (0x0004f340) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdcc,	// (0x0005246b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdcc,	// (0x0005246b) list_single_cmail_header_detail_pane_t

0x4f0a,	// (0x000475a9) phacti_term_pane_t2_ParamLimits

0x4f0a,	// (0x000475a9) phacti_term_pane_t2

0x0001,

0xfdd6,	// (0x00052475) phacti_term_pane_t_ParamLimits

0xfdd6,	// (0x00052475) phacti_term_pane_t

0xd1c2,	// (0x0004f861) aid_size_list_single_double

0xd1ce,	// (0x0004f86d) popup_ezdial_listscroll_window

0xd1e7,	// (0x0004f886) popup_number_entry_window_cp01

0x172d,	// (0x00043dcc) bg_popup_call_pane_cp09

0xd1f3,	// (0x0004f892) ezdial_list_pane

0xd1fb,	// (0x0004f89a) scroll_pane_cp23

0x2dc4,	// (0x00045463) bg_button_pane_cp028_ParamLimits

0x2dc4,	// (0x00045463) bg_button_pane_cp028

0xd203,	// (0x0004f8a2) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd203,	// (0x0004f8a2) cmail_ddmenu_btn01_pane_g1

0xd215,	// (0x0004f8b4) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd215,	// (0x0004f8b4) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe4c,	// (0x000524eb) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe4c,	// (0x000524eb) cmail_ddmenu_btn01_pane_g

0xd221,	// (0x0004f8c0) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd221,	// (0x0004f8c0) cmail_ddmenu_btn01_pane_t1

0x2b9c,	// (0x0004523b) bg_button_pane_cp029_ParamLimits

0x2b9c,	// (0x0004523b) bg_button_pane_cp029

0xd215,	// (0x0004f8b4) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd215,	// (0x0004f8b4) cmail_ddmenu_btn02_pane_g1

0xd242,	// (0x0004f8e1) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd242,	// (0x0004f8e1) cmail_ddmenu_btn02_pane_t1

0x3952,	// (0x00045ff1) bg_button_pane_cp031_ParamLimits

0x3952,	// (0x00045ff1) bg_button_pane_cp031

0xd215,	// (0x0004f8b4) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd215,	// (0x0004f8b4) cmail_ddmenu_btn03_pane_g1

0xd242,	// (0x0004f8e1) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd242,	// (0x0004f8e1) cmail_ddmenu_btn03_pane_t1

0xa7f0,	// (0x0004ce8f) cell_dialer2_keypad_pane_t1_ParamLimits

0xa80a,	// (0x0004cea9) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa80a,	// (0x0004cea9) cell_dialer2_keypad_pane_t1_copy1

0xc21c,	// (0x0004e8bb) ncimui_group_button_pane

0xecfa,	// (0x00051399) main_sp_fs_calendar_pane_ParamLimits

0xcc49,	// (0x0004f2e8) list_single_cmail_header_caption_pane_ParamLimits

0x3f6e,	// (0x0004660d) aid_recal_txt_sm_pane

0xdb8e,	// (0x0005022d) mian_recal_day_pane

0x4f4d,	// (0x000475ec) popup_sp_fs_cale_preview_window_ParamLimits

0xdb8e,	// (0x0005022d) list_recal_day_pane

0x501a,	// (0x000476b9) list_single_recal_day_pane_ParamLimits

0x501a,	// (0x000476b9) list_single_recal_day_pane

0xd276,	// (0x0004f915) list_single_recal_day_pane_g1_ParamLimits

0xd276,	// (0x0004f915) list_single_recal_day_pane_g1

0x502c,	// (0x000476cb) list_single_recal_day_pane_g2_ParamLimits

0x502c,	// (0x000476cb) list_single_recal_day_pane_g2

0x5038,	// (0x000476d7) list_single_recal_day_pane_g3_ParamLimits

0x5038,	// (0x000476d7) list_single_recal_day_pane_g3

0xd282,	// (0x0004f921) list_single_recal_day_pane_g4_ParamLimits

0xd282,	// (0x0004f921) list_single_recal_day_pane_g4

0x5044,	// (0x000476e3) list_single_recal_day_pane_g5_ParamLimits

0x5044,	// (0x000476e3) list_single_recal_day_pane_g5

0x5050,	// (0x000476ef) list_single_recal_day_pane_g6_ParamLimits

0x5050,	// (0x000476ef) list_single_recal_day_pane_g6

0x0005,

0xfe5b,	// (0x000524fa) list_single_recal_day_pane_g_ParamLimits

0xfe5b,	// (0x000524fa) list_single_recal_day_pane_g

0x505c,	// (0x000476fb) list_single_recal_day_pane_t1

0x506a,	// (0x00047709) list_single_recal_day_pane_t2

0x0001,

0xfe68,	// (0x00052507) list_single_recal_day_pane_t

0xd28e,	// (0x0004f92d) ncimui_query_button_pane_ParamLimits

0xd28e,	// (0x0004f92d) ncimui_query_button_pane

0xd29e,	// (0x0004f93d) ncimui_query_button_pane_t1_ParamLimits

0xd29e,	// (0x0004f93d) ncimui_query_button_pane_t1

0xd2b1,	// (0x0004f950) ncimui_query_button_pane_t2_ParamLimits

0xd2b1,	// (0x0004f950) ncimui_query_button_pane_t2

0x0001,

0xfe6d,	// (0x0005250c) ncimui_query_button_pane_t_ParamLimits

0xfe6d,	// (0x0005250c) ncimui_query_button_pane_t

0xd2c4,	// (0x0004f963) query_button_pane_ParamLimits

0xd2c4,	// (0x0004f963) query_button_pane

0xdb8e,	// (0x0005022d) bg_button_pane_cp0028

0xd2d1,	// (0x0004f970) query_button_pane_t1

0x8e0e,	// (0x0004b4ad) main_tport_pane_ParamLimits

0xcb94,	// (0x0004f233) bg_popup_window_pane_cp01_ParamLimits

0xcb94,	// (0x0004f233) bg_popup_window_pane_cp01

0xcba1,	// (0x0004f240) heading_pane_cp08_ParamLimits

0xcba1,	// (0x0004f240) heading_pane_cp08

0xcbad,	// (0x0004f24c) heading_pane_cp07_ParamLimits

0xcbad,	// (0x0004f24c) heading_pane_cp07

0x4e3f,	// (0x000474de) cell_tport_appsw_pane_g2

0x0002,

0xfdb9,	// (0x00052458) cell_tport_appsw_pane_g

0x869a,	// (0x0004ad39) input_candi_list_open_g1

0xe8e0,	// (0x00050f7f) list_cale_time_pane_g6_ParamLimits

0xe8e0,	// (0x00050f7f) list_cale_time_pane_g6

0x97af,	// (0x0004be4e) aid_size_touch_calib_1_ParamLimits

0x97af,	// (0x0004be4e) aid_size_touch_calib_1

0x97bb,	// (0x0004be5a) aid_size_touch_calib_2_ParamLimits

0x97bb,	// (0x0004be5a) aid_size_touch_calib_2

0x97c7,	// (0x0004be66) aid_size_touch_calib_3_ParamLimits

0x97c7,	// (0x0004be66) aid_size_touch_calib_3

0x97d5,	// (0x0004be74) aid_size_touch_calib_4_ParamLimits

0x97d5,	// (0x0004be74) aid_size_touch_calib_4

0x97e3,	// (0x0004be82) main_touch_calib_button_group_pane_ParamLimits

0x97e3,	// (0x0004be82) main_touch_calib_button_group_pane

0x97f0,	// (0x0004be8f) main_touch_calib_pane_g1_ParamLimits

0x97fc,	// (0x0004be9b) main_touch_calib_pane_g2_ParamLimits

0x9808,	// (0x0004bea7) main_touch_calib_pane_g3_ParamLimits

0x9814,	// (0x0004beb3) main_touch_calib_pane_g4_ParamLimits

0xf797,	// (0x00051e36) main_touch_calib_pane_g_ParamLimits

0x9820,	// (0x0004bebf) main_touch_calib_pane_t1_ParamLimits

0x9835,	// (0x0004bed4) main_touch_calib_pane_t2_ParamLimits

0x984a,	// (0x0004bee9) main_touch_calib_pane_t3_ParamLimits

0x985c,	// (0x0004befb) main_touch_calib_pane_t4_ParamLimits

0x986e,	// (0x0004bf0d) main_touch_calib_pane_t5_ParamLimits

0xf7a0,	// (0x00051e3f) main_touch_calib_pane_t_ParamLimits

0x3368,	// (0x00045a07) list_single_fp_cale_pane_g3_ParamLimits

0x3368,	// (0x00045a07) list_single_fp_cale_pane_g3

0xac01,	// (0x0004d2a0) bg_button_pane_cp012_ParamLimits

0xac01,	// (0x0004d2a0) bg_vkb2_func_pane_cp03_ParamLimits

0xb501,	// (0x0004dba0) cell_vitu2_function_top_pane_g1_ParamLimits

0xac01,	// (0x0004d2a0) bg_vkb2_func_pane_cp04_ParamLimits

0xc1cf,	// (0x0004e86e) main_ncimui_button_group_pane_ParamLimits

0xc1cf,	// (0x0004e86e) main_ncimui_button_group_pane

0xc20a,	// (0x0004e8a9) main_ncimui_pane_t3_ParamLimits

0xc20a,	// (0x0004e8a9) main_ncimui_pane_t3

0xcdb9,	// (0x0004f458) phacti_button_group_pane

0xd1c2,	// (0x0004f861) aid_size_list_single_double_ParamLimits

0xd1ce,	// (0x0004f86d) popup_ezdial_listscroll_window_ParamLimits

0xd1e7,	// (0x0004f886) popup_number_entry_window_cp01_ParamLimits

0xd2df,	// (0x0004f97e) phacti_button_pane_ParamLimits

0xd2df,	// (0x0004f97e) phacti_button_pane

0xdb8e,	// (0x0005022d) bg_button_pane_cp14

0xd2ee,	// (0x0004f98d) phacti_button_pane_t1

0xd2fc,	// (0x0004f99b) main_touch_calib_button_pane_ParamLimits

0xd2fc,	// (0x0004f99b) main_touch_calib_button_pane

0xe314,	// (0x000509b3) bg_button_pane_cp18_ParamLimits

0xe314,	// (0x000509b3) bg_button_pane_cp18

0xd30c,	// (0x0004f9ab) main_touch_calib_button_pane_t1_ParamLimits

0xd30c,	// (0x0004f9ab) main_touch_calib_button_pane_t1

0xd322,	// (0x0004f9c1) main_touch_calib_button_pane_t2_ParamLimits

0xd322,	// (0x0004f9c1) main_touch_calib_button_pane_t2

0x0001,

0xfe72,	// (0x00052511) main_touch_calib_button_pane_t_ParamLimits

0xfe72,	// (0x00052511) main_touch_calib_button_pane_t

0xdb8e,	// (0x0005022d) cell_ncimui_button_pane

0xdb8e,	// (0x0005022d) bg_button_pane_cp032

0xd340,	// (0x0004f9df) cell_ncimui_button_pane_t1

0xa85c,	// (0x0004cefb) image3_infobar_pane_ParamLimits

0xa85c,	// (0x0004cefb) image3_infobar_pane

0xc519,	// (0x0004ebb8) fs_bigclock_status_pane_ParamLimits

0xc519,	// (0x0004ebb8) fs_bigclock_status_pane

0xc526,	// (0x0004ebc5) main_fs_bigclock_clock_pane_ParamLimits

0xc526,	// (0x0004ebc5) main_fs_bigclock_clock_pane

0xc536,	// (0x0004ebd5) main_fs_bigclock_indi_pane_ParamLimits

0xc536,	// (0x0004ebd5) main_fs_bigclock_indi_pane

0xc55b,	// (0x0004ebfa) main_fs_bigclock_swipe_pane_ParamLimits

0xc55b,	// (0x0004ebfa) main_fs_bigclock_swipe_pane

0xdb8e,	// (0x0005022d) main_fs_clock_dumped_data

0x48ca,	// (0x00046f69) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x48ca,	// (0x00046f69) list_single_fs_bigclock_indicator_pane_g1

0x48e4,	// (0x00046f83) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x48e4,	// (0x00046f83) list_single_fs_bigclock_indicator_pane_g2

0x48fe,	// (0x00046f9d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x48fe,	// (0x00046f9d) list_single_fs_bigclock_indicator_pane_g3

0x4918,	// (0x00046fb7) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x4918,	// (0x00046fb7) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcaa,	// (0x00052349) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcaa,	// (0x00052349) list_single_fs_bigclock_indicator_pane_g

0x493c,	// (0x00046fdb) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x493c,	// (0x00046fdb) list_single_fs_bigclock_indicator_pane_t1

0x4964,	// (0x00047003) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x4964,	// (0x00047003) list_single_fs_bigclock_indicator_pane_t2

0x498c,	// (0x0004702b) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x498c,	// (0x0004702b) list_single_fs_bigclock_indicator_pane_t3

0x49b4,	// (0x00047053) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x49b4,	// (0x00047053) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcb5,	// (0x00052354) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcb5,	// (0x00052354) list_single_fs_bigclock_indicator_pane_t

0xd34e,	// (0x0004f9ed) image3_infobar_fav_pane_ParamLimits

0xd34e,	// (0x0004f9ed) image3_infobar_fav_pane

0xd35e,	// (0x0004f9fd) image3_infobar_loc_pane_ParamLimits

0xd35e,	// (0x0004f9fd) image3_infobar_loc_pane

0xd372,	// (0x0004fa11) image3_infobar_time_pane_ParamLimits

0xd372,	// (0x0004fa11) image3_infobar_time_pane

0x2fd7,	// (0x00045676) image3_infobar_time_pane_g1

0xd382,	// (0x0004fa21) image3_infobar_time_pane_t1

0x2fd7,	// (0x00045676) image3_infobar_loc_pane_g1

0xd390,	// (0x0004fa2f) image3_infobar_loc_pane_g2

0x0001,

0xfe77,	// (0x00052516) image3_infobar_loc_pane_g

0xd398,	// (0x0004fa37) image3_infobar_loc_pane_t1

0x2fd7,	// (0x00045676) image3_infobar_fav_pane_g1

0xd3a6,	// (0x0004fa45) image3_infobar_fav_pane_g2

0x0001,

0xfe7c,	// (0x0005251b) image3_infobar_fav_pane_g

0xd3ae,	// (0x0004fa4d) fs_bigclock_status_battery_pane

0xd3b7,	// (0x0004fa56) fs_bigclock_status_signal_pane

0xd3c0,	// (0x0004fa5f) fs_bigclock_status_title_pane

0xd3c9,	// (0x0004fa68) fs_bigclock_status_signal_pane_g1

0xd3d2,	// (0x0004fa71) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe81,	// (0x00052520) fs_bigclock_status_signal_pane_g

0xd3da,	// (0x0004fa79) fs_bigclock_status_battery_pane_g1

0xd3e3,	// (0x0004fa82) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe86,	// (0x00052525) fs_bigclock_status_battery_pane_g

0xd3eb,	// (0x0004fa8a) fs_bigclock_status_title_pane_t1

0x2fd7,	// (0x00045676) main_fs_bigclock_clock_pane_g1

0xd3f9,	// (0x0004fa98) main_fs_bigclock_clock_pane_g2

0xd3f9,	// (0x0004fa98) main_fs_bigclock_clock_pane_g3

0xd3f9,	// (0x0004fa98) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe8b,	// (0x0005252a) main_fs_bigclock_clock_pane_g

0xd401,	// (0x0004faa0) main_fs_bigclock_clock_pane_t1

0xd40f,	// (0x0004faae) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe94,	// (0x00052533) main_fs_bigclock_clock_pane_t

0xd41e,	// (0x0004fabd) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd41e,	// (0x0004fabd) list_single_fs_bigclock_indicator_pane

0xd42f,	// (0x0004face) list_single_fs_bigclock_pane_ParamLimits

0xd42f,	// (0x0004face) list_single_fs_bigclock_pane

0xd496,	// (0x0004fb35) main_fs_bigclock_indicator_pane_t1

0xd4a5,	// (0x0004fb44) list_single_fs_bigclock_pane_g1

0xd4ad,	// (0x0004fb4c) list_single_fs_bigclock_pane_t1

0x2fd7,	// (0x00045676) main_fs_bigclock_swipe_pane_g1

0xd4eb,	// (0x0004fb8a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfea5,	// (0x00052544) main_fs_bigclock_swipe_pane_g

0xd4f3,	// (0x0004fb92) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd4f3,	// (0x0004fb92) main_fs_bigclock_swipe_pane_t1

0x7f8e,	// (0x0004a62d) call_type_pane_ParamLimits

0xdb8e,	// (0x0005022d) main_btmg_pane

0x4f95,	// (0x00047634) list_single_cale_mrui_row_pane_g2_ParamLimits

0x4f95,	// (0x00047634) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe18,	// (0x000524b7) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe18,	// (0x000524b7) list_single_cale_mrui_row_pane_g

0xd266,	// (0x0004f905) list_recal_vselct_arw_lo_pane

0xd26e,	// (0x0004f90d) list_recal_vselct_arw_up_pane

0x5011,	// (0x000476b0) list_recal_vselct_pane

0xd510,	// (0x0004fbaf) btmg_button_pane

0xd518,	// (0x0004fbb7) main_btmg_pane_g1

0xdb8e,	// (0x0005022d) bg_button_pane_cp044

0xd520,	// (0x0004fbbf) btmg_button_pane_t1

0x2b94,	// (0x00045233) aid_listscroll_gen

0xecfa,	// (0x00051399) main_cntbar_detail_pane

0x4e5d,	// (0x000474fc) list_cmail_folder_pane

0x4e6d,	// (0x0004750c) sp_fs_scroll_pane_cp03_ParamLimits

0xcc49,	// (0x0004f2e8) list_single_fs_dyc_pane_cp01_ParamLimits

0xcc49,	// (0x0004f2e8) list_single_fs_dyc_pane_cp01

0xd52e,	// (0x0004fbcd) aid_size_cmail_indent

0x3f77,	// (0x00046616) list_single_dyc_row_pane_cp01

0xd551,	// (0x0004fbf0) cntbar_detail_list_pane_ParamLimits

0xd551,	// (0x0004fbf0) cntbar_detail_list_pane

0xd587,	// (0x0004fc26) main_cntbar_detail_cont_pane_ParamLimits

0xd587,	// (0x0004fc26) main_cntbar_detail_cont_pane

0xd593,	// (0x0004fc32) scroll_pane_cp032_ParamLimits

0xd593,	// (0x0004fc32) scroll_pane_cp032

0xd59f,	// (0x0004fc3e) cntbar_detail_list_event_pane_ParamLimits

0xd59f,	// (0x0004fc3e) cntbar_detail_list_event_pane

0xd55d,	// (0x0004fbfc) cntbar_detail_list_shct_pane

0xd5af,	// (0x0004fc4e) aid_list_gen

0xe419,	// (0x00050ab8) aid_scroll

0x3f4c,	// (0x000465eb) aid_size_touch_scroll_bar

0x5078,	// (0x00047717) aid_list_double

0xd5b8,	// (0x0004fc57) aid_list_single

0x3fd8,	// (0x00046677) aid_list_single_lg

0x5081,	// (0x00047720) aid_list_z_g_a_sm

0xd5c1,	// (0x0004fc60) aid_list_z_g_d

0xd5c9,	// (0x0004fc68) aid_txt_z_prm

0x5089,	// (0x00047728) aid_txt_z_prm_cp01

0x5097,	// (0x00047736) aid_txt_z_sec

0xd5d7,	// (0x0004fc76) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd5d7,	// (0x0004fc76) main_cntbar_detail_cont_pane_g1

0xd5e4,	// (0x0004fc83) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd5e4,	// (0x0004fc83) main_cntbar_detail_cont_pane_g2

0x0001,

0xfeaa,	// (0x00052549) main_cntbar_detail_cont_pane_g_ParamLimits

0xfeaa,	// (0x00052549) main_cntbar_detail_cont_pane_g

0xd5f0,	// (0x0004fc8f) main_cntbar_detail_cont_pane_t1

0xd5fe,	// (0x0004fc9d) main_cntbar_detail_cont_pane_t2

0xd60c,	// (0x0004fcab) main_cntbar_detail_cont_pane_t3

0x0002,

0xfeaf,	// (0x0005254e) main_cntbar_detail_cont_pane_t

0xd61a,	// (0x0004fcb9) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd61a,	// (0x0004fcb9) cell_cntbar_detail_list_shct_pane

0xd62c,	// (0x0004fccb) cntbar_detail_list_shct_pane_g1

0xd635,	// (0x0004fcd4) cntbar_detail_list_shct_pane_g2

0x0001,

0xfeb6,	// (0x00052555) cntbar_detail_list_shct_pane_g

0xd63e,	// (0x0004fcdd) cntbar_detail_list_event_pane_g1_ParamLimits

0xd63e,	// (0x0004fcdd) cntbar_detail_list_event_pane_g1

0xd64a,	// (0x0004fce9) cntbar_detail_list_event_pane_g2_ParamLimits

0xd64a,	// (0x0004fce9) cntbar_detail_list_event_pane_g2

0x0005,

0xfebb,	// (0x0005255a) cntbar_detail_list_event_pane_g_ParamLimits

0xfebb,	// (0x0005255a) cntbar_detail_list_event_pane_g

0xd6b6,	// (0x0004fd55) cntbar_detail_list_event_pane_t1_ParamLimits

0xd6b6,	// (0x0004fd55) cntbar_detail_list_event_pane_t1

0xd6cb,	// (0x0004fd6a) cntbar_detail_list_event_pane_t2_ParamLimits

0xd6cb,	// (0x0004fd6a) cntbar_detail_list_event_pane_t2

0x0002,

0xfec8,	// (0x00052567) cntbar_detail_list_event_pane_t_ParamLimits

0xfec8,	// (0x00052567) cntbar_detail_list_event_pane_t

0x2fd7,	// (0x00045676) cell_cntbar_detail_list_shct_pane_g1

0x16ec,	// (0x00043d8b) navi_pane_mv_g3

0xecfa,	// (0x00051399) main_cntbar_detail_pane_ParamLimits

0xdb8e,	// (0x0005022d) main_notif_wgt_pane

0xa54a,	// (0x0004cbe9) aid_tch_main_mp4_pane_g4

0xa771,	// (0x0004ce10) popup_slider_window_cp02

0x5011,	// (0x000476b0) list_recal_day_event_pane

0xd537,	// (0x0004fbd6) cntbar_detail_btn_pane_ParamLimits

0xd537,	// (0x0004fbd6) cntbar_detail_btn_pane

0xd543,	// (0x0004fbe2) cntbar_detail_btn_pane_cp01_ParamLimits

0xd543,	// (0x0004fbe2) cntbar_detail_btn_pane_cp01

0xd55d,	// (0x0004fbfc) cntbar_detail_list_shct_pane_ParamLimits

0xd569,	// (0x0004fc08) cntbar_detail_pane_g1_ParamLimits

0xd569,	// (0x0004fc08) cntbar_detail_pane_g1

0xd575,	// (0x0004fc14) cntbar_detail_pane_t1_ParamLimits

0xd575,	// (0x0004fc14) cntbar_detail_pane_t1

0xd656,	// (0x0004fcf5) cntbar_detail_list_event_pane_g3_ParamLimits

0xd656,	// (0x0004fcf5) cntbar_detail_list_event_pane_g3

0xd66e,	// (0x0004fd0d) cntbar_detail_list_event_pane_g4_ParamLimits

0xd66e,	// (0x0004fd0d) cntbar_detail_list_event_pane_g4

0xd686,	// (0x0004fd25) cntbar_detail_list_event_pane_g5_ParamLimits

0xd686,	// (0x0004fd25) cntbar_detail_list_event_pane_g5

0xd69e,	// (0x0004fd3d) cntbar_detail_list_event_pane_g6_ParamLimits

0xd69e,	// (0x0004fd3d) cntbar_detail_list_event_pane_g6

0xd6e0,	// (0x0004fd7f) cntbar_detail_list_event_pane_t3_ParamLimits

0xd6e0,	// (0x0004fd7f) cntbar_detail_list_event_pane_t3

0xd6f2,	// (0x0004fd91) popup_notif_wgt_window_ParamLimits

0xd6f2,	// (0x0004fd91) popup_notif_wgt_window

0xd700,	// (0x0004fd9f) popup_submenu_window_cp01_ParamLimits

0xd700,	// (0x0004fd9f) popup_submenu_window_cp01

0x172d,	// (0x00043dcc) bg_popup_window_pane_cp10

0xd70c,	// (0x0004fdab) listscroll_notif_wgt_pane

0xd714,	// (0x0004fdb3) list_notif_wgt_window

0xd71d,	// (0x0004fdbc) scroll_pane_cp033

0xd726,	// (0x0004fdc5) list_notif_wgt_row_pane_ParamLimits

0xd726,	// (0x0004fdc5) list_notif_wgt_row_pane

0xd738,	// (0x0004fdd7) aid_size_list_notif_wgt_del

0xd741,	// (0x0004fde0) list_notif_wgt_row_pane_g1

0xd749,	// (0x0004fde8) list_notif_wgt_row_pane_g2

0xd751,	// (0x0004fdf0) list_notif_wgt_row_pane_g3

0x0002,

0xfecf,	// (0x0005256e) list_notif_wgt_row_pane_g

0xd75a,	// (0x0004fdf9) list_notif_wgt_row_pane_t1

0xd768,	// (0x0004fe07) list_notif_wgt_row_pane_t2

0xd776,	// (0x0004fe15) list_notif_wgt_row_pane_t3

0x0002,

0xfed6,	// (0x00052575) list_notif_wgt_row_pane_t

0x3c44,	// (0x000462e3) list_recal_day_event_pane_g1

0xd784,	// (0x0004fe23) list_recal_day_event_pane_t1

0xdb8e,	// (0x0005022d) bg_button_pane_cp045

0xd793,	// (0x0004fe32) cntbar_detail_btn_pane_t1

0x2b9c,	// (0x0004523b) main_callh_pane_ParamLimits

0x2b9c,	// (0x0004523b) main_callh_pane

0xdb8e,	// (0x0005022d) main_coverflow0_pane

0xdb8e,	// (0x0005022d) main_wgtman_pane

0xc56d,	// (0x0004ec0c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc56d,	// (0x0004ec0c) main_fs_bigclock_unlock_btn_pane

0x4e37,	// (0x000474d6) bg_button_pane_cp16

0x4e47,	// (0x000474e6) cell_tport_appsw_pane_g3

0xd7a1,	// (0x0004fe40) cf0_flow_pane_ParamLimits

0xd7a1,	// (0x0004fe40) cf0_flow_pane

0xd7b0,	// (0x0004fe4f) listscroll_cf0_pane

0xd7b9,	// (0x0004fe58) main_cf0_pane_g1

0xd7c3,	// (0x0004fe62) main_cf0_pane_t1_ParamLimits

0xd7c3,	// (0x0004fe62) main_cf0_pane_t1

0xd7d5,	// (0x0004fe74) main_cf0_pane_t2_ParamLimits

0xd7d5,	// (0x0004fe74) main_cf0_pane_t2

0x0001,

0xfedd,	// (0x0005257c) main_cf0_pane_t_ParamLimits

0xfedd,	// (0x0005257c) main_cf0_pane_t

0xd7e7,	// (0x0004fe86) scroll_pane_cp11

0xd7f0,	// (0x0004fe8f) cf0_flow_pane_g1

0xd7f8,	// (0x0004fe97) cf0_flow_pane_g2

0x0001,

0xfee2,	// (0x00052581) cf0_flow_pane_g

0xd800,	// (0x0004fe9f) cf0_flow_pane_t1

0xdb8e,	// (0x0005022d) main_call6_pane

0xdb8e,	// (0x0005022d) main_calllock_pane

0xd80e,	// (0x0004fead) call6_btn_grp_pane_ParamLimits

0xd80e,	// (0x0004fead) call6_btn_grp_pane

0xd81b,	// (0x0004feba) call6_pane_g1_ParamLimits

0xd81b,	// (0x0004feba) call6_pane_g1

0xd828,	// (0x0004fec7) popup_call6_1st_window_ParamLimits

0xd828,	// (0x0004fec7) popup_call6_1st_window

0xd834,	// (0x0004fed3) popup_call6_2nd_window_ParamLimits

0xd834,	// (0x0004fed3) popup_call6_2nd_window

0xd840,	// (0x0004fedf) cell_call6_btn_pane_ParamLimits

0xd840,	// (0x0004fedf) cell_call6_btn_pane

0x172d,	// (0x00043dcc) bg_popup_call2_in_pane_cp03

0xd84f,	// (0x0004feee) popup_call6_1st_window_g1

0xd857,	// (0x0004fef6) popup_call6_1st_window_g2

0xd85f,	// (0x0004fefe) popup_call6_1st_window_g3

0x0002,

0xfee7,	// (0x00052586) popup_call6_1st_window_g

0xd867,	// (0x0004ff06) popup_call6_1st_window_t1

0xd876,	// (0x0004ff15) popup_call6_1st_window_t2

0xd884,	// (0x0004ff23) popup_call6_1st_window_t3

0x0002,

0xfeee,	// (0x0005258d) popup_call6_1st_window_t

0x172d,	// (0x00043dcc) bg_popup_call2_in_pane_cp04

0xd84f,	// (0x0004feee) popup_call6_2nd_window_g1

0xd857,	// (0x0004fef6) popup_call6_2nd_window_g2

0xd85f,	// (0x0004fefe) popup_call6_2nd_window_g3

0x0002,

0xfee7,	// (0x00052586) popup_call6_2nd_window_g

0xd867,	// (0x0004ff06) popup_call6_2nd_window_t1

0xdb8e,	// (0x0005022d) bg_button_pane_cp15

0xd892,	// (0x0004ff31) cell_call6_btn_pane_g1

0xd89b,	// (0x0004ff3a) cell_call6_btn_pane_t1

0xd8aa,	// (0x0004ff49) listscroll_wgtman_pane_ParamLimits

0xd8aa,	// (0x0004ff49) listscroll_wgtman_pane

0xd8c4,	// (0x0004ff63) wgtman_btn_pane_ParamLimits

0xd8c4,	// (0x0004ff63) wgtman_btn_pane

0xecb9,	// (0x00051358) aid_scroll_copy1

0xd8f7,	// (0x0004ff96) list_wgtman_pane

0xd901,	// (0x0004ffa0) wgtman_btn_pane_g1_ParamLimits

0xd901,	// (0x0004ffa0) wgtman_btn_pane_g1

0xd929,	// (0x0004ffc8) wgtman_btn_pane_t1_ParamLimits

0xd929,	// (0x0004ffc8) wgtman_btn_pane_t1

0xd960,	// (0x0004ffff) wgtman_btn_pane_t2_ParamLimits

0xd960,	// (0x0004ffff) wgtman_btn_pane_t2

0x0001,

0xfef5,	// (0x00052594) wgtman_btn_pane_t_ParamLimits

0xfef5,	// (0x00052594) wgtman_btn_pane_t

0xd977,	// (0x00050016) listrow_wgtman_pane_ParamLimits

0xd977,	// (0x00050016) listrow_wgtman_pane

0xd988,	// (0x00050027) listrow_wgtman_pane_g1

0xd991,	// (0x00050030) listrow_wgtman_pane_g2

0x0001,

0xfefa,	// (0x00052599) listrow_wgtman_pane_g

0xd999,	// (0x00050038) listrow_wgtman_pane_t1

0xd9a7,	// (0x00050046) listrow_wgtman_pane_t2

0x0001,

0xfeff,	// (0x0005259e) listrow_wgtman_pane_t

0xd9b5,	// (0x00050054) wait_bar_pane_cp09

0xd9bd,	// (0x0005005c) main_calllock_btn_pane

0xd9c5,	// (0x00050064) main_calllock_pane_g1

0xdb8e,	// (0x0005022d) bg_button_pane_cp17

0xd9ce,	// (0x0005006d) main_calllock_btn_pane_g1

0xd9d7,	// (0x00050076) main_calllock_btn_pane_t1

0xdb8e,	// (0x0005022d) main_dialer3_pane

0xdb8e,	// (0x0005022d) main_fmrd2_pane

0x2fd7,	// (0x00045676) main_fs_bigclock_unlock_btn_pane_g1

0xd9ee,	// (0x0005008d) main_fs_bigclock_unlock_btn_pane_t1

0xd9fc,	// (0x0005009b) area_fmrd2_info_pane_ParamLimits

0xd9fc,	// (0x0005009b) area_fmrd2_info_pane

0xda08,	// (0x000500a7) area_fmrd2_visual_pane_ParamLimits

0xda08,	// (0x000500a7) area_fmrd2_visual_pane

0xda16,	// (0x000500b5) fmrd2_indi_pane_ParamLimits

0xda16,	// (0x000500b5) fmrd2_indi_pane

0xda23,	// (0x000500c2) area_fmrd2_visual_pane_g1

0xda2b,	// (0x000500ca) area_fmrd2_visual_pane_t1

0xda39,	// (0x000500d8) area_fmrd2_visual_pane_t2

0xda47,	// (0x000500e6) area_fmrd2_visual_pane_t3

0x0002,

0xff09,	// (0x000525a8) area_fmrd2_visual_pane_t

0xda55,	// (0x000500f4) area_fmrd2_info_pane_g1

0xda5d,	// (0x000500fc) area_fmrd2_info_pane_t1

0xda6b,	// (0x0005010a) area_fmrd2_info_pane_t2

0xda79,	// (0x00050118) area_fmrd2_info_pane_t3

0xda87,	// (0x00050126) area_fmrd2_info_pane_t4

0x0003,

0xff10,	// (0x000525af) area_fmrd2_info_pane_t

0xda95,	// (0x00050134) fmrd2_indi_pane_t1

0xdaa3,	// (0x00050142) fmrd2_indi_pane_t2

0xdab1,	// (0x00050150) fmrd2_indi_pane_t3

0x0002,

0xff19,	// (0x000525b8) fmrd2_indi_pane_t

0x4927,	// (0x00046fc6) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x4927,	// (0x00046fc6) list_single_fs_bigclock_indicator_pane_g5

0x49c9,	// (0x00047068) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x49c9,	// (0x00047068) list_single_fs_bigclock_indicator_pane_t5

0xce38,	// (0x0004f4d7) aid_cell_bcale_month_pane_ParamLimits

0xce38,	// (0x0004f4d7) aid_cell_bcale_month_pane

0xce44,	// (0x0004f4e3) bcale_month_pane_ParamLimits

0xce44,	// (0x0004f4e3) bcale_month_pane

0xce50,	// (0x0004f4ef) bcale_preview_pane_ParamLimits

0xce50,	// (0x0004f4ef) bcale_preview_pane

0xd4ad,	// (0x0004fb4c) list_single_fs_bigclock_pane_t1_ParamLimits

0xd4c7,	// (0x0004fb66) list_single_fs_bigclock_pane_t2_ParamLimits

0xd4c7,	// (0x0004fb66) list_single_fs_bigclock_pane_t2

0x0001,

0xfea0,	// (0x0005253f) list_single_fs_bigclock_pane_t_ParamLimits

0xfea0,	// (0x0005253f) list_single_fs_bigclock_pane_t

0xd9e6,	// (0x00050085) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff04,	// (0x000525a3) main_fs_bigclock_unlock_btn_pane_g

0xdabf,	// (0x0005015e) aid_dia3_key_size_ParamLimits

0xdabf,	// (0x0005015e) aid_dia3_key_size

0xed49,	// (0x000513e8) aid_dia3_listrow_size_ParamLimits

0xed49,	// (0x000513e8) aid_dia3_listrow_size

0xed57,	// (0x000513f6) dia3_keypad_fun_pane_ParamLimits

0xed57,	// (0x000513f6) dia3_keypad_fun_pane

0xed63,	// (0x00051402) dia3_keypad_num_pane_ParamLimits

0xed63,	// (0x00051402) dia3_keypad_num_pane

0xed6f,	// (0x0005140e) dia3_listscroll_pane_ParamLimits

0xed6f,	// (0x0005140e) dia3_listscroll_pane

0xed7b,	// (0x0005141a) dia3_numentry_pane_ParamLimits

0xed7b,	// (0x0005141a) dia3_numentry_pane

0xed87,	// (0x00051426) dia3_list_pane

0xed90,	// (0x0005142f) scroll_pane_cp12

0xdb8e,	// (0x0005022d) bg_dia3_numentry_pane

0xed99,	// (0x00051438) dia3_numentry_pane_t1

0xeda8,	// (0x00051447) cell_dia3_key_num_pane

0xedb0,	// (0x0005144f) cell_dia3_key0_fun_pane_ParamLimits

0xedb0,	// (0x0005144f) cell_dia3_key0_fun_pane

0xedbd,	// (0x0005145c) cell_dia3_key1_fun_pane_ParamLimits

0xedbd,	// (0x0005145c) cell_dia3_key1_fun_pane

0xedca,	// (0x00051469) dia3_listrow_pane

0x464b,	// (0x00046cea) bg_dia3_numentry_pane_g1

0xdb8e,	// (0x0005022d) bg_button_pane_cp21

0xedd7,	// (0x00051476) cell_dia3_key_num_pane_t1

0xede5,	// (0x00051484) cell_dia3_key_num_pane_t2

0xedf4,	// (0x00051493) cell_dia3_key_num_pane_t3

0xee03,	// (0x000514a2) cell_dia3_key_num_pane_t4

0x0003,

0xff20,	// (0x000525bf) cell_dia3_key_num_pane_t

0xdb8e,	// (0x0005022d) bg_button_pane_cp19

0xee12,	// (0x000514b1) cell_dia3_key0_fun_pane_g1

0xdb8e,	// (0x0005022d) bg_button_pane_cp20

0xee1a,	// (0x000514b9) cell_dia3_key1_fun_pane_g1

0xee22,	// (0x000514c1) area_left_week_number_pane

0xee2b,	// (0x000514ca) area_top_day_name_pane

0xee34,	// (0x000514d3) frame_month_view_pane

0xee3c,	// (0x000514db) grid_month_view_pane

0xee46,	// (0x000514e5) cell_top_day_name_pane_ParamLimits

0xee46,	// (0x000514e5) cell_top_day_name_pane

0xee5c,	// (0x000514fb) cell_area_left_week_number_pane_ParamLimits

0xee5c,	// (0x000514fb) cell_area_left_week_number_pane

0xee70,	// (0x0005150f) cell_month_view_pane_ParamLimits

0xee70,	// (0x0005150f) cell_month_view_pane

0xee8b,	// (0x0005152a) frm_month_g1

0xee94,	// (0x00051533) frm_month_g2

0xee9c,	// (0x0005153b) frm_month_g3

0xeea4,	// (0x00051543) frm_month_g4

0xeeac,	// (0x0005154b) frm_month_g5

0xeeb4,	// (0x00051553) frm_month_g6

0xeebc,	// (0x0005155b) frm_month_g7

0xeec4,	// (0x00051563) frm_month_g8

0xeecd,	// (0x0005156c) frm_month_g9

0xeed6,	// (0x00051575) frm_month_g10

0xab35,	// (0x0004d1d4) frm_month_g11

0xeedf,	// (0x0005157e) frm_month_g12

0xeee8,	// (0x00051587) frm_month_g13

0xeef1,	// (0x00051590) frm_month_g14

0xeefa,	// (0x00051599) frm_month_g15

0xef03,	// (0x000515a2) frm_month_g16

0x000f,

0xff29,	// (0x000525c8) frm_month_g

0xef0c,	// (0x000515ab) cell_top_day_name_pane_t1

0xef1b,	// (0x000515ba) cell_area_left_week_number_pane_g1

0xef0c,	// (0x000515ab) cell_area_left_week_number_pane_t1

0x2fd7,	// (0x00045676) cell_month_view_pane_g1

0xef23,	// (0x000515c2) cell_month_view_pane_t1

0xdb8e,	// (0x0005022d) main_fps_pane

0x4c3d,	// (0x000472dc) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x4c3d,	// (0x000472dc) cmail_ddmenu_btn02_pane_cp1

0x4c59,	// (0x000472f8) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x4c59,	// (0x000472f8) cmail_ddmenu_btn02_pane_cp2

0xd236,	// (0x0004f8d5) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd236,	// (0x0004f8d5) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe51,	// (0x000524f0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe51,	// (0x000524f0) cmail_ddmenu_btn02_pane_g

0xd254,	// (0x0004f8f3) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd254,	// (0x0004f8f3) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe56,	// (0x000524f5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe56,	// (0x000524f5) cmail_ddmenu_btn02_pane_t

0xef32,	// (0x000515d1) fps_text_pane_ParamLimits

0xef32,	// (0x000515d1) fps_text_pane

0xef3f,	// (0x000515de) main_fps_pane_g1_ParamLimits

0xef3f,	// (0x000515de) main_fps_pane_g1

0xef4b,	// (0x000515ea) wait_bar_pane_cp010_ParamLimits

0xef4b,	// (0x000515ea) wait_bar_pane_cp010

0xef57,	// (0x000515f6) fps_text_pane_t1_ParamLimits

0xef57,	// (0x000515f6) fps_text_pane_t1

0xab23,	// (0x0004d1c2) cam4_image_uncrop_pane_g1

0xab2c,	// (0x0004d1cb) cam4_image_uncrop_pane_g2

0xab35,	// (0x0004d1d4) cam4_image_uncrop_pane_g3

0xab3e,	// (0x0004d1dd) cam4_image_uncrop_pane_g4

0x0003,

0xf92f,	// (0x00051fce) cam4_image_uncrop_pane_g

0xedca,	// (0x00051469) dia3_listrow_pane_ParamLimits

0xdb8e,	// (0x0005022d) main_phob2_pane

0xcbee,	// (0x0004f28d) cell_tport_appsw_pane_cp02_ParamLimits

0xcbee,	// (0x0004f28d) cell_tport_appsw_pane_cp02

0xcbfb,	// (0x0004f29a) cell_tport_appsw_pane_cp03_ParamLimits

0xcbfb,	// (0x0004f29a) cell_tport_appsw_pane_cp03

0xdb8e,	// (0x0005022d) phob2_contact_card_pane

0xdb8e,	// (0x0005022d) phob2_listscroll_pane

0xef70,	// (0x0005160f) phob2_list_pane

0xef78,	// (0x00051617) scroll_pane_cp034

0xef80,	// (0x0005161f) phob2_cc_data_pane_ParamLimits

0xef80,	// (0x0005161f) phob2_cc_data_pane

0xef98,	// (0x00051637) phob2_cc_listscroll_pane_ParamLimits

0xef98,	// (0x00051637) phob2_cc_listscroll_pane

0xefb0,	// (0x0005164f) list_double_large_graphic_phob2_pane_ParamLimits

0xefb0,	// (0x0005164f) list_double_large_graphic_phob2_pane

0xefc3,	// (0x00051662) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xefc3,	// (0x00051662) list_double_large_graphic_phob2_pane_g1

0xdacb,	// (0x0005016a) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xdacb,	// (0x0005016a) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff4a,	// (0x000525e9) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff4a,	// (0x000525e9) list_double_large_graphic_phob2_pane_g

0xdad7,	// (0x00050176) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xdad7,	// (0x00050176) list_double_large_graphic_phob2_pane_t1

0xdaec,	// (0x0005018b) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xdaec,	// (0x0005018b) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff4f,	// (0x000525ee) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff4f,	// (0x000525ee) list_double_large_graphic_phob2_pane_t

0xdb8e,	// (0x0005022d) list_highlight_pane_cp024

0xefd0,	// (0x0005166f) phob2_cc_button_pane

0xefd8,	// (0x00051677) phob2_cc_data_pane_g1_ParamLimits

0xefd8,	// (0x00051677) phob2_cc_data_pane_g1

0xefe4,	// (0x00051683) phob2_cc_data_pane_g2_ParamLimits

0xefe4,	// (0x00051683) phob2_cc_data_pane_g2

0x0001,

0xff54,	// (0x000525f3) phob2_cc_data_pane_g_ParamLimits

0xff54,	// (0x000525f3) phob2_cc_data_pane_g

0xeff0,	// (0x0005168f) phob2_cc_data_pane_t1_ParamLimits

0xeff0,	// (0x0005168f) phob2_cc_data_pane_t1

0xf002,	// (0x000516a1) phob2_cc_data_pane_t2_ParamLimits

0xf002,	// (0x000516a1) phob2_cc_data_pane_t2

0xf014,	// (0x000516b3) phob2_cc_data_pane_t3_ParamLimits

0xf014,	// (0x000516b3) phob2_cc_data_pane_t3

0x0002,

0xff59,	// (0x000525f8) phob2_cc_data_pane_t_ParamLimits

0xff59,	// (0x000525f8) phob2_cc_data_pane_t

0xf026,	// (0x000516c5) phob2_cc_list_pane_ParamLimits

0xf026,	// (0x000516c5) phob2_cc_list_pane

0xf032,	// (0x000516d1) scroll_pane_cp035_ParamLimits

0xf032,	// (0x000516d1) scroll_pane_cp035

0xecfa,	// (0x00051399) bg_button_pane_cp033

0xf03e,	// (0x000516dd) phob2_cc_button_pane_g1

0xf04a,	// (0x000516e9) phob2_cc_button_pane_t1

0xf05f,	// (0x000516fe) phob2_cc_button_pane_t2

0x0001,

0xff60,	// (0x000525ff) phob2_cc_button_pane_t

0xf071,	// (0x00051710) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xf071,	// (0x00051710) list_double_large_graphic_phob2_cc_pane

0xf08c,	// (0x0005172b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xf08c,	// (0x0005172b) list_double_large_graphic_phob2_cc_pane_g1

0xdafe,	// (0x0005019d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xdafe,	// (0x0005019d) list_double_large_graphic_phob2_cc_pane_g2

0xdb0d,	// (0x000501ac) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xdb0d,	// (0x000501ac) list_double_large_graphic_phob2_cc_pane_g3

0xdb1c,	// (0x000501bb) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xdb1c,	// (0x000501bb) list_double_large_graphic_phob2_cc_pane_g4

0xdb2d,	// (0x000501cc) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xdb2d,	// (0x000501cc) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff65,	// (0x00052604) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff65,	// (0x00052604) list_double_large_graphic_phob2_cc_pane_g

0xdb3c,	// (0x000501db) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xdb3c,	// (0x000501db) list_double_large_graphic_phob2_cc_pane_t1

0xdb65,	// (0x00050204) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xdb65,	// (0x00050204) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff70,	// (0x0005260f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff70,	// (0x0005260f) list_double_large_graphic_phob2_cc_pane_t

0xf09d,	// (0x0005173c) list_highlight_pane_cp025_ParamLimits

0xf09d,	// (0x0005173c) list_highlight_pane_cp025

0xecfa,	// (0x00051399) bg_button_pane_cp033_ParamLimits

0xf03e,	// (0x000516dd) phob2_cc_button_pane_g1_ParamLimits

0xf04a,	// (0x000516e9) phob2_cc_button_pane_t1_ParamLimits

0xf05f,	// (0x000516fe) phob2_cc_button_pane_t2_ParamLimits

0xff60,	// (0x000525ff) phob2_cc_button_pane_t_ParamLimits

0x66dd,	// (0x00048d7c) popup_wgtman_window

0x466b,	// (0x00046d0a) scroll_pane_cp038

0xd8df,	// (0x0004ff7e) wgtman_btn_pane_cp_01_ParamLimits

0xd8df,	// (0x0004ff7e) wgtman_btn_pane_cp_01

0xf0ab,	// (0x0005174a) wgtman_content_pane

0xf0b4,	// (0x00051753) wgtman_heading_pane

0xdb8e,	// (0x0005022d) bg_heading_pane_cp02

0xf0bd,	// (0x0005175c) wgtman_heading_pane_g1

0xf0c5,	// (0x00051764) wgtman_heading_pane_t1

0xf0d3,	// (0x00051772) scroll_pane_cp036

0xf0db,	// (0x0005177a) wgtman_list_pane

0xf0e3,	// (0x00051782) wgtman_list_pane_t1_ParamLimits

0xf0e3,	// (0x00051782) wgtman_list_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Small
