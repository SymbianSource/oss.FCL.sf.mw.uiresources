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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00016dab };

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
0x82f4,	// (0x0001f09f) Screen

0x8300,	// (0x0001f0ab) application_window

0x8340,	// (0x0001f0eb) area_bottom_pane_ParamLimits

0x8340,	// (0x0001f0eb) area_bottom_pane

0x8375,	// (0x0001f120) area_top_pane_ParamLimits

0x8375,	// (0x0001f120) area_top_pane

0x0280,	// (0x0001702b) call_video_uplink_pane_ParamLimits

0x0280,	// (0x0001702b) call_video_uplink_pane

0x8402,	// (0x0001f1ad) main_pane_ParamLimits

0x8402,	// (0x0001f1ad) main_pane

0x2c01,	// (0x000199ac) context_pane

0xb113,	// (0x00021ebe) navi_pane

0xb137,	// (0x00021ee2) popup_cale_events_window_ParamLimits

0xb137,	// (0x00021ee2) popup_cale_events_window

0x2c14,	// (0x000199bf) popup_mup_playback_window

0xb14f,	// (0x00021efa) signal_pane

0x0a07,	// (0x000177b2) main_browser_pane

0x1743,	// (0x000184ee) main_burst_pane

0xafc5,	// (0x00021d70) main_calc_pane

0x1743,	// (0x000184ee) main_cale_day_pane

0x0a07,	// (0x000177b2) main_cale_month_pane

0x1743,	// (0x000184ee) main_cale_week_pane

0x1743,	// (0x000184ee) main_call_pane

0x06bf,	// (0x0001746a) main_call_poc_pane

0x1743,	// (0x000184ee) main_camera_pane

0x1743,	// (0x000184ee) main_chi_dic_pane

0x15e5,	// (0x00018390) main_clock_pane

0x06bf,	// (0x0001746a) main_fmradio_pane

0x1743,	// (0x000184ee) main_graph_messa_pane

0x06bf,	// (0x0001746a) main_help_pane

0x0a07,	// (0x000177b2) main_im_pane

0x091a,	// (0x000176c5) main_image_pane_ParamLimits

0x091a,	// (0x000176c5) main_image_pane

0x06bf,	// (0x0001746a) main_location2_pane

0x1743,	// (0x000184ee) main_location_pane

0x06bf,	// (0x0001746a) main_messa_pane

0x06bf,	// (0x0001746a) main_mp2_pane

0x1743,	// (0x000184ee) main_mp_pane

0x06bf,	// (0x0001746a) main_msg_pane

0x06bf,	// (0x0001746a) main_mup_eq_pane

0x06bf,	// (0x0001746a) main_mup_pane

0x1743,	// (0x000184ee) main_notes_pane

0x06bf,	// (0x0001746a) main_pec_pane

0x06bf,	// (0x0001746a) main_phob_pane

0x06bf,	// (0x0001746a) main_pinb_pane

0x06bf,	// (0x0001746a) main_postcard_pane

0x06bf,	// (0x0001746a) main_qdial_pane

0x1743,	// (0x000184ee) main_skin_pane

0x06bf,	// (0x0001746a) main_smil2_pane

0x1743,	// (0x000184ee) main_smil_pane

0x1743,	// (0x000184ee) main_video_pane

0x1743,	// (0x000184ee) main_video_tele_pane

0x091a,	// (0x000176c5) main_viewer_pane_ParamLimits

0x091a,	// (0x000176c5) main_viewer_pane

0x1743,	// (0x000184ee) main_vorec_pane

0xaffd,	// (0x00021da8) popup_blid_sat_info_window_ParamLimits

0xaffd,	// (0x00021da8) popup_blid_sat_info_window

0xb017,	// (0x00021dc2) popup_dyc_status_message_window_ParamLimits

0xb017,	// (0x00021dc2) popup_dyc_status_message_window

0xb027,	// (0x00021dd2) popup_grid_large_graphic_window_ParamLimits

0xb027,	// (0x00021dd2) popup_grid_large_graphic_window

0xb09f,	// (0x00021e4a) popup_loc_request_window_ParamLimits

0xb09f,	// (0x00021e4a) popup_loc_request_window

0xb0e7,	// (0x00021e92) popup_wml_address_window_ParamLimits

0xb0e7,	// (0x00021e92) popup_wml_address_window

0xae9d,	// (0x00021c48) call_muted_g1

0xab59,	// (0x00021904) popup_call_audio_conf_window_ParamLimits

0xab59,	// (0x00021904) popup_call_audio_conf_window

0xaead,	// (0x00021c58) popup_call_audio_first_window_ParamLimits

0xaead,	// (0x00021c58) popup_call_audio_first_window

0xaeed,	// (0x00021c98) popup_call_audio_in_window_ParamLimits

0xaeed,	// (0x00021c98) popup_call_audio_in_window

0xaf11,	// (0x00021cbc) popup_call_audio_out_window_ParamLimits

0xaf11,	// (0x00021cbc) popup_call_audio_out_window

0xaf33,	// (0x00021cde) popup_call_audio_second_window_ParamLimits

0xaf33,	// (0x00021cde) popup_call_audio_second_window

0xaf63,	// (0x00021d0e) popup_call_audio_wait_window_ParamLimits

0xaf63,	// (0x00021d0e) popup_call_audio_wait_window

0xaf84,	// (0x00021d2f) popup_number_entry_window_ParamLimits

0xaf84,	// (0x00021d2f) popup_number_entry_window

0x02ac,	// (0x00017057) bg_popup_call_pane_cp05_ParamLimits

0x02ac,	// (0x00017057) bg_popup_call_pane_cp05

0x02cc,	// (0x00017077) popup_number_entry_window_t1

0x02df,	// (0x0001708a) popup_number_entry_window_t2

0x02f1,	// (0x0001709c) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00025e97) popup_number_entry_window_t

0x0303,	// (0x000170ae) text_title_cp2

0x0316,	// (0x000170c1) bg_popup_call_pane_cp_ParamLimits

0x0316,	// (0x000170c1) bg_popup_call_pane_cp

0x0324,	// (0x000170cf) call_thumbnail_pane

0x032c,	// (0x000170d7) popup_call_audio_in_window_g1_ParamLimits

0x032c,	// (0x000170d7) popup_call_audio_in_window_g1

0x0338,	// (0x000170e3) popup_call_audio_in_window_g2_ParamLimits

0x0338,	// (0x000170e3) popup_call_audio_in_window_g2

0x0344,	// (0x000170ef) popup_call_audio_in_window_g3_ParamLimits

0x0344,	// (0x000170ef) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00025ea0) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00025ea0) popup_call_audio_in_window_g

0x0350,	// (0x000170fb) popup_call_audio_in_window_t1_ParamLimits

0x0350,	// (0x000170fb) popup_call_audio_in_window_t1

0x036c,	// (0x00017117) popup_call_audio_in_window_t2_ParamLimits

0x036c,	// (0x00017117) popup_call_audio_in_window_t2

0x0388,	// (0x00017133) popup_call_audio_in_window_t3_ParamLimits

0x0388,	// (0x00017133) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00025ea7) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00025ea7) popup_call_audio_in_window_t

0x0316,	// (0x000170c1) bg_popup_call_pane_cp01_ParamLimits

0x0316,	// (0x000170c1) bg_popup_call_pane_cp01

0x0324,	// (0x000170cf) call_thumbnail_pane_cp02

0x039b,	// (0x00017146) call_type_pane_cp022

0x03a3,	// (0x0001714e) popup_call_audio_out_window_g1_ParamLimits

0x03a3,	// (0x0001714e) popup_call_audio_out_window_g1

0x03b5,	// (0x00017160) popup_call_audio_out_window_g2_ParamLimits

0x03b5,	// (0x00017160) popup_call_audio_out_window_g2

0x03c1,	// (0x0001716c) popup_call_audio_out_window_g3_ParamLimits

0x03c1,	// (0x0001716c) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00025eae) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00025eae) popup_call_audio_out_window_g

0x03d3,	// (0x0001717e) popup_call_audio_out_window_t1_ParamLimits

0x03d3,	// (0x0001717e) popup_call_audio_out_window_t1

0x03eb,	// (0x00017196) popup_call_audio_out_window_t2_ParamLimits

0x03eb,	// (0x00017196) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00025eb5) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00025eb5) popup_call_audio_out_window_t

0x0400,	// (0x000171ab) bg_popup_call_pane_ParamLimits

0x0400,	// (0x000171ab) bg_popup_call_pane

0x85f6,	// (0x0001f3a1) call_thumbnail_pane_cp_ParamLimits

0x85f6,	// (0x0001f3a1) call_thumbnail_pane_cp

0x0484,	// (0x0001722f) call_type_pane_cp01_ParamLimits

0x0484,	// (0x0001722f) call_type_pane_cp01

0x04c8,	// (0x00017273) popup_call_audio_first_window_g1_ParamLimits

0x04c8,	// (0x00017273) popup_call_audio_first_window_g1

0x0514,	// (0x000172bf) popup_call_audio_first_window_g2_ParamLimits

0x0514,	// (0x000172bf) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00025eba) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00025eba) popup_call_audio_first_window_g

0x0558,	// (0x00017303) popup_call_audio_first_window_t1_ParamLimits

0x0558,	// (0x00017303) popup_call_audio_first_window_t1

0x0604,	// (0x000173af) popup_call_audio_first_window_t4_ParamLimits

0x0604,	// (0x000173af) popup_call_audio_first_window_t4

0x0690,	// (0x0001743b) popup_call_audio_first_window_t5_ParamLimits

0x0690,	// (0x0001743b) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00025ebf) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00025ebf) popup_call_audio_first_window_t

0x06bf,	// (0x0001746a) bg_popup_call_pane_cp02

0x06c9,	// (0x00017474) call_type_pane_cp023

0x06d1,	// (0x0001747c) popup_call_audio_wait_window_g1

0x06d9,	// (0x00017484) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00025ec6) popup_call_audio_wait_window_g

0x06e1,	// (0x0001748c) popup_call_audio_wait_window_t3

0x06ef,	// (0x0001749a) bg_popup_call_pane_cp03_ParamLimits

0x06ef,	// (0x0001749a) bg_popup_call_pane_cp03

0x074f,	// (0x000174fa) call_thumbnail_pane_cp011_ParamLimits

0x074f,	// (0x000174fa) call_thumbnail_pane_cp011

0x075b,	// (0x00017506) call_type_pane_cp034_ParamLimits

0x075b,	// (0x00017506) call_type_pane_cp034

0x0797,	// (0x00017542) popup_call_audio_second_window_g1_ParamLimits

0x0797,	// (0x00017542) popup_call_audio_second_window_g1

0x07d3,	// (0x0001757e) popup_call_audio_second_window_g2_ParamLimits

0x07d3,	// (0x0001757e) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00025ecb) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00025ecb) popup_call_audio_second_window_g

0x080f,	// (0x000175ba) popup_call_audio_second_window_t1_ParamLimits

0x080f,	// (0x000175ba) popup_call_audio_second_window_t1

0x0890,	// (0x0001763b) popup_call_audio_second_window_t2_ParamLimits

0x0890,	// (0x0001763b) popup_call_audio_second_window_t2

0x08c6,	// (0x00017671) popup_call_audio_second_window_t3_ParamLimits

0x08c6,	// (0x00017671) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00025ed0) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00025ed0) popup_call_audio_second_window_t

0x06bf,	// (0x0001746a) bg_popup_call_pane_cp04

0x08fc,	// (0x000176a7) list_conf_pane

0x0904,	// (0x000176af) popup_call_audio_conf_window_t1

0x0912,	// (0x000176bd) call_thumbnail_pane_g1

0x091a,	// (0x000176c5) bg_pinb_pane_ParamLimits

0x091a,	// (0x000176c5) bg_pinb_pane

0x0928,	// (0x000176d3) find_pinb_pane

0x0931,	// (0x000176dc) listscroll_pinb_pane_ParamLimits

0x0931,	// (0x000176dc) listscroll_pinb_pane

0x0940,	// (0x000176eb) pinb_bg_pane_g1

0x861a,	// (0x0001f3c5) pinb_bg_pane_g2

0x8626,	// (0x0001f3d1) pinb_bg_pane_g3

0x8632,	// (0x0001f3dd) pinb_bg_pane_g4

0x863e,	// (0x0001f3e9) pinb_bg_pane_g5

0x864a,	// (0x0001f3f5) pinb_bg_pane_g6

0x8655,	// (0x0001f400) pinb_bg_pane_g7

0x8660,	// (0x0001f40b) pinb_bg_pane_g8

0x866b,	// (0x0001f416) pinb_bg_pane_g9

0x8675,	// (0x0001f420) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00025ed7) pinb_bg_pane_g

0x8692,	// (0x0001f43d) grid_pinb_pane

0x869d,	// (0x0001f448) list_pinb_pane

0x86a8,	// (0x0001f453) scroll_pane_cp01_ParamLimits

0x86a8,	// (0x0001f453) scroll_pane_cp01

0x094a,	// (0x000176f5) find_pinb_pane_g1_ParamLimits

0x094a,	// (0x000176f5) find_pinb_pane_g1

0x0962,	// (0x0001770d) find_pinb_pane_t1

0x0974,	// (0x0001771f) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00025ef1) find_pinb_pane_t

0x0989,	// (0x00017734) input_focus_pane_cp01_ParamLimits

0x0989,	// (0x00017734) input_focus_pane_cp01

0x86ba,	// (0x0001f465) cell_pinb_pane_ParamLimits

0x86ba,	// (0x0001f465) cell_pinb_pane

0x86da,	// (0x0001f485) cell_pinb_pane_g1_ParamLimits

0x86da,	// (0x0001f485) cell_pinb_pane_g1

0x86ef,	// (0x0001f49a) cell_pinb_pane_g2_ParamLimits

0x86ef,	// (0x0001f49a) cell_pinb_pane_g2

0x0995,	// (0x00017740) cell_pinb_pane_g3_ParamLimits

0x0995,	// (0x00017740) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00025ef6) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00025ef6) cell_pinb_pane_g

0x06bf,	// (0x0001746a) grid_highlight_pane_cp01

0x86fb,	// (0x0001f4a6) list_pinb_item_pane_ParamLimits

0x86fb,	// (0x0001f4a6) list_pinb_item_pane

0x06bf,	// (0x0001746a) list_highlight_pane_cp02

0x8716,	// (0x0001f4c1) list_pinb_item_pane_g1_ParamLimits

0x8716,	// (0x0001f4c1) list_pinb_item_pane_g1

0x8723,	// (0x0001f4ce) list_pinb_item_pane_g2_ParamLimits

0x8723,	// (0x0001f4ce) list_pinb_item_pane_g2

0x872f,	// (0x0001f4da) list_pinb_item_pane_g3_ParamLimits

0x872f,	// (0x0001f4da) list_pinb_item_pane_g3

0x8740,	// (0x0001f4eb) list_pinb_item_pane_g4_ParamLimits

0x8740,	// (0x0001f4eb) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00025efd) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00025efd) list_pinb_item_pane_g

0x874c,	// (0x0001f4f7) list_pinb_item_pane_t1_ParamLimits

0x874c,	// (0x0001f4f7) list_pinb_item_pane_t1

0x6e47,	// (0x0001dbf2) calc_display_pane

0x6e65,	// (0x0001dc10) calc_paper_pane

0x6e81,	// (0x0001dc2c) grid_calc_pane

0x06bf,	// (0x0001746a) bg_list_pane_cp01

0x8763,	// (0x0001f50e) clock_g1

0x876b,	// (0x0001f516) clock_g2

0x0001,

0xf15b,	// (0x00025f06) clock_g

0x8775,	// (0x0001f520) clock_t1_ParamLimits

0x8775,	// (0x0001f520) clock_t1

0x878a,	// (0x0001f535) clock_t2_ParamLimits

0x878a,	// (0x0001f535) clock_t2

0x879c,	// (0x0001f547) clock_t3_ParamLimits

0x879c,	// (0x0001f547) clock_t3

0x87ae,	// (0x0001f559) clock_t4_ParamLimits

0x87ae,	// (0x0001f559) clock_t4

0x87c0,	// (0x0001f56b) clock_t5_ParamLimits

0x87c0,	// (0x0001f56b) clock_t5

0x87d5,	// (0x0001f580) clock_t6_ParamLimits

0x87d5,	// (0x0001f580) clock_t6

0x87e7,	// (0x0001f592) clock_t7_ParamLimits

0x87e7,	// (0x0001f592) clock_t7

0x87f9,	// (0x0001f5a4) clock_t8_ParamLimits

0x87f9,	// (0x0001f5a4) clock_t8

0x880f,	// (0x0001f5ba) clock_t9_ParamLimits

0x880f,	// (0x0001f5ba) clock_t9

0x0008,

0xf160,	// (0x00025f0b) clock_t_ParamLimits

0xf160,	// (0x00025f0b) clock_t

0x09a9,	// (0x00017754) popup_clock_analogue_window_cp02

0x09a9,	// (0x00017754) popup_clock_digital_window_cp01

0x09b1,	// (0x0001775c) listscroll_help_pane

0x06bf,	// (0x0001746a) phob_pre_status_pane

0x09bb,	// (0x00017766) grid_qdial_pane

0x06bf,	// (0x0001746a) listscroll_mce_pane

0x09c5,	// (0x00017770) bg_notes_pane

0x09cf,	// (0x0001777a) list_notes_pane

0x8825,	// (0x0001f5d0) scroll_pane_cp06

0x09d9,	// (0x00017784) bg_calc_paper_pane

0x6eb7,	// (0x0001dc62) list_calc_pane

0x0a07,	// (0x000177b2) bg_calc_display_pane

0x6ed1,	// (0x0001dc7c) calc_display_pane_t1

0x6ee6,	// (0x0001dc91) calc_display_pane_t2

0x6efb,	// (0x0001dca6) calc_display_pane_t3

0x0002,

0xf173,	// (0x00025f1e) calc_display_pane_t

0x6f0d,	// (0x0001dcb8) cell_calc_pane_ParamLimits

0x6f0d,	// (0x0001dcb8) cell_calc_pane

0x0a25,	// (0x000177d0) bg_calc_paper_pane_g1

0x0a3d,	// (0x000177e8) bg_calc_paper_pane_g2

0x0a31,	// (0x000177dc) bg_calc_paper_pane_g3

0x0a55,	// (0x00017800) bg_calc_paper_pane_g4

0x0a49,	// (0x000177f4) bg_calc_paper_pane_g5

0x8830,	// (0x0001f5db) bg_calc_paper_pane_g6

0x8841,	// (0x0001f5ec) bg_calc_paper_pane_g7

0x8852,	// (0x0001f5fd) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00025f25) bg_calc_paper_pane_g

0x8863,	// (0x0001f60e) calc_bg_paper_pane_g9

0x8874,	// (0x0001f61f) list_calc_item_pane_ParamLimits

0x8874,	// (0x0001f61f) list_calc_item_pane

0x0a61,	// (0x0001780c) list_calc_item_pane_g1

0x6f3c,	// (0x0001dce7) list_calc_item_pane_t1_ParamLimits

0x6f3c,	// (0x0001dce7) list_calc_item_pane_t1

0x6f4e,	// (0x0001dcf9) list_calc_item_pane_t2_ParamLimits

0x6f4e,	// (0x0001dcf9) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00025f36) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00025f36) list_calc_item_pane_t

0x0a80,	// (0x0001782b) cell_calc_pane_g1

0x0a8a,	// (0x00017835) grid_highlight_pane_cp02

0x0abf,	// (0x0001786a) bg_calc_display_pane_g1

0x6f7e,	// (0x0001dd29) bg_calc_display_pane_g2

0x0aac,	// (0x00017857) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00025f40) bg_calc_display_pane_g

0x6f88,	// (0x0001dd33) cell_qdial_pane_ParamLimits

0x6f88,	// (0x0001dd33) cell_qdial_pane

0x8898,	// (0x0001f643) cell_qdial_pane_g1_ParamLimits

0x8898,	// (0x0001f643) cell_qdial_pane_g1

0x88a5,	// (0x0001f650) cell_qdial_pane_g2_ParamLimits

0x88a5,	// (0x0001f650) cell_qdial_pane_g2

0x0ac8,	// (0x00017873) cell_qdial_pane_g3_ParamLimits

0x0ac8,	// (0x00017873) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00025f47) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00025f47) cell_qdial_pane_g

0x88c3,	// (0x0001f66e) cell_qdial_pane_t1_ParamLimits

0x88c3,	// (0x0001f66e) cell_qdial_pane_t1

0x88db,	// (0x0001f686) cell_qdial_pane_t2_ParamLimits

0x88db,	// (0x0001f686) cell_qdial_pane_t2

0x88ee,	// (0x0001f699) cell_qdial_pane_t3_ParamLimits

0x88ee,	// (0x0001f699) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00025f50) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00025f50) cell_qdial_pane_t

0x06bf,	// (0x0001746a) grid_highlight_pane_cp04

0x0ad4,	// (0x0001787f) thumbnail_qdial_pane_ParamLimits

0x0ad4,	// (0x0001787f) thumbnail_qdial_pane

0x0b30,	// (0x000178db) list_help_pane

0x0b39,	// (0x000178e4) scroll_pane_cp02

0x8901,	// (0x0001f6ac) help_list_pane_t1_ParamLimits

0x8901,	// (0x0001f6ac) help_list_pane_t1

0x6f9e,	// (0x0001dd49) bg_notes_pane_g2

0x6fa6,	// (0x0001dd51) bg_notes_pane_g3

0x6fae,	// (0x0001dd59) notes_bg_pane_g1

0x6fb6,	// (0x0001dd61) notes_bg_pane_g4

0x6fbe,	// (0x0001dd69) notes_bg_pane_g5

0x6fc6,	// (0x0001dd71) notes_bg_pane_g6

0x6fce,	// (0x0001dd79) notes_bg_pane_g7

0x6fd6,	// (0x0001dd81) notes_bg_pane_g8

0x6fde,	// (0x0001dd89) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00025f6e) notes_bg_pane_g

0x892b,	// (0x0001f6d6) list_notes_text_pane_ParamLimits

0x892b,	// (0x0001f6d6) list_notes_text_pane

0x0b8a,	// (0x00017935) list_notes_text_pane_g1

0x0b93,	// (0x0001793e) list_notes_text_pane_t1

0x0a07,	// (0x000177b2) listscroll_cale_week_pane

0x8965,	// (0x0001f710) bg_cale_heading_pane

0x0bb2,	// (0x0001795d) bg_cale_pane_cp01

0x8979,	// (0x0001f724) cale_week_corner_pane

0x898f,	// (0x0001f73a) cale_week_day_heading_pane

0x89a3,	// (0x0001f74e) cale_week_scroll_pane_g1

0x89b4,	// (0x0001f75f) cale_week_scroll_pane_g2

0x89c5,	// (0x0001f770) cale_week_scroll_pane_g3

0x89d6,	// (0x0001f781) cale_week_scroll_pane_g4

0x89e7,	// (0x0001f792) cale_week_scroll_pane_g5

0x89f8,	// (0x0001f7a3) cale_week_scroll_pane_g6

0x8a0b,	// (0x0001f7b6) cale_week_scroll_pane_g7

0x8a1e,	// (0x0001f7c9) cale_week_scroll_pane_g8

0x8a31,	// (0x0001f7dc) cale_week_scroll_pane_g9

0x8a42,	// (0x0001f7ed) cale_week_scroll_pane_g10

0x8a53,	// (0x0001f7fe) cale_week_scroll_pane_g11

0x8a64,	// (0x0001f80f) cale_week_scroll_pane_g12

0x8a75,	// (0x0001f820) cale_week_scroll_pane_g13

0x8a86,	// (0x0001f831) cale_week_scroll_pane_g14

0x8a97,	// (0x0001f842) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00025f7d) cale_week_scroll_pane_g

0x8aa8,	// (0x0001f853) cale_week_time_pane

0x8abb,	// (0x0001f866) grid_cale_week_pane

0x8ad0,	// (0x0001f87b) scroll_pane_cp08

0x8aea,	// (0x0001f895) cell_cale_week_pane_ParamLimits

0x8aea,	// (0x0001f895) cell_cale_week_pane

0x8b28,	// (0x0001f8d3) cale_week_day_heading_pane_t1

0x8b55,	// (0x0001f900) cale_week_day_heading_pane_t2

0x8b82,	// (0x0001f92d) cale_week_day_heading_pane_t3

0x8baf,	// (0x0001f95a) cale_week_day_heading_pane_t4

0x8bdc,	// (0x0001f987) cale_week_day_heading_pane_t5

0x8c09,	// (0x0001f9b4) cale_week_day_heading_pane_t6

0x8c36,	// (0x0001f9e1) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00025f9c) cale_week_day_heading_pane_t

0x0bdd,	// (0x00017988) bg_cale_side_pane

0x6fe6,	// (0x0001dd91) cale_week_time_pane_t1

0x7012,	// (0x0001ddbd) cale_week_time_pane_t2

0x703e,	// (0x0001dde9) cale_week_time_pane_t3

0x706a,	// (0x0001de15) cale_week_time_pane_t4

0x7096,	// (0x0001de41) cale_week_time_pane_t5

0x70c2,	// (0x0001de6d) cale_week_time_pane_t6

0x70ee,	// (0x0001de99) cale_week_time_pane_t7

0x711a,	// (0x0001dec5) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00025fab) cale_week_time_pane_t

0x8c63,	// (0x0001fa0e) cell_cale_week_pane_g2

0x8c7c,	// (0x0001fa27) cell_cale_week_pane_g3_ParamLimits

0x8c7c,	// (0x0001fa27) cell_cale_week_pane_g3

0x0beb,	// (0x00017996) grid_highlight_pane_cp07

0x0bf3,	// (0x0001799e) listscroll_gms_pane

0x0bfd,	// (0x000179a8) grid_gms_pane

0x0c06,	// (0x000179b1) listscroll_gms_pane_g1

0x0c0e,	// (0x000179b9) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00025fbc) listscroll_gms_pane_g

0x8c94,	// (0x0001fa3f) scroll_pane_cp010

0x8c9f,	// (0x0001fa4a) cell_gms_pane_ParamLimits

0x8c9f,	// (0x0001fa4a) cell_gms_pane

0x8cb2,	// (0x0001fa5d) cell_gms_pane_g1

0x0c16,	// (0x000179c1) cell_gms_pane_g2

0x0c1e,	// (0x000179c9) cell_gms_pane_g3

0x0c27,	// (0x000179d2) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00025fc1) cell_gms_pane_g

0x0c30,	// (0x000179db) grid_highlight_pane_cp09

0xae45,	// (0x00021bf0) phob_pre_status_pane_g1

0xae4d,	// (0x00021bf8) phob_pre_status_pane_g2

0xae55,	// (0x00021c00) phob_pre_status_pane_g3

0xae5d,	// (0x00021c08) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x000263b0) phob_pre_status_pane_g

0xae6d,	// (0x00021c18) phob_pre_status_pane_t1

0xae7d,	// (0x00021c28) phob_pre_status_pane_t2

0xae8d,	// (0x00021c38) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x000263bb) phob_pre_status_pane_t

0x06bf,	// (0x0001746a) bg_list_pane_cp05

0x714e,	// (0x0001def9) grid_vorec_pane

0x7158,	// (0x0001df03) vorec_t1

0x7166,	// (0x0001df11) vorec_t2

0x7174,	// (0x0001df1f) vorec_t3

0x7182,	// (0x0001df2d) vorec_t4

0x7190,	// (0x0001df3b) vorec_t5

0x719e,	// (0x0001df49) vorec_t6

0x0006,

0xf21f,	// (0x00025fca) vorec_t

0x71ba,	// (0x0001df65) wait_bar_pane_cp01

0x8cba,	// (0x0001fa65) cell_vorec_pane_ParamLimits

0x8cba,	// (0x0001fa65) cell_vorec_pane

0x0ca2,	// (0x00017a4d) cell_vorec_pane_g1

0x06bf,	// (0x0001746a) grid_highlight_pane_cp05

0x8cdf,	// (0x0001fa8a) cams_zoom_pane

0x8ceb,	// (0x0001fa96) image_vga_pane

0x8cfa,	// (0x0001faa5) main_camera_pane_g1

0x8d08,	// (0x0001fab3) main_camera_pane_g2

0x8d14,	// (0x0001fabf) main_camera_pane_g3

0x8d22,	// (0x0001facd) main_camera_pane_g4

0x8d30,	// (0x0001fadb) main_camera_pane_g5

0x8d3e,	// (0x0001fae9) main_camera_pane_g6

0x8d4c,	// (0x0001faf7) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00025fd9) main_camera_pane_g

0x8d5a,	// (0x0001fb05) main_camera_pane_t1

0x8d6c,	// (0x0001fb17) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00025fea) main_camera_pane_t

0x8d8f,	// (0x0001fb3a) cams_zoom_pane_cp_ParamLimits

0x8d8f,	// (0x0001fb3a) cams_zoom_pane_cp

0x8db3,	// (0x0001fb5e) image_cif_pane_ParamLimits

0x8db3,	// (0x0001fb5e) image_cif_pane

0x8dd1,	// (0x0001fb7c) image_subqcif_pane

0x8ddb,	// (0x0001fb86) main_video_pane_g1_ParamLimits

0x8ddb,	// (0x0001fb86) main_video_pane_g1

0x8dfb,	// (0x0001fba6) main_video_pane_g2_ParamLimits

0x8dfb,	// (0x0001fba6) main_video_pane_g2

0x8e2b,	// (0x0001fbd6) main_video_pane_g3_ParamLimits

0x8e2b,	// (0x0001fbd6) main_video_pane_g3

0x8e54,	// (0x0001fbff) main_video_pane_g4_ParamLimits

0x8e54,	// (0x0001fbff) main_video_pane_g4

0x8e7d,	// (0x0001fc28) main_video_pane_g5_ParamLimits

0x8e7d,	// (0x0001fc28) main_video_pane_g5

0x0cb8,	// (0x00017a63) main_video_pane_g6_ParamLimits

0x0cb8,	// (0x00017a63) main_video_pane_g6

0x0006,

0xf244,	// (0x00025fef) main_video_pane_g_ParamLimits

0xf244,	// (0x00025fef) main_video_pane_g

0x8e9f,	// (0x0001fc4a) main_video_pane_t1_ParamLimits

0x8e9f,	// (0x0001fc4a) main_video_pane_t1

0x0cd2,	// (0x00017a7d) cams_zoom_pane_g1

0x0cdb,	// (0x00017a86) cams_zoom_pane_g2

0x0ce4,	// (0x00017a8f) cams_zoom_pane_g3

0x0ced,	// (0x00017a98) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00025ffe) cams_zoom_pane_g

0x8ee9,	// (0x0001fc94) grid_cams_pane

0x8ef7,	// (0x0001fca2) linegrid_cams_pane

0x8f05,	// (0x0001fcb0) cell_cams_pane_ParamLimits

0x8f05,	// (0x0001fcb0) cell_cams_pane

0x0cf6,	// (0x00017aa1) cams_burst_image_pane

0x0cfe,	// (0x00017aa9) cell_cams_pane_g1

0x06bf,	// (0x0001746a) grid_highlight_pane_cp03

0x0a80,	// (0x0001782b) mp_bg_pane_g1

0x06bf,	// (0x0001746a) bg_list_pane_cp03

0x2ad3,	// (0x0001987e) bg_mp_pane

0x2adb,	// (0x00019886) grid_mp_pane

0x2ae3,	// (0x0001988e) media_player_g1

0x2aed,	// (0x00019898) media_player_t1

0x2afb,	// (0x000198a6) media_player_t2

0x2b09,	// (0x000198b4) media_player_t3

0x2b17,	// (0x000198c2) media_player_t4

0x2b25,	// (0x000198d0) media_player_t5

0x2b33,	// (0x000198de) media_player_t6

0x2b41,	// (0x000198ec) media_player_t7

0x0006,

0xf5ef,	// (0x0002639a) media_player_t

0x2b4f,	// (0x000198fa) wait_bar_pane_cp02

0xf5d4,	// (0x0002637f) main_usb_pane_t

0xae3c,	// (0x00021be7) cell_mp_pane

0x0a80,	// (0x0001782b) cell_mp_pane_g1

0x06bf,	// (0x0001746a) grid_highlight_pane_cp06

0x0dc4,	// (0x00017b6f) grid_skin_colour_pane

0x0dcc,	// (0x00017b77) list_highlight_pane_cp03

0x8f73,	// (0x0001fd1e) skin_g1

0x0dd4,	// (0x00017b7f) skin_t1

0x0de3,	// (0x00017b8e) skin_t2

0x0001,

0xf288,	// (0x00026033) skin_t

0x8f7d,	// (0x0001fd28) cell_skin_colour_pane_ParamLimits

0x8f7d,	// (0x0001fd28) cell_skin_colour_pane

0x0df1,	// (0x00017b9c) cell_skin_colour_pane_g1

0x8ffd,	// (0x0001fda8) call_video_g1_ParamLimits

0x8ffd,	// (0x0001fda8) call_video_g1

0x900d,	// (0x0001fdb8) call_video_g2_ParamLimits

0x900d,	// (0x0001fdb8) call_video_g2

0x0001,

0xf28d,	// (0x00026038) call_video_g_ParamLimits

0xf28d,	// (0x00026038) call_video_g

0x905d,	// (0x0001fe08) call_video_uplink_pane_cp1_ParamLimits

0x905d,	// (0x0001fe08) call_video_uplink_pane_cp1

0x0e03,	// (0x00017bae) call_video_uplink_pane_cp2

0x912b,	// (0x0001fed6) video_down_crop_pane_ParamLimits

0x912b,	// (0x0001fed6) video_down_crop_pane

0x921d,	// (0x0001ffc8) video_down_pane_ParamLimits

0x921d,	// (0x0001ffc8) video_down_pane

0x0e0b,	// (0x00017bb6) video_down_subqcif_pane_ParamLimits

0x0e0b,	// (0x00017bb6) video_down_subqcif_pane

0x0e25,	// (0x00017bd0) video_down_subqcif_pane_cp_ParamLimits

0x0e25,	// (0x00017bd0) video_down_subqcif_pane_cp

0x0e4b,	// (0x00017bf6) im_reading_pane_ParamLimits

0x0e4b,	// (0x00017bf6) im_reading_pane

0x933a,	// (0x000200e5) im_writing_pane_ParamLimits

0x933a,	// (0x000200e5) im_writing_pane

0x9358,	// (0x00020103) im_reading_pane_t1

0x0e65,	// (0x00017c10) list_im_pane

0x0e76,	// (0x00017c21) scroll_pane_cp07

0x93a0,	// (0x0002014b) im_writing_pane_t1_ParamLimits

0x93a0,	// (0x0002014b) im_writing_pane_t1

0x0e8f,	// (0x00017c3a) im_writing_pane_t2_ParamLimits

0x0e8f,	// (0x00017c3a) im_writing_pane_t2

0x0001,

0xf297,	// (0x00026042) im_writing_pane_t_ParamLimits

0xf297,	// (0x00026042) im_writing_pane_t

0x06bf,	// (0x0001746a) input_focus_pane_cp04

0x06bf,	// (0x0001746a) input_focus_pane_cp05

0x93b2,	// (0x0002015d) list_im_single_pane_ParamLimits

0x93b2,	// (0x0002015d) list_im_single_pane

0x93ce,	// (0x00020179) list_single_im_pane_t1

0xae00,	// (0x00021bab) blid_accuracy_pane

0xae08,	// (0x00021bb3) blid_compass_pane

0xae12,	// (0x00021bbd) main_location_t1

0xae20,	// (0x00021bcb) main_location_t2

0xae2e,	// (0x00021bd9) main_location_t3

0x0002,

0xf5fe,	// (0x000263a9) main_location_t

0x06bf,	// (0x0001746a) aid_levels_location

0x0a80,	// (0x0001782b) blid_accuracy_pane_g1

0x0a80,	// (0x0001782b) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x000260a4) blid_accuracy_pane_g

0x0ed7,	// (0x00017c82) wml_content_pane

0x0f15,	// (0x00017cc0) wml_button_pane_ParamLimits

0x0f15,	// (0x00017cc0) wml_button_pane

0x93dd,	// (0x00020188) wml_list_single_large_pane_ParamLimits

0x93dd,	// (0x00020188) wml_list_single_large_pane

0x93ff,	// (0x000201aa) wml_list_single_medium_pane_ParamLimits

0x93ff,	// (0x000201aa) wml_list_single_medium_pane

0x9425,	// (0x000201d0) wml_list_single_small_pane_ParamLimits

0x9425,	// (0x000201d0) wml_list_single_small_pane

0x0f29,	// (0x00017cd4) wml_selection_box_pane_ParamLimits

0x0f29,	// (0x00017cd4) wml_selection_box_pane

0x0f3c,	// (0x00017ce7) wml_list_single_pane_t1

0x0f4b,	// (0x00017cf6) wml_list_single_medium_pane_t1

0x0f5a,	// (0x00017d05) wml_list_single_large_pane_t1

0x0f69,	// (0x00017d14) input_focus_pane_cp02_ParamLimits

0x0f69,	// (0x00017d14) input_focus_pane_cp02

0x0f7c,	// (0x00017d27) wml_selection_box_pane_g1

0x0f85,	// (0x00017d30) wml_selection_box_pane_t1_ParamLimits

0x0f85,	// (0x00017d30) wml_selection_box_pane_t1

0x091a,	// (0x000176c5) bg_wml_button_pane_ParamLimits

0x091a,	// (0x000176c5) bg_wml_button_pane

0x0f9d,	// (0x00017d48) wml_button_pane_g1

0x0fa5,	// (0x00017d50) wml_button_pane_t1

0x0f9d,	// (0x00017d48) wml_button_bg_pane_g1

0x0fb5,	// (0x00017d60) wml_button_bg_pane_g2

0x0fbd,	// (0x00017d68) wml_button_bg_pane_g3

0x0fc5,	// (0x00017d70) wml_button_bg_pane_g4

0x0fcd,	// (0x00017d78) wml_button_bg_pane_g5

0x0fd5,	// (0x00017d80) wml_button_bg_pane_g6

0x0fdd,	// (0x00017d88) wml_button_bg_pane_g7

0x0fe5,	// (0x00017d90) wml_button_bg_pane_g8

0x0fed,	// (0x00017d98) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00026047) wml_button_bg_pane_g

0x9450,	// (0x000201fb) bg_list_pane_cp02

0x0ff5,	// (0x00017da0) mce_header_pane_ParamLimits

0x0ff5,	// (0x00017da0) mce_header_pane

0x100b,	// (0x00017db6) mce_icon_pane

0x100b,	// (0x00017db6) mce_image_pane

0x1014,	// (0x00017dbf) mce_text_pane_ParamLimits

0x1014,	// (0x00017dbf) mce_text_pane

0x945a,	// (0x00020205) scroll_pane_cp03

0x0f0d,	// (0x00017cb8) scroll_pane_cp04

0x1027,	// (0x00017dd2) scroll_pane_cp05_ParamLimits

0x1027,	// (0x00017dd2) scroll_pane_cp05

0x9464,	// (0x0002020f) mce_header_field_pane_ParamLimits

0x9464,	// (0x0002020f) mce_header_field_pane

0x9486,	// (0x00020231) mce_header_field_pane_2_ParamLimits

0x9486,	// (0x00020231) mce_header_field_pane_2

0x949c,	// (0x00020247) mce_header_field_pane_3

0x94a4,	// (0x0002024f) list_single_mce_message_pane_ParamLimits

0x94a4,	// (0x0002024f) list_single_mce_message_pane

0x94c3,	// (0x0002026e) list_single_mce_smart_pane_ParamLimits

0x94c3,	// (0x0002026e) list_single_mce_smart_pane

0x1033,	// (0x00017dde) input_focus_pane_cp03

0x103c,	// (0x00017de7) list_header_data_pane

0x94ed,	// (0x00020298) mce_header_field_pane_t1

0x94fd,	// (0x000202a8) list_single_mce_header_pane_ParamLimits

0x94fd,	// (0x000202a8) list_single_mce_header_pane

0x1044,	// (0x00017def) list_single_mce_header_pane_t1

0x1053,	// (0x00017dfe) list_single_mce_message_pane_g1

0x105b,	// (0x00017e06) list_single_mce_message_pane_t1

0x9539,	// (0x000202e4) bg_cale_heading_pane_cp01_ParamLimits

0x9539,	// (0x000202e4) bg_cale_heading_pane_cp01

0x1069,	// (0x00017e14) bg_cale_pane_cp02_ParamLimits

0x1069,	// (0x00017e14) bg_cale_pane_cp02

0x955c,	// (0x00020307) cale_month_corner_pane

0x9572,	// (0x0002031d) cale_month_day_heading_pane_ParamLimits

0x9572,	// (0x0002031d) cale_month_day_heading_pane

0x95a5,	// (0x00020350) cale_month_pane_g1_ParamLimits

0x95a5,	// (0x00020350) cale_month_pane_g1

0x95c1,	// (0x0002036c) cale_month_pane_g2_ParamLimits

0x95c1,	// (0x0002036c) cale_month_pane_g2

0x95dc,	// (0x00020387) cale_month_pane_g3_ParamLimits

0x95dc,	// (0x00020387) cale_month_pane_g3

0x9608,	// (0x000203b3) cale_month_pane_g4_ParamLimits

0x9608,	// (0x000203b3) cale_month_pane_g4

0x9634,	// (0x000203df) cale_month_pane_g5_ParamLimits

0x9634,	// (0x000203df) cale_month_pane_g5

0x9660,	// (0x0002040b) cale_month_pane_g6_ParamLimits

0x9660,	// (0x0002040b) cale_month_pane_g6

0x969c,	// (0x00020447) cale_month_pane_g7_ParamLimits

0x969c,	// (0x00020447) cale_month_pane_g7

0x96d8,	// (0x00020483) cale_month_pane_g8_ParamLimits

0x96d8,	// (0x00020483) cale_month_pane_g8

0x9714,	// (0x000204bf) cale_month_pane_g9_ParamLimits

0x9714,	// (0x000204bf) cale_month_pane_g9

0x974e,	// (0x000204f9) cale_month_pane_g10_ParamLimits

0x974e,	// (0x000204f9) cale_month_pane_g10

0x9788,	// (0x00020533) cale_month_pane_g11_ParamLimits

0x9788,	// (0x00020533) cale_month_pane_g11

0x97c2,	// (0x0002056d) cale_month_pane_g12_ParamLimits

0x97c2,	// (0x0002056d) cale_month_pane_g12

0x97fc,	// (0x000205a7) cale_month_pane_g13_ParamLimits

0x97fc,	// (0x000205a7) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0002605a) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0002605a) cale_month_pane_g

0x9836,	// (0x000205e1) cale_month_week_pane

0x9849,	// (0x000205f4) grid_cale_month_pane_ParamLimits

0x9849,	// (0x000205f4) grid_cale_month_pane

0x9877,	// (0x00020622) cale_month_day_heading_pane_t1

0x98d5,	// (0x00020680) cale_month_day_heading_pane_t2

0x993a,	// (0x000206e5) cale_month_day_heading_pane_t3

0x999f,	// (0x0002074a) cale_month_day_heading_pane_t4

0x9a04,	// (0x000207af) cale_month_day_heading_pane_t5

0x9a71,	// (0x0002081c) cale_month_day_heading_pane_t6

0x9ae6,	// (0x00020891) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00026075) cale_month_day_heading_pane_t

0x0bdd,	// (0x00017988) bg_cale_side_pane_cp01

0x9b5b,	// (0x00020906) cale_month_week_pane_t1

0x9b86,	// (0x00020931) cale_month_week_pane_t2

0x9bb1,	// (0x0002095c) cale_month_week_pane_t3

0x9bdc,	// (0x00020987) cale_month_week_pane_t4

0x9c07,	// (0x000209b2) cale_month_week_pane_t5

0x9c32,	// (0x000209dd) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00026084) cale_month_week_pane_t

0x9c5d,	// (0x00020a08) cell_cale_month_pane_ParamLimits

0x9c5d,	// (0x00020a08) cell_cale_month_pane

0x71c2,	// (0x0001df6d) cell_cale_month_pane_g1

0x71ce,	// (0x0001df79) cell_cale_month_pane_t1_ParamLimits

0x71ce,	// (0x0001df79) cell_cale_month_pane_t1

0x0beb,	// (0x00017996) grid_highlight_pane_cp08

0x0a80,	// (0x0001782b) main_smil_g1

0x9d2b,	// (0x00020ad6) smil_status_pane

0x10d4,	// (0x00017e7f) smil_text_pane

0x29f1,	// (0x0001979c) bg_popup_call3_rect_pane_g8

0x29f9,	// (0x000197a4) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0002633d) bg_popup_call3_rect_pane_g

0x2ca1,	// (0x00019a4c) smil_status_volume_pane_g1

0x10de,	// (0x00017e89) smil_status_pane_t1

0x730c,	// (0x0001e0b7) volume_smil_pane

0x10f5,	// (0x00017ea0) list_smil_text_pane

0x9d3e,	// (0x00020ae9) scroll_pane_cp011

0x9d49,	// (0x00020af4) smil_text_list_pane_t1_ParamLimits

0x9d49,	// (0x00020af4) smil_text_list_pane_t1

0x71ea,	// (0x0001df95) aid_volume_smil_ParamLimits

0x71ea,	// (0x0001df95) aid_volume_smil

0x0a80,	// (0x0001782b) smil_volume_pane_g1

0x0a80,	// (0x0001782b) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x000260a4) smil_volume_pane_g

0x0a07,	// (0x000177b2) listscroll_cale_day_pane

0x1121,	// (0x00017ecc) bg_cale_pane

0x1139,	// (0x00017ee4) list_cale_pane

0x114a,	// (0x00017ef5) scroll_pane_cp09

0x115b,	// (0x00017f06) cale_bg_pane_g1

0x1163,	// (0x00017f0e) cale_bg_pane_g2

0x116b,	// (0x00017f16) cale_bg_pane_g3

0x1173,	// (0x00017f1e) cale_bg_pane_g4

0x117b,	// (0x00017f26) cale_bg_pane_g5

0x1183,	// (0x00017f2e) cale_bg_pane_g6

0x118b,	// (0x00017f36) cale_bg_pane_g7

0x1193,	// (0x00017f3e) cale_bg_pane_g8

0x119b,	// (0x00017f46) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x000260a9) cale_bg_pane_g

0x9dad,	// (0x00020b58) list_cale_time_pane_ParamLimits

0x9dad,	// (0x00020b58) list_cale_time_pane

0x9dc5,	// (0x00020b70) list_cale_time_pane_g1_ParamLimits

0x9dc5,	// (0x00020b70) list_cale_time_pane_g1

0x11a3,	// (0x00017f4e) list_cale_time_pane_g2_ParamLimits

0x11a3,	// (0x00017f4e) list_cale_time_pane_g2

0x9dd1,	// (0x00020b7c) list_cale_time_pane_g3_ParamLimits

0x9dd1,	// (0x00020b7c) list_cale_time_pane_g3

0x9ddf,	// (0x00020b8a) list_cale_time_pane_g4_ParamLimits

0x9ddf,	// (0x00020b8a) list_cale_time_pane_g4

0x9ded,	// (0x00020b98) list_cale_time_pane_g5_ParamLimits

0x9ded,	// (0x00020b98) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x000260bc) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x000260bc) list_cale_time_pane_g

0x9dfb,	// (0x00020ba6) list_cale_time_pane_t1_ParamLimits

0x9dfb,	// (0x00020ba6) list_cale_time_pane_t1

0x9e23,	// (0x00020bce) list_cale_time_pane_t2_ParamLimits

0x9e23,	// (0x00020bce) list_cale_time_pane_t2

0xa123,	// (0x00020ece) aid_blid_cardinal_pane

0xa165,	// (0x00020f10) compass_pane_t4

0x9e4b,	// (0x00020bf6) list_cale_time_pane_t4_ParamLimits

0x9e4b,	// (0x00020bf6) list_cale_time_pane_t4

0xa173,	// (0x00020f1e) compass_pane_t5

0xa183,	// (0x00020f2e) compass_pane_t6

0xa191,	// (0x00020f3c) compass_pane_t7

0x1695,	// (0x00018440) navi_pane_cc_t1

0x17fc,	// (0x000185a7) aid_phob_thumbnail_center_pane

0xa8f6,	// (0x000216a1) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x000260c9) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x000260c9) list_cale_time_pane_t

0x0316,	// (0x000170c1) bg_popup_window_pane_cp02_ParamLimits

0x0316,	// (0x000170c1) bg_popup_window_pane_cp02

0x11bd,	// (0x00017f68) heading_pane_cp01_ParamLimits

0x11bd,	// (0x00017f68) heading_pane_cp01

0x11c9,	// (0x00017f74) loc_req_pane_ParamLimits

0x11c9,	// (0x00017f74) loc_req_pane

0x11d9,	// (0x00017f84) loc_type_pane_ParamLimits

0x11d9,	// (0x00017f84) loc_type_pane

0x11eb,	// (0x00017f96) loc_type_pane_t1_ParamLimits

0x11eb,	// (0x00017f96) loc_type_pane_t1

0x11fd,	// (0x00017fa8) loc_type_pane_t2_ParamLimits

0x11fd,	// (0x00017fa8) loc_type_pane_t2

0x120f,	// (0x00017fba) loc_type_pane_t3_ParamLimits

0x120f,	// (0x00017fba) loc_type_pane_t3

0x0002,

0xf325,	// (0x000260d0) loc_type_pane_t_ParamLimits

0xf325,	// (0x000260d0) loc_type_pane_t

0x1221,	// (0x00017fcc) list_loc_req_pane

0x122b,	// (0x00017fd6) scroll_pane_cp012

0x9e73,	// (0x00020c1e) list_single_loc_request_popup_menu_pane_ParamLimits

0x9e73,	// (0x00020c1e) list_single_loc_request_popup_menu_pane

0x1236,	// (0x00017fe1) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1236,	// (0x00017fe1) list_single_loc_request_popup_menu_pane_g1

0x1242,	// (0x00017fed) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1242,	// (0x00017fed) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x000260d7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x000260d7) list_single_loc_request_popup_menu_pane_g

0x124e,	// (0x00017ff9) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x124e,	// (0x00017ff9) list_single_loc_request_popup_menu_pane_t1

0x9e85,	// (0x00020c30) bg_popup_window_pane_cp03_ParamLimits

0x9e85,	// (0x00020c30) bg_popup_window_pane_cp03

0x9e93,	// (0x00020c3e) heading_loc_req_pane_ParamLimits

0x9e93,	// (0x00020c3e) heading_loc_req_pane

0x9e9f,	// (0x00020c4a) popup_dyc_status_message_window_g1_ParamLimits

0x9e9f,	// (0x00020c4a) popup_dyc_status_message_window_g1

0x9eab,	// (0x00020c56) popup_dyc_status_message_window_t1_ParamLimits

0x9eab,	// (0x00020c56) popup_dyc_status_message_window_t1

0x9ebd,	// (0x00020c68) popup_dyc_status_message_window_t2_ParamLimits

0x9ebd,	// (0x00020c68) popup_dyc_status_message_window_t2

0x9ecf,	// (0x00020c7a) popup_dyc_status_message_window_t3_ParamLimits

0x9ecf,	// (0x00020c7a) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x000260dc) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x000260dc) popup_dyc_status_message_window_t

0x06bf,	// (0x0001746a) bg_heading_pane_cp01

0x1270,	// (0x0001801b) heading_loc_req_pane_g1

0x1278,	// (0x00018023) heading_loc_req_pane_g2

0x1280,	// (0x0001802b) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x000260e3) heading_loc_req_pane_g

0x1288,	// (0x00018033) heading_loc_req_pane_t1

0x130f,	// (0x000180ba) bg_popup_sub_pane_cp01_ParamLimits

0x130f,	// (0x000180ba) bg_popup_sub_pane_cp01

0x131d,	// (0x000180c8) popup_cale_events_window_g1_ParamLimits

0x131d,	// (0x000180c8) popup_cale_events_window_g1

0x133d,	// (0x000180e8) popup_cale_events_window_g2_ParamLimits

0x133d,	// (0x000180e8) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00026117) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00026117) popup_cale_events_window_g

0x135d,	// (0x00018108) popup_cale_events_window_t1_ParamLimits

0x135d,	// (0x00018108) popup_cale_events_window_t1

0x136f,	// (0x0001811a) popup_cale_events_window_t2_ParamLimits

0x136f,	// (0x0001811a) popup_cale_events_window_t2

0x13ad,	// (0x00018158) popup_cale_events_window_t3_ParamLimits

0x13ad,	// (0x00018158) popup_cale_events_window_t3

0x13e7,	// (0x00018192) popup_cale_events_window_t4_ParamLimits

0x13e7,	// (0x00018192) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0002611c) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0002611c) popup_cale_events_window_t

0x9f53,	// (0x00020cfe) call_type_pane

0x1814,	// (0x000185bf) popup_call_status_window_g1

0x9f5f,	// (0x00020d0a) popup_call_status_window_g2

0x9f6b,	// (0x00020d16) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00026125) popup_call_status_window_g

0x141d,	// (0x000181c8) call_type_pane_g1

0x1426,	// (0x000181d1) call_type_pane_g2

0x0001,

0xf381,	// (0x0002612c) call_type_pane_g

0x06bf,	// (0x0001746a) bg_popup_sub_pane_cp02

0x142f,	// (0x000181da) listscroll_popup_wml_pane

0x1437,	// (0x000181e2) list_wml_pane

0x1441,	// (0x000181ec) scroll_pane_cp013

0x144c,	// (0x000181f7) list_single_graphic_popup_wml_pane_ParamLimits

0x144c,	// (0x000181f7) list_single_graphic_popup_wml_pane

0x0a80,	// (0x0001782b) list_single_graphic_popup_wml_pane_g1

0x1460,	// (0x0001820b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00026131) list_single_graphic_popup_wml_pane_g

0x1468,	// (0x00018213) list_single_graphic_popup_wml_pane_t1

0x1476,	// (0x00018221) aid_call_pane

0x0912,	// (0x000176bd) popup_clock_analogue_window_g1

0x0912,	// (0x000176bd) popup_clock_analogue_window_g2

0x720c,	// (0x0001dfb7) popup_clock_analogue_window_g3

0x720c,	// (0x0001dfb7) popup_clock_analogue_window_g4

0x0a80,	// (0x0001782b) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00026136) popup_clock_analogue_window_g

0x7214,	// (0x0001dfbf) popup_clock_analogue_window_t1

0x7222,	// (0x0001dfcd) clock_digital_number_pane_ParamLimits

0x7222,	// (0x0001dfcd) clock_digital_number_pane

0x722e,	// (0x0001dfd9) clock_digital_number_pane_cp02_ParamLimits

0x722e,	// (0x0001dfd9) clock_digital_number_pane_cp02

0x723a,	// (0x0001dfe5) clock_digital_number_pane_cp03_ParamLimits

0x723a,	// (0x0001dfe5) clock_digital_number_pane_cp03

0x7246,	// (0x0001dff1) clock_digital_number_pane_cp04_ParamLimits

0x7246,	// (0x0001dff1) clock_digital_number_pane_cp04

0x7252,	// (0x0001dffd) clock_digital_separator_pane_ParamLimits

0x7252,	// (0x0001dffd) clock_digital_separator_pane

0x725e,	// (0x0001e009) popup_clock_digital_window_t1

0x0a80,	// (0x0001782b) clock_digital_number_pane_g1

0x0a80,	// (0x0001782b) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x000260a4) clock_digital_number_pane_g

0x0a80,	// (0x0001782b) clock_digital_separator_pane_g1

0x0a80,	// (0x0001782b) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x000260a4) clock_digital_separator_pane_g

0x06bf,	// (0x0001746a) bg_popup_window_pane_cp04

0x14f5,	// (0x000182a0) heading_pane_cp03

0x14fd,	// (0x000182a8) listscroll_popup_gms_pane

0x1505,	// (0x000182b0) grid_large_graphic_popup_pane

0x150f,	// (0x000182ba) listscroll_popup_gms_pane_g1

0x1517,	// (0x000182c2) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00026141) listscroll_popup_gms_pane_g

0x0f0d,	// (0x00017cb8) scroll_pane_cp014

0x9f77,	// (0x00020d22) cell_large_graphic_popup_pane_ParamLimits

0x9f77,	// (0x00020d22) cell_large_graphic_popup_pane

0x9f91,	// (0x00020d3c) cell_large_graphic_popup_pane_g1_ParamLimits

0x9f91,	// (0x00020d3c) cell_large_graphic_popup_pane_g1

0x151f,	// (0x000182ca) cell_large_graphic_popup_pane_g2_ParamLimits

0x151f,	// (0x000182ca) cell_large_graphic_popup_pane_g2

0x152b,	// (0x000182d6) cell_large_graphic_popup_pane_g3_ParamLimits

0x152b,	// (0x000182d6) cell_large_graphic_popup_pane_g3

0x1538,	// (0x000182e3) cell_large_graphic_popup_pane_g4_ParamLimits

0x1538,	// (0x000182e3) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00026146) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00026146) cell_large_graphic_popup_pane_g

0x1548,	// (0x000182f3) grid_highlight_pane_cp010

0x0a80,	// (0x0001782b) bg_popup_call_pane_g1

0x1552,	// (0x000182fd) list_single_graphic_popup_conf_pane_ParamLimits

0x1552,	// (0x000182fd) list_single_graphic_popup_conf_pane

0x1564,	// (0x0001830f) list_highlight_pane_cp01

0x156d,	// (0x00018318) list_single_graphic_popup_conf_pane_g1

0x1575,	// (0x00018320) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0002614f) list_single_graphic_popup_conf_pane_g

0x157d,	// (0x00018328) list_single_graphic_popup_conf_pane_t1

0x158b,	// (0x00018336) linegrid_cams_pane_g1

0x9f9d,	// (0x00020d48) linegrid_cams_pane_g2

0x0c1e,	// (0x000179c9) linegrid_cams_pane_g3

0x1594,	// (0x0001833f) linegrid_cams_pane_g4

0x9fa6,	// (0x00020d51) linegrid_cams_pane_g5

0x9faf,	// (0x00020d5a) linegrid_cams_pane_g6

0x0c27,	// (0x000179d2) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00026154) linegrid_cams_pane_g

0x159d,	// (0x00018348) popup_clock_analogue_window

0x159d,	// (0x00018348) popup_clock_digital_window

0x06bf,	// (0x0001746a) popup_phob_thumbnail_window

0x0a80,	// (0x0001782b) call_video_uplink_pane_g1

0x15a6,	// (0x00018351) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00026163) call_video_uplink_pane_g

0x15ae,	// (0x00018359) video_uplink_pane

0x15b6,	// (0x00018361) mce_image_pane_g1

0x9fba,	// (0x00020d65) mce_image_pane_g2

0x9fc4,	// (0x00020d6f) mce_image_pane_g3

0x9fce,	// (0x00020d79) mce_image_pane_g4

0x9fd6,	// (0x00020d81) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00026168) mce_image_pane_g

0x15c0,	// (0x0001836b) control_top_pane_stacon_cp01_ParamLimits

0x15c0,	// (0x0001836b) control_top_pane_stacon_cp01

0x15d4,	// (0x0001837f) uni_indicator_pane_stacon_cp01_ParamLimits

0x15d4,	// (0x0001837f) uni_indicator_pane_stacon_cp01

0x15e5,	// (0x00018390) bg_popup_sub_pane_cp03

0x9fde,	// (0x00020d89) chi_dic_find_pane

0x9fe6,	// (0x00020d91) listscroll_chi_dic_pane

0x9fef,	// (0x00020d9a) main_pane_chidic_g1

0xa002,	// (0x00020dad) chi_dic_find_pane_t1

0x15ef,	// (0x0001839a) find_chidic_pane

0x15f8,	// (0x000183a3) chi_dic_list_pane_ParamLimits

0x15f8,	// (0x000183a3) chi_dic_list_pane

0x1609,	// (0x000183b4) scroll_pane_cp020

0xa010,	// (0x00020dbb) find_chidic_pane_t1

0x06bf,	// (0x0001746a) input_focus_pane_cp06

0xa01f,	// (0x00020dca) list_chi_dic_pane_ParamLimits

0xa01f,	// (0x00020dca) list_chi_dic_pane

0xa037,	// (0x00020de2) list_chi_dic_pane_t1_ParamLimits

0xa037,	// (0x00020de2) list_chi_dic_pane_t1

0x06bf,	// (0x0001746a) list_highlight_pane_cp020

0x1611,	// (0x000183bc) bg_cale_heading_pane_g1

0xa04a,	// (0x00020df5) bg_cale_heading_pane_g2

0xa052,	// (0x00020dfd) bg_cale_heading_pane_g3

0xa05a,	// (0x00020e05) bg_cale_heading_pane_g4

0xa064,	// (0x00020e0f) bg_cale_heading_pane_g5

0xa06e,	// (0x00020e19) bg_cale_heading_pane_g6

0xa076,	// (0x00020e21) bg_cale_heading_pane_g7

0xa07e,	// (0x00020e29) bg_cale_heading_pane_g8

0xa088,	// (0x00020e33) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00026173) bg_cale_heading_pane_g

0x1611,	// (0x000183bc) bg_cale_side_pane_g1

0xa092,	// (0x00020e3d) bg_cale_side_pane_g2

0xa09a,	// (0x00020e45) bg_cale_side_pane_g3

0xa0a2,	// (0x00020e4d) bg_cale_side_pane_g4

0xa0aa,	// (0x00020e55) bg_cale_side_pane_g5

0xa0b2,	// (0x00020e5d) bg_cale_side_pane_g6

0xa0ba,	// (0x00020e65) bg_cale_side_pane_g7

0xa0c2,	// (0x00020e6d) bg_cale_side_pane_g8

0xa0ca,	// (0x00020e75) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00026186) bg_cale_side_pane_g

0xa0d2,	// (0x00020e7d) popup_call_status_window_ParamLimits

0xa0d2,	// (0x00020e7d) popup_call_status_window

0x1619,	// (0x000183c4) stacon_top_pane

0x1621,	// (0x000183cc) status_pane_ParamLimits

0x1621,	// (0x000183cc) status_pane

0x1636,	// (0x000183e1) status_small_pane

0x163e,	// (0x000183e9) control_pane

0x06bf,	// (0x0001746a) stacon_bottom_pane

0x1646,	// (0x000183f1) list_single_mce_smart_pane_t1_ParamLimits

0x1646,	// (0x000183f1) list_single_mce_smart_pane_t1

0x1659,	// (0x00018404) list_single_mce_smart_pane_t2_ParamLimits

0x1659,	// (0x00018404) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00026199) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00026199) list_single_mce_smart_pane_t

0xa0de,	// (0x00020e89) compass_pane

0xa0e9,	// (0x00020e94) main_location2_pane_t1

0xa0fd,	// (0x00020ea8) main_location2_pane_t2

0xa0fd,	// (0x00020ea8) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0002619e) main_location2_pane_t

0x1678,	// (0x00018423) compass_pane_g1_ParamLimits

0x1678,	// (0x00018423) compass_pane_g1

0xa147,	// (0x00020ef2) compass_pane_t1

0xa156,	// (0x00020f01) compass_pane_t2

0x0005,

0xf3fc,	// (0x000261a7) compass_pane_t

0xa1a1,	// (0x00020f4c) text_secondary_cp61

0x168c,	// (0x00018437) navi_pane_cams_g5

0x16af,	// (0x0001845a) navi_pane_im_t1

0x16bd,	// (0x00018468) navi_pane_mp_g1_ParamLimits

0x16bd,	// (0x00018468) navi_pane_mp_g1

0x16d1,	// (0x0001847c) navi_pane_mp_g2_ParamLimits

0x16d1,	// (0x0001847c) navi_pane_mp_g2

0x16dd,	// (0x00018488) navi_pane_mp_g3_ParamLimits

0x16dd,	// (0x00018488) navi_pane_mp_g3

0x0002,

0xf410,	// (0x000261bb) navi_pane_mp_g_ParamLimits

0xf410,	// (0x000261bb) navi_pane_mp_g

0x16e9,	// (0x00018494) navi_pane_mp_t1

0x16f7,	// (0x000184a2) navi_pane_mp_t2

0x0002,

0xf417,	// (0x000261c2) navi_pane_mp_t

0x1733,	// (0x000184de) navi_pane_vt_g1

0x16e9,	// (0x00018494) navi_pane_vt_t1

0x173b,	// (0x000184e6) navi_slider_pane

0x1743,	// (0x000184ee) zooming_pane

0x174b,	// (0x000184f6) navi_slider_pane_g1

0x727b,	// (0x0001e026) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x000261c9) navi_slider_pane_g

0x1781,	// (0x0001852c) aid_levels_zoom

0x1789,	// (0x00018534) zooming_pane_g1

0x1791,	// (0x0001853c) zooming_pane_g2

0x1791,	// (0x0001853c) zooming_pane_g3

0x0002,

0xf42d,	// (0x000261d8) zooming_pane_g

0x1799,	// (0x00018544) level_10_zoom

0x17a2,	// (0x0001854d) level_11_zoom

0x17ab,	// (0x00018556) level_1_zoom

0x17b4,	// (0x0001855f) level_2_zoom

0x17bd,	// (0x00018568) level_3_zoom

0x17c6,	// (0x00018571) level_4_zoom

0x17cf,	// (0x0001857a) level_5_zoom

0x17d8,	// (0x00018583) level_6_zoom

0x17e1,	// (0x0001858c) level_7_zoom

0x17ea,	// (0x00018595) level_8_zoom

0x17f3,	// (0x0001859e) level_9_zoom

0x1804,	// (0x000185af) popup_phob_thumbnail_window_g1

0x180c,	// (0x000185b7) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x000261df) popup_phob_thumbnail_window_g

0x2b57,	// (0x00019902) level_1_location

0x2b5f,	// (0x0001990a) level_2_location

0x2b67,	// (0x00019912) level_3_location

0x2b6f,	// (0x0001991a) level_4_location

0x1743,	// (0x000184ee) level_5_location

0xa2b8,	// (0x00021063) mce_icon_pane_g1

0xa2c0,	// (0x0002106b) mce_icon_pane_g2

0x0001,

0xf439,	// (0x000261e4) mce_icon_pane_g

0xa2c8,	// (0x00021073) main_mup_pane_g1_ParamLimits

0xa2c8,	// (0x00021073) main_mup_pane_g1

0xa2e0,	// (0x0002108b) main_mup_pane_g2_ParamLimits

0xa2e0,	// (0x0002108b) main_mup_pane_g2

0xa2fc,	// (0x000210a7) main_mup_pane_g3_ParamLimits

0xa2fc,	// (0x000210a7) main_mup_pane_g3

0xa318,	// (0x000210c3) main_mup_pane_g4_ParamLimits

0xa318,	// (0x000210c3) main_mup_pane_g4

0xa32c,	// (0x000210d7) main_mup_pane_g5_ParamLimits

0xa32c,	// (0x000210d7) main_mup_pane_g5

0xa34d,	// (0x000210f8) main_mup_pane_g6_ParamLimits

0xa34d,	// (0x000210f8) main_mup_pane_g6

0xa36d,	// (0x00021118) main_mup_pane_g7_ParamLimits

0xa36d,	// (0x00021118) main_mup_pane_g7

0xa391,	// (0x0002113c) main_mup_pane_g8_ParamLimits

0xa391,	// (0x0002113c) main_mup_pane_g8

0xa3b5,	// (0x00021160) main_mup_pane_g9_ParamLimits

0xa3b5,	// (0x00021160) main_mup_pane_g9

0xa3d8,	// (0x00021183) main_mup_pane_g10_ParamLimits

0xa3d8,	// (0x00021183) main_mup_pane_g10

0xa3fb,	// (0x000211a6) main_mup_pane_g11_ParamLimits

0xa3fb,	// (0x000211a6) main_mup_pane_g11

0xa41b,	// (0x000211c6) main_mup_pane_g12_ParamLimits

0xa41b,	// (0x000211c6) main_mup_pane_g12

0xa429,	// (0x000211d4) main_mup_pane_g13_ParamLimits

0xa429,	// (0x000211d4) main_mup_pane_g13

0x000c,

0xf43e,	// (0x000261e9) main_mup_pane_g_ParamLimits

0xf43e,	// (0x000261e9) main_mup_pane_g

0xa43f,	// (0x000211ea) main_mup_pane_t1_ParamLimits

0xa43f,	// (0x000211ea) main_mup_pane_t1

0xa45e,	// (0x00021209) main_mup_pane_t2_ParamLimits

0xa45e,	// (0x00021209) main_mup_pane_t2

0xa478,	// (0x00021223) main_mup_pane_t3_ParamLimits

0xa478,	// (0x00021223) main_mup_pane_t3

0xa492,	// (0x0002123d) main_mup_pane_t4_ParamLimits

0xa492,	// (0x0002123d) main_mup_pane_t4

0xa4a4,	// (0x0002124f) main_mup_pane_t5_ParamLimits

0xa4a4,	// (0x0002124f) main_mup_pane_t5

0xa4b6,	// (0x00021261) main_mup_pane_t6_ParamLimits

0xa4b6,	// (0x00021261) main_mup_pane_t6

0x0005,

0xf459,	// (0x00026204) main_mup_pane_t_ParamLimits

0xf459,	// (0x00026204) main_mup_pane_t

0xa4cc,	// (0x00021277) mup_progress_pane_ParamLimits

0xa4cc,	// (0x00021277) mup_progress_pane

0xa4d8,	// (0x00021283) mup_visualizer_pane_ParamLimits

0xa4d8,	// (0x00021283) mup_visualizer_pane

0xa516,	// (0x000212c1) mup_volume_pane_ParamLimits

0xa516,	// (0x000212c1) mup_volume_pane

0x1814,	// (0x000185bf) mup_visualizer_pane_g1_ParamLimits

0x1814,	// (0x000185bf) mup_visualizer_pane_g1

0x1814,	// (0x000185bf) mup_visualizer_pane_g2_ParamLimits

0x1814,	// (0x000185bf) mup_visualizer_pane_g2

0x1678,	// (0x00018423) mup_visualizer_pane_g3_ParamLimits

0x1678,	// (0x00018423) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00026211) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00026211) mup_visualizer_pane_g

0x0a80,	// (0x0001782b) mup_volume_pane_g1

0x182a,	// (0x000185d5) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00026218) mup_volume_pane_g

0x0a80,	// (0x0001782b) mup_progress_pane_g1

0x1833,	// (0x000185de) mup_progress_pane_g2

0x183c,	// (0x000185e7) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0002621d) mup_progress_pane_g

0x06bf,	// (0x0001746a) bg_popup_window_pane_cp05

0x1845,	// (0x000185f0) heading_pane_cp02_ParamLimits

0x1845,	// (0x000185f0) heading_pane_cp02

0x1861,	// (0x0001860c) list_popup_blid_pane

0x1869,	// (0x00018614) list_blid_sat_info_pane_ParamLimits

0x1869,	// (0x00018614) list_blid_sat_info_pane

0x187c,	// (0x00018627) list_blid_sat_info_pane_g1

0x1884,	// (0x0001862f) list_blid_sat_info_pane_t1

0xa635,	// (0x000213e0) mup_equalizer_pane_ParamLimits

0xa635,	// (0x000213e0) mup_equalizer_pane

0xa656,	// (0x00021401) mup_equalizer_pane_cp1_ParamLimits

0xa656,	// (0x00021401) mup_equalizer_pane_cp1

0xa677,	// (0x00021422) mup_equalizer_pane_cp2_ParamLimits

0xa677,	// (0x00021422) mup_equalizer_pane_cp2

0xa698,	// (0x00021443) mup_equalizer_pane_cp3_ParamLimits

0xa698,	// (0x00021443) mup_equalizer_pane_cp3

0xa6bd,	// (0x00021468) mup_equalizer_pane_cp4_ParamLimits

0xa6bd,	// (0x00021468) mup_equalizer_pane_cp4

0xa6e2,	// (0x0002148d) mup_equalizer_pane_cp5

0xa6fa,	// (0x000214a5) mup_equalizer_pane_cp6

0xa712,	// (0x000214bd) mup_equalizer_pane_cp7

0x2a71,	// (0x0001981c) bg_popup_call_poc_act_pane_g9

0x2a79,	// (0x00019824) bg_popup_call_poc_act_pane_g10

0x2a81,	// (0x0001982c) bg_popup_call_poc_act_pane_g11

0x000a,

0x091a,	// (0x000176c5) mup_scale_pane

0x0a80,	// (0x0001782b) mup_scale_pane_g1

0x1892,	// (0x0001863d) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00026239) mup_scale_pane_g

0x18b6,	// (0x00018661) msg_data_pane

0x18be,	// (0x00018669) scroll_pane_cp017

0xa73c,	// (0x000214e7) bg_list_pane_cp04_ParamLimits

0xa73c,	// (0x000214e7) bg_list_pane_cp04

0x18c6,	// (0x00018671) msg_data_pane_g1

0xa764,	// (0x0002150f) msg_data_pane_g2

0xa76e,	// (0x00021519) msg_data_pane_g3

0xa778,	// (0x00021523) msg_data_pane_g4

0xa780,	// (0x0002152b) msg_data_pane_g5

0xa788,	// (0x00021533) msg_data_pane_g6

0xa790,	// (0x0002153b) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00026248) msg_data_pane_g

0xa798,	// (0x00021543) msg_text_pane_ParamLimits

0xa798,	// (0x00021543) msg_text_pane

0xa7c7,	// (0x00021572) qrid_highlight_pane_cp011_ParamLimits

0xa7c7,	// (0x00021572) qrid_highlight_pane_cp011

0x06bf,	// (0x0001746a) msg_body_pane

0x06bf,	// (0x0001746a) msg_header_pane

0x18d7,	// (0x00018682) input_focus_pane_cp07

0xa7eb,	// (0x00021596) msg_header_pane_t1_ParamLimits

0xa7eb,	// (0x00021596) msg_header_pane_t1

0xa7ff,	// (0x000215aa) msg_header_pane_t2_ParamLimits

0xa7ff,	// (0x000215aa) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0002625c) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0002625c) msg_header_pane_t

0x18ec,	// (0x00018697) msg_body_pane_g1

0xa811,	// (0x000215bc) msg_body_pane_t1_ParamLimits

0xa811,	// (0x000215bc) msg_body_pane_t1

0xa842,	// (0x000215ed) msg_body_pane_t2_ParamLimits

0xa842,	// (0x000215ed) msg_body_pane_t2

0xa854,	// (0x000215ff) msg_body_pane_t3_ParamLimits

0xa854,	// (0x000215ff) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00026261) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00026261) msg_body_pane_t

0x72bd,	// (0x0001e068) main_viewer_pane_g1_ParamLimits

0x72bd,	// (0x0001e068) main_viewer_pane_g1

0x72c9,	// (0x0001e074) main_viewer_pane_g2_ParamLimits

0x72c9,	// (0x0001e074) main_viewer_pane_g2

0xa888,	// (0x00021633) main_viewer_pane_g3_ParamLimits

0xa888,	// (0x00021633) main_viewer_pane_g3

0xa899,	// (0x00021644) main_viewer_pane_g4_ParamLimits

0xa899,	// (0x00021644) main_viewer_pane_g4

0x72d5,	// (0x0001e080) main_viewer_pane_g5_ParamLimits

0x72d5,	// (0x0001e080) main_viewer_pane_g5

0x72d5,	// (0x0001e080) main_viewer_pane_g7_ParamLimits

0x72d5,	// (0x0001e080) main_viewer_pane_g7

0x72e7,	// (0x0001e092) main_viewer_pane_g8_ParamLimits

0x72e7,	// (0x0001e092) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00026271) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00026271) main_viewer_pane_g

0x1936,	// (0x000186e1) viewer_content_pane_ParamLimits

0x1936,	// (0x000186e1) viewer_content_pane

0xa8ca,	// (0x00021675) main_postcard_pane_g1_ParamLimits

0xa8ca,	// (0x00021675) main_postcard_pane_g1

0xa8d8,	// (0x00021683) main_postcard_pane_g2_ParamLimits

0xa8d8,	// (0x00021683) main_postcard_pane_g2

0xa8e6,	// (0x00021691) main_postcard_pane_g3_ParamLimits

0xa8e6,	// (0x00021691) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00026282) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00026282) main_postcard_pane_g

0xa8f6,	// (0x000216a1) main_postcard_pane_g4

0x2c8e,	// (0x00019a39) smil_status_volume_pane_g2

0xa922,	// (0x000216cd) postcard_pane_ParamLimits

0xa922,	// (0x000216cd) postcard_pane

0x1814,	// (0x000185bf) postcard_pane_g1_ParamLimits

0x1814,	// (0x000185bf) postcard_pane_g1

0xa95c,	// (0x00021707) postcard_pane_g2_ParamLimits

0xa95c,	// (0x00021707) postcard_pane_g2

0xa968,	// (0x00021713) postcard_pane_g3_ParamLimits

0xa968,	// (0x00021713) postcard_pane_g3

0x1952,	// (0x000186fd) postcard_pane_g4_ParamLimits

0x1952,	// (0x000186fd) postcard_pane_g4

0xa974,	// (0x0002171f) postcard_pane_g5_ParamLimits

0xa974,	// (0x0002171f) postcard_pane_g5

0xa980,	// (0x0002172b) postcard_pane_g6_ParamLimits

0xa980,	// (0x0002172b) postcard_pane_g6

0x1944,	// (0x000186ef) postcard_pane_g7_ParamLimits

0x1944,	// (0x000186ef) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0002628f) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0002628f) postcard_pane_g

0xa98e,	// (0x00021739) main_mp2_pane_g1_ParamLimits

0xa98e,	// (0x00021739) main_mp2_pane_g1

0xa99c,	// (0x00021747) main_mp2_pane_g2_ParamLimits

0xa99c,	// (0x00021747) main_mp2_pane_g2

0xa9a8,	// (0x00021753) main_mp2_pane_g3_ParamLimits

0xa9a8,	// (0x00021753) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0002629e) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0002629e) main_mp2_pane_g

0xa9b4,	// (0x0002175f) main_mp2_pane_t1_ParamLimits

0xa9b4,	// (0x0002175f) main_mp2_pane_t1

0xa9cb,	// (0x00021776) main_mp2_pane_t2_ParamLimits

0xa9cb,	// (0x00021776) main_mp2_pane_t2

0xa9df,	// (0x0002178a) main_mp2_pane_t3_ParamLimits

0xa9df,	// (0x0002178a) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x000262a5) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x000262a5) main_mp2_pane_t

0x1960,	// (0x0001870b) pec_content_pane_ParamLimits

0x1960,	// (0x0001870b) pec_content_pane

0x0f0d,	// (0x00017cb8) scroll_pane_cp015

0x1972,	// (0x0001871d) pec_attribute_pane_ParamLimits

0x1972,	// (0x0001871d) pec_attribute_pane

0xa9f1,	// (0x0002179c) pec_content_pane_g1_ParamLimits

0xa9f1,	// (0x0002179c) pec_content_pane_g1

0x1982,	// (0x0001872d) pec_content_pane_t1_ParamLimits

0x1982,	// (0x0001872d) pec_content_pane_t1

0x1994,	// (0x0001873f) pec_content_pane_t2_ParamLimits

0x1994,	// (0x0001873f) pec_content_pane_t2

0x0001,

0xf501,	// (0x000262ac) pec_content_pane_t_ParamLimits

0xf501,	// (0x000262ac) pec_content_pane_t

0xa9fd,	// (0x000217a8) list_single_graphic_pane_cp01_ParamLimits

0xa9fd,	// (0x000217a8) list_single_graphic_pane_cp01

0x091a,	// (0x000176c5) bg_popup_sub_pane_cp04

0x19a6,	// (0x00018751) popup_mup_playback_window_g1

0x19b2,	// (0x0001875d) popup_mup_playback_window_t1

0x19c7,	// (0x00018772) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x000262b1) popup_mup_playback_window_t

0x19fe,	// (0x000187a9) main_image_pane_g1_ParamLimits

0x19fe,	// (0x000187a9) main_image_pane_g1

0x1a41,	// (0x000187ec) scroll_pane_cp018_ParamLimits

0x1a41,	// (0x000187ec) scroll_pane_cp018

0x1a59,	// (0x00018804) scroll_pane_cp016_ParamLimits

0x1a59,	// (0x00018804) scroll_pane_cp016

0xaa8e,	// (0x00021839) smil2_image_pane_ParamLimits

0xaa8e,	// (0x00021839) smil2_image_pane

0xaac4,	// (0x0002186f) smil2_root_pane_ParamLimits

0xaac4,	// (0x0002186f) smil2_root_pane

0xaaf0,	// (0x0002189b) smil2_text_pane_ParamLimits

0xaaf0,	// (0x0002189b) smil2_text_pane

0x06bf,	// (0x0001746a) bg_list_pane_cp06

0x1a95,	// (0x00018840) grid_radio_pane

0x06bf,	// (0x0001746a) bg_popup_window_pane_cp06

0x1a9f,	// (0x0001884a) main_fmradio_pane_t1

0x14f5,	// (0x000182a0) heading_pane_cp04

0x1aad,	// (0x00018858) main_fmradio_pane_t2

0x2a89,	// (0x00019834) popup_cale_lunar_info_window_g1

0x1abb,	// (0x00018866) main_fmradio_pane_t3

0x2a91,	// (0x0001983c) popup_cale_lunar_info_window_g2

0x1acb,	// (0x00018876) main_fmradio_pane_t4

0x0001,

0x1ad9,	// (0x00018884) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0002638c) popup_cale_lunar_info_window_g

0xf51b,	// (0x000262c6) main_fmradio_pane_t

0x1ae7,	// (0x00018892) wait_bar_pane_cp03

0x1aef,	// (0x0001889a) cell_fmradio_pane_ParamLimits

0x1aef,	// (0x0001889a) cell_fmradio_pane

0x1944,	// (0x000186ef) cell_fmradio_pane_g1_ParamLimits

0x1944,	// (0x000186ef) cell_fmradio_pane_g1

0x06bf,	// (0x0001746a) grid_highlight_pane_cp011

0x1b04,	// (0x000188af) poc_content_pane_ParamLimits

0x1b04,	// (0x000188af) poc_content_pane

0x1b16,	// (0x000188c1) scroll_pane_cp019

0xab30,	// (0x000218db) popup_call_poc_act_window_ParamLimits

0xab30,	// (0x000218db) popup_call_poc_act_window

0xab3d,	// (0x000218e8) popup_call_poc_inact_window_ParamLimits

0xab3d,	// (0x000218e8) popup_call_poc_inact_window

0xf5b8,	// (0x00026363) bg_popup_call_poc_act_pane_g

0x2a01,	// (0x000197ac) bg_popup_call_poc_inact_pane_g1

0x2a09,	// (0x000197b4) bg_popup_call_poc_inact_pane_g2

0x1b1e,	// (0x000188c9) popup_call_poc_act_window_g2

0x2a11,	// (0x000197bc) bg_popup_call_poc_inact_pane_g3

0x2a19,	// (0x000197c4) bg_popup_call_poc_inact_pane_g4

0x2a21,	// (0x000197cc) bg_popup_call_poc_inact_pane_g5

0x1b26,	// (0x000188d1) popup_call_poc_act_window_t1_ParamLimits

0x1b26,	// (0x000188d1) popup_call_poc_act_window_t1

0x1b4e,	// (0x000188f9) popup_call_poc_act_window_t2_ParamLimits

0x1b4e,	// (0x000188f9) popup_call_poc_act_window_t2

0x1b76,	// (0x00018921) popup_call_poc_act_window_t3_ParamLimits

0x1b76,	// (0x00018921) popup_call_poc_act_window_t3

0x1b9e,	// (0x00018949) popup_call_poc_act_window_t4_ParamLimits

0x1b9e,	// (0x00018949) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x000262d1) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x000262d1) popup_call_poc_act_window_t

0x2a29,	// (0x000197d4) bg_popup_call_poc_inact_pane_g6

0x2a31,	// (0x000197dc) bg_popup_call_poc_inact_pane_g7

0x2a39,	// (0x000197e4) bg_popup_call_poc_inact_pane_g8

0x1bb0,	// (0x0001895b) popup_call_poc_inact_window_g2

0x2a41,	// (0x000197ec) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x00026350) bg_popup_call_poc_inact_pane_g

0x1bb8,	// (0x00018963) popup_call_poc_inact_window_t1_ParamLimits

0x1bb8,	// (0x00018963) popup_call_poc_inact_window_t1

0x1bcd,	// (0x00018978) popup_call_poc_inact_window_t2_ParamLimits

0x1bcd,	// (0x00018978) popup_call_poc_inact_window_t2

0x1be2,	// (0x0001898d) popup_call_poc_inact_window_t3_ParamLimits

0x1be2,	// (0x0001898d) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x000262da) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x000262da) popup_call_poc_inact_window_t

0x2c01,	// (0x000199ac) context_pane_ParamLimits

0xb14f,	// (0x00021efa) signal_pane_ParamLimits

0x1743,	// (0x000184ee) main_call2_pane

0x2bef,	// (0x0001999a) popup_phob_thumbnail2_window_ParamLimits

0x2bef,	// (0x0001999a) popup_phob_thumbnail2_window

0x728d,	// (0x0001e038) aid_hotspot_pointer_arrow_pane

0x7295,	// (0x0001e040) aid_hotspot_pointer_hand_pane

0xae65,	// (0x00021c10) phob_pre_status_pane_g5

0x8cdf,	// (0x0001fa8a) cams_zoom_pane_ParamLimits

0x8ceb,	// (0x0001fa96) image_vga_pane_ParamLimits

0x8cfa,	// (0x0001faa5) main_camera_pane_g1_ParamLimits

0x8d08,	// (0x0001fab3) main_camera_pane_g2_ParamLimits

0x8d14,	// (0x0001fabf) main_camera_pane_g3_ParamLimits

0x8d22,	// (0x0001facd) main_camera_pane_g4_ParamLimits

0x8d30,	// (0x0001fadb) main_camera_pane_g5_ParamLimits

0x8d3e,	// (0x0001fae9) main_camera_pane_g6_ParamLimits

0x8d4c,	// (0x0001faf7) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00025fd9) main_camera_pane_g_ParamLimits

0x8d5a,	// (0x0001fb05) main_camera_pane_t1_ParamLimits

0x8d6c,	// (0x0001fb17) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00025fea) main_camera_pane_t_ParamLimits

0x091a,	// (0x000176c5) bg_popup_preview_window_pane_cp01_ParamLimits

0x091a,	// (0x000176c5) bg_popup_preview_window_pane_cp01

0x1bf7,	// (0x000189a2) popup_phob_thumbnail2_window_g1_ParamLimits

0x1bf7,	// (0x000189a2) popup_phob_thumbnail2_window_g1

0x06bf,	// (0x0001746a) call2_cli_visual_pane

0xab59,	// (0x00021904) popup_call2_audio_conf_window_ParamLimits

0xab59,	// (0x00021904) popup_call2_audio_conf_window

0xab72,	// (0x0002191d) popup_call2_audio_first_window_ParamLimits

0xab72,	// (0x0002191d) popup_call2_audio_first_window

0xac10,	// (0x000219bb) popup_call2_audio_in_window_ParamLimits

0xac10,	// (0x000219bb) popup_call2_audio_in_window

0xac54,	// (0x000219ff) popup_call2_audio_out_window_ParamLimits

0xac54,	// (0x000219ff) popup_call2_audio_out_window

0xacbe,	// (0x00021a69) popup_call2_audio_second_window_ParamLimits

0xacbe,	// (0x00021a69) popup_call2_audio_second_window

0xad1c,	// (0x00021ac7) popup_call2_audio_wait_window_ParamLimits

0xad1c,	// (0x00021ac7) popup_call2_audio_wait_window

0x06bf,	// (0x0001746a) bg_popup_call2_act_pane_cp03

0x08fc,	// (0x000176a7) list_conf_pane_cp

0x1c03,	// (0x000189ae) popup_call2_audio_conf_window_t1

0x1c11,	// (0x000189bc) list_single_graphic_popup_conf2_pane_ParamLimits

0x1c11,	// (0x000189bc) list_single_graphic_popup_conf2_pane

0x1564,	// (0x0001830f) list_highlight_pane_cp04

0x1c24,	// (0x000189cf) list_single_graphic_popup_conf2_pane_g1

0x1575,	// (0x00018320) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x000262e1) list_single_graphic_popup_conf2_pane_g

0x1c2e,	// (0x000189d9) list_single_graphic_popup_conf2_pane_t1

0x1c3c,	// (0x000189e7) bg_popup_call2_act_pane_cp01_ParamLimits

0x1c3c,	// (0x000189e7) bg_popup_call2_act_pane_cp01

0x1cc6,	// (0x00018a71) call_type_pane_cp05_ParamLimits

0x1cc6,	// (0x00018a71) call_type_pane_cp05

0x1d1a,	// (0x00018ac5) popup_call2_audio_second_window_g1_ParamLimits

0x1d1a,	// (0x00018ac5) popup_call2_audio_second_window_g1

0x1d6e,	// (0x00018b19) popup_call2_audio_second_window_g2_ParamLimits

0x1d6e,	// (0x00018b19) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x000262e6) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x000262e6) popup_call2_audio_second_window_g

0x1dd3,	// (0x00018b7e) popup_call2_audio_second_window_t1_ParamLimits

0x1dd3,	// (0x00018b7e) popup_call2_audio_second_window_t1

0x1e8e,	// (0x00018c39) popup_call2_audio_second_window_t2_ParamLimits

0x1e8e,	// (0x00018c39) popup_call2_audio_second_window_t2

0x1ee1,	// (0x00018c8c) popup_call2_audio_second_window_t3_ParamLimits

0x1ee1,	// (0x00018c8c) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x000262ed) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x000262ed) popup_call2_audio_second_window_t

0x06bf,	// (0x0001746a) bg_popup_call2_in_pane_cp02

0x06c9,	// (0x00017474) call_type_pane_cp04

0x06d1,	// (0x0001747c) popup_call2_audio_wait_window_g1

0x06d9,	// (0x00017484) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00025ec6) popup_call2_audio_wait_window_g

0x06e1,	// (0x0001748c) popup_call2_audio_wait_window_t3

0x1fd4,	// (0x00018d7f) bg_popup_call2_act_pane_ParamLimits

0x1fd4,	// (0x00018d7f) bg_popup_call2_act_pane

0x2094,	// (0x00018e3f) call_type_pane_cp03_ParamLimits

0x2094,	// (0x00018e3f) call_type_pane_cp03

0x20f8,	// (0x00018ea3) popup_call2_audio_first_window_g1_ParamLimits

0x20f8,	// (0x00018ea3) popup_call2_audio_first_window_g1

0x2168,	// (0x00018f13) popup_call2_audio_first_window_g2_ParamLimits

0x2168,	// (0x00018f13) popup_call2_audio_first_window_g2

0x1814,	// (0x000185bf) popup_call2_audio_first_window_g3_ParamLimits

0x1814,	// (0x000185bf) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x000262f6) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x000262f6) popup_call2_audio_first_window_g

0x2246,	// (0x00018ff1) popup_call2_audio_first_window_t1_ParamLimits

0x2246,	// (0x00018ff1) popup_call2_audio_first_window_t1

0x2349,	// (0x000190f4) popup_call2_audio_first_window_t4_ParamLimits

0x2349,	// (0x000190f4) popup_call2_audio_first_window_t4

0x242c,	// (0x000191d7) popup_call2_audio_first_window_t5_ParamLimits

0x242c,	// (0x000191d7) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00026301) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00026301) popup_call2_audio_first_window_t

0x0912,	// (0x000176bd) bg_popup_call2_act_pane_g1

0x2a9b,	// (0x00019846) popup_cale_lunar_info_window_t1

0x2aa9,	// (0x00019854) popup_cale_lunar_info_window_t2

0x2ab7,	// (0x00019862) popup_cale_lunar_info_window_t3

0x06bf,	// (0x0001746a) bg_popup_call2_bubble_pane

0x252d,	// (0x000192d8) bg_popup_call2_in_pane_cp01_ParamLimits

0x252d,	// (0x000192d8) bg_popup_call2_in_pane_cp01

0x039b,	// (0x00017146) call_type_pane_cp02

0x2575,	// (0x00019320) popup_call2_audio_out_window_g1_ParamLimits

0x2575,	// (0x00019320) popup_call2_audio_out_window_g1

0x25a1,	// (0x0001934c) popup_call2_audio_out_window_g2_ParamLimits

0x25a1,	// (0x0001934c) popup_call2_audio_out_window_g2

0x25c9,	// (0x00019374) popup_call2_audio_out_window_g3_ParamLimits

0x25c9,	// (0x00019374) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0002630a) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0002630a) popup_call2_audio_out_window_g

0x2604,	// (0x000193af) popup_call2_audio_out_window_t1_ParamLimits

0x2604,	// (0x000193af) popup_call2_audio_out_window_t1

0x2663,	// (0x0001940e) popup_call2_audio_out_window_t2_ParamLimits

0x2663,	// (0x0001940e) popup_call2_audio_out_window_t2

0x26b7,	// (0x00019462) popup_call2_audio_out_window_t3_ParamLimits

0x26b7,	// (0x00019462) popup_call2_audio_out_window_t3

0x26cd,	// (0x00019478) popup_call2_audio_out_window_t4_ParamLimits

0x26cd,	// (0x00019478) popup_call2_audio_out_window_t4

0x26e3,	// (0x0001948e) popup_call2_audio_out_window_t5_ParamLimits

0x26e3,	// (0x0001948e) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00026313) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00026313) popup_call2_audio_out_window_t

0x2747,	// (0x000194f2) bg_popup_call2_in_pane_ParamLimits

0x2747,	// (0x000194f2) bg_popup_call2_in_pane

0x27a3,	// (0x0001954e) popup_call2_audio_in_window_g1_ParamLimits

0x27a3,	// (0x0001954e) popup_call2_audio_in_window_g1

0x27db,	// (0x00019586) popup_call2_audio_in_window_g2_ParamLimits

0x27db,	// (0x00019586) popup_call2_audio_in_window_g2

0x2813,	// (0x000195be) popup_call2_audio_in_window_g3_ParamLimits

0x2813,	// (0x000195be) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00026320) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00026320) popup_call2_audio_in_window_g

0x286b,	// (0x00019616) popup_call2_audio_in_window_t1_ParamLimits

0x286b,	// (0x00019616) popup_call2_audio_in_window_t1

0x28eb,	// (0x00019696) popup_call2_audio_in_window_t2_ParamLimits

0x28eb,	// (0x00019696) popup_call2_audio_in_window_t2

0x296b,	// (0x00019716) popup_call2_audio_in_window_t3_ParamLimits

0x296b,	// (0x00019716) popup_call2_audio_in_window_t3

0x2985,	// (0x00019730) popup_call2_audio_in_window_t4_ParamLimits

0x2985,	// (0x00019730) popup_call2_audio_in_window_t4

0x2997,	// (0x00019742) popup_call2_audio_in_window_t5_ParamLimits

0x2997,	// (0x00019742) popup_call2_audio_in_window_t5

0x29ac,	// (0x00019757) popup_call2_audio_in_window_t6_ParamLimits

0x29ac,	// (0x00019757) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00026329) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00026329) popup_call2_audio_in_window_t

0x0912,	// (0x000176bd) bg_popup_call2_in_pane_g1

0x2ac5,	// (0x00019870) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x00026391) popup_cale_lunar_info_window_t

0x091a,	// (0x000176c5) bg_popup_call2_rect_pane_ParamLimits

0x091a,	// (0x000176c5) bg_popup_call2_rect_pane

0x06bf,	// (0x0001746a) call2_cli_visual_graphic_pane

0x06bf,	// (0x0001746a) call2_cli_visual_text_pane

0x72ff,	// (0x0001e0aa) smil_status_volume_pane_g3

0x0002,

0x0a80,	// (0x0001782b) call2_cli_visual_graphic_pane_g1

0x0a80,	// (0x0001782b) call2_cli_visual_graphic_pane_g2

0x0a80,	// (0x0001782b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00026336) call2_cli_visual_graphic_pane_g

0x29c1,	// (0x0001976c) bg_popup_call2_rect_pane_g1

0x0b28,	// (0x000178d3) bg_popup_call2_rect_pane_g2

0x29c9,	// (0x00019774) bg_popup_call2_rect_pane_g3

0x29d1,	// (0x0001977c) bg_popup_call2_rect_pane_g4

0x29d9,	// (0x00019784) bg_popup_call2_rect_pane_g5

0x29e1,	// (0x0001978c) bg_popup_call2_rect_pane_g6

0x29e9,	// (0x00019794) bg_popup_call2_rect_pane_g7

0x29f1,	// (0x0001979c) bg_popup_call2_rect_pane_g8

0x29f9,	// (0x000197a4) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0002633d) bg_popup_call2_rect_pane_g

0x2a01,	// (0x000197ac) bg_popup_call2_bubble_pane_g1

0x2a09,	// (0x000197b4) bg_popup_call2_bubble_pane_g2

0x2a11,	// (0x000197bc) bg_popup_call2_bubble_pane_g3

0x2a19,	// (0x000197c4) bg_popup_call2_bubble_pane_g4

0x2a21,	// (0x000197cc) bg_popup_call2_bubble_pane_g5

0x2a29,	// (0x000197d4) bg_popup_call2_bubble_pane_g6

0x2a31,	// (0x000197dc) bg_popup_call2_bubble_pane_g7

0x2a39,	// (0x000197e4) bg_popup_call2_bubble_pane_g8

0x2a41,	// (0x000197ec) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00026350) bg_popup_call2_bubble_pane_g

0x8952,	// (0x0001f6fd) aid_cale_week_size_cell_pane

0x8d80,	// (0x0001fb2b) aid_cams_cif_uncrop_pane_ParamLimits

0x8d80,	// (0x0001fb2b) aid_cams_cif_uncrop_pane

0x8edd,	// (0x0001fc88) aid_cams_size_cell_ParamLimits

0x8edd,	// (0x0001fc88) aid_cams_size_cell

0x8ee9,	// (0x0001fc94) grid_cams_pane_ParamLimits

0x8ef7,	// (0x0001fca2) linegrid_cams_pane_ParamLimits

0x9023,	// (0x0001fdce) call_video_pane_t1

0x9040,	// (0x0001fdeb) call_video_pane_t2

0x0001,

0xf292,	// (0x0002603d) call_video_pane_t

0x951b,	// (0x000202c6) aid_cale_month_size_cell_pane_ParamLimits

0x951b,	// (0x000202c6) aid_cale_month_size_cell_pane

0xf62f,	// (0x000263da) smil_status_volume_pane_g

0x730c,	// (0x0001e0b7) volume_smil_pane_ParamLimits

0x023f,	// (0x00016fea) aid_popup2_width_pane

0x88b6,	// (0x0001f661) cell_qdial_pane_g4_ParamLimits

0x88b6,	// (0x0001f661) cell_qdial_pane_g4

0xa123,	// (0x00020ece) aid_blid_cardinal_pane_ParamLimits

0xa133,	// (0x00020ede) aid_blid_destination_pane_ParamLimits

0xa133,	// (0x00020ede) aid_blid_destination_pane

0x091a,	// (0x000176c5) bg_popup_call_poc_act_pane_ParamLimits

0x091a,	// (0x000176c5) bg_popup_call_poc_act_pane

0x091a,	// (0x000176c5) bg_popup_call_poc_inact_pane_ParamLimits

0x091a,	// (0x000176c5) bg_popup_call_poc_inact_pane

0x2a49,	// (0x000197f4) bg_popup_call_poc_act_pane_g1

0x2a51,	// (0x000197fc) bg_popup_call_poc_act_pane_g2

0x2a59,	// (0x00019804) bg_popup_call_poc_act_pane_g3

0x2a19,	// (0x000197c4) bg_popup_call_poc_act_pane_g4

0x2a21,	// (0x000197cc) bg_popup_call_poc_act_pane_g5

0x2a61,	// (0x0001980c) bg_popup_call_poc_act_pane_g6

0x2a31,	// (0x000197dc) bg_popup_call_poc_act_pane_g7

0x2a69,	// (0x00019814) bg_popup_call_poc_act_pane_g8

0x06bf,	// (0x0001746a) main_usb_pane

0x2bc6,	// (0x00019971) popup_cale_lunar_info_window

0x9358,	// (0x00020103) im_reading_pane_t1_ParamLimits

0x0e65,	// (0x00017c10) list_im_pane_ParamLimits

0x0e76,	// (0x00017c21) scroll_pane_cp07_ParamLimits

0x06bf,	// (0x0001746a) grid_highlight_pane_cp012

0x091a,	// (0x000176c5) mup_scale_pane_ParamLimits

0x1814,	// (0x000185bf) main_usb_pane_g1_ParamLimits

0x1814,	// (0x000185bf) main_usb_pane_g1

0xad88,	// (0x00021b33) main_usb_pane_g2_ParamLimits

0xad88,	// (0x00021b33) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0002637a) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0002637a) main_usb_pane_g

0xad94,	// (0x00021b3f) main_usb_pane_t1_ParamLimits

0xad94,	// (0x00021b3f) main_usb_pane_t1

0xada6,	// (0x00021b51) main_usb_pane_t2_ParamLimits

0xada6,	// (0x00021b51) main_usb_pane_t2

0xadb8,	// (0x00021b63) main_usb_pane_t3_ParamLimits

0xadb8,	// (0x00021b63) main_usb_pane_t3

0xadca,	// (0x00021b75) main_usb_pane_t4_ParamLimits

0xadca,	// (0x00021b75) main_usb_pane_t4

0xaddc,	// (0x00021b87) main_usb_pane_t5_ParamLimits

0xaddc,	// (0x00021b87) main_usb_pane_t5

0xadee,	// (0x00021b99) main_usb_pane_t6_ParamLimits

0xadee,	// (0x00021b99) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0002637f) main_usb_pane_t_ParamLimits

0xa0de,	// (0x00020e89) aid_text_placing

0xa0e9,	// (0x00020e94) main_location2_pane_t1_ParamLimits

0xa0fd,	// (0x00020ea8) main_location2_pane_t2_ParamLimits

0xa0fd,	// (0x00020ea8) main_location2_pane_t3_ParamLimits

0xa111,	// (0x00020ebc) main_location2_pane_t4_ParamLimits

0xa111,	// (0x00020ebc) main_location2_pane_t4

0xf3f3,	// (0x0002619e) main_location2_pane_t_ParamLimits

0x0956,	// (0x00017701) find_pinb_pane_g2_ParamLimits

0x0956,	// (0x00017701) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00025eec) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00025eec) find_pinb_pane_g

0x0962,	// (0x0001770d) find_pinb_pane_t1_ParamLimits

0x0974,	// (0x0001771f) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00025ef1) find_pinb_pane_t_ParamLimits

0x06bf,	// (0x0001746a) main_call3_pane

0x9877,	// (0x00020622) cale_month_day_heading_pane_t1_ParamLimits

0x98d5,	// (0x00020680) cale_month_day_heading_pane_t2_ParamLimits

0x993a,	// (0x000206e5) cale_month_day_heading_pane_t3_ParamLimits

0x999f,	// (0x0002074a) cale_month_day_heading_pane_t4_ParamLimits

0x9a04,	// (0x000207af) cale_month_day_heading_pane_t5_ParamLimits

0x9a71,	// (0x0002081c) cale_month_day_heading_pane_t6_ParamLimits

0x9ae6,	// (0x00020891) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00026075) cale_month_day_heading_pane_t_ParamLimits

0x10ec,	// (0x00017e97) smil_status_volume_pane

0xa940,	// (0x000216eb) postcard_address_pane_ParamLimits

0xa940,	// (0x000216eb) postcard_address_pane

0xa94e,	// (0x000216f9) postcard_message_pane_ParamLimits

0xa94e,	// (0x000216f9) postcard_message_pane

0xad5b,	// (0x00021b06) call2_cli_visual_pane_t1_ParamLimits

0xad5b,	// (0x00021b06) call2_cli_visual_pane_t1

0xb305,	// (0x000220b0) postcard_message_pane_t1_ParamLimits

0xb305,	// (0x000220b0) postcard_message_pane_t1

0x2cd6,	// (0x00019a81) postcard_address_pane_t1_ParamLimits

0x2cd6,	// (0x00019a81) postcard_address_pane_t1

0xb2f6,	// (0x000220a1) popup_call3_audio_in_window_ParamLimits

0xb2f6,	// (0x000220a1) popup_call3_audio_in_window

0xb1d4,	// (0x00021f7f) bg_popup_call3_in_pane_ParamLimits

0xb1d4,	// (0x00021f7f) bg_popup_call3_in_pane

0xb23c,	// (0x00021fe7) popup_call3_audio_in_window_g1_ParamLimits

0xb23c,	// (0x00021fe7) popup_call3_audio_in_window_g1

0xb254,	// (0x00021fff) popup_call3_audio_in_window_g2_ParamLimits

0xb254,	// (0x00021fff) popup_call3_audio_in_window_g2

0xb26c,	// (0x00022017) popup_call3_audio_in_window_g3_ParamLimits

0xb26c,	// (0x00022017) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x000263e1) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x000263e1) popup_call3_audio_in_window_g

0xb294,	// (0x0002203f) popup_call3_audio_in_window_t1_ParamLimits

0xb294,	// (0x0002203f) popup_call3_audio_in_window_t1

0xb2bc,	// (0x00022067) popup_call3_audio_in_window_t2_ParamLimits

0xb2bc,	// (0x00022067) popup_call3_audio_in_window_t2

0xb2e4,	// (0x0002208f) popup_call3_audio_in_window_t3_ParamLimits

0xb2e4,	// (0x0002208f) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x000263ea) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x000263ea) popup_call3_audio_in_window_t

0x1743,	// (0x000184ee) bg_popup_call3_rect_pane

0x29c1,	// (0x0001976c) bg_popup_call3_rect_pane_g1

0x0b28,	// (0x000178d3) bg_popup_call3_rect_pane_g2

0x29c9,	// (0x00019774) bg_popup_call3_rect_pane_g3

0x29d1,	// (0x0001977c) bg_popup_call3_rect_pane_g4

0x29d9,	// (0x00019784) bg_popup_call3_rect_pane_g5

0x29e1,	// (0x0001978c) bg_popup_call3_rect_pane_g6

0x29e9,	// (0x00019794) bg_popup_call3_rect_pane_g7

0xa531,	// (0x000212dc) mup_visualizer_osc_pane

0x1822,	// (0x000185cd) mup_visualizer_spec_pane

0xb1f4,	// (0x00021f9f) call3_video_qcif_pane_ParamLimits

0xb1f4,	// (0x00021f9f) call3_video_qcif_pane

0xb206,	// (0x00021fb1) call3_video_qcif_uncrop_pane_ParamLimits

0xb206,	// (0x00021fb1) call3_video_qcif_uncrop_pane

0xb216,	// (0x00021fc1) call3_video_subqcif_pane_ParamLimits

0xb216,	// (0x00021fc1) call3_video_subqcif_pane

0xb22a,	// (0x00021fd5) call3_video_subqcif_uncrop_pane_ParamLimits

0xb22a,	// (0x00021fd5) call3_video_subqcif_uncrop_pane

0xb284,	// (0x0002202f) popup_call3_audio_in_window_g4_ParamLimits

0xb284,	// (0x0002202f) popup_call3_audio_in_window_g4

0xb1c3,	// (0x00021f6e) mup_spec_half_pane

0xb1cc,	// (0x00021f77) mup_spec_half_pane_cp

0x2c74,	// (0x00019a1f) mup_osc_middle_pane

0x2c7d,	// (0x00019a28) mup_visualizer_osc_pane_g1

0xb1a3,	// (0x00021f4e) mup_spec_bar_pane_ParamLimits

0xb1a3,	// (0x00021f4e) mup_spec_bar_pane

0x2c61,	// (0x00019a0c) mup_spec_bar_pane_g1

0x2c6b,	// (0x00019a16) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x000263d5) mup_spec_bar_pane_g

0x8952,	// (0x0001f6fd) aid_cale_week_size_cell_pane_ParamLimits

0x8965,	// (0x0001f710) bg_cale_heading_pane_ParamLimits

0x0bb2,	// (0x0001795d) bg_cale_pane_cp01_ParamLimits

0x8979,	// (0x0001f724) cale_week_corner_pane_ParamLimits

0x898f,	// (0x0001f73a) cale_week_day_heading_pane_ParamLimits

0x89a3,	// (0x0001f74e) cale_week_scroll_pane_g1_ParamLimits

0x89b4,	// (0x0001f75f) cale_week_scroll_pane_g2_ParamLimits

0x89c5,	// (0x0001f770) cale_week_scroll_pane_g3_ParamLimits

0x89d6,	// (0x0001f781) cale_week_scroll_pane_g4_ParamLimits

0x89e7,	// (0x0001f792) cale_week_scroll_pane_g5_ParamLimits

0x89f8,	// (0x0001f7a3) cale_week_scroll_pane_g6_ParamLimits

0x8a0b,	// (0x0001f7b6) cale_week_scroll_pane_g7_ParamLimits

0x8a1e,	// (0x0001f7c9) cale_week_scroll_pane_g8_ParamLimits

0x8a31,	// (0x0001f7dc) cale_week_scroll_pane_g9_ParamLimits

0x8a42,	// (0x0001f7ed) cale_week_scroll_pane_g10_ParamLimits

0x8a53,	// (0x0001f7fe) cale_week_scroll_pane_g11_ParamLimits

0x8a64,	// (0x0001f80f) cale_week_scroll_pane_g12_ParamLimits

0x8a75,	// (0x0001f820) cale_week_scroll_pane_g13_ParamLimits

0x8a86,	// (0x0001f831) cale_week_scroll_pane_g14_ParamLimits

0x8a97,	// (0x0001f842) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00025f7d) cale_week_scroll_pane_g_ParamLimits

0x8aa8,	// (0x0001f853) cale_week_time_pane_ParamLimits

0x8abb,	// (0x0001f866) grid_cale_week_pane_ParamLimits

0x0bcb,	// (0x00017976) listscroll_cale_week_pane_t1

0x8ad0,	// (0x0001f87b) scroll_pane_cp08_ParamLimits

0x955c,	// (0x00020307) cale_month_corner_pane_ParamLimits

0x108c,	// (0x00017e37) cale_month_pane_t1

0x9836,	// (0x000205e1) cale_month_week_pane_ParamLimits

0x1814,	// (0x000185bf) popup_call_status_window_g1_ParamLimits

0x9f5f,	// (0x00020d0a) popup_call_status_window_g2_ParamLimits

0x9f6b,	// (0x00020d16) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00026125) popup_call_status_window_g_ParamLimits

0x147e,	// (0x00018229) aid_call2_pane

0xa7dd,	// (0x00021588) msg_header_pane_g1

0xa940,	// (0x000216eb) postcard_address2_pane_ParamLimits

0xa940,	// (0x000216eb) postcard_address2_pane

0xa94e,	// (0x000216f9) postcard_message2_pane_ParamLimits

0xa94e,	// (0x000216f9) postcard_message2_pane

0xb15d,	// (0x00021f08) message2_row_pane_ParamLimits

0xb15d,	// (0x00021f08) message2_row_pane

0x2c1c,	// (0x000199c7) address2_row_pane_ParamLimits

0x2c1c,	// (0x000199c7) address2_row_pane

0x2c2f,	// (0x000199da) postcard_message2_row_pane_g1

0x2c37,	// (0x000199e2) postcard_message2_row_pane_t1

0x2c2f,	// (0x000199da) address2_row_pane_g1

0x2c37,	// (0x000199e2) address2_row_pane_t1

0x7146,	// (0x0001def1) aid_size_cell_vorec

0x06bf,	// (0x0001746a) main_rss_pane

0xb177,	// (0x00021f22) rss_list_single_pane_ParamLimits

0xb177,	// (0x00021f22) rss_list_single_pane

0x2c45,	// (0x000199f0) rss_list_single_pane_t1

0x2c53,	// (0x000199fe) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x000263d0) rss_list_single_pane_t

0x06bf,	// (0x0001746a) main_camera2_pane

0x06bf,	// (0x0001746a) main_video2_pane

0x736a,	// (0x0001e115) cams_zoom_pane_cp2_ParamLimits

0x736a,	// (0x0001e115) cams_zoom_pane_cp2

0x7376,	// (0x0001e121) image2_vga_pane_ParamLimits

0x7376,	// (0x0001e121) image2_vga_pane

0x7385,	// (0x0001e130) main_camera2_pane_g1_ParamLimits

0x7385,	// (0x0001e130) main_camera2_pane_g1

0x7391,	// (0x0001e13c) main_camera2_pane_g2_ParamLimits

0x7391,	// (0x0001e13c) main_camera2_pane_g2

0x739d,	// (0x0001e148) main_camera2_pane_g3_ParamLimits

0x739d,	// (0x0001e148) main_camera2_pane_g3

0x73a9,	// (0x0001e154) main_camera2_pane_g4_ParamLimits

0x73a9,	// (0x0001e154) main_camera2_pane_g4

0x73b5,	// (0x0001e160) main_camera2_pane_g5_ParamLimits

0x73b5,	// (0x0001e160) main_camera2_pane_g5

0x73c1,	// (0x0001e16c) main_camera2_pane_g6_ParamLimits

0x73c1,	// (0x0001e16c) main_camera2_pane_g6

0x73cd,	// (0x0001e178) main_camera2_pane_g7_ParamLimits

0x73cd,	// (0x0001e178) main_camera2_pane_g7

0x73d9,	// (0x0001e184) main_camera2_pane_g8_ParamLimits

0x73d9,	// (0x0001e184) main_camera2_pane_g8

0x0008,

0xf646,	// (0x000263f1) main_camera2_pane_g_ParamLimits

0xf646,	// (0x000263f1) main_camera2_pane_g

0x73f1,	// (0x0001e19c) main_camera2_pane_t1_ParamLimits

0x73f1,	// (0x0001e19c) main_camera2_pane_t1

0x7403,	// (0x0001e1ae) main_camera2_pane_t2_ParamLimits

0x7403,	// (0x0001e1ae) main_camera2_pane_t2

0x7415,	// (0x0001e1c0) main_camera2_pane_t3_ParamLimits

0x7415,	// (0x0001e1c0) main_camera2_pane_t3

0x7427,	// (0x0001e1d2) main_camera2_pane_t4_ParamLimits

0x7427,	// (0x0001e1d2) main_camera2_pane_t4

0x0006,

0xf659,	// (0x00026404) main_camera2_pane_t_ParamLimits

0xf659,	// (0x00026404) main_camera2_pane_t

0x7484,	// (0x0001e22f) cams_zoom_pane_cp4_ParamLimits

0x7484,	// (0x0001e22f) cams_zoom_pane_cp4

0x7494,	// (0x0001e23f) image2_cif_pane_ParamLimits

0x7494,	// (0x0001e23f) image2_cif_pane

0x74a9,	// (0x0001e254) image2_subqcif_pane_ParamLimits

0x74a9,	// (0x0001e254) image2_subqcif_pane

0x74b8,	// (0x0001e263) main_video2_pane_g1_ParamLimits

0x74b8,	// (0x0001e263) main_video2_pane_g1

0x74ca,	// (0x0001e275) main_video2_pane_g2_ParamLimits

0x74ca,	// (0x0001e275) main_video2_pane_g2

0x74da,	// (0x0001e285) main_video2_pane_g3_ParamLimits

0x74da,	// (0x0001e285) main_video2_pane_g3

0x74ea,	// (0x0001e295) main_video2_pane_g4_ParamLimits

0x74ea,	// (0x0001e295) main_video2_pane_g4

0x74fa,	// (0x0001e2a5) main_video2_pane_g5_ParamLimits

0x74fa,	// (0x0001e2a5) main_video2_pane_g5

0x750a,	// (0x0001e2b5) main_video2_pane_g6_ParamLimits

0x750a,	// (0x0001e2b5) main_video2_pane_g6

0x0005,

0xf668,	// (0x00026413) main_video2_pane_g_ParamLimits

0xf668,	// (0x00026413) main_video2_pane_g

0x751c,	// (0x0001e2c7) main_video2_pane_t1_ParamLimits

0x751c,	// (0x0001e2c7) main_video2_pane_t1

0x7536,	// (0x0001e2e1) main_video2_pane_t2_ParamLimits

0x7536,	// (0x0001e2e1) main_video2_pane_t2

0x755c,	// (0x0001e307) main_video2_pane_t3_ParamLimits

0x755c,	// (0x0001e307) main_video2_pane_t3

0x0002,

0xf675,	// (0x00026420) main_video2_pane_t_ParamLimits

0xf675,	// (0x00026420) main_video2_pane_t

0xaea5,	// (0x00021c50) call_muted_g2

0x0001,

0xf617,	// (0x000263c2) call_muted_g

0x06bf,	// (0x0001746a) main_mup2_pane

0x2d46,	// (0x00019af1) main_mup2_pane_g1_ParamLimits

0x2d46,	// (0x00019af1) main_mup2_pane_g1

0xb320,	// (0x000220cb) main_mup2_pane_g2_ParamLimits

0xb320,	// (0x000220cb) main_mup2_pane_g2

0x75ab,	// (0x0001e356) main_mup_pane_g13_cp1

0x75b3,	// (0x0001e35e) mup_volume_pane_cp1

0xb342,	// (0x000220ed) main_mup2_pane_g4_ParamLimits

0xb342,	// (0x000220ed) main_mup2_pane_g4

0xb357,	// (0x00022102) main_mup2_pane_g5_ParamLimits

0xb357,	// (0x00022102) main_mup2_pane_g5

0xb36c,	// (0x00022117) main_mup2_pane_g6_ParamLimits

0xb36c,	// (0x00022117) main_mup2_pane_g6

0xb381,	// (0x0002212c) main_mup2_pane_g7_ParamLimits

0xb381,	// (0x0002212c) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x00026427) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x00026427) main_mup2_pane_g

0xb39d,	// (0x00022148) main_mup2_pane_t1_ParamLimits

0xb39d,	// (0x00022148) main_mup2_pane_t1

0xb3b4,	// (0x0002215f) main_mup2_pane_t2_ParamLimits

0xb3b4,	// (0x0002215f) main_mup2_pane_t2

0xb3cb,	// (0x00022176) main_mup2_pane_t3_ParamLimits

0xb3cb,	// (0x00022176) main_mup2_pane_t3

0xb3e2,	// (0x0002218d) main_mup2_pane_t4_ParamLimits

0xb3e2,	// (0x0002218d) main_mup2_pane_t4

0xb3fc,	// (0x000221a7) main_mup2_pane_t5_ParamLimits

0xb3fc,	// (0x000221a7) main_mup2_pane_t5

0xb416,	// (0x000221c1) main_mup2_pane_t6_ParamLimits

0xb416,	// (0x000221c1) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x00026436) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x00026436) main_mup2_pane_t

0xb44e,	// (0x000221f9) mup2_visualizer_pane_ParamLimits

0xb44e,	// (0x000221f9) mup2_visualizer_pane

0xb484,	// (0x0002222f) mup_progress_pane_cp_ParamLimits

0xb484,	// (0x0002222f) mup_progress_pane_cp

0x7596,	// (0x0001e341) mup_volume_pane_cp_ParamLimits

0x7596,	// (0x0001e341) mup_volume_pane_cp

0xb49d,	// (0x00022248) mup2_visualizer_pane_g1_ParamLimits

0xb49d,	// (0x00022248) mup2_visualizer_pane_g1

0x2d18,	// (0x00019ac3) mup2_visualizer_pane_g2_ParamLimits

0x2d18,	// (0x00019ac3) mup2_visualizer_pane_g2

0xb4b2,	// (0x0002225d) mup2_visualizer_pane_g3_ParamLimits

0xb4b2,	// (0x0002225d) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x00026443) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x00026443) mup2_visualizer_pane_g

0x1a8d,	// (0x00018838) aid_size_cell_fmradio

0xafbb,	// (0x00021d66) aid_height_parent_landcape

0x0ef4,	// (0x00017c9f) wml_content_pane_cp

0x0efc,	// (0x00017ca7) wml_tabs_pane

0x0f05,	// (0x00017cb0) popup_wml_miniature_window

0x0f0d,	// (0x00017cb8) scroll_pane_cp021

0x0f21,	// (0x00017ccc) wml_content_pane_comp8

0x06bf,	// (0x0001746a) bg_popup_sub_pane_cp05

0x2d36,	// (0x00019ae1) popup_wml_miniature_window_g1

0x2d3e,	// (0x00019ae9) wml_miniature_view_pane

0xb4c0,	// (0x0002226b) aid_size_wml_view

0xb4c8,	// (0x00022273) wml_miniature_view_pane_g1

0xb4d1,	// (0x0002227c) wml_miniature_view_pane_g2

0xb4da,	// (0x00022285) wml_miniature_view_pane_g3

0xb4e2,	// (0x0002228d) wml_miniature_view_pane_g4

0xb4ea,	// (0x00022295) wml_miniature_view_pane_g5

0xb4f2,	// (0x0002229d) wml_miniature_view_pane_g6

0xb4fa,	// (0x000222a5) wml_miniature_view_pane_g7

0xb502,	// (0x000222ad) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0002644a) wml_miniature_view_pane_g

0x2d46,	// (0x00019af1) background_graphic_ParamLimits

0x2d46,	// (0x00019af1) background_graphic

0x2d52,	// (0x00019afd) wml_tabs_2_pane

0x2d5b,	// (0x00019b06) wml_tabs_3_pane_ParamLimits

0x2d5b,	// (0x00019b06) wml_tabs_3_pane

0x2d6d,	// (0x00019b18) wml_tabs_4_pane_ParamLimits

0x2d6d,	// (0x00019b18) wml_tabs_4_pane

0x2d83,	// (0x00019b2e) wml_tabs_5_pane_ParamLimits

0x2d83,	// (0x00019b2e) wml_tabs_5_pane

0x2d9d,	// (0x00019b48) wml_tabs_pane_g2_ParamLimits

0x2d9d,	// (0x00019b48) wml_tabs_pane_g2

0x2db1,	// (0x00019b5c) wml_tabs_pane_g3_ParamLimits

0x2db1,	// (0x00019b5c) wml_tabs_pane_g3

0xb50a,	// (0x000222b5) wml_tabs_2_active_pane_ParamLimits

0xb50a,	// (0x000222b5) wml_tabs_2_active_pane

0xb51c,	// (0x000222c7) wml_tabs_2_passive_pane_ParamLimits

0xb51c,	// (0x000222c7) wml_tabs_2_passive_pane

0xb52e,	// (0x000222d9) wml_tabs_3_active_pane_cp_ParamLimits

0xb52e,	// (0x000222d9) wml_tabs_3_active_pane_cp

0xb541,	// (0x000222ec) wml_tabs_3_passive_pane_ParamLimits

0xb541,	// (0x000222ec) wml_tabs_3_passive_pane

0xb552,	// (0x000222fd) wml_tabs_3_passive_pane_cp_ParamLimits

0xb552,	// (0x000222fd) wml_tabs_3_passive_pane_cp

0xb567,	// (0x00022312) tabs_4_active_pane

0xb56f,	// (0x0002231a) tabs_4_passive_pane

0xb577,	// (0x00022322) tabs_4_passive_pane_cp

0xb57f,	// (0x0002232a) tabs_4_passive_pane_cp2

0xad80,	// (0x00021b2b) aid_height_text

0xa4fa,	// (0x000212a5) mup_volume_cont_pane_ParamLimits

0xa4fa,	// (0x000212a5) mup_volume_cont_pane

0x8680,	// (0x0001f42b) aid_size_cell_pinb

0x868a,	// (0x0001f435) aid_size_list_pinb

0xb46d,	// (0x00022218) mup2_volume_cont_pane_ParamLimits

0xb46d,	// (0x00022218) mup2_volume_cont_pane

0x7582,	// (0x0001e32d) mup2_volume_cont_pane_g1_ParamLimits

0x7582,	// (0x0001e32d) mup2_volume_cont_pane_g1

0x830c,	// (0x0001f0b7) aid_size_cell_touch_ParamLimits

0x830c,	// (0x0001f0b7) aid_size_cell_touch

0x8567,	// (0x0001f312) touch_pane_ParamLimits

0x8567,	// (0x0001f312) touch_pane

0x022d,	// (0x00016fd8) main_rss2_pane

0x2e07,	// (0x00019bb2) listscroll_rss2_pane

0x2e10,	// (0x00019bbb) rss2_navigation_pane

0x2e18,	// (0x00019bc3) list_rss2_pane

0x1609,	// (0x000183b4) scroll_pane_cp22

0x2e20,	// (0x00019bcb) rss2_navigation_pane_g1

0x2e29,	// (0x00019bd4) rss2_navigation_pane_g2

0x2e31,	// (0x00019bdc) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0002645b) rss2_navigation_pane_g

0x2e39,	// (0x00019be4) rss2_navigation_pane_t1

0xb589,	// (0x00022334) rss2_list_single_pane_ParamLimits

0xb589,	// (0x00022334) rss2_list_single_pane

0x2e47,	// (0x00019bf2) rss2_list_single_pane_t2

0x2e55,	// (0x00019c00) rss2_list_single_pane_t3_ParamLimits

0x2e55,	// (0x00019c00) rss2_list_single_pane_t3

0x2e72,	// (0x00019c1d) rss2_list_single_pane_t4

0x9d36,	// (0x00020ae1) smil_status_pane_g1

0x029e,	// (0x00017049) main_image2_pane_ParamLimits

0x029e,	// (0x00017049) main_image2_pane

0x73e5,	// (0x0001e190) main_camera2_pane_g9_ParamLimits

0x73e5,	// (0x0001e190) main_camera2_pane_g9

0x7439,	// (0x0001e1e4) main_camera2_pane_t5_ParamLimits

0x7439,	// (0x0001e1e4) main_camera2_pane_t5

0x744b,	// (0x0001e1f6) main_camera2_pane_t6_ParamLimits

0x744b,	// (0x0001e1f6) main_camera2_pane_t6

0xb5af,	// (0x0002235a) main_image2_pane_g1_ParamLimits

0xb5af,	// (0x0002235a) main_image2_pane_g1

0xab1a,	// (0x000218c5) smil2_video_pane_ParamLimits

0xab1a,	// (0x000218c5) smil2_video_pane

0x024b,	// (0x00016ff6) aid_zoom_text_primary_cp

0x0294,	// (0x0001703f) popup_preview_fixed_window

0x0e5d,	// (0x00017c08) im_reading_pane_g1

0x732f,	// (0x0001e0da) cams2_bc_adjust_pane_cp_ParamLimits

0x732f,	// (0x0001e0da) cams2_bc_adjust_pane_cp

0x7476,	// (0x0001e221) cams2_bc_adjust_pane_ParamLimits

0x7476,	// (0x0001e221) cams2_bc_adjust_pane

0x4634,	// (0x0001b3df) cams2_bc_adjust_pane_g1

0x75bb,	// (0x0001e366) cams2_slider_pane

0x75c4,	// (0x0001e36f) cams2_slider_pane_g1

0x75cd,	// (0x0001e378) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x00026462) cams2_slider_pane_g

0x6e47,	// (0x0001dbf2) calc_display_pane_ParamLimits

0x6e65,	// (0x0001dc10) calc_paper_pane_ParamLimits

0x6e81,	// (0x0001dc2c) grid_calc_pane_ParamLimits

0x725e,	// (0x0001e009) popup_clock_digital_window_t1_ParamLimits

0x1a2a,	// (0x000187d5) main_image_pane_t1

0x6e2d,	// (0x0001dbd8) aid_size_cell_calc_ParamLimits

0x6e2d,	// (0x0001dbd8) aid_size_cell_calc

0xafed,	// (0x00021d98) popup_blid_sat_info2_window_ParamLimits

0xafed,	// (0x00021d98) popup_blid_sat_info2_window

0x2ebc,	// (0x00019c67) aid_size_cell_blid

0x2ec4,	// (0x00019c6f) bg_popup_window_pane_cp07

0x2ee7,	// (0x00019c92) grid_popup_blid_pane

0x2ef1,	// (0x00019c9c) heading_pane_cp05_ParamLimits

0x2ef1,	// (0x00019c9c) heading_pane_cp05

0x2fbb,	// (0x00019d66) cell_popup_blid_pane_ParamLimits

0x2fbb,	// (0x00019d66) cell_popup_blid_pane

0x2fe5,	// (0x00019d90) cell_popup_blid_pane_g1

0x2fed,	// (0x00019d98) cell_popup_blid_pane_t1

0xb433,	// (0x000221de) mup2_indicator_pane_ParamLimits

0xb433,	// (0x000221de) mup2_indicator_pane

0x1743,	// (0x000184ee) mup2_visualizer_osc_pane

0x2d24,	// (0x00019acf) mup2_visualizer_spec_pane_ParamLimits

0x2d24,	// (0x00019acf) mup2_visualizer_spec_pane

0xb5bb,	// (0x00022366) mup2_spec_half_pane

0xb5c4,	// (0x0002236f) mup2_spec_half_pane_cp

0xb5ce,	// (0x00022379) mup2_spec_bar_pane_ParamLimits

0xb5ce,	// (0x00022379) mup2_spec_bar_pane

0x2c61,	// (0x00019a0c) mup2_spec_bar_pane_g1

0x2c6b,	// (0x00019a16) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x000263d5) mup2_spec_bar_pane_g

0xb5ed,	// (0x00022398) mup2_osc_middle_pane

0x2c7d,	// (0x00019a28) mup2_visualizer_osc_pane_g1

0x02cc,	// (0x00017077) popup_number_entry_window_t1_ParamLimits

0x02df,	// (0x0001708a) popup_number_entry_window_t2_ParamLimits

0x02f1,	// (0x0001709c) popup_number_entry_window_t3_ParamLimits

0x85be,	// (0x0001f369) popup_number_entry_window_t5_ParamLimits

0x85be,	// (0x0001f369) popup_number_entry_window_t5

0xf0ec,	// (0x00025e97) popup_number_entry_window_t_ParamLimits

0x0303,	// (0x000170ae) text_title_cp2_ParamLimits

0x729d,	// (0x0001e048) aid_hotspot_pointer_text2_pane

0x72f3,	// (0x0001e09e) main_viewer_pane_g9_ParamLimits

0x72f3,	// (0x0001e09e) main_viewer_pane_g9

0x108c,	// (0x00017e37) cale_month_pane_t1_ParamLimits

0x1121,	// (0x00017ecc) bg_cale_pane_ParamLimits

0x1139,	// (0x00017ee4) list_cale_pane_ParamLimits

0x0bcb,	// (0x00017976) listscroll_cale_day_pane_t1

0x114a,	// (0x00017ef5) scroll_pane_cp09_ParamLimits

0xa539,	// (0x000212e4) main_mup_eq_pane_t1_ParamLimits

0xa539,	// (0x000212e4) main_mup_eq_pane_t1

0xa555,	// (0x00021300) main_mup_eq_pane_t2_ParamLimits

0xa555,	// (0x00021300) main_mup_eq_pane_t2

0xa571,	// (0x0002131c) main_mup_eq_pane_t3_ParamLimits

0xa571,	// (0x0002131c) main_mup_eq_pane_t3

0xa58b,	// (0x00021336) main_mup_eq_pane_t4_ParamLimits

0xa58b,	// (0x00021336) main_mup_eq_pane_t4

0xa5a5,	// (0x00021350) main_mup_eq_pane_t5_ParamLimits

0xa5a5,	// (0x00021350) main_mup_eq_pane_t5

0xa5bf,	// (0x0002136a) main_mup_eq_pane_t6_ParamLimits

0xa5bf,	// (0x0002136a) main_mup_eq_pane_t6

0xa5d5,	// (0x00021380) main_mup_eq_pane_t7_ParamLimits

0xa5d5,	// (0x00021380) main_mup_eq_pane_t7

0xa5eb,	// (0x00021396) main_mup_eq_pane_t8_ParamLimits

0xa5eb,	// (0x00021396) main_mup_eq_pane_t8

0xa601,	// (0x000213ac) main_mup_eq_pane_t9_ParamLimits

0xa601,	// (0x000213ac) main_mup_eq_pane_t9

0xa61d,	// (0x000213c8) main_mup_eq_pane_t10_ParamLimits

0xa61d,	// (0x000213c8) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00026224) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00026224) main_mup_eq_pane_t

0xa6e2,	// (0x0002148d) mup_equalizer_pane_cp5_ParamLimits

0xa6fa,	// (0x000214a5) mup_equalizer_pane_cp6_ParamLimits

0xa712,	// (0x000214bd) mup_equalizer_pane_cp7_ParamLimits

0x022d,	// (0x00016fd8) main_gallery_pane

0x2c86,	// (0x00019a31) smil2_volume_pane

0x2ca1,	// (0x00019a4c) smil_status_volume_pane_g1_ParamLimits

0x2c8e,	// (0x00019a39) smil_status_volume_pane_g2_ParamLimits

0x72ff,	// (0x0001e0aa) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x000263da) smil_status_volume_pane_g_ParamLimits

0x2ec4,	// (0x00019c6f) bg_popup_window_pane_cp07_ParamLimits

0x2ed2,	// (0x00019c7d) blid_firmament_pane

0xb5f6,	// (0x000223a1) aid_size_cell_gallery_ParamLimits

0xb5f6,	// (0x000223a1) aid_size_cell_gallery

0xb604,	// (0x000223af) grid_gallery_pane_ParamLimits

0xb604,	// (0x000223af) grid_gallery_pane

0xb614,	// (0x000223bf) cell_gallery_pane_ParamLimits

0xb614,	// (0x000223bf) cell_gallery_pane

0x2ffb,	// (0x00019da6) bg_cell_gallery_focus_pane_ParamLimits

0x2ffb,	// (0x00019da6) bg_cell_gallery_focus_pane

0x300d,	// (0x00019db8) cell_gallery_pane_g1_ParamLimits

0x300d,	// (0x00019db8) cell_gallery_pane_g1

0xb662,	// (0x0002240d) cell_gallery_pane_g2_ParamLimits

0xb662,	// (0x0002240d) cell_gallery_pane_g2

0xb66f,	// (0x0002241a) cell_gallery_pane_g3_ParamLimits

0xb66f,	// (0x0002241a) cell_gallery_pane_g3

0x3019,	// (0x00019dc4) cell_gallery_pane_g4_ParamLimits

0x3019,	// (0x00019dc4) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x00026488) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x00026488) cell_gallery_pane_g

0x3025,	// (0x00019dd0) bg_cell_gallery_focus_pane_g1

0x302d,	// (0x00019dd8) bg_cell_gallery_focus_pane_g2

0x3035,	// (0x00019de0) bg_cell_gallery_focus_pane_g3

0x303d,	// (0x00019de8) bg_cell_gallery_focus_pane_g4

0x3045,	// (0x00019df0) bg_cell_gallery_focus_pane_g5

0x304d,	// (0x00019df8) bg_cell_gallery_focus_pane_g6

0x3055,	// (0x00019e00) bg_cell_gallery_focus_pane_g7

0x305d,	// (0x00019e08) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x00026491) bg_cell_gallery_focus_pane_g

0x3065,	// (0x00019e10) aid_firma_cardinal

0x3079,	// (0x00019e24) blid_firmament_pane_t1

0x3090,	// (0x00019e3b) blid_firmament_pane_t2

0x30a7,	// (0x00019e52) blid_firmament_pane_t3

0x30be,	// (0x00019e69) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x000264a2) blid_firmament_pane_t

0x30d5,	// (0x00019e80) blid_sat_info_pane

0x30e5,	// (0x00019e90) blid_sat_info_pane_g1

0x30e5,	// (0x00019e90) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x000264ab) blid_sat_info_pane_g

0x30ef,	// (0x00019e9a) blid_sat_info_pane_t1

0x30fd,	// (0x00019ea8) smil2_volume_content_pane

0x3106,	// (0x00019eb1) smil2_volume_pane_g1

0x310e,	// (0x00019eb9) smil2_volume_content_pane_g1

0x3117,	// (0x00019ec2) smil2_volume_content_pane_g2

0x3120,	// (0x00019ecb) smil2_volume_content_pane_g3

0x3129,	// (0x00019ed4) smil2_volume_content_pane_g4

0x3132,	// (0x00019edd) smil2_volume_content_pane_g5

0x313b,	// (0x00019ee6) smil2_volume_content_pane_g6

0x3144,	// (0x00019eef) smil2_volume_content_pane_g7

0x314d,	// (0x00019ef8) smil2_volume_content_pane_g8

0x3156,	// (0x00019f01) smil2_volume_content_pane_g9

0x315f,	// (0x00019f0a) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x000264b0) smil2_volume_content_pane_g

0x8b28,	// (0x0001f8d3) cale_week_day_heading_pane_t1_ParamLimits

0x8b55,	// (0x0001f900) cale_week_day_heading_pane_t2_ParamLimits

0x8b82,	// (0x0001f92d) cale_week_day_heading_pane_t3_ParamLimits

0x8baf,	// (0x0001f95a) cale_week_day_heading_pane_t4_ParamLimits

0x8bdc,	// (0x0001f987) cale_week_day_heading_pane_t5_ParamLimits

0x8c09,	// (0x0001f9b4) cale_week_day_heading_pane_t6_ParamLimits

0x8c36,	// (0x0001f9e1) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00025f9c) cale_week_day_heading_pane_t_ParamLimits

0x0bdd,	// (0x00017988) bg_cale_side_pane_ParamLimits

0x6fe6,	// (0x0001dd91) cale_week_time_pane_t1_ParamLimits

0x7012,	// (0x0001ddbd) cale_week_time_pane_t2_ParamLimits

0x703e,	// (0x0001dde9) cale_week_time_pane_t3_ParamLimits

0x706a,	// (0x0001de15) cale_week_time_pane_t4_ParamLimits

0x7096,	// (0x0001de41) cale_week_time_pane_t5_ParamLimits

0x70c2,	// (0x0001de6d) cale_week_time_pane_t6_ParamLimits

0x70ee,	// (0x0001de99) cale_week_time_pane_t7_ParamLimits

0x711a,	// (0x0001dec5) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00025fab) cale_week_time_pane_t_ParamLimits

0x8c63,	// (0x0001fa0e) cell_cale_week_pane_g2_ParamLimits

0x0bdd,	// (0x00017988) bg_cale_side_pane_cp01_ParamLimits

0x9b5b,	// (0x00020906) cale_month_week_pane_t1_ParamLimits

0x9b86,	// (0x00020931) cale_month_week_pane_t2_ParamLimits

0x9bb1,	// (0x0002095c) cale_month_week_pane_t3_ParamLimits

0x9bdc,	// (0x00020987) cale_month_week_pane_t4_ParamLimits

0x9c07,	// (0x000209b2) cale_month_week_pane_t5_ParamLimits

0x9c32,	// (0x000209dd) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00026084) cale_month_week_pane_t_ParamLimits

0x71c2,	// (0x0001df6d) cell_cale_month_pane_g1_ParamLimits

0x022d,	// (0x00016fd8) main_cale_event_viewer_pane

0x022d,	// (0x00016fd8) listscroll_cale_event_viewer_pane

0x3168,	// (0x00019f13) list_cale_ev_pane

0x3170,	// (0x00019f1b) scroll_pane_cp023

0xb67c,	// (0x00022427) field_cale_ev_pane_ParamLimits

0xb67c,	// (0x00022427) field_cale_ev_pane

0x317c,	// (0x00019f27) field_cale_ev_content_pane_ParamLimits

0x317c,	// (0x00019f27) field_cale_ev_content_pane

0x3188,	// (0x00019f33) field_cale_ev_pane_g1_ParamLimits

0x3188,	// (0x00019f33) field_cale_ev_pane_g1

0x3194,	// (0x00019f3f) field_cale_ev_pane_g2_ParamLimits

0x3194,	// (0x00019f3f) field_cale_ev_pane_g2

0x31ac,	// (0x00019f57) field_cale_ev_pane_g3_ParamLimits

0x31ac,	// (0x00019f57) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x000264c5) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x000264c5) field_cale_ev_pane_g

0x31c4,	// (0x00019f6f) field_cale_ev_pane_t1_ParamLimits

0x31c4,	// (0x00019f6f) field_cale_ev_pane_t1

0xb6a0,	// (0x0002244b) field_cale_ev_content_pane_t1_ParamLimits

0xb6a0,	// (0x0002244b) field_cale_ev_content_pane_t1

0x18ce,	// (0x00018679) bg_button_pane_cp01

0x0a07,	// (0x000177b2) listscroll_cale_week_pane_ParamLimits

0x8948,	// (0x0001f6f3) popup_toolbar_window_cp01

0x0bcb,	// (0x00017976) listscroll_cale_week_pane_t1_ParamLimits

0x0a07,	// (0x000177b2) listscroll_cale_day_pane_ParamLimits

0x8948,	// (0x0001f6f3) popup_toolbar_window_cp02

0x0bcb,	// (0x00017976) listscroll_cale_day_pane_t1_ParamLimits

0x0a07,	// (0x000177b2) main_cale_month_pane_ParamLimits

0xb0d1,	// (0x00021e7c) popup_toolbar_window_cp03_ParamLimits

0xb0d1,	// (0x00021e7c) popup_toolbar_window_cp03

0xaa2a,	// (0x000217d5) main_image_pane_g2_ParamLimits

0xaa2a,	// (0x000217d5) main_image_pane_g2

0xaa36,	// (0x000217e1) main_image_pane_g3_ParamLimits

0xaa36,	// (0x000217e1) main_image_pane_g3

0x0002,

0xf50b,	// (0x000262b6) main_image_pane_g_ParamLimits

0xf50b,	// (0x000262b6) main_image_pane_g

0x1a2a,	// (0x000187d5) main_image_pane_t1_ParamLimits

0xaa42,	// (0x000217ed) main_image_pane_t2_ParamLimits

0xaa42,	// (0x000217ed) main_image_pane_t2

0xaa54,	// (0x000217ff) main_image_pane_t3_ParamLimits

0xaa54,	// (0x000217ff) main_image_pane_t3

0xaa66,	// (0x00021811) main_image_pane_t4_ParamLimits

0xaa66,	// (0x00021811) main_image_pane_t4

0x0003,

0xf512,	// (0x000262bd) main_image_pane_t_ParamLimits

0xf512,	// (0x000262bd) main_image_pane_t

0xaa78,	// (0x00021823) popup_image_details_window_cp01

0xaa82,	// (0x0002182d) popup_toobar_trans_pane_cp01_ParamLimits

0xaa82,	// (0x0002182d) popup_toobar_trans_pane_cp01

0xb042,	// (0x00021ded) popup_image_details_window_ParamLimits

0xb042,	// (0x00021ded) popup_image_details_window

0x2bd2,	// (0x0001997d) popup_image_focus_window

0x7321,	// (0x0001e0cc) camera2_autofocus_pane_ParamLimits

0x7321,	// (0x0001e0cc) camera2_autofocus_pane

0x022d,	// (0x00016fd8) bg_popup_sub_pane_cp06

0x31db,	// (0x00019f86) popup_image_focus_window_g1

0x31e3,	// (0x00019f8e) popup_image_focus_window_g2

0x31eb,	// (0x00019f96) popup_image_focus_window_g3

0x31f3,	// (0x00019f9e) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x000264cc) popup_image_focus_window_g

0x31fb,	// (0x00019fa6) popup_image_focus_window_t1

0x3209,	// (0x00019fb4) popup_image_focus_window_t2

0x3219,	// (0x00019fc4) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x000264d5) popup_image_focus_window_t

0x3227,	// (0x00019fd2) camera2_autofocus_pane_g1

0x029e,	// (0x00017049) bg_tb_trans_pane_cp01

0x3235,	// (0x00019fe0) popup_image_details_window_g1

0x3248,	// (0x00019ff3) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x000264e7) popup_image_details_window_g

0x3271,	// (0x0001a01c) popup_image_details_window_t1

0x3283,	// (0x0001a02e) popup_image_details_window_t2

0x329c,	// (0x0001a047) popup_image_details_window_t3

0x32b0,	// (0x0001a05b) popup_image_details_window_t4

0x32cb,	// (0x0001a076) popup_image_details_window_t5

0x0004,

0xf743,	// (0x000264ee) popup_image_details_window_t

0x09d9,	// (0x00017784) bg_calc_paper_pane_ParamLimits

0x6ead,	// (0x0001dc58) grid_highlight_pane_cp013

0x6eb7,	// (0x0001dc62) list_calc_pane_ParamLimits

0x6ec9,	// (0x0001dc74) scroll_pane_cp024

0x0a07,	// (0x000177b2) bg_calc_display_pane_ParamLimits

0x6ed1,	// (0x0001dc7c) calc_display_pane_t1_ParamLimits

0x6ee6,	// (0x0001dc91) calc_display_pane_t2_ParamLimits

0x6efb,	// (0x0001dca6) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00025f1e) calc_display_pane_t_ParamLimits

0x6f66,	// (0x0001dd11) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00025f3b) cell_calc_pane_g

0x6f6f,	// (0x0001dd1a) cell_calc_pane_t1

0x0a8a,	// (0x00017835) grid_highlight_pane_cp02_ParamLimits

0x0aa0,	// (0x0001784b) toolbar_button_pane_cp01_ParamLimits

0x0aa0,	// (0x0001784b) toolbar_button_pane_cp01

0x1a6f,	// (0x0001881a) temp_image_control_pane_ParamLimits

0x1a6f,	// (0x0001881a) temp_image_control_pane

0x029e,	// (0x00017049) main_mp3_pane

0x32e5,	// (0x0001a090) temp_image_control_pane_g1_ParamLimits

0x32e5,	// (0x0001a090) temp_image_control_pane_g1

0x32f3,	// (0x0001a09e) temp_image_control_pane_g2_ParamLimits

0x32f3,	// (0x0001a09e) temp_image_control_pane_g2

0x3305,	// (0x0001a0b0) temp_image_control_pane_g3_ParamLimits

0x3305,	// (0x0001a0b0) temp_image_control_pane_g3

0xb6ee,	// (0x00022499) temp_image_control_pane_g4_ParamLimits

0xb6ee,	// (0x00022499) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x000264f9) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x000264f9) temp_image_control_pane_g

0x32e5,	// (0x0001a090) main_mp3_pane_g1

0xb6ff,	// (0x000224aa) main_mp3_pane_g2

0x0007,

0xf757,	// (0x00026502) main_mp3_pane_g

0x3348,	// (0x0001a0f3) main_mp3_pane_t1

0x0cac,	// (0x00017a57) main_camera_pane_g8_ParamLimits

0x0cac,	// (0x00017a57) main_camera_pane_g8

0x8e93,	// (0x0001fc3e) main_video_pane_g7_ParamLimits

0x8e93,	// (0x0001fc3e) main_video_pane_g7

0x7464,	// (0x0001e20f) main_camera2_pane_t7_ParamLimits

0x7464,	// (0x0001e20f) main_camera2_pane_t7

0x0eb4,	// (0x00017c5f) scroll_pane_cp025_ParamLimits

0x0eb4,	// (0x00017c5f) scroll_pane_cp025

0x0ec8,	// (0x00017c73) scroll_pane_cp026_ParamLimits

0x0ec8,	// (0x00017c73) scroll_pane_cp026

0x0ed7,	// (0x00017c82) wml_content_pane_ParamLimits

0x022d,	// (0x00016fd8) main_touch_calib_pane

0xb7a3,	// (0x0002254e) main_touch_calib_pane_g1

0xb7af,	// (0x0002255a) main_touch_calib_pane_g2

0xb7bb,	// (0x00022566) main_touch_calib_pane_g3

0xb7c7,	// (0x00022572) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x00026520) main_touch_calib_pane_g

0xb7d3,	// (0x0002257e) main_touch_calib_pane_t1

0xb7ea,	// (0x00022595) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x00026529) main_touch_calib_pane_t

0x1684,	// (0x0001842f) mup_progress_pane_cp02

0x16a3,	// (0x0001844e) navi_pane_g1

0x1705,	// (0x000184b0) navi_pane_mp_t3

0x029e,	// (0x00017049) main_mp3_pane_ParamLimits

0xb113,	// (0x00021ebe) navi_pane_ParamLimits

0x32e5,	// (0x0001a090) main_mp3_pane_g1_ParamLimits

0xb6ff,	// (0x000224aa) main_mp3_pane_g2_ParamLimits

0xb70b,	// (0x000224b6) main_mp3_pane_g3_ParamLimits

0xb70b,	// (0x000224b6) main_mp3_pane_g3

0xb717,	// (0x000224c2) main_mp3_pane_g4_ParamLimits

0xb717,	// (0x000224c2) main_mp3_pane_g4

0x3315,	// (0x0001a0c0) main_mp3_pane_g5_ParamLimits

0x3315,	// (0x0001a0c0) main_mp3_pane_g5

0x3323,	// (0x0001a0ce) main_mp3_pane_g6_ParamLimits

0x3323,	// (0x0001a0ce) main_mp3_pane_g6

0x3330,	// (0x0001a0db) main_mp3_pane_g7_ParamLimits

0x3330,	// (0x0001a0db) main_mp3_pane_g7

0x333c,	// (0x0001a0e7) main_mp3_pane_g8_ParamLimits

0x333c,	// (0x0001a0e7) main_mp3_pane_g8

0xf757,	// (0x00026502) main_mp3_pane_g_ParamLimits

0xb723,	// (0x000224ce) main_mp3_pane_t2

0xb733,	// (0x000224de) main_mp3_pane_t3

0x3356,	// (0x0001a101) main_mp3_pane_t4

0x3364,	// (0x0001a10f) main_mp3_pane_t5

0x0005,

0xf768,	// (0x00026513) main_mp3_pane_t

0x3372,	// (0x0001a11d) mup_progress_pane_cp01

0x024b,	// (0x00016ff6) aid_zoom_text_secondary2

0x3168,	// (0x00019f13) list_cale_ev2_pane

0x3170,	// (0x00019f1b) scroll_pane_cp023_ParamLimits

0xb841,	// (0x000225ec) field_cale_ev2_pane_ParamLimits

0xb841,	// (0x000225ec) field_cale_ev2_pane

0x337a,	// (0x0001a125) field_cale_ev2_pane_g1_ParamLimits

0x337a,	// (0x0001a125) field_cale_ev2_pane_g1

0x3386,	// (0x0001a131) field_cale_ev2_pane_g2_ParamLimits

0x3386,	// (0x0001a131) field_cale_ev2_pane_g2

0x339e,	// (0x0001a149) field_cale_ev2_pane_g3_ParamLimits

0x339e,	// (0x0001a149) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x00026534) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x00026534) field_cale_ev2_pane_g

0x33c2,	// (0x0001a16d) field_cale_ev2_pane_t1_ParamLimits

0x33c2,	// (0x0001a16d) field_cale_ev2_pane_t1

0x33d9,	// (0x0001a184) field_cale_ev2_pane_t2_ParamLimits

0x33d9,	// (0x0001a184) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0002653d) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0002653d) field_cale_ev2_pane_t

0xa906,	// (0x000216b1) main_postcard_pane_g5_ParamLimits

0xa906,	// (0x000216b1) main_postcard_pane_g5

0xa914,	// (0x000216bf) main_postcard_pane_g6_ParamLimits

0xa914,	// (0x000216bf) main_postcard_pane_g6

0x8cd1,	// (0x0001fa7c) camera2_autofocus_pane_cp_ParamLimits

0x8cd1,	// (0x0001fa7c) camera2_autofocus_pane_cp

0x029e,	// (0x00017049) main_mup3_pane

0xb87f,	// (0x0002262a) main_mup3_pane_g1_ParamLimits

0xb87f,	// (0x0002262a) main_mup3_pane_g1

0xb8a0,	// (0x0002264b) main_mup3_pane_g2_ParamLimits

0xb8a0,	// (0x0002264b) main_mup3_pane_g2

0xb91c,	// (0x000226c7) main_mup3_pane_g3_ParamLimits

0xb91c,	// (0x000226c7) main_mup3_pane_g3

0xb95d,	// (0x00022708) main_mup3_pane_g4_ParamLimits

0xb95d,	// (0x00022708) main_mup3_pane_g4

0xb99e,	// (0x00022749) main_mup3_pane_g5_ParamLimits

0xb99e,	// (0x00022749) main_mup3_pane_g5

0xb9df,	// (0x0002278a) main_mup3_pane_g6_ParamLimits

0xb9df,	// (0x0002278a) main_mup3_pane_g6

0x33ee,	// (0x0001a199) main_mup3_pane_g7_ParamLimits

0x33ee,	// (0x0001a199) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0002654d) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0002654d) main_mup3_pane_g

0xba51,	// (0x000227fc) main_mup3_pane_t1_ParamLimits

0xba51,	// (0x000227fc) main_mup3_pane_t1

0xbac4,	// (0x0002286f) main_mup3_pane_t2_ParamLimits

0xbac4,	// (0x0002286f) main_mup3_pane_t2

0xbb91,	// (0x0002293c) main_mup3_pane_t4_ParamLimits

0xbb91,	// (0x0002293c) main_mup3_pane_t4

0xbbe5,	// (0x00022990) main_mup3_pane_t5_ParamLimits

0xbbe5,	// (0x00022990) main_mup3_pane_t5

0xbc91,	// (0x00022a3c) main_mup3_pane_t6_ParamLimits

0xbc91,	// (0x00022a3c) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0002655e) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0002655e) main_mup3_pane_t

0xbd39,	// (0x00022ae4) mup3_progress_pane_ParamLimits

0xbd39,	// (0x00022ae4) mup3_progress_pane

0xbda4,	// (0x00022b4f) popup_mup3_control_window_ParamLimits

0xbda4,	// (0x00022b4f) popup_mup3_control_window

0x33fc,	// (0x0001a1a7) popup_mup3_text_window

0xbdc1,	// (0x00022b6c) mup3_progress_pane_t1

0xbdd8,	// (0x00022b83) mup3_progress_pane_t2

0x3404,	// (0x0001a1af) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0002656b) mup3_progress_pane_t

0x341b,	// (0x0001a1c6) mup_progress_pane_cp03

0x022d,	// (0x00016fd8) bg_tb_trans_pane_cp04

0xbdef,	// (0x00022b9a) mup3_volume_pane

0xbdf7,	// (0x00022ba2) popup_mup3_control_window_g1

0x3a00,	// (0x0001a7ab) mup3_volume_pane_g1

0x3a09,	// (0x0001a7b4) mup3_volume_pane_g2

0x3a12,	// (0x0001a7bd) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x00026572) mup3_volume_pane_g

0x022d,	// (0x00016fd8) bg_tb_trans_pane_cp03

0x342b,	// (0x0001a1d6) popup_mup3_text_window_g1

0x3433,	// (0x0001a1de) popup_mup3_text_window_t1

0x0a61,	// (0x0001780c) list_calc_item_pane_g1_ParamLimits

0x2dee,	// (0x00019b99) mup_volume_pane_cp_g1

0xb801,	// (0x000225ac) main_touch_calib_pane_t3

0xb815,	// (0x000225c0) main_touch_calib_pane_t4

0xb82b,	// (0x000225d6) main_touch_calib_pane_t5

0x0237,	// (0x00016fe2) aid_cell_size_toolbar2

0x023f,	// (0x00016fea) aid_popup3_width_pane

0x024b,	// (0x00016ff6) aid_zoom_text_msg_primary

0x71ac,	// (0x0001df57) vorec_t7

0x0a25,	// (0x000177d0) bg_calc_paper_pane_g1_ParamLimits

0x0a3d,	// (0x000177e8) bg_calc_paper_pane_g2_ParamLimits

0x0a31,	// (0x000177dc) bg_calc_paper_pane_g3_ParamLimits

0x0a55,	// (0x00017800) bg_calc_paper_pane_g4_ParamLimits

0x0a49,	// (0x000177f4) bg_calc_paper_pane_g5_ParamLimits

0x8830,	// (0x0001f5db) bg_calc_paper_pane_g6_ParamLimits

0x8841,	// (0x0001f5ec) bg_calc_paper_pane_g7_ParamLimits

0x8852,	// (0x0001f5fd) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00025f25) bg_calc_paper_pane_g_ParamLimits

0x8863,	// (0x0001f60e) calc_bg_paper_pane_g9_ParamLimits

0x8dc2,	// (0x0001fb6d) image_qvga_pane_ParamLimits

0x8dc2,	// (0x0001fb6d) image_qvga_pane

0x091a,	// (0x000176c5) bg_popup_sub_pane_cp04_ParamLimits

0x19a6,	// (0x00018751) popup_mup_playback_window_g1_ParamLimits

0x19b2,	// (0x0001875d) popup_mup_playback_window_t1_ParamLimits

0x19c7,	// (0x00018772) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x000262b1) popup_mup_playback_window_t_ParamLimits

0xb331,	// (0x000220dc) main_mup2_pane_g3_ParamLimits

0xb331,	// (0x000220dc) main_mup2_pane_g3

0x90c9,	// (0x0001fe74) popup_toolbar_window_cp04

0x1dc2,	// (0x00018b6d) popup_call2_audio_second_window_g3_ParamLimits

0x1dc2,	// (0x00018b6d) popup_call2_audio_second_window_g3

0x21cc,	// (0x00018f77) popup_call2_audio_first_window_g4_ParamLimits

0x21cc,	// (0x00018f77) popup_call2_audio_first_window_g4

0x284b,	// (0x000195f6) popup_call2_audio_in_window_g4_ParamLimits

0x284b,	// (0x000195f6) popup_call2_audio_in_window_g4

0xaa1d,	// (0x000217c8) aid_area_sk_bg_cut_ParamLimits

0xaa1d,	// (0x000217c8) aid_area_sk_bg_cut

0x19dc,	// (0x00018787) aid_area_sk_bg_cut_2_ParamLimits

0x19dc,	// (0x00018787) aid_area_sk_bg_cut_2

0xb652,	// (0x000223fd) aid_placing_details_win

0xb65a,	// (0x00022405) aid_placing_details_win_2

0x3227,	// (0x00019fd2) camera2_autofocus_pane_g1_ParamLimits

0x8515,	// (0x0001f2c0) popup_fixed_preview_cale_window_ParamLimits

0x8515,	// (0x0001f2c0) popup_fixed_preview_cale_window

0x176f,	// (0x0001851a) navi_slider_pane_g3

0x1766,	// (0x00018511) navi_slider_pane_g4

0x175d,	// (0x00018508) navi_slider_pane_g5

0x176f,	// (0x0001851a) navi_slider_pane_g6

0x7284,	// (0x0001e02f) navi_slider_pane_g7

0x189b,	// (0x00018646) mup_scale_pane_g3

0x18a4,	// (0x0001864f) mup_scale_pane_g4

0x18ad,	// (0x00018658) mup_scale_pane_g5

0xa72a,	// (0x000214d5) mup_scale_pane_g6

0xa733,	// (0x000214de) mup_scale_pane_g7

0x176f,	// (0x0001851a) cams2_slider_pane_g3

0x2ea3,	// (0x00019c4e) cams2_slider_pane_g4

0x75d6,	// (0x0001e381) cams2_slider_pane_g5

0x176f,	// (0x0001851a) cams2_slider_pane_g6

0x75de,	// (0x0001e389) cams2_slider_pane_g7

0x30e5,	// (0x00019e90) camera2_autofocus_pane_cp_g1

0x3441,	// (0x0001a1ec) bg_popup_preview_window_pane_cp02_ParamLimits

0x3441,	// (0x0001a1ec) bg_popup_preview_window_pane_cp02

0x344d,	// (0x0001a1f8) list_fp_cale_pane_ParamLimits

0x344d,	// (0x0001a1f8) list_fp_cale_pane

0x3459,	// (0x0001a204) popup_fixed_preview_cale_window_t1_ParamLimits

0x3459,	// (0x0001a204) popup_fixed_preview_cale_window_t1

0xbe00,	// (0x00022bab) popup_fixed_preview_cale_window_t2_ParamLimits

0xbe00,	// (0x00022bab) popup_fixed_preview_cale_window_t2

0xbe15,	// (0x00022bc0) popup_fixed_preview_cale_window_t3_ParamLimits

0xbe15,	// (0x00022bc0) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x00026579) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x00026579) popup_fixed_preview_cale_window_t

0xbe2a,	// (0x00022bd5) list_single_fp_cale_pane_ParamLimits

0xbe2a,	// (0x00022bd5) list_single_fp_cale_pane

0x3477,	// (0x0001a222) list_single_fp_cale_pane_g1_ParamLimits

0x3477,	// (0x0001a222) list_single_fp_cale_pane_g1

0x3483,	// (0x0001a22e) list_single_fp_cale_pane_g2_ParamLimits

0x3483,	// (0x0001a22e) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x00026580) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x00026580) list_single_fp_cale_pane_g

0x349c,	// (0x0001a247) list_single_fp_cale_pane_t1_ParamLimits

0x349c,	// (0x0001a247) list_single_fp_cale_pane_t1

0x34ae,	// (0x0001a259) list_single_fp_cale_pane_t2_ParamLimits

0x34ae,	// (0x0001a259) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x00026587) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x00026587) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x022d,	// (0x00016fd8) main_dialer_pane

0xbe3a,	// (0x00022be5) aid_cell_size_keypad

0xbe44,	// (0x00022bef) dialer_ne_pane

0xbe4e,	// (0x00022bf9) grid_dialer_command_1_pane

0xbe56,	// (0x00022c01) grid_dialer_command_2_pane

0xbe5e,	// (0x00022c09) grid_dialer_keypad_pane

0xbe72,	// (0x00022c1d) bg_popup_call_pane_cp06_ParamLimits

0xbe72,	// (0x00022c1d) bg_popup_call_pane_cp06

0xbe7e,	// (0x00022c29) dialer_ne_clear_pane_ParamLimits

0xbe7e,	// (0x00022c29) dialer_ne_clear_pane

0x34e1,	// (0x0001a28c) dialer_ne_pane_g1

0x34e9,	// (0x0001a294) dialer_ne_pane_t1_ParamLimits

0x34e9,	// (0x0001a294) dialer_ne_pane_t1

0xbe8a,	// (0x00022c35) dialer_ne_pane_t2_ParamLimits

0xbe8a,	// (0x00022c35) dialer_ne_pane_t2

0xbea7,	// (0x00022c52) dialer_ne_pane_t3_ParamLimits

0xbea7,	// (0x00022c52) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0002658c) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0002658c) dialer_ne_pane_t

0xbecb,	// (0x00022c76) dialer_ne_pane_t3_copy1_ParamLimits

0xbecb,	// (0x00022c76) dialer_ne_pane_t3_copy1

0xbeef,	// (0x00022c9a) cell_dialer_keypad_pane_ParamLimits

0xbeef,	// (0x00022c9a) cell_dialer_keypad_pane

0xbf06,	// (0x00022cb1) cell_dialer_command_1_pane_ParamLimits

0xbf06,	// (0x00022cb1) cell_dialer_command_1_pane

0xbf1c,	// (0x00022cc7) cell_dialer_command_2_pane_ParamLimits

0xbf1c,	// (0x00022cc7) cell_dialer_command_2_pane

0x34fb,	// (0x0001a2a6) bg_button_pane_cp02_ParamLimits

0x34fb,	// (0x0001a2a6) bg_button_pane_cp02

0xbf2b,	// (0x00022cd6) cell_dialer_keypad_pane_g1_ParamLimits

0xbf2b,	// (0x00022cd6) cell_dialer_keypad_pane_g1

0x34fb,	// (0x0001a2a6) bg_button_pane_cp03_ParamLimits

0x34fb,	// (0x0001a2a6) bg_button_pane_cp03

0xbf3f,	// (0x00022cea) cell_dialer_command_1_pane_g1_ParamLimits

0xbf3f,	// (0x00022cea) cell_dialer_command_1_pane_g1

0x3507,	// (0x0001a2b2) bg_button_pane_cp04

0xbf53,	// (0x00022cfe) cell_dialer_command_2_pane_g1

0x1743,	// (0x000184ee) bg_button_pane_cp06

0x350f,	// (0x0001a2ba) dialer_ne_clear_pane_g1

0xa204,	// (0x00020faf) navi_pane_g2

0xa232,	// (0x00020fdd) navi_pane_g3

0x0002,

0xf409,	// (0x000261b4) navi_pane_g

0xa25d,	// (0x00021008) navi_pane_mv_g2

0xa284,	// (0x0002102f) navi_pane_mv_g5

0xa28c,	// (0x00021037) navi_pane_mv_t1

0x0a07,	// (0x000177b2) main_clock2_pane

0xbf89,	// (0x00022d34) main_clock2_list_pane_ParamLimits

0xbf89,	// (0x00022d34) main_clock2_list_pane

0xbfb3,	// (0x00022d5e) main_clock2_pane_t1_ParamLimits

0xbfb3,	// (0x00022d5e) main_clock2_pane_t1

0xbfe1,	// (0x00022d8c) main_clock2_pane_t2_ParamLimits

0xbfe1,	// (0x00022d8c) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x00026593) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x00026593) main_clock2_pane_t

0xc04a,	// (0x00022df5) popup_clock_analogue_window_cp03_ParamLimits

0xc04a,	// (0x00022df5) popup_clock_analogue_window_cp03

0xc06a,	// (0x00022e15) popup_clock_digital_window_cp02_ParamLimits

0xc06a,	// (0x00022e15) popup_clock_digital_window_cp02

0xc0db,	// (0x00022e86) main_clock2_list_single_pane_ParamLimits

0xc0db,	// (0x00022e86) main_clock2_list_single_pane

0x1743,	// (0x000184ee) list_highlight_pane_cp05

0x3517,	// (0x0001a2c2) main_clock2_list_single_pane_t1

0x90c9,	// (0x0001fe74) popup_toolbar_window_cp04_ParamLimits

0xb6be,	// (0x00022469) camera2_autofocus_pane_g2_ParamLimits

0xb6be,	// (0x00022469) camera2_autofocus_pane_g2

0xb6ca,	// (0x00022475) camera2_autofocus_pane_g3_ParamLimits

0xb6ca,	// (0x00022475) camera2_autofocus_pane_g3

0xb6d6,	// (0x00022481) camera2_autofocus_pane_g4_ParamLimits

0xb6d6,	// (0x00022481) camera2_autofocus_pane_g4

0xb6e2,	// (0x0002248d) camera2_autofocus_pane_g5_ParamLimits

0xb6e2,	// (0x0002248d) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x000264dc) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x000264dc) camera2_autofocus_pane_g

0xb85f,	// (0x0002260a) camera2_autofocus_pane_cp_g2

0xb867,	// (0x00022612) camera2_autofocus_pane_cp_g3

0xb86f,	// (0x0002261a) camera2_autofocus_pane_cp_g4

0xb877,	// (0x00022622) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x00026542) camera2_autofocus_pane_cp_g

0xbe6a,	// (0x00022c15) popup_dialer_spcha_window

0x022d,	// (0x00016fd8) bg_popup_sub_pane_cp07

0x3525,	// (0x0001a2d0) list_spcha_pane

0x352d,	// (0x0001a2d8) list_single_spcha_pane_ParamLimits

0x352d,	// (0x0001a2d8) list_single_spcha_pane

0x022d,	// (0x00016fd8) list_highlight_pane_cp06

0x353e,	// (0x0001a2e9) list_single_spcha_pane_t1

0x25f5,	// (0x000193a0) popup_call2_audio_out_window_g4_ParamLimits

0x25f5,	// (0x000193a0) popup_call2_audio_out_window_g4

0x022d,	// (0x00016fd8) main_imed2_pane

0x2bdc,	// (0x00019987) popup_imed_adjust2_window

0xb050,	// (0x00021dfb) popup_imed_trans_window_ParamLimits

0xb050,	// (0x00021dfb) popup_imed_trans_window

0x2f1d,	// (0x00019cc8) popup_blid_sat_info2_window_t1

0x2f2b,	// (0x00019cd6) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x00026471) popup_blid_sat_info2_window_t

0xc10d,	// (0x00022eb8) aid_size_cell_colour_35

0xc127,	// (0x00022ed2) aid_size_cell_colour_112

0xc13e,	// (0x00022ee9) aid_size_cell_effect

0x029e,	// (0x00017049) bg_tb_trans_pane_cp02

0x1264,	// (0x0001800f) heading_imed_pane

0xc158,	// (0x00022f03) listscroll_imed_pane

0x354c,	// (0x0001a2f7) heading_imed_pane_g1

0x3554,	// (0x0001a2ff) heading_imed_pane_t1

0x3562,	// (0x0001a30d) grid_imed_colour_35_pane_ParamLimits

0x3562,	// (0x0001a30d) grid_imed_colour_35_pane

0xc164,	// (0x00022f0f) grid_imed_effect_pane

0x357e,	// (0x0001a329) list_imed_aspect_pane

0xc174,	// (0x00022f1f) scroll_pane_cp027_ParamLimits

0xc174,	// (0x00022f1f) scroll_pane_cp027

0xc180,	// (0x00022f2b) cell_imed_effect_pane_ParamLimits

0xc180,	// (0x00022f2b) cell_imed_effect_pane

0x3586,	// (0x0001a331) cell_imed_colour_pane_ParamLimits

0x3586,	// (0x0001a331) cell_imed_colour_pane

0x35d0,	// (0x0001a37b) cell_imed_colour_pane_g1_ParamLimits

0x35d0,	// (0x0001a37b) cell_imed_colour_pane_g1

0x35e1,	// (0x0001a38c) hgihlgiht_grid_pane_cp016_ParamLimits

0x35e1,	// (0x0001a38c) hgihlgiht_grid_pane_cp016

0xc19c,	// (0x00022f47) cell_imed_effect_pane_g1

0xc1a4,	// (0x00022f4f) grid_highlight_pane_cp017

0x35f2,	// (0x0001a39d) list_imed_single_pane_ParamLimits

0x35f2,	// (0x0001a39d) list_imed_single_pane

0x022d,	// (0x00016fd8) list_highlight_pane_cp07

0x3606,	// (0x0001a3b1) list_imed_aspect_pane_comp1_t1

0x2bb0,	// (0x0001995b) bg_tb_trans_pane_cp05

0x3628,	// (0x0001a3d3) popup_imed_adjust2_window_g1

0x364f,	// (0x0001a3fa) popup_imed_adjust2_window_t1

0x3667,	// (0x0001a412) slider_imed_adjust_pane

0x367b,	// (0x0001a426) slider_imed_adjust_pane_g1

0x368b,	// (0x0001a436) slider_imed_adjust_pane_g2

0x369b,	// (0x0001a446) slider_imed_adjust_pane_g3

0x36ac,	// (0x0001a457) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x000265b0) slider_imed_adjust_pane_g

0xc1ad,	// (0x00022f58) aid_size_cell_clipart2

0xc1b9,	// (0x00022f64) grid_imed_clipart_pane

0x36bd,	// (0x0001a468) scroll_pane_cp031

0xc1c3,	// (0x00022f6e) cell_imed_clipart_pane_ParamLimits

0xc1c3,	// (0x00022f6e) cell_imed_clipart_pane

0xc1e1,	// (0x00022f8c) cell_imed_clipart_pane_g1

0x022d,	// (0x00016fd8) grid_highlight_pane_cp014

0xbf95,	// (0x00022d40) main_clock2_pane_g1_ParamLimits

0xbf95,	// (0x00022d40) main_clock2_pane_g1

0xc086,	// (0x00022e31) aid_call2_pane_cp10

0xc098,	// (0x00022e43) aid_call_pane_cp10

0x1678,	// (0x00018423) popup_clock_analogue_window_cp10_g1

0x1678,	// (0x00018423) popup_clock_analogue_window_cp10_g2

0xc0aa,	// (0x00022e55) popup_clock_analogue_window_cp10_g3

0xc0aa,	// (0x00022e55) popup_clock_analogue_window_cp10_g4

0x1678,	// (0x00018423) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0002659e) popup_clock_analogue_window_cp10_g

0xc0bc,	// (0x00022e67) popup_clock_analogue_window_cp10_t1

0x75e7,	// (0x0001e392) clock_digital_number_pane_cp10_ParamLimits

0x75e7,	// (0x0001e392) clock_digital_number_pane_cp10

0x75ff,	// (0x0001e3aa) clock_digital_number_pane_cp11_ParamLimits

0x75ff,	// (0x0001e3aa) clock_digital_number_pane_cp11

0x7617,	// (0x0001e3c2) clock_digital_number_pane_cp12_ParamLimits

0x7617,	// (0x0001e3c2) clock_digital_number_pane_cp12

0x762f,	// (0x0001e3da) clock_digital_number_pane_cp13_ParamLimits

0x762f,	// (0x0001e3da) clock_digital_number_pane_cp13

0x7647,	// (0x0001e3f2) clock_digital_separator_pane_cp10_ParamLimits

0x7647,	// (0x0001e3f2) clock_digital_separator_pane_cp10

0xc0ed,	// (0x00022e98) popup_clock_digital_window_cp02_t1_ParamLimits

0xc0ed,	// (0x00022e98) popup_clock_digital_window_cp02_t1

0x0912,	// (0x000176bd) clock_digital_number_pane_cp10_g1

0x0912,	// (0x000176bd) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x000265b9) clock_digital_number_pane_cp10_g

0x0912,	// (0x000176bd) clock_digital_separator_pane_cp10_g1

0x0912,	// (0x000176bd) clock_digital_separator_pane_g2_cp10

0x1713,	// (0x000184be) navi_pane_vded_g4

0x171c,	// (0x000184c7) navi_pane_vded_g5

0x1725,	// (0x000184d0) navi_pane_vded_t1

0x022d,	// (0x00016fd8) main_vded_pane

0xc1ea,	// (0x00022f95) main_vded_pane_g1

0xc1f6,	// (0x00022fa1) main_vded_pane_g2

0xc200,	// (0x00022fab) main_vded_pane_g3

0x0002,

0xf813,	// (0x000265be) main_vded_pane_g

0xc20a,	// (0x00022fb5) main_vded_pane_t1

0xc218,	// (0x00022fc3) main_vded_pane_t2

0x0001,

0xf81a,	// (0x000265c5) main_vded_pane_t

0xc226,	// (0x00022fd1) vded_slider_pane

0xc230,	// (0x00022fdb) vded_video_pane

0x36c5,	// (0x0001a470) vded_video_pane_g1

0xc23c,	// (0x00022fe7) vded_video_pane_g2

0x30e5,	// (0x00019e90) vded_video_pane_g3

0x0002,

0xf81f,	// (0x000265ca) vded_video_pane_g

0x36cf,	// (0x0001a47a) vded_slider_pane_g1

0x2dee,	// (0x00019b99) vded_slider_pane_g2

0x36d8,	// (0x0001a483) vded_slider_pane_g3

0x36e1,	// (0x0001a48c) vded_slider_pane_g4

0x36ea,	// (0x0001a495) vded_slider_pane_g5

0x0004,

0xf826,	// (0x000265d1) vded_slider_pane_g

0xbd98,	// (0x00022b43) mup3_rocker_pane_ParamLimits

0xbd98,	// (0x00022b43) mup3_rocker_pane

0xc245,	// (0x00022ff0) mup3_control_keys_pane_g1

0xc24d,	// (0x00022ff8) mup3_control_keys_pane_g2

0xc255,	// (0x00023000) mup3_control_keys_pane_g3

0xc25d,	// (0x00023008) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x000265dc) mup3_control_keys_pane_g

0x8533,	// (0x0001f2de) popup_toolbar2_fixed_window_cp01_ParamLimits

0x8533,	// (0x0001f2de) popup_toolbar2_fixed_window_cp01

0xbdb4,	// (0x00022b5f) popup_toolbar2_fixed_window_cp02_ParamLimits

0xbdb4,	// (0x00022b5f) popup_toolbar2_fixed_window_cp02

0x1f34,	// (0x00018cdf) popup_call2_audio_second_window_t4_ParamLimits

0x1f34,	// (0x00018cdf) popup_call2_audio_second_window_t4

0x2462,	// (0x0001920d) popup_call2_audio_first_window_t6_ParamLimits

0x2462,	// (0x0001920d) popup_call2_audio_first_window_t6

0x26f8,	// (0x000194a3) popup_call2_audio_out_window_t6_ParamLimits

0x26f8,	// (0x000194a3) popup_call2_audio_out_window_t6

0x022d,	// (0x00016fd8) main_vitu_pane

0xc26d,	// (0x00023018) aid_size_cell_itu_ParamLimits

0xc26d,	// (0x00023018) aid_size_cell_itu

0x39f2,	// (0x0001a79d) bg_popup_window_pane_cp08_ParamLimits

0x39f2,	// (0x0001a79d) bg_popup_window_pane_cp08

0xc27b,	// (0x00023026) field_vitu_entry_pane_ParamLimits

0xc27b,	// (0x00023026) field_vitu_entry_pane

0xc28a,	// (0x00023035) grid_vitu_function_pane_ParamLimits

0xc28a,	// (0x00023035) grid_vitu_function_pane

0xc29a,	// (0x00023045) grid_vitu_itu_pane_ParamLimits

0xc29a,	// (0x00023045) grid_vitu_itu_pane

0xc2aa,	// (0x00023055) cell_vitu_itu_pane_ParamLimits

0xc2aa,	// (0x00023055) cell_vitu_itu_pane

0xc2c1,	// (0x0002306c) cell_vitu_function_pane_ParamLimits

0xc2c1,	// (0x0002306c) cell_vitu_function_pane

0x029e,	// (0x00017049) bg_popup_sub_pane_cp08_ParamLimits

0x029e,	// (0x00017049) bg_popup_sub_pane_cp08

0xc2d5,	// (0x00023080) field_vitu_entry_pane_t1_ParamLimits

0xc2d5,	// (0x00023080) field_vitu_entry_pane_t1

0x370b,	// (0x0001a4b6) field_vitu_entry_pane_t2_ParamLimits

0x370b,	// (0x0001a4b6) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x000265ea) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x000265ea) field_vitu_entry_pane_t

0x3728,	// (0x0001a4d3) bg_button_pane_cp05_ParamLimits

0x3728,	// (0x0001a4d3) bg_button_pane_cp05

0xc2ef,	// (0x0002309a) cell_vitu_itu_pane_g1

0xc307,	// (0x000230b2) cell_vitu_itu_pane_t1_ParamLimits

0xc307,	// (0x000230b2) cell_vitu_itu_pane_t1

0xc319,	// (0x000230c4) cell_vitu_itu_pane_t2_ParamLimits

0xc319,	// (0x000230c4) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x000265ef) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x000265ef) cell_vitu_itu_pane_t

0x3736,	// (0x0001a4e1) bg_button_pane_cp07

0xc34e,	// (0x000230f9) cell_vitu_function_pane_g1

0x6ea5,	// (0x0001dc50) main_calc_pane_g1

0x8334,	// (0x0001f0df) aid_visual_content_pane

0x022d,	// (0x00016fd8) main_vradio_pane

0xc357,	// (0x00023102) main_vradio_pane_g1_ParamLimits

0xc357,	// (0x00023102) main_vradio_pane_g1

0x3740,	// (0x0001a4eb) main_vradio_pane_g2_ParamLimits

0x3740,	// (0x0001a4eb) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x000265f6) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x000265f6) main_vradio_pane_g

0xc365,	// (0x00023110) main_vradio_pane_t1_ParamLimits

0xc365,	// (0x00023110) main_vradio_pane_t1

0xc377,	// (0x00023122) main_vradio_pane_t2_ParamLimits

0xc377,	// (0x00023122) main_vradio_pane_t2

0x374d,	// (0x0001a4f8) main_vradio_pane_t3_ParamLimits

0x374d,	// (0x0001a4f8) main_vradio_pane_t3

0x0002,

0xf850,	// (0x000265fb) main_vradio_pane_t_ParamLimits

0xf850,	// (0x000265fb) main_vradio_pane_t

0xc389,	// (0x00023134) vradio_rocker_control_pane_ParamLimits

0xc389,	// (0x00023134) vradio_rocker_control_pane

0xc395,	// (0x00023140) vradio_station_info_pane_ParamLimits

0xc395,	// (0x00023140) vradio_station_info_pane

0x3761,	// (0x0001a50c) vradio_frequency_info_pane_ParamLimits

0x3761,	// (0x0001a50c) vradio_frequency_info_pane

0x30e5,	// (0x00019e90) vradio_station_info_pane_g1

0x3770,	// (0x0001a51b) vradio_station_info_pane_t1_ParamLimits

0x3770,	// (0x0001a51b) vradio_station_info_pane_t1

0x3792,	// (0x0001a53d) vradio_station_info_pane_t2_ParamLimits

0x3792,	// (0x0001a53d) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x00026602) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x00026602) vradio_station_info_pane_t

0x37a4,	// (0x0001a54f) vradio_tuning_pane

0x37ac,	// (0x0001a557) vradio_rocker_control_pane_g1

0x37b4,	// (0x0001a55f) vradio_rocker_control_pane_g2

0x37bc,	// (0x0001a567) vradio_rocker_control_pane_g3

0x37c4,	// (0x0001a56f) vradio_rocker_control_pane_g4

0x37cc,	// (0x0001a577) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x00026607) vradio_rocker_control_pane_g

0xc3a2,	// (0x0002314d) vradio_frequency_info_pane_g1

0x37d4,	// (0x0001a57f) vradio_frequency_info_pane_t1_ParamLimits

0x37d4,	// (0x0001a57f) vradio_frequency_info_pane_t1

0xc3ac,	// (0x00023157) vradio_tuning_pane_g1

0xc3b7,	// (0x00023162) vradio_tuning_pane_t1

0x025b,	// (0x00017006) area_side_right_pane_ParamLimits

0x025b,	// (0x00017006) area_side_right_pane

0x2b77,	// (0x00019922) status_small_pane_g1

0x2b7f,	// (0x0001992a) status_small_pane_g2

0x2b88,	// (0x00019933) status_small_pane_g3

0x2b91,	// (0x0001993c) status_small_pane_g4

0x0003,

0xf61c,	// (0x000263c7) status_small_pane_g

0x2b9a,	// (0x00019945) status_small_pane_t1

0x022d,	// (0x00016fd8) main_video3_pane

0x37e8,	// (0x0001a593) cams_zoom_vslider_pane

0x37f0,	// (0x0001a59b) image3_wide_pane_ParamLimits

0x37f0,	// (0x0001a59b) image3_wide_pane

0x380a,	// (0x0001a5b5) image3_wide_small_pane

0x3816,	// (0x0001a5c1) main_video3_pane_g1_ParamLimits

0x3816,	// (0x0001a5c1) main_video3_pane_g1

0x3832,	// (0x0001a5dd) main_video3_pane_g2_ParamLimits

0x3832,	// (0x0001a5dd) main_video3_pane_g2

0x0001,

0xf867,	// (0x00026612) main_video3_pane_g_ParamLimits

0xf867,	// (0x00026612) main_video3_pane_g

0x384e,	// (0x0001a5f9) main_video3_pane_t1_ParamLimits

0x384e,	// (0x0001a5f9) main_video3_pane_t1

0x3879,	// (0x0001a624) main_video3_pane_t2_ParamLimits

0x3879,	// (0x0001a624) main_video3_pane_t2

0x38a6,	// (0x0001a651) main_video3_pane_t3_ParamLimits

0x38a6,	// (0x0001a651) main_video3_pane_t3

0x0002,

0xf86c,	// (0x00026617) main_video3_pane_t_ParamLimits

0xf86c,	// (0x00026617) main_video3_pane_t

0x38d3,	// (0x0001a67e) cams_zoom_vslider_pane_g1

0x38dc,	// (0x0001a687) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0002661e) cams_zoom_vslider_pane_g

0x38e4,	// (0x0001a68f) small_slider_vertical_pane

0x30e5,	// (0x00019e90) small_slider_vertical_pane_g1

0x30e5,	// (0x00019e90) small_slider_vertical_pane_g2

0x38ec,	// (0x0001a697) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x00026623) small_slider_vertical_pane_g

0x022d,	// (0x00016fd8) main_hwr_training_pane

0x38f5,	// (0x0001a6a0) hwr_training_instruct_pane_ParamLimits

0x38f5,	// (0x0001a6a0) hwr_training_instruct_pane

0xc3c6,	// (0x00023171) hwr_training_navi_pane_ParamLimits

0xc3c6,	// (0x00023171) hwr_training_navi_pane

0xc3e0,	// (0x0002318b) hwr_training_write_pane_ParamLimits

0xc3e0,	// (0x0002318b) hwr_training_write_pane

0x022d,	// (0x00016fd8) bg_frame_shadow_pane

0x392c,	// (0x0001a6d7) hwr_training_write_pane_g1

0x3934,	// (0x0001a6df) hwr_training_write_pane_g2

0x393c,	// (0x0001a6e7) hwr_training_write_pane_g3

0x3944,	// (0x0001a6ef) hwr_training_write_pane_g4

0x394c,	// (0x0001a6f7) hwr_training_write_pane_g5

0x3954,	// (0x0001a6ff) hwr_training_write_pane_g6

0x395c,	// (0x0001a707) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0002662a) hwr_training_write_pane_g

0x765f,	// (0x0001e40a) hwr_training_navi_pane_g1_ParamLimits

0x765f,	// (0x0001e40a) hwr_training_navi_pane_g1

0x7671,	// (0x0001e41c) hwr_training_navi_pane_g2_ParamLimits

0x7671,	// (0x0001e41c) hwr_training_navi_pane_g2

0x7683,	// (0x0001e42e) hwr_training_navi_pane_g3_ParamLimits

0x7683,	// (0x0001e42e) hwr_training_navi_pane_g3

0x7693,	// (0x0001e43e) hwr_training_navi_pane_g4_ParamLimits

0x7693,	// (0x0001e43e) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x00026639) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x00026639) hwr_training_navi_pane_g

0x76ad,	// (0x0001e458) hwr_training_navi_pane_t1

0xc418,	// (0x000231c3) list_single_hwr_training_instruct_pane_ParamLimits

0xc418,	// (0x000231c3) list_single_hwr_training_instruct_pane

0x39b3,	// (0x0001a75e) list_single_hwr_training_instruct_pane_t1

0x3025,	// (0x00019dd0) bg_frame_shadow_pane_g1

0x39c2,	// (0x0001a76d) bg_frame_shadow_pane_g2

0x39ca,	// (0x0001a775) bg_frame_shadow_pane_g3

0x39d2,	// (0x0001a77d) bg_frame_shadow_pane_g4

0x39da,	// (0x0001a785) bg_frame_shadow_pane_g5

0x39e2,	// (0x0001a78d) bg_frame_shadow_pane_g6

0x39ea,	// (0x0001a795) bg_frame_shadow_pane_g7

0x0b00,	// (0x000178ab) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x00026644) bg_frame_shadow_pane_g

0x022d,	// (0x00016fd8) main_video_tele_dialer_pane

0x76bb,	// (0x0001e466) aid_size_cell_video_keypad_ParamLimits

0x76bb,	// (0x0001e466) aid_size_cell_video_keypad

0x76cb,	// (0x0001e476) grid_video_dialer_keypad_pane_ParamLimits

0x76cb,	// (0x0001e476) grid_video_dialer_keypad_pane

0x76ff,	// (0x0001e4aa) video_down_pane_cp_ParamLimits

0x76ff,	// (0x0001e4aa) video_down_pane_cp

0x770d,	// (0x0001e4b8) cell_video_dialer_keypad_pane_ParamLimits

0x770d,	// (0x0001e4b8) cell_video_dialer_keypad_pane

0x3a1b,	// (0x0001a7c6) bg_button_pane_cp08_ParamLimits

0x3a1b,	// (0x0001a7c6) bg_button_pane_cp08

0xc453,	// (0x000231fe) cell_video_dialer_keypad_pane_g1_ParamLimits

0xc453,	// (0x000231fe) cell_video_dialer_keypad_pane_g1

0xbd8c,	// (0x00022b37) mup3_rocker2_pane_ParamLimits

0xbd8c,	// (0x00022b37) mup3_rocker2_pane

0x30e5,	// (0x00019e90) mup3_rocker2_pane_g1

0xafd2,	// (0x00021d7d) main_dialer2_pane

0x022d,	// (0x00016fd8) main_mp4_pane

0x772c,	// (0x0001e4d7) main_mp4_pane_g1_ParamLimits

0x772c,	// (0x0001e4d7) main_mp4_pane_g1

0x773a,	// (0x0001e4e5) main_mp4_pane_g2_ParamLimits

0x773a,	// (0x0001e4e5) main_mp4_pane_g2

0x7748,	// (0x0001e4f3) main_mp4_pane_g3_ParamLimits

0x7748,	// (0x0001e4f3) main_mp4_pane_g3

0x779b,	// (0x0001e546) main_mp4_pane_g4_ParamLimits

0x779b,	// (0x0001e546) main_mp4_pane_g4

0x77b5,	// (0x0001e560) main_mp4_pane_g5_ParamLimits

0x77b5,	// (0x0001e560) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x00026664) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x00026664) main_mp4_pane_g

0x77e9,	// (0x0001e594) main_mp4_pane_t1_ParamLimits

0x77e9,	// (0x0001e594) main_mp4_pane_t1

0x7845,	// (0x0001e5f0) main_mp4_pane_t2_ParamLimits

0x7845,	// (0x0001e5f0) main_mp4_pane_t2

0x3b39,	// (0x0001a8e4) main_mp4_pane_t3_ParamLimits

0x3b39,	// (0x0001a8e4) main_mp4_pane_t3

0x7897,	// (0x0001e642) main_mp4_pane_t4_ParamLimits

0x7897,	// (0x0001e642) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x00026671) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x00026671) main_mp4_pane_t

0x78d7,	// (0x0001e682) mp4_progress_pane_ParamLimits

0x78d7,	// (0x0001e682) mp4_progress_pane

0x7921,	// (0x0001e6cc) mp4_rocker_pane_ParamLimits

0x7921,	// (0x0001e6cc) mp4_rocker_pane

0x3c0d,	// (0x0001a9b8) mp4_progress_pane_t1

0x3c26,	// (0x0001a9d1) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0002667a) mp4_progress_pane_t

0x3c3f,	// (0x0001a9ea) mup_progress_pane_cp04

0x46ba,	// (0x0001b465) mp4_rocker_pane_g1

0x7943,	// (0x0001e6ee) aid_cell_size_keypad2_ParamLimits

0x7943,	// (0x0001e6ee) aid_cell_size_keypad2

0x7953,	// (0x0001e6fe) dialer2_ne_pane_ParamLimits

0x7953,	// (0x0001e6fe) dialer2_ne_pane

0x795f,	// (0x0001e70a) grid_dialer2_keypad_pane_ParamLimits

0x795f,	// (0x0001e70a) grid_dialer2_keypad_pane

0x4723,	// (0x0001b4ce) bg_popup_call_pane_cp07_ParamLimits

0x4723,	// (0x0001b4ce) bg_popup_call_pane_cp07

0xc48e,	// (0x00023239) dialer2_ne_pane_t1_ParamLimits

0xc48e,	// (0x00023239) dialer2_ne_pane_t1

0x796d,	// (0x0001e718) cell_dialer2_keypad_pane_ParamLimits

0x796d,	// (0x0001e718) cell_dialer2_keypad_pane

0x3c5d,	// (0x0001aa08) bg_button_pane_pane_cp04_ParamLimits

0x3c5d,	// (0x0001aa08) bg_button_pane_pane_cp04

0xc4b3,	// (0x0002325e) cell_dialer2_keypad_pane_g1_ParamLimits

0xc4b3,	// (0x0002325e) cell_dialer2_keypad_pane_g1

0x8f9b,	// (0x0001fd46) aid_placing_vt_set_content_ParamLimits

0x8f9b,	// (0x0001fd46) aid_placing_vt_set_content

0x8fc3,	// (0x0001fd6e) aid_placing_vt_set_title_ParamLimits

0x8fc3,	// (0x0001fd6e) aid_placing_vt_set_title

0x022d,	// (0x00016fd8) main_image3_pane

0x79b6,	// (0x0001e761) area_side_right_pane_cp01_ParamLimits

0x79b6,	// (0x0001e761) area_side_right_pane_cp01

0x79e5,	// (0x0001e790) main_image3_pane_g1_ParamLimits

0x79e5,	// (0x0001e790) main_image3_pane_g1

0x79f3,	// (0x0001e79e) main_image3_pane_g2_ParamLimits

0x79f3,	// (0x0001e79e) main_image3_pane_g2

0x7a0c,	// (0x0001e7b7) main_image3_pane_g3_ParamLimits

0x7a0c,	// (0x0001e7b7) main_image3_pane_g3

0x7a25,	// (0x0001e7d0) main_image3_pane_g4_ParamLimits

0x7a25,	// (0x0001e7d0) main_image3_pane_g4

0x0003,

0xf8de,	// (0x00026689) main_image3_pane_g_ParamLimits

0xf8de,	// (0x00026689) main_image3_pane_g

0x7a3e,	// (0x0001e7e9) main_image3_pane_t1_ParamLimits

0x7a3e,	// (0x0001e7e9) main_image3_pane_t1

0x7a63,	// (0x0001e80e) main_image3_pane_t2_ParamLimits

0x7a63,	// (0x0001e80e) main_image3_pane_t2

0x7a82,	// (0x0001e82d) main_image3_pane_t3_ParamLimits

0x7a82,	// (0x0001e82d) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x00026692) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x00026692) main_image3_pane_t

0x39f2,	// (0x0001a79d) grid_sctrl_middle_pane_cp01_ParamLimits

0x39f2,	// (0x0001a79d) grid_sctrl_middle_pane_cp01

0xc51b,	// (0x000232c6) cell_sctrl_middle_pane_cp01_ParamLimits

0xc51b,	// (0x000232c6) cell_sctrl_middle_pane_cp01

0xc52c,	// (0x000232d7) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc52c,	// (0x000232d7) cell_sctrl_middle_pane_cp01_g1

0x022d,	// (0x00016fd8) main_call4_pane

0xc539,	// (0x000232e4) aid_size_button_call4_ParamLimits

0xc539,	// (0x000232e4) aid_size_button_call4

0xc56b,	// (0x00023316) call4_windows_pane_ParamLimits

0xc56b,	// (0x00023316) call4_windows_pane

0xc587,	// (0x00023332) grid_call4_button_pane_ParamLimits

0xc587,	// (0x00023332) grid_call4_button_pane

0x3c9d,	// (0x0001aa48) call4_windows_conf_pane

0x3cb8,	// (0x0001aa63) popup_call4_audio_first_window_ParamLimits

0x3cb8,	// (0x0001aa63) popup_call4_audio_first_window

0x3d06,	// (0x0001aab1) popup_call4_audio_second_window_ParamLimits

0x3d06,	// (0x0001aab1) popup_call4_audio_second_window

0x3d1c,	// (0x0001aac7) popup_call4_audio_wait_window_ParamLimits

0x3d1c,	// (0x0001aac7) popup_call4_audio_wait_window

0xc5ab,	// (0x00023356) cell_call4_button_pane_ParamLimits

0xc5ab,	// (0x00023356) cell_call4_button_pane

0xc5ce,	// (0x00023379) bg_button_pane_cp09_ParamLimits

0xc5ce,	// (0x00023379) bg_button_pane_cp09

0xc5da,	// (0x00023385) cell_call4_button_pane_g1_ParamLimits

0xc5da,	// (0x00023385) cell_call4_button_pane_g1

0xc5e7,	// (0x00023392) cell_call4_button_pane_t1_ParamLimits

0xc5e7,	// (0x00023392) cell_call4_button_pane_t1

0x3d64,	// (0x0001ab0f) popup_call4_audio_conf_window_ParamLimits

0x3d64,	// (0x0001ab0f) popup_call4_audio_conf_window

0xbdc1,	// (0x00022b6c) mup3_progress_pane_t1_ParamLimits

0xbdd8,	// (0x00022b83) mup3_progress_pane_t2_ParamLimits

0x3404,	// (0x0001a1af) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0002656b) mup3_progress_pane_t_ParamLimits

0x341b,	// (0x0001a1c6) mup_progress_pane_cp03_ParamLimits

0xc265,	// (0x00023010) mup3_control_keys_pane_g4_copy1

0x7905,	// (0x0001e6b0) mp4_rocker2_pane_ParamLimits

0x7905,	// (0x0001e6b0) mp4_rocker2_pane

0x3d86,	// (0x0001ab31) mp4_rocker2_pane_g1

0x3d7e,	// (0x0001ab29) mp4_rocker2_pane_g2

0x7ae3,	// (0x0001e88e) mp4_rocker2_pane_g3

0x7aeb,	// (0x0001e896) mp4_rocker2_pane_g4

0x7af3,	// (0x0001e89e) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0002669b) mp4_rocker2_pane_g

0x022d,	// (0x00016fd8) main_camera4_pane

0x022d,	// (0x00016fd8) main_video4_pane

0x76db,	// (0x0001e486) main_video_tele_dialer_pane_t1_ParamLimits

0x76db,	// (0x0001e486) main_video_tele_dialer_pane_t1

0x76ed,	// (0x0001e498) main_video_tele_dialer_pane_t2_ParamLimits

0x76ed,	// (0x0001e498) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x00026655) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x00026655) main_video_tele_dialer_pane_t

0x7b13,	// (0x0001e8be) cam4_autofocus_pane_ParamLimits

0x7b13,	// (0x0001e8be) cam4_autofocus_pane

0x7b2b,	// (0x0001e8d6) cam4_image_uncrop_pane_ParamLimits

0x7b2b,	// (0x0001e8d6) cam4_image_uncrop_pane

0x7b44,	// (0x0001e8ef) cam4_indicators_pane_ParamLimits

0x7b44,	// (0x0001e8ef) cam4_indicators_pane

0x7b60,	// (0x0001e90b) main_camera4_pane_g1_ParamLimits

0x7b60,	// (0x0001e90b) main_camera4_pane_g1

0x7b6c,	// (0x0001e917) main_camera4_pane_g2_ParamLimits

0x7b6c,	// (0x0001e917) main_camera4_pane_g2

0x7b6c,	// (0x0001e917) main_camera4_pane_g3_ParamLimits

0x7b6c,	// (0x0001e917) main_camera4_pane_g3

0x7b78,	// (0x0001e923) main_camera4_pane_g4_ParamLimits

0x7b78,	// (0x0001e923) main_camera4_pane_g4

0x7b84,	// (0x0001e92f) main_camera4_pane_g5_ParamLimits

0x7b84,	// (0x0001e92f) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x000266a6) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x000266a6) main_camera4_pane_g

0x7b9e,	// (0x0001e949) main_camera4_pane_t1_ParamLimits

0x7b9e,	// (0x0001e949) main_camera4_pane_t1

0x7bc2,	// (0x0001e96d) bg_tb_trans_pane_cp06

0x7bd8,	// (0x0001e983) cam4_indicators_pane_g1

0x7be5,	// (0x0001e990) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x000266c1) cam4_indicators_pane_g

0x7c05,	// (0x0001e9b0) cam4_indicators_pane_t1

0x7c2f,	// (0x0001e9da) main_video4_pane_g1_ParamLimits

0x7c2f,	// (0x0001e9da) main_video4_pane_g1

0x7c3b,	// (0x0001e9e6) main_video4_pane_g2_ParamLimits

0x7c3b,	// (0x0001e9e6) main_video4_pane_g2

0x7c47,	// (0x0001e9f2) main_video4_pane_g3_ParamLimits

0x7c47,	// (0x0001e9f2) main_video4_pane_g3

0x7c53,	// (0x0001e9fe) main_video4_pane_g4_ParamLimits

0x7c53,	// (0x0001e9fe) main_video4_pane_g4

0x0004,

0xf91d,	// (0x000266c8) main_video4_pane_g_ParamLimits

0xf91d,	// (0x000266c8) main_video4_pane_g

0x7c75,	// (0x0001ea20) vid4_indicators_pane_ParamLimits

0x7c75,	// (0x0001ea20) vid4_indicators_pane

0x7c93,	// (0x0001ea3e) video4_image_uncrop_cif_pane_ParamLimits

0x7c93,	// (0x0001ea3e) video4_image_uncrop_cif_pane

0x7ca2,	// (0x0001ea4d) video4_image_uncrop_nhd_pane_ParamLimits

0x7ca2,	// (0x0001ea4d) video4_image_uncrop_nhd_pane

0x7b2b,	// (0x0001e8d6) video4_image_uncrop_vga_pane_ParamLimits

0x7b2b,	// (0x0001e8d6) video4_image_uncrop_vga_pane

0x7cb1,	// (0x0001ea5c) bg_tb_trans_pane_cp07

0x7bd8,	// (0x0001e983) vid4_indicators_pane_g1

0x7cc9,	// (0x0001ea74) vid4_indicators_pane_g2

0x7cd6,	// (0x0001ea81) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x000266d3) vid4_indicators_pane_g

0x7d03,	// (0x0001eaae) vid4_indicators_pane_t1

0xc61f,	// (0x000233ca) cam4_autofocus_pane_g1

0xc627,	// (0x000233d2) cam4_autofocus_pane_g2

0xc62f,	// (0x000233da) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x000266de) cam4_autofocus_pane_g

0xc637,	// (0x000233e2) cam4_autofocus_pane_g3_copy1

0xc437,	// (0x000231e2) video_down_pane_cp_t1

0xc445,	// (0x000231f0) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0002665a) video_down_pane_cp_t

0x39f2,	// (0x0001a79d) popup_vitu2_window_ParamLimits

0x39f2,	// (0x0001a79d) popup_vitu2_window

0x7d1d,	// (0x0001eac8) aid_size_cell2_itu2_ParamLimits

0x7d1d,	// (0x0001eac8) aid_size_cell2_itu2

0x7d3f,	// (0x0001eaea) aid_size_cell_itu2_ParamLimits

0x7d3f,	// (0x0001eaea) aid_size_cell_itu2

0x7d83,	// (0x0001eb2e) bg_popup_window_pane_cp09_ParamLimits

0x7d83,	// (0x0001eb2e) bg_popup_window_pane_cp09

0x7d91,	// (0x0001eb3c) field_vitu2_entry_pane_ParamLimits

0x7d91,	// (0x0001eb3c) field_vitu2_entry_pane

0x7db1,	// (0x0001eb5c) grid_vitu2_function_pane_ParamLimits

0x7db1,	// (0x0001eb5c) grid_vitu2_function_pane

0x7df5,	// (0x0001eba0) grid_vitu2_itu_pane_ParamLimits

0x7df5,	// (0x0001eba0) grid_vitu2_itu_pane

0x7e69,	// (0x0001ec14) cell_vitu2_itu_pane_ParamLimits

0x7e69,	// (0x0001ec14) cell_vitu2_itu_pane

0x7e80,	// (0x0001ec2b) cell_vitu2_function_pane_ParamLimits

0x7e80,	// (0x0001ec2b) cell_vitu2_function_pane

0x3e27,	// (0x0001abd2) bg_popup_call_pane_cp08_ParamLimits

0x3e27,	// (0x0001abd2) bg_popup_call_pane_cp08

0x3e40,	// (0x0001abeb) field_vitu2_entry_pane_g1

0x3e4c,	// (0x0001abf7) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x000266e5) field_vitu2_entry_pane_g

0xc63f,	// (0x000233ea) field_vitu2_entry_pane_t1_ParamLimits

0xc63f,	// (0x000233ea) field_vitu2_entry_pane_t1

0x3e66,	// (0x0001ac11) field_vitu2_entry_pane_t2_ParamLimits

0x3e66,	// (0x0001ac11) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x000266ec) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x000266ec) field_vitu2_entry_pane_t

0x7ec4,	// (0x0001ec6f) bg_button_pane_cp010_ParamLimits

0x7ec4,	// (0x0001ec6f) bg_button_pane_cp010

0x7ed2,	// (0x0001ec7d) cell_vitu2_itu_pane_g1

0x7ef0,	// (0x0001ec9b) cell_vitu2_itu_pane_t1_ParamLimits

0x7ef0,	// (0x0001ec9b) cell_vitu2_itu_pane_t1

0x7f42,	// (0x0001eced) cell_vitu2_itu_pane_t2_ParamLimits

0x7f42,	// (0x0001eced) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x000266f6) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x000266f6) cell_vitu2_itu_pane_t

0x7cb1,	// (0x0001ea5c) bg_button_pane_cp011

0x7ffd,	// (0x0001eda8) cell_vitu2_function_pane_g1

0x022d,	// (0x00016fd8) main_myfav_hc_pane

0x7ac4,	// (0x0001e86f) popup_image3_note_pane_ParamLimits

0x7ac4,	// (0x0001e86f) popup_image3_note_pane

0x7ad2,	// (0x0001e87d) popup_image3_tool_bar_pane_ParamLimits

0x7ad2,	// (0x0001e87d) popup_image3_tool_bar_pane

0x7fb0,	// (0x0001ed5b) cell_vitu2_itu_pane_t3_ParamLimits

0x7fb0,	// (0x0001ed5b) cell_vitu2_itu_pane_t3

0x022d,	// (0x00016fd8) bg_popup_trans_pane

0x3e8b,	// (0x0001ac36) grid_image3_tool_bar_pane

0x3e95,	// (0x0001ac40) bg_popup_trans_pane_g1

0x0fbd,	// (0x00017d68) bg_popup_trans_pane_g2

0x3e9d,	// (0x0001ac48) bg_popup_trans_pane_g3

0x3ea5,	// (0x0001ac50) bg_popup_trans_pane_g4

0x3ead,	// (0x0001ac58) bg_popup_trans_pane_g5

0x3eb5,	// (0x0001ac60) bg_popup_trans_pane_g6

0x3ebd,	// (0x0001ac68) bg_popup_trans_pane_g7

0x3ec5,	// (0x0001ac70) bg_popup_trans_pane_g8

0x0f9d,	// (0x00017d48) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x000266fd) bg_popup_trans_pane_g

0x3ecd,	// (0x0001ac78) cell_image3_tool_bar_pane_ParamLimits

0x3ecd,	// (0x0001ac78) cell_image3_tool_bar_pane

0x30e5,	// (0x00019e90) cell_image3_tool_bar_pane_g1

0x022d,	// (0x00016fd8) bg_popup_trans_pane_cp1

0x3ee3,	// (0x0001ac8e) popup_image3_note_pane_t1

0x3ef1,	// (0x0001ac9c) popup_image3_note_pane_t2

0x3eff,	// (0x0001acaa) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x00026710) popup_image3_note_pane_t

0x3f0f,	// (0x0001acba) popup_image3_note_pane_t3_copy1

0xc65a,	// (0x00023405) bg_myfav_hc_instruction_pane_ParamLimits

0xc65a,	// (0x00023405) bg_myfav_hc_instruction_pane

0xc672,	// (0x0002341d) cell_myfav_contact_pane_ParamLimits

0xc672,	// (0x0002341d) cell_myfav_contact_pane

0xc68c,	// (0x00023437) cell_myfav_contact_pane_cp1_ParamLimits

0xc68c,	// (0x00023437) cell_myfav_contact_pane_cp1

0xc6a4,	// (0x0002344f) cell_myfav_contact_pane_cp2_ParamLimits

0xc6a4,	// (0x0002344f) cell_myfav_contact_pane_cp2

0xc6bc,	// (0x00023467) cell_myfav_contact_pane_cp3_ParamLimits

0xc6bc,	// (0x00023467) cell_myfav_contact_pane_cp3

0xc6d3,	// (0x0002347e) cell_myfav_contact_pane_cp4_ParamLimits

0xc6d3,	// (0x0002347e) cell_myfav_contact_pane_cp4

0xc6e9,	// (0x00023494) cell_myfav_contact_pane_cp5_ParamLimits

0xc6e9,	// (0x00023494) cell_myfav_contact_pane_cp5

0xc6fd,	// (0x000234a8) cell_myfav_contact_pane_cp6_ParamLimits

0xc6fd,	// (0x000234a8) cell_myfav_contact_pane_cp6

0xc711,	// (0x000234bc) cell_myfav_contact_pane_cp7_ParamLimits

0xc711,	// (0x000234bc) cell_myfav_contact_pane_cp7

0x3f1d,	// (0x0001acc8) listscroll_gen_pane_cp05

0xc729,	// (0x000234d4) main_myfav_hc_pane_g1_ParamLimits

0xc729,	// (0x000234d4) main_myfav_hc_pane_g1

0xc743,	// (0x000234ee) main_myfav_hc_pane_g2_ParamLimits

0xc743,	// (0x000234ee) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x00026717) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x00026717) main_myfav_hc_pane_g

0xc775,	// (0x00023520) main_myfav_hc_pane_t1_ParamLimits

0xc775,	// (0x00023520) main_myfav_hc_pane_t1

0x3f26,	// (0x0001acd1) main_myfav_hc_pane_t2_ParamLimits

0x3f26,	// (0x0001acd1) main_myfav_hc_pane_t2

0x3f38,	// (0x0001ace3) main_myfav_hc_pane_t3_ParamLimits

0x3f38,	// (0x0001ace3) main_myfav_hc_pane_t3

0xc78c,	// (0x00023537) main_myfav_hc_pane_t4_ParamLimits

0xc78c,	// (0x00023537) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0002671e) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0002671e) main_myfav_hc_pane_t

0x30e5,	// (0x00019e90) bg_myfav_hc_instruction_pane_g1

0x3f4a,	// (0x0001acf5) cell_myfav_contact_pane_g1_ParamLimits

0x3f4a,	// (0x0001acf5) cell_myfav_contact_pane_g1

0x3f4a,	// (0x0001acf5) cell_myfav_contact_pane_g2_ParamLimits

0x3f4a,	// (0x0001acf5) cell_myfav_contact_pane_g2

0x3f56,	// (0x0001ad01) cell_myfav_contact_pane_g3_ParamLimits

0x3f56,	// (0x0001ad01) cell_myfav_contact_pane_g3

0x33ee,	// (0x0001a199) cell_myfav_contact_pane_g4_ParamLimits

0x33ee,	// (0x0001a199) cell_myfav_contact_pane_g4

0x3f63,	// (0x0001ad0e) cell_myfav_contact_pane_g5_ParamLimits

0x3f63,	// (0x0001ad0e) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x00026729) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x00026729) cell_myfav_contact_pane_g

0xc75d,	// (0x00023508) main_myfav_hc_pane_g3_ParamLimits

0xc75d,	// (0x00023508) main_myfav_hc_pane_g3

0x8476,	// (0x0001f221) popup_adpt_find_window

0xc7b6,	// (0x00023561) afind_page_pane_ParamLimits

0xc7b6,	// (0x00023561) afind_page_pane

0xc7c3,	// (0x0002356e) aid_size_cell_afind_ParamLimits

0xc7c3,	// (0x0002356e) aid_size_cell_afind

0xc7dd,	// (0x00023588) bg_popup_sub_pane_cp09_ParamLimits

0xc7dd,	// (0x00023588) bg_popup_sub_pane_cp09

0xc7ea,	// (0x00023595) find_pane_cp01_ParamLimits

0xc7ea,	// (0x00023595) find_pane_cp01

0x3f6f,	// (0x0001ad1a) grid_afind_control_pane_ParamLimits

0x3f6f,	// (0x0001ad1a) grid_afind_control_pane

0xc7f7,	// (0x000235a2) grid_afind_pane_ParamLimits

0xc7f7,	// (0x000235a2) grid_afind_pane

0xc813,	// (0x000235be) cell_afind_pane_ParamLimits

0xc813,	// (0x000235be) cell_afind_pane

0x30e5,	// (0x00019e90) afind_page_pane_g1

0xc85f,	// (0x0002360a) afind_page_pane_g2

0xc868,	// (0x00023613) afind_page_pane_g3

0x0002,

0xf989,	// (0x00026734) afind_page_pane_g

0xc871,	// (0x0002361c) afind_page_pane_t1

0x3f83,	// (0x0001ad2e) cell_afind_grid_control_pane_ParamLimits

0x3f83,	// (0x0001ad2e) cell_afind_grid_control_pane

0x3c5d,	// (0x0001aa08) bg_button_pane_cp69_ParamLimits

0x3c5d,	// (0x0001aa08) bg_button_pane_cp69

0xc891,	// (0x0002363c) cell_afind_pane_g1_ParamLimits

0xc891,	// (0x0002363c) cell_afind_pane_g1

0xc89e,	// (0x00023649) cell_afind_pane_t1_ParamLimits

0xc89e,	// (0x00023649) cell_afind_pane_t1

0x0cf6,	// (0x00017aa1) bg_button_pane_cp72

0x3f92,	// (0x0001ad3d) cell_afind_grid_control_pane_g1

0xab4a,	// (0x000218f5) aid_image_placing_area_ParamLimits

0xab4a,	// (0x000218f5) aid_image_placing_area

0x36f3,	// (0x0001a49e) field_vitu_entry_pane_g1_ParamLimits

0x36f3,	// (0x0001a49e) field_vitu_entry_pane_g1

0x36ff,	// (0x0001a4aa) field_vitu_entry_pane_g2_ParamLimits

0x36ff,	// (0x0001a4aa) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x000265e5) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x000265e5) field_vitu_entry_pane_g

0xc2ef,	// (0x0002309a) cell_vitu_itu_pane_g1_ParamLimits

0xc331,	// (0x000230dc) cell_vitu_itu_pane_t3_ParamLimits

0xc331,	// (0x000230dc) cell_vitu_itu_pane_t3

0x3c0d,	// (0x0001a9b8) mp4_progress_pane_t1_ParamLimits

0x3c26,	// (0x0001a9d1) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0002667a) mp4_progress_pane_t_ParamLimits

0x3c3f,	// (0x0001a9ea) mup_progress_pane_cp04_ParamLimits

0xc7a0,	// (0x0002354b) main_myfav_hc_pane_t5_ParamLimits

0xc7a0,	// (0x0002354b) main_myfav_hc_pane_t5

0x0253,	// (0x00016ffe) aid_zoom_text_primary

0x8476,	// (0x0001f221) popup_adpt_find_window_ParamLimits

0x029e,	// (0x00017049) main_cam_set_pane

0x7b52,	// (0x0001e8fd) cam4_zoom_pane_ParamLimits

0x7b52,	// (0x0001e8fd) cam4_zoom_pane

0xc8b0,	// (0x0002365b) main_cam_set_pane_g1_ParamLimits

0xc8b0,	// (0x0002365b) main_cam_set_pane_g1

0xc8be,	// (0x00023669) main_cam_set_pane_g2_ParamLimits

0xc8be,	// (0x00023669) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0002673b) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0002673b) main_cam_set_pane_g

0xc8ca,	// (0x00023675) main_cam_set_pane_t1_ParamLimits

0xc8ca,	// (0x00023675) main_cam_set_pane_t1

0xc8e6,	// (0x00023691) main_cset_listscroll_pane_ParamLimits

0xc8e6,	// (0x00023691) main_cset_listscroll_pane

0xc915,	// (0x000236c0) main_cset_slider_pane_ParamLimits

0xc915,	// (0x000236c0) main_cset_slider_pane

0x3fa3,	// (0x0001ad4e) main_cset_list_pane_ParamLimits

0x3fa3,	// (0x0001ad4e) main_cset_list_pane

0x3fb3,	// (0x0001ad5e) scroll_pane_cp028

0xc936,	// (0x000236e1) aid_area_touch_slider

0xc952,	// (0x000236fd) cset_slider_pane

0xc97c,	// (0x00023727) main_cset_slider_pane_g1

0xc991,	// (0x0002373c) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x00026740) main_cset_slider_pane_g

0x3fec,	// (0x0001ad97) main_cset_slider_pane_t1

0xca4d,	// (0x000237f8) main_cset_slider_pane_t2

0xca67,	// (0x00023812) main_cset_slider_pane_t3

0xca81,	// (0x0002382c) main_cset_slider_pane_t4

0xca9b,	// (0x00023846) main_cset_slider_pane_t5

0xcab7,	// (0x00023862) main_cset_slider_pane_t6

0xcacc,	// (0x00023877) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x00026765) main_cset_slider_pane_t

0xcbd0,	// (0x0002397b) cset_list_set_pane_ParamLimits

0xcbd0,	// (0x0002397b) cset_list_set_pane

0xcbe1,	// (0x0002398c) aid_position_infowindow_above

0xcbe9,	// (0x00023994) aid_position_infowindow_below

0x408c,	// (0x0001ae37) cset_list_set_pane_g1_ParamLimits

0x408c,	// (0x0001ae37) cset_list_set_pane_g1

0x492d,	// (0x0001b6d8) cset_list_set_pane_g3_ParamLimits

0x492d,	// (0x0001b6d8) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x00026784) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x00026784) cset_list_set_pane_g

0x493c,	// (0x0001b6e7) cset_list_set_pane_t1_ParamLimits

0x493c,	// (0x0001b6e7) cset_list_set_pane_t1

0x029e,	// (0x00017049) list_highlight_pane_cp021_ParamLimits

0x029e,	// (0x00017049) list_highlight_pane_cp021

0x189b,	// (0x00018646) cset_slider_pane_g1

0x18ad,	// (0x00018658) cset_slider_pane_g2

0x18a4,	// (0x0001864f) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x00026789) cset_slider_pane_g

0x8011,	// (0x0001edbc) aid_area_touch_cam4_zoom

0x8019,	// (0x0001edc4) cam4_zoom_cont_pane

0x8021,	// (0x0001edcc) cam4_zoom_pane_g1

0x8029,	// (0x0001edd4) cam4_zoom_pane_g2

0x8031,	// (0x0001eddc) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x00026790) cam4_zoom_pane_g

0x8039,	// (0x0001ede4) cam4_zoom_cont_pane_g1

0x8042,	// (0x0001eded) cam4_zoom_cont_pane_g2

0x804b,	// (0x0001edf6) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x00026797) cam4_zoom_cont_pane_g

0xc553,	// (0x000232fe) call4_image_pane_ParamLimits

0xc553,	// (0x000232fe) call4_image_pane

0x3c9d,	// (0x0001aa48) call4_windows_conf_pane_ParamLimits

0x3ce4,	// (0x0001aa8f) popup_call4_audio_in_window_ParamLimits

0x3ce4,	// (0x0001aa8f) popup_call4_audio_in_window

0x022d,	// (0x00016fd8) bg_popup_call2_act_pane_cp02

0x3d5c,	// (0x0001ab07) call4_list_conf_pane

0x30e5,	// (0x00019e90) call4_image_pane_g1

0x30e5,	// (0x00019e90) call4_image_pane_g2

0x0001,

0xf700,	// (0x000264ab) call4_image_pane_g

0x40d3,	// (0x0001ae7e) list_single_graphic_popup_conf4_pane_ParamLimits

0x40d3,	// (0x0001ae7e) list_single_graphic_popup_conf4_pane

0x022d,	// (0x00016fd8) list_highlight_pane_cp022

0x40e8,	// (0x0001ae93) list_single_graphic_popup_conf4_pane_g1

0x1575,	// (0x00018320) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0002679e) list_single_graphic_popup_conf4_pane_g

0x40f0,	// (0x0001ae9b) list_single_graphic_popup_conf4_pane_t1

0x911d,	// (0x0001fec8) popup_vtel_slider_window_ParamLimits

0x911d,	// (0x0001fec8) popup_vtel_slider_window

0x3c4b,	// (0x0001a9f6) dialer2_ne_pane_t2_ParamLimits

0x3c4b,	// (0x0001a9f6) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0002667f) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0002667f) dialer2_ne_pane_t

0x029e,	// (0x00017049) bg_popup_sub_pane_cp010_ParamLimits

0x029e,	// (0x00017049) bg_popup_sub_pane_cp010

0xcbf1,	// (0x0002399c) popup_vtel_slider_window_g1_ParamLimits

0xcbf1,	// (0x0002399c) popup_vtel_slider_window_g1

0xcbfd,	// (0x000239a8) popup_vtel_slider_window_g2_ParamLimits

0xcbfd,	// (0x000239a8) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x000267a3) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x000267a3) popup_vtel_slider_window_g

0xcc45,	// (0x000239f0) vtel_slider_pane_ParamLimits

0xcc45,	// (0x000239f0) vtel_slider_pane

0xcc54,	// (0x000239ff) vtel_slider_pane_g1_ParamLimits

0xcc54,	// (0x000239ff) vtel_slider_pane_g1

0xcc61,	// (0x00023a0c) vtel_slider_pane_g2_ParamLimits

0xcc61,	// (0x00023a0c) vtel_slider_pane_g2

0xcc6e,	// (0x00023a19) vtel_slider_pane_g3_ParamLimits

0xcc6e,	// (0x00023a19) vtel_slider_pane_g3

0xcc54,	// (0x000239ff) vtel_slider_pane_g4_ParamLimits

0xcc54,	// (0x000239ff) vtel_slider_pane_g4

0xcc7b,	// (0x00023a26) vtel_slider_pane_g5_ParamLimits

0xcc7b,	// (0x00023a26) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x000267ac) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x000267ac) vtel_slider_pane_g

0x022d,	// (0x00016fd8) main_gallery2_pane

0x7d65,	// (0x0001eb10) aid_size_row_itut2_dropdow_list_ParamLimits

0x7d65,	// (0x0001eb10) aid_size_row_itut2_dropdow_list

0x7dd3,	// (0x0001eb7e) grid_vitu2_function_top_pane_ParamLimits

0x7dd3,	// (0x0001eb7e) grid_vitu2_function_top_pane

0x7e25,	// (0x0001ebd0) popup_vitu2_dropdown_list_window_ParamLimits

0x7e25,	// (0x0001ebd0) popup_vitu2_dropdown_list_window

0x7e45,	// (0x0001ebf0) popup_vitu2_match_list_window

0x8054,	// (0x0001edff) cell_vitu2_function_top_pane_ParamLimits

0x8054,	// (0x0001edff) cell_vitu2_function_top_pane

0x8074,	// (0x0001ee1f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8074,	// (0x0001ee1f) cell_vitu2_function_top_pane_cp01

0x8092,	// (0x0001ee3d) cell_vitu2_function_top_wide_pane_ParamLimits

0x8092,	// (0x0001ee3d) cell_vitu2_function_top_wide_pane

0x7cb1,	// (0x0001ea5c) bg_button_pane_cp012

0x80b0,	// (0x0001ee5b) cell_vitu2_function_top_pane_g1

0x80bf,	// (0x0001ee6a) bg_button_pane_cp013_ParamLimits

0x80bf,	// (0x0001ee6a) bg_button_pane_cp013

0xcc88,	// (0x00023a33) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xcc88,	// (0x00023a33) cell_vitu2_function_top_wide_pane_g1

0x80db,	// (0x0001ee86) bg_popup_sub_pane_cp20

0x80e9,	// (0x0001ee94) list_vitu2_match_list_pane

0x3e95,	// (0x0001ac40) bg_popup_sub_pane_cp20_g1

0x3e9d,	// (0x0001ac48) bg_popup_sub_pane_cp20_g2

0x0fbd,	// (0x00017d68) bg_popup_sub_pane_cp20_g3

0x3ea5,	// (0x0001ac50) bg_popup_sub_pane_cp20_g4

0x0f9d,	// (0x00017d48) bg_popup_sub_pane_cp20_g5

0x4130,	// (0x0001aedb) bg_popup_sub_pane_cp20_g6

0x3eb5,	// (0x0001ac60) bg_popup_sub_pane_cp20_g7

0x3ebd,	// (0x0001ac68) bg_popup_sub_pane_cp20_g8

0x3ec5,	// (0x0001ac70) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x000267b7) bg_popup_sub_pane_cp20_g

0x8101,	// (0x0001eeac) list_vitu2_match_list_item_pane_ParamLimits

0x8101,	// (0x0001eeac) list_vitu2_match_list_item_pane

0x8113,	// (0x0001eebe) list_vitu2_match_list_item_pane_t1

0x6ead,	// (0x0001dc58) bg_popup_sub_pane_cp21

0x8121,	// (0x0001eecc) grid_vitu2_dropdown_list_pane

0x8129,	// (0x0001eed4) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8129,	// (0x0001eed4) cell_vitu2_dropdown_list_char_pane

0x814e,	// (0x0001eef9) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x814e,	// (0x0001eef9) cell_vitu2_dropdown_list_ctrl_pane

0x4182,	// (0x0001af2d) cell_vitu2_dropdown_list_char_pane_g1

0x4179,	// (0x0001af24) cell_vitu2_dropdown_list_char_pane_g2

0x4170,	// (0x0001af1b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x000267d4) cell_vitu2_dropdown_list_char_pane_g

0x817c,	// (0x0001ef27) cell_vitu2_dropdown_list_char_pane_t1

0xcccc,	// (0x00023a77) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xcccc,	// (0x00023a77) cell_vitu2_dropdown_list_ctrl_pane_g1

0xccdc,	// (0x00023a87) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xccdc,	// (0x00023a87) cell_vitu2_dropdown_list_ctrl_pane_g2

0xcced,	// (0x00023a98) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xcced,	// (0x00023a98) cell_vitu2_dropdown_list_ctrl_pane_g3

0x818a,	// (0x0001ef35) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x818a,	// (0x0001ef35) cell_vitu2_dropdown_list_ctrl_pane_g4

0x7bc2,	// (0x0001e96d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x7bc2,	// (0x0001e96d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x000267db) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x000267db) cell_vitu2_dropdown_list_ctrl_pane_g

0xccfd,	// (0x00023aa8) aid_size_cell_gallery2_ParamLimits

0xccfd,	// (0x00023aa8) aid_size_cell_gallery2

0xcd0b,	// (0x00023ab6) grid_gallery2_pane_ParamLimits

0xcd0b,	// (0x00023ab6) grid_gallery2_pane

0xcd1a,	// (0x00023ac5) scroll_pane_cp029_ParamLimits

0xcd1a,	// (0x00023ac5) scroll_pane_cp029

0xcd26,	// (0x00023ad1) cell_gallery2_pane_ParamLimits

0xcd26,	// (0x00023ad1) cell_gallery2_pane

0x418b,	// (0x0001af36) cell_gallery2_pane_g2

0xcd50,	// (0x00023afb) cell_gallery2_pane_g3

0x4195,	// (0x0001af40) cell_gallery2_pane_g4

0x419d,	// (0x0001af48) cell_gallery2_pane_g5

0x1743,	// (0x000184ee) grid_highlight_pane_cp10

0x7e45,	// (0x0001ebf0) popup_vitu2_match_list_window_ParamLimits

0x7e59,	// (0x0001ec04) popup_vitu2_query_window_ParamLimits

0x7e59,	// (0x0001ec04) popup_vitu2_query_window

0x6ead,	// (0x0001dc58) bg_vitu2_candi_button_pane

0x4182,	// (0x0001af2d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x4179,	// (0x0001af24) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x4170,	// (0x0001af1b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xcd58,	// (0x00023b03) bg_button_pane_cp015

0xcd6a,	// (0x00023b15) bg_button_pane_cp016

0xcd7d,	// (0x00023b28) bg_button_pane_cp017

0x2bb0,	// (0x0001995b) bg_popup_sub_pane_cp22

0x41a5,	// (0x0001af50) popup_vitu2_query_window_g1

0xcdc2,	// (0x00023b6d) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x000267e6) popup_vitu2_query_window_g

0xcddf,	// (0x00023b8a) popup_vitu2_query_window_t1_ParamLimits

0xcddf,	// (0x00023b8a) popup_vitu2_query_window_t1

0xce12,	// (0x00023bbd) popup_vitu2_query_window_t2_ParamLimits

0xce12,	// (0x00023bbd) popup_vitu2_query_window_t2

0xce24,	// (0x00023bcf) popup_vitu2_query_window_t3_ParamLimits

0xce24,	// (0x00023bcf) popup_vitu2_query_window_t3

0xce4c,	// (0x00023bf7) popup_vitu2_query_window_t4_ParamLimits

0xce4c,	// (0x00023bf7) popup_vitu2_query_window_t4

0xce6f,	// (0x00023c1a) popup_vitu2_query_window_t5_ParamLimits

0xce6f,	// (0x00023c1a) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x000267ed) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x000267ed) popup_vitu2_query_window_t

0x3f9b,	// (0x0001ad46) main_cset_text_pane

0xc936,	// (0x000236e1) aid_area_touch_slider_ParamLimits

0xc952,	// (0x000236fd) cset_slider_pane_ParamLimits

0xc97c,	// (0x00023727) main_cset_slider_pane_g1_ParamLimits

0xc991,	// (0x0002373c) main_cset_slider_pane_g2_ParamLimits

0x3fbc,	// (0x0001ad67) main_cset_slider_pane_g3_ParamLimits

0x3fbc,	// (0x0001ad67) main_cset_slider_pane_g3

0xc9a6,	// (0x00023751) main_cset_slider_pane_g4_ParamLimits

0xc9a6,	// (0x00023751) main_cset_slider_pane_g4

0xc9b5,	// (0x00023760) main_cset_slider_pane_g5_ParamLimits

0xc9b5,	// (0x00023760) main_cset_slider_pane_g5

0xc9c1,	// (0x0002376c) main_cset_slider_pane_g6_ParamLimits

0xc9c1,	// (0x0002376c) main_cset_slider_pane_g6

0xf995,	// (0x00026740) main_cset_slider_pane_g_ParamLimits

0x3fec,	// (0x0001ad97) main_cset_slider_pane_t1_ParamLimits

0xca4d,	// (0x000237f8) main_cset_slider_pane_t2_ParamLimits

0xca67,	// (0x00023812) main_cset_slider_pane_t3_ParamLimits

0xca81,	// (0x0002382c) main_cset_slider_pane_t4_ParamLimits

0xca9b,	// (0x00023846) main_cset_slider_pane_t5_ParamLimits

0xcab7,	// (0x00023862) main_cset_slider_pane_t6_ParamLimits

0xcacc,	// (0x00023877) main_cset_slider_pane_t7_ParamLimits

0xcaf6,	// (0x000238a1) main_cset_slider_pane_t8_ParamLimits

0xcaf6,	// (0x000238a1) main_cset_slider_pane_t8

0xcb1e,	// (0x000238c9) main_cset_slider_pane_t9_ParamLimits

0xcb1e,	// (0x000238c9) main_cset_slider_pane_t9

0xcb46,	// (0x000238f1) main_cset_slider_pane_t10_ParamLimits

0xcb46,	// (0x000238f1) main_cset_slider_pane_t10

0xcb6e,	// (0x00023919) main_cset_slider_pane_t11_ParamLimits

0xcb6e,	// (0x00023919) main_cset_slider_pane_t11

0xcb96,	// (0x00023941) main_cset_slider_pane_t12_ParamLimits

0xcb96,	// (0x00023941) main_cset_slider_pane_t12

0xcbb3,	// (0x0002395e) main_cset_slider_pane_t13_ParamLimits

0xcbb3,	// (0x0002395e) main_cset_slider_pane_t13

0xf9ba,	// (0x00026765) main_cset_slider_pane_t_ParamLimits

0x022d,	// (0x00016fd8) bg_popup_sub_pane_cp011

0x41b1,	// (0x0001af5c) main_cset_text_pane_g1

0x41b9,	// (0x0001af64) main_cset_text_pane_t1

0x41c7,	// (0x0001af72) main_cset_text_pane_t2

0x41d5,	// (0x0001af80) main_cset_text_pane_t3

0x41e3,	// (0x0001af8e) main_cset_text_pane_t4

0x41f1,	// (0x0001af9c) main_cset_text_pane_t5

0x41ff,	// (0x0001afaa) main_cset_text_pane_t6

0x420d,	// (0x0001afb8) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x000267fc) main_cset_text_pane_t

0x022d,	// (0x00016fd8) main_cam4_burst_pane

0x022d,	// (0x00016fd8) main_cam5_pane

0xc87f,	// (0x0002362a) bg_button_pane_cp019

0xc888,	// (0x00023633) bg_button_pane_cp020

0x3fc8,	// (0x0001ad73) main_cset_slider_pane_g7_ParamLimits

0x3fc8,	// (0x0001ad73) main_cset_slider_pane_g7

0x3fd4,	// (0x0001ad7f) main_cset_slider_pane_g8_ParamLimits

0x3fd4,	// (0x0001ad7f) main_cset_slider_pane_g8

0xc9d5,	// (0x00023780) main_cset_slider_pane_g9_ParamLimits

0xc9d5,	// (0x00023780) main_cset_slider_pane_g9

0xc9e1,	// (0x0002378c) main_cset_slider_pane_g10_ParamLimits

0xc9e1,	// (0x0002378c) main_cset_slider_pane_g10

0xc9ed,	// (0x00023798) main_cset_slider_pane_g11_ParamLimits

0xc9ed,	// (0x00023798) main_cset_slider_pane_g11

0xc9f9,	// (0x000237a4) main_cset_slider_pane_g12_ParamLimits

0xc9f9,	// (0x000237a4) main_cset_slider_pane_g12

0xca05,	// (0x000237b0) main_cset_slider_pane_g13_ParamLimits

0xca05,	// (0x000237b0) main_cset_slider_pane_g13

0xca11,	// (0x000237bc) main_cset_slider_pane_g14_ParamLimits

0xca11,	// (0x000237bc) main_cset_slider_pane_g14

0xca1d,	// (0x000237c8) main_cset_slider_pane_g15_ParamLimits

0xca1d,	// (0x000237c8) main_cset_slider_pane_g15

0x401a,	// (0x0001adc5) main_cset_slider_pane_t14_ParamLimits

0x401a,	// (0x0001adc5) main_cset_slider_pane_t14

0x4053,	// (0x0001adfe) main_cset_slider_pane_t15_ParamLimits

0x4053,	// (0x0001adfe) main_cset_slider_pane_t15

0xcee8,	// (0x00023c93) aid_cam4_burst_size_cell_ParamLimits

0xcee8,	// (0x00023c93) aid_cam4_burst_size_cell

0xcf04,	// (0x00023caf) grid_cam4_burst_pane_ParamLimits

0xcf04,	// (0x00023caf) grid_cam4_burst_pane

0xcf36,	// (0x00023ce1) linegrid_cam4_burst_pane_ParamLimits

0xcf36,	// (0x00023ce1) linegrid_cam4_burst_pane

0xcf56,	// (0x00023d01) scroll_pane_cp30_ParamLimits

0xcf56,	// (0x00023d01) scroll_pane_cp30

0xcf62,	// (0x00023d0d) cell_cam4_burst_pane_ParamLimits

0xcf62,	// (0x00023d0d) cell_cam4_burst_pane

0x4227,	// (0x0001afd2) linegrid_cam4_burst_pane_g1_ParamLimits

0x4227,	// (0x0001afd2) linegrid_cam4_burst_pane_g1

0xcfa2,	// (0x00023d4d) linegrid_cam4_burst_pane_g2_ParamLimits

0xcfa2,	// (0x00023d4d) linegrid_cam4_burst_pane_g2

0x4234,	// (0x0001afdf) linegrid_cam4_burst_pane_g3_ParamLimits

0x4234,	// (0x0001afdf) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x0002680b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x0002680b) linegrid_cam4_burst_pane_g

0xcfb3,	// (0x00023d5e) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xcfb3,	// (0x00023d5e) linegrid_cam4_burst_pane_g3_copy1

0x4241,	// (0x0001afec) linegrid_cam4_burst_pane_g4_ParamLimits

0x4241,	// (0x0001afec) linegrid_cam4_burst_pane_g4

0xcfcd,	// (0x00023d78) linegrid_cam4_burst_pane_g5_ParamLimits

0xcfcd,	// (0x00023d78) linegrid_cam4_burst_pane_g5

0xcfde,	// (0x00023d89) linegrid_cam4_burst_pane_g6_ParamLimits

0xcfde,	// (0x00023d89) linegrid_cam4_burst_pane_g6

0x424e,	// (0x0001aff9) linegrid_cam4_burst_pane_g7_ParamLimits

0x424e,	// (0x0001aff9) linegrid_cam4_burst_pane_g7

0xcff5,	// (0x00023da0) cell_cam4_burst_pane_g1

0x4267,	// (0x0001b012) main_cam5_pane_t1_ParamLimits

0x4267,	// (0x0001b012) main_cam5_pane_t1

0x4279,	// (0x0001b024) main_cam5_pane_t2_ParamLimits

0x4279,	// (0x0001b024) main_cam5_pane_t2

0x428b,	// (0x0001b036) main_cam5_pane_t3_ParamLimits

0x428b,	// (0x0001b036) main_cam5_pane_t3

0x429d,	// (0x0001b048) main_cam5_pane_t4_ParamLimits

0x429d,	// (0x0001b048) main_cam5_pane_t4

0x42b5,	// (0x0001b060) main_cam5_pane_t5_ParamLimits

0x42b5,	// (0x0001b060) main_cam5_pane_t5

0x42c9,	// (0x0001b074) main_cam5_pane_t6_ParamLimits

0x42c9,	// (0x0001b074) main_cam5_pane_t6

0x42dd,	// (0x0001b088) main_cam5_pane_t7_ParamLimits

0x42dd,	// (0x0001b088) main_cam5_pane_t7

0x42ef,	// (0x0001b09a) main_cam5_pane_t8_ParamLimits

0x42ef,	// (0x0001b09a) main_cam5_pane_t8

0x430d,	// (0x0001b0b8) main_cam5_pane_t9_ParamLimits

0x430d,	// (0x0001b0b8) main_cam5_pane_t9

0x431f,	// (0x0001b0ca) main_cam5_pane_t10_ParamLimits

0x431f,	// (0x0001b0ca) main_cam5_pane_t10

0x4331,	// (0x0001b0dc) main_cam5_pane_t11_ParamLimits

0x4331,	// (0x0001b0dc) main_cam5_pane_t11

0x4345,	// (0x0001b0f0) main_cam5_pane_t12_ParamLimits

0x4345,	// (0x0001b0f0) main_cam5_pane_t12

0x435c,	// (0x0001b107) main_cam5_pane_t13_ParamLimits

0x435c,	// (0x0001b107) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x00026817) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x00026817) main_cam5_pane_t

0x8524,	// (0x0001f2cf) popup_scut_keymap_window_ParamLimits

0x8524,	// (0x0001f2cf) popup_scut_keymap_window

0xd008,	// (0x00023db3) aid_size_cell_brow_shortcut

0x1743,	// (0x000184ee) bg_popup_window_pane_cp010

0xd014,	// (0x00023dbf) grid_scut_pane

0xd020,	// (0x00023dcb) cell_scut_pane_ParamLimits

0xd020,	// (0x00023dcb) cell_scut_pane

0xd03b,	// (0x00023de6) cell_scut_pane_g1

0x437f,	// (0x0001b12a) cell_scut_pane_t1

0x438e,	// (0x0001b139) cell_scut_pane_t2

0xd044,	// (0x00023def) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x00026832) cell_scut_pane_t

0xb9ed,	// (0x00022798) main_mup3_pane_g8_ParamLimits

0xb9ed,	// (0x00022798) main_mup3_pane_g8

0x7d73,	// (0x0001eb1e) area_vitu2_query_pane_ParamLimits

0x7d73,	// (0x0001eb1e) area_vitu2_query_pane

0xcd90,	// (0x00023b3b) input_focus_pane_cp08

0x439d,	// (0x0001b148) area_vitu2_query_pane_g1

0xd052,	// (0x00023dfd) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x00026839) area_vitu2_query_pane_g

0xd063,	// (0x00023e0e) area_vitu2_query_pane_t1_ParamLimits

0xd063,	// (0x00023e0e) area_vitu2_query_pane_t1

0xd077,	// (0x00023e22) area_vitu2_query_pane_t2_ParamLimits

0xd077,	// (0x00023e22) area_vitu2_query_pane_t2

0xd08b,	// (0x00023e36) area_vitu2_query_pane_t3_ParamLimits

0xd08b,	// (0x00023e36) area_vitu2_query_pane_t3

0x43a9,	// (0x0001b154) area_vitu2_query_pane_t4_ParamLimits

0x43a9,	// (0x0001b154) area_vitu2_query_pane_t4

0x43d1,	// (0x0001b17c) area_vitu2_query_pane_t5_ParamLimits

0x43d1,	// (0x0001b17c) area_vitu2_query_pane_t5

0x43f9,	// (0x0001b1a4) area_vitu2_query_pane_t6_ParamLimits

0x43f9,	// (0x0001b1a4) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0002683e) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0002683e) area_vitu2_query_pane_t

0xd0b3,	// (0x00023e5e) bg_button_pane_cp018

0xd0c1,	// (0x00023e6c) bg_button_pane_cp021

0xd0cd,	// (0x00023e78) bg_button_pane_cp022

0xd0de,	// (0x00023e89) input_focus_pane_cp09

0xa1b0,	// (0x00020f5b) aid_size_touch_mv_arrow_left

0xa1db,	// (0x00020f86) aid_size_touch_mv_arrow_right

0xca35,	// (0x000237e0) main_cset_slider_pane_g16_ParamLimits

0xca35,	// (0x000237e0) main_cset_slider_pane_g16

0xca41,	// (0x000237ec) main_cset_slider_pane_g17_ParamLimits

0xca41,	// (0x000237ec) main_cset_slider_pane_g17

0xcff5,	// (0x00023da0) cell_cam4_burst_pane_g1_ParamLimits

0x022d,	// (0x00016fd8) compa_mode_pane

0xcc09,	// (0x000239b4) popup_vtel_slider_window_g3_ParamLimits

0xcc09,	// (0x000239b4) popup_vtel_slider_window_g3

0xcc1d,	// (0x000239c8) popup_vtel_slider_window_g4_ParamLimits

0xcc1d,	// (0x000239c8) popup_vtel_slider_window_g4

0xcc31,	// (0x000239dc) popup_vtel_slider_window_t1_ParamLimits

0xcc31,	// (0x000239dc) popup_vtel_slider_window_t1

0x022d,	// (0x00016fd8) main_cl_pane

0x2bdc,	// (0x00019987) popup_imed_adjust2_window_ParamLimits

0x2bb0,	// (0x0001995b) bg_tb_trans_pane_cp05_ParamLimits

0x3628,	// (0x0001a3d3) popup_imed_adjust2_window_g1_ParamLimits

0x3637,	// (0x0001a3e2) popup_imed_adjust2_window_g2_ParamLimits

0x3637,	// (0x0001a3e2) popup_imed_adjust2_window_g2

0x3643,	// (0x0001a3ee) popup_imed_adjust2_window_g3_ParamLimits

0x3643,	// (0x0001a3ee) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x000265a9) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x000265a9) popup_imed_adjust2_window_g

0x364f,	// (0x0001a3fa) popup_imed_adjust2_window_t1_ParamLimits

0x3667,	// (0x0001a412) slider_imed_adjust_pane_ParamLimits

0x367b,	// (0x0001a426) slider_imed_adjust_pane_g1_ParamLimits

0x368b,	// (0x0001a436) slider_imed_adjust_pane_g2_ParamLimits

0x369b,	// (0x0001a446) slider_imed_adjust_pane_g3_ParamLimits

0x36ac,	// (0x0001a457) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x000265b0) slider_imed_adjust_pane_g_ParamLimits

0x7afb,	// (0x0001e8a6) aid_touch_area_cam4_ParamLimits

0x7afb,	// (0x0001e8a6) aid_touch_area_cam4

0x7b0b,	// (0x0001e8b6) battery_pane_cp01

0x7b92,	// (0x0001e93d) main_camera4_pane_g6_ParamLimits

0x7b92,	// (0x0001e93d) main_camera4_pane_g6

0x7bb0,	// (0x0001e95b) main_camera4_pane_t2_ParamLimits

0x7bb0,	// (0x0001e95b) main_camera4_pane_t2

0x0001,

0xf908,	// (0x000266b3) main_camera4_pane_t_ParamLimits

0xf908,	// (0x000266b3) main_camera4_pane_t

0x7c1f,	// (0x0001e9ca) aid_touch_area_vid4_ParamLimits

0x7c1f,	// (0x0001e9ca) aid_touch_area_vid4

0x7c5f,	// (0x0001ea0a) main_video4_pane_g5_ParamLimits

0x7c5f,	// (0x0001ea0a) main_video4_pane_g5

0x7c83,	// (0x0001ea2e) vid4_progress_pane_ParamLimits

0x7c83,	// (0x0001ea2e) vid4_progress_pane

0x3fe0,	// (0x0001ad8b) main_cset_slider_pane_g18_ParamLimits

0x3fe0,	// (0x0001ad8b) main_cset_slider_pane_g18

0x425b,	// (0x0001b006) cell_cam4_burst_pane_g2_ParamLimits

0x425b,	// (0x0001b006) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x00026812) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x00026812) cell_cam4_burst_pane_g

0xd0ef,	// (0x00023e9a) bg_cl_pane_ParamLimits

0xd0ef,	// (0x00023e9a) bg_cl_pane

0xd0fb,	// (0x00023ea6) cl_header_pane_ParamLimits

0xd0fb,	// (0x00023ea6) cl_header_pane

0xd107,	// (0x00023eb2) cl_listscroll_pane_ParamLimits

0xd107,	// (0x00023eb2) cl_listscroll_pane

0x4445,	// (0x0001b1f0) bg_cl_pane_g1

0x444d,	// (0x0001b1f8) bg_cl_pane_g2

0x4455,	// (0x0001b200) bg_cl_pane_g3

0x445d,	// (0x0001b208) bg_cl_pane_g4

0x4465,	// (0x0001b210) bg_cl_pane_g5

0x446d,	// (0x0001b218) bg_cl_pane_g6

0x4475,	// (0x0001b220) bg_cl_pane_g7

0x447d,	// (0x0001b228) bg_cl_pane_g8

0x4485,	// (0x0001b230) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x0002684d) bg_cl_pane_g

0xd113,	// (0x00023ebe) aid_height_cl_leading_ParamLimits

0xd113,	// (0x00023ebe) aid_height_cl_leading

0xd11f,	// (0x00023eca) aid_height_cl_text_ParamLimits

0xd11f,	// (0x00023eca) aid_height_cl_text

0x39f2,	// (0x0001a79d) bg_cl_header_pane_ParamLimits

0x39f2,	// (0x0001a79d) bg_cl_header_pane

0xd137,	// (0x00023ee2) cl_header_pane_g1_ParamLimits

0xd137,	// (0x00023ee2) cl_header_pane_g1

0xd144,	// (0x00023eef) cl_header_pane_t1_ParamLimits

0xd144,	// (0x00023eef) cl_header_pane_t1

0x448d,	// (0x0001b238) cl_list_pane

0x3fb3,	// (0x0001ad5e) hc_scroll_pane_cp01

0x0f9d,	// (0x00017d48) bg_cl_header_pane_g1

0x3e95,	// (0x0001ac40) bg_cl_header_pane_g2

0x0fbd,	// (0x00017d68) bg_cl_header_pane_g3

0x3ea5,	// (0x0001ac50) bg_cl_header_pane_g4

0x3e9d,	// (0x0001ac48) bg_cl_header_pane_g5

0x4130,	// (0x0001aedb) bg_cl_header_pane_g6

0x3ebd,	// (0x0001ac68) bg_cl_header_pane_g7

0x3ec5,	// (0x0001ac70) bg_cl_header_pane_g8

0x3eb5,	// (0x0001ac60) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x00026860) bg_cl_header_pane_g

0xd156,	// (0x00023f01) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xd156,	// (0x00023f01) hc_cl_list_double_graphic_heading_pane

0x4138,	// (0x0001aee3) hc_cl_list_single_graphic_pane_ParamLimits

0x4138,	// (0x0001aee3) hc_cl_list_single_graphic_pane

0xd166,	// (0x00023f11) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xd166,	// (0x00023f11) hc_cl_list_single_graphic_pane_g1

0xd172,	// (0x00023f1d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd172,	// (0x00023f1d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x00026873) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x00026873) hc_cl_list_single_graphic_pane_g

0xd186,	// (0x00023f31) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd186,	// (0x00023f31) hc_cl_list_single_graphic_pane_t1

0xd166,	// (0x00023f11) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xd166,	// (0x00023f11) hc_cl_list_double_graphic_heading_pane_g1

0xd19b,	// (0x00023f46) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd19b,	// (0x00023f46) hc_cl_list_double_graphic_heading_pane_g2

0xd1af,	// (0x00023f5a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd1af,	// (0x00023f5a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x00026878) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x00026878) hc_cl_list_double_graphic_heading_pane_g

0xd1c3,	// (0x00023f6e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd1c3,	// (0x00023f6e) hc_cl_list_double_graphic_heading_pane_t1

0xd1d8,	// (0x00023f83) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd1d8,	// (0x00023f83) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0002687f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0002687f) hc_cl_list_double_graphic_heading_pane_t

0x81b5,	// (0x0001ef60) vid4_progress_pane_g1

0x81c1,	// (0x0001ef6c) vid4_progress_pane_g2

0x81cd,	// (0x0001ef78) vid4_progress_pane_g3

0x81dc,	// (0x0001ef87) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x00026884) vid4_progress_pane_g

0x81fa,	// (0x0001efa5) vid4_progress_pane_t1

0x8210,	// (0x0001efbb) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x0002688f) vid4_progress_pane_t

0x823b,	// (0x0001efe6) wait_bar_pane_cp07

0x2ed2,	// (0x00019c7d) blid_firmament_pane_ParamLimits

0x2f15,	// (0x00019cc0) popup_blid_sat_info2_window_g1

0x2f39,	// (0x00019ce4) popup_blid_sat_info2_window_t3

0x2f47,	// (0x00019cf2) popup_blid_sat_info2_window_t4

0x2f55,	// (0x00019d00) popup_blid_sat_info2_window_t5

0x2f63,	// (0x00019d0e) popup_blid_sat_info2_window_t6

0x2f73,	// (0x00019d1e) popup_blid_sat_info2_window_t7

0x2f81,	// (0x00019d2c) popup_blid_sat_info2_window_t8

0x2f8f,	// (0x00019d3a) popup_blid_sat_info2_window_t9

0x2f9d,	// (0x00019d48) popup_blid_sat_info2_window_t10

0x3065,	// (0x00019e10) aid_firma_cardinal_ParamLimits

0x3079,	// (0x00019e24) blid_firmament_pane_t1_ParamLimits

0x3090,	// (0x00019e3b) blid_firmament_pane_t2_ParamLimits

0x30a7,	// (0x00019e52) blid_firmament_pane_t3_ParamLimits

0x30be,	// (0x00019e69) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x000264a2) blid_firmament_pane_t_ParamLimits

0x30d5,	// (0x00019e80) blid_sat_info_pane_ParamLimits

0x029e,	// (0x00017049) main_cam_set_pane_ParamLimits

0xc10d,	// (0x00022eb8) aid_size_cell_colour_35_ParamLimits

0xc127,	// (0x00022ed2) aid_size_cell_colour_112_ParamLimits

0xc13e,	// (0x00022ee9) aid_size_cell_effect_ParamLimits

0x029e,	// (0x00017049) bg_tb_trans_pane_cp02_ParamLimits

0x1264,	// (0x0001800f) heading_imed_pane_ParamLimits

0xc158,	// (0x00022f03) listscroll_imed_pane_ParamLimits

0x21de,	// (0x00018f89) popup_call2_audio_first_window_g5_ParamLimits

0x21de,	// (0x00018f89) popup_call2_audio_first_window_g5

0x7984,	// (0x0001e72f) aid_size_touch_image3_arrow_left_ParamLimits

0x7984,	// (0x0001e72f) aid_size_touch_image3_arrow_left

0x799a,	// (0x0001e745) aid_size_touch_image3_arrow_right_ParamLimits

0x799a,	// (0x0001e745) aid_size_touch_image3_arrow_right

0x8226,	// (0x0001efd1) vid4_progress_pane_t3

0xc3f8,	// (0x000231a3) main_hwr_training_symbol_option_pane_ParamLimits

0xc3f8,	// (0x000231a3) main_hwr_training_symbol_option_pane

0x3917,	// (0x0001a6c2) popup_hwr_training_preview_window_ParamLimits

0x3917,	// (0x0001a6c2) popup_hwr_training_preview_window

0x76a0,	// (0x0001e44b) hwr_training_navi_pane_g5_ParamLimits

0x76a0,	// (0x0001e44b) hwr_training_navi_pane_g5

0x3e83,	// (0x0001ac2e) popup_char_count_window

0x80db,	// (0x0001ee86) bg_popup_sub_pane_cp20_ParamLimits

0x80e9,	// (0x0001ee94) list_vitu2_match_list_pane_ParamLimits

0x80f5,	// (0x0001eea0) vitu2_page_scroll_pane_ParamLimits

0x80f5,	// (0x0001eea0) vitu2_page_scroll_pane

0x4590,	// (0x0001b33b) list_single_hwr_training_symbol_option_pane_ParamLimits

0x4590,	// (0x0001b33b) list_single_hwr_training_symbol_option_pane

0x45a3,	// (0x0001b34e) list_single_hwr_training_symbol_option_pane_g1

0x45ab,	// (0x0001b356) list_single_hwr_training_symbol_option_pane_t1

0x45b9,	// (0x0001b364) bg_button_pane_cp023

0x45c2,	// (0x0001b36d) bg_button_pane_cp024

0xd1ed,	// (0x00023f98) vitu2_page_scroll_pane_g1

0xd1f5,	// (0x00023fa0) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x00026896) vitu2_page_scroll_pane_g

0xd1ff,	// (0x00023faa) vitu2_page_scroll_pane_t1

0x2dee,	// (0x00019b99) popup_char_count_window_g1

0x45f5,	// (0x0001b3a0) popup_char_count_window_g2

0x45fe,	// (0x0001b3a9) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x0002689b) popup_char_count_window_g

0x4607,	// (0x0001b3b2) popup_char_count_window_t1

0x022d,	// (0x00016fd8) main_vded2_pane

0x3614,	// (0x0001a3bf) aid_size_cell_imed_line

0x361e,	// (0x0001a3c9) grid_imed_line_width_pane

0x7ce7,	// (0x0001ea92) vid4_indicators_pane_g4

0x4615,	// (0x0001b3c0) cell_imed_line_width_pane_ParamLimits

0x4615,	// (0x0001b3c0) cell_imed_line_width_pane

0x462b,	// (0x0001b3d6) cell_imed_line_width_pane_g1

0x4634,	// (0x0001b3df) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x000268a2) cell_imed_line_width_pane_g

0xd20e,	// (0x00023fb9) main_vded2_pane_g1_ParamLimits

0xd20e,	// (0x00023fb9) main_vded2_pane_g1

0xd21d,	// (0x00023fc8) main_vded2_pane_g2_ParamLimits

0xd21d,	// (0x00023fc8) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x000268a7) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x000268a7) main_vded2_pane_g

0xd22b,	// (0x00023fd6) vded2_slider_pane_ParamLimits

0xd22b,	// (0x00023fd6) vded2_slider_pane

0xd238,	// (0x00023fe3) aid_size_touch_vded2_end

0xd242,	// (0x00023fed) aid_size_touch_vded2_playhead

0x463c,	// (0x0001b3e7) aid_size_touch_vded2_start

0x4644,	// (0x0001b3ef) vded2_slider_bg_pane

0x464d,	// (0x0001b3f8) vded2_slider_pane_g1

0x4656,	// (0x0001b401) vded2_slider_pane_g2

0xd24a,	// (0x00023ff5) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x000268ac) vded2_slider_pane_g

0x3a00,	// (0x0001a7ab) vded2_slider_bg_pane_g1

0x3a09,	// (0x0001a7b4) vded2_slider_bg_pane_g2

0x3a12,	// (0x0001a7bd) vded2_slider_bg_pane_g3

0x0002,

0xf7c7,	// (0x00026572) vded2_slider_bg_pane_g

0xa8aa,	// (0x00021655) aid_postcard_touch_down_pane_ParamLimits

0xa8aa,	// (0x00021655) aid_postcard_touch_down_pane

0xa8ba,	// (0x00021665) aid_postcard_touch_up_pane_ParamLimits

0xa8ba,	// (0x00021665) aid_postcard_touch_up_pane

0x022d,	// (0x00016fd8) main_blid2_pane

0x2bbe,	// (0x00019969) popup_blid2_search_window

0x022d,	// (0x00016fd8) blid2_gps_pane

0x022d,	// (0x00016fd8) blid2_navig_pane

0x022d,	// (0x00016fd8) blid2_search_pane

0x022d,	// (0x00016fd8) blid2_tripm_pane

0xd253,	// (0x00023ffe) blid2_search_pane_g1_ParamLimits

0xd253,	// (0x00023ffe) blid2_search_pane_g1

0xd263,	// (0x0002400e) blid2_search_pane_t1_ParamLimits

0xd263,	// (0x0002400e) blid2_search_pane_t1

0xd275,	// (0x00024020) aid_size_cell_blid2_gps_ParamLimits

0xd275,	// (0x00024020) aid_size_cell_blid2_gps

0xd285,	// (0x00024030) blid2_gps_pane_g1_ParamLimits

0xd285,	// (0x00024030) blid2_gps_pane_g1

0xd291,	// (0x0002403c) grid_blid2_satellite_pane_ParamLimits

0xd291,	// (0x0002403c) grid_blid2_satellite_pane

0xd29f,	// (0x0002404a) blid2_navig_pane_g1_ParamLimits

0xd29f,	// (0x0002404a) blid2_navig_pane_g1

0xd2ab,	// (0x00024056) blid2_navig_pane_t1_ParamLimits

0xd2ab,	// (0x00024056) blid2_navig_pane_t1

0xd2bd,	// (0x00024068) blid2_navig_pane_t2_ParamLimits

0xd2bd,	// (0x00024068) blid2_navig_pane_t2

0x0001,

0xfb08,	// (0x000268b3) blid2_navig_pane_t_ParamLimits

0xfb08,	// (0x000268b3) blid2_navig_pane_t

0xd2cf,	// (0x0002407a) blid2_navig_ring_pane_ParamLimits

0xd2cf,	// (0x0002407a) blid2_navig_ring_pane

0xd2df,	// (0x0002408a) blid2_speed_pane_ParamLimits

0xd2df,	// (0x0002408a) blid2_speed_pane

0xd2eb,	// (0x00024096) blid2_tripm_pane_g1_ParamLimits

0xd2eb,	// (0x00024096) blid2_tripm_pane_g1

0xd2fb,	// (0x000240a6) blid2_tripm_pane_g2_ParamLimits

0xd2fb,	// (0x000240a6) blid2_tripm_pane_g2

0xd307,	// (0x000240b2) blid2_tripm_pane_g3_ParamLimits

0xd307,	// (0x000240b2) blid2_tripm_pane_g3

0xd313,	// (0x000240be) blid2_tripm_pane_g4_ParamLimits

0xd313,	// (0x000240be) blid2_tripm_pane_g4

0xd31f,	// (0x000240ca) blid2_tripm_pane_g5_ParamLimits

0xd31f,	// (0x000240ca) blid2_tripm_pane_g5

0x0005,

0xfb0d,	// (0x000268b8) blid2_tripm_pane_g_ParamLimits

0xfb0d,	// (0x000268b8) blid2_tripm_pane_g

0xd33b,	// (0x000240e6) blid2_tripm_pane_t1_ParamLimits

0xd33b,	// (0x000240e6) blid2_tripm_pane_t1

0xd34f,	// (0x000240fa) blid2_tripm_pane_t2_ParamLimits

0xd34f,	// (0x000240fa) blid2_tripm_pane_t2

0xd361,	// (0x0002410c) blid2_tripm_pane_t3_ParamLimits

0xd361,	// (0x0002410c) blid2_tripm_pane_t3

0x0003,

0xfb1a,	// (0x000268c5) blid2_tripm_pane_t_ParamLimits

0xfb1a,	// (0x000268c5) blid2_tripm_pane_t

0xd393,	// (0x0002413e) cell_blid2_satellite_pane_ParamLimits

0xd393,	// (0x0002413e) cell_blid2_satellite_pane

0xd3b1,	// (0x0002415c) cell_blid2_satellite_pane_g1

0x465e,	// (0x0001b409) cell_blid2_satellite_pane_t1

0x30e5,	// (0x00019e90) blid2_speed_pane_g1

0x466c,	// (0x0001b417) blid2_speed_pane_t1

0x467a,	// (0x0001b425) blid2_speed_pane_t2

0x0001,

0xfb23,	// (0x000268ce) blid2_speed_pane_t

0x30e5,	// (0x00019e90) blid2_navig_ring_pane_g1

0xd3ba,	// (0x00024165) blid2_navig_ring_pane_g2

0xd3c2,	// (0x0002416d) blid2_navig_ring_pane_g3

0xd3ca,	// (0x00024175) blid2_navig_ring_pane_g4

0xd3d2,	// (0x0002417d) blid2_navig_ring_pane_g5

0x0004,

0xfb28,	// (0x000268d3) blid2_navig_ring_pane_g

0x022d,	// (0x00016fd8) bg_popup_window_pane_cp011

0x4688,	// (0x0001b433) popup_blid2_search_window_g1

0x4690,	// (0x0001b43b) popup_blid2_search_window_t1

0x469e,	// (0x0001b449) popup_blid2_search_window_t2

0x0001,

0xfb33,	// (0x000268de) popup_blid2_search_window_t

0x0eac,	// (0x00017c57) main_browser_pane_g1

0x0a07,	// (0x000177b2) main_browser_pane_ParamLimits

0x7cb1,	// (0x0001ea5c) bg_button_pane_cp011_ParamLimits

0x7ffd,	// (0x0001eda8) cell_vitu2_function_pane_g1_ParamLimits

0x2bb0,	// (0x0001995b) bg_popup_sub_pane_cp22_ParamLimits

0xcd90,	// (0x00023b3b) input_focus_pane_cp08_ParamLimits

0xcda7,	// (0x00023b52) popup_vitu2_query_button_pane_ParamLimits

0xcda7,	// (0x00023b52) popup_vitu2_query_button_pane

0xcdb8,	// (0x00023b63) popup_vitu2_query_input_button_pane

0x41a5,	// (0x0001af50) popup_vitu2_query_window_g1_ParamLimits

0xcdc2,	// (0x00023b6d) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x000267e6) popup_vitu2_query_window_g_ParamLimits

0x022d,	// (0x00016fd8) bg_button_pane_cp026

0xd3da,	// (0x00024185) popup_vitu2_query_input_button_pane_g1

0x022d,	// (0x00016fd8) bg_button_pane_cp025

0x46ac,	// (0x0001b457) popup_vitu2_query_button_pane_t1

0xb743,	// (0x000224ee) main_mp3_pane_t6

0xb753,	// (0x000224fe) popup_slider_window_cp01

0x7bd0,	// (0x0001e97b) cam4_battery_pane

0x7cbf,	// (0x0001ea6a) cam4_battery_pane_cp02

0x81a3,	// (0x0001ef4e) cam4_battery_pane_cp01

0x81ad,	// (0x0001ef58) cam4_battery_pane_cp03

0x46ba,	// (0x0001b465) cam4_battery_pane_g1

0x30e5,	// (0x00019e90) cam4_battery_pane_g2

0x0001,

0xfb38,	// (0x000268e3) cam4_battery_pane_g

0x2fab,	// (0x00019d56) popup_blid_sat_info2_window_t11

0xa1b0,	// (0x00020f5b) aid_size_touch_mv_arrow_left_ParamLimits

0xa1db,	// (0x00020f86) aid_size_touch_mv_arrow_right_ParamLimits

0x16a3,	// (0x0001844e) navi_pane_g1_ParamLimits

0xa204,	// (0x00020faf) navi_pane_g2_ParamLimits

0xa232,	// (0x00020fdd) navi_pane_g3_ParamLimits

0xf409,	// (0x000261b4) navi_pane_g_ParamLimits

0xa28c,	// (0x00021037) navi_pane_mv_t1_ParamLimits

0xc164,	// (0x00022f0f) grid_imed_effect_pane_ParamLimits

0x8fe5,	// (0x0001fd90) aid_placing_vt_slider_lsc

0x0df9,	// (0x00017ba4) aid_placing_vt_slider_prt

0x029e,	// (0x00017049) bg_tb_trans_pane_cp01_ParamLimits

0x3235,	// (0x00019fe0) popup_image_details_window_g1_ParamLimits

0x3248,	// (0x00019ff3) popup_image_details_window_g2_ParamLimits

0x325d,	// (0x0001a008) popup_image_details_window_g3_ParamLimits

0x325d,	// (0x0001a008) popup_image_details_window_g3

0xf73c,	// (0x000264e7) popup_image_details_window_g_ParamLimits

0x3271,	// (0x0001a01c) popup_image_details_window_t1_ParamLimits

0x3283,	// (0x0001a02e) popup_image_details_window_t2_ParamLimits

0x329c,	// (0x0001a047) popup_image_details_window_t3_ParamLimits

0x32b0,	// (0x0001a05b) popup_image_details_window_t4_ParamLimits

0x32cb,	// (0x0001a076) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x000264ee) popup_image_details_window_t_ParamLimits

0xd12b,	// (0x00023ed6) cl_header_name_pane_ParamLimits

0xd12b,	// (0x00023ed6) cl_header_name_pane

0xd3e2,	// (0x0002418d) cl_header_name_pane_t1_ParamLimits

0xd3e2,	// (0x0002418d) cl_header_name_pane_t1

0xd3f9,	// (0x000241a4) cl_header_name_pane_t2_ParamLimits

0xd3f9,	// (0x000241a4) cl_header_name_pane_t2

0xd423,	// (0x000241ce) cl_header_name_pane_t3_ParamLimits

0xd423,	// (0x000241ce) cl_header_name_pane_t3

0x0002,

0xfb3d,	// (0x000268e8) cl_header_name_pane_t_ParamLimits

0xfb3d,	// (0x000268e8) cl_header_name_pane_t

0xa25d,	// (0x00021008) navi_pane_mv_g2_ParamLimits

0x3e40,	// (0x0001abeb) field_vitu2_entry_pane_g1_ParamLimits

0x3e4c,	// (0x0001abf7) field_vitu2_entry_pane_g2_ParamLimits

0x3e58,	// (0x0001ac03) field_vitu2_entry_pane_g3_ParamLimits

0x3e58,	// (0x0001ac03) field_vitu2_entry_pane_g3

0xf93a,	// (0x000266e5) field_vitu2_entry_pane_g_ParamLimits

0x7ed2,	// (0x0001ec7d) cell_vitu2_itu_pane_g1_ParamLimits

0x7ee2,	// (0x0001ec8d) cell_vitu2_itu_pane_g2_ParamLimits

0x7ee2,	// (0x0001ec8d) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x000266f1) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x000266f1) cell_vitu2_itu_pane_g

0x7cb1,	// (0x0001ea5c) bg_vkb2_func_pane_cp05_ParamLimits

0x7cb1,	// (0x0001ea5c) bg_vkb2_func_pane_cp05

0x7cb1,	// (0x0001ea5c) bg_vkb2_func_pane_cp03

0x7cb1,	// (0x0001ea5c) bg_vkb2_func_pane_cp04

0x7cb1,	// (0x0001ea5c) bg_vkb2_func_pane_cp10_ParamLimits

0x7cb1,	// (0x0001ea5c) bg_vkb2_func_pane_cp10

0xd0cd,	// (0x00023e78) bg_vkb2_func_pane_cp08

0xd0b3,	// (0x00023e5e) bg_vkb2_func_pane_cp06

0xd0c1,	// (0x00023e6c) bg_vkb2_func_pane_cp07

0x45cb,	// (0x0001b376) bg_vkb2_func_pane_cp11_ParamLimits

0x45cb,	// (0x0001b376) bg_vkb2_func_pane_cp11

0x45e0,	// (0x0001b38b) bg_vkb2_func_pane_cp12_ParamLimits

0x45e0,	// (0x0001b38b) bg_vkb2_func_pane_cp12

0x022d,	// (0x00016fd8) bg_vkb2_func_pane_cp09

0x3e95,	// (0x0001ac40) bg_vkb2_func_pane_g1

0x0fbd,	// (0x00017d68) bg_vkb2_func_pane_g2

0x3e9d,	// (0x0001ac48) bg_vkb2_func_pane_g3

0x3ea5,	// (0x0001ac50) bg_vkb2_func_pane_g4

0x4130,	// (0x0001aedb) bg_vkb2_func_pane_g5

0x3ebd,	// (0x0001ac68) bg_vkb2_func_pane_g6

0x3ec5,	// (0x0001ac70) bg_vkb2_func_pane_g7

0x3eb5,	// (0x0001ac60) bg_vkb2_func_pane_g8

0x0f9d,	// (0x00017d48) bg_vkb2_func_pane_g9

0x0008,

0xfb44,	// (0x000268ef) bg_vkb2_func_pane_g

0xd32d,	// (0x000240d8) blid2_tripm_pane_g6_ParamLimits

0xd32d,	// (0x000240d8) blid2_tripm_pane_g6

0x3c05,	// (0x0001a9b0) mp4_progress_pane_g1

0xd387,	// (0x00024132) blid2_tripm_values_pane_ParamLimits

0xd387,	// (0x00024132) blid2_tripm_values_pane

0xd448,	// (0x000241f3) blid2_tripm_values_pane_t1

0xd456,	// (0x00024201) blid2_tripm_values_pane_t2

0xd464,	// (0x0002420f) blid2_tripm_values_pane_t3

0xd472,	// (0x0002421d) blid2_tripm_values_pane_t4

0xd480,	// (0x0002422b) blid2_tripm_values_pane_t5

0xd48e,	// (0x00024239) blid2_tripm_values_pane_t6

0xd49c,	// (0x00024247) blid2_tripm_values_pane_t7

0xd4aa,	// (0x00024255) blid2_tripm_values_pane_t8

0xd4b8,	// (0x00024263) blid2_tripm_values_pane_t9

0x0008,

0xfb57,	// (0x00026902) blid2_tripm_values_pane_t

0x9023,	// (0x0001fdce) call_video_pane_t1_ParamLimits

0x9040,	// (0x0001fdeb) call_video_pane_t2_ParamLimits

0xf292,	// (0x0002603d) call_video_pane_t_ParamLimits

0xa7dd,	// (0x00021588) msg_header_pane_g1_ParamLimits

0x18e0,	// (0x0001868b) msg_header_pane_g2_ParamLimits

0x18e0,	// (0x0001868b) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00026257) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00026257) msg_header_pane_g

0x0a07,	// (0x000177b2) main_clock2_pane_ParamLimits

0xbf5b,	// (0x00022d06) grid_clock2_toolbar_pane_ParamLimits

0xbf5b,	// (0x00022d06) grid_clock2_toolbar_pane

0xbf5b,	// (0x00022d06) listscroll_clock2_pane_ParamLimits

0xbf5b,	// (0x00022d06) listscroll_clock2_pane

0xc013,	// (0x00022dbe) main_clock2_pane_t3_ParamLimits

0xc013,	// (0x00022dbe) main_clock2_pane_t3

0xc025,	// (0x00022dd0) main_clock2_pane_t4_ParamLimits

0xc025,	// (0x00022dd0) main_clock2_pane_t4

0x46c4,	// (0x0001b46f) cell_clock2_toolbar_pane

0x46cc,	// (0x0001b477) cell_clock2_toolbar_pane_cp01

0x46cc,	// (0x0001b477) cell_clock2_toolbar_pane_cp02

0x46d4,	// (0x0001b47f) cell_clock2_toolbar_pane_cp03

0x46dc,	// (0x0001b487) list_clock2_pane

0x1609,	// (0x000183b4) scroll_pane_cp10

0x46e4,	// (0x0001b48f) list_single_clock2_pane_ParamLimits

0x46e4,	// (0x0001b48f) list_single_clock2_pane

0x1743,	// (0x000184ee) list_highlight_pane_cp08

0x46f1,	// (0x0001b49c) list_single_clock2_pane_t1

0x46ff,	// (0x0001b4aa) list_single_clock2_pane_t2

0x0001,

0xfb6a,	// (0x00026915) list_single_clock2_pane_t

0x022d,	// (0x00016fd8) bg_button_pane_cp10

0x470d,	// (0x0001b4b8) cell_clock2_toolbar_pane_g1

0x72a5,	// (0x0001e050) aid_main_viewer_pane_g1_ParamLimits

0x72a5,	// (0x0001e050) aid_main_viewer_pane_g1

0x72b1,	// (0x0001e05c) aid_main_viewer_pane_g2_ParamLimits

0x72b1,	// (0x0001e05c) aid_main_viewer_pane_g2

0xa866,	// (0x00021611) aid_main_viewer_pane_g3_ParamLimits

0xa866,	// (0x00021611) aid_main_viewer_pane_g3

0xa877,	// (0x00021622) aid_main_viewer_pane_g4_ParamLimits

0xa877,	// (0x00021622) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00026268) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00026268) aid_main_viewer_pane_g

0xafc5,	// (0x00021d70) main_calc_pane_ParamLimits

0xafd2,	// (0x00021d7d) main_dialer2_pane_ParamLimits

0x022d,	// (0x00016fd8) main_cam6_pane

0x022d,	// (0x00016fd8) main_vid6_pane

0xbf67,	// (0x00022d12) listscroll_gen_pane_cp06_ParamLimits

0xbf67,	// (0x00022d12) listscroll_gen_pane_cp06

0xc037,	// (0x00022de2) main_clock2_pane_t5_ParamLimits

0xc037,	// (0x00022de2) main_clock2_pane_t5

0xc086,	// (0x00022e31) aid_call2_pane_cp10_ParamLimits

0xc098,	// (0x00022e43) aid_call_pane_cp10_ParamLimits

0x1678,	// (0x00018423) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1678,	// (0x00018423) popup_clock_analogue_window_cp10_g2_ParamLimits

0xc0aa,	// (0x00022e55) popup_clock_analogue_window_cp10_g3_ParamLimits

0xc0aa,	// (0x00022e55) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1678,	// (0x00018423) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0002659e) popup_clock_analogue_window_cp10_g_ParamLimits

0xc0bc,	// (0x00022e67) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc4c8,	// (0x00023273) cell_dialer2_keypad_pane_g2_ParamLimits

0xc4c8,	// (0x00023273) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x00026684) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x00026684) cell_dialer2_keypad_pane_g

0xc4e4,	// (0x0002328f) cell_dialer2_keypad_pane_t1

0xc923,	// (0x000236ce) main_cset_text2_pane_ParamLimits

0xc923,	// (0x000236ce) main_cset_text2_pane

0x439d,	// (0x0001b148) area_vitu2_query_pane_g1_ParamLimits

0xd052,	// (0x00023dfd) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x00026839) area_vitu2_query_pane_g_ParamLimits

0x4421,	// (0x0001b1cc) area_vitu2_query_pane_t7_ParamLimits

0x4421,	// (0x0001b1cc) area_vitu2_query_pane_t7

0xd0b3,	// (0x00023e5e) bg_button_pane_cp018_ParamLimits

0xd0c1,	// (0x00023e6c) bg_button_pane_cp021_ParamLimits

0xd0cd,	// (0x00023e78) bg_button_pane_cp022_ParamLimits

0xd0cd,	// (0x00023e78) bg_vkb2_func_pane_cp08_ParamLimits

0xd0b3,	// (0x00023e5e) bg_vkb2_func_pane_cp06_ParamLimits

0xd0c1,	// (0x00023e6c) bg_vkb2_func_pane_cp07_ParamLimits

0xd0de,	// (0x00023e89) input_focus_pane_cp09_ParamLimits

0x824d,	// (0x0001eff8) cam6_autofocus_pane_ParamLimits

0x824d,	// (0x0001eff8) cam6_autofocus_pane

0x826f,	// (0x0001f01a) cam6_image_uncrop_pane_ParamLimits

0x826f,	// (0x0001f01a) cam6_image_uncrop_pane

0x829c,	// (0x0001f047) cam6_indi_pane_ParamLimits

0x829c,	// (0x0001f047) cam6_indi_pane

0x82b6,	// (0x0001f061) cam6_mode_pane_ParamLimits

0x82b6,	// (0x0001f061) cam6_mode_pane

0x82ca,	// (0x0001f075) cam6_timer_pane_ParamLimits

0x82ca,	// (0x0001f075) cam6_timer_pane

0x82d6,	// (0x0001f081) cam6_zoom_pane_ParamLimits

0x82d6,	// (0x0001f081) cam6_zoom_pane

0xd4c6,	// (0x00024271) cam6_mode_pane_g1_ParamLimits

0xd4c6,	// (0x00024271) cam6_mode_pane_g1

0xd4d2,	// (0x0002427d) cam6_mode_pane_g2_ParamLimits

0xd4d2,	// (0x0002427d) cam6_mode_pane_g2

0xd4de,	// (0x00024289) cam6_mode_pane_g3_ParamLimits

0xd4de,	// (0x00024289) cam6_mode_pane_g3

0xd4ea,	// (0x00024295) cam6_mode_pane_g4_ParamLimits

0xd4ea,	// (0x00024295) cam6_mode_pane_g4

0x0003,

0xfb6f,	// (0x0002691a) cam6_mode_pane_g_ParamLimits

0xfb6f,	// (0x0002691a) cam6_mode_pane_g

0x4723,	// (0x0001b4ce) bg_tb_trans_pane_cp08_ParamLimits

0x4723,	// (0x0001b4ce) bg_tb_trans_pane_cp08

0x4731,	// (0x0001b4dc) cam6_battery_pane_ParamLimits

0x4731,	// (0x0001b4dc) cam6_battery_pane

0x4747,	// (0x0001b4f2) cam6_indi_pane_g1_ParamLimits

0x4747,	// (0x0001b4f2) cam6_indi_pane_g1

0x4759,	// (0x0001b504) cam6_indi_pane_g2_ParamLimits

0x4759,	// (0x0001b504) cam6_indi_pane_g2

0x476b,	// (0x0001b516) cam6_indi_pane_g3_ParamLimits

0x476b,	// (0x0001b516) cam6_indi_pane_g3

0x0002,

0xfb78,	// (0x00026923) cam6_indi_pane_g_ParamLimits

0xfb78,	// (0x00026923) cam6_indi_pane_g

0x477d,	// (0x0001b528) cam6_indi_pane_t1_ParamLimits

0x477d,	// (0x0001b528) cam6_indi_pane_t1

0xc627,	// (0x000233d2) cam6_autofocus_pane_g1

0xc61f,	// (0x000233ca) cam6_autofocus_pane_g2

0xc637,	// (0x000233e2) cam6_autofocus_pane_g3

0xc62f,	// (0x000233da) cam6_autofocus_pane_g4

0x0003,

0xfb7f,	// (0x0002692a) cam6_autofocus_pane_g

0x47a3,	// (0x0001b54e) cam6_timer_pane_g1

0x47ab,	// (0x0001b556) cam6_timer_pane_t1

0x47b9,	// (0x0001b564) cam6_zoom_cont_pane

0x47c1,	// (0x0001b56c) cam6_zoom_pane_g1

0x47c9,	// (0x0001b574) cam6_zoom_pane_g2

0xd4f6,	// (0x000242a1) cam6_zoom_pane_g3

0x0002,

0xfb88,	// (0x00026933) cam6_zoom_pane_g

0x30e5,	// (0x00019e90) cam6_battery_pane_g1

0x30e5,	// (0x00019e90) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x000264ab) cam6_battery_pane_g

0x47d1,	// (0x0001b57c) cam6_zoom_cont_pane_g1

0x47da,	// (0x0001b585) cam6_zoom_cont_pane_g2

0x47e3,	// (0x0001b58e) cam6_zoom_cont_pane_g3

0x0002,

0xfb8f,	// (0x0002693a) cam6_zoom_cont_pane_g

0xd513,	// (0x000242be) cam6_mode_pane_cp_ParamLimits

0xd513,	// (0x000242be) cam6_mode_pane_cp

0xd527,	// (0x000242d2) cam6_zoom_pane_cp_ParamLimits

0xd527,	// (0x000242d2) cam6_zoom_pane_cp

0xd545,	// (0x000242f0) vid6_image_uncrop_cif_pane_ParamLimits

0xd545,	// (0x000242f0) vid6_image_uncrop_cif_pane

0xd571,	// (0x0002431c) vid6_image_uncrop_nhd_pane_ParamLimits

0xd571,	// (0x0002431c) vid6_image_uncrop_nhd_pane

0xd590,	// (0x0002433b) vid6_image_uncrop_vga_pane_ParamLimits

0xd590,	// (0x0002433b) vid6_image_uncrop_vga_pane

0xd5af,	// (0x0002435a) vid6_image_uncrop_wvga_pane_ParamLimits

0xd5af,	// (0x0002435a) vid6_image_uncrop_wvga_pane

0xd5ce,	// (0x00024379) vid6_indi_pane_ParamLimits

0xd5ce,	// (0x00024379) vid6_indi_pane

0x4723,	// (0x0001b4ce) bg_tb_trans_pane_cp09_ParamLimits

0x4723,	// (0x0001b4ce) bg_tb_trans_pane_cp09

0x47fb,	// (0x0001b5a6) cam6_battery_pane_cp_ParamLimits

0x47fb,	// (0x0001b5a6) cam6_battery_pane_cp

0x4807,	// (0x0001b5b2) vid6_indi_pane_g1_ParamLimits

0x4807,	// (0x0001b5b2) vid6_indi_pane_g1

0x4819,	// (0x0001b5c4) vid6_indi_pane_g2_ParamLimits

0x4819,	// (0x0001b5c4) vid6_indi_pane_g2

0x482b,	// (0x0001b5d6) vid6_indi_pane_g3_ParamLimits

0x482b,	// (0x0001b5d6) vid6_indi_pane_g3

0x4842,	// (0x0001b5ed) vid6_indi_pane_g4_ParamLimits

0x4842,	// (0x0001b5ed) vid6_indi_pane_g4

0x4859,	// (0x0001b604) vid6_indi_pane_g5_ParamLimits

0x4859,	// (0x0001b604) vid6_indi_pane_g5

0x0004,

0xfb96,	// (0x00026941) vid6_indi_pane_g_ParamLimits

0xfb96,	// (0x00026941) vid6_indi_pane_g

0x4873,	// (0x0001b61e) vid6_indi_pane_t1_ParamLimits

0x4873,	// (0x0001b61e) vid6_indi_pane_t1

0x4889,	// (0x0001b634) vid6_indi_pane_t2_ParamLimits

0x4889,	// (0x0001b634) vid6_indi_pane_t2

0x48b1,	// (0x0001b65c) vid6_indi_pane_t3_ParamLimits

0x48b1,	// (0x0001b65c) vid6_indi_pane_t3

0x48d9,	// (0x0001b684) vid6_indi_pane_t4_ParamLimits

0x48d9,	// (0x0001b684) vid6_indi_pane_t4

0x0003,

0xfba1,	// (0x0002694c) vid6_indi_pane_t_ParamLimits

0xfba1,	// (0x0002694c) vid6_indi_pane_t

0x48fd,	// (0x0001b6a8) wait_bar_pane_cp08

0xd5f3,	// (0x0002439e) main_cset_text2_pane_t1_ParamLimits

0xd5f3,	// (0x0002439e) main_cset_text2_pane_t1

0xd4fe,	// (0x000242a9) listscroll_gen_pane_cp06_t1_ParamLimits

0xd4fe,	// (0x000242a9) listscroll_gen_pane_cp06_t1

0x022d,	// (0x00016fd8) main_cam6_set_pane

0x7bc2,	// (0x0001e96d) bg_tb_trans_pane_cp06_ParamLimits

0x7bd8,	// (0x0001e983) cam4_indicators_pane_g1_ParamLimits

0x7be5,	// (0x0001e990) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x000266c1) cam4_indicators_pane_g_ParamLimits

0x7c05,	// (0x0001e9b0) cam4_indicators_pane_t1_ParamLimits

0x7cb1,	// (0x0001ea5c) bg_tb_trans_pane_cp07_ParamLimits

0x7bd8,	// (0x0001e983) vid4_indicators_pane_g1_ParamLimits

0x7cc9,	// (0x0001ea74) vid4_indicators_pane_g2_ParamLimits

0x7cd6,	// (0x0001ea81) vid4_indicators_pane_g3_ParamLimits

0x7ce7,	// (0x0001ea92) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x000266d3) vid4_indicators_pane_g_ParamLimits

0x7d03,	// (0x0001eaae) vid4_indicators_pane_t1_ParamLimits

0x81b5,	// (0x0001ef60) vid4_progress_pane_g1_ParamLimits

0x81c1,	// (0x0001ef6c) vid4_progress_pane_g2_ParamLimits

0x81cd,	// (0x0001ef78) vid4_progress_pane_g3_ParamLimits

0x81dc,	// (0x0001ef87) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x00026884) vid4_progress_pane_g_ParamLimits

0x81fa,	// (0x0001efa5) vid4_progress_pane_t1_ParamLimits

0x8210,	// (0x0001efbb) vid4_progress_pane_t2_ParamLimits

0x8226,	// (0x0001efd1) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x0002688f) vid4_progress_pane_t_ParamLimits

0x823b,	// (0x0001efe6) wait_bar_pane_cp07_ParamLimits

0xd61a,	// (0x000243c5) main_cam6_set_pane_g2_ParamLimits

0xd61a,	// (0x000243c5) main_cam6_set_pane_g2

0xd626,	// (0x000243d1) main_cset6_listscroll_pane_ParamLimits

0xd626,	// (0x000243d1) main_cset6_listscroll_pane

0xd653,	// (0x000243fe) main_cset6_slider_pane_ParamLimits

0xd653,	// (0x000243fe) main_cset6_slider_pane

0xd65f,	// (0x0002440a) main_cset6_text2_pane_ParamLimits

0xd65f,	// (0x0002440a) main_cset6_text2_pane

0x490c,	// (0x0001b6b7) main_cset6_text_pane

0x4914,	// (0x0001b6bf) main_cset_list_pane_copy1_ParamLimits

0x4914,	// (0x0001b6bf) main_cset_list_pane_copy1

0x4924,	// (0x0001b6cf) scroll_pane_cp028_copy1

0xd672,	// (0x0002441d) cset_list_set_pane_copy1

0xd682,	// (0x0002442d) aid_position_infowindow_above_copy1

0xd68a,	// (0x00024435) aid_position_infowindow_below_copy1

0xd692,	// (0x0002443d) cset_list_set_pane_g1_copy1

0xd69a,	// (0x00024445) cset_list_set_pane_g3_copy1_ParamLimits

0xd69a,	// (0x00024445) cset_list_set_pane_g3_copy1

0xd6a9,	// (0x00024454) cset_list_set_pane_t1_copy1_ParamLimits

0xd6a9,	// (0x00024454) cset_list_set_pane_t1_copy1

0x029e,	// (0x00017049) list_highlight_pane_cp021_copy1_ParamLimits

0x029e,	// (0x00017049) list_highlight_pane_cp021_copy1

0x4951,	// (0x0001b6fc) cset6_slider_pane_ParamLimits

0x4951,	// (0x0001b6fc) cset6_slider_pane

0x497d,	// (0x0001b728) main_cset6_slider_pane_g1_ParamLimits

0x497d,	// (0x0001b728) main_cset6_slider_pane_g1

0xd6be,	// (0x00024469) main_cset6_slider_pane_g2_ParamLimits

0xd6be,	// (0x00024469) main_cset6_slider_pane_g2

0x49a5,	// (0x0001b750) main_cset6_slider_pane_g3_ParamLimits

0x49a5,	// (0x0001b750) main_cset6_slider_pane_g3

0xd6e6,	// (0x00024491) main_cset6_slider_pane_g4_ParamLimits

0xd6e6,	// (0x00024491) main_cset6_slider_pane_g4

0xd6f2,	// (0x0002449d) main_cset6_slider_pane_g5_ParamLimits

0xd6f2,	// (0x0002449d) main_cset6_slider_pane_g5

0x3fc8,	// (0x0001ad73) main_cset6_slider_pane_g7_ParamLimits

0x3fc8,	// (0x0001ad73) main_cset6_slider_pane_g7

0x3fd4,	// (0x0001ad7f) main_cset6_slider_pane_g8_ParamLimits

0x3fd4,	// (0x0001ad7f) main_cset6_slider_pane_g8

0xd6fe,	// (0x000244a9) main_cset6_slider_pane_g9_ParamLimits

0xd6fe,	// (0x000244a9) main_cset6_slider_pane_g9

0xd70a,	// (0x000244b5) main_cset6_slider_pane_g10_ParamLimits

0xd70a,	// (0x000244b5) main_cset6_slider_pane_g10

0xd716,	// (0x000244c1) main_cset6_slider_pane_g11_ParamLimits

0xd716,	// (0x000244c1) main_cset6_slider_pane_g11

0xd722,	// (0x000244cd) main_cset6_slider_pane_g12_ParamLimits

0xd722,	// (0x000244cd) main_cset6_slider_pane_g12

0xd72e,	// (0x000244d9) main_cset6_slider_pane_g13_ParamLimits

0xd72e,	// (0x000244d9) main_cset6_slider_pane_g13

0xd73a,	// (0x000244e5) main_cset6_slider_pane_g14_ParamLimits

0xd73a,	// (0x000244e5) main_cset6_slider_pane_g14

0xd746,	// (0x000244f1) main_cset6_slider_pane_g15_ParamLimits

0xd746,	// (0x000244f1) main_cset6_slider_pane_g15

0xd75e,	// (0x00024509) main_cset6_slider_pane_g16_ParamLimits

0xd75e,	// (0x00024509) main_cset6_slider_pane_g16

0xd76a,	// (0x00024515) main_cset6_slider_pane_g17_ParamLimits

0xd76a,	// (0x00024515) main_cset6_slider_pane_g17

0x0011,

0xfbaa,	// (0x00026955) main_cset6_slider_pane_g_ParamLimits

0xfbaa,	// (0x00026955) main_cset6_slider_pane_g

0x49b1,	// (0x0001b75c) main_cset6_slider_pane_t1_ParamLimits

0x49b1,	// (0x0001b75c) main_cset6_slider_pane_t1

0xd78e,	// (0x00024539) main_cset6_slider_pane_t2_ParamLimits

0xd78e,	// (0x00024539) main_cset6_slider_pane_t2

0xd7b9,	// (0x00024564) main_cset6_slider_pane_t3_ParamLimits

0xd7b9,	// (0x00024564) main_cset6_slider_pane_t3

0xd7e4,	// (0x0002458f) main_cset6_slider_pane_t4_ParamLimits

0xd7e4,	// (0x0002458f) main_cset6_slider_pane_t4

0xd80f,	// (0x000245ba) main_cset6_slider_pane_t5_ParamLimits

0xd80f,	// (0x000245ba) main_cset6_slider_pane_t5

0x49f2,	// (0x0001b79d) main_cset6_slider_pane_t7_ParamLimits

0x49f2,	// (0x0001b79d) main_cset6_slider_pane_t7

0xd83a,	// (0x000245e5) main_cset6_slider_pane_t8_ParamLimits

0xd83a,	// (0x000245e5) main_cset6_slider_pane_t8

0xd85e,	// (0x00024609) main_cset6_slider_pane_t9_ParamLimits

0xd85e,	// (0x00024609) main_cset6_slider_pane_t9

0xd882,	// (0x0002462d) main_cset6_slider_pane_t10_ParamLimits

0xd882,	// (0x0002462d) main_cset6_slider_pane_t10

0xd8a6,	// (0x00024651) main_cset6_slider_pane_t11_ParamLimits

0xd8a6,	// (0x00024651) main_cset6_slider_pane_t11

0x4a28,	// (0x0001b7d3) main_cset6_slider_pane_t14_ParamLimits

0x4a28,	// (0x0001b7d3) main_cset6_slider_pane_t14

0x4a61,	// (0x0001b80c) main_cset6_slider_pane_t15_ParamLimits

0x4a61,	// (0x0001b80c) main_cset6_slider_pane_t15

0x000b,

0xfbcf,	// (0x0002697a) main_cset6_slider_pane_t_ParamLimits

0xfbcf,	// (0x0002697a) main_cset6_slider_pane_t

0x40b8,	// (0x0001ae63) cset_slider_pane_g1_copy1

0x40c1,	// (0x0001ae6c) cset_slider_pane_g2_copy1

0x40ca,	// (0x0001ae75) cset_slider_pane_g3_copy1

0x022d,	// (0x00016fd8) bg_popup_sub_pane_cp011_copy1

0x41b1,	// (0x0001af5c) main_cset_text_pane_g1_copy1

0x41b9,	// (0x0001af64) main_cset_text_pane_t1_copy1

0x41c7,	// (0x0001af72) main_cset_text_pane_t2_copy1

0x41d5,	// (0x0001af80) main_cset_text_pane_t3_copy1

0x41e3,	// (0x0001af8e) main_cset_text_pane_t4_copy1

0x41f1,	// (0x0001af9c) main_cset_text_pane_t5_copy1

0x41ff,	// (0x0001afaa) main_cset_text_pane_t6_copy1

0x420d,	// (0x0001afb8) main_cset_text_pane_t7_copy1

0xd8ca,	// (0x00024675) main_cset_text2_pane_t1_copy1

0x022d,	// (0x00016fd8) main_ncimui_pane

0xb017,	// (0x00021dc2) popup_query_ncimui_window_ParamLimits

0xb017,	// (0x00021dc2) popup_query_ncimui_window

0x33b6,	// (0x0001a161) field_cale_ev2_pane_g4_ParamLimits

0x33b6,	// (0x0001a161) field_cale_ev2_pane_g4

0xc468,	// (0x00023213) cell_video_dialer_keypad_pane_g2_ParamLimits

0xc468,	// (0x00023213) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0002665f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0002665f) cell_video_dialer_keypad_pane_g

0xc480,	// (0x0002322b) cell_video_dialer_keypad_pane_t1

0x022d,	// (0x00016fd8) bg_popup_window_pane_cp012

0x14f5,	// (0x000182a0) heading_pane_cp06

0x4b89,	// (0x0001b934) ncim_query_content_pane

0x022d,	// (0x00016fd8) bg_popup_heading_pane_cp01

0x4b91,	// (0x0001b93c) ncim_heading_pane_t1

0x4b9f,	// (0x0001b94a) ncim_indicator_popup_pane

0x4bb1,	// (0x0001b95c) ncim_query_button_pane

0x4bc7,	// (0x0001b972) ncim_query_content_pane_t1

0x4bd9,	// (0x0001b984) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x000269b9) ncim_query_content_pane_t

0x4c13,	// (0x0001b9be) ncim_query_list_pane

0x4c25,	// (0x0001b9d0) ncim_query_popup_pane

0x4b9f,	// (0x0001b94a) ncim_indicator_popup_pane_ParamLimits

0xd9f5,	// (0x000247a0) ncim_query_content_pane_g1_ParamLimits

0xd9f5,	// (0x000247a0) ncim_query_content_pane_g1

0x4bc7,	// (0x0001b972) ncim_query_content_pane_t1_ParamLimits

0x4bd9,	// (0x0001b984) ncim_query_content_pane_t2_ParamLimits

0xda01,	// (0x000247ac) ncim_query_content_pane_t3_ParamLimits

0xda01,	// (0x000247ac) ncim_query_content_pane_t3

0xda1e,	// (0x000247c9) ncim_query_content_pane_t4_ParamLimits

0xda1e,	// (0x000247c9) ncim_query_content_pane_t4

0xda3b,	// (0x000247e6) ncim_query_content_pane_t5_ParamLimits

0xda3b,	// (0x000247e6) ncim_query_content_pane_t5

0x4beb,	// (0x0001b996) ncim_query_content_pane_t6_ParamLimits

0x4beb,	// (0x0001b996) ncim_query_content_pane_t6

0xfc0e,	// (0x000269b9) ncim_query_content_pane_t_ParamLimits

0x4c13,	// (0x0001b9be) ncim_query_list_pane_ParamLimits

0x4c25,	// (0x0001b9d0) ncim_query_popup_pane_ParamLimits

0x4c39,	// (0x0001b9e4) wait_bar_pane_cp04

0x022d,	// (0x00016fd8) input_focus_pane_cp011

0x4c41,	// (0x0001b9ec) ncim_query_popup_pane_t1

0x4c4f,	// (0x0001b9fa) ncim_list_query_list_pane_ParamLimits

0x4c4f,	// (0x0001b9fa) ncim_list_query_list_pane

0x022d,	// (0x00016fd8) bg_button_pane_cp027

0x4c62,	// (0x0001ba0d) ncim_query_button_pane_g1

0x022d,	// (0x00016fd8) list_highlight_pane_cp012

0x4c6c,	// (0x0001ba17) ncim_list_query_list_pane_g1

0x4c74,	// (0x0001ba1f) ncim_list_query_list_pane_t1

0x7bf5,	// (0x0001e9a0) cam4_indicators_pane_g3_ParamLimits

0x7bf5,	// (0x0001e9a0) cam4_indicators_pane_g3

0x7cf3,	// (0x0001ea9e) vid4_indicators_pane_g5_ParamLimits

0x7cf3,	// (0x0001ea9e) vid4_indicators_pane_g5

0x81eb,	// (0x0001ef96) vid4_progress_pane_g5_ParamLimits

0x81eb,	// (0x0001ef96) vid4_progress_pane_g5

0xd8fc,	// (0x000246a7) main_ncimui_pane_g1

0xd956,	// (0x00024701) ncimui_group_query_pane_ParamLimits

0xd956,	// (0x00024701) ncimui_group_query_pane

0xd9a0,	// (0x0002474b) ncimui_list_pane_ParamLimits

0xd9a0,	// (0x0002474b) ncimui_list_pane

0xd9c1,	// (0x0002476c) ncimui_text_pane_ParamLimits

0xd9c1,	// (0x0002476c) ncimui_text_pane

0xda58,	// (0x00024803) ncimui_text_pane_t1_ParamLimits

0xda58,	// (0x00024803) ncimui_text_pane_t1

0x4c82,	// (0x0001ba2d) ncimui_list_single_graphic_pane_ParamLimits

0x4c82,	// (0x0001ba2d) ncimui_list_single_graphic_pane

0xda77,	// (0x00024822) ncimui_query_pane_ParamLimits

0xda77,	// (0x00024822) ncimui_query_pane

0x022d,	// (0x00016fd8) list_highlight_pane_cp013

0x4c92,	// (0x0001ba3d) ncim_list_query_list_pane_t1_copy1

0x4c6c,	// (0x0001ba17) ncim_list_single_graphic_pane_g1

0x4ca0,	// (0x0001ba4b) ncim_query_button_pane_cp01

0x4cac,	// (0x0001ba57) ncim_query_entry_pane_ParamLimits

0x4cac,	// (0x0001ba57) ncim_query_entry_pane

0x4cbf,	// (0x0001ba6a) ncimui_query_pane_g1

0x4ccb,	// (0x0001ba76) ncimui_query_pane_t1_ParamLimits

0x4ccb,	// (0x0001ba76) ncimui_query_pane_t1

0x029e,	// (0x00017049) input_focus_pane_cp012

0x4ce4,	// (0x0001ba8f) ncim_query_entry_pane_t1

0x0a07,	// (0x000177b2) main_im_pane_ParamLimits

0x029e,	// (0x00017049) main_mobtv_pane_ParamLimits

0x029e,	// (0x00017049) main_mobtv_pane

0xd776,	// (0x00024521) main_cset6_slider_pane_g18_ParamLimits

0xd776,	// (0x00024521) main_cset6_slider_pane_g18

0xd782,	// (0x0002452d) main_cset6_slider_pane_g19_ParamLimits

0xd782,	// (0x0002452d) main_cset6_slider_pane_g19

0x3e58,	// (0x0001ac03) bg_main_mobtv_pane_ParamLimits

0x3e58,	// (0x0001ac03) bg_main_mobtv_pane

0xda8a,	// (0x00024835) main_mobtv_info_pane

0xda95,	// (0x00024840) main_mobtv_loading_pane_ParamLimits

0xda95,	// (0x00024840) main_mobtv_loading_pane

0x4d04,	// (0x0001baaf) main_mobtv_pg_channel_list_pane

0x4d0e,	// (0x0001bab9) main_mobtv_pg_hdr_pane

0xdaa2,	// (0x0002484d) main_mobtv_programe_curr_pane_ParamLimits

0xdaa2,	// (0x0002484d) main_mobtv_programe_curr_pane

0xdaaf,	// (0x0002485a) main_mobtv_programe_next_pane_ParamLimits

0xdaaf,	// (0x0002485a) main_mobtv_programe_next_pane

0x4d17,	// (0x0001bac2) popup_mobtv_noti_window

0x30e5,	// (0x00019e90) main_tv_pg_hdr_pane_g1

0x4d21,	// (0x0001bacc) main_tv_pg_hdr_pane_g2

0x4d29,	// (0x0001bad4) main_tv_pg_hdr_pane_g3

0x4d31,	// (0x0001badc) main_tv_pg_hdr_pane_g4

0x4d39,	// (0x0001bae4) main_tv_pg_hdr_pane_g5

0x4d43,	// (0x0001baee) main_tv_pg_hdr_pane_g6

0x4d4d,	// (0x0001baf8) main_tv_pg_hdr_pane_g7

0x4d57,	// (0x0001bb02) main_tv_pg_hdr_pane_g8

0x4d61,	// (0x0001bb0c) main_tv_pg_hdr_pane_g9

0x4d6b,	// (0x0001bb16) main_tv_pg_hdr_pane_g10

0x4d75,	// (0x0001bb20) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x000269c6) main_tv_pg_hdr_pane_g

0x4d7f,	// (0x0001bb2a) main_tv_pg_hdr_pane_t1

0x4d8d,	// (0x0001bb38) main_tv_pg_hdr_pane_t2

0x4d9b,	// (0x0001bb46) main_tv_pg_hdr_pane_t3

0x4dab,	// (0x0001bb56) main_tv_pg_hdr_pane_t4

0x4dbb,	// (0x0001bb66) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x000269dd) main_tv_pg_hdr_pane_t

0x4dcb,	// (0x0001bb76) single_mobtv_pg_channel_pane_ParamLimits

0x4dcb,	// (0x0001bb76) single_mobtv_pg_channel_pane

0x4ddd,	// (0x0001bb88) single_mobtv_pg_channel_table_pane

0x4de6,	// (0x0001bb91) single_mobtv_pg_channel_thumb_pane

0x4def,	// (0x0001bb9a) single_tv_pg_channel_pane_g1

0x4df8,	// (0x0001bba3) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x000269e8) single_tv_pg_channel_pane_g

0x3315,	// (0x0001a0c0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x3315,	// (0x0001a0c0) bg_single_mobtv_pg_channel_thumb_pane

0x4e01,	// (0x0001bbac) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4e01,	// (0x0001bbac) single_mobtv_pg_channel_thumb_pane_g1

0x4e0f,	// (0x0001bbba) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4e0f,	// (0x0001bbba) single_mobtv_pg_channel_thumb_pane_g2

0x4e1b,	// (0x0001bbc6) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x4e1b,	// (0x0001bbc6) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x000269ed) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x000269ed) single_mobtv_pg_channel_thumb_pane_g

0x4e27,	// (0x0001bbd2) single_mobtv_pg_channel_thumb_pane_t1

0x4e35,	// (0x0001bbe0) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x000269f4) single_mobtv_pg_channel_thumb_pane_t

0x30e5,	// (0x00019e90) bg_single_mobtv_pg_channel_table_pane_g1

0x30e5,	// (0x00019e90) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x000264ab) bg_single_mobtv_pg_channel_table_pane_g

0x4e43,	// (0x0001bbee) single_mobtv_pg_channel_table_pane_t1

0x4e51,	// (0x0001bbfc) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x000269f9) single_mobtv_pg_channel_table_pane_t

0xdac4,	// (0x0002486f) main_mobtv_info_pane_g1_ParamLimits

0xdac4,	// (0x0002486f) main_mobtv_info_pane_g1

0xdae0,	// (0x0002488b) main_mobtv_info_pane_t1_ParamLimits

0xdae0,	// (0x0002488b) main_mobtv_info_pane_t1

0xdb58,	// (0x00024903) main_mobtv_info_pane_t2_ParamLimits

0xdb58,	// (0x00024903) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x00026a03) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x00026a03) main_mobtv_info_pane_t

0xdbeb,	// (0x00024996) wait_bar_pane_cp05

0xdbfd,	// (0x000249a8) main_mobtv_loading_pane_g1_ParamLimits

0xdbfd,	// (0x000249a8) main_mobtv_loading_pane_g1

0xdc09,	// (0x000249b4) main_mobtv_loading_pane_g2_ParamLimits

0xdc09,	// (0x000249b4) main_mobtv_loading_pane_g2

0xdc15,	// (0x000249c0) main_mobtv_loading_pane_g3_ParamLimits

0xdc15,	// (0x000249c0) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x00026a0a) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x00026a0a) main_mobtv_loading_pane_g

0x4e5f,	// (0x0001bc0a) main_mobtv_loading_pane_t1_ParamLimits

0x4e5f,	// (0x0001bc0a) main_mobtv_loading_pane_t1

0x4e77,	// (0x0001bc22) main_mobtv_loading_pane_t2_ParamLimits

0x4e77,	// (0x0001bc22) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x00026a11) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x00026a11) main_mobtv_loading_pane_t

0xdc23,	// (0x000249ce) wait_bar_pane_cp06_ParamLimits

0xdc23,	// (0x000249ce) wait_bar_pane_cp06

0x4e9b,	// (0x0001bc46) main_mobtv_programe_curr_pane_t1

0x4ea9,	// (0x0001bc54) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x00026a16) main_mobtv_programe_curr_pane_t

0x4eb7,	// (0x0001bc62) main_mobtv_programe_next_pane_t1

0x4ec5,	// (0x0001bc70) main_mobtv_programe_next_pane_t2

0x4ed3,	// (0x0001bc7e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x00026a1b) main_mobtv_programe_next_pane_t

0x022d,	// (0x00016fd8) bg_popup_mobtv_noti_window_pane

0x4ee1,	// (0x0001bc8c) popup_mobtv_noti_window_g1

0x4ee9,	// (0x0001bc94) popup_mobtv_noti_window_t1

0x4ef7,	// (0x0001bca2) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x00026a22) popup_mobtv_noti_window_t

0x30e5,	// (0x00019e90) bg_popup_mobtv_noti_window_pane_g1

0x022d,	// (0x00016fd8) sc_clock_pane

0x022d,	// (0x00016fd8) main_fs_bigclock_pane

0xd375,	// (0x00024120) blid2_tripm_pane_t4_ParamLimits

0xd375,	// (0x00024120) blid2_tripm_pane_t4

0xdc2f,	// (0x000249da) sc_clock_pane_g1_ParamLimits

0xdc2f,	// (0x000249da) sc_clock_pane_g1

0xdc3d,	// (0x000249e8) sc_clock_pane_t1_ParamLimits

0xdc3d,	// (0x000249e8) sc_clock_pane_t1

0xdc52,	// (0x000249fd) sc_clock_pane_t2_ParamLimits

0xdc52,	// (0x000249fd) sc_clock_pane_t2

0xdc64,	// (0x00024a0f) sc_clock_pane_t3_ParamLimits

0xdc64,	// (0x00024a0f) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x00026a27) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x00026a27) sc_clock_pane_t

0xe929,	// (0x000256d4) main_fs_bigclock_indicator_pane_ParamLimits

0xe929,	// (0x000256d4) main_fs_bigclock_indicator_pane

0xdceb,	// (0x00024a96) main_fs_bigclock_pane_g1_ParamLimits

0xdceb,	// (0x00024a96) main_fs_bigclock_pane_g1

0xe935,	// (0x000256e0) main_fs_bigclock_pane_t1_ParamLimits

0xe935,	// (0x000256e0) main_fs_bigclock_pane_t1

0xe947,	// (0x000256f2) main_fs_bigclock_pane_t2_ParamLimits

0xe947,	// (0x000256f2) main_fs_bigclock_pane_t2

0xe95b,	// (0x00025706) main_fs_bigclock_pane_t3_ParamLimits

0xe95b,	// (0x00025706) main_fs_bigclock_pane_t3

0x0002,

0xfe76,	// (0x00026c21) main_fs_bigclock_pane_t_ParamLimits

0xfe76,	// (0x00026c21) main_fs_bigclock_pane_t

0x5b55,	// (0x0001c900) main_fs_bigclock_indicator_pane_g1

0x4bb9,	// (0x0001b964) ncim_query_content_pane_g2_ParamLimits

0x4bb9,	// (0x0001b964) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x000269b4) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x000269b4) ncim_query_content_pane_g

0xdc76,	// (0x00024a21) sc_clock_pane_t4_ParamLimits

0xdc76,	// (0x00024a21) sc_clock_pane_t4

0x029e,	// (0x00017049) main_radioblah_pane

0x3d2a,	// (0x0001aad5) cell_call4_button_pane_t1_copy1_ParamLimits

0x3d2a,	// (0x0001aad5) cell_call4_button_pane_t1_copy1

0xd906,	// (0x000246b1) main_ncimui_pane_t1_ParamLimits

0xd906,	// (0x000246b1) main_ncimui_pane_t1

0xd920,	// (0x000246cb) main_ncimui_pane_t2_ParamLimits

0xd920,	// (0x000246cb) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x000269ad) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x000269ad) main_ncimui_pane_t

0x502f,	// (0x0001bdda) main_radioblah_anim_pane_ParamLimits

0x502f,	// (0x0001bdda) main_radioblah_anim_pane

0x5040,	// (0x0001bdeb) main_radioblah_info_pane_ParamLimits

0x5040,	// (0x0001bdeb) main_radioblah_info_pane

0x5054,	// (0x0001bdff) main_radioblah_pane_t1_ParamLimits

0x5054,	// (0x0001bdff) main_radioblah_pane_t1

0x5070,	// (0x0001be1b) main_radioblah_pane_t2_ParamLimits

0x5070,	// (0x0001be1b) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x00026a48) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x00026a48) main_radioblah_pane_t

0xdd3f,	// (0x00024aea) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdd3f,	// (0x00024aea) main_radioblah_rocker_ctrl_pane

0x50b8,	// (0x0001be63) main_radioblah_info_pane_t1_ParamLimits

0x50b8,	// (0x0001be63) main_radioblah_info_pane_t1

0xdd88,	// (0x00024b33) main_radioblah_info_pane_t2_ParamLimits

0xdd88,	// (0x00024b33) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x00026a51) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x00026a51) main_radioblah_info_pane_t

0x30e5,	// (0x00019e90) main_radioblah_rocker_ctrl_pane_g1

0xde38,	// (0x00024be3) main_radioblah_rocker_ctrl_pane_g2

0xde40,	// (0x00024beb) main_radioblah_rocker_ctrl_pane_g3

0xde48,	// (0x00024bf3) main_radioblah_rocker_ctrl_pane_g4

0xde50,	// (0x00024bfb) main_radioblah_rocker_ctrl_pane_g5

0xde58,	// (0x00024c03) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x00026a5a) main_radioblah_rocker_ctrl_pane_g

0xd8ca,	// (0x00024675) main_cset_text2_pane_t1_copy1_ParamLimits

0x7b3a,	// (0x0001e8e5) cam4_image_uncrop_qvga_pane

0x7c6b,	// (0x0001ea16) vid4_image_uncrop_qcif_pane

0x828e,	// (0x0001f039) cam6_image_uncrop_qvga_pane_ParamLimits

0x828e,	// (0x0001f039) cam6_image_uncrop_qvga_pane

0x47eb,	// (0x0001b596) vid6_image_uncrop_qcif_pane_ParamLimits

0x47eb,	// (0x0001b596) vid6_image_uncrop_qcif_pane

0x022d,	// (0x00016fd8) bg_popup_preview_window_pane_cp03

0x4b6b,	// (0x0001b916) list_cset_text2_pane

0x4b73,	// (0x0001b91e) main_cset6_text2_pane_g1

0x4b7b,	// (0x0001b926) main_cset6_text2_pane_t1

0xde60,	// (0x00024c0b) list_cset_text2_pane_t1_ParamLimits

0xde60,	// (0x00024c0b) list_cset_text2_pane_t1

0x029e,	// (0x00017049) main_radioblah_pane_ParamLimits

0xdbd7,	// (0x00024982) main_mobtv_info_pane_t3_ParamLimits

0xdbd7,	// (0x00024982) main_mobtv_info_pane_t3

0xdd2d,	// (0x00024ad8) main_radioblah_pane_g1

0xdd58,	// (0x00024b03) main_radioblah_info_pane_g1

0xdddd,	// (0x00024b88) main_radioblah_info_pane_t3_ParamLimits

0xdddd,	// (0x00024b88) main_radioblah_info_pane_t3

0x9d0d,	// (0x00020ab8) highlight_cell_cale_month_pane_ParamLimits

0x9d0d,	// (0x00020ab8) highlight_cell_cale_month_pane

0x022d,	// (0x00016fd8) main_phob_fisheye_pane

0x346b,	// (0x0001a216) scroll_pane_cp0031_ParamLimits

0x346b,	// (0x0001a216) scroll_pane_cp0031

0x48fd,	// (0x0001b6a8) wait_bar_pane_cp08_ParamLimits

0xd672,	// (0x0002441d) cset_list_set_pane_copy1_ParamLimits

0x50f2,	// (0x0001be9d) highlight_cell_cale_month_pane_g1

0xde79,	// (0x00024c24) highlight_cell_cale_month_pane_t1

0x448d,	// (0x0001b238) list_gen_pane_cp01

0x3fb3,	// (0x0001ad5e) scroll_pane_01

0xde87,	// (0x00024c32) list_single_double_fisheye_pane

0x50fa,	// (0x0001bea5) list_double_fisheye_pane_g1_ParamLimits

0x50fa,	// (0x0001bea5) list_double_fisheye_pane_g1

0x5106,	// (0x0001beb1) list_double_fisheye_pane_g2_ParamLimits

0x5106,	// (0x0001beb1) list_double_fisheye_pane_g2

0xde90,	// (0x00024c3b) list_double_fisheye_pane_g3_ParamLimits

0xde90,	// (0x00024c3b) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x00026a67) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x00026a67) list_double_fisheye_pane_g

0xde9c,	// (0x00024c47) list_double_fisheye_pane_t1_ParamLimits

0xde9c,	// (0x00024c47) list_double_fisheye_pane_t1

0xdeb7,	// (0x00024c62) list_double_fisheye_pane_t2_ParamLimits

0xdeb7,	// (0x00024c62) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x00026a72) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x00026a72) list_double_fisheye_pane_t

0x022d,	// (0x00016fd8) main_call5_pane

0xdc9c,	// (0x00024a47) sc_swipe_pane_ParamLimits

0xdc9c,	// (0x00024a47) sc_swipe_pane

0xdee5,	// (0x00024c90) call5_image_pane_ParamLimits

0xdee5,	// (0x00024c90) call5_image_pane

0xdef7,	// (0x00024ca2) call5_swipe_1_pane_ParamLimits

0xdef7,	// (0x00024ca2) call5_swipe_1_pane

0xdf03,	// (0x00024cae) call5_swipe_2_pane_ParamLimits

0xdf03,	// (0x00024cae) call5_swipe_2_pane

0xdf1f,	// (0x00024cca) popup_call5_audio_first_window_ParamLimits

0xdf1f,	// (0x00024cca) popup_call5_audio_first_window

0x3315,	// (0x0001a0c0) call5_swipe_1_pane_g1_ParamLimits

0x3315,	// (0x0001a0c0) call5_swipe_1_pane_g1

0x5137,	// (0x0001bee2) call5_swipe_1_pane_g2_ParamLimits

0x5137,	// (0x0001bee2) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x00026a77) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x00026a77) call5_swipe_1_pane_g

0x5143,	// (0x0001beee) call5_swipe_1_pane_t1_ParamLimits

0x5143,	// (0x0001beee) call5_swipe_1_pane_t1

0x3315,	// (0x0001a0c0) call5_swipe_2_pane_g1_ParamLimits

0x3315,	// (0x0001a0c0) call5_swipe_2_pane_g1

0x5158,	// (0x0001bf03) call5_swipe_2_pane_g2_ParamLimits

0x5158,	// (0x0001bf03) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x00026a7c) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x00026a7c) call5_swipe_2_pane_g

0x5164,	// (0x0001bf0f) call5_swipe_2_pane_t1_ParamLimits

0x5164,	// (0x0001bf0f) call5_swipe_2_pane_t1

0x5179,	// (0x0001bf24) sc_swipe_pane_g1_ParamLimits

0x5179,	// (0x0001bf24) sc_swipe_pane_g1

0x5186,	// (0x0001bf31) sc_swipe_pane_g2_ParamLimits

0x5186,	// (0x0001bf31) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x00026a81) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x00026a81) sc_swipe_pane_g

0x5192,	// (0x0001bf3d) sc_swipe_pane_t1_ParamLimits

0x5192,	// (0x0001bf3d) sc_swipe_pane_t1

0x022d,	// (0x00016fd8) main_cmail_launcher_pane

0xdf2f,	// (0x00024cda) aid_size_cell_cmail_l_ParamLimits

0xdf2f,	// (0x00024cda) aid_size_cell_cmail_l

0xdf3f,	// (0x00024cea) grid_cmail_l_pane_ParamLimits

0xdf3f,	// (0x00024cea) grid_cmail_l_pane

0xdf4f,	// (0x00024cfa) cell_cmail_l_pane_ParamLimits

0xdf4f,	// (0x00024cfa) cell_cmail_l_pane

0xdf65,	// (0x00024d10) cell_cmail_l_pane_g1_ParamLimits

0xdf65,	// (0x00024d10) cell_cmail_l_pane_g1

0xdf71,	// (0x00024d1c) cell_cmail_l_pane_t1_ParamLimits

0xdf71,	// (0x00024d1c) cell_cmail_l_pane_t1

0x51a7,	// (0x0001bf52) cell_cmail_l_pane_t2_ParamLimits

0x51a7,	// (0x0001bf52) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x00026a86) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x00026a86) cell_cmail_l_pane_t

0x029e,	// (0x00017049) grid_highlight_pane_cp018_ParamLimits

0x029e,	// (0x00017049) grid_highlight_pane_cp018

0x83d9,	// (0x0001f184) main2_pane_ParamLimits

0x83d9,	// (0x0001f184) main2_pane

0x0ae0,	// (0x0001788b) popup_sp_fs_action_menu_bg_pane_g1

0x0ae8,	// (0x00017893) popup_sp_fs_action_menu_bg_pane_g2

0x0af0,	// (0x0001789b) popup_sp_fs_action_menu_bg_pane_g3

0x0af8,	// (0x000178a3) popup_sp_fs_action_menu_bg_pane_g4

0x0b00,	// (0x000178ab) popup_sp_fs_action_menu_bg_pane_g5

0x0b08,	// (0x000178b3) popup_sp_fs_action_menu_bg_pane_g6

0x0b10,	// (0x000178bb) popup_sp_fs_action_menu_bg_pane_g7

0x0b18,	// (0x000178c3) popup_sp_fs_action_menu_bg_pane_g8

0x0b20,	// (0x000178cb) popup_sp_fs_action_menu_bg_pane_g9

0x0b28,	// (0x000178d3) popup_sp_fs_action_menu_bg_pane_g10

0x0b28,	// (0x000178d3) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00025f57) popup_sp_fs_action_menu_bg_pane_g

0x0d06,	// (0x00017ab1) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0d06,	// (0x00017ab1) list_medium_line_x2_t3_g3_g1

0x0d12,	// (0x00017abd) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0d12,	// (0x00017abd) list_medium_line_x2_t3_g3_g2

0x0d1e,	// (0x00017ac9) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0d1e,	// (0x00017ac9) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00026007) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00026007) list_medium_line_x2_t3_g3_g

0x0d2a,	// (0x00017ad5) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0d2a,	// (0x00017ad5) list_medium_line_x2_t3_g3_t1

0x8f1a,	// (0x0001fcc5) list_medium_line_x2_t3_g3_t2_ParamLimits

0x8f1a,	// (0x0001fcc5) list_medium_line_x2_t3_g3_t2

0x0d3f,	// (0x00017aea) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0d3f,	// (0x00017aea) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0002600e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0002600e) list_medium_line_x2_t3_g3_t

0x0d06,	// (0x00017ab1) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0d06,	// (0x00017ab1) list_medium_line_x2_t3_g2_g1

0x0d1e,	// (0x00017ac9) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0d1e,	// (0x00017ac9) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00026015) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00026015) list_medium_line_x2_t3_g2_g

0x0d54,	// (0x00017aff) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0d54,	// (0x00017aff) list_medium_line_x2_t3_g2_t1

0x0d6a,	// (0x00017b15) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0d6a,	// (0x00017b15) list_medium_line_x2_t3_g2_t2

0x0d7c,	// (0x00017b27) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0d7c,	// (0x00017b27) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0002601a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0002601a) list_medium_line_x2_t3_g2_t

0x0d06,	// (0x00017ab1) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0d06,	// (0x00017ab1) list_medium_line_x2_t4_g4_g1

0x0d9a,	// (0x00017b45) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0d9a,	// (0x00017b45) list_medium_line_x2_t4_g4_g2

0x0d12,	// (0x00017abd) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0d12,	// (0x00017abd) list_medium_line_x2_t4_g4_g3

0x0da6,	// (0x00017b51) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0da6,	// (0x00017b51) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00026021) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00026021) list_medium_line_x2_t4_g4_g

0x8f2e,	// (0x0001fcd9) list_medium_line_x2_t4_g4_t1_ParamLimits

0x8f2e,	// (0x0001fcd9) list_medium_line_x2_t4_g4_t1

0x8f48,	// (0x0001fcf3) list_medium_line_x2_t4_g4_t2_ParamLimits

0x8f48,	// (0x0001fcf3) list_medium_line_x2_t4_g4_t2

0x8f5e,	// (0x0001fd09) list_medium_line_x2_t4_g4_t3_ParamLimits

0x8f5e,	// (0x0001fd09) list_medium_line_x2_t4_g4_t3

0x0db2,	// (0x00017b5d) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0db2,	// (0x00017b5d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0002602a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0002602a) list_medium_line_x2_t4_g4_t

0x0d06,	// (0x00017ab1) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0d06,	// (0x00017ab1) list_medium_line_x2_t2_g4_g1

0x0d9a,	// (0x00017b45) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0d9a,	// (0x00017b45) list_medium_line_x2_t2_g4_g2

0x0d12,	// (0x00017abd) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0d12,	// (0x00017abd) list_medium_line_x2_t2_g4_g3

0x0d1e,	// (0x00017ac9) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0d1e,	// (0x00017ac9) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00026091) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00026091) list_medium_line_x2_t2_g4_g

0x109e,	// (0x00017e49) list_medium_line_x2_t2_g4_t1_ParamLimits

0x109e,	// (0x00017e49) list_medium_line_x2_t2_g4_t1

0x0d3f,	// (0x00017aea) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0d3f,	// (0x00017aea) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0002609a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0002609a) list_medium_line_x2_t2_g4_t

0x0d06,	// (0x00017ab1) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0d06,	// (0x00017ab1) list_medium_line_x2_t2_g3_g1

0x0d12,	// (0x00017abd) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0d12,	// (0x00017abd) list_medium_line_x2_t2_g3_g2

0x0d1e,	// (0x00017ac9) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0d1e,	// (0x00017ac9) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00026007) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00026007) list_medium_line_x2_t2_g3_g

0x10b3,	// (0x00017e5e) list_medium_line_x2_t2_g3_t1_ParamLimits

0x10b3,	// (0x00017e5e) list_medium_line_x2_t2_g3_t1

0x0d3f,	// (0x00017aea) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0d3f,	// (0x00017aea) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0002609f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0002609f) list_medium_line_x2_t2_g3_t

0x9ee1,	// (0x00020c8c) main_sp_fs_list_pane_ParamLimits

0x9ee1,	// (0x00020c8c) main_sp_fs_list_pane

0x9eed,	// (0x00020c98) sp_fs_scroll_pane_ParamLimits

0x9eed,	// (0x00020c98) sp_fs_scroll_pane

0x9ef9,	// (0x00020ca4) list_medium_line_x2_t3_t1

0x9f09,	// (0x00020cb4) list_medium_line_x2_t3_t2

0x1298,	// (0x00018043) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x000260ea) list_medium_line_x2_t3_t

0x9f17,	// (0x00020cc2) list_medium_line_x3_t4_t1

0x9f27,	// (0x00020cd2) list_medium_line_x3_t4_t2

0x12a6,	// (0x00018051) list_medium_line_x3_t4_t3

0x1298,	// (0x00018043) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x000260f1) list_medium_line_x3_t4_t

0x9f35,	// (0x00020ce0) list_medium_line_x4_t5_t1

0x9f45,	// (0x00020cf0) list_medium_line_x4_t5_t2

0x12a6,	// (0x00018051) list_medium_line_x4_t5_t3

0x12b4,	// (0x0001805f) list_medium_line_x4_t5_t4

0x1298,	// (0x00018043) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x000260fa) list_medium_line_x4_t5_t

0x0d06,	// (0x00017ab1) list_medium_line_t4_g4_g1_ParamLimits

0x0d06,	// (0x00017ab1) list_medium_line_t4_g4_g1

0x0da6,	// (0x00017b51) list_medium_line_t4_g4_g2_ParamLimits

0x0da6,	// (0x00017b51) list_medium_line_t4_g4_g2

0x12c2,	// (0x0001806d) list_medium_line_t4_g4_g3_ParamLimits

0x12c2,	// (0x0001806d) list_medium_line_t4_g4_g3

0x0d1e,	// (0x00017ac9) list_medium_line_t4_g4_g4_ParamLimits

0x0d1e,	// (0x00017ac9) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00026105) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00026105) list_medium_line_t4_g4_g

0x12ce,	// (0x00018079) list_medium_line_t4_g4_t1_ParamLimits

0x12ce,	// (0x00018079) list_medium_line_t4_g4_t1

0x12e3,	// (0x0001808e) list_medium_line_t4_g4_t2_ParamLimits

0x12e3,	// (0x0001808e) list_medium_line_t4_g4_t2

0x12f9,	// (0x000180a4) list_medium_line_t4_g4_t3_ParamLimits

0x12f9,	// (0x000180a4) list_medium_line_t4_g4_t3

0x0d3f,	// (0x00017aea) list_medium_line_t4_g4_t4_ParamLimits

0x0d3f,	// (0x00017aea) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0002610e) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0002610e) list_medium_line_t4_g4_t

0x9ff7,	// (0x00020da2) chi_dic_find_pane_g1

0xafe0,	// (0x00021d8b) main_tport_pane

0x4106,	// (0x0001aeb1) list_medium_line_plain_t1

0x4158,	// (0x0001af03) list_medium_line_t2_g2_g1_ParamLimits

0x4158,	// (0x0001af03) list_medium_line_t2_g2_g1

0x4164,	// (0x0001af0f) list_medium_line_t2_g2_g2_ParamLimits

0x4164,	// (0x0001af0f) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x000267ca) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x000267ca) list_medium_line_t2_g2_g

0xcca0,	// (0x00023a4b) list_medium_line_t2_g2_t1_ParamLimits

0xcca0,	// (0x00023a4b) list_medium_line_t2_g2_t1

0xccb7,	// (0x00023a62) list_medium_line_t2_g2_t2_ParamLimits

0xccb7,	// (0x00023a62) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x000267cf) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x000267cf) list_medium_line_t2_g2_t

0x4536,	// (0x0001b2e1) aid_sp_fs_list_icon_a_sm

0x453e,	// (0x0001b2e9) aid_sp_fs_list_icon_d

0x4546,	// (0x0001b2f1) aid_sp_fs_text_primary

0x454f,	// (0x0001b2fa) aid_sp_fs_text_secondary

0x4558,	// (0x0001b303) list_medium_line

0x4558,	// (0x0001b303) list_medium_line_g2

0x4558,	// (0x0001b303) list_medium_line_g3

0x4558,	// (0x0001b303) list_medium_line_plain

0x4558,	// (0x0001b303) list_medium_line_plain_t2

0x4558,	// (0x0001b303) list_medium_line_plain_t3

0x4558,	// (0x0001b303) list_medium_line_right_icon

0x4558,	// (0x0001b303) list_medium_line_right_iconx2

0x4558,	// (0x0001b303) list_medium_line_t2

0x4558,	// (0x0001b303) list_medium_line_t2_g2

0x4558,	// (0x0001b303) list_medium_line_t2_g3

0x4558,	// (0x0001b303) list_medium_line_t2_right_icon

0x4558,	// (0x0001b303) list_medium_line_t2_right_iconx2

0x4558,	// (0x0001b303) list_medium_line_t3

0x4558,	// (0x0001b303) list_medium_line_t3_g2

0x4558,	// (0x0001b303) list_medium_line_t3_g3

0x4558,	// (0x0001b303) list_medium_line_t3_right_iconx2

0x4561,	// (0x0001b30c) list_medium_line_t4_g4

0x456a,	// (0x0001b315) list_medium_line_x2

0x456a,	// (0x0001b315) list_medium_line_x2_t2_g2

0x456a,	// (0x0001b315) list_medium_line_x2_t2_g3

0x456a,	// (0x0001b315) list_medium_line_x2_t2_g4

0x456a,	// (0x0001b315) list_medium_line_x2_t3

0x456a,	// (0x0001b315) list_medium_line_x2_t3_g2

0x456a,	// (0x0001b315) list_medium_line_x2_t3_g3

0x456a,	// (0x0001b315) list_medium_line_x2_t3_g4

0x456a,	// (0x0001b315) list_medium_line_x2_t4_g2

0x456a,	// (0x0001b315) list_medium_line_x2_t4_g4

0x4573,	// (0x0001b31e) list_medium_line_x3

0x4573,	// (0x0001b31e) list_medium_line_x3_t4

0x4573,	// (0x0001b31e) list_medium_line_x3_t4_g4

0x4561,	// (0x0001b30c) list_medium_line_x4_t4

0x4561,	// (0x0001b30c) list_medium_line_x4_t4_g7

0x4561,	// (0x0001b30c) list_medium_line_x4_t5

0x457c,	// (0x0001b327) list_single_fs_dyc_pane_ParamLimits

0x457c,	// (0x0001b327) list_single_fs_dyc_pane

0x0d06,	// (0x00017ab1) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0d06,	// (0x00017ab1) list_medium_line_x4_t4_g7_g1

0x4a9a,	// (0x0001b845) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4a9a,	// (0x0001b845) list_medium_line_x4_t4_g7_g2

0x4aa6,	// (0x0001b851) list_medium_line_x4_t4_g7_g3_ParamLimits

0x4aa6,	// (0x0001b851) list_medium_line_x4_t4_g7_g3

0x4ab5,	// (0x0001b860) list_medium_line_x4_t4_g7_g4_ParamLimits

0x4ab5,	// (0x0001b860) list_medium_line_x4_t4_g7_g4

0x4ac1,	// (0x0001b86c) list_medium_line_x4_t4_g7_g5_ParamLimits

0x4ac1,	// (0x0001b86c) list_medium_line_x4_t4_g7_g5

0x4ad0,	// (0x0001b87b) list_medium_line_x4_t4_g7_g6_ParamLimits

0x4ad0,	// (0x0001b87b) list_medium_line_x4_t4_g7_g6

0x4adf,	// (0x0001b88a) list_medium_line_x4_t4_g7_g7_ParamLimits

0x4adf,	// (0x0001b88a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe8,	// (0x00026993) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe8,	// (0x00026993) list_medium_line_x4_t4_g7_g

0x4aeb,	// (0x0001b896) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4aeb,	// (0x0001b896) list_medium_line_x4_t4_g7_t1

0x4b00,	// (0x0001b8ab) list_medium_line_x4_t4_g7_t2_ParamLimits

0x4b00,	// (0x0001b8ab) list_medium_line_x4_t4_g7_t2

0x4b15,	// (0x0001b8c0) list_medium_line_x4_t4_g7_t3_ParamLimits

0x4b15,	// (0x0001b8c0) list_medium_line_x4_t4_g7_t3

0x4b2a,	// (0x0001b8d5) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4b2a,	// (0x0001b8d5) list_medium_line_x4_t4_g7_t4

0x4b3c,	// (0x0001b8e7) list_medium_line_x4_t4_g7_t5_ParamLimits

0x4b3c,	// (0x0001b8e7) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf7,	// (0x000269a2) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf7,	// (0x000269a2) list_medium_line_x4_t4_g7_t

0x4b4e,	// (0x0001b8f9) list_single_dyc_row_pane_ParamLimits

0x4b4e,	// (0x0001b8f9) list_single_dyc_row_pane

0xded9,	// (0x00024c84) call5_gesture_pane_ParamLimits

0xded9,	// (0x00024c84) call5_gesture_pane

0xdf0f,	// (0x00024cba) call5_windows_pane_ParamLimits

0xdf0f,	// (0x00024cba) call5_windows_pane

0xdf87,	// (0x00024d32) call5_swipe_1_pane_cp_ParamLimits

0xdf87,	// (0x00024d32) call5_swipe_1_pane_cp

0xdf93,	// (0x00024d3e) call5_swipe_2_pane_cp_ParamLimits

0xdf93,	// (0x00024d3e) call5_swipe_2_pane_cp

0x1743,	// (0x000184ee) call5_image_pane_cp

0xdf9f,	// (0x00024d4a) popup_call5_audio_first_window_cp_ParamLimits

0xdf9f,	// (0x00024d4a) popup_call5_audio_first_window_cp

0x5179,	// (0x0001bf24) call5_swipe_1_pane_g1_cp_ParamLimits

0x5179,	// (0x0001bf24) call5_swipe_1_pane_g1_cp

0x51b9,	// (0x0001bf64) call5_swipe_1_pane_g2_cp

0x5192,	// (0x0001bf3d) call5_swipe_1_pane_t1_cp_ParamLimits

0x5192,	// (0x0001bf3d) call5_swipe_1_pane_t1_cp

0x5179,	// (0x0001bf24) call5_swipe_2_pane_g1_cp_ParamLimits

0x5179,	// (0x0001bf24) call5_swipe_2_pane_g1_cp

0x51c1,	// (0x0001bf6c) call5_swipe_2_pane_g2_cp

0x51c9,	// (0x0001bf74) call5_swipe_2_pane_t1_cp_ParamLimits

0x51c9,	// (0x0001bf74) call5_swipe_2_pane_t1_cp

0x029e,	// (0x00017049) main_sp_fs_email_pane

0x51de,	// (0x0001bf89) main_sp_fs_listscroll_pane_te

0x51e7,	// (0x0001bf92) popup_sp_fs_action_menu_pane_ParamLimits

0x51e7,	// (0x0001bf92) popup_sp_fs_action_menu_pane

0x30e5,	// (0x00019e90) bg_sp_fs_ctrlbar_pane_g1

0x522d,	// (0x0001bfd8) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x5236,	// (0x0001bfe1) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x523f,	// (0x0001bfea) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x30e5,	// (0x00019e90) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x00026a8b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2ec4,	// (0x00019c6f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2ec4,	// (0x00019c6f) bg_sp_fs_ctrlbar_ddmenu_pane

0x5248,	// (0x0001bff3) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x5248,	// (0x0001bff3) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x5254,	// (0x0001bfff) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x5254,	// (0x0001bfff) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x00026a94) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x00026a94) main_sp_fs_ctrlbar_ddmenu_pane_g

0x5260,	// (0x0001c00b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x5260,	// (0x0001c00b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x527a,	// (0x0001c025) list_medium_line_t2_right_icon_g1

0xdfad,	// (0x00024d58) list_medium_line_t2_right_icon_t1

0xdfbd,	// (0x00024d68) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x00026a99) list_medium_line_t2_right_icon_t

0x2bb0,	// (0x0001995b) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2bb0,	// (0x0001995b) bg_sp_fs_ctrlbar_pane

0xe022,	// (0x00024dcd) main_sp_fs_ctrlbar_button_pane_cp01

0xe02a,	// (0x00024dd5) main_sp_fs_ctrlbar_ddmenu_pane

0x52bc,	// (0x0001c067) main_sp_fs_ctrlbar_pane_g1

0x52c8,	// (0x0001c073) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x00026a9e) main_sp_fs_ctrlbar_pane_g

0x52d4,	// (0x0001c07f) main_sp_fs_ctrlbar_pane_t1

0xe034,	// (0x00024ddf) main_sp_fs_ctrlbar_pane

0xe050,	// (0x00024dfb) main_sp_fs_listscroll_pane_te_cp01

0xe061,	// (0x00024e0c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xe061,	// (0x00024e0c) popup_sp_fs_action_menu_pane_cp01

0x029e,	// (0x00017049) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x029e,	// (0x00017049) bg_sp_fs_highlight_list_pane_cp01

0x52e9,	// (0x0001c094) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x52e9,	// (0x0001c094) sp_fs_action_menu_list_gene_pane_g1

0x52f8,	// (0x0001c0a3) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x52f8,	// (0x0001c0a3) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf8,	// (0x00026aa3) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf8,	// (0x00026aa3) sp_fs_action_menu_list_gene_pane_g

0x5305,	// (0x0001c0b0) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5305,	// (0x0001c0b0) sp_fs_action_menu_list_gene_pane_t1

0x531d,	// (0x0001c0c8) sp_fs_action_menu_list_gene_pane_ParamLimits

0x531d,	// (0x0001c0c8) sp_fs_action_menu_list_gene_pane

0x5340,	// (0x0001c0eb) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x5340,	// (0x0001c0eb) popup_sp_fs_action_menu_bg_pane

0x534e,	// (0x0001c0f9) sp_fs_action_menu_list_pane_ParamLimits

0x534e,	// (0x0001c0f9) sp_fs_action_menu_list_pane

0x5372,	// (0x0001c11d) sp_fs_scroll_pane_cp01_ParamLimits

0x5372,	// (0x0001c11d) sp_fs_scroll_pane_cp01

0xe07b,	// (0x00024e26) list_medium_line_plain_t2_t1

0xe08b,	// (0x00024e36) list_medium_line_plain_t2_t2

0x0001,

0xfcfd,	// (0x00026aa8) list_medium_line_plain_t2_t

0xe099,	// (0x00024e44) list_medium_line_plain_t3_t1

0xe0a9,	// (0x00024e54) list_medium_line_plain_t3_t2

0xe0b7,	// (0x00024e62) list_medium_line_plain_t3_t3

0x0002,

0xfd02,	// (0x00026aad) list_medium_line_plain_t3_t

0x0d06,	// (0x00017ab1) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0d06,	// (0x00017ab1) list_medium_line_x2_t2_g2_g1

0x0d1e,	// (0x00017ac9) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0d1e,	// (0x00017ac9) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00026015) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00026015) list_medium_line_x2_t2_g2_g

0x12ce,	// (0x00018079) list_medium_line_x2_t2_g2_t1_ParamLimits

0x12ce,	// (0x00018079) list_medium_line_x2_t2_g2_t1

0x0d3f,	// (0x00017aea) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0d3f,	// (0x00017aea) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd09,	// (0x00026ab4) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd09,	// (0x00026ab4) list_medium_line_x2_t2_g2_t

0x0d06,	// (0x00017ab1) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0d06,	// (0x00017ab1) list_medium_line_x2_t4_g2_g1

0x0d1e,	// (0x00017ac9) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0d1e,	// (0x00017ac9) list_medium_line_x2_t4_g2_g2

0x0001,

0xf26a,	// (0x00026015) list_medium_line_x2_t4_g2_g_ParamLimits

0xf26a,	// (0x00026015) list_medium_line_x2_t4_g2_g

0xe0c5,	// (0x00024e70) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe0c5,	// (0x00024e70) list_medium_line_x2_t4_g2_t1

0xe0df,	// (0x00024e8a) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe0df,	// (0x00024e8a) list_medium_line_x2_t4_g2_t2

0xe0f5,	// (0x00024ea0) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe0f5,	// (0x00024ea0) list_medium_line_x2_t4_g2_t3

0x0d3f,	// (0x00017aea) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0d3f,	// (0x00017aea) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0e,	// (0x00026ab9) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0e,	// (0x00026ab9) list_medium_line_x2_t4_g2_t

0x5398,	// (0x0001c143) list_medium_line_t3_right_iconx2_g1

0x527a,	// (0x0001c025) list_medium_line_t3_right_iconx2_g2

0xe10a,	// (0x00024eb5) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd17,	// (0x00026ac2) list_medium_line_t3_right_iconx2_g

0xe112,	// (0x00024ebd) list_medium_line_t3_right_iconx2_t1

0xe122,	// (0x00024ecd) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1e,	// (0x00026ac9) list_medium_line_t3_right_iconx2_t

0x0d06,	// (0x00017ab1) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0d06,	// (0x00017ab1) list_medium_line_x3_t4_g4_g1

0x0d12,	// (0x00017abd) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0d12,	// (0x00017abd) list_medium_line_x3_t4_g4_g2

0x0da6,	// (0x00017b51) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0da6,	// (0x00017b51) list_medium_line_x3_t4_g4_g3

0x53a0,	// (0x0001c14b) list_medium_line_x3_t4_g4_g4_ParamLimits

0x53a0,	// (0x0001c14b) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd23,	// (0x00026ace) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd23,	// (0x00026ace) list_medium_line_x3_t4_g4_g

0xe130,	// (0x00024edb) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe130,	// (0x00024edb) list_medium_line_x3_t4_g4_t1

0xe147,	// (0x00024ef2) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe147,	// (0x00024ef2) list_medium_line_x3_t4_g4_t2

0x53ac,	// (0x0001c157) list_medium_line_x3_t4_g4_t3_ParamLimits

0x53ac,	// (0x0001c157) list_medium_line_x3_t4_g4_t3

0x53c1,	// (0x0001c16c) list_medium_line_x3_t4_g4_t4_ParamLimits

0x53c1,	// (0x0001c16c) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2c,	// (0x00026ad7) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2c,	// (0x00026ad7) list_medium_line_x3_t4_g4_t

0xe15c,	// (0x00024f07) list_single_dyc_row_text_pane_t1_ParamLimits

0xe15c,	// (0x00024f07) list_single_dyc_row_text_pane_t1

0xe19b,	// (0x00024f46) list_single_dyc_row_text_pane_t2_ParamLimits

0xe19b,	// (0x00024f46) list_single_dyc_row_text_pane_t2

0x53de,	// (0x0001c189) list_single_dyc_row_text_pane_t3_ParamLimits

0x53de,	// (0x0001c189) list_single_dyc_row_text_pane_t3

0x0002,

0xfd35,	// (0x00026ae0) list_single_dyc_row_text_pane_t_ParamLimits

0xfd35,	// (0x00026ae0) list_single_dyc_row_text_pane_t

0x53f0,	// (0x0001c19b) list_single_dyc_row_pane_g1_ParamLimits

0x53f0,	// (0x0001c19b) list_single_dyc_row_pane_g1

0x53fc,	// (0x0001c1a7) list_single_dyc_row_pane_g2_ParamLimits

0x53fc,	// (0x0001c1a7) list_single_dyc_row_pane_g2

0x5408,	// (0x0001c1b3) list_single_dyc_row_pane_g3_ParamLimits

0x5408,	// (0x0001c1b3) list_single_dyc_row_pane_g3

0x5414,	// (0x0001c1bf) list_single_dyc_row_pane_g4_ParamLimits

0x5414,	// (0x0001c1bf) list_single_dyc_row_pane_g4

0x0003,

0xfd3c,	// (0x00026ae7) list_single_dyc_row_pane_g_ParamLimits

0xfd3c,	// (0x00026ae7) list_single_dyc_row_pane_g

0x5420,	// (0x0001c1cb) list_single_dyc_row_text_pane_ParamLimits

0x5420,	// (0x0001c1cb) list_single_dyc_row_text_pane

0x022d,	// (0x00016fd8) bg_sp_fs_scroll_pane

0x543f,	// (0x0001c1ea) thumb_sp_fs_scroll_pane

0x4158,	// (0x0001af03) list_medium_line_g1_ParamLimits

0x4158,	// (0x0001af03) list_medium_line_g1

0x5448,	// (0x0001c1f3) list_medium_line_t1_ParamLimits

0x5448,	// (0x0001c1f3) list_medium_line_t1

0x0d06,	// (0x00017ab1) list_medium_line_x2_g1_ParamLimits

0x0d06,	// (0x00017ab1) list_medium_line_x2_g1

0x0d12,	// (0x00017abd) list_medium_line_x2_g2_ParamLimits

0x0d12,	// (0x00017abd) list_medium_line_x2_g2

0x0001,

0xfd45,	// (0x00026af0) list_medium_line_x2_g_ParamLimits

0xfd45,	// (0x00026af0) list_medium_line_x2_g

0x545d,	// (0x0001c208) list_medium_line_x2_t1_ParamLimits

0x545d,	// (0x0001c208) list_medium_line_x2_t1

0x0d06,	// (0x00017ab1) list_medium_line_x3_g1_ParamLimits

0x0d06,	// (0x00017ab1) list_medium_line_x3_g1

0x0d12,	// (0x00017abd) list_medium_line_x3_g2_ParamLimits

0x0d12,	// (0x00017abd) list_medium_line_x3_g2

0x0001,

0xfd45,	// (0x00026af0) list_medium_line_x3_g_ParamLimits

0xfd45,	// (0x00026af0) list_medium_line_x3_g

0x545d,	// (0x0001c208) list_medium_line_x3_t1_ParamLimits

0x545d,	// (0x0001c208) list_medium_line_x3_t1

0x5473,	// (0x0001c21e) thumb_sp_fs_scroll_pane_g1

0x547c,	// (0x0001c227) thumb_sp_fs_scroll_pane_g2

0x5485,	// (0x0001c230) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4a,	// (0x00026af5) thumb_sp_fs_scroll_pane_g

0x5473,	// (0x0001c21e) bg_sp_fs_scroll_pane_g1

0x547c,	// (0x0001c227) bg_sp_fs_scroll_pane_g2

0x5485,	// (0x0001c230) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4a,	// (0x00026af5) bg_sp_fs_scroll_pane_g

0x0d06,	// (0x00017ab1) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0d06,	// (0x00017ab1) list_medium_line_x2_t3_g4_g1

0x0d9a,	// (0x00017b45) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0d9a,	// (0x00017b45) list_medium_line_x2_t3_g4_g2

0x0d12,	// (0x00017abd) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0d12,	// (0x00017abd) list_medium_line_x2_t3_g4_g3

0x0d1e,	// (0x00017ac9) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0d1e,	// (0x00017ac9) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00026091) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00026091) list_medium_line_x2_t3_g4_g

0xe1f5,	// (0x00024fa0) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe1f5,	// (0x00024fa0) list_medium_line_x2_t3_g4_t1

0xe20b,	// (0x00024fb6) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe20b,	// (0x00024fb6) list_medium_line_x2_t3_g4_t2

0x0d3f,	// (0x00017aea) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0d3f,	// (0x00017aea) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd51,	// (0x00026afc) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd51,	// (0x00026afc) list_medium_line_x2_t3_g4_t

0x4158,	// (0x0001af03) list_medium_line_g2_g1_ParamLimits

0x4158,	// (0x0001af03) list_medium_line_g2_g1

0x4164,	// (0x0001af0f) list_medium_line_g2_g2_ParamLimits

0x4164,	// (0x0001af0f) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x000267ca) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x000267ca) list_medium_line_g2_g

0x548e,	// (0x0001c239) list_medium_line_g2_t1_ParamLimits

0x548e,	// (0x0001c239) list_medium_line_g2_t1

0x4158,	// (0x0001af03) list_medium_line_t3_g2_g1_ParamLimits

0x4158,	// (0x0001af03) list_medium_line_t3_g2_g1

0x4164,	// (0x0001af0f) list_medium_line_t3_g2_g2_ParamLimits

0x4164,	// (0x0001af0f) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x000267ca) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x000267ca) list_medium_line_t3_g2_g

0xe224,	// (0x00024fcf) list_medium_line_t3_g2_t1_ParamLimits

0xe224,	// (0x00024fcf) list_medium_line_t3_g2_t1

0xe23b,	// (0x00024fe6) list_medium_line_t3_g2_t2_ParamLimits

0xe23b,	// (0x00024fe6) list_medium_line_t3_g2_t2

0xe250,	// (0x00024ffb) list_medium_line_t3_g2_t3_ParamLimits

0xe250,	// (0x00024ffb) list_medium_line_t3_g2_t3

0x0002,

0xfd58,	// (0x00026b03) list_medium_line_t3_g2_t_ParamLimits

0xfd58,	// (0x00026b03) list_medium_line_t3_g2_t

0x527a,	// (0x0001c025) list_medium_line_right_icon_g1

0x54a3,	// (0x0001c24e) list_medium_line_right_icon_t1

0x4158,	// (0x0001af03) list_medium_line_t2_g1_ParamLimits

0x4158,	// (0x0001af03) list_medium_line_t2_g1

0xe269,	// (0x00025014) list_medium_line_t2_t1_ParamLimits

0xe269,	// (0x00025014) list_medium_line_t2_t1

0xe283,	// (0x0002502e) list_medium_line_t2_t2_ParamLimits

0xe283,	// (0x0002502e) list_medium_line_t2_t2

0x0001,

0xfd5f,	// (0x00026b0a) list_medium_line_t2_t_ParamLimits

0xfd5f,	// (0x00026b0a) list_medium_line_t2_t

0x4158,	// (0x0001af03) list_medium_line_t3_g1_ParamLimits

0x4158,	// (0x0001af03) list_medium_line_t3_g1

0xe298,	// (0x00025043) list_medium_line_t3_t1_ParamLimits

0xe298,	// (0x00025043) list_medium_line_t3_t1

0xe2af,	// (0x0002505a) list_medium_line_t3_t2_ParamLimits

0xe2af,	// (0x0002505a) list_medium_line_t3_t2

0xe2c4,	// (0x0002506f) list_medium_line_t3_t3_ParamLimits

0xe2c4,	// (0x0002506f) list_medium_line_t3_t3

0x0002,

0xfd64,	// (0x00026b0f) list_medium_line_t3_t_ParamLimits

0xfd64,	// (0x00026b0f) list_medium_line_t3_t

0x4158,	// (0x0001af03) list_medium_line_g3_g1_ParamLimits

0x4158,	// (0x0001af03) list_medium_line_g3_g1

0x54b1,	// (0x0001c25c) list_medium_line_g3_g2_ParamLimits

0x54b1,	// (0x0001c25c) list_medium_line_g3_g2

0x4164,	// (0x0001af0f) list_medium_line_g3_g3_ParamLimits

0x4164,	// (0x0001af0f) list_medium_line_g3_g3

0x0002,

0xfd6b,	// (0x00026b16) list_medium_line_g3_g_ParamLimits

0xfd6b,	// (0x00026b16) list_medium_line_g3_g

0x54bd,	// (0x0001c268) list_medium_line_g3_t1_ParamLimits

0x54bd,	// (0x0001c268) list_medium_line_g3_t1

0x4158,	// (0x0001af03) list_medium_line_t2_g3_g1_ParamLimits

0x4158,	// (0x0001af03) list_medium_line_t2_g3_g1

0x54b1,	// (0x0001c25c) list_medium_line_t2_g3_g2_ParamLimits

0x54b1,	// (0x0001c25c) list_medium_line_t2_g3_g2

0x4164,	// (0x0001af0f) list_medium_line_t2_g3_g3_ParamLimits

0x4164,	// (0x0001af0f) list_medium_line_t2_g3_g3

0x0002,

0xfd6b,	// (0x00026b16) list_medium_line_t2_g3_g_ParamLimits

0xfd6b,	// (0x00026b16) list_medium_line_t2_g3_g

0xe2d6,	// (0x00025081) list_medium_line_t2_g3_t1_ParamLimits

0xe2d6,	// (0x00025081) list_medium_line_t2_g3_t1

0xe2ed,	// (0x00025098) list_medium_line_t2_g3_t2_ParamLimits

0xe2ed,	// (0x00025098) list_medium_line_t2_g3_t2

0x0001,

0xfd72,	// (0x00026b1d) list_medium_line_t2_g3_t_ParamLimits

0xfd72,	// (0x00026b1d) list_medium_line_t2_g3_t

0x4158,	// (0x0001af03) list_medium_line_t3_g3_g1_ParamLimits

0x4158,	// (0x0001af03) list_medium_line_t3_g3_g1

0x54b1,	// (0x0001c25c) list_medium_line_t3_g3_g2_ParamLimits

0x54b1,	// (0x0001c25c) list_medium_line_t3_g3_g2

0x4164,	// (0x0001af0f) list_medium_line_t3_g3_g3_ParamLimits

0x4164,	// (0x0001af0f) list_medium_line_t3_g3_g3

0x0002,

0xfd6b,	// (0x00026b16) list_medium_line_t3_g3_g_ParamLimits

0xfd6b,	// (0x00026b16) list_medium_line_t3_g3_g

0xe302,	// (0x000250ad) list_medium_line_t3_g3_t1_ParamLimits

0xe302,	// (0x000250ad) list_medium_line_t3_g3_t1

0xe31b,	// (0x000250c6) list_medium_line_t3_g3_t2_ParamLimits

0xe31b,	// (0x000250c6) list_medium_line_t3_g3_t2

0xe331,	// (0x000250dc) list_medium_line_t3_g3_t3_ParamLimits

0xe331,	// (0x000250dc) list_medium_line_t3_g3_t3

0x0002,

0xfd77,	// (0x00026b22) list_medium_line_t3_g3_t_ParamLimits

0xfd77,	// (0x00026b22) list_medium_line_t3_g3_t

0x5398,	// (0x0001c143) list_medium_line_right_iconx2_g1

0x527a,	// (0x0001c025) list_medium_line_right_iconx2_g2

0x0001,

0xfd7e,	// (0x00026b29) list_medium_line_right_iconx2_g

0x54d2,	// (0x0001c27d) list_medium_line_right_iconx2_t1

0x5398,	// (0x0001c143) list_medium_line_t2_right_iconx2_g1

0x527a,	// (0x0001c025) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7e,	// (0x00026b29) list_medium_line_t2_right_iconx2_g

0xe34b,	// (0x000250f6) list_medium_line_t2_right_iconx2_t1

0xe35b,	// (0x00025106) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd83,	// (0x00026b2e) list_medium_line_t2_right_iconx2_t

0x54e0,	// (0x0001c28b) list_medium_line_x4_t4_t1

0xe369,	// (0x00025114) list_medium_line_x4_t4_t2

0xe379,	// (0x00025124) list_medium_line_x4_t4_t3

0xe389,	// (0x00025134) list_medium_line_x4_t4_t4

0x0003,

0xfd88,	// (0x00026b33) list_medium_line_x4_t4_t

0xe3c2,	// (0x0002516d) tport_appsw_pane_ParamLimits

0xe3c2,	// (0x0002516d) tport_appsw_pane

0xe3d0,	// (0x0002517b) tport_contact_pane_ParamLimits

0xe3d0,	// (0x0002517b) tport_contact_pane

0xe3de,	// (0x00025189) tport_listscroll_pane_ParamLimits

0xe3de,	// (0x00025189) tport_listscroll_pane

0xe3ec,	// (0x00025197) cell_tport_appsw_pane_ParamLimits

0xe3ec,	// (0x00025197) cell_tport_appsw_pane

0x33ee,	// (0x0001a199) tport_appsw_pane_g1_ParamLimits

0x33ee,	// (0x0001a199) tport_appsw_pane_g1

0x54ee,	// (0x0001c299) tport_contact_pane_g1

0x54f7,	// (0x0001c2a2) tport_contact_pane_t1

0x5505,	// (0x0001c2b0) tport_contact_pane_t2

0x0001,

0xfd91,	// (0x00026b3c) tport_contact_pane_t

0x5513,	// (0x0001c2be) list_tport_pane

0x551c,	// (0x0001c2c7) scroll_pane_cp_030

0xe417,	// (0x000251c2) cell_tport_appsw_pane_g1

0x5535,	// (0x0001c2e0) cell_tport_appsw_pane_t1

0x022d,	// (0x00016fd8) grid_highlight_pane_cp019

0xe427,	// (0x000251d2) list_tport_double_graphic_pane_ParamLimits

0xe427,	// (0x000251d2) list_tport_double_graphic_pane

0x029e,	// (0x00017049) list_highlight_pane_cp023_ParamLimits

0x029e,	// (0x00017049) list_highlight_pane_cp023

0xe438,	// (0x000251e3) list_tport_double_graphic_pane_g1_ParamLimits

0xe438,	// (0x000251e3) list_tport_double_graphic_pane_g1

0xe445,	// (0x000251f0) list_tport_double_graphic_pane_t1_ParamLimits

0xe445,	// (0x000251f0) list_tport_double_graphic_pane_t1

0xe45a,	// (0x00025205) list_tport_double_graphic_pane_t2_ParamLimits

0xe45a,	// (0x00025205) list_tport_double_graphic_pane_t2

0x0001,

0xfd9d,	// (0x00026b48) list_tport_double_graphic_pane_t_ParamLimits

0xfd9d,	// (0x00026b48) list_tport_double_graphic_pane_t

0x022d,	// (0x00016fd8) main_cale_note_pane

0x7ea9,	// (0x0001ec54) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7ea9,	// (0x0001ec54) cell_vitu2_function_top_wide_pane_cp01

0xdbeb,	// (0x00024996) wait_bar_pane_cp05_ParamLimits

0x022d,	// (0x00016fd8) listscroll_cmail_pane

0x554b,	// (0x0001c2f6) list_cmail_pane

0xe476,	// (0x00025221) list_cmail_body_pane

0xe48b,	// (0x00025236) list_single_cmail_header_caption_pane

0xe4a5,	// (0x00025250) list_single_cmail_header_detail_pane_ParamLimits

0xe4a5,	// (0x00025250) list_single_cmail_header_detail_pane

0xe4d4,	// (0x0002527f) list_single_cmail_header_caption_pane_t1

0xe4e4,	// (0x0002528f) list_single_cmail_header_detail_pane_g1_ParamLimits

0xe4e4,	// (0x0002528f) list_single_cmail_header_detail_pane_g1

0x556b,	// (0x0001c316) list_single_cmail_header_detail_pane_g2_ParamLimits

0x556b,	// (0x0001c316) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda2,	// (0x00026b4d) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda2,	// (0x00026b4d) list_single_cmail_header_detail_pane_g

0x5584,	// (0x0001c32f) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5584,	// (0x0001c32f) list_single_cmail_header_detail_pane_t1

0x55c2,	// (0x0001c36d) list_single_cmail_header_editor_pane_bg_ParamLimits

0x55c2,	// (0x0001c36d) list_single_cmail_header_editor_pane_bg

0x4df8,	// (0x0001bba3) list_cmail_body_pane_g1

0x55d4,	// (0x0001c37f) list_cmail_body_pane_t1

0x3e95,	// (0x0001ac40) list_single_cmail_header_editor_pane_bg_g1

0x0fbd,	// (0x00017d68) list_single_cmail_header_editor_pane_bg_g1_copy1

0x3ea5,	// (0x0001ac50) list_single_cmail_header_editor_pane_bg_g1_copy2

0x3e9d,	// (0x0001ac48) list_single_cmail_header_editor_pane_bg_g1_copy3

0x4130,	// (0x0001aedb) list_single_cmail_header_editor_pane_bg_g1_copy4

0x3ec5,	// (0x0001ac70) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x3eb5,	// (0x0001ac60) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3ebd,	// (0x0001ac68) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0f9d,	// (0x00017d48) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe522,	// (0x000252cd) calenote_gesture_pane_ParamLimits

0xe522,	// (0x000252cd) calenote_gesture_pane

0xe53c,	// (0x000252e7) calenote_window_pane_ParamLimits

0xe53c,	// (0x000252e7) calenote_window_pane

0x55e2,	// (0x0001c38d) popup_note_window_cp01

0xe554,	// (0x000252ff) calenote_swipe_1_pane_ParamLimits

0xe554,	// (0x000252ff) calenote_swipe_1_pane

0xdf93,	// (0x00024d3e) calenote_swipe_2_pane_ParamLimits

0xdf93,	// (0x00024d3e) calenote_swipe_2_pane

0x5179,	// (0x0001bf24) calenote_swipe_1_pane_g1_ParamLimits

0x5179,	// (0x0001bf24) calenote_swipe_1_pane_g1

0x5186,	// (0x0001bf31) calenote_swipe_1_pane_g2_ParamLimits

0x5186,	// (0x0001bf31) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x00026a81) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x00026a81) calenote_swipe_1_pane_g

0x55f4,	// (0x0001c39f) calenote_swipe_1_pane_t1_ParamLimits

0x55f4,	// (0x0001c39f) calenote_swipe_1_pane_t1

0x5179,	// (0x0001bf24) calenote_swipe_2_pane_g1_ParamLimits

0x5179,	// (0x0001bf24) calenote_swipe_2_pane_g1

0x5613,	// (0x0001c3be) calenote_swipe_2_pane_g2_ParamLimits

0x5613,	// (0x0001c3be) calenote_swipe_2_pane_g2

0x0001,

0xfdae,	// (0x00026b59) calenote_swipe_2_pane_g_ParamLimits

0xfdae,	// (0x00026b59) calenote_swipe_2_pane_g

0x561f,	// (0x0001c3ca) calenote_swipe_2_pane_t1_ParamLimits

0x561f,	// (0x0001c3ca) calenote_swipe_2_pane_t1

0x022d,	// (0x00016fd8) main_mup_navstr_pane

0xbca3,	// (0x00022a4e) main_mup3_pane_t7_ParamLimits

0xbca3,	// (0x00022a4e) main_mup3_pane_t7

0x77cf,	// (0x0001e57a) main_mp4_pane_g6_ParamLimits

0x77cf,	// (0x0001e57a) main_mp4_pane_g6

0x7ab2,	// (0x0001e85d) main_image3_pane_t4_ParamLimits

0x7ab2,	// (0x0001e85d) main_image3_pane_t4

0xe567,	// (0x00025312) popup_navstr_preview_pane_ParamLimits

0xe567,	// (0x00025312) popup_navstr_preview_pane

0xe573,	// (0x0002531e) scroll_navstr_pane_ParamLimits

0xe573,	// (0x0002531e) scroll_navstr_pane

0x022d,	// (0x00016fd8) bg_popup_preview_window_pane_cp04

0x5646,	// (0x0001c3f1) popup_navstr_preview_pane_t1

0xe57f,	// (0x0002532a) scroll_navstr_pane_g1_ParamLimits

0xe57f,	// (0x0002532a) scroll_navstr_pane_g1

0xe58c,	// (0x00025337) scroll_navstr_pane_t1_ParamLimits

0xe58c,	// (0x00025337) scroll_navstr_pane_t1

0x55eb,	// (0x0001c396) bg_button_pane_cp014

0x55eb,	// (0x0001c396) bg_button_pane_cp030

0x511a,	// (0x0001bec5) list_double_fisheye_pane_g4_ParamLimits

0x511a,	// (0x0001bec5) list_double_fisheye_pane_g4

0x5126,	// (0x0001bed1) list_double_fisheye_pane_g5_ParamLimits

0x5126,	// (0x0001bed1) list_double_fisheye_pane_g5

0x5553,	// (0x0001c2fe) sp_fs_scroll_pane_cp03

0x52bc,	// (0x0001c067) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x52c8,	// (0x0001c073) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x00026a9e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x52d4,	// (0x0001c07f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe46c,	// (0x00025217) sp_fs_scroll_pane_cp02

0x0ba1,	// (0x0001794c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0ba1,	// (0x0001794c) popup_sp_fs_calendar_preview_list_single_pane

0x022d,	// (0x00016fd8) main_cam6_pano_pane

0x029e,	// (0x00017049) main_mup3_pane_ParamLimits

0x022d,	// (0x00016fd8) main_phacti_pane

0xdabc,	// (0x00024867) bg_button_pane_cp11

0xdad4,	// (0x0002487f) main_mobtv_info_pane_g2_ParamLimits

0xdad4,	// (0x0002487f) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x000269fe) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x000269fe) main_mobtv_info_pane_g

0xdc88,	// (0x00024a33) sc_clock_pane_t5_ParamLimits

0xdc88,	// (0x00024a33) sc_clock_pane_t5

0xdd2d,	// (0x00024ad8) main_radioblah_pane_g1_ParamLimits

0x5088,	// (0x0001be33) main_radioblah_pane_t3_ParamLimits

0x5088,	// (0x0001be33) main_radioblah_pane_t3

0x50a0,	// (0x0001be4b) main_radioblah_pane_t4_ParamLimits

0x50a0,	// (0x0001be4b) main_radioblah_pane_t4

0xdd4b,	// (0x00024af6) main_radioblah_text_pane_ParamLimits

0xdd4b,	// (0x00024af6) main_radioblah_text_pane

0xdd58,	// (0x00024b03) main_radioblah_info_pane_g1_ParamLimits

0xddf1,	// (0x00024b9c) main_radioblah_info_pane_t4_ParamLimits

0xddf1,	// (0x00024b9c) main_radioblah_info_pane_t4

0x029e,	// (0x00017049) main_sp_fs_calendar_pane

0xe59e,	// (0x00025349) main_phacti_pane_g1

0xe5a6,	// (0x00025351) phacti_note_pane_ParamLimits

0xe5a6,	// (0x00025351) phacti_note_pane

0x565d,	// (0x0001c408) phacti_term_pane_ParamLimits

0x565d,	// (0x0001c408) phacti_term_pane

0x5672,	// (0x0001c41d) phacti_note_pane_t1_ParamLimits

0x5672,	// (0x0001c41d) phacti_note_pane_t1

0x5689,	// (0x0001c434) phacti_term_pane_g1

0x5691,	// (0x0001c43c) phacti_term_pane_t1_ParamLimits

0x5691,	// (0x0001c43c) phacti_term_pane_t1

0x56bb,	// (0x0001c466) popup_sp_fs_calendar_preview_list_single_pane_g1

0x56c3,	// (0x0001c46e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb8,	// (0x00026b63) popup_sp_fs_calendar_preview_list_single_pane_g

0x56cb,	// (0x0001c476) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x56cb,	// (0x0001c476) popup_sp_fs_calendar_preview_list_single_pane_t1

0x56e1,	// (0x0001c48c) aid_popup_sp_fs_bg_corner_pane

0x30e5,	// (0x00019e90) popup_sp_fs_calendar_preview_bg_pane_g1

0x022d,	// (0x00016fd8) popup_sp_fs_calendar_preview_bg_pane

0x56e9,	// (0x0001c494) popup_sp_fs_calendar_preview_list_pane

0x029e,	// (0x00017049) bg_main_sp_fs_cale_pane_ParamLimits

0x029e,	// (0x00017049) bg_main_sp_fs_cale_pane

0x56fa,	// (0x0001c4a5) listscroll_cale_mrui_pane_ParamLimits

0x56fa,	// (0x0001c4a5) listscroll_cale_mrui_pane

0x570e,	// (0x0001c4b9) listscroll_sp_fs_schedule_track_pane

0x5717,	// (0x0001c4c2) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5717,	// (0x0001c4c2) main_sp_fs_ctrlbar_pane_cp01

0x5728,	// (0x0001c4d3) main_sp_fs_ribbon_pane

0x5730,	// (0x0001c4db) popup_sp_fs_cale_preview_window

0xe5e5,	// (0x00025390) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe5e5,	// (0x00025390) list_single_sp_fs_schedule_track_pane

0x39f2,	// (0x0001a79d) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x39f2,	// (0x0001a79d) bg_sp_fs_highlight_list_pane_cp03

0xe5f7,	// (0x000253a2) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe5f7,	// (0x000253a2) list_single_sp_fs_schedule_track_pane_g1

0xe603,	// (0x000253ae) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe603,	// (0x000253ae) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdbd,	// (0x00026b68) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdbd,	// (0x00026b68) list_single_sp_fs_schedule_track_pane_g

0xe60f,	// (0x000253ba) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe60f,	// (0x000253ba) list_single_sp_fs_schedule_track_pane_t1

0xe62d,	// (0x000253d8) sp_fs_schedule_track_pane_ParamLimits

0xe62d,	// (0x000253d8) sp_fs_schedule_track_pane

0x5742,	// (0x0001c4ed) sp_fs_schedule_track_pane_g1

0x574a,	// (0x0001c4f5) sp_fs_schedule_track_pane_g2

0x5752,	// (0x0001c4fd) sp_fs_schedule_track_pane_g3

0x575a,	// (0x0001c505) sp_fs_schedule_track_pane_g4

0x5762,	// (0x0001c50d) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc2,	// (0x00026b6d) sp_fs_schedule_track_pane_g

0x3e95,	// (0x0001ac40) bg_sp_fs_schedule_viewer_highlight_g1

0x0fbd,	// (0x00017d68) bg_sp_fs_schedule_viewer_highlight_g2

0x3e9d,	// (0x0001ac48) bg_sp_fs_schedule_viewer_highlight_g3

0x3ea5,	// (0x0001ac50) bg_sp_fs_schedule_viewer_highlight_g4

0x4130,	// (0x0001aedb) bg_sp_fs_schedule_viewer_highlight_g5

0x3eb5,	// (0x0001ac60) bg_sp_fs_schedule_viewer_highlight_g6

0x3ebd,	// (0x0001ac68) bg_sp_fs_schedule_viewer_highlight_g7

0x3ec5,	// (0x0001ac70) bg_sp_fs_schedule_viewer_highlight_g8

0x0f9d,	// (0x00017d48) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdcd,	// (0x00026b78) bg_sp_fs_schedule_viewer_highlight_g

0x022d,	// (0x00016fd8) bg_main_sp_fs_ribbon_pane

0xe63f,	// (0x000253ea) main_sp_fs_ribbon_pane_g1

0x576a,	// (0x0001c515) main_sp_fs_ribbon_pane_t1

0xe648,	// (0x000253f3) main_sp_fs_ribbon_pane_t2

0x5779,	// (0x0001c524) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde0,	// (0x00026b8b) main_sp_fs_ribbon_pane_t

0x5788,	// (0x0001c533) main_sp_fs_ribbon_scheduler_pane

0x5790,	// (0x0001c53b) bg_main_sp_fs_ribbon_pane_g1

0x5799,	// (0x0001c544) bg_main_sp_fs_ribbon_pane_g2

0x57a2,	// (0x0001c54d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde7,	// (0x00026b92) bg_main_sp_fs_ribbon_pane_g

0x57aa,	// (0x0001c555) main_sp_fs_ribbon_scheduler_pane_g1

0x57b3,	// (0x0001c55e) main_sp_fs_ribbon_scheduler_pane_g2

0x57bc,	// (0x0001c567) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdee,	// (0x00026b99) main_sp_fs_ribbon_scheduler_pane_g

0x57c5,	// (0x0001c570) list_cale_mrui_pane

0xe657,	// (0x00025402) sp_fs_scroll_pane_cp07_ParamLimits

0xe657,	// (0x00025402) sp_fs_scroll_pane_cp07

0xe66d,	// (0x00025418) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe66d,	// (0x00025418) bg_sp_fs_schedule_viewer_highlight

0x57ce,	// (0x0001c579) list_single_sp_fs_schedule_track_pane_cp01

0x57d6,	// (0x0001c581) list_sp_fs_schedule_track_pane

0x57de,	// (0x0001c589) sp_fs_scroll_pane_cp06_ParamLimits

0x57de,	// (0x0001c589) sp_fs_scroll_pane_cp06

0x30e5,	// (0x00019e90) bgmain_sp_fs_calendar_pane_g1

0xe67a,	// (0x00025425) list_single_cale_mrui_pane_ParamLimits

0xe67a,	// (0x00025425) list_single_cale_mrui_pane

0x57f0,	// (0x0001c59b) list_single_cale_mrui_row_pane_ParamLimits

0x57f0,	// (0x0001c59b) list_single_cale_mrui_row_pane

0x57fd,	// (0x0001c5a8) list_single_cale_mrui_row_pane_g1_ParamLimits

0x57fd,	// (0x0001c5a8) list_single_cale_mrui_row_pane_g1

0x5835,	// (0x0001c5e0) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5835,	// (0x0001c5e0) list_single_cale_mrui_row_pane_t1

0xe69e,	// (0x00025449) list_single_cale_mrui_row_pane_t2_ParamLimits

0xe69e,	// (0x00025449) list_single_cale_mrui_row_pane_t2

0x5847,	// (0x0001c5f2) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5847,	// (0x0001c5f2) list_single_cale_mrui_row_pane_t3

0x5876,	// (0x0001c621) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5876,	// (0x0001c621) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdfa,	// (0x00026ba5) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdfa,	// (0x00026ba5) list_single_cale_mrui_row_pane_t

0xe704,	// (0x000254af) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xe704,	// (0x000254af) list_single_cmail_header_editor_pane_bg_cp01

0xe728,	// (0x000254d3) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xe728,	// (0x000254d3) list_single_cmail_header_editor_pane_bg_cp02

0xe744,	// (0x000254ef) main_radioblah_text_pane_t1_ParamLimits

0xe744,	// (0x000254ef) main_radioblah_text_pane_t1

0x58a5,	// (0x0001c650) cam6_indi_pane_cp01

0x58ad,	// (0x0001c658) cam6_mode_pane_cp01

0x58b5,	// (0x0001c660) cam6_pano_pane

0x58be,	// (0x0001c669) cam6_zoom_pane_cp01

0x58c8,	// (0x0001c673) cam6_pano_image_pane

0x58d1,	// (0x0001c67c) cam6_pano_pane_g1

0x4df8,	// (0x0001bba3) cam6_pano_pane_g2

0x58da,	// (0x0001c685) cam6_pano_pane_g3

0x58e3,	// (0x0001c68e) cam6_pano_pane_g4

0x36c5,	// (0x0001a470) cam6_pano_pane_g5

0x58ec,	// (0x0001c697) cam6_pano_pane_g6

0x58f4,	// (0x0001c69f) cam6_pano_pane_g7

0x58fc,	// (0x0001c6a7) cam6_pano_pane_g8

0x5905,	// (0x0001c6b0) cam6_pano_pane_g9

0x0008,

0xfe03,	// (0x00026bae) cam6_pano_pane_g

0x022d,	// (0x00016fd8) main_browser_tag_pane

0x563e,	// (0x0001c3e9) grid_navstr_albumart_pane

0x5910,	// (0x0001c6bb) cell_navstr_albumart_pane_ParamLimits

0x5910,	// (0x0001c6bb) cell_navstr_albumart_pane

0x592c,	// (0x0001c6d7) cell_navstr_albumart_pane_g1

0x29c9,	// (0x00019774) cell_navstr_albumart_pane_g2

0x29d9,	// (0x00019784) cell_navstr_albumart_pane_g3

0x29d1,	// (0x0001977c) cell_navstr_albumart_pane_g4

0x0003,

0xfe16,	// (0x00026bc1) cell_navstr_albumart_pane_g

0xe75f,	// (0x0002550a) bt_list_pane_ParamLimits

0xe75f,	// (0x0002550a) bt_list_pane

0xe778,	// (0x00025523) bt_list_pane_t1

0xe787,	// (0x00025532) bt_list_pane_t2

0x0001,

0xfe1f,	// (0x00026bca) bt_list_pane_t

0x022d,	// (0x00016fd8) main_cale_prevew_pane

0xe796,	// (0x00025541) popup_cale_preview_window_ParamLimits

0xe796,	// (0x00025541) popup_cale_preview_window

0x029e,	// (0x00017049) bg_popup_preview_window_pane_cp05_ParamLimits

0x029e,	// (0x00017049) bg_popup_preview_window_pane_cp05

0x5934,	// (0x0001c6df) list_cale_preview_pane_ParamLimits

0x5934,	// (0x0001c6df) list_cale_preview_pane

0xe7b1,	// (0x0002555c) list_double_cale_preview_pane_ParamLimits

0xe7b1,	// (0x0002555c) list_double_cale_preview_pane

0xe7c5,	// (0x00025570) list_single_cale_preview_pane_ParamLimits

0xe7c5,	// (0x00025570) list_single_cale_preview_pane

0xe7dd,	// (0x00025588) list_single_cale_preview_pane_g1

0xe7e5,	// (0x00025590) list_single_cale_preview_pane_t1_ParamLimits

0xe7e5,	// (0x00025590) list_single_cale_preview_pane_t1

0xe7fa,	// (0x000255a5) list_double_cale_preview_pane_g1

0xe802,	// (0x000255ad) list_double_cale_preview_pane_t1_ParamLimits

0xe802,	// (0x000255ad) list_double_cale_preview_pane_t1

0xe817,	// (0x000255c2) list_double_cale_preview_pane_t2_ParamLimits

0xe817,	// (0x000255c2) list_double_cale_preview_pane_t2

0x0001,

0xfe24,	// (0x00026bcf) list_double_cale_preview_pane_t_ParamLimits

0xfe24,	// (0x00026bcf) list_double_cale_preview_pane_t

0x022d,	// (0x00016fd8) main_ezdial_pane

0x029e,	// (0x00017049) main_sp_fs_email_pane_ParamLimits

0xdfcb,	// (0x00024d76) cmail_ddmenu_btn01_pane_ParamLimits

0xdfcb,	// (0x00024d76) cmail_ddmenu_btn01_pane

0xdfe8,	// (0x00024d93) cmail_ddmenu_btn02_pane_ParamLimits

0xdfe8,	// (0x00024d93) cmail_ddmenu_btn02_pane

0xe006,	// (0x00024db1) cmail_ddmenu_btn03_pane_ParamLimits

0xe006,	// (0x00024db1) cmail_ddmenu_btn03_pane

0xe034,	// (0x00024ddf) main_sp_fs_ctrlbar_pane_ParamLimits

0xe050,	// (0x00024dfb) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe476,	// (0x00025221) list_cmail_body_pane_ParamLimits

0x5562,	// (0x0001c30d) bg_button_pane_cp12

0x5577,	// (0x0001c322) list_single_cmail_header_detail_pane_g3_ParamLimits

0x5577,	// (0x0001c322) list_single_cmail_header_detail_pane_g3

0xe4fc,	// (0x000252a7) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe4fc,	// (0x000252a7) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda9,	// (0x00026b54) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda9,	// (0x00026b54) list_single_cmail_header_detail_pane_t

0x56a6,	// (0x0001c451) phacti_term_pane_t2_ParamLimits

0x56a6,	// (0x0001c451) phacti_term_pane_t2

0x0001,

0xfdb3,	// (0x00026b5e) phacti_term_pane_t_ParamLimits

0xfdb3,	// (0x00026b5e) phacti_term_pane_t

0x5940,	// (0x0001c6eb) aid_size_list_single_double

0xe82f,	// (0x000255da) popup_ezdial_listscroll_window

0xe84f,	// (0x000255fa) popup_number_entry_window_cp01

0x1743,	// (0x000184ee) bg_popup_call_pane_cp09

0x594c,	// (0x0001c6f7) ezdial_list_pane

0x5954,	// (0x0001c6ff) scroll_pane_cp23

0x2ec4,	// (0x00019c6f) bg_button_pane_cp028_ParamLimits

0x2ec4,	// (0x00019c6f) bg_button_pane_cp028

0xe85d,	// (0x00025608) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe85d,	// (0x00025608) cmail_ddmenu_btn01_pane_g1

0xe86d,	// (0x00025618) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe86d,	// (0x00025618) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe29,	// (0x00026bd4) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe29,	// (0x00026bd4) cmail_ddmenu_btn01_pane_g

0x595c,	// (0x0001c707) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x595c,	// (0x0001c707) cmail_ddmenu_btn01_pane_t1

0x2bb0,	// (0x0001995b) bg_button_pane_cp029_ParamLimits

0x2bb0,	// (0x0001995b) bg_button_pane_cp029

0xe86d,	// (0x00025618) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe86d,	// (0x00025618) cmail_ddmenu_btn02_pane_g1

0xe885,	// (0x00025630) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe885,	// (0x00025630) cmail_ddmenu_btn02_pane_t1

0x39f2,	// (0x0001a79d) bg_button_pane_cp031_ParamLimits

0x39f2,	// (0x0001a79d) bg_button_pane_cp031

0xe86d,	// (0x00025618) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe86d,	// (0x00025618) cmail_ddmenu_btn03_pane_g1

0xe885,	// (0x00025630) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe885,	// (0x00025630) cmail_ddmenu_btn03_pane_t1

0xc4e4,	// (0x0002328f) cell_dialer2_keypad_pane_t1_ParamLimits

0xc4fe,	// (0x000232a9) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc4fe,	// (0x000232a9) cell_dialer2_keypad_pane_t1_copy1

0xd94c,	// (0x000246f7) ncimui_group_button_pane

0x029e,	// (0x00017049) main_sp_fs_calendar_pane_ParamLimits

0xe48b,	// (0x00025236) list_single_cmail_header_caption_pane_ParamLimits

0x56f1,	// (0x0001c49c) aid_recal_txt_sm_pane

0x022d,	// (0x00016fd8) mian_recal_day_pane

0x5730,	// (0x0001c4db) popup_sp_fs_cale_preview_window_ParamLimits

0x022d,	// (0x00016fd8) list_recal_day_pane

0x5993,	// (0x0001c73e) list_single_recal_day_pane_ParamLimits

0x5993,	// (0x0001c73e) list_single_recal_day_pane

0x59a5,	// (0x0001c750) list_single_recal_day_pane_g1_ParamLimits

0x59a5,	// (0x0001c750) list_single_recal_day_pane_g1

0x59b1,	// (0x0001c75c) list_single_recal_day_pane_g2_ParamLimits

0x59b1,	// (0x0001c75c) list_single_recal_day_pane_g2

0x59bd,	// (0x0001c768) list_single_recal_day_pane_g3_ParamLimits

0x59bd,	// (0x0001c768) list_single_recal_day_pane_g3

0xe8a9,	// (0x00025654) list_single_recal_day_pane_g4_ParamLimits

0xe8a9,	// (0x00025654) list_single_recal_day_pane_g4

0x59c9,	// (0x0001c774) list_single_recal_day_pane_g5_ParamLimits

0x59c9,	// (0x0001c774) list_single_recal_day_pane_g5

0x59d5,	// (0x0001c780) list_single_recal_day_pane_g6_ParamLimits

0x59d5,	// (0x0001c780) list_single_recal_day_pane_g6

0x0005,

0xfe38,	// (0x00026be3) list_single_recal_day_pane_g_ParamLimits

0xfe38,	// (0x00026be3) list_single_recal_day_pane_g

0x59e1,	// (0x0001c78c) list_single_recal_day_pane_t1

0x59ef,	// (0x0001c79a) list_single_recal_day_pane_t2

0x0001,

0xfe45,	// (0x00026bf0) list_single_recal_day_pane_t

0xe8b7,	// (0x00025662) ncimui_query_button_pane_ParamLimits

0xe8b7,	// (0x00025662) ncimui_query_button_pane

0xe8c7,	// (0x00025672) ncimui_query_button_pane_t1_ParamLimits

0xe8c7,	// (0x00025672) ncimui_query_button_pane_t1

0x59fd,	// (0x0001c7a8) ncimui_query_button_pane_t2_ParamLimits

0x59fd,	// (0x0001c7a8) ncimui_query_button_pane_t2

0x0001,

0xfe4a,	// (0x00026bf5) ncimui_query_button_pane_t_ParamLimits

0xfe4a,	// (0x00026bf5) ncimui_query_button_pane_t

0xe8da,	// (0x00025685) query_button_pane_ParamLimits

0xe8da,	// (0x00025685) query_button_pane

0x022d,	// (0x00016fd8) bg_button_pane_cp0028

0x5a10,	// (0x0001c7bb) query_button_pane_t1

0xafe0,	// (0x00021d8b) main_tport_pane_ParamLimits

0xe399,	// (0x00025144) bg_popup_window_pane_cp01_ParamLimits

0xe399,	// (0x00025144) bg_popup_window_pane_cp01

0xe3a6,	// (0x00025151) heading_pane_cp08_ParamLimits

0xe3a6,	// (0x00025151) heading_pane_cp08

0xe3b4,	// (0x0002515f) heading_pane_cp07_ParamLimits

0xe3b4,	// (0x0002515f) heading_pane_cp07

0x552d,	// (0x0001c2d8) cell_tport_appsw_pane_g2

0x0002,

0xfd96,	// (0x00026b41) cell_tport_appsw_pane_g

0xa75c,	// (0x00021507) input_candi_list_open_g1

0x11b0,	// (0x00017f5b) list_cale_time_pane_g6_ParamLimits

0x11b0,	// (0x00017f5b) list_cale_time_pane_g6

0xb75d,	// (0x00022508) aid_size_touch_calib_1_ParamLimits

0xb75d,	// (0x00022508) aid_size_touch_calib_1

0xb769,	// (0x00022514) aid_size_touch_calib_2_ParamLimits

0xb769,	// (0x00022514) aid_size_touch_calib_2

0xb777,	// (0x00022522) aid_size_touch_calib_3_ParamLimits

0xb777,	// (0x00022522) aid_size_touch_calib_3

0xb787,	// (0x00022532) aid_size_touch_calib_4_ParamLimits

0xb787,	// (0x00022532) aid_size_touch_calib_4

0xb795,	// (0x00022540) main_touch_calib_button_group_pane_ParamLimits

0xb795,	// (0x00022540) main_touch_calib_button_group_pane

0xb7a3,	// (0x0002254e) main_touch_calib_pane_g1_ParamLimits

0xb7af,	// (0x0002255a) main_touch_calib_pane_g2_ParamLimits

0xb7bb,	// (0x00022566) main_touch_calib_pane_g3_ParamLimits

0xb7c7,	// (0x00022572) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x00026520) main_touch_calib_pane_g_ParamLimits

0xb7d3,	// (0x0002257e) main_touch_calib_pane_t1_ParamLimits

0xb7ea,	// (0x00022595) main_touch_calib_pane_t2_ParamLimits

0xb801,	// (0x000225ac) main_touch_calib_pane_t3_ParamLimits

0xb815,	// (0x000225c0) main_touch_calib_pane_t4_ParamLimits

0xb82b,	// (0x000225d6) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x00026529) main_touch_calib_pane_t_ParamLimits

0x348f,	// (0x0001a23a) list_single_fp_cale_pane_g3_ParamLimits

0x348f,	// (0x0001a23a) list_single_fp_cale_pane_g3

0x7cb1,	// (0x0001ea5c) bg_button_pane_cp012_ParamLimits

0x7cb1,	// (0x0001ea5c) bg_vkb2_func_pane_cp03_ParamLimits

0x80b0,	// (0x0001ee5b) cell_vitu2_function_top_pane_g1_ParamLimits

0x7cb1,	// (0x0001ea5c) bg_vkb2_func_pane_cp04_ParamLimits

0xd8e8,	// (0x00024693) main_ncimui_button_group_pane_ParamLimits

0xd8e8,	// (0x00024693) main_ncimui_button_group_pane

0xd93a,	// (0x000246e5) main_ncimui_pane_t3_ParamLimits

0xd93a,	// (0x000246e5) main_ncimui_pane_t3

0x5654,	// (0x0001c3ff) phacti_button_group_pane

0x5940,	// (0x0001c6eb) aid_size_list_single_double_ParamLimits

0xe82f,	// (0x000255da) popup_ezdial_listscroll_window_ParamLimits

0xe84f,	// (0x000255fa) popup_number_entry_window_cp01_ParamLimits

0xe8e7,	// (0x00025692) phacti_button_pane_ParamLimits

0xe8e7,	// (0x00025692) phacti_button_pane

0x022d,	// (0x00016fd8) bg_button_pane_cp14

0x5a1e,	// (0x0001c7c9) phacti_button_pane_t1

0xe8f8,	// (0x000256a3) main_touch_calib_button_pane_ParamLimits

0xe8f8,	// (0x000256a3) main_touch_calib_button_pane

0x0a07,	// (0x000177b2) bg_button_pane_cp18_ParamLimits

0x0a07,	// (0x000177b2) bg_button_pane_cp18

0x5a2c,	// (0x0001c7d7) main_touch_calib_button_pane_t1_ParamLimits

0x5a2c,	// (0x0001c7d7) main_touch_calib_button_pane_t1

0x5a42,	// (0x0001c7ed) main_touch_calib_button_pane_t2_ParamLimits

0x5a42,	// (0x0001c7ed) main_touch_calib_button_pane_t2

0x0001,

0xfe4f,	// (0x00026bfa) main_touch_calib_button_pane_t_ParamLimits

0xfe4f,	// (0x00026bfa) main_touch_calib_button_pane_t

0x022d,	// (0x00016fd8) cell_ncimui_button_pane

0x022d,	// (0x00016fd8) bg_button_pane_cp032

0x5a60,	// (0x0001c80b) cell_ncimui_button_pane_t1

0x79c3,	// (0x0001e76e) image3_infobar_pane_ParamLimits

0x79c3,	// (0x0001e76e) image3_infobar_pane

0xdcaa,	// (0x00024a55) fs_bigclock_status_pane_ParamLimits

0xdcaa,	// (0x00024a55) fs_bigclock_status_pane

0xdcb7,	// (0x00024a62) main_fs_bigclock_clock_pane_ParamLimits

0xdcb7,	// (0x00024a62) main_fs_bigclock_clock_pane

0xdcc7,	// (0x00024a72) main_fs_bigclock_indi_pane_ParamLimits

0xdcc7,	// (0x00024a72) main_fs_bigclock_indi_pane

0xdcf9,	// (0x00024aa4) main_fs_bigclock_swipe_pane_ParamLimits

0xdcf9,	// (0x00024aa4) main_fs_bigclock_swipe_pane

0x022d,	// (0x00016fd8) main_fs_clock_dumped_data

0x4f05,	// (0x0001bcb0) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x4f05,	// (0x0001bcb0) list_single_fs_bigclock_indicator_pane_g1

0x4f25,	// (0x0001bcd0) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x4f25,	// (0x0001bcd0) list_single_fs_bigclock_indicator_pane_g2

0x4f3f,	// (0x0001bcea) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x4f3f,	// (0x0001bcea) list_single_fs_bigclock_indicator_pane_g3

0x4f5b,	// (0x0001bd06) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x4f5b,	// (0x0001bd06) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x00026a32) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x00026a32) list_single_fs_bigclock_indicator_pane_g

0x4f81,	// (0x0001bd2c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x4f81,	// (0x0001bd2c) list_single_fs_bigclock_indicator_pane_t1

0x4fa9,	// (0x0001bd54) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x4fa9,	// (0x0001bd54) list_single_fs_bigclock_indicator_pane_t2

0x4fd1,	// (0x0001bd7c) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x4fd1,	// (0x0001bd7c) list_single_fs_bigclock_indicator_pane_t3

0x4ffb,	// (0x0001bda6) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x4ffb,	// (0x0001bda6) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x00026a3d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x00026a3d) list_single_fs_bigclock_indicator_pane_t

0x5a6e,	// (0x0001c819) image3_infobar_fav_pane_ParamLimits

0x5a6e,	// (0x0001c819) image3_infobar_fav_pane

0x5a7e,	// (0x0001c829) image3_infobar_loc_pane_ParamLimits

0x5a7e,	// (0x0001c829) image3_infobar_loc_pane

0x5a94,	// (0x0001c83f) image3_infobar_time_pane_ParamLimits

0x5a94,	// (0x0001c83f) image3_infobar_time_pane

0x30e5,	// (0x00019e90) image3_infobar_time_pane_g1

0x5aa4,	// (0x0001c84f) image3_infobar_time_pane_t1

0x30e5,	// (0x00019e90) image3_infobar_loc_pane_g1

0x5ab2,	// (0x0001c85d) image3_infobar_loc_pane_g2

0x0001,

0xfe54,	// (0x00026bff) image3_infobar_loc_pane_g

0x5aba,	// (0x0001c865) image3_infobar_loc_pane_t1

0x30e5,	// (0x00019e90) image3_infobar_fav_pane_g1

0x5ac8,	// (0x0001c873) image3_infobar_fav_pane_g2

0x0001,

0xfe59,	// (0x00026c04) image3_infobar_fav_pane_g

0x5ad0,	// (0x0001c87b) fs_bigclock_status_battery_pane

0x5ad9,	// (0x0001c884) fs_bigclock_status_signal_pane

0x5ae2,	// (0x0001c88d) fs_bigclock_status_title_pane

0x5aeb,	// (0x0001c896) fs_bigclock_status_signal_pane_g1

0x5af4,	// (0x0001c89f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5e,	// (0x00026c09) fs_bigclock_status_signal_pane_g

0x5afc,	// (0x0001c8a7) fs_bigclock_status_battery_pane_g1

0x5b05,	// (0x0001c8b0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe63,	// (0x00026c0e) fs_bigclock_status_battery_pane_g

0x5b0d,	// (0x0001c8b8) fs_bigclock_status_title_pane_t1

0x30e5,	// (0x00019e90) main_fs_bigclock_clock_pane_g1

0x5b1b,	// (0x0001c8c6) main_fs_bigclock_clock_pane_g2

0x5b1b,	// (0x0001c8c6) main_fs_bigclock_clock_pane_g3

0x5b1b,	// (0x0001c8c6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe68,	// (0x00026c13) main_fs_bigclock_clock_pane_g

0x5b27,	// (0x0001c8d2) main_fs_bigclock_clock_pane_t1

0x5b35,	// (0x0001c8e0) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe71,	// (0x00026c1c) main_fs_bigclock_clock_pane_t

0x5b44,	// (0x0001c8ef) list_single_fs_bigclock_indicator_pane_ParamLimits

0x5b44,	// (0x0001c8ef) list_single_fs_bigclock_indicator_pane

0xe90a,	// (0x000256b5) list_single_fs_bigclock_pane_ParamLimits

0xe90a,	// (0x000256b5) list_single_fs_bigclock_pane

0x5b5e,	// (0x0001c909) main_fs_bigclock_indicator_pane_t1

0x5b6d,	// (0x0001c918) list_single_fs_bigclock_pane_g1

0x5b75,	// (0x0001c920) list_single_fs_bigclock_pane_t1

0x30e5,	// (0x00019e90) main_fs_bigclock_swipe_pane_g1

0x5bb3,	// (0x0001c95e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe82,	// (0x00026c2d) main_fs_bigclock_swipe_pane_g

0x5bbb,	// (0x0001c966) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x5bbb,	// (0x0001c966) main_fs_bigclock_swipe_pane_t1

0x9f53,	// (0x00020cfe) call_type_pane_ParamLimits

0x022d,	// (0x00016fd8) main_btmg_pane

0x5829,	// (0x0001c5d4) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5829,	// (0x0001c5d4) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdf5,	// (0x00026ba0) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf5,	// (0x00026ba0) list_single_cale_mrui_row_pane_g

0x597a,	// (0x0001c725) list_recal_vselct_arw_lo_pane

0x5982,	// (0x0001c72d) list_recal_vselct_arw_up_pane

0x598a,	// (0x0001c735) list_recal_vselct_pane

0x5bd8,	// (0x0001c983) btmg_button_pane

0xe96d,	// (0x00025718) main_btmg_pane_g1

0x022d,	// (0x00016fd8) bg_button_pane_cp044

0x5be2,	// (0x0001c98d) btmg_button_pane_t1

0x2ba8,	// (0x00019953) aid_listscroll_gen

0x029e,	// (0x00017049) main_cntbar_detail_pane

0x5543,	// (0x0001c2ee) list_cmail_folder_pane

0x5553,	// (0x0001c2fe) sp_fs_scroll_pane_cp03_ParamLimits

0xe975,	// (0x00025720) list_single_fs_dyc_pane_cp01_ParamLimits

0xe975,	// (0x00025720) list_single_fs_dyc_pane_cp01

0x5c1e,	// (0x0001c9c9) aid_size_cmail_indent

0x5c27,	// (0x0001c9d2) list_single_dyc_row_pane_cp01

0xe9ac,	// (0x00025757) cntbar_detail_list_pane_ParamLimits

0xe9ac,	// (0x00025757) cntbar_detail_list_pane

0xe9ec,	// (0x00025797) main_cntbar_detail_cont_pane_ParamLimits

0xe9ec,	// (0x00025797) main_cntbar_detail_cont_pane

0x9eed,	// (0x00020c98) scroll_pane_cp032_ParamLimits

0x9eed,	// (0x00020c98) scroll_pane_cp032

0xe9f8,	// (0x000257a3) cntbar_detail_list_event_pane_ParamLimits

0xe9f8,	// (0x000257a3) cntbar_detail_list_event_pane

0xe9ba,	// (0x00025765) cntbar_detail_list_shct_pane

0x100b,	// (0x00017db6) aid_list_gen

0x5c30,	// (0x0001c9db) aid_scroll

0x5c39,	// (0x0001c9e4) aid_size_touch_scroll_bar

0x5c42,	// (0x0001c9ed) aid_list_double

0x5c4b,	// (0x0001c9f6) aid_list_single

0xea08,	// (0x000257b3) aid_list_single_lg

0x5c54,	// (0x0001c9ff) aid_list_z_g_a_sm

0x5c5c,	// (0x0001ca07) aid_list_z_g_d

0x5c64,	// (0x0001ca0f) aid_txt_z_prm

0x5c72,	// (0x0001ca1d) aid_txt_z_prm_cp01

0x5c80,	// (0x0001ca2b) aid_txt_z_sec

0xea11,	// (0x000257bc) main_cntbar_detail_cont_pane_g1_ParamLimits

0xea11,	// (0x000257bc) main_cntbar_detail_cont_pane_g1

0xea1e,	// (0x000257c9) main_cntbar_detail_cont_pane_g2_ParamLimits

0xea1e,	// (0x000257c9) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe87,	// (0x00026c32) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe87,	// (0x00026c32) main_cntbar_detail_cont_pane_g

0x5c8e,	// (0x0001ca39) main_cntbar_detail_cont_pane_t1

0x5c9c,	// (0x0001ca47) main_cntbar_detail_cont_pane_t2

0x5caa,	// (0x0001ca55) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe8c,	// (0x00026c37) main_cntbar_detail_cont_pane_t

0xea2a,	// (0x000257d5) cell_cntbar_detail_list_shct_pane_ParamLimits

0xea2a,	// (0x000257d5) cell_cntbar_detail_list_shct_pane

0x5cb8,	// (0x0001ca63) cntbar_detail_list_shct_pane_g1

0x5cc1,	// (0x0001ca6c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe93,	// (0x00026c3e) cntbar_detail_list_shct_pane_g

0xea3e,	// (0x000257e9) cntbar_detail_list_event_pane_g1_ParamLimits

0xea3e,	// (0x000257e9) cntbar_detail_list_event_pane_g1

0xea4a,	// (0x000257f5) cntbar_detail_list_event_pane_g2_ParamLimits

0xea4a,	// (0x000257f5) cntbar_detail_list_event_pane_g2

0x0005,

0xfe98,	// (0x00026c43) cntbar_detail_list_event_pane_g_ParamLimits

0xfe98,	// (0x00026c43) cntbar_detail_list_event_pane_g

0xeab8,	// (0x00025863) cntbar_detail_list_event_pane_t1_ParamLimits

0xeab8,	// (0x00025863) cntbar_detail_list_event_pane_t1

0xeacd,	// (0x00025878) cntbar_detail_list_event_pane_t2_ParamLimits

0xeacd,	// (0x00025878) cntbar_detail_list_event_pane_t2

0x0002,

0xfea5,	// (0x00026c50) cntbar_detail_list_event_pane_t_ParamLimits

0xfea5,	// (0x00026c50) cntbar_detail_list_event_pane_t

0x30e5,	// (0x00019e90) cell_cntbar_detail_list_shct_pane_g1

0xa27c,	// (0x00021027) navi_pane_mv_g3

0x029e,	// (0x00017049) main_cntbar_detail_pane_ParamLimits

0x022d,	// (0x00016fd8) main_notif_wgt_pane

0x7724,	// (0x0001e4cf) aid_tch_main_mp4_pane_g4

0x7939,	// (0x0001e6e4) popup_slider_window_cp02

0x5971,	// (0x0001c71c) list_recal_day_event_pane

0xe98c,	// (0x00025737) cntbar_detail_btn_pane_ParamLimits

0xe98c,	// (0x00025737) cntbar_detail_btn_pane

0xe99c,	// (0x00025747) cntbar_detail_btn_pane_cp01_ParamLimits

0xe99c,	// (0x00025747) cntbar_detail_btn_pane_cp01

0xe9ba,	// (0x00025765) cntbar_detail_list_shct_pane_ParamLimits

0xe9c6,	// (0x00025771) cntbar_detail_pane_g1_ParamLimits

0xe9c6,	// (0x00025771) cntbar_detail_pane_g1

0xe9d6,	// (0x00025781) cntbar_detail_pane_t1_ParamLimits

0xe9d6,	// (0x00025781) cntbar_detail_pane_t1

0xea56,	// (0x00025801) cntbar_detail_list_event_pane_g3_ParamLimits

0xea56,	// (0x00025801) cntbar_detail_list_event_pane_g3

0xea6e,	// (0x00025819) cntbar_detail_list_event_pane_g4_ParamLimits

0xea6e,	// (0x00025819) cntbar_detail_list_event_pane_g4

0xea86,	// (0x00025831) cntbar_detail_list_event_pane_g5_ParamLimits

0xea86,	// (0x00025831) cntbar_detail_list_event_pane_g5

0xea9e,	// (0x00025849) cntbar_detail_list_event_pane_g6_ParamLimits

0xea9e,	// (0x00025849) cntbar_detail_list_event_pane_g6

0xeae2,	// (0x0002588d) cntbar_detail_list_event_pane_t3_ParamLimits

0xeae2,	// (0x0002588d) cntbar_detail_list_event_pane_t3

0xeaf4,	// (0x0002589f) popup_notif_wgt_window_ParamLimits

0xeaf4,	// (0x0002589f) popup_notif_wgt_window

0xeb04,	// (0x000258af) popup_submenu_window_cp01_ParamLimits

0xeb04,	// (0x000258af) popup_submenu_window_cp01

0x1743,	// (0x000184ee) bg_popup_window_pane_cp10

0x5cca,	// (0x0001ca75) listscroll_notif_wgt_pane

0x5cd4,	// (0x0001ca7f) list_notif_wgt_window

0x5cdd,	// (0x0001ca88) scroll_pane_cp033

0x5ce6,	// (0x0001ca91) list_notif_wgt_row_pane_ParamLimits

0x5ce6,	// (0x0001ca91) list_notif_wgt_row_pane

0x5cfa,	// (0x0001caa5) aid_size_list_notif_wgt_del

0x5d03,	// (0x0001caae) list_notif_wgt_row_pane_g1

0x5d0b,	// (0x0001cab6) list_notif_wgt_row_pane_g2

0x5d13,	// (0x0001cabe) list_notif_wgt_row_pane_g3

0x0002,

0xfeac,	// (0x00026c57) list_notif_wgt_row_pane_g

0x5d1c,	// (0x0001cac7) list_notif_wgt_row_pane_t1

0x5d2a,	// (0x0001cad5) list_notif_wgt_row_pane_t2

0x5d38,	// (0x0001cae3) list_notif_wgt_row_pane_t3

0x0002,

0xfeb3,	// (0x00026c5e) list_notif_wgt_row_pane_t

0x4170,	// (0x0001af1b) list_recal_day_event_pane_g1

0x5d46,	// (0x0001caf1) list_recal_day_event_pane_t1

0x022d,	// (0x00016fd8) bg_button_pane_cp045

0x5d55,	// (0x0001cb00) cntbar_detail_btn_pane_t1

0x2bb0,	// (0x0001995b) main_callh_pane_ParamLimits

0x2bb0,	// (0x0001995b) main_callh_pane

0x022d,	// (0x00016fd8) main_coverflow0_pane

0x022d,	// (0x00016fd8) main_wgtman_pane

0xdd11,	// (0x00024abc) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdd11,	// (0x00024abc) main_fs_bigclock_unlock_btn_pane

0x5525,	// (0x0001c2d0) bg_button_pane_cp16

0xe41f,	// (0x000251ca) cell_tport_appsw_pane_g3

0xeb12,	// (0x000258bd) cf0_flow_pane_ParamLimits

0xeb12,	// (0x000258bd) cf0_flow_pane

0x5d63,	// (0x0001cb0e) listscroll_cf0_pane

0x5d6c,	// (0x0001cb17) main_cf0_pane_g1

0xeb21,	// (0x000258cc) main_cf0_pane_t1_ParamLimits

0xeb21,	// (0x000258cc) main_cf0_pane_t1

0xeb35,	// (0x000258e0) main_cf0_pane_t2_ParamLimits

0xeb35,	// (0x000258e0) main_cf0_pane_t2

0x0001,

0xfeba,	// (0x00026c65) main_cf0_pane_t_ParamLimits

0xfeba,	// (0x00026c65) main_cf0_pane_t

0x5d76,	// (0x0001cb21) scroll_pane_cp11

0xeb49,	// (0x000258f4) cf0_flow_pane_g1

0xeb51,	// (0x000258fc) cf0_flow_pane_g2

0x0001,

0xfebf,	// (0x00026c6a) cf0_flow_pane_g

0xeb59,	// (0x00025904) cf0_flow_pane_t1

0x022d,	// (0x00016fd8) main_call6_pane

0x022d,	// (0x00016fd8) main_calllock_pane

0xeb67,	// (0x00025912) call6_btn_grp_pane_ParamLimits

0xeb67,	// (0x00025912) call6_btn_grp_pane

0xeb76,	// (0x00025921) call6_pane_g1_ParamLimits

0xeb76,	// (0x00025921) call6_pane_g1

0xeb86,	// (0x00025931) popup_call6_1st_window_ParamLimits

0xeb86,	// (0x00025931) popup_call6_1st_window

0xeb94,	// (0x0002593f) popup_call6_2nd_window_ParamLimits

0xeb94,	// (0x0002593f) popup_call6_2nd_window

0xeba2,	// (0x0002594d) cell_call6_btn_pane_ParamLimits

0xeba2,	// (0x0002594d) cell_call6_btn_pane

0x1743,	// (0x000184ee) bg_popup_call2_in_pane_cp03

0x5d81,	// (0x0001cb2c) popup_call6_1st_window_g1

0x5d89,	// (0x0001cb34) popup_call6_1st_window_g2

0x5d91,	// (0x0001cb3c) popup_call6_1st_window_g3

0x0002,

0xfec4,	// (0x00026c6f) popup_call6_1st_window_g

0x5d99,	// (0x0001cb44) popup_call6_1st_window_t1

0x5da8,	// (0x0001cb53) popup_call6_1st_window_t2

0x5db8,	// (0x0001cb63) popup_call6_1st_window_t3

0x0002,

0xfecb,	// (0x00026c76) popup_call6_1st_window_t

0x1743,	// (0x000184ee) bg_popup_call2_in_pane_cp04

0x5d81,	// (0x0001cb2c) popup_call6_2nd_window_g1

0x5d89,	// (0x0001cb34) popup_call6_2nd_window_g2

0x5d91,	// (0x0001cb3c) popup_call6_2nd_window_g3

0x0002,

0xfec4,	// (0x00026c6f) popup_call6_2nd_window_g

0x5d99,	// (0x0001cb44) popup_call6_2nd_window_t1

0x022d,	// (0x00016fd8) bg_button_pane_cp15

0x5dc8,	// (0x0001cb73) cell_call6_btn_pane_g1

0x5dd1,	// (0x0001cb7c) cell_call6_btn_pane_t1

0xebb1,	// (0x0002595c) listscroll_wgtman_pane_ParamLimits

0xebb1,	// (0x0002595c) listscroll_wgtman_pane

0xebcf,	// (0x0002597a) wgtman_btn_pane_ParamLimits

0xebcf,	// (0x0002597a) wgtman_btn_pane

0x1609,	// (0x000183b4) aid_scroll_copy1

0x5de0,	// (0x0001cb8b) list_wgtman_pane

0xec04,	// (0x000259af) wgtman_btn_pane_g1_ParamLimits

0xec04,	// (0x000259af) wgtman_btn_pane_g1

0xec2c,	// (0x000259d7) wgtman_btn_pane_t1_ParamLimits

0xec2c,	// (0x000259d7) wgtman_btn_pane_t1

0x5dea,	// (0x0001cb95) wgtman_btn_pane_t2_ParamLimits

0x5dea,	// (0x0001cb95) wgtman_btn_pane_t2

0x0001,

0xfed2,	// (0x00026c7d) wgtman_btn_pane_t_ParamLimits

0xfed2,	// (0x00026c7d) wgtman_btn_pane_t

0x5e01,	// (0x0001cbac) listrow_wgtman_pane_ParamLimits

0x5e01,	// (0x0001cbac) listrow_wgtman_pane

0x5e15,	// (0x0001cbc0) listrow_wgtman_pane_g1

0xec63,	// (0x00025a0e) listrow_wgtman_pane_g2

0x0001,

0xfed7,	// (0x00026c82) listrow_wgtman_pane_g

0x5e1e,	// (0x0001cbc9) listrow_wgtman_pane_t1

0x5e2c,	// (0x0001cbd7) listrow_wgtman_pane_t2

0x0001,

0xfedc,	// (0x00026c87) listrow_wgtman_pane_t

0x5e3a,	// (0x0001cbe5) wait_bar_pane_cp09

0x5e42,	// (0x0001cbed) main_calllock_btn_pane

0x5e4c,	// (0x0001cbf7) main_calllock_pane_g1

0x022d,	// (0x00016fd8) bg_button_pane_cp17

0x5e58,	// (0x0001cc03) main_calllock_btn_pane_g1

0x5e61,	// (0x0001cc0c) main_calllock_btn_pane_t1

0x022d,	// (0x00016fd8) main_dialer3_pane

0x022d,	// (0x00016fd8) main_fmrd2_pane

0x30e5,	// (0x00019e90) main_fs_bigclock_unlock_btn_pane_g1

0x5e78,	// (0x0001cc23) main_fs_bigclock_unlock_btn_pane_t1

0xec6d,	// (0x00025a18) area_fmrd2_info_pane_ParamLimits

0xec6d,	// (0x00025a18) area_fmrd2_info_pane

0xec7b,	// (0x00025a26) area_fmrd2_visual_pane_ParamLimits

0xec7b,	// (0x00025a26) area_fmrd2_visual_pane

0xec89,	// (0x00025a34) fmrd2_indi_pane_ParamLimits

0xec89,	// (0x00025a34) fmrd2_indi_pane

0xec96,	// (0x00025a41) area_fmrd2_visual_pane_g1

0xec9e,	// (0x00025a49) area_fmrd2_visual_pane_t1

0xecae,	// (0x00025a59) area_fmrd2_visual_pane_t2

0xecbe,	// (0x00025a69) area_fmrd2_visual_pane_t3

0x0002,

0xfee6,	// (0x00026c91) area_fmrd2_visual_pane_t

0xecce,	// (0x00025a79) area_fmrd2_info_pane_g1

0xecd6,	// (0x00025a81) area_fmrd2_info_pane_t1

0xece6,	// (0x00025a91) area_fmrd2_info_pane_t2

0xecf6,	// (0x00025aa1) area_fmrd2_info_pane_t3

0xed06,	// (0x00025ab1) area_fmrd2_info_pane_t4

0x0003,

0xfeed,	// (0x00026c98) area_fmrd2_info_pane_t

0xed16,	// (0x00025ac1) fmrd2_indi_pane_t1

0xed26,	// (0x00025ad1) fmrd2_indi_pane_t2

0xed36,	// (0x00025ae1) fmrd2_indi_pane_t3

0x0002,

0xfef6,	// (0x00026ca1) fmrd2_indi_pane_t

0x4f6a,	// (0x0001bd15) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x4f6a,	// (0x0001bd15) list_single_fs_bigclock_indicator_pane_g5

0x5010,	// (0x0001bdbb) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x5010,	// (0x0001bdbb) list_single_fs_bigclock_indicator_pane_t5

0xe5bc,	// (0x00025367) aid_cell_bcale_month_pane_ParamLimits

0xe5bc,	// (0x00025367) aid_cell_bcale_month_pane

0xe5c8,	// (0x00025373) bcale_month_pane_ParamLimits

0xe5c8,	// (0x00025373) bcale_month_pane

0xe5d6,	// (0x00025381) bcale_preview_pane_ParamLimits

0xe5d6,	// (0x00025381) bcale_preview_pane

0x5b75,	// (0x0001c920) list_single_fs_bigclock_pane_t1_ParamLimits

0x5b8f,	// (0x0001c93a) list_single_fs_bigclock_pane_t2_ParamLimits

0x5b8f,	// (0x0001c93a) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7d,	// (0x00026c28) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x00026c28) list_single_fs_bigclock_pane_t

0x5e70,	// (0x0001cc1b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee1,	// (0x00026c8c) main_fs_bigclock_unlock_btn_pane_g

0xed46,	// (0x00025af1) aid_dia3_key_size_ParamLimits

0xed46,	// (0x00025af1) aid_dia3_key_size

0xed52,	// (0x00025afd) aid_dia3_listrow_size_ParamLimits

0xed52,	// (0x00025afd) aid_dia3_listrow_size

0xed60,	// (0x00025b0b) dia3_keypad_fun_pane_ParamLimits

0xed60,	// (0x00025b0b) dia3_keypad_fun_pane

0xed70,	// (0x00025b1b) dia3_keypad_num_pane_ParamLimits

0xed70,	// (0x00025b1b) dia3_keypad_num_pane

0xed80,	// (0x00025b2b) dia3_listscroll_pane_ParamLimits

0xed80,	// (0x00025b2b) dia3_listscroll_pane

0xed90,	// (0x00025b3b) dia3_numentry_pane_ParamLimits

0xed90,	// (0x00025b3b) dia3_numentry_pane

0x5e86,	// (0x0001cc31) dia3_list_pane

0x5e91,	// (0x0001cc3c) scroll_pane_cp12

0x022d,	// (0x00016fd8) bg_dia3_numentry_pane

0x5e9c,	// (0x0001cc47) dia3_numentry_pane_t1

0xeda0,	// (0x00025b4b) cell_dia3_key_num_pane

0xeda8,	// (0x00025b53) cell_dia3_key0_fun_pane_ParamLimits

0xeda8,	// (0x00025b53) cell_dia3_key0_fun_pane

0xedb5,	// (0x00025b60) cell_dia3_key1_fun_pane_ParamLimits

0xedb5,	// (0x00025b60) cell_dia3_key1_fun_pane

0xedc2,	// (0x00025b6d) dia3_listrow_pane

0x4c62,	// (0x0001ba0d) bg_dia3_numentry_pane_g1

0x022d,	// (0x00016fd8) bg_button_pane_cp21

0x5eab,	// (0x0001cc56) cell_dia3_key_num_pane_t1

0x5eb9,	// (0x0001cc64) cell_dia3_key_num_pane_t2

0x5ec8,	// (0x0001cc73) cell_dia3_key_num_pane_t3

0x5ed7,	// (0x0001cc82) cell_dia3_key_num_pane_t4

0x0003,

0xfefd,	// (0x00026ca8) cell_dia3_key_num_pane_t

0x022d,	// (0x00016fd8) bg_button_pane_cp19

0xedcf,	// (0x00025b7a) cell_dia3_key0_fun_pane_g1

0x022d,	// (0x00016fd8) bg_button_pane_cp20

0xedd7,	// (0x00025b82) cell_dia3_key1_fun_pane_g1

0xeddf,	// (0x00025b8a) area_left_week_number_pane

0xede8,	// (0x00025b93) area_top_day_name_pane

0xedf1,	// (0x00025b9c) frame_month_view_pane

0xedfb,	// (0x00025ba6) grid_month_view_pane

0xee05,	// (0x00025bb0) cell_top_day_name_pane_ParamLimits

0xee05,	// (0x00025bb0) cell_top_day_name_pane

0xee21,	// (0x00025bcc) cell_area_left_week_number_pane_ParamLimits

0xee21,	// (0x00025bcc) cell_area_left_week_number_pane

0xee35,	// (0x00025be0) cell_month_view_pane_ParamLimits

0xee35,	// (0x00025be0) cell_month_view_pane

0x5ee6,	// (0x0001cc91) frm_month_g1

0xee54,	// (0x00025bff) frm_month_g2

0xee5e,	// (0x00025c09) frm_month_g3

0xee68,	// (0x00025c13) frm_month_g4

0xee72,	// (0x00025c1d) frm_month_g5

0xee7c,	// (0x00025c27) frm_month_g6

0xee86,	// (0x00025c31) frm_month_g7

0x5eef,	// (0x0001cc9a) frm_month_g8

0xee90,	// (0x00025c3b) frm_month_g9

0xee99,	// (0x00025c44) frm_month_g10

0xeea2,	// (0x00025c4d) frm_month_g11

0xeeab,	// (0x00025c56) frm_month_g12

0xeeb4,	// (0x00025c5f) frm_month_g13

0xeebf,	// (0x00025c6a) frm_month_g14

0xeeca,	// (0x00025c75) frm_month_g15

0xeed5,	// (0x00025c80) frm_month_g16

0x000f,

0xff06,	// (0x00026cb1) frm_month_g

0xeee0,	// (0x00025c8b) cell_top_day_name_pane_t1

0xeeef,	// (0x00025c9a) cell_area_left_week_number_pane_g1

0xeee0,	// (0x00025c8b) cell_area_left_week_number_pane_t1

0x30e5,	// (0x00019e90) cell_month_view_pane_g1

0xeef7,	// (0x00025ca2) cell_month_view_pane_t1

0x022d,	// (0x00016fd8) main_fps_pane

0x5282,	// (0x0001c02d) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x5282,	// (0x0001c02d) cmail_ddmenu_btn02_pane_cp1

0x529e,	// (0x0001c049) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x529e,	// (0x0001c049) cmail_ddmenu_btn02_pane_cp2

0xe879,	// (0x00025624) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe879,	// (0x00025624) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2e,	// (0x00026bd9) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2e,	// (0x00026bd9) cmail_ddmenu_btn02_pane_g

0xe897,	// (0x00025642) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe897,	// (0x00025642) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe33,	// (0x00026bde) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe33,	// (0x00026bde) cmail_ddmenu_btn02_pane_t

0xef06,	// (0x00025cb1) fps_text_pane_ParamLimits

0xef06,	// (0x00025cb1) fps_text_pane

0xef13,	// (0x00025cbe) main_fps_pane_g1_ParamLimits

0xef13,	// (0x00025cbe) main_fps_pane_g1

0xef1f,	// (0x00025cca) wait_bar_pane_cp010_ParamLimits

0xef1f,	// (0x00025cca) wait_bar_pane_cp010

0xef2b,	// (0x00025cd6) fps_text_pane_t1_ParamLimits

0xef2b,	// (0x00025cd6) fps_text_pane_t1

0xc5f9,	// (0x000233a4) cam4_image_uncrop_pane_g1

0xc602,	// (0x000233ad) cam4_image_uncrop_pane_g2

0xc60b,	// (0x000233b6) cam4_image_uncrop_pane_g3

0xc614,	// (0x000233bf) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x000266b8) cam4_image_uncrop_pane_g

0xedc2,	// (0x00025b6d) dia3_listrow_pane_ParamLimits

0x022d,	// (0x00016fd8) main_phob2_pane

0xe3f9,	// (0x000251a4) cell_tport_appsw_pane_cp02_ParamLimits

0xe3f9,	// (0x000251a4) cell_tport_appsw_pane_cp02

0xe408,	// (0x000251b3) cell_tport_appsw_pane_cp03_ParamLimits

0xe408,	// (0x000251b3) cell_tport_appsw_pane_cp03

0x022d,	// (0x00016fd8) phob2_contact_card_pane

0x022d,	// (0x00016fd8) phob2_listscroll_pane

0x5ef8,	// (0x0001cca3) phob2_list_pane

0x5f00,	// (0x0001ccab) scroll_pane_cp034

0xef44,	// (0x00025cef) phob2_cc_data_pane_ParamLimits

0xef44,	// (0x00025cef) phob2_cc_data_pane

0xef60,	// (0x00025d0b) phob2_cc_listscroll_pane_ParamLimits

0xef60,	// (0x00025d0b) phob2_cc_listscroll_pane

0xef7c,	// (0x00025d27) list_double_large_graphic_phob2_pane_ParamLimits

0xef7c,	// (0x00025d27) list_double_large_graphic_phob2_pane

0xef96,	// (0x00025d41) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xef96,	// (0x00025d41) list_double_large_graphic_phob2_pane_g1

0xefa3,	// (0x00025d4e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xefa3,	// (0x00025d4e) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff27,	// (0x00026cd2) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff27,	// (0x00026cd2) list_double_large_graphic_phob2_pane_g

0xefaf,	// (0x00025d5a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xefaf,	// (0x00025d5a) list_double_large_graphic_phob2_pane_t1

0xefc4,	// (0x00025d6f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xefc4,	// (0x00025d6f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2c,	// (0x00026cd7) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2c,	// (0x00026cd7) list_double_large_graphic_phob2_pane_t

0x022d,	// (0x00016fd8) list_highlight_pane_cp024

0x5f08,	// (0x0001ccb3) phob2_cc_button_pane

0xefd6,	// (0x00025d81) phob2_cc_data_pane_g1_ParamLimits

0xefd6,	// (0x00025d81) phob2_cc_data_pane_g1

0xefe2,	// (0x00025d8d) phob2_cc_data_pane_g2_ParamLimits

0xefe2,	// (0x00025d8d) phob2_cc_data_pane_g2

0x0001,

0xff31,	// (0x00026cdc) phob2_cc_data_pane_g_ParamLimits

0xff31,	// (0x00026cdc) phob2_cc_data_pane_g

0xefee,	// (0x00025d99) phob2_cc_data_pane_t1_ParamLimits

0xefee,	// (0x00025d99) phob2_cc_data_pane_t1

0xf000,	// (0x00025dab) phob2_cc_data_pane_t2_ParamLimits

0xf000,	// (0x00025dab) phob2_cc_data_pane_t2

0xf012,	// (0x00025dbd) phob2_cc_data_pane_t3_ParamLimits

0xf012,	// (0x00025dbd) phob2_cc_data_pane_t3

0x0002,

0xff36,	// (0x00026ce1) phob2_cc_data_pane_t_ParamLimits

0xff36,	// (0x00026ce1) phob2_cc_data_pane_t

0x5f10,	// (0x0001ccbb) phob2_cc_list_pane_ParamLimits

0x5f10,	// (0x0001ccbb) phob2_cc_list_pane

0x421b,	// (0x0001afc6) scroll_pane_cp035_ParamLimits

0x421b,	// (0x0001afc6) scroll_pane_cp035

0x029e,	// (0x00017049) bg_button_pane_cp033

0x5f1c,	// (0x0001ccc7) phob2_cc_button_pane_g1

0x5f28,	// (0x0001ccd3) phob2_cc_button_pane_t1

0x5f3d,	// (0x0001cce8) phob2_cc_button_pane_t2

0x0001,

0xff3d,	// (0x00026ce8) phob2_cc_button_pane_t

0xf024,	// (0x00025dcf) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xf024,	// (0x00025dcf) list_double_large_graphic_phob2_cc_pane

0xf043,	// (0x00025dee) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xf043,	// (0x00025dee) list_double_large_graphic_phob2_cc_pane_g1

0xf054,	// (0x00025dff) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xf054,	// (0x00025dff) list_double_large_graphic_phob2_cc_pane_g2

0xf063,	// (0x00025e0e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xf063,	// (0x00025e0e) list_double_large_graphic_phob2_cc_pane_g3

0xf072,	// (0x00025e1d) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xf072,	// (0x00025e1d) list_double_large_graphic_phob2_cc_pane_g4

0xf083,	// (0x00025e2e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xf083,	// (0x00025e2e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff42,	// (0x00026ced) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff42,	// (0x00026ced) list_double_large_graphic_phob2_cc_pane_g

0xf092,	// (0x00025e3d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xf092,	// (0x00025e3d) list_double_large_graphic_phob2_cc_pane_t1

0xf0bb,	// (0x00025e66) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xf0bb,	// (0x00025e66) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4d,	// (0x00026cf8) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4d,	// (0x00026cf8) list_double_large_graphic_phob2_cc_pane_t

0x5f4f,	// (0x0001ccfa) list_highlight_pane_cp025_ParamLimits

0x5f4f,	// (0x0001ccfa) list_highlight_pane_cp025

0x029e,	// (0x00017049) bg_button_pane_cp033_ParamLimits

0x5f1c,	// (0x0001ccc7) phob2_cc_button_pane_g1_ParamLimits

0x5f28,	// (0x0001ccd3) phob2_cc_button_pane_t1_ParamLimits

0x5f3d,	// (0x0001cce8) phob2_cc_button_pane_t2_ParamLimits

0xff3d,	// (0x00026ce8) phob2_cc_button_pane_t_ParamLimits

0x855b,	// (0x0001f306) popup_wgtman_window

0x3fb3,	// (0x0001ad5e) scroll_pane_cp038

0xebec,	// (0x00025997) wgtman_btn_pane_cp_01_ParamLimits

0xebec,	// (0x00025997) wgtman_btn_pane_cp_01

0x5f5d,	// (0x0001cd08) wgtman_content_pane

0x5f66,	// (0x0001cd11) wgtman_heading_pane

0x022d,	// (0x00016fd8) bg_heading_pane_cp02

0x5f6f,	// (0x0001cd1a) wgtman_heading_pane_g1

0x5f77,	// (0x0001cd22) wgtman_heading_pane_t1

0x5f85,	// (0x0001cd30) scroll_pane_cp036

0x5f8d,	// (0x0001cd38) wgtman_list_pane

0x5c04,	// (0x0001c9af) wgtman_list_pane_t1_ParamLimits

0x5c04,	// (0x0001c9af) wgtman_list_pane_t1

0x7b1f,	// (0x0001e8ca) cam4_grid_pane

0xcd58,	// (0x00023b03) bg_button_pane_cp015_ParamLimits

0xcd6a,	// (0x00023b15) bg_button_pane_cp016_ParamLimits

0xcd7d,	// (0x00023b28) bg_button_pane_cp017_ParamLimits

0xcdd3,	// (0x00023b7e) popup_vitu2_query_window_g3_ParamLimits

0xcdd3,	// (0x00023b7e) popup_vitu2_query_window_g3

0xce92,	// (0x00023c3d) popup_vitu2_query_window_t6_ParamLimits

0xce92,	// (0x00023c3d) popup_vitu2_query_window_t6

0xcebd,	// (0x00023c68) popup_vitu2_query_window_t7_ParamLimits

0xcebd,	// (0x00023c68) popup_vitu2_query_window_t7

0x5bf0,	// (0x0001c99b) cam4_grid_pane_g1

0x5bf9,	// (0x0001c9a4) cam4_grid_pane_g2

0x5f95,	// (0x0001cd40) cam4_grid_pane_g3

0x5f9e,	// (0x0001cd49) cam4_grid_pane_g4

0x0003,

0xff52,	// (0x00026cfd) cam4_grid_pane_g

0x8fe5,	// (0x0001fd90) aid_placing_vt_slider_lsc_ParamLimits

0x9318,	// (0x000200c3) vidtel_button_pane_ParamLimits

0x9318,	// (0x000200c3) vidtel_button_pane

0x022d,	// (0x00016fd8) bg_button_pane_cp034

0xf0e4,	// (0x00025e8f) vidtel_button_pane_g1

0x5fa9,	// (0x0001cd54) vidtel_button_pane_t1

0x40fe,	// (0x0001aea9) aid_size_vtel_slider_touch

0x421b,	// (0x0001afc6) scroll_pane_cp039

0x4ca0,	// (0x0001ba4b) ncim_query_button_pane_cp01_ParamLimits

0x4cbf,	// (0x0001ba6a) ncimui_query_pane_g1_ParamLimits

0x029e,	// (0x00017049) input_focus_pane_cp012_ParamLimits

0x4ce4,	// (0x0001ba8f) ncim_query_entry_pane_t1_ParamLimits

0x421b,	// (0x0001afc6) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
