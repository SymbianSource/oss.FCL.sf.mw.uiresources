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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00016e33 };

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
0x84d9,	// (0x0001f30c) Screen

0x84e3,	// (0x0001f316) application_window

0x84ed,	// (0x0001f320) area_bottom_pane_ParamLimits

0x84ed,	// (0x0001f320) area_bottom_pane

0x6c80,	// (0x0001dab3) area_top_pane_ParamLimits

0x6c80,	// (0x0001dab3) area_top_pane

0x6cdc,	// (0x0001db0f) call_video_uplink_pane_ParamLimits

0x6cdc,	// (0x0001db0f) call_video_uplink_pane

0x6d17,	// (0x0001db4a) main_pane_ParamLimits

0x6d17,	// (0x0001db4a) main_pane

0x2c68,	// (0x00019a9b) context_pane

0xadc6,	// (0x00021bf9) navi_pane

0xade0,	// (0x00021c13) popup_cale_events_window_ParamLimits

0xade0,	// (0x00021c13) popup_cale_events_window

0x2c7b,	// (0x00019aae) popup_mup_playback_window

0xadf7,	// (0x00021c2a) signal_pane

0x09c5,	// (0x000177f8) main_browser_pane

0x0c34,	// (0x00017a67) main_burst_pane

0x6e40,	// (0x0001dc73) main_calc_pane

0x2bf4,	// (0x00019a27) main_cale_day_pane

0x8879,	// (0x0001f6ac) main_cale_month_pane

0x2bf4,	// (0x00019a27) main_cale_week_pane

0x0c34,	// (0x00017a67) main_call_pane

0x067f,	// (0x000174b2) main_call_poc_pane

0x0c34,	// (0x00017a67) main_camera_pane

0x0c34,	// (0x00017a67) main_chi_dic_pane

0x14c9,	// (0x000182fc) main_clock_pane

0x067f,	// (0x000174b2) main_fmradio_pane

0x0c34,	// (0x00017a67) main_graph_messa_pane

0x067f,	// (0x000174b2) main_help_pane

0x09c5,	// (0x000177f8) main_im_pane

0x08da,	// (0x0001770d) main_image_pane_ParamLimits

0x08da,	// (0x0001770d) main_image_pane

0x067f,	// (0x000174b2) main_location2_pane

0x0c34,	// (0x00017a67) main_location_pane

0x08da,	// (0x0001770d) main_messa_pane

0x067f,	// (0x000174b2) main_mp2_pane

0x0c34,	// (0x00017a67) main_mp_pane

0x067f,	// (0x000174b2) main_msg_pane

0x067f,	// (0x000174b2) main_mup_eq_pane

0x067f,	// (0x000174b2) main_mup_pane

0x09c5,	// (0x000177f8) main_notes_pane

0x067f,	// (0x000174b2) main_pec_pane

0x067f,	// (0x000174b2) main_phob_pane

0x067f,	// (0x000174b2) main_pinb_pane

0x067f,	// (0x000174b2) main_postcard_pane

0x067f,	// (0x000174b2) main_qdial_pane

0x0c34,	// (0x00017a67) main_skin_pane

0x067f,	// (0x000174b2) main_smil2_pane

0x0c34,	// (0x00017a67) main_smil_pane

0x0c34,	// (0x00017a67) main_video_pane

0x0c34,	// (0x00017a67) main_video_tele_pane

0x08da,	// (0x0001770d) main_viewer_pane_ParamLimits

0x08da,	// (0x0001770d) main_viewer_pane

0x0c34,	// (0x00017a67) main_vorec_pane

0x7396,	// (0x0001e1c9) popup_blid_sat_info_window_ParamLimits

0x7396,	// (0x0001e1c9) popup_blid_sat_info_window

0x73b2,	// (0x0001e1e5) popup_dyc_status_message_window_ParamLimits

0x73b2,	// (0x0001e1e5) popup_dyc_status_message_window

0x73be,	// (0x0001e1f1) popup_grid_large_graphic_window_ParamLimits

0x73be,	// (0x0001e1f1) popup_grid_large_graphic_window

0x742f,	// (0x0001e262) popup_loc_request_window_ParamLimits

0x742f,	// (0x0001e262) popup_loc_request_window

0x7472,	// (0x0001e2a5) popup_wml_address_window_ParamLimits

0x7472,	// (0x0001e2a5) popup_wml_address_window

0xacdc,	// (0x00021b0f) call_muted_g1

0xaa17,	// (0x0002184a) popup_call_audio_conf_window_ParamLimits

0xaa17,	// (0x0002184a) popup_call_audio_conf_window

0xacec,	// (0x00021b1f) popup_call_audio_first_window_ParamLimits

0xacec,	// (0x00021b1f) popup_call_audio_first_window

0xad20,	// (0x00021b53) popup_call_audio_in_window_ParamLimits

0xad20,	// (0x00021b53) popup_call_audio_in_window

0xad3c,	// (0x00021b6f) popup_call_audio_out_window_ParamLimits

0xad3c,	// (0x00021b6f) popup_call_audio_out_window

0xad58,	// (0x00021b8b) popup_call_audio_second_window_ParamLimits

0xad58,	// (0x00021b8b) popup_call_audio_second_window

0xad80,	// (0x00021bb3) popup_call_audio_wait_window_ParamLimits

0xad80,	// (0x00021bb3) popup_call_audio_wait_window

0xad9f,	// (0x00021bd2) popup_number_entry_window_ParamLimits

0xad9f,	// (0x00021bd2) popup_number_entry_window

0x026e,	// (0x000170a1) bg_popup_call_pane_cp05_ParamLimits

0x026e,	// (0x000170a1) bg_popup_call_pane_cp05

0x028e,	// (0x000170c1) popup_number_entry_window_t1

0x02a1,	// (0x000170d4) popup_number_entry_window_t2

0x02b3,	// (0x000170e6) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x00025ee2) popup_number_entry_window_t

0x02c5,	// (0x000170f8) text_title_cp2

0x02d8,	// (0x0001710b) bg_popup_call_pane_cp_ParamLimits

0x02d8,	// (0x0001710b) bg_popup_call_pane_cp

0x02e6,	// (0x00017119) call_thumbnail_pane

0x02ee,	// (0x00017121) popup_call_audio_in_window_g1_ParamLimits

0x02ee,	// (0x00017121) popup_call_audio_in_window_g1

0x02fa,	// (0x0001712d) popup_call_audio_in_window_g2_ParamLimits

0x02fa,	// (0x0001712d) popup_call_audio_in_window_g2

0x0306,	// (0x00017139) popup_call_audio_in_window_g3_ParamLimits

0x0306,	// (0x00017139) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x00025eeb) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x00025eeb) popup_call_audio_in_window_g

0x0312,	// (0x00017145) popup_call_audio_in_window_t1_ParamLimits

0x0312,	// (0x00017145) popup_call_audio_in_window_t1

0x032d,	// (0x00017160) popup_call_audio_in_window_t2_ParamLimits

0x032d,	// (0x00017160) popup_call_audio_in_window_t2

0x0348,	// (0x0001717b) popup_call_audio_in_window_t3_ParamLimits

0x0348,	// (0x0001717b) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x00025ef2) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x00025ef2) popup_call_audio_in_window_t

0x02d8,	// (0x0001710b) bg_popup_call_pane_cp01_ParamLimits

0x02d8,	// (0x0001710b) bg_popup_call_pane_cp01

0x02e6,	// (0x00017119) call_thumbnail_pane_cp02

0x035b,	// (0x0001718e) call_type_pane_cp022

0x0363,	// (0x00017196) popup_call_audio_out_window_g1_ParamLimits

0x0363,	// (0x00017196) popup_call_audio_out_window_g1

0x0375,	// (0x000171a8) popup_call_audio_out_window_g2_ParamLimits

0x0375,	// (0x000171a8) popup_call_audio_out_window_g2

0x0381,	// (0x000171b4) popup_call_audio_out_window_g3_ParamLimits

0x0381,	// (0x000171b4) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x00025ef9) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x00025ef9) popup_call_audio_out_window_g

0x0393,	// (0x000171c6) popup_call_audio_out_window_t1_ParamLimits

0x0393,	// (0x000171c6) popup_call_audio_out_window_t1

0x03ab,	// (0x000171de) popup_call_audio_out_window_t2_ParamLimits

0x03ab,	// (0x000171de) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x00025f00) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x00025f00) popup_call_audio_out_window_t

0x03c0,	// (0x000171f3) bg_popup_call_pane_ParamLimits

0x03c0,	// (0x000171f3) bg_popup_call_pane

0x8559,	// (0x0001f38c) call_thumbnail_pane_cp_ParamLimits

0x8559,	// (0x0001f38c) call_thumbnail_pane_cp

0x0444,	// (0x00017277) call_type_pane_cp01_ParamLimits

0x0444,	// (0x00017277) call_type_pane_cp01

0x0488,	// (0x000172bb) popup_call_audio_first_window_g1_ParamLimits

0x0488,	// (0x000172bb) popup_call_audio_first_window_g1

0x04d4,	// (0x00017307) popup_call_audio_first_window_g2_ParamLimits

0x04d4,	// (0x00017307) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x00025f05) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x00025f05) popup_call_audio_first_window_g

0x0518,	// (0x0001734b) popup_call_audio_first_window_t1_ParamLimits

0x0518,	// (0x0001734b) popup_call_audio_first_window_t1

0x05c4,	// (0x000173f7) popup_call_audio_first_window_t4_ParamLimits

0x05c4,	// (0x000173f7) popup_call_audio_first_window_t4

0x0650,	// (0x00017483) popup_call_audio_first_window_t5_ParamLimits

0x0650,	// (0x00017483) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x00025f0a) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x00025f0a) popup_call_audio_first_window_t

0x067f,	// (0x000174b2) bg_popup_call_pane_cp02

0x0689,	// (0x000174bc) call_type_pane_cp023

0x0691,	// (0x000174c4) popup_call_audio_wait_window_g1

0x0699,	// (0x000174cc) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x00025f11) popup_call_audio_wait_window_g

0x06a1,	// (0x000174d4) popup_call_audio_wait_window_t3

0x06af,	// (0x000174e2) bg_popup_call_pane_cp03_ParamLimits

0x06af,	// (0x000174e2) bg_popup_call_pane_cp03

0x070f,	// (0x00017542) call_thumbnail_pane_cp011_ParamLimits

0x070f,	// (0x00017542) call_thumbnail_pane_cp011

0x071b,	// (0x0001754e) call_type_pane_cp034_ParamLimits

0x071b,	// (0x0001754e) call_type_pane_cp034

0x0757,	// (0x0001758a) popup_call_audio_second_window_g1_ParamLimits

0x0757,	// (0x0001758a) popup_call_audio_second_window_g1

0x0793,	// (0x000175c6) popup_call_audio_second_window_g2_ParamLimits

0x0793,	// (0x000175c6) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x00025f16) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x00025f16) popup_call_audio_second_window_g

0x07cf,	// (0x00017602) popup_call_audio_second_window_t1_ParamLimits

0x07cf,	// (0x00017602) popup_call_audio_second_window_t1

0x0850,	// (0x00017683) popup_call_audio_second_window_t2_ParamLimits

0x0850,	// (0x00017683) popup_call_audio_second_window_t2

0x0886,	// (0x000176b9) popup_call_audio_second_window_t3_ParamLimits

0x0886,	// (0x000176b9) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x00025f1b) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x00025f1b) popup_call_audio_second_window_t

0x067f,	// (0x000174b2) bg_popup_call_pane_cp04

0x08bc,	// (0x000176ef) list_conf_pane

0x08c4,	// (0x000176f7) popup_call_audio_conf_window_t1

0x08d2,	// (0x00017705) call_thumbnail_pane_g1

0x08da,	// (0x0001770d) bg_pinb_pane_ParamLimits

0x08da,	// (0x0001770d) bg_pinb_pane

0x08e8,	// (0x0001771b) find_pinb_pane

0x08f1,	// (0x00017724) listscroll_pinb_pane_ParamLimits

0x08f1,	// (0x00017724) listscroll_pinb_pane

0x0900,	// (0x00017733) pinb_bg_pane_g1

0x857d,	// (0x0001f3b0) pinb_bg_pane_g2

0x8587,	// (0x0001f3ba) pinb_bg_pane_g3

0x8591,	// (0x0001f3c4) pinb_bg_pane_g4

0x859b,	// (0x0001f3ce) pinb_bg_pane_g5

0x85a5,	// (0x0001f3d8) pinb_bg_pane_g6

0x85b0,	// (0x0001f3e3) pinb_bg_pane_g7

0x85bb,	// (0x0001f3ee) pinb_bg_pane_g8

0x85c4,	// (0x0001f3f7) pinb_bg_pane_g9

0x85cc,	// (0x0001f3ff) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x00025f22) pinb_bg_pane_g

0x85e9,	// (0x0001f41c) grid_pinb_pane

0x85f2,	// (0x0001f425) list_pinb_pane

0x85fd,	// (0x0001f430) scroll_pane_cp01_ParamLimits

0x85fd,	// (0x0001f430) scroll_pane_cp01

0x090a,	// (0x0001773d) find_pinb_pane_g1_ParamLimits

0x090a,	// (0x0001773d) find_pinb_pane_g1

0x0922,	// (0x00017755) find_pinb_pane_t1

0x0934,	// (0x00017767) find_pinb_pane_t2

0x0001,

0xf109,	// (0x00025f3c) find_pinb_pane_t

0x0949,	// (0x0001777c) input_focus_pane_cp01_ParamLimits

0x0949,	// (0x0001777c) input_focus_pane_cp01

0x860d,	// (0x0001f440) cell_pinb_pane_ParamLimits

0x860d,	// (0x0001f440) cell_pinb_pane

0x8626,	// (0x0001f459) cell_pinb_pane_g1_ParamLimits

0x8626,	// (0x0001f459) cell_pinb_pane_g1

0x863a,	// (0x0001f46d) cell_pinb_pane_g2_ParamLimits

0x863a,	// (0x0001f46d) cell_pinb_pane_g2

0x0955,	// (0x00017788) cell_pinb_pane_g3_ParamLimits

0x0955,	// (0x00017788) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x00025f41) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x00025f41) cell_pinb_pane_g

0x067f,	// (0x000174b2) grid_highlight_pane_cp01

0x8646,	// (0x0001f479) list_pinb_item_pane_ParamLimits

0x8646,	// (0x0001f479) list_pinb_item_pane

0x067f,	// (0x000174b2) list_highlight_pane_cp02

0x865b,	// (0x0001f48e) list_pinb_item_pane_g1_ParamLimits

0x865b,	// (0x0001f48e) list_pinb_item_pane_g1

0x8668,	// (0x0001f49b) list_pinb_item_pane_g2_ParamLimits

0x8668,	// (0x0001f49b) list_pinb_item_pane_g2

0x8674,	// (0x0001f4a7) list_pinb_item_pane_g3_ParamLimits

0x8674,	// (0x0001f4a7) list_pinb_item_pane_g3

0x8683,	// (0x0001f4b6) list_pinb_item_pane_g4_ParamLimits

0x8683,	// (0x0001f4b6) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x00025f48) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x00025f48) list_pinb_item_pane_g

0x868f,	// (0x0001f4c2) list_pinb_item_pane_t1_ParamLimits

0x868f,	// (0x0001f4c2) list_pinb_item_pane_t1

0x6ebf,	// (0x0001dcf2) calc_display_pane

0x6ed7,	// (0x0001dd0a) calc_paper_pane

0x6ef3,	// (0x0001dd26) grid_calc_pane

0x067f,	// (0x000174b2) bg_list_pane_cp01

0x86a6,	// (0x0001f4d9) clock_g1

0x86ae,	// (0x0001f4e1) clock_g2

0x0001,

0xf11e,	// (0x00025f51) clock_g

0x86b6,	// (0x0001f4e9) clock_t1_ParamLimits

0x86b6,	// (0x0001f4e9) clock_t1

0x86cb,	// (0x0001f4fe) clock_t2_ParamLimits

0x86cb,	// (0x0001f4fe) clock_t2

0x86dd,	// (0x0001f510) clock_t3_ParamLimits

0x86dd,	// (0x0001f510) clock_t3

0x86ef,	// (0x0001f522) clock_t4_ParamLimits

0x86ef,	// (0x0001f522) clock_t4

0x8701,	// (0x0001f534) clock_t5_ParamLimits

0x8701,	// (0x0001f534) clock_t5

0x8716,	// (0x0001f549) clock_t6_ParamLimits

0x8716,	// (0x0001f549) clock_t6

0x8728,	// (0x0001f55b) clock_t7_ParamLimits

0x8728,	// (0x0001f55b) clock_t7

0x873a,	// (0x0001f56d) clock_t8_ParamLimits

0x873a,	// (0x0001f56d) clock_t8

0x874c,	// (0x0001f57f) clock_t9_ParamLimits

0x874c,	// (0x0001f57f) clock_t9

0x0008,

0xf123,	// (0x00025f56) clock_t_ParamLimits

0xf123,	// (0x00025f56) clock_t

0x0969,	// (0x0001779c) popup_clock_analogue_window_cp02

0x0969,	// (0x0001779c) popup_clock_digital_window_cp01

0x0971,	// (0x000177a4) listscroll_help_pane

0x067f,	// (0x000174b2) phob_pre_status_pane

0x097b,	// (0x000177ae) grid_qdial_pane

0x08da,	// (0x0001770d) listscroll_mce_pane

0x08da,	// (0x0001770d) bg_notes_pane

0x0985,	// (0x000177b8) list_notes_pane

0x875e,	// (0x0001f591) scroll_pane_cp06

0x0993,	// (0x000177c6) bg_calc_paper_pane

0x6f13,	// (0x0001dd46) list_calc_pane

0x09c5,	// (0x000177f8) bg_calc_display_pane

0x6f2d,	// (0x0001dd60) calc_display_pane_t1

0x6f42,	// (0x0001dd75) calc_display_pane_t2

0x6f57,	// (0x0001dd8a) calc_display_pane_t3

0x0002,

0xf136,	// (0x00025f69) calc_display_pane_t

0x6f69,	// (0x0001dd9c) cell_calc_pane_ParamLimits

0x6f69,	// (0x0001dd9c) cell_calc_pane

0x0a0d,	// (0x00017840) bg_calc_paper_pane_g1

0x0a25,	// (0x00017858) bg_calc_paper_pane_g2

0x0a19,	// (0x0001784c) bg_calc_paper_pane_g3

0x0a3d,	// (0x00017870) bg_calc_paper_pane_g4

0x0a31,	// (0x00017864) bg_calc_paper_pane_g5

0x876b,	// (0x0001f59e) bg_calc_paper_pane_g6

0x877a,	// (0x0001f5ad) bg_calc_paper_pane_g7

0x8789,	// (0x0001f5bc) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x00025f70) bg_calc_paper_pane_g

0x8798,	// (0x0001f5cb) calc_bg_paper_pane_g9

0x87a7,	// (0x0001f5da) list_calc_item_pane_ParamLimits

0x87a7,	// (0x0001f5da) list_calc_item_pane

0x0a49,	// (0x0001787c) list_calc_item_pane_g1

0x6f90,	// (0x0001ddc3) list_calc_item_pane_t1_ParamLimits

0x6f90,	// (0x0001ddc3) list_calc_item_pane_t1

0x6fa2,	// (0x0001ddd5) list_calc_item_pane_t2_ParamLimits

0x6fa2,	// (0x0001ddd5) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x00025f81) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x00025f81) list_calc_item_pane_t

0x0a68,	// (0x0001789b) cell_calc_pane_g1

0x0a72,	// (0x000178a5) grid_highlight_pane_cp02

0x0aa7,	// (0x000178da) bg_calc_display_pane_g1

0x6fd0,	// (0x0001de03) bg_calc_display_pane_g2

0x0a94,	// (0x000178c7) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x00025f8b) bg_calc_display_pane_g

0x6fda,	// (0x0001de0d) cell_qdial_pane_ParamLimits

0x6fda,	// (0x0001de0d) cell_qdial_pane

0x87c0,	// (0x0001f5f3) cell_qdial_pane_g1_ParamLimits

0x87c0,	// (0x0001f5f3) cell_qdial_pane_g1

0x87cd,	// (0x0001f600) cell_qdial_pane_g2_ParamLimits

0x87cd,	// (0x0001f600) cell_qdial_pane_g2

0x0ab0,	// (0x000178e3) cell_qdial_pane_g3_ParamLimits

0x0ab0,	// (0x000178e3) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x00025f92) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x00025f92) cell_qdial_pane_g

0x87eb,	// (0x0001f61e) cell_qdial_pane_t1_ParamLimits

0x87eb,	// (0x0001f61e) cell_qdial_pane_t1

0x8803,	// (0x0001f636) cell_qdial_pane_t2_ParamLimits

0x8803,	// (0x0001f636) cell_qdial_pane_t2

0x8816,	// (0x0001f649) cell_qdial_pane_t3_ParamLimits

0x8816,	// (0x0001f649) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x00025f9b) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x00025f9b) cell_qdial_pane_t

0x067f,	// (0x000174b2) grid_highlight_pane_cp04

0x0abc,	// (0x000178ef) thumbnail_qdial_pane_ParamLimits

0x0abc,	// (0x000178ef) thumbnail_qdial_pane

0x0b18,	// (0x0001794b) list_help_pane

0x0b22,	// (0x00017955) scroll_pane_cp02

0x8829,	// (0x0001f65c) help_list_pane_t1_ParamLimits

0x8829,	// (0x0001f65c) help_list_pane_t1

0x6fec,	// (0x0001de1f) bg_notes_pane_g2

0x6ff4,	// (0x0001de27) bg_notes_pane_g3

0x6ffc,	// (0x0001de2f) notes_bg_pane_g1

0x7004,	// (0x0001de37) notes_bg_pane_g4

0x700c,	// (0x0001de3f) notes_bg_pane_g5

0x7014,	// (0x0001de47) notes_bg_pane_g6

0x701c,	// (0x0001de4f) notes_bg_pane_g7

0x7024,	// (0x0001de57) notes_bg_pane_g8

0x702c,	// (0x0001de5f) notes_bg_pane_g9

0x0006,

0xf186,	// (0x00025fb9) notes_bg_pane_g

0x8847,	// (0x0001f67a) list_notes_text_pane_ParamLimits

0x8847,	// (0x0001f67a) list_notes_text_pane

0x0b73,	// (0x000179a6) list_notes_text_pane_g1

0x886b,	// (0x0001f69e) list_notes_text_pane_t1

0x8879,	// (0x0001f6ac) listscroll_cale_week_pane

0x889e,	// (0x0001f6d1) bg_cale_heading_pane

0x0b96,	// (0x000179c9) bg_cale_pane_cp01

0x88b6,	// (0x0001f6e9) cale_week_corner_pane

0x88d0,	// (0x0001f703) cale_week_day_heading_pane

0x88e8,	// (0x0001f71b) cale_week_scroll_pane_g1

0x88fb,	// (0x0001f72e) cale_week_scroll_pane_g2

0x890e,	// (0x0001f741) cale_week_scroll_pane_g3

0x8921,	// (0x0001f754) cale_week_scroll_pane_g4

0x8934,	// (0x0001f767) cale_week_scroll_pane_g5

0x8947,	// (0x0001f77a) cale_week_scroll_pane_g6

0x895a,	// (0x0001f78d) cale_week_scroll_pane_g7

0x896d,	// (0x0001f7a0) cale_week_scroll_pane_g8

0x8980,	// (0x0001f7b3) cale_week_scroll_pane_g9

0x8993,	// (0x0001f7c6) cale_week_scroll_pane_g10

0x89a6,	// (0x0001f7d9) cale_week_scroll_pane_g11

0x89b9,	// (0x0001f7ec) cale_week_scroll_pane_g12

0x89cc,	// (0x0001f7ff) cale_week_scroll_pane_g13

0x89df,	// (0x0001f812) cale_week_scroll_pane_g14

0x89f2,	// (0x0001f825) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x00025fc8) cale_week_scroll_pane_g

0x8a18,	// (0x0001f84b) cale_week_time_pane

0x8a2b,	// (0x0001f85e) grid_cale_week_pane

0x0bc5,	// (0x000179f8) scroll_pane_cp08

0x8a40,	// (0x0001f873) cell_cale_week_pane_ParamLimits

0x8a40,	// (0x0001f873) cell_cale_week_pane

0x8a8e,	// (0x0001f8c1) cale_week_day_heading_pane_t1

0x8ac9,	// (0x0001f8fc) cale_week_day_heading_pane_t2

0x8b04,	// (0x0001f937) cale_week_day_heading_pane_t3

0x8b3f,	// (0x0001f972) cale_week_day_heading_pane_t4

0x8b7a,	// (0x0001f9ad) cale_week_day_heading_pane_t5

0x8bb5,	// (0x0001f9e8) cale_week_day_heading_pane_t6

0x8bf0,	// (0x0001fa23) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x00025fe9) cale_week_day_heading_pane_t

0x0be2,	// (0x00017a15) bg_cale_side_pane

0x7034,	// (0x0001de67) cale_week_time_pane_t1

0x706e,	// (0x0001dea1) cale_week_time_pane_t2

0x70a8,	// (0x0001dedb) cale_week_time_pane_t3

0x70e2,	// (0x0001df15) cale_week_time_pane_t4

0x711c,	// (0x0001df4f) cale_week_time_pane_t5

0x7156,	// (0x0001df89) cale_week_time_pane_t6

0x7190,	// (0x0001dfc3) cale_week_time_pane_t7

0x71ca,	// (0x0001dffd) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x00025ff8) cale_week_time_pane_t

0x8c2b,	// (0x0001fa5e) cell_cale_week_pane_g2

0x8c4f,	// (0x0001fa82) cell_cale_week_pane_g3_ParamLimits

0x8c4f,	// (0x0001fa82) cell_cale_week_pane_g3

0x0bf0,	// (0x00017a23) grid_highlight_pane_cp07

0x0bf8,	// (0x00017a2b) listscroll_gms_pane

0x0c02,	// (0x00017a35) grid_gms_pane

0x0c0b,	// (0x00017a3e) listscroll_gms_pane_g1

0x0c13,	// (0x00017a46) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x00026009) listscroll_gms_pane_g

0x8c67,	// (0x0001fa9a) scroll_pane_cp010

0x8c70,	// (0x0001faa3) cell_gms_pane_ParamLimits

0x8c70,	// (0x0001faa3) cell_gms_pane

0x8c81,	// (0x0001fab4) cell_gms_pane_g1

0x0c1b,	// (0x00017a4e) cell_gms_pane_g2

0x0b73,	// (0x000179a6) cell_gms_pane_g3

0x0c23,	// (0x00017a56) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0002600e) cell_gms_pane_g

0x0c2c,	// (0x00017a5f) grid_highlight_pane_cp09

0xac8a,	// (0x00021abd) phob_pre_status_pane_g1

0xac92,	// (0x00021ac5) phob_pre_status_pane_g2

0xac9a,	// (0x00021acd) phob_pre_status_pane_g3

0xaca2,	// (0x00021ad5) phob_pre_status_pane_g4

0x0004,

0xf5d9,	// (0x0002640c) phob_pre_status_pane_g

0xacb2,	// (0x00021ae5) phob_pre_status_pane_t1

0xacc0,	// (0x00021af3) phob_pre_status_pane_t2

0xacce,	// (0x00021b01) phob_pre_status_pane_t3

0x0002,

0xf5e4,	// (0x00026417) phob_pre_status_pane_t

0x0c34,	// (0x00017a67) bg_list_pane_cp05

0x8c89,	// (0x0001fabc) grid_vorec_pane

0x0c3c,	// (0x00017a6f) vorec_t1

0x0c4a,	// (0x00017a7d) vorec_t2

0x0c58,	// (0x00017a8b) vorec_t3

0x8c91,	// (0x0001fac4) vorec_t4

0x84b5,	// (0x0001f2e8) vorec_t5

0x84c3,	// (0x0001f2f6) vorec_t6

0x0004,

0xf1e4,	// (0x00026017) vorec_t

0x84d1,	// (0x0001f304) wait_bar_pane_cp01

0x1b0d,	// (0x00018940) cell_vorec_pane_ParamLimits

0x1b0d,	// (0x00018940) cell_vorec_pane

0x7204,	// (0x0001e037) cell_vorec_pane_g1

0x067f,	// (0x000174b2) grid_highlight_pane_cp05

0x8cab,	// (0x0001fade) cams_zoom_pane

0x8cb7,	// (0x0001faea) image_vga_pane

0x8cc4,	// (0x0001faf7) main_camera_pane_g1

0x8cd0,	// (0x0001fb03) main_camera_pane_g2

0x8cdc,	// (0x0001fb0f) main_camera_pane_g3

0x8ce8,	// (0x0001fb1b) main_camera_pane_g4

0x8cf4,	// (0x0001fb27) main_camera_pane_g5

0x8d00,	// (0x0001fb33) main_camera_pane_g6

0x8d0c,	// (0x0001fb3f) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x00026022) main_camera_pane_g

0x8d18,	// (0x0001fb4b) main_camera_pane_t1

0x8d2a,	// (0x0001fb5d) main_camera_pane_t2

0x0001,

0xf200,	// (0x00026033) main_camera_pane_t

0x8d4e,	// (0x0001fb81) cams_zoom_pane_cp_ParamLimits

0x8d4e,	// (0x0001fb81) cams_zoom_pane_cp

0x8d72,	// (0x0001fba5) image_cif_pane_ParamLimits

0x8d72,	// (0x0001fba5) image_cif_pane

0x8d8c,	// (0x0001fbbf) image_subqcif_pane

0x8d94,	// (0x0001fbc7) main_video_pane_g1_ParamLimits

0x8d94,	// (0x0001fbc7) main_video_pane_g1

0x8db4,	// (0x0001fbe7) main_video_pane_g2_ParamLimits

0x8db4,	// (0x0001fbe7) main_video_pane_g2

0x8de2,	// (0x0001fc15) main_video_pane_g3_ParamLimits

0x8de2,	// (0x0001fc15) main_video_pane_g3

0x8e0b,	// (0x0001fc3e) main_video_pane_g4_ParamLimits

0x8e0b,	// (0x0001fc3e) main_video_pane_g4

0x8e34,	// (0x0001fc67) main_video_pane_g5_ParamLimits

0x8e34,	// (0x0001fc67) main_video_pane_g5

0x0c8a,	// (0x00017abd) main_video_pane_g6_ParamLimits

0x0c8a,	// (0x00017abd) main_video_pane_g6

0x0006,

0xf205,	// (0x00026038) main_video_pane_g_ParamLimits

0xf205,	// (0x00026038) main_video_pane_g

0x8e56,	// (0x0001fc89) main_video_pane_t1_ParamLimits

0x8e56,	// (0x0001fc89) main_video_pane_t1

0x0ca4,	// (0x00017ad7) cams_zoom_pane_g1

0x0cad,	// (0x00017ae0) cams_zoom_pane_g2

0x0cb6,	// (0x00017ae9) cams_zoom_pane_g3

0x0cbf,	// (0x00017af2) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x00026047) cams_zoom_pane_g

0x8ea0,	// (0x0001fcd3) grid_cams_pane

0x8eac,	// (0x0001fcdf) linegrid_cams_pane

0x8eb8,	// (0x0001fceb) cell_cams_pane_ParamLimits

0x8eb8,	// (0x0001fceb) cell_cams_pane

0x0cc8,	// (0x00017afb) cams_burst_image_pane

0x0cd0,	// (0x00017b03) cell_cams_pane_g1

0x067f,	// (0x000174b2) grid_highlight_pane_cp03

0x0a68,	// (0x0001789b) mp_bg_pane_g1

0x067f,	// (0x000174b2) bg_list_pane_cp03

0x2b19,	// (0x0001994c) bg_mp_pane

0x2b21,	// (0x00019954) grid_mp_pane

0x2b29,	// (0x0001995c) media_player_g1

0x2b31,	// (0x00019964) media_player_t1

0x2b3f,	// (0x00019972) media_player_t2

0x2b4d,	// (0x00019980) media_player_t3

0x2b5b,	// (0x0001998e) media_player_t4

0x2b69,	// (0x0001999c) media_player_t5

0x2b77,	// (0x000199aa) media_player_t6

0x2b85,	// (0x000199b8) media_player_t7

0x0006,

0xf5c3,	// (0x000263f6) media_player_t

0x2b93,	// (0x000199c6) wait_bar_pane_cp02

0xf5a8,	// (0x000263db) main_usb_pane_t

0xac81,	// (0x00021ab4) cell_mp_pane

0x0a68,	// (0x0001789b) cell_mp_pane_g1

0x067f,	// (0x000174b2) grid_highlight_pane_cp06

0x0cd8,	// (0x00017b0b) grid_skin_colour_pane

0x0ce0,	// (0x00017b13) list_highlight_pane_cp03

0x8fc1,	// (0x0001fdf4) skin_g1

0x0ce8,	// (0x00017b1b) skin_t1

0x0cf7,	// (0x00017b2a) skin_t2

0x0001,

0xf249,	// (0x0002607c) skin_t

0x8fc9,	// (0x0001fdfc) cell_skin_colour_pane_ParamLimits

0x8fc9,	// (0x0001fdfc) cell_skin_colour_pane

0x0d05,	// (0x00017b38) cell_skin_colour_pane_g1

0x903f,	// (0x0001fe72) call_video_g1_ParamLimits

0x903f,	// (0x0001fe72) call_video_g1

0x904b,	// (0x0001fe7e) call_video_g2_ParamLimits

0x904b,	// (0x0001fe7e) call_video_g2

0x0001,

0xf24e,	// (0x00026081) call_video_g_ParamLimits

0xf24e,	// (0x00026081) call_video_g

0x909b,	// (0x0001fece) call_video_uplink_pane_cp1_ParamLimits

0x909b,	// (0x0001fece) call_video_uplink_pane_cp1

0x0d17,	// (0x00017b4a) call_video_uplink_pane_cp2

0x9157,	// (0x0001ff8a) video_down_crop_pane_ParamLimits

0x9157,	// (0x0001ff8a) video_down_crop_pane

0x9221,	// (0x00020054) video_down_pane_ParamLimits

0x9221,	// (0x00020054) video_down_pane

0x0d1f,	// (0x00017b52) video_down_subqcif_pane_ParamLimits

0x0d1f,	// (0x00017b52) video_down_subqcif_pane

0x0d37,	// (0x00017b6a) video_down_subqcif_pane_cp_ParamLimits

0x0d37,	// (0x00017b6a) video_down_subqcif_pane_cp

0x0d5b,	// (0x00017b8e) im_reading_pane_ParamLimits

0x0d5b,	// (0x00017b8e) im_reading_pane

0x92ed,	// (0x00020120) im_writing_pane_ParamLimits

0x92ed,	// (0x00020120) im_writing_pane

0x9303,	// (0x00020136) im_reading_pane_t1

0x0d75,	// (0x00017ba8) list_im_pane

0x0d86,	// (0x00017bb9) scroll_pane_cp07

0x933b,	// (0x0002016e) im_writing_pane_t1_ParamLimits

0x933b,	// (0x0002016e) im_writing_pane_t1

0x0d9f,	// (0x00017bd2) im_writing_pane_t2_ParamLimits

0x0d9f,	// (0x00017bd2) im_writing_pane_t2

0x0001,

0xf258,	// (0x0002608b) im_writing_pane_t_ParamLimits

0xf258,	// (0x0002608b) im_writing_pane_t

0x067f,	// (0x000174b2) input_focus_pane_cp04

0x067f,	// (0x000174b2) input_focus_pane_cp05

0x9350,	// (0x00020183) list_im_single_pane_ParamLimits

0x9350,	// (0x00020183) list_im_single_pane

0x0dbc,	// (0x00017bef) list_single_im_pane_t1

0xac47,	// (0x00021a7a) blid_accuracy_pane

0xac4f,	// (0x00021a82) blid_compass_pane

0xac57,	// (0x00021a8a) main_location_t1

0xac65,	// (0x00021a98) main_location_t2

0xac73,	// (0x00021aa6) main_location_t3

0x0002,

0xf5d2,	// (0x00026405) main_location_t

0x067f,	// (0x000174b2) aid_levels_location

0x0a68,	// (0x0001789b) blid_accuracy_pane_g1

0x0a68,	// (0x0001789b) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x000260ed) blid_accuracy_pane_g

0x0df6,	// (0x00017c29) wml_content_pane

0x0e34,	// (0x00017c67) wml_button_pane_ParamLimits

0x0e34,	// (0x00017c67) wml_button_pane

0x9368,	// (0x0002019b) wml_list_single_large_pane_ParamLimits

0x9368,	// (0x0002019b) wml_list_single_large_pane

0x937f,	// (0x000201b2) wml_list_single_medium_pane_ParamLimits

0x937f,	// (0x000201b2) wml_list_single_medium_pane

0x9397,	// (0x000201ca) wml_list_single_small_pane_ParamLimits

0x9397,	// (0x000201ca) wml_list_single_small_pane

0x0e48,	// (0x00017c7b) wml_selection_box_pane_ParamLimits

0x0e48,	// (0x00017c7b) wml_selection_box_pane

0x0e5b,	// (0x00017c8e) wml_list_single_pane_t1

0x0e6a,	// (0x00017c9d) wml_list_single_medium_pane_t1

0x0e79,	// (0x00017cac) wml_list_single_large_pane_t1

0x0e88,	// (0x00017cbb) input_focus_pane_cp02_ParamLimits

0x0e88,	// (0x00017cbb) input_focus_pane_cp02

0x0e9b,	// (0x00017cce) wml_selection_box_pane_g1

0x0ea4,	// (0x00017cd7) wml_selection_box_pane_t1_ParamLimits

0x0ea4,	// (0x00017cd7) wml_selection_box_pane_t1

0x08da,	// (0x0001770d) bg_wml_button_pane_ParamLimits

0x08da,	// (0x0001770d) bg_wml_button_pane

0x0ebc,	// (0x00017cef) wml_button_pane_g1

0x0ec4,	// (0x00017cf7) wml_button_pane_t1

0x0ebc,	// (0x00017cef) wml_button_bg_pane_g1

0x0ed4,	// (0x00017d07) wml_button_bg_pane_g2

0x0edc,	// (0x00017d0f) wml_button_bg_pane_g3

0x0ee4,	// (0x00017d17) wml_button_bg_pane_g4

0x0eec,	// (0x00017d1f) wml_button_bg_pane_g5

0x0ef4,	// (0x00017d27) wml_button_bg_pane_g6

0x0efc,	// (0x00017d2f) wml_button_bg_pane_g7

0x0f04,	// (0x00017d37) wml_button_bg_pane_g8

0x0f0c,	// (0x00017d3f) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x00026090) wml_button_bg_pane_g

0x93b2,	// (0x000201e5) bg_list_pane_cp02

0x0f14,	// (0x00017d47) mce_header_pane_ParamLimits

0x0f14,	// (0x00017d47) mce_header_pane

0x0f28,	// (0x00017d5b) mce_icon_pane

0x0f28,	// (0x00017d5b) mce_image_pane

0x0f31,	// (0x00017d64) mce_text_pane_ParamLimits

0x0f31,	// (0x00017d64) mce_text_pane

0x93bb,	// (0x000201ee) scroll_pane_cp03

0x93bb,	// (0x000201ee) scroll_pane_cp04

0x0f45,	// (0x00017d78) scroll_pane_cp05_ParamLimits

0x0f45,	// (0x00017d78) scroll_pane_cp05

0x93c3,	// (0x000201f6) mce_header_field_pane_ParamLimits

0x93c3,	// (0x000201f6) mce_header_field_pane

0x93e3,	// (0x00020216) mce_header_field_pane_2_ParamLimits

0x93e3,	// (0x00020216) mce_header_field_pane_2

0x93f9,	// (0x0002022c) mce_header_field_pane_3

0x9401,	// (0x00020234) list_single_mce_message_pane_ParamLimits

0x9401,	// (0x00020234) list_single_mce_message_pane

0x9418,	// (0x0002024b) list_single_mce_smart_pane_ParamLimits

0x9418,	// (0x0002024b) list_single_mce_smart_pane

0x0f51,	// (0x00017d84) input_focus_pane_cp03

0x0f5a,	// (0x00017d8d) list_header_data_pane

0x943a,	// (0x0002026d) mce_header_field_pane_t1

0x9448,	// (0x0002027b) list_single_mce_header_pane_ParamLimits

0x9448,	// (0x0002027b) list_single_mce_header_pane

0x0f62,	// (0x00017d95) list_single_mce_header_pane_t1

0x0f71,	// (0x00017da4) list_single_mce_message_pane_g1

0x0f7a,	// (0x00017dad) list_single_mce_message_pane_t1

0x9486,	// (0x000202b9) bg_cale_heading_pane_cp01_ParamLimits

0x9486,	// (0x000202b9) bg_cale_heading_pane_cp01

0x0f89,	// (0x00017dbc) bg_cale_pane_cp02_ParamLimits

0x0f89,	// (0x00017dbc) bg_cale_pane_cp02

0x94b5,	// (0x000202e8) cale_month_corner_pane

0x94cf,	// (0x00020302) cale_month_day_heading_pane_ParamLimits

0x94cf,	// (0x00020302) cale_month_day_heading_pane

0x94fe,	// (0x00020331) cale_month_pane_g1_ParamLimits

0x94fe,	// (0x00020331) cale_month_pane_g1

0x9522,	// (0x00020355) cale_month_pane_g2_ParamLimits

0x9522,	// (0x00020355) cale_month_pane_g2

0x9541,	// (0x00020374) cale_month_pane_g3_ParamLimits

0x9541,	// (0x00020374) cale_month_pane_g3

0x957d,	// (0x000203b0) cale_month_pane_g4_ParamLimits

0x957d,	// (0x000203b0) cale_month_pane_g4

0x95b9,	// (0x000203ec) cale_month_pane_g5_ParamLimits

0x95b9,	// (0x000203ec) cale_month_pane_g5

0x95f5,	// (0x00020428) cale_month_pane_g6_ParamLimits

0x95f5,	// (0x00020428) cale_month_pane_g6

0x9631,	// (0x00020464) cale_month_pane_g7_ParamLimits

0x9631,	// (0x00020464) cale_month_pane_g7

0x966d,	// (0x000204a0) cale_month_pane_g8_ParamLimits

0x966d,	// (0x000204a0) cale_month_pane_g8

0x96a9,	// (0x000204dc) cale_month_pane_g9_ParamLimits

0x96a9,	// (0x000204dc) cale_month_pane_g9

0x96e3,	// (0x00020516) cale_month_pane_g10_ParamLimits

0x96e3,	// (0x00020516) cale_month_pane_g10

0x971d,	// (0x00020550) cale_month_pane_g11_ParamLimits

0x971d,	// (0x00020550) cale_month_pane_g11

0x9757,	// (0x0002058a) cale_month_pane_g12_ParamLimits

0x9757,	// (0x0002058a) cale_month_pane_g12

0x9791,	// (0x000205c4) cale_month_pane_g13_ParamLimits

0x9791,	// (0x000205c4) cale_month_pane_g13

0x000c,

0xf270,	// (0x000260a3) cale_month_pane_g_ParamLimits

0xf270,	// (0x000260a3) cale_month_pane_g

0x97cb,	// (0x000205fe) cale_month_week_pane

0x97de,	// (0x00020611) grid_cale_month_pane_ParamLimits

0x97de,	// (0x00020611) grid_cale_month_pane

0x9804,	// (0x00020637) cale_month_day_heading_pane_t1

0x988a,	// (0x000206bd) cale_month_day_heading_pane_t2

0x991b,	// (0x0002074e) cale_month_day_heading_pane_t3

0x99ac,	// (0x000207df) cale_month_day_heading_pane_t4

0x9a3d,	// (0x00020870) cale_month_day_heading_pane_t5

0x9ace,	// (0x00020901) cale_month_day_heading_pane_t6

0x9b5f,	// (0x00020992) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x000260be) cale_month_day_heading_pane_t

0x0be2,	// (0x00017a15) bg_cale_side_pane_cp01

0x9bf0,	// (0x00020a23) cale_month_week_pane_t1

0x9c29,	// (0x00020a5c) cale_month_week_pane_t2

0x9c62,	// (0x00020a95) cale_month_week_pane_t3

0x9c9b,	// (0x00020ace) cale_month_week_pane_t4

0x9cd4,	// (0x00020b07) cale_month_week_pane_t5

0x9d0d,	// (0x00020b40) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x000260cd) cale_month_week_pane_t

0x9d46,	// (0x00020b79) cell_cale_month_pane_ParamLimits

0x9d46,	// (0x00020b79) cell_cale_month_pane

0x720e,	// (0x0001e041) cell_cale_month_pane_g1

0x721a,	// (0x0001e04d) cell_cale_month_pane_t1_ParamLimits

0x721a,	// (0x0001e04d) cell_cale_month_pane_t1

0x0bf0,	// (0x00017a23) grid_highlight_pane_cp08

0x0a68,	// (0x0001789b) main_smil_g1

0x9e5e,	// (0x00020c91) smil_status_pane

0x0fd4,	// (0x00017e07) smil_text_pane

0x29f9,	// (0x0001982c) bg_popup_call3_rect_pane_g8

0x2a01,	// (0x00019834) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x00026386) bg_popup_call3_rect_pane_g

0x2cf5,	// (0x00019b28) smil_status_volume_pane_g1

0x9e6f,	// (0x00020ca2) smil_status_pane_t1

0x74a5,	// (0x0001e2d8) volume_smil_pane

0x0fde,	// (0x00017e11) list_smil_text_pane

0x9e86,	// (0x00020cb9) scroll_pane_cp011

0x9e8f,	// (0x00020cc2) smil_text_list_pane_t1_ParamLimits

0x9e8f,	// (0x00020cc2) smil_text_list_pane_t1

0x723a,	// (0x0001e06d) aid_volume_smil_ParamLimits

0x723a,	// (0x0001e06d) aid_volume_smil

0x0a68,	// (0x0001789b) smil_volume_pane_g1

0x0a68,	// (0x0001789b) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x000260ed) smil_volume_pane_g

0x8879,	// (0x0001f6ac) listscroll_cale_day_pane

0x100a,	// (0x00017e3d) bg_cale_pane

0x1022,	// (0x00017e55) list_cale_pane

0x1045,	// (0x00017e78) scroll_pane_cp09

0x1056,	// (0x00017e89) cale_bg_pane_g1

0x105e,	// (0x00017e91) cale_bg_pane_g2

0x1066,	// (0x00017e99) cale_bg_pane_g3

0x106e,	// (0x00017ea1) cale_bg_pane_g4

0x1076,	// (0x00017ea9) cale_bg_pane_g5

0x107e,	// (0x00017eb1) cale_bg_pane_g6

0x1086,	// (0x00017eb9) cale_bg_pane_g7

0x108e,	// (0x00017ec1) cale_bg_pane_g8

0x1096,	// (0x00017ec9) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x000260f2) cale_bg_pane_g

0x9ed6,	// (0x00020d09) list_cale_time_pane_ParamLimits

0x9ed6,	// (0x00020d09) list_cale_time_pane

0x109e,	// (0x00017ed1) list_cale_time_pane_g1_ParamLimits

0x109e,	// (0x00017ed1) list_cale_time_pane_g1

0x10aa,	// (0x00017edd) list_cale_time_pane_g2_ParamLimits

0x10aa,	// (0x00017edd) list_cale_time_pane_g2

0x9eea,	// (0x00020d1d) list_cale_time_pane_g3_ParamLimits

0x9eea,	// (0x00020d1d) list_cale_time_pane_g3

0x9ef6,	// (0x00020d29) list_cale_time_pane_g4_ParamLimits

0x9ef6,	// (0x00020d29) list_cale_time_pane_g4

0x9f02,	// (0x00020d35) list_cale_time_pane_g5_ParamLimits

0x9f02,	// (0x00020d35) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x00026105) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x00026105) list_cale_time_pane_g

0x10c4,	// (0x00017ef7) list_cale_time_pane_t1_ParamLimits

0x10c4,	// (0x00017ef7) list_cale_time_pane_t1

0x10ec,	// (0x00017f1f) list_cale_time_pane_t2_ParamLimits

0x10ec,	// (0x00017f1f) list_cale_time_pane_t2

0xa244,	// (0x00021077) aid_blid_cardinal_pane

0xa282,	// (0x000210b5) compass_pane_t4

0x1114,	// (0x00017f47) list_cale_time_pane_t4_ParamLimits

0x1114,	// (0x00017f47) list_cale_time_pane_t4

0xa290,	// (0x000210c3) compass_pane_t5

0xa29e,	// (0x000210d1) compass_pane_t6

0xa2ac,	// (0x000210df) compass_pane_t7

0x15ee,	// (0x00018421) navi_pane_cc_t1

0x17a5,	// (0x000185d8) aid_phob_thumbnail_center_pane

0xa7f4,	// (0x00021627) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x00026112) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x00026112) list_cale_time_pane_t

0x02d8,	// (0x0001710b) bg_popup_window_pane_cp02_ParamLimits

0x02d8,	// (0x0001710b) bg_popup_window_pane_cp02

0x113c,	// (0x00017f6f) heading_pane_cp01_ParamLimits

0x113c,	// (0x00017f6f) heading_pane_cp01

0x1148,	// (0x00017f7b) loc_req_pane_ParamLimits

0x1148,	// (0x00017f7b) loc_req_pane

0x1158,	// (0x00017f8b) loc_type_pane_ParamLimits

0x1158,	// (0x00017f8b) loc_type_pane

0x116a,	// (0x00017f9d) loc_type_pane_t1_ParamLimits

0x116a,	// (0x00017f9d) loc_type_pane_t1

0x117c,	// (0x00017faf) loc_type_pane_t2_ParamLimits

0x117c,	// (0x00017faf) loc_type_pane_t2

0x118e,	// (0x00017fc1) loc_type_pane_t3_ParamLimits

0x118e,	// (0x00017fc1) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x00026119) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x00026119) loc_type_pane_t

0x11a0,	// (0x00017fd3) list_loc_req_pane

0x11aa,	// (0x00017fdd) scroll_pane_cp012

0x9f0e,	// (0x00020d41) list_single_loc_request_popup_menu_pane_ParamLimits

0x9f0e,	// (0x00020d41) list_single_loc_request_popup_menu_pane

0x11b3,	// (0x00017fe6) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x11b3,	// (0x00017fe6) list_single_loc_request_popup_menu_pane_g1

0x11bf,	// (0x00017ff2) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x11bf,	// (0x00017ff2) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x00026120) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x00026120) list_single_loc_request_popup_menu_pane_g

0x11cb,	// (0x00017ffe) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x11cb,	// (0x00017ffe) list_single_loc_request_popup_menu_pane_t1

0x9f20,	// (0x00020d53) bg_popup_window_pane_cp03_ParamLimits

0x9f20,	// (0x00020d53) bg_popup_window_pane_cp03

0x9f2e,	// (0x00020d61) heading_loc_req_pane_ParamLimits

0x9f2e,	// (0x00020d61) heading_loc_req_pane

0x9f3a,	// (0x00020d6d) popup_dyc_status_message_window_g1_ParamLimits

0x9f3a,	// (0x00020d6d) popup_dyc_status_message_window_g1

0x9f46,	// (0x00020d79) popup_dyc_status_message_window_t1_ParamLimits

0x9f46,	// (0x00020d79) popup_dyc_status_message_window_t1

0x9f58,	// (0x00020d8b) popup_dyc_status_message_window_t2_ParamLimits

0x9f58,	// (0x00020d8b) popup_dyc_status_message_window_t2

0x9f6a,	// (0x00020d9d) popup_dyc_status_message_window_t3_ParamLimits

0x9f6a,	// (0x00020d9d) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x00026125) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x00026125) popup_dyc_status_message_window_t

0x067f,	// (0x000174b2) bg_heading_pane_cp01

0x11ed,	// (0x00018020) heading_loc_req_pane_g1

0x11f5,	// (0x00018028) heading_loc_req_pane_g2

0x11fd,	// (0x00018030) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0002612c) heading_loc_req_pane_g

0x1205,	// (0x00018038) heading_loc_req_pane_t1

0x1214,	// (0x00018047) bg_popup_sub_pane_cp01_ParamLimits

0x1214,	// (0x00018047) bg_popup_sub_pane_cp01

0x1222,	// (0x00018055) popup_cale_events_window_g1_ParamLimits

0x1222,	// (0x00018055) popup_cale_events_window_g1

0x1242,	// (0x00018075) popup_cale_events_window_g2_ParamLimits

0x1242,	// (0x00018075) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x00026160) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x00026160) popup_cale_events_window_g

0x1262,	// (0x00018095) popup_cale_events_window_t1_ParamLimits

0x1262,	// (0x00018095) popup_cale_events_window_t1

0x1274,	// (0x000180a7) popup_cale_events_window_t2_ParamLimits

0x1274,	// (0x000180a7) popup_cale_events_window_t2

0x12b2,	// (0x000180e5) popup_cale_events_window_t3_ParamLimits

0x12b2,	// (0x000180e5) popup_cale_events_window_t3

0x12ec,	// (0x0001811f) popup_cale_events_window_t4_ParamLimits

0x12ec,	// (0x0001811f) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x00026165) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x00026165) popup_cale_events_window_t

0xa08a,	// (0x00020ebd) call_type_pane

0x17bd,	// (0x000185f0) popup_call_status_window_g1

0xa096,	// (0x00020ec9) popup_call_status_window_g2

0xa0a2,	// (0x00020ed5) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0002616e) popup_call_status_window_g

0x1322,	// (0x00018155) call_type_pane_g1

0x132b,	// (0x0001815e) call_type_pane_g2

0x0001,

0xf342,	// (0x00026175) call_type_pane_g

0x067f,	// (0x000174b2) bg_popup_sub_pane_cp02

0x1334,	// (0x00018167) listscroll_popup_wml_pane

0x133c,	// (0x0001816f) list_wml_pane

0x1346,	// (0x00018179) scroll_pane_cp013

0xa0ae,	// (0x00020ee1) list_single_graphic_popup_wml_pane_ParamLimits

0xa0ae,	// (0x00020ee1) list_single_graphic_popup_wml_pane

0x0a68,	// (0x0001789b) list_single_graphic_popup_wml_pane_g1

0x134f,	// (0x00018182) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0002617a) list_single_graphic_popup_wml_pane_g

0x1357,	// (0x0001818a) list_single_graphic_popup_wml_pane_t1

0x1365,	// (0x00018198) aid_call_pane

0x08d2,	// (0x00017705) popup_clock_analogue_window_g1

0x08d2,	// (0x00017705) popup_clock_analogue_window_g2

0x725c,	// (0x0001e08f) popup_clock_analogue_window_g3

0x725c,	// (0x0001e08f) popup_clock_analogue_window_g4

0x0a68,	// (0x0001789b) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0002617f) popup_clock_analogue_window_g

0x7264,	// (0x0001e097) popup_clock_analogue_window_t1

0x7272,	// (0x0001e0a5) clock_digital_number_pane_ParamLimits

0x7272,	// (0x0001e0a5) clock_digital_number_pane

0x727e,	// (0x0001e0b1) clock_digital_number_pane_cp02_ParamLimits

0x727e,	// (0x0001e0b1) clock_digital_number_pane_cp02

0x728a,	// (0x0001e0bd) clock_digital_number_pane_cp03_ParamLimits

0x728a,	// (0x0001e0bd) clock_digital_number_pane_cp03

0x7296,	// (0x0001e0c9) clock_digital_number_pane_cp04_ParamLimits

0x7296,	// (0x0001e0c9) clock_digital_number_pane_cp04

0x72a2,	// (0x0001e0d5) clock_digital_separator_pane_ParamLimits

0x72a2,	// (0x0001e0d5) clock_digital_separator_pane

0x72ae,	// (0x0001e0e1) popup_clock_digital_window_t1

0x0a68,	// (0x0001789b) clock_digital_number_pane_g1

0x0a68,	// (0x0001789b) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x000260ed) clock_digital_number_pane_g

0x0a68,	// (0x0001789b) clock_digital_separator_pane_g1

0x0a68,	// (0x0001789b) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x000260ed) clock_digital_separator_pane_g

0x067f,	// (0x000174b2) bg_popup_window_pane_cp04

0x13e4,	// (0x00018217) heading_pane_cp03

0x13ec,	// (0x0001821f) listscroll_popup_gms_pane

0x13f4,	// (0x00018227) grid_large_graphic_popup_pane

0x13fe,	// (0x00018231) listscroll_popup_gms_pane_g1

0x1406,	// (0x00018239) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0002618a) listscroll_popup_gms_pane_g

0x0e2c,	// (0x00017c5f) scroll_pane_cp014

0xa0c2,	// (0x00020ef5) cell_large_graphic_popup_pane_ParamLimits

0xa0c2,	// (0x00020ef5) cell_large_graphic_popup_pane

0xa0d9,	// (0x00020f0c) cell_large_graphic_popup_pane_g1_ParamLimits

0xa0d9,	// (0x00020f0c) cell_large_graphic_popup_pane_g1

0x140e,	// (0x00018241) cell_large_graphic_popup_pane_g2_ParamLimits

0x140e,	// (0x00018241) cell_large_graphic_popup_pane_g2

0x141a,	// (0x0001824d) cell_large_graphic_popup_pane_g3_ParamLimits

0x141a,	// (0x0001824d) cell_large_graphic_popup_pane_g3

0x1427,	// (0x0001825a) cell_large_graphic_popup_pane_g4_ParamLimits

0x1427,	// (0x0001825a) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0002618f) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0002618f) cell_large_graphic_popup_pane_g

0x1437,	// (0x0001826a) grid_highlight_pane_cp010

0x0a68,	// (0x0001789b) bg_popup_call_pane_g1

0x1441,	// (0x00018274) list_single_graphic_popup_conf_pane_ParamLimits

0x1441,	// (0x00018274) list_single_graphic_popup_conf_pane

0x1454,	// (0x00018287) list_highlight_pane_cp01

0x145d,	// (0x00018290) list_single_graphic_popup_conf_pane_g1

0x1465,	// (0x00018298) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x00026198) list_single_graphic_popup_conf_pane_g

0x146d,	// (0x000182a0) list_single_graphic_popup_conf_pane_t1

0x147b,	// (0x000182ae) linegrid_cams_pane_g1

0xa0e5,	// (0x00020f18) linegrid_cams_pane_g2

0x0b73,	// (0x000179a6) linegrid_cams_pane_g3

0x1484,	// (0x000182b7) linegrid_cams_pane_g4

0xa0ee,	// (0x00020f21) linegrid_cams_pane_g5

0xa0f7,	// (0x00020f2a) linegrid_cams_pane_g6

0x0c23,	// (0x00017a56) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0002619d) linegrid_cams_pane_g

0x148d,	// (0x000182c0) popup_clock_analogue_window

0x148d,	// (0x000182c0) popup_clock_digital_window

0x067f,	// (0x000174b2) popup_phob_thumbnail_window

0x0a68,	// (0x0001789b) call_video_uplink_pane_g1

0x1496,	// (0x000182c9) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x000261ac) call_video_uplink_pane_g

0x0bf0,	// (0x00017a23) video_uplink_pane

0x149e,	// (0x000182d1) mce_image_pane_g1

0xa100,	// (0x00020f33) mce_image_pane_g2

0xa108,	// (0x00020f3b) mce_image_pane_g3

0xa110,	// (0x00020f43) mce_image_pane_g4

0xa118,	// (0x00020f4b) mce_image_pane_g5

0x0004,

0xf37e,	// (0x000261b1) mce_image_pane_g

0x14a8,	// (0x000182db) control_top_pane_stacon_cp01_ParamLimits

0x14a8,	// (0x000182db) control_top_pane_stacon_cp01

0x14b8,	// (0x000182eb) uni_indicator_pane_stacon_cp01_ParamLimits

0x14b8,	// (0x000182eb) uni_indicator_pane_stacon_cp01

0x14c9,	// (0x000182fc) bg_popup_sub_pane_cp03

0x14d3,	// (0x00018306) chi_dic_find_pane

0xa120,	// (0x00020f53) listscroll_chi_dic_pane

0x14db,	// (0x0001830e) main_pane_chidic_g1

0x14e3,	// (0x00018316) chi_dic_find_pane_t1

0x14f1,	// (0x00018324) find_chidic_pane

0x14fa,	// (0x0001832d) chi_dic_list_pane_ParamLimits

0x14fa,	// (0x0001832d) chi_dic_list_pane

0x150b,	// (0x0001833e) scroll_pane_cp020

0x1513,	// (0x00018346) find_chidic_pane_t1

0x067f,	// (0x000174b2) input_focus_pane_cp06

0xa132,	// (0x00020f65) list_chi_dic_pane_ParamLimits

0xa132,	// (0x00020f65) list_chi_dic_pane

0xa145,	// (0x00020f78) list_chi_dic_pane_t1_ParamLimits

0xa145,	// (0x00020f78) list_chi_dic_pane_t1

0x067f,	// (0x000174b2) list_highlight_pane_cp020

0x1522,	// (0x00018355) bg_cale_heading_pane_g1

0xa158,	// (0x00020f8b) bg_cale_heading_pane_g2

0xa160,	// (0x00020f93) bg_cale_heading_pane_g3

0xa168,	// (0x00020f9b) bg_cale_heading_pane_g4

0xa170,	// (0x00020fa3) bg_cale_heading_pane_g5

0xa178,	// (0x00020fab) bg_cale_heading_pane_g6

0xa180,	// (0x00020fb3) bg_cale_heading_pane_g7

0xa188,	// (0x00020fbb) bg_cale_heading_pane_g8

0xa190,	// (0x00020fc3) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x000261bc) bg_cale_heading_pane_g

0x1522,	// (0x00018355) bg_cale_side_pane_g1

0xa198,	// (0x00020fcb) bg_cale_side_pane_g2

0xa1a0,	// (0x00020fd3) bg_cale_side_pane_g3

0xa1a8,	// (0x00020fdb) bg_cale_side_pane_g4

0xa1b0,	// (0x00020fe3) bg_cale_side_pane_g5

0xa1b8,	// (0x00020feb) bg_cale_side_pane_g6

0xa1c0,	// (0x00020ff3) bg_cale_side_pane_g7

0xa1c8,	// (0x00020ffb) bg_cale_side_pane_g8

0xa1d0,	// (0x00021003) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x000261cf) bg_cale_side_pane_g

0xa1d8,	// (0x0002100b) popup_call_status_window_ParamLimits

0xa1d8,	// (0x0002100b) popup_call_status_window

0x152a,	// (0x0001835d) stacon_top_pane

0x1532,	// (0x00018365) status_pane_ParamLimits

0x1532,	// (0x00018365) status_pane

0x154c,	// (0x0001837f) status_small_pane

0x1554,	// (0x00018387) control_pane

0x067f,	// (0x000174b2) stacon_bottom_pane

0x155c,	// (0x0001838f) list_single_mce_smart_pane_t1_ParamLimits

0x155c,	// (0x0001838f) list_single_mce_smart_pane_t1

0x156f,	// (0x000183a2) list_single_mce_smart_pane_t2_ParamLimits

0x156f,	// (0x000183a2) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x000261e2) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x000261e2) list_single_mce_smart_pane_t

0xa1e7,	// (0x0002101a) compass_pane

0xa1f0,	// (0x00021023) main_location2_pane_t1

0xa206,	// (0x00021039) main_location2_pane_t2

0xa21c,	// (0x0002104f) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x000261e7) main_location2_pane_t

0x1597,	// (0x000183ca) compass_pane_g1_ParamLimits

0x1597,	// (0x000183ca) compass_pane_g1

0xa264,	// (0x00021097) compass_pane_t1

0xa273,	// (0x000210a6) compass_pane_t2

0x0005,

0xf3bd,	// (0x000261f0) compass_pane_t

0xa2ba,	// (0x000210ed) text_secondary_cp61

0x15e5,	// (0x00018418) navi_pane_cams_g5

0x1631,	// (0x00018464) navi_pane_im_t1

0x163f,	// (0x00018472) navi_pane_mp_g1_ParamLimits

0x163f,	// (0x00018472) navi_pane_mp_g1

0x1653,	// (0x00018486) navi_pane_mp_g2_ParamLimits

0x1653,	// (0x00018486) navi_pane_mp_g2

0x165f,	// (0x00018492) navi_pane_mp_g3_ParamLimits

0x165f,	// (0x00018492) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x00026204) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x00026204) navi_pane_mp_g

0x166b,	// (0x0001849e) navi_pane_mp_t1

0x1679,	// (0x000184ac) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0002620b) navi_pane_mp_t

0x16e4,	// (0x00018517) navi_pane_vt_g1

0x166b,	// (0x0001849e) navi_pane_vt_t1

0x16ec,	// (0x0001851f) navi_slider_pane

0x0c34,	// (0x00017a67) zooming_pane

0x16f4,	// (0x00018527) navi_slider_pane_g1

0x72cb,	// (0x0001e0fe) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x00026212) navi_slider_pane_g

0x172a,	// (0x0001855d) aid_levels_zoom

0x1732,	// (0x00018565) zooming_pane_g1

0x173a,	// (0x0001856d) zooming_pane_g2

0x173a,	// (0x0001856d) zooming_pane_g3

0x0002,

0xf3ee,	// (0x00026221) zooming_pane_g

0x1742,	// (0x00018575) level_10_zoom

0x174b,	// (0x0001857e) level_11_zoom

0x1754,	// (0x00018587) level_1_zoom

0x175d,	// (0x00018590) level_2_zoom

0x1766,	// (0x00018599) level_3_zoom

0x176f,	// (0x000185a2) level_4_zoom

0x1778,	// (0x000185ab) level_5_zoom

0x1781,	// (0x000185b4) level_6_zoom

0x178a,	// (0x000185bd) level_7_zoom

0x1793,	// (0x000185c6) level_8_zoom

0x179c,	// (0x000185cf) level_9_zoom

0x17ad,	// (0x000185e0) popup_phob_thumbnail_window_g1

0x17b5,	// (0x000185e8) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x00026228) popup_phob_thumbnail_window_g

0x2b9b,	// (0x000199ce) level_1_location

0x2ba3,	// (0x000199d6) level_2_location

0x2bab,	// (0x000199de) level_3_location

0x2bb3,	// (0x000199e6) level_4_location

0x0c34,	// (0x00017a67) level_5_location

0xa33c,	// (0x0002116f) mce_icon_pane_g1

0xa344,	// (0x00021177) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0002622d) mce_icon_pane_g

0xa34c,	// (0x0002117f) main_mup_pane_g1_ParamLimits

0xa34c,	// (0x0002117f) main_mup_pane_g1

0xa364,	// (0x00021197) main_mup_pane_g2_ParamLimits

0xa364,	// (0x00021197) main_mup_pane_g2

0xa380,	// (0x000211b3) main_mup_pane_g3_ParamLimits

0xa380,	// (0x000211b3) main_mup_pane_g3

0xa39c,	// (0x000211cf) main_mup_pane_g4_ParamLimits

0xa39c,	// (0x000211cf) main_mup_pane_g4

0xa3b8,	// (0x000211eb) main_mup_pane_g5_ParamLimits

0xa3b8,	// (0x000211eb) main_mup_pane_g5

0xa3d5,	// (0x00021208) main_mup_pane_g6_ParamLimits

0xa3d5,	// (0x00021208) main_mup_pane_g6

0xa3f1,	// (0x00021224) main_mup_pane_g7_ParamLimits

0xa3f1,	// (0x00021224) main_mup_pane_g7

0xa40d,	// (0x00021240) main_mup_pane_g8_ParamLimits

0xa40d,	// (0x00021240) main_mup_pane_g8

0xa429,	// (0x0002125c) main_mup_pane_g9_ParamLimits

0xa429,	// (0x0002125c) main_mup_pane_g9

0xa440,	// (0x00021273) main_mup_pane_g10_ParamLimits

0xa440,	// (0x00021273) main_mup_pane_g10

0xa457,	// (0x0002128a) main_mup_pane_g11_ParamLimits

0xa457,	// (0x0002128a) main_mup_pane_g11

0xa46b,	// (0x0002129e) main_mup_pane_g12_ParamLimits

0xa46b,	// (0x0002129e) main_mup_pane_g12

0xa477,	// (0x000212aa) main_mup_pane_g13_ParamLimits

0xa477,	// (0x000212aa) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x00026232) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x00026232) main_mup_pane_g

0xa48b,	// (0x000212be) main_mup_pane_t1_ParamLimits

0xa48b,	// (0x000212be) main_mup_pane_t1

0xa4a8,	// (0x000212db) main_mup_pane_t2_ParamLimits

0xa4a8,	// (0x000212db) main_mup_pane_t2

0xa4c2,	// (0x000212f5) main_mup_pane_t3_ParamLimits

0xa4c2,	// (0x000212f5) main_mup_pane_t3

0xa4dc,	// (0x0002130f) main_mup_pane_t4_ParamLimits

0xa4dc,	// (0x0002130f) main_mup_pane_t4

0xa4ee,	// (0x00021321) main_mup_pane_t5_ParamLimits

0xa4ee,	// (0x00021321) main_mup_pane_t5

0xa500,	// (0x00021333) main_mup_pane_t6_ParamLimits

0xa500,	// (0x00021333) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0002624d) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0002624d) main_mup_pane_t

0xa516,	// (0x00021349) mup_progress_pane_ParamLimits

0xa516,	// (0x00021349) mup_progress_pane

0xa522,	// (0x00021355) mup_visualizer_pane_ParamLimits

0xa522,	// (0x00021355) mup_visualizer_pane

0xa550,	// (0x00021383) mup_volume_pane_ParamLimits

0xa550,	// (0x00021383) mup_volume_pane

0x17bd,	// (0x000185f0) mup_visualizer_pane_g1_ParamLimits

0x17bd,	// (0x000185f0) mup_visualizer_pane_g1

0x17bd,	// (0x000185f0) mup_visualizer_pane_g2_ParamLimits

0x17bd,	// (0x000185f0) mup_visualizer_pane_g2

0x1597,	// (0x000183ca) mup_visualizer_pane_g3_ParamLimits

0x1597,	// (0x000183ca) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0002625a) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0002625a) mup_visualizer_pane_g

0x0a68,	// (0x0001789b) mup_volume_pane_g1

0x17d3,	// (0x00018606) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x00026261) mup_volume_pane_g

0x0a68,	// (0x0001789b) mup_progress_pane_g1

0x17dc,	// (0x0001860f) mup_progress_pane_g2

0x17e5,	// (0x00018618) mup_progress_pane_g3

0x0002,

0xf433,	// (0x00026266) mup_progress_pane_g

0x067f,	// (0x000174b2) bg_popup_window_pane_cp05

0x17ee,	// (0x00018621) heading_pane_cp02_ParamLimits

0x17ee,	// (0x00018621) heading_pane_cp02

0x1808,	// (0x0001863b) list_popup_blid_pane

0x1810,	// (0x00018643) list_blid_sat_info_pane_ParamLimits

0x1810,	// (0x00018643) list_blid_sat_info_pane

0x1823,	// (0x00018656) list_blid_sat_info_pane_g1

0x182b,	// (0x0001865e) list_blid_sat_info_pane_t1

0xa643,	// (0x00021476) mup_equalizer_pane_ParamLimits

0xa643,	// (0x00021476) mup_equalizer_pane

0xa65c,	// (0x0002148f) mup_equalizer_pane_cp1_ParamLimits

0xa65c,	// (0x0002148f) mup_equalizer_pane_cp1

0xa675,	// (0x000214a8) mup_equalizer_pane_cp2_ParamLimits

0xa675,	// (0x000214a8) mup_equalizer_pane_cp2

0xa68e,	// (0x000214c1) mup_equalizer_pane_cp3_ParamLimits

0xa68e,	// (0x000214c1) mup_equalizer_pane_cp3

0xa6a7,	// (0x000214da) mup_equalizer_pane_cp4_ParamLimits

0xa6a7,	// (0x000214da) mup_equalizer_pane_cp4

0xa6c0,	// (0x000214f3) mup_equalizer_pane_cp5

0xa6d2,	// (0x00021505) mup_equalizer_pane_cp6

0xa6e4,	// (0x00021517) mup_equalizer_pane_cp7

0x2a79,	// (0x000198ac) bg_popup_call_poc_act_pane_g9

0x2a81,	// (0x000198b4) bg_popup_call_poc_act_pane_g10

0x2a89,	// (0x000198bc) bg_popup_call_poc_act_pane_g11

0x000a,

0x08da,	// (0x0001770d) mup_scale_pane

0x0a68,	// (0x0001789b) mup_scale_pane_g1

0x1839,	// (0x0001866c) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x00026282) mup_scale_pane_g

0x185d,	// (0x00018690) msg_data_pane

0x1865,	// (0x00018698) scroll_pane_cp017

0xa708,	// (0x0002153b) bg_list_pane_cp04_ParamLimits

0xa708,	// (0x0002153b) bg_list_pane_cp04

0x1875,	// (0x000186a8) msg_data_pane_g1

0xa100,	// (0x00020f33) msg_data_pane_g2

0xa108,	// (0x00020f3b) msg_data_pane_g3

0xa720,	// (0x00021553) msg_data_pane_g4

0xa118,	// (0x00020f4b) msg_data_pane_g5

0xa33c,	// (0x0002116f) msg_data_pane_g6

0xa728,	// (0x0002155b) msg_data_pane_g7

0x0006,

0xf45e,	// (0x00026291) msg_data_pane_g

0xa730,	// (0x00021563) msg_text_pane_ParamLimits

0xa730,	// (0x00021563) msg_text_pane

0xa75a,	// (0x0002158d) qrid_highlight_pane_cp011_ParamLimits

0xa75a,	// (0x0002158d) qrid_highlight_pane_cp011

0x067f,	// (0x000174b2) msg_body_pane

0x067f,	// (0x000174b2) msg_header_pane

0x1886,	// (0x000186b9) input_focus_pane_cp07

0x189b,	// (0x000186ce) msg_header_pane_t1_ParamLimits

0x189b,	// (0x000186ce) msg_header_pane_t1

0x18ad,	// (0x000186e0) msg_header_pane_t2_ParamLimits

0x18ad,	// (0x000186e0) msg_header_pane_t2

0x0001,

0xf472,	// (0x000262a5) msg_header_pane_t_ParamLimits

0xf472,	// (0x000262a5) msg_header_pane_t

0x18bf,	// (0x000186f2) msg_body_pane_g1

0x18c7,	// (0x000186fa) msg_body_pane_t1_ParamLimits

0x18c7,	// (0x000186fa) msg_body_pane_t1

0x18f2,	// (0x00018725) msg_body_pane_t2_ParamLimits

0x18f2,	// (0x00018725) msg_body_pane_t2

0x1904,	// (0x00018737) msg_body_pane_t3_ParamLimits

0x1904,	// (0x00018737) msg_body_pane_t3

0x0002,

0xf477,	// (0x000262aa) msg_body_pane_t_ParamLimits

0xf477,	// (0x000262aa) msg_body_pane_t

0x730d,	// (0x0001e140) main_viewer_pane_g1_ParamLimits

0x730d,	// (0x0001e140) main_viewer_pane_g1

0x7319,	// (0x0001e14c) main_viewer_pane_g2_ParamLimits

0x7319,	// (0x0001e14c) main_viewer_pane_g2

0xa79a,	// (0x000215cd) main_viewer_pane_g3_ParamLimits

0xa79a,	// (0x000215cd) main_viewer_pane_g3

0xa7a9,	// (0x000215dc) main_viewer_pane_g4_ParamLimits

0xa7a9,	// (0x000215dc) main_viewer_pane_g4

0x7325,	// (0x0001e158) main_viewer_pane_g5_ParamLimits

0x7325,	// (0x0001e158) main_viewer_pane_g5

0x7325,	// (0x0001e158) main_viewer_pane_g7_ParamLimits

0x7325,	// (0x0001e158) main_viewer_pane_g7

0x7337,	// (0x0001e16a) main_viewer_pane_g8_ParamLimits

0x7337,	// (0x0001e16a) main_viewer_pane_g8

0x0007,

0xf487,	// (0x000262ba) main_viewer_pane_g_ParamLimits

0xf487,	// (0x000262ba) main_viewer_pane_g

0x1958,	// (0x0001878b) viewer_content_pane_ParamLimits

0x1958,	// (0x0001878b) viewer_content_pane

0xa7d0,	// (0x00021603) main_postcard_pane_g1_ParamLimits

0xa7d0,	// (0x00021603) main_postcard_pane_g1

0xa7dc,	// (0x0002160f) main_postcard_pane_g2_ParamLimits

0xa7dc,	// (0x0002160f) main_postcard_pane_g2

0xa7e8,	// (0x0002161b) main_postcard_pane_g3_ParamLimits

0xa7e8,	// (0x0002161b) main_postcard_pane_g3

0x0005,

0xf498,	// (0x000262cb) main_postcard_pane_g_ParamLimits

0xf498,	// (0x000262cb) main_postcard_pane_g

0xa7f4,	// (0x00021627) main_postcard_pane_g4

0x2ce2,	// (0x00019b15) smil_status_volume_pane_g2

0xa818,	// (0x0002164b) postcard_pane_ParamLimits

0xa818,	// (0x0002164b) postcard_pane

0x17bd,	// (0x000185f0) postcard_pane_g1_ParamLimits

0x17bd,	// (0x000185f0) postcard_pane_g1

0xa848,	// (0x0002167b) postcard_pane_g2_ParamLimits

0xa848,	// (0x0002167b) postcard_pane_g2

0xa854,	// (0x00021687) postcard_pane_g3_ParamLimits

0xa854,	// (0x00021687) postcard_pane_g3

0x1974,	// (0x000187a7) postcard_pane_g4_ParamLimits

0x1974,	// (0x000187a7) postcard_pane_g4

0xa860,	// (0x00021693) postcard_pane_g5_ParamLimits

0xa860,	// (0x00021693) postcard_pane_g5

0xa86c,	// (0x0002169f) postcard_pane_g6_ParamLimits

0xa86c,	// (0x0002169f) postcard_pane_g6

0x1966,	// (0x00018799) postcard_pane_g7_ParamLimits

0x1966,	// (0x00018799) postcard_pane_g7

0x0006,

0xf4a5,	// (0x000262d8) postcard_pane_g_ParamLimits

0xf4a5,	// (0x000262d8) postcard_pane_g

0xa878,	// (0x000216ab) main_mp2_pane_g1_ParamLimits

0xa878,	// (0x000216ab) main_mp2_pane_g1

0xa884,	// (0x000216b7) main_mp2_pane_g2_ParamLimits

0xa884,	// (0x000216b7) main_mp2_pane_g2

0xa890,	// (0x000216c3) main_mp2_pane_g3_ParamLimits

0xa890,	// (0x000216c3) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x000262e7) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x000262e7) main_mp2_pane_g

0xa89c,	// (0x000216cf) main_mp2_pane_t1_ParamLimits

0xa89c,	// (0x000216cf) main_mp2_pane_t1

0xa8b1,	// (0x000216e4) main_mp2_pane_t2_ParamLimits

0xa8b1,	// (0x000216e4) main_mp2_pane_t2

0xa8c3,	// (0x000216f6) main_mp2_pane_t3_ParamLimits

0xa8c3,	// (0x000216f6) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x000262ee) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x000262ee) main_mp2_pane_t

0x1982,	// (0x000187b5) pec_content_pane_ParamLimits

0x1982,	// (0x000187b5) pec_content_pane

0x0e2c,	// (0x00017c5f) scroll_pane_cp015

0x1994,	// (0x000187c7) pec_attribute_pane_ParamLimits

0x1994,	// (0x000187c7) pec_attribute_pane

0xa8d5,	// (0x00021708) pec_content_pane_g1_ParamLimits

0xa8d5,	// (0x00021708) pec_content_pane_g1

0x19a4,	// (0x000187d7) pec_content_pane_t1_ParamLimits

0x19a4,	// (0x000187d7) pec_content_pane_t1

0x19b6,	// (0x000187e9) pec_content_pane_t2_ParamLimits

0x19b6,	// (0x000187e9) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x000262f5) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x000262f5) pec_content_pane_t

0xa8e1,	// (0x00021714) list_single_graphic_pane_cp01_ParamLimits

0xa8e1,	// (0x00021714) list_single_graphic_pane_cp01

0x08da,	// (0x0001770d) bg_popup_sub_pane_cp04

0x19c8,	// (0x000187fb) popup_mup_playback_window_g1

0x19d4,	// (0x00018807) popup_mup_playback_window_t1

0x19e9,	// (0x0001881c) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x000262fa) popup_mup_playback_window_t

0x1a20,	// (0x00018853) main_image_pane_g1_ParamLimits

0x1a20,	// (0x00018853) main_image_pane_g1

0x1a63,	// (0x00018896) scroll_pane_cp018_ParamLimits

0x1a63,	// (0x00018896) scroll_pane_cp018

0x1a7b,	// (0x000188ae) scroll_pane_cp016_ParamLimits

0x1a7b,	// (0x000188ae) scroll_pane_cp016

0xa966,	// (0x00021799) smil2_image_pane_ParamLimits

0xa966,	// (0x00021799) smil2_image_pane

0xa98e,	// (0x000217c1) smil2_root_pane_ParamLimits

0xa98e,	// (0x000217c1) smil2_root_pane

0xa9ba,	// (0x000217ed) smil2_text_pane_ParamLimits

0xa9ba,	// (0x000217ed) smil2_text_pane

0x067f,	// (0x000174b2) bg_list_pane_cp06

0x1ab7,	// (0x000188ea) grid_radio_pane

0x067f,	// (0x000174b2) bg_popup_window_pane_cp06

0x1abf,	// (0x000188f2) main_fmradio_pane_t1

0x13e4,	// (0x00018217) heading_pane_cp04

0x1acd,	// (0x00018900) main_fmradio_pane_t2

0x2ad1,	// (0x00019904) popup_cale_lunar_info_window_g1

0x1adb,	// (0x0001890e) main_fmradio_pane_t3

0x2ad9,	// (0x0001990c) popup_cale_lunar_info_window_g2

0x1ae9,	// (0x0001891c) main_fmradio_pane_t4

0x0001,

0x1af7,	// (0x0001892a) main_fmradio_pane_t5

0x0004,

0xf5b5,	// (0x000263e8) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0002630f) main_fmradio_pane_t

0x1b05,	// (0x00018938) wait_bar_pane_cp03

0x1b0d,	// (0x00018940) cell_fmradio_pane_ParamLimits

0x1b0d,	// (0x00018940) cell_fmradio_pane

0x1966,	// (0x00018799) cell_fmradio_pane_g1_ParamLimits

0x1966,	// (0x00018799) cell_fmradio_pane_g1

0x067f,	// (0x000174b2) grid_highlight_pane_cp011

0x1b20,	// (0x00018953) poc_content_pane_ParamLimits

0x1b20,	// (0x00018953) poc_content_pane

0x1b33,	// (0x00018966) scroll_pane_cp019

0xa9ee,	// (0x00021821) popup_call_poc_act_window_ParamLimits

0xa9ee,	// (0x00021821) popup_call_poc_act_window

0xa9fb,	// (0x0002182e) popup_call_poc_inact_window_ParamLimits

0xa9fb,	// (0x0002182e) popup_call_poc_inact_window

0xf579,	// (0x000263ac) bg_popup_call_poc_act_pane_g

0x2a91,	// (0x000198c4) bg_popup_call_poc_inact_pane_g1

0x2a99,	// (0x000198cc) bg_popup_call_poc_inact_pane_g2

0x1b3b,	// (0x0001896e) popup_call_poc_act_window_g2

0x2aa1,	// (0x000198d4) bg_popup_call_poc_inact_pane_g3

0x2a21,	// (0x00019854) bg_popup_call_poc_inact_pane_g4

0x2aa9,	// (0x000198dc) bg_popup_call_poc_inact_pane_g5

0x1b43,	// (0x00018976) popup_call_poc_act_window_t1_ParamLimits

0x1b43,	// (0x00018976) popup_call_poc_act_window_t1

0x1b6b,	// (0x0001899e) popup_call_poc_act_window_t2_ParamLimits

0x1b6b,	// (0x0001899e) popup_call_poc_act_window_t2

0x1b93,	// (0x000189c6) popup_call_poc_act_window_t3_ParamLimits

0x1b93,	// (0x000189c6) popup_call_poc_act_window_t3

0x1bbb,	// (0x000189ee) popup_call_poc_act_window_t4_ParamLimits

0x1bbb,	// (0x000189ee) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0002631a) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0002631a) popup_call_poc_act_window_t

0x2ab1,	// (0x000198e4) bg_popup_call_poc_inact_pane_g6

0x2ab9,	// (0x000198ec) bg_popup_call_poc_inact_pane_g7

0x2ac1,	// (0x000198f4) bg_popup_call_poc_inact_pane_g8

0x1bcd,	// (0x00018a00) popup_call_poc_inact_window_g2

0x2ac9,	// (0x000198fc) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf590,	// (0x000263c3) bg_popup_call_poc_inact_pane_g

0x1bd5,	// (0x00018a08) popup_call_poc_inact_window_t1_ParamLimits

0x1bd5,	// (0x00018a08) popup_call_poc_inact_window_t1

0x1bea,	// (0x00018a1d) popup_call_poc_inact_window_t2_ParamLimits

0x1bea,	// (0x00018a1d) popup_call_poc_inact_window_t2

0x1bff,	// (0x00018a32) popup_call_poc_inact_window_t3_ParamLimits

0x1bff,	// (0x00018a32) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x00026323) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x00026323) popup_call_poc_inact_window_t

0x2c68,	// (0x00019a9b) context_pane_ParamLimits

0xadf7,	// (0x00021c2a) signal_pane_ParamLimits

0x0c34,	// (0x00017a67) main_call2_pane

0x744b,	// (0x0001e27e) popup_phob_thumbnail2_window_ParamLimits

0x744b,	// (0x0001e27e) popup_phob_thumbnail2_window

0x72dd,	// (0x0001e110) aid_hotspot_pointer_arrow_pane

0x72e5,	// (0x0001e118) aid_hotspot_pointer_hand_pane

0xacaa,	// (0x00021add) phob_pre_status_pane_g5

0x8cab,	// (0x0001fade) cams_zoom_pane_ParamLimits

0x8cb7,	// (0x0001faea) image_vga_pane_ParamLimits

0x8cc4,	// (0x0001faf7) main_camera_pane_g1_ParamLimits

0x8cd0,	// (0x0001fb03) main_camera_pane_g2_ParamLimits

0x8cdc,	// (0x0001fb0f) main_camera_pane_g3_ParamLimits

0x8ce8,	// (0x0001fb1b) main_camera_pane_g4_ParamLimits

0x8cf4,	// (0x0001fb27) main_camera_pane_g5_ParamLimits

0x8d00,	// (0x0001fb33) main_camera_pane_g6_ParamLimits

0x8d0c,	// (0x0001fb3f) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x00026022) main_camera_pane_g_ParamLimits

0x8d18,	// (0x0001fb4b) main_camera_pane_t1_ParamLimits

0x8d2a,	// (0x0001fb5d) main_camera_pane_t2_ParamLimits

0xf200,	// (0x00026033) main_camera_pane_t_ParamLimits

0x08da,	// (0x0001770d) bg_popup_preview_window_pane_cp01_ParamLimits

0x08da,	// (0x0001770d) bg_popup_preview_window_pane_cp01

0x1c14,	// (0x00018a47) popup_phob_thumbnail2_window_g1_ParamLimits

0x1c14,	// (0x00018a47) popup_phob_thumbnail2_window_g1

0x067f,	// (0x000174b2) call2_cli_visual_pane

0xaa17,	// (0x0002184a) popup_call2_audio_conf_window_ParamLimits

0xaa17,	// (0x0002184a) popup_call2_audio_conf_window

0xaa2a,	// (0x0002185d) popup_call2_audio_first_window_ParamLimits

0xaa2a,	// (0x0002185d) popup_call2_audio_first_window

0xaaa6,	// (0x000218d9) popup_call2_audio_in_window_ParamLimits

0xaaa6,	// (0x000218d9) popup_call2_audio_in_window

0xaad6,	// (0x00021909) popup_call2_audio_out_window_ParamLimits

0xaad6,	// (0x00021909) popup_call2_audio_out_window

0xab22,	// (0x00021955) popup_call2_audio_second_window_ParamLimits

0xab22,	// (0x00021955) popup_call2_audio_second_window

0xab6e,	// (0x000219a1) popup_call2_audio_wait_window_ParamLimits

0xab6e,	// (0x000219a1) popup_call2_audio_wait_window

0x067f,	// (0x000174b2) bg_popup_call2_act_pane_cp03

0x08bc,	// (0x000176ef) list_conf_pane_cp

0x1c20,	// (0x00018a53) popup_call2_audio_conf_window_t1

0x1441,	// (0x00018274) list_single_graphic_popup_conf2_pane_ParamLimits

0x1441,	// (0x00018274) list_single_graphic_popup_conf2_pane

0x1454,	// (0x00018287) list_highlight_pane_cp04

0x1c2e,	// (0x00018a61) list_single_graphic_popup_conf2_pane_g1

0x1465,	// (0x00018298) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0002632a) list_single_graphic_popup_conf2_pane_g

0x1c36,	// (0x00018a69) list_single_graphic_popup_conf2_pane_t1

0x1c44,	// (0x00018a77) bg_popup_call2_act_pane_cp01_ParamLimits

0x1c44,	// (0x00018a77) bg_popup_call2_act_pane_cp01

0x1cce,	// (0x00018b01) call_type_pane_cp05_ParamLimits

0x1cce,	// (0x00018b01) call_type_pane_cp05

0x1d22,	// (0x00018b55) popup_call2_audio_second_window_g1_ParamLimits

0x1d22,	// (0x00018b55) popup_call2_audio_second_window_g1

0x1d76,	// (0x00018ba9) popup_call2_audio_second_window_g2_ParamLimits

0x1d76,	// (0x00018ba9) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0002632f) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0002632f) popup_call2_audio_second_window_g

0x1ddb,	// (0x00018c0e) popup_call2_audio_second_window_t1_ParamLimits

0x1ddb,	// (0x00018c0e) popup_call2_audio_second_window_t1

0x1e96,	// (0x00018cc9) popup_call2_audio_second_window_t2_ParamLimits

0x1e96,	// (0x00018cc9) popup_call2_audio_second_window_t2

0x1ee9,	// (0x00018d1c) popup_call2_audio_second_window_t3_ParamLimits

0x1ee9,	// (0x00018d1c) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x00026336) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x00026336) popup_call2_audio_second_window_t

0x067f,	// (0x000174b2) bg_popup_call2_in_pane_cp02

0x0689,	// (0x000174bc) call_type_pane_cp04

0x0691,	// (0x000174c4) popup_call2_audio_wait_window_g1

0x0699,	// (0x000174cc) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x00025f11) popup_call2_audio_wait_window_g

0x06a1,	// (0x000174d4) popup_call2_audio_wait_window_t3

0x1fdc,	// (0x00018e0f) bg_popup_call2_act_pane_ParamLimits

0x1fdc,	// (0x00018e0f) bg_popup_call2_act_pane

0x209c,	// (0x00018ecf) call_type_pane_cp03_ParamLimits

0x209c,	// (0x00018ecf) call_type_pane_cp03

0x2100,	// (0x00018f33) popup_call2_audio_first_window_g1_ParamLimits

0x2100,	// (0x00018f33) popup_call2_audio_first_window_g1

0x2170,	// (0x00018fa3) popup_call2_audio_first_window_g2_ParamLimits

0x2170,	// (0x00018fa3) popup_call2_audio_first_window_g2

0x17bd,	// (0x000185f0) popup_call2_audio_first_window_g3_ParamLimits

0x17bd,	// (0x000185f0) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0002633f) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0002633f) popup_call2_audio_first_window_g

0x224e,	// (0x00019081) popup_call2_audio_first_window_t1_ParamLimits

0x224e,	// (0x00019081) popup_call2_audio_first_window_t1

0x2351,	// (0x00019184) popup_call2_audio_first_window_t4_ParamLimits

0x2351,	// (0x00019184) popup_call2_audio_first_window_t4

0x2434,	// (0x00019267) popup_call2_audio_first_window_t5_ParamLimits

0x2434,	// (0x00019267) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0002634a) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0002634a) popup_call2_audio_first_window_t

0x08d2,	// (0x00017705) bg_popup_call2_act_pane_g1

0x2ae1,	// (0x00019914) popup_cale_lunar_info_window_t1

0x2aef,	// (0x00019922) popup_cale_lunar_info_window_t2

0x2afd,	// (0x00019930) popup_cale_lunar_info_window_t3

0x067f,	// (0x000174b2) bg_popup_call2_bubble_pane

0x2535,	// (0x00019368) bg_popup_call2_in_pane_cp01_ParamLimits

0x2535,	// (0x00019368) bg_popup_call2_in_pane_cp01

0x035b,	// (0x0001718e) call_type_pane_cp02

0x257d,	// (0x000193b0) popup_call2_audio_out_window_g1_ParamLimits

0x257d,	// (0x000193b0) popup_call2_audio_out_window_g1

0x25a9,	// (0x000193dc) popup_call2_audio_out_window_g2_ParamLimits

0x25a9,	// (0x000193dc) popup_call2_audio_out_window_g2

0x25d1,	// (0x00019404) popup_call2_audio_out_window_g3_ParamLimits

0x25d1,	// (0x00019404) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x00026353) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x00026353) popup_call2_audio_out_window_g

0x260c,	// (0x0001943f) popup_call2_audio_out_window_t1_ParamLimits

0x260c,	// (0x0001943f) popup_call2_audio_out_window_t1

0x266b,	// (0x0001949e) popup_call2_audio_out_window_t2_ParamLimits

0x266b,	// (0x0001949e) popup_call2_audio_out_window_t2

0x26bf,	// (0x000194f2) popup_call2_audio_out_window_t3_ParamLimits

0x26bf,	// (0x000194f2) popup_call2_audio_out_window_t3

0x26d5,	// (0x00019508) popup_call2_audio_out_window_t4_ParamLimits

0x26d5,	// (0x00019508) popup_call2_audio_out_window_t4

0x26eb,	// (0x0001951e) popup_call2_audio_out_window_t5_ParamLimits

0x26eb,	// (0x0001951e) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0002635c) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0002635c) popup_call2_audio_out_window_t

0x274f,	// (0x00019582) bg_popup_call2_in_pane_ParamLimits

0x274f,	// (0x00019582) bg_popup_call2_in_pane

0x27ab,	// (0x000195de) popup_call2_audio_in_window_g1_ParamLimits

0x27ab,	// (0x000195de) popup_call2_audio_in_window_g1

0x27e3,	// (0x00019616) popup_call2_audio_in_window_g2_ParamLimits

0x27e3,	// (0x00019616) popup_call2_audio_in_window_g2

0x281b,	// (0x0001964e) popup_call2_audio_in_window_g3_ParamLimits

0x281b,	// (0x0001964e) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x00026369) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x00026369) popup_call2_audio_in_window_g

0x2873,	// (0x000196a6) popup_call2_audio_in_window_t1_ParamLimits

0x2873,	// (0x000196a6) popup_call2_audio_in_window_t1

0x28f3,	// (0x00019726) popup_call2_audio_in_window_t2_ParamLimits

0x28f3,	// (0x00019726) popup_call2_audio_in_window_t2

0x2973,	// (0x000197a6) popup_call2_audio_in_window_t3_ParamLimits

0x2973,	// (0x000197a6) popup_call2_audio_in_window_t3

0x298d,	// (0x000197c0) popup_call2_audio_in_window_t4_ParamLimits

0x298d,	// (0x000197c0) popup_call2_audio_in_window_t4

0x299f,	// (0x000197d2) popup_call2_audio_in_window_t5_ParamLimits

0x299f,	// (0x000197d2) popup_call2_audio_in_window_t5

0x29b4,	// (0x000197e7) popup_call2_audio_in_window_t6_ParamLimits

0x29b4,	// (0x000197e7) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x00026372) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x00026372) popup_call2_audio_in_window_t

0x08d2,	// (0x00017705) bg_popup_call2_in_pane_g1

0x2b0b,	// (0x0001993e) popup_cale_lunar_info_window_t4

0x0003,

0xf5ba,	// (0x000263ed) popup_cale_lunar_info_window_t

0x08da,	// (0x0001770d) bg_popup_call2_rect_pane_ParamLimits

0x08da,	// (0x0001770d) bg_popup_call2_rect_pane

0x067f,	// (0x000174b2) call2_cli_visual_graphic_pane

0x067f,	// (0x000174b2) call2_cli_visual_text_pane

0x7498,	// (0x0001e2cb) smil_status_volume_pane_g3

0x0002,

0x0a68,	// (0x0001789b) call2_cli_visual_graphic_pane_g1

0x0a68,	// (0x0001789b) call2_cli_visual_graphic_pane_g2

0x0a68,	// (0x0001789b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0002637f) call2_cli_visual_graphic_pane_g

0x29c9,	// (0x000197fc) bg_popup_call2_rect_pane_g1

0x0b10,	// (0x00017943) bg_popup_call2_rect_pane_g2

0x29d1,	// (0x00019804) bg_popup_call2_rect_pane_g3

0x29d9,	// (0x0001980c) bg_popup_call2_rect_pane_g4

0x29e1,	// (0x00019814) bg_popup_call2_rect_pane_g5

0x29e9,	// (0x0001981c) bg_popup_call2_rect_pane_g6

0x29f1,	// (0x00019824) bg_popup_call2_rect_pane_g7

0x29f9,	// (0x0001982c) bg_popup_call2_rect_pane_g8

0x2a01,	// (0x00019834) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x00026386) bg_popup_call2_rect_pane_g

0x2a09,	// (0x0001983c) bg_popup_call2_bubble_pane_g1

0x2a11,	// (0x00019844) bg_popup_call2_bubble_pane_g2

0x2a19,	// (0x0001984c) bg_popup_call2_bubble_pane_g3

0x2a21,	// (0x00019854) bg_popup_call2_bubble_pane_g4

0x2a29,	// (0x0001985c) bg_popup_call2_bubble_pane_g5

0x2a31,	// (0x00019864) bg_popup_call2_bubble_pane_g6

0x2a39,	// (0x0001986c) bg_popup_call2_bubble_pane_g7

0x2a41,	// (0x00019874) bg_popup_call2_bubble_pane_g8

0x2a49,	// (0x0001987c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x00026399) bg_popup_call2_bubble_pane_g

0x8889,	// (0x0001f6bc) aid_cale_week_size_cell_pane

0x8d3c,	// (0x0001fb6f) aid_cams_cif_uncrop_pane_ParamLimits

0x8d3c,	// (0x0001fb6f) aid_cams_cif_uncrop_pane

0x8e94,	// (0x0001fcc7) aid_cams_size_cell_ParamLimits

0x8e94,	// (0x0001fcc7) aid_cams_size_cell

0x8ea0,	// (0x0001fcd3) grid_cams_pane_ParamLimits

0x8eac,	// (0x0001fcdf) linegrid_cams_pane_ParamLimits

0x9061,	// (0x0001fe94) call_video_pane_t1

0x907e,	// (0x0001feb1) call_video_pane_t2

0x0001,

0xf253,	// (0x00026086) call_video_pane_t

0x9460,	// (0x00020293) aid_cale_month_size_cell_pane_ParamLimits

0x9460,	// (0x00020293) aid_cale_month_size_cell_pane

0xf603,	// (0x00026436) smil_status_volume_pane_g

0x74a5,	// (0x0001e2d8) volume_smil_pane_ParamLimits

0x6c2b,	// (0x0001da5e) aid_popup2_width_pane

0x87de,	// (0x0001f611) cell_qdial_pane_g4_ParamLimits

0x87de,	// (0x0001f611) cell_qdial_pane_g4

0xa244,	// (0x00021077) aid_blid_cardinal_pane_ParamLimits

0xa250,	// (0x00021083) aid_blid_destination_pane_ParamLimits

0xa250,	// (0x00021083) aid_blid_destination_pane

0x08da,	// (0x0001770d) bg_popup_call_poc_act_pane_ParamLimits

0x08da,	// (0x0001770d) bg_popup_call_poc_act_pane

0x08da,	// (0x0001770d) bg_popup_call_poc_inact_pane_ParamLimits

0x08da,	// (0x0001770d) bg_popup_call_poc_inact_pane

0x2a51,	// (0x00019884) bg_popup_call_poc_act_pane_g1

0x2a59,	// (0x0001988c) bg_popup_call_poc_act_pane_g2

0x2a61,	// (0x00019894) bg_popup_call_poc_act_pane_g3

0x2a21,	// (0x00019854) bg_popup_call_poc_act_pane_g4

0x2a29,	// (0x0001985c) bg_popup_call_poc_act_pane_g5

0x2a69,	// (0x0001989c) bg_popup_call_poc_act_pane_g6

0x2a39,	// (0x0001986c) bg_popup_call_poc_act_pane_g7

0x2a71,	// (0x000198a4) bg_popup_call_poc_act_pane_g8

0x067f,	// (0x000174b2) main_usb_pane

0x73aa,	// (0x0001e1dd) popup_cale_lunar_info_window

0x9303,	// (0x00020136) im_reading_pane_t1_ParamLimits

0x0d75,	// (0x00017ba8) list_im_pane_ParamLimits

0x0d86,	// (0x00017bb9) scroll_pane_cp07_ParamLimits

0x067f,	// (0x000174b2) grid_highlight_pane_cp012

0x08da,	// (0x0001770d) mup_scale_pane_ParamLimits

0x17bd,	// (0x000185f0) main_usb_pane_g1_ParamLimits

0x17bd,	// (0x000185f0) main_usb_pane_g1

0xabcf,	// (0x00021a02) main_usb_pane_g2_ParamLimits

0xabcf,	// (0x00021a02) main_usb_pane_g2

0x0001,

0xf5a3,	// (0x000263d6) main_usb_pane_g_ParamLimits

0xf5a3,	// (0x000263d6) main_usb_pane_g

0xabdb,	// (0x00021a0e) main_usb_pane_t1_ParamLimits

0xabdb,	// (0x00021a0e) main_usb_pane_t1

0xabed,	// (0x00021a20) main_usb_pane_t2_ParamLimits

0xabed,	// (0x00021a20) main_usb_pane_t2

0xabff,	// (0x00021a32) main_usb_pane_t3_ParamLimits

0xabff,	// (0x00021a32) main_usb_pane_t3

0xac11,	// (0x00021a44) main_usb_pane_t4_ParamLimits

0xac11,	// (0x00021a44) main_usb_pane_t4

0xac23,	// (0x00021a56) main_usb_pane_t5_ParamLimits

0xac23,	// (0x00021a56) main_usb_pane_t5

0xac35,	// (0x00021a68) main_usb_pane_t6_ParamLimits

0xac35,	// (0x00021a68) main_usb_pane_t6

0x0005,

0xf5a8,	// (0x000263db) main_usb_pane_t_ParamLimits

0x158e,	// (0x000183c1) aid_text_placing

0xa1f0,	// (0x00021023) main_location2_pane_t1_ParamLimits

0xa206,	// (0x00021039) main_location2_pane_t2_ParamLimits

0xa21c,	// (0x0002104f) main_location2_pane_t3_ParamLimits

0xa232,	// (0x00021065) main_location2_pane_t4_ParamLimits

0xa232,	// (0x00021065) main_location2_pane_t4

0xf3b4,	// (0x000261e7) main_location2_pane_t_ParamLimits

0x0916,	// (0x00017749) find_pinb_pane_g2_ParamLimits

0x0916,	// (0x00017749) find_pinb_pane_g2

0x0001,

0xf104,	// (0x00025f37) find_pinb_pane_g_ParamLimits

0xf104,	// (0x00025f37) find_pinb_pane_g

0x0922,	// (0x00017755) find_pinb_pane_t1_ParamLimits

0x0934,	// (0x00017767) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x00025f3c) find_pinb_pane_t_ParamLimits

0x067f,	// (0x000174b2) main_call3_pane

0x9804,	// (0x00020637) cale_month_day_heading_pane_t1_ParamLimits

0x988a,	// (0x000206bd) cale_month_day_heading_pane_t2_ParamLimits

0x991b,	// (0x0002074e) cale_month_day_heading_pane_t3_ParamLimits

0x99ac,	// (0x000207df) cale_month_day_heading_pane_t4_ParamLimits

0x9a3d,	// (0x00020870) cale_month_day_heading_pane_t5_ParamLimits

0x9ace,	// (0x00020901) cale_month_day_heading_pane_t6_ParamLimits

0x9b5f,	// (0x00020992) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x000260be) cale_month_day_heading_pane_t_ParamLimits

0x9e7d,	// (0x00020cb0) smil_status_volume_pane

0xa830,	// (0x00021663) postcard_address_pane_ParamLimits

0xa830,	// (0x00021663) postcard_address_pane

0xa83c,	// (0x0002166f) postcard_message_pane_ParamLimits

0xa83c,	// (0x0002166f) postcard_message_pane

0xabab,	// (0x000219de) call2_cli_visual_pane_t1_ParamLimits

0xabab,	// (0x000219de) call2_cli_visual_pane_t1

0xafb8,	// (0x00021deb) postcard_message_pane_t1_ParamLimits

0xafb8,	// (0x00021deb) postcard_message_pane_t1

0xafa1,	// (0x00021dd4) postcard_address_pane_t1_ParamLimits

0xafa1,	// (0x00021dd4) postcard_address_pane_t1

0xaf94,	// (0x00021dc7) popup_call3_audio_in_window_ParamLimits

0xaf94,	// (0x00021dc7) popup_call3_audio_in_window

0xae7c,	// (0x00021caf) bg_popup_call3_in_pane_ParamLimits

0xae7c,	// (0x00021caf) bg_popup_call3_in_pane

0xaeda,	// (0x00021d0d) popup_call3_audio_in_window_g1_ParamLimits

0xaeda,	// (0x00021d0d) popup_call3_audio_in_window_g1

0xaef2,	// (0x00021d25) popup_call3_audio_in_window_g2_ParamLimits

0xaef2,	// (0x00021d25) popup_call3_audio_in_window_g2

0xaf0a,	// (0x00021d3d) popup_call3_audio_in_window_g3_ParamLimits

0xaf0a,	// (0x00021d3d) popup_call3_audio_in_window_g3

0x0003,

0xf60a,	// (0x0002643d) popup_call3_audio_in_window_g_ParamLimits

0xf60a,	// (0x0002643d) popup_call3_audio_in_window_g

0xaf32,	// (0x00021d65) popup_call3_audio_in_window_t1_ParamLimits

0xaf32,	// (0x00021d65) popup_call3_audio_in_window_t1

0xaf5a,	// (0x00021d8d) popup_call3_audio_in_window_t2_ParamLimits

0xaf5a,	// (0x00021d8d) popup_call3_audio_in_window_t2

0xaf82,	// (0x00021db5) popup_call3_audio_in_window_t3_ParamLimits

0xaf82,	// (0x00021db5) popup_call3_audio_in_window_t3

0x0002,

0xf613,	// (0x00026446) popup_call3_audio_in_window_t_ParamLimits

0xf613,	// (0x00026446) popup_call3_audio_in_window_t

0x0c34,	// (0x00017a67) bg_popup_call3_rect_pane

0x29c9,	// (0x000197fc) bg_popup_call3_rect_pane_g1

0x0b10,	// (0x00017943) bg_popup_call3_rect_pane_g2

0x29d1,	// (0x00019804) bg_popup_call3_rect_pane_g3

0x29d9,	// (0x0001980c) bg_popup_call3_rect_pane_g4

0x29e1,	// (0x00019814) bg_popup_call3_rect_pane_g5

0x29e9,	// (0x0001981c) bg_popup_call3_rect_pane_g6

0x29f1,	// (0x00019824) bg_popup_call3_rect_pane_g7

0xa56b,	// (0x0002139e) mup_visualizer_osc_pane

0x17cb,	// (0x000185fe) mup_visualizer_spec_pane

0xae9c,	// (0x00021ccf) call3_video_qcif_pane_ParamLimits

0xae9c,	// (0x00021ccf) call3_video_qcif_pane

0xaeac,	// (0x00021cdf) call3_video_qcif_uncrop_pane_ParamLimits

0xaeac,	// (0x00021cdf) call3_video_qcif_uncrop_pane

0xaeb8,	// (0x00021ceb) call3_video_subqcif_pane_ParamLimits

0xaeb8,	// (0x00021ceb) call3_video_subqcif_pane

0xaeca,	// (0x00021cfd) call3_video_subqcif_uncrop_pane_ParamLimits

0xaeca,	// (0x00021cfd) call3_video_subqcif_uncrop_pane

0xaf22,	// (0x00021d55) popup_call3_audio_in_window_g4_ParamLimits

0xaf22,	// (0x00021d55) popup_call3_audio_in_window_g4

0xae6b,	// (0x00021c9e) mup_spec_half_pane

0xae74,	// (0x00021ca7) mup_spec_half_pane_cp

0x2cc8,	// (0x00019afb) mup_osc_middle_pane

0x2cd1,	// (0x00019b04) mup_visualizer_osc_pane_g1

0xae4c,	// (0x00021c7f) mup_spec_bar_pane_ParamLimits

0xae4c,	// (0x00021c7f) mup_spec_bar_pane

0x2cb5,	// (0x00019ae8) mup_spec_bar_pane_g1

0x2cbf,	// (0x00019af2) mup_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x00026431) mup_spec_bar_pane_g

0x8889,	// (0x0001f6bc) aid_cale_week_size_cell_pane_ParamLimits

0x889e,	// (0x0001f6d1) bg_cale_heading_pane_ParamLimits

0x0b96,	// (0x000179c9) bg_cale_pane_cp01_ParamLimits

0x88b6,	// (0x0001f6e9) cale_week_corner_pane_ParamLimits

0x88d0,	// (0x0001f703) cale_week_day_heading_pane_ParamLimits

0x88e8,	// (0x0001f71b) cale_week_scroll_pane_g1_ParamLimits

0x88fb,	// (0x0001f72e) cale_week_scroll_pane_g2_ParamLimits

0x890e,	// (0x0001f741) cale_week_scroll_pane_g3_ParamLimits

0x8921,	// (0x0001f754) cale_week_scroll_pane_g4_ParamLimits

0x8934,	// (0x0001f767) cale_week_scroll_pane_g5_ParamLimits

0x8947,	// (0x0001f77a) cale_week_scroll_pane_g6_ParamLimits

0x895a,	// (0x0001f78d) cale_week_scroll_pane_g7_ParamLimits

0x896d,	// (0x0001f7a0) cale_week_scroll_pane_g8_ParamLimits

0x8980,	// (0x0001f7b3) cale_week_scroll_pane_g9_ParamLimits

0x8993,	// (0x0001f7c6) cale_week_scroll_pane_g10_ParamLimits

0x89a6,	// (0x0001f7d9) cale_week_scroll_pane_g11_ParamLimits

0x89b9,	// (0x0001f7ec) cale_week_scroll_pane_g12_ParamLimits

0x89cc,	// (0x0001f7ff) cale_week_scroll_pane_g13_ParamLimits

0x89df,	// (0x0001f812) cale_week_scroll_pane_g14_ParamLimits

0x89f2,	// (0x0001f825) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x00025fc8) cale_week_scroll_pane_g_ParamLimits

0x8a18,	// (0x0001f84b) cale_week_time_pane_ParamLimits

0x8a2b,	// (0x0001f85e) grid_cale_week_pane_ParamLimits

0x0bb3,	// (0x000179e6) listscroll_cale_week_pane_t1

0x0bc5,	// (0x000179f8) scroll_pane_cp08_ParamLimits

0x94b5,	// (0x000202e8) cale_month_corner_pane_ParamLimits

0x0fb6,	// (0x00017de9) cale_month_pane_t1

0x97cb,	// (0x000205fe) cale_month_week_pane_ParamLimits

0x17bd,	// (0x000185f0) popup_call_status_window_g1_ParamLimits

0xa096,	// (0x00020ec9) popup_call_status_window_g2_ParamLimits

0xa0a2,	// (0x00020ed5) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0002616e) popup_call_status_window_g_ParamLimits

0x136d,	// (0x000181a0) aid_call2_pane

0xa770,	// (0x000215a3) msg_header_pane_g1

0xa830,	// (0x00021663) postcard_address2_pane_ParamLimits

0xa830,	// (0x00021663) postcard_address2_pane

0xa83c,	// (0x0002166f) postcard_message2_pane_ParamLimits

0xa83c,	// (0x0002166f) postcard_message2_pane

0xae03,	// (0x00021c36) message2_row_pane_ParamLimits

0xae03,	// (0x00021c36) message2_row_pane

0xae1b,	// (0x00021c4e) address2_row_pane_ParamLimits

0xae1b,	// (0x00021c4e) address2_row_pane

0x2c83,	// (0x00019ab6) postcard_message2_row_pane_g1

0x2c8b,	// (0x00019abe) postcard_message2_row_pane_t1

0x2c83,	// (0x00019ab6) address2_row_pane_g1

0x2c8b,	// (0x00019abe) address2_row_pane_t1

0x1aaf,	// (0x000188e2) aid_size_cell_vorec

0x067f,	// (0x000174b2) main_rss_pane

0xae2e,	// (0x00021c61) rss_list_single_pane_ParamLimits

0xae2e,	// (0x00021c61) rss_list_single_pane

0x2c99,	// (0x00019acc) rss_list_single_pane_t1

0x2ca7,	// (0x00019ada) rss_list_single_pane_t2

0x0001,

0xf5f9,	// (0x0002642c) rss_list_single_pane_t

0x067f,	// (0x000174b2) main_camera2_pane

0x067f,	// (0x000174b2) main_video2_pane

0x74ef,	// (0x0001e322) cams_zoom_pane_cp2_ParamLimits

0x74ef,	// (0x0001e322) cams_zoom_pane_cp2

0x74fb,	// (0x0001e32e) image2_vga_pane_ParamLimits

0x74fb,	// (0x0001e32e) image2_vga_pane

0x750a,	// (0x0001e33d) main_camera2_pane_g1_ParamLimits

0x750a,	// (0x0001e33d) main_camera2_pane_g1

0x7516,	// (0x0001e349) main_camera2_pane_g2_ParamLimits

0x7516,	// (0x0001e349) main_camera2_pane_g2

0x7522,	// (0x0001e355) main_camera2_pane_g3_ParamLimits

0x7522,	// (0x0001e355) main_camera2_pane_g3

0x752e,	// (0x0001e361) main_camera2_pane_g4_ParamLimits

0x752e,	// (0x0001e361) main_camera2_pane_g4

0x753a,	// (0x0001e36d) main_camera2_pane_g5_ParamLimits

0x753a,	// (0x0001e36d) main_camera2_pane_g5

0x7546,	// (0x0001e379) main_camera2_pane_g6_ParamLimits

0x7546,	// (0x0001e379) main_camera2_pane_g6

0x7552,	// (0x0001e385) main_camera2_pane_g7_ParamLimits

0x7552,	// (0x0001e385) main_camera2_pane_g7

0x755e,	// (0x0001e391) main_camera2_pane_g8_ParamLimits

0x755e,	// (0x0001e391) main_camera2_pane_g8

0x0008,

0xf61a,	// (0x0002644d) main_camera2_pane_g_ParamLimits

0xf61a,	// (0x0002644d) main_camera2_pane_g

0x7576,	// (0x0001e3a9) main_camera2_pane_t1_ParamLimits

0x7576,	// (0x0001e3a9) main_camera2_pane_t1

0x7588,	// (0x0001e3bb) main_camera2_pane_t2_ParamLimits

0x7588,	// (0x0001e3bb) main_camera2_pane_t2

0x759a,	// (0x0001e3cd) main_camera2_pane_t3_ParamLimits

0x759a,	// (0x0001e3cd) main_camera2_pane_t3

0x75ac,	// (0x0001e3df) main_camera2_pane_t4_ParamLimits

0x75ac,	// (0x0001e3df) main_camera2_pane_t4

0x0006,

0xf62d,	// (0x00026460) main_camera2_pane_t_ParamLimits

0xf62d,	// (0x00026460) main_camera2_pane_t

0x7607,	// (0x0001e43a) cams_zoom_pane_cp4_ParamLimits

0x7607,	// (0x0001e43a) cams_zoom_pane_cp4

0x7617,	// (0x0001e44a) image2_cif_pane_ParamLimits

0x7617,	// (0x0001e44a) image2_cif_pane

0x7628,	// (0x0001e45b) image2_subqcif_pane_ParamLimits

0x7628,	// (0x0001e45b) image2_subqcif_pane

0x7635,	// (0x0001e468) main_video2_pane_g1_ParamLimits

0x7635,	// (0x0001e468) main_video2_pane_g1

0x7647,	// (0x0001e47a) main_video2_pane_g2_ParamLimits

0x7647,	// (0x0001e47a) main_video2_pane_g2

0x7657,	// (0x0001e48a) main_video2_pane_g3_ParamLimits

0x7657,	// (0x0001e48a) main_video2_pane_g3

0x7667,	// (0x0001e49a) main_video2_pane_g4_ParamLimits

0x7667,	// (0x0001e49a) main_video2_pane_g4

0x7677,	// (0x0001e4aa) main_video2_pane_g5_ParamLimits

0x7677,	// (0x0001e4aa) main_video2_pane_g5

0x7687,	// (0x0001e4ba) main_video2_pane_g6_ParamLimits

0x7687,	// (0x0001e4ba) main_video2_pane_g6

0x0005,

0xf63c,	// (0x0002646f) main_video2_pane_g_ParamLimits

0xf63c,	// (0x0002646f) main_video2_pane_g

0x7699,	// (0x0001e4cc) main_video2_pane_t1_ParamLimits

0x7699,	// (0x0001e4cc) main_video2_pane_t1

0x76b3,	// (0x0001e4e6) main_video2_pane_t2_ParamLimits

0x76b3,	// (0x0001e4e6) main_video2_pane_t2

0x76d9,	// (0x0001e50c) main_video2_pane_t3_ParamLimits

0x76d9,	// (0x0001e50c) main_video2_pane_t3

0x0002,

0xf649,	// (0x0002647c) main_video2_pane_t_ParamLimits

0xf649,	// (0x0002647c) main_video2_pane_t

0xace4,	// (0x00021b17) call_muted_g2

0x0001,

0xf5eb,	// (0x0002641e) call_muted_g

0x067f,	// (0x000174b2) main_mup2_pane

0x2d83,	// (0x00019bb6) main_mup2_pane_g1_ParamLimits

0x2d83,	// (0x00019bb6) main_mup2_pane_g1

0xafd3,	// (0x00021e06) main_mup2_pane_g2_ParamLimits

0xafd3,	// (0x00021e06) main_mup2_pane_g2

0x7728,	// (0x0001e55b) main_mup_pane_g13_cp1

0x7730,	// (0x0001e563) mup_volume_pane_cp1

0xaff3,	// (0x00021e26) main_mup2_pane_g4_ParamLimits

0xaff3,	// (0x00021e26) main_mup2_pane_g4

0xb004,	// (0x00021e37) main_mup2_pane_g5_ParamLimits

0xb004,	// (0x00021e37) main_mup2_pane_g5

0xb015,	// (0x00021e48) main_mup2_pane_g6_ParamLimits

0xb015,	// (0x00021e48) main_mup2_pane_g6

0xb026,	// (0x00021e59) main_mup2_pane_g7_ParamLimits

0xb026,	// (0x00021e59) main_mup2_pane_g7

0x0006,

0xf650,	// (0x00026483) main_mup2_pane_g_ParamLimits

0xf650,	// (0x00026483) main_mup2_pane_g

0xb042,	// (0x00021e75) main_mup2_pane_t1_ParamLimits

0xb042,	// (0x00021e75) main_mup2_pane_t1

0xb059,	// (0x00021e8c) main_mup2_pane_t2_ParamLimits

0xb059,	// (0x00021e8c) main_mup2_pane_t2

0xb070,	// (0x00021ea3) main_mup2_pane_t3_ParamLimits

0xb070,	// (0x00021ea3) main_mup2_pane_t3

0xb087,	// (0x00021eba) main_mup2_pane_t4_ParamLimits

0xb087,	// (0x00021eba) main_mup2_pane_t4

0xb0a1,	// (0x00021ed4) main_mup2_pane_t5_ParamLimits

0xb0a1,	// (0x00021ed4) main_mup2_pane_t5

0xb0bb,	// (0x00021eee) main_mup2_pane_t6_ParamLimits

0xb0bb,	// (0x00021eee) main_mup2_pane_t6

0x0005,

0xf65f,	// (0x00026492) main_mup2_pane_t_ParamLimits

0xf65f,	// (0x00026492) main_mup2_pane_t

0xb0f3,	// (0x00021f26) mup2_visualizer_pane_ParamLimits

0xb0f3,	// (0x00021f26) mup2_visualizer_pane

0xb125,	// (0x00021f58) mup_progress_pane_cp_ParamLimits

0xb125,	// (0x00021f58) mup_progress_pane_cp

0x7713,	// (0x0001e546) mup_volume_pane_cp_ParamLimits

0x7713,	// (0x0001e546) mup_volume_pane_cp

0xb13c,	// (0x00021f6f) mup2_visualizer_pane_g1_ParamLimits

0xb13c,	// (0x00021f6f) mup2_visualizer_pane_g1

0x2d55,	// (0x00019b88) mup2_visualizer_pane_g2_ParamLimits

0x2d55,	// (0x00019b88) mup2_visualizer_pane_g2

0xb151,	// (0x00021f84) mup2_visualizer_pane_g3_ParamLimits

0xb151,	// (0x00021f84) mup2_visualizer_pane_g3

0x0002,

0xf66c,	// (0x0002649f) mup2_visualizer_pane_g_ParamLimits

0xf66c,	// (0x0002649f) mup2_visualizer_pane_g

0x1aaf,	// (0x000188e2) aid_size_cell_fmradio

0x734f,	// (0x0001e182) aid_height_parent_landcape

0x0e13,	// (0x00017c46) wml_content_pane_cp

0x0e1b,	// (0x00017c4e) wml_tabs_pane

0x0e24,	// (0x00017c57) popup_wml_miniature_window

0x0e2c,	// (0x00017c5f) scroll_pane_cp021

0x0e40,	// (0x00017c73) wml_content_pane_comp8

0x067f,	// (0x000174b2) bg_popup_sub_pane_cp05

0x2d73,	// (0x00019ba6) popup_wml_miniature_window_g1

0x2d7b,	// (0x00019bae) wml_miniature_view_pane

0xb15d,	// (0x00021f90) aid_size_wml_view

0xb165,	// (0x00021f98) wml_miniature_view_pane_g1

0xb16e,	// (0x00021fa1) wml_miniature_view_pane_g2

0xb177,	// (0x00021faa) wml_miniature_view_pane_g3

0xb17f,	// (0x00021fb2) wml_miniature_view_pane_g4

0xb187,	// (0x00021fba) wml_miniature_view_pane_g5

0xb18f,	// (0x00021fc2) wml_miniature_view_pane_g6

0xb197,	// (0x00021fca) wml_miniature_view_pane_g7

0xb19f,	// (0x00021fd2) wml_miniature_view_pane_g8

0x0007,

0xf673,	// (0x000264a6) wml_miniature_view_pane_g

0x2d83,	// (0x00019bb6) background_graphic_ParamLimits

0x2d83,	// (0x00019bb6) background_graphic

0x2d8f,	// (0x00019bc2) wml_tabs_2_pane

0x2d98,	// (0x00019bcb) wml_tabs_3_pane_ParamLimits

0x2d98,	// (0x00019bcb) wml_tabs_3_pane

0x2daa,	// (0x00019bdd) wml_tabs_4_pane_ParamLimits

0x2daa,	// (0x00019bdd) wml_tabs_4_pane

0x2dc0,	// (0x00019bf3) wml_tabs_5_pane_ParamLimits

0x2dc0,	// (0x00019bf3) wml_tabs_5_pane

0x2dda,	// (0x00019c0d) wml_tabs_pane_g2_ParamLimits

0x2dda,	// (0x00019c0d) wml_tabs_pane_g2

0x2dee,	// (0x00019c21) wml_tabs_pane_g3_ParamLimits

0x2dee,	// (0x00019c21) wml_tabs_pane_g3

0xb1a7,	// (0x00021fda) wml_tabs_2_active_pane_ParamLimits

0xb1a7,	// (0x00021fda) wml_tabs_2_active_pane

0xb1b7,	// (0x00021fea) wml_tabs_2_passive_pane_ParamLimits

0xb1b7,	// (0x00021fea) wml_tabs_2_passive_pane

0xb1c7,	// (0x00021ffa) wml_tabs_3_active_pane_cp_ParamLimits

0xb1c7,	// (0x00021ffa) wml_tabs_3_active_pane_cp

0xb1d8,	// (0x0002200b) wml_tabs_3_passive_pane_ParamLimits

0xb1d8,	// (0x0002200b) wml_tabs_3_passive_pane

0xb1e9,	// (0x0002201c) wml_tabs_3_passive_pane_cp_ParamLimits

0xb1e9,	// (0x0002201c) wml_tabs_3_passive_pane_cp

0xb1fa,	// (0x0002202d) tabs_4_active_pane

0xb202,	// (0x00022035) tabs_4_passive_pane

0xb20a,	// (0x0002203d) tabs_4_passive_pane_cp

0xb212,	// (0x00022045) tabs_4_passive_pane_cp2

0xabc7,	// (0x000219fa) aid_height_text

0xa538,	// (0x0002136b) mup_volume_cont_pane_ParamLimits

0xa538,	// (0x0002136b) mup_volume_cont_pane

0x85d7,	// (0x0001f40a) aid_size_cell_pinb

0x85e1,	// (0x0001f414) aid_size_list_pinb

0xb10e,	// (0x00021f41) mup2_volume_cont_pane_ParamLimits

0xb10e,	// (0x00021f41) mup2_volume_cont_pane

0x76ff,	// (0x0001e532) mup2_volume_cont_pane_g1_ParamLimits

0x76ff,	// (0x0001e532) mup2_volume_cont_pane_g1

0x6c33,	// (0x0001da66) aid_size_cell_touch_ParamLimits

0x6c33,	// (0x0001da66) aid_size_cell_touch

0x6e58,	// (0x0001dc8b) touch_pane_ParamLimits

0x6e58,	// (0x0001dc8b) touch_pane

0x6e4e,	// (0x0001dc81) main_rss2_pane

0x2e44,	// (0x00019c77) listscroll_rss2_pane

0x2e4d,	// (0x00019c80) rss2_navigation_pane

0x2e55,	// (0x00019c88) list_rss2_pane

0x150b,	// (0x0001833e) scroll_pane_cp22

0x2e5d,	// (0x00019c90) rss2_navigation_pane_g1

0x2e66,	// (0x00019c99) rss2_navigation_pane_g2

0x2e6e,	// (0x00019ca1) rss2_navigation_pane_g3

0x0002,

0xf684,	// (0x000264b7) rss2_navigation_pane_g

0x2e76,	// (0x00019ca9) rss2_navigation_pane_t1

0xb21a,	// (0x0002204d) rss2_list_single_pane_ParamLimits

0xb21a,	// (0x0002204d) rss2_list_single_pane

0x2e84,	// (0x00019cb7) rss2_list_single_pane_t2

0x2e92,	// (0x00019cc5) rss2_list_single_pane_t3_ParamLimits

0x2e92,	// (0x00019cc5) rss2_list_single_pane_t3

0x2eaf,	// (0x00019ce2) rss2_list_single_pane_t4

0x9e67,	// (0x00020c9a) smil_status_pane_g1

0x7359,	// (0x0001e18c) main_image2_pane_ParamLimits

0x7359,	// (0x0001e18c) main_image2_pane

0x756a,	// (0x0001e39d) main_camera2_pane_g9_ParamLimits

0x756a,	// (0x0001e39d) main_camera2_pane_g9

0x75be,	// (0x0001e3f1) main_camera2_pane_t5_ParamLimits

0x75be,	// (0x0001e3f1) main_camera2_pane_t5

0x75d0,	// (0x0001e403) main_camera2_pane_t6_ParamLimits

0x75d0,	// (0x0001e403) main_camera2_pane_t6

0xb231,	// (0x00022064) main_image2_pane_g1_ParamLimits

0xb231,	// (0x00022064) main_image2_pane_g1

0xa9dc,	// (0x0002180f) smil2_video_pane_ParamLimits

0xa9dc,	// (0x0002180f) smil2_video_pane

0x6c63,	// (0x0001da96) aid_zoom_text_primary_cp

0x6df7,	// (0x0001dc2a) popup_preview_fixed_window

0x0d6d,	// (0x00017ba0) im_reading_pane_g1

0x74c6,	// (0x0001e2f9) cams2_bc_adjust_pane_cp_ParamLimits

0x74c6,	// (0x0001e2f9) cams2_bc_adjust_pane_cp

0x75fb,	// (0x0001e42e) cams2_bc_adjust_pane_ParamLimits

0x75fb,	// (0x0001e42e) cams2_bc_adjust_pane

0x4655,	// (0x0001b488) cams2_bc_adjust_pane_g1

0x7738,	// (0x0001e56b) cams2_slider_pane

0x7741,	// (0x0001e574) cams2_slider_pane_g1

0x774a,	// (0x0001e57d) cams2_slider_pane_g2

0x0006,

0xf68b,	// (0x000264be) cams2_slider_pane_g

0x6ebf,	// (0x0001dcf2) calc_display_pane_ParamLimits

0x6ed7,	// (0x0001dd0a) calc_paper_pane_ParamLimits

0x6ef3,	// (0x0001dd26) grid_calc_pane_ParamLimits

0x72ae,	// (0x0001e0e1) popup_clock_digital_window_t1_ParamLimits

0x1a4c,	// (0x0001887f) main_image_pane_t1

0x6ea5,	// (0x0001dcd8) aid_size_cell_calc_ParamLimits

0x6ea5,	// (0x0001dcd8) aid_size_cell_calc

0x738a,	// (0x0001e1bd) popup_blid_sat_info2_window_ParamLimits

0x738a,	// (0x0001e1bd) popup_blid_sat_info2_window

0x2ef9,	// (0x00019d2c) aid_size_cell_blid

0x2f01,	// (0x00019d34) bg_popup_window_pane_cp07

0x2f24,	// (0x00019d57) grid_popup_blid_pane

0x2f2c,	// (0x00019d5f) heading_pane_cp05_ParamLimits

0x2f2c,	// (0x00019d5f) heading_pane_cp05

0x2ff4,	// (0x00019e27) cell_popup_blid_pane_ParamLimits

0x2ff4,	// (0x00019e27) cell_popup_blid_pane

0x3014,	// (0x00019e47) cell_popup_blid_pane_g1

0x301c,	// (0x00019e4f) cell_popup_blid_pane_t1

0xb0d8,	// (0x00021f0b) mup2_indicator_pane_ParamLimits

0xb0d8,	// (0x00021f0b) mup2_indicator_pane

0x0c34,	// (0x00017a67) mup2_visualizer_osc_pane

0x2d61,	// (0x00019b94) mup2_visualizer_spec_pane_ParamLimits

0x2d61,	// (0x00019b94) mup2_visualizer_spec_pane

0xb23d,	// (0x00022070) mup2_spec_half_pane

0xb246,	// (0x00022079) mup2_spec_half_pane_cp

0xb24e,	// (0x00022081) mup2_spec_bar_pane_ParamLimits

0xb24e,	// (0x00022081) mup2_spec_bar_pane

0x2cb5,	// (0x00019ae8) mup2_spec_bar_pane_g1

0x2cbf,	// (0x00019af2) mup2_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x00026431) mup2_spec_bar_pane_g

0xb26d,	// (0x000220a0) mup2_osc_middle_pane

0x2cd1,	// (0x00019b04) mup2_visualizer_osc_pane_g1

0x028e,	// (0x000170c1) popup_number_entry_window_t1_ParamLimits

0x02a1,	// (0x000170d4) popup_number_entry_window_t2_ParamLimits

0x02b3,	// (0x000170e6) popup_number_entry_window_t3_ParamLimits

0x8524,	// (0x0001f357) popup_number_entry_window_t5_ParamLimits

0x8524,	// (0x0001f357) popup_number_entry_window_t5

0xf0af,	// (0x00025ee2) popup_number_entry_window_t_ParamLimits

0x02c5,	// (0x000170f8) text_title_cp2_ParamLimits

0x72ed,	// (0x0001e120) aid_hotspot_pointer_text2_pane

0x7343,	// (0x0001e176) main_viewer_pane_g9_ParamLimits

0x7343,	// (0x0001e176) main_viewer_pane_g9

0x0fb6,	// (0x00017de9) cale_month_pane_t1_ParamLimits

0x100a,	// (0x00017e3d) bg_cale_pane_ParamLimits

0x1022,	// (0x00017e55) list_cale_pane_ParamLimits

0x1033,	// (0x00017e66) listscroll_cale_day_pane_t1

0x1045,	// (0x00017e78) scroll_pane_cp09_ParamLimits

0xa573,	// (0x000213a6) main_mup_eq_pane_t1_ParamLimits

0xa573,	// (0x000213a6) main_mup_eq_pane_t1

0xa589,	// (0x000213bc) main_mup_eq_pane_t2_ParamLimits

0xa589,	// (0x000213bc) main_mup_eq_pane_t2

0xa59f,	// (0x000213d2) main_mup_eq_pane_t3_ParamLimits

0xa59f,	// (0x000213d2) main_mup_eq_pane_t3

0xa5b5,	// (0x000213e8) main_mup_eq_pane_t4_ParamLimits

0xa5b5,	// (0x000213e8) main_mup_eq_pane_t4

0xa5cb,	// (0x000213fe) main_mup_eq_pane_t5_ParamLimits

0xa5cb,	// (0x000213fe) main_mup_eq_pane_t5

0xa5e1,	// (0x00021414) main_mup_eq_pane_t6_ParamLimits

0xa5e1,	// (0x00021414) main_mup_eq_pane_t6

0xa5f3,	// (0x00021426) main_mup_eq_pane_t7_ParamLimits

0xa5f3,	// (0x00021426) main_mup_eq_pane_t7

0xa605,	// (0x00021438) main_mup_eq_pane_t8_ParamLimits

0xa605,	// (0x00021438) main_mup_eq_pane_t8

0xa617,	// (0x0002144a) main_mup_eq_pane_t9_ParamLimits

0xa617,	// (0x0002144a) main_mup_eq_pane_t9

0xa62d,	// (0x00021460) main_mup_eq_pane_t10_ParamLimits

0xa62d,	// (0x00021460) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0002626d) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0002626d) main_mup_eq_pane_t

0xa6c0,	// (0x000214f3) mup_equalizer_pane_cp5_ParamLimits

0xa6d2,	// (0x00021505) mup_equalizer_pane_cp6_ParamLimits

0xa6e4,	// (0x00021517) mup_equalizer_pane_cp7_ParamLimits

0x6e4e,	// (0x0001dc81) main_gallery_pane

0x2cda,	// (0x00019b0d) smil2_volume_pane

0x2cf5,	// (0x00019b28) smil_status_volume_pane_g1_ParamLimits

0x2ce2,	// (0x00019b15) smil_status_volume_pane_g2_ParamLimits

0x7498,	// (0x0001e2cb) smil_status_volume_pane_g3_ParamLimits

0xf603,	// (0x00026436) smil_status_volume_pane_g_ParamLimits

0x2f01,	// (0x00019d34) bg_popup_window_pane_cp07_ParamLimits

0x2f0f,	// (0x00019d42) blid_firmament_pane

0xb276,	// (0x000220a9) aid_size_cell_gallery_ParamLimits

0xb276,	// (0x000220a9) aid_size_cell_gallery

0xb284,	// (0x000220b7) grid_gallery_pane_ParamLimits

0xb284,	// (0x000220b7) grid_gallery_pane

0xb290,	// (0x000220c3) cell_gallery_pane_ParamLimits

0xb290,	// (0x000220c3) cell_gallery_pane

0x302a,	// (0x00019e5d) bg_cell_gallery_focus_pane_ParamLimits

0x302a,	// (0x00019e5d) bg_cell_gallery_focus_pane

0x303c,	// (0x00019e6f) cell_gallery_pane_g1_ParamLimits

0x303c,	// (0x00019e6f) cell_gallery_pane_g1

0xb2cf,	// (0x00022102) cell_gallery_pane_g2_ParamLimits

0xb2cf,	// (0x00022102) cell_gallery_pane_g2

0xb2dc,	// (0x0002210f) cell_gallery_pane_g3_ParamLimits

0xb2dc,	// (0x0002210f) cell_gallery_pane_g3

0x3048,	// (0x00019e7b) cell_gallery_pane_g4_ParamLimits

0x3048,	// (0x00019e7b) cell_gallery_pane_g4

0x0003,

0xf6b1,	// (0x000264e4) cell_gallery_pane_g_ParamLimits

0xf6b1,	// (0x000264e4) cell_gallery_pane_g

0x3054,	// (0x00019e87) bg_cell_gallery_focus_pane_g1

0x305c,	// (0x00019e8f) bg_cell_gallery_focus_pane_g2

0x3064,	// (0x00019e97) bg_cell_gallery_focus_pane_g3

0x306c,	// (0x00019e9f) bg_cell_gallery_focus_pane_g4

0x3074,	// (0x00019ea7) bg_cell_gallery_focus_pane_g5

0x307c,	// (0x00019eaf) bg_cell_gallery_focus_pane_g6

0x3084,	// (0x00019eb7) bg_cell_gallery_focus_pane_g7

0x308c,	// (0x00019ebf) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6ba,	// (0x000264ed) bg_cell_gallery_focus_pane_g

0x3094,	// (0x00019ec7) aid_firma_cardinal

0x30a8,	// (0x00019edb) blid_firmament_pane_t1

0x30bf,	// (0x00019ef2) blid_firmament_pane_t2

0x30d6,	// (0x00019f09) blid_firmament_pane_t3

0x30ed,	// (0x00019f20) blid_firmament_pane_t4

0x0003,

0xf6cb,	// (0x000264fe) blid_firmament_pane_t

0x3104,	// (0x00019f37) blid_sat_info_pane

0x3114,	// (0x00019f47) blid_sat_info_pane_g1

0x3114,	// (0x00019f47) blid_sat_info_pane_g2

0x0001,

0xf6d4,	// (0x00026507) blid_sat_info_pane_g

0x311e,	// (0x00019f51) blid_sat_info_pane_t1

0x312c,	// (0x00019f5f) smil2_volume_content_pane

0x3135,	// (0x00019f68) smil2_volume_pane_g1

0x313d,	// (0x00019f70) smil2_volume_content_pane_g1

0x3146,	// (0x00019f79) smil2_volume_content_pane_g2

0x314f,	// (0x00019f82) smil2_volume_content_pane_g3

0x3158,	// (0x00019f8b) smil2_volume_content_pane_g4

0x3161,	// (0x00019f94) smil2_volume_content_pane_g5

0x316a,	// (0x00019f9d) smil2_volume_content_pane_g6

0x3173,	// (0x00019fa6) smil2_volume_content_pane_g7

0x317c,	// (0x00019faf) smil2_volume_content_pane_g8

0x3185,	// (0x00019fb8) smil2_volume_content_pane_g9

0x318e,	// (0x00019fc1) smil2_volume_content_pane_g10

0x0009,

0xf6d9,	// (0x0002650c) smil2_volume_content_pane_g

0x8a8e,	// (0x0001f8c1) cale_week_day_heading_pane_t1_ParamLimits

0x8ac9,	// (0x0001f8fc) cale_week_day_heading_pane_t2_ParamLimits

0x8b04,	// (0x0001f937) cale_week_day_heading_pane_t3_ParamLimits

0x8b3f,	// (0x0001f972) cale_week_day_heading_pane_t4_ParamLimits

0x8b7a,	// (0x0001f9ad) cale_week_day_heading_pane_t5_ParamLimits

0x8bb5,	// (0x0001f9e8) cale_week_day_heading_pane_t6_ParamLimits

0x8bf0,	// (0x0001fa23) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x00025fe9) cale_week_day_heading_pane_t_ParamLimits

0x0be2,	// (0x00017a15) bg_cale_side_pane_ParamLimits

0x7034,	// (0x0001de67) cale_week_time_pane_t1_ParamLimits

0x706e,	// (0x0001dea1) cale_week_time_pane_t2_ParamLimits

0x70a8,	// (0x0001dedb) cale_week_time_pane_t3_ParamLimits

0x70e2,	// (0x0001df15) cale_week_time_pane_t4_ParamLimits

0x711c,	// (0x0001df4f) cale_week_time_pane_t5_ParamLimits

0x7156,	// (0x0001df89) cale_week_time_pane_t6_ParamLimits

0x7190,	// (0x0001dfc3) cale_week_time_pane_t7_ParamLimits

0x71ca,	// (0x0001dffd) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x00025ff8) cale_week_time_pane_t_ParamLimits

0x8c2b,	// (0x0001fa5e) cell_cale_week_pane_g2_ParamLimits

0x0be2,	// (0x00017a15) bg_cale_side_pane_cp01_ParamLimits

0x9bf0,	// (0x00020a23) cale_month_week_pane_t1_ParamLimits

0x9c29,	// (0x00020a5c) cale_month_week_pane_t2_ParamLimits

0x9c62,	// (0x00020a95) cale_month_week_pane_t3_ParamLimits

0x9c9b,	// (0x00020ace) cale_month_week_pane_t4_ParamLimits

0x9cd4,	// (0x00020b07) cale_month_week_pane_t5_ParamLimits

0x9d0d,	// (0x00020b40) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x000260cd) cale_month_week_pane_t_ParamLimits

0x720e,	// (0x0001e041) cell_cale_month_pane_g1_ParamLimits

0x6e4e,	// (0x0001dc81) main_cale_event_viewer_pane

0x020d,	// (0x00017040) listscroll_cale_event_viewer_pane

0x3197,	// (0x00019fca) list_cale_ev_pane

0x319f,	// (0x00019fd2) scroll_pane_cp023

0xb2e9,	// (0x0002211c) field_cale_ev_pane_ParamLimits

0xb2e9,	// (0x0002211c) field_cale_ev_pane

0x31ab,	// (0x00019fde) field_cale_ev_content_pane_ParamLimits

0x31ab,	// (0x00019fde) field_cale_ev_content_pane

0x31b7,	// (0x00019fea) field_cale_ev_pane_g1_ParamLimits

0x31b7,	// (0x00019fea) field_cale_ev_pane_g1

0x31c3,	// (0x00019ff6) field_cale_ev_pane_g2_ParamLimits

0x31c3,	// (0x00019ff6) field_cale_ev_pane_g2

0x31db,	// (0x0001a00e) field_cale_ev_pane_g3_ParamLimits

0x31db,	// (0x0001a00e) field_cale_ev_pane_g3

0x0002,

0xf6ee,	// (0x00026521) field_cale_ev_pane_g_ParamLimits

0xf6ee,	// (0x00026521) field_cale_ev_pane_g

0x31f3,	// (0x0001a026) field_cale_ev_pane_t1_ParamLimits

0x31f3,	// (0x0001a026) field_cale_ev_pane_t1

0xb303,	// (0x00022136) field_cale_ev_content_pane_t1_ParamLimits

0xb303,	// (0x00022136) field_cale_ev_content_pane_t1

0x187d,	// (0x000186b0) bg_button_pane_cp01

0x8879,	// (0x0001f6ac) listscroll_cale_week_pane_ParamLimits

0x0b8d,	// (0x000179c0) popup_toolbar_window_cp01

0x0bb3,	// (0x000179e6) listscroll_cale_week_pane_t1_ParamLimits

0x8879,	// (0x0001f6ac) listscroll_cale_day_pane_ParamLimits

0x0b8d,	// (0x000179c0) popup_toolbar_window_cp02

0x1033,	// (0x00017e66) listscroll_cale_day_pane_t1_ParamLimits

0x8879,	// (0x0001f6ac) main_cale_month_pane_ParamLimits

0x745d,	// (0x0001e290) popup_toolbar_window_cp03_ParamLimits

0x745d,	// (0x0001e290) popup_toolbar_window_cp03

0xa904,	// (0x00021737) main_image_pane_g2_ParamLimits

0xa904,	// (0x00021737) main_image_pane_g2

0xa910,	// (0x00021743) main_image_pane_g3_ParamLimits

0xa910,	// (0x00021743) main_image_pane_g3

0x0002,

0xf4cc,	// (0x000262ff) main_image_pane_g_ParamLimits

0xf4cc,	// (0x000262ff) main_image_pane_g

0x1a4c,	// (0x0001887f) main_image_pane_t1_ParamLimits

0xa91c,	// (0x0002174f) main_image_pane_t2_ParamLimits

0xa91c,	// (0x0002174f) main_image_pane_t2

0xa92e,	// (0x00021761) main_image_pane_t3_ParamLimits

0xa92e,	// (0x00021761) main_image_pane_t3

0xa940,	// (0x00021773) main_image_pane_t4_ParamLimits

0xa940,	// (0x00021773) main_image_pane_t4

0x0003,

0xf4d3,	// (0x00026306) main_image_pane_t_ParamLimits

0xf4d3,	// (0x00026306) main_image_pane_t

0xa952,	// (0x00021785) popup_image_details_window_cp01

0xa95a,	// (0x0002178d) popup_toobar_trans_pane_cp01_ParamLimits

0xa95a,	// (0x0002178d) popup_toobar_trans_pane_cp01

0x73d1,	// (0x0001e204) popup_image_details_window_ParamLimits

0x73d1,	// (0x0001e204) popup_image_details_window

0x73dd,	// (0x0001e210) popup_image_focus_window

0x74ba,	// (0x0001e2ed) camera2_autofocus_pane_ParamLimits

0x74ba,	// (0x0001e2ed) camera2_autofocus_pane

0x020d,	// (0x00017040) bg_popup_sub_pane_cp06

0x320a,	// (0x0001a03d) popup_image_focus_window_g1

0x3212,	// (0x0001a045) popup_image_focus_window_g2

0x321a,	// (0x0001a04d) popup_image_focus_window_g3

0x3222,	// (0x0001a055) popup_image_focus_window_g4

0x0003,

0xf6f5,	// (0x00026528) popup_image_focus_window_g

0x322a,	// (0x0001a05d) popup_image_focus_window_t1

0x3238,	// (0x0001a06b) popup_image_focus_window_t2

0x3247,	// (0x0001a07a) popup_image_focus_window_t3

0x0002,

0xf6fe,	// (0x00026531) popup_image_focus_window_t

0x3255,	// (0x0001a088) camera2_autofocus_pane_g1

0x0260,	// (0x00017093) bg_tb_trans_pane_cp01

0x3263,	// (0x0001a096) popup_image_details_window_g1

0x3276,	// (0x0001a0a9) popup_image_details_window_g2

0x0002,

0xf710,	// (0x00026543) popup_image_details_window_g

0x329f,	// (0x0001a0d2) popup_image_details_window_t1

0x32b1,	// (0x0001a0e4) popup_image_details_window_t2

0x32ca,	// (0x0001a0fd) popup_image_details_window_t3

0x32de,	// (0x0001a111) popup_image_details_window_t4

0x32f9,	// (0x0001a12c) popup_image_details_window_t5

0x0004,

0xf717,	// (0x0002654a) popup_image_details_window_t

0x0993,	// (0x000177c6) bg_calc_paper_pane_ParamLimits

0x6e4e,	// (0x0001dc81) grid_highlight_pane_cp013

0x6f13,	// (0x0001dd46) list_calc_pane_ParamLimits

0x6f25,	// (0x0001dd58) scroll_pane_cp024

0x09c5,	// (0x000177f8) bg_calc_display_pane_ParamLimits

0x6f2d,	// (0x0001dd60) calc_display_pane_t1_ParamLimits

0x6f42,	// (0x0001dd75) calc_display_pane_t2_ParamLimits

0x6f57,	// (0x0001dd8a) calc_display_pane_t3_ParamLimits

0xf136,	// (0x00025f69) calc_display_pane_t_ParamLimits

0x6fb8,	// (0x0001ddeb) cell_calc_pane_g2

0x0001,

0xf153,	// (0x00025f86) cell_calc_pane_g

0x6fc1,	// (0x0001ddf4) cell_calc_pane_t1

0x0a72,	// (0x000178a5) grid_highlight_pane_cp02_ParamLimits

0x0a88,	// (0x000178bb) toolbar_button_pane_cp01_ParamLimits

0x0a88,	// (0x000178bb) toolbar_button_pane_cp01

0x1a91,	// (0x000188c4) temp_image_control_pane_ParamLimits

0x1a91,	// (0x000188c4) temp_image_control_pane

0x7359,	// (0x0001e18c) main_mp3_pane

0x3313,	// (0x0001a146) temp_image_control_pane_g1_ParamLimits

0x3313,	// (0x0001a146) temp_image_control_pane_g1

0x3321,	// (0x0001a154) temp_image_control_pane_g2_ParamLimits

0x3321,	// (0x0001a154) temp_image_control_pane_g2

0x3333,	// (0x0001a166) temp_image_control_pane_g3_ParamLimits

0x3333,	// (0x0001a166) temp_image_control_pane_g3

0xb34d,	// (0x00022180) temp_image_control_pane_g4_ParamLimits

0xb34d,	// (0x00022180) temp_image_control_pane_g4

0x0003,

0xf722,	// (0x00026555) temp_image_control_pane_g_ParamLimits

0xf722,	// (0x00026555) temp_image_control_pane_g

0x3313,	// (0x0001a146) main_mp3_pane_g1

0xb35e,	// (0x00022191) main_mp3_pane_g2

0x0007,

0xf72b,	// (0x0002655e) main_mp3_pane_g

0x3376,	// (0x0001a1a9) main_mp3_pane_t1

0x0c7e,	// (0x00017ab1) main_camera_pane_g8_ParamLimits

0x0c7e,	// (0x00017ab1) main_camera_pane_g8

0x8e4a,	// (0x0001fc7d) main_video_pane_g7_ParamLimits

0x8e4a,	// (0x0001fc7d) main_video_pane_g7

0x75e9,	// (0x0001e41c) main_camera2_pane_t7_ParamLimits

0x75e9,	// (0x0001e41c) main_camera2_pane_t7

0x0dd3,	// (0x00017c06) scroll_pane_cp025_ParamLimits

0x0dd3,	// (0x00017c06) scroll_pane_cp025

0x0de7,	// (0x00017c1a) scroll_pane_cp026_ParamLimits

0x0de7,	// (0x00017c1a) scroll_pane_cp026

0x0df6,	// (0x00017c29) wml_content_pane_ParamLimits

0x6e4e,	// (0x0001dc81) main_touch_calib_pane

0xb3f6,	// (0x00022229) main_touch_calib_pane_g1

0xb402,	// (0x00022235) main_touch_calib_pane_g2

0xb40e,	// (0x00022241) main_touch_calib_pane_g3

0xb41a,	// (0x0002224d) main_touch_calib_pane_g4

0x0003,

0xf749,	// (0x0002657c) main_touch_calib_pane_g

0xb426,	// (0x00022259) main_touch_calib_pane_t1

0xb43b,	// (0x0002226e) main_touch_calib_pane_t2

0x0004,

0xf752,	// (0x00026585) main_touch_calib_pane_t

0x15c7,	// (0x000183fa) mup_progress_pane_cp02

0x15fc,	// (0x0001842f) navi_pane_g1

0x1687,	// (0x000184ba) navi_pane_mp_t3

0x7359,	// (0x0001e18c) main_mp3_pane_ParamLimits

0xadc6,	// (0x00021bf9) navi_pane_ParamLimits

0x3313,	// (0x0001a146) main_mp3_pane_g1_ParamLimits

0xb35e,	// (0x00022191) main_mp3_pane_g2_ParamLimits

0xb36a,	// (0x0002219d) main_mp3_pane_g3_ParamLimits

0xb36a,	// (0x0002219d) main_mp3_pane_g3

0xb376,	// (0x000221a9) main_mp3_pane_g4_ParamLimits

0xb376,	// (0x000221a9) main_mp3_pane_g4

0x3343,	// (0x0001a176) main_mp3_pane_g5_ParamLimits

0x3343,	// (0x0001a176) main_mp3_pane_g5

0x3351,	// (0x0001a184) main_mp3_pane_g6_ParamLimits

0x3351,	// (0x0001a184) main_mp3_pane_g6

0x335e,	// (0x0001a191) main_mp3_pane_g7_ParamLimits

0x335e,	// (0x0001a191) main_mp3_pane_g7

0x336a,	// (0x0001a19d) main_mp3_pane_g8_ParamLimits

0x336a,	// (0x0001a19d) main_mp3_pane_g8

0xf72b,	// (0x0002655e) main_mp3_pane_g_ParamLimits

0xb382,	// (0x000221b5) main_mp3_pane_t2

0xb390,	// (0x000221c3) main_mp3_pane_t3

0x3384,	// (0x0001a1b7) main_mp3_pane_t4

0x3392,	// (0x0001a1c5) main_mp3_pane_t5

0x0005,

0xf73c,	// (0x0002656f) main_mp3_pane_t

0x33a0,	// (0x0001a1d3) mup_progress_pane_cp01

0x6c63,	// (0x0001da96) aid_zoom_text_secondary2

0x3197,	// (0x00019fca) list_cale_ev2_pane

0x319f,	// (0x00019fd2) scroll_pane_cp023_ParamLimits

0xb486,	// (0x000222b9) field_cale_ev2_pane_ParamLimits

0xb486,	// (0x000222b9) field_cale_ev2_pane

0x33a8,	// (0x0001a1db) field_cale_ev2_pane_g1_ParamLimits

0x33a8,	// (0x0001a1db) field_cale_ev2_pane_g1

0x33b4,	// (0x0001a1e7) field_cale_ev2_pane_g2_ParamLimits

0x33b4,	// (0x0001a1e7) field_cale_ev2_pane_g2

0x33cc,	// (0x0001a1ff) field_cale_ev2_pane_g3_ParamLimits

0x33cc,	// (0x0001a1ff) field_cale_ev2_pane_g3

0x0003,

0xf75d,	// (0x00026590) field_cale_ev2_pane_g_ParamLimits

0xf75d,	// (0x00026590) field_cale_ev2_pane_g

0x33f0,	// (0x0001a223) field_cale_ev2_pane_t1_ParamLimits

0x33f0,	// (0x0001a223) field_cale_ev2_pane_t1

0x3407,	// (0x0001a23a) field_cale_ev2_pane_t2_ParamLimits

0x3407,	// (0x0001a23a) field_cale_ev2_pane_t2

0x0001,

0xf766,	// (0x00026599) field_cale_ev2_pane_t_ParamLimits

0xf766,	// (0x00026599) field_cale_ev2_pane_t

0xa800,	// (0x00021633) main_postcard_pane_g5_ParamLimits

0xa800,	// (0x00021633) main_postcard_pane_g5

0xa80c,	// (0x0002163f) main_postcard_pane_g6_ParamLimits

0xa80c,	// (0x0002163f) main_postcard_pane_g6

0x8c9f,	// (0x0001fad2) camera2_autofocus_pane_cp_ParamLimits

0x8c9f,	// (0x0001fad2) camera2_autofocus_pane_cp

0x7359,	// (0x0001e18c) main_mup3_pane

0xb4d5,	// (0x00022308) main_mup3_pane_g1_ParamLimits

0xb4d5,	// (0x00022308) main_mup3_pane_g1

0xb4f6,	// (0x00022329) main_mup3_pane_g2_ParamLimits

0xb4f6,	// (0x00022329) main_mup3_pane_g2

0xb563,	// (0x00022396) main_mup3_pane_g3_ParamLimits

0xb563,	// (0x00022396) main_mup3_pane_g3

0xb59e,	// (0x000223d1) main_mup3_pane_g4_ParamLimits

0xb59e,	// (0x000223d1) main_mup3_pane_g4

0xb5d9,	// (0x0002240c) main_mup3_pane_g5_ParamLimits

0xb5d9,	// (0x0002240c) main_mup3_pane_g5

0xb614,	// (0x00022447) main_mup3_pane_g6_ParamLimits

0xb614,	// (0x00022447) main_mup3_pane_g6

0x341c,	// (0x0001a24f) main_mup3_pane_g7_ParamLimits

0x341c,	// (0x0001a24f) main_mup3_pane_g7

0x0007,

0xf776,	// (0x000265a9) main_mup3_pane_g_ParamLimits

0xf776,	// (0x000265a9) main_mup3_pane_g

0xb682,	// (0x000224b5) main_mup3_pane_t1_ParamLimits

0xb682,	// (0x000224b5) main_mup3_pane_t1

0xb6e3,	// (0x00022516) main_mup3_pane_t2_ParamLimits

0xb6e3,	// (0x00022516) main_mup3_pane_t2

0xb79e,	// (0x000225d1) main_mup3_pane_t4_ParamLimits

0xb79e,	// (0x000225d1) main_mup3_pane_t4

0xb7e4,	// (0x00022617) main_mup3_pane_t5_ParamLimits

0xb7e4,	// (0x00022617) main_mup3_pane_t5

0xb888,	// (0x000226bb) main_mup3_pane_t6_ParamLimits

0xb888,	// (0x000226bb) main_mup3_pane_t6

0x0005,

0xf787,	// (0x000265ba) main_mup3_pane_t_ParamLimits

0xf787,	// (0x000265ba) main_mup3_pane_t

0xb930,	// (0x00022763) mup3_progress_pane_ParamLimits

0xb930,	// (0x00022763) mup3_progress_pane

0xb994,	// (0x000227c7) popup_mup3_control_window_ParamLimits

0xb994,	// (0x000227c7) popup_mup3_control_window

0x342a,	// (0x0001a25d) popup_mup3_text_window

0xb9ad,	// (0x000227e0) mup3_progress_pane_t1

0xb9cb,	// (0x000227fe) mup3_progress_pane_t2

0x3432,	// (0x0001a265) mup3_progress_pane_t3

0x0002,

0xf794,	// (0x000265c7) mup3_progress_pane_t

0x344f,	// (0x0001a282) mup_progress_pane_cp03

0x020d,	// (0x00017040) bg_tb_trans_pane_cp04

0xb9e9,	// (0x0002281c) mup3_volume_pane

0xb9f1,	// (0x00022824) popup_mup3_control_window_g1

0xb9fa,	// (0x0002282d) mup3_volume_pane_g1

0xba03,	// (0x00022836) mup3_volume_pane_g2

0xba0c,	// (0x0002283f) mup3_volume_pane_g3

0x0002,

0xf79b,	// (0x000265ce) mup3_volume_pane_g

0x020d,	// (0x00017040) bg_tb_trans_pane_cp03

0x345f,	// (0x0001a292) popup_mup3_text_window_g1

0x3467,	// (0x0001a29a) popup_mup3_text_window_t1

0x0a49,	// (0x0001787c) list_calc_item_pane_g1_ParamLimits

0x2e2b,	// (0x00019c5e) mup_volume_pane_cp_g1

0xb450,	// (0x00022283) main_touch_calib_pane_t3

0xb462,	// (0x00022295) main_touch_calib_pane_t4

0xb474,	// (0x000222a7) main_touch_calib_pane_t5

0x6c23,	// (0x0001da56) aid_cell_size_toolbar2

0x6c2b,	// (0x0001da5e) aid_popup3_width_pane

0x6c63,	// (0x0001da96) aid_zoom_text_msg_primary

0x0c66,	// (0x00017a99) vorec_t7

0x0a0d,	// (0x00017840) bg_calc_paper_pane_g1_ParamLimits

0x0a25,	// (0x00017858) bg_calc_paper_pane_g2_ParamLimits

0x0a19,	// (0x0001784c) bg_calc_paper_pane_g3_ParamLimits

0x0a3d,	// (0x00017870) bg_calc_paper_pane_g4_ParamLimits

0x0a31,	// (0x00017864) bg_calc_paper_pane_g5_ParamLimits

0x876b,	// (0x0001f59e) bg_calc_paper_pane_g6_ParamLimits

0x877a,	// (0x0001f5ad) bg_calc_paper_pane_g7_ParamLimits

0x8789,	// (0x0001f5bc) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x00025f70) bg_calc_paper_pane_g_ParamLimits

0x8798,	// (0x0001f5cb) calc_bg_paper_pane_g9_ParamLimits

0x8d7f,	// (0x0001fbb2) image_qvga_pane_ParamLimits

0x8d7f,	// (0x0001fbb2) image_qvga_pane

0x08da,	// (0x0001770d) bg_popup_sub_pane_cp04_ParamLimits

0x19c8,	// (0x000187fb) popup_mup_playback_window_g1_ParamLimits

0x19d4,	// (0x00018807) popup_mup_playback_window_t1_ParamLimits

0x19e9,	// (0x0001881c) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x000262fa) popup_mup_playback_window_t_ParamLimits

0xafe4,	// (0x00021e17) main_mup2_pane_g3_ParamLimits

0xafe4,	// (0x00021e17) main_mup2_pane_g3

0x9105,	// (0x0001ff38) popup_toolbar_window_cp04

0x1dca,	// (0x00018bfd) popup_call2_audio_second_window_g3_ParamLimits

0x1dca,	// (0x00018bfd) popup_call2_audio_second_window_g3

0x21d4,	// (0x00019007) popup_call2_audio_first_window_g4_ParamLimits

0x21d4,	// (0x00019007) popup_call2_audio_first_window_g4

0x2853,	// (0x00019686) popup_call2_audio_in_window_g4_ParamLimits

0x2853,	// (0x00019686) popup_call2_audio_in_window_g4

0xa8f7,	// (0x0002172a) aid_area_sk_bg_cut_ParamLimits

0xa8f7,	// (0x0002172a) aid_area_sk_bg_cut

0x19fe,	// (0x00018831) aid_area_sk_bg_cut_2_ParamLimits

0x19fe,	// (0x00018831) aid_area_sk_bg_cut_2

0xb2bf,	// (0x000220f2) aid_placing_details_win

0xb2c7,	// (0x000220fa) aid_placing_details_win_2

0x3255,	// (0x0001a088) camera2_autofocus_pane_g1_ParamLimits

0x6dea,	// (0x0001dc1d) popup_fixed_preview_cale_window_ParamLimits

0x6dea,	// (0x0001dc1d) popup_fixed_preview_cale_window

0x1718,	// (0x0001854b) navi_slider_pane_g3

0x170f,	// (0x00018542) navi_slider_pane_g4

0x1706,	// (0x00018539) navi_slider_pane_g5

0x1718,	// (0x0001854b) navi_slider_pane_g6

0x72d4,	// (0x0001e107) navi_slider_pane_g7

0x1842,	// (0x00018675) mup_scale_pane_g3

0x184b,	// (0x0001867e) mup_scale_pane_g4

0x1854,	// (0x00018687) mup_scale_pane_g5

0xa6f6,	// (0x00021529) mup_scale_pane_g6

0xa6ff,	// (0x00021532) mup_scale_pane_g7

0x1718,	// (0x0001854b) cams2_slider_pane_g3

0x2ee0,	// (0x00019d13) cams2_slider_pane_g4

0x7753,	// (0x0001e586) cams2_slider_pane_g5

0x1718,	// (0x0001854b) cams2_slider_pane_g6

0x775b,	// (0x0001e58e) cams2_slider_pane_g7

0x3114,	// (0x00019f47) camera2_autofocus_pane_cp_g1

0x2bf4,	// (0x00019a27) bg_popup_preview_window_pane_cp02_ParamLimits

0x2bf4,	// (0x00019a27) bg_popup_preview_window_pane_cp02

0x3475,	// (0x0001a2a8) list_fp_cale_pane_ParamLimits

0x3475,	// (0x0001a2a8) list_fp_cale_pane

0x3481,	// (0x0001a2b4) popup_fixed_preview_cale_window_t1_ParamLimits

0x3481,	// (0x0001a2b4) popup_fixed_preview_cale_window_t1

0xba15,	// (0x00022848) popup_fixed_preview_cale_window_t2_ParamLimits

0xba15,	// (0x00022848) popup_fixed_preview_cale_window_t2

0xba2a,	// (0x0002285d) popup_fixed_preview_cale_window_t3_ParamLimits

0xba2a,	// (0x0002285d) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a2,	// (0x000265d5) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a2,	// (0x000265d5) popup_fixed_preview_cale_window_t

0xba3f,	// (0x00022872) list_single_fp_cale_pane_ParamLimits

0xba3f,	// (0x00022872) list_single_fp_cale_pane

0x349f,	// (0x0001a2d2) list_single_fp_cale_pane_g1_ParamLimits

0x349f,	// (0x0001a2d2) list_single_fp_cale_pane_g1

0x34ab,	// (0x0001a2de) list_single_fp_cale_pane_g2_ParamLimits

0x34ab,	// (0x0001a2de) list_single_fp_cale_pane_g2

0x0002,

0xf7a9,	// (0x000265dc) list_single_fp_cale_pane_g_ParamLimits

0xf7a9,	// (0x000265dc) list_single_fp_cale_pane_g

0x34c4,	// (0x0001a2f7) list_single_fp_cale_pane_t1_ParamLimits

0x34c4,	// (0x0001a2f7) list_single_fp_cale_pane_t1

0x34d6,	// (0x0001a309) list_single_fp_cale_pane_t2_ParamLimits

0x34d6,	// (0x0001a309) list_single_fp_cale_pane_t2

0x0001,

0xf7b0,	// (0x000265e3) list_single_fp_cale_pane_t_ParamLimits

0xf7b0,	// (0x000265e3) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6e4e,	// (0x0001dc81) main_dialer_pane

0xba4f,	// (0x00022882) aid_cell_size_keypad

0xba59,	// (0x0002288c) dialer_ne_pane

0xba61,	// (0x00022894) grid_dialer_command_1_pane

0xba69,	// (0x0002289c) grid_dialer_command_2_pane

0xba71,	// (0x000228a4) grid_dialer_keypad_pane

0xba81,	// (0x000228b4) bg_popup_call_pane_cp06_ParamLimits

0xba81,	// (0x000228b4) bg_popup_call_pane_cp06

0xba8d,	// (0x000228c0) dialer_ne_clear_pane_ParamLimits

0xba8d,	// (0x000228c0) dialer_ne_clear_pane

0x3509,	// (0x0001a33c) dialer_ne_pane_g1

0x3511,	// (0x0001a344) dialer_ne_pane_t1_ParamLimits

0x3511,	// (0x0001a344) dialer_ne_pane_t1

0xba99,	// (0x000228cc) dialer_ne_pane_t2_ParamLimits

0xba99,	// (0x000228cc) dialer_ne_pane_t2

0xbab6,	// (0x000228e9) dialer_ne_pane_t3_ParamLimits

0xbab6,	// (0x000228e9) dialer_ne_pane_t3

0x0002,

0xf7b5,	// (0x000265e8) dialer_ne_pane_t_ParamLimits

0xf7b5,	// (0x000265e8) dialer_ne_pane_t

0xbada,	// (0x0002290d) dialer_ne_pane_t3_copy1_ParamLimits

0xbada,	// (0x0002290d) dialer_ne_pane_t3_copy1

0xbafe,	// (0x00022931) cell_dialer_keypad_pane_ParamLimits

0xbafe,	// (0x00022931) cell_dialer_keypad_pane

0xbb13,	// (0x00022946) cell_dialer_command_1_pane_ParamLimits

0xbb13,	// (0x00022946) cell_dialer_command_1_pane

0xbb29,	// (0x0002295c) cell_dialer_command_2_pane_ParamLimits

0xbb29,	// (0x0002295c) cell_dialer_command_2_pane

0x3523,	// (0x0001a356) bg_button_pane_cp02_ParamLimits

0x3523,	// (0x0001a356) bg_button_pane_cp02

0xbb38,	// (0x0002296b) cell_dialer_keypad_pane_g1_ParamLimits

0xbb38,	// (0x0002296b) cell_dialer_keypad_pane_g1

0x3523,	// (0x0001a356) bg_button_pane_cp03_ParamLimits

0x3523,	// (0x0001a356) bg_button_pane_cp03

0xbb4d,	// (0x00022980) cell_dialer_command_1_pane_g1_ParamLimits

0xbb4d,	// (0x00022980) cell_dialer_command_1_pane_g1

0x352f,	// (0x0001a362) bg_button_pane_cp04

0xbb60,	// (0x00022993) cell_dialer_command_2_pane_g1

0x0c34,	// (0x00017a67) bg_button_pane_cp06

0x3537,	// (0x0001a36a) dialer_ne_clear_pane_g1

0x1608,	// (0x0001843b) navi_pane_g2

0xa2ed,	// (0x00021120) navi_pane_g3

0x0002,

0xf3ca,	// (0x000261fd) navi_pane_g

0x1695,	// (0x000184c8) navi_pane_mv_g2

0x16bc,	// (0x000184ef) navi_pane_mv_g5

0xa30a,	// (0x0002113d) navi_pane_mv_t1

0x09c5,	// (0x000177f8) main_clock2_pane

0xbb9c,	// (0x000229cf) main_clock2_list_pane_ParamLimits

0xbb9c,	// (0x000229cf) main_clock2_list_pane

0xbbc2,	// (0x000229f5) main_clock2_pane_t1_ParamLimits

0xbbc2,	// (0x000229f5) main_clock2_pane_t1

0xbbe2,	// (0x00022a15) main_clock2_pane_t2_ParamLimits

0xbbe2,	// (0x00022a15) main_clock2_pane_t2

0x0004,

0xf7c1,	// (0x000265f4) main_clock2_pane_t_ParamLimits

0xf7c1,	// (0x000265f4) main_clock2_pane_t

0xbc3b,	// (0x00022a6e) popup_clock_analogue_window_cp03_ParamLimits

0xbc3b,	// (0x00022a6e) popup_clock_analogue_window_cp03

0xbc59,	// (0x00022a8c) popup_clock_digital_window_cp02_ParamLimits

0xbc59,	// (0x00022a8c) popup_clock_digital_window_cp02

0xbcc6,	// (0x00022af9) main_clock2_list_single_pane_ParamLimits

0xbcc6,	// (0x00022af9) main_clock2_list_single_pane

0x0c34,	// (0x00017a67) list_highlight_pane_cp05

0x356f,	// (0x0001a3a2) main_clock2_list_single_pane_t1

0x9105,	// (0x0001ff38) popup_toolbar_window_cp04_ParamLimits

0xb31d,	// (0x00022150) camera2_autofocus_pane_g2_ParamLimits

0xb31d,	// (0x00022150) camera2_autofocus_pane_g2

0xb329,	// (0x0002215c) camera2_autofocus_pane_g3_ParamLimits

0xb329,	// (0x0002215c) camera2_autofocus_pane_g3

0xb335,	// (0x00022168) camera2_autofocus_pane_g4_ParamLimits

0xb335,	// (0x00022168) camera2_autofocus_pane_g4

0xb341,	// (0x00022174) camera2_autofocus_pane_g5_ParamLimits

0xb341,	// (0x00022174) camera2_autofocus_pane_g5

0x0004,

0xf705,	// (0x00026538) camera2_autofocus_pane_g_ParamLimits

0xf705,	// (0x00026538) camera2_autofocus_pane_g

0xb49c,	// (0x000222cf) camera2_autofocus_pane_cp_g2

0xb4a4,	// (0x000222d7) camera2_autofocus_pane_cp_g3

0xb4ac,	// (0x000222df) camera2_autofocus_pane_cp_g4

0xb4b4,	// (0x000222e7) camera2_autofocus_pane_cp_g5

0x0004,

0xf76b,	// (0x0002659e) camera2_autofocus_pane_cp_g

0xba79,	// (0x000228ac) popup_dialer_spcha_window

0x020d,	// (0x00017040) bg_popup_sub_pane_cp07

0x357d,	// (0x0001a3b0) list_spcha_pane

0x3585,	// (0x0001a3b8) list_single_spcha_pane_ParamLimits

0x3585,	// (0x0001a3b8) list_single_spcha_pane

0x020d,	// (0x00017040) list_highlight_pane_cp06

0x3596,	// (0x0001a3c9) list_single_spcha_pane_t1

0x25fd,	// (0x00019430) popup_call2_audio_out_window_g4_ParamLimits

0x25fd,	// (0x00019430) popup_call2_audio_out_window_g4

0x6e4e,	// (0x0001dc81) main_imed2_pane

0x73e5,	// (0x0001e218) popup_imed_adjust2_window

0x73f6,	// (0x0001e229) popup_imed_trans_window_ParamLimits

0x73f6,	// (0x0001e229) popup_imed_trans_window

0x2f58,	// (0x00019d8b) popup_blid_sat_info2_window_t1

0x2f66,	// (0x00019d99) popup_blid_sat_info2_window_t2

0x000a,

0xf69a,	// (0x000264cd) popup_blid_sat_info2_window_t

0xbcf8,	// (0x00022b2b) aid_size_cell_colour_35

0xbd0f,	// (0x00022b42) aid_size_cell_colour_112

0xbd26,	// (0x00022b59) aid_size_cell_effect

0x0260,	// (0x00017093) bg_tb_trans_pane_cp02

0x11e1,	// (0x00018014) heading_imed_pane

0xbd40,	// (0x00022b73) listscroll_imed_pane

0x35a4,	// (0x0001a3d7) heading_imed_pane_g1

0x35ac,	// (0x0001a3df) heading_imed_pane_t1

0x35ba,	// (0x0001a3ed) grid_imed_colour_35_pane_ParamLimits

0x35ba,	// (0x0001a3ed) grid_imed_colour_35_pane

0xbd4c,	// (0x00022b7f) grid_imed_effect_pane

0x35cd,	// (0x0001a400) list_imed_aspect_pane

0xbd58,	// (0x00022b8b) scroll_pane_cp027_ParamLimits

0xbd58,	// (0x00022b8b) scroll_pane_cp027

0xbd64,	// (0x00022b97) cell_imed_effect_pane_ParamLimits

0xbd64,	// (0x00022b97) cell_imed_effect_pane

0x35d5,	// (0x0001a408) cell_imed_colour_pane_ParamLimits

0x35d5,	// (0x0001a408) cell_imed_colour_pane

0x360f,	// (0x0001a442) cell_imed_colour_pane_g1_ParamLimits

0x360f,	// (0x0001a442) cell_imed_colour_pane_g1

0x3620,	// (0x0001a453) hgihlgiht_grid_pane_cp016_ParamLimits

0x3620,	// (0x0001a453) hgihlgiht_grid_pane_cp016

0xbd7a,	// (0x00022bad) cell_imed_effect_pane_g1

0xbd82,	// (0x00022bb5) grid_highlight_pane_cp017

0x3631,	// (0x0001a464) list_imed_single_pane_ParamLimits

0x3631,	// (0x0001a464) list_imed_single_pane

0x020d,	// (0x00017040) list_highlight_pane_cp07

0x3644,	// (0x0001a477) list_imed_aspect_pane_comp1_t1

0x2c00,	// (0x00019a33) bg_tb_trans_pane_cp05

0x3664,	// (0x0001a497) popup_imed_adjust2_window_g1

0x368b,	// (0x0001a4be) popup_imed_adjust2_window_t1

0x36a3,	// (0x0001a4d6) slider_imed_adjust_pane

0x36b7,	// (0x0001a4ea) slider_imed_adjust_pane_g1

0x36c7,	// (0x0001a4fa) slider_imed_adjust_pane_g2

0x36d7,	// (0x0001a50a) slider_imed_adjust_pane_g3

0x36e8,	// (0x0001a51b) slider_imed_adjust_pane_g4

0x0003,

0xf7de,	// (0x00026611) slider_imed_adjust_pane_g

0xbd8b,	// (0x00022bbe) aid_size_cell_clipart2

0xbd97,	// (0x00022bca) grid_imed_clipart_pane

0x36f9,	// (0x0001a52c) scroll_pane_cp031

0xbda1,	// (0x00022bd4) cell_imed_clipart_pane_ParamLimits

0xbda1,	// (0x00022bd4) cell_imed_clipart_pane

0xbdb8,	// (0x00022beb) cell_imed_clipart_pane_g1

0x020d,	// (0x00017040) grid_highlight_pane_cp014

0xbba8,	// (0x000229db) main_clock2_pane_g1_ParamLimits

0xbba8,	// (0x000229db) main_clock2_pane_g1

0xbc71,	// (0x00022aa4) aid_call2_pane_cp10

0xbc83,	// (0x00022ab6) aid_call_pane_cp10

0x1597,	// (0x000183ca) popup_clock_analogue_window_cp10_g1

0x1597,	// (0x000183ca) popup_clock_analogue_window_cp10_g2

0xbc95,	// (0x00022ac8) popup_clock_analogue_window_cp10_g3

0xbc95,	// (0x00022ac8) popup_clock_analogue_window_cp10_g4

0x1597,	// (0x000183ca) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7cc,	// (0x000265ff) popup_clock_analogue_window_cp10_g

0xbca7,	// (0x00022ada) popup_clock_analogue_window_cp10_t1

0x7764,	// (0x0001e597) clock_digital_number_pane_cp10_ParamLimits

0x7764,	// (0x0001e597) clock_digital_number_pane_cp10

0x777c,	// (0x0001e5af) clock_digital_number_pane_cp11_ParamLimits

0x777c,	// (0x0001e5af) clock_digital_number_pane_cp11

0x7794,	// (0x0001e5c7) clock_digital_number_pane_cp12_ParamLimits

0x7794,	// (0x0001e5c7) clock_digital_number_pane_cp12

0x77ac,	// (0x0001e5df) clock_digital_number_pane_cp13_ParamLimits

0x77ac,	// (0x0001e5df) clock_digital_number_pane_cp13

0x77c4,	// (0x0001e5f7) clock_digital_separator_pane_cp10_ParamLimits

0x77c4,	// (0x0001e5f7) clock_digital_separator_pane_cp10

0xbcd8,	// (0x00022b0b) popup_clock_digital_window_cp02_t1_ParamLimits

0xbcd8,	// (0x00022b0b) popup_clock_digital_window_cp02_t1

0x08d2,	// (0x00017705) clock_digital_number_pane_cp10_g1

0x08d2,	// (0x00017705) clock_digital_number_pane_cp10_g2

0x0001,

0xf7e7,	// (0x0002661a) clock_digital_number_pane_cp10_g

0x08d2,	// (0x00017705) clock_digital_separator_pane_cp10_g1

0x08d2,	// (0x00017705) clock_digital_separator_pane_g2_cp10

0x16c4,	// (0x000184f7) navi_pane_vded_g4

0x16cd,	// (0x00018500) navi_pane_vded_g5

0x16d6,	// (0x00018509) navi_pane_vded_t1

0x6e4e,	// (0x0001dc81) main_vded_pane

0xbdc1,	// (0x00022bf4) main_vded_pane_g1

0xbdc9,	// (0x00022bfc) main_vded_pane_g2

0xbdd1,	// (0x00022c04) main_vded_pane_g3

0x0002,

0xf7ec,	// (0x0002661f) main_vded_pane_g

0xbdd9,	// (0x00022c0c) main_vded_pane_t1

0xbde7,	// (0x00022c1a) main_vded_pane_t2

0x0001,

0xf7f3,	// (0x00026626) main_vded_pane_t

0xbdf5,	// (0x00022c28) vded_slider_pane

0xbdfd,	// (0x00022c30) vded_video_pane

0x3701,	// (0x0001a534) vded_video_pane_g1

0xbe05,	// (0x00022c38) vded_video_pane_g2

0x3114,	// (0x00019f47) vded_video_pane_g3

0x0002,

0xf7f8,	// (0x0002662b) vded_video_pane_g

0x370b,	// (0x0001a53e) vded_slider_pane_g1

0x2e2b,	// (0x00019c5e) vded_slider_pane_g2

0x3714,	// (0x0001a547) vded_slider_pane_g3

0x371d,	// (0x0001a550) vded_slider_pane_g4

0x3726,	// (0x0001a559) vded_slider_pane_g5

0x0004,

0xf7ff,	// (0x00026632) vded_slider_pane_g

0xb988,	// (0x000227bb) mup3_rocker_pane_ParamLimits

0xb988,	// (0x000227bb) mup3_rocker_pane

0xbe0e,	// (0x00022c41) mup3_control_keys_pane_g1

0xbe16,	// (0x00022c49) mup3_control_keys_pane_g2

0xbe1e,	// (0x00022c51) mup3_control_keys_pane_g3

0xbe26,	// (0x00022c59) mup3_control_keys_pane_g4

0x0003,

0xf80a,	// (0x0002663d) mup3_control_keys_pane_g

0x6e0e,	// (0x0001dc41) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6e0e,	// (0x0001dc41) popup_toolbar2_fixed_window_cp01

0xb9a0,	// (0x000227d3) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb9a0,	// (0x000227d3) popup_toolbar2_fixed_window_cp02

0x1f3c,	// (0x00018d6f) popup_call2_audio_second_window_t4_ParamLimits

0x1f3c,	// (0x00018d6f) popup_call2_audio_second_window_t4

0x246a,	// (0x0001929d) popup_call2_audio_first_window_t6_ParamLimits

0x246a,	// (0x0001929d) popup_call2_audio_first_window_t6

0x2700,	// (0x00019533) popup_call2_audio_out_window_t6_ParamLimits

0x2700,	// (0x00019533) popup_call2_audio_out_window_t6

0x6e4e,	// (0x0001dc81) main_vitu_pane

0xbe36,	// (0x00022c69) aid_size_cell_itu_ParamLimits

0xbe36,	// (0x00022c69) aid_size_cell_itu

0x3cbe,	// (0x0001aaf1) bg_popup_window_pane_cp08_ParamLimits

0x3cbe,	// (0x0001aaf1) bg_popup_window_pane_cp08

0xbe44,	// (0x00022c77) field_vitu_entry_pane_ParamLimits

0xbe44,	// (0x00022c77) field_vitu_entry_pane

0xbe51,	// (0x00022c84) grid_vitu_function_pane_ParamLimits

0xbe51,	// (0x00022c84) grid_vitu_function_pane

0xbe5d,	// (0x00022c90) grid_vitu_itu_pane_ParamLimits

0xbe5d,	// (0x00022c90) grid_vitu_itu_pane

0xbe69,	// (0x00022c9c) cell_vitu_itu_pane_ParamLimits

0xbe69,	// (0x00022c9c) cell_vitu_itu_pane

0xbe7e,	// (0x00022cb1) cell_vitu_function_pane_ParamLimits

0xbe7e,	// (0x00022cb1) cell_vitu_function_pane

0x0260,	// (0x00017093) bg_popup_sub_pane_cp08_ParamLimits

0x0260,	// (0x00017093) bg_popup_sub_pane_cp08

0xbe90,	// (0x00022cc3) field_vitu_entry_pane_t1_ParamLimits

0xbe90,	// (0x00022cc3) field_vitu_entry_pane_t1

0x3747,	// (0x0001a57a) field_vitu_entry_pane_t2_ParamLimits

0x3747,	// (0x0001a57a) field_vitu_entry_pane_t2

0x0001,

0xf818,	// (0x0002664b) field_vitu_entry_pane_t_ParamLimits

0xf818,	// (0x0002664b) field_vitu_entry_pane_t

0x3764,	// (0x0001a597) bg_button_pane_cp05_ParamLimits

0x3764,	// (0x0001a597) bg_button_pane_cp05

0xbea9,	// (0x00022cdc) cell_vitu_itu_pane_g1

0xbec1,	// (0x00022cf4) cell_vitu_itu_pane_t1_ParamLimits

0xbec1,	// (0x00022cf4) cell_vitu_itu_pane_t1

0xbed3,	// (0x00022d06) cell_vitu_itu_pane_t2_ParamLimits

0xbed3,	// (0x00022d06) cell_vitu_itu_pane_t2

0x0002,

0xf81d,	// (0x00026650) cell_vitu_itu_pane_t_ParamLimits

0xf81d,	// (0x00026650) cell_vitu_itu_pane_t

0x3772,	// (0x0001a5a5) bg_button_pane_cp07

0xbf08,	// (0x00022d3b) cell_vitu_function_pane_g1

0x6f0b,	// (0x0001dd3e) main_calc_pane_g1

0x6c5b,	// (0x0001da8e) aid_visual_content_pane

0x6e4e,	// (0x0001dc81) main_vradio_pane

0xbf11,	// (0x00022d44) main_vradio_pane_g1_ParamLimits

0xbf11,	// (0x00022d44) main_vradio_pane_g1

0x377c,	// (0x0001a5af) main_vradio_pane_g2_ParamLimits

0x377c,	// (0x0001a5af) main_vradio_pane_g2

0x0001,

0xf824,	// (0x00026657) main_vradio_pane_g_ParamLimits

0xf824,	// (0x00026657) main_vradio_pane_g

0xbf1f,	// (0x00022d52) main_vradio_pane_t1_ParamLimits

0xbf1f,	// (0x00022d52) main_vradio_pane_t1

0xbf31,	// (0x00022d64) main_vradio_pane_t2_ParamLimits

0xbf31,	// (0x00022d64) main_vradio_pane_t2

0x3789,	// (0x0001a5bc) main_vradio_pane_t3_ParamLimits

0x3789,	// (0x0001a5bc) main_vradio_pane_t3

0x0002,

0xf829,	// (0x0002665c) main_vradio_pane_t_ParamLimits

0xf829,	// (0x0002665c) main_vradio_pane_t

0xbf43,	// (0x00022d76) vradio_rocker_control_pane_ParamLimits

0xbf43,	// (0x00022d76) vradio_rocker_control_pane

0xbf4f,	// (0x00022d82) vradio_station_info_pane_ParamLimits

0xbf4f,	// (0x00022d82) vradio_station_info_pane

0x379b,	// (0x0001a5ce) vradio_frequency_info_pane_ParamLimits

0x379b,	// (0x0001a5ce) vradio_frequency_info_pane

0x3114,	// (0x00019f47) vradio_station_info_pane_g1

0x37aa,	// (0x0001a5dd) vradio_station_info_pane_t1_ParamLimits

0x37aa,	// (0x0001a5dd) vradio_station_info_pane_t1

0x37cc,	// (0x0001a5ff) vradio_station_info_pane_t2_ParamLimits

0x37cc,	// (0x0001a5ff) vradio_station_info_pane_t2

0x0001,

0xf830,	// (0x00026663) vradio_station_info_pane_t_ParamLimits

0xf830,	// (0x00026663) vradio_station_info_pane_t

0x37de,	// (0x0001a611) vradio_tuning_pane

0x37e6,	// (0x0001a619) vradio_rocker_control_pane_g1

0x37ee,	// (0x0001a621) vradio_rocker_control_pane_g2

0x37f6,	// (0x0001a629) vradio_rocker_control_pane_g3

0x37fe,	// (0x0001a631) vradio_rocker_control_pane_g4

0x3806,	// (0x0001a639) vradio_rocker_control_pane_g5

0x0004,

0xf835,	// (0x00026668) vradio_rocker_control_pane_g

0xbf5c,	// (0x00022d8f) vradio_frequency_info_pane_g1

0x380e,	// (0x0001a641) vradio_frequency_info_pane_t1_ParamLimits

0x380e,	// (0x0001a641) vradio_frequency_info_pane_t1

0xbf64,	// (0x00022d97) vradio_tuning_pane_g1

0xbf6d,	// (0x00022da0) vradio_tuning_pane_t1

0x6c73,	// (0x0001daa6) area_side_right_pane_ParamLimits

0x6c73,	// (0x0001daa6) area_side_right_pane

0x2bbb,	// (0x000199ee) status_small_pane_g1

0x2bc3,	// (0x000199f6) status_small_pane_g2

0x2bcc,	// (0x000199ff) status_small_pane_g3

0x2bd5,	// (0x00019a08) status_small_pane_g4

0x0003,

0xf5f0,	// (0x00026423) status_small_pane_g

0x2bde,	// (0x00019a11) status_small_pane_t1

0x6e4e,	// (0x0001dc81) main_video3_pane

0x3822,	// (0x0001a655) cams_zoom_vslider_pane

0x382a,	// (0x0001a65d) image3_wide_pane_ParamLimits

0x382a,	// (0x0001a65d) image3_wide_pane

0x3844,	// (0x0001a677) image3_wide_small_pane

0x384e,	// (0x0001a681) main_video3_pane_g1_ParamLimits

0x384e,	// (0x0001a681) main_video3_pane_g1

0x386a,	// (0x0001a69d) main_video3_pane_g2_ParamLimits

0x386a,	// (0x0001a69d) main_video3_pane_g2

0x0001,

0xf840,	// (0x00026673) main_video3_pane_g_ParamLimits

0xf840,	// (0x00026673) main_video3_pane_g

0x3886,	// (0x0001a6b9) main_video3_pane_t1_ParamLimits

0x3886,	// (0x0001a6b9) main_video3_pane_t1

0x38b1,	// (0x0001a6e4) main_video3_pane_t2_ParamLimits

0x38b1,	// (0x0001a6e4) main_video3_pane_t2

0x38dc,	// (0x0001a70f) main_video3_pane_t3_ParamLimits

0x38dc,	// (0x0001a70f) main_video3_pane_t3

0x0002,

0xf845,	// (0x00026678) main_video3_pane_t_ParamLimits

0xf845,	// (0x00026678) main_video3_pane_t

0x3907,	// (0x0001a73a) cams_zoom_vslider_pane_g1

0x3910,	// (0x0001a743) cams_zoom_vslider_pane_g2

0x0001,

0xf84c,	// (0x0002667f) cams_zoom_vslider_pane_g

0x3918,	// (0x0001a74b) small_slider_vertical_pane

0x3114,	// (0x00019f47) small_slider_vertical_pane_g1

0x3114,	// (0x00019f47) small_slider_vertical_pane_g2

0x3920,	// (0x0001a753) small_slider_vertical_pane_g3

0x0002,

0xf851,	// (0x00026684) small_slider_vertical_pane_g

0x6e4e,	// (0x0001dc81) main_hwr_training_pane

0x3929,	// (0x0001a75c) hwr_training_instruct_pane_ParamLimits

0x3929,	// (0x0001a75c) hwr_training_instruct_pane

0xbf7c,	// (0x00022daf) hwr_training_navi_pane_ParamLimits

0xbf7c,	// (0x00022daf) hwr_training_navi_pane

0xbf90,	// (0x00022dc3) hwr_training_write_pane_ParamLimits

0xbf90,	// (0x00022dc3) hwr_training_write_pane

0x020d,	// (0x00017040) bg_frame_shadow_pane

0x3958,	// (0x0001a78b) hwr_training_write_pane_g1

0x3960,	// (0x0001a793) hwr_training_write_pane_g2

0x3968,	// (0x0001a79b) hwr_training_write_pane_g3

0x3970,	// (0x0001a7a3) hwr_training_write_pane_g4

0x3978,	// (0x0001a7ab) hwr_training_write_pane_g5

0x3980,	// (0x0001a7b3) hwr_training_write_pane_g6

0x3988,	// (0x0001a7bb) hwr_training_write_pane_g7

0x0006,

0xf858,	// (0x0002668b) hwr_training_write_pane_g

0x77dc,	// (0x0001e60f) hwr_training_navi_pane_g1_ParamLimits

0x77dc,	// (0x0001e60f) hwr_training_navi_pane_g1

0x77ee,	// (0x0001e621) hwr_training_navi_pane_g2_ParamLimits

0x77ee,	// (0x0001e621) hwr_training_navi_pane_g2

0x7800,	// (0x0001e633) hwr_training_navi_pane_g3_ParamLimits

0x7800,	// (0x0001e633) hwr_training_navi_pane_g3

0x7810,	// (0x0001e643) hwr_training_navi_pane_g4_ParamLimits

0x7810,	// (0x0001e643) hwr_training_navi_pane_g4

0x0004,

0xf867,	// (0x0002669a) hwr_training_navi_pane_g_ParamLimits

0xf867,	// (0x0002669a) hwr_training_navi_pane_g

0x782a,	// (0x0001e65d) hwr_training_navi_pane_t1

0xbfbe,	// (0x00022df1) list_single_hwr_training_instruct_pane_ParamLimits

0xbfbe,	// (0x00022df1) list_single_hwr_training_instruct_pane

0x39df,	// (0x0001a812) list_single_hwr_training_instruct_pane_t1

0x3054,	// (0x00019e87) bg_frame_shadow_pane_g1

0x39ee,	// (0x0001a821) bg_frame_shadow_pane_g2

0x39f6,	// (0x0001a829) bg_frame_shadow_pane_g3

0x39fe,	// (0x0001a831) bg_frame_shadow_pane_g4

0x3a06,	// (0x0001a839) bg_frame_shadow_pane_g5

0x3a0e,	// (0x0001a841) bg_frame_shadow_pane_g6

0x3a16,	// (0x0001a849) bg_frame_shadow_pane_g7

0x0ae8,	// (0x0001791b) bg_frame_shadow_pane_g8

0x0007,

0xf872,	// (0x000266a5) bg_frame_shadow_pane_g

0x6e4e,	// (0x0001dc81) main_video_tele_dialer_pane

0x7838,	// (0x0001e66b) aid_size_cell_video_keypad_ParamLimits

0x7838,	// (0x0001e66b) aid_size_cell_video_keypad

0x7848,	// (0x0001e67b) grid_video_dialer_keypad_pane_ParamLimits

0x7848,	// (0x0001e67b) grid_video_dialer_keypad_pane

0x7878,	// (0x0001e6ab) video_down_pane_cp_ParamLimits

0x7878,	// (0x0001e6ab) video_down_pane_cp

0x7884,	// (0x0001e6b7) cell_video_dialer_keypad_pane_ParamLimits

0x7884,	// (0x0001e6b7) cell_video_dialer_keypad_pane

0x3a1e,	// (0x0001a851) bg_button_pane_cp08_ParamLimits

0x3a1e,	// (0x0001a851) bg_button_pane_cp08

0xbff2,	// (0x00022e25) cell_video_dialer_keypad_pane_g1_ParamLimits

0xbff2,	// (0x00022e25) cell_video_dialer_keypad_pane_g1

0xb97c,	// (0x000227af) mup3_rocker2_pane_ParamLimits

0xb97c,	// (0x000227af) mup3_rocker2_pane

0x3114,	// (0x00019f47) mup3_rocker2_pane_g1

0x7367,	// (0x0001e19a) main_dialer2_pane

0x6e4e,	// (0x0001dc81) main_mp4_pane

0x78a9,	// (0x0001e6dc) main_mp4_pane_g1_ParamLimits

0x78a9,	// (0x0001e6dc) main_mp4_pane_g1

0x78b7,	// (0x0001e6ea) main_mp4_pane_g2_ParamLimits

0x78b7,	// (0x0001e6ea) main_mp4_pane_g2

0x78c5,	// (0x0001e6f8) main_mp4_pane_g3_ParamLimits

0x78c5,	// (0x0001e6f8) main_mp4_pane_g3

0x78fa,	// (0x0001e72d) main_mp4_pane_g4_ParamLimits

0x78fa,	// (0x0001e72d) main_mp4_pane_g4

0x7928,	// (0x0001e75b) main_mp4_pane_g5_ParamLimits

0x7928,	// (0x0001e75b) main_mp4_pane_g5

0x0007,

0xf892,	// (0x000266c5) main_mp4_pane_g_ParamLimits

0xf892,	// (0x000266c5) main_mp4_pane_g

0x799c,	// (0x0001e7cf) main_mp4_pane_t1_ParamLimits

0x799c,	// (0x0001e7cf) main_mp4_pane_t1

0x79f4,	// (0x0001e827) main_mp4_pane_t2_ParamLimits

0x79f4,	// (0x0001e827) main_mp4_pane_t2

0x3b94,	// (0x0001a9c7) main_mp4_pane_t3_ParamLimits

0x3b94,	// (0x0001a9c7) main_mp4_pane_t3

0x7a46,	// (0x0001e879) main_mp4_pane_t4_ParamLimits

0x7a46,	// (0x0001e879) main_mp4_pane_t4

0x0003,

0xf8a3,	// (0x000266d6) main_mp4_pane_t_ParamLimits

0xf8a3,	// (0x000266d6) main_mp4_pane_t

0x7a86,	// (0x0001e8b9) mp4_progress_pane_ParamLimits

0x7a86,	// (0x0001e8b9) mp4_progress_pane

0x7aca,	// (0x0001e8fd) mp4_rocker_pane_ParamLimits

0x7aca,	// (0x0001e8fd) mp4_rocker_pane

0x3c64,	// (0x0001aa97) mp4_progress_pane_t1

0x3c7b,	// (0x0001aaae) mp4_progress_pane_t2

0x0001,

0xf8ac,	// (0x000266df) mp4_progress_pane_t

0x3c92,	// (0x0001aac5) mup_progress_pane_cp04

0x46b9,	// (0x0001b4ec) mp4_rocker_pane_g1

0x7ae8,	// (0x0001e91b) aid_cell_size_keypad2_ParamLimits

0x7ae8,	// (0x0001e91b) aid_cell_size_keypad2

0x7af8,	// (0x0001e92b) dialer2_ne_pane_ParamLimits

0x7af8,	// (0x0001e92b) dialer2_ne_pane

0x7b04,	// (0x0001e937) grid_dialer2_keypad_pane_ParamLimits

0x7b04,	// (0x0001e937) grid_dialer2_keypad_pane

0x3cb0,	// (0x0001aae3) bg_popup_call_pane_cp07_ParamLimits

0x3cb0,	// (0x0001aae3) bg_popup_call_pane_cp07

0xc029,	// (0x00022e5c) dialer2_ne_pane_t1_ParamLimits

0xc029,	// (0x00022e5c) dialer2_ne_pane_t1

0x7b10,	// (0x0001e943) cell_dialer2_keypad_pane_ParamLimits

0x7b10,	// (0x0001e943) cell_dialer2_keypad_pane

0x3ccc,	// (0x0001aaff) bg_button_pane_pane_cp04_ParamLimits

0x3ccc,	// (0x0001aaff) bg_button_pane_pane_cp04

0xc04e,	// (0x00022e81) cell_dialer2_keypad_pane_g1_ParamLimits

0xc04e,	// (0x00022e81) cell_dialer2_keypad_pane_g1

0x8fe1,	// (0x0001fe14) aid_placing_vt_set_content_ParamLimits

0x8fe1,	// (0x0001fe14) aid_placing_vt_set_content

0x9007,	// (0x0001fe3a) aid_placing_vt_set_title_ParamLimits

0x9007,	// (0x0001fe3a) aid_placing_vt_set_title

0x6e4e,	// (0x0001dc81) main_image3_pane

0x7b4d,	// (0x0001e980) area_side_right_pane_cp01_ParamLimits

0x7b4d,	// (0x0001e980) area_side_right_pane_cp01

0x7b7a,	// (0x0001e9ad) main_image3_pane_g1_ParamLimits

0x7b7a,	// (0x0001e9ad) main_image3_pane_g1

0x7b88,	// (0x0001e9bb) main_image3_pane_g2_ParamLimits

0x7b88,	// (0x0001e9bb) main_image3_pane_g2

0x7b9f,	// (0x0001e9d2) main_image3_pane_g3_ParamLimits

0x7b9f,	// (0x0001e9d2) main_image3_pane_g3

0x7bb6,	// (0x0001e9e9) main_image3_pane_g4_ParamLimits

0x7bb6,	// (0x0001e9e9) main_image3_pane_g4

0x0003,

0xf8bb,	// (0x000266ee) main_image3_pane_g_ParamLimits

0xf8bb,	// (0x000266ee) main_image3_pane_g

0x7bcd,	// (0x0001ea00) main_image3_pane_t1_ParamLimits

0x7bcd,	// (0x0001ea00) main_image3_pane_t1

0x7bf2,	// (0x0001ea25) main_image3_pane_t2_ParamLimits

0x7bf2,	// (0x0001ea25) main_image3_pane_t2

0x7c11,	// (0x0001ea44) main_image3_pane_t3_ParamLimits

0x7c11,	// (0x0001ea44) main_image3_pane_t3

0x0003,

0xf8c4,	// (0x000266f7) main_image3_pane_t_ParamLimits

0xf8c4,	// (0x000266f7) main_image3_pane_t

0x3cbe,	// (0x0001aaf1) grid_sctrl_middle_pane_cp01_ParamLimits

0x3cbe,	// (0x0001aaf1) grid_sctrl_middle_pane_cp01

0xc09a,	// (0x00022ecd) cell_sctrl_middle_pane_cp01_ParamLimits

0xc09a,	// (0x00022ecd) cell_sctrl_middle_pane_cp01

0xc0ab,	// (0x00022ede) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc0ab,	// (0x00022ede) cell_sctrl_middle_pane_cp01_g1

0x6e4e,	// (0x0001dc81) main_call4_pane

0x7c6c,	// (0x0001ea9f) aid_size_button_call4_ParamLimits

0x7c6c,	// (0x0001ea9f) aid_size_button_call4

0x7c96,	// (0x0001eac9) call4_windows_pane_ParamLimits

0x7c96,	// (0x0001eac9) call4_windows_pane

0x7caa,	// (0x0001eadd) grid_call4_button_pane_ParamLimits

0x7caa,	// (0x0001eadd) grid_call4_button_pane

0x3d22,	// (0x0001ab55) call4_windows_conf_pane

0xc0c0,	// (0x00022ef3) popup_call4_audio_first_window_ParamLimits

0xc0c0,	// (0x00022ef3) popup_call4_audio_first_window

0xc0e0,	// (0x00022f13) popup_call4_audio_second_window_ParamLimits

0xc0e0,	// (0x00022f13) popup_call4_audio_second_window

0x3d55,	// (0x0001ab88) popup_call4_audio_wait_window_ParamLimits

0x3d55,	// (0x0001ab88) popup_call4_audio_wait_window

0x7cc4,	// (0x0001eaf7) cell_call4_button_pane_ParamLimits

0x7cc4,	// (0x0001eaf7) cell_call4_button_pane

0x0a88,	// (0x000178bb) bg_button_pane_cp09_ParamLimits

0x0a88,	// (0x000178bb) bg_button_pane_cp09

0x7ce7,	// (0x0001eb1a) cell_call4_button_pane_g1_ParamLimits

0x7ce7,	// (0x0001eb1a) cell_call4_button_pane_g1

0xc0f2,	// (0x00022f25) cell_call4_button_pane_t1_ParamLimits

0xc0f2,	// (0x00022f25) cell_call4_button_pane_t1

0x3d9b,	// (0x0001abce) popup_call4_audio_conf_window_ParamLimits

0x3d9b,	// (0x0001abce) popup_call4_audio_conf_window

0xb9ad,	// (0x000227e0) mup3_progress_pane_t1_ParamLimits

0xb9cb,	// (0x000227fe) mup3_progress_pane_t2_ParamLimits

0x3432,	// (0x0001a265) mup3_progress_pane_t3_ParamLimits

0xf794,	// (0x000265c7) mup3_progress_pane_t_ParamLimits

0x344f,	// (0x0001a282) mup_progress_pane_cp03_ParamLimits

0xbe2e,	// (0x00022c61) mup3_control_keys_pane_g4_copy1

0x7ab4,	// (0x0001e8e7) mp4_rocker2_pane_ParamLimits

0x7ab4,	// (0x0001e8e7) mp4_rocker2_pane

0x3db7,	// (0x0001abea) mp4_rocker2_pane_g1

0x3daf,	// (0x0001abe2) mp4_rocker2_pane_g2

0x7d26,	// (0x0001eb59) mp4_rocker2_pane_g3

0x7d2e,	// (0x0001eb61) mp4_rocker2_pane_g4

0x7d36,	// (0x0001eb69) mp4_rocker2_pane_g5

0x0004,

0xf8cd,	// (0x00026700) mp4_rocker2_pane_g

0x6e4e,	// (0x0001dc81) main_camera4_pane

0x6e4e,	// (0x0001dc81) main_video4_pane

0x7854,	// (0x0001e687) main_video_tele_dialer_pane_t1_ParamLimits

0x7854,	// (0x0001e687) main_video_tele_dialer_pane_t1

0x7866,	// (0x0001e699) main_video_tele_dialer_pane_t2_ParamLimits

0x7866,	// (0x0001e699) main_video_tele_dialer_pane_t2

0x0001,

0xf883,	// (0x000266b6) main_video_tele_dialer_pane_t_ParamLimits

0xf883,	// (0x000266b6) main_video_tele_dialer_pane_t

0x7d54,	// (0x0001eb87) cam4_autofocus_pane_ParamLimits

0x7d54,	// (0x0001eb87) cam4_autofocus_pane

0x7d6a,	// (0x0001eb9d) cam4_image_uncrop_pane_ParamLimits

0x7d6a,	// (0x0001eb9d) cam4_image_uncrop_pane

0x7d7f,	// (0x0001ebb2) cam4_indicators_pane_ParamLimits

0x7d7f,	// (0x0001ebb2) cam4_indicators_pane

0x7d99,	// (0x0001ebcc) main_camera4_pane_g1_ParamLimits

0x7d99,	// (0x0001ebcc) main_camera4_pane_g1

0x7da5,	// (0x0001ebd8) main_camera4_pane_g2_ParamLimits

0x7da5,	// (0x0001ebd8) main_camera4_pane_g2

0x7da5,	// (0x0001ebd8) main_camera4_pane_g3_ParamLimits

0x7da5,	// (0x0001ebd8) main_camera4_pane_g3

0x7db1,	// (0x0001ebe4) main_camera4_pane_g4_ParamLimits

0x7db1,	// (0x0001ebe4) main_camera4_pane_g4

0x7dbd,	// (0x0001ebf0) main_camera4_pane_g5_ParamLimits

0x7dbd,	// (0x0001ebf0) main_camera4_pane_g5

0x0005,

0xf8d8,	// (0x0002670b) main_camera4_pane_g_ParamLimits

0xf8d8,	// (0x0002670b) main_camera4_pane_g

0x7dd7,	// (0x0001ec0a) main_camera4_pane_t1_ParamLimits

0x7dd7,	// (0x0001ec0a) main_camera4_pane_t1

0x7dfb,	// (0x0001ec2e) bg_tb_trans_pane_cp06

0x7e11,	// (0x0001ec44) cam4_indicators_pane_g1

0x7e21,	// (0x0001ec54) cam4_indicators_pane_g2

0x0002,

0xf8f3,	// (0x00026726) cam4_indicators_pane_g

0x7e41,	// (0x0001ec74) cam4_indicators_pane_t1

0x7e69,	// (0x0001ec9c) main_video4_pane_g1_ParamLimits

0x7e69,	// (0x0001ec9c) main_video4_pane_g1

0x7da5,	// (0x0001ebd8) main_video4_pane_g2_ParamLimits

0x7da5,	// (0x0001ebd8) main_video4_pane_g2

0x7da5,	// (0x0001ebd8) main_video4_pane_g3_ParamLimits

0x7da5,	// (0x0001ebd8) main_video4_pane_g3

0x7db1,	// (0x0001ebe4) main_video4_pane_g4_ParamLimits

0x7db1,	// (0x0001ebe4) main_video4_pane_g4

0x0004,

0xf8fa,	// (0x0002672d) main_video4_pane_g_ParamLimits

0xf8fa,	// (0x0002672d) main_video4_pane_g

0x7e7d,	// (0x0001ecb0) vid4_indicators_pane_ParamLimits

0x7e7d,	// (0x0001ecb0) vid4_indicators_pane

0x7e9b,	// (0x0001ecce) video4_image_uncrop_cif_pane_ParamLimits

0x7e9b,	// (0x0001ecce) video4_image_uncrop_cif_pane

0x7ea8,	// (0x0001ecdb) video4_image_uncrop_nhd_pane_ParamLimits

0x7ea8,	// (0x0001ecdb) video4_image_uncrop_nhd_pane

0x7d6a,	// (0x0001eb9d) video4_image_uncrop_vga_pane_ParamLimits

0x7d6a,	// (0x0001eb9d) video4_image_uncrop_vga_pane

0x7359,	// (0x0001e18c) bg_tb_trans_pane_cp07

0x7e11,	// (0x0001ec44) vid4_indicators_pane_g1

0x7eb5,	// (0x0001ece8) vid4_indicators_pane_g2

0x7ec5,	// (0x0001ecf8) vid4_indicators_pane_g3

0x0004,

0xf905,	// (0x00026738) vid4_indicators_pane_g

0x7ef2,	// (0x0001ed25) vid4_indicators_pane_t1

0xc128,	// (0x00022f5b) cam4_autofocus_pane_g1

0xc130,	// (0x00022f63) cam4_autofocus_pane_g2

0xc138,	// (0x00022f6b) cam4_autofocus_pane_g3

0x0002,

0xf910,	// (0x00026743) cam4_autofocus_pane_g

0xc140,	// (0x00022f73) cam4_autofocus_pane_g3_copy1

0xbfd6,	// (0x00022e09) video_down_pane_cp_t1

0xbfe4,	// (0x00022e17) video_down_pane_cp_t2

0x0001,

0xf888,	// (0x000266bb) video_down_pane_cp_t

0x6e40,	// (0x0001dc73) popup_vitu2_window_ParamLimits

0x6e40,	// (0x0001dc73) popup_vitu2_window

0x7f0c,	// (0x0001ed3f) aid_size_cell2_itu2_ParamLimits

0x7f0c,	// (0x0001ed3f) aid_size_cell2_itu2

0x7f2e,	// (0x0001ed61) aid_size_cell_itu2_ParamLimits

0x7f2e,	// (0x0001ed61) aid_size_cell_itu2

0x7f6c,	// (0x0001ed9f) bg_popup_window_pane_cp09_ParamLimits

0x7f6c,	// (0x0001ed9f) bg_popup_window_pane_cp09

0x7f7a,	// (0x0001edad) field_vitu2_entry_pane_ParamLimits

0x7f7a,	// (0x0001edad) field_vitu2_entry_pane

0x7f8e,	// (0x0001edc1) grid_vitu2_function_pane_ParamLimits

0x7f8e,	// (0x0001edc1) grid_vitu2_function_pane

0x7fbc,	// (0x0001edef) grid_vitu2_itu_pane_ParamLimits

0x7fbc,	// (0x0001edef) grid_vitu2_itu_pane

0x8014,	// (0x0001ee47) cell_vitu2_itu_pane_ParamLimits

0x8014,	// (0x0001ee47) cell_vitu2_itu_pane

0x802c,	// (0x0001ee5f) cell_vitu2_function_pane_ParamLimits

0x802c,	// (0x0001ee5f) cell_vitu2_function_pane

0x3ea2,	// (0x0001acd5) bg_popup_call_pane_cp08_ParamLimits

0x3ea2,	// (0x0001acd5) bg_popup_call_pane_cp08

0x3eb9,	// (0x0001acec) field_vitu2_entry_pane_g1

0x3ec5,	// (0x0001acf8) field_vitu2_entry_pane_g2

0x0002,

0xf917,	// (0x0002674a) field_vitu2_entry_pane_g

0xc148,	// (0x00022f7b) field_vitu2_entry_pane_t1_ParamLimits

0xc148,	// (0x00022f7b) field_vitu2_entry_pane_t1

0x3edf,	// (0x0001ad12) field_vitu2_entry_pane_t2_ParamLimits

0x3edf,	// (0x0001ad12) field_vitu2_entry_pane_t2

0x0001,

0xf91e,	// (0x00026751) field_vitu2_entry_pane_t_ParamLimits

0xf91e,	// (0x00026751) field_vitu2_entry_pane_t

0x806b,	// (0x0001ee9e) bg_button_pane_cp010_ParamLimits

0x806b,	// (0x0001ee9e) bg_button_pane_cp010

0x8079,	// (0x0001eeac) cell_vitu2_itu_pane_g1

0x8099,	// (0x0001eecc) cell_vitu2_itu_pane_t1_ParamLimits

0x8099,	// (0x0001eecc) cell_vitu2_itu_pane_t1

0x80e5,	// (0x0001ef18) cell_vitu2_itu_pane_t2_ParamLimits

0x80e5,	// (0x0001ef18) cell_vitu2_itu_pane_t2

0x0002,

0xf928,	// (0x0002675b) cell_vitu2_itu_pane_t_ParamLimits

0xf928,	// (0x0002675b) cell_vitu2_itu_pane_t

0x7359,	// (0x0001e18c) bg_button_pane_cp011

0x81ad,	// (0x0001efe0) cell_vitu2_function_pane_g1

0x6e4e,	// (0x0001dc81) main_myfav_hc_pane

0x7c51,	// (0x0001ea84) popup_image3_note_pane_ParamLimits

0x7c51,	// (0x0001ea84) popup_image3_note_pane

0x7c5d,	// (0x0001ea90) popup_image3_tool_bar_pane_ParamLimits

0x7c5d,	// (0x0001ea90) popup_image3_tool_bar_pane

0x815b,	// (0x0001ef8e) cell_vitu2_itu_pane_t3_ParamLimits

0x815b,	// (0x0001ef8e) cell_vitu2_itu_pane_t3

0x020d,	// (0x00017040) bg_popup_trans_pane

0x3f16,	// (0x0001ad49) grid_image3_tool_bar_pane

0x3f20,	// (0x0001ad53) bg_popup_trans_pane_g1

0x0edc,	// (0x00017d0f) bg_popup_trans_pane_g2

0x3f28,	// (0x0001ad5b) bg_popup_trans_pane_g3

0x3f30,	// (0x0001ad63) bg_popup_trans_pane_g4

0x3f38,	// (0x0001ad6b) bg_popup_trans_pane_g5

0x3f40,	// (0x0001ad73) bg_popup_trans_pane_g6

0x3f48,	// (0x0001ad7b) bg_popup_trans_pane_g7

0x3f50,	// (0x0001ad83) bg_popup_trans_pane_g8

0x0ebc,	// (0x00017cef) bg_popup_trans_pane_g9

0x0008,

0xf92f,	// (0x00026762) bg_popup_trans_pane_g

0x3f58,	// (0x0001ad8b) cell_image3_tool_bar_pane_ParamLimits

0x3f58,	// (0x0001ad8b) cell_image3_tool_bar_pane

0x3114,	// (0x00019f47) cell_image3_tool_bar_pane_g1

0x020d,	// (0x00017040) bg_popup_trans_pane_cp1

0x3f6c,	// (0x0001ad9f) popup_image3_note_pane_t1

0x3f7a,	// (0x0001adad) popup_image3_note_pane_t2

0x3f88,	// (0x0001adbb) popup_image3_note_pane_t3

0x0002,

0xf942,	// (0x00026775) popup_image3_note_pane_t

0x3f96,	// (0x0001adc9) popup_image3_note_pane_t3_copy1

0xc176,	// (0x00022fa9) bg_myfav_hc_instruction_pane_ParamLimits

0xc176,	// (0x00022fa9) bg_myfav_hc_instruction_pane

0xc188,	// (0x00022fbb) cell_myfav_contact_pane_ParamLimits

0xc188,	// (0x00022fbb) cell_myfav_contact_pane

0xc1a2,	// (0x00022fd5) cell_myfav_contact_pane_cp1_ParamLimits

0xc1a2,	// (0x00022fd5) cell_myfav_contact_pane_cp1

0xc1b8,	// (0x00022feb) cell_myfav_contact_pane_cp2_ParamLimits

0xc1b8,	// (0x00022feb) cell_myfav_contact_pane_cp2

0xc1ce,	// (0x00023001) cell_myfav_contact_pane_cp3_ParamLimits

0xc1ce,	// (0x00023001) cell_myfav_contact_pane_cp3

0xc1e3,	// (0x00023016) cell_myfav_contact_pane_cp4_ParamLimits

0xc1e3,	// (0x00023016) cell_myfav_contact_pane_cp4

0xc1f7,	// (0x0002302a) cell_myfav_contact_pane_cp5_ParamLimits

0xc1f7,	// (0x0002302a) cell_myfav_contact_pane_cp5

0xc20b,	// (0x0002303e) cell_myfav_contact_pane_cp6_ParamLimits

0xc20b,	// (0x0002303e) cell_myfav_contact_pane_cp6

0xc21f,	// (0x00023052) cell_myfav_contact_pane_cp7_ParamLimits

0xc21f,	// (0x00023052) cell_myfav_contact_pane_cp7

0x3fa4,	// (0x0001add7) listscroll_gen_pane_cp05

0xc237,	// (0x0002306a) main_myfav_hc_pane_g1_ParamLimits

0xc237,	// (0x0002306a) main_myfav_hc_pane_g1

0xc24d,	// (0x00023080) main_myfav_hc_pane_g2_ParamLimits

0xc24d,	// (0x00023080) main_myfav_hc_pane_g2

0x0002,

0xf949,	// (0x0002677c) main_myfav_hc_pane_g_ParamLimits

0xf949,	// (0x0002677c) main_myfav_hc_pane_g

0xc277,	// (0x000230aa) main_myfav_hc_pane_t1_ParamLimits

0xc277,	// (0x000230aa) main_myfav_hc_pane_t1

0x3fad,	// (0x0001ade0) main_myfav_hc_pane_t2_ParamLimits

0x3fad,	// (0x0001ade0) main_myfav_hc_pane_t2

0x3fbf,	// (0x0001adf2) main_myfav_hc_pane_t3_ParamLimits

0x3fbf,	// (0x0001adf2) main_myfav_hc_pane_t3

0xc28c,	// (0x000230bf) main_myfav_hc_pane_t4_ParamLimits

0xc28c,	// (0x000230bf) main_myfav_hc_pane_t4

0x0004,

0xf950,	// (0x00026783) main_myfav_hc_pane_t_ParamLimits

0xf950,	// (0x00026783) main_myfav_hc_pane_t

0x3114,	// (0x00019f47) bg_myfav_hc_instruction_pane_g1

0x3fd1,	// (0x0001ae04) cell_myfav_contact_pane_g1_ParamLimits

0x3fd1,	// (0x0001ae04) cell_myfav_contact_pane_g1

0x3fd1,	// (0x0001ae04) cell_myfav_contact_pane_g2_ParamLimits

0x3fd1,	// (0x0001ae04) cell_myfav_contact_pane_g2

0x3fdd,	// (0x0001ae10) cell_myfav_contact_pane_g3_ParamLimits

0x3fdd,	// (0x0001ae10) cell_myfav_contact_pane_g3

0x341c,	// (0x0001a24f) cell_myfav_contact_pane_g4_ParamLimits

0x341c,	// (0x0001a24f) cell_myfav_contact_pane_g4

0x3fea,	// (0x0001ae1d) cell_myfav_contact_pane_g5_ParamLimits

0x3fea,	// (0x0001ae1d) cell_myfav_contact_pane_g5

0x0004,

0xf95b,	// (0x0002678e) cell_myfav_contact_pane_g_ParamLimits

0xf95b,	// (0x0002678e) cell_myfav_contact_pane_g

0xc263,	// (0x00023096) main_myfav_hc_pane_g3_ParamLimits

0xc263,	// (0x00023096) main_myfav_hc_pane_g3

0x6d84,	// (0x0001dbb7) popup_adpt_find_window

0xc2b0,	// (0x000230e3) afind_page_pane_ParamLimits

0xc2b0,	// (0x000230e3) afind_page_pane

0xc2bd,	// (0x000230f0) aid_size_cell_afind_ParamLimits

0xc2bd,	// (0x000230f0) aid_size_cell_afind

0xc2d7,	// (0x0002310a) bg_popup_sub_pane_cp09_ParamLimits

0xc2d7,	// (0x0002310a) bg_popup_sub_pane_cp09

0xc2e4,	// (0x00023117) find_pane_cp01_ParamLimits

0xc2e4,	// (0x00023117) find_pane_cp01

0x3ff6,	// (0x0001ae29) grid_afind_control_pane_ParamLimits

0x3ff6,	// (0x0001ae29) grid_afind_control_pane

0xc2f1,	// (0x00023124) grid_afind_pane_ParamLimits

0xc2f1,	// (0x00023124) grid_afind_pane

0xc307,	// (0x0002313a) cell_afind_pane_ParamLimits

0xc307,	// (0x0002313a) cell_afind_pane

0x3114,	// (0x00019f47) afind_page_pane_g1

0xc33d,	// (0x00023170) afind_page_pane_g2

0xc346,	// (0x00023179) afind_page_pane_g3

0x0002,

0xf966,	// (0x00026799) afind_page_pane_g

0xc34f,	// (0x00023182) afind_page_pane_t1

0x400a,	// (0x0001ae3d) cell_afind_grid_control_pane_ParamLimits

0x400a,	// (0x0001ae3d) cell_afind_grid_control_pane

0x3ccc,	// (0x0001aaff) bg_button_pane_cp69_ParamLimits

0x3ccc,	// (0x0001aaff) bg_button_pane_cp69

0xc36f,	// (0x000231a2) cell_afind_pane_g1_ParamLimits

0xc36f,	// (0x000231a2) cell_afind_pane_g1

0xc37c,	// (0x000231af) cell_afind_pane_t1_ParamLimits

0xc37c,	// (0x000231af) cell_afind_pane_t1

0x0cc8,	// (0x00017afb) bg_button_pane_cp72

0x4019,	// (0x0001ae4c) cell_afind_grid_control_pane_g1

0xaa08,	// (0x0002183b) aid_image_placing_area_ParamLimits

0xaa08,	// (0x0002183b) aid_image_placing_area

0x372f,	// (0x0001a562) field_vitu_entry_pane_g1_ParamLimits

0x372f,	// (0x0001a562) field_vitu_entry_pane_g1

0x373b,	// (0x0001a56e) field_vitu_entry_pane_g2_ParamLimits

0x373b,	// (0x0001a56e) field_vitu_entry_pane_g2

0x0001,

0xf813,	// (0x00026646) field_vitu_entry_pane_g_ParamLimits

0xf813,	// (0x00026646) field_vitu_entry_pane_g

0xbea9,	// (0x00022cdc) cell_vitu_itu_pane_g1_ParamLimits

0xbeeb,	// (0x00022d1e) cell_vitu_itu_pane_t3_ParamLimits

0xbeeb,	// (0x00022d1e) cell_vitu_itu_pane_t3

0x3c64,	// (0x0001aa97) mp4_progress_pane_t1_ParamLimits

0x3c7b,	// (0x0001aaae) mp4_progress_pane_t2_ParamLimits

0xf8ac,	// (0x000266df) mp4_progress_pane_t_ParamLimits

0x3c92,	// (0x0001aac5) mup_progress_pane_cp04_ParamLimits

0xc29e,	// (0x000230d1) main_myfav_hc_pane_t5_ParamLimits

0xc29e,	// (0x000230d1) main_myfav_hc_pane_t5

0x6c6b,	// (0x0001da9e) aid_zoom_text_primary

0x6d84,	// (0x0001dbb7) popup_adpt_find_window_ParamLimits

0x7359,	// (0x0001e18c) main_cam_set_pane

0x7d8d,	// (0x0001ebc0) cam4_zoom_pane_ParamLimits

0x7d8d,	// (0x0001ebc0) cam4_zoom_pane

0xc38e,	// (0x000231c1) main_cam_set_pane_g1_ParamLimits

0xc38e,	// (0x000231c1) main_cam_set_pane_g1

0xc39c,	// (0x000231cf) main_cam_set_pane_g2_ParamLimits

0xc39c,	// (0x000231cf) main_cam_set_pane_g2

0x0001,

0xf96d,	// (0x000267a0) main_cam_set_pane_g_ParamLimits

0xf96d,	// (0x000267a0) main_cam_set_pane_g

0xc3a8,	// (0x000231db) main_cam_set_pane_t1_ParamLimits

0xc3a8,	// (0x000231db) main_cam_set_pane_t1

0xc3ba,	// (0x000231ed) main_cset_listscroll_pane_ParamLimits

0xc3ba,	// (0x000231ed) main_cset_listscroll_pane

0xc3e3,	// (0x00023216) main_cset_slider_pane_ParamLimits

0xc3e3,	// (0x00023216) main_cset_slider_pane

0x402a,	// (0x0001ae5d) main_cset_list_pane_ParamLimits

0x402a,	// (0x0001ae5d) main_cset_list_pane

0x403a,	// (0x0001ae6d) scroll_pane_cp028

0xc402,	// (0x00023235) aid_area_touch_slider

0xc41e,	// (0x00023251) cset_slider_pane

0xc448,	// (0x0002327b) main_cset_slider_pane_g1

0xc45d,	// (0x00023290) main_cset_slider_pane_g2

0x0011,

0xf972,	// (0x000267a5) main_cset_slider_pane_g

0x4073,	// (0x0001aea6) main_cset_slider_pane_t1

0xc519,	// (0x0002334c) main_cset_slider_pane_t2

0xc533,	// (0x00023366) main_cset_slider_pane_t3

0xc54d,	// (0x00023380) main_cset_slider_pane_t4

0xc567,	// (0x0002339a) main_cset_slider_pane_t5

0xc581,	// (0x000233b4) main_cset_slider_pane_t6

0xc596,	// (0x000233c9) main_cset_slider_pane_t7

0x000e,

0xf997,	// (0x000267ca) main_cset_slider_pane_t

0xc69a,	// (0x000234cd) cset_list_set_pane_ParamLimits

0xc69a,	// (0x000234cd) cset_list_set_pane

0xc6aa,	// (0x000234dd) aid_position_infowindow_above

0xc6b2,	// (0x000234e5) aid_position_infowindow_below

0xc6ba,	// (0x000234ed) cset_list_set_pane_g1_ParamLimits

0xc6ba,	// (0x000234ed) cset_list_set_pane_g1

0xc6c6,	// (0x000234f9) cset_list_set_pane_g3_ParamLimits

0xc6c6,	// (0x000234f9) cset_list_set_pane_g3

0x0001,

0xf9b6,	// (0x000267e9) cset_list_set_pane_g_ParamLimits

0xf9b6,	// (0x000267e9) cset_list_set_pane_g

0xc6d5,	// (0x00023508) cset_list_set_pane_t1_ParamLimits

0xc6d5,	// (0x00023508) cset_list_set_pane_t1

0x0260,	// (0x00017093) list_highlight_pane_cp021_ParamLimits

0x0260,	// (0x00017093) list_highlight_pane_cp021

0x1842,	// (0x00018675) cset_slider_pane_g1

0x1854,	// (0x00018687) cset_slider_pane_g2

0x184b,	// (0x0001867e) cset_slider_pane_g3

0x0002,

0xf9bb,	// (0x000267ee) cset_slider_pane_g

0x81c1,	// (0x0001eff4) aid_area_touch_cam4_zoom

0x81c9,	// (0x0001effc) cam4_zoom_cont_pane

0x81d1,	// (0x0001f004) cam4_zoom_pane_g1

0x81d9,	// (0x0001f00c) cam4_zoom_pane_g2

0x81e1,	// (0x0001f014) cam4_zoom_pane_g3

0x0002,

0xf9c2,	// (0x000267f5) cam4_zoom_pane_g

0x81e9,	// (0x0001f01c) cam4_zoom_cont_pane_g1

0x81f2,	// (0x0001f025) cam4_zoom_cont_pane_g2

0x81fb,	// (0x0001f02e) cam4_zoom_cont_pane_g3

0x0002,

0xf9c9,	// (0x000267fc) cam4_zoom_cont_pane_g

0x7c86,	// (0x0001eab9) call4_image_pane_ParamLimits

0x7c86,	// (0x0001eab9) call4_image_pane

0x3d22,	// (0x0001ab55) call4_windows_conf_pane_ParamLimits

0x3d35,	// (0x0001ab68) popup_call4_audio_in_window_ParamLimits

0x3d35,	// (0x0001ab68) popup_call4_audio_in_window

0x020d,	// (0x00017040) bg_popup_call2_act_pane_cp02

0x3d93,	// (0x0001abc6) call4_list_conf_pane

0x3114,	// (0x00019f47) call4_image_pane_g1

0x3114,	// (0x00019f47) call4_image_pane_g2

0x0001,

0xf6d4,	// (0x00026507) call4_image_pane_g

0x414e,	// (0x0001af81) list_single_graphic_popup_conf4_pane_ParamLimits

0x414e,	// (0x0001af81) list_single_graphic_popup_conf4_pane

0x020d,	// (0x00017040) list_highlight_pane_cp022

0x4161,	// (0x0001af94) list_single_graphic_popup_conf4_pane_g1

0x1465,	// (0x00018298) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d0,	// (0x00026803) list_single_graphic_popup_conf4_pane_g

0x4169,	// (0x0001af9c) list_single_graphic_popup_conf4_pane_t1

0x914b,	// (0x0001ff7e) popup_vtel_slider_window_ParamLimits

0x914b,	// (0x0001ff7e) popup_vtel_slider_window

0x3c9e,	// (0x0001aad1) dialer2_ne_pane_t2_ParamLimits

0x3c9e,	// (0x0001aad1) dialer2_ne_pane_t2

0x0001,

0xf8b1,	// (0x000266e4) dialer2_ne_pane_t_ParamLimits

0xf8b1,	// (0x000266e4) dialer2_ne_pane_t

0x0260,	// (0x00017093) bg_popup_sub_pane_cp010_ParamLimits

0x0260,	// (0x00017093) bg_popup_sub_pane_cp010

0xc6ea,	// (0x0002351d) popup_vtel_slider_window_g1_ParamLimits

0xc6ea,	// (0x0002351d) popup_vtel_slider_window_g1

0xc6f6,	// (0x00023529) popup_vtel_slider_window_g2_ParamLimits

0xc6f6,	// (0x00023529) popup_vtel_slider_window_g2

0x0003,

0xf9d5,	// (0x00026808) popup_vtel_slider_window_g_ParamLimits

0xf9d5,	// (0x00026808) popup_vtel_slider_window_g

0xc73c,	// (0x0002356f) vtel_slider_pane_ParamLimits

0xc73c,	// (0x0002356f) vtel_slider_pane

0xc74b,	// (0x0002357e) vtel_slider_pane_g1_ParamLimits

0xc74b,	// (0x0002357e) vtel_slider_pane_g1

0xc758,	// (0x0002358b) vtel_slider_pane_g2_ParamLimits

0xc758,	// (0x0002358b) vtel_slider_pane_g2

0xc765,	// (0x00023598) vtel_slider_pane_g3_ParamLimits

0xc765,	// (0x00023598) vtel_slider_pane_g3

0xc74b,	// (0x0002357e) vtel_slider_pane_g4_ParamLimits

0xc74b,	// (0x0002357e) vtel_slider_pane_g4

0xc772,	// (0x000235a5) vtel_slider_pane_g5_ParamLimits

0xc772,	// (0x000235a5) vtel_slider_pane_g5

0x0004,

0xf9de,	// (0x00026811) vtel_slider_pane_g_ParamLimits

0xf9de,	// (0x00026811) vtel_slider_pane_g

0x7359,	// (0x0001e18c) main_gallery2_pane

0x7f54,	// (0x0001ed87) aid_size_row_itut2_dropdow_list_ParamLimits

0x7f54,	// (0x0001ed87) aid_size_row_itut2_dropdow_list

0x7fa4,	// (0x0001edd7) grid_vitu2_function_top_pane_ParamLimits

0x7fa4,	// (0x0001edd7) grid_vitu2_function_top_pane

0x7fe0,	// (0x0001ee13) popup_vitu2_dropdown_list_window_ParamLimits

0x7fe0,	// (0x0001ee13) popup_vitu2_dropdown_list_window

0x7ff8,	// (0x0001ee2b) popup_vitu2_match_list_window

0x8204,	// (0x0001f037) cell_vitu2_function_top_pane_ParamLimits

0x8204,	// (0x0001f037) cell_vitu2_function_top_pane

0x821c,	// (0x0001f04f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x821c,	// (0x0001f04f) cell_vitu2_function_top_pane_cp01

0x8238,	// (0x0001f06b) cell_vitu2_function_top_wide_pane_ParamLimits

0x8238,	// (0x0001f06b) cell_vitu2_function_top_wide_pane

0x7359,	// (0x0001e18c) bg_button_pane_cp012

0x8254,	// (0x0001f087) cell_vitu2_function_top_pane_g1

0x8268,	// (0x0001f09b) bg_button_pane_cp013_ParamLimits

0x8268,	// (0x0001f09b) bg_button_pane_cp013

0xc77f,	// (0x000235b2) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc77f,	// (0x000235b2) cell_vitu2_function_top_wide_pane_g1

0x6e40,	// (0x0001dc73) bg_popup_sub_pane_cp20

0x8284,	// (0x0001f0b7) list_vitu2_match_list_pane

0x3f20,	// (0x0001ad53) bg_popup_sub_pane_cp20_g1

0x3f28,	// (0x0001ad5b) bg_popup_sub_pane_cp20_g2

0x0edc,	// (0x00017d0f) bg_popup_sub_pane_cp20_g3

0x3f30,	// (0x0001ad63) bg_popup_sub_pane_cp20_g4

0x0ebc,	// (0x00017cef) bg_popup_sub_pane_cp20_g5

0x41a9,	// (0x0001afdc) bg_popup_sub_pane_cp20_g6

0x3f40,	// (0x0001ad73) bg_popup_sub_pane_cp20_g7

0x3f48,	// (0x0001ad7b) bg_popup_sub_pane_cp20_g8

0x3f50,	// (0x0001ad83) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9e9,	// (0x0002681c) bg_popup_sub_pane_cp20_g

0x829c,	// (0x0001f0cf) list_vitu2_match_list_item_pane_ParamLimits

0x829c,	// (0x0001f0cf) list_vitu2_match_list_item_pane

0x82ae,	// (0x0001f0e1) list_vitu2_match_list_item_pane_t1

0x6e4e,	// (0x0001dc81) bg_popup_sub_pane_cp21

0x82bc,	// (0x0001f0ef) grid_vitu2_dropdown_list_pane

0x82c4,	// (0x0001f0f7) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x82c4,	// (0x0001f0f7) cell_vitu2_dropdown_list_char_pane

0x82e5,	// (0x0001f118) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x82e5,	// (0x0001f118) cell_vitu2_dropdown_list_ctrl_pane

0x41fb,	// (0x0001b02e) cell_vitu2_dropdown_list_char_pane_g1

0x41f2,	// (0x0001b025) cell_vitu2_dropdown_list_char_pane_g2

0x41e9,	// (0x0001b01c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa06,	// (0x00026839) cell_vitu2_dropdown_list_char_pane_g

0x8311,	// (0x0001f144) cell_vitu2_dropdown_list_char_pane_t1

0xc7c3,	// (0x000235f6) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc7c3,	// (0x000235f6) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc7d3,	// (0x00023606) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc7d3,	// (0x00023606) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc7e4,	// (0x00023617) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc7e4,	// (0x00023617) cell_vitu2_dropdown_list_ctrl_pane_g3

0x831f,	// (0x0001f152) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x831f,	// (0x0001f152) cell_vitu2_dropdown_list_ctrl_pane_g4

0x7dfb,	// (0x0001ec2e) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x7dfb,	// (0x0001ec2e) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa0d,	// (0x00026840) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa0d,	// (0x00026840) cell_vitu2_dropdown_list_ctrl_pane_g

0xc7f4,	// (0x00023627) aid_size_cell_gallery2_ParamLimits

0xc7f4,	// (0x00023627) aid_size_cell_gallery2

0xc80e,	// (0x00023641) grid_gallery2_pane_ParamLimits

0xc80e,	// (0x00023641) grid_gallery2_pane

0xbd58,	// (0x00022b8b) scroll_pane_cp029_ParamLimits

0xbd58,	// (0x00022b8b) scroll_pane_cp029

0xc81f,	// (0x00023652) cell_gallery2_pane_ParamLimits

0xc81f,	// (0x00023652) cell_gallery2_pane

0x4204,	// (0x0001b037) cell_gallery2_pane_g2

0xc86c,	// (0x0002369f) cell_gallery2_pane_g3

0x420c,	// (0x0001b03f) cell_gallery2_pane_g4

0x4214,	// (0x0001b047) cell_gallery2_pane_g5

0x0c34,	// (0x00017a67) grid_highlight_pane_cp10

0x7ff8,	// (0x0001ee2b) popup_vitu2_match_list_window_ParamLimits

0x8008,	// (0x0001ee3b) popup_vitu2_query_window_ParamLimits

0x8008,	// (0x0001ee3b) popup_vitu2_query_window

0x6e4e,	// (0x0001dc81) bg_vitu2_candi_button_pane

0x41fb,	// (0x0001b02e) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x41f2,	// (0x0001b025) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x41e9,	// (0x0001b01c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xc874,	// (0x000236a7) bg_button_pane_cp015

0xc884,	// (0x000236b7) bg_button_pane_cp016

0xc897,	// (0x000236ca) bg_button_pane_cp017

0x2c00,	// (0x00019a33) bg_popup_sub_pane_cp22

0x421c,	// (0x0001b04f) popup_vitu2_query_window_g1

0xc8da,	// (0x0002370d) popup_vitu2_query_window_g2

0x0002,

0xfa18,	// (0x0002684b) popup_vitu2_query_window_g

0xc8f5,	// (0x00023728) popup_vitu2_query_window_t1_ParamLimits

0xc8f5,	// (0x00023728) popup_vitu2_query_window_t1

0xc928,	// (0x0002375b) popup_vitu2_query_window_t2_ParamLimits

0xc928,	// (0x0002375b) popup_vitu2_query_window_t2

0xc93a,	// (0x0002376d) popup_vitu2_query_window_t3_ParamLimits

0xc93a,	// (0x0002376d) popup_vitu2_query_window_t3

0xc962,	// (0x00023795) popup_vitu2_query_window_t4_ParamLimits

0xc962,	// (0x00023795) popup_vitu2_query_window_t4

0xc97f,	// (0x000237b2) popup_vitu2_query_window_t5_ParamLimits

0xc97f,	// (0x000237b2) popup_vitu2_query_window_t5

0x0006,

0xfa1f,	// (0x00026852) popup_vitu2_query_window_t_ParamLimits

0xfa1f,	// (0x00026852) popup_vitu2_query_window_t

0x4022,	// (0x0001ae55) main_cset_text_pane

0xc402,	// (0x00023235) aid_area_touch_slider_ParamLimits

0xc41e,	// (0x00023251) cset_slider_pane_ParamLimits

0xc448,	// (0x0002327b) main_cset_slider_pane_g1_ParamLimits

0xc45d,	// (0x00023290) main_cset_slider_pane_g2_ParamLimits

0x4043,	// (0x0001ae76) main_cset_slider_pane_g3_ParamLimits

0x4043,	// (0x0001ae76) main_cset_slider_pane_g3

0xc472,	// (0x000232a5) main_cset_slider_pane_g4_ParamLimits

0xc472,	// (0x000232a5) main_cset_slider_pane_g4

0xc481,	// (0x000232b4) main_cset_slider_pane_g5_ParamLimits

0xc481,	// (0x000232b4) main_cset_slider_pane_g5

0xc48d,	// (0x000232c0) main_cset_slider_pane_g6_ParamLimits

0xc48d,	// (0x000232c0) main_cset_slider_pane_g6

0xf972,	// (0x000267a5) main_cset_slider_pane_g_ParamLimits

0x4073,	// (0x0001aea6) main_cset_slider_pane_t1_ParamLimits

0xc519,	// (0x0002334c) main_cset_slider_pane_t2_ParamLimits

0xc533,	// (0x00023366) main_cset_slider_pane_t3_ParamLimits

0xc54d,	// (0x00023380) main_cset_slider_pane_t4_ParamLimits

0xc567,	// (0x0002339a) main_cset_slider_pane_t5_ParamLimits

0xc581,	// (0x000233b4) main_cset_slider_pane_t6_ParamLimits

0xc596,	// (0x000233c9) main_cset_slider_pane_t7_ParamLimits

0xc5c0,	// (0x000233f3) main_cset_slider_pane_t8_ParamLimits

0xc5c0,	// (0x000233f3) main_cset_slider_pane_t8

0xc5e8,	// (0x0002341b) main_cset_slider_pane_t9_ParamLimits

0xc5e8,	// (0x0002341b) main_cset_slider_pane_t9

0xc610,	// (0x00023443) main_cset_slider_pane_t10_ParamLimits

0xc610,	// (0x00023443) main_cset_slider_pane_t10

0xc638,	// (0x0002346b) main_cset_slider_pane_t11_ParamLimits

0xc638,	// (0x0002346b) main_cset_slider_pane_t11

0xc660,	// (0x00023493) main_cset_slider_pane_t12_ParamLimits

0xc660,	// (0x00023493) main_cset_slider_pane_t12

0xc67d,	// (0x000234b0) main_cset_slider_pane_t13_ParamLimits

0xc67d,	// (0x000234b0) main_cset_slider_pane_t13

0xf997,	// (0x000267ca) main_cset_slider_pane_t_ParamLimits

0x020d,	// (0x00017040) bg_popup_sub_pane_cp011

0x4228,	// (0x0001b05b) main_cset_text_pane_g1

0x4230,	// (0x0001b063) main_cset_text_pane_t1

0x423e,	// (0x0001b071) main_cset_text_pane_t2

0x424c,	// (0x0001b07f) main_cset_text_pane_t3

0x425a,	// (0x0001b08d) main_cset_text_pane_t4

0x4268,	// (0x0001b09b) main_cset_text_pane_t5

0x4276,	// (0x0001b0a9) main_cset_text_pane_t6

0x4284,	// (0x0001b0b7) main_cset_text_pane_t7

0x0006,

0xfa2e,	// (0x00026861) main_cset_text_pane_t

0x6e4e,	// (0x0001dc81) main_cam4_burst_pane

0x6e4e,	// (0x0001dc81) main_cam5_pane

0xc35d,	// (0x00023190) bg_button_pane_cp019

0xc366,	// (0x00023199) bg_button_pane_cp020

0x404f,	// (0x0001ae82) main_cset_slider_pane_g7_ParamLimits

0x404f,	// (0x0001ae82) main_cset_slider_pane_g7

0x405b,	// (0x0001ae8e) main_cset_slider_pane_g8_ParamLimits

0x405b,	// (0x0001ae8e) main_cset_slider_pane_g8

0xc4a1,	// (0x000232d4) main_cset_slider_pane_g9_ParamLimits

0xc4a1,	// (0x000232d4) main_cset_slider_pane_g9

0xc4ad,	// (0x000232e0) main_cset_slider_pane_g10_ParamLimits

0xc4ad,	// (0x000232e0) main_cset_slider_pane_g10

0xc4b9,	// (0x000232ec) main_cset_slider_pane_g11_ParamLimits

0xc4b9,	// (0x000232ec) main_cset_slider_pane_g11

0xc4c5,	// (0x000232f8) main_cset_slider_pane_g12_ParamLimits

0xc4c5,	// (0x000232f8) main_cset_slider_pane_g12

0xc4d1,	// (0x00023304) main_cset_slider_pane_g13_ParamLimits

0xc4d1,	// (0x00023304) main_cset_slider_pane_g13

0xc4dd,	// (0x00023310) main_cset_slider_pane_g14_ParamLimits

0xc4dd,	// (0x00023310) main_cset_slider_pane_g14

0xc4e9,	// (0x0002331c) main_cset_slider_pane_g15_ParamLimits

0xc4e9,	// (0x0002331c) main_cset_slider_pane_g15

0x40a1,	// (0x0001aed4) main_cset_slider_pane_t14_ParamLimits

0x40a1,	// (0x0001aed4) main_cset_slider_pane_t14

0x40da,	// (0x0001af0d) main_cset_slider_pane_t15_ParamLimits

0x40da,	// (0x0001af0d) main_cset_slider_pane_t15

0xc9f2,	// (0x00023825) aid_cam4_burst_size_cell_ParamLimits

0xc9f2,	// (0x00023825) aid_cam4_burst_size_cell

0xca0e,	// (0x00023841) grid_cam4_burst_pane_ParamLimits

0xca0e,	// (0x00023841) grid_cam4_burst_pane

0xca30,	// (0x00023863) linegrid_cam4_burst_pane_ParamLimits

0xca30,	// (0x00023863) linegrid_cam4_burst_pane

0xca4e,	// (0x00023881) scroll_pane_cp30_ParamLimits

0xca4e,	// (0x00023881) scroll_pane_cp30

0xca5a,	// (0x0002388d) cell_cam4_burst_pane_ParamLimits

0xca5a,	// (0x0002388d) cell_cam4_burst_pane

0x4292,	// (0x0001b0c5) linegrid_cam4_burst_pane_g1_ParamLimits

0x4292,	// (0x0001b0c5) linegrid_cam4_burst_pane_g1

0xca92,	// (0x000238c5) linegrid_cam4_burst_pane_g2_ParamLimits

0xca92,	// (0x000238c5) linegrid_cam4_burst_pane_g2

0x429f,	// (0x0001b0d2) linegrid_cam4_burst_pane_g3_ParamLimits

0x429f,	// (0x0001b0d2) linegrid_cam4_burst_pane_g3

0x0002,

0xfa3d,	// (0x00026870) linegrid_cam4_burst_pane_g_ParamLimits

0xfa3d,	// (0x00026870) linegrid_cam4_burst_pane_g

0xcaa3,	// (0x000238d6) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xcaa3,	// (0x000238d6) linegrid_cam4_burst_pane_g3_copy1

0x42ac,	// (0x0001b0df) linegrid_cam4_burst_pane_g4_ParamLimits

0x42ac,	// (0x0001b0df) linegrid_cam4_burst_pane_g4

0xcabd,	// (0x000238f0) linegrid_cam4_burst_pane_g5_ParamLimits

0xcabd,	// (0x000238f0) linegrid_cam4_burst_pane_g5

0xcace,	// (0x00023901) linegrid_cam4_burst_pane_g6_ParamLimits

0xcace,	// (0x00023901) linegrid_cam4_burst_pane_g6

0x42b9,	// (0x0001b0ec) linegrid_cam4_burst_pane_g7_ParamLimits

0x42b9,	// (0x0001b0ec) linegrid_cam4_burst_pane_g7

0xcadf,	// (0x00023912) cell_cam4_burst_pane_g1

0x42d2,	// (0x0001b105) main_cam5_pane_t1_ParamLimits

0x42d2,	// (0x0001b105) main_cam5_pane_t1

0x42e4,	// (0x0001b117) main_cam5_pane_t2_ParamLimits

0x42e4,	// (0x0001b117) main_cam5_pane_t2

0x42f6,	// (0x0001b129) main_cam5_pane_t3_ParamLimits

0x42f6,	// (0x0001b129) main_cam5_pane_t3

0x4308,	// (0x0001b13b) main_cam5_pane_t4_ParamLimits

0x4308,	// (0x0001b13b) main_cam5_pane_t4

0x431e,	// (0x0001b151) main_cam5_pane_t5_ParamLimits

0x431e,	// (0x0001b151) main_cam5_pane_t5

0x4330,	// (0x0001b163) main_cam5_pane_t6_ParamLimits

0x4330,	// (0x0001b163) main_cam5_pane_t6

0x4342,	// (0x0001b175) main_cam5_pane_t7_ParamLimits

0x4342,	// (0x0001b175) main_cam5_pane_t7

0x4354,	// (0x0001b187) main_cam5_pane_t8_ParamLimits

0x4354,	// (0x0001b187) main_cam5_pane_t8

0x4370,	// (0x0001b1a3) main_cam5_pane_t9_ParamLimits

0x4370,	// (0x0001b1a3) main_cam5_pane_t9

0x4382,	// (0x0001b1b5) main_cam5_pane_t10_ParamLimits

0x4382,	// (0x0001b1b5) main_cam5_pane_t10

0x4394,	// (0x0001b1c7) main_cam5_pane_t11_ParamLimits

0x4394,	// (0x0001b1c7) main_cam5_pane_t11

0x43a6,	// (0x0001b1d9) main_cam5_pane_t12_ParamLimits

0x43a6,	// (0x0001b1d9) main_cam5_pane_t12

0x43bb,	// (0x0001b1ee) main_cam5_pane_t13_ParamLimits

0x43bb,	// (0x0001b1ee) main_cam5_pane_t13

0x000c,

0xfa49,	// (0x0002687c) main_cam5_pane_t_ParamLimits

0xfa49,	// (0x0002687c) main_cam5_pane_t

0x6dff,	// (0x0001dc32) popup_scut_keymap_window_ParamLimits

0x6dff,	// (0x0001dc32) popup_scut_keymap_window

0xcaf2,	// (0x00023925) aid_size_cell_brow_shortcut

0x0c34,	// (0x00017a67) bg_popup_window_pane_cp010

0xcafe,	// (0x00023931) grid_scut_pane

0xcb08,	// (0x0002393b) cell_scut_pane_ParamLimits

0xcb08,	// (0x0002393b) cell_scut_pane

0xcb1d,	// (0x00023950) cell_scut_pane_g1

0x43d8,	// (0x0001b20b) cell_scut_pane_t1

0x43e7,	// (0x0001b21a) cell_scut_pane_t2

0xcb26,	// (0x00023959) cell_scut_pane_t3

0x0002,

0xfa64,	// (0x00026897) cell_scut_pane_t

0xb620,	// (0x00022453) main_mup3_pane_g8_ParamLimits

0xb620,	// (0x00022453) main_mup3_pane_g8

0x7f60,	// (0x0001ed93) area_vitu2_query_pane_ParamLimits

0x7f60,	// (0x0001ed93) area_vitu2_query_pane

0xc8aa,	// (0x000236dd) input_focus_pane_cp08

0x43f6,	// (0x0001b229) area_vitu2_query_pane_g1

0xcb34,	// (0x00023967) area_vitu2_query_pane_g2

0x0001,

0xfa6b,	// (0x0002689e) area_vitu2_query_pane_g

0xcb43,	// (0x00023976) area_vitu2_query_pane_t1_ParamLimits

0xcb43,	// (0x00023976) area_vitu2_query_pane_t1

0xcb55,	// (0x00023988) area_vitu2_query_pane_t2_ParamLimits

0xcb55,	// (0x00023988) area_vitu2_query_pane_t2

0xcb67,	// (0x0002399a) area_vitu2_query_pane_t3_ParamLimits

0xcb67,	// (0x0002399a) area_vitu2_query_pane_t3

0x4402,	// (0x0001b235) area_vitu2_query_pane_t4_ParamLimits

0x4402,	// (0x0001b235) area_vitu2_query_pane_t4

0x442a,	// (0x0001b25d) area_vitu2_query_pane_t5_ParamLimits

0x442a,	// (0x0001b25d) area_vitu2_query_pane_t5

0x4452,	// (0x0001b285) area_vitu2_query_pane_t6_ParamLimits

0x4452,	// (0x0001b285) area_vitu2_query_pane_t6

0x0006,

0xfa70,	// (0x000268a3) area_vitu2_query_pane_t_ParamLimits

0xfa70,	// (0x000268a3) area_vitu2_query_pane_t

0xcb8f,	// (0x000239c2) bg_button_pane_cp018

0xcb9c,	// (0x000239cf) bg_button_pane_cp021

0xcba8,	// (0x000239db) bg_button_pane_cp022

0xcbb7,	// (0x000239ea) input_focus_pane_cp09

0xa2c9,	// (0x000210fc) aid_size_touch_mv_arrow_left

0x15a3,	// (0x000183d6) aid_size_touch_mv_arrow_right

0xc501,	// (0x00023334) main_cset_slider_pane_g16_ParamLimits

0xc501,	// (0x00023334) main_cset_slider_pane_g16

0xc50d,	// (0x00023340) main_cset_slider_pane_g17_ParamLimits

0xc50d,	// (0x00023340) main_cset_slider_pane_g17

0xcadf,	// (0x00023912) cell_cam4_burst_pane_g1_ParamLimits

0x020d,	// (0x00017040) compa_mode_pane

0xc702,	// (0x00023535) popup_vtel_slider_window_g3_ParamLimits

0xc702,	// (0x00023535) popup_vtel_slider_window_g3

0xc716,	// (0x00023549) popup_vtel_slider_window_g4_ParamLimits

0xc716,	// (0x00023549) popup_vtel_slider_window_g4

0xc72a,	// (0x0002355d) popup_vtel_slider_window_t1_ParamLimits

0xc72a,	// (0x0002355d) popup_vtel_slider_window_t1

0x6e4e,	// (0x0001dc81) main_cl_pane

0x73e5,	// (0x0001e218) popup_imed_adjust2_window_ParamLimits

0x2c00,	// (0x00019a33) bg_tb_trans_pane_cp05_ParamLimits

0x3664,	// (0x0001a497) popup_imed_adjust2_window_g1_ParamLimits

0x3673,	// (0x0001a4a6) popup_imed_adjust2_window_g2_ParamLimits

0x3673,	// (0x0001a4a6) popup_imed_adjust2_window_g2

0x367f,	// (0x0001a4b2) popup_imed_adjust2_window_g3_ParamLimits

0x367f,	// (0x0001a4b2) popup_imed_adjust2_window_g3

0x0002,

0xf7d7,	// (0x0002660a) popup_imed_adjust2_window_g_ParamLimits

0xf7d7,	// (0x0002660a) popup_imed_adjust2_window_g

0x368b,	// (0x0001a4be) popup_imed_adjust2_window_t1_ParamLimits

0x36a3,	// (0x0001a4d6) slider_imed_adjust_pane_ParamLimits

0x36b7,	// (0x0001a4ea) slider_imed_adjust_pane_g1_ParamLimits

0x36c7,	// (0x0001a4fa) slider_imed_adjust_pane_g2_ParamLimits

0x36d7,	// (0x0001a50a) slider_imed_adjust_pane_g3_ParamLimits

0x36e8,	// (0x0001a51b) slider_imed_adjust_pane_g4_ParamLimits

0xf7de,	// (0x00026611) slider_imed_adjust_pane_g_ParamLimits

0x7d3e,	// (0x0001eb71) aid_touch_area_cam4_ParamLimits

0x7d3e,	// (0x0001eb71) aid_touch_area_cam4

0x7d4c,	// (0x0001eb7f) battery_pane_cp01

0x7dcb,	// (0x0001ebfe) main_camera4_pane_g6_ParamLimits

0x7dcb,	// (0x0001ebfe) main_camera4_pane_g6

0x7de9,	// (0x0001ec1c) main_camera4_pane_t2_ParamLimits

0x7de9,	// (0x0001ec1c) main_camera4_pane_t2

0x0001,

0xf8e5,	// (0x00026718) main_camera4_pane_t_ParamLimits

0xf8e5,	// (0x00026718) main_camera4_pane_t

0x7e5b,	// (0x0001ec8e) aid_touch_area_vid4_ParamLimits

0x7e5b,	// (0x0001ec8e) aid_touch_area_vid4

0x7dcb,	// (0x0001ebfe) main_video4_pane_g5_ParamLimits

0x7dcb,	// (0x0001ebfe) main_video4_pane_g5

0x7e8b,	// (0x0001ecbe) vid4_progress_pane_ParamLimits

0x7e8b,	// (0x0001ecbe) vid4_progress_pane

0x4067,	// (0x0001ae9a) main_cset_slider_pane_g18_ParamLimits

0x4067,	// (0x0001ae9a) main_cset_slider_pane_g18

0x42c6,	// (0x0001b0f9) cell_cam4_burst_pane_g2_ParamLimits

0x42c6,	// (0x0001b0f9) cell_cam4_burst_pane_g2

0x0001,

0xfa44,	// (0x00026877) cell_cam4_burst_pane_g_ParamLimits

0xfa44,	// (0x00026877) cell_cam4_burst_pane_g

0xcbc6,	// (0x000239f9) bg_cl_pane_ParamLimits

0xcbc6,	// (0x000239f9) bg_cl_pane

0xcbd2,	// (0x00023a05) cl_header_pane_ParamLimits

0xcbd2,	// (0x00023a05) cl_header_pane

0xcbde,	// (0x00023a11) cl_listscroll_pane_ParamLimits

0xcbde,	// (0x00023a11) cl_listscroll_pane

0x449e,	// (0x0001b2d1) bg_cl_pane_g1

0x44a6,	// (0x0001b2d9) bg_cl_pane_g2

0x44ae,	// (0x0001b2e1) bg_cl_pane_g3

0x44b6,	// (0x0001b2e9) bg_cl_pane_g4

0x44be,	// (0x0001b2f1) bg_cl_pane_g5

0x44c6,	// (0x0001b2f9) bg_cl_pane_g6

0x44ce,	// (0x0001b301) bg_cl_pane_g7

0x44d6,	// (0x0001b309) bg_cl_pane_g8

0x44de,	// (0x0001b311) bg_cl_pane_g9

0x0008,

0xfa7f,	// (0x000268b2) bg_cl_pane_g

0xcbea,	// (0x00023a1d) aid_height_cl_leading_ParamLimits

0xcbea,	// (0x00023a1d) aid_height_cl_leading

0xcbf6,	// (0x00023a29) aid_height_cl_text_ParamLimits

0xcbf6,	// (0x00023a29) aid_height_cl_text

0x3cbe,	// (0x0001aaf1) bg_cl_header_pane_ParamLimits

0x3cbe,	// (0x0001aaf1) bg_cl_header_pane

0xcc0e,	// (0x00023a41) cl_header_pane_g1_ParamLimits

0xcc0e,	// (0x00023a41) cl_header_pane_g1

0xcc1b,	// (0x00023a4e) cl_header_pane_t1_ParamLimits

0xcc1b,	// (0x00023a4e) cl_header_pane_t1

0x44e6,	// (0x0001b319) cl_list_pane

0x44ef,	// (0x0001b322) hc_scroll_pane_cp01

0x0ebc,	// (0x00017cef) bg_cl_header_pane_g1

0x3f20,	// (0x0001ad53) bg_cl_header_pane_g2

0x0edc,	// (0x00017d0f) bg_cl_header_pane_g3

0x3f30,	// (0x0001ad63) bg_cl_header_pane_g4

0x3f28,	// (0x0001ad5b) bg_cl_header_pane_g5

0x41a9,	// (0x0001afdc) bg_cl_header_pane_g6

0x3f48,	// (0x0001ad7b) bg_cl_header_pane_g7

0x3f50,	// (0x0001ad83) bg_cl_header_pane_g8

0x3f40,	// (0x0001ad73) bg_cl_header_pane_g9

0x0008,

0xfa92,	// (0x000268c5) bg_cl_header_pane_g

0xcc2d,	// (0x00023a60) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xcc2d,	// (0x00023a60) hc_cl_list_double_graphic_heading_pane

0xcc3d,	// (0x00023a70) hc_cl_list_single_graphic_pane_ParamLimits

0xcc3d,	// (0x00023a70) hc_cl_list_single_graphic_pane

0xcc4f,	// (0x00023a82) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xcc4f,	// (0x00023a82) hc_cl_list_single_graphic_pane_g1

0xcc5b,	// (0x00023a8e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xcc5b,	// (0x00023a8e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa5,	// (0x000268d8) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa5,	// (0x000268d8) hc_cl_list_single_graphic_pane_g

0xcc6f,	// (0x00023aa2) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xcc6f,	// (0x00023aa2) hc_cl_list_single_graphic_pane_t1

0xcc4f,	// (0x00023a82) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xcc4f,	// (0x00023a82) hc_cl_list_double_graphic_heading_pane_g1

0xcc84,	// (0x00023ab7) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xcc84,	// (0x00023ab7) hc_cl_list_double_graphic_heading_pane_g2

0xcc98,	// (0x00023acb) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xcc98,	// (0x00023acb) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaaa,	// (0x000268dd) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaaa,	// (0x000268dd) hc_cl_list_double_graphic_heading_pane_g

0xccac,	// (0x00023adf) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xccac,	// (0x00023adf) hc_cl_list_double_graphic_heading_pane_t1

0xccc1,	// (0x00023af4) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xccc1,	// (0x00023af4) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab1,	// (0x000268e4) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab1,	// (0x000268e4) hc_cl_list_double_graphic_heading_pane_t

0x8338,	// (0x0001f16b) vid4_progress_pane_g1

0x8347,	// (0x0001f17a) vid4_progress_pane_g2

0x8356,	// (0x0001f189) vid4_progress_pane_g3

0x8365,	// (0x0001f198) vid4_progress_pane_g4

0x0004,

0xfab6,	// (0x000268e9) vid4_progress_pane_g

0x837d,	// (0x0001f1b0) vid4_progress_pane_t1

0x8393,	// (0x0001f1c6) vid4_progress_pane_t2

0x0002,

0xfac1,	// (0x000268f4) vid4_progress_pane_t

0x83bd,	// (0x0001f1f0) wait_bar_pane_cp07

0x2f0f,	// (0x00019d42) blid_firmament_pane_ParamLimits

0x2f50,	// (0x00019d83) popup_blid_sat_info2_window_g1

0x2f74,	// (0x00019da7) popup_blid_sat_info2_window_t3

0x2f82,	// (0x00019db5) popup_blid_sat_info2_window_t4

0x2f90,	// (0x00019dc3) popup_blid_sat_info2_window_t5

0x2f9e,	// (0x00019dd1) popup_blid_sat_info2_window_t6

0x2fae,	// (0x00019de1) popup_blid_sat_info2_window_t7

0x2fbc,	// (0x00019def) popup_blid_sat_info2_window_t8

0x2fca,	// (0x00019dfd) popup_blid_sat_info2_window_t9

0x2fd8,	// (0x00019e0b) popup_blid_sat_info2_window_t10

0x3094,	// (0x00019ec7) aid_firma_cardinal_ParamLimits

0x30a8,	// (0x00019edb) blid_firmament_pane_t1_ParamLimits

0x30bf,	// (0x00019ef2) blid_firmament_pane_t2_ParamLimits

0x30d6,	// (0x00019f09) blid_firmament_pane_t3_ParamLimits

0x30ed,	// (0x00019f20) blid_firmament_pane_t4_ParamLimits

0xf6cb,	// (0x000264fe) blid_firmament_pane_t_ParamLimits

0x3104,	// (0x00019f37) blid_sat_info_pane_ParamLimits

0x7359,	// (0x0001e18c) main_cam_set_pane_ParamLimits

0xbcf8,	// (0x00022b2b) aid_size_cell_colour_35_ParamLimits

0xbd0f,	// (0x00022b42) aid_size_cell_colour_112_ParamLimits

0xbd26,	// (0x00022b59) aid_size_cell_effect_ParamLimits

0x0260,	// (0x00017093) bg_tb_trans_pane_cp02_ParamLimits

0x11e1,	// (0x00018014) heading_imed_pane_ParamLimits

0xbd40,	// (0x00022b73) listscroll_imed_pane_ParamLimits

0x21e6,	// (0x00019019) popup_call2_audio_first_window_g5_ParamLimits

0x21e6,	// (0x00019019) popup_call2_audio_first_window_g5

0x7b25,	// (0x0001e958) aid_size_touch_image3_arrow_left_ParamLimits

0x7b25,	// (0x0001e958) aid_size_touch_image3_arrow_left

0x7b39,	// (0x0001e96c) aid_size_touch_image3_arrow_right_ParamLimits

0x7b39,	// (0x0001e96c) aid_size_touch_image3_arrow_right

0x83a8,	// (0x0001f1db) vid4_progress_pane_t3

0xbfa4,	// (0x00022dd7) main_hwr_training_symbol_option_pane_ParamLimits

0xbfa4,	// (0x00022dd7) main_hwr_training_symbol_option_pane

0x3943,	// (0x0001a776) popup_hwr_training_preview_window_ParamLimits

0x3943,	// (0x0001a776) popup_hwr_training_preview_window

0x781d,	// (0x0001e650) hwr_training_navi_pane_g5_ParamLimits

0x781d,	// (0x0001e650) hwr_training_navi_pane_g5

0x3efc,	// (0x0001ad2f) popup_char_count_window

0x6e40,	// (0x0001dc73) bg_popup_sub_pane_cp20_ParamLimits

0x8284,	// (0x0001f0b7) list_vitu2_match_list_pane_ParamLimits

0x8290,	// (0x0001f0c3) vitu2_page_scroll_pane_ParamLimits

0x8290,	// (0x0001f0c3) vitu2_page_scroll_pane

0x45b5,	// (0x0001b3e8) list_single_hwr_training_symbol_option_pane_ParamLimits

0x45b5,	// (0x0001b3e8) list_single_hwr_training_symbol_option_pane

0x45c8,	// (0x0001b3fb) list_single_hwr_training_symbol_option_pane_g1

0x45d0,	// (0x0001b403) list_single_hwr_training_symbol_option_pane_t1

0x45de,	// (0x0001b411) bg_button_pane_cp023

0x45e7,	// (0x0001b41a) bg_button_pane_cp024

0xcd05,	// (0x00023b38) vitu2_page_scroll_pane_g1

0xcd0d,	// (0x00023b40) vitu2_page_scroll_pane_g2

0x0001,

0xfac8,	// (0x000268fb) vitu2_page_scroll_pane_g

0xcd15,	// (0x00023b48) vitu2_page_scroll_pane_t1

0x313d,	// (0x00019f70) popup_char_count_window_g1

0x461a,	// (0x0001b44d) popup_char_count_window_g2

0x4623,	// (0x0001b456) popup_char_count_window_g3

0x0002,

0xfacd,	// (0x00026900) popup_char_count_window_g

0x462c,	// (0x0001b45f) popup_char_count_window_t1

0x6e4e,	// (0x0001dc81) main_vded2_pane

0x3652,	// (0x0001a485) aid_size_cell_imed_line

0x365c,	// (0x0001a48f) grid_imed_line_width_pane

0x7ed6,	// (0x0001ed09) vid4_indicators_pane_g4

0x463a,	// (0x0001b46d) cell_imed_line_width_pane_ParamLimits

0x463a,	// (0x0001b46d) cell_imed_line_width_pane

0x464c,	// (0x0001b47f) cell_imed_line_width_pane_g1

0x4655,	// (0x0001b488) cell_imed_line_width_pane_g2

0x0001,

0xfad4,	// (0x00026907) cell_imed_line_width_pane_g

0xcd24,	// (0x00023b57) main_vded2_pane_g1_ParamLimits

0xcd24,	// (0x00023b57) main_vded2_pane_g1

0xcd31,	// (0x00023b64) main_vded2_pane_g2_ParamLimits

0xcd31,	// (0x00023b64) main_vded2_pane_g2

0x0001,

0xfad9,	// (0x0002690c) main_vded2_pane_g_ParamLimits

0xfad9,	// (0x0002690c) main_vded2_pane_g

0xcd3d,	// (0x00023b70) vded2_slider_pane_ParamLimits

0xcd3d,	// (0x00023b70) vded2_slider_pane

0xcd4a,	// (0x00023b7d) aid_size_touch_vded2_end

0xcd52,	// (0x00023b85) aid_size_touch_vded2_playhead

0xcd5a,	// (0x00023b8d) aid_size_touch_vded2_start

0xcd62,	// (0x00023b95) vded2_slider_bg_pane

0xcd6b,	// (0x00023b9e) vded2_slider_pane_g1

0xcd74,	// (0x00023ba7) vded2_slider_pane_g2

0xcd7c,	// (0x00023baf) vded2_slider_pane_g3

0x0002,

0xfade,	// (0x00026911) vded2_slider_pane_g

0xcd85,	// (0x00023bb8) vded2_slider_bg_pane_g1

0xcd8e,	// (0x00023bc1) vded2_slider_bg_pane_g2

0xcd97,	// (0x00023bca) vded2_slider_bg_pane_g3

0x0002,

0xfae5,	// (0x00026918) vded2_slider_bg_pane_g

0xa7b8,	// (0x000215eb) aid_postcard_touch_down_pane_ParamLimits

0xa7b8,	// (0x000215eb) aid_postcard_touch_down_pane

0xa7c4,	// (0x000215f7) aid_postcard_touch_up_pane_ParamLimits

0xa7c4,	// (0x000215f7) aid_postcard_touch_up_pane

0x6e4e,	// (0x0001dc81) main_blid2_pane

0x7382,	// (0x0001e1b5) popup_blid2_search_window

0x020d,	// (0x00017040) blid2_gps_pane

0x020d,	// (0x00017040) blid2_navig_pane

0x020d,	// (0x00017040) blid2_search_pane

0x020d,	// (0x00017040) blid2_tripm_pane

0xcda0,	// (0x00023bd3) blid2_search_pane_g1_ParamLimits

0xcda0,	// (0x00023bd3) blid2_search_pane_g1

0xcdac,	// (0x00023bdf) blid2_search_pane_t1_ParamLimits

0xcdac,	// (0x00023bdf) blid2_search_pane_t1

0xcdbe,	// (0x00023bf1) aid_size_cell_blid2_gps_ParamLimits

0xcdbe,	// (0x00023bf1) aid_size_cell_blid2_gps

0xcdce,	// (0x00023c01) blid2_gps_pane_g1_ParamLimits

0xcdce,	// (0x00023c01) blid2_gps_pane_g1

0xcdda,	// (0x00023c0d) grid_blid2_satellite_pane_ParamLimits

0xcdda,	// (0x00023c0d) grid_blid2_satellite_pane

0xcde6,	// (0x00023c19) blid2_navig_pane_g1_ParamLimits

0xcde6,	// (0x00023c19) blid2_navig_pane_g1

0xcdf2,	// (0x00023c25) blid2_navig_pane_t1_ParamLimits

0xcdf2,	// (0x00023c25) blid2_navig_pane_t1

0xce04,	// (0x00023c37) blid2_navig_pane_t2_ParamLimits

0xce04,	// (0x00023c37) blid2_navig_pane_t2

0x0001,

0xfaec,	// (0x0002691f) blid2_navig_pane_t_ParamLimits

0xfaec,	// (0x0002691f) blid2_navig_pane_t

0xce16,	// (0x00023c49) blid2_navig_ring_pane_ParamLimits

0xce16,	// (0x00023c49) blid2_navig_ring_pane

0xce22,	// (0x00023c55) blid2_speed_pane_ParamLimits

0xce22,	// (0x00023c55) blid2_speed_pane

0xce2e,	// (0x00023c61) blid2_tripm_pane_g1_ParamLimits

0xce2e,	// (0x00023c61) blid2_tripm_pane_g1

0xce3a,	// (0x00023c6d) blid2_tripm_pane_g2_ParamLimits

0xce3a,	// (0x00023c6d) blid2_tripm_pane_g2

0xce46,	// (0x00023c79) blid2_tripm_pane_g3_ParamLimits

0xce46,	// (0x00023c79) blid2_tripm_pane_g3

0xce52,	// (0x00023c85) blid2_tripm_pane_g4_ParamLimits

0xce52,	// (0x00023c85) blid2_tripm_pane_g4

0xce5e,	// (0x00023c91) blid2_tripm_pane_g5_ParamLimits

0xce5e,	// (0x00023c91) blid2_tripm_pane_g5

0x0005,

0xfaf1,	// (0x00026924) blid2_tripm_pane_g_ParamLimits

0xfaf1,	// (0x00026924) blid2_tripm_pane_g

0xce76,	// (0x00023ca9) blid2_tripm_pane_t1_ParamLimits

0xce76,	// (0x00023ca9) blid2_tripm_pane_t1

0xce88,	// (0x00023cbb) blid2_tripm_pane_t2_ParamLimits

0xce88,	// (0x00023cbb) blid2_tripm_pane_t2

0xce9a,	// (0x00023ccd) blid2_tripm_pane_t3_ParamLimits

0xce9a,	// (0x00023ccd) blid2_tripm_pane_t3

0x0003,

0xfafe,	// (0x00026931) blid2_tripm_pane_t_ParamLimits

0xfafe,	// (0x00026931) blid2_tripm_pane_t

0xceca,	// (0x00023cfd) cell_blid2_satellite_pane_ParamLimits

0xceca,	// (0x00023cfd) cell_blid2_satellite_pane

0xcee2,	// (0x00023d15) cell_blid2_satellite_pane_g1

0x465d,	// (0x0001b490) cell_blid2_satellite_pane_t1

0x3114,	// (0x00019f47) blid2_speed_pane_g1

0x466b,	// (0x0001b49e) blid2_speed_pane_t1

0x4679,	// (0x0001b4ac) blid2_speed_pane_t2

0x0001,

0xfb07,	// (0x0002693a) blid2_speed_pane_t

0x3114,	// (0x00019f47) blid2_navig_ring_pane_g1

0xceeb,	// (0x00023d1e) blid2_navig_ring_pane_g2

0xcef3,	// (0x00023d26) blid2_navig_ring_pane_g3

0xcefb,	// (0x00023d2e) blid2_navig_ring_pane_g4

0xcf03,	// (0x00023d36) blid2_navig_ring_pane_g5

0x0004,

0xfb0c,	// (0x0002693f) blid2_navig_ring_pane_g

0x020d,	// (0x00017040) bg_popup_window_pane_cp011

0x4687,	// (0x0001b4ba) popup_blid2_search_window_g1

0x468f,	// (0x0001b4c2) popup_blid2_search_window_t1

0x469d,	// (0x0001b4d0) popup_blid2_search_window_t2

0x0001,

0xfb17,	// (0x0002694a) popup_blid2_search_window_t

0x0dcb,	// (0x00017bfe) main_browser_pane_g1

0x09c5,	// (0x000177f8) main_browser_pane_ParamLimits

0x7359,	// (0x0001e18c) bg_button_pane_cp011_ParamLimits

0x81ad,	// (0x0001efe0) cell_vitu2_function_pane_g1_ParamLimits

0x2c00,	// (0x00019a33) bg_popup_sub_pane_cp22_ParamLimits

0xc8aa,	// (0x000236dd) input_focus_pane_cp08_ParamLimits

0xc8c1,	// (0x000236f4) popup_vitu2_query_button_pane_ParamLimits

0xc8c1,	// (0x000236f4) popup_vitu2_query_button_pane

0xc8d2,	// (0x00023705) popup_vitu2_query_input_button_pane

0x421c,	// (0x0001b04f) popup_vitu2_query_window_g1_ParamLimits

0xc8da,	// (0x0002370d) popup_vitu2_query_window_g2_ParamLimits

0xfa18,	// (0x0002684b) popup_vitu2_query_window_g_ParamLimits

0x020d,	// (0x00017040) bg_button_pane_cp026

0xcf0b,	// (0x00023d3e) popup_vitu2_query_input_button_pane_g1

0x020d,	// (0x00017040) bg_button_pane_cp025

0x46ab,	// (0x0001b4de) popup_vitu2_query_button_pane_t1

0xb39e,	// (0x000221d1) main_mp3_pane_t6

0xb3ac,	// (0x000221df) popup_slider_window_cp01

0x7e09,	// (0x0001ec3c) cam4_battery_pane

0x7e09,	// (0x0001ec3c) cam4_battery_pane_cp02

0x7e09,	// (0x0001ec3c) cam4_battery_pane_cp01

0x7e09,	// (0x0001ec3c) cam4_battery_pane_cp03

0x46b9,	// (0x0001b4ec) cam4_battery_pane_g1

0x3114,	// (0x00019f47) cam4_battery_pane_g2

0x0001,

0xfb1c,	// (0x0002694f) cam4_battery_pane_g

0x2fe6,	// (0x00019e19) popup_blid_sat_info2_window_t11

0xa2c9,	// (0x000210fc) aid_size_touch_mv_arrow_left_ParamLimits

0x15a3,	// (0x000183d6) aid_size_touch_mv_arrow_right_ParamLimits

0x15fc,	// (0x0001842f) navi_pane_g1_ParamLimits

0x1608,	// (0x0001843b) navi_pane_g2_ParamLimits

0xa2ed,	// (0x00021120) navi_pane_g3_ParamLimits

0xf3ca,	// (0x000261fd) navi_pane_g_ParamLimits

0xa30a,	// (0x0002113d) navi_pane_mv_t1_ParamLimits

0xbd4c,	// (0x00022b7f) grid_imed_effect_pane_ParamLimits

0x9027,	// (0x0001fe5a) aid_placing_vt_slider_lsc

0x0d0d,	// (0x00017b40) aid_placing_vt_slider_prt

0x0260,	// (0x00017093) bg_tb_trans_pane_cp01_ParamLimits

0x3263,	// (0x0001a096) popup_image_details_window_g1_ParamLimits

0x3276,	// (0x0001a0a9) popup_image_details_window_g2_ParamLimits

0x328b,	// (0x0001a0be) popup_image_details_window_g3_ParamLimits

0x328b,	// (0x0001a0be) popup_image_details_window_g3

0xf710,	// (0x00026543) popup_image_details_window_g_ParamLimits

0x329f,	// (0x0001a0d2) popup_image_details_window_t1_ParamLimits

0x32b1,	// (0x0001a0e4) popup_image_details_window_t2_ParamLimits

0x32ca,	// (0x0001a0fd) popup_image_details_window_t3_ParamLimits

0x32de,	// (0x0001a111) popup_image_details_window_t4_ParamLimits

0x32f9,	// (0x0001a12c) popup_image_details_window_t5_ParamLimits

0xf717,	// (0x0002654a) popup_image_details_window_t_ParamLimits

0xcc02,	// (0x00023a35) cl_header_name_pane_ParamLimits

0xcc02,	// (0x00023a35) cl_header_name_pane

0xcf13,	// (0x00023d46) cl_header_name_pane_t1_ParamLimits

0xcf13,	// (0x00023d46) cl_header_name_pane_t1

0xcf2a,	// (0x00023d5d) cl_header_name_pane_t2_ParamLimits

0xcf2a,	// (0x00023d5d) cl_header_name_pane_t2

0xcf54,	// (0x00023d87) cl_header_name_pane_t3_ParamLimits

0xcf54,	// (0x00023d87) cl_header_name_pane_t3

0x0002,

0xfb21,	// (0x00026954) cl_header_name_pane_t_ParamLimits

0xfb21,	// (0x00026954) cl_header_name_pane_t

0x1695,	// (0x000184c8) navi_pane_mv_g2_ParamLimits

0x3eb9,	// (0x0001acec) field_vitu2_entry_pane_g1_ParamLimits

0x3ec5,	// (0x0001acf8) field_vitu2_entry_pane_g2_ParamLimits

0x3ed1,	// (0x0001ad04) field_vitu2_entry_pane_g3_ParamLimits

0x3ed1,	// (0x0001ad04) field_vitu2_entry_pane_g3

0xf917,	// (0x0002674a) field_vitu2_entry_pane_g_ParamLimits

0x8079,	// (0x0001eeac) cell_vitu2_itu_pane_g1_ParamLimits

0x808b,	// (0x0001eebe) cell_vitu2_itu_pane_g2_ParamLimits

0x808b,	// (0x0001eebe) cell_vitu2_itu_pane_g2

0x0001,

0xf923,	// (0x00026756) cell_vitu2_itu_pane_g_ParamLimits

0xf923,	// (0x00026756) cell_vitu2_itu_pane_g

0x7359,	// (0x0001e18c) bg_vkb2_func_pane_cp05_ParamLimits

0x7359,	// (0x0001e18c) bg_vkb2_func_pane_cp05

0x7359,	// (0x0001e18c) bg_vkb2_func_pane_cp03

0x7359,	// (0x0001e18c) bg_vkb2_func_pane_cp04

0x7359,	// (0x0001e18c) bg_vkb2_func_pane_cp10_ParamLimits

0x7359,	// (0x0001e18c) bg_vkb2_func_pane_cp10

0xcba8,	// (0x000239db) bg_vkb2_func_pane_cp08

0xcb8f,	// (0x000239c2) bg_vkb2_func_pane_cp06

0xcb9c,	// (0x000239cf) bg_vkb2_func_pane_cp07

0x45f0,	// (0x0001b423) bg_vkb2_func_pane_cp11_ParamLimits

0x45f0,	// (0x0001b423) bg_vkb2_func_pane_cp11

0x4605,	// (0x0001b438) bg_vkb2_func_pane_cp12_ParamLimits

0x4605,	// (0x0001b438) bg_vkb2_func_pane_cp12

0x020d,	// (0x00017040) bg_vkb2_func_pane_cp09

0x3f20,	// (0x0001ad53) bg_vkb2_func_pane_g1

0x0edc,	// (0x00017d0f) bg_vkb2_func_pane_g2

0x3f28,	// (0x0001ad5b) bg_vkb2_func_pane_g3

0x3f30,	// (0x0001ad63) bg_vkb2_func_pane_g4

0x41a9,	// (0x0001afdc) bg_vkb2_func_pane_g5

0x3f48,	// (0x0001ad7b) bg_vkb2_func_pane_g6

0x3f50,	// (0x0001ad83) bg_vkb2_func_pane_g7

0x3f40,	// (0x0001ad73) bg_vkb2_func_pane_g8

0x0ebc,	// (0x00017cef) bg_vkb2_func_pane_g9

0x0008,

0xfb28,	// (0x0002695b) bg_vkb2_func_pane_g

0xce6a,	// (0x00023c9d) blid2_tripm_pane_g6_ParamLimits

0xce6a,	// (0x00023c9d) blid2_tripm_pane_g6

0x3c5c,	// (0x0001aa8f) mp4_progress_pane_g1

0xcebe,	// (0x00023cf1) blid2_tripm_values_pane_ParamLimits

0xcebe,	// (0x00023cf1) blid2_tripm_values_pane

0xcf79,	// (0x00023dac) blid2_tripm_values_pane_t1

0xcf87,	// (0x00023dba) blid2_tripm_values_pane_t2

0xcf95,	// (0x00023dc8) blid2_tripm_values_pane_t3

0xcfa3,	// (0x00023dd6) blid2_tripm_values_pane_t4

0xcfb1,	// (0x00023de4) blid2_tripm_values_pane_t5

0xcfbf,	// (0x00023df2) blid2_tripm_values_pane_t6

0xcfcd,	// (0x00023e00) blid2_tripm_values_pane_t7

0xcfdb,	// (0x00023e0e) blid2_tripm_values_pane_t8

0xcfe9,	// (0x00023e1c) blid2_tripm_values_pane_t9

0x0008,

0xfb3b,	// (0x0002696e) blid2_tripm_values_pane_t

0x9061,	// (0x0001fe94) call_video_pane_t1_ParamLimits

0x907e,	// (0x0001feb1) call_video_pane_t2_ParamLimits

0xf253,	// (0x00026086) call_video_pane_t_ParamLimits

0xa770,	// (0x000215a3) msg_header_pane_g1_ParamLimits

0x188f,	// (0x000186c2) msg_header_pane_g2_ParamLimits

0x188f,	// (0x000186c2) msg_header_pane_g2

0x0001,

0xf46d,	// (0x000262a0) msg_header_pane_g_ParamLimits

0xf46d,	// (0x000262a0) msg_header_pane_g

0x09c5,	// (0x000177f8) main_clock2_pane_ParamLimits

0xbb68,	// (0x0002299b) grid_clock2_toolbar_pane_ParamLimits

0xbb68,	// (0x0002299b) grid_clock2_toolbar_pane

0xbb68,	// (0x0002299b) listscroll_clock2_pane_ParamLimits

0xbb68,	// (0x0002299b) listscroll_clock2_pane

0xbc04,	// (0x00022a37) main_clock2_pane_t3_ParamLimits

0xbc04,	// (0x00022a37) main_clock2_pane_t3

0xbc16,	// (0x00022a49) main_clock2_pane_t4_ParamLimits

0xbc16,	// (0x00022a49) main_clock2_pane_t4

0x46c3,	// (0x0001b4f6) cell_clock2_toolbar_pane

0x46cb,	// (0x0001b4fe) cell_clock2_toolbar_pane_cp01

0x46cb,	// (0x0001b4fe) cell_clock2_toolbar_pane_cp02

0x46d3,	// (0x0001b506) cell_clock2_toolbar_pane_cp03

0x46db,	// (0x0001b50e) list_clock2_pane

0x46e3,	// (0x0001b516) scroll_pane_cp10

0x46eb,	// (0x0001b51e) list_single_clock2_pane_ParamLimits

0x46eb,	// (0x0001b51e) list_single_clock2_pane

0x0c34,	// (0x00017a67) list_highlight_pane_cp08

0x46f8,	// (0x0001b52b) list_single_clock2_pane_t1

0x4706,	// (0x0001b539) list_single_clock2_pane_t2

0x0001,

0xfb4e,	// (0x00026981) list_single_clock2_pane_t

0x020d,	// (0x00017040) bg_button_pane_cp10

0x4714,	// (0x0001b547) cell_clock2_toolbar_pane_g1

0x72f5,	// (0x0001e128) aid_main_viewer_pane_g1_ParamLimits

0x72f5,	// (0x0001e128) aid_main_viewer_pane_g1

0x7301,	// (0x0001e134) aid_main_viewer_pane_g2_ParamLimits

0x7301,	// (0x0001e134) aid_main_viewer_pane_g2

0xa77c,	// (0x000215af) aid_main_viewer_pane_g3_ParamLimits

0xa77c,	// (0x000215af) aid_main_viewer_pane_g3

0xa78b,	// (0x000215be) aid_main_viewer_pane_g4_ParamLimits

0xa78b,	// (0x000215be) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x000262b1) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x000262b1) aid_main_viewer_pane_g

0x6e40,	// (0x0001dc73) main_calc_pane_ParamLimits

0x7367,	// (0x0001e19a) main_dialer2_pane_ParamLimits

0x6e4e,	// (0x0001dc81) main_cam6_pane

0x6e4e,	// (0x0001dc81) main_vid6_pane

0xbb74,	// (0x000229a7) listscroll_gen_pane_cp06_ParamLimits

0xbb74,	// (0x000229a7) listscroll_gen_pane_cp06

0xbc28,	// (0x00022a5b) main_clock2_pane_t5_ParamLimits

0xbc28,	// (0x00022a5b) main_clock2_pane_t5

0xbc71,	// (0x00022aa4) aid_call2_pane_cp10_ParamLimits

0xbc83,	// (0x00022ab6) aid_call_pane_cp10_ParamLimits

0x1597,	// (0x000183ca) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1597,	// (0x000183ca) popup_clock_analogue_window_cp10_g2_ParamLimits

0xbc95,	// (0x00022ac8) popup_clock_analogue_window_cp10_g3_ParamLimits

0xbc95,	// (0x00022ac8) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1597,	// (0x000183ca) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7cc,	// (0x000265ff) popup_clock_analogue_window_cp10_g_ParamLimits

0xbca7,	// (0x00022ada) popup_clock_analogue_window_cp10_t1_ParamLimits

0x3cd8,	// (0x0001ab0b) cell_dialer2_keypad_pane_g2_ParamLimits

0x3cd8,	// (0x0001ab0b) cell_dialer2_keypad_pane_g2

0x0001,

0xf8b6,	// (0x000266e9) cell_dialer2_keypad_pane_g_ParamLimits

0xf8b6,	// (0x000266e9) cell_dialer2_keypad_pane_g

0xc063,	// (0x00022e96) cell_dialer2_keypad_pane_t1

0xc3ef,	// (0x00023222) main_cset_text2_pane_ParamLimits

0xc3ef,	// (0x00023222) main_cset_text2_pane

0x43f6,	// (0x0001b229) area_vitu2_query_pane_g1_ParamLimits

0xcb34,	// (0x00023967) area_vitu2_query_pane_g2_ParamLimits

0xfa6b,	// (0x0002689e) area_vitu2_query_pane_g_ParamLimits

0x447a,	// (0x0001b2ad) area_vitu2_query_pane_t7_ParamLimits

0x447a,	// (0x0001b2ad) area_vitu2_query_pane_t7

0xcb8f,	// (0x000239c2) bg_button_pane_cp018_ParamLimits

0xcb9c,	// (0x000239cf) bg_button_pane_cp021_ParamLimits

0xcba8,	// (0x000239db) bg_button_pane_cp022_ParamLimits

0xcba8,	// (0x000239db) bg_vkb2_func_pane_cp08_ParamLimits

0xcb8f,	// (0x000239c2) bg_vkb2_func_pane_cp06_ParamLimits

0xcb9c,	// (0x000239cf) bg_vkb2_func_pane_cp07_ParamLimits

0xcbb7,	// (0x000239ea) input_focus_pane_cp09_ParamLimits

0x83cd,	// (0x0001f200) cam6_autofocus_pane_ParamLimits

0x83cd,	// (0x0001f200) cam6_autofocus_pane

0x83e9,	// (0x0001f21c) cam6_image_uncrop_pane_ParamLimits

0x83e9,	// (0x0001f21c) cam6_image_uncrop_pane

0x840c,	// (0x0001f23f) cam6_indi_pane_ParamLimits

0x840c,	// (0x0001f23f) cam6_indi_pane

0x8426,	// (0x0001f259) cam6_mode_pane_ParamLimits

0x8426,	// (0x0001f259) cam6_mode_pane

0x843a,	// (0x0001f26d) cam6_timer_pane_ParamLimits

0x843a,	// (0x0001f26d) cam6_timer_pane

0x8446,	// (0x0001f279) cam6_zoom_pane_ParamLimits

0x8446,	// (0x0001f279) cam6_zoom_pane

0xcff7,	// (0x00023e2a) cam6_mode_pane_g1_ParamLimits

0xcff7,	// (0x00023e2a) cam6_mode_pane_g1

0xd003,	// (0x00023e36) cam6_mode_pane_g2_ParamLimits

0xd003,	// (0x00023e36) cam6_mode_pane_g2

0xd00f,	// (0x00023e42) cam6_mode_pane_g3_ParamLimits

0xd00f,	// (0x00023e42) cam6_mode_pane_g3

0xd01b,	// (0x00023e4e) cam6_mode_pane_g4_ParamLimits

0xd01b,	// (0x00023e4e) cam6_mode_pane_g4

0x0003,

0xfb53,	// (0x00026986) cam6_mode_pane_g_ParamLimits

0xfb53,	// (0x00026986) cam6_mode_pane_g

0x3cb0,	// (0x0001aae3) bg_tb_trans_pane_cp08_ParamLimits

0x3cb0,	// (0x0001aae3) bg_tb_trans_pane_cp08

0x4728,	// (0x0001b55b) cam6_battery_pane_ParamLimits

0x4728,	// (0x0001b55b) cam6_battery_pane

0x473e,	// (0x0001b571) cam6_indi_pane_g1_ParamLimits

0x473e,	// (0x0001b571) cam6_indi_pane_g1

0x4750,	// (0x0001b583) cam6_indi_pane_g2_ParamLimits

0x4750,	// (0x0001b583) cam6_indi_pane_g2

0x4762,	// (0x0001b595) cam6_indi_pane_g3_ParamLimits

0x4762,	// (0x0001b595) cam6_indi_pane_g3

0x0002,

0xfb5c,	// (0x0002698f) cam6_indi_pane_g_ParamLimits

0xfb5c,	// (0x0002698f) cam6_indi_pane_g

0x4774,	// (0x0001b5a7) cam6_indi_pane_t1_ParamLimits

0x4774,	// (0x0001b5a7) cam6_indi_pane_t1

0xc130,	// (0x00022f63) cam6_autofocus_pane_g1

0xc128,	// (0x00022f5b) cam6_autofocus_pane_g2

0xc140,	// (0x00022f73) cam6_autofocus_pane_g3

0xc138,	// (0x00022f6b) cam6_autofocus_pane_g4

0x0003,

0xfb63,	// (0x00026996) cam6_autofocus_pane_g

0x479a,	// (0x0001b5cd) cam6_timer_pane_g1

0x47a2,	// (0x0001b5d5) cam6_timer_pane_t1

0x47b0,	// (0x0001b5e3) cam6_zoom_cont_pane

0x47b8,	// (0x0001b5eb) cam6_zoom_pane_g1

0x47c0,	// (0x0001b5f3) cam6_zoom_pane_g2

0xd027,	// (0x00023e5a) cam6_zoom_pane_g3

0x0002,

0xfb6c,	// (0x0002699f) cam6_zoom_pane_g

0x3114,	// (0x00019f47) cam6_battery_pane_g1

0x3114,	// (0x00019f47) cam6_battery_pane_g2

0x0001,

0xf6d4,	// (0x00026507) cam6_battery_pane_g

0x47c8,	// (0x0001b5fb) cam6_zoom_cont_pane_g1

0x47d1,	// (0x0001b604) cam6_zoom_cont_pane_g2

0x47da,	// (0x0001b60d) cam6_zoom_cont_pane_g3

0x0002,

0xfb73,	// (0x000269a6) cam6_zoom_cont_pane_g

0xd044,	// (0x00023e77) cam6_mode_pane_cp_ParamLimits

0xd044,	// (0x00023e77) cam6_mode_pane_cp

0xd058,	// (0x00023e8b) cam6_zoom_pane_cp_ParamLimits

0xd058,	// (0x00023e8b) cam6_zoom_pane_cp

0xd06e,	// (0x00023ea1) vid6_image_uncrop_cif_pane_ParamLimits

0xd06e,	// (0x00023ea1) vid6_image_uncrop_cif_pane

0xd090,	// (0x00023ec3) vid6_image_uncrop_nhd_pane_ParamLimits

0xd090,	// (0x00023ec3) vid6_image_uncrop_nhd_pane

0xd0a7,	// (0x00023eda) vid6_image_uncrop_vga_pane_ParamLimits

0xd0a7,	// (0x00023eda) vid6_image_uncrop_vga_pane

0xd0be,	// (0x00023ef1) vid6_image_uncrop_wvga_pane_ParamLimits

0xd0be,	// (0x00023ef1) vid6_image_uncrop_wvga_pane

0xd0d5,	// (0x00023f08) vid6_indi_pane_ParamLimits

0xd0d5,	// (0x00023f08) vid6_indi_pane

0x3cb0,	// (0x0001aae3) bg_tb_trans_pane_cp09_ParamLimits

0x3cb0,	// (0x0001aae3) bg_tb_trans_pane_cp09

0x47ee,	// (0x0001b621) cam6_battery_pane_cp_ParamLimits

0x47ee,	// (0x0001b621) cam6_battery_pane_cp

0x47fa,	// (0x0001b62d) vid6_indi_pane_g1_ParamLimits

0x47fa,	// (0x0001b62d) vid6_indi_pane_g1

0x480c,	// (0x0001b63f) vid6_indi_pane_g2_ParamLimits

0x480c,	// (0x0001b63f) vid6_indi_pane_g2

0x481e,	// (0x0001b651) vid6_indi_pane_g3_ParamLimits

0x481e,	// (0x0001b651) vid6_indi_pane_g3

0x4833,	// (0x0001b666) vid6_indi_pane_g4_ParamLimits

0x4833,	// (0x0001b666) vid6_indi_pane_g4

0x4848,	// (0x0001b67b) vid6_indi_pane_g5_ParamLimits

0x4848,	// (0x0001b67b) vid6_indi_pane_g5

0x0004,

0xfb7a,	// (0x000269ad) vid6_indi_pane_g_ParamLimits

0xfb7a,	// (0x000269ad) vid6_indi_pane_g

0x4862,	// (0x0001b695) vid6_indi_pane_t1_ParamLimits

0x4862,	// (0x0001b695) vid6_indi_pane_t1

0x4878,	// (0x0001b6ab) vid6_indi_pane_t2_ParamLimits

0x4878,	// (0x0001b6ab) vid6_indi_pane_t2

0x48a0,	// (0x0001b6d3) vid6_indi_pane_t3_ParamLimits

0x48a0,	// (0x0001b6d3) vid6_indi_pane_t3

0x48c8,	// (0x0001b6fb) vid6_indi_pane_t4_ParamLimits

0x48c8,	// (0x0001b6fb) vid6_indi_pane_t4

0x0003,

0xfb85,	// (0x000269b8) vid6_indi_pane_t_ParamLimits

0xfb85,	// (0x000269b8) vid6_indi_pane_t

0x48ec,	// (0x0001b71f) wait_bar_pane_cp08

0xd0f5,	// (0x00023f28) main_cset_text2_pane_t1_ParamLimits

0xd0f5,	// (0x00023f28) main_cset_text2_pane_t1

0xd02f,	// (0x00023e62) listscroll_gen_pane_cp06_t1_ParamLimits

0xd02f,	// (0x00023e62) listscroll_gen_pane_cp06_t1

0x6e4e,	// (0x0001dc81) main_cam6_set_pane

0x7dfb,	// (0x0001ec2e) bg_tb_trans_pane_cp06_ParamLimits

0x7e11,	// (0x0001ec44) cam4_indicators_pane_g1_ParamLimits

0x7e21,	// (0x0001ec54) cam4_indicators_pane_g2_ParamLimits

0xf8f3,	// (0x00026726) cam4_indicators_pane_g_ParamLimits

0x7e41,	// (0x0001ec74) cam4_indicators_pane_t1_ParamLimits

0x7359,	// (0x0001e18c) bg_tb_trans_pane_cp07_ParamLimits

0x7e11,	// (0x0001ec44) vid4_indicators_pane_g1_ParamLimits

0x7eb5,	// (0x0001ece8) vid4_indicators_pane_g2_ParamLimits

0x7ec5,	// (0x0001ecf8) vid4_indicators_pane_g3_ParamLimits

0x7ed6,	// (0x0001ed09) vid4_indicators_pane_g4_ParamLimits

0xf905,	// (0x00026738) vid4_indicators_pane_g_ParamLimits

0x7ef2,	// (0x0001ed25) vid4_indicators_pane_t1_ParamLimits

0x8338,	// (0x0001f16b) vid4_progress_pane_g1_ParamLimits

0x8347,	// (0x0001f17a) vid4_progress_pane_g2_ParamLimits

0x8356,	// (0x0001f189) vid4_progress_pane_g3_ParamLimits

0x8365,	// (0x0001f198) vid4_progress_pane_g4_ParamLimits

0xfab6,	// (0x000268e9) vid4_progress_pane_g_ParamLimits

0x837d,	// (0x0001f1b0) vid4_progress_pane_t1_ParamLimits

0x8393,	// (0x0001f1c6) vid4_progress_pane_t2_ParamLimits

0x83a8,	// (0x0001f1db) vid4_progress_pane_t3_ParamLimits

0xfac1,	// (0x000268f4) vid4_progress_pane_t_ParamLimits

0x83bd,	// (0x0001f1f0) wait_bar_pane_cp07_ParamLimits

0xd111,	// (0x00023f44) main_cam6_set_pane_g2_ParamLimits

0xd111,	// (0x00023f44) main_cam6_set_pane_g2

0xd11d,	// (0x00023f50) main_cset6_listscroll_pane_ParamLimits

0xd11d,	// (0x00023f50) main_cset6_listscroll_pane

0xd146,	// (0x00023f79) main_cset6_slider_pane_ParamLimits

0xd146,	// (0x00023f79) main_cset6_slider_pane

0xd152,	// (0x00023f85) main_cset6_text2_pane_ParamLimits

0xd152,	// (0x00023f85) main_cset6_text2_pane

0x48fc,	// (0x0001b72f) main_cset6_text_pane

0x402a,	// (0x0001ae5d) main_cset_list_pane_copy1_ParamLimits

0x402a,	// (0x0001ae5d) main_cset_list_pane_copy1

0x403a,	// (0x0001ae6d) scroll_pane_cp028_copy1

0xd165,	// (0x00023f98) cset_list_set_pane_copy1

0xc6aa,	// (0x000234dd) aid_position_infowindow_above_copy1

0xc6b2,	// (0x000234e5) aid_position_infowindow_below_copy1

0xd174,	// (0x00023fa7) cset_list_set_pane_g1_copy1

0xd17c,	// (0x00023faf) cset_list_set_pane_g3_copy1_ParamLimits

0xd17c,	// (0x00023faf) cset_list_set_pane_g3_copy1

0xd18b,	// (0x00023fbe) cset_list_set_pane_t1_copy1_ParamLimits

0xd18b,	// (0x00023fbe) cset_list_set_pane_t1_copy1

0x0260,	// (0x00017093) list_highlight_pane_cp021_copy1_ParamLimits

0x0260,	// (0x00017093) list_highlight_pane_cp021_copy1

0x4904,	// (0x0001b737) cset6_slider_pane_ParamLimits

0x4904,	// (0x0001b737) cset6_slider_pane

0x4930,	// (0x0001b763) main_cset6_slider_pane_g1_ParamLimits

0x4930,	// (0x0001b763) main_cset6_slider_pane_g1

0xd1a0,	// (0x00023fd3) main_cset6_slider_pane_g2_ParamLimits

0xd1a0,	// (0x00023fd3) main_cset6_slider_pane_g2

0x404f,	// (0x0001ae82) main_cset6_slider_pane_g3_ParamLimits

0x404f,	// (0x0001ae82) main_cset6_slider_pane_g3

0xd1c8,	// (0x00023ffb) main_cset6_slider_pane_g4_ParamLimits

0xd1c8,	// (0x00023ffb) main_cset6_slider_pane_g4

0xd1d4,	// (0x00024007) main_cset6_slider_pane_g5_ParamLimits

0xd1d4,	// (0x00024007) main_cset6_slider_pane_g5

0x404f,	// (0x0001ae82) main_cset6_slider_pane_g7_ParamLimits

0x404f,	// (0x0001ae82) main_cset6_slider_pane_g7

0x405b,	// (0x0001ae8e) main_cset6_slider_pane_g8_ParamLimits

0x405b,	// (0x0001ae8e) main_cset6_slider_pane_g8

0xd1e0,	// (0x00024013) main_cset6_slider_pane_g9_ParamLimits

0xd1e0,	// (0x00024013) main_cset6_slider_pane_g9

0xd1ec,	// (0x0002401f) main_cset6_slider_pane_g10_ParamLimits

0xd1ec,	// (0x0002401f) main_cset6_slider_pane_g10

0xd1c8,	// (0x00023ffb) main_cset6_slider_pane_g11_ParamLimits

0xd1c8,	// (0x00023ffb) main_cset6_slider_pane_g11

0xd1f8,	// (0x0002402b) main_cset6_slider_pane_g12_ParamLimits

0xd1f8,	// (0x0002402b) main_cset6_slider_pane_g12

0xd204,	// (0x00024037) main_cset6_slider_pane_g13_ParamLimits

0xd204,	// (0x00024037) main_cset6_slider_pane_g13

0xd210,	// (0x00024043) main_cset6_slider_pane_g14_ParamLimits

0xd210,	// (0x00024043) main_cset6_slider_pane_g14

0xd21c,	// (0x0002404f) main_cset6_slider_pane_g15_ParamLimits

0xd21c,	// (0x0002404f) main_cset6_slider_pane_g15

0xd1d4,	// (0x00024007) main_cset6_slider_pane_g16_ParamLimits

0xd1d4,	// (0x00024007) main_cset6_slider_pane_g16

0xd234,	// (0x00024067) main_cset6_slider_pane_g17_ParamLimits

0xd234,	// (0x00024067) main_cset6_slider_pane_g17

0x0011,

0xfb8e,	// (0x000269c1) main_cset6_slider_pane_g_ParamLimits

0xfb8e,	// (0x000269c1) main_cset6_slider_pane_g

0x4958,	// (0x0001b78b) main_cset6_slider_pane_t1_ParamLimits

0x4958,	// (0x0001b78b) main_cset6_slider_pane_t1

0xd240,	// (0x00024073) main_cset6_slider_pane_t2_ParamLimits

0xd240,	// (0x00024073) main_cset6_slider_pane_t2

0x4999,	// (0x0001b7cc) main_cset6_slider_pane_t3_ParamLimits

0x4999,	// (0x0001b7cc) main_cset6_slider_pane_t3

0xd26b,	// (0x0002409e) main_cset6_slider_pane_t4_ParamLimits

0xd26b,	// (0x0002409e) main_cset6_slider_pane_t4

0x49c4,	// (0x0001b7f7) main_cset6_slider_pane_t5_ParamLimits

0x49c4,	// (0x0001b7f7) main_cset6_slider_pane_t5

0x49ef,	// (0x0001b822) main_cset6_slider_pane_t7_ParamLimits

0x49ef,	// (0x0001b822) main_cset6_slider_pane_t7

0xd296,	// (0x000240c9) main_cset6_slider_pane_t8_ParamLimits

0xd296,	// (0x000240c9) main_cset6_slider_pane_t8

0xd2ba,	// (0x000240ed) main_cset6_slider_pane_t9_ParamLimits

0xd2ba,	// (0x000240ed) main_cset6_slider_pane_t9

0xd2de,	// (0x00024111) main_cset6_slider_pane_t10_ParamLimits

0xd2de,	// (0x00024111) main_cset6_slider_pane_t10

0xd302,	// (0x00024135) main_cset6_slider_pane_t11_ParamLimits

0xd302,	// (0x00024135) main_cset6_slider_pane_t11

0x4a25,	// (0x0001b858) main_cset6_slider_pane_t14_ParamLimits

0x4a25,	// (0x0001b858) main_cset6_slider_pane_t14

0x4a5e,	// (0x0001b891) main_cset6_slider_pane_t15_ParamLimits

0x4a5e,	// (0x0001b891) main_cset6_slider_pane_t15

0x000b,

0xfbb3,	// (0x000269e6) main_cset6_slider_pane_t_ParamLimits

0xfbb3,	// (0x000269e6) main_cset6_slider_pane_t

0x4133,	// (0x0001af66) cset_slider_pane_g1_copy1

0x413c,	// (0x0001af6f) cset_slider_pane_g2_copy1

0x4145,	// (0x0001af78) cset_slider_pane_g3_copy1

0x020d,	// (0x00017040) bg_popup_sub_pane_cp011_copy1

0x4228,	// (0x0001b05b) main_cset_text_pane_g1_copy1

0x4230,	// (0x0001b063) main_cset_text_pane_t1_copy1

0x423e,	// (0x0001b071) main_cset_text_pane_t2_copy1

0x424c,	// (0x0001b07f) main_cset_text_pane_t3_copy1

0x425a,	// (0x0001b08d) main_cset_text_pane_t4_copy1

0x4268,	// (0x0001b09b) main_cset_text_pane_t5_copy1

0x4276,	// (0x0001b0a9) main_cset_text_pane_t6_copy1

0x4284,	// (0x0001b0b7) main_cset_text_pane_t7_copy1

0xd3f7,	// (0x0002422a) main_cset_text2_pane_t1_copy1

0x7359,	// (0x0001e18c) main_ncimui_pane

0x73b2,	// (0x0001e1e5) popup_query_ncimui_window_ParamLimits

0x73b2,	// (0x0001e1e5) popup_query_ncimui_window

0x33e4,	// (0x0001a217) field_cale_ev2_pane_g4_ParamLimits

0x33e4,	// (0x0001a217) field_cale_ev2_pane_g4

0xc003,	// (0x00022e36) cell_video_dialer_keypad_pane_g2_ParamLimits

0xc003,	// (0x00022e36) cell_video_dialer_keypad_pane_g2

0x0001,

0xf88d,	// (0x000266c0) cell_video_dialer_keypad_pane_g_ParamLimits

0xf88d,	// (0x000266c0) cell_video_dialer_keypad_pane_g

0xc01b,	// (0x00022e4e) cell_video_dialer_keypad_pane_t1

0x020d,	// (0x00017040) bg_popup_window_pane_cp012

0x13e4,	// (0x00018217) heading_pane_cp06

0x4ac1,	// (0x0001b8f4) ncim_query_content_pane

0x020d,	// (0x00017040) bg_popup_heading_pane_cp01

0x4ac9,	// (0x0001b8fc) ncim_heading_pane_t1

0x4ad7,	// (0x0001b90a) ncim_indicator_popup_pane

0x4ae9,	// (0x0001b91c) ncim_query_button_pane

0x4afd,	// (0x0001b930) ncim_query_content_pane_t1

0x4b0f,	// (0x0001b942) ncim_query_content_pane_t2

0x0005,

0xfbf7,	// (0x00026a2a) ncim_query_content_pane_t

0x4b49,	// (0x0001b97c) ncim_query_list_pane

0x4b5b,	// (0x0001b98e) ncim_query_popup_pane

0x4ad7,	// (0x0001b90a) ncim_indicator_popup_pane_ParamLimits

0xd538,	// (0x0002436b) ncim_query_content_pane_g1_ParamLimits

0xd538,	// (0x0002436b) ncim_query_content_pane_g1

0x4afd,	// (0x0001b930) ncim_query_content_pane_t1_ParamLimits

0x4b0f,	// (0x0001b942) ncim_query_content_pane_t2_ParamLimits

0xd544,	// (0x00024377) ncim_query_content_pane_t3_ParamLimits

0xd544,	// (0x00024377) ncim_query_content_pane_t3

0xd561,	// (0x00024394) ncim_query_content_pane_t4_ParamLimits

0xd561,	// (0x00024394) ncim_query_content_pane_t4

0xd57e,	// (0x000243b1) ncim_query_content_pane_t5_ParamLimits

0xd57e,	// (0x000243b1) ncim_query_content_pane_t5

0x4b21,	// (0x0001b954) ncim_query_content_pane_t6_ParamLimits

0x4b21,	// (0x0001b954) ncim_query_content_pane_t6

0xfbf7,	// (0x00026a2a) ncim_query_content_pane_t_ParamLimits

0x4b49,	// (0x0001b97c) ncim_query_list_pane_ParamLimits

0x4b5b,	// (0x0001b98e) ncim_query_popup_pane_ParamLimits

0x4b6f,	// (0x0001b9a2) wait_bar_pane_cp04

0x020d,	// (0x00017040) input_focus_pane_cp011

0x4b77,	// (0x0001b9aa) ncim_query_popup_pane_t1

0x4b85,	// (0x0001b9b8) ncim_list_query_list_pane_ParamLimits

0x4b85,	// (0x0001b9b8) ncim_list_query_list_pane

0x020d,	// (0x00017040) bg_button_pane_cp027

0x4b98,	// (0x0001b9cb) ncim_query_button_pane_g1

0x020d,	// (0x00017040) list_highlight_pane_cp012

0x4ba2,	// (0x0001b9d5) ncim_list_query_list_pane_g1

0x4baa,	// (0x0001b9dd) ncim_list_query_list_pane_t1

0x7e31,	// (0x0001ec64) cam4_indicators_pane_g3_ParamLimits

0x7e31,	// (0x0001ec64) cam4_indicators_pane_g3

0x7ee2,	// (0x0001ed15) vid4_indicators_pane_g5_ParamLimits

0x7ee2,	// (0x0001ed15) vid4_indicators_pane_g5

0x8371,	// (0x0001f1a4) vid4_progress_pane_g5_ParamLimits

0x8371,	// (0x0001f1a4) vid4_progress_pane_g5

0xd428,	// (0x0002425b) main_ncimui_pane_g1

0xd48e,	// (0x000242c1) ncimui_group_query_pane_ParamLimits

0xd48e,	// (0x000242c1) ncimui_group_query_pane

0xd4d6,	// (0x00024309) ncimui_list_pane_ParamLimits

0xd4d6,	// (0x00024309) ncimui_list_pane

0xd4fb,	// (0x0002432e) ncimui_text_pane_ParamLimits

0xd4fb,	// (0x0002432e) ncimui_text_pane

0xd59b,	// (0x000243ce) ncimui_text_pane_t1_ParamLimits

0xd59b,	// (0x000243ce) ncimui_text_pane_t1

0x4bc1,	// (0x0001b9f4) ncimui_list_single_graphic_pane_ParamLimits

0x4bc1,	// (0x0001b9f4) ncimui_list_single_graphic_pane

0xd5b9,	// (0x000243ec) ncimui_query_pane_ParamLimits

0xd5b9,	// (0x000243ec) ncimui_query_pane

0x020d,	// (0x00017040) list_highlight_pane_cp013

0x4bd1,	// (0x0001ba04) ncim_list_query_list_pane_t1_copy1

0x4bdf,	// (0x0001ba12) ncim_list_single_graphic_pane_g1

0x4be7,	// (0x0001ba1a) ncim_query_button_pane_cp01

0x4bf3,	// (0x0001ba26) ncim_query_entry_pane_ParamLimits

0x4bf3,	// (0x0001ba26) ncim_query_entry_pane

0x4c06,	// (0x0001ba39) ncimui_query_pane_g1

0x4c12,	// (0x0001ba45) ncimui_query_pane_t1_ParamLimits

0x4c12,	// (0x0001ba45) ncimui_query_pane_t1

0x0260,	// (0x00017093) input_focus_pane_cp012

0x4c2b,	// (0x0001ba5e) ncim_query_entry_pane_t1

0x09c5,	// (0x000177f8) main_im_pane_ParamLimits

0x7359,	// (0x0001e18c) main_mobtv_pane_ParamLimits

0x7359,	// (0x0001e18c) main_mobtv_pane

0xd1e0,	// (0x00024013) main_cset6_slider_pane_g18_ParamLimits

0xd1e0,	// (0x00024013) main_cset6_slider_pane_g18

0xd204,	// (0x00024037) main_cset6_slider_pane_g19_ParamLimits

0xd204,	// (0x00024037) main_cset6_slider_pane_g19

0x3ed1,	// (0x0001ad04) bg_main_mobtv_pane_ParamLimits

0x3ed1,	// (0x0001ad04) bg_main_mobtv_pane

0xd5c9,	// (0x000243fc) main_mobtv_info_pane

0xd5d2,	// (0x00024405) main_mobtv_loading_pane_ParamLimits

0xd5d2,	// (0x00024405) main_mobtv_loading_pane

0x4c4b,	// (0x0001ba7e) main_mobtv_pg_channel_list_pane

0x4c55,	// (0x0001ba88) main_mobtv_pg_hdr_pane

0xd5df,	// (0x00024412) main_mobtv_programe_curr_pane_ParamLimits

0xd5df,	// (0x00024412) main_mobtv_programe_curr_pane

0xd5ec,	// (0x0002441f) main_mobtv_programe_next_pane_ParamLimits

0xd5ec,	// (0x0002441f) main_mobtv_programe_next_pane

0x4c5e,	// (0x0001ba91) popup_mobtv_noti_window

0x3114,	// (0x00019f47) main_tv_pg_hdr_pane_g1

0x4c66,	// (0x0001ba99) main_tv_pg_hdr_pane_g2

0x4c6e,	// (0x0001baa1) main_tv_pg_hdr_pane_g3

0x4c76,	// (0x0001baa9) main_tv_pg_hdr_pane_g4

0x4c7e,	// (0x0001bab1) main_tv_pg_hdr_pane_g5

0x4c86,	// (0x0001bab9) main_tv_pg_hdr_pane_g6

0x4c8e,	// (0x0001bac1) main_tv_pg_hdr_pane_g7

0x4c96,	// (0x0001bac9) main_tv_pg_hdr_pane_g8

0x4c9e,	// (0x0001bad1) main_tv_pg_hdr_pane_g9

0x4ca6,	// (0x0001bad9) main_tv_pg_hdr_pane_g10

0x4cb0,	// (0x0001bae3) main_tv_pg_hdr_pane_g11

0x000a,

0xfc04,	// (0x00026a37) main_tv_pg_hdr_pane_g

0x4cba,	// (0x0001baed) main_tv_pg_hdr_pane_t1

0x4cc8,	// (0x0001bafb) main_tv_pg_hdr_pane_t2

0x4cd6,	// (0x0001bb09) main_tv_pg_hdr_pane_t3

0x4ce4,	// (0x0001bb17) main_tv_pg_hdr_pane_t4

0x4cf2,	// (0x0001bb25) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1b,	// (0x00026a4e) main_tv_pg_hdr_pane_t

0x4d00,	// (0x0001bb33) single_mobtv_pg_channel_pane_ParamLimits

0x4d00,	// (0x0001bb33) single_mobtv_pg_channel_pane

0x4d12,	// (0x0001bb45) single_mobtv_pg_channel_table_pane

0x4d1b,	// (0x0001bb4e) single_mobtv_pg_channel_thumb_pane

0x4d24,	// (0x0001bb57) single_tv_pg_channel_pane_g1

0x4d2d,	// (0x0001bb60) single_tv_pg_channel_pane_g2

0x0001,

0xfc26,	// (0x00026a59) single_tv_pg_channel_pane_g

0x3343,	// (0x0001a176) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x3343,	// (0x0001a176) bg_single_mobtv_pg_channel_thumb_pane

0x4d36,	// (0x0001bb69) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4d36,	// (0x0001bb69) single_mobtv_pg_channel_thumb_pane_g1

0x4d44,	// (0x0001bb77) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4d44,	// (0x0001bb77) single_mobtv_pg_channel_thumb_pane_g2

0x4d50,	// (0x0001bb83) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x4d50,	// (0x0001bb83) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2b,	// (0x00026a5e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2b,	// (0x00026a5e) single_mobtv_pg_channel_thumb_pane_g

0x4d5c,	// (0x0001bb8f) single_mobtv_pg_channel_thumb_pane_t1

0x4d6a,	// (0x0001bb9d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc32,	// (0x00026a65) single_mobtv_pg_channel_thumb_pane_t

0x3114,	// (0x00019f47) bg_single_mobtv_pg_channel_table_pane_g1

0x3114,	// (0x00019f47) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d4,	// (0x00026507) bg_single_mobtv_pg_channel_table_pane_g

0x4d78,	// (0x0001bbab) single_mobtv_pg_channel_table_pane_t1

0x4d86,	// (0x0001bbb9) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc37,	// (0x00026a6a) single_mobtv_pg_channel_table_pane_t

0xd601,	// (0x00024434) main_mobtv_info_pane_g1_ParamLimits

0xd601,	// (0x00024434) main_mobtv_info_pane_g1

0xd61d,	// (0x00024450) main_mobtv_info_pane_t1_ParamLimits

0xd61d,	// (0x00024450) main_mobtv_info_pane_t1

0xd683,	// (0x000244b6) main_mobtv_info_pane_t2_ParamLimits

0xd683,	// (0x000244b6) main_mobtv_info_pane_t2

0x0002,

0xfc41,	// (0x00026a74) main_mobtv_info_pane_t_ParamLimits

0xfc41,	// (0x00026a74) main_mobtv_info_pane_t

0xd706,	// (0x00024539) wait_bar_pane_cp05

0xd716,	// (0x00024549) main_mobtv_loading_pane_g1_ParamLimits

0xd716,	// (0x00024549) main_mobtv_loading_pane_g1

0xd722,	// (0x00024555) main_mobtv_loading_pane_g2_ParamLimits

0xd722,	// (0x00024555) main_mobtv_loading_pane_g2

0xd72e,	// (0x00024561) main_mobtv_loading_pane_g3_ParamLimits

0xd72e,	// (0x00024561) main_mobtv_loading_pane_g3

0x0002,

0xfc48,	// (0x00026a7b) main_mobtv_loading_pane_g_ParamLimits

0xfc48,	// (0x00026a7b) main_mobtv_loading_pane_g

0x4d94,	// (0x0001bbc7) main_mobtv_loading_pane_t1_ParamLimits

0x4d94,	// (0x0001bbc7) main_mobtv_loading_pane_t1

0x4dac,	// (0x0001bbdf) main_mobtv_loading_pane_t2_ParamLimits

0x4dac,	// (0x0001bbdf) main_mobtv_loading_pane_t2

0x0001,

0xfc4f,	// (0x00026a82) main_mobtv_loading_pane_t_ParamLimits

0xfc4f,	// (0x00026a82) main_mobtv_loading_pane_t

0xd73a,	// (0x0002456d) wait_bar_pane_cp06_ParamLimits

0xd73a,	// (0x0002456d) wait_bar_pane_cp06

0x4dd0,	// (0x0001bc03) main_mobtv_programe_curr_pane_t1

0x4dde,	// (0x0001bc11) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc54,	// (0x00026a87) main_mobtv_programe_curr_pane_t

0x4dec,	// (0x0001bc1f) main_mobtv_programe_next_pane_t1

0x4dfa,	// (0x0001bc2d) main_mobtv_programe_next_pane_t2

0x4e08,	// (0x0001bc3b) main_mobtv_programe_next_pane_t3

0x0002,

0xfc59,	// (0x00026a8c) main_mobtv_programe_next_pane_t

0x020d,	// (0x00017040) bg_popup_mobtv_noti_window_pane

0x4e16,	// (0x0001bc49) popup_mobtv_noti_window_g1

0x4e1e,	// (0x0001bc51) popup_mobtv_noti_window_t1

0x4e2c,	// (0x0001bc5f) popup_mobtv_noti_window_t2

0x0001,

0xfc60,	// (0x00026a93) popup_mobtv_noti_window_t

0x3114,	// (0x00019f47) bg_popup_mobtv_noti_window_pane_g1

0x6e4e,	// (0x0001dc81) sc_clock_pane

0x6e4e,	// (0x0001dc81) main_fs_bigclock_pane

0xceac,	// (0x00023cdf) blid2_tripm_pane_t4_ParamLimits

0xceac,	// (0x00023cdf) blid2_tripm_pane_t4

0xd746,	// (0x00024579) sc_clock_pane_g1_ParamLimits

0xd746,	// (0x00024579) sc_clock_pane_g1

0xd754,	// (0x00024587) sc_clock_pane_t1_ParamLimits

0xd754,	// (0x00024587) sc_clock_pane_t1

0xd767,	// (0x0002459a) sc_clock_pane_t2_ParamLimits

0xd767,	// (0x0002459a) sc_clock_pane_t2

0xd779,	// (0x000245ac) sc_clock_pane_t3_ParamLimits

0xd779,	// (0x000245ac) sc_clock_pane_t3

0x0004,

0xfc65,	// (0x00026a98) sc_clock_pane_t_ParamLimits

0xfc65,	// (0x00026a98) sc_clock_pane_t

0xe6c6,	// (0x000254f9) main_fs_bigclock_indicator_pane_ParamLimits

0xe6c6,	// (0x000254f9) main_fs_bigclock_indicator_pane

0xd7f4,	// (0x00024627) main_fs_bigclock_pane_g1_ParamLimits

0xd7f4,	// (0x00024627) main_fs_bigclock_pane_g1

0xe6d2,	// (0x00025505) main_fs_bigclock_pane_t1_ParamLimits

0xe6d2,	// (0x00025505) main_fs_bigclock_pane_t1

0xe6e4,	// (0x00025517) main_fs_bigclock_pane_t2_ParamLimits

0xe6e4,	// (0x00025517) main_fs_bigclock_pane_t2

0xe6f6,	// (0x00025529) main_fs_bigclock_pane_t3_ParamLimits

0xe6f6,	// (0x00025529) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x00026ca1) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x00026ca1) main_fs_bigclock_pane_t

0x58c6,	// (0x0001c6f9) main_fs_bigclock_indicator_pane_g1

0x4af1,	// (0x0001b924) ncim_query_content_pane_g2_ParamLimits

0x4af1,	// (0x0001b924) ncim_query_content_pane_g2

0x0001,

0xfbf2,	// (0x00026a25) ncim_query_content_pane_g_ParamLimits

0xfbf2,	// (0x00026a25) ncim_query_content_pane_g

0xd78b,	// (0x000245be) sc_clock_pane_t4_ParamLimits

0xd78b,	// (0x000245be) sc_clock_pane_t4

0x7359,	// (0x0001e18c) main_radioblah_pane

0x7cf4,	// (0x0001eb27) cell_call4_button_pane_t1_copy1_ParamLimits

0x7cf4,	// (0x0001eb27) cell_call4_button_pane_t1_copy1

0xd440,	// (0x00024273) main_ncimui_pane_t1_ParamLimits

0xd440,	// (0x00024273) main_ncimui_pane_t1

0xd45a,	// (0x0002428d) main_ncimui_pane_t2_ParamLimits

0xd45a,	// (0x0002428d) main_ncimui_pane_t2

0x0002,

0xfbeb,	// (0x00026a1e) main_ncimui_pane_t_ParamLimits

0xfbeb,	// (0x00026a1e) main_ncimui_pane_t

0x4f6d,	// (0x0001bda0) main_radioblah_anim_pane_ParamLimits

0x4f6d,	// (0x0001bda0) main_radioblah_anim_pane

0x4f7e,	// (0x0001bdb1) main_radioblah_info_pane_ParamLimits

0x4f7e,	// (0x0001bdb1) main_radioblah_info_pane

0x4f92,	// (0x0001bdc5) main_radioblah_pane_t1_ParamLimits

0x4f92,	// (0x0001bdc5) main_radioblah_pane_t1

0x4fae,	// (0x0001bde1) main_radioblah_pane_t2_ParamLimits

0x4fae,	// (0x0001bde1) main_radioblah_pane_t2

0x0003,

0xfc86,	// (0x00026ab9) main_radioblah_pane_t_ParamLimits

0xfc86,	// (0x00026ab9) main_radioblah_pane_t

0xd83c,	// (0x0002466f) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd83c,	// (0x0002466f) main_radioblah_rocker_ctrl_pane

0x4ff6,	// (0x0001be29) main_radioblah_info_pane_t1_ParamLimits

0x4ff6,	// (0x0001be29) main_radioblah_info_pane_t1

0xd881,	// (0x000246b4) main_radioblah_info_pane_t2_ParamLimits

0xd881,	// (0x000246b4) main_radioblah_info_pane_t2

0x0003,

0xfc8f,	// (0x00026ac2) main_radioblah_info_pane_t_ParamLimits

0xfc8f,	// (0x00026ac2) main_radioblah_info_pane_t

0x3114,	// (0x00019f47) main_radioblah_rocker_ctrl_pane_g1

0xd929,	// (0x0002475c) main_radioblah_rocker_ctrl_pane_g2

0xd931,	// (0x00024764) main_radioblah_rocker_ctrl_pane_g3

0xd939,	// (0x0002476c) main_radioblah_rocker_ctrl_pane_g4

0xd941,	// (0x00024774) main_radioblah_rocker_ctrl_pane_g5

0xd949,	// (0x0002477c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc98,	// (0x00026acb) main_radioblah_rocker_ctrl_pane_g

0xd3f7,	// (0x0002422a) main_cset_text2_pane_t1_copy1_ParamLimits

0x7d77,	// (0x0001ebaa) cam4_image_uncrop_qvga_pane

0x7e75,	// (0x0001eca8) vid4_image_uncrop_qcif_pane

0x8400,	// (0x0001f233) cam6_image_uncrop_qvga_pane_ParamLimits

0x8400,	// (0x0001f233) cam6_image_uncrop_qvga_pane

0x47e2,	// (0x0001b615) vid6_image_uncrop_qcif_pane_ParamLimits

0x47e2,	// (0x0001b615) vid6_image_uncrop_qcif_pane

0x020d,	// (0x00017040) bg_popup_preview_window_pane_cp03

0x4a97,	// (0x0001b8ca) list_cset_text2_pane

0x4a9f,	// (0x0001b8d2) main_cset6_text2_pane_g1

0x4aa7,	// (0x0001b8da) main_cset6_text2_pane_t1

0x5259,	// (0x0001c08c) list_cset_text2_pane_t1_ParamLimits

0x5259,	// (0x0001c08c) list_cset_text2_pane_t1

0x7359,	// (0x0001e18c) main_radioblah_pane_ParamLimits

0xd6f4,	// (0x00024527) main_mobtv_info_pane_t3_ParamLimits

0xd6f4,	// (0x00024527) main_mobtv_info_pane_t3

0xd82a,	// (0x0002465d) main_radioblah_pane_g1

0xd855,	// (0x00024688) main_radioblah_info_pane_g1

0xd8d0,	// (0x00024703) main_radioblah_info_pane_t3_ParamLimits

0xd8d0,	// (0x00024703) main_radioblah_info_pane_t3

0x9e0e,	// (0x00020c41) highlight_cell_cale_month_pane_ParamLimits

0x9e0e,	// (0x00020c41) highlight_cell_cale_month_pane

0x6e4e,	// (0x0001dc81) main_phob_fisheye_pane

0x3493,	// (0x0001a2c6) scroll_pane_cp0031_ParamLimits

0x3493,	// (0x0001a2c6) scroll_pane_cp0031

0x48ec,	// (0x0001b71f) wait_bar_pane_cp08_ParamLimits

0xd165,	// (0x00023f98) cset_list_set_pane_copy1_ParamLimits

0x5030,	// (0x0001be63) highlight_cell_cale_month_pane_g1

0xd951,	// (0x00024784) highlight_cell_cale_month_pane_t1

0x5038,	// (0x0001be6b) list_gen_pane_cp01

0x403a,	// (0x0001ae6d) scroll_pane_01

0x45ac,	// (0x0001b3df) list_single_double_fisheye_pane

0xd95f,	// (0x00024792) list_double_fisheye_pane_g1_ParamLimits

0xd95f,	// (0x00024792) list_double_fisheye_pane_g1

0xd96b,	// (0x0002479e) list_double_fisheye_pane_g2_ParamLimits

0xd96b,	// (0x0002479e) list_double_fisheye_pane_g2

0xd97f,	// (0x000247b2) list_double_fisheye_pane_g3_ParamLimits

0xd97f,	// (0x000247b2) list_double_fisheye_pane_g3

0x0004,

0xfca5,	// (0x00026ad8) list_double_fisheye_pane_g_ParamLimits

0xfca5,	// (0x00026ad8) list_double_fisheye_pane_g

0xd9a8,	// (0x000247db) list_double_fisheye_pane_t1_ParamLimits

0xd9a8,	// (0x000247db) list_double_fisheye_pane_t1

0xd9c3,	// (0x000247f6) list_double_fisheye_pane_t2_ParamLimits

0xd9c3,	// (0x000247f6) list_double_fisheye_pane_t2

0x0001,

0xfcb0,	// (0x00026ae3) list_double_fisheye_pane_t_ParamLimits

0xfcb0,	// (0x00026ae3) list_double_fisheye_pane_t

0x6e4e,	// (0x0001dc81) main_call5_pane

0xd7b1,	// (0x000245e4) sc_swipe_pane_ParamLimits

0xd7b1,	// (0x000245e4) sc_swipe_pane

0xd9f1,	// (0x00024824) call5_image_pane_ParamLimits

0xd9f1,	// (0x00024824) call5_image_pane

0xd9fd,	// (0x00024830) call5_swipe_1_pane_ParamLimits

0xd9fd,	// (0x00024830) call5_swipe_1_pane

0xda09,	// (0x0002483c) call5_swipe_2_pane_ParamLimits

0xda09,	// (0x0002483c) call5_swipe_2_pane

0xda21,	// (0x00024854) popup_call5_audio_first_window_ParamLimits

0xda21,	// (0x00024854) popup_call5_audio_first_window

0x3343,	// (0x0001a176) call5_swipe_1_pane_g1_ParamLimits

0x3343,	// (0x0001a176) call5_swipe_1_pane_g1

0x5041,	// (0x0001be74) call5_swipe_1_pane_g2_ParamLimits

0x5041,	// (0x0001be74) call5_swipe_1_pane_g2

0x0001,

0xfcb5,	// (0x00026ae8) call5_swipe_1_pane_g_ParamLimits

0xfcb5,	// (0x00026ae8) call5_swipe_1_pane_g

0x504d,	// (0x0001be80) call5_swipe_1_pane_t1_ParamLimits

0x504d,	// (0x0001be80) call5_swipe_1_pane_t1

0x3343,	// (0x0001a176) call5_swipe_2_pane_g1_ParamLimits

0x3343,	// (0x0001a176) call5_swipe_2_pane_g1

0x5062,	// (0x0001be95) call5_swipe_2_pane_g2_ParamLimits

0x5062,	// (0x0001be95) call5_swipe_2_pane_g2

0x0001,

0xfcba,	// (0x00026aed) call5_swipe_2_pane_g_ParamLimits

0xfcba,	// (0x00026aed) call5_swipe_2_pane_g

0x506e,	// (0x0001bea1) call5_swipe_2_pane_t1_ParamLimits

0x506e,	// (0x0001bea1) call5_swipe_2_pane_t1

0x5083,	// (0x0001beb6) sc_swipe_pane_g1_ParamLimits

0x5083,	// (0x0001beb6) sc_swipe_pane_g1

0x5090,	// (0x0001bec3) sc_swipe_pane_g2_ParamLimits

0x5090,	// (0x0001bec3) sc_swipe_pane_g2

0x0001,

0xfcbf,	// (0x00026af2) sc_swipe_pane_g_ParamLimits

0xfcbf,	// (0x00026af2) sc_swipe_pane_g

0x509c,	// (0x0001becf) sc_swipe_pane_t1_ParamLimits

0x509c,	// (0x0001becf) sc_swipe_pane_t1

0x6e4e,	// (0x0001dc81) main_cmail_launcher_pane

0xda2d,	// (0x00024860) aid_size_cell_cmail_l_ParamLimits

0xda2d,	// (0x00024860) aid_size_cell_cmail_l

0xda3d,	// (0x00024870) grid_cmail_l_pane_ParamLimits

0xda3d,	// (0x00024870) grid_cmail_l_pane

0xda49,	// (0x0002487c) cell_cmail_l_pane_ParamLimits

0xda49,	// (0x0002487c) cell_cmail_l_pane

0xda5b,	// (0x0002488e) cell_cmail_l_pane_g1_ParamLimits

0xda5b,	// (0x0002488e) cell_cmail_l_pane_g1

0xda6b,	// (0x0002489e) cell_cmail_l_pane_t1_ParamLimits

0xda6b,	// (0x0002489e) cell_cmail_l_pane_t1

0xda81,	// (0x000248b4) cell_cmail_l_pane_t2_ParamLimits

0xda81,	// (0x000248b4) cell_cmail_l_pane_t2

0x0001,

0xfcc4,	// (0x00026af7) cell_cmail_l_pane_t_ParamLimits

0xfcc4,	// (0x00026af7) cell_cmail_l_pane_t

0x0260,	// (0x00017093) grid_highlight_pane_cp018_ParamLimits

0x0260,	// (0x00017093) grid_highlight_pane_cp018

0x6cf0,	// (0x0001db23) main2_pane_ParamLimits

0x6cf0,	// (0x0001db23) main2_pane

0x0ac8,	// (0x000178fb) popup_sp_fs_action_menu_bg_pane_g1

0x0ad0,	// (0x00017903) popup_sp_fs_action_menu_bg_pane_g2

0x0ad8,	// (0x0001790b) popup_sp_fs_action_menu_bg_pane_g3

0x0ae0,	// (0x00017913) popup_sp_fs_action_menu_bg_pane_g4

0x0ae8,	// (0x0001791b) popup_sp_fs_action_menu_bg_pane_g5

0x0af0,	// (0x00017923) popup_sp_fs_action_menu_bg_pane_g6

0x0af8,	// (0x0001792b) popup_sp_fs_action_menu_bg_pane_g7

0x0b00,	// (0x00017933) popup_sp_fs_action_menu_bg_pane_g8

0x0b08,	// (0x0001793b) popup_sp_fs_action_menu_bg_pane_g9

0x0b10,	// (0x00017943) popup_sp_fs_action_menu_bg_pane_g10

0x0b10,	// (0x00017943) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x00025fa2) popup_sp_fs_action_menu_bg_pane_g

0x8ecb,	// (0x0001fcfe) list_medium_line_x2_t3_g3_g1_ParamLimits

0x8ecb,	// (0x0001fcfe) list_medium_line_x2_t3_g3_g1

0x8ed7,	// (0x0001fd0a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x8ed7,	// (0x0001fd0a) list_medium_line_x2_t3_g3_g2

0x8ee3,	// (0x0001fd16) list_medium_line_x2_t3_g3_g3_ParamLimits

0x8ee3,	// (0x0001fd16) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x00026050) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x00026050) list_medium_line_x2_t3_g3_g

0x8eef,	// (0x0001fd22) list_medium_line_x2_t3_g3_t1_ParamLimits

0x8eef,	// (0x0001fd22) list_medium_line_x2_t3_g3_t1

0x8f04,	// (0x0001fd37) list_medium_line_x2_t3_g3_t2_ParamLimits

0x8f04,	// (0x0001fd37) list_medium_line_x2_t3_g3_t2

0x8f16,	// (0x0001fd49) list_medium_line_x2_t3_g3_t3_ParamLimits

0x8f16,	// (0x0001fd49) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x00026057) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x00026057) list_medium_line_x2_t3_g3_t

0x8ecb,	// (0x0001fcfe) list_medium_line_x2_t3_g2_g1_ParamLimits

0x8ecb,	// (0x0001fcfe) list_medium_line_x2_t3_g2_g1

0x8ee3,	// (0x0001fd16) list_medium_line_x2_t3_g2_g2_ParamLimits

0x8ee3,	// (0x0001fd16) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0002605e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0002605e) list_medium_line_x2_t3_g2_g

0x8f2b,	// (0x0001fd5e) list_medium_line_x2_t3_g2_t1_ParamLimits

0x8f2b,	// (0x0001fd5e) list_medium_line_x2_t3_g2_t1

0x8f41,	// (0x0001fd74) list_medium_line_x2_t3_g2_t2_ParamLimits

0x8f41,	// (0x0001fd74) list_medium_line_x2_t3_g2_t2

0x8f16,	// (0x0001fd49) list_medium_line_x2_t3_g2_t3_ParamLimits

0x8f16,	// (0x0001fd49) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x00026063) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x00026063) list_medium_line_x2_t3_g2_t

0x8ecb,	// (0x0001fcfe) list_medium_line_x2_t4_g4_g1_ParamLimits

0x8ecb,	// (0x0001fcfe) list_medium_line_x2_t4_g4_g1

0x8f53,	// (0x0001fd86) list_medium_line_x2_t4_g4_g2_ParamLimits

0x8f53,	// (0x0001fd86) list_medium_line_x2_t4_g4_g2

0x8ed7,	// (0x0001fd0a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x8ed7,	// (0x0001fd0a) list_medium_line_x2_t4_g4_g3

0x8f5f,	// (0x0001fd92) list_medium_line_x2_t4_g4_g4_ParamLimits

0x8f5f,	// (0x0001fd92) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0002606a) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0002606a) list_medium_line_x2_t4_g4_g

0x8f6b,	// (0x0001fd9e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x8f6b,	// (0x0001fd9e) list_medium_line_x2_t4_g4_t1

0x8f85,	// (0x0001fdb8) list_medium_line_x2_t4_g4_t2_ParamLimits

0x8f85,	// (0x0001fdb8) list_medium_line_x2_t4_g4_t2

0x8f9a,	// (0x0001fdcd) list_medium_line_x2_t4_g4_t3_ParamLimits

0x8f9a,	// (0x0001fdcd) list_medium_line_x2_t4_g4_t3

0x8faf,	// (0x0001fde2) list_medium_line_x2_t4_g4_t4_ParamLimits

0x8faf,	// (0x0001fde2) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x00026073) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x00026073) list_medium_line_x2_t4_g4_t

0x8ecb,	// (0x0001fcfe) list_medium_line_x2_t2_g4_g1_ParamLimits

0x8ecb,	// (0x0001fcfe) list_medium_line_x2_t2_g4_g1

0x8f53,	// (0x0001fd86) list_medium_line_x2_t2_g4_g2_ParamLimits

0x8f53,	// (0x0001fd86) list_medium_line_x2_t2_g4_g2

0x8ed7,	// (0x0001fd0a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x8ed7,	// (0x0001fd0a) list_medium_line_x2_t2_g4_g3

0x8ee3,	// (0x0001fd16) list_medium_line_x2_t2_g4_g4_ParamLimits

0x8ee3,	// (0x0001fd16) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x000260da) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x000260da) list_medium_line_x2_t2_g4_g

0x9e34,	// (0x00020c67) list_medium_line_x2_t2_g4_t1_ParamLimits

0x9e34,	// (0x00020c67) list_medium_line_x2_t2_g4_t1

0x8f16,	// (0x0001fd49) list_medium_line_x2_t2_g4_t2_ParamLimits

0x8f16,	// (0x0001fd49) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x000260e3) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x000260e3) list_medium_line_x2_t2_g4_t

0x8ecb,	// (0x0001fcfe) list_medium_line_x2_t2_g3_g1_ParamLimits

0x8ecb,	// (0x0001fcfe) list_medium_line_x2_t2_g3_g1

0x8ed7,	// (0x0001fd0a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x8ed7,	// (0x0001fd0a) list_medium_line_x2_t2_g3_g2

0x8ee3,	// (0x0001fd16) list_medium_line_x2_t2_g3_g3_ParamLimits

0x8ee3,	// (0x0001fd16) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x00026050) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x00026050) list_medium_line_x2_t2_g3_g

0x9e49,	// (0x00020c7c) list_medium_line_x2_t2_g3_t1_ParamLimits

0x9e49,	// (0x00020c7c) list_medium_line_x2_t2_g3_t1

0x8f16,	// (0x0001fd49) list_medium_line_x2_t2_g3_t2_ParamLimits

0x8f16,	// (0x0001fd49) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x000260e8) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x000260e8) list_medium_line_x2_t2_g3_t

0x9f7c,	// (0x00020daf) main_sp_fs_list_pane_ParamLimits

0x9f7c,	// (0x00020daf) main_sp_fs_list_pane

0x9f89,	// (0x00020dbc) sp_fs_scroll_pane_ParamLimits

0x9f89,	// (0x00020dbc) sp_fs_scroll_pane

0x9f96,	// (0x00020dc9) list_medium_line_x2_t3_t1

0x9fa6,	// (0x00020dd9) list_medium_line_x2_t3_t2

0x9fb4,	// (0x00020de7) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x00026133) list_medium_line_x2_t3_t

0x9fc2,	// (0x00020df5) list_medium_line_x3_t4_t1

0x9fd2,	// (0x00020e05) list_medium_line_x3_t4_t2

0x9fe0,	// (0x00020e13) list_medium_line_x3_t4_t3

0x9fee,	// (0x00020e21) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0002613a) list_medium_line_x3_t4_t

0x9ffc,	// (0x00020e2f) list_medium_line_x4_t5_t1

0xa00c,	// (0x00020e3f) list_medium_line_x4_t5_t2

0x9fe0,	// (0x00020e13) list_medium_line_x4_t5_t3

0xa01a,	// (0x00020e4d) list_medium_line_x4_t5_t4

0x9fee,	// (0x00020e21) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x00026143) list_medium_line_x4_t5_t

0x8ecb,	// (0x0001fcfe) list_medium_line_t4_g4_g1_ParamLimits

0x8ecb,	// (0x0001fcfe) list_medium_line_t4_g4_g1

0x8f5f,	// (0x0001fd92) list_medium_line_t4_g4_g2_ParamLimits

0x8f5f,	// (0x0001fd92) list_medium_line_t4_g4_g2

0xa028,	// (0x00020e5b) list_medium_line_t4_g4_g3_ParamLimits

0xa028,	// (0x00020e5b) list_medium_line_t4_g4_g3

0x8ee3,	// (0x0001fd16) list_medium_line_t4_g4_g4_ParamLimits

0x8ee3,	// (0x0001fd16) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0002614e) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0002614e) list_medium_line_t4_g4_g

0xa034,	// (0x00020e67) list_medium_line_t4_g4_t1_ParamLimits

0xa034,	// (0x00020e67) list_medium_line_t4_g4_t1

0xa049,	// (0x00020e7c) list_medium_line_t4_g4_t2_ParamLimits

0xa049,	// (0x00020e7c) list_medium_line_t4_g4_t2

0xa05f,	// (0x00020e92) list_medium_line_t4_g4_t3_ParamLimits

0xa05f,	// (0x00020e92) list_medium_line_t4_g4_t3

0xa075,	// (0x00020ea8) list_medium_line_t4_g4_t4_ParamLimits

0xa075,	// (0x00020ea8) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x00026157) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x00026157) list_medium_line_t4_g4_t

0xa129,	// (0x00020f5c) chi_dic_find_pane_g1

0x7375,	// (0x0001e1a8) main_tport_pane

0x417f,	// (0x0001afb2) list_medium_line_plain_t1

0x41d1,	// (0x0001b004) list_medium_line_t2_g2_g1_ParamLimits

0x41d1,	// (0x0001b004) list_medium_line_t2_g2_g1

0x41dd,	// (0x0001b010) list_medium_line_t2_g2_g2_ParamLimits

0x41dd,	// (0x0001b010) list_medium_line_t2_g2_g2

0x0001,

0xf9fc,	// (0x0002682f) list_medium_line_t2_g2_g_ParamLimits

0xf9fc,	// (0x0002682f) list_medium_line_t2_g2_g

0xc797,	// (0x000235ca) list_medium_line_t2_g2_t1_ParamLimits

0xc797,	// (0x000235ca) list_medium_line_t2_g2_t1

0xc7ae,	// (0x000235e1) list_medium_line_t2_g2_t2_ParamLimits

0xc7ae,	// (0x000235e1) list_medium_line_t2_g2_t2

0x0001,

0xfa01,	// (0x00026834) list_medium_line_t2_g2_t_ParamLimits

0xfa01,	// (0x00026834) list_medium_line_t2_g2_t

0x4581,	// (0x0001b3b4) aid_sp_fs_list_icon_a_sm

0x4589,	// (0x0001b3bc) aid_sp_fs_list_icon_d

0x4591,	// (0x0001b3c4) aid_sp_fs_text_primary

0x459a,	// (0x0001b3cd) aid_sp_fs_text_secondary

0x45a3,	// (0x0001b3d6) list_medium_line

0x45a3,	// (0x0001b3d6) list_medium_line_g2

0x45a3,	// (0x0001b3d6) list_medium_line_g3

0x45a3,	// (0x0001b3d6) list_medium_line_plain

0x45a3,	// (0x0001b3d6) list_medium_line_plain_t2

0x45a3,	// (0x0001b3d6) list_medium_line_plain_t3

0x45a3,	// (0x0001b3d6) list_medium_line_right_icon

0x45a3,	// (0x0001b3d6) list_medium_line_right_iconx2

0x45a3,	// (0x0001b3d6) list_medium_line_t2

0x45a3,	// (0x0001b3d6) list_medium_line_t2_g2

0x45a3,	// (0x0001b3d6) list_medium_line_t2_g3

0x45a3,	// (0x0001b3d6) list_medium_line_t2_right_icon

0x45a3,	// (0x0001b3d6) list_medium_line_t2_right_iconx2

0x45a3,	// (0x0001b3d6) list_medium_line_t3

0x45a3,	// (0x0001b3d6) list_medium_line_t3_g2

0x45a3,	// (0x0001b3d6) list_medium_line_t3_g3

0x45a3,	// (0x0001b3d6) list_medium_line_t3_right_iconx2

0xccd6,	// (0x00023b09) list_medium_line_t4_g4

0xccdf,	// (0x00023b12) list_medium_line_x2

0xccdf,	// (0x00023b12) list_medium_line_x2_t2_g2

0xccdf,	// (0x00023b12) list_medium_line_x2_t2_g3

0xccdf,	// (0x00023b12) list_medium_line_x2_t2_g4

0xccdf,	// (0x00023b12) list_medium_line_x2_t3

0xccdf,	// (0x00023b12) list_medium_line_x2_t3_g2

0xccdf,	// (0x00023b12) list_medium_line_x2_t3_g3

0xccdf,	// (0x00023b12) list_medium_line_x2_t3_g4

0xccdf,	// (0x00023b12) list_medium_line_x2_t4_g2

0xccdf,	// (0x00023b12) list_medium_line_x2_t4_g4

0xcce8,	// (0x00023b1b) list_medium_line_x3

0xcce8,	// (0x00023b1b) list_medium_line_x3_t4

0xcce8,	// (0x00023b1b) list_medium_line_x3_t4_g4

0xccd6,	// (0x00023b09) list_medium_line_x4_t4

0xccd6,	// (0x00023b09) list_medium_line_x4_t4_g7

0xccd6,	// (0x00023b09) list_medium_line_x4_t5

0xccf1,	// (0x00023b24) list_single_fs_dyc_pane_ParamLimits

0xccf1,	// (0x00023b24) list_single_fs_dyc_pane

0x8ecb,	// (0x0001fcfe) list_medium_line_x4_t4_g7_g1_ParamLimits

0x8ecb,	// (0x0001fcfe) list_medium_line_x4_t4_g7_g1

0xd326,	// (0x00024159) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd326,	// (0x00024159) list_medium_line_x4_t4_g7_g2

0xd332,	// (0x00024165) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd332,	// (0x00024165) list_medium_line_x4_t4_g7_g3

0xd341,	// (0x00024174) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd341,	// (0x00024174) list_medium_line_x4_t4_g7_g4

0xd34d,	// (0x00024180) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd34d,	// (0x00024180) list_medium_line_x4_t4_g7_g5

0xd35c,	// (0x0002418f) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd35c,	// (0x0002418f) list_medium_line_x4_t4_g7_g6

0xd36b,	// (0x0002419e) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd36b,	// (0x0002419e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbcc,	// (0x000269ff) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbcc,	// (0x000269ff) list_medium_line_x4_t4_g7_g

0xd377,	// (0x000241aa) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd377,	// (0x000241aa) list_medium_line_x4_t4_g7_t1

0xd38c,	// (0x000241bf) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd38c,	// (0x000241bf) list_medium_line_x4_t4_g7_t2

0xd3a1,	// (0x000241d4) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd3a1,	// (0x000241d4) list_medium_line_x4_t4_g7_t3

0xd3b6,	// (0x000241e9) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd3b6,	// (0x000241e9) list_medium_line_x4_t4_g7_t4

0xd3c8,	// (0x000241fb) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd3c8,	// (0x000241fb) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdb,	// (0x00026a0e) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdb,	// (0x00026a0e) list_medium_line_x4_t4_g7_t

0xd3da,	// (0x0002420d) list_single_dyc_row_pane_ParamLimits

0xd3da,	// (0x0002420d) list_single_dyc_row_pane

0xd9e5,	// (0x00024818) call5_gesture_pane_ParamLimits

0xd9e5,	// (0x00024818) call5_gesture_pane

0xda15,	// (0x00024848) call5_windows_pane_ParamLimits

0xda15,	// (0x00024848) call5_windows_pane

0xda99,	// (0x000248cc) call5_swipe_1_pane_cp_ParamLimits

0xda99,	// (0x000248cc) call5_swipe_1_pane_cp

0xdaa5,	// (0x000248d8) call5_swipe_2_pane_cp_ParamLimits

0xdaa5,	// (0x000248d8) call5_swipe_2_pane_cp

0x0c34,	// (0x00017a67) call5_image_pane_cp

0xdab1,	// (0x000248e4) popup_call5_audio_first_window_cp_ParamLimits

0xdab1,	// (0x000248e4) popup_call5_audio_first_window_cp

0x5083,	// (0x0001beb6) call5_swipe_1_pane_g1_cp_ParamLimits

0x5083,	// (0x0001beb6) call5_swipe_1_pane_g1_cp

0x50b1,	// (0x0001bee4) call5_swipe_1_pane_g2_cp

0x509c,	// (0x0001becf) call5_swipe_1_pane_t1_cp_ParamLimits

0x509c,	// (0x0001becf) call5_swipe_1_pane_t1_cp

0x5083,	// (0x0001beb6) call5_swipe_2_pane_g1_cp_ParamLimits

0x5083,	// (0x0001beb6) call5_swipe_2_pane_g1_cp

0x50b9,	// (0x0001beec) call5_swipe_2_pane_g2_cp

0x50c1,	// (0x0001bef4) call5_swipe_2_pane_t1_cp_ParamLimits

0x50c1,	// (0x0001bef4) call5_swipe_2_pane_t1_cp

0x0260,	// (0x00017093) main_sp_fs_email_pane

0x50d6,	// (0x0001bf09) main_sp_fs_listscroll_pane_te

0xdabd,	// (0x000248f0) popup_sp_fs_action_menu_pane_ParamLimits

0xdabd,	// (0x000248f0) popup_sp_fs_action_menu_pane

0x3114,	// (0x00019f47) bg_sp_fs_ctrlbar_pane_g1

0x3714,	// (0x0001a547) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x3726,	// (0x0001a559) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x371d,	// (0x0001a550) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x3114,	// (0x00019f47) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc9,	// (0x00026afc) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2f01,	// (0x00019d34) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2f01,	// (0x00019d34) bg_sp_fs_ctrlbar_ddmenu_pane

0x50df,	// (0x0001bf12) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x50df,	// (0x0001bf12) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x50eb,	// (0x0001bf1e) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x50eb,	// (0x0001bf1e) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd2,	// (0x00026b05) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd2,	// (0x00026b05) main_sp_fs_ctrlbar_ddmenu_pane_g

0x50f7,	// (0x0001bf2a) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x50f7,	// (0x0001bf2a) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x5111,	// (0x0001bf44) list_medium_line_t2_right_icon_g1

0xdaef,	// (0x00024922) list_medium_line_t2_right_icon_t1

0xdafe,	// (0x00024931) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd7,	// (0x00026b0a) list_medium_line_t2_right_icon_t

0x2c00,	// (0x00019a33) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2c00,	// (0x00019a33) bg_sp_fs_ctrlbar_pane

0xdb61,	// (0x00024994) main_sp_fs_ctrlbar_button_pane_cp01

0xdb69,	// (0x0002499c) main_sp_fs_ctrlbar_ddmenu_pane

0x5161,	// (0x0001bf94) main_sp_fs_ctrlbar_pane_g1

0x516d,	// (0x0001bfa0) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcdc,	// (0x00026b0f) main_sp_fs_ctrlbar_pane_g

0xdba3,	// (0x000249d6) main_sp_fs_ctrlbar_pane_t1

0xdbeb,	// (0x00024a1e) main_sp_fs_ctrlbar_pane

0xdbff,	// (0x00024a32) main_sp_fs_listscroll_pane_te_cp01

0xdc10,	// (0x00024a43) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xdc10,	// (0x00024a43) popup_sp_fs_action_menu_pane_cp01

0x0260,	// (0x00017093) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0260,	// (0x00017093) bg_sp_fs_highlight_list_pane_cp01

0xdc36,	// (0x00024a69) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdc36,	// (0x00024a69) sp_fs_action_menu_list_gene_pane_g1

0x5194,	// (0x0001bfc7) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x5194,	// (0x0001bfc7) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x00026b1d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x00026b1d) sp_fs_action_menu_list_gene_pane_g

0xdc45,	// (0x00024a78) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdc45,	// (0x00024a78) sp_fs_action_menu_list_gene_pane_t1

0xdc5d,	// (0x00024a90) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdc5d,	// (0x00024a90) sp_fs_action_menu_list_gene_pane

0x51a1,	// (0x0001bfd4) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x51a1,	// (0x0001bfd4) popup_sp_fs_action_menu_bg_pane

0xdc7a,	// (0x00024aad) sp_fs_action_menu_list_pane_ParamLimits

0xdc7a,	// (0x00024aad) sp_fs_action_menu_list_pane

0x51af,	// (0x0001bfe2) sp_fs_scroll_pane_cp01_ParamLimits

0x51af,	// (0x0001bfe2) sp_fs_scroll_pane_cp01

0xdc98,	// (0x00024acb) list_medium_line_plain_t2_t1

0xdca7,	// (0x00024ada) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x00026b22) list_medium_line_plain_t2_t

0xdcb5,	// (0x00024ae8) list_medium_line_plain_t3_t1

0xdcc5,	// (0x00024af8) list_medium_line_plain_t3_t2

0xdcd3,	// (0x00024b06) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x00026b27) list_medium_line_plain_t3_t

0x8ecb,	// (0x0001fcfe) list_medium_line_x2_t2_g2_g1_ParamLimits

0x8ecb,	// (0x0001fcfe) list_medium_line_x2_t2_g2_g1

0x8ee3,	// (0x0001fd16) list_medium_line_x2_t2_g2_g2_ParamLimits

0x8ee3,	// (0x0001fd16) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0002605e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0002605e) list_medium_line_x2_t2_g2_g

0xa034,	// (0x00020e67) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa034,	// (0x00020e67) list_medium_line_x2_t2_g2_t1

0x8f16,	// (0x0001fd49) list_medium_line_x2_t2_g2_t2_ParamLimits

0x8f16,	// (0x0001fd49) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x00026b2e) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x00026b2e) list_medium_line_x2_t2_g2_t

0x8ecb,	// (0x0001fcfe) list_medium_line_x2_t4_g2_g1_ParamLimits

0x8ecb,	// (0x0001fcfe) list_medium_line_x2_t4_g2_g1

0x8ee3,	// (0x0001fd16) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8ee3,	// (0x0001fd16) list_medium_line_x2_t4_g2_g2

0x0001,

0xf22b,	// (0x0002605e) list_medium_line_x2_t4_g2_g_ParamLimits

0xf22b,	// (0x0002605e) list_medium_line_x2_t4_g2_g

0xdce1,	// (0x00024b14) list_medium_line_x2_t4_g2_t1_ParamLimits

0xdce1,	// (0x00024b14) list_medium_line_x2_t4_g2_t1

0xdcfb,	// (0x00024b2e) list_medium_line_x2_t4_g2_t2_ParamLimits

0xdcfb,	// (0x00024b2e) list_medium_line_x2_t4_g2_t2

0xdd10,	// (0x00024b43) list_medium_line_x2_t4_g2_t3_ParamLimits

0xdd10,	// (0x00024b43) list_medium_line_x2_t4_g2_t3

0x8f16,	// (0x0001fd49) list_medium_line_x2_t4_g2_t4_ParamLimits

0x8f16,	// (0x0001fd49) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x00026b33) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x00026b33) list_medium_line_x2_t4_g2_t

0x51d5,	// (0x0001c008) list_medium_line_t3_right_iconx2_g1

0x5111,	// (0x0001bf44) list_medium_line_t3_right_iconx2_g2

0xdd25,	// (0x00024b58) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x00026b3c) list_medium_line_t3_right_iconx2_g

0x5119,	// (0x0001bf4c) list_medium_line_t3_right_iconx2_t1

0xdd2d,	// (0x00024b60) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x00026b43) list_medium_line_t3_right_iconx2_t

0x8ecb,	// (0x0001fcfe) list_medium_line_x3_t4_g4_g1_ParamLimits

0x8ecb,	// (0x0001fcfe) list_medium_line_x3_t4_g4_g1

0x8ed7,	// (0x0001fd0a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x8ed7,	// (0x0001fd0a) list_medium_line_x3_t4_g4_g2

0x8f5f,	// (0x0001fd92) list_medium_line_x3_t4_g4_g3_ParamLimits

0x8f5f,	// (0x0001fd92) list_medium_line_x3_t4_g4_g3

0xdd3b,	// (0x00024b6e) list_medium_line_x3_t4_g4_g4_ParamLimits

0xdd3b,	// (0x00024b6e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x00026b48) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x00026b48) list_medium_line_x3_t4_g4_g

0xdd47,	// (0x00024b7a) list_medium_line_x3_t4_g4_t1_ParamLimits

0xdd47,	// (0x00024b7a) list_medium_line_x3_t4_g4_t1

0xdd5e,	// (0x00024b91) list_medium_line_x3_t4_g4_t2_ParamLimits

0xdd5e,	// (0x00024b91) list_medium_line_x3_t4_g4_t2

0xdd73,	// (0x00024ba6) list_medium_line_x3_t4_g4_t3_ParamLimits

0xdd73,	// (0x00024ba6) list_medium_line_x3_t4_g4_t3

0xdd88,	// (0x00024bbb) list_medium_line_x3_t4_g4_t4_ParamLimits

0xdd88,	// (0x00024bbb) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x00026b51) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x00026b51) list_medium_line_x3_t4_g4_t

0xdda5,	// (0x00024bd8) list_single_dyc_row_text_pane_t1_ParamLimits

0xdda5,	// (0x00024bd8) list_single_dyc_row_text_pane_t1

0xdddc,	// (0x00024c0f) list_single_dyc_row_text_pane_t2_ParamLimits

0xdddc,	// (0x00024c0f) list_single_dyc_row_text_pane_t2

0x51dd,	// (0x0001c010) list_single_dyc_row_text_pane_t3_ParamLimits

0x51dd,	// (0x0001c010) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x00026b5a) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x00026b5a) list_single_dyc_row_text_pane_t

0x5201,	// (0x0001c034) list_single_dyc_row_pane_g1_ParamLimits

0x5201,	// (0x0001c034) list_single_dyc_row_pane_g1

0x520d,	// (0x0001c040) list_single_dyc_row_pane_g2_ParamLimits

0x520d,	// (0x0001c040) list_single_dyc_row_pane_g2

0x5219,	// (0x0001c04c) list_single_dyc_row_pane_g3_ParamLimits

0x5219,	// (0x0001c04c) list_single_dyc_row_pane_g3

0x5225,	// (0x0001c058) list_single_dyc_row_pane_g4_ParamLimits

0x5225,	// (0x0001c058) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x00026b67) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x00026b67) list_single_dyc_row_pane_g

0x5231,	// (0x0001c064) list_single_dyc_row_text_pane_ParamLimits

0x5231,	// (0x0001c064) list_single_dyc_row_text_pane

0x020d,	// (0x00017040) bg_sp_fs_scroll_pane

0x5250,	// (0x0001c083) thumb_sp_fs_scroll_pane

0x41d1,	// (0x0001b004) list_medium_line_g1_ParamLimits

0x41d1,	// (0x0001b004) list_medium_line_g1

0x5270,	// (0x0001c0a3) list_medium_line_t1_ParamLimits

0x5270,	// (0x0001c0a3) list_medium_line_t1

0x8ecb,	// (0x0001fcfe) list_medium_line_x2_g1_ParamLimits

0x8ecb,	// (0x0001fcfe) list_medium_line_x2_g1

0x8ed7,	// (0x0001fd0a) list_medium_line_x2_g2_ParamLimits

0x8ed7,	// (0x0001fd0a) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x00026b70) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x00026b70) list_medium_line_x2_g

0x5285,	// (0x0001c0b8) list_medium_line_x2_t1_ParamLimits

0x5285,	// (0x0001c0b8) list_medium_line_x2_t1

0x8ecb,	// (0x0001fcfe) list_medium_line_x3_g1_ParamLimits

0x8ecb,	// (0x0001fcfe) list_medium_line_x3_g1

0x8ed7,	// (0x0001fd0a) list_medium_line_x3_g2_ParamLimits

0x8ed7,	// (0x0001fd0a) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x00026b70) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x00026b70) list_medium_line_x3_g

0x5285,	// (0x0001c0b8) list_medium_line_x3_t1_ParamLimits

0x5285,	// (0x0001c0b8) list_medium_line_x3_t1

0x529b,	// (0x0001c0ce) thumb_sp_fs_scroll_pane_g1

0x52a4,	// (0x0001c0d7) thumb_sp_fs_scroll_pane_g2

0x52ad,	// (0x0001c0e0) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x00026b75) thumb_sp_fs_scroll_pane_g

0x529b,	// (0x0001c0ce) bg_sp_fs_scroll_pane_g1

0x52a4,	// (0x0001c0d7) bg_sp_fs_scroll_pane_g2

0x52ad,	// (0x0001c0e0) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x00026b75) bg_sp_fs_scroll_pane_g

0x8ecb,	// (0x0001fcfe) list_medium_line_x2_t3_g4_g1_ParamLimits

0x8ecb,	// (0x0001fcfe) list_medium_line_x2_t3_g4_g1

0x8f53,	// (0x0001fd86) list_medium_line_x2_t3_g4_g2_ParamLimits

0x8f53,	// (0x0001fd86) list_medium_line_x2_t3_g4_g2

0x8ed7,	// (0x0001fd0a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x8ed7,	// (0x0001fd0a) list_medium_line_x2_t3_g4_g3

0x8ee3,	// (0x0001fd16) list_medium_line_x2_t3_g4_g4_ParamLimits

0x8ee3,	// (0x0001fd16) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x000260da) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x000260da) list_medium_line_x2_t3_g4_g

0xdef9,	// (0x00024d2c) list_medium_line_x2_t3_g4_t1_ParamLimits

0xdef9,	// (0x00024d2c) list_medium_line_x2_t3_g4_t1

0xdf0f,	// (0x00024d42) list_medium_line_x2_t3_g4_t2_ParamLimits

0xdf0f,	// (0x00024d42) list_medium_line_x2_t3_g4_t2

0x8f16,	// (0x0001fd49) list_medium_line_x2_t3_g4_t3_ParamLimits

0x8f16,	// (0x0001fd49) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x00026b7c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x00026b7c) list_medium_line_x2_t3_g4_t

0x41d1,	// (0x0001b004) list_medium_line_g2_g1_ParamLimits

0x41d1,	// (0x0001b004) list_medium_line_g2_g1

0x41dd,	// (0x0001b010) list_medium_line_g2_g2_ParamLimits

0x41dd,	// (0x0001b010) list_medium_line_g2_g2

0x0001,

0xf9fc,	// (0x0002682f) list_medium_line_g2_g_ParamLimits

0xf9fc,	// (0x0002682f) list_medium_line_g2_g

0x52b6,	// (0x0001c0e9) list_medium_line_g2_t1_ParamLimits

0x52b6,	// (0x0001c0e9) list_medium_line_g2_t1

0x41d1,	// (0x0001b004) list_medium_line_t3_g2_g1_ParamLimits

0x41d1,	// (0x0001b004) list_medium_line_t3_g2_g1

0x41dd,	// (0x0001b010) list_medium_line_t3_g2_g2_ParamLimits

0x41dd,	// (0x0001b010) list_medium_line_t3_g2_g2

0x0001,

0xf9fc,	// (0x0002682f) list_medium_line_t3_g2_g_ParamLimits

0xf9fc,	// (0x0002682f) list_medium_line_t3_g2_g

0xdf28,	// (0x00024d5b) list_medium_line_t3_g2_t1_ParamLimits

0xdf28,	// (0x00024d5b) list_medium_line_t3_g2_t1

0xdf42,	// (0x00024d75) list_medium_line_t3_g2_t2_ParamLimits

0xdf42,	// (0x00024d75) list_medium_line_t3_g2_t2

0xdf57,	// (0x00024d8a) list_medium_line_t3_g2_t3_ParamLimits

0xdf57,	// (0x00024d8a) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x00026b83) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x00026b83) list_medium_line_t3_g2_t

0x5111,	// (0x0001bf44) list_medium_line_right_icon_g1

0x52cb,	// (0x0001c0fe) list_medium_line_right_icon_t1

0x41d1,	// (0x0001b004) list_medium_line_t2_g1_ParamLimits

0x41d1,	// (0x0001b004) list_medium_line_t2_g1

0xdf6d,	// (0x00024da0) list_medium_line_t2_t1_ParamLimits

0xdf6d,	// (0x00024da0) list_medium_line_t2_t1

0xdf84,	// (0x00024db7) list_medium_line_t2_t2_ParamLimits

0xdf84,	// (0x00024db7) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x00026b8a) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x00026b8a) list_medium_line_t2_t

0x41d1,	// (0x0001b004) list_medium_line_t3_g1_ParamLimits

0x41d1,	// (0x0001b004) list_medium_line_t3_g1

0xdf96,	// (0x00024dc9) list_medium_line_t3_t1_ParamLimits

0xdf96,	// (0x00024dc9) list_medium_line_t3_t1

0xdfb0,	// (0x00024de3) list_medium_line_t3_t2_ParamLimits

0xdfb0,	// (0x00024de3) list_medium_line_t3_t2

0xdfc5,	// (0x00024df8) list_medium_line_t3_t3_ParamLimits

0xdfc5,	// (0x00024df8) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x00026b8f) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x00026b8f) list_medium_line_t3_t

0x41d1,	// (0x0001b004) list_medium_line_g3_g1_ParamLimits

0x41d1,	// (0x0001b004) list_medium_line_g3_g1

0x52d9,	// (0x0001c10c) list_medium_line_g3_g2_ParamLimits

0x52d9,	// (0x0001c10c) list_medium_line_g3_g2

0x41dd,	// (0x0001b010) list_medium_line_g3_g3_ParamLimits

0x41dd,	// (0x0001b010) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x00026b96) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x00026b96) list_medium_line_g3_g

0x52e5,	// (0x0001c118) list_medium_line_g3_t1_ParamLimits

0x52e5,	// (0x0001c118) list_medium_line_g3_t1

0x41d1,	// (0x0001b004) list_medium_line_t2_g3_g1_ParamLimits

0x41d1,	// (0x0001b004) list_medium_line_t2_g3_g1

0x52d9,	// (0x0001c10c) list_medium_line_t2_g3_g2_ParamLimits

0x52d9,	// (0x0001c10c) list_medium_line_t2_g3_g2

0x41dd,	// (0x0001b010) list_medium_line_t2_g3_g3_ParamLimits

0x41dd,	// (0x0001b010) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x00026b96) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x00026b96) list_medium_line_t2_g3_g

0xdfda,	// (0x00024e0d) list_medium_line_t2_g3_t1_ParamLimits

0xdfda,	// (0x00024e0d) list_medium_line_t2_g3_t1

0xdff4,	// (0x00024e27) list_medium_line_t2_g3_t2_ParamLimits

0xdff4,	// (0x00024e27) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x00026b9d) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x00026b9d) list_medium_line_t2_g3_t

0x41d1,	// (0x0001b004) list_medium_line_t3_g3_g1_ParamLimits

0x41d1,	// (0x0001b004) list_medium_line_t3_g3_g1

0x52d9,	// (0x0001c10c) list_medium_line_t3_g3_g2_ParamLimits

0x52d9,	// (0x0001c10c) list_medium_line_t3_g3_g2

0x41dd,	// (0x0001b010) list_medium_line_t3_g3_g3_ParamLimits

0x41dd,	// (0x0001b010) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x00026b96) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x00026b96) list_medium_line_t3_g3_g

0xe009,	// (0x00024e3c) list_medium_line_t3_g3_t1_ParamLimits

0xe009,	// (0x00024e3c) list_medium_line_t3_g3_t1

0xe01d,	// (0x00024e50) list_medium_line_t3_g3_t2_ParamLimits

0xe01d,	// (0x00024e50) list_medium_line_t3_g3_t2

0xe02f,	// (0x00024e62) list_medium_line_t3_g3_t3_ParamLimits

0xe02f,	// (0x00024e62) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x00026ba2) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x00026ba2) list_medium_line_t3_g3_t

0x51d5,	// (0x0001c008) list_medium_line_right_iconx2_g1

0x5111,	// (0x0001bf44) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x00026ba9) list_medium_line_right_iconx2_g

0x52fa,	// (0x0001c12d) list_medium_line_right_iconx2_t1

0x51d5,	// (0x0001c008) list_medium_line_t2_right_iconx2_g1

0x5111,	// (0x0001bf44) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x00026ba9) list_medium_line_t2_right_iconx2_g

0xe041,	// (0x00024e74) list_medium_line_t2_right_iconx2_t1

0xe051,	// (0x00024e84) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x00026bae) list_medium_line_t2_right_iconx2_t

0xe05f,	// (0x00024e92) list_medium_line_x4_t4_t1

0xe06d,	// (0x00024ea0) list_medium_line_x4_t4_t2

0xe07b,	// (0x00024eae) list_medium_line_x4_t4_t3

0xe089,	// (0x00024ebc) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x00026bb3) list_medium_line_x4_t4_t

0xe0bb,	// (0x00024eee) tport_appsw_pane_ParamLimits

0xe0bb,	// (0x00024eee) tport_appsw_pane

0xe0c7,	// (0x00024efa) tport_contact_pane_ParamLimits

0xe0c7,	// (0x00024efa) tport_contact_pane

0xe0d5,	// (0x00024f08) tport_listscroll_pane_ParamLimits

0xe0d5,	// (0x00024f08) tport_listscroll_pane

0xe0e3,	// (0x00024f16) cell_tport_appsw_pane_ParamLimits

0xe0e3,	// (0x00024f16) cell_tport_appsw_pane

0x341c,	// (0x0001a24f) tport_appsw_pane_g1_ParamLimits

0x341c,	// (0x0001a24f) tport_appsw_pane_g1

0x5308,	// (0x0001c13b) tport_contact_pane_g1

0x5311,	// (0x0001c144) tport_contact_pane_t1

0x531f,	// (0x0001c152) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x00026bbc) tport_contact_pane_t

0x532d,	// (0x0001c160) list_tport_pane

0x0b22,	// (0x00017955) scroll_pane_cp_030

0x533e,	// (0x0001c171) cell_tport_appsw_pane_g1

0x534e,	// (0x0001c181) cell_tport_appsw_pane_t1

0x535c,	// (0x0001c18f) grid_highlight_pane_cp019

0xe10a,	// (0x00024f3d) list_tport_double_graphic_pane_ParamLimits

0xe10a,	// (0x00024f3d) list_tport_double_graphic_pane

0x0260,	// (0x00017093) list_highlight_pane_cp023_ParamLimits

0x0260,	// (0x00017093) list_highlight_pane_cp023

0xe117,	// (0x00024f4a) list_tport_double_graphic_pane_g1_ParamLimits

0xe117,	// (0x00024f4a) list_tport_double_graphic_pane_g1

0xe124,	// (0x00024f57) list_tport_double_graphic_pane_t1_ParamLimits

0xe124,	// (0x00024f57) list_tport_double_graphic_pane_t1

0xe139,	// (0x00024f6c) list_tport_double_graphic_pane_t2_ParamLimits

0xe139,	// (0x00024f6c) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x00026bc8) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x00026bc8) list_tport_double_graphic_pane_t

0x020d,	// (0x00017040) main_cale_note_pane

0x8051,	// (0x0001ee84) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8051,	// (0x0001ee84) cell_vitu2_function_top_wide_pane_cp01

0xd706,	// (0x00024539) wait_bar_pane_cp05_ParamLimits

0x0260,	// (0x00017093) listscroll_cmail_pane

0x5364,	// (0x0001c197) list_cmail_pane

0xe14b,	// (0x00024f7e) list_cmail_body_pane

0xe14b,	// (0x00024f7e) list_single_cmail_header_caption_pane

0xe164,	// (0x00024f97) list_single_cmail_header_detail_pane_ParamLimits

0xe164,	// (0x00024f97) list_single_cmail_header_detail_pane

0x5380,	// (0x0001c1b3) list_single_cmail_header_caption_pane_t1

0xe18f,	// (0x00024fc2) list_single_cmail_header_detail_pane_g1_ParamLimits

0xe18f,	// (0x00024fc2) list_single_cmail_header_detail_pane_g1

0x5397,	// (0x0001c1ca) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5397,	// (0x0001c1ca) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x00026bcd) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x00026bcd) list_single_cmail_header_detail_pane_g

0xe1a5,	// (0x00024fd8) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe1a5,	// (0x00024fd8) list_single_cmail_header_detail_pane_t1

0x53d4,	// (0x0001c207) list_single_cmail_header_editor_pane_bg_ParamLimits

0x53d4,	// (0x0001c207) list_single_cmail_header_editor_pane_bg

0x53eb,	// (0x0001c21e) list_cmail_body_pane_g1

0x53f4,	// (0x0001c227) list_cmail_body_pane_t1

0x3f20,	// (0x0001ad53) list_single_cmail_header_editor_pane_bg_g1

0x0edc,	// (0x00017d0f) list_single_cmail_header_editor_pane_bg_g1_copy1

0x3f30,	// (0x0001ad63) list_single_cmail_header_editor_pane_bg_g1_copy2

0x3f28,	// (0x0001ad5b) list_single_cmail_header_editor_pane_bg_g1_copy3

0x41a9,	// (0x0001afdc) list_single_cmail_header_editor_pane_bg_g1_copy4

0x3f50,	// (0x0001ad83) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x3f40,	// (0x0001ad73) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3f48,	// (0x0001ad7b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0ebc,	// (0x00017cef) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe1e1,	// (0x00025014) calenote_gesture_pane_ParamLimits

0xe1e1,	// (0x00025014) calenote_gesture_pane

0xe1f9,	// (0x0002502c) calenote_window_pane_ParamLimits

0xe1f9,	// (0x0002502c) calenote_window_pane

0x5402,	// (0x0001c235) popup_note_window_cp01

0xe211,	// (0x00025044) calenote_swipe_1_pane_ParamLimits

0xe211,	// (0x00025044) calenote_swipe_1_pane

0xdaa5,	// (0x000248d8) calenote_swipe_2_pane_ParamLimits

0xdaa5,	// (0x000248d8) calenote_swipe_2_pane

0x5083,	// (0x0001beb6) calenote_swipe_1_pane_g1_ParamLimits

0x5083,	// (0x0001beb6) calenote_swipe_1_pane_g1

0x5090,	// (0x0001bec3) calenote_swipe_1_pane_g2_ParamLimits

0x5090,	// (0x0001bec3) calenote_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x00026af2) calenote_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x00026af2) calenote_swipe_1_pane_g

0x5414,	// (0x0001c247) calenote_swipe_1_pane_t1_ParamLimits

0x5414,	// (0x0001c247) calenote_swipe_1_pane_t1

0x5083,	// (0x0001beb6) calenote_swipe_2_pane_g1_ParamLimits

0x5083,	// (0x0001beb6) calenote_swipe_2_pane_g1

0x5433,	// (0x0001c266) calenote_swipe_2_pane_g2_ParamLimits

0x5433,	// (0x0001c266) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x00026bd9) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x00026bd9) calenote_swipe_2_pane_g

0x543f,	// (0x0001c272) calenote_swipe_2_pane_t1_ParamLimits

0x543f,	// (0x0001c272) calenote_swipe_2_pane_t1

0x020d,	// (0x00017040) main_mup_navstr_pane

0xb89a,	// (0x000226cd) main_mup3_pane_t7_ParamLimits

0xb89a,	// (0x000226cd) main_mup3_pane_t7

0x7956,	// (0x0001e789) main_mp4_pane_g6_ParamLimits

0x7956,	// (0x0001e789) main_mp4_pane_g6

0x7c3f,	// (0x0001ea72) main_image3_pane_t4_ParamLimits

0x7c3f,	// (0x0001ea72) main_image3_pane_t4

0xe224,	// (0x00025057) popup_navstr_preview_pane_ParamLimits

0xe224,	// (0x00025057) popup_navstr_preview_pane

0xe230,	// (0x00025063) scroll_navstr_pane_ParamLimits

0xe230,	// (0x00025063) scroll_navstr_pane

0x020d,	// (0x00017040) bg_popup_preview_window_pane_cp04

0x5466,	// (0x0001c299) popup_navstr_preview_pane_t1

0xe23c,	// (0x0002506f) scroll_navstr_pane_g1_ParamLimits

0xe23c,	// (0x0002506f) scroll_navstr_pane_g1

0xe249,	// (0x0002507c) scroll_navstr_pane_t1_ParamLimits

0xe249,	// (0x0002507c) scroll_navstr_pane_t1

0x540b,	// (0x0001c23e) bg_button_pane_cp014

0x540b,	// (0x0001c23e) bg_button_pane_cp030

0xd98b,	// (0x000247be) list_double_fisheye_pane_g4_ParamLimits

0xd98b,	// (0x000247be) list_double_fisheye_pane_g4

0xd997,	// (0x000247ca) list_double_fisheye_pane_g5_ParamLimits

0xd997,	// (0x000247ca) list_double_fisheye_pane_g5

0x5374,	// (0x0001c1a7) sp_fs_scroll_pane_cp03

0x5161,	// (0x0001bf94) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x516d,	// (0x0001bfa0) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcdc,	// (0x00026b0f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdba3,	// (0x000249d6) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x536c,	// (0x0001c19f) sp_fs_scroll_pane_cp02

0x0b7c,	// (0x000179af) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0b7c,	// (0x000179af) popup_sp_fs_calendar_preview_list_single_pane

0x020d,	// (0x00017040) main_cam6_pano_pane

0x7359,	// (0x0001e18c) main_mup3_pane_ParamLimits

0x020d,	// (0x00017040) main_phacti_pane

0xd5f9,	// (0x0002442c) bg_button_pane_cp11

0xd611,	// (0x00024444) main_mobtv_info_pane_g2_ParamLimits

0xd611,	// (0x00024444) main_mobtv_info_pane_g2

0x0001,

0xfc3c,	// (0x00026a6f) main_mobtv_info_pane_g_ParamLimits

0xfc3c,	// (0x00026a6f) main_mobtv_info_pane_g

0xd79d,	// (0x000245d0) sc_clock_pane_t5_ParamLimits

0xd79d,	// (0x000245d0) sc_clock_pane_t5

0xd82a,	// (0x0002465d) main_radioblah_pane_g1_ParamLimits

0x4fc6,	// (0x0001bdf9) main_radioblah_pane_t3_ParamLimits

0x4fc6,	// (0x0001bdf9) main_radioblah_pane_t3

0x4fde,	// (0x0001be11) main_radioblah_pane_t4_ParamLimits

0x4fde,	// (0x0001be11) main_radioblah_pane_t4

0xd848,	// (0x0002467b) main_radioblah_text_pane_ParamLimits

0xd848,	// (0x0002467b) main_radioblah_text_pane

0xd855,	// (0x00024688) main_radioblah_info_pane_g1_ParamLimits

0xd8e2,	// (0x00024715) main_radioblah_info_pane_t4_ParamLimits

0xd8e2,	// (0x00024715) main_radioblah_info_pane_t4

0x0260,	// (0x00017093) main_sp_fs_calendar_pane

0xe25b,	// (0x0002508e) main_phacti_pane_g1

0xe263,	// (0x00025096) phacti_note_pane_ParamLimits

0xe263,	// (0x00025096) phacti_note_pane

0x547d,	// (0x0001c2b0) phacti_term_pane_ParamLimits

0x547d,	// (0x0001c2b0) phacti_term_pane

0x5492,	// (0x0001c2c5) phacti_note_pane_t1_ParamLimits

0x5492,	// (0x0001c2c5) phacti_note_pane_t1

0x54a9,	// (0x0001c2dc) phacti_term_pane_g1

0x54b1,	// (0x0001c2e4) phacti_term_pane_t1_ParamLimits

0x54b1,	// (0x0001c2e4) phacti_term_pane_t1

0x54db,	// (0x0001c30e) popup_sp_fs_calendar_preview_list_single_pane_g1

0x54e3,	// (0x0001c316) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x00026be3) popup_sp_fs_calendar_preview_list_single_pane_g

0x54eb,	// (0x0001c31e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x54eb,	// (0x0001c31e) popup_sp_fs_calendar_preview_list_single_pane_t1

0x5501,	// (0x0001c334) aid_popup_sp_fs_bg_corner_pane

0x3114,	// (0x00019f47) popup_sp_fs_calendar_preview_bg_pane_g1

0x020d,	// (0x00017040) popup_sp_fs_calendar_preview_bg_pane

0x5509,	// (0x0001c33c) popup_sp_fs_calendar_preview_list_pane

0x2c00,	// (0x00019a33) bg_main_sp_fs_cale_pane_ParamLimits

0x2c00,	// (0x00019a33) bg_main_sp_fs_cale_pane

0x551a,	// (0x0001c34d) listscroll_cale_mrui_pane_ParamLimits

0x551a,	// (0x0001c34d) listscroll_cale_mrui_pane

0x552f,	// (0x0001c362) listscroll_sp_fs_schedule_track_pane

0x5538,	// (0x0001c36b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5538,	// (0x0001c36b) main_sp_fs_ctrlbar_pane_cp01

0x554b,	// (0x0001c37e) main_sp_fs_ribbon_pane

0x5553,	// (0x0001c386) popup_sp_fs_cale_preview_window

0x5961,	// (0x0001c794) list_single_sp_fs_schedule_track_pane_ParamLimits

0x5961,	// (0x0001c794) list_single_sp_fs_schedule_track_pane

0x3cbe,	// (0x0001aaf1) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3cbe,	// (0x0001aaf1) bg_sp_fs_highlight_list_pane_cp03

0xe2ba,	// (0x000250ed) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe2ba,	// (0x000250ed) list_single_sp_fs_schedule_track_pane_g1

0xe2c6,	// (0x000250f9) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe2c6,	// (0x000250f9) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x00026be8) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x00026be8) list_single_sp_fs_schedule_track_pane_g

0xe2d2,	// (0x00025105) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe2d2,	// (0x00025105) list_single_sp_fs_schedule_track_pane_t1

0xe2ea,	// (0x0002511d) sp_fs_schedule_track_pane_ParamLimits

0xe2ea,	// (0x0002511d) sp_fs_schedule_track_pane

0x5565,	// (0x0001c398) sp_fs_schedule_track_pane_g1

0x556d,	// (0x0001c3a0) sp_fs_schedule_track_pane_g2

0x5575,	// (0x0001c3a8) sp_fs_schedule_track_pane_g3

0x557d,	// (0x0001c3b0) sp_fs_schedule_track_pane_g4

0x5585,	// (0x0001c3b8) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x00026bed) sp_fs_schedule_track_pane_g

0x3f20,	// (0x0001ad53) bg_sp_fs_schedule_viewer_highlight_g1

0x0edc,	// (0x00017d0f) bg_sp_fs_schedule_viewer_highlight_g2

0x3f28,	// (0x0001ad5b) bg_sp_fs_schedule_viewer_highlight_g3

0x3f30,	// (0x0001ad63) bg_sp_fs_schedule_viewer_highlight_g4

0x41a9,	// (0x0001afdc) bg_sp_fs_schedule_viewer_highlight_g5

0x3f40,	// (0x0001ad73) bg_sp_fs_schedule_viewer_highlight_g6

0x3f48,	// (0x0001ad7b) bg_sp_fs_schedule_viewer_highlight_g7

0x3f50,	// (0x0001ad83) bg_sp_fs_schedule_viewer_highlight_g8

0x0ebc,	// (0x00017cef) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x00026bf8) bg_sp_fs_schedule_viewer_highlight_g

0x020d,	// (0x00017040) bg_main_sp_fs_ribbon_pane

0xc10d,	// (0x00022f40) main_sp_fs_ribbon_pane_g1

0x558d,	// (0x0001c3c0) main_sp_fs_ribbon_pane_t1

0xe2fa,	// (0x0002512d) main_sp_fs_ribbon_pane_t2

0x559c,	// (0x0001c3cf) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x00026c0b) main_sp_fs_ribbon_pane_t

0x55ab,	// (0x0001c3de) main_sp_fs_ribbon_scheduler_pane

0x55b3,	// (0x0001c3e6) bg_main_sp_fs_ribbon_pane_g1

0x55bc,	// (0x0001c3ef) bg_main_sp_fs_ribbon_pane_g2

0x55c5,	// (0x0001c3f8) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x00026c12) bg_main_sp_fs_ribbon_pane_g

0x55cd,	// (0x0001c400) main_sp_fs_ribbon_scheduler_pane_g1

0x55d6,	// (0x0001c409) main_sp_fs_ribbon_scheduler_pane_g2

0x55df,	// (0x0001c412) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x00026c19) main_sp_fs_ribbon_scheduler_pane_g

0x55e8,	// (0x0001c41b) list_cale_mrui_pane

0xe309,	// (0x0002513c) sp_fs_scroll_pane_cp07_ParamLimits

0xe309,	// (0x0002513c) sp_fs_scroll_pane_cp07

0xe321,	// (0x00025154) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe321,	// (0x00025154) bg_sp_fs_schedule_viewer_highlight

0x55f5,	// (0x0001c428) list_single_sp_fs_schedule_track_pane_cp01

0x55fd,	// (0x0001c430) list_sp_fs_schedule_track_pane

0x5605,	// (0x0001c438) sp_fs_scroll_pane_cp06_ParamLimits

0x5605,	// (0x0001c438) sp_fs_scroll_pane_cp06

0x3114,	// (0x00019f47) bgmain_sp_fs_calendar_pane_g1

0xe32e,	// (0x00025161) list_single_cale_mrui_pane_ParamLimits

0xe32e,	// (0x00025161) list_single_cale_mrui_pane

0x5617,	// (0x0001c44a) list_single_cale_mrui_row_pane_ParamLimits

0x5617,	// (0x0001c44a) list_single_cale_mrui_row_pane

0xe350,	// (0x00025183) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe350,	// (0x00025183) list_single_cale_mrui_row_pane_g1

0xe388,	// (0x000251bb) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe388,	// (0x000251bb) list_single_cale_mrui_row_pane_t1

0xe39a,	// (0x000251cd) list_single_cale_mrui_row_pane_t2_ParamLimits

0xe39a,	// (0x000251cd) list_single_cale_mrui_row_pane_t2

0xe400,	// (0x00025233) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe400,	// (0x00025233) list_single_cale_mrui_row_pane_t3

0xe42f,	// (0x00025262) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe42f,	// (0x00025262) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x00026c27) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x00026c27) list_single_cale_mrui_row_pane_t

0xe45e,	// (0x00025291) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xe45e,	// (0x00025291) list_single_cmail_header_editor_pane_bg_cp01

0xe482,	// (0x000252b5) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xe482,	// (0x000252b5) list_single_cmail_header_editor_pane_bg_cp02

0xe4a0,	// (0x000252d3) main_radioblah_text_pane_t1_ParamLimits

0xe4a0,	// (0x000252d3) main_radioblah_text_pane_t1

0x563a,	// (0x0001c46d) cam6_indi_pane_cp01

0x5642,	// (0x0001c475) cam6_mode_pane_cp01

0x564a,	// (0x0001c47d) cam6_pano_pane

0x5653,	// (0x0001c486) cam6_zoom_pane_cp01

0x565b,	// (0x0001c48e) cam6_pano_image_pane

0x5664,	// (0x0001c497) cam6_pano_pane_g1

0x4d2d,	// (0x0001bb60) cam6_pano_pane_g2

0x566d,	// (0x0001c4a0) cam6_pano_pane_g3

0x5676,	// (0x0001c4a9) cam6_pano_pane_g4

0x3701,	// (0x0001a534) cam6_pano_pane_g5

0x567f,	// (0x0001c4b2) cam6_pano_pane_g6

0x5687,	// (0x0001c4ba) cam6_pano_pane_g7

0x568f,	// (0x0001c4c2) cam6_pano_pane_g8

0x5698,	// (0x0001c4cb) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x00026c30) cam6_pano_pane_g

0x020d,	// (0x00017040) main_browser_tag_pane

0x545e,	// (0x0001c291) grid_navstr_albumart_pane

0x56a1,	// (0x0001c4d4) cell_navstr_albumart_pane_ParamLimits

0x56a1,	// (0x0001c4d4) cell_navstr_albumart_pane

0x1875,	// (0x000186a8) cell_navstr_albumart_pane_g1

0x29d1,	// (0x00019804) cell_navstr_albumart_pane_g2

0x29e1,	// (0x00019814) cell_navstr_albumart_pane_g3

0x29d9,	// (0x0001980c) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x00026c43) cell_navstr_albumart_pane_g

0xe4b9,	// (0x000252ec) bt_list_pane_ParamLimits

0xe4b9,	// (0x000252ec) bt_list_pane

0xe4ce,	// (0x00025301) bt_list_pane_t1

0xe4dd,	// (0x00025310) bt_list_pane_t2

0x0001,

0xfe19,	// (0x00026c4c) bt_list_pane_t

0x020d,	// (0x00017040) main_cale_prevew_pane

0xe4ec,	// (0x0002531f) popup_cale_preview_window_ParamLimits

0xe4ec,	// (0x0002531f) popup_cale_preview_window

0x0260,	// (0x00017093) bg_popup_preview_window_pane_cp05_ParamLimits

0x0260,	// (0x00017093) bg_popup_preview_window_pane_cp05

0x56b8,	// (0x0001c4eb) list_cale_preview_pane_ParamLimits

0x56b8,	// (0x0001c4eb) list_cale_preview_pane

0xe501,	// (0x00025334) list_double_cale_preview_pane_ParamLimits

0xe501,	// (0x00025334) list_double_cale_preview_pane

0xe512,	// (0x00025345) list_single_cale_preview_pane_ParamLimits

0xe512,	// (0x00025345) list_single_cale_preview_pane

0xe526,	// (0x00025359) list_single_cale_preview_pane_g1

0xe52e,	// (0x00025361) list_single_cale_preview_pane_t1_ParamLimits

0xe52e,	// (0x00025361) list_single_cale_preview_pane_t1

0x56c4,	// (0x0001c4f7) list_double_cale_preview_pane_g1

0x56cc,	// (0x0001c4ff) list_double_cale_preview_pane_t1_ParamLimits

0x56cc,	// (0x0001c4ff) list_double_cale_preview_pane_t1

0xe543,	// (0x00025376) list_double_cale_preview_pane_t2_ParamLimits

0xe543,	// (0x00025376) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x00026c51) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x00026c51) list_double_cale_preview_pane_t

0x020d,	// (0x00017040) main_ezdial_pane

0x0260,	// (0x00017093) main_sp_fs_email_pane_ParamLimits

0xdb0c,	// (0x0002493f) cmail_ddmenu_btn01_pane_ParamLimits

0xdb0c,	// (0x0002493f) cmail_ddmenu_btn01_pane

0xdb29,	// (0x0002495c) cmail_ddmenu_btn02_pane_ParamLimits

0xdb29,	// (0x0002495c) cmail_ddmenu_btn02_pane

0xdb47,	// (0x0002497a) cmail_ddmenu_btn03_pane_ParamLimits

0xdb47,	// (0x0002497a) cmail_ddmenu_btn03_pane

0xdbeb,	// (0x00024a1e) main_sp_fs_ctrlbar_pane_ParamLimits

0xdbff,	// (0x00024a32) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe14b,	// (0x00024f7e) list_cmail_body_pane_ParamLimits

0x538e,	// (0x0001c1c1) bg_button_pane_cp12

0x53a3,	// (0x0001c1d6) list_single_cmail_header_detail_pane_g3_ParamLimits

0x53a3,	// (0x0001c1d6) list_single_cmail_header_detail_pane_g3

0x53b0,	// (0x0001c1e3) list_single_cmail_header_detail_pane_t2_ParamLimits

0x53b0,	// (0x0001c1e3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x00026bd4) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x00026bd4) list_single_cmail_header_detail_pane_t

0x54c6,	// (0x0001c2f9) phacti_term_pane_t2_ParamLimits

0x54c6,	// (0x0001c2f9) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x00026bde) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x00026bde) phacti_term_pane_t

0x56e1,	// (0x0001c514) aid_size_list_single_double

0xe55b,	// (0x0002538e) popup_ezdial_listscroll_window

0xe574,	// (0x000253a7) popup_number_entry_window_cp01

0x0c34,	// (0x00017a67) bg_popup_call_pane_cp09

0x56ed,	// (0x0001c520) ezdial_list_pane

0x56f5,	// (0x0001c528) scroll_pane_cp23

0x2f01,	// (0x00019d34) bg_button_pane_cp028_ParamLimits

0x2f01,	// (0x00019d34) bg_button_pane_cp028

0xe580,	// (0x000253b3) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe580,	// (0x000253b3) cmail_ddmenu_btn01_pane_g1

0xe590,	// (0x000253c3) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe590,	// (0x000253c3) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x00026c56) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x00026c56) cmail_ddmenu_btn01_pane_g

0x56fd,	// (0x0001c530) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x56fd,	// (0x0001c530) cmail_ddmenu_btn01_pane_t1

0x2c00,	// (0x00019a33) bg_button_pane_cp029_ParamLimits

0x2c00,	// (0x00019a33) bg_button_pane_cp029

0xe590,	// (0x000253c3) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe590,	// (0x000253c3) cmail_ddmenu_btn02_pane_g1

0xe5a8,	// (0x000253db) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe5a8,	// (0x000253db) cmail_ddmenu_btn02_pane_t1

0x3cbe,	// (0x0001aaf1) bg_button_pane_cp031_ParamLimits

0x3cbe,	// (0x0001aaf1) bg_button_pane_cp031

0xe590,	// (0x000253c3) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe590,	// (0x000253c3) cmail_ddmenu_btn03_pane_g1

0xe5a8,	// (0x000253db) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe5a8,	// (0x000253db) cmail_ddmenu_btn03_pane_t1

0xc063,	// (0x00022e96) cell_dialer2_keypad_pane_t1_ParamLimits

0xc07d,	// (0x00022eb0) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc07d,	// (0x00022eb0) cell_dialer2_keypad_pane_t1_copy1

0xd486,	// (0x000242b9) ncimui_group_button_pane

0x0260,	// (0x00017093) main_sp_fs_calendar_pane_ParamLimits

0xe14b,	// (0x00024f7e) list_single_cmail_header_caption_pane_ParamLimits

0x5511,	// (0x0001c344) aid_recal_txt_sm_pane

0x020d,	// (0x00017040) mian_recal_day_pane

0x5553,	// (0x0001c386) popup_sp_fs_cale_preview_window_ParamLimits

0x5712,	// (0x0001c545) list_recal_day_pane

0x5754,	// (0x0001c587) list_single_recal_day_pane_ParamLimits

0x5754,	// (0x0001c587) list_single_recal_day_pane

0x5766,	// (0x0001c599) list_single_recal_day_pane_g1_ParamLimits

0x5766,	// (0x0001c599) list_single_recal_day_pane_g1

0x5772,	// (0x0001c5a5) list_single_recal_day_pane_g2_ParamLimits

0x5772,	// (0x0001c5a5) list_single_recal_day_pane_g2

0x577e,	// (0x0001c5b1) list_single_recal_day_pane_g3_ParamLimits

0x577e,	// (0x0001c5b1) list_single_recal_day_pane_g3

0xe5cc,	// (0x000253ff) list_single_recal_day_pane_g4_ParamLimits

0xe5cc,	// (0x000253ff) list_single_recal_day_pane_g4

0x578a,	// (0x0001c5bd) list_single_recal_day_pane_g5_ParamLimits

0x578a,	// (0x0001c5bd) list_single_recal_day_pane_g5

0xe5e0,	// (0x00025413) list_single_recal_day_pane_g6_ParamLimits

0xe5e0,	// (0x00025413) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x00026c65) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x00026c65) list_single_recal_day_pane_g

0x579e,	// (0x0001c5d1) list_single_recal_day_pane_t1

0xe5ef,	// (0x00025422) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x00026c70) list_single_recal_day_pane_t

0xe604,	// (0x00025437) ncimui_query_button_pane_ParamLimits

0xe604,	// (0x00025437) ncimui_query_button_pane

0xe614,	// (0x00025447) ncimui_query_button_pane_t1_ParamLimits

0xe614,	// (0x00025447) ncimui_query_button_pane_t1

0x57b0,	// (0x0001c5e3) ncimui_query_button_pane_t2_ParamLimits

0x57b0,	// (0x0001c5e3) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x00026c75) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x00026c75) ncimui_query_button_pane_t

0xe627,	// (0x0002545a) query_button_pane_ParamLimits

0xe627,	// (0x0002545a) query_button_pane

0x020d,	// (0x00017040) bg_button_pane_cp0028

0x57c3,	// (0x0001c5f6) query_button_pane_t1

0x7375,	// (0x0001e1a8) main_tport_pane_ParamLimits

0xe097,	// (0x00024eca) bg_popup_window_pane_cp01_ParamLimits

0xe097,	// (0x00024eca) bg_popup_window_pane_cp01

0xe0a3,	// (0x00024ed6) heading_pane_cp08_ParamLimits

0xe0a3,	// (0x00024ed6) heading_pane_cp08

0xe0af,	// (0x00024ee2) heading_pane_cp07_ParamLimits

0xe0af,	// (0x00024ee2) heading_pane_cp07

0x533e,	// (0x0001c171) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x00026bc1) cell_tport_appsw_pane_g

0x186d,	// (0x000186a0) input_candi_list_open_g1

0x10b7,	// (0x00017eea) list_cale_time_pane_g6_ParamLimits

0x10b7,	// (0x00017eea) list_cale_time_pane_g6

0xb3b4,	// (0x000221e7) aid_size_touch_calib_1_ParamLimits

0xb3b4,	// (0x000221e7) aid_size_touch_calib_1

0xb3c0,	// (0x000221f3) aid_size_touch_calib_2_ParamLimits

0xb3c0,	// (0x000221f3) aid_size_touch_calib_2

0xb3cc,	// (0x000221ff) aid_size_touch_calib_3_ParamLimits

0xb3cc,	// (0x000221ff) aid_size_touch_calib_3

0xb3da,	// (0x0002220d) aid_size_touch_calib_4_ParamLimits

0xb3da,	// (0x0002220d) aid_size_touch_calib_4

0xb3e8,	// (0x0002221b) main_touch_calib_button_group_pane_ParamLimits

0xb3e8,	// (0x0002221b) main_touch_calib_button_group_pane

0xb3f6,	// (0x00022229) main_touch_calib_pane_g1_ParamLimits

0xb402,	// (0x00022235) main_touch_calib_pane_g2_ParamLimits

0xb40e,	// (0x00022241) main_touch_calib_pane_g3_ParamLimits

0xb41a,	// (0x0002224d) main_touch_calib_pane_g4_ParamLimits

0xf749,	// (0x0002657c) main_touch_calib_pane_g_ParamLimits

0xb426,	// (0x00022259) main_touch_calib_pane_t1_ParamLimits

0xb43b,	// (0x0002226e) main_touch_calib_pane_t2_ParamLimits

0xb450,	// (0x00022283) main_touch_calib_pane_t3_ParamLimits

0xb462,	// (0x00022295) main_touch_calib_pane_t4_ParamLimits

0xb474,	// (0x000222a7) main_touch_calib_pane_t5_ParamLimits

0xf752,	// (0x00026585) main_touch_calib_pane_t_ParamLimits

0x34b7,	// (0x0001a2ea) list_single_fp_cale_pane_g3_ParamLimits

0x34b7,	// (0x0001a2ea) list_single_fp_cale_pane_g3

0x7359,	// (0x0001e18c) bg_button_pane_cp012_ParamLimits

0x7359,	// (0x0001e18c) bg_vkb2_func_pane_cp03_ParamLimits

0x8254,	// (0x0001f087) cell_vitu2_function_top_pane_g1_ParamLimits

0x7359,	// (0x0001e18c) bg_vkb2_func_pane_cp04_ParamLimits

0xd412,	// (0x00024245) main_ncimui_button_group_pane_ParamLimits

0xd412,	// (0x00024245) main_ncimui_button_group_pane

0xd474,	// (0x000242a7) main_ncimui_pane_t3_ParamLimits

0xd474,	// (0x000242a7) main_ncimui_pane_t3

0x5474,	// (0x0001c2a7) phacti_button_group_pane

0x56e1,	// (0x0001c514) aid_size_list_single_double_ParamLimits

0xe55b,	// (0x0002538e) popup_ezdial_listscroll_window_ParamLimits

0xe574,	// (0x000253a7) popup_number_entry_window_cp01_ParamLimits

0xe634,	// (0x00025467) phacti_button_pane_ParamLimits

0xe634,	// (0x00025467) phacti_button_pane

0x020d,	// (0x00017040) bg_button_pane_cp14

0x57d1,	// (0x0001c604) phacti_button_pane_t1

0xe643,	// (0x00025476) main_touch_calib_button_pane_ParamLimits

0xe643,	// (0x00025476) main_touch_calib_button_pane

0x09c5,	// (0x000177f8) bg_button_pane_cp18_ParamLimits

0x09c5,	// (0x000177f8) bg_button_pane_cp18

0xe654,	// (0x00025487) main_touch_calib_button_pane_t1_ParamLimits

0xe654,	// (0x00025487) main_touch_calib_button_pane_t1

0xe66a,	// (0x0002549d) main_touch_calib_button_pane_t2_ParamLimits

0xe66a,	// (0x0002549d) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x00026c7a) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x00026c7a) main_touch_calib_button_pane_t

0x020d,	// (0x00017040) cell_ncimui_button_pane

0x020d,	// (0x00017040) bg_button_pane_cp032

0x57df,	// (0x0001c612) cell_ncimui_button_pane_t1

0x7b5a,	// (0x0001e98d) image3_infobar_pane_ParamLimits

0x7b5a,	// (0x0001e98d) image3_infobar_pane

0xd7bd,	// (0x000245f0) fs_bigclock_status_pane_ParamLimits

0xd7bd,	// (0x000245f0) fs_bigclock_status_pane

0xd7ca,	// (0x000245fd) main_fs_bigclock_clock_pane_ParamLimits

0xd7ca,	// (0x000245fd) main_fs_bigclock_clock_pane

0xd7e2,	// (0x00024615) main_fs_bigclock_indi_pane_ParamLimits

0xd7e2,	// (0x00024615) main_fs_bigclock_indi_pane

0xd802,	// (0x00024635) main_fs_bigclock_swipe_pane_ParamLimits

0xd802,	// (0x00024635) main_fs_bigclock_swipe_pane

0x020d,	// (0x00017040) main_fs_clock_dumped_data

0x4e3a,	// (0x0001bc6d) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x4e3a,	// (0x0001bc6d) list_single_fs_bigclock_indicator_pane_g1

0x4e54,	// (0x0001bc87) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x4e54,	// (0x0001bc87) list_single_fs_bigclock_indicator_pane_g2

0x4e6e,	// (0x0001bca1) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x4e6e,	// (0x0001bca1) list_single_fs_bigclock_indicator_pane_g3

0x4e88,	// (0x0001bcbb) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x4e88,	// (0x0001bcbb) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc70,	// (0x00026aa3) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc70,	// (0x00026aa3) list_single_fs_bigclock_indicator_pane_g

0x4eb1,	// (0x0001bce4) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x4eb1,	// (0x0001bce4) list_single_fs_bigclock_indicator_pane_t1

0x4ed9,	// (0x0001bd0c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x4ed9,	// (0x0001bd0c) list_single_fs_bigclock_indicator_pane_t2

0x4f01,	// (0x0001bd34) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x4f01,	// (0x0001bd34) list_single_fs_bigclock_indicator_pane_t3

0x4f29,	// (0x0001bd5c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x4f29,	// (0x0001bd5c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7b,	// (0x00026aae) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7b,	// (0x00026aae) list_single_fs_bigclock_indicator_pane_t

0x57ed,	// (0x0001c620) image3_infobar_fav_pane_ParamLimits

0x57ed,	// (0x0001c620) image3_infobar_fav_pane

0x57fd,	// (0x0001c630) image3_infobar_loc_pane_ParamLimits

0x57fd,	// (0x0001c630) image3_infobar_loc_pane

0x5811,	// (0x0001c644) image3_infobar_time_pane_ParamLimits

0x5811,	// (0x0001c644) image3_infobar_time_pane

0x3114,	// (0x00019f47) image3_infobar_time_pane_g1

0x5821,	// (0x0001c654) image3_infobar_time_pane_t1

0x3114,	// (0x00019f47) image3_infobar_loc_pane_g1

0x582f,	// (0x0001c662) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x00026c7f) image3_infobar_loc_pane_g

0x5837,	// (0x0001c66a) image3_infobar_loc_pane_t1

0x3114,	// (0x00019f47) image3_infobar_fav_pane_g1

0x5845,	// (0x0001c678) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x00026c84) image3_infobar_fav_pane_g

0x584d,	// (0x0001c680) fs_bigclock_status_battery_pane

0x5856,	// (0x0001c689) fs_bigclock_status_signal_pane

0x585f,	// (0x0001c692) fs_bigclock_status_title_pane

0x5868,	// (0x0001c69b) fs_bigclock_status_signal_pane_g1

0x5871,	// (0x0001c6a4) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x00026c89) fs_bigclock_status_signal_pane_g

0x5879,	// (0x0001c6ac) fs_bigclock_status_battery_pane_g1

0x5882,	// (0x0001c6b5) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x00026c8e) fs_bigclock_status_battery_pane_g

0x588a,	// (0x0001c6bd) fs_bigclock_status_title_pane_t1

0x341c,	// (0x0001a24f) main_fs_bigclock_clock_pane_g1

0xe688,	// (0x000254bb) main_fs_bigclock_clock_pane_g2

0xe695,	// (0x000254c8) main_fs_bigclock_clock_pane_g3

0xe695,	// (0x000254c8) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x00026c93) main_fs_bigclock_clock_pane_g

0xe6a1,	// (0x000254d4) main_fs_bigclock_clock_pane_t1

0xe6b3,	// (0x000254e6) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x00026c9c) main_fs_bigclock_clock_pane_t

0x5898,	// (0x0001c6cb) list_single_fs_bigclock_indicator_pane_ParamLimits

0x5898,	// (0x0001c6cb) list_single_fs_bigclock_indicator_pane

0x58a9,	// (0x0001c6dc) list_single_fs_bigclock_pane_ParamLimits

0x58a9,	// (0x0001c6dc) list_single_fs_bigclock_pane

0x58cf,	// (0x0001c702) main_fs_bigclock_indicator_pane_t1

0x58de,	// (0x0001c711) list_single_fs_bigclock_pane_g1

0x58e6,	// (0x0001c719) list_single_fs_bigclock_pane_t1

0x3114,	// (0x00019f47) main_fs_bigclock_swipe_pane_g1

0x5926,	// (0x0001c759) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x00026cad) main_fs_bigclock_swipe_pane_g

0x592e,	// (0x0001c761) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x592e,	// (0x0001c761) main_fs_bigclock_swipe_pane_t1

0xa08a,	// (0x00020ebd) call_type_pane_ParamLimits

0x020d,	// (0x00017040) main_btmg_pane

0xe37c,	// (0x000251af) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe37c,	// (0x000251af) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x00026c20) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x00026c20) list_single_cale_mrui_row_pane_g

0x573b,	// (0x0001c56e) list_recal_vselct_arw_lo_pane

0x5743,	// (0x0001c576) list_recal_vselct_arw_up_pane

0x574b,	// (0x0001c57e) list_recal_vselct_pane

0x594b,	// (0x0001c77e) btmg_button_pane

0xe708,	// (0x0002553b) main_btmg_pane_g1

0x020d,	// (0x00017040) bg_button_pane_cp044

0x5953,	// (0x0001c786) btmg_button_pane_t1

0x2bec,	// (0x00019a1f) aid_listscroll_gen

0x0260,	// (0x00017093) main_cntbar_detail_pane

0x5364,	// (0x0001c197) list_cmail_folder_pane

0x5374,	// (0x0001c1a7) sp_fs_scroll_pane_cp03_ParamLimits

0xe710,	// (0x00025543) list_single_fs_dyc_pane_cp01_ParamLimits

0xe710,	// (0x00025543) list_single_fs_dyc_pane_cp01

0x5977,	// (0x0001c7aa) aid_size_cmail_indent

0x5980,	// (0x0001c7b3) list_single_dyc_row_pane_cp01

0xe742,	// (0x00025575) cntbar_detail_list_pane_ParamLimits

0xe742,	// (0x00025575) cntbar_detail_list_pane

0xe778,	// (0x000255ab) main_cntbar_detail_cont_pane_ParamLimits

0xe778,	// (0x000255ab) main_cntbar_detail_cont_pane

0xe784,	// (0x000255b7) scroll_pane_cp032_ParamLimits

0xe784,	// (0x000255b7) scroll_pane_cp032

0xe790,	// (0x000255c3) cntbar_detail_list_event_pane_ParamLimits

0xe790,	// (0x000255c3) cntbar_detail_list_event_pane

0xe74e,	// (0x00025581) cntbar_detail_list_shct_pane

0x5989,	// (0x0001c7bc) aid_list_gen

0x0b22,	// (0x00017955) aid_scroll

0x44ef,	// (0x0001b322) aid_size_touch_scroll_bar

0xccdf,	// (0x00023b12) aid_list_double

0x45de,	// (0x0001b411) aid_list_single

0x45a3,	// (0x0001b3d6) aid_list_single_lg

0xe7a0,	// (0x000255d3) aid_list_z_g_a_sm

0xe7a8,	// (0x000255db) aid_list_z_g_d

0xe7b0,	// (0x000255e3) aid_txt_z_prm

0xe7be,	// (0x000255f1) aid_txt_z_prm_cp01

0xe7cc,	// (0x000255ff) aid_txt_z_sec

0xe7da,	// (0x0002560d) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe7da,	// (0x0002560d) main_cntbar_detail_cont_pane_g1

0xe7e7,	// (0x0002561a) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe7e7,	// (0x0002561a) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x00026cb2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x00026cb2) main_cntbar_detail_cont_pane_g

0x5992,	// (0x0001c7c5) main_cntbar_detail_cont_pane_t1

0x59a0,	// (0x0001c7d3) main_cntbar_detail_cont_pane_t2

0x59ae,	// (0x0001c7e1) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x00026cb7) main_cntbar_detail_cont_pane_t

0xe7f3,	// (0x00025626) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe7f3,	// (0x00025626) cell_cntbar_detail_list_shct_pane

0x59bc,	// (0x0001c7ef) cntbar_detail_list_shct_pane_g1

0x59c5,	// (0x0001c7f8) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x00026cbe) cntbar_detail_list_shct_pane_g

0xe805,	// (0x00025638) cntbar_detail_list_event_pane_g1_ParamLimits

0xe805,	// (0x00025638) cntbar_detail_list_event_pane_g1

0xe811,	// (0x00025644) cntbar_detail_list_event_pane_g2_ParamLimits

0xe811,	// (0x00025644) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x00026cc3) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x00026cc3) cntbar_detail_list_event_pane_g

0xe87d,	// (0x000256b0) cntbar_detail_list_event_pane_t1_ParamLimits

0xe87d,	// (0x000256b0) cntbar_detail_list_event_pane_t1

0xe892,	// (0x000256c5) cntbar_detail_list_event_pane_t2_ParamLimits

0xe892,	// (0x000256c5) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x00026cd0) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x00026cd0) cntbar_detail_list_event_pane_t

0x3114,	// (0x00019f47) cell_cntbar_detail_list_shct_pane_g1

0x16b4,	// (0x000184e7) navi_pane_mv_g3

0x0260,	// (0x00017093) main_cntbar_detail_pane_ParamLimits

0x020d,	// (0x00017040) main_notif_wgt_pane

0x78a1,	// (0x0001e6d4) aid_tch_main_mp4_pane_g4

0x7ae0,	// (0x0001e913) popup_slider_window_cp02

0x5731,	// (0x0001c564) list_recal_day_event_pane

0xe728,	// (0x0002555b) cntbar_detail_btn_pane_ParamLimits

0xe728,	// (0x0002555b) cntbar_detail_btn_pane

0xe734,	// (0x00025567) cntbar_detail_btn_pane_cp01_ParamLimits

0xe734,	// (0x00025567) cntbar_detail_btn_pane_cp01

0xe74e,	// (0x00025581) cntbar_detail_list_shct_pane_ParamLimits

0xe75a,	// (0x0002558d) cntbar_detail_pane_g1_ParamLimits

0xe75a,	// (0x0002558d) cntbar_detail_pane_g1

0xe766,	// (0x00025599) cntbar_detail_pane_t1_ParamLimits

0xe766,	// (0x00025599) cntbar_detail_pane_t1

0xe81d,	// (0x00025650) cntbar_detail_list_event_pane_g3_ParamLimits

0xe81d,	// (0x00025650) cntbar_detail_list_event_pane_g3

0xe835,	// (0x00025668) cntbar_detail_list_event_pane_g4_ParamLimits

0xe835,	// (0x00025668) cntbar_detail_list_event_pane_g4

0xe84d,	// (0x00025680) cntbar_detail_list_event_pane_g5_ParamLimits

0xe84d,	// (0x00025680) cntbar_detail_list_event_pane_g5

0xe865,	// (0x00025698) cntbar_detail_list_event_pane_g6_ParamLimits

0xe865,	// (0x00025698) cntbar_detail_list_event_pane_g6

0xe8a7,	// (0x000256da) cntbar_detail_list_event_pane_t3_ParamLimits

0xe8a7,	// (0x000256da) cntbar_detail_list_event_pane_t3

0xe8b9,	// (0x000256ec) popup_notif_wgt_window_ParamLimits

0xe8b9,	// (0x000256ec) popup_notif_wgt_window

0xe8c7,	// (0x000256fa) popup_submenu_window_cp01_ParamLimits

0xe8c7,	// (0x000256fa) popup_submenu_window_cp01

0x0c34,	// (0x00017a67) bg_popup_window_pane_cp10

0x59ce,	// (0x0001c801) listscroll_notif_wgt_pane

0x59df,	// (0x0001c812) list_notif_wgt_window

0x59e8,	// (0x0001c81b) scroll_pane_cp033

0xe8d3,	// (0x00025706) list_notif_wgt_row_pane_ParamLimits

0xe8d3,	// (0x00025706) list_notif_wgt_row_pane

0x59f1,	// (0x0001c824) aid_size_list_notif_wgt_del

0x59fe,	// (0x0001c831) list_notif_wgt_row_pane_g1

0x5a0a,	// (0x0001c83d) list_notif_wgt_row_pane_g2

0x5a1e,	// (0x0001c851) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x00026cd7) list_notif_wgt_row_pane_g

0x5a2b,	// (0x0001c85e) list_notif_wgt_row_pane_t1

0x5a41,	// (0x0001c874) list_notif_wgt_row_pane_t2

0x5a53,	// (0x0001c886) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x00026cde) list_notif_wgt_row_pane_t

0x41e9,	// (0x0001b01c) list_recal_day_event_pane_g1

0x5a65,	// (0x0001c898) list_recal_day_event_pane_t1

0x020d,	// (0x00017040) bg_button_pane_cp045

0xe8e5,	// (0x00025718) cntbar_detail_btn_pane_t1

0x2c00,	// (0x00019a33) main_callh_pane_ParamLimits

0x2c00,	// (0x00019a33) main_callh_pane

0x020d,	// (0x00017040) main_coverflow0_pane

0x020d,	// (0x00017040) main_wgtman_pane

0xd814,	// (0x00024647) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd814,	// (0x00024647) main_fs_bigclock_unlock_btn_pane

0x5336,	// (0x0001c169) bg_button_pane_cp16

0x5346,	// (0x0001c179) cell_tport_appsw_pane_g3

0xe8f3,	// (0x00025726) cf0_flow_pane_ParamLimits

0xe8f3,	// (0x00025726) cf0_flow_pane

0x5a74,	// (0x0001c8a7) listscroll_cf0_pane

0x5a7d,	// (0x0001c8b0) main_cf0_pane_g1

0xe902,	// (0x00025735) main_cf0_pane_t1_ParamLimits

0xe902,	// (0x00025735) main_cf0_pane_t1

0xe914,	// (0x00025747) main_cf0_pane_t2_ParamLimits

0xe914,	// (0x00025747) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x00026cea) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x00026cea) main_cf0_pane_t

0x5a8f,	// (0x0001c8c2) scroll_pane_cp11

0xe926,	// (0x00025759) cf0_flow_pane_g1

0xe92e,	// (0x00025761) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x00026cef) cf0_flow_pane_g

0xe936,	// (0x00025769) cf0_flow_pane_t1

0x020d,	// (0x00017040) main_call6_pane

0x020d,	// (0x00017040) main_calllock_pane

0x845c,	// (0x0001f28f) call6_btn_grp_pane_ParamLimits

0x845c,	// (0x0001f28f) call6_btn_grp_pane

0x8469,	// (0x0001f29c) call6_pane_g1_ParamLimits

0x8469,	// (0x0001f29c) call6_pane_g1

0x8476,	// (0x0001f2a9) popup_call6_1st_window_ParamLimits

0x8476,	// (0x0001f2a9) popup_call6_1st_window

0x8482,	// (0x0001f2b5) popup_call6_2nd_window_ParamLimits

0x8482,	// (0x0001f2b5) popup_call6_2nd_window

0x848e,	// (0x0001f2c1) cell_call6_btn_pane_ParamLimits

0x848e,	// (0x0001f2c1) cell_call6_btn_pane

0x0c34,	// (0x00017a67) bg_popup_call2_in_pane_cp03

0x5a98,	// (0x0001c8cb) popup_call6_1st_window_g1

0x5aa0,	// (0x0001c8d3) popup_call6_1st_window_g2

0x5aa8,	// (0x0001c8db) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x00026cf4) popup_call6_1st_window_g

0x5ab0,	// (0x0001c8e3) popup_call6_1st_window_t1

0x5abf,	// (0x0001c8f2) popup_call6_1st_window_t2

0x5acd,	// (0x0001c900) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x00026cfb) popup_call6_1st_window_t

0x0c34,	// (0x00017a67) bg_popup_call2_in_pane_cp04

0x5a98,	// (0x0001c8cb) popup_call6_2nd_window_g1

0x5aa0,	// (0x0001c8d3) popup_call6_2nd_window_g2

0x5aa8,	// (0x0001c8db) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x00026cf4) popup_call6_2nd_window_g

0x5ab0,	// (0x0001c8e3) popup_call6_2nd_window_t1

0x6e4e,	// (0x0001dc81) bg_button_pane_cp15

0x849d,	// (0x0001f2d0) cell_call6_btn_pane_g1

0x84a6,	// (0x0001f2d9) cell_call6_btn_pane_t1

0xe944,	// (0x00025777) listscroll_wgtman_pane_ParamLimits

0xe944,	// (0x00025777) listscroll_wgtman_pane

0xe960,	// (0x00025793) wgtman_btn_pane_ParamLimits

0xe960,	// (0x00025793) wgtman_btn_pane

0x150b,	// (0x0001833e) aid_scroll_copy1

0x5af3,	// (0x0001c926) list_wgtman_pane

0xe993,	// (0x000257c6) wgtman_btn_pane_g1_ParamLimits

0xe993,	// (0x000257c6) wgtman_btn_pane_g1

0xe9bb,	// (0x000257ee) wgtman_btn_pane_t1_ParamLimits

0xe9bb,	// (0x000257ee) wgtman_btn_pane_t1

0x5afd,	// (0x0001c930) wgtman_btn_pane_t2_ParamLimits

0x5afd,	// (0x0001c930) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x00026d02) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x00026d02) wgtman_btn_pane_t

0xe9f2,	// (0x00025825) listrow_wgtman_pane_ParamLimits

0xe9f2,	// (0x00025825) listrow_wgtman_pane

0xea03,	// (0x00025836) listrow_wgtman_pane_g1

0xea10,	// (0x00025843) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x00026d07) listrow_wgtman_pane_g

0xea28,	// (0x0002585b) listrow_wgtman_pane_t1

0xea40,	// (0x00025873) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x00026d0c) listrow_wgtman_pane_t

0xea66,	// (0x00025899) wait_bar_pane_cp09

0x5b14,	// (0x0001c947) main_calllock_btn_pane

0x5b1c,	// (0x0001c94f) main_calllock_pane_g1

0x020d,	// (0x00017040) bg_button_pane_cp17

0x5b25,	// (0x0001c958) main_calllock_btn_pane_g1

0x5b2e,	// (0x0001c961) main_calllock_btn_pane_t1

0x020d,	// (0x00017040) main_dialer3_pane

0x020d,	// (0x00017040) main_fmrd2_pane

0x3114,	// (0x00019f47) main_fs_bigclock_unlock_btn_pane_g1

0x5b45,	// (0x0001c978) main_fs_bigclock_unlock_btn_pane_t1

0xea78,	// (0x000258ab) area_fmrd2_info_pane_ParamLimits

0xea78,	// (0x000258ab) area_fmrd2_info_pane

0xea84,	// (0x000258b7) area_fmrd2_visual_pane_ParamLimits

0xea84,	// (0x000258b7) area_fmrd2_visual_pane

0xea92,	// (0x000258c5) fmrd2_indi_pane_ParamLimits

0xea92,	// (0x000258c5) fmrd2_indi_pane

0xea9f,	// (0x000258d2) area_fmrd2_visual_pane_g1

0xeaa7,	// (0x000258da) area_fmrd2_visual_pane_t1

0xeab5,	// (0x000258e8) area_fmrd2_visual_pane_t2

0xeac3,	// (0x000258f6) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x00026d16) area_fmrd2_visual_pane_t

0xead1,	// (0x00025904) area_fmrd2_info_pane_g1

0xead9,	// (0x0002590c) area_fmrd2_info_pane_t1

0xeae7,	// (0x0002591a) area_fmrd2_info_pane_t2

0xeaf5,	// (0x00025928) area_fmrd2_info_pane_t3

0xeb03,	// (0x00025936) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x00026d1d) area_fmrd2_info_pane_t

0xeb11,	// (0x00025944) fmrd2_indi_pane_t1

0xeb1f,	// (0x00025952) fmrd2_indi_pane_t2

0xeb2d,	// (0x00025960) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x00026d26) fmrd2_indi_pane_t

0x4e97,	// (0x0001bcca) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x4e97,	// (0x0001bcca) list_single_fs_bigclock_indicator_pane_g5

0x4f45,	// (0x0001bd78) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x4f45,	// (0x0001bd78) list_single_fs_bigclock_indicator_pane_t5

0xe277,	// (0x000250aa) aid_cell_bcale_month_pane_ParamLimits

0xe277,	// (0x000250aa) aid_cell_bcale_month_pane

0xe295,	// (0x000250c8) bcale_month_pane_ParamLimits

0xe295,	// (0x000250c8) bcale_month_pane

0xe2ab,	// (0x000250de) bcale_preview_pane_ParamLimits

0xe2ab,	// (0x000250de) bcale_preview_pane

0x58e6,	// (0x0001c719) list_single_fs_bigclock_pane_t1_ParamLimits

0x5902,	// (0x0001c735) list_single_fs_bigclock_pane_t2_ParamLimits

0x5902,	// (0x0001c735) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x00026ca8) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x00026ca8) list_single_fs_bigclock_pane_t

0x5b3d,	// (0x0001c970) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x00026d11) main_fs_bigclock_unlock_btn_pane_g

0xeb3b,	// (0x0002596e) aid_dia3_key_size_ParamLimits

0xeb3b,	// (0x0002596e) aid_dia3_key_size

0xeb47,	// (0x0002597a) aid_dia3_listrow_size_ParamLimits

0xeb47,	// (0x0002597a) aid_dia3_listrow_size

0xeb55,	// (0x00025988) dia3_keypad_fun_pane_ParamLimits

0xeb55,	// (0x00025988) dia3_keypad_fun_pane

0xeb61,	// (0x00025994) dia3_keypad_num_pane_ParamLimits

0xeb61,	// (0x00025994) dia3_keypad_num_pane

0xeb6d,	// (0x000259a0) dia3_listscroll_pane_ParamLimits

0xeb6d,	// (0x000259a0) dia3_listscroll_pane

0xeb79,	// (0x000259ac) dia3_numentry_pane_ParamLimits

0xeb79,	// (0x000259ac) dia3_numentry_pane

0x5b65,	// (0x0001c998) dia3_list_pane

0x5b6e,	// (0x0001c9a1) scroll_pane_cp12

0x020d,	// (0x00017040) bg_dia3_numentry_pane

0xeb85,	// (0x000259b8) dia3_numentry_pane_t1

0xeb94,	// (0x000259c7) cell_dia3_key_num_pane

0xeb9c,	// (0x000259cf) cell_dia3_key0_fun_pane_ParamLimits

0xeb9c,	// (0x000259cf) cell_dia3_key0_fun_pane

0xeba9,	// (0x000259dc) cell_dia3_key1_fun_pane_ParamLimits

0xeba9,	// (0x000259dc) cell_dia3_key1_fun_pane

0xebb6,	// (0x000259e9) dia3_listrow_pane

0x4b98,	// (0x0001b9cb) bg_dia3_numentry_pane_g1

0x020d,	// (0x00017040) bg_button_pane_cp21

0x5b77,	// (0x0001c9aa) cell_dia3_key_num_pane_t1

0x5b85,	// (0x0001c9b8) cell_dia3_key_num_pane_t2

0x5b94,	// (0x0001c9c7) cell_dia3_key_num_pane_t3

0x5ba3,	// (0x0001c9d6) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x00026d2d) cell_dia3_key_num_pane_t

0x020d,	// (0x00017040) bg_button_pane_cp19

0x5bb2,	// (0x0001c9e5) cell_dia3_key0_fun_pane_g1

0x020d,	// (0x00017040) bg_button_pane_cp20

0xebc3,	// (0x000259f6) cell_dia3_key1_fun_pane_g1

0xebcb,	// (0x000259fe) area_left_week_number_pane

0xebdc,	// (0x00025a0f) area_top_day_name_pane

0xebe8,	// (0x00025a1b) frame_month_view_pane

0x5bba,	// (0x0001c9ed) grid_month_view_pane

0xebf9,	// (0x00025a2c) cell_top_day_name_pane_ParamLimits

0xebf9,	// (0x00025a2c) cell_top_day_name_pane

0xec0f,	// (0x00025a42) cell_area_left_week_number_pane_ParamLimits

0xec0f,	// (0x00025a42) cell_area_left_week_number_pane

0xec2e,	// (0x00025a61) cell_month_view_pane_ParamLimits

0xec2e,	// (0x00025a61) cell_month_view_pane

0x5bc8,	// (0x0001c9fb) frm_month_g1

0xec54,	// (0x00025a87) frm_month_g2

0xec63,	// (0x00025a96) frm_month_g3

0xec72,	// (0x00025aa5) frm_month_g4

0xec81,	// (0x00025ab4) frm_month_g5

0xec90,	// (0x00025ac3) frm_month_g6

0xec9f,	// (0x00025ad2) frm_month_g7

0x5bd5,	// (0x0001ca08) frm_month_g8

0xecae,	// (0x00025ae1) frm_month_g9

0xecbb,	// (0x00025aee) frm_month_g10

0xecc8,	// (0x00025afb) frm_month_g11

0xecd5,	// (0x00025b08) frm_month_g12

0xece2,	// (0x00025b15) frm_month_g13

0xecef,	// (0x00025b22) frm_month_g14

0xecfc,	// (0x00025b2f) frm_month_g15

0xed09,	// (0x00025b3c) frm_month_g16

0x000f,

0xff03,	// (0x00026d36) frm_month_g

0x5be2,	// (0x0001ca15) cell_top_day_name_pane_t1

0xed16,	// (0x00025b49) cell_area_left_week_number_pane_g1

0xed25,	// (0x00025b58) cell_area_left_week_number_pane_t1

0x3343,	// (0x0001a176) cell_month_view_pane_g1

0xed3b,	// (0x00025b6e) cell_month_view_pane_t1

0x020d,	// (0x00017040) main_fps_pane

0x5129,	// (0x0001bf5c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x5129,	// (0x0001bf5c) cmail_ddmenu_btn02_pane_cp1

0x5145,	// (0x0001bf78) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x5145,	// (0x0001bf78) cmail_ddmenu_btn02_pane_cp2

0xe59c,	// (0x000253cf) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe59c,	// (0x000253cf) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x00026c5b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x00026c5b) cmail_ddmenu_btn02_pane_g

0xe5ba,	// (0x000253ed) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe5ba,	// (0x000253ed) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x00026c60) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x00026c60) cmail_ddmenu_btn02_pane_t

0xed51,	// (0x00025b84) fps_text_pane_ParamLimits

0xed51,	// (0x00025b84) fps_text_pane

0xed5e,	// (0x00025b91) main_fps_pane_g1_ParamLimits

0xed5e,	// (0x00025b91) main_fps_pane_g1

0xed6a,	// (0x00025b9d) wait_bar_pane_cp010_ParamLimits

0xed6a,	// (0x00025b9d) wait_bar_pane_cp010

0xed76,	// (0x00025ba9) fps_text_pane_t1_ParamLimits

0xed76,	// (0x00025ba9) fps_text_pane_t1

0xc104,	// (0x00022f37) cam4_image_uncrop_pane_g1

0xc10d,	// (0x00022f40) cam4_image_uncrop_pane_g2

0xc116,	// (0x00022f49) cam4_image_uncrop_pane_g3

0xc11f,	// (0x00022f52) cam4_image_uncrop_pane_g4

0x0003,

0xf8ea,	// (0x0002671d) cam4_image_uncrop_pane_g

0xebb6,	// (0x000259e9) dia3_listrow_pane_ParamLimits

0x020d,	// (0x00017040) main_phob2_pane

0xe0f0,	// (0x00024f23) cell_tport_appsw_pane_cp02_ParamLimits

0xe0f0,	// (0x00024f23) cell_tport_appsw_pane_cp02

0xe0fd,	// (0x00024f30) cell_tport_appsw_pane_cp03_ParamLimits

0xe0fd,	// (0x00024f30) cell_tport_appsw_pane_cp03

0x020d,	// (0x00017040) phob2_contact_card_pane

0x020d,	// (0x00017040) phob2_listscroll_pane

0x5bf5,	// (0x0001ca28) phob2_list_pane

0x5bfd,	// (0x0001ca30) scroll_pane_cp034

0xed8f,	// (0x00025bc2) phob2_cc_data_pane_ParamLimits

0xed8f,	// (0x00025bc2) phob2_cc_data_pane

0xeda7,	// (0x00025bda) phob2_cc_listscroll_pane_ParamLimits

0xeda7,	// (0x00025bda) phob2_cc_listscroll_pane

0xedbf,	// (0x00025bf2) list_double_large_graphic_phob2_pane_ParamLimits

0xedbf,	// (0x00025bf2) list_double_large_graphic_phob2_pane

0xedd1,	// (0x00025c04) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xedd1,	// (0x00025c04) list_double_large_graphic_phob2_pane_g1

0xede7,	// (0x00025c1a) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xede7,	// (0x00025c1a) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x00026d57) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x00026d57) list_double_large_graphic_phob2_pane_g

0xedf3,	// (0x00025c26) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xedf3,	// (0x00025c26) list_double_large_graphic_phob2_pane_t1

0xee09,	// (0x00025c3c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xee09,	// (0x00025c3c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x00026d5c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x00026d5c) list_double_large_graphic_phob2_pane_t

0x020d,	// (0x00017040) list_highlight_pane_cp024

0xee1e,	// (0x00025c51) phob2_cc_button_pane

0xee26,	// (0x00025c59) phob2_cc_data_pane_g1_ParamLimits

0xee26,	// (0x00025c59) phob2_cc_data_pane_g1

0xee32,	// (0x00025c65) phob2_cc_data_pane_g2_ParamLimits

0xee32,	// (0x00025c65) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x00026d61) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x00026d61) phob2_cc_data_pane_g

0xee3e,	// (0x00025c71) phob2_cc_data_pane_t1_ParamLimits

0xee3e,	// (0x00025c71) phob2_cc_data_pane_t1

0xee50,	// (0x00025c83) phob2_cc_data_pane_t2_ParamLimits

0xee50,	// (0x00025c83) phob2_cc_data_pane_t2

0xee62,	// (0x00025c95) phob2_cc_data_pane_t3_ParamLimits

0xee62,	// (0x00025c95) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x00026d66) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x00026d66) phob2_cc_data_pane_t

0x5c05,	// (0x0001ca38) phob2_cc_list_pane_ParamLimits

0x5c05,	// (0x0001ca38) phob2_cc_list_pane

0x4ab5,	// (0x0001b8e8) scroll_pane_cp035_ParamLimits

0x4ab5,	// (0x0001b8e8) scroll_pane_cp035

0x0260,	// (0x00017093) bg_button_pane_cp033

0x5c11,	// (0x0001ca44) phob2_cc_button_pane_g1

0x5c1d,	// (0x0001ca50) phob2_cc_button_pane_t1

0x5c32,	// (0x0001ca65) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x00026d6d) phob2_cc_button_pane_t

0xee74,	// (0x00025ca7) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xee74,	// (0x00025ca7) list_double_large_graphic_phob2_cc_pane

0xeeba,	// (0x00025ced) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xeeba,	// (0x00025ced) list_double_large_graphic_phob2_cc_pane_g1

0xeecb,	// (0x00025cfe) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xeecb,	// (0x00025cfe) list_double_large_graphic_phob2_cc_pane_g2

0xeeda,	// (0x00025d0d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xeeda,	// (0x00025d0d) list_double_large_graphic_phob2_cc_pane_g3

0xeee9,	// (0x00025d1c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xeee9,	// (0x00025d1c) list_double_large_graphic_phob2_cc_pane_g4

0xeefa,	// (0x00025d2d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xeefa,	// (0x00025d2d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x00026d72) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x00026d72) list_double_large_graphic_phob2_cc_pane_g

0xef09,	// (0x00025d3c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xef09,	// (0x00025d3c) list_double_large_graphic_phob2_cc_pane_t1

0xef32,	// (0x00025d65) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xef32,	// (0x00025d65) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x00026d7d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x00026d7d) list_double_large_graphic_phob2_cc_pane_t

0x5c44,	// (0x0001ca77) list_highlight_pane_cp025_ParamLimits

0x5c44,	// (0x0001ca77) list_highlight_pane_cp025

0x0260,	// (0x00017093) bg_button_pane_cp033_ParamLimits

0x5c11,	// (0x0001ca44) phob2_cc_button_pane_g1_ParamLimits

0x5c1d,	// (0x0001ca50) phob2_cc_button_pane_t1_ParamLimits

0x5c32,	// (0x0001ca65) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x00026d6d) phob2_cc_button_pane_t_ParamLimits

0x851c,	// (0x0001f34f) popup_wgtman_window

0x4bb8,	// (0x0001b9eb) scroll_pane_cp038

0xe97b,	// (0x000257ae) wgtman_btn_pane_cp_01_ParamLimits

0xe97b,	// (0x000257ae) wgtman_btn_pane_cp_01

0x5c52,	// (0x0001ca85) wgtman_content_pane

0x5c5b,	// (0x0001ca8e) wgtman_heading_pane

0x020d,	// (0x00017040) bg_heading_pane_cp02

0x5c64,	// (0x0001ca97) wgtman_heading_pane_g1

0x5c6c,	// (0x0001ca9f) wgtman_heading_pane_t1

0x5c7a,	// (0x0001caad) scroll_pane_cp036

0x5c82,	// (0x0001cab5) wgtman_list_pane

0x5259,	// (0x0001c08c) wgtman_list_pane_t1_ParamLimits

0x5259,	// (0x0001c08c) wgtman_list_pane_t1

0x7d60,	// (0x0001eb93) cam4_grid_pane

0xc874,	// (0x000236a7) bg_button_pane_cp015_ParamLimits

0xc884,	// (0x000236b7) bg_button_pane_cp016_ParamLimits

0xc897,	// (0x000236ca) bg_button_pane_cp017_ParamLimits

0xc8e9,	// (0x0002371c) popup_vitu2_query_window_g3_ParamLimits

0xc8e9,	// (0x0002371c) popup_vitu2_query_window_g3

0xc99c,	// (0x000237cf) popup_vitu2_query_window_t6_ParamLimits

0xc99c,	// (0x000237cf) popup_vitu2_query_window_t6

0xc9c7,	// (0x000237fa) popup_vitu2_query_window_t7_ParamLimits

0xc9c7,	// (0x000237fa) popup_vitu2_query_window_t7

0x5b53,	// (0x0001c986) cam4_grid_pane_g1

0x5b5c,	// (0x0001c98f) cam4_grid_pane_g2

0x5c8a,	// (0x0001cabd) cam4_grid_pane_g3

0x5c93,	// (0x0001cac6) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x00026d82) cam4_grid_pane_g

0x9027,	// (0x0001fe5a) aid_placing_vt_slider_lsc_ParamLimits

0x92d1,	// (0x00020104) vidtel_button_pane_ParamLimits

0x92d1,	// (0x00020104) vidtel_button_pane

0x020d,	// (0x00017040) bg_button_pane_cp034

0xef5b,	// (0x00025d8e) vidtel_button_pane_g1

0xef63,	// (0x00025d96) vidtel_button_pane_t1

0x4177,	// (0x0001afaa) aid_size_vtel_slider_touch

0x4ab5,	// (0x0001b8e8) scroll_pane_cp039

0x4be7,	// (0x0001ba1a) ncim_query_button_pane_cp01_ParamLimits

0x4c06,	// (0x0001ba39) ncimui_query_pane_g1_ParamLimits

0x0260,	// (0x00017093) input_focus_pane_cp012_ParamLimits

0x4c2b,	// (0x0001ba5e) ncim_query_entry_pane_t1_ParamLimits

0x4ab5,	// (0x0001b8e8) scroll_pane_cp039_ParamLimits

0x15cf,	// (0x00018402) navi_pane_bcale_mc_g1

0x15d7,	// (0x0001840a) navi_pane_bcale_mc_t1

0x5179,	// (0x0001bfac) main_sp_fs_email_pane_g1

0x5185,	// (0x0001bfb8) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x00026b18) main_sp_fs_email_pane_g

0x562d,	// (0x0001c460) list_single_cale_mrui_row_pane_g3_ParamLimits

0x562d,	// (0x0001c460) list_single_cale_mrui_row_pane_g3

0xe5d8,	// (0x0002540b) list_single_recal_day_pane_g5_event_pane

0x5796,	// (0x0001c5c9) list_single_recal_day_pane_g7

0x5c9c,	// (0x0001cacf) list_recal_day_event_pane_cp01

0x5ca5,	// (0x0001cad8) list_recal_vselct_arw_lo_pane_cp01

0x5cad,	// (0x0001cae0) list_recal_vselct_arw_up_pane_cp01

0x5cb5,	// (0x0001cae8) list_recal_vselct_pane_cp01

0x41e9,	// (0x0001b01c) list_recal_day_event_pane_cp01_g1

0x5cbf,	// (0x0001caf2) list_recal_day_event_pane_cp01_t1

0x579e,	// (0x0001c5d1) list_single_recal_day_pane_t1_ParamLimits

0xe5ef,	// (0x00025422) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x00026c70) list_single_recal_day_pane_t_ParamLimits

0x08da,	// (0x0001770d) bg_notes_pane_ParamLimits

0x0985,	// (0x000177b8) list_notes_pane_ParamLimits

0x875e,	// (0x0001f591) scroll_pane_cp06_ParamLimits

0x09c5,	// (0x000177f8) main_notes_pane_ParamLimits

0x0260,	// (0x00017093) main_welc_pane

0xef86,	// (0x00025db9) main_welc_body_pane_ParamLimits

0xef86,	// (0x00025db9) main_welc_body_pane

0xef9f,	// (0x00025dd2) main_welc_opti_pane_ParamLimits

0xef9f,	// (0x00025dd2) main_welc_opti_pane

0xefd8,	// (0x00025e0b) main_welc_pane_t1_ParamLimits

0xefd8,	// (0x00025e0b) main_welc_pane_t1

0xf02c,	// (0x00025e5f) main_welc_body_row_pane_ParamLimits

0xf02c,	// (0x00025e5f) main_welc_body_row_pane

0x3cbe,	// (0x0001aaf1) main_welc_opti_row_pane_ParamLimits

0x3cbe,	// (0x0001aaf1) main_welc_opti_row_pane

0x5ccd,	// (0x0001cb00) main_welc_opti_row_pane_g1

0xf041,	// (0x00025e74) main_welc_opti_row_pane_t1

0x5cd5,	// (0x0001cb08) main_welc_body_row_pane_t1

0x59d7,	// (0x0001c80a) popup_notif_wgt_heading_pane

0x59f1,	// (0x0001c824) aid_size_list_notif_wgt_del_ParamLimits

0x59fe,	// (0x0001c831) list_notif_wgt_row_pane_g1_ParamLimits

0x5a0a,	// (0x0001c83d) list_notif_wgt_row_pane_g2_ParamLimits

0x5a1e,	// (0x0001c851) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x00026cd7) list_notif_wgt_row_pane_g_ParamLimits

0x5a2b,	// (0x0001c85e) list_notif_wgt_row_pane_t1_ParamLimits

0x5a41,	// (0x0001c874) list_notif_wgt_row_pane_t2_ParamLimits

0x5a53,	// (0x0001c886) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x00026cde) list_notif_wgt_row_pane_t_ParamLimits

0xea03,	// (0x00025836) listrow_wgtman_pane_g1_ParamLimits

0xea10,	// (0x00025843) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x00026d07) listrow_wgtman_pane_g_ParamLimits

0xea28,	// (0x0002585b) listrow_wgtman_pane_t1_ParamLimits

0xea40,	// (0x00025873) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x00026d0c) listrow_wgtman_pane_t_ParamLimits

0xea66,	// (0x00025899) wait_bar_pane_cp09_ParamLimits

0x020d,	// (0x00017040) bg_popup_heading_pane_cp02

0x5ce4,	// (0x0001cb17) popup_notif_wgt_heading_pane_g1

0x5cec,	// (0x0001cb1f) popup_notif_wgt_heading_pane_t1

0x2c0e,	// (0x00019a41) main_vids_pane

0x020d,	// (0x00017040) vids_listscroll_pane

0xf050,	// (0x00025e83) scroll_pane_cp040

0x020d,	// (0x00017040) vids_list_pane

0xf059,	// (0x00025e8c) vids_list_double_pane_ParamLimits

0xf059,	// (0x00025e8c) vids_list_double_pane

0xf06a,	// (0x00025e9d) vids_list_double_pane_g1

0xf073,	// (0x00025ea6) vids_list_double_pane_t1

0xf083,	// (0x00025eb6) vids_list_double_pane_t2

0x0001,

0xff66,	// (0x00026d99) vids_list_double_pane_t

0x7359,	// (0x0001e18c) main_ncimui_pane_ParamLimits

0xd428,	// (0x0002425b) main_ncimui_pane_g1_ParamLimits

0xd434,	// (0x00024267) main_ncimui_pane_g2_ParamLimits

0xd434,	// (0x00024267) main_ncimui_pane_g2

0x0001,

0xfbe6,	// (0x00026a19) main_ncimui_pane_g_ParamLimits

0xfbe6,	// (0x00026a19) main_ncimui_pane_g

0xefb4,	// (0x00025de7) main_welc_pane_g1_ParamLimits

0xefb4,	// (0x00025de7) main_welc_pane_g1

0xefc0,	// (0x00025df3) main_welc_pane_g2_ParamLimits

0xefc0,	// (0x00025df3) main_welc_pane_g2

0x0002,

0xff58,	// (0x00026d8b) main_welc_pane_g_ParamLimits

0xff58,	// (0x00026d8b) main_welc_pane_g

0x08da,	// (0x0001770d) listscroll_mce_pane_ParamLimits

0xa334,	// (0x00021167) wait_bar_pane_cp10

0x2bf4,	// (0x00019a27) main_cale_day_pane_ParamLimits

0x2bf4,	// (0x00019a27) main_cale_week_pane_ParamLimits

0x08da,	// (0x0001770d) main_messa_pane_ParamLimits

0xbb90,	// (0x000229c3) main_clock2_btn_pane_ParamLimits

0xbb90,	// (0x000229c3) main_clock2_btn_pane

0x353f,	// (0x0001a372) main_clock2_btn_pane_cp01_ParamLimits

0x353f,	// (0x0001a372) main_clock2_btn_pane_cp01

0x55e8,	// (0x0001c41b) list_cale_mrui_pane_ParamLimits

0x5a87,	// (0x0001c8ba) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x00026ce5) main_cf0_pane_g

0xebcb,	// (0x000259fe) area_left_week_number_pane_ParamLimits

0xebdc,	// (0x00025a0f) area_top_day_name_pane_ParamLimits

0xebe8,	// (0x00025a1b) frame_month_view_pane_ParamLimits

0x5bba,	// (0x0001c9ed) grid_month_view_pane_ParamLimits

0x5bc8,	// (0x0001c9fb) frm_month_g1_ParamLimits

0xec54,	// (0x00025a87) frm_month_g2_ParamLimits

0xec63,	// (0x00025a96) frm_month_g3_ParamLimits

0xec72,	// (0x00025aa5) frm_month_g4_ParamLimits

0xec81,	// (0x00025ab4) frm_month_g5_ParamLimits

0xec90,	// (0x00025ac3) frm_month_g6_ParamLimits

0xec9f,	// (0x00025ad2) frm_month_g7_ParamLimits

0x5bd5,	// (0x0001ca08) frm_month_g8_ParamLimits

0xecae,	// (0x00025ae1) frm_month_g9_ParamLimits

0xecbb,	// (0x00025aee) frm_month_g10_ParamLimits

0xecc8,	// (0x00025afb) frm_month_g11_ParamLimits

0xecd5,	// (0x00025b08) frm_month_g12_ParamLimits

0xece2,	// (0x00025b15) frm_month_g13_ParamLimits

0xecef,	// (0x00025b22) frm_month_g14_ParamLimits

0xecfc,	// (0x00025b2f) frm_month_g15_ParamLimits

0xed09,	// (0x00025b3c) frm_month_g16_ParamLimits

0xff03,	// (0x00026d36) frm_month_g_ParamLimits

0x5be2,	// (0x0001ca15) cell_top_day_name_pane_t1_ParamLimits

0xed16,	// (0x00025b49) cell_area_left_week_number_pane_g1_ParamLimits

0xed25,	// (0x00025b58) cell_area_left_week_number_pane_t1_ParamLimits

0x3343,	// (0x0001a176) cell_month_view_pane_g1_ParamLimits

0xed3b,	// (0x00025b6e) cell_month_view_pane_t1_ParamLimits

0x08d2,	// (0x00017705) main_clock2_btn_pane_g1

0x5cfa,	// (0x0001cb2d) main_clock2_btn_pane_t1

0x0260,	// (0x00017093) listscroll_cmail_pane_ParamLimits

0x5179,	// (0x0001bfac) main_sp_fs_email_pane_g1_ParamLimits

0x5185,	// (0x0001bfb8) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x00026b18) main_sp_fs_email_pane_g_ParamLimits

0x5712,	// (0x0001c545) list_recal_day_pane_ParamLimits

0x5723,	// (0x0001c556) mian_recal_day_pane_t1

0xde4f,	// (0x00024c82) list_single_dyc_row_text_pane_t4_ParamLimits

0xde4f,	// (0x00024c82) list_single_dyc_row_text_pane_t4

0xde86,	// (0x00024cb9) list_single_dyc_row_text_pane_t5_ParamLimits

0xde86,	// (0x00024cb9) list_single_dyc_row_text_pane_t5

0x51ef,	// (0x0001c022) list_single_dyc_row_text_pane_t6_ParamLimits

0x51ef,	// (0x0001c022) list_single_dyc_row_text_pane_t6

0x9ece,	// (0x00020d01) aid_mgn_list_cale_time_pane

0x7359,	// (0x0001e18c) main_gallery2_pane_ParamLimits

0x3553,	// (0x0001a386) main_clock2_pane_cp01_t1

0x3561,	// (0x0001a394) main_clock2_pane_cp01_t3

0x0001,

0xf7bc,	// (0x000265ef) main_clock2_pane_cp01_t

0x8a05,	// (0x0001f838) cale_week_scroll_pane_g16_ParamLimits

0x8a05,	// (0x0001f838) cale_week_scroll_pane_g16

0x0c34,	// (0x00017a67) vorec_slider_pane

0xef63,	// (0x00025d96) vidtel_button_pane_t1_ParamLimits

0x341c,	// (0x0001a24f) main_fs_bigclock_clock_pane_g1_ParamLimits

0xe688,	// (0x000254bb) main_fs_bigclock_clock_pane_g2_ParamLimits

0xe695,	// (0x000254c8) main_fs_bigclock_clock_pane_g3_ParamLimits

0xe695,	// (0x000254c8) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe60,	// (0x00026c93) main_fs_bigclock_clock_pane_g_ParamLimits

0xe6a1,	// (0x000254d4) main_fs_bigclock_clock_pane_t1_ParamLimits

0xe6b3,	// (0x000254e6) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe69,	// (0x00026c9c) main_fs_bigclock_clock_pane_t_ParamLimits

0xb4bc,	// (0x000222ef) main_mup3_lyrics_pane_ParamLimits

0xb4bc,	// (0x000222ef) main_mup3_lyrics_pane

0xf091,	// (0x00025ec4) main_mup3_lyrics_pane_t1_ParamLimits

0xf091,	// (0x00025ec4) main_mup3_lyrics_pane_t1

0x7899,	// (0x0001e6cc) aid_main_mp4_pane_t1_area

0x7899,	// (0x0001e6cc) aid_main_mp4_pane_t2_area

0x7984,	// (0x0001e7b7) main_mp4_pane_g7_ParamLimits

0x7984,	// (0x0001e7b7) main_mp4_pane_g7

0x7990,	// (0x0001e7c3) main_mp4_pane_g8_ParamLimits

0x7990,	// (0x0001e7c3) main_mp4_pane_g8

0xc0b8,	// (0x00022eeb) aid_call6_pane_g1_size

0xee9e,	// (0x00025cd1) list_double_large_graphic_phob2_other_pane_ParamLimits

0xee9e,	// (0x00025cd1) list_double_large_graphic_phob2_other_pane

0x1522,	// (0x00018355) list_double_large_graphic_phob2_other_pane_g1

0x020d,	// (0x00017040) list_highlight_pane_cp026

0x0260,	// (0x00017093) main_welc_pane_ParamLimits

0xdb73,	// (0x000249a6) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xdb73,	// (0x000249a6) main_sp_fs_ctrlbar_pane_g3

0xdb8b,	// (0x000249be) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xdb8b,	// (0x000249be) main_sp_fs_ctrlbar_pane_g4

0xdbcb,	// (0x000249fe) toolbar2_fixed_button_pane_cp01

0xdbd5,	// (0x00024a08) toolbar2_fixed_button_pane_cp02

0xdbe0,	// (0x00024a13) toolbar2_fixed_button_pane_cp03

0xef79,	// (0x00025dac) list_welc_entry_pane_ParamLimits

0xef79,	// (0x00025dac) list_welc_entry_pane

0xefcc,	// (0x00025dff) main_welc_pane_g3_ParamLimits

0xefcc,	// (0x00025dff) main_welc_pane_g3

0xeff0,	// (0x00025e23) main_welc_pane_t2_ParamLimits

0xeff0,	// (0x00025e23) main_welc_pane_t2

0xf002,	// (0x00025e35) main_welc_pane_t3_ParamLimits

0xf002,	// (0x00025e35) main_welc_pane_t3

0x0002,

0xff5f,	// (0x00026d92) main_welc_pane_t_ParamLimits

0xff5f,	// (0x00026d92) main_welc_pane_t

0xf014,	// (0x00025e47) welc_button_pane_ParamLimits

0xf014,	// (0x00025e47) welc_button_pane

0xf020,	// (0x00025e53) welc_service_logo_pane_ParamLimits

0xf020,	// (0x00025e53) welc_service_logo_pane

0x5d08,	// (0x0001cb3b) list_single_welc_entry_pane_ParamLimits

0x5d08,	// (0x0001cb3b) list_single_welc_entry_pane

0x5d19,	// (0x0001cb4c) list_single_welc_entry_pane_g1

0x5d21,	// (0x0001cb54) list_single_welc_entry_pane_t1

0x5d2f,	// (0x0001cb62) list_single_welc_entry_pane_t2

0x0001,

0xff6b,	// (0x00026d9e) list_single_welc_entry_pane_t

0x020d,	// (0x00017040) bg_button_pane_cp035

0x5d3d,	// (0x0001cb70) welc_button_pane_t1

0x5d4b,	// (0x0001cb7e) welc_service_logo_pane_g1

0x5d54,	// (0x0001cb87) welc_service_logo_pane_g2

0x0001,

0xff70,	// (0x00026da3) welc_service_logo_pane_g
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

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Normal
