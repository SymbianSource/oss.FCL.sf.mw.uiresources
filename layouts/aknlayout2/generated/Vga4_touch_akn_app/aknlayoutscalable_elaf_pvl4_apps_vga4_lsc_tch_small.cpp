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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00042297 };

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
0x1549,	// (0x000437e0) Screen

0x1555,	// (0x000437ec) application_window

0x1591,	// (0x00043828) area_bottom_pane_ParamLimits

0x1591,	// (0x00043828) area_bottom_pane

0x15ca,	// (0x00043861) area_top_pane_ParamLimits

0x15ca,	// (0x00043861) area_top_pane

0xa68f,	// (0x0004c926) call_video_uplink_pane_ParamLimits

0xa68f,	// (0x0004c926) call_video_uplink_pane

0x163f,	// (0x000438d6) main_pane_ParamLimits

0x163f,	// (0x000438d6) main_pane

0xe464,	// (0x000506fb) context_pane

0x46f3,	// (0x0004698a) navi_pane

0x4723,	// (0x000469ba) popup_cale_events_window_ParamLimits

0x4723,	// (0x000469ba) popup_cale_events_window

0xe477,	// (0x0005070e) popup_mup_playback_window

0x473b,	// (0x000469d2) signal_pane

0xc590,	// (0x0004e827) main_browser_pane

0xcfe4,	// (0x0004f27b) main_burst_pane

0x43f5,	// (0x0004668c) main_calc_pane

0xcfe4,	// (0x0004f27b) main_cale_day_pane

0xc590,	// (0x0004e827) main_cale_month_pane

0xcfe4,	// (0x0004f27b) main_cale_week_pane

0xcfe4,	// (0x0004f27b) main_call_pane

0xc26a,	// (0x0004e501) main_call_poc_pane

0xcfe4,	// (0x0004f27b) main_camera_pane

0xcfe4,	// (0x0004f27b) main_chi_dic_pane

0xce86,	// (0x0004f11d) main_clock_pane

0xc26a,	// (0x0004e501) main_fmradio_pane

0xcfe4,	// (0x0004f27b) main_graph_messa_pane

0xc26a,	// (0x0004e501) main_help_pane

0xc590,	// (0x0004e827) main_im_pane

0xc4c5,	// (0x0004e75c) main_image_pane_ParamLimits

0xc4c5,	// (0x0004e75c) main_image_pane

0xc26a,	// (0x0004e501) main_location2_pane

0xcfe4,	// (0x0004f27b) main_location_pane

0xc26a,	// (0x0004e501) main_messa_pane

0xc26a,	// (0x0004e501) main_mp2_pane

0xcfe4,	// (0x0004f27b) main_mp_pane

0xc26a,	// (0x0004e501) main_msg_pane

0xc26a,	// (0x0004e501) main_mup_eq_pane

0xc26a,	// (0x0004e501) main_mup_pane

0xcfe4,	// (0x0004f27b) main_notes_pane

0xc26a,	// (0x0004e501) main_pec_pane

0xc26a,	// (0x0004e501) main_phob_pane

0xc26a,	// (0x0004e501) main_pinb_pane

0xc26a,	// (0x0004e501) main_postcard_pane

0xc26a,	// (0x0004e501) main_qdial_pane

0xcfe4,	// (0x0004f27b) main_skin_pane

0xc26a,	// (0x0004e501) main_smil2_pane

0xcfe4,	// (0x0004f27b) main_smil_pane

0xcfe4,	// (0x0004f27b) main_video_pane

0xcfe4,	// (0x0004f27b) main_video_tele_pane

0xc4c5,	// (0x0004e75c) main_viewer_pane_ParamLimits

0xc4c5,	// (0x0004e75c) main_viewer_pane

0xcfe4,	// (0x0004f27b) main_vorec_pane

0x444b,	// (0x000466e2) popup_blid_sat_info_window_ParamLimits

0x444b,	// (0x000466e2) popup_blid_sat_info_window

0x44af,	// (0x00046746) popup_dyc_status_message_window_ParamLimits

0x44af,	// (0x00046746) popup_dyc_status_message_window

0x44c9,	// (0x00046760) popup_grid_large_graphic_window_ParamLimits

0x44c9,	// (0x00046760) popup_grid_large_graphic_window

0x458b,	// (0x00046822) popup_loc_request_window_ParamLimits

0x458b,	// (0x00046822) popup_loc_request_window

0x46c7,	// (0x0004695e) popup_wml_address_window_ParamLimits

0x46c7,	// (0x0004695e) popup_wml_address_window

0x4233,	// (0x000464ca) call_muted_g1

0x3ec4,	// (0x0004615b) popup_call_audio_conf_window_ParamLimits

0x3ec4,	// (0x0004615b) popup_call_audio_conf_window

0x4243,	// (0x000464da) popup_call_audio_first_window_ParamLimits

0x4243,	// (0x000464da) popup_call_audio_first_window

0x42b9,	// (0x00046550) popup_call_audio_in_window_ParamLimits

0x42b9,	// (0x00046550) popup_call_audio_in_window

0x42f5,	// (0x0004658c) popup_call_audio_out_window_ParamLimits

0x42f5,	// (0x0004658c) popup_call_audio_out_window

0x432f,	// (0x000465c6) popup_call_audio_second_window_ParamLimits

0x432f,	// (0x000465c6) popup_call_audio_second_window

0x4385,	// (0x0004661c) popup_call_audio_wait_window_ParamLimits

0x4385,	// (0x0004661c) popup_call_audio_wait_window

0x43ba,	// (0x00046651) popup_number_entry_window_ParamLimits

0x43ba,	// (0x00046651) popup_number_entry_window

0xa6bb,	// (0x0004c952) bg_popup_call_pane_cp05_ParamLimits

0xa6bb,	// (0x0004c952) bg_popup_call_pane_cp05

0xa6db,	// (0x0004c972) popup_number_entry_window_t1

0xa6ee,	// (0x0004c985) popup_number_entry_window_t2

0xa700,	// (0x0004c997) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00051383) popup_number_entry_window_t

0xa712,	// (0x0004c9a9) text_title_cp2

0xa725,	// (0x0004c9bc) bg_popup_call_pane_cp_ParamLimits

0xa725,	// (0x0004c9bc) bg_popup_call_pane_cp

0xa733,	// (0x0004c9ca) call_thumbnail_pane

0xa73b,	// (0x0004c9d2) popup_call_audio_in_window_g1_ParamLimits

0xa73b,	// (0x0004c9d2) popup_call_audio_in_window_g1

0xa747,	// (0x0004c9de) popup_call_audio_in_window_g2_ParamLimits

0xa747,	// (0x0004c9de) popup_call_audio_in_window_g2

0xa753,	// (0x0004c9ea) popup_call_audio_in_window_g3_ParamLimits

0xa753,	// (0x0004c9ea) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0005138c) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0005138c) popup_call_audio_in_window_g

0xa75f,	// (0x0004c9f6) popup_call_audio_in_window_t1_ParamLimits

0xa75f,	// (0x0004c9f6) popup_call_audio_in_window_t1

0xa77b,	// (0x0004ca12) popup_call_audio_in_window_t2_ParamLimits

0xa77b,	// (0x0004ca12) popup_call_audio_in_window_t2

0xbf33,	// (0x0004e1ca) popup_call_audio_in_window_t3_ParamLimits

0xbf33,	// (0x0004e1ca) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00051393) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00051393) popup_call_audio_in_window_t

0xa725,	// (0x0004c9bc) bg_popup_call_pane_cp01_ParamLimits

0xa725,	// (0x0004c9bc) bg_popup_call_pane_cp01

0xa733,	// (0x0004c9ca) call_thumbnail_pane_cp02

0xbf46,	// (0x0004e1dd) call_type_pane_cp022

0xbf4e,	// (0x0004e1e5) popup_call_audio_out_window_g1_ParamLimits

0xbf4e,	// (0x0004e1e5) popup_call_audio_out_window_g1

0xbf60,	// (0x0004e1f7) popup_call_audio_out_window_g2_ParamLimits

0xbf60,	// (0x0004e1f7) popup_call_audio_out_window_g2

0xbf6c,	// (0x0004e203) popup_call_audio_out_window_g3_ParamLimits

0xbf6c,	// (0x0004e203) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0005139a) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0005139a) popup_call_audio_out_window_g

0xbf7e,	// (0x0004e215) popup_call_audio_out_window_t1_ParamLimits

0xbf7e,	// (0x0004e215) popup_call_audio_out_window_t1

0xbf96,	// (0x0004e22d) popup_call_audio_out_window_t2_ParamLimits

0xbf96,	// (0x0004e22d) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x000513a1) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x000513a1) popup_call_audio_out_window_t

0xbfab,	// (0x0004e242) bg_popup_call_pane_ParamLimits

0xbfab,	// (0x0004e242) bg_popup_call_pane

0x17fe,	// (0x00043a95) call_thumbnail_pane_cp_ParamLimits

0x17fe,	// (0x00043a95) call_thumbnail_pane_cp

0xc02f,	// (0x0004e2c6) call_type_pane_cp01_ParamLimits

0xc02f,	// (0x0004e2c6) call_type_pane_cp01

0xc073,	// (0x0004e30a) popup_call_audio_first_window_g1_ParamLimits

0xc073,	// (0x0004e30a) popup_call_audio_first_window_g1

0xc0bf,	// (0x0004e356) popup_call_audio_first_window_g2_ParamLimits

0xc0bf,	// (0x0004e356) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x000513a6) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x000513a6) popup_call_audio_first_window_g

0xc103,	// (0x0004e39a) popup_call_audio_first_window_t1_ParamLimits

0xc103,	// (0x0004e39a) popup_call_audio_first_window_t1

0xc1af,	// (0x0004e446) popup_call_audio_first_window_t4_ParamLimits

0xc1af,	// (0x0004e446) popup_call_audio_first_window_t4

0xc23b,	// (0x0004e4d2) popup_call_audio_first_window_t5_ParamLimits

0xc23b,	// (0x0004e4d2) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x000513ab) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x000513ab) popup_call_audio_first_window_t

0xc26a,	// (0x0004e501) bg_popup_call_pane_cp02

0xc274,	// (0x0004e50b) call_type_pane_cp023

0xc27c,	// (0x0004e513) popup_call_audio_wait_window_g1

0xc284,	// (0x0004e51b) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x000513b2) popup_call_audio_wait_window_g

0xc28c,	// (0x0004e523) popup_call_audio_wait_window_t3

0xc29a,	// (0x0004e531) bg_popup_call_pane_cp03_ParamLimits

0xc29a,	// (0x0004e531) bg_popup_call_pane_cp03

0xc2fa,	// (0x0004e591) call_thumbnail_pane_cp011_ParamLimits

0xc2fa,	// (0x0004e591) call_thumbnail_pane_cp011

0xc306,	// (0x0004e59d) call_type_pane_cp034_ParamLimits

0xc306,	// (0x0004e59d) call_type_pane_cp034

0xc342,	// (0x0004e5d9) popup_call_audio_second_window_g1_ParamLimits

0xc342,	// (0x0004e5d9) popup_call_audio_second_window_g1

0xc37e,	// (0x0004e615) popup_call_audio_second_window_g2_ParamLimits

0xc37e,	// (0x0004e615) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x000513b7) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x000513b7) popup_call_audio_second_window_g

0xc3ba,	// (0x0004e651) popup_call_audio_second_window_t1_ParamLimits

0xc3ba,	// (0x0004e651) popup_call_audio_second_window_t1

0xc43b,	// (0x0004e6d2) popup_call_audio_second_window_t2_ParamLimits

0xc43b,	// (0x0004e6d2) popup_call_audio_second_window_t2

0xc471,	// (0x0004e708) popup_call_audio_second_window_t3_ParamLimits

0xc471,	// (0x0004e708) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x000513bc) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x000513bc) popup_call_audio_second_window_t

0xc26a,	// (0x0004e501) bg_popup_call_pane_cp04

0xc4a7,	// (0x0004e73e) list_conf_pane

0xc4af,	// (0x0004e746) popup_call_audio_conf_window_t1

0xc4bd,	// (0x0004e754) call_thumbnail_pane_g1

0xc4c5,	// (0x0004e75c) bg_pinb_pane_ParamLimits

0xc4c5,	// (0x0004e75c) bg_pinb_pane

0xc4d3,	// (0x0004e76a) find_pinb_pane

0xc4dc,	// (0x0004e773) listscroll_pinb_pane_ParamLimits

0xc4dc,	// (0x0004e773) listscroll_pinb_pane

0xc4eb,	// (0x0004e782) pinb_bg_pane_g1

0x1822,	// (0x00043ab9) pinb_bg_pane_g2

0x182e,	// (0x00043ac5) pinb_bg_pane_g3

0x183a,	// (0x00043ad1) pinb_bg_pane_g4

0x1846,	// (0x00043add) pinb_bg_pane_g5

0x1852,	// (0x00043ae9) pinb_bg_pane_g6

0x185d,	// (0x00043af4) pinb_bg_pane_g7

0x1868,	// (0x00043aff) pinb_bg_pane_g8

0x1873,	// (0x00043b0a) pinb_bg_pane_g9

0x187d,	// (0x00043b14) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x000513c3) pinb_bg_pane_g

0x189a,	// (0x00043b31) grid_pinb_pane

0x18a5,	// (0x00043b3c) list_pinb_pane

0x18b0,	// (0x00043b47) scroll_pane_cp01_ParamLimits

0x18b0,	// (0x00043b47) scroll_pane_cp01

0xc4f5,	// (0x0004e78c) find_pinb_pane_g1_ParamLimits

0xc4f5,	// (0x0004e78c) find_pinb_pane_g1

0xc50d,	// (0x0004e7a4) find_pinb_pane_t1

0xc51f,	// (0x0004e7b6) find_pinb_pane_t2

0x0001,

0xf146,	// (0x000513dd) find_pinb_pane_t

0xc534,	// (0x0004e7cb) input_focus_pane_cp01_ParamLimits

0xc534,	// (0x0004e7cb) input_focus_pane_cp01

0x18c2,	// (0x00043b59) cell_pinb_pane_ParamLimits

0x18c2,	// (0x00043b59) cell_pinb_pane

0x18e4,	// (0x00043b7b) cell_pinb_pane_g1_ParamLimits

0x18e4,	// (0x00043b7b) cell_pinb_pane_g1

0x18f8,	// (0x00043b8f) cell_pinb_pane_g2_ParamLimits

0x18f8,	// (0x00043b8f) cell_pinb_pane_g2

0xc540,	// (0x0004e7d7) cell_pinb_pane_g3_ParamLimits

0xc540,	// (0x0004e7d7) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x000513e2) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x000513e2) cell_pinb_pane_g

0xc26a,	// (0x0004e501) grid_highlight_pane_cp01

0x1904,	// (0x00043b9b) list_pinb_item_pane_ParamLimits

0x1904,	// (0x00043b9b) list_pinb_item_pane

0xc26a,	// (0x0004e501) list_highlight_pane_cp02

0x1917,	// (0x00043bae) list_pinb_item_pane_g1_ParamLimits

0x1917,	// (0x00043bae) list_pinb_item_pane_g1

0x1924,	// (0x00043bbb) list_pinb_item_pane_g2_ParamLimits

0x1924,	// (0x00043bbb) list_pinb_item_pane_g2

0x1930,	// (0x00043bc7) list_pinb_item_pane_g3_ParamLimits

0x1930,	// (0x00043bc7) list_pinb_item_pane_g3

0x1941,	// (0x00043bd8) list_pinb_item_pane_g4_ParamLimits

0x1941,	// (0x00043bd8) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x000513e9) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x000513e9) list_pinb_item_pane_g

0x194d,	// (0x00043be4) list_pinb_item_pane_t1_ParamLimits

0x194d,	// (0x00043be4) list_pinb_item_pane_t1

0x1982,	// (0x00043c19) calc_display_pane

0x19a8,	// (0x00043c3f) calc_paper_pane

0x19cb,	// (0x00043c62) grid_calc_pane

0xc26a,	// (0x0004e501) bg_list_pane_cp01

0x19f9,	// (0x00043c90) clock_g1

0x1a01,	// (0x00043c98) clock_g2

0x0001,

0xf15b,	// (0x000513f2) clock_g

0x1a09,	// (0x00043ca0) clock_t1_ParamLimits

0x1a09,	// (0x00043ca0) clock_t1

0x1a1e,	// (0x00043cb5) clock_t2_ParamLimits

0x1a1e,	// (0x00043cb5) clock_t2

0x1a30,	// (0x00043cc7) clock_t3_ParamLimits

0x1a30,	// (0x00043cc7) clock_t3

0x1a42,	// (0x00043cd9) clock_t4_ParamLimits

0x1a42,	// (0x00043cd9) clock_t4

0x1a54,	// (0x00043ceb) clock_t5_ParamLimits

0x1a54,	// (0x00043ceb) clock_t5

0x1a69,	// (0x00043d00) clock_t6_ParamLimits

0x1a69,	// (0x00043d00) clock_t6

0x1a7b,	// (0x00043d12) clock_t7_ParamLimits

0x1a7b,	// (0x00043d12) clock_t7

0x1a8d,	// (0x00043d24) clock_t8_ParamLimits

0x1a8d,	// (0x00043d24) clock_t8

0x1aa1,	// (0x00043d38) clock_t9_ParamLimits

0x1aa1,	// (0x00043d38) clock_t9

0x0008,

0xf160,	// (0x000513f7) clock_t_ParamLimits

0xf160,	// (0x000513f7) clock_t

0xc54c,	// (0x0004e7e3) popup_clock_analogue_window_cp02

0xc54c,	// (0x0004e7e3) popup_clock_digital_window_cp01

0xc554,	// (0x0004e7eb) listscroll_help_pane

0xc26a,	// (0x0004e501) phob_pre_status_pane

0xc55e,	// (0x0004e7f5) grid_qdial_pane

0xc26a,	// (0x0004e501) listscroll_mce_pane

0xc568,	// (0x0004e7ff) bg_notes_pane

0xc572,	// (0x0004e809) list_notes_pane

0x1ab7,	// (0x00043d4e) scroll_pane_cp06

0xc57c,	// (0x0004e813) bg_calc_paper_pane

0xa79f,	// (0x0004ca36) list_calc_pane

0xc590,	// (0x0004e827) bg_calc_display_pane

0x1ac2,	// (0x00043d59) calc_display_pane_t1

0x1ad4,	// (0x00043d6b) calc_display_pane_t2

0xa7b9,	// (0x0004ca50) calc_display_pane_t3

0x0002,

0xf173,	// (0x0005140a) calc_display_pane_t

0x1ae6,	// (0x00043d7d) cell_calc_pane_ParamLimits

0x1ae6,	// (0x00043d7d) cell_calc_pane

0xc59c,	// (0x0004e833) bg_calc_paper_pane_g1

0xc5a8,	// (0x0004e83f) bg_calc_paper_pane_g2

0xc5b4,	// (0x0004e84b) bg_calc_paper_pane_g3

0xc5c0,	// (0x0004e857) bg_calc_paper_pane_g4

0xc5cc,	// (0x0004e863) bg_calc_paper_pane_g5

0x1b21,	// (0x00043db8) bg_calc_paper_pane_g6

0x1b34,	// (0x00043dcb) bg_calc_paper_pane_g7

0x1b47,	// (0x00043dde) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00051411) bg_calc_paper_pane_g

0x1b58,	// (0x00043def) calc_bg_paper_pane_g9

0x1b69,	// (0x00043e00) list_calc_item_pane_ParamLimits

0x1b69,	// (0x00043e00) list_calc_item_pane

0xc5d8,	// (0x0004e86f) list_calc_item_pane_g1

0xa7cb,	// (0x0004ca62) list_calc_item_pane_t1_ParamLimits

0xa7cb,	// (0x0004ca62) list_calc_item_pane_t1

0x1b7d,	// (0x00043e14) list_calc_item_pane_t2_ParamLimits

0x1b7d,	// (0x00043e14) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00051422) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00051422) list_calc_item_pane_t

0xc5e5,	// (0x0004e87c) cell_calc_pane_g1

0xc5ef,	// (0x0004e886) grid_highlight_pane_cp02

0xc611,	// (0x0004e8a8) bg_calc_display_pane_g1

0xa7dd,	// (0x0004ca74) bg_calc_display_pane_g2

0xc61a,	// (0x0004e8b1) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0005142c) bg_calc_display_pane_g

0x1baf,	// (0x00043e46) cell_qdial_pane_ParamLimits

0x1baf,	// (0x00043e46) cell_qdial_pane

0x1bc5,	// (0x00043e5c) cell_qdial_pane_g1_ParamLimits

0x1bc5,	// (0x00043e5c) cell_qdial_pane_g1

0x1bdb,	// (0x00043e72) cell_qdial_pane_g2_ParamLimits

0x1bdb,	// (0x00043e72) cell_qdial_pane_g2

0xc623,	// (0x0004e8ba) cell_qdial_pane_g3_ParamLimits

0xc623,	// (0x0004e8ba) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00051433) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00051433) cell_qdial_pane_g

0x1c01,	// (0x00043e98) cell_qdial_pane_t1_ParamLimits

0x1c01,	// (0x00043e98) cell_qdial_pane_t1

0x1c19,	// (0x00043eb0) cell_qdial_pane_t2_ParamLimits

0x1c19,	// (0x00043eb0) cell_qdial_pane_t2

0x1c2c,	// (0x00043ec3) cell_qdial_pane_t3_ParamLimits

0x1c2c,	// (0x00043ec3) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0005143c) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0005143c) cell_qdial_pane_t

0xc26a,	// (0x0004e501) grid_highlight_pane_cp04

0xc62f,	// (0x0004e8c6) thumbnail_qdial_pane_ParamLimits

0xc62f,	// (0x0004e8c6) thumbnail_qdial_pane

0xc68b,	// (0x0004e922) list_help_pane

0xc694,	// (0x0004e92b) scroll_pane_cp02

0x1c3f,	// (0x00043ed6) help_list_pane_t1_ParamLimits

0x1c3f,	// (0x00043ed6) help_list_pane_t1

0xa7e7,	// (0x0004ca7e) bg_notes_pane_g2

0xa7ef,	// (0x0004ca86) bg_notes_pane_g3

0xa7f7,	// (0x0004ca8e) notes_bg_pane_g1

0xa7ff,	// (0x0004ca96) notes_bg_pane_g4

0xa807,	// (0x0004ca9e) notes_bg_pane_g5

0xa80f,	// (0x0004caa6) notes_bg_pane_g6

0xa817,	// (0x0004caae) notes_bg_pane_g7

0xa81f,	// (0x0004cab6) notes_bg_pane_g8

0xa827,	// (0x0004cabe) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0005145a) notes_bg_pane_g

0x1c63,	// (0x00043efa) list_notes_text_pane_ParamLimits

0x1c63,	// (0x00043efa) list_notes_text_pane

0xc69d,	// (0x0004e934) list_notes_text_pane_g1

0xa82f,	// (0x0004cac6) list_notes_text_pane_t1

0xc590,	// (0x0004e827) listscroll_cale_week_pane

0x1c97,	// (0x00043f2e) bg_cale_heading_pane

0xc6b7,	// (0x0004e94e) bg_cale_pane_cp01

0x1cb3,	// (0x00043f4a) cale_week_corner_pane

0x1cc9,	// (0x00043f60) cale_week_day_heading_pane

0x1ce5,	// (0x00043f7c) cale_week_scroll_pane_g1

0x1cfe,	// (0x00043f95) cale_week_scroll_pane_g2

0x1d0f,	// (0x00043fa6) cale_week_scroll_pane_g3

0x1d20,	// (0x00043fb7) cale_week_scroll_pane_g4

0x1d31,	// (0x00043fc8) cale_week_scroll_pane_g5

0x1d42,	// (0x00043fd9) cale_week_scroll_pane_g6

0x1d53,	// (0x00043fea) cale_week_scroll_pane_g7

0x1d64,	// (0x00043ffb) cale_week_scroll_pane_g8

0x1d75,	// (0x0004400c) cale_week_scroll_pane_g9

0x1d86,	// (0x0004401d) cale_week_scroll_pane_g10

0x1d97,	// (0x0004402e) cale_week_scroll_pane_g11

0x1da8,	// (0x0004403f) cale_week_scroll_pane_g12

0x1db9,	// (0x00044050) cale_week_scroll_pane_g13

0x1dd2,	// (0x00044069) cale_week_scroll_pane_g14

0x1deb,	// (0x00044082) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00051469) cale_week_scroll_pane_g

0x1e04,	// (0x0004409b) cale_week_time_pane

0x1e15,	// (0x000440ac) grid_cale_week_pane

0x1e30,	// (0x000440c7) scroll_pane_cp08

0x1e48,	// (0x000440df) cell_cale_week_pane_ParamLimits

0x1e48,	// (0x000440df) cell_cale_week_pane

0x1e90,	// (0x00044127) cale_week_day_heading_pane_t1

0x1ea4,	// (0x0004413b) cale_week_day_heading_pane_t2

0x1eb8,	// (0x0004414f) cale_week_day_heading_pane_t3

0x1ecc,	// (0x00044163) cale_week_day_heading_pane_t4

0x1ee0,	// (0x00044177) cale_week_day_heading_pane_t5

0x1ef4,	// (0x0004418b) cale_week_day_heading_pane_t6

0x1f08,	// (0x0004419f) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00051488) cale_week_day_heading_pane_t

0xc6e2,	// (0x0004e979) bg_cale_side_pane

0x1f1c,	// (0x000441b3) cale_week_time_pane_t1

0x1f34,	// (0x000441cb) cale_week_time_pane_t2

0x1f4c,	// (0x000441e3) cale_week_time_pane_t3

0x1f64,	// (0x000441fb) cale_week_time_pane_t4

0x1f7c,	// (0x00044213) cale_week_time_pane_t5

0x1f94,	// (0x0004422b) cale_week_time_pane_t6

0x1fac,	// (0x00044243) cale_week_time_pane_t7

0x1fc8,	// (0x0004425f) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00051497) cale_week_time_pane_t

0x1fe8,	// (0x0004427f) cell_cale_week_pane_g2

0x1ff9,	// (0x00044290) cell_cale_week_pane_g3_ParamLimits

0x1ff9,	// (0x00044290) cell_cale_week_pane_g3

0xc6f0,	// (0x0004e987) grid_highlight_pane_cp07

0xc6f8,	// (0x0004e98f) listscroll_gms_pane

0xc702,	// (0x0004e999) grid_gms_pane

0xc70b,	// (0x0004e9a2) listscroll_gms_pane_g1

0xc713,	// (0x0004e9aa) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x000514a8) listscroll_gms_pane_g

0x2011,	// (0x000442a8) scroll_pane_cp010

0x201c,	// (0x000442b3) cell_gms_pane_ParamLimits

0x201c,	// (0x000442b3) cell_gms_pane

0x2036,	// (0x000442cd) cell_gms_pane_g1

0xc71b,	// (0x0004e9b2) cell_gms_pane_g2

0xc723,	// (0x0004e9ba) cell_gms_pane_g3

0xc72c,	// (0x0004e9c3) cell_gms_pane_g4

0x0003,

0xf216,	// (0x000514ad) cell_gms_pane_g

0xc735,	// (0x0004e9cc) grid_highlight_pane_cp09

0x41db,	// (0x00046472) phob_pre_status_pane_g1

0x41e3,	// (0x0004647a) phob_pre_status_pane_g2

0x41eb,	// (0x00046482) phob_pre_status_pane_g3

0x41f3,	// (0x0004648a) phob_pre_status_pane_g4

0x0004,

0xf545,	// (0x000517dc) phob_pre_status_pane_g

0x4203,	// (0x0004649a) phob_pre_status_pane_t1

0x4213,	// (0x000464aa) phob_pre_status_pane_t2

0x4223,	// (0x000464ba) phob_pre_status_pane_t3

0x0002,

0xf550,	// (0x000517e7) phob_pre_status_pane_t

0xc26a,	// (0x0004e501) bg_list_pane_cp05

0x2046,	// (0x000442dd) grid_vorec_pane

0xa83d,	// (0x0004cad4) vorec_t1

0xa84b,	// (0x0004cae2) vorec_t2

0xa859,	// (0x0004caf0) vorec_t3

0xa867,	// (0x0004cafe) vorec_t4

0xa875,	// (0x0004cb0c) vorec_t5

0xa883,	// (0x0004cb1a) vorec_t6

0x0006,

0xf21f,	// (0x000514b6) vorec_t

0xa89f,	// (0x0004cb36) wait_bar_pane_cp01

0x2050,	// (0x000442e7) cell_vorec_pane_ParamLimits

0x2050,	// (0x000442e7) cell_vorec_pane

0xc73d,	// (0x0004e9d4) cell_vorec_pane_g1

0xc26a,	// (0x0004e501) grid_highlight_pane_cp05

0x207b,	// (0x00044312) cams_zoom_pane

0x208a,	// (0x00044321) image_vga_pane

0x20a4,	// (0x0004433b) main_camera_pane_g1

0x20b6,	// (0x0004434d) main_camera_pane_g2

0x20c6,	// (0x0004435d) main_camera_pane_g3

0x20da,	// (0x00044371) main_camera_pane_g4

0x20ee,	// (0x00044385) main_camera_pane_g5

0x2102,	// (0x00044399) main_camera_pane_g6

0x2116,	// (0x000443ad) main_camera_pane_g7

0x0007,

0xf22e,	// (0x000514c5) main_camera_pane_g

0x212a,	// (0x000443c1) main_camera_pane_t1

0x2140,	// (0x000443d7) main_camera_pane_t2

0x0001,

0xf23f,	// (0x000514d6) main_camera_pane_t

0x217e,	// (0x00044415) cams_zoom_pane_cp_ParamLimits

0x217e,	// (0x00044415) cams_zoom_pane_cp

0x21a6,	// (0x0004443d) image_cif_pane_ParamLimits

0x21a6,	// (0x0004443d) image_cif_pane

0x21e1,	// (0x00044478) image_subqcif_pane

0x21eb,	// (0x00044482) main_video_pane_g1_ParamLimits

0x21eb,	// (0x00044482) main_video_pane_g1

0x220f,	// (0x000444a6) main_video_pane_g2_ParamLimits

0x220f,	// (0x000444a6) main_video_pane_g2

0x2245,	// (0x000444dc) main_video_pane_g3_ParamLimits

0x2245,	// (0x000444dc) main_video_pane_g3

0x2273,	// (0x0004450a) main_video_pane_g4_ParamLimits

0x2273,	// (0x0004450a) main_video_pane_g4

0x22a1,	// (0x00044538) main_video_pane_g5_ParamLimits

0x22a1,	// (0x00044538) main_video_pane_g5

0xc753,	// (0x0004e9ea) main_video_pane_g6_ParamLimits

0xc753,	// (0x0004e9ea) main_video_pane_g6

0x0006,

0xf244,	// (0x000514db) main_video_pane_g_ParamLimits

0xf244,	// (0x000514db) main_video_pane_g

0x22ca,	// (0x00044561) main_video_pane_t1_ParamLimits

0x22ca,	// (0x00044561) main_video_pane_t1

0xc76d,	// (0x0004ea04) cams_zoom_pane_g1

0xc776,	// (0x0004ea0d) cams_zoom_pane_g2

0xc77f,	// (0x0004ea16) cams_zoom_pane_g3

0xc788,	// (0x0004ea1f) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x000514ea) cams_zoom_pane_g

0x2327,	// (0x000445be) grid_cams_pane

0x2341,	// (0x000445d8) linegrid_cams_pane

0x2355,	// (0x000445ec) cell_cams_pane_ParamLimits

0x2355,	// (0x000445ec) cell_cams_pane

0xc791,	// (0x0004ea28) cams_burst_image_pane

0xc799,	// (0x0004ea30) cell_cams_pane_g1

0xc26a,	// (0x0004e501) grid_highlight_pane_cp03

0xc5e5,	// (0x0004e87c) mp_bg_pane_g1

0xc26a,	// (0x0004e501) bg_list_pane_cp03

0xe336,	// (0x000505cd) bg_mp_pane

0xe33e,	// (0x000505d5) grid_mp_pane

0xe346,	// (0x000505dd) media_player_g1

0xe350,	// (0x000505e7) media_player_t1

0xe35e,	// (0x000505f5) media_player_t2

0xe36c,	// (0x00050603) media_player_t3

0xe37a,	// (0x00050611) media_player_t4

0xe388,	// (0x0005061f) media_player_t5

0xe396,	// (0x0005062d) media_player_t6

0xe3a4,	// (0x0005063b) media_player_t7

0x0006,

0x0160,	// (0x000423f7) media_player_t

0xe3b2,	// (0x00050649) wait_bar_pane_cp02

0xf531,	// (0x000517c8) main_usb_pane_t

0x41d2,	// (0x00046469) cell_mp_pane

0xc5e5,	// (0x0004e87c) cell_mp_pane_g1

0xc26a,	// (0x0004e501) grid_highlight_pane_cp06

0xc7a1,	// (0x0004ea38) grid_skin_colour_pane

0xc7a9,	// (0x0004ea40) list_highlight_pane_cp03

0x2377,	// (0x0004460e) skin_g1

0xc7b1,	// (0x0004ea48) skin_t1

0xc7c0,	// (0x0004ea57) skin_t2

0x0001,

0xf288,	// (0x0005151f) skin_t

0x2381,	// (0x00044618) cell_skin_colour_pane_ParamLimits

0x2381,	// (0x00044618) cell_skin_colour_pane

0xc7ce,	// (0x0004ea65) cell_skin_colour_pane_g1

0x23f4,	// (0x0004468b) call_video_g1_ParamLimits

0x23f4,	// (0x0004468b) call_video_g1

0x2410,	// (0x000446a7) call_video_g2_ParamLimits

0x2410,	// (0x000446a7) call_video_g2

0x0001,

0xf28d,	// (0x00051524) call_video_g_ParamLimits

0xf28d,	// (0x00051524) call_video_g

0x2458,	// (0x000446ef) call_video_uplink_pane_cp1_ParamLimits

0x2458,	// (0x000446ef) call_video_uplink_pane_cp1

0xc7e0,	// (0x0004ea77) call_video_uplink_pane_cp2

0x24f9,	// (0x00044790) video_down_crop_pane_ParamLimits

0x24f9,	// (0x00044790) video_down_crop_pane

0x25e2,	// (0x00044879) video_down_pane_ParamLimits

0x25e2,	// (0x00044879) video_down_pane

0xc7e8,	// (0x0004ea7f) video_down_subqcif_pane_ParamLimits

0xc7e8,	// (0x0004ea7f) video_down_subqcif_pane

0xc802,	// (0x0004ea99) video_down_subqcif_pane_cp_ParamLimits

0xc802,	// (0x0004ea99) video_down_subqcif_pane_cp

0xc828,	// (0x0004eabf) im_reading_pane_ParamLimits

0xc828,	// (0x0004eabf) im_reading_pane

0x26eb,	// (0x00044982) im_writing_pane_ParamLimits

0x26eb,	// (0x00044982) im_writing_pane

0x2709,	// (0x000449a0) im_reading_pane_t1

0xc842,	// (0x0004ead9) list_im_pane

0xc853,	// (0x0004eaea) scroll_pane_cp07

0x2748,	// (0x000449df) im_writing_pane_t1_ParamLimits

0x2748,	// (0x000449df) im_writing_pane_t1

0xc86c,	// (0x0004eb03) im_writing_pane_t2_ParamLimits

0xc86c,	// (0x0004eb03) im_writing_pane_t2

0x0001,

0xf297,	// (0x0005152e) im_writing_pane_t_ParamLimits

0xf297,	// (0x0005152e) im_writing_pane_t

0xc26a,	// (0x0004e501) input_focus_pane_cp04

0xc26a,	// (0x0004e501) input_focus_pane_cp05

0x275d,	// (0x000449f4) list_im_single_pane_ParamLimits

0x275d,	// (0x000449f4) list_im_single_pane

0x2776,	// (0x00044a0d) list_single_im_pane_t1

0x4192,	// (0x00046429) blid_accuracy_pane

0x419a,	// (0x00046431) blid_compass_pane

0x41a4,	// (0x0004643b) main_location_t1

0x41b4,	// (0x0004644b) main_location_t2

0x41c4,	// (0x0004645b) main_location_t3

0x0002,

0xf53e,	// (0x000517d5) main_location_t

0xc26a,	// (0x0004e501) aid_levels_location

0xc5e5,	// (0x0004e87c) blid_accuracy_pane_g1

0xc5e5,	// (0x0004e87c) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00051590) blid_accuracy_pane_g

0xc8b4,	// (0x0004eb4b) wml_content_pane

0xc8f2,	// (0x0004eb89) wml_button_pane_ParamLimits

0xc8f2,	// (0x0004eb89) wml_button_pane

0x2785,	// (0x00044a1c) wml_list_single_large_pane_ParamLimits

0x2785,	// (0x00044a1c) wml_list_single_large_pane

0x279e,	// (0x00044a35) wml_list_single_medium_pane_ParamLimits

0x279e,	// (0x00044a35) wml_list_single_medium_pane

0x27b8,	// (0x00044a4f) wml_list_single_small_pane_ParamLimits

0x27b8,	// (0x00044a4f) wml_list_single_small_pane

0xc906,	// (0x0004eb9d) wml_selection_box_pane_ParamLimits

0xc906,	// (0x0004eb9d) wml_selection_box_pane

0xc919,	// (0x0004ebb0) wml_list_single_pane_t1

0xc928,	// (0x0004ebbf) wml_list_single_medium_pane_t1

0xc937,	// (0x0004ebce) wml_list_single_large_pane_t1

0xc946,	// (0x0004ebdd) input_focus_pane_cp02_ParamLimits

0xc946,	// (0x0004ebdd) input_focus_pane_cp02

0xc959,	// (0x0004ebf0) wml_selection_box_pane_g1

0xc962,	// (0x0004ebf9) wml_selection_box_pane_t1_ParamLimits

0xc962,	// (0x0004ebf9) wml_selection_box_pane_t1

0xc4c5,	// (0x0004e75c) bg_wml_button_pane_ParamLimits

0xc4c5,	// (0x0004e75c) bg_wml_button_pane

0xc97a,	// (0x0004ec11) wml_button_pane_g1

0xc982,	// (0x0004ec19) wml_button_pane_t1

0xc97a,	// (0x0004ec11) wml_button_bg_pane_g1

0xc992,	// (0x0004ec29) wml_button_bg_pane_g2

0xc99a,	// (0x0004ec31) wml_button_bg_pane_g3

0xc9a2,	// (0x0004ec39) wml_button_bg_pane_g4

0xc9aa,	// (0x0004ec41) wml_button_bg_pane_g5

0xc9b2,	// (0x0004ec49) wml_button_bg_pane_g6

0xc9ba,	// (0x0004ec51) wml_button_bg_pane_g7

0xc9c2,	// (0x0004ec59) wml_button_bg_pane_g8

0xc9ca,	// (0x0004ec61) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00051533) wml_button_bg_pane_g

0x27d7,	// (0x00044a6e) bg_list_pane_cp02

0xc9d2,	// (0x0004ec69) mce_header_pane_ParamLimits

0xc9d2,	// (0x0004ec69) mce_header_pane

0xc9e8,	// (0x0004ec7f) mce_icon_pane

0xc9e8,	// (0x0004ec7f) mce_image_pane

0xc9f1,	// (0x0004ec88) mce_text_pane_ParamLimits

0xc9f1,	// (0x0004ec88) mce_text_pane

0x27e1,	// (0x00044a78) scroll_pane_cp03

0xc8ea,	// (0x0004eb81) scroll_pane_cp04

0xca04,	// (0x0004ec9b) scroll_pane_cp05_ParamLimits

0xca04,	// (0x0004ec9b) scroll_pane_cp05

0x27eb,	// (0x00044a82) mce_header_field_pane_ParamLimits

0x27eb,	// (0x00044a82) mce_header_field_pane

0x2804,	// (0x00044a9b) mce_header_field_pane_2_ParamLimits

0x2804,	// (0x00044a9b) mce_header_field_pane_2

0x281a,	// (0x00044ab1) mce_header_field_pane_3

0x2822,	// (0x00044ab9) list_single_mce_message_pane_ParamLimits

0x2822,	// (0x00044ab9) list_single_mce_message_pane

0x283e,	// (0x00044ad5) list_single_mce_smart_pane_ParamLimits

0x283e,	// (0x00044ad5) list_single_mce_smart_pane

0xca10,	// (0x0004eca7) input_focus_pane_cp03

0xca19,	// (0x0004ecb0) list_header_data_pane

0x2865,	// (0x00044afc) mce_header_field_pane_t1

0x2875,	// (0x00044b0c) list_single_mce_header_pane_ParamLimits

0x2875,	// (0x00044b0c) list_single_mce_header_pane

0xca21,	// (0x0004ecb8) list_single_mce_header_pane_t1

0xca30,	// (0x0004ecc7) list_single_mce_message_pane_g1

0xca38,	// (0x0004eccf) list_single_mce_message_pane_t1

0x28a7,	// (0x00044b3e) bg_cale_heading_pane_cp01_ParamLimits

0x28a7,	// (0x00044b3e) bg_cale_heading_pane_cp01

0xca46,	// (0x0004ecdd) bg_cale_pane_cp02_ParamLimits

0xca46,	// (0x0004ecdd) bg_cale_pane_cp02

0x28da,	// (0x00044b71) cale_month_corner_pane

0x28f0,	// (0x00044b87) cale_month_day_heading_pane_ParamLimits

0x28f0,	// (0x00044b87) cale_month_day_heading_pane

0x2923,	// (0x00044bba) cale_month_pane_g1_ParamLimits

0x2923,	// (0x00044bba) cale_month_pane_g1

0x294f,	// (0x00044be6) cale_month_pane_g2_ParamLimits

0x294f,	// (0x00044be6) cale_month_pane_g2

0x2970,	// (0x00044c07) cale_month_pane_g3_ParamLimits

0x2970,	// (0x00044c07) cale_month_pane_g3

0x29ac,	// (0x00044c43) cale_month_pane_g4_ParamLimits

0x29ac,	// (0x00044c43) cale_month_pane_g4

0x29e8,	// (0x00044c7f) cale_month_pane_g5_ParamLimits

0x29e8,	// (0x00044c7f) cale_month_pane_g5

0x2a24,	// (0x00044cbb) cale_month_pane_g6_ParamLimits

0x2a24,	// (0x00044cbb) cale_month_pane_g6

0x2a60,	// (0x00044cf7) cale_month_pane_g7_ParamLimits

0x2a60,	// (0x00044cf7) cale_month_pane_g7

0x2a9c,	// (0x00044d33) cale_month_pane_g8_ParamLimits

0x2a9c,	// (0x00044d33) cale_month_pane_g8

0x2ad8,	// (0x00044d6f) cale_month_pane_g9_ParamLimits

0x2ad8,	// (0x00044d6f) cale_month_pane_g9

0x2b0e,	// (0x00044da5) cale_month_pane_g10_ParamLimits

0x2b0e,	// (0x00044da5) cale_month_pane_g10

0x2b38,	// (0x00044dcf) cale_month_pane_g11_ParamLimits

0x2b38,	// (0x00044dcf) cale_month_pane_g11

0x2b62,	// (0x00044df9) cale_month_pane_g12_ParamLimits

0x2b62,	// (0x00044df9) cale_month_pane_g12

0x2b90,	// (0x00044e27) cale_month_pane_g13_ParamLimits

0x2b90,	// (0x00044e27) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00051546) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00051546) cale_month_pane_g

0x2bbe,	// (0x00044e55) cale_month_week_pane

0x2bcf,	// (0x00044e66) grid_cale_month_pane_ParamLimits

0x2bcf,	// (0x00044e66) grid_cale_month_pane

0x2bfd,	// (0x00044e94) cale_month_day_heading_pane_t1

0x2c5b,	// (0x00044ef2) cale_month_day_heading_pane_t2

0x2cc0,	// (0x00044f57) cale_month_day_heading_pane_t3

0x2d25,	// (0x00044fbc) cale_month_day_heading_pane_t4

0x2d8a,	// (0x00045021) cale_month_day_heading_pane_t5

0x2def,	// (0x00045086) cale_month_day_heading_pane_t6

0x2e54,	// (0x000450eb) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00051561) cale_month_day_heading_pane_t

0xc6e2,	// (0x0004e979) bg_cale_side_pane_cp01

0x2eb9,	// (0x00045150) cale_month_week_pane_t1

0x2ed0,	// (0x00045167) cale_month_week_pane_t2

0x2ee7,	// (0x0004517e) cale_month_week_pane_t3

0x2efe,	// (0x00045195) cale_month_week_pane_t4

0x2f15,	// (0x000451ac) cale_month_week_pane_t5

0x2f2c,	// (0x000451c3) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00051570) cale_month_week_pane_t

0x2f4b,	// (0x000451e2) cell_cale_month_pane_ParamLimits

0x2f4b,	// (0x000451e2) cell_cale_month_pane

0xa98f,	// (0x0004cc26) cell_cale_month_pane_g1

0x2ff9,	// (0x00045290) cell_cale_month_pane_t1_ParamLimits

0x2ff9,	// (0x00045290) cell_cale_month_pane_t1

0xc6f0,	// (0x0004e987) grid_highlight_pane_cp08

0xc5e5,	// (0x0004e87c) main_smil_g1

0x3015,	// (0x000452ac) smil_status_pane

0xca7b,	// (0x0004ed12) smil_text_pane

0xe254,	// (0x000504eb) bg_popup_call3_rect_pane_g8

0xe25c,	// (0x000504f3) bg_popup_call3_rect_pane_g9

0x0008,

0x0103,	// (0x0004239a) bg_popup_call3_rect_pane_g

0xe4f1,	// (0x00050788) smil_status_volume_pane_g1

0xca85,	// (0x0004ed1c) smil_status_pane_t1

0xab04,	// (0x0004cd9b) volume_smil_pane

0xca9c,	// (0x0004ed33) list_smil_text_pane

0x302a,	// (0x000452c1) scroll_pane_cp011

0x3035,	// (0x000452cc) smil_text_list_pane_t1_ParamLimits

0x3035,	// (0x000452cc) smil_text_list_pane_t1

0xa99b,	// (0x0004cc32) aid_volume_smil_ParamLimits

0xa99b,	// (0x0004cc32) aid_volume_smil

0xc5e5,	// (0x0004e87c) smil_volume_pane_g1

0xc5e5,	// (0x0004e87c) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00051590) smil_volume_pane_g

0xc590,	// (0x0004e827) listscroll_cale_day_pane

0xcaa6,	// (0x0004ed3d) bg_cale_pane

0xcabe,	// (0x0004ed55) list_cale_pane

0xcacf,	// (0x0004ed66) scroll_pane_cp09

0xcae0,	// (0x0004ed77) cale_bg_pane_g1

0xcae8,	// (0x0004ed7f) cale_bg_pane_g2

0xcaf0,	// (0x0004ed87) cale_bg_pane_g3

0xcaf8,	// (0x0004ed8f) cale_bg_pane_g4

0xcb00,	// (0x0004ed97) cale_bg_pane_g5

0xcb08,	// (0x0004ed9f) cale_bg_pane_g6

0xcb10,	// (0x0004eda7) cale_bg_pane_g7

0xcb18,	// (0x0004edaf) cale_bg_pane_g8

0xcb20,	// (0x0004edb7) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00051595) cale_bg_pane_g

0x308a,	// (0x00045321) list_cale_time_pane_ParamLimits

0x308a,	// (0x00045321) list_cale_time_pane

0x309f,	// (0x00045336) list_cale_time_pane_g1_ParamLimits

0x309f,	// (0x00045336) list_cale_time_pane_g1

0xcb28,	// (0x0004edbf) list_cale_time_pane_g2_ParamLimits

0xcb28,	// (0x0004edbf) list_cale_time_pane_g2

0x30ab,	// (0x00045342) list_cale_time_pane_g3_ParamLimits

0x30ab,	// (0x00045342) list_cale_time_pane_g3

0x30b9,	// (0x00045350) list_cale_time_pane_g4_ParamLimits

0x30b9,	// (0x00045350) list_cale_time_pane_g4

0x30c7,	// (0x0004535e) list_cale_time_pane_g5_ParamLimits

0x30c7,	// (0x0004535e) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x000515a8) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x000515a8) list_cale_time_pane_g

0x30d5,	// (0x0004536c) list_cale_time_pane_t1_ParamLimits

0x30d5,	// (0x0004536c) list_cale_time_pane_t1

0x30fd,	// (0x00045394) list_cale_time_pane_t2_ParamLimits

0x30fd,	// (0x00045394) list_cale_time_pane_t2

0x3419,	// (0x000456b0) aid_blid_cardinal_pane

0x345b,	// (0x000456f2) compass_pane_t4

0x3125,	// (0x000453bc) list_cale_time_pane_t4_ParamLimits

0x3125,	// (0x000453bc) list_cale_time_pane_t4

0x3469,	// (0x00045700) compass_pane_t5

0x3479,	// (0x00045710) compass_pane_t6

0x3487,	// (0x0004571e) compass_pane_t7

0xcf36,	// (0x0004f1cd) navi_pane_cc_t1

0xd08b,	// (0x0004f322) aid_phob_thumbnail_center_pane

0x3b58,	// (0x00045def) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x000515b5) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x000515b5) list_cale_time_pane_t

0xa725,	// (0x0004c9bc) bg_popup_window_pane_cp02_ParamLimits

0xa725,	// (0x0004c9bc) bg_popup_window_pane_cp02

0xcb42,	// (0x0004edd9) heading_pane_cp01_ParamLimits

0xcb42,	// (0x0004edd9) heading_pane_cp01

0xcb4e,	// (0x0004ede5) loc_req_pane_ParamLimits

0xcb4e,	// (0x0004ede5) loc_req_pane

0xcb5e,	// (0x0004edf5) loc_type_pane_ParamLimits

0xcb5e,	// (0x0004edf5) loc_type_pane

0xcb70,	// (0x0004ee07) loc_type_pane_t1_ParamLimits

0xcb70,	// (0x0004ee07) loc_type_pane_t1

0xcb82,	// (0x0004ee19) loc_type_pane_t2_ParamLimits

0xcb82,	// (0x0004ee19) loc_type_pane_t2

0xcb94,	// (0x0004ee2b) loc_type_pane_t3_ParamLimits

0xcb94,	// (0x0004ee2b) loc_type_pane_t3

0x0002,

0xf325,	// (0x000515bc) loc_type_pane_t_ParamLimits

0xf325,	// (0x000515bc) loc_type_pane_t

0xcba6,	// (0x0004ee3d) list_loc_req_pane

0xcbb0,	// (0x0004ee47) scroll_pane_cp012

0x314d,	// (0x000453e4) list_single_loc_request_popup_menu_pane_ParamLimits

0x314d,	// (0x000453e4) list_single_loc_request_popup_menu_pane

0xcbbb,	// (0x0004ee52) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcbbb,	// (0x0004ee52) list_single_loc_request_popup_menu_pane_g1

0xcbc7,	// (0x0004ee5e) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcbc7,	// (0x0004ee5e) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x000515c3) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x000515c3) list_single_loc_request_popup_menu_pane_g

0xcbd3,	// (0x0004ee6a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcbd3,	// (0x0004ee6a) list_single_loc_request_popup_menu_pane_t1

0xc4c5,	// (0x0004e75c) bg_popup_window_pane_cp03_ParamLimits

0xc4c5,	// (0x0004e75c) bg_popup_window_pane_cp03

0xd559,	// (0x0004f7f0) heading_loc_req_pane_ParamLimits

0xd559,	// (0x0004f7f0) heading_loc_req_pane

0x315a,	// (0x000453f1) popup_dyc_status_message_window_g1_ParamLimits

0x315a,	// (0x000453f1) popup_dyc_status_message_window_g1

0x316e,	// (0x00045405) popup_dyc_status_message_window_t1_ParamLimits

0x316e,	// (0x00045405) popup_dyc_status_message_window_t1

0x3183,	// (0x0004541a) popup_dyc_status_message_window_t2_ParamLimits

0x3183,	// (0x0004541a) popup_dyc_status_message_window_t2

0x3198,	// (0x0004542f) popup_dyc_status_message_window_t3_ParamLimits

0x3198,	// (0x0004542f) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x000515c8) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x000515c8) popup_dyc_status_message_window_t

0xc26a,	// (0x0004e501) bg_heading_pane_cp01

0xcbe9,	// (0x0004ee80) heading_loc_req_pane_g1

0xcbf1,	// (0x0004ee88) heading_loc_req_pane_g2

0xcbf9,	// (0x0004ee90) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x000515cf) heading_loc_req_pane_g

0xcc01,	// (0x0004ee98) heading_loc_req_pane_t1

0xcc11,	// (0x0004eea8) bg_popup_sub_pane_cp01_ParamLimits

0xcc11,	// (0x0004eea8) bg_popup_sub_pane_cp01

0xcc1f,	// (0x0004eeb6) popup_cale_events_window_g1_ParamLimits

0xcc1f,	// (0x0004eeb6) popup_cale_events_window_g1

0xcc3f,	// (0x0004eed6) popup_cale_events_window_g2_ParamLimits

0xcc3f,	// (0x0004eed6) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00051603) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00051603) popup_cale_events_window_g

0xcc5f,	// (0x0004eef6) popup_cale_events_window_t1_ParamLimits

0xcc5f,	// (0x0004eef6) popup_cale_events_window_t1

0xcc71,	// (0x0004ef08) popup_cale_events_window_t2_ParamLimits

0xcc71,	// (0x0004ef08) popup_cale_events_window_t2

0xccaf,	// (0x0004ef46) popup_cale_events_window_t3_ParamLimits

0xccaf,	// (0x0004ef46) popup_cale_events_window_t3

0xcce9,	// (0x0004ef80) popup_cale_events_window_t4_ParamLimits

0xcce9,	// (0x0004ef80) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00051608) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00051608) popup_cale_events_window_t

0x31cc,	// (0x00045463) call_type_pane

0x31dc,	// (0x00045473) popup_call_status_window_g1

0x31f0,	// (0x00045487) popup_call_status_window_g2

0x3204,	// (0x0004549b) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00051611) popup_call_status_window_g

0xcd1f,	// (0x0004efb6) call_type_pane_g1

0xcd28,	// (0x0004efbf) call_type_pane_g2

0x0001,

0xf381,	// (0x00051618) call_type_pane_g

0xc26a,	// (0x0004e501) bg_popup_sub_pane_cp02

0xcd31,	// (0x0004efc8) listscroll_popup_wml_pane

0xcd39,	// (0x0004efd0) list_wml_pane

0xcd43,	// (0x0004efda) scroll_pane_cp013

0xcd4e,	// (0x0004efe5) list_single_graphic_popup_wml_pane_ParamLimits

0xcd4e,	// (0x0004efe5) list_single_graphic_popup_wml_pane

0xc5e5,	// (0x0004e87c) list_single_graphic_popup_wml_pane_g1

0xcd62,	// (0x0004eff9) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0005161d) list_single_graphic_popup_wml_pane_g

0xcd6a,	// (0x0004f001) list_single_graphic_popup_wml_pane_t1

0xcd80,	// (0x0004f017) aid_call_pane

0xc4bd,	// (0x0004e754) popup_clock_analogue_window_g1

0xc4bd,	// (0x0004e754) popup_clock_analogue_window_g2

0xaa34,	// (0x0004cccb) popup_clock_analogue_window_g3

0xaa34,	// (0x0004cccb) popup_clock_analogue_window_g4

0xc5e5,	// (0x0004e87c) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00051622) popup_clock_analogue_window_g

0xaa3c,	// (0x0004ccd3) popup_clock_analogue_window_t1

0xaa4a,	// (0x0004cce1) clock_digital_number_pane_ParamLimits

0xaa4a,	// (0x0004cce1) clock_digital_number_pane

0xaa56,	// (0x0004cced) clock_digital_number_pane_cp02_ParamLimits

0xaa56,	// (0x0004cced) clock_digital_number_pane_cp02

0xaa62,	// (0x0004ccf9) clock_digital_number_pane_cp03_ParamLimits

0xaa62,	// (0x0004ccf9) clock_digital_number_pane_cp03

0xaa6e,	// (0x0004cd05) clock_digital_number_pane_cp04_ParamLimits

0xaa6e,	// (0x0004cd05) clock_digital_number_pane_cp04

0xaa7a,	// (0x0004cd11) clock_digital_separator_pane_ParamLimits

0xaa7a,	// (0x0004cd11) clock_digital_separator_pane

0xaa86,	// (0x0004cd1d) popup_clock_digital_window_t1

0xc5e5,	// (0x0004e87c) clock_digital_number_pane_g1

0xc5e5,	// (0x0004e87c) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00051590) clock_digital_number_pane_g

0xc5e5,	// (0x0004e87c) clock_digital_separator_pane_g1

0xc5e5,	// (0x0004e87c) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00051590) clock_digital_separator_pane_g

0xc26a,	// (0x0004e501) bg_popup_window_pane_cp04

0xcd88,	// (0x0004f01f) heading_pane_cp03

0xcd90,	// (0x0004f027) listscroll_popup_gms_pane

0xcd98,	// (0x0004f02f) grid_large_graphic_popup_pane

0xcda2,	// (0x0004f039) listscroll_popup_gms_pane_g1

0xcdaa,	// (0x0004f041) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0005162d) listscroll_popup_gms_pane_g

0xc8ea,	// (0x0004eb81) scroll_pane_cp014

0x3214,	// (0x000454ab) cell_large_graphic_popup_pane_ParamLimits

0x3214,	// (0x000454ab) cell_large_graphic_popup_pane

0x322c,	// (0x000454c3) cell_large_graphic_popup_pane_g1_ParamLimits

0x322c,	// (0x000454c3) cell_large_graphic_popup_pane_g1

0xcdb2,	// (0x0004f049) cell_large_graphic_popup_pane_g2_ParamLimits

0xcdb2,	// (0x0004f049) cell_large_graphic_popup_pane_g2

0xcdbe,	// (0x0004f055) cell_large_graphic_popup_pane_g3_ParamLimits

0xcdbe,	// (0x0004f055) cell_large_graphic_popup_pane_g3

0xcdcb,	// (0x0004f062) cell_large_graphic_popup_pane_g4_ParamLimits

0xcdcb,	// (0x0004f062) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00051632) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00051632) cell_large_graphic_popup_pane_g

0xcde9,	// (0x0004f080) grid_highlight_pane_cp010

0xc5e5,	// (0x0004e87c) bg_popup_call_pane_g1

0xcdf3,	// (0x0004f08a) list_single_graphic_popup_conf_pane_ParamLimits

0xcdf3,	// (0x0004f08a) list_single_graphic_popup_conf_pane

0xce05,	// (0x0004f09c) list_highlight_pane_cp01

0xce0e,	// (0x0004f0a5) list_single_graphic_popup_conf_pane_g1

0xce16,	// (0x0004f0ad) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0005163b) list_single_graphic_popup_conf_pane_g

0xce1e,	// (0x0004f0b5) list_single_graphic_popup_conf_pane_t1

0xce2c,	// (0x0004f0c3) linegrid_cams_pane_g1

0x3238,	// (0x000454cf) linegrid_cams_pane_g2

0xc723,	// (0x0004e9ba) linegrid_cams_pane_g3

0xce35,	// (0x0004f0cc) linegrid_cams_pane_g4

0x3241,	// (0x000454d8) linegrid_cams_pane_g5

0x324a,	// (0x000454e1) linegrid_cams_pane_g6

0xc72c,	// (0x0004e9c3) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00051640) linegrid_cams_pane_g

0xce3e,	// (0x0004f0d5) popup_clock_analogue_window

0xce3e,	// (0x0004f0d5) popup_clock_digital_window

0xc26a,	// (0x0004e501) popup_phob_thumbnail_window

0xc5e5,	// (0x0004e87c) call_video_uplink_pane_g1

0xce47,	// (0x0004f0de) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0005164f) call_video_uplink_pane_g

0xce4f,	// (0x0004f0e6) video_uplink_pane

0xce57,	// (0x0004f0ee) mce_image_pane_g1

0x3255,	// (0x000454ec) mce_image_pane_g2

0x325f,	// (0x000454f6) mce_image_pane_g3

0x3269,	// (0x00045500) mce_image_pane_g4

0x3271,	// (0x00045508) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00051654) mce_image_pane_g

0xce61,	// (0x0004f0f8) control_top_pane_stacon_cp01_ParamLimits

0xce61,	// (0x0004f0f8) control_top_pane_stacon_cp01

0xce75,	// (0x0004f10c) uni_indicator_pane_stacon_cp01_ParamLimits

0xce75,	// (0x0004f10c) uni_indicator_pane_stacon_cp01

0xce86,	// (0x0004f11d) bg_popup_sub_pane_cp03

0x3279,	// (0x00045510) chi_dic_find_pane

0x3281,	// (0x00045518) listscroll_chi_dic_pane

0x328a,	// (0x00045521) main_pane_chidic_g1

0x329d,	// (0x00045534) chi_dic_find_pane_t1

0xce90,	// (0x0004f127) find_chidic_pane

0xce99,	// (0x0004f130) chi_dic_list_pane_ParamLimits

0xce99,	// (0x0004f130) chi_dic_list_pane

0xceaa,	// (0x0004f141) scroll_pane_cp020

0x32ab,	// (0x00045542) find_chidic_pane_t1

0xc26a,	// (0x0004e501) input_focus_pane_cp06

0x32ba,	// (0x00045551) list_chi_dic_pane_ParamLimits

0x32ba,	// (0x00045551) list_chi_dic_pane

0x32cc,	// (0x00045563) list_chi_dic_pane_t1_ParamLimits

0x32cc,	// (0x00045563) list_chi_dic_pane_t1

0xc26a,	// (0x0004e501) list_highlight_pane_cp020

0xceb2,	// (0x0004f149) bg_cale_heading_pane_g1

0x32df,	// (0x00045576) bg_cale_heading_pane_g2

0x32e7,	// (0x0004557e) bg_cale_heading_pane_g3

0x32ef,	// (0x00045586) bg_cale_heading_pane_g4

0x32f7,	// (0x0004558e) bg_cale_heading_pane_g5

0x32ff,	// (0x00045596) bg_cale_heading_pane_g6

0x3307,	// (0x0004559e) bg_cale_heading_pane_g7

0x330f,	// (0x000455a6) bg_cale_heading_pane_g8

0x3317,	// (0x000455ae) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0005165f) bg_cale_heading_pane_g

0xceb2,	// (0x0004f149) bg_cale_side_pane_g1

0x331f,	// (0x000455b6) bg_cale_side_pane_g2

0x3329,	// (0x000455c0) bg_cale_side_pane_g3

0x3333,	// (0x000455ca) bg_cale_side_pane_g4

0x333d,	// (0x000455d4) bg_cale_side_pane_g5

0x3347,	// (0x000455de) bg_cale_side_pane_g6

0x3351,	// (0x000455e8) bg_cale_side_pane_g7

0x335b,	// (0x000455f2) bg_cale_side_pane_g8

0x3363,	// (0x000455fa) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00051672) bg_cale_side_pane_g

0x336b,	// (0x00045602) popup_call_status_window_ParamLimits

0x336b,	// (0x00045602) popup_call_status_window

0xceba,	// (0x0004f151) stacon_top_pane

0xcec2,	// (0x0004f159) status_pane_ParamLimits

0xcec2,	// (0x0004f159) status_pane

0xced7,	// (0x0004f16e) status_small_pane

0xcedf,	// (0x0004f176) control_pane

0xc26a,	// (0x0004e501) stacon_bottom_pane

0xcee7,	// (0x0004f17e) list_single_mce_smart_pane_t1_ParamLimits

0xcee7,	// (0x0004f17e) list_single_mce_smart_pane_t1

0xcefa,	// (0x0004f191) list_single_mce_smart_pane_t2_ParamLimits

0xcefa,	// (0x0004f191) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00051685) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00051685) list_single_mce_smart_pane_t

0x33b8,	// (0x0004564f) compass_pane

0x33c3,	// (0x0004565a) main_location2_pane_t1

0x33d9,	// (0x00045670) main_location2_pane_t2

0x33ef,	// (0x00045686) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0005168a) main_location2_pane_t

0xcf19,	// (0x0004f1b0) compass_pane_g1_ParamLimits

0xcf19,	// (0x0004f1b0) compass_pane_g1

0x343d,	// (0x000456d4) compass_pane_t1

0x344c,	// (0x000456e3) compass_pane_t2

0x0005,

0xf3fc,	// (0x00051693) compass_pane_t

0x3497,	// (0x0004572e) text_secondary_cp61

0xcf2d,	// (0x0004f1c4) navi_pane_cams_g5

0xcf50,	// (0x0004f1e7) navi_pane_im_t1

0xcf5e,	// (0x0004f1f5) navi_pane_mp_g1_ParamLimits

0xcf5e,	// (0x0004f1f5) navi_pane_mp_g1

0xcf72,	// (0x0004f209) navi_pane_mp_g2_ParamLimits

0xcf72,	// (0x0004f209) navi_pane_mp_g2

0xcf7e,	// (0x0004f215) navi_pane_mp_g3_ParamLimits

0xcf7e,	// (0x0004f215) navi_pane_mp_g3

0x0002,

0xf410,	// (0x000516a7) navi_pane_mp_g_ParamLimits

0xf410,	// (0x000516a7) navi_pane_mp_g

0xcf8a,	// (0x0004f221) navi_pane_mp_t1

0xcf98,	// (0x0004f22f) navi_pane_mp_t2

0x0002,

0xf417,	// (0x000516ae) navi_pane_mp_t

0xcfd4,	// (0x0004f26b) navi_pane_vt_g1

0xcf8a,	// (0x0004f221) navi_pane_vt_t1

0xcfdc,	// (0x0004f273) navi_slider_pane

0xcfe4,	// (0x0004f27b) zooming_pane

0xcfec,	// (0x0004f283) navi_slider_pane_g1

0xaaa3,	// (0x0004cd3a) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x000516b5) navi_slider_pane_g

0xd010,	// (0x0004f2a7) aid_levels_zoom

0xd018,	// (0x0004f2af) zooming_pane_g1

0xd020,	// (0x0004f2b7) zooming_pane_g2

0xd020,	// (0x0004f2b7) zooming_pane_g3

0x0002,

0xf42d,	// (0x000516c4) zooming_pane_g

0xd028,	// (0x0004f2bf) level_10_zoom

0xd031,	// (0x0004f2c8) level_11_zoom

0xd03a,	// (0x0004f2d1) level_1_zoom

0xd043,	// (0x0004f2da) level_2_zoom

0xd04c,	// (0x0004f2e3) level_3_zoom

0xd055,	// (0x0004f2ec) level_4_zoom

0xd05e,	// (0x0004f2f5) level_5_zoom

0xd067,	// (0x0004f2fe) level_6_zoom

0xd070,	// (0x0004f307) level_7_zoom

0xd079,	// (0x0004f310) level_8_zoom

0xd082,	// (0x0004f319) level_9_zoom

0xd093,	// (0x0004f32a) popup_phob_thumbnail_window_g1

0xd09b,	// (0x0004f332) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x000516cb) popup_phob_thumbnail_window_g

0xe3ba,	// (0x00050651) level_1_location

0xe3c2,	// (0x00050659) level_2_location

0xe3ca,	// (0x00050661) level_3_location

0xe3d2,	// (0x00050669) level_4_location

0xcfe4,	// (0x0004f27b) level_5_location

0x35c2,	// (0x00045859) mce_icon_pane_g1

0x35ca,	// (0x00045861) mce_icon_pane_g2

0x0001,

0xf439,	// (0x000516d0) mce_icon_pane_g

0x35d2,	// (0x00045869) main_mup_pane_g1_ParamLimits

0x35d2,	// (0x00045869) main_mup_pane_g1

0x35e8,	// (0x0004587f) main_mup_pane_g2_ParamLimits

0x35e8,	// (0x0004587f) main_mup_pane_g2

0x3600,	// (0x00045897) main_mup_pane_g3_ParamLimits

0x3600,	// (0x00045897) main_mup_pane_g3

0x3618,	// (0x000458af) main_mup_pane_g4_ParamLimits

0x3618,	// (0x000458af) main_mup_pane_g4

0x362a,	// (0x000458c1) main_mup_pane_g5_ParamLimits

0x362a,	// (0x000458c1) main_mup_pane_g5

0x3646,	// (0x000458dd) main_mup_pane_g6_ParamLimits

0x3646,	// (0x000458dd) main_mup_pane_g6

0x3660,	// (0x000458f7) main_mup_pane_g7_ParamLimits

0x3660,	// (0x000458f7) main_mup_pane_g7

0x367e,	// (0x00045915) main_mup_pane_g8_ParamLimits

0x367e,	// (0x00045915) main_mup_pane_g8

0x369c,	// (0x00045933) main_mup_pane_g9_ParamLimits

0x369c,	// (0x00045933) main_mup_pane_g9

0x36b8,	// (0x0004594f) main_mup_pane_g10_ParamLimits

0x36b8,	// (0x0004594f) main_mup_pane_g10

0x36d6,	// (0x0004596d) main_mup_pane_g11_ParamLimits

0x36d6,	// (0x0004596d) main_mup_pane_g11

0x36f0,	// (0x00045987) main_mup_pane_g12_ParamLimits

0x36f0,	// (0x00045987) main_mup_pane_g12

0x3706,	// (0x0004599d) main_mup_pane_g13_ParamLimits

0x3706,	// (0x0004599d) main_mup_pane_g13

0x000c,

0xf43e,	// (0x000516d5) main_mup_pane_g_ParamLimits

0xf43e,	// (0x000516d5) main_mup_pane_g

0x371a,	// (0x000459b1) main_mup_pane_t1_ParamLimits

0x371a,	// (0x000459b1) main_mup_pane_t1

0x3736,	// (0x000459cd) main_mup_pane_t2_ParamLimits

0x3736,	// (0x000459cd) main_mup_pane_t2

0x374e,	// (0x000459e5) main_mup_pane_t3_ParamLimits

0x374e,	// (0x000459e5) main_mup_pane_t3

0x3766,	// (0x000459fd) main_mup_pane_t4_ParamLimits

0x3766,	// (0x000459fd) main_mup_pane_t4

0x3784,	// (0x00045a1b) main_mup_pane_t5_ParamLimits

0x3784,	// (0x00045a1b) main_mup_pane_t5

0x3799,	// (0x00045a30) main_mup_pane_t6_ParamLimits

0x3799,	// (0x00045a30) main_mup_pane_t6

0x0005,

0xf459,	// (0x000516f0) main_mup_pane_t_ParamLimits

0xf459,	// (0x000516f0) main_mup_pane_t

0x37ab,	// (0x00045a42) mup_progress_pane_ParamLimits

0x37ab,	// (0x00045a42) mup_progress_pane

0x37b7,	// (0x00045a4e) mup_visualizer_pane_ParamLimits

0x37b7,	// (0x00045a4e) mup_visualizer_pane

0x37eb,	// (0x00045a82) mup_volume_pane_ParamLimits

0x37eb,	// (0x00045a82) mup_volume_pane

0xcddb,	// (0x0004f072) mup_visualizer_pane_g1_ParamLimits

0xcddb,	// (0x0004f072) mup_visualizer_pane_g1

0xcddb,	// (0x0004f072) mup_visualizer_pane_g2_ParamLimits

0xcddb,	// (0x0004f072) mup_visualizer_pane_g2

0xcf19,	// (0x0004f1b0) mup_visualizer_pane_g3_ParamLimits

0xcf19,	// (0x0004f1b0) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x000516fd) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x000516fd) mup_visualizer_pane_g

0xc5e5,	// (0x0004e87c) mup_volume_pane_g1

0xd0ab,	// (0x0004f342) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00051704) mup_volume_pane_g

0xc5e5,	// (0x0004e87c) mup_progress_pane_g1

0xd0b4,	// (0x0004f34b) mup_progress_pane_g2

0xd0bd,	// (0x0004f354) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00051709) mup_progress_pane_g

0xc26a,	// (0x0004e501) bg_popup_window_pane_cp05

0xd0c6,	// (0x0004f35d) heading_pane_cp02_ParamLimits

0xd0c6,	// (0x0004f35d) heading_pane_cp02

0xd0e2,	// (0x0004f379) list_popup_blid_pane

0xd0ea,	// (0x0004f381) list_blid_sat_info_pane_ParamLimits

0xd0ea,	// (0x0004f381) list_blid_sat_info_pane

0xd0fd,	// (0x0004f394) list_blid_sat_info_pane_g1

0xd105,	// (0x0004f39c) list_blid_sat_info_pane_t1

0x3915,	// (0x00045bac) mup_equalizer_pane_ParamLimits

0x3915,	// (0x00045bac) mup_equalizer_pane

0x3936,	// (0x00045bcd) mup_equalizer_pane_cp1_ParamLimits

0x3936,	// (0x00045bcd) mup_equalizer_pane_cp1

0x3957,	// (0x00045bee) mup_equalizer_pane_cp2_ParamLimits

0x3957,	// (0x00045bee) mup_equalizer_pane_cp2

0x397c,	// (0x00045c13) mup_equalizer_pane_cp3_ParamLimits

0x397c,	// (0x00045c13) mup_equalizer_pane_cp3

0x39a5,	// (0x00045c3c) mup_equalizer_pane_cp4_ParamLimits

0x39a5,	// (0x00045c3c) mup_equalizer_pane_cp4

0x39ce,	// (0x00045c65) mup_equalizer_pane_cp5

0x39e6,	// (0x00045c7d) mup_equalizer_pane_cp6

0x39fe,	// (0x00045c95) mup_equalizer_pane_cp7

0xe2d4,	// (0x0005056b) bg_popup_call_poc_act_pane_g9

0xe2dc,	// (0x00050573) bg_popup_call_poc_act_pane_g10

0xe2e4,	// (0x0005057b) bg_popup_call_poc_act_pane_g11

0x000a,

0xc4c5,	// (0x0004e75c) mup_scale_pane

0xc5e5,	// (0x0004e87c) mup_scale_pane_g1

0xd113,	// (0x0004f3aa) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00051725) mup_scale_pane_g

0xd137,	// (0x0004f3ce) msg_data_pane

0xd13f,	// (0x0004f3d6) scroll_pane_cp017

0x0b84,	// (0x00042e1b) bg_list_pane_cp04_ParamLimits

0x0b84,	// (0x00042e1b) bg_list_pane_cp04

0xd147,	// (0x0004f3de) msg_data_pane_g1

0x3a28,	// (0x00045cbf) msg_data_pane_g2

0x3a32,	// (0x00045cc9) msg_data_pane_g3

0x3a3c,	// (0x00045cd3) msg_data_pane_g4

0x3a44,	// (0x00045cdb) msg_data_pane_g5

0x3a4c,	// (0x00045ce3) msg_data_pane_g6

0x3a54,	// (0x00045ceb) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00051734) msg_data_pane_g

0x0baa,	// (0x00042e41) msg_text_pane_ParamLimits

0x0baa,	// (0x00042e41) msg_text_pane

0x3a5c,	// (0x00045cf3) qrid_highlight_pane_cp011_ParamLimits

0x3a5c,	// (0x00045cf3) qrid_highlight_pane_cp011

0xc26a,	// (0x0004e501) msg_body_pane

0xc26a,	// (0x0004e501) msg_header_pane

0xd158,	// (0x0004f3ef) input_focus_pane_cp07

0x0be9,	// (0x00042e80) msg_header_pane_t1_ParamLimits

0x0be9,	// (0x00042e80) msg_header_pane_t1

0x0bfd,	// (0x00042e94) msg_header_pane_t2_ParamLimits

0x0bfd,	// (0x00042e94) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00051748) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00051748) msg_header_pane_t

0xd16d,	// (0x0004f404) msg_body_pane_g1

0x0c0f,	// (0x00042ea6) msg_body_pane_t1_ParamLimits

0x0c0f,	// (0x00042ea6) msg_body_pane_t1

0x0c40,	// (0x00042ed7) msg_body_pane_t2_ParamLimits

0x0c40,	// (0x00042ed7) msg_body_pane_t2

0x0c52,	// (0x00042ee9) msg_body_pane_t3_ParamLimits

0x0c52,	// (0x00042ee9) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0005174d) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0005174d) msg_body_pane_t

0x3aac,	// (0x00045d43) main_viewer_pane_g1_ParamLimits

0x3aac,	// (0x00045d43) main_viewer_pane_g1

0x3aba,	// (0x00045d51) main_viewer_pane_g2_ParamLimits

0x3aba,	// (0x00045d51) main_viewer_pane_g2

0x3ac8,	// (0x00045d5f) main_viewer_pane_g3_ParamLimits

0x3ac8,	// (0x00045d5f) main_viewer_pane_g3

0x3ad7,	// (0x00045d6e) main_viewer_pane_g4_ParamLimits

0x3ad7,	// (0x00045d6e) main_viewer_pane_g4

0xaacd,	// (0x0004cd64) main_viewer_pane_g5_ParamLimits

0xaacd,	// (0x0004cd64) main_viewer_pane_g5

0xaacd,	// (0x0004cd64) main_viewer_pane_g7_ParamLimits

0xaacd,	// (0x0004cd64) main_viewer_pane_g7

0xaadf,	// (0x0004cd76) main_viewer_pane_g8_ParamLimits

0xaadf,	// (0x0004cd76) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0005175d) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0005175d) main_viewer_pane_g

0xd175,	// (0x0004f40c) viewer_content_pane_ParamLimits

0xd175,	// (0x0004f40c) viewer_content_pane

0x3b15,	// (0x00045dac) main_postcard_pane_g1_ParamLimits

0x3b15,	// (0x00045dac) main_postcard_pane_g1

0x3b2b,	// (0x00045dc2) main_postcard_pane_g2_ParamLimits

0x3b2b,	// (0x00045dc2) main_postcard_pane_g2

0x3b41,	// (0x00045dd8) main_postcard_pane_g3_ParamLimits

0x3b41,	// (0x00045dd8) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0005176e) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0005176e) main_postcard_pane_g

0x3b58,	// (0x00045def) main_postcard_pane_g4

0xe504,	// (0x0005079b) smil_status_volume_pane_g2

0x3b9b,	// (0x00045e32) postcard_pane_ParamLimits

0x3b9b,	// (0x00045e32) postcard_pane

0xd191,	// (0x0004f428) postcard_pane_g1_ParamLimits

0xd191,	// (0x0004f428) postcard_pane_g1

0x3beb,	// (0x00045e82) postcard_pane_g2_ParamLimits

0x3beb,	// (0x00045e82) postcard_pane_g2

0x3bf7,	// (0x00045e8e) postcard_pane_g3_ParamLimits

0x3bf7,	// (0x00045e8e) postcard_pane_g3

0xd183,	// (0x0004f41a) postcard_pane_g4_ParamLimits

0xd183,	// (0x0004f41a) postcard_pane_g4

0x3c03,	// (0x00045e9a) postcard_pane_g5_ParamLimits

0x3c03,	// (0x00045e9a) postcard_pane_g5

0x3c15,	// (0x00045eac) postcard_pane_g6_ParamLimits

0x3c15,	// (0x00045eac) postcard_pane_g6

0xd191,	// (0x0004f428) postcard_pane_g7_ParamLimits

0xd191,	// (0x0004f428) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0005177b) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0005177b) postcard_pane_g

0x3c2d,	// (0x00045ec4) main_mp2_pane_g1_ParamLimits

0x3c2d,	// (0x00045ec4) main_mp2_pane_g1

0x3c3b,	// (0x00045ed2) main_mp2_pane_g2_ParamLimits

0x3c3b,	// (0x00045ed2) main_mp2_pane_g2

0x3c47,	// (0x00045ede) main_mp2_pane_g3_ParamLimits

0x3c47,	// (0x00045ede) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0005178a) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0005178a) main_mp2_pane_g

0x3c53,	// (0x00045eea) main_mp2_pane_t1_ParamLimits

0x3c53,	// (0x00045eea) main_mp2_pane_t1

0x3c6a,	// (0x00045f01) main_mp2_pane_t2_ParamLimits

0x3c6a,	// (0x00045f01) main_mp2_pane_t2

0x3c7e,	// (0x00045f15) main_mp2_pane_t3_ParamLimits

0x3c7e,	// (0x00045f15) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00051791) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00051791) main_mp2_pane_t

0xd19f,	// (0x0004f436) pec_content_pane_ParamLimits

0xd19f,	// (0x0004f436) pec_content_pane

0xc8ea,	// (0x0004eb81) scroll_pane_cp015

0xd1b1,	// (0x0004f448) pec_attribute_pane_ParamLimits

0xd1b1,	// (0x0004f448) pec_attribute_pane

0x3c90,	// (0x00045f27) pec_content_pane_g1_ParamLimits

0x3c90,	// (0x00045f27) pec_content_pane_g1

0xd1c1,	// (0x0004f458) pec_content_pane_t1_ParamLimits

0xd1c1,	// (0x0004f458) pec_content_pane_t1

0xd1d3,	// (0x0004f46a) pec_content_pane_t2_ParamLimits

0xd1d3,	// (0x0004f46a) pec_content_pane_t2

0x0001,

0x0072,	// (0x00042309) pec_content_pane_t_ParamLimits

0x0072,	// (0x00042309) pec_content_pane_t

0x3c9c,	// (0x00045f33) list_single_graphic_pane_cp01_ParamLimits

0x3c9c,	// (0x00045f33) list_single_graphic_pane_cp01

0xc4c5,	// (0x0004e75c) bg_popup_sub_pane_cp04

0xd1e5,	// (0x0004f47c) popup_mup_playback_window_g1

0xd1f1,	// (0x0004f488) popup_mup_playback_window_t1

0xd206,	// (0x0004f49d) popup_mup_playback_window_t2

0x0001,

0x0077,	// (0x0004230e) popup_mup_playback_window_t

0xd23d,	// (0x0004f4d4) main_image_pane_g1_ParamLimits

0xd23d,	// (0x0004f4d4) main_image_pane_g1

0xd280,	// (0x0004f517) scroll_pane_cp018_ParamLimits

0xd280,	// (0x0004f517) scroll_pane_cp018

0xd298,	// (0x0004f52f) scroll_pane_cp016_ParamLimits

0xd298,	// (0x0004f52f) scroll_pane_cp016

0x3d6e,	// (0x00046005) smil2_image_pane_ParamLimits

0x3d6e,	// (0x00046005) smil2_image_pane

0x3da4,	// (0x0004603b) smil2_root_pane_ParamLimits

0x3da4,	// (0x0004603b) smil2_root_pane

0x3ddc,	// (0x00046073) smil2_text_pane_ParamLimits

0x3ddc,	// (0x00046073) smil2_text_pane

0xc26a,	// (0x0004e501) bg_list_pane_cp06

0xd2d4,	// (0x0004f56b) grid_radio_pane

0xc26a,	// (0x0004e501) bg_popup_window_pane_cp06

0xd2de,	// (0x0004f575) main_fmradio_pane_t1

0xcd88,	// (0x0004f01f) heading_pane_cp04

0xd2ec,	// (0x0004f583) main_fmradio_pane_t2

0xe2ec,	// (0x00050583) popup_cale_lunar_info_window_g1

0xd2fa,	// (0x0004f591) main_fmradio_pane_t3

0xe2f4,	// (0x0005058b) popup_cale_lunar_info_window_g2

0xd30a,	// (0x0004f5a1) main_fmradio_pane_t4

0x0001,

0xd318,	// (0x0004f5af) main_fmradio_pane_t5

0x0004,

0x0152,	// (0x000423e9) popup_cale_lunar_info_window_g

0x008c,	// (0x00042323) main_fmradio_pane_t

0xd326,	// (0x0004f5bd) wait_bar_pane_cp03

0xd32e,	// (0x0004f5c5) cell_fmradio_pane_ParamLimits

0xd32e,	// (0x0004f5c5) cell_fmradio_pane

0xd191,	// (0x0004f428) cell_fmradio_pane_g1_ParamLimits

0xd191,	// (0x0004f428) cell_fmradio_pane_g1

0xc26a,	// (0x0004e501) grid_highlight_pane_cp011

0xd343,	// (0x0004f5da) poc_content_pane_ParamLimits

0xd343,	// (0x0004f5da) poc_content_pane

0xd355,	// (0x0004f5ec) scroll_pane_cp019

0x3e6c,	// (0x00046103) popup_call_poc_act_window_ParamLimits

0x3e6c,	// (0x00046103) popup_call_poc_act_window

0x3e90,	// (0x00046127) popup_call_poc_inact_window_ParamLimits

0x3e90,	// (0x00046127) popup_call_poc_inact_window

0x0129,	// (0x000423c0) bg_popup_call_poc_act_pane_g

0xe264,	// (0x000504fb) bg_popup_call_poc_inact_pane_g1

0xe26c,	// (0x00050503) bg_popup_call_poc_inact_pane_g2

0xd35d,	// (0x0004f5f4) popup_call_poc_act_window_g2

0xe274,	// (0x0005050b) bg_popup_call_poc_inact_pane_g3

0xe27c,	// (0x00050513) bg_popup_call_poc_inact_pane_g4

0xe284,	// (0x0005051b) bg_popup_call_poc_inact_pane_g5

0xd365,	// (0x0004f5fc) popup_call_poc_act_window_t1_ParamLimits

0xd365,	// (0x0004f5fc) popup_call_poc_act_window_t1

0xd38d,	// (0x0004f624) popup_call_poc_act_window_t2_ParamLimits

0xd38d,	// (0x0004f624) popup_call_poc_act_window_t2

0xd3b5,	// (0x0004f64c) popup_call_poc_act_window_t3_ParamLimits

0xd3b5,	// (0x0004f64c) popup_call_poc_act_window_t3

0xd3dd,	// (0x0004f674) popup_call_poc_act_window_t4_ParamLimits

0xd3dd,	// (0x0004f674) popup_call_poc_act_window_t4

0x0003,

0x0097,	// (0x0004232e) popup_call_poc_act_window_t_ParamLimits

0x0097,	// (0x0004232e) popup_call_poc_act_window_t

0xe28c,	// (0x00050523) bg_popup_call_poc_inact_pane_g6

0xe294,	// (0x0005052b) bg_popup_call_poc_inact_pane_g7

0xe29c,	// (0x00050533) bg_popup_call_poc_inact_pane_g8

0xd3ef,	// (0x0004f686) popup_call_poc_inact_window_g2

0xe2a4,	// (0x0005053b) bg_popup_call_poc_inact_pane_g9

0x0008,

0x0116,	// (0x000423ad) bg_popup_call_poc_inact_pane_g

0xd3f7,	// (0x0004f68e) popup_call_poc_inact_window_t1_ParamLimits

0xd3f7,	// (0x0004f68e) popup_call_poc_inact_window_t1

0xd40c,	// (0x0004f6a3) popup_call_poc_inact_window_t2_ParamLimits

0xd40c,	// (0x0004f6a3) popup_call_poc_inact_window_t2

0xd421,	// (0x0004f6b8) popup_call_poc_inact_window_t3_ParamLimits

0xd421,	// (0x0004f6b8) popup_call_poc_inact_window_t3

0x0002,

0x00a0,	// (0x00042337) popup_call_poc_inact_window_t_ParamLimits

0x00a0,	// (0x00042337) popup_call_poc_inact_window_t

0xe464,	// (0x000506fb) context_pane_ParamLimits

0x473b,	// (0x000469d2) signal_pane_ParamLimits

0xcfe4,	// (0x0004f27b) main_call2_pane

0xe452,	// (0x000506e9) popup_phob_thumbnail2_window_ParamLimits

0xe452,	// (0x000506e9) popup_phob_thumbnail2_window

0xaab5,	// (0x0004cd4c) aid_hotspot_pointer_arrow_pane

0xaabd,	// (0x0004cd54) aid_hotspot_pointer_hand_pane

0x41fb,	// (0x00046492) phob_pre_status_pane_g5

0x207b,	// (0x00044312) cams_zoom_pane_ParamLimits

0x208a,	// (0x00044321) image_vga_pane_ParamLimits

0x20a4,	// (0x0004433b) main_camera_pane_g1_ParamLimits

0x20b6,	// (0x0004434d) main_camera_pane_g2_ParamLimits

0x20c6,	// (0x0004435d) main_camera_pane_g3_ParamLimits

0x20da,	// (0x00044371) main_camera_pane_g4_ParamLimits

0x20ee,	// (0x00044385) main_camera_pane_g5_ParamLimits

0x2102,	// (0x00044399) main_camera_pane_g6_ParamLimits

0x2116,	// (0x000443ad) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x000514c5) main_camera_pane_g_ParamLimits

0x212a,	// (0x000443c1) main_camera_pane_t1_ParamLimits

0x2140,	// (0x000443d7) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x000514d6) main_camera_pane_t_ParamLimits

0xc4c5,	// (0x0004e75c) bg_popup_preview_window_pane_cp01_ParamLimits

0xc4c5,	// (0x0004e75c) bg_popup_preview_window_pane_cp01

0xd436,	// (0x0004f6cd) popup_phob_thumbnail2_window_g1_ParamLimits

0xd436,	// (0x0004f6cd) popup_phob_thumbnail2_window_g1

0xc26a,	// (0x0004e501) call2_cli_visual_pane

0x3ec4,	// (0x0004615b) popup_call2_audio_conf_window_ParamLimits

0x3ec4,	// (0x0004615b) popup_call2_audio_conf_window

0x3eec,	// (0x00046183) popup_call2_audio_first_window_ParamLimits

0x3eec,	// (0x00046183) popup_call2_audio_first_window

0x3f82,	// (0x00046219) popup_call2_audio_in_window_ParamLimits

0x3f82,	// (0x00046219) popup_call2_audio_in_window

0x3fce,	// (0x00046265) popup_call2_audio_out_window_ParamLimits

0x3fce,	// (0x00046265) popup_call2_audio_out_window

0x4040,	// (0x000462d7) popup_call2_audio_second_window_ParamLimits

0x4040,	// (0x000462d7) popup_call2_audio_second_window

0x40a6,	// (0x0004633d) popup_call2_audio_wait_window_ParamLimits

0x40a6,	// (0x0004633d) popup_call2_audio_wait_window

0xc26a,	// (0x0004e501) bg_popup_call2_act_pane_cp03

0xc4a7,	// (0x0004e73e) list_conf_pane_cp

0xd442,	// (0x0004f6d9) popup_call2_audio_conf_window_t1

0xd450,	// (0x0004f6e7) list_single_graphic_popup_conf2_pane_ParamLimits

0xd450,	// (0x0004f6e7) list_single_graphic_popup_conf2_pane

0xce05,	// (0x0004f09c) list_highlight_pane_cp04

0xd463,	// (0x0004f6fa) list_single_graphic_popup_conf2_pane_g1

0xce16,	// (0x0004f0ad) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x00a7,	// (0x0004233e) list_single_graphic_popup_conf2_pane_g

0xd46d,	// (0x0004f704) list_single_graphic_popup_conf2_pane_t1

0xd47b,	// (0x0004f712) bg_popup_call2_act_pane_cp01_ParamLimits

0xd47b,	// (0x0004f712) bg_popup_call2_act_pane_cp01

0xd505,	// (0x0004f79c) call_type_pane_cp05_ParamLimits

0xd505,	// (0x0004f79c) call_type_pane_cp05

0xd565,	// (0x0004f7fc) popup_call2_audio_second_window_g1_ParamLimits

0xd565,	// (0x0004f7fc) popup_call2_audio_second_window_g1

0xd5b9,	// (0x0004f850) popup_call2_audio_second_window_g2_ParamLimits

0xd5b9,	// (0x0004f850) popup_call2_audio_second_window_g2

0x0002,

0xf511,	// (0x000517a8) popup_call2_audio_second_window_g_ParamLimits

0xf511,	// (0x000517a8) popup_call2_audio_second_window_g

0xd61e,	// (0x0004f8b5) popup_call2_audio_second_window_t1_ParamLimits

0xd61e,	// (0x0004f8b5) popup_call2_audio_second_window_t1

0xd6d9,	// (0x0004f970) popup_call2_audio_second_window_t2_ParamLimits

0xd6d9,	// (0x0004f970) popup_call2_audio_second_window_t2

0xd72c,	// (0x0004f9c3) popup_call2_audio_second_window_t3_ParamLimits

0xd72c,	// (0x0004f9c3) popup_call2_audio_second_window_t3

0x0003,

0xf518,	// (0x000517af) popup_call2_audio_second_window_t_ParamLimits

0xf518,	// (0x000517af) popup_call2_audio_second_window_t

0xc26a,	// (0x0004e501) bg_popup_call2_in_pane_cp02

0xc274,	// (0x0004e50b) call_type_pane_cp04

0xc27c,	// (0x0004e513) popup_call2_audio_wait_window_g1

0xc284,	// (0x0004e51b) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x000513b2) popup_call2_audio_wait_window_g

0xc28c,	// (0x0004e523) popup_call2_audio_wait_window_t3

0xd81f,	// (0x0004fab6) bg_popup_call2_act_pane_ParamLimits

0xd81f,	// (0x0004fab6) bg_popup_call2_act_pane

0xd8df,	// (0x0004fb76) call_type_pane_cp03_ParamLimits

0xd8df,	// (0x0004fb76) call_type_pane_cp03

0xd95b,	// (0x0004fbf2) popup_call2_audio_first_window_g1_ParamLimits

0xd95b,	// (0x0004fbf2) popup_call2_audio_first_window_g1

0xd9cb,	// (0x0004fc62) popup_call2_audio_first_window_g2_ParamLimits

0xd9cb,	// (0x0004fc62) popup_call2_audio_first_window_g2

0xcddb,	// (0x0004f072) popup_call2_audio_first_window_g3_ParamLimits

0xcddb,	// (0x0004f072) popup_call2_audio_first_window_g3

0x0004,

0xf521,	// (0x000517b8) popup_call2_audio_first_window_g_ParamLimits

0xf521,	// (0x000517b8) popup_call2_audio_first_window_g

0xdaa9,	// (0x0004fd40) popup_call2_audio_first_window_t1_ParamLimits

0xdaa9,	// (0x0004fd40) popup_call2_audio_first_window_t1

0xdbac,	// (0x0004fe43) popup_call2_audio_first_window_t4_ParamLimits

0xdbac,	// (0x0004fe43) popup_call2_audio_first_window_t4

0xdc8f,	// (0x0004ff26) popup_call2_audio_first_window_t5_ParamLimits

0xdc8f,	// (0x0004ff26) popup_call2_audio_first_window_t5

0x0003,

0x00c7,	// (0x0004235e) popup_call2_audio_first_window_t_ParamLimits

0x00c7,	// (0x0004235e) popup_call2_audio_first_window_t

0xc4bd,	// (0x0004e754) bg_popup_call2_act_pane_g1

0xe2fe,	// (0x00050595) popup_cale_lunar_info_window_t1

0xe30c,	// (0x000505a3) popup_cale_lunar_info_window_t2

0xe31a,	// (0x000505b1) popup_cale_lunar_info_window_t3

0xc26a,	// (0x0004e501) bg_popup_call2_bubble_pane

0xdd90,	// (0x00050027) bg_popup_call2_in_pane_cp01_ParamLimits

0xdd90,	// (0x00050027) bg_popup_call2_in_pane_cp01

0xbf46,	// (0x0004e1dd) call_type_pane_cp02

0xddd8,	// (0x0005006f) popup_call2_audio_out_window_g1_ParamLimits

0xddd8,	// (0x0005006f) popup_call2_audio_out_window_g1

0xde04,	// (0x0005009b) popup_call2_audio_out_window_g2_ParamLimits

0xde04,	// (0x0005009b) popup_call2_audio_out_window_g2

0xde2c,	// (0x000500c3) popup_call2_audio_out_window_g3_ParamLimits

0xde2c,	// (0x000500c3) popup_call2_audio_out_window_g3

0x0003,

0x00d0,	// (0x00042367) popup_call2_audio_out_window_g_ParamLimits

0x00d0,	// (0x00042367) popup_call2_audio_out_window_g

0xde67,	// (0x000500fe) popup_call2_audio_out_window_t1_ParamLimits

0xde67,	// (0x000500fe) popup_call2_audio_out_window_t1

0xdec6,	// (0x0005015d) popup_call2_audio_out_window_t2_ParamLimits

0xdec6,	// (0x0005015d) popup_call2_audio_out_window_t2

0xdf1a,	// (0x000501b1) popup_call2_audio_out_window_t3_ParamLimits

0xdf1a,	// (0x000501b1) popup_call2_audio_out_window_t3

0xdf30,	// (0x000501c7) popup_call2_audio_out_window_t4_ParamLimits

0xdf30,	// (0x000501c7) popup_call2_audio_out_window_t4

0xdf46,	// (0x000501dd) popup_call2_audio_out_window_t5_ParamLimits

0xdf46,	// (0x000501dd) popup_call2_audio_out_window_t5

0x0005,

0x00d9,	// (0x00042370) popup_call2_audio_out_window_t_ParamLimits

0x00d9,	// (0x00042370) popup_call2_audio_out_window_t

0xdfaa,	// (0x00050241) bg_popup_call2_in_pane_ParamLimits

0xdfaa,	// (0x00050241) bg_popup_call2_in_pane

0xe006,	// (0x0005029d) popup_call2_audio_in_window_g1_ParamLimits

0xe006,	// (0x0005029d) popup_call2_audio_in_window_g1

0xe03e,	// (0x000502d5) popup_call2_audio_in_window_g2_ParamLimits

0xe03e,	// (0x000502d5) popup_call2_audio_in_window_g2

0xe076,	// (0x0005030d) popup_call2_audio_in_window_g3_ParamLimits

0xe076,	// (0x0005030d) popup_call2_audio_in_window_g3

0x0003,

0x00e6,	// (0x0004237d) popup_call2_audio_in_window_g_ParamLimits

0x00e6,	// (0x0004237d) popup_call2_audio_in_window_g

0xe0ce,	// (0x00050365) popup_call2_audio_in_window_t1_ParamLimits

0xe0ce,	// (0x00050365) popup_call2_audio_in_window_t1

0xe14e,	// (0x000503e5) popup_call2_audio_in_window_t2_ParamLimits

0xe14e,	// (0x000503e5) popup_call2_audio_in_window_t2

0xe1ce,	// (0x00050465) popup_call2_audio_in_window_t3_ParamLimits

0xe1ce,	// (0x00050465) popup_call2_audio_in_window_t3

0xe1e8,	// (0x0005047f) popup_call2_audio_in_window_t4_ParamLimits

0xe1e8,	// (0x0005047f) popup_call2_audio_in_window_t4

0xe1fa,	// (0x00050491) popup_call2_audio_in_window_t5_ParamLimits

0xe1fa,	// (0x00050491) popup_call2_audio_in_window_t5

0xe20f,	// (0x000504a6) popup_call2_audio_in_window_t6_ParamLimits

0xe20f,	// (0x000504a6) popup_call2_audio_in_window_t6

0x0005,

0x00ef,	// (0x00042386) popup_call2_audio_in_window_t_ParamLimits

0x00ef,	// (0x00042386) popup_call2_audio_in_window_t

0xc4bd,	// (0x0004e754) bg_popup_call2_in_pane_g1

0xe328,	// (0x000505bf) popup_cale_lunar_info_window_t4

0x0003,

0x0157,	// (0x000423ee) popup_cale_lunar_info_window_t

0xc4c5,	// (0x0004e75c) bg_popup_call2_rect_pane_ParamLimits

0xc4c5,	// (0x0004e75c) bg_popup_call2_rect_pane

0xc26a,	// (0x0004e501) call2_cli_visual_graphic_pane

0xc26a,	// (0x0004e501) call2_cli_visual_text_pane

0xaaf7,	// (0x0004cd8e) smil_status_volume_pane_g3

0x0002,

0xc5e5,	// (0x0004e87c) call2_cli_visual_graphic_pane_g1

0xc5e5,	// (0x0004e87c) call2_cli_visual_graphic_pane_g2

0xc5e5,	// (0x0004e87c) call2_cli_visual_graphic_pane_g3

0x0002,

0x00fc,	// (0x00042393) call2_cli_visual_graphic_pane_g

0xe224,	// (0x000504bb) bg_popup_call2_rect_pane_g1

0xc683,	// (0x0004e91a) bg_popup_call2_rect_pane_g2

0xe22c,	// (0x000504c3) bg_popup_call2_rect_pane_g3

0xe234,	// (0x000504cb) bg_popup_call2_rect_pane_g4

0xe23c,	// (0x000504d3) bg_popup_call2_rect_pane_g5

0xe244,	// (0x000504db) bg_popup_call2_rect_pane_g6

0xe24c,	// (0x000504e3) bg_popup_call2_rect_pane_g7

0xe254,	// (0x000504eb) bg_popup_call2_rect_pane_g8

0xe25c,	// (0x000504f3) bg_popup_call2_rect_pane_g9

0x0008,

0x0103,	// (0x0004239a) bg_popup_call2_rect_pane_g

0xe264,	// (0x000504fb) bg_popup_call2_bubble_pane_g1

0xe26c,	// (0x00050503) bg_popup_call2_bubble_pane_g2

0xe274,	// (0x0005050b) bg_popup_call2_bubble_pane_g3

0xe27c,	// (0x00050513) bg_popup_call2_bubble_pane_g4

0xe284,	// (0x0005051b) bg_popup_call2_bubble_pane_g5

0xe28c,	// (0x00050523) bg_popup_call2_bubble_pane_g6

0xe294,	// (0x0005052b) bg_popup_call2_bubble_pane_g7

0xe29c,	// (0x00050533) bg_popup_call2_bubble_pane_g8

0xe2a4,	// (0x0005053b) bg_popup_call2_bubble_pane_g9

0x0008,

0x0116,	// (0x000423ad) bg_popup_call2_bubble_pane_g

0x1c84,	// (0x00043f1b) aid_cale_week_size_cell_pane

0x215a,	// (0x000443f1) aid_cams_cif_uncrop_pane_ParamLimits

0x215a,	// (0x000443f1) aid_cams_cif_uncrop_pane

0x2313,	// (0x000445aa) aid_cams_size_cell_ParamLimits

0x2313,	// (0x000445aa) aid_cams_size_cell

0x2327,	// (0x000445be) grid_cams_pane_ParamLimits

0x2341,	// (0x000445d8) linegrid_cams_pane_ParamLimits

0x2424,	// (0x000446bb) call_video_pane_t1

0x243e,	// (0x000446d5) call_video_pane_t2

0x0001,

0xf292,	// (0x00051529) call_video_pane_t

0x2889,	// (0x00044b20) aid_cale_month_size_cell_pane_ParamLimits

0x2889,	// (0x00044b20) aid_cale_month_size_cell_pane

0xf55c,	// (0x000517f3) smil_status_volume_pane_g

0xab04,	// (0x0004cd9b) volume_smil_pane_ParamLimits

0xa646,	// (0x0004c8dd) aid_popup2_width_pane

0x1bec,	// (0x00043e83) cell_qdial_pane_g4_ParamLimits

0x1bec,	// (0x00043e83) cell_qdial_pane_g4

0x3419,	// (0x000456b0) aid_blid_cardinal_pane_ParamLimits

0x3429,	// (0x000456c0) aid_blid_destination_pane_ParamLimits

0x3429,	// (0x000456c0) aid_blid_destination_pane

0xc4c5,	// (0x0004e75c) bg_popup_call_poc_act_pane_ParamLimits

0xc4c5,	// (0x0004e75c) bg_popup_call_poc_act_pane

0xc4c5,	// (0x0004e75c) bg_popup_call_poc_inact_pane_ParamLimits

0xc4c5,	// (0x0004e75c) bg_popup_call_poc_inact_pane

0xe2ac,	// (0x00050543) bg_popup_call_poc_act_pane_g1

0xe2b4,	// (0x0005054b) bg_popup_call_poc_act_pane_g2

0xe2bc,	// (0x00050553) bg_popup_call_poc_act_pane_g3

0xe27c,	// (0x00050513) bg_popup_call_poc_act_pane_g4

0xe284,	// (0x0005051b) bg_popup_call_poc_act_pane_g5

0xe2c4,	// (0x0005055b) bg_popup_call_poc_act_pane_g6

0xe294,	// (0x0005052b) bg_popup_call_poc_act_pane_g7

0xe2cc,	// (0x00050563) bg_popup_call_poc_act_pane_g8

0xc26a,	// (0x0004e501) main_usb_pane

0xe429,	// (0x000506c0) popup_cale_lunar_info_window

0x2709,	// (0x000449a0) im_reading_pane_t1_ParamLimits

0xc842,	// (0x0004ead9) list_im_pane_ParamLimits

0xc853,	// (0x0004eaea) scroll_pane_cp07_ParamLimits

0xc26a,	// (0x0004e501) grid_highlight_pane_cp012

0xc4c5,	// (0x0004e75c) mup_scale_pane_ParamLimits

0xd191,	// (0x0004f428) main_usb_pane_g1_ParamLimits

0xd191,	// (0x0004f428) main_usb_pane_g1

0x4107,	// (0x0004639e) main_usb_pane_g2_ParamLimits

0x4107,	// (0x0004639e) main_usb_pane_g2

0x0001,

0xf52c,	// (0x000517c3) main_usb_pane_g_ParamLimits

0xf52c,	// (0x000517c3) main_usb_pane_g

0x411d,	// (0x000463b4) main_usb_pane_t1_ParamLimits

0x411d,	// (0x000463b4) main_usb_pane_t1

0x412f,	// (0x000463c6) main_usb_pane_t2_ParamLimits

0x412f,	// (0x000463c6) main_usb_pane_t2

0x4141,	// (0x000463d8) main_usb_pane_t3_ParamLimits

0x4141,	// (0x000463d8) main_usb_pane_t3

0x4153,	// (0x000463ea) main_usb_pane_t4_ParamLimits

0x4153,	// (0x000463ea) main_usb_pane_t4

0x4168,	// (0x000463ff) main_usb_pane_t5_ParamLimits

0x4168,	// (0x000463ff) main_usb_pane_t5

0x417d,	// (0x00046414) main_usb_pane_t6_ParamLimits

0x417d,	// (0x00046414) main_usb_pane_t6

0x0005,

0xf531,	// (0x000517c8) main_usb_pane_t_ParamLimits

0x33b8,	// (0x0004564f) aid_text_placing

0x33c3,	// (0x0004565a) main_location2_pane_t1_ParamLimits

0x33d9,	// (0x00045670) main_location2_pane_t2_ParamLimits

0x33ef,	// (0x00045686) main_location2_pane_t3_ParamLimits

0x3405,	// (0x0004569c) main_location2_pane_t4_ParamLimits

0x3405,	// (0x0004569c) main_location2_pane_t4

0xf3f3,	// (0x0005168a) main_location2_pane_t_ParamLimits

0xc501,	// (0x0004e798) find_pinb_pane_g2_ParamLimits

0xc501,	// (0x0004e798) find_pinb_pane_g2

0x0001,

0xf141,	// (0x000513d8) find_pinb_pane_g_ParamLimits

0xf141,	// (0x000513d8) find_pinb_pane_g

0xc50d,	// (0x0004e7a4) find_pinb_pane_t1_ParamLimits

0xc51f,	// (0x0004e7b6) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x000513dd) find_pinb_pane_t_ParamLimits

0xc26a,	// (0x0004e501) main_call3_pane

0x2bfd,	// (0x00044e94) cale_month_day_heading_pane_t1_ParamLimits

0x2c5b,	// (0x00044ef2) cale_month_day_heading_pane_t2_ParamLimits

0x2cc0,	// (0x00044f57) cale_month_day_heading_pane_t3_ParamLimits

0x2d25,	// (0x00044fbc) cale_month_day_heading_pane_t4_ParamLimits

0x2d8a,	// (0x00045021) cale_month_day_heading_pane_t5_ParamLimits

0x2def,	// (0x00045086) cale_month_day_heading_pane_t6_ParamLimits

0x2e54,	// (0x000450eb) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00051561) cale_month_day_heading_pane_t_ParamLimits

0xca93,	// (0x0004ed2a) smil_status_volume_pane

0x3bbf,	// (0x00045e56) postcard_address_pane_ParamLimits

0x3bbf,	// (0x00045e56) postcard_address_pane

0x3bd5,	// (0x00045e6c) postcard_message_pane_ParamLimits

0x3bd5,	// (0x00045e6c) postcard_message_pane

0x40e0,	// (0x00046377) call2_cli_visual_pane_t1_ParamLimits

0x40e0,	// (0x00046377) call2_cli_visual_pane_t1

0x494c,	// (0x00046be3) postcard_message_pane_t1_ParamLimits

0x494c,	// (0x00046be3) postcard_message_pane_t1

0xe517,	// (0x000507ae) postcard_address_pane_t1_ParamLimits

0xe517,	// (0x000507ae) postcard_address_pane_t1

0x4938,	// (0x00046bcf) popup_call3_audio_in_window_ParamLimits

0x4938,	// (0x00046bcf) popup_call3_audio_in_window

0x47bd,	// (0x00046a54) bg_popup_call3_in_pane_ParamLimits

0x47bd,	// (0x00046a54) bg_popup_call3_in_pane

0x4839,	// (0x00046ad0) popup_call3_audio_in_window_g1_ParamLimits

0x4839,	// (0x00046ad0) popup_call3_audio_in_window_g1

0x4859,	// (0x00046af0) popup_call3_audio_in_window_g2_ParamLimits

0x4859,	// (0x00046af0) popup_call3_audio_in_window_g2

0x4879,	// (0x00046b10) popup_call3_audio_in_window_g3_ParamLimits

0x4879,	// (0x00046b10) popup_call3_audio_in_window_g3

0x0003,

0xf563,	// (0x000517fa) popup_call3_audio_in_window_g_ParamLimits

0xf563,	// (0x000517fa) popup_call3_audio_in_window_g

0x48aa,	// (0x00046b41) popup_call3_audio_in_window_t1_ParamLimits

0x48aa,	// (0x00046b41) popup_call3_audio_in_window_t1

0x48e8,	// (0x00046b7f) popup_call3_audio_in_window_t2_ParamLimits

0x48e8,	// (0x00046b7f) popup_call3_audio_in_window_t2

0x4926,	// (0x00046bbd) popup_call3_audio_in_window_t3_ParamLimits

0x4926,	// (0x00046bbd) popup_call3_audio_in_window_t3

0x0002,

0xf56c,	// (0x00051803) popup_call3_audio_in_window_t_ParamLimits

0xf56c,	// (0x00051803) popup_call3_audio_in_window_t

0xcfe4,	// (0x0004f27b) bg_popup_call3_rect_pane

0xe224,	// (0x000504bb) bg_popup_call3_rect_pane_g1

0xc683,	// (0x0004e91a) bg_popup_call3_rect_pane_g2

0xe22c,	// (0x000504c3) bg_popup_call3_rect_pane_g3

0xe234,	// (0x000504cb) bg_popup_call3_rect_pane_g4

0xe23c,	// (0x000504d3) bg_popup_call3_rect_pane_g5

0xe244,	// (0x000504db) bg_popup_call3_rect_pane_g6

0xe24c,	// (0x000504e3) bg_popup_call3_rect_pane_g7

0x3801,	// (0x00045a98) mup_visualizer_osc_pane

0xd0a3,	// (0x0004f33a) mup_visualizer_spec_pane

0x47ed,	// (0x00046a84) call3_video_qcif_pane_ParamLimits

0x47ed,	// (0x00046a84) call3_video_qcif_pane

0x4800,	// (0x00046a97) call3_video_qcif_uncrop_pane_ParamLimits

0x4800,	// (0x00046a97) call3_video_qcif_uncrop_pane

0x4810,	// (0x00046aa7) call3_video_subqcif_pane_ParamLimits

0x4810,	// (0x00046aa7) call3_video_subqcif_pane

0x4826,	// (0x00046abd) call3_video_subqcif_uncrop_pane_ParamLimits

0x4826,	// (0x00046abd) call3_video_subqcif_uncrop_pane

0x4899,	// (0x00046b30) popup_call3_audio_in_window_g4_ParamLimits

0x4899,	// (0x00046b30) popup_call3_audio_in_window_g4

0x47ac,	// (0x00046a43) mup_spec_half_pane

0x47b5,	// (0x00046a4c) mup_spec_half_pane_cp

0xe4d7,	// (0x0005076e) mup_osc_middle_pane

0xe4e0,	// (0x00050777) mup_visualizer_osc_pane_g1

0x478c,	// (0x00046a23) mup_spec_bar_pane_ParamLimits

0x478c,	// (0x00046a23) mup_spec_bar_pane

0xe4c4,	// (0x0005075b) mup_spec_bar_pane_g1

0xe4ce,	// (0x00050765) mup_spec_bar_pane_g2

0x0001,

0x019b,	// (0x00042432) mup_spec_bar_pane_g

0x1c84,	// (0x00043f1b) aid_cale_week_size_cell_pane_ParamLimits

0x1c97,	// (0x00043f2e) bg_cale_heading_pane_ParamLimits

0xc6b7,	// (0x0004e94e) bg_cale_pane_cp01_ParamLimits

0x1cb3,	// (0x00043f4a) cale_week_corner_pane_ParamLimits

0x1cc9,	// (0x00043f60) cale_week_day_heading_pane_ParamLimits

0x1ce5,	// (0x00043f7c) cale_week_scroll_pane_g1_ParamLimits

0x1cfe,	// (0x00043f95) cale_week_scroll_pane_g2_ParamLimits

0x1d0f,	// (0x00043fa6) cale_week_scroll_pane_g3_ParamLimits

0x1d20,	// (0x00043fb7) cale_week_scroll_pane_g4_ParamLimits

0x1d31,	// (0x00043fc8) cale_week_scroll_pane_g5_ParamLimits

0x1d42,	// (0x00043fd9) cale_week_scroll_pane_g6_ParamLimits

0x1d53,	// (0x00043fea) cale_week_scroll_pane_g7_ParamLimits

0x1d64,	// (0x00043ffb) cale_week_scroll_pane_g8_ParamLimits

0x1d75,	// (0x0004400c) cale_week_scroll_pane_g9_ParamLimits

0x1d86,	// (0x0004401d) cale_week_scroll_pane_g10_ParamLimits

0x1d97,	// (0x0004402e) cale_week_scroll_pane_g11_ParamLimits

0x1da8,	// (0x0004403f) cale_week_scroll_pane_g12_ParamLimits

0x1db9,	// (0x00044050) cale_week_scroll_pane_g13_ParamLimits

0x1dd2,	// (0x00044069) cale_week_scroll_pane_g14_ParamLimits

0x1deb,	// (0x00044082) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00051469) cale_week_scroll_pane_g_ParamLimits

0x1e04,	// (0x0004409b) cale_week_time_pane_ParamLimits

0x1e15,	// (0x000440ac) grid_cale_week_pane_ParamLimits

0xc6d0,	// (0x0004e967) listscroll_cale_week_pane_t1

0x1e30,	// (0x000440c7) scroll_pane_cp08_ParamLimits

0x28da,	// (0x00044b71) cale_month_corner_pane_ParamLimits

0xca69,	// (0x0004ed00) cale_month_pane_t1

0x2bbe,	// (0x00044e55) cale_month_week_pane_ParamLimits

0x31dc,	// (0x00045473) popup_call_status_window_g1_ParamLimits

0x31f0,	// (0x00045487) popup_call_status_window_g2_ParamLimits

0x3204,	// (0x0004549b) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00051611) popup_call_status_window_g_ParamLimits

0xcd78,	// (0x0004f00f) aid_call2_pane

0x0bdb,	// (0x00042e72) msg_header_pane_g1

0x3bbf,	// (0x00045e56) postcard_address2_pane_ParamLimits

0x3bbf,	// (0x00045e56) postcard_address2_pane

0x3bd5,	// (0x00045e6c) postcard_message2_pane_ParamLimits

0x3bd5,	// (0x00045e6c) postcard_message2_pane

0x4749,	// (0x000469e0) message2_row_pane_ParamLimits

0x4749,	// (0x000469e0) message2_row_pane

0xe47f,	// (0x00050716) address2_row_pane_ParamLimits

0xe47f,	// (0x00050716) address2_row_pane

0xe492,	// (0x00050729) postcard_message2_row_pane_g1

0xe49a,	// (0x00050731) postcard_message2_row_pane_t1

0xe492,	// (0x00050729) address2_row_pane_g1

0xe49a,	// (0x00050731) address2_row_pane_t1

0x203e,	// (0x000442d5) aid_size_cell_vorec

0xc26a,	// (0x0004e501) main_rss_pane

0x476c,	// (0x00046a03) rss_list_single_pane_ParamLimits

0x476c,	// (0x00046a03) rss_list_single_pane

0xe4a8,	// (0x0005073f) rss_list_single_pane_t1

0xe4b6,	// (0x0005074d) rss_list_single_pane_t2

0x0001,

0x0196,	// (0x0004242d) rss_list_single_pane_t

0xc26a,	// (0x0004e501) main_camera2_pane

0xc26a,	// (0x0004e501) main_video2_pane

0x49bb,	// (0x00046c52) cams_zoom_pane_cp2_ParamLimits

0x49bb,	// (0x00046c52) cams_zoom_pane_cp2

0x49d2,	// (0x00046c69) image2_vga_pane_ParamLimits

0x49d2,	// (0x00046c69) image2_vga_pane

0x4a1a,	// (0x00046cb1) main_camera2_pane_g1_ParamLimits

0x4a1a,	// (0x00046cb1) main_camera2_pane_g1

0x4a3a,	// (0x00046cd1) main_camera2_pane_g2_ParamLimits

0x4a3a,	// (0x00046cd1) main_camera2_pane_g2

0x4a51,	// (0x00046ce8) main_camera2_pane_g3_ParamLimits

0x4a51,	// (0x00046ce8) main_camera2_pane_g3

0x4a68,	// (0x00046cff) main_camera2_pane_g4_ParamLimits

0x4a68,	// (0x00046cff) main_camera2_pane_g4

0x4a7f,	// (0x00046d16) main_camera2_pane_g5_ParamLimits

0x4a7f,	// (0x00046d16) main_camera2_pane_g5

0x4a96,	// (0x00046d2d) main_camera2_pane_g6_ParamLimits

0x4a96,	// (0x00046d2d) main_camera2_pane_g6

0x4aad,	// (0x00046d44) main_camera2_pane_g7_ParamLimits

0x4aad,	// (0x00046d44) main_camera2_pane_g7

0x4ac4,	// (0x00046d5b) main_camera2_pane_g8_ParamLimits

0x4ac4,	// (0x00046d5b) main_camera2_pane_g8

0x0008,

0xf573,	// (0x0005180a) main_camera2_pane_g_ParamLimits

0xf573,	// (0x0005180a) main_camera2_pane_g

0x4af2,	// (0x00046d89) main_camera2_pane_t1_ParamLimits

0x4af2,	// (0x00046d89) main_camera2_pane_t1

0x4b27,	// (0x00046dbe) main_camera2_pane_t2_ParamLimits

0x4b27,	// (0x00046dbe) main_camera2_pane_t2

0x4b44,	// (0x00046ddb) main_camera2_pane_t3_ParamLimits

0x4b44,	// (0x00046ddb) main_camera2_pane_t3

0x4ba2,	// (0x00046e39) main_camera2_pane_t4_ParamLimits

0x4ba2,	// (0x00046e39) main_camera2_pane_t4

0x0006,

0xf586,	// (0x0005181d) main_camera2_pane_t_ParamLimits

0xf586,	// (0x0005181d) main_camera2_pane_t

0x4c2b,	// (0x00046ec2) cams_zoom_pane_cp4_ParamLimits

0x4c2b,	// (0x00046ec2) cams_zoom_pane_cp4

0x4c41,	// (0x00046ed8) image2_cif_pane_ParamLimits

0x4c41,	// (0x00046ed8) image2_cif_pane

0x4c6c,	// (0x00046f03) image2_subqcif_pane_ParamLimits

0x4c6c,	// (0x00046f03) image2_subqcif_pane

0x4c87,	// (0x00046f1e) main_video2_pane_g1_ParamLimits

0x4c87,	// (0x00046f1e) main_video2_pane_g1

0x4ca1,	// (0x00046f38) main_video2_pane_g2_ParamLimits

0x4ca1,	// (0x00046f38) main_video2_pane_g2

0x4cb7,	// (0x00046f4e) main_video2_pane_g3_ParamLimits

0x4cb7,	// (0x00046f4e) main_video2_pane_g3

0x4ccd,	// (0x00046f64) main_video2_pane_g4_ParamLimits

0x4ccd,	// (0x00046f64) main_video2_pane_g4

0x4ce3,	// (0x00046f7a) main_video2_pane_g5_ParamLimits

0x4ce3,	// (0x00046f7a) main_video2_pane_g5

0x4cf9,	// (0x00046f90) main_video2_pane_g6_ParamLimits

0x4cf9,	// (0x00046f90) main_video2_pane_g6

0x0005,

0xf595,	// (0x0005182c) main_video2_pane_g_ParamLimits

0xf595,	// (0x0005182c) main_video2_pane_g

0x4d13,	// (0x00046faa) main_video2_pane_t1_ParamLimits

0x4d13,	// (0x00046faa) main_video2_pane_t1

0x4d37,	// (0x00046fce) main_video2_pane_t2_ParamLimits

0x4d37,	// (0x00046fce) main_video2_pane_t2

0x4d87,	// (0x0004701e) main_video2_pane_t3_ParamLimits

0x4d87,	// (0x0004701e) main_video2_pane_t3

0x0002,

0xf5a2,	// (0x00051839) main_video2_pane_t_ParamLimits

0xf5a2,	// (0x00051839) main_video2_pane_t

0x423b,	// (0x000464d2) call_muted_g2

0x0001,

0xf557,	// (0x000517ee) call_muted_g

0xc26a,	// (0x0004e501) main_mup2_pane

0x4dcf,	// (0x00047066) main_mup2_pane_g1_ParamLimits

0x4dcf,	// (0x00047066) main_mup2_pane_g1

0x4ddb,	// (0x00047072) main_mup2_pane_g2_ParamLimits

0x4ddb,	// (0x00047072) main_mup2_pane_g2

0xab6d,	// (0x0004ce04) main_mup_pane_g13_cp1

0xab75,	// (0x0004ce0c) mup_volume_pane_cp1

0x4df9,	// (0x00047090) main_mup2_pane_g4_ParamLimits

0x4df9,	// (0x00047090) main_mup2_pane_g4

0x4e0b,	// (0x000470a2) main_mup2_pane_g5_ParamLimits

0x4e0b,	// (0x000470a2) main_mup2_pane_g5

0x4e1d,	// (0x000470b4) main_mup2_pane_g6_ParamLimits

0x4e1d,	// (0x000470b4) main_mup2_pane_g6

0x4e2f,	// (0x000470c6) main_mup2_pane_g7_ParamLimits

0x4e2f,	// (0x000470c6) main_mup2_pane_g7

0x0006,

0xf5a9,	// (0x00051840) main_mup2_pane_g_ParamLimits

0xf5a9,	// (0x00051840) main_mup2_pane_g

0x4e47,	// (0x000470de) main_mup2_pane_t1_ParamLimits

0x4e47,	// (0x000470de) main_mup2_pane_t1

0x4e5d,	// (0x000470f4) main_mup2_pane_t2_ParamLimits

0x4e5d,	// (0x000470f4) main_mup2_pane_t2

0x4e73,	// (0x0004710a) main_mup2_pane_t3_ParamLimits

0x4e73,	// (0x0004710a) main_mup2_pane_t3

0x4e89,	// (0x00047120) main_mup2_pane_t4_ParamLimits

0x4e89,	// (0x00047120) main_mup2_pane_t4

0x4ea1,	// (0x00047138) main_mup2_pane_t5_ParamLimits

0x4ea1,	// (0x00047138) main_mup2_pane_t5

0x4eb9,	// (0x00047150) main_mup2_pane_t6_ParamLimits

0x4eb9,	// (0x00047150) main_mup2_pane_t6

0x0005,

0xf5b8,	// (0x0005184f) main_mup2_pane_t_ParamLimits

0xf5b8,	// (0x0005184f) main_mup2_pane_t

0x4ee9,	// (0x00047180) mup2_visualizer_pane_ParamLimits

0x4ee9,	// (0x00047180) mup2_visualizer_pane

0x4f17,	// (0x000471ae) mup_progress_pane_cp_ParamLimits

0x4f17,	// (0x000471ae) mup_progress_pane_cp

0xab58,	// (0x0004cdef) mup_volume_pane_cp_ParamLimits

0xab58,	// (0x0004cdef) mup_volume_pane_cp

0x4f2d,	// (0x000471c4) mup2_visualizer_pane_g1_ParamLimits

0x4f2d,	// (0x000471c4) mup2_visualizer_pane_g1

0xe52e,	// (0x000507c5) mup2_visualizer_pane_g2_ParamLimits

0xe52e,	// (0x000507c5) mup2_visualizer_pane_g2

0x4f42,	// (0x000471d9) mup2_visualizer_pane_g3_ParamLimits

0x4f42,	// (0x000471d9) mup2_visualizer_pane_g3

0x0002,

0xf5c5,	// (0x0005185c) mup2_visualizer_pane_g_ParamLimits

0xf5c5,	// (0x0005185c) mup2_visualizer_pane_g

0xd2cc,	// (0x0004f563) aid_size_cell_fmradio

0x43eb,	// (0x00046682) aid_height_parent_landcape

0xc8d1,	// (0x0004eb68) wml_content_pane_cp

0xc8d9,	// (0x0004eb70) wml_tabs_pane

0xc8e2,	// (0x0004eb79) popup_wml_miniature_window

0xc8ea,	// (0x0004eb81) scroll_pane_cp021

0xc8fe,	// (0x0004eb95) wml_content_pane_comp8

0xc26a,	// (0x0004e501) bg_popup_sub_pane_cp05

0xe54c,	// (0x000507e3) popup_wml_miniature_window_g1

0xe554,	// (0x000507eb) wml_miniature_view_pane

0x4f4e,	// (0x000471e5) aid_size_wml_view

0x4f56,	// (0x000471ed) wml_miniature_view_pane_g1

0x4f5f,	// (0x000471f6) wml_miniature_view_pane_g2

0x4f68,	// (0x000471ff) wml_miniature_view_pane_g3

0x4f70,	// (0x00047207) wml_miniature_view_pane_g4

0x4f78,	// (0x0004720f) wml_miniature_view_pane_g5

0x4f80,	// (0x00047217) wml_miniature_view_pane_g6

0x4f88,	// (0x0004721f) wml_miniature_view_pane_g7

0x4f90,	// (0x00047227) wml_miniature_view_pane_g8

0x0007,

0xf5cc,	// (0x00051863) wml_miniature_view_pane_g

0xe55c,	// (0x000507f3) background_graphic_ParamLimits

0xe55c,	// (0x000507f3) background_graphic

0xe568,	// (0x000507ff) wml_tabs_2_pane

0xe571,	// (0x00050808) wml_tabs_3_pane_ParamLimits

0xe571,	// (0x00050808) wml_tabs_3_pane

0xe583,	// (0x0005081a) wml_tabs_4_pane_ParamLimits

0xe583,	// (0x0005081a) wml_tabs_4_pane

0xe599,	// (0x00050830) wml_tabs_5_pane_ParamLimits

0xe599,	// (0x00050830) wml_tabs_5_pane

0xe5b3,	// (0x0005084a) wml_tabs_pane_g2_ParamLimits

0xe5b3,	// (0x0005084a) wml_tabs_pane_g2

0xe5c7,	// (0x0005085e) wml_tabs_pane_g3_ParamLimits

0xe5c7,	// (0x0005085e) wml_tabs_pane_g3

0x4f98,	// (0x0004722f) wml_tabs_2_active_pane_ParamLimits

0x4f98,	// (0x0004722f) wml_tabs_2_active_pane

0x4fac,	// (0x00047243) wml_tabs_2_passive_pane_ParamLimits

0x4fac,	// (0x00047243) wml_tabs_2_passive_pane

0x4fc0,	// (0x00047257) wml_tabs_3_active_pane_cp_ParamLimits

0x4fc0,	// (0x00047257) wml_tabs_3_active_pane_cp

0x4fd5,	// (0x0004726c) wml_tabs_3_passive_pane_ParamLimits

0x4fd5,	// (0x0004726c) wml_tabs_3_passive_pane

0x4fe8,	// (0x0004727f) wml_tabs_3_passive_pane_cp_ParamLimits

0x4fe8,	// (0x0004727f) wml_tabs_3_passive_pane_cp

0x4fff,	// (0x00047296) tabs_4_active_pane

0x5007,	// (0x0004729e) tabs_4_passive_pane

0x5011,	// (0x000472a8) tabs_4_passive_pane_cp

0x5019,	// (0x000472b0) tabs_4_passive_pane_cp2

0x40ff,	// (0x00046396) aid_height_text

0x37d3,	// (0x00045a6a) mup_volume_cont_pane_ParamLimits

0x37d3,	// (0x00045a6a) mup_volume_cont_pane

0x1888,	// (0x00043b1f) aid_size_cell_pinb

0x1892,	// (0x00043b29) aid_size_list_pinb

0x4f03,	// (0x0004719a) mup2_volume_cont_pane_ParamLimits

0x4f03,	// (0x0004719a) mup2_volume_cont_pane

0xab44,	// (0x0004cddb) mup2_volume_cont_pane_g1_ParamLimits

0xab44,	// (0x0004cddb) mup2_volume_cont_pane_g1

0x1561,	// (0x000437f8) aid_size_cell_touch_ParamLimits

0x1561,	// (0x000437f8) aid_size_cell_touch

0x1777,	// (0x00043a0e) touch_pane_ParamLimits

0x1777,	// (0x00043a0e) touch_pane

0xa634,	// (0x0004c8cb) main_rss2_pane

0xe5e4,	// (0x0005087b) listscroll_rss2_pane

0xe5ed,	// (0x00050884) rss2_navigation_pane

0xe5f5,	// (0x0005088c) list_rss2_pane

0xceaa,	// (0x0004f141) scroll_pane_cp22

0xe5fd,	// (0x00050894) rss2_navigation_pane_g1

0xe606,	// (0x0005089d) rss2_navigation_pane_g2

0xe60e,	// (0x000508a5) rss2_navigation_pane_g3

0x0002,

0x0221,	// (0x000424b8) rss2_navigation_pane_g

0xe616,	// (0x000508ad) rss2_navigation_pane_t1

0x5023,	// (0x000472ba) rss2_list_single_pane_ParamLimits

0x5023,	// (0x000472ba) rss2_list_single_pane

0xe624,	// (0x000508bb) rss2_list_single_pane_t2

0xe632,	// (0x000508c9) rss2_list_single_pane_t3_ParamLimits

0xe632,	// (0x000508c9) rss2_list_single_pane_t3

0xe64f,	// (0x000508e6) rss2_list_single_pane_t4

0x3020,	// (0x000452b7) smil_status_pane_g1

0xa6ad,	// (0x0004c944) main_image2_pane_ParamLimits

0xa6ad,	// (0x0004c944) main_image2_pane

0x4adb,	// (0x00046d72) main_camera2_pane_g9_ParamLimits

0x4adb,	// (0x00046d72) main_camera2_pane_g9

0x4bf7,	// (0x00046e8e) main_camera2_pane_t5_ParamLimits

0x4bf7,	// (0x00046e8e) main_camera2_pane_t5

0xab19,	// (0x0004cdb0) main_camera2_pane_t6_ParamLimits

0xab19,	// (0x0004cdb0) main_camera2_pane_t6

0x503d,	// (0x000472d4) main_image2_pane_g1_ParamLimits

0x503d,	// (0x000472d4) main_image2_pane_g1

0x3e16,	// (0x000460ad) smil2_video_pane_ParamLimits

0x3e16,	// (0x000460ad) smil2_video_pane

0xa662,	// (0x0004c8f9) aid_zoom_text_primary_cp

0xa6a3,	// (0x0004c93a) popup_preview_fixed_window

0xc83a,	// (0x0004ead1) im_reading_pane_g1

0x49ad,	// (0x00046c44) cams2_bc_adjust_pane_cp_ParamLimits

0x49ad,	// (0x00046c44) cams2_bc_adjust_pane_cp

0x4c1d,	// (0x00046eb4) cams2_bc_adjust_pane_ParamLimits

0x4c1d,	// (0x00046eb4) cams2_bc_adjust_pane

0xab7d,	// (0x0004ce14) cams2_bc_adjust_pane_g1

0xab85,	// (0x0004ce1c) cams2_slider_pane

0xab8e,	// (0x0004ce25) cams2_slider_pane_g1

0xab97,	// (0x0004ce2e) cams2_slider_pane_g2

0x0006,

0xf5dd,	// (0x00051874) cams2_slider_pane_g

0x1982,	// (0x00043c19) calc_display_pane_ParamLimits

0x19a8,	// (0x00043c3f) calc_paper_pane_ParamLimits

0x19cb,	// (0x00043c62) grid_calc_pane_ParamLimits

0xaa86,	// (0x0004cd1d) popup_clock_digital_window_t1_ParamLimits

0xd269,	// (0x0004f500) main_image_pane_t1

0x1964,	// (0x00043bfb) aid_size_cell_calc_ParamLimits

0x1964,	// (0x00043bfb) aid_size_cell_calc

0x4431,	// (0x000466c8) popup_blid_sat_info2_window_ParamLimits

0x4431,	// (0x000466c8) popup_blid_sat_info2_window

0xe665,	// (0x000508fc) aid_size_cell_blid

0xe66d,	// (0x00050904) bg_popup_window_pane_cp07

0xe690,	// (0x00050927) grid_popup_blid_pane

0xe69a,	// (0x00050931) heading_pane_cp05_ParamLimits

0xe69a,	// (0x00050931) heading_pane_cp05

0xe764,	// (0x000509fb) cell_popup_blid_pane_ParamLimits

0xe764,	// (0x000509fb) cell_popup_blid_pane

0xe78e,	// (0x00050a25) cell_popup_blid_pane_g1

0xe796,	// (0x00050a2d) cell_popup_blid_pane_t1

0x4ed3,	// (0x0004716a) mup2_indicator_pane_ParamLimits

0x4ed3,	// (0x0004716a) mup2_indicator_pane

0xcfe4,	// (0x0004f27b) mup2_visualizer_osc_pane

0xe53a,	// (0x000507d1) mup2_visualizer_spec_pane_ParamLimits

0xe53a,	// (0x000507d1) mup2_visualizer_spec_pane

0x5053,	// (0x000472ea) mup2_spec_half_pane

0x505c,	// (0x000472f3) mup2_spec_half_pane_cp

0x5064,	// (0x000472fb) mup2_spec_bar_pane_ParamLimits

0x5064,	// (0x000472fb) mup2_spec_bar_pane

0xe4c4,	// (0x0005075b) mup2_spec_bar_pane_g1

0xe4ce,	// (0x00050765) mup2_spec_bar_pane_g2

0x0001,

0x019b,	// (0x00042432) mup2_spec_bar_pane_g

0x5084,	// (0x0004731b) mup2_osc_middle_pane

0xe4e0,	// (0x00050777) mup2_visualizer_osc_pane_g1

0xa6db,	// (0x0004c972) popup_number_entry_window_t1_ParamLimits

0xa6ee,	// (0x0004c985) popup_number_entry_window_t2_ParamLimits

0xa700,	// (0x0004c997) popup_number_entry_window_t3_ParamLimits

0x17c9,	// (0x00043a60) popup_number_entry_window_t5_ParamLimits

0x17c9,	// (0x00043a60) popup_number_entry_window_t5

0xf0ec,	// (0x00051383) popup_number_entry_window_t_ParamLimits

0xa712,	// (0x0004c9a9) text_title_cp2_ParamLimits

0xaac5,	// (0x0004cd5c) aid_hotspot_pointer_text2_pane

0xaaeb,	// (0x0004cd82) main_viewer_pane_g9_ParamLimits

0xaaeb,	// (0x0004cd82) main_viewer_pane_g9

0xca69,	// (0x0004ed00) cale_month_pane_t1_ParamLimits

0xcaa6,	// (0x0004ed3d) bg_cale_pane_ParamLimits

0xcabe,	// (0x0004ed55) list_cale_pane_ParamLimits

0xc6d0,	// (0x0004e967) listscroll_cale_day_pane_t1

0xcacf,	// (0x0004ed66) scroll_pane_cp09_ParamLimits

0x3809,	// (0x00045aa0) main_mup_eq_pane_t1_ParamLimits

0x3809,	// (0x00045aa0) main_mup_eq_pane_t1

0x3825,	// (0x00045abc) main_mup_eq_pane_t2_ParamLimits

0x3825,	// (0x00045abc) main_mup_eq_pane_t2

0x3841,	// (0x00045ad8) main_mup_eq_pane_t3_ParamLimits

0x3841,	// (0x00045ad8) main_mup_eq_pane_t3

0x385f,	// (0x00045af6) main_mup_eq_pane_t4_ParamLimits

0x385f,	// (0x00045af6) main_mup_eq_pane_t4

0x387d,	// (0x00045b14) main_mup_eq_pane_t5_ParamLimits

0x387d,	// (0x00045b14) main_mup_eq_pane_t5

0x389b,	// (0x00045b32) main_mup_eq_pane_t6_ParamLimits

0x389b,	// (0x00045b32) main_mup_eq_pane_t6

0x38b1,	// (0x00045b48) main_mup_eq_pane_t7_ParamLimits

0x38b1,	// (0x00045b48) main_mup_eq_pane_t7

0x38c7,	// (0x00045b5e) main_mup_eq_pane_t8_ParamLimits

0x38c7,	// (0x00045b5e) main_mup_eq_pane_t8

0x38dd,	// (0x00045b74) main_mup_eq_pane_t9_ParamLimits

0x38dd,	// (0x00045b74) main_mup_eq_pane_t9

0x38f9,	// (0x00045b90) main_mup_eq_pane_t10_ParamLimits

0x38f9,	// (0x00045b90) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00051710) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00051710) main_mup_eq_pane_t

0x39ce,	// (0x00045c65) mup_equalizer_pane_cp5_ParamLimits

0x39e6,	// (0x00045c7d) mup_equalizer_pane_cp6_ParamLimits

0x39fe,	// (0x00045c95) mup_equalizer_pane_cp7_ParamLimits

0xa634,	// (0x0004c8cb) main_gallery_pane

0xe4e9,	// (0x00050780) smil2_volume_pane

0xe4f1,	// (0x00050788) smil_status_volume_pane_g1_ParamLimits

0xe504,	// (0x0005079b) smil_status_volume_pane_g2_ParamLimits

0xaaf7,	// (0x0004cd8e) smil_status_volume_pane_g3_ParamLimits

0xf55c,	// (0x000517f3) smil_status_volume_pane_g_ParamLimits

0xe66d,	// (0x00050904) bg_popup_window_pane_cp07_ParamLimits

0xe67b,	// (0x00050912) blid_firmament_pane

0x508d,	// (0x00047324) aid_size_cell_gallery_ParamLimits

0x508d,	// (0x00047324) aid_size_cell_gallery

0x50a3,	// (0x0004733a) grid_gallery_pane_ParamLimits

0x50a3,	// (0x0004733a) grid_gallery_pane

0x50be,	// (0x00047355) cell_gallery_pane_ParamLimits

0x50be,	// (0x00047355) cell_gallery_pane

0xe7a4,	// (0x00050a3b) bg_cell_gallery_focus_pane_ParamLimits

0xe7a4,	// (0x00050a3b) bg_cell_gallery_focus_pane

0xe7b6,	// (0x00050a4d) cell_gallery_pane_g1_ParamLimits

0xe7b6,	// (0x00050a4d) cell_gallery_pane_g1

0x510f,	// (0x000473a6) cell_gallery_pane_g2_ParamLimits

0x510f,	// (0x000473a6) cell_gallery_pane_g2

0x511c,	// (0x000473b3) cell_gallery_pane_g3_ParamLimits

0x511c,	// (0x000473b3) cell_gallery_pane_g3

0xe7c2,	// (0x00050a59) cell_gallery_pane_g4_ParamLimits

0xe7c2,	// (0x00050a59) cell_gallery_pane_g4

0x0003,

0xf603,	// (0x0005189a) cell_gallery_pane_g_ParamLimits

0xf603,	// (0x0005189a) cell_gallery_pane_g

0xe7ce,	// (0x00050a65) bg_cell_gallery_focus_pane_g1

0xe7d6,	// (0x00050a6d) bg_cell_gallery_focus_pane_g2

0xe7de,	// (0x00050a75) bg_cell_gallery_focus_pane_g3

0xe7e6,	// (0x00050a7d) bg_cell_gallery_focus_pane_g4

0xe7ee,	// (0x00050a85) bg_cell_gallery_focus_pane_g5

0xe7f6,	// (0x00050a8d) bg_cell_gallery_focus_pane_g6

0xe7fe,	// (0x00050a95) bg_cell_gallery_focus_pane_g7

0xe806,	// (0x00050a9d) bg_cell_gallery_focus_pane_g8

0x0007,

0xf60c,	// (0x000518a3) bg_cell_gallery_focus_pane_g

0xe80e,	// (0x00050aa5) aid_firma_cardinal

0xe822,	// (0x00050ab9) blid_firmament_pane_t1

0xe839,	// (0x00050ad0) blid_firmament_pane_t2

0xe850,	// (0x00050ae7) blid_firmament_pane_t3

0xe867,	// (0x00050afe) blid_firmament_pane_t4

0x0003,

0xf61d,	// (0x000518b4) blid_firmament_pane_t

0xe87e,	// (0x00050b15) blid_sat_info_pane

0xe896,	// (0x00050b2d) blid_sat_info_pane_g1

0xe896,	// (0x00050b2d) blid_sat_info_pane_g2

0x0001,

0x0271,	// (0x00042508) blid_sat_info_pane_g

0xe8a0,	// (0x00050b37) blid_sat_info_pane_t1

0xe8ae,	// (0x00050b45) smil2_volume_content_pane

0xe8b7,	// (0x00050b4e) smil2_volume_pane_g1

0xe8bf,	// (0x00050b56) smil2_volume_content_pane_g1

0xe8c8,	// (0x00050b5f) smil2_volume_content_pane_g2

0xe8d1,	// (0x00050b68) smil2_volume_content_pane_g3

0xe8da,	// (0x00050b71) smil2_volume_content_pane_g4

0xe8e3,	// (0x00050b7a) smil2_volume_content_pane_g5

0xe8ec,	// (0x00050b83) smil2_volume_content_pane_g6

0xe8f5,	// (0x00050b8c) smil2_volume_content_pane_g7

0xe8fe,	// (0x00050b95) smil2_volume_content_pane_g8

0xe907,	// (0x00050b9e) smil2_volume_content_pane_g9

0xe910,	// (0x00050ba7) smil2_volume_content_pane_g10

0x0009,

0x0276,	// (0x0004250d) smil2_volume_content_pane_g

0x1e90,	// (0x00044127) cale_week_day_heading_pane_t1_ParamLimits

0x1ea4,	// (0x0004413b) cale_week_day_heading_pane_t2_ParamLimits

0x1eb8,	// (0x0004414f) cale_week_day_heading_pane_t3_ParamLimits

0x1ecc,	// (0x00044163) cale_week_day_heading_pane_t4_ParamLimits

0x1ee0,	// (0x00044177) cale_week_day_heading_pane_t5_ParamLimits

0x1ef4,	// (0x0004418b) cale_week_day_heading_pane_t6_ParamLimits

0x1f08,	// (0x0004419f) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00051488) cale_week_day_heading_pane_t_ParamLimits

0xc6e2,	// (0x0004e979) bg_cale_side_pane_ParamLimits

0x1f1c,	// (0x000441b3) cale_week_time_pane_t1_ParamLimits

0x1f34,	// (0x000441cb) cale_week_time_pane_t2_ParamLimits

0x1f4c,	// (0x000441e3) cale_week_time_pane_t3_ParamLimits

0x1f64,	// (0x000441fb) cale_week_time_pane_t4_ParamLimits

0x1f7c,	// (0x00044213) cale_week_time_pane_t5_ParamLimits

0x1f94,	// (0x0004422b) cale_week_time_pane_t6_ParamLimits

0x1fac,	// (0x00044243) cale_week_time_pane_t7_ParamLimits

0x1fc8,	// (0x0004425f) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00051497) cale_week_time_pane_t_ParamLimits

0x1fe8,	// (0x0004427f) cell_cale_week_pane_g2_ParamLimits

0xc6e2,	// (0x0004e979) bg_cale_side_pane_cp01_ParamLimits

0x2eb9,	// (0x00045150) cale_month_week_pane_t1_ParamLimits

0x2ed0,	// (0x00045167) cale_month_week_pane_t2_ParamLimits

0x2ee7,	// (0x0004517e) cale_month_week_pane_t3_ParamLimits

0x2efe,	// (0x00045195) cale_month_week_pane_t4_ParamLimits

0x2f15,	// (0x000451ac) cale_month_week_pane_t5_ParamLimits

0x2f2c,	// (0x000451c3) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00051570) cale_month_week_pane_t_ParamLimits

0xa98f,	// (0x0004cc26) cell_cale_month_pane_g1_ParamLimits

0xa634,	// (0x0004c8cb) main_cale_event_viewer_pane

0xa634,	// (0x0004c8cb) listscroll_cale_event_viewer_pane

0xe919,	// (0x00050bb0) list_cale_ev_pane

0xe921,	// (0x00050bb8) scroll_pane_cp023

0x5129,	// (0x000473c0) field_cale_ev_pane_ParamLimits

0x5129,	// (0x000473c0) field_cale_ev_pane

0xe92d,	// (0x00050bc4) field_cale_ev_content_pane_ParamLimits

0xe92d,	// (0x00050bc4) field_cale_ev_content_pane

0xe939,	// (0x00050bd0) field_cale_ev_pane_g1_ParamLimits

0xe939,	// (0x00050bd0) field_cale_ev_pane_g1

0xe945,	// (0x00050bdc) field_cale_ev_pane_g2_ParamLimits

0xe945,	// (0x00050bdc) field_cale_ev_pane_g2

0xe95d,	// (0x00050bf4) field_cale_ev_pane_g3_ParamLimits

0xe95d,	// (0x00050bf4) field_cale_ev_pane_g3

0x0002,

0x028b,	// (0x00042522) field_cale_ev_pane_g_ParamLimits

0x028b,	// (0x00042522) field_cale_ev_pane_g

0xe975,	// (0x00050c0c) field_cale_ev_pane_t1_ParamLimits

0xe975,	// (0x00050c0c) field_cale_ev_pane_t1

0x514d,	// (0x000473e4) field_cale_ev_content_pane_t1_ParamLimits

0x514d,	// (0x000473e4) field_cale_ev_content_pane_t1

0xd14f,	// (0x0004f3e6) bg_button_pane_cp01

0xc590,	// (0x0004e827) listscroll_cale_week_pane_ParamLimits

0x1c7a,	// (0x00043f11) popup_toolbar_window_cp01

0xc6d0,	// (0x0004e967) listscroll_cale_week_pane_t1_ParamLimits

0xc590,	// (0x0004e827) listscroll_cale_day_pane_ParamLimits

0x3080,	// (0x00045317) popup_toolbar_window_cp02

0xc6d0,	// (0x0004e967) listscroll_cale_day_pane_t1_ParamLimits

0xc590,	// (0x0004e827) main_cale_month_pane_ParamLimits

0x46b1,	// (0x00046948) popup_toolbar_window_cp03_ParamLimits

0x46b1,	// (0x00046948) popup_toolbar_window_cp03

0x3cd4,	// (0x00045f6b) main_image_pane_g2_ParamLimits

0x3cd4,	// (0x00045f6b) main_image_pane_g2

0x3ce5,	// (0x00045f7c) main_image_pane_g3_ParamLimits

0x3ce5,	// (0x00045f7c) main_image_pane_g3

0x0002,

0xf501,	// (0x00051798) main_image_pane_g_ParamLimits

0xf501,	// (0x00051798) main_image_pane_g

0xd269,	// (0x0004f500) main_image_pane_t1_ParamLimits

0x3cf6,	// (0x00045f8d) main_image_pane_t2_ParamLimits

0x3cf6,	// (0x00045f8d) main_image_pane_t2

0x3d08,	// (0x00045f9f) main_image_pane_t3_ParamLimits

0x3d08,	// (0x00045f9f) main_image_pane_t3

0x3d30,	// (0x00045fc7) main_image_pane_t4_ParamLimits

0x3d30,	// (0x00045fc7) main_image_pane_t4

0x0003,

0xf508,	// (0x0005179f) main_image_pane_t_ParamLimits

0xf508,	// (0x0005179f) main_image_pane_t

0x3d50,	// (0x00045fe7) popup_image_details_window_cp01

0x3d5a,	// (0x00045ff1) popup_toobar_trans_pane_cp01_ParamLimits

0x3d5a,	// (0x00045ff1) popup_toobar_trans_pane_cp01

0x4524,	// (0x000467bb) popup_image_details_window_ParamLimits

0x4524,	// (0x000467bb) popup_image_details_window

0xe435,	// (0x000506cc) popup_image_focus_window

0x4967,	// (0x00046bfe) camera2_autofocus_pane_ParamLimits

0x4967,	// (0x00046bfe) camera2_autofocus_pane

0xa634,	// (0x0004c8cb) bg_popup_sub_pane_cp06

0xe98c,	// (0x00050c23) popup_image_focus_window_g1

0xe994,	// (0x00050c2b) popup_image_focus_window_g2

0xe99c,	// (0x00050c33) popup_image_focus_window_g3

0xe9a4,	// (0x00050c3b) popup_image_focus_window_g4

0x0003,

0x0292,	// (0x00042529) popup_image_focus_window_g

0xe9ac,	// (0x00050c43) popup_image_focus_window_t1

0xe9ba,	// (0x00050c51) popup_image_focus_window_t2

0xe9ca,	// (0x00050c61) popup_image_focus_window_t3

0x0002,

0x029b,	// (0x00042532) popup_image_focus_window_t

0xe9d8,	// (0x00050c6f) camera2_autofocus_pane_g1

0xa6ad,	// (0x0004c944) bg_tb_trans_pane_cp01

0xe9e6,	// (0x00050c7d) popup_image_details_window_g1

0xe9f9,	// (0x00050c90) popup_image_details_window_g2

0x0002,

0x02ad,	// (0x00042544) popup_image_details_window_g

0xea22,	// (0x00050cb9) popup_image_details_window_t1

0xea34,	// (0x00050ccb) popup_image_details_window_t2

0xea4d,	// (0x00050ce4) popup_image_details_window_t3

0xea61,	// (0x00050cf8) popup_image_details_window_t4

0xea7c,	// (0x00050d13) popup_image_details_window_t5

0x0004,

0x02b4,	// (0x0004254b) popup_image_details_window_t

0xc57c,	// (0x0004e813) bg_calc_paper_pane_ParamLimits

0xa634,	// (0x0004c8cb) grid_highlight_pane_cp013

0xa79f,	// (0x0004ca36) list_calc_pane_ParamLimits

0xa7b1,	// (0x0004ca48) scroll_pane_cp024

0xc590,	// (0x0004e827) bg_calc_display_pane_ParamLimits

0x1ac2,	// (0x00043d59) calc_display_pane_t1_ParamLimits

0x1ad4,	// (0x00043d6b) calc_display_pane_t2_ParamLimits

0xa7b9,	// (0x0004ca50) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0005140a) calc_display_pane_t_ParamLimits

0x1b97,	// (0x00043e2e) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00051427) cell_calc_pane_g

0x1ba0,	// (0x00043e37) cell_calc_pane_t1

0xc5ef,	// (0x0004e886) grid_highlight_pane_cp02_ParamLimits

0xc605,	// (0x0004e89c) toolbar_button_pane_cp01_ParamLimits

0xc605,	// (0x0004e89c) toolbar_button_pane_cp01

0xd2ae,	// (0x0004f545) temp_image_control_pane_ParamLimits

0xd2ae,	// (0x0004f545) temp_image_control_pane

0xa6ad,	// (0x0004c944) main_mp3_pane

0xea96,	// (0x00050d2d) temp_image_control_pane_g1_ParamLimits

0xea96,	// (0x00050d2d) temp_image_control_pane_g1

0xeaa4,	// (0x00050d3b) temp_image_control_pane_g2_ParamLimits

0xeaa4,	// (0x00050d3b) temp_image_control_pane_g2

0xeab6,	// (0x00050d4d) temp_image_control_pane_g3_ParamLimits

0xeab6,	// (0x00050d4d) temp_image_control_pane_g3

0x519e,	// (0x00047435) temp_image_control_pane_g4_ParamLimits

0x519e,	// (0x00047435) temp_image_control_pane_g4

0x0003,

0xf631,	// (0x000518c8) temp_image_control_pane_g_ParamLimits

0xf631,	// (0x000518c8) temp_image_control_pane_g

0xea96,	// (0x00050d2d) main_mp3_pane_g1

0x51b1,	// (0x00047448) main_mp3_pane_g2

0x0007,

0xf63a,	// (0x000518d1) main_mp3_pane_g

0xeaf9,	// (0x00050d90) main_mp3_pane_t1

0xc747,	// (0x0004e9de) main_camera_pane_g8_ParamLimits

0xc747,	// (0x0004e9de) main_camera_pane_g8

0x22b9,	// (0x00044550) main_video_pane_g7_ParamLimits

0x22b9,	// (0x00044550) main_video_pane_g7

0xab32,	// (0x0004cdc9) main_camera2_pane_t7_ParamLimits

0xab32,	// (0x0004cdc9) main_camera2_pane_t7

0xc891,	// (0x0004eb28) scroll_pane_cp025_ParamLimits

0xc891,	// (0x0004eb28) scroll_pane_cp025

0xc8a5,	// (0x0004eb3c) scroll_pane_cp026_ParamLimits

0xc8a5,	// (0x0004eb3c) scroll_pane_cp026

0xc8b4,	// (0x0004eb4b) wml_content_pane_ParamLimits

0xa634,	// (0x0004c8cb) main_touch_calib_pane

0x5279,	// (0x00047510) main_touch_calib_pane_g1

0x5285,	// (0x0004751c) main_touch_calib_pane_g2

0x5291,	// (0x00047528) main_touch_calib_pane_g3

0x529d,	// (0x00047534) main_touch_calib_pane_g4

0x0003,

0xf658,	// (0x000518ef) main_touch_calib_pane_g

0x52a9,	// (0x00047540) main_touch_calib_pane_t1

0x52c3,	// (0x0004755a) main_touch_calib_pane_t2

0x0004,

0xf661,	// (0x000518f8) main_touch_calib_pane_t

0xcf25,	// (0x0004f1bc) mup_progress_pane_cp02

0xcf44,	// (0x0004f1db) navi_pane_g1

0xcfa6,	// (0x0004f23d) navi_pane_mp_t3

0xa6ad,	// (0x0004c944) main_mp3_pane_ParamLimits

0x46f3,	// (0x0004698a) navi_pane_ParamLimits

0xea96,	// (0x00050d2d) main_mp3_pane_g1_ParamLimits

0x51b1,	// (0x00047448) main_mp3_pane_g2_ParamLimits

0x51bd,	// (0x00047454) main_mp3_pane_g3_ParamLimits

0x51bd,	// (0x00047454) main_mp3_pane_g3

0x51cb,	// (0x00047462) main_mp3_pane_g4_ParamLimits

0x51cb,	// (0x00047462) main_mp3_pane_g4

0xeac6,	// (0x00050d5d) main_mp3_pane_g5_ParamLimits

0xeac6,	// (0x00050d5d) main_mp3_pane_g5

0xead4,	// (0x00050d6b) main_mp3_pane_g6_ParamLimits

0xead4,	// (0x00050d6b) main_mp3_pane_g6

0xeae1,	// (0x00050d78) main_mp3_pane_g7_ParamLimits

0xeae1,	// (0x00050d78) main_mp3_pane_g7

0xeaed,	// (0x00050d84) main_mp3_pane_g8_ParamLimits

0xeaed,	// (0x00050d84) main_mp3_pane_g8

0xf63a,	// (0x000518d1) main_mp3_pane_g_ParamLimits

0x51d7,	// (0x0004746e) main_mp3_pane_t2

0x51e5,	// (0x0004747c) main_mp3_pane_t3

0xeb07,	// (0x00050d9e) main_mp3_pane_t4

0xeb15,	// (0x00050dac) main_mp3_pane_t5

0x0005,

0xf64b,	// (0x000518e2) main_mp3_pane_t

0xeb23,	// (0x00050dba) mup_progress_pane_cp01

0xa662,	// (0x0004c8f9) aid_zoom_text_secondary2

0xe919,	// (0x00050bb0) list_cale_ev2_pane

0xe921,	// (0x00050bb8) scroll_pane_cp023_ParamLimits

0x531b,	// (0x000475b2) field_cale_ev2_pane_ParamLimits

0x531b,	// (0x000475b2) field_cale_ev2_pane

0xabb1,	// (0x0004ce48) field_cale_ev2_pane_g1_ParamLimits

0xabb1,	// (0x0004ce48) field_cale_ev2_pane_g1

0xabbd,	// (0x0004ce54) field_cale_ev2_pane_g2_ParamLimits

0xabbd,	// (0x0004ce54) field_cale_ev2_pane_g2

0xabd5,	// (0x0004ce6c) field_cale_ev2_pane_g3_ParamLimits

0xabd5,	// (0x0004ce6c) field_cale_ev2_pane_g3

0x0003,

0xf66c,	// (0x00051903) field_cale_ev2_pane_g_ParamLimits

0xf66c,	// (0x00051903) field_cale_ev2_pane_g

0xabf9,	// (0x0004ce90) field_cale_ev2_pane_t1_ParamLimits

0xabf9,	// (0x0004ce90) field_cale_ev2_pane_t1

0xac10,	// (0x0004cea7) field_cale_ev2_pane_t2_ParamLimits

0xac10,	// (0x0004cea7) field_cale_ev2_pane_t2

0x0001,

0xf675,	// (0x0005190c) field_cale_ev2_pane_t_ParamLimits

0xf675,	// (0x0005190c) field_cale_ev2_pane_t

0x3b6f,	// (0x00045e06) main_postcard_pane_g5_ParamLimits

0x3b6f,	// (0x00045e06) main_postcard_pane_g5

0x3b85,	// (0x00045e1c) main_postcard_pane_g6_ParamLimits

0x3b85,	// (0x00045e1c) main_postcard_pane_g6

0x2065,	// (0x000442fc) camera2_autofocus_pane_cp_ParamLimits

0x2065,	// (0x000442fc) camera2_autofocus_pane_cp

0xa6ad,	// (0x0004c944) main_mup3_pane

0x535f,	// (0x000475f6) main_mup3_pane_g1_ParamLimits

0x535f,	// (0x000475f6) main_mup3_pane_g1

0x5381,	// (0x00047618) main_mup3_pane_g2_ParamLimits

0x5381,	// (0x00047618) main_mup3_pane_g2

0x5404,	// (0x0004769b) main_mup3_pane_g3_ParamLimits

0x5404,	// (0x0004769b) main_mup3_pane_g3

0x5448,	// (0x000476df) main_mup3_pane_g4_ParamLimits

0x5448,	// (0x000476df) main_mup3_pane_g4

0x548c,	// (0x00047723) main_mup3_pane_g5_ParamLimits

0x548c,	// (0x00047723) main_mup3_pane_g5

0x54d0,	// (0x00047767) main_mup3_pane_g6_ParamLimits

0x54d0,	// (0x00047767) main_mup3_pane_g6

0xeb2b,	// (0x00050dc2) main_mup3_pane_g7_ParamLimits

0xeb2b,	// (0x00050dc2) main_mup3_pane_g7

0x0007,

0xf685,	// (0x0005191c) main_mup3_pane_g_ParamLimits

0xf685,	// (0x0005191c) main_mup3_pane_g

0x554c,	// (0x000477e3) main_mup3_pane_t1_ParamLimits

0x554c,	// (0x000477e3) main_mup3_pane_t1

0x55c6,	// (0x0004785d) main_mup3_pane_t2_ParamLimits

0x55c6,	// (0x0004785d) main_mup3_pane_t2

0x56a0,	// (0x00047937) main_mup3_pane_t4_ParamLimits

0x56a0,	// (0x00047937) main_mup3_pane_t4

0x56fe,	// (0x00047995) main_mup3_pane_t5_ParamLimits

0x56fe,	// (0x00047995) main_mup3_pane_t5

0x57b6,	// (0x00047a4d) main_mup3_pane_t6_ParamLimits

0x57b6,	// (0x00047a4d) main_mup3_pane_t6

0x0005,

0xf696,	// (0x0005192d) main_mup3_pane_t_ParamLimits

0xf696,	// (0x0005192d) main_mup3_pane_t

0x586c,	// (0x00047b03) mup3_progress_pane_ParamLimits

0x586c,	// (0x00047b03) mup3_progress_pane

0x58f0,	// (0x00047b87) popup_mup3_control_window_ParamLimits

0x58f0,	// (0x00047b87) popup_mup3_control_window

0xeb39,	// (0x00050dd0) popup_mup3_text_window

0x5926,	// (0x00047bbd) mup3_progress_pane_t1

0x593d,	// (0x00047bd4) mup3_progress_pane_t2

0xeb41,	// (0x00050dd8) mup3_progress_pane_t3

0x0002,

0xf6a3,	// (0x0005193a) mup3_progress_pane_t

0xeb58,	// (0x00050def) mup_progress_pane_cp03

0xa634,	// (0x0004c8cb) bg_tb_trans_pane_cp04

0x5954,	// (0x00047beb) mup3_volume_pane

0x595c,	// (0x00047bf3) popup_mup3_control_window_g1

0x5965,	// (0x00047bfc) mup3_volume_pane_g1

0x596e,	// (0x00047c05) mup3_volume_pane_g2

0x5977,	// (0x00047c0e) mup3_volume_pane_g3

0x0002,

0xf6aa,	// (0x00051941) mup3_volume_pane_g

0xa634,	// (0x0004c8cb) bg_tb_trans_pane_cp03

0xeb68,	// (0x00050dff) popup_mup3_text_window_g1

0xeb70,	// (0x00050e07) popup_mup3_text_window_t1

0xc5d8,	// (0x0004e86f) list_calc_item_pane_g1_ParamLimits

0xe5db,	// (0x00050872) mup_volume_pane_cp_g1

0x52dd,	// (0x00047574) main_touch_calib_pane_t3

0x52f1,	// (0x00047588) main_touch_calib_pane_t4

0x5305,	// (0x0004759c) main_touch_calib_pane_t5

0xa63e,	// (0x0004c8d5) aid_cell_size_toolbar2

0xa646,	// (0x0004c8dd) aid_popup3_width_pane

0xa652,	// (0x0004c8e9) aid_zoom_text_msg_primary

0xa891,	// (0x0004cb28) vorec_t7

0xc59c,	// (0x0004e833) bg_calc_paper_pane_g1_ParamLimits

0xc5a8,	// (0x0004e83f) bg_calc_paper_pane_g2_ParamLimits

0xc5b4,	// (0x0004e84b) bg_calc_paper_pane_g3_ParamLimits

0xc5c0,	// (0x0004e857) bg_calc_paper_pane_g4_ParamLimits

0xc5cc,	// (0x0004e863) bg_calc_paper_pane_g5_ParamLimits

0x1b21,	// (0x00043db8) bg_calc_paper_pane_g6_ParamLimits

0x1b34,	// (0x00043dcb) bg_calc_paper_pane_g7_ParamLimits

0x1b47,	// (0x00043dde) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00051411) bg_calc_paper_pane_g_ParamLimits

0x1b58,	// (0x00043def) calc_bg_paper_pane_g9_ParamLimits

0x21c7,	// (0x0004445e) image_qvga_pane_ParamLimits

0x21c7,	// (0x0004445e) image_qvga_pane

0xc4c5,	// (0x0004e75c) bg_popup_sub_pane_cp04_ParamLimits

0xd1e5,	// (0x0004f47c) popup_mup_playback_window_g1_ParamLimits

0xd1f1,	// (0x0004f488) popup_mup_playback_window_t1_ParamLimits

0xd206,	// (0x0004f49d) popup_mup_playback_window_t2_ParamLimits

0x0077,	// (0x0004230e) popup_mup_playback_window_t_ParamLimits

0x4deb,	// (0x00047082) main_mup2_pane_g3_ParamLimits

0x4deb,	// (0x00047082) main_mup2_pane_g3

0x24bd,	// (0x00044754) popup_toolbar_window_cp04

0xd60d,	// (0x0004f8a4) popup_call2_audio_second_window_g3_ParamLimits

0xd60d,	// (0x0004f8a4) popup_call2_audio_second_window_g3

0xda2f,	// (0x0004fcc6) popup_call2_audio_first_window_g4_ParamLimits

0xda2f,	// (0x0004fcc6) popup_call2_audio_first_window_g4

0xe0ae,	// (0x00050345) popup_call2_audio_in_window_g4_ParamLimits

0xe0ae,	// (0x00050345) popup_call2_audio_in_window_g4

0x3cb6,	// (0x00045f4d) aid_area_sk_bg_cut_ParamLimits

0x3cb6,	// (0x00045f4d) aid_area_sk_bg_cut

0xd21b,	// (0x0004f4b2) aid_area_sk_bg_cut_2_ParamLimits

0xd21b,	// (0x0004f4b2) aid_area_sk_bg_cut_2

0x50ff,	// (0x00047396) aid_placing_details_win

0x5107,	// (0x0004739e) aid_placing_details_win_2

0xe9d8,	// (0x00050c6f) camera2_autofocus_pane_g1_ParamLimits

0x1716,	// (0x000439ad) popup_fixed_preview_cale_window_ParamLimits

0x1716,	// (0x000439ad) popup_fixed_preview_cale_window

0xcff5,	// (0x0004f28c) navi_slider_pane_g3

0xcffe,	// (0x0004f295) navi_slider_pane_g4

0xd007,	// (0x0004f29e) navi_slider_pane_g5

0xcff5,	// (0x0004f28c) navi_slider_pane_g6

0xaaac,	// (0x0004cd43) navi_slider_pane_g7

0xd11c,	// (0x0004f3b3) mup_scale_pane_g3

0xd125,	// (0x0004f3bc) mup_scale_pane_g4

0xd12e,	// (0x0004f3c5) mup_scale_pane_g5

0x3a16,	// (0x00045cad) mup_scale_pane_g6

0x3a1f,	// (0x00045cb6) mup_scale_pane_g7

0xcff5,	// (0x0004f28c) cams2_slider_pane_g3

0xe65d,	// (0x000508f4) cams2_slider_pane_g4

0xaba0,	// (0x0004ce37) cams2_slider_pane_g5

0xcff5,	// (0x0004f28c) cams2_slider_pane_g6

0xaba8,	// (0x0004ce3f) cams2_slider_pane_g7

0xe896,	// (0x00050b2d) camera2_autofocus_pane_cp_g1

0xeb7e,	// (0x00050e15) bg_popup_preview_window_pane_cp02_ParamLimits

0xeb7e,	// (0x00050e15) bg_popup_preview_window_pane_cp02

0xeb8a,	// (0x00050e21) list_fp_cale_pane_ParamLimits

0xeb8a,	// (0x00050e21) list_fp_cale_pane

0xeb96,	// (0x00050e2d) popup_fixed_preview_cale_window_t1_ParamLimits

0xeb96,	// (0x00050e2d) popup_fixed_preview_cale_window_t1

0x5980,	// (0x00047c17) popup_fixed_preview_cale_window_t2_ParamLimits

0x5980,	// (0x00047c17) popup_fixed_preview_cale_window_t2

0x5995,	// (0x00047c2c) popup_fixed_preview_cale_window_t3_ParamLimits

0x5995,	// (0x00047c2c) popup_fixed_preview_cale_window_t3

0x0002,

0xf6b1,	// (0x00051948) popup_fixed_preview_cale_window_t_ParamLimits

0xf6b1,	// (0x00051948) popup_fixed_preview_cale_window_t

0xd943,	// (0x0004fbda) list_single_fp_cale_pane_ParamLimits

0xd943,	// (0x0004fbda) list_single_fp_cale_pane

0xebb4,	// (0x00050e4b) list_single_fp_cale_pane_g1_ParamLimits

0xebb4,	// (0x00050e4b) list_single_fp_cale_pane_g1

0xebc0,	// (0x00050e57) list_single_fp_cale_pane_g2_ParamLimits

0xebc0,	// (0x00050e57) list_single_fp_cale_pane_g2

0x0002,

0x0346,	// (0x000425dd) list_single_fp_cale_pane_g_ParamLimits

0x0346,	// (0x000425dd) list_single_fp_cale_pane_g

0xebd9,	// (0x00050e70) list_single_fp_cale_pane_t1_ParamLimits

0xebd9,	// (0x00050e70) list_single_fp_cale_pane_t1

0xebeb,	// (0x00050e82) list_single_fp_cale_pane_t2_ParamLimits

0xebeb,	// (0x00050e82) list_single_fp_cale_pane_t2

0x0001,

0x034d,	// (0x000425e4) list_single_fp_cale_pane_t_ParamLimits

0x034d,	// (0x000425e4) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa634,	// (0x0004c8cb) main_dialer_pane

0x59ac,	// (0x00047c43) aid_cell_size_keypad

0x59b6,	// (0x00047c4d) dialer_ne_pane

0x59c0,	// (0x00047c57) grid_dialer_command_1_pane

0x59c8,	// (0x00047c5f) grid_dialer_command_2_pane

0x59d0,	// (0x00047c67) grid_dialer_keypad_pane

0x59e4,	// (0x00047c7b) bg_popup_call_pane_cp06_ParamLimits

0x59e4,	// (0x00047c7b) bg_popup_call_pane_cp06

0x59f0,	// (0x00047c87) dialer_ne_clear_pane_ParamLimits

0x59f0,	// (0x00047c87) dialer_ne_clear_pane

0xec1e,	// (0x00050eb5) dialer_ne_pane_g1

0xec26,	// (0x00050ebd) dialer_ne_pane_t1_ParamLimits

0xec26,	// (0x00050ebd) dialer_ne_pane_t1

0x59fc,	// (0x00047c93) dialer_ne_pane_t2_ParamLimits

0x59fc,	// (0x00047c93) dialer_ne_pane_t2

0x5a26,	// (0x00047cbd) dialer_ne_pane_t3_ParamLimits

0x5a26,	// (0x00047cbd) dialer_ne_pane_t3

0x0002,

0xf6b8,	// (0x0005194f) dialer_ne_pane_t_ParamLimits

0xf6b8,	// (0x0005194f) dialer_ne_pane_t

0x5a56,	// (0x00047ced) dialer_ne_pane_t3_copy1_ParamLimits

0x5a56,	// (0x00047ced) dialer_ne_pane_t3_copy1

0x5a85,	// (0x00047d1c) cell_dialer_keypad_pane_ParamLimits

0x5a85,	// (0x00047d1c) cell_dialer_keypad_pane

0x5a9c,	// (0x00047d33) cell_dialer_command_1_pane_ParamLimits

0x5a9c,	// (0x00047d33) cell_dialer_command_1_pane

0x5ab2,	// (0x00047d49) cell_dialer_command_2_pane_ParamLimits

0x5ab2,	// (0x00047d49) cell_dialer_command_2_pane

0xec38,	// (0x00050ecf) bg_button_pane_cp02_ParamLimits

0xec38,	// (0x00050ecf) bg_button_pane_cp02

0x5ac1,	// (0x00047d58) cell_dialer_keypad_pane_g1_ParamLimits

0x5ac1,	// (0x00047d58) cell_dialer_keypad_pane_g1

0xec38,	// (0x00050ecf) bg_button_pane_cp03_ParamLimits

0xec38,	// (0x00050ecf) bg_button_pane_cp03

0x5ad6,	// (0x00047d6d) cell_dialer_command_1_pane_g1_ParamLimits

0x5ad6,	// (0x00047d6d) cell_dialer_command_1_pane_g1

0xec44,	// (0x00050edb) bg_button_pane_cp04

0x5aea,	// (0x00047d81) cell_dialer_command_2_pane_g1

0xcfe4,	// (0x0004f27b) bg_button_pane_cp06

0xec4c,	// (0x00050ee3) dialer_ne_clear_pane_g1

0x34f8,	// (0x0004578f) navi_pane_g2

0x3526,	// (0x000457bd) navi_pane_g3

0x0002,

0xf409,	// (0x000516a0) navi_pane_g

0x3551,	// (0x000457e8) navi_pane_mv_g2

0x3578,	// (0x0004580f) navi_pane_mv_g5

0x3580,	// (0x00045817) navi_pane_mv_t1

0xc590,	// (0x0004e827) main_clock2_pane

0x5b27,	// (0x00047dbe) main_clock2_list_pane_ParamLimits

0x5b27,	// (0x00047dbe) main_clock2_list_pane

0x5b5f,	// (0x00047df6) main_clock2_pane_t1_ParamLimits

0x5b5f,	// (0x00047df6) main_clock2_pane_t1

0x5b9b,	// (0x00047e32) main_clock2_pane_t2_ParamLimits

0x5b9b,	// (0x00047e32) main_clock2_pane_t2

0x0004,

0xf6bf,	// (0x00051956) main_clock2_pane_t_ParamLimits

0xf6bf,	// (0x00051956) main_clock2_pane_t

0x5c27,	// (0x00047ebe) popup_clock_analogue_window_cp03_ParamLimits

0x5c27,	// (0x00047ebe) popup_clock_analogue_window_cp03

0x5c4e,	// (0x00047ee5) popup_clock_digital_window_cp02_ParamLimits

0x5c4e,	// (0x00047ee5) popup_clock_digital_window_cp02

0x5cc7,	// (0x00047f5e) main_clock2_list_single_pane_ParamLimits

0x5cc7,	// (0x00047f5e) main_clock2_list_single_pane

0xcfe4,	// (0x0004f27b) list_highlight_pane_cp05

0xec54,	// (0x00050eeb) main_clock2_list_single_pane_t1

0x24bd,	// (0x00044754) popup_toolbar_window_cp04_ParamLimits

0x516e,	// (0x00047405) camera2_autofocus_pane_g2_ParamLimits

0x516e,	// (0x00047405) camera2_autofocus_pane_g2

0x517a,	// (0x00047411) camera2_autofocus_pane_g3_ParamLimits

0x517a,	// (0x00047411) camera2_autofocus_pane_g3

0x5186,	// (0x0004741d) camera2_autofocus_pane_g4_ParamLimits

0x5186,	// (0x0004741d) camera2_autofocus_pane_g4

0x5192,	// (0x00047429) camera2_autofocus_pane_g5_ParamLimits

0x5192,	// (0x00047429) camera2_autofocus_pane_g5

0x0004,

0xf626,	// (0x000518bd) camera2_autofocus_pane_g_ParamLimits

0xf626,	// (0x000518bd) camera2_autofocus_pane_g

0x533f,	// (0x000475d6) camera2_autofocus_pane_cp_g2

0x5347,	// (0x000475de) camera2_autofocus_pane_cp_g3

0x534f,	// (0x000475e6) camera2_autofocus_pane_cp_g4

0x5357,	// (0x000475ee) camera2_autofocus_pane_cp_g5

0x0004,

0xf67a,	// (0x00051911) camera2_autofocus_pane_cp_g

0x59dc,	// (0x00047c73) popup_dialer_spcha_window

0xa634,	// (0x0004c8cb) bg_popup_sub_pane_cp07

0xec62,	// (0x00050ef9) list_spcha_pane

0xec6a,	// (0x00050f01) list_single_spcha_pane_ParamLimits

0xec6a,	// (0x00050f01) list_single_spcha_pane

0xa634,	// (0x0004c8cb) list_highlight_pane_cp06

0xec7b,	// (0x00050f12) list_single_spcha_pane_t1

0xde58,	// (0x000500ef) popup_call2_audio_out_window_g4_ParamLimits

0xde58,	// (0x000500ef) popup_call2_audio_out_window_g4

0xa634,	// (0x0004c8cb) main_imed2_pane

0xe43f,	// (0x000506d6) popup_imed_adjust2_window

0x453c,	// (0x000467d3) popup_imed_trans_window_ParamLimits

0x453c,	// (0x000467d3) popup_imed_trans_window

0xe6c6,	// (0x0005095d) popup_blid_sat_info2_window_t1

0xe6d4,	// (0x0005096b) popup_blid_sat_info2_window_t2

0x000a,

0xf5ec,	// (0x00051883) popup_blid_sat_info2_window_t

0x5d7d,	// (0x00048014) aid_size_cell_colour_35

0x5d9d,	// (0x00048034) aid_size_cell_colour_112

0x5dbd,	// (0x00048054) aid_size_cell_effect

0xe413,	// (0x000506aa) bg_tb_trans_pane_cp02

0xcb42,	// (0x0004edd9) heading_imed_pane

0x5ddd,	// (0x00048074) listscroll_imed_pane

0xec89,	// (0x00050f20) heading_imed_pane_g1

0xec91,	// (0x00050f28) heading_imed_pane_t1

0xec9f,	// (0x00050f36) grid_imed_colour_35_pane_ParamLimits

0xec9f,	// (0x00050f36) grid_imed_colour_35_pane

0x5de9,	// (0x00048080) grid_imed_effect_pane

0xecbb,	// (0x00050f52) list_imed_aspect_pane

0x5e00,	// (0x00048097) scroll_pane_cp027_ParamLimits

0x5e00,	// (0x00048097) scroll_pane_cp027

0x5e11,	// (0x000480a8) cell_imed_effect_pane_ParamLimits

0x5e11,	// (0x000480a8) cell_imed_effect_pane

0xecc3,	// (0x00050f5a) cell_imed_colour_pane_ParamLimits

0xecc3,	// (0x00050f5a) cell_imed_colour_pane

0xed0d,	// (0x00050fa4) cell_imed_colour_pane_g1_ParamLimits

0xed0d,	// (0x00050fa4) cell_imed_colour_pane_g1

0xed1e,	// (0x00050fb5) hgihlgiht_grid_pane_cp016_ParamLimits

0xed1e,	// (0x00050fb5) hgihlgiht_grid_pane_cp016

0x5e36,	// (0x000480cd) cell_imed_effect_pane_g1

0x5e3e,	// (0x000480d5) grid_highlight_pane_cp017

0xed2f,	// (0x00050fc6) list_imed_single_pane_ParamLimits

0xed2f,	// (0x00050fc6) list_imed_single_pane

0xa634,	// (0x0004c8cb) list_highlight_pane_cp07

0xed43,	// (0x00050fda) list_imed_aspect_pane_comp1_t1

0xe413,	// (0x000506aa) bg_tb_trans_pane_cp05

0xed65,	// (0x00050ffc) popup_imed_adjust2_window_g1

0xed8c,	// (0x00051023) popup_imed_adjust2_window_t1

0xeda4,	// (0x0005103b) slider_imed_adjust_pane

0xedb8,	// (0x0005104f) slider_imed_adjust_pane_g1

0xedc8,	// (0x0005105f) slider_imed_adjust_pane_g2

0xedd8,	// (0x0005106f) slider_imed_adjust_pane_g3

0xede9,	// (0x00051080) slider_imed_adjust_pane_g4

0x0003,

0x0376,	// (0x0004260d) slider_imed_adjust_pane_g

0x5e47,	// (0x000480de) aid_size_cell_clipart2

0x5e53,	// (0x000480ea) grid_imed_clipart_pane

0xedfa,	// (0x00051091) scroll_pane_cp031

0x5e5d,	// (0x000480f4) cell_imed_clipart_pane_ParamLimits

0x5e5d,	// (0x000480f4) cell_imed_clipart_pane

0x5e7a,	// (0x00048111) cell_imed_clipart_pane_g1

0xa634,	// (0x0004c8cb) grid_highlight_pane_cp014

0x5b3c,	// (0x00047dd3) main_clock2_pane_g1_ParamLimits

0x5b3c,	// (0x00047dd3) main_clock2_pane_g1

0x5c6e,	// (0x00047f05) aid_call2_pane_cp10

0x5c80,	// (0x00047f17) aid_call_pane_cp10

0xcf19,	// (0x0004f1b0) popup_clock_analogue_window_cp10_g1

0xcf19,	// (0x0004f1b0) popup_clock_analogue_window_cp10_g2

0x5c92,	// (0x00047f29) popup_clock_analogue_window_cp10_g3

0x5c92,	// (0x00047f29) popup_clock_analogue_window_cp10_g4

0xcf19,	// (0x0004f1b0) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6ca,	// (0x00051961) popup_clock_analogue_window_cp10_g

0x5ca8,	// (0x00047f3f) popup_clock_analogue_window_cp10_t1

0x5cd9,	// (0x00047f70) clock_digital_number_pane_cp10_ParamLimits

0x5cd9,	// (0x00047f70) clock_digital_number_pane_cp10

0x5cf3,	// (0x00047f8a) clock_digital_number_pane_cp11_ParamLimits

0x5cf3,	// (0x00047f8a) clock_digital_number_pane_cp11

0x5d0d,	// (0x00047fa4) clock_digital_number_pane_cp12_ParamLimits

0x5d0d,	// (0x00047fa4) clock_digital_number_pane_cp12

0x5d27,	// (0x00047fbe) clock_digital_number_pane_cp13_ParamLimits

0x5d27,	// (0x00047fbe) clock_digital_number_pane_cp13

0x5d41,	// (0x00047fd8) clock_digital_separator_pane_cp10_ParamLimits

0x5d41,	// (0x00047fd8) clock_digital_separator_pane_cp10

0x5d5b,	// (0x00047ff2) popup_clock_digital_window_cp02_t1_ParamLimits

0x5d5b,	// (0x00047ff2) popup_clock_digital_window_cp02_t1

0xc4bd,	// (0x0004e754) clock_digital_number_pane_cp10_g1

0xc4bd,	// (0x0004e754) clock_digital_number_pane_cp10_g2

0x0001,

0x037f,	// (0x00042616) clock_digital_number_pane_cp10_g

0xc4bd,	// (0x0004e754) clock_digital_separator_pane_cp10_g1

0xc4bd,	// (0x0004e754) clock_digital_separator_pane_g2_cp10

0xcfb4,	// (0x0004f24b) navi_pane_vded_g4

0xcfbd,	// (0x0004f254) navi_pane_vded_g5

0xcfc6,	// (0x0004f25d) navi_pane_vded_t1

0xa634,	// (0x0004c8cb) main_vded_pane

0x5e83,	// (0x0004811a) main_vded_pane_g1

0x5e8f,	// (0x00048126) main_vded_pane_g2

0x5e9b,	// (0x00048132) main_vded_pane_g3

0x0002,

0xf6d5,	// (0x0005196c) main_vded_pane_g

0x5ea7,	// (0x0004813e) main_vded_pane_t1

0x5eb5,	// (0x0004814c) main_vded_pane_t2

0x0001,

0xf6dc,	// (0x00051973) main_vded_pane_t

0x5ec3,	// (0x0004815a) vded_slider_pane

0x5ecd,	// (0x00048164) vded_video_pane

0xee02,	// (0x00051099) vded_video_pane_g1

0x5ed9,	// (0x00048170) vded_video_pane_g2

0xe896,	// (0x00050b2d) vded_video_pane_g3

0x0002,

0xf6e1,	// (0x00051978) vded_video_pane_g

0xee0c,	// (0x000510a3) vded_slider_pane_g1

0xe5db,	// (0x00050872) vded_slider_pane_g2

0xee15,	// (0x000510ac) vded_slider_pane_g3

0xee1e,	// (0x000510b5) vded_slider_pane_g4

0xee27,	// (0x000510be) vded_slider_pane_g5

0x0004,

0x0397,	// (0x0004262e) vded_slider_pane_g

0x58da,	// (0x00047b71) mup3_rocker_pane_ParamLimits

0x58da,	// (0x00047b71) mup3_rocker_pane

0x5ee2,	// (0x00048179) mup3_control_keys_pane_g1

0x5eea,	// (0x00048181) mup3_control_keys_pane_g2

0x5ef2,	// (0x00048189) mup3_control_keys_pane_g3

0x5efa,	// (0x00048191) mup3_control_keys_pane_g4

0x0003,

0xf6e8,	// (0x0005197f) mup3_control_keys_pane_g

0x174d,	// (0x000439e4) popup_toolbar2_fixed_window_cp01_ParamLimits

0x174d,	// (0x000439e4) popup_toolbar2_fixed_window_cp01

0x5910,	// (0x00047ba7) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5910,	// (0x00047ba7) popup_toolbar2_fixed_window_cp02

0xd77f,	// (0x0004fa16) popup_call2_audio_second_window_t4_ParamLimits

0xd77f,	// (0x0004fa16) popup_call2_audio_second_window_t4

0xdcc5,	// (0x0004ff5c) popup_call2_audio_first_window_t6_ParamLimits

0xdcc5,	// (0x0004ff5c) popup_call2_audio_first_window_t6

0xdf5b,	// (0x000501f2) popup_call2_audio_out_window_t6_ParamLimits

0xdf5b,	// (0x000501f2) popup_call2_audio_out_window_t6

0xa634,	// (0x0004c8cb) main_vitu_pane

0x5f0a,	// (0x000481a1) aid_size_cell_itu_ParamLimits

0x5f0a,	// (0x000481a1) aid_size_cell_itu

0xa6ad,	// (0x0004c944) bg_popup_window_pane_cp08_ParamLimits

0xa6ad,	// (0x0004c944) bg_popup_window_pane_cp08

0x5f20,	// (0x000481b7) field_vitu_entry_pane_ParamLimits

0x5f20,	// (0x000481b7) field_vitu_entry_pane

0x5f37,	// (0x000481ce) grid_vitu_function_pane_ParamLimits

0x5f37,	// (0x000481ce) grid_vitu_function_pane

0x5f52,	// (0x000481e9) grid_vitu_itu_pane_ParamLimits

0x5f52,	// (0x000481e9) grid_vitu_itu_pane

0x5f70,	// (0x00048207) cell_vitu_itu_pane_ParamLimits

0x5f70,	// (0x00048207) cell_vitu_itu_pane

0x5f96,	// (0x0004822d) cell_vitu_function_pane_ParamLimits

0x5f96,	// (0x0004822d) cell_vitu_function_pane

0xa6ad,	// (0x0004c944) bg_popup_sub_pane_cp08_ParamLimits

0xa6ad,	// (0x0004c944) bg_popup_sub_pane_cp08

0x5fb1,	// (0x00048248) field_vitu_entry_pane_t1_ParamLimits

0x5fb1,	// (0x00048248) field_vitu_entry_pane_t1

0xee48,	// (0x000510df) field_vitu_entry_pane_t2_ParamLimits

0xee48,	// (0x000510df) field_vitu_entry_pane_t2

0x0001,

0xf6f1,	// (0x00051988) field_vitu_entry_pane_t_ParamLimits

0xf6f1,	// (0x00051988) field_vitu_entry_pane_t

0xee65,	// (0x000510fc) bg_button_pane_cp05_ParamLimits

0xee65,	// (0x000510fc) bg_button_pane_cp05

0x5fd1,	// (0x00048268) cell_vitu_itu_pane_g1

0x5fe9,	// (0x00048280) cell_vitu_itu_pane_t1_ParamLimits

0x5fe9,	// (0x00048280) cell_vitu_itu_pane_t1

0x5ffb,	// (0x00048292) cell_vitu_itu_pane_t2_ParamLimits

0x5ffb,	// (0x00048292) cell_vitu_itu_pane_t2

0x0002,

0xf6f6,	// (0x0005198d) cell_vitu_itu_pane_t_ParamLimits

0xf6f6,	// (0x0005198d) cell_vitu_itu_pane_t

0xee73,	// (0x0005110a) bg_button_pane_cp07

0x6030,	// (0x000482c7) cell_vitu_function_pane_g1

0xa797,	// (0x0004ca2e) main_calc_pane_g1

0x1585,	// (0x0004381c) aid_visual_content_pane

0xa634,	// (0x0004c8cb) main_vradio_pane

0x6039,	// (0x000482d0) main_vradio_pane_g1_ParamLimits

0x6039,	// (0x000482d0) main_vradio_pane_g1

0xee7d,	// (0x00051114) main_vradio_pane_g2_ParamLimits

0xee7d,	// (0x00051114) main_vradio_pane_g2

0x0001,

0xf6fd,	// (0x00051994) main_vradio_pane_g_ParamLimits

0xf6fd,	// (0x00051994) main_vradio_pane_g

0x6050,	// (0x000482e7) main_vradio_pane_t1_ParamLimits

0x6050,	// (0x000482e7) main_vradio_pane_t1

0x6065,	// (0x000482fc) main_vradio_pane_t2_ParamLimits

0x6065,	// (0x000482fc) main_vradio_pane_t2

0xee8a,	// (0x00051121) main_vradio_pane_t3_ParamLimits

0xee8a,	// (0x00051121) main_vradio_pane_t3

0x0002,

0xf702,	// (0x00051999) main_vradio_pane_t_ParamLimits

0xf702,	// (0x00051999) main_vradio_pane_t

0x607a,	// (0x00048311) vradio_rocker_control_pane_ParamLimits

0x607a,	// (0x00048311) vradio_rocker_control_pane

0x608c,	// (0x00048323) vradio_station_info_pane_ParamLimits

0x608c,	// (0x00048323) vradio_station_info_pane

0xee9e,	// (0x00051135) vradio_frequency_info_pane_ParamLimits

0xee9e,	// (0x00051135) vradio_frequency_info_pane

0xe896,	// (0x00050b2d) vradio_station_info_pane_g1

0xeead,	// (0x00051144) vradio_station_info_pane_t1_ParamLimits

0xeead,	// (0x00051144) vradio_station_info_pane_t1

0xeecf,	// (0x00051166) vradio_station_info_pane_t2_ParamLimits

0xeecf,	// (0x00051166) vradio_station_info_pane_t2

0x0001,

0x03c8,	// (0x0004265f) vradio_station_info_pane_t_ParamLimits

0x03c8,	// (0x0004265f) vradio_station_info_pane_t

0xeee1,	// (0x00051178) vradio_tuning_pane

0xeee9,	// (0x00051180) vradio_rocker_control_pane_g1

0xeef1,	// (0x00051188) vradio_rocker_control_pane_g2

0xeef9,	// (0x00051190) vradio_rocker_control_pane_g3

0xef01,	// (0x00051198) vradio_rocker_control_pane_g4

0xef09,	// (0x000511a0) vradio_rocker_control_pane_g5

0x0004,

0x03cd,	// (0x00042664) vradio_rocker_control_pane_g

0x609c,	// (0x00048333) vradio_frequency_info_pane_g1

0xef11,	// (0x000511a8) vradio_frequency_info_pane_t1_ParamLimits

0xef11,	// (0x000511a8) vradio_frequency_info_pane_t1

0x60a6,	// (0x0004833d) vradio_tuning_pane_g1

0x60b1,	// (0x00048348) vradio_tuning_pane_t1

0xa66a,	// (0x0004c901) area_side_right_pane_ParamLimits

0xa66a,	// (0x0004c901) area_side_right_pane

0xe3da,	// (0x00050671) status_small_pane_g1

0xe3e2,	// (0x00050679) status_small_pane_g2

0xe3eb,	// (0x00050682) status_small_pane_g3

0xe3f4,	// (0x0005068b) status_small_pane_g4

0x0003,

0x018d,	// (0x00042424) status_small_pane_g

0xe3fd,	// (0x00050694) status_small_pane_t1

0xa634,	// (0x0004c8cb) main_video3_pane

0xef25,	// (0x000511bc) cams_zoom_vslider_pane

0xef2d,	// (0x000511c4) image3_wide_pane_ParamLimits

0xef2d,	// (0x000511c4) image3_wide_pane

0xef47,	// (0x000511de) image3_wide_small_pane

0xef53,	// (0x000511ea) main_video3_pane_g1_ParamLimits

0xef53,	// (0x000511ea) main_video3_pane_g1

0xef6f,	// (0x00051206) main_video3_pane_g2_ParamLimits

0xef6f,	// (0x00051206) main_video3_pane_g2

0x0001,

0x03d8,	// (0x0004266f) main_video3_pane_g_ParamLimits

0x03d8,	// (0x0004266f) main_video3_pane_g

0xef8b,	// (0x00051222) main_video3_pane_t1_ParamLimits

0xef8b,	// (0x00051222) main_video3_pane_t1

0xefb6,	// (0x0005124d) main_video3_pane_t2_ParamLimits

0xefb6,	// (0x0005124d) main_video3_pane_t2

0xefe3,	// (0x0005127a) main_video3_pane_t3_ParamLimits

0xefe3,	// (0x0005127a) main_video3_pane_t3

0x0002,

0x03dd,	// (0x00042674) main_video3_pane_t_ParamLimits

0x03dd,	// (0x00042674) main_video3_pane_t

0xf010,	// (0x000512a7) cams_zoom_vslider_pane_g1

0xf019,	// (0x000512b0) cams_zoom_vslider_pane_g2

0x0001,

0x03e4,	// (0x0004267b) cams_zoom_vslider_pane_g

0xf021,	// (0x000512b8) small_slider_vertical_pane

0xe896,	// (0x00050b2d) small_slider_vertical_pane_g1

0xe896,	// (0x00050b2d) small_slider_vertical_pane_g2

0xf029,	// (0x000512c0) small_slider_vertical_pane_g3

0x0002,

0x03e9,	// (0x00042680) small_slider_vertical_pane_g

0xa634,	// (0x0004c8cb) main_hwr_training_pane

0xf032,	// (0x000512c9) hwr_training_instruct_pane_ParamLimits

0xf032,	// (0x000512c9) hwr_training_instruct_pane

0x60c0,	// (0x00048357) hwr_training_navi_pane_ParamLimits

0x60c0,	// (0x00048357) hwr_training_navi_pane

0x60df,	// (0x00048376) hwr_training_write_pane_ParamLimits

0x60df,	// (0x00048376) hwr_training_write_pane

0xa634,	// (0x0004c8cb) bg_frame_shadow_pane

0xf069,	// (0x00051300) hwr_training_write_pane_g1

0xf071,	// (0x00051308) hwr_training_write_pane_g2

0xf079,	// (0x00051310) hwr_training_write_pane_g3

0xf081,	// (0x00051318) hwr_training_write_pane_g4

0xf089,	// (0x00051320) hwr_training_write_pane_g5

0xf091,	// (0x00051328) hwr_training_write_pane_g6

0xf099,	// (0x00051330) hwr_training_write_pane_g7

0x0006,

0x03f0,	// (0x00042687) hwr_training_write_pane_g

0xac25,	// (0x0004cebc) hwr_training_navi_pane_g1_ParamLimits

0xac25,	// (0x0004cebc) hwr_training_navi_pane_g1

0xac37,	// (0x0004cece) hwr_training_navi_pane_g2_ParamLimits

0xac37,	// (0x0004cece) hwr_training_navi_pane_g2

0xac49,	// (0x0004cee0) hwr_training_navi_pane_g3_ParamLimits

0xac49,	// (0x0004cee0) hwr_training_navi_pane_g3

0xac59,	// (0x0004cef0) hwr_training_navi_pane_g4_ParamLimits

0xac59,	// (0x0004cef0) hwr_training_navi_pane_g4

0x0004,

0xf709,	// (0x000519a0) hwr_training_navi_pane_g_ParamLimits

0xf709,	// (0x000519a0) hwr_training_navi_pane_g

0xac66,	// (0x0004cefd) hwr_training_navi_pane_t1

0x6127,	// (0x000483be) list_single_hwr_training_instruct_pane_ParamLimits

0x6127,	// (0x000483be) list_single_hwr_training_instruct_pane

0xf0a1,	// (0x00051338) list_single_hwr_training_instruct_pane_t1

0xe7ce,	// (0x00050a65) bg_frame_shadow_pane_g1

0xf0b0,	// (0x00051347) bg_frame_shadow_pane_g2

0xf0b8,	// (0x0005134f) bg_frame_shadow_pane_g3

0xf0c0,	// (0x00051357) bg_frame_shadow_pane_g4

0xf0c8,	// (0x0005135f) bg_frame_shadow_pane_g5

0xf0d0,	// (0x00051367) bg_frame_shadow_pane_g6

0xf0d8,	// (0x0005136f) bg_frame_shadow_pane_g7

0xc65b,	// (0x0004e8f2) bg_frame_shadow_pane_g8

0x0007,

0xf714,	// (0x000519ab) bg_frame_shadow_pane_g

0xa634,	// (0x0004c8cb) main_video_tele_dialer_pane

0x6143,	// (0x000483da) aid_size_cell_video_keypad_ParamLimits

0x6143,	// (0x000483da) aid_size_cell_video_keypad

0x615d,	// (0x000483f4) grid_video_dialer_keypad_pane_ParamLimits

0x615d,	// (0x000483f4) grid_video_dialer_keypad_pane

0x61ab,	// (0x00048442) video_down_pane_cp_ParamLimits

0x61ab,	// (0x00048442) video_down_pane_cp

0x61df,	// (0x00048476) cell_video_dialer_keypad_pane_ParamLimits

0x61df,	// (0x00048476) cell_video_dialer_keypad_pane

0xf0e0,	// (0x00051377) bg_button_pane_cp08_ParamLimits

0xf0e0,	// (0x00051377) bg_button_pane_cp08

0x6205,	// (0x0004849c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6205,	// (0x0004849c) cell_video_dialer_keypad_pane_g1

0x58c4,	// (0x00047b5b) mup3_rocker2_pane_ParamLimits

0x58c4,	// (0x00047b5b) mup3_rocker2_pane

0xe896,	// (0x00050b2d) mup3_rocker2_pane_g1

0x4409,	// (0x000466a0) main_dialer2_pane

0xa634,	// (0x0004c8cb) main_mp4_pane

0xac7c,	// (0x0004cf13) main_mp4_pane_g1_ParamLimits

0xac7c,	// (0x0004cf13) main_mp4_pane_g1

0xac7c,	// (0x0004cf13) main_mp4_pane_g2_ParamLimits

0xac7c,	// (0x0004cf13) main_mp4_pane_g2

0x6240,	// (0x000484d7) main_mp4_pane_g3_ParamLimits

0x6240,	// (0x000484d7) main_mp4_pane_g3

0xac8a,	// (0x0004cf21) main_mp4_pane_g4_ParamLimits

0xac8a,	// (0x0004cf21) main_mp4_pane_g4

0xaca4,	// (0x0004cf3b) main_mp4_pane_g5_ParamLimits

0xaca4,	// (0x0004cf3b) main_mp4_pane_g5

0x0005,

0xf734,	// (0x000519cb) main_mp4_pane_g_ParamLimits

0xf734,	// (0x000519cb) main_mp4_pane_g

0xacd8,	// (0x0004cf6f) main_mp4_pane_t1_ParamLimits

0xacd8,	// (0x0004cf6f) main_mp4_pane_t1

0xad34,	// (0x0004cfcb) main_mp4_pane_t2_ParamLimits

0xad34,	// (0x0004cfcb) main_mp4_pane_t2

0x628a,	// (0x00048521) main_mp4_pane_t3_ParamLimits

0x628a,	// (0x00048521) main_mp4_pane_t3

0xad86,	// (0x0004d01d) main_mp4_pane_t4_ParamLimits

0xad86,	// (0x0004d01d) main_mp4_pane_t4

0x0003,

0xf741,	// (0x000519d8) main_mp4_pane_t_ParamLimits

0xf741,	// (0x000519d8) main_mp4_pane_t

0xadc6,	// (0x0004d05d) mp4_progress_pane_ParamLimits

0xadc6,	// (0x0004d05d) mp4_progress_pane

0xae10,	// (0x0004d0a7) mp4_rocker_pane_ParamLimits

0xae10,	// (0x0004d0a7) mp4_rocker_pane

0x62b2,	// (0x00048549) mp4_progress_pane_t1

0x62cb,	// (0x00048562) mp4_progress_pane_t2

0x0001,

0xf74a,	// (0x000519e1) mp4_progress_pane_t

0x62e4,	// (0x0004857b) mup_progress_pane_cp04

0xe896,	// (0x00050b2d) mp4_rocker_pane_g1

0x62f0,	// (0x00048587) aid_cell_size_keypad2_ParamLimits

0x62f0,	// (0x00048587) aid_cell_size_keypad2

0x6306,	// (0x0004859d) dialer2_ne_pane_ParamLimits

0x6306,	// (0x0004859d) dialer2_ne_pane

0x631e,	// (0x000485b5) grid_dialer2_keypad_pane_ParamLimits

0x631e,	// (0x000485b5) grid_dialer2_keypad_pane

0xe66d,	// (0x00050904) bg_popup_call_pane_cp07_ParamLimits

0xe66d,	// (0x00050904) bg_popup_call_pane_cp07

0x633a,	// (0x000485d1) dialer2_ne_pane_t1_ParamLimits

0x633a,	// (0x000485d1) dialer2_ne_pane_t1

0x638c,	// (0x00048623) cell_dialer2_keypad_pane_ParamLimits

0x638c,	// (0x00048623) cell_dialer2_keypad_pane

0x63b2,	// (0x00048649) bg_button_pane_pane_cp04_ParamLimits

0x63b2,	// (0x00048649) bg_button_pane_pane_cp04

0x63be,	// (0x00048655) cell_dialer2_keypad_pane_g1_ParamLimits

0x63be,	// (0x00048655) cell_dialer2_keypad_pane_g1

0x23a1,	// (0x00044638) aid_placing_vt_set_content_ParamLimits

0x23a1,	// (0x00044638) aid_placing_vt_set_content

0x23c5,	// (0x0004465c) aid_placing_vt_set_title_ParamLimits

0x23c5,	// (0x0004465c) aid_placing_vt_set_title

0xa634,	// (0x0004c8cb) main_image3_pane

0x6484,	// (0x0004871b) area_side_right_pane_cp01_ParamLimits

0x6484,	// (0x0004871b) area_side_right_pane_cp01

0xac7c,	// (0x0004cf13) main_image3_pane_g1_ParamLimits

0xac7c,	// (0x0004cf13) main_image3_pane_g1

0x649d,	// (0x00048734) main_image3_pane_g2_ParamLimits

0x649d,	// (0x00048734) main_image3_pane_g2

0x64c5,	// (0x0004875c) main_image3_pane_g3_ParamLimits

0x64c5,	// (0x0004875c) main_image3_pane_g3

0x64ef,	// (0x00048786) main_image3_pane_g4_ParamLimits

0x64ef,	// (0x00048786) main_image3_pane_g4

0x0003,

0xf759,	// (0x000519f0) main_image3_pane_g_ParamLimits

0xf759,	// (0x000519f0) main_image3_pane_g

0x6519,	// (0x000487b0) main_image3_pane_t1_ParamLimits

0x6519,	// (0x000487b0) main_image3_pane_t1

0x6571,	// (0x00048808) main_image3_pane_t2_ParamLimits

0x6571,	// (0x00048808) main_image3_pane_t2

0x65c3,	// (0x0004885a) main_image3_pane_t3_ParamLimits

0x65c3,	// (0x0004885a) main_image3_pane_t3

0x0003,

0xf762,	// (0x000519f9) main_image3_pane_t_ParamLimits

0xf762,	// (0x000519f9) main_image3_pane_t

0xa6ad,	// (0x0004c944) grid_sctrl_middle_pane_cp01_ParamLimits

0xa6ad,	// (0x0004c944) grid_sctrl_middle_pane_cp01

0x664b,	// (0x000488e2) cell_sctrl_middle_pane_cp01_ParamLimits

0x664b,	// (0x000488e2) cell_sctrl_middle_pane_cp01

0x6668,	// (0x000488ff) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6668,	// (0x000488ff) cell_sctrl_middle_pane_cp01_g1

0xa634,	// (0x0004c8cb) main_call4_pane

0x667d,	// (0x00048914) aid_size_button_call4_ParamLimits

0x667d,	// (0x00048914) aid_size_button_call4

0x66b0,	// (0x00048947) call4_windows_pane_ParamLimits

0x66b0,	// (0x00048947) call4_windows_pane

0x66d2,	// (0x00048969) grid_call4_button_pane_ParamLimits

0x66d2,	// (0x00048969) grid_call4_button_pane

0x66fd,	// (0x00048994) call4_windows_conf_pane

0x6718,	// (0x000489af) popup_call4_audio_first_window_ParamLimits

0x6718,	// (0x000489af) popup_call4_audio_first_window

0x6766,	// (0x000489fd) popup_call4_audio_second_window_ParamLimits

0x6766,	// (0x000489fd) popup_call4_audio_second_window

0x677c,	// (0x00048a13) popup_call4_audio_wait_window_ParamLimits

0x677c,	// (0x00048a13) popup_call4_audio_wait_window

0x678a,	// (0x00048a21) cell_call4_button_pane_ParamLimits

0x678a,	// (0x00048a21) cell_call4_button_pane

0x67b1,	// (0x00048a48) bg_button_pane_cp09_ParamLimits

0x67b1,	// (0x00048a48) bg_button_pane_cp09

0x67bd,	// (0x00048a54) cell_call4_button_pane_g1_ParamLimits

0x67bd,	// (0x00048a54) cell_call4_button_pane_g1

0x67e3,	// (0x00048a7a) cell_call4_button_pane_t1_ParamLimits

0x67e3,	// (0x00048a7a) cell_call4_button_pane_t1

0x6843,	// (0x00048ada) popup_call4_audio_conf_window_ParamLimits

0x6843,	// (0x00048ada) popup_call4_audio_conf_window

0x5926,	// (0x00047bbd) mup3_progress_pane_t1_ParamLimits

0x593d,	// (0x00047bd4) mup3_progress_pane_t2_ParamLimits

0xeb41,	// (0x00050dd8) mup3_progress_pane_t3_ParamLimits

0xf6a3,	// (0x0005193a) mup3_progress_pane_t_ParamLimits

0xeb58,	// (0x00050def) mup_progress_pane_cp03_ParamLimits

0x5f02,	// (0x00048199) mup3_control_keys_pane_g4_copy1

0xadf4,	// (0x0004d08b) mp4_rocker2_pane_ParamLimits

0xadf4,	// (0x0004d08b) mp4_rocker2_pane

0x685d,	// (0x00048af4) mp4_rocker2_pane_g1

0x6865,	// (0x00048afc) mp4_rocker2_pane_g2

0xae66,	// (0x0004d0fd) mp4_rocker2_pane_g3

0xae6e,	// (0x0004d105) mp4_rocker2_pane_g4

0xae76,	// (0x0004d10d) mp4_rocker2_pane_g5

0x0004,

0xf76b,	// (0x00051a02) mp4_rocker2_pane_g

0xa634,	// (0x0004c8cb) main_camera4_pane

0xa634,	// (0x0004c8cb) main_video4_pane

0x6179,	// (0x00048410) main_video_tele_dialer_pane_t1_ParamLimits

0x6179,	// (0x00048410) main_video_tele_dialer_pane_t1

0x6192,	// (0x00048429) main_video_tele_dialer_pane_t2_ParamLimits

0x6192,	// (0x00048429) main_video_tele_dialer_pane_t2

0x0001,

0xf725,	// (0x000519bc) main_video_tele_dialer_pane_t_ParamLimits

0xf725,	// (0x000519bc) main_video_tele_dialer_pane_t

0x6885,	// (0x00048b1c) cam4_autofocus_pane_ParamLimits

0x6885,	// (0x00048b1c) cam4_autofocus_pane

0x689b,	// (0x00048b32) cam4_image_uncrop_pane_ParamLimits

0x689b,	// (0x00048b32) cam4_image_uncrop_pane

0x68b4,	// (0x00048b4b) cam4_indicators_pane_ParamLimits

0x68b4,	// (0x00048b4b) cam4_indicators_pane

0x68e3,	// (0x00048b7a) main_camera4_pane_g1_ParamLimits

0x68e3,	// (0x00048b7a) main_camera4_pane_g1

0x68ef,	// (0x00048b86) main_camera4_pane_g2_ParamLimits

0x68ef,	// (0x00048b86) main_camera4_pane_g2

0x68ef,	// (0x00048b86) main_camera4_pane_g3_ParamLimits

0x68ef,	// (0x00048b86) main_camera4_pane_g3

0x68fb,	// (0x00048b92) main_camera4_pane_g4_ParamLimits

0x68fb,	// (0x00048b92) main_camera4_pane_g4

0x6907,	// (0x00048b9e) main_camera4_pane_g5_ParamLimits

0x6907,	// (0x00048b9e) main_camera4_pane_g5

0x0005,

0xf776,	// (0x00051a0d) main_camera4_pane_g_ParamLimits

0xf776,	// (0x00051a0d) main_camera4_pane_g

0x6924,	// (0x00048bbb) main_camera4_pane_t1_ParamLimits

0x6924,	// (0x00048bbb) main_camera4_pane_t1

0xeac6,	// (0x00050d5d) bg_tb_trans_pane_cp06

0xaea4,	// (0x0004d13b) cam4_indicators_pane_g1

0xaeb1,	// (0x0004d148) cam4_indicators_pane_g2

0x0002,

0xf791,	// (0x00051a28) cam4_indicators_pane_g

0xaed1,	// (0x0004d168) cam4_indicators_pane_t1

0x699c,	// (0x00048c33) main_video4_pane_g1_ParamLimits

0x699c,	// (0x00048c33) main_video4_pane_g1

0x69ae,	// (0x00048c45) main_video4_pane_g2_ParamLimits

0x69ae,	// (0x00048c45) main_video4_pane_g2

0x69c2,	// (0x00048c59) main_video4_pane_g3_ParamLimits

0x69c2,	// (0x00048c59) main_video4_pane_g3

0x69d2,	// (0x00048c69) main_video4_pane_g4_ParamLimits

0x69d2,	// (0x00048c69) main_video4_pane_g4

0x0004,

0xf798,	// (0x00051a2f) main_video4_pane_g_ParamLimits

0xf798,	// (0x00051a2f) main_video4_pane_g

0x69f2,	// (0x00048c89) vid4_indicators_pane_ParamLimits

0x69f2,	// (0x00048c89) vid4_indicators_pane

0x6a22,	// (0x00048cb9) video4_image_uncrop_cif_pane_ParamLimits

0x6a22,	// (0x00048cb9) video4_image_uncrop_cif_pane

0x6a3c,	// (0x00048cd3) video4_image_uncrop_nhd_pane_ParamLimits

0x6a3c,	// (0x00048cd3) video4_image_uncrop_nhd_pane

0x689b,	// (0x00048b32) video4_image_uncrop_vga_pane_ParamLimits

0x689b,	// (0x00048b32) video4_image_uncrop_vga_pane

0xaef5,	// (0x0004d18c) bg_tb_trans_pane_cp07

0x6a52,	// (0x00048ce9) vid4_indicators_pane_g1

0x6a5f,	// (0x00048cf6) vid4_indicators_pane_g2

0x6a6c,	// (0x00048d03) vid4_indicators_pane_g3

0x0004,

0xf7a3,	// (0x00051a3a) vid4_indicators_pane_g

0x6a91,	// (0x00048d28) vid4_indicators_pane_t1

0x6aa3,	// (0x00048d3a) cam4_autofocus_pane_g1

0x6aab,	// (0x00048d42) cam4_autofocus_pane_g2

0x6ab3,	// (0x00048d4a) cam4_autofocus_pane_g3

0x0002,

0xf7ae,	// (0x00051a45) cam4_autofocus_pane_g

0x6abb,	// (0x00048d52) cam4_autofocus_pane_g3_copy1

0x61c3,	// (0x0004845a) video_down_pane_cp_t1

0x61d1,	// (0x00048468) video_down_pane_cp_t2

0x0001,

0xf72a,	// (0x000519c1) video_down_pane_cp_t

0xa6ad,	// (0x0004c944) popup_vitu2_window_ParamLimits

0xa6ad,	// (0x0004c944) popup_vitu2_window

0x6ac3,	// (0x00048d5a) aid_size_cell2_itu2_ParamLimits

0x6ac3,	// (0x00048d5a) aid_size_cell2_itu2

0x6ae9,	// (0x00048d80) aid_size_cell_itu2_ParamLimits

0x6ae9,	// (0x00048d80) aid_size_cell_itu2

0x6b47,	// (0x00048dde) bg_popup_window_pane_cp09_ParamLimits

0x6b47,	// (0x00048dde) bg_popup_window_pane_cp09

0x6b55,	// (0x00048dec) field_vitu2_entry_pane_ParamLimits

0x6b55,	// (0x00048dec) field_vitu2_entry_pane

0x6b7d,	// (0x00048e14) grid_vitu2_function_pane_ParamLimits

0x6b7d,	// (0x00048e14) grid_vitu2_function_pane

0x6bce,	// (0x00048e65) grid_vitu2_itu_pane_ParamLimits

0x6bce,	// (0x00048e65) grid_vitu2_itu_pane

0x6c59,	// (0x00048ef0) cell_vitu2_itu_pane_ParamLimits

0x6c59,	// (0x00048ef0) cell_vitu2_itu_pane

0x6c7f,	// (0x00048f16) cell_vitu2_function_pane_ParamLimits

0x6c7f,	// (0x00048f16) cell_vitu2_function_pane

0x6cc3,	// (0x00048f5a) bg_popup_call_pane_cp08_ParamLimits

0x6cc3,	// (0x00048f5a) bg_popup_call_pane_cp08

0x6cdc,	// (0x00048f73) field_vitu2_entry_pane_g1

0x6ce8,	// (0x00048f7f) field_vitu2_entry_pane_g2

0x0002,

0xf7b5,	// (0x00051a4c) field_vitu2_entry_pane_g

0xaf0d,	// (0x0004d1a4) field_vitu2_entry_pane_t1_ParamLimits

0xaf0d,	// (0x0004d1a4) field_vitu2_entry_pane_t1

0xaf2a,	// (0x0004d1c1) field_vitu2_entry_pane_t2_ParamLimits

0xaf2a,	// (0x0004d1c1) field_vitu2_entry_pane_t2

0x0001,

0xf7bc,	// (0x00051a53) field_vitu2_entry_pane_t_ParamLimits

0xf7bc,	// (0x00051a53) field_vitu2_entry_pane_t

0x6d0a,	// (0x00048fa1) bg_button_pane_cp010_ParamLimits

0x6d0a,	// (0x00048fa1) bg_button_pane_cp010

0x6d18,	// (0x00048faf) cell_vitu2_itu_pane_g1

0x6d36,	// (0x00048fcd) cell_vitu2_itu_pane_t1_ParamLimits

0x6d36,	// (0x00048fcd) cell_vitu2_itu_pane_t1

0x0c64,	// (0x00042efb) cell_vitu2_itu_pane_t2_ParamLimits

0x0c64,	// (0x00042efb) cell_vitu2_itu_pane_t2

0x0002,

0xf7c6,	// (0x00051a5d) cell_vitu2_itu_pane_t_ParamLimits

0xf7c6,	// (0x00051a5d) cell_vitu2_itu_pane_t

0xa6ad,	// (0x0004c944) bg_button_pane_cp011

0x6d9c,	// (0x00049033) cell_vitu2_function_pane_g1

0xa634,	// (0x0004c8cb) main_myfav_hc_pane

0x6613,	// (0x000488aa) popup_image3_note_pane_ParamLimits

0x6613,	// (0x000488aa) popup_image3_note_pane

0x662f,	// (0x000488c6) popup_image3_tool_bar_pane_ParamLimits

0x662f,	// (0x000488c6) popup_image3_tool_bar_pane

0x0ce8,	// (0x00042f7f) cell_vitu2_itu_pane_t3_ParamLimits

0x0ce8,	// (0x00042f7f) cell_vitu2_itu_pane_t3

0xa634,	// (0x0004c8cb) bg_popup_trans_pane

0x6db0,	// (0x00049047) grid_image3_tool_bar_pane

0x6dba,	// (0x00049051) bg_popup_trans_pane_g1

0xc99a,	// (0x0004ec31) bg_popup_trans_pane_g2

0x6dc2,	// (0x00049059) bg_popup_trans_pane_g3

0x6dca,	// (0x00049061) bg_popup_trans_pane_g4

0x6dd2,	// (0x00049069) bg_popup_trans_pane_g5

0x6dda,	// (0x00049071) bg_popup_trans_pane_g6

0x6de2,	// (0x00049079) bg_popup_trans_pane_g7

0x6dea,	// (0x00049081) bg_popup_trans_pane_g8

0xc97a,	// (0x0004ec11) bg_popup_trans_pane_g9

0x0008,

0xf7cd,	// (0x00051a64) bg_popup_trans_pane_g

0x6df2,	// (0x00049089) cell_image3_tool_bar_pane_ParamLimits

0x6df2,	// (0x00049089) cell_image3_tool_bar_pane

0xe896,	// (0x00050b2d) cell_image3_tool_bar_pane_g1

0xa634,	// (0x0004c8cb) bg_popup_trans_pane_cp1

0x6e08,	// (0x0004909f) popup_image3_note_pane_t1

0x6e16,	// (0x000490ad) popup_image3_note_pane_t2

0x6e24,	// (0x000490bb) popup_image3_note_pane_t3

0x0002,

0xf7e0,	// (0x00051a77) popup_image3_note_pane_t

0x6e34,	// (0x000490cb) popup_image3_note_pane_t3_copy1

0x6e42,	// (0x000490d9) bg_myfav_hc_instruction_pane_ParamLimits

0x6e42,	// (0x000490d9) bg_myfav_hc_instruction_pane

0x6e5a,	// (0x000490f1) cell_myfav_contact_pane_ParamLimits

0x6e5a,	// (0x000490f1) cell_myfav_contact_pane

0x6e76,	// (0x0004910d) cell_myfav_contact_pane_cp1_ParamLimits

0x6e76,	// (0x0004910d) cell_myfav_contact_pane_cp1

0x6e8e,	// (0x00049125) cell_myfav_contact_pane_cp2_ParamLimits

0x6e8e,	// (0x00049125) cell_myfav_contact_pane_cp2

0x6ea6,	// (0x0004913d) cell_myfav_contact_pane_cp3_ParamLimits

0x6ea6,	// (0x0004913d) cell_myfav_contact_pane_cp3

0x6ebd,	// (0x00049154) cell_myfav_contact_pane_cp4_ParamLimits

0x6ebd,	// (0x00049154) cell_myfav_contact_pane_cp4

0x6ed5,	// (0x0004916c) cell_myfav_contact_pane_cp5_ParamLimits

0x6ed5,	// (0x0004916c) cell_myfav_contact_pane_cp5

0x6ee9,	// (0x00049180) cell_myfav_contact_pane_cp6_ParamLimits

0x6ee9,	// (0x00049180) cell_myfav_contact_pane_cp6

0x6eff,	// (0x00049196) cell_myfav_contact_pane_cp7_ParamLimits

0x6eff,	// (0x00049196) cell_myfav_contact_pane_cp7

0x6f17,	// (0x000491ae) listscroll_gen_pane_cp05

0x6f20,	// (0x000491b7) main_myfav_hc_pane_g1_ParamLimits

0x6f20,	// (0x000491b7) main_myfav_hc_pane_g1

0x6f3a,	// (0x000491d1) main_myfav_hc_pane_g2_ParamLimits

0x6f3a,	// (0x000491d1) main_myfav_hc_pane_g2

0x0002,

0xf7e7,	// (0x00051a7e) main_myfav_hc_pane_g_ParamLimits

0xf7e7,	// (0x00051a7e) main_myfav_hc_pane_g

0x6f6e,	// (0x00049205) main_myfav_hc_pane_t1_ParamLimits

0x6f6e,	// (0x00049205) main_myfav_hc_pane_t1

0x6f85,	// (0x0004921c) main_myfav_hc_pane_t2_ParamLimits

0x6f85,	// (0x0004921c) main_myfav_hc_pane_t2

0x6f97,	// (0x0004922e) main_myfav_hc_pane_t3_ParamLimits

0x6f97,	// (0x0004922e) main_myfav_hc_pane_t3

0x6fa9,	// (0x00049240) main_myfav_hc_pane_t4_ParamLimits

0x6fa9,	// (0x00049240) main_myfav_hc_pane_t4

0x0004,

0xf7ee,	// (0x00051a85) main_myfav_hc_pane_t_ParamLimits

0xf7ee,	// (0x00051a85) main_myfav_hc_pane_t

0xe896,	// (0x00050b2d) bg_myfav_hc_instruction_pane_g1

0x6fd3,	// (0x0004926a) cell_myfav_contact_pane_g1_ParamLimits

0x6fd3,	// (0x0004926a) cell_myfav_contact_pane_g1

0x6fd3,	// (0x0004926a) cell_myfav_contact_pane_g2_ParamLimits

0x6fd3,	// (0x0004926a) cell_myfav_contact_pane_g2

0x6fdf,	// (0x00049276) cell_myfav_contact_pane_g3_ParamLimits

0x6fdf,	// (0x00049276) cell_myfav_contact_pane_g3

0xeb2b,	// (0x00050dc2) cell_myfav_contact_pane_g4_ParamLimits

0xeb2b,	// (0x00050dc2) cell_myfav_contact_pane_g4

0x6fec,	// (0x00049283) cell_myfav_contact_pane_g5_ParamLimits

0x6fec,	// (0x00049283) cell_myfav_contact_pane_g5

0x0004,

0xf7f9,	// (0x00051a90) cell_myfav_contact_pane_g_ParamLimits

0xf7f9,	// (0x00051a90) cell_myfav_contact_pane_g

0x6f54,	// (0x000491eb) main_myfav_hc_pane_g3_ParamLimits

0x6f54,	// (0x000491eb) main_myfav_hc_pane_g3

0x16ad,	// (0x00043944) popup_adpt_find_window

0x6ff8,	// (0x0004928f) afind_page_pane_ParamLimits

0x6ff8,	// (0x0004928f) afind_page_pane

0x700d,	// (0x000492a4) aid_size_cell_afind_ParamLimits

0x700d,	// (0x000492a4) aid_size_cell_afind

0x702b,	// (0x000492c2) bg_popup_sub_pane_cp09_ParamLimits

0x702b,	// (0x000492c2) bg_popup_sub_pane_cp09

0x7038,	// (0x000492cf) find_pane_cp01_ParamLimits

0x7038,	// (0x000492cf) find_pane_cp01

0x7045,	// (0x000492dc) grid_afind_control_pane_ParamLimits

0x7045,	// (0x000492dc) grid_afind_control_pane

0x7059,	// (0x000492f0) grid_afind_pane_ParamLimits

0x7059,	// (0x000492f0) grid_afind_pane

0x707b,	// (0x00049312) cell_afind_pane_ParamLimits

0x707b,	// (0x00049312) cell_afind_pane

0xe896,	// (0x00050b2d) afind_page_pane_g1

0x70e2,	// (0x00049379) afind_page_pane_g2

0x70eb,	// (0x00049382) afind_page_pane_g3

0x0002,

0xf804,	// (0x00051a9b) afind_page_pane_g

0x70f4,	// (0x0004938b) afind_page_pane_t1

0x7114,	// (0x000493ab) cell_afind_grid_control_pane_ParamLimits

0x7114,	// (0x000493ab) cell_afind_grid_control_pane

0x63b2,	// (0x00048649) bg_button_pane_cp69_ParamLimits

0x63b2,	// (0x00048649) bg_button_pane_cp69

0x7123,	// (0x000493ba) cell_afind_pane_g1_ParamLimits

0x7123,	// (0x000493ba) cell_afind_pane_g1

0x7130,	// (0x000493c7) cell_afind_pane_t1_ParamLimits

0x7130,	// (0x000493c7) cell_afind_pane_t1

0xc791,	// (0x0004ea28) bg_button_pane_cp72

0x7142,	// (0x000493d9) cell_afind_grid_control_pane_g1

0x3ea9,	// (0x00046140) aid_image_placing_area_ParamLimits

0x3ea9,	// (0x00046140) aid_image_placing_area

0xee30,	// (0x000510c7) field_vitu_entry_pane_g1_ParamLimits

0xee30,	// (0x000510c7) field_vitu_entry_pane_g1

0xee3c,	// (0x000510d3) field_vitu_entry_pane_g2_ParamLimits

0xee3c,	// (0x000510d3) field_vitu_entry_pane_g2

0x0001,

0x03ab,	// (0x00042642) field_vitu_entry_pane_g_ParamLimits

0x03ab,	// (0x00042642) field_vitu_entry_pane_g

0x5fd1,	// (0x00048268) cell_vitu_itu_pane_g1_ParamLimits

0x6013,	// (0x000482aa) cell_vitu_itu_pane_t3_ParamLimits

0x6013,	// (0x000482aa) cell_vitu_itu_pane_t3

0x62b2,	// (0x00048549) mp4_progress_pane_t1_ParamLimits

0x62cb,	// (0x00048562) mp4_progress_pane_t2_ParamLimits

0xf74a,	// (0x000519e1) mp4_progress_pane_t_ParamLimits

0x62e4,	// (0x0004857b) mup_progress_pane_cp04_ParamLimits

0x6fbd,	// (0x00049254) main_myfav_hc_pane_t5_ParamLimits

0x6fbd,	// (0x00049254) main_myfav_hc_pane_t5

0xa65a,	// (0x0004c8f1) aid_zoom_text_primary

0x16ad,	// (0x00043944) popup_adpt_find_window_ParamLimits

0xa6ad,	// (0x0004c944) main_cam_set_pane

0x68cd,	// (0x00048b64) cam4_zoom_pane_ParamLimits

0x68cd,	// (0x00048b64) cam4_zoom_pane

0x714b,	// (0x000493e2) main_cam_set_pane_g1_ParamLimits

0x714b,	// (0x000493e2) main_cam_set_pane_g1

0x7159,	// (0x000493f0) main_cam_set_pane_g2_ParamLimits

0x7159,	// (0x000493f0) main_cam_set_pane_g2

0x0001,

0xf80b,	// (0x00051aa2) main_cam_set_pane_g_ParamLimits

0xf80b,	// (0x00051aa2) main_cam_set_pane_g

0x717c,	// (0x00049413) main_cam_set_pane_t1_ParamLimits

0x717c,	// (0x00049413) main_cam_set_pane_t1

0x7197,	// (0x0004942e) main_cset_listscroll_pane_ParamLimits

0x7197,	// (0x0004942e) main_cset_listscroll_pane

0x71bb,	// (0x00049452) main_cset_slider_pane_ParamLimits

0x71bb,	// (0x00049452) main_cset_slider_pane

0x71ed,	// (0x00049484) main_cset_list_pane_ParamLimits

0x71ed,	// (0x00049484) main_cset_list_pane

0x71fd,	// (0x00049494) scroll_pane_cp028

0x7206,	// (0x0004949d) aid_area_touch_slider

0x7222,	// (0x000494b9) cset_slider_pane

0x724c,	// (0x000494e3) main_cset_slider_pane_g1

0x7261,	// (0x000494f8) main_cset_slider_pane_g2

0x0011,

0xf810,	// (0x00051aa7) main_cset_slider_pane_g

0x7353,	// (0x000495ea) main_cset_slider_pane_t1

0x7381,	// (0x00049618) main_cset_slider_pane_t2

0x739b,	// (0x00049632) main_cset_slider_pane_t3

0x73b5,	// (0x0004964c) main_cset_slider_pane_t4

0x73cf,	// (0x00049666) main_cset_slider_pane_t5

0x73ed,	// (0x00049684) main_cset_slider_pane_t6

0x7404,	// (0x0004969b) main_cset_slider_pane_t7

0x000e,

0xf835,	// (0x00051acc) main_cset_slider_pane_t

0x7582,	// (0x00049819) cset_list_set_pane_ParamLimits

0x7582,	// (0x00049819) cset_list_set_pane

0x7596,	// (0x0004982d) aid_position_infowindow_above

0x759e,	// (0x00049835) aid_position_infowindow_below

0xaf47,	// (0x0004d1de) cset_list_set_pane_g1_ParamLimits

0xaf47,	// (0x0004d1de) cset_list_set_pane_g1

0x0d40,	// (0x00042fd7) cset_list_set_pane_g3_ParamLimits

0x0d40,	// (0x00042fd7) cset_list_set_pane_g3

0x0001,

0xf854,	// (0x00051aeb) cset_list_set_pane_g_ParamLimits

0xf854,	// (0x00051aeb) cset_list_set_pane_g

0xaf53,	// (0x0004d1ea) cset_list_set_pane_t1_ParamLimits

0xaf53,	// (0x0004d1ea) cset_list_set_pane_t1

0xa6ad,	// (0x0004c944) list_highlight_pane_cp021_ParamLimits

0xa6ad,	// (0x0004c944) list_highlight_pane_cp021

0xd11c,	// (0x0004f3b3) cset_slider_pane_g1

0xd12e,	// (0x0004f3c5) cset_slider_pane_g2

0xd125,	// (0x0004f3bc) cset_slider_pane_g3

0x0002,

0x054f,	// (0x000427e6) cset_slider_pane_g

0xaf68,	// (0x0004d1ff) aid_area_touch_cam4_zoom

0xaf70,	// (0x0004d207) cam4_zoom_cont_pane

0xaf78,	// (0x0004d20f) cam4_zoom_pane_g1

0xaf80,	// (0x0004d217) cam4_zoom_pane_g2

0x75a6,	// (0x0004983d) cam4_zoom_pane_g3

0x0002,

0xf859,	// (0x00051af0) cam4_zoom_pane_g

0x75ae,	// (0x00049845) cam4_zoom_cont_pane_g1

0x75b7,	// (0x0004984e) cam4_zoom_cont_pane_g2

0x75c0,	// (0x00049857) cam4_zoom_cont_pane_g3

0x0002,

0xf860,	// (0x00051af7) cam4_zoom_cont_pane_g

0x669b,	// (0x00048932) call4_image_pane_ParamLimits

0x669b,	// (0x00048932) call4_image_pane

0x66fd,	// (0x00048994) call4_windows_conf_pane_ParamLimits

0x6744,	// (0x000489db) popup_call4_audio_in_window_ParamLimits

0x6744,	// (0x000489db) popup_call4_audio_in_window

0xa634,	// (0x0004c8cb) bg_popup_call2_act_pane_cp02

0x683b,	// (0x00048ad2) call4_list_conf_pane

0xe896,	// (0x00050b2d) call4_image_pane_g1

0xe896,	// (0x00050b2d) call4_image_pane_g2

0x0001,

0x0271,	// (0x00042508) call4_image_pane_g

0x75c9,	// (0x00049860) list_single_graphic_popup_conf4_pane_ParamLimits

0x75c9,	// (0x00049860) list_single_graphic_popup_conf4_pane

0xa634,	// (0x0004c8cb) list_highlight_pane_cp022

0x75de,	// (0x00049875) list_single_graphic_popup_conf4_pane_g1

0xce16,	// (0x0004f0ad) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf867,	// (0x00051afe) list_single_graphic_popup_conf4_pane_g

0x75e6,	// (0x0004987d) list_single_graphic_popup_conf4_pane_t1

0x24df,	// (0x00044776) popup_vtel_slider_window_ParamLimits

0x24df,	// (0x00044776) popup_vtel_slider_window

0x637a,	// (0x00048611) dialer2_ne_pane_t2_ParamLimits

0x637a,	// (0x00048611) dialer2_ne_pane_t2

0x0001,

0xf74f,	// (0x000519e6) dialer2_ne_pane_t_ParamLimits

0xf74f,	// (0x000519e6) dialer2_ne_pane_t

0xe66d,	// (0x00050904) bg_popup_sub_pane_cp010_ParamLimits

0xe66d,	// (0x00050904) bg_popup_sub_pane_cp010

0x75fc,	// (0x00049893) popup_vtel_slider_window_g1_ParamLimits

0x75fc,	// (0x00049893) popup_vtel_slider_window_g1

0x760f,	// (0x000498a6) popup_vtel_slider_window_g2_ParamLimits

0x760f,	// (0x000498a6) popup_vtel_slider_window_g2

0x0003,

0xf86c,	// (0x00051b03) popup_vtel_slider_window_g_ParamLimits

0xf86c,	// (0x00051b03) popup_vtel_slider_window_g

0x7665,	// (0x000498fc) vtel_slider_pane_ParamLimits

0x7665,	// (0x000498fc) vtel_slider_pane

0x7687,	// (0x0004991e) vtel_slider_pane_g1_ParamLimits

0x7687,	// (0x0004991e) vtel_slider_pane_g1

0x769b,	// (0x00049932) vtel_slider_pane_g2_ParamLimits

0x769b,	// (0x00049932) vtel_slider_pane_g2

0x76b3,	// (0x0004994a) vtel_slider_pane_g3_ParamLimits

0x76b3,	// (0x0004994a) vtel_slider_pane_g3

0x7687,	// (0x0004991e) vtel_slider_pane_g4_ParamLimits

0x7687,	// (0x0004991e) vtel_slider_pane_g4

0x76c9,	// (0x00049960) vtel_slider_pane_g5_ParamLimits

0x76c9,	// (0x00049960) vtel_slider_pane_g5

0x0004,

0xf875,	// (0x00051b0c) vtel_slider_pane_g_ParamLimits

0xf875,	// (0x00051b0c) vtel_slider_pane_g

0xa634,	// (0x0004c8cb) main_gallery2_pane

0x6b15,	// (0x00048dac) aid_size_row_itut2_dropdow_list_ParamLimits

0x6b15,	// (0x00048dac) aid_size_row_itut2_dropdow_list

0x6ba5,	// (0x00048e3c) grid_vitu2_function_top_pane_ParamLimits

0x6ba5,	// (0x00048e3c) grid_vitu2_function_top_pane

0x6c04,	// (0x00048e9b) popup_vitu2_dropdown_list_window_ParamLimits

0x6c04,	// (0x00048e9b) popup_vitu2_dropdown_list_window

0x6c2d,	// (0x00048ec4) popup_vitu2_match_list_window

0x76df,	// (0x00049976) cell_vitu2_function_top_pane_ParamLimits

0x76df,	// (0x00049976) cell_vitu2_function_top_pane

0x76ff,	// (0x00049996) cell_vitu2_function_top_pane_cp01_ParamLimits

0x76ff,	// (0x00049996) cell_vitu2_function_top_pane_cp01

0x771d,	// (0x000499b4) cell_vitu2_function_top_wide_pane_ParamLimits

0x771d,	// (0x000499b4) cell_vitu2_function_top_wide_pane

0xa6ad,	// (0x0004c944) bg_button_pane_cp012

0x773b,	// (0x000499d2) cell_vitu2_function_top_pane_g1

0xaf96,	// (0x0004d22d) bg_button_pane_cp013_ParamLimits

0xaf96,	// (0x0004d22d) bg_button_pane_cp013

0x774f,	// (0x000499e6) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x774f,	// (0x000499e6) cell_vitu2_function_top_wide_pane_g1

0xa6ad,	// (0x0004c944) bg_popup_sub_pane_cp20

0x7767,	// (0x000499fe) list_vitu2_match_list_pane

0x6dba,	// (0x00049051) bg_popup_sub_pane_cp20_g1

0x6dc2,	// (0x00049059) bg_popup_sub_pane_cp20_g2

0xc99a,	// (0x0004ec31) bg_popup_sub_pane_cp20_g3

0x6dca,	// (0x00049061) bg_popup_sub_pane_cp20_g4

0xc97a,	// (0x0004ec11) bg_popup_sub_pane_cp20_g5

0x7785,	// (0x00049a1c) bg_popup_sub_pane_cp20_g6

0x6dda,	// (0x00049071) bg_popup_sub_pane_cp20_g7

0x6de2,	// (0x00049079) bg_popup_sub_pane_cp20_g8

0x6dea,	// (0x00049081) bg_popup_sub_pane_cp20_g9

0x0008,

0xf880,	// (0x00051b17) bg_popup_sub_pane_cp20_g

0xafb2,	// (0x0004d249) list_vitu2_match_list_item_pane_ParamLimits

0xafb2,	// (0x0004d249) list_vitu2_match_list_item_pane

0xafc4,	// (0x0004d25b) list_vitu2_match_list_item_pane_t1

0xa634,	// (0x0004c8cb) bg_popup_sub_pane_cp21

0xcd31,	// (0x0004efc8) grid_vitu2_dropdown_list_pane

0x778d,	// (0x00049a24) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x778d,	// (0x00049a24) cell_vitu2_dropdown_list_char_pane

0x77b0,	// (0x00049a47) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x77b0,	// (0x00049a47) cell_vitu2_dropdown_list_ctrl_pane

0x77de,	// (0x00049a75) cell_vitu2_dropdown_list_char_pane_g1

0x77e7,	// (0x00049a7e) cell_vitu2_dropdown_list_char_pane_g2

0x77f0,	// (0x00049a87) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf89d,	// (0x00051b34) cell_vitu2_dropdown_list_char_pane_g

0x77f9,	// (0x00049a90) cell_vitu2_dropdown_list_char_pane_t1

0x7807,	// (0x00049a9e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7807,	// (0x00049a9e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7817,	// (0x00049aae) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7817,	// (0x00049aae) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7828,	// (0x00049abf) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7828,	// (0x00049abf) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7838,	// (0x00049acf) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7838,	// (0x00049acf) cell_vitu2_dropdown_list_ctrl_pane_g4

0xeac6,	// (0x00050d5d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xeac6,	// (0x00050d5d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8a4,	// (0x00051b3b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8a4,	// (0x00051b3b) cell_vitu2_dropdown_list_ctrl_pane_g

0x7854,	// (0x00049aeb) aid_size_cell_gallery2_ParamLimits

0x7854,	// (0x00049aeb) aid_size_cell_gallery2

0x786a,	// (0x00049b01) grid_gallery2_pane_ParamLimits

0x786a,	// (0x00049b01) grid_gallery2_pane

0x787e,	// (0x00049b15) scroll_pane_cp029_ParamLimits

0x787e,	// (0x00049b15) scroll_pane_cp029

0x788a,	// (0x00049b21) cell_gallery2_pane_ParamLimits

0x788a,	// (0x00049b21) cell_gallery2_pane

0x78c4,	// (0x00049b5b) cell_gallery2_pane_g2

0x78ce,	// (0x00049b65) cell_gallery2_pane_g3

0x78d6,	// (0x00049b6d) cell_gallery2_pane_g4

0x78de,	// (0x00049b75) cell_gallery2_pane_g5

0xcfe4,	// (0x0004f27b) grid_highlight_pane_cp10

0x6c2d,	// (0x00048ec4) popup_vitu2_match_list_window_ParamLimits

0x6c44,	// (0x00048edb) popup_vitu2_query_window_ParamLimits

0x6c44,	// (0x00048edb) popup_vitu2_query_window

0xa634,	// (0x0004c8cb) bg_vitu2_candi_button_pane

0x77de,	// (0x00049a75) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x77e7,	// (0x00049a7e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x77f0,	// (0x00049a87) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0d81,	// (0x00043018) bg_button_pane_cp015

0x78e6,	// (0x00049b7d) bg_button_pane_cp016

0x78f9,	// (0x00049b90) bg_button_pane_cp017

0xe413,	// (0x000506aa) bg_popup_sub_pane_cp22

0x791d,	// (0x00049bb4) popup_vitu2_query_window_g1

0x0db6,	// (0x0004304d) popup_vitu2_query_window_g2

0x0002,

0xf8af,	// (0x00051b46) popup_vitu2_query_window_g

0x0dd5,	// (0x0004306c) popup_vitu2_query_window_t1_ParamLimits

0x0dd5,	// (0x0004306c) popup_vitu2_query_window_t1

0x0e0a,	// (0x000430a1) popup_vitu2_query_window_t2_ParamLimits

0x0e0a,	// (0x000430a1) popup_vitu2_query_window_t2

0x0e1c,	// (0x000430b3) popup_vitu2_query_window_t3_ParamLimits

0x0e1c,	// (0x000430b3) popup_vitu2_query_window_t3

0x7929,	// (0x00049bc0) popup_vitu2_query_window_t4_ParamLimits

0x7929,	// (0x00049bc0) popup_vitu2_query_window_t4

0x794a,	// (0x00049be1) popup_vitu2_query_window_t5_ParamLimits

0x794a,	// (0x00049be1) popup_vitu2_query_window_t5

0x0006,

0xf8b6,	// (0x00051b4d) popup_vitu2_query_window_t_ParamLimits

0xf8b6,	// (0x00051b4d) popup_vitu2_query_window_t

0x71e5,	// (0x0004947c) main_cset_text_pane

0x7206,	// (0x0004949d) aid_area_touch_slider_ParamLimits

0x7222,	// (0x000494b9) cset_slider_pane_ParamLimits

0x724c,	// (0x000494e3) main_cset_slider_pane_g1_ParamLimits

0x7261,	// (0x000494f8) main_cset_slider_pane_g2_ParamLimits

0x7276,	// (0x0004950d) main_cset_slider_pane_g3_ParamLimits

0x7276,	// (0x0004950d) main_cset_slider_pane_g3

0x7282,	// (0x00049519) main_cset_slider_pane_g4_ParamLimits

0x7282,	// (0x00049519) main_cset_slider_pane_g4

0x7291,	// (0x00049528) main_cset_slider_pane_g5_ParamLimits

0x7291,	// (0x00049528) main_cset_slider_pane_g5

0x729f,	// (0x00049536) main_cset_slider_pane_g6_ParamLimits

0x729f,	// (0x00049536) main_cset_slider_pane_g6

0xf810,	// (0x00051aa7) main_cset_slider_pane_g_ParamLimits

0x7353,	// (0x000495ea) main_cset_slider_pane_t1_ParamLimits

0x7381,	// (0x00049618) main_cset_slider_pane_t2_ParamLimits

0x739b,	// (0x00049632) main_cset_slider_pane_t3_ParamLimits

0x73b5,	// (0x0004964c) main_cset_slider_pane_t4_ParamLimits

0x73cf,	// (0x00049666) main_cset_slider_pane_t5_ParamLimits

0x73ed,	// (0x00049684) main_cset_slider_pane_t6_ParamLimits

0x7404,	// (0x0004969b) main_cset_slider_pane_t7_ParamLimits

0x7432,	// (0x000496c9) main_cset_slider_pane_t8_ParamLimits

0x7432,	// (0x000496c9) main_cset_slider_pane_t8

0x745a,	// (0x000496f1) main_cset_slider_pane_t9_ParamLimits

0x745a,	// (0x000496f1) main_cset_slider_pane_t9

0x7482,	// (0x00049719) main_cset_slider_pane_t10_ParamLimits

0x7482,	// (0x00049719) main_cset_slider_pane_t10

0x74aa,	// (0x00049741) main_cset_slider_pane_t11_ParamLimits

0x74aa,	// (0x00049741) main_cset_slider_pane_t11

0x74d4,	// (0x0004976b) main_cset_slider_pane_t12_ParamLimits

0x74d4,	// (0x0004976b) main_cset_slider_pane_t12

0x74f1,	// (0x00049788) main_cset_slider_pane_t13_ParamLimits

0x74f1,	// (0x00049788) main_cset_slider_pane_t13

0xf835,	// (0x00051acc) main_cset_slider_pane_t_ParamLimits

0xa634,	// (0x0004c8cb) bg_popup_sub_pane_cp011

0x796b,	// (0x00049c02) main_cset_text_pane_g1

0x7973,	// (0x00049c0a) main_cset_text_pane_t1

0x7981,	// (0x00049c18) main_cset_text_pane_t2

0x798f,	// (0x00049c26) main_cset_text_pane_t3

0x799d,	// (0x00049c34) main_cset_text_pane_t4

0x79ab,	// (0x00049c42) main_cset_text_pane_t5

0x79b9,	// (0x00049c50) main_cset_text_pane_t6

0x79c7,	// (0x00049c5e) main_cset_text_pane_t7

0x0006,

0xf8c5,	// (0x00051b5c) main_cset_text_pane_t

0xa634,	// (0x0004c8cb) main_cam4_burst_pane

0xa634,	// (0x0004c8cb) main_cam5_pane

0x7102,	// (0x00049399) bg_button_pane_cp019

0x710b,	// (0x000493a2) bg_button_pane_cp020

0x72b3,	// (0x0004954a) main_cset_slider_pane_g7_ParamLimits

0x72b3,	// (0x0004954a) main_cset_slider_pane_g7

0x72bf,	// (0x00049556) main_cset_slider_pane_g8_ParamLimits

0x72bf,	// (0x00049556) main_cset_slider_pane_g8

0x72cb,	// (0x00049562) main_cset_slider_pane_g9_ParamLimits

0x72cb,	// (0x00049562) main_cset_slider_pane_g9

0x72d7,	// (0x0004956e) main_cset_slider_pane_g10_ParamLimits

0x72d7,	// (0x0004956e) main_cset_slider_pane_g10

0x72e3,	// (0x0004957a) main_cset_slider_pane_g11_ParamLimits

0x72e3,	// (0x0004957a) main_cset_slider_pane_g11

0x72ef,	// (0x00049586) main_cset_slider_pane_g12_ParamLimits

0x72ef,	// (0x00049586) main_cset_slider_pane_g12

0x72fb,	// (0x00049592) main_cset_slider_pane_g13_ParamLimits

0x72fb,	// (0x00049592) main_cset_slider_pane_g13

0x7307,	// (0x0004959e) main_cset_slider_pane_g14_ParamLimits

0x7307,	// (0x0004959e) main_cset_slider_pane_g14

0x7313,	// (0x000495aa) main_cset_slider_pane_g15_ParamLimits

0x7313,	// (0x000495aa) main_cset_slider_pane_g15

0x7510,	// (0x000497a7) main_cset_slider_pane_t14_ParamLimits

0x7510,	// (0x000497a7) main_cset_slider_pane_t14

0x7549,	// (0x000497e0) main_cset_slider_pane_t15_ParamLimits

0x7549,	// (0x000497e0) main_cset_slider_pane_t15

0x79d5,	// (0x00049c6c) aid_cam4_burst_size_cell_ParamLimits

0x79d5,	// (0x00049c6c) aid_cam4_burst_size_cell

0x79f5,	// (0x00049c8c) grid_cam4_burst_pane_ParamLimits

0x79f5,	// (0x00049c8c) grid_cam4_burst_pane

0x7a2f,	// (0x00049cc6) linegrid_cam4_burst_pane_ParamLimits

0x7a2f,	// (0x00049cc6) linegrid_cam4_burst_pane

0x7a53,	// (0x00049cea) scroll_pane_cp30_ParamLimits

0x7a53,	// (0x00049cea) scroll_pane_cp30

0x7a5f,	// (0x00049cf6) cell_cam4_burst_pane_ParamLimits

0x7a5f,	// (0x00049cf6) cell_cam4_burst_pane

0x7ab4,	// (0x00049d4b) linegrid_cam4_burst_pane_g1_ParamLimits

0x7ab4,	// (0x00049d4b) linegrid_cam4_burst_pane_g1

0x7ac1,	// (0x00049d58) linegrid_cam4_burst_pane_g2_ParamLimits

0x7ac1,	// (0x00049d58) linegrid_cam4_burst_pane_g2

0x7ad2,	// (0x00049d69) linegrid_cam4_burst_pane_g3_ParamLimits

0x7ad2,	// (0x00049d69) linegrid_cam4_burst_pane_g3

0x0002,

0xf8d4,	// (0x00051b6b) linegrid_cam4_burst_pane_g_ParamLimits

0xf8d4,	// (0x00051b6b) linegrid_cam4_burst_pane_g

0x7adf,	// (0x00049d76) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7adf,	// (0x00049d76) linegrid_cam4_burst_pane_g3_copy1

0x7afd,	// (0x00049d94) linegrid_cam4_burst_pane_g4_ParamLimits

0x7afd,	// (0x00049d94) linegrid_cam4_burst_pane_g4

0x7b0a,	// (0x00049da1) linegrid_cam4_burst_pane_g5_ParamLimits

0x7b0a,	// (0x00049da1) linegrid_cam4_burst_pane_g5

0x7b1b,	// (0x00049db2) linegrid_cam4_burst_pane_g6_ParamLimits

0x7b1b,	// (0x00049db2) linegrid_cam4_burst_pane_g6

0x7b32,	// (0x00049dc9) linegrid_cam4_burst_pane_g7_ParamLimits

0x7b32,	// (0x00049dc9) linegrid_cam4_burst_pane_g7

0x7b3f,	// (0x00049dd6) cell_cam4_burst_pane_g1

0x7b5e,	// (0x00049df5) main_cam5_pane_t1_ParamLimits

0x7b5e,	// (0x00049df5) main_cam5_pane_t1

0x7b70,	// (0x00049e07) main_cam5_pane_t2_ParamLimits

0x7b70,	// (0x00049e07) main_cam5_pane_t2

0x7b82,	// (0x00049e19) main_cam5_pane_t3_ParamLimits

0x7b82,	// (0x00049e19) main_cam5_pane_t3

0x7b94,	// (0x00049e2b) main_cam5_pane_t4_ParamLimits

0x7b94,	// (0x00049e2b) main_cam5_pane_t4

0x7bac,	// (0x00049e43) main_cam5_pane_t5_ParamLimits

0x7bac,	// (0x00049e43) main_cam5_pane_t5

0x7bc0,	// (0x00049e57) main_cam5_pane_t6_ParamLimits

0x7bc0,	// (0x00049e57) main_cam5_pane_t6

0x7bd4,	// (0x00049e6b) main_cam5_pane_t7_ParamLimits

0x7bd4,	// (0x00049e6b) main_cam5_pane_t7

0x7be6,	// (0x00049e7d) main_cam5_pane_t8_ParamLimits

0x7be6,	// (0x00049e7d) main_cam5_pane_t8

0x7c04,	// (0x00049e9b) main_cam5_pane_t9_ParamLimits

0x7c04,	// (0x00049e9b) main_cam5_pane_t9

0x7c16,	// (0x00049ead) main_cam5_pane_t10_ParamLimits

0x7c16,	// (0x00049ead) main_cam5_pane_t10

0x7c28,	// (0x00049ebf) main_cam5_pane_t11_ParamLimits

0x7c28,	// (0x00049ebf) main_cam5_pane_t11

0x7c3c,	// (0x00049ed3) main_cam5_pane_t12_ParamLimits

0x7c3c,	// (0x00049ed3) main_cam5_pane_t12

0x7c53,	// (0x00049eea) main_cam5_pane_t13_ParamLimits

0x7c53,	// (0x00049eea) main_cam5_pane_t13

0x000c,

0xf8e0,	// (0x00051b77) main_cam5_pane_t_ParamLimits

0xf8e0,	// (0x00051b77) main_cam5_pane_t

0x1731,	// (0x000439c8) popup_scut_keymap_window_ParamLimits

0x1731,	// (0x000439c8) popup_scut_keymap_window

0x7c76,	// (0x00049f0d) aid_size_cell_brow_shortcut

0xcfe4,	// (0x0004f27b) bg_popup_window_pane_cp010

0x7c82,	// (0x00049f19) grid_scut_pane

0x7c8e,	// (0x00049f25) cell_scut_pane_ParamLimits

0x7c8e,	// (0x00049f25) cell_scut_pane

0x7ca7,	// (0x00049f3e) cell_scut_pane_g1

0x7cb0,	// (0x00049f47) cell_scut_pane_t1

0x7cbf,	// (0x00049f56) cell_scut_pane_t2

0x7cce,	// (0x00049f65) cell_scut_pane_t3

0x0002,

0xf8fb,	// (0x00051b92) cell_scut_pane_t

0x54e3,	// (0x0004777a) main_mup3_pane_g8_ParamLimits

0x54e3,	// (0x0004777a) main_mup3_pane_g8

0x6b2f,	// (0x00048dc6) area_vitu2_query_pane_ParamLimits

0x6b2f,	// (0x00048dc6) area_vitu2_query_pane

0x0d95,	// (0x0004302c) input_focus_pane_cp08

0x7cdc,	// (0x00049f73) area_vitu2_query_pane_g1

0x0e9a,	// (0x00043131) area_vitu2_query_pane_g2

0x0001,

0xf902,	// (0x00051b99) area_vitu2_query_pane_g

0x7ce8,	// (0x00049f7f) area_vitu2_query_pane_t1_ParamLimits

0x7ce8,	// (0x00049f7f) area_vitu2_query_pane_t1

0x7cfc,	// (0x00049f93) area_vitu2_query_pane_t2_ParamLimits

0x7cfc,	// (0x00049f93) area_vitu2_query_pane_t2

0x0eab,	// (0x00043142) area_vitu2_query_pane_t3_ParamLimits

0x0eab,	// (0x00043142) area_vitu2_query_pane_t3

0xafea,	// (0x0004d281) area_vitu2_query_pane_t4_ParamLimits

0xafea,	// (0x0004d281) area_vitu2_query_pane_t4

0xb012,	// (0x0004d2a9) area_vitu2_query_pane_t5_ParamLimits

0xb012,	// (0x0004d2a9) area_vitu2_query_pane_t5

0xb03a,	// (0x0004d2d1) area_vitu2_query_pane_t6_ParamLimits

0xb03a,	// (0x0004d2d1) area_vitu2_query_pane_t6

0x0006,

0xf907,	// (0x00051b9e) area_vitu2_query_pane_t_ParamLimits

0xf907,	// (0x00051b9e) area_vitu2_query_pane_t

0x7d10,	// (0x00049fa7) bg_button_pane_cp018

0x7d1e,	// (0x00049fb5) bg_button_pane_cp021

0x0ed3,	// (0x0004316a) bg_button_pane_cp022

0x0ee4,	// (0x0004317b) input_focus_pane_cp09

0x34a6,	// (0x0004573d) aid_size_touch_mv_arrow_left

0x34cf,	// (0x00045766) aid_size_touch_mv_arrow_right

0x732b,	// (0x000495c2) main_cset_slider_pane_g16_ParamLimits

0x732b,	// (0x000495c2) main_cset_slider_pane_g16

0x7339,	// (0x000495d0) main_cset_slider_pane_g17_ParamLimits

0x7339,	// (0x000495d0) main_cset_slider_pane_g17

0x7b3f,	// (0x00049dd6) cell_cam4_burst_pane_g1_ParamLimits

0xa634,	// (0x0004c8cb) compa_mode_pane

0x761f,	// (0x000498b6) popup_vtel_slider_window_g3_ParamLimits

0x761f,	// (0x000498b6) popup_vtel_slider_window_g3

0x7636,	// (0x000498cd) popup_vtel_slider_window_g4_ParamLimits

0x7636,	// (0x000498cd) popup_vtel_slider_window_g4

0x764d,	// (0x000498e4) popup_vtel_slider_window_t1_ParamLimits

0x764d,	// (0x000498e4) popup_vtel_slider_window_t1

0xa634,	// (0x0004c8cb) main_cl_pane

0xe43f,	// (0x000506d6) popup_imed_adjust2_window_ParamLimits

0xe413,	// (0x000506aa) bg_tb_trans_pane_cp05_ParamLimits

0xed65,	// (0x00050ffc) popup_imed_adjust2_window_g1_ParamLimits

0xed74,	// (0x0005100b) popup_imed_adjust2_window_g2_ParamLimits

0xed74,	// (0x0005100b) popup_imed_adjust2_window_g2

0xed80,	// (0x00051017) popup_imed_adjust2_window_g3_ParamLimits

0xed80,	// (0x00051017) popup_imed_adjust2_window_g3

0x0002,

0x036f,	// (0x00042606) popup_imed_adjust2_window_g_ParamLimits

0x036f,	// (0x00042606) popup_imed_adjust2_window_g

0xed8c,	// (0x00051023) popup_imed_adjust2_window_t1_ParamLimits

0xeda4,	// (0x0005103b) slider_imed_adjust_pane_ParamLimits

0xedb8,	// (0x0005104f) slider_imed_adjust_pane_g1_ParamLimits

0xedc8,	// (0x0005105f) slider_imed_adjust_pane_g2_ParamLimits

0xedd8,	// (0x0005106f) slider_imed_adjust_pane_g3_ParamLimits

0xede9,	// (0x00051080) slider_imed_adjust_pane_g4_ParamLimits

0x0376,	// (0x0004260d) slider_imed_adjust_pane_g_ParamLimits

0x686d,	// (0x00048b04) aid_touch_area_cam4_ParamLimits

0x686d,	// (0x00048b04) aid_touch_area_cam4

0xae7e,	// (0x0004d115) battery_pane_cp01

0x6918,	// (0x00048baf) main_camera4_pane_g6_ParamLimits

0x6918,	// (0x00048baf) main_camera4_pane_g6

0x693b,	// (0x00048bd2) main_camera4_pane_t2_ParamLimits

0x693b,	// (0x00048bd2) main_camera4_pane_t2

0x0001,

0xf783,	// (0x00051a1a) main_camera4_pane_t_ParamLimits

0xf783,	// (0x00051a1a) main_camera4_pane_t

0x6984,	// (0x00048c1b) aid_touch_area_vid4_ParamLimits

0x6984,	// (0x00048c1b) aid_touch_area_vid4

0x69e2,	// (0x00048c79) main_video4_pane_g5_ParamLimits

0x69e2,	// (0x00048c79) main_video4_pane_g5

0x6a09,	// (0x00048ca0) vid4_progress_pane_ParamLimits

0x6a09,	// (0x00048ca0) vid4_progress_pane

0x7347,	// (0x000495de) main_cset_slider_pane_g18_ParamLimits

0x7347,	// (0x000495de) main_cset_slider_pane_g18

0x7b52,	// (0x00049de9) cell_cam4_burst_pane_g2_ParamLimits

0x7b52,	// (0x00049de9) cell_cam4_burst_pane_g2

0x0001,

0xf8db,	// (0x00051b72) cell_cam4_burst_pane_g_ParamLimits

0xf8db,	// (0x00051b72) cell_cam4_burst_pane_g

0xc590,	// (0x0004e827) bg_cl_pane_ParamLimits

0xc590,	// (0x0004e827) bg_cl_pane

0x7d2a,	// (0x00049fc1) cl_header_pane_ParamLimits

0x7d2a,	// (0x00049fc1) cl_header_pane

0x7d3e,	// (0x00049fd5) cl_listscroll_pane_ParamLimits

0x7d3e,	// (0x00049fd5) cl_listscroll_pane

0x7d4e,	// (0x00049fe5) bg_cl_pane_g1

0x7d56,	// (0x00049fed) bg_cl_pane_g2

0x7d5e,	// (0x00049ff5) bg_cl_pane_g3

0x7d66,	// (0x00049ffd) bg_cl_pane_g4

0x7d6e,	// (0x0004a005) bg_cl_pane_g5

0x7d76,	// (0x0004a00d) bg_cl_pane_g6

0x7d7e,	// (0x0004a015) bg_cl_pane_g7

0x7d86,	// (0x0004a01d) bg_cl_pane_g8

0x7d8e,	// (0x0004a025) bg_cl_pane_g9

0x0008,

0xf916,	// (0x00051bad) bg_cl_pane_g

0x7d96,	// (0x0004a02d) aid_height_cl_leading_ParamLimits

0x7d96,	// (0x0004a02d) aid_height_cl_leading

0x7da2,	// (0x0004a039) aid_height_cl_text_ParamLimits

0x7da2,	// (0x0004a039) aid_height_cl_text

0xa6ad,	// (0x0004c944) bg_cl_header_pane_ParamLimits

0xa6ad,	// (0x0004c944) bg_cl_header_pane

0x7dc1,	// (0x0004a058) cl_header_pane_g1_ParamLimits

0x7dc1,	// (0x0004a058) cl_header_pane_g1

0x7dd7,	// (0x0004a06e) cl_header_pane_t1_ParamLimits

0x7dd7,	// (0x0004a06e) cl_header_pane_t1

0x7df0,	// (0x0004a087) cl_list_pane

0x71fd,	// (0x00049494) hc_scroll_pane_cp01

0xc97a,	// (0x0004ec11) bg_cl_header_pane_g1

0x6dba,	// (0x00049051) bg_cl_header_pane_g2

0xc99a,	// (0x0004ec31) bg_cl_header_pane_g3

0x6dca,	// (0x00049061) bg_cl_header_pane_g4

0x6dc2,	// (0x00049059) bg_cl_header_pane_g5

0x7785,	// (0x00049a1c) bg_cl_header_pane_g6

0x6de2,	// (0x00049079) bg_cl_header_pane_g7

0x6dea,	// (0x00049081) bg_cl_header_pane_g8

0x6dda,	// (0x00049071) bg_cl_header_pane_g9

0x0008,

0xf929,	// (0x00051bc0) bg_cl_header_pane_g

0x7df9,	// (0x0004a090) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7df9,	// (0x0004a090) hc_cl_list_double_graphic_heading_pane

0x7e0c,	// (0x0004a0a3) hc_cl_list_single_graphic_pane_ParamLimits

0x7e0c,	// (0x0004a0a3) hc_cl_list_single_graphic_pane

0x7e24,	// (0x0004a0bb) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7e24,	// (0x0004a0bb) hc_cl_list_single_graphic_pane_g1

0x7e30,	// (0x0004a0c7) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7e30,	// (0x0004a0c7) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf93c,	// (0x00051bd3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf93c,	// (0x00051bd3) hc_cl_list_single_graphic_pane_g

0x7e44,	// (0x0004a0db) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7e44,	// (0x0004a0db) hc_cl_list_single_graphic_pane_t1

0x7e24,	// (0x0004a0bb) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7e24,	// (0x0004a0bb) hc_cl_list_double_graphic_heading_pane_g1

0x7e59,	// (0x0004a0f0) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7e59,	// (0x0004a0f0) hc_cl_list_double_graphic_heading_pane_g2

0x7e6d,	// (0x0004a104) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7e6d,	// (0x0004a104) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf941,	// (0x00051bd8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf941,	// (0x00051bd8) hc_cl_list_double_graphic_heading_pane_g

0x7e81,	// (0x0004a118) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7e81,	// (0x0004a118) hc_cl_list_double_graphic_heading_pane_t1

0x7e96,	// (0x0004a12d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7e96,	// (0x0004a12d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf948,	// (0x00051bdf) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf948,	// (0x00051bdf) hc_cl_list_double_graphic_heading_pane_t

0xb08e,	// (0x0004d325) vid4_progress_pane_g1

0xb09a,	// (0x0004d331) vid4_progress_pane_g2

0xb0a6,	// (0x0004d33d) vid4_progress_pane_g3

0xb0b5,	// (0x0004d34c) vid4_progress_pane_g4

0x0004,

0xf94d,	// (0x00051be4) vid4_progress_pane_g

0xb0d3,	// (0x0004d36a) vid4_progress_pane_t1

0xb0e9,	// (0x0004d380) vid4_progress_pane_t2

0x0002,

0xf958,	// (0x00051bef) vid4_progress_pane_t

0xb114,	// (0x0004d3ab) wait_bar_pane_cp07

0xe67b,	// (0x00050912) blid_firmament_pane_ParamLimits

0xe6be,	// (0x00050955) popup_blid_sat_info2_window_g1

0xe6e2,	// (0x00050979) popup_blid_sat_info2_window_t3

0xe6f0,	// (0x00050987) popup_blid_sat_info2_window_t4

0xe6fe,	// (0x00050995) popup_blid_sat_info2_window_t5

0xe70c,	// (0x000509a3) popup_blid_sat_info2_window_t6

0xe71c,	// (0x000509b3) popup_blid_sat_info2_window_t7

0xe72a,	// (0x000509c1) popup_blid_sat_info2_window_t8

0xe738,	// (0x000509cf) popup_blid_sat_info2_window_t9

0xe746,	// (0x000509dd) popup_blid_sat_info2_window_t10

0xe80e,	// (0x00050aa5) aid_firma_cardinal_ParamLimits

0xe822,	// (0x00050ab9) blid_firmament_pane_t1_ParamLimits

0xe839,	// (0x00050ad0) blid_firmament_pane_t2_ParamLimits

0xe850,	// (0x00050ae7) blid_firmament_pane_t3_ParamLimits

0xe867,	// (0x00050afe) blid_firmament_pane_t4_ParamLimits

0xf61d,	// (0x000518b4) blid_firmament_pane_t_ParamLimits

0xe87e,	// (0x00050b15) blid_sat_info_pane_ParamLimits

0xa6ad,	// (0x0004c944) main_cam_set_pane_ParamLimits

0x5d7d,	// (0x00048014) aid_size_cell_colour_35_ParamLimits

0x5d9d,	// (0x00048034) aid_size_cell_colour_112_ParamLimits

0x5dbd,	// (0x00048054) aid_size_cell_effect_ParamLimits

0xe413,	// (0x000506aa) bg_tb_trans_pane_cp02_ParamLimits

0xcb42,	// (0x0004edd9) heading_imed_pane_ParamLimits

0x5ddd,	// (0x00048074) listscroll_imed_pane_ParamLimits

0xda41,	// (0x0004fcd8) popup_call2_audio_first_window_g5_ParamLimits

0xda41,	// (0x0004fcd8) popup_call2_audio_first_window_g5

0x6426,	// (0x000486bd) aid_size_touch_image3_arrow_left_ParamLimits

0x6426,	// (0x000486bd) aid_size_touch_image3_arrow_left

0x6452,	// (0x000486e9) aid_size_touch_image3_arrow_right_ParamLimits

0x6452,	// (0x000486e9) aid_size_touch_image3_arrow_right

0xb0ff,	// (0x0004d396) vid4_progress_pane_t3

0x60fa,	// (0x00048391) main_hwr_training_symbol_option_pane_ParamLimits

0x60fa,	// (0x00048391) main_hwr_training_symbol_option_pane

0xf054,	// (0x000512eb) popup_hwr_training_preview_window_ParamLimits

0xf054,	// (0x000512eb) popup_hwr_training_preview_window

0x611a,	// (0x000483b1) hwr_training_navi_pane_g5_ParamLimits

0x611a,	// (0x000483b1) hwr_training_navi_pane_g5

0x6d02,	// (0x00048f99) popup_char_count_window

0xa6ad,	// (0x0004c944) bg_popup_sub_pane_cp20_ParamLimits

0x7767,	// (0x000499fe) list_vitu2_match_list_pane_ParamLimits

0x7776,	// (0x00049a0d) vitu2_page_scroll_pane_ParamLimits

0x7776,	// (0x00049a0d) vitu2_page_scroll_pane

0x7eb5,	// (0x0004a14c) list_single_hwr_training_symbol_option_pane_ParamLimits

0x7eb5,	// (0x0004a14c) list_single_hwr_training_symbol_option_pane

0x7ec8,	// (0x0004a15f) list_single_hwr_training_symbol_option_pane_g1

0x7ed0,	// (0x0004a167) list_single_hwr_training_symbol_option_pane_t1

0x7ede,	// (0x0004a175) bg_button_pane_cp023

0x7ee7,	// (0x0004a17e) bg_button_pane_cp024

0x7f1a,	// (0x0004a1b1) vitu2_page_scroll_pane_g1

0x7f22,	// (0x0004a1b9) vitu2_page_scroll_pane_g2

0x0001,

0xf95f,	// (0x00051bf6) vitu2_page_scroll_pane_g

0x7f2c,	// (0x0004a1c3) vitu2_page_scroll_pane_t1

0xe5db,	// (0x00050872) popup_char_count_window_g1

0x7f3b,	// (0x0004a1d2) popup_char_count_window_g2

0x7f44,	// (0x0004a1db) popup_char_count_window_g3

0x0002,

0xf964,	// (0x00051bfb) popup_char_count_window_g

0x7f4d,	// (0x0004a1e4) popup_char_count_window_t1

0xa634,	// (0x0004c8cb) main_vded2_pane

0xed51,	// (0x00050fe8) aid_size_cell_imed_line

0xed5b,	// (0x00050ff2) grid_imed_line_width_pane

0x6a79,	// (0x00048d10) vid4_indicators_pane_g4

0x7f5b,	// (0x0004a1f2) cell_imed_line_width_pane_ParamLimits

0x7f5b,	// (0x0004a1f2) cell_imed_line_width_pane

0x7f71,	// (0x0004a208) cell_imed_line_width_pane_g1

0xe88e,	// (0x00050b25) cell_imed_line_width_pane_g2

0x0001,

0xf96b,	// (0x00051c02) cell_imed_line_width_pane_g

0x7f7a,	// (0x0004a211) main_vded2_pane_g1_ParamLimits

0x7f7a,	// (0x0004a211) main_vded2_pane_g1

0x7f95,	// (0x0004a22c) main_vded2_pane_g2_ParamLimits

0x7f95,	// (0x0004a22c) main_vded2_pane_g2

0x0001,

0xf970,	// (0x00051c07) main_vded2_pane_g_ParamLimits

0xf970,	// (0x00051c07) main_vded2_pane_g

0x7fa7,	// (0x0004a23e) vded2_slider_pane_ParamLimits

0x7fa7,	// (0x0004a23e) vded2_slider_pane

0x7fb7,	// (0x0004a24e) aid_size_touch_vded2_end

0x7fc1,	// (0x0004a258) aid_size_touch_vded2_playhead

0x7fcb,	// (0x0004a262) aid_size_touch_vded2_start

0x7fd3,	// (0x0004a26a) vded2_slider_bg_pane

0x7fdc,	// (0x0004a273) vded2_slider_pane_g1

0x7fe5,	// (0x0004a27c) vded2_slider_pane_g2

0x7fed,	// (0x0004a284) vded2_slider_pane_g3

0x0002,

0xf975,	// (0x00051c0c) vded2_slider_pane_g

0x7ff8,	// (0x0004a28f) vded2_slider_bg_pane_g1

0x8001,	// (0x0004a298) vded2_slider_bg_pane_g2

0x800a,	// (0x0004a2a1) vded2_slider_bg_pane_g3

0x0002,

0xf97c,	// (0x00051c13) vded2_slider_bg_pane_g

0x3ae6,	// (0x00045d7d) aid_postcard_touch_down_pane_ParamLimits

0x3ae6,	// (0x00045d7d) aid_postcard_touch_down_pane

0x3afe,	// (0x00045d95) aid_postcard_touch_up_pane_ParamLimits

0x3afe,	// (0x00045d95) aid_postcard_touch_up_pane

0xa634,	// (0x0004c8cb) main_blid2_pane

0xe421,	// (0x000506b8) popup_blid2_search_window

0xa634,	// (0x0004c8cb) blid2_gps_pane

0xa634,	// (0x0004c8cb) blid2_navig_pane

0xa634,	// (0x0004c8cb) blid2_search_pane

0xa634,	// (0x0004c8cb) blid2_tripm_pane

0x8013,	// (0x0004a2aa) blid2_search_pane_g1_ParamLimits

0x8013,	// (0x0004a2aa) blid2_search_pane_g1

0x802b,	// (0x0004a2c2) blid2_search_pane_t1_ParamLimits

0x802b,	// (0x0004a2c2) blid2_search_pane_t1

0x803d,	// (0x0004a2d4) aid_size_cell_blid2_gps_ParamLimits

0x803d,	// (0x0004a2d4) aid_size_cell_blid2_gps

0x8055,	// (0x0004a2ec) blid2_gps_pane_g1_ParamLimits

0x8055,	// (0x0004a2ec) blid2_gps_pane_g1

0x8069,	// (0x0004a300) grid_blid2_satellite_pane_ParamLimits

0x8069,	// (0x0004a300) grid_blid2_satellite_pane

0x8081,	// (0x0004a318) blid2_navig_pane_g1_ParamLimits

0x8081,	// (0x0004a318) blid2_navig_pane_g1

0x808d,	// (0x0004a324) blid2_navig_pane_t1_ParamLimits

0x808d,	// (0x0004a324) blid2_navig_pane_t1

0x80a8,	// (0x0004a33f) blid2_navig_pane_t2_ParamLimits

0x80a8,	// (0x0004a33f) blid2_navig_pane_t2

0x0001,

0xf983,	// (0x00051c1a) blid2_navig_pane_t_ParamLimits

0xf983,	// (0x00051c1a) blid2_navig_pane_t

0x80c3,	// (0x0004a35a) blid2_navig_ring_pane_ParamLimits

0x80c3,	// (0x0004a35a) blid2_navig_ring_pane

0x80de,	// (0x0004a375) blid2_speed_pane_ParamLimits

0x80de,	// (0x0004a375) blid2_speed_pane

0x80ea,	// (0x0004a381) blid2_tripm_pane_g1_ParamLimits

0x80ea,	// (0x0004a381) blid2_tripm_pane_g1

0x8105,	// (0x0004a39c) blid2_tripm_pane_g2_ParamLimits

0x8105,	// (0x0004a39c) blid2_tripm_pane_g2

0x8119,	// (0x0004a3b0) blid2_tripm_pane_g3_ParamLimits

0x8119,	// (0x0004a3b0) blid2_tripm_pane_g3

0x812d,	// (0x0004a3c4) blid2_tripm_pane_g4_ParamLimits

0x812d,	// (0x0004a3c4) blid2_tripm_pane_g4

0x8141,	// (0x0004a3d8) blid2_tripm_pane_g5_ParamLimits

0x8141,	// (0x0004a3d8) blid2_tripm_pane_g5

0x0005,

0xf988,	// (0x00051c1f) blid2_tripm_pane_g_ParamLimits

0xf988,	// (0x00051c1f) blid2_tripm_pane_g

0x8167,	// (0x0004a3fe) blid2_tripm_pane_t1_ParamLimits

0x8167,	// (0x0004a3fe) blid2_tripm_pane_t1

0x8182,	// (0x0004a419) blid2_tripm_pane_t2_ParamLimits

0x8182,	// (0x0004a419) blid2_tripm_pane_t2

0x819b,	// (0x0004a432) blid2_tripm_pane_t3_ParamLimits

0x819b,	// (0x0004a432) blid2_tripm_pane_t3

0x0003,

0xf995,	// (0x00051c2c) blid2_tripm_pane_t_ParamLimits

0xf995,	// (0x00051c2c) blid2_tripm_pane_t

0x81e2,	// (0x0004a479) cell_blid2_satellite_pane_ParamLimits

0x81e2,	// (0x0004a479) cell_blid2_satellite_pane

0x81fe,	// (0x0004a495) cell_blid2_satellite_pane_g1

0x8207,	// (0x0004a49e) cell_blid2_satellite_pane_t1

0xe896,	// (0x00050b2d) blid2_speed_pane_g1

0x8215,	// (0x0004a4ac) blid2_speed_pane_t1

0x8223,	// (0x0004a4ba) blid2_speed_pane_t2

0x0001,

0xf99e,	// (0x00051c35) blid2_speed_pane_t

0xe896,	// (0x00050b2d) blid2_navig_ring_pane_g1

0x8231,	// (0x0004a4c8) blid2_navig_ring_pane_g2

0x8239,	// (0x0004a4d0) blid2_navig_ring_pane_g3

0x8241,	// (0x0004a4d8) blid2_navig_ring_pane_g4

0x8249,	// (0x0004a4e0) blid2_navig_ring_pane_g5

0x0004,

0xf9a3,	// (0x00051c3a) blid2_navig_ring_pane_g

0xa634,	// (0x0004c8cb) bg_popup_window_pane_cp011

0x8251,	// (0x0004a4e8) popup_blid2_search_window_g1

0x8259,	// (0x0004a4f0) popup_blid2_search_window_t1

0x8267,	// (0x0004a4fe) popup_blid2_search_window_t2

0x0001,

0xf9ae,	// (0x00051c45) popup_blid2_search_window_t

0xc889,	// (0x0004eb20) main_browser_pane_g1

0xc590,	// (0x0004e827) main_browser_pane_ParamLimits

0xa6ad,	// (0x0004c944) bg_button_pane_cp011_ParamLimits

0x6d9c,	// (0x00049033) cell_vitu2_function_pane_g1_ParamLimits

0xe413,	// (0x000506aa) bg_popup_sub_pane_cp22_ParamLimits

0x0d95,	// (0x0004302c) input_focus_pane_cp08_ParamLimits

0x790c,	// (0x00049ba3) popup_vitu2_query_button_pane_ParamLimits

0x790c,	// (0x00049ba3) popup_vitu2_query_button_pane

0x0dac,	// (0x00043043) popup_vitu2_query_input_button_pane

0x791d,	// (0x00049bb4) popup_vitu2_query_window_g1_ParamLimits

0x0db6,	// (0x0004304d) popup_vitu2_query_window_g2_ParamLimits

0xf8af,	// (0x00051b46) popup_vitu2_query_window_g_ParamLimits

0xa634,	// (0x0004c8cb) bg_button_pane_cp026

0x8275,	// (0x0004a50c) popup_vitu2_query_input_button_pane_g1

0xa634,	// (0x0004c8cb) bg_button_pane_cp025

0x827d,	// (0x0004a514) popup_vitu2_query_button_pane_t1

0x51f3,	// (0x0004748a) main_mp3_pane_t6

0x5201,	// (0x00047498) popup_slider_window_cp01

0xae9c,	// (0x0004d133) cam4_battery_pane

0xaf03,	// (0x0004d19a) cam4_battery_pane_cp02

0x7eab,	// (0x0004a142) cam4_battery_pane_cp01

0xb086,	// (0x0004d31d) cam4_battery_pane_cp03

0xe896,	// (0x00050b2d) cam4_battery_pane_g1

0x828b,	// (0x0004a522) cam4_battery_pane_g2

0x0001,

0xf9b3,	// (0x00051c4a) cam4_battery_pane_g

0xe754,	// (0x000509eb) popup_blid_sat_info2_window_t11

0x34a6,	// (0x0004573d) aid_size_touch_mv_arrow_left_ParamLimits

0x34cf,	// (0x00045766) aid_size_touch_mv_arrow_right_ParamLimits

0xcf44,	// (0x0004f1db) navi_pane_g1_ParamLimits

0x34f8,	// (0x0004578f) navi_pane_g2_ParamLimits

0x3526,	// (0x000457bd) navi_pane_g3_ParamLimits

0xf409,	// (0x000516a0) navi_pane_g_ParamLimits

0x3580,	// (0x00045817) navi_pane_mv_t1_ParamLimits

0x5de9,	// (0x00048080) grid_imed_effect_pane_ParamLimits

0x23e4,	// (0x0004467b) aid_placing_vt_slider_lsc

0xc7d6,	// (0x0004ea6d) aid_placing_vt_slider_prt

0xa6ad,	// (0x0004c944) bg_tb_trans_pane_cp01_ParamLimits

0xe9e6,	// (0x00050c7d) popup_image_details_window_g1_ParamLimits

0xe9f9,	// (0x00050c90) popup_image_details_window_g2_ParamLimits

0xea0e,	// (0x00050ca5) popup_image_details_window_g3_ParamLimits

0xea0e,	// (0x00050ca5) popup_image_details_window_g3

0x02ad,	// (0x00042544) popup_image_details_window_g_ParamLimits

0xea22,	// (0x00050cb9) popup_image_details_window_t1_ParamLimits

0xea34,	// (0x00050ccb) popup_image_details_window_t2_ParamLimits

0xea4d,	// (0x00050ce4) popup_image_details_window_t3_ParamLimits

0xea61,	// (0x00050cf8) popup_image_details_window_t4_ParamLimits

0xea7c,	// (0x00050d13) popup_image_details_window_t5_ParamLimits

0x02b4,	// (0x0004254b) popup_image_details_window_t_ParamLimits

0x7dae,	// (0x0004a045) cl_header_name_pane_ParamLimits

0x7dae,	// (0x0004a045) cl_header_name_pane

0x8295,	// (0x0004a52c) cl_header_name_pane_t1_ParamLimits

0x8295,	// (0x0004a52c) cl_header_name_pane_t1

0x82b6,	// (0x0004a54d) cl_header_name_pane_t2_ParamLimits

0x82b6,	// (0x0004a54d) cl_header_name_pane_t2

0x82f8,	// (0x0004a58f) cl_header_name_pane_t3_ParamLimits

0x82f8,	// (0x0004a58f) cl_header_name_pane_t3

0x0002,

0xf9b8,	// (0x00051c4f) cl_header_name_pane_t_ParamLimits

0xf9b8,	// (0x00051c4f) cl_header_name_pane_t

0x3551,	// (0x000457e8) navi_pane_mv_g2_ParamLimits

0x6cdc,	// (0x00048f73) field_vitu2_entry_pane_g1_ParamLimits

0x6ce8,	// (0x00048f7f) field_vitu2_entry_pane_g2_ParamLimits

0x6cf4,	// (0x00048f8b) field_vitu2_entry_pane_g3_ParamLimits

0x6cf4,	// (0x00048f8b) field_vitu2_entry_pane_g3

0xf7b5,	// (0x00051a4c) field_vitu2_entry_pane_g_ParamLimits

0x6d18,	// (0x00048faf) cell_vitu2_itu_pane_g1_ParamLimits

0x6d28,	// (0x00048fbf) cell_vitu2_itu_pane_g2_ParamLimits

0x6d28,	// (0x00048fbf) cell_vitu2_itu_pane_g2

0x0001,

0xf7c1,	// (0x00051a58) cell_vitu2_itu_pane_g_ParamLimits

0xf7c1,	// (0x00051a58) cell_vitu2_itu_pane_g

0xa6ad,	// (0x0004c944) bg_vkb2_func_pane_cp05_ParamLimits

0xa6ad,	// (0x0004c944) bg_vkb2_func_pane_cp05

0xa6ad,	// (0x0004c944) bg_vkb2_func_pane_cp03

0xa6ad,	// (0x0004c944) bg_vkb2_func_pane_cp04

0xa6ad,	// (0x0004c944) bg_vkb2_func_pane_cp10_ParamLimits

0xa6ad,	// (0x0004c944) bg_vkb2_func_pane_cp10

0x0ed3,	// (0x0004316a) bg_vkb2_func_pane_cp08

0x7d10,	// (0x00049fa7) bg_vkb2_func_pane_cp06

0x7d1e,	// (0x00049fb5) bg_vkb2_func_pane_cp07

0x7ef0,	// (0x0004a187) bg_vkb2_func_pane_cp11_ParamLimits

0x7ef0,	// (0x0004a187) bg_vkb2_func_pane_cp11

0x7f05,	// (0x0004a19c) bg_vkb2_func_pane_cp12_ParamLimits

0x7f05,	// (0x0004a19c) bg_vkb2_func_pane_cp12

0xa634,	// (0x0004c8cb) bg_vkb2_func_pane_cp09

0x6dba,	// (0x00049051) bg_vkb2_func_pane_g1

0xc99a,	// (0x0004ec31) bg_vkb2_func_pane_g2

0x6dc2,	// (0x00049059) bg_vkb2_func_pane_g3

0x6dca,	// (0x00049061) bg_vkb2_func_pane_g4

0x7785,	// (0x00049a1c) bg_vkb2_func_pane_g5

0x6de2,	// (0x00049079) bg_vkb2_func_pane_g6

0x6dea,	// (0x00049081) bg_vkb2_func_pane_g7

0x6dda,	// (0x00049071) bg_vkb2_func_pane_g8

0xc97a,	// (0x0004ec11) bg_vkb2_func_pane_g9

0x0008,

0xf9bf,	// (0x00051c56) bg_vkb2_func_pane_g

0x8155,	// (0x0004a3ec) blid2_tripm_pane_g6_ParamLimits

0x8155,	// (0x0004a3ec) blid2_tripm_pane_g6

0x62aa,	// (0x00048541) mp4_progress_pane_g1

0x81ce,	// (0x0004a465) blid2_tripm_values_pane_ParamLimits

0x81ce,	// (0x0004a465) blid2_tripm_values_pane

0x8329,	// (0x0004a5c0) blid2_tripm_values_pane_t1

0x8337,	// (0x0004a5ce) blid2_tripm_values_pane_t2

0x8345,	// (0x0004a5dc) blid2_tripm_values_pane_t3

0x8353,	// (0x0004a5ea) blid2_tripm_values_pane_t4

0x8361,	// (0x0004a5f8) blid2_tripm_values_pane_t5

0x836f,	// (0x0004a606) blid2_tripm_values_pane_t6

0x837d,	// (0x0004a614) blid2_tripm_values_pane_t7

0x838b,	// (0x0004a622) blid2_tripm_values_pane_t8

0x8399,	// (0x0004a630) blid2_tripm_values_pane_t9

0x0008,

0xf9d2,	// (0x00051c69) blid2_tripm_values_pane_t

0x2424,	// (0x000446bb) call_video_pane_t1_ParamLimits

0x243e,	// (0x000446d5) call_video_pane_t2_ParamLimits

0xf292,	// (0x00051529) call_video_pane_t_ParamLimits

0x0bdb,	// (0x00042e72) msg_header_pane_g1_ParamLimits

0xd161,	// (0x0004f3f8) msg_header_pane_g2_ParamLimits

0xd161,	// (0x0004f3f8) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00051743) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00051743) msg_header_pane_g

0xc590,	// (0x0004e827) main_clock2_pane_ParamLimits

0x5af2,	// (0x00047d89) grid_clock2_toolbar_pane_ParamLimits

0x5af2,	// (0x00047d89) grid_clock2_toolbar_pane

0x5af2,	// (0x00047d89) listscroll_clock2_pane_ParamLimits

0x5af2,	// (0x00047d89) listscroll_clock2_pane

0x5bdb,	// (0x00047e72) main_clock2_pane_t3_ParamLimits

0x5bdb,	// (0x00047e72) main_clock2_pane_t3

0x5bf6,	// (0x00047e8d) main_clock2_pane_t4_ParamLimits

0x5bf6,	// (0x00047e8d) main_clock2_pane_t4

0x83a7,	// (0x0004a63e) cell_clock2_toolbar_pane

0x83af,	// (0x0004a646) cell_clock2_toolbar_pane_cp01

0x83af,	// (0x0004a646) cell_clock2_toolbar_pane_cp02

0x83b7,	// (0x0004a64e) cell_clock2_toolbar_pane_cp03

0x83bf,	// (0x0004a656) list_clock2_pane

0xceaa,	// (0x0004f141) scroll_pane_cp10

0x83c7,	// (0x0004a65e) list_single_clock2_pane_ParamLimits

0x83c7,	// (0x0004a65e) list_single_clock2_pane

0xcfe4,	// (0x0004f27b) list_highlight_pane_cp08

0x83d4,	// (0x0004a66b) list_single_clock2_pane_t1

0x83e2,	// (0x0004a679) list_single_clock2_pane_t2

0x0001,

0xf9e5,	// (0x00051c7c) list_single_clock2_pane_t

0xa634,	// (0x0004c8cb) bg_button_pane_cp10

0x83f0,	// (0x0004a687) cell_clock2_toolbar_pane_g1

0x3a72,	// (0x00045d09) aid_main_viewer_pane_g1_ParamLimits

0x3a72,	// (0x00045d09) aid_main_viewer_pane_g1

0x3a80,	// (0x00045d17) aid_main_viewer_pane_g2_ParamLimits

0x3a80,	// (0x00045d17) aid_main_viewer_pane_g2

0x3a8e,	// (0x00045d25) aid_main_viewer_pane_g3_ParamLimits

0x3a8e,	// (0x00045d25) aid_main_viewer_pane_g3

0x3a9d,	// (0x00045d34) aid_main_viewer_pane_g4_ParamLimits

0x3a9d,	// (0x00045d34) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00051754) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00051754) aid_main_viewer_pane_g

0x43f5,	// (0x0004668c) main_calc_pane_ParamLimits

0x4409,	// (0x000466a0) main_dialer2_pane_ParamLimits

0xa634,	// (0x0004c8cb) main_cam6_pane

0xa634,	// (0x0004c8cb) main_vid6_pane

0x5afe,	// (0x00047d95) listscroll_gen_pane_cp06_ParamLimits

0x5afe,	// (0x00047d95) listscroll_gen_pane_cp06

0x5c11,	// (0x00047ea8) main_clock2_pane_t5_ParamLimits

0x5c11,	// (0x00047ea8) main_clock2_pane_t5

0x5c6e,	// (0x00047f05) aid_call2_pane_cp10_ParamLimits

0x5c80,	// (0x00047f17) aid_call_pane_cp10_ParamLimits

0xcf19,	// (0x0004f1b0) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcf19,	// (0x0004f1b0) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5c92,	// (0x00047f29) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5c92,	// (0x00047f29) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcf19,	// (0x0004f1b0) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6ca,	// (0x00051961) popup_clock_analogue_window_cp10_g_ParamLimits

0x5ca8,	// (0x00047f3f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x63d3,	// (0x0004866a) cell_dialer2_keypad_pane_g2_ParamLimits

0x63d3,	// (0x0004866a) cell_dialer2_keypad_pane_g2

0x0001,

0xf754,	// (0x000519eb) cell_dialer2_keypad_pane_g_ParamLimits

0xf754,	// (0x000519eb) cell_dialer2_keypad_pane_g

0x63ef,	// (0x00048686) cell_dialer2_keypad_pane_t1

0x71d7,	// (0x0004946e) main_cset_text2_pane_ParamLimits

0x71d7,	// (0x0004946e) main_cset_text2_pane

0x7cdc,	// (0x00049f73) area_vitu2_query_pane_g1_ParamLimits

0x0e9a,	// (0x00043131) area_vitu2_query_pane_g2_ParamLimits

0xf902,	// (0x00051b99) area_vitu2_query_pane_g_ParamLimits

0xb062,	// (0x0004d2f9) area_vitu2_query_pane_t7_ParamLimits

0xb062,	// (0x0004d2f9) area_vitu2_query_pane_t7

0x7d10,	// (0x00049fa7) bg_button_pane_cp018_ParamLimits

0x7d1e,	// (0x00049fb5) bg_button_pane_cp021_ParamLimits

0x0ed3,	// (0x0004316a) bg_button_pane_cp022_ParamLimits

0x0ed3,	// (0x0004316a) bg_vkb2_func_pane_cp08_ParamLimits

0x7d10,	// (0x00049fa7) bg_vkb2_func_pane_cp06_ParamLimits

0x7d1e,	// (0x00049fb5) bg_vkb2_func_pane_cp07_ParamLimits

0x0ee4,	// (0x0004317b) input_focus_pane_cp09_ParamLimits

0xb180,	// (0x0004d417) cam6_autofocus_pane_ParamLimits

0xb180,	// (0x0004d417) cam6_autofocus_pane

0x83f8,	// (0x0004a68f) cam6_image_uncrop_pane_ParamLimits

0x83f8,	// (0x0004a68f) cam6_image_uncrop_pane

0x8407,	// (0x0004a69e) cam6_indi_pane_ParamLimits

0x8407,	// (0x0004a69e) cam6_indi_pane

0x841d,	// (0x0004a6b4) cam6_mode_pane_ParamLimits

0x841d,	// (0x0004a6b4) cam6_mode_pane

0x842f,	// (0x0004a6c6) cam6_timer_pane_ParamLimits

0x842f,	// (0x0004a6c6) cam6_timer_pane

0x843b,	// (0x0004a6d2) cam6_zoom_pane_ParamLimits

0x843b,	// (0x0004a6d2) cam6_zoom_pane

0x8449,	// (0x0004a6e0) cam6_mode_pane_g1_ParamLimits

0x8449,	// (0x0004a6e0) cam6_mode_pane_g1

0x8459,	// (0x0004a6f0) cam6_mode_pane_g2_ParamLimits

0x8459,	// (0x0004a6f0) cam6_mode_pane_g2

0x8469,	// (0x0004a700) cam6_mode_pane_g3_ParamLimits

0x8469,	// (0x0004a700) cam6_mode_pane_g3

0x8479,	// (0x0004a710) cam6_mode_pane_g4_ParamLimits

0x8479,	// (0x0004a710) cam6_mode_pane_g4

0x0003,

0xf9ea,	// (0x00051c81) cam6_mode_pane_g_ParamLimits

0xf9ea,	// (0x00051c81) cam6_mode_pane_g

0x8489,	// (0x0004a720) bg_tb_trans_pane_cp08_ParamLimits

0x8489,	// (0x0004a720) bg_tb_trans_pane_cp08

0x8497,	// (0x0004a72e) cam6_battery_pane_ParamLimits

0x8497,	// (0x0004a72e) cam6_battery_pane

0x84ad,	// (0x0004a744) cam6_indi_pane_g1_ParamLimits

0x84ad,	// (0x0004a744) cam6_indi_pane_g1

0x84bf,	// (0x0004a756) cam6_indi_pane_g2_ParamLimits

0x84bf,	// (0x0004a756) cam6_indi_pane_g2

0x84d1,	// (0x0004a768) cam6_indi_pane_g3_ParamLimits

0x84d1,	// (0x0004a768) cam6_indi_pane_g3

0x0002,

0xf9f3,	// (0x00051c8a) cam6_indi_pane_g_ParamLimits

0xf9f3,	// (0x00051c8a) cam6_indi_pane_g

0x84e3,	// (0x0004a77a) cam6_indi_pane_t1_ParamLimits

0x84e3,	// (0x0004a77a) cam6_indi_pane_t1

0x6aa3,	// (0x00048d3a) cam6_autofocus_pane_g1

0x6aab,	// (0x00048d42) cam6_autofocus_pane_g2

0x6ab3,	// (0x00048d4a) cam6_autofocus_pane_g3

0x6abb,	// (0x00048d52) cam6_autofocus_pane_g4

0x0003,

0xf9fa,	// (0x00051c91) cam6_autofocus_pane_g

0x8509,	// (0x0004a7a0) cam6_timer_pane_g1

0x8511,	// (0x0004a7a8) cam6_timer_pane_t1

0x851f,	// (0x0004a7b6) cam6_zoom_cont_pane

0x8527,	// (0x0004a7be) cam6_zoom_pane_g1

0x852f,	// (0x0004a7c6) cam6_zoom_pane_g2

0x8537,	// (0x0004a7ce) cam6_zoom_pane_g3

0x0002,

0xfa03,	// (0x00051c9a) cam6_zoom_pane_g

0xe896,	// (0x00050b2d) cam6_battery_pane_g1

0xe896,	// (0x00050b2d) cam6_battery_pane_g2

0x0001,

0x0271,	// (0x00042508) cam6_battery_pane_g

0x853f,	// (0x0004a7d6) cam6_zoom_cont_pane_g1

0x8548,	// (0x0004a7df) cam6_zoom_cont_pane_g2

0x8551,	// (0x0004a7e8) cam6_zoom_cont_pane_g3

0x0002,

0xfa0a,	// (0x00051ca1) cam6_zoom_cont_pane_g

0x856e,	// (0x0004a805) cam6_mode_pane_cp_ParamLimits

0x856e,	// (0x0004a805) cam6_mode_pane_cp

0x843b,	// (0x0004a6d2) cam6_zoom_pane_cp_ParamLimits

0x843b,	// (0x0004a6d2) cam6_zoom_pane_cp

0x8580,	// (0x0004a817) vid6_image_uncrop_cif_pane_ParamLimits

0x8580,	// (0x0004a817) vid6_image_uncrop_cif_pane

0x8590,	// (0x0004a827) vid6_image_uncrop_nhd_pane_ParamLimits

0x8590,	// (0x0004a827) vid6_image_uncrop_nhd_pane

0x83f8,	// (0x0004a68f) vid6_image_uncrop_vga_pane_ParamLimits

0x83f8,	// (0x0004a68f) vid6_image_uncrop_vga_pane

0x85af,	// (0x0004a846) vid6_image_uncrop_wvga_pane_ParamLimits

0x85af,	// (0x0004a846) vid6_image_uncrop_wvga_pane

0x85be,	// (0x0004a855) vid6_indi_pane_ParamLimits

0x85be,	// (0x0004a855) vid6_indi_pane

0x8489,	// (0x0004a720) bg_tb_trans_pane_cp09_ParamLimits

0x8489,	// (0x0004a720) bg_tb_trans_pane_cp09

0x85d6,	// (0x0004a86d) cam6_battery_pane_cp_ParamLimits

0x85d6,	// (0x0004a86d) cam6_battery_pane_cp

0x85e2,	// (0x0004a879) vid6_indi_pane_g1_ParamLimits

0x85e2,	// (0x0004a879) vid6_indi_pane_g1

0x85f4,	// (0x0004a88b) vid6_indi_pane_g2_ParamLimits

0x85f4,	// (0x0004a88b) vid6_indi_pane_g2

0x8606,	// (0x0004a89d) vid6_indi_pane_g3_ParamLimits

0x8606,	// (0x0004a89d) vid6_indi_pane_g3

0x861d,	// (0x0004a8b4) vid6_indi_pane_g4_ParamLimits

0x861d,	// (0x0004a8b4) vid6_indi_pane_g4

0x8634,	// (0x0004a8cb) vid6_indi_pane_g5_ParamLimits

0x8634,	// (0x0004a8cb) vid6_indi_pane_g5

0x0004,

0xfa11,	// (0x00051ca8) vid6_indi_pane_g_ParamLimits

0xfa11,	// (0x00051ca8) vid6_indi_pane_g

0x864e,	// (0x0004a8e5) vid6_indi_pane_t1_ParamLimits

0x864e,	// (0x0004a8e5) vid6_indi_pane_t1

0x8664,	// (0x0004a8fb) vid6_indi_pane_t2_ParamLimits

0x8664,	// (0x0004a8fb) vid6_indi_pane_t2

0x868c,	// (0x0004a923) vid6_indi_pane_t3_ParamLimits

0x868c,	// (0x0004a923) vid6_indi_pane_t3

0x86b4,	// (0x0004a94b) vid6_indi_pane_t4_ParamLimits

0x86b4,	// (0x0004a94b) vid6_indi_pane_t4

0x0003,

0xfa1c,	// (0x00051cb3) vid6_indi_pane_t_ParamLimits

0xfa1c,	// (0x00051cb3) vid6_indi_pane_t

0x86d8,	// (0x0004a96f) wait_bar_pane_cp08

0x86e7,	// (0x0004a97e) main_cset_text2_pane_t1_ParamLimits

0x86e7,	// (0x0004a97e) main_cset_text2_pane_t1

0x8559,	// (0x0004a7f0) listscroll_gen_pane_cp06_t1_ParamLimits

0x8559,	// (0x0004a7f0) listscroll_gen_pane_cp06_t1

0xa634,	// (0x0004c8cb) main_cam6_set_pane

0xeac6,	// (0x00050d5d) bg_tb_trans_pane_cp06_ParamLimits

0xaea4,	// (0x0004d13b) cam4_indicators_pane_g1_ParamLimits

0xaeb1,	// (0x0004d148) cam4_indicators_pane_g2_ParamLimits

0xf791,	// (0x00051a28) cam4_indicators_pane_g_ParamLimits

0xaed1,	// (0x0004d168) cam4_indicators_pane_t1_ParamLimits

0xaef5,	// (0x0004d18c) bg_tb_trans_pane_cp07_ParamLimits

0x6a52,	// (0x00048ce9) vid4_indicators_pane_g1_ParamLimits

0x6a5f,	// (0x00048cf6) vid4_indicators_pane_g2_ParamLimits

0x6a6c,	// (0x00048d03) vid4_indicators_pane_g3_ParamLimits

0x6a79,	// (0x00048d10) vid4_indicators_pane_g4_ParamLimits

0xf7a3,	// (0x00051a3a) vid4_indicators_pane_g_ParamLimits

0x6a91,	// (0x00048d28) vid4_indicators_pane_t1_ParamLimits

0xb08e,	// (0x0004d325) vid4_progress_pane_g1_ParamLimits

0xb09a,	// (0x0004d331) vid4_progress_pane_g2_ParamLimits

0xb0a6,	// (0x0004d33d) vid4_progress_pane_g3_ParamLimits

0xb0b5,	// (0x0004d34c) vid4_progress_pane_g4_ParamLimits

0xf94d,	// (0x00051be4) vid4_progress_pane_g_ParamLimits

0xb0d3,	// (0x0004d36a) vid4_progress_pane_t1_ParamLimits

0xb0e9,	// (0x0004d380) vid4_progress_pane_t2_ParamLimits

0xb0ff,	// (0x0004d396) vid4_progress_pane_t3_ParamLimits

0xf958,	// (0x00051bef) vid4_progress_pane_t_ParamLimits

0xb114,	// (0x0004d3ab) wait_bar_pane_cp07_ParamLimits

0x8708,	// (0x0004a99f) main_cam6_set_pane_g2_ParamLimits

0x8708,	// (0x0004a99f) main_cam6_set_pane_g2

0x872e,	// (0x0004a9c5) main_cset6_listscroll_pane_ParamLimits

0x872e,	// (0x0004a9c5) main_cset6_listscroll_pane

0x874c,	// (0x0004a9e3) main_cset6_slider_pane_ParamLimits

0x874c,	// (0x0004a9e3) main_cset6_slider_pane

0x8762,	// (0x0004a9f9) main_cset6_text2_pane_ParamLimits

0x8762,	// (0x0004a9f9) main_cset6_text2_pane

0x8770,	// (0x0004aa07) main_cset6_text_pane

0x8778,	// (0x0004aa0f) main_cset_list_pane_copy1_ParamLimits

0x8778,	// (0x0004aa0f) main_cset_list_pane_copy1

0x8788,	// (0x0004aa1f) scroll_pane_cp028_copy1

0x8791,	// (0x0004aa28) cset_list_set_pane_copy1

0x87a5,	// (0x0004aa3c) aid_position_infowindow_above_copy1

0x87ad,	// (0x0004aa44) aid_position_infowindow_below_copy1

0x0ef5,	// (0x0004318c) cset_list_set_pane_g1_copy1

0xb18e,	// (0x0004d425) cset_list_set_pane_g3_copy1_ParamLimits

0xb18e,	// (0x0004d425) cset_list_set_pane_g3_copy1

0x0efd,	// (0x00043194) cset_list_set_pane_t1_copy1_ParamLimits

0x0efd,	// (0x00043194) cset_list_set_pane_t1_copy1

0xa6ad,	// (0x0004c944) list_highlight_pane_cp021_copy1_ParamLimits

0xa6ad,	// (0x0004c944) list_highlight_pane_cp021_copy1

0x87b5,	// (0x0004aa4c) cset6_slider_pane_ParamLimits

0x87b5,	// (0x0004aa4c) cset6_slider_pane

0x87e1,	// (0x0004aa78) main_cset6_slider_pane_g1_ParamLimits

0x87e1,	// (0x0004aa78) main_cset6_slider_pane_g1

0x8809,	// (0x0004aaa0) main_cset6_slider_pane_g2_ParamLimits

0x8809,	// (0x0004aaa0) main_cset6_slider_pane_g2

0x8831,	// (0x0004aac8) main_cset6_slider_pane_g3_ParamLimits

0x8831,	// (0x0004aac8) main_cset6_slider_pane_g3

0x883d,	// (0x0004aad4) main_cset6_slider_pane_g4_ParamLimits

0x883d,	// (0x0004aad4) main_cset6_slider_pane_g4

0x8849,	// (0x0004aae0) main_cset6_slider_pane_g5_ParamLimits

0x8849,	// (0x0004aae0) main_cset6_slider_pane_g5

0x72b3,	// (0x0004954a) main_cset6_slider_pane_g7_ParamLimits

0x72b3,	// (0x0004954a) main_cset6_slider_pane_g7

0x72bf,	// (0x00049556) main_cset6_slider_pane_g8_ParamLimits

0x72bf,	// (0x00049556) main_cset6_slider_pane_g8

0x72cb,	// (0x00049562) main_cset6_slider_pane_g9_ParamLimits

0x72cb,	// (0x00049562) main_cset6_slider_pane_g9

0x72d7,	// (0x0004956e) main_cset6_slider_pane_g10_ParamLimits

0x72d7,	// (0x0004956e) main_cset6_slider_pane_g10

0x72e3,	// (0x0004957a) main_cset6_slider_pane_g11_ParamLimits

0x72e3,	// (0x0004957a) main_cset6_slider_pane_g11

0x72ef,	// (0x00049586) main_cset6_slider_pane_g12_ParamLimits

0x72ef,	// (0x00049586) main_cset6_slider_pane_g12

0x72fb,	// (0x00049592) main_cset6_slider_pane_g13_ParamLimits

0x72fb,	// (0x00049592) main_cset6_slider_pane_g13

0x7307,	// (0x0004959e) main_cset6_slider_pane_g14_ParamLimits

0x7307,	// (0x0004959e) main_cset6_slider_pane_g14

0x8857,	// (0x0004aaee) main_cset6_slider_pane_g15_ParamLimits

0x8857,	// (0x0004aaee) main_cset6_slider_pane_g15

0x732b,	// (0x000495c2) main_cset6_slider_pane_g16_ParamLimits

0x732b,	// (0x000495c2) main_cset6_slider_pane_g16

0x7339,	// (0x000495d0) main_cset6_slider_pane_g17_ParamLimits

0x7339,	// (0x000495d0) main_cset6_slider_pane_g17

0x0011,

0xfa25,	// (0x00051cbc) main_cset6_slider_pane_g_ParamLimits

0xfa25,	// (0x00051cbc) main_cset6_slider_pane_g

0x8887,	// (0x0004ab1e) main_cset6_slider_pane_t1_ParamLimits

0x8887,	// (0x0004ab1e) main_cset6_slider_pane_t1

0x88c8,	// (0x0004ab5f) main_cset6_slider_pane_t2_ParamLimits

0x88c8,	// (0x0004ab5f) main_cset6_slider_pane_t2

0x88f3,	// (0x0004ab8a) main_cset6_slider_pane_t3_ParamLimits

0x88f3,	// (0x0004ab8a) main_cset6_slider_pane_t3

0x891e,	// (0x0004abb5) main_cset6_slider_pane_t4_ParamLimits

0x891e,	// (0x0004abb5) main_cset6_slider_pane_t4

0x894b,	// (0x0004abe2) main_cset6_slider_pane_t5_ParamLimits

0x894b,	// (0x0004abe2) main_cset6_slider_pane_t5

0x8978,	// (0x0004ac0f) main_cset6_slider_pane_t7_ParamLimits

0x8978,	// (0x0004ac0f) main_cset6_slider_pane_t7

0x89ae,	// (0x0004ac45) main_cset6_slider_pane_t8_ParamLimits

0x89ae,	// (0x0004ac45) main_cset6_slider_pane_t8

0x89d2,	// (0x0004ac69) main_cset6_slider_pane_t9_ParamLimits

0x89d2,	// (0x0004ac69) main_cset6_slider_pane_t9

0x89f6,	// (0x0004ac8d) main_cset6_slider_pane_t10_ParamLimits

0x89f6,	// (0x0004ac8d) main_cset6_slider_pane_t10

0x8a1a,	// (0x0004acb1) main_cset6_slider_pane_t11_ParamLimits

0x8a1a,	// (0x0004acb1) main_cset6_slider_pane_t11

0x8a40,	// (0x0004acd7) main_cset6_slider_pane_t14_ParamLimits

0x8a40,	// (0x0004acd7) main_cset6_slider_pane_t14

0x8a79,	// (0x0004ad10) main_cset6_slider_pane_t15_ParamLimits

0x8a79,	// (0x0004ad10) main_cset6_slider_pane_t15

0x000b,

0xfa4a,	// (0x00051ce1) main_cset6_slider_pane_t_ParamLimits

0xfa4a,	// (0x00051ce1) main_cset6_slider_pane_t

0x75ae,	// (0x00049845) cset_slider_pane_g1_copy1

0x75b7,	// (0x0004984e) cset_slider_pane_g2_copy1

0x75c0,	// (0x00049857) cset_slider_pane_g3_copy1

0xa634,	// (0x0004c8cb) bg_popup_sub_pane_cp011_copy1

0x796b,	// (0x00049c02) main_cset_text_pane_g1_copy1

0x7973,	// (0x00049c0a) main_cset_text_pane_t1_copy1

0x7981,	// (0x00049c18) main_cset_text_pane_t2_copy1

0x798f,	// (0x00049c26) main_cset_text_pane_t3_copy1

0x799d,	// (0x00049c34) main_cset_text_pane_t4_copy1

0x79ab,	// (0x00049c42) main_cset_text_pane_t5_copy1

0x79b9,	// (0x00049c50) main_cset_text_pane_t6_copy1

0x79c7,	// (0x00049c5e) main_cset_text_pane_t7_copy1

0x86e7,	// (0x0004a97e) main_cset_text2_pane_t1_copy1

0xa634,	// (0x0004c8cb) main_ncimui_pane

0x4697,	// (0x0004692e) popup_query_ncimui_window_ParamLimits

0x4697,	// (0x0004692e) popup_query_ncimui_window

0xabed,	// (0x0004ce84) field_cale_ev2_pane_g4_ParamLimits

0xabed,	// (0x0004ce84) field_cale_ev2_pane_g4

0x621a,	// (0x000484b1) cell_video_dialer_keypad_pane_g2_ParamLimits

0x621a,	// (0x000484b1) cell_video_dialer_keypad_pane_g2

0x0001,

0xf72f,	// (0x000519c6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf72f,	// (0x000519c6) cell_video_dialer_keypad_pane_g

0x6232,	// (0x000484c9) cell_video_dialer_keypad_pane_t1

0xa634,	// (0x0004c8cb) bg_popup_window_pane_cp012

0xcd88,	// (0x0004f01f) heading_pane_cp06

0x8bc9,	// (0x0004ae60) ncim_query_content_pane

0xa634,	// (0x0004c8cb) bg_popup_heading_pane_cp01

0x8bd1,	// (0x0004ae68) ncim_heading_pane_t1

0x8bdf,	// (0x0004ae76) ncim_indicator_popup_pane

0x8bf1,	// (0x0004ae88) ncim_query_button_pane

0x8c13,	// (0x0004aeaa) ncim_query_content_pane_t1

0x8c25,	// (0x0004aebc) ncim_query_content_pane_t2

0x0005,

0xfa89,	// (0x00051d20) ncim_query_content_pane_t

0x8cd7,	// (0x0004af6e) ncim_query_list_pane

0x8ce9,	// (0x0004af80) ncim_query_popup_pane

0x8bdf,	// (0x0004ae76) ncim_indicator_popup_pane_ParamLimits

0x8bf9,	// (0x0004ae90) ncim_query_content_pane_g1_ParamLimits

0x8bf9,	// (0x0004ae90) ncim_query_content_pane_g1

0x8c13,	// (0x0004aeaa) ncim_query_content_pane_t1_ParamLimits

0x8c25,	// (0x0004aebc) ncim_query_content_pane_t2_ParamLimits

0x8c37,	// (0x0004aece) ncim_query_content_pane_t3_ParamLimits

0x8c37,	// (0x0004aece) ncim_query_content_pane_t3

0x8c5f,	// (0x0004aef6) ncim_query_content_pane_t4_ParamLimits

0x8c5f,	// (0x0004aef6) ncim_query_content_pane_t4

0x8c87,	// (0x0004af1e) ncim_query_content_pane_t5_ParamLimits

0x8c87,	// (0x0004af1e) ncim_query_content_pane_t5

0x8caf,	// (0x0004af46) ncim_query_content_pane_t6_ParamLimits

0x8caf,	// (0x0004af46) ncim_query_content_pane_t6

0xfa89,	// (0x00051d20) ncim_query_content_pane_t_ParamLimits

0x8cd7,	// (0x0004af6e) ncim_query_list_pane_ParamLimits

0x8ce9,	// (0x0004af80) ncim_query_popup_pane_ParamLimits

0x8cfd,	// (0x0004af94) wait_bar_pane_cp04

0xa634,	// (0x0004c8cb) input_focus_pane_cp011

0x8d05,	// (0x0004af9c) ncim_query_popup_pane_t1

0x8d13,	// (0x0004afaa) ncim_list_query_list_pane_ParamLimits

0x8d13,	// (0x0004afaa) ncim_list_query_list_pane

0xa634,	// (0x0004c8cb) bg_button_pane_cp027

0x8d26,	// (0x0004afbd) ncim_query_button_pane_g1

0xa634,	// (0x0004c8cb) list_highlight_pane_cp012

0x8d30,	// (0x0004afc7) ncim_list_query_list_pane_g1

0x8d38,	// (0x0004afcf) ncim_list_query_list_pane_t1

0xaec1,	// (0x0004d158) cam4_indicators_pane_g3_ParamLimits

0xaec1,	// (0x0004d158) cam4_indicators_pane_g3

0x6a85,	// (0x00048d1c) vid4_indicators_pane_g5_ParamLimits

0x6a85,	// (0x00048d1c) vid4_indicators_pane_g5

0xb0c4,	// (0x0004d35b) vid4_progress_pane_g5_ParamLimits

0xb0c4,	// (0x0004d35b) vid4_progress_pane_g5

0x8ae2,	// (0x0004ad79) main_ncimui_pane_g1

0x8b38,	// (0x0004adcf) ncimui_group_query_pane_ParamLimits

0x8b38,	// (0x0004adcf) ncimui_group_query_pane

0x8b74,	// (0x0004ae0b) ncimui_list_pane_ParamLimits

0x8b74,	// (0x0004ae0b) ncimui_list_pane

0x8b95,	// (0x0004ae2c) ncimui_text_pane_ParamLimits

0x8b95,	// (0x0004ae2c) ncimui_text_pane

0x8d46,	// (0x0004afdd) ncimui_text_pane_t1_ParamLimits

0x8d46,	// (0x0004afdd) ncimui_text_pane_t1

0x8d64,	// (0x0004affb) ncimui_list_single_graphic_pane_ParamLimits

0x8d64,	// (0x0004affb) ncimui_list_single_graphic_pane

0x8d74,	// (0x0004b00b) ncimui_query_pane_ParamLimits

0x8d74,	// (0x0004b00b) ncimui_query_pane

0xa634,	// (0x0004c8cb) list_highlight_pane_cp013

0x8d87,	// (0x0004b01e) ncim_list_query_list_pane_t1_copy1

0x8d30,	// (0x0004afc7) ncim_list_single_graphic_pane_g1

0x8d95,	// (0x0004b02c) ncim_query_button_pane_cp01

0x8da1,	// (0x0004b038) ncim_query_entry_pane_ParamLimits

0x8da1,	// (0x0004b038) ncim_query_entry_pane

0x8db4,	// (0x0004b04b) ncimui_query_pane_g1

0x8dc0,	// (0x0004b057) ncimui_query_pane_t1_ParamLimits

0x8dc0,	// (0x0004b057) ncimui_query_pane_t1

0xa6ad,	// (0x0004c944) input_focus_pane_cp012

0x8dd9,	// (0x0004b070) ncim_query_entry_pane_t1

0xc590,	// (0x0004e827) main_im_pane_ParamLimits

0xa6ad,	// (0x0004c944) main_mobtv_pane_ParamLimits

0xa6ad,	// (0x0004c944) main_mobtv_pane

0x886f,	// (0x0004ab06) main_cset6_slider_pane_g18_ParamLimits

0x886f,	// (0x0004ab06) main_cset6_slider_pane_g18

0x887b,	// (0x0004ab12) main_cset6_slider_pane_g19_ParamLimits

0x887b,	// (0x0004ab12) main_cset6_slider_pane_g19

0x8deb,	// (0x0004b082) bg_main_mobtv_pane_ParamLimits

0x8deb,	// (0x0004b082) bg_main_mobtv_pane

0x8df9,	// (0x0004b090) main_mobtv_info_pane

0x8e04,	// (0x0004b09b) main_mobtv_loading_pane_ParamLimits

0x8e04,	// (0x0004b09b) main_mobtv_loading_pane

0x8e11,	// (0x0004b0a8) main_mobtv_pg_channel_list_pane

0x8e1b,	// (0x0004b0b2) main_mobtv_pg_hdr_pane

0x8e24,	// (0x0004b0bb) main_mobtv_programe_curr_pane_ParamLimits

0x8e24,	// (0x0004b0bb) main_mobtv_programe_curr_pane

0x8e31,	// (0x0004b0c8) main_mobtv_programe_next_pane_ParamLimits

0x8e31,	// (0x0004b0c8) main_mobtv_programe_next_pane

0x8e3e,	// (0x0004b0d5) popup_mobtv_noti_window

0xe896,	// (0x00050b2d) main_tv_pg_hdr_pane_g1

0x8e48,	// (0x0004b0df) main_tv_pg_hdr_pane_g2

0x8e50,	// (0x0004b0e7) main_tv_pg_hdr_pane_g3

0x8e58,	// (0x0004b0ef) main_tv_pg_hdr_pane_g4

0x8e60,	// (0x0004b0f7) main_tv_pg_hdr_pane_g5

0x8e6a,	// (0x0004b101) main_tv_pg_hdr_pane_g6

0x8e74,	// (0x0004b10b) main_tv_pg_hdr_pane_g7

0x8e7e,	// (0x0004b115) main_tv_pg_hdr_pane_g8

0x8e88,	// (0x0004b11f) main_tv_pg_hdr_pane_g9

0x8e92,	// (0x0004b129) main_tv_pg_hdr_pane_g10

0x8e9c,	// (0x0004b133) main_tv_pg_hdr_pane_g11

0x000a,

0xfa96,	// (0x00051d2d) main_tv_pg_hdr_pane_g

0x8ea6,	// (0x0004b13d) main_tv_pg_hdr_pane_t1

0x8eb4,	// (0x0004b14b) main_tv_pg_hdr_pane_t2

0x8ec2,	// (0x0004b159) main_tv_pg_hdr_pane_t3

0x8ed2,	// (0x0004b169) main_tv_pg_hdr_pane_t4

0x8ee2,	// (0x0004b179) main_tv_pg_hdr_pane_t5

0x0004,

0xfaad,	// (0x00051d44) main_tv_pg_hdr_pane_t

0x8ef2,	// (0x0004b189) single_mobtv_pg_channel_pane_ParamLimits

0x8ef2,	// (0x0004b189) single_mobtv_pg_channel_pane

0x8f04,	// (0x0004b19b) single_mobtv_pg_channel_table_pane

0x8f0d,	// (0x0004b1a4) single_mobtv_pg_channel_thumb_pane

0x8f16,	// (0x0004b1ad) single_tv_pg_channel_pane_g1

0x8f1f,	// (0x0004b1b6) single_tv_pg_channel_pane_g2

0x0001,

0xfab8,	// (0x00051d4f) single_tv_pg_channel_pane_g

0xeac6,	// (0x00050d5d) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xeac6,	// (0x00050d5d) bg_single_mobtv_pg_channel_thumb_pane

0x8f28,	// (0x0004b1bf) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x8f28,	// (0x0004b1bf) single_mobtv_pg_channel_thumb_pane_g1

0x8f36,	// (0x0004b1cd) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x8f36,	// (0x0004b1cd) single_mobtv_pg_channel_thumb_pane_g2

0x8f42,	// (0x0004b1d9) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x8f42,	// (0x0004b1d9) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfabd,	// (0x00051d54) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfabd,	// (0x00051d54) single_mobtv_pg_channel_thumb_pane_g

0x8f4e,	// (0x0004b1e5) single_mobtv_pg_channel_thumb_pane_t1

0x8f5c,	// (0x0004b1f3) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfac4,	// (0x00051d5b) single_mobtv_pg_channel_thumb_pane_t

0xe896,	// (0x00050b2d) bg_single_mobtv_pg_channel_table_pane_g1

0xe896,	// (0x00050b2d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x0271,	// (0x00042508) bg_single_mobtv_pg_channel_table_pane_g

0x8f6a,	// (0x0004b201) single_mobtv_pg_channel_table_pane_t1

0x8f78,	// (0x0004b20f) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfac9,	// (0x00051d60) single_mobtv_pg_channel_table_pane_t

0x8f8e,	// (0x0004b225) main_mobtv_info_pane_g1_ParamLimits

0x8f8e,	// (0x0004b225) main_mobtv_info_pane_g1

0x8fac,	// (0x0004b243) main_mobtv_info_pane_t1_ParamLimits

0x8fac,	// (0x0004b243) main_mobtv_info_pane_t1

0x9024,	// (0x0004b2bb) main_mobtv_info_pane_t2_ParamLimits

0x9024,	// (0x0004b2bb) main_mobtv_info_pane_t2

0x0002,

0xface,	// (0x00051d65) main_mobtv_info_pane_t_ParamLimits

0xface,	// (0x00051d65) main_mobtv_info_pane_t

0x90b5,	// (0x0004b34c) wait_bar_pane_cp05

0x90c7,	// (0x0004b35e) main_mobtv_loading_pane_g1_ParamLimits

0x90c7,	// (0x0004b35e) main_mobtv_loading_pane_g1

0x90d8,	// (0x0004b36f) main_mobtv_loading_pane_g2_ParamLimits

0x90d8,	// (0x0004b36f) main_mobtv_loading_pane_g2

0x90e4,	// (0x0004b37b) main_mobtv_loading_pane_g3_ParamLimits

0x90e4,	// (0x0004b37b) main_mobtv_loading_pane_g3

0x0002,

0xfad5,	// (0x00051d6c) main_mobtv_loading_pane_g_ParamLimits

0xfad5,	// (0x00051d6c) main_mobtv_loading_pane_g

0x90f7,	// (0x0004b38e) main_mobtv_loading_pane_t1_ParamLimits

0x90f7,	// (0x0004b38e) main_mobtv_loading_pane_t1

0x910f,	// (0x0004b3a6) main_mobtv_loading_pane_t2_ParamLimits

0x910f,	// (0x0004b3a6) main_mobtv_loading_pane_t2

0x0001,

0xfadc,	// (0x00051d73) main_mobtv_loading_pane_t_ParamLimits

0xfadc,	// (0x00051d73) main_mobtv_loading_pane_t

0x9133,	// (0x0004b3ca) wait_bar_pane_cp06_ParamLimits

0x9133,	// (0x0004b3ca) wait_bar_pane_cp06

0x9142,	// (0x0004b3d9) main_mobtv_programe_curr_pane_t1

0x9150,	// (0x0004b3e7) main_mobtv_programe_curr_pane_t2

0x0001,

0xfae1,	// (0x00051d78) main_mobtv_programe_curr_pane_t

0x915e,	// (0x0004b3f5) main_mobtv_programe_next_pane_t1

0x916c,	// (0x0004b403) main_mobtv_programe_next_pane_t2

0x917a,	// (0x0004b411) main_mobtv_programe_next_pane_t3

0x0002,

0xfae6,	// (0x00051d7d) main_mobtv_programe_next_pane_t

0xa634,	// (0x0004c8cb) bg_popup_mobtv_noti_window_pane

0x9188,	// (0x0004b41f) popup_mobtv_noti_window_g1

0x9190,	// (0x0004b427) popup_mobtv_noti_window_t1

0x919e,	// (0x0004b435) popup_mobtv_noti_window_t2

0x0001,

0xfaed,	// (0x00051d84) popup_mobtv_noti_window_t

0xe896,	// (0x00050b2d) bg_popup_mobtv_noti_window_pane_g1

0xa634,	// (0x0004c8cb) sc_clock_pane

0xa634,	// (0x0004c8cb) main_fs_bigclock_pane

0x81b8,	// (0x0004a44f) blid2_tripm_pane_t4_ParamLimits

0x81b8,	// (0x0004a44f) blid2_tripm_pane_t4

0x91ac,	// (0x0004b443) sc_clock_pane_g1_ParamLimits

0x91ac,	// (0x0004b443) sc_clock_pane_g1

0x91be,	// (0x0004b455) sc_clock_pane_t1_ParamLimits

0x91be,	// (0x0004b455) sc_clock_pane_t1

0x91e2,	// (0x0004b479) sc_clock_pane_t2_ParamLimits

0x91e2,	// (0x0004b479) sc_clock_pane_t2

0x91fa,	// (0x0004b491) sc_clock_pane_t3_ParamLimits

0x91fa,	// (0x0004b491) sc_clock_pane_t3

0x0004,

0xfaf2,	// (0x00051d89) sc_clock_pane_t_ParamLimits

0xfaf2,	// (0x00051d89) sc_clock_pane_t

0x9e3b,	// (0x0004c0d2) main_fs_bigclock_indicator_pane_ParamLimits

0x9e3b,	// (0x0004c0d2) main_fs_bigclock_indicator_pane

0xea96,	// (0x00050d2d) main_fs_bigclock_pane_g1_ParamLimits

0xea96,	// (0x00050d2d) main_fs_bigclock_pane_g1

0x9e47,	// (0x0004c0de) main_fs_bigclock_pane_t1_ParamLimits

0x9e47,	// (0x0004c0de) main_fs_bigclock_pane_t1

0x9e59,	// (0x0004c0f0) main_fs_bigclock_pane_t2_ParamLimits

0x9e59,	// (0x0004c0f0) main_fs_bigclock_pane_t2

0x9e6d,	// (0x0004c104) main_fs_bigclock_pane_t3_ParamLimits

0x9e6d,	// (0x0004c104) main_fs_bigclock_pane_t3

0x0002,

0xfcf1,	// (0x00051f88) main_fs_bigclock_pane_t_ParamLimits

0xfcf1,	// (0x00051f88) main_fs_bigclock_pane_t

0xbb1b,	// (0x0004ddb2) main_fs_bigclock_indicator_pane_g1

0x8c05,	// (0x0004ae9c) ncim_query_content_pane_g2_ParamLimits

0x8c05,	// (0x0004ae9c) ncim_query_content_pane_g2

0x0001,

0xfa84,	// (0x00051d1b) ncim_query_content_pane_g_ParamLimits

0xfa84,	// (0x00051d1b) ncim_query_content_pane_g

0x920f,	// (0x0004b4a6) sc_clock_pane_t4_ParamLimits

0x920f,	// (0x0004b4a6) sc_clock_pane_t4

0xa6ad,	// (0x0004c944) main_radioblah_pane

0x6809,	// (0x00048aa0) cell_call4_button_pane_t1_copy1_ParamLimits

0x6809,	// (0x00048aa0) cell_call4_button_pane_t1_copy1

0x8aea,	// (0x0004ad81) main_ncimui_pane_t1_ParamLimits

0x8aea,	// (0x0004ad81) main_ncimui_pane_t1

0x8b04,	// (0x0004ad9b) main_ncimui_pane_t2_ParamLimits

0x8b04,	// (0x0004ad9b) main_ncimui_pane_t2

0x0002,

0xfa7d,	// (0x00051d14) main_ncimui_pane_t_ParamLimits

0xfa7d,	// (0x00051d14) main_ncimui_pane_t

0x93d5,	// (0x0004b66c) main_radioblah_anim_pane_ParamLimits

0x93d5,	// (0x0004b66c) main_radioblah_anim_pane

0x93e6,	// (0x0004b67d) main_radioblah_info_pane_ParamLimits

0x93e6,	// (0x0004b67d) main_radioblah_info_pane

0x940c,	// (0x0004b6a3) main_radioblah_pane_t1_ParamLimits

0x940c,	// (0x0004b6a3) main_radioblah_pane_t1

0x9428,	// (0x0004b6bf) main_radioblah_pane_t2_ParamLimits

0x9428,	// (0x0004b6bf) main_radioblah_pane_t2

0x0003,

0xfb13,	// (0x00051daa) main_radioblah_pane_t_ParamLimits

0xfb13,	// (0x00051daa) main_radioblah_pane_t

0x9470,	// (0x0004b707) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9470,	// (0x0004b707) main_radioblah_rocker_ctrl_pane

0x94c8,	// (0x0004b75f) main_radioblah_info_pane_t1_ParamLimits

0x94c8,	// (0x0004b75f) main_radioblah_info_pane_t1

0x9502,	// (0x0004b799) main_radioblah_info_pane_t2_ParamLimits

0x9502,	// (0x0004b799) main_radioblah_info_pane_t2

0x0003,

0xfb1c,	// (0x00051db3) main_radioblah_info_pane_t_ParamLimits

0xfb1c,	// (0x00051db3) main_radioblah_info_pane_t

0xe896,	// (0x00050b2d) main_radioblah_rocker_ctrl_pane_g1

0x95b2,	// (0x0004b849) main_radioblah_rocker_ctrl_pane_g2

0x95ba,	// (0x0004b851) main_radioblah_rocker_ctrl_pane_g3

0x95c2,	// (0x0004b859) main_radioblah_rocker_ctrl_pane_g4

0x95ca,	// (0x0004b861) main_radioblah_rocker_ctrl_pane_g5

0x95d2,	// (0x0004b869) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb25,	// (0x00051dbc) main_radioblah_rocker_ctrl_pane_g

0x86e7,	// (0x0004a97e) main_cset_text2_pane_t1_copy1_ParamLimits

0xae92,	// (0x0004d129) cam4_image_uncrop_qvga_pane

0xaeeb,	// (0x0004d182) vid4_image_uncrop_qcif_pane

0xb180,	// (0x0004d417) cam6_image_uncrop_qvga_pane_ParamLimits

0xb180,	// (0x0004d417) cam6_image_uncrop_qvga_pane

0x859f,	// (0x0004a836) vid6_image_uncrop_qcif_pane_ParamLimits

0x859f,	// (0x0004a836) vid6_image_uncrop_qcif_pane

0xa634,	// (0x0004c8cb) bg_popup_preview_window_pane_cp03

0x8ab2,	// (0x0004ad49) list_cset_text2_pane

0x8aba,	// (0x0004ad51) main_cset6_text2_pane_g1

0x8ac2,	// (0x0004ad59) main_cset6_text2_pane_t1

0x95da,	// (0x0004b871) list_cset_text2_pane_t1_ParamLimits

0x95da,	// (0x0004b871) list_cset_text2_pane_t1

0xa6ad,	// (0x0004c944) main_radioblah_pane_ParamLimits

0x90a1,	// (0x0004b338) main_mobtv_info_pane_t3_ParamLimits

0x90a1,	// (0x0004b338) main_mobtv_info_pane_t3

0x93fa,	// (0x0004b691) main_radioblah_pane_g1

0x9498,	// (0x0004b72f) main_radioblah_info_pane_g1

0x9557,	// (0x0004b7ee) main_radioblah_info_pane_t3_ParamLimits

0x9557,	// (0x0004b7ee) main_radioblah_info_pane_t3

0x2fdb,	// (0x00045272) highlight_cell_cale_month_pane_ParamLimits

0x2fdb,	// (0x00045272) highlight_cell_cale_month_pane

0xa634,	// (0x0004c8cb) main_phob_fisheye_pane

0xeba8,	// (0x00050e3f) scroll_pane_cp0031_ParamLimits

0xeba8,	// (0x00050e3f) scroll_pane_cp0031

0x86d8,	// (0x0004a96f) wait_bar_pane_cp08_ParamLimits

0x8791,	// (0x0004aa28) cset_list_set_pane_copy1_ParamLimits

0x95f4,	// (0x0004b88b) highlight_cell_cale_month_pane_g1

0x95fc,	// (0x0004b893) highlight_cell_cale_month_pane_t1

0x7df0,	// (0x0004a087) list_gen_pane_cp01

0x71fd,	// (0x00049494) scroll_pane_01

0x960a,	// (0x0004b8a1) list_single_double_fisheye_pane

0x0f12,	// (0x000431a9) list_double_fisheye_pane_g1_ParamLimits

0x0f12,	// (0x000431a9) list_double_fisheye_pane_g1

0x0f1e,	// (0x000431b5) list_double_fisheye_pane_g2_ParamLimits

0x0f1e,	// (0x000431b5) list_double_fisheye_pane_g2

0x9613,	// (0x0004b8aa) list_double_fisheye_pane_g3_ParamLimits

0x9613,	// (0x0004b8aa) list_double_fisheye_pane_g3

0x0004,

0xfb32,	// (0x00051dc9) list_double_fisheye_pane_g_ParamLimits

0xfb32,	// (0x00051dc9) list_double_fisheye_pane_g

0x0f4f,	// (0x000431e6) list_double_fisheye_pane_t1_ParamLimits

0x0f4f,	// (0x000431e6) list_double_fisheye_pane_t1

0x0f6a,	// (0x00043201) list_double_fisheye_pane_t2_ParamLimits

0x0f6a,	// (0x00043201) list_double_fisheye_pane_t2

0x0001,

0xfb3d,	// (0x00051dd4) list_double_fisheye_pane_t_ParamLimits

0xfb3d,	// (0x00051dd4) list_double_fisheye_pane_t

0xa634,	// (0x0004c8cb) main_call5_pane

0x923a,	// (0x0004b4d1) sc_swipe_pane_ParamLimits

0x923a,	// (0x0004b4d1) sc_swipe_pane

0x9632,	// (0x0004b8c9) call5_image_pane_ParamLimits

0x9632,	// (0x0004b8c9) call5_image_pane

0x964f,	// (0x0004b8e6) call5_swipe_1_pane_ParamLimits

0x964f,	// (0x0004b8e6) call5_swipe_1_pane

0x9662,	// (0x0004b8f9) call5_swipe_2_pane_ParamLimits

0x9662,	// (0x0004b8f9) call5_swipe_2_pane

0x968f,	// (0x0004b926) popup_call5_audio_first_window_ParamLimits

0x968f,	// (0x0004b926) popup_call5_audio_first_window

0xeac6,	// (0x00050d5d) call5_swipe_1_pane_g1_ParamLimits

0xeac6,	// (0x00050d5d) call5_swipe_1_pane_g1

0x96a4,	// (0x0004b93b) call5_swipe_1_pane_g2_ParamLimits

0x96a4,	// (0x0004b93b) call5_swipe_1_pane_g2

0x0001,

0xfb42,	// (0x00051dd9) call5_swipe_1_pane_g_ParamLimits

0xfb42,	// (0x00051dd9) call5_swipe_1_pane_g

0x96b0,	// (0x0004b947) call5_swipe_1_pane_t1_ParamLimits

0x96b0,	// (0x0004b947) call5_swipe_1_pane_t1

0xeac6,	// (0x00050d5d) call5_swipe_2_pane_g1_ParamLimits

0xeac6,	// (0x00050d5d) call5_swipe_2_pane_g1

0x96c5,	// (0x0004b95c) call5_swipe_2_pane_g2_ParamLimits

0x96c5,	// (0x0004b95c) call5_swipe_2_pane_g2

0x0001,

0xfb47,	// (0x00051dde) call5_swipe_2_pane_g_ParamLimits

0xfb47,	// (0x00051dde) call5_swipe_2_pane_g

0x96d1,	// (0x0004b968) call5_swipe_2_pane_t1_ParamLimits

0x96d1,	// (0x0004b968) call5_swipe_2_pane_t1

0x96e6,	// (0x0004b97d) sc_swipe_pane_g1_ParamLimits

0x96e6,	// (0x0004b97d) sc_swipe_pane_g1

0x96f3,	// (0x0004b98a) sc_swipe_pane_g2_ParamLimits

0x96f3,	// (0x0004b98a) sc_swipe_pane_g2

0x0001,

0xfb4c,	// (0x00051de3) sc_swipe_pane_g_ParamLimits

0xfb4c,	// (0x00051de3) sc_swipe_pane_g

0x96ff,	// (0x0004b996) sc_swipe_pane_t1_ParamLimits

0x96ff,	// (0x0004b996) sc_swipe_pane_t1

0xa634,	// (0x0004c8cb) main_cmail_launcher_pane

0x9714,	// (0x0004b9ab) aid_size_cell_cmail_l_ParamLimits

0x9714,	// (0x0004b9ab) aid_size_cell_cmail_l

0x972e,	// (0x0004b9c5) grid_cmail_l_pane_ParamLimits

0x972e,	// (0x0004b9c5) grid_cmail_l_pane

0x974a,	// (0x0004b9e1) cell_cmail_l_pane_ParamLimits

0x974a,	// (0x0004b9e1) cell_cmail_l_pane

0x9772,	// (0x0004ba09) cell_cmail_l_pane_g1_ParamLimits

0x9772,	// (0x0004ba09) cell_cmail_l_pane_g1

0x977e,	// (0x0004ba15) cell_cmail_l_pane_t1_ParamLimits

0x977e,	// (0x0004ba15) cell_cmail_l_pane_t1

0x9794,	// (0x0004ba2b) cell_cmail_l_pane_t2_ParamLimits

0x9794,	// (0x0004ba2b) cell_cmail_l_pane_t2

0x0001,

0xfb51,	// (0x00051de8) cell_cmail_l_pane_t_ParamLimits

0xfb51,	// (0x00051de8) cell_cmail_l_pane_t

0xa6ad,	// (0x0004c944) grid_highlight_pane_cp018_ParamLimits

0xa6ad,	// (0x0004c944) grid_highlight_pane_cp018

0x1627,	// (0x000438be) main2_pane_ParamLimits

0x1627,	// (0x000438be) main2_pane

0xc63b,	// (0x0004e8d2) popup_sp_fs_action_menu_bg_pane_g1

0xc643,	// (0x0004e8da) popup_sp_fs_action_menu_bg_pane_g2

0xc64b,	// (0x0004e8e2) popup_sp_fs_action_menu_bg_pane_g3

0xc653,	// (0x0004e8ea) popup_sp_fs_action_menu_bg_pane_g4

0xc65b,	// (0x0004e8f2) popup_sp_fs_action_menu_bg_pane_g5

0xc663,	// (0x0004e8fa) popup_sp_fs_action_menu_bg_pane_g6

0xc66b,	// (0x0004e902) popup_sp_fs_action_menu_bg_pane_g7

0xc673,	// (0x0004e90a) popup_sp_fs_action_menu_bg_pane_g8

0xc67b,	// (0x0004e912) popup_sp_fs_action_menu_bg_pane_g9

0xc683,	// (0x0004e91a) popup_sp_fs_action_menu_bg_pane_g10

0xc683,	// (0x0004e91a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00051443) popup_sp_fs_action_menu_bg_pane_g

0xa8a7,	// (0x0004cb3e) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa8a7,	// (0x0004cb3e) list_medium_line_x2_t3_g3_g1

0xa8b3,	// (0x0004cb4a) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa8b3,	// (0x0004cb4a) list_medium_line_x2_t3_g3_g2

0xa8bf,	// (0x0004cb56) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa8bf,	// (0x0004cb56) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x000514f3) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x000514f3) list_medium_line_x2_t3_g3_g

0xa8cb,	// (0x0004cb62) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa8cb,	// (0x0004cb62) list_medium_line_x2_t3_g3_t1

0x0ad1,	// (0x00042d68) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0ad1,	// (0x00042d68) list_medium_line_x2_t3_g3_t2

0xa8e0,	// (0x0004cb77) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa8e0,	// (0x0004cb77) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x000514fa) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x000514fa) list_medium_line_x2_t3_g3_t

0xa8a7,	// (0x0004cb3e) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa8a7,	// (0x0004cb3e) list_medium_line_x2_t3_g2_g1

0xa8bf,	// (0x0004cb56) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa8bf,	// (0x0004cb56) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00051501) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00051501) list_medium_line_x2_t3_g2_g

0xa8f5,	// (0x0004cb8c) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa8f5,	// (0x0004cb8c) list_medium_line_x2_t3_g2_t1

0xa90b,	// (0x0004cba2) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa90b,	// (0x0004cba2) list_medium_line_x2_t3_g2_t2

0xa91d,	// (0x0004cbb4) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa91d,	// (0x0004cbb4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00051506) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00051506) list_medium_line_x2_t3_g2_t

0xa8a7,	// (0x0004cb3e) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa8a7,	// (0x0004cb3e) list_medium_line_x2_t4_g4_g1

0xa93b,	// (0x0004cbd2) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa93b,	// (0x0004cbd2) list_medium_line_x2_t4_g4_g2

0xa8b3,	// (0x0004cb4a) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa8b3,	// (0x0004cb4a) list_medium_line_x2_t4_g4_g3

0xa947,	// (0x0004cbde) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa947,	// (0x0004cbde) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0005150d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0005150d) list_medium_line_x2_t4_g4_g

0x0ae5,	// (0x00042d7c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0ae5,	// (0x00042d7c) list_medium_line_x2_t4_g4_t1

0x0aff,	// (0x00042d96) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0aff,	// (0x00042d96) list_medium_line_x2_t4_g4_t2

0x0b15,	// (0x00042dac) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0b15,	// (0x00042dac) list_medium_line_x2_t4_g4_t3

0xa953,	// (0x0004cbea) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa953,	// (0x0004cbea) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00051516) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00051516) list_medium_line_x2_t4_g4_t

0xa8a7,	// (0x0004cb3e) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa8a7,	// (0x0004cb3e) list_medium_line_x2_t2_g4_g1

0xa93b,	// (0x0004cbd2) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa93b,	// (0x0004cbd2) list_medium_line_x2_t2_g4_g2

0xa8b3,	// (0x0004cb4a) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa8b3,	// (0x0004cb4a) list_medium_line_x2_t2_g4_g3

0xa8bf,	// (0x0004cb56) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa8bf,	// (0x0004cb56) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0005157d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0005157d) list_medium_line_x2_t2_g4_g

0xa965,	// (0x0004cbfc) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa965,	// (0x0004cbfc) list_medium_line_x2_t2_g4_t1

0xa8e0,	// (0x0004cb77) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa8e0,	// (0x0004cb77) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00051586) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00051586) list_medium_line_x2_t2_g4_t

0xa8a7,	// (0x0004cb3e) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa8a7,	// (0x0004cb3e) list_medium_line_x2_t2_g3_g1

0xa8b3,	// (0x0004cb4a) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa8b3,	// (0x0004cb4a) list_medium_line_x2_t2_g3_g2

0xa8bf,	// (0x0004cb56) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa8bf,	// (0x0004cb56) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x000514f3) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x000514f3) list_medium_line_x2_t2_g3_g

0xa97a,	// (0x0004cc11) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa97a,	// (0x0004cc11) list_medium_line_x2_t2_g3_t1

0xa8e0,	// (0x0004cb77) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa8e0,	// (0x0004cb77) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0005158b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0005158b) list_medium_line_x2_t2_g3_t

0x31b4,	// (0x0004544b) main_sp_fs_list_pane_ParamLimits

0x31b4,	// (0x0004544b) main_sp_fs_list_pane

0x31c0,	// (0x00045457) sp_fs_scroll_pane_ParamLimits

0x31c0,	// (0x00045457) sp_fs_scroll_pane

0x0b2a,	// (0x00042dc1) list_medium_line_x2_t3_t1

0x0b3a,	// (0x00042dd1) list_medium_line_x2_t3_t2

0xa9bd,	// (0x0004cc54) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x000515d6) list_medium_line_x2_t3_t

0x0b48,	// (0x00042ddf) list_medium_line_x3_t4_t1

0x0b58,	// (0x00042def) list_medium_line_x3_t4_t2

0xa9cb,	// (0x0004cc62) list_medium_line_x3_t4_t3

0xa9bd,	// (0x0004cc54) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x000515dd) list_medium_line_x3_t4_t

0x0b66,	// (0x00042dfd) list_medium_line_x4_t5_t1

0x0b76,	// (0x00042e0d) list_medium_line_x4_t5_t2

0xa9cb,	// (0x0004cc62) list_medium_line_x4_t5_t3

0xa9d9,	// (0x0004cc70) list_medium_line_x4_t5_t4

0xa9bd,	// (0x0004cc54) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x000515e6) list_medium_line_x4_t5_t

0xa8a7,	// (0x0004cb3e) list_medium_line_t4_g4_g1_ParamLimits

0xa8a7,	// (0x0004cb3e) list_medium_line_t4_g4_g1

0xa947,	// (0x0004cbde) list_medium_line_t4_g4_g2_ParamLimits

0xa947,	// (0x0004cbde) list_medium_line_t4_g4_g2

0xa9e7,	// (0x0004cc7e) list_medium_line_t4_g4_g3_ParamLimits

0xa9e7,	// (0x0004cc7e) list_medium_line_t4_g4_g3

0xa8bf,	// (0x0004cb56) list_medium_line_t4_g4_g4_ParamLimits

0xa8bf,	// (0x0004cb56) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x000515f1) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x000515f1) list_medium_line_t4_g4_g

0xa9f3,	// (0x0004cc8a) list_medium_line_t4_g4_t1_ParamLimits

0xa9f3,	// (0x0004cc8a) list_medium_line_t4_g4_t1

0xaa08,	// (0x0004cc9f) list_medium_line_t4_g4_t2_ParamLimits

0xaa08,	// (0x0004cc9f) list_medium_line_t4_g4_t2

0xaa1e,	// (0x0004ccb5) list_medium_line_t4_g4_t3_ParamLimits

0xaa1e,	// (0x0004ccb5) list_medium_line_t4_g4_t3

0xa8e0,	// (0x0004cb77) list_medium_line_t4_g4_t4_ParamLimits

0xa8e0,	// (0x0004cb77) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x000515fa) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x000515fa) list_medium_line_t4_g4_t

0x3292,	// (0x00045529) chi_dic_find_pane_g1

0x441d,	// (0x000466b4) main_tport_pane

0xaf88,	// (0x0004d21f) list_medium_line_plain_t1

0xafd2,	// (0x0004d269) list_medium_line_t2_g2_g1_ParamLimits

0xafd2,	// (0x0004d269) list_medium_line_t2_g2_g1

0xafde,	// (0x0004d275) list_medium_line_t2_g2_g2_ParamLimits

0xafde,	// (0x0004d275) list_medium_line_t2_g2_g2

0x0001,

0xf893,	// (0x00051b2a) list_medium_line_t2_g2_g_ParamLimits

0xf893,	// (0x00051b2a) list_medium_line_t2_g2_g

0x0d4f,	// (0x00042fe6) list_medium_line_t2_g2_t1_ParamLimits

0x0d4f,	// (0x00042fe6) list_medium_line_t2_g2_t1

0x0d66,	// (0x00042ffd) list_medium_line_t2_g2_t2_ParamLimits

0x0d66,	// (0x00042ffd) list_medium_line_t2_g2_t2

0x0001,

0xf898,	// (0x00051b2f) list_medium_line_t2_g2_t_ParamLimits

0xf898,	// (0x00051b2f) list_medium_line_t2_g2_t

0xb126,	// (0x0004d3bd) aid_sp_fs_list_icon_a_sm

0xb12e,	// (0x0004d3c5) aid_sp_fs_list_icon_d

0xb136,	// (0x0004d3cd) aid_sp_fs_text_primary

0xb13f,	// (0x0004d3d6) aid_sp_fs_text_secondary

0xb148,	// (0x0004d3df) list_medium_line

0xb148,	// (0x0004d3df) list_medium_line_g2

0xb148,	// (0x0004d3df) list_medium_line_g3

0xb148,	// (0x0004d3df) list_medium_line_plain

0xb148,	// (0x0004d3df) list_medium_line_plain_t2

0xb148,	// (0x0004d3df) list_medium_line_plain_t3

0xb148,	// (0x0004d3df) list_medium_line_right_icon

0xb148,	// (0x0004d3df) list_medium_line_right_iconx2

0xb148,	// (0x0004d3df) list_medium_line_t2

0xb148,	// (0x0004d3df) list_medium_line_t2_g2

0xb148,	// (0x0004d3df) list_medium_line_t2_g3

0xb148,	// (0x0004d3df) list_medium_line_t2_right_icon

0xb148,	// (0x0004d3df) list_medium_line_t2_right_iconx2

0xb148,	// (0x0004d3df) list_medium_line_t3

0xb148,	// (0x0004d3df) list_medium_line_t3_g2

0xb148,	// (0x0004d3df) list_medium_line_t3_g3

0xb148,	// (0x0004d3df) list_medium_line_t3_right_iconx2

0xb151,	// (0x0004d3e8) list_medium_line_t4_g4

0xb15a,	// (0x0004d3f1) list_medium_line_x2

0xb15a,	// (0x0004d3f1) list_medium_line_x2_t2_g2

0xb15a,	// (0x0004d3f1) list_medium_line_x2_t2_g3

0xb15a,	// (0x0004d3f1) list_medium_line_x2_t2_g4

0xb15a,	// (0x0004d3f1) list_medium_line_x2_t3

0xb15a,	// (0x0004d3f1) list_medium_line_x2_t3_g2

0xb15a,	// (0x0004d3f1) list_medium_line_x2_t3_g3

0xb15a,	// (0x0004d3f1) list_medium_line_x2_t3_g4

0xb15a,	// (0x0004d3f1) list_medium_line_x2_t4_g2

0xb15a,	// (0x0004d3f1) list_medium_line_x2_t4_g4

0xb163,	// (0x0004d3fa) list_medium_line_x3

0xb163,	// (0x0004d3fa) list_medium_line_x3_t4

0xb163,	// (0x0004d3fa) list_medium_line_x3_t4_g4

0xb151,	// (0x0004d3e8) list_medium_line_x4_t4

0xb151,	// (0x0004d3e8) list_medium_line_x4_t4_g7

0xb151,	// (0x0004d3e8) list_medium_line_x4_t5

0xb16c,	// (0x0004d403) list_single_fs_dyc_pane_ParamLimits

0xb16c,	// (0x0004d403) list_single_fs_dyc_pane

0xa8a7,	// (0x0004cb3e) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa8a7,	// (0x0004cb3e) list_medium_line_x4_t4_g7_g1

0xb19d,	// (0x0004d434) list_medium_line_x4_t4_g7_g2_ParamLimits

0xb19d,	// (0x0004d434) list_medium_line_x4_t4_g7_g2

0xb1a9,	// (0x0004d440) list_medium_line_x4_t4_g7_g3_ParamLimits

0xb1a9,	// (0x0004d440) list_medium_line_x4_t4_g7_g3

0xb1b8,	// (0x0004d44f) list_medium_line_x4_t4_g7_g4_ParamLimits

0xb1b8,	// (0x0004d44f) list_medium_line_x4_t4_g7_g4

0xb1c4,	// (0x0004d45b) list_medium_line_x4_t4_g7_g5_ParamLimits

0xb1c4,	// (0x0004d45b) list_medium_line_x4_t4_g7_g5

0xb1d3,	// (0x0004d46a) list_medium_line_x4_t4_g7_g6_ParamLimits

0xb1d3,	// (0x0004d46a) list_medium_line_x4_t4_g7_g6

0xb1e2,	// (0x0004d479) list_medium_line_x4_t4_g7_g7_ParamLimits

0xb1e2,	// (0x0004d479) list_medium_line_x4_t4_g7_g7

0x0006,

0xfa63,	// (0x00051cfa) list_medium_line_x4_t4_g7_g_ParamLimits

0xfa63,	// (0x00051cfa) list_medium_line_x4_t4_g7_g

0xb1ee,	// (0x0004d485) list_medium_line_x4_t4_g7_t1_ParamLimits

0xb1ee,	// (0x0004d485) list_medium_line_x4_t4_g7_t1

0xb203,	// (0x0004d49a) list_medium_line_x4_t4_g7_t2_ParamLimits

0xb203,	// (0x0004d49a) list_medium_line_x4_t4_g7_t2

0xb218,	// (0x0004d4af) list_medium_line_x4_t4_g7_t3_ParamLimits

0xb218,	// (0x0004d4af) list_medium_line_x4_t4_g7_t3

0xb22d,	// (0x0004d4c4) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb22d,	// (0x0004d4c4) list_medium_line_x4_t4_g7_t4

0xb23f,	// (0x0004d4d6) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb23f,	// (0x0004d4d6) list_medium_line_x4_t4_g7_t5

0x0004,

0xfa72,	// (0x00051d09) list_medium_line_x4_t4_g7_t_ParamLimits

0xfa72,	// (0x00051d09) list_medium_line_x4_t4_g7_t

0xb251,	// (0x0004d4e8) list_single_dyc_row_pane_ParamLimits

0xb251,	// (0x0004d4e8) list_single_dyc_row_pane

0x961f,	// (0x0004b8b6) call5_gesture_pane_ParamLimits

0x961f,	// (0x0004b8b6) call5_gesture_pane

0x9675,	// (0x0004b90c) call5_windows_pane_ParamLimits

0x9675,	// (0x0004b90c) call5_windows_pane

0x97a6,	// (0x0004ba3d) call5_swipe_1_pane_cp_ParamLimits

0x97a6,	// (0x0004ba3d) call5_swipe_1_pane_cp

0x97b2,	// (0x0004ba49) call5_swipe_2_pane_cp_ParamLimits

0x97b2,	// (0x0004ba49) call5_swipe_2_pane_cp

0xcfe4,	// (0x0004f27b) call5_image_pane_cp

0x97be,	// (0x0004ba55) popup_call5_audio_first_window_cp_ParamLimits

0x97be,	// (0x0004ba55) popup_call5_audio_first_window_cp

0x96e6,	// (0x0004b97d) call5_swipe_1_pane_g1_cp_ParamLimits

0x96e6,	// (0x0004b97d) call5_swipe_1_pane_g1_cp

0x97cc,	// (0x0004ba63) call5_swipe_1_pane_g2_cp

0x96ff,	// (0x0004b996) call5_swipe_1_pane_t1_cp_ParamLimits

0x96ff,	// (0x0004b996) call5_swipe_1_pane_t1_cp

0x96e6,	// (0x0004b97d) call5_swipe_2_pane_g1_cp_ParamLimits

0x96e6,	// (0x0004b97d) call5_swipe_2_pane_g1_cp

0x97d4,	// (0x0004ba6b) call5_swipe_2_pane_g2_cp

0x97dc,	// (0x0004ba73) call5_swipe_2_pane_t1_cp_ParamLimits

0x97dc,	// (0x0004ba73) call5_swipe_2_pane_t1_cp

0xa6ad,	// (0x0004c944) main_sp_fs_email_pane

0x97f1,	// (0x0004ba88) main_sp_fs_listscroll_pane_te

0xb26e,	// (0x0004d505) popup_sp_fs_action_menu_pane_ParamLimits

0xb26e,	// (0x0004d505) popup_sp_fs_action_menu_pane

0xe896,	// (0x00050b2d) bg_sp_fs_ctrlbar_pane_g1

0x97fa,	// (0x0004ba91) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x9803,	// (0x0004ba9a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x980c,	// (0x0004baa3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe896,	// (0x00050b2d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfb56,	// (0x00051ded) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe66d,	// (0x00050904) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe66d,	// (0x00050904) bg_sp_fs_ctrlbar_ddmenu_pane

0x9815,	// (0x0004baac) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x9815,	// (0x0004baac) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x9821,	// (0x0004bab8) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x9821,	// (0x0004bab8) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfb5f,	// (0x00051df6) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfb5f,	// (0x00051df6) main_sp_fs_ctrlbar_ddmenu_pane_g

0x982d,	// (0x0004bac4) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x982d,	// (0x0004bac4) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xb2b4,	// (0x0004d54b) list_medium_line_t2_right_icon_g1

0x0f8c,	// (0x00043223) list_medium_line_t2_right_icon_t1

0x0f9c,	// (0x00043233) list_medium_line_t2_right_icon_t2

0x0001,

0xfb64,	// (0x00051dfb) list_medium_line_t2_right_icon_t

0xe413,	// (0x000506aa) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe413,	// (0x000506aa) bg_sp_fs_ctrlbar_pane

0x98c9,	// (0x0004bb60) main_sp_fs_ctrlbar_button_pane_cp01

0x98d3,	// (0x0004bb6a) main_sp_fs_ctrlbar_ddmenu_pane

0x98dd,	// (0x0004bb74) main_sp_fs_ctrlbar_pane_g1

0x98e9,	// (0x0004bb80) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfb69,	// (0x00051e00) main_sp_fs_ctrlbar_pane_g

0x98f5,	// (0x0004bb8c) main_sp_fs_ctrlbar_pane_t1

0x0fae,	// (0x00043245) main_sp_fs_ctrlbar_pane

0x0fd2,	// (0x00043269) main_sp_fs_listscroll_pane_te_cp01

0x0ff2,	// (0x00043289) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0ff2,	// (0x00043289) popup_sp_fs_action_menu_pane_cp01

0xa6ad,	// (0x0004c944) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa6ad,	// (0x0004c944) bg_sp_fs_highlight_list_pane_cp01

0xb2bc,	// (0x0004d553) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xb2bc,	// (0x0004d553) sp_fs_action_menu_list_gene_pane_g1

0x990a,	// (0x0004bba1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x990a,	// (0x0004bba1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfb6e,	// (0x00051e05) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfb6e,	// (0x00051e05) sp_fs_action_menu_list_gene_pane_g

0xb2cb,	// (0x0004d562) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xb2cb,	// (0x0004d562) sp_fs_action_menu_list_gene_pane_t1

0xb2e3,	// (0x0004d57a) sp_fs_action_menu_list_gene_pane_ParamLimits

0xb2e3,	// (0x0004d57a) sp_fs_action_menu_list_gene_pane

0xb306,	// (0x0004d59d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xb306,	// (0x0004d59d) popup_sp_fs_action_menu_bg_pane

0xb314,	// (0x0004d5ab) sp_fs_action_menu_list_pane_ParamLimits

0xb314,	// (0x0004d5ab) sp_fs_action_menu_list_pane

0xb338,	// (0x0004d5cf) sp_fs_scroll_pane_cp01_ParamLimits

0xb338,	// (0x0004d5cf) sp_fs_scroll_pane_cp01

0x100e,	// (0x000432a5) list_medium_line_plain_t2_t1

0x101e,	// (0x000432b5) list_medium_line_plain_t2_t2

0x0001,

0xfb73,	// (0x00051e0a) list_medium_line_plain_t2_t

0x102e,	// (0x000432c5) list_medium_line_plain_t3_t1

0x103e,	// (0x000432d5) list_medium_line_plain_t3_t2

0x104c,	// (0x000432e3) list_medium_line_plain_t3_t3

0x0002,

0xfb78,	// (0x00051e0f) list_medium_line_plain_t3_t

0xa8a7,	// (0x0004cb3e) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa8a7,	// (0x0004cb3e) list_medium_line_x2_t2_g2_g1

0xa8bf,	// (0x0004cb56) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa8bf,	// (0x0004cb56) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00051501) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00051501) list_medium_line_x2_t2_g2_g

0xa9f3,	// (0x0004cc8a) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa9f3,	// (0x0004cc8a) list_medium_line_x2_t2_g2_t1

0xa8e0,	// (0x0004cb77) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa8e0,	// (0x0004cb77) list_medium_line_x2_t2_g2_t2

0x0001,

0xfb7f,	// (0x00051e16) list_medium_line_x2_t2_g2_t_ParamLimits

0xfb7f,	// (0x00051e16) list_medium_line_x2_t2_g2_t

0xa8a7,	// (0x0004cb3e) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa8a7,	// (0x0004cb3e) list_medium_line_x2_t4_g2_g1

0xb35e,	// (0x0004d5f5) list_medium_line_x2_t4_g2_g2_ParamLimits

0xb35e,	// (0x0004d5f5) list_medium_line_x2_t4_g2_g2

0x0001,

0xfb84,	// (0x00051e1b) list_medium_line_x2_t4_g2_g_ParamLimits

0xfb84,	// (0x00051e1b) list_medium_line_x2_t4_g2_g

0x105a,	// (0x000432f1) list_medium_line_x2_t4_g2_t1_ParamLimits

0x105a,	// (0x000432f1) list_medium_line_x2_t4_g2_t1

0x1074,	// (0x0004330b) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1074,	// (0x0004330b) list_medium_line_x2_t4_g2_t2

0x108a,	// (0x00043321) list_medium_line_x2_t4_g2_t3_ParamLimits

0x108a,	// (0x00043321) list_medium_line_x2_t4_g2_t3

0xa8e0,	// (0x0004cb77) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa8e0,	// (0x0004cb77) list_medium_line_x2_t4_g2_t4

0x0003,

0xfb89,	// (0x00051e20) list_medium_line_x2_t4_g2_t_ParamLimits

0xfb89,	// (0x00051e20) list_medium_line_x2_t4_g2_t

0xb370,	// (0x0004d607) list_medium_line_t3_right_iconx2_g1

0xb2b4,	// (0x0004d54b) list_medium_line_t3_right_iconx2_g2

0x109f,	// (0x00043336) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfb92,	// (0x00051e29) list_medium_line_t3_right_iconx2_g

0x10a9,	// (0x00043340) list_medium_line_t3_right_iconx2_t1

0x10b9,	// (0x00043350) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfb99,	// (0x00051e30) list_medium_line_t3_right_iconx2_t

0xa8a7,	// (0x0004cb3e) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa8a7,	// (0x0004cb3e) list_medium_line_x3_t4_g4_g1

0xa8b3,	// (0x0004cb4a) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa8b3,	// (0x0004cb4a) list_medium_line_x3_t4_g4_g2

0xa947,	// (0x0004cbde) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa947,	// (0x0004cbde) list_medium_line_x3_t4_g4_g3

0xb378,	// (0x0004d60f) list_medium_line_x3_t4_g4_g4_ParamLimits

0xb378,	// (0x0004d60f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfb9e,	// (0x00051e35) list_medium_line_x3_t4_g4_g_ParamLimits

0xfb9e,	// (0x00051e35) list_medium_line_x3_t4_g4_g

0x10c7,	// (0x0004335e) list_medium_line_x3_t4_g4_t1_ParamLimits

0x10c7,	// (0x0004335e) list_medium_line_x3_t4_g4_t1

0x10de,	// (0x00043375) list_medium_line_x3_t4_g4_t2_ParamLimits

0x10de,	// (0x00043375) list_medium_line_x3_t4_g4_t2

0xb384,	// (0x0004d61b) list_medium_line_x3_t4_g4_t3_ParamLimits

0xb384,	// (0x0004d61b) list_medium_line_x3_t4_g4_t3

0xb399,	// (0x0004d630) list_medium_line_x3_t4_g4_t4_ParamLimits

0xb399,	// (0x0004d630) list_medium_line_x3_t4_g4_t4

0x0003,

0xfba7,	// (0x00051e3e) list_medium_line_x3_t4_g4_t_ParamLimits

0xfba7,	// (0x00051e3e) list_medium_line_x3_t4_g4_t

0x10f9,	// (0x00043390) list_single_dyc_row_text_pane_t1_ParamLimits

0x10f9,	// (0x00043390) list_single_dyc_row_text_pane_t1

0x1142,	// (0x000433d9) list_single_dyc_row_text_pane_t2_ParamLimits

0x1142,	// (0x000433d9) list_single_dyc_row_text_pane_t2

0xb3b6,	// (0x0004d64d) list_single_dyc_row_text_pane_t3_ParamLimits

0xb3b6,	// (0x0004d64d) list_single_dyc_row_text_pane_t3

0x0002,

0xfbb0,	// (0x00051e47) list_single_dyc_row_text_pane_t_ParamLimits

0xfbb0,	// (0x00051e47) list_single_dyc_row_text_pane_t

0xb3c8,	// (0x0004d65f) list_single_dyc_row_pane_g1_ParamLimits

0xb3c8,	// (0x0004d65f) list_single_dyc_row_pane_g1

0xb3d4,	// (0x0004d66b) list_single_dyc_row_pane_g2_ParamLimits

0xb3d4,	// (0x0004d66b) list_single_dyc_row_pane_g2

0xb3e0,	// (0x0004d677) list_single_dyc_row_pane_g3_ParamLimits

0xb3e0,	// (0x0004d677) list_single_dyc_row_pane_g3

0xb3ec,	// (0x0004d683) list_single_dyc_row_pane_g4_ParamLimits

0xb3ec,	// (0x0004d683) list_single_dyc_row_pane_g4

0x0003,

0xfbb7,	// (0x00051e4e) list_single_dyc_row_pane_g_ParamLimits

0xfbb7,	// (0x00051e4e) list_single_dyc_row_pane_g

0xb3f8,	// (0x0004d68f) list_single_dyc_row_text_pane_ParamLimits

0xb3f8,	// (0x0004d68f) list_single_dyc_row_text_pane

0xa634,	// (0x0004c8cb) bg_sp_fs_scroll_pane

0xb417,	// (0x0004d6ae) thumb_sp_fs_scroll_pane

0xafd2,	// (0x0004d269) list_medium_line_g1_ParamLimits

0xafd2,	// (0x0004d269) list_medium_line_g1

0xb420,	// (0x0004d6b7) list_medium_line_t1_ParamLimits

0xb420,	// (0x0004d6b7) list_medium_line_t1

0xa8a7,	// (0x0004cb3e) list_medium_line_x2_g1_ParamLimits

0xa8a7,	// (0x0004cb3e) list_medium_line_x2_g1

0xa8b3,	// (0x0004cb4a) list_medium_line_x2_g2_ParamLimits

0xa8b3,	// (0x0004cb4a) list_medium_line_x2_g2

0x0001,

0xfbc0,	// (0x00051e57) list_medium_line_x2_g_ParamLimits

0xfbc0,	// (0x00051e57) list_medium_line_x2_g

0xb435,	// (0x0004d6cc) list_medium_line_x2_t1_ParamLimits

0xb435,	// (0x0004d6cc) list_medium_line_x2_t1

0xa8a7,	// (0x0004cb3e) list_medium_line_x3_g1_ParamLimits

0xa8a7,	// (0x0004cb3e) list_medium_line_x3_g1

0xa8b3,	// (0x0004cb4a) list_medium_line_x3_g2_ParamLimits

0xa8b3,	// (0x0004cb4a) list_medium_line_x3_g2

0x0001,

0xfbc0,	// (0x00051e57) list_medium_line_x3_g_ParamLimits

0xfbc0,	// (0x00051e57) list_medium_line_x3_g

0xb435,	// (0x0004d6cc) list_medium_line_x3_t1_ParamLimits

0xb435,	// (0x0004d6cc) list_medium_line_x3_t1

0xb44b,	// (0x0004d6e2) thumb_sp_fs_scroll_pane_g1

0xb454,	// (0x0004d6eb) thumb_sp_fs_scroll_pane_g2

0xb45d,	// (0x0004d6f4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbc5,	// (0x00051e5c) thumb_sp_fs_scroll_pane_g

0xb44b,	// (0x0004d6e2) bg_sp_fs_scroll_pane_g1

0xb454,	// (0x0004d6eb) bg_sp_fs_scroll_pane_g2

0xb45d,	// (0x0004d6f4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbc5,	// (0x00051e5c) bg_sp_fs_scroll_pane_g

0xa8a7,	// (0x0004cb3e) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa8a7,	// (0x0004cb3e) list_medium_line_x2_t3_g4_g1

0xa93b,	// (0x0004cbd2) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa93b,	// (0x0004cbd2) list_medium_line_x2_t3_g4_g2

0xa8b3,	// (0x0004cb4a) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa8b3,	// (0x0004cb4a) list_medium_line_x2_t3_g4_g3

0xa8bf,	// (0x0004cb56) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa8bf,	// (0x0004cb56) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0005157d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0005157d) list_medium_line_x2_t3_g4_g

0x119c,	// (0x00043433) list_medium_line_x2_t3_g4_t1_ParamLimits

0x119c,	// (0x00043433) list_medium_line_x2_t3_g4_t1

0x11b2,	// (0x00043449) list_medium_line_x2_t3_g4_t2_ParamLimits

0x11b2,	// (0x00043449) list_medium_line_x2_t3_g4_t2

0xa8e0,	// (0x0004cb77) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa8e0,	// (0x0004cb77) list_medium_line_x2_t3_g4_t3

0x0002,

0xfbcc,	// (0x00051e63) list_medium_line_x2_t3_g4_t_ParamLimits

0xfbcc,	// (0x00051e63) list_medium_line_x2_t3_g4_t

0xafd2,	// (0x0004d269) list_medium_line_g2_g1_ParamLimits

0xafd2,	// (0x0004d269) list_medium_line_g2_g1

0xafde,	// (0x0004d275) list_medium_line_g2_g2_ParamLimits

0xafde,	// (0x0004d275) list_medium_line_g2_g2

0x0001,

0xf893,	// (0x00051b2a) list_medium_line_g2_g_ParamLimits

0xf893,	// (0x00051b2a) list_medium_line_g2_g

0xb466,	// (0x0004d6fd) list_medium_line_g2_t1_ParamLimits

0xb466,	// (0x0004d6fd) list_medium_line_g2_t1

0xafd2,	// (0x0004d269) list_medium_line_t3_g2_g1_ParamLimits

0xafd2,	// (0x0004d269) list_medium_line_t3_g2_g1

0xafde,	// (0x0004d275) list_medium_line_t3_g2_g2_ParamLimits

0xafde,	// (0x0004d275) list_medium_line_t3_g2_g2

0x0001,

0xf893,	// (0x00051b2a) list_medium_line_t3_g2_g_ParamLimits

0xf893,	// (0x00051b2a) list_medium_line_t3_g2_g

0x11cb,	// (0x00043462) list_medium_line_t3_g2_t1_ParamLimits

0x11cb,	// (0x00043462) list_medium_line_t3_g2_t1

0x11e5,	// (0x0004347c) list_medium_line_t3_g2_t2_ParamLimits

0x11e5,	// (0x0004347c) list_medium_line_t3_g2_t2

0x11fb,	// (0x00043492) list_medium_line_t3_g2_t3_ParamLimits

0x11fb,	// (0x00043492) list_medium_line_t3_g2_t3

0x0002,

0xfbd3,	// (0x00051e6a) list_medium_line_t3_g2_t_ParamLimits

0xfbd3,	// (0x00051e6a) list_medium_line_t3_g2_t

0xb2b4,	// (0x0004d54b) list_medium_line_right_icon_g1

0xb47b,	// (0x0004d712) list_medium_line_right_icon_t1

0xafd2,	// (0x0004d269) list_medium_line_t2_g1_ParamLimits

0xafd2,	// (0x0004d269) list_medium_line_t2_g1

0x1212,	// (0x000434a9) list_medium_line_t2_t1_ParamLimits

0x1212,	// (0x000434a9) list_medium_line_t2_t1

0x122c,	// (0x000434c3) list_medium_line_t2_t2_ParamLimits

0x122c,	// (0x000434c3) list_medium_line_t2_t2

0x0001,

0xfbda,	// (0x00051e71) list_medium_line_t2_t_ParamLimits

0xfbda,	// (0x00051e71) list_medium_line_t2_t

0xafd2,	// (0x0004d269) list_medium_line_t3_g1_ParamLimits

0xafd2,	// (0x0004d269) list_medium_line_t3_g1

0x1245,	// (0x000434dc) list_medium_line_t3_t1_ParamLimits

0x1245,	// (0x000434dc) list_medium_line_t3_t1

0x125c,	// (0x000434f3) list_medium_line_t3_t2_ParamLimits

0x125c,	// (0x000434f3) list_medium_line_t3_t2

0x1271,	// (0x00043508) list_medium_line_t3_t3_ParamLimits

0x1271,	// (0x00043508) list_medium_line_t3_t3

0x0002,

0xfbdf,	// (0x00051e76) list_medium_line_t3_t_ParamLimits

0xfbdf,	// (0x00051e76) list_medium_line_t3_t

0xafd2,	// (0x0004d269) list_medium_line_g3_g1_ParamLimits

0xafd2,	// (0x0004d269) list_medium_line_g3_g1

0xb489,	// (0x0004d720) list_medium_line_g3_g2_ParamLimits

0xb489,	// (0x0004d720) list_medium_line_g3_g2

0xafde,	// (0x0004d275) list_medium_line_g3_g3_ParamLimits

0xafde,	// (0x0004d275) list_medium_line_g3_g3

0x0002,

0xfbe6,	// (0x00051e7d) list_medium_line_g3_g_ParamLimits

0xfbe6,	// (0x00051e7d) list_medium_line_g3_g

0xb495,	// (0x0004d72c) list_medium_line_g3_t1_ParamLimits

0xb495,	// (0x0004d72c) list_medium_line_g3_t1

0xafd2,	// (0x0004d269) list_medium_line_t2_g3_g1_ParamLimits

0xafd2,	// (0x0004d269) list_medium_line_t2_g3_g1

0xb489,	// (0x0004d720) list_medium_line_t2_g3_g2_ParamLimits

0xb489,	// (0x0004d720) list_medium_line_t2_g3_g2

0xafde,	// (0x0004d275) list_medium_line_t2_g3_g3_ParamLimits

0xafde,	// (0x0004d275) list_medium_line_t2_g3_g3

0x0002,

0xfbe6,	// (0x00051e7d) list_medium_line_t2_g3_g_ParamLimits

0xfbe6,	// (0x00051e7d) list_medium_line_t2_g3_g

0x1283,	// (0x0004351a) list_medium_line_t2_g3_t1_ParamLimits

0x1283,	// (0x0004351a) list_medium_line_t2_g3_t1

0x129a,	// (0x00043531) list_medium_line_t2_g3_t2_ParamLimits

0x129a,	// (0x00043531) list_medium_line_t2_g3_t2

0x0001,

0xfbed,	// (0x00051e84) list_medium_line_t2_g3_t_ParamLimits

0xfbed,	// (0x00051e84) list_medium_line_t2_g3_t

0xafd2,	// (0x0004d269) list_medium_line_t3_g3_g1_ParamLimits

0xafd2,	// (0x0004d269) list_medium_line_t3_g3_g1

0xb489,	// (0x0004d720) list_medium_line_t3_g3_g2_ParamLimits

0xb489,	// (0x0004d720) list_medium_line_t3_g3_g2

0xafde,	// (0x0004d275) list_medium_line_t3_g3_g3_ParamLimits

0xafde,	// (0x0004d275) list_medium_line_t3_g3_g3

0x0002,

0xfbe6,	// (0x00051e7d) list_medium_line_t3_g3_g_ParamLimits

0xfbe6,	// (0x00051e7d) list_medium_line_t3_g3_g

0x12b3,	// (0x0004354a) list_medium_line_t3_g3_t1_ParamLimits

0x12b3,	// (0x0004354a) list_medium_line_t3_g3_t1

0x12cc,	// (0x00043563) list_medium_line_t3_g3_t2_ParamLimits

0x12cc,	// (0x00043563) list_medium_line_t3_g3_t2

0x12e2,	// (0x00043579) list_medium_line_t3_g3_t3_ParamLimits

0x12e2,	// (0x00043579) list_medium_line_t3_g3_t3

0x0002,

0xfbf2,	// (0x00051e89) list_medium_line_t3_g3_t_ParamLimits

0xfbf2,	// (0x00051e89) list_medium_line_t3_g3_t

0xb370,	// (0x0004d607) list_medium_line_right_iconx2_g1

0xb2b4,	// (0x0004d54b) list_medium_line_right_iconx2_g2

0x0001,

0xfbf9,	// (0x00051e90) list_medium_line_right_iconx2_g

0xb4aa,	// (0x0004d741) list_medium_line_right_iconx2_t1

0xb370,	// (0x0004d607) list_medium_line_t2_right_iconx2_g1

0xb2b4,	// (0x0004d54b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfbf9,	// (0x00051e90) list_medium_line_t2_right_iconx2_g

0x12fc,	// (0x00043593) list_medium_line_t2_right_iconx2_t1

0x130c,	// (0x000435a3) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbfe,	// (0x00051e95) list_medium_line_t2_right_iconx2_t

0xb4b8,	// (0x0004d74f) list_medium_line_x4_t4_t1

0x131e,	// (0x000435b5) list_medium_line_x4_t4_t2

0x132e,	// (0x000435c5) list_medium_line_x4_t4_t3

0x133e,	// (0x000435d5) list_medium_line_x4_t4_t4

0x0003,

0xfc03,	// (0x00051e9a) list_medium_line_x4_t4_t

0x9951,	// (0x0004bbe8) tport_appsw_pane_ParamLimits

0x9951,	// (0x0004bbe8) tport_appsw_pane

0x9964,	// (0x0004bbfb) tport_contact_pane_ParamLimits

0x9964,	// (0x0004bbfb) tport_contact_pane

0x9977,	// (0x0004bc0e) tport_listscroll_pane_ParamLimits

0x9977,	// (0x0004bc0e) tport_listscroll_pane

0x998d,	// (0x0004bc24) cell_tport_appsw_pane_ParamLimits

0x998d,	// (0x0004bc24) cell_tport_appsw_pane

0x6cf4,	// (0x00048f8b) tport_appsw_pane_g1_ParamLimits

0x6cf4,	// (0x00048f8b) tport_appsw_pane_g1

0xb4c6,	// (0x0004d75d) tport_contact_pane_g1

0xb4cf,	// (0x0004d766) tport_contact_pane_t1

0xb4dd,	// (0x0004d774) tport_contact_pane_t2

0x0001,

0xfc0c,	// (0x00051ea3) tport_contact_pane_t

0xb4eb,	// (0x0004d782) list_tport_pane

0xb4f4,	// (0x0004d78b) scroll_pane_cp_030

0x99d3,	// (0x0004bc6a) cell_tport_appsw_pane_g1

0xb50d,	// (0x0004d7a4) cell_tport_appsw_pane_t1

0xa634,	// (0x0004c8cb) grid_highlight_pane_cp019

0x99e3,	// (0x0004bc7a) list_tport_double_graphic_pane_ParamLimits

0x99e3,	// (0x0004bc7a) list_tport_double_graphic_pane

0xa6ad,	// (0x0004c944) list_highlight_pane_cp023_ParamLimits

0xa6ad,	// (0x0004c944) list_highlight_pane_cp023

0x99f3,	// (0x0004bc8a) list_tport_double_graphic_pane_g1_ParamLimits

0x99f3,	// (0x0004bc8a) list_tport_double_graphic_pane_g1

0x9a00,	// (0x0004bc97) list_tport_double_graphic_pane_t1_ParamLimits

0x9a00,	// (0x0004bc97) list_tport_double_graphic_pane_t1

0x9a15,	// (0x0004bcac) list_tport_double_graphic_pane_t2_ParamLimits

0x9a15,	// (0x0004bcac) list_tport_double_graphic_pane_t2

0x0001,

0xfc18,	// (0x00051eaf) list_tport_double_graphic_pane_t_ParamLimits

0xfc18,	// (0x00051eaf) list_tport_double_graphic_pane_t

0xa634,	// (0x0004c8cb) main_cale_note_pane

0x6ca8,	// (0x00048f3f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6ca8,	// (0x00048f3f) cell_vitu2_function_top_wide_pane_cp01

0x90b5,	// (0x0004b34c) wait_bar_pane_cp05_ParamLimits

0xa634,	// (0x0004c8cb) listscroll_cmail_pane

0xb523,	// (0x0004d7ba) list_cmail_pane

0x9a31,	// (0x0004bcc8) list_cmail_body_pane

0x9a49,	// (0x0004bce0) list_single_cmail_header_caption_pane

0x9a66,	// (0x0004bcfd) list_single_cmail_header_detail_pane_ParamLimits

0x9a66,	// (0x0004bcfd) list_single_cmail_header_detail_pane

0x9a98,	// (0x0004bd2f) list_single_cmail_header_caption_pane_t1

0x134e,	// (0x000435e5) list_single_cmail_header_detail_pane_g1_ParamLimits

0x134e,	// (0x000435e5) list_single_cmail_header_detail_pane_g1

0xb543,	// (0x0004d7da) list_single_cmail_header_detail_pane_g2_ParamLimits

0xb543,	// (0x0004d7da) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc1d,	// (0x00051eb4) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc1d,	// (0x00051eb4) list_single_cmail_header_detail_pane_g

0xb55c,	// (0x0004d7f3) list_single_cmail_header_detail_pane_t1_ParamLimits

0xb55c,	// (0x0004d7f3) list_single_cmail_header_detail_pane_t1

0xb59a,	// (0x0004d831) list_single_cmail_header_editor_pane_bg_ParamLimits

0xb59a,	// (0x0004d831) list_single_cmail_header_editor_pane_bg

0x8f1f,	// (0x0004b1b6) list_cmail_body_pane_g1

0xb5ac,	// (0x0004d843) list_cmail_body_pane_t1

0x6dba,	// (0x00049051) list_single_cmail_header_editor_pane_bg_g1

0xc99a,	// (0x0004ec31) list_single_cmail_header_editor_pane_bg_g1_copy1

0x6dca,	// (0x00049061) list_single_cmail_header_editor_pane_bg_g1_copy2

0x6dc2,	// (0x00049059) list_single_cmail_header_editor_pane_bg_g1_copy3

0x7785,	// (0x00049a1c) list_single_cmail_header_editor_pane_bg_g1_copy4

0x6dea,	// (0x00049081) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x6dda,	// (0x00049071) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x6de2,	// (0x00049079) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc97a,	// (0x0004ec11) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9aa8,	// (0x0004bd3f) calenote_gesture_pane_ParamLimits

0x9aa8,	// (0x0004bd3f) calenote_gesture_pane

0x9ac8,	// (0x0004bd5f) calenote_window_pane_ParamLimits

0x9ac8,	// (0x0004bd5f) calenote_window_pane

0xb5ba,	// (0x0004d851) popup_note_window_cp01

0x9ae4,	// (0x0004bd7b) calenote_swipe_1_pane_ParamLimits

0x9ae4,	// (0x0004bd7b) calenote_swipe_1_pane

0x97b2,	// (0x0004ba49) calenote_swipe_2_pane_ParamLimits

0x97b2,	// (0x0004ba49) calenote_swipe_2_pane

0x96e6,	// (0x0004b97d) calenote_swipe_1_pane_g1_ParamLimits

0x96e6,	// (0x0004b97d) calenote_swipe_1_pane_g1

0x96f3,	// (0x0004b98a) calenote_swipe_1_pane_g2_ParamLimits

0x96f3,	// (0x0004b98a) calenote_swipe_1_pane_g2

0x0001,

0xfb4c,	// (0x00051de3) calenote_swipe_1_pane_g_ParamLimits

0xfb4c,	// (0x00051de3) calenote_swipe_1_pane_g

0xb5cc,	// (0x0004d863) calenote_swipe_1_pane_t1_ParamLimits

0xb5cc,	// (0x0004d863) calenote_swipe_1_pane_t1

0x96e6,	// (0x0004b97d) calenote_swipe_2_pane_g1_ParamLimits

0x96e6,	// (0x0004b97d) calenote_swipe_2_pane_g1

0xb5eb,	// (0x0004d882) calenote_swipe_2_pane_g2_ParamLimits

0xb5eb,	// (0x0004d882) calenote_swipe_2_pane_g2

0x0001,

0xfc29,	// (0x00051ec0) calenote_swipe_2_pane_g_ParamLimits

0xfc29,	// (0x00051ec0) calenote_swipe_2_pane_g

0xb5f7,	// (0x0004d88e) calenote_swipe_2_pane_t1_ParamLimits

0xb5f7,	// (0x0004d88e) calenote_swipe_2_pane_t1

0xa634,	// (0x0004c8cb) main_mup_navstr_pane

0x57c8,	// (0x00047a5f) main_mup3_pane_t7_ParamLimits

0x57c8,	// (0x00047a5f) main_mup3_pane_t7

0xacbe,	// (0x0004cf55) main_mp4_pane_g6_ParamLimits

0xacbe,	// (0x0004cf55) main_mp4_pane_g6

0xae54,	// (0x0004d0eb) main_image3_pane_t4_ParamLimits

0xae54,	// (0x0004d0eb) main_image3_pane_t4

0x9af9,	// (0x0004bd90) popup_navstr_preview_pane_ParamLimits

0x9af9,	// (0x0004bd90) popup_navstr_preview_pane

0x9b09,	// (0x0004bda0) scroll_navstr_pane_ParamLimits

0x9b09,	// (0x0004bda0) scroll_navstr_pane

0xa634,	// (0x0004c8cb) bg_popup_preview_window_pane_cp04

0xb61e,	// (0x0004d8b5) popup_navstr_preview_pane_t1

0x9b1d,	// (0x0004bdb4) scroll_navstr_pane_g1_ParamLimits

0x9b1d,	// (0x0004bdb4) scroll_navstr_pane_g1

0x9b31,	// (0x0004bdc8) scroll_navstr_pane_t1_ParamLimits

0x9b31,	// (0x0004bdc8) scroll_navstr_pane_t1

0xb5c3,	// (0x0004d85a) bg_button_pane_cp014

0xb5c3,	// (0x0004d85a) bg_button_pane_cp030

0x0f32,	// (0x000431c9) list_double_fisheye_pane_g4_ParamLimits

0x0f32,	// (0x000431c9) list_double_fisheye_pane_g4

0x0f3e,	// (0x000431d5) list_double_fisheye_pane_g5_ParamLimits

0x0f3e,	// (0x000431d5) list_double_fisheye_pane_g5

0xb52b,	// (0x0004d7c2) sp_fs_scroll_pane_cp03

0x98dd,	// (0x0004bb74) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x98e9,	// (0x0004bb80) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfb69,	// (0x00051e00) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x98f5,	// (0x0004bb8c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9a27,	// (0x0004bcbe) sp_fs_scroll_pane_cp02

0xc6a6,	// (0x0004e93d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc6a6,	// (0x0004e93d) popup_sp_fs_calendar_preview_list_single_pane

0xa634,	// (0x0004c8cb) main_cam6_pano_pane

0xa6ad,	// (0x0004c944) main_mup3_pane_ParamLimits

0xa634,	// (0x0004c8cb) main_phacti_pane

0x8f86,	// (0x0004b21d) bg_button_pane_cp11

0x8fa0,	// (0x0004b237) main_mobtv_info_pane_g2_ParamLimits

0x8fa0,	// (0x0004b237) main_mobtv_info_pane_g2

0x0001,

0x041b,	// (0x000426b2) main_mobtv_info_pane_g_ParamLimits

0x041b,	// (0x000426b2) main_mobtv_info_pane_g

0x9221,	// (0x0004b4b8) sc_clock_pane_t5_ParamLimits

0x9221,	// (0x0004b4b8) sc_clock_pane_t5

0x93fa,	// (0x0004b691) main_radioblah_pane_g1_ParamLimits

0x9440,	// (0x0004b6d7) main_radioblah_pane_t3_ParamLimits

0x9440,	// (0x0004b6d7) main_radioblah_pane_t3

0x9458,	// (0x0004b6ef) main_radioblah_pane_t4_ParamLimits

0x9458,	// (0x0004b6ef) main_radioblah_pane_t4

0x9486,	// (0x0004b71d) main_radioblah_text_pane_ParamLimits

0x9486,	// (0x0004b71d) main_radioblah_text_pane

0x9498,	// (0x0004b72f) main_radioblah_info_pane_g1_ParamLimits

0x956b,	// (0x0004b802) main_radioblah_info_pane_t4_ParamLimits

0x956b,	// (0x0004b802) main_radioblah_info_pane_t4

0xa6ad,	// (0x0004c944) main_sp_fs_calendar_pane

0x9b48,	// (0x0004bddf) main_phacti_pane_g1

0x9b50,	// (0x0004bde7) phacti_note_pane_ParamLimits

0x9b50,	// (0x0004bde7) phacti_note_pane

0xb635,	// (0x0004d8cc) phacti_term_pane_ParamLimits

0xb635,	// (0x0004d8cc) phacti_term_pane

0xb64a,	// (0x0004d8e1) phacti_note_pane_t1_ParamLimits

0xb64a,	// (0x0004d8e1) phacti_note_pane_t1

0xb661,	// (0x0004d8f8) phacti_term_pane_g1

0xb669,	// (0x0004d900) phacti_term_pane_t1_ParamLimits

0xb669,	// (0x0004d900) phacti_term_pane_t1

0xb693,	// (0x0004d92a) popup_sp_fs_calendar_preview_list_single_pane_g1

0xb69b,	// (0x0004d932) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc33,	// (0x00051eca) popup_sp_fs_calendar_preview_list_single_pane_g

0xb6a3,	// (0x0004d93a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xb6a3,	// (0x0004d93a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xb6b9,	// (0x0004d950) aid_popup_sp_fs_bg_corner_pane

0xe896,	// (0x00050b2d) popup_sp_fs_calendar_preview_bg_pane_g1

0xa634,	// (0x0004c8cb) popup_sp_fs_calendar_preview_bg_pane

0xb6c1,	// (0x0004d958) popup_sp_fs_calendar_preview_list_pane

0xa6ad,	// (0x0004c944) bg_main_sp_fs_cale_pane_ParamLimits

0xa6ad,	// (0x0004c944) bg_main_sp_fs_cale_pane

0xb6c9,	// (0x0004d960) listscroll_cale_mrui_pane_ParamLimits

0xb6c9,	// (0x0004d960) listscroll_cale_mrui_pane

0xb6dd,	// (0x0004d974) listscroll_sp_fs_schedule_track_pane

0xb6e6,	// (0x0004d97d) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xb6e6,	// (0x0004d97d) main_sp_fs_ctrlbar_pane_cp01

0xb6f7,	// (0x0004d98e) main_sp_fs_ribbon_pane

0xb6ff,	// (0x0004d996) popup_sp_fs_cale_preview_window

0x9ba7,	// (0x0004be3e) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9ba7,	// (0x0004be3e) list_single_sp_fs_schedule_track_pane

0xa6ad,	// (0x0004c944) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa6ad,	// (0x0004c944) bg_sp_fs_highlight_list_pane_cp03

0x9bba,	// (0x0004be51) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9bba,	// (0x0004be51) list_single_sp_fs_schedule_track_pane_g1

0x9bc6,	// (0x0004be5d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9bc6,	// (0x0004be5d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc38,	// (0x00051ecf) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc38,	// (0x00051ecf) list_single_sp_fs_schedule_track_pane_g

0x9bd2,	// (0x0004be69) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9bd2,	// (0x0004be69) list_single_sp_fs_schedule_track_pane_t1

0x9bf4,	// (0x0004be8b) sp_fs_schedule_track_pane_ParamLimits

0x9bf4,	// (0x0004be8b) sp_fs_schedule_track_pane

0xb711,	// (0x0004d9a8) sp_fs_schedule_track_pane_g1

0xb719,	// (0x0004d9b0) sp_fs_schedule_track_pane_g2

0xb721,	// (0x0004d9b8) sp_fs_schedule_track_pane_g3

0xb729,	// (0x0004d9c0) sp_fs_schedule_track_pane_g4

0xb731,	// (0x0004d9c8) sp_fs_schedule_track_pane_g5

0x0004,

0xfc3d,	// (0x00051ed4) sp_fs_schedule_track_pane_g

0x6dba,	// (0x00049051) bg_sp_fs_schedule_viewer_highlight_g1

0xc99a,	// (0x0004ec31) bg_sp_fs_schedule_viewer_highlight_g2

0x6dc2,	// (0x00049059) bg_sp_fs_schedule_viewer_highlight_g3

0x6dca,	// (0x00049061) bg_sp_fs_schedule_viewer_highlight_g4

0x7785,	// (0x00049a1c) bg_sp_fs_schedule_viewer_highlight_g5

0x6dda,	// (0x00049071) bg_sp_fs_schedule_viewer_highlight_g6

0x6de2,	// (0x00049079) bg_sp_fs_schedule_viewer_highlight_g7

0x6dea,	// (0x00049081) bg_sp_fs_schedule_viewer_highlight_g8

0xc97a,	// (0x0004ec11) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc48,	// (0x00051edf) bg_sp_fs_schedule_viewer_highlight_g

0xa634,	// (0x0004c8cb) bg_main_sp_fs_ribbon_pane

0x9c09,	// (0x0004bea0) main_sp_fs_ribbon_pane_g1

0xb739,	// (0x0004d9d0) main_sp_fs_ribbon_pane_t1

0x9c12,	// (0x0004bea9) main_sp_fs_ribbon_pane_t2

0xb748,	// (0x0004d9df) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc5b,	// (0x00051ef2) main_sp_fs_ribbon_pane_t

0xb757,	// (0x0004d9ee) main_sp_fs_ribbon_scheduler_pane

0xb75f,	// (0x0004d9f6) bg_main_sp_fs_ribbon_pane_g1

0xb768,	// (0x0004d9ff) bg_main_sp_fs_ribbon_pane_g2

0xb771,	// (0x0004da08) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc62,	// (0x00051ef9) bg_main_sp_fs_ribbon_pane_g

0xb779,	// (0x0004da10) main_sp_fs_ribbon_scheduler_pane_g1

0xb782,	// (0x0004da19) main_sp_fs_ribbon_scheduler_pane_g2

0xb78b,	// (0x0004da22) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc69,	// (0x00051f00) main_sp_fs_ribbon_scheduler_pane_g

0xb794,	// (0x0004da2b) list_cale_mrui_pane

0x9c21,	// (0x0004beb8) sp_fs_scroll_pane_cp07_ParamLimits

0x9c21,	// (0x0004beb8) sp_fs_scroll_pane_cp07

0x9c37,	// (0x0004bece) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9c37,	// (0x0004bece) bg_sp_fs_schedule_viewer_highlight

0xb79d,	// (0x0004da34) list_single_sp_fs_schedule_track_pane_cp01

0xb7a5,	// (0x0004da3c) list_sp_fs_schedule_track_pane

0xb7ad,	// (0x0004da44) sp_fs_scroll_pane_cp06_ParamLimits

0xb7ad,	// (0x0004da44) sp_fs_scroll_pane_cp06

0xe896,	// (0x00050b2d) bgmain_sp_fs_calendar_pane_g1

0x138c,	// (0x00043623) list_single_cale_mrui_pane_ParamLimits

0x138c,	// (0x00043623) list_single_cale_mrui_pane

0xb7bf,	// (0x0004da56) list_single_cale_mrui_row_pane_ParamLimits

0xb7bf,	// (0x0004da56) list_single_cale_mrui_row_pane

0xb7cc,	// (0x0004da63) list_single_cale_mrui_row_pane_g1_ParamLimits

0xb7cc,	// (0x0004da63) list_single_cale_mrui_row_pane_g1

0xb804,	// (0x0004da9b) list_single_cale_mrui_row_pane_t1_ParamLimits

0xb804,	// (0x0004da9b) list_single_cale_mrui_row_pane_t1

0x13af,	// (0x00043646) list_single_cale_mrui_row_pane_t2_ParamLimits

0x13af,	// (0x00043646) list_single_cale_mrui_row_pane_t2

0xb816,	// (0x0004daad) list_single_cale_mrui_row_pane_t3_ParamLimits

0xb816,	// (0x0004daad) list_single_cale_mrui_row_pane_t3

0xb845,	// (0x0004dadc) list_single_cale_mrui_row_pane_t4_ParamLimits

0xb845,	// (0x0004dadc) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc75,	// (0x00051f0c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc75,	// (0x00051f0c) list_single_cale_mrui_row_pane_t

0x1417,	// (0x000436ae) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1417,	// (0x000436ae) list_single_cmail_header_editor_pane_bg_cp01

0x143d,	// (0x000436d4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x143d,	// (0x000436d4) list_single_cmail_header_editor_pane_bg_cp02

0x9c49,	// (0x0004bee0) main_radioblah_text_pane_t1_ParamLimits

0x9c49,	// (0x0004bee0) main_radioblah_text_pane_t1

0xb874,	// (0x0004db0b) cam6_indi_pane_cp01

0xb87c,	// (0x0004db13) cam6_mode_pane_cp01

0xb884,	// (0x0004db1b) cam6_pano_pane

0xb88d,	// (0x0004db24) cam6_zoom_pane_cp01

0xb897,	// (0x0004db2e) cam6_pano_image_pane

0xb8a0,	// (0x0004db37) cam6_pano_pane_g1

0x8f1f,	// (0x0004b1b6) cam6_pano_pane_g2

0xb8a9,	// (0x0004db40) cam6_pano_pane_g3

0xb8b2,	// (0x0004db49) cam6_pano_pane_g4

0xee02,	// (0x00051099) cam6_pano_pane_g5

0xb8bb,	// (0x0004db52) cam6_pano_pane_g6

0xb8c3,	// (0x0004db5a) cam6_pano_pane_g7

0xb8cb,	// (0x0004db62) cam6_pano_pane_g8

0xb8d4,	// (0x0004db6b) cam6_pano_pane_g9

0x0008,

0xfc7e,	// (0x00051f15) cam6_pano_pane_g

0xa634,	// (0x0004c8cb) main_browser_tag_pane

0xb616,	// (0x0004d8ad) grid_navstr_albumart_pane

0xb8df,	// (0x0004db76) cell_navstr_albumart_pane_ParamLimits

0xb8df,	// (0x0004db76) cell_navstr_albumart_pane

0xb8fb,	// (0x0004db92) cell_navstr_albumart_pane_g1

0xe22c,	// (0x000504c3) cell_navstr_albumart_pane_g2

0xe23c,	// (0x000504d3) cell_navstr_albumart_pane_g3

0xe234,	// (0x000504cb) cell_navstr_albumart_pane_g4

0x0003,

0xfc91,	// (0x00051f28) cell_navstr_albumart_pane_g

0x9c64,	// (0x0004befb) bt_list_pane_ParamLimits

0x9c64,	// (0x0004befb) bt_list_pane

0x9c7a,	// (0x0004bf11) bt_list_pane_t1

0x9c89,	// (0x0004bf20) bt_list_pane_t2

0x0001,

0xfc9a,	// (0x00051f31) bt_list_pane_t

0xa634,	// (0x0004c8cb) main_cale_prevew_pane

0x9c98,	// (0x0004bf2f) popup_cale_preview_window_ParamLimits

0x9c98,	// (0x0004bf2f) popup_cale_preview_window

0xa6ad,	// (0x0004c944) bg_popup_preview_window_pane_cp05_ParamLimits

0xa6ad,	// (0x0004c944) bg_popup_preview_window_pane_cp05

0xb903,	// (0x0004db9a) list_cale_preview_pane_ParamLimits

0xb903,	// (0x0004db9a) list_cale_preview_pane

0x9cb3,	// (0x0004bf4a) list_double_cale_preview_pane_ParamLimits

0x9cb3,	// (0x0004bf4a) list_double_cale_preview_pane

0x9cc7,	// (0x0004bf5e) list_single_cale_preview_pane_ParamLimits

0x9cc7,	// (0x0004bf5e) list_single_cale_preview_pane

0x9cdf,	// (0x0004bf76) list_single_cale_preview_pane_g1

0x9ce7,	// (0x0004bf7e) list_single_cale_preview_pane_t1_ParamLimits

0x9ce7,	// (0x0004bf7e) list_single_cale_preview_pane_t1

0x9cfc,	// (0x0004bf93) list_double_cale_preview_pane_g1

0x9d04,	// (0x0004bf9b) list_double_cale_preview_pane_t1_ParamLimits

0x9d04,	// (0x0004bf9b) list_double_cale_preview_pane_t1

0x9d19,	// (0x0004bfb0) list_double_cale_preview_pane_t2_ParamLimits

0x9d19,	// (0x0004bfb0) list_double_cale_preview_pane_t2

0x0001,

0xfc9f,	// (0x00051f36) list_double_cale_preview_pane_t_ParamLimits

0xfc9f,	// (0x00051f36) list_double_cale_preview_pane_t

0xa634,	// (0x0004c8cb) main_ezdial_pane

0xa6ad,	// (0x0004c944) main_sp_fs_email_pane_ParamLimits

0x9847,	// (0x0004bade) cmail_ddmenu_btn01_pane_ParamLimits

0x9847,	// (0x0004bade) cmail_ddmenu_btn01_pane

0x985a,	// (0x0004baf1) cmail_ddmenu_btn02_pane_ParamLimits

0x985a,	// (0x0004baf1) cmail_ddmenu_btn02_pane

0x98b7,	// (0x0004bb4e) cmail_ddmenu_btn03_pane_ParamLimits

0x98b7,	// (0x0004bb4e) cmail_ddmenu_btn03_pane

0x0fae,	// (0x00043245) main_sp_fs_ctrlbar_pane_ParamLimits

0x0fd2,	// (0x00043269) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9a31,	// (0x0004bcc8) list_cmail_body_pane_ParamLimits

0xb53a,	// (0x0004d7d1) bg_button_pane_cp12

0xb54f,	// (0x0004d7e6) list_single_cmail_header_detail_pane_g3_ParamLimits

0xb54f,	// (0x0004d7e6) list_single_cmail_header_detail_pane_g3

0x1366,	// (0x000435fd) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1366,	// (0x000435fd) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc24,	// (0x00051ebb) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc24,	// (0x00051ebb) list_single_cmail_header_detail_pane_t

0xb67e,	// (0x0004d915) phacti_term_pane_t2_ParamLimits

0xb67e,	// (0x0004d915) phacti_term_pane_t2

0x0001,

0xfc2e,	// (0x00051ec5) phacti_term_pane_t_ParamLimits

0xfc2e,	// (0x00051ec5) phacti_term_pane_t

0xb90f,	// (0x0004dba6) aid_size_list_single_double

0x9d31,	// (0x0004bfc8) popup_ezdial_listscroll_window

0x9d4d,	// (0x0004bfe4) popup_number_entry_window_cp01

0xcfe4,	// (0x0004f27b) bg_popup_call_pane_cp09

0xb91b,	// (0x0004dbb2) ezdial_list_pane

0xb923,	// (0x0004dbba) scroll_pane_cp23

0xe413,	// (0x000506aa) bg_button_pane_cp028_ParamLimits

0xe413,	// (0x000506aa) bg_button_pane_cp028

0x9d5b,	// (0x0004bff2) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9d5b,	// (0x0004bff2) cmail_ddmenu_btn01_pane_g1

0x9d67,	// (0x0004bffe) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9d67,	// (0x0004bffe) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfca4,	// (0x00051f3b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfca4,	// (0x00051f3b) cmail_ddmenu_btn01_pane_g

0xb92b,	// (0x0004dbc2) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb92b,	// (0x0004dbc2) cmail_ddmenu_btn01_pane_t1

0xe413,	// (0x000506aa) bg_button_pane_cp029_ParamLimits

0xe413,	// (0x000506aa) bg_button_pane_cp029

0x9d73,	// (0x0004c00a) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9d73,	// (0x0004c00a) cmail_ddmenu_btn02_pane_g1

0x9d8b,	// (0x0004c022) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9d8b,	// (0x0004c022) cmail_ddmenu_btn02_pane_t1

0xa6ad,	// (0x0004c944) bg_button_pane_cp031_ParamLimits

0xa6ad,	// (0x0004c944) bg_button_pane_cp031

0x9d73,	// (0x0004c00a) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9d73,	// (0x0004c00a) cmail_ddmenu_btn03_pane_g1

0x9d8b,	// (0x0004c022) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9d8b,	// (0x0004c022) cmail_ddmenu_btn03_pane_t1

0x63ef,	// (0x00048686) cell_dialer2_keypad_pane_t1_ParamLimits

0x6409,	// (0x000486a0) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6409,	// (0x000486a0) cell_dialer2_keypad_pane_t1_copy1

0x8b30,	// (0x0004adc7) ncimui_group_button_pane

0xa6ad,	// (0x0004c944) main_sp_fs_calendar_pane_ParamLimits

0x9a49,	// (0x0004bce0) list_single_cmail_header_caption_pane_ParamLimits

0xb13f,	// (0x0004d3d6) aid_recal_txt_sm_pane

0xa634,	// (0x0004c8cb) mian_recal_day_pane

0xb6ff,	// (0x0004d996) popup_sp_fs_cale_preview_window_ParamLimits

0xa634,	// (0x0004c8cb) list_recal_day_pane

0xb959,	// (0x0004dbf0) list_single_recal_day_pane_ParamLimits

0xb959,	// (0x0004dbf0) list_single_recal_day_pane

0xb96b,	// (0x0004dc02) list_single_recal_day_pane_g1_ParamLimits

0xb96b,	// (0x0004dc02) list_single_recal_day_pane_g1

0xb977,	// (0x0004dc0e) list_single_recal_day_pane_g2_ParamLimits

0xb977,	// (0x0004dc0e) list_single_recal_day_pane_g2

0xb983,	// (0x0004dc1a) list_single_recal_day_pane_g3_ParamLimits

0xb983,	// (0x0004dc1a) list_single_recal_day_pane_g3

0x9daf,	// (0x0004c046) list_single_recal_day_pane_g4_ParamLimits

0x9daf,	// (0x0004c046) list_single_recal_day_pane_g4

0xb98f,	// (0x0004dc26) list_single_recal_day_pane_g5_ParamLimits

0xb98f,	// (0x0004dc26) list_single_recal_day_pane_g5

0xb99b,	// (0x0004dc32) list_single_recal_day_pane_g6_ParamLimits

0xb99b,	// (0x0004dc32) list_single_recal_day_pane_g6

0x0005,

0xfcb3,	// (0x00051f4a) list_single_recal_day_pane_g_ParamLimits

0xfcb3,	// (0x00051f4a) list_single_recal_day_pane_g

0xb9a7,	// (0x0004dc3e) list_single_recal_day_pane_t1

0xb9b5,	// (0x0004dc4c) list_single_recal_day_pane_t2

0x0001,

0xfcc0,	// (0x00051f57) list_single_recal_day_pane_t

0x9dbd,	// (0x0004c054) ncimui_query_button_pane_ParamLimits

0x9dbd,	// (0x0004c054) ncimui_query_button_pane

0x9dcd,	// (0x0004c064) ncimui_query_button_pane_t1_ParamLimits

0x9dcd,	// (0x0004c064) ncimui_query_button_pane_t1

0xb9c3,	// (0x0004dc5a) ncimui_query_button_pane_t2_ParamLimits

0xb9c3,	// (0x0004dc5a) ncimui_query_button_pane_t2

0x0001,

0xfcc5,	// (0x00051f5c) ncimui_query_button_pane_t_ParamLimits

0xfcc5,	// (0x00051f5c) ncimui_query_button_pane_t

0x9de0,	// (0x0004c077) query_button_pane_ParamLimits

0x9de0,	// (0x0004c077) query_button_pane

0xa634,	// (0x0004c8cb) bg_button_pane_cp0028

0xb9d6,	// (0x0004dc6d) query_button_pane_t1

0x441d,	// (0x000466b4) main_tport_pane_ParamLimits

0x9917,	// (0x0004bbae) bg_popup_window_pane_cp01_ParamLimits

0x9917,	// (0x0004bbae) bg_popup_window_pane_cp01

0x992d,	// (0x0004bbc4) heading_pane_cp08_ParamLimits

0x992d,	// (0x0004bbc4) heading_pane_cp08

0x993e,	// (0x0004bbd5) heading_pane_cp07_ParamLimits

0x993e,	// (0x0004bbd5) heading_pane_cp07

0xb505,	// (0x0004d79c) cell_tport_appsw_pane_g2

0x0002,

0xfc11,	// (0x00051ea8) cell_tport_appsw_pane_g

0x0ba2,	// (0x00042e39) input_candi_list_open_g1

0xcb35,	// (0x0004edcc) list_cale_time_pane_g6_ParamLimits

0xcb35,	// (0x0004edcc) list_cale_time_pane_g6

0x520b,	// (0x000474a2) aid_size_touch_calib_1_ParamLimits

0x520b,	// (0x000474a2) aid_size_touch_calib_1

0x5217,	// (0x000474ae) aid_size_touch_calib_2_ParamLimits

0x5217,	// (0x000474ae) aid_size_touch_calib_2

0x522d,	// (0x000474c4) aid_size_touch_calib_3_ParamLimits

0x522d,	// (0x000474c4) aid_size_touch_calib_3

0x524b,	// (0x000474e2) aid_size_touch_calib_4_ParamLimits

0x524b,	// (0x000474e2) aid_size_touch_calib_4

0x5261,	// (0x000474f8) main_touch_calib_button_group_pane_ParamLimits

0x5261,	// (0x000474f8) main_touch_calib_button_group_pane

0x5279,	// (0x00047510) main_touch_calib_pane_g1_ParamLimits

0x5285,	// (0x0004751c) main_touch_calib_pane_g2_ParamLimits

0x5291,	// (0x00047528) main_touch_calib_pane_g3_ParamLimits

0x529d,	// (0x00047534) main_touch_calib_pane_g4_ParamLimits

0xf658,	// (0x000518ef) main_touch_calib_pane_g_ParamLimits

0x52a9,	// (0x00047540) main_touch_calib_pane_t1_ParamLimits

0x52c3,	// (0x0004755a) main_touch_calib_pane_t2_ParamLimits

0x52dd,	// (0x00047574) main_touch_calib_pane_t3_ParamLimits

0x52f1,	// (0x00047588) main_touch_calib_pane_t4_ParamLimits

0x5305,	// (0x0004759c) main_touch_calib_pane_t5_ParamLimits

0xf661,	// (0x000518f8) main_touch_calib_pane_t_ParamLimits

0xebcc,	// (0x00050e63) list_single_fp_cale_pane_g3_ParamLimits

0xebcc,	// (0x00050e63) list_single_fp_cale_pane_g3

0xa6ad,	// (0x0004c944) bg_button_pane_cp012_ParamLimits

0xa6ad,	// (0x0004c944) bg_vkb2_func_pane_cp03_ParamLimits

0x773b,	// (0x000499d2) cell_vitu2_function_top_pane_g1_ParamLimits

0xa6ad,	// (0x0004c944) bg_vkb2_func_pane_cp04_ParamLimits

0x8ad0,	// (0x0004ad67) main_ncimui_button_group_pane_ParamLimits

0x8ad0,	// (0x0004ad67) main_ncimui_button_group_pane

0x8b1e,	// (0x0004adb5) main_ncimui_pane_t3_ParamLimits

0x8b1e,	// (0x0004adb5) main_ncimui_pane_t3

0xb62c,	// (0x0004d8c3) phacti_button_group_pane

0xb90f,	// (0x0004dba6) aid_size_list_single_double_ParamLimits

0x9d31,	// (0x0004bfc8) popup_ezdial_listscroll_window_ParamLimits

0x9d4d,	// (0x0004bfe4) popup_number_entry_window_cp01_ParamLimits

0x9df3,	// (0x0004c08a) phacti_button_pane_ParamLimits

0x9df3,	// (0x0004c08a) phacti_button_pane

0xa634,	// (0x0004c8cb) bg_button_pane_cp14

0xb9e4,	// (0x0004dc7b) phacti_button_pane_t1

0x9e04,	// (0x0004c09b) main_touch_calib_button_pane_ParamLimits

0x9e04,	// (0x0004c09b) main_touch_calib_button_pane

0xc590,	// (0x0004e827) bg_button_pane_cp18_ParamLimits

0xc590,	// (0x0004e827) bg_button_pane_cp18

0xb9f2,	// (0x0004dc89) main_touch_calib_button_pane_t1_ParamLimits

0xb9f2,	// (0x0004dc89) main_touch_calib_button_pane_t1

0xba08,	// (0x0004dc9f) main_touch_calib_button_pane_t2_ParamLimits

0xba08,	// (0x0004dc9f) main_touch_calib_button_pane_t2

0x0001,

0xfcca,	// (0x00051f61) main_touch_calib_button_pane_t_ParamLimits

0xfcca,	// (0x00051f61) main_touch_calib_button_pane_t

0xa634,	// (0x0004c8cb) cell_ncimui_button_pane

0xa634,	// (0x0004c8cb) bg_button_pane_cp032

0xba26,	// (0x0004dcbd) cell_ncimui_button_pane_t1

0xae32,	// (0x0004d0c9) image3_infobar_pane_ParamLimits

0xae32,	// (0x0004d0c9) image3_infobar_pane

0x924d,	// (0x0004b4e4) fs_bigclock_status_pane_ParamLimits

0x924d,	// (0x0004b4e4) fs_bigclock_status_pane

0x925a,	// (0x0004b4f1) main_fs_bigclock_clock_pane_ParamLimits

0x925a,	// (0x0004b4f1) main_fs_bigclock_clock_pane

0x926d,	// (0x0004b504) main_fs_bigclock_indi_pane_ParamLimits

0x926d,	// (0x0004b504) main_fs_bigclock_indi_pane

0x9288,	// (0x0004b51f) main_fs_bigclock_swipe_pane_ParamLimits

0x9288,	// (0x0004b51f) main_fs_bigclock_swipe_pane

0xa634,	// (0x0004c8cb) main_fs_clock_dumped_data

0x92ab,	// (0x0004b542) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x92ab,	// (0x0004b542) list_single_fs_bigclock_indicator_pane_g1

0x92cb,	// (0x0004b562) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x92cb,	// (0x0004b562) list_single_fs_bigclock_indicator_pane_g2

0x92e5,	// (0x0004b57c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x92e5,	// (0x0004b57c) list_single_fs_bigclock_indicator_pane_g3

0x9301,	// (0x0004b598) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x9301,	// (0x0004b598) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfafd,	// (0x00051d94) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfafd,	// (0x00051d94) list_single_fs_bigclock_indicator_pane_g

0x9327,	// (0x0004b5be) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x9327,	// (0x0004b5be) list_single_fs_bigclock_indicator_pane_t1

0x934f,	// (0x0004b5e6) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x934f,	// (0x0004b5e6) list_single_fs_bigclock_indicator_pane_t2

0x9377,	// (0x0004b60e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x9377,	// (0x0004b60e) list_single_fs_bigclock_indicator_pane_t3

0x93a1,	// (0x0004b638) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x93a1,	// (0x0004b638) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb08,	// (0x00051d9f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb08,	// (0x00051d9f) list_single_fs_bigclock_indicator_pane_t

0xba34,	// (0x0004dccb) image3_infobar_fav_pane_ParamLimits

0xba34,	// (0x0004dccb) image3_infobar_fav_pane

0xba44,	// (0x0004dcdb) image3_infobar_loc_pane_ParamLimits

0xba44,	// (0x0004dcdb) image3_infobar_loc_pane

0xba5a,	// (0x0004dcf1) image3_infobar_time_pane_ParamLimits

0xba5a,	// (0x0004dcf1) image3_infobar_time_pane

0xe896,	// (0x00050b2d) image3_infobar_time_pane_g1

0xba6a,	// (0x0004dd01) image3_infobar_time_pane_t1

0xe896,	// (0x00050b2d) image3_infobar_loc_pane_g1

0xba78,	// (0x0004dd0f) image3_infobar_loc_pane_g2

0x0001,

0xfccf,	// (0x00051f66) image3_infobar_loc_pane_g

0xba80,	// (0x0004dd17) image3_infobar_loc_pane_t1

0xe896,	// (0x00050b2d) image3_infobar_fav_pane_g1

0xba8e,	// (0x0004dd25) image3_infobar_fav_pane_g2

0x0001,

0xfcd4,	// (0x00051f6b) image3_infobar_fav_pane_g

0xba96,	// (0x0004dd2d) fs_bigclock_status_battery_pane

0xba9f,	// (0x0004dd36) fs_bigclock_status_signal_pane

0xbaa8,	// (0x0004dd3f) fs_bigclock_status_title_pane

0xbab1,	// (0x0004dd48) fs_bigclock_status_signal_pane_g1

0xbaba,	// (0x0004dd51) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcd9,	// (0x00051f70) fs_bigclock_status_signal_pane_g

0xbac2,	// (0x0004dd59) fs_bigclock_status_battery_pane_g1

0xbacb,	// (0x0004dd62) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcde,	// (0x00051f75) fs_bigclock_status_battery_pane_g

0xbad3,	// (0x0004dd6a) fs_bigclock_status_title_pane_t1

0xe896,	// (0x00050b2d) main_fs_bigclock_clock_pane_g1

0xbae1,	// (0x0004dd78) main_fs_bigclock_clock_pane_g2

0xbae1,	// (0x0004dd78) main_fs_bigclock_clock_pane_g3

0xbae1,	// (0x0004dd78) main_fs_bigclock_clock_pane_g4

0x0003,

0xfce3,	// (0x00051f7a) main_fs_bigclock_clock_pane_g

0xbaed,	// (0x0004dd84) main_fs_bigclock_clock_pane_t1

0xbafb,	// (0x0004dd92) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcec,	// (0x00051f83) main_fs_bigclock_clock_pane_t

0xbb0a,	// (0x0004dda1) list_single_fs_bigclock_indicator_pane_ParamLimits

0xbb0a,	// (0x0004dda1) list_single_fs_bigclock_indicator_pane

0x9e19,	// (0x0004c0b0) list_single_fs_bigclock_pane_ParamLimits

0x9e19,	// (0x0004c0b0) list_single_fs_bigclock_pane

0xbb24,	// (0x0004ddbb) main_fs_bigclock_indicator_pane_t1

0xbb33,	// (0x0004ddca) list_single_fs_bigclock_pane_g1

0xbb3b,	// (0x0004ddd2) list_single_fs_bigclock_pane_t1

0xe896,	// (0x00050b2d) main_fs_bigclock_swipe_pane_g1

0xbb79,	// (0x0004de10) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcfd,	// (0x00051f94) main_fs_bigclock_swipe_pane_g

0xbb81,	// (0x0004de18) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xbb81,	// (0x0004de18) main_fs_bigclock_swipe_pane_t1

0x31cc,	// (0x00045463) call_type_pane_ParamLimits

0xa634,	// (0x0004c8cb) main_btmg_pane

0xb7f8,	// (0x0004da8f) list_single_cale_mrui_row_pane_g2_ParamLimits

0xb7f8,	// (0x0004da8f) list_single_cale_mrui_row_pane_g2

0x0001,

0xfc70,	// (0x00051f07) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc70,	// (0x00051f07) list_single_cale_mrui_row_pane_g

0xb949,	// (0x0004dbe0) list_recal_vselct_arw_lo_pane

0xb951,	// (0x0004dbe8) list_recal_vselct_arw_up_pane

0xb136,	// (0x0004d3cd) list_recal_vselct_pane

0xbb9e,	// (0x0004de35) btmg_button_pane

0x9e7f,	// (0x0004c116) main_btmg_pane_g1

0xa634,	// (0x0004c8cb) bg_button_pane_cp044

0xbba8,	// (0x0004de3f) btmg_button_pane_t1

0xe40b,	// (0x000506a2) aid_listscroll_gen

0xa6ad,	// (0x0004c944) main_cntbar_detail_pane

0xb51b,	// (0x0004d7b2) list_cmail_folder_pane

0xb52b,	// (0x0004d7c2) sp_fs_scroll_pane_cp03_ParamLimits

0x145d,	// (0x000436f4) list_single_fs_dyc_pane_cp01_ParamLimits

0x145d,	// (0x000436f4) list_single_fs_dyc_pane_cp01

0xbbb6,	// (0x0004de4d) aid_size_cmail_indent

0xbbbf,	// (0x0004de56) list_single_dyc_row_pane_cp01

0x9eb9,	// (0x0004c150) cntbar_detail_list_pane_ParamLimits

0x9eb9,	// (0x0004c150) cntbar_detail_list_pane

0x9f0b,	// (0x0004c1a2) main_cntbar_detail_cont_pane_ParamLimits

0x9f0b,	// (0x0004c1a2) main_cntbar_detail_cont_pane

0x31c0,	// (0x00045457) scroll_pane_cp032_ParamLimits

0x31c0,	// (0x00045457) scroll_pane_cp032

0x9f1f,	// (0x0004c1b6) cntbar_detail_list_event_pane_ParamLimits

0x9f1f,	// (0x0004c1b6) cntbar_detail_list_event_pane

0x9ecb,	// (0x0004c162) cntbar_detail_list_shct_pane

0xc9e8,	// (0x0004ec7f) aid_list_gen

0xbbc8,	// (0x0004de5f) aid_scroll

0xbbd1,	// (0x0004de68) aid_size_touch_scroll_bar

0xbbda,	// (0x0004de71) aid_list_double

0xbbe3,	// (0x0004de7a) aid_list_single

0x9f2f,	// (0x0004c1c6) aid_list_single_lg

0xbbec,	// (0x0004de83) aid_list_z_g_a_sm

0xbbf4,	// (0x0004de8b) aid_list_z_g_d

0xbbfc,	// (0x0004de93) aid_txt_z_prm

0x1478,	// (0x0004370f) aid_txt_z_prm_cp01

0x1486,	// (0x0004371d) aid_txt_z_sec

0x9f38,	// (0x0004c1cf) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9f38,	// (0x0004c1cf) main_cntbar_detail_cont_pane_g1

0x9f4c,	// (0x0004c1e3) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9f4c,	// (0x0004c1e3) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd02,	// (0x00051f99) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd02,	// (0x00051f99) main_cntbar_detail_cont_pane_g

0xbc0a,	// (0x0004dea1) main_cntbar_detail_cont_pane_t1

0xbc18,	// (0x0004deaf) main_cntbar_detail_cont_pane_t2

0xbc26,	// (0x0004debd) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd07,	// (0x00051f9e) main_cntbar_detail_cont_pane_t

0x9f5c,	// (0x0004c1f3) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9f5c,	// (0x0004c1f3) cell_cntbar_detail_list_shct_pane

0xbc34,	// (0x0004decb) cntbar_detail_list_shct_pane_g1

0xbc3d,	// (0x0004ded4) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd0e,	// (0x00051fa5) cntbar_detail_list_shct_pane_g

0x9f6e,	// (0x0004c205) cntbar_detail_list_event_pane_g1_ParamLimits

0x9f6e,	// (0x0004c205) cntbar_detail_list_event_pane_g1

0x9f7a,	// (0x0004c211) cntbar_detail_list_event_pane_g2_ParamLimits

0x9f7a,	// (0x0004c211) cntbar_detail_list_event_pane_g2

0x0005,

0xfd13,	// (0x00051faa) cntbar_detail_list_event_pane_g_ParamLimits

0xfd13,	// (0x00051faa) cntbar_detail_list_event_pane_g

0x9fe8,	// (0x0004c27f) cntbar_detail_list_event_pane_t1_ParamLimits

0x9fe8,	// (0x0004c27f) cntbar_detail_list_event_pane_t1

0x9ffd,	// (0x0004c294) cntbar_detail_list_event_pane_t2_ParamLimits

0x9ffd,	// (0x0004c294) cntbar_detail_list_event_pane_t2

0x0002,

0xfd20,	// (0x00051fb7) cntbar_detail_list_event_pane_t_ParamLimits

0xfd20,	// (0x00051fb7) cntbar_detail_list_event_pane_t

0xe896,	// (0x00050b2d) cell_cntbar_detail_list_shct_pane_g1

0x3570,	// (0x00045807) navi_pane_mv_g3

0xa6ad,	// (0x0004c944) main_cntbar_detail_pane_ParamLimits

0xa634,	// (0x0004c8cb) main_notif_wgt_pane

0xac74,	// (0x0004cf0b) aid_tch_main_mp4_pane_g4

0xae28,	// (0x0004d0bf) popup_slider_window_cp02

0xb940,	// (0x0004dbd7) list_recal_day_event_pane

0x9e89,	// (0x0004c120) cntbar_detail_btn_pane_ParamLimits

0x9e89,	// (0x0004c120) cntbar_detail_btn_pane

0x9ea1,	// (0x0004c138) cntbar_detail_btn_pane_cp01_ParamLimits

0x9ea1,	// (0x0004c138) cntbar_detail_btn_pane_cp01

0x9ecb,	// (0x0004c162) cntbar_detail_list_shct_pane_ParamLimits

0x9edb,	// (0x0004c172) cntbar_detail_pane_g1_ParamLimits

0x9edb,	// (0x0004c172) cntbar_detail_pane_g1

0x9eef,	// (0x0004c186) cntbar_detail_pane_t1_ParamLimits

0x9eef,	// (0x0004c186) cntbar_detail_pane_t1

0x9f86,	// (0x0004c21d) cntbar_detail_list_event_pane_g3_ParamLimits

0x9f86,	// (0x0004c21d) cntbar_detail_list_event_pane_g3

0x9f9e,	// (0x0004c235) cntbar_detail_list_event_pane_g4_ParamLimits

0x9f9e,	// (0x0004c235) cntbar_detail_list_event_pane_g4

0x9fb6,	// (0x0004c24d) cntbar_detail_list_event_pane_g5_ParamLimits

0x9fb6,	// (0x0004c24d) cntbar_detail_list_event_pane_g5

0x9fce,	// (0x0004c265) cntbar_detail_list_event_pane_g6_ParamLimits

0x9fce,	// (0x0004c265) cntbar_detail_list_event_pane_g6

0xa012,	// (0x0004c2a9) cntbar_detail_list_event_pane_t3_ParamLimits

0xa012,	// (0x0004c2a9) cntbar_detail_list_event_pane_t3

0xa024,	// (0x0004c2bb) popup_notif_wgt_window_ParamLimits

0xa024,	// (0x0004c2bb) popup_notif_wgt_window

0xa03d,	// (0x0004c2d4) popup_submenu_window_cp01_ParamLimits

0xa03d,	// (0x0004c2d4) popup_submenu_window_cp01

0xcfe4,	// (0x0004f27b) bg_popup_window_pane_cp10

0xbc46,	// (0x0004dedd) listscroll_notif_wgt_pane

0xbc50,	// (0x0004dee7) list_notif_wgt_window

0xbc59,	// (0x0004def0) scroll_pane_cp033

0xbc62,	// (0x0004def9) list_notif_wgt_row_pane_ParamLimits

0xbc62,	// (0x0004def9) list_notif_wgt_row_pane

0xbc76,	// (0x0004df0d) aid_size_list_notif_wgt_del

0xbc7f,	// (0x0004df16) list_notif_wgt_row_pane_g1

0xbc87,	// (0x0004df1e) list_notif_wgt_row_pane_g2

0xbc8f,	// (0x0004df26) list_notif_wgt_row_pane_g3

0x0002,

0xfd27,	// (0x00051fbe) list_notif_wgt_row_pane_g

0xbc98,	// (0x0004df2f) list_notif_wgt_row_pane_t1

0xbca6,	// (0x0004df3d) list_notif_wgt_row_pane_t2

0xbcb4,	// (0x0004df4b) list_notif_wgt_row_pane_t3

0x0002,

0xfd2e,	// (0x00051fc5) list_notif_wgt_row_pane_t

0x77de,	// (0x00049a75) list_recal_day_event_pane_g1

0xbcc2,	// (0x0004df59) list_recal_day_event_pane_t1

0xa634,	// (0x0004c8cb) bg_button_pane_cp045

0xbcd1,	// (0x0004df68) cntbar_detail_btn_pane_t1

0xe413,	// (0x000506aa) main_callh_pane_ParamLimits

0xe413,	// (0x000506aa) main_callh_pane

0xa634,	// (0x0004c8cb) main_coverflow0_pane

0xa634,	// (0x0004c8cb) main_wgtman_pane

0x9296,	// (0x0004b52d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9296,	// (0x0004b52d) main_fs_bigclock_unlock_btn_pane

0xb4fd,	// (0x0004d794) bg_button_pane_cp16

0x99db,	// (0x0004bc72) cell_tport_appsw_pane_g3

0xa04f,	// (0x0004c2e6) cf0_flow_pane_ParamLimits

0xa04f,	// (0x0004c2e6) cf0_flow_pane

0xbcdf,	// (0x0004df76) listscroll_cf0_pane

0xbce8,	// (0x0004df7f) main_cf0_pane_g1

0xa064,	// (0x0004c2fb) main_cf0_pane_t1_ParamLimits

0xa064,	// (0x0004c2fb) main_cf0_pane_t1

0xa07b,	// (0x0004c312) main_cf0_pane_t2_ParamLimits

0xa07b,	// (0x0004c312) main_cf0_pane_t2

0x0001,

0xfd35,	// (0x00051fcc) main_cf0_pane_t_ParamLimits

0xfd35,	// (0x00051fcc) main_cf0_pane_t

0xbcf2,	// (0x0004df89) scroll_pane_cp11

0xa092,	// (0x0004c329) cf0_flow_pane_g1

0xa09e,	// (0x0004c335) cf0_flow_pane_g2

0x0001,

0xfd3a,	// (0x00051fd1) cf0_flow_pane_g

0xa0aa,	// (0x0004c341) cf0_flow_pane_t1

0xa634,	// (0x0004c8cb) main_call6_pane

0xa634,	// (0x0004c8cb) main_calllock_pane

0xa0bc,	// (0x0004c353) call6_btn_grp_pane_ParamLimits

0xa0bc,	// (0x0004c353) call6_btn_grp_pane

0xa0d8,	// (0x0004c36f) call6_pane_g1_ParamLimits

0xa0d8,	// (0x0004c36f) call6_pane_g1

0xa0ee,	// (0x0004c385) popup_call6_1st_window_ParamLimits

0xa0ee,	// (0x0004c385) popup_call6_1st_window

0xa0ff,	// (0x0004c396) popup_call6_2nd_window_ParamLimits

0xa0ff,	// (0x0004c396) popup_call6_2nd_window

0xa110,	// (0x0004c3a7) cell_call6_btn_pane_ParamLimits

0xa110,	// (0x0004c3a7) cell_call6_btn_pane

0xcfe4,	// (0x0004f27b) bg_popup_call2_in_pane_cp03

0xbcfd,	// (0x0004df94) popup_call6_1st_window_g1

0xbd05,	// (0x0004df9c) popup_call6_1st_window_g2

0xbd0d,	// (0x0004dfa4) popup_call6_1st_window_g3

0x0002,

0xfd3f,	// (0x00051fd6) popup_call6_1st_window_g

0xbd15,	// (0x0004dfac) popup_call6_1st_window_t1

0xbd24,	// (0x0004dfbb) popup_call6_1st_window_t2

0xbd34,	// (0x0004dfcb) popup_call6_1st_window_t3

0x0002,

0xfd46,	// (0x00051fdd) popup_call6_1st_window_t

0xcfe4,	// (0x0004f27b) bg_popup_call2_in_pane_cp04

0xbcfd,	// (0x0004df94) popup_call6_2nd_window_g1

0xbd05,	// (0x0004df9c) popup_call6_2nd_window_g2

0xbd0d,	// (0x0004dfa4) popup_call6_2nd_window_g3

0x0002,

0xfd3f,	// (0x00051fd6) popup_call6_2nd_window_g

0xbd15,	// (0x0004dfac) popup_call6_2nd_window_t1

0xa634,	// (0x0004c8cb) bg_button_pane_cp15

0xbd44,	// (0x0004dfdb) cell_call6_btn_pane_g1

0xbd4d,	// (0x0004dfe4) cell_call6_btn_pane_t1

0xa124,	// (0x0004c3bb) listscroll_wgtman_pane_ParamLimits

0xa124,	// (0x0004c3bb) listscroll_wgtman_pane

0xa147,	// (0x0004c3de) wgtman_btn_pane_ParamLimits

0xa147,	// (0x0004c3de) wgtman_btn_pane

0xceaa,	// (0x0004f141) aid_scroll_copy1

0xbd5c,	// (0x0004dff3) list_wgtman_pane

0xa18a,	// (0x0004c421) wgtman_btn_pane_g1_ParamLimits

0xa18a,	// (0x0004c421) wgtman_btn_pane_g1

0xa1b6,	// (0x0004c44d) wgtman_btn_pane_t1_ParamLimits

0xa1b6,	// (0x0004c44d) wgtman_btn_pane_t1

0xbd66,	// (0x0004dffd) wgtman_btn_pane_t2_ParamLimits

0xbd66,	// (0x0004dffd) wgtman_btn_pane_t2

0x0001,

0xfd4d,	// (0x00051fe4) wgtman_btn_pane_t_ParamLimits

0xfd4d,	// (0x00051fe4) wgtman_btn_pane_t

0xbd7d,	// (0x0004e014) listrow_wgtman_pane_ParamLimits

0xbd7d,	// (0x0004e014) listrow_wgtman_pane

0xbd91,	// (0x0004e028) listrow_wgtman_pane_g1

0xa1f3,	// (0x0004c48a) listrow_wgtman_pane_g2

0x0001,

0xfd52,	// (0x00051fe9) listrow_wgtman_pane_g

0xbd9a,	// (0x0004e031) listrow_wgtman_pane_t1

0xbda8,	// (0x0004e03f) listrow_wgtman_pane_t2

0x0001,

0xfd57,	// (0x00051fee) listrow_wgtman_pane_t

0xbdb6,	// (0x0004e04d) wait_bar_pane_cp09

0xbdbe,	// (0x0004e055) main_calllock_btn_pane

0xbdc8,	// (0x0004e05f) main_calllock_pane_g1

0xa634,	// (0x0004c8cb) bg_button_pane_cp17

0xbdd4,	// (0x0004e06b) main_calllock_btn_pane_g1

0xbddd,	// (0x0004e074) main_calllock_btn_pane_t1

0xa634,	// (0x0004c8cb) main_dialer3_pane

0xa634,	// (0x0004c8cb) main_fmrd2_pane

0xe896,	// (0x00050b2d) main_fs_bigclock_unlock_btn_pane_g1

0xbdf4,	// (0x0004e08b) main_fs_bigclock_unlock_btn_pane_t1

0xa1fd,	// (0x0004c494) area_fmrd2_info_pane_ParamLimits

0xa1fd,	// (0x0004c494) area_fmrd2_info_pane

0xa210,	// (0x0004c4a7) area_fmrd2_visual_pane_ParamLimits

0xa210,	// (0x0004c4a7) area_fmrd2_visual_pane

0xa21e,	// (0x0004c4b5) fmrd2_indi_pane_ParamLimits

0xa21e,	// (0x0004c4b5) fmrd2_indi_pane

0xa22b,	// (0x0004c4c2) area_fmrd2_visual_pane_g1

0xa233,	// (0x0004c4ca) area_fmrd2_visual_pane_t1

0xa243,	// (0x0004c4da) area_fmrd2_visual_pane_t2

0xa253,	// (0x0004c4ea) area_fmrd2_visual_pane_t3

0x0002,

0xfd61,	// (0x00051ff8) area_fmrd2_visual_pane_t

0xa263,	// (0x0004c4fa) area_fmrd2_info_pane_g1

0xa26b,	// (0x0004c502) area_fmrd2_info_pane_t1

0xa27b,	// (0x0004c512) area_fmrd2_info_pane_t2

0xa28b,	// (0x0004c522) area_fmrd2_info_pane_t3

0xa29b,	// (0x0004c532) area_fmrd2_info_pane_t4

0x0003,

0xfd68,	// (0x00051fff) area_fmrd2_info_pane_t

0xa2ab,	// (0x0004c542) fmrd2_indi_pane_t1

0xa2bb,	// (0x0004c552) fmrd2_indi_pane_t2

0xa2cb,	// (0x0004c562) fmrd2_indi_pane_t3

0x0002,

0xfd71,	// (0x00052008) fmrd2_indi_pane_t

0x9310,	// (0x0004b5a7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x9310,	// (0x0004b5a7) list_single_fs_bigclock_indicator_pane_g5

0x93b6,	// (0x0004b64d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x93b6,	// (0x0004b64d) list_single_fs_bigclock_indicator_pane_t5

0x9b64,	// (0x0004bdfb) aid_cell_bcale_month_pane_ParamLimits

0x9b64,	// (0x0004bdfb) aid_cell_bcale_month_pane

0x9b76,	// (0x0004be0d) bcale_month_pane_ParamLimits

0x9b76,	// (0x0004be0d) bcale_month_pane

0x9b8e,	// (0x0004be25) bcale_preview_pane_ParamLimits

0x9b8e,	// (0x0004be25) bcale_preview_pane

0xbb3b,	// (0x0004ddd2) list_single_fs_bigclock_pane_t1_ParamLimits

0xbb55,	// (0x0004ddec) list_single_fs_bigclock_pane_t2_ParamLimits

0xbb55,	// (0x0004ddec) list_single_fs_bigclock_pane_t2

0x0001,

0xfcf8,	// (0x00051f8f) list_single_fs_bigclock_pane_t_ParamLimits

0xfcf8,	// (0x00051f8f) list_single_fs_bigclock_pane_t

0xbdec,	// (0x0004e083) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd5c,	// (0x00051ff3) main_fs_bigclock_unlock_btn_pane_g

0xa2db,	// (0x0004c572) aid_dia3_key_size_ParamLimits

0xa2db,	// (0x0004c572) aid_dia3_key_size

0xa2ea,	// (0x0004c581) aid_dia3_listrow_size_ParamLimits

0xa2ea,	// (0x0004c581) aid_dia3_listrow_size

0xa2f8,	// (0x0004c58f) dia3_keypad_fun_pane_ParamLimits

0xa2f8,	// (0x0004c58f) dia3_keypad_fun_pane

0xa314,	// (0x0004c5ab) dia3_keypad_num_pane_ParamLimits

0xa314,	// (0x0004c5ab) dia3_keypad_num_pane

0xa32d,	// (0x0004c5c4) dia3_listscroll_pane_ParamLimits

0xa32d,	// (0x0004c5c4) dia3_listscroll_pane

0xa342,	// (0x0004c5d9) dia3_numentry_pane_ParamLimits

0xa342,	// (0x0004c5d9) dia3_numentry_pane

0xbe02,	// (0x0004e099) dia3_list_pane

0xbe0d,	// (0x0004e0a4) scroll_pane_cp12

0xa634,	// (0x0004c8cb) bg_dia3_numentry_pane

0xbe18,	// (0x0004e0af) dia3_numentry_pane_t1

0xa355,	// (0x0004c5ec) cell_dia3_key_num_pane

0xa35d,	// (0x0004c5f4) cell_dia3_key0_fun_pane_ParamLimits

0xa35d,	// (0x0004c5f4) cell_dia3_key0_fun_pane

0xa371,	// (0x0004c608) cell_dia3_key1_fun_pane_ParamLimits

0xa371,	// (0x0004c608) cell_dia3_key1_fun_pane

0xa389,	// (0x0004c620) dia3_listrow_pane

0x8d26,	// (0x0004afbd) bg_dia3_numentry_pane_g1

0xa634,	// (0x0004c8cb) bg_button_pane_cp21

0xbe27,	// (0x0004e0be) cell_dia3_key_num_pane_t1

0xbe35,	// (0x0004e0cc) cell_dia3_key_num_pane_t2

0xbe44,	// (0x0004e0db) cell_dia3_key_num_pane_t3

0xbe53,	// (0x0004e0ea) cell_dia3_key_num_pane_t4

0x0003,

0xfd78,	// (0x0005200f) cell_dia3_key_num_pane_t

0xa634,	// (0x0004c8cb) bg_button_pane_cp19

0xa39b,	// (0x0004c632) cell_dia3_key0_fun_pane_g1

0xa634,	// (0x0004c8cb) bg_button_pane_cp20

0xa3a3,	// (0x0004c63a) cell_dia3_key1_fun_pane_g1

0xa3ab,	// (0x0004c642) area_left_week_number_pane

0xa3b4,	// (0x0004c64b) area_top_day_name_pane

0xa3bd,	// (0x0004c654) frame_month_view_pane

0xa3c9,	// (0x0004c660) grid_month_view_pane

0xa3d3,	// (0x0004c66a) cell_top_day_name_pane_ParamLimits

0xa3d3,	// (0x0004c66a) cell_top_day_name_pane

0xa3ed,	// (0x0004c684) cell_area_left_week_number_pane_ParamLimits

0xa3ed,	// (0x0004c684) cell_area_left_week_number_pane

0xa403,	// (0x0004c69a) cell_month_view_pane_ParamLimits

0xa403,	// (0x0004c69a) cell_month_view_pane

0xbe62,	// (0x0004e0f9) frm_month_g1

0xa422,	// (0x0004c6b9) frm_month_g2

0xa42c,	// (0x0004c6c3) frm_month_g3

0xa436,	// (0x0004c6cd) frm_month_g4

0xa440,	// (0x0004c6d7) frm_month_g5

0xa44a,	// (0x0004c6e1) frm_month_g6

0xa456,	// (0x0004c6ed) frm_month_g7

0xbe6b,	// (0x0004e102) frm_month_g8

0xa462,	// (0x0004c6f9) frm_month_g9

0xa46b,	// (0x0004c702) frm_month_g10

0xa474,	// (0x0004c70b) frm_month_g11

0xa47d,	// (0x0004c714) frm_month_g12

0xa486,	// (0x0004c71d) frm_month_g13

0xa48f,	// (0x0004c726) frm_month_g14

0xa498,	// (0x0004c72f) frm_month_g15

0xa4a3,	// (0x0004c73a) frm_month_g16

0x000f,

0xfd81,	// (0x00052018) frm_month_g

0xa4ae,	// (0x0004c745) cell_top_day_name_pane_t1

0xa4bd,	// (0x0004c754) cell_area_left_week_number_pane_g1

0xa4ae,	// (0x0004c745) cell_area_left_week_number_pane_t1

0xe896,	// (0x00050b2d) cell_month_view_pane_g1

0xa4c5,	// (0x0004c75c) cell_month_view_pane_t1

0xa634,	// (0x0004c8cb) main_fps_pane

0x987d,	// (0x0004bb14) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x987d,	// (0x0004bb14) cmail_ddmenu_btn02_pane_cp1

0x9899,	// (0x0004bb30) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x9899,	// (0x0004bb30) cmail_ddmenu_btn02_pane_cp2

0x9d7f,	// (0x0004c016) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9d7f,	// (0x0004c016) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfca9,	// (0x00051f40) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfca9,	// (0x00051f40) cmail_ddmenu_btn02_pane_g

0x9d9d,	// (0x0004c034) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9d9d,	// (0x0004c034) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcae,	// (0x00051f45) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcae,	// (0x00051f45) cmail_ddmenu_btn02_pane_t

0xa4d4,	// (0x0004c76b) fps_text_pane_ParamLimits

0xa4d4,	// (0x0004c76b) fps_text_pane

0xa4eb,	// (0x0004c782) main_fps_pane_g1_ParamLimits

0xa4eb,	// (0x0004c782) main_fps_pane_g1

0xa503,	// (0x0004c79a) wait_bar_pane_cp010_ParamLimits

0xa503,	// (0x0004c79a) wait_bar_pane_cp010

0xa516,	// (0x0004c7ad) fps_text_pane_t1_ParamLimits

0xa516,	// (0x0004c7ad) fps_text_pane_t1

0x695c,	// (0x00048bf3) cam4_image_uncrop_pane_g1

0x6965,	// (0x00048bfc) cam4_image_uncrop_pane_g2

0x6970,	// (0x00048c07) cam4_image_uncrop_pane_g3

0x6979,	// (0x00048c10) cam4_image_uncrop_pane_g4

0x0003,

0xf788,	// (0x00051a1f) cam4_image_uncrop_pane_g

0xa389,	// (0x0004c620) dia3_listrow_pane_ParamLimits

0xa634,	// (0x0004c8cb) main_phob2_pane

0x99a2,	// (0x0004bc39) cell_tport_appsw_pane_cp02_ParamLimits

0x99a2,	// (0x0004bc39) cell_tport_appsw_pane_cp02

0x99b6,	// (0x0004bc4d) cell_tport_appsw_pane_cp03_ParamLimits

0x99b6,	// (0x0004bc4d) cell_tport_appsw_pane_cp03

0xa634,	// (0x0004c8cb) phob2_contact_card_pane

0xa634,	// (0x0004c8cb) phob2_listscroll_pane

0xbe74,	// (0x0004e10b) phob2_list_pane

0xbe7c,	// (0x0004e113) scroll_pane_cp034

0xa52e,	// (0x0004c7c5) phob2_cc_data_pane_ParamLimits

0xa52e,	// (0x0004c7c5) phob2_cc_data_pane

0xa54f,	// (0x0004c7e6) phob2_cc_listscroll_pane_ParamLimits

0xa54f,	// (0x0004c7e6) phob2_cc_listscroll_pane

0xa571,	// (0x0004c808) list_double_large_graphic_phob2_pane_ParamLimits

0xa571,	// (0x0004c808) list_double_large_graphic_phob2_pane

0xa586,	// (0x0004c81d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa586,	// (0x0004c81d) list_double_large_graphic_phob2_pane_g1

0x1494,	// (0x0004372b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1494,	// (0x0004372b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfda2,	// (0x00052039) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfda2,	// (0x00052039) list_double_large_graphic_phob2_pane_g

0x14a0,	// (0x00043737) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x14a0,	// (0x00043737) list_double_large_graphic_phob2_pane_t1

0x14b5,	// (0x0004374c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x14b5,	// (0x0004374c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfda7,	// (0x0005203e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfda7,	// (0x0005203e) list_double_large_graphic_phob2_pane_t

0xa634,	// (0x0004c8cb) list_highlight_pane_cp024

0xbe84,	// (0x0004e11b) phob2_cc_button_pane

0xa593,	// (0x0004c82a) phob2_cc_data_pane_g1_ParamLimits

0xa593,	// (0x0004c82a) phob2_cc_data_pane_g1

0xa5a9,	// (0x0004c840) phob2_cc_data_pane_g2_ParamLimits

0xa5a9,	// (0x0004c840) phob2_cc_data_pane_g2

0x0001,

0xfdac,	// (0x00052043) phob2_cc_data_pane_g_ParamLimits

0xfdac,	// (0x00052043) phob2_cc_data_pane_g

0xa5bd,	// (0x0004c854) phob2_cc_data_pane_t1_ParamLimits

0xa5bd,	// (0x0004c854) phob2_cc_data_pane_t1

0xa5d7,	// (0x0004c86e) phob2_cc_data_pane_t2_ParamLimits

0xa5d7,	// (0x0004c86e) phob2_cc_data_pane_t2

0xa5f1,	// (0x0004c888) phob2_cc_data_pane_t3_ParamLimits

0xa5f1,	// (0x0004c888) phob2_cc_data_pane_t3

0x0002,

0xfdb1,	// (0x00052048) phob2_cc_data_pane_t_ParamLimits

0xfdb1,	// (0x00052048) phob2_cc_data_pane_t

0xbe8c,	// (0x0004e123) phob2_cc_list_pane_ParamLimits

0xbe8c,	// (0x0004e123) phob2_cc_list_pane

0x7a53,	// (0x00049cea) scroll_pane_cp035_ParamLimits

0x7a53,	// (0x00049cea) scroll_pane_cp035

0xa6ad,	// (0x0004c944) bg_button_pane_cp033

0xbe98,	// (0x0004e12f) phob2_cc_button_pane_g1

0xbea4,	// (0x0004e13b) phob2_cc_button_pane_t1

0xbeb9,	// (0x0004e150) phob2_cc_button_pane_t2

0x0001,

0xfdb8,	// (0x0005204f) phob2_cc_button_pane_t

0xa60b,	// (0x0004c8a2) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa60b,	// (0x0004c8a2) list_double_large_graphic_phob2_cc_pane

0xa620,	// (0x0004c8b7) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa620,	// (0x0004c8b7) list_double_large_graphic_phob2_cc_pane_g1

0x14c7,	// (0x0004375e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x14c7,	// (0x0004375e) list_double_large_graphic_phob2_cc_pane_g2

0x14d3,	// (0x0004376a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x14d3,	// (0x0004376a) list_double_large_graphic_phob2_cc_pane_g3

0x14df,	// (0x00043776) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x14df,	// (0x00043776) list_double_large_graphic_phob2_cc_pane_g4

0x14eb,	// (0x00043782) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x14eb,	// (0x00043782) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdbd,	// (0x00052054) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdbd,	// (0x00052054) list_double_large_graphic_phob2_cc_pane_g

0x14f7,	// (0x0004378e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x14f7,	// (0x0004378e) list_double_large_graphic_phob2_cc_pane_t1

0x1520,	// (0x000437b7) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1520,	// (0x000437b7) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdc8,	// (0x0005205f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdc8,	// (0x0005205f) list_double_large_graphic_phob2_cc_pane_t

0xbecb,	// (0x0004e162) list_highlight_pane_cp025_ParamLimits

0xbecb,	// (0x0004e162) list_highlight_pane_cp025

0xa6ad,	// (0x0004c944) bg_button_pane_cp033_ParamLimits

0xbe98,	// (0x0004e12f) phob2_cc_button_pane_g1_ParamLimits

0xbea4,	// (0x0004e13b) phob2_cc_button_pane_t1_ParamLimits

0xbeb9,	// (0x0004e150) phob2_cc_button_pane_t2_ParamLimits

0xfdb8,	// (0x0005204f) phob2_cc_button_pane_t_ParamLimits

0x176b,	// (0x00043a02) popup_wgtman_window

0x71fd,	// (0x00049494) scroll_pane_cp038

0xa16c,	// (0x0004c403) wgtman_btn_pane_cp_01_ParamLimits

0xa16c,	// (0x0004c403) wgtman_btn_pane_cp_01

0xbed9,	// (0x0004e170) wgtman_content_pane

0xbee2,	// (0x0004e179) wgtman_heading_pane

0xa634,	// (0x0004c8cb) bg_heading_pane_cp02

0xbeeb,	// (0x0004e182) wgtman_heading_pane_g1

0xbef3,	// (0x0004e18a) wgtman_heading_pane_t1

0xbf01,	// (0x0004e198) scroll_pane_cp036

0xbf09,	// (0x0004e1a0) wgtman_list_pane

0x95da,	// (0x0004b871) wgtman_list_pane_t1_ParamLimits

0x95da,	// (0x0004b871) wgtman_list_pane_t1

0xae86,	// (0x0004d11d) cam4_grid_pane

0x0d81,	// (0x00043018) bg_button_pane_cp015_ParamLimits

0x78e6,	// (0x00049b7d) bg_button_pane_cp016_ParamLimits

0x78f9,	// (0x00049b90) bg_button_pane_cp017_ParamLimits

0x0dc9,	// (0x00043060) popup_vitu2_query_window_g3_ParamLimits

0x0dc9,	// (0x00043060) popup_vitu2_query_window_g3

0x0e44,	// (0x000430db) popup_vitu2_query_window_t6_ParamLimits

0x0e44,	// (0x000430db) popup_vitu2_query_window_t6

0x0e6f,	// (0x00043106) popup_vitu2_query_window_t7_ParamLimits

0x0e6f,	// (0x00043106) popup_vitu2_query_window_t7

0x695c,	// (0x00048bf3) cam4_grid_pane_g1

0x6965,	// (0x00048bfc) cam4_grid_pane_g2

0xbf11,	// (0x0004e1a8) cam4_grid_pane_g3

0xbf1a,	// (0x0004e1b1) cam4_grid_pane_g4

0x0003,

0xfdcd,	// (0x00052064) cam4_grid_pane_g

0x23e4,	// (0x0004467b) aid_placing_vt_slider_lsc_ParamLimits

0x26d4,	// (0x0004496b) vidtel_button_pane_ParamLimits

0x26d4,	// (0x0004496b) vidtel_button_pane

0xa634,	// (0x0004c8cb) bg_button_pane_cp034

0xa62c,	// (0x0004c8c3) vidtel_button_pane_g1

0xbf25,	// (0x0004e1bc) vidtel_button_pane_t1

0x75f4,	// (0x0004988b) aid_size_vtel_slider_touch

0x7a53,	// (0x00049cea) scroll_pane_cp039

0x8d95,	// (0x0004b02c) ncim_query_button_pane_cp01_ParamLimits

0x8db4,	// (0x0004b04b) ncimui_query_pane_g1_ParamLimits

0xa6ad,	// (0x0004c944) input_focus_pane_cp012_ParamLimits

0x8dd9,	// (0x0004b070) ncim_query_entry_pane_t1_ParamLimits

0x7a53,	// (0x00049cea) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
