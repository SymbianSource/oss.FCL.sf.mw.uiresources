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

#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00013fba };

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
0x86bb,	// (0x0001c675) Screen

0x86c5,	// (0x0001c67f) application_window

0x86f7,	// (0x0001c6b1) area_bottom_pane_ParamLimits

0x86f7,	// (0x0001c6b1) area_bottom_pane

0x8726,	// (0x0001c6e0) area_top_pane_ParamLimits

0x8726,	// (0x0001c6e0) area_top_pane

0x12ca,	// (0x00015284) call_video_uplink_pane_ParamLimits

0x12ca,	// (0x00015284) call_video_uplink_pane

0x87a9,	// (0x0001c763) main_pane_ParamLimits

0x87a9,	// (0x0001c763) main_pane

0x3dfd,	// (0x00017db7) context_pane

0xac09,	// (0x0001ebc3) navi_pane

0xac23,	// (0x0001ebdd) popup_cale_events_window_ParamLimits

0xac23,	// (0x0001ebdd) popup_cale_events_window

0x3e10,	// (0x00017dca) popup_mup_playback_window

0xac3a,	// (0x0001ebf4) signal_pane

0x1a51,	// (0x00015a0b) main_browser_pane

0x28be,	// (0x00016878) main_burst_pane

0x4473,	// (0x0001842d) main_calc_pane

0x28be,	// (0x00016878) main_cale_day_pane

0x1c19,	// (0x00015bd3) main_cale_month_pane

0x28be,	// (0x00016878) main_cale_week_pane

0x28be,	// (0x00016878) main_call_pane

0x1705,	// (0x000156bf) main_call_poc_pane

0x28be,	// (0x00016878) main_camera_pane

0x28be,	// (0x00016878) main_chi_dic_pane

0x26bd,	// (0x00016677) main_clock_pane

0x1705,	// (0x000156bf) main_fmradio_pane

0x28be,	// (0x00016878) main_graph_messa_pane

0x1705,	// (0x000156bf) main_help_pane

0x1a51,	// (0x00015a0b) main_im_pane

0x1960,	// (0x0001591a) main_image_pane_ParamLimits

0x1960,	// (0x0001591a) main_image_pane

0x1705,	// (0x000156bf) main_location2_pane

0x28be,	// (0x00016878) main_location_pane

0x1705,	// (0x000156bf) main_messa_pane

0x1705,	// (0x000156bf) main_mp2_pane

0x28be,	// (0x00016878) main_mp_pane

0x1705,	// (0x000156bf) main_msg_pane

0x1705,	// (0x000156bf) main_mup_eq_pane

0x1705,	// (0x000156bf) main_mup_pane

0x28be,	// (0x00016878) main_notes_pane

0x1705,	// (0x000156bf) main_pec_pane

0x1705,	// (0x000156bf) main_phob_pane

0x1705,	// (0x000156bf) main_pinb_pane

0x1705,	// (0x000156bf) main_postcard_pane

0x1705,	// (0x000156bf) main_qdial_pane

0x28be,	// (0x00016878) main_skin_pane

0x1705,	// (0x000156bf) main_smil2_pane

0x28be,	// (0x00016878) main_smil_pane

0x28be,	// (0x00016878) main_video_pane

0x28be,	// (0x00016878) main_video_tele_pane

0x1960,	// (0x0001591a) main_viewer_pane_ParamLimits

0x1960,	// (0x0001591a) main_viewer_pane

0x28be,	// (0x00016878) main_vorec_pane

0xab3b,	// (0x0001eaf5) popup_blid_sat_info_window_ParamLimits

0xab3b,	// (0x0001eaf5) popup_blid_sat_info_window

0xab4f,	// (0x0001eb09) popup_dyc_status_message_window_ParamLimits

0xab4f,	// (0x0001eb09) popup_dyc_status_message_window

0xab5b,	// (0x0001eb15) popup_grid_large_graphic_window_ParamLimits

0xab5b,	// (0x0001eb15) popup_grid_large_graphic_window

0xabb3,	// (0x0001eb6d) popup_loc_request_window_ParamLimits

0xabb3,	// (0x0001eb6d) popup_loc_request_window

0xabe3,	// (0x0001eb9d) popup_wml_address_window_ParamLimits

0xabe3,	// (0x0001eb9d) popup_wml_address_window

0xaa20,	// (0x0001e9da) call_muted_g1

0xa75b,	// (0x0001e715) popup_call_audio_conf_window_ParamLimits

0xa75b,	// (0x0001e715) popup_call_audio_conf_window

0xaa30,	// (0x0001e9ea) popup_call_audio_first_window_ParamLimits

0xaa30,	// (0x0001e9ea) popup_call_audio_first_window

0xaa64,	// (0x0001ea1e) popup_call_audio_in_window_ParamLimits

0xaa64,	// (0x0001ea1e) popup_call_audio_in_window

0xaa80,	// (0x0001ea3a) popup_call_audio_out_window_ParamLimits

0xaa80,	// (0x0001ea3a) popup_call_audio_out_window

0xaa9c,	// (0x0001ea56) popup_call_audio_second_window_ParamLimits

0xaa9c,	// (0x0001ea56) popup_call_audio_second_window

0xaac4,	// (0x0001ea7e) popup_call_audio_wait_window_ParamLimits

0xaac4,	// (0x0001ea7e) popup_call_audio_wait_window

0xaae3,	// (0x0001ea9d) popup_number_entry_window_ParamLimits

0xaae3,	// (0x0001ea9d) popup_number_entry_window

0x12f4,	// (0x000152ae) bg_popup_call_pane_cp05_ParamLimits

0x12f4,	// (0x000152ae) bg_popup_call_pane_cp05

0x1314,	// (0x000152ce) popup_number_entry_window_t1

0x1327,	// (0x000152e1) popup_number_entry_window_t2

0x1339,	// (0x000152f3) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x000230b5) popup_number_entry_window_t

0x134b,	// (0x00015305) text_title_cp2

0x135e,	// (0x00015318) bg_popup_call_pane_cp_ParamLimits

0x135e,	// (0x00015318) bg_popup_call_pane_cp

0x136c,	// (0x00015326) call_thumbnail_pane

0x1374,	// (0x0001532e) popup_call_audio_in_window_g1_ParamLimits

0x1374,	// (0x0001532e) popup_call_audio_in_window_g1

0x1380,	// (0x0001533a) popup_call_audio_in_window_g2_ParamLimits

0x1380,	// (0x0001533a) popup_call_audio_in_window_g2

0x138c,	// (0x00015346) popup_call_audio_in_window_g3_ParamLimits

0x138c,	// (0x00015346) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x000230be) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x000230be) popup_call_audio_in_window_g

0x1398,	// (0x00015352) popup_call_audio_in_window_t1_ParamLimits

0x1398,	// (0x00015352) popup_call_audio_in_window_t1

0x13b3,	// (0x0001536d) popup_call_audio_in_window_t2_ParamLimits

0x13b3,	// (0x0001536d) popup_call_audio_in_window_t2

0x13ce,	// (0x00015388) popup_call_audio_in_window_t3_ParamLimits

0x13ce,	// (0x00015388) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x000230c5) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x000230c5) popup_call_audio_in_window_t

0x135e,	// (0x00015318) bg_popup_call_pane_cp01_ParamLimits

0x135e,	// (0x00015318) bg_popup_call_pane_cp01

0x136c,	// (0x00015326) call_thumbnail_pane_cp02

0x13e1,	// (0x0001539b) call_type_pane_cp022

0x13e9,	// (0x000153a3) popup_call_audio_out_window_g1_ParamLimits

0x13e9,	// (0x000153a3) popup_call_audio_out_window_g1

0x13fb,	// (0x000153b5) popup_call_audio_out_window_g2_ParamLimits

0x13fb,	// (0x000153b5) popup_call_audio_out_window_g2

0x1407,	// (0x000153c1) popup_call_audio_out_window_g3_ParamLimits

0x1407,	// (0x000153c1) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x000230cc) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x000230cc) popup_call_audio_out_window_g

0x1419,	// (0x000153d3) popup_call_audio_out_window_t1_ParamLimits

0x1419,	// (0x000153d3) popup_call_audio_out_window_t1

0x1431,	// (0x000153eb) popup_call_audio_out_window_t2_ParamLimits

0x1431,	// (0x000153eb) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x000230d3) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x000230d3) popup_call_audio_out_window_t

0x1446,	// (0x00015400) bg_popup_call_pane_ParamLimits

0x1446,	// (0x00015400) bg_popup_call_pane

0x895a,	// (0x0001c914) call_thumbnail_pane_cp_ParamLimits

0x895a,	// (0x0001c914) call_thumbnail_pane_cp

0x14ca,	// (0x00015484) call_type_pane_cp01_ParamLimits

0x14ca,	// (0x00015484) call_type_pane_cp01

0x150e,	// (0x000154c8) popup_call_audio_first_window_g1_ParamLimits

0x150e,	// (0x000154c8) popup_call_audio_first_window_g1

0x155a,	// (0x00015514) popup_call_audio_first_window_g2_ParamLimits

0x155a,	// (0x00015514) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x000230d8) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x000230d8) popup_call_audio_first_window_g

0x159e,	// (0x00015558) popup_call_audio_first_window_t1_ParamLimits

0x159e,	// (0x00015558) popup_call_audio_first_window_t1

0x164a,	// (0x00015604) popup_call_audio_first_window_t4_ParamLimits

0x164a,	// (0x00015604) popup_call_audio_first_window_t4

0x16d6,	// (0x00015690) popup_call_audio_first_window_t5_ParamLimits

0x16d6,	// (0x00015690) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x000230dd) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x000230dd) popup_call_audio_first_window_t

0x1705,	// (0x000156bf) bg_popup_call_pane_cp02

0x170f,	// (0x000156c9) call_type_pane_cp023

0x1717,	// (0x000156d1) popup_call_audio_wait_window_g1

0x171f,	// (0x000156d9) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x000230e4) popup_call_audio_wait_window_g

0x1727,	// (0x000156e1) popup_call_audio_wait_window_t3

0x1735,	// (0x000156ef) bg_popup_call_pane_cp03_ParamLimits

0x1735,	// (0x000156ef) bg_popup_call_pane_cp03

0x1795,	// (0x0001574f) call_thumbnail_pane_cp011_ParamLimits

0x1795,	// (0x0001574f) call_thumbnail_pane_cp011

0x17a1,	// (0x0001575b) call_type_pane_cp034_ParamLimits

0x17a1,	// (0x0001575b) call_type_pane_cp034

0x17dd,	// (0x00015797) popup_call_audio_second_window_g1_ParamLimits

0x17dd,	// (0x00015797) popup_call_audio_second_window_g1

0x1819,	// (0x000157d3) popup_call_audio_second_window_g2_ParamLimits

0x1819,	// (0x000157d3) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x000230e9) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x000230e9) popup_call_audio_second_window_g

0x1855,	// (0x0001580f) popup_call_audio_second_window_t1_ParamLimits

0x1855,	// (0x0001580f) popup_call_audio_second_window_t1

0x18d6,	// (0x00015890) popup_call_audio_second_window_t2_ParamLimits

0x18d6,	// (0x00015890) popup_call_audio_second_window_t2

0x190c,	// (0x000158c6) popup_call_audio_second_window_t3_ParamLimits

0x190c,	// (0x000158c6) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x000230ee) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x000230ee) popup_call_audio_second_window_t

0x1705,	// (0x000156bf) bg_popup_call_pane_cp04

0x1942,	// (0x000158fc) list_conf_pane

0x194a,	// (0x00015904) popup_call_audio_conf_window_t1

0x1958,	// (0x00015912) call_thumbnail_pane_g1

0x1960,	// (0x0001591a) bg_pinb_pane_ParamLimits

0x1960,	// (0x0001591a) bg_pinb_pane

0x196e,	// (0x00015928) find_pinb_pane

0x1977,	// (0x00015931) listscroll_pinb_pane_ParamLimits

0x1977,	// (0x00015931) listscroll_pinb_pane

0x1986,	// (0x00015940) pinb_bg_pane_g1

0x897e,	// (0x0001c938) pinb_bg_pane_g2

0x8988,	// (0x0001c942) pinb_bg_pane_g3

0x8992,	// (0x0001c94c) pinb_bg_pane_g4

0x899c,	// (0x0001c956) pinb_bg_pane_g5

0x89a6,	// (0x0001c960) pinb_bg_pane_g6

0x89b1,	// (0x0001c96b) pinb_bg_pane_g7

0x89bc,	// (0x0001c976) pinb_bg_pane_g8

0x89c5,	// (0x0001c97f) pinb_bg_pane_g9

0x89cd,	// (0x0001c987) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x000230f5) pinb_bg_pane_g

0x89ea,	// (0x0001c9a4) grid_pinb_pane

0x89f3,	// (0x0001c9ad) list_pinb_pane

0x89fe,	// (0x0001c9b8) scroll_pane_cp01_ParamLimits

0x89fe,	// (0x0001c9b8) scroll_pane_cp01

0x1990,	// (0x0001594a) find_pinb_pane_g1_ParamLimits

0x1990,	// (0x0001594a) find_pinb_pane_g1

0x19a8,	// (0x00015962) find_pinb_pane_t1

0x19ba,	// (0x00015974) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0002310f) find_pinb_pane_t

0x19cf,	// (0x00015989) input_focus_pane_cp01_ParamLimits

0x19cf,	// (0x00015989) input_focus_pane_cp01

0x8a0e,	// (0x0001c9c8) cell_pinb_pane_ParamLimits

0x8a0e,	// (0x0001c9c8) cell_pinb_pane

0x8a27,	// (0x0001c9e1) cell_pinb_pane_g1_ParamLimits

0x8a27,	// (0x0001c9e1) cell_pinb_pane_g1

0x8a3b,	// (0x0001c9f5) cell_pinb_pane_g2_ParamLimits

0x8a3b,	// (0x0001c9f5) cell_pinb_pane_g2

0x19db,	// (0x00015995) cell_pinb_pane_g3_ParamLimits

0x19db,	// (0x00015995) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x00023114) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x00023114) cell_pinb_pane_g

0x1705,	// (0x000156bf) grid_highlight_pane_cp01

0x8a47,	// (0x0001ca01) list_pinb_item_pane_ParamLimits

0x8a47,	// (0x0001ca01) list_pinb_item_pane

0x1705,	// (0x000156bf) list_highlight_pane_cp02

0x8a5c,	// (0x0001ca16) list_pinb_item_pane_g1_ParamLimits

0x8a5c,	// (0x0001ca16) list_pinb_item_pane_g1

0x8a69,	// (0x0001ca23) list_pinb_item_pane_g2_ParamLimits

0x8a69,	// (0x0001ca23) list_pinb_item_pane_g2

0x8a75,	// (0x0001ca2f) list_pinb_item_pane_g3_ParamLimits

0x8a75,	// (0x0001ca2f) list_pinb_item_pane_g3

0x8a84,	// (0x0001ca3e) list_pinb_item_pane_g4_ParamLimits

0x8a84,	// (0x0001ca3e) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x0002311b) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x0002311b) list_pinb_item_pane_g

0x8a90,	// (0x0001ca4a) list_pinb_item_pane_t1_ParamLimits

0x8a90,	// (0x0001ca4a) list_pinb_item_pane_t1

0x7328,	// (0x0001b2e2) calc_display_pane

0x7340,	// (0x0001b2fa) calc_paper_pane

0x735c,	// (0x0001b316) grid_calc_pane

0x1705,	// (0x000156bf) bg_list_pane_cp01

0x8aa7,	// (0x0001ca61) clock_g1

0x8aaf,	// (0x0001ca69) clock_g2

0x0001,

0xf16a,	// (0x00023124) clock_g

0x8ab7,	// (0x0001ca71) clock_t1_ParamLimits

0x8ab7,	// (0x0001ca71) clock_t1

0x8acc,	// (0x0001ca86) clock_t2_ParamLimits

0x8acc,	// (0x0001ca86) clock_t2

0x8ade,	// (0x0001ca98) clock_t3_ParamLimits

0x8ade,	// (0x0001ca98) clock_t3

0x8af0,	// (0x0001caaa) clock_t4_ParamLimits

0x8af0,	// (0x0001caaa) clock_t4

0x8b02,	// (0x0001cabc) clock_t5_ParamLimits

0x8b02,	// (0x0001cabc) clock_t5

0x8b17,	// (0x0001cad1) clock_t6_ParamLimits

0x8b17,	// (0x0001cad1) clock_t6

0x8b29,	// (0x0001cae3) clock_t7_ParamLimits

0x8b29,	// (0x0001cae3) clock_t7

0x8b3b,	// (0x0001caf5) clock_t8_ParamLimits

0x8b3b,	// (0x0001caf5) clock_t8

0x8b4d,	// (0x0001cb07) clock_t9_ParamLimits

0x8b4d,	// (0x0001cb07) clock_t9

0x0008,

0xf16f,	// (0x00023129) clock_t_ParamLimits

0xf16f,	// (0x00023129) clock_t

0x19ef,	// (0x000159a9) popup_clock_analogue_window_cp02

0x19ef,	// (0x000159a9) popup_clock_digital_window_cp01

0x19f7,	// (0x000159b1) listscroll_help_pane

0x1705,	// (0x000156bf) phob_pre_status_pane

0x1a01,	// (0x000159bb) grid_qdial_pane

0x1705,	// (0x000156bf) listscroll_mce_pane

0x1a0b,	// (0x000159c5) bg_notes_pane

0x1a15,	// (0x000159cf) list_notes_pane

0x8b5f,	// (0x0001cb19) scroll_pane_cp06

0x1a1f,	// (0x000159d9) bg_calc_paper_pane

0x7386,	// (0x0001b340) list_calc_pane

0x1a51,	// (0x00015a0b) bg_calc_display_pane

0x73a0,	// (0x0001b35a) calc_display_pane_t1

0x73b5,	// (0x0001b36f) calc_display_pane_t2

0x73ca,	// (0x0001b384) calc_display_pane_t3

0x0002,

0xf182,	// (0x0002313c) calc_display_pane_t

0x73dc,	// (0x0001b396) cell_calc_pane_ParamLimits

0x73dc,	// (0x0001b396) cell_calc_pane

0x1a99,	// (0x00015a53) bg_calc_paper_pane_g1

0x1ab1,	// (0x00015a6b) bg_calc_paper_pane_g2

0x1aa5,	// (0x00015a5f) bg_calc_paper_pane_g3

0x1ac9,	// (0x00015a83) bg_calc_paper_pane_g4

0x1abd,	// (0x00015a77) bg_calc_paper_pane_g5

0x8b68,	// (0x0001cb22) bg_calc_paper_pane_g6

0x8b77,	// (0x0001cb31) bg_calc_paper_pane_g7

0x8b86,	// (0x0001cb40) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x00023143) bg_calc_paper_pane_g

0x8b95,	// (0x0001cb4f) calc_bg_paper_pane_g9

0x8ba4,	// (0x0001cb5e) list_calc_item_pane_ParamLimits

0x8ba4,	// (0x0001cb5e) list_calc_item_pane

0x1ad5,	// (0x00015a8f) list_calc_item_pane_g1

0x7403,	// (0x0001b3bd) list_calc_item_pane_t1_ParamLimits

0x7403,	// (0x0001b3bd) list_calc_item_pane_t1

0x7415,	// (0x0001b3cf) list_calc_item_pane_t2_ParamLimits

0x7415,	// (0x0001b3cf) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x00023154) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x00023154) list_calc_item_pane_t

0x1af4,	// (0x00015aae) cell_calc_pane_g1

0x1afe,	// (0x00015ab8) grid_highlight_pane_cp02

0x1b33,	// (0x00015aed) bg_calc_display_pane_g1

0x7443,	// (0x0001b3fd) bg_calc_display_pane_g2

0x1b20,	// (0x00015ada) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0002315e) bg_calc_display_pane_g

0x744d,	// (0x0001b407) cell_qdial_pane_ParamLimits

0x744d,	// (0x0001b407) cell_qdial_pane

0x8bbd,	// (0x0001cb77) cell_qdial_pane_g1_ParamLimits

0x8bbd,	// (0x0001cb77) cell_qdial_pane_g1

0x8bca,	// (0x0001cb84) cell_qdial_pane_g2_ParamLimits

0x8bca,	// (0x0001cb84) cell_qdial_pane_g2

0x1b3c,	// (0x00015af6) cell_qdial_pane_g3_ParamLimits

0x1b3c,	// (0x00015af6) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x00023165) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x00023165) cell_qdial_pane_g

0x8be8,	// (0x0001cba2) cell_qdial_pane_t1_ParamLimits

0x8be8,	// (0x0001cba2) cell_qdial_pane_t1

0x8c00,	// (0x0001cbba) cell_qdial_pane_t2_ParamLimits

0x8c00,	// (0x0001cbba) cell_qdial_pane_t2

0x8c13,	// (0x0001cbcd) cell_qdial_pane_t3_ParamLimits

0x8c13,	// (0x0001cbcd) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0002316e) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0002316e) cell_qdial_pane_t

0x1705,	// (0x000156bf) grid_highlight_pane_cp04

0x1b48,	// (0x00015b02) thumbnail_qdial_pane_ParamLimits

0x1b48,	// (0x00015b02) thumbnail_qdial_pane

0x1ba4,	// (0x00015b5e) list_help_pane

0x1bae,	// (0x00015b68) scroll_pane_cp02

0x8c26,	// (0x0001cbe0) help_list_pane_t1_ParamLimits

0x8c26,	// (0x0001cbe0) help_list_pane_t1

0x745f,	// (0x0001b419) bg_notes_pane_g2

0x7467,	// (0x0001b421) bg_notes_pane_g3

0x746f,	// (0x0001b429) notes_bg_pane_g1

0x7477,	// (0x0001b431) notes_bg_pane_g4

0x747f,	// (0x0001b439) notes_bg_pane_g5

0x7487,	// (0x0001b441) notes_bg_pane_g6

0x748f,	// (0x0001b449) notes_bg_pane_g7

0x7497,	// (0x0001b451) notes_bg_pane_g8

0x749f,	// (0x0001b459) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0002318c) notes_bg_pane_g

0x8c44,	// (0x0001cbfe) list_notes_text_pane_ParamLimits

0x8c44,	// (0x0001cbfe) list_notes_text_pane

0x1bff,	// (0x00015bb9) list_notes_text_pane_g1

0x8c5a,	// (0x0001cc14) list_notes_text_pane_t1

0x1c19,	// (0x00015bd3) listscroll_cale_week_pane

0x8c83,	// (0x0001cc3d) bg_cale_heading_pane

0x1c28,	// (0x00015be2) bg_cale_pane_cp01

0x8c97,	// (0x0001cc51) cale_week_corner_pane

0x8cad,	// (0x0001cc67) cale_week_day_heading_pane

0x8cc1,	// (0x0001cc7b) cale_week_scroll_pane_g1

0x8cd2,	// (0x0001cc8c) cale_week_scroll_pane_g2

0x8ce3,	// (0x0001cc9d) cale_week_scroll_pane_g3

0x8cf4,	// (0x0001ccae) cale_week_scroll_pane_g4

0x8d05,	// (0x0001ccbf) cale_week_scroll_pane_g5

0x8d16,	// (0x0001ccd0) cale_week_scroll_pane_g6

0x8d27,	// (0x0001cce1) cale_week_scroll_pane_g7

0x8d38,	// (0x0001ccf2) cale_week_scroll_pane_g8

0x8d49,	// (0x0001cd03) cale_week_scroll_pane_g9

0x8d5a,	// (0x0001cd14) cale_week_scroll_pane_g10

0x8d6b,	// (0x0001cd25) cale_week_scroll_pane_g11

0x8d7c,	// (0x0001cd36) cale_week_scroll_pane_g12

0x8d8d,	// (0x0001cd47) cale_week_scroll_pane_g13

0x8d9e,	// (0x0001cd58) cale_week_scroll_pane_g14

0x8daf,	// (0x0001cd69) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0002319b) cale_week_scroll_pane_g

0x8dc0,	// (0x0001cd7a) cale_week_time_pane

0x8dd1,	// (0x0001cd8b) grid_cale_week_pane

0x8de4,	// (0x0001cd9e) scroll_pane_cp08

0x8dfc,	// (0x0001cdb6) cell_cale_week_pane_ParamLimits

0x8dfc,	// (0x0001cdb6) cell_cale_week_pane

0x8e38,	// (0x0001cdf2) cale_week_day_heading_pane_t1

0x8e51,	// (0x0001ce0b) cale_week_day_heading_pane_t2

0x8e6a,	// (0x0001ce24) cale_week_day_heading_pane_t3

0x8e83,	// (0x0001ce3d) cale_week_day_heading_pane_t4

0x8e9c,	// (0x0001ce56) cale_week_day_heading_pane_t5

0x8eb5,	// (0x0001ce6f) cale_week_day_heading_pane_t6

0x8ece,	// (0x0001ce88) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x000231ba) cale_week_day_heading_pane_t

0x1c53,	// (0x00015c0d) bg_cale_side_pane

0x74a7,	// (0x0001b461) cale_week_time_pane_t1

0x74d3,	// (0x0001b48d) cale_week_time_pane_t2

0x74ff,	// (0x0001b4b9) cale_week_time_pane_t3

0x752b,	// (0x0001b4e5) cale_week_time_pane_t4

0x7557,	// (0x0001b511) cale_week_time_pane_t5

0x7583,	// (0x0001b53d) cale_week_time_pane_t6

0x75af,	// (0x0001b569) cale_week_time_pane_t7

0x75db,	// (0x0001b595) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x000231c9) cale_week_time_pane_t

0x8ee7,	// (0x0001cea1) cell_cale_week_pane_g2

0x8f03,	// (0x0001cebd) cell_cale_week_pane_g3_ParamLimits

0x8f03,	// (0x0001cebd) cell_cale_week_pane_g3

0x1c61,	// (0x00015c1b) grid_highlight_pane_cp07

0x1c69,	// (0x00015c23) listscroll_gms_pane

0x1c73,	// (0x00015c2d) grid_gms_pane

0x1c7c,	// (0x00015c36) listscroll_gms_pane_g1

0x1c84,	// (0x00015c3e) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x000231da) listscroll_gms_pane_g

0x8f1b,	// (0x0001ced5) scroll_pane_cp010

0x8f24,	// (0x0001cede) cell_gms_pane_ParamLimits

0x8f24,	// (0x0001cede) cell_gms_pane

0x8f35,	// (0x0001ceef) cell_gms_pane_g1

0x1c8c,	// (0x00015c46) cell_gms_pane_g2

0x1bff,	// (0x00015bb9) cell_gms_pane_g3

0x1c94,	// (0x00015c4e) cell_gms_pane_g4

0x0003,

0xf225,	// (0x000231df) cell_gms_pane_g

0x1c9d,	// (0x00015c57) grid_highlight_pane_cp09

0xa9ce,	// (0x0001e988) phob_pre_status_pane_g1

0xa9d6,	// (0x0001e990) phob_pre_status_pane_g2

0xa9de,	// (0x0001e998) phob_pre_status_pane_g3

0xa9e6,	// (0x0001e9a0) phob_pre_status_pane_g4

0x0004,

0xf627,	// (0x000235e1) phob_pre_status_pane_g

0xa9f6,	// (0x0001e9b0) phob_pre_status_pane_t1

0xaa04,	// (0x0001e9be) phob_pre_status_pane_t2

0xaa12,	// (0x0001e9cc) phob_pre_status_pane_t3

0x0002,

0xf632,	// (0x000235ec) phob_pre_status_pane_t

0x1705,	// (0x000156bf) bg_list_pane_cp05

0x760f,	// (0x0001b5c9) grid_vorec_pane

0x7617,	// (0x0001b5d1) vorec_t1

0x7625,	// (0x0001b5df) vorec_t2

0x7633,	// (0x0001b5ed) vorec_t3

0x7641,	// (0x0001b5fb) vorec_t4

0x764f,	// (0x0001b609) vorec_t5

0x765d,	// (0x0001b617) vorec_t6

0x0006,

0xf22e,	// (0x000231e8) vorec_t

0x7679,	// (0x0001b633) wait_bar_pane_cp01

0x2ccd,	// (0x00016c87) cell_vorec_pane_ParamLimits

0x2ccd,	// (0x00016c87) cell_vorec_pane

0x1d0f,	// (0x00015cc9) cell_vorec_pane_g1

0x1705,	// (0x000156bf) grid_highlight_pane_cp05

0x8f49,	// (0x0001cf03) cams_zoom_pane

0x8f55,	// (0x0001cf0f) image_vga_pane

0x8f62,	// (0x0001cf1c) main_camera_pane_g1

0x8f6e,	// (0x0001cf28) main_camera_pane_g2

0x8f7a,	// (0x0001cf34) main_camera_pane_g3

0x8f86,	// (0x0001cf40) main_camera_pane_g4

0x8f92,	// (0x0001cf4c) main_camera_pane_g5

0x8f9e,	// (0x0001cf58) main_camera_pane_g6

0x8faa,	// (0x0001cf64) main_camera_pane_g7

0x0007,

0xf23d,	// (0x000231f7) main_camera_pane_g

0x8fb6,	// (0x0001cf70) main_camera_pane_t1

0x8fc8,	// (0x0001cf82) main_camera_pane_t2

0x0001,

0xf24e,	// (0x00023208) main_camera_pane_t

0x8fec,	// (0x0001cfa6) cams_zoom_pane_cp_ParamLimits

0x8fec,	// (0x0001cfa6) cams_zoom_pane_cp

0x9010,	// (0x0001cfca) image_cif_pane_ParamLimits

0x9010,	// (0x0001cfca) image_cif_pane

0x902a,	// (0x0001cfe4) image_subqcif_pane

0x9032,	// (0x0001cfec) main_video_pane_g1_ParamLimits

0x9032,	// (0x0001cfec) main_video_pane_g1

0x9052,	// (0x0001d00c) main_video_pane_g2_ParamLimits

0x9052,	// (0x0001d00c) main_video_pane_g2

0x9080,	// (0x0001d03a) main_video_pane_g3_ParamLimits

0x9080,	// (0x0001d03a) main_video_pane_g3

0x90a9,	// (0x0001d063) main_video_pane_g4_ParamLimits

0x90a9,	// (0x0001d063) main_video_pane_g4

0x90d2,	// (0x0001d08c) main_video_pane_g5_ParamLimits

0x90d2,	// (0x0001d08c) main_video_pane_g5

0x1d25,	// (0x00015cdf) main_video_pane_g6_ParamLimits

0x1d25,	// (0x00015cdf) main_video_pane_g6

0x0006,

0xf253,	// (0x0002320d) main_video_pane_g_ParamLimits

0xf253,	// (0x0002320d) main_video_pane_g

0x90f4,	// (0x0001d0ae) main_video_pane_t1_ParamLimits

0x90f4,	// (0x0001d0ae) main_video_pane_t1

0x1d3f,	// (0x00015cf9) cams_zoom_pane_g1

0x1d48,	// (0x00015d02) cams_zoom_pane_g2

0x1d51,	// (0x00015d0b) cams_zoom_pane_g3

0x1d5a,	// (0x00015d14) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x0002321c) cams_zoom_pane_g

0x913e,	// (0x0001d0f8) grid_cams_pane

0x914a,	// (0x0001d104) linegrid_cams_pane

0x9156,	// (0x0001d110) cell_cams_pane_ParamLimits

0x9156,	// (0x0001d110) cell_cams_pane

0x1d63,	// (0x00015d1d) cams_burst_image_pane

0x1d6b,	// (0x00015d25) cell_cams_pane_g1

0x1705,	// (0x000156bf) grid_highlight_pane_cp03

0x1af4,	// (0x00015aae) mp_bg_pane_g1

0x1705,	// (0x000156bf) bg_list_pane_cp03

0x3cd9,	// (0x00017c93) bg_mp_pane

0x3ce1,	// (0x00017c9b) grid_mp_pane

0x3ce9,	// (0x00017ca3) media_player_g1

0x3cf1,	// (0x00017cab) media_player_t1

0x3cff,	// (0x00017cb9) media_player_t2

0x3d0d,	// (0x00017cc7) media_player_t3

0x3d1b,	// (0x00017cd5) media_player_t4

0x3d29,	// (0x00017ce3) media_player_t5

0x3d37,	// (0x00017cf1) media_player_t6

0x3d45,	// (0x00017cff) media_player_t7

0x0006,

0xf611,	// (0x000235cb) media_player_t

0x3d53,	// (0x00017d0d) wait_bar_pane_cp02

0xf5f6,	// (0x000235b0) main_usb_pane_t

0xa9c5,	// (0x0001e97f) cell_mp_pane

0x1af4,	// (0x00015aae) cell_mp_pane_g1

0x1705,	// (0x000156bf) grid_highlight_pane_cp06

0x1e13,	// (0x00015dcd) grid_skin_colour_pane

0x1e1b,	// (0x00015dd5) list_highlight_pane_cp03

0x91bf,	// (0x0001d179) skin_g1

0x1e23,	// (0x00015ddd) skin_t1

0x1e32,	// (0x00015dec) skin_t2

0x0001,

0xf297,	// (0x00023251) skin_t

0x91c7,	// (0x0001d181) cell_skin_colour_pane_ParamLimits

0x91c7,	// (0x0001d181) cell_skin_colour_pane

0x1e40,	// (0x00015dfa) cell_skin_colour_pane_g1

0x9210,	// (0x0001d1ca) call_video_g1_ParamLimits

0x9210,	// (0x0001d1ca) call_video_g1

0x921c,	// (0x0001d1d6) call_video_g2_ParamLimits

0x921c,	// (0x0001d1d6) call_video_g2

0x0001,

0xf29c,	// (0x00023256) call_video_g_ParamLimits

0xf29c,	// (0x00023256) call_video_g

0x9254,	// (0x0001d20e) call_video_uplink_pane_cp1_ParamLimits

0x9254,	// (0x0001d20e) call_video_uplink_pane_cp1

0x1e5a,	// (0x00015e14) call_video_uplink_pane_cp2

0x92e3,	// (0x0001d29d) video_down_crop_pane_ParamLimits

0x92e3,	// (0x0001d29d) video_down_crop_pane

0x9399,	// (0x0001d353) video_down_pane_ParamLimits

0x9399,	// (0x0001d353) video_down_pane

0x1e62,	// (0x00015e1c) video_down_subqcif_pane_ParamLimits

0x1e62,	// (0x00015e1c) video_down_subqcif_pane

0x1e7a,	// (0x00015e34) video_down_subqcif_pane_cp_ParamLimits

0x1e7a,	// (0x00015e34) video_down_subqcif_pane_cp

0x1e9e,	// (0x00015e58) im_reading_pane_ParamLimits

0x1e9e,	// (0x00015e58) im_reading_pane

0x9437,	// (0x0001d3f1) im_writing_pane_ParamLimits

0x9437,	// (0x0001d3f1) im_writing_pane

0x944d,	// (0x0001d407) im_reading_pane_t1

0x1eb8,	// (0x00015e72) list_im_pane

0x1ec9,	// (0x00015e83) scroll_pane_cp07

0x9485,	// (0x0001d43f) im_writing_pane_t1_ParamLimits

0x9485,	// (0x0001d43f) im_writing_pane_t1

0x1ee2,	// (0x00015e9c) im_writing_pane_t2_ParamLimits

0x1ee2,	// (0x00015e9c) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x00023260) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x00023260) im_writing_pane_t

0x1705,	// (0x000156bf) input_focus_pane_cp04

0x1705,	// (0x000156bf) input_focus_pane_cp05

0x949a,	// (0x0001d454) list_im_single_pane_ParamLimits

0x949a,	// (0x0001d454) list_im_single_pane

0x1eff,	// (0x00015eb9) list_single_im_pane_t1

0xa98b,	// (0x0001e945) blid_accuracy_pane

0xa993,	// (0x0001e94d) blid_compass_pane

0xa99b,	// (0x0001e955) main_location_t1

0xa9a9,	// (0x0001e963) main_location_t2

0xa9b7,	// (0x0001e971) main_location_t3

0x0002,

0xf620,	// (0x000235da) main_location_t

0x1705,	// (0x000156bf) aid_levels_location

0x1af4,	// (0x00015aae) blid_accuracy_pane_g1

0x1af4,	// (0x00015aae) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x000232c2) blid_accuracy_pane_g

0x1f39,	// (0x00015ef3) wml_content_pane

0x1f77,	// (0x00015f31) wml_button_pane_ParamLimits

0x1f77,	// (0x00015f31) wml_button_pane

0x94b2,	// (0x0001d46c) wml_list_single_large_pane_ParamLimits

0x94b2,	// (0x0001d46c) wml_list_single_large_pane

0x94c9,	// (0x0001d483) wml_list_single_medium_pane_ParamLimits

0x94c9,	// (0x0001d483) wml_list_single_medium_pane

0x94e1,	// (0x0001d49b) wml_list_single_small_pane_ParamLimits

0x94e1,	// (0x0001d49b) wml_list_single_small_pane

0x1f8b,	// (0x00015f45) wml_selection_box_pane_ParamLimits

0x1f8b,	// (0x00015f45) wml_selection_box_pane

0x1f9e,	// (0x00015f58) wml_list_single_pane_t1

0x1fad,	// (0x00015f67) wml_list_single_medium_pane_t1

0x1fbc,	// (0x00015f76) wml_list_single_large_pane_t1

0x1fcb,	// (0x00015f85) input_focus_pane_cp02_ParamLimits

0x1fcb,	// (0x00015f85) input_focus_pane_cp02

0x1fde,	// (0x00015f98) wml_selection_box_pane_g1

0x1fe7,	// (0x00015fa1) wml_selection_box_pane_t1_ParamLimits

0x1fe7,	// (0x00015fa1) wml_selection_box_pane_t1

0x1960,	// (0x0001591a) bg_wml_button_pane_ParamLimits

0x1960,	// (0x0001591a) bg_wml_button_pane

0x1fff,	// (0x00015fb9) wml_button_pane_g1

0x2007,	// (0x00015fc1) wml_button_pane_t1

0x1fff,	// (0x00015fb9) wml_button_bg_pane_g1

0x2017,	// (0x00015fd1) wml_button_bg_pane_g2

0x201f,	// (0x00015fd9) wml_button_bg_pane_g3

0x2027,	// (0x00015fe1) wml_button_bg_pane_g4

0x202f,	// (0x00015fe9) wml_button_bg_pane_g5

0x2037,	// (0x00015ff1) wml_button_bg_pane_g6

0x203f,	// (0x00015ff9) wml_button_bg_pane_g7

0x2047,	// (0x00016001) wml_button_bg_pane_g8

0x204f,	// (0x00016009) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x00023265) wml_button_bg_pane_g

0x94fc,	// (0x0001d4b6) bg_list_pane_cp02

0x2057,	// (0x00016011) mce_header_pane_ParamLimits

0x2057,	// (0x00016011) mce_header_pane

0x206b,	// (0x00016025) mce_icon_pane

0x206b,	// (0x00016025) mce_image_pane

0x2074,	// (0x0001602e) mce_text_pane_ParamLimits

0x2074,	// (0x0001602e) mce_text_pane

0x9505,	// (0x0001d4bf) scroll_pane_cp03

0x9505,	// (0x0001d4bf) scroll_pane_cp04

0x2088,	// (0x00016042) scroll_pane_cp05_ParamLimits

0x2088,	// (0x00016042) scroll_pane_cp05

0x950d,	// (0x0001d4c7) mce_header_field_pane_ParamLimits

0x950d,	// (0x0001d4c7) mce_header_field_pane

0x952d,	// (0x0001d4e7) mce_header_field_pane_2_ParamLimits

0x952d,	// (0x0001d4e7) mce_header_field_pane_2

0x9543,	// (0x0001d4fd) mce_header_field_pane_3

0x954b,	// (0x0001d505) list_single_mce_message_pane_ParamLimits

0x954b,	// (0x0001d505) list_single_mce_message_pane

0x9562,	// (0x0001d51c) list_single_mce_smart_pane_ParamLimits

0x9562,	// (0x0001d51c) list_single_mce_smart_pane

0x2094,	// (0x0001604e) input_focus_pane_cp03

0x209d,	// (0x00016057) list_header_data_pane

0x9584,	// (0x0001d53e) mce_header_field_pane_t1

0x9592,	// (0x0001d54c) list_single_mce_header_pane_ParamLimits

0x9592,	// (0x0001d54c) list_single_mce_header_pane

0x20a5,	// (0x0001605f) list_single_mce_header_pane_t1

0x20b4,	// (0x0001606e) list_single_mce_message_pane_g1

0x20bd,	// (0x00016077) list_single_mce_message_pane_t1

0x95c8,	// (0x0001d582) bg_cale_heading_pane_cp01_ParamLimits

0x95c8,	// (0x0001d582) bg_cale_heading_pane_cp01

0x20cc,	// (0x00016086) bg_cale_pane_cp02_ParamLimits

0x20cc,	// (0x00016086) bg_cale_pane_cp02

0x95eb,	// (0x0001d5a5) cale_month_corner_pane

0x9601,	// (0x0001d5bb) cale_month_day_heading_pane_ParamLimits

0x9601,	// (0x0001d5bb) cale_month_day_heading_pane

0x9624,	// (0x0001d5de) cale_month_pane_g1_ParamLimits

0x9624,	// (0x0001d5de) cale_month_pane_g1

0x9640,	// (0x0001d5fa) cale_month_pane_g2_ParamLimits

0x9640,	// (0x0001d5fa) cale_month_pane_g2

0x9659,	// (0x0001d613) cale_month_pane_g3_ParamLimits

0x9659,	// (0x0001d613) cale_month_pane_g3

0x9685,	// (0x0001d63f) cale_month_pane_g4_ParamLimits

0x9685,	// (0x0001d63f) cale_month_pane_g4

0x96b1,	// (0x0001d66b) cale_month_pane_g5_ParamLimits

0x96b1,	// (0x0001d66b) cale_month_pane_g5

0x96dd,	// (0x0001d697) cale_month_pane_g6_ParamLimits

0x96dd,	// (0x0001d697) cale_month_pane_g6

0x9709,	// (0x0001d6c3) cale_month_pane_g7_ParamLimits

0x9709,	// (0x0001d6c3) cale_month_pane_g7

0x9735,	// (0x0001d6ef) cale_month_pane_g8_ParamLimits

0x9735,	// (0x0001d6ef) cale_month_pane_g8

0x9761,	// (0x0001d71b) cale_month_pane_g9_ParamLimits

0x9761,	// (0x0001d71b) cale_month_pane_g9

0x978b,	// (0x0001d745) cale_month_pane_g10_ParamLimits

0x978b,	// (0x0001d745) cale_month_pane_g10

0x97b5,	// (0x0001d76f) cale_month_pane_g11_ParamLimits

0x97b5,	// (0x0001d76f) cale_month_pane_g11

0x97df,	// (0x0001d799) cale_month_pane_g12_ParamLimits

0x97df,	// (0x0001d799) cale_month_pane_g12

0x9809,	// (0x0001d7c3) cale_month_pane_g13_ParamLimits

0x9809,	// (0x0001d7c3) cale_month_pane_g13

0x000c,

0xf2be,	// (0x00023278) cale_month_pane_g_ParamLimits

0xf2be,	// (0x00023278) cale_month_pane_g

0x9833,	// (0x0001d7ed) cale_month_week_pane

0x9844,	// (0x0001d7fe) grid_cale_month_pane_ParamLimits

0x9844,	// (0x0001d7fe) grid_cale_month_pane

0x9862,	// (0x0001d81c) cale_month_day_heading_pane_t1

0x98c0,	// (0x0001d87a) cale_month_day_heading_pane_t2

0x9925,	// (0x0001d8df) cale_month_day_heading_pane_t3

0x998a,	// (0x0001d944) cale_month_day_heading_pane_t4

0x99ef,	// (0x0001d9a9) cale_month_day_heading_pane_t5

0x9a54,	// (0x0001da0e) cale_month_day_heading_pane_t6

0x9ab9,	// (0x0001da73) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x00023293) cale_month_day_heading_pane_t

0x1c53,	// (0x00015c0d) bg_cale_side_pane_cp01

0x9b1e,	// (0x0001dad8) cale_month_week_pane_t1

0x9b35,	// (0x0001daef) cale_month_week_pane_t2

0x9b4c,	// (0x0001db06) cale_month_week_pane_t3

0x9b63,	// (0x0001db1d) cale_month_week_pane_t4

0x9b7a,	// (0x0001db34) cale_month_week_pane_t5

0x9b91,	// (0x0001db4b) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x000232a2) cale_month_week_pane_t

0x9ba8,	// (0x0001db62) cell_cale_month_pane_ParamLimits

0x9ba8,	// (0x0001db62) cell_cale_month_pane

0x7681,	// (0x0001b63b) cell_cale_month_pane_g1

0x768d,	// (0x0001b647) cell_cale_month_pane_t1_ParamLimits

0x768d,	// (0x0001b647) cell_cale_month_pane_t1

0x1c61,	// (0x00015c1b) grid_highlight_pane_cp08

0x1af4,	// (0x00015aae) main_smil_g1

0x9c4e,	// (0x0001dc08) smil_status_pane

0x2137,	// (0x000160f1) smil_text_pane

0x3bb9,	// (0x00017b73) bg_popup_call3_rect_pane_g8

0x3bc1,	// (0x00017b7b) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x0002355b) bg_popup_call3_rect_pane_g

0x3e8a,	// (0x00017e44) smil_status_volume_pane_g1

0x2141,	// (0x000160fb) smil_status_pane_t1

0x77cb,	// (0x0001b785) volume_smil_pane

0x2158,	// (0x00016112) list_smil_text_pane

0x9c5f,	// (0x0001dc19) scroll_pane_cp011

0x9c68,	// (0x0001dc22) smil_text_list_pane_t1_ParamLimits

0x9c68,	// (0x0001dc22) smil_text_list_pane_t1

0x76a9,	// (0x0001b663) aid_volume_smil_ParamLimits

0x76a9,	// (0x0001b663) aid_volume_smil

0x1af4,	// (0x00015aae) smil_volume_pane_g1

0x1af4,	// (0x00015aae) smil_volume_pane_g2

0x0001,

0xf308,	// (0x000232c2) smil_volume_pane_g

0x1a51,	// (0x00015a0b) listscroll_cale_day_pane

0x2184,	// (0x0001613e) bg_cale_pane

0x219c,	// (0x00016156) list_cale_pane

0x21ad,	// (0x00016167) scroll_pane_cp09

0x21be,	// (0x00016178) cale_bg_pane_g1

0x21c6,	// (0x00016180) cale_bg_pane_g2

0x21ce,	// (0x00016188) cale_bg_pane_g3

0x21d6,	// (0x00016190) cale_bg_pane_g4

0x21de,	// (0x00016198) cale_bg_pane_g5

0x21e6,	// (0x000161a0) cale_bg_pane_g6

0x21ee,	// (0x000161a8) cale_bg_pane_g7

0x21f6,	// (0x000161b0) cale_bg_pane_g8

0x21fe,	// (0x000161b8) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x000232c7) cale_bg_pane_g

0x9cad,	// (0x0001dc67) list_cale_time_pane_ParamLimits

0x9cad,	// (0x0001dc67) list_cale_time_pane

0x2206,	// (0x000161c0) list_cale_time_pane_g1_ParamLimits

0x2206,	// (0x000161c0) list_cale_time_pane_g1

0x2212,	// (0x000161cc) list_cale_time_pane_g2_ParamLimits

0x2212,	// (0x000161cc) list_cale_time_pane_g2

0x9cc4,	// (0x0001dc7e) list_cale_time_pane_g3_ParamLimits

0x9cc4,	// (0x0001dc7e) list_cale_time_pane_g3

0x9cd0,	// (0x0001dc8a) list_cale_time_pane_g4_ParamLimits

0x9cd0,	// (0x0001dc8a) list_cale_time_pane_g4

0x9cdc,	// (0x0001dc96) list_cale_time_pane_g5_ParamLimits

0x9cdc,	// (0x0001dc96) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x000232da) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x000232da) list_cale_time_pane_g

0x222c,	// (0x000161e6) list_cale_time_pane_t1_ParamLimits

0x222c,	// (0x000161e6) list_cale_time_pane_t1

0x2254,	// (0x0001620e) list_cale_time_pane_t2_ParamLimits

0x2254,	// (0x0001620e) list_cale_time_pane_t2

0x9f84,	// (0x0001df3e) aid_blid_cardinal_pane

0x9fc2,	// (0x0001df7c) compass_pane_t4

0x227c,	// (0x00016236) list_cale_time_pane_t4_ParamLimits

0x227c,	// (0x00016236) list_cale_time_pane_t4

0x9fd0,	// (0x0001df8a) compass_pane_t5

0x9fde,	// (0x0001df98) compass_pane_t6

0x9fec,	// (0x0001dfa6) compass_pane_t7

0x27c1,	// (0x0001677b) navi_pane_cc_t1

0x2977,	// (0x00016931) aid_phob_thumbnail_center_pane

0xa538,	// (0x0001e4f2) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x000232e7) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x000232e7) list_cale_time_pane_t

0x135e,	// (0x00015318) bg_popup_window_pane_cp02_ParamLimits

0x135e,	// (0x00015318) bg_popup_window_pane_cp02

0x22a4,	// (0x0001625e) heading_pane_cp01_ParamLimits

0x22a4,	// (0x0001625e) heading_pane_cp01

0x22b0,	// (0x0001626a) loc_req_pane_ParamLimits

0x22b0,	// (0x0001626a) loc_req_pane

0x22c0,	// (0x0001627a) loc_type_pane_ParamLimits

0x22c0,	// (0x0001627a) loc_type_pane

0x22d2,	// (0x0001628c) loc_type_pane_t1_ParamLimits

0x22d2,	// (0x0001628c) loc_type_pane_t1

0x22e4,	// (0x0001629e) loc_type_pane_t2_ParamLimits

0x22e4,	// (0x0001629e) loc_type_pane_t2

0x22f6,	// (0x000162b0) loc_type_pane_t3_ParamLimits

0x22f6,	// (0x000162b0) loc_type_pane_t3

0x0002,

0xf334,	// (0x000232ee) loc_type_pane_t_ParamLimits

0xf334,	// (0x000232ee) loc_type_pane_t

0x2308,	// (0x000162c2) list_loc_req_pane

0x2312,	// (0x000162cc) scroll_pane_cp012

0x9ce8,	// (0x0001dca2) list_single_loc_request_popup_menu_pane_ParamLimits

0x9ce8,	// (0x0001dca2) list_single_loc_request_popup_menu_pane

0x231b,	// (0x000162d5) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x231b,	// (0x000162d5) list_single_loc_request_popup_menu_pane_g1

0x2327,	// (0x000162e1) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x2327,	// (0x000162e1) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x000232f5) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x000232f5) list_single_loc_request_popup_menu_pane_g

0x2333,	// (0x000162ed) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x2333,	// (0x000162ed) list_single_loc_request_popup_menu_pane_t1

0x9cfa,	// (0x0001dcb4) bg_popup_window_pane_cp03_ParamLimits

0x9cfa,	// (0x0001dcb4) bg_popup_window_pane_cp03

0x9d08,	// (0x0001dcc2) heading_loc_req_pane_ParamLimits

0x9d08,	// (0x0001dcc2) heading_loc_req_pane

0x9d14,	// (0x0001dcce) popup_dyc_status_message_window_g1_ParamLimits

0x9d14,	// (0x0001dcce) popup_dyc_status_message_window_g1

0x9d20,	// (0x0001dcda) popup_dyc_status_message_window_t1_ParamLimits

0x9d20,	// (0x0001dcda) popup_dyc_status_message_window_t1

0x9d32,	// (0x0001dcec) popup_dyc_status_message_window_t2_ParamLimits

0x9d32,	// (0x0001dcec) popup_dyc_status_message_window_t2

0x9d44,	// (0x0001dcfe) popup_dyc_status_message_window_t3_ParamLimits

0x9d44,	// (0x0001dcfe) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x000232fa) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x000232fa) popup_dyc_status_message_window_t

0x1705,	// (0x000156bf) bg_heading_pane_cp01

0x2349,	// (0x00016303) heading_loc_req_pane_g1

0x2351,	// (0x0001630b) heading_loc_req_pane_g2

0x2359,	// (0x00016313) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x00023301) heading_loc_req_pane_g

0x2361,	// (0x0001631b) heading_loc_req_pane_t1

0x2408,	// (0x000163c2) bg_popup_sub_pane_cp01_ParamLimits

0x2408,	// (0x000163c2) bg_popup_sub_pane_cp01

0x2416,	// (0x000163d0) popup_cale_events_window_g1_ParamLimits

0x2416,	// (0x000163d0) popup_cale_events_window_g1

0x2436,	// (0x000163f0) popup_cale_events_window_g2_ParamLimits

0x2436,	// (0x000163f0) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x00023335) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x00023335) popup_cale_events_window_g

0x2456,	// (0x00016410) popup_cale_events_window_t1_ParamLimits

0x2456,	// (0x00016410) popup_cale_events_window_t1

0x2468,	// (0x00016422) popup_cale_events_window_t2_ParamLimits

0x2468,	// (0x00016422) popup_cale_events_window_t2

0x24a6,	// (0x00016460) popup_cale_events_window_t3_ParamLimits

0x24a6,	// (0x00016460) popup_cale_events_window_t3

0x24e0,	// (0x0001649a) popup_cale_events_window_t4_ParamLimits

0x24e0,	// (0x0001649a) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0002333a) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0002333a) popup_cale_events_window_t

0x9dca,	// (0x0001dd84) call_type_pane

0x298f,	// (0x00016949) popup_call_status_window_g1

0x9dd6,	// (0x0001dd90) popup_call_status_window_g2

0x9de2,	// (0x0001dd9c) popup_call_status_window_g3

0x0002,

0xf389,	// (0x00023343) popup_call_status_window_g

0x2516,	// (0x000164d0) call_type_pane_g1

0x251f,	// (0x000164d9) call_type_pane_g2

0x0001,

0xf390,	// (0x0002334a) call_type_pane_g

0x1705,	// (0x000156bf) bg_popup_sub_pane_cp02

0x2528,	// (0x000164e2) listscroll_popup_wml_pane

0x2530,	// (0x000164ea) list_wml_pane

0x253a,	// (0x000164f4) scroll_pane_cp013

0x9dee,	// (0x0001dda8) list_single_graphic_popup_wml_pane_ParamLimits

0x9dee,	// (0x0001dda8) list_single_graphic_popup_wml_pane

0x1af4,	// (0x00015aae) list_single_graphic_popup_wml_pane_g1

0x2543,	// (0x000164fd) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x0002334f) list_single_graphic_popup_wml_pane_g

0x254b,	// (0x00016505) list_single_graphic_popup_wml_pane_t1

0x2559,	// (0x00016513) aid_call_pane

0x1958,	// (0x00015912) popup_clock_analogue_window_g1

0x1958,	// (0x00015912) popup_clock_analogue_window_g2

0x76cb,	// (0x0001b685) popup_clock_analogue_window_g3

0x76cb,	// (0x0001b685) popup_clock_analogue_window_g4

0x1af4,	// (0x00015aae) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x00023354) popup_clock_analogue_window_g

0x76d3,	// (0x0001b68d) popup_clock_analogue_window_t1

0x76e1,	// (0x0001b69b) clock_digital_number_pane_ParamLimits

0x76e1,	// (0x0001b69b) clock_digital_number_pane

0x76ed,	// (0x0001b6a7) clock_digital_number_pane_cp02_ParamLimits

0x76ed,	// (0x0001b6a7) clock_digital_number_pane_cp02

0x76f9,	// (0x0001b6b3) clock_digital_number_pane_cp03_ParamLimits

0x76f9,	// (0x0001b6b3) clock_digital_number_pane_cp03

0x7705,	// (0x0001b6bf) clock_digital_number_pane_cp04_ParamLimits

0x7705,	// (0x0001b6bf) clock_digital_number_pane_cp04

0x7711,	// (0x0001b6cb) clock_digital_separator_pane_ParamLimits

0x7711,	// (0x0001b6cb) clock_digital_separator_pane

0x771d,	// (0x0001b6d7) popup_clock_digital_window_t1

0x1af4,	// (0x00015aae) clock_digital_number_pane_g1

0x1af4,	// (0x00015aae) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x000232c2) clock_digital_number_pane_g

0x1af4,	// (0x00015aae) clock_digital_separator_pane_g1

0x1af4,	// (0x00015aae) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x000232c2) clock_digital_separator_pane_g

0x1705,	// (0x000156bf) bg_popup_window_pane_cp04

0x25d8,	// (0x00016592) heading_pane_cp03

0x25e0,	// (0x0001659a) listscroll_popup_gms_pane

0x25e8,	// (0x000165a2) grid_large_graphic_popup_pane

0x25f2,	// (0x000165ac) listscroll_popup_gms_pane_g1

0x25fa,	// (0x000165b4) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x0002335f) listscroll_popup_gms_pane_g

0x1f6f,	// (0x00015f29) scroll_pane_cp014

0x9e02,	// (0x0001ddbc) cell_large_graphic_popup_pane_ParamLimits

0x9e02,	// (0x0001ddbc) cell_large_graphic_popup_pane

0x9e19,	// (0x0001ddd3) cell_large_graphic_popup_pane_g1_ParamLimits

0x9e19,	// (0x0001ddd3) cell_large_graphic_popup_pane_g1

0x2602,	// (0x000165bc) cell_large_graphic_popup_pane_g2_ParamLimits

0x2602,	// (0x000165bc) cell_large_graphic_popup_pane_g2

0x260e,	// (0x000165c8) cell_large_graphic_popup_pane_g3_ParamLimits

0x260e,	// (0x000165c8) cell_large_graphic_popup_pane_g3

0x261b,	// (0x000165d5) cell_large_graphic_popup_pane_g4_ParamLimits

0x261b,	// (0x000165d5) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x00023364) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x00023364) cell_large_graphic_popup_pane_g

0x262b,	// (0x000165e5) grid_highlight_pane_cp010

0x1af4,	// (0x00015aae) bg_popup_call_pane_g1

0x2635,	// (0x000165ef) list_single_graphic_popup_conf_pane_ParamLimits

0x2635,	// (0x000165ef) list_single_graphic_popup_conf_pane

0x2648,	// (0x00016602) list_highlight_pane_cp01

0x2651,	// (0x0001660b) list_single_graphic_popup_conf_pane_g1

0x2659,	// (0x00016613) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x0002336d) list_single_graphic_popup_conf_pane_g

0x2661,	// (0x0001661b) list_single_graphic_popup_conf_pane_t1

0x266f,	// (0x00016629) linegrid_cams_pane_g1

0x9e25,	// (0x0001dddf) linegrid_cams_pane_g2

0x1bff,	// (0x00015bb9) linegrid_cams_pane_g3

0x2678,	// (0x00016632) linegrid_cams_pane_g4

0x9e2e,	// (0x0001dde8) linegrid_cams_pane_g5

0x9e37,	// (0x0001ddf1) linegrid_cams_pane_g6

0x1c94,	// (0x00015c4e) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x00023372) linegrid_cams_pane_g

0x2681,	// (0x0001663b) popup_clock_analogue_window

0x2681,	// (0x0001663b) popup_clock_digital_window

0x1705,	// (0x000156bf) popup_phob_thumbnail_window

0x1af4,	// (0x00015aae) call_video_uplink_pane_g1

0x268a,	// (0x00016644) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x00023381) call_video_uplink_pane_g

0x1c61,	// (0x00015c1b) video_uplink_pane

0x2692,	// (0x0001664c) mce_image_pane_g1

0x9e40,	// (0x0001ddfa) mce_image_pane_g2

0x9e48,	// (0x0001de02) mce_image_pane_g3

0x9e50,	// (0x0001de0a) mce_image_pane_g4

0x9e58,	// (0x0001de12) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x00023386) mce_image_pane_g

0x269c,	// (0x00016656) control_top_pane_stacon_cp01_ParamLimits

0x269c,	// (0x00016656) control_top_pane_stacon_cp01

0x26ac,	// (0x00016666) uni_indicator_pane_stacon_cp01_ParamLimits

0x26ac,	// (0x00016666) uni_indicator_pane_stacon_cp01

0x26bd,	// (0x00016677) bg_popup_sub_pane_cp03

0x26c7,	// (0x00016681) chi_dic_find_pane

0x9e60,	// (0x0001de1a) listscroll_chi_dic_pane

0x26cf,	// (0x00016689) main_pane_chidic_g1

0x26d7,	// (0x00016691) chi_dic_find_pane_t1

0x26e5,	// (0x0001669f) find_chidic_pane

0x26ee,	// (0x000166a8) chi_dic_list_pane_ParamLimits

0x26ee,	// (0x000166a8) chi_dic_list_pane

0x26ff,	// (0x000166b9) scroll_pane_cp020

0x2707,	// (0x000166c1) find_chidic_pane_t1

0x1705,	// (0x000156bf) input_focus_pane_cp06

0x9e72,	// (0x0001de2c) list_chi_dic_pane_ParamLimits

0x9e72,	// (0x0001de2c) list_chi_dic_pane

0x9e85,	// (0x0001de3f) list_chi_dic_pane_t1_ParamLimits

0x9e85,	// (0x0001de3f) list_chi_dic_pane_t1

0x1705,	// (0x000156bf) list_highlight_pane_cp020

0x2716,	// (0x000166d0) bg_cale_heading_pane_g1

0x9e98,	// (0x0001de52) bg_cale_heading_pane_g2

0x9ea0,	// (0x0001de5a) bg_cale_heading_pane_g3

0x9ea8,	// (0x0001de62) bg_cale_heading_pane_g4

0x9eb0,	// (0x0001de6a) bg_cale_heading_pane_g5

0x9eb8,	// (0x0001de72) bg_cale_heading_pane_g6

0x9ec0,	// (0x0001de7a) bg_cale_heading_pane_g7

0x9ec8,	// (0x0001de82) bg_cale_heading_pane_g8

0x9ed0,	// (0x0001de8a) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x00023391) bg_cale_heading_pane_g

0x2716,	// (0x000166d0) bg_cale_side_pane_g1

0x9ed8,	// (0x0001de92) bg_cale_side_pane_g2

0x9ee0,	// (0x0001de9a) bg_cale_side_pane_g3

0x9ee8,	// (0x0001dea2) bg_cale_side_pane_g4

0x9ef0,	// (0x0001deaa) bg_cale_side_pane_g5

0x9ef8,	// (0x0001deb2) bg_cale_side_pane_g6

0x9f00,	// (0x0001deba) bg_cale_side_pane_g7

0x9f08,	// (0x0001dec2) bg_cale_side_pane_g8

0x9f10,	// (0x0001deca) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x000233a4) bg_cale_side_pane_g

0x9f18,	// (0x0001ded2) popup_call_status_window_ParamLimits

0x9f18,	// (0x0001ded2) popup_call_status_window

0x271e,	// (0x000166d8) stacon_top_pane

0x2726,	// (0x000166e0) status_pane_ParamLimits

0x2726,	// (0x000166e0) status_pane

0x2740,	// (0x000166fa) status_small_pane

0x2748,	// (0x00016702) control_pane

0x1705,	// (0x000156bf) stacon_bottom_pane

0x2750,	// (0x0001670a) list_single_mce_smart_pane_t1_ParamLimits

0x2750,	// (0x0001670a) list_single_mce_smart_pane_t1

0x2763,	// (0x0001671d) list_single_mce_smart_pane_t2_ParamLimits

0x2763,	// (0x0001671d) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x000233b7) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x000233b7) list_single_mce_smart_pane_t

0x9f27,	// (0x0001dee1) compass_pane

0x9f30,	// (0x0001deea) main_location2_pane_t1

0x9f46,	// (0x0001df00) main_location2_pane_t2

0x9f5c,	// (0x0001df16) main_location2_pane_t3

0x0003,

0xf402,	// (0x000233bc) main_location2_pane_t

0x278b,	// (0x00016745) compass_pane_g1_ParamLimits

0x278b,	// (0x00016745) compass_pane_g1

0x9fa4,	// (0x0001df5e) compass_pane_t1

0x9fb3,	// (0x0001df6d) compass_pane_t2

0x0005,

0xf40b,	// (0x000233c5) compass_pane_t

0x9ffa,	// (0x0001dfb4) text_secondary_cp61

0x27b8,	// (0x00016772) navi_pane_cams_g5

0x27f9,	// (0x000167b3) navi_pane_im_t1

0x2807,	// (0x000167c1) navi_pane_mp_g1_ParamLimits

0x2807,	// (0x000167c1) navi_pane_mp_g1

0x281b,	// (0x000167d5) navi_pane_mp_g2_ParamLimits

0x281b,	// (0x000167d5) navi_pane_mp_g2

0x2827,	// (0x000167e1) navi_pane_mp_g3_ParamLimits

0x2827,	// (0x000167e1) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x000233d9) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x000233d9) navi_pane_mp_g

0x2833,	// (0x000167ed) navi_pane_mp_t1

0x2841,	// (0x000167fb) navi_pane_mp_t2

0x0002,

0xf426,	// (0x000233e0) navi_pane_mp_t

0x28ae,	// (0x00016868) navi_pane_vt_g1

0x2833,	// (0x000167ed) navi_pane_vt_t1

0x28b6,	// (0x00016870) navi_slider_pane

0x28be,	// (0x00016878) zooming_pane

0x28c6,	// (0x00016880) navi_slider_pane_g1

0x773a,	// (0x0001b6f4) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x000233e7) navi_slider_pane_g

0x28fc,	// (0x000168b6) aid_levels_zoom

0x2904,	// (0x000168be) zooming_pane_g1

0x290c,	// (0x000168c6) zooming_pane_g2

0x290c,	// (0x000168c6) zooming_pane_g3

0x0002,

0xf43c,	// (0x000233f6) zooming_pane_g

0x2914,	// (0x000168ce) level_10_zoom

0x291d,	// (0x000168d7) level_11_zoom

0x2926,	// (0x000168e0) level_1_zoom

0x292f,	// (0x000168e9) level_2_zoom

0x2938,	// (0x000168f2) level_3_zoom

0x2941,	// (0x000168fb) level_4_zoom

0x294a,	// (0x00016904) level_5_zoom

0x2953,	// (0x0001690d) level_6_zoom

0x295c,	// (0x00016916) level_7_zoom

0x2965,	// (0x0001691f) level_8_zoom

0x296e,	// (0x00016928) level_9_zoom

0x297f,	// (0x00016939) popup_phob_thumbnail_window_g1

0x2987,	// (0x00016941) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x000233fd) popup_phob_thumbnail_window_g

0x3d5b,	// (0x00017d15) level_1_location

0x3d63,	// (0x00017d1d) level_2_location

0x3d6b,	// (0x00017d25) level_3_location

0x3d73,	// (0x00017d2d) level_4_location

0x28be,	// (0x00016878) level_5_location

0xa071,	// (0x0001e02b) mce_icon_pane_g1

0xa079,	// (0x0001e033) mce_icon_pane_g2

0x0001,

0xf448,	// (0x00023402) mce_icon_pane_g

0xa081,	// (0x0001e03b) main_mup_pane_g1_ParamLimits

0xa081,	// (0x0001e03b) main_mup_pane_g1

0xa099,	// (0x0001e053) main_mup_pane_g2_ParamLimits

0xa099,	// (0x0001e053) main_mup_pane_g2

0xa0b5,	// (0x0001e06f) main_mup_pane_g3_ParamLimits

0xa0b5,	// (0x0001e06f) main_mup_pane_g3

0xa0d1,	// (0x0001e08b) main_mup_pane_g4_ParamLimits

0xa0d1,	// (0x0001e08b) main_mup_pane_g4

0xa0ed,	// (0x0001e0a7) main_mup_pane_g5_ParamLimits

0xa0ed,	// (0x0001e0a7) main_mup_pane_g5

0xa10a,	// (0x0001e0c4) main_mup_pane_g6_ParamLimits

0xa10a,	// (0x0001e0c4) main_mup_pane_g6

0xa126,	// (0x0001e0e0) main_mup_pane_g7_ParamLimits

0xa126,	// (0x0001e0e0) main_mup_pane_g7

0xa142,	// (0x0001e0fc) main_mup_pane_g8_ParamLimits

0xa142,	// (0x0001e0fc) main_mup_pane_g8

0xa15e,	// (0x0001e118) main_mup_pane_g9_ParamLimits

0xa15e,	// (0x0001e118) main_mup_pane_g9

0xa175,	// (0x0001e12f) main_mup_pane_g10_ParamLimits

0xa175,	// (0x0001e12f) main_mup_pane_g10

0xa18c,	// (0x0001e146) main_mup_pane_g11_ParamLimits

0xa18c,	// (0x0001e146) main_mup_pane_g11

0xa1a0,	// (0x0001e15a) main_mup_pane_g12_ParamLimits

0xa1a0,	// (0x0001e15a) main_mup_pane_g12

0xa1ac,	// (0x0001e166) main_mup_pane_g13_ParamLimits

0xa1ac,	// (0x0001e166) main_mup_pane_g13

0x000c,

0xf44d,	// (0x00023407) main_mup_pane_g_ParamLimits

0xf44d,	// (0x00023407) main_mup_pane_g

0xa1c0,	// (0x0001e17a) main_mup_pane_t1_ParamLimits

0xa1c0,	// (0x0001e17a) main_mup_pane_t1

0xa1dd,	// (0x0001e197) main_mup_pane_t2_ParamLimits

0xa1dd,	// (0x0001e197) main_mup_pane_t2

0xa1f7,	// (0x0001e1b1) main_mup_pane_t3_ParamLimits

0xa1f7,	// (0x0001e1b1) main_mup_pane_t3

0xa211,	// (0x0001e1cb) main_mup_pane_t4_ParamLimits

0xa211,	// (0x0001e1cb) main_mup_pane_t4

0xa223,	// (0x0001e1dd) main_mup_pane_t5_ParamLimits

0xa223,	// (0x0001e1dd) main_mup_pane_t5

0xa235,	// (0x0001e1ef) main_mup_pane_t6_ParamLimits

0xa235,	// (0x0001e1ef) main_mup_pane_t6

0x0005,

0xf468,	// (0x00023422) main_mup_pane_t_ParamLimits

0xf468,	// (0x00023422) main_mup_pane_t

0xa24b,	// (0x0001e205) mup_progress_pane_ParamLimits

0xa24b,	// (0x0001e205) mup_progress_pane

0xa257,	// (0x0001e211) mup_visualizer_pane_ParamLimits

0xa257,	// (0x0001e211) mup_visualizer_pane

0xa285,	// (0x0001e23f) mup_volume_pane_ParamLimits

0xa285,	// (0x0001e23f) mup_volume_pane

0x298f,	// (0x00016949) mup_visualizer_pane_g1_ParamLimits

0x298f,	// (0x00016949) mup_visualizer_pane_g1

0x298f,	// (0x00016949) mup_visualizer_pane_g2_ParamLimits

0x298f,	// (0x00016949) mup_visualizer_pane_g2

0x278b,	// (0x00016745) mup_visualizer_pane_g3_ParamLimits

0x278b,	// (0x00016745) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x0002342f) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x0002342f) mup_visualizer_pane_g

0x1af4,	// (0x00015aae) mup_volume_pane_g1

0x29a5,	// (0x0001695f) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x00023436) mup_volume_pane_g

0x1af4,	// (0x00015aae) mup_progress_pane_g1

0x29ae,	// (0x00016968) mup_progress_pane_g2

0x29b7,	// (0x00016971) mup_progress_pane_g3

0x0002,

0xf481,	// (0x0002343b) mup_progress_pane_g

0x1705,	// (0x000156bf) bg_popup_window_pane_cp05

0x29c0,	// (0x0001697a) heading_pane_cp02_ParamLimits

0x29c0,	// (0x0001697a) heading_pane_cp02

0x29da,	// (0x00016994) list_popup_blid_pane

0x29e2,	// (0x0001699c) list_blid_sat_info_pane_ParamLimits

0x29e2,	// (0x0001699c) list_blid_sat_info_pane

0x29f5,	// (0x000169af) list_blid_sat_info_pane_g1

0x29fd,	// (0x000169b7) list_blid_sat_info_pane_t1

0xa378,	// (0x0001e332) mup_equalizer_pane_ParamLimits

0xa378,	// (0x0001e332) mup_equalizer_pane

0xa391,	// (0x0001e34b) mup_equalizer_pane_cp1_ParamLimits

0xa391,	// (0x0001e34b) mup_equalizer_pane_cp1

0xa3aa,	// (0x0001e364) mup_equalizer_pane_cp2_ParamLimits

0xa3aa,	// (0x0001e364) mup_equalizer_pane_cp2

0xa3c3,	// (0x0001e37d) mup_equalizer_pane_cp3_ParamLimits

0xa3c3,	// (0x0001e37d) mup_equalizer_pane_cp3

0xa3dc,	// (0x0001e396) mup_equalizer_pane_cp4_ParamLimits

0xa3dc,	// (0x0001e396) mup_equalizer_pane_cp4

0xa3f5,	// (0x0001e3af) mup_equalizer_pane_cp5

0xa407,	// (0x0001e3c1) mup_equalizer_pane_cp6

0xa419,	// (0x0001e3d3) mup_equalizer_pane_cp7

0x3c39,	// (0x00017bf3) bg_popup_call_poc_act_pane_g9

0x3c41,	// (0x00017bfb) bg_popup_call_poc_act_pane_g10

0x3c49,	// (0x00017c03) bg_popup_call_poc_act_pane_g11

0x000a,

0x1960,	// (0x0001591a) mup_scale_pane

0x1af4,	// (0x00015aae) mup_scale_pane_g1

0x2a0b,	// (0x000169c5) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x00023457) mup_scale_pane_g

0x2a2f,	// (0x000169e9) msg_data_pane

0x2a37,	// (0x000169f1) scroll_pane_cp017

0xa43d,	// (0x0001e3f7) bg_list_pane_cp04_ParamLimits

0xa43d,	// (0x0001e3f7) bg_list_pane_cp04

0x2a47,	// (0x00016a01) msg_data_pane_g1

0x9e40,	// (0x0001ddfa) msg_data_pane_g2

0x9e48,	// (0x0001de02) msg_data_pane_g3

0xa455,	// (0x0001e40f) msg_data_pane_g4

0x9e58,	// (0x0001de12) msg_data_pane_g5

0xa071,	// (0x0001e02b) msg_data_pane_g6

0xa45d,	// (0x0001e417) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x00023466) msg_data_pane_g

0xa465,	// (0x0001e41f) msg_text_pane_ParamLimits

0xa465,	// (0x0001e41f) msg_text_pane

0xa48c,	// (0x0001e446) qrid_highlight_pane_cp011_ParamLimits

0xa48c,	// (0x0001e446) qrid_highlight_pane_cp011

0x1705,	// (0x000156bf) msg_body_pane

0x1705,	// (0x000156bf) msg_header_pane

0x2a58,	// (0x00016a12) input_focus_pane_cp07

0xa4ae,	// (0x0001e468) msg_header_pane_t1_ParamLimits

0xa4ae,	// (0x0001e468) msg_header_pane_t1

0x2a6d,	// (0x00016a27) msg_header_pane_t2_ParamLimits

0x2a6d,	// (0x00016a27) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0002347a) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0002347a) msg_header_pane_t

0x2a7f,	// (0x00016a39) msg_body_pane_g1

0x2a87,	// (0x00016a41) msg_body_pane_t1_ParamLimits

0x2a87,	// (0x00016a41) msg_body_pane_t1

0x2ab2,	// (0x00016a6c) msg_body_pane_t2_ParamLimits

0x2ab2,	// (0x00016a6c) msg_body_pane_t2

0x2ac4,	// (0x00016a7e) msg_body_pane_t3_ParamLimits

0x2ac4,	// (0x00016a7e) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x0002347f) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x0002347f) msg_body_pane_t

0x777c,	// (0x0001b736) main_viewer_pane_g1_ParamLimits

0x777c,	// (0x0001b736) main_viewer_pane_g1

0x7788,	// (0x0001b742) main_viewer_pane_g2_ParamLimits

0x7788,	// (0x0001b742) main_viewer_pane_g2

0xa4de,	// (0x0001e498) main_viewer_pane_g3_ParamLimits

0xa4de,	// (0x0001e498) main_viewer_pane_g3

0xa4ed,	// (0x0001e4a7) main_viewer_pane_g4_ParamLimits

0xa4ed,	// (0x0001e4a7) main_viewer_pane_g4

0x7794,	// (0x0001b74e) main_viewer_pane_g5_ParamLimits

0x7794,	// (0x0001b74e) main_viewer_pane_g5

0x7794,	// (0x0001b74e) main_viewer_pane_g7_ParamLimits

0x7794,	// (0x0001b74e) main_viewer_pane_g7

0x77a6,	// (0x0001b760) main_viewer_pane_g8_ParamLimits

0x77a6,	// (0x0001b760) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x0002348f) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x0002348f) main_viewer_pane_g

0x2b18,	// (0x00016ad2) viewer_content_pane_ParamLimits

0x2b18,	// (0x00016ad2) viewer_content_pane

0xa514,	// (0x0001e4ce) main_postcard_pane_g1_ParamLimits

0xa514,	// (0x0001e4ce) main_postcard_pane_g1

0xa520,	// (0x0001e4da) main_postcard_pane_g2_ParamLimits

0xa520,	// (0x0001e4da) main_postcard_pane_g2

0xa52c,	// (0x0001e4e6) main_postcard_pane_g3_ParamLimits

0xa52c,	// (0x0001e4e6) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x000234a0) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x000234a0) main_postcard_pane_g

0xa538,	// (0x0001e4f2) main_postcard_pane_g4

0x3e77,	// (0x00017e31) smil_status_volume_pane_g2

0xa55c,	// (0x0001e516) postcard_pane_ParamLimits

0xa55c,	// (0x0001e516) postcard_pane

0x298f,	// (0x00016949) postcard_pane_g1_ParamLimits

0x298f,	// (0x00016949) postcard_pane_g1

0xa58c,	// (0x0001e546) postcard_pane_g2_ParamLimits

0xa58c,	// (0x0001e546) postcard_pane_g2

0xa598,	// (0x0001e552) postcard_pane_g3_ParamLimits

0xa598,	// (0x0001e552) postcard_pane_g3

0x2b34,	// (0x00016aee) postcard_pane_g4_ParamLimits

0x2b34,	// (0x00016aee) postcard_pane_g4

0xa5a4,	// (0x0001e55e) postcard_pane_g5_ParamLimits

0xa5a4,	// (0x0001e55e) postcard_pane_g5

0xa5b0,	// (0x0001e56a) postcard_pane_g6_ParamLimits

0xa5b0,	// (0x0001e56a) postcard_pane_g6

0x2b26,	// (0x00016ae0) postcard_pane_g7_ParamLimits

0x2b26,	// (0x00016ae0) postcard_pane_g7

0x0006,

0xf4f3,	// (0x000234ad) postcard_pane_g_ParamLimits

0xf4f3,	// (0x000234ad) postcard_pane_g

0xa5bc,	// (0x0001e576) main_mp2_pane_g1_ParamLimits

0xa5bc,	// (0x0001e576) main_mp2_pane_g1

0xa5c8,	// (0x0001e582) main_mp2_pane_g2_ParamLimits

0xa5c8,	// (0x0001e582) main_mp2_pane_g2

0xa5d4,	// (0x0001e58e) main_mp2_pane_g3_ParamLimits

0xa5d4,	// (0x0001e58e) main_mp2_pane_g3

0x0002,

0xf502,	// (0x000234bc) main_mp2_pane_g_ParamLimits

0xf502,	// (0x000234bc) main_mp2_pane_g

0xa5e0,	// (0x0001e59a) main_mp2_pane_t1_ParamLimits

0xa5e0,	// (0x0001e59a) main_mp2_pane_t1

0xa5f5,	// (0x0001e5af) main_mp2_pane_t2_ParamLimits

0xa5f5,	// (0x0001e5af) main_mp2_pane_t2

0xa607,	// (0x0001e5c1) main_mp2_pane_t3_ParamLimits

0xa607,	// (0x0001e5c1) main_mp2_pane_t3

0x0002,

0xf509,	// (0x000234c3) main_mp2_pane_t_ParamLimits

0xf509,	// (0x000234c3) main_mp2_pane_t

0x2b42,	// (0x00016afc) pec_content_pane_ParamLimits

0x2b42,	// (0x00016afc) pec_content_pane

0x1f6f,	// (0x00015f29) scroll_pane_cp015

0x2b54,	// (0x00016b0e) pec_attribute_pane_ParamLimits

0x2b54,	// (0x00016b0e) pec_attribute_pane

0xa619,	// (0x0001e5d3) pec_content_pane_g1_ParamLimits

0xa619,	// (0x0001e5d3) pec_content_pane_g1

0x2b64,	// (0x00016b1e) pec_content_pane_t1_ParamLimits

0x2b64,	// (0x00016b1e) pec_content_pane_t1

0x2b76,	// (0x00016b30) pec_content_pane_t2_ParamLimits

0x2b76,	// (0x00016b30) pec_content_pane_t2

0x0001,

0xf510,	// (0x000234ca) pec_content_pane_t_ParamLimits

0xf510,	// (0x000234ca) pec_content_pane_t

0xa625,	// (0x0001e5df) list_single_graphic_pane_cp01_ParamLimits

0xa625,	// (0x0001e5df) list_single_graphic_pane_cp01

0x1960,	// (0x0001591a) bg_popup_sub_pane_cp04

0x2b88,	// (0x00016b42) popup_mup_playback_window_g1

0x2b94,	// (0x00016b4e) popup_mup_playback_window_t1

0x2ba9,	// (0x00016b63) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x000234cf) popup_mup_playback_window_t

0x2be0,	// (0x00016b9a) main_image_pane_g1_ParamLimits

0x2be0,	// (0x00016b9a) main_image_pane_g1

0x2c23,	// (0x00016bdd) scroll_pane_cp018_ParamLimits

0x2c23,	// (0x00016bdd) scroll_pane_cp018

0x2c3b,	// (0x00016bf5) scroll_pane_cp016_ParamLimits

0x2c3b,	// (0x00016bf5) scroll_pane_cp016

0xa6aa,	// (0x0001e664) smil2_image_pane_ParamLimits

0xa6aa,	// (0x0001e664) smil2_image_pane

0xa6d2,	// (0x0001e68c) smil2_root_pane_ParamLimits

0xa6d2,	// (0x0001e68c) smil2_root_pane

0xa6fe,	// (0x0001e6b8) smil2_text_pane_ParamLimits

0xa6fe,	// (0x0001e6b8) smil2_text_pane

0x1705,	// (0x000156bf) bg_list_pane_cp06

0x2c77,	// (0x00016c31) grid_radio_pane

0x1705,	// (0x000156bf) bg_popup_window_pane_cp06

0x2c7f,	// (0x00016c39) main_fmradio_pane_t1

0x25d8,	// (0x00016592) heading_pane_cp04

0x2c8d,	// (0x00016c47) main_fmradio_pane_t2

0x3c91,	// (0x00017c4b) popup_cale_lunar_info_window_g1

0x2c9b,	// (0x00016c55) main_fmradio_pane_t3

0x3c99,	// (0x00017c53) popup_cale_lunar_info_window_g2

0x2ca9,	// (0x00016c63) main_fmradio_pane_t4

0x0001,

0x2cb7,	// (0x00016c71) main_fmradio_pane_t5

0x0004,

0xf603,	// (0x000235bd) popup_cale_lunar_info_window_g

0xf52a,	// (0x000234e4) main_fmradio_pane_t

0x2cc5,	// (0x00016c7f) wait_bar_pane_cp03

0x2ccd,	// (0x00016c87) cell_fmradio_pane_ParamLimits

0x2ccd,	// (0x00016c87) cell_fmradio_pane

0x2b26,	// (0x00016ae0) cell_fmradio_pane_g1_ParamLimits

0x2b26,	// (0x00016ae0) cell_fmradio_pane_g1

0x1705,	// (0x000156bf) grid_highlight_pane_cp011

0x2ce0,	// (0x00016c9a) poc_content_pane_ParamLimits

0x2ce0,	// (0x00016c9a) poc_content_pane

0x2cf3,	// (0x00016cad) scroll_pane_cp019

0xa732,	// (0x0001e6ec) popup_call_poc_act_window_ParamLimits

0xa732,	// (0x0001e6ec) popup_call_poc_act_window

0xa73f,	// (0x0001e6f9) popup_call_poc_inact_window_ParamLimits

0xa73f,	// (0x0001e6f9) popup_call_poc_inact_window

0xf5c7,	// (0x00023581) bg_popup_call_poc_act_pane_g

0x3c51,	// (0x00017c0b) bg_popup_call_poc_inact_pane_g1

0x3c59,	// (0x00017c13) bg_popup_call_poc_inact_pane_g2

0x2cfb,	// (0x00016cb5) popup_call_poc_act_window_g2

0x3c61,	// (0x00017c1b) bg_popup_call_poc_inact_pane_g3

0x3be1,	// (0x00017b9b) bg_popup_call_poc_inact_pane_g4

0x3c69,	// (0x00017c23) bg_popup_call_poc_inact_pane_g5

0x2d03,	// (0x00016cbd) popup_call_poc_act_window_t1_ParamLimits

0x2d03,	// (0x00016cbd) popup_call_poc_act_window_t1

0x2d2b,	// (0x00016ce5) popup_call_poc_act_window_t2_ParamLimits

0x2d2b,	// (0x00016ce5) popup_call_poc_act_window_t2

0x2d53,	// (0x00016d0d) popup_call_poc_act_window_t3_ParamLimits

0x2d53,	// (0x00016d0d) popup_call_poc_act_window_t3

0x2d7b,	// (0x00016d35) popup_call_poc_act_window_t4_ParamLimits

0x2d7b,	// (0x00016d35) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x000234ef) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x000234ef) popup_call_poc_act_window_t

0x3c71,	// (0x00017c2b) bg_popup_call_poc_inact_pane_g6

0x3c79,	// (0x00017c33) bg_popup_call_poc_inact_pane_g7

0x3c81,	// (0x00017c3b) bg_popup_call_poc_inact_pane_g8

0x2d8d,	// (0x00016d47) popup_call_poc_inact_window_g2

0x3c89,	// (0x00017c43) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5de,	// (0x00023598) bg_popup_call_poc_inact_pane_g

0x2d95,	// (0x00016d4f) popup_call_poc_inact_window_t1_ParamLimits

0x2d95,	// (0x00016d4f) popup_call_poc_inact_window_t1

0x2daa,	// (0x00016d64) popup_call_poc_inact_window_t2_ParamLimits

0x2daa,	// (0x00016d64) popup_call_poc_inact_window_t2

0x2dbf,	// (0x00016d79) popup_call_poc_inact_window_t3_ParamLimits

0x2dbf,	// (0x00016d79) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x000234f8) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x000234f8) popup_call_poc_inact_window_t

0x3dfd,	// (0x00017db7) context_pane_ParamLimits

0xac3a,	// (0x0001ebf4) signal_pane_ParamLimits

0x28be,	// (0x00016878) main_call2_pane

0x3deb,	// (0x00017da5) popup_phob_thumbnail2_window_ParamLimits

0x3deb,	// (0x00017da5) popup_phob_thumbnail2_window

0x774c,	// (0x0001b706) aid_hotspot_pointer_arrow_pane

0x7754,	// (0x0001b70e) aid_hotspot_pointer_hand_pane

0xa9ee,	// (0x0001e9a8) phob_pre_status_pane_g5

0x8f49,	// (0x0001cf03) cams_zoom_pane_ParamLimits

0x8f55,	// (0x0001cf0f) image_vga_pane_ParamLimits

0x8f62,	// (0x0001cf1c) main_camera_pane_g1_ParamLimits

0x8f6e,	// (0x0001cf28) main_camera_pane_g2_ParamLimits

0x8f7a,	// (0x0001cf34) main_camera_pane_g3_ParamLimits

0x8f86,	// (0x0001cf40) main_camera_pane_g4_ParamLimits

0x8f92,	// (0x0001cf4c) main_camera_pane_g5_ParamLimits

0x8f9e,	// (0x0001cf58) main_camera_pane_g6_ParamLimits

0x8faa,	// (0x0001cf64) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x000231f7) main_camera_pane_g_ParamLimits

0x8fb6,	// (0x0001cf70) main_camera_pane_t1_ParamLimits

0x8fc8,	// (0x0001cf82) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x00023208) main_camera_pane_t_ParamLimits

0x1960,	// (0x0001591a) bg_popup_preview_window_pane_cp01_ParamLimits

0x1960,	// (0x0001591a) bg_popup_preview_window_pane_cp01

0x2dd4,	// (0x00016d8e) popup_phob_thumbnail2_window_g1_ParamLimits

0x2dd4,	// (0x00016d8e) popup_phob_thumbnail2_window_g1

0x1705,	// (0x000156bf) call2_cli_visual_pane

0xa75b,	// (0x0001e715) popup_call2_audio_conf_window_ParamLimits

0xa75b,	// (0x0001e715) popup_call2_audio_conf_window

0xa76e,	// (0x0001e728) popup_call2_audio_first_window_ParamLimits

0xa76e,	// (0x0001e728) popup_call2_audio_first_window

0xa7ea,	// (0x0001e7a4) popup_call2_audio_in_window_ParamLimits

0xa7ea,	// (0x0001e7a4) popup_call2_audio_in_window

0xa81a,	// (0x0001e7d4) popup_call2_audio_out_window_ParamLimits

0xa81a,	// (0x0001e7d4) popup_call2_audio_out_window

0xa866,	// (0x0001e820) popup_call2_audio_second_window_ParamLimits

0xa866,	// (0x0001e820) popup_call2_audio_second_window

0xa8b2,	// (0x0001e86c) popup_call2_audio_wait_window_ParamLimits

0xa8b2,	// (0x0001e86c) popup_call2_audio_wait_window

0x1705,	// (0x000156bf) bg_popup_call2_act_pane_cp03

0x1942,	// (0x000158fc) list_conf_pane_cp

0x2de0,	// (0x00016d9a) popup_call2_audio_conf_window_t1

0x2635,	// (0x000165ef) list_single_graphic_popup_conf2_pane_ParamLimits

0x2635,	// (0x000165ef) list_single_graphic_popup_conf2_pane

0x2648,	// (0x00016602) list_highlight_pane_cp04

0x2dee,	// (0x00016da8) list_single_graphic_popup_conf2_pane_g1

0x2659,	// (0x00016613) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x000234ff) list_single_graphic_popup_conf2_pane_g

0x2df6,	// (0x00016db0) list_single_graphic_popup_conf2_pane_t1

0x2e04,	// (0x00016dbe) bg_popup_call2_act_pane_cp01_ParamLimits

0x2e04,	// (0x00016dbe) bg_popup_call2_act_pane_cp01

0x2e8e,	// (0x00016e48) call_type_pane_cp05_ParamLimits

0x2e8e,	// (0x00016e48) call_type_pane_cp05

0x2ee2,	// (0x00016e9c) popup_call2_audio_second_window_g1_ParamLimits

0x2ee2,	// (0x00016e9c) popup_call2_audio_second_window_g1

0x2f36,	// (0x00016ef0) popup_call2_audio_second_window_g2_ParamLimits

0x2f36,	// (0x00016ef0) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x00023504) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x00023504) popup_call2_audio_second_window_g

0x2f9b,	// (0x00016f55) popup_call2_audio_second_window_t1_ParamLimits

0x2f9b,	// (0x00016f55) popup_call2_audio_second_window_t1

0x3056,	// (0x00017010) popup_call2_audio_second_window_t2_ParamLimits

0x3056,	// (0x00017010) popup_call2_audio_second_window_t2

0x30a9,	// (0x00017063) popup_call2_audio_second_window_t3_ParamLimits

0x30a9,	// (0x00017063) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x0002350b) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x0002350b) popup_call2_audio_second_window_t

0x1705,	// (0x000156bf) bg_popup_call2_in_pane_cp02

0x170f,	// (0x000156c9) call_type_pane_cp04

0x1717,	// (0x000156d1) popup_call2_audio_wait_window_g1

0x171f,	// (0x000156d9) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x000230e4) popup_call2_audio_wait_window_g

0x1727,	// (0x000156e1) popup_call2_audio_wait_window_t3

0x319c,	// (0x00017156) bg_popup_call2_act_pane_ParamLimits

0x319c,	// (0x00017156) bg_popup_call2_act_pane

0x325c,	// (0x00017216) call_type_pane_cp03_ParamLimits

0x325c,	// (0x00017216) call_type_pane_cp03

0x32c0,	// (0x0001727a) popup_call2_audio_first_window_g1_ParamLimits

0x32c0,	// (0x0001727a) popup_call2_audio_first_window_g1

0x3330,	// (0x000172ea) popup_call2_audio_first_window_g2_ParamLimits

0x3330,	// (0x000172ea) popup_call2_audio_first_window_g2

0x298f,	// (0x00016949) popup_call2_audio_first_window_g3_ParamLimits

0x298f,	// (0x00016949) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x00023514) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x00023514) popup_call2_audio_first_window_g

0x340e,	// (0x000173c8) popup_call2_audio_first_window_t1_ParamLimits

0x340e,	// (0x000173c8) popup_call2_audio_first_window_t1

0x3511,	// (0x000174cb) popup_call2_audio_first_window_t4_ParamLimits

0x3511,	// (0x000174cb) popup_call2_audio_first_window_t4

0x35f4,	// (0x000175ae) popup_call2_audio_first_window_t5_ParamLimits

0x35f4,	// (0x000175ae) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x0002351f) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x0002351f) popup_call2_audio_first_window_t

0x1958,	// (0x00015912) bg_popup_call2_act_pane_g1

0x3ca1,	// (0x00017c5b) popup_cale_lunar_info_window_t1

0x3caf,	// (0x00017c69) popup_cale_lunar_info_window_t2

0x3cbd,	// (0x00017c77) popup_cale_lunar_info_window_t3

0x1705,	// (0x000156bf) bg_popup_call2_bubble_pane

0x36f5,	// (0x000176af) bg_popup_call2_in_pane_cp01_ParamLimits

0x36f5,	// (0x000176af) bg_popup_call2_in_pane_cp01

0x13e1,	// (0x0001539b) call_type_pane_cp02

0x373d,	// (0x000176f7) popup_call2_audio_out_window_g1_ParamLimits

0x373d,	// (0x000176f7) popup_call2_audio_out_window_g1

0x3769,	// (0x00017723) popup_call2_audio_out_window_g2_ParamLimits

0x3769,	// (0x00017723) popup_call2_audio_out_window_g2

0x3791,	// (0x0001774b) popup_call2_audio_out_window_g3_ParamLimits

0x3791,	// (0x0001774b) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x00023528) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x00023528) popup_call2_audio_out_window_g

0x37cc,	// (0x00017786) popup_call2_audio_out_window_t1_ParamLimits

0x37cc,	// (0x00017786) popup_call2_audio_out_window_t1

0x382b,	// (0x000177e5) popup_call2_audio_out_window_t2_ParamLimits

0x382b,	// (0x000177e5) popup_call2_audio_out_window_t2

0x387f,	// (0x00017839) popup_call2_audio_out_window_t3_ParamLimits

0x387f,	// (0x00017839) popup_call2_audio_out_window_t3

0x3895,	// (0x0001784f) popup_call2_audio_out_window_t4_ParamLimits

0x3895,	// (0x0001784f) popup_call2_audio_out_window_t4

0x38ab,	// (0x00017865) popup_call2_audio_out_window_t5_ParamLimits

0x38ab,	// (0x00017865) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x00023531) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x00023531) popup_call2_audio_out_window_t

0x390f,	// (0x000178c9) bg_popup_call2_in_pane_ParamLimits

0x390f,	// (0x000178c9) bg_popup_call2_in_pane

0x396b,	// (0x00017925) popup_call2_audio_in_window_g1_ParamLimits

0x396b,	// (0x00017925) popup_call2_audio_in_window_g1

0x39a3,	// (0x0001795d) popup_call2_audio_in_window_g2_ParamLimits

0x39a3,	// (0x0001795d) popup_call2_audio_in_window_g2

0x39db,	// (0x00017995) popup_call2_audio_in_window_g3_ParamLimits

0x39db,	// (0x00017995) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x0002353e) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x0002353e) popup_call2_audio_in_window_g

0x3a33,	// (0x000179ed) popup_call2_audio_in_window_t1_ParamLimits

0x3a33,	// (0x000179ed) popup_call2_audio_in_window_t1

0x3ab3,	// (0x00017a6d) popup_call2_audio_in_window_t2_ParamLimits

0x3ab3,	// (0x00017a6d) popup_call2_audio_in_window_t2

0x3b33,	// (0x00017aed) popup_call2_audio_in_window_t3_ParamLimits

0x3b33,	// (0x00017aed) popup_call2_audio_in_window_t3

0x3b4d,	// (0x00017b07) popup_call2_audio_in_window_t4_ParamLimits

0x3b4d,	// (0x00017b07) popup_call2_audio_in_window_t4

0x3b5f,	// (0x00017b19) popup_call2_audio_in_window_t5_ParamLimits

0x3b5f,	// (0x00017b19) popup_call2_audio_in_window_t5

0x3b74,	// (0x00017b2e) popup_call2_audio_in_window_t6_ParamLimits

0x3b74,	// (0x00017b2e) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x00023547) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x00023547) popup_call2_audio_in_window_t

0x1958,	// (0x00015912) bg_popup_call2_in_pane_g1

0x3ccb,	// (0x00017c85) popup_cale_lunar_info_window_t4

0x0003,

0xf608,	// (0x000235c2) popup_cale_lunar_info_window_t

0x1960,	// (0x0001591a) bg_popup_call2_rect_pane_ParamLimits

0x1960,	// (0x0001591a) bg_popup_call2_rect_pane

0x1705,	// (0x000156bf) call2_cli_visual_graphic_pane

0x1705,	// (0x000156bf) call2_cli_visual_text_pane

0x77be,	// (0x0001b778) smil_status_volume_pane_g3

0x0002,

0x1af4,	// (0x00015aae) call2_cli_visual_graphic_pane_g1

0x1af4,	// (0x00015aae) call2_cli_visual_graphic_pane_g2

0x1af4,	// (0x00015aae) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x00023554) call2_cli_visual_graphic_pane_g

0x3b89,	// (0x00017b43) bg_popup_call2_rect_pane_g1

0x1b9c,	// (0x00015b56) bg_popup_call2_rect_pane_g2

0x3b91,	// (0x00017b4b) bg_popup_call2_rect_pane_g3

0x3b99,	// (0x00017b53) bg_popup_call2_rect_pane_g4

0x3ba1,	// (0x00017b5b) bg_popup_call2_rect_pane_g5

0x3ba9,	// (0x00017b63) bg_popup_call2_rect_pane_g6

0x3bb1,	// (0x00017b6b) bg_popup_call2_rect_pane_g7

0x3bb9,	// (0x00017b73) bg_popup_call2_rect_pane_g8

0x3bc1,	// (0x00017b7b) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x0002355b) bg_popup_call2_rect_pane_g

0x3bc9,	// (0x00017b83) bg_popup_call2_bubble_pane_g1

0x3bd1,	// (0x00017b8b) bg_popup_call2_bubble_pane_g2

0x3bd9,	// (0x00017b93) bg_popup_call2_bubble_pane_g3

0x3be1,	// (0x00017b9b) bg_popup_call2_bubble_pane_g4

0x3be9,	// (0x00017ba3) bg_popup_call2_bubble_pane_g5

0x3bf1,	// (0x00017bab) bg_popup_call2_bubble_pane_g6

0x3bf9,	// (0x00017bb3) bg_popup_call2_bubble_pane_g7

0x3c01,	// (0x00017bbb) bg_popup_call2_bubble_pane_g8

0x3c09,	// (0x00017bc3) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0002356e) bg_popup_call2_bubble_pane_g

0x8c70,	// (0x0001cc2a) aid_cale_week_size_cell_pane

0x8fda,	// (0x0001cf94) aid_cams_cif_uncrop_pane_ParamLimits

0x8fda,	// (0x0001cf94) aid_cams_cif_uncrop_pane

0x9132,	// (0x0001d0ec) aid_cams_size_cell_ParamLimits

0x9132,	// (0x0001d0ec) aid_cams_size_cell

0x913e,	// (0x0001d0f8) grid_cams_pane_ParamLimits

0x914a,	// (0x0001d104) linegrid_cams_pane_ParamLimits

0x9228,	// (0x0001d1e2) call_video_pane_t1

0x923e,	// (0x0001d1f8) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0002325b) call_video_pane_t

0x95aa,	// (0x0001d564) aid_cale_month_size_cell_pane_ParamLimits

0x95aa,	// (0x0001d564) aid_cale_month_size_cell_pane

0xf651,	// (0x0002360b) smil_status_volume_pane_g

0x77cb,	// (0x0001b785) volume_smil_pane_ParamLimits

0x12a5,	// (0x0001525f) aid_popup2_width_pane

0x8bdb,	// (0x0001cb95) cell_qdial_pane_g4_ParamLimits

0x8bdb,	// (0x0001cb95) cell_qdial_pane_g4

0x9f84,	// (0x0001df3e) aid_blid_cardinal_pane_ParamLimits

0x9f90,	// (0x0001df4a) aid_blid_destination_pane_ParamLimits

0x9f90,	// (0x0001df4a) aid_blid_destination_pane

0x1960,	// (0x0001591a) bg_popup_call_poc_act_pane_ParamLimits

0x1960,	// (0x0001591a) bg_popup_call_poc_act_pane

0x1960,	// (0x0001591a) bg_popup_call_poc_inact_pane_ParamLimits

0x1960,	// (0x0001591a) bg_popup_call_poc_inact_pane

0x3c11,	// (0x00017bcb) bg_popup_call_poc_act_pane_g1

0x3c19,	// (0x00017bd3) bg_popup_call_poc_act_pane_g2

0x3c21,	// (0x00017bdb) bg_popup_call_poc_act_pane_g3

0x3be1,	// (0x00017b9b) bg_popup_call_poc_act_pane_g4

0x3be9,	// (0x00017ba3) bg_popup_call_poc_act_pane_g5

0x3c29,	// (0x00017be3) bg_popup_call_poc_act_pane_g6

0x3bf9,	// (0x00017bb3) bg_popup_call_poc_act_pane_g7

0x3c31,	// (0x00017beb) bg_popup_call_poc_act_pane_g8

0x1705,	// (0x000156bf) main_usb_pane

0x3dca,	// (0x00017d84) popup_cale_lunar_info_window

0x944d,	// (0x0001d407) im_reading_pane_t1_ParamLimits

0x1eb8,	// (0x00015e72) list_im_pane_ParamLimits

0x1ec9,	// (0x00015e83) scroll_pane_cp07_ParamLimits

0x1705,	// (0x000156bf) grid_highlight_pane_cp012

0x1960,	// (0x0001591a) mup_scale_pane_ParamLimits

0x298f,	// (0x00016949) main_usb_pane_g1_ParamLimits

0x298f,	// (0x00016949) main_usb_pane_g1

0xa913,	// (0x0001e8cd) main_usb_pane_g2_ParamLimits

0xa913,	// (0x0001e8cd) main_usb_pane_g2

0x0001,

0xf5f1,	// (0x000235ab) main_usb_pane_g_ParamLimits

0xf5f1,	// (0x000235ab) main_usb_pane_g

0xa91f,	// (0x0001e8d9) main_usb_pane_t1_ParamLimits

0xa91f,	// (0x0001e8d9) main_usb_pane_t1

0xa931,	// (0x0001e8eb) main_usb_pane_t2_ParamLimits

0xa931,	// (0x0001e8eb) main_usb_pane_t2

0xa943,	// (0x0001e8fd) main_usb_pane_t3_ParamLimits

0xa943,	// (0x0001e8fd) main_usb_pane_t3

0xa955,	// (0x0001e90f) main_usb_pane_t4_ParamLimits

0xa955,	// (0x0001e90f) main_usb_pane_t4

0xa967,	// (0x0001e921) main_usb_pane_t5_ParamLimits

0xa967,	// (0x0001e921) main_usb_pane_t5

0xa979,	// (0x0001e933) main_usb_pane_t6_ParamLimits

0xa979,	// (0x0001e933) main_usb_pane_t6

0x0005,

0xf5f6,	// (0x000235b0) main_usb_pane_t_ParamLimits

0x2782,	// (0x0001673c) aid_text_placing

0x9f30,	// (0x0001deea) main_location2_pane_t1_ParamLimits

0x9f46,	// (0x0001df00) main_location2_pane_t2_ParamLimits

0x9f5c,	// (0x0001df16) main_location2_pane_t3_ParamLimits

0x9f72,	// (0x0001df2c) main_location2_pane_t4_ParamLimits

0x9f72,	// (0x0001df2c) main_location2_pane_t4

0xf402,	// (0x000233bc) main_location2_pane_t_ParamLimits

0x199c,	// (0x00015956) find_pinb_pane_g2_ParamLimits

0x199c,	// (0x00015956) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0002310a) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0002310a) find_pinb_pane_g

0x19a8,	// (0x00015962) find_pinb_pane_t1_ParamLimits

0x19ba,	// (0x00015974) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0002310f) find_pinb_pane_t_ParamLimits

0x1705,	// (0x000156bf) main_call3_pane

0x9862,	// (0x0001d81c) cale_month_day_heading_pane_t1_ParamLimits

0x98c0,	// (0x0001d87a) cale_month_day_heading_pane_t2_ParamLimits

0x9925,	// (0x0001d8df) cale_month_day_heading_pane_t3_ParamLimits

0x998a,	// (0x0001d944) cale_month_day_heading_pane_t4_ParamLimits

0x99ef,	// (0x0001d9a9) cale_month_day_heading_pane_t5_ParamLimits

0x9a54,	// (0x0001da0e) cale_month_day_heading_pane_t6_ParamLimits

0x9ab9,	// (0x0001da73) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x00023293) cale_month_day_heading_pane_t_ParamLimits

0x214f,	// (0x00016109) smil_status_volume_pane

0xa574,	// (0x0001e52e) postcard_address_pane_ParamLimits

0xa574,	// (0x0001e52e) postcard_address_pane

0xa580,	// (0x0001e53a) postcard_message_pane_ParamLimits

0xa580,	// (0x0001e53a) postcard_message_pane

0xa8ef,	// (0x0001e8a9) call2_cli_visual_pane_t1_ParamLimits

0xa8ef,	// (0x0001e8a9) call2_cli_visual_pane_t1

0xadfb,	// (0x0001edb5) postcard_message_pane_t1_ParamLimits

0xadfb,	// (0x0001edb5) postcard_message_pane_t1

0xade4,	// (0x0001ed9e) postcard_address_pane_t1_ParamLimits

0xade4,	// (0x0001ed9e) postcard_address_pane_t1

0xadd7,	// (0x0001ed91) popup_call3_audio_in_window_ParamLimits

0xadd7,	// (0x0001ed91) popup_call3_audio_in_window

0xacbf,	// (0x0001ec79) bg_popup_call3_in_pane_ParamLimits

0xacbf,	// (0x0001ec79) bg_popup_call3_in_pane

0xad1d,	// (0x0001ecd7) popup_call3_audio_in_window_g1_ParamLimits

0xad1d,	// (0x0001ecd7) popup_call3_audio_in_window_g1

0xad35,	// (0x0001ecef) popup_call3_audio_in_window_g2_ParamLimits

0xad35,	// (0x0001ecef) popup_call3_audio_in_window_g2

0xad4d,	// (0x0001ed07) popup_call3_audio_in_window_g3_ParamLimits

0xad4d,	// (0x0001ed07) popup_call3_audio_in_window_g3

0x0003,

0xf658,	// (0x00023612) popup_call3_audio_in_window_g_ParamLimits

0xf658,	// (0x00023612) popup_call3_audio_in_window_g

0xad75,	// (0x0001ed2f) popup_call3_audio_in_window_t1_ParamLimits

0xad75,	// (0x0001ed2f) popup_call3_audio_in_window_t1

0xad9d,	// (0x0001ed57) popup_call3_audio_in_window_t2_ParamLimits

0xad9d,	// (0x0001ed57) popup_call3_audio_in_window_t2

0xadc5,	// (0x0001ed7f) popup_call3_audio_in_window_t3_ParamLimits

0xadc5,	// (0x0001ed7f) popup_call3_audio_in_window_t3

0x0002,

0xf661,	// (0x0002361b) popup_call3_audio_in_window_t_ParamLimits

0xf661,	// (0x0002361b) popup_call3_audio_in_window_t

0x28be,	// (0x00016878) bg_popup_call3_rect_pane

0x3b89,	// (0x00017b43) bg_popup_call3_rect_pane_g1

0x1b9c,	// (0x00015b56) bg_popup_call3_rect_pane_g2

0x3b91,	// (0x00017b4b) bg_popup_call3_rect_pane_g3

0x3b99,	// (0x00017b53) bg_popup_call3_rect_pane_g4

0x3ba1,	// (0x00017b5b) bg_popup_call3_rect_pane_g5

0x3ba9,	// (0x00017b63) bg_popup_call3_rect_pane_g6

0x3bb1,	// (0x00017b6b) bg_popup_call3_rect_pane_g7

0xa2a0,	// (0x0001e25a) mup_visualizer_osc_pane

0x299d,	// (0x00016957) mup_visualizer_spec_pane

0xacdf,	// (0x0001ec99) call3_video_qcif_pane_ParamLimits

0xacdf,	// (0x0001ec99) call3_video_qcif_pane

0xacef,	// (0x0001eca9) call3_video_qcif_uncrop_pane_ParamLimits

0xacef,	// (0x0001eca9) call3_video_qcif_uncrop_pane

0xacfb,	// (0x0001ecb5) call3_video_subqcif_pane_ParamLimits

0xacfb,	// (0x0001ecb5) call3_video_subqcif_pane

0xad0d,	// (0x0001ecc7) call3_video_subqcif_uncrop_pane_ParamLimits

0xad0d,	// (0x0001ecc7) call3_video_subqcif_uncrop_pane

0xad65,	// (0x0001ed1f) popup_call3_audio_in_window_g4_ParamLimits

0xad65,	// (0x0001ed1f) popup_call3_audio_in_window_g4

0xacae,	// (0x0001ec68) mup_spec_half_pane

0xacb7,	// (0x0001ec71) mup_spec_half_pane_cp

0x3e5d,	// (0x00017e17) mup_osc_middle_pane

0x3e66,	// (0x00017e20) mup_visualizer_osc_pane_g1

0xac8f,	// (0x0001ec49) mup_spec_bar_pane_ParamLimits

0xac8f,	// (0x0001ec49) mup_spec_bar_pane

0x3e4a,	// (0x00017e04) mup_spec_bar_pane_g1

0x3e54,	// (0x00017e0e) mup_spec_bar_pane_g2

0x0001,

0xf64c,	// (0x00023606) mup_spec_bar_pane_g

0x8c70,	// (0x0001cc2a) aid_cale_week_size_cell_pane_ParamLimits

0x8c83,	// (0x0001cc3d) bg_cale_heading_pane_ParamLimits

0x1c28,	// (0x00015be2) bg_cale_pane_cp01_ParamLimits

0x8c97,	// (0x0001cc51) cale_week_corner_pane_ParamLimits

0x8cad,	// (0x0001cc67) cale_week_day_heading_pane_ParamLimits

0x8cc1,	// (0x0001cc7b) cale_week_scroll_pane_g1_ParamLimits

0x8cd2,	// (0x0001cc8c) cale_week_scroll_pane_g2_ParamLimits

0x8ce3,	// (0x0001cc9d) cale_week_scroll_pane_g3_ParamLimits

0x8cf4,	// (0x0001ccae) cale_week_scroll_pane_g4_ParamLimits

0x8d05,	// (0x0001ccbf) cale_week_scroll_pane_g5_ParamLimits

0x8d16,	// (0x0001ccd0) cale_week_scroll_pane_g6_ParamLimits

0x8d27,	// (0x0001cce1) cale_week_scroll_pane_g7_ParamLimits

0x8d38,	// (0x0001ccf2) cale_week_scroll_pane_g8_ParamLimits

0x8d49,	// (0x0001cd03) cale_week_scroll_pane_g9_ParamLimits

0x8d5a,	// (0x0001cd14) cale_week_scroll_pane_g10_ParamLimits

0x8d6b,	// (0x0001cd25) cale_week_scroll_pane_g11_ParamLimits

0x8d7c,	// (0x0001cd36) cale_week_scroll_pane_g12_ParamLimits

0x8d8d,	// (0x0001cd47) cale_week_scroll_pane_g13_ParamLimits

0x8d9e,	// (0x0001cd58) cale_week_scroll_pane_g14_ParamLimits

0x8daf,	// (0x0001cd69) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0002319b) cale_week_scroll_pane_g_ParamLimits

0x8dc0,	// (0x0001cd7a) cale_week_time_pane_ParamLimits

0x8dd1,	// (0x0001cd8b) grid_cale_week_pane_ParamLimits

0x1c41,	// (0x00015bfb) listscroll_cale_week_pane_t1

0x8de4,	// (0x0001cd9e) scroll_pane_cp08_ParamLimits

0x95eb,	// (0x0001d5a5) cale_month_corner_pane_ParamLimits

0x20ef,	// (0x000160a9) cale_month_pane_t1

0x9833,	// (0x0001d7ed) cale_month_week_pane_ParamLimits

0x298f,	// (0x00016949) popup_call_status_window_g1_ParamLimits

0x9dd6,	// (0x0001dd90) popup_call_status_window_g2_ParamLimits

0x9de2,	// (0x0001dd9c) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x00023343) popup_call_status_window_g_ParamLimits

0x2561,	// (0x0001651b) aid_call2_pane

0xa4a2,	// (0x0001e45c) msg_header_pane_g1

0xa574,	// (0x0001e52e) postcard_address2_pane_ParamLimits

0xa574,	// (0x0001e52e) postcard_address2_pane

0xa580,	// (0x0001e53a) postcard_message2_pane_ParamLimits

0xa580,	// (0x0001e53a) postcard_message2_pane

0xac46,	// (0x0001ec00) message2_row_pane_ParamLimits

0xac46,	// (0x0001ec00) message2_row_pane

0xac5e,	// (0x0001ec18) address2_row_pane_ParamLimits

0xac5e,	// (0x0001ec18) address2_row_pane

0x3e18,	// (0x00017dd2) postcard_message2_row_pane_g1

0x3e20,	// (0x00017dda) postcard_message2_row_pane_t1

0x3e18,	// (0x00017dd2) address2_row_pane_g1

0x3e20,	// (0x00017dda) address2_row_pane_t1

0x7607,	// (0x0001b5c1) aid_size_cell_vorec

0x1705,	// (0x000156bf) main_rss_pane

0xac71,	// (0x0001ec2b) rss_list_single_pane_ParamLimits

0xac71,	// (0x0001ec2b) rss_list_single_pane

0x3e2e,	// (0x00017de8) rss_list_single_pane_t1

0x3e3c,	// (0x00017df6) rss_list_single_pane_t2

0x0001,

0xf647,	// (0x00023601) rss_list_single_pane_t

0x1705,	// (0x000156bf) main_camera2_pane

0x1705,	// (0x000156bf) main_video2_pane

0x7815,	// (0x0001b7cf) cams_zoom_pane_cp2_ParamLimits

0x7815,	// (0x0001b7cf) cams_zoom_pane_cp2

0x7821,	// (0x0001b7db) image2_vga_pane_ParamLimits

0x7821,	// (0x0001b7db) image2_vga_pane

0x7830,	// (0x0001b7ea) main_camera2_pane_g1_ParamLimits

0x7830,	// (0x0001b7ea) main_camera2_pane_g1

0x783c,	// (0x0001b7f6) main_camera2_pane_g2_ParamLimits

0x783c,	// (0x0001b7f6) main_camera2_pane_g2

0x7848,	// (0x0001b802) main_camera2_pane_g3_ParamLimits

0x7848,	// (0x0001b802) main_camera2_pane_g3

0x7854,	// (0x0001b80e) main_camera2_pane_g4_ParamLimits

0x7854,	// (0x0001b80e) main_camera2_pane_g4

0x7860,	// (0x0001b81a) main_camera2_pane_g5_ParamLimits

0x7860,	// (0x0001b81a) main_camera2_pane_g5

0x786c,	// (0x0001b826) main_camera2_pane_g6_ParamLimits

0x786c,	// (0x0001b826) main_camera2_pane_g6

0x7878,	// (0x0001b832) main_camera2_pane_g7_ParamLimits

0x7878,	// (0x0001b832) main_camera2_pane_g7

0x7884,	// (0x0001b83e) main_camera2_pane_g8_ParamLimits

0x7884,	// (0x0001b83e) main_camera2_pane_g8

0x0008,

0xf668,	// (0x00023622) main_camera2_pane_g_ParamLimits

0xf668,	// (0x00023622) main_camera2_pane_g

0x789c,	// (0x0001b856) main_camera2_pane_t1_ParamLimits

0x789c,	// (0x0001b856) main_camera2_pane_t1

0x78ae,	// (0x0001b868) main_camera2_pane_t2_ParamLimits

0x78ae,	// (0x0001b868) main_camera2_pane_t2

0x78c0,	// (0x0001b87a) main_camera2_pane_t3_ParamLimits

0x78c0,	// (0x0001b87a) main_camera2_pane_t3

0x78d2,	// (0x0001b88c) main_camera2_pane_t4_ParamLimits

0x78d2,	// (0x0001b88c) main_camera2_pane_t4

0x0006,

0xf67b,	// (0x00023635) main_camera2_pane_t_ParamLimits

0xf67b,	// (0x00023635) main_camera2_pane_t

0x792d,	// (0x0001b8e7) cams_zoom_pane_cp4_ParamLimits

0x792d,	// (0x0001b8e7) cams_zoom_pane_cp4

0x793d,	// (0x0001b8f7) image2_cif_pane_ParamLimits

0x793d,	// (0x0001b8f7) image2_cif_pane

0x794e,	// (0x0001b908) image2_subqcif_pane_ParamLimits

0x794e,	// (0x0001b908) image2_subqcif_pane

0x795b,	// (0x0001b915) main_video2_pane_g1_ParamLimits

0x795b,	// (0x0001b915) main_video2_pane_g1

0x796d,	// (0x0001b927) main_video2_pane_g2_ParamLimits

0x796d,	// (0x0001b927) main_video2_pane_g2

0x797d,	// (0x0001b937) main_video2_pane_g3_ParamLimits

0x797d,	// (0x0001b937) main_video2_pane_g3

0x798d,	// (0x0001b947) main_video2_pane_g4_ParamLimits

0x798d,	// (0x0001b947) main_video2_pane_g4

0x799d,	// (0x0001b957) main_video2_pane_g5_ParamLimits

0x799d,	// (0x0001b957) main_video2_pane_g5

0x79ad,	// (0x0001b967) main_video2_pane_g6_ParamLimits

0x79ad,	// (0x0001b967) main_video2_pane_g6

0x0005,

0xf68a,	// (0x00023644) main_video2_pane_g_ParamLimits

0xf68a,	// (0x00023644) main_video2_pane_g

0x79bf,	// (0x0001b979) main_video2_pane_t1_ParamLimits

0x79bf,	// (0x0001b979) main_video2_pane_t1

0x79d9,	// (0x0001b993) main_video2_pane_t2_ParamLimits

0x79d9,	// (0x0001b993) main_video2_pane_t2

0x79ff,	// (0x0001b9b9) main_video2_pane_t3_ParamLimits

0x79ff,	// (0x0001b9b9) main_video2_pane_t3

0x0002,

0xf697,	// (0x00023651) main_video2_pane_t_ParamLimits

0xf697,	// (0x00023651) main_video2_pane_t

0xaa28,	// (0x0001e9e2) call_muted_g2

0x0001,

0xf639,	// (0x000235f3) call_muted_g

0x1705,	// (0x000156bf) main_mup2_pane

0x3f18,	// (0x00017ed2) main_mup2_pane_g1_ParamLimits

0x3f18,	// (0x00017ed2) main_mup2_pane_g1

0xae16,	// (0x0001edd0) main_mup2_pane_g2_ParamLimits

0xae16,	// (0x0001edd0) main_mup2_pane_g2

0x7a4e,	// (0x0001ba08) main_mup_pane_g13_cp1

0x7a56,	// (0x0001ba10) mup_volume_pane_cp1

0xae36,	// (0x0001edf0) main_mup2_pane_g4_ParamLimits

0xae36,	// (0x0001edf0) main_mup2_pane_g4

0xae47,	// (0x0001ee01) main_mup2_pane_g5_ParamLimits

0xae47,	// (0x0001ee01) main_mup2_pane_g5

0xae58,	// (0x0001ee12) main_mup2_pane_g6_ParamLimits

0xae58,	// (0x0001ee12) main_mup2_pane_g6

0xae69,	// (0x0001ee23) main_mup2_pane_g7_ParamLimits

0xae69,	// (0x0001ee23) main_mup2_pane_g7

0x0006,

0xf69e,	// (0x00023658) main_mup2_pane_g_ParamLimits

0xf69e,	// (0x00023658) main_mup2_pane_g

0xae85,	// (0x0001ee3f) main_mup2_pane_t1_ParamLimits

0xae85,	// (0x0001ee3f) main_mup2_pane_t1

0xae9c,	// (0x0001ee56) main_mup2_pane_t2_ParamLimits

0xae9c,	// (0x0001ee56) main_mup2_pane_t2

0xaeb3,	// (0x0001ee6d) main_mup2_pane_t3_ParamLimits

0xaeb3,	// (0x0001ee6d) main_mup2_pane_t3

0xaeca,	// (0x0001ee84) main_mup2_pane_t4_ParamLimits

0xaeca,	// (0x0001ee84) main_mup2_pane_t4

0xaee4,	// (0x0001ee9e) main_mup2_pane_t5_ParamLimits

0xaee4,	// (0x0001ee9e) main_mup2_pane_t5

0xaefe,	// (0x0001eeb8) main_mup2_pane_t6_ParamLimits

0xaefe,	// (0x0001eeb8) main_mup2_pane_t6

0x0005,

0xf6ad,	// (0x00023667) main_mup2_pane_t_ParamLimits

0xf6ad,	// (0x00023667) main_mup2_pane_t

0xaf36,	// (0x0001eef0) mup2_visualizer_pane_ParamLimits

0xaf36,	// (0x0001eef0) mup2_visualizer_pane

0xaf68,	// (0x0001ef22) mup_progress_pane_cp_ParamLimits

0xaf68,	// (0x0001ef22) mup_progress_pane_cp

0x7a39,	// (0x0001b9f3) mup_volume_pane_cp_ParamLimits

0x7a39,	// (0x0001b9f3) mup_volume_pane_cp

0xaf7f,	// (0x0001ef39) mup2_visualizer_pane_g1_ParamLimits

0xaf7f,	// (0x0001ef39) mup2_visualizer_pane_g1

0x3eea,	// (0x00017ea4) mup2_visualizer_pane_g2_ParamLimits

0x3eea,	// (0x00017ea4) mup2_visualizer_pane_g2

0xaf94,	// (0x0001ef4e) mup2_visualizer_pane_g3_ParamLimits

0xaf94,	// (0x0001ef4e) mup2_visualizer_pane_g3

0x0002,

0xf6ba,	// (0x00023674) mup2_visualizer_pane_g_ParamLimits

0xf6ba,	// (0x00023674) mup2_visualizer_pane_g

0x2c6f,	// (0x00016c29) aid_size_cell_fmradio

0xab0a,	// (0x0001eac4) aid_height_parent_landcape

0x1f56,	// (0x00015f10) wml_content_pane_cp

0x1f5e,	// (0x00015f18) wml_tabs_pane

0x1f67,	// (0x00015f21) popup_wml_miniature_window

0x1f6f,	// (0x00015f29) scroll_pane_cp021

0x1f83,	// (0x00015f3d) wml_content_pane_comp8

0x1705,	// (0x000156bf) bg_popup_sub_pane_cp05

0x3f08,	// (0x00017ec2) popup_wml_miniature_window_g1

0x3f10,	// (0x00017eca) wml_miniature_view_pane

0xafa0,	// (0x0001ef5a) aid_size_wml_view

0xafa8,	// (0x0001ef62) wml_miniature_view_pane_g1

0xafb1,	// (0x0001ef6b) wml_miniature_view_pane_g2

0xafba,	// (0x0001ef74) wml_miniature_view_pane_g3

0xafc2,	// (0x0001ef7c) wml_miniature_view_pane_g4

0xafca,	// (0x0001ef84) wml_miniature_view_pane_g5

0xafd2,	// (0x0001ef8c) wml_miniature_view_pane_g6

0xafda,	// (0x0001ef94) wml_miniature_view_pane_g7

0xafe2,	// (0x0001ef9c) wml_miniature_view_pane_g8

0x0007,

0xf6c1,	// (0x0002367b) wml_miniature_view_pane_g

0x3f18,	// (0x00017ed2) background_graphic_ParamLimits

0x3f18,	// (0x00017ed2) background_graphic

0x3f24,	// (0x00017ede) wml_tabs_2_pane

0x3f2d,	// (0x00017ee7) wml_tabs_3_pane_ParamLimits

0x3f2d,	// (0x00017ee7) wml_tabs_3_pane

0x3f3f,	// (0x00017ef9) wml_tabs_4_pane_ParamLimits

0x3f3f,	// (0x00017ef9) wml_tabs_4_pane

0x3f55,	// (0x00017f0f) wml_tabs_5_pane_ParamLimits

0x3f55,	// (0x00017f0f) wml_tabs_5_pane

0x3f6f,	// (0x00017f29) wml_tabs_pane_g2_ParamLimits

0x3f6f,	// (0x00017f29) wml_tabs_pane_g2

0x3f83,	// (0x00017f3d) wml_tabs_pane_g3_ParamLimits

0x3f83,	// (0x00017f3d) wml_tabs_pane_g3

0xafea,	// (0x0001efa4) wml_tabs_2_active_pane_ParamLimits

0xafea,	// (0x0001efa4) wml_tabs_2_active_pane

0xaffa,	// (0x0001efb4) wml_tabs_2_passive_pane_ParamLimits

0xaffa,	// (0x0001efb4) wml_tabs_2_passive_pane

0xb00a,	// (0x0001efc4) wml_tabs_3_active_pane_cp_ParamLimits

0xb00a,	// (0x0001efc4) wml_tabs_3_active_pane_cp

0xb01b,	// (0x0001efd5) wml_tabs_3_passive_pane_ParamLimits

0xb01b,	// (0x0001efd5) wml_tabs_3_passive_pane

0xb02c,	// (0x0001efe6) wml_tabs_3_passive_pane_cp_ParamLimits

0xb02c,	// (0x0001efe6) wml_tabs_3_passive_pane_cp

0xb03d,	// (0x0001eff7) tabs_4_active_pane

0xb045,	// (0x0001efff) tabs_4_passive_pane

0xb04d,	// (0x0001f007) tabs_4_passive_pane_cp

0xb055,	// (0x0001f00f) tabs_4_passive_pane_cp2

0xa90b,	// (0x0001e8c5) aid_height_text

0xa26d,	// (0x0001e227) mup_volume_cont_pane_ParamLimits

0xa26d,	// (0x0001e227) mup_volume_cont_pane

0x89d8,	// (0x0001c992) aid_size_cell_pinb

0x89e2,	// (0x0001c99c) aid_size_list_pinb

0xaf51,	// (0x0001ef0b) mup2_volume_cont_pane_ParamLimits

0xaf51,	// (0x0001ef0b) mup2_volume_cont_pane

0x7a25,	// (0x0001b9df) mup2_volume_cont_pane_g1_ParamLimits

0x7a25,	// (0x0001b9df) mup2_volume_cont_pane_g1

0x86cf,	// (0x0001c689) aid_size_cell_touch_ParamLimits

0x86cf,	// (0x0001c689) aid_size_cell_touch

0x88d8,	// (0x0001c892) touch_pane_ParamLimits

0x88d8,	// (0x0001c892) touch_pane

0x1293,	// (0x0001524d) main_rss2_pane

0x3fd9,	// (0x00017f93) listscroll_rss2_pane

0x3fe2,	// (0x00017f9c) rss2_navigation_pane

0x3fea,	// (0x00017fa4) list_rss2_pane

0x26ff,	// (0x000166b9) scroll_pane_cp22

0x3ff2,	// (0x00017fac) rss2_navigation_pane_g1

0x3ffb,	// (0x00017fb5) rss2_navigation_pane_g2

0x4003,	// (0x00017fbd) rss2_navigation_pane_g3

0x0002,

0xf6d2,	// (0x0002368c) rss2_navigation_pane_g

0x400b,	// (0x00017fc5) rss2_navigation_pane_t1

0xb05d,	// (0x0001f017) rss2_list_single_pane_ParamLimits

0xb05d,	// (0x0001f017) rss2_list_single_pane

0x4019,	// (0x00017fd3) rss2_list_single_pane_t2

0x4027,	// (0x00017fe1) rss2_list_single_pane_t3_ParamLimits

0x4027,	// (0x00017fe1) rss2_list_single_pane_t3

0x4044,	// (0x00017ffe) rss2_list_single_pane_t4

0x9c57,	// (0x0001dc11) smil_status_pane_g1

0x12e6,	// (0x000152a0) main_image2_pane_ParamLimits

0x12e6,	// (0x000152a0) main_image2_pane

0x7890,	// (0x0001b84a) main_camera2_pane_g9_ParamLimits

0x7890,	// (0x0001b84a) main_camera2_pane_g9

0x78e4,	// (0x0001b89e) main_camera2_pane_t5_ParamLimits

0x78e4,	// (0x0001b89e) main_camera2_pane_t5

0x78f6,	// (0x0001b8b0) main_camera2_pane_t6_ParamLimits

0x78f6,	// (0x0001b8b0) main_camera2_pane_t6

0xb074,	// (0x0001f02e) main_image2_pane_g1_ParamLimits

0xb074,	// (0x0001f02e) main_image2_pane_g1

0xa720,	// (0x0001e6da) smil2_video_pane_ParamLimits

0xa720,	// (0x0001e6da) smil2_video_pane

0x12ad,	// (0x00015267) aid_zoom_text_primary_cp

0x12de,	// (0x00015298) popup_preview_fixed_window

0x1eb0,	// (0x00015e6a) im_reading_pane_g1

0x77ec,	// (0x0001b7a6) cams2_bc_adjust_pane_cp_ParamLimits

0x77ec,	// (0x0001b7a6) cams2_bc_adjust_pane_cp

0x7921,	// (0x0001b8db) cams2_bc_adjust_pane_ParamLimits

0x7921,	// (0x0001b8db) cams2_bc_adjust_pane

0x572e,	// (0x000196e8) cams2_bc_adjust_pane_g1

0x7a5e,	// (0x0001ba18) cams2_slider_pane

0x7a67,	// (0x0001ba21) cams2_slider_pane_g1

0x7a70,	// (0x0001ba2a) cams2_slider_pane_g2

0x0006,

0xf6d9,	// (0x00023693) cams2_slider_pane_g

0x7328,	// (0x0001b2e2) calc_display_pane_ParamLimits

0x7340,	// (0x0001b2fa) calc_paper_pane_ParamLimits

0x735c,	// (0x0001b316) grid_calc_pane_ParamLimits

0x771d,	// (0x0001b6d7) popup_clock_digital_window_t1_ParamLimits

0x2c0c,	// (0x00016bc6) main_image_pane_t1

0x730e,	// (0x0001b2c8) aid_size_cell_calc_ParamLimits

0x730e,	// (0x0001b2c8) aid_size_cell_calc

0xab2f,	// (0x0001eae9) popup_blid_sat_info2_window_ParamLimits

0xab2f,	// (0x0001eae9) popup_blid_sat_info2_window

0x408e,	// (0x00018048) aid_size_cell_blid

0x4096,	// (0x00018050) bg_popup_window_pane_cp07

0x40b9,	// (0x00018073) grid_popup_blid_pane

0x40c1,	// (0x0001807b) heading_pane_cp05_ParamLimits

0x40c1,	// (0x0001807b) heading_pane_cp05

0x4189,	// (0x00018143) cell_popup_blid_pane_ParamLimits

0x4189,	// (0x00018143) cell_popup_blid_pane

0x41a9,	// (0x00018163) cell_popup_blid_pane_g1

0x41b1,	// (0x0001816b) cell_popup_blid_pane_t1

0xaf1b,	// (0x0001eed5) mup2_indicator_pane_ParamLimits

0xaf1b,	// (0x0001eed5) mup2_indicator_pane

0x28be,	// (0x00016878) mup2_visualizer_osc_pane

0x3ef6,	// (0x00017eb0) mup2_visualizer_spec_pane_ParamLimits

0x3ef6,	// (0x00017eb0) mup2_visualizer_spec_pane

0xb080,	// (0x0001f03a) mup2_spec_half_pane

0xb089,	// (0x0001f043) mup2_spec_half_pane_cp

0xb091,	// (0x0001f04b) mup2_spec_bar_pane_ParamLimits

0xb091,	// (0x0001f04b) mup2_spec_bar_pane

0x3e4a,	// (0x00017e04) mup2_spec_bar_pane_g1

0x3e54,	// (0x00017e0e) mup2_spec_bar_pane_g2

0x0001,

0xf64c,	// (0x00023606) mup2_spec_bar_pane_g

0xb0b0,	// (0x0001f06a) mup2_osc_middle_pane

0x3e66,	// (0x00017e20) mup2_visualizer_osc_pane_g1

0x1314,	// (0x000152ce) popup_number_entry_window_t1_ParamLimits

0x1327,	// (0x000152e1) popup_number_entry_window_t2_ParamLimits

0x1339,	// (0x000152f3) popup_number_entry_window_t3_ParamLimits

0x8925,	// (0x0001c8df) popup_number_entry_window_t5_ParamLimits

0x8925,	// (0x0001c8df) popup_number_entry_window_t5

0xf0fb,	// (0x000230b5) popup_number_entry_window_t_ParamLimits

0x134b,	// (0x00015305) text_title_cp2_ParamLimits

0x775c,	// (0x0001b716) aid_hotspot_pointer_text2_pane

0x77b2,	// (0x0001b76c) main_viewer_pane_g9_ParamLimits

0x77b2,	// (0x0001b76c) main_viewer_pane_g9

0x20ef,	// (0x000160a9) cale_month_pane_t1_ParamLimits

0x2184,	// (0x0001613e) bg_cale_pane_ParamLimits

0x219c,	// (0x00016156) list_cale_pane_ParamLimits

0x1c41,	// (0x00015bfb) listscroll_cale_day_pane_t1

0x21ad,	// (0x00016167) scroll_pane_cp09_ParamLimits

0xa2a8,	// (0x0001e262) main_mup_eq_pane_t1_ParamLimits

0xa2a8,	// (0x0001e262) main_mup_eq_pane_t1

0xa2be,	// (0x0001e278) main_mup_eq_pane_t2_ParamLimits

0xa2be,	// (0x0001e278) main_mup_eq_pane_t2

0xa2d4,	// (0x0001e28e) main_mup_eq_pane_t3_ParamLimits

0xa2d4,	// (0x0001e28e) main_mup_eq_pane_t3

0xa2ea,	// (0x0001e2a4) main_mup_eq_pane_t4_ParamLimits

0xa2ea,	// (0x0001e2a4) main_mup_eq_pane_t4

0xa300,	// (0x0001e2ba) main_mup_eq_pane_t5_ParamLimits

0xa300,	// (0x0001e2ba) main_mup_eq_pane_t5

0xa316,	// (0x0001e2d0) main_mup_eq_pane_t6_ParamLimits

0xa316,	// (0x0001e2d0) main_mup_eq_pane_t6

0xa328,	// (0x0001e2e2) main_mup_eq_pane_t7_ParamLimits

0xa328,	// (0x0001e2e2) main_mup_eq_pane_t7

0xa33a,	// (0x0001e2f4) main_mup_eq_pane_t8_ParamLimits

0xa33a,	// (0x0001e2f4) main_mup_eq_pane_t8

0xa34c,	// (0x0001e306) main_mup_eq_pane_t9_ParamLimits

0xa34c,	// (0x0001e306) main_mup_eq_pane_t9

0xa362,	// (0x0001e31c) main_mup_eq_pane_t10_ParamLimits

0xa362,	// (0x0001e31c) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x00023442) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x00023442) main_mup_eq_pane_t

0xa3f5,	// (0x0001e3af) mup_equalizer_pane_cp5_ParamLimits

0xa407,	// (0x0001e3c1) mup_equalizer_pane_cp6_ParamLimits

0xa419,	// (0x0001e3d3) mup_equalizer_pane_cp7_ParamLimits

0x1293,	// (0x0001524d) main_gallery_pane

0x3e6f,	// (0x00017e29) smil2_volume_pane

0x3e8a,	// (0x00017e44) smil_status_volume_pane_g1_ParamLimits

0x3e77,	// (0x00017e31) smil_status_volume_pane_g2_ParamLimits

0x77be,	// (0x0001b778) smil_status_volume_pane_g3_ParamLimits

0xf651,	// (0x0002360b) smil_status_volume_pane_g_ParamLimits

0x4096,	// (0x00018050) bg_popup_window_pane_cp07_ParamLimits

0x40a4,	// (0x0001805e) blid_firmament_pane

0xb0b9,	// (0x0001f073) aid_size_cell_gallery_ParamLimits

0xb0b9,	// (0x0001f073) aid_size_cell_gallery

0xb0c7,	// (0x0001f081) grid_gallery_pane_ParamLimits

0xb0c7,	// (0x0001f081) grid_gallery_pane

0xb0d3,	// (0x0001f08d) cell_gallery_pane_ParamLimits

0xb0d3,	// (0x0001f08d) cell_gallery_pane

0x41bf,	// (0x00018179) bg_cell_gallery_focus_pane_ParamLimits

0x41bf,	// (0x00018179) bg_cell_gallery_focus_pane

0x41d1,	// (0x0001818b) cell_gallery_pane_g1_ParamLimits

0x41d1,	// (0x0001818b) cell_gallery_pane_g1

0xb112,	// (0x0001f0cc) cell_gallery_pane_g2_ParamLimits

0xb112,	// (0x0001f0cc) cell_gallery_pane_g2

0xb11f,	// (0x0001f0d9) cell_gallery_pane_g3_ParamLimits

0xb11f,	// (0x0001f0d9) cell_gallery_pane_g3

0x41dd,	// (0x00018197) cell_gallery_pane_g4_ParamLimits

0x41dd,	// (0x00018197) cell_gallery_pane_g4

0x0003,

0xf6ff,	// (0x000236b9) cell_gallery_pane_g_ParamLimits

0xf6ff,	// (0x000236b9) cell_gallery_pane_g

0x41e9,	// (0x000181a3) bg_cell_gallery_focus_pane_g1

0x41f1,	// (0x000181ab) bg_cell_gallery_focus_pane_g2

0x41f9,	// (0x000181b3) bg_cell_gallery_focus_pane_g3

0x4201,	// (0x000181bb) bg_cell_gallery_focus_pane_g4

0x4209,	// (0x000181c3) bg_cell_gallery_focus_pane_g5

0x4211,	// (0x000181cb) bg_cell_gallery_focus_pane_g6

0x4219,	// (0x000181d3) bg_cell_gallery_focus_pane_g7

0x4221,	// (0x000181db) bg_cell_gallery_focus_pane_g8

0x0007,

0xf708,	// (0x000236c2) bg_cell_gallery_focus_pane_g

0x4229,	// (0x000181e3) aid_firma_cardinal

0x423d,	// (0x000181f7) blid_firmament_pane_t1

0x4254,	// (0x0001820e) blid_firmament_pane_t2

0x426b,	// (0x00018225) blid_firmament_pane_t3

0x4282,	// (0x0001823c) blid_firmament_pane_t4

0x0003,

0xf719,	// (0x000236d3) blid_firmament_pane_t

0x4299,	// (0x00018253) blid_sat_info_pane

0x42a9,	// (0x00018263) blid_sat_info_pane_g1

0x42a9,	// (0x00018263) blid_sat_info_pane_g2

0x0001,

0xf722,	// (0x000236dc) blid_sat_info_pane_g

0x42b3,	// (0x0001826d) blid_sat_info_pane_t1

0x42c1,	// (0x0001827b) smil2_volume_content_pane

0x42ca,	// (0x00018284) smil2_volume_pane_g1

0x42d2,	// (0x0001828c) smil2_volume_content_pane_g1

0x42db,	// (0x00018295) smil2_volume_content_pane_g2

0x42e4,	// (0x0001829e) smil2_volume_content_pane_g3

0x42ed,	// (0x000182a7) smil2_volume_content_pane_g4

0x42f6,	// (0x000182b0) smil2_volume_content_pane_g5

0x42ff,	// (0x000182b9) smil2_volume_content_pane_g6

0x4308,	// (0x000182c2) smil2_volume_content_pane_g7

0x4311,	// (0x000182cb) smil2_volume_content_pane_g8

0x431a,	// (0x000182d4) smil2_volume_content_pane_g9

0x4323,	// (0x000182dd) smil2_volume_content_pane_g10

0x0009,

0xf727,	// (0x000236e1) smil2_volume_content_pane_g

0x8e38,	// (0x0001cdf2) cale_week_day_heading_pane_t1_ParamLimits

0x8e51,	// (0x0001ce0b) cale_week_day_heading_pane_t2_ParamLimits

0x8e6a,	// (0x0001ce24) cale_week_day_heading_pane_t3_ParamLimits

0x8e83,	// (0x0001ce3d) cale_week_day_heading_pane_t4_ParamLimits

0x8e9c,	// (0x0001ce56) cale_week_day_heading_pane_t5_ParamLimits

0x8eb5,	// (0x0001ce6f) cale_week_day_heading_pane_t6_ParamLimits

0x8ece,	// (0x0001ce88) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x000231ba) cale_week_day_heading_pane_t_ParamLimits

0x1c53,	// (0x00015c0d) bg_cale_side_pane_ParamLimits

0x74a7,	// (0x0001b461) cale_week_time_pane_t1_ParamLimits

0x74d3,	// (0x0001b48d) cale_week_time_pane_t2_ParamLimits

0x74ff,	// (0x0001b4b9) cale_week_time_pane_t3_ParamLimits

0x752b,	// (0x0001b4e5) cale_week_time_pane_t4_ParamLimits

0x7557,	// (0x0001b511) cale_week_time_pane_t5_ParamLimits

0x7583,	// (0x0001b53d) cale_week_time_pane_t6_ParamLimits

0x75af,	// (0x0001b569) cale_week_time_pane_t7_ParamLimits

0x75db,	// (0x0001b595) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x000231c9) cale_week_time_pane_t_ParamLimits

0x8ee7,	// (0x0001cea1) cell_cale_week_pane_g2_ParamLimits

0x1c53,	// (0x00015c0d) bg_cale_side_pane_cp01_ParamLimits

0x9b1e,	// (0x0001dad8) cale_month_week_pane_t1_ParamLimits

0x9b35,	// (0x0001daef) cale_month_week_pane_t2_ParamLimits

0x9b4c,	// (0x0001db06) cale_month_week_pane_t3_ParamLimits

0x9b63,	// (0x0001db1d) cale_month_week_pane_t4_ParamLimits

0x9b7a,	// (0x0001db34) cale_month_week_pane_t5_ParamLimits

0x9b91,	// (0x0001db4b) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x000232a2) cale_month_week_pane_t_ParamLimits

0x7681,	// (0x0001b63b) cell_cale_month_pane_g1_ParamLimits

0x1293,	// (0x0001524d) main_cale_event_viewer_pane

0x1293,	// (0x0001524d) listscroll_cale_event_viewer_pane

0x432c,	// (0x000182e6) list_cale_ev_pane

0x4334,	// (0x000182ee) scroll_pane_cp023

0xb12c,	// (0x0001f0e6) field_cale_ev_pane_ParamLimits

0xb12c,	// (0x0001f0e6) field_cale_ev_pane

0x4340,	// (0x000182fa) field_cale_ev_content_pane_ParamLimits

0x4340,	// (0x000182fa) field_cale_ev_content_pane

0x434c,	// (0x00018306) field_cale_ev_pane_g1_ParamLimits

0x434c,	// (0x00018306) field_cale_ev_pane_g1

0x4358,	// (0x00018312) field_cale_ev_pane_g2_ParamLimits

0x4358,	// (0x00018312) field_cale_ev_pane_g2

0x4370,	// (0x0001832a) field_cale_ev_pane_g3_ParamLimits

0x4370,	// (0x0001832a) field_cale_ev_pane_g3

0x0002,

0xf73c,	// (0x000236f6) field_cale_ev_pane_g_ParamLimits

0xf73c,	// (0x000236f6) field_cale_ev_pane_g

0x4388,	// (0x00018342) field_cale_ev_pane_t1_ParamLimits

0x4388,	// (0x00018342) field_cale_ev_pane_t1

0xb146,	// (0x0001f100) field_cale_ev_content_pane_t1_ParamLimits

0xb146,	// (0x0001f100) field_cale_ev_content_pane_t1

0x2a4f,	// (0x00016a09) bg_button_pane_cp01

0x1c19,	// (0x00015bd3) listscroll_cale_week_pane_ParamLimits

0x8c68,	// (0x0001cc22) popup_toolbar_window_cp01

0x1c41,	// (0x00015bfb) listscroll_cale_week_pane_t1_ParamLimits

0x1a51,	// (0x00015a0b) listscroll_cale_day_pane_ParamLimits

0x8c68,	// (0x0001cc22) popup_toolbar_window_cp02

0x1c41,	// (0x00015bfb) listscroll_cale_day_pane_t1_ParamLimits

0x1c19,	// (0x00015bd3) main_cale_month_pane_ParamLimits

0xabcf,	// (0x0001eb89) popup_toolbar_window_cp03_ParamLimits

0xabcf,	// (0x0001eb89) popup_toolbar_window_cp03

0xa648,	// (0x0001e602) main_image_pane_g2_ParamLimits

0xa648,	// (0x0001e602) main_image_pane_g2

0xa654,	// (0x0001e60e) main_image_pane_g3_ParamLimits

0xa654,	// (0x0001e60e) main_image_pane_g3

0x0002,

0xf51a,	// (0x000234d4) main_image_pane_g_ParamLimits

0xf51a,	// (0x000234d4) main_image_pane_g

0x2c0c,	// (0x00016bc6) main_image_pane_t1_ParamLimits

0xa660,	// (0x0001e61a) main_image_pane_t2_ParamLimits

0xa660,	// (0x0001e61a) main_image_pane_t2

0xa672,	// (0x0001e62c) main_image_pane_t3_ParamLimits

0xa672,	// (0x0001e62c) main_image_pane_t3

0xa684,	// (0x0001e63e) main_image_pane_t4_ParamLimits

0xa684,	// (0x0001e63e) main_image_pane_t4

0x0003,

0xf521,	// (0x000234db) main_image_pane_t_ParamLimits

0xf521,	// (0x000234db) main_image_pane_t

0xa696,	// (0x0001e650) popup_image_details_window_cp01

0xa69e,	// (0x0001e658) popup_toobar_trans_pane_cp01_ParamLimits

0xa69e,	// (0x0001e658) popup_toobar_trans_pane_cp01

0xab6e,	// (0x0001eb28) popup_image_details_window_ParamLimits

0xab6e,	// (0x0001eb28) popup_image_details_window

0x3dd2,	// (0x00017d8c) popup_image_focus_window

0x77e0,	// (0x0001b79a) camera2_autofocus_pane_ParamLimits

0x77e0,	// (0x0001b79a) camera2_autofocus_pane

0x1293,	// (0x0001524d) bg_popup_sub_pane_cp06

0x439f,	// (0x00018359) popup_image_focus_window_g1

0x43a7,	// (0x00018361) popup_image_focus_window_g2

0x43af,	// (0x00018369) popup_image_focus_window_g3

0x43b7,	// (0x00018371) popup_image_focus_window_g4

0x0003,

0xf743,	// (0x000236fd) popup_image_focus_window_g

0x43bf,	// (0x00018379) popup_image_focus_window_t1

0x43cd,	// (0x00018387) popup_image_focus_window_t2

0x43dc,	// (0x00018396) popup_image_focus_window_t3

0x0002,

0xf74c,	// (0x00023706) popup_image_focus_window_t

0x43ea,	// (0x000183a4) camera2_autofocus_pane_g1

0x12e6,	// (0x000152a0) bg_tb_trans_pane_cp01

0x43f8,	// (0x000183b2) popup_image_details_window_g1

0x440b,	// (0x000183c5) popup_image_details_window_g2

0x0002,

0xf75e,	// (0x00023718) popup_image_details_window_g

0x4434,	// (0x000183ee) popup_image_details_window_t1

0x4446,	// (0x00018400) popup_image_details_window_t2

0x445f,	// (0x00018419) popup_image_details_window_t3

0x44a1,	// (0x0001845b) popup_image_details_window_t4

0x44bc,	// (0x00018476) popup_image_details_window_t5

0x0004,

0xf765,	// (0x0002371f) popup_image_details_window_t

0x1a1f,	// (0x000159d9) bg_calc_paper_pane_ParamLimits

0x737c,	// (0x0001b336) grid_highlight_pane_cp013

0x7386,	// (0x0001b340) list_calc_pane_ParamLimits

0x7398,	// (0x0001b352) scroll_pane_cp024

0x1a51,	// (0x00015a0b) bg_calc_display_pane_ParamLimits

0x73a0,	// (0x0001b35a) calc_display_pane_t1_ParamLimits

0x73b5,	// (0x0001b36f) calc_display_pane_t2_ParamLimits

0x73ca,	// (0x0001b384) calc_display_pane_t3_ParamLimits

0xf182,	// (0x0002313c) calc_display_pane_t_ParamLimits

0x742b,	// (0x0001b3e5) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x00023159) cell_calc_pane_g

0x7434,	// (0x0001b3ee) cell_calc_pane_t1

0x1afe,	// (0x00015ab8) grid_highlight_pane_cp02_ParamLimits

0x1b14,	// (0x00015ace) toolbar_button_pane_cp01_ParamLimits

0x1b14,	// (0x00015ace) toolbar_button_pane_cp01

0x2c51,	// (0x00016c0b) temp_image_control_pane_ParamLimits

0x2c51,	// (0x00016c0b) temp_image_control_pane

0x12e6,	// (0x000152a0) main_mp3_pane

0x44d6,	// (0x00018490) temp_image_control_pane_g1_ParamLimits

0x44d6,	// (0x00018490) temp_image_control_pane_g1

0x44e4,	// (0x0001849e) temp_image_control_pane_g2_ParamLimits

0x44e4,	// (0x0001849e) temp_image_control_pane_g2

0x44f6,	// (0x000184b0) temp_image_control_pane_g3_ParamLimits

0x44f6,	// (0x000184b0) temp_image_control_pane_g3

0xb190,	// (0x0001f14a) temp_image_control_pane_g4_ParamLimits

0xb190,	// (0x0001f14a) temp_image_control_pane_g4

0x0003,

0xf770,	// (0x0002372a) temp_image_control_pane_g_ParamLimits

0xf770,	// (0x0002372a) temp_image_control_pane_g

0x44d6,	// (0x00018490) main_mp3_pane_g1

0xb1a1,	// (0x0001f15b) main_mp3_pane_g2

0x0007,

0xf779,	// (0x00023733) main_mp3_pane_g

0x4539,	// (0x000184f3) main_mp3_pane_t1

0x1d19,	// (0x00015cd3) main_camera_pane_g8_ParamLimits

0x1d19,	// (0x00015cd3) main_camera_pane_g8

0x90e8,	// (0x0001d0a2) main_video_pane_g7_ParamLimits

0x90e8,	// (0x0001d0a2) main_video_pane_g7

0x790f,	// (0x0001b8c9) main_camera2_pane_t7_ParamLimits

0x790f,	// (0x0001b8c9) main_camera2_pane_t7

0x1f16,	// (0x00015ed0) scroll_pane_cp025_ParamLimits

0x1f16,	// (0x00015ed0) scroll_pane_cp025

0x1f2a,	// (0x00015ee4) scroll_pane_cp026_ParamLimits

0x1f2a,	// (0x00015ee4) scroll_pane_cp026

0x1f39,	// (0x00015ef3) wml_content_pane_ParamLimits

0x1293,	// (0x0001524d) main_touch_calib_pane

0xb238,	// (0x0001f1f2) main_touch_calib_pane_g1

0xb244,	// (0x0001f1fe) main_touch_calib_pane_g2

0xb250,	// (0x0001f20a) main_touch_calib_pane_g3

0xb25c,	// (0x0001f216) main_touch_calib_pane_g4

0x0003,

0xf797,	// (0x00023751) main_touch_calib_pane_g

0xb268,	// (0x0001f222) main_touch_calib_pane_t1

0xb27d,	// (0x0001f237) main_touch_calib_pane_t2

0x0004,

0xf7a0,	// (0x0002375a) main_touch_calib_pane_t

0x27b0,	// (0x0001676a) mup_progress_pane_cp02

0x27cf,	// (0x00016789) navi_pane_g1

0x284f,	// (0x00016809) navi_pane_mp_t3

0x12e6,	// (0x000152a0) main_mp3_pane_ParamLimits

0xac09,	// (0x0001ebc3) navi_pane_ParamLimits

0x44d6,	// (0x00018490) main_mp3_pane_g1_ParamLimits

0xb1a1,	// (0x0001f15b) main_mp3_pane_g2_ParamLimits

0xb1ad,	// (0x0001f167) main_mp3_pane_g3_ParamLimits

0xb1ad,	// (0x0001f167) main_mp3_pane_g3

0xb1b9,	// (0x0001f173) main_mp3_pane_g4_ParamLimits

0xb1b9,	// (0x0001f173) main_mp3_pane_g4

0x4506,	// (0x000184c0) main_mp3_pane_g5_ParamLimits

0x4506,	// (0x000184c0) main_mp3_pane_g5

0x4514,	// (0x000184ce) main_mp3_pane_g6_ParamLimits

0x4514,	// (0x000184ce) main_mp3_pane_g6

0x4521,	// (0x000184db) main_mp3_pane_g7_ParamLimits

0x4521,	// (0x000184db) main_mp3_pane_g7

0x452d,	// (0x000184e7) main_mp3_pane_g8_ParamLimits

0x452d,	// (0x000184e7) main_mp3_pane_g8

0xf779,	// (0x00023733) main_mp3_pane_g_ParamLimits

0xb1c5,	// (0x0001f17f) main_mp3_pane_t2

0xb1d3,	// (0x0001f18d) main_mp3_pane_t3

0x4547,	// (0x00018501) main_mp3_pane_t4

0x4555,	// (0x0001850f) main_mp3_pane_t5

0x0005,

0xf78a,	// (0x00023744) main_mp3_pane_t

0x4563,	// (0x0001851d) mup_progress_pane_cp01

0x12ad,	// (0x00015267) aid_zoom_text_secondary2

0x432c,	// (0x000182e6) list_cale_ev2_pane

0x4334,	// (0x000182ee) scroll_pane_cp023_ParamLimits

0x561e,	// (0x000195d8) field_cale_ev2_pane_ParamLimits

0x561e,	// (0x000195d8) field_cale_ev2_pane

0x456b,	// (0x00018525) field_cale_ev2_pane_g1_ParamLimits

0x456b,	// (0x00018525) field_cale_ev2_pane_g1

0x4577,	// (0x00018531) field_cale_ev2_pane_g2_ParamLimits

0x4577,	// (0x00018531) field_cale_ev2_pane_g2

0x458f,	// (0x00018549) field_cale_ev2_pane_g3_ParamLimits

0x458f,	// (0x00018549) field_cale_ev2_pane_g3

0x0003,

0xf7ab,	// (0x00023765) field_cale_ev2_pane_g_ParamLimits

0xf7ab,	// (0x00023765) field_cale_ev2_pane_g

0x45b3,	// (0x0001856d) field_cale_ev2_pane_t1_ParamLimits

0x45b3,	// (0x0001856d) field_cale_ev2_pane_t1

0x45ca,	// (0x00018584) field_cale_ev2_pane_t2_ParamLimits

0x45ca,	// (0x00018584) field_cale_ev2_pane_t2

0x0001,

0xf7b4,	// (0x0002376e) field_cale_ev2_pane_t_ParamLimits

0xf7b4,	// (0x0002376e) field_cale_ev2_pane_t

0xa544,	// (0x0001e4fe) main_postcard_pane_g5_ParamLimits

0xa544,	// (0x0001e4fe) main_postcard_pane_g5

0xa550,	// (0x0001e50a) main_postcard_pane_g6_ParamLimits

0xa550,	// (0x0001e50a) main_postcard_pane_g6

0x8f3d,	// (0x0001cef7) camera2_autofocus_pane_cp_ParamLimits

0x8f3d,	// (0x0001cef7) camera2_autofocus_pane_cp

0x12e6,	// (0x000152a0) main_mup3_pane

0xb2e8,	// (0x0001f2a2) main_mup3_pane_g1_ParamLimits

0xb2e8,	// (0x0001f2a2) main_mup3_pane_g1

0xb309,	// (0x0001f2c3) main_mup3_pane_g2_ParamLimits

0xb309,	// (0x0001f2c3) main_mup3_pane_g2

0xb36c,	// (0x0001f326) main_mup3_pane_g3_ParamLimits

0xb36c,	// (0x0001f326) main_mup3_pane_g3

0xb3a7,	// (0x0001f361) main_mup3_pane_g4_ParamLimits

0xb3a7,	// (0x0001f361) main_mup3_pane_g4

0xb3e2,	// (0x0001f39c) main_mup3_pane_g5_ParamLimits

0xb3e2,	// (0x0001f39c) main_mup3_pane_g5

0xb41d,	// (0x0001f3d7) main_mup3_pane_g6_ParamLimits

0xb41d,	// (0x0001f3d7) main_mup3_pane_g6

0x45df,	// (0x00018599) main_mup3_pane_g7_ParamLimits

0x45df,	// (0x00018599) main_mup3_pane_g7

0x0007,

0xf7c4,	// (0x0002377e) main_mup3_pane_g_ParamLimits

0xf7c4,	// (0x0002377e) main_mup3_pane_g

0xb48b,	// (0x0001f445) main_mup3_pane_t1_ParamLimits

0xb48b,	// (0x0001f445) main_mup3_pane_t1

0xb4ee,	// (0x0001f4a8) main_mup3_pane_t2_ParamLimits

0xb4ee,	// (0x0001f4a8) main_mup3_pane_t2

0xb5ab,	// (0x0001f565) main_mup3_pane_t4_ParamLimits

0xb5ab,	// (0x0001f565) main_mup3_pane_t4

0xb5f1,	// (0x0001f5ab) main_mup3_pane_t5_ParamLimits

0xb5f1,	// (0x0001f5ab) main_mup3_pane_t5

0xb695,	// (0x0001f64f) main_mup3_pane_t6_ParamLimits

0xb695,	// (0x0001f64f) main_mup3_pane_t6

0x0005,

0xf7d5,	// (0x0002378f) main_mup3_pane_t_ParamLimits

0xf7d5,	// (0x0002378f) main_mup3_pane_t

0xb73d,	// (0x0001f6f7) mup3_progress_pane_ParamLimits

0xb73d,	// (0x0001f6f7) mup3_progress_pane

0xb783,	// (0x0001f73d) popup_mup3_control_window_ParamLimits

0xb783,	// (0x0001f73d) popup_mup3_control_window

0x45ed,	// (0x000185a7) popup_mup3_text_window

0xb79c,	// (0x0001f756) mup3_progress_pane_t1

0xb7b2,	// (0x0001f76c) mup3_progress_pane_t2

0x45f5,	// (0x000185af) mup3_progress_pane_t3

0x0002,

0xf7e2,	// (0x0002379c) mup3_progress_pane_t

0x460c,	// (0x000185c6) mup_progress_pane_cp03

0x1293,	// (0x0001524d) bg_tb_trans_pane_cp04

0xb7c8,	// (0x0001f782) mup3_volume_pane

0xb7d0,	// (0x0001f78a) popup_mup3_control_window_g1

0xb7d9,	// (0x0001f793) mup3_volume_pane_g1

0xb7e2,	// (0x0001f79c) mup3_volume_pane_g2

0xb7eb,	// (0x0001f7a5) mup3_volume_pane_g3

0x0002,

0xf7e9,	// (0x000237a3) mup3_volume_pane_g

0x1293,	// (0x0001524d) bg_tb_trans_pane_cp03

0x461c,	// (0x000185d6) popup_mup3_text_window_g1

0x4624,	// (0x000185de) popup_mup3_text_window_t1

0x1ad5,	// (0x00015a8f) list_calc_item_pane_g1_ParamLimits

0x3fc0,	// (0x00017f7a) mup_volume_pane_cp_g1

0xb292,	// (0x0001f24c) main_touch_calib_pane_t3

0xb2a4,	// (0x0001f25e) main_touch_calib_pane_t4

0xb2b6,	// (0x0001f270) main_touch_calib_pane_t5

0x129d,	// (0x00015257) aid_cell_size_toolbar2

0x12a5,	// (0x0001525f) aid_popup3_width_pane

0x12ad,	// (0x00015267) aid_zoom_text_msg_primary

0x766b,	// (0x0001b625) vorec_t7

0x1a99,	// (0x00015a53) bg_calc_paper_pane_g1_ParamLimits

0x1ab1,	// (0x00015a6b) bg_calc_paper_pane_g2_ParamLimits

0x1aa5,	// (0x00015a5f) bg_calc_paper_pane_g3_ParamLimits

0x1ac9,	// (0x00015a83) bg_calc_paper_pane_g4_ParamLimits

0x1abd,	// (0x00015a77) bg_calc_paper_pane_g5_ParamLimits

0x8b68,	// (0x0001cb22) bg_calc_paper_pane_g6_ParamLimits

0x8b77,	// (0x0001cb31) bg_calc_paper_pane_g7_ParamLimits

0x8b86,	// (0x0001cb40) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x00023143) bg_calc_paper_pane_g_ParamLimits

0x8b95,	// (0x0001cb4f) calc_bg_paper_pane_g9_ParamLimits

0x901d,	// (0x0001cfd7) image_qvga_pane_ParamLimits

0x901d,	// (0x0001cfd7) image_qvga_pane

0x1960,	// (0x0001591a) bg_popup_sub_pane_cp04_ParamLimits

0x2b88,	// (0x00016b42) popup_mup_playback_window_g1_ParamLimits

0x2b94,	// (0x00016b4e) popup_mup_playback_window_t1_ParamLimits

0x2ba9,	// (0x00016b63) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x000234cf) popup_mup_playback_window_t_ParamLimits

0xae27,	// (0x0001ede1) main_mup2_pane_g3_ParamLimits

0xae27,	// (0x0001ede1) main_mup2_pane_g3

0x9291,	// (0x0001d24b) popup_toolbar_window_cp04

0x2f8a,	// (0x00016f44) popup_call2_audio_second_window_g3_ParamLimits

0x2f8a,	// (0x00016f44) popup_call2_audio_second_window_g3

0x3394,	// (0x0001734e) popup_call2_audio_first_window_g4_ParamLimits

0x3394,	// (0x0001734e) popup_call2_audio_first_window_g4

0x3a13,	// (0x000179cd) popup_call2_audio_in_window_g4_ParamLimits

0x3a13,	// (0x000179cd) popup_call2_audio_in_window_g4

0xa63b,	// (0x0001e5f5) aid_area_sk_bg_cut_ParamLimits

0xa63b,	// (0x0001e5f5) aid_area_sk_bg_cut

0x2bbe,	// (0x00016b78) aid_area_sk_bg_cut_2_ParamLimits

0x2bbe,	// (0x00016b78) aid_area_sk_bg_cut_2

0xb102,	// (0x0001f0bc) aid_placing_details_win

0xb10a,	// (0x0001f0c4) aid_placing_details_win_2

0x43ea,	// (0x000183a4) camera2_autofocus_pane_g1_ParamLimits

0x888c,	// (0x0001c846) popup_fixed_preview_cale_window_ParamLimits

0x888c,	// (0x0001c846) popup_fixed_preview_cale_window

0x28ea,	// (0x000168a4) navi_slider_pane_g3

0x28e1,	// (0x0001689b) navi_slider_pane_g4

0x28d8,	// (0x00016892) navi_slider_pane_g5

0x28ea,	// (0x000168a4) navi_slider_pane_g6

0x7743,	// (0x0001b6fd) navi_slider_pane_g7

0x2a14,	// (0x000169ce) mup_scale_pane_g3

0x2a1d,	// (0x000169d7) mup_scale_pane_g4

0x2a26,	// (0x000169e0) mup_scale_pane_g5

0xa42b,	// (0x0001e3e5) mup_scale_pane_g6

0xa434,	// (0x0001e3ee) mup_scale_pane_g7

0x28ea,	// (0x000168a4) cams2_slider_pane_g3

0x4075,	// (0x0001802f) cams2_slider_pane_g4

0x7a79,	// (0x0001ba33) cams2_slider_pane_g5

0x28ea,	// (0x000168a4) cams2_slider_pane_g6

0x7a81,	// (0x0001ba3b) cams2_slider_pane_g7

0x42a9,	// (0x00018263) camera2_autofocus_pane_cp_g1

0x4632,	// (0x000185ec) bg_popup_preview_window_pane_cp02_ParamLimits

0x4632,	// (0x000185ec) bg_popup_preview_window_pane_cp02

0xb7f4,	// (0x0001f7ae) list_fp_cale_pane_ParamLimits

0xb7f4,	// (0x0001f7ae) list_fp_cale_pane

0x463e,	// (0x000185f8) popup_fixed_preview_cale_window_t1_ParamLimits

0x463e,	// (0x000185f8) popup_fixed_preview_cale_window_t1

0xb804,	// (0x0001f7be) popup_fixed_preview_cale_window_t2_ParamLimits

0xb804,	// (0x0001f7be) popup_fixed_preview_cale_window_t2

0xb819,	// (0x0001f7d3) popup_fixed_preview_cale_window_t3_ParamLimits

0xb819,	// (0x0001f7d3) popup_fixed_preview_cale_window_t3

0x0002,

0xf7f0,	// (0x000237aa) popup_fixed_preview_cale_window_t_ParamLimits

0xf7f0,	// (0x000237aa) popup_fixed_preview_cale_window_t

0xb82b,	// (0x0001f7e5) list_single_fp_cale_pane_ParamLimits

0xb82b,	// (0x0001f7e5) list_single_fp_cale_pane

0xb838,	// (0x0001f7f2) list_single_fp_cale_pane_g1_ParamLimits

0xb838,	// (0x0001f7f2) list_single_fp_cale_pane_g1

0x465c,	// (0x00018616) list_single_fp_cale_pane_g2_ParamLimits

0x465c,	// (0x00018616) list_single_fp_cale_pane_g2

0x0002,

0xf7f7,	// (0x000237b1) list_single_fp_cale_pane_g_ParamLimits

0xf7f7,	// (0x000237b1) list_single_fp_cale_pane_g

0xb844,	// (0x0001f7fe) list_single_fp_cale_pane_t1_ParamLimits

0xb844,	// (0x0001f7fe) list_single_fp_cale_pane_t1

0xb856,	// (0x0001f810) list_single_fp_cale_pane_t2_ParamLimits

0xb856,	// (0x0001f810) list_single_fp_cale_pane_t2

0x0001,

0xf7fe,	// (0x000237b8) list_single_fp_cale_pane_t_ParamLimits

0xf7fe,	// (0x000237b8) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1293,	// (0x0001524d) main_dialer_pane

0xb889,	// (0x0001f843) aid_cell_size_keypad

0xb893,	// (0x0001f84d) dialer_ne_pane

0xb89b,	// (0x0001f855) grid_dialer_command_1_pane

0xb8a3,	// (0x0001f85d) grid_dialer_command_2_pane

0xb8ab,	// (0x0001f865) grid_dialer_keypad_pane

0xb8bb,	// (0x0001f875) bg_popup_call_pane_cp06_ParamLimits

0xb8bb,	// (0x0001f875) bg_popup_call_pane_cp06

0xb8c7,	// (0x0001f881) dialer_ne_clear_pane_ParamLimits

0xb8c7,	// (0x0001f881) dialer_ne_clear_pane

0x4675,	// (0x0001862f) dialer_ne_pane_g1

0x467d,	// (0x00018637) dialer_ne_pane_t1_ParamLimits

0x467d,	// (0x00018637) dialer_ne_pane_t1

0xb8d3,	// (0x0001f88d) dialer_ne_pane_t2_ParamLimits

0xb8d3,	// (0x0001f88d) dialer_ne_pane_t2

0xb8f0,	// (0x0001f8aa) dialer_ne_pane_t3_ParamLimits

0xb8f0,	// (0x0001f8aa) dialer_ne_pane_t3

0x0002,

0xf803,	// (0x000237bd) dialer_ne_pane_t_ParamLimits

0xf803,	// (0x000237bd) dialer_ne_pane_t

0xb914,	// (0x0001f8ce) dialer_ne_pane_t3_copy1_ParamLimits

0xb914,	// (0x0001f8ce) dialer_ne_pane_t3_copy1

0xb938,	// (0x0001f8f2) cell_dialer_keypad_pane_ParamLimits

0xb938,	// (0x0001f8f2) cell_dialer_keypad_pane

0xb94d,	// (0x0001f907) cell_dialer_command_1_pane_ParamLimits

0xb94d,	// (0x0001f907) cell_dialer_command_1_pane

0xb963,	// (0x0001f91d) cell_dialer_command_2_pane_ParamLimits

0xb963,	// (0x0001f91d) cell_dialer_command_2_pane

0x468f,	// (0x00018649) bg_button_pane_cp02_ParamLimits

0x468f,	// (0x00018649) bg_button_pane_cp02

0xb972,	// (0x0001f92c) cell_dialer_keypad_pane_g1_ParamLimits

0xb972,	// (0x0001f92c) cell_dialer_keypad_pane_g1

0x468f,	// (0x00018649) bg_button_pane_cp03_ParamLimits

0x468f,	// (0x00018649) bg_button_pane_cp03

0xb987,	// (0x0001f941) cell_dialer_command_1_pane_g1_ParamLimits

0xb987,	// (0x0001f941) cell_dialer_command_1_pane_g1

0x469b,	// (0x00018655) bg_button_pane_cp04

0xb99a,	// (0x0001f954) cell_dialer_command_2_pane_g1

0x28be,	// (0x00016878) bg_button_pane_cp06

0x46a3,	// (0x0001865d) dialer_ne_clear_pane_g1

0x27db,	// (0x00016795) navi_pane_g2

0xa022,	// (0x0001dfdc) navi_pane_g3

0x0002,

0xf418,	// (0x000233d2) navi_pane_g

0x285d,	// (0x00016817) navi_pane_mv_g2

0x2885,	// (0x0001683f) navi_pane_mv_g5

0xa047,	// (0x0001e001) navi_pane_mv_t1

0x1a51,	// (0x00015a0b) main_clock2_pane

0xb9c9,	// (0x0001f983) main_clock2_list_pane_ParamLimits

0xb9c9,	// (0x0001f983) main_clock2_list_pane

0xb9ef,	// (0x0001f9a9) main_clock2_pane_t1_ParamLimits

0xb9ef,	// (0x0001f9a9) main_clock2_pane_t1

0xba19,	// (0x0001f9d3) main_clock2_pane_t2_ParamLimits

0xba19,	// (0x0001f9d3) main_clock2_pane_t2

0x0004,

0xf80a,	// (0x000237c4) main_clock2_pane_t_ParamLimits

0xf80a,	// (0x000237c4) main_clock2_pane_t

0xba7c,	// (0x0001fa36) popup_clock_analogue_window_cp03_ParamLimits

0xba7c,	// (0x0001fa36) popup_clock_analogue_window_cp03

0xba98,	// (0x0001fa52) popup_clock_digital_window_cp02_ParamLimits

0xba98,	// (0x0001fa52) popup_clock_digital_window_cp02

0xbae6,	// (0x0001faa0) main_clock2_list_single_pane_ParamLimits

0xbae6,	// (0x0001faa0) main_clock2_list_single_pane

0x28be,	// (0x00016878) list_highlight_pane_cp05

0x46ab,	// (0x00018665) main_clock2_list_single_pane_t1

0x9291,	// (0x0001d24b) popup_toolbar_window_cp04_ParamLimits

0xb160,	// (0x0001f11a) camera2_autofocus_pane_g2_ParamLimits

0xb160,	// (0x0001f11a) camera2_autofocus_pane_g2

0xb16c,	// (0x0001f126) camera2_autofocus_pane_g3_ParamLimits

0xb16c,	// (0x0001f126) camera2_autofocus_pane_g3

0xb178,	// (0x0001f132) camera2_autofocus_pane_g4_ParamLimits

0xb178,	// (0x0001f132) camera2_autofocus_pane_g4

0xb184,	// (0x0001f13e) camera2_autofocus_pane_g5_ParamLimits

0xb184,	// (0x0001f13e) camera2_autofocus_pane_g5

0x0004,

0xf753,	// (0x0002370d) camera2_autofocus_pane_g_ParamLimits

0xf753,	// (0x0002370d) camera2_autofocus_pane_g

0xb2c8,	// (0x0001f282) camera2_autofocus_pane_cp_g2

0xb2d0,	// (0x0001f28a) camera2_autofocus_pane_cp_g3

0xb2d8,	// (0x0001f292) camera2_autofocus_pane_cp_g4

0xb2e0,	// (0x0001f29a) camera2_autofocus_pane_cp_g5

0x0004,

0xf7b9,	// (0x00023773) camera2_autofocus_pane_cp_g

0xb8b3,	// (0x0001f86d) popup_dialer_spcha_window

0x1293,	// (0x0001524d) bg_popup_sub_pane_cp07

0x46b9,	// (0x00018673) list_spcha_pane

0x46c1,	// (0x0001867b) list_single_spcha_pane_ParamLimits

0x46c1,	// (0x0001867b) list_single_spcha_pane

0x1293,	// (0x0001524d) list_highlight_pane_cp06

0x46d2,	// (0x0001868c) list_single_spcha_pane_t1

0x37bd,	// (0x00017777) popup_call2_audio_out_window_g4_ParamLimits

0x37bd,	// (0x00017777) popup_call2_audio_out_window_g4

0x1293,	// (0x0001524d) main_imed2_pane

0x3dda,	// (0x00017d94) popup_imed_adjust2_window

0xab7a,	// (0x0001eb34) popup_imed_trans_window_ParamLimits

0xab7a,	// (0x0001eb34) popup_imed_trans_window

0x40ed,	// (0x000180a7) popup_blid_sat_info2_window_t1

0x40fb,	// (0x000180b5) popup_blid_sat_info2_window_t2

0x000a,

0xf6e8,	// (0x000236a2) popup_blid_sat_info2_window_t

0xbb16,	// (0x0001fad0) aid_size_cell_colour_35

0xbb2d,	// (0x0001fae7) aid_size_cell_colour_112

0xbb44,	// (0x0001fafe) aid_size_cell_effect

0x12e6,	// (0x000152a0) bg_tb_trans_pane_cp02

0x4495,	// (0x0001844f) heading_imed_pane

0xbb5e,	// (0x0001fb18) listscroll_imed_pane

0x46e0,	// (0x0001869a) heading_imed_pane_g1

0x46e8,	// (0x000186a2) heading_imed_pane_t1

0x46f6,	// (0x000186b0) grid_imed_colour_35_pane_ParamLimits

0x46f6,	// (0x000186b0) grid_imed_colour_35_pane

0xbb6a,	// (0x0001fb24) grid_imed_effect_pane

0x4709,	// (0x000186c3) list_imed_aspect_pane

0xbb76,	// (0x0001fb30) scroll_pane_cp027_ParamLimits

0xbb76,	// (0x0001fb30) scroll_pane_cp027

0xbb82,	// (0x0001fb3c) cell_imed_effect_pane_ParamLimits

0xbb82,	// (0x0001fb3c) cell_imed_effect_pane

0x4711,	// (0x000186cb) cell_imed_colour_pane_ParamLimits

0x4711,	// (0x000186cb) cell_imed_colour_pane

0x474b,	// (0x00018705) cell_imed_colour_pane_g1_ParamLimits

0x474b,	// (0x00018705) cell_imed_colour_pane_g1

0x475c,	// (0x00018716) hgihlgiht_grid_pane_cp016_ParamLimits

0x475c,	// (0x00018716) hgihlgiht_grid_pane_cp016

0xbb98,	// (0x0001fb52) cell_imed_effect_pane_g1

0xbba0,	// (0x0001fb5a) grid_highlight_pane_cp017

0x476d,	// (0x00018727) list_imed_single_pane_ParamLimits

0x476d,	// (0x00018727) list_imed_single_pane

0x1293,	// (0x0001524d) list_highlight_pane_cp07

0x4780,	// (0x0001873a) list_imed_aspect_pane_comp1_t1

0x3db4,	// (0x00017d6e) bg_tb_trans_pane_cp05

0x47a0,	// (0x0001875a) popup_imed_adjust2_window_g1

0x47c7,	// (0x00018781) popup_imed_adjust2_window_t1

0x47df,	// (0x00018799) slider_imed_adjust_pane

0x47f3,	// (0x000187ad) slider_imed_adjust_pane_g1

0x4803,	// (0x000187bd) slider_imed_adjust_pane_g2

0x4813,	// (0x000187cd) slider_imed_adjust_pane_g3

0x4824,	// (0x000187de) slider_imed_adjust_pane_g4

0x0003,

0xf827,	// (0x000237e1) slider_imed_adjust_pane_g

0xbba9,	// (0x0001fb63) aid_size_cell_clipart2

0xbbb5,	// (0x0001fb6f) grid_imed_clipart_pane

0x4835,	// (0x000187ef) scroll_pane_cp031

0xbbbf,	// (0x0001fb79) cell_imed_clipart_pane_ParamLimits

0xbbbf,	// (0x0001fb79) cell_imed_clipart_pane

0xbbd6,	// (0x0001fb90) cell_imed_clipart_pane_g1

0x1293,	// (0x0001524d) grid_highlight_pane_cp014

0xb9d5,	// (0x0001f98f) main_clock2_pane_g1_ParamLimits

0xb9d5,	// (0x0001f98f) main_clock2_pane_g1

0xbab0,	// (0x0001fa6a) aid_call2_pane_cp10

0xbabc,	// (0x0001fa76) aid_call_pane_cp10

0x278b,	// (0x00016745) popup_clock_analogue_window_cp10_g1

0x278b,	// (0x00016745) popup_clock_analogue_window_cp10_g2

0xbac8,	// (0x0001fa82) popup_clock_analogue_window_cp10_g3

0xbac8,	// (0x0001fa82) popup_clock_analogue_window_cp10_g4

0x278b,	// (0x00016745) popup_clock_analogue_window_cp10_g5

0x0004,

0xf815,	// (0x000237cf) popup_clock_analogue_window_cp10_g

0xbad4,	// (0x0001fa8e) popup_clock_analogue_window_cp10_t1

0x7a8a,	// (0x0001ba44) clock_digital_number_pane_cp10_ParamLimits

0x7a8a,	// (0x0001ba44) clock_digital_number_pane_cp10

0x7aa2,	// (0x0001ba5c) clock_digital_number_pane_cp11_ParamLimits

0x7aa2,	// (0x0001ba5c) clock_digital_number_pane_cp11

0x7aba,	// (0x0001ba74) clock_digital_number_pane_cp12_ParamLimits

0x7aba,	// (0x0001ba74) clock_digital_number_pane_cp12

0x7ad2,	// (0x0001ba8c) clock_digital_number_pane_cp13_ParamLimits

0x7ad2,	// (0x0001ba8c) clock_digital_number_pane_cp13

0x7aea,	// (0x0001baa4) clock_digital_separator_pane_cp10_ParamLimits

0x7aea,	// (0x0001baa4) clock_digital_separator_pane_cp10

0xbaf8,	// (0x0001fab2) popup_clock_digital_window_cp02_t1_ParamLimits

0xbaf8,	// (0x0001fab2) popup_clock_digital_window_cp02_t1

0x1958,	// (0x00015912) clock_digital_number_pane_cp10_g1

0x1958,	// (0x00015912) clock_digital_number_pane_cp10_g2

0x0001,

0xf830,	// (0x000237ea) clock_digital_number_pane_cp10_g

0x1958,	// (0x00015912) clock_digital_separator_pane_cp10_g1

0x1958,	// (0x00015912) clock_digital_separator_pane_g2_cp10

0x288e,	// (0x00016848) navi_pane_vded_g4

0x2897,	// (0x00016851) navi_pane_vded_g5

0x28a0,	// (0x0001685a) navi_pane_vded_t1

0x1293,	// (0x0001524d) main_vded_pane

0xbbdf,	// (0x0001fb99) main_vded_pane_g1

0xbbe7,	// (0x0001fba1) main_vded_pane_g2

0xbbef,	// (0x0001fba9) main_vded_pane_g3

0x0002,

0xf835,	// (0x000237ef) main_vded_pane_g

0xbbf7,	// (0x0001fbb1) main_vded_pane_t1

0xbc05,	// (0x0001fbbf) main_vded_pane_t2

0x0001,

0xf83c,	// (0x000237f6) main_vded_pane_t

0xbc13,	// (0x0001fbcd) vded_slider_pane

0xbc1b,	// (0x0001fbd5) vded_video_pane

0x483d,	// (0x000187f7) vded_video_pane_g1

0xbc23,	// (0x0001fbdd) vded_video_pane_g2

0x42a9,	// (0x00018263) vded_video_pane_g3

0x0002,

0xf841,	// (0x000237fb) vded_video_pane_g

0x4847,	// (0x00018801) vded_slider_pane_g1

0x3fc0,	// (0x00017f7a) vded_slider_pane_g2

0x4850,	// (0x0001880a) vded_slider_pane_g3

0x4859,	// (0x00018813) vded_slider_pane_g4

0x4862,	// (0x0001881c) vded_slider_pane_g5

0x0004,

0xf848,	// (0x00023802) vded_slider_pane_g

0xb777,	// (0x0001f731) mup3_rocker_pane_ParamLimits

0xb777,	// (0x0001f731) mup3_rocker_pane

0xbc2c,	// (0x0001fbe6) mup3_control_keys_pane_g1

0xbc34,	// (0x0001fbee) mup3_control_keys_pane_g2

0xbc3c,	// (0x0001fbf6) mup3_control_keys_pane_g3

0xbc44,	// (0x0001fbfe) mup3_control_keys_pane_g4

0x0003,

0xf853,	// (0x0002380d) mup3_control_keys_pane_g

0x88a8,	// (0x0001c862) popup_toolbar2_fixed_window_cp01_ParamLimits

0x88a8,	// (0x0001c862) popup_toolbar2_fixed_window_cp01

0xb78f,	// (0x0001f749) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb78f,	// (0x0001f749) popup_toolbar2_fixed_window_cp02

0x30fc,	// (0x000170b6) popup_call2_audio_second_window_t4_ParamLimits

0x30fc,	// (0x000170b6) popup_call2_audio_second_window_t4

0x362a,	// (0x000175e4) popup_call2_audio_first_window_t6_ParamLimits

0x362a,	// (0x000175e4) popup_call2_audio_first_window_t6

0x38c0,	// (0x0001787a) popup_call2_audio_out_window_t6_ParamLimits

0x38c0,	// (0x0001787a) popup_call2_audio_out_window_t6

0x1293,	// (0x0001524d) main_vitu_pane

0xbc54,	// (0x0001fc0e) aid_size_cell_itu_ParamLimits

0xbc54,	// (0x0001fc0e) aid_size_cell_itu

0x4473,	// (0x0001842d) bg_popup_window_pane_cp08_ParamLimits

0x4473,	// (0x0001842d) bg_popup_window_pane_cp08

0xbc62,	// (0x0001fc1c) field_vitu_entry_pane_ParamLimits

0xbc62,	// (0x0001fc1c) field_vitu_entry_pane

0xbc6f,	// (0x0001fc29) grid_vitu_function_pane_ParamLimits

0xbc6f,	// (0x0001fc29) grid_vitu_function_pane

0xbc7b,	// (0x0001fc35) grid_vitu_itu_pane_ParamLimits

0xbc7b,	// (0x0001fc35) grid_vitu_itu_pane

0xbc87,	// (0x0001fc41) cell_vitu_itu_pane_ParamLimits

0xbc87,	// (0x0001fc41) cell_vitu_itu_pane

0xbc9c,	// (0x0001fc56) cell_vitu_function_pane_ParamLimits

0xbc9c,	// (0x0001fc56) cell_vitu_function_pane

0x12e6,	// (0x000152a0) bg_popup_sub_pane_cp08_ParamLimits

0x12e6,	// (0x000152a0) bg_popup_sub_pane_cp08

0xbcae,	// (0x0001fc68) field_vitu_entry_pane_t1_ParamLimits

0xbcae,	// (0x0001fc68) field_vitu_entry_pane_t1

0x4883,	// (0x0001883d) field_vitu_entry_pane_t2_ParamLimits

0x4883,	// (0x0001883d) field_vitu_entry_pane_t2

0x0001,

0xf861,	// (0x0002381b) field_vitu_entry_pane_t_ParamLimits

0xf861,	// (0x0002381b) field_vitu_entry_pane_t

0x48a0,	// (0x0001885a) bg_button_pane_cp05_ParamLimits

0x48a0,	// (0x0001885a) bg_button_pane_cp05

0xbcc7,	// (0x0001fc81) cell_vitu_itu_pane_g1

0xbcdf,	// (0x0001fc99) cell_vitu_itu_pane_t1_ParamLimits

0xbcdf,	// (0x0001fc99) cell_vitu_itu_pane_t1

0xbcf1,	// (0x0001fcab) cell_vitu_itu_pane_t2_ParamLimits

0xbcf1,	// (0x0001fcab) cell_vitu_itu_pane_t2

0x0002,

0xf866,	// (0x00023820) cell_vitu_itu_pane_t_ParamLimits

0xf866,	// (0x00023820) cell_vitu_itu_pane_t

0x48ae,	// (0x00018868) bg_button_pane_cp07

0xbd26,	// (0x0001fce0) cell_vitu_function_pane_g1

0x7374,	// (0x0001b32e) main_calc_pane_g1

0x86ef,	// (0x0001c6a9) aid_visual_content_pane

0x1293,	// (0x0001524d) main_vradio_pane

0xbd2f,	// (0x0001fce9) main_vradio_pane_g1_ParamLimits

0xbd2f,	// (0x0001fce9) main_vradio_pane_g1

0x48b8,	// (0x00018872) main_vradio_pane_g2_ParamLimits

0x48b8,	// (0x00018872) main_vradio_pane_g2

0x0001,

0xf86d,	// (0x00023827) main_vradio_pane_g_ParamLimits

0xf86d,	// (0x00023827) main_vradio_pane_g

0xbd3d,	// (0x0001fcf7) main_vradio_pane_t1_ParamLimits

0xbd3d,	// (0x0001fcf7) main_vradio_pane_t1

0xbd4f,	// (0x0001fd09) main_vradio_pane_t2_ParamLimits

0xbd4f,	// (0x0001fd09) main_vradio_pane_t2

0x48c5,	// (0x0001887f) main_vradio_pane_t3_ParamLimits

0x48c5,	// (0x0001887f) main_vradio_pane_t3

0x0002,

0xf872,	// (0x0002382c) main_vradio_pane_t_ParamLimits

0xf872,	// (0x0002382c) main_vradio_pane_t

0xbd61,	// (0x0001fd1b) vradio_rocker_control_pane_ParamLimits

0xbd61,	// (0x0001fd1b) vradio_rocker_control_pane

0xbd6d,	// (0x0001fd27) vradio_station_info_pane_ParamLimits

0xbd6d,	// (0x0001fd27) vradio_station_info_pane

0x48d7,	// (0x00018891) vradio_frequency_info_pane_ParamLimits

0x48d7,	// (0x00018891) vradio_frequency_info_pane

0x42a9,	// (0x00018263) vradio_station_info_pane_g1

0x48e6,	// (0x000188a0) vradio_station_info_pane_t1_ParamLimits

0x48e6,	// (0x000188a0) vradio_station_info_pane_t1

0x4908,	// (0x000188c2) vradio_station_info_pane_t2_ParamLimits

0x4908,	// (0x000188c2) vradio_station_info_pane_t2

0x0001,

0xf879,	// (0x00023833) vradio_station_info_pane_t_ParamLimits

0xf879,	// (0x00023833) vradio_station_info_pane_t

0x491a,	// (0x000188d4) vradio_tuning_pane

0x4922,	// (0x000188dc) vradio_rocker_control_pane_g1

0x492a,	// (0x000188e4) vradio_rocker_control_pane_g2

0x4932,	// (0x000188ec) vradio_rocker_control_pane_g3

0x493a,	// (0x000188f4) vradio_rocker_control_pane_g4

0x4942,	// (0x000188fc) vradio_rocker_control_pane_g5

0x0004,

0xf87e,	// (0x00023838) vradio_rocker_control_pane_g

0xbd7a,	// (0x0001fd34) vradio_frequency_info_pane_g1

0x494a,	// (0x00018904) vradio_frequency_info_pane_t1_ParamLimits

0x494a,	// (0x00018904) vradio_frequency_info_pane_t1

0xbd82,	// (0x0001fd3c) vradio_tuning_pane_g1

0xbd8b,	// (0x0001fd45) vradio_tuning_pane_t1

0x12bd,	// (0x00015277) area_side_right_pane_ParamLimits

0x12bd,	// (0x00015277) area_side_right_pane

0x3d7b,	// (0x00017d35) status_small_pane_g1

0x3d83,	// (0x00017d3d) status_small_pane_g2

0x3d8c,	// (0x00017d46) status_small_pane_g3

0x3d95,	// (0x00017d4f) status_small_pane_g4

0x0003,

0xf63e,	// (0x000235f8) status_small_pane_g

0x3d9e,	// (0x00017d58) status_small_pane_t1

0x1293,	// (0x0001524d) main_video3_pane

0x495e,	// (0x00018918) cams_zoom_vslider_pane

0x4966,	// (0x00018920) image3_wide_pane_ParamLimits

0x4966,	// (0x00018920) image3_wide_pane

0x4980,	// (0x0001893a) image3_wide_small_pane

0x498a,	// (0x00018944) main_video3_pane_g1_ParamLimits

0x498a,	// (0x00018944) main_video3_pane_g1

0x49a6,	// (0x00018960) main_video3_pane_g2_ParamLimits

0x49a6,	// (0x00018960) main_video3_pane_g2

0x0001,

0xf889,	// (0x00023843) main_video3_pane_g_ParamLimits

0xf889,	// (0x00023843) main_video3_pane_g

0x49c2,	// (0x0001897c) main_video3_pane_t1_ParamLimits

0x49c2,	// (0x0001897c) main_video3_pane_t1

0x49ed,	// (0x000189a7) main_video3_pane_t2_ParamLimits

0x49ed,	// (0x000189a7) main_video3_pane_t2

0x4a18,	// (0x000189d2) main_video3_pane_t3_ParamLimits

0x4a18,	// (0x000189d2) main_video3_pane_t3

0x0002,

0xf88e,	// (0x00023848) main_video3_pane_t_ParamLimits

0xf88e,	// (0x00023848) main_video3_pane_t

0x4a43,	// (0x000189fd) cams_zoom_vslider_pane_g1

0x4a4c,	// (0x00018a06) cams_zoom_vslider_pane_g2

0x0001,

0xf895,	// (0x0002384f) cams_zoom_vslider_pane_g

0x4a54,	// (0x00018a0e) small_slider_vertical_pane

0x42a9,	// (0x00018263) small_slider_vertical_pane_g1

0x42a9,	// (0x00018263) small_slider_vertical_pane_g2

0x4a5c,	// (0x00018a16) small_slider_vertical_pane_g3

0x0002,

0xf89a,	// (0x00023854) small_slider_vertical_pane_g

0x1293,	// (0x0001524d) main_hwr_training_pane

0x4a65,	// (0x00018a1f) hwr_training_instruct_pane_ParamLimits

0x4a65,	// (0x00018a1f) hwr_training_instruct_pane

0xbd9a,	// (0x0001fd54) hwr_training_navi_pane_ParamLimits

0xbd9a,	// (0x0001fd54) hwr_training_navi_pane

0xbdae,	// (0x0001fd68) hwr_training_write_pane_ParamLimits

0xbdae,	// (0x0001fd68) hwr_training_write_pane

0x1293,	// (0x0001524d) bg_frame_shadow_pane

0x4a94,	// (0x00018a4e) hwr_training_write_pane_g1

0x4a9c,	// (0x00018a56) hwr_training_write_pane_g2

0x4aa4,	// (0x00018a5e) hwr_training_write_pane_g3

0x4aac,	// (0x00018a66) hwr_training_write_pane_g4

0x4ab4,	// (0x00018a6e) hwr_training_write_pane_g5

0x4abc,	// (0x00018a76) hwr_training_write_pane_g6

0x4ac4,	// (0x00018a7e) hwr_training_write_pane_g7

0x0006,

0xf8a1,	// (0x0002385b) hwr_training_write_pane_g

0x7b02,	// (0x0001babc) hwr_training_navi_pane_g1_ParamLimits

0x7b02,	// (0x0001babc) hwr_training_navi_pane_g1

0x7b14,	// (0x0001bace) hwr_training_navi_pane_g2_ParamLimits

0x7b14,	// (0x0001bace) hwr_training_navi_pane_g2

0x7b26,	// (0x0001bae0) hwr_training_navi_pane_g3_ParamLimits

0x7b26,	// (0x0001bae0) hwr_training_navi_pane_g3

0x7b36,	// (0x0001baf0) hwr_training_navi_pane_g4_ParamLimits

0x7b36,	// (0x0001baf0) hwr_training_navi_pane_g4

0x0004,

0xf8b0,	// (0x0002386a) hwr_training_navi_pane_g_ParamLimits

0xf8b0,	// (0x0002386a) hwr_training_navi_pane_g

0x7b50,	// (0x0001bb0a) hwr_training_navi_pane_t1

0xbddc,	// (0x0001fd96) list_single_hwr_training_instruct_pane_ParamLimits

0xbddc,	// (0x0001fd96) list_single_hwr_training_instruct_pane

0x4b1b,	// (0x00018ad5) list_single_hwr_training_instruct_pane_t1

0x41e9,	// (0x000181a3) bg_frame_shadow_pane_g1

0x4b2a,	// (0x00018ae4) bg_frame_shadow_pane_g2

0x4b32,	// (0x00018aec) bg_frame_shadow_pane_g3

0x4b3a,	// (0x00018af4) bg_frame_shadow_pane_g4

0x4b42,	// (0x00018afc) bg_frame_shadow_pane_g5

0x4b4a,	// (0x00018b04) bg_frame_shadow_pane_g6

0x4b52,	// (0x00018b0c) bg_frame_shadow_pane_g7

0x1b74,	// (0x00015b2e) bg_frame_shadow_pane_g8

0x0007,

0xf8bb,	// (0x00023875) bg_frame_shadow_pane_g

0x1293,	// (0x0001524d) main_video_tele_dialer_pane

0x7b5e,	// (0x0001bb18) aid_size_cell_video_keypad_ParamLimits

0x7b5e,	// (0x0001bb18) aid_size_cell_video_keypad

0x7b6e,	// (0x0001bb28) grid_video_dialer_keypad_pane_ParamLimits

0x7b6e,	// (0x0001bb28) grid_video_dialer_keypad_pane

0x7b9e,	// (0x0001bb58) video_down_pane_cp_ParamLimits

0x7b9e,	// (0x0001bb58) video_down_pane_cp

0x7baa,	// (0x0001bb64) cell_video_dialer_keypad_pane_ParamLimits

0x7baa,	// (0x0001bb64) cell_video_dialer_keypad_pane

0x4b5a,	// (0x00018b14) bg_button_pane_cp08_ParamLimits

0x4b5a,	// (0x00018b14) bg_button_pane_cp08

0xbe10,	// (0x0001fdca) cell_video_dialer_keypad_pane_g1_ParamLimits

0xbe10,	// (0x0001fdca) cell_video_dialer_keypad_pane_g1

0xb76b,	// (0x0001f725) mup3_rocker2_pane_ParamLimits

0xb76b,	// (0x0001f725) mup3_rocker2_pane

0x42a9,	// (0x00018263) mup3_rocker2_pane_g1

0xab14,	// (0x0001eace) main_dialer2_pane

0x1293,	// (0x0001524d) main_mp4_pane

0x7bc7,	// (0x0001bb81) main_mp4_pane_g1_ParamLimits

0x7bc7,	// (0x0001bb81) main_mp4_pane_g1

0x7bd5,	// (0x0001bb8f) main_mp4_pane_g2_ParamLimits

0x7bd5,	// (0x0001bb8f) main_mp4_pane_g2

0x7be3,	// (0x0001bb9d) main_mp4_pane_g3_ParamLimits

0x7be3,	// (0x0001bb9d) main_mp4_pane_g3

0x7c18,	// (0x0001bbd2) main_mp4_pane_g4_ParamLimits

0x7c18,	// (0x0001bbd2) main_mp4_pane_g4

0x7c46,	// (0x0001bc00) main_mp4_pane_g5_ParamLimits

0x7c46,	// (0x0001bc00) main_mp4_pane_g5

0x0005,

0xf8db,	// (0x00023895) main_mp4_pane_g_ParamLimits

0xf8db,	// (0x00023895) main_mp4_pane_g

0x7ca2,	// (0x0001bc5c) main_mp4_pane_t1_ParamLimits

0x7ca2,	// (0x0001bc5c) main_mp4_pane_t1

0x7cfa,	// (0x0001bcb4) main_mp4_pane_t2_ParamLimits

0x7cfa,	// (0x0001bcb4) main_mp4_pane_t2

0x4cb0,	// (0x00018c6a) main_mp4_pane_t3_ParamLimits

0x4cb0,	// (0x00018c6a) main_mp4_pane_t3

0x7d4c,	// (0x0001bd06) main_mp4_pane_t4_ParamLimits

0x7d4c,	// (0x0001bd06) main_mp4_pane_t4

0x0003,

0xf8e8,	// (0x000238a2) main_mp4_pane_t_ParamLimits

0xf8e8,	// (0x000238a2) main_mp4_pane_t

0x7d8c,	// (0x0001bd46) mp4_progress_pane_ParamLimits

0x7d8c,	// (0x0001bd46) mp4_progress_pane

0x7dd0,	// (0x0001bd8a) mp4_rocker_pane_ParamLimits

0x7dd0,	// (0x0001bd8a) mp4_rocker_pane

0x4d80,	// (0x00018d3a) mp4_progress_pane_t1

0x4d97,	// (0x00018d51) mp4_progress_pane_t2

0x0001,

0xf8f1,	// (0x000238ab) mp4_progress_pane_t

0x4dae,	// (0x00018d68) mup_progress_pane_cp04

0x5792,	// (0x0001974c) mp4_rocker_pane_g1

0x7dee,	// (0x0001bda8) aid_cell_size_keypad2_ParamLimits

0x7dee,	// (0x0001bda8) aid_cell_size_keypad2

0x7dfe,	// (0x0001bdb8) dialer2_ne_pane_ParamLimits

0x7dfe,	// (0x0001bdb8) dialer2_ne_pane

0x7e0a,	// (0x0001bdc4) grid_dialer2_keypad_pane_ParamLimits

0x7e0a,	// (0x0001bdc4) grid_dialer2_keypad_pane

0x5602,	// (0x000195bc) bg_popup_call_pane_cp07_ParamLimits

0x5602,	// (0x000195bc) bg_popup_call_pane_cp07

0xbe47,	// (0x0001fe01) dialer2_ne_pane_t1_ParamLimits

0xbe47,	// (0x0001fe01) dialer2_ne_pane_t1

0x7e16,	// (0x0001bdd0) cell_dialer2_keypad_pane_ParamLimits

0x7e16,	// (0x0001bdd0) cell_dialer2_keypad_pane

0x4dcc,	// (0x00018d86) bg_button_pane_pane_cp04_ParamLimits

0x4dcc,	// (0x00018d86) bg_button_pane_pane_cp04

0xbe6c,	// (0x0001fe26) cell_dialer2_keypad_pane_g1_ParamLimits

0xbe6c,	// (0x0001fe26) cell_dialer2_keypad_pane_g1

0x91df,	// (0x0001d199) aid_placing_vt_set_content_ParamLimits

0x91df,	// (0x0001d199) aid_placing_vt_set_content

0x91f9,	// (0x0001d1b3) aid_placing_vt_set_title_ParamLimits

0x91f9,	// (0x0001d1b3) aid_placing_vt_set_title

0x1293,	// (0x0001524d) main_image3_pane

0x7e53,	// (0x0001be0d) area_side_right_pane_cp01_ParamLimits

0x7e53,	// (0x0001be0d) area_side_right_pane_cp01

0x7e80,	// (0x0001be3a) main_image3_pane_g1_ParamLimits

0x7e80,	// (0x0001be3a) main_image3_pane_g1

0x7e8e,	// (0x0001be48) main_image3_pane_g2_ParamLimits

0x7e8e,	// (0x0001be48) main_image3_pane_g2

0x7ea5,	// (0x0001be5f) main_image3_pane_g3_ParamLimits

0x7ea5,	// (0x0001be5f) main_image3_pane_g3

0x7ebc,	// (0x0001be76) main_image3_pane_g4_ParamLimits

0x7ebc,	// (0x0001be76) main_image3_pane_g4

0x0003,

0xf900,	// (0x000238ba) main_image3_pane_g_ParamLimits

0xf900,	// (0x000238ba) main_image3_pane_g

0x7ed3,	// (0x0001be8d) main_image3_pane_t1_ParamLimits

0x7ed3,	// (0x0001be8d) main_image3_pane_t1

0x7ef8,	// (0x0001beb2) main_image3_pane_t2_ParamLimits

0x7ef8,	// (0x0001beb2) main_image3_pane_t2

0x7f17,	// (0x0001bed1) main_image3_pane_t3_ParamLimits

0x7f17,	// (0x0001bed1) main_image3_pane_t3

0x0003,

0xf909,	// (0x000238c3) main_image3_pane_t_ParamLimits

0xf909,	// (0x000238c3) main_image3_pane_t

0x4473,	// (0x0001842d) grid_sctrl_middle_pane_cp01_ParamLimits

0x4473,	// (0x0001842d) grid_sctrl_middle_pane_cp01

0xbeb8,	// (0x0001fe72) cell_sctrl_middle_pane_cp01_ParamLimits

0xbeb8,	// (0x0001fe72) cell_sctrl_middle_pane_cp01

0xbec9,	// (0x0001fe83) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xbec9,	// (0x0001fe83) cell_sctrl_middle_pane_cp01_g1

0x1293,	// (0x0001524d) main_call4_pane

0xbed6,	// (0x0001fe90) aid_size_button_call4_ParamLimits

0xbed6,	// (0x0001fe90) aid_size_button_call4

0xbf00,	// (0x0001feba) call4_windows_pane_ParamLimits

0xbf00,	// (0x0001feba) call4_windows_pane

0xbf14,	// (0x0001fece) grid_call4_button_pane_ParamLimits

0xbf14,	// (0x0001fece) grid_call4_button_pane

0x4e22,	// (0x00018ddc) call4_windows_conf_pane

0xbf2e,	// (0x0001fee8) popup_call4_audio_first_window_ParamLimits

0xbf2e,	// (0x0001fee8) popup_call4_audio_first_window

0xbf4e,	// (0x0001ff08) popup_call4_audio_second_window_ParamLimits

0xbf4e,	// (0x0001ff08) popup_call4_audio_second_window

0x4e55,	// (0x00018e0f) popup_call4_audio_wait_window_ParamLimits

0x4e55,	// (0x00018e0f) popup_call4_audio_wait_window

0xbf60,	// (0x0001ff1a) cell_call4_button_pane_ParamLimits

0xbf60,	// (0x0001ff1a) cell_call4_button_pane

0x1b14,	// (0x00015ace) bg_button_pane_cp09_ParamLimits

0x1b14,	// (0x00015ace) bg_button_pane_cp09

0xbf83,	// (0x0001ff3d) cell_call4_button_pane_g1_ParamLimits

0xbf83,	// (0x0001ff3d) cell_call4_button_pane_g1

0xbf90,	// (0x0001ff4a) cell_call4_button_pane_t1_ParamLimits

0xbf90,	// (0x0001ff4a) cell_call4_button_pane_t1

0x4e9b,	// (0x00018e55) popup_call4_audio_conf_window_ParamLimits

0x4e9b,	// (0x00018e55) popup_call4_audio_conf_window

0xb79c,	// (0x0001f756) mup3_progress_pane_t1_ParamLimits

0xb7b2,	// (0x0001f76c) mup3_progress_pane_t2_ParamLimits

0x45f5,	// (0x000185af) mup3_progress_pane_t3_ParamLimits

0xf7e2,	// (0x0002379c) mup3_progress_pane_t_ParamLimits

0x460c,	// (0x000185c6) mup_progress_pane_cp03_ParamLimits

0xbc4c,	// (0x0001fc06) mup3_control_keys_pane_g4_copy1

0x7dba,	// (0x0001bd74) mp4_rocker2_pane_ParamLimits

0x7dba,	// (0x0001bd74) mp4_rocker2_pane

0x4eb7,	// (0x00018e71) mp4_rocker2_pane_g1

0x4eaf,	// (0x00018e69) mp4_rocker2_pane_g2

0x7f72,	// (0x0001bf2c) mp4_rocker2_pane_g3

0x7f7a,	// (0x0001bf34) mp4_rocker2_pane_g4

0x7f82,	// (0x0001bf3c) mp4_rocker2_pane_g5

0x0004,

0xf912,	// (0x000238cc) mp4_rocker2_pane_g

0x1293,	// (0x0001524d) main_camera4_pane

0x1293,	// (0x0001524d) main_video4_pane

0x7b7a,	// (0x0001bb34) main_video_tele_dialer_pane_t1_ParamLimits

0x7b7a,	// (0x0001bb34) main_video_tele_dialer_pane_t1

0x7b8c,	// (0x0001bb46) main_video_tele_dialer_pane_t2_ParamLimits

0x7b8c,	// (0x0001bb46) main_video_tele_dialer_pane_t2

0x0001,

0xf8cc,	// (0x00023886) main_video_tele_dialer_pane_t_ParamLimits

0xf8cc,	// (0x00023886) main_video_tele_dialer_pane_t

0x7fa0,	// (0x0001bf5a) cam4_autofocus_pane_ParamLimits

0x7fa0,	// (0x0001bf5a) cam4_autofocus_pane

0x7fac,	// (0x0001bf66) cam4_image_uncrop_pane_ParamLimits

0x7fac,	// (0x0001bf66) cam4_image_uncrop_pane

0x7fc1,	// (0x0001bf7b) cam4_indicators_pane_ParamLimits

0x7fc1,	// (0x0001bf7b) cam4_indicators_pane

0x7fdb,	// (0x0001bf95) main_camera4_pane_g1_ParamLimits

0x7fdb,	// (0x0001bf95) main_camera4_pane_g1

0x7fe7,	// (0x0001bfa1) main_camera4_pane_g2_ParamLimits

0x7fe7,	// (0x0001bfa1) main_camera4_pane_g2

0x7fe7,	// (0x0001bfa1) main_camera4_pane_g3_ParamLimits

0x7fe7,	// (0x0001bfa1) main_camera4_pane_g3

0x7ff3,	// (0x0001bfad) main_camera4_pane_g4_ParamLimits

0x7ff3,	// (0x0001bfad) main_camera4_pane_g4

0x7fff,	// (0x0001bfb9) main_camera4_pane_g5_ParamLimits

0x7fff,	// (0x0001bfb9) main_camera4_pane_g5

0x0005,

0xf91d,	// (0x000238d7) main_camera4_pane_g_ParamLimits

0xf91d,	// (0x000238d7) main_camera4_pane_g

0x8019,	// (0x0001bfd3) main_camera4_pane_t1_ParamLimits

0x8019,	// (0x0001bfd3) main_camera4_pane_t1

0x803d,	// (0x0001bff7) bg_tb_trans_pane_cp06

0x8053,	// (0x0001c00d) cam4_indicators_pane_g1

0x8063,	// (0x0001c01d) cam4_indicators_pane_g2

0x0002,

0xf938,	// (0x000238f2) cam4_indicators_pane_g

0x8083,	// (0x0001c03d) cam4_indicators_pane_t1

0x80ab,	// (0x0001c065) main_video4_pane_g1_ParamLimits

0x80ab,	// (0x0001c065) main_video4_pane_g1

0x7fe7,	// (0x0001bfa1) main_video4_pane_g2_ParamLimits

0x7fe7,	// (0x0001bfa1) main_video4_pane_g2

0x7fe7,	// (0x0001bfa1) main_video4_pane_g3_ParamLimits

0x7fe7,	// (0x0001bfa1) main_video4_pane_g3

0x7ff3,	// (0x0001bfad) main_video4_pane_g4_ParamLimits

0x7ff3,	// (0x0001bfad) main_video4_pane_g4

0x0004,

0xf93f,	// (0x000238f9) main_video4_pane_g_ParamLimits

0xf93f,	// (0x000238f9) main_video4_pane_g

0x80bf,	// (0x0001c079) vid4_indicators_pane_ParamLimits

0x80bf,	// (0x0001c079) vid4_indicators_pane

0x80dd,	// (0x0001c097) video4_image_uncrop_cif_pane_ParamLimits

0x80dd,	// (0x0001c097) video4_image_uncrop_cif_pane

0x80ea,	// (0x0001c0a4) video4_image_uncrop_nhd_pane_ParamLimits

0x80ea,	// (0x0001c0a4) video4_image_uncrop_nhd_pane

0x7fac,	// (0x0001bf66) video4_image_uncrop_vga_pane_ParamLimits

0x7fac,	// (0x0001bf66) video4_image_uncrop_vga_pane

0x80f7,	// (0x0001c0b1) bg_tb_trans_pane_cp07

0x8053,	// (0x0001c00d) vid4_indicators_pane_g1

0x8105,	// (0x0001c0bf) vid4_indicators_pane_g2

0x8115,	// (0x0001c0cf) vid4_indicators_pane_g3

0x0004,

0xf94a,	// (0x00023904) vid4_indicators_pane_g

0x8142,	// (0x0001c0fc) vid4_indicators_pane_t1

0xbfc6,	// (0x0001ff80) cam4_autofocus_pane_g1

0xbfce,	// (0x0001ff88) cam4_autofocus_pane_g2

0xbfd6,	// (0x0001ff90) cam4_autofocus_pane_g3

0x0002,

0xf955,	// (0x0002390f) cam4_autofocus_pane_g

0xbfde,	// (0x0001ff98) cam4_autofocus_pane_g3_copy1

0xbdf4,	// (0x0001fdae) video_down_pane_cp_t1

0xbe02,	// (0x0001fdbc) video_down_pane_cp_t2

0x0001,

0xf8d1,	// (0x0002388b) video_down_pane_cp_t

0x4473,	// (0x0001842d) popup_vitu2_window_ParamLimits

0x4473,	// (0x0001842d) popup_vitu2_window

0x815c,	// (0x0001c116) aid_size_cell2_itu2_ParamLimits

0x815c,	// (0x0001c116) aid_size_cell2_itu2

0x817e,	// (0x0001c138) aid_size_cell_itu2_ParamLimits

0x817e,	// (0x0001c138) aid_size_cell_itu2

0x81bc,	// (0x0001c176) bg_popup_window_pane_cp09_ParamLimits

0x81bc,	// (0x0001c176) bg_popup_window_pane_cp09

0x81ca,	// (0x0001c184) field_vitu2_entry_pane_ParamLimits

0x81ca,	// (0x0001c184) field_vitu2_entry_pane

0x81e0,	// (0x0001c19a) grid_vitu2_function_pane_ParamLimits

0x81e0,	// (0x0001c19a) grid_vitu2_function_pane

0x8212,	// (0x0001c1cc) grid_vitu2_itu_pane_ParamLimits

0x8212,	// (0x0001c1cc) grid_vitu2_itu_pane

0x8268,	// (0x0001c222) cell_vitu2_itu_pane_ParamLimits

0x8268,	// (0x0001c222) cell_vitu2_itu_pane

0x827d,	// (0x0001c237) cell_vitu2_function_pane_ParamLimits

0x827d,	// (0x0001c237) cell_vitu2_function_pane

0x4f41,	// (0x00018efb) bg_popup_call_pane_cp08_ParamLimits

0x4f41,	// (0x00018efb) bg_popup_call_pane_cp08

0x4f5a,	// (0x00018f14) field_vitu2_entry_pane_g1

0x4f66,	// (0x00018f20) field_vitu2_entry_pane_g2

0x0002,

0xf95c,	// (0x00023916) field_vitu2_entry_pane_g

0xbfe6,	// (0x0001ffa0) field_vitu2_entry_pane_t1_ParamLimits

0xbfe6,	// (0x0001ffa0) field_vitu2_entry_pane_t1

0x4f80,	// (0x00018f3a) field_vitu2_entry_pane_t2_ParamLimits

0x4f80,	// (0x00018f3a) field_vitu2_entry_pane_t2

0x0001,

0xf963,	// (0x0002391d) field_vitu2_entry_pane_t_ParamLimits

0xf963,	// (0x0002391d) field_vitu2_entry_pane_t

0x82bc,	// (0x0001c276) bg_button_pane_cp010_ParamLimits

0x82bc,	// (0x0001c276) bg_button_pane_cp010

0x82ca,	// (0x0001c284) cell_vitu2_itu_pane_g1

0x82e8,	// (0x0001c2a2) cell_vitu2_itu_pane_t1_ParamLimits

0x82e8,	// (0x0001c2a2) cell_vitu2_itu_pane_t1

0x833a,	// (0x0001c2f4) cell_vitu2_itu_pane_t2_ParamLimits

0x833a,	// (0x0001c2f4) cell_vitu2_itu_pane_t2

0x0002,

0xf96d,	// (0x00023927) cell_vitu2_itu_pane_t_ParamLimits

0xf96d,	// (0x00023927) cell_vitu2_itu_pane_t

0x80f7,	// (0x0001c0b1) bg_button_pane_cp011

0x83f5,	// (0x0001c3af) cell_vitu2_function_pane_g1

0x1293,	// (0x0001524d) main_myfav_hc_pane

0x7f57,	// (0x0001bf11) popup_image3_note_pane_ParamLimits

0x7f57,	// (0x0001bf11) popup_image3_note_pane

0x7f63,	// (0x0001bf1d) popup_image3_tool_bar_pane_ParamLimits

0x7f63,	// (0x0001bf1d) popup_image3_tool_bar_pane

0x83a8,	// (0x0001c362) cell_vitu2_itu_pane_t3_ParamLimits

0x83a8,	// (0x0001c362) cell_vitu2_itu_pane_t3

0x1293,	// (0x0001524d) bg_popup_trans_pane

0x4fa5,	// (0x00018f5f) grid_image3_tool_bar_pane

0x4faf,	// (0x00018f69) bg_popup_trans_pane_g1

0x201f,	// (0x00015fd9) bg_popup_trans_pane_g2

0x4fb7,	// (0x00018f71) bg_popup_trans_pane_g3

0x4fbf,	// (0x00018f79) bg_popup_trans_pane_g4

0x4fc7,	// (0x00018f81) bg_popup_trans_pane_g5

0x4fcf,	// (0x00018f89) bg_popup_trans_pane_g6

0x4fd7,	// (0x00018f91) bg_popup_trans_pane_g7

0x4fdf,	// (0x00018f99) bg_popup_trans_pane_g8

0x1fff,	// (0x00015fb9) bg_popup_trans_pane_g9

0x0008,

0xf974,	// (0x0002392e) bg_popup_trans_pane_g

0x4481,	// (0x0001843b) cell_image3_tool_bar_pane_ParamLimits

0x4481,	// (0x0001843b) cell_image3_tool_bar_pane

0x42a9,	// (0x00018263) cell_image3_tool_bar_pane_g1

0x1293,	// (0x0001524d) bg_popup_trans_pane_cp1

0x4fe7,	// (0x00018fa1) popup_image3_note_pane_t1

0x4ff5,	// (0x00018faf) popup_image3_note_pane_t2

0x5003,	// (0x00018fbd) popup_image3_note_pane_t3

0x0002,

0xf987,	// (0x00023941) popup_image3_note_pane_t

0x5011,	// (0x00018fcb) popup_image3_note_pane_t3_copy1

0xc001,	// (0x0001ffbb) bg_myfav_hc_instruction_pane_ParamLimits

0xc001,	// (0x0001ffbb) bg_myfav_hc_instruction_pane

0xc013,	// (0x0001ffcd) cell_myfav_contact_pane_ParamLimits

0xc013,	// (0x0001ffcd) cell_myfav_contact_pane

0xc02d,	// (0x0001ffe7) cell_myfav_contact_pane_cp1_ParamLimits

0xc02d,	// (0x0001ffe7) cell_myfav_contact_pane_cp1

0xc043,	// (0x0001fffd) cell_myfav_contact_pane_cp2_ParamLimits

0xc043,	// (0x0001fffd) cell_myfav_contact_pane_cp2

0xc059,	// (0x00020013) cell_myfav_contact_pane_cp3_ParamLimits

0xc059,	// (0x00020013) cell_myfav_contact_pane_cp3

0xc06e,	// (0x00020028) cell_myfav_contact_pane_cp4_ParamLimits

0xc06e,	// (0x00020028) cell_myfav_contact_pane_cp4

0xc082,	// (0x0002003c) cell_myfav_contact_pane_cp5_ParamLimits

0xc082,	// (0x0002003c) cell_myfav_contact_pane_cp5

0xc096,	// (0x00020050) cell_myfav_contact_pane_cp6_ParamLimits

0xc096,	// (0x00020050) cell_myfav_contact_pane_cp6

0xc0aa,	// (0x00020064) cell_myfav_contact_pane_cp7_ParamLimits

0xc0aa,	// (0x00020064) cell_myfav_contact_pane_cp7

0x501f,	// (0x00018fd9) listscroll_gen_pane_cp05

0xc0c2,	// (0x0002007c) main_myfav_hc_pane_g1_ParamLimits

0xc0c2,	// (0x0002007c) main_myfav_hc_pane_g1

0xc0d8,	// (0x00020092) main_myfav_hc_pane_g2_ParamLimits

0xc0d8,	// (0x00020092) main_myfav_hc_pane_g2

0x0002,

0xf98e,	// (0x00023948) main_myfav_hc_pane_g_ParamLimits

0xf98e,	// (0x00023948) main_myfav_hc_pane_g

0xc102,	// (0x000200bc) main_myfav_hc_pane_t1_ParamLimits

0xc102,	// (0x000200bc) main_myfav_hc_pane_t1

0x5028,	// (0x00018fe2) main_myfav_hc_pane_t2_ParamLimits

0x5028,	// (0x00018fe2) main_myfav_hc_pane_t2

0x503a,	// (0x00018ff4) main_myfav_hc_pane_t3_ParamLimits

0x503a,	// (0x00018ff4) main_myfav_hc_pane_t3

0xc117,	// (0x000200d1) main_myfav_hc_pane_t4_ParamLimits

0xc117,	// (0x000200d1) main_myfav_hc_pane_t4

0x0004,

0xf995,	// (0x0002394f) main_myfav_hc_pane_t_ParamLimits

0xf995,	// (0x0002394f) main_myfav_hc_pane_t

0x42a9,	// (0x00018263) bg_myfav_hc_instruction_pane_g1

0x504c,	// (0x00019006) cell_myfav_contact_pane_g1_ParamLimits

0x504c,	// (0x00019006) cell_myfav_contact_pane_g1

0x504c,	// (0x00019006) cell_myfav_contact_pane_g2_ParamLimits

0x504c,	// (0x00019006) cell_myfav_contact_pane_g2

0x5058,	// (0x00019012) cell_myfav_contact_pane_g3_ParamLimits

0x5058,	// (0x00019012) cell_myfav_contact_pane_g3

0x45df,	// (0x00018599) cell_myfav_contact_pane_g4_ParamLimits

0x45df,	// (0x00018599) cell_myfav_contact_pane_g4

0x5065,	// (0x0001901f) cell_myfav_contact_pane_g5_ParamLimits

0x5065,	// (0x0001901f) cell_myfav_contact_pane_g5

0x0004,

0xf9a0,	// (0x0002395a) cell_myfav_contact_pane_g_ParamLimits

0xf9a0,	// (0x0002395a) cell_myfav_contact_pane_g

0xc0ee,	// (0x000200a8) main_myfav_hc_pane_g3_ParamLimits

0xc0ee,	// (0x000200a8) main_myfav_hc_pane_g3

0x8826,	// (0x0001c7e0) popup_adpt_find_window

0xc13b,	// (0x000200f5) afind_page_pane_ParamLimits

0xc13b,	// (0x000200f5) afind_page_pane

0xc148,	// (0x00020102) aid_size_cell_afind_ParamLimits

0xc148,	// (0x00020102) aid_size_cell_afind

0xc162,	// (0x0002011c) bg_popup_sub_pane_cp09_ParamLimits

0xc162,	// (0x0002011c) bg_popup_sub_pane_cp09

0xc16f,	// (0x00020129) find_pane_cp01_ParamLimits

0xc16f,	// (0x00020129) find_pane_cp01

0x5071,	// (0x0001902b) grid_afind_control_pane_ParamLimits

0x5071,	// (0x0001902b) grid_afind_control_pane

0xc17c,	// (0x00020136) grid_afind_pane_ParamLimits

0xc17c,	// (0x00020136) grid_afind_pane

0xc192,	// (0x0002014c) cell_afind_pane_ParamLimits

0xc192,	// (0x0002014c) cell_afind_pane

0x42a9,	// (0x00018263) afind_page_pane_g1

0xc1c8,	// (0x00020182) afind_page_pane_g2

0xc1d1,	// (0x0002018b) afind_page_pane_g3

0x0002,

0xf9ab,	// (0x00023965) afind_page_pane_g

0xc1da,	// (0x00020194) afind_page_pane_t1

0x5085,	// (0x0001903f) cell_afind_grid_control_pane_ParamLimits

0x5085,	// (0x0001903f) cell_afind_grid_control_pane

0x4dcc,	// (0x00018d86) bg_button_pane_cp69_ParamLimits

0x4dcc,	// (0x00018d86) bg_button_pane_cp69

0xc1fa,	// (0x000201b4) cell_afind_pane_g1_ParamLimits

0xc1fa,	// (0x000201b4) cell_afind_pane_g1

0xc207,	// (0x000201c1) cell_afind_pane_t1_ParamLimits

0xc207,	// (0x000201c1) cell_afind_pane_t1

0x1d63,	// (0x00015d1d) bg_button_pane_cp72

0x5094,	// (0x0001904e) cell_afind_grid_control_pane_g1

0xa74c,	// (0x0001e706) aid_image_placing_area_ParamLimits

0xa74c,	// (0x0001e706) aid_image_placing_area

0x486b,	// (0x00018825) field_vitu_entry_pane_g1_ParamLimits

0x486b,	// (0x00018825) field_vitu_entry_pane_g1

0x4877,	// (0x00018831) field_vitu_entry_pane_g2_ParamLimits

0x4877,	// (0x00018831) field_vitu_entry_pane_g2

0x0001,

0xf85c,	// (0x00023816) field_vitu_entry_pane_g_ParamLimits

0xf85c,	// (0x00023816) field_vitu_entry_pane_g

0xbcc7,	// (0x0001fc81) cell_vitu_itu_pane_g1_ParamLimits

0xbd09,	// (0x0001fcc3) cell_vitu_itu_pane_t3_ParamLimits

0xbd09,	// (0x0001fcc3) cell_vitu_itu_pane_t3

0x4d80,	// (0x00018d3a) mp4_progress_pane_t1_ParamLimits

0x4d97,	// (0x00018d51) mp4_progress_pane_t2_ParamLimits

0xf8f1,	// (0x000238ab) mp4_progress_pane_t_ParamLimits

0x4dae,	// (0x00018d68) mup_progress_pane_cp04_ParamLimits

0xc129,	// (0x000200e3) main_myfav_hc_pane_t5_ParamLimits

0xc129,	// (0x000200e3) main_myfav_hc_pane_t5

0x12b5,	// (0x0001526f) aid_zoom_text_primary

0x8826,	// (0x0001c7e0) popup_adpt_find_window_ParamLimits

0x12e6,	// (0x000152a0) main_cam_set_pane

0x7fcf,	// (0x0001bf89) cam4_zoom_pane_ParamLimits

0x7fcf,	// (0x0001bf89) cam4_zoom_pane

0xc219,	// (0x000201d3) main_cam_set_pane_g1_ParamLimits

0xc219,	// (0x000201d3) main_cam_set_pane_g1

0xc227,	// (0x000201e1) main_cam_set_pane_g2_ParamLimits

0xc227,	// (0x000201e1) main_cam_set_pane_g2

0x0001,

0xf9b2,	// (0x0002396c) main_cam_set_pane_g_ParamLimits

0xf9b2,	// (0x0002396c) main_cam_set_pane_g

0xc233,	// (0x000201ed) main_cam_set_pane_t1_ParamLimits

0xc233,	// (0x000201ed) main_cam_set_pane_t1

0xc245,	// (0x000201ff) main_cset_listscroll_pane_ParamLimits

0xc245,	// (0x000201ff) main_cset_listscroll_pane

0xc26e,	// (0x00020228) main_cset_slider_pane_ParamLimits

0xc26e,	// (0x00020228) main_cset_slider_pane

0x50a5,	// (0x0001905f) main_cset_list_pane_ParamLimits

0x50a5,	// (0x0001905f) main_cset_list_pane

0x50b5,	// (0x0001906f) scroll_pane_cp028

0xc28d,	// (0x00020247) aid_area_touch_slider

0xc2a9,	// (0x00020263) cset_slider_pane

0xc2d3,	// (0x0002028d) main_cset_slider_pane_g1

0xc2e8,	// (0x000202a2) main_cset_slider_pane_g2

0x0011,

0xf9b7,	// (0x00023971) main_cset_slider_pane_g

0x50ee,	// (0x000190a8) main_cset_slider_pane_t1

0xc3a4,	// (0x0002035e) main_cset_slider_pane_t2

0xc3be,	// (0x00020378) main_cset_slider_pane_t3

0xc3d8,	// (0x00020392) main_cset_slider_pane_t4

0xc3f2,	// (0x000203ac) main_cset_slider_pane_t5

0xc40c,	// (0x000203c6) main_cset_slider_pane_t6

0xc421,	// (0x000203db) main_cset_slider_pane_t7

0x000e,

0xf9dc,	// (0x00023996) main_cset_slider_pane_t

0xc525,	// (0x000204df) cset_list_set_pane_ParamLimits

0xc525,	// (0x000204df) cset_list_set_pane

0xc535,	// (0x000204ef) aid_position_infowindow_above

0xc53d,	// (0x000204f7) aid_position_infowindow_below

0xc545,	// (0x000204ff) cset_list_set_pane_g1_ParamLimits

0xc545,	// (0x000204ff) cset_list_set_pane_g1

0x518e,	// (0x00019148) cset_list_set_pane_g3_ParamLimits

0x518e,	// (0x00019148) cset_list_set_pane_g3

0x0001,

0xf9fb,	// (0x000239b5) cset_list_set_pane_g_ParamLimits

0xf9fb,	// (0x000239b5) cset_list_set_pane_g

0x519d,	// (0x00019157) cset_list_set_pane_t1_ParamLimits

0x519d,	// (0x00019157) cset_list_set_pane_t1

0x12e6,	// (0x000152a0) list_highlight_pane_cp021_ParamLimits

0x12e6,	// (0x000152a0) list_highlight_pane_cp021

0x2a14,	// (0x000169ce) cset_slider_pane_g1

0x2a26,	// (0x000169e0) cset_slider_pane_g2

0x2a1d,	// (0x000169d7) cset_slider_pane_g3

0x0002,

0xfa00,	// (0x000239ba) cset_slider_pane_g

0x8409,	// (0x0001c3c3) aid_area_touch_cam4_zoom

0x8411,	// (0x0001c3cb) cam4_zoom_cont_pane

0x8419,	// (0x0001c3d3) cam4_zoom_pane_g1

0x8421,	// (0x0001c3db) cam4_zoom_pane_g2

0x8429,	// (0x0001c3e3) cam4_zoom_pane_g3

0x0002,

0xfa07,	// (0x000239c1) cam4_zoom_pane_g

0x8431,	// (0x0001c3eb) cam4_zoom_cont_pane_g1

0x843a,	// (0x0001c3f4) cam4_zoom_cont_pane_g2

0x8443,	// (0x0001c3fd) cam4_zoom_cont_pane_g3

0x0002,

0xfa0e,	// (0x000239c8) cam4_zoom_cont_pane_g

0xbef0,	// (0x0001feaa) call4_image_pane_ParamLimits

0xbef0,	// (0x0001feaa) call4_image_pane

0x4e22,	// (0x00018ddc) call4_windows_conf_pane_ParamLimits

0x4e35,	// (0x00018def) popup_call4_audio_in_window_ParamLimits

0x4e35,	// (0x00018def) popup_call4_audio_in_window

0x1293,	// (0x0001524d) bg_popup_call2_act_pane_cp02

0x4e93,	// (0x00018e4d) call4_list_conf_pane

0x42a9,	// (0x00018263) call4_image_pane_g1

0x42a9,	// (0x00018263) call4_image_pane_g2

0x0001,

0xf722,	// (0x000236dc) call4_image_pane_g

0x51ed,	// (0x000191a7) list_single_graphic_popup_conf4_pane_ParamLimits

0x51ed,	// (0x000191a7) list_single_graphic_popup_conf4_pane

0x1293,	// (0x0001524d) list_highlight_pane_cp022

0x5200,	// (0x000191ba) list_single_graphic_popup_conf4_pane_g1

0x2659,	// (0x00016613) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa15,	// (0x000239cf) list_single_graphic_popup_conf4_pane_g

0x5208,	// (0x000191c2) list_single_graphic_popup_conf4_pane_t1

0x92d7,	// (0x0001d291) popup_vtel_slider_window_ParamLimits

0x92d7,	// (0x0001d291) popup_vtel_slider_window

0x4dba,	// (0x00018d74) dialer2_ne_pane_t2_ParamLimits

0x4dba,	// (0x00018d74) dialer2_ne_pane_t2

0x0001,

0xf8f6,	// (0x000238b0) dialer2_ne_pane_t_ParamLimits

0xf8f6,	// (0x000238b0) dialer2_ne_pane_t

0x12e6,	// (0x000152a0) bg_popup_sub_pane_cp010_ParamLimits

0x12e6,	// (0x000152a0) bg_popup_sub_pane_cp010

0xc551,	// (0x0002050b) popup_vtel_slider_window_g1_ParamLimits

0xc551,	// (0x0002050b) popup_vtel_slider_window_g1

0xc55d,	// (0x00020517) popup_vtel_slider_window_g2_ParamLimits

0xc55d,	// (0x00020517) popup_vtel_slider_window_g2

0x0003,

0xfa1a,	// (0x000239d4) popup_vtel_slider_window_g_ParamLimits

0xfa1a,	// (0x000239d4) popup_vtel_slider_window_g

0xc5a3,	// (0x0002055d) vtel_slider_pane_ParamLimits

0xc5a3,	// (0x0002055d) vtel_slider_pane

0xc5b2,	// (0x0002056c) vtel_slider_pane_g1_ParamLimits

0xc5b2,	// (0x0002056c) vtel_slider_pane_g1

0xc5bf,	// (0x00020579) vtel_slider_pane_g2_ParamLimits

0xc5bf,	// (0x00020579) vtel_slider_pane_g2

0xc5cc,	// (0x00020586) vtel_slider_pane_g3_ParamLimits

0xc5cc,	// (0x00020586) vtel_slider_pane_g3

0xc5b2,	// (0x0002056c) vtel_slider_pane_g4_ParamLimits

0xc5b2,	// (0x0002056c) vtel_slider_pane_g4

0xc5d9,	// (0x00020593) vtel_slider_pane_g5_ParamLimits

0xc5d9,	// (0x00020593) vtel_slider_pane_g5

0x0004,

0xfa23,	// (0x000239dd) vtel_slider_pane_g_ParamLimits

0xfa23,	// (0x000239dd) vtel_slider_pane_g

0x1293,	// (0x0001524d) main_gallery2_pane

0x81a4,	// (0x0001c15e) aid_size_row_itut2_dropdow_list_ParamLimits

0x81a4,	// (0x0001c15e) aid_size_row_itut2_dropdow_list

0x81f8,	// (0x0001c1b2) grid_vitu2_function_top_pane_ParamLimits

0x81f8,	// (0x0001c1b2) grid_vitu2_function_top_pane

0x8232,	// (0x0001c1ec) popup_vitu2_dropdown_list_window_ParamLimits

0x8232,	// (0x0001c1ec) popup_vitu2_dropdown_list_window

0x824c,	// (0x0001c206) popup_vitu2_match_list_window

0x844c,	// (0x0001c406) cell_vitu2_function_top_pane_ParamLimits

0x844c,	// (0x0001c406) cell_vitu2_function_top_pane

0x846c,	// (0x0001c426) cell_vitu2_function_top_pane_cp01_ParamLimits

0x846c,	// (0x0001c426) cell_vitu2_function_top_pane_cp01

0x848c,	// (0x0001c446) cell_vitu2_function_top_wide_pane_ParamLimits

0x848c,	// (0x0001c446) cell_vitu2_function_top_wide_pane

0x80f7,	// (0x0001c0b1) bg_button_pane_cp012

0x84aa,	// (0x0001c464) cell_vitu2_function_top_pane_g1

0x84b9,	// (0x0001c473) bg_button_pane_cp013_ParamLimits

0x84b9,	// (0x0001c473) bg_button_pane_cp013

0xc5e6,	// (0x000205a0) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc5e6,	// (0x000205a0) cell_vitu2_function_top_wide_pane_g1

0x84d5,	// (0x0001c48f) bg_popup_sub_pane_cp20

0x84e3,	// (0x0001c49d) list_vitu2_match_list_pane

0x4faf,	// (0x00018f69) bg_popup_sub_pane_cp20_g1

0x4fb7,	// (0x00018f71) bg_popup_sub_pane_cp20_g2

0x201f,	// (0x00015fd9) bg_popup_sub_pane_cp20_g3

0x4fbf,	// (0x00018f79) bg_popup_sub_pane_cp20_g4

0x1fff,	// (0x00015fb9) bg_popup_sub_pane_cp20_g5

0x5240,	// (0x000191fa) bg_popup_sub_pane_cp20_g6

0x4fcf,	// (0x00018f89) bg_popup_sub_pane_cp20_g7

0x4fd7,	// (0x00018f91) bg_popup_sub_pane_cp20_g8

0x4fdf,	// (0x00018f99) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa2e,	// (0x000239e8) bg_popup_sub_pane_cp20_g

0x84fb,	// (0x0001c4b5) list_vitu2_match_list_item_pane_ParamLimits

0x84fb,	// (0x0001c4b5) list_vitu2_match_list_item_pane

0x850d,	// (0x0001c4c7) list_vitu2_match_list_item_pane_t1

0x737c,	// (0x0001b336) bg_popup_sub_pane_cp21

0x851b,	// (0x0001c4d5) grid_vitu2_dropdown_list_pane

0x8523,	// (0x0001c4dd) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8523,	// (0x0001c4dd) cell_vitu2_dropdown_list_char_pane

0x8544,	// (0x0001c4fe) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8544,	// (0x0001c4fe) cell_vitu2_dropdown_list_ctrl_pane

0x527a,	// (0x00019234) cell_vitu2_dropdown_list_char_pane_g1

0x5271,	// (0x0001922b) cell_vitu2_dropdown_list_char_pane_g2

0x5268,	// (0x00019222) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa4b,	// (0x00023a05) cell_vitu2_dropdown_list_char_pane_g

0x8570,	// (0x0001c52a) cell_vitu2_dropdown_list_char_pane_t1

0xc62a,	// (0x000205e4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc62a,	// (0x000205e4) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc63a,	// (0x000205f4) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc63a,	// (0x000205f4) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc64b,	// (0x00020605) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc64b,	// (0x00020605) cell_vitu2_dropdown_list_ctrl_pane_g3

0x857e,	// (0x0001c538) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x857e,	// (0x0001c538) cell_vitu2_dropdown_list_ctrl_pane_g4

0x803d,	// (0x0001bff7) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x803d,	// (0x0001bff7) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa52,	// (0x00023a0c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa52,	// (0x00023a0c) cell_vitu2_dropdown_list_ctrl_pane_g

0xc65b,	// (0x00020615) aid_size_cell_gallery2_ParamLimits

0xc65b,	// (0x00020615) aid_size_cell_gallery2

0xc669,	// (0x00020623) grid_gallery2_pane_ParamLimits

0xc669,	// (0x00020623) grid_gallery2_pane

0xc676,	// (0x00020630) scroll_pane_cp029_ParamLimits

0xc676,	// (0x00020630) scroll_pane_cp029

0xc682,	// (0x0002063c) cell_gallery2_pane_ParamLimits

0xc682,	// (0x0002063c) cell_gallery2_pane

0x5283,	// (0x0001923d) cell_gallery2_pane_g2

0xc6ae,	// (0x00020668) cell_gallery2_pane_g3

0x528d,	// (0x00019247) cell_gallery2_pane_g4

0x5295,	// (0x0001924f) cell_gallery2_pane_g5

0x28be,	// (0x00016878) grid_highlight_pane_cp10

0x824c,	// (0x0001c206) popup_vitu2_match_list_window_ParamLimits

0x825c,	// (0x0001c216) popup_vitu2_query_window_ParamLimits

0x825c,	// (0x0001c216) popup_vitu2_query_window

0x737c,	// (0x0001b336) bg_vitu2_candi_button_pane

0x527a,	// (0x00019234) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x5271,	// (0x0001922b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x5268,	// (0x00019222) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xc6b6,	// (0x00020670) bg_button_pane_cp015

0xc6be,	// (0x00020678) bg_button_pane_cp016

0xc6c8,	// (0x00020682) bg_button_pane_cp017

0x12e6,	// (0x000152a0) bg_popup_sub_pane_cp22

0x529d,	// (0x00019257) popup_vitu2_query_window_g1

0xc6f0,	// (0x000206aa) popup_vitu2_query_window_g2

0x0001,

0xfa5d,	// (0x00023a17) popup_vitu2_query_window_g

0xc6fc,	// (0x000206b6) popup_vitu2_query_window_t1_ParamLimits

0xc6fc,	// (0x000206b6) popup_vitu2_query_window_t1

0xc724,	// (0x000206de) popup_vitu2_query_window_t2_ParamLimits

0xc724,	// (0x000206de) popup_vitu2_query_window_t2

0xc736,	// (0x000206f0) popup_vitu2_query_window_t3_ParamLimits

0xc736,	// (0x000206f0) popup_vitu2_query_window_t3

0xc75e,	// (0x00020718) popup_vitu2_query_window_t4_ParamLimits

0xc75e,	// (0x00020718) popup_vitu2_query_window_t4

0xc770,	// (0x0002072a) popup_vitu2_query_window_t5_ParamLimits

0xc770,	// (0x0002072a) popup_vitu2_query_window_t5

0x0004,

0xfa62,	// (0x00023a1c) popup_vitu2_query_window_t_ParamLimits

0xfa62,	// (0x00023a1c) popup_vitu2_query_window_t

0x509d,	// (0x00019057) main_cset_text_pane

0xc28d,	// (0x00020247) aid_area_touch_slider_ParamLimits

0xc2a9,	// (0x00020263) cset_slider_pane_ParamLimits

0xc2d3,	// (0x0002028d) main_cset_slider_pane_g1_ParamLimits

0xc2e8,	// (0x000202a2) main_cset_slider_pane_g2_ParamLimits

0x50be,	// (0x00019078) main_cset_slider_pane_g3_ParamLimits

0x50be,	// (0x00019078) main_cset_slider_pane_g3

0xc2fd,	// (0x000202b7) main_cset_slider_pane_g4_ParamLimits

0xc2fd,	// (0x000202b7) main_cset_slider_pane_g4

0xc30c,	// (0x000202c6) main_cset_slider_pane_g5_ParamLimits

0xc30c,	// (0x000202c6) main_cset_slider_pane_g5

0xc318,	// (0x000202d2) main_cset_slider_pane_g6_ParamLimits

0xc318,	// (0x000202d2) main_cset_slider_pane_g6

0xf9b7,	// (0x00023971) main_cset_slider_pane_g_ParamLimits

0x50ee,	// (0x000190a8) main_cset_slider_pane_t1_ParamLimits

0xc3a4,	// (0x0002035e) main_cset_slider_pane_t2_ParamLimits

0xc3be,	// (0x00020378) main_cset_slider_pane_t3_ParamLimits

0xc3d8,	// (0x00020392) main_cset_slider_pane_t4_ParamLimits

0xc3f2,	// (0x000203ac) main_cset_slider_pane_t5_ParamLimits

0xc40c,	// (0x000203c6) main_cset_slider_pane_t6_ParamLimits

0xc421,	// (0x000203db) main_cset_slider_pane_t7_ParamLimits

0xc44b,	// (0x00020405) main_cset_slider_pane_t8_ParamLimits

0xc44b,	// (0x00020405) main_cset_slider_pane_t8

0xc473,	// (0x0002042d) main_cset_slider_pane_t9_ParamLimits

0xc473,	// (0x0002042d) main_cset_slider_pane_t9

0xc49b,	// (0x00020455) main_cset_slider_pane_t10_ParamLimits

0xc49b,	// (0x00020455) main_cset_slider_pane_t10

0xc4c3,	// (0x0002047d) main_cset_slider_pane_t11_ParamLimits

0xc4c3,	// (0x0002047d) main_cset_slider_pane_t11

0xc4eb,	// (0x000204a5) main_cset_slider_pane_t12_ParamLimits

0xc4eb,	// (0x000204a5) main_cset_slider_pane_t12

0xc508,	// (0x000204c2) main_cset_slider_pane_t13_ParamLimits

0xc508,	// (0x000204c2) main_cset_slider_pane_t13

0xf9dc,	// (0x00023996) main_cset_slider_pane_t_ParamLimits

0x1293,	// (0x0001524d) bg_popup_sub_pane_cp011

0x52a9,	// (0x00019263) main_cset_text_pane_g1

0x52b1,	// (0x0001926b) main_cset_text_pane_t1

0x52bf,	// (0x00019279) main_cset_text_pane_t2

0x52cd,	// (0x00019287) main_cset_text_pane_t3

0x52db,	// (0x00019295) main_cset_text_pane_t4

0x52e9,	// (0x000192a3) main_cset_text_pane_t5

0x52f7,	// (0x000192b1) main_cset_text_pane_t6

0x5305,	// (0x000192bf) main_cset_text_pane_t7

0x0006,

0xfa6d,	// (0x00023a27) main_cset_text_pane_t

0x1293,	// (0x0001524d) main_cam4_burst_pane

0x1293,	// (0x0001524d) main_cam5_pane

0xc1e8,	// (0x000201a2) bg_button_pane_cp019

0xc1f1,	// (0x000201ab) bg_button_pane_cp020

0x50ca,	// (0x00019084) main_cset_slider_pane_g7_ParamLimits

0x50ca,	// (0x00019084) main_cset_slider_pane_g7

0x50d6,	// (0x00019090) main_cset_slider_pane_g8_ParamLimits

0x50d6,	// (0x00019090) main_cset_slider_pane_g8

0xc32c,	// (0x000202e6) main_cset_slider_pane_g9_ParamLimits

0xc32c,	// (0x000202e6) main_cset_slider_pane_g9

0xc338,	// (0x000202f2) main_cset_slider_pane_g10_ParamLimits

0xc338,	// (0x000202f2) main_cset_slider_pane_g10

0xc344,	// (0x000202fe) main_cset_slider_pane_g11_ParamLimits

0xc344,	// (0x000202fe) main_cset_slider_pane_g11

0xc350,	// (0x0002030a) main_cset_slider_pane_g12_ParamLimits

0xc350,	// (0x0002030a) main_cset_slider_pane_g12

0xc35c,	// (0x00020316) main_cset_slider_pane_g13_ParamLimits

0xc35c,	// (0x00020316) main_cset_slider_pane_g13

0xc368,	// (0x00020322) main_cset_slider_pane_g14_ParamLimits

0xc368,	// (0x00020322) main_cset_slider_pane_g14

0xc374,	// (0x0002032e) main_cset_slider_pane_g15_ParamLimits

0xc374,	// (0x0002032e) main_cset_slider_pane_g15

0x511c,	// (0x000190d6) main_cset_slider_pane_t14_ParamLimits

0x511c,	// (0x000190d6) main_cset_slider_pane_t14

0x5155,	// (0x0001910f) main_cset_slider_pane_t15_ParamLimits

0x5155,	// (0x0001910f) main_cset_slider_pane_t15

0xc782,	// (0x0002073c) aid_cam4_burst_size_cell_ParamLimits

0xc782,	// (0x0002073c) aid_cam4_burst_size_cell

0xc79e,	// (0x00020758) grid_cam4_burst_pane_ParamLimits

0xc79e,	// (0x00020758) grid_cam4_burst_pane

0xc7c0,	// (0x0002077a) linegrid_cam4_burst_pane_ParamLimits

0xc7c0,	// (0x0002077a) linegrid_cam4_burst_pane

0xc7de,	// (0x00020798) scroll_pane_cp30_ParamLimits

0xc7de,	// (0x00020798) scroll_pane_cp30

0xc7ea,	// (0x000207a4) cell_cam4_burst_pane_ParamLimits

0xc7ea,	// (0x000207a4) cell_cam4_burst_pane

0x5313,	// (0x000192cd) linegrid_cam4_burst_pane_g1_ParamLimits

0x5313,	// (0x000192cd) linegrid_cam4_burst_pane_g1

0xc822,	// (0x000207dc) linegrid_cam4_burst_pane_g2_ParamLimits

0xc822,	// (0x000207dc) linegrid_cam4_burst_pane_g2

0x5320,	// (0x000192da) linegrid_cam4_burst_pane_g3_ParamLimits

0x5320,	// (0x000192da) linegrid_cam4_burst_pane_g3

0x0002,

0xfa7c,	// (0x00023a36) linegrid_cam4_burst_pane_g_ParamLimits

0xfa7c,	// (0x00023a36) linegrid_cam4_burst_pane_g

0xc833,	// (0x000207ed) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc833,	// (0x000207ed) linegrid_cam4_burst_pane_g3_copy1

0x532d,	// (0x000192e7) linegrid_cam4_burst_pane_g4_ParamLimits

0x532d,	// (0x000192e7) linegrid_cam4_burst_pane_g4

0xc84d,	// (0x00020807) linegrid_cam4_burst_pane_g5_ParamLimits

0xc84d,	// (0x00020807) linegrid_cam4_burst_pane_g5

0xc85e,	// (0x00020818) linegrid_cam4_burst_pane_g6_ParamLimits

0xc85e,	// (0x00020818) linegrid_cam4_burst_pane_g6

0x533a,	// (0x000192f4) linegrid_cam4_burst_pane_g7_ParamLimits

0x533a,	// (0x000192f4) linegrid_cam4_burst_pane_g7

0xc86f,	// (0x00020829) cell_cam4_burst_pane_g1

0x5353,	// (0x0001930d) main_cam5_pane_t1_ParamLimits

0x5353,	// (0x0001930d) main_cam5_pane_t1

0x5365,	// (0x0001931f) main_cam5_pane_t2_ParamLimits

0x5365,	// (0x0001931f) main_cam5_pane_t2

0x5377,	// (0x00019331) main_cam5_pane_t3_ParamLimits

0x5377,	// (0x00019331) main_cam5_pane_t3

0x5389,	// (0x00019343) main_cam5_pane_t4_ParamLimits

0x5389,	// (0x00019343) main_cam5_pane_t4

0x539f,	// (0x00019359) main_cam5_pane_t5_ParamLimits

0x539f,	// (0x00019359) main_cam5_pane_t5

0x53b1,	// (0x0001936b) main_cam5_pane_t6_ParamLimits

0x53b1,	// (0x0001936b) main_cam5_pane_t6

0x53c3,	// (0x0001937d) main_cam5_pane_t7_ParamLimits

0x53c3,	// (0x0001937d) main_cam5_pane_t7

0x53d5,	// (0x0001938f) main_cam5_pane_t8_ParamLimits

0x53d5,	// (0x0001938f) main_cam5_pane_t8

0x53f1,	// (0x000193ab) main_cam5_pane_t9_ParamLimits

0x53f1,	// (0x000193ab) main_cam5_pane_t9

0x5403,	// (0x000193bd) main_cam5_pane_t10_ParamLimits

0x5403,	// (0x000193bd) main_cam5_pane_t10

0x5415,	// (0x000193cf) main_cam5_pane_t11_ParamLimits

0x5415,	// (0x000193cf) main_cam5_pane_t11

0x5427,	// (0x000193e1) main_cam5_pane_t12_ParamLimits

0x5427,	// (0x000193e1) main_cam5_pane_t12

0x543c,	// (0x000193f6) main_cam5_pane_t13_ParamLimits

0x543c,	// (0x000193f6) main_cam5_pane_t13

0x000c,

0xfa88,	// (0x00023a42) main_cam5_pane_t_ParamLimits

0xfa88,	// (0x00023a42) main_cam5_pane_t

0x8899,	// (0x0001c853) popup_scut_keymap_window_ParamLimits

0x8899,	// (0x0001c853) popup_scut_keymap_window

0xc882,	// (0x0002083c) aid_size_cell_brow_shortcut

0x28be,	// (0x00016878) bg_popup_window_pane_cp010

0xc88e,	// (0x00020848) grid_scut_pane

0xc898,	// (0x00020852) cell_scut_pane_ParamLimits

0xc898,	// (0x00020852) cell_scut_pane

0xc8ad,	// (0x00020867) cell_scut_pane_g1

0x5459,	// (0x00019413) cell_scut_pane_t1

0x5468,	// (0x00019422) cell_scut_pane_t2

0xc8b6,	// (0x00020870) cell_scut_pane_t3

0x0002,

0xfaa3,	// (0x00023a5d) cell_scut_pane_t

0xb429,	// (0x0001f3e3) main_mup3_pane_g8_ParamLimits

0xb429,	// (0x0001f3e3) main_mup3_pane_g8

0x81b0,	// (0x0001c16a) area_vitu2_query_pane_ParamLimits

0x81b0,	// (0x0001c16a) area_vitu2_query_pane

0xc6d2,	// (0x0002068c) input_focus_pane_cp08

0x5477,	// (0x00019431) area_vitu2_query_pane_g1

0xc8c4,	// (0x0002087e) area_vitu2_query_pane_g2

0x0001,

0xfaaa,	// (0x00023a64) area_vitu2_query_pane_g

0xc8d3,	// (0x0002088d) area_vitu2_query_pane_t1_ParamLimits

0xc8d3,	// (0x0002088d) area_vitu2_query_pane_t1

0xc8e5,	// (0x0002089f) area_vitu2_query_pane_t2_ParamLimits

0xc8e5,	// (0x0002089f) area_vitu2_query_pane_t2

0xc8f7,	// (0x000208b1) area_vitu2_query_pane_t3_ParamLimits

0xc8f7,	// (0x000208b1) area_vitu2_query_pane_t3

0x5483,	// (0x0001943d) area_vitu2_query_pane_t4_ParamLimits

0x5483,	// (0x0001943d) area_vitu2_query_pane_t4

0x54ab,	// (0x00019465) area_vitu2_query_pane_t5_ParamLimits

0x54ab,	// (0x00019465) area_vitu2_query_pane_t5

0x54d3,	// (0x0001948d) area_vitu2_query_pane_t6_ParamLimits

0x54d3,	// (0x0001948d) area_vitu2_query_pane_t6

0x0006,

0xfaaf,	// (0x00023a69) area_vitu2_query_pane_t_ParamLimits

0xfaaf,	// (0x00023a69) area_vitu2_query_pane_t

0xc91f,	// (0x000208d9) bg_button_pane_cp018

0xc92c,	// (0x000208e6) bg_button_pane_cp021

0xc938,	// (0x000208f2) bg_button_pane_cp022

0xc947,	// (0x00020901) input_focus_pane_cp09

0xa009,	// (0x0001dfc3) aid_size_touch_mv_arrow_left

0x2797,	// (0x00016751) aid_size_touch_mv_arrow_right

0xc38c,	// (0x00020346) main_cset_slider_pane_g16_ParamLimits

0xc38c,	// (0x00020346) main_cset_slider_pane_g16

0xc398,	// (0x00020352) main_cset_slider_pane_g17_ParamLimits

0xc398,	// (0x00020352) main_cset_slider_pane_g17

0xc86f,	// (0x00020829) cell_cam4_burst_pane_g1_ParamLimits

0x1293,	// (0x0001524d) compa_mode_pane

0xc569,	// (0x00020523) popup_vtel_slider_window_g3_ParamLimits

0xc569,	// (0x00020523) popup_vtel_slider_window_g3

0xc57d,	// (0x00020537) popup_vtel_slider_window_g4_ParamLimits

0xc57d,	// (0x00020537) popup_vtel_slider_window_g4

0xc591,	// (0x0002054b) popup_vtel_slider_window_t1_ParamLimits

0xc591,	// (0x0002054b) popup_vtel_slider_window_t1

0x1293,	// (0x0001524d) main_cl_pane

0x3dda,	// (0x00017d94) popup_imed_adjust2_window_ParamLimits

0x3db4,	// (0x00017d6e) bg_tb_trans_pane_cp05_ParamLimits

0x47a0,	// (0x0001875a) popup_imed_adjust2_window_g1_ParamLimits

0x47af,	// (0x00018769) popup_imed_adjust2_window_g2_ParamLimits

0x47af,	// (0x00018769) popup_imed_adjust2_window_g2

0x47bb,	// (0x00018775) popup_imed_adjust2_window_g3_ParamLimits

0x47bb,	// (0x00018775) popup_imed_adjust2_window_g3

0x0002,

0xf820,	// (0x000237da) popup_imed_adjust2_window_g_ParamLimits

0xf820,	// (0x000237da) popup_imed_adjust2_window_g

0x47c7,	// (0x00018781) popup_imed_adjust2_window_t1_ParamLimits

0x47df,	// (0x00018799) slider_imed_adjust_pane_ParamLimits

0x47f3,	// (0x000187ad) slider_imed_adjust_pane_g1_ParamLimits

0x4803,	// (0x000187bd) slider_imed_adjust_pane_g2_ParamLimits

0x4813,	// (0x000187cd) slider_imed_adjust_pane_g3_ParamLimits

0x4824,	// (0x000187de) slider_imed_adjust_pane_g4_ParamLimits

0xf827,	// (0x000237e1) slider_imed_adjust_pane_g_ParamLimits

0x7f8a,	// (0x0001bf44) aid_touch_area_cam4_ParamLimits

0x7f8a,	// (0x0001bf44) aid_touch_area_cam4

0x7f98,	// (0x0001bf52) battery_pane_cp01

0x800d,	// (0x0001bfc7) main_camera4_pane_g6_ParamLimits

0x800d,	// (0x0001bfc7) main_camera4_pane_g6

0x802b,	// (0x0001bfe5) main_camera4_pane_t2_ParamLimits

0x802b,	// (0x0001bfe5) main_camera4_pane_t2

0x0001,

0xf92a,	// (0x000238e4) main_camera4_pane_t_ParamLimits

0xf92a,	// (0x000238e4) main_camera4_pane_t

0x809d,	// (0x0001c057) aid_touch_area_vid4_ParamLimits

0x809d,	// (0x0001c057) aid_touch_area_vid4

0x800d,	// (0x0001bfc7) main_video4_pane_g5_ParamLimits

0x800d,	// (0x0001bfc7) main_video4_pane_g5

0x80cd,	// (0x0001c087) vid4_progress_pane_ParamLimits

0x80cd,	// (0x0001c087) vid4_progress_pane

0x50e2,	// (0x0001909c) main_cset_slider_pane_g18_ParamLimits

0x50e2,	// (0x0001909c) main_cset_slider_pane_g18

0x5347,	// (0x00019301) cell_cam4_burst_pane_g2_ParamLimits

0x5347,	// (0x00019301) cell_cam4_burst_pane_g2

0x0001,

0xfa83,	// (0x00023a3d) cell_cam4_burst_pane_g_ParamLimits

0xfa83,	// (0x00023a3d) cell_cam4_burst_pane_g

0xc956,	// (0x00020910) bg_cl_pane_ParamLimits

0xc956,	// (0x00020910) bg_cl_pane

0xc962,	// (0x0002091c) cl_header_pane_ParamLimits

0xc962,	// (0x0002091c) cl_header_pane

0xc96e,	// (0x00020928) cl_listscroll_pane_ParamLimits

0xc96e,	// (0x00020928) cl_listscroll_pane

0x551f,	// (0x000194d9) bg_cl_pane_g1

0x5527,	// (0x000194e1) bg_cl_pane_g2

0x552f,	// (0x000194e9) bg_cl_pane_g3

0x5537,	// (0x000194f1) bg_cl_pane_g4

0x553f,	// (0x000194f9) bg_cl_pane_g5

0x5547,	// (0x00019501) bg_cl_pane_g6

0x554f,	// (0x00019509) bg_cl_pane_g7

0x5557,	// (0x00019511) bg_cl_pane_g8

0x555f,	// (0x00019519) bg_cl_pane_g9

0x0008,

0xfabe,	// (0x00023a78) bg_cl_pane_g

0xc97a,	// (0x00020934) aid_height_cl_leading_ParamLimits

0xc97a,	// (0x00020934) aid_height_cl_leading

0xc986,	// (0x00020940) aid_height_cl_text_ParamLimits

0xc986,	// (0x00020940) aid_height_cl_text

0x4473,	// (0x0001842d) bg_cl_header_pane_ParamLimits

0x4473,	// (0x0001842d) bg_cl_header_pane

0xc99e,	// (0x00020958) cl_header_pane_g1_ParamLimits

0xc99e,	// (0x00020958) cl_header_pane_g1

0xc9ab,	// (0x00020965) cl_header_pane_t1_ParamLimits

0xc9ab,	// (0x00020965) cl_header_pane_t1

0x5567,	// (0x00019521) cl_list_pane

0x5570,	// (0x0001952a) hc_scroll_pane_cp01

0x1fff,	// (0x00015fb9) bg_cl_header_pane_g1

0x4faf,	// (0x00018f69) bg_cl_header_pane_g2

0x201f,	// (0x00015fd9) bg_cl_header_pane_g3

0x4fbf,	// (0x00018f79) bg_cl_header_pane_g4

0x4fb7,	// (0x00018f71) bg_cl_header_pane_g5

0x5240,	// (0x000191fa) bg_cl_header_pane_g6

0x4fd7,	// (0x00018f91) bg_cl_header_pane_g7

0x4fdf,	// (0x00018f99) bg_cl_header_pane_g8

0x4fcf,	// (0x00018f89) bg_cl_header_pane_g9

0x0008,

0xfad1,	// (0x00023a8b) bg_cl_header_pane_g

0xc9bd,	// (0x00020977) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc9bd,	// (0x00020977) hc_cl_list_double_graphic_heading_pane

0xc9cd,	// (0x00020987) hc_cl_list_single_graphic_pane_ParamLimits

0xc9cd,	// (0x00020987) hc_cl_list_single_graphic_pane

0xc9df,	// (0x00020999) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc9df,	// (0x00020999) hc_cl_list_single_graphic_pane_g1

0xc9eb,	// (0x000209a5) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc9eb,	// (0x000209a5) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfae4,	// (0x00023a9e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfae4,	// (0x00023a9e) hc_cl_list_single_graphic_pane_g

0xc9ff,	// (0x000209b9) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc9ff,	// (0x000209b9) hc_cl_list_single_graphic_pane_t1

0xc9df,	// (0x00020999) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc9df,	// (0x00020999) hc_cl_list_double_graphic_heading_pane_g1

0xca14,	// (0x000209ce) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xca14,	// (0x000209ce) hc_cl_list_double_graphic_heading_pane_g2

0xca28,	// (0x000209e2) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xca28,	// (0x000209e2) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfae9,	// (0x00023aa3) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfae9,	// (0x00023aa3) hc_cl_list_double_graphic_heading_pane_g

0xca3c,	// (0x000209f6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xca3c,	// (0x000209f6) hc_cl_list_double_graphic_heading_pane_t1

0xca51,	// (0x00020a0b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xca51,	// (0x00020a0b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaf0,	// (0x00023aaa) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaf0,	// (0x00023aaa) hc_cl_list_double_graphic_heading_pane_t

0x8597,	// (0x0001c551) vid4_progress_pane_g1

0x85a6,	// (0x0001c560) vid4_progress_pane_g2

0x85b5,	// (0x0001c56f) vid4_progress_pane_g3

0x85c4,	// (0x0001c57e) vid4_progress_pane_g4

0x0004,

0xfaf5,	// (0x00023aaf) vid4_progress_pane_g

0x85dc,	// (0x0001c596) vid4_progress_pane_t1

0x85f2,	// (0x0001c5ac) vid4_progress_pane_t2

0x0002,

0xfb00,	// (0x00023aba) vid4_progress_pane_t

0x861c,	// (0x0001c5d6) wait_bar_pane_cp07

0x40a4,	// (0x0001805e) blid_firmament_pane_ParamLimits

0x40e5,	// (0x0001809f) popup_blid_sat_info2_window_g1

0x4109,	// (0x000180c3) popup_blid_sat_info2_window_t3

0x4117,	// (0x000180d1) popup_blid_sat_info2_window_t4

0x4125,	// (0x000180df) popup_blid_sat_info2_window_t5

0x4133,	// (0x000180ed) popup_blid_sat_info2_window_t6

0x4143,	// (0x000180fd) popup_blid_sat_info2_window_t7

0x4151,	// (0x0001810b) popup_blid_sat_info2_window_t8

0x415f,	// (0x00018119) popup_blid_sat_info2_window_t9

0x416d,	// (0x00018127) popup_blid_sat_info2_window_t10

0x4229,	// (0x000181e3) aid_firma_cardinal_ParamLimits

0x423d,	// (0x000181f7) blid_firmament_pane_t1_ParamLimits

0x4254,	// (0x0001820e) blid_firmament_pane_t2_ParamLimits

0x426b,	// (0x00018225) blid_firmament_pane_t3_ParamLimits

0x4282,	// (0x0001823c) blid_firmament_pane_t4_ParamLimits

0xf719,	// (0x000236d3) blid_firmament_pane_t_ParamLimits

0x4299,	// (0x00018253) blid_sat_info_pane_ParamLimits

0x12e6,	// (0x000152a0) main_cam_set_pane_ParamLimits

0xbb16,	// (0x0001fad0) aid_size_cell_colour_35_ParamLimits

0xbb2d,	// (0x0001fae7) aid_size_cell_colour_112_ParamLimits

0xbb44,	// (0x0001fafe) aid_size_cell_effect_ParamLimits

0x12e6,	// (0x000152a0) bg_tb_trans_pane_cp02_ParamLimits

0x4495,	// (0x0001844f) heading_imed_pane_ParamLimits

0xbb5e,	// (0x0001fb18) listscroll_imed_pane_ParamLimits

0x33a6,	// (0x00017360) popup_call2_audio_first_window_g5_ParamLimits

0x33a6,	// (0x00017360) popup_call2_audio_first_window_g5

0x7e2b,	// (0x0001bde5) aid_size_touch_image3_arrow_left_ParamLimits

0x7e2b,	// (0x0001bde5) aid_size_touch_image3_arrow_left

0x7e3f,	// (0x0001bdf9) aid_size_touch_image3_arrow_right_ParamLimits

0x7e3f,	// (0x0001bdf9) aid_size_touch_image3_arrow_right

0x8607,	// (0x0001c5c1) vid4_progress_pane_t3

0xbdc2,	// (0x0001fd7c) main_hwr_training_symbol_option_pane_ParamLimits

0xbdc2,	// (0x0001fd7c) main_hwr_training_symbol_option_pane

0x4a7f,	// (0x00018a39) popup_hwr_training_preview_window_ParamLimits

0x4a7f,	// (0x00018a39) popup_hwr_training_preview_window

0x7b43,	// (0x0001bafd) hwr_training_navi_pane_g5_ParamLimits

0x7b43,	// (0x0001bafd) hwr_training_navi_pane_g5

0x4f9d,	// (0x00018f57) popup_char_count_window

0x84d5,	// (0x0001c48f) bg_popup_sub_pane_cp20_ParamLimits

0x84e3,	// (0x0001c49d) list_vitu2_match_list_pane_ParamLimits

0x84ef,	// (0x0001c4a9) vitu2_page_scroll_pane_ParamLimits

0x84ef,	// (0x0001c4a9) vitu2_page_scroll_pane

0x568e,	// (0x00019648) list_single_hwr_training_symbol_option_pane_ParamLimits

0x568e,	// (0x00019648) list_single_hwr_training_symbol_option_pane

0x56a1,	// (0x0001965b) list_single_hwr_training_symbol_option_pane_g1

0x56a9,	// (0x00019663) list_single_hwr_training_symbol_option_pane_t1

0x56b7,	// (0x00019671) bg_button_pane_cp023

0x56c0,	// (0x0001967a) bg_button_pane_cp024

0xca66,	// (0x00020a20) vitu2_page_scroll_pane_g1

0xca6e,	// (0x00020a28) vitu2_page_scroll_pane_g2

0x0001,

0xfb07,	// (0x00023ac1) vitu2_page_scroll_pane_g

0xca76,	// (0x00020a30) vitu2_page_scroll_pane_t1

0x3fc0,	// (0x00017f7a) popup_char_count_window_g1

0x56f3,	// (0x000196ad) popup_char_count_window_g2

0x56fc,	// (0x000196b6) popup_char_count_window_g3

0x0002,

0xfb0c,	// (0x00023ac6) popup_char_count_window_g

0x5705,	// (0x000196bf) popup_char_count_window_t1

0x1293,	// (0x0001524d) main_vded2_pane

0x478e,	// (0x00018748) aid_size_cell_imed_line

0x4798,	// (0x00018752) grid_imed_line_width_pane

0x8126,	// (0x0001c0e0) vid4_indicators_pane_g4

0x5713,	// (0x000196cd) cell_imed_line_width_pane_ParamLimits

0x5713,	// (0x000196cd) cell_imed_line_width_pane

0x5725,	// (0x000196df) cell_imed_line_width_pane_g1

0x572e,	// (0x000196e8) cell_imed_line_width_pane_g2

0x0001,

0xfb13,	// (0x00023acd) cell_imed_line_width_pane_g

0xca85,	// (0x00020a3f) main_vded2_pane_g1_ParamLimits

0xca85,	// (0x00020a3f) main_vded2_pane_g1

0xca92,	// (0x00020a4c) main_vded2_pane_g2_ParamLimits

0xca92,	// (0x00020a4c) main_vded2_pane_g2

0x0001,

0xfb18,	// (0x00023ad2) main_vded2_pane_g_ParamLimits

0xfb18,	// (0x00023ad2) main_vded2_pane_g

0xca9e,	// (0x00020a58) vded2_slider_pane_ParamLimits

0xca9e,	// (0x00020a58) vded2_slider_pane

0xcaab,	// (0x00020a65) aid_size_touch_vded2_end

0xcab3,	// (0x00020a6d) aid_size_touch_vded2_playhead

0xcabb,	// (0x00020a75) aid_size_touch_vded2_start

0xcac3,	// (0x00020a7d) vded2_slider_bg_pane

0xcacc,	// (0x00020a86) vded2_slider_pane_g1

0xcad5,	// (0x00020a8f) vded2_slider_pane_g2

0xcadd,	// (0x00020a97) vded2_slider_pane_g3

0x0002,

0xfb1d,	// (0x00023ad7) vded2_slider_pane_g

0xcae6,	// (0x00020aa0) vded2_slider_bg_pane_g1

0xcaef,	// (0x00020aa9) vded2_slider_bg_pane_g2

0xcaf8,	// (0x00020ab2) vded2_slider_bg_pane_g3

0x0002,

0xfb24,	// (0x00023ade) vded2_slider_bg_pane_g

0xa4fc,	// (0x0001e4b6) aid_postcard_touch_down_pane_ParamLimits

0xa4fc,	// (0x0001e4b6) aid_postcard_touch_down_pane

0xa508,	// (0x0001e4c2) aid_postcard_touch_up_pane_ParamLimits

0xa508,	// (0x0001e4c2) aid_postcard_touch_up_pane

0x1293,	// (0x0001524d) main_blid2_pane

0x3dc2,	// (0x00017d7c) popup_blid2_search_window

0x1293,	// (0x0001524d) blid2_gps_pane

0x1293,	// (0x0001524d) blid2_navig_pane

0x1293,	// (0x0001524d) blid2_search_pane

0x1293,	// (0x0001524d) blid2_tripm_pane

0xcb01,	// (0x00020abb) blid2_search_pane_g1_ParamLimits

0xcb01,	// (0x00020abb) blid2_search_pane_g1

0xcb0d,	// (0x00020ac7) blid2_search_pane_t1_ParamLimits

0xcb0d,	// (0x00020ac7) blid2_search_pane_t1

0xcb1f,	// (0x00020ad9) aid_size_cell_blid2_gps_ParamLimits

0xcb1f,	// (0x00020ad9) aid_size_cell_blid2_gps

0xcb2f,	// (0x00020ae9) blid2_gps_pane_g1_ParamLimits

0xcb2f,	// (0x00020ae9) blid2_gps_pane_g1

0xcb3b,	// (0x00020af5) grid_blid2_satellite_pane_ParamLimits

0xcb3b,	// (0x00020af5) grid_blid2_satellite_pane

0xcb47,	// (0x00020b01) blid2_navig_pane_g1_ParamLimits

0xcb47,	// (0x00020b01) blid2_navig_pane_g1

0xcb53,	// (0x00020b0d) blid2_navig_pane_t1_ParamLimits

0xcb53,	// (0x00020b0d) blid2_navig_pane_t1

0xcb65,	// (0x00020b1f) blid2_navig_pane_t2_ParamLimits

0xcb65,	// (0x00020b1f) blid2_navig_pane_t2

0x0001,

0xfb2b,	// (0x00023ae5) blid2_navig_pane_t_ParamLimits

0xfb2b,	// (0x00023ae5) blid2_navig_pane_t

0xcb77,	// (0x00020b31) blid2_navig_ring_pane_ParamLimits

0xcb77,	// (0x00020b31) blid2_navig_ring_pane

0xcb83,	// (0x00020b3d) blid2_speed_pane_ParamLimits

0xcb83,	// (0x00020b3d) blid2_speed_pane

0xcb8f,	// (0x00020b49) blid2_tripm_pane_g1_ParamLimits

0xcb8f,	// (0x00020b49) blid2_tripm_pane_g1

0xcb9b,	// (0x00020b55) blid2_tripm_pane_g2_ParamLimits

0xcb9b,	// (0x00020b55) blid2_tripm_pane_g2

0xcba7,	// (0x00020b61) blid2_tripm_pane_g3_ParamLimits

0xcba7,	// (0x00020b61) blid2_tripm_pane_g3

0xcbb3,	// (0x00020b6d) blid2_tripm_pane_g4_ParamLimits

0xcbb3,	// (0x00020b6d) blid2_tripm_pane_g4

0xcbbf,	// (0x00020b79) blid2_tripm_pane_g5_ParamLimits

0xcbbf,	// (0x00020b79) blid2_tripm_pane_g5

0x0005,

0xfb30,	// (0x00023aea) blid2_tripm_pane_g_ParamLimits

0xfb30,	// (0x00023aea) blid2_tripm_pane_g

0xcbd7,	// (0x00020b91) blid2_tripm_pane_t1_ParamLimits

0xcbd7,	// (0x00020b91) blid2_tripm_pane_t1

0xcbe9,	// (0x00020ba3) blid2_tripm_pane_t2_ParamLimits

0xcbe9,	// (0x00020ba3) blid2_tripm_pane_t2

0xcbfb,	// (0x00020bb5) blid2_tripm_pane_t3_ParamLimits

0xcbfb,	// (0x00020bb5) blid2_tripm_pane_t3

0x0003,

0xfb3d,	// (0x00023af7) blid2_tripm_pane_t_ParamLimits

0xfb3d,	// (0x00023af7) blid2_tripm_pane_t

0xcc2b,	// (0x00020be5) cell_blid2_satellite_pane_ParamLimits

0xcc2b,	// (0x00020be5) cell_blid2_satellite_pane

0xcc43,	// (0x00020bfd) cell_blid2_satellite_pane_g1

0x5736,	// (0x000196f0) cell_blid2_satellite_pane_t1

0x42a9,	// (0x00018263) blid2_speed_pane_g1

0x5744,	// (0x000196fe) blid2_speed_pane_t1

0x5752,	// (0x0001970c) blid2_speed_pane_t2

0x0001,

0xfb46,	// (0x00023b00) blid2_speed_pane_t

0x42a9,	// (0x00018263) blid2_navig_ring_pane_g1

0xcc4c,	// (0x00020c06) blid2_navig_ring_pane_g2

0xcc54,	// (0x00020c0e) blid2_navig_ring_pane_g3

0xcc5c,	// (0x00020c16) blid2_navig_ring_pane_g4

0xcc64,	// (0x00020c1e) blid2_navig_ring_pane_g5

0x0004,

0xfb4b,	// (0x00023b05) blid2_navig_ring_pane_g

0x1293,	// (0x0001524d) bg_popup_window_pane_cp011

0x5760,	// (0x0001971a) popup_blid2_search_window_g1

0x5768,	// (0x00019722) popup_blid2_search_window_t1

0x5776,	// (0x00019730) popup_blid2_search_window_t2

0x0001,

0xfb56,	// (0x00023b10) popup_blid2_search_window_t

0x1f0e,	// (0x00015ec8) main_browser_pane_g1

0x1a51,	// (0x00015a0b) main_browser_pane_ParamLimits

0x80f7,	// (0x0001c0b1) bg_button_pane_cp011_ParamLimits

0x83f5,	// (0x0001c3af) cell_vitu2_function_pane_g1_ParamLimits

0x12e6,	// (0x000152a0) bg_popup_sub_pane_cp22_ParamLimits

0xc6d2,	// (0x0002068c) input_focus_pane_cp08_ParamLimits

0xc6df,	// (0x00020699) popup_vitu2_query_button_pane_ParamLimits

0xc6df,	// (0x00020699) popup_vitu2_query_button_pane

0xc6b6,	// (0x00020670) popup_vitu2_query_input_button_pane

0x529d,	// (0x00019257) popup_vitu2_query_window_g1_ParamLimits

0xc6f0,	// (0x000206aa) popup_vitu2_query_window_g2_ParamLimits

0xfa5d,	// (0x00023a17) popup_vitu2_query_window_g_ParamLimits

0x1293,	// (0x0001524d) bg_button_pane_cp026

0xcc6c,	// (0x00020c26) popup_vitu2_query_input_button_pane_g1

0x1293,	// (0x0001524d) bg_button_pane_cp025

0x5784,	// (0x0001973e) popup_vitu2_query_button_pane_t1

0xb1e1,	// (0x0001f19b) main_mp3_pane_t6

0xb1ef,	// (0x0001f1a9) popup_slider_window_cp01

0x804b,	// (0x0001c005) cam4_battery_pane

0x804b,	// (0x0001c005) cam4_battery_pane_cp02

0x804b,	// (0x0001c005) cam4_battery_pane_cp01

0x804b,	// (0x0001c005) cam4_battery_pane_cp03

0x5792,	// (0x0001974c) cam4_battery_pane_g1

0x42a9,	// (0x00018263) cam4_battery_pane_g2

0x0001,

0xfb5b,	// (0x00023b15) cam4_battery_pane_g

0x417b,	// (0x00018135) popup_blid_sat_info2_window_t11

0xa009,	// (0x0001dfc3) aid_size_touch_mv_arrow_left_ParamLimits

0x2797,	// (0x00016751) aid_size_touch_mv_arrow_right_ParamLimits

0x27cf,	// (0x00016789) navi_pane_g1_ParamLimits

0x27db,	// (0x00016795) navi_pane_g2_ParamLimits

0xa022,	// (0x0001dfdc) navi_pane_g3_ParamLimits

0xf418,	// (0x000233d2) navi_pane_g_ParamLimits

0xa047,	// (0x0001e001) navi_pane_mv_t1_ParamLimits

0xbb6a,	// (0x0001fb24) grid_imed_effect_pane_ParamLimits

0x1e48,	// (0x00015e02) aid_placing_vt_slider_lsc

0x1e50,	// (0x00015e0a) aid_placing_vt_slider_prt

0x12e6,	// (0x000152a0) bg_tb_trans_pane_cp01_ParamLimits

0x43f8,	// (0x000183b2) popup_image_details_window_g1_ParamLimits

0x440b,	// (0x000183c5) popup_image_details_window_g2_ParamLimits

0x4420,	// (0x000183da) popup_image_details_window_g3_ParamLimits

0x4420,	// (0x000183da) popup_image_details_window_g3

0xf75e,	// (0x00023718) popup_image_details_window_g_ParamLimits

0x4434,	// (0x000183ee) popup_image_details_window_t1_ParamLimits

0x4446,	// (0x00018400) popup_image_details_window_t2_ParamLimits

0x445f,	// (0x00018419) popup_image_details_window_t3_ParamLimits

0x44a1,	// (0x0001845b) popup_image_details_window_t4_ParamLimits

0x44bc,	// (0x00018476) popup_image_details_window_t5_ParamLimits

0xf765,	// (0x0002371f) popup_image_details_window_t_ParamLimits

0xc992,	// (0x0002094c) cl_header_name_pane_ParamLimits

0xc992,	// (0x0002094c) cl_header_name_pane

0xcc74,	// (0x00020c2e) cl_header_name_pane_t1_ParamLimits

0xcc74,	// (0x00020c2e) cl_header_name_pane_t1

0xcc8b,	// (0x00020c45) cl_header_name_pane_t2_ParamLimits

0xcc8b,	// (0x00020c45) cl_header_name_pane_t2

0xccb5,	// (0x00020c6f) cl_header_name_pane_t3_ParamLimits

0xccb5,	// (0x00020c6f) cl_header_name_pane_t3

0x0002,

0xfb60,	// (0x00023b1a) cl_header_name_pane_t_ParamLimits

0xfb60,	// (0x00023b1a) cl_header_name_pane_t

0x285d,	// (0x00016817) navi_pane_mv_g2_ParamLimits

0x4f5a,	// (0x00018f14) field_vitu2_entry_pane_g1_ParamLimits

0x4f66,	// (0x00018f20) field_vitu2_entry_pane_g2_ParamLimits

0x4f72,	// (0x00018f2c) field_vitu2_entry_pane_g3_ParamLimits

0x4f72,	// (0x00018f2c) field_vitu2_entry_pane_g3

0xf95c,	// (0x00023916) field_vitu2_entry_pane_g_ParamLimits

0x82ca,	// (0x0001c284) cell_vitu2_itu_pane_g1_ParamLimits

0x82da,	// (0x0001c294) cell_vitu2_itu_pane_g2_ParamLimits

0x82da,	// (0x0001c294) cell_vitu2_itu_pane_g2

0x0001,

0xf968,	// (0x00023922) cell_vitu2_itu_pane_g_ParamLimits

0xf968,	// (0x00023922) cell_vitu2_itu_pane_g

0x80f7,	// (0x0001c0b1) bg_vkb2_func_pane_cp05_ParamLimits

0x80f7,	// (0x0001c0b1) bg_vkb2_func_pane_cp05

0x80f7,	// (0x0001c0b1) bg_vkb2_func_pane_cp03

0x80f7,	// (0x0001c0b1) bg_vkb2_func_pane_cp04

0x80f7,	// (0x0001c0b1) bg_vkb2_func_pane_cp10_ParamLimits

0x80f7,	// (0x0001c0b1) bg_vkb2_func_pane_cp10

0xc938,	// (0x000208f2) bg_vkb2_func_pane_cp08

0xc91f,	// (0x000208d9) bg_vkb2_func_pane_cp06

0xc92c,	// (0x000208e6) bg_vkb2_func_pane_cp07

0x56c9,	// (0x00019683) bg_vkb2_func_pane_cp11_ParamLimits

0x56c9,	// (0x00019683) bg_vkb2_func_pane_cp11

0x56de,	// (0x00019698) bg_vkb2_func_pane_cp12_ParamLimits

0x56de,	// (0x00019698) bg_vkb2_func_pane_cp12

0x1293,	// (0x0001524d) bg_vkb2_func_pane_cp09

0x4faf,	// (0x00018f69) bg_vkb2_func_pane_g1

0x201f,	// (0x00015fd9) bg_vkb2_func_pane_g2

0x4fb7,	// (0x00018f71) bg_vkb2_func_pane_g3

0x4fbf,	// (0x00018f79) bg_vkb2_func_pane_g4

0x5240,	// (0x000191fa) bg_vkb2_func_pane_g5

0x4fd7,	// (0x00018f91) bg_vkb2_func_pane_g6

0x4fdf,	// (0x00018f99) bg_vkb2_func_pane_g7

0x4fcf,	// (0x00018f89) bg_vkb2_func_pane_g8

0x1fff,	// (0x00015fb9) bg_vkb2_func_pane_g9

0x0008,

0xfb67,	// (0x00023b21) bg_vkb2_func_pane_g

0xcbcb,	// (0x00020b85) blid2_tripm_pane_g6_ParamLimits

0xcbcb,	// (0x00020b85) blid2_tripm_pane_g6

0x4d78,	// (0x00018d32) mp4_progress_pane_g1

0xcc1f,	// (0x00020bd9) blid2_tripm_values_pane_ParamLimits

0xcc1f,	// (0x00020bd9) blid2_tripm_values_pane

0xccda,	// (0x00020c94) blid2_tripm_values_pane_t1

0xcce8,	// (0x00020ca2) blid2_tripm_values_pane_t2

0xccf6,	// (0x00020cb0) blid2_tripm_values_pane_t3

0xcd04,	// (0x00020cbe) blid2_tripm_values_pane_t4

0xcd12,	// (0x00020ccc) blid2_tripm_values_pane_t5

0xcd20,	// (0x00020cda) blid2_tripm_values_pane_t6

0xcd2e,	// (0x00020ce8) blid2_tripm_values_pane_t7

0xcd3c,	// (0x00020cf6) blid2_tripm_values_pane_t8

0xcd4a,	// (0x00020d04) blid2_tripm_values_pane_t9

0x0008,

0xfb7a,	// (0x00023b34) blid2_tripm_values_pane_t

0x9228,	// (0x0001d1e2) call_video_pane_t1_ParamLimits

0x923e,	// (0x0001d1f8) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0002325b) call_video_pane_t_ParamLimits

0xa4a2,	// (0x0001e45c) msg_header_pane_g1_ParamLimits

0x2a61,	// (0x00016a1b) msg_header_pane_g2_ParamLimits

0x2a61,	// (0x00016a1b) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x00023475) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x00023475) msg_header_pane_g

0x1a51,	// (0x00015a0b) main_clock2_pane_ParamLimits

0xb9a2,	// (0x0001f95c) grid_clock2_toolbar_pane_ParamLimits

0xb9a2,	// (0x0001f95c) grid_clock2_toolbar_pane

0xb9a2,	// (0x0001f95c) listscroll_clock2_pane_ParamLimits

0xb9a2,	// (0x0001f95c) listscroll_clock2_pane

0xba45,	// (0x0001f9ff) main_clock2_pane_t3_ParamLimits

0xba45,	// (0x0001f9ff) main_clock2_pane_t3

0xba57,	// (0x0001fa11) main_clock2_pane_t4_ParamLimits

0xba57,	// (0x0001fa11) main_clock2_pane_t4

0x579c,	// (0x00019756) cell_clock2_toolbar_pane

0x57a4,	// (0x0001975e) cell_clock2_toolbar_pane_cp01

0x57a4,	// (0x0001975e) cell_clock2_toolbar_pane_cp02

0x57ac,	// (0x00019766) cell_clock2_toolbar_pane_cp03

0x57b4,	// (0x0001976e) list_clock2_pane

0x26ff,	// (0x000166b9) scroll_pane_cp10

0x57bc,	// (0x00019776) list_single_clock2_pane_ParamLimits

0x57bc,	// (0x00019776) list_single_clock2_pane

0x28be,	// (0x00016878) list_highlight_pane_cp08

0x57c9,	// (0x00019783) list_single_clock2_pane_t1

0x57d7,	// (0x00019791) list_single_clock2_pane_t2

0x0001,

0xfb8d,	// (0x00023b47) list_single_clock2_pane_t

0x1293,	// (0x0001524d) bg_button_pane_cp10

0x57e5,	// (0x0001979f) cell_clock2_toolbar_pane_g1

0x7764,	// (0x0001b71e) aid_main_viewer_pane_g1_ParamLimits

0x7764,	// (0x0001b71e) aid_main_viewer_pane_g1

0x7770,	// (0x0001b72a) aid_main_viewer_pane_g2_ParamLimits

0x7770,	// (0x0001b72a) aid_main_viewer_pane_g2

0xa4c0,	// (0x0001e47a) aid_main_viewer_pane_g3_ParamLimits

0xa4c0,	// (0x0001e47a) aid_main_viewer_pane_g3

0xa4cf,	// (0x0001e489) aid_main_viewer_pane_g4_ParamLimits

0xa4cf,	// (0x0001e489) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x00023486) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x00023486) aid_main_viewer_pane_g

0x4473,	// (0x0001842d) main_calc_pane_ParamLimits

0xab14,	// (0x0001eace) main_dialer2_pane_ParamLimits

0x1293,	// (0x0001524d) main_cam6_pane

0x1293,	// (0x0001524d) main_vid6_pane

0xb9ae,	// (0x0001f968) listscroll_gen_pane_cp06_ParamLimits

0xb9ae,	// (0x0001f968) listscroll_gen_pane_cp06

0xba69,	// (0x0001fa23) main_clock2_pane_t5_ParamLimits

0xba69,	// (0x0001fa23) main_clock2_pane_t5

0xbab0,	// (0x0001fa6a) aid_call2_pane_cp10_ParamLimits

0xbabc,	// (0x0001fa76) aid_call_pane_cp10_ParamLimits

0x278b,	// (0x00016745) popup_clock_analogue_window_cp10_g1_ParamLimits

0x278b,	// (0x00016745) popup_clock_analogue_window_cp10_g2_ParamLimits

0xbac8,	// (0x0001fa82) popup_clock_analogue_window_cp10_g3_ParamLimits

0xbac8,	// (0x0001fa82) popup_clock_analogue_window_cp10_g4_ParamLimits

0x278b,	// (0x00016745) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf815,	// (0x000237cf) popup_clock_analogue_window_cp10_g_ParamLimits

0xbad4,	// (0x0001fa8e) popup_clock_analogue_window_cp10_t1_ParamLimits

0x4dd8,	// (0x00018d92) cell_dialer2_keypad_pane_g2_ParamLimits

0x4dd8,	// (0x00018d92) cell_dialer2_keypad_pane_g2

0x0001,

0xf8fb,	// (0x000238b5) cell_dialer2_keypad_pane_g_ParamLimits

0xf8fb,	// (0x000238b5) cell_dialer2_keypad_pane_g

0xbe81,	// (0x0001fe3b) cell_dialer2_keypad_pane_t1

0xc27a,	// (0x00020234) main_cset_text2_pane_ParamLimits

0xc27a,	// (0x00020234) main_cset_text2_pane

0x5477,	// (0x00019431) area_vitu2_query_pane_g1_ParamLimits

0xc8c4,	// (0x0002087e) area_vitu2_query_pane_g2_ParamLimits

0xfaaa,	// (0x00023a64) area_vitu2_query_pane_g_ParamLimits

0x54fb,	// (0x000194b5) area_vitu2_query_pane_t7_ParamLimits

0x54fb,	// (0x000194b5) area_vitu2_query_pane_t7

0xc91f,	// (0x000208d9) bg_button_pane_cp018_ParamLimits

0xc92c,	// (0x000208e6) bg_button_pane_cp021_ParamLimits

0xc938,	// (0x000208f2) bg_button_pane_cp022_ParamLimits

0xc938,	// (0x000208f2) bg_vkb2_func_pane_cp08_ParamLimits

0xc91f,	// (0x000208d9) bg_vkb2_func_pane_cp06_ParamLimits

0xc92c,	// (0x000208e6) bg_vkb2_func_pane_cp07_ParamLimits

0xc947,	// (0x00020901) input_focus_pane_cp09_ParamLimits

0x862c,	// (0x0001c5e6) cam6_autofocus_pane_ParamLimits

0x862c,	// (0x0001c5e6) cam6_autofocus_pane

0x8648,	// (0x0001c602) cam6_image_uncrop_pane_ParamLimits

0x8648,	// (0x0001c602) cam6_image_uncrop_pane

0x866b,	// (0x0001c625) cam6_indi_pane_ParamLimits

0x866b,	// (0x0001c625) cam6_indi_pane

0x8685,	// (0x0001c63f) cam6_mode_pane_ParamLimits

0x8685,	// (0x0001c63f) cam6_mode_pane

0x8699,	// (0x0001c653) cam6_timer_pane_ParamLimits

0x8699,	// (0x0001c653) cam6_timer_pane

0x86a5,	// (0x0001c65f) cam6_zoom_pane_ParamLimits

0x86a5,	// (0x0001c65f) cam6_zoom_pane

0xcd58,	// (0x00020d12) cam6_mode_pane_g1_ParamLimits

0xcd58,	// (0x00020d12) cam6_mode_pane_g1

0xcd64,	// (0x00020d1e) cam6_mode_pane_g2_ParamLimits

0xcd64,	// (0x00020d1e) cam6_mode_pane_g2

0xcd70,	// (0x00020d2a) cam6_mode_pane_g3_ParamLimits

0xcd70,	// (0x00020d2a) cam6_mode_pane_g3

0xcd7c,	// (0x00020d36) cam6_mode_pane_g4_ParamLimits

0xcd7c,	// (0x00020d36) cam6_mode_pane_g4

0x0003,

0xfb92,	// (0x00023b4c) cam6_mode_pane_g_ParamLimits

0xfb92,	// (0x00023b4c) cam6_mode_pane_g

0x5602,	// (0x000195bc) bg_tb_trans_pane_cp08_ParamLimits

0x5602,	// (0x000195bc) bg_tb_trans_pane_cp08

0x57f9,	// (0x000197b3) cam6_battery_pane_ParamLimits

0x57f9,	// (0x000197b3) cam6_battery_pane

0x580f,	// (0x000197c9) cam6_indi_pane_g1_ParamLimits

0x580f,	// (0x000197c9) cam6_indi_pane_g1

0x5821,	// (0x000197db) cam6_indi_pane_g2_ParamLimits

0x5821,	// (0x000197db) cam6_indi_pane_g2

0x5833,	// (0x000197ed) cam6_indi_pane_g3_ParamLimits

0x5833,	// (0x000197ed) cam6_indi_pane_g3

0x0002,

0xfb9b,	// (0x00023b55) cam6_indi_pane_g_ParamLimits

0xfb9b,	// (0x00023b55) cam6_indi_pane_g

0x5845,	// (0x000197ff) cam6_indi_pane_t1_ParamLimits

0x5845,	// (0x000197ff) cam6_indi_pane_t1

0xbfce,	// (0x0001ff88) cam6_autofocus_pane_g1

0xbfc6,	// (0x0001ff80) cam6_autofocus_pane_g2

0xbfde,	// (0x0001ff98) cam6_autofocus_pane_g3

0xbfd6,	// (0x0001ff90) cam6_autofocus_pane_g4

0x0003,

0xfba2,	// (0x00023b5c) cam6_autofocus_pane_g

0x586b,	// (0x00019825) cam6_timer_pane_g1

0x5873,	// (0x0001982d) cam6_timer_pane_t1

0x5881,	// (0x0001983b) cam6_zoom_cont_pane

0x5889,	// (0x00019843) cam6_zoom_pane_g1

0x5891,	// (0x0001984b) cam6_zoom_pane_g2

0xcd88,	// (0x00020d42) cam6_zoom_pane_g3

0x0002,

0xfbab,	// (0x00023b65) cam6_zoom_pane_g

0x42a9,	// (0x00018263) cam6_battery_pane_g1

0x42a9,	// (0x00018263) cam6_battery_pane_g2

0x0001,

0xf722,	// (0x000236dc) cam6_battery_pane_g

0x5899,	// (0x00019853) cam6_zoom_cont_pane_g1

0x58a2,	// (0x0001985c) cam6_zoom_cont_pane_g2

0x58ab,	// (0x00019865) cam6_zoom_cont_pane_g3

0x0002,

0xfbb2,	// (0x00023b6c) cam6_zoom_cont_pane_g

0xcda5,	// (0x00020d5f) cam6_mode_pane_cp_ParamLimits

0xcda5,	// (0x00020d5f) cam6_mode_pane_cp

0xcdb9,	// (0x00020d73) cam6_zoom_pane_cp_ParamLimits

0xcdb9,	// (0x00020d73) cam6_zoom_pane_cp

0xcdcf,	// (0x00020d89) vid6_image_uncrop_cif_pane_ParamLimits

0xcdcf,	// (0x00020d89) vid6_image_uncrop_cif_pane

0xcdf1,	// (0x00020dab) vid6_image_uncrop_nhd_pane_ParamLimits

0xcdf1,	// (0x00020dab) vid6_image_uncrop_nhd_pane

0xce08,	// (0x00020dc2) vid6_image_uncrop_vga_pane_ParamLimits

0xce08,	// (0x00020dc2) vid6_image_uncrop_vga_pane

0xce1f,	// (0x00020dd9) vid6_image_uncrop_wvga_pane_ParamLimits

0xce1f,	// (0x00020dd9) vid6_image_uncrop_wvga_pane

0xce36,	// (0x00020df0) vid6_indi_pane_ParamLimits

0xce36,	// (0x00020df0) vid6_indi_pane

0x5602,	// (0x000195bc) bg_tb_trans_pane_cp09_ParamLimits

0x5602,	// (0x000195bc) bg_tb_trans_pane_cp09

0x58bf,	// (0x00019879) cam6_battery_pane_cp_ParamLimits

0x58bf,	// (0x00019879) cam6_battery_pane_cp

0x58cb,	// (0x00019885) vid6_indi_pane_g1_ParamLimits

0x58cb,	// (0x00019885) vid6_indi_pane_g1

0x58dd,	// (0x00019897) vid6_indi_pane_g2_ParamLimits

0x58dd,	// (0x00019897) vid6_indi_pane_g2

0x58ef,	// (0x000198a9) vid6_indi_pane_g3_ParamLimits

0x58ef,	// (0x000198a9) vid6_indi_pane_g3

0x5904,	// (0x000198be) vid6_indi_pane_g4_ParamLimits

0x5904,	// (0x000198be) vid6_indi_pane_g4

0x5919,	// (0x000198d3) vid6_indi_pane_g5_ParamLimits

0x5919,	// (0x000198d3) vid6_indi_pane_g5

0x0004,

0xfbb9,	// (0x00023b73) vid6_indi_pane_g_ParamLimits

0xfbb9,	// (0x00023b73) vid6_indi_pane_g

0x5933,	// (0x000198ed) vid6_indi_pane_t1_ParamLimits

0x5933,	// (0x000198ed) vid6_indi_pane_t1

0x5949,	// (0x00019903) vid6_indi_pane_t2_ParamLimits

0x5949,	// (0x00019903) vid6_indi_pane_t2

0x5971,	// (0x0001992b) vid6_indi_pane_t3_ParamLimits

0x5971,	// (0x0001992b) vid6_indi_pane_t3

0x5999,	// (0x00019953) vid6_indi_pane_t4_ParamLimits

0x5999,	// (0x00019953) vid6_indi_pane_t4

0x0003,

0xfbc4,	// (0x00023b7e) vid6_indi_pane_t_ParamLimits

0xfbc4,	// (0x00023b7e) vid6_indi_pane_t

0x59bd,	// (0x00019977) wait_bar_pane_cp08

0xce56,	// (0x00020e10) main_cset_text2_pane_t1_ParamLimits

0xce56,	// (0x00020e10) main_cset_text2_pane_t1

0xcd90,	// (0x00020d4a) listscroll_gen_pane_cp06_t1_ParamLimits

0xcd90,	// (0x00020d4a) listscroll_gen_pane_cp06_t1

0x1293,	// (0x0001524d) main_cam6_set_pane

0x803d,	// (0x0001bff7) bg_tb_trans_pane_cp06_ParamLimits

0x8053,	// (0x0001c00d) cam4_indicators_pane_g1_ParamLimits

0x8063,	// (0x0001c01d) cam4_indicators_pane_g2_ParamLimits

0xf938,	// (0x000238f2) cam4_indicators_pane_g_ParamLimits

0x8083,	// (0x0001c03d) cam4_indicators_pane_t1_ParamLimits

0x80f7,	// (0x0001c0b1) bg_tb_trans_pane_cp07_ParamLimits

0x8053,	// (0x0001c00d) vid4_indicators_pane_g1_ParamLimits

0x8105,	// (0x0001c0bf) vid4_indicators_pane_g2_ParamLimits

0x8115,	// (0x0001c0cf) vid4_indicators_pane_g3_ParamLimits

0x8126,	// (0x0001c0e0) vid4_indicators_pane_g4_ParamLimits

0xf94a,	// (0x00023904) vid4_indicators_pane_g_ParamLimits

0x8142,	// (0x0001c0fc) vid4_indicators_pane_t1_ParamLimits

0x8597,	// (0x0001c551) vid4_progress_pane_g1_ParamLimits

0x85a6,	// (0x0001c560) vid4_progress_pane_g2_ParamLimits

0x85b5,	// (0x0001c56f) vid4_progress_pane_g3_ParamLimits

0x85c4,	// (0x0001c57e) vid4_progress_pane_g4_ParamLimits

0xfaf5,	// (0x00023aaf) vid4_progress_pane_g_ParamLimits

0x85dc,	// (0x0001c596) vid4_progress_pane_t1_ParamLimits

0x85f2,	// (0x0001c5ac) vid4_progress_pane_t2_ParamLimits

0x8607,	// (0x0001c5c1) vid4_progress_pane_t3_ParamLimits

0xfb00,	// (0x00023aba) vid4_progress_pane_t_ParamLimits

0x861c,	// (0x0001c5d6) wait_bar_pane_cp07_ParamLimits

0xce72,	// (0x00020e2c) main_cam6_set_pane_g2_ParamLimits

0xce72,	// (0x00020e2c) main_cam6_set_pane_g2

0xce7e,	// (0x00020e38) main_cset6_listscroll_pane_ParamLimits

0xce7e,	// (0x00020e38) main_cset6_listscroll_pane

0xcea7,	// (0x00020e61) main_cset6_slider_pane_ParamLimits

0xcea7,	// (0x00020e61) main_cset6_slider_pane

0xceb3,	// (0x00020e6d) main_cset6_text2_pane_ParamLimits

0xceb3,	// (0x00020e6d) main_cset6_text2_pane

0x59cd,	// (0x00019987) main_cset6_text_pane

0x50a5,	// (0x0001905f) main_cset_list_pane_copy1_ParamLimits

0x50a5,	// (0x0001905f) main_cset_list_pane_copy1

0x50b5,	// (0x0001906f) scroll_pane_cp028_copy1

0xcec6,	// (0x00020e80) cset_list_set_pane_copy1

0xc535,	// (0x000204ef) aid_position_infowindow_above_copy1

0xc53d,	// (0x000204f7) aid_position_infowindow_below_copy1

0xced5,	// (0x00020e8f) cset_list_set_pane_g1_copy1

0xcedd,	// (0x00020e97) cset_list_set_pane_g3_copy1_ParamLimits

0xcedd,	// (0x00020e97) cset_list_set_pane_g3_copy1

0xceec,	// (0x00020ea6) cset_list_set_pane_t1_copy1_ParamLimits

0xceec,	// (0x00020ea6) cset_list_set_pane_t1_copy1

0x12e6,	// (0x000152a0) list_highlight_pane_cp021_copy1_ParamLimits

0x12e6,	// (0x000152a0) list_highlight_pane_cp021_copy1

0x59d5,	// (0x0001998f) cset6_slider_pane_ParamLimits

0x59d5,	// (0x0001998f) cset6_slider_pane

0x5a01,	// (0x000199bb) main_cset6_slider_pane_g1_ParamLimits

0x5a01,	// (0x000199bb) main_cset6_slider_pane_g1

0xcf01,	// (0x00020ebb) main_cset6_slider_pane_g2_ParamLimits

0xcf01,	// (0x00020ebb) main_cset6_slider_pane_g2

0x50ca,	// (0x00019084) main_cset6_slider_pane_g3_ParamLimits

0x50ca,	// (0x00019084) main_cset6_slider_pane_g3

0xcf29,	// (0x00020ee3) main_cset6_slider_pane_g4_ParamLimits

0xcf29,	// (0x00020ee3) main_cset6_slider_pane_g4

0xcf35,	// (0x00020eef) main_cset6_slider_pane_g5_ParamLimits

0xcf35,	// (0x00020eef) main_cset6_slider_pane_g5

0x50ca,	// (0x00019084) main_cset6_slider_pane_g7_ParamLimits

0x50ca,	// (0x00019084) main_cset6_slider_pane_g7

0x50d6,	// (0x00019090) main_cset6_slider_pane_g8_ParamLimits

0x50d6,	// (0x00019090) main_cset6_slider_pane_g8

0xcf41,	// (0x00020efb) main_cset6_slider_pane_g9_ParamLimits

0xcf41,	// (0x00020efb) main_cset6_slider_pane_g9

0xcf4d,	// (0x00020f07) main_cset6_slider_pane_g10_ParamLimits

0xcf4d,	// (0x00020f07) main_cset6_slider_pane_g10

0xcf29,	// (0x00020ee3) main_cset6_slider_pane_g11_ParamLimits

0xcf29,	// (0x00020ee3) main_cset6_slider_pane_g11

0xcf59,	// (0x00020f13) main_cset6_slider_pane_g12_ParamLimits

0xcf59,	// (0x00020f13) main_cset6_slider_pane_g12

0xcf65,	// (0x00020f1f) main_cset6_slider_pane_g13_ParamLimits

0xcf65,	// (0x00020f1f) main_cset6_slider_pane_g13

0xcf71,	// (0x00020f2b) main_cset6_slider_pane_g14_ParamLimits

0xcf71,	// (0x00020f2b) main_cset6_slider_pane_g14

0xcf7d,	// (0x00020f37) main_cset6_slider_pane_g15_ParamLimits

0xcf7d,	// (0x00020f37) main_cset6_slider_pane_g15

0xcf35,	// (0x00020eef) main_cset6_slider_pane_g16_ParamLimits

0xcf35,	// (0x00020eef) main_cset6_slider_pane_g16

0xcf95,	// (0x00020f4f) main_cset6_slider_pane_g17_ParamLimits

0xcf95,	// (0x00020f4f) main_cset6_slider_pane_g17

0x0011,

0xfbcd,	// (0x00023b87) main_cset6_slider_pane_g_ParamLimits

0xfbcd,	// (0x00023b87) main_cset6_slider_pane_g

0x5a29,	// (0x000199e3) main_cset6_slider_pane_t1_ParamLimits

0x5a29,	// (0x000199e3) main_cset6_slider_pane_t1

0xcfa1,	// (0x00020f5b) main_cset6_slider_pane_t2_ParamLimits

0xcfa1,	// (0x00020f5b) main_cset6_slider_pane_t2

0x5a6a,	// (0x00019a24) main_cset6_slider_pane_t3_ParamLimits

0x5a6a,	// (0x00019a24) main_cset6_slider_pane_t3

0xcfcc,	// (0x00020f86) main_cset6_slider_pane_t4_ParamLimits

0xcfcc,	// (0x00020f86) main_cset6_slider_pane_t4

0x5a95,	// (0x00019a4f) main_cset6_slider_pane_t5_ParamLimits

0x5a95,	// (0x00019a4f) main_cset6_slider_pane_t5

0x5ac0,	// (0x00019a7a) main_cset6_slider_pane_t7_ParamLimits

0x5ac0,	// (0x00019a7a) main_cset6_slider_pane_t7

0xcff7,	// (0x00020fb1) main_cset6_slider_pane_t8_ParamLimits

0xcff7,	// (0x00020fb1) main_cset6_slider_pane_t8

0xd01b,	// (0x00020fd5) main_cset6_slider_pane_t9_ParamLimits

0xd01b,	// (0x00020fd5) main_cset6_slider_pane_t9

0xd03f,	// (0x00020ff9) main_cset6_slider_pane_t10_ParamLimits

0xd03f,	// (0x00020ff9) main_cset6_slider_pane_t10

0xd063,	// (0x0002101d) main_cset6_slider_pane_t11_ParamLimits

0xd063,	// (0x0002101d) main_cset6_slider_pane_t11

0x5af6,	// (0x00019ab0) main_cset6_slider_pane_t14_ParamLimits

0x5af6,	// (0x00019ab0) main_cset6_slider_pane_t14

0x5b2f,	// (0x00019ae9) main_cset6_slider_pane_t15_ParamLimits

0x5b2f,	// (0x00019ae9) main_cset6_slider_pane_t15

0x000b,

0xfbf2,	// (0x00023bac) main_cset6_slider_pane_t_ParamLimits

0xfbf2,	// (0x00023bac) main_cset6_slider_pane_t

0x51d2,	// (0x0001918c) cset_slider_pane_g1_copy1

0x51db,	// (0x00019195) cset_slider_pane_g2_copy1

0x51e4,	// (0x0001919e) cset_slider_pane_g3_copy1

0x1293,	// (0x0001524d) bg_popup_sub_pane_cp011_copy1

0x52a9,	// (0x00019263) main_cset_text_pane_g1_copy1

0x52b1,	// (0x0001926b) main_cset_text_pane_t1_copy1

0x52bf,	// (0x00019279) main_cset_text_pane_t2_copy1

0x52cd,	// (0x00019287) main_cset_text_pane_t3_copy1

0x52db,	// (0x00019295) main_cset_text_pane_t4_copy1

0x52e9,	// (0x000192a3) main_cset_text_pane_t5_copy1

0x52f7,	// (0x000192b1) main_cset_text_pane_t6_copy1

0x5305,	// (0x000192bf) main_cset_text_pane_t7_copy1

0xd087,	// (0x00021041) main_cset_text2_pane_t1_copy1

0x1293,	// (0x0001524d) main_ncimui_pane

0xab4f,	// (0x0001eb09) popup_query_ncimui_window_ParamLimits

0xab4f,	// (0x0001eb09) popup_query_ncimui_window

0x45a7,	// (0x00018561) field_cale_ev2_pane_g4_ParamLimits

0x45a7,	// (0x00018561) field_cale_ev2_pane_g4

0xbe21,	// (0x0001fddb) cell_video_dialer_keypad_pane_g2_ParamLimits

0xbe21,	// (0x0001fddb) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8d6,	// (0x00023890) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8d6,	// (0x00023890) cell_video_dialer_keypad_pane_g

0xbe39,	// (0x0001fdf3) cell_video_dialer_keypad_pane_t1

0x1293,	// (0x0001524d) bg_popup_window_pane_cp012

0x25d8,	// (0x00016592) heading_pane_cp06

0x5c51,	// (0x00019c0b) ncim_query_content_pane

0x1293,	// (0x0001524d) bg_popup_heading_pane_cp01

0x5c59,	// (0x00019c13) ncim_heading_pane_t1

0x5c67,	// (0x00019c21) ncim_indicator_popup_pane

0x5c79,	// (0x00019c33) ncim_query_button_pane

0x5c8d,	// (0x00019c47) ncim_query_content_pane_t1

0x5c9f,	// (0x00019c59) ncim_query_content_pane_t2

0x0005,

0xfc31,	// (0x00023beb) ncim_query_content_pane_t

0x5cd9,	// (0x00019c93) ncim_query_list_pane

0x5ceb,	// (0x00019ca5) ncim_query_popup_pane

0x5c67,	// (0x00019c21) ncim_indicator_popup_pane_ParamLimits

0xd168,	// (0x00021122) ncim_query_content_pane_g1_ParamLimits

0xd168,	// (0x00021122) ncim_query_content_pane_g1

0x5c8d,	// (0x00019c47) ncim_query_content_pane_t1_ParamLimits

0x5c9f,	// (0x00019c59) ncim_query_content_pane_t2_ParamLimits

0xd174,	// (0x0002112e) ncim_query_content_pane_t3_ParamLimits

0xd174,	// (0x0002112e) ncim_query_content_pane_t3

0xd191,	// (0x0002114b) ncim_query_content_pane_t4_ParamLimits

0xd191,	// (0x0002114b) ncim_query_content_pane_t4

0xd1ae,	// (0x00021168) ncim_query_content_pane_t5_ParamLimits

0xd1ae,	// (0x00021168) ncim_query_content_pane_t5

0x5cb1,	// (0x00019c6b) ncim_query_content_pane_t6_ParamLimits

0x5cb1,	// (0x00019c6b) ncim_query_content_pane_t6

0xfc31,	// (0x00023beb) ncim_query_content_pane_t_ParamLimits

0x5cd9,	// (0x00019c93) ncim_query_list_pane_ParamLimits

0x5ceb,	// (0x00019ca5) ncim_query_popup_pane_ParamLimits

0x5cff,	// (0x00019cb9) wait_bar_pane_cp04

0x1293,	// (0x0001524d) input_focus_pane_cp011

0x5d07,	// (0x00019cc1) ncim_query_popup_pane_t1

0x5d15,	// (0x00019ccf) ncim_list_query_list_pane_ParamLimits

0x5d15,	// (0x00019ccf) ncim_list_query_list_pane

0x1293,	// (0x0001524d) bg_button_pane_cp027

0x5d28,	// (0x00019ce2) ncim_query_button_pane_g1

0x1293,	// (0x0001524d) list_highlight_pane_cp012

0x5d32,	// (0x00019cec) ncim_list_query_list_pane_g1

0x5d3a,	// (0x00019cf4) ncim_list_query_list_pane_t1

0x8073,	// (0x0001c02d) cam4_indicators_pane_g3_ParamLimits

0x8073,	// (0x0001c02d) cam4_indicators_pane_g3

0x8132,	// (0x0001c0ec) vid4_indicators_pane_g5_ParamLimits

0x8132,	// (0x0001c0ec) vid4_indicators_pane_g5

0x85d0,	// (0x0001c58a) vid4_progress_pane_g5_ParamLimits

0x85d0,	// (0x0001c58a) vid4_progress_pane_g5

0xd0b2,	// (0x0002106c) main_ncimui_pane_g1

0xd0f8,	// (0x000210b2) ncimui_group_query_pane_ParamLimits

0xd0f8,	// (0x000210b2) ncimui_group_query_pane

0xd12c,	// (0x000210e6) ncimui_list_pane_ParamLimits

0xd12c,	// (0x000210e6) ncimui_list_pane

0xd144,	// (0x000210fe) ncimui_text_pane_ParamLimits

0xd144,	// (0x000210fe) ncimui_text_pane

0xd1cb,	// (0x00021185) ncimui_text_pane_t1_ParamLimits

0xd1cb,	// (0x00021185) ncimui_text_pane_t1

0x5d51,	// (0x00019d0b) ncimui_list_single_graphic_pane_ParamLimits

0x5d51,	// (0x00019d0b) ncimui_list_single_graphic_pane

0xd1e9,	// (0x000211a3) ncimui_query_pane_ParamLimits

0xd1e9,	// (0x000211a3) ncimui_query_pane

0x1293,	// (0x0001524d) list_highlight_pane_cp013

0x5d5e,	// (0x00019d18) ncim_list_query_list_pane_t1_copy1

0x5d6c,	// (0x00019d26) ncim_list_single_graphic_pane_g1

0x5d74,	// (0x00019d2e) ncim_query_button_pane_cp01

0x5d7c,	// (0x00019d36) ncim_query_entry_pane_ParamLimits

0x5d7c,	// (0x00019d36) ncim_query_entry_pane

0x5d8c,	// (0x00019d46) ncimui_query_pane_g1

0x5d94,	// (0x00019d4e) ncimui_query_pane_t1_ParamLimits

0x5d94,	// (0x00019d4e) ncimui_query_pane_t1

0x1293,	// (0x0001524d) input_focus_pane_cp012

0x5d07,	// (0x00019cc1) ncim_query_entry_pane_t1

0x1a51,	// (0x00015a0b) main_im_pane_ParamLimits

0x12e6,	// (0x000152a0) main_mobtv_pane_ParamLimits

0x12e6,	// (0x000152a0) main_mobtv_pane

0xcf41,	// (0x00020efb) main_cset6_slider_pane_g18_ParamLimits

0xcf41,	// (0x00020efb) main_cset6_slider_pane_g18

0xcf65,	// (0x00020f1f) main_cset6_slider_pane_g19_ParamLimits

0xcf65,	// (0x00020f1f) main_cset6_slider_pane_g19

0x4f72,	// (0x00018f2c) bg_main_mobtv_pane_ParamLimits

0x4f72,	// (0x00018f2c) bg_main_mobtv_pane

0xd1f9,	// (0x000211b3) main_mobtv_info_pane

0xd202,	// (0x000211bc) main_mobtv_loading_pane_ParamLimits

0xd202,	// (0x000211bc) main_mobtv_loading_pane

0x5daa,	// (0x00019d64) main_mobtv_pg_channel_list_pane

0x5db4,	// (0x00019d6e) main_mobtv_pg_hdr_pane

0xd20f,	// (0x000211c9) main_mobtv_programe_curr_pane_ParamLimits

0xd20f,	// (0x000211c9) main_mobtv_programe_curr_pane

0xd21c,	// (0x000211d6) main_mobtv_programe_next_pane_ParamLimits

0xd21c,	// (0x000211d6) main_mobtv_programe_next_pane

0x5dbd,	// (0x00019d77) popup_mobtv_noti_window

0x42a9,	// (0x00018263) main_tv_pg_hdr_pane_g1

0x5dc5,	// (0x00019d7f) main_tv_pg_hdr_pane_g2

0x5dcd,	// (0x00019d87) main_tv_pg_hdr_pane_g3

0x5dd5,	// (0x00019d8f) main_tv_pg_hdr_pane_g4

0x5ddd,	// (0x00019d97) main_tv_pg_hdr_pane_g5

0x5de5,	// (0x00019d9f) main_tv_pg_hdr_pane_g6

0x5ded,	// (0x00019da7) main_tv_pg_hdr_pane_g7

0x5df5,	// (0x00019daf) main_tv_pg_hdr_pane_g8

0x5dfd,	// (0x00019db7) main_tv_pg_hdr_pane_g9

0x5e05,	// (0x00019dbf) main_tv_pg_hdr_pane_g10

0x5e0f,	// (0x00019dc9) main_tv_pg_hdr_pane_g11

0x000a,

0xfc3e,	// (0x00023bf8) main_tv_pg_hdr_pane_g

0x5e19,	// (0x00019dd3) main_tv_pg_hdr_pane_t1

0x5e27,	// (0x00019de1) main_tv_pg_hdr_pane_t2

0x5e35,	// (0x00019def) main_tv_pg_hdr_pane_t3

0x5e43,	// (0x00019dfd) main_tv_pg_hdr_pane_t4

0x5e51,	// (0x00019e0b) main_tv_pg_hdr_pane_t5

0x0004,

0xfc55,	// (0x00023c0f) main_tv_pg_hdr_pane_t

0x5e5f,	// (0x00019e19) single_mobtv_pg_channel_pane_ParamLimits

0x5e5f,	// (0x00019e19) single_mobtv_pg_channel_pane

0x5e71,	// (0x00019e2b) single_mobtv_pg_channel_table_pane

0x5e7a,	// (0x00019e34) single_mobtv_pg_channel_thumb_pane

0x5e83,	// (0x00019e3d) single_tv_pg_channel_pane_g1

0x5e8c,	// (0x00019e46) single_tv_pg_channel_pane_g2

0x0001,

0xfc60,	// (0x00023c1a) single_tv_pg_channel_pane_g

0x4506,	// (0x000184c0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x4506,	// (0x000184c0) bg_single_mobtv_pg_channel_thumb_pane

0x5e95,	// (0x00019e4f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x5e95,	// (0x00019e4f) single_mobtv_pg_channel_thumb_pane_g1

0x5ea3,	// (0x00019e5d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x5ea3,	// (0x00019e5d) single_mobtv_pg_channel_thumb_pane_g2

0x5eaf,	// (0x00019e69) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x5eaf,	// (0x00019e69) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc65,	// (0x00023c1f) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc65,	// (0x00023c1f) single_mobtv_pg_channel_thumb_pane_g

0x5ebb,	// (0x00019e75) single_mobtv_pg_channel_thumb_pane_t1

0x5ec9,	// (0x00019e83) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc6c,	// (0x00023c26) single_mobtv_pg_channel_thumb_pane_t

0x42a9,	// (0x00018263) bg_single_mobtv_pg_channel_table_pane_g1

0x42a9,	// (0x00018263) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf722,	// (0x000236dc) bg_single_mobtv_pg_channel_table_pane_g

0x5ed7,	// (0x00019e91) single_mobtv_pg_channel_table_pane_t1

0x5ee5,	// (0x00019e9f) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc71,	// (0x00023c2b) single_mobtv_pg_channel_table_pane_t

0xd231,	// (0x000211eb) main_mobtv_info_pane_g1_ParamLimits

0xd231,	// (0x000211eb) main_mobtv_info_pane_g1

0xd24d,	// (0x00021207) main_mobtv_info_pane_t1_ParamLimits

0xd24d,	// (0x00021207) main_mobtv_info_pane_t1

0xd2b3,	// (0x0002126d) main_mobtv_info_pane_t2_ParamLimits

0xd2b3,	// (0x0002126d) main_mobtv_info_pane_t2

0x0002,

0xfc7b,	// (0x00023c35) main_mobtv_info_pane_t_ParamLimits

0xfc7b,	// (0x00023c35) main_mobtv_info_pane_t

0xd336,	// (0x000212f0) wait_bar_pane_cp05

0xd346,	// (0x00021300) main_mobtv_loading_pane_g1_ParamLimits

0xd346,	// (0x00021300) main_mobtv_loading_pane_g1

0xd352,	// (0x0002130c) main_mobtv_loading_pane_g2_ParamLimits

0xd352,	// (0x0002130c) main_mobtv_loading_pane_g2

0xd35e,	// (0x00021318) main_mobtv_loading_pane_g3_ParamLimits

0xd35e,	// (0x00021318) main_mobtv_loading_pane_g3

0x0002,

0xfc82,	// (0x00023c3c) main_mobtv_loading_pane_g_ParamLimits

0xfc82,	// (0x00023c3c) main_mobtv_loading_pane_g

0x5ef3,	// (0x00019ead) main_mobtv_loading_pane_t1_ParamLimits

0x5ef3,	// (0x00019ead) main_mobtv_loading_pane_t1

0x5f0b,	// (0x00019ec5) main_mobtv_loading_pane_t2_ParamLimits

0x5f0b,	// (0x00019ec5) main_mobtv_loading_pane_t2

0x0001,

0xfc89,	// (0x00023c43) main_mobtv_loading_pane_t_ParamLimits

0xfc89,	// (0x00023c43) main_mobtv_loading_pane_t

0xd36a,	// (0x00021324) wait_bar_pane_cp06_ParamLimits

0xd36a,	// (0x00021324) wait_bar_pane_cp06

0x5f2f,	// (0x00019ee9) main_mobtv_programe_curr_pane_t1

0x5f3d,	// (0x00019ef7) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc8e,	// (0x00023c48) main_mobtv_programe_curr_pane_t

0x5f4b,	// (0x00019f05) main_mobtv_programe_next_pane_t1

0x5f59,	// (0x00019f13) main_mobtv_programe_next_pane_t2

0x5f67,	// (0x00019f21) main_mobtv_programe_next_pane_t3

0x0002,

0xfc93,	// (0x00023c4d) main_mobtv_programe_next_pane_t

0x1293,	// (0x0001524d) bg_popup_mobtv_noti_window_pane

0x5f75,	// (0x00019f2f) popup_mobtv_noti_window_g1

0x5f7d,	// (0x00019f37) popup_mobtv_noti_window_t1

0x5f8b,	// (0x00019f45) popup_mobtv_noti_window_t2

0x0001,

0xfc9a,	// (0x00023c54) popup_mobtv_noti_window_t

0x42a9,	// (0x00018263) bg_popup_mobtv_noti_window_pane_g1

0x1293,	// (0x0001524d) sc_clock_pane

0x1293,	// (0x0001524d) main_fs_bigclock_pane

0xcc0d,	// (0x00020bc7) blid2_tripm_pane_t4_ParamLimits

0xcc0d,	// (0x00020bc7) blid2_tripm_pane_t4

0xd376,	// (0x00021330) sc_clock_pane_g1_ParamLimits

0xd376,	// (0x00021330) sc_clock_pane_g1

0xd384,	// (0x0002133e) sc_clock_pane_t1_ParamLimits

0xd384,	// (0x0002133e) sc_clock_pane_t1

0xd397,	// (0x00021351) sc_clock_pane_t2_ParamLimits

0xd397,	// (0x00021351) sc_clock_pane_t2

0xd3a9,	// (0x00021363) sc_clock_pane_t3_ParamLimits

0xd3a9,	// (0x00021363) sc_clock_pane_t3

0x0004,

0xfc9f,	// (0x00023c59) sc_clock_pane_t_ParamLimits

0xfc9f,	// (0x00023c59) sc_clock_pane_t

0xe5c1,	// (0x0002257b) main_fs_bigclock_indicator_pane_ParamLimits

0xe5c1,	// (0x0002257b) main_fs_bigclock_indicator_pane

0xd421,	// (0x000213db) main_fs_bigclock_pane_g1_ParamLimits

0xd421,	// (0x000213db) main_fs_bigclock_pane_g1

0xe5cd,	// (0x00022587) main_fs_bigclock_pane_t1_ParamLimits

0xe5cd,	// (0x00022587) main_fs_bigclock_pane_t1

0xe5df,	// (0x00022599) main_fs_bigclock_pane_t2_ParamLimits

0xe5df,	// (0x00022599) main_fs_bigclock_pane_t2

0xe5f1,	// (0x000225ab) main_fs_bigclock_pane_t3_ParamLimits

0xe5f1,	// (0x000225ab) main_fs_bigclock_pane_t3

0x0002,

0xfe94,	// (0x00023e4e) main_fs_bigclock_pane_t_ParamLimits

0xfe94,	// (0x00023e4e) main_fs_bigclock_pane_t

0xe603,	// (0x000225bd) main_fs_bigclock_indicator_pane_g1

0x5c81,	// (0x00019c3b) ncim_query_content_pane_g2_ParamLimits

0x5c81,	// (0x00019c3b) ncim_query_content_pane_g2

0x0001,

0xfc2c,	// (0x00023be6) ncim_query_content_pane_g_ParamLimits

0xfc2c,	// (0x00023be6) ncim_query_content_pane_g

0xd3bb,	// (0x00021375) sc_clock_pane_t4_ParamLimits

0xd3bb,	// (0x00021375) sc_clock_pane_t4

0x12e6,	// (0x000152a0) main_radioblah_pane

0x4e61,	// (0x00018e1b) cell_call4_button_pane_t1_copy1_ParamLimits

0x4e61,	// (0x00018e1b) cell_call4_button_pane_t1_copy1

0xd0ba,	// (0x00021074) main_ncimui_pane_t1_ParamLimits

0xd0ba,	// (0x00021074) main_ncimui_pane_t1

0xd0cc,	// (0x00021086) main_ncimui_pane_t2_ParamLimits

0xd0cc,	// (0x00021086) main_ncimui_pane_t2

0x0002,

0xfc25,	// (0x00023bdf) main_ncimui_pane_t_ParamLimits

0xfc25,	// (0x00023bdf) main_ncimui_pane_t

0x60b5,	// (0x0001a06f) main_radioblah_anim_pane_ParamLimits

0x60b5,	// (0x0001a06f) main_radioblah_anim_pane

0x60c6,	// (0x0001a080) main_radioblah_info_pane_ParamLimits

0x60c6,	// (0x0001a080) main_radioblah_info_pane

0x60da,	// (0x0001a094) main_radioblah_pane_t1_ParamLimits

0x60da,	// (0x0001a094) main_radioblah_pane_t1

0x60f6,	// (0x0001a0b0) main_radioblah_pane_t2_ParamLimits

0x60f6,	// (0x0001a0b0) main_radioblah_pane_t2

0x0003,

0xfcc0,	// (0x00023c7a) main_radioblah_pane_t_ParamLimits

0xfcc0,	// (0x00023c7a) main_radioblah_pane_t

0xd469,	// (0x00021423) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd469,	// (0x00021423) main_radioblah_rocker_ctrl_pane

0x613e,	// (0x0001a0f8) main_radioblah_info_pane_t1_ParamLimits

0x613e,	// (0x0001a0f8) main_radioblah_info_pane_t1

0xd4ae,	// (0x00021468) main_radioblah_info_pane_t2_ParamLimits

0xd4ae,	// (0x00021468) main_radioblah_info_pane_t2

0x0003,

0xfcc9,	// (0x00023c83) main_radioblah_info_pane_t_ParamLimits

0xfcc9,	// (0x00023c83) main_radioblah_info_pane_t

0x42a9,	// (0x00018263) main_radioblah_rocker_ctrl_pane_g1

0xd556,	// (0x00021510) main_radioblah_rocker_ctrl_pane_g2

0xd55e,	// (0x00021518) main_radioblah_rocker_ctrl_pane_g3

0xd566,	// (0x00021520) main_radioblah_rocker_ctrl_pane_g4

0xd56e,	// (0x00021528) main_radioblah_rocker_ctrl_pane_g5

0xd576,	// (0x00021530) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcd2,	// (0x00023c8c) main_radioblah_rocker_ctrl_pane_g

0xd087,	// (0x00021041) main_cset_text2_pane_t1_copy1_ParamLimits

0x7fb9,	// (0x0001bf73) cam4_image_uncrop_qvga_pane

0x80b7,	// (0x0001c071) vid4_image_uncrop_qcif_pane

0x865f,	// (0x0001c619) cam6_image_uncrop_qvga_pane_ParamLimits

0x865f,	// (0x0001c619) cam6_image_uncrop_qvga_pane

0x58b3,	// (0x0001986d) vid6_image_uncrop_qcif_pane_ParamLimits

0x58b3,	// (0x0001986d) vid6_image_uncrop_qcif_pane

0x1293,	// (0x0001524d) bg_popup_preview_window_pane_cp03

0x5c33,	// (0x00019bed) list_cset_text2_pane

0x5c3b,	// (0x00019bf5) main_cset6_text2_pane_g1

0x5c43,	// (0x00019bfd) main_cset6_text2_pane_t1

0xd57e,	// (0x00021538) list_cset_text2_pane_t1_ParamLimits

0xd57e,	// (0x00021538) list_cset_text2_pane_t1

0x12e6,	// (0x000152a0) main_radioblah_pane_ParamLimits

0xd324,	// (0x000212de) main_mobtv_info_pane_t3_ParamLimits

0xd324,	// (0x000212de) main_mobtv_info_pane_t3

0xd457,	// (0x00021411) main_radioblah_pane_g1

0xd482,	// (0x0002143c) main_radioblah_info_pane_g1

0xd4fd,	// (0x000214b7) main_radioblah_info_pane_t3_ParamLimits

0xd4fd,	// (0x000214b7) main_radioblah_info_pane_t3

0x9c30,	// (0x0001dbea) highlight_cell_cale_month_pane_ParamLimits

0x9c30,	// (0x0001dbea) highlight_cell_cale_month_pane

0x1293,	// (0x0001524d) main_phob_fisheye_pane

0x4650,	// (0x0001860a) scroll_pane_cp0031_ParamLimits

0x4650,	// (0x0001860a) scroll_pane_cp0031

0x59bd,	// (0x00019977) wait_bar_pane_cp08_ParamLimits

0xcec6,	// (0x00020e80) cset_list_set_pane_copy1_ParamLimits

0x6178,	// (0x0001a132) highlight_cell_cale_month_pane_g1

0xd595,	// (0x0002154f) highlight_cell_cale_month_pane_t1

0x6180,	// (0x0001a13a) list_gen_pane_cp01

0x50b5,	// (0x0001906f) scroll_pane_01

0x62e7,	// (0x0001a2a1) list_single_double_fisheye_pane

0xd5a3,	// (0x0002155d) list_double_fisheye_pane_g1_ParamLimits

0xd5a3,	// (0x0002155d) list_double_fisheye_pane_g1

0xd5af,	// (0x00021569) list_double_fisheye_pane_g2_ParamLimits

0xd5af,	// (0x00021569) list_double_fisheye_pane_g2

0xd5c3,	// (0x0002157d) list_double_fisheye_pane_g3_ParamLimits

0xd5c3,	// (0x0002157d) list_double_fisheye_pane_g3

0x0004,

0xfcdf,	// (0x00023c99) list_double_fisheye_pane_g_ParamLimits

0xfcdf,	// (0x00023c99) list_double_fisheye_pane_g

0xd5ec,	// (0x000215a6) list_double_fisheye_pane_t1_ParamLimits

0xd5ec,	// (0x000215a6) list_double_fisheye_pane_t1

0xd607,	// (0x000215c1) list_double_fisheye_pane_t2_ParamLimits

0xd607,	// (0x000215c1) list_double_fisheye_pane_t2

0x0001,

0xfcea,	// (0x00023ca4) list_double_fisheye_pane_t_ParamLimits

0xfcea,	// (0x00023ca4) list_double_fisheye_pane_t

0x1293,	// (0x0001524d) main_call5_pane

0xd3e1,	// (0x0002139b) sc_swipe_pane_ParamLimits

0xd3e1,	// (0x0002139b) sc_swipe_pane

0xd635,	// (0x000215ef) call5_image_pane_ParamLimits

0xd635,	// (0x000215ef) call5_image_pane

0xd641,	// (0x000215fb) call5_swipe_1_pane_ParamLimits

0xd641,	// (0x000215fb) call5_swipe_1_pane

0xd64d,	// (0x00021607) call5_swipe_2_pane_ParamLimits

0xd64d,	// (0x00021607) call5_swipe_2_pane

0xd665,	// (0x0002161f) popup_call5_audio_first_window_ParamLimits

0xd665,	// (0x0002161f) popup_call5_audio_first_window

0x4506,	// (0x000184c0) call5_swipe_1_pane_g1_ParamLimits

0x4506,	// (0x000184c0) call5_swipe_1_pane_g1

0x6189,	// (0x0001a143) call5_swipe_1_pane_g2_ParamLimits

0x6189,	// (0x0001a143) call5_swipe_1_pane_g2

0x0001,

0xfcef,	// (0x00023ca9) call5_swipe_1_pane_g_ParamLimits

0xfcef,	// (0x00023ca9) call5_swipe_1_pane_g

0x6195,	// (0x0001a14f) call5_swipe_1_pane_t1_ParamLimits

0x6195,	// (0x0001a14f) call5_swipe_1_pane_t1

0x4506,	// (0x000184c0) call5_swipe_2_pane_g1_ParamLimits

0x4506,	// (0x000184c0) call5_swipe_2_pane_g1

0x61aa,	// (0x0001a164) call5_swipe_2_pane_g2_ParamLimits

0x61aa,	// (0x0001a164) call5_swipe_2_pane_g2

0x0001,

0xfcf4,	// (0x00023cae) call5_swipe_2_pane_g_ParamLimits

0xfcf4,	// (0x00023cae) call5_swipe_2_pane_g

0x61b6,	// (0x0001a170) call5_swipe_2_pane_t1_ParamLimits

0x61b6,	// (0x0001a170) call5_swipe_2_pane_t1

0x61cb,	// (0x0001a185) sc_swipe_pane_g1_ParamLimits

0x61cb,	// (0x0001a185) sc_swipe_pane_g1

0x61d8,	// (0x0001a192) sc_swipe_pane_g2_ParamLimits

0x61d8,	// (0x0001a192) sc_swipe_pane_g2

0x0001,

0xfcf9,	// (0x00023cb3) sc_swipe_pane_g_ParamLimits

0xfcf9,	// (0x00023cb3) sc_swipe_pane_g

0x61e4,	// (0x0001a19e) sc_swipe_pane_t1_ParamLimits

0x61e4,	// (0x0001a19e) sc_swipe_pane_t1

0x1293,	// (0x0001524d) main_cmail_launcher_pane

0xd671,	// (0x0002162b) aid_size_cell_cmail_l_ParamLimits

0xd671,	// (0x0002162b) aid_size_cell_cmail_l

0xd681,	// (0x0002163b) grid_cmail_l_pane_ParamLimits

0xd681,	// (0x0002163b) grid_cmail_l_pane

0xd68d,	// (0x00021647) cell_cmail_l_pane_ParamLimits

0xd68d,	// (0x00021647) cell_cmail_l_pane

0xd69f,	// (0x00021659) cell_cmail_l_pane_g1_ParamLimits

0xd69f,	// (0x00021659) cell_cmail_l_pane_g1

0xd6af,	// (0x00021669) cell_cmail_l_pane_t1_ParamLimits

0xd6af,	// (0x00021669) cell_cmail_l_pane_t1

0x61f9,	// (0x0001a1b3) cell_cmail_l_pane_t2_ParamLimits

0x61f9,	// (0x0001a1b3) cell_cmail_l_pane_t2

0x0001,

0xfcfe,	// (0x00023cb8) cell_cmail_l_pane_t_ParamLimits

0xfcfe,	// (0x00023cb8) cell_cmail_l_pane_t

0x12e6,	// (0x000152a0) grid_highlight_pane_cp018_ParamLimits

0x12e6,	// (0x000152a0) grid_highlight_pane_cp018

0x8782,	// (0x0001c73c) main2_pane_ParamLimits

0x8782,	// (0x0001c73c) main2_pane

0x1b54,	// (0x00015b0e) popup_sp_fs_action_menu_bg_pane_g1

0x1b5c,	// (0x00015b16) popup_sp_fs_action_menu_bg_pane_g2

0x1b64,	// (0x00015b1e) popup_sp_fs_action_menu_bg_pane_g3

0x1b6c,	// (0x00015b26) popup_sp_fs_action_menu_bg_pane_g4

0x1b74,	// (0x00015b2e) popup_sp_fs_action_menu_bg_pane_g5

0x1b7c,	// (0x00015b36) popup_sp_fs_action_menu_bg_pane_g6

0x1b84,	// (0x00015b3e) popup_sp_fs_action_menu_bg_pane_g7

0x1b8c,	// (0x00015b46) popup_sp_fs_action_menu_bg_pane_g8

0x1b94,	// (0x00015b4e) popup_sp_fs_action_menu_bg_pane_g9

0x1b9c,	// (0x00015b56) popup_sp_fs_action_menu_bg_pane_g10

0x1b9c,	// (0x00015b56) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x00023175) popup_sp_fs_action_menu_bg_pane_g

0x1d73,	// (0x00015d2d) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1d73,	// (0x00015d2d) list_medium_line_x2_t3_g3_g1

0x1d7f,	// (0x00015d39) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1d7f,	// (0x00015d39) list_medium_line_x2_t3_g3_g2

0x1d8b,	// (0x00015d45) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1d8b,	// (0x00015d45) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x00023225) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x00023225) list_medium_line_x2_t3_g3_g

0x1d97,	// (0x00015d51) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1d97,	// (0x00015d51) list_medium_line_x2_t3_g3_t1

0x9169,	// (0x0001d123) list_medium_line_x2_t3_g3_t2_ParamLimits

0x9169,	// (0x0001d123) list_medium_line_x2_t3_g3_t2

0x1dac,	// (0x00015d66) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1dac,	// (0x00015d66) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x0002322c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x0002322c) list_medium_line_x2_t3_g3_t

0x1d73,	// (0x00015d2d) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1d73,	// (0x00015d2d) list_medium_line_x2_t3_g2_g1

0x1d8b,	// (0x00015d45) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1d8b,	// (0x00015d45) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x00023233) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x00023233) list_medium_line_x2_t3_g2_g

0x1dc1,	// (0x00015d7b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1dc1,	// (0x00015d7b) list_medium_line_x2_t3_g2_t1

0x1dd7,	// (0x00015d91) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1dd7,	// (0x00015d91) list_medium_line_x2_t3_g2_t2

0x1dac,	// (0x00015d66) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1dac,	// (0x00015d66) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x00023238) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x00023238) list_medium_line_x2_t3_g2_t

0x1d73,	// (0x00015d2d) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1d73,	// (0x00015d2d) list_medium_line_x2_t4_g4_g1

0x1de9,	// (0x00015da3) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1de9,	// (0x00015da3) list_medium_line_x2_t4_g4_g2

0x1d7f,	// (0x00015d39) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1d7f,	// (0x00015d39) list_medium_line_x2_t4_g4_g3

0x1df5,	// (0x00015daf) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1df5,	// (0x00015daf) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0002323f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0002323f) list_medium_line_x2_t4_g4_g

0x917b,	// (0x0001d135) list_medium_line_x2_t4_g4_t1_ParamLimits

0x917b,	// (0x0001d135) list_medium_line_x2_t4_g4_t1

0x9195,	// (0x0001d14f) list_medium_line_x2_t4_g4_t2_ParamLimits

0x9195,	// (0x0001d14f) list_medium_line_x2_t4_g4_t2

0x91aa,	// (0x0001d164) list_medium_line_x2_t4_g4_t3_ParamLimits

0x91aa,	// (0x0001d164) list_medium_line_x2_t4_g4_t3

0x1e01,	// (0x00015dbb) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1e01,	// (0x00015dbb) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x00023248) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x00023248) list_medium_line_x2_t4_g4_t

0x1d73,	// (0x00015d2d) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1d73,	// (0x00015d2d) list_medium_line_x2_t2_g4_g1

0x1de9,	// (0x00015da3) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1de9,	// (0x00015da3) list_medium_line_x2_t2_g4_g2

0x1d7f,	// (0x00015d39) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1d7f,	// (0x00015d39) list_medium_line_x2_t2_g4_g3

0x1d8b,	// (0x00015d45) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1d8b,	// (0x00015d45) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x000232af) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x000232af) list_medium_line_x2_t2_g4_g

0x2101,	// (0x000160bb) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2101,	// (0x000160bb) list_medium_line_x2_t2_g4_t1

0x1dac,	// (0x00015d66) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1dac,	// (0x00015d66) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x000232b8) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x000232b8) list_medium_line_x2_t2_g4_t

0x1d73,	// (0x00015d2d) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1d73,	// (0x00015d2d) list_medium_line_x2_t2_g3_g1

0x1d7f,	// (0x00015d39) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1d7f,	// (0x00015d39) list_medium_line_x2_t2_g3_g2

0x1d8b,	// (0x00015d45) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1d8b,	// (0x00015d45) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x00023225) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x00023225) list_medium_line_x2_t2_g3_g

0x2116,	// (0x000160d0) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2116,	// (0x000160d0) list_medium_line_x2_t2_g3_t1

0x1dac,	// (0x00015d66) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1dac,	// (0x00015d66) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x000232bd) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x000232bd) list_medium_line_x2_t2_g3_t

0x9d56,	// (0x0001dd10) main_sp_fs_list_pane_ParamLimits

0x9d56,	// (0x0001dd10) main_sp_fs_list_pane

0x9d63,	// (0x0001dd1d) sp_fs_scroll_pane_ParamLimits

0x9d63,	// (0x0001dd1d) sp_fs_scroll_pane

0x9d70,	// (0x0001dd2a) list_medium_line_x2_t3_t1

0x9d80,	// (0x0001dd3a) list_medium_line_x2_t3_t2

0x2370,	// (0x0001632a) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x00023308) list_medium_line_x2_t3_t

0x9d8e,	// (0x0001dd48) list_medium_line_x3_t4_t1

0x9d9e,	// (0x0001dd58) list_medium_line_x3_t4_t2

0x237e,	// (0x00016338) list_medium_line_x3_t4_t3

0x238c,	// (0x00016346) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x0002330f) list_medium_line_x3_t4_t

0x9dac,	// (0x0001dd66) list_medium_line_x4_t5_t1

0x9dbc,	// (0x0001dd76) list_medium_line_x4_t5_t2

0x237e,	// (0x00016338) list_medium_line_x4_t5_t3

0x239a,	// (0x00016354) list_medium_line_x4_t5_t4

0x238c,	// (0x00016346) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x00023318) list_medium_line_x4_t5_t

0x1d73,	// (0x00015d2d) list_medium_line_t4_g4_g1_ParamLimits

0x1d73,	// (0x00015d2d) list_medium_line_t4_g4_g1

0x1df5,	// (0x00015daf) list_medium_line_t4_g4_g2_ParamLimits

0x1df5,	// (0x00015daf) list_medium_line_t4_g4_g2

0x23a8,	// (0x00016362) list_medium_line_t4_g4_g3_ParamLimits

0x23a8,	// (0x00016362) list_medium_line_t4_g4_g3

0x1d8b,	// (0x00015d45) list_medium_line_t4_g4_g4_ParamLimits

0x1d8b,	// (0x00015d45) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x00023323) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x00023323) list_medium_line_t4_g4_g

0x23b4,	// (0x0001636e) list_medium_line_t4_g4_t1_ParamLimits

0x23b4,	// (0x0001636e) list_medium_line_t4_g4_t1

0x23c9,	// (0x00016383) list_medium_line_t4_g4_t2_ParamLimits

0x23c9,	// (0x00016383) list_medium_line_t4_g4_t2

0x23de,	// (0x00016398) list_medium_line_t4_g4_t3_ParamLimits

0x23de,	// (0x00016398) list_medium_line_t4_g4_t3

0x23f3,	// (0x000163ad) list_medium_line_t4_g4_t4_ParamLimits

0x23f3,	// (0x000163ad) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x0002332c) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x0002332c) list_medium_line_t4_g4_t

0x9e69,	// (0x0001de23) chi_dic_find_pane_g1

0xab22,	// (0x0001eadc) main_tport_pane

0x5216,	// (0x000191d0) list_medium_line_plain_t1

0x1d73,	// (0x00015d2d) list_medium_line_t2_g2_g1_ParamLimits

0x1d73,	// (0x00015d2d) list_medium_line_t2_g2_g1

0x1d7f,	// (0x00015d39) list_medium_line_t2_g2_g2_ParamLimits

0x1d7f,	// (0x00015d39) list_medium_line_t2_g2_g2

0x0001,

0xfa41,	// (0x000239fb) list_medium_line_t2_g2_g_ParamLimits

0xfa41,	// (0x000239fb) list_medium_line_t2_g2_g

0xc5fe,	// (0x000205b8) list_medium_line_t2_g2_t1_ParamLimits

0xc5fe,	// (0x000205b8) list_medium_line_t2_g2_t1

0xc615,	// (0x000205cf) list_medium_line_t2_g2_t2_ParamLimits

0xc615,	// (0x000205cf) list_medium_line_t2_g2_t2

0x0001,

0xfa46,	// (0x00023a00) list_medium_line_t2_g2_t_ParamLimits

0xfa46,	// (0x00023a00) list_medium_line_t2_g2_t

0x5634,	// (0x000195ee) aid_sp_fs_list_icon_a_sm

0x563c,	// (0x000195f6) aid_sp_fs_list_icon_d

0x5644,	// (0x000195fe) aid_sp_fs_text_primary

0x564d,	// (0x00019607) aid_sp_fs_text_secondary

0x5656,	// (0x00019610) list_medium_line

0x5656,	// (0x00019610) list_medium_line_g2

0x5656,	// (0x00019610) list_medium_line_g3

0x5656,	// (0x00019610) list_medium_line_plain

0x5656,	// (0x00019610) list_medium_line_plain_t2

0x5656,	// (0x00019610) list_medium_line_plain_t3

0x5656,	// (0x00019610) list_medium_line_right_icon

0x5656,	// (0x00019610) list_medium_line_right_iconx2

0x5656,	// (0x00019610) list_medium_line_t2

0x5656,	// (0x00019610) list_medium_line_t2_g2

0x5656,	// (0x00019610) list_medium_line_t2_g3

0x5656,	// (0x00019610) list_medium_line_t2_right_icon

0x5656,	// (0x00019610) list_medium_line_t2_right_iconx2

0x5656,	// (0x00019610) list_medium_line_t3

0x5656,	// (0x00019610) list_medium_line_t3_g2

0x5656,	// (0x00019610) list_medium_line_t3_g3

0x5656,	// (0x00019610) list_medium_line_t3_right_iconx2

0x565f,	// (0x00019619) list_medium_line_t4_g4

0x5668,	// (0x00019622) list_medium_line_x2

0x5668,	// (0x00019622) list_medium_line_x2_t2_g2

0x5668,	// (0x00019622) list_medium_line_x2_t2_g3

0x5668,	// (0x00019622) list_medium_line_x2_t2_g4

0x5668,	// (0x00019622) list_medium_line_x2_t3

0x5668,	// (0x00019622) list_medium_line_x2_t3_g2

0x5668,	// (0x00019622) list_medium_line_x2_t3_g3

0x5668,	// (0x00019622) list_medium_line_x2_t3_g4

0x5668,	// (0x00019622) list_medium_line_x2_t4_g2

0x5668,	// (0x00019622) list_medium_line_x2_t4_g4

0x5671,	// (0x0001962b) list_medium_line_x3

0x5671,	// (0x0001962b) list_medium_line_x3_t4

0x5671,	// (0x0001962b) list_medium_line_x3_t4_g4

0x565f,	// (0x00019619) list_medium_line_x4_t4

0x565f,	// (0x00019619) list_medium_line_x4_t4_g7

0x565f,	// (0x00019619) list_medium_line_x4_t5

0x567a,	// (0x00019634) list_single_fs_dyc_pane_ParamLimits

0x567a,	// (0x00019634) list_single_fs_dyc_pane

0x1d73,	// (0x00015d2d) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1d73,	// (0x00015d2d) list_medium_line_x4_t4_g7_g1

0x5b68,	// (0x00019b22) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5b68,	// (0x00019b22) list_medium_line_x4_t4_g7_g2

0x5b74,	// (0x00019b2e) list_medium_line_x4_t4_g7_g3_ParamLimits

0x5b74,	// (0x00019b2e) list_medium_line_x4_t4_g7_g3

0x5b83,	// (0x00019b3d) list_medium_line_x4_t4_g7_g4_ParamLimits

0x5b83,	// (0x00019b3d) list_medium_line_x4_t4_g7_g4

0x5b8f,	// (0x00019b49) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5b8f,	// (0x00019b49) list_medium_line_x4_t4_g7_g5

0x5b9e,	// (0x00019b58) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5b9e,	// (0x00019b58) list_medium_line_x4_t4_g7_g6

0x5bad,	// (0x00019b67) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5bad,	// (0x00019b67) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc0b,	// (0x00023bc5) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc0b,	// (0x00023bc5) list_medium_line_x4_t4_g7_g

0x5bb9,	// (0x00019b73) list_medium_line_x4_t4_g7_t1_ParamLimits

0x5bb9,	// (0x00019b73) list_medium_line_x4_t4_g7_t1

0x5bce,	// (0x00019b88) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5bce,	// (0x00019b88) list_medium_line_x4_t4_g7_t2

0x5be3,	// (0x00019b9d) list_medium_line_x4_t4_g7_t3_ParamLimits

0x5be3,	// (0x00019b9d) list_medium_line_x4_t4_g7_t3

0x5bf8,	// (0x00019bb2) list_medium_line_x4_t4_g7_t4_ParamLimits

0x5bf8,	// (0x00019bb2) list_medium_line_x4_t4_g7_t4

0x5c0a,	// (0x00019bc4) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5c0a,	// (0x00019bc4) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc1a,	// (0x00023bd4) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc1a,	// (0x00023bd4) list_medium_line_x4_t4_g7_t

0x5c1c,	// (0x00019bd6) list_single_dyc_row_pane_ParamLimits

0x5c1c,	// (0x00019bd6) list_single_dyc_row_pane

0xd629,	// (0x000215e3) call5_gesture_pane_ParamLimits

0xd629,	// (0x000215e3) call5_gesture_pane

0xd659,	// (0x00021613) call5_windows_pane_ParamLimits

0xd659,	// (0x00021613) call5_windows_pane

0xd6c5,	// (0x0002167f) call5_swipe_1_pane_cp_ParamLimits

0xd6c5,	// (0x0002167f) call5_swipe_1_pane_cp

0xd6d1,	// (0x0002168b) call5_swipe_2_pane_cp_ParamLimits

0xd6d1,	// (0x0002168b) call5_swipe_2_pane_cp

0x28be,	// (0x00016878) call5_image_pane_cp

0xd6dd,	// (0x00021697) popup_call5_audio_first_window_cp_ParamLimits

0xd6dd,	// (0x00021697) popup_call5_audio_first_window_cp

0x61cb,	// (0x0001a185) call5_swipe_1_pane_g1_cp_ParamLimits

0x61cb,	// (0x0001a185) call5_swipe_1_pane_g1_cp

0x620b,	// (0x0001a1c5) call5_swipe_1_pane_g2_cp

0x61e4,	// (0x0001a19e) call5_swipe_1_pane_t1_cp_ParamLimits

0x61e4,	// (0x0001a19e) call5_swipe_1_pane_t1_cp

0x61cb,	// (0x0001a185) call5_swipe_2_pane_g1_cp_ParamLimits

0x61cb,	// (0x0001a185) call5_swipe_2_pane_g1_cp

0x6213,	// (0x0001a1cd) call5_swipe_2_pane_g2_cp

0x621b,	// (0x0001a1d5) call5_swipe_2_pane_t1_cp_ParamLimits

0x621b,	// (0x0001a1d5) call5_swipe_2_pane_t1_cp

0x12e6,	// (0x000152a0) main_sp_fs_email_pane

0x6230,	// (0x0001a1ea) main_sp_fs_listscroll_pane_te

0xd6e9,	// (0x000216a3) popup_sp_fs_action_menu_pane_ParamLimits

0xd6e9,	// (0x000216a3) popup_sp_fs_action_menu_pane

0x42a9,	// (0x00018263) bg_sp_fs_ctrlbar_pane_g1

0x6239,	// (0x0001a1f3) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x6242,	// (0x0001a1fc) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x624b,	// (0x0001a205) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x42a9,	// (0x00018263) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd03,	// (0x00023cbd) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x4096,	// (0x00018050) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x4096,	// (0x00018050) bg_sp_fs_ctrlbar_ddmenu_pane

0x6254,	// (0x0001a20e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x6254,	// (0x0001a20e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x1d73,	// (0x00015d2d) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x1d73,	// (0x00015d2d) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd0c,	// (0x00023cc6) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd0c,	// (0x00023cc6) main_sp_fs_ctrlbar_ddmenu_pane_g

0x6260,	// (0x0001a21a) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x6260,	// (0x0001a21a) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x627a,	// (0x0001a234) list_medium_line_t2_right_icon_g1

0xd719,	// (0x000216d3) list_medium_line_t2_right_icon_t1

0xd728,	// (0x000216e2) list_medium_line_t2_right_icon_t2

0x0001,

0xfd11,	// (0x00023ccb) list_medium_line_t2_right_icon_t

0x3db4,	// (0x00017d6e) bg_sp_fs_ctrlbar_pane_ParamLimits

0x3db4,	// (0x00017d6e) bg_sp_fs_ctrlbar_pane

0xd78b,	// (0x00021745) main_sp_fs_ctrlbar_button_pane_cp01

0xd793,	// (0x0002174d) main_sp_fs_ctrlbar_ddmenu_pane

0x62ba,	// (0x0001a274) main_sp_fs_ctrlbar_pane_g1

0x62c6,	// (0x0001a280) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd16,	// (0x00023cd0) main_sp_fs_ctrlbar_pane_g

0x62d2,	// (0x0001a28c) main_sp_fs_ctrlbar_pane_t1

0xd79d,	// (0x00021757) main_sp_fs_ctrlbar_pane

0xd7b5,	// (0x0002176f) main_sp_fs_listscroll_pane_te_cp01

0xd7c6,	// (0x00021780) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xd7c6,	// (0x00021780) popup_sp_fs_action_menu_pane_cp01

0x12e6,	// (0x000152a0) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x12e6,	// (0x000152a0) bg_sp_fs_highlight_list_pane_cp01

0xd7e2,	// (0x0002179c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd7e2,	// (0x0002179c) sp_fs_action_menu_list_gene_pane_g1

0x6300,	// (0x0001a2ba) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x6300,	// (0x0001a2ba) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd1b,	// (0x00023cd5) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd1b,	// (0x00023cd5) sp_fs_action_menu_list_gene_pane_g

0xd7f1,	// (0x000217ab) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd7f1,	// (0x000217ab) sp_fs_action_menu_list_gene_pane_t1

0xd809,	// (0x000217c3) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd809,	// (0x000217c3) sp_fs_action_menu_list_gene_pane

0x630d,	// (0x0001a2c7) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x630d,	// (0x0001a2c7) popup_sp_fs_action_menu_bg_pane

0xd826,	// (0x000217e0) sp_fs_action_menu_list_pane_ParamLimits

0xd826,	// (0x000217e0) sp_fs_action_menu_list_pane

0x631b,	// (0x0001a2d5) sp_fs_scroll_pane_cp01_ParamLimits

0x631b,	// (0x0001a2d5) sp_fs_scroll_pane_cp01

0xd842,	// (0x000217fc) list_medium_line_plain_t2_t1

0xd851,	// (0x0002180b) list_medium_line_plain_t2_t2

0x0001,

0xfd20,	// (0x00023cda) list_medium_line_plain_t2_t

0xd85f,	// (0x00021819) list_medium_line_plain_t3_t1

0xd86f,	// (0x00021829) list_medium_line_plain_t3_t2

0xd87d,	// (0x00021837) list_medium_line_plain_t3_t3

0x0002,

0xfd25,	// (0x00023cdf) list_medium_line_plain_t3_t

0x1d73,	// (0x00015d2d) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1d73,	// (0x00015d2d) list_medium_line_x2_t2_g2_g1

0x1d8b,	// (0x00015d45) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1d8b,	// (0x00015d45) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x00023233) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x00023233) list_medium_line_x2_t2_g2_g

0x23b4,	// (0x0001636e) list_medium_line_x2_t2_g2_t1_ParamLimits

0x23b4,	// (0x0001636e) list_medium_line_x2_t2_g2_t1

0x1dac,	// (0x00015d66) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1dac,	// (0x00015d66) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd2c,	// (0x00023ce6) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd2c,	// (0x00023ce6) list_medium_line_x2_t2_g2_t

0x1d73,	// (0x00015d2d) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1d73,	// (0x00015d2d) list_medium_line_x2_t4_g2_g1

0x1d8b,	// (0x00015d45) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1d8b,	// (0x00015d45) list_medium_line_x2_t4_g2_g2

0x0001,

0xf279,	// (0x00023233) list_medium_line_x2_t4_g2_g_ParamLimits

0xf279,	// (0x00023233) list_medium_line_x2_t4_g2_g

0xd88b,	// (0x00021845) list_medium_line_x2_t4_g2_t1_ParamLimits

0xd88b,	// (0x00021845) list_medium_line_x2_t4_g2_t1

0xd8a5,	// (0x0002185f) list_medium_line_x2_t4_g2_t2_ParamLimits

0xd8a5,	// (0x0002185f) list_medium_line_x2_t4_g2_t2

0xd8ba,	// (0x00021874) list_medium_line_x2_t4_g2_t3_ParamLimits

0xd8ba,	// (0x00021874) list_medium_line_x2_t4_g2_t3

0x1dac,	// (0x00015d66) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1dac,	// (0x00015d66) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd31,	// (0x00023ceb) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd31,	// (0x00023ceb) list_medium_line_x2_t4_g2_t

0x6341,	// (0x0001a2fb) list_medium_line_t3_right_iconx2_g1

0x627a,	// (0x0001a234) list_medium_line_t3_right_iconx2_g2

0xd8cf,	// (0x00021889) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd3a,	// (0x00023cf4) list_medium_line_t3_right_iconx2_g

0x62f0,	// (0x0001a2aa) list_medium_line_t3_right_iconx2_t1

0xd8d7,	// (0x00021891) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd41,	// (0x00023cfb) list_medium_line_t3_right_iconx2_t

0x1d73,	// (0x00015d2d) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1d73,	// (0x00015d2d) list_medium_line_x3_t4_g4_g1

0x1d7f,	// (0x00015d39) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1d7f,	// (0x00015d39) list_medium_line_x3_t4_g4_g2

0x1df5,	// (0x00015daf) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1df5,	// (0x00015daf) list_medium_line_x3_t4_g4_g3

0x6349,	// (0x0001a303) list_medium_line_x3_t4_g4_g4_ParamLimits

0x6349,	// (0x0001a303) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd46,	// (0x00023d00) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd46,	// (0x00023d00) list_medium_line_x3_t4_g4_g

0xc5fe,	// (0x000205b8) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc5fe,	// (0x000205b8) list_medium_line_x3_t4_g4_t1

0xc615,	// (0x000205cf) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc615,	// (0x000205cf) list_medium_line_x3_t4_g4_t2

0x23c9,	// (0x00016383) list_medium_line_x3_t4_g4_t3_ParamLimits

0x23c9,	// (0x00016383) list_medium_line_x3_t4_g4_t3

0x6355,	// (0x0001a30f) list_medium_line_x3_t4_g4_t4_ParamLimits

0x6355,	// (0x0001a30f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd4f,	// (0x00023d09) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd4f,	// (0x00023d09) list_medium_line_x3_t4_g4_t

0xd8e5,	// (0x0002189f) list_single_dyc_row_text_pane_t1_ParamLimits

0xd8e5,	// (0x0002189f) list_single_dyc_row_text_pane_t1

0xd91c,	// (0x000218d6) list_single_dyc_row_text_pane_t2_ParamLimits

0xd91c,	// (0x000218d6) list_single_dyc_row_text_pane_t2

0x6372,	// (0x0001a32c) list_single_dyc_row_text_pane_t3_ParamLimits

0x6372,	// (0x0001a32c) list_single_dyc_row_text_pane_t3

0x0002,

0xfd58,	// (0x00023d12) list_single_dyc_row_text_pane_t_ParamLimits

0xfd58,	// (0x00023d12) list_single_dyc_row_text_pane_t

0x6384,	// (0x0001a33e) list_single_dyc_row_pane_g1_ParamLimits

0x6384,	// (0x0001a33e) list_single_dyc_row_pane_g1

0x6390,	// (0x0001a34a) list_single_dyc_row_pane_g2_ParamLimits

0x6390,	// (0x0001a34a) list_single_dyc_row_pane_g2

0x639c,	// (0x0001a356) list_single_dyc_row_pane_g3_ParamLimits

0x639c,	// (0x0001a356) list_single_dyc_row_pane_g3

0x63a8,	// (0x0001a362) list_single_dyc_row_pane_g4_ParamLimits

0x63a8,	// (0x0001a362) list_single_dyc_row_pane_g4

0x0003,

0xfd5f,	// (0x00023d19) list_single_dyc_row_pane_g_ParamLimits

0xfd5f,	// (0x00023d19) list_single_dyc_row_pane_g

0x63b4,	// (0x0001a36e) list_single_dyc_row_text_pane_ParamLimits

0x63b4,	// (0x0001a36e) list_single_dyc_row_text_pane

0x1293,	// (0x0001524d) bg_sp_fs_scroll_pane

0x63d3,	// (0x0001a38d) thumb_sp_fs_scroll_pane

0x1d73,	// (0x00015d2d) list_medium_line_g1_ParamLimits

0x1d73,	// (0x00015d2d) list_medium_line_g1

0x23b4,	// (0x0001636e) list_medium_line_t1_ParamLimits

0x23b4,	// (0x0001636e) list_medium_line_t1

0x1d73,	// (0x00015d2d) list_medium_line_x2_g1_ParamLimits

0x1d73,	// (0x00015d2d) list_medium_line_x2_g1

0x1d7f,	// (0x00015d39) list_medium_line_x2_g2_ParamLimits

0x1d7f,	// (0x00015d39) list_medium_line_x2_g2

0x0001,

0xfa41,	// (0x000239fb) list_medium_line_x2_g_ParamLimits

0xfa41,	// (0x000239fb) list_medium_line_x2_g

0x63dc,	// (0x0001a396) list_medium_line_x2_t1_ParamLimits

0x63dc,	// (0x0001a396) list_medium_line_x2_t1

0x1d73,	// (0x00015d2d) list_medium_line_x3_g1_ParamLimits

0x1d73,	// (0x00015d2d) list_medium_line_x3_g1

0x1d7f,	// (0x00015d39) list_medium_line_x3_g2_ParamLimits

0x1d7f,	// (0x00015d39) list_medium_line_x3_g2

0x0001,

0xfa41,	// (0x000239fb) list_medium_line_x3_g_ParamLimits

0xfa41,	// (0x000239fb) list_medium_line_x3_g

0x63dc,	// (0x0001a396) list_medium_line_x3_t1_ParamLimits

0x63dc,	// (0x0001a396) list_medium_line_x3_t1

0x63f2,	// (0x0001a3ac) thumb_sp_fs_scroll_pane_g1

0x63fb,	// (0x0001a3b5) thumb_sp_fs_scroll_pane_g2

0x6404,	// (0x0001a3be) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd68,	// (0x00023d22) thumb_sp_fs_scroll_pane_g

0x63f2,	// (0x0001a3ac) bg_sp_fs_scroll_pane_g1

0x63fb,	// (0x0001a3b5) bg_sp_fs_scroll_pane_g2

0x6404,	// (0x0001a3be) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd68,	// (0x00023d22) bg_sp_fs_scroll_pane_g

0x1d73,	// (0x00015d2d) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1d73,	// (0x00015d2d) list_medium_line_x2_t3_g4_g1

0x1de9,	// (0x00015da3) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1de9,	// (0x00015da3) list_medium_line_x2_t3_g4_g2

0x1d7f,	// (0x00015d39) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1d7f,	// (0x00015d39) list_medium_line_x2_t3_g4_g3

0x1d8b,	// (0x00015d45) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1d8b,	// (0x00015d45) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x000232af) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x000232af) list_medium_line_x2_t3_g4_g

0xd973,	// (0x0002192d) list_medium_line_x2_t3_g4_t1_ParamLimits

0xd973,	// (0x0002192d) list_medium_line_x2_t3_g4_t1

0xd989,	// (0x00021943) list_medium_line_x2_t3_g4_t2_ParamLimits

0xd989,	// (0x00021943) list_medium_line_x2_t3_g4_t2

0x1dac,	// (0x00015d66) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1dac,	// (0x00015d66) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd6f,	// (0x00023d29) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd6f,	// (0x00023d29) list_medium_line_x2_t3_g4_t

0x1d73,	// (0x00015d2d) list_medium_line_g2_g1_ParamLimits

0x1d73,	// (0x00015d2d) list_medium_line_g2_g1

0x1d7f,	// (0x00015d39) list_medium_line_g2_g2_ParamLimits

0x1d7f,	// (0x00015d39) list_medium_line_g2_g2

0x0001,

0xfa41,	// (0x000239fb) list_medium_line_g2_g_ParamLimits

0xfa41,	// (0x000239fb) list_medium_line_g2_g

0x2116,	// (0x000160d0) list_medium_line_g2_t1_ParamLimits

0x2116,	// (0x000160d0) list_medium_line_g2_t1

0x1d73,	// (0x00015d2d) list_medium_line_t3_g2_g1_ParamLimits

0x1d73,	// (0x00015d2d) list_medium_line_t3_g2_g1

0x1d7f,	// (0x00015d39) list_medium_line_t3_g2_g2_ParamLimits

0x1d7f,	// (0x00015d39) list_medium_line_t3_g2_g2

0x0001,

0xfa41,	// (0x000239fb) list_medium_line_t3_g2_g_ParamLimits

0xfa41,	// (0x000239fb) list_medium_line_t3_g2_g

0xd9a2,	// (0x0002195c) list_medium_line_t3_g2_t1_ParamLimits

0xd9a2,	// (0x0002195c) list_medium_line_t3_g2_t1

0xd9b9,	// (0x00021973) list_medium_line_t3_g2_t2_ParamLimits

0xd9b9,	// (0x00021973) list_medium_line_t3_g2_t2

0xd9ce,	// (0x00021988) list_medium_line_t3_g2_t3_ParamLimits

0xd9ce,	// (0x00021988) list_medium_line_t3_g2_t3

0x0002,

0xfd76,	// (0x00023d30) list_medium_line_t3_g2_t_ParamLimits

0xfd76,	// (0x00023d30) list_medium_line_t3_g2_t

0x627a,	// (0x0001a234) list_medium_line_right_icon_g1

0x640d,	// (0x0001a3c7) list_medium_line_right_icon_t1

0x1d73,	// (0x00015d2d) list_medium_line_t2_g1_ParamLimits

0x1d73,	// (0x00015d2d) list_medium_line_t2_g1

0xd9e3,	// (0x0002199d) list_medium_line_t2_t1_ParamLimits

0xd9e3,	// (0x0002199d) list_medium_line_t2_t1

0xd9fc,	// (0x000219b6) list_medium_line_t2_t2_ParamLimits

0xd9fc,	// (0x000219b6) list_medium_line_t2_t2

0x0001,

0xfd7d,	// (0x00023d37) list_medium_line_t2_t_ParamLimits

0xfd7d,	// (0x00023d37) list_medium_line_t2_t

0x1d73,	// (0x00015d2d) list_medium_line_t3_g1_ParamLimits

0x1d73,	// (0x00015d2d) list_medium_line_t3_g1

0xda11,	// (0x000219cb) list_medium_line_t3_t1_ParamLimits

0xda11,	// (0x000219cb) list_medium_line_t3_t1

0xda28,	// (0x000219e2) list_medium_line_t3_t2_ParamLimits

0xda28,	// (0x000219e2) list_medium_line_t3_t2

0x1dd7,	// (0x00015d91) list_medium_line_t3_t3_ParamLimits

0x1dd7,	// (0x00015d91) list_medium_line_t3_t3

0x0002,

0xfd82,	// (0x00023d3c) list_medium_line_t3_t_ParamLimits

0xfd82,	// (0x00023d3c) list_medium_line_t3_t

0x1d73,	// (0x00015d2d) list_medium_line_g3_g1_ParamLimits

0x1d73,	// (0x00015d2d) list_medium_line_g3_g1

0x1de9,	// (0x00015da3) list_medium_line_g3_g2_ParamLimits

0x1de9,	// (0x00015da3) list_medium_line_g3_g2

0x1d7f,	// (0x00015d39) list_medium_line_g3_g3_ParamLimits

0x1d7f,	// (0x00015d39) list_medium_line_g3_g3

0x0002,

0xfd89,	// (0x00023d43) list_medium_line_g3_g_ParamLimits

0xfd89,	// (0x00023d43) list_medium_line_g3_g

0x2101,	// (0x000160bb) list_medium_line_g3_t1_ParamLimits

0x2101,	// (0x000160bb) list_medium_line_g3_t1

0x1d73,	// (0x00015d2d) list_medium_line_t2_g3_g1_ParamLimits

0x1d73,	// (0x00015d2d) list_medium_line_t2_g3_g1

0x1de9,	// (0x00015da3) list_medium_line_t2_g3_g2_ParamLimits

0x1de9,	// (0x00015da3) list_medium_line_t2_g3_g2

0x1d7f,	// (0x00015d39) list_medium_line_t2_g3_g3_ParamLimits

0x1d7f,	// (0x00015d39) list_medium_line_t2_g3_g3

0x0002,

0xfd89,	// (0x00023d43) list_medium_line_t2_g3_g_ParamLimits

0xfd89,	// (0x00023d43) list_medium_line_t2_g3_g

0xda3d,	// (0x000219f7) list_medium_line_t2_g3_t1_ParamLimits

0xda3d,	// (0x000219f7) list_medium_line_t2_g3_t1

0xda54,	// (0x00021a0e) list_medium_line_t2_g3_t2_ParamLimits

0xda54,	// (0x00021a0e) list_medium_line_t2_g3_t2

0x0001,

0xfd90,	// (0x00023d4a) list_medium_line_t2_g3_t_ParamLimits

0xfd90,	// (0x00023d4a) list_medium_line_t2_g3_t

0x1d73,	// (0x00015d2d) list_medium_line_t3_g3_g1_ParamLimits

0x1d73,	// (0x00015d2d) list_medium_line_t3_g3_g1

0x1de9,	// (0x00015da3) list_medium_line_t3_g3_g2_ParamLimits

0x1de9,	// (0x00015da3) list_medium_line_t3_g3_g2

0x1d7f,	// (0x00015d39) list_medium_line_t3_g3_g3_ParamLimits

0x1d7f,	// (0x00015d39) list_medium_line_t3_g3_g3

0x0002,

0xfd89,	// (0x00023d43) list_medium_line_t3_g3_g_ParamLimits

0xfd89,	// (0x00023d43) list_medium_line_t3_g3_g

0xda69,	// (0x00021a23) list_medium_line_t3_g3_t1_ParamLimits

0xda69,	// (0x00021a23) list_medium_line_t3_g3_t1

0xda7d,	// (0x00021a37) list_medium_line_t3_g3_t2_ParamLimits

0xda7d,	// (0x00021a37) list_medium_line_t3_g3_t2

0xda8f,	// (0x00021a49) list_medium_line_t3_g3_t3_ParamLimits

0xda8f,	// (0x00021a49) list_medium_line_t3_g3_t3

0x0002,

0xfd95,	// (0x00023d4f) list_medium_line_t3_g3_t_ParamLimits

0xfd95,	// (0x00023d4f) list_medium_line_t3_g3_t

0x6341,	// (0x0001a2fb) list_medium_line_right_iconx2_g1

0x627a,	// (0x0001a234) list_medium_line_right_iconx2_g2

0x0001,

0xfd9c,	// (0x00023d56) list_medium_line_right_iconx2_g

0x641b,	// (0x0001a3d5) list_medium_line_right_iconx2_t1

0x6341,	// (0x0001a2fb) list_medium_line_t2_right_iconx2_g1

0x627a,	// (0x0001a234) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd9c,	// (0x00023d56) list_medium_line_t2_right_iconx2_g

0xdaa1,	// (0x00021a5b) list_medium_line_t2_right_iconx2_t1

0xdab1,	// (0x00021a6b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfda1,	// (0x00023d5b) list_medium_line_t2_right_iconx2_t

0x5216,	// (0x000191d0) list_medium_line_x4_t4_t1

0xdabf,	// (0x00021a79) list_medium_line_x4_t4_t2

0xdacd,	// (0x00021a87) list_medium_line_x4_t4_t3

0xdadb,	// (0x00021a95) list_medium_line_x4_t4_t4

0x0003,

0xfda6,	// (0x00023d60) list_medium_line_x4_t4_t

0xdb0e,	// (0x00021ac8) tport_appsw_pane_ParamLimits

0xdb0e,	// (0x00021ac8) tport_appsw_pane

0xdb1a,	// (0x00021ad4) tport_contact_pane_ParamLimits

0xdb1a,	// (0x00021ad4) tport_contact_pane

0xdb28,	// (0x00021ae2) tport_listscroll_pane_ParamLimits

0xdb28,	// (0x00021ae2) tport_listscroll_pane

0xdb36,	// (0x00021af0) cell_tport_appsw_pane_ParamLimits

0xdb36,	// (0x00021af0) cell_tport_appsw_pane

0x45df,	// (0x00018599) tport_appsw_pane_g1_ParamLimits

0x45df,	// (0x00018599) tport_appsw_pane_g1

0x6429,	// (0x0001a3e3) tport_contact_pane_g1

0x6432,	// (0x0001a3ec) tport_contact_pane_t1

0x6440,	// (0x0001a3fa) tport_contact_pane_t2

0x0001,

0xfdaf,	// (0x00023d69) tport_contact_pane_t

0x644e,	// (0x0001a408) list_tport_pane

0x1bae,	// (0x00015b68) scroll_pane_cp_030

0x645f,	// (0x0001a419) cell_tport_appsw_pane_g1

0x646f,	// (0x0001a429) cell_tport_appsw_pane_t1

0x1293,	// (0x0001524d) grid_highlight_pane_cp019

0xdb5d,	// (0x00021b17) list_tport_double_graphic_pane_ParamLimits

0xdb5d,	// (0x00021b17) list_tport_double_graphic_pane

0x12e6,	// (0x000152a0) list_highlight_pane_cp023_ParamLimits

0x12e6,	// (0x000152a0) list_highlight_pane_cp023

0xdb6a,	// (0x00021b24) list_tport_double_graphic_pane_g1_ParamLimits

0xdb6a,	// (0x00021b24) list_tport_double_graphic_pane_g1

0xdb77,	// (0x00021b31) list_tport_double_graphic_pane_t1_ParamLimits

0xdb77,	// (0x00021b31) list_tport_double_graphic_pane_t1

0xdb8c,	// (0x00021b46) list_tport_double_graphic_pane_t2_ParamLimits

0xdb8c,	// (0x00021b46) list_tport_double_graphic_pane_t2

0x0001,

0xfdbb,	// (0x00023d75) list_tport_double_graphic_pane_t_ParamLimits

0xfdbb,	// (0x00023d75) list_tport_double_graphic_pane_t

0x1293,	// (0x0001524d) main_cale_note_pane

0x82a2,	// (0x0001c25c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x82a2,	// (0x0001c25c) cell_vitu2_function_top_wide_pane_cp01

0xd336,	// (0x000212f0) wait_bar_pane_cp05_ParamLimits

0x1293,	// (0x0001524d) listscroll_cmail_pane

0x647d,	// (0x0001a437) list_cmail_pane

0xdb9e,	// (0x00021b58) list_cmail_body_pane

0xdb9e,	// (0x00021b58) list_single_cmail_header_caption_pane

0xdbb6,	// (0x00021b70) list_single_cmail_header_detail_pane_ParamLimits

0xdbb6,	// (0x00021b70) list_single_cmail_header_detail_pane

0xdbe0,	// (0x00021b9a) list_single_cmail_header_caption_pane_t1

0xdbf6,	// (0x00021bb0) list_single_cmail_header_detail_pane_g1_ParamLimits

0xdbf6,	// (0x00021bb0) list_single_cmail_header_detail_pane_g1

0xdc0c,	// (0x00021bc6) list_single_cmail_header_detail_pane_g2_ParamLimits

0xdc0c,	// (0x00021bc6) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdc0,	// (0x00023d7a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdc0,	// (0x00023d7a) list_single_cmail_header_detail_pane_g

0xdc25,	// (0x00021bdf) list_single_cmail_header_detail_pane_t1_ParamLimits

0xdc25,	// (0x00021bdf) list_single_cmail_header_detail_pane_t1

0xdc7b,	// (0x00021c35) list_single_cmail_header_editor_pane_bg_ParamLimits

0xdc7b,	// (0x00021c35) list_single_cmail_header_editor_pane_bg

0xdc8d,	// (0x00021c47) list_cmail_body_pane_g1

0xdc96,	// (0x00021c50) list_cmail_body_pane_t1

0x4faf,	// (0x00018f69) list_single_cmail_header_editor_pane_bg_g1

0x201f,	// (0x00015fd9) list_single_cmail_header_editor_pane_bg_g1_copy1

0x4fbf,	// (0x00018f79) list_single_cmail_header_editor_pane_bg_g1_copy2

0x4fb7,	// (0x00018f71) list_single_cmail_header_editor_pane_bg_g1_copy3

0x5240,	// (0x000191fa) list_single_cmail_header_editor_pane_bg_g1_copy4

0x4fdf,	// (0x00018f99) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x4fcf,	// (0x00018f89) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x4fd7,	// (0x00018f91) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1fff,	// (0x00015fb9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xdca4,	// (0x00021c5e) calenote_gesture_pane_ParamLimits

0xdca4,	// (0x00021c5e) calenote_gesture_pane

0xdcbc,	// (0x00021c76) calenote_window_pane_ParamLimits

0xdcbc,	// (0x00021c76) calenote_window_pane

0xdcd4,	// (0x00021c8e) popup_note_window_cp01

0xdcdd,	// (0x00021c97) calenote_swipe_1_pane_ParamLimits

0xdcdd,	// (0x00021c97) calenote_swipe_1_pane

0xd6d1,	// (0x0002168b) calenote_swipe_2_pane_ParamLimits

0xd6d1,	// (0x0002168b) calenote_swipe_2_pane

0x61cb,	// (0x0001a185) calenote_swipe_1_pane_g1_ParamLimits

0x61cb,	// (0x0001a185) calenote_swipe_1_pane_g1

0x61d8,	// (0x0001a192) calenote_swipe_1_pane_g2_ParamLimits

0x61d8,	// (0x0001a192) calenote_swipe_1_pane_g2

0x0001,

0xfcf9,	// (0x00023cb3) calenote_swipe_1_pane_g_ParamLimits

0xfcf9,	// (0x00023cb3) calenote_swipe_1_pane_g

0xdcf9,	// (0x00021cb3) calenote_swipe_1_pane_t1_ParamLimits

0xdcf9,	// (0x00021cb3) calenote_swipe_1_pane_t1

0x61cb,	// (0x0001a185) calenote_swipe_2_pane_g1_ParamLimits

0x61cb,	// (0x0001a185) calenote_swipe_2_pane_g1

0xdd18,	// (0x00021cd2) calenote_swipe_2_pane_g2_ParamLimits

0xdd18,	// (0x00021cd2) calenote_swipe_2_pane_g2

0x0001,

0xfdcc,	// (0x00023d86) calenote_swipe_2_pane_g_ParamLimits

0xfdcc,	// (0x00023d86) calenote_swipe_2_pane_g

0xdd24,	// (0x00021cde) calenote_swipe_2_pane_t1_ParamLimits

0xdd24,	// (0x00021cde) calenote_swipe_2_pane_t1

0x1293,	// (0x0001524d) main_mup_navstr_pane

0xb6a7,	// (0x0001f661) main_mup3_pane_t7_ParamLimits

0xb6a7,	// (0x0001f661) main_mup3_pane_t7

0x7c74,	// (0x0001bc2e) main_mp4_pane_g6_ParamLimits

0x7c74,	// (0x0001bc2e) main_mp4_pane_g6

0x7f45,	// (0x0001beff) main_image3_pane_t4_ParamLimits

0x7f45,	// (0x0001beff) main_image3_pane_t4

0xdd4b,	// (0x00021d05) popup_navstr_preview_pane_ParamLimits

0xdd4b,	// (0x00021d05) popup_navstr_preview_pane

0xdd57,	// (0x00021d11) scroll_navstr_pane_ParamLimits

0xdd57,	// (0x00021d11) scroll_navstr_pane

0x1293,	// (0x0001524d) bg_popup_preview_window_pane_cp04

0xdd63,	// (0x00021d1d) popup_navstr_preview_pane_t1

0xdd71,	// (0x00021d2b) scroll_navstr_pane_g1_ParamLimits

0xdd71,	// (0x00021d2b) scroll_navstr_pane_g1

0xdd7e,	// (0x00021d38) scroll_navstr_pane_t1_ParamLimits

0xdd7e,	// (0x00021d38) scroll_navstr_pane_t1

0xdcf0,	// (0x00021caa) bg_button_pane_cp014

0xdcf0,	// (0x00021caa) bg_button_pane_cp030

0xd5cf,	// (0x00021589) list_double_fisheye_pane_g4_ParamLimits

0xd5cf,	// (0x00021589) list_double_fisheye_pane_g4

0xd5db,	// (0x00021595) list_double_fisheye_pane_g5_ParamLimits

0xd5db,	// (0x00021595) list_double_fisheye_pane_g5

0x648d,	// (0x0001a447) sp_fs_scroll_pane_cp03

0x62ba,	// (0x0001a274) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x62c6,	// (0x0001a280) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd16,	// (0x00023cd0) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x62d2,	// (0x0001a28c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x6485,	// (0x0001a43f) sp_fs_scroll_pane_cp02

0x1c08,	// (0x00015bc2) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1c08,	// (0x00015bc2) popup_sp_fs_calendar_preview_list_single_pane

0x1293,	// (0x0001524d) main_cam6_pano_pane

0x12e6,	// (0x000152a0) main_mup3_pane_ParamLimits

0x1293,	// (0x0001524d) main_phacti_pane

0xd229,	// (0x000211e3) bg_button_pane_cp11

0xd241,	// (0x000211fb) main_mobtv_info_pane_g2_ParamLimits

0xd241,	// (0x000211fb) main_mobtv_info_pane_g2

0x0001,

0xfc76,	// (0x00023c30) main_mobtv_info_pane_g_ParamLimits

0xfc76,	// (0x00023c30) main_mobtv_info_pane_g

0xd3cd,	// (0x00021387) sc_clock_pane_t5_ParamLimits

0xd3cd,	// (0x00021387) sc_clock_pane_t5

0xd457,	// (0x00021411) main_radioblah_pane_g1_ParamLimits

0x610e,	// (0x0001a0c8) main_radioblah_pane_t3_ParamLimits

0x610e,	// (0x0001a0c8) main_radioblah_pane_t3

0x6126,	// (0x0001a0e0) main_radioblah_pane_t4_ParamLimits

0x6126,	// (0x0001a0e0) main_radioblah_pane_t4

0xd475,	// (0x0002142f) main_radioblah_text_pane_ParamLimits

0xd475,	// (0x0002142f) main_radioblah_text_pane

0xd482,	// (0x0002143c) main_radioblah_info_pane_g1_ParamLimits

0xd50f,	// (0x000214c9) main_radioblah_info_pane_t4_ParamLimits

0xd50f,	// (0x000214c9) main_radioblah_info_pane_t4

0x12e6,	// (0x000152a0) main_sp_fs_calendar_pane

0xdd90,	// (0x00021d4a) main_phacti_pane_g1

0xdda1,	// (0x00021d5b) phacti_note_pane_ParamLimits

0xdda1,	// (0x00021d5b) phacti_note_pane

0xddb5,	// (0x00021d6f) phacti_term_pane_ParamLimits

0xddb5,	// (0x00021d6f) phacti_term_pane

0xddca,	// (0x00021d84) phacti_note_pane_t1_ParamLimits

0xddca,	// (0x00021d84) phacti_note_pane_t1

0xdde1,	// (0x00021d9b) phacti_term_pane_g1

0xdde9,	// (0x00021da3) phacti_term_pane_t1_ParamLimits

0xdde9,	// (0x00021da3) phacti_term_pane_t1

0xde13,	// (0x00021dcd) popup_sp_fs_calendar_preview_list_single_pane_g1

0xde1b,	// (0x00021dd5) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdd6,	// (0x00023d90) popup_sp_fs_calendar_preview_list_single_pane_g

0xde23,	// (0x00021ddd) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xde23,	// (0x00021ddd) popup_sp_fs_calendar_preview_list_single_pane_t1

0xde39,	// (0x00021df3) aid_popup_sp_fs_bg_corner_pane

0x42a9,	// (0x00018263) popup_sp_fs_calendar_preview_bg_pane_g1

0x1293,	// (0x0001524d) popup_sp_fs_calendar_preview_bg_pane

0xde41,	// (0x00021dfb) popup_sp_fs_calendar_preview_list_pane

0x12e6,	// (0x000152a0) bg_main_sp_fs_cale_pane_ParamLimits

0x12e6,	// (0x000152a0) bg_main_sp_fs_cale_pane

0xde79,	// (0x00021e33) listscroll_cale_mrui_pane_ParamLimits

0xde79,	// (0x00021e33) listscroll_cale_mrui_pane

0xde8d,	// (0x00021e47) listscroll_sp_fs_schedule_track_pane

0xde96,	// (0x00021e50) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xde96,	// (0x00021e50) main_sp_fs_ctrlbar_pane_cp01

0xdea7,	// (0x00021e61) main_sp_fs_ribbon_pane

0xdeaf,	// (0x00021e69) popup_sp_fs_cale_preview_window

0xdec1,	// (0x00021e7b) list_single_sp_fs_schedule_track_pane_ParamLimits

0xdec1,	// (0x00021e7b) list_single_sp_fs_schedule_track_pane

0x4473,	// (0x0001842d) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x4473,	// (0x0001842d) bg_sp_fs_highlight_list_pane_cp03

0xded6,	// (0x00021e90) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xded6,	// (0x00021e90) list_single_sp_fs_schedule_track_pane_g1

0xdee2,	// (0x00021e9c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xdee2,	// (0x00021e9c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfddb,	// (0x00023d95) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfddb,	// (0x00023d95) list_single_sp_fs_schedule_track_pane_g

0xdeee,	// (0x00021ea8) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xdeee,	// (0x00021ea8) list_single_sp_fs_schedule_track_pane_t1

0xdf06,	// (0x00021ec0) sp_fs_schedule_track_pane_ParamLimits

0xdf06,	// (0x00021ec0) sp_fs_schedule_track_pane

0xdf16,	// (0x00021ed0) sp_fs_schedule_track_pane_g1

0xdf1e,	// (0x00021ed8) sp_fs_schedule_track_pane_g2

0xdf26,	// (0x00021ee0) sp_fs_schedule_track_pane_g3

0xdf2e,	// (0x00021ee8) sp_fs_schedule_track_pane_g4

0xdf36,	// (0x00021ef0) sp_fs_schedule_track_pane_g5

0x0004,

0xfde0,	// (0x00023d9a) sp_fs_schedule_track_pane_g

0x4faf,	// (0x00018f69) bg_sp_fs_schedule_viewer_highlight_g1

0x201f,	// (0x00015fd9) bg_sp_fs_schedule_viewer_highlight_g2

0x4fb7,	// (0x00018f71) bg_sp_fs_schedule_viewer_highlight_g3

0x4fbf,	// (0x00018f79) bg_sp_fs_schedule_viewer_highlight_g4

0x5240,	// (0x000191fa) bg_sp_fs_schedule_viewer_highlight_g5

0x4fcf,	// (0x00018f89) bg_sp_fs_schedule_viewer_highlight_g6

0x4fd7,	// (0x00018f91) bg_sp_fs_schedule_viewer_highlight_g7

0x4fdf,	// (0x00018f99) bg_sp_fs_schedule_viewer_highlight_g8

0x1fff,	// (0x00015fb9) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdeb,	// (0x00023da5) bg_sp_fs_schedule_viewer_highlight_g

0x1293,	// (0x0001524d) bg_main_sp_fs_ribbon_pane

0xbfab,	// (0x0001ff65) main_sp_fs_ribbon_pane_g1

0xdf3e,	// (0x00021ef8) main_sp_fs_ribbon_pane_t1

0xdf4d,	// (0x00021f07) main_sp_fs_ribbon_pane_t2

0xdf5c,	// (0x00021f16) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdfe,	// (0x00023db8) main_sp_fs_ribbon_pane_t

0xdf6b,	// (0x00021f25) main_sp_fs_ribbon_scheduler_pane

0xdf73,	// (0x00021f2d) bg_main_sp_fs_ribbon_pane_g1

0xdf7c,	// (0x00021f36) bg_main_sp_fs_ribbon_pane_g2

0xdf85,	// (0x00021f3f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe05,	// (0x00023dbf) bg_main_sp_fs_ribbon_pane_g

0xdf8d,	// (0x00021f47) main_sp_fs_ribbon_scheduler_pane_g1

0xdf96,	// (0x00021f50) main_sp_fs_ribbon_scheduler_pane_g2

0xdf9f,	// (0x00021f59) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe0c,	// (0x00023dc6) main_sp_fs_ribbon_scheduler_pane_g

0x6180,	// (0x0001a13a) list_cale_mrui_pane

0xdfa8,	// (0x00021f62) sp_fs_scroll_pane_cp07_ParamLimits

0xdfa8,	// (0x00021f62) sp_fs_scroll_pane_cp07

0xdfbd,	// (0x00021f77) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xdfbd,	// (0x00021f77) bg_sp_fs_schedule_viewer_highlight

0xdfca,	// (0x00021f84) list_single_sp_fs_schedule_track_pane_cp01

0xdfd2,	// (0x00021f8c) list_sp_fs_schedule_track_pane

0xdfda,	// (0x00021f94) sp_fs_scroll_pane_cp06_ParamLimits

0xdfda,	// (0x00021f94) sp_fs_scroll_pane_cp06

0x42a9,	// (0x00018263) bgmain_sp_fs_calendar_pane_g1

0xdfec,	// (0x00021fa6) list_single_cale_mrui_pane_ParamLimits

0xdfec,	// (0x00021fa6) list_single_cale_mrui_pane

0xe012,	// (0x00021fcc) list_single_cale_mrui_row_pane_ParamLimits

0xe012,	// (0x00021fcc) list_single_cale_mrui_row_pane

0xe01f,	// (0x00021fd9) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe01f,	// (0x00021fd9) list_single_cale_mrui_row_pane_g1

0xe057,	// (0x00022011) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe057,	// (0x00022011) list_single_cale_mrui_row_pane_t1

0xe069,	// (0x00022023) list_single_cale_mrui_row_pane_t2_ParamLimits

0xe069,	// (0x00022023) list_single_cale_mrui_row_pane_t2

0xe0cf,	// (0x00022089) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe0cf,	// (0x00022089) list_single_cale_mrui_row_pane_t3

0xe0fe,	// (0x000220b8) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe0fe,	// (0x000220b8) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe18,	// (0x00023dd2) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe18,	// (0x00023dd2) list_single_cale_mrui_row_pane_t

0xe12d,	// (0x000220e7) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xe12d,	// (0x000220e7) list_single_cmail_header_editor_pane_bg_cp01

0xe151,	// (0x0002210b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xe151,	// (0x0002210b) list_single_cmail_header_editor_pane_bg_cp02

0xe16f,	// (0x00022129) main_radioblah_text_pane_t1_ParamLimits

0xe16f,	// (0x00022129) main_radioblah_text_pane_t1

0xe188,	// (0x00022142) cam6_indi_pane_cp01

0xe190,	// (0x0002214a) cam6_mode_pane_cp01

0xe198,	// (0x00022152) cam6_pano_pane

0xe1a1,	// (0x0002215b) cam6_zoom_pane_cp01

0xe1a9,	// (0x00022163) cam6_pano_image_pane

0xe1b2,	// (0x0002216c) cam6_pano_pane_g1

0x5e8c,	// (0x00019e46) cam6_pano_pane_g2

0xe1bb,	// (0x00022175) cam6_pano_pane_g3

0xe1c4,	// (0x0002217e) cam6_pano_pane_g4

0x483d,	// (0x000187f7) cam6_pano_pane_g5

0xe1cd,	// (0x00022187) cam6_pano_pane_g6

0xe1d5,	// (0x0002218f) cam6_pano_pane_g7

0xe1dd,	// (0x00022197) cam6_pano_pane_g8

0xe1e6,	// (0x000221a0) cam6_pano_pane_g9

0x0008,

0xfe21,	// (0x00023ddb) cam6_pano_pane_g

0x1293,	// (0x0001524d) main_browser_tag_pane

0xdd43,	// (0x00021cfd) grid_navstr_albumart_pane

0xe1ef,	// (0x000221a9) cell_navstr_albumart_pane_ParamLimits

0xe1ef,	// (0x000221a9) cell_navstr_albumart_pane

0x2a47,	// (0x00016a01) cell_navstr_albumart_pane_g1

0x3b91,	// (0x00017b4b) cell_navstr_albumart_pane_g2

0x3ba1,	// (0x00017b5b) cell_navstr_albumart_pane_g3

0x3b99,	// (0x00017b53) cell_navstr_albumart_pane_g4

0x0003,

0xfe34,	// (0x00023dee) cell_navstr_albumart_pane_g

0xe206,	// (0x000221c0) bt_list_pane_ParamLimits

0xe206,	// (0x000221c0) bt_list_pane

0xe21b,	// (0x000221d5) bt_list_pane_t1

0xe22a,	// (0x000221e4) bt_list_pane_t2

0x0001,

0xfe3d,	// (0x00023df7) bt_list_pane_t

0x1293,	// (0x0001524d) main_cale_prevew_pane

0xe239,	// (0x000221f3) popup_cale_preview_window_ParamLimits

0xe239,	// (0x000221f3) popup_cale_preview_window

0x12e6,	// (0x000152a0) bg_popup_preview_window_pane_cp05_ParamLimits

0x12e6,	// (0x000152a0) bg_popup_preview_window_pane_cp05

0xe24e,	// (0x00022208) list_cale_preview_pane_ParamLimits

0xe24e,	// (0x00022208) list_cale_preview_pane

0xe25a,	// (0x00022214) list_double_cale_preview_pane_ParamLimits

0xe25a,	// (0x00022214) list_double_cale_preview_pane

0xe26b,	// (0x00022225) list_single_cale_preview_pane_ParamLimits

0xe26b,	// (0x00022225) list_single_cale_preview_pane

0xe27f,	// (0x00022239) list_single_cale_preview_pane_g1

0xe287,	// (0x00022241) list_single_cale_preview_pane_t1_ParamLimits

0xe287,	// (0x00022241) list_single_cale_preview_pane_t1

0xe29c,	// (0x00022256) list_double_cale_preview_pane_g1

0xe2a4,	// (0x0002225e) list_double_cale_preview_pane_t1_ParamLimits

0xe2a4,	// (0x0002225e) list_double_cale_preview_pane_t1

0xe2b9,	// (0x00022273) list_double_cale_preview_pane_t2_ParamLimits

0xe2b9,	// (0x00022273) list_double_cale_preview_pane_t2

0x0001,

0xfe42,	// (0x00023dfc) list_double_cale_preview_pane_t_ParamLimits

0xfe42,	// (0x00023dfc) list_double_cale_preview_pane_t

0x1293,	// (0x0001524d) main_ezdial_pane

0x12e6,	// (0x000152a0) main_sp_fs_email_pane_ParamLimits

0xd736,	// (0x000216f0) cmail_ddmenu_btn01_pane_ParamLimits

0xd736,	// (0x000216f0) cmail_ddmenu_btn01_pane

0xd753,	// (0x0002170d) cmail_ddmenu_btn02_pane_ParamLimits

0xd753,	// (0x0002170d) cmail_ddmenu_btn02_pane

0xd771,	// (0x0002172b) cmail_ddmenu_btn03_pane_ParamLimits

0xd771,	// (0x0002172b) cmail_ddmenu_btn03_pane

0xd79d,	// (0x00021757) main_sp_fs_ctrlbar_pane_ParamLimits

0xd7b5,	// (0x0002176f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xdb9e,	// (0x00021b58) list_cmail_body_pane_ParamLimits

0xdbee,	// (0x00021ba8) bg_button_pane_cp12

0xdc18,	// (0x00021bd2) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdc18,	// (0x00021bd2) list_single_cmail_header_detail_pane_g3

0xdc57,	// (0x00021c11) list_single_cmail_header_detail_pane_t2_ParamLimits

0xdc57,	// (0x00021c11) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdc7,	// (0x00023d81) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdc7,	// (0x00023d81) list_single_cmail_header_detail_pane_t

0xddfe,	// (0x00021db8) phacti_term_pane_t2_ParamLimits

0xddfe,	// (0x00021db8) phacti_term_pane_t2

0x0001,

0xfdd1,	// (0x00023d8b) phacti_term_pane_t_ParamLimits

0xfdd1,	// (0x00023d8b) phacti_term_pane_t

0xe2d1,	// (0x0002228b) aid_size_list_single_double

0xe2dd,	// (0x00022297) popup_ezdial_listscroll_window

0xe2f6,	// (0x000222b0) popup_number_entry_window_cp01

0x28be,	// (0x00016878) bg_popup_call_pane_cp09

0xe302,	// (0x000222bc) ezdial_list_pane

0xe30a,	// (0x000222c4) scroll_pane_cp23

0x4096,	// (0x00018050) bg_button_pane_cp028_ParamLimits

0x4096,	// (0x00018050) bg_button_pane_cp028

0xe312,	// (0x000222cc) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe312,	// (0x000222cc) cmail_ddmenu_btn01_pane_g1

0xe324,	// (0x000222de) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe324,	// (0x000222de) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe47,	// (0x00023e01) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe47,	// (0x00023e01) cmail_ddmenu_btn01_pane_g

0xe330,	// (0x000222ea) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe330,	// (0x000222ea) cmail_ddmenu_btn01_pane_t1

0x3db4,	// (0x00017d6e) bg_button_pane_cp029_ParamLimits

0x3db4,	// (0x00017d6e) bg_button_pane_cp029

0xe324,	// (0x000222de) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe324,	// (0x000222de) cmail_ddmenu_btn02_pane_g1

0xe351,	// (0x0002230b) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe351,	// (0x0002230b) cmail_ddmenu_btn02_pane_t1

0x4473,	// (0x0001842d) bg_button_pane_cp031_ParamLimits

0x4473,	// (0x0001842d) bg_button_pane_cp031

0xe324,	// (0x000222de) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe324,	// (0x000222de) cmail_ddmenu_btn03_pane_g1

0xe351,	// (0x0002230b) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe351,	// (0x0002230b) cmail_ddmenu_btn03_pane_t1

0xbe81,	// (0x0001fe3b) cell_dialer2_keypad_pane_t1_ParamLimits

0xbe9b,	// (0x0001fe55) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xbe9b,	// (0x0001fe55) cell_dialer2_keypad_pane_t1_copy1

0xd0f0,	// (0x000210aa) ncimui_group_button_pane

0x12e6,	// (0x000152a0) main_sp_fs_calendar_pane_ParamLimits

0xdb9e,	// (0x00021b58) list_single_cmail_header_caption_pane_ParamLimits

0xde55,	// (0x00021e0f) aid_recal_txt_sm_pane

0x1293,	// (0x0001524d) mian_recal_day_pane

0xdeaf,	// (0x00021e69) popup_sp_fs_cale_preview_window_ParamLimits

0x1293,	// (0x0001524d) list_recal_day_pane

0xe38e,	// (0x00022348) list_single_recal_day_pane_ParamLimits

0xe38e,	// (0x00022348) list_single_recal_day_pane

0xe3a0,	// (0x0002235a) list_single_recal_day_pane_g1_ParamLimits

0xe3a0,	// (0x0002235a) list_single_recal_day_pane_g1

0xe3ac,	// (0x00022366) list_single_recal_day_pane_g2_ParamLimits

0xe3ac,	// (0x00022366) list_single_recal_day_pane_g2

0xe3b8,	// (0x00022372) list_single_recal_day_pane_g3_ParamLimits

0xe3b8,	// (0x00022372) list_single_recal_day_pane_g3

0xe3c4,	// (0x0002237e) list_single_recal_day_pane_g4_ParamLimits

0xe3c4,	// (0x0002237e) list_single_recal_day_pane_g4

0xe3d0,	// (0x0002238a) list_single_recal_day_pane_g5_ParamLimits

0xe3d0,	// (0x0002238a) list_single_recal_day_pane_g5

0xe3dc,	// (0x00022396) list_single_recal_day_pane_g6_ParamLimits

0xe3dc,	// (0x00022396) list_single_recal_day_pane_g6

0x0005,

0xfe56,	// (0x00023e10) list_single_recal_day_pane_g_ParamLimits

0xfe56,	// (0x00023e10) list_single_recal_day_pane_g

0xe3e8,	// (0x000223a2) list_single_recal_day_pane_t1

0xe3f6,	// (0x000223b0) list_single_recal_day_pane_t2

0x0001,

0xfe63,	// (0x00023e1d) list_single_recal_day_pane_t

0xe404,	// (0x000223be) ncimui_query_button_pane_ParamLimits

0xe404,	// (0x000223be) ncimui_query_button_pane

0xe414,	// (0x000223ce) ncimui_query_button_pane_t1_ParamLimits

0xe414,	// (0x000223ce) ncimui_query_button_pane_t1

0xe427,	// (0x000223e1) ncimui_query_button_pane_t2_ParamLimits

0xe427,	// (0x000223e1) ncimui_query_button_pane_t2

0x0001,

0xfe68,	// (0x00023e22) ncimui_query_button_pane_t_ParamLimits

0xfe68,	// (0x00023e22) ncimui_query_button_pane_t

0xe43a,	// (0x000223f4) query_button_pane_ParamLimits

0xe43a,	// (0x000223f4) query_button_pane

0x1293,	// (0x0001524d) bg_button_pane_cp0028

0xe447,	// (0x00022401) query_button_pane_t1

0xab22,	// (0x0001eadc) main_tport_pane_ParamLimits

0xdae9,	// (0x00021aa3) bg_popup_window_pane_cp01_ParamLimits

0xdae9,	// (0x00021aa3) bg_popup_window_pane_cp01

0xdaf6,	// (0x00021ab0) heading_pane_cp08_ParamLimits

0xdaf6,	// (0x00021ab0) heading_pane_cp08

0xdb02,	// (0x00021abc) heading_pane_cp07_ParamLimits

0xdb02,	// (0x00021abc) heading_pane_cp07

0x645f,	// (0x0001a419) cell_tport_appsw_pane_g2

0x0002,

0xfdb4,	// (0x00023d6e) cell_tport_appsw_pane_g

0x2a3f,	// (0x000169f9) input_candi_list_open_g1

0x221f,	// (0x000161d9) list_cale_time_pane_g6_ParamLimits

0x221f,	// (0x000161d9) list_cale_time_pane_g6

0xb1f7,	// (0x0001f1b1) aid_size_touch_calib_1_ParamLimits

0xb1f7,	// (0x0001f1b1) aid_size_touch_calib_1

0xb203,	// (0x0001f1bd) aid_size_touch_calib_2_ParamLimits

0xb203,	// (0x0001f1bd) aid_size_touch_calib_2

0xb20f,	// (0x0001f1c9) aid_size_touch_calib_3_ParamLimits

0xb20f,	// (0x0001f1c9) aid_size_touch_calib_3

0xb21d,	// (0x0001f1d7) aid_size_touch_calib_4_ParamLimits

0xb21d,	// (0x0001f1d7) aid_size_touch_calib_4

0xb22b,	// (0x0001f1e5) main_touch_calib_button_group_pane_ParamLimits

0xb22b,	// (0x0001f1e5) main_touch_calib_button_group_pane

0xb238,	// (0x0001f1f2) main_touch_calib_pane_g1_ParamLimits

0xb244,	// (0x0001f1fe) main_touch_calib_pane_g2_ParamLimits

0xb250,	// (0x0001f20a) main_touch_calib_pane_g3_ParamLimits

0xb25c,	// (0x0001f216) main_touch_calib_pane_g4_ParamLimits

0xf797,	// (0x00023751) main_touch_calib_pane_g_ParamLimits

0xb268,	// (0x0001f222) main_touch_calib_pane_t1_ParamLimits

0xb27d,	// (0x0001f237) main_touch_calib_pane_t2_ParamLimits

0xb292,	// (0x0001f24c) main_touch_calib_pane_t3_ParamLimits

0xb2a4,	// (0x0001f25e) main_touch_calib_pane_t4_ParamLimits

0xb2b6,	// (0x0001f270) main_touch_calib_pane_t5_ParamLimits

0xf7a0,	// (0x0002375a) main_touch_calib_pane_t_ParamLimits

0x4668,	// (0x00018622) list_single_fp_cale_pane_g3_ParamLimits

0x4668,	// (0x00018622) list_single_fp_cale_pane_g3

0x80f7,	// (0x0001c0b1) bg_button_pane_cp012_ParamLimits

0x80f7,	// (0x0001c0b1) bg_vkb2_func_pane_cp03_ParamLimits

0x84aa,	// (0x0001c464) cell_vitu2_function_top_pane_g1_ParamLimits

0x80f7,	// (0x0001c0b1) bg_vkb2_func_pane_cp04_ParamLimits

0xd0a3,	// (0x0002105d) main_ncimui_button_group_pane_ParamLimits

0xd0a3,	// (0x0002105d) main_ncimui_button_group_pane

0xd0de,	// (0x00021098) main_ncimui_pane_t3_ParamLimits

0xd0de,	// (0x00021098) main_ncimui_pane_t3

0xdd98,	// (0x00021d52) phacti_button_group_pane

0xe2d1,	// (0x0002228b) aid_size_list_single_double_ParamLimits

0xe2dd,	// (0x00022297) popup_ezdial_listscroll_window_ParamLimits

0xe2f6,	// (0x000222b0) popup_number_entry_window_cp01_ParamLimits

0xe455,	// (0x0002240f) phacti_button_pane_ParamLimits

0xe455,	// (0x0002240f) phacti_button_pane

0x1293,	// (0x0001524d) bg_button_pane_cp14

0xe464,	// (0x0002241e) phacti_button_pane_t1

0xe472,	// (0x0002242c) main_touch_calib_button_pane_ParamLimits

0xe472,	// (0x0002242c) main_touch_calib_button_pane

0x1a51,	// (0x00015a0b) bg_button_pane_cp18_ParamLimits

0x1a51,	// (0x00015a0b) bg_button_pane_cp18

0xe482,	// (0x0002243c) main_touch_calib_button_pane_t1_ParamLimits

0xe482,	// (0x0002243c) main_touch_calib_button_pane_t1

0xe498,	// (0x00022452) main_touch_calib_button_pane_t2_ParamLimits

0xe498,	// (0x00022452) main_touch_calib_button_pane_t2

0x0001,

0xfe6d,	// (0x00023e27) main_touch_calib_button_pane_t_ParamLimits

0xfe6d,	// (0x00023e27) main_touch_calib_button_pane_t

0x1293,	// (0x0001524d) cell_ncimui_button_pane

0x1293,	// (0x0001524d) bg_button_pane_cp032

0xe4b6,	// (0x00022470) cell_ncimui_button_pane_t1

0x7e60,	// (0x0001be1a) image3_infobar_pane_ParamLimits

0x7e60,	// (0x0001be1a) image3_infobar_pane

0xd3ed,	// (0x000213a7) fs_bigclock_status_pane_ParamLimits

0xd3ed,	// (0x000213a7) fs_bigclock_status_pane

0xd3fa,	// (0x000213b4) main_fs_bigclock_clock_pane_ParamLimits

0xd3fa,	// (0x000213b4) main_fs_bigclock_clock_pane

0xd40a,	// (0x000213c4) main_fs_bigclock_indi_pane_ParamLimits

0xd40a,	// (0x000213c4) main_fs_bigclock_indi_pane

0xd42f,	// (0x000213e9) main_fs_bigclock_swipe_pane_ParamLimits

0xd42f,	// (0x000213e9) main_fs_bigclock_swipe_pane

0x1293,	// (0x0001524d) main_fs_clock_dumped_data

0x5f99,	// (0x00019f53) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x5f99,	// (0x00019f53) list_single_fs_bigclock_indicator_pane_g1

0x5fb3,	// (0x00019f6d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x5fb3,	// (0x00019f6d) list_single_fs_bigclock_indicator_pane_g2

0x5fcd,	// (0x00019f87) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x5fcd,	// (0x00019f87) list_single_fs_bigclock_indicator_pane_g3

0x5fe7,	// (0x00019fa1) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x5fe7,	// (0x00019fa1) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcaa,	// (0x00023c64) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcaa,	// (0x00023c64) list_single_fs_bigclock_indicator_pane_g

0x600b,	// (0x00019fc5) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x600b,	// (0x00019fc5) list_single_fs_bigclock_indicator_pane_t1

0x6033,	// (0x00019fed) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x6033,	// (0x00019fed) list_single_fs_bigclock_indicator_pane_t2

0x605b,	// (0x0001a015) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x605b,	// (0x0001a015) list_single_fs_bigclock_indicator_pane_t3

0x6083,	// (0x0001a03d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x6083,	// (0x0001a03d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcb5,	// (0x00023c6f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcb5,	// (0x00023c6f) list_single_fs_bigclock_indicator_pane_t

0xe4c4,	// (0x0002247e) image3_infobar_fav_pane_ParamLimits

0xe4c4,	// (0x0002247e) image3_infobar_fav_pane

0xe4d4,	// (0x0002248e) image3_infobar_loc_pane_ParamLimits

0xe4d4,	// (0x0002248e) image3_infobar_loc_pane

0xe4e8,	// (0x000224a2) image3_infobar_time_pane_ParamLimits

0xe4e8,	// (0x000224a2) image3_infobar_time_pane

0x42a9,	// (0x00018263) image3_infobar_time_pane_g1

0xe4f8,	// (0x000224b2) image3_infobar_time_pane_t1

0x42a9,	// (0x00018263) image3_infobar_loc_pane_g1

0xe506,	// (0x000224c0) image3_infobar_loc_pane_g2

0x0001,

0xfe72,	// (0x00023e2c) image3_infobar_loc_pane_g

0xe50e,	// (0x000224c8) image3_infobar_loc_pane_t1

0x42a9,	// (0x00018263) image3_infobar_fav_pane_g1

0xe51c,	// (0x000224d6) image3_infobar_fav_pane_g2

0x0001,

0xfe77,	// (0x00023e31) image3_infobar_fav_pane_g

0xe524,	// (0x000224de) fs_bigclock_status_battery_pane

0xe52d,	// (0x000224e7) fs_bigclock_status_signal_pane

0xe536,	// (0x000224f0) fs_bigclock_status_title_pane

0xe53f,	// (0x000224f9) fs_bigclock_status_signal_pane_g1

0xe548,	// (0x00022502) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe7c,	// (0x00023e36) fs_bigclock_status_signal_pane_g

0xe550,	// (0x0002250a) fs_bigclock_status_battery_pane_g1

0xe559,	// (0x00022513) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe81,	// (0x00023e3b) fs_bigclock_status_battery_pane_g

0xe561,	// (0x0002251b) fs_bigclock_status_title_pane_t1

0x42a9,	// (0x00018263) main_fs_bigclock_clock_pane_g1

0xe56f,	// (0x00022529) main_fs_bigclock_clock_pane_g2

0xe56f,	// (0x00022529) main_fs_bigclock_clock_pane_g3

0xe56f,	// (0x00022529) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe86,	// (0x00023e40) main_fs_bigclock_clock_pane_g

0xe577,	// (0x00022531) main_fs_bigclock_clock_pane_t1

0xe585,	// (0x0002253f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe8f,	// (0x00023e49) main_fs_bigclock_clock_pane_t

0xe594,	// (0x0002254e) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe594,	// (0x0002254e) list_single_fs_bigclock_indicator_pane

0xe5a5,	// (0x0002255f) list_single_fs_bigclock_pane_ParamLimits

0xe5a5,	// (0x0002255f) list_single_fs_bigclock_pane

0xe60c,	// (0x000225c6) main_fs_bigclock_indicator_pane_t1

0xe61b,	// (0x000225d5) list_single_fs_bigclock_pane_g1

0xe623,	// (0x000225dd) list_single_fs_bigclock_pane_t1

0x42a9,	// (0x00018263) main_fs_bigclock_swipe_pane_g1

0xe661,	// (0x0002261b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfea0,	// (0x00023e5a) main_fs_bigclock_swipe_pane_g

0xe669,	// (0x00022623) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe669,	// (0x00022623) main_fs_bigclock_swipe_pane_t1

0x9dca,	// (0x0001dd84) call_type_pane_ParamLimits

0x1293,	// (0x0001524d) main_btmg_pane

0xe04b,	// (0x00022005) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe04b,	// (0x00022005) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe13,	// (0x00023dcd) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe13,	// (0x00023dcd) list_single_cale_mrui_row_pane_g

0xe37e,	// (0x00022338) list_recal_vselct_arw_lo_pane

0xe386,	// (0x00022340) list_recal_vselct_arw_up_pane

0xe375,	// (0x0002232f) list_recal_vselct_pane

0xe686,	// (0x00022640) btmg_button_pane

0xe68e,	// (0x00022648) main_btmg_pane_g1

0x1293,	// (0x0001524d) bg_button_pane_cp044

0xe696,	// (0x00022650) btmg_button_pane_t1

0x3dac,	// (0x00017d66) aid_listscroll_gen

0x12e6,	// (0x000152a0) main_cntbar_detail_pane

0x647d,	// (0x0001a437) list_cmail_folder_pane

0x648d,	// (0x0001a447) sp_fs_scroll_pane_cp03_ParamLimits

0xe6a4,	// (0x0002265e) list_single_fs_dyc_pane_cp01_ParamLimits

0xe6a4,	// (0x0002265e) list_single_fs_dyc_pane_cp01

0xe6bc,	// (0x00022676) aid_size_cmail_indent

0x5656,	// (0x00019610) list_single_dyc_row_pane_cp01

0xe6df,	// (0x00022699) cntbar_detail_list_pane_ParamLimits

0xe6df,	// (0x00022699) cntbar_detail_list_pane

0xe715,	// (0x000226cf) main_cntbar_detail_cont_pane_ParamLimits

0xe715,	// (0x000226cf) main_cntbar_detail_cont_pane

0xe721,	// (0x000226db) scroll_pane_cp032_ParamLimits

0xe721,	// (0x000226db) scroll_pane_cp032

0xe72d,	// (0x000226e7) cntbar_detail_list_event_pane_ParamLimits

0xe72d,	// (0x000226e7) cntbar_detail_list_event_pane

0xe6eb,	// (0x000226a5) cntbar_detail_list_shct_pane

0xe73d,	// (0x000226f7) aid_list_gen

0x1bae,	// (0x00015b68) aid_scroll

0x5570,	// (0x0001952a) aid_size_touch_scroll_bar

0xe746,	// (0x00022700) aid_list_double

0xe74f,	// (0x00022709) aid_list_single

0x5668,	// (0x00019622) aid_list_single_lg

0xe758,	// (0x00022712) aid_list_z_g_a_sm

0xe760,	// (0x0002271a) aid_list_z_g_d

0xe768,	// (0x00022722) aid_txt_z_prm

0xe776,	// (0x00022730) aid_txt_z_prm_cp01

0xe784,	// (0x0002273e) aid_txt_z_sec

0xe792,	// (0x0002274c) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe792,	// (0x0002274c) main_cntbar_detail_cont_pane_g1

0xe79f,	// (0x00022759) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe79f,	// (0x00022759) main_cntbar_detail_cont_pane_g2

0x0001,

0xfea5,	// (0x00023e5f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfea5,	// (0x00023e5f) main_cntbar_detail_cont_pane_g

0xe7ab,	// (0x00022765) main_cntbar_detail_cont_pane_t1

0xe7b9,	// (0x00022773) main_cntbar_detail_cont_pane_t2

0xe7c7,	// (0x00022781) main_cntbar_detail_cont_pane_t3

0x0002,

0xfeaa,	// (0x00023e64) main_cntbar_detail_cont_pane_t

0xe7d5,	// (0x0002278f) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe7d5,	// (0x0002278f) cell_cntbar_detail_list_shct_pane

0xe7e7,	// (0x000227a1) cntbar_detail_list_shct_pane_g1

0xe7f0,	// (0x000227aa) cntbar_detail_list_shct_pane_g2

0x0001,

0xfeb1,	// (0x00023e6b) cntbar_detail_list_shct_pane_g

0xe7f9,	// (0x000227b3) cntbar_detail_list_event_pane_g1_ParamLimits

0xe7f9,	// (0x000227b3) cntbar_detail_list_event_pane_g1

0xe805,	// (0x000227bf) cntbar_detail_list_event_pane_g2_ParamLimits

0xe805,	// (0x000227bf) cntbar_detail_list_event_pane_g2

0x0005,

0xfeb6,	// (0x00023e70) cntbar_detail_list_event_pane_g_ParamLimits

0xfeb6,	// (0x00023e70) cntbar_detail_list_event_pane_g

0xe871,	// (0x0002282b) cntbar_detail_list_event_pane_t1_ParamLimits

0xe871,	// (0x0002282b) cntbar_detail_list_event_pane_t1

0xe886,	// (0x00022840) cntbar_detail_list_event_pane_t2_ParamLimits

0xe886,	// (0x00022840) cntbar_detail_list_event_pane_t2

0x0002,

0xfec3,	// (0x00023e7d) cntbar_detail_list_event_pane_t_ParamLimits

0xfec3,	// (0x00023e7d) cntbar_detail_list_event_pane_t

0x42a9,	// (0x00018263) cell_cntbar_detail_list_shct_pane_g1

0x287d,	// (0x00016837) navi_pane_mv_g3

0x12e6,	// (0x000152a0) main_cntbar_detail_pane_ParamLimits

0x1293,	// (0x0001524d) main_notif_wgt_pane

0x7bbf,	// (0x0001bb79) aid_tch_main_mp4_pane_g4

0x7de6,	// (0x0001bda0) popup_slider_window_cp02

0xe375,	// (0x0002232f) list_recal_day_event_pane

0xe6c5,	// (0x0002267f) cntbar_detail_btn_pane_ParamLimits

0xe6c5,	// (0x0002267f) cntbar_detail_btn_pane

0xe6d1,	// (0x0002268b) cntbar_detail_btn_pane_cp01_ParamLimits

0xe6d1,	// (0x0002268b) cntbar_detail_btn_pane_cp01

0xe6eb,	// (0x000226a5) cntbar_detail_list_shct_pane_ParamLimits

0xe6f7,	// (0x000226b1) cntbar_detail_pane_g1_ParamLimits

0xe6f7,	// (0x000226b1) cntbar_detail_pane_g1

0xe703,	// (0x000226bd) cntbar_detail_pane_t1_ParamLimits

0xe703,	// (0x000226bd) cntbar_detail_pane_t1

0xe811,	// (0x000227cb) cntbar_detail_list_event_pane_g3_ParamLimits

0xe811,	// (0x000227cb) cntbar_detail_list_event_pane_g3

0xe829,	// (0x000227e3) cntbar_detail_list_event_pane_g4_ParamLimits

0xe829,	// (0x000227e3) cntbar_detail_list_event_pane_g4

0xe841,	// (0x000227fb) cntbar_detail_list_event_pane_g5_ParamLimits

0xe841,	// (0x000227fb) cntbar_detail_list_event_pane_g5

0xe859,	// (0x00022813) cntbar_detail_list_event_pane_g6_ParamLimits

0xe859,	// (0x00022813) cntbar_detail_list_event_pane_g6

0xe89b,	// (0x00022855) cntbar_detail_list_event_pane_t3_ParamLimits

0xe89b,	// (0x00022855) cntbar_detail_list_event_pane_t3

0xe8ad,	// (0x00022867) popup_notif_wgt_window_ParamLimits

0xe8ad,	// (0x00022867) popup_notif_wgt_window

0xe8bb,	// (0x00022875) popup_submenu_window_cp01_ParamLimits

0xe8bb,	// (0x00022875) popup_submenu_window_cp01

0x28be,	// (0x00016878) bg_popup_window_pane_cp10

0xe8c7,	// (0x00022881) listscroll_notif_wgt_pane

0xe8cf,	// (0x00022889) list_notif_wgt_window

0xe8d8,	// (0x00022892) scroll_pane_cp033

0xe8e1,	// (0x0002289b) list_notif_wgt_row_pane_ParamLimits

0xe8e1,	// (0x0002289b) list_notif_wgt_row_pane

0xe8f3,	// (0x000228ad) aid_size_list_notif_wgt_del

0xe8fc,	// (0x000228b6) list_notif_wgt_row_pane_g1

0xe904,	// (0x000228be) list_notif_wgt_row_pane_g2

0xe90c,	// (0x000228c6) list_notif_wgt_row_pane_g3

0x0002,

0xfeca,	// (0x00023e84) list_notif_wgt_row_pane_g

0xe915,	// (0x000228cf) list_notif_wgt_row_pane_t1

0xe923,	// (0x000228dd) list_notif_wgt_row_pane_t2

0xe931,	// (0x000228eb) list_notif_wgt_row_pane_t3

0x0002,

0xfed1,	// (0x00023e8b) list_notif_wgt_row_pane_t

0x5268,	// (0x00019222) list_recal_day_event_pane_g1

0xe93f,	// (0x000228f9) list_recal_day_event_pane_t1

0x1293,	// (0x0001524d) bg_button_pane_cp045

0xe94e,	// (0x00022908) cntbar_detail_btn_pane_t1

0x3db4,	// (0x00017d6e) main_callh_pane_ParamLimits

0x3db4,	// (0x00017d6e) main_callh_pane

0x1293,	// (0x0001524d) main_coverflow0_pane

0x1293,	// (0x0001524d) main_wgtman_pane

0xd441,	// (0x000213fb) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd441,	// (0x000213fb) main_fs_bigclock_unlock_btn_pane

0x6457,	// (0x0001a411) bg_button_pane_cp16

0x6467,	// (0x0001a421) cell_tport_appsw_pane_g3

0xe95c,	// (0x00022916) cf0_flow_pane_ParamLimits

0xe95c,	// (0x00022916) cf0_flow_pane

0xe96b,	// (0x00022925) listscroll_cf0_pane

0xe974,	// (0x0002292e) main_cf0_pane_g1

0xe97e,	// (0x00022938) main_cf0_pane_t1_ParamLimits

0xe97e,	// (0x00022938) main_cf0_pane_t1

0xe990,	// (0x0002294a) main_cf0_pane_t2_ParamLimits

0xe990,	// (0x0002294a) main_cf0_pane_t2

0x0001,

0xfed8,	// (0x00023e92) main_cf0_pane_t_ParamLimits

0xfed8,	// (0x00023e92) main_cf0_pane_t

0xe9a2,	// (0x0002295c) scroll_pane_cp11

0xe9ab,	// (0x00022965) cf0_flow_pane_g1

0xe9b3,	// (0x0002296d) cf0_flow_pane_g2

0x0001,

0xfedd,	// (0x00023e97) cf0_flow_pane_g

0xe9bb,	// (0x00022975) cf0_flow_pane_t1

0x1293,	// (0x0001524d) main_call6_pane

0x1293,	// (0x0001524d) main_calllock_pane

0xe9c9,	// (0x00022983) call6_btn_grp_pane_ParamLimits

0xe9c9,	// (0x00022983) call6_btn_grp_pane

0xe9d6,	// (0x00022990) call6_pane_g1_ParamLimits

0xe9d6,	// (0x00022990) call6_pane_g1

0xe9e3,	// (0x0002299d) popup_call6_1st_window_ParamLimits

0xe9e3,	// (0x0002299d) popup_call6_1st_window

0xe9ef,	// (0x000229a9) popup_call6_2nd_window_ParamLimits

0xe9ef,	// (0x000229a9) popup_call6_2nd_window

0xe9fb,	// (0x000229b5) cell_call6_btn_pane_ParamLimits

0xe9fb,	// (0x000229b5) cell_call6_btn_pane

0x28be,	// (0x00016878) bg_popup_call2_in_pane_cp03

0xea0a,	// (0x000229c4) popup_call6_1st_window_g1

0xea12,	// (0x000229cc) popup_call6_1st_window_g2

0xea1a,	// (0x000229d4) popup_call6_1st_window_g3

0x0002,

0xfee2,	// (0x00023e9c) popup_call6_1st_window_g

0xea22,	// (0x000229dc) popup_call6_1st_window_t1

0xea31,	// (0x000229eb) popup_call6_1st_window_t2

0xea3f,	// (0x000229f9) popup_call6_1st_window_t3

0x0002,

0xfee9,	// (0x00023ea3) popup_call6_1st_window_t

0x28be,	// (0x00016878) bg_popup_call2_in_pane_cp04

0xea0a,	// (0x000229c4) popup_call6_2nd_window_g1

0xea12,	// (0x000229cc) popup_call6_2nd_window_g2

0xea1a,	// (0x000229d4) popup_call6_2nd_window_g3

0x0002,

0xfee2,	// (0x00023e9c) popup_call6_2nd_window_g

0xea22,	// (0x000229dc) popup_call6_2nd_window_t1

0x1293,	// (0x0001524d) bg_button_pane_cp15

0xea4d,	// (0x00022a07) cell_call6_btn_pane_g1

0xea56,	// (0x00022a10) cell_call6_btn_pane_t1

0xea65,	// (0x00022a1f) listscroll_wgtman_pane_ParamLimits

0xea65,	// (0x00022a1f) listscroll_wgtman_pane

0xea7f,	// (0x00022a39) wgtman_btn_pane_ParamLimits

0xea7f,	// (0x00022a39) wgtman_btn_pane

0x26ff,	// (0x000166b9) aid_scroll_copy1

0xeab2,	// (0x00022a6c) list_wgtman_pane

0xeabc,	// (0x00022a76) wgtman_btn_pane_g1_ParamLimits

0xeabc,	// (0x00022a76) wgtman_btn_pane_g1

0xeae4,	// (0x00022a9e) wgtman_btn_pane_t1_ParamLimits

0xeae4,	// (0x00022a9e) wgtman_btn_pane_t1

0xeb1b,	// (0x00022ad5) wgtman_btn_pane_t2_ParamLimits

0xeb1b,	// (0x00022ad5) wgtman_btn_pane_t2

0x0001,

0xfef0,	// (0x00023eaa) wgtman_btn_pane_t_ParamLimits

0xfef0,	// (0x00023eaa) wgtman_btn_pane_t

0xeb32,	// (0x00022aec) listrow_wgtman_pane_ParamLimits

0xeb32,	// (0x00022aec) listrow_wgtman_pane

0xeb43,	// (0x00022afd) listrow_wgtman_pane_g1

0xeb4c,	// (0x00022b06) listrow_wgtman_pane_g2

0x0001,

0xfef5,	// (0x00023eaf) listrow_wgtman_pane_g

0xeb54,	// (0x00022b0e) listrow_wgtman_pane_t1

0xeb62,	// (0x00022b1c) listrow_wgtman_pane_t2

0x0001,

0xfefa,	// (0x00023eb4) listrow_wgtman_pane_t

0xeb70,	// (0x00022b2a) wait_bar_pane_cp09

0xeb78,	// (0x00022b32) main_calllock_btn_pane

0xeb80,	// (0x00022b3a) main_calllock_pane_g1

0x1293,	// (0x0001524d) bg_button_pane_cp17

0xeb89,	// (0x00022b43) main_calllock_btn_pane_g1

0xeb92,	// (0x00022b4c) main_calllock_btn_pane_t1

0x1293,	// (0x0001524d) main_dialer3_pane

0x1293,	// (0x0001524d) main_fmrd2_pane

0x42a9,	// (0x00018263) main_fs_bigclock_unlock_btn_pane_g1

0xeba9,	// (0x00022b63) main_fs_bigclock_unlock_btn_pane_t1

0xebb7,	// (0x00022b71) area_fmrd2_info_pane_ParamLimits

0xebb7,	// (0x00022b71) area_fmrd2_info_pane

0xebc3,	// (0x00022b7d) area_fmrd2_visual_pane_ParamLimits

0xebc3,	// (0x00022b7d) area_fmrd2_visual_pane

0xebd1,	// (0x00022b8b) fmrd2_indi_pane_ParamLimits

0xebd1,	// (0x00022b8b) fmrd2_indi_pane

0xebde,	// (0x00022b98) area_fmrd2_visual_pane_g1

0xebe6,	// (0x00022ba0) area_fmrd2_visual_pane_t1

0xebf4,	// (0x00022bae) area_fmrd2_visual_pane_t2

0xec02,	// (0x00022bbc) area_fmrd2_visual_pane_t3

0x0002,

0xff04,	// (0x00023ebe) area_fmrd2_visual_pane_t

0xec10,	// (0x00022bca) area_fmrd2_info_pane_g1

0xec18,	// (0x00022bd2) area_fmrd2_info_pane_t1

0xec26,	// (0x00022be0) area_fmrd2_info_pane_t2

0xec34,	// (0x00022bee) area_fmrd2_info_pane_t3

0xec42,	// (0x00022bfc) area_fmrd2_info_pane_t4

0x0003,

0xff0b,	// (0x00023ec5) area_fmrd2_info_pane_t

0xec50,	// (0x00022c0a) fmrd2_indi_pane_t1

0xec5e,	// (0x00022c18) fmrd2_indi_pane_t2

0xec6c,	// (0x00022c26) fmrd2_indi_pane_t3

0x0002,

0xff14,	// (0x00023ece) fmrd2_indi_pane_t

0x5ff6,	// (0x00019fb0) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x5ff6,	// (0x00019fb0) list_single_fs_bigclock_indicator_pane_g5

0x6098,	// (0x0001a052) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x6098,	// (0x0001a052) list_single_fs_bigclock_indicator_pane_t5

0xde49,	// (0x00021e03) aid_cell_bcale_month_pane_ParamLimits

0xde49,	// (0x00021e03) aid_cell_bcale_month_pane

0xde5e,	// (0x00021e18) bcale_month_pane_ParamLimits

0xde5e,	// (0x00021e18) bcale_month_pane

0xde6a,	// (0x00021e24) bcale_preview_pane_ParamLimits

0xde6a,	// (0x00021e24) bcale_preview_pane

0xe623,	// (0x000225dd) list_single_fs_bigclock_pane_t1_ParamLimits

0xe63d,	// (0x000225f7) list_single_fs_bigclock_pane_t2_ParamLimits

0xe63d,	// (0x000225f7) list_single_fs_bigclock_pane_t2

0x0001,

0xfe9b,	// (0x00023e55) list_single_fs_bigclock_pane_t_ParamLimits

0xfe9b,	// (0x00023e55) list_single_fs_bigclock_pane_t

0xeba1,	// (0x00022b5b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeff,	// (0x00023eb9) main_fs_bigclock_unlock_btn_pane_g

0xec7a,	// (0x00022c34) aid_dia3_key_size_ParamLimits

0xec7a,	// (0x00022c34) aid_dia3_key_size

0xec86,	// (0x00022c40) aid_dia3_listrow_size_ParamLimits

0xec86,	// (0x00022c40) aid_dia3_listrow_size

0xec94,	// (0x00022c4e) dia3_keypad_fun_pane_ParamLimits

0xec94,	// (0x00022c4e) dia3_keypad_fun_pane

0xeca0,	// (0x00022c5a) dia3_keypad_num_pane_ParamLimits

0xeca0,	// (0x00022c5a) dia3_keypad_num_pane

0xecac,	// (0x00022c66) dia3_listscroll_pane_ParamLimits

0xecac,	// (0x00022c66) dia3_listscroll_pane

0xecb8,	// (0x00022c72) dia3_numentry_pane_ParamLimits

0xecb8,	// (0x00022c72) dia3_numentry_pane

0xecc4,	// (0x00022c7e) dia3_list_pane

0xeccd,	// (0x00022c87) scroll_pane_cp12

0x1293,	// (0x0001524d) bg_dia3_numentry_pane

0xecd6,	// (0x00022c90) dia3_numentry_pane_t1

0xece5,	// (0x00022c9f) cell_dia3_key_num_pane

0xeced,	// (0x00022ca7) cell_dia3_key0_fun_pane_ParamLimits

0xeced,	// (0x00022ca7) cell_dia3_key0_fun_pane

0xecfa,	// (0x00022cb4) cell_dia3_key1_fun_pane_ParamLimits

0xecfa,	// (0x00022cb4) cell_dia3_key1_fun_pane

0xed07,	// (0x00022cc1) dia3_listrow_pane

0x5d28,	// (0x00019ce2) bg_dia3_numentry_pane_g1

0x1293,	// (0x0001524d) bg_button_pane_cp21

0xed14,	// (0x00022cce) cell_dia3_key_num_pane_t1

0xed22,	// (0x00022cdc) cell_dia3_key_num_pane_t2

0xed31,	// (0x00022ceb) cell_dia3_key_num_pane_t3

0xed40,	// (0x00022cfa) cell_dia3_key_num_pane_t4

0x0003,

0xff1b,	// (0x00023ed5) cell_dia3_key_num_pane_t

0x1293,	// (0x0001524d) bg_button_pane_cp19

0xed4f,	// (0x00022d09) cell_dia3_key0_fun_pane_g1

0x1293,	// (0x0001524d) bg_button_pane_cp20

0xed57,	// (0x00022d11) cell_dia3_key1_fun_pane_g1

0xed5f,	// (0x00022d19) area_left_week_number_pane

0xed68,	// (0x00022d22) area_top_day_name_pane

0xed71,	// (0x00022d2b) frame_month_view_pane

0xed79,	// (0x00022d33) grid_month_view_pane

0xed83,	// (0x00022d3d) cell_top_day_name_pane_ParamLimits

0xed83,	// (0x00022d3d) cell_top_day_name_pane

0xed99,	// (0x00022d53) cell_area_left_week_number_pane_ParamLimits

0xed99,	// (0x00022d53) cell_area_left_week_number_pane

0xedad,	// (0x00022d67) cell_month_view_pane_ParamLimits

0xedad,	// (0x00022d67) cell_month_view_pane

0xedc8,	// (0x00022d82) frm_month_g1

0xedd1,	// (0x00022d8b) frm_month_g2

0xedd9,	// (0x00022d93) frm_month_g3

0xede1,	// (0x00022d9b) frm_month_g4

0xede9,	// (0x00022da3) frm_month_g5

0xedf1,	// (0x00022dab) frm_month_g6

0xedf9,	// (0x00022db3) frm_month_g7

0xee01,	// (0x00022dbb) frm_month_g8

0xee0a,	// (0x00022dc4) frm_month_g9

0xee13,	// (0x00022dcd) frm_month_g10

0xbfb4,	// (0x0001ff6e) frm_month_g11

0xee1c,	// (0x00022dd6) frm_month_g12

0xee25,	// (0x00022ddf) frm_month_g13

0xee2e,	// (0x00022de8) frm_month_g14

0xee37,	// (0x00022df1) frm_month_g15

0xee40,	// (0x00022dfa) frm_month_g16

0x000f,

0xff24,	// (0x00023ede) frm_month_g

0xee49,	// (0x00022e03) cell_top_day_name_pane_t1

0xee58,	// (0x00022e12) cell_area_left_week_number_pane_g1

0xee49,	// (0x00022e03) cell_area_left_week_number_pane_t1

0x42a9,	// (0x00018263) cell_month_view_pane_g1

0xee60,	// (0x00022e1a) cell_month_view_pane_t1

0x1293,	// (0x0001524d) main_fps_pane

0x6282,	// (0x0001a23c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x6282,	// (0x0001a23c) cmail_ddmenu_btn02_pane_cp1

0x629e,	// (0x0001a258) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x629e,	// (0x0001a258) cmail_ddmenu_btn02_pane_cp2

0xe345,	// (0x000222ff) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe345,	// (0x000222ff) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe4c,	// (0x00023e06) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe4c,	// (0x00023e06) cmail_ddmenu_btn02_pane_g

0xe363,	// (0x0002231d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe363,	// (0x0002231d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe51,	// (0x00023e0b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe51,	// (0x00023e0b) cmail_ddmenu_btn02_pane_t

0xee6f,	// (0x00022e29) fps_text_pane_ParamLimits

0xee6f,	// (0x00022e29) fps_text_pane

0xee7c,	// (0x00022e36) main_fps_pane_g1_ParamLimits

0xee7c,	// (0x00022e36) main_fps_pane_g1

0xee88,	// (0x00022e42) wait_bar_pane_cp010_ParamLimits

0xee88,	// (0x00022e42) wait_bar_pane_cp010

0xee94,	// (0x00022e4e) fps_text_pane_t1_ParamLimits

0xee94,	// (0x00022e4e) fps_text_pane_t1

0xbfa2,	// (0x0001ff5c) cam4_image_uncrop_pane_g1

0xbfab,	// (0x0001ff65) cam4_image_uncrop_pane_g2

0xbfb4,	// (0x0001ff6e) cam4_image_uncrop_pane_g3

0xbfbd,	// (0x0001ff77) cam4_image_uncrop_pane_g4

0x0003,

0xf92f,	// (0x000238e9) cam4_image_uncrop_pane_g

0xed07,	// (0x00022cc1) dia3_listrow_pane_ParamLimits

0x1293,	// (0x0001524d) main_phob2_pane

0xdb43,	// (0x00021afd) cell_tport_appsw_pane_cp02_ParamLimits

0xdb43,	// (0x00021afd) cell_tport_appsw_pane_cp02

0xdb50,	// (0x00021b0a) cell_tport_appsw_pane_cp03_ParamLimits

0xdb50,	// (0x00021b0a) cell_tport_appsw_pane_cp03

0x1293,	// (0x0001524d) phob2_contact_card_pane

0x1293,	// (0x0001524d) phob2_listscroll_pane

0xeead,	// (0x00022e67) phob2_list_pane

0xeeb5,	// (0x00022e6f) scroll_pane_cp034

0xeebd,	// (0x00022e77) phob2_cc_data_pane_ParamLimits

0xeebd,	// (0x00022e77) phob2_cc_data_pane

0xeed5,	// (0x00022e8f) phob2_cc_listscroll_pane_ParamLimits

0xeed5,	// (0x00022e8f) phob2_cc_listscroll_pane

0xeeed,	// (0x00022ea7) list_double_large_graphic_phob2_pane_ParamLimits

0xeeed,	// (0x00022ea7) list_double_large_graphic_phob2_pane

0xef00,	// (0x00022eba) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xef00,	// (0x00022eba) list_double_large_graphic_phob2_pane_g1

0xef0d,	// (0x00022ec7) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xef0d,	// (0x00022ec7) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff45,	// (0x00023eff) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff45,	// (0x00023eff) list_double_large_graphic_phob2_pane_g

0xef19,	// (0x00022ed3) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xef19,	// (0x00022ed3) list_double_large_graphic_phob2_pane_t1

0xef2e,	// (0x00022ee8) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xef2e,	// (0x00022ee8) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff4a,	// (0x00023f04) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff4a,	// (0x00023f04) list_double_large_graphic_phob2_pane_t

0x1293,	// (0x0001524d) list_highlight_pane_cp024

0xef40,	// (0x00022efa) phob2_cc_button_pane

0xef48,	// (0x00022f02) phob2_cc_data_pane_g1_ParamLimits

0xef48,	// (0x00022f02) phob2_cc_data_pane_g1

0xef54,	// (0x00022f0e) phob2_cc_data_pane_g2_ParamLimits

0xef54,	// (0x00022f0e) phob2_cc_data_pane_g2

0x0001,

0xff4f,	// (0x00023f09) phob2_cc_data_pane_g_ParamLimits

0xff4f,	// (0x00023f09) phob2_cc_data_pane_g

0xef60,	// (0x00022f1a) phob2_cc_data_pane_t1_ParamLimits

0xef60,	// (0x00022f1a) phob2_cc_data_pane_t1

0xef72,	// (0x00022f2c) phob2_cc_data_pane_t2_ParamLimits

0xef72,	// (0x00022f2c) phob2_cc_data_pane_t2

0xef84,	// (0x00022f3e) phob2_cc_data_pane_t3_ParamLimits

0xef84,	// (0x00022f3e) phob2_cc_data_pane_t3

0x0002,

0xff54,	// (0x00023f0e) phob2_cc_data_pane_t_ParamLimits

0xff54,	// (0x00023f0e) phob2_cc_data_pane_t

0xef96,	// (0x00022f50) phob2_cc_list_pane_ParamLimits

0xef96,	// (0x00022f50) phob2_cc_list_pane

0xefa2,	// (0x00022f5c) scroll_pane_cp035_ParamLimits

0xefa2,	// (0x00022f5c) scroll_pane_cp035

0x12e6,	// (0x000152a0) bg_button_pane_cp033

0xefae,	// (0x00022f68) phob2_cc_button_pane_g1

0xefba,	// (0x00022f74) phob2_cc_button_pane_t1

0xefcf,	// (0x00022f89) phob2_cc_button_pane_t2

0x0001,

0xff5b,	// (0x00023f15) phob2_cc_button_pane_t

0xefe1,	// (0x00022f9b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xefe1,	// (0x00022f9b) list_double_large_graphic_phob2_cc_pane

0xeffc,	// (0x00022fb6) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xeffc,	// (0x00022fb6) list_double_large_graphic_phob2_cc_pane_g1

0xf00d,	// (0x00022fc7) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xf00d,	// (0x00022fc7) list_double_large_graphic_phob2_cc_pane_g2

0xf01c,	// (0x00022fd6) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xf01c,	// (0x00022fd6) list_double_large_graphic_phob2_cc_pane_g3

0xf02b,	// (0x00022fe5) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xf02b,	// (0x00022fe5) list_double_large_graphic_phob2_cc_pane_g4

0xf03c,	// (0x00022ff6) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xf03c,	// (0x00022ff6) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff60,	// (0x00023f1a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff60,	// (0x00023f1a) list_double_large_graphic_phob2_cc_pane_g

0xf04b,	// (0x00023005) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xf04b,	// (0x00023005) list_double_large_graphic_phob2_cc_pane_t1

0xf074,	// (0x0002302e) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xf074,	// (0x0002302e) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff6b,	// (0x00023f25) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff6b,	// (0x00023f25) list_double_large_graphic_phob2_cc_pane_t

0xf09d,	// (0x00023057) list_highlight_pane_cp025_ParamLimits

0xf09d,	// (0x00023057) list_highlight_pane_cp025

0x12e6,	// (0x000152a0) bg_button_pane_cp033_ParamLimits

0xefae,	// (0x00022f68) phob2_cc_button_pane_g1_ParamLimits

0xefba,	// (0x00022f74) phob2_cc_button_pane_t1_ParamLimits

0xefcf,	// (0x00022f89) phob2_cc_button_pane_t2_ParamLimits

0xff5b,	// (0x00023f15) phob2_cc_button_pane_t_ParamLimits

0x88d0,	// (0x0001c88a) popup_wgtman_window

0x5d48,	// (0x00019d02) scroll_pane_cp038

0xea9a,	// (0x00022a54) wgtman_btn_pane_cp_01_ParamLimits

0xea9a,	// (0x00022a54) wgtman_btn_pane_cp_01

0xf0ab,	// (0x00023065) wgtman_content_pane

0xf0b4,	// (0x0002306e) wgtman_heading_pane

0x1293,	// (0x0001524d) bg_heading_pane_cp02

0xf0bd,	// (0x00023077) wgtman_heading_pane_g1

0xf0c5,	// (0x0002307f) wgtman_heading_pane_t1

0xf0d3,	// (0x0002308d) scroll_pane_cp036

0xf0db,	// (0x00023095) wgtman_list_pane

0xf0e3,	// (0x0002309d) wgtman_list_pane_t1_ParamLimits

0xf0e3,	// (0x0002309d) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Normal
