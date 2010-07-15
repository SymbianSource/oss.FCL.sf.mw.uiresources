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

#include "aknlayoutscalable_elaf_pqp_apps_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x000642fe };

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
0x765f,	// (0x0006b95d) Screen

0x7669,	// (0x0006b967) application_window

0x76c5,	// (0x0006b9c3) area_bottom_pane_ParamLimits

0x76c5,	// (0x0006b9c3) area_bottom_pane

0x7701,	// (0x0006b9ff) area_top_pane_ParamLimits

0x7701,	// (0x0006b9ff) area_top_pane

0x775d,	// (0x0006ba5b) call_video_uplink_pane_ParamLimits

0x775d,	// (0x0006ba5b) call_video_uplink_pane

0x7798,	// (0x0006ba96) main_pane_ParamLimits

0x7798,	// (0x0006ba96) main_pane

0x48a6,	// (0x00068ba4) context_pane

0xa565,	// (0x0006e863) navi_pane

0xa57f,	// (0x0006e87d) popup_cale_events_window_ParamLimits

0xa57f,	// (0x0006e87d) popup_cale_events_window

0x48b9,	// (0x00068bb7) popup_mup_playback_window

0xa596,	// (0x0006e894) signal_pane

0x0748,	// (0x00064a46) main_browser_pane

0x09b7,	// (0x00064cb5) main_burst_pane

0x3c2b,	// (0x00067f29) main_calc_pane

0x4882,	// (0x00068b80) main_cale_day_pane

0x7e0c,	// (0x0006c10a) main_cale_month_pane

0x4882,	// (0x00068b80) main_cale_week_pane

0x09b7,	// (0x00064cb5) main_call_pane

0x0402,	// (0x00064700) main_call_poc_pane

0x09b7,	// (0x00064cb5) main_camera_pane

0x09b7,	// (0x00064cb5) main_chi_dic_pane

0x124c,	// (0x0006554a) main_clock_pane

0x0402,	// (0x00064700) main_fmradio_pane

0x09b7,	// (0x00064cb5) main_graph_messa_pane

0x0402,	// (0x00064700) main_help_pane

0x0748,	// (0x00064a46) main_im_pane

0x065d,	// (0x0006495b) main_image_pane_ParamLimits

0x065d,	// (0x0006495b) main_image_pane

0x0402,	// (0x00064700) main_location2_pane

0x09b7,	// (0x00064cb5) main_location_pane

0x065d,	// (0x0006495b) main_messa_pane

0x0402,	// (0x00064700) main_mp2_pane

0x09b7,	// (0x00064cb5) main_mp_pane

0x0402,	// (0x00064700) main_msg_pane

0x0402,	// (0x00064700) main_mup_eq_pane

0x0402,	// (0x00064700) main_mup_pane

0x0748,	// (0x00064a46) main_notes_pane

0x0402,	// (0x00064700) main_pec_pane

0x0402,	// (0x00064700) main_phob_pane

0x0402,	// (0x00064700) main_pinb_pane

0x0402,	// (0x00064700) main_postcard_pane

0x0402,	// (0x00064700) main_qdial_pane

0x09b7,	// (0x00064cb5) main_skin_pane

0x0402,	// (0x00064700) main_smil2_pane

0x09b7,	// (0x00064cb5) main_smil_pane

0x09b7,	// (0x00064cb5) main_video_pane

0x09b7,	// (0x00064cb5) main_video_tele_pane

0x065d,	// (0x0006495b) main_viewer_pane_ParamLimits

0x065d,	// (0x0006495b) main_viewer_pane

0x09b7,	// (0x00064cb5) main_vorec_pane

0xa463,	// (0x0006e761) popup_blid_sat_info_window_ParamLimits

0xa463,	// (0x0006e761) popup_blid_sat_info_window

0xa47f,	// (0x0006e77d) popup_dyc_status_message_window_ParamLimits

0xa47f,	// (0x0006e77d) popup_dyc_status_message_window

0xa48b,	// (0x0006e789) popup_grid_large_graphic_window_ParamLimits

0xa48b,	// (0x0006e789) popup_grid_large_graphic_window

0xa4fc,	// (0x0006e7fa) popup_loc_request_window_ParamLimits

0xa4fc,	// (0x0006e7fa) popup_loc_request_window

0xa53f,	// (0x0006e83d) popup_wml_address_window_ParamLimits

0xa53f,	// (0x0006e83d) popup_wml_address_window

0xa340,	// (0x0006e63e) call_muted_g1

0xa07b,	// (0x0006e379) popup_call_audio_conf_window_ParamLimits

0xa07b,	// (0x0006e379) popup_call_audio_conf_window

0xa350,	// (0x0006e64e) popup_call_audio_first_window_ParamLimits

0xa350,	// (0x0006e64e) popup_call_audio_first_window

0xa384,	// (0x0006e682) popup_call_audio_in_window_ParamLimits

0xa384,	// (0x0006e682) popup_call_audio_in_window

0xa3a0,	// (0x0006e69e) popup_call_audio_out_window_ParamLimits

0xa3a0,	// (0x0006e69e) popup_call_audio_out_window

0xa3bc,	// (0x0006e6ba) popup_call_audio_second_window_ParamLimits

0xa3bc,	// (0x0006e6ba) popup_call_audio_second_window

0xa3e4,	// (0x0006e6e2) popup_call_audio_wait_window_ParamLimits

0xa3e4,	// (0x0006e6e2) popup_call_audio_wait_window

0xa403,	// (0x0006e701) popup_number_entry_window_ParamLimits

0xa403,	// (0x0006e701) popup_number_entry_window

0x7916,	// (0x0006bc14) bg_popup_call_pane_cp05_ParamLimits

0x7916,	// (0x0006bc14) bg_popup_call_pane_cp05

0x0011,	// (0x0006430f) popup_number_entry_window_t1

0x0024,	// (0x00064322) popup_number_entry_window_t2

0x0036,	// (0x00064334) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x000733ad) popup_number_entry_window_t

0x0048,	// (0x00064346) text_title_cp2

0x005b,	// (0x00064359) bg_popup_call_pane_cp_ParamLimits

0x005b,	// (0x00064359) bg_popup_call_pane_cp

0x0069,	// (0x00064367) call_thumbnail_pane

0x0071,	// (0x0006436f) popup_call_audio_in_window_g1_ParamLimits

0x0071,	// (0x0006436f) popup_call_audio_in_window_g1

0x007d,	// (0x0006437b) popup_call_audio_in_window_g2_ParamLimits

0x007d,	// (0x0006437b) popup_call_audio_in_window_g2

0x0089,	// (0x00064387) popup_call_audio_in_window_g3_ParamLimits

0x0089,	// (0x00064387) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x000733b6) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x000733b6) popup_call_audio_in_window_g

0x0095,	// (0x00064393) popup_call_audio_in_window_t1_ParamLimits

0x0095,	// (0x00064393) popup_call_audio_in_window_t1

0x00b0,	// (0x000643ae) popup_call_audio_in_window_t2_ParamLimits

0x00b0,	// (0x000643ae) popup_call_audio_in_window_t2

0x00cb,	// (0x000643c9) popup_call_audio_in_window_t3_ParamLimits

0x00cb,	// (0x000643c9) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x000733bd) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x000733bd) popup_call_audio_in_window_t

0x005b,	// (0x00064359) bg_popup_call_pane_cp01_ParamLimits

0x005b,	// (0x00064359) bg_popup_call_pane_cp01

0x0069,	// (0x00064367) call_thumbnail_pane_cp02

0x00de,	// (0x000643dc) call_type_pane_cp022

0x00e6,	// (0x000643e4) popup_call_audio_out_window_g1_ParamLimits

0x00e6,	// (0x000643e4) popup_call_audio_out_window_g1

0x00f8,	// (0x000643f6) popup_call_audio_out_window_g2_ParamLimits

0x00f8,	// (0x000643f6) popup_call_audio_out_window_g2

0x0104,	// (0x00064402) popup_call_audio_out_window_g3_ParamLimits

0x0104,	// (0x00064402) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x000733c4) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x000733c4) popup_call_audio_out_window_g

0x0116,	// (0x00064414) popup_call_audio_out_window_t1_ParamLimits

0x0116,	// (0x00064414) popup_call_audio_out_window_t1

0x012e,	// (0x0006442c) popup_call_audio_out_window_t2_ParamLimits

0x012e,	// (0x0006442c) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x000733cb) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x000733cb) popup_call_audio_out_window_t

0x0143,	// (0x00064441) bg_popup_call_pane_ParamLimits

0x0143,	// (0x00064441) bg_popup_call_pane

0x796b,	// (0x0006bc69) call_thumbnail_pane_cp_ParamLimits

0x796b,	// (0x0006bc69) call_thumbnail_pane_cp

0x01c7,	// (0x000644c5) call_type_pane_cp01_ParamLimits

0x01c7,	// (0x000644c5) call_type_pane_cp01

0x020b,	// (0x00064509) popup_call_audio_first_window_g1_ParamLimits

0x020b,	// (0x00064509) popup_call_audio_first_window_g1

0x0257,	// (0x00064555) popup_call_audio_first_window_g2_ParamLimits

0x0257,	// (0x00064555) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x000733d0) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x000733d0) popup_call_audio_first_window_g

0x029b,	// (0x00064599) popup_call_audio_first_window_t1_ParamLimits

0x029b,	// (0x00064599) popup_call_audio_first_window_t1

0x0347,	// (0x00064645) popup_call_audio_first_window_t4_ParamLimits

0x0347,	// (0x00064645) popup_call_audio_first_window_t4

0x03d3,	// (0x000646d1) popup_call_audio_first_window_t5_ParamLimits

0x03d3,	// (0x000646d1) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x000733d5) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x000733d5) popup_call_audio_first_window_t

0x0402,	// (0x00064700) bg_popup_call_pane_cp02

0x040c,	// (0x0006470a) call_type_pane_cp023

0x0414,	// (0x00064712) popup_call_audio_wait_window_g1

0x041c,	// (0x0006471a) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x000733dc) popup_call_audio_wait_window_g

0x0424,	// (0x00064722) popup_call_audio_wait_window_t3

0x0432,	// (0x00064730) bg_popup_call_pane_cp03_ParamLimits

0x0432,	// (0x00064730) bg_popup_call_pane_cp03

0x0492,	// (0x00064790) call_thumbnail_pane_cp011_ParamLimits

0x0492,	// (0x00064790) call_thumbnail_pane_cp011

0x049e,	// (0x0006479c) call_type_pane_cp034_ParamLimits

0x049e,	// (0x0006479c) call_type_pane_cp034

0x04da,	// (0x000647d8) popup_call_audio_second_window_g1_ParamLimits

0x04da,	// (0x000647d8) popup_call_audio_second_window_g1

0x0516,	// (0x00064814) popup_call_audio_second_window_g2_ParamLimits

0x0516,	// (0x00064814) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x000733e1) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x000733e1) popup_call_audio_second_window_g

0x0552,	// (0x00064850) popup_call_audio_second_window_t1_ParamLimits

0x0552,	// (0x00064850) popup_call_audio_second_window_t1

0x05d3,	// (0x000648d1) popup_call_audio_second_window_t2_ParamLimits

0x05d3,	// (0x000648d1) popup_call_audio_second_window_t2

0x0609,	// (0x00064907) popup_call_audio_second_window_t3_ParamLimits

0x0609,	// (0x00064907) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x000733e6) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x000733e6) popup_call_audio_second_window_t

0x0402,	// (0x00064700) bg_popup_call_pane_cp04

0x063f,	// (0x0006493d) list_conf_pane

0x0647,	// (0x00064945) popup_call_audio_conf_window_t1

0x0655,	// (0x00064953) call_thumbnail_pane_g1

0x065d,	// (0x0006495b) bg_pinb_pane_ParamLimits

0x065d,	// (0x0006495b) bg_pinb_pane

0x066b,	// (0x00064969) find_pinb_pane

0x0674,	// (0x00064972) listscroll_pinb_pane_ParamLimits

0x0674,	// (0x00064972) listscroll_pinb_pane

0x0683,	// (0x00064981) pinb_bg_pane_g1

0x798f,	// (0x0006bc8d) pinb_bg_pane_g2

0x7999,	// (0x0006bc97) pinb_bg_pane_g3

0x79a3,	// (0x0006bca1) pinb_bg_pane_g4

0x79ad,	// (0x0006bcab) pinb_bg_pane_g5

0x79b7,	// (0x0006bcb5) pinb_bg_pane_g6

0x79c2,	// (0x0006bcc0) pinb_bg_pane_g7

0x79cd,	// (0x0006bccb) pinb_bg_pane_g8

0x79d6,	// (0x0006bcd4) pinb_bg_pane_g9

0x79de,	// (0x0006bcdc) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x000733ed) pinb_bg_pane_g

0x79fb,	// (0x0006bcf9) grid_pinb_pane

0x7a04,	// (0x0006bd02) list_pinb_pane

0x7a0f,	// (0x0006bd0d) scroll_pane_cp01_ParamLimits

0x7a0f,	// (0x0006bd0d) scroll_pane_cp01

0x068d,	// (0x0006498b) find_pinb_pane_g1_ParamLimits

0x068d,	// (0x0006498b) find_pinb_pane_g1

0x06a5,	// (0x000649a3) find_pinb_pane_t1

0x06b7,	// (0x000649b5) find_pinb_pane_t2

0x0001,

0xf109,	// (0x00073407) find_pinb_pane_t

0x06cc,	// (0x000649ca) input_focus_pane_cp01_ParamLimits

0x06cc,	// (0x000649ca) input_focus_pane_cp01

0x7a1f,	// (0x0006bd1d) cell_pinb_pane_ParamLimits

0x7a1f,	// (0x0006bd1d) cell_pinb_pane

0x7a38,	// (0x0006bd36) cell_pinb_pane_g1_ParamLimits

0x7a38,	// (0x0006bd36) cell_pinb_pane_g1

0x7a4c,	// (0x0006bd4a) cell_pinb_pane_g2_ParamLimits

0x7a4c,	// (0x0006bd4a) cell_pinb_pane_g2

0x06d8,	// (0x000649d6) cell_pinb_pane_g3_ParamLimits

0x06d8,	// (0x000649d6) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0007340c) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0007340c) cell_pinb_pane_g

0x0402,	// (0x00064700) grid_highlight_pane_cp01

0x7a58,	// (0x0006bd56) list_pinb_item_pane_ParamLimits

0x7a58,	// (0x0006bd56) list_pinb_item_pane

0x0402,	// (0x00064700) list_highlight_pane_cp02

0x7a6d,	// (0x0006bd6b) list_pinb_item_pane_g1_ParamLimits

0x7a6d,	// (0x0006bd6b) list_pinb_item_pane_g1

0x7a7a,	// (0x0006bd78) list_pinb_item_pane_g2_ParamLimits

0x7a7a,	// (0x0006bd78) list_pinb_item_pane_g2

0x7a86,	// (0x0006bd84) list_pinb_item_pane_g3_ParamLimits

0x7a86,	// (0x0006bd84) list_pinb_item_pane_g3

0x7a95,	// (0x0006bd93) list_pinb_item_pane_g4_ParamLimits

0x7a95,	// (0x0006bd93) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x00073413) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x00073413) list_pinb_item_pane_g

0x7aa1,	// (0x0006bd9f) list_pinb_item_pane_t1_ParamLimits

0x7aa1,	// (0x0006bd9f) list_pinb_item_pane_t1

0x7ad2,	// (0x0006bdd0) calc_display_pane

0x7aea,	// (0x0006bde8) calc_paper_pane

0x7b06,	// (0x0006be04) grid_calc_pane

0x0402,	// (0x00064700) bg_list_pane_cp01

0x7b26,	// (0x0006be24) clock_g1

0x7b2e,	// (0x0006be2c) clock_g2

0x0001,

0xf11e,	// (0x0007341c) clock_g

0x7b36,	// (0x0006be34) clock_t1_ParamLimits

0x7b36,	// (0x0006be34) clock_t1

0x7b4b,	// (0x0006be49) clock_t2_ParamLimits

0x7b4b,	// (0x0006be49) clock_t2

0x7b5d,	// (0x0006be5b) clock_t3_ParamLimits

0x7b5d,	// (0x0006be5b) clock_t3

0x7b6f,	// (0x0006be6d) clock_t4_ParamLimits

0x7b6f,	// (0x0006be6d) clock_t4

0x7b81,	// (0x0006be7f) clock_t5_ParamLimits

0x7b81,	// (0x0006be7f) clock_t5

0x7b96,	// (0x0006be94) clock_t6_ParamLimits

0x7b96,	// (0x0006be94) clock_t6

0x7ba8,	// (0x0006bea6) clock_t7_ParamLimits

0x7ba8,	// (0x0006bea6) clock_t7

0x7bba,	// (0x0006beb8) clock_t8_ParamLimits

0x7bba,	// (0x0006beb8) clock_t8

0x7bcc,	// (0x0006beca) clock_t9_ParamLimits

0x7bcc,	// (0x0006beca) clock_t9

0x0008,

0xf123,	// (0x00073421) clock_t_ParamLimits

0xf123,	// (0x00073421) clock_t

0x06ec,	// (0x000649ea) popup_clock_analogue_window_cp02

0x06ec,	// (0x000649ea) popup_clock_digital_window_cp01

0x06f4,	// (0x000649f2) listscroll_help_pane

0x0402,	// (0x00064700) phob_pre_status_pane

0x06fe,	// (0x000649fc) grid_qdial_pane

0x065d,	// (0x0006495b) listscroll_mce_pane

0x065d,	// (0x0006495b) bg_notes_pane

0x0708,	// (0x00064a06) list_notes_pane

0x7bde,	// (0x0006bedc) scroll_pane_cp06

0x0716,	// (0x00064a14) bg_calc_paper_pane

0x7beb,	// (0x0006bee9) list_calc_pane

0x0748,	// (0x00064a46) bg_calc_display_pane

0x7c05,	// (0x0006bf03) calc_display_pane_t1

0x7c1a,	// (0x0006bf18) calc_display_pane_t2

0x7c2f,	// (0x0006bf2d) calc_display_pane_t3

0x0002,

0xf136,	// (0x00073434) calc_display_pane_t

0x7c41,	// (0x0006bf3f) cell_calc_pane_ParamLimits

0x7c41,	// (0x0006bf3f) cell_calc_pane

0x0790,	// (0x00064a8e) bg_calc_paper_pane_g1

0x07a8,	// (0x00064aa6) bg_calc_paper_pane_g2

0x079c,	// (0x00064a9a) bg_calc_paper_pane_g3

0x07c0,	// (0x00064abe) bg_calc_paper_pane_g4

0x07b4,	// (0x00064ab2) bg_calc_paper_pane_g5

0x7c68,	// (0x0006bf66) bg_calc_paper_pane_g6

0x7c77,	// (0x0006bf75) bg_calc_paper_pane_g7

0x7c86,	// (0x0006bf84) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0007343b) bg_calc_paper_pane_g

0x7c95,	// (0x0006bf93) calc_bg_paper_pane_g9

0x7ca4,	// (0x0006bfa2) list_calc_item_pane_ParamLimits

0x7ca4,	// (0x0006bfa2) list_calc_item_pane

0x07cc,	// (0x00064aca) list_calc_item_pane_g1

0x7cbd,	// (0x0006bfbb) list_calc_item_pane_t1_ParamLimits

0x7cbd,	// (0x0006bfbb) list_calc_item_pane_t1

0x7ccf,	// (0x0006bfcd) list_calc_item_pane_t2_ParamLimits

0x7ccf,	// (0x0006bfcd) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0007344c) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0007344c) list_calc_item_pane_t

0x07eb,	// (0x00064ae9) cell_calc_pane_g1

0x07f5,	// (0x00064af3) grid_highlight_pane_cp02

0x082a,	// (0x00064b28) bg_calc_display_pane_g1

0x7cfd,	// (0x0006bffb) bg_calc_display_pane_g2

0x0817,	// (0x00064b15) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x00073456) bg_calc_display_pane_g

0x7d07,	// (0x0006c005) cell_qdial_pane_ParamLimits

0x7d07,	// (0x0006c005) cell_qdial_pane

0x7d19,	// (0x0006c017) cell_qdial_pane_g1_ParamLimits

0x7d19,	// (0x0006c017) cell_qdial_pane_g1

0x7d26,	// (0x0006c024) cell_qdial_pane_g2_ParamLimits

0x7d26,	// (0x0006c024) cell_qdial_pane_g2

0x0833,	// (0x00064b31) cell_qdial_pane_g3_ParamLimits

0x0833,	// (0x00064b31) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0007345d) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0007345d) cell_qdial_pane_g

0x7d44,	// (0x0006c042) cell_qdial_pane_t1_ParamLimits

0x7d44,	// (0x0006c042) cell_qdial_pane_t1

0x7d5c,	// (0x0006c05a) cell_qdial_pane_t2_ParamLimits

0x7d5c,	// (0x0006c05a) cell_qdial_pane_t2

0x7d6f,	// (0x0006c06d) cell_qdial_pane_t3_ParamLimits

0x7d6f,	// (0x0006c06d) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x00073466) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x00073466) cell_qdial_pane_t

0x0402,	// (0x00064700) grid_highlight_pane_cp04

0x083f,	// (0x00064b3d) thumbnail_qdial_pane_ParamLimits

0x083f,	// (0x00064b3d) thumbnail_qdial_pane

0x089b,	// (0x00064b99) list_help_pane

0x08a5,	// (0x00064ba3) scroll_pane_cp02

0x7d82,	// (0x0006c080) help_list_pane_t1_ParamLimits

0x7d82,	// (0x0006c080) help_list_pane_t1

0x7da0,	// (0x0006c09e) bg_notes_pane_g2

0x7da8,	// (0x0006c0a6) bg_notes_pane_g3

0x7db0,	// (0x0006c0ae) notes_bg_pane_g1

0x7db8,	// (0x0006c0b6) notes_bg_pane_g4

0x7dc0,	// (0x0006c0be) notes_bg_pane_g5

0x7dc8,	// (0x0006c0c6) notes_bg_pane_g6

0x7dd0,	// (0x0006c0ce) notes_bg_pane_g7

0x7dd8,	// (0x0006c0d6) notes_bg_pane_g8

0x7de0,	// (0x0006c0de) notes_bg_pane_g9

0x0006,

0xf186,	// (0x00073484) notes_bg_pane_g

0x7de8,	// (0x0006c0e6) list_notes_text_pane_ParamLimits

0x7de8,	// (0x0006c0e6) list_notes_text_pane

0x08f6,	// (0x00064bf4) list_notes_text_pane_g1

0x6429,	// (0x0006a727) list_notes_text_pane_t1

0x7e0c,	// (0x0006c10a) listscroll_cale_week_pane

0x7e31,	// (0x0006c12f) bg_cale_heading_pane

0x0919,	// (0x00064c17) bg_cale_pane_cp01

0x7e49,	// (0x0006c147) cale_week_corner_pane

0x7e63,	// (0x0006c161) cale_week_day_heading_pane

0x7e7b,	// (0x0006c179) cale_week_scroll_pane_g1

0x7e8e,	// (0x0006c18c) cale_week_scroll_pane_g2

0x7ea1,	// (0x0006c19f) cale_week_scroll_pane_g3

0x7eb4,	// (0x0006c1b2) cale_week_scroll_pane_g4

0x7ec7,	// (0x0006c1c5) cale_week_scroll_pane_g5

0x7eda,	// (0x0006c1d8) cale_week_scroll_pane_g6

0x7eed,	// (0x0006c1eb) cale_week_scroll_pane_g7

0x7f00,	// (0x0006c1fe) cale_week_scroll_pane_g8

0x7f13,	// (0x0006c211) cale_week_scroll_pane_g9

0x7f26,	// (0x0006c224) cale_week_scroll_pane_g10

0x7f39,	// (0x0006c237) cale_week_scroll_pane_g11

0x7f4c,	// (0x0006c24a) cale_week_scroll_pane_g12

0x7f5f,	// (0x0006c25d) cale_week_scroll_pane_g13

0x7f72,	// (0x0006c270) cale_week_scroll_pane_g14

0x7f85,	// (0x0006c283) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x00073493) cale_week_scroll_pane_g

0x7fab,	// (0x0006c2a9) cale_week_time_pane

0x7fbe,	// (0x0006c2bc) grid_cale_week_pane

0x0948,	// (0x00064c46) scroll_pane_cp08

0x7fd3,	// (0x0006c2d1) cell_cale_week_pane_ParamLimits

0x7fd3,	// (0x0006c2d1) cell_cale_week_pane

0x8021,	// (0x0006c31f) cale_week_day_heading_pane_t1

0x805c,	// (0x0006c35a) cale_week_day_heading_pane_t2

0x8097,	// (0x0006c395) cale_week_day_heading_pane_t3

0x80d2,	// (0x0006c3d0) cale_week_day_heading_pane_t4

0x810d,	// (0x0006c40b) cale_week_day_heading_pane_t5

0x8148,	// (0x0006c446) cale_week_day_heading_pane_t6

0x8183,	// (0x0006c481) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x000734b4) cale_week_day_heading_pane_t

0x0965,	// (0x00064c63) bg_cale_side_pane

0x81be,	// (0x0006c4bc) cale_week_time_pane_t1

0x81f8,	// (0x0006c4f6) cale_week_time_pane_t2

0x8232,	// (0x0006c530) cale_week_time_pane_t3

0x826c,	// (0x0006c56a) cale_week_time_pane_t4

0x82a6,	// (0x0006c5a4) cale_week_time_pane_t5

0x82e0,	// (0x0006c5de) cale_week_time_pane_t6

0x831a,	// (0x0006c618) cale_week_time_pane_t7

0x8354,	// (0x0006c652) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x000734c3) cale_week_time_pane_t

0x838e,	// (0x0006c68c) cell_cale_week_pane_g2

0x83b2,	// (0x0006c6b0) cell_cale_week_pane_g3_ParamLimits

0x83b2,	// (0x0006c6b0) cell_cale_week_pane_g3

0x0973,	// (0x00064c71) grid_highlight_pane_cp07

0x097b,	// (0x00064c79) listscroll_gms_pane

0x0985,	// (0x00064c83) grid_gms_pane

0x098e,	// (0x00064c8c) listscroll_gms_pane_g1

0x0996,	// (0x00064c94) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x000734d4) listscroll_gms_pane_g

0x83ca,	// (0x0006c6c8) scroll_pane_cp010

0x83d3,	// (0x0006c6d1) cell_gms_pane_ParamLimits

0x83d3,	// (0x0006c6d1) cell_gms_pane

0x83e4,	// (0x0006c6e2) cell_gms_pane_g1

0x099e,	// (0x00064c9c) cell_gms_pane_g2

0x08f6,	// (0x00064bf4) cell_gms_pane_g3

0x09a6,	// (0x00064ca4) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x000734d9) cell_gms_pane_g

0x09af,	// (0x00064cad) grid_highlight_pane_cp09

0xa2ee,	// (0x0006e5ec) phob_pre_status_pane_g1

0xa2f6,	// (0x0006e5f4) phob_pre_status_pane_g2

0xa2fe,	// (0x0006e5fc) phob_pre_status_pane_g3

0xa306,	// (0x0006e604) phob_pre_status_pane_g4

0x0004,

0xf5d9,	// (0x000738d7) phob_pre_status_pane_g

0xa316,	// (0x0006e614) phob_pre_status_pane_t1

0xa324,	// (0x0006e622) phob_pre_status_pane_t2

0xa332,	// (0x0006e630) phob_pre_status_pane_t3

0x0002,

0xf5e4,	// (0x000738e2) phob_pre_status_pane_t

0x09b7,	// (0x00064cb5) bg_list_pane_cp05

0x83ec,	// (0x0006c6ea) grid_vorec_pane

0x09bf,	// (0x00064cbd) vorec_t1

0x09cd,	// (0x00064ccb) vorec_t2

0x09db,	// (0x00064cd9) vorec_t3

0x83f4,	// (0x0006c6f2) vorec_t4

0xec83,	// (0x00072f81) vorec_t5

0xec91,	// (0x00072f8f) vorec_t6

0x0004,

0xf1e4,	// (0x000734e2) vorec_t

0xec9f,	// (0x00072f9d) wait_bar_pane_cp01

0x1815,	// (0x00065b13) cell_vorec_pane_ParamLimits

0x1815,	// (0x00065b13) cell_vorec_pane

0x8402,	// (0x0006c700) cell_vorec_pane_g1

0x0402,	// (0x00064700) grid_highlight_pane_cp05

0x8418,	// (0x0006c716) cams_zoom_pane

0x8424,	// (0x0006c722) image_vga_pane

0x8431,	// (0x0006c72f) main_camera_pane_g1

0x843d,	// (0x0006c73b) main_camera_pane_g2

0x8449,	// (0x0006c747) main_camera_pane_g3

0x8455,	// (0x0006c753) main_camera_pane_g4

0x8461,	// (0x0006c75f) main_camera_pane_g5

0x846d,	// (0x0006c76b) main_camera_pane_g6

0x8479,	// (0x0006c777) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x000734ed) main_camera_pane_g

0x8485,	// (0x0006c783) main_camera_pane_t1

0x8497,	// (0x0006c795) main_camera_pane_t2

0x0001,

0xf200,	// (0x000734fe) main_camera_pane_t

0x84bb,	// (0x0006c7b9) cams_zoom_pane_cp_ParamLimits

0x84bb,	// (0x0006c7b9) cams_zoom_pane_cp

0x84df,	// (0x0006c7dd) image_cif_pane_ParamLimits

0x84df,	// (0x0006c7dd) image_cif_pane

0x84f9,	// (0x0006c7f7) image_subqcif_pane

0x8501,	// (0x0006c7ff) main_video_pane_g1_ParamLimits

0x8501,	// (0x0006c7ff) main_video_pane_g1

0x8521,	// (0x0006c81f) main_video_pane_g2_ParamLimits

0x8521,	// (0x0006c81f) main_video_pane_g2

0x854f,	// (0x0006c84d) main_video_pane_g3_ParamLimits

0x854f,	// (0x0006c84d) main_video_pane_g3

0x8578,	// (0x0006c876) main_video_pane_g4_ParamLimits

0x8578,	// (0x0006c876) main_video_pane_g4

0x85a1,	// (0x0006c89f) main_video_pane_g5_ParamLimits

0x85a1,	// (0x0006c89f) main_video_pane_g5

0x0a0d,	// (0x00064d0b) main_video_pane_g6_ParamLimits

0x0a0d,	// (0x00064d0b) main_video_pane_g6

0x0006,

0xf205,	// (0x00073503) main_video_pane_g_ParamLimits

0xf205,	// (0x00073503) main_video_pane_g

0x85c3,	// (0x0006c8c1) main_video_pane_t1_ParamLimits

0x85c3,	// (0x0006c8c1) main_video_pane_t1

0x0a27,	// (0x00064d25) cams_zoom_pane_g1

0x0a30,	// (0x00064d2e) cams_zoom_pane_g2

0x0a39,	// (0x00064d37) cams_zoom_pane_g3

0x0a42,	// (0x00064d40) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x00073512) cams_zoom_pane_g

0x860d,	// (0x0006c90b) grid_cams_pane

0x8619,	// (0x0006c917) linegrid_cams_pane

0x8625,	// (0x0006c923) cell_cams_pane_ParamLimits

0x8625,	// (0x0006c923) cell_cams_pane

0x0a4b,	// (0x00064d49) cams_burst_image_pane

0x0a53,	// (0x00064d51) cell_cams_pane_g1

0x0402,	// (0x00064700) grid_highlight_pane_cp03

0x07eb,	// (0x00064ae9) mp_bg_pane_g1

0x0402,	// (0x00064700) bg_list_pane_cp03

0x47a7,	// (0x00068aa5) bg_mp_pane

0x47af,	// (0x00068aad) grid_mp_pane

0x47b7,	// (0x00068ab5) media_player_g1

0x47bf,	// (0x00068abd) media_player_t1

0x47cd,	// (0x00068acb) media_player_t2

0x47db,	// (0x00068ad9) media_player_t3

0x47e9,	// (0x00068ae7) media_player_t4

0x47f7,	// (0x00068af5) media_player_t5

0x4805,	// (0x00068b03) media_player_t6

0x4813,	// (0x00068b11) media_player_t7

0x0006,

0xf5c3,	// (0x000738c1) media_player_t

0x4821,	// (0x00068b1f) wait_bar_pane_cp02

0xf5a8,	// (0x000738a6) main_usb_pane_t

0xa2e5,	// (0x0006e5e3) cell_mp_pane

0x07eb,	// (0x00064ae9) cell_mp_pane_g1

0x0402,	// (0x00064700) grid_highlight_pane_cp06

0x0a5b,	// (0x00064d59) grid_skin_colour_pane

0x0a63,	// (0x00064d61) list_highlight_pane_cp03

0x8650,	// (0x0006c94e) skin_g1

0x0a6b,	// (0x00064d69) skin_t1

0x0a7a,	// (0x00064d78) skin_t2

0x0001,

0xf249,	// (0x00073547) skin_t

0x8658,	// (0x0006c956) cell_skin_colour_pane_ParamLimits

0x8658,	// (0x0006c956) cell_skin_colour_pane

0x0a88,	// (0x00064d86) cell_skin_colour_pane_g1

0x86ce,	// (0x0006c9cc) call_video_g1_ParamLimits

0x86ce,	// (0x0006c9cc) call_video_g1

0x86da,	// (0x0006c9d8) call_video_g2_ParamLimits

0x86da,	// (0x0006c9d8) call_video_g2

0x0001,

0xf24e,	// (0x0007354c) call_video_g_ParamLimits

0xf24e,	// (0x0007354c) call_video_g

0x872a,	// (0x0006ca28) call_video_uplink_pane_cp1_ParamLimits

0x872a,	// (0x0006ca28) call_video_uplink_pane_cp1

0x0a9a,	// (0x00064d98) call_video_uplink_pane_cp2

0x87e6,	// (0x0006cae4) video_down_crop_pane_ParamLimits

0x87e6,	// (0x0006cae4) video_down_crop_pane

0x88b0,	// (0x0006cbae) video_down_pane_ParamLimits

0x88b0,	// (0x0006cbae) video_down_pane

0x0aa2,	// (0x00064da0) video_down_subqcif_pane_ParamLimits

0x0aa2,	// (0x00064da0) video_down_subqcif_pane

0x0aba,	// (0x00064db8) video_down_subqcif_pane_cp_ParamLimits

0x0aba,	// (0x00064db8) video_down_subqcif_pane_cp

0x0ade,	// (0x00064ddc) im_reading_pane_ParamLimits

0x0ade,	// (0x00064ddc) im_reading_pane

0x897c,	// (0x0006cc7a) im_writing_pane_ParamLimits

0x897c,	// (0x0006cc7a) im_writing_pane

0x8992,	// (0x0006cc90) im_reading_pane_t1

0x0af8,	// (0x00064df6) list_im_pane

0x0b09,	// (0x00064e07) scroll_pane_cp07

0x89ca,	// (0x0006ccc8) im_writing_pane_t1_ParamLimits

0x89ca,	// (0x0006ccc8) im_writing_pane_t1

0x0b22,	// (0x00064e20) im_writing_pane_t2_ParamLimits

0x0b22,	// (0x00064e20) im_writing_pane_t2

0x0001,

0xf258,	// (0x00073556) im_writing_pane_t_ParamLimits

0xf258,	// (0x00073556) im_writing_pane_t

0x0402,	// (0x00064700) input_focus_pane_cp04

0x0402,	// (0x00064700) input_focus_pane_cp05

0x89df,	// (0x0006ccdd) list_im_single_pane_ParamLimits

0x89df,	// (0x0006ccdd) list_im_single_pane

0x0b3f,	// (0x00064e3d) list_single_im_pane_t1

0xa2ab,	// (0x0006e5a9) blid_accuracy_pane

0xa2b3,	// (0x0006e5b1) blid_compass_pane

0xa2bb,	// (0x0006e5b9) main_location_t1

0xa2c9,	// (0x0006e5c7) main_location_t2

0xa2d7,	// (0x0006e5d5) main_location_t3

0x0002,

0xf5d2,	// (0x000738d0) main_location_t

0x0402,	// (0x00064700) aid_levels_location

0x07eb,	// (0x00064ae9) blid_accuracy_pane_g1

0x07eb,	// (0x00064ae9) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x000735b8) blid_accuracy_pane_g

0x0b79,	// (0x00064e77) wml_content_pane

0x0bb7,	// (0x00064eb5) wml_button_pane_ParamLimits

0x0bb7,	// (0x00064eb5) wml_button_pane

0x89f7,	// (0x0006ccf5) wml_list_single_large_pane_ParamLimits

0x89f7,	// (0x0006ccf5) wml_list_single_large_pane

0x8a0e,	// (0x0006cd0c) wml_list_single_medium_pane_ParamLimits

0x8a0e,	// (0x0006cd0c) wml_list_single_medium_pane

0x8a26,	// (0x0006cd24) wml_list_single_small_pane_ParamLimits

0x8a26,	// (0x0006cd24) wml_list_single_small_pane

0x0bcb,	// (0x00064ec9) wml_selection_box_pane_ParamLimits

0x0bcb,	// (0x00064ec9) wml_selection_box_pane

0x0bde,	// (0x00064edc) wml_list_single_pane_t1

0x0bed,	// (0x00064eeb) wml_list_single_medium_pane_t1

0x0bfc,	// (0x00064efa) wml_list_single_large_pane_t1

0x0c0b,	// (0x00064f09) input_focus_pane_cp02_ParamLimits

0x0c0b,	// (0x00064f09) input_focus_pane_cp02

0x0c1e,	// (0x00064f1c) wml_selection_box_pane_g1

0x0c27,	// (0x00064f25) wml_selection_box_pane_t1_ParamLimits

0x0c27,	// (0x00064f25) wml_selection_box_pane_t1

0x065d,	// (0x0006495b) bg_wml_button_pane_ParamLimits

0x065d,	// (0x0006495b) bg_wml_button_pane

0x0c3f,	// (0x00064f3d) wml_button_pane_g1

0x0c47,	// (0x00064f45) wml_button_pane_t1

0x0c3f,	// (0x00064f3d) wml_button_bg_pane_g1

0x0c57,	// (0x00064f55) wml_button_bg_pane_g2

0x0c5f,	// (0x00064f5d) wml_button_bg_pane_g3

0x0c67,	// (0x00064f65) wml_button_bg_pane_g4

0x0c6f,	// (0x00064f6d) wml_button_bg_pane_g5

0x0c77,	// (0x00064f75) wml_button_bg_pane_g6

0x0c7f,	// (0x00064f7d) wml_button_bg_pane_g7

0x0c87,	// (0x00064f85) wml_button_bg_pane_g8

0x0c8f,	// (0x00064f8d) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0007355b) wml_button_bg_pane_g

0x8a41,	// (0x0006cd3f) bg_list_pane_cp02

0x0c97,	// (0x00064f95) mce_header_pane_ParamLimits

0x0c97,	// (0x00064f95) mce_header_pane

0x0cab,	// (0x00064fa9) mce_icon_pane

0x0cab,	// (0x00064fa9) mce_image_pane

0x0cb4,	// (0x00064fb2) mce_text_pane_ParamLimits

0x0cb4,	// (0x00064fb2) mce_text_pane

0x8a4a,	// (0x0006cd48) scroll_pane_cp03

0x8a4a,	// (0x0006cd48) scroll_pane_cp04

0x0cc8,	// (0x00064fc6) scroll_pane_cp05_ParamLimits

0x0cc8,	// (0x00064fc6) scroll_pane_cp05

0x8a52,	// (0x0006cd50) mce_header_field_pane_ParamLimits

0x8a52,	// (0x0006cd50) mce_header_field_pane

0x8a72,	// (0x0006cd70) mce_header_field_pane_2_ParamLimits

0x8a72,	// (0x0006cd70) mce_header_field_pane_2

0x8a88,	// (0x0006cd86) mce_header_field_pane_3

0x8a90,	// (0x0006cd8e) list_single_mce_message_pane_ParamLimits

0x8a90,	// (0x0006cd8e) list_single_mce_message_pane

0x8aa7,	// (0x0006cda5) list_single_mce_smart_pane_ParamLimits

0x8aa7,	// (0x0006cda5) list_single_mce_smart_pane

0x0cd4,	// (0x00064fd2) input_focus_pane_cp03

0x0cdd,	// (0x00064fdb) list_header_data_pane

0x8ac9,	// (0x0006cdc7) mce_header_field_pane_t1

0x8ad7,	// (0x0006cdd5) list_single_mce_header_pane_ParamLimits

0x8ad7,	// (0x0006cdd5) list_single_mce_header_pane

0x0ce5,	// (0x00064fe3) list_single_mce_header_pane_t1

0x0cf4,	// (0x00064ff2) list_single_mce_message_pane_g1

0x0cfd,	// (0x00064ffb) list_single_mce_message_pane_t1

0x8b15,	// (0x0006ce13) bg_cale_heading_pane_cp01_ParamLimits

0x8b15,	// (0x0006ce13) bg_cale_heading_pane_cp01

0x0d0c,	// (0x0006500a) bg_cale_pane_cp02_ParamLimits

0x0d0c,	// (0x0006500a) bg_cale_pane_cp02

0x8b44,	// (0x0006ce42) cale_month_corner_pane

0x8b5e,	// (0x0006ce5c) cale_month_day_heading_pane_ParamLimits

0x8b5e,	// (0x0006ce5c) cale_month_day_heading_pane

0x8b8d,	// (0x0006ce8b) cale_month_pane_g1_ParamLimits

0x8b8d,	// (0x0006ce8b) cale_month_pane_g1

0x8bb1,	// (0x0006ceaf) cale_month_pane_g2_ParamLimits

0x8bb1,	// (0x0006ceaf) cale_month_pane_g2

0x8bd0,	// (0x0006cece) cale_month_pane_g3_ParamLimits

0x8bd0,	// (0x0006cece) cale_month_pane_g3

0x8c0c,	// (0x0006cf0a) cale_month_pane_g4_ParamLimits

0x8c0c,	// (0x0006cf0a) cale_month_pane_g4

0x8c48,	// (0x0006cf46) cale_month_pane_g5_ParamLimits

0x8c48,	// (0x0006cf46) cale_month_pane_g5

0x8c84,	// (0x0006cf82) cale_month_pane_g6_ParamLimits

0x8c84,	// (0x0006cf82) cale_month_pane_g6

0x8cc0,	// (0x0006cfbe) cale_month_pane_g7_ParamLimits

0x8cc0,	// (0x0006cfbe) cale_month_pane_g7

0x8cfc,	// (0x0006cffa) cale_month_pane_g8_ParamLimits

0x8cfc,	// (0x0006cffa) cale_month_pane_g8

0x8d38,	// (0x0006d036) cale_month_pane_g9_ParamLimits

0x8d38,	// (0x0006d036) cale_month_pane_g9

0x8d72,	// (0x0006d070) cale_month_pane_g10_ParamLimits

0x8d72,	// (0x0006d070) cale_month_pane_g10

0x8dac,	// (0x0006d0aa) cale_month_pane_g11_ParamLimits

0x8dac,	// (0x0006d0aa) cale_month_pane_g11

0x8de6,	// (0x0006d0e4) cale_month_pane_g12_ParamLimits

0x8de6,	// (0x0006d0e4) cale_month_pane_g12

0x8e20,	// (0x0006d11e) cale_month_pane_g13_ParamLimits

0x8e20,	// (0x0006d11e) cale_month_pane_g13

0x000c,

0xf270,	// (0x0007356e) cale_month_pane_g_ParamLimits

0xf270,	// (0x0007356e) cale_month_pane_g

0x8e5a,	// (0x0006d158) cale_month_week_pane

0x8e6d,	// (0x0006d16b) grid_cale_month_pane_ParamLimits

0x8e6d,	// (0x0006d16b) grid_cale_month_pane

0x8e93,	// (0x0006d191) cale_month_day_heading_pane_t1

0x8f19,	// (0x0006d217) cale_month_day_heading_pane_t2

0x8faa,	// (0x0006d2a8) cale_month_day_heading_pane_t3

0x903b,	// (0x0006d339) cale_month_day_heading_pane_t4

0x90cc,	// (0x0006d3ca) cale_month_day_heading_pane_t5

0x915d,	// (0x0006d45b) cale_month_day_heading_pane_t6

0x91ee,	// (0x0006d4ec) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x00073589) cale_month_day_heading_pane_t

0x0965,	// (0x00064c63) bg_cale_side_pane_cp01

0x927f,	// (0x0006d57d) cale_month_week_pane_t1

0x92b8,	// (0x0006d5b6) cale_month_week_pane_t2

0x92f1,	// (0x0006d5ef) cale_month_week_pane_t3

0x932a,	// (0x0006d628) cale_month_week_pane_t4

0x9363,	// (0x0006d661) cale_month_week_pane_t5

0x939c,	// (0x0006d69a) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x00073598) cale_month_week_pane_t

0x93d5,	// (0x0006d6d3) cell_cale_month_pane_ParamLimits

0x93d5,	// (0x0006d6d3) cell_cale_month_pane

0x94c3,	// (0x0006d7c1) cell_cale_month_pane_g1

0x94cf,	// (0x0006d7cd) cell_cale_month_pane_t1_ParamLimits

0x94cf,	// (0x0006d7cd) cell_cale_month_pane_t1

0x0973,	// (0x00064c71) grid_highlight_pane_cp08

0x07eb,	// (0x00064ae9) main_smil_g1

0x94ef,	// (0x0006d7ed) smil_status_pane

0x0d57,	// (0x00065055) smil_text_pane

0x4687,	// (0x00068985) bg_popup_call3_rect_pane_g8

0x468f,	// (0x0006898d) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x00073851) bg_popup_call3_rect_pane_g

0x4933,	// (0x00068c31) smil_status_volume_pane_g1

0x9500,	// (0x0006d7fe) smil_status_pane_t1

0xa628,	// (0x0006e926) volume_smil_pane

0x0d61,	// (0x0006505f) list_smil_text_pane

0x9517,	// (0x0006d815) scroll_pane_cp011

0x9520,	// (0x0006d81e) smil_text_list_pane_t1_ParamLimits

0x9520,	// (0x0006d81e) smil_text_list_pane_t1

0x955f,	// (0x0006d85d) aid_volume_smil_ParamLimits

0x955f,	// (0x0006d85d) aid_volume_smil

0x07eb,	// (0x00064ae9) smil_volume_pane_g1

0x07eb,	// (0x00064ae9) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x000735b8) smil_volume_pane_g

0x7e0c,	// (0x0006c10a) listscroll_cale_day_pane

0x0d8d,	// (0x0006508b) bg_cale_pane

0x0da5,	// (0x000650a3) list_cale_pane

0x0dc8,	// (0x000650c6) scroll_pane_cp09

0x0dd9,	// (0x000650d7) cale_bg_pane_g1

0x0de1,	// (0x000650df) cale_bg_pane_g2

0x0de9,	// (0x000650e7) cale_bg_pane_g3

0x0df1,	// (0x000650ef) cale_bg_pane_g4

0x0df9,	// (0x000650f7) cale_bg_pane_g5

0x0e01,	// (0x000650ff) cale_bg_pane_g6

0x0e09,	// (0x00065107) cale_bg_pane_g7

0x0e11,	// (0x0006510f) cale_bg_pane_g8

0x0e19,	// (0x00065117) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x000735bd) cale_bg_pane_g

0x9589,	// (0x0006d887) list_cale_time_pane_ParamLimits

0x9589,	// (0x0006d887) list_cale_time_pane

0x0e21,	// (0x0006511f) list_cale_time_pane_g1_ParamLimits

0x0e21,	// (0x0006511f) list_cale_time_pane_g1

0x0e2d,	// (0x0006512b) list_cale_time_pane_g2_ParamLimits

0x0e2d,	// (0x0006512b) list_cale_time_pane_g2

0x959d,	// (0x0006d89b) list_cale_time_pane_g3_ParamLimits

0x959d,	// (0x0006d89b) list_cale_time_pane_g3

0x95a9,	// (0x0006d8a7) list_cale_time_pane_g4_ParamLimits

0x95a9,	// (0x0006d8a7) list_cale_time_pane_g4

0x95b5,	// (0x0006d8b3) list_cale_time_pane_g5_ParamLimits

0x95b5,	// (0x0006d8b3) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x000735d0) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x000735d0) list_cale_time_pane_g

0x0e47,	// (0x00065145) list_cale_time_pane_t1_ParamLimits

0x0e47,	// (0x00065145) list_cale_time_pane_t1

0x0e6f,	// (0x0006516d) list_cale_time_pane_t2_ParamLimits

0x0e6f,	// (0x0006516d) list_cale_time_pane_t2

0x9872,	// (0x0006db70) aid_blid_cardinal_pane

0x98b0,	// (0x0006dbae) compass_pane_t4

0x0e97,	// (0x00065195) list_cale_time_pane_t4_ParamLimits

0x0e97,	// (0x00065195) list_cale_time_pane_t4

0x98be,	// (0x0006dbbc) compass_pane_t5

0x98cc,	// (0x0006dbca) compass_pane_t6

0x98da,	// (0x0006dbd8) compass_pane_t7

0x1371,	// (0x0006566f) navi_pane_cc_t1

0x1528,	// (0x00065826) aid_phob_thumbnail_center_pane

0x9e58,	// (0x0006e156) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x000735dd) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x000735dd) list_cale_time_pane_t

0x005b,	// (0x00064359) bg_popup_window_pane_cp02_ParamLimits

0x005b,	// (0x00064359) bg_popup_window_pane_cp02

0x0ebf,	// (0x000651bd) heading_pane_cp01_ParamLimits

0x0ebf,	// (0x000651bd) heading_pane_cp01

0x0ecb,	// (0x000651c9) loc_req_pane_ParamLimits

0x0ecb,	// (0x000651c9) loc_req_pane

0x0edb,	// (0x000651d9) loc_type_pane_ParamLimits

0x0edb,	// (0x000651d9) loc_type_pane

0x0eed,	// (0x000651eb) loc_type_pane_t1_ParamLimits

0x0eed,	// (0x000651eb) loc_type_pane_t1

0x0eff,	// (0x000651fd) loc_type_pane_t2_ParamLimits

0x0eff,	// (0x000651fd) loc_type_pane_t2

0x0f11,	// (0x0006520f) loc_type_pane_t3_ParamLimits

0x0f11,	// (0x0006520f) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x000735e4) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x000735e4) loc_type_pane_t

0x0f23,	// (0x00065221) list_loc_req_pane

0x0f2d,	// (0x0006522b) scroll_pane_cp012

0x95c1,	// (0x0006d8bf) list_single_loc_request_popup_menu_pane_ParamLimits

0x95c1,	// (0x0006d8bf) list_single_loc_request_popup_menu_pane

0x0f36,	// (0x00065234) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0f36,	// (0x00065234) list_single_loc_request_popup_menu_pane_g1

0x0f42,	// (0x00065240) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0f42,	// (0x00065240) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x000735eb) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x000735eb) list_single_loc_request_popup_menu_pane_g

0x0f4e,	// (0x0006524c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0f4e,	// (0x0006524c) list_single_loc_request_popup_menu_pane_t1

0x95d3,	// (0x0006d8d1) bg_popup_window_pane_cp03_ParamLimits

0x95d3,	// (0x0006d8d1) bg_popup_window_pane_cp03

0x95e1,	// (0x0006d8df) heading_loc_req_pane_ParamLimits

0x95e1,	// (0x0006d8df) heading_loc_req_pane

0x95ed,	// (0x0006d8eb) popup_dyc_status_message_window_g1_ParamLimits

0x95ed,	// (0x0006d8eb) popup_dyc_status_message_window_g1

0x95f9,	// (0x0006d8f7) popup_dyc_status_message_window_t1_ParamLimits

0x95f9,	// (0x0006d8f7) popup_dyc_status_message_window_t1

0x960b,	// (0x0006d909) popup_dyc_status_message_window_t2_ParamLimits

0x960b,	// (0x0006d909) popup_dyc_status_message_window_t2

0x961d,	// (0x0006d91b) popup_dyc_status_message_window_t3_ParamLimits

0x961d,	// (0x0006d91b) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x000735f0) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x000735f0) popup_dyc_status_message_window_t

0x0402,	// (0x00064700) bg_heading_pane_cp01

0x0f70,	// (0x0006526e) heading_loc_req_pane_g1

0x0f78,	// (0x00065276) heading_loc_req_pane_g2

0x0f80,	// (0x0006527e) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x000735f7) heading_loc_req_pane_g

0x0f88,	// (0x00065286) heading_loc_req_pane_t1

0x0f97,	// (0x00065295) bg_popup_sub_pane_cp01_ParamLimits

0x0f97,	// (0x00065295) bg_popup_sub_pane_cp01

0x0fa5,	// (0x000652a3) popup_cale_events_window_g1_ParamLimits

0x0fa5,	// (0x000652a3) popup_cale_events_window_g1

0x0fc5,	// (0x000652c3) popup_cale_events_window_g2_ParamLimits

0x0fc5,	// (0x000652c3) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0007362b) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0007362b) popup_cale_events_window_g

0x0fe5,	// (0x000652e3) popup_cale_events_window_t1_ParamLimits

0x0fe5,	// (0x000652e3) popup_cale_events_window_t1

0x0ff7,	// (0x000652f5) popup_cale_events_window_t2_ParamLimits

0x0ff7,	// (0x000652f5) popup_cale_events_window_t2

0x1035,	// (0x00065333) popup_cale_events_window_t3_ParamLimits

0x1035,	// (0x00065333) popup_cale_events_window_t3

0x106f,	// (0x0006536d) popup_cale_events_window_t4_ParamLimits

0x106f,	// (0x0006536d) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x00073630) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x00073630) popup_cale_events_window_t

0x9649,	// (0x0006d947) call_type_pane

0x1540,	// (0x0006583e) popup_call_status_window_g1

0x9655,	// (0x0006d953) popup_call_status_window_g2

0x9661,	// (0x0006d95f) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x00073639) popup_call_status_window_g

0x10a5,	// (0x000653a3) call_type_pane_g1

0x10ae,	// (0x000653ac) call_type_pane_g2

0x0001,

0xf342,	// (0x00073640) call_type_pane_g

0x0402,	// (0x00064700) bg_popup_sub_pane_cp02

0x10b7,	// (0x000653b5) listscroll_popup_wml_pane

0x10bf,	// (0x000653bd) list_wml_pane

0x10c9,	// (0x000653c7) scroll_pane_cp013

0x966d,	// (0x0006d96b) list_single_graphic_popup_wml_pane_ParamLimits

0x966d,	// (0x0006d96b) list_single_graphic_popup_wml_pane

0x07eb,	// (0x00064ae9) list_single_graphic_popup_wml_pane_g1

0x10d2,	// (0x000653d0) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x00073645) list_single_graphic_popup_wml_pane_g

0x10da,	// (0x000653d8) list_single_graphic_popup_wml_pane_t1

0x10e8,	// (0x000653e6) aid_call_pane

0x0655,	// (0x00064953) popup_clock_analogue_window_g1

0x0655,	// (0x00064953) popup_clock_analogue_window_g2

0x9681,	// (0x0006d97f) popup_clock_analogue_window_g3

0x9681,	// (0x0006d97f) popup_clock_analogue_window_g4

0x07eb,	// (0x00064ae9) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0007364a) popup_clock_analogue_window_g

0x9689,	// (0x0006d987) popup_clock_analogue_window_t1

0x9697,	// (0x0006d995) clock_digital_number_pane_ParamLimits

0x9697,	// (0x0006d995) clock_digital_number_pane

0x96a3,	// (0x0006d9a1) clock_digital_number_pane_cp02_ParamLimits

0x96a3,	// (0x0006d9a1) clock_digital_number_pane_cp02

0x96af,	// (0x0006d9ad) clock_digital_number_pane_cp03_ParamLimits

0x96af,	// (0x0006d9ad) clock_digital_number_pane_cp03

0x96bb,	// (0x0006d9b9) clock_digital_number_pane_cp04_ParamLimits

0x96bb,	// (0x0006d9b9) clock_digital_number_pane_cp04

0x96c7,	// (0x0006d9c5) clock_digital_separator_pane_ParamLimits

0x96c7,	// (0x0006d9c5) clock_digital_separator_pane

0x96d3,	// (0x0006d9d1) popup_clock_digital_window_t1

0x07eb,	// (0x00064ae9) clock_digital_number_pane_g1

0x07eb,	// (0x00064ae9) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x000735b8) clock_digital_number_pane_g

0x07eb,	// (0x00064ae9) clock_digital_separator_pane_g1

0x07eb,	// (0x00064ae9) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x000735b8) clock_digital_separator_pane_g

0x0402,	// (0x00064700) bg_popup_window_pane_cp04

0x1167,	// (0x00065465) heading_pane_cp03

0x116f,	// (0x0006546d) listscroll_popup_gms_pane

0x1177,	// (0x00065475) grid_large_graphic_popup_pane

0x1181,	// (0x0006547f) listscroll_popup_gms_pane_g1

0x1189,	// (0x00065487) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x00073655) listscroll_popup_gms_pane_g

0x0baf,	// (0x00064ead) scroll_pane_cp014

0x96f0,	// (0x0006d9ee) cell_large_graphic_popup_pane_ParamLimits

0x96f0,	// (0x0006d9ee) cell_large_graphic_popup_pane

0x9707,	// (0x0006da05) cell_large_graphic_popup_pane_g1_ParamLimits

0x9707,	// (0x0006da05) cell_large_graphic_popup_pane_g1

0x1191,	// (0x0006548f) cell_large_graphic_popup_pane_g2_ParamLimits

0x1191,	// (0x0006548f) cell_large_graphic_popup_pane_g2

0x119d,	// (0x0006549b) cell_large_graphic_popup_pane_g3_ParamLimits

0x119d,	// (0x0006549b) cell_large_graphic_popup_pane_g3

0x11aa,	// (0x000654a8) cell_large_graphic_popup_pane_g4_ParamLimits

0x11aa,	// (0x000654a8) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0007365a) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0007365a) cell_large_graphic_popup_pane_g

0x11ba,	// (0x000654b8) grid_highlight_pane_cp010

0x07eb,	// (0x00064ae9) bg_popup_call_pane_g1

0x11c4,	// (0x000654c2) list_single_graphic_popup_conf_pane_ParamLimits

0x11c4,	// (0x000654c2) list_single_graphic_popup_conf_pane

0x11d7,	// (0x000654d5) list_highlight_pane_cp01

0x11e0,	// (0x000654de) list_single_graphic_popup_conf_pane_g1

0x11e8,	// (0x000654e6) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x00073663) list_single_graphic_popup_conf_pane_g

0x11f0,	// (0x000654ee) list_single_graphic_popup_conf_pane_t1

0x11fe,	// (0x000654fc) linegrid_cams_pane_g1

0x9713,	// (0x0006da11) linegrid_cams_pane_g2

0x08f6,	// (0x00064bf4) linegrid_cams_pane_g3

0x1207,	// (0x00065505) linegrid_cams_pane_g4

0x971c,	// (0x0006da1a) linegrid_cams_pane_g5

0x9725,	// (0x0006da23) linegrid_cams_pane_g6

0x09a6,	// (0x00064ca4) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x00073668) linegrid_cams_pane_g

0x1210,	// (0x0006550e) popup_clock_analogue_window

0x1210,	// (0x0006550e) popup_clock_digital_window

0x0402,	// (0x00064700) popup_phob_thumbnail_window

0x07eb,	// (0x00064ae9) call_video_uplink_pane_g1

0x1219,	// (0x00065517) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x00073677) call_video_uplink_pane_g

0x0973,	// (0x00064c71) video_uplink_pane

0x1221,	// (0x0006551f) mce_image_pane_g1

0x972e,	// (0x0006da2c) mce_image_pane_g2

0x9736,	// (0x0006da34) mce_image_pane_g3

0x973e,	// (0x0006da3c) mce_image_pane_g4

0x9746,	// (0x0006da44) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0007367c) mce_image_pane_g

0x122b,	// (0x00065529) control_top_pane_stacon_cp01_ParamLimits

0x122b,	// (0x00065529) control_top_pane_stacon_cp01

0x123b,	// (0x00065539) uni_indicator_pane_stacon_cp01_ParamLimits

0x123b,	// (0x00065539) uni_indicator_pane_stacon_cp01

0x124c,	// (0x0006554a) bg_popup_sub_pane_cp03

0x1256,	// (0x00065554) chi_dic_find_pane

0x974e,	// (0x0006da4c) listscroll_chi_dic_pane

0x125e,	// (0x0006555c) main_pane_chidic_g1

0x1266,	// (0x00065564) chi_dic_find_pane_t1

0x1274,	// (0x00065572) find_chidic_pane

0x127d,	// (0x0006557b) chi_dic_list_pane_ParamLimits

0x127d,	// (0x0006557b) chi_dic_list_pane

0x128e,	// (0x0006558c) scroll_pane_cp020

0x1296,	// (0x00065594) find_chidic_pane_t1

0x0402,	// (0x00064700) input_focus_pane_cp06

0x9760,	// (0x0006da5e) list_chi_dic_pane_ParamLimits

0x9760,	// (0x0006da5e) list_chi_dic_pane

0x9773,	// (0x0006da71) list_chi_dic_pane_t1_ParamLimits

0x9773,	// (0x0006da71) list_chi_dic_pane_t1

0x0402,	// (0x00064700) list_highlight_pane_cp020

0x12a5,	// (0x000655a3) bg_cale_heading_pane_g1

0x9786,	// (0x0006da84) bg_cale_heading_pane_g2

0x978e,	// (0x0006da8c) bg_cale_heading_pane_g3

0x9796,	// (0x0006da94) bg_cale_heading_pane_g4

0x979e,	// (0x0006da9c) bg_cale_heading_pane_g5

0x97a6,	// (0x0006daa4) bg_cale_heading_pane_g6

0x97ae,	// (0x0006daac) bg_cale_heading_pane_g7

0x97b6,	// (0x0006dab4) bg_cale_heading_pane_g8

0x97be,	// (0x0006dabc) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x00073687) bg_cale_heading_pane_g

0x12a5,	// (0x000655a3) bg_cale_side_pane_g1

0x97c6,	// (0x0006dac4) bg_cale_side_pane_g2

0x97ce,	// (0x0006dacc) bg_cale_side_pane_g3

0x97d6,	// (0x0006dad4) bg_cale_side_pane_g4

0x97de,	// (0x0006dadc) bg_cale_side_pane_g5

0x97e6,	// (0x0006dae4) bg_cale_side_pane_g6

0x97ee,	// (0x0006daec) bg_cale_side_pane_g7

0x97f6,	// (0x0006daf4) bg_cale_side_pane_g8

0x97fe,	// (0x0006dafc) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0007369a) bg_cale_side_pane_g

0x9806,	// (0x0006db04) popup_call_status_window_ParamLimits

0x9806,	// (0x0006db04) popup_call_status_window

0x12ad,	// (0x000655ab) stacon_top_pane

0x12b5,	// (0x000655b3) status_pane_ParamLimits

0x12b5,	// (0x000655b3) status_pane

0x12cf,	// (0x000655cd) status_small_pane

0x12d7,	// (0x000655d5) control_pane

0x0402,	// (0x00064700) stacon_bottom_pane

0x12df,	// (0x000655dd) list_single_mce_smart_pane_t1_ParamLimits

0x12df,	// (0x000655dd) list_single_mce_smart_pane_t1

0x12f2,	// (0x000655f0) list_single_mce_smart_pane_t2_ParamLimits

0x12f2,	// (0x000655f0) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x000736ad) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x000736ad) list_single_mce_smart_pane_t

0x9815,	// (0x0006db13) compass_pane

0x981e,	// (0x0006db1c) main_location2_pane_t1

0x9834,	// (0x0006db32) main_location2_pane_t2

0x984a,	// (0x0006db48) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x000736b2) main_location2_pane_t

0x131a,	// (0x00065618) compass_pane_g1_ParamLimits

0x131a,	// (0x00065618) compass_pane_g1

0x9892,	// (0x0006db90) compass_pane_t1

0x98a1,	// (0x0006db9f) compass_pane_t2

0x0005,

0xf3bd,	// (0x000736bb) compass_pane_t

0x98e8,	// (0x0006dbe6) text_secondary_cp61

0x1368,	// (0x00065666) navi_pane_cams_g5

0x13b4,	// (0x000656b2) navi_pane_im_t1

0x13c2,	// (0x000656c0) navi_pane_mp_g1_ParamLimits

0x13c2,	// (0x000656c0) navi_pane_mp_g1

0x13d6,	// (0x000656d4) navi_pane_mp_g2_ParamLimits

0x13d6,	// (0x000656d4) navi_pane_mp_g2

0x13e2,	// (0x000656e0) navi_pane_mp_g3_ParamLimits

0x13e2,	// (0x000656e0) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x000736cf) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x000736cf) navi_pane_mp_g

0x13ee,	// (0x000656ec) navi_pane_mp_t1

0x13fc,	// (0x000656fa) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x000736d6) navi_pane_mp_t

0x1467,	// (0x00065765) navi_pane_vt_g1

0x13ee,	// (0x000656ec) navi_pane_vt_t1

0x146f,	// (0x0006576d) navi_slider_pane

0x09b7,	// (0x00064cb5) zooming_pane

0x1477,	// (0x00065775) navi_slider_pane_g1

0x996a,	// (0x0006dc68) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x000736dd) navi_slider_pane_g

0x14ad,	// (0x000657ab) aid_levels_zoom

0x14b5,	// (0x000657b3) zooming_pane_g1

0x14bd,	// (0x000657bb) zooming_pane_g2

0x14bd,	// (0x000657bb) zooming_pane_g3

0x0002,

0xf3ee,	// (0x000736ec) zooming_pane_g

0x14c5,	// (0x000657c3) level_10_zoom

0x14ce,	// (0x000657cc) level_11_zoom

0x14d7,	// (0x000657d5) level_1_zoom

0x14e0,	// (0x000657de) level_2_zoom

0x14e9,	// (0x000657e7) level_3_zoom

0x14f2,	// (0x000657f0) level_4_zoom

0x14fb,	// (0x000657f9) level_5_zoom

0x1504,	// (0x00065802) level_6_zoom

0x150d,	// (0x0006580b) level_7_zoom

0x1516,	// (0x00065814) level_8_zoom

0x151f,	// (0x0006581d) level_9_zoom

0x1530,	// (0x0006582e) popup_phob_thumbnail_window_g1

0x1538,	// (0x00065836) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x000736f3) popup_phob_thumbnail_window_g

0x4829,	// (0x00068b27) level_1_location

0x4831,	// (0x00068b2f) level_2_location

0x4839,	// (0x00068b37) level_3_location

0x4841,	// (0x00068b3f) level_4_location

0x09b7,	// (0x00064cb5) level_5_location

0x997c,	// (0x0006dc7a) mce_icon_pane_g1

0x9984,	// (0x0006dc82) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x000736f8) mce_icon_pane_g

0x998c,	// (0x0006dc8a) main_mup_pane_g1_ParamLimits

0x998c,	// (0x0006dc8a) main_mup_pane_g1

0x99a4,	// (0x0006dca2) main_mup_pane_g2_ParamLimits

0x99a4,	// (0x0006dca2) main_mup_pane_g2

0x99c0,	// (0x0006dcbe) main_mup_pane_g3_ParamLimits

0x99c0,	// (0x0006dcbe) main_mup_pane_g3

0x99dc,	// (0x0006dcda) main_mup_pane_g4_ParamLimits

0x99dc,	// (0x0006dcda) main_mup_pane_g4

0x99f8,	// (0x0006dcf6) main_mup_pane_g5_ParamLimits

0x99f8,	// (0x0006dcf6) main_mup_pane_g5

0x9a15,	// (0x0006dd13) main_mup_pane_g6_ParamLimits

0x9a15,	// (0x0006dd13) main_mup_pane_g6

0x9a31,	// (0x0006dd2f) main_mup_pane_g7_ParamLimits

0x9a31,	// (0x0006dd2f) main_mup_pane_g7

0x9a4d,	// (0x0006dd4b) main_mup_pane_g8_ParamLimits

0x9a4d,	// (0x0006dd4b) main_mup_pane_g8

0x9a69,	// (0x0006dd67) main_mup_pane_g9_ParamLimits

0x9a69,	// (0x0006dd67) main_mup_pane_g9

0x9a80,	// (0x0006dd7e) main_mup_pane_g10_ParamLimits

0x9a80,	// (0x0006dd7e) main_mup_pane_g10

0x9a97,	// (0x0006dd95) main_mup_pane_g11_ParamLimits

0x9a97,	// (0x0006dd95) main_mup_pane_g11

0x9aab,	// (0x0006dda9) main_mup_pane_g12_ParamLimits

0x9aab,	// (0x0006dda9) main_mup_pane_g12

0x9ab7,	// (0x0006ddb5) main_mup_pane_g13_ParamLimits

0x9ab7,	// (0x0006ddb5) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x000736fd) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x000736fd) main_mup_pane_g

0x9acb,	// (0x0006ddc9) main_mup_pane_t1_ParamLimits

0x9acb,	// (0x0006ddc9) main_mup_pane_t1

0x9ae8,	// (0x0006dde6) main_mup_pane_t2_ParamLimits

0x9ae8,	// (0x0006dde6) main_mup_pane_t2

0x9b02,	// (0x0006de00) main_mup_pane_t3_ParamLimits

0x9b02,	// (0x0006de00) main_mup_pane_t3

0x9b1c,	// (0x0006de1a) main_mup_pane_t4_ParamLimits

0x9b1c,	// (0x0006de1a) main_mup_pane_t4

0x9b2e,	// (0x0006de2c) main_mup_pane_t5_ParamLimits

0x9b2e,	// (0x0006de2c) main_mup_pane_t5

0x9b40,	// (0x0006de3e) main_mup_pane_t6_ParamLimits

0x9b40,	// (0x0006de3e) main_mup_pane_t6

0x0005,

0xf41a,	// (0x00073718) main_mup_pane_t_ParamLimits

0xf41a,	// (0x00073718) main_mup_pane_t

0x9b56,	// (0x0006de54) mup_progress_pane_ParamLimits

0x9b56,	// (0x0006de54) mup_progress_pane

0x9b62,	// (0x0006de60) mup_visualizer_pane_ParamLimits

0x9b62,	// (0x0006de60) mup_visualizer_pane

0x9b90,	// (0x0006de8e) mup_volume_pane_ParamLimits

0x9b90,	// (0x0006de8e) mup_volume_pane

0x1540,	// (0x0006583e) mup_visualizer_pane_g1_ParamLimits

0x1540,	// (0x0006583e) mup_visualizer_pane_g1

0x1540,	// (0x0006583e) mup_visualizer_pane_g2_ParamLimits

0x1540,	// (0x0006583e) mup_visualizer_pane_g2

0x131a,	// (0x00065618) mup_visualizer_pane_g3_ParamLimits

0x131a,	// (0x00065618) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x00073725) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x00073725) mup_visualizer_pane_g

0x07eb,	// (0x00064ae9) mup_volume_pane_g1

0x1556,	// (0x00065854) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0007372c) mup_volume_pane_g

0x07eb,	// (0x00064ae9) mup_progress_pane_g1

0x155f,	// (0x0006585d) mup_progress_pane_g2

0x1568,	// (0x00065866) mup_progress_pane_g3

0x0002,

0xf433,	// (0x00073731) mup_progress_pane_g

0x0402,	// (0x00064700) bg_popup_window_pane_cp05

0x1571,	// (0x0006586f) heading_pane_cp02_ParamLimits

0x1571,	// (0x0006586f) heading_pane_cp02

0x158b,	// (0x00065889) list_popup_blid_pane

0x1593,	// (0x00065891) list_blid_sat_info_pane_ParamLimits

0x1593,	// (0x00065891) list_blid_sat_info_pane

0x15a6,	// (0x000658a4) list_blid_sat_info_pane_g1

0x15ae,	// (0x000658ac) list_blid_sat_info_pane_t1

0x9c83,	// (0x0006df81) mup_equalizer_pane_ParamLimits

0x9c83,	// (0x0006df81) mup_equalizer_pane

0x9c9c,	// (0x0006df9a) mup_equalizer_pane_cp1_ParamLimits

0x9c9c,	// (0x0006df9a) mup_equalizer_pane_cp1

0x9cb5,	// (0x0006dfb3) mup_equalizer_pane_cp2_ParamLimits

0x9cb5,	// (0x0006dfb3) mup_equalizer_pane_cp2

0x9cce,	// (0x0006dfcc) mup_equalizer_pane_cp3_ParamLimits

0x9cce,	// (0x0006dfcc) mup_equalizer_pane_cp3

0x9ce7,	// (0x0006dfe5) mup_equalizer_pane_cp4_ParamLimits

0x9ce7,	// (0x0006dfe5) mup_equalizer_pane_cp4

0x9d00,	// (0x0006dffe) mup_equalizer_pane_cp5

0x9d12,	// (0x0006e010) mup_equalizer_pane_cp6

0x9d24,	// (0x0006e022) mup_equalizer_pane_cp7

0x4707,	// (0x00068a05) bg_popup_call_poc_act_pane_g9

0x470f,	// (0x00068a0d) bg_popup_call_poc_act_pane_g10

0x4717,	// (0x00068a15) bg_popup_call_poc_act_pane_g11

0x000a,

0x065d,	// (0x0006495b) mup_scale_pane

0x07eb,	// (0x00064ae9) mup_scale_pane_g1

0x15bc,	// (0x000658ba) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0007374d) mup_scale_pane_g

0x15e0,	// (0x000658de) msg_data_pane

0x15e8,	// (0x000658e6) scroll_pane_cp017

0x6633,	// (0x0006a931) bg_list_pane_cp04_ParamLimits

0x6633,	// (0x0006a931) bg_list_pane_cp04

0x15f0,	// (0x000658ee) msg_data_pane_g1

0x972e,	// (0x0006da2c) msg_data_pane_g2

0x9736,	// (0x0006da34) msg_data_pane_g3

0x9d48,	// (0x0006e046) msg_data_pane_g4

0x9746,	// (0x0006da44) msg_data_pane_g5

0x997c,	// (0x0006dc7a) msg_data_pane_g6

0x9d50,	// (0x0006e04e) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0007375c) msg_data_pane_g

0x6653,	// (0x0006a951) msg_text_pane_ParamLimits

0x6653,	// (0x0006a951) msg_text_pane

0x9d58,	// (0x0006e056) qrid_highlight_pane_cp011_ParamLimits

0x9d58,	// (0x0006e056) qrid_highlight_pane_cp011

0x0402,	// (0x00064700) msg_body_pane

0x0402,	// (0x00064700) msg_header_pane

0x1601,	// (0x000658ff) input_focus_pane_cp07

0x6688,	// (0x0006a986) msg_header_pane_t1_ParamLimits

0x6688,	// (0x0006a986) msg_header_pane_t1

0x669a,	// (0x0006a998) msg_header_pane_t2_ParamLimits

0x669a,	// (0x0006a998) msg_header_pane_t2

0x0001,

0xf472,	// (0x00073770) msg_header_pane_t_ParamLimits

0xf472,	// (0x00073770) msg_header_pane_t

0x1616,	// (0x00065914) msg_body_pane_g1

0x66ac,	// (0x0006a9aa) msg_body_pane_t1_ParamLimits

0x66ac,	// (0x0006a9aa) msg_body_pane_t1

0x66d7,	// (0x0006a9d5) msg_body_pane_t2_ParamLimits

0x66d7,	// (0x0006a9d5) msg_body_pane_t2

0x66e9,	// (0x0006a9e7) msg_body_pane_t3_ParamLimits

0x66e9,	// (0x0006a9e7) msg_body_pane_t3

0x0002,

0xf477,	// (0x00073775) msg_body_pane_t_ParamLimits

0xf477,	// (0x00073775) msg_body_pane_t

0x9dbc,	// (0x0006e0ba) main_viewer_pane_g1_ParamLimits

0x9dbc,	// (0x0006e0ba) main_viewer_pane_g1

0x9dc8,	// (0x0006e0c6) main_viewer_pane_g2_ParamLimits

0x9dc8,	// (0x0006e0c6) main_viewer_pane_g2

0x9dd4,	// (0x0006e0d2) main_viewer_pane_g3_ParamLimits

0x9dd4,	// (0x0006e0d2) main_viewer_pane_g3

0x9de3,	// (0x0006e0e1) main_viewer_pane_g4_ParamLimits

0x9de3,	// (0x0006e0e1) main_viewer_pane_g4

0x9df2,	// (0x0006e0f0) main_viewer_pane_g5_ParamLimits

0x9df2,	// (0x0006e0f0) main_viewer_pane_g5

0x9df2,	// (0x0006e0f0) main_viewer_pane_g7_ParamLimits

0x9df2,	// (0x0006e0f0) main_viewer_pane_g7

0x9e04,	// (0x0006e102) main_viewer_pane_g8_ParamLimits

0x9e04,	// (0x0006e102) main_viewer_pane_g8

0x0007,

0xf487,	// (0x00073785) main_viewer_pane_g_ParamLimits

0xf487,	// (0x00073785) main_viewer_pane_g

0x1660,	// (0x0006595e) viewer_content_pane_ParamLimits

0x1660,	// (0x0006595e) viewer_content_pane

0x9e34,	// (0x0006e132) main_postcard_pane_g1_ParamLimits

0x9e34,	// (0x0006e132) main_postcard_pane_g1

0x9e40,	// (0x0006e13e) main_postcard_pane_g2_ParamLimits

0x9e40,	// (0x0006e13e) main_postcard_pane_g2

0x9e4c,	// (0x0006e14a) main_postcard_pane_g3_ParamLimits

0x9e4c,	// (0x0006e14a) main_postcard_pane_g3

0x0005,

0xf498,	// (0x00073796) main_postcard_pane_g_ParamLimits

0xf498,	// (0x00073796) main_postcard_pane_g

0x9e58,	// (0x0006e156) main_postcard_pane_g4

0x4920,	// (0x00068c1e) smil_status_volume_pane_g2

0x9e7c,	// (0x0006e17a) postcard_pane_ParamLimits

0x9e7c,	// (0x0006e17a) postcard_pane

0x1540,	// (0x0006583e) postcard_pane_g1_ParamLimits

0x1540,	// (0x0006583e) postcard_pane_g1

0x9eac,	// (0x0006e1aa) postcard_pane_g2_ParamLimits

0x9eac,	// (0x0006e1aa) postcard_pane_g2

0x9eb8,	// (0x0006e1b6) postcard_pane_g3_ParamLimits

0x9eb8,	// (0x0006e1b6) postcard_pane_g3

0x167c,	// (0x0006597a) postcard_pane_g4_ParamLimits

0x167c,	// (0x0006597a) postcard_pane_g4

0x9ec4,	// (0x0006e1c2) postcard_pane_g5_ParamLimits

0x9ec4,	// (0x0006e1c2) postcard_pane_g5

0x9ed0,	// (0x0006e1ce) postcard_pane_g6_ParamLimits

0x9ed0,	// (0x0006e1ce) postcard_pane_g6

0x166e,	// (0x0006596c) postcard_pane_g7_ParamLimits

0x166e,	// (0x0006596c) postcard_pane_g7

0x0006,

0xf4a5,	// (0x000737a3) postcard_pane_g_ParamLimits

0xf4a5,	// (0x000737a3) postcard_pane_g

0x9edc,	// (0x0006e1da) main_mp2_pane_g1_ParamLimits

0x9edc,	// (0x0006e1da) main_mp2_pane_g1

0x9ee8,	// (0x0006e1e6) main_mp2_pane_g2_ParamLimits

0x9ee8,	// (0x0006e1e6) main_mp2_pane_g2

0x9ef4,	// (0x0006e1f2) main_mp2_pane_g3_ParamLimits

0x9ef4,	// (0x0006e1f2) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x000737b2) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x000737b2) main_mp2_pane_g

0x9f00,	// (0x0006e1fe) main_mp2_pane_t1_ParamLimits

0x9f00,	// (0x0006e1fe) main_mp2_pane_t1

0x9f15,	// (0x0006e213) main_mp2_pane_t2_ParamLimits

0x9f15,	// (0x0006e213) main_mp2_pane_t2

0x9f27,	// (0x0006e225) main_mp2_pane_t3_ParamLimits

0x9f27,	// (0x0006e225) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x000737b9) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x000737b9) main_mp2_pane_t

0x168a,	// (0x00065988) pec_content_pane_ParamLimits

0x168a,	// (0x00065988) pec_content_pane

0x0baf,	// (0x00064ead) scroll_pane_cp015

0x169c,	// (0x0006599a) pec_attribute_pane_ParamLimits

0x169c,	// (0x0006599a) pec_attribute_pane

0x9f39,	// (0x0006e237) pec_content_pane_g1_ParamLimits

0x9f39,	// (0x0006e237) pec_content_pane_g1

0x16ac,	// (0x000659aa) pec_content_pane_t1_ParamLimits

0x16ac,	// (0x000659aa) pec_content_pane_t1

0x16be,	// (0x000659bc) pec_content_pane_t2_ParamLimits

0x16be,	// (0x000659bc) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x000737c0) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x000737c0) pec_content_pane_t

0x9f45,	// (0x0006e243) list_single_graphic_pane_cp01_ParamLimits

0x9f45,	// (0x0006e243) list_single_graphic_pane_cp01

0x065d,	// (0x0006495b) bg_popup_sub_pane_cp04

0x16d0,	// (0x000659ce) popup_mup_playback_window_g1

0x16dc,	// (0x000659da) popup_mup_playback_window_t1

0x16f1,	// (0x000659ef) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x000737c5) popup_mup_playback_window_t

0x1728,	// (0x00065a26) main_image_pane_g1_ParamLimits

0x1728,	// (0x00065a26) main_image_pane_g1

0x176b,	// (0x00065a69) scroll_pane_cp018_ParamLimits

0x176b,	// (0x00065a69) scroll_pane_cp018

0x1783,	// (0x00065a81) scroll_pane_cp016_ParamLimits

0x1783,	// (0x00065a81) scroll_pane_cp016

0x9fca,	// (0x0006e2c8) smil2_image_pane_ParamLimits

0x9fca,	// (0x0006e2c8) smil2_image_pane

0x9ff2,	// (0x0006e2f0) smil2_root_pane_ParamLimits

0x9ff2,	// (0x0006e2f0) smil2_root_pane

0xa01e,	// (0x0006e31c) smil2_text_pane_ParamLimits

0xa01e,	// (0x0006e31c) smil2_text_pane

0x0402,	// (0x00064700) bg_list_pane_cp06

0x17bf,	// (0x00065abd) grid_radio_pane

0x0402,	// (0x00064700) bg_popup_window_pane_cp06

0x17c7,	// (0x00065ac5) main_fmradio_pane_t1

0x1167,	// (0x00065465) heading_pane_cp04

0x17d5,	// (0x00065ad3) main_fmradio_pane_t2

0x475f,	// (0x00068a5d) popup_cale_lunar_info_window_g1

0x17e3,	// (0x00065ae1) main_fmradio_pane_t3

0x4767,	// (0x00068a65) popup_cale_lunar_info_window_g2

0x17f1,	// (0x00065aef) main_fmradio_pane_t4

0x0001,

0x17ff,	// (0x00065afd) main_fmradio_pane_t5

0x0004,

0xf5b5,	// (0x000738b3) popup_cale_lunar_info_window_g

0xf4dc,	// (0x000737da) main_fmradio_pane_t

0x180d,	// (0x00065b0b) wait_bar_pane_cp03

0x1815,	// (0x00065b13) cell_fmradio_pane_ParamLimits

0x1815,	// (0x00065b13) cell_fmradio_pane

0x166e,	// (0x0006596c) cell_fmradio_pane_g1_ParamLimits

0x166e,	// (0x0006596c) cell_fmradio_pane_g1

0x0402,	// (0x00064700) grid_highlight_pane_cp011

0x1828,	// (0x00065b26) poc_content_pane_ParamLimits

0x1828,	// (0x00065b26) poc_content_pane

0x183b,	// (0x00065b39) scroll_pane_cp019

0xa052,	// (0x0006e350) popup_call_poc_act_window_ParamLimits

0xa052,	// (0x0006e350) popup_call_poc_act_window

0xa05f,	// (0x0006e35d) popup_call_poc_inact_window_ParamLimits

0xa05f,	// (0x0006e35d) popup_call_poc_inact_window

0xf579,	// (0x00073877) bg_popup_call_poc_act_pane_g

0x471f,	// (0x00068a1d) bg_popup_call_poc_inact_pane_g1

0x4727,	// (0x00068a25) bg_popup_call_poc_inact_pane_g2

0x1843,	// (0x00065b41) popup_call_poc_act_window_g2

0x472f,	// (0x00068a2d) bg_popup_call_poc_inact_pane_g3

0x46af,	// (0x000689ad) bg_popup_call_poc_inact_pane_g4

0x4737,	// (0x00068a35) bg_popup_call_poc_inact_pane_g5

0x184b,	// (0x00065b49) popup_call_poc_act_window_t1_ParamLimits

0x184b,	// (0x00065b49) popup_call_poc_act_window_t1

0x1873,	// (0x00065b71) popup_call_poc_act_window_t2_ParamLimits

0x1873,	// (0x00065b71) popup_call_poc_act_window_t2

0x189b,	// (0x00065b99) popup_call_poc_act_window_t3_ParamLimits

0x189b,	// (0x00065b99) popup_call_poc_act_window_t3

0x18c3,	// (0x00065bc1) popup_call_poc_act_window_t4_ParamLimits

0x18c3,	// (0x00065bc1) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x000737e5) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x000737e5) popup_call_poc_act_window_t

0x473f,	// (0x00068a3d) bg_popup_call_poc_inact_pane_g6

0x4747,	// (0x00068a45) bg_popup_call_poc_inact_pane_g7

0x474f,	// (0x00068a4d) bg_popup_call_poc_inact_pane_g8

0x18d5,	// (0x00065bd3) popup_call_poc_inact_window_g2

0x4757,	// (0x00068a55) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf590,	// (0x0007388e) bg_popup_call_poc_inact_pane_g

0x18dd,	// (0x00065bdb) popup_call_poc_inact_window_t1_ParamLimits

0x18dd,	// (0x00065bdb) popup_call_poc_inact_window_t1

0x18f2,	// (0x00065bf0) popup_call_poc_inact_window_t2_ParamLimits

0x18f2,	// (0x00065bf0) popup_call_poc_inact_window_t2

0x1907,	// (0x00065c05) popup_call_poc_inact_window_t3_ParamLimits

0x1907,	// (0x00065c05) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x000737ee) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x000737ee) popup_call_poc_inact_window_t

0x48a6,	// (0x00068ba4) context_pane_ParamLimits

0xa596,	// (0x0006e894) signal_pane_ParamLimits

0x09b7,	// (0x00064cb5) main_call2_pane

0xa518,	// (0x0006e816) popup_phob_thumbnail2_window_ParamLimits

0xa518,	// (0x0006e816) popup_phob_thumbnail2_window

0x9d6e,	// (0x0006e06c) aid_hotspot_pointer_arrow_pane

0x9d76,	// (0x0006e074) aid_hotspot_pointer_hand_pane

0xa30e,	// (0x0006e60c) phob_pre_status_pane_g5

0x8418,	// (0x0006c716) cams_zoom_pane_ParamLimits

0x8424,	// (0x0006c722) image_vga_pane_ParamLimits

0x8431,	// (0x0006c72f) main_camera_pane_g1_ParamLimits

0x843d,	// (0x0006c73b) main_camera_pane_g2_ParamLimits

0x8449,	// (0x0006c747) main_camera_pane_g3_ParamLimits

0x8455,	// (0x0006c753) main_camera_pane_g4_ParamLimits

0x8461,	// (0x0006c75f) main_camera_pane_g5_ParamLimits

0x846d,	// (0x0006c76b) main_camera_pane_g6_ParamLimits

0x8479,	// (0x0006c777) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x000734ed) main_camera_pane_g_ParamLimits

0x8485,	// (0x0006c783) main_camera_pane_t1_ParamLimits

0x8497,	// (0x0006c795) main_camera_pane_t2_ParamLimits

0xf200,	// (0x000734fe) main_camera_pane_t_ParamLimits

0x065d,	// (0x0006495b) bg_popup_preview_window_pane_cp01_ParamLimits

0x065d,	// (0x0006495b) bg_popup_preview_window_pane_cp01

0x191c,	// (0x00065c1a) popup_phob_thumbnail2_window_g1_ParamLimits

0x191c,	// (0x00065c1a) popup_phob_thumbnail2_window_g1

0x0402,	// (0x00064700) call2_cli_visual_pane

0xa07b,	// (0x0006e379) popup_call2_audio_conf_window_ParamLimits

0xa07b,	// (0x0006e379) popup_call2_audio_conf_window

0xa08e,	// (0x0006e38c) popup_call2_audio_first_window_ParamLimits

0xa08e,	// (0x0006e38c) popup_call2_audio_first_window

0xa10a,	// (0x0006e408) popup_call2_audio_in_window_ParamLimits

0xa10a,	// (0x0006e408) popup_call2_audio_in_window

0xa13a,	// (0x0006e438) popup_call2_audio_out_window_ParamLimits

0xa13a,	// (0x0006e438) popup_call2_audio_out_window

0xa186,	// (0x0006e484) popup_call2_audio_second_window_ParamLimits

0xa186,	// (0x0006e484) popup_call2_audio_second_window

0xa1d2,	// (0x0006e4d0) popup_call2_audio_wait_window_ParamLimits

0xa1d2,	// (0x0006e4d0) popup_call2_audio_wait_window

0x0402,	// (0x00064700) bg_popup_call2_act_pane_cp03

0x063f,	// (0x0006493d) list_conf_pane_cp

0x1928,	// (0x00065c26) popup_call2_audio_conf_window_t1

0x11c4,	// (0x000654c2) list_single_graphic_popup_conf2_pane_ParamLimits

0x11c4,	// (0x000654c2) list_single_graphic_popup_conf2_pane

0x11d7,	// (0x000654d5) list_highlight_pane_cp04

0x1936,	// (0x00065c34) list_single_graphic_popup_conf2_pane_g1

0x11e8,	// (0x000654e6) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x000737f5) list_single_graphic_popup_conf2_pane_g

0x193e,	// (0x00065c3c) list_single_graphic_popup_conf2_pane_t1

0x194c,	// (0x00065c4a) bg_popup_call2_act_pane_cp01_ParamLimits

0x194c,	// (0x00065c4a) bg_popup_call2_act_pane_cp01

0x19d6,	// (0x00065cd4) call_type_pane_cp05_ParamLimits

0x19d6,	// (0x00065cd4) call_type_pane_cp05

0x1a2a,	// (0x00065d28) popup_call2_audio_second_window_g1_ParamLimits

0x1a2a,	// (0x00065d28) popup_call2_audio_second_window_g1

0x1a7e,	// (0x00065d7c) popup_call2_audio_second_window_g2_ParamLimits

0x1a7e,	// (0x00065d7c) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x000737fa) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x000737fa) popup_call2_audio_second_window_g

0x1ae3,	// (0x00065de1) popup_call2_audio_second_window_t1_ParamLimits

0x1ae3,	// (0x00065de1) popup_call2_audio_second_window_t1

0x1b9e,	// (0x00065e9c) popup_call2_audio_second_window_t2_ParamLimits

0x1b9e,	// (0x00065e9c) popup_call2_audio_second_window_t2

0x1bf1,	// (0x00065eef) popup_call2_audio_second_window_t3_ParamLimits

0x1bf1,	// (0x00065eef) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x00073801) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x00073801) popup_call2_audio_second_window_t

0x0402,	// (0x00064700) bg_popup_call2_in_pane_cp02

0x040c,	// (0x0006470a) call_type_pane_cp04

0x0414,	// (0x00064712) popup_call2_audio_wait_window_g1

0x041c,	// (0x0006471a) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x000733dc) popup_call2_audio_wait_window_g

0x0424,	// (0x00064722) popup_call2_audio_wait_window_t3

0x1ce4,	// (0x00065fe2) bg_popup_call2_act_pane_ParamLimits

0x1ce4,	// (0x00065fe2) bg_popup_call2_act_pane

0x1da4,	// (0x000660a2) call_type_pane_cp03_ParamLimits

0x1da4,	// (0x000660a2) call_type_pane_cp03

0x1e08,	// (0x00066106) popup_call2_audio_first_window_g1_ParamLimits

0x1e08,	// (0x00066106) popup_call2_audio_first_window_g1

0x1e78,	// (0x00066176) popup_call2_audio_first_window_g2_ParamLimits

0x1e78,	// (0x00066176) popup_call2_audio_first_window_g2

0x1540,	// (0x0006583e) popup_call2_audio_first_window_g3_ParamLimits

0x1540,	// (0x0006583e) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0007380a) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0007380a) popup_call2_audio_first_window_g

0x1f56,	// (0x00066254) popup_call2_audio_first_window_t1_ParamLimits

0x1f56,	// (0x00066254) popup_call2_audio_first_window_t1

0x2059,	// (0x00066357) popup_call2_audio_first_window_t4_ParamLimits

0x2059,	// (0x00066357) popup_call2_audio_first_window_t4

0x213c,	// (0x0006643a) popup_call2_audio_first_window_t5_ParamLimits

0x213c,	// (0x0006643a) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x00073815) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x00073815) popup_call2_audio_first_window_t

0x0655,	// (0x00064953) bg_popup_call2_act_pane_g1

0x476f,	// (0x00068a6d) popup_cale_lunar_info_window_t1

0x477d,	// (0x00068a7b) popup_cale_lunar_info_window_t2

0x478b,	// (0x00068a89) popup_cale_lunar_info_window_t3

0x0402,	// (0x00064700) bg_popup_call2_bubble_pane

0x41c3,	// (0x000684c1) bg_popup_call2_in_pane_cp01_ParamLimits

0x41c3,	// (0x000684c1) bg_popup_call2_in_pane_cp01

0x00de,	// (0x000643dc) call_type_pane_cp02

0x420b,	// (0x00068509) popup_call2_audio_out_window_g1_ParamLimits

0x420b,	// (0x00068509) popup_call2_audio_out_window_g1

0x4237,	// (0x00068535) popup_call2_audio_out_window_g2_ParamLimits

0x4237,	// (0x00068535) popup_call2_audio_out_window_g2

0x425f,	// (0x0006855d) popup_call2_audio_out_window_g3_ParamLimits

0x425f,	// (0x0006855d) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0007381e) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0007381e) popup_call2_audio_out_window_g

0x429a,	// (0x00068598) popup_call2_audio_out_window_t1_ParamLimits

0x429a,	// (0x00068598) popup_call2_audio_out_window_t1

0x42f9,	// (0x000685f7) popup_call2_audio_out_window_t2_ParamLimits

0x42f9,	// (0x000685f7) popup_call2_audio_out_window_t2

0x434d,	// (0x0006864b) popup_call2_audio_out_window_t3_ParamLimits

0x434d,	// (0x0006864b) popup_call2_audio_out_window_t3

0x4363,	// (0x00068661) popup_call2_audio_out_window_t4_ParamLimits

0x4363,	// (0x00068661) popup_call2_audio_out_window_t4

0x4379,	// (0x00068677) popup_call2_audio_out_window_t5_ParamLimits

0x4379,	// (0x00068677) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x00073827) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x00073827) popup_call2_audio_out_window_t

0x43dd,	// (0x000686db) bg_popup_call2_in_pane_ParamLimits

0x43dd,	// (0x000686db) bg_popup_call2_in_pane

0x4439,	// (0x00068737) popup_call2_audio_in_window_g1_ParamLimits

0x4439,	// (0x00068737) popup_call2_audio_in_window_g1

0x4471,	// (0x0006876f) popup_call2_audio_in_window_g2_ParamLimits

0x4471,	// (0x0006876f) popup_call2_audio_in_window_g2

0x44a9,	// (0x000687a7) popup_call2_audio_in_window_g3_ParamLimits

0x44a9,	// (0x000687a7) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x00073834) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x00073834) popup_call2_audio_in_window_g

0x4501,	// (0x000687ff) popup_call2_audio_in_window_t1_ParamLimits

0x4501,	// (0x000687ff) popup_call2_audio_in_window_t1

0x4581,	// (0x0006887f) popup_call2_audio_in_window_t2_ParamLimits

0x4581,	// (0x0006887f) popup_call2_audio_in_window_t2

0x4601,	// (0x000688ff) popup_call2_audio_in_window_t3_ParamLimits

0x4601,	// (0x000688ff) popup_call2_audio_in_window_t3

0x461b,	// (0x00068919) popup_call2_audio_in_window_t4_ParamLimits

0x461b,	// (0x00068919) popup_call2_audio_in_window_t4

0x462d,	// (0x0006892b) popup_call2_audio_in_window_t5_ParamLimits

0x462d,	// (0x0006892b) popup_call2_audio_in_window_t5

0x4642,	// (0x00068940) popup_call2_audio_in_window_t6_ParamLimits

0x4642,	// (0x00068940) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0007383d) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0007383d) popup_call2_audio_in_window_t

0x0655,	// (0x00064953) bg_popup_call2_in_pane_g1

0x4799,	// (0x00068a97) popup_cale_lunar_info_window_t4

0x0003,

0xf5ba,	// (0x000738b8) popup_cale_lunar_info_window_t

0x065d,	// (0x0006495b) bg_popup_call2_rect_pane_ParamLimits

0x065d,	// (0x0006495b) bg_popup_call2_rect_pane

0x0402,	// (0x00064700) call2_cli_visual_graphic_pane

0x0402,	// (0x00064700) call2_cli_visual_text_pane

0xa61b,	// (0x0006e919) smil_status_volume_pane_g3

0x0002,

0x07eb,	// (0x00064ae9) call2_cli_visual_graphic_pane_g1

0x07eb,	// (0x00064ae9) call2_cli_visual_graphic_pane_g2

0x07eb,	// (0x00064ae9) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0007384a) call2_cli_visual_graphic_pane_g

0x4657,	// (0x00068955) bg_popup_call2_rect_pane_g1

0x0893,	// (0x00064b91) bg_popup_call2_rect_pane_g2

0x465f,	// (0x0006895d) bg_popup_call2_rect_pane_g3

0x4667,	// (0x00068965) bg_popup_call2_rect_pane_g4

0x466f,	// (0x0006896d) bg_popup_call2_rect_pane_g5

0x4677,	// (0x00068975) bg_popup_call2_rect_pane_g6

0x467f,	// (0x0006897d) bg_popup_call2_rect_pane_g7

0x4687,	// (0x00068985) bg_popup_call2_rect_pane_g8

0x468f,	// (0x0006898d) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x00073851) bg_popup_call2_rect_pane_g

0x4697,	// (0x00068995) bg_popup_call2_bubble_pane_g1

0x469f,	// (0x0006899d) bg_popup_call2_bubble_pane_g2

0x46a7,	// (0x000689a5) bg_popup_call2_bubble_pane_g3

0x46af,	// (0x000689ad) bg_popup_call2_bubble_pane_g4

0x46b7,	// (0x000689b5) bg_popup_call2_bubble_pane_g5

0x46bf,	// (0x000689bd) bg_popup_call2_bubble_pane_g6

0x46c7,	// (0x000689c5) bg_popup_call2_bubble_pane_g7

0x46cf,	// (0x000689cd) bg_popup_call2_bubble_pane_g8

0x46d7,	// (0x000689d5) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x00073864) bg_popup_call2_bubble_pane_g

0x7e1c,	// (0x0006c11a) aid_cale_week_size_cell_pane

0x84a9,	// (0x0006c7a7) aid_cams_cif_uncrop_pane_ParamLimits

0x84a9,	// (0x0006c7a7) aid_cams_cif_uncrop_pane

0x8601,	// (0x0006c8ff) aid_cams_size_cell_ParamLimits

0x8601,	// (0x0006c8ff) aid_cams_size_cell

0x860d,	// (0x0006c90b) grid_cams_pane_ParamLimits

0x8619,	// (0x0006c917) linegrid_cams_pane_ParamLimits

0x86f0,	// (0x0006c9ee) call_video_pane_t1

0x870d,	// (0x0006ca0b) call_video_pane_t2

0x0001,

0xf253,	// (0x00073551) call_video_pane_t

0x8aef,	// (0x0006cded) aid_cale_month_size_cell_pane_ParamLimits

0x8aef,	// (0x0006cded) aid_cale_month_size_cell_pane

0xf603,	// (0x00073901) smil_status_volume_pane_g

0xa628,	// (0x0006e926) volume_smil_pane_ParamLimits

0x7685,	// (0x0006b983) aid_popup2_width_pane

0x7d37,	// (0x0006c035) cell_qdial_pane_g4_ParamLimits

0x7d37,	// (0x0006c035) cell_qdial_pane_g4

0x9872,	// (0x0006db70) aid_blid_cardinal_pane_ParamLimits

0x987e,	// (0x0006db7c) aid_blid_destination_pane_ParamLimits

0x987e,	// (0x0006db7c) aid_blid_destination_pane

0x065d,	// (0x0006495b) bg_popup_call_poc_act_pane_ParamLimits

0x065d,	// (0x0006495b) bg_popup_call_poc_act_pane

0x065d,	// (0x0006495b) bg_popup_call_poc_inact_pane_ParamLimits

0x065d,	// (0x0006495b) bg_popup_call_poc_inact_pane

0x46df,	// (0x000689dd) bg_popup_call_poc_act_pane_g1

0x46e7,	// (0x000689e5) bg_popup_call_poc_act_pane_g2

0x46ef,	// (0x000689ed) bg_popup_call_poc_act_pane_g3

0x46af,	// (0x000689ad) bg_popup_call_poc_act_pane_g4

0x46b7,	// (0x000689b5) bg_popup_call_poc_act_pane_g5

0x46f7,	// (0x000689f5) bg_popup_call_poc_act_pane_g6

0x46c7,	// (0x000689c5) bg_popup_call_poc_act_pane_g7

0x46ff,	// (0x000689fd) bg_popup_call_poc_act_pane_g8

0x0402,	// (0x00064700) main_usb_pane

0xa477,	// (0x0006e775) popup_cale_lunar_info_window

0x8992,	// (0x0006cc90) im_reading_pane_t1_ParamLimits

0x0af8,	// (0x00064df6) list_im_pane_ParamLimits

0x0b09,	// (0x00064e07) scroll_pane_cp07_ParamLimits

0x0402,	// (0x00064700) grid_highlight_pane_cp012

0x065d,	// (0x0006495b) mup_scale_pane_ParamLimits

0x1540,	// (0x0006583e) main_usb_pane_g1_ParamLimits

0x1540,	// (0x0006583e) main_usb_pane_g1

0xa233,	// (0x0006e531) main_usb_pane_g2_ParamLimits

0xa233,	// (0x0006e531) main_usb_pane_g2

0x0001,

0xf5a3,	// (0x000738a1) main_usb_pane_g_ParamLimits

0xf5a3,	// (0x000738a1) main_usb_pane_g

0xa23f,	// (0x0006e53d) main_usb_pane_t1_ParamLimits

0xa23f,	// (0x0006e53d) main_usb_pane_t1

0xa251,	// (0x0006e54f) main_usb_pane_t2_ParamLimits

0xa251,	// (0x0006e54f) main_usb_pane_t2

0xa263,	// (0x0006e561) main_usb_pane_t3_ParamLimits

0xa263,	// (0x0006e561) main_usb_pane_t3

0xa275,	// (0x0006e573) main_usb_pane_t4_ParamLimits

0xa275,	// (0x0006e573) main_usb_pane_t4

0xa287,	// (0x0006e585) main_usb_pane_t5_ParamLimits

0xa287,	// (0x0006e585) main_usb_pane_t5

0xa299,	// (0x0006e597) main_usb_pane_t6_ParamLimits

0xa299,	// (0x0006e597) main_usb_pane_t6

0x0005,

0xf5a8,	// (0x000738a6) main_usb_pane_t_ParamLimits

0x1311,	// (0x0006560f) aid_text_placing

0x981e,	// (0x0006db1c) main_location2_pane_t1_ParamLimits

0x9834,	// (0x0006db32) main_location2_pane_t2_ParamLimits

0x984a,	// (0x0006db48) main_location2_pane_t3_ParamLimits

0x9860,	// (0x0006db5e) main_location2_pane_t4_ParamLimits

0x9860,	// (0x0006db5e) main_location2_pane_t4

0xf3b4,	// (0x000736b2) main_location2_pane_t_ParamLimits

0x0699,	// (0x00064997) find_pinb_pane_g2_ParamLimits

0x0699,	// (0x00064997) find_pinb_pane_g2

0x0001,

0xf104,	// (0x00073402) find_pinb_pane_g_ParamLimits

0xf104,	// (0x00073402) find_pinb_pane_g

0x06a5,	// (0x000649a3) find_pinb_pane_t1_ParamLimits

0x06b7,	// (0x000649b5) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x00073407) find_pinb_pane_t_ParamLimits

0x0402,	// (0x00064700) main_call3_pane

0x8e93,	// (0x0006d191) cale_month_day_heading_pane_t1_ParamLimits

0x8f19,	// (0x0006d217) cale_month_day_heading_pane_t2_ParamLimits

0x8faa,	// (0x0006d2a8) cale_month_day_heading_pane_t3_ParamLimits

0x903b,	// (0x0006d339) cale_month_day_heading_pane_t4_ParamLimits

0x90cc,	// (0x0006d3ca) cale_month_day_heading_pane_t5_ParamLimits

0x915d,	// (0x0006d45b) cale_month_day_heading_pane_t6_ParamLimits

0x91ee,	// (0x0006d4ec) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x00073589) cale_month_day_heading_pane_t_ParamLimits

0x950e,	// (0x0006d80c) smil_status_volume_pane

0x9e94,	// (0x0006e192) postcard_address_pane_ParamLimits

0x9e94,	// (0x0006e192) postcard_address_pane

0x9ea0,	// (0x0006e19e) postcard_message_pane_ParamLimits

0x9ea0,	// (0x0006e19e) postcard_message_pane

0xa20f,	// (0x0006e50d) call2_cli_visual_pane_t1_ParamLimits

0xa20f,	// (0x0006e50d) call2_cli_visual_pane_t1

0xa779,	// (0x0006ea77) postcard_message_pane_t1_ParamLimits

0xa779,	// (0x0006ea77) postcard_message_pane_t1

0xa762,	// (0x0006ea60) postcard_address_pane_t1_ParamLimits

0xa762,	// (0x0006ea60) postcard_address_pane_t1

0xa755,	// (0x0006ea53) popup_call3_audio_in_window_ParamLimits

0xa755,	// (0x0006ea53) popup_call3_audio_in_window

0xa63d,	// (0x0006e93b) bg_popup_call3_in_pane_ParamLimits

0xa63d,	// (0x0006e93b) bg_popup_call3_in_pane

0xa69b,	// (0x0006e999) popup_call3_audio_in_window_g1_ParamLimits

0xa69b,	// (0x0006e999) popup_call3_audio_in_window_g1

0xa6b3,	// (0x0006e9b1) popup_call3_audio_in_window_g2_ParamLimits

0xa6b3,	// (0x0006e9b1) popup_call3_audio_in_window_g2

0xa6cb,	// (0x0006e9c9) popup_call3_audio_in_window_g3_ParamLimits

0xa6cb,	// (0x0006e9c9) popup_call3_audio_in_window_g3

0x0003,

0xf60a,	// (0x00073908) popup_call3_audio_in_window_g_ParamLimits

0xf60a,	// (0x00073908) popup_call3_audio_in_window_g

0xa6f3,	// (0x0006e9f1) popup_call3_audio_in_window_t1_ParamLimits

0xa6f3,	// (0x0006e9f1) popup_call3_audio_in_window_t1

0xa71b,	// (0x0006ea19) popup_call3_audio_in_window_t2_ParamLimits

0xa71b,	// (0x0006ea19) popup_call3_audio_in_window_t2

0xa743,	// (0x0006ea41) popup_call3_audio_in_window_t3_ParamLimits

0xa743,	// (0x0006ea41) popup_call3_audio_in_window_t3

0x0002,

0xf613,	// (0x00073911) popup_call3_audio_in_window_t_ParamLimits

0xf613,	// (0x00073911) popup_call3_audio_in_window_t

0x09b7,	// (0x00064cb5) bg_popup_call3_rect_pane

0x4657,	// (0x00068955) bg_popup_call3_rect_pane_g1

0x0893,	// (0x00064b91) bg_popup_call3_rect_pane_g2

0x465f,	// (0x0006895d) bg_popup_call3_rect_pane_g3

0x4667,	// (0x00068965) bg_popup_call3_rect_pane_g4

0x466f,	// (0x0006896d) bg_popup_call3_rect_pane_g5

0x4677,	// (0x00068975) bg_popup_call3_rect_pane_g6

0x467f,	// (0x0006897d) bg_popup_call3_rect_pane_g7

0x9bab,	// (0x0006dea9) mup_visualizer_osc_pane

0x154e,	// (0x0006584c) mup_visualizer_spec_pane

0xa65d,	// (0x0006e95b) call3_video_qcif_pane_ParamLimits

0xa65d,	// (0x0006e95b) call3_video_qcif_pane

0xa66d,	// (0x0006e96b) call3_video_qcif_uncrop_pane_ParamLimits

0xa66d,	// (0x0006e96b) call3_video_qcif_uncrop_pane

0xa679,	// (0x0006e977) call3_video_subqcif_pane_ParamLimits

0xa679,	// (0x0006e977) call3_video_subqcif_pane

0xa68b,	// (0x0006e989) call3_video_subqcif_uncrop_pane_ParamLimits

0xa68b,	// (0x0006e989) call3_video_subqcif_uncrop_pane

0xa6e3,	// (0x0006e9e1) popup_call3_audio_in_window_g4_ParamLimits

0xa6e3,	// (0x0006e9e1) popup_call3_audio_in_window_g4

0xa60a,	// (0x0006e908) mup_spec_half_pane

0xa613,	// (0x0006e911) mup_spec_half_pane_cp

0x4906,	// (0x00068c04) mup_osc_middle_pane

0x490f,	// (0x00068c0d) mup_visualizer_osc_pane_g1

0xa5eb,	// (0x0006e8e9) mup_spec_bar_pane_ParamLimits

0xa5eb,	// (0x0006e8e9) mup_spec_bar_pane

0x48f3,	// (0x00068bf1) mup_spec_bar_pane_g1

0x48fd,	// (0x00068bfb) mup_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x000738fc) mup_spec_bar_pane_g

0x7e1c,	// (0x0006c11a) aid_cale_week_size_cell_pane_ParamLimits

0x7e31,	// (0x0006c12f) bg_cale_heading_pane_ParamLimits

0x0919,	// (0x00064c17) bg_cale_pane_cp01_ParamLimits

0x7e49,	// (0x0006c147) cale_week_corner_pane_ParamLimits

0x7e63,	// (0x0006c161) cale_week_day_heading_pane_ParamLimits

0x7e7b,	// (0x0006c179) cale_week_scroll_pane_g1_ParamLimits

0x7e8e,	// (0x0006c18c) cale_week_scroll_pane_g2_ParamLimits

0x7ea1,	// (0x0006c19f) cale_week_scroll_pane_g3_ParamLimits

0x7eb4,	// (0x0006c1b2) cale_week_scroll_pane_g4_ParamLimits

0x7ec7,	// (0x0006c1c5) cale_week_scroll_pane_g5_ParamLimits

0x7eda,	// (0x0006c1d8) cale_week_scroll_pane_g6_ParamLimits

0x7eed,	// (0x0006c1eb) cale_week_scroll_pane_g7_ParamLimits

0x7f00,	// (0x0006c1fe) cale_week_scroll_pane_g8_ParamLimits

0x7f13,	// (0x0006c211) cale_week_scroll_pane_g9_ParamLimits

0x7f26,	// (0x0006c224) cale_week_scroll_pane_g10_ParamLimits

0x7f39,	// (0x0006c237) cale_week_scroll_pane_g11_ParamLimits

0x7f4c,	// (0x0006c24a) cale_week_scroll_pane_g12_ParamLimits

0x7f5f,	// (0x0006c25d) cale_week_scroll_pane_g13_ParamLimits

0x7f72,	// (0x0006c270) cale_week_scroll_pane_g14_ParamLimits

0x7f85,	// (0x0006c283) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x00073493) cale_week_scroll_pane_g_ParamLimits

0x7fab,	// (0x0006c2a9) cale_week_time_pane_ParamLimits

0x7fbe,	// (0x0006c2bc) grid_cale_week_pane_ParamLimits

0x0936,	// (0x00064c34) listscroll_cale_week_pane_t1

0x0948,	// (0x00064c46) scroll_pane_cp08_ParamLimits

0x8b44,	// (0x0006ce42) cale_month_corner_pane_ParamLimits

0x0d39,	// (0x00065037) cale_month_pane_t1

0x8e5a,	// (0x0006d158) cale_month_week_pane_ParamLimits

0x1540,	// (0x0006583e) popup_call_status_window_g1_ParamLimits

0x9655,	// (0x0006d953) popup_call_status_window_g2_ParamLimits

0x9661,	// (0x0006d95f) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x00073639) popup_call_status_window_g_ParamLimits

0x10f0,	// (0x000653ee) aid_call2_pane

0x667c,	// (0x0006a97a) msg_header_pane_g1

0x9e94,	// (0x0006e192) postcard_address2_pane_ParamLimits

0x9e94,	// (0x0006e192) postcard_address2_pane

0x9ea0,	// (0x0006e19e) postcard_message2_pane_ParamLimits

0x9ea0,	// (0x0006e19e) postcard_message2_pane

0xa5a2,	// (0x0006e8a0) message2_row_pane_ParamLimits

0xa5a2,	// (0x0006e8a0) message2_row_pane

0xa5ba,	// (0x0006e8b8) address2_row_pane_ParamLimits

0xa5ba,	// (0x0006e8b8) address2_row_pane

0x48c1,	// (0x00068bbf) postcard_message2_row_pane_g1

0x48c9,	// (0x00068bc7) postcard_message2_row_pane_t1

0x48c1,	// (0x00068bbf) address2_row_pane_g1

0x48c9,	// (0x00068bc7) address2_row_pane_t1

0x17b7,	// (0x00065ab5) aid_size_cell_vorec

0x0402,	// (0x00064700) main_rss_pane

0xa5cd,	// (0x0006e8cb) rss_list_single_pane_ParamLimits

0xa5cd,	// (0x0006e8cb) rss_list_single_pane

0x48d7,	// (0x00068bd5) rss_list_single_pane_t1

0x48e5,	// (0x00068be3) rss_list_single_pane_t2

0x0001,

0xf5f9,	// (0x000738f7) rss_list_single_pane_t

0x0402,	// (0x00064700) main_camera2_pane

0x0402,	// (0x00064700) main_video2_pane

0xa7c9,	// (0x0006eac7) cams_zoom_pane_cp2_ParamLimits

0xa7c9,	// (0x0006eac7) cams_zoom_pane_cp2

0xa7d5,	// (0x0006ead3) image2_vga_pane_ParamLimits

0xa7d5,	// (0x0006ead3) image2_vga_pane

0xa7e4,	// (0x0006eae2) main_camera2_pane_g1_ParamLimits

0xa7e4,	// (0x0006eae2) main_camera2_pane_g1

0xa7f0,	// (0x0006eaee) main_camera2_pane_g2_ParamLimits

0xa7f0,	// (0x0006eaee) main_camera2_pane_g2

0xa7fc,	// (0x0006eafa) main_camera2_pane_g3_ParamLimits

0xa7fc,	// (0x0006eafa) main_camera2_pane_g3

0xa808,	// (0x0006eb06) main_camera2_pane_g4_ParamLimits

0xa808,	// (0x0006eb06) main_camera2_pane_g4

0xa814,	// (0x0006eb12) main_camera2_pane_g5_ParamLimits

0xa814,	// (0x0006eb12) main_camera2_pane_g5

0xa820,	// (0x0006eb1e) main_camera2_pane_g6_ParamLimits

0xa820,	// (0x0006eb1e) main_camera2_pane_g6

0xa82c,	// (0x0006eb2a) main_camera2_pane_g7_ParamLimits

0xa82c,	// (0x0006eb2a) main_camera2_pane_g7

0xa838,	// (0x0006eb36) main_camera2_pane_g8_ParamLimits

0xa838,	// (0x0006eb36) main_camera2_pane_g8

0x0008,

0xf61a,	// (0x00073918) main_camera2_pane_g_ParamLimits

0xf61a,	// (0x00073918) main_camera2_pane_g

0xa850,	// (0x0006eb4e) main_camera2_pane_t1_ParamLimits

0xa850,	// (0x0006eb4e) main_camera2_pane_t1

0xa862,	// (0x0006eb60) main_camera2_pane_t2_ParamLimits

0xa862,	// (0x0006eb60) main_camera2_pane_t2

0xa874,	// (0x0006eb72) main_camera2_pane_t3_ParamLimits

0xa874,	// (0x0006eb72) main_camera2_pane_t3

0xa886,	// (0x0006eb84) main_camera2_pane_t4_ParamLimits

0xa886,	// (0x0006eb84) main_camera2_pane_t4

0x0006,

0xf62d,	// (0x0007392b) main_camera2_pane_t_ParamLimits

0xf62d,	// (0x0007392b) main_camera2_pane_t

0xa8e1,	// (0x0006ebdf) cams_zoom_pane_cp4_ParamLimits

0xa8e1,	// (0x0006ebdf) cams_zoom_pane_cp4

0xa8f1,	// (0x0006ebef) image2_cif_pane_ParamLimits

0xa8f1,	// (0x0006ebef) image2_cif_pane

0xa902,	// (0x0006ec00) image2_subqcif_pane_ParamLimits

0xa902,	// (0x0006ec00) image2_subqcif_pane

0xa90f,	// (0x0006ec0d) main_video2_pane_g1_ParamLimits

0xa90f,	// (0x0006ec0d) main_video2_pane_g1

0xa921,	// (0x0006ec1f) main_video2_pane_g2_ParamLimits

0xa921,	// (0x0006ec1f) main_video2_pane_g2

0xa931,	// (0x0006ec2f) main_video2_pane_g3_ParamLimits

0xa931,	// (0x0006ec2f) main_video2_pane_g3

0xa941,	// (0x0006ec3f) main_video2_pane_g4_ParamLimits

0xa941,	// (0x0006ec3f) main_video2_pane_g4

0xa951,	// (0x0006ec4f) main_video2_pane_g5_ParamLimits

0xa951,	// (0x0006ec4f) main_video2_pane_g5

0xa961,	// (0x0006ec5f) main_video2_pane_g6_ParamLimits

0xa961,	// (0x0006ec5f) main_video2_pane_g6

0x0005,

0xf63c,	// (0x0007393a) main_video2_pane_g_ParamLimits

0xf63c,	// (0x0007393a) main_video2_pane_g

0xa973,	// (0x0006ec71) main_video2_pane_t1_ParamLimits

0xa973,	// (0x0006ec71) main_video2_pane_t1

0xa98d,	// (0x0006ec8b) main_video2_pane_t2_ParamLimits

0xa98d,	// (0x0006ec8b) main_video2_pane_t2

0xa9b3,	// (0x0006ecb1) main_video2_pane_t3_ParamLimits

0xa9b3,	// (0x0006ecb1) main_video2_pane_t3

0x0002,

0xf649,	// (0x00073947) main_video2_pane_t_ParamLimits

0xf649,	// (0x00073947) main_video2_pane_t

0xa348,	// (0x0006e646) call_muted_g2

0x0001,

0xf5eb,	// (0x000738e9) call_muted_g

0x0402,	// (0x00064700) main_mup2_pane

0x4974,	// (0x00068c72) main_mup2_pane_g1_ParamLimits

0x4974,	// (0x00068c72) main_mup2_pane_g1

0xa9d9,	// (0x0006ecd7) main_mup2_pane_g2_ParamLimits

0xa9d9,	// (0x0006ecd7) main_mup2_pane_g2

0xac49,	// (0x0006ef47) main_mup_pane_g13_cp1

0xac51,	// (0x0006ef4f) mup_volume_pane_cp1

0xa9f9,	// (0x0006ecf7) main_mup2_pane_g4_ParamLimits

0xa9f9,	// (0x0006ecf7) main_mup2_pane_g4

0xaa0a,	// (0x0006ed08) main_mup2_pane_g5_ParamLimits

0xaa0a,	// (0x0006ed08) main_mup2_pane_g5

0xaa1b,	// (0x0006ed19) main_mup2_pane_g6_ParamLimits

0xaa1b,	// (0x0006ed19) main_mup2_pane_g6

0xaa2c,	// (0x0006ed2a) main_mup2_pane_g7_ParamLimits

0xaa2c,	// (0x0006ed2a) main_mup2_pane_g7

0x0006,

0xf650,	// (0x0007394e) main_mup2_pane_g_ParamLimits

0xf650,	// (0x0007394e) main_mup2_pane_g

0xaa48,	// (0x0006ed46) main_mup2_pane_t1_ParamLimits

0xaa48,	// (0x0006ed46) main_mup2_pane_t1

0xaa5f,	// (0x0006ed5d) main_mup2_pane_t2_ParamLimits

0xaa5f,	// (0x0006ed5d) main_mup2_pane_t2

0xaa76,	// (0x0006ed74) main_mup2_pane_t3_ParamLimits

0xaa76,	// (0x0006ed74) main_mup2_pane_t3

0xaa8d,	// (0x0006ed8b) main_mup2_pane_t4_ParamLimits

0xaa8d,	// (0x0006ed8b) main_mup2_pane_t4

0xaaa7,	// (0x0006eda5) main_mup2_pane_t5_ParamLimits

0xaaa7,	// (0x0006eda5) main_mup2_pane_t5

0xaac1,	// (0x0006edbf) main_mup2_pane_t6_ParamLimits

0xaac1,	// (0x0006edbf) main_mup2_pane_t6

0x0005,

0xf65f,	// (0x0007395d) main_mup2_pane_t_ParamLimits

0xf65f,	// (0x0007395d) main_mup2_pane_t

0xaaf9,	// (0x0006edf7) mup2_visualizer_pane_ParamLimits

0xaaf9,	// (0x0006edf7) mup2_visualizer_pane

0xab2b,	// (0x0006ee29) mup_progress_pane_cp_ParamLimits

0xab2b,	// (0x0006ee29) mup_progress_pane_cp

0xac34,	// (0x0006ef32) mup_volume_pane_cp_ParamLimits

0xac34,	// (0x0006ef32) mup_volume_pane_cp

0xab42,	// (0x0006ee40) mup2_visualizer_pane_g1_ParamLimits

0xab42,	// (0x0006ee40) mup2_visualizer_pane_g1

0x4946,	// (0x00068c44) mup2_visualizer_pane_g2_ParamLimits

0x4946,	// (0x00068c44) mup2_visualizer_pane_g2

0xab57,	// (0x0006ee55) mup2_visualizer_pane_g3_ParamLimits

0xab57,	// (0x0006ee55) mup2_visualizer_pane_g3

0x0002,

0xf66c,	// (0x0007396a) mup2_visualizer_pane_g_ParamLimits

0xf66c,	// (0x0007396a) mup2_visualizer_pane_g

0x17b7,	// (0x00065ab5) aid_size_cell_fmradio

0xa42a,	// (0x0006e728) aid_height_parent_landcape

0x0b96,	// (0x00064e94) wml_content_pane_cp

0x0b9e,	// (0x00064e9c) wml_tabs_pane

0x0ba7,	// (0x00064ea5) popup_wml_miniature_window

0x0baf,	// (0x00064ead) scroll_pane_cp021

0x0bc3,	// (0x00064ec1) wml_content_pane_comp8

0x0402,	// (0x00064700) bg_popup_sub_pane_cp05

0x4964,	// (0x00068c62) popup_wml_miniature_window_g1

0x496c,	// (0x00068c6a) wml_miniature_view_pane

0xab63,	// (0x0006ee61) aid_size_wml_view

0xab6b,	// (0x0006ee69) wml_miniature_view_pane_g1

0xab74,	// (0x0006ee72) wml_miniature_view_pane_g2

0xab7d,	// (0x0006ee7b) wml_miniature_view_pane_g3

0xab85,	// (0x0006ee83) wml_miniature_view_pane_g4

0xab8d,	// (0x0006ee8b) wml_miniature_view_pane_g5

0xab95,	// (0x0006ee93) wml_miniature_view_pane_g6

0xab9d,	// (0x0006ee9b) wml_miniature_view_pane_g7

0xaba5,	// (0x0006eea3) wml_miniature_view_pane_g8

0x0007,

0xf673,	// (0x00073971) wml_miniature_view_pane_g

0x4974,	// (0x00068c72) background_graphic_ParamLimits

0x4974,	// (0x00068c72) background_graphic

0x4980,	// (0x00068c7e) wml_tabs_2_pane

0x4989,	// (0x00068c87) wml_tabs_3_pane_ParamLimits

0x4989,	// (0x00068c87) wml_tabs_3_pane

0x499b,	// (0x00068c99) wml_tabs_4_pane_ParamLimits

0x499b,	// (0x00068c99) wml_tabs_4_pane

0x49b1,	// (0x00068caf) wml_tabs_5_pane_ParamLimits

0x49b1,	// (0x00068caf) wml_tabs_5_pane

0x49cb,	// (0x00068cc9) wml_tabs_pane_g2_ParamLimits

0x49cb,	// (0x00068cc9) wml_tabs_pane_g2

0x49df,	// (0x00068cdd) wml_tabs_pane_g3_ParamLimits

0x49df,	// (0x00068cdd) wml_tabs_pane_g3

0xabad,	// (0x0006eeab) wml_tabs_2_active_pane_ParamLimits

0xabad,	// (0x0006eeab) wml_tabs_2_active_pane

0xabbd,	// (0x0006eebb) wml_tabs_2_passive_pane_ParamLimits

0xabbd,	// (0x0006eebb) wml_tabs_2_passive_pane

0xabcd,	// (0x0006eecb) wml_tabs_3_active_pane_cp_ParamLimits

0xabcd,	// (0x0006eecb) wml_tabs_3_active_pane_cp

0xabde,	// (0x0006eedc) wml_tabs_3_passive_pane_ParamLimits

0xabde,	// (0x0006eedc) wml_tabs_3_passive_pane

0xabef,	// (0x0006eeed) wml_tabs_3_passive_pane_cp_ParamLimits

0xabef,	// (0x0006eeed) wml_tabs_3_passive_pane_cp

0xac00,	// (0x0006eefe) tabs_4_active_pane

0xac08,	// (0x0006ef06) tabs_4_passive_pane

0xac10,	// (0x0006ef0e) tabs_4_passive_pane_cp

0xac18,	// (0x0006ef16) tabs_4_passive_pane_cp2

0xa22b,	// (0x0006e529) aid_height_text

0x9b78,	// (0x0006de76) mup_volume_cont_pane_ParamLimits

0x9b78,	// (0x0006de76) mup_volume_cont_pane

0x79e9,	// (0x0006bce7) aid_size_cell_pinb

0x79f3,	// (0x0006bcf1) aid_size_list_pinb

0xab14,	// (0x0006ee12) mup2_volume_cont_pane_ParamLimits

0xab14,	// (0x0006ee12) mup2_volume_cont_pane

0xac20,	// (0x0006ef1e) mup2_volume_cont_pane_g1_ParamLimits

0xac20,	// (0x0006ef1e) mup2_volume_cont_pane_g1

0x768d,	// (0x0006b98b) aid_size_cell_touch_ParamLimits

0x768d,	// (0x0006b98b) aid_size_cell_touch

0x78c9,	// (0x0006bbc7) touch_pane_ParamLimits

0x78c9,	// (0x0006bbc7) touch_pane

0x7673,	// (0x0006b971) main_rss2_pane

0x49fc,	// (0x00068cfa) listscroll_rss2_pane

0x4a05,	// (0x00068d03) rss2_navigation_pane

0x4a0d,	// (0x00068d0b) list_rss2_pane

0x128e,	// (0x0006558c) scroll_pane_cp22

0x4a15,	// (0x00068d13) rss2_navigation_pane_g1

0x4a1e,	// (0x00068d1c) rss2_navigation_pane_g2

0x4a26,	// (0x00068d24) rss2_navigation_pane_g3

0x0002,

0xf684,	// (0x00073982) rss2_navigation_pane_g

0x4a2e,	// (0x00068d2c) rss2_navigation_pane_t1

0xac59,	// (0x0006ef57) rss2_list_single_pane_ParamLimits

0xac59,	// (0x0006ef57) rss2_list_single_pane

0x4a3c,	// (0x00068d3a) rss2_list_single_pane_t2

0x4a4a,	// (0x00068d48) rss2_list_single_pane_t3_ParamLimits

0x4a4a,	// (0x00068d48) rss2_list_single_pane_t3

0x4a67,	// (0x00068d65) rss2_list_single_pane_t4

0x94f8,	// (0x0006d7f6) smil_status_pane_g1

0x223d,	// (0x0006653b) main_image2_pane_ParamLimits

0x223d,	// (0x0006653b) main_image2_pane

0xa844,	// (0x0006eb42) main_camera2_pane_g9_ParamLimits

0xa844,	// (0x0006eb42) main_camera2_pane_g9

0xa898,	// (0x0006eb96) main_camera2_pane_t5_ParamLimits

0xa898,	// (0x0006eb96) main_camera2_pane_t5

0xa8aa,	// (0x0006eba8) main_camera2_pane_t6_ParamLimits

0xa8aa,	// (0x0006eba8) main_camera2_pane_t6

0xac70,	// (0x0006ef6e) main_image2_pane_g1_ParamLimits

0xac70,	// (0x0006ef6e) main_image2_pane_g1

0xa040,	// (0x0006e33e) smil2_video_pane_ParamLimits

0xa040,	// (0x0006e33e) smil2_video_pane

0x76bd,	// (0x0006b9bb) aid_zoom_text_primary_cp

0x7878,	// (0x0006bb76) popup_preview_fixed_window

0x0af0,	// (0x00064dee) im_reading_pane_g1

0xa7a0,	// (0x0006ea9e) cams2_bc_adjust_pane_cp_ParamLimits

0xa7a0,	// (0x0006ea9e) cams2_bc_adjust_pane_cp

0xa8d5,	// (0x0006ebd3) cams2_bc_adjust_pane_ParamLimits

0xa8d5,	// (0x0006ebd3) cams2_bc_adjust_pane

0xac7c,	// (0x0006ef7a) cams2_bc_adjust_pane_g1

0xac84,	// (0x0006ef82) cams2_slider_pane

0xac8d,	// (0x0006ef8b) cams2_slider_pane_g1

0xac96,	// (0x0006ef94) cams2_slider_pane_g2

0x0006,

0xf68b,	// (0x00073989) cams2_slider_pane_g

0x7ad2,	// (0x0006bdd0) calc_display_pane_ParamLimits

0x7aea,	// (0x0006bde8) calc_paper_pane_ParamLimits

0x7b06,	// (0x0006be04) grid_calc_pane_ParamLimits

0x96d3,	// (0x0006d9d1) popup_clock_digital_window_t1_ParamLimits

0x1754,	// (0x00065a52) main_image_pane_t1

0x7ab8,	// (0x0006bdb6) aid_size_cell_calc_ParamLimits

0x7ab8,	// (0x0006bdb6) aid_size_cell_calc

0xa457,	// (0x0006e755) popup_blid_sat_info2_window_ParamLimits

0xa457,	// (0x0006e755) popup_blid_sat_info2_window

0x4a85,	// (0x00068d83) aid_size_cell_blid

0x4a8d,	// (0x00068d8b) bg_popup_window_pane_cp07

0x4ab0,	// (0x00068dae) grid_popup_blid_pane

0x4ab8,	// (0x00068db6) heading_pane_cp05_ParamLimits

0x4ab8,	// (0x00068db6) heading_pane_cp05

0x4b80,	// (0x00068e7e) cell_popup_blid_pane_ParamLimits

0x4b80,	// (0x00068e7e) cell_popup_blid_pane

0x4ba0,	// (0x00068e9e) cell_popup_blid_pane_g1

0x4ba8,	// (0x00068ea6) cell_popup_blid_pane_t1

0xaade,	// (0x0006eddc) mup2_indicator_pane_ParamLimits

0xaade,	// (0x0006eddc) mup2_indicator_pane

0x09b7,	// (0x00064cb5) mup2_visualizer_osc_pane

0x4952,	// (0x00068c50) mup2_visualizer_spec_pane_ParamLimits

0x4952,	// (0x00068c50) mup2_visualizer_spec_pane

0xacb0,	// (0x0006efae) mup2_spec_half_pane

0xacb9,	// (0x0006efb7) mup2_spec_half_pane_cp

0xacc1,	// (0x0006efbf) mup2_spec_bar_pane_ParamLimits

0xacc1,	// (0x0006efbf) mup2_spec_bar_pane

0x48f3,	// (0x00068bf1) mup2_spec_bar_pane_g1

0x48fd,	// (0x00068bfb) mup2_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x000738fc) mup2_spec_bar_pane_g

0xace0,	// (0x0006efde) mup2_osc_middle_pane

0x490f,	// (0x00068c0d) mup2_visualizer_osc_pane_g1

0x0011,	// (0x0006430f) popup_number_entry_window_t1_ParamLimits

0x0024,	// (0x00064322) popup_number_entry_window_t2_ParamLimits

0x0036,	// (0x00064334) popup_number_entry_window_t3_ParamLimits

0x7936,	// (0x0006bc34) popup_number_entry_window_t5_ParamLimits

0x7936,	// (0x0006bc34) popup_number_entry_window_t5

0xf0af,	// (0x000733ad) popup_number_entry_window_t_ParamLimits

0x0048,	// (0x00064346) text_title_cp2_ParamLimits

0x9d7e,	// (0x0006e07c) aid_hotspot_pointer_text2_pane

0x9e10,	// (0x0006e10e) main_viewer_pane_g9_ParamLimits

0x9e10,	// (0x0006e10e) main_viewer_pane_g9

0x0d39,	// (0x00065037) cale_month_pane_t1_ParamLimits

0x0d8d,	// (0x0006508b) bg_cale_pane_ParamLimits

0x0da5,	// (0x000650a3) list_cale_pane_ParamLimits

0x0db6,	// (0x000650b4) listscroll_cale_day_pane_t1

0x0dc8,	// (0x000650c6) scroll_pane_cp09_ParamLimits

0x9bb3,	// (0x0006deb1) main_mup_eq_pane_t1_ParamLimits

0x9bb3,	// (0x0006deb1) main_mup_eq_pane_t1

0x9bc9,	// (0x0006dec7) main_mup_eq_pane_t2_ParamLimits

0x9bc9,	// (0x0006dec7) main_mup_eq_pane_t2

0x9bdf,	// (0x0006dedd) main_mup_eq_pane_t3_ParamLimits

0x9bdf,	// (0x0006dedd) main_mup_eq_pane_t3

0x9bf5,	// (0x0006def3) main_mup_eq_pane_t4_ParamLimits

0x9bf5,	// (0x0006def3) main_mup_eq_pane_t4

0x9c0b,	// (0x0006df09) main_mup_eq_pane_t5_ParamLimits

0x9c0b,	// (0x0006df09) main_mup_eq_pane_t5

0x9c21,	// (0x0006df1f) main_mup_eq_pane_t6_ParamLimits

0x9c21,	// (0x0006df1f) main_mup_eq_pane_t6

0x9c33,	// (0x0006df31) main_mup_eq_pane_t7_ParamLimits

0x9c33,	// (0x0006df31) main_mup_eq_pane_t7

0x9c45,	// (0x0006df43) main_mup_eq_pane_t8_ParamLimits

0x9c45,	// (0x0006df43) main_mup_eq_pane_t8

0x9c57,	// (0x0006df55) main_mup_eq_pane_t9_ParamLimits

0x9c57,	// (0x0006df55) main_mup_eq_pane_t9

0x9c6d,	// (0x0006df6b) main_mup_eq_pane_t10_ParamLimits

0x9c6d,	// (0x0006df6b) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x00073738) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x00073738) main_mup_eq_pane_t

0x9d00,	// (0x0006dffe) mup_equalizer_pane_cp5_ParamLimits

0x9d12,	// (0x0006e010) mup_equalizer_pane_cp6_ParamLimits

0x9d24,	// (0x0006e022) mup_equalizer_pane_cp7_ParamLimits

0x7673,	// (0x0006b971) main_gallery_pane

0x4918,	// (0x00068c16) smil2_volume_pane

0x4933,	// (0x00068c31) smil_status_volume_pane_g1_ParamLimits

0x4920,	// (0x00068c1e) smil_status_volume_pane_g2_ParamLimits

0xa61b,	// (0x0006e919) smil_status_volume_pane_g3_ParamLimits

0xf603,	// (0x00073901) smil_status_volume_pane_g_ParamLimits

0x4a8d,	// (0x00068d8b) bg_popup_window_pane_cp07_ParamLimits

0x4a9b,	// (0x00068d99) blid_firmament_pane

0xace9,	// (0x0006efe7) aid_size_cell_gallery_ParamLimits

0xace9,	// (0x0006efe7) aid_size_cell_gallery

0xacf7,	// (0x0006eff5) grid_gallery_pane_ParamLimits

0xacf7,	// (0x0006eff5) grid_gallery_pane

0xad03,	// (0x0006f001) cell_gallery_pane_ParamLimits

0xad03,	// (0x0006f001) cell_gallery_pane

0x4bb6,	// (0x00068eb4) bg_cell_gallery_focus_pane_ParamLimits

0x4bb6,	// (0x00068eb4) bg_cell_gallery_focus_pane

0x4bc8,	// (0x00068ec6) cell_gallery_pane_g1_ParamLimits

0x4bc8,	// (0x00068ec6) cell_gallery_pane_g1

0xad42,	// (0x0006f040) cell_gallery_pane_g2_ParamLimits

0xad42,	// (0x0006f040) cell_gallery_pane_g2

0xad4f,	// (0x0006f04d) cell_gallery_pane_g3_ParamLimits

0xad4f,	// (0x0006f04d) cell_gallery_pane_g3

0x4bd4,	// (0x00068ed2) cell_gallery_pane_g4_ParamLimits

0x4bd4,	// (0x00068ed2) cell_gallery_pane_g4

0x0003,

0xf6b1,	// (0x000739af) cell_gallery_pane_g_ParamLimits

0xf6b1,	// (0x000739af) cell_gallery_pane_g

0x4be0,	// (0x00068ede) bg_cell_gallery_focus_pane_g1

0x4be8,	// (0x00068ee6) bg_cell_gallery_focus_pane_g2

0x4bf0,	// (0x00068eee) bg_cell_gallery_focus_pane_g3

0x4bf8,	// (0x00068ef6) bg_cell_gallery_focus_pane_g4

0x4c00,	// (0x00068efe) bg_cell_gallery_focus_pane_g5

0x4c08,	// (0x00068f06) bg_cell_gallery_focus_pane_g6

0x4c10,	// (0x00068f0e) bg_cell_gallery_focus_pane_g7

0x4c18,	// (0x00068f16) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6ba,	// (0x000739b8) bg_cell_gallery_focus_pane_g

0x4c20,	// (0x00068f1e) aid_firma_cardinal

0x4c34,	// (0x00068f32) blid_firmament_pane_t1

0x4c4b,	// (0x00068f49) blid_firmament_pane_t2

0x4c62,	// (0x00068f60) blid_firmament_pane_t3

0x4c79,	// (0x00068f77) blid_firmament_pane_t4

0x0003,

0xf6cb,	// (0x000739c9) blid_firmament_pane_t

0x4c90,	// (0x00068f8e) blid_sat_info_pane

0x4ca0,	// (0x00068f9e) blid_sat_info_pane_g1

0x4ca0,	// (0x00068f9e) blid_sat_info_pane_g2

0x0001,

0xf6d4,	// (0x000739d2) blid_sat_info_pane_g

0x4caa,	// (0x00068fa8) blid_sat_info_pane_t1

0x4cb8,	// (0x00068fb6) smil2_volume_content_pane

0x4cc1,	// (0x00068fbf) smil2_volume_pane_g1

0x4cc9,	// (0x00068fc7) smil2_volume_content_pane_g1

0x4cd2,	// (0x00068fd0) smil2_volume_content_pane_g2

0x4cdb,	// (0x00068fd9) smil2_volume_content_pane_g3

0x4ce4,	// (0x00068fe2) smil2_volume_content_pane_g4

0x4ced,	// (0x00068feb) smil2_volume_content_pane_g5

0x4cf6,	// (0x00068ff4) smil2_volume_content_pane_g6

0x4cff,	// (0x00068ffd) smil2_volume_content_pane_g7

0x4d08,	// (0x00069006) smil2_volume_content_pane_g8

0x4d11,	// (0x0006900f) smil2_volume_content_pane_g9

0x4d1a,	// (0x00069018) smil2_volume_content_pane_g10

0x0009,

0xf6d9,	// (0x000739d7) smil2_volume_content_pane_g

0x8021,	// (0x0006c31f) cale_week_day_heading_pane_t1_ParamLimits

0x805c,	// (0x0006c35a) cale_week_day_heading_pane_t2_ParamLimits

0x8097,	// (0x0006c395) cale_week_day_heading_pane_t3_ParamLimits

0x80d2,	// (0x0006c3d0) cale_week_day_heading_pane_t4_ParamLimits

0x810d,	// (0x0006c40b) cale_week_day_heading_pane_t5_ParamLimits

0x8148,	// (0x0006c446) cale_week_day_heading_pane_t6_ParamLimits

0x8183,	// (0x0006c481) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x000734b4) cale_week_day_heading_pane_t_ParamLimits

0x0965,	// (0x00064c63) bg_cale_side_pane_ParamLimits

0x81be,	// (0x0006c4bc) cale_week_time_pane_t1_ParamLimits

0x81f8,	// (0x0006c4f6) cale_week_time_pane_t2_ParamLimits

0x8232,	// (0x0006c530) cale_week_time_pane_t3_ParamLimits

0x826c,	// (0x0006c56a) cale_week_time_pane_t4_ParamLimits

0x82a6,	// (0x0006c5a4) cale_week_time_pane_t5_ParamLimits

0x82e0,	// (0x0006c5de) cale_week_time_pane_t6_ParamLimits

0x831a,	// (0x0006c618) cale_week_time_pane_t7_ParamLimits

0x8354,	// (0x0006c652) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x000734c3) cale_week_time_pane_t_ParamLimits

0x838e,	// (0x0006c68c) cell_cale_week_pane_g2_ParamLimits

0x0965,	// (0x00064c63) bg_cale_side_pane_cp01_ParamLimits

0x927f,	// (0x0006d57d) cale_month_week_pane_t1_ParamLimits

0x92b8,	// (0x0006d5b6) cale_month_week_pane_t2_ParamLimits

0x92f1,	// (0x0006d5ef) cale_month_week_pane_t3_ParamLimits

0x932a,	// (0x0006d628) cale_month_week_pane_t4_ParamLimits

0x9363,	// (0x0006d661) cale_month_week_pane_t5_ParamLimits

0x939c,	// (0x0006d69a) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x00073598) cale_month_week_pane_t_ParamLimits

0x94c3,	// (0x0006d7c1) cell_cale_month_pane_g1_ParamLimits

0x7673,	// (0x0006b971) main_cale_event_viewer_pane

0x7673,	// (0x0006b971) listscroll_cale_event_viewer_pane

0x4d23,	// (0x00069021) list_cale_ev_pane

0x4d2b,	// (0x00069029) scroll_pane_cp023

0xad5c,	// (0x0006f05a) field_cale_ev_pane_ParamLimits

0xad5c,	// (0x0006f05a) field_cale_ev_pane

0x4d37,	// (0x00069035) field_cale_ev_content_pane_ParamLimits

0x4d37,	// (0x00069035) field_cale_ev_content_pane

0x4d43,	// (0x00069041) field_cale_ev_pane_g1_ParamLimits

0x4d43,	// (0x00069041) field_cale_ev_pane_g1

0x4d4f,	// (0x0006904d) field_cale_ev_pane_g2_ParamLimits

0x4d4f,	// (0x0006904d) field_cale_ev_pane_g2

0x4d67,	// (0x00069065) field_cale_ev_pane_g3_ParamLimits

0x4d67,	// (0x00069065) field_cale_ev_pane_g3

0x0002,

0xf6ee,	// (0x000739ec) field_cale_ev_pane_g_ParamLimits

0xf6ee,	// (0x000739ec) field_cale_ev_pane_g

0x4d7f,	// (0x0006907d) field_cale_ev_pane_t1_ParamLimits

0x4d7f,	// (0x0006907d) field_cale_ev_pane_t1

0xad76,	// (0x0006f074) field_cale_ev_content_pane_t1_ParamLimits

0xad76,	// (0x0006f074) field_cale_ev_content_pane_t1

0x15f8,	// (0x000658f6) bg_button_pane_cp01

0x7e0c,	// (0x0006c10a) listscroll_cale_week_pane_ParamLimits

0x0910,	// (0x00064c0e) popup_toolbar_window_cp01

0x0936,	// (0x00064c34) listscroll_cale_week_pane_t1_ParamLimits

0x7e0c,	// (0x0006c10a) listscroll_cale_day_pane_ParamLimits

0x0910,	// (0x00064c0e) popup_toolbar_window_cp02

0x0db6,	// (0x000650b4) listscroll_cale_day_pane_t1_ParamLimits

0x7e0c,	// (0x0006c10a) main_cale_month_pane_ParamLimits

0xa52a,	// (0x0006e828) popup_toolbar_window_cp03_ParamLimits

0xa52a,	// (0x0006e828) popup_toolbar_window_cp03

0x9f68,	// (0x0006e266) main_image_pane_g2_ParamLimits

0x9f68,	// (0x0006e266) main_image_pane_g2

0x9f74,	// (0x0006e272) main_image_pane_g3_ParamLimits

0x9f74,	// (0x0006e272) main_image_pane_g3

0x0002,

0xf4cc,	// (0x000737ca) main_image_pane_g_ParamLimits

0xf4cc,	// (0x000737ca) main_image_pane_g

0x1754,	// (0x00065a52) main_image_pane_t1_ParamLimits

0x9f80,	// (0x0006e27e) main_image_pane_t2_ParamLimits

0x9f80,	// (0x0006e27e) main_image_pane_t2

0x9f92,	// (0x0006e290) main_image_pane_t3_ParamLimits

0x9f92,	// (0x0006e290) main_image_pane_t3

0x9fa4,	// (0x0006e2a2) main_image_pane_t4_ParamLimits

0x9fa4,	// (0x0006e2a2) main_image_pane_t4

0x0003,

0xf4d3,	// (0x000737d1) main_image_pane_t_ParamLimits

0xf4d3,	// (0x000737d1) main_image_pane_t

0x9fb6,	// (0x0006e2b4) popup_image_details_window_cp01

0x9fbe,	// (0x0006e2bc) popup_toobar_trans_pane_cp01_ParamLimits

0x9fbe,	// (0x0006e2bc) popup_toobar_trans_pane_cp01

0xa49e,	// (0x0006e79c) popup_image_details_window_ParamLimits

0xa49e,	// (0x0006e79c) popup_image_details_window

0xa4aa,	// (0x0006e7a8) popup_image_focus_window

0xa794,	// (0x0006ea92) camera2_autofocus_pane_ParamLimits

0xa794,	// (0x0006ea92) camera2_autofocus_pane

0x7673,	// (0x0006b971) bg_popup_sub_pane_cp06

0x4d96,	// (0x00069094) popup_image_focus_window_g1

0x4d9e,	// (0x0006909c) popup_image_focus_window_g2

0x4da6,	// (0x000690a4) popup_image_focus_window_g3

0x4dae,	// (0x000690ac) popup_image_focus_window_g4

0x0003,

0xf6f5,	// (0x000739f3) popup_image_focus_window_g

0x4db6,	// (0x000690b4) popup_image_focus_window_t1

0x4dc4,	// (0x000690c2) popup_image_focus_window_t2

0x4dd3,	// (0x000690d1) popup_image_focus_window_t3

0x0002,

0xf6fe,	// (0x000739fc) popup_image_focus_window_t

0x4de1,	// (0x000690df) camera2_autofocus_pane_g1

0x223d,	// (0x0006653b) bg_tb_trans_pane_cp01

0x4def,	// (0x000690ed) popup_image_details_window_g1

0x4e02,	// (0x00069100) popup_image_details_window_g2

0x0002,

0xf710,	// (0x00073a0e) popup_image_details_window_g

0x4e2b,	// (0x00069129) popup_image_details_window_t1

0x4e3d,	// (0x0006913b) popup_image_details_window_t2

0x4e56,	// (0x00069154) popup_image_details_window_t3

0x4e6a,	// (0x00069168) popup_image_details_window_t4

0x4e85,	// (0x00069183) popup_image_details_window_t5

0x0004,

0xf717,	// (0x00073a15) popup_image_details_window_t

0x0716,	// (0x00064a14) bg_calc_paper_pane_ParamLimits

0x7673,	// (0x0006b971) grid_highlight_pane_cp013

0x7beb,	// (0x0006bee9) list_calc_pane_ParamLimits

0x7bfd,	// (0x0006befb) scroll_pane_cp024

0x0748,	// (0x00064a46) bg_calc_display_pane_ParamLimits

0x7c05,	// (0x0006bf03) calc_display_pane_t1_ParamLimits

0x7c1a,	// (0x0006bf18) calc_display_pane_t2_ParamLimits

0x7c2f,	// (0x0006bf2d) calc_display_pane_t3_ParamLimits

0xf136,	// (0x00073434) calc_display_pane_t_ParamLimits

0x7ce5,	// (0x0006bfe3) cell_calc_pane_g2

0x0001,

0xf153,	// (0x00073451) cell_calc_pane_g

0x7cee,	// (0x0006bfec) cell_calc_pane_t1

0x07f5,	// (0x00064af3) grid_highlight_pane_cp02_ParamLimits

0x080b,	// (0x00064b09) toolbar_button_pane_cp01_ParamLimits

0x080b,	// (0x00064b09) toolbar_button_pane_cp01

0x1799,	// (0x00065a97) temp_image_control_pane_ParamLimits

0x1799,	// (0x00065a97) temp_image_control_pane

0x223d,	// (0x0006653b) main_mp3_pane

0x4e9f,	// (0x0006919d) temp_image_control_pane_g1_ParamLimits

0x4e9f,	// (0x0006919d) temp_image_control_pane_g1

0x4ead,	// (0x000691ab) temp_image_control_pane_g2_ParamLimits

0x4ead,	// (0x000691ab) temp_image_control_pane_g2

0x4ebf,	// (0x000691bd) temp_image_control_pane_g3_ParamLimits

0x4ebf,	// (0x000691bd) temp_image_control_pane_g3

0xadc0,	// (0x0006f0be) temp_image_control_pane_g4_ParamLimits

0xadc0,	// (0x0006f0be) temp_image_control_pane_g4

0x0003,

0xf722,	// (0x00073a20) temp_image_control_pane_g_ParamLimits

0xf722,	// (0x00073a20) temp_image_control_pane_g

0x4e9f,	// (0x0006919d) main_mp3_pane_g1

0xadd1,	// (0x0006f0cf) main_mp3_pane_g2

0x0007,

0xf72b,	// (0x00073a29) main_mp3_pane_g

0x4f02,	// (0x00069200) main_mp3_pane_t1

0x0a01,	// (0x00064cff) main_camera_pane_g8_ParamLimits

0x0a01,	// (0x00064cff) main_camera_pane_g8

0x85b7,	// (0x0006c8b5) main_video_pane_g7_ParamLimits

0x85b7,	// (0x0006c8b5) main_video_pane_g7

0xa8c3,	// (0x0006ebc1) main_camera2_pane_t7_ParamLimits

0xa8c3,	// (0x0006ebc1) main_camera2_pane_t7

0x0b56,	// (0x00064e54) scroll_pane_cp025_ParamLimits

0x0b56,	// (0x00064e54) scroll_pane_cp025

0x0b6a,	// (0x00064e68) scroll_pane_cp026_ParamLimits

0x0b6a,	// (0x00064e68) scroll_pane_cp026

0x0b79,	// (0x00064e77) wml_content_pane_ParamLimits

0x7673,	// (0x0006b971) main_touch_calib_pane

0xae69,	// (0x0006f167) main_touch_calib_pane_g1

0xae75,	// (0x0006f173) main_touch_calib_pane_g2

0xae81,	// (0x0006f17f) main_touch_calib_pane_g3

0xae8d,	// (0x0006f18b) main_touch_calib_pane_g4

0x0003,

0xf749,	// (0x00073a47) main_touch_calib_pane_g

0xae99,	// (0x0006f197) main_touch_calib_pane_t1

0xaeae,	// (0x0006f1ac) main_touch_calib_pane_t2

0x0004,

0xf752,	// (0x00073a50) main_touch_calib_pane_t

0x134a,	// (0x00065648) mup_progress_pane_cp02

0x137f,	// (0x0006567d) navi_pane_g1

0x140a,	// (0x00065708) navi_pane_mp_t3

0x223d,	// (0x0006653b) main_mp3_pane_ParamLimits

0xa565,	// (0x0006e863) navi_pane_ParamLimits

0x4e9f,	// (0x0006919d) main_mp3_pane_g1_ParamLimits

0xadd1,	// (0x0006f0cf) main_mp3_pane_g2_ParamLimits

0xaddd,	// (0x0006f0db) main_mp3_pane_g3_ParamLimits

0xaddd,	// (0x0006f0db) main_mp3_pane_g3

0xade9,	// (0x0006f0e7) main_mp3_pane_g4_ParamLimits

0xade9,	// (0x0006f0e7) main_mp3_pane_g4

0x4ecf,	// (0x000691cd) main_mp3_pane_g5_ParamLimits

0x4ecf,	// (0x000691cd) main_mp3_pane_g5

0x4edd,	// (0x000691db) main_mp3_pane_g6_ParamLimits

0x4edd,	// (0x000691db) main_mp3_pane_g6

0x4eea,	// (0x000691e8) main_mp3_pane_g7_ParamLimits

0x4eea,	// (0x000691e8) main_mp3_pane_g7

0x4ef6,	// (0x000691f4) main_mp3_pane_g8_ParamLimits

0x4ef6,	// (0x000691f4) main_mp3_pane_g8

0xf72b,	// (0x00073a29) main_mp3_pane_g_ParamLimits

0xadf5,	// (0x0006f0f3) main_mp3_pane_t2

0xae03,	// (0x0006f101) main_mp3_pane_t3

0x4f10,	// (0x0006920e) main_mp3_pane_t4

0x4f1e,	// (0x0006921c) main_mp3_pane_t5

0x0005,

0xf73c,	// (0x00073a3a) main_mp3_pane_t

0x4f2c,	// (0x0006922a) mup_progress_pane_cp01

0x76bd,	// (0x0006b9bb) aid_zoom_text_secondary2

0x4d23,	// (0x00069021) list_cale_ev2_pane

0x4d2b,	// (0x00069029) scroll_pane_cp023_ParamLimits

0xaef9,	// (0x0006f1f7) field_cale_ev2_pane_ParamLimits

0xaef9,	// (0x0006f1f7) field_cale_ev2_pane

0xaf0f,	// (0x0006f20d) field_cale_ev2_pane_g1_ParamLimits

0xaf0f,	// (0x0006f20d) field_cale_ev2_pane_g1

0xaf1b,	// (0x0006f219) field_cale_ev2_pane_g2_ParamLimits

0xaf1b,	// (0x0006f219) field_cale_ev2_pane_g2

0xaf33,	// (0x0006f231) field_cale_ev2_pane_g3_ParamLimits

0xaf33,	// (0x0006f231) field_cale_ev2_pane_g3

0x0003,

0xf75d,	// (0x00073a5b) field_cale_ev2_pane_g_ParamLimits

0xf75d,	// (0x00073a5b) field_cale_ev2_pane_g

0x66fb,	// (0x0006a9f9) field_cale_ev2_pane_t1_ParamLimits

0x66fb,	// (0x0006a9f9) field_cale_ev2_pane_t1

0x6712,	// (0x0006aa10) field_cale_ev2_pane_t2_ParamLimits

0x6712,	// (0x0006aa10) field_cale_ev2_pane_t2

0x0001,

0xf766,	// (0x00073a64) field_cale_ev2_pane_t_ParamLimits

0xf766,	// (0x00073a64) field_cale_ev2_pane_t

0x9e64,	// (0x0006e162) main_postcard_pane_g5_ParamLimits

0x9e64,	// (0x0006e162) main_postcard_pane_g5

0x9e70,	// (0x0006e16e) main_postcard_pane_g6_ParamLimits

0x9e70,	// (0x0006e16e) main_postcard_pane_g6

0x840c,	// (0x0006c70a) camera2_autofocus_pane_cp_ParamLimits

0x840c,	// (0x0006c70a) camera2_autofocus_pane_cp

0x223d,	// (0x0006653b) main_mup3_pane

0xaf90,	// (0x0006f28e) main_mup3_pane_g1_ParamLimits

0xaf90,	// (0x0006f28e) main_mup3_pane_g1

0xafb1,	// (0x0006f2af) main_mup3_pane_g2_ParamLimits

0xafb1,	// (0x0006f2af) main_mup3_pane_g2

0xb01e,	// (0x0006f31c) main_mup3_pane_g3_ParamLimits

0xb01e,	// (0x0006f31c) main_mup3_pane_g3

0xb059,	// (0x0006f357) main_mup3_pane_g4_ParamLimits

0xb059,	// (0x0006f357) main_mup3_pane_g4

0xb094,	// (0x0006f392) main_mup3_pane_g5_ParamLimits

0xb094,	// (0x0006f392) main_mup3_pane_g5

0xb0cf,	// (0x0006f3cd) main_mup3_pane_g6_ParamLimits

0xb0cf,	// (0x0006f3cd) main_mup3_pane_g6

0x4f34,	// (0x00069232) main_mup3_pane_g7_ParamLimits

0x4f34,	// (0x00069232) main_mup3_pane_g7

0x0007,

0xf776,	// (0x00073a74) main_mup3_pane_g_ParamLimits

0xf776,	// (0x00073a74) main_mup3_pane_g

0xb13d,	// (0x0006f43b) main_mup3_pane_t1_ParamLimits

0xb13d,	// (0x0006f43b) main_mup3_pane_t1

0xb19e,	// (0x0006f49c) main_mup3_pane_t2_ParamLimits

0xb19e,	// (0x0006f49c) main_mup3_pane_t2

0xb259,	// (0x0006f557) main_mup3_pane_t4_ParamLimits

0xb259,	// (0x0006f557) main_mup3_pane_t4

0xb29f,	// (0x0006f59d) main_mup3_pane_t5_ParamLimits

0xb29f,	// (0x0006f59d) main_mup3_pane_t5

0xb343,	// (0x0006f641) main_mup3_pane_t6_ParamLimits

0xb343,	// (0x0006f641) main_mup3_pane_t6

0x0005,

0xf787,	// (0x00073a85) main_mup3_pane_t_ParamLimits

0xf787,	// (0x00073a85) main_mup3_pane_t

0xb3eb,	// (0x0006f6e9) mup3_progress_pane_ParamLimits

0xb3eb,	// (0x0006f6e9) mup3_progress_pane

0xb44f,	// (0x0006f74d) popup_mup3_control_window_ParamLimits

0xb44f,	// (0x0006f74d) popup_mup3_control_window

0x4f42,	// (0x00069240) popup_mup3_text_window

0xb468,	// (0x0006f766) mup3_progress_pane_t1

0xb486,	// (0x0006f784) mup3_progress_pane_t2

0x4f4a,	// (0x00069248) mup3_progress_pane_t3

0x0002,

0xf794,	// (0x00073a92) mup3_progress_pane_t

0x4f67,	// (0x00069265) mup_progress_pane_cp03

0x7673,	// (0x0006b971) bg_tb_trans_pane_cp04

0xb4a4,	// (0x0006f7a2) mup3_volume_pane

0xb4ac,	// (0x0006f7aa) popup_mup3_control_window_g1

0xb4b5,	// (0x0006f7b3) mup3_volume_pane_g1

0xb4be,	// (0x0006f7bc) mup3_volume_pane_g2

0xb4c7,	// (0x0006f7c5) mup3_volume_pane_g3

0x0002,

0xf79b,	// (0x00073a99) mup3_volume_pane_g

0x7673,	// (0x0006b971) bg_tb_trans_pane_cp03

0x4f77,	// (0x00069275) popup_mup3_text_window_g1

0x4f7f,	// (0x0006927d) popup_mup3_text_window_t1

0x07cc,	// (0x00064aca) list_calc_item_pane_g1_ParamLimits

0x49f3,	// (0x00068cf1) mup_volume_pane_cp_g1

0xaec3,	// (0x0006f1c1) main_touch_calib_pane_t3

0xaed5,	// (0x0006f1d3) main_touch_calib_pane_t4

0xaee7,	// (0x0006f1e5) main_touch_calib_pane_t5

0x767d,	// (0x0006b97b) aid_cell_size_toolbar2

0x7685,	// (0x0006b983) aid_popup3_width_pane

0x6419,	// (0x0006a717) aid_zoom_text_msg_primary

0x09e9,	// (0x00064ce7) vorec_t7

0x0790,	// (0x00064a8e) bg_calc_paper_pane_g1_ParamLimits

0x07a8,	// (0x00064aa6) bg_calc_paper_pane_g2_ParamLimits

0x079c,	// (0x00064a9a) bg_calc_paper_pane_g3_ParamLimits

0x07c0,	// (0x00064abe) bg_calc_paper_pane_g4_ParamLimits

0x07b4,	// (0x00064ab2) bg_calc_paper_pane_g5_ParamLimits

0x7c68,	// (0x0006bf66) bg_calc_paper_pane_g6_ParamLimits

0x7c77,	// (0x0006bf75) bg_calc_paper_pane_g7_ParamLimits

0x7c86,	// (0x0006bf84) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0007343b) bg_calc_paper_pane_g_ParamLimits

0x7c95,	// (0x0006bf93) calc_bg_paper_pane_g9_ParamLimits

0x84ec,	// (0x0006c7ea) image_qvga_pane_ParamLimits

0x84ec,	// (0x0006c7ea) image_qvga_pane

0x065d,	// (0x0006495b) bg_popup_sub_pane_cp04_ParamLimits

0x16d0,	// (0x000659ce) popup_mup_playback_window_g1_ParamLimits

0x16dc,	// (0x000659da) popup_mup_playback_window_t1_ParamLimits

0x16f1,	// (0x000659ef) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x000737c5) popup_mup_playback_window_t_ParamLimits

0xa9ea,	// (0x0006ece8) main_mup2_pane_g3_ParamLimits

0xa9ea,	// (0x0006ece8) main_mup2_pane_g3

0x8794,	// (0x0006ca92) popup_toolbar_window_cp04

0x1ad2,	// (0x00065dd0) popup_call2_audio_second_window_g3_ParamLimits

0x1ad2,	// (0x00065dd0) popup_call2_audio_second_window_g3

0x1edc,	// (0x000661da) popup_call2_audio_first_window_g4_ParamLimits

0x1edc,	// (0x000661da) popup_call2_audio_first_window_g4

0x44e1,	// (0x000687df) popup_call2_audio_in_window_g4_ParamLimits

0x44e1,	// (0x000687df) popup_call2_audio_in_window_g4

0x9f5b,	// (0x0006e259) aid_area_sk_bg_cut_ParamLimits

0x9f5b,	// (0x0006e259) aid_area_sk_bg_cut

0x1706,	// (0x00065a04) aid_area_sk_bg_cut_2_ParamLimits

0x1706,	// (0x00065a04) aid_area_sk_bg_cut_2

0xad32,	// (0x0006f030) aid_placing_details_win

0xad3a,	// (0x0006f038) aid_placing_details_win_2

0x4de1,	// (0x000690df) camera2_autofocus_pane_g1_ParamLimits

0x786b,	// (0x0006bb69) popup_fixed_preview_cale_window_ParamLimits

0x786b,	// (0x0006bb69) popup_fixed_preview_cale_window

0x149b,	// (0x00065799) navi_slider_pane_g3

0x1492,	// (0x00065790) navi_slider_pane_g4

0x1489,	// (0x00065787) navi_slider_pane_g5

0x149b,	// (0x00065799) navi_slider_pane_g6

0x9973,	// (0x0006dc71) navi_slider_pane_g7

0x15c5,	// (0x000658c3) mup_scale_pane_g3

0x15ce,	// (0x000658cc) mup_scale_pane_g4

0x15d7,	// (0x000658d5) mup_scale_pane_g5

0x9d36,	// (0x0006e034) mup_scale_pane_g6

0x9d3f,	// (0x0006e03d) mup_scale_pane_g7

0x149b,	// (0x00065799) cams2_slider_pane_g3

0x4a7d,	// (0x00068d7b) cams2_slider_pane_g4

0xac9f,	// (0x0006ef9d) cams2_slider_pane_g5

0x149b,	// (0x00065799) cams2_slider_pane_g6

0xaca7,	// (0x0006efa5) cams2_slider_pane_g7

0x4ca0,	// (0x00068f9e) camera2_autofocus_pane_cp_g1

0x4882,	// (0x00068b80) bg_popup_preview_window_pane_cp02_ParamLimits

0x4882,	// (0x00068b80) bg_popup_preview_window_pane_cp02

0x4f8d,	// (0x0006928b) list_fp_cale_pane_ParamLimits

0x4f8d,	// (0x0006928b) list_fp_cale_pane

0x4f99,	// (0x00069297) popup_fixed_preview_cale_window_t1_ParamLimits

0x4f99,	// (0x00069297) popup_fixed_preview_cale_window_t1

0xb4d0,	// (0x0006f7ce) popup_fixed_preview_cale_window_t2_ParamLimits

0xb4d0,	// (0x0006f7ce) popup_fixed_preview_cale_window_t2

0xb4e5,	// (0x0006f7e3) popup_fixed_preview_cale_window_t3_ParamLimits

0xb4e5,	// (0x0006f7e3) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a2,	// (0x00073aa0) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a2,	// (0x00073aa0) popup_fixed_preview_cale_window_t

0xb4fa,	// (0x0006f7f8) list_single_fp_cale_pane_ParamLimits

0xb4fa,	// (0x0006f7f8) list_single_fp_cale_pane

0x4fb7,	// (0x000692b5) list_single_fp_cale_pane_g1_ParamLimits

0x4fb7,	// (0x000692b5) list_single_fp_cale_pane_g1

0x4fc3,	// (0x000692c1) list_single_fp_cale_pane_g2_ParamLimits

0x4fc3,	// (0x000692c1) list_single_fp_cale_pane_g2

0x0002,

0xf7a9,	// (0x00073aa7) list_single_fp_cale_pane_g_ParamLimits

0xf7a9,	// (0x00073aa7) list_single_fp_cale_pane_g

0x4fdc,	// (0x000692da) list_single_fp_cale_pane_t1_ParamLimits

0x4fdc,	// (0x000692da) list_single_fp_cale_pane_t1

0x4fee,	// (0x000692ec) list_single_fp_cale_pane_t2_ParamLimits

0x4fee,	// (0x000692ec) list_single_fp_cale_pane_t2

0x0001,

0xf7b0,	// (0x00073aae) list_single_fp_cale_pane_t_ParamLimits

0xf7b0,	// (0x00073aae) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7673,	// (0x0006b971) main_dialer_pane

0xb50a,	// (0x0006f808) aid_cell_size_keypad

0xb514,	// (0x0006f812) dialer_ne_pane

0xb51c,	// (0x0006f81a) grid_dialer_command_1_pane

0xb524,	// (0x0006f822) grid_dialer_command_2_pane

0xb52c,	// (0x0006f82a) grid_dialer_keypad_pane

0xb53c,	// (0x0006f83a) bg_popup_call_pane_cp06_ParamLimits

0xb53c,	// (0x0006f83a) bg_popup_call_pane_cp06

0xb548,	// (0x0006f846) dialer_ne_clear_pane_ParamLimits

0xb548,	// (0x0006f846) dialer_ne_clear_pane

0x5021,	// (0x0006931f) dialer_ne_pane_g1

0x5029,	// (0x00069327) dialer_ne_pane_t1_ParamLimits

0x5029,	// (0x00069327) dialer_ne_pane_t1

0xb554,	// (0x0006f852) dialer_ne_pane_t2_ParamLimits

0xb554,	// (0x0006f852) dialer_ne_pane_t2

0xb571,	// (0x0006f86f) dialer_ne_pane_t3_ParamLimits

0xb571,	// (0x0006f86f) dialer_ne_pane_t3

0x0002,

0xf7b5,	// (0x00073ab3) dialer_ne_pane_t_ParamLimits

0xf7b5,	// (0x00073ab3) dialer_ne_pane_t

0xb595,	// (0x0006f893) dialer_ne_pane_t3_copy1_ParamLimits

0xb595,	// (0x0006f893) dialer_ne_pane_t3_copy1

0xb5b9,	// (0x0006f8b7) cell_dialer_keypad_pane_ParamLimits

0xb5b9,	// (0x0006f8b7) cell_dialer_keypad_pane

0xb5ce,	// (0x0006f8cc) cell_dialer_command_1_pane_ParamLimits

0xb5ce,	// (0x0006f8cc) cell_dialer_command_1_pane

0xb5e4,	// (0x0006f8e2) cell_dialer_command_2_pane_ParamLimits

0xb5e4,	// (0x0006f8e2) cell_dialer_command_2_pane

0x503b,	// (0x00069339) bg_button_pane_cp02_ParamLimits

0x503b,	// (0x00069339) bg_button_pane_cp02

0xb5f3,	// (0x0006f8f1) cell_dialer_keypad_pane_g1_ParamLimits

0xb5f3,	// (0x0006f8f1) cell_dialer_keypad_pane_g1

0x503b,	// (0x00069339) bg_button_pane_cp03_ParamLimits

0x503b,	// (0x00069339) bg_button_pane_cp03

0xb608,	// (0x0006f906) cell_dialer_command_1_pane_g1_ParamLimits

0xb608,	// (0x0006f906) cell_dialer_command_1_pane_g1

0x5047,	// (0x00069345) bg_button_pane_cp04

0xb61b,	// (0x0006f919) cell_dialer_command_2_pane_g1

0x09b7,	// (0x00064cb5) bg_button_pane_cp06

0x504f,	// (0x0006934d) dialer_ne_clear_pane_g1

0x138b,	// (0x00065689) navi_pane_g2

0x991b,	// (0x0006dc19) navi_pane_g3

0x0002,

0xf3ca,	// (0x000736c8) navi_pane_g

0x1418,	// (0x00065716) navi_pane_mv_g2

0x143f,	// (0x0006573d) navi_pane_mv_g5

0x9938,	// (0x0006dc36) navi_pane_mv_t1

0x0748,	// (0x00064a46) main_clock2_pane

0xb657,	// (0x0006f955) main_clock2_list_pane_ParamLimits

0xb657,	// (0x0006f955) main_clock2_list_pane

0xb67d,	// (0x0006f97b) main_clock2_pane_t1_ParamLimits

0xb67d,	// (0x0006f97b) main_clock2_pane_t1

0xb69d,	// (0x0006f99b) main_clock2_pane_t2_ParamLimits

0xb69d,	// (0x0006f99b) main_clock2_pane_t2

0x0004,

0xf7c1,	// (0x00073abf) main_clock2_pane_t_ParamLimits

0xf7c1,	// (0x00073abf) main_clock2_pane_t

0xb6f6,	// (0x0006f9f4) popup_clock_analogue_window_cp03_ParamLimits

0xb6f6,	// (0x0006f9f4) popup_clock_analogue_window_cp03

0xb714,	// (0x0006fa12) popup_clock_digital_window_cp02_ParamLimits

0xb714,	// (0x0006fa12) popup_clock_digital_window_cp02

0xb781,	// (0x0006fa7f) main_clock2_list_single_pane_ParamLimits

0xb781,	// (0x0006fa7f) main_clock2_list_single_pane

0x09b7,	// (0x00064cb5) list_highlight_pane_cp05

0x5087,	// (0x00069385) main_clock2_list_single_pane_t1

0x8794,	// (0x0006ca92) popup_toolbar_window_cp04_ParamLimits

0xad90,	// (0x0006f08e) camera2_autofocus_pane_g2_ParamLimits

0xad90,	// (0x0006f08e) camera2_autofocus_pane_g2

0xad9c,	// (0x0006f09a) camera2_autofocus_pane_g3_ParamLimits

0xad9c,	// (0x0006f09a) camera2_autofocus_pane_g3

0xada8,	// (0x0006f0a6) camera2_autofocus_pane_g4_ParamLimits

0xada8,	// (0x0006f0a6) camera2_autofocus_pane_g4

0xadb4,	// (0x0006f0b2) camera2_autofocus_pane_g5_ParamLimits

0xadb4,	// (0x0006f0b2) camera2_autofocus_pane_g5

0x0004,

0xf705,	// (0x00073a03) camera2_autofocus_pane_g_ParamLimits

0xf705,	// (0x00073a03) camera2_autofocus_pane_g

0xaf57,	// (0x0006f255) camera2_autofocus_pane_cp_g2

0xaf5f,	// (0x0006f25d) camera2_autofocus_pane_cp_g3

0xaf67,	// (0x0006f265) camera2_autofocus_pane_cp_g4

0xaf6f,	// (0x0006f26d) camera2_autofocus_pane_cp_g5

0x0004,

0xf76b,	// (0x00073a69) camera2_autofocus_pane_cp_g

0xb534,	// (0x0006f832) popup_dialer_spcha_window

0x7673,	// (0x0006b971) bg_popup_sub_pane_cp07

0x5095,	// (0x00069393) list_spcha_pane

0x509d,	// (0x0006939b) list_single_spcha_pane_ParamLimits

0x509d,	// (0x0006939b) list_single_spcha_pane

0x7673,	// (0x0006b971) list_highlight_pane_cp06

0x50ae,	// (0x000693ac) list_single_spcha_pane_t1

0x428b,	// (0x00068589) popup_call2_audio_out_window_g4_ParamLimits

0x428b,	// (0x00068589) popup_call2_audio_out_window_g4

0x7673,	// (0x0006b971) main_imed2_pane

0xa4b2,	// (0x0006e7b0) popup_imed_adjust2_window

0xa4c3,	// (0x0006e7c1) popup_imed_trans_window_ParamLimits

0xa4c3,	// (0x0006e7c1) popup_imed_trans_window

0x4ae4,	// (0x00068de2) popup_blid_sat_info2_window_t1

0x4af2,	// (0x00068df0) popup_blid_sat_info2_window_t2

0x000a,

0xf69a,	// (0x00073998) popup_blid_sat_info2_window_t

0xb82b,	// (0x0006fb29) aid_size_cell_colour_35

0xb842,	// (0x0006fb40) aid_size_cell_colour_112

0xb859,	// (0x0006fb57) aid_size_cell_effect

0x223d,	// (0x0006653b) bg_tb_trans_pane_cp02

0x0f64,	// (0x00065262) heading_imed_pane

0xb873,	// (0x0006fb71) listscroll_imed_pane

0x50bc,	// (0x000693ba) heading_imed_pane_g1

0x50c4,	// (0x000693c2) heading_imed_pane_t1

0x50d2,	// (0x000693d0) grid_imed_colour_35_pane_ParamLimits

0x50d2,	// (0x000693d0) grid_imed_colour_35_pane

0xb87f,	// (0x0006fb7d) grid_imed_effect_pane

0x50e5,	// (0x000693e3) list_imed_aspect_pane

0xb88b,	// (0x0006fb89) scroll_pane_cp027_ParamLimits

0xb88b,	// (0x0006fb89) scroll_pane_cp027

0xb897,	// (0x0006fb95) cell_imed_effect_pane_ParamLimits

0xb897,	// (0x0006fb95) cell_imed_effect_pane

0x50ed,	// (0x000693eb) cell_imed_colour_pane_ParamLimits

0x50ed,	// (0x000693eb) cell_imed_colour_pane

0x5127,	// (0x00069425) cell_imed_colour_pane_g1_ParamLimits

0x5127,	// (0x00069425) cell_imed_colour_pane_g1

0x5138,	// (0x00069436) hgihlgiht_grid_pane_cp016_ParamLimits

0x5138,	// (0x00069436) hgihlgiht_grid_pane_cp016

0xb8ad,	// (0x0006fbab) cell_imed_effect_pane_g1

0xb8b5,	// (0x0006fbb3) grid_highlight_pane_cp017

0x5149,	// (0x00069447) list_imed_single_pane_ParamLimits

0x5149,	// (0x00069447) list_imed_single_pane

0x7673,	// (0x0006b971) list_highlight_pane_cp07

0x515c,	// (0x0006945a) list_imed_aspect_pane_comp1_t1

0x488e,	// (0x00068b8c) bg_tb_trans_pane_cp05

0x517c,	// (0x0006947a) popup_imed_adjust2_window_g1

0x51a3,	// (0x000694a1) popup_imed_adjust2_window_t1

0x51bb,	// (0x000694b9) slider_imed_adjust_pane

0x51cf,	// (0x000694cd) slider_imed_adjust_pane_g1

0x51df,	// (0x000694dd) slider_imed_adjust_pane_g2

0x51ef,	// (0x000694ed) slider_imed_adjust_pane_g3

0x5200,	// (0x000694fe) slider_imed_adjust_pane_g4

0x0003,

0xf7de,	// (0x00073adc) slider_imed_adjust_pane_g

0xb8be,	// (0x0006fbbc) aid_size_cell_clipart2

0xb8ca,	// (0x0006fbc8) grid_imed_clipart_pane

0x5211,	// (0x0006950f) scroll_pane_cp031

0xb8d4,	// (0x0006fbd2) cell_imed_clipart_pane_ParamLimits

0xb8d4,	// (0x0006fbd2) cell_imed_clipart_pane

0xb8eb,	// (0x0006fbe9) cell_imed_clipart_pane_g1

0x7673,	// (0x0006b971) grid_highlight_pane_cp014

0xb663,	// (0x0006f961) main_clock2_pane_g1_ParamLimits

0xb663,	// (0x0006f961) main_clock2_pane_g1

0xb72c,	// (0x0006fa2a) aid_call2_pane_cp10

0xb73e,	// (0x0006fa3c) aid_call_pane_cp10

0x131a,	// (0x00065618) popup_clock_analogue_window_cp10_g1

0x131a,	// (0x00065618) popup_clock_analogue_window_cp10_g2

0xb750,	// (0x0006fa4e) popup_clock_analogue_window_cp10_g3

0xb750,	// (0x0006fa4e) popup_clock_analogue_window_cp10_g4

0x131a,	// (0x00065618) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7cc,	// (0x00073aca) popup_clock_analogue_window_cp10_g

0xb762,	// (0x0006fa60) popup_clock_analogue_window_cp10_t1

0xb793,	// (0x0006fa91) clock_digital_number_pane_cp10_ParamLimits

0xb793,	// (0x0006fa91) clock_digital_number_pane_cp10

0xb7ab,	// (0x0006faa9) clock_digital_number_pane_cp11_ParamLimits

0xb7ab,	// (0x0006faa9) clock_digital_number_pane_cp11

0xb7c3,	// (0x0006fac1) clock_digital_number_pane_cp12_ParamLimits

0xb7c3,	// (0x0006fac1) clock_digital_number_pane_cp12

0xb7db,	// (0x0006fad9) clock_digital_number_pane_cp13_ParamLimits

0xb7db,	// (0x0006fad9) clock_digital_number_pane_cp13

0xb7f3,	// (0x0006faf1) clock_digital_separator_pane_cp10_ParamLimits

0xb7f3,	// (0x0006faf1) clock_digital_separator_pane_cp10

0xb80b,	// (0x0006fb09) popup_clock_digital_window_cp02_t1_ParamLimits

0xb80b,	// (0x0006fb09) popup_clock_digital_window_cp02_t1

0x0655,	// (0x00064953) clock_digital_number_pane_cp10_g1

0x0655,	// (0x00064953) clock_digital_number_pane_cp10_g2

0x0001,

0xf7e7,	// (0x00073ae5) clock_digital_number_pane_cp10_g

0x0655,	// (0x00064953) clock_digital_separator_pane_cp10_g1

0x0655,	// (0x00064953) clock_digital_separator_pane_g2_cp10

0x1447,	// (0x00065745) navi_pane_vded_g4

0x1450,	// (0x0006574e) navi_pane_vded_g5

0x1459,	// (0x00065757) navi_pane_vded_t1

0x7673,	// (0x0006b971) main_vded_pane

0xb8f4,	// (0x0006fbf2) main_vded_pane_g1

0xb8fc,	// (0x0006fbfa) main_vded_pane_g2

0xb904,	// (0x0006fc02) main_vded_pane_g3

0x0002,

0xf7ec,	// (0x00073aea) main_vded_pane_g

0xb90c,	// (0x0006fc0a) main_vded_pane_t1

0xb91a,	// (0x0006fc18) main_vded_pane_t2

0x0001,

0xf7f3,	// (0x00073af1) main_vded_pane_t

0xb928,	// (0x0006fc26) vded_slider_pane

0xb930,	// (0x0006fc2e) vded_video_pane

0x5219,	// (0x00069517) vded_video_pane_g1

0xb938,	// (0x0006fc36) vded_video_pane_g2

0x4ca0,	// (0x00068f9e) vded_video_pane_g3

0x0002,

0xf7f8,	// (0x00073af6) vded_video_pane_g

0x5223,	// (0x00069521) vded_slider_pane_g1

0x49f3,	// (0x00068cf1) vded_slider_pane_g2

0x522c,	// (0x0006952a) vded_slider_pane_g3

0x5235,	// (0x00069533) vded_slider_pane_g4

0x523e,	// (0x0006953c) vded_slider_pane_g5

0x0004,

0xf7ff,	// (0x00073afd) vded_slider_pane_g

0xb443,	// (0x0006f741) mup3_rocker_pane_ParamLimits

0xb443,	// (0x0006f741) mup3_rocker_pane

0xb941,	// (0x0006fc3f) mup3_control_keys_pane_g1

0xb949,	// (0x0006fc47) mup3_control_keys_pane_g2

0xb951,	// (0x0006fc4f) mup3_control_keys_pane_g3

0xb959,	// (0x0006fc57) mup3_control_keys_pane_g4

0x0003,

0xf80a,	// (0x00073b08) mup3_control_keys_pane_g

0x788f,	// (0x0006bb8d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x788f,	// (0x0006bb8d) popup_toolbar2_fixed_window_cp01

0xb45b,	// (0x0006f759) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb45b,	// (0x0006f759) popup_toolbar2_fixed_window_cp02

0x1c44,	// (0x00065f42) popup_call2_audio_second_window_t4_ParamLimits

0x1c44,	// (0x00065f42) popup_call2_audio_second_window_t4

0x2172,	// (0x00066470) popup_call2_audio_first_window_t6_ParamLimits

0x2172,	// (0x00066470) popup_call2_audio_first_window_t6

0x438e,	// (0x0006868c) popup_call2_audio_out_window_t6_ParamLimits

0x438e,	// (0x0006868c) popup_call2_audio_out_window_t6

0x7673,	// (0x0006b971) main_vitu_pane

0xb969,	// (0x0006fc67) aid_size_cell_itu_ParamLimits

0xb969,	// (0x0006fc67) aid_size_cell_itu

0x3c2b,	// (0x00067f29) bg_popup_window_pane_cp08_ParamLimits

0x3c2b,	// (0x00067f29) bg_popup_window_pane_cp08

0xb977,	// (0x0006fc75) field_vitu_entry_pane_ParamLimits

0xb977,	// (0x0006fc75) field_vitu_entry_pane

0xb984,	// (0x0006fc82) grid_vitu_function_pane_ParamLimits

0xb984,	// (0x0006fc82) grid_vitu_function_pane

0xb990,	// (0x0006fc8e) grid_vitu_itu_pane_ParamLimits

0xb990,	// (0x0006fc8e) grid_vitu_itu_pane

0xb99c,	// (0x0006fc9a) cell_vitu_itu_pane_ParamLimits

0xb99c,	// (0x0006fc9a) cell_vitu_itu_pane

0xb9b1,	// (0x0006fcaf) cell_vitu_function_pane_ParamLimits

0xb9b1,	// (0x0006fcaf) cell_vitu_function_pane

0x223d,	// (0x0006653b) bg_popup_sub_pane_cp08_ParamLimits

0x223d,	// (0x0006653b) bg_popup_sub_pane_cp08

0xb9c3,	// (0x0006fcc1) field_vitu_entry_pane_t1_ParamLimits

0xb9c3,	// (0x0006fcc1) field_vitu_entry_pane_t1

0x525f,	// (0x0006955d) field_vitu_entry_pane_t2_ParamLimits

0x525f,	// (0x0006955d) field_vitu_entry_pane_t2

0x0001,

0xf818,	// (0x00073b16) field_vitu_entry_pane_t_ParamLimits

0xf818,	// (0x00073b16) field_vitu_entry_pane_t

0x527c,	// (0x0006957a) bg_button_pane_cp05_ParamLimits

0x527c,	// (0x0006957a) bg_button_pane_cp05

0xb9dc,	// (0x0006fcda) cell_vitu_itu_pane_g1

0xb9f4,	// (0x0006fcf2) cell_vitu_itu_pane_t1_ParamLimits

0xb9f4,	// (0x0006fcf2) cell_vitu_itu_pane_t1

0xba06,	// (0x0006fd04) cell_vitu_itu_pane_t2_ParamLimits

0xba06,	// (0x0006fd04) cell_vitu_itu_pane_t2

0x0002,

0xf81d,	// (0x00073b1b) cell_vitu_itu_pane_t_ParamLimits

0xf81d,	// (0x00073b1b) cell_vitu_itu_pane_t

0x528a,	// (0x00069588) bg_button_pane_cp07

0xba3b,	// (0x0006fd39) cell_vitu_function_pane_g1

0x7b1e,	// (0x0006be1c) main_calc_pane_g1

0x76b5,	// (0x0006b9b3) aid_visual_content_pane

0x7673,	// (0x0006b971) main_vradio_pane

0xba44,	// (0x0006fd42) main_vradio_pane_g1_ParamLimits

0xba44,	// (0x0006fd42) main_vradio_pane_g1

0x5294,	// (0x00069592) main_vradio_pane_g2_ParamLimits

0x5294,	// (0x00069592) main_vradio_pane_g2

0x0001,

0xf824,	// (0x00073b22) main_vradio_pane_g_ParamLimits

0xf824,	// (0x00073b22) main_vradio_pane_g

0xba52,	// (0x0006fd50) main_vradio_pane_t1_ParamLimits

0xba52,	// (0x0006fd50) main_vradio_pane_t1

0xba64,	// (0x0006fd62) main_vradio_pane_t2_ParamLimits

0xba64,	// (0x0006fd62) main_vradio_pane_t2

0x52a1,	// (0x0006959f) main_vradio_pane_t3_ParamLimits

0x52a1,	// (0x0006959f) main_vradio_pane_t3

0x0002,

0xf829,	// (0x00073b27) main_vradio_pane_t_ParamLimits

0xf829,	// (0x00073b27) main_vradio_pane_t

0xba76,	// (0x0006fd74) vradio_rocker_control_pane_ParamLimits

0xba76,	// (0x0006fd74) vradio_rocker_control_pane

0xba82,	// (0x0006fd80) vradio_station_info_pane_ParamLimits

0xba82,	// (0x0006fd80) vradio_station_info_pane

0x52b3,	// (0x000695b1) vradio_frequency_info_pane_ParamLimits

0x52b3,	// (0x000695b1) vradio_frequency_info_pane

0x4ca0,	// (0x00068f9e) vradio_station_info_pane_g1

0x52c2,	// (0x000695c0) vradio_station_info_pane_t1_ParamLimits

0x52c2,	// (0x000695c0) vradio_station_info_pane_t1

0x52e4,	// (0x000695e2) vradio_station_info_pane_t2_ParamLimits

0x52e4,	// (0x000695e2) vradio_station_info_pane_t2

0x0001,

0xf830,	// (0x00073b2e) vradio_station_info_pane_t_ParamLimits

0xf830,	// (0x00073b2e) vradio_station_info_pane_t

0x52f6,	// (0x000695f4) vradio_tuning_pane

0x52fe,	// (0x000695fc) vradio_rocker_control_pane_g1

0x5306,	// (0x00069604) vradio_rocker_control_pane_g2

0x530e,	// (0x0006960c) vradio_rocker_control_pane_g3

0x5316,	// (0x00069614) vradio_rocker_control_pane_g4

0x531e,	// (0x0006961c) vradio_rocker_control_pane_g5

0x0004,

0xf835,	// (0x00073b33) vradio_rocker_control_pane_g

0xba8f,	// (0x0006fd8d) vradio_frequency_info_pane_g1

0x5326,	// (0x00069624) vradio_frequency_info_pane_t1_ParamLimits

0x5326,	// (0x00069624) vradio_frequency_info_pane_t1

0xba97,	// (0x0006fd95) vradio_tuning_pane_g1

0xbaa0,	// (0x0006fd9e) vradio_tuning_pane_t1

0x76f4,	// (0x0006b9f2) area_side_right_pane_ParamLimits

0x76f4,	// (0x0006b9f2) area_side_right_pane

0x4849,	// (0x00068b47) status_small_pane_g1

0x4851,	// (0x00068b4f) status_small_pane_g2

0x485a,	// (0x00068b58) status_small_pane_g3

0x4863,	// (0x00068b61) status_small_pane_g4

0x0003,

0xf5f0,	// (0x000738ee) status_small_pane_g

0x486c,	// (0x00068b6a) status_small_pane_t1

0x7673,	// (0x0006b971) main_video3_pane

0x533a,	// (0x00069638) cams_zoom_vslider_pane

0x5342,	// (0x00069640) image3_wide_pane_ParamLimits

0x5342,	// (0x00069640) image3_wide_pane

0x535c,	// (0x0006965a) image3_wide_small_pane

0x5366,	// (0x00069664) main_video3_pane_g1_ParamLimits

0x5366,	// (0x00069664) main_video3_pane_g1

0x5382,	// (0x00069680) main_video3_pane_g2_ParamLimits

0x5382,	// (0x00069680) main_video3_pane_g2

0x0001,

0xf840,	// (0x00073b3e) main_video3_pane_g_ParamLimits

0xf840,	// (0x00073b3e) main_video3_pane_g

0x539e,	// (0x0006969c) main_video3_pane_t1_ParamLimits

0x539e,	// (0x0006969c) main_video3_pane_t1

0x53c9,	// (0x000696c7) main_video3_pane_t2_ParamLimits

0x53c9,	// (0x000696c7) main_video3_pane_t2

0x53f4,	// (0x000696f2) main_video3_pane_t3_ParamLimits

0x53f4,	// (0x000696f2) main_video3_pane_t3

0x0002,

0xf845,	// (0x00073b43) main_video3_pane_t_ParamLimits

0xf845,	// (0x00073b43) main_video3_pane_t

0x541f,	// (0x0006971d) cams_zoom_vslider_pane_g1

0x5428,	// (0x00069726) cams_zoom_vslider_pane_g2

0x0001,

0xf84c,	// (0x00073b4a) cams_zoom_vslider_pane_g

0x5430,	// (0x0006972e) small_slider_vertical_pane

0x4ca0,	// (0x00068f9e) small_slider_vertical_pane_g1

0x4ca0,	// (0x00068f9e) small_slider_vertical_pane_g2

0x5438,	// (0x00069736) small_slider_vertical_pane_g3

0x0002,

0xf851,	// (0x00073b4f) small_slider_vertical_pane_g

0x7673,	// (0x0006b971) main_hwr_training_pane

0x5441,	// (0x0006973f) hwr_training_instruct_pane_ParamLimits

0x5441,	// (0x0006973f) hwr_training_instruct_pane

0xbaaf,	// (0x0006fdad) hwr_training_navi_pane_ParamLimits

0xbaaf,	// (0x0006fdad) hwr_training_navi_pane

0xbac3,	// (0x0006fdc1) hwr_training_write_pane_ParamLimits

0xbac3,	// (0x0006fdc1) hwr_training_write_pane

0x7673,	// (0x0006b971) bg_frame_shadow_pane

0x5470,	// (0x0006976e) hwr_training_write_pane_g1

0x5478,	// (0x00069776) hwr_training_write_pane_g2

0x5480,	// (0x0006977e) hwr_training_write_pane_g3

0x5488,	// (0x00069786) hwr_training_write_pane_g4

0x5490,	// (0x0006978e) hwr_training_write_pane_g5

0x5498,	// (0x00069796) hwr_training_write_pane_g6

0x54a0,	// (0x0006979e) hwr_training_write_pane_g7

0x0006,

0xf858,	// (0x00073b56) hwr_training_write_pane_g

0xbaf1,	// (0x0006fdef) hwr_training_navi_pane_g1_ParamLimits

0xbaf1,	// (0x0006fdef) hwr_training_navi_pane_g1

0xbb03,	// (0x0006fe01) hwr_training_navi_pane_g2_ParamLimits

0xbb03,	// (0x0006fe01) hwr_training_navi_pane_g2

0xbb15,	// (0x0006fe13) hwr_training_navi_pane_g3_ParamLimits

0xbb15,	// (0x0006fe13) hwr_training_navi_pane_g3

0xbb25,	// (0x0006fe23) hwr_training_navi_pane_g4_ParamLimits

0xbb25,	// (0x0006fe23) hwr_training_navi_pane_g4

0x0004,

0xf867,	// (0x00073b65) hwr_training_navi_pane_g_ParamLimits

0xf867,	// (0x00073b65) hwr_training_navi_pane_g

0xbb3f,	// (0x0006fe3d) hwr_training_navi_pane_t1

0xbb4d,	// (0x0006fe4b) list_single_hwr_training_instruct_pane_ParamLimits

0xbb4d,	// (0x0006fe4b) list_single_hwr_training_instruct_pane

0x54a8,	// (0x000697a6) list_single_hwr_training_instruct_pane_t1

0x4be0,	// (0x00068ede) bg_frame_shadow_pane_g1

0x54b7,	// (0x000697b5) bg_frame_shadow_pane_g2

0x54bf,	// (0x000697bd) bg_frame_shadow_pane_g3

0x54c7,	// (0x000697c5) bg_frame_shadow_pane_g4

0x54cf,	// (0x000697cd) bg_frame_shadow_pane_g5

0x54d7,	// (0x000697d5) bg_frame_shadow_pane_g6

0x54df,	// (0x000697dd) bg_frame_shadow_pane_g7

0x086b,	// (0x00064b69) bg_frame_shadow_pane_g8

0x0007,

0xf872,	// (0x00073b70) bg_frame_shadow_pane_g

0x7673,	// (0x0006b971) main_video_tele_dialer_pane

0xbb65,	// (0x0006fe63) aid_size_cell_video_keypad_ParamLimits

0xbb65,	// (0x0006fe63) aid_size_cell_video_keypad

0xbb75,	// (0x0006fe73) grid_video_dialer_keypad_pane_ParamLimits

0xbb75,	// (0x0006fe73) grid_video_dialer_keypad_pane

0xbba5,	// (0x0006fea3) video_down_pane_cp_ParamLimits

0xbba5,	// (0x0006fea3) video_down_pane_cp

0xbbcd,	// (0x0006fecb) cell_video_dialer_keypad_pane_ParamLimits

0xbbcd,	// (0x0006fecb) cell_video_dialer_keypad_pane

0x54e7,	// (0x000697e5) bg_button_pane_cp08_ParamLimits

0x54e7,	// (0x000697e5) bg_button_pane_cp08

0xbbe2,	// (0x0006fee0) cell_video_dialer_keypad_pane_g1_ParamLimits

0xbbe2,	// (0x0006fee0) cell_video_dialer_keypad_pane_g1

0xb437,	// (0x0006f735) mup3_rocker2_pane_ParamLimits

0xb437,	// (0x0006f735) mup3_rocker2_pane

0x4ca0,	// (0x00068f9e) mup3_rocker2_pane_g1

0xa434,	// (0x0006e732) main_dialer2_pane

0x7673,	// (0x0006b971) main_mp4_pane

0xbc29,	// (0x0006ff27) main_mp4_pane_g1_ParamLimits

0xbc29,	// (0x0006ff27) main_mp4_pane_g1

0xbc37,	// (0x0006ff35) main_mp4_pane_g2_ParamLimits

0xbc37,	// (0x0006ff35) main_mp4_pane_g2

0xbc45,	// (0x0006ff43) main_mp4_pane_g3_ParamLimits

0xbc45,	// (0x0006ff43) main_mp4_pane_g3

0xbc7a,	// (0x0006ff78) main_mp4_pane_g4_ParamLimits

0xbc7a,	// (0x0006ff78) main_mp4_pane_g4

0xbca8,	// (0x0006ffa6) main_mp4_pane_g5_ParamLimits

0xbca8,	// (0x0006ffa6) main_mp4_pane_g5

0x0007,

0xf892,	// (0x00073b90) main_mp4_pane_g_ParamLimits

0xf892,	// (0x00073b90) main_mp4_pane_g

0xbd1c,	// (0x0007001a) main_mp4_pane_t1_ParamLimits

0xbd1c,	// (0x0007001a) main_mp4_pane_t1

0xbd74,	// (0x00070072) main_mp4_pane_t2_ParamLimits

0xbd74,	// (0x00070072) main_mp4_pane_t2

0x54f3,	// (0x000697f1) main_mp4_pane_t3_ParamLimits

0x54f3,	// (0x000697f1) main_mp4_pane_t3

0xbdc6,	// (0x000700c4) main_mp4_pane_t4_ParamLimits

0xbdc6,	// (0x000700c4) main_mp4_pane_t4

0x0003,

0xf8a3,	// (0x00073ba1) main_mp4_pane_t_ParamLimits

0xf8a3,	// (0x00073ba1) main_mp4_pane_t

0xbe06,	// (0x00070104) mp4_progress_pane_ParamLimits

0xbe06,	// (0x00070104) mp4_progress_pane

0xbe4a,	// (0x00070148) mp4_rocker_pane_ParamLimits

0xbe4a,	// (0x00070148) mp4_rocker_pane

0x5521,	// (0x0006981f) mp4_progress_pane_t1

0x5538,	// (0x00069836) mp4_progress_pane_t2

0x0001,

0xf8ac,	// (0x00073baa) mp4_progress_pane_t

0x554f,	// (0x0006984d) mup_progress_pane_cp04

0x4ca0,	// (0x00068f9e) mp4_rocker_pane_g1

0xbe68,	// (0x00070166) aid_cell_size_keypad2_ParamLimits

0xbe68,	// (0x00070166) aid_cell_size_keypad2

0xbe78,	// (0x00070176) dialer2_ne_pane_ParamLimits

0xbe78,	// (0x00070176) dialer2_ne_pane

0xbe84,	// (0x00070182) grid_dialer2_keypad_pane_ParamLimits

0xbe84,	// (0x00070182) grid_dialer2_keypad_pane

0x2585,	// (0x00066883) bg_popup_call_pane_cp07_ParamLimits

0x2585,	// (0x00066883) bg_popup_call_pane_cp07

0xbe90,	// (0x0007018e) dialer2_ne_pane_t1_ParamLimits

0xbe90,	// (0x0007018e) dialer2_ne_pane_t1

0xbeb5,	// (0x000701b3) cell_dialer2_keypad_pane_ParamLimits

0xbeb5,	// (0x000701b3) cell_dialer2_keypad_pane

0x5577,	// (0x00069875) bg_button_pane_pane_cp04_ParamLimits

0x5577,	// (0x00069875) bg_button_pane_pane_cp04

0xbeca,	// (0x000701c8) cell_dialer2_keypad_pane_g1_ParamLimits

0xbeca,	// (0x000701c8) cell_dialer2_keypad_pane_g1

0x8670,	// (0x0006c96e) aid_placing_vt_set_content_ParamLimits

0x8670,	// (0x0006c96e) aid_placing_vt_set_content

0x8696,	// (0x0006c994) aid_placing_vt_set_title_ParamLimits

0x8696,	// (0x0006c994) aid_placing_vt_set_title

0x7673,	// (0x0006b971) main_image3_pane

0xbf3e,	// (0x0007023c) area_side_right_pane_cp01_ParamLimits

0xbf3e,	// (0x0007023c) area_side_right_pane_cp01

0x2b5c,	// (0x00066e5a) main_image3_pane_g1_ParamLimits

0x2b5c,	// (0x00066e5a) main_image3_pane_g1

0xbf6b,	// (0x00070269) main_image3_pane_g2_ParamLimits

0xbf6b,	// (0x00070269) main_image3_pane_g2

0xbf82,	// (0x00070280) main_image3_pane_g3_ParamLimits

0xbf82,	// (0x00070280) main_image3_pane_g3

0xbf99,	// (0x00070297) main_image3_pane_g4_ParamLimits

0xbf99,	// (0x00070297) main_image3_pane_g4

0x0003,

0xf8bb,	// (0x00073bb9) main_image3_pane_g_ParamLimits

0xf8bb,	// (0x00073bb9) main_image3_pane_g

0xbfb0,	// (0x000702ae) main_image3_pane_t1_ParamLimits

0xbfb0,	// (0x000702ae) main_image3_pane_t1

0xbfd5,	// (0x000702d3) main_image3_pane_t2_ParamLimits

0xbfd5,	// (0x000702d3) main_image3_pane_t2

0xbff4,	// (0x000702f2) main_image3_pane_t3_ParamLimits

0xbff4,	// (0x000702f2) main_image3_pane_t3

0x0003,

0xf8c4,	// (0x00073bc2) main_image3_pane_t_ParamLimits

0xf8c4,	// (0x00073bc2) main_image3_pane_t

0x3c2b,	// (0x00067f29) grid_sctrl_middle_pane_cp01_ParamLimits

0x3c2b,	// (0x00067f29) grid_sctrl_middle_pane_cp01

0xc04f,	// (0x0007034d) cell_sctrl_middle_pane_cp01_ParamLimits

0xc04f,	// (0x0007034d) cell_sctrl_middle_pane_cp01

0xc060,	// (0x0007035e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc060,	// (0x0007035e) cell_sctrl_middle_pane_cp01_g1

0x7673,	// (0x0006b971) main_call4_pane

0xc06d,	// (0x0007036b) aid_size_button_call4_ParamLimits

0xc06d,	// (0x0007036b) aid_size_button_call4

0xc097,	// (0x00070395) call4_windows_pane_ParamLimits

0xc097,	// (0x00070395) call4_windows_pane

0xc0ab,	// (0x000703a9) grid_call4_button_pane_ParamLimits

0xc0ab,	// (0x000703a9) grid_call4_button_pane

0x559b,	// (0x00069899) call4_windows_conf_pane

0xc0cd,	// (0x000703cb) popup_call4_audio_first_window_ParamLimits

0xc0cd,	// (0x000703cb) popup_call4_audio_first_window

0xc0ed,	// (0x000703eb) popup_call4_audio_second_window_ParamLimits

0xc0ed,	// (0x000703eb) popup_call4_audio_second_window

0x55ce,	// (0x000698cc) popup_call4_audio_wait_window_ParamLimits

0x55ce,	// (0x000698cc) popup_call4_audio_wait_window

0xc0ff,	// (0x000703fd) cell_call4_button_pane_ParamLimits

0xc0ff,	// (0x000703fd) cell_call4_button_pane

0x080b,	// (0x00064b09) bg_button_pane_cp09_ParamLimits

0x080b,	// (0x00064b09) bg_button_pane_cp09

0xc122,	// (0x00070420) cell_call4_button_pane_g1_ParamLimits

0xc122,	// (0x00070420) cell_call4_button_pane_g1

0xc12f,	// (0x0007042d) cell_call4_button_pane_t1_ParamLimits

0xc12f,	// (0x0007042d) cell_call4_button_pane_t1

0x55e2,	// (0x000698e0) popup_call4_audio_conf_window_ParamLimits

0x55e2,	// (0x000698e0) popup_call4_audio_conf_window

0xb468,	// (0x0006f766) mup3_progress_pane_t1_ParamLimits

0xb486,	// (0x0006f784) mup3_progress_pane_t2_ParamLimits

0x4f4a,	// (0x00069248) mup3_progress_pane_t3_ParamLimits

0xf794,	// (0x00073a92) mup3_progress_pane_t_ParamLimits

0x4f67,	// (0x00069265) mup_progress_pane_cp03_ParamLimits

0xb961,	// (0x0006fc5f) mup3_control_keys_pane_g4_copy1

0xbe34,	// (0x00070132) mp4_rocker2_pane_ParamLimits

0xbe34,	// (0x00070132) mp4_rocker2_pane

0x55fe,	// (0x000698fc) mp4_rocker2_pane_g1

0x55f6,	// (0x000698f4) mp4_rocker2_pane_g2

0xc173,	// (0x00070471) mp4_rocker2_pane_g3

0xc17b,	// (0x00070479) mp4_rocker2_pane_g4

0xc183,	// (0x00070481) mp4_rocker2_pane_g5

0x0004,

0xf8cd,	// (0x00073bcb) mp4_rocker2_pane_g

0x7673,	// (0x0006b971) main_camera4_pane

0x7673,	// (0x0006b971) main_video4_pane

0xbb81,	// (0x0006fe7f) main_video_tele_dialer_pane_t1_ParamLimits

0xbb81,	// (0x0006fe7f) main_video_tele_dialer_pane_t1

0xbb93,	// (0x0006fe91) main_video_tele_dialer_pane_t2_ParamLimits

0xbb93,	// (0x0006fe91) main_video_tele_dialer_pane_t2

0x0001,

0xf883,	// (0x00073b81) main_video_tele_dialer_pane_t_ParamLimits

0xf883,	// (0x00073b81) main_video_tele_dialer_pane_t

0xc1a1,	// (0x0007049f) cam4_autofocus_pane_ParamLimits

0xc1a1,	// (0x0007049f) cam4_autofocus_pane

0xc1b7,	// (0x000704b5) cam4_image_uncrop_pane_ParamLimits

0xc1b7,	// (0x000704b5) cam4_image_uncrop_pane

0xc1cc,	// (0x000704ca) cam4_indicators_pane_ParamLimits

0xc1cc,	// (0x000704ca) cam4_indicators_pane

0xc1e6,	// (0x000704e4) main_camera4_pane_g1_ParamLimits

0xc1e6,	// (0x000704e4) main_camera4_pane_g1

0xc1f2,	// (0x000704f0) main_camera4_pane_g2_ParamLimits

0xc1f2,	// (0x000704f0) main_camera4_pane_g2

0xc1f2,	// (0x000704f0) main_camera4_pane_g3_ParamLimits

0xc1f2,	// (0x000704f0) main_camera4_pane_g3

0xc1fe,	// (0x000704fc) main_camera4_pane_g4_ParamLimits

0xc1fe,	// (0x000704fc) main_camera4_pane_g4

0xc20a,	// (0x00070508) main_camera4_pane_g5_ParamLimits

0xc20a,	// (0x00070508) main_camera4_pane_g5

0x0005,

0xf8d8,	// (0x00073bd6) main_camera4_pane_g_ParamLimits

0xf8d8,	// (0x00073bd6) main_camera4_pane_g

0xc224,	// (0x00070522) main_camera4_pane_t1_ParamLimits

0xc224,	// (0x00070522) main_camera4_pane_t1

0x4ecf,	// (0x000691cd) bg_tb_trans_pane_cp06

0xc274,	// (0x00070572) cam4_indicators_pane_g1

0xc284,	// (0x00070582) cam4_indicators_pane_g2

0x0002,

0xf8f3,	// (0x00073bf1) cam4_indicators_pane_g

0xc2a4,	// (0x000705a2) cam4_indicators_pane_t1

0xc2cc,	// (0x000705ca) main_video4_pane_g1_ParamLimits

0xc2cc,	// (0x000705ca) main_video4_pane_g1

0xc1f2,	// (0x000704f0) main_video4_pane_g2_ParamLimits

0xc1f2,	// (0x000704f0) main_video4_pane_g2

0xc1f2,	// (0x000704f0) main_video4_pane_g3_ParamLimits

0xc1f2,	// (0x000704f0) main_video4_pane_g3

0xc1fe,	// (0x000704fc) main_video4_pane_g4_ParamLimits

0xc1fe,	// (0x000704fc) main_video4_pane_g4

0x0004,

0xf8fa,	// (0x00073bf8) main_video4_pane_g_ParamLimits

0xf8fa,	// (0x00073bf8) main_video4_pane_g

0xc2e0,	// (0x000705de) vid4_indicators_pane_ParamLimits

0xc2e0,	// (0x000705de) vid4_indicators_pane

0xc2fe,	// (0x000705fc) video4_image_uncrop_cif_pane_ParamLimits

0xc2fe,	// (0x000705fc) video4_image_uncrop_cif_pane

0xc30b,	// (0x00070609) video4_image_uncrop_nhd_pane_ParamLimits

0xc30b,	// (0x00070609) video4_image_uncrop_nhd_pane

0xc1b7,	// (0x000704b5) video4_image_uncrop_vga_pane_ParamLimits

0xc1b7,	// (0x000704b5) video4_image_uncrop_vga_pane

0x223d,	// (0x0006653b) bg_tb_trans_pane_cp07

0xc274,	// (0x00070572) vid4_indicators_pane_g1

0xc318,	// (0x00070616) vid4_indicators_pane_g2

0xc328,	// (0x00070626) vid4_indicators_pane_g3

0x0004,

0xf905,	// (0x00073c03) vid4_indicators_pane_g

0xc355,	// (0x00070653) vid4_indicators_pane_t1

0xc36f,	// (0x0007066d) cam4_autofocus_pane_g1

0xc377,	// (0x00070675) cam4_autofocus_pane_g2

0xc37f,	// (0x0007067d) cam4_autofocus_pane_g3

0x0002,

0xf910,	// (0x00073c0e) cam4_autofocus_pane_g

0xc387,	// (0x00070685) cam4_autofocus_pane_g3_copy1

0xbbb1,	// (0x0006feaf) video_down_pane_cp_t1

0xbbbf,	// (0x0006febd) video_down_pane_cp_t2

0x0001,

0xf888,	// (0x00073b86) video_down_pane_cp_t

0x3c2b,	// (0x00067f29) popup_vitu2_window_ParamLimits

0x3c2b,	// (0x00067f29) popup_vitu2_window

0xc38f,	// (0x0007068d) aid_size_cell2_itu2_ParamLimits

0xc38f,	// (0x0007068d) aid_size_cell2_itu2

0xc3b1,	// (0x000706af) aid_size_cell_itu2_ParamLimits

0xc3b1,	// (0x000706af) aid_size_cell_itu2

0x2585,	// (0x00066883) bg_popup_window_pane_cp09_ParamLimits

0x2585,	// (0x00066883) bg_popup_window_pane_cp09

0xc3ef,	// (0x000706ed) field_vitu2_entry_pane_ParamLimits

0xc3ef,	// (0x000706ed) field_vitu2_entry_pane

0xc403,	// (0x00070701) grid_vitu2_function_pane_ParamLimits

0xc403,	// (0x00070701) grid_vitu2_function_pane

0xc431,	// (0x0007072f) grid_vitu2_itu_pane_ParamLimits

0xc431,	// (0x0007072f) grid_vitu2_itu_pane

0xc489,	// (0x00070787) cell_vitu2_itu_pane_ParamLimits

0xc489,	// (0x00070787) cell_vitu2_itu_pane

0xc4a1,	// (0x0007079f) cell_vitu2_function_pane_ParamLimits

0xc4a1,	// (0x0007079f) cell_vitu2_function_pane

0x5606,	// (0x00069904) bg_popup_call_pane_cp08_ParamLimits

0x5606,	// (0x00069904) bg_popup_call_pane_cp08

0x562f,	// (0x0006992d) field_vitu2_entry_pane_g1

0x563b,	// (0x00069939) field_vitu2_entry_pane_g2

0x0002,

0xf917,	// (0x00073c15) field_vitu2_entry_pane_g

0x6727,	// (0x0006aa25) field_vitu2_entry_pane_t1_ParamLimits

0x6727,	// (0x0006aa25) field_vitu2_entry_pane_t1

0x6755,	// (0x0006aa53) field_vitu2_entry_pane_t2_ParamLimits

0x6755,	// (0x0006aa53) field_vitu2_entry_pane_t2

0x0001,

0xf91e,	// (0x00073c1c) field_vitu2_entry_pane_t_ParamLimits

0xf91e,	// (0x00073c1c) field_vitu2_entry_pane_t

0xc4e0,	// (0x000707de) bg_button_pane_cp010_ParamLimits

0xc4e0,	// (0x000707de) bg_button_pane_cp010

0xc4ee,	// (0x000707ec) cell_vitu2_itu_pane_g1

0xc50e,	// (0x0007080c) cell_vitu2_itu_pane_t1_ParamLimits

0xc50e,	// (0x0007080c) cell_vitu2_itu_pane_t1

0x6772,	// (0x0006aa70) cell_vitu2_itu_pane_t2_ParamLimits

0x6772,	// (0x0006aa70) cell_vitu2_itu_pane_t2

0x0002,

0xf928,	// (0x00073c26) cell_vitu2_itu_pane_t_ParamLimits

0xf928,	// (0x00073c26) cell_vitu2_itu_pane_t

0x223d,	// (0x0006653b) bg_button_pane_cp011

0xc55a,	// (0x00070858) cell_vitu2_function_pane_g1

0x7673,	// (0x0006b971) main_myfav_hc_pane

0xc034,	// (0x00070332) popup_image3_note_pane_ParamLimits

0xc034,	// (0x00070332) popup_image3_note_pane

0xc040,	// (0x0007033e) popup_image3_tool_bar_pane_ParamLimits

0xc040,	// (0x0007033e) popup_image3_tool_bar_pane

0x67e8,	// (0x0006aae6) cell_vitu2_itu_pane_t3_ParamLimits

0x67e8,	// (0x0006aae6) cell_vitu2_itu_pane_t3

0x7673,	// (0x0006b971) bg_popup_trans_pane

0x565d,	// (0x0006995b) grid_image3_tool_bar_pane

0x5667,	// (0x00069965) bg_popup_trans_pane_g1

0x0c5f,	// (0x00064f5d) bg_popup_trans_pane_g2

0x566f,	// (0x0006996d) bg_popup_trans_pane_g3

0x5677,	// (0x00069975) bg_popup_trans_pane_g4

0x567f,	// (0x0006997d) bg_popup_trans_pane_g5

0x5687,	// (0x00069985) bg_popup_trans_pane_g6

0x568f,	// (0x0006998d) bg_popup_trans_pane_g7

0x5697,	// (0x00069995) bg_popup_trans_pane_g8

0x0c3f,	// (0x00064f3d) bg_popup_trans_pane_g9

0x0008,

0xf92f,	// (0x00073c2d) bg_popup_trans_pane_g

0x569f,	// (0x0006999d) cell_image3_tool_bar_pane_ParamLimits

0x569f,	// (0x0006999d) cell_image3_tool_bar_pane

0x4ca0,	// (0x00068f9e) cell_image3_tool_bar_pane_g1

0x7673,	// (0x0006b971) bg_popup_trans_pane_cp1

0x56b3,	// (0x000699b1) popup_image3_note_pane_t1

0x56c1,	// (0x000699bf) popup_image3_note_pane_t2

0x56cf,	// (0x000699cd) popup_image3_note_pane_t3

0x0002,

0xf942,	// (0x00073c40) popup_image3_note_pane_t

0xecc5,	// (0x00072fc3) popup_image3_note_pane_t3_copy1

0xc56e,	// (0x0007086c) bg_myfav_hc_instruction_pane_ParamLimits

0xc56e,	// (0x0007086c) bg_myfav_hc_instruction_pane

0xc580,	// (0x0007087e) cell_myfav_contact_pane_ParamLimits

0xc580,	// (0x0007087e) cell_myfav_contact_pane

0xc59a,	// (0x00070898) cell_myfav_contact_pane_cp1_ParamLimits

0xc59a,	// (0x00070898) cell_myfav_contact_pane_cp1

0xc5b0,	// (0x000708ae) cell_myfav_contact_pane_cp2_ParamLimits

0xc5b0,	// (0x000708ae) cell_myfav_contact_pane_cp2

0xc5c6,	// (0x000708c4) cell_myfav_contact_pane_cp3_ParamLimits

0xc5c6,	// (0x000708c4) cell_myfav_contact_pane_cp3

0xc5db,	// (0x000708d9) cell_myfav_contact_pane_cp4_ParamLimits

0xc5db,	// (0x000708d9) cell_myfav_contact_pane_cp4

0xc5ef,	// (0x000708ed) cell_myfav_contact_pane_cp5_ParamLimits

0xc5ef,	// (0x000708ed) cell_myfav_contact_pane_cp5

0xc603,	// (0x00070901) cell_myfav_contact_pane_cp6_ParamLimits

0xc603,	// (0x00070901) cell_myfav_contact_pane_cp6

0xc617,	// (0x00070915) cell_myfav_contact_pane_cp7_ParamLimits

0xc617,	// (0x00070915) cell_myfav_contact_pane_cp7

0xecd3,	// (0x00072fd1) listscroll_gen_pane_cp05

0xc62f,	// (0x0007092d) main_myfav_hc_pane_g1_ParamLimits

0xc62f,	// (0x0007092d) main_myfav_hc_pane_g1

0xc645,	// (0x00070943) main_myfav_hc_pane_g2_ParamLimits

0xc645,	// (0x00070943) main_myfav_hc_pane_g2

0x0002,

0xf949,	// (0x00073c47) main_myfav_hc_pane_g_ParamLimits

0xf949,	// (0x00073c47) main_myfav_hc_pane_g

0xc66f,	// (0x0007096d) main_myfav_hc_pane_t1_ParamLimits

0xc66f,	// (0x0007096d) main_myfav_hc_pane_t1

0xecdc,	// (0x00072fda) main_myfav_hc_pane_t2_ParamLimits

0xecdc,	// (0x00072fda) main_myfav_hc_pane_t2

0xecee,	// (0x00072fec) main_myfav_hc_pane_t3_ParamLimits

0xecee,	// (0x00072fec) main_myfav_hc_pane_t3

0xc684,	// (0x00070982) main_myfav_hc_pane_t4_ParamLimits

0xc684,	// (0x00070982) main_myfav_hc_pane_t4

0x0004,

0xf950,	// (0x00073c4e) main_myfav_hc_pane_t_ParamLimits

0xf950,	// (0x00073c4e) main_myfav_hc_pane_t

0x4ca0,	// (0x00068f9e) bg_myfav_hc_instruction_pane_g1

0xed00,	// (0x00072ffe) cell_myfav_contact_pane_g1_ParamLimits

0xed00,	// (0x00072ffe) cell_myfav_contact_pane_g1

0xed00,	// (0x00072ffe) cell_myfav_contact_pane_g2_ParamLimits

0xed00,	// (0x00072ffe) cell_myfav_contact_pane_g2

0xed0c,	// (0x0007300a) cell_myfav_contact_pane_g3_ParamLimits

0xed0c,	// (0x0007300a) cell_myfav_contact_pane_g3

0x4f34,	// (0x00069232) cell_myfav_contact_pane_g4_ParamLimits

0x4f34,	// (0x00069232) cell_myfav_contact_pane_g4

0xed19,	// (0x00073017) cell_myfav_contact_pane_g5_ParamLimits

0xed19,	// (0x00073017) cell_myfav_contact_pane_g5

0x0004,

0xf95b,	// (0x00073c59) cell_myfav_contact_pane_g_ParamLimits

0xf95b,	// (0x00073c59) cell_myfav_contact_pane_g

0xc65b,	// (0x00070959) main_myfav_hc_pane_g3_ParamLimits

0xc65b,	// (0x00070959) main_myfav_hc_pane_g3

0x7805,	// (0x0006bb03) popup_adpt_find_window

0xc6a8,	// (0x000709a6) afind_page_pane_ParamLimits

0xc6a8,	// (0x000709a6) afind_page_pane

0xc6b5,	// (0x000709b3) aid_size_cell_afind_ParamLimits

0xc6b5,	// (0x000709b3) aid_size_cell_afind

0xc6cf,	// (0x000709cd) bg_popup_sub_pane_cp09_ParamLimits

0xc6cf,	// (0x000709cd) bg_popup_sub_pane_cp09

0xc6dc,	// (0x000709da) find_pane_cp01_ParamLimits

0xc6dc,	// (0x000709da) find_pane_cp01

0xed25,	// (0x00073023) grid_afind_control_pane_ParamLimits

0xed25,	// (0x00073023) grid_afind_control_pane

0xc6e9,	// (0x000709e7) grid_afind_pane_ParamLimits

0xc6e9,	// (0x000709e7) grid_afind_pane

0xc6ff,	// (0x000709fd) cell_afind_pane_ParamLimits

0xc6ff,	// (0x000709fd) cell_afind_pane

0x4ca0,	// (0x00068f9e) afind_page_pane_g1

0xc735,	// (0x00070a33) afind_page_pane_g2

0xc73e,	// (0x00070a3c) afind_page_pane_g3

0x0002,

0xf966,	// (0x00073c64) afind_page_pane_g

0xc747,	// (0x00070a45) afind_page_pane_t1

0xed39,	// (0x00073037) cell_afind_grid_control_pane_ParamLimits

0xed39,	// (0x00073037) cell_afind_grid_control_pane

0x5577,	// (0x00069875) bg_button_pane_cp69_ParamLimits

0x5577,	// (0x00069875) bg_button_pane_cp69

0xc767,	// (0x00070a65) cell_afind_pane_g1_ParamLimits

0xc767,	// (0x00070a65) cell_afind_pane_g1

0xc774,	// (0x00070a72) cell_afind_pane_t1_ParamLimits

0xc774,	// (0x00070a72) cell_afind_pane_t1

0x0a4b,	// (0x00064d49) bg_button_pane_cp72

0xed48,	// (0x00073046) cell_afind_grid_control_pane_g1

0xa06c,	// (0x0006e36a) aid_image_placing_area_ParamLimits

0xa06c,	// (0x0006e36a) aid_image_placing_area

0x5247,	// (0x00069545) field_vitu_entry_pane_g1_ParamLimits

0x5247,	// (0x00069545) field_vitu_entry_pane_g1

0x5253,	// (0x00069551) field_vitu_entry_pane_g2_ParamLimits

0x5253,	// (0x00069551) field_vitu_entry_pane_g2

0x0001,

0xf813,	// (0x00073b11) field_vitu_entry_pane_g_ParamLimits

0xf813,	// (0x00073b11) field_vitu_entry_pane_g

0xb9dc,	// (0x0006fcda) cell_vitu_itu_pane_g1_ParamLimits

0xba1e,	// (0x0006fd1c) cell_vitu_itu_pane_t3_ParamLimits

0xba1e,	// (0x0006fd1c) cell_vitu_itu_pane_t3

0x5521,	// (0x0006981f) mp4_progress_pane_t1_ParamLimits

0x5538,	// (0x00069836) mp4_progress_pane_t2_ParamLimits

0xf8ac,	// (0x00073baa) mp4_progress_pane_t_ParamLimits

0x554f,	// (0x0006984d) mup_progress_pane_cp04_ParamLimits

0xc696,	// (0x00070994) main_myfav_hc_pane_t5_ParamLimits

0xc696,	// (0x00070994) main_myfav_hc_pane_t5

0x6421,	// (0x0006a71f) aid_zoom_text_primary

0x7805,	// (0x0006bb03) popup_adpt_find_window_ParamLimits

0x223d,	// (0x0006653b) main_cam_set_pane

0xc1da,	// (0x000704d8) cam4_zoom_pane_ParamLimits

0xc1da,	// (0x000704d8) cam4_zoom_pane

0xc786,	// (0x00070a84) main_cam_set_pane_g1_ParamLimits

0xc786,	// (0x00070a84) main_cam_set_pane_g1

0xc794,	// (0x00070a92) main_cam_set_pane_g2_ParamLimits

0xc794,	// (0x00070a92) main_cam_set_pane_g2

0x0001,

0xf96d,	// (0x00073c6b) main_cam_set_pane_g_ParamLimits

0xf96d,	// (0x00073c6b) main_cam_set_pane_g

0xc7a0,	// (0x00070a9e) main_cam_set_pane_t1_ParamLimits

0xc7a0,	// (0x00070a9e) main_cam_set_pane_t1

0xc7b2,	// (0x00070ab0) main_cset_listscroll_pane_ParamLimits

0xc7b2,	// (0x00070ab0) main_cset_listscroll_pane

0xc7db,	// (0x00070ad9) main_cset_slider_pane_ParamLimits

0xc7db,	// (0x00070ad9) main_cset_slider_pane

0xed59,	// (0x00073057) main_cset_list_pane_ParamLimits

0xed59,	// (0x00073057) main_cset_list_pane

0xed69,	// (0x00073067) scroll_pane_cp028

0xc7fa,	// (0x00070af8) aid_area_touch_slider

0xc816,	// (0x00070b14) cset_slider_pane

0xc840,	// (0x00070b3e) main_cset_slider_pane_g1

0xc855,	// (0x00070b53) main_cset_slider_pane_g2

0x0011,

0xf972,	// (0x00073c70) main_cset_slider_pane_g

0xeda2,	// (0x000730a0) main_cset_slider_pane_t1

0xc911,	// (0x00070c0f) main_cset_slider_pane_t2

0xc92b,	// (0x00070c29) main_cset_slider_pane_t3

0xc945,	// (0x00070c43) main_cset_slider_pane_t4

0xc95f,	// (0x00070c5d) main_cset_slider_pane_t5

0xc979,	// (0x00070c77) main_cset_slider_pane_t6

0xc98e,	// (0x00070c8c) main_cset_slider_pane_t7

0x000e,

0xf997,	// (0x00073c95) main_cset_slider_pane_t

0xca92,	// (0x00070d90) cset_list_set_pane_ParamLimits

0xca92,	// (0x00070d90) cset_list_set_pane

0xcaa2,	// (0x00070da0) aid_position_infowindow_above

0xcaaa,	// (0x00070da8) aid_position_infowindow_below

0xcab2,	// (0x00070db0) cset_list_set_pane_g1_ParamLimits

0xcab2,	// (0x00070db0) cset_list_set_pane_g1

0x683a,	// (0x0006ab38) cset_list_set_pane_g3_ParamLimits

0x683a,	// (0x0006ab38) cset_list_set_pane_g3

0x0001,

0xf9b6,	// (0x00073cb4) cset_list_set_pane_g_ParamLimits

0xf9b6,	// (0x00073cb4) cset_list_set_pane_g

0x6849,	// (0x0006ab47) cset_list_set_pane_t1_ParamLimits

0x6849,	// (0x0006ab47) cset_list_set_pane_t1

0x223d,	// (0x0006653b) list_highlight_pane_cp021_ParamLimits

0x223d,	// (0x0006653b) list_highlight_pane_cp021

0x15c5,	// (0x000658c3) cset_slider_pane_g1

0x15d7,	// (0x000658d5) cset_slider_pane_g2

0x15ce,	// (0x000658cc) cset_slider_pane_g3

0x0002,

0xf9bb,	// (0x00073cb9) cset_slider_pane_g

0xcabe,	// (0x00070dbc) aid_area_touch_cam4_zoom

0xcac6,	// (0x00070dc4) cam4_zoom_cont_pane

0xcace,	// (0x00070dcc) cam4_zoom_pane_g1

0xcad6,	// (0x00070dd4) cam4_zoom_pane_g2

0xcade,	// (0x00070ddc) cam4_zoom_pane_g3

0x0002,

0xf9c2,	// (0x00073cc0) cam4_zoom_pane_g

0xee42,	// (0x00073140) cam4_zoom_cont_pane_g1

0xee4b,	// (0x00073149) cam4_zoom_cont_pane_g2

0xee54,	// (0x00073152) cam4_zoom_cont_pane_g3

0x0002,

0xf9c9,	// (0x00073cc7) cam4_zoom_cont_pane_g

0xc087,	// (0x00070385) call4_image_pane_ParamLimits

0xc087,	// (0x00070385) call4_image_pane

0x559b,	// (0x00069899) call4_windows_conf_pane_ParamLimits

0x55ae,	// (0x000698ac) popup_call4_audio_in_window_ParamLimits

0x55ae,	// (0x000698ac) popup_call4_audio_in_window

0x7673,	// (0x0006b971) bg_popup_call2_act_pane_cp02

0x55da,	// (0x000698d8) call4_list_conf_pane

0x4ca0,	// (0x00068f9e) call4_image_pane_g1

0x4ca0,	// (0x00068f9e) call4_image_pane_g2

0x0001,

0xf6d4,	// (0x000739d2) call4_image_pane_g

0xee5d,	// (0x0007315b) list_single_graphic_popup_conf4_pane_ParamLimits

0xee5d,	// (0x0007315b) list_single_graphic_popup_conf4_pane

0x7673,	// (0x0006b971) list_highlight_pane_cp022

0xee70,	// (0x0007316e) list_single_graphic_popup_conf4_pane_g1

0x11e8,	// (0x000654e6) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d0,	// (0x00073cce) list_single_graphic_popup_conf4_pane_g

0xee78,	// (0x00073176) list_single_graphic_popup_conf4_pane_t1

0x87da,	// (0x0006cad8) popup_vtel_slider_window_ParamLimits

0x87da,	// (0x0006cad8) popup_vtel_slider_window

0x5565,	// (0x00069863) dialer2_ne_pane_t2_ParamLimits

0x5565,	// (0x00069863) dialer2_ne_pane_t2

0x0001,

0xf8b1,	// (0x00073baf) dialer2_ne_pane_t_ParamLimits

0xf8b1,	// (0x00073baf) dialer2_ne_pane_t

0x223d,	// (0x0006653b) bg_popup_sub_pane_cp010_ParamLimits

0x223d,	// (0x0006653b) bg_popup_sub_pane_cp010

0xcae6,	// (0x00070de4) popup_vtel_slider_window_g1_ParamLimits

0xcae6,	// (0x00070de4) popup_vtel_slider_window_g1

0xcaf2,	// (0x00070df0) popup_vtel_slider_window_g2_ParamLimits

0xcaf2,	// (0x00070df0) popup_vtel_slider_window_g2

0x0003,

0xf9d5,	// (0x00073cd3) popup_vtel_slider_window_g_ParamLimits

0xf9d5,	// (0x00073cd3) popup_vtel_slider_window_g

0xcb38,	// (0x00070e36) vtel_slider_pane_ParamLimits

0xcb38,	// (0x00070e36) vtel_slider_pane

0xcb47,	// (0x00070e45) vtel_slider_pane_g1_ParamLimits

0xcb47,	// (0x00070e45) vtel_slider_pane_g1

0xcb54,	// (0x00070e52) vtel_slider_pane_g2_ParamLimits

0xcb54,	// (0x00070e52) vtel_slider_pane_g2

0xcb61,	// (0x00070e5f) vtel_slider_pane_g3_ParamLimits

0xcb61,	// (0x00070e5f) vtel_slider_pane_g3

0xcb47,	// (0x00070e45) vtel_slider_pane_g4_ParamLimits

0xcb47,	// (0x00070e45) vtel_slider_pane_g4

0xcb6e,	// (0x00070e6c) vtel_slider_pane_g5_ParamLimits

0xcb6e,	// (0x00070e6c) vtel_slider_pane_g5

0x0004,

0xf9de,	// (0x00073cdc) vtel_slider_pane_g_ParamLimits

0xf9de,	// (0x00073cdc) vtel_slider_pane_g

0x223d,	// (0x0006653b) main_gallery2_pane

0xc3d7,	// (0x000706d5) aid_size_row_itut2_dropdow_list_ParamLimits

0xc3d7,	// (0x000706d5) aid_size_row_itut2_dropdow_list

0xc419,	// (0x00070717) grid_vitu2_function_top_pane_ParamLimits

0xc419,	// (0x00070717) grid_vitu2_function_top_pane

0xc455,	// (0x00070753) popup_vitu2_dropdown_list_window_ParamLimits

0xc455,	// (0x00070753) popup_vitu2_dropdown_list_window

0xc46d,	// (0x0007076b) popup_vitu2_match_list_window

0xcb7b,	// (0x00070e79) cell_vitu2_function_top_pane_ParamLimits

0xcb7b,	// (0x00070e79) cell_vitu2_function_top_pane

0xcb93,	// (0x00070e91) cell_vitu2_function_top_pane_cp01_ParamLimits

0xcb93,	// (0x00070e91) cell_vitu2_function_top_pane_cp01

0xcbaf,	// (0x00070ead) cell_vitu2_function_top_wide_pane_ParamLimits

0xcbaf,	// (0x00070ead) cell_vitu2_function_top_wide_pane

0x223d,	// (0x0006653b) bg_button_pane_cp012

0xcbcb,	// (0x00070ec9) cell_vitu2_function_top_pane_g1

0xcbdf,	// (0x00070edd) bg_button_pane_cp013_ParamLimits

0xcbdf,	// (0x00070edd) bg_button_pane_cp013

0xcbfb,	// (0x00070ef9) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xcbfb,	// (0x00070ef9) cell_vitu2_function_top_wide_pane_g1

0x3c2b,	// (0x00067f29) bg_popup_sub_pane_cp20

0xcc13,	// (0x00070f11) list_vitu2_match_list_pane

0x5667,	// (0x00069965) bg_popup_sub_pane_cp20_g1

0x566f,	// (0x0006996d) bg_popup_sub_pane_cp20_g2

0x0c5f,	// (0x00064f5d) bg_popup_sub_pane_cp20_g3

0x5677,	// (0x00069975) bg_popup_sub_pane_cp20_g4

0x0c3f,	// (0x00064f3d) bg_popup_sub_pane_cp20_g5

0xee8e,	// (0x0007318c) bg_popup_sub_pane_cp20_g6

0x5687,	// (0x00069985) bg_popup_sub_pane_cp20_g7

0x568f,	// (0x0006998d) bg_popup_sub_pane_cp20_g8

0x5697,	// (0x00069995) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9e9,	// (0x00073ce7) bg_popup_sub_pane_cp20_g

0xcc2b,	// (0x00070f29) list_vitu2_match_list_item_pane_ParamLimits

0xcc2b,	// (0x00070f29) list_vitu2_match_list_item_pane

0xcc3d,	// (0x00070f3b) list_vitu2_match_list_item_pane_t1

0x7673,	// (0x0006b971) bg_popup_sub_pane_cp21

0x10b7,	// (0x000653b5) grid_vitu2_dropdown_list_pane

0xcc57,	// (0x00070f55) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xcc57,	// (0x00070f55) cell_vitu2_dropdown_list_char_pane

0xcc78,	// (0x00070f76) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xcc78,	// (0x00070f76) cell_vitu2_dropdown_list_ctrl_pane

0xee96,	// (0x00073194) cell_vitu2_dropdown_list_char_pane_g1

0xee9f,	// (0x0007319d) cell_vitu2_dropdown_list_char_pane_g2

0xeea8,	// (0x000731a6) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa06,	// (0x00073d04) cell_vitu2_dropdown_list_char_pane_g

0xcca4,	// (0x00070fa2) cell_vitu2_dropdown_list_char_pane_t1

0xccb2,	// (0x00070fb0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xccb2,	// (0x00070fb0) cell_vitu2_dropdown_list_ctrl_pane_g1

0xccc2,	// (0x00070fc0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xccc2,	// (0x00070fc0) cell_vitu2_dropdown_list_ctrl_pane_g2

0xccd3,	// (0x00070fd1) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xccd3,	// (0x00070fd1) cell_vitu2_dropdown_list_ctrl_pane_g3

0xcce3,	// (0x00070fe1) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xcce3,	// (0x00070fe1) cell_vitu2_dropdown_list_ctrl_pane_g4

0x4ecf,	// (0x000691cd) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x4ecf,	// (0x000691cd) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa0d,	// (0x00073d0b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa0d,	// (0x00073d0b) cell_vitu2_dropdown_list_ctrl_pane_g

0xccfc,	// (0x00070ffa) aid_size_cell_gallery2_ParamLimits

0xccfc,	// (0x00070ffa) aid_size_cell_gallery2

0xcd16,	// (0x00071014) grid_gallery2_pane_ParamLimits

0xcd16,	// (0x00071014) grid_gallery2_pane

0xb88b,	// (0x0006fb89) scroll_pane_cp029_ParamLimits

0xb88b,	// (0x0006fb89) scroll_pane_cp029

0xcd27,	// (0x00071025) cell_gallery2_pane_ParamLimits

0xcd27,	// (0x00071025) cell_gallery2_pane

0xeeb1,	// (0x000731af) cell_gallery2_pane_g2

0xcd74,	// (0x00071072) cell_gallery2_pane_g3

0xeeb9,	// (0x000731b7) cell_gallery2_pane_g4

0xeec1,	// (0x000731bf) cell_gallery2_pane_g5

0x09b7,	// (0x00064cb5) grid_highlight_pane_cp10

0xc46d,	// (0x0007076b) popup_vitu2_match_list_window_ParamLimits

0xc47d,	// (0x0007077b) popup_vitu2_query_window_ParamLimits

0xc47d,	// (0x0007077b) popup_vitu2_query_window

0x7673,	// (0x0006b971) bg_vitu2_candi_button_pane

0xee96,	// (0x00073194) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xee9f,	// (0x0007319d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xeea8,	// (0x000731a6) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x68a7,	// (0x0006aba5) bg_button_pane_cp015

0xcd7c,	// (0x0007107a) bg_button_pane_cp016

0xcd8f,	// (0x0007108d) bg_button_pane_cp017

0x488e,	// (0x00068b8c) bg_popup_sub_pane_cp22

0xeec9,	// (0x000731c7) popup_vitu2_query_window_g1

0x68d6,	// (0x0006abd4) popup_vitu2_query_window_g2

0x0002,

0xfa18,	// (0x00073d16) popup_vitu2_query_window_g

0x68f1,	// (0x0006abef) popup_vitu2_query_window_t1_ParamLimits

0x68f1,	// (0x0006abef) popup_vitu2_query_window_t1

0x6924,	// (0x0006ac22) popup_vitu2_query_window_t2_ParamLimits

0x6924,	// (0x0006ac22) popup_vitu2_query_window_t2

0x6936,	// (0x0006ac34) popup_vitu2_query_window_t3_ParamLimits

0x6936,	// (0x0006ac34) popup_vitu2_query_window_t3

0xcdb3,	// (0x000710b1) popup_vitu2_query_window_t4_ParamLimits

0xcdb3,	// (0x000710b1) popup_vitu2_query_window_t4

0xcdd0,	// (0x000710ce) popup_vitu2_query_window_t5_ParamLimits

0xcdd0,	// (0x000710ce) popup_vitu2_query_window_t5

0x0006,

0xfa1f,	// (0x00073d1d) popup_vitu2_query_window_t_ParamLimits

0xfa1f,	// (0x00073d1d) popup_vitu2_query_window_t

0xed51,	// (0x0007304f) main_cset_text_pane

0xc7fa,	// (0x00070af8) aid_area_touch_slider_ParamLimits

0xc816,	// (0x00070b14) cset_slider_pane_ParamLimits

0xc840,	// (0x00070b3e) main_cset_slider_pane_g1_ParamLimits

0xc855,	// (0x00070b53) main_cset_slider_pane_g2_ParamLimits

0xed72,	// (0x00073070) main_cset_slider_pane_g3_ParamLimits

0xed72,	// (0x00073070) main_cset_slider_pane_g3

0xc86a,	// (0x00070b68) main_cset_slider_pane_g4_ParamLimits

0xc86a,	// (0x00070b68) main_cset_slider_pane_g4

0xc879,	// (0x00070b77) main_cset_slider_pane_g5_ParamLimits

0xc879,	// (0x00070b77) main_cset_slider_pane_g5

0xc885,	// (0x00070b83) main_cset_slider_pane_g6_ParamLimits

0xc885,	// (0x00070b83) main_cset_slider_pane_g6

0xf972,	// (0x00073c70) main_cset_slider_pane_g_ParamLimits

0xeda2,	// (0x000730a0) main_cset_slider_pane_t1_ParamLimits

0xc911,	// (0x00070c0f) main_cset_slider_pane_t2_ParamLimits

0xc92b,	// (0x00070c29) main_cset_slider_pane_t3_ParamLimits

0xc945,	// (0x00070c43) main_cset_slider_pane_t4_ParamLimits

0xc95f,	// (0x00070c5d) main_cset_slider_pane_t5_ParamLimits

0xc979,	// (0x00070c77) main_cset_slider_pane_t6_ParamLimits

0xc98e,	// (0x00070c8c) main_cset_slider_pane_t7_ParamLimits

0xc9b8,	// (0x00070cb6) main_cset_slider_pane_t8_ParamLimits

0xc9b8,	// (0x00070cb6) main_cset_slider_pane_t8

0xc9e0,	// (0x00070cde) main_cset_slider_pane_t9_ParamLimits

0xc9e0,	// (0x00070cde) main_cset_slider_pane_t9

0xca08,	// (0x00070d06) main_cset_slider_pane_t10_ParamLimits

0xca08,	// (0x00070d06) main_cset_slider_pane_t10

0xca30,	// (0x00070d2e) main_cset_slider_pane_t11_ParamLimits

0xca30,	// (0x00070d2e) main_cset_slider_pane_t11

0xca58,	// (0x00070d56) main_cset_slider_pane_t12_ParamLimits

0xca58,	// (0x00070d56) main_cset_slider_pane_t12

0xca75,	// (0x00070d73) main_cset_slider_pane_t13_ParamLimits

0xca75,	// (0x00070d73) main_cset_slider_pane_t13

0xf997,	// (0x00073c95) main_cset_slider_pane_t_ParamLimits

0x7673,	// (0x0006b971) bg_popup_sub_pane_cp011

0xeed5,	// (0x000731d3) main_cset_text_pane_g1

0xeedd,	// (0x000731db) main_cset_text_pane_t1

0xeeeb,	// (0x000731e9) main_cset_text_pane_t2

0xeef9,	// (0x000731f7) main_cset_text_pane_t3

0xef07,	// (0x00073205) main_cset_text_pane_t4

0xef15,	// (0x00073213) main_cset_text_pane_t5

0xef23,	// (0x00073221) main_cset_text_pane_t6

0xef31,	// (0x0007322f) main_cset_text_pane_t7

0x0006,

0xfa2e,	// (0x00073d2c) main_cset_text_pane_t

0x7673,	// (0x0006b971) main_cam4_burst_pane

0x7673,	// (0x0006b971) main_cam5_pane

0xc755,	// (0x00070a53) bg_button_pane_cp019

0xc75e,	// (0x00070a5c) bg_button_pane_cp020

0xed7e,	// (0x0007307c) main_cset_slider_pane_g7_ParamLimits

0xed7e,	// (0x0007307c) main_cset_slider_pane_g7

0xed8a,	// (0x00073088) main_cset_slider_pane_g8_ParamLimits

0xed8a,	// (0x00073088) main_cset_slider_pane_g8

0xc899,	// (0x00070b97) main_cset_slider_pane_g9_ParamLimits

0xc899,	// (0x00070b97) main_cset_slider_pane_g9

0xc8a5,	// (0x00070ba3) main_cset_slider_pane_g10_ParamLimits

0xc8a5,	// (0x00070ba3) main_cset_slider_pane_g10

0xc8b1,	// (0x00070baf) main_cset_slider_pane_g11_ParamLimits

0xc8b1,	// (0x00070baf) main_cset_slider_pane_g11

0xc8bd,	// (0x00070bbb) main_cset_slider_pane_g12_ParamLimits

0xc8bd,	// (0x00070bbb) main_cset_slider_pane_g12

0xc8c9,	// (0x00070bc7) main_cset_slider_pane_g13_ParamLimits

0xc8c9,	// (0x00070bc7) main_cset_slider_pane_g13

0xc8d5,	// (0x00070bd3) main_cset_slider_pane_g14_ParamLimits

0xc8d5,	// (0x00070bd3) main_cset_slider_pane_g14

0xc8e1,	// (0x00070bdf) main_cset_slider_pane_g15_ParamLimits

0xc8e1,	// (0x00070bdf) main_cset_slider_pane_g15

0xedd0,	// (0x000730ce) main_cset_slider_pane_t14_ParamLimits

0xedd0,	// (0x000730ce) main_cset_slider_pane_t14

0xee09,	// (0x00073107) main_cset_slider_pane_t15_ParamLimits

0xee09,	// (0x00073107) main_cset_slider_pane_t15

0xcded,	// (0x000710eb) aid_cam4_burst_size_cell_ParamLimits

0xcded,	// (0x000710eb) aid_cam4_burst_size_cell

0xce09,	// (0x00071107) grid_cam4_burst_pane_ParamLimits

0xce09,	// (0x00071107) grid_cam4_burst_pane

0xce2b,	// (0x00071129) linegrid_cam4_burst_pane_ParamLimits

0xce2b,	// (0x00071129) linegrid_cam4_burst_pane

0xce49,	// (0x00071147) scroll_pane_cp30_ParamLimits

0xce49,	// (0x00071147) scroll_pane_cp30

0xce55,	// (0x00071153) cell_cam4_burst_pane_ParamLimits

0xce55,	// (0x00071153) cell_cam4_burst_pane

0xef3f,	// (0x0007323d) linegrid_cam4_burst_pane_g1_ParamLimits

0xef3f,	// (0x0007323d) linegrid_cam4_burst_pane_g1

0xce8d,	// (0x0007118b) linegrid_cam4_burst_pane_g2_ParamLimits

0xce8d,	// (0x0007118b) linegrid_cam4_burst_pane_g2

0xef4c,	// (0x0007324a) linegrid_cam4_burst_pane_g3_ParamLimits

0xef4c,	// (0x0007324a) linegrid_cam4_burst_pane_g3

0x0002,

0xfa3d,	// (0x00073d3b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa3d,	// (0x00073d3b) linegrid_cam4_burst_pane_g

0xce9e,	// (0x0007119c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xce9e,	// (0x0007119c) linegrid_cam4_burst_pane_g3_copy1

0xef59,	// (0x00073257) linegrid_cam4_burst_pane_g4_ParamLimits

0xef59,	// (0x00073257) linegrid_cam4_burst_pane_g4

0xceb8,	// (0x000711b6) linegrid_cam4_burst_pane_g5_ParamLimits

0xceb8,	// (0x000711b6) linegrid_cam4_burst_pane_g5

0xcec9,	// (0x000711c7) linegrid_cam4_burst_pane_g6_ParamLimits

0xcec9,	// (0x000711c7) linegrid_cam4_burst_pane_g6

0xef66,	// (0x00073264) linegrid_cam4_burst_pane_g7_ParamLimits

0xef66,	// (0x00073264) linegrid_cam4_burst_pane_g7

0xceda,	// (0x000711d8) cell_cam4_burst_pane_g1

0xef7f,	// (0x0007327d) main_cam5_pane_t1_ParamLimits

0xef7f,	// (0x0007327d) main_cam5_pane_t1

0xef91,	// (0x0007328f) main_cam5_pane_t2_ParamLimits

0xef91,	// (0x0007328f) main_cam5_pane_t2

0xefa3,	// (0x000732a1) main_cam5_pane_t3_ParamLimits

0xefa3,	// (0x000732a1) main_cam5_pane_t3

0xefb5,	// (0x000732b3) main_cam5_pane_t4_ParamLimits

0xefb5,	// (0x000732b3) main_cam5_pane_t4

0xefcb,	// (0x000732c9) main_cam5_pane_t5_ParamLimits

0xefcb,	// (0x000732c9) main_cam5_pane_t5

0xefdd,	// (0x000732db) main_cam5_pane_t6_ParamLimits

0xefdd,	// (0x000732db) main_cam5_pane_t6

0xefef,	// (0x000732ed) main_cam5_pane_t7_ParamLimits

0xefef,	// (0x000732ed) main_cam5_pane_t7

0xf001,	// (0x000732ff) main_cam5_pane_t8_ParamLimits

0xf001,	// (0x000732ff) main_cam5_pane_t8

0xf01d,	// (0x0007331b) main_cam5_pane_t9_ParamLimits

0xf01d,	// (0x0007331b) main_cam5_pane_t9

0xf02f,	// (0x0007332d) main_cam5_pane_t10_ParamLimits

0xf02f,	// (0x0007332d) main_cam5_pane_t10

0xf041,	// (0x0007333f) main_cam5_pane_t11_ParamLimits

0xf041,	// (0x0007333f) main_cam5_pane_t11

0xf053,	// (0x00073351) main_cam5_pane_t12_ParamLimits

0xf053,	// (0x00073351) main_cam5_pane_t12

0xf068,	// (0x00073366) main_cam5_pane_t13_ParamLimits

0xf068,	// (0x00073366) main_cam5_pane_t13

0x000c,

0xfa49,	// (0x00073d47) main_cam5_pane_t_ParamLimits

0xfa49,	// (0x00073d47) main_cam5_pane_t

0x7880,	// (0x0006bb7e) popup_scut_keymap_window_ParamLimits

0x7880,	// (0x0006bb7e) popup_scut_keymap_window

0xceed,	// (0x000711eb) aid_size_cell_brow_shortcut

0x09b7,	// (0x00064cb5) bg_popup_window_pane_cp010

0xcef9,	// (0x000711f7) grid_scut_pane

0xcf03,	// (0x00071201) cell_scut_pane_ParamLimits

0xcf03,	// (0x00071201) cell_scut_pane

0xcf18,	// (0x00071216) cell_scut_pane_g1

0xf085,	// (0x00073383) cell_scut_pane_t1

0xf094,	// (0x00073392) cell_scut_pane_t2

0xcf21,	// (0x0007121f) cell_scut_pane_t3

0x0002,

0xfa64,	// (0x00073d62) cell_scut_pane_t

0xb0db,	// (0x0006f3d9) main_mup3_pane_g8_ParamLimits

0xb0db,	// (0x0006f3d9) main_mup3_pane_g8

0xc3e3,	// (0x000706e1) area_vitu2_query_pane_ParamLimits

0xc3e3,	// (0x000706e1) area_vitu2_query_pane

0x68b7,	// (0x0006abb5) input_focus_pane_cp08

0xf0a3,	// (0x000733a1) area_vitu2_query_pane_g1

0x69b4,	// (0x0006acb2) area_vitu2_query_pane_g2

0x0001,

0xfa6b,	// (0x00073d69) area_vitu2_query_pane_g

0xcf2f,	// (0x0007122d) area_vitu2_query_pane_t1_ParamLimits

0xcf2f,	// (0x0007122d) area_vitu2_query_pane_t1

0xcf41,	// (0x0007123f) area_vitu2_query_pane_t2_ParamLimits

0xcf41,	// (0x0007123f) area_vitu2_query_pane_t2

0x69c3,	// (0x0006acc1) area_vitu2_query_pane_t3_ParamLimits

0x69c3,	// (0x0006acc1) area_vitu2_query_pane_t3

0x69eb,	// (0x0006ace9) area_vitu2_query_pane_t4_ParamLimits

0x69eb,	// (0x0006ace9) area_vitu2_query_pane_t4

0x6a13,	// (0x0006ad11) area_vitu2_query_pane_t5_ParamLimits

0x6a13,	// (0x0006ad11) area_vitu2_query_pane_t5

0x6a3b,	// (0x0006ad39) area_vitu2_query_pane_t6_ParamLimits

0x6a3b,	// (0x0006ad39) area_vitu2_query_pane_t6

0x0006,

0xfa70,	// (0x00073d6e) area_vitu2_query_pane_t_ParamLimits

0xfa70,	// (0x00073d6e) area_vitu2_query_pane_t

0xcf53,	// (0x00071251) bg_button_pane_cp018

0xcf60,	// (0x0007125e) bg_button_pane_cp021

0x6a87,	// (0x0006ad85) bg_button_pane_cp022

0x6a96,	// (0x0006ad94) input_focus_pane_cp09

0x98f7,	// (0x0006dbf5) aid_size_touch_mv_arrow_left

0x1326,	// (0x00065624) aid_size_touch_mv_arrow_right

0xc8f9,	// (0x00070bf7) main_cset_slider_pane_g16_ParamLimits

0xc8f9,	// (0x00070bf7) main_cset_slider_pane_g16

0xc905,	// (0x00070c03) main_cset_slider_pane_g17_ParamLimits

0xc905,	// (0x00070c03) main_cset_slider_pane_g17

0xceda,	// (0x000711d8) cell_cam4_burst_pane_g1_ParamLimits

0x7673,	// (0x0006b971) compa_mode_pane

0xcafe,	// (0x00070dfc) popup_vtel_slider_window_g3_ParamLimits

0xcafe,	// (0x00070dfc) popup_vtel_slider_window_g3

0xcb12,	// (0x00070e10) popup_vtel_slider_window_g4_ParamLimits

0xcb12,	// (0x00070e10) popup_vtel_slider_window_g4

0xcb26,	// (0x00070e24) popup_vtel_slider_window_t1_ParamLimits

0xcb26,	// (0x00070e24) popup_vtel_slider_window_t1

0x7673,	// (0x0006b971) main_cl_pane

0xa4b2,	// (0x0006e7b0) popup_imed_adjust2_window_ParamLimits

0x488e,	// (0x00068b8c) bg_tb_trans_pane_cp05_ParamLimits

0x517c,	// (0x0006947a) popup_imed_adjust2_window_g1_ParamLimits

0x518b,	// (0x00069489) popup_imed_adjust2_window_g2_ParamLimits

0x518b,	// (0x00069489) popup_imed_adjust2_window_g2

0x5197,	// (0x00069495) popup_imed_adjust2_window_g3_ParamLimits

0x5197,	// (0x00069495) popup_imed_adjust2_window_g3

0x0002,

0xf7d7,	// (0x00073ad5) popup_imed_adjust2_window_g_ParamLimits

0xf7d7,	// (0x00073ad5) popup_imed_adjust2_window_g

0x51a3,	// (0x000694a1) popup_imed_adjust2_window_t1_ParamLimits

0x51bb,	// (0x000694b9) slider_imed_adjust_pane_ParamLimits

0x51cf,	// (0x000694cd) slider_imed_adjust_pane_g1_ParamLimits

0x51df,	// (0x000694dd) slider_imed_adjust_pane_g2_ParamLimits

0x51ef,	// (0x000694ed) slider_imed_adjust_pane_g3_ParamLimits

0x5200,	// (0x000694fe) slider_imed_adjust_pane_g4_ParamLimits

0xf7de,	// (0x00073adc) slider_imed_adjust_pane_g_ParamLimits

0xc18b,	// (0x00070489) aid_touch_area_cam4_ParamLimits

0xc18b,	// (0x00070489) aid_touch_area_cam4

0xc199,	// (0x00070497) battery_pane_cp01

0xc218,	// (0x00070516) main_camera4_pane_g6_ParamLimits

0xc218,	// (0x00070516) main_camera4_pane_g6

0xc236,	// (0x00070534) main_camera4_pane_t2_ParamLimits

0xc236,	// (0x00070534) main_camera4_pane_t2

0x0001,

0xf8e5,	// (0x00073be3) main_camera4_pane_t_ParamLimits

0xf8e5,	// (0x00073be3) main_camera4_pane_t

0xc2be,	// (0x000705bc) aid_touch_area_vid4_ParamLimits

0xc2be,	// (0x000705bc) aid_touch_area_vid4

0xc218,	// (0x00070516) main_video4_pane_g5_ParamLimits

0xc218,	// (0x00070516) main_video4_pane_g5

0xc2ee,	// (0x000705ec) vid4_progress_pane_ParamLimits

0xc2ee,	// (0x000705ec) vid4_progress_pane

0xed96,	// (0x00073094) main_cset_slider_pane_g18_ParamLimits

0xed96,	// (0x00073094) main_cset_slider_pane_g18

0xef73,	// (0x00073271) cell_cam4_burst_pane_g2_ParamLimits

0xef73,	// (0x00073271) cell_cam4_burst_pane_g2

0x0001,

0xfa44,	// (0x00073d42) cell_cam4_burst_pane_g_ParamLimits

0xfa44,	// (0x00073d42) cell_cam4_burst_pane_g

0xcf6c,	// (0x0007126a) bg_cl_pane_ParamLimits

0xcf6c,	// (0x0007126a) bg_cl_pane

0xcf78,	// (0x00071276) cl_header_pane_ParamLimits

0xcf78,	// (0x00071276) cl_header_pane

0xcf84,	// (0x00071282) cl_listscroll_pane_ParamLimits

0xcf84,	// (0x00071282) cl_listscroll_pane

0x2399,	// (0x00066697) bg_cl_pane_g1

0x23a1,	// (0x0006669f) bg_cl_pane_g2

0x23a9,	// (0x000666a7) bg_cl_pane_g3

0x23b1,	// (0x000666af) bg_cl_pane_g4

0x23b9,	// (0x000666b7) bg_cl_pane_g5

0x23c1,	// (0x000666bf) bg_cl_pane_g6

0x23c9,	// (0x000666c7) bg_cl_pane_g7

0x23d1,	// (0x000666cf) bg_cl_pane_g8

0x23d9,	// (0x000666d7) bg_cl_pane_g9

0x0008,

0xfa7f,	// (0x00073d7d) bg_cl_pane_g

0xcf90,	// (0x0007128e) aid_height_cl_leading_ParamLimits

0xcf90,	// (0x0007128e) aid_height_cl_leading

0xcf9c,	// (0x0007129a) aid_height_cl_text_ParamLimits

0xcf9c,	// (0x0007129a) aid_height_cl_text

0x3c2b,	// (0x00067f29) bg_cl_header_pane_ParamLimits

0x3c2b,	// (0x00067f29) bg_cl_header_pane

0xcfb4,	// (0x000712b2) cl_header_pane_g1_ParamLimits

0xcfb4,	// (0x000712b2) cl_header_pane_g1

0xcfc1,	// (0x000712bf) cl_header_pane_t1_ParamLimits

0xcfc1,	// (0x000712bf) cl_header_pane_t1

0x23e1,	// (0x000666df) cl_list_pane

0x23ea,	// (0x000666e8) hc_scroll_pane_cp01

0x0c3f,	// (0x00064f3d) bg_cl_header_pane_g1

0x5667,	// (0x00069965) bg_cl_header_pane_g2

0x0c5f,	// (0x00064f5d) bg_cl_header_pane_g3

0x5677,	// (0x00069975) bg_cl_header_pane_g4

0x566f,	// (0x0006996d) bg_cl_header_pane_g5

0xee8e,	// (0x0007318c) bg_cl_header_pane_g6

0x568f,	// (0x0006998d) bg_cl_header_pane_g7

0x5697,	// (0x00069995) bg_cl_header_pane_g8

0x5687,	// (0x00069985) bg_cl_header_pane_g9

0x0008,

0xfa92,	// (0x00073d90) bg_cl_header_pane_g

0xcfd3,	// (0x000712d1) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xcfd3,	// (0x000712d1) hc_cl_list_double_graphic_heading_pane

0xcfe3,	// (0x000712e1) hc_cl_list_single_graphic_pane_ParamLimits

0xcfe3,	// (0x000712e1) hc_cl_list_single_graphic_pane

0xcff5,	// (0x000712f3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xcff5,	// (0x000712f3) hc_cl_list_single_graphic_pane_g1

0xd001,	// (0x000712ff) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd001,	// (0x000712ff) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa5,	// (0x00073da3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa5,	// (0x00073da3) hc_cl_list_single_graphic_pane_g

0xd015,	// (0x00071313) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd015,	// (0x00071313) hc_cl_list_single_graphic_pane_t1

0xcff5,	// (0x000712f3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xcff5,	// (0x000712f3) hc_cl_list_double_graphic_heading_pane_g1

0xd02a,	// (0x00071328) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd02a,	// (0x00071328) hc_cl_list_double_graphic_heading_pane_g2

0xd03e,	// (0x0007133c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd03e,	// (0x0007133c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaaa,	// (0x00073da8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaaa,	// (0x00073da8) hc_cl_list_double_graphic_heading_pane_g

0xd052,	// (0x00071350) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd052,	// (0x00071350) hc_cl_list_double_graphic_heading_pane_t1

0xd067,	// (0x00071365) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd067,	// (0x00071365) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab1,	// (0x00073daf) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab1,	// (0x00073daf) hc_cl_list_double_graphic_heading_pane_t

0xd07c,	// (0x0007137a) vid4_progress_pane_g1

0xd08b,	// (0x00071389) vid4_progress_pane_g2

0xd09a,	// (0x00071398) vid4_progress_pane_g3

0xd0a9,	// (0x000713a7) vid4_progress_pane_g4

0x0004,

0xfab6,	// (0x00073db4) vid4_progress_pane_g

0xd0b5,	// (0x000713b3) vid4_progress_pane_t1

0xd0cb,	// (0x000713c9) vid4_progress_pane_t2

0x0002,

0xfac1,	// (0x00073dbf) vid4_progress_pane_t

0xd0f5,	// (0x000713f3) wait_bar_pane_cp07

0x4a9b,	// (0x00068d99) blid_firmament_pane_ParamLimits

0x4adc,	// (0x00068dda) popup_blid_sat_info2_window_g1

0x4b00,	// (0x00068dfe) popup_blid_sat_info2_window_t3

0x4b0e,	// (0x00068e0c) popup_blid_sat_info2_window_t4

0x4b1c,	// (0x00068e1a) popup_blid_sat_info2_window_t5

0x4b2a,	// (0x00068e28) popup_blid_sat_info2_window_t6

0x4b3a,	// (0x00068e38) popup_blid_sat_info2_window_t7

0x4b48,	// (0x00068e46) popup_blid_sat_info2_window_t8

0x4b56,	// (0x00068e54) popup_blid_sat_info2_window_t9

0x4b64,	// (0x00068e62) popup_blid_sat_info2_window_t10

0x4c20,	// (0x00068f1e) aid_firma_cardinal_ParamLimits

0x4c34,	// (0x00068f32) blid_firmament_pane_t1_ParamLimits

0x4c4b,	// (0x00068f49) blid_firmament_pane_t2_ParamLimits

0x4c62,	// (0x00068f60) blid_firmament_pane_t3_ParamLimits

0x4c79,	// (0x00068f77) blid_firmament_pane_t4_ParamLimits

0xf6cb,	// (0x000739c9) blid_firmament_pane_t_ParamLimits

0x4c90,	// (0x00068f8e) blid_sat_info_pane_ParamLimits

0x223d,	// (0x0006653b) main_cam_set_pane_ParamLimits

0xb82b,	// (0x0006fb29) aid_size_cell_colour_35_ParamLimits

0xb842,	// (0x0006fb40) aid_size_cell_colour_112_ParamLimits

0xb859,	// (0x0006fb57) aid_size_cell_effect_ParamLimits

0x223d,	// (0x0006653b) bg_tb_trans_pane_cp02_ParamLimits

0x0f64,	// (0x00065262) heading_imed_pane_ParamLimits

0xb873,	// (0x0006fb71) listscroll_imed_pane_ParamLimits

0x1eee,	// (0x000661ec) popup_call2_audio_first_window_g5_ParamLimits

0x1eee,	// (0x000661ec) popup_call2_audio_first_window_g5

0xbf16,	// (0x00070214) aid_size_touch_image3_arrow_left_ParamLimits

0xbf16,	// (0x00070214) aid_size_touch_image3_arrow_left

0xbf2a,	// (0x00070228) aid_size_touch_image3_arrow_right_ParamLimits

0xbf2a,	// (0x00070228) aid_size_touch_image3_arrow_right

0xd0e0,	// (0x000713de) vid4_progress_pane_t3

0xbad7,	// (0x0006fdd5) main_hwr_training_symbol_option_pane_ParamLimits

0xbad7,	// (0x0006fdd5) main_hwr_training_symbol_option_pane

0x545b,	// (0x00069759) popup_hwr_training_preview_window_ParamLimits

0x545b,	// (0x00069759) popup_hwr_training_preview_window

0xbb32,	// (0x0006fe30) hwr_training_navi_pane_g5_ParamLimits

0xbb32,	// (0x0006fe30) hwr_training_navi_pane_g5

0x5655,	// (0x00069953) popup_char_count_window

0x3c2b,	// (0x00067f29) bg_popup_sub_pane_cp20_ParamLimits

0xcc13,	// (0x00070f11) list_vitu2_match_list_pane_ParamLimits

0xcc1f,	// (0x00070f1d) vitu2_page_scroll_pane_ParamLimits

0xcc1f,	// (0x00070f1d) vitu2_page_scroll_pane

0x2430,	// (0x0006672e) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2430,	// (0x0006672e) list_single_hwr_training_symbol_option_pane

0x2443,	// (0x00066741) list_single_hwr_training_symbol_option_pane_g1

0x244b,	// (0x00066749) list_single_hwr_training_symbol_option_pane_t1

0x2459,	// (0x00066757) bg_button_pane_cp023

0x2462,	// (0x00066760) bg_button_pane_cp024

0xd131,	// (0x0007142f) vitu2_page_scroll_pane_g1

0xd139,	// (0x00071437) vitu2_page_scroll_pane_g2

0x0001,

0xfac8,	// (0x00073dc6) vitu2_page_scroll_pane_g

0xd141,	// (0x0007143f) vitu2_page_scroll_pane_t1

0x4cc9,	// (0x00068fc7) popup_char_count_window_g1

0x2495,	// (0x00066793) popup_char_count_window_g2

0x249e,	// (0x0006679c) popup_char_count_window_g3

0x0002,

0xfacd,	// (0x00073dcb) popup_char_count_window_g

0x24a7,	// (0x000667a5) popup_char_count_window_t1

0x7673,	// (0x0006b971) main_vded2_pane

0x516a,	// (0x00069468) aid_size_cell_imed_line

0x5174,	// (0x00069472) grid_imed_line_width_pane

0xc339,	// (0x00070637) vid4_indicators_pane_g4

0x24b5,	// (0x000667b3) cell_imed_line_width_pane_ParamLimits

0x24b5,	// (0x000667b3) cell_imed_line_width_pane

0x24c7,	// (0x000667c5) cell_imed_line_width_pane_g1

0x4a75,	// (0x00068d73) cell_imed_line_width_pane_g2

0x0001,

0xfad4,	// (0x00073dd2) cell_imed_line_width_pane_g

0xd150,	// (0x0007144e) main_vded2_pane_g1_ParamLimits

0xd150,	// (0x0007144e) main_vded2_pane_g1

0xd15d,	// (0x0007145b) main_vded2_pane_g2_ParamLimits

0xd15d,	// (0x0007145b) main_vded2_pane_g2

0x0001,

0xfad9,	// (0x00073dd7) main_vded2_pane_g_ParamLimits

0xfad9,	// (0x00073dd7) main_vded2_pane_g

0xd169,	// (0x00071467) vded2_slider_pane_ParamLimits

0xd169,	// (0x00071467) vded2_slider_pane

0xd176,	// (0x00071474) aid_size_touch_vded2_end

0xd17e,	// (0x0007147c) aid_size_touch_vded2_playhead

0xd186,	// (0x00071484) aid_size_touch_vded2_start

0xd18e,	// (0x0007148c) vded2_slider_bg_pane

0xd197,	// (0x00071495) vded2_slider_pane_g1

0xd1a0,	// (0x0007149e) vded2_slider_pane_g2

0xd1a8,	// (0x000714a6) vded2_slider_pane_g3

0x0002,

0xfade,	// (0x00073ddc) vded2_slider_pane_g

0xd1b1,	// (0x000714af) vded2_slider_bg_pane_g1

0xd1ba,	// (0x000714b8) vded2_slider_bg_pane_g2

0xd1c3,	// (0x000714c1) vded2_slider_bg_pane_g3

0x0002,

0xfae5,	// (0x00073de3) vded2_slider_bg_pane_g

0x9e1c,	// (0x0006e11a) aid_postcard_touch_down_pane_ParamLimits

0x9e1c,	// (0x0006e11a) aid_postcard_touch_down_pane

0x9e28,	// (0x0006e126) aid_postcard_touch_up_pane_ParamLimits

0x9e28,	// (0x0006e126) aid_postcard_touch_up_pane

0x7673,	// (0x0006b971) main_blid2_pane

0xa44f,	// (0x0006e74d) popup_blid2_search_window

0x7673,	// (0x0006b971) blid2_gps_pane

0x7673,	// (0x0006b971) blid2_navig_pane

0x7673,	// (0x0006b971) blid2_search_pane

0x7673,	// (0x0006b971) blid2_tripm_pane

0xd1cc,	// (0x000714ca) blid2_search_pane_g1_ParamLimits

0xd1cc,	// (0x000714ca) blid2_search_pane_g1

0xd1d8,	// (0x000714d6) blid2_search_pane_t1_ParamLimits

0xd1d8,	// (0x000714d6) blid2_search_pane_t1

0xd1ea,	// (0x000714e8) aid_size_cell_blid2_gps_ParamLimits

0xd1ea,	// (0x000714e8) aid_size_cell_blid2_gps

0xd1fa,	// (0x000714f8) blid2_gps_pane_g1_ParamLimits

0xd1fa,	// (0x000714f8) blid2_gps_pane_g1

0xd206,	// (0x00071504) grid_blid2_satellite_pane_ParamLimits

0xd206,	// (0x00071504) grid_blid2_satellite_pane

0xd212,	// (0x00071510) blid2_navig_pane_g1_ParamLimits

0xd212,	// (0x00071510) blid2_navig_pane_g1

0xd21e,	// (0x0007151c) blid2_navig_pane_t1_ParamLimits

0xd21e,	// (0x0007151c) blid2_navig_pane_t1

0xd230,	// (0x0007152e) blid2_navig_pane_t2_ParamLimits

0xd230,	// (0x0007152e) blid2_navig_pane_t2

0x0001,

0xfaec,	// (0x00073dea) blid2_navig_pane_t_ParamLimits

0xfaec,	// (0x00073dea) blid2_navig_pane_t

0xd242,	// (0x00071540) blid2_navig_ring_pane_ParamLimits

0xd242,	// (0x00071540) blid2_navig_ring_pane

0xd24e,	// (0x0007154c) blid2_speed_pane_ParamLimits

0xd24e,	// (0x0007154c) blid2_speed_pane

0xd25a,	// (0x00071558) blid2_tripm_pane_g1_ParamLimits

0xd25a,	// (0x00071558) blid2_tripm_pane_g1

0xd266,	// (0x00071564) blid2_tripm_pane_g2_ParamLimits

0xd266,	// (0x00071564) blid2_tripm_pane_g2

0xd272,	// (0x00071570) blid2_tripm_pane_g3_ParamLimits

0xd272,	// (0x00071570) blid2_tripm_pane_g3

0xd27e,	// (0x0007157c) blid2_tripm_pane_g4_ParamLimits

0xd27e,	// (0x0007157c) blid2_tripm_pane_g4

0xd28a,	// (0x00071588) blid2_tripm_pane_g5_ParamLimits

0xd28a,	// (0x00071588) blid2_tripm_pane_g5

0x0005,

0xfaf1,	// (0x00073def) blid2_tripm_pane_g_ParamLimits

0xfaf1,	// (0x00073def) blid2_tripm_pane_g

0xd2a2,	// (0x000715a0) blid2_tripm_pane_t1_ParamLimits

0xd2a2,	// (0x000715a0) blid2_tripm_pane_t1

0xd2b4,	// (0x000715b2) blid2_tripm_pane_t2_ParamLimits

0xd2b4,	// (0x000715b2) blid2_tripm_pane_t2

0xd2c6,	// (0x000715c4) blid2_tripm_pane_t3_ParamLimits

0xd2c6,	// (0x000715c4) blid2_tripm_pane_t3

0x0003,

0xfafe,	// (0x00073dfc) blid2_tripm_pane_t_ParamLimits

0xfafe,	// (0x00073dfc) blid2_tripm_pane_t

0xd2f6,	// (0x000715f4) cell_blid2_satellite_pane_ParamLimits

0xd2f6,	// (0x000715f4) cell_blid2_satellite_pane

0xd30e,	// (0x0007160c) cell_blid2_satellite_pane_g1

0x24d0,	// (0x000667ce) cell_blid2_satellite_pane_t1

0x4ca0,	// (0x00068f9e) blid2_speed_pane_g1

0x24de,	// (0x000667dc) blid2_speed_pane_t1

0x24ec,	// (0x000667ea) blid2_speed_pane_t2

0x0001,

0xfb07,	// (0x00073e05) blid2_speed_pane_t

0x4ca0,	// (0x00068f9e) blid2_navig_ring_pane_g1

0xd317,	// (0x00071615) blid2_navig_ring_pane_g2

0xd31f,	// (0x0007161d) blid2_navig_ring_pane_g3

0xd327,	// (0x00071625) blid2_navig_ring_pane_g4

0xd32f,	// (0x0007162d) blid2_navig_ring_pane_g5

0x0004,

0xfb0c,	// (0x00073e0a) blid2_navig_ring_pane_g

0x7673,	// (0x0006b971) bg_popup_window_pane_cp011

0x24fa,	// (0x000667f8) popup_blid2_search_window_g1

0x2502,	// (0x00066800) popup_blid2_search_window_t1

0x2510,	// (0x0006680e) popup_blid2_search_window_t2

0x0001,

0xfb17,	// (0x00073e15) popup_blid2_search_window_t

0x0b4e,	// (0x00064e4c) main_browser_pane_g1

0x0748,	// (0x00064a46) main_browser_pane_ParamLimits

0x223d,	// (0x0006653b) bg_button_pane_cp011_ParamLimits

0xc55a,	// (0x00070858) cell_vitu2_function_pane_g1_ParamLimits

0x488e,	// (0x00068b8c) bg_popup_sub_pane_cp22_ParamLimits

0x68b7,	// (0x0006abb5) input_focus_pane_cp08_ParamLimits

0xcda2,	// (0x000710a0) popup_vitu2_query_button_pane_ParamLimits

0xcda2,	// (0x000710a0) popup_vitu2_query_button_pane

0x68ce,	// (0x0006abcc) popup_vitu2_query_input_button_pane

0xeec9,	// (0x000731c7) popup_vitu2_query_window_g1_ParamLimits

0x68d6,	// (0x0006abd4) popup_vitu2_query_window_g2_ParamLimits

0xfa18,	// (0x00073d16) popup_vitu2_query_window_g_ParamLimits

0x7673,	// (0x0006b971) bg_button_pane_cp026

0xd337,	// (0x00071635) popup_vitu2_query_input_button_pane_g1

0x7673,	// (0x0006b971) bg_button_pane_cp025

0x251e,	// (0x0006681c) popup_vitu2_query_button_pane_t1

0xae11,	// (0x0006f10f) main_mp3_pane_t6

0xae1f,	// (0x0006f11d) popup_slider_window_cp01

0xc26c,	// (0x0007056a) cam4_battery_pane

0xc26c,	// (0x0007056a) cam4_battery_pane_cp02

0xc26c,	// (0x0007056a) cam4_battery_pane_cp01

0xc26c,	// (0x0007056a) cam4_battery_pane_cp03

0x4ca0,	// (0x00068f9e) cam4_battery_pane_g1

0x555b,	// (0x00069859) cam4_battery_pane_g2

0x0001,

0xfb1c,	// (0x00073e1a) cam4_battery_pane_g

0x4b72,	// (0x00068e70) popup_blid_sat_info2_window_t11

0x98f7,	// (0x0006dbf5) aid_size_touch_mv_arrow_left_ParamLimits

0x1326,	// (0x00065624) aid_size_touch_mv_arrow_right_ParamLimits

0x137f,	// (0x0006567d) navi_pane_g1_ParamLimits

0x138b,	// (0x00065689) navi_pane_g2_ParamLimits

0x991b,	// (0x0006dc19) navi_pane_g3_ParamLimits

0xf3ca,	// (0x000736c8) navi_pane_g_ParamLimits

0x9938,	// (0x0006dc36) navi_pane_mv_t1_ParamLimits

0xb87f,	// (0x0006fb7d) grid_imed_effect_pane_ParamLimits

0x86b6,	// (0x0006c9b4) aid_placing_vt_slider_lsc

0x0a90,	// (0x00064d8e) aid_placing_vt_slider_prt

0x223d,	// (0x0006653b) bg_tb_trans_pane_cp01_ParamLimits

0x4def,	// (0x000690ed) popup_image_details_window_g1_ParamLimits

0x4e02,	// (0x00069100) popup_image_details_window_g2_ParamLimits

0x4e17,	// (0x00069115) popup_image_details_window_g3_ParamLimits

0x4e17,	// (0x00069115) popup_image_details_window_g3

0xf710,	// (0x00073a0e) popup_image_details_window_g_ParamLimits

0x4e2b,	// (0x00069129) popup_image_details_window_t1_ParamLimits

0x4e3d,	// (0x0006913b) popup_image_details_window_t2_ParamLimits

0x4e56,	// (0x00069154) popup_image_details_window_t3_ParamLimits

0x4e6a,	// (0x00069168) popup_image_details_window_t4_ParamLimits

0x4e85,	// (0x00069183) popup_image_details_window_t5_ParamLimits

0xf717,	// (0x00073a15) popup_image_details_window_t_ParamLimits

0xcfa8,	// (0x000712a6) cl_header_name_pane_ParamLimits

0xcfa8,	// (0x000712a6) cl_header_name_pane

0xd33f,	// (0x0007163d) cl_header_name_pane_t1_ParamLimits

0xd33f,	// (0x0007163d) cl_header_name_pane_t1

0xd356,	// (0x00071654) cl_header_name_pane_t2_ParamLimits

0xd356,	// (0x00071654) cl_header_name_pane_t2

0xd380,	// (0x0007167e) cl_header_name_pane_t3_ParamLimits

0xd380,	// (0x0007167e) cl_header_name_pane_t3

0x0002,

0xfb21,	// (0x00073e1f) cl_header_name_pane_t_ParamLimits

0xfb21,	// (0x00073e1f) cl_header_name_pane_t

0x1418,	// (0x00065716) navi_pane_mv_g2_ParamLimits

0x562f,	// (0x0006992d) field_vitu2_entry_pane_g1_ParamLimits

0x563b,	// (0x00069939) field_vitu2_entry_pane_g2_ParamLimits

0x5647,	// (0x00069945) field_vitu2_entry_pane_g3_ParamLimits

0x5647,	// (0x00069945) field_vitu2_entry_pane_g3

0xf917,	// (0x00073c15) field_vitu2_entry_pane_g_ParamLimits

0xc4ee,	// (0x000707ec) cell_vitu2_itu_pane_g1_ParamLimits

0xc500,	// (0x000707fe) cell_vitu2_itu_pane_g2_ParamLimits

0xc500,	// (0x000707fe) cell_vitu2_itu_pane_g2

0x0001,

0xf923,	// (0x00073c21) cell_vitu2_itu_pane_g_ParamLimits

0xf923,	// (0x00073c21) cell_vitu2_itu_pane_g

0x223d,	// (0x0006653b) bg_vkb2_func_pane_cp05_ParamLimits

0x223d,	// (0x0006653b) bg_vkb2_func_pane_cp05

0x223d,	// (0x0006653b) bg_vkb2_func_pane_cp03

0x223d,	// (0x0006653b) bg_vkb2_func_pane_cp04

0x223d,	// (0x0006653b) bg_vkb2_func_pane_cp10_ParamLimits

0x223d,	// (0x0006653b) bg_vkb2_func_pane_cp10

0x6a87,	// (0x0006ad85) bg_vkb2_func_pane_cp08

0xcf53,	// (0x00071251) bg_vkb2_func_pane_cp06

0xcf60,	// (0x0007125e) bg_vkb2_func_pane_cp07

0x246b,	// (0x00066769) bg_vkb2_func_pane_cp11_ParamLimits

0x246b,	// (0x00066769) bg_vkb2_func_pane_cp11

0x2480,	// (0x0006677e) bg_vkb2_func_pane_cp12_ParamLimits

0x2480,	// (0x0006677e) bg_vkb2_func_pane_cp12

0x7673,	// (0x0006b971) bg_vkb2_func_pane_cp09

0x5667,	// (0x00069965) bg_vkb2_func_pane_g1

0x0c5f,	// (0x00064f5d) bg_vkb2_func_pane_g2

0x566f,	// (0x0006996d) bg_vkb2_func_pane_g3

0x5677,	// (0x00069975) bg_vkb2_func_pane_g4

0xee8e,	// (0x0007318c) bg_vkb2_func_pane_g5

0x568f,	// (0x0006998d) bg_vkb2_func_pane_g6

0x5697,	// (0x00069995) bg_vkb2_func_pane_g7

0x5687,	// (0x00069985) bg_vkb2_func_pane_g8

0x0c3f,	// (0x00064f3d) bg_vkb2_func_pane_g9

0x0008,

0xfb28,	// (0x00073e26) bg_vkb2_func_pane_g

0xd296,	// (0x00071594) blid2_tripm_pane_g6_ParamLimits

0xd296,	// (0x00071594) blid2_tripm_pane_g6

0x5519,	// (0x00069817) mp4_progress_pane_g1

0xd2ea,	// (0x000715e8) blid2_tripm_values_pane_ParamLimits

0xd2ea,	// (0x000715e8) blid2_tripm_values_pane

0xd3a5,	// (0x000716a3) blid2_tripm_values_pane_t1

0xd3b3,	// (0x000716b1) blid2_tripm_values_pane_t2

0xd3c1,	// (0x000716bf) blid2_tripm_values_pane_t3

0xd3cf,	// (0x000716cd) blid2_tripm_values_pane_t4

0xd3dd,	// (0x000716db) blid2_tripm_values_pane_t5

0xd3eb,	// (0x000716e9) blid2_tripm_values_pane_t6

0xd3f9,	// (0x000716f7) blid2_tripm_values_pane_t7

0xd407,	// (0x00071705) blid2_tripm_values_pane_t8

0xd415,	// (0x00071713) blid2_tripm_values_pane_t9

0x0008,

0xfb3b,	// (0x00073e39) blid2_tripm_values_pane_t

0x86f0,	// (0x0006c9ee) call_video_pane_t1_ParamLimits

0x870d,	// (0x0006ca0b) call_video_pane_t2_ParamLimits

0xf253,	// (0x00073551) call_video_pane_t_ParamLimits

0x667c,	// (0x0006a97a) msg_header_pane_g1_ParamLimits

0x160a,	// (0x00065908) msg_header_pane_g2_ParamLimits

0x160a,	// (0x00065908) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0007376b) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0007376b) msg_header_pane_g

0x0748,	// (0x00064a46) main_clock2_pane_ParamLimits

0xb623,	// (0x0006f921) grid_clock2_toolbar_pane_ParamLimits

0xb623,	// (0x0006f921) grid_clock2_toolbar_pane

0xb623,	// (0x0006f921) listscroll_clock2_pane_ParamLimits

0xb623,	// (0x0006f921) listscroll_clock2_pane

0xb6bf,	// (0x0006f9bd) main_clock2_pane_t3_ParamLimits

0xb6bf,	// (0x0006f9bd) main_clock2_pane_t3

0xb6d1,	// (0x0006f9cf) main_clock2_pane_t4_ParamLimits

0xb6d1,	// (0x0006f9cf) main_clock2_pane_t4

0x252c,	// (0x0006682a) cell_clock2_toolbar_pane

0x2534,	// (0x00066832) cell_clock2_toolbar_pane_cp01

0x2534,	// (0x00066832) cell_clock2_toolbar_pane_cp02

0x253c,	// (0x0006683a) cell_clock2_toolbar_pane_cp03

0x2544,	// (0x00066842) list_clock2_pane

0x254c,	// (0x0006684a) scroll_pane_cp10

0x2554,	// (0x00066852) list_single_clock2_pane_ParamLimits

0x2554,	// (0x00066852) list_single_clock2_pane

0x09b7,	// (0x00064cb5) list_highlight_pane_cp08

0x2561,	// (0x0006685f) list_single_clock2_pane_t1

0x256f,	// (0x0006686d) list_single_clock2_pane_t2

0x0001,

0xfb4e,	// (0x00073e4c) list_single_clock2_pane_t

0x7673,	// (0x0006b971) bg_button_pane_cp10

0x257d,	// (0x0006687b) cell_clock2_toolbar_pane_g1

0x9d86,	// (0x0006e084) aid_main_viewer_pane_g1_ParamLimits

0x9d86,	// (0x0006e084) aid_main_viewer_pane_g1

0x9d92,	// (0x0006e090) aid_main_viewer_pane_g2_ParamLimits

0x9d92,	// (0x0006e090) aid_main_viewer_pane_g2

0x9d9e,	// (0x0006e09c) aid_main_viewer_pane_g3_ParamLimits

0x9d9e,	// (0x0006e09c) aid_main_viewer_pane_g3

0x9dad,	// (0x0006e0ab) aid_main_viewer_pane_g4_ParamLimits

0x9dad,	// (0x0006e0ab) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0007377c) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0007377c) aid_main_viewer_pane_g

0x3c2b,	// (0x00067f29) main_calc_pane_ParamLimits

0xa434,	// (0x0006e732) main_dialer2_pane_ParamLimits

0x7673,	// (0x0006b971) main_cam6_pane

0x7673,	// (0x0006b971) main_vid6_pane

0xb62f,	// (0x0006f92d) listscroll_gen_pane_cp06_ParamLimits

0xb62f,	// (0x0006f92d) listscroll_gen_pane_cp06

0xb6e3,	// (0x0006f9e1) main_clock2_pane_t5_ParamLimits

0xb6e3,	// (0x0006f9e1) main_clock2_pane_t5

0xb72c,	// (0x0006fa2a) aid_call2_pane_cp10_ParamLimits

0xb73e,	// (0x0006fa3c) aid_call_pane_cp10_ParamLimits

0x131a,	// (0x00065618) popup_clock_analogue_window_cp10_g1_ParamLimits

0x131a,	// (0x00065618) popup_clock_analogue_window_cp10_g2_ParamLimits

0xb750,	// (0x0006fa4e) popup_clock_analogue_window_cp10_g3_ParamLimits

0xb750,	// (0x0006fa4e) popup_clock_analogue_window_cp10_g4_ParamLimits

0x131a,	// (0x00065618) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7cc,	// (0x00073aca) popup_clock_analogue_window_cp10_g_ParamLimits

0xb762,	// (0x0006fa60) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5583,	// (0x00069881) cell_dialer2_keypad_pane_g2_ParamLimits

0x5583,	// (0x00069881) cell_dialer2_keypad_pane_g2

0x0001,

0xf8b6,	// (0x00073bb4) cell_dialer2_keypad_pane_g_ParamLimits

0xf8b6,	// (0x00073bb4) cell_dialer2_keypad_pane_g

0xbedf,	// (0x000701dd) cell_dialer2_keypad_pane_t1

0xc7e7,	// (0x00070ae5) main_cset_text2_pane_ParamLimits

0xc7e7,	// (0x00070ae5) main_cset_text2_pane

0xf0a3,	// (0x000733a1) area_vitu2_query_pane_g1_ParamLimits

0x69b4,	// (0x0006acb2) area_vitu2_query_pane_g2_ParamLimits

0xfa6b,	// (0x00073d69) area_vitu2_query_pane_g_ParamLimits

0x6a63,	// (0x0006ad61) area_vitu2_query_pane_t7_ParamLimits

0x6a63,	// (0x0006ad61) area_vitu2_query_pane_t7

0xcf53,	// (0x00071251) bg_button_pane_cp018_ParamLimits

0xcf60,	// (0x0007125e) bg_button_pane_cp021_ParamLimits

0x6a87,	// (0x0006ad85) bg_button_pane_cp022_ParamLimits

0x6a87,	// (0x0006ad85) bg_vkb2_func_pane_cp08_ParamLimits

0xcf53,	// (0x00071251) bg_vkb2_func_pane_cp06_ParamLimits

0xcf60,	// (0x0007125e) bg_vkb2_func_pane_cp07_ParamLimits

0x6a96,	// (0x0006ad94) input_focus_pane_cp09_ParamLimits

0xd423,	// (0x00071721) cam6_autofocus_pane_ParamLimits

0xd423,	// (0x00071721) cam6_autofocus_pane

0xd43f,	// (0x0007173d) cam6_image_uncrop_pane_ParamLimits

0xd43f,	// (0x0007173d) cam6_image_uncrop_pane

0xd462,	// (0x00071760) cam6_indi_pane_ParamLimits

0xd462,	// (0x00071760) cam6_indi_pane

0xd47c,	// (0x0007177a) cam6_mode_pane_ParamLimits

0xd47c,	// (0x0007177a) cam6_mode_pane

0xd490,	// (0x0007178e) cam6_timer_pane_ParamLimits

0xd490,	// (0x0007178e) cam6_timer_pane

0xd49c,	// (0x0007179a) cam6_zoom_pane_ParamLimits

0xd49c,	// (0x0007179a) cam6_zoom_pane

0xc2cc,	// (0x000705ca) cam6_mode_pane_g1_ParamLimits

0xc2cc,	// (0x000705ca) cam6_mode_pane_g1

0xd4b2,	// (0x000717b0) cam6_mode_pane_g2_ParamLimits

0xd4b2,	// (0x000717b0) cam6_mode_pane_g2

0xd4be,	// (0x000717bc) cam6_mode_pane_g3_ParamLimits

0xd4be,	// (0x000717bc) cam6_mode_pane_g3

0xd4ca,	// (0x000717c8) cam6_mode_pane_g4_ParamLimits

0xd4ca,	// (0x000717c8) cam6_mode_pane_g4

0x0003,

0xfb53,	// (0x00073e51) cam6_mode_pane_g_ParamLimits

0xfb53,	// (0x00073e51) cam6_mode_pane_g

0x2585,	// (0x00066883) bg_tb_trans_pane_cp08_ParamLimits

0x2585,	// (0x00066883) bg_tb_trans_pane_cp08

0x2593,	// (0x00066891) cam6_battery_pane_ParamLimits

0x2593,	// (0x00066891) cam6_battery_pane

0x25a9,	// (0x000668a7) cam6_indi_pane_g1_ParamLimits

0x25a9,	// (0x000668a7) cam6_indi_pane_g1

0x25bb,	// (0x000668b9) cam6_indi_pane_g2_ParamLimits

0x25bb,	// (0x000668b9) cam6_indi_pane_g2

0x25cd,	// (0x000668cb) cam6_indi_pane_g3_ParamLimits

0x25cd,	// (0x000668cb) cam6_indi_pane_g3

0x0002,

0xfb5c,	// (0x00073e5a) cam6_indi_pane_g_ParamLimits

0xfb5c,	// (0x00073e5a) cam6_indi_pane_g

0x25df,	// (0x000668dd) cam6_indi_pane_t1_ParamLimits

0x25df,	// (0x000668dd) cam6_indi_pane_t1

0xc36f,	// (0x0007066d) cam6_autofocus_pane_g1

0xc377,	// (0x00070675) cam6_autofocus_pane_g2

0xc37f,	// (0x0007067d) cam6_autofocus_pane_g3

0xc387,	// (0x00070685) cam6_autofocus_pane_g4

0x0003,

0xfb63,	// (0x00073e61) cam6_autofocus_pane_g

0x2605,	// (0x00066903) cam6_timer_pane_g1

0x260d,	// (0x0006690b) cam6_timer_pane_t1

0x261b,	// (0x00066919) cam6_zoom_cont_pane

0x2623,	// (0x00066921) cam6_zoom_pane_g1

0x262b,	// (0x00066929) cam6_zoom_pane_g2

0xd4d6,	// (0x000717d4) cam6_zoom_pane_g3

0x0002,

0xfb6c,	// (0x00073e6a) cam6_zoom_pane_g

0x4ca0,	// (0x00068f9e) cam6_battery_pane_g1

0x4ca0,	// (0x00068f9e) cam6_battery_pane_g2

0x0001,

0xf6d4,	// (0x000739d2) cam6_battery_pane_g

0x2633,	// (0x00066931) cam6_zoom_cont_pane_g1

0x263c,	// (0x0006693a) cam6_zoom_cont_pane_g2

0x2645,	// (0x00066943) cam6_zoom_cont_pane_g3

0x0002,

0xfb73,	// (0x00073e71) cam6_zoom_cont_pane_g

0xd4f3,	// (0x000717f1) cam6_mode_pane_cp_ParamLimits

0xd4f3,	// (0x000717f1) cam6_mode_pane_cp

0xd49c,	// (0x0007179a) cam6_zoom_pane_cp_ParamLimits

0xd49c,	// (0x0007179a) cam6_zoom_pane_cp

0xd507,	// (0x00071805) vid6_image_uncrop_cif_pane_ParamLimits

0xd507,	// (0x00071805) vid6_image_uncrop_cif_pane

0xd529,	// (0x00071827) vid6_image_uncrop_nhd_pane_ParamLimits

0xd529,	// (0x00071827) vid6_image_uncrop_nhd_pane

0xd43f,	// (0x0007173d) vid6_image_uncrop_vga_pane_ParamLimits

0xd43f,	// (0x0007173d) vid6_image_uncrop_vga_pane

0xd540,	// (0x0007183e) vid6_image_uncrop_wvga_pane_ParamLimits

0xd540,	// (0x0007183e) vid6_image_uncrop_wvga_pane

0xd557,	// (0x00071855) vid6_indi_pane_ParamLimits

0xd557,	// (0x00071855) vid6_indi_pane

0x2585,	// (0x00066883) bg_tb_trans_pane_cp09_ParamLimits

0x2585,	// (0x00066883) bg_tb_trans_pane_cp09

0x2659,	// (0x00066957) cam6_battery_pane_cp_ParamLimits

0x2659,	// (0x00066957) cam6_battery_pane_cp

0x2665,	// (0x00066963) vid6_indi_pane_g1_ParamLimits

0x2665,	// (0x00066963) vid6_indi_pane_g1

0x2677,	// (0x00066975) vid6_indi_pane_g2_ParamLimits

0x2677,	// (0x00066975) vid6_indi_pane_g2

0x2689,	// (0x00066987) vid6_indi_pane_g3_ParamLimits

0x2689,	// (0x00066987) vid6_indi_pane_g3

0x269e,	// (0x0006699c) vid6_indi_pane_g4_ParamLimits

0x269e,	// (0x0006699c) vid6_indi_pane_g4

0x26b3,	// (0x000669b1) vid6_indi_pane_g5_ParamLimits

0x26b3,	// (0x000669b1) vid6_indi_pane_g5

0x0004,

0xfb7a,	// (0x00073e78) vid6_indi_pane_g_ParamLimits

0xfb7a,	// (0x00073e78) vid6_indi_pane_g

0x26cd,	// (0x000669cb) vid6_indi_pane_t1_ParamLimits

0x26cd,	// (0x000669cb) vid6_indi_pane_t1

0x26e3,	// (0x000669e1) vid6_indi_pane_t2_ParamLimits

0x26e3,	// (0x000669e1) vid6_indi_pane_t2

0x270b,	// (0x00066a09) vid6_indi_pane_t3_ParamLimits

0x270b,	// (0x00066a09) vid6_indi_pane_t3

0x2733,	// (0x00066a31) vid6_indi_pane_t4_ParamLimits

0x2733,	// (0x00066a31) vid6_indi_pane_t4

0x0003,

0xfb85,	// (0x00073e83) vid6_indi_pane_t_ParamLimits

0xfb85,	// (0x00073e83) vid6_indi_pane_t

0x2757,	// (0x00066a55) wait_bar_pane_cp08

0xd577,	// (0x00071875) main_cset_text2_pane_t1_ParamLimits

0xd577,	// (0x00071875) main_cset_text2_pane_t1

0xd4de,	// (0x000717dc) listscroll_gen_pane_cp06_t1_ParamLimits

0xd4de,	// (0x000717dc) listscroll_gen_pane_cp06_t1

0x7673,	// (0x0006b971) main_cam6_set_pane

0x4ecf,	// (0x000691cd) bg_tb_trans_pane_cp06_ParamLimits

0xc274,	// (0x00070572) cam4_indicators_pane_g1_ParamLimits

0xc284,	// (0x00070582) cam4_indicators_pane_g2_ParamLimits

0xf8f3,	// (0x00073bf1) cam4_indicators_pane_g_ParamLimits

0xc2a4,	// (0x000705a2) cam4_indicators_pane_t1_ParamLimits

0x223d,	// (0x0006653b) bg_tb_trans_pane_cp07_ParamLimits

0xc274,	// (0x00070572) vid4_indicators_pane_g1_ParamLimits

0xc318,	// (0x00070616) vid4_indicators_pane_g2_ParamLimits

0xc328,	// (0x00070626) vid4_indicators_pane_g3_ParamLimits

0xc339,	// (0x00070637) vid4_indicators_pane_g4_ParamLimits

0xf905,	// (0x00073c03) vid4_indicators_pane_g_ParamLimits

0xc355,	// (0x00070653) vid4_indicators_pane_t1_ParamLimits

0xd07c,	// (0x0007137a) vid4_progress_pane_g1_ParamLimits

0xd08b,	// (0x00071389) vid4_progress_pane_g2_ParamLimits

0xd09a,	// (0x00071398) vid4_progress_pane_g3_ParamLimits

0xd0a9,	// (0x000713a7) vid4_progress_pane_g4_ParamLimits

0xfab6,	// (0x00073db4) vid4_progress_pane_g_ParamLimits

0xd0b5,	// (0x000713b3) vid4_progress_pane_t1_ParamLimits

0xd0cb,	// (0x000713c9) vid4_progress_pane_t2_ParamLimits

0xd0e0,	// (0x000713de) vid4_progress_pane_t3_ParamLimits

0xfac1,	// (0x00073dbf) vid4_progress_pane_t_ParamLimits

0xd0f5,	// (0x000713f3) wait_bar_pane_cp07_ParamLimits

0xd593,	// (0x00071891) main_cam6_set_pane_g2_ParamLimits

0xd593,	// (0x00071891) main_cam6_set_pane_g2

0xd59f,	// (0x0007189d) main_cset6_listscroll_pane_ParamLimits

0xd59f,	// (0x0007189d) main_cset6_listscroll_pane

0xd5c8,	// (0x000718c6) main_cset6_slider_pane_ParamLimits

0xd5c8,	// (0x000718c6) main_cset6_slider_pane

0xd5d4,	// (0x000718d2) main_cset6_text2_pane_ParamLimits

0xd5d4,	// (0x000718d2) main_cset6_text2_pane

0x2767,	// (0x00066a65) main_cset6_text_pane

0xed59,	// (0x00073057) main_cset_list_pane_copy1_ParamLimits

0xed59,	// (0x00073057) main_cset_list_pane_copy1

0xed69,	// (0x00073067) scroll_pane_cp028_copy1

0xd5e7,	// (0x000718e5) cset_list_set_pane_copy1

0xcaa2,	// (0x00070da0) aid_position_infowindow_above_copy1

0xcaaa,	// (0x00070da8) aid_position_infowindow_below_copy1

0xd5f6,	// (0x000718f4) cset_list_set_pane_g1_copy1

0x6aca,	// (0x0006adc8) cset_list_set_pane_g3_copy1_ParamLimits

0x6aca,	// (0x0006adc8) cset_list_set_pane_g3_copy1

0x6ad9,	// (0x0006add7) cset_list_set_pane_t1_copy1_ParamLimits

0x6ad9,	// (0x0006add7) cset_list_set_pane_t1_copy1

0x223d,	// (0x0006653b) list_highlight_pane_cp021_copy1_ParamLimits

0x223d,	// (0x0006653b) list_highlight_pane_cp021_copy1

0x276f,	// (0x00066a6d) cset6_slider_pane_ParamLimits

0x276f,	// (0x00066a6d) cset6_slider_pane

0x279b,	// (0x00066a99) main_cset6_slider_pane_g1_ParamLimits

0x279b,	// (0x00066a99) main_cset6_slider_pane_g1

0xd5fe,	// (0x000718fc) main_cset6_slider_pane_g2_ParamLimits

0xd5fe,	// (0x000718fc) main_cset6_slider_pane_g2

0xed7e,	// (0x0007307c) main_cset6_slider_pane_g3_ParamLimits

0xed7e,	// (0x0007307c) main_cset6_slider_pane_g3

0xd626,	// (0x00071924) main_cset6_slider_pane_g4_ParamLimits

0xd626,	// (0x00071924) main_cset6_slider_pane_g4

0xd632,	// (0x00071930) main_cset6_slider_pane_g5_ParamLimits

0xd632,	// (0x00071930) main_cset6_slider_pane_g5

0xed7e,	// (0x0007307c) main_cset6_slider_pane_g7_ParamLimits

0xed7e,	// (0x0007307c) main_cset6_slider_pane_g7

0xed8a,	// (0x00073088) main_cset6_slider_pane_g8_ParamLimits

0xed8a,	// (0x00073088) main_cset6_slider_pane_g8

0xd63e,	// (0x0007193c) main_cset6_slider_pane_g9_ParamLimits

0xd63e,	// (0x0007193c) main_cset6_slider_pane_g9

0xd64a,	// (0x00071948) main_cset6_slider_pane_g10_ParamLimits

0xd64a,	// (0x00071948) main_cset6_slider_pane_g10

0xd626,	// (0x00071924) main_cset6_slider_pane_g11_ParamLimits

0xd626,	// (0x00071924) main_cset6_slider_pane_g11

0xd656,	// (0x00071954) main_cset6_slider_pane_g12_ParamLimits

0xd656,	// (0x00071954) main_cset6_slider_pane_g12

0xd662,	// (0x00071960) main_cset6_slider_pane_g13_ParamLimits

0xd662,	// (0x00071960) main_cset6_slider_pane_g13

0xd66e,	// (0x0007196c) main_cset6_slider_pane_g14_ParamLimits

0xd66e,	// (0x0007196c) main_cset6_slider_pane_g14

0xd67a,	// (0x00071978) main_cset6_slider_pane_g15_ParamLimits

0xd67a,	// (0x00071978) main_cset6_slider_pane_g15

0xd632,	// (0x00071930) main_cset6_slider_pane_g16_ParamLimits

0xd632,	// (0x00071930) main_cset6_slider_pane_g16

0xd692,	// (0x00071990) main_cset6_slider_pane_g17_ParamLimits

0xd692,	// (0x00071990) main_cset6_slider_pane_g17

0x0011,

0xfb8e,	// (0x00073e8c) main_cset6_slider_pane_g_ParamLimits

0xfb8e,	// (0x00073e8c) main_cset6_slider_pane_g

0x27c3,	// (0x00066ac1) main_cset6_slider_pane_t1_ParamLimits

0x27c3,	// (0x00066ac1) main_cset6_slider_pane_t1

0xd69e,	// (0x0007199c) main_cset6_slider_pane_t2_ParamLimits

0xd69e,	// (0x0007199c) main_cset6_slider_pane_t2

0x2804,	// (0x00066b02) main_cset6_slider_pane_t3_ParamLimits

0x2804,	// (0x00066b02) main_cset6_slider_pane_t3

0xd6c9,	// (0x000719c7) main_cset6_slider_pane_t4_ParamLimits

0xd6c9,	// (0x000719c7) main_cset6_slider_pane_t4

0x282f,	// (0x00066b2d) main_cset6_slider_pane_t5_ParamLimits

0x282f,	// (0x00066b2d) main_cset6_slider_pane_t5

0x285a,	// (0x00066b58) main_cset6_slider_pane_t7_ParamLimits

0x285a,	// (0x00066b58) main_cset6_slider_pane_t7

0xd6f4,	// (0x000719f2) main_cset6_slider_pane_t8_ParamLimits

0xd6f4,	// (0x000719f2) main_cset6_slider_pane_t8

0xd718,	// (0x00071a16) main_cset6_slider_pane_t9_ParamLimits

0xd718,	// (0x00071a16) main_cset6_slider_pane_t9

0xd73c,	// (0x00071a3a) main_cset6_slider_pane_t10_ParamLimits

0xd73c,	// (0x00071a3a) main_cset6_slider_pane_t10

0xd760,	// (0x00071a5e) main_cset6_slider_pane_t11_ParamLimits

0xd760,	// (0x00071a5e) main_cset6_slider_pane_t11

0x2890,	// (0x00066b8e) main_cset6_slider_pane_t14_ParamLimits

0x2890,	// (0x00066b8e) main_cset6_slider_pane_t14

0x28c9,	// (0x00066bc7) main_cset6_slider_pane_t15_ParamLimits

0x28c9,	// (0x00066bc7) main_cset6_slider_pane_t15

0x000b,

0xfbb3,	// (0x00073eb1) main_cset6_slider_pane_t_ParamLimits

0xfbb3,	// (0x00073eb1) main_cset6_slider_pane_t

0xee42,	// (0x00073140) cset_slider_pane_g1_copy1

0xee4b,	// (0x00073149) cset_slider_pane_g2_copy1

0xee54,	// (0x00073152) cset_slider_pane_g3_copy1

0x7673,	// (0x0006b971) bg_popup_sub_pane_cp011_copy1

0xeed5,	// (0x000731d3) main_cset_text_pane_g1_copy1

0xeedd,	// (0x000731db) main_cset_text_pane_t1_copy1

0xeeeb,	// (0x000731e9) main_cset_text_pane_t2_copy1

0xeef9,	// (0x000731f7) main_cset_text_pane_t3_copy1

0xef07,	// (0x00073205) main_cset_text_pane_t4_copy1

0xef15,	// (0x00073213) main_cset_text_pane_t5_copy1

0xef23,	// (0x00073221) main_cset_text_pane_t6_copy1

0xef31,	// (0x0007322f) main_cset_text_pane_t7_copy1

0xd79f,	// (0x00071a9d) main_cset_text2_pane_t1_copy1

0x223d,	// (0x0006653b) main_ncimui_pane

0xa47f,	// (0x0006e77d) popup_query_ncimui_window_ParamLimits

0xa47f,	// (0x0006e77d) popup_query_ncimui_window

0xaf4b,	// (0x0006f249) field_cale_ev2_pane_g4_ParamLimits

0xaf4b,	// (0x0006f249) field_cale_ev2_pane_g4

0xbbf3,	// (0x0006fef1) cell_video_dialer_keypad_pane_g2_ParamLimits

0xbbf3,	// (0x0006fef1) cell_video_dialer_keypad_pane_g2

0x0001,

0xf88d,	// (0x00073b8b) cell_video_dialer_keypad_pane_g_ParamLimits

0xf88d,	// (0x00073b8b) cell_video_dialer_keypad_pane_g

0xbc0b,	// (0x0006ff09) cell_video_dialer_keypad_pane_t1

0x7673,	// (0x0006b971) bg_popup_window_pane_cp012

0x1167,	// (0x00065465) heading_pane_cp06

0x29e0,	// (0x00066cde) ncim_query_content_pane

0x7673,	// (0x0006b971) bg_popup_heading_pane_cp01

0x29e8,	// (0x00066ce6) ncim_heading_pane_t1

0x29f6,	// (0x00066cf4) ncim_indicator_popup_pane

0x2a08,	// (0x00066d06) ncim_query_button_pane

0x2a1c,	// (0x00066d1a) ncim_query_content_pane_t1

0x2a2e,	// (0x00066d2c) ncim_query_content_pane_t2

0x0005,

0xfbf7,	// (0x00073ef5) ncim_query_content_pane_t

0x2a68,	// (0x00066d66) ncim_query_list_pane

0x2a7a,	// (0x00066d78) ncim_query_popup_pane

0x29f6,	// (0x00066cf4) ncim_indicator_popup_pane_ParamLimits

0xd8e0,	// (0x00071bde) ncim_query_content_pane_g1_ParamLimits

0xd8e0,	// (0x00071bde) ncim_query_content_pane_g1

0x2a1c,	// (0x00066d1a) ncim_query_content_pane_t1_ParamLimits

0x2a2e,	// (0x00066d2c) ncim_query_content_pane_t2_ParamLimits

0xd8ec,	// (0x00071bea) ncim_query_content_pane_t3_ParamLimits

0xd8ec,	// (0x00071bea) ncim_query_content_pane_t3

0xd909,	// (0x00071c07) ncim_query_content_pane_t4_ParamLimits

0xd909,	// (0x00071c07) ncim_query_content_pane_t4

0xd926,	// (0x00071c24) ncim_query_content_pane_t5_ParamLimits

0xd926,	// (0x00071c24) ncim_query_content_pane_t5

0x2a40,	// (0x00066d3e) ncim_query_content_pane_t6_ParamLimits

0x2a40,	// (0x00066d3e) ncim_query_content_pane_t6

0xfbf7,	// (0x00073ef5) ncim_query_content_pane_t_ParamLimits

0x2a68,	// (0x00066d66) ncim_query_list_pane_ParamLimits

0x2a7a,	// (0x00066d78) ncim_query_popup_pane_ParamLimits

0x2a8e,	// (0x00066d8c) wait_bar_pane_cp04

0x7673,	// (0x0006b971) input_focus_pane_cp011

0x2a96,	// (0x00066d94) ncim_query_popup_pane_t1

0x2aa4,	// (0x00066da2) ncim_list_query_list_pane_ParamLimits

0x2aa4,	// (0x00066da2) ncim_list_query_list_pane

0x7673,	// (0x0006b971) bg_button_pane_cp027

0x2ab7,	// (0x00066db5) ncim_query_button_pane_g1

0x7673,	// (0x0006b971) list_highlight_pane_cp012

0x2ac1,	// (0x00066dbf) ncim_list_query_list_pane_g1

0x2ac9,	// (0x00066dc7) ncim_list_query_list_pane_t1

0xc294,	// (0x00070592) cam4_indicators_pane_g3_ParamLimits

0xc294,	// (0x00070592) cam4_indicators_pane_g3

0xc345,	// (0x00070643) vid4_indicators_pane_g5_ParamLimits

0xc345,	// (0x00070643) vid4_indicators_pane_g5

0x0f36,	// (0x00065234) vid4_progress_pane_g5_ParamLimits

0x0f36,	// (0x00065234) vid4_progress_pane_g5

0xd7d0,	// (0x00071ace) main_ncimui_pane_g1

0xd836,	// (0x00071b34) ncimui_group_query_pane_ParamLimits

0xd836,	// (0x00071b34) ncimui_group_query_pane

0xd87e,	// (0x00071b7c) ncimui_list_pane_ParamLimits

0xd87e,	// (0x00071b7c) ncimui_list_pane

0xd8a3,	// (0x00071ba1) ncimui_text_pane_ParamLimits

0xd8a3,	// (0x00071ba1) ncimui_text_pane

0xd943,	// (0x00071c41) ncimui_text_pane_t1_ParamLimits

0xd943,	// (0x00071c41) ncimui_text_pane_t1

0x2ae0,	// (0x00066dde) ncimui_list_single_graphic_pane_ParamLimits

0x2ae0,	// (0x00066dde) ncimui_list_single_graphic_pane

0xd961,	// (0x00071c5f) ncimui_query_pane_ParamLimits

0xd961,	// (0x00071c5f) ncimui_query_pane

0x7673,	// (0x0006b971) list_highlight_pane_cp013

0x2af0,	// (0x00066dee) ncim_list_query_list_pane_t1_copy1

0x2afe,	// (0x00066dfc) ncim_list_single_graphic_pane_g1

0x2b06,	// (0x00066e04) ncim_query_button_pane_cp01

0x2b12,	// (0x00066e10) ncim_query_entry_pane_ParamLimits

0x2b12,	// (0x00066e10) ncim_query_entry_pane

0x2b25,	// (0x00066e23) ncimui_query_pane_g1

0x2b31,	// (0x00066e2f) ncimui_query_pane_t1_ParamLimits

0x2b31,	// (0x00066e2f) ncimui_query_pane_t1

0x223d,	// (0x0006653b) input_focus_pane_cp012

0x2b4a,	// (0x00066e48) ncim_query_entry_pane_t1

0x0748,	// (0x00064a46) main_im_pane_ParamLimits

0x223d,	// (0x0006653b) main_mobtv_pane_ParamLimits

0x223d,	// (0x0006653b) main_mobtv_pane

0xd63e,	// (0x0007193c) main_cset6_slider_pane_g18_ParamLimits

0xd63e,	// (0x0007193c) main_cset6_slider_pane_g18

0xd662,	// (0x00071960) main_cset6_slider_pane_g19_ParamLimits

0xd662,	// (0x00071960) main_cset6_slider_pane_g19

0x5647,	// (0x00069945) bg_main_mobtv_pane_ParamLimits

0x5647,	// (0x00069945) bg_main_mobtv_pane

0xd971,	// (0x00071c6f) main_mobtv_info_pane

0xd97a,	// (0x00071c78) main_mobtv_loading_pane_ParamLimits

0xd97a,	// (0x00071c78) main_mobtv_loading_pane

0x2b6a,	// (0x00066e68) main_mobtv_pg_channel_list_pane

0x2b74,	// (0x00066e72) main_mobtv_pg_hdr_pane

0xd987,	// (0x00071c85) main_mobtv_programe_curr_pane_ParamLimits

0xd987,	// (0x00071c85) main_mobtv_programe_curr_pane

0xd994,	// (0x00071c92) main_mobtv_programe_next_pane_ParamLimits

0xd994,	// (0x00071c92) main_mobtv_programe_next_pane

0x2b7d,	// (0x00066e7b) popup_mobtv_noti_window

0x4ca0,	// (0x00068f9e) main_tv_pg_hdr_pane_g1

0x2b85,	// (0x00066e83) main_tv_pg_hdr_pane_g2

0x2b8d,	// (0x00066e8b) main_tv_pg_hdr_pane_g3

0x2b95,	// (0x00066e93) main_tv_pg_hdr_pane_g4

0x2b9d,	// (0x00066e9b) main_tv_pg_hdr_pane_g5

0x2ba5,	// (0x00066ea3) main_tv_pg_hdr_pane_g6

0x2bad,	// (0x00066eab) main_tv_pg_hdr_pane_g7

0x2bb5,	// (0x00066eb3) main_tv_pg_hdr_pane_g8

0x2bbd,	// (0x00066ebb) main_tv_pg_hdr_pane_g9

0x2bc5,	// (0x00066ec3) main_tv_pg_hdr_pane_g10

0x2bcf,	// (0x00066ecd) main_tv_pg_hdr_pane_g11

0x000a,

0xfc04,	// (0x00073f02) main_tv_pg_hdr_pane_g

0x2bd9,	// (0x00066ed7) main_tv_pg_hdr_pane_t1

0x2be7,	// (0x00066ee5) main_tv_pg_hdr_pane_t2

0x2bf5,	// (0x00066ef3) main_tv_pg_hdr_pane_t3

0x2c03,	// (0x00066f01) main_tv_pg_hdr_pane_t4

0x2c11,	// (0x00066f0f) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1b,	// (0x00073f19) main_tv_pg_hdr_pane_t

0x2c1f,	// (0x00066f1d) single_mobtv_pg_channel_pane_ParamLimits

0x2c1f,	// (0x00066f1d) single_mobtv_pg_channel_pane

0x2c31,	// (0x00066f2f) single_mobtv_pg_channel_table_pane

0x2c3a,	// (0x00066f38) single_mobtv_pg_channel_thumb_pane

0x2c43,	// (0x00066f41) single_tv_pg_channel_pane_g1

0x2c4c,	// (0x00066f4a) single_tv_pg_channel_pane_g2

0x0001,

0xfc26,	// (0x00073f24) single_tv_pg_channel_pane_g

0x4ecf,	// (0x000691cd) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x4ecf,	// (0x000691cd) bg_single_mobtv_pg_channel_thumb_pane

0x2c55,	// (0x00066f53) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2c55,	// (0x00066f53) single_mobtv_pg_channel_thumb_pane_g1

0x2c63,	// (0x00066f61) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2c63,	// (0x00066f61) single_mobtv_pg_channel_thumb_pane_g2

0x2c6f,	// (0x00066f6d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2c6f,	// (0x00066f6d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2b,	// (0x00073f29) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2b,	// (0x00073f29) single_mobtv_pg_channel_thumb_pane_g

0x2c7b,	// (0x00066f79) single_mobtv_pg_channel_thumb_pane_t1

0x2c89,	// (0x00066f87) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc32,	// (0x00073f30) single_mobtv_pg_channel_thumb_pane_t

0x4ca0,	// (0x00068f9e) bg_single_mobtv_pg_channel_table_pane_g1

0x4ca0,	// (0x00068f9e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d4,	// (0x000739d2) bg_single_mobtv_pg_channel_table_pane_g

0x2c97,	// (0x00066f95) single_mobtv_pg_channel_table_pane_t1

0x2ca5,	// (0x00066fa3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc37,	// (0x00073f35) single_mobtv_pg_channel_table_pane_t

0xd9a9,	// (0x00071ca7) main_mobtv_info_pane_g1_ParamLimits

0xd9a9,	// (0x00071ca7) main_mobtv_info_pane_g1

0xd9c5,	// (0x00071cc3) main_mobtv_info_pane_t1_ParamLimits

0xd9c5,	// (0x00071cc3) main_mobtv_info_pane_t1

0xda2b,	// (0x00071d29) main_mobtv_info_pane_t2_ParamLimits

0xda2b,	// (0x00071d29) main_mobtv_info_pane_t2

0x0002,

0xfc41,	// (0x00073f3f) main_mobtv_info_pane_t_ParamLimits

0xfc41,	// (0x00073f3f) main_mobtv_info_pane_t

0xdaae,	// (0x00071dac) wait_bar_pane_cp05

0xdabe,	// (0x00071dbc) main_mobtv_loading_pane_g1_ParamLimits

0xdabe,	// (0x00071dbc) main_mobtv_loading_pane_g1

0xdaca,	// (0x00071dc8) main_mobtv_loading_pane_g2_ParamLimits

0xdaca,	// (0x00071dc8) main_mobtv_loading_pane_g2

0xdad6,	// (0x00071dd4) main_mobtv_loading_pane_g3_ParamLimits

0xdad6,	// (0x00071dd4) main_mobtv_loading_pane_g3

0x0002,

0xfc48,	// (0x00073f46) main_mobtv_loading_pane_g_ParamLimits

0xfc48,	// (0x00073f46) main_mobtv_loading_pane_g

0x2cb3,	// (0x00066fb1) main_mobtv_loading_pane_t1_ParamLimits

0x2cb3,	// (0x00066fb1) main_mobtv_loading_pane_t1

0x2ccb,	// (0x00066fc9) main_mobtv_loading_pane_t2_ParamLimits

0x2ccb,	// (0x00066fc9) main_mobtv_loading_pane_t2

0x0001,

0xfc4f,	// (0x00073f4d) main_mobtv_loading_pane_t_ParamLimits

0xfc4f,	// (0x00073f4d) main_mobtv_loading_pane_t

0xdae2,	// (0x00071de0) wait_bar_pane_cp06_ParamLimits

0xdae2,	// (0x00071de0) wait_bar_pane_cp06

0x2cef,	// (0x00066fed) main_mobtv_programe_curr_pane_t1

0x2cfd,	// (0x00066ffb) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc54,	// (0x00073f52) main_mobtv_programe_curr_pane_t

0x2d0b,	// (0x00067009) main_mobtv_programe_next_pane_t1

0x2d19,	// (0x00067017) main_mobtv_programe_next_pane_t2

0x2d27,	// (0x00067025) main_mobtv_programe_next_pane_t3

0x0002,

0xfc59,	// (0x00073f57) main_mobtv_programe_next_pane_t

0x7673,	// (0x0006b971) bg_popup_mobtv_noti_window_pane

0x2d35,	// (0x00067033) popup_mobtv_noti_window_g1

0x2d3d,	// (0x0006703b) popup_mobtv_noti_window_t1

0x2d4b,	// (0x00067049) popup_mobtv_noti_window_t2

0x0001,

0xfc60,	// (0x00073f5e) popup_mobtv_noti_window_t

0x4ca0,	// (0x00068f9e) bg_popup_mobtv_noti_window_pane_g1

0x7673,	// (0x0006b971) sc_clock_pane

0x7673,	// (0x0006b971) main_fs_bigclock_pane

0xd2d8,	// (0x000715d6) blid2_tripm_pane_t4_ParamLimits

0xd2d8,	// (0x000715d6) blid2_tripm_pane_t4

0xdaee,	// (0x00071dec) sc_clock_pane_g1_ParamLimits

0xdaee,	// (0x00071dec) sc_clock_pane_g1

0xdafc,	// (0x00071dfa) sc_clock_pane_t1_ParamLimits

0xdafc,	// (0x00071dfa) sc_clock_pane_t1

0xdb0f,	// (0x00071e0d) sc_clock_pane_t2_ParamLimits

0xdb0f,	// (0x00071e0d) sc_clock_pane_t2

0xdb21,	// (0x00071e1f) sc_clock_pane_t3_ParamLimits

0xdb21,	// (0x00071e1f) sc_clock_pane_t3

0x0004,

0xfc65,	// (0x00073f63) sc_clock_pane_t_ParamLimits

0xfc65,	// (0x00073f63) sc_clock_pane_t

0xe3b1,	// (0x000726af) main_fs_bigclock_indicator_pane_ParamLimits

0xe3b1,	// (0x000726af) main_fs_bigclock_indicator_pane

0xdb9c,	// (0x00071e9a) main_fs_bigclock_pane_g1_ParamLimits

0xdb9c,	// (0x00071e9a) main_fs_bigclock_pane_g1

0xe3bd,	// (0x000726bb) main_fs_bigclock_pane_t1_ParamLimits

0xe3bd,	// (0x000726bb) main_fs_bigclock_pane_t1

0xe3cf,	// (0x000726cd) main_fs_bigclock_pane_t2_ParamLimits

0xe3cf,	// (0x000726cd) main_fs_bigclock_pane_t2

0xe3e1,	// (0x000726df) main_fs_bigclock_pane_t3_ParamLimits

0xe3e1,	// (0x000726df) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x00074171) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x00074171) main_fs_bigclock_pane_t

0x3831,	// (0x00067b2f) main_fs_bigclock_indicator_pane_g1

0x2a10,	// (0x00066d0e) ncim_query_content_pane_g2_ParamLimits

0x2a10,	// (0x00066d0e) ncim_query_content_pane_g2

0x0001,

0xfbf2,	// (0x00073ef0) ncim_query_content_pane_g_ParamLimits

0xfbf2,	// (0x00073ef0) ncim_query_content_pane_g

0xdb33,	// (0x00071e31) sc_clock_pane_t4_ParamLimits

0xdb33,	// (0x00071e31) sc_clock_pane_t4

0x223d,	// (0x0006653b) main_radioblah_pane

0xc141,	// (0x0007043f) cell_call4_button_pane_t1_copy1_ParamLimits

0xc141,	// (0x0007043f) cell_call4_button_pane_t1_copy1

0xd7e8,	// (0x00071ae6) main_ncimui_pane_t1_ParamLimits

0xd7e8,	// (0x00071ae6) main_ncimui_pane_t1

0xd802,	// (0x00071b00) main_ncimui_pane_t2_ParamLimits

0xd802,	// (0x00071b00) main_ncimui_pane_t2

0x0002,

0xfbeb,	// (0x00073ee9) main_ncimui_pane_t_ParamLimits

0xfbeb,	// (0x00073ee9) main_ncimui_pane_t

0x2e8c,	// (0x0006718a) main_radioblah_anim_pane_ParamLimits

0x2e8c,	// (0x0006718a) main_radioblah_anim_pane

0x2e9d,	// (0x0006719b) main_radioblah_info_pane_ParamLimits

0x2e9d,	// (0x0006719b) main_radioblah_info_pane

0x2eb1,	// (0x000671af) main_radioblah_pane_t1_ParamLimits

0x2eb1,	// (0x000671af) main_radioblah_pane_t1

0x2ecd,	// (0x000671cb) main_radioblah_pane_t2_ParamLimits

0x2ecd,	// (0x000671cb) main_radioblah_pane_t2

0x0003,

0xfc86,	// (0x00073f84) main_radioblah_pane_t_ParamLimits

0xfc86,	// (0x00073f84) main_radioblah_pane_t

0xdbe4,	// (0x00071ee2) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdbe4,	// (0x00071ee2) main_radioblah_rocker_ctrl_pane

0x2f15,	// (0x00067213) main_radioblah_info_pane_t1_ParamLimits

0x2f15,	// (0x00067213) main_radioblah_info_pane_t1

0xdc29,	// (0x00071f27) main_radioblah_info_pane_t2_ParamLimits

0xdc29,	// (0x00071f27) main_radioblah_info_pane_t2

0x0003,

0xfc8f,	// (0x00073f8d) main_radioblah_info_pane_t_ParamLimits

0xfc8f,	// (0x00073f8d) main_radioblah_info_pane_t

0x4ca0,	// (0x00068f9e) main_radioblah_rocker_ctrl_pane_g1

0xdcd1,	// (0x00071fcf) main_radioblah_rocker_ctrl_pane_g2

0xdcd9,	// (0x00071fd7) main_radioblah_rocker_ctrl_pane_g3

0xdce1,	// (0x00071fdf) main_radioblah_rocker_ctrl_pane_g4

0xdce9,	// (0x00071fe7) main_radioblah_rocker_ctrl_pane_g5

0xdcf1,	// (0x00071fef) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc98,	// (0x00073f96) main_radioblah_rocker_ctrl_pane_g

0xd79f,	// (0x00071a9d) main_cset_text2_pane_t1_copy1_ParamLimits

0xc1c4,	// (0x000704c2) cam4_image_uncrop_qvga_pane

0xc2d8,	// (0x000705d6) vid4_image_uncrop_qcif_pane

0xd456,	// (0x00071754) cam6_image_uncrop_qvga_pane_ParamLimits

0xd456,	// (0x00071754) cam6_image_uncrop_qvga_pane

0x264d,	// (0x0006694b) vid6_image_uncrop_qcif_pane_ParamLimits

0x264d,	// (0x0006694b) vid6_image_uncrop_qcif_pane

0x7673,	// (0x0006b971) bg_popup_preview_window_pane_cp03

0x29b6,	// (0x00066cb4) list_cset_text2_pane

0x29be,	// (0x00066cbc) main_cset6_text2_pane_g1

0x29c6,	// (0x00066cc4) main_cset6_text2_pane_t1

0x3bd1,	// (0x00067ecf) list_cset_text2_pane_t1_ParamLimits

0x3bd1,	// (0x00067ecf) list_cset_text2_pane_t1

0x223d,	// (0x0006653b) main_radioblah_pane_ParamLimits

0xda9c,	// (0x00071d9a) main_mobtv_info_pane_t3_ParamLimits

0xda9c,	// (0x00071d9a) main_mobtv_info_pane_t3

0xdbd2,	// (0x00071ed0) main_radioblah_pane_g1

0xdbfd,	// (0x00071efb) main_radioblah_info_pane_g1

0xdc78,	// (0x00071f76) main_radioblah_info_pane_t3_ParamLimits

0xdc78,	// (0x00071f76) main_radioblah_info_pane_t3

0x949d,	// (0x0006d79b) highlight_cell_cale_month_pane_ParamLimits

0x949d,	// (0x0006d79b) highlight_cell_cale_month_pane

0x7673,	// (0x0006b971) main_phob_fisheye_pane

0x4fab,	// (0x000692a9) scroll_pane_cp0031_ParamLimits

0x4fab,	// (0x000692a9) scroll_pane_cp0031

0x2757,	// (0x00066a55) wait_bar_pane_cp08_ParamLimits

0xd5e7,	// (0x000718e5) cset_list_set_pane_copy1_ParamLimits

0x2f4f,	// (0x0006724d) highlight_cell_cale_month_pane_g1

0xdcf9,	// (0x00071ff7) highlight_cell_cale_month_pane_t1

0x2f57,	// (0x00067255) list_gen_pane_cp01

0xed69,	// (0x00073067) scroll_pane_01

0xdd07,	// (0x00072005) list_single_double_fisheye_pane

0x6ba4,	// (0x0006aea2) list_double_fisheye_pane_g1_ParamLimits

0x6ba4,	// (0x0006aea2) list_double_fisheye_pane_g1

0xdd10,	// (0x0007200e) list_double_fisheye_pane_g2_ParamLimits

0xdd10,	// (0x0007200e) list_double_fisheye_pane_g2

0xdd24,	// (0x00072022) list_double_fisheye_pane_g3_ParamLimits

0xdd24,	// (0x00072022) list_double_fisheye_pane_g3

0x0004,

0xfca5,	// (0x00073fa3) list_double_fisheye_pane_g_ParamLimits

0xfca5,	// (0x00073fa3) list_double_fisheye_pane_g

0x6bbc,	// (0x0006aeba) list_double_fisheye_pane_t1_ParamLimits

0x6bbc,	// (0x0006aeba) list_double_fisheye_pane_t1

0x6bd7,	// (0x0006aed5) list_double_fisheye_pane_t2_ParamLimits

0x6bd7,	// (0x0006aed5) list_double_fisheye_pane_t2

0x0001,

0xfcb0,	// (0x00073fae) list_double_fisheye_pane_t_ParamLimits

0xfcb0,	// (0x00073fae) list_double_fisheye_pane_t

0x7673,	// (0x0006b971) main_call5_pane

0xdb59,	// (0x00071e57) sc_swipe_pane_ParamLimits

0xdb59,	// (0x00071e57) sc_swipe_pane

0xdd4d,	// (0x0007204b) call5_image_pane_ParamLimits

0xdd4d,	// (0x0007204b) call5_image_pane

0xdd59,	// (0x00072057) call5_swipe_1_pane_ParamLimits

0xdd59,	// (0x00072057) call5_swipe_1_pane

0xdd65,	// (0x00072063) call5_swipe_2_pane_ParamLimits

0xdd65,	// (0x00072063) call5_swipe_2_pane

0xdd7d,	// (0x0007207b) popup_call5_audio_first_window_ParamLimits

0xdd7d,	// (0x0007207b) popup_call5_audio_first_window

0x4ecf,	// (0x000691cd) call5_swipe_1_pane_g1_ParamLimits

0x4ecf,	// (0x000691cd) call5_swipe_1_pane_g1

0x2fef,	// (0x000672ed) call5_swipe_1_pane_g2_ParamLimits

0x2fef,	// (0x000672ed) call5_swipe_1_pane_g2

0x0001,

0xfcb5,	// (0x00073fb3) call5_swipe_1_pane_g_ParamLimits

0xfcb5,	// (0x00073fb3) call5_swipe_1_pane_g

0x2ffb,	// (0x000672f9) call5_swipe_1_pane_t1_ParamLimits

0x2ffb,	// (0x000672f9) call5_swipe_1_pane_t1

0x4ecf,	// (0x000691cd) call5_swipe_2_pane_g1_ParamLimits

0x4ecf,	// (0x000691cd) call5_swipe_2_pane_g1

0x3010,	// (0x0006730e) call5_swipe_2_pane_g2_ParamLimits

0x3010,	// (0x0006730e) call5_swipe_2_pane_g2

0x0001,

0xfcba,	// (0x00073fb8) call5_swipe_2_pane_g_ParamLimits

0xfcba,	// (0x00073fb8) call5_swipe_2_pane_g

0x301c,	// (0x0006731a) call5_swipe_2_pane_t1_ParamLimits

0x301c,	// (0x0006731a) call5_swipe_2_pane_t1

0x3031,	// (0x0006732f) sc_swipe_pane_g1_ParamLimits

0x3031,	// (0x0006732f) sc_swipe_pane_g1

0x303e,	// (0x0006733c) sc_swipe_pane_g2_ParamLimits

0x303e,	// (0x0006733c) sc_swipe_pane_g2

0x0001,

0xfcbf,	// (0x00073fbd) sc_swipe_pane_g_ParamLimits

0xfcbf,	// (0x00073fbd) sc_swipe_pane_g

0x304a,	// (0x00067348) sc_swipe_pane_t1_ParamLimits

0x304a,	// (0x00067348) sc_swipe_pane_t1

0x7673,	// (0x0006b971) main_cmail_launcher_pane

0xdd89,	// (0x00072087) aid_size_cell_cmail_l_ParamLimits

0xdd89,	// (0x00072087) aid_size_cell_cmail_l

0xdd99,	// (0x00072097) grid_cmail_l_pane_ParamLimits

0xdd99,	// (0x00072097) grid_cmail_l_pane

0xdda5,	// (0x000720a3) cell_cmail_l_pane_ParamLimits

0xdda5,	// (0x000720a3) cell_cmail_l_pane

0xddb7,	// (0x000720b5) cell_cmail_l_pane_g1_ParamLimits

0xddb7,	// (0x000720b5) cell_cmail_l_pane_g1

0xddc7,	// (0x000720c5) cell_cmail_l_pane_t1_ParamLimits

0xddc7,	// (0x000720c5) cell_cmail_l_pane_t1

0xdddd,	// (0x000720db) cell_cmail_l_pane_t2_ParamLimits

0xdddd,	// (0x000720db) cell_cmail_l_pane_t2

0x0001,

0xfcc4,	// (0x00073fc2) cell_cmail_l_pane_t_ParamLimits

0xfcc4,	// (0x00073fc2) cell_cmail_l_pane_t

0x223d,	// (0x0006653b) grid_highlight_pane_cp018_ParamLimits

0x223d,	// (0x0006653b) grid_highlight_pane_cp018

0x7771,	// (0x0006ba6f) main2_pane_ParamLimits

0x7771,	// (0x0006ba6f) main2_pane

0x084b,	// (0x00064b49) popup_sp_fs_action_menu_bg_pane_g1

0x0853,	// (0x00064b51) popup_sp_fs_action_menu_bg_pane_g2

0x085b,	// (0x00064b59) popup_sp_fs_action_menu_bg_pane_g3

0x0863,	// (0x00064b61) popup_sp_fs_action_menu_bg_pane_g4

0x086b,	// (0x00064b69) popup_sp_fs_action_menu_bg_pane_g5

0x0873,	// (0x00064b71) popup_sp_fs_action_menu_bg_pane_g6

0x087b,	// (0x00064b79) popup_sp_fs_action_menu_bg_pane_g7

0x0883,	// (0x00064b81) popup_sp_fs_action_menu_bg_pane_g8

0x088b,	// (0x00064b89) popup_sp_fs_action_menu_bg_pane_g9

0x0893,	// (0x00064b91) popup_sp_fs_action_menu_bg_pane_g10

0x0893,	// (0x00064b91) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0007346d) popup_sp_fs_action_menu_bg_pane_g

0x6437,	// (0x0006a735) list_medium_line_x2_t3_g3_g1_ParamLimits

0x6437,	// (0x0006a735) list_medium_line_x2_t3_g3_g1

0x8638,	// (0x0006c936) list_medium_line_x2_t3_g3_g2_ParamLimits

0x8638,	// (0x0006c936) list_medium_line_x2_t3_g3_g2

0x6443,	// (0x0006a741) list_medium_line_x2_t3_g3_g3_ParamLimits

0x6443,	// (0x0006a741) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0007351b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0007351b) list_medium_line_x2_t3_g3_g

0x644f,	// (0x0006a74d) list_medium_line_x2_t3_g3_t1_ParamLimits

0x644f,	// (0x0006a74d) list_medium_line_x2_t3_g3_t1

0x6464,	// (0x0006a762) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6464,	// (0x0006a762) list_medium_line_x2_t3_g3_t2

0x6476,	// (0x0006a774) list_medium_line_x2_t3_g3_t3_ParamLimits

0x6476,	// (0x0006a774) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x00073522) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x00073522) list_medium_line_x2_t3_g3_t

0x6437,	// (0x0006a735) list_medium_line_x2_t3_g2_g1_ParamLimits

0x6437,	// (0x0006a735) list_medium_line_x2_t3_g2_g1

0x6443,	// (0x0006a741) list_medium_line_x2_t3_g2_g2_ParamLimits

0x6443,	// (0x0006a741) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x00073529) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x00073529) list_medium_line_x2_t3_g2_g

0x648b,	// (0x0006a789) list_medium_line_x2_t3_g2_t1_ParamLimits

0x648b,	// (0x0006a789) list_medium_line_x2_t3_g2_t1

0x64a1,	// (0x0006a79f) list_medium_line_x2_t3_g2_t2_ParamLimits

0x64a1,	// (0x0006a79f) list_medium_line_x2_t3_g2_t2

0x6476,	// (0x0006a774) list_medium_line_x2_t3_g2_t3_ParamLimits

0x6476,	// (0x0006a774) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0007352e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0007352e) list_medium_line_x2_t3_g2_t

0x6437,	// (0x0006a735) list_medium_line_x2_t4_g4_g1_ParamLimits

0x6437,	// (0x0006a735) list_medium_line_x2_t4_g4_g1

0x8644,	// (0x0006c942) list_medium_line_x2_t4_g4_g2_ParamLimits

0x8644,	// (0x0006c942) list_medium_line_x2_t4_g4_g2

0x8638,	// (0x0006c936) list_medium_line_x2_t4_g4_g3_ParamLimits

0x8638,	// (0x0006c936) list_medium_line_x2_t4_g4_g3

0x64b3,	// (0x0006a7b1) list_medium_line_x2_t4_g4_g4_ParamLimits

0x64b3,	// (0x0006a7b1) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x00073535) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x00073535) list_medium_line_x2_t4_g4_g

0x64bf,	// (0x0006a7bd) list_medium_line_x2_t4_g4_t1_ParamLimits

0x64bf,	// (0x0006a7bd) list_medium_line_x2_t4_g4_t1

0x64d9,	// (0x0006a7d7) list_medium_line_x2_t4_g4_t2_ParamLimits

0x64d9,	// (0x0006a7d7) list_medium_line_x2_t4_g4_t2

0x64ee,	// (0x0006a7ec) list_medium_line_x2_t4_g4_t3_ParamLimits

0x64ee,	// (0x0006a7ec) list_medium_line_x2_t4_g4_t3

0x6503,	// (0x0006a801) list_medium_line_x2_t4_g4_t4_ParamLimits

0x6503,	// (0x0006a801) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0007353e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0007353e) list_medium_line_x2_t4_g4_t

0x6437,	// (0x0006a735) list_medium_line_x2_t2_g4_g1_ParamLimits

0x6437,	// (0x0006a735) list_medium_line_x2_t2_g4_g1

0x8644,	// (0x0006c942) list_medium_line_x2_t2_g4_g2_ParamLimits

0x8644,	// (0x0006c942) list_medium_line_x2_t2_g4_g2

0x8638,	// (0x0006c936) list_medium_line_x2_t2_g4_g3_ParamLimits

0x8638,	// (0x0006c936) list_medium_line_x2_t2_g4_g3

0x6443,	// (0x0006a741) list_medium_line_x2_t2_g4_g4_ParamLimits

0x6443,	// (0x0006a741) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x000735a5) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x000735a5) list_medium_line_x2_t2_g4_g

0x6515,	// (0x0006a813) list_medium_line_x2_t2_g4_t1_ParamLimits

0x6515,	// (0x0006a813) list_medium_line_x2_t2_g4_t1

0x6476,	// (0x0006a774) list_medium_line_x2_t2_g4_t2_ParamLimits

0x6476,	// (0x0006a774) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x000735ae) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x000735ae) list_medium_line_x2_t2_g4_t

0x6437,	// (0x0006a735) list_medium_line_x2_t2_g3_g1_ParamLimits

0x6437,	// (0x0006a735) list_medium_line_x2_t2_g3_g1

0x8638,	// (0x0006c936) list_medium_line_x2_t2_g3_g2_ParamLimits

0x8638,	// (0x0006c936) list_medium_line_x2_t2_g3_g2

0x6443,	// (0x0006a741) list_medium_line_x2_t2_g3_g3_ParamLimits

0x6443,	// (0x0006a741) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0007351b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0007351b) list_medium_line_x2_t2_g3_g

0x652a,	// (0x0006a828) list_medium_line_x2_t2_g3_t1_ParamLimits

0x652a,	// (0x0006a828) list_medium_line_x2_t2_g3_t1

0x6476,	// (0x0006a774) list_medium_line_x2_t2_g3_t2_ParamLimits

0x6476,	// (0x0006a774) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x000735b3) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x000735b3) list_medium_line_x2_t2_g3_t

0x962f,	// (0x0006d92d) main_sp_fs_list_pane_ParamLimits

0x962f,	// (0x0006d92d) main_sp_fs_list_pane

0x963c,	// (0x0006d93a) sp_fs_scroll_pane_ParamLimits

0x963c,	// (0x0006d93a) sp_fs_scroll_pane

0x653f,	// (0x0006a83d) list_medium_line_x2_t3_t1

0x654f,	// (0x0006a84d) list_medium_line_x2_t3_t2

0x655d,	// (0x0006a85b) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x000735fe) list_medium_line_x2_t3_t

0x656b,	// (0x0006a869) list_medium_line_x3_t4_t1

0x657b,	// (0x0006a879) list_medium_line_x3_t4_t2

0x6589,	// (0x0006a887) list_medium_line_x3_t4_t3

0x6597,	// (0x0006a895) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x00073605) list_medium_line_x3_t4_t

0x65a5,	// (0x0006a8a3) list_medium_line_x4_t5_t1

0x65b5,	// (0x0006a8b3) list_medium_line_x4_t5_t2

0x6589,	// (0x0006a887) list_medium_line_x4_t5_t3

0x65c3,	// (0x0006a8c1) list_medium_line_x4_t5_t4

0x6597,	// (0x0006a895) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0007360e) list_medium_line_x4_t5_t

0x6437,	// (0x0006a735) list_medium_line_t4_g4_g1_ParamLimits

0x6437,	// (0x0006a735) list_medium_line_t4_g4_g1

0x64b3,	// (0x0006a7b1) list_medium_line_t4_g4_g2_ParamLimits

0x64b3,	// (0x0006a7b1) list_medium_line_t4_g4_g2

0x65d1,	// (0x0006a8cf) list_medium_line_t4_g4_g3_ParamLimits

0x65d1,	// (0x0006a8cf) list_medium_line_t4_g4_g3

0x6443,	// (0x0006a741) list_medium_line_t4_g4_g4_ParamLimits

0x6443,	// (0x0006a741) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x00073619) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x00073619) list_medium_line_t4_g4_g

0x65dd,	// (0x0006a8db) list_medium_line_t4_g4_t1_ParamLimits

0x65dd,	// (0x0006a8db) list_medium_line_t4_g4_t1

0x65f2,	// (0x0006a8f0) list_medium_line_t4_g4_t2_ParamLimits

0x65f2,	// (0x0006a8f0) list_medium_line_t4_g4_t2

0x6608,	// (0x0006a906) list_medium_line_t4_g4_t3_ParamLimits

0x6608,	// (0x0006a906) list_medium_line_t4_g4_t3

0x661e,	// (0x0006a91c) list_medium_line_t4_g4_t4_ParamLimits

0x661e,	// (0x0006a91c) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x00073622) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x00073622) list_medium_line_t4_g4_t

0x9757,	// (0x0006da55) chi_dic_find_pane_g1

0xa442,	// (0x0006e740) main_tport_pane

0x685e,	// (0x0006ab5c) list_medium_line_plain_t1

0x686c,	// (0x0006ab6a) list_medium_line_t2_g2_g1_ParamLimits

0x686c,	// (0x0006ab6a) list_medium_line_t2_g2_g1

0xcc4b,	// (0x00070f49) list_medium_line_t2_g2_g2_ParamLimits

0xcc4b,	// (0x00070f49) list_medium_line_t2_g2_g2

0x0001,

0xf9fc,	// (0x00073cfa) list_medium_line_t2_g2_g_ParamLimits

0xf9fc,	// (0x00073cfa) list_medium_line_t2_g2_g

0x6878,	// (0x0006ab76) list_medium_line_t2_g2_t1_ParamLimits

0x6878,	// (0x0006ab76) list_medium_line_t2_g2_t1

0x6892,	// (0x0006ab90) list_medium_line_t2_g2_t2_ParamLimits

0x6892,	// (0x0006ab90) list_medium_line_t2_g2_t2

0x0001,

0xfa01,	// (0x00073cff) list_medium_line_t2_g2_t_ParamLimits

0xfa01,	// (0x00073cff) list_medium_line_t2_g2_t

0x6aa5,	// (0x0006ada3) aid_sp_fs_list_icon_a_sm

0xd105,	// (0x00071403) aid_sp_fs_list_icon_d

0x6aad,	// (0x0006adab) aid_sp_fs_text_primary

0xd10d,	// (0x0007140b) aid_sp_fs_text_secondary

0x2415,	// (0x00066713) list_medium_line

0x2415,	// (0x00066713) list_medium_line_g2

0x2415,	// (0x00066713) list_medium_line_g3

0x2415,	// (0x00066713) list_medium_line_plain

0x2415,	// (0x00066713) list_medium_line_plain_t2

0x2415,	// (0x00066713) list_medium_line_plain_t3

0x2415,	// (0x00066713) list_medium_line_right_icon

0x2415,	// (0x00066713) list_medium_line_right_iconx2

0x2415,	// (0x00066713) list_medium_line_t2

0x2415,	// (0x00066713) list_medium_line_t2_g2

0x2415,	// (0x00066713) list_medium_line_t2_g3

0x2415,	// (0x00066713) list_medium_line_t2_right_icon

0x2415,	// (0x00066713) list_medium_line_t2_right_iconx2

0x2415,	// (0x00066713) list_medium_line_t3

0x2415,	// (0x00066713) list_medium_line_t3_g2

0x2415,	// (0x00066713) list_medium_line_t3_g3

0x2415,	// (0x00066713) list_medium_line_t3_right_iconx2

0xd116,	// (0x00071414) list_medium_line_t4_g4

0xd11f,	// (0x0007141d) list_medium_line_x2

0xd11f,	// (0x0007141d) list_medium_line_x2_t2_g2

0xd11f,	// (0x0007141d) list_medium_line_x2_t2_g3

0xd11f,	// (0x0007141d) list_medium_line_x2_t2_g4

0xd11f,	// (0x0007141d) list_medium_line_x2_t3

0xd11f,	// (0x0007141d) list_medium_line_x2_t3_g2

0xd11f,	// (0x0007141d) list_medium_line_x2_t3_g3

0xd11f,	// (0x0007141d) list_medium_line_x2_t3_g4

0xd11f,	// (0x0007141d) list_medium_line_x2_t4_g2

0xd11f,	// (0x0007141d) list_medium_line_x2_t4_g4

0xd128,	// (0x00071426) list_medium_line_x3

0xd128,	// (0x00071426) list_medium_line_x3_t4

0xd128,	// (0x00071426) list_medium_line_x3_t4_g4

0xd116,	// (0x00071414) list_medium_line_x4_t4

0xd116,	// (0x00071414) list_medium_line_x4_t4_g7

0xd116,	// (0x00071414) list_medium_line_x4_t5

0x6ab6,	// (0x0006adb4) list_single_fs_dyc_pane_ParamLimits

0x6ab6,	// (0x0006adb4) list_single_fs_dyc_pane

0x6437,	// (0x0006a735) list_medium_line_x4_t4_g7_g1_ParamLimits

0x6437,	// (0x0006a735) list_medium_line_x4_t4_g7_g1

0x6aee,	// (0x0006adec) list_medium_line_x4_t4_g7_g2_ParamLimits

0x6aee,	// (0x0006adec) list_medium_line_x4_t4_g7_g2

0xd784,	// (0x00071a82) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd784,	// (0x00071a82) list_medium_line_x4_t4_g7_g3

0xd793,	// (0x00071a91) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd793,	// (0x00071a91) list_medium_line_x4_t4_g7_g4

0x6afa,	// (0x0006adf8) list_medium_line_x4_t4_g7_g5_ParamLimits

0x6afa,	// (0x0006adf8) list_medium_line_x4_t4_g7_g5

0x6b09,	// (0x0006ae07) list_medium_line_x4_t4_g7_g6_ParamLimits

0x6b09,	// (0x0006ae07) list_medium_line_x4_t4_g7_g6

0x6b18,	// (0x0006ae16) list_medium_line_x4_t4_g7_g7_ParamLimits

0x6b18,	// (0x0006ae16) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbcc,	// (0x00073eca) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbcc,	// (0x00073eca) list_medium_line_x4_t4_g7_g

0x6b24,	// (0x0006ae22) list_medium_line_x4_t4_g7_t1_ParamLimits

0x6b24,	// (0x0006ae22) list_medium_line_x4_t4_g7_t1

0x6b39,	// (0x0006ae37) list_medium_line_x4_t4_g7_t2_ParamLimits

0x6b39,	// (0x0006ae37) list_medium_line_x4_t4_g7_t2

0x6b4e,	// (0x0006ae4c) list_medium_line_x4_t4_g7_t3_ParamLimits

0x6b4e,	// (0x0006ae4c) list_medium_line_x4_t4_g7_t3

0x6b63,	// (0x0006ae61) list_medium_line_x4_t4_g7_t4_ParamLimits

0x6b63,	// (0x0006ae61) list_medium_line_x4_t4_g7_t4

0x6b75,	// (0x0006ae73) list_medium_line_x4_t4_g7_t5_ParamLimits

0x6b75,	// (0x0006ae73) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdb,	// (0x00073ed9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdb,	// (0x00073ed9) list_medium_line_x4_t4_g7_t

0x6b87,	// (0x0006ae85) list_single_dyc_row_pane_ParamLimits

0x6b87,	// (0x0006ae85) list_single_dyc_row_pane

0xdd41,	// (0x0007203f) call5_gesture_pane_ParamLimits

0xdd41,	// (0x0007203f) call5_gesture_pane

0xdd71,	// (0x0007206f) call5_windows_pane_ParamLimits

0xdd71,	// (0x0007206f) call5_windows_pane

0xddf5,	// (0x000720f3) call5_swipe_1_pane_cp_ParamLimits

0xddf5,	// (0x000720f3) call5_swipe_1_pane_cp

0xde01,	// (0x000720ff) call5_swipe_2_pane_cp_ParamLimits

0xde01,	// (0x000720ff) call5_swipe_2_pane_cp

0x09b7,	// (0x00064cb5) call5_image_pane_cp

0xde0d,	// (0x0007210b) popup_call5_audio_first_window_cp_ParamLimits

0xde0d,	// (0x0007210b) popup_call5_audio_first_window_cp

0x3031,	// (0x0006732f) call5_swipe_1_pane_g1_cp_ParamLimits

0x3031,	// (0x0006732f) call5_swipe_1_pane_g1_cp

0x305f,	// (0x0006735d) call5_swipe_1_pane_g2_cp

0x304a,	// (0x00067348) call5_swipe_1_pane_t1_cp_ParamLimits

0x304a,	// (0x00067348) call5_swipe_1_pane_t1_cp

0x3031,	// (0x0006732f) call5_swipe_2_pane_g1_cp_ParamLimits

0x3031,	// (0x0006732f) call5_swipe_2_pane_g1_cp

0x3067,	// (0x00067365) call5_swipe_2_pane_g2_cp

0x306f,	// (0x0006736d) call5_swipe_2_pane_t1_cp_ParamLimits

0x306f,	// (0x0006736d) call5_swipe_2_pane_t1_cp

0x223d,	// (0x0006653b) main_sp_fs_email_pane

0x3084,	// (0x00067382) main_sp_fs_listscroll_pane_te

0x6bf9,	// (0x0006aef7) popup_sp_fs_action_menu_pane_ParamLimits

0x6bf9,	// (0x0006aef7) popup_sp_fs_action_menu_pane

0x4ca0,	// (0x00068f9e) bg_sp_fs_ctrlbar_pane_g1

0x522c,	// (0x0006952a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x523e,	// (0x0006953c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x5235,	// (0x00069533) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x4ca0,	// (0x00068f9e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc9,	// (0x00073fc7) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x4a8d,	// (0x00068d8b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x4a8d,	// (0x00068d8b) bg_sp_fs_ctrlbar_ddmenu_pane

0x308d,	// (0x0006738b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x308d,	// (0x0006738b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3099,	// (0x00067397) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3099,	// (0x00067397) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd2,	// (0x00073fd0) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd2,	// (0x00073fd0) main_sp_fs_ctrlbar_ddmenu_pane_g

0x30a5,	// (0x000673a3) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x30a5,	// (0x000673a3) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xde19,	// (0x00072117) list_medium_line_t2_right_icon_g1

0x6c2d,	// (0x0006af2b) list_medium_line_t2_right_icon_t1

0x6c3c,	// (0x0006af3a) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd7,	// (0x00073fd5) list_medium_line_t2_right_icon_t

0x488e,	// (0x00068b8c) bg_sp_fs_ctrlbar_pane_ParamLimits

0x488e,	// (0x00068b8c) bg_sp_fs_ctrlbar_pane

0xde76,	// (0x00072174) main_sp_fs_ctrlbar_button_pane_cp01

0xde7e,	// (0x0007217c) main_sp_fs_ctrlbar_ddmenu_pane

0x30f7,	// (0x000673f5) main_sp_fs_ctrlbar_pane_g1

0x3103,	// (0x00067401) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcdc,	// (0x00073fda) main_sp_fs_ctrlbar_pane_g

0xdeb8,	// (0x000721b6) main_sp_fs_ctrlbar_pane_t1

0xdf00,	// (0x000721fe) main_sp_fs_ctrlbar_pane

0xdf14,	// (0x00072212) main_sp_fs_listscroll_pane_te_cp01

0x6c4a,	// (0x0006af48) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6c4a,	// (0x0006af48) popup_sp_fs_action_menu_pane_cp01

0x223d,	// (0x0006653b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x223d,	// (0x0006653b) bg_sp_fs_highlight_list_pane_cp01

0x6c74,	// (0x0006af72) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x6c74,	// (0x0006af72) sp_fs_action_menu_list_gene_pane_g1

0x312a,	// (0x00067428) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x312a,	// (0x00067428) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x00073fe8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x00073fe8) sp_fs_action_menu_list_gene_pane_g

0x6c83,	// (0x0006af81) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x6c83,	// (0x0006af81) sp_fs_action_menu_list_gene_pane_t1

0x6c9b,	// (0x0006af99) sp_fs_action_menu_list_gene_pane_ParamLimits

0x6c9b,	// (0x0006af99) sp_fs_action_menu_list_gene_pane

0x3137,	// (0x00067435) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3137,	// (0x00067435) popup_sp_fs_action_menu_bg_pane

0x6cba,	// (0x0006afb8) sp_fs_action_menu_list_pane_ParamLimits

0x6cba,	// (0x0006afb8) sp_fs_action_menu_list_pane

0x3145,	// (0x00067443) sp_fs_scroll_pane_cp01_ParamLimits

0x3145,	// (0x00067443) sp_fs_scroll_pane_cp01

0x6cda,	// (0x0006afd8) list_medium_line_plain_t2_t1

0x6ce9,	// (0x0006afe7) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x00073fed) list_medium_line_plain_t2_t

0x6cf7,	// (0x0006aff5) list_medium_line_plain_t3_t1

0x6d07,	// (0x0006b005) list_medium_line_plain_t3_t2

0x6d15,	// (0x0006b013) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x00073ff2) list_medium_line_plain_t3_t

0x6437,	// (0x0006a735) list_medium_line_x2_t2_g2_g1_ParamLimits

0x6437,	// (0x0006a735) list_medium_line_x2_t2_g2_g1

0x6443,	// (0x0006a741) list_medium_line_x2_t2_g2_g2_ParamLimits

0x6443,	// (0x0006a741) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x00073529) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x00073529) list_medium_line_x2_t2_g2_g

0x65dd,	// (0x0006a8db) list_medium_line_x2_t2_g2_t1_ParamLimits

0x65dd,	// (0x0006a8db) list_medium_line_x2_t2_g2_t1

0x6476,	// (0x0006a774) list_medium_line_x2_t2_g2_t2_ParamLimits

0x6476,	// (0x0006a774) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x00073ff9) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x00073ff9) list_medium_line_x2_t2_g2_t

0x6437,	// (0x0006a735) list_medium_line_x2_t4_g2_g1_ParamLimits

0x6437,	// (0x0006a735) list_medium_line_x2_t4_g2_g1

0x6d23,	// (0x0006b021) list_medium_line_x2_t4_g2_g2_ParamLimits

0x6d23,	// (0x0006b021) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x00073ffe) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x00073ffe) list_medium_line_x2_t4_g2_g

0x6d34,	// (0x0006b032) list_medium_line_x2_t4_g2_t1_ParamLimits

0x6d34,	// (0x0006b032) list_medium_line_x2_t4_g2_t1

0x6d4e,	// (0x0006b04c) list_medium_line_x2_t4_g2_t2_ParamLimits

0x6d4e,	// (0x0006b04c) list_medium_line_x2_t4_g2_t2

0x6d63,	// (0x0006b061) list_medium_line_x2_t4_g2_t3_ParamLimits

0x6d63,	// (0x0006b061) list_medium_line_x2_t4_g2_t3

0x6476,	// (0x0006a774) list_medium_line_x2_t4_g2_t4_ParamLimits

0x6476,	// (0x0006a774) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x00074003) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x00074003) list_medium_line_x2_t4_g2_t

0xdf25,	// (0x00072223) list_medium_line_t3_right_iconx2_g1

0xde19,	// (0x00072117) list_medium_line_t3_right_iconx2_g2

0x6d78,	// (0x0006b076) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0007400c) list_medium_line_t3_right_iconx2_g

0x6d80,	// (0x0006b07e) list_medium_line_t3_right_iconx2_t1

0x6d90,	// (0x0006b08e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x00074013) list_medium_line_t3_right_iconx2_t

0x6437,	// (0x0006a735) list_medium_line_x3_t4_g4_g1_ParamLimits

0x6437,	// (0x0006a735) list_medium_line_x3_t4_g4_g1

0x8638,	// (0x0006c936) list_medium_line_x3_t4_g4_g2_ParamLimits

0x8638,	// (0x0006c936) list_medium_line_x3_t4_g4_g2

0x64b3,	// (0x0006a7b1) list_medium_line_x3_t4_g4_g3_ParamLimits

0x64b3,	// (0x0006a7b1) list_medium_line_x3_t4_g4_g3

0xdf2d,	// (0x0007222b) list_medium_line_x3_t4_g4_g4_ParamLimits

0xdf2d,	// (0x0007222b) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x00074018) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x00074018) list_medium_line_x3_t4_g4_g

0x6d9e,	// (0x0006b09c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x6d9e,	// (0x0006b09c) list_medium_line_x3_t4_g4_t1

0x6db5,	// (0x0006b0b3) list_medium_line_x3_t4_g4_t2_ParamLimits

0x6db5,	// (0x0006b0b3) list_medium_line_x3_t4_g4_t2

0x6dca,	// (0x0006b0c8) list_medium_line_x3_t4_g4_t3_ParamLimits

0x6dca,	// (0x0006b0c8) list_medium_line_x3_t4_g4_t3

0x6ddf,	// (0x0006b0dd) list_medium_line_x3_t4_g4_t4_ParamLimits

0x6ddf,	// (0x0006b0dd) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x00074021) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x00074021) list_medium_line_x3_t4_g4_t

0x6dfc,	// (0x0006b0fa) list_single_dyc_row_text_pane_t1_ParamLimits

0x6dfc,	// (0x0006b0fa) list_single_dyc_row_text_pane_t1

0x6e33,	// (0x0006b131) list_single_dyc_row_text_pane_t2_ParamLimits

0x6e33,	// (0x0006b131) list_single_dyc_row_text_pane_t2

0x6ea7,	// (0x0006b1a5) list_single_dyc_row_text_pane_t3_ParamLimits

0x6ea7,	// (0x0006b1a5) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0007402a) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0007402a) list_single_dyc_row_text_pane_t

0x6f77,	// (0x0006b275) list_single_dyc_row_pane_g1_ParamLimits

0x6f77,	// (0x0006b275) list_single_dyc_row_pane_g1

0x6f83,	// (0x0006b281) list_single_dyc_row_pane_g2_ParamLimits

0x6f83,	// (0x0006b281) list_single_dyc_row_pane_g2

0x6f8f,	// (0x0006b28d) list_single_dyc_row_pane_g3_ParamLimits

0x6f8f,	// (0x0006b28d) list_single_dyc_row_pane_g3

0x6f9b,	// (0x0006b299) list_single_dyc_row_pane_g4_ParamLimits

0x6f9b,	// (0x0006b299) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x00074037) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x00074037) list_single_dyc_row_pane_g

0x6fa7,	// (0x0006b2a5) list_single_dyc_row_text_pane_ParamLimits

0x6fa7,	// (0x0006b2a5) list_single_dyc_row_text_pane

0x7673,	// (0x0006b971) bg_sp_fs_scroll_pane

0x322e,	// (0x0006752c) thumb_sp_fs_scroll_pane

0x686c,	// (0x0006ab6a) list_medium_line_g1_ParamLimits

0x686c,	// (0x0006ab6a) list_medium_line_g1

0x6fc6,	// (0x0006b2c4) list_medium_line_t1_ParamLimits

0x6fc6,	// (0x0006b2c4) list_medium_line_t1

0x6437,	// (0x0006a735) list_medium_line_x2_g1_ParamLimits

0x6437,	// (0x0006a735) list_medium_line_x2_g1

0x8638,	// (0x0006c936) list_medium_line_x2_g2_ParamLimits

0x8638,	// (0x0006c936) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x00074040) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x00074040) list_medium_line_x2_g

0x6fdb,	// (0x0006b2d9) list_medium_line_x2_t1_ParamLimits

0x6fdb,	// (0x0006b2d9) list_medium_line_x2_t1

0x6437,	// (0x0006a735) list_medium_line_x3_g1_ParamLimits

0x6437,	// (0x0006a735) list_medium_line_x3_g1

0x8638,	// (0x0006c936) list_medium_line_x3_g2_ParamLimits

0x8638,	// (0x0006c936) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x00074040) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x00074040) list_medium_line_x3_g

0x6fdb,	// (0x0006b2d9) list_medium_line_x3_t1_ParamLimits

0x6fdb,	// (0x0006b2d9) list_medium_line_x3_t1

0x324d,	// (0x0006754b) thumb_sp_fs_scroll_pane_g1

0x3256,	// (0x00067554) thumb_sp_fs_scroll_pane_g2

0x325f,	// (0x0006755d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00074045) thumb_sp_fs_scroll_pane_g

0x324d,	// (0x0006754b) bg_sp_fs_scroll_pane_g1

0x3256,	// (0x00067554) bg_sp_fs_scroll_pane_g2

0x325f,	// (0x0006755d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00074045) bg_sp_fs_scroll_pane_g

0x6437,	// (0x0006a735) list_medium_line_x2_t3_g4_g1_ParamLimits

0x6437,	// (0x0006a735) list_medium_line_x2_t3_g4_g1

0x8644,	// (0x0006c942) list_medium_line_x2_t3_g4_g2_ParamLimits

0x8644,	// (0x0006c942) list_medium_line_x2_t3_g4_g2

0x8638,	// (0x0006c936) list_medium_line_x2_t3_g4_g3_ParamLimits

0x8638,	// (0x0006c936) list_medium_line_x2_t3_g4_g3

0x6443,	// (0x0006a741) list_medium_line_x2_t3_g4_g4_ParamLimits

0x6443,	// (0x0006a741) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x000735a5) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x000735a5) list_medium_line_x2_t3_g4_g

0x6ff1,	// (0x0006b2ef) list_medium_line_x2_t3_g4_t1_ParamLimits

0x6ff1,	// (0x0006b2ef) list_medium_line_x2_t3_g4_t1

0x7007,	// (0x0006b305) list_medium_line_x2_t3_g4_t2_ParamLimits

0x7007,	// (0x0006b305) list_medium_line_x2_t3_g4_t2

0x6476,	// (0x0006a774) list_medium_line_x2_t3_g4_t3_ParamLimits

0x6476,	// (0x0006a774) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0007404c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0007404c) list_medium_line_x2_t3_g4_t

0x686c,	// (0x0006ab6a) list_medium_line_g2_g1_ParamLimits

0x686c,	// (0x0006ab6a) list_medium_line_g2_g1

0xcc4b,	// (0x00070f49) list_medium_line_g2_g2_ParamLimits

0xcc4b,	// (0x00070f49) list_medium_line_g2_g2

0x0001,

0xf9fc,	// (0x00073cfa) list_medium_line_g2_g_ParamLimits

0xf9fc,	// (0x00073cfa) list_medium_line_g2_g

0x7020,	// (0x0006b31e) list_medium_line_g2_t1_ParamLimits

0x7020,	// (0x0006b31e) list_medium_line_g2_t1

0x686c,	// (0x0006ab6a) list_medium_line_t3_g2_g1_ParamLimits

0x686c,	// (0x0006ab6a) list_medium_line_t3_g2_g1

0xcc4b,	// (0x00070f49) list_medium_line_t3_g2_g2_ParamLimits

0xcc4b,	// (0x00070f49) list_medium_line_t3_g2_g2

0x0001,

0xf9fc,	// (0x00073cfa) list_medium_line_t3_g2_g_ParamLimits

0xf9fc,	// (0x00073cfa) list_medium_line_t3_g2_g

0x7035,	// (0x0006b333) list_medium_line_t3_g2_t1_ParamLimits

0x7035,	// (0x0006b333) list_medium_line_t3_g2_t1

0x704f,	// (0x0006b34d) list_medium_line_t3_g2_t2_ParamLimits

0x704f,	// (0x0006b34d) list_medium_line_t3_g2_t2

0x7064,	// (0x0006b362) list_medium_line_t3_g2_t3_ParamLimits

0x7064,	// (0x0006b362) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x00074053) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x00074053) list_medium_line_t3_g2_t

0xde19,	// (0x00072117) list_medium_line_right_icon_g1

0x707a,	// (0x0006b378) list_medium_line_right_icon_t1

0x686c,	// (0x0006ab6a) list_medium_line_t2_g1_ParamLimits

0x686c,	// (0x0006ab6a) list_medium_line_t2_g1

0x7088,	// (0x0006b386) list_medium_line_t2_t1_ParamLimits

0x7088,	// (0x0006b386) list_medium_line_t2_t1

0x70a2,	// (0x0006b3a0) list_medium_line_t2_t2_ParamLimits

0x70a2,	// (0x0006b3a0) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0007405a) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0007405a) list_medium_line_t2_t

0x686c,	// (0x0006ab6a) list_medium_line_t3_g1_ParamLimits

0x686c,	// (0x0006ab6a) list_medium_line_t3_g1

0x70b7,	// (0x0006b3b5) list_medium_line_t3_t1_ParamLimits

0x70b7,	// (0x0006b3b5) list_medium_line_t3_t1

0x70d1,	// (0x0006b3cf) list_medium_line_t3_t2_ParamLimits

0x70d1,	// (0x0006b3cf) list_medium_line_t3_t2

0x70e6,	// (0x0006b3e4) list_medium_line_t3_t3_ParamLimits

0x70e6,	// (0x0006b3e4) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0007405f) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0007405f) list_medium_line_t3_t

0x686c,	// (0x0006ab6a) list_medium_line_g3_g1_ParamLimits

0x686c,	// (0x0006ab6a) list_medium_line_g3_g1

0xdf39,	// (0x00072237) list_medium_line_g3_g2_ParamLimits

0xdf39,	// (0x00072237) list_medium_line_g3_g2

0xcc4b,	// (0x00070f49) list_medium_line_g3_g3_ParamLimits

0xcc4b,	// (0x00070f49) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x00074066) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x00074066) list_medium_line_g3_g

0x70fb,	// (0x0006b3f9) list_medium_line_g3_t1_ParamLimits

0x70fb,	// (0x0006b3f9) list_medium_line_g3_t1

0x686c,	// (0x0006ab6a) list_medium_line_t2_g3_g1_ParamLimits

0x686c,	// (0x0006ab6a) list_medium_line_t2_g3_g1

0xdf39,	// (0x00072237) list_medium_line_t2_g3_g2_ParamLimits

0xdf39,	// (0x00072237) list_medium_line_t2_g3_g2

0xcc4b,	// (0x00070f49) list_medium_line_t2_g3_g3_ParamLimits

0xcc4b,	// (0x00070f49) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x00074066) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x00074066) list_medium_line_t2_g3_g

0x7110,	// (0x0006b40e) list_medium_line_t2_g3_t1_ParamLimits

0x7110,	// (0x0006b40e) list_medium_line_t2_g3_t1

0x7127,	// (0x0006b425) list_medium_line_t2_g3_t2_ParamLimits

0x7127,	// (0x0006b425) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0007406d) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0007406d) list_medium_line_t2_g3_t

0x686c,	// (0x0006ab6a) list_medium_line_t3_g3_g1_ParamLimits

0x686c,	// (0x0006ab6a) list_medium_line_t3_g3_g1

0xdf39,	// (0x00072237) list_medium_line_t3_g3_g2_ParamLimits

0xdf39,	// (0x00072237) list_medium_line_t3_g3_g2

0xcc4b,	// (0x00070f49) list_medium_line_t3_g3_g3_ParamLimits

0xcc4b,	// (0x00070f49) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x00074066) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x00074066) list_medium_line_t3_g3_g

0x713c,	// (0x0006b43a) list_medium_line_t3_g3_t1_ParamLimits

0x713c,	// (0x0006b43a) list_medium_line_t3_g3_t1

0x7150,	// (0x0006b44e) list_medium_line_t3_g3_t2_ParamLimits

0x7150,	// (0x0006b44e) list_medium_line_t3_g3_t2

0x7162,	// (0x0006b460) list_medium_line_t3_g3_t3_ParamLimits

0x7162,	// (0x0006b460) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x00074072) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x00074072) list_medium_line_t3_g3_t

0xdf25,	// (0x00072223) list_medium_line_right_iconx2_g1

0xde19,	// (0x00072117) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00074079) list_medium_line_right_iconx2_g

0xdf45,	// (0x00072243) list_medium_line_right_iconx2_t1

0xdf25,	// (0x00072223) list_medium_line_t2_right_iconx2_g1

0xde19,	// (0x00072117) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00074079) list_medium_line_t2_right_iconx2_g

0x7174,	// (0x0006b472) list_medium_line_t2_right_iconx2_t1

0x7184,	// (0x0006b482) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0007407e) list_medium_line_t2_right_iconx2_t

0x7192,	// (0x0006b490) list_medium_line_x4_t4_t1

0x71a0,	// (0x0006b49e) list_medium_line_x4_t4_t2

0x71ae,	// (0x0006b4ac) list_medium_line_x4_t4_t3

0x71bc,	// (0x0006b4ba) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x00074083) list_medium_line_x4_t4_t

0xdf77,	// (0x00072275) tport_appsw_pane_ParamLimits

0xdf77,	// (0x00072275) tport_appsw_pane

0xdf83,	// (0x00072281) tport_contact_pane_ParamLimits

0xdf83,	// (0x00072281) tport_contact_pane

0xdf91,	// (0x0007228f) tport_listscroll_pane_ParamLimits

0xdf91,	// (0x0007228f) tport_listscroll_pane

0xdf9f,	// (0x0007229d) cell_tport_appsw_pane_ParamLimits

0xdf9f,	// (0x0007229d) cell_tport_appsw_pane

0x4f34,	// (0x00069232) tport_appsw_pane_g1_ParamLimits

0x4f34,	// (0x00069232) tport_appsw_pane_g1

0x3276,	// (0x00067574) tport_contact_pane_g1

0x327f,	// (0x0006757d) tport_contact_pane_t1

0x328d,	// (0x0006758b) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0007408c) tport_contact_pane_t

0x329b,	// (0x00067599) list_tport_pane

0x08a5,	// (0x00064ba3) scroll_pane_cp_030

0x32ac,	// (0x000675aa) cell_tport_appsw_pane_g1

0x32bc,	// (0x000675ba) cell_tport_appsw_pane_t1

0x32ca,	// (0x000675c8) grid_highlight_pane_cp019

0xdfc6,	// (0x000722c4) list_tport_double_graphic_pane_ParamLimits

0xdfc6,	// (0x000722c4) list_tport_double_graphic_pane

0x223d,	// (0x0006653b) list_highlight_pane_cp023_ParamLimits

0x223d,	// (0x0006653b) list_highlight_pane_cp023

0xdfd3,	// (0x000722d1) list_tport_double_graphic_pane_g1_ParamLimits

0xdfd3,	// (0x000722d1) list_tport_double_graphic_pane_g1

0xdfe0,	// (0x000722de) list_tport_double_graphic_pane_t1_ParamLimits

0xdfe0,	// (0x000722de) list_tport_double_graphic_pane_t1

0xdff5,	// (0x000722f3) list_tport_double_graphic_pane_t2_ParamLimits

0xdff5,	// (0x000722f3) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x00074098) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x00074098) list_tport_double_graphic_pane_t

0x7673,	// (0x0006b971) main_cale_note_pane

0xc4c6,	// (0x000707c4) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xc4c6,	// (0x000707c4) cell_vitu2_function_top_wide_pane_cp01

0xdaae,	// (0x00071dac) wait_bar_pane_cp05_ParamLimits

0x223d,	// (0x0006653b) listscroll_cmail_pane

0x32d2,	// (0x000675d0) list_cmail_pane

0xe007,	// (0x00072305) list_cmail_body_pane

0xe007,	// (0x00072305) list_single_cmail_header_caption_pane

0xe020,	// (0x0007231e) list_single_cmail_header_detail_pane_ParamLimits

0xe020,	// (0x0007231e) list_single_cmail_header_detail_pane

0x32ee,	// (0x000675ec) list_single_cmail_header_caption_pane_t1

0x71ca,	// (0x0006b4c8) list_single_cmail_header_detail_pane_g1_ParamLimits

0x71ca,	// (0x0006b4c8) list_single_cmail_header_detail_pane_g1

0xe04b,	// (0x00072349) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe04b,	// (0x00072349) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0007409d) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0007409d) list_single_cmail_header_detail_pane_g

0x71e0,	// (0x0006b4de) list_single_cmail_header_detail_pane_t1_ParamLimits

0x71e0,	// (0x0006b4de) list_single_cmail_header_detail_pane_t1

0x7240,	// (0x0006b53e) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7240,	// (0x0006b53e) list_single_cmail_header_editor_pane_bg

0x3359,	// (0x00067657) list_cmail_body_pane_g1

0x3362,	// (0x00067660) list_cmail_body_pane_t1

0x5667,	// (0x00069965) list_single_cmail_header_editor_pane_bg_g1

0x0c5f,	// (0x00064f5d) list_single_cmail_header_editor_pane_bg_g1_copy1

0x5677,	// (0x00069975) list_single_cmail_header_editor_pane_bg_g1_copy2

0x566f,	// (0x0006996d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xee8e,	// (0x0007318c) list_single_cmail_header_editor_pane_bg_g1_copy4

0x5697,	// (0x00069995) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x5687,	// (0x00069985) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x568f,	// (0x0006998d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0c3f,	// (0x00064f3d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe057,	// (0x00072355) calenote_gesture_pane_ParamLimits

0xe057,	// (0x00072355) calenote_gesture_pane

0xe06f,	// (0x0007236d) calenote_window_pane_ParamLimits

0xe06f,	// (0x0007236d) calenote_window_pane

0x3370,	// (0x0006766e) popup_note_window_cp01

0xe087,	// (0x00072385) calenote_swipe_1_pane_ParamLimits

0xe087,	// (0x00072385) calenote_swipe_1_pane

0xde01,	// (0x000720ff) calenote_swipe_2_pane_ParamLimits

0xde01,	// (0x000720ff) calenote_swipe_2_pane

0x3031,	// (0x0006732f) calenote_swipe_1_pane_g1_ParamLimits

0x3031,	// (0x0006732f) calenote_swipe_1_pane_g1

0x303e,	// (0x0006733c) calenote_swipe_1_pane_g2_ParamLimits

0x303e,	// (0x0006733c) calenote_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x00073fbd) calenote_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x00073fbd) calenote_swipe_1_pane_g

0x3382,	// (0x00067680) calenote_swipe_1_pane_t1_ParamLimits

0x3382,	// (0x00067680) calenote_swipe_1_pane_t1

0x3031,	// (0x0006732f) calenote_swipe_2_pane_g1_ParamLimits

0x3031,	// (0x0006732f) calenote_swipe_2_pane_g1

0x33a1,	// (0x0006769f) calenote_swipe_2_pane_g2_ParamLimits

0x33a1,	// (0x0006769f) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000740a9) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000740a9) calenote_swipe_2_pane_g

0x33ad,	// (0x000676ab) calenote_swipe_2_pane_t1_ParamLimits

0x33ad,	// (0x000676ab) calenote_swipe_2_pane_t1

0x7673,	// (0x0006b971) main_mup_navstr_pane

0xb355,	// (0x0006f653) main_mup3_pane_t7_ParamLimits

0xb355,	// (0x0006f653) main_mup3_pane_t7

0xbcd6,	// (0x0006ffd4) main_mp4_pane_g6_ParamLimits

0xbcd6,	// (0x0006ffd4) main_mp4_pane_g6

0xc022,	// (0x00070320) main_image3_pane_t4_ParamLimits

0xc022,	// (0x00070320) main_image3_pane_t4

0xe09a,	// (0x00072398) popup_navstr_preview_pane_ParamLimits

0xe09a,	// (0x00072398) popup_navstr_preview_pane

0xe0a6,	// (0x000723a4) scroll_navstr_pane_ParamLimits

0xe0a6,	// (0x000723a4) scroll_navstr_pane

0x7673,	// (0x0006b971) bg_popup_preview_window_pane_cp04

0x33d4,	// (0x000676d2) popup_navstr_preview_pane_t1

0xe0b2,	// (0x000723b0) scroll_navstr_pane_g1_ParamLimits

0xe0b2,	// (0x000723b0) scroll_navstr_pane_g1

0xe0bf,	// (0x000723bd) scroll_navstr_pane_t1_ParamLimits

0xe0bf,	// (0x000723bd) scroll_navstr_pane_t1

0x3379,	// (0x00067677) bg_button_pane_cp014

0x3379,	// (0x00067677) bg_button_pane_cp030

0x6bb0,	// (0x0006aeae) list_double_fisheye_pane_g4_ParamLimits

0x6bb0,	// (0x0006aeae) list_double_fisheye_pane_g4

0xdd30,	// (0x0007202e) list_double_fisheye_pane_g5_ParamLimits

0xdd30,	// (0x0007202e) list_double_fisheye_pane_g5

0x32e2,	// (0x000675e0) sp_fs_scroll_pane_cp03

0x30f7,	// (0x000673f5) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3103,	// (0x00067401) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcdc,	// (0x00073fda) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdeb8,	// (0x000721b6) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x32da,	// (0x000675d8) sp_fs_scroll_pane_cp02

0x08ff,	// (0x00064bfd) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x08ff,	// (0x00064bfd) popup_sp_fs_calendar_preview_list_single_pane

0x7673,	// (0x0006b971) main_cam6_pano_pane

0x223d,	// (0x0006653b) main_mup3_pane_ParamLimits

0x7673,	// (0x0006b971) main_phacti_pane

0xd9a1,	// (0x00071c9f) bg_button_pane_cp11

0xd9b9,	// (0x00071cb7) main_mobtv_info_pane_g2_ParamLimits

0xd9b9,	// (0x00071cb7) main_mobtv_info_pane_g2

0x0001,

0xfc3c,	// (0x00073f3a) main_mobtv_info_pane_g_ParamLimits

0xfc3c,	// (0x00073f3a) main_mobtv_info_pane_g

0xdb45,	// (0x00071e43) sc_clock_pane_t5_ParamLimits

0xdb45,	// (0x00071e43) sc_clock_pane_t5

0xdbd2,	// (0x00071ed0) main_radioblah_pane_g1_ParamLimits

0x2ee5,	// (0x000671e3) main_radioblah_pane_t3_ParamLimits

0x2ee5,	// (0x000671e3) main_radioblah_pane_t3

0x2efd,	// (0x000671fb) main_radioblah_pane_t4_ParamLimits

0x2efd,	// (0x000671fb) main_radioblah_pane_t4

0xdbf0,	// (0x00071eee) main_radioblah_text_pane_ParamLimits

0xdbf0,	// (0x00071eee) main_radioblah_text_pane

0xdbfd,	// (0x00071efb) main_radioblah_info_pane_g1_ParamLimits

0xdc8a,	// (0x00071f88) main_radioblah_info_pane_t4_ParamLimits

0xdc8a,	// (0x00071f88) main_radioblah_info_pane_t4

0x223d,	// (0x0006653b) main_sp_fs_calendar_pane

0xe0d1,	// (0x000723cf) main_phacti_pane_g1

0xe0d9,	// (0x000723d7) phacti_note_pane_ParamLimits

0xe0d9,	// (0x000723d7) phacti_note_pane

0x33eb,	// (0x000676e9) phacti_term_pane_ParamLimits

0x33eb,	// (0x000676e9) phacti_term_pane

0x3400,	// (0x000676fe) phacti_note_pane_t1_ParamLimits

0x3400,	// (0x000676fe) phacti_note_pane_t1

0x7257,	// (0x0006b555) phacti_term_pane_g1

0x725f,	// (0x0006b55d) phacti_term_pane_t1_ParamLimits

0x725f,	// (0x0006b55d) phacti_term_pane_t1

0x3449,	// (0x00067747) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3451,	// (0x0006774f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000740b3) popup_sp_fs_calendar_preview_list_single_pane_g

0x3459,	// (0x00067757) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3459,	// (0x00067757) popup_sp_fs_calendar_preview_list_single_pane_t1

0x346f,	// (0x0006776d) aid_popup_sp_fs_bg_corner_pane

0x4ca0,	// (0x00068f9e) popup_sp_fs_calendar_preview_bg_pane_g1

0x7673,	// (0x0006b971) popup_sp_fs_calendar_preview_bg_pane

0x3477,	// (0x00067775) popup_sp_fs_calendar_preview_list_pane

0x488e,	// (0x00068b8c) bg_main_sp_fs_cale_pane_ParamLimits

0x488e,	// (0x00068b8c) bg_main_sp_fs_cale_pane

0x7289,	// (0x0006b587) listscroll_cale_mrui_pane_ParamLimits

0x7289,	// (0x0006b587) listscroll_cale_mrui_pane

0x729e,	// (0x0006b59c) listscroll_sp_fs_schedule_track_pane

0x72a7,	// (0x0006b5a5) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x72a7,	// (0x0006b5a5) main_sp_fs_ctrlbar_pane_cp01

0x34b9,	// (0x000677b7) main_sp_fs_ribbon_pane

0x72ba,	// (0x0006b5b8) popup_sp_fs_cale_preview_window

0xe139,	// (0x00072437) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe139,	// (0x00072437) list_single_sp_fs_schedule_track_pane

0x3c2b,	// (0x00067f29) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3c2b,	// (0x00067f29) bg_sp_fs_highlight_list_pane_cp03

0xe14f,	// (0x0007244d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe14f,	// (0x0007244d) list_single_sp_fs_schedule_track_pane_g1

0xe15b,	// (0x00072459) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe15b,	// (0x00072459) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000740b8) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000740b8) list_single_sp_fs_schedule_track_pane_g

0xe167,	// (0x00072465) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe167,	// (0x00072465) list_single_sp_fs_schedule_track_pane_t1

0xe17f,	// (0x0007247d) sp_fs_schedule_track_pane_ParamLimits

0xe17f,	// (0x0007247d) sp_fs_schedule_track_pane

0x34d0,	// (0x000677ce) sp_fs_schedule_track_pane_g1

0x34d8,	// (0x000677d6) sp_fs_schedule_track_pane_g2

0x34e0,	// (0x000677de) sp_fs_schedule_track_pane_g3

0x34e8,	// (0x000677e6) sp_fs_schedule_track_pane_g4

0x34f0,	// (0x000677ee) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000740bd) sp_fs_schedule_track_pane_g

0x5667,	// (0x00069965) bg_sp_fs_schedule_viewer_highlight_g1

0x0c5f,	// (0x00064f5d) bg_sp_fs_schedule_viewer_highlight_g2

0x566f,	// (0x0006996d) bg_sp_fs_schedule_viewer_highlight_g3

0x5677,	// (0x00069975) bg_sp_fs_schedule_viewer_highlight_g4

0xee8e,	// (0x0007318c) bg_sp_fs_schedule_viewer_highlight_g5

0x5687,	// (0x00069985) bg_sp_fs_schedule_viewer_highlight_g6

0x568f,	// (0x0006998d) bg_sp_fs_schedule_viewer_highlight_g7

0x5697,	// (0x00069995) bg_sp_fs_schedule_viewer_highlight_g8

0x0c3f,	// (0x00064f3d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000740c8) bg_sp_fs_schedule_viewer_highlight_g

0x7673,	// (0x0006b971) bg_main_sp_fs_ribbon_pane

0xc251,	// (0x0007054f) main_sp_fs_ribbon_pane_g1

0x34f8,	// (0x000677f6) main_sp_fs_ribbon_pane_t1

0xe18f,	// (0x0007248d) main_sp_fs_ribbon_pane_t2

0x3507,	// (0x00067805) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000740db) main_sp_fs_ribbon_pane_t

0x3516,	// (0x00067814) main_sp_fs_ribbon_scheduler_pane

0x351e,	// (0x0006781c) bg_main_sp_fs_ribbon_pane_g1

0x3527,	// (0x00067825) bg_main_sp_fs_ribbon_pane_g2

0x3530,	// (0x0006782e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000740e2) bg_main_sp_fs_ribbon_pane_g

0x3538,	// (0x00067836) main_sp_fs_ribbon_scheduler_pane_g1

0x3541,	// (0x0006783f) main_sp_fs_ribbon_scheduler_pane_g2

0x354a,	// (0x00067848) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000740e9) main_sp_fs_ribbon_scheduler_pane_g

0x3553,	// (0x00067851) list_cale_mrui_pane

0xe19e,	// (0x0007249c) sp_fs_scroll_pane_cp07_ParamLimits

0xe19e,	// (0x0007249c) sp_fs_scroll_pane_cp07

0xe1b6,	// (0x000724b4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe1b6,	// (0x000724b4) bg_sp_fs_schedule_viewer_highlight

0x3560,	// (0x0006785e) list_single_sp_fs_schedule_track_pane_cp01

0x3568,	// (0x00067866) list_sp_fs_schedule_track_pane

0x3570,	// (0x0006786e) sp_fs_scroll_pane_cp06_ParamLimits

0x3570,	// (0x0006786e) sp_fs_scroll_pane_cp06

0x4ca0,	// (0x00068f9e) bgmain_sp_fs_calendar_pane_g1

0x72cc,	// (0x0006b5ca) list_single_cale_mrui_pane_ParamLimits

0x72cc,	// (0x0006b5ca) list_single_cale_mrui_pane

0x72ed,	// (0x0006b5eb) list_single_cale_mrui_row_pane_ParamLimits

0x72ed,	// (0x0006b5eb) list_single_cale_mrui_row_pane

0x7303,	// (0x0006b601) list_single_cale_mrui_row_pane_g1_ParamLimits

0x7303,	// (0x0006b601) list_single_cale_mrui_row_pane_g1

0x733b,	// (0x0006b639) list_single_cale_mrui_row_pane_t1_ParamLimits

0x733b,	// (0x0006b639) list_single_cale_mrui_row_pane_t1

0x734d,	// (0x0006b64b) list_single_cale_mrui_row_pane_t2_ParamLimits

0x734d,	// (0x0006b64b) list_single_cale_mrui_row_pane_t2

0x73b3,	// (0x0006b6b1) list_single_cale_mrui_row_pane_t3_ParamLimits

0x73b3,	// (0x0006b6b1) list_single_cale_mrui_row_pane_t3

0x73e2,	// (0x0006b6e0) list_single_cale_mrui_row_pane_t4_ParamLimits

0x73e2,	// (0x0006b6e0) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000740f7) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000740f7) list_single_cale_mrui_row_pane_t

0x7411,	// (0x0006b70f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7411,	// (0x0006b70f) list_single_cmail_header_editor_pane_bg_cp01

0x7435,	// (0x0006b733) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7435,	// (0x0006b733) list_single_cmail_header_editor_pane_bg_cp02

0xe1c3,	// (0x000724c1) main_radioblah_text_pane_t1_ParamLimits

0xe1c3,	// (0x000724c1) main_radioblah_text_pane_t1

0x35a5,	// (0x000678a3) cam6_indi_pane_cp01

0x35ad,	// (0x000678ab) cam6_mode_pane_cp01

0x35b5,	// (0x000678b3) cam6_pano_pane

0x35be,	// (0x000678bc) cam6_zoom_pane_cp01

0x35c6,	// (0x000678c4) cam6_pano_image_pane

0x35cf,	// (0x000678cd) cam6_pano_pane_g1

0x2c4c,	// (0x00066f4a) cam6_pano_pane_g2

0x35d8,	// (0x000678d6) cam6_pano_pane_g3

0x35e1,	// (0x000678df) cam6_pano_pane_g4

0x5219,	// (0x00069517) cam6_pano_pane_g5

0x35ea,	// (0x000678e8) cam6_pano_pane_g6

0x35f2,	// (0x000678f0) cam6_pano_pane_g7

0x35fa,	// (0x000678f8) cam6_pano_pane_g8

0x3603,	// (0x00067901) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x00074100) cam6_pano_pane_g

0x7673,	// (0x0006b971) main_browser_tag_pane

0x33cc,	// (0x000676ca) grid_navstr_albumart_pane

0x360c,	// (0x0006790a) cell_navstr_albumart_pane_ParamLimits

0x360c,	// (0x0006790a) cell_navstr_albumart_pane

0x15f0,	// (0x000658ee) cell_navstr_albumart_pane_g1

0x465f,	// (0x0006895d) cell_navstr_albumart_pane_g2

0x466f,	// (0x0006896d) cell_navstr_albumart_pane_g3

0x4667,	// (0x00068965) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x00074113) cell_navstr_albumart_pane_g

0xe1dc,	// (0x000724da) bt_list_pane_ParamLimits

0xe1dc,	// (0x000724da) bt_list_pane

0xe1f1,	// (0x000724ef) bt_list_pane_t1

0xe200,	// (0x000724fe) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0007411c) bt_list_pane_t

0x7673,	// (0x0006b971) main_cale_prevew_pane

0xe20f,	// (0x0007250d) popup_cale_preview_window_ParamLimits

0xe20f,	// (0x0007250d) popup_cale_preview_window

0x223d,	// (0x0006653b) bg_popup_preview_window_pane_cp05_ParamLimits

0x223d,	// (0x0006653b) bg_popup_preview_window_pane_cp05

0x3623,	// (0x00067921) list_cale_preview_pane_ParamLimits

0x3623,	// (0x00067921) list_cale_preview_pane

0xe224,	// (0x00072522) list_double_cale_preview_pane_ParamLimits

0xe224,	// (0x00072522) list_double_cale_preview_pane

0xe235,	// (0x00072533) list_single_cale_preview_pane_ParamLimits

0xe235,	// (0x00072533) list_single_cale_preview_pane

0xe249,	// (0x00072547) list_single_cale_preview_pane_g1

0xe251,	// (0x0007254f) list_single_cale_preview_pane_t1_ParamLimits

0xe251,	// (0x0007254f) list_single_cale_preview_pane_t1

0x362f,	// (0x0006792d) list_double_cale_preview_pane_g1

0x3637,	// (0x00067935) list_double_cale_preview_pane_t1_ParamLimits

0x3637,	// (0x00067935) list_double_cale_preview_pane_t1

0xe266,	// (0x00072564) list_double_cale_preview_pane_t2_ParamLimits

0xe266,	// (0x00072564) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x00074121) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x00074121) list_double_cale_preview_pane_t

0x7673,	// (0x0006b971) main_ezdial_pane

0x223d,	// (0x0006653b) main_sp_fs_email_pane_ParamLimits

0xde21,	// (0x0007211f) cmail_ddmenu_btn01_pane_ParamLimits

0xde21,	// (0x0007211f) cmail_ddmenu_btn01_pane

0xde3e,	// (0x0007213c) cmail_ddmenu_btn02_pane_ParamLimits

0xde3e,	// (0x0007213c) cmail_ddmenu_btn02_pane

0xde5c,	// (0x0007215a) cmail_ddmenu_btn03_pane_ParamLimits

0xde5c,	// (0x0007215a) cmail_ddmenu_btn03_pane

0xdf00,	// (0x000721fe) main_sp_fs_ctrlbar_pane_ParamLimits

0xdf14,	// (0x00072212) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe007,	// (0x00072305) list_cmail_body_pane_ParamLimits

0x32fc,	// (0x000675fa) bg_button_pane_cp12

0x3311,	// (0x0006760f) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3311,	// (0x0006760f) list_single_cmail_header_detail_pane_g3

0x721c,	// (0x0006b51a) list_single_cmail_header_detail_pane_t2_ParamLimits

0x721c,	// (0x0006b51a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000740a4) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000740a4) list_single_cmail_header_detail_pane_t

0x7274,	// (0x0006b572) phacti_term_pane_t2_ParamLimits

0x7274,	// (0x0006b572) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000740ae) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000740ae) phacti_term_pane_t

0x364c,	// (0x0006794a) aid_size_list_single_double

0xe27e,	// (0x0007257c) popup_ezdial_listscroll_window

0xe297,	// (0x00072595) popup_number_entry_window_cp01

0x09b7,	// (0x00064cb5) bg_popup_call_pane_cp09

0x3658,	// (0x00067956) ezdial_list_pane

0x3660,	// (0x0006795e) scroll_pane_cp23

0x4a8d,	// (0x00068d8b) bg_button_pane_cp028_ParamLimits

0x4a8d,	// (0x00068d8b) bg_button_pane_cp028

0xe2a3,	// (0x000725a1) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe2a3,	// (0x000725a1) cmail_ddmenu_btn01_pane_g1

0xe2b3,	// (0x000725b1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe2b3,	// (0x000725b1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x00074126) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x00074126) cmail_ddmenu_btn01_pane_g

0x3668,	// (0x00067966) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3668,	// (0x00067966) cmail_ddmenu_btn01_pane_t1

0x488e,	// (0x00068b8c) bg_button_pane_cp029_ParamLimits

0x488e,	// (0x00068b8c) bg_button_pane_cp029

0xe2b3,	// (0x000725b1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe2b3,	// (0x000725b1) cmail_ddmenu_btn02_pane_g1

0xe2cb,	// (0x000725c9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe2cb,	// (0x000725c9) cmail_ddmenu_btn02_pane_t1

0x3c2b,	// (0x00067f29) bg_button_pane_cp031_ParamLimits

0x3c2b,	// (0x00067f29) bg_button_pane_cp031

0xe2b3,	// (0x000725b1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe2b3,	// (0x000725b1) cmail_ddmenu_btn03_pane_g1

0xe2cb,	// (0x000725c9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe2cb,	// (0x000725c9) cmail_ddmenu_btn03_pane_t1

0xbedf,	// (0x000701dd) cell_dialer2_keypad_pane_t1_ParamLimits

0xbef9,	// (0x000701f7) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xbef9,	// (0x000701f7) cell_dialer2_keypad_pane_t1_copy1

0xd82e,	// (0x00071b2c) ncimui_group_button_pane

0x223d,	// (0x0006653b) main_sp_fs_calendar_pane_ParamLimits

0xe007,	// (0x00072305) list_single_cmail_header_caption_pane_ParamLimits

0xe10b,	// (0x00072409) aid_recal_txt_sm_pane

0x7673,	// (0x0006b971) mian_recal_day_pane

0x72ba,	// (0x0006b5b8) popup_sp_fs_cale_preview_window_ParamLimits

0x367d,	// (0x0006797b) list_recal_day_pane

0x746e,	// (0x0006b76c) list_single_recal_day_pane_ParamLimits

0x746e,	// (0x0006b76c) list_single_recal_day_pane

0x36d1,	// (0x000679cf) list_single_recal_day_pane_g1_ParamLimits

0x36d1,	// (0x000679cf) list_single_recal_day_pane_g1

0x7480,	// (0x0006b77e) list_single_recal_day_pane_g2_ParamLimits

0x7480,	// (0x0006b77e) list_single_recal_day_pane_g2

0x748c,	// (0x0006b78a) list_single_recal_day_pane_g3_ParamLimits

0x748c,	// (0x0006b78a) list_single_recal_day_pane_g3

0x7498,	// (0x0006b796) list_single_recal_day_pane_g4_ParamLimits

0x7498,	// (0x0006b796) list_single_recal_day_pane_g4

0x74a4,	// (0x0006b7a2) list_single_recal_day_pane_g5_ParamLimits

0x74a4,	// (0x0006b7a2) list_single_recal_day_pane_g5

0x74b8,	// (0x0006b7b6) list_single_recal_day_pane_g6_ParamLimits

0x74b8,	// (0x0006b7b6) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x00074135) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x00074135) list_single_recal_day_pane_g

0x74cf,	// (0x0006b7cd) list_single_recal_day_pane_t1

0x74e1,	// (0x0006b7df) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x00074140) list_single_recal_day_pane_t

0xe2ef,	// (0x000725ed) ncimui_query_button_pane_ParamLimits

0xe2ef,	// (0x000725ed) ncimui_query_button_pane

0xe2ff,	// (0x000725fd) ncimui_query_button_pane_t1_ParamLimits

0xe2ff,	// (0x000725fd) ncimui_query_button_pane_t1

0x371b,	// (0x00067a19) ncimui_query_button_pane_t2_ParamLimits

0x371b,	// (0x00067a19) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x00074145) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x00074145) ncimui_query_button_pane_t

0xe312,	// (0x00072610) query_button_pane_ParamLimits

0xe312,	// (0x00072610) query_button_pane

0x7673,	// (0x0006b971) bg_button_pane_cp0028

0x372e,	// (0x00067a2c) query_button_pane_t1

0xa442,	// (0x0006e740) main_tport_pane_ParamLimits

0xdf53,	// (0x00072251) bg_popup_window_pane_cp01_ParamLimits

0xdf53,	// (0x00072251) bg_popup_window_pane_cp01

0xdf5f,	// (0x0007225d) heading_pane_cp08_ParamLimits

0xdf5f,	// (0x0007225d) heading_pane_cp08

0xdf6b,	// (0x00072269) heading_pane_cp07_ParamLimits

0xdf6b,	// (0x00072269) heading_pane_cp07

0x32ac,	// (0x000675aa) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x00074091) cell_tport_appsw_pane_g

0x664b,	// (0x0006a949) input_candi_list_open_g1

0x0e3a,	// (0x00065138) list_cale_time_pane_g6_ParamLimits

0x0e3a,	// (0x00065138) list_cale_time_pane_g6

0xae27,	// (0x0006f125) aid_size_touch_calib_1_ParamLimits

0xae27,	// (0x0006f125) aid_size_touch_calib_1

0xae33,	// (0x0006f131) aid_size_touch_calib_2_ParamLimits

0xae33,	// (0x0006f131) aid_size_touch_calib_2

0xae3f,	// (0x0006f13d) aid_size_touch_calib_3_ParamLimits

0xae3f,	// (0x0006f13d) aid_size_touch_calib_3

0xae4d,	// (0x0006f14b) aid_size_touch_calib_4_ParamLimits

0xae4d,	// (0x0006f14b) aid_size_touch_calib_4

0xae5b,	// (0x0006f159) main_touch_calib_button_group_pane_ParamLimits

0xae5b,	// (0x0006f159) main_touch_calib_button_group_pane

0xae69,	// (0x0006f167) main_touch_calib_pane_g1_ParamLimits

0xae75,	// (0x0006f173) main_touch_calib_pane_g2_ParamLimits

0xae81,	// (0x0006f17f) main_touch_calib_pane_g3_ParamLimits

0xae8d,	// (0x0006f18b) main_touch_calib_pane_g4_ParamLimits

0xf749,	// (0x00073a47) main_touch_calib_pane_g_ParamLimits

0xae99,	// (0x0006f197) main_touch_calib_pane_t1_ParamLimits

0xaeae,	// (0x0006f1ac) main_touch_calib_pane_t2_ParamLimits

0xaec3,	// (0x0006f1c1) main_touch_calib_pane_t3_ParamLimits

0xaed5,	// (0x0006f1d3) main_touch_calib_pane_t4_ParamLimits

0xaee7,	// (0x0006f1e5) main_touch_calib_pane_t5_ParamLimits

0xf752,	// (0x00073a50) main_touch_calib_pane_t_ParamLimits

0x4fcf,	// (0x000692cd) list_single_fp_cale_pane_g3_ParamLimits

0x4fcf,	// (0x000692cd) list_single_fp_cale_pane_g3

0x223d,	// (0x0006653b) bg_button_pane_cp012_ParamLimits

0x223d,	// (0x0006653b) bg_vkb2_func_pane_cp03_ParamLimits

0xcbcb,	// (0x00070ec9) cell_vitu2_function_top_pane_g1_ParamLimits

0x223d,	// (0x0006653b) bg_vkb2_func_pane_cp04_ParamLimits

0xd7ba,	// (0x00071ab8) main_ncimui_button_group_pane_ParamLimits

0xd7ba,	// (0x00071ab8) main_ncimui_button_group_pane

0xd81c,	// (0x00071b1a) main_ncimui_pane_t3_ParamLimits

0xd81c,	// (0x00071b1a) main_ncimui_pane_t3

0x33e2,	// (0x000676e0) phacti_button_group_pane

0x364c,	// (0x0006794a) aid_size_list_single_double_ParamLimits

0xe27e,	// (0x0007257c) popup_ezdial_listscroll_window_ParamLimits

0xe297,	// (0x00072595) popup_number_entry_window_cp01_ParamLimits

0xe31f,	// (0x0007261d) phacti_button_pane_ParamLimits

0xe31f,	// (0x0007261d) phacti_button_pane

0x7673,	// (0x0006b971) bg_button_pane_cp14

0x373c,	// (0x00067a3a) phacti_button_pane_t1

0xe32e,	// (0x0007262c) main_touch_calib_button_pane_ParamLimits

0xe32e,	// (0x0007262c) main_touch_calib_button_pane

0x0748,	// (0x00064a46) bg_button_pane_cp18_ParamLimits

0x0748,	// (0x00064a46) bg_button_pane_cp18

0xe33f,	// (0x0007263d) main_touch_calib_button_pane_t1_ParamLimits

0xe33f,	// (0x0007263d) main_touch_calib_button_pane_t1

0xe355,	// (0x00072653) main_touch_calib_button_pane_t2_ParamLimits

0xe355,	// (0x00072653) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0007414a) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0007414a) main_touch_calib_button_pane_t

0x7673,	// (0x0006b971) cell_ncimui_button_pane

0x7673,	// (0x0006b971) bg_button_pane_cp032

0x374a,	// (0x00067a48) cell_ncimui_button_pane_t1

0xbf4b,	// (0x00070249) image3_infobar_pane_ParamLimits

0xbf4b,	// (0x00070249) image3_infobar_pane

0xdb65,	// (0x00071e63) fs_bigclock_status_pane_ParamLimits

0xdb65,	// (0x00071e63) fs_bigclock_status_pane

0xdb72,	// (0x00071e70) main_fs_bigclock_clock_pane_ParamLimits

0xdb72,	// (0x00071e70) main_fs_bigclock_clock_pane

0xdb8a,	// (0x00071e88) main_fs_bigclock_indi_pane_ParamLimits

0xdb8a,	// (0x00071e88) main_fs_bigclock_indi_pane

0xdbaa,	// (0x00071ea8) main_fs_bigclock_swipe_pane_ParamLimits

0xdbaa,	// (0x00071ea8) main_fs_bigclock_swipe_pane

0x7673,	// (0x0006b971) main_fs_clock_dumped_data

0x2d59,	// (0x00067057) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x2d59,	// (0x00067057) list_single_fs_bigclock_indicator_pane_g1

0x2d73,	// (0x00067071) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x2d73,	// (0x00067071) list_single_fs_bigclock_indicator_pane_g2

0x2d8d,	// (0x0006708b) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2d8d,	// (0x0006708b) list_single_fs_bigclock_indicator_pane_g3

0x2da7,	// (0x000670a5) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x2da7,	// (0x000670a5) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc70,	// (0x00073f6e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc70,	// (0x00073f6e) list_single_fs_bigclock_indicator_pane_g

0x2dd0,	// (0x000670ce) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x2dd0,	// (0x000670ce) list_single_fs_bigclock_indicator_pane_t1

0x2df8,	// (0x000670f6) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x2df8,	// (0x000670f6) list_single_fs_bigclock_indicator_pane_t2

0x2e20,	// (0x0006711e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2e20,	// (0x0006711e) list_single_fs_bigclock_indicator_pane_t3

0x2e48,	// (0x00067146) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x2e48,	// (0x00067146) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7b,	// (0x00073f79) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7b,	// (0x00073f79) list_single_fs_bigclock_indicator_pane_t

0x3758,	// (0x00067a56) image3_infobar_fav_pane_ParamLimits

0x3758,	// (0x00067a56) image3_infobar_fav_pane

0x3768,	// (0x00067a66) image3_infobar_loc_pane_ParamLimits

0x3768,	// (0x00067a66) image3_infobar_loc_pane

0x377c,	// (0x00067a7a) image3_infobar_time_pane_ParamLimits

0x377c,	// (0x00067a7a) image3_infobar_time_pane

0x4ca0,	// (0x00068f9e) image3_infobar_time_pane_g1

0x378c,	// (0x00067a8a) image3_infobar_time_pane_t1

0x4ca0,	// (0x00068f9e) image3_infobar_loc_pane_g1

0x379a,	// (0x00067a98) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0007414f) image3_infobar_loc_pane_g

0x37a2,	// (0x00067aa0) image3_infobar_loc_pane_t1

0x4ca0,	// (0x00068f9e) image3_infobar_fav_pane_g1

0x37b0,	// (0x00067aae) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x00074154) image3_infobar_fav_pane_g

0x37b8,	// (0x00067ab6) fs_bigclock_status_battery_pane

0x37c1,	// (0x00067abf) fs_bigclock_status_signal_pane

0x37ca,	// (0x00067ac8) fs_bigclock_status_title_pane

0x37d3,	// (0x00067ad1) fs_bigclock_status_signal_pane_g1

0x37dc,	// (0x00067ada) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x00074159) fs_bigclock_status_signal_pane_g

0x37e4,	// (0x00067ae2) fs_bigclock_status_battery_pane_g1

0x37ed,	// (0x00067aeb) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0007415e) fs_bigclock_status_battery_pane_g

0x37f5,	// (0x00067af3) fs_bigclock_status_title_pane_t1

0x4f34,	// (0x00069232) main_fs_bigclock_clock_pane_g1

0xe373,	// (0x00072671) main_fs_bigclock_clock_pane_g2

0xe380,	// (0x0007267e) main_fs_bigclock_clock_pane_g3

0xe380,	// (0x0007267e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x00074163) main_fs_bigclock_clock_pane_g

0xe38c,	// (0x0007268a) main_fs_bigclock_clock_pane_t1

0xe39e,	// (0x0007269c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0007416c) main_fs_bigclock_clock_pane_t

0x3803,	// (0x00067b01) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3803,	// (0x00067b01) list_single_fs_bigclock_indicator_pane

0x3814,	// (0x00067b12) list_single_fs_bigclock_pane_ParamLimits

0x3814,	// (0x00067b12) list_single_fs_bigclock_pane

0x383a,	// (0x00067b38) main_fs_bigclock_indicator_pane_t1

0x3849,	// (0x00067b47) list_single_fs_bigclock_pane_g1

0x3851,	// (0x00067b4f) list_single_fs_bigclock_pane_t1

0x4ca0,	// (0x00068f9e) main_fs_bigclock_swipe_pane_g1

0x3891,	// (0x00067b8f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0007417d) main_fs_bigclock_swipe_pane_g

0x3899,	// (0x00067b97) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3899,	// (0x00067b97) main_fs_bigclock_swipe_pane_t1

0x9649,	// (0x0006d947) call_type_pane_ParamLimits

0x7673,	// (0x0006b971) main_btmg_pane

0x732f,	// (0x0006b62d) list_single_cale_mrui_row_pane_g2_ParamLimits

0x732f,	// (0x0006b62d) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000740f0) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000740f0) list_single_cale_mrui_row_pane_g

0x745d,	// (0x0006b75b) list_recal_vselct_arw_lo_pane

0x36ae,	// (0x000679ac) list_recal_vselct_arw_up_pane

0x7465,	// (0x0006b763) list_recal_vselct_pane

0x38b6,	// (0x00067bb4) btmg_button_pane

0xe3f3,	// (0x000726f1) main_btmg_pane_g1

0x7673,	// (0x0006b971) bg_button_pane_cp044

0x38be,	// (0x00067bbc) btmg_button_pane_t1

0x487a,	// (0x00068b78) aid_listscroll_gen

0x223d,	// (0x0006653b) main_cntbar_detail_pane

0x32d2,	// (0x000675d0) list_cmail_folder_pane

0x32e2,	// (0x000675e0) sp_fs_scroll_pane_cp03_ParamLimits

0x74f6,	// (0x0006b7f4) list_single_fs_dyc_pane_cp01_ParamLimits

0x74f6,	// (0x0006b7f4) list_single_fs_dyc_pane_cp01

0x38cc,	// (0x00067bca) aid_size_cmail_indent

0x750e,	// (0x0006b80c) list_single_dyc_row_pane_cp01

0xe415,	// (0x00072713) cntbar_detail_list_pane_ParamLimits

0xe415,	// (0x00072713) cntbar_detail_list_pane

0xe44b,	// (0x00072749) main_cntbar_detail_cont_pane_ParamLimits

0xe44b,	// (0x00072749) main_cntbar_detail_cont_pane

0xe457,	// (0x00072755) scroll_pane_cp032_ParamLimits

0xe457,	// (0x00072755) scroll_pane_cp032

0xe463,	// (0x00072761) cntbar_detail_list_event_pane_ParamLimits

0xe463,	// (0x00072761) cntbar_detail_list_event_pane

0xe421,	// (0x0007271f) cntbar_detail_list_shct_pane

0x38de,	// (0x00067bdc) aid_list_gen

0x08a5,	// (0x00064ba3) aid_scroll

0x23ea,	// (0x000666e8) aid_size_touch_scroll_bar

0xd11f,	// (0x0007141d) aid_list_double

0x2415,	// (0x00066713) aid_list_single

0x2415,	// (0x00066713) aid_list_single_lg

0x7517,	// (0x0006b815) aid_list_z_g_a_sm

0xe473,	// (0x00072771) aid_list_z_g_d

0x751f,	// (0x0006b81d) aid_txt_z_prm

0x752d,	// (0x0006b82b) aid_txt_z_prm_cp01

0x753b,	// (0x0006b839) aid_txt_z_sec

0xe47b,	// (0x00072779) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe47b,	// (0x00072779) main_cntbar_detail_cont_pane_g1

0xe488,	// (0x00072786) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe488,	// (0x00072786) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x00074182) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x00074182) main_cntbar_detail_cont_pane_g

0x3903,	// (0x00067c01) main_cntbar_detail_cont_pane_t1

0x3911,	// (0x00067c0f) main_cntbar_detail_cont_pane_t2

0x391f,	// (0x00067c1d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x00074187) main_cntbar_detail_cont_pane_t

0xe494,	// (0x00072792) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe494,	// (0x00072792) cell_cntbar_detail_list_shct_pane

0x392d,	// (0x00067c2b) cntbar_detail_list_shct_pane_g1

0x3936,	// (0x00067c34) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0007418e) cntbar_detail_list_shct_pane_g

0xe4a6,	// (0x000727a4) cntbar_detail_list_event_pane_g1_ParamLimits

0xe4a6,	// (0x000727a4) cntbar_detail_list_event_pane_g1

0xe4b2,	// (0x000727b0) cntbar_detail_list_event_pane_g2_ParamLimits

0xe4b2,	// (0x000727b0) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x00074193) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x00074193) cntbar_detail_list_event_pane_g

0xe51e,	// (0x0007281c) cntbar_detail_list_event_pane_t1_ParamLimits

0xe51e,	// (0x0007281c) cntbar_detail_list_event_pane_t1

0xe533,	// (0x00072831) cntbar_detail_list_event_pane_t2_ParamLimits

0xe533,	// (0x00072831) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000741a0) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000741a0) cntbar_detail_list_event_pane_t

0x4ca0,	// (0x00068f9e) cell_cntbar_detail_list_shct_pane_g1

0x1437,	// (0x00065735) navi_pane_mv_g3

0x223d,	// (0x0006653b) main_cntbar_detail_pane_ParamLimits

0x7673,	// (0x0006b971) main_notif_wgt_pane

0xbc21,	// (0x0006ff1f) aid_tch_main_mp4_pane_g4

0xbe60,	// (0x0007015e) popup_slider_window_cp02

0x7453,	// (0x0006b751) list_recal_day_event_pane

0xe3fb,	// (0x000726f9) cntbar_detail_btn_pane_ParamLimits

0xe3fb,	// (0x000726f9) cntbar_detail_btn_pane

0xe407,	// (0x00072705) cntbar_detail_btn_pane_cp01_ParamLimits

0xe407,	// (0x00072705) cntbar_detail_btn_pane_cp01

0xe421,	// (0x0007271f) cntbar_detail_list_shct_pane_ParamLimits

0xe42d,	// (0x0007272b) cntbar_detail_pane_g1_ParamLimits

0xe42d,	// (0x0007272b) cntbar_detail_pane_g1

0xe439,	// (0x00072737) cntbar_detail_pane_t1_ParamLimits

0xe439,	// (0x00072737) cntbar_detail_pane_t1

0xe4be,	// (0x000727bc) cntbar_detail_list_event_pane_g3_ParamLimits

0xe4be,	// (0x000727bc) cntbar_detail_list_event_pane_g3

0xe4d6,	// (0x000727d4) cntbar_detail_list_event_pane_g4_ParamLimits

0xe4d6,	// (0x000727d4) cntbar_detail_list_event_pane_g4

0xe4ee,	// (0x000727ec) cntbar_detail_list_event_pane_g5_ParamLimits

0xe4ee,	// (0x000727ec) cntbar_detail_list_event_pane_g5

0xe506,	// (0x00072804) cntbar_detail_list_event_pane_g6_ParamLimits

0xe506,	// (0x00072804) cntbar_detail_list_event_pane_g6

0xe548,	// (0x00072846) cntbar_detail_list_event_pane_t3_ParamLimits

0xe548,	// (0x00072846) cntbar_detail_list_event_pane_t3

0xe55a,	// (0x00072858) popup_notif_wgt_window_ParamLimits

0xe55a,	// (0x00072858) popup_notif_wgt_window

0xe568,	// (0x00072866) popup_submenu_window_cp01_ParamLimits

0xe568,	// (0x00072866) popup_submenu_window_cp01

0x09b7,	// (0x00064cb5) bg_popup_window_pane_cp10

0x393f,	// (0x00067c3d) listscroll_notif_wgt_pane

0x3950,	// (0x00067c4e) list_notif_wgt_window

0x3959,	// (0x00067c57) scroll_pane_cp033

0xe574,	// (0x00072872) list_notif_wgt_row_pane_ParamLimits

0xe574,	// (0x00072872) list_notif_wgt_row_pane

0x3962,	// (0x00067c60) aid_size_list_notif_wgt_del

0x396f,	// (0x00067c6d) list_notif_wgt_row_pane_g1

0x397b,	// (0x00067c79) list_notif_wgt_row_pane_g2

0x398f,	// (0x00067c8d) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000741a7) list_notif_wgt_row_pane_g

0x399c,	// (0x00067c9a) list_notif_wgt_row_pane_t1

0x39b2,	// (0x00067cb0) list_notif_wgt_row_pane_t2

0x39c4,	// (0x00067cc2) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000741ae) list_notif_wgt_row_pane_t

0xee96,	// (0x00073194) list_recal_day_event_pane_g1

0x39d6,	// (0x00067cd4) list_recal_day_event_pane_t1

0x7673,	// (0x0006b971) bg_button_pane_cp045

0xe586,	// (0x00072884) cntbar_detail_btn_pane_t1

0x488e,	// (0x00068b8c) main_callh_pane_ParamLimits

0x488e,	// (0x00068b8c) main_callh_pane

0x7673,	// (0x0006b971) main_coverflow0_pane

0x7673,	// (0x0006b971) main_wgtman_pane

0xdbbc,	// (0x00071eba) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdbbc,	// (0x00071eba) main_fs_bigclock_unlock_btn_pane

0x32a4,	// (0x000675a2) bg_button_pane_cp16

0x32b4,	// (0x000675b2) cell_tport_appsw_pane_g3

0xe594,	// (0x00072892) cf0_flow_pane_ParamLimits

0xe594,	// (0x00072892) cf0_flow_pane

0x39e5,	// (0x00067ce3) listscroll_cf0_pane

0x39ee,	// (0x00067cec) main_cf0_pane_g1

0xe5a3,	// (0x000728a1) main_cf0_pane_t1_ParamLimits

0xe5a3,	// (0x000728a1) main_cf0_pane_t1

0xe5b5,	// (0x000728b3) main_cf0_pane_t2_ParamLimits

0xe5b5,	// (0x000728b3) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000741ba) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000741ba) main_cf0_pane_t

0x3a00,	// (0x00067cfe) scroll_pane_cp11

0xe5c7,	// (0x000728c5) cf0_flow_pane_g1

0xe5cf,	// (0x000728cd) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000741bf) cf0_flow_pane_g

0xe5d7,	// (0x000728d5) cf0_flow_pane_t1

0x7673,	// (0x0006b971) main_call6_pane

0x7673,	// (0x0006b971) main_calllock_pane

0xe5e5,	// (0x000728e3) call6_btn_grp_pane_ParamLimits

0xe5e5,	// (0x000728e3) call6_btn_grp_pane

0xe5f2,	// (0x000728f0) call6_pane_g1_ParamLimits

0xe5f2,	// (0x000728f0) call6_pane_g1

0xe5ff,	// (0x000728fd) popup_call6_1st_window_ParamLimits

0xe5ff,	// (0x000728fd) popup_call6_1st_window

0xe60b,	// (0x00072909) popup_call6_2nd_window_ParamLimits

0xe60b,	// (0x00072909) popup_call6_2nd_window

0xe617,	// (0x00072915) cell_call6_btn_pane_ParamLimits

0xe617,	// (0x00072915) cell_call6_btn_pane

0x09b7,	// (0x00064cb5) bg_popup_call2_in_pane_cp03

0x3a09,	// (0x00067d07) popup_call6_1st_window_g1

0x3a11,	// (0x00067d0f) popup_call6_1st_window_g2

0x3a19,	// (0x00067d17) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000741c4) popup_call6_1st_window_g

0x3a21,	// (0x00067d1f) popup_call6_1st_window_t1

0x3a30,	// (0x00067d2e) popup_call6_1st_window_t2

0x3a3e,	// (0x00067d3c) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000741cb) popup_call6_1st_window_t

0x09b7,	// (0x00064cb5) bg_popup_call2_in_pane_cp04

0x3a09,	// (0x00067d07) popup_call6_2nd_window_g1

0x3a11,	// (0x00067d0f) popup_call6_2nd_window_g2

0x3a19,	// (0x00067d17) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000741c4) popup_call6_2nd_window_g

0x3a21,	// (0x00067d1f) popup_call6_2nd_window_t1

0x7673,	// (0x0006b971) bg_button_pane_cp15

0xe626,	// (0x00072924) cell_call6_btn_pane_g1

0xe62f,	// (0x0007292d) cell_call6_btn_pane_t1

0xe63e,	// (0x0007293c) listscroll_wgtman_pane_ParamLimits

0xe63e,	// (0x0007293c) listscroll_wgtman_pane

0xe65a,	// (0x00072958) wgtman_btn_pane_ParamLimits

0xe65a,	// (0x00072958) wgtman_btn_pane

0x128e,	// (0x0006558c) aid_scroll_copy1

0x3a4c,	// (0x00067d4a) list_wgtman_pane

0xe68d,	// (0x0007298b) wgtman_btn_pane_g1_ParamLimits

0xe68d,	// (0x0007298b) wgtman_btn_pane_g1

0xe6b5,	// (0x000729b3) wgtman_btn_pane_t1_ParamLimits

0xe6b5,	// (0x000729b3) wgtman_btn_pane_t1

0x3a56,	// (0x00067d54) wgtman_btn_pane_t2_ParamLimits

0x3a56,	// (0x00067d54) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000741d2) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000741d2) wgtman_btn_pane_t

0xe6ec,	// (0x000729ea) listrow_wgtman_pane_ParamLimits

0xe6ec,	// (0x000729ea) listrow_wgtman_pane

0xe6fd,	// (0x000729fb) listrow_wgtman_pane_g1

0xe70a,	// (0x00072a08) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000741d7) listrow_wgtman_pane_g

0x7549,	// (0x0006b847) listrow_wgtman_pane_t1

0x7561,	// (0x0006b85f) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000741dc) listrow_wgtman_pane_t

0x7587,	// (0x0006b885) wait_bar_pane_cp09

0x3a6d,	// (0x00067d6b) main_calllock_btn_pane

0x3a75,	// (0x00067d73) main_calllock_pane_g1

0x7673,	// (0x0006b971) bg_button_pane_cp17

0x3a7e,	// (0x00067d7c) main_calllock_btn_pane_g1

0x3a87,	// (0x00067d85) main_calllock_btn_pane_t1

0x7673,	// (0x0006b971) main_dialer3_pane

0x7673,	// (0x0006b971) main_fmrd2_pane

0x4ca0,	// (0x00068f9e) main_fs_bigclock_unlock_btn_pane_g1

0x3a9e,	// (0x00067d9c) main_fs_bigclock_unlock_btn_pane_t1

0xe722,	// (0x00072a20) area_fmrd2_info_pane_ParamLimits

0xe722,	// (0x00072a20) area_fmrd2_info_pane

0xe72e,	// (0x00072a2c) area_fmrd2_visual_pane_ParamLimits

0xe72e,	// (0x00072a2c) area_fmrd2_visual_pane

0xe73c,	// (0x00072a3a) fmrd2_indi_pane_ParamLimits

0xe73c,	// (0x00072a3a) fmrd2_indi_pane

0xe749,	// (0x00072a47) area_fmrd2_visual_pane_g1

0xe751,	// (0x00072a4f) area_fmrd2_visual_pane_t1

0xe75f,	// (0x00072a5d) area_fmrd2_visual_pane_t2

0xe76d,	// (0x00072a6b) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000741e6) area_fmrd2_visual_pane_t

0xe77b,	// (0x00072a79) area_fmrd2_info_pane_g1

0xe783,	// (0x00072a81) area_fmrd2_info_pane_t1

0xe791,	// (0x00072a8f) area_fmrd2_info_pane_t2

0xe79f,	// (0x00072a9d) area_fmrd2_info_pane_t3

0xe7ad,	// (0x00072aab) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000741ed) area_fmrd2_info_pane_t

0xe7bb,	// (0x00072ab9) fmrd2_indi_pane_t1

0xe7c9,	// (0x00072ac7) fmrd2_indi_pane_t2

0xe7d7,	// (0x00072ad5) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000741f6) fmrd2_indi_pane_t

0x2db6,	// (0x000670b4) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x2db6,	// (0x000670b4) list_single_fs_bigclock_indicator_pane_g5

0x2e64,	// (0x00067162) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x2e64,	// (0x00067162) list_single_fs_bigclock_indicator_pane_t5

0xe0ed,	// (0x000723eb) aid_cell_bcale_month_pane_ParamLimits

0xe0ed,	// (0x000723eb) aid_cell_bcale_month_pane

0xe114,	// (0x00072412) bcale_month_pane_ParamLimits

0xe114,	// (0x00072412) bcale_month_pane

0xe12a,	// (0x00072428) bcale_preview_pane_ParamLimits

0xe12a,	// (0x00072428) bcale_preview_pane

0x3851,	// (0x00067b4f) list_single_fs_bigclock_pane_t1_ParamLimits

0x386d,	// (0x00067b6b) list_single_fs_bigclock_pane_t2_ParamLimits

0x386d,	// (0x00067b6b) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x00074178) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x00074178) list_single_fs_bigclock_pane_t

0x3a96,	// (0x00067d94) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000741e1) main_fs_bigclock_unlock_btn_pane_g

0xe7e5,	// (0x00072ae3) aid_dia3_key_size_ParamLimits

0xe7e5,	// (0x00072ae3) aid_dia3_key_size

0xe7f1,	// (0x00072aef) aid_dia3_listrow_size_ParamLimits

0xe7f1,	// (0x00072aef) aid_dia3_listrow_size

0xe7ff,	// (0x00072afd) dia3_keypad_fun_pane_ParamLimits

0xe7ff,	// (0x00072afd) dia3_keypad_fun_pane

0xe80b,	// (0x00072b09) dia3_keypad_num_pane_ParamLimits

0xe80b,	// (0x00072b09) dia3_keypad_num_pane

0xe817,	// (0x00072b15) dia3_listscroll_pane_ParamLimits

0xe817,	// (0x00072b15) dia3_listscroll_pane

0xe823,	// (0x00072b21) dia3_numentry_pane_ParamLimits

0xe823,	// (0x00072b21) dia3_numentry_pane

0x3aac,	// (0x00067daa) dia3_list_pane

0x3ab5,	// (0x00067db3) scroll_pane_cp12

0x7673,	// (0x0006b971) bg_dia3_numentry_pane

0xe82f,	// (0x00072b2d) dia3_numentry_pane_t1

0xe83e,	// (0x00072b3c) cell_dia3_key_num_pane

0xe846,	// (0x00072b44) cell_dia3_key0_fun_pane_ParamLimits

0xe846,	// (0x00072b44) cell_dia3_key0_fun_pane

0xe853,	// (0x00072b51) cell_dia3_key1_fun_pane_ParamLimits

0xe853,	// (0x00072b51) cell_dia3_key1_fun_pane

0xe860,	// (0x00072b5e) dia3_listrow_pane

0x2ab7,	// (0x00066db5) bg_dia3_numentry_pane_g1

0x7673,	// (0x0006b971) bg_button_pane_cp21

0x3abe,	// (0x00067dbc) cell_dia3_key_num_pane_t1

0x3acc,	// (0x00067dca) cell_dia3_key_num_pane_t2

0x3adb,	// (0x00067dd9) cell_dia3_key_num_pane_t3

0x3aea,	// (0x00067de8) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000741fd) cell_dia3_key_num_pane_t

0x7673,	// (0x0006b971) bg_button_pane_cp19

0x3af9,	// (0x00067df7) cell_dia3_key0_fun_pane_g1

0x7673,	// (0x0006b971) bg_button_pane_cp20

0xe86d,	// (0x00072b6b) cell_dia3_key1_fun_pane_g1

0xe875,	// (0x00072b73) area_left_week_number_pane

0xe886,	// (0x00072b84) area_top_day_name_pane

0xe892,	// (0x00072b90) frame_month_view_pane

0x3b01,	// (0x00067dff) grid_month_view_pane

0xe8a3,	// (0x00072ba1) cell_top_day_name_pane_ParamLimits

0xe8a3,	// (0x00072ba1) cell_top_day_name_pane

0xe8b9,	// (0x00072bb7) cell_area_left_week_number_pane_ParamLimits

0xe8b9,	// (0x00072bb7) cell_area_left_week_number_pane

0xe8d8,	// (0x00072bd6) cell_month_view_pane_ParamLimits

0xe8d8,	// (0x00072bd6) cell_month_view_pane

0x3b0f,	// (0x00067e0d) frm_month_g1

0xe8fe,	// (0x00072bfc) frm_month_g2

0xe90d,	// (0x00072c0b) frm_month_g3

0xe91c,	// (0x00072c1a) frm_month_g4

0xe92b,	// (0x00072c29) frm_month_g5

0xe93a,	// (0x00072c38) frm_month_g6

0xe949,	// (0x00072c47) frm_month_g7

0x3b1c,	// (0x00067e1a) frm_month_g8

0xe958,	// (0x00072c56) frm_month_g9

0xe965,	// (0x00072c63) frm_month_g10

0xe972,	// (0x00072c70) frm_month_g11

0xe97f,	// (0x00072c7d) frm_month_g12

0xe98c,	// (0x00072c8a) frm_month_g13

0xe999,	// (0x00072c97) frm_month_g14

0xe9a6,	// (0x00072ca4) frm_month_g15

0xe9b3,	// (0x00072cb1) frm_month_g16

0x000f,

0xff08,	// (0x00074206) frm_month_g

0x3b29,	// (0x00067e27) cell_top_day_name_pane_t1

0xe9c0,	// (0x00072cbe) cell_area_left_week_number_pane_g1

0xe9cf,	// (0x00072ccd) cell_area_left_week_number_pane_t1

0x4ecf,	// (0x000691cd) cell_month_view_pane_g1

0xe9e5,	// (0x00072ce3) cell_month_view_pane_t1

0x7673,	// (0x0006b971) main_fps_pane

0x30bf,	// (0x000673bd) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x30bf,	// (0x000673bd) cmail_ddmenu_btn02_pane_cp1

0x30db,	// (0x000673d9) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x30db,	// (0x000673d9) cmail_ddmenu_btn02_pane_cp2

0xe2bf,	// (0x000725bd) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe2bf,	// (0x000725bd) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0007412b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0007412b) cmail_ddmenu_btn02_pane_g

0xe2dd,	// (0x000725db) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe2dd,	// (0x000725db) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x00074130) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x00074130) cmail_ddmenu_btn02_pane_t

0xe9fb,	// (0x00072cf9) fps_text_pane_ParamLimits

0xe9fb,	// (0x00072cf9) fps_text_pane

0xea08,	// (0x00072d06) main_fps_pane_g1_ParamLimits

0xea08,	// (0x00072d06) main_fps_pane_g1

0xea14,	// (0x00072d12) wait_bar_pane_cp010_ParamLimits

0xea14,	// (0x00072d12) wait_bar_pane_cp010

0xea20,	// (0x00072d1e) fps_text_pane_t1_ParamLimits

0xea20,	// (0x00072d1e) fps_text_pane_t1

0xc248,	// (0x00070546) cam4_image_uncrop_pane_g1

0xc251,	// (0x0007054f) cam4_image_uncrop_pane_g2

0xc25a,	// (0x00070558) cam4_image_uncrop_pane_g3

0xc263,	// (0x00070561) cam4_image_uncrop_pane_g4

0x0003,

0xf8ea,	// (0x00073be8) cam4_image_uncrop_pane_g

0xe860,	// (0x00072b5e) dia3_listrow_pane_ParamLimits

0x7673,	// (0x0006b971) main_phob2_pane

0xdfac,	// (0x000722aa) cell_tport_appsw_pane_cp02_ParamLimits

0xdfac,	// (0x000722aa) cell_tport_appsw_pane_cp02

0xdfb9,	// (0x000722b7) cell_tport_appsw_pane_cp03_ParamLimits

0xdfb9,	// (0x000722b7) cell_tport_appsw_pane_cp03

0x7673,	// (0x0006b971) phob2_contact_card_pane

0x7673,	// (0x0006b971) phob2_listscroll_pane

0x3b3c,	// (0x00067e3a) phob2_list_pane

0x3b44,	// (0x00067e42) scroll_pane_cp034

0xea39,	// (0x00072d37) phob2_cc_data_pane_ParamLimits

0xea39,	// (0x00072d37) phob2_cc_data_pane

0xea51,	// (0x00072d4f) phob2_cc_listscroll_pane_ParamLimits

0xea51,	// (0x00072d4f) phob2_cc_listscroll_pane

0xea69,	// (0x00072d67) list_double_large_graphic_phob2_pane_ParamLimits

0xea69,	// (0x00072d67) list_double_large_graphic_phob2_pane

0xea7b,	// (0x00072d79) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xea7b,	// (0x00072d79) list_double_large_graphic_phob2_pane_g1

0x7599,	// (0x0006b897) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x7599,	// (0x0006b897) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00074227) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00074227) list_double_large_graphic_phob2_pane_g

0x75a5,	// (0x0006b8a3) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x75a5,	// (0x0006b8a3) list_double_large_graphic_phob2_pane_t1

0x75bb,	// (0x0006b8b9) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x75bb,	// (0x0006b8b9) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0007422c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0007422c) list_double_large_graphic_phob2_pane_t

0x7673,	// (0x0006b971) list_highlight_pane_cp024

0xea91,	// (0x00072d8f) phob2_cc_button_pane

0xea99,	// (0x00072d97) phob2_cc_data_pane_g1_ParamLimits

0xea99,	// (0x00072d97) phob2_cc_data_pane_g1

0xeaa5,	// (0x00072da3) phob2_cc_data_pane_g2_ParamLimits

0xeaa5,	// (0x00072da3) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00074231) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00074231) phob2_cc_data_pane_g

0xeab1,	// (0x00072daf) phob2_cc_data_pane_t1_ParamLimits

0xeab1,	// (0x00072daf) phob2_cc_data_pane_t1

0xeac3,	// (0x00072dc1) phob2_cc_data_pane_t2_ParamLimits

0xeac3,	// (0x00072dc1) phob2_cc_data_pane_t2

0xead5,	// (0x00072dd3) phob2_cc_data_pane_t3_ParamLimits

0xead5,	// (0x00072dd3) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x00074236) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x00074236) phob2_cc_data_pane_t

0x3b4c,	// (0x00067e4a) phob2_cc_list_pane_ParamLimits

0x3b4c,	// (0x00067e4a) phob2_cc_list_pane

0x29d4,	// (0x00066cd2) scroll_pane_cp035_ParamLimits

0x29d4,	// (0x00066cd2) scroll_pane_cp035

0x223d,	// (0x0006653b) bg_button_pane_cp033

0x3b58,	// (0x00067e56) phob2_cc_button_pane_g1

0x3b64,	// (0x00067e62) phob2_cc_button_pane_t1

0x3b79,	// (0x00067e77) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0007423d) phob2_cc_button_pane_t

0xeae7,	// (0x00072de5) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xeae7,	// (0x00072de5) list_double_large_graphic_phob2_cc_pane

0xeb2d,	// (0x00072e2b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xeb2d,	// (0x00072e2b) list_double_large_graphic_phob2_cc_pane_g1

0xeb3e,	// (0x00072e3c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xeb3e,	// (0x00072e3c) list_double_large_graphic_phob2_cc_pane_g2

0x75d0,	// (0x0006b8ce) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x75d0,	// (0x0006b8ce) list_double_large_graphic_phob2_cc_pane_g3

0x75df,	// (0x0006b8dd) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x75df,	// (0x0006b8dd) list_double_large_graphic_phob2_cc_pane_g4

0x75f0,	// (0x0006b8ee) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x75f0,	// (0x0006b8ee) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x00074242) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x00074242) list_double_large_graphic_phob2_cc_pane_g

0x75ff,	// (0x0006b8fd) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x75ff,	// (0x0006b8fd) list_double_large_graphic_phob2_cc_pane_t1

0x7628,	// (0x0006b926) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x7628,	// (0x0006b926) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0007424d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0007424d) list_double_large_graphic_phob2_cc_pane_t

0x3b8b,	// (0x00067e89) list_highlight_pane_cp025_ParamLimits

0x3b8b,	// (0x00067e89) list_highlight_pane_cp025

0x223d,	// (0x0006653b) bg_button_pane_cp033_ParamLimits

0x3b58,	// (0x00067e56) phob2_cc_button_pane_g1_ParamLimits

0x3b64,	// (0x00067e62) phob2_cc_button_pane_t1_ParamLimits

0x3b79,	// (0x00067e77) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0007423d) phob2_cc_button_pane_t_ParamLimits

0x78c1,	// (0x0006bbbf) popup_wgtman_window

0x2ad7,	// (0x00066dd5) scroll_pane_cp038

0xe675,	// (0x00072973) wgtman_btn_pane_cp_01_ParamLimits

0xe675,	// (0x00072973) wgtman_btn_pane_cp_01

0x3b99,	// (0x00067e97) wgtman_content_pane

0x3ba2,	// (0x00067ea0) wgtman_heading_pane

0x7673,	// (0x0006b971) bg_heading_pane_cp02

0x3bab,	// (0x00067ea9) wgtman_heading_pane_g1

0x3bb3,	// (0x00067eb1) wgtman_heading_pane_t1

0x3bc1,	// (0x00067ebf) scroll_pane_cp036

0x3bc9,	// (0x00067ec7) wgtman_list_pane

0x3bd1,	// (0x00067ecf) wgtman_list_pane_t1_ParamLimits

0x3bd1,	// (0x00067ecf) wgtman_list_pane_t1

0xc1ad,	// (0x000704ab) cam4_grid_pane

0x68a7,	// (0x0006aba5) bg_button_pane_cp015_ParamLimits

0xcd7c,	// (0x0007107a) bg_button_pane_cp016_ParamLimits

0xcd8f,	// (0x0007108d) bg_button_pane_cp017_ParamLimits

0x68e5,	// (0x0006abe3) popup_vitu2_query_window_g3_ParamLimits

0x68e5,	// (0x0006abe3) popup_vitu2_query_window_g3

0x695e,	// (0x0006ac5c) popup_vitu2_query_window_t6_ParamLimits

0x695e,	// (0x0006ac5c) popup_vitu2_query_window_t6

0x6989,	// (0x0006ac87) popup_vitu2_query_window_t7_ParamLimits

0x6989,	// (0x0006ac87) popup_vitu2_query_window_t7

0x561d,	// (0x0006991b) cam4_grid_pane_g1

0x5626,	// (0x00069924) cam4_grid_pane_g2

0x3be8,	// (0x00067ee6) cam4_grid_pane_g3

0x3bf1,	// (0x00067eef) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x00074252) cam4_grid_pane_g

0x86b6,	// (0x0006c9b4) aid_placing_vt_slider_lsc_ParamLimits

0x8960,	// (0x0006cc5e) vidtel_button_pane_ParamLimits

0x8960,	// (0x0006cc5e) vidtel_button_pane

0x7673,	// (0x0006b971) bg_button_pane_cp034

0xeb4d,	// (0x00072e4b) vidtel_button_pane_g1

0xeb55,	// (0x00072e53) vidtel_button_pane_t1

0xee86,	// (0x00073184) aid_size_vtel_slider_touch

0x29d4,	// (0x00066cd2) scroll_pane_cp039

0x2b06,	// (0x00066e04) ncim_query_button_pane_cp01_ParamLimits

0x2b25,	// (0x00066e23) ncimui_query_pane_g1_ParamLimits

0x223d,	// (0x0006653b) input_focus_pane_cp012_ParamLimits

0x2b4a,	// (0x00066e48) ncim_query_entry_pane_t1_ParamLimits

0x29d4,	// (0x00066cd2) scroll_pane_cp039_ParamLimits

0x1352,	// (0x00065650) navi_pane_bcale_mc_g1

0x135a,	// (0x00065658) navi_pane_bcale_mc_t1

0x310f,	// (0x0006740d) main_sp_fs_email_pane_g1

0x311b,	// (0x00067419) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x00073fe3) main_sp_fs_email_pane_g

0x3598,	// (0x00067896) list_single_cale_mrui_row_pane_g3_ParamLimits

0x3598,	// (0x00067896) list_single_cale_mrui_row_pane_g3

0x74b0,	// (0x0006b7ae) list_single_recal_day_pane_g5_event_pane

0x74c7,	// (0x0006b7c5) list_single_recal_day_pane_g7

0x3bfa,	// (0x00067ef8) list_recal_day_event_pane_cp01

0x3c03,	// (0x00067f01) list_recal_vselct_arw_lo_pane_cp01

0x3c0b,	// (0x00067f09) list_recal_vselct_arw_up_pane_cp01

0x3c13,	// (0x00067f11) list_recal_vselct_pane_cp01

0xee96,	// (0x00073194) list_recal_day_event_pane_cp01_g1

0x7651,	// (0x0006b94f) list_recal_day_event_pane_cp01_t1

0x74cf,	// (0x0006b7cd) list_single_recal_day_pane_t1_ParamLimits

0x74e1,	// (0x0006b7df) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x00074140) list_single_recal_day_pane_t_ParamLimits

0x065d,	// (0x0006495b) bg_notes_pane_ParamLimits

0x0708,	// (0x00064a06) list_notes_pane_ParamLimits

0x7bde,	// (0x0006bedc) scroll_pane_cp06_ParamLimits

0x0748,	// (0x00064a46) main_notes_pane_ParamLimits

0x223d,	// (0x0006653b) main_welc_pane

0xeb78,	// (0x00072e76) main_welc_body_pane_ParamLimits

0xeb78,	// (0x00072e76) main_welc_body_pane

0xeb91,	// (0x00072e8f) main_welc_opti_pane_ParamLimits

0xeb91,	// (0x00072e8f) main_welc_opti_pane

0xebca,	// (0x00072ec8) main_welc_pane_t1_ParamLimits

0xebca,	// (0x00072ec8) main_welc_pane_t1

0xec1e,	// (0x00072f1c) main_welc_body_row_pane_ParamLimits

0xec1e,	// (0x00072f1c) main_welc_body_row_pane

0x3c2b,	// (0x00067f29) main_welc_opti_row_pane_ParamLimits

0x3c2b,	// (0x00067f29) main_welc_opti_row_pane

0x3c39,	// (0x00067f37) main_welc_opti_row_pane_g1

0xec33,	// (0x00072f31) main_welc_opti_row_pane_t1

0x3c41,	// (0x00067f3f) main_welc_body_row_pane_t1

0x3948,	// (0x00067c46) popup_notif_wgt_heading_pane

0x3962,	// (0x00067c60) aid_size_list_notif_wgt_del_ParamLimits

0x396f,	// (0x00067c6d) list_notif_wgt_row_pane_g1_ParamLimits

0x397b,	// (0x00067c79) list_notif_wgt_row_pane_g2_ParamLimits

0x398f,	// (0x00067c8d) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000741a7) list_notif_wgt_row_pane_g_ParamLimits

0x399c,	// (0x00067c9a) list_notif_wgt_row_pane_t1_ParamLimits

0x39b2,	// (0x00067cb0) list_notif_wgt_row_pane_t2_ParamLimits

0x39c4,	// (0x00067cc2) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000741ae) list_notif_wgt_row_pane_t_ParamLimits

0xe6fd,	// (0x000729fb) listrow_wgtman_pane_g1_ParamLimits

0xe70a,	// (0x00072a08) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000741d7) listrow_wgtman_pane_g_ParamLimits

0x7549,	// (0x0006b847) listrow_wgtman_pane_t1_ParamLimits

0x7561,	// (0x0006b85f) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000741dc) listrow_wgtman_pane_t_ParamLimits

0x7587,	// (0x0006b885) wait_bar_pane_cp09_ParamLimits

0x7673,	// (0x0006b971) bg_popup_heading_pane_cp02

0x3c50,	// (0x00067f4e) popup_notif_wgt_heading_pane_g1

0x3c58,	// (0x00067f56) popup_notif_wgt_heading_pane_t1

0x489c,	// (0x00068b9a) main_vids_pane

0x7673,	// (0x0006b971) vids_listscroll_pane

0xec42,	// (0x00072f40) scroll_pane_cp040

0x7673,	// (0x0006b971) vids_list_pane

0xec4b,	// (0x00072f49) vids_list_double_pane_ParamLimits

0xec4b,	// (0x00072f49) vids_list_double_pane

0xec5c,	// (0x00072f5a) vids_list_double_pane_g1

0xec65,	// (0x00072f63) vids_list_double_pane_t1

0xec75,	// (0x00072f73) vids_list_double_pane_t2

0x0001,

0xff6b,	// (0x00074269) vids_list_double_pane_t

0x223d,	// (0x0006653b) main_ncimui_pane_ParamLimits

0xd7d0,	// (0x00071ace) main_ncimui_pane_g1_ParamLimits

0xd7dc,	// (0x00071ada) main_ncimui_pane_g2_ParamLimits

0xd7dc,	// (0x00071ada) main_ncimui_pane_g2

0x0001,

0xfbe6,	// (0x00073ee4) main_ncimui_pane_g_ParamLimits

0xfbe6,	// (0x00073ee4) main_ncimui_pane_g

0xeba6,	// (0x00072ea4) main_welc_pane_g1_ParamLimits

0xeba6,	// (0x00072ea4) main_welc_pane_g1

0xebb2,	// (0x00072eb0) main_welc_pane_g2_ParamLimits

0xebb2,	// (0x00072eb0) main_welc_pane_g2

0x0002,

0xff5d,	// (0x0007425b) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0007425b) main_welc_pane_g

0x065d,	// (0x0006495b) listscroll_mce_pane_ParamLimits

0x9962,	// (0x0006dc60) wait_bar_pane_cp10

0x4882,	// (0x00068b80) main_cale_day_pane_ParamLimits

0x4882,	// (0x00068b80) main_cale_week_pane_ParamLimits

0x065d,	// (0x0006495b) main_messa_pane_ParamLimits

0xb64b,	// (0x0006f949) main_clock2_btn_pane_ParamLimits

0xb64b,	// (0x0006f949) main_clock2_btn_pane

0x5057,	// (0x00069355) main_clock2_btn_pane_cp01_ParamLimits

0x5057,	// (0x00069355) main_clock2_btn_pane_cp01

0x3553,	// (0x00067851) list_cale_mrui_pane_ParamLimits

0x39f8,	// (0x00067cf6) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000741b5) main_cf0_pane_g

0xe875,	// (0x00072b73) area_left_week_number_pane_ParamLimits

0xe886,	// (0x00072b84) area_top_day_name_pane_ParamLimits

0xe892,	// (0x00072b90) frame_month_view_pane_ParamLimits

0x3b01,	// (0x00067dff) grid_month_view_pane_ParamLimits

0x3b0f,	// (0x00067e0d) frm_month_g1_ParamLimits

0xe8fe,	// (0x00072bfc) frm_month_g2_ParamLimits

0xe90d,	// (0x00072c0b) frm_month_g3_ParamLimits

0xe91c,	// (0x00072c1a) frm_month_g4_ParamLimits

0xe92b,	// (0x00072c29) frm_month_g5_ParamLimits

0xe93a,	// (0x00072c38) frm_month_g6_ParamLimits

0xe949,	// (0x00072c47) frm_month_g7_ParamLimits

0x3b1c,	// (0x00067e1a) frm_month_g8_ParamLimits

0xe958,	// (0x00072c56) frm_month_g9_ParamLimits

0xe965,	// (0x00072c63) frm_month_g10_ParamLimits

0xe972,	// (0x00072c70) frm_month_g11_ParamLimits

0xe97f,	// (0x00072c7d) frm_month_g12_ParamLimits

0xe98c,	// (0x00072c8a) frm_month_g13_ParamLimits

0xe999,	// (0x00072c97) frm_month_g14_ParamLimits

0xe9a6,	// (0x00072ca4) frm_month_g15_ParamLimits

0xe9b3,	// (0x00072cb1) frm_month_g16_ParamLimits

0xff08,	// (0x00074206) frm_month_g_ParamLimits

0x3b29,	// (0x00067e27) cell_top_day_name_pane_t1_ParamLimits

0xe9c0,	// (0x00072cbe) cell_area_left_week_number_pane_g1_ParamLimits

0xe9cf,	// (0x00072ccd) cell_area_left_week_number_pane_t1_ParamLimits

0x4ecf,	// (0x000691cd) cell_month_view_pane_g1_ParamLimits

0xe9e5,	// (0x00072ce3) cell_month_view_pane_t1_ParamLimits

0x0655,	// (0x00064953) main_clock2_btn_pane_g1

0x3c66,	// (0x00067f64) main_clock2_btn_pane_t1

0x223d,	// (0x0006653b) listscroll_cmail_pane_ParamLimits

0x310f,	// (0x0006740d) main_sp_fs_email_pane_g1_ParamLimits

0x311b,	// (0x00067419) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x00073fe3) main_sp_fs_email_pane_g_ParamLimits

0x367d,	// (0x0006797b) list_recal_day_pane_ParamLimits

0x368e,	// (0x0006798c) mian_recal_day_pane_t1

0x6eb9,	// (0x0006b1b7) list_single_dyc_row_text_pane_t4_ParamLimits

0x6eb9,	// (0x0006b1b7) list_single_dyc_row_text_pane_t4

0x6ef0,	// (0x0006b1ee) list_single_dyc_row_text_pane_t5_ParamLimits

0x6ef0,	// (0x0006b1ee) list_single_dyc_row_text_pane_t5

0x6f65,	// (0x0006b263) list_single_dyc_row_text_pane_t6_ParamLimits

0x6f65,	// (0x0006b263) list_single_dyc_row_text_pane_t6

0x9581,	// (0x0006d87f) aid_mgn_list_cale_time_pane

0x223d,	// (0x0006653b) main_gallery2_pane_ParamLimits

0x506b,	// (0x00069369) main_clock2_pane_cp01_t1

0x5079,	// (0x00069377) main_clock2_pane_cp01_t3

0x0001,

0xf7bc,	// (0x00073aba) main_clock2_pane_cp01_t

0x7f98,	// (0x0006c296) cale_week_scroll_pane_g16_ParamLimits

0x7f98,	// (0x0006c296) cale_week_scroll_pane_g16

0x09b7,	// (0x00064cb5) vorec_slider_pane

0xeb55,	// (0x00072e53) vidtel_button_pane_t1_ParamLimits

0x4f34,	// (0x00069232) main_fs_bigclock_clock_pane_g1_ParamLimits

0xe373,	// (0x00072671) main_fs_bigclock_clock_pane_g2_ParamLimits

0xe380,	// (0x0007267e) main_fs_bigclock_clock_pane_g3_ParamLimits

0xe380,	// (0x0007267e) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x00074163) main_fs_bigclock_clock_pane_g_ParamLimits

0xe38c,	// (0x0007268a) main_fs_bigclock_clock_pane_t1_ParamLimits

0xe39e,	// (0x0007269c) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x0007416c) main_fs_bigclock_clock_pane_t_ParamLimits

0xaf77,	// (0x0006f275) main_mup3_lyrics_pane_ParamLimits

0xaf77,	// (0x0006f275) main_mup3_lyrics_pane

0xeca7,	// (0x00072fa5) main_mup3_lyrics_pane_t1_ParamLimits

0xeca7,	// (0x00072fa5) main_mup3_lyrics_pane_t1

0xbc19,	// (0x0006ff17) aid_main_mp4_pane_t1_area

0xbc19,	// (0x0006ff17) aid_main_mp4_pane_t2_area

0xbd04,	// (0x00070002) main_mp4_pane_g7_ParamLimits

0xbd04,	// (0x00070002) main_mp4_pane_g7

0xbd10,	// (0x0007000e) main_mp4_pane_g8_ParamLimits

0xbd10,	// (0x0007000e) main_mp4_pane_g8

0xc0c5,	// (0x000703c3) aid_call6_pane_g1_size

0xeb11,	// (0x00072e0f) list_double_large_graphic_phob2_other_pane_ParamLimits

0xeb11,	// (0x00072e0f) list_double_large_graphic_phob2_other_pane

0x12a5,	// (0x000655a3) list_double_large_graphic_phob2_other_pane_g1

0x7673,	// (0x0006b971) list_highlight_pane_cp026

0x223d,	// (0x0006653b) main_welc_pane_ParamLimits

0xde88,	// (0x00072186) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xde88,	// (0x00072186) main_sp_fs_ctrlbar_pane_g3

0xdea0,	// (0x0007219e) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xdea0,	// (0x0007219e) main_sp_fs_ctrlbar_pane_g4

0xdee0,	// (0x000721de) toolbar2_fixed_button_pane_cp01

0xdeea,	// (0x000721e8) toolbar2_fixed_button_pane_cp02

0xdef5,	// (0x000721f3) toolbar2_fixed_button_pane_cp03

0xeb6b,	// (0x00072e69) list_welc_entry_pane_ParamLimits

0xeb6b,	// (0x00072e69) list_welc_entry_pane

0xebbe,	// (0x00072ebc) main_welc_pane_g3_ParamLimits

0xebbe,	// (0x00072ebc) main_welc_pane_g3

0xebe2,	// (0x00072ee0) main_welc_pane_t2_ParamLimits

0xebe2,	// (0x00072ee0) main_welc_pane_t2

0xebf4,	// (0x00072ef2) main_welc_pane_t3_ParamLimits

0xebf4,	// (0x00072ef2) main_welc_pane_t3

0x0002,

0xff64,	// (0x00074262) main_welc_pane_t_ParamLimits

0xff64,	// (0x00074262) main_welc_pane_t

0xec06,	// (0x00072f04) welc_button_pane_ParamLimits

0xec06,	// (0x00072f04) welc_button_pane

0xec12,	// (0x00072f10) welc_service_logo_pane_ParamLimits

0xec12,	// (0x00072f10) welc_service_logo_pane

0x3c74,	// (0x00067f72) list_single_welc_entry_pane_ParamLimits

0x3c74,	// (0x00067f72) list_single_welc_entry_pane

0x3c85,	// (0x00067f83) list_single_welc_entry_pane_g1

0x3c8d,	// (0x00067f8b) list_single_welc_entry_pane_t1

0x3c9b,	// (0x00067f99) list_single_welc_entry_pane_t2

0x0001,

0xff70,	// (0x0007426e) list_single_welc_entry_pane_t

0x7673,	// (0x0006b971) bg_button_pane_cp035

0x3ca9,	// (0x00067fa7) welc_button_pane_t1

0x3cb7,	// (0x00067fb5) welc_service_logo_pane_g1

0x3cc0,	// (0x00067fbe) welc_service_logo_pane_g2

0x0001,

0xff75,	// (0x00074273) welc_service_logo_pane_g
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

} // end of namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Large
