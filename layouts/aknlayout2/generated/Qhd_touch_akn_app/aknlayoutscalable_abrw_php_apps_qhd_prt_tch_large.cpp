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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0007a605 };

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
0x575a,	// (0x0007fd5f) Screen

0x5766,	// (0x0007fd6b) application_window

0x57a6,	// (0x0007fdab) area_bottom_pane_ParamLimits

0x57a6,	// (0x0007fdab) area_bottom_pane

0x57db,	// (0x0007fde0) area_top_pane_ParamLimits

0x57db,	// (0x0007fde0) area_top_pane

0xdd1e,	// (0x00088323) call_video_uplink_pane_ParamLimits

0xdd1e,	// (0x00088323) call_video_uplink_pane

0x5869,	// (0x0007fe6e) main_pane_ParamLimits

0x5869,	// (0x0007fe6e) main_pane

0x23f0,	// (0x0007c9f5) context_pane

0x87c0,	// (0x00082dc5) navi_pane

0x87e0,	// (0x00082de5) popup_cale_events_window_ParamLimits

0x87e0,	// (0x00082de5) popup_cale_events_window

0x2403,	// (0x0007ca08) popup_mup_playback_window

0x87f8,	// (0x00082dfd) signal_pane

0xe481,	// (0x00088a86) main_browser_pane

0x0f55,	// (0x0007b55a) main_burst_pane

0x868a,	// (0x00082c8f) main_calc_pane

0x0f55,	// (0x0007b55a) main_cale_day_pane

0xe481,	// (0x00088a86) main_cale_month_pane

0x0f55,	// (0x0007b55a) main_cale_week_pane

0x0f55,	// (0x0007b55a) main_call_pane

0xe14f,	// (0x00088754) main_call_poc_pane

0x0f55,	// (0x0007b55a) main_camera_pane

0x0f55,	// (0x0007b55a) main_chi_dic_pane

0x0dda,	// (0x0007b3df) main_clock_pane

0xe14f,	// (0x00088754) main_fmradio_pane

0x0f55,	// (0x0007b55a) main_graph_messa_pane

0xe14f,	// (0x00088754) main_help_pane

0xe481,	// (0x00088a86) main_im_pane

0xe3aa,	// (0x000889af) main_image_pane_ParamLimits

0xe3aa,	// (0x000889af) main_image_pane

0xe14f,	// (0x00088754) main_location2_pane

0x0f55,	// (0x0007b55a) main_location_pane

0xe14f,	// (0x00088754) main_messa_pane

0xe14f,	// (0x00088754) main_mp2_pane

0x0f55,	// (0x0007b55a) main_mp_pane

0xe14f,	// (0x00088754) main_msg_pane

0xe14f,	// (0x00088754) main_mup_eq_pane

0xe14f,	// (0x00088754) main_mup_pane

0x0f55,	// (0x0007b55a) main_notes_pane

0xe14f,	// (0x00088754) main_pec_pane

0xe14f,	// (0x00088754) main_phob_pane

0xe14f,	// (0x00088754) main_pinb_pane

0xe14f,	// (0x00088754) main_postcard_pane

0xe14f,	// (0x00088754) main_qdial_pane

0x0f55,	// (0x0007b55a) main_skin_pane

0xe14f,	// (0x00088754) main_smil2_pane

0x0f55,	// (0x0007b55a) main_smil_pane

0x0f55,	// (0x0007b55a) main_video_pane

0x0f55,	// (0x0007b55a) main_video_tele_pane

0xe3aa,	// (0x000889af) main_viewer_pane_ParamLimits

0xe3aa,	// (0x000889af) main_viewer_pane

0x0f55,	// (0x0007b55a) main_vorec_pane

0x86c0,	// (0x00082cc5) popup_blid_sat_info_window_ParamLimits

0x86c0,	// (0x00082cc5) popup_blid_sat_info_window

0x86d6,	// (0x00082cdb) popup_dyc_status_message_window_ParamLimits

0x86d6,	// (0x00082cdb) popup_dyc_status_message_window

0x86e6,	// (0x00082ceb) popup_grid_large_graphic_window_ParamLimits

0x86e6,	// (0x00082ceb) popup_grid_large_graphic_window

0x875c,	// (0x00082d61) popup_loc_request_window_ParamLimits

0x875c,	// (0x00082d61) popup_loc_request_window

0x8798,	// (0x00082d9d) popup_wml_address_window_ParamLimits

0x8798,	// (0x00082d9d) popup_wml_address_window

0x8562,	// (0x00082b67) call_muted_g1

0x8224,	// (0x00082829) popup_call_audio_conf_window_ParamLimits

0x8224,	// (0x00082829) popup_call_audio_conf_window

0x8572,	// (0x00082b77) popup_call_audio_first_window_ParamLimits

0x8572,	// (0x00082b77) popup_call_audio_first_window

0x85b2,	// (0x00082bb7) popup_call_audio_in_window_ParamLimits

0x85b2,	// (0x00082bb7) popup_call_audio_in_window

0x85d6,	// (0x00082bdb) popup_call_audio_out_window_ParamLimits

0x85d6,	// (0x00082bdb) popup_call_audio_out_window

0x85f8,	// (0x00082bfd) popup_call_audio_second_window_ParamLimits

0x85f8,	// (0x00082bfd) popup_call_audio_second_window

0x8628,	// (0x00082c2d) popup_call_audio_wait_window_ParamLimits

0x8628,	// (0x00082c2d) popup_call_audio_wait_window

0x8649,	// (0x00082c4e) popup_number_entry_window_ParamLimits

0x8649,	// (0x00082c4e) popup_number_entry_window

0xdd3c,	// (0x00088341) bg_popup_call_pane_cp05_ParamLimits

0xdd3c,	// (0x00088341) bg_popup_call_pane_cp05

0xdd5c,	// (0x00088361) popup_number_entry_window_t1

0xdd6f,	// (0x00088374) popup_number_entry_window_t2

0xdd81,	// (0x00088386) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x00089700) popup_number_entry_window_t

0xdd93,	// (0x00088398) text_title_cp2

0xdda6,	// (0x000883ab) bg_popup_call_pane_cp_ParamLimits

0xdda6,	// (0x000883ab) bg_popup_call_pane_cp

0xddb4,	// (0x000883b9) call_thumbnail_pane

0xddbc,	// (0x000883c1) popup_call_audio_in_window_g1_ParamLimits

0xddbc,	// (0x000883c1) popup_call_audio_in_window_g1

0xddc8,	// (0x000883cd) popup_call_audio_in_window_g2_ParamLimits

0xddc8,	// (0x000883cd) popup_call_audio_in_window_g2

0xddd4,	// (0x000883d9) popup_call_audio_in_window_g3_ParamLimits

0xddd4,	// (0x000883d9) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x00089709) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x00089709) popup_call_audio_in_window_g

0xdde0,	// (0x000883e5) popup_call_audio_in_window_t1_ParamLimits

0xdde0,	// (0x000883e5) popup_call_audio_in_window_t1

0xddfc,	// (0x00088401) popup_call_audio_in_window_t2_ParamLimits

0xddfc,	// (0x00088401) popup_call_audio_in_window_t2

0xde18,	// (0x0008841d) popup_call_audio_in_window_t3_ParamLimits

0xde18,	// (0x0008841d) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x00089710) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x00089710) popup_call_audio_in_window_t

0xdda6,	// (0x000883ab) bg_popup_call_pane_cp01_ParamLimits

0xdda6,	// (0x000883ab) bg_popup_call_pane_cp01

0xddb4,	// (0x000883b9) call_thumbnail_pane_cp02

0xde2b,	// (0x00088430) call_type_pane_cp022

0xde33,	// (0x00088438) popup_call_audio_out_window_g1_ParamLimits

0xde33,	// (0x00088438) popup_call_audio_out_window_g1

0xde45,	// (0x0008844a) popup_call_audio_out_window_g2_ParamLimits

0xde45,	// (0x0008844a) popup_call_audio_out_window_g2

0xde51,	// (0x00088456) popup_call_audio_out_window_g3_ParamLimits

0xde51,	// (0x00088456) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x00089717) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x00089717) popup_call_audio_out_window_g

0xde63,	// (0x00088468) popup_call_audio_out_window_t1_ParamLimits

0xde63,	// (0x00088468) popup_call_audio_out_window_t1

0xde7b,	// (0x00088480) popup_call_audio_out_window_t2_ParamLimits

0xde7b,	// (0x00088480) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x0008971e) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x0008971e) popup_call_audio_out_window_t

0xde90,	// (0x00088495) bg_popup_call_pane_ParamLimits

0xde90,	// (0x00088495) bg_popup_call_pane

0x5a5b,	// (0x00080060) call_thumbnail_pane_cp_ParamLimits

0x5a5b,	// (0x00080060) call_thumbnail_pane_cp

0xdf14,	// (0x00088519) call_type_pane_cp01_ParamLimits

0xdf14,	// (0x00088519) call_type_pane_cp01

0xdf58,	// (0x0008855d) popup_call_audio_first_window_g1_ParamLimits

0xdf58,	// (0x0008855d) popup_call_audio_first_window_g1

0xdfa4,	// (0x000885a9) popup_call_audio_first_window_g2_ParamLimits

0xdfa4,	// (0x000885a9) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x00089723) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x00089723) popup_call_audio_first_window_g

0xdfe8,	// (0x000885ed) popup_call_audio_first_window_t1_ParamLimits

0xdfe8,	// (0x000885ed) popup_call_audio_first_window_t1

0xe094,	// (0x00088699) popup_call_audio_first_window_t4_ParamLimits

0xe094,	// (0x00088699) popup_call_audio_first_window_t4

0xe120,	// (0x00088725) popup_call_audio_first_window_t5_ParamLimits

0xe120,	// (0x00088725) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x00089728) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x00089728) popup_call_audio_first_window_t

0xe14f,	// (0x00088754) bg_popup_call_pane_cp02

0xe159,	// (0x0008875e) call_type_pane_cp023

0xe161,	// (0x00088766) popup_call_audio_wait_window_g1

0xe169,	// (0x0008876e) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0008972f) popup_call_audio_wait_window_g

0xe171,	// (0x00088776) popup_call_audio_wait_window_t3

0xe17f,	// (0x00088784) bg_popup_call_pane_cp03_ParamLimits

0xe17f,	// (0x00088784) bg_popup_call_pane_cp03

0xe1df,	// (0x000887e4) call_thumbnail_pane_cp011_ParamLimits

0xe1df,	// (0x000887e4) call_thumbnail_pane_cp011

0xe1eb,	// (0x000887f0) call_type_pane_cp034_ParamLimits

0xe1eb,	// (0x000887f0) call_type_pane_cp034

0xe227,	// (0x0008882c) popup_call_audio_second_window_g1_ParamLimits

0xe227,	// (0x0008882c) popup_call_audio_second_window_g1

0xe263,	// (0x00088868) popup_call_audio_second_window_g2_ParamLimits

0xe263,	// (0x00088868) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x00089734) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x00089734) popup_call_audio_second_window_g

0xe29f,	// (0x000888a4) popup_call_audio_second_window_t1_ParamLimits

0xe29f,	// (0x000888a4) popup_call_audio_second_window_t1

0xe320,	// (0x00088925) popup_call_audio_second_window_t2_ParamLimits

0xe320,	// (0x00088925) popup_call_audio_second_window_t2

0xe356,	// (0x0008895b) popup_call_audio_second_window_t3_ParamLimits

0xe356,	// (0x0008895b) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x00089739) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x00089739) popup_call_audio_second_window_t

0xe14f,	// (0x00088754) bg_popup_call_pane_cp04

0xe38c,	// (0x00088991) list_conf_pane

0xe394,	// (0x00088999) popup_call_audio_conf_window_t1

0xe3a2,	// (0x000889a7) call_thumbnail_pane_g1

0xe3aa,	// (0x000889af) bg_pinb_pane_ParamLimits

0xe3aa,	// (0x000889af) bg_pinb_pane

0xe3b8,	// (0x000889bd) find_pinb_pane

0xe3c1,	// (0x000889c6) listscroll_pinb_pane_ParamLimits

0xe3c1,	// (0x000889c6) listscroll_pinb_pane

0xe3d0,	// (0x000889d5) pinb_bg_pane_g1

0x5a7f,	// (0x00080084) pinb_bg_pane_g2

0x5a8b,	// (0x00080090) pinb_bg_pane_g3

0x5a97,	// (0x0008009c) pinb_bg_pane_g4

0x5aa3,	// (0x000800a8) pinb_bg_pane_g5

0x5aaf,	// (0x000800b4) pinb_bg_pane_g6

0x5aba,	// (0x000800bf) pinb_bg_pane_g7

0x5ac5,	// (0x000800ca) pinb_bg_pane_g8

0x5ad0,	// (0x000800d5) pinb_bg_pane_g9

0x5ada,	// (0x000800df) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x00089740) pinb_bg_pane_g

0x5af7,	// (0x000800fc) grid_pinb_pane

0x5b02,	// (0x00080107) list_pinb_pane

0x5b0d,	// (0x00080112) scroll_pane_cp01_ParamLimits

0x5b0d,	// (0x00080112) scroll_pane_cp01

0xe3da,	// (0x000889df) find_pinb_pane_g1_ParamLimits

0xe3da,	// (0x000889df) find_pinb_pane_g1

0xe3f2,	// (0x000889f7) find_pinb_pane_t1

0xe404,	// (0x00088a09) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0008975a) find_pinb_pane_t

0xe419,	// (0x00088a1e) input_focus_pane_cp01_ParamLimits

0xe419,	// (0x00088a1e) input_focus_pane_cp01

0x5b1f,	// (0x00080124) cell_pinb_pane_ParamLimits

0x5b1f,	// (0x00080124) cell_pinb_pane

0x5b44,	// (0x00080149) cell_pinb_pane_g1_ParamLimits

0x5b44,	// (0x00080149) cell_pinb_pane_g1

0x5b59,	// (0x0008015e) cell_pinb_pane_g2_ParamLimits

0x5b59,	// (0x0008015e) cell_pinb_pane_g2

0xe425,	// (0x00088a2a) cell_pinb_pane_g3_ParamLimits

0xe425,	// (0x00088a2a) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x0008975f) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x0008975f) cell_pinb_pane_g

0xe14f,	// (0x00088754) grid_highlight_pane_cp01

0x5b65,	// (0x0008016a) list_pinb_item_pane_ParamLimits

0x5b65,	// (0x0008016a) list_pinb_item_pane

0xe14f,	// (0x00088754) list_highlight_pane_cp02

0x5b85,	// (0x0008018a) list_pinb_item_pane_g1_ParamLimits

0x5b85,	// (0x0008018a) list_pinb_item_pane_g1

0xe431,	// (0x00088a36) list_pinb_item_pane_g2_ParamLimits

0xe431,	// (0x00088a36) list_pinb_item_pane_g2

0x5b92,	// (0x00080197) list_pinb_item_pane_g3_ParamLimits

0x5b92,	// (0x00080197) list_pinb_item_pane_g3

0x5ba3,	// (0x000801a8) list_pinb_item_pane_g4_ParamLimits

0x5ba3,	// (0x000801a8) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x00089766) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x00089766) list_pinb_item_pane_g

0x5baf,	// (0x000801b4) list_pinb_item_pane_t1_ParamLimits

0x5baf,	// (0x000801b4) list_pinb_item_pane_t1

0x5be0,	// (0x000801e5) calc_display_pane

0x5bfe,	// (0x00080203) calc_paper_pane

0x5c1a,	// (0x0008021f) grid_calc_pane

0xe14f,	// (0x00088754) bg_list_pane_cp01

0x5c44,	// (0x00080249) clock_g1

0x5c4c,	// (0x00080251) clock_g2

0x0001,

0xf16a,	// (0x0008976f) clock_g

0x5c56,	// (0x0008025b) clock_t1_ParamLimits

0x5c56,	// (0x0008025b) clock_t1

0x5c6b,	// (0x00080270) clock_t2_ParamLimits

0x5c6b,	// (0x00080270) clock_t2

0x5c7d,	// (0x00080282) clock_t3_ParamLimits

0x5c7d,	// (0x00080282) clock_t3

0x5c8f,	// (0x00080294) clock_t4_ParamLimits

0x5c8f,	// (0x00080294) clock_t4

0x5ca1,	// (0x000802a6) clock_t5_ParamLimits

0x5ca1,	// (0x000802a6) clock_t5

0x5cb6,	// (0x000802bb) clock_t6_ParamLimits

0x5cb6,	// (0x000802bb) clock_t6

0x5cc8,	// (0x000802cd) clock_t7_ParamLimits

0x5cc8,	// (0x000802cd) clock_t7

0x5cda,	// (0x000802df) clock_t8_ParamLimits

0x5cda,	// (0x000802df) clock_t8

0x5cf0,	// (0x000802f5) clock_t9_ParamLimits

0x5cf0,	// (0x000802f5) clock_t9

0x0008,

0xf16f,	// (0x00089774) clock_t_ParamLimits

0xf16f,	// (0x00089774) clock_t

0xe43d,	// (0x00088a42) popup_clock_analogue_window_cp02

0xe43d,	// (0x00088a42) popup_clock_digital_window_cp01

0xe445,	// (0x00088a4a) listscroll_help_pane

0xe14f,	// (0x00088754) phob_pre_status_pane

0xe44f,	// (0x00088a54) grid_qdial_pane

0xe14f,	// (0x00088754) listscroll_mce_pane

0xe459,	// (0x00088a5e) bg_notes_pane

0xe463,	// (0x00088a68) list_notes_pane

0x5d06,	// (0x0008030b) scroll_pane_cp06

0xe46d,	// (0x00088a72) bg_calc_paper_pane

0x5d1b,	// (0x00080320) list_calc_pane

0xe481,	// (0x00088a86) bg_calc_display_pane

0x5d35,	// (0x0008033a) calc_display_pane_t1

0x5d4a,	// (0x0008034f) calc_display_pane_t2

0x5d5f,	// (0x00080364) calc_display_pane_t3

0x0002,

0xf182,	// (0x00089787) calc_display_pane_t

0x5d71,	// (0x00080376) cell_calc_pane_ParamLimits

0x5d71,	// (0x00080376) cell_calc_pane

0xe48d,	// (0x00088a92) bg_calc_paper_pane_g1

0xe499,	// (0x00088a9e) bg_calc_paper_pane_g2

0xe4a5,	// (0x00088aaa) bg_calc_paper_pane_g3

0xe4b1,	// (0x00088ab6) bg_calc_paper_pane_g4

0xe4bd,	// (0x00088ac2) bg_calc_paper_pane_g5

0x5d9e,	// (0x000803a3) bg_calc_paper_pane_g6

0x5daf,	// (0x000803b4) bg_calc_paper_pane_g7

0x5dc0,	// (0x000803c5) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x0008978e) bg_calc_paper_pane_g

0x5dd1,	// (0x000803d6) calc_bg_paper_pane_g9

0x5de2,	// (0x000803e7) list_calc_item_pane_ParamLimits

0x5de2,	// (0x000803e7) list_calc_item_pane

0xe4c9,	// (0x00088ace) list_calc_item_pane_g1

0x5e11,	// (0x00080416) list_calc_item_pane_t1_ParamLimits

0x5e11,	// (0x00080416) list_calc_item_pane_t1

0x5e23,	// (0x00080428) list_calc_item_pane_t2_ParamLimits

0x5e23,	// (0x00080428) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x0008979f) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x0008979f) list_calc_item_pane_t

0xe4d6,	// (0x00088adb) cell_calc_pane_g1

0xe4e0,	// (0x00088ae5) grid_highlight_pane_cp02

0x5e53,	// (0x00080458) bg_calc_display_pane_g1

0x5e5c,	// (0x00080461) bg_calc_display_pane_g2

0x24ee,	// (0x0007caf3) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x000897a9) bg_calc_display_pane_g

0x5e66,	// (0x0008046b) cell_qdial_pane_ParamLimits

0x5e66,	// (0x0008046b) cell_qdial_pane

0x5e7a,	// (0x0008047f) cell_qdial_pane_g1_ParamLimits

0x5e7a,	// (0x0008047f) cell_qdial_pane_g1

0x5e87,	// (0x0008048c) cell_qdial_pane_g2_ParamLimits

0x5e87,	// (0x0008048c) cell_qdial_pane_g2

0xe502,	// (0x00088b07) cell_qdial_pane_g3_ParamLimits

0xe502,	// (0x00088b07) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x000897b0) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x000897b0) cell_qdial_pane_g

0x5ea5,	// (0x000804aa) cell_qdial_pane_t1_ParamLimits

0x5ea5,	// (0x000804aa) cell_qdial_pane_t1

0x5ebd,	// (0x000804c2) cell_qdial_pane_t2_ParamLimits

0x5ebd,	// (0x000804c2) cell_qdial_pane_t2

0x5ed0,	// (0x000804d5) cell_qdial_pane_t3_ParamLimits

0x5ed0,	// (0x000804d5) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x000897b9) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x000897b9) cell_qdial_pane_t

0xe14f,	// (0x00088754) grid_highlight_pane_cp04

0xe50e,	// (0x00088b13) thumbnail_qdial_pane_ParamLimits

0xe50e,	// (0x00088b13) thumbnail_qdial_pane

0xe56a,	// (0x00088b6f) list_help_pane

0xe573,	// (0x00088b78) scroll_pane_cp02

0x5ee3,	// (0x000804e8) help_list_pane_t1_ParamLimits

0x5ee3,	// (0x000804e8) help_list_pane_t1

0x5f16,	// (0x0008051b) bg_notes_pane_g2

0x5f1e,	// (0x00080523) bg_notes_pane_g3

0x5f26,	// (0x0008052b) notes_bg_pane_g1

0x5f2e,	// (0x00080533) notes_bg_pane_g4

0x5f36,	// (0x0008053b) notes_bg_pane_g5

0x5f3e,	// (0x00080543) notes_bg_pane_g6

0x5f46,	// (0x0008054b) notes_bg_pane_g7

0x5f4e,	// (0x00080553) notes_bg_pane_g8

0x5f56,	// (0x0008055b) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x000897d7) notes_bg_pane_g

0x5f5e,	// (0x00080563) list_notes_text_pane_ParamLimits

0x5f5e,	// (0x00080563) list_notes_text_pane

0xe57c,	// (0x00088b81) list_notes_text_pane_g1

0x5f83,	// (0x00080588) list_notes_text_pane_t1

0xe481,	// (0x00088a86) listscroll_cale_week_pane

0x5fae,	// (0x000805b3) bg_cale_heading_pane

0xe596,	// (0x00088b9b) bg_cale_pane_cp01

0x5fc2,	// (0x000805c7) cale_week_corner_pane

0x5fd8,	// (0x000805dd) cale_week_day_heading_pane

0x5fec,	// (0x000805f1) cale_week_scroll_pane_g1

0x5ffd,	// (0x00080602) cale_week_scroll_pane_g2

0x600e,	// (0x00080613) cale_week_scroll_pane_g3

0x601f,	// (0x00080624) cale_week_scroll_pane_g4

0x6030,	// (0x00080635) cale_week_scroll_pane_g5

0x6041,	// (0x00080646) cale_week_scroll_pane_g6

0x6052,	// (0x00080657) cale_week_scroll_pane_g7

0x6065,	// (0x0008066a) cale_week_scroll_pane_g8

0x6078,	// (0x0008067d) cale_week_scroll_pane_g9

0x6089,	// (0x0008068e) cale_week_scroll_pane_g10

0x609a,	// (0x0008069f) cale_week_scroll_pane_g11

0x60ab,	// (0x000806b0) cale_week_scroll_pane_g12

0x60bc,	// (0x000806c1) cale_week_scroll_pane_g13

0x60cd,	// (0x000806d2) cale_week_scroll_pane_g14

0x60de,	// (0x000806e3) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x000897e6) cale_week_scroll_pane_g

0x60ef,	// (0x000806f4) cale_week_time_pane

0x6102,	// (0x00080707) grid_cale_week_pane

0x6117,	// (0x0008071c) scroll_pane_cp08

0x6131,	// (0x00080736) cell_cale_week_pane_ParamLimits

0x6131,	// (0x00080736) cell_cale_week_pane

0x616d,	// (0x00080772) cale_week_day_heading_pane_t1

0x619a,	// (0x0008079f) cale_week_day_heading_pane_t2

0x61c7,	// (0x000807cc) cale_week_day_heading_pane_t3

0x61f4,	// (0x000807f9) cale_week_day_heading_pane_t4

0x6221,	// (0x00080826) cale_week_day_heading_pane_t5

0x624e,	// (0x00080853) cale_week_day_heading_pane_t6

0x627b,	// (0x00080880) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x00089805) cale_week_day_heading_pane_t

0xe5c1,	// (0x00088bc6) bg_cale_side_pane

0x62a8,	// (0x000808ad) cale_week_time_pane_t1

0x62c0,	// (0x000808c5) cale_week_time_pane_t2

0x62d8,	// (0x000808dd) cale_week_time_pane_t3

0x62f0,	// (0x000808f5) cale_week_time_pane_t4

0x6308,	// (0x0008090d) cale_week_time_pane_t5

0x6320,	// (0x00080925) cale_week_time_pane_t6

0x6338,	// (0x0008093d) cale_week_time_pane_t7

0x6350,	// (0x00080955) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x00089814) cale_week_time_pane_t

0x6368,	// (0x0008096d) cell_cale_week_pane_g2

0x6381,	// (0x00080986) cell_cale_week_pane_g3_ParamLimits

0x6381,	// (0x00080986) cell_cale_week_pane_g3

0xe5cf,	// (0x00088bd4) grid_highlight_pane_cp07

0xe5d7,	// (0x00088bdc) listscroll_gms_pane

0xe5e1,	// (0x00088be6) grid_gms_pane

0xe5ea,	// (0x00088bef) listscroll_gms_pane_g1

0xe5f2,	// (0x00088bf7) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x00089825) listscroll_gms_pane_g

0x6399,	// (0x0008099e) scroll_pane_cp010

0x63a4,	// (0x000809a9) cell_gms_pane_ParamLimits

0x63a4,	// (0x000809a9) cell_gms_pane

0x63b7,	// (0x000809bc) cell_gms_pane_g1

0xe5fa,	// (0x00088bff) cell_gms_pane_g2

0xe602,	// (0x00088c07) cell_gms_pane_g3

0xe60b,	// (0x00088c10) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0008982a) cell_gms_pane_g

0xe614,	// (0x00088c19) grid_highlight_pane_cp09

0x850a,	// (0x00082b0f) phob_pre_status_pane_g1

0x8512,	// (0x00082b17) phob_pre_status_pane_g2

0x851a,	// (0x00082b1f) phob_pre_status_pane_g3

0x8522,	// (0x00082b27) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x00089c19) phob_pre_status_pane_g

0x8532,	// (0x00082b37) phob_pre_status_pane_t1

0x8542,	// (0x00082b47) phob_pre_status_pane_t2

0x8552,	// (0x00082b57) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x00089c24) phob_pre_status_pane_t

0xe14f,	// (0x00088754) bg_list_pane_cp05

0x63c7,	// (0x000809cc) grid_vorec_pane

0x63d1,	// (0x000809d6) vorec_t1

0x63df,	// (0x000809e4) vorec_t2

0x63ed,	// (0x000809f2) vorec_t3

0x63fb,	// (0x00080a00) vorec_t4

0x6409,	// (0x00080a0e) vorec_t5

0x6417,	// (0x00080a1c) vorec_t6

0x0006,

0xf22e,	// (0x00089833) vorec_t

0x6433,	// (0x00080a38) wait_bar_pane_cp01

0x643b,	// (0x00080a40) cell_vorec_pane_ParamLimits

0x643b,	// (0x00080a40) cell_vorec_pane

0xe61c,	// (0x00088c21) cell_vorec_pane_g1

0xe14f,	// (0x00088754) grid_highlight_pane_cp05

0x645e,	// (0x00080a63) cams_zoom_pane

0x646a,	// (0x00080a6f) image_vga_pane

0x6479,	// (0x00080a7e) main_camera_pane_g1

0x6487,	// (0x00080a8c) main_camera_pane_g2

0x6493,	// (0x00080a98) main_camera_pane_g3

0x649f,	// (0x00080aa4) main_camera_pane_g4

0x64ab,	// (0x00080ab0) main_camera_pane_g5

0x64b7,	// (0x00080abc) main_camera_pane_g6

0x64c3,	// (0x00080ac8) main_camera_pane_g7

0x0007,

0xf23d,	// (0x00089842) main_camera_pane_g

0x64cf,	// (0x00080ad4) main_camera_pane_t1

0x64e1,	// (0x00080ae6) main_camera_pane_t2

0x0001,

0xf24e,	// (0x00089853) main_camera_pane_t

0x6502,	// (0x00080b07) cams_zoom_pane_cp_ParamLimits

0x6502,	// (0x00080b07) cams_zoom_pane_cp

0x6526,	// (0x00080b2b) image_cif_pane_ParamLimits

0x6526,	// (0x00080b2b) image_cif_pane

0x6544,	// (0x00080b49) image_subqcif_pane

0x654c,	// (0x00080b51) main_video_pane_g1_ParamLimits

0x654c,	// (0x00080b51) main_video_pane_g1

0x656c,	// (0x00080b71) main_video_pane_g2_ParamLimits

0x656c,	// (0x00080b71) main_video_pane_g2

0x659c,	// (0x00080ba1) main_video_pane_g3_ParamLimits

0x659c,	// (0x00080ba1) main_video_pane_g3

0x65c5,	// (0x00080bca) main_video_pane_g4_ParamLimits

0x65c5,	// (0x00080bca) main_video_pane_g4

0x65ee,	// (0x00080bf3) main_video_pane_g5_ParamLimits

0x65ee,	// (0x00080bf3) main_video_pane_g5

0xe632,	// (0x00088c37) main_video_pane_g6_ParamLimits

0xe632,	// (0x00088c37) main_video_pane_g6

0x0006,

0xf253,	// (0x00089858) main_video_pane_g_ParamLimits

0xf253,	// (0x00089858) main_video_pane_g

0x6612,	// (0x00080c17) main_video_pane_t1_ParamLimits

0x6612,	// (0x00080c17) main_video_pane_t1

0xe64c,	// (0x00088c51) cams_zoom_pane_g1

0xe655,	// (0x00088c5a) cams_zoom_pane_g2

0xe65e,	// (0x00088c63) cams_zoom_pane_g3

0xe667,	// (0x00088c6c) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x00089867) cams_zoom_pane_g

0x665c,	// (0x00080c61) grid_cams_pane

0x666a,	// (0x00080c6f) linegrid_cams_pane

0x6678,	// (0x00080c7d) cell_cams_pane_ParamLimits

0x6678,	// (0x00080c7d) cell_cams_pane

0xe670,	// (0x00088c75) cams_burst_image_pane

0xe678,	// (0x00088c7d) cell_cams_pane_g1

0xe14f,	// (0x00088754) grid_highlight_pane_cp03

0xe4d6,	// (0x00088adb) mp_bg_pane_g1

0xe14f,	// (0x00088754) bg_list_pane_cp03

0x22c8,	// (0x0007c8cd) bg_mp_pane

0x22d0,	// (0x0007c8d5) grid_mp_pane

0x22d8,	// (0x0007c8dd) media_player_g1

0x22e0,	// (0x0007c8e5) media_player_t1

0x22ee,	// (0x0007c8f3) media_player_t2

0x22fc,	// (0x0007c901) media_player_t3

0x230a,	// (0x0007c90f) media_player_t4

0x2318,	// (0x0007c91d) media_player_t5

0x2326,	// (0x0007c92b) media_player_t6

0x2334,	// (0x0007c939) media_player_t7

0x0006,

0xf5fe,	// (0x00089c03) media_player_t

0x2342,	// (0x0007c947) wait_bar_pane_cp02

0xf5e3,	// (0x00089be8) main_usb_pane_t

0x8501,	// (0x00082b06) cell_mp_pane

0xe4d6,	// (0x00088adb) cell_mp_pane_g1

0xe14f,	// (0x00088754) grid_highlight_pane_cp06

0xe680,	// (0x00088c85) grid_skin_colour_pane

0xe688,	// (0x00088c8d) list_highlight_pane_cp03

0x66e2,	// (0x00080ce7) skin_g1

0xe690,	// (0x00088c95) skin_t1

0xe69f,	// (0x00088ca4) skin_t2

0x0001,

0xf297,	// (0x0008989c) skin_t

0x66ec,	// (0x00080cf1) cell_skin_colour_pane_ParamLimits

0x66ec,	// (0x00080cf1) cell_skin_colour_pane

0xe6ad,	// (0x00088cb2) cell_skin_colour_pane_g1

0x6739,	// (0x00080d3e) call_video_g1_ParamLimits

0x6739,	// (0x00080d3e) call_video_g1

0x6749,	// (0x00080d4e) call_video_g2_ParamLimits

0x6749,	// (0x00080d4e) call_video_g2

0x0001,

0xf29c,	// (0x000898a1) call_video_g_ParamLimits

0xf29c,	// (0x000898a1) call_video_g

0x6787,	// (0x00080d8c) call_video_uplink_pane_cp1_ParamLimits

0x6787,	// (0x00080d8c) call_video_uplink_pane_cp1

0xe6c7,	// (0x00088ccc) call_video_uplink_pane_cp2

0x6833,	// (0x00080e38) video_down_crop_pane_ParamLimits

0x6833,	// (0x00080e38) video_down_crop_pane

0x6917,	// (0x00080f1c) video_down_pane_ParamLimits

0x6917,	// (0x00080f1c) video_down_pane

0xe6cf,	// (0x00088cd4) video_down_subqcif_pane_ParamLimits

0xe6cf,	// (0x00088cd4) video_down_subqcif_pane

0xe6e7,	// (0x00088cec) video_down_subqcif_pane_cp_ParamLimits

0xe6e7,	// (0x00088cec) video_down_subqcif_pane_cp

0xe70b,	// (0x00088d10) im_reading_pane_ParamLimits

0xe70b,	// (0x00088d10) im_reading_pane

0x69f9,	// (0x00080ffe) im_writing_pane_ParamLimits

0x69f9,	// (0x00080ffe) im_writing_pane

0x6a17,	// (0x0008101c) im_reading_pane_t1

0xe725,	// (0x00088d2a) list_im_pane

0xe736,	// (0x00088d3b) scroll_pane_cp07

0x6a6b,	// (0x00081070) im_writing_pane_t1_ParamLimits

0x6a6b,	// (0x00081070) im_writing_pane_t1

0xe74f,	// (0x00088d54) im_writing_pane_t2_ParamLimits

0xe74f,	// (0x00088d54) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x000898ab) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x000898ab) im_writing_pane_t

0xe14f,	// (0x00088754) input_focus_pane_cp04

0xe14f,	// (0x00088754) input_focus_pane_cp05

0x6a80,	// (0x00081085) list_im_single_pane_ParamLimits

0x6a80,	// (0x00081085) list_im_single_pane

0x6aa4,	// (0x000810a9) list_single_im_pane_t1

0x84c5,	// (0x00082aca) blid_accuracy_pane

0x84cd,	// (0x00082ad2) blid_compass_pane

0x84d7,	// (0x00082adc) main_location_t1

0x84e5,	// (0x00082aea) main_location_t2

0x84f3,	// (0x00082af8) main_location_t3

0x0002,

0xf60d,	// (0x00089c12) main_location_t

0xe14f,	// (0x00088754) aid_levels_location

0xe4d6,	// (0x00088adb) blid_accuracy_pane_g1

0xe4d6,	// (0x00088adb) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x0008990d) blid_accuracy_pane_g

0xe797,	// (0x00088d9c) wml_content_pane

0xe7d5,	// (0x00088dda) wml_button_pane_ParamLimits

0xe7d5,	// (0x00088dda) wml_button_pane

0x6ab3,	// (0x000810b8) wml_list_single_large_pane_ParamLimits

0x6ab3,	// (0x000810b8) wml_list_single_large_pane

0x6add,	// (0x000810e2) wml_list_single_medium_pane_ParamLimits

0x6add,	// (0x000810e2) wml_list_single_medium_pane

0x6b0e,	// (0x00081113) wml_list_single_small_pane_ParamLimits

0x6b0e,	// (0x00081113) wml_list_single_small_pane

0xe7e9,	// (0x00088dee) wml_selection_box_pane_ParamLimits

0xe7e9,	// (0x00088dee) wml_selection_box_pane

0xe7fc,	// (0x00088e01) wml_list_single_pane_t1

0xe80b,	// (0x00088e10) wml_list_single_medium_pane_t1

0xe81a,	// (0x00088e1f) wml_list_single_large_pane_t1

0xe829,	// (0x00088e2e) input_focus_pane_cp02_ParamLimits

0xe829,	// (0x00088e2e) input_focus_pane_cp02

0xe83c,	// (0x00088e41) wml_selection_box_pane_g1

0xe845,	// (0x00088e4a) wml_selection_box_pane_t1_ParamLimits

0xe845,	// (0x00088e4a) wml_selection_box_pane_t1

0xe3aa,	// (0x000889af) bg_wml_button_pane_ParamLimits

0xe3aa,	// (0x000889af) bg_wml_button_pane

0xe85d,	// (0x00088e62) wml_button_pane_g1

0xe865,	// (0x00088e6a) wml_button_pane_t1

0xe85d,	// (0x00088e62) wml_button_bg_pane_g1

0xe875,	// (0x00088e7a) wml_button_bg_pane_g2

0xe87d,	// (0x00088e82) wml_button_bg_pane_g3

0xe885,	// (0x00088e8a) wml_button_bg_pane_g4

0xe88d,	// (0x00088e92) wml_button_bg_pane_g5

0xe895,	// (0x00088e9a) wml_button_bg_pane_g6

0xe89d,	// (0x00088ea2) wml_button_bg_pane_g7

0xe8a5,	// (0x00088eaa) wml_button_bg_pane_g8

0xe8ad,	// (0x00088eb2) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x000898b0) wml_button_bg_pane_g

0x6b48,	// (0x0008114d) bg_list_pane_cp02

0xe8b5,	// (0x00088eba) mce_header_pane_ParamLimits

0xe8b5,	// (0x00088eba) mce_header_pane

0xe8cb,	// (0x00088ed0) mce_icon_pane

0xe8cb,	// (0x00088ed0) mce_image_pane

0xe8d4,	// (0x00088ed9) mce_text_pane_ParamLimits

0xe8d4,	// (0x00088ed9) mce_text_pane

0x6b52,	// (0x00081157) scroll_pane_cp03

0xe7cd,	// (0x00088dd2) scroll_pane_cp04

0xe8e7,	// (0x00088eec) scroll_pane_cp05_ParamLimits

0xe8e7,	// (0x00088eec) scroll_pane_cp05

0x6b5c,	// (0x00081161) mce_header_field_pane_ParamLimits

0x6b5c,	// (0x00081161) mce_header_field_pane

0x6b7c,	// (0x00081181) mce_header_field_pane_2_ParamLimits

0x6b7c,	// (0x00081181) mce_header_field_pane_2

0x6b92,	// (0x00081197) mce_header_field_pane_3

0x6b9a,	// (0x0008119f) list_single_mce_message_pane_ParamLimits

0x6b9a,	// (0x0008119f) list_single_mce_message_pane

0x6bbf,	// (0x000811c4) list_single_mce_smart_pane_ParamLimits

0x6bbf,	// (0x000811c4) list_single_mce_smart_pane

0xe8f3,	// (0x00088ef8) input_focus_pane_cp03

0xe8fc,	// (0x00088f01) list_header_data_pane

0x6bef,	// (0x000811f4) mce_header_field_pane_t1

0x6bfd,	// (0x00081202) list_single_mce_header_pane_ParamLimits

0x6bfd,	// (0x00081202) list_single_mce_header_pane

0xe904,	// (0x00088f09) list_single_mce_header_pane_t1

0xe913,	// (0x00088f18) list_single_mce_message_pane_g1

0xe91b,	// (0x00088f20) list_single_mce_message_pane_t1

0x6c41,	// (0x00081246) bg_cale_heading_pane_cp01_ParamLimits

0x6c41,	// (0x00081246) bg_cale_heading_pane_cp01

0xe929,	// (0x00088f2e) bg_cale_pane_cp02_ParamLimits

0xe929,	// (0x00088f2e) bg_cale_pane_cp02

0x6c64,	// (0x00081269) cale_month_corner_pane

0x6c7a,	// (0x0008127f) cale_month_day_heading_pane_ParamLimits

0x6c7a,	// (0x0008127f) cale_month_day_heading_pane

0x6cad,	// (0x000812b2) cale_month_pane_g1_ParamLimits

0x6cad,	// (0x000812b2) cale_month_pane_g1

0x6cc9,	// (0x000812ce) cale_month_pane_g2_ParamLimits

0x6cc9,	// (0x000812ce) cale_month_pane_g2

0x6ce4,	// (0x000812e9) cale_month_pane_g3_ParamLimits

0x6ce4,	// (0x000812e9) cale_month_pane_g3

0x6d10,	// (0x00081315) cale_month_pane_g4_ParamLimits

0x6d10,	// (0x00081315) cale_month_pane_g4

0x6d3c,	// (0x00081341) cale_month_pane_g5_ParamLimits

0x6d3c,	// (0x00081341) cale_month_pane_g5

0x6d68,	// (0x0008136d) cale_month_pane_g6_ParamLimits

0x6d68,	// (0x0008136d) cale_month_pane_g6

0x6d94,	// (0x00081399) cale_month_pane_g7_ParamLimits

0x6d94,	// (0x00081399) cale_month_pane_g7

0x6dd0,	// (0x000813d5) cale_month_pane_g8_ParamLimits

0x6dd0,	// (0x000813d5) cale_month_pane_g8

0x6e0c,	// (0x00081411) cale_month_pane_g9_ParamLimits

0x6e0c,	// (0x00081411) cale_month_pane_g9

0x6e46,	// (0x0008144b) cale_month_pane_g10_ParamLimits

0x6e46,	// (0x0008144b) cale_month_pane_g10

0x6e80,	// (0x00081485) cale_month_pane_g11_ParamLimits

0x6e80,	// (0x00081485) cale_month_pane_g11

0x6eba,	// (0x000814bf) cale_month_pane_g12_ParamLimits

0x6eba,	// (0x000814bf) cale_month_pane_g12

0x6ef4,	// (0x000814f9) cale_month_pane_g13_ParamLimits

0x6ef4,	// (0x000814f9) cale_month_pane_g13

0x000c,

0xf2be,	// (0x000898c3) cale_month_pane_g_ParamLimits

0xf2be,	// (0x000898c3) cale_month_pane_g

0x6f2e,	// (0x00081533) cale_month_week_pane

0x6f41,	// (0x00081546) grid_cale_month_pane_ParamLimits

0x6f41,	// (0x00081546) grid_cale_month_pane

0x6f6f,	// (0x00081574) cale_month_day_heading_pane_t1

0x6fcd,	// (0x000815d2) cale_month_day_heading_pane_t2

0x7032,	// (0x00081637) cale_month_day_heading_pane_t3

0x7097,	// (0x0008169c) cale_month_day_heading_pane_t4

0x70fc,	// (0x00081701) cale_month_day_heading_pane_t5

0x7161,	// (0x00081766) cale_month_day_heading_pane_t6

0x71c6,	// (0x000817cb) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x000898de) cale_month_day_heading_pane_t

0xe5c1,	// (0x00088bc6) bg_cale_side_pane_cp01

0x723b,	// (0x00081840) cale_month_week_pane_t1

0x7252,	// (0x00081857) cale_month_week_pane_t2

0x7269,	// (0x0008186e) cale_month_week_pane_t3

0x7280,	// (0x00081885) cale_month_week_pane_t4

0x7297,	// (0x0008189c) cale_month_week_pane_t5

0x72ae,	// (0x000818b3) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x000898ed) cale_month_week_pane_t

0x72c5,	// (0x000818ca) cell_cale_month_pane_ParamLimits

0x72c5,	// (0x000818ca) cell_cale_month_pane

0x737b,	// (0x00081980) cell_cale_month_pane_g1

0x7387,	// (0x0008198c) cell_cale_month_pane_t1_ParamLimits

0x7387,	// (0x0008198c) cell_cale_month_pane_t1

0xe5cf,	// (0x00088bd4) grid_highlight_pane_cp08

0xe4d6,	// (0x00088adb) main_smil_g1

0x73a3,	// (0x000819a8) smil_status_pane

0xe95e,	// (0x00088f63) smil_text_pane

0x21e8,	// (0x0007c7ed) bg_popup_call3_rect_pane_g8

0x21f0,	// (0x0007c7f5) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x00089ba6) bg_popup_call3_rect_pane_g

0x247d,	// (0x0007ca82) smil_status_volume_pane_g1

0xe968,	// (0x00088f6d) smil_status_pane_t1

0x88ab,	// (0x00082eb0) volume_smil_pane

0x0870,	// (0x0007ae75) list_smil_text_pane

0x73b6,	// (0x000819bb) scroll_pane_cp011

0x73c1,	// (0x000819c6) smil_text_list_pane_t1_ParamLimits

0x73c1,	// (0x000819c6) smil_text_list_pane_t1

0x7439,	// (0x00081a3e) aid_volume_smil_ParamLimits

0x7439,	// (0x00081a3e) aid_volume_smil

0xe4d6,	// (0x00088adb) smil_volume_pane_g1

0xe4d6,	// (0x00088adb) smil_volume_pane_g2

0x0001,

0xf308,	// (0x0008990d) smil_volume_pane_g

0xe481,	// (0x00088a86) listscroll_cale_day_pane

0x089c,	// (0x0007aea1) bg_cale_pane

0x08b4,	// (0x0007aeb9) list_cale_pane

0x08c5,	// (0x0007aeca) scroll_pane_cp09

0x08d6,	// (0x0007aedb) cale_bg_pane_g1

0x08de,	// (0x0007aee3) cale_bg_pane_g2

0x08e6,	// (0x0007aeeb) cale_bg_pane_g3

0x08ee,	// (0x0007aef3) cale_bg_pane_g4

0x08f6,	// (0x0007aefb) cale_bg_pane_g5

0x08fe,	// (0x0007af03) cale_bg_pane_g6

0x0906,	// (0x0007af0b) cale_bg_pane_g7

0x090e,	// (0x0007af13) cale_bg_pane_g8

0x0916,	// (0x0007af1b) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x00089912) cale_bg_pane_g

0x745b,	// (0x00081a60) list_cale_time_pane_ParamLimits

0x745b,	// (0x00081a60) list_cale_time_pane

0x091e,	// (0x0007af23) list_cale_time_pane_g1_ParamLimits

0x091e,	// (0x0007af23) list_cale_time_pane_g1

0x092a,	// (0x0007af2f) list_cale_time_pane_g2_ParamLimits

0x092a,	// (0x0007af2f) list_cale_time_pane_g2

0x7477,	// (0x00081a7c) list_cale_time_pane_g3_ParamLimits

0x7477,	// (0x00081a7c) list_cale_time_pane_g3

0x7485,	// (0x00081a8a) list_cale_time_pane_g4_ParamLimits

0x7485,	// (0x00081a8a) list_cale_time_pane_g4

0x7493,	// (0x00081a98) list_cale_time_pane_g5_ParamLimits

0x7493,	// (0x00081a98) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x00089925) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x00089925) list_cale_time_pane_g

0x0944,	// (0x0007af49) list_cale_time_pane_t1_ParamLimits

0x0944,	// (0x0007af49) list_cale_time_pane_t1

0x096c,	// (0x0007af71) list_cale_time_pane_t2_ParamLimits

0x096c,	// (0x0007af71) list_cale_time_pane_t2

0x77b8,	// (0x00081dbd) aid_blid_cardinal_pane

0x77fa,	// (0x00081dff) compass_pane_t4

0x0994,	// (0x0007af99) list_cale_time_pane_t4_ParamLimits

0x0994,	// (0x0007af99) list_cale_time_pane_t4

0x7808,	// (0x00081e0d) compass_pane_t5

0x7818,	// (0x00081e1d) compass_pane_t6

0x7826,	// (0x00081e2b) compass_pane_t7

0x0ea7,	// (0x0007b4ac) navi_pane_cc_t1

0x100e,	// (0x0007b613) aid_phob_thumbnail_center_pane

0x7fcb,	// (0x000825d0) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x00089932) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x00089932) list_cale_time_pane_t

0xdda6,	// (0x000883ab) bg_popup_window_pane_cp02_ParamLimits

0xdda6,	// (0x000883ab) bg_popup_window_pane_cp02

0x09bc,	// (0x0007afc1) heading_pane_cp01_ParamLimits

0x09bc,	// (0x0007afc1) heading_pane_cp01

0x09c8,	// (0x0007afcd) loc_req_pane_ParamLimits

0x09c8,	// (0x0007afcd) loc_req_pane

0x09d8,	// (0x0007afdd) loc_type_pane_ParamLimits

0x09d8,	// (0x0007afdd) loc_type_pane

0x09ea,	// (0x0007afef) loc_type_pane_t1_ParamLimits

0x09ea,	// (0x0007afef) loc_type_pane_t1

0x09fc,	// (0x0007b001) loc_type_pane_t2_ParamLimits

0x09fc,	// (0x0007b001) loc_type_pane_t2

0x0a0e,	// (0x0007b013) loc_type_pane_t3_ParamLimits

0x0a0e,	// (0x0007b013) loc_type_pane_t3

0x0002,

0xf334,	// (0x00089939) loc_type_pane_t_ParamLimits

0xf334,	// (0x00089939) loc_type_pane_t

0x0a20,	// (0x0007b025) list_loc_req_pane

0x0a2a,	// (0x0007b02f) scroll_pane_cp012

0x74a1,	// (0x00081aa6) list_single_loc_request_popup_menu_pane_ParamLimits

0x74a1,	// (0x00081aa6) list_single_loc_request_popup_menu_pane

0x0a35,	// (0x0007b03a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0a35,	// (0x0007b03a) list_single_loc_request_popup_menu_pane_g1

0x0a41,	// (0x0007b046) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0a41,	// (0x0007b046) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x00089940) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x00089940) list_single_loc_request_popup_menu_pane_g

0x0a4d,	// (0x0007b052) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0a4d,	// (0x0007b052) list_single_loc_request_popup_menu_pane_t1

0x74b3,	// (0x00081ab8) bg_popup_window_pane_cp03_ParamLimits

0x74b3,	// (0x00081ab8) bg_popup_window_pane_cp03

0x74c1,	// (0x00081ac6) heading_loc_req_pane_ParamLimits

0x74c1,	// (0x00081ac6) heading_loc_req_pane

0x74cd,	// (0x00081ad2) popup_dyc_status_message_window_g1_ParamLimits

0x74cd,	// (0x00081ad2) popup_dyc_status_message_window_g1

0x74d9,	// (0x00081ade) popup_dyc_status_message_window_t1_ParamLimits

0x74d9,	// (0x00081ade) popup_dyc_status_message_window_t1

0x74eb,	// (0x00081af0) popup_dyc_status_message_window_t2_ParamLimits

0x74eb,	// (0x00081af0) popup_dyc_status_message_window_t2

0x74fd,	// (0x00081b02) popup_dyc_status_message_window_t3_ParamLimits

0x74fd,	// (0x00081b02) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x00089945) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x00089945) popup_dyc_status_message_window_t

0xe14f,	// (0x00088754) bg_heading_pane_cp01

0x0a63,	// (0x0007b068) heading_loc_req_pane_g1

0x0a6b,	// (0x0007b070) heading_loc_req_pane_g2

0x0a73,	// (0x0007b078) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x0008994c) heading_loc_req_pane_g

0x0a7b,	// (0x0007b080) heading_loc_req_pane_t1

0x0aff,	// (0x0007b104) bg_popup_sub_pane_cp01_ParamLimits

0x0aff,	// (0x0007b104) bg_popup_sub_pane_cp01

0x0b0d,	// (0x0007b112) popup_cale_events_window_g1_ParamLimits

0x0b0d,	// (0x0007b112) popup_cale_events_window_g1

0x0b2d,	// (0x0007b132) popup_cale_events_window_g2_ParamLimits

0x0b2d,	// (0x0007b132) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x00089980) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x00089980) popup_cale_events_window_g

0x0b4d,	// (0x0007b152) popup_cale_events_window_t1_ParamLimits

0x0b4d,	// (0x0007b152) popup_cale_events_window_t1

0x0b5f,	// (0x0007b164) popup_cale_events_window_t2_ParamLimits

0x0b5f,	// (0x0007b164) popup_cale_events_window_t2

0x0b9d,	// (0x0007b1a2) popup_cale_events_window_t3_ParamLimits

0x0b9d,	// (0x0007b1a2) popup_cale_events_window_t3

0x0bd7,	// (0x0007b1dc) popup_cale_events_window_t4_ParamLimits

0x0bd7,	// (0x0007b1dc) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x00089985) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x00089985) popup_cale_events_window_t

0x7581,	// (0x00081b86) call_type_pane

0x1026,	// (0x0007b62b) popup_call_status_window_g1

0x758d,	// (0x00081b92) popup_call_status_window_g2

0x7599,	// (0x00081b9e) popup_call_status_window_g3

0x0002,

0xf389,	// (0x0008998e) popup_call_status_window_g

0x0c0d,	// (0x0007b212) call_type_pane_g1

0x0c16,	// (0x0007b21b) call_type_pane_g2

0x0001,

0xf390,	// (0x00089995) call_type_pane_g

0xe14f,	// (0x00088754) bg_popup_sub_pane_cp02

0x0c1f,	// (0x0007b224) listscroll_popup_wml_pane

0x0c27,	// (0x0007b22c) list_wml_pane

0x0c31,	// (0x0007b236) scroll_pane_cp013

0x0c3c,	// (0x0007b241) list_single_graphic_popup_wml_pane_ParamLimits

0x0c3c,	// (0x0007b241) list_single_graphic_popup_wml_pane

0xe4d6,	// (0x00088adb) list_single_graphic_popup_wml_pane_g1

0x0c50,	// (0x0007b255) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x0008999a) list_single_graphic_popup_wml_pane_g

0x0c58,	// (0x0007b25d) list_single_graphic_popup_wml_pane_t1

0x0c66,	// (0x0007b26b) aid_call_pane

0xe3a2,	// (0x000889a7) popup_clock_analogue_window_g1

0xe3a2,	// (0x000889a7) popup_clock_analogue_window_g2

0x75a5,	// (0x00081baa) popup_clock_analogue_window_g3

0x75a5,	// (0x00081baa) popup_clock_analogue_window_g4

0xe4d6,	// (0x00088adb) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x0008999f) popup_clock_analogue_window_g

0x75ad,	// (0x00081bb2) popup_clock_analogue_window_t1

0x75bb,	// (0x00081bc0) clock_digital_number_pane_ParamLimits

0x75bb,	// (0x00081bc0) clock_digital_number_pane

0x75c7,	// (0x00081bcc) clock_digital_number_pane_cp02_ParamLimits

0x75c7,	// (0x00081bcc) clock_digital_number_pane_cp02

0x75d3,	// (0x00081bd8) clock_digital_number_pane_cp03_ParamLimits

0x75d3,	// (0x00081bd8) clock_digital_number_pane_cp03

0x75df,	// (0x00081be4) clock_digital_number_pane_cp04_ParamLimits

0x75df,	// (0x00081be4) clock_digital_number_pane_cp04

0x75ef,	// (0x00081bf4) clock_digital_separator_pane_ParamLimits

0x75ef,	// (0x00081bf4) clock_digital_separator_pane

0x75fb,	// (0x00081c00) popup_clock_digital_window_t1

0xe4d6,	// (0x00088adb) clock_digital_number_pane_g1

0xe4d6,	// (0x00088adb) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x0008990d) clock_digital_number_pane_g

0xe4d6,	// (0x00088adb) clock_digital_separator_pane_g1

0xe4d6,	// (0x00088adb) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x0008990d) clock_digital_separator_pane_g

0xe14f,	// (0x00088754) bg_popup_window_pane_cp04

0x0ce9,	// (0x0007b2ee) heading_pane_cp03

0x0cf1,	// (0x0007b2f6) listscroll_popup_gms_pane

0x0cf9,	// (0x0007b2fe) grid_large_graphic_popup_pane

0x0d03,	// (0x0007b308) listscroll_popup_gms_pane_g1

0x0d0b,	// (0x0007b310) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x000899aa) listscroll_popup_gms_pane_g

0xe7cd,	// (0x00088dd2) scroll_pane_cp014

0x7618,	// (0x00081c1d) cell_large_graphic_popup_pane_ParamLimits

0x7618,	// (0x00081c1d) cell_large_graphic_popup_pane

0x7630,	// (0x00081c35) cell_large_graphic_popup_pane_g1_ParamLimits

0x7630,	// (0x00081c35) cell_large_graphic_popup_pane_g1

0x0d13,	// (0x0007b318) cell_large_graphic_popup_pane_g2_ParamLimits

0x0d13,	// (0x0007b318) cell_large_graphic_popup_pane_g2

0x0d1f,	// (0x0007b324) cell_large_graphic_popup_pane_g3_ParamLimits

0x0d1f,	// (0x0007b324) cell_large_graphic_popup_pane_g3

0x0d2c,	// (0x0007b331) cell_large_graphic_popup_pane_g4_ParamLimits

0x0d2c,	// (0x0007b331) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x000899af) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x000899af) cell_large_graphic_popup_pane_g

0x0d3c,	// (0x0007b341) grid_highlight_pane_cp010

0xe4d6,	// (0x00088adb) bg_popup_call_pane_g1

0x0d46,	// (0x0007b34b) list_single_graphic_popup_conf_pane_ParamLimits

0x0d46,	// (0x0007b34b) list_single_graphic_popup_conf_pane

0x0d59,	// (0x0007b35e) list_highlight_pane_cp01

0x0d62,	// (0x0007b367) list_single_graphic_popup_conf_pane_g1

0x0d6a,	// (0x0007b36f) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x000899b8) list_single_graphic_popup_conf_pane_g

0x0d72,	// (0x0007b377) list_single_graphic_popup_conf_pane_t1

0x0d80,	// (0x0007b385) linegrid_cams_pane_g1

0x763c,	// (0x00081c41) linegrid_cams_pane_g2

0xe602,	// (0x00088c07) linegrid_cams_pane_g3

0x0d89,	// (0x0007b38e) linegrid_cams_pane_g4

0x7645,	// (0x00081c4a) linegrid_cams_pane_g5

0x764e,	// (0x00081c53) linegrid_cams_pane_g6

0xe60b,	// (0x00088c10) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x000899bd) linegrid_cams_pane_g

0x0d92,	// (0x0007b397) popup_clock_analogue_window

0x0d92,	// (0x0007b397) popup_clock_digital_window

0xe14f,	// (0x00088754) popup_phob_thumbnail_window

0xe4d6,	// (0x00088adb) call_video_uplink_pane_g1

0x0d9b,	// (0x0007b3a0) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x000899cc) call_video_uplink_pane_g

0x0da3,	// (0x0007b3a8) video_uplink_pane

0x0dab,	// (0x0007b3b0) mce_image_pane_g1

0x7657,	// (0x00081c5c) mce_image_pane_g2

0x7661,	// (0x00081c66) mce_image_pane_g3

0x7669,	// (0x00081c6e) mce_image_pane_g4

0x7671,	// (0x00081c76) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x000899d1) mce_image_pane_g

0x0db5,	// (0x0007b3ba) control_top_pane_stacon_cp01_ParamLimits

0x0db5,	// (0x0007b3ba) control_top_pane_stacon_cp01

0x0dc9,	// (0x0007b3ce) uni_indicator_pane_stacon_cp01_ParamLimits

0x0dc9,	// (0x0007b3ce) uni_indicator_pane_stacon_cp01

0x0dda,	// (0x0007b3df) bg_popup_sub_pane_cp03

0x7679,	// (0x00081c7e) chi_dic_find_pane

0x7681,	// (0x00081c86) listscroll_chi_dic_pane

0x768a,	// (0x00081c8f) main_pane_chidic_g1

0x0de4,	// (0x0007b3e9) chi_dic_find_pane_t1

0x0df2,	// (0x0007b3f7) find_chidic_pane

0x0dfb,	// (0x0007b400) chi_dic_list_pane_ParamLimits

0x0dfb,	// (0x0007b400) chi_dic_list_pane

0x0e0c,	// (0x0007b411) scroll_pane_cp020

0x0e14,	// (0x0007b419) find_chidic_pane_t1

0xe14f,	// (0x00088754) input_focus_pane_cp06

0x769d,	// (0x00081ca2) list_chi_dic_pane_ParamLimits

0x769d,	// (0x00081ca2) list_chi_dic_pane

0x76b7,	// (0x00081cbc) list_chi_dic_pane_t1_ParamLimits

0x76b7,	// (0x00081cbc) list_chi_dic_pane_t1

0xe14f,	// (0x00088754) list_highlight_pane_cp020

0x0e23,	// (0x0007b428) bg_cale_heading_pane_g1

0x76ca,	// (0x00081ccf) bg_cale_heading_pane_g2

0x76d2,	// (0x00081cd7) bg_cale_heading_pane_g3

0x76da,	// (0x00081cdf) bg_cale_heading_pane_g4

0x76e4,	// (0x00081ce9) bg_cale_heading_pane_g5

0x76ee,	// (0x00081cf3) bg_cale_heading_pane_g6

0x76f6,	// (0x00081cfb) bg_cale_heading_pane_g7

0x76fe,	// (0x00081d03) bg_cale_heading_pane_g8

0x7708,	// (0x00081d0d) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x000899dc) bg_cale_heading_pane_g

0x0e23,	// (0x0007b428) bg_cale_side_pane_g1

0x7712,	// (0x00081d17) bg_cale_side_pane_g2

0x771a,	// (0x00081d1f) bg_cale_side_pane_g3

0x7722,	// (0x00081d27) bg_cale_side_pane_g4

0x772a,	// (0x00081d2f) bg_cale_side_pane_g5

0x7732,	// (0x00081d37) bg_cale_side_pane_g6

0x773a,	// (0x00081d3f) bg_cale_side_pane_g7

0x7742,	// (0x00081d47) bg_cale_side_pane_g8

0x774a,	// (0x00081d4f) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x000899ef) bg_cale_side_pane_g

0x7752,	// (0x00081d57) popup_call_status_window_ParamLimits

0x7752,	// (0x00081d57) popup_call_status_window

0x0e2b,	// (0x0007b430) stacon_top_pane

0x0e33,	// (0x0007b438) status_pane_ParamLimits

0x0e33,	// (0x0007b438) status_pane

0x0e48,	// (0x0007b44d) status_small_pane

0x0e50,	// (0x0007b455) control_pane

0xe14f,	// (0x00088754) stacon_bottom_pane

0x0e58,	// (0x0007b45d) list_single_mce_smart_pane_t1_ParamLimits

0x0e58,	// (0x0007b45d) list_single_mce_smart_pane_t1

0x0e6b,	// (0x0007b470) list_single_mce_smart_pane_t2_ParamLimits

0x0e6b,	// (0x0007b470) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x00089a02) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x00089a02) list_single_mce_smart_pane_t

0x775e,	// (0x00081d63) compass_pane

0x776a,	// (0x00081d6f) main_location2_pane_t1

0x777e,	// (0x00081d83) main_location2_pane_t2

0x7792,	// (0x00081d97) main_location2_pane_t3

0x0003,

0xf402,	// (0x00089a07) main_location2_pane_t

0x0e8a,	// (0x0007b48f) compass_pane_g1_ParamLimits

0x0e8a,	// (0x0007b48f) compass_pane_g1

0x77dc,	// (0x00081de1) compass_pane_t1

0x77eb,	// (0x00081df0) compass_pane_t2

0x0005,

0xf40b,	// (0x00089a10) compass_pane_t

0x7836,	// (0x00081e3b) text_secondary_cp61

0x0e9e,	// (0x0007b4a3) navi_pane_cams_g5

0x0ec1,	// (0x0007b4c6) navi_pane_im_t1

0x0ecf,	// (0x0007b4d4) navi_pane_mp_g1_ParamLimits

0x0ecf,	// (0x0007b4d4) navi_pane_mp_g1

0x0ee3,	// (0x0007b4e8) navi_pane_mp_g2_ParamLimits

0x0ee3,	// (0x0007b4e8) navi_pane_mp_g2

0x0eef,	// (0x0007b4f4) navi_pane_mp_g3_ParamLimits

0x0eef,	// (0x0007b4f4) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x00089a24) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x00089a24) navi_pane_mp_g

0x0efb,	// (0x0007b500) navi_pane_mp_t1

0x0f09,	// (0x0007b50e) navi_pane_mp_t2

0x0002,

0xf426,	// (0x00089a2b) navi_pane_mp_t

0x0f45,	// (0x0007b54a) navi_pane_vt_g1

0x0efb,	// (0x0007b500) navi_pane_vt_t1

0x0f4d,	// (0x0007b552) navi_slider_pane

0x0f55,	// (0x0007b55a) zooming_pane

0x0f5d,	// (0x0007b562) navi_slider_pane_g1

0x794b,	// (0x00081f50) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x00089a32) navi_slider_pane_g

0x0f93,	// (0x0007b598) aid_levels_zoom

0x0f9b,	// (0x0007b5a0) zooming_pane_g1

0x0fa3,	// (0x0007b5a8) zooming_pane_g2

0x0fa3,	// (0x0007b5a8) zooming_pane_g3

0x0002,

0xf43c,	// (0x00089a41) zooming_pane_g

0x0fab,	// (0x0007b5b0) level_10_zoom

0x0fb4,	// (0x0007b5b9) level_11_zoom

0x0fbd,	// (0x0007b5c2) level_1_zoom

0x0fc6,	// (0x0007b5cb) level_2_zoom

0x0fcf,	// (0x0007b5d4) level_3_zoom

0x0fd8,	// (0x0007b5dd) level_4_zoom

0x0fe1,	// (0x0007b5e6) level_5_zoom

0x0fea,	// (0x0007b5ef) level_6_zoom

0x0ff3,	// (0x0007b5f8) level_7_zoom

0x0ffc,	// (0x0007b601) level_8_zoom

0x1005,	// (0x0007b60a) level_9_zoom

0x1016,	// (0x0007b61b) popup_phob_thumbnail_window_g1

0x101e,	// (0x0007b623) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x00089a48) popup_phob_thumbnail_window_g

0x234a,	// (0x0007c94f) level_1_location

0x2352,	// (0x0007c957) level_2_location

0x235a,	// (0x0007c95f) level_3_location

0x2362,	// (0x0007c967) level_4_location

0x0f55,	// (0x0007b55a) level_5_location

0x795d,	// (0x00081f62) mce_icon_pane_g1

0x7965,	// (0x00081f6a) mce_icon_pane_g2

0x0001,

0xf448,	// (0x00089a4d) mce_icon_pane_g

0x796d,	// (0x00081f72) main_mup_pane_g1_ParamLimits

0x796d,	// (0x00081f72) main_mup_pane_g1

0x7985,	// (0x00081f8a) main_mup_pane_g2_ParamLimits

0x7985,	// (0x00081f8a) main_mup_pane_g2

0x79a1,	// (0x00081fa6) main_mup_pane_g3_ParamLimits

0x79a1,	// (0x00081fa6) main_mup_pane_g3

0x79bd,	// (0x00081fc2) main_mup_pane_g4_ParamLimits

0x79bd,	// (0x00081fc2) main_mup_pane_g4

0x79d9,	// (0x00081fde) main_mup_pane_g5_ParamLimits

0x79d9,	// (0x00081fde) main_mup_pane_g5

0x79fa,	// (0x00081fff) main_mup_pane_g6_ParamLimits

0x79fa,	// (0x00081fff) main_mup_pane_g6

0x7a16,	// (0x0008201b) main_mup_pane_g7_ParamLimits

0x7a16,	// (0x0008201b) main_mup_pane_g7

0x7a32,	// (0x00082037) main_mup_pane_g8_ParamLimits

0x7a32,	// (0x00082037) main_mup_pane_g8

0x7a52,	// (0x00082057) main_mup_pane_g9_ParamLimits

0x7a52,	// (0x00082057) main_mup_pane_g9

0x7a71,	// (0x00082076) main_mup_pane_g10_ParamLimits

0x7a71,	// (0x00082076) main_mup_pane_g10

0x7a90,	// (0x00082095) main_mup_pane_g11_ParamLimits

0x7a90,	// (0x00082095) main_mup_pane_g11

0x7aa8,	// (0x000820ad) main_mup_pane_g12_ParamLimits

0x7aa8,	// (0x000820ad) main_mup_pane_g12

0x7ab6,	// (0x000820bb) main_mup_pane_g13_ParamLimits

0x7ab6,	// (0x000820bb) main_mup_pane_g13

0x000c,

0xf44d,	// (0x00089a52) main_mup_pane_g_ParamLimits

0xf44d,	// (0x00089a52) main_mup_pane_g

0x7acc,	// (0x000820d1) main_mup_pane_t1_ParamLimits

0x7acc,	// (0x000820d1) main_mup_pane_t1

0x7ae9,	// (0x000820ee) main_mup_pane_t2_ParamLimits

0x7ae9,	// (0x000820ee) main_mup_pane_t2

0x7b03,	// (0x00082108) main_mup_pane_t3_ParamLimits

0x7b03,	// (0x00082108) main_mup_pane_t3

0x7b1d,	// (0x00082122) main_mup_pane_t4_ParamLimits

0x7b1d,	// (0x00082122) main_mup_pane_t4

0x7b2f,	// (0x00082134) main_mup_pane_t5_ParamLimits

0x7b2f,	// (0x00082134) main_mup_pane_t5

0x7b41,	// (0x00082146) main_mup_pane_t6_ParamLimits

0x7b41,	// (0x00082146) main_mup_pane_t6

0x0005,

0xf468,	// (0x00089a6d) main_mup_pane_t_ParamLimits

0xf468,	// (0x00089a6d) main_mup_pane_t

0x7b57,	// (0x0008215c) mup_progress_pane_ParamLimits

0x7b57,	// (0x0008215c) mup_progress_pane

0x7b63,	// (0x00082168) mup_visualizer_pane_ParamLimits

0x7b63,	// (0x00082168) mup_visualizer_pane

0x7b9d,	// (0x000821a2) mup_volume_pane_ParamLimits

0x7b9d,	// (0x000821a2) mup_volume_pane

0x1026,	// (0x0007b62b) mup_visualizer_pane_g1_ParamLimits

0x1026,	// (0x0007b62b) mup_visualizer_pane_g1

0x1026,	// (0x0007b62b) mup_visualizer_pane_g2_ParamLimits

0x1026,	// (0x0007b62b) mup_visualizer_pane_g2

0x0e8a,	// (0x0007b48f) mup_visualizer_pane_g3_ParamLimits

0x0e8a,	// (0x0007b48f) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x00089a7a) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x00089a7a) mup_visualizer_pane_g

0xe4d6,	// (0x00088adb) mup_volume_pane_g1

0x103c,	// (0x0007b641) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x00089a81) mup_volume_pane_g

0xe4d6,	// (0x00088adb) mup_progress_pane_g1

0x1045,	// (0x0007b64a) mup_progress_pane_g2

0x104e,	// (0x0007b653) mup_progress_pane_g3

0x0002,

0xf481,	// (0x00089a86) mup_progress_pane_g

0xe14f,	// (0x00088754) bg_popup_window_pane_cp05

0x1057,	// (0x0007b65c) heading_pane_cp02_ParamLimits

0x1057,	// (0x0007b65c) heading_pane_cp02

0x1071,	// (0x0007b676) list_popup_blid_pane

0x1079,	// (0x0007b67e) list_blid_sat_info_pane_ParamLimits

0x1079,	// (0x0007b67e) list_blid_sat_info_pane

0x108c,	// (0x0007b691) list_blid_sat_info_pane_g1

0x1094,	// (0x0007b699) list_blid_sat_info_pane_t1

0x7caa,	// (0x000822af) mup_equalizer_pane_ParamLimits

0x7caa,	// (0x000822af) mup_equalizer_pane

0x7ccb,	// (0x000822d0) mup_equalizer_pane_cp1_ParamLimits

0x7ccb,	// (0x000822d0) mup_equalizer_pane_cp1

0x7cec,	// (0x000822f1) mup_equalizer_pane_cp2_ParamLimits

0x7cec,	// (0x000822f1) mup_equalizer_pane_cp2

0x7d0d,	// (0x00082312) mup_equalizer_pane_cp3_ParamLimits

0x7d0d,	// (0x00082312) mup_equalizer_pane_cp3

0x7d2e,	// (0x00082333) mup_equalizer_pane_cp4_ParamLimits

0x7d2e,	// (0x00082333) mup_equalizer_pane_cp4

0x7d4f,	// (0x00082354) mup_equalizer_pane_cp5

0x7d65,	// (0x0008236a) mup_equalizer_pane_cp6

0x7d7d,	// (0x00082382) mup_equalizer_pane_cp7

0x2268,	// (0x0007c86d) bg_popup_call_poc_act_pane_g9

0x2270,	// (0x0007c875) bg_popup_call_poc_act_pane_g10

0x2278,	// (0x0007c87d) bg_popup_call_poc_act_pane_g11

0x000a,

0xe3aa,	// (0x000889af) mup_scale_pane

0xe4d6,	// (0x00088adb) mup_scale_pane_g1

0x10a2,	// (0x0007b6a7) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x00089aa2) mup_scale_pane_g

0x10c6,	// (0x0007b6cb) msg_data_pane

0x10ce,	// (0x0007b6d3) scroll_pane_cp017

0x7da7,	// (0x000823ac) bg_list_pane_cp04_ParamLimits

0x7da7,	// (0x000823ac) bg_list_pane_cp04

0x10d6,	// (0x0007b6db) msg_data_pane_g1

0x7dcd,	// (0x000823d2) msg_data_pane_g2

0x7dd7,	// (0x000823dc) msg_data_pane_g3

0x7ddf,	// (0x000823e4) msg_data_pane_g4

0x7de7,	// (0x000823ec) msg_data_pane_g5

0x7def,	// (0x000823f4) msg_data_pane_g6

0x7df7,	// (0x000823fc) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x00089ab1) msg_data_pane_g

0x7dff,	// (0x00082404) msg_text_pane_ParamLimits

0x7dff,	// (0x00082404) msg_text_pane

0x7e36,	// (0x0008243b) qrid_highlight_pane_cp011_ParamLimits

0x7e36,	// (0x0008243b) qrid_highlight_pane_cp011

0xe14f,	// (0x00088754) msg_body_pane

0xe14f,	// (0x00088754) msg_header_pane

0x10e7,	// (0x0007b6ec) input_focus_pane_cp07

0x7e5c,	// (0x00082461) msg_header_pane_t1_ParamLimits

0x7e5c,	// (0x00082461) msg_header_pane_t1

0x7e6e,	// (0x00082473) msg_header_pane_t2_ParamLimits

0x7e6e,	// (0x00082473) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x00089ac5) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x00089ac5) msg_header_pane_t

0x10fc,	// (0x0007b701) msg_body_pane_g1

0x7e80,	// (0x00082485) msg_body_pane_t1_ParamLimits

0x7e80,	// (0x00082485) msg_body_pane_t1

0x7eb1,	// (0x000824b6) msg_body_pane_t2_ParamLimits

0x7eb1,	// (0x000824b6) msg_body_pane_t2

0x7ec3,	// (0x000824c8) msg_body_pane_t3_ParamLimits

0x7ec3,	// (0x000824c8) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x00089aca) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x00089aca) msg_body_pane_t

0x7f27,	// (0x0008252c) main_viewer_pane_g1_ParamLimits

0x7f27,	// (0x0008252c) main_viewer_pane_g1

0x7f33,	// (0x00082538) main_viewer_pane_g2_ParamLimits

0x7f33,	// (0x00082538) main_viewer_pane_g2

0x7f3f,	// (0x00082544) main_viewer_pane_g3_ParamLimits

0x7f3f,	// (0x00082544) main_viewer_pane_g3

0x7f50,	// (0x00082555) main_viewer_pane_g4_ParamLimits

0x7f50,	// (0x00082555) main_viewer_pane_g4

0x7f61,	// (0x00082566) main_viewer_pane_g5_ParamLimits

0x7f61,	// (0x00082566) main_viewer_pane_g5

0x7f61,	// (0x00082566) main_viewer_pane_g7_ParamLimits

0x7f61,	// (0x00082566) main_viewer_pane_g7

0x0a35,	// (0x0007b03a) main_viewer_pane_g8_ParamLimits

0x0a35,	// (0x0007b03a) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x00089ada) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x00089ada) main_viewer_pane_g

0x1146,	// (0x0007b74b) viewer_content_pane_ParamLimits

0x1146,	// (0x0007b74b) viewer_content_pane

0x7f9f,	// (0x000825a4) main_postcard_pane_g1_ParamLimits

0x7f9f,	// (0x000825a4) main_postcard_pane_g1

0x7fad,	// (0x000825b2) main_postcard_pane_g2_ParamLimits

0x7fad,	// (0x000825b2) main_postcard_pane_g2

0x7fbb,	// (0x000825c0) main_postcard_pane_g3_ParamLimits

0x7fbb,	// (0x000825c0) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x00089aeb) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x00089aeb) main_postcard_pane_g

0x7fcb,	// (0x000825d0) main_postcard_pane_g4

0x246a,	// (0x0007ca6f) smil_status_volume_pane_g2

0x7ff7,	// (0x000825fc) postcard_pane_ParamLimits

0x7ff7,	// (0x000825fc) postcard_pane

0x1026,	// (0x0007b62b) postcard_pane_g1_ParamLimits

0x1026,	// (0x0007b62b) postcard_pane_g1

0x8029,	// (0x0008262e) postcard_pane_g2_ParamLimits

0x8029,	// (0x0008262e) postcard_pane_g2

0x8035,	// (0x0008263a) postcard_pane_g3_ParamLimits

0x8035,	// (0x0008263a) postcard_pane_g3

0x1162,	// (0x0007b767) postcard_pane_g4_ParamLimits

0x1162,	// (0x0007b767) postcard_pane_g4

0x8041,	// (0x00082646) postcard_pane_g5_ParamLimits

0x8041,	// (0x00082646) postcard_pane_g5

0x804d,	// (0x00082652) postcard_pane_g6_ParamLimits

0x804d,	// (0x00082652) postcard_pane_g6

0x1154,	// (0x0007b759) postcard_pane_g7_ParamLimits

0x1154,	// (0x0007b759) postcard_pane_g7

0x0006,

0xf4f3,	// (0x00089af8) postcard_pane_g_ParamLimits

0xf4f3,	// (0x00089af8) postcard_pane_g

0x8059,	// (0x0008265e) main_mp2_pane_g1_ParamLimits

0x8059,	// (0x0008265e) main_mp2_pane_g1

0x8065,	// (0x0008266a) main_mp2_pane_g2_ParamLimits

0x8065,	// (0x0008266a) main_mp2_pane_g2

0x8071,	// (0x00082676) main_mp2_pane_g3_ParamLimits

0x8071,	// (0x00082676) main_mp2_pane_g3

0x0002,

0xf502,	// (0x00089b07) main_mp2_pane_g_ParamLimits

0xf502,	// (0x00089b07) main_mp2_pane_g

0x807d,	// (0x00082682) main_mp2_pane_t1_ParamLimits

0x807d,	// (0x00082682) main_mp2_pane_t1

0x8094,	// (0x00082699) main_mp2_pane_t2_ParamLimits

0x8094,	// (0x00082699) main_mp2_pane_t2

0x80a8,	// (0x000826ad) main_mp2_pane_t3_ParamLimits

0x80a8,	// (0x000826ad) main_mp2_pane_t3

0x0002,

0xf509,	// (0x00089b0e) main_mp2_pane_t_ParamLimits

0xf509,	// (0x00089b0e) main_mp2_pane_t

0x1170,	// (0x0007b775) pec_content_pane_ParamLimits

0x1170,	// (0x0007b775) pec_content_pane

0xe7cd,	// (0x00088dd2) scroll_pane_cp015

0x1182,	// (0x0007b787) pec_attribute_pane_ParamLimits

0x1182,	// (0x0007b787) pec_attribute_pane

0x80ba,	// (0x000826bf) pec_content_pane_g1_ParamLimits

0x80ba,	// (0x000826bf) pec_content_pane_g1

0x1192,	// (0x0007b797) pec_content_pane_t1_ParamLimits

0x1192,	// (0x0007b797) pec_content_pane_t1

0x11a4,	// (0x0007b7a9) pec_content_pane_t2_ParamLimits

0x11a4,	// (0x0007b7a9) pec_content_pane_t2

0x0001,

0xf510,	// (0x00089b15) pec_content_pane_t_ParamLimits

0xf510,	// (0x00089b15) pec_content_pane_t

0x80c6,	// (0x000826cb) list_single_graphic_pane_cp01_ParamLimits

0x80c6,	// (0x000826cb) list_single_graphic_pane_cp01

0xe3aa,	// (0x000889af) bg_popup_sub_pane_cp04

0x11b6,	// (0x0007b7bb) popup_mup_playback_window_g1

0x11c2,	// (0x0007b7c7) popup_mup_playback_window_t1

0x11d7,	// (0x0007b7dc) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x00089b1a) popup_mup_playback_window_t

0x120e,	// (0x0007b813) main_image_pane_g1_ParamLimits

0x120e,	// (0x0007b813) main_image_pane_g1

0x1251,	// (0x0007b856) scroll_pane_cp018_ParamLimits

0x1251,	// (0x0007b856) scroll_pane_cp018

0x1269,	// (0x0007b86e) scroll_pane_cp016_ParamLimits

0x1269,	// (0x0007b86e) scroll_pane_cp016

0x815f,	// (0x00082764) smil2_image_pane_ParamLimits

0x815f,	// (0x00082764) smil2_image_pane

0x818f,	// (0x00082794) smil2_root_pane_ParamLimits

0x818f,	// (0x00082794) smil2_root_pane

0x81bb,	// (0x000827c0) smil2_text_pane_ParamLimits

0x81bb,	// (0x000827c0) smil2_text_pane

0xe14f,	// (0x00088754) bg_list_pane_cp06

0x12a5,	// (0x0007b8aa) grid_radio_pane

0xe14f,	// (0x00088754) bg_popup_window_pane_cp06

0x12ad,	// (0x0007b8b2) main_fmradio_pane_t1

0x0ce9,	// (0x0007b2ee) heading_pane_cp04

0x12bb,	// (0x0007b8c0) main_fmradio_pane_t2

0x2280,	// (0x0007c885) popup_cale_lunar_info_window_g1

0x12c9,	// (0x0007b8ce) main_fmradio_pane_t3

0x2288,	// (0x0007c88d) popup_cale_lunar_info_window_g2

0x12d7,	// (0x0007b8dc) main_fmradio_pane_t4

0x0001,

0x12e5,	// (0x0007b8ea) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x00089bf5) popup_cale_lunar_info_window_g

0xf52a,	// (0x00089b2f) main_fmradio_pane_t

0x12f3,	// (0x0007b8f8) wait_bar_pane_cp03

0x12fb,	// (0x0007b900) cell_fmradio_pane_ParamLimits

0x12fb,	// (0x0007b900) cell_fmradio_pane

0x1154,	// (0x0007b759) cell_fmradio_pane_g1_ParamLimits

0x1154,	// (0x0007b759) cell_fmradio_pane_g1

0xe14f,	// (0x00088754) grid_highlight_pane_cp011

0x130e,	// (0x0007b913) poc_content_pane_ParamLimits

0x130e,	// (0x0007b913) poc_content_pane

0x1320,	// (0x0007b925) scroll_pane_cp019

0x81fb,	// (0x00082800) popup_call_poc_act_window_ParamLimits

0x81fb,	// (0x00082800) popup_call_poc_act_window

0x8208,	// (0x0008280d) popup_call_poc_inact_window_ParamLimits

0x8208,	// (0x0008280d) popup_call_poc_inact_window

0xf5c7,	// (0x00089bcc) bg_popup_call_poc_act_pane_g

0x21f8,	// (0x0007c7fd) bg_popup_call_poc_inact_pane_g1

0x2200,	// (0x0007c805) bg_popup_call_poc_inact_pane_g2

0x1328,	// (0x0007b92d) popup_call_poc_act_window_g2

0x2208,	// (0x0007c80d) bg_popup_call_poc_inact_pane_g3

0x2210,	// (0x0007c815) bg_popup_call_poc_inact_pane_g4

0x2218,	// (0x0007c81d) bg_popup_call_poc_inact_pane_g5

0x1330,	// (0x0007b935) popup_call_poc_act_window_t1_ParamLimits

0x1330,	// (0x0007b935) popup_call_poc_act_window_t1

0x1358,	// (0x0007b95d) popup_call_poc_act_window_t2_ParamLimits

0x1358,	// (0x0007b95d) popup_call_poc_act_window_t2

0x1380,	// (0x0007b985) popup_call_poc_act_window_t3_ParamLimits

0x1380,	// (0x0007b985) popup_call_poc_act_window_t3

0x13a8,	// (0x0007b9ad) popup_call_poc_act_window_t4_ParamLimits

0x13a8,	// (0x0007b9ad) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x00089b3a) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x00089b3a) popup_call_poc_act_window_t

0x2220,	// (0x0007c825) bg_popup_call_poc_inact_pane_g6

0x2228,	// (0x0007c82d) bg_popup_call_poc_inact_pane_g7

0x2230,	// (0x0007c835) bg_popup_call_poc_inact_pane_g8

0x13ba,	// (0x0007b9bf) popup_call_poc_inact_window_g2

0x2238,	// (0x0007c83d) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x00089bb9) bg_popup_call_poc_inact_pane_g

0x13c2,	// (0x0007b9c7) popup_call_poc_inact_window_t1_ParamLimits

0x13c2,	// (0x0007b9c7) popup_call_poc_inact_window_t1

0x13d7,	// (0x0007b9dc) popup_call_poc_inact_window_t2_ParamLimits

0x13d7,	// (0x0007b9dc) popup_call_poc_inact_window_t2

0x13ec,	// (0x0007b9f1) popup_call_poc_inact_window_t3_ParamLimits

0x13ec,	// (0x0007b9f1) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x00089b43) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x00089b43) popup_call_poc_inact_window_t

0x23f0,	// (0x0007c9f5) context_pane_ParamLimits

0x87f8,	// (0x00082dfd) signal_pane_ParamLimits

0x0f55,	// (0x0007b55a) main_call2_pane

0x23de,	// (0x0007c9e3) popup_phob_thumbnail2_window_ParamLimits

0x23de,	// (0x0007c9e3) popup_phob_thumbnail2_window

0x7ed5,	// (0x000824da) aid_hotspot_pointer_arrow_pane

0x7edd,	// (0x000824e2) aid_hotspot_pointer_hand_pane

0x852a,	// (0x00082b2f) phob_pre_status_pane_g5

0x645e,	// (0x00080a63) cams_zoom_pane_ParamLimits

0x646a,	// (0x00080a6f) image_vga_pane_ParamLimits

0x6479,	// (0x00080a7e) main_camera_pane_g1_ParamLimits

0x6487,	// (0x00080a8c) main_camera_pane_g2_ParamLimits

0x6493,	// (0x00080a98) main_camera_pane_g3_ParamLimits

0x649f,	// (0x00080aa4) main_camera_pane_g4_ParamLimits

0x64ab,	// (0x00080ab0) main_camera_pane_g5_ParamLimits

0x64b7,	// (0x00080abc) main_camera_pane_g6_ParamLimits

0x64c3,	// (0x00080ac8) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x00089842) main_camera_pane_g_ParamLimits

0x64cf,	// (0x00080ad4) main_camera_pane_t1_ParamLimits

0x64e1,	// (0x00080ae6) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x00089853) main_camera_pane_t_ParamLimits

0xe3aa,	// (0x000889af) bg_popup_preview_window_pane_cp01_ParamLimits

0xe3aa,	// (0x000889af) bg_popup_preview_window_pane_cp01

0x1401,	// (0x0007ba06) popup_phob_thumbnail2_window_g1_ParamLimits

0x1401,	// (0x0007ba06) popup_phob_thumbnail2_window_g1

0xe14f,	// (0x00088754) call2_cli_visual_pane

0x8224,	// (0x00082829) popup_call2_audio_conf_window_ParamLimits

0x8224,	// (0x00082829) popup_call2_audio_conf_window

0x8239,	// (0x0008283e) popup_call2_audio_first_window_ParamLimits

0x8239,	// (0x0008283e) popup_call2_audio_first_window

0x82d7,	// (0x000828dc) popup_call2_audio_in_window_ParamLimits

0x82d7,	// (0x000828dc) popup_call2_audio_in_window

0x8319,	// (0x0008291e) popup_call2_audio_out_window_ParamLimits

0x8319,	// (0x0008291e) popup_call2_audio_out_window

0x837b,	// (0x00082980) popup_call2_audio_second_window_ParamLimits

0x837b,	// (0x00082980) popup_call2_audio_second_window

0x83d9,	// (0x000829de) popup_call2_audio_wait_window_ParamLimits

0x83d9,	// (0x000829de) popup_call2_audio_wait_window

0xe14f,	// (0x00088754) bg_popup_call2_act_pane_cp03

0xe38c,	// (0x00088991) list_conf_pane_cp

0x140d,	// (0x0007ba12) popup_call2_audio_conf_window_t1

0x0d46,	// (0x0007b34b) list_single_graphic_popup_conf2_pane_ParamLimits

0x0d46,	// (0x0007b34b) list_single_graphic_popup_conf2_pane

0x0d59,	// (0x0007b35e) list_highlight_pane_cp04

0x141b,	// (0x0007ba20) list_single_graphic_popup_conf2_pane_g1

0x0d6a,	// (0x0007b36f) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x00089b4a) list_single_graphic_popup_conf2_pane_g

0x1425,	// (0x0007ba2a) list_single_graphic_popup_conf2_pane_t1

0x1433,	// (0x0007ba38) bg_popup_call2_act_pane_cp01_ParamLimits

0x1433,	// (0x0007ba38) bg_popup_call2_act_pane_cp01

0x14bd,	// (0x0007bac2) call_type_pane_cp05_ParamLimits

0x14bd,	// (0x0007bac2) call_type_pane_cp05

0x1511,	// (0x0007bb16) popup_call2_audio_second_window_g1_ParamLimits

0x1511,	// (0x0007bb16) popup_call2_audio_second_window_g1

0x1565,	// (0x0007bb6a) popup_call2_audio_second_window_g2_ParamLimits

0x1565,	// (0x0007bb6a) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x00089b4f) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x00089b4f) popup_call2_audio_second_window_g

0x15ca,	// (0x0007bbcf) popup_call2_audio_second_window_t1_ParamLimits

0x15ca,	// (0x0007bbcf) popup_call2_audio_second_window_t1

0x1685,	// (0x0007bc8a) popup_call2_audio_second_window_t2_ParamLimits

0x1685,	// (0x0007bc8a) popup_call2_audio_second_window_t2

0x16d8,	// (0x0007bcdd) popup_call2_audio_second_window_t3_ParamLimits

0x16d8,	// (0x0007bcdd) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x00089b56) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x00089b56) popup_call2_audio_second_window_t

0xe14f,	// (0x00088754) bg_popup_call2_in_pane_cp02

0xe159,	// (0x0008875e) call_type_pane_cp04

0xe161,	// (0x00088766) popup_call2_audio_wait_window_g1

0xe169,	// (0x0008876e) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0008972f) popup_call2_audio_wait_window_g

0xe171,	// (0x00088776) popup_call2_audio_wait_window_t3

0x17cb,	// (0x0007bdd0) bg_popup_call2_act_pane_ParamLimits

0x17cb,	// (0x0007bdd0) bg_popup_call2_act_pane

0x188b,	// (0x0007be90) call_type_pane_cp03_ParamLimits

0x188b,	// (0x0007be90) call_type_pane_cp03

0x18ef,	// (0x0007bef4) popup_call2_audio_first_window_g1_ParamLimits

0x18ef,	// (0x0007bef4) popup_call2_audio_first_window_g1

0x195f,	// (0x0007bf64) popup_call2_audio_first_window_g2_ParamLimits

0x195f,	// (0x0007bf64) popup_call2_audio_first_window_g2

0x1026,	// (0x0007b62b) popup_call2_audio_first_window_g3_ParamLimits

0x1026,	// (0x0007b62b) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x00089b5f) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x00089b5f) popup_call2_audio_first_window_g

0x1a3d,	// (0x0007c042) popup_call2_audio_first_window_t1_ParamLimits

0x1a3d,	// (0x0007c042) popup_call2_audio_first_window_t1

0x1b40,	// (0x0007c145) popup_call2_audio_first_window_t4_ParamLimits

0x1b40,	// (0x0007c145) popup_call2_audio_first_window_t4

0x1c23,	// (0x0007c228) popup_call2_audio_first_window_t5_ParamLimits

0x1c23,	// (0x0007c228) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x00089b6a) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x00089b6a) popup_call2_audio_first_window_t

0xe3a2,	// (0x000889a7) bg_popup_call2_act_pane_g1

0x2290,	// (0x0007c895) popup_cale_lunar_info_window_t1

0x229e,	// (0x0007c8a3) popup_cale_lunar_info_window_t2

0x22ac,	// (0x0007c8b1) popup_cale_lunar_info_window_t3

0xe14f,	// (0x00088754) bg_popup_call2_bubble_pane

0x1d24,	// (0x0007c329) bg_popup_call2_in_pane_cp01_ParamLimits

0x1d24,	// (0x0007c329) bg_popup_call2_in_pane_cp01

0xde2b,	// (0x00088430) call_type_pane_cp02

0x1d6c,	// (0x0007c371) popup_call2_audio_out_window_g1_ParamLimits

0x1d6c,	// (0x0007c371) popup_call2_audio_out_window_g1

0x1d98,	// (0x0007c39d) popup_call2_audio_out_window_g2_ParamLimits

0x1d98,	// (0x0007c39d) popup_call2_audio_out_window_g2

0x1dc0,	// (0x0007c3c5) popup_call2_audio_out_window_g3_ParamLimits

0x1dc0,	// (0x0007c3c5) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x00089b73) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x00089b73) popup_call2_audio_out_window_g

0x1dfb,	// (0x0007c400) popup_call2_audio_out_window_t1_ParamLimits

0x1dfb,	// (0x0007c400) popup_call2_audio_out_window_t1

0x1e5a,	// (0x0007c45f) popup_call2_audio_out_window_t2_ParamLimits

0x1e5a,	// (0x0007c45f) popup_call2_audio_out_window_t2

0x1eae,	// (0x0007c4b3) popup_call2_audio_out_window_t3_ParamLimits

0x1eae,	// (0x0007c4b3) popup_call2_audio_out_window_t3

0x1ec4,	// (0x0007c4c9) popup_call2_audio_out_window_t4_ParamLimits

0x1ec4,	// (0x0007c4c9) popup_call2_audio_out_window_t4

0x1eda,	// (0x0007c4df) popup_call2_audio_out_window_t5_ParamLimits

0x1eda,	// (0x0007c4df) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x00089b7c) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x00089b7c) popup_call2_audio_out_window_t

0x1f3e,	// (0x0007c543) bg_popup_call2_in_pane_ParamLimits

0x1f3e,	// (0x0007c543) bg_popup_call2_in_pane

0x1f9a,	// (0x0007c59f) popup_call2_audio_in_window_g1_ParamLimits

0x1f9a,	// (0x0007c59f) popup_call2_audio_in_window_g1

0x1fd2,	// (0x0007c5d7) popup_call2_audio_in_window_g2_ParamLimits

0x1fd2,	// (0x0007c5d7) popup_call2_audio_in_window_g2

0x200a,	// (0x0007c60f) popup_call2_audio_in_window_g3_ParamLimits

0x200a,	// (0x0007c60f) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x00089b89) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x00089b89) popup_call2_audio_in_window_g

0x2062,	// (0x0007c667) popup_call2_audio_in_window_t1_ParamLimits

0x2062,	// (0x0007c667) popup_call2_audio_in_window_t1

0x20e2,	// (0x0007c6e7) popup_call2_audio_in_window_t2_ParamLimits

0x20e2,	// (0x0007c6e7) popup_call2_audio_in_window_t2

0x2162,	// (0x0007c767) popup_call2_audio_in_window_t3_ParamLimits

0x2162,	// (0x0007c767) popup_call2_audio_in_window_t3

0x217c,	// (0x0007c781) popup_call2_audio_in_window_t4_ParamLimits

0x217c,	// (0x0007c781) popup_call2_audio_in_window_t4

0x218e,	// (0x0007c793) popup_call2_audio_in_window_t5_ParamLimits

0x218e,	// (0x0007c793) popup_call2_audio_in_window_t5

0x21a3,	// (0x0007c7a8) popup_call2_audio_in_window_t6_ParamLimits

0x21a3,	// (0x0007c7a8) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x00089b92) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x00089b92) popup_call2_audio_in_window_t

0xe3a2,	// (0x000889a7) bg_popup_call2_in_pane_g1

0x22ba,	// (0x0007c8bf) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x00089bfa) popup_cale_lunar_info_window_t

0xe3aa,	// (0x000889af) bg_popup_call2_rect_pane_ParamLimits

0xe3aa,	// (0x000889af) bg_popup_call2_rect_pane

0xe14f,	// (0x00088754) call2_cli_visual_graphic_pane

0xe14f,	// (0x00088754) call2_cli_visual_text_pane

0x889e,	// (0x00082ea3) smil_status_volume_pane_g3

0x0002,

0xe4d6,	// (0x00088adb) call2_cli_visual_graphic_pane_g1

0xe4d6,	// (0x00088adb) call2_cli_visual_graphic_pane_g2

0xe4d6,	// (0x00088adb) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x00089b9f) call2_cli_visual_graphic_pane_g

0x21b8,	// (0x0007c7bd) bg_popup_call2_rect_pane_g1

0xe562,	// (0x00088b67) bg_popup_call2_rect_pane_g2

0x21c0,	// (0x0007c7c5) bg_popup_call2_rect_pane_g3

0x21c8,	// (0x0007c7cd) bg_popup_call2_rect_pane_g4

0x21d0,	// (0x0007c7d5) bg_popup_call2_rect_pane_g5

0x21d8,	// (0x0007c7dd) bg_popup_call2_rect_pane_g6

0x21e0,	// (0x0007c7e5) bg_popup_call2_rect_pane_g7

0x21e8,	// (0x0007c7ed) bg_popup_call2_rect_pane_g8

0x21f0,	// (0x0007c7f5) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x00089ba6) bg_popup_call2_rect_pane_g

0x21f8,	// (0x0007c7fd) bg_popup_call2_bubble_pane_g1

0x2200,	// (0x0007c805) bg_popup_call2_bubble_pane_g2

0x2208,	// (0x0007c80d) bg_popup_call2_bubble_pane_g3

0x2210,	// (0x0007c815) bg_popup_call2_bubble_pane_g4

0x2218,	// (0x0007c81d) bg_popup_call2_bubble_pane_g5

0x2220,	// (0x0007c825) bg_popup_call2_bubble_pane_g6

0x2228,	// (0x0007c82d) bg_popup_call2_bubble_pane_g7

0x2230,	// (0x0007c835) bg_popup_call2_bubble_pane_g8

0x2238,	// (0x0007c83d) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x00089bb9) bg_popup_call2_bubble_pane_g

0x5f9b,	// (0x000805a0) aid_cale_week_size_cell_pane

0x64f3,	// (0x00080af8) aid_cams_cif_uncrop_pane_ParamLimits

0x64f3,	// (0x00080af8) aid_cams_cif_uncrop_pane

0x6650,	// (0x00080c55) aid_cams_size_cell_ParamLimits

0x6650,	// (0x00080c55) aid_cams_size_cell

0x665c,	// (0x00080c61) grid_cams_pane_ParamLimits

0x666a,	// (0x00080c6f) linegrid_cams_pane_ParamLimits

0x6755,	// (0x00080d5a) call_video_pane_t1

0x676e,	// (0x00080d73) call_video_pane_t2

0x0001,

0xf2a1,	// (0x000898a6) call_video_pane_t

0x6c23,	// (0x00081228) aid_cale_month_size_cell_pane_ParamLimits

0x6c23,	// (0x00081228) aid_cale_month_size_cell_pane

0xf63e,	// (0x00089c43) smil_status_volume_pane_g

0x88ab,	// (0x00082eb0) volume_smil_pane_ParamLimits

0xdcee,	// (0x000882f3) aid_popup2_width_pane

0x5e98,	// (0x0008049d) cell_qdial_pane_g4_ParamLimits

0x5e98,	// (0x0008049d) cell_qdial_pane_g4

0x77b8,	// (0x00081dbd) aid_blid_cardinal_pane_ParamLimits

0x77c8,	// (0x00081dcd) aid_blid_destination_pane_ParamLimits

0x77c8,	// (0x00081dcd) aid_blid_destination_pane

0xe3aa,	// (0x000889af) bg_popup_call_poc_act_pane_ParamLimits

0xe3aa,	// (0x000889af) bg_popup_call_poc_act_pane

0xe3aa,	// (0x000889af) bg_popup_call_poc_inact_pane_ParamLimits

0xe3aa,	// (0x000889af) bg_popup_call_poc_inact_pane

0x2240,	// (0x0007c845) bg_popup_call_poc_act_pane_g1

0x2248,	// (0x0007c84d) bg_popup_call_poc_act_pane_g2

0x2250,	// (0x0007c855) bg_popup_call_poc_act_pane_g3

0x2210,	// (0x0007c815) bg_popup_call_poc_act_pane_g4

0x2218,	// (0x0007c81d) bg_popup_call_poc_act_pane_g5

0x2258,	// (0x0007c85d) bg_popup_call_poc_act_pane_g6

0x2228,	// (0x0007c82d) bg_popup_call_poc_act_pane_g7

0x2260,	// (0x0007c865) bg_popup_call_poc_act_pane_g8

0xe14f,	// (0x00088754) main_usb_pane

0x23b9,	// (0x0007c9be) popup_cale_lunar_info_window

0x6a17,	// (0x0008101c) im_reading_pane_t1_ParamLimits

0xe725,	// (0x00088d2a) list_im_pane_ParamLimits

0xe736,	// (0x00088d3b) scroll_pane_cp07_ParamLimits

0xe14f,	// (0x00088754) grid_highlight_pane_cp012

0xe3aa,	// (0x000889af) mup_scale_pane_ParamLimits

0x1026,	// (0x0007b62b) main_usb_pane_g1_ParamLimits

0x1026,	// (0x0007b62b) main_usb_pane_g1

0x844d,	// (0x00082a52) main_usb_pane_g2_ParamLimits

0x844d,	// (0x00082a52) main_usb_pane_g2

0x0001,

0xf5de,	// (0x00089be3) main_usb_pane_g_ParamLimits

0xf5de,	// (0x00089be3) main_usb_pane_g

0x8459,	// (0x00082a5e) main_usb_pane_t1_ParamLimits

0x8459,	// (0x00082a5e) main_usb_pane_t1

0x846b,	// (0x00082a70) main_usb_pane_t2_ParamLimits

0x846b,	// (0x00082a70) main_usb_pane_t2

0x847d,	// (0x00082a82) main_usb_pane_t3_ParamLimits

0x847d,	// (0x00082a82) main_usb_pane_t3

0x848f,	// (0x00082a94) main_usb_pane_t4_ParamLimits

0x848f,	// (0x00082a94) main_usb_pane_t4

0x84a1,	// (0x00082aa6) main_usb_pane_t5_ParamLimits

0x84a1,	// (0x00082aa6) main_usb_pane_t5

0x84b3,	// (0x00082ab8) main_usb_pane_t6_ParamLimits

0x84b3,	// (0x00082ab8) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x00089be8) main_usb_pane_t_ParamLimits

0x775e,	// (0x00081d63) aid_text_placing

0x776a,	// (0x00081d6f) main_location2_pane_t1_ParamLimits

0x777e,	// (0x00081d83) main_location2_pane_t2_ParamLimits

0x7792,	// (0x00081d97) main_location2_pane_t3_ParamLimits

0x77a6,	// (0x00081dab) main_location2_pane_t4_ParamLimits

0x77a6,	// (0x00081dab) main_location2_pane_t4

0xf402,	// (0x00089a07) main_location2_pane_t_ParamLimits

0xe3e6,	// (0x000889eb) find_pinb_pane_g2_ParamLimits

0xe3e6,	// (0x000889eb) find_pinb_pane_g2

0x0001,

0xf150,	// (0x00089755) find_pinb_pane_g_ParamLimits

0xf150,	// (0x00089755) find_pinb_pane_g

0xe3f2,	// (0x000889f7) find_pinb_pane_t1_ParamLimits

0xe404,	// (0x00088a09) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0008975a) find_pinb_pane_t_ParamLimits

0xe14f,	// (0x00088754) main_call3_pane

0x6f6f,	// (0x00081574) cale_month_day_heading_pane_t1_ParamLimits

0x6fcd,	// (0x000815d2) cale_month_day_heading_pane_t2_ParamLimits

0x7032,	// (0x00081637) cale_month_day_heading_pane_t3_ParamLimits

0x7097,	// (0x0008169c) cale_month_day_heading_pane_t4_ParamLimits

0x70fc,	// (0x00081701) cale_month_day_heading_pane_t5_ParamLimits

0x7161,	// (0x00081766) cale_month_day_heading_pane_t6_ParamLimits

0x71c6,	// (0x000817cb) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x000898de) cale_month_day_heading_pane_t_ParamLimits

0x0867,	// (0x0007ae6c) smil_status_volume_pane

0x8011,	// (0x00082616) postcard_address_pane_ParamLimits

0x8011,	// (0x00082616) postcard_address_pane

0x801d,	// (0x00082622) postcard_message_pane_ParamLimits

0x801d,	// (0x00082622) postcard_message_pane

0x8418,	// (0x00082a1d) call2_cli_visual_pane_t1_ParamLimits

0x8418,	// (0x00082a1d) call2_cli_visual_pane_t1

0x8a02,	// (0x00083007) postcard_message_pane_t1_ParamLimits

0x8a02,	// (0x00083007) postcard_message_pane_t1

0x89eb,	// (0x00082ff0) postcard_address_pane_t1_ParamLimits

0x89eb,	// (0x00082ff0) postcard_address_pane_t1

0x89dc,	// (0x00082fe1) popup_call3_audio_in_window_ParamLimits

0x89dc,	// (0x00082fe1) popup_call3_audio_in_window

0x88c0,	// (0x00082ec5) bg_popup_call3_in_pane_ParamLimits

0x88c0,	// (0x00082ec5) bg_popup_call3_in_pane

0x8922,	// (0x00082f27) popup_call3_audio_in_window_g1_ParamLimits

0x8922,	// (0x00082f27) popup_call3_audio_in_window_g1

0x893a,	// (0x00082f3f) popup_call3_audio_in_window_g2_ParamLimits

0x893a,	// (0x00082f3f) popup_call3_audio_in_window_g2

0x8952,	// (0x00082f57) popup_call3_audio_in_window_g3_ParamLimits

0x8952,	// (0x00082f57) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x00089c4a) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x00089c4a) popup_call3_audio_in_window_g

0x897a,	// (0x00082f7f) popup_call3_audio_in_window_t1_ParamLimits

0x897a,	// (0x00082f7f) popup_call3_audio_in_window_t1

0x89a2,	// (0x00082fa7) popup_call3_audio_in_window_t2_ParamLimits

0x89a2,	// (0x00082fa7) popup_call3_audio_in_window_t2

0x89ca,	// (0x00082fcf) popup_call3_audio_in_window_t3_ParamLimits

0x89ca,	// (0x00082fcf) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x00089c53) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x00089c53) popup_call3_audio_in_window_t

0x0f55,	// (0x0007b55a) bg_popup_call3_rect_pane

0x21b8,	// (0x0007c7bd) bg_popup_call3_rect_pane_g1

0xe562,	// (0x00088b67) bg_popup_call3_rect_pane_g2

0x21c0,	// (0x0007c7c5) bg_popup_call3_rect_pane_g3

0x21c8,	// (0x0007c7cd) bg_popup_call3_rect_pane_g4

0x21d0,	// (0x0007c7d5) bg_popup_call3_rect_pane_g5

0x21d8,	// (0x0007c7dd) bg_popup_call3_rect_pane_g6

0x21e0,	// (0x0007c7e5) bg_popup_call3_rect_pane_g7

0x7bb8,	// (0x000821bd) mup_visualizer_osc_pane

0x1034,	// (0x0007b639) mup_visualizer_spec_pane

0x88e0,	// (0x00082ee5) call3_video_qcif_pane_ParamLimits

0x88e0,	// (0x00082ee5) call3_video_qcif_pane

0x88f2,	// (0x00082ef7) call3_video_qcif_uncrop_pane_ParamLimits

0x88f2,	// (0x00082ef7) call3_video_qcif_uncrop_pane

0x8900,	// (0x00082f05) call3_video_subqcif_pane_ParamLimits

0x8900,	// (0x00082f05) call3_video_subqcif_pane

0x8912,	// (0x00082f17) call3_video_subqcif_uncrop_pane_ParamLimits

0x8912,	// (0x00082f17) call3_video_subqcif_uncrop_pane

0x896a,	// (0x00082f6f) popup_call3_audio_in_window_g4_ParamLimits

0x896a,	// (0x00082f6f) popup_call3_audio_in_window_g4

0x888d,	// (0x00082e92) mup_spec_half_pane

0x8896,	// (0x00082e9b) mup_spec_half_pane_cp

0x2450,	// (0x0007ca55) mup_osc_middle_pane

0x2459,	// (0x0007ca5e) mup_visualizer_osc_pane_g1

0x886e,	// (0x00082e73) mup_spec_bar_pane_ParamLimits

0x886e,	// (0x00082e73) mup_spec_bar_pane

0x243d,	// (0x0007ca42) mup_spec_bar_pane_g1

0x2447,	// (0x0007ca4c) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x00089c3e) mup_spec_bar_pane_g

0x5f9b,	// (0x000805a0) aid_cale_week_size_cell_pane_ParamLimits

0x5fae,	// (0x000805b3) bg_cale_heading_pane_ParamLimits

0xe596,	// (0x00088b9b) bg_cale_pane_cp01_ParamLimits

0x5fc2,	// (0x000805c7) cale_week_corner_pane_ParamLimits

0x5fd8,	// (0x000805dd) cale_week_day_heading_pane_ParamLimits

0x5fec,	// (0x000805f1) cale_week_scroll_pane_g1_ParamLimits

0x5ffd,	// (0x00080602) cale_week_scroll_pane_g2_ParamLimits

0x600e,	// (0x00080613) cale_week_scroll_pane_g3_ParamLimits

0x601f,	// (0x00080624) cale_week_scroll_pane_g4_ParamLimits

0x6030,	// (0x00080635) cale_week_scroll_pane_g5_ParamLimits

0x6041,	// (0x00080646) cale_week_scroll_pane_g6_ParamLimits

0x6052,	// (0x00080657) cale_week_scroll_pane_g7_ParamLimits

0x6065,	// (0x0008066a) cale_week_scroll_pane_g8_ParamLimits

0x6078,	// (0x0008067d) cale_week_scroll_pane_g9_ParamLimits

0x6089,	// (0x0008068e) cale_week_scroll_pane_g10_ParamLimits

0x609a,	// (0x0008069f) cale_week_scroll_pane_g11_ParamLimits

0x60ab,	// (0x000806b0) cale_week_scroll_pane_g12_ParamLimits

0x60bc,	// (0x000806c1) cale_week_scroll_pane_g13_ParamLimits

0x60cd,	// (0x000806d2) cale_week_scroll_pane_g14_ParamLimits

0x60de,	// (0x000806e3) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x000897e6) cale_week_scroll_pane_g_ParamLimits

0x60ef,	// (0x000806f4) cale_week_time_pane_ParamLimits

0x6102,	// (0x00080707) grid_cale_week_pane_ParamLimits

0xe5af,	// (0x00088bb4) listscroll_cale_week_pane_t1

0x6117,	// (0x0008071c) scroll_pane_cp08_ParamLimits

0x6c64,	// (0x00081269) cale_month_corner_pane_ParamLimits

0xe94c,	// (0x00088f51) cale_month_pane_t1

0x6f2e,	// (0x00081533) cale_month_week_pane_ParamLimits

0x1026,	// (0x0007b62b) popup_call_status_window_g1_ParamLimits

0x758d,	// (0x00081b92) popup_call_status_window_g2_ParamLimits

0x7599,	// (0x00081b9e) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x0008998e) popup_call_status_window_g_ParamLimits

0x0c6e,	// (0x0007b273) aid_call2_pane

0x7e50,	// (0x00082455) msg_header_pane_g1

0x8011,	// (0x00082616) postcard_address2_pane_ParamLimits

0x8011,	// (0x00082616) postcard_address2_pane

0x801d,	// (0x00082622) postcard_message2_pane_ParamLimits

0x801d,	// (0x00082622) postcard_message2_pane

0x8806,	// (0x00082e0b) message2_row_pane_ParamLimits

0x8806,	// (0x00082e0b) message2_row_pane

0x8821,	// (0x00082e26) address2_row_pane_ParamLimits

0x8821,	// (0x00082e26) address2_row_pane

0x240b,	// (0x0007ca10) postcard_message2_row_pane_g1

0x2413,	// (0x0007ca18) postcard_message2_row_pane_t1

0x240b,	// (0x0007ca10) address2_row_pane_g1

0x2413,	// (0x0007ca18) address2_row_pane_t1

0x63bf,	// (0x000809c4) aid_size_cell_vorec

0xe14f,	// (0x00088754) main_rss_pane

0x8834,	// (0x00082e39) rss_list_single_pane_ParamLimits

0x8834,	// (0x00082e39) rss_list_single_pane

0x2421,	// (0x0007ca26) rss_list_single_pane_t1

0x242f,	// (0x0007ca34) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x00089c39) rss_list_single_pane_t

0xe14f,	// (0x00088754) main_camera2_pane

0xe14f,	// (0x00088754) main_video2_pane

0x8a66,	// (0x0008306b) cams_zoom_pane_cp2_ParamLimits

0x8a66,	// (0x0008306b) cams_zoom_pane_cp2

0x8a72,	// (0x00083077) image2_vga_pane_ParamLimits

0x8a72,	// (0x00083077) image2_vga_pane

0x8a81,	// (0x00083086) main_camera2_pane_g1_ParamLimits

0x8a81,	// (0x00083086) main_camera2_pane_g1

0x8a8d,	// (0x00083092) main_camera2_pane_g2_ParamLimits

0x8a8d,	// (0x00083092) main_camera2_pane_g2

0x8a99,	// (0x0008309e) main_camera2_pane_g3_ParamLimits

0x8a99,	// (0x0008309e) main_camera2_pane_g3

0x8aa5,	// (0x000830aa) main_camera2_pane_g4_ParamLimits

0x8aa5,	// (0x000830aa) main_camera2_pane_g4

0x8ab1,	// (0x000830b6) main_camera2_pane_g5_ParamLimits

0x8ab1,	// (0x000830b6) main_camera2_pane_g5

0x8abd,	// (0x000830c2) main_camera2_pane_g6_ParamLimits

0x8abd,	// (0x000830c2) main_camera2_pane_g6

0x8ac9,	// (0x000830ce) main_camera2_pane_g7_ParamLimits

0x8ac9,	// (0x000830ce) main_camera2_pane_g7

0x8ad5,	// (0x000830da) main_camera2_pane_g8_ParamLimits

0x8ad5,	// (0x000830da) main_camera2_pane_g8

0x0008,

0xf655,	// (0x00089c5a) main_camera2_pane_g_ParamLimits

0xf655,	// (0x00089c5a) main_camera2_pane_g

0x8aed,	// (0x000830f2) main_camera2_pane_t1_ParamLimits

0x8aed,	// (0x000830f2) main_camera2_pane_t1

0x8aff,	// (0x00083104) main_camera2_pane_t2_ParamLimits

0x8aff,	// (0x00083104) main_camera2_pane_t2

0x8b11,	// (0x00083116) main_camera2_pane_t3_ParamLimits

0x8b11,	// (0x00083116) main_camera2_pane_t3

0x8b23,	// (0x00083128) main_camera2_pane_t4_ParamLimits

0x8b23,	// (0x00083128) main_camera2_pane_t4

0x0006,

0xf668,	// (0x00089c6d) main_camera2_pane_t_ParamLimits

0xf668,	// (0x00089c6d) main_camera2_pane_t

0x8b85,	// (0x0008318a) cams_zoom_pane_cp4_ParamLimits

0x8b85,	// (0x0008318a) cams_zoom_pane_cp4

0x8b95,	// (0x0008319a) image2_cif_pane_ParamLimits

0x8b95,	// (0x0008319a) image2_cif_pane

0x8baa,	// (0x000831af) image2_subqcif_pane_ParamLimits

0x8baa,	// (0x000831af) image2_subqcif_pane

0x8bb9,	// (0x000831be) main_video2_pane_g1_ParamLimits

0x8bb9,	// (0x000831be) main_video2_pane_g1

0x8bcb,	// (0x000831d0) main_video2_pane_g2_ParamLimits

0x8bcb,	// (0x000831d0) main_video2_pane_g2

0x8bdb,	// (0x000831e0) main_video2_pane_g3_ParamLimits

0x8bdb,	// (0x000831e0) main_video2_pane_g3

0x8beb,	// (0x000831f0) main_video2_pane_g4_ParamLimits

0x8beb,	// (0x000831f0) main_video2_pane_g4

0x8bfb,	// (0x00083200) main_video2_pane_g5_ParamLimits

0x8bfb,	// (0x00083200) main_video2_pane_g5

0x8c0b,	// (0x00083210) main_video2_pane_g6_ParamLimits

0x8c0b,	// (0x00083210) main_video2_pane_g6

0x0005,

0xf677,	// (0x00089c7c) main_video2_pane_g_ParamLimits

0xf677,	// (0x00089c7c) main_video2_pane_g

0x8c1d,	// (0x00083222) main_video2_pane_t1_ParamLimits

0x8c1d,	// (0x00083222) main_video2_pane_t1

0x8c37,	// (0x0008323c) main_video2_pane_t2_ParamLimits

0x8c37,	// (0x0008323c) main_video2_pane_t2

0x8c5d,	// (0x00083262) main_video2_pane_t3_ParamLimits

0x8c5d,	// (0x00083262) main_video2_pane_t3

0x0002,

0xf684,	// (0x00089c89) main_video2_pane_t_ParamLimits

0xf684,	// (0x00089c89) main_video2_pane_t

0x856a,	// (0x00082b6f) call_muted_g2

0x0001,

0xf626,	// (0x00089c2b) call_muted_g

0xe14f,	// (0x00088754) main_mup2_pane

0x24e2,	// (0x0007cae7) main_mup2_pane_g1_ParamLimits

0x24e2,	// (0x0007cae7) main_mup2_pane_g1

0x8c83,	// (0x00083288) main_mup2_pane_g2_ParamLimits

0x8c83,	// (0x00083288) main_mup2_pane_g2

0x8f05,	// (0x0008350a) main_mup_pane_g13_cp1

0x8f0d,	// (0x00083512) mup_volume_pane_cp1

0x8ca3,	// (0x000832a8) main_mup2_pane_g4_ParamLimits

0x8ca3,	// (0x000832a8) main_mup2_pane_g4

0x8cb8,	// (0x000832bd) main_mup2_pane_g5_ParamLimits

0x8cb8,	// (0x000832bd) main_mup2_pane_g5

0x8ccd,	// (0x000832d2) main_mup2_pane_g6_ParamLimits

0x8ccd,	// (0x000832d2) main_mup2_pane_g6

0x8ce2,	// (0x000832e7) main_mup2_pane_g7_ParamLimits

0x8ce2,	// (0x000832e7) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x00089c90) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x00089c90) main_mup2_pane_g

0x8cfe,	// (0x00083303) main_mup2_pane_t1_ParamLimits

0x8cfe,	// (0x00083303) main_mup2_pane_t1

0x8d15,	// (0x0008331a) main_mup2_pane_t2_ParamLimits

0x8d15,	// (0x0008331a) main_mup2_pane_t2

0x8d2c,	// (0x00083331) main_mup2_pane_t3_ParamLimits

0x8d2c,	// (0x00083331) main_mup2_pane_t3

0x8d43,	// (0x00083348) main_mup2_pane_t4_ParamLimits

0x8d43,	// (0x00083348) main_mup2_pane_t4

0x8d5d,	// (0x00083362) main_mup2_pane_t5_ParamLimits

0x8d5d,	// (0x00083362) main_mup2_pane_t5

0x8d77,	// (0x0008337c) main_mup2_pane_t6_ParamLimits

0x8d77,	// (0x0008337c) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x00089c9f) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x00089c9f) main_mup2_pane_t

0x8daf,	// (0x000833b4) mup2_visualizer_pane_ParamLimits

0x8daf,	// (0x000833b4) mup2_visualizer_pane

0x8de5,	// (0x000833ea) mup_progress_pane_cp_ParamLimits

0x8de5,	// (0x000833ea) mup_progress_pane_cp

0x8ef0,	// (0x000834f5) mup_volume_pane_cp_ParamLimits

0x8ef0,	// (0x000834f5) mup_volume_pane_cp

0x8dfc,	// (0x00083401) mup2_visualizer_pane_g1_ParamLimits

0x8dfc,	// (0x00083401) mup2_visualizer_pane_g1

0x4191,	// (0x0007e796) mup2_visualizer_pane_g2_ParamLimits

0x4191,	// (0x0007e796) mup2_visualizer_pane_g2

0x8e11,	// (0x00083416) mup2_visualizer_pane_g3_ParamLimits

0x8e11,	// (0x00083416) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x00089cac) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x00089cac) mup2_visualizer_pane_g

0x129d,	// (0x0007b8a2) aid_size_cell_fmradio

0x8680,	// (0x00082c85) aid_height_parent_landcape

0xe7b4,	// (0x00088db9) wml_content_pane_cp

0xe7bc,	// (0x00088dc1) wml_tabs_pane

0xe7c5,	// (0x00088dca) popup_wml_miniature_window

0xe7cd,	// (0x00088dd2) scroll_pane_cp021

0xe7e1,	// (0x00088de6) wml_content_pane_comp8

0xe14f,	// (0x00088754) bg_popup_sub_pane_cp05

0x41af,	// (0x0007e7b4) popup_wml_miniature_window_g1

0x41b7,	// (0x0007e7bc) wml_miniature_view_pane

0x8e1f,	// (0x00083424) aid_size_wml_view

0x8e27,	// (0x0008342c) wml_miniature_view_pane_g1

0x8e30,	// (0x00083435) wml_miniature_view_pane_g2

0x8e39,	// (0x0008343e) wml_miniature_view_pane_g3

0x8e41,	// (0x00083446) wml_miniature_view_pane_g4

0x8e49,	// (0x0008344e) wml_miniature_view_pane_g5

0x8e51,	// (0x00083456) wml_miniature_view_pane_g6

0x8e59,	// (0x0008345e) wml_miniature_view_pane_g7

0x8e61,	// (0x00083466) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x00089cb3) wml_miniature_view_pane_g

0x24e2,	// (0x0007cae7) background_graphic_ParamLimits

0x24e2,	// (0x0007cae7) background_graphic

0x41bf,	// (0x0007e7c4) wml_tabs_2_pane

0x41c8,	// (0x0007e7cd) wml_tabs_3_pane_ParamLimits

0x41c8,	// (0x0007e7cd) wml_tabs_3_pane

0x41da,	// (0x0007e7df) wml_tabs_4_pane_ParamLimits

0x41da,	// (0x0007e7df) wml_tabs_4_pane

0x41f0,	// (0x0007e7f5) wml_tabs_5_pane_ParamLimits

0x41f0,	// (0x0007e7f5) wml_tabs_5_pane

0x420a,	// (0x0007e80f) wml_tabs_pane_g2_ParamLimits

0x420a,	// (0x0007e80f) wml_tabs_pane_g2

0x421e,	// (0x0007e823) wml_tabs_pane_g3_ParamLimits

0x421e,	// (0x0007e823) wml_tabs_pane_g3

0x8e69,	// (0x0008346e) wml_tabs_2_active_pane_ParamLimits

0x8e69,	// (0x0008346e) wml_tabs_2_active_pane

0x8e79,	// (0x0008347e) wml_tabs_2_passive_pane_ParamLimits

0x8e79,	// (0x0008347e) wml_tabs_2_passive_pane

0x8e89,	// (0x0008348e) wml_tabs_3_active_pane_cp_ParamLimits

0x8e89,	// (0x0008348e) wml_tabs_3_active_pane_cp

0x8e9a,	// (0x0008349f) wml_tabs_3_passive_pane_ParamLimits

0x8e9a,	// (0x0008349f) wml_tabs_3_passive_pane

0x8eab,	// (0x000834b0) wml_tabs_3_passive_pane_cp_ParamLimits

0x8eab,	// (0x000834b0) wml_tabs_3_passive_pane_cp

0x8ebc,	// (0x000834c1) tabs_4_active_pane

0x8ec4,	// (0x000834c9) tabs_4_passive_pane

0x8ecc,	// (0x000834d1) tabs_4_passive_pane_cp

0x8ed4,	// (0x000834d9) tabs_4_passive_pane_cp2

0x8445,	// (0x00082a4a) aid_height_text

0x7b85,	// (0x0008218a) mup_volume_cont_pane_ParamLimits

0x7b85,	// (0x0008218a) mup_volume_cont_pane

0x5ae5,	// (0x000800ea) aid_size_cell_pinb

0x5aef,	// (0x000800f4) aid_size_list_pinb

0x8dce,	// (0x000833d3) mup2_volume_cont_pane_ParamLimits

0x8dce,	// (0x000833d3) mup2_volume_cont_pane

0x8edc,	// (0x000834e1) mup2_volume_cont_pane_g1_ParamLimits

0x8edc,	// (0x000834e1) mup2_volume_cont_pane_g1

0x5772,	// (0x0007fd77) aid_size_cell_touch_ParamLimits

0x5772,	// (0x0007fd77) aid_size_cell_touch

0x59cb,	// (0x0007ffd0) touch_pane_ParamLimits

0x59cb,	// (0x0007ffd0) touch_pane

0xdcdc,	// (0x000882e1) main_rss2_pane

0x4274,	// (0x0007e879) listscroll_rss2_pane

0x427d,	// (0x0007e882) rss2_navigation_pane

0x4285,	// (0x0007e88a) list_rss2_pane

0x0e0c,	// (0x0007b411) scroll_pane_cp22

0x428d,	// (0x0007e892) rss2_navigation_pane_g1

0x4296,	// (0x0007e89b) rss2_navigation_pane_g2

0x429e,	// (0x0007e8a3) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x00089cc4) rss2_navigation_pane_g

0x42a6,	// (0x0007e8ab) rss2_navigation_pane_t1

0x8f15,	// (0x0008351a) rss2_list_single_pane_ParamLimits

0x8f15,	// (0x0008351a) rss2_list_single_pane

0x42b4,	// (0x0007e8b9) rss2_list_single_pane_t2

0x42c2,	// (0x0007e8c7) rss2_list_single_pane_t3_ParamLimits

0x42c2,	// (0x0007e8c7) rss2_list_single_pane_t3

0x42df,	// (0x0007e8e4) rss2_list_single_pane_t4

0x73ae,	// (0x000819b3) smil_status_pane_g1

0x066e,	// (0x0007ac73) main_image2_pane_ParamLimits

0x066e,	// (0x0007ac73) main_image2_pane

0x8ae1,	// (0x000830e6) main_camera2_pane_g9_ParamLimits

0x8ae1,	// (0x000830e6) main_camera2_pane_g9

0x8b35,	// (0x0008313a) main_camera2_pane_t5_ParamLimits

0x8b35,	// (0x0008313a) main_camera2_pane_t5

0x8b47,	// (0x0008314c) main_camera2_pane_t6_ParamLimits

0x8b47,	// (0x0008314c) main_camera2_pane_t6

0x8f46,	// (0x0008354b) main_image2_pane_g1_ParamLimits

0x8f46,	// (0x0008354b) main_image2_pane_g1

0x81e5,	// (0x000827ea) smil2_video_pane_ParamLimits

0x81e5,	// (0x000827ea) smil2_video_pane

0x0666,	// (0x0007ac6b) aid_zoom_text_primary_cp

0xdd32,	// (0x00088337) popup_preview_fixed_window

0xe71d,	// (0x00088d22) im_reading_pane_g1

0x8a2b,	// (0x00083030) cams2_bc_adjust_pane_cp_ParamLimits

0x8a2b,	// (0x00083030) cams2_bc_adjust_pane_cp

0x8b77,	// (0x0008317c) cams2_bc_adjust_pane_ParamLimits

0x8b77,	// (0x0008317c) cams2_bc_adjust_pane

0x8f52,	// (0x00083557) cams2_bc_adjust_pane_g1

0x8f5a,	// (0x0008355f) cams2_slider_pane

0x8f63,	// (0x00083568) cams2_slider_pane_g1

0x8f6c,	// (0x00083571) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x00089ccb) cams2_slider_pane_g

0x5be0,	// (0x000801e5) calc_display_pane_ParamLimits

0x5bfe,	// (0x00080203) calc_paper_pane_ParamLimits

0x5c1a,	// (0x0008021f) grid_calc_pane_ParamLimits

0x75fb,	// (0x00081c00) popup_clock_digital_window_t1_ParamLimits

0x123a,	// (0x0007b83f) main_image_pane_t1

0x5bc6,	// (0x000801cb) aid_size_cell_calc_ParamLimits

0x5bc6,	// (0x000801cb) aid_size_cell_calc

0x86b2,	// (0x00082cb7) popup_blid_sat_info2_window_ParamLimits

0x86b2,	// (0x00082cb7) popup_blid_sat_info2_window

0x4329,	// (0x0007e92e) aid_size_cell_blid

0x4331,	// (0x0007e936) bg_popup_window_pane_cp07

0x4354,	// (0x0007e959) grid_popup_blid_pane

0x435e,	// (0x0007e963) heading_pane_cp05_ParamLimits

0x435e,	// (0x0007e963) heading_pane_cp05

0x8fa4,	// (0x000835a9) cell_popup_blid_pane_ParamLimits

0x8fa4,	// (0x000835a9) cell_popup_blid_pane

0x8fc8,	// (0x000835cd) cell_popup_blid_pane_g1

0x8fd0,	// (0x000835d5) cell_popup_blid_pane_t1

0x8d94,	// (0x00083399) mup2_indicator_pane_ParamLimits

0x8d94,	// (0x00083399) mup2_indicator_pane

0x0f55,	// (0x0007b55a) mup2_visualizer_osc_pane

0x419d,	// (0x0007e7a2) mup2_visualizer_spec_pane_ParamLimits

0x419d,	// (0x0007e7a2) mup2_visualizer_spec_pane

0x8fde,	// (0x000835e3) mup2_spec_half_pane

0x8fe7,	// (0x000835ec) mup2_spec_half_pane_cp

0x8ff1,	// (0x000835f6) mup2_spec_bar_pane_ParamLimits

0x8ff1,	// (0x000835f6) mup2_spec_bar_pane

0x243d,	// (0x0007ca42) mup2_spec_bar_pane_g1

0x2447,	// (0x0007ca4c) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x00089c3e) mup2_spec_bar_pane_g

0x9010,	// (0x00083615) mup2_osc_middle_pane

0x2459,	// (0x0007ca5e) mup2_visualizer_osc_pane_g1

0xdd5c,	// (0x00088361) popup_number_entry_window_t1_ParamLimits

0xdd6f,	// (0x00088374) popup_number_entry_window_t2_ParamLimits

0xdd81,	// (0x00088386) popup_number_entry_window_t3_ParamLimits

0x5a22,	// (0x00080027) popup_number_entry_window_t5_ParamLimits

0x5a22,	// (0x00080027) popup_number_entry_window_t5

0xf0fb,	// (0x00089700) popup_number_entry_window_t_ParamLimits

0xdd93,	// (0x00088398) text_title_cp2_ParamLimits

0x7ee5,	// (0x000824ea) aid_hotspot_pointer_text2_pane

0x7f73,	// (0x00082578) main_viewer_pane_g9_ParamLimits

0x7f73,	// (0x00082578) main_viewer_pane_g9

0xe94c,	// (0x00088f51) cale_month_pane_t1_ParamLimits

0x089c,	// (0x0007aea1) bg_cale_pane_ParamLimits

0x08b4,	// (0x0007aeb9) list_cale_pane_ParamLimits

0xe5af,	// (0x00088bb4) listscroll_cale_day_pane_t1

0x08c5,	// (0x0007aeca) scroll_pane_cp09_ParamLimits

0x7bc0,	// (0x000821c5) main_mup_eq_pane_t1_ParamLimits

0x7bc0,	// (0x000821c5) main_mup_eq_pane_t1

0x7bda,	// (0x000821df) main_mup_eq_pane_t2_ParamLimits

0x7bda,	// (0x000821df) main_mup_eq_pane_t2

0x7bf4,	// (0x000821f9) main_mup_eq_pane_t3_ParamLimits

0x7bf4,	// (0x000821f9) main_mup_eq_pane_t3

0x7c0c,	// (0x00082211) main_mup_eq_pane_t4_ParamLimits

0x7c0c,	// (0x00082211) main_mup_eq_pane_t4

0x7c24,	// (0x00082229) main_mup_eq_pane_t5_ParamLimits

0x7c24,	// (0x00082229) main_mup_eq_pane_t5

0x7c3c,	// (0x00082241) main_mup_eq_pane_t6_ParamLimits

0x7c3c,	// (0x00082241) main_mup_eq_pane_t6

0x7c50,	// (0x00082255) main_mup_eq_pane_t7_ParamLimits

0x7c50,	// (0x00082255) main_mup_eq_pane_t7

0x7c64,	// (0x00082269) main_mup_eq_pane_t8_ParamLimits

0x7c64,	// (0x00082269) main_mup_eq_pane_t8

0x7c7a,	// (0x0008227f) main_mup_eq_pane_t9_ParamLimits

0x7c7a,	// (0x0008227f) main_mup_eq_pane_t9

0x7c92,	// (0x00082297) main_mup_eq_pane_t10_ParamLimits

0x7c92,	// (0x00082297) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x00089a8d) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x00089a8d) main_mup_eq_pane_t

0x7d4f,	// (0x00082354) mup_equalizer_pane_cp5_ParamLimits

0x7d65,	// (0x0008236a) mup_equalizer_pane_cp6_ParamLimits

0x7d7d,	// (0x00082382) mup_equalizer_pane_cp7_ParamLimits

0xdcdc,	// (0x000882e1) main_gallery_pane

0x2462,	// (0x0007ca67) smil2_volume_pane

0x247d,	// (0x0007ca82) smil_status_volume_pane_g1_ParamLimits

0x246a,	// (0x0007ca6f) smil_status_volume_pane_g2_ParamLimits

0x889e,	// (0x00082ea3) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x00089c43) smil_status_volume_pane_g_ParamLimits

0x4331,	// (0x0007e936) bg_popup_window_pane_cp07_ParamLimits

0x433f,	// (0x0007e944) blid_firmament_pane

0x9019,	// (0x0008361e) aid_size_cell_gallery_ParamLimits

0x9019,	// (0x0008361e) aid_size_cell_gallery

0x9027,	// (0x0008362c) grid_gallery_pane_ParamLimits

0x9027,	// (0x0008362c) grid_gallery_pane

0x9037,	// (0x0008363c) cell_gallery_pane_ParamLimits

0x9037,	// (0x0008363c) cell_gallery_pane

0x9085,	// (0x0008368a) bg_cell_gallery_focus_pane_ParamLimits

0x9085,	// (0x0008368a) bg_cell_gallery_focus_pane

0x9097,	// (0x0008369c) cell_gallery_pane_g1_ParamLimits

0x9097,	// (0x0008369c) cell_gallery_pane_g1

0x90a3,	// (0x000836a8) cell_gallery_pane_g2_ParamLimits

0x90a3,	// (0x000836a8) cell_gallery_pane_g2

0x90b0,	// (0x000836b5) cell_gallery_pane_g3_ParamLimits

0x90b0,	// (0x000836b5) cell_gallery_pane_g3

0x90bd,	// (0x000836c2) cell_gallery_pane_g4_ParamLimits

0x90bd,	// (0x000836c2) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x00089cf1) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x00089cf1) cell_gallery_pane_g

0x90c9,	// (0x000836ce) bg_cell_gallery_focus_pane_g1

0x90d1,	// (0x000836d6) bg_cell_gallery_focus_pane_g2

0x90d9,	// (0x000836de) bg_cell_gallery_focus_pane_g3

0x90e1,	// (0x000836e6) bg_cell_gallery_focus_pane_g4

0x90e9,	// (0x000836ee) bg_cell_gallery_focus_pane_g5

0x90f1,	// (0x000836f6) bg_cell_gallery_focus_pane_g6

0x90f9,	// (0x000836fe) bg_cell_gallery_focus_pane_g7

0x9101,	// (0x00083706) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x00089cfa) bg_cell_gallery_focus_pane_g

0x9109,	// (0x0008370e) aid_firma_cardinal

0x911d,	// (0x00083722) blid_firmament_pane_t1

0x9134,	// (0x00083739) blid_firmament_pane_t2

0x914b,	// (0x00083750) blid_firmament_pane_t3

0x9162,	// (0x00083767) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x00089d0b) blid_firmament_pane_t

0x9179,	// (0x0008377e) blid_sat_info_pane

0x9189,	// (0x0008378e) blid_sat_info_pane_g1

0x9189,	// (0x0008378e) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x00089d14) blid_sat_info_pane_g

0x9193,	// (0x00083798) blid_sat_info_pane_t1

0x91a1,	// (0x000837a6) smil2_volume_content_pane

0x91aa,	// (0x000837af) smil2_volume_pane_g1

0x24ee,	// (0x0007caf3) smil2_volume_content_pane_g1

0x91b2,	// (0x000837b7) smil2_volume_content_pane_g2

0x91bb,	// (0x000837c0) smil2_volume_content_pane_g3

0x91c4,	// (0x000837c9) smil2_volume_content_pane_g4

0x91cd,	// (0x000837d2) smil2_volume_content_pane_g5

0x91d6,	// (0x000837db) smil2_volume_content_pane_g6

0x91df,	// (0x000837e4) smil2_volume_content_pane_g7

0x91e8,	// (0x000837ed) smil2_volume_content_pane_g8

0x91f1,	// (0x000837f6) smil2_volume_content_pane_g9

0x91fa,	// (0x000837ff) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x00089d19) smil2_volume_content_pane_g

0x616d,	// (0x00080772) cale_week_day_heading_pane_t1_ParamLimits

0x619a,	// (0x0008079f) cale_week_day_heading_pane_t2_ParamLimits

0x61c7,	// (0x000807cc) cale_week_day_heading_pane_t3_ParamLimits

0x61f4,	// (0x000807f9) cale_week_day_heading_pane_t4_ParamLimits

0x6221,	// (0x00080826) cale_week_day_heading_pane_t5_ParamLimits

0x624e,	// (0x00080853) cale_week_day_heading_pane_t6_ParamLimits

0x627b,	// (0x00080880) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x00089805) cale_week_day_heading_pane_t_ParamLimits

0xe5c1,	// (0x00088bc6) bg_cale_side_pane_ParamLimits

0x62a8,	// (0x000808ad) cale_week_time_pane_t1_ParamLimits

0x62c0,	// (0x000808c5) cale_week_time_pane_t2_ParamLimits

0x62d8,	// (0x000808dd) cale_week_time_pane_t3_ParamLimits

0x62f0,	// (0x000808f5) cale_week_time_pane_t4_ParamLimits

0x6308,	// (0x0008090d) cale_week_time_pane_t5_ParamLimits

0x6320,	// (0x00080925) cale_week_time_pane_t6_ParamLimits

0x6338,	// (0x0008093d) cale_week_time_pane_t7_ParamLimits

0x6350,	// (0x00080955) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x00089814) cale_week_time_pane_t_ParamLimits

0x6368,	// (0x0008096d) cell_cale_week_pane_g2_ParamLimits

0xe5c1,	// (0x00088bc6) bg_cale_side_pane_cp01_ParamLimits

0x723b,	// (0x00081840) cale_month_week_pane_t1_ParamLimits

0x7252,	// (0x00081857) cale_month_week_pane_t2_ParamLimits

0x7269,	// (0x0008186e) cale_month_week_pane_t3_ParamLimits

0x7280,	// (0x00081885) cale_month_week_pane_t4_ParamLimits

0x7297,	// (0x0008189c) cale_month_week_pane_t5_ParamLimits

0x72ae,	// (0x000818b3) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x000898ed) cale_month_week_pane_t_ParamLimits

0x737b,	// (0x00081980) cell_cale_month_pane_g1_ParamLimits

0xdcdc,	// (0x000882e1) main_cale_event_viewer_pane

0xdcdc,	// (0x000882e1) listscroll_cale_event_viewer_pane

0x9203,	// (0x00083808) list_cale_ev_pane

0x920b,	// (0x00083810) scroll_pane_cp023

0x9217,	// (0x0008381c) field_cale_ev_pane_ParamLimits

0x9217,	// (0x0008381c) field_cale_ev_pane

0x9235,	// (0x0008383a) field_cale_ev_content_pane_ParamLimits

0x9235,	// (0x0008383a) field_cale_ev_content_pane

0x9241,	// (0x00083846) field_cale_ev_pane_g1_ParamLimits

0x9241,	// (0x00083846) field_cale_ev_pane_g1

0x924d,	// (0x00083852) field_cale_ev_pane_g2_ParamLimits

0x924d,	// (0x00083852) field_cale_ev_pane_g2

0x9265,	// (0x0008386a) field_cale_ev_pane_g3_ParamLimits

0x9265,	// (0x0008386a) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x00089d2e) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x00089d2e) field_cale_ev_pane_g

0x927d,	// (0x00083882) field_cale_ev_pane_t1_ParamLimits

0x927d,	// (0x00083882) field_cale_ev_pane_t1

0x9294,	// (0x00083899) field_cale_ev_content_pane_t1_ParamLimits

0x9294,	// (0x00083899) field_cale_ev_content_pane_t1

0x10de,	// (0x0007b6e3) bg_button_pane_cp01

0xe481,	// (0x00088a86) listscroll_cale_week_pane_ParamLimits

0x5f91,	// (0x00080596) popup_toolbar_window_cp01

0xe5af,	// (0x00088bb4) listscroll_cale_week_pane_t1_ParamLimits

0xe481,	// (0x00088a86) listscroll_cale_day_pane_ParamLimits

0x5f91,	// (0x00080596) popup_toolbar_window_cp02

0xe5af,	// (0x00088bb4) listscroll_cale_day_pane_t1_ParamLimits

0xe481,	// (0x00088a86) main_cale_month_pane_ParamLimits

0x8782,	// (0x00082d87) popup_toolbar_window_cp03_ParamLimits

0x8782,	// (0x00082d87) popup_toolbar_window_cp03

0x80fb,	// (0x00082700) main_image_pane_g2_ParamLimits

0x80fb,	// (0x00082700) main_image_pane_g2

0x8107,	// (0x0008270c) main_image_pane_g3_ParamLimits

0x8107,	// (0x0008270c) main_image_pane_g3

0x0002,

0xf51a,	// (0x00089b1f) main_image_pane_g_ParamLimits

0xf51a,	// (0x00089b1f) main_image_pane_g

0x123a,	// (0x0007b83f) main_image_pane_t1_ParamLimits

0x8113,	// (0x00082718) main_image_pane_t2_ParamLimits

0x8113,	// (0x00082718) main_image_pane_t2

0x8125,	// (0x0008272a) main_image_pane_t3_ParamLimits

0x8125,	// (0x0008272a) main_image_pane_t3

0x8137,	// (0x0008273c) main_image_pane_t4_ParamLimits

0x8137,	// (0x0008273c) main_image_pane_t4

0x0003,

0xf521,	// (0x00089b26) main_image_pane_t_ParamLimits

0xf521,	// (0x00089b26) main_image_pane_t

0x8149,	// (0x0008274e) popup_image_details_window_cp01

0x8153,	// (0x00082758) popup_toobar_trans_pane_cp01_ParamLimits

0x8153,	// (0x00082758) popup_toobar_trans_pane_cp01

0x86ff,	// (0x00082d04) popup_image_details_window_ParamLimits

0x86ff,	// (0x00082d04) popup_image_details_window

0x23c3,	// (0x0007c9c8) popup_image_focus_window

0x8a1d,	// (0x00083022) camera2_autofocus_pane_ParamLimits

0x8a1d,	// (0x00083022) camera2_autofocus_pane

0xdcdc,	// (0x000882e1) bg_popup_sub_pane_cp06

0x92b2,	// (0x000838b7) popup_image_focus_window_g1

0x92ba,	// (0x000838bf) popup_image_focus_window_g2

0x92c2,	// (0x000838c7) popup_image_focus_window_g3

0x92ca,	// (0x000838cf) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x00089d35) popup_image_focus_window_g

0x92d2,	// (0x000838d7) popup_image_focus_window_t1

0x92e0,	// (0x000838e5) popup_image_focus_window_t2

0x92f0,	// (0x000838f5) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x00089d3e) popup_image_focus_window_t

0x92fe,	// (0x00083903) camera2_autofocus_pane_g1

0x066e,	// (0x0007ac73) bg_tb_trans_pane_cp01

0x933c,	// (0x00083941) popup_image_details_window_g1

0x934f,	// (0x00083954) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x00089d50) popup_image_details_window_g

0x9378,	// (0x0008397d) popup_image_details_window_t1

0x938a,	// (0x0008398f) popup_image_details_window_t2

0x93a3,	// (0x000839a8) popup_image_details_window_t3

0x93b7,	// (0x000839bc) popup_image_details_window_t4

0x93d2,	// (0x000839d7) popup_image_details_window_t5

0x0004,

0xf752,	// (0x00089d57) popup_image_details_window_t

0xe46d,	// (0x00088a72) bg_calc_paper_pane_ParamLimits

0x5d11,	// (0x00080316) grid_highlight_pane_cp013

0x5d1b,	// (0x00080320) list_calc_pane_ParamLimits

0x5d2d,	// (0x00080332) scroll_pane_cp024

0xe481,	// (0x00088a86) bg_calc_display_pane_ParamLimits

0x5d35,	// (0x0008033a) calc_display_pane_t1_ParamLimits

0x5d4a,	// (0x0008034f) calc_display_pane_t2_ParamLimits

0x5d5f,	// (0x00080364) calc_display_pane_t3_ParamLimits

0xf182,	// (0x00089787) calc_display_pane_t_ParamLimits

0x5e3b,	// (0x00080440) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x000897a4) cell_calc_pane_g

0x5e44,	// (0x00080449) cell_calc_pane_t1

0xe4e0,	// (0x00088ae5) grid_highlight_pane_cp02_ParamLimits

0xe4f6,	// (0x00088afb) toolbar_button_pane_cp01_ParamLimits

0xe4f6,	// (0x00088afb) toolbar_button_pane_cp01

0x127f,	// (0x0007b884) temp_image_control_pane_ParamLimits

0x127f,	// (0x0007b884) temp_image_control_pane

0x066e,	// (0x0007ac73) main_mp3_pane

0x93ec,	// (0x000839f1) temp_image_control_pane_g1_ParamLimits

0x93ec,	// (0x000839f1) temp_image_control_pane_g1

0x93fa,	// (0x000839ff) temp_image_control_pane_g2_ParamLimits

0x93fa,	// (0x000839ff) temp_image_control_pane_g2

0x940c,	// (0x00083a11) temp_image_control_pane_g3_ParamLimits

0x940c,	// (0x00083a11) temp_image_control_pane_g3

0x941c,	// (0x00083a21) temp_image_control_pane_g4_ParamLimits

0x941c,	// (0x00083a21) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x00089d62) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x00089d62) temp_image_control_pane_g

0x93ec,	// (0x000839f1) main_mp3_pane_g1

0x942d,	// (0x00083a32) main_mp3_pane_g2

0x0007,

0xf766,	// (0x00089d6b) main_mp3_pane_g

0x9484,	// (0x00083a89) main_mp3_pane_t1

0xe626,	// (0x00088c2b) main_camera_pane_g8_ParamLimits

0xe626,	// (0x00088c2b) main_camera_pane_g8

0x6606,	// (0x00080c0b) main_video_pane_g7_ParamLimits

0x6606,	// (0x00080c0b) main_video_pane_g7

0x8b65,	// (0x0008316a) main_camera2_pane_t7_ParamLimits

0x8b65,	// (0x0008316a) main_camera2_pane_t7

0xe774,	// (0x00088d79) scroll_pane_cp025_ParamLimits

0xe774,	// (0x00088d79) scroll_pane_cp025

0xe788,	// (0x00088d8d) scroll_pane_cp026_ParamLimits

0xe788,	// (0x00088d8d) scroll_pane_cp026

0xe797,	// (0x00088d9c) wml_content_pane_ParamLimits

0xdcdc,	// (0x000882e1) main_touch_calib_pane

0x9536,	// (0x00083b3b) main_touch_calib_pane_g1

0x9542,	// (0x00083b47) main_touch_calib_pane_g2

0x954e,	// (0x00083b53) main_touch_calib_pane_g3

0x955a,	// (0x00083b5f) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x00089d89) main_touch_calib_pane_g

0x9566,	// (0x00083b6b) main_touch_calib_pane_t1

0x957d,	// (0x00083b82) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x00089d92) main_touch_calib_pane_t

0x0e96,	// (0x0007b49b) mup_progress_pane_cp02

0x0eb5,	// (0x0007b4ba) navi_pane_g1

0x0f17,	// (0x0007b51c) navi_pane_mp_t3

0x066e,	// (0x0007ac73) main_mp3_pane_ParamLimits

0x87c0,	// (0x00082dc5) navi_pane_ParamLimits

0x93ec,	// (0x000839f1) main_mp3_pane_g1_ParamLimits

0x942d,	// (0x00083a32) main_mp3_pane_g2_ParamLimits

0x9439,	// (0x00083a3e) main_mp3_pane_g3_ParamLimits

0x9439,	// (0x00083a3e) main_mp3_pane_g3

0x9445,	// (0x00083a4a) main_mp3_pane_g4_ParamLimits

0x9445,	// (0x00083a4a) main_mp3_pane_g4

0x9451,	// (0x00083a56) main_mp3_pane_g5_ParamLimits

0x9451,	// (0x00083a56) main_mp3_pane_g5

0x945f,	// (0x00083a64) main_mp3_pane_g6_ParamLimits

0x945f,	// (0x00083a64) main_mp3_pane_g6

0x946c,	// (0x00083a71) main_mp3_pane_g7_ParamLimits

0x946c,	// (0x00083a71) main_mp3_pane_g7

0x9478,	// (0x00083a7d) main_mp3_pane_g8_ParamLimits

0x9478,	// (0x00083a7d) main_mp3_pane_g8

0xf766,	// (0x00089d6b) main_mp3_pane_g_ParamLimits

0x9492,	// (0x00083a97) main_mp3_pane_t2

0x94a2,	// (0x00083aa7) main_mp3_pane_t3

0x94b2,	// (0x00083ab7) main_mp3_pane_t4

0x94c0,	// (0x00083ac5) main_mp3_pane_t5

0x0005,

0xf777,	// (0x00089d7c) main_mp3_pane_t

0x94de,	// (0x00083ae3) mup_progress_pane_cp01

0x0666,	// (0x0007ac6b) aid_zoom_text_secondary2

0x9203,	// (0x00083808) list_cale_ev2_pane

0x920b,	// (0x00083810) scroll_pane_cp023_ParamLimits

0x95d2,	// (0x00083bd7) field_cale_ev2_pane_ParamLimits

0x95d2,	// (0x00083bd7) field_cale_ev2_pane

0x95fb,	// (0x00083c00) field_cale_ev2_pane_g1_ParamLimits

0x95fb,	// (0x00083c00) field_cale_ev2_pane_g1

0x9607,	// (0x00083c0c) field_cale_ev2_pane_g2_ParamLimits

0x9607,	// (0x00083c0c) field_cale_ev2_pane_g2

0x961f,	// (0x00083c24) field_cale_ev2_pane_g3_ParamLimits

0x961f,	// (0x00083c24) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x00089d9d) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x00089d9d) field_cale_ev2_pane_g

0x24f7,	// (0x0007cafc) field_cale_ev2_pane_t1_ParamLimits

0x24f7,	// (0x0007cafc) field_cale_ev2_pane_t1

0x250e,	// (0x0007cb13) field_cale_ev2_pane_t2_ParamLimits

0x250e,	// (0x0007cb13) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x00089da6) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x00089da6) field_cale_ev2_pane_t

0x7fdb,	// (0x000825e0) main_postcard_pane_g5_ParamLimits

0x7fdb,	// (0x000825e0) main_postcard_pane_g5

0x7fe9,	// (0x000825ee) main_postcard_pane_g6_ParamLimits

0x7fe9,	// (0x000825ee) main_postcard_pane_g6

0x644e,	// (0x00080a53) camera2_autofocus_pane_cp_ParamLimits

0x644e,	// (0x00080a53) camera2_autofocus_pane_cp

0x066e,	// (0x0007ac73) main_mup3_pane

0x9657,	// (0x00083c5c) main_mup3_pane_g1_ParamLimits

0x9657,	// (0x00083c5c) main_mup3_pane_g1

0x9678,	// (0x00083c7d) main_mup3_pane_g2_ParamLimits

0x9678,	// (0x00083c7d) main_mup3_pane_g2

0x96f0,	// (0x00083cf5) main_mup3_pane_g3_ParamLimits

0x96f0,	// (0x00083cf5) main_mup3_pane_g3

0x972f,	// (0x00083d34) main_mup3_pane_g4_ParamLimits

0x972f,	// (0x00083d34) main_mup3_pane_g4

0x976e,	// (0x00083d73) main_mup3_pane_g5_ParamLimits

0x976e,	// (0x00083d73) main_mup3_pane_g5

0x97ad,	// (0x00083db2) main_mup3_pane_g6_ParamLimits

0x97ad,	// (0x00083db2) main_mup3_pane_g6

0x97bb,	// (0x00083dc0) main_mup3_pane_g7_ParamLimits

0x97bb,	// (0x00083dc0) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x00089db6) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x00089db6) main_mup3_pane_g

0x982d,	// (0x00083e32) main_mup3_pane_t1_ParamLimits

0x982d,	// (0x00083e32) main_mup3_pane_t1

0x9898,	// (0x00083e9d) main_mup3_pane_t2_ParamLimits

0x9898,	// (0x00083e9d) main_mup3_pane_t2

0x995d,	// (0x00083f62) main_mup3_pane_t4_ParamLimits

0x995d,	// (0x00083f62) main_mup3_pane_t4

0x99ab,	// (0x00083fb0) main_mup3_pane_t5_ParamLimits

0x99ab,	// (0x00083fb0) main_mup3_pane_t5

0x9a53,	// (0x00084058) main_mup3_pane_t6_ParamLimits

0x9a53,	// (0x00084058) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x00089dc7) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x00089dc7) main_mup3_pane_t

0x9afb,	// (0x00084100) mup3_progress_pane_ParamLimits

0x9afb,	// (0x00084100) mup3_progress_pane

0x9b66,	// (0x0008416b) popup_mup3_control_window_ParamLimits

0x9b66,	// (0x0008416b) popup_mup3_control_window

0x9b72,	// (0x00084177) popup_mup3_text_window

0x9b87,	// (0x0008418c) mup3_progress_pane_t1

0x9b9e,	// (0x000841a3) mup3_progress_pane_t2

0x9bb5,	// (0x000841ba) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x00089dd4) mup3_progress_pane_t

0x9bcc,	// (0x000841d1) mup_progress_pane_cp03

0xdcdc,	// (0x000882e1) bg_tb_trans_pane_cp04

0x9bdc,	// (0x000841e1) mup3_volume_pane

0x9be4,	// (0x000841e9) popup_mup3_control_window_g1

0x9bed,	// (0x000841f2) mup3_volume_pane_g1

0x9bf6,	// (0x000841fb) mup3_volume_pane_g2

0x9bff,	// (0x00084204) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x00089ddb) mup3_volume_pane_g

0xdcdc,	// (0x000882e1) bg_tb_trans_pane_cp03

0x9c08,	// (0x0008420d) popup_mup3_text_window_g1

0x9c10,	// (0x00084215) popup_mup3_text_window_t1

0xe4c9,	// (0x00088ace) list_calc_item_pane_g1_ParamLimits

0x425b,	// (0x0007e860) mup_volume_pane_cp_g1

0x9594,	// (0x00083b99) main_touch_calib_pane_t3

0x95a8,	// (0x00083bad) main_touch_calib_pane_t4

0x95bc,	// (0x00083bc1) main_touch_calib_pane_t5

0xdce6,	// (0x000882eb) aid_cell_size_toolbar2

0xdcee,	// (0x000882f3) aid_popup3_width_pane

0x0656,	// (0x0007ac5b) aid_zoom_text_msg_primary

0x6425,	// (0x00080a2a) vorec_t7

0xe48d,	// (0x00088a92) bg_calc_paper_pane_g1_ParamLimits

0xe499,	// (0x00088a9e) bg_calc_paper_pane_g2_ParamLimits

0xe4a5,	// (0x00088aaa) bg_calc_paper_pane_g3_ParamLimits

0xe4b1,	// (0x00088ab6) bg_calc_paper_pane_g4_ParamLimits

0xe4bd,	// (0x00088ac2) bg_calc_paper_pane_g5_ParamLimits

0x5d9e,	// (0x000803a3) bg_calc_paper_pane_g6_ParamLimits

0x5daf,	// (0x000803b4) bg_calc_paper_pane_g7_ParamLimits

0x5dc0,	// (0x000803c5) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x0008978e) bg_calc_paper_pane_g_ParamLimits

0x5dd1,	// (0x000803d6) calc_bg_paper_pane_g9_ParamLimits

0x6535,	// (0x00080b3a) image_qvga_pane_ParamLimits

0x6535,	// (0x00080b3a) image_qvga_pane

0xe3aa,	// (0x000889af) bg_popup_sub_pane_cp04_ParamLimits

0x11b6,	// (0x0007b7bb) popup_mup_playback_window_g1_ParamLimits

0x11c2,	// (0x0007b7c7) popup_mup_playback_window_t1_ParamLimits

0x11d7,	// (0x0007b7dc) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x00089b1a) popup_mup_playback_window_t_ParamLimits

0x8c94,	// (0x00083299) main_mup2_pane_g3_ParamLimits

0x8c94,	// (0x00083299) main_mup2_pane_g3

0x67d3,	// (0x00080dd8) popup_toolbar_window_cp04

0x15b9,	// (0x0007bbbe) popup_call2_audio_second_window_g3_ParamLimits

0x15b9,	// (0x0007bbbe) popup_call2_audio_second_window_g3

0x19c3,	// (0x0007bfc8) popup_call2_audio_first_window_g4_ParamLimits

0x19c3,	// (0x0007bfc8) popup_call2_audio_first_window_g4

0x2042,	// (0x0007c647) popup_call2_audio_in_window_g4_ParamLimits

0x2042,	// (0x0007c647) popup_call2_audio_in_window_g4

0x80ee,	// (0x000826f3) aid_area_sk_bg_cut_ParamLimits

0x80ee,	// (0x000826f3) aid_area_sk_bg_cut

0x11ec,	// (0x0007b7f1) aid_area_sk_bg_cut_2_ParamLimits

0x11ec,	// (0x0007b7f1) aid_area_sk_bg_cut_2

0x9075,	// (0x0008367a) aid_placing_details_win

0x907d,	// (0x00083682) aid_placing_details_win_2

0x92fe,	// (0x00083903) camera2_autofocus_pane_g1_ParamLimits

0x5979,	// (0x0007ff7e) popup_fixed_preview_cale_window_ParamLimits

0x5979,	// (0x0007ff7e) popup_fixed_preview_cale_window

0x0f81,	// (0x0007b586) navi_slider_pane_g3

0x0f78,	// (0x0007b57d) navi_slider_pane_g4

0x0f6f,	// (0x0007b574) navi_slider_pane_g5

0x0f81,	// (0x0007b586) navi_slider_pane_g6

0x7954,	// (0x00081f59) navi_slider_pane_g7

0x10ab,	// (0x0007b6b0) mup_scale_pane_g3

0x10b4,	// (0x0007b6b9) mup_scale_pane_g4

0x10bd,	// (0x0007b6c2) mup_scale_pane_g5

0x7d95,	// (0x0008239a) mup_scale_pane_g6

0x7d9e,	// (0x000823a3) mup_scale_pane_g7

0x0f81,	// (0x0007b586) cams2_slider_pane_g3

0x4310,	// (0x0007e915) cams2_slider_pane_g4

0x8f75,	// (0x0008357a) cams2_slider_pane_g5

0x0f81,	// (0x0007b586) cams2_slider_pane_g6

0x8f7d,	// (0x00083582) cams2_slider_pane_g7

0x9189,	// (0x0008378e) camera2_autofocus_pane_cp_g1

0x9c1e,	// (0x00084223) bg_popup_preview_window_pane_cp02_ParamLimits

0x9c1e,	// (0x00084223) bg_popup_preview_window_pane_cp02

0x9c2a,	// (0x0008422f) list_fp_cale_pane_ParamLimits

0x9c2a,	// (0x0008422f) list_fp_cale_pane

0x9c36,	// (0x0008423b) popup_fixed_preview_cale_window_t1_ParamLimits

0x9c36,	// (0x0008423b) popup_fixed_preview_cale_window_t1

0x9c48,	// (0x0008424d) popup_fixed_preview_cale_window_t2_ParamLimits

0x9c48,	// (0x0008424d) popup_fixed_preview_cale_window_t2

0x9c5d,	// (0x00084262) popup_fixed_preview_cale_window_t3_ParamLimits

0x9c5d,	// (0x00084262) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x00089de2) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x00089de2) popup_fixed_preview_cale_window_t

0x9c7e,	// (0x00084283) list_single_fp_cale_pane_ParamLimits

0x9c7e,	// (0x00084283) list_single_fp_cale_pane

0x9c90,	// (0x00084295) list_single_fp_cale_pane_g1_ParamLimits

0x9c90,	// (0x00084295) list_single_fp_cale_pane_g1

0x9c9c,	// (0x000842a1) list_single_fp_cale_pane_g2_ParamLimits

0x9c9c,	// (0x000842a1) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x00089de9) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x00089de9) list_single_fp_cale_pane_g

0x9cb5,	// (0x000842ba) list_single_fp_cale_pane_t1_ParamLimits

0x9cb5,	// (0x000842ba) list_single_fp_cale_pane_t1

0x9cc7,	// (0x000842cc) list_single_fp_cale_pane_t2_ParamLimits

0x9cc7,	// (0x000842cc) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x00089df0) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x00089df0) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xdcdc,	// (0x000882e1) main_dialer_pane

0x9cfa,	// (0x000842ff) aid_cell_size_keypad

0x9d04,	// (0x00084309) dialer_ne_pane

0x9d0e,	// (0x00084313) grid_dialer_command_1_pane

0x9d16,	// (0x0008431b) grid_dialer_command_2_pane

0x9d1e,	// (0x00084323) grid_dialer_keypad_pane

0x9d30,	// (0x00084335) bg_popup_call_pane_cp06_ParamLimits

0x9d30,	// (0x00084335) bg_popup_call_pane_cp06

0x9d3c,	// (0x00084341) dialer_ne_clear_pane_ParamLimits

0x9d3c,	// (0x00084341) dialer_ne_clear_pane

0x9d48,	// (0x0008434d) dialer_ne_pane_g1

0x9d50,	// (0x00084355) dialer_ne_pane_t1_ParamLimits

0x9d50,	// (0x00084355) dialer_ne_pane_t1

0x9d62,	// (0x00084367) dialer_ne_pane_t2_ParamLimits

0x9d62,	// (0x00084367) dialer_ne_pane_t2

0x9d7f,	// (0x00084384) dialer_ne_pane_t3_ParamLimits

0x9d7f,	// (0x00084384) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x00089df5) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x00089df5) dialer_ne_pane_t

0x9da3,	// (0x000843a8) dialer_ne_pane_t3_copy1_ParamLimits

0x9da3,	// (0x000843a8) dialer_ne_pane_t3_copy1

0x9dc7,	// (0x000843cc) cell_dialer_keypad_pane_ParamLimits

0x9dc7,	// (0x000843cc) cell_dialer_keypad_pane

0x9dde,	// (0x000843e3) cell_dialer_command_1_pane_ParamLimits

0x9dde,	// (0x000843e3) cell_dialer_command_1_pane

0x9df4,	// (0x000843f9) cell_dialer_command_2_pane_ParamLimits

0x9df4,	// (0x000843f9) cell_dialer_command_2_pane

0x9e03,	// (0x00084408) bg_button_pane_cp02_ParamLimits

0x9e03,	// (0x00084408) bg_button_pane_cp02

0x9e0f,	// (0x00084414) cell_dialer_keypad_pane_g1_ParamLimits

0x9e0f,	// (0x00084414) cell_dialer_keypad_pane_g1

0x9e03,	// (0x00084408) bg_button_pane_cp03_ParamLimits

0x9e03,	// (0x00084408) bg_button_pane_cp03

0x9e24,	// (0x00084429) cell_dialer_command_1_pane_g1_ParamLimits

0x9e24,	// (0x00084429) cell_dialer_command_1_pane_g1

0x9e38,	// (0x0008443d) bg_button_pane_cp04

0x9e40,	// (0x00084445) cell_dialer_command_2_pane_g1

0x0f55,	// (0x0007b55a) bg_button_pane_cp06

0x9e48,	// (0x0008444d) dialer_ne_clear_pane_g1

0x7897,	// (0x00081e9c) navi_pane_g2

0x78c5,	// (0x00081eca) navi_pane_g3

0x0002,

0xf418,	// (0x00089a1d) navi_pane_g

0x78f0,	// (0x00081ef5) navi_pane_mv_g2

0x7917,	// (0x00081f1c) navi_pane_mv_g5

0x791f,	// (0x00081f24) navi_pane_mv_t1

0xe481,	// (0x00088a86) main_clock2_pane

0x9e77,	// (0x0008447c) main_clock2_list_pane_ParamLimits

0x9e77,	// (0x0008447c) main_clock2_list_pane

0x9e9f,	// (0x000844a4) main_clock2_pane_t1_ParamLimits

0x9e9f,	// (0x000844a4) main_clock2_pane_t1

0x9ecd,	// (0x000844d2) main_clock2_pane_t2_ParamLimits

0x9ecd,	// (0x000844d2) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x00089dfc) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x00089dfc) main_clock2_pane_t

0x9f34,	// (0x00084539) popup_clock_analogue_window_cp03_ParamLimits

0x9f34,	// (0x00084539) popup_clock_analogue_window_cp03

0x9f52,	// (0x00084557) popup_clock_digital_window_cp02_ParamLimits

0x9f52,	// (0x00084557) popup_clock_digital_window_cp02

0x9fbf,	// (0x000845c4) main_clock2_list_single_pane_ParamLimits

0x9fbf,	// (0x000845c4) main_clock2_list_single_pane

0x0f55,	// (0x0007b55a) list_highlight_pane_cp05

0x9fd1,	// (0x000845d6) main_clock2_list_single_pane_t1

0x67d3,	// (0x00080dd8) popup_toolbar_window_cp04_ParamLimits

0x930c,	// (0x00083911) camera2_autofocus_pane_g2_ParamLimits

0x930c,	// (0x00083911) camera2_autofocus_pane_g2

0x9318,	// (0x0008391d) camera2_autofocus_pane_g3_ParamLimits

0x9318,	// (0x0008391d) camera2_autofocus_pane_g3

0x9324,	// (0x00083929) camera2_autofocus_pane_g4_ParamLimits

0x9324,	// (0x00083929) camera2_autofocus_pane_g4

0x9330,	// (0x00083935) camera2_autofocus_pane_g5_ParamLimits

0x9330,	// (0x00083935) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x00089d45) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x00089d45) camera2_autofocus_pane_g

0x9637,	// (0x00083c3c) camera2_autofocus_pane_cp_g2

0x963f,	// (0x00083c44) camera2_autofocus_pane_cp_g3

0x9647,	// (0x00083c4c) camera2_autofocus_pane_cp_g4

0x964f,	// (0x00083c54) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x00089dab) camera2_autofocus_pane_cp_g

0x9d28,	// (0x0008432d) popup_dialer_spcha_window

0xdcdc,	// (0x000882e1) bg_popup_sub_pane_cp07

0xa077,	// (0x0008467c) list_spcha_pane

0xa07f,	// (0x00084684) list_single_spcha_pane_ParamLimits

0xa07f,	// (0x00084684) list_single_spcha_pane

0xdcdc,	// (0x000882e1) list_highlight_pane_cp06

0xa090,	// (0x00084695) list_single_spcha_pane_t1

0x1dec,	// (0x0007c3f1) popup_call2_audio_out_window_g4_ParamLimits

0x1dec,	// (0x0007c3f1) popup_call2_audio_out_window_g4

0xdcdc,	// (0x000882e1) main_imed2_pane

0x23cb,	// (0x0007c9d0) popup_imed_adjust2_window

0x870d,	// (0x00082d12) popup_imed_trans_window_ParamLimits

0x870d,	// (0x00082d12) popup_imed_trans_window

0x438a,	// (0x0007e98f) popup_blid_sat_info2_window_t1

0x4398,	// (0x0007e99d) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x00089cda) popup_blid_sat_info2_window_t

0xa09e,	// (0x000846a3) aid_size_cell_colour_35

0xa0b8,	// (0x000846bd) aid_size_cell_colour_112

0xa0cf,	// (0x000846d4) aid_size_cell_effect

0x066e,	// (0x0007ac73) bg_tb_trans_pane_cp02

0xa0e9,	// (0x000846ee) heading_imed_pane

0xa0f5,	// (0x000846fa) listscroll_imed_pane

0xa101,	// (0x00084706) heading_imed_pane_g1

0xa109,	// (0x0008470e) heading_imed_pane_t1

0xa117,	// (0x0008471c) grid_imed_colour_35_pane_ParamLimits

0xa117,	// (0x0008471c) grid_imed_colour_35_pane

0xa12e,	// (0x00084733) grid_imed_effect_pane

0xa13e,	// (0x00084743) list_imed_aspect_pane

0xa146,	// (0x0008474b) scroll_pane_cp027_ParamLimits

0xa146,	// (0x0008474b) scroll_pane_cp027

0xa152,	// (0x00084757) cell_imed_effect_pane_ParamLimits

0xa152,	// (0x00084757) cell_imed_effect_pane

0xa16a,	// (0x0008476f) cell_imed_colour_pane_ParamLimits

0xa16a,	// (0x0008476f) cell_imed_colour_pane

0xa1ac,	// (0x000847b1) cell_imed_colour_pane_g1_ParamLimits

0xa1ac,	// (0x000847b1) cell_imed_colour_pane_g1

0xa1bd,	// (0x000847c2) hgihlgiht_grid_pane_cp016_ParamLimits

0xa1bd,	// (0x000847c2) hgihlgiht_grid_pane_cp016

0xa1ce,	// (0x000847d3) cell_imed_effect_pane_g1

0xa1d6,	// (0x000847db) grid_highlight_pane_cp017

0xa1df,	// (0x000847e4) list_imed_single_pane_ParamLimits

0xa1df,	// (0x000847e4) list_imed_single_pane

0xdcdc,	// (0x000882e1) list_highlight_pane_cp07

0xe976,	// (0x00088f7b) list_imed_aspect_pane_comp1_t1

0x23a3,	// (0x0007c9a8) bg_tb_trans_pane_cp05

0xe998,	// (0x00088f9d) popup_imed_adjust2_window_g1

0xe9bf,	// (0x00088fc4) popup_imed_adjust2_window_t1

0xe9d7,	// (0x00088fdc) slider_imed_adjust_pane

0xe9eb,	// (0x00088ff0) slider_imed_adjust_pane_g1

0xe9fb,	// (0x00089000) slider_imed_adjust_pane_g2

0xea0b,	// (0x00089010) slider_imed_adjust_pane_g3

0xea1c,	// (0x00089021) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x00089e19) slider_imed_adjust_pane_g

0xa1f4,	// (0x000847f9) aid_size_cell_clipart2

0xa200,	// (0x00084805) grid_imed_clipart_pane

0xea2d,	// (0x00089032) scroll_pane_cp031

0xa20a,	// (0x0008480f) cell_imed_clipart_pane_ParamLimits

0xa20a,	// (0x0008480f) cell_imed_clipart_pane

0xa22c,	// (0x00084831) cell_imed_clipart_pane_g1

0xdcdc,	// (0x000882e1) grid_highlight_pane_cp014

0x9e83,	// (0x00084488) main_clock2_pane_g1_ParamLimits

0x9e83,	// (0x00084488) main_clock2_pane_g1

0x9f6a,	// (0x0008456f) aid_call2_pane_cp10

0x9f7c,	// (0x00084581) aid_call_pane_cp10

0x0e8a,	// (0x0007b48f) popup_clock_analogue_window_cp10_g1

0x0e8a,	// (0x0007b48f) popup_clock_analogue_window_cp10_g2

0x9f8e,	// (0x00084593) popup_clock_analogue_window_cp10_g3

0x9f8e,	// (0x00084593) popup_clock_analogue_window_cp10_g4

0x0e8a,	// (0x0007b48f) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x00089e07) popup_clock_analogue_window_cp10_g

0x9fa0,	// (0x000845a5) popup_clock_analogue_window_cp10_t1

0x9fdf,	// (0x000845e4) clock_digital_number_pane_cp10_ParamLimits

0x9fdf,	// (0x000845e4) clock_digital_number_pane_cp10

0x9ff7,	// (0x000845fc) clock_digital_number_pane_cp11_ParamLimits

0x9ff7,	// (0x000845fc) clock_digital_number_pane_cp11

0xa00f,	// (0x00084614) clock_digital_number_pane_cp12_ParamLimits

0xa00f,	// (0x00084614) clock_digital_number_pane_cp12

0xa027,	// (0x0008462c) clock_digital_number_pane_cp13_ParamLimits

0xa027,	// (0x0008462c) clock_digital_number_pane_cp13

0xa03f,	// (0x00084644) clock_digital_separator_pane_cp10_ParamLimits

0xa03f,	// (0x00084644) clock_digital_separator_pane_cp10

0xa057,	// (0x0008465c) popup_clock_digital_window_cp02_t1_ParamLimits

0xa057,	// (0x0008465c) popup_clock_digital_window_cp02_t1

0xe3a2,	// (0x000889a7) clock_digital_number_pane_cp10_g1

0xe3a2,	// (0x000889a7) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x00089e22) clock_digital_number_pane_cp10_g

0xe3a2,	// (0x000889a7) clock_digital_separator_pane_cp10_g1

0xe3a2,	// (0x000889a7) clock_digital_separator_pane_g2_cp10

0x0f25,	// (0x0007b52a) navi_pane_vded_g4

0x0f2e,	// (0x0007b533) navi_pane_vded_g5

0x0f37,	// (0x0007b53c) navi_pane_vded_t1

0xdcdc,	// (0x000882e1) main_vded_pane

0xa235,	// (0x0008483a) main_vded_pane_g1

0xa241,	// (0x00084846) main_vded_pane_g2

0xa24b,	// (0x00084850) main_vded_pane_g3

0x0002,

0xf822,	// (0x00089e27) main_vded_pane_g

0xa255,	// (0x0008485a) main_vded_pane_t1

0xa263,	// (0x00084868) main_vded_pane_t2

0x0001,

0xf829,	// (0x00089e2e) main_vded_pane_t

0xa271,	// (0x00084876) vded_slider_pane

0xa27b,	// (0x00084880) vded_video_pane

0xea35,	// (0x0008903a) vded_video_pane_g1

0xa285,	// (0x0008488a) vded_video_pane_g2

0x9189,	// (0x0008378e) vded_video_pane_g3

0x0002,

0xf82e,	// (0x00089e33) vded_video_pane_g

0xea3f,	// (0x00089044) vded_slider_pane_g1

0x425b,	// (0x0007e860) vded_slider_pane_g2

0xea48,	// (0x0008904d) vded_slider_pane_g3

0xea51,	// (0x00089056) vded_slider_pane_g4

0xea5a,	// (0x0008905f) vded_slider_pane_g5

0x0004,

0xf835,	// (0x00089e3a) vded_slider_pane_g

0x9b58,	// (0x0008415d) mup3_rocker_pane_ParamLimits

0x9b58,	// (0x0008415d) mup3_rocker_pane

0xa28e,	// (0x00084893) mup3_control_keys_pane_g1

0xa296,	// (0x0008489b) mup3_control_keys_pane_g2

0xa29e,	// (0x000848a3) mup3_control_keys_pane_g3

0xa2a6,	// (0x000848ab) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x00089e45) mup3_control_keys_pane_g

0x5997,	// (0x0007ff9c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5997,	// (0x0007ff9c) popup_toolbar2_fixed_window_cp01

0x9b7a,	// (0x0008417f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9b7a,	// (0x0008417f) popup_toolbar2_fixed_window_cp02

0x172b,	// (0x0007bd30) popup_call2_audio_second_window_t4_ParamLimits

0x172b,	// (0x0007bd30) popup_call2_audio_second_window_t4

0x1c59,	// (0x0007c25e) popup_call2_audio_first_window_t6_ParamLimits

0x1c59,	// (0x0007c25e) popup_call2_audio_first_window_t6

0x1eef,	// (0x0007c4f4) popup_call2_audio_out_window_t6_ParamLimits

0x1eef,	// (0x0007c4f4) popup_call2_audio_out_window_t6

0xdcdc,	// (0x000882e1) main_vitu_pane

0xa2b6,	// (0x000848bb) aid_size_cell_itu_ParamLimits

0xa2b6,	// (0x000848bb) aid_size_cell_itu

0x2523,	// (0x0007cb28) bg_popup_window_pane_cp08_ParamLimits

0x2523,	// (0x0007cb28) bg_popup_window_pane_cp08

0xa2c4,	// (0x000848c9) field_vitu_entry_pane_ParamLimits

0xa2c4,	// (0x000848c9) field_vitu_entry_pane

0xa2d3,	// (0x000848d8) grid_vitu_function_pane_ParamLimits

0xa2d3,	// (0x000848d8) grid_vitu_function_pane

0xa2e3,	// (0x000848e8) grid_vitu_itu_pane_ParamLimits

0xa2e3,	// (0x000848e8) grid_vitu_itu_pane

0xa2f3,	// (0x000848f8) cell_vitu_itu_pane_ParamLimits

0xa2f3,	// (0x000848f8) cell_vitu_itu_pane

0xa308,	// (0x0008490d) cell_vitu_function_pane_ParamLimits

0xa308,	// (0x0008490d) cell_vitu_function_pane

0x066e,	// (0x0007ac73) bg_popup_sub_pane_cp08_ParamLimits

0x066e,	// (0x0007ac73) bg_popup_sub_pane_cp08

0xa31a,	// (0x0008491f) field_vitu_entry_pane_t1_ParamLimits

0xa31a,	// (0x0008491f) field_vitu_entry_pane_t1

0xea7b,	// (0x00089080) field_vitu_entry_pane_t2_ParamLimits

0xea7b,	// (0x00089080) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x00089e53) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x00089e53) field_vitu_entry_pane_t

0xea98,	// (0x0008909d) bg_button_pane_cp05_ParamLimits

0xea98,	// (0x0008909d) bg_button_pane_cp05

0xa335,	// (0x0008493a) cell_vitu_itu_pane_g1

0xa34d,	// (0x00084952) cell_vitu_itu_pane_t1_ParamLimits

0xa34d,	// (0x00084952) cell_vitu_itu_pane_t1

0xa35f,	// (0x00084964) cell_vitu_itu_pane_t2_ParamLimits

0xa35f,	// (0x00084964) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x00089e58) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x00089e58) cell_vitu_itu_pane_t

0xeaa6,	// (0x000890ab) bg_button_pane_cp07

0xa394,	// (0x00084999) cell_vitu_function_pane_g1

0x5c3c,	// (0x00080241) main_calc_pane_g1

0x579a,	// (0x0007fd9f) aid_visual_content_pane

0xdcdc,	// (0x000882e1) main_vradio_pane

0xa39d,	// (0x000849a2) main_vradio_pane_g1_ParamLimits

0xa39d,	// (0x000849a2) main_vradio_pane_g1

0xeab0,	// (0x000890b5) main_vradio_pane_g2_ParamLimits

0xeab0,	// (0x000890b5) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x00089e5f) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x00089e5f) main_vradio_pane_g

0xa3ad,	// (0x000849b2) main_vradio_pane_t1_ParamLimits

0xa3ad,	// (0x000849b2) main_vradio_pane_t1

0xa3bf,	// (0x000849c4) main_vradio_pane_t2_ParamLimits

0xa3bf,	// (0x000849c4) main_vradio_pane_t2

0xeabd,	// (0x000890c2) main_vradio_pane_t3_ParamLimits

0xeabd,	// (0x000890c2) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x00089e64) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x00089e64) main_vradio_pane_t

0xa3d1,	// (0x000849d6) vradio_rocker_control_pane_ParamLimits

0xa3d1,	// (0x000849d6) vradio_rocker_control_pane

0xa3dd,	// (0x000849e2) vradio_station_info_pane_ParamLimits

0xa3dd,	// (0x000849e2) vradio_station_info_pane

0xead1,	// (0x000890d6) vradio_frequency_info_pane_ParamLimits

0xead1,	// (0x000890d6) vradio_frequency_info_pane

0x9189,	// (0x0008378e) vradio_station_info_pane_g1

0xeae0,	// (0x000890e5) vradio_station_info_pane_t1_ParamLimits

0xeae0,	// (0x000890e5) vradio_station_info_pane_t1

0xeb02,	// (0x00089107) vradio_station_info_pane_t2_ParamLimits

0xeb02,	// (0x00089107) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x00089e6b) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x00089e6b) vradio_station_info_pane_t

0xeb14,	// (0x00089119) vradio_tuning_pane

0xeb1c,	// (0x00089121) vradio_rocker_control_pane_g1

0xeb24,	// (0x00089129) vradio_rocker_control_pane_g2

0xeb2c,	// (0x00089131) vradio_rocker_control_pane_g3

0xeb34,	// (0x00089139) vradio_rocker_control_pane_g4

0xeb3c,	// (0x00089141) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x00089e70) vradio_rocker_control_pane_g

0xa3ec,	// (0x000849f1) vradio_frequency_info_pane_g1

0xeb44,	// (0x00089149) vradio_frequency_info_pane_t1_ParamLimits

0xeb44,	// (0x00089149) vradio_frequency_info_pane_t1

0xa3f6,	// (0x000849fb) vradio_tuning_pane_g1

0xa3ff,	// (0x00084a04) vradio_tuning_pane_t1

0xdcfa,	// (0x000882ff) area_side_right_pane_ParamLimits

0xdcfa,	// (0x000882ff) area_side_right_pane

0x236a,	// (0x0007c96f) status_small_pane_g1

0x2372,	// (0x0007c977) status_small_pane_g2

0x237b,	// (0x0007c980) status_small_pane_g3

0x2384,	// (0x0007c989) status_small_pane_g4

0x0003,

0xf62b,	// (0x00089c30) status_small_pane_g

0x238d,	// (0x0007c992) status_small_pane_t1

0xdcdc,	// (0x000882e1) main_video3_pane

0xeb58,	// (0x0008915d) cams_zoom_vslider_pane

0xeb60,	// (0x00089165) image3_wide_pane_ParamLimits

0xeb60,	// (0x00089165) image3_wide_pane

0xeb7a,	// (0x0008917f) image3_wide_small_pane

0xeb86,	// (0x0008918b) main_video3_pane_g1_ParamLimits

0xeb86,	// (0x0008918b) main_video3_pane_g1

0xeba2,	// (0x000891a7) main_video3_pane_g2_ParamLimits

0xeba2,	// (0x000891a7) main_video3_pane_g2

0x0001,

0xf876,	// (0x00089e7b) main_video3_pane_g_ParamLimits

0xf876,	// (0x00089e7b) main_video3_pane_g

0xebbe,	// (0x000891c3) main_video3_pane_t1_ParamLimits

0xebbe,	// (0x000891c3) main_video3_pane_t1

0xebe9,	// (0x000891ee) main_video3_pane_t2_ParamLimits

0xebe9,	// (0x000891ee) main_video3_pane_t2

0xec14,	// (0x00089219) main_video3_pane_t3_ParamLimits

0xec14,	// (0x00089219) main_video3_pane_t3

0x0002,

0xf87b,	// (0x00089e80) main_video3_pane_t_ParamLimits

0xf87b,	// (0x00089e80) main_video3_pane_t

0xec41,	// (0x00089246) cams_zoom_vslider_pane_g1

0xec4a,	// (0x0008924f) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x00089e87) cams_zoom_vslider_pane_g

0xec52,	// (0x00089257) small_slider_vertical_pane

0x9189,	// (0x0008378e) small_slider_vertical_pane_g1

0x9189,	// (0x0008378e) small_slider_vertical_pane_g2

0xec5a,	// (0x0008925f) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x00089e8c) small_slider_vertical_pane_g

0xdcdc,	// (0x000882e1) main_hwr_training_pane

0xec63,	// (0x00089268) hwr_training_instruct_pane_ParamLimits

0xec63,	// (0x00089268) hwr_training_instruct_pane

0xa40e,	// (0x00084a13) hwr_training_navi_pane_ParamLimits

0xa40e,	// (0x00084a13) hwr_training_navi_pane

0xa428,	// (0x00084a2d) hwr_training_write_pane_ParamLimits

0xa428,	// (0x00084a2d) hwr_training_write_pane

0xdcdc,	// (0x000882e1) bg_frame_shadow_pane

0xec9a,	// (0x0008929f) hwr_training_write_pane_g1

0xeca2,	// (0x000892a7) hwr_training_write_pane_g2

0xecaa,	// (0x000892af) hwr_training_write_pane_g3

0xecb2,	// (0x000892b7) hwr_training_write_pane_g4

0xecba,	// (0x000892bf) hwr_training_write_pane_g5

0xecc2,	// (0x000892c7) hwr_training_write_pane_g6

0xecca,	// (0x000892cf) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x00089e93) hwr_training_write_pane_g

0xa460,	// (0x00084a65) hwr_training_navi_pane_g1_ParamLimits

0xa460,	// (0x00084a65) hwr_training_navi_pane_g1

0xa472,	// (0x00084a77) hwr_training_navi_pane_g2_ParamLimits

0xa472,	// (0x00084a77) hwr_training_navi_pane_g2

0xa484,	// (0x00084a89) hwr_training_navi_pane_g3_ParamLimits

0xa484,	// (0x00084a89) hwr_training_navi_pane_g3

0xa494,	// (0x00084a99) hwr_training_navi_pane_g4_ParamLimits

0xa494,	// (0x00084a99) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x00089ea2) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x00089ea2) hwr_training_navi_pane_g

0xa4ae,	// (0x00084ab3) hwr_training_navi_pane_t1

0xa4bc,	// (0x00084ac1) list_single_hwr_training_instruct_pane_ParamLimits

0xa4bc,	// (0x00084ac1) list_single_hwr_training_instruct_pane

0xecd2,	// (0x000892d7) list_single_hwr_training_instruct_pane_t1

0x90c9,	// (0x000836ce) bg_frame_shadow_pane_g1

0xece1,	// (0x000892e6) bg_frame_shadow_pane_g2

0xece9,	// (0x000892ee) bg_frame_shadow_pane_g3

0xecf1,	// (0x000892f6) bg_frame_shadow_pane_g4

0xecf9,	// (0x000892fe) bg_frame_shadow_pane_g5

0xed01,	// (0x00089306) bg_frame_shadow_pane_g6

0xed09,	// (0x0008930e) bg_frame_shadow_pane_g7

0xe53a,	// (0x00088b3f) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x00089ead) bg_frame_shadow_pane_g

0xdcdc,	// (0x000882e1) main_video_tele_dialer_pane

0xa4e1,	// (0x00084ae6) aid_size_cell_video_keypad_ParamLimits

0xa4e1,	// (0x00084ae6) aid_size_cell_video_keypad

0xa4f1,	// (0x00084af6) grid_video_dialer_keypad_pane_ParamLimits

0xa4f1,	// (0x00084af6) grid_video_dialer_keypad_pane

0xa525,	// (0x00084b2a) video_down_pane_cp_ParamLimits

0xa525,	// (0x00084b2a) video_down_pane_cp

0xa54f,	// (0x00084b54) cell_video_dialer_keypad_pane_ParamLimits

0xa54f,	// (0x00084b54) cell_video_dialer_keypad_pane

0xed11,	// (0x00089316) bg_button_pane_cp08_ParamLimits

0xed11,	// (0x00089316) bg_button_pane_cp08

0xa564,	// (0x00084b69) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa564,	// (0x00084b69) cell_video_dialer_keypad_pane_g1

0x9b4c,	// (0x00084151) mup3_rocker2_pane_ParamLimits

0x9b4c,	// (0x00084151) mup3_rocker2_pane

0x9189,	// (0x0008378e) mup3_rocker2_pane_g1

0x8697,	// (0x00082c9c) main_dialer2_pane

0xdcdc,	// (0x000882e1) main_mp4_pane

0xa5a3,	// (0x00084ba8) main_mp4_pane_g1_ParamLimits

0xa5a3,	// (0x00084ba8) main_mp4_pane_g1

0xa5b1,	// (0x00084bb6) main_mp4_pane_g2_ParamLimits

0xa5b1,	// (0x00084bb6) main_mp4_pane_g2

0xa5bf,	// (0x00084bc4) main_mp4_pane_g3_ParamLimits

0xa5bf,	// (0x00084bc4) main_mp4_pane_g3

0xa604,	// (0x00084c09) main_mp4_pane_g4_ParamLimits

0xa604,	// (0x00084c09) main_mp4_pane_g4

0xa62c,	// (0x00084c31) main_mp4_pane_g5_ParamLimits

0xa62c,	// (0x00084c31) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x00089ecd) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x00089ecd) main_mp4_pane_g

0xa67c,	// (0x00084c81) main_mp4_pane_t1_ParamLimits

0xa67c,	// (0x00084c81) main_mp4_pane_t1

0xa6d8,	// (0x00084cdd) main_mp4_pane_t2_ParamLimits

0xa6d8,	// (0x00084cdd) main_mp4_pane_t2

0xed1d,	// (0x00089322) main_mp4_pane_t3_ParamLimits

0xed1d,	// (0x00089322) main_mp4_pane_t3

0xa72a,	// (0x00084d2f) main_mp4_pane_t4_ParamLimits

0xa72a,	// (0x00084d2f) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x00089eda) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x00089eda) main_mp4_pane_t

0xa76e,	// (0x00084d73) mp4_progress_pane_ParamLimits

0xa76e,	// (0x00084d73) mp4_progress_pane

0xa7b8,	// (0x00084dbd) mp4_rocker_pane_ParamLimits

0xa7b8,	// (0x00084dbd) mp4_rocker_pane

0xed45,	// (0x0008934a) mp4_progress_pane_t1

0xed5e,	// (0x00089363) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x00089ee3) mp4_progress_pane_t

0xed77,	// (0x0008937c) mup_progress_pane_cp04

0xf0f1,	// (0x000896f6) mp4_rocker_pane_g1

0xa7d8,	// (0x00084ddd) aid_cell_size_keypad2_ParamLimits

0xa7d8,	// (0x00084ddd) aid_cell_size_keypad2

0xa7e8,	// (0x00084ded) dialer2_ne_pane_ParamLimits

0xa7e8,	// (0x00084ded) dialer2_ne_pane

0xa7f6,	// (0x00084dfb) grid_dialer2_keypad_pane_ParamLimits

0xa7f6,	// (0x00084dfb) grid_dialer2_keypad_pane

0x2adf,	// (0x0007d0e4) bg_popup_call_pane_cp07_ParamLimits

0x2adf,	// (0x0007d0e4) bg_popup_call_pane_cp07

0xa806,	// (0x00084e0b) dialer2_ne_pane_t1_ParamLimits

0xa806,	// (0x00084e0b) dialer2_ne_pane_t1

0xa82b,	// (0x00084e30) cell_dialer2_keypad_pane_ParamLimits

0xa82b,	// (0x00084e30) cell_dialer2_keypad_pane

0xed95,	// (0x0008939a) bg_button_pane_pane_cp04_ParamLimits

0xed95,	// (0x0008939a) bg_button_pane_pane_cp04

0xa840,	// (0x00084e45) cell_dialer2_keypad_pane_g1_ParamLimits

0xa840,	// (0x00084e45) cell_dialer2_keypad_pane_g1

0x6708,	// (0x00080d0d) aid_placing_vt_set_content_ParamLimits

0x6708,	// (0x00080d0d) aid_placing_vt_set_content

0x6722,	// (0x00080d27) aid_placing_vt_set_title_ParamLimits

0x6722,	// (0x00080d27) aid_placing_vt_set_title

0xdcdc,	// (0x000882e1) main_image3_pane

0xa8da,	// (0x00084edf) area_side_right_pane_cp01_ParamLimits

0xa8da,	// (0x00084edf) area_side_right_pane_cp01

0xa907,	// (0x00084f0c) main_image3_pane_g1_ParamLimits

0xa907,	// (0x00084f0c) main_image3_pane_g1

0xa915,	// (0x00084f1a) main_image3_pane_g2_ParamLimits

0xa915,	// (0x00084f1a) main_image3_pane_g2

0xa92e,	// (0x00084f33) main_image3_pane_g3_ParamLimits

0xa92e,	// (0x00084f33) main_image3_pane_g3

0xa947,	// (0x00084f4c) main_image3_pane_g4_ParamLimits

0xa947,	// (0x00084f4c) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x00089ef2) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x00089ef2) main_image3_pane_g

0xa960,	// (0x00084f65) main_image3_pane_t1_ParamLimits

0xa960,	// (0x00084f65) main_image3_pane_t1

0xa985,	// (0x00084f8a) main_image3_pane_t2_ParamLimits

0xa985,	// (0x00084f8a) main_image3_pane_t2

0xa9a4,	// (0x00084fa9) main_image3_pane_t3_ParamLimits

0xa9a4,	// (0x00084fa9) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x00089efb) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x00089efb) main_image3_pane_t

0x2523,	// (0x0007cb28) grid_sctrl_middle_pane_cp01_ParamLimits

0x2523,	// (0x0007cb28) grid_sctrl_middle_pane_cp01

0xaa05,	// (0x0008500a) cell_sctrl_middle_pane_cp01_ParamLimits

0xaa05,	// (0x0008500a) cell_sctrl_middle_pane_cp01

0xaa16,	// (0x0008501b) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xaa16,	// (0x0008501b) cell_sctrl_middle_pane_cp01_g1

0xdcdc,	// (0x000882e1) main_call4_pane

0xaa23,	// (0x00085028) aid_size_button_call4_ParamLimits

0xaa23,	// (0x00085028) aid_size_button_call4

0xaa53,	// (0x00085058) call4_windows_pane_ParamLimits

0xaa53,	// (0x00085058) call4_windows_pane

0xaa6d,	// (0x00085072) grid_call4_button_pane_ParamLimits

0xaa6d,	// (0x00085072) grid_call4_button_pane

0xeda1,	// (0x000893a6) call4_windows_conf_pane

0xedb8,	// (0x000893bd) popup_call4_audio_first_window_ParamLimits

0xedb8,	// (0x000893bd) popup_call4_audio_first_window

0xee04,	// (0x00089409) popup_call4_audio_second_window_ParamLimits

0xee04,	// (0x00089409) popup_call4_audio_second_window

0xee18,	// (0x0008941d) popup_call4_audio_wait_window_ParamLimits

0xee18,	// (0x0008941d) popup_call4_audio_wait_window

0xaa91,	// (0x00085096) cell_call4_button_pane_ParamLimits

0xaa91,	// (0x00085096) cell_call4_button_pane

0xaab6,	// (0x000850bb) bg_button_pane_cp09_ParamLimits

0xaab6,	// (0x000850bb) bg_button_pane_cp09

0xaac2,	// (0x000850c7) cell_call4_button_pane_g1_ParamLimits

0xaac2,	// (0x000850c7) cell_call4_button_pane_g1

0xaacf,	// (0x000850d4) cell_call4_button_pane_t1_ParamLimits

0xaacf,	// (0x000850d4) cell_call4_button_pane_t1

0xee60,	// (0x00089465) popup_call4_audio_conf_window_ParamLimits

0xee60,	// (0x00089465) popup_call4_audio_conf_window

0x9b87,	// (0x0008418c) mup3_progress_pane_t1_ParamLimits

0x9b9e,	// (0x000841a3) mup3_progress_pane_t2_ParamLimits

0x9bb5,	// (0x000841ba) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x00089dd4) mup3_progress_pane_t_ParamLimits

0x9bcc,	// (0x000841d1) mup_progress_pane_cp03_ParamLimits

0xa2ae,	// (0x000848b3) mup3_control_keys_pane_g4_copy1

0xa79c,	// (0x00084da1) mp4_rocker2_pane_ParamLimits

0xa79c,	// (0x00084da1) mp4_rocker2_pane

0xee74,	// (0x00089479) mp4_rocker2_pane_g1

0xee7c,	// (0x00089481) mp4_rocker2_pane_g2

0xaae1,	// (0x000850e6) mp4_rocker2_pane_g3

0xaae9,	// (0x000850ee) mp4_rocker2_pane_g4

0xaaf1,	// (0x000850f6) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x00089f04) mp4_rocker2_pane_g

0xdcdc,	// (0x000882e1) main_camera4_pane

0xdcdc,	// (0x000882e1) main_video4_pane

0xa501,	// (0x00084b06) main_video_tele_dialer_pane_t1_ParamLimits

0xa501,	// (0x00084b06) main_video_tele_dialer_pane_t1

0xa513,	// (0x00084b18) main_video_tele_dialer_pane_t2_ParamLimits

0xa513,	// (0x00084b18) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x00089ebe) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x00089ebe) main_video_tele_dialer_pane_t

0xab11,	// (0x00085116) cam4_autofocus_pane_ParamLimits

0xab11,	// (0x00085116) cam4_autofocus_pane

0xab1f,	// (0x00085124) cam4_image_uncrop_pane_ParamLimits

0xab1f,	// (0x00085124) cam4_image_uncrop_pane

0xab36,	// (0x0008513b) cam4_indicators_pane_ParamLimits

0xab36,	// (0x0008513b) cam4_indicators_pane

0xab52,	// (0x00085157) main_camera4_pane_g1_ParamLimits

0xab52,	// (0x00085157) main_camera4_pane_g1

0xab5e,	// (0x00085163) main_camera4_pane_g2_ParamLimits

0xab5e,	// (0x00085163) main_camera4_pane_g2

0xab5e,	// (0x00085163) main_camera4_pane_g3_ParamLimits

0xab5e,	// (0x00085163) main_camera4_pane_g3

0xab6a,	// (0x0008516f) main_camera4_pane_g4_ParamLimits

0xab6a,	// (0x0008516f) main_camera4_pane_g4

0xab76,	// (0x0008517b) main_camera4_pane_g5_ParamLimits

0xab76,	// (0x0008517b) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x00089f0f) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x00089f0f) main_camera4_pane_g

0xab90,	// (0x00085195) main_camera4_pane_t1_ParamLimits

0xab90,	// (0x00085195) main_camera4_pane_t1

0xabd8,	// (0x000851dd) bg_tb_trans_pane_cp06

0xabee,	// (0x000851f3) cam4_indicators_pane_g1

0xabff,	// (0x00085204) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x00089f2a) cam4_indicators_pane_g

0xac1d,	// (0x00085222) cam4_indicators_pane_t1

0xac47,	// (0x0008524c) main_video4_pane_g1_ParamLimits

0xac47,	// (0x0008524c) main_video4_pane_g1

0xac53,	// (0x00085258) main_video4_pane_g2_ParamLimits

0xac53,	// (0x00085258) main_video4_pane_g2

0xac5f,	// (0x00085264) main_video4_pane_g3_ParamLimits

0xac5f,	// (0x00085264) main_video4_pane_g3

0xac6b,	// (0x00085270) main_video4_pane_g4_ParamLimits

0xac6b,	// (0x00085270) main_video4_pane_g4

0x0004,

0xf92c,	// (0x00089f31) main_video4_pane_g_ParamLimits

0xf92c,	// (0x00089f31) main_video4_pane_g

0xac8b,	// (0x00085290) vid4_indicators_pane_ParamLimits

0xac8b,	// (0x00085290) vid4_indicators_pane

0xaca9,	// (0x000852ae) video4_image_uncrop_cif_pane_ParamLimits

0xaca9,	// (0x000852ae) video4_image_uncrop_cif_pane

0xacb8,	// (0x000852bd) video4_image_uncrop_nhd_pane_ParamLimits

0xacb8,	// (0x000852bd) video4_image_uncrop_nhd_pane

0xab1f,	// (0x00085124) video4_image_uncrop_vga_pane_ParamLimits

0xab1f,	// (0x00085124) video4_image_uncrop_vga_pane

0xacc5,	// (0x000852ca) bg_tb_trans_pane_cp07

0xacdd,	// (0x000852e2) vid4_indicators_pane_g1

0xacee,	// (0x000852f3) vid4_indicators_pane_g2

0xacff,	// (0x00085304) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x00089f3c) vid4_indicators_pane_g

0xad2c,	// (0x00085331) vid4_indicators_pane_t1

0xad45,	// (0x0008534a) cam4_autofocus_pane_g1

0xad4d,	// (0x00085352) cam4_autofocus_pane_g2

0xad55,	// (0x0008535a) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x00089f47) cam4_autofocus_pane_g

0xad5d,	// (0x00085362) cam4_autofocus_pane_g3_copy1

0xa533,	// (0x00084b38) video_down_pane_cp_t1

0xa541,	// (0x00084b46) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x00089ec3) video_down_pane_cp_t

0x2523,	// (0x0007cb28) popup_vitu2_window_ParamLimits

0x2523,	// (0x0007cb28) popup_vitu2_window

0xad65,	// (0x0008536a) aid_size_cell2_itu2_ParamLimits

0xad65,	// (0x0008536a) aid_size_cell2_itu2

0xad87,	// (0x0008538c) aid_size_cell_itu2_ParamLimits

0xad87,	// (0x0008538c) aid_size_cell_itu2

0xadcb,	// (0x000853d0) bg_popup_window_pane_cp09_ParamLimits

0xadcb,	// (0x000853d0) bg_popup_window_pane_cp09

0xadd9,	// (0x000853de) field_vitu2_entry_pane_ParamLimits

0xadd9,	// (0x000853de) field_vitu2_entry_pane

0xadf9,	// (0x000853fe) grid_vitu2_function_pane_ParamLimits

0xadf9,	// (0x000853fe) grid_vitu2_function_pane

0xae3d,	// (0x00085442) grid_vitu2_itu_pane_ParamLimits

0xae3d,	// (0x00085442) grid_vitu2_itu_pane

0xaeb5,	// (0x000854ba) cell_vitu2_itu_pane_ParamLimits

0xaeb5,	// (0x000854ba) cell_vitu2_itu_pane

0xaeca,	// (0x000854cf) cell_vitu2_function_pane_ParamLimits

0xaeca,	// (0x000854cf) cell_vitu2_function_pane

0xee84,	// (0x00089489) bg_popup_call_pane_cp08_ParamLimits

0xee84,	// (0x00089489) bg_popup_call_pane_cp08

0xee9d,	// (0x000894a2) field_vitu2_entry_pane_g1

0xeea9,	// (0x000894ae) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x00089f4e) field_vitu2_entry_pane_g

0x2531,	// (0x0007cb36) field_vitu2_entry_pane_t1_ParamLimits

0x2531,	// (0x0007cb36) field_vitu2_entry_pane_t1

0x2560,	// (0x0007cb65) field_vitu2_entry_pane_t2_ParamLimits

0x2560,	// (0x0007cb65) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x00089f55) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x00089f55) field_vitu2_entry_pane_t

0xaf09,	// (0x0008550e) bg_button_pane_cp010_ParamLimits

0xaf09,	// (0x0008550e) bg_button_pane_cp010

0xaf17,	// (0x0008551c) cell_vitu2_itu_pane_g1

0xaf35,	// (0x0008553a) cell_vitu2_itu_pane_t1_ParamLimits

0xaf35,	// (0x0008553a) cell_vitu2_itu_pane_t1

0x569f,	// (0x0007fca4) cell_vitu2_itu_pane_t2_ParamLimits

0x569f,	// (0x0007fca4) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x00089f5f) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x00089f5f) cell_vitu2_itu_pane_t

0xacc5,	// (0x000852ca) bg_button_pane_cp011

0xaf87,	// (0x0008558c) cell_vitu2_function_pane_g1

0xdcdc,	// (0x000882e1) main_myfav_hc_pane

0xa9e6,	// (0x00084feb) popup_image3_note_pane_ParamLimits

0xa9e6,	// (0x00084feb) popup_image3_note_pane

0xa9f4,	// (0x00084ff9) popup_image3_tool_bar_pane_ParamLimits

0xa9f4,	// (0x00084ff9) popup_image3_tool_bar_pane

0x570d,	// (0x0007fd12) cell_vitu2_itu_pane_t3_ParamLimits

0x570d,	// (0x0007fd12) cell_vitu2_itu_pane_t3

0xdcdc,	// (0x000882e1) bg_popup_trans_pane

0xeecb,	// (0x000894d0) grid_image3_tool_bar_pane

0xeed5,	// (0x000894da) bg_popup_trans_pane_g1

0xe87d,	// (0x00088e82) bg_popup_trans_pane_g2

0xeedd,	// (0x000894e2) bg_popup_trans_pane_g3

0xeee5,	// (0x000894ea) bg_popup_trans_pane_g4

0xeeed,	// (0x000894f2) bg_popup_trans_pane_g5

0xeef5,	// (0x000894fa) bg_popup_trans_pane_g6

0xeefd,	// (0x00089502) bg_popup_trans_pane_g7

0xef05,	// (0x0008950a) bg_popup_trans_pane_g8

0xe85d,	// (0x00088e62) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x00089f66) bg_popup_trans_pane_g

0xef0d,	// (0x00089512) cell_image3_tool_bar_pane_ParamLimits

0xef0d,	// (0x00089512) cell_image3_tool_bar_pane

0x9189,	// (0x0008378e) cell_image3_tool_bar_pane_g1

0xdcdc,	// (0x000882e1) bg_popup_trans_pane_cp1

0xef21,	// (0x00089526) popup_image3_note_pane_t1

0xef2f,	// (0x00089534) popup_image3_note_pane_t2

0xef3d,	// (0x00089542) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x00089f79) popup_image3_note_pane_t

0xef4b,	// (0x00089550) popup_image3_note_pane_t3_copy1

0xaf9b,	// (0x000855a0) bg_myfav_hc_instruction_pane_ParamLimits

0xaf9b,	// (0x000855a0) bg_myfav_hc_instruction_pane

0xafb3,	// (0x000855b8) cell_myfav_contact_pane_ParamLimits

0xafb3,	// (0x000855b8) cell_myfav_contact_pane

0xafcd,	// (0x000855d2) cell_myfav_contact_pane_cp1_ParamLimits

0xafcd,	// (0x000855d2) cell_myfav_contact_pane_cp1

0xafe5,	// (0x000855ea) cell_myfav_contact_pane_cp2_ParamLimits

0xafe5,	// (0x000855ea) cell_myfav_contact_pane_cp2

0xaffd,	// (0x00085602) cell_myfav_contact_pane_cp3_ParamLimits

0xaffd,	// (0x00085602) cell_myfav_contact_pane_cp3

0xb014,	// (0x00085619) cell_myfav_contact_pane_cp4_ParamLimits

0xb014,	// (0x00085619) cell_myfav_contact_pane_cp4

0xb02a,	// (0x0008562f) cell_myfav_contact_pane_cp5_ParamLimits

0xb02a,	// (0x0008562f) cell_myfav_contact_pane_cp5

0xb03e,	// (0x00085643) cell_myfav_contact_pane_cp6_ParamLimits

0xb03e,	// (0x00085643) cell_myfav_contact_pane_cp6

0xb052,	// (0x00085657) cell_myfav_contact_pane_cp7_ParamLimits

0xb052,	// (0x00085657) cell_myfav_contact_pane_cp7

0xef59,	// (0x0008955e) listscroll_gen_pane_cp05

0xb06a,	// (0x0008566f) main_myfav_hc_pane_g1_ParamLimits

0xb06a,	// (0x0008566f) main_myfav_hc_pane_g1

0xb080,	// (0x00085685) main_myfav_hc_pane_g2_ParamLimits

0xb080,	// (0x00085685) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x00089f80) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x00089f80) main_myfav_hc_pane_g

0xb0ae,	// (0x000856b3) main_myfav_hc_pane_t1_ParamLimits

0xb0ae,	// (0x000856b3) main_myfav_hc_pane_t1

0xef62,	// (0x00089567) main_myfav_hc_pane_t2_ParamLimits

0xef62,	// (0x00089567) main_myfav_hc_pane_t2

0xef74,	// (0x00089579) main_myfav_hc_pane_t3_ParamLimits

0xef74,	// (0x00089579) main_myfav_hc_pane_t3

0xb0c5,	// (0x000856ca) main_myfav_hc_pane_t4_ParamLimits

0xb0c5,	// (0x000856ca) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x00089f87) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x00089f87) main_myfav_hc_pane_t

0x9189,	// (0x0008378e) bg_myfav_hc_instruction_pane_g1

0xef86,	// (0x0008958b) cell_myfav_contact_pane_g1_ParamLimits

0xef86,	// (0x0008958b) cell_myfav_contact_pane_g1

0xef86,	// (0x0008958b) cell_myfav_contact_pane_g2_ParamLimits

0xef86,	// (0x0008958b) cell_myfav_contact_pane_g2

0xef92,	// (0x00089597) cell_myfav_contact_pane_g3_ParamLimits

0xef92,	// (0x00089597) cell_myfav_contact_pane_g3

0x97bb,	// (0x00083dc0) cell_myfav_contact_pane_g4_ParamLimits

0x97bb,	// (0x00083dc0) cell_myfav_contact_pane_g4

0xef9f,	// (0x000895a4) cell_myfav_contact_pane_g5_ParamLimits

0xef9f,	// (0x000895a4) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x00089f92) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x00089f92) cell_myfav_contact_pane_g

0xb096,	// (0x0008569b) main_myfav_hc_pane_g3_ParamLimits

0xb096,	// (0x0008569b) main_myfav_hc_pane_g3

0x58db,	// (0x0007fee0) popup_adpt_find_window

0xb0ef,	// (0x000856f4) afind_page_pane_ParamLimits

0xb0ef,	// (0x000856f4) afind_page_pane

0xb0fc,	// (0x00085701) aid_size_cell_afind_ParamLimits

0xb0fc,	// (0x00085701) aid_size_cell_afind

0xb116,	// (0x0008571b) bg_popup_sub_pane_cp09_ParamLimits

0xb116,	// (0x0008571b) bg_popup_sub_pane_cp09

0xb123,	// (0x00085728) find_pane_cp01_ParamLimits

0xb123,	// (0x00085728) find_pane_cp01

0xefab,	// (0x000895b0) grid_afind_control_pane_ParamLimits

0xefab,	// (0x000895b0) grid_afind_control_pane

0xb130,	// (0x00085735) grid_afind_pane_ParamLimits

0xb130,	// (0x00085735) grid_afind_pane

0xb14c,	// (0x00085751) cell_afind_pane_ParamLimits

0xb14c,	// (0x00085751) cell_afind_pane

0x9189,	// (0x0008378e) afind_page_pane_g1

0xb192,	// (0x00085797) afind_page_pane_g2

0xb19b,	// (0x000857a0) afind_page_pane_g3

0x0002,

0xf998,	// (0x00089f9d) afind_page_pane_g

0xb1a4,	// (0x000857a9) afind_page_pane_t1

0xefbf,	// (0x000895c4) cell_afind_grid_control_pane_ParamLimits

0xefbf,	// (0x000895c4) cell_afind_grid_control_pane

0xed95,	// (0x0008939a) bg_button_pane_cp69_ParamLimits

0xed95,	// (0x0008939a) bg_button_pane_cp69

0xb1c4,	// (0x000857c9) cell_afind_pane_g1_ParamLimits

0xb1c4,	// (0x000857c9) cell_afind_pane_g1

0xb1d1,	// (0x000857d6) cell_afind_pane_t1_ParamLimits

0xb1d1,	// (0x000857d6) cell_afind_pane_t1

0xe670,	// (0x00088c75) bg_button_pane_cp72

0xefce,	// (0x000895d3) cell_afind_grid_control_pane_g1

0x8215,	// (0x0008281a) aid_image_placing_area_ParamLimits

0x8215,	// (0x0008281a) aid_image_placing_area

0xea63,	// (0x00089068) field_vitu_entry_pane_g1_ParamLimits

0xea63,	// (0x00089068) field_vitu_entry_pane_g1

0xea6f,	// (0x00089074) field_vitu_entry_pane_g2_ParamLimits

0xea6f,	// (0x00089074) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x00089e4e) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x00089e4e) field_vitu_entry_pane_g

0xa335,	// (0x0008493a) cell_vitu_itu_pane_g1_ParamLimits

0xa377,	// (0x0008497c) cell_vitu_itu_pane_t3_ParamLimits

0xa377,	// (0x0008497c) cell_vitu_itu_pane_t3

0xed45,	// (0x0008934a) mp4_progress_pane_t1_ParamLimits

0xed5e,	// (0x00089363) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x00089ee3) mp4_progress_pane_t_ParamLimits

0xed77,	// (0x0008937c) mup_progress_pane_cp04_ParamLimits

0xb0d9,	// (0x000856de) main_myfav_hc_pane_t5_ParamLimits

0xb0d9,	// (0x000856de) main_myfav_hc_pane_t5

0x065e,	// (0x0007ac63) aid_zoom_text_primary

0x58db,	// (0x0007fee0) popup_adpt_find_window_ParamLimits

0x066e,	// (0x0007ac73) main_cam_set_pane

0xab44,	// (0x00085149) cam4_zoom_pane_ParamLimits

0xab44,	// (0x00085149) cam4_zoom_pane

0xb1e3,	// (0x000857e8) main_cam_set_pane_g1_ParamLimits

0xb1e3,	// (0x000857e8) main_cam_set_pane_g1

0xb1f1,	// (0x000857f6) main_cam_set_pane_g2_ParamLimits

0xb1f1,	// (0x000857f6) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x00089fa4) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x00089fa4) main_cam_set_pane_g

0xb1fd,	// (0x00085802) main_cam_set_pane_t1_ParamLimits

0xb1fd,	// (0x00085802) main_cam_set_pane_t1

0xb219,	// (0x0008581e) main_cset_listscroll_pane_ParamLimits

0xb219,	// (0x0008581e) main_cset_listscroll_pane

0xb244,	// (0x00085849) main_cset_slider_pane_ParamLimits

0xb244,	// (0x00085849) main_cset_slider_pane

0xefdf,	// (0x000895e4) main_cset_list_pane_ParamLimits

0xefdf,	// (0x000895e4) main_cset_list_pane

0xefef,	// (0x000895f4) scroll_pane_cp028

0xb263,	// (0x00085868) aid_area_touch_slider

0xb27f,	// (0x00085884) cset_slider_pane

0xb2a9,	// (0x000858ae) main_cset_slider_pane_g1

0xb2be,	// (0x000858c3) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x00089fa9) main_cset_slider_pane_g

0xf028,	// (0x0008962d) main_cset_slider_pane_t1

0xb380,	// (0x00085985) main_cset_slider_pane_t2

0xb39a,	// (0x0008599f) main_cset_slider_pane_t3

0xb3b4,	// (0x000859b9) main_cset_slider_pane_t4

0xb3ce,	// (0x000859d3) main_cset_slider_pane_t5

0xb3ec,	// (0x000859f1) main_cset_slider_pane_t6

0xb403,	// (0x00085a08) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x00089fce) main_cset_slider_pane_t

0xb50f,	// (0x00085b14) cset_list_set_pane_ParamLimits

0xb50f,	// (0x00085b14) cset_list_set_pane

0xb525,	// (0x00085b2a) aid_position_infowindow_above

0xb52d,	// (0x00085b32) aid_position_infowindow_below

0xb535,	// (0x00085b3a) cset_list_set_pane_g1_ParamLimits

0xb535,	// (0x00085b3a) cset_list_set_pane_g1

0x257d,	// (0x0007cb82) cset_list_set_pane_g3_ParamLimits

0x257d,	// (0x0007cb82) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x00089fed) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x00089fed) cset_list_set_pane_g

0x258c,	// (0x0007cb91) cset_list_set_pane_t1_ParamLimits

0x258c,	// (0x0007cb91) cset_list_set_pane_t1

0x066e,	// (0x0007ac73) list_highlight_pane_cp021_ParamLimits

0x066e,	// (0x0007ac73) list_highlight_pane_cp021

0x10ab,	// (0x0007b6b0) cset_slider_pane_g1

0x10bd,	// (0x0007b6c2) cset_slider_pane_g2

0x10b4,	// (0x0007b6b9) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x00089ff2) cset_slider_pane_g

0xb541,	// (0x00085b46) aid_area_touch_cam4_zoom

0xb549,	// (0x00085b4e) cam4_zoom_cont_pane

0xb551,	// (0x00085b56) cam4_zoom_pane_g1

0xb559,	// (0x00085b5e) cam4_zoom_pane_g2

0xb561,	// (0x00085b66) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x00089ff9) cam4_zoom_pane_g

0xb569,	// (0x00085b6e) cam4_zoom_cont_pane_g1

0xb572,	// (0x00085b77) cam4_zoom_cont_pane_g2

0xb57b,	// (0x00085b80) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x0008a000) cam4_zoom_cont_pane_g

0xaa3d,	// (0x00085042) call4_image_pane_ParamLimits

0xaa3d,	// (0x00085042) call4_image_pane

0xeda1,	// (0x000893a6) call4_windows_conf_pane_ParamLimits

0xede2,	// (0x000893e7) popup_call4_audio_in_window_ParamLimits

0xede2,	// (0x000893e7) popup_call4_audio_in_window

0xdcdc,	// (0x000882e1) bg_popup_call2_act_pane_cp02

0xee58,	// (0x0008945d) call4_list_conf_pane

0x9189,	// (0x0008378e) call4_image_pane_g1

0x9189,	// (0x0008378e) call4_image_pane_g2

0x0001,

0xf70f,	// (0x00089d14) call4_image_pane_g

0xf0c8,	// (0x000896cd) list_single_graphic_popup_conf4_pane_ParamLimits

0xf0c8,	// (0x000896cd) list_single_graphic_popup_conf4_pane

0xdcdc,	// (0x000882e1) list_highlight_pane_cp022

0xf0db,	// (0x000896e0) list_single_graphic_popup_conf4_pane_g1

0x0d6a,	// (0x0007b36f) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x0008a007) list_single_graphic_popup_conf4_pane_g

0xf0e3,	// (0x000896e8) list_single_graphic_popup_conf4_pane_t1

0x6825,	// (0x00080e2a) popup_vtel_slider_window_ParamLimits

0x6825,	// (0x00080e2a) popup_vtel_slider_window

0xed83,	// (0x00089388) dialer2_ne_pane_t2_ParamLimits

0xed83,	// (0x00089388) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x00089ee8) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x00089ee8) dialer2_ne_pane_t

0x066e,	// (0x0007ac73) bg_popup_sub_pane_cp010_ParamLimits

0x066e,	// (0x0007ac73) bg_popup_sub_pane_cp010

0xb584,	// (0x00085b89) popup_vtel_slider_window_g1_ParamLimits

0xb584,	// (0x00085b89) popup_vtel_slider_window_g1

0xb590,	// (0x00085b95) popup_vtel_slider_window_g2_ParamLimits

0xb590,	// (0x00085b95) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x0008a00c) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x0008a00c) popup_vtel_slider_window_g

0xb5d8,	// (0x00085bdd) vtel_slider_pane_ParamLimits

0xb5d8,	// (0x00085bdd) vtel_slider_pane

0xb5e7,	// (0x00085bec) vtel_slider_pane_g1_ParamLimits

0xb5e7,	// (0x00085bec) vtel_slider_pane_g1

0xb5f4,	// (0x00085bf9) vtel_slider_pane_g2_ParamLimits

0xb5f4,	// (0x00085bf9) vtel_slider_pane_g2

0xb601,	// (0x00085c06) vtel_slider_pane_g3_ParamLimits

0xb601,	// (0x00085c06) vtel_slider_pane_g3

0xb5e7,	// (0x00085bec) vtel_slider_pane_g4_ParamLimits

0xb5e7,	// (0x00085bec) vtel_slider_pane_g4

0xb60e,	// (0x00085c13) vtel_slider_pane_g5_ParamLimits

0xb60e,	// (0x00085c13) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x0008a015) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x0008a015) vtel_slider_pane_g

0xdcdc,	// (0x000882e1) main_gallery2_pane

0xadad,	// (0x000853b2) aid_size_row_itut2_dropdow_list_ParamLimits

0xadad,	// (0x000853b2) aid_size_row_itut2_dropdow_list

0xae1b,	// (0x00085420) grid_vitu2_function_top_pane_ParamLimits

0xae1b,	// (0x00085420) grid_vitu2_function_top_pane

0xae71,	// (0x00085476) popup_vitu2_dropdown_list_window_ParamLimits

0xae71,	// (0x00085476) popup_vitu2_dropdown_list_window

0xae91,	// (0x00085496) popup_vitu2_match_list_window

0xb61b,	// (0x00085c20) cell_vitu2_function_top_pane_ParamLimits

0xb61b,	// (0x00085c20) cell_vitu2_function_top_pane

0xb63b,	// (0x00085c40) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb63b,	// (0x00085c40) cell_vitu2_function_top_pane_cp01

0xb659,	// (0x00085c5e) cell_vitu2_function_top_wide_pane_ParamLimits

0xb659,	// (0x00085c5e) cell_vitu2_function_top_wide_pane

0xacc5,	// (0x000852ca) bg_button_pane_cp012

0xb677,	// (0x00085c7c) cell_vitu2_function_top_pane_g1

0xb686,	// (0x00085c8b) bg_button_pane_cp013_ParamLimits

0xb686,	// (0x00085c8b) bg_button_pane_cp013

0xb6a2,	// (0x00085ca7) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb6a2,	// (0x00085ca7) cell_vitu2_function_top_wide_pane_g1

0xb6ba,	// (0x00085cbf) bg_popup_sub_pane_cp20

0xb6c8,	// (0x00085ccd) list_vitu2_match_list_pane

0xeed5,	// (0x000894da) bg_popup_sub_pane_cp20_g1

0xeedd,	// (0x000894e2) bg_popup_sub_pane_cp20_g2

0xe87d,	// (0x00088e82) bg_popup_sub_pane_cp20_g3

0xeee5,	// (0x000894ea) bg_popup_sub_pane_cp20_g4

0xe85d,	// (0x00088e62) bg_popup_sub_pane_cp20_g5

0x25ca,	// (0x0007cbcf) bg_popup_sub_pane_cp20_g6

0xeef5,	// (0x000894fa) bg_popup_sub_pane_cp20_g7

0xeefd,	// (0x00089502) bg_popup_sub_pane_cp20_g8

0xef05,	// (0x0008950a) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x0008a020) bg_popup_sub_pane_cp20_g

0xb6e0,	// (0x00085ce5) list_vitu2_match_list_item_pane_ParamLimits

0xb6e0,	// (0x00085ce5) list_vitu2_match_list_item_pane

0xb6f2,	// (0x00085cf7) list_vitu2_match_list_item_pane_t1

0x5d11,	// (0x00080316) bg_popup_sub_pane_cp21

0xb72f,	// (0x00085d34) grid_vitu2_dropdown_list_pane

0xb737,	// (0x00085d3c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb737,	// (0x00085d3c) cell_vitu2_dropdown_list_char_pane

0xb758,	// (0x00085d5d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb758,	// (0x00085d5d) cell_vitu2_dropdown_list_ctrl_pane

0x25fc,	// (0x0007cc01) cell_vitu2_dropdown_list_char_pane_g1

0x25f3,	// (0x0007cbf8) cell_vitu2_dropdown_list_char_pane_g2

0x25ea,	// (0x0007cbef) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x0008a03d) cell_vitu2_dropdown_list_char_pane_g

0xb784,	// (0x00085d89) cell_vitu2_dropdown_list_char_pane_t1

0xb792,	// (0x00085d97) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb792,	// (0x00085d97) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb7a2,	// (0x00085da7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb7a2,	// (0x00085da7) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb7b3,	// (0x00085db8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb7b3,	// (0x00085db8) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb7c3,	// (0x00085dc8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb7c3,	// (0x00085dc8) cell_vitu2_dropdown_list_ctrl_pane_g4

0xabd8,	// (0x000851dd) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xabd8,	// (0x000851dd) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x0008a044) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x0008a044) cell_vitu2_dropdown_list_ctrl_pane_g

0xb7df,	// (0x00085de4) aid_size_cell_gallery2_ParamLimits

0xb7df,	// (0x00085de4) aid_size_cell_gallery2

0xb7ed,	// (0x00085df2) grid_gallery2_pane_ParamLimits

0xb7ed,	// (0x00085df2) grid_gallery2_pane

0xb7fc,	// (0x00085e01) scroll_pane_cp029_ParamLimits

0xb7fc,	// (0x00085e01) scroll_pane_cp029

0xb808,	// (0x00085e0d) cell_gallery2_pane_ParamLimits

0xb808,	// (0x00085e0d) cell_gallery2_pane

0x2605,	// (0x0007cc0a) cell_gallery2_pane_g2

0x3c09,	// (0x0007e20e) cell_gallery2_pane_g3

0x260f,	// (0x0007cc14) cell_gallery2_pane_g4

0x2617,	// (0x0007cc1c) cell_gallery2_pane_g5

0x0f55,	// (0x0007b55a) grid_highlight_pane_cp10

0xae91,	// (0x00085496) popup_vitu2_match_list_window_ParamLimits

0xaea5,	// (0x000854aa) popup_vitu2_query_window_ParamLimits

0xaea5,	// (0x000854aa) popup_vitu2_query_window

0x5d11,	// (0x00080316) bg_vitu2_candi_button_pane

0x25fc,	// (0x0007cc01) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x25f3,	// (0x0007cbf8) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x25ea,	// (0x0007cbef) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb836,	// (0x00085e3b) bg_button_pane_cp015

0xb840,	// (0x00085e45) bg_button_pane_cp016

0xb84a,	// (0x00085e4f) bg_button_pane_cp017

0x066e,	// (0x0007ac73) bg_popup_sub_pane_cp22

0x261f,	// (0x0007cc24) popup_vitu2_query_window_g1

0xb872,	// (0x00085e77) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x0008a04f) popup_vitu2_query_window_g

0xb880,	// (0x00085e85) popup_vitu2_query_window_t1_ParamLimits

0xb880,	// (0x00085e85) popup_vitu2_query_window_t1

0xb8a8,	// (0x00085ead) popup_vitu2_query_window_t2_ParamLimits

0xb8a8,	// (0x00085ead) popup_vitu2_query_window_t2

0xb8ba,	// (0x00085ebf) popup_vitu2_query_window_t3_ParamLimits

0xb8ba,	// (0x00085ebf) popup_vitu2_query_window_t3

0xb8e2,	// (0x00085ee7) popup_vitu2_query_window_t4_ParamLimits

0xb8e2,	// (0x00085ee7) popup_vitu2_query_window_t4

0xb8f6,	// (0x00085efb) popup_vitu2_query_window_t5_ParamLimits

0xb8f6,	// (0x00085efb) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x0008a054) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x0008a054) popup_vitu2_query_window_t

0xefd7,	// (0x000895dc) main_cset_text_pane

0xb263,	// (0x00085868) aid_area_touch_slider_ParamLimits

0xb27f,	// (0x00085884) cset_slider_pane_ParamLimits

0xb2a9,	// (0x000858ae) main_cset_slider_pane_g1_ParamLimits

0xb2be,	// (0x000858c3) main_cset_slider_pane_g2_ParamLimits

0xeff8,	// (0x000895fd) main_cset_slider_pane_g3_ParamLimits

0xeff8,	// (0x000895fd) main_cset_slider_pane_g3

0xb2d3,	// (0x000858d8) main_cset_slider_pane_g4_ParamLimits

0xb2d3,	// (0x000858d8) main_cset_slider_pane_g4

0xb2e2,	// (0x000858e7) main_cset_slider_pane_g5_ParamLimits

0xb2e2,	// (0x000858e7) main_cset_slider_pane_g5

0xb2f0,	// (0x000858f5) main_cset_slider_pane_g6_ParamLimits

0xb2f0,	// (0x000858f5) main_cset_slider_pane_g6

0xf9a4,	// (0x00089fa9) main_cset_slider_pane_g_ParamLimits

0xf028,	// (0x0008962d) main_cset_slider_pane_t1_ParamLimits

0xb380,	// (0x00085985) main_cset_slider_pane_t2_ParamLimits

0xb39a,	// (0x0008599f) main_cset_slider_pane_t3_ParamLimits

0xb3b4,	// (0x000859b9) main_cset_slider_pane_t4_ParamLimits

0xb3ce,	// (0x000859d3) main_cset_slider_pane_t5_ParamLimits

0xb3ec,	// (0x000859f1) main_cset_slider_pane_t6_ParamLimits

0xb403,	// (0x00085a08) main_cset_slider_pane_t7_ParamLimits

0xb431,	// (0x00085a36) main_cset_slider_pane_t8_ParamLimits

0xb431,	// (0x00085a36) main_cset_slider_pane_t8

0xb459,	// (0x00085a5e) main_cset_slider_pane_t9_ParamLimits

0xb459,	// (0x00085a5e) main_cset_slider_pane_t9

0xb481,	// (0x00085a86) main_cset_slider_pane_t10_ParamLimits

0xb481,	// (0x00085a86) main_cset_slider_pane_t10

0xb4a9,	// (0x00085aae) main_cset_slider_pane_t11_ParamLimits

0xb4a9,	// (0x00085aae) main_cset_slider_pane_t11

0xb4d3,	// (0x00085ad8) main_cset_slider_pane_t12_ParamLimits

0xb4d3,	// (0x00085ad8) main_cset_slider_pane_t12

0xb4f0,	// (0x00085af5) main_cset_slider_pane_t13_ParamLimits

0xb4f0,	// (0x00085af5) main_cset_slider_pane_t13

0xf9c9,	// (0x00089fce) main_cset_slider_pane_t_ParamLimits

0xdcdc,	// (0x000882e1) bg_popup_sub_pane_cp011

0x262b,	// (0x0007cc30) main_cset_text_pane_g1

0x2633,	// (0x0007cc38) main_cset_text_pane_t1

0x2641,	// (0x0007cc46) main_cset_text_pane_t2

0x264f,	// (0x0007cc54) main_cset_text_pane_t3

0x265d,	// (0x0007cc62) main_cset_text_pane_t4

0x266b,	// (0x0007cc70) main_cset_text_pane_t5

0x2679,	// (0x0007cc7e) main_cset_text_pane_t6

0x2687,	// (0x0007cc8c) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x0008a05f) main_cset_text_pane_t

0xdcdc,	// (0x000882e1) main_cam4_burst_pane

0xdcdc,	// (0x000882e1) main_cam5_pane

0xb1b2,	// (0x000857b7) bg_button_pane_cp019

0xb1bb,	// (0x000857c0) bg_button_pane_cp020

0xf004,	// (0x00089609) main_cset_slider_pane_g7_ParamLimits

0xf004,	// (0x00089609) main_cset_slider_pane_g7

0xf010,	// (0x00089615) main_cset_slider_pane_g8_ParamLimits

0xf010,	// (0x00089615) main_cset_slider_pane_g8

0xb304,	// (0x00085909) main_cset_slider_pane_g9_ParamLimits

0xb304,	// (0x00085909) main_cset_slider_pane_g9

0xb310,	// (0x00085915) main_cset_slider_pane_g10_ParamLimits

0xb310,	// (0x00085915) main_cset_slider_pane_g10

0xb31c,	// (0x00085921) main_cset_slider_pane_g11_ParamLimits

0xb31c,	// (0x00085921) main_cset_slider_pane_g11

0xb328,	// (0x0008592d) main_cset_slider_pane_g12_ParamLimits

0xb328,	// (0x0008592d) main_cset_slider_pane_g12

0xb334,	// (0x00085939) main_cset_slider_pane_g13_ParamLimits

0xb334,	// (0x00085939) main_cset_slider_pane_g13

0xb340,	// (0x00085945) main_cset_slider_pane_g14_ParamLimits

0xb340,	// (0x00085945) main_cset_slider_pane_g14

0xb34c,	// (0x00085951) main_cset_slider_pane_g15_ParamLimits

0xb34c,	// (0x00085951) main_cset_slider_pane_g15

0xf056,	// (0x0008965b) main_cset_slider_pane_t14_ParamLimits

0xf056,	// (0x0008965b) main_cset_slider_pane_t14

0xf08f,	// (0x00089694) main_cset_slider_pane_t15_ParamLimits

0xf08f,	// (0x00089694) main_cset_slider_pane_t15

0xb90a,	// (0x00085f0f) aid_cam4_burst_size_cell_ParamLimits

0xb90a,	// (0x00085f0f) aid_cam4_burst_size_cell

0xb926,	// (0x00085f2b) grid_cam4_burst_pane_ParamLimits

0xb926,	// (0x00085f2b) grid_cam4_burst_pane

0xb956,	// (0x00085f5b) linegrid_cam4_burst_pane_ParamLimits

0xb956,	// (0x00085f5b) linegrid_cam4_burst_pane

0xb976,	// (0x00085f7b) scroll_pane_cp30_ParamLimits

0xb976,	// (0x00085f7b) scroll_pane_cp30

0xb982,	// (0x00085f87) cell_cam4_burst_pane_ParamLimits

0xb982,	// (0x00085f87) cell_cam4_burst_pane

0x2695,	// (0x0007cc9a) linegrid_cam4_burst_pane_g1_ParamLimits

0x2695,	// (0x0007cc9a) linegrid_cam4_burst_pane_g1

0xb9be,	// (0x00085fc3) linegrid_cam4_burst_pane_g2_ParamLimits

0xb9be,	// (0x00085fc3) linegrid_cam4_burst_pane_g2

0x26a2,	// (0x0007cca7) linegrid_cam4_burst_pane_g3_ParamLimits

0x26a2,	// (0x0007cca7) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x0008a06e) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x0008a06e) linegrid_cam4_burst_pane_g

0xb9cf,	// (0x00085fd4) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb9cf,	// (0x00085fd4) linegrid_cam4_burst_pane_g3_copy1

0x26af,	// (0x0007ccb4) linegrid_cam4_burst_pane_g4_ParamLimits

0x26af,	// (0x0007ccb4) linegrid_cam4_burst_pane_g4

0xb9e9,	// (0x00085fee) linegrid_cam4_burst_pane_g5_ParamLimits

0xb9e9,	// (0x00085fee) linegrid_cam4_burst_pane_g5

0xb9fa,	// (0x00085fff) linegrid_cam4_burst_pane_g6_ParamLimits

0xb9fa,	// (0x00085fff) linegrid_cam4_burst_pane_g6

0x26bc,	// (0x0007ccc1) linegrid_cam4_burst_pane_g7_ParamLimits

0x26bc,	// (0x0007ccc1) linegrid_cam4_burst_pane_g7

0xba0b,	// (0x00086010) cell_cam4_burst_pane_g1

0x26d5,	// (0x0007ccda) main_cam5_pane_t1_ParamLimits

0x26d5,	// (0x0007ccda) main_cam5_pane_t1

0x26e7,	// (0x0007ccec) main_cam5_pane_t2_ParamLimits

0x26e7,	// (0x0007ccec) main_cam5_pane_t2

0x26f9,	// (0x0007ccfe) main_cam5_pane_t3_ParamLimits

0x26f9,	// (0x0007ccfe) main_cam5_pane_t3

0x270b,	// (0x0007cd10) main_cam5_pane_t4_ParamLimits

0x270b,	// (0x0007cd10) main_cam5_pane_t4

0x2723,	// (0x0007cd28) main_cam5_pane_t5_ParamLimits

0x2723,	// (0x0007cd28) main_cam5_pane_t5

0x2737,	// (0x0007cd3c) main_cam5_pane_t6_ParamLimits

0x2737,	// (0x0007cd3c) main_cam5_pane_t6

0x274b,	// (0x0007cd50) main_cam5_pane_t7_ParamLimits

0x274b,	// (0x0007cd50) main_cam5_pane_t7

0x275d,	// (0x0007cd62) main_cam5_pane_t8_ParamLimits

0x275d,	// (0x0007cd62) main_cam5_pane_t8

0x2779,	// (0x0007cd7e) main_cam5_pane_t9_ParamLimits

0x2779,	// (0x0007cd7e) main_cam5_pane_t9

0x278b,	// (0x0007cd90) main_cam5_pane_t10_ParamLimits

0x278b,	// (0x0007cd90) main_cam5_pane_t10

0x279d,	// (0x0007cda2) main_cam5_pane_t11_ParamLimits

0x279d,	// (0x0007cda2) main_cam5_pane_t11

0x27af,	// (0x0007cdb4) main_cam5_pane_t12_ParamLimits

0x27af,	// (0x0007cdb4) main_cam5_pane_t12

0x27c4,	// (0x0007cdc9) main_cam5_pane_t13_ParamLimits

0x27c4,	// (0x0007cdc9) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x0008a07a) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x0008a07a) main_cam5_pane_t

0x5988,	// (0x0007ff8d) popup_scut_keymap_window_ParamLimits

0x5988,	// (0x0007ff8d) popup_scut_keymap_window

0xba1e,	// (0x00086023) aid_size_cell_brow_shortcut

0x0f55,	// (0x0007b55a) bg_popup_window_pane_cp010

0xba2a,	// (0x0008602f) grid_scut_pane

0xba36,	// (0x0008603b) cell_scut_pane_ParamLimits

0xba36,	// (0x0008603b) cell_scut_pane

0xba4d,	// (0x00086052) cell_scut_pane_g1

0x27e1,	// (0x0007cde6) cell_scut_pane_t1

0x27f0,	// (0x0007cdf5) cell_scut_pane_t2

0xba56,	// (0x0008605b) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x0008a095) cell_scut_pane_t

0x97c9,	// (0x00083dce) main_mup3_pane_g8_ParamLimits

0x97c9,	// (0x00083dce) main_mup3_pane_g8

0xadbb,	// (0x000853c0) area_vitu2_query_pane_ParamLimits

0xadbb,	// (0x000853c0) area_vitu2_query_pane

0xb854,	// (0x00085e59) input_focus_pane_cp08

0x27ff,	// (0x0007ce04) area_vitu2_query_pane_g1

0xba64,	// (0x00086069) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x0008a09c) area_vitu2_query_pane_g

0xba75,	// (0x0008607a) area_vitu2_query_pane_t1_ParamLimits

0xba75,	// (0x0008607a) area_vitu2_query_pane_t1

0xba89,	// (0x0008608e) area_vitu2_query_pane_t2_ParamLimits

0xba89,	// (0x0008608e) area_vitu2_query_pane_t2

0xba9d,	// (0x000860a2) area_vitu2_query_pane_t3_ParamLimits

0xba9d,	// (0x000860a2) area_vitu2_query_pane_t3

0x280b,	// (0x0007ce10) area_vitu2_query_pane_t4_ParamLimits

0x280b,	// (0x0007ce10) area_vitu2_query_pane_t4

0x2833,	// (0x0007ce38) area_vitu2_query_pane_t5_ParamLimits

0x2833,	// (0x0007ce38) area_vitu2_query_pane_t5

0x285b,	// (0x0007ce60) area_vitu2_query_pane_t6_ParamLimits

0x285b,	// (0x0007ce60) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x0008a0a1) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x0008a0a1) area_vitu2_query_pane_t

0xbac5,	// (0x000860ca) bg_button_pane_cp018

0xbad3,	// (0x000860d8) bg_button_pane_cp021

0xbadf,	// (0x000860e4) bg_button_pane_cp022

0xbaf0,	// (0x000860f5) input_focus_pane_cp09

0x7845,	// (0x00081e4a) aid_size_touch_mv_arrow_left

0x786e,	// (0x00081e73) aid_size_touch_mv_arrow_right

0xb364,	// (0x00085969) main_cset_slider_pane_g16_ParamLimits

0xb364,	// (0x00085969) main_cset_slider_pane_g16

0xb372,	// (0x00085977) main_cset_slider_pane_g17_ParamLimits

0xb372,	// (0x00085977) main_cset_slider_pane_g17

0xba0b,	// (0x00086010) cell_cam4_burst_pane_g1_ParamLimits

0xdcdc,	// (0x000882e1) compa_mode_pane

0xb59c,	// (0x00085ba1) popup_vtel_slider_window_g3_ParamLimits

0xb59c,	// (0x00085ba1) popup_vtel_slider_window_g3

0xb5b0,	// (0x00085bb5) popup_vtel_slider_window_g4_ParamLimits

0xb5b0,	// (0x00085bb5) popup_vtel_slider_window_g4

0xb5c4,	// (0x00085bc9) popup_vtel_slider_window_t1_ParamLimits

0xb5c4,	// (0x00085bc9) popup_vtel_slider_window_t1

0xdcdc,	// (0x000882e1) main_cl_pane

0x23cb,	// (0x0007c9d0) popup_imed_adjust2_window_ParamLimits

0x23a3,	// (0x0007c9a8) bg_tb_trans_pane_cp05_ParamLimits

0xe998,	// (0x00088f9d) popup_imed_adjust2_window_g1_ParamLimits

0xe9a7,	// (0x00088fac) popup_imed_adjust2_window_g2_ParamLimits

0xe9a7,	// (0x00088fac) popup_imed_adjust2_window_g2

0xe9b3,	// (0x00088fb8) popup_imed_adjust2_window_g3_ParamLimits

0xe9b3,	// (0x00088fb8) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x00089e12) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x00089e12) popup_imed_adjust2_window_g

0xe9bf,	// (0x00088fc4) popup_imed_adjust2_window_t1_ParamLimits

0xe9d7,	// (0x00088fdc) slider_imed_adjust_pane_ParamLimits

0xe9eb,	// (0x00088ff0) slider_imed_adjust_pane_g1_ParamLimits

0xe9fb,	// (0x00089000) slider_imed_adjust_pane_g2_ParamLimits

0xea0b,	// (0x00089010) slider_imed_adjust_pane_g3_ParamLimits

0xea1c,	// (0x00089021) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x00089e19) slider_imed_adjust_pane_g_ParamLimits

0xaaf9,	// (0x000850fe) aid_touch_area_cam4_ParamLimits

0xaaf9,	// (0x000850fe) aid_touch_area_cam4

0xab09,	// (0x0008510e) battery_pane_cp01

0xab84,	// (0x00085189) main_camera4_pane_g6_ParamLimits

0xab84,	// (0x00085189) main_camera4_pane_g6

0xaba2,	// (0x000851a7) main_camera4_pane_t2_ParamLimits

0xaba2,	// (0x000851a7) main_camera4_pane_t2

0x0001,

0xf917,	// (0x00089f1c) main_camera4_pane_t_ParamLimits

0xf917,	// (0x00089f1c) main_camera4_pane_t

0xac37,	// (0x0008523c) aid_touch_area_vid4_ParamLimits

0xac37,	// (0x0008523c) aid_touch_area_vid4

0xac77,	// (0x0008527c) main_video4_pane_g5_ParamLimits

0xac77,	// (0x0008527c) main_video4_pane_g5

0xac99,	// (0x0008529e) vid4_progress_pane_ParamLimits

0xac99,	// (0x0008529e) vid4_progress_pane

0xf01c,	// (0x00089621) main_cset_slider_pane_g18_ParamLimits

0xf01c,	// (0x00089621) main_cset_slider_pane_g18

0x26c9,	// (0x0007ccce) cell_cam4_burst_pane_g2_ParamLimits

0x26c9,	// (0x0007ccce) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x0008a075) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x0008a075) cell_cam4_burst_pane_g

0xbb01,	// (0x00086106) bg_cl_pane_ParamLimits

0xbb01,	// (0x00086106) bg_cl_pane

0xbb0d,	// (0x00086112) cl_header_pane_ParamLimits

0xbb0d,	// (0x00086112) cl_header_pane

0xbb19,	// (0x0008611e) cl_listscroll_pane_ParamLimits

0xbb19,	// (0x0008611e) cl_listscroll_pane

0x28a7,	// (0x0007ceac) bg_cl_pane_g1

0x28af,	// (0x0007ceb4) bg_cl_pane_g2

0x28b7,	// (0x0007cebc) bg_cl_pane_g3

0x28bf,	// (0x0007cec4) bg_cl_pane_g4

0x28c7,	// (0x0007cecc) bg_cl_pane_g5

0x28cf,	// (0x0007ced4) bg_cl_pane_g6

0x28d7,	// (0x0007cedc) bg_cl_pane_g7

0x28df,	// (0x0007cee4) bg_cl_pane_g8

0x28e7,	// (0x0007ceec) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x0008a0b0) bg_cl_pane_g

0xbb25,	// (0x0008612a) aid_height_cl_leading_ParamLimits

0xbb25,	// (0x0008612a) aid_height_cl_leading

0xbb31,	// (0x00086136) aid_height_cl_text_ParamLimits

0xbb31,	// (0x00086136) aid_height_cl_text

0x2523,	// (0x0007cb28) bg_cl_header_pane_ParamLimits

0x2523,	// (0x0007cb28) bg_cl_header_pane

0xbb49,	// (0x0008614e) cl_header_pane_g1_ParamLimits

0xbb49,	// (0x0008614e) cl_header_pane_g1

0xbb56,	// (0x0008615b) cl_header_pane_t1_ParamLimits

0xbb56,	// (0x0008615b) cl_header_pane_t1

0x28ef,	// (0x0007cef4) cl_list_pane

0xefef,	// (0x000895f4) hc_scroll_pane_cp01

0xe85d,	// (0x00088e62) bg_cl_header_pane_g1

0xeed5,	// (0x000894da) bg_cl_header_pane_g2

0xe87d,	// (0x00088e82) bg_cl_header_pane_g3

0xeee5,	// (0x000894ea) bg_cl_header_pane_g4

0xeedd,	// (0x000894e2) bg_cl_header_pane_g5

0x25ca,	// (0x0007cbcf) bg_cl_header_pane_g6

0xeefd,	// (0x00089502) bg_cl_header_pane_g7

0xef05,	// (0x0008950a) bg_cl_header_pane_g8

0xeef5,	// (0x000894fa) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x0008a0c3) bg_cl_header_pane_g

0xbb68,	// (0x0008616d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbb68,	// (0x0008616d) hc_cl_list_double_graphic_heading_pane

0xbb79,	// (0x0008617e) hc_cl_list_single_graphic_pane_ParamLimits

0xbb79,	// (0x0008617e) hc_cl_list_single_graphic_pane

0xbb92,	// (0x00086197) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbb92,	// (0x00086197) hc_cl_list_single_graphic_pane_g1

0xbb9e,	// (0x000861a3) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbb9e,	// (0x000861a3) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x0008a0d6) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x0008a0d6) hc_cl_list_single_graphic_pane_g

0xbbb2,	// (0x000861b7) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbbb2,	// (0x000861b7) hc_cl_list_single_graphic_pane_t1

0xbb92,	// (0x00086197) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbb92,	// (0x00086197) hc_cl_list_double_graphic_heading_pane_g1

0xbbc7,	// (0x000861cc) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbbc7,	// (0x000861cc) hc_cl_list_double_graphic_heading_pane_g2

0xbbdb,	// (0x000861e0) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbbdb,	// (0x000861e0) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x0008a0db) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x0008a0db) hc_cl_list_double_graphic_heading_pane_g

0xbbef,	// (0x000861f4) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbbef,	// (0x000861f4) hc_cl_list_double_graphic_heading_pane_t1

0xbc04,	// (0x00086209) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbc04,	// (0x00086209) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x0008a0e2) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x0008a0e2) hc_cl_list_double_graphic_heading_pane_t

0xbc21,	// (0x00086226) vid4_progress_pane_g1

0xbc31,	// (0x00086236) vid4_progress_pane_g2

0x0a35,	// (0x0007b03a) vid4_progress_pane_g3

0xbc41,	// (0x00086246) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x0008a0e7) vid4_progress_pane_g

0xbc5f,	// (0x00086264) vid4_progress_pane_t1

0xbc74,	// (0x00086279) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x0008a0f2) vid4_progress_pane_t

0xbc9f,	// (0x000862a4) wait_bar_pane_cp07

0x433f,	// (0x0007e944) blid_firmament_pane_ParamLimits

0x4382,	// (0x0007e987) popup_blid_sat_info2_window_g1

0x43a6,	// (0x0007e9ab) popup_blid_sat_info2_window_t3

0x43b4,	// (0x0007e9b9) popup_blid_sat_info2_window_t4

0x43c2,	// (0x0007e9c7) popup_blid_sat_info2_window_t5

0x43d0,	// (0x0007e9d5) popup_blid_sat_info2_window_t6

0x43e0,	// (0x0007e9e5) popup_blid_sat_info2_window_t7

0x43ee,	// (0x0007e9f3) popup_blid_sat_info2_window_t8

0x43fc,	// (0x0007ea01) popup_blid_sat_info2_window_t9

0x8f86,	// (0x0008358b) popup_blid_sat_info2_window_t10

0x9109,	// (0x0008370e) aid_firma_cardinal_ParamLimits

0x911d,	// (0x00083722) blid_firmament_pane_t1_ParamLimits

0x9134,	// (0x00083739) blid_firmament_pane_t2_ParamLimits

0x914b,	// (0x00083750) blid_firmament_pane_t3_ParamLimits

0x9162,	// (0x00083767) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x00089d0b) blid_firmament_pane_t_ParamLimits

0x9179,	// (0x0008377e) blid_sat_info_pane_ParamLimits

0x066e,	// (0x0007ac73) main_cam_set_pane_ParamLimits

0xa09e,	// (0x000846a3) aid_size_cell_colour_35_ParamLimits

0xa0b8,	// (0x000846bd) aid_size_cell_colour_112_ParamLimits

0xa0cf,	// (0x000846d4) aid_size_cell_effect_ParamLimits

0x066e,	// (0x0007ac73) bg_tb_trans_pane_cp02_ParamLimits

0xa0e9,	// (0x000846ee) heading_imed_pane_ParamLimits

0xa0f5,	// (0x000846fa) listscroll_imed_pane_ParamLimits

0x19d5,	// (0x0007bfda) popup_call2_audio_first_window_g5_ParamLimits

0x19d5,	// (0x0007bfda) popup_call2_audio_first_window_g5

0xa8a8,	// (0x00084ead) aid_size_touch_image3_arrow_left_ParamLimits

0xa8a8,	// (0x00084ead) aid_size_touch_image3_arrow_left

0xa8be,	// (0x00084ec3) aid_size_touch_image3_arrow_right_ParamLimits

0xa8be,	// (0x00084ec3) aid_size_touch_image3_arrow_right

0xbc8a,	// (0x0008628f) vid4_progress_pane_t3

0xa440,	// (0x00084a45) main_hwr_training_symbol_option_pane_ParamLimits

0xa440,	// (0x00084a45) main_hwr_training_symbol_option_pane

0xec85,	// (0x0008928a) popup_hwr_training_preview_window_ParamLimits

0xec85,	// (0x0008928a) popup_hwr_training_preview_window

0xa4a1,	// (0x00084aa6) hwr_training_navi_pane_g5_ParamLimits

0xa4a1,	// (0x00084aa6) hwr_training_navi_pane_g5

0xeec3,	// (0x000894c8) popup_char_count_window

0xb6ba,	// (0x00085cbf) bg_popup_sub_pane_cp20_ParamLimits

0xb6c8,	// (0x00085ccd) list_vitu2_match_list_pane_ParamLimits

0xb6d4,	// (0x00085cd9) vitu2_page_scroll_pane_ParamLimits

0xb6d4,	// (0x00085cd9) vitu2_page_scroll_pane

0x294a,	// (0x0007cf4f) list_single_hwr_training_symbol_option_pane_ParamLimits

0x294a,	// (0x0007cf4f) list_single_hwr_training_symbol_option_pane

0x295d,	// (0x0007cf62) list_single_hwr_training_symbol_option_pane_g1

0x2965,	// (0x0007cf6a) list_single_hwr_training_symbol_option_pane_t1

0x2973,	// (0x0007cf78) bg_button_pane_cp023

0x297c,	// (0x0007cf81) bg_button_pane_cp024

0xbcb1,	// (0x000862b6) vitu2_page_scroll_pane_g1

0xbcb9,	// (0x000862be) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x0008a0f9) vitu2_page_scroll_pane_g

0xbcc1,	// (0x000862c6) vitu2_page_scroll_pane_t1

0x29af,	// (0x0007cfb4) popup_char_count_window_g1

0x29b8,	// (0x0007cfbd) popup_char_count_window_g2

0x29c1,	// (0x0007cfc6) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x0008a0fe) popup_char_count_window_g

0x29ca,	// (0x0007cfcf) popup_char_count_window_t1

0xdcdc,	// (0x000882e1) main_vded2_pane

0xe984,	// (0x00088f89) aid_size_cell_imed_line

0xe98e,	// (0x00088f93) grid_imed_line_width_pane

0xad10,	// (0x00085315) vid4_indicators_pane_g4

0x29d8,	// (0x0007cfdd) cell_imed_line_width_pane_ParamLimits

0x29d8,	// (0x0007cfdd) cell_imed_line_width_pane

0x29ec,	// (0x0007cff1) cell_imed_line_width_pane_g1

0x8f52,	// (0x00083557) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x0008a105) cell_imed_line_width_pane_g

0xbcd0,	// (0x000862d5) main_vded2_pane_g1_ParamLimits

0xbcd0,	// (0x000862d5) main_vded2_pane_g1

0xbcdd,	// (0x000862e2) main_vded2_pane_g2_ParamLimits

0xbcdd,	// (0x000862e2) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x0008a10a) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x0008a10a) main_vded2_pane_g

0xbceb,	// (0x000862f0) vded2_slider_pane_ParamLimits

0xbceb,	// (0x000862f0) vded2_slider_pane

0xbcf8,	// (0x000862fd) aid_size_touch_vded2_end

0xbd02,	// (0x00086307) aid_size_touch_vded2_playhead

0x29f5,	// (0x0007cffa) aid_size_touch_vded2_start

0x29fd,	// (0x0007d002) vded2_slider_bg_pane

0x2a06,	// (0x0007d00b) vded2_slider_pane_g1

0x2a0f,	// (0x0007d014) vded2_slider_pane_g2

0xbd0a,	// (0x0008630f) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x0008a10f) vded2_slider_pane_g

0x2a17,	// (0x0007d01c) vded2_slider_bg_pane_g1

0x2a20,	// (0x0007d025) vded2_slider_bg_pane_g2

0x2a29,	// (0x0007d02e) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x0008a116) vded2_slider_bg_pane_g

0x7f7f,	// (0x00082584) aid_postcard_touch_down_pane_ParamLimits

0x7f7f,	// (0x00082584) aid_postcard_touch_down_pane

0x7f8f,	// (0x00082594) aid_postcard_touch_up_pane_ParamLimits

0x7f8f,	// (0x00082594) aid_postcard_touch_up_pane

0xdcdc,	// (0x000882e1) main_blid2_pane

0x23b1,	// (0x0007c9b6) popup_blid2_search_window

0xdcdc,	// (0x000882e1) blid2_gps_pane

0xdcdc,	// (0x000882e1) blid2_navig_pane

0xdcdc,	// (0x000882e1) blid2_search_pane

0xdcdc,	// (0x000882e1) blid2_tripm_pane

0xbd13,	// (0x00086318) blid2_search_pane_g1_ParamLimits

0xbd13,	// (0x00086318) blid2_search_pane_g1

0xbd23,	// (0x00086328) blid2_search_pane_t1_ParamLimits

0xbd23,	// (0x00086328) blid2_search_pane_t1

0xbd35,	// (0x0008633a) aid_size_cell_blid2_gps_ParamLimits

0xbd35,	// (0x0008633a) aid_size_cell_blid2_gps

0xbd45,	// (0x0008634a) blid2_gps_pane_g1_ParamLimits

0xbd45,	// (0x0008634a) blid2_gps_pane_g1

0xbd51,	// (0x00086356) grid_blid2_satellite_pane_ParamLimits

0xbd51,	// (0x00086356) grid_blid2_satellite_pane

0xbd61,	// (0x00086366) blid2_navig_pane_g1_ParamLimits

0xbd61,	// (0x00086366) blid2_navig_pane_g1

0xbd6d,	// (0x00086372) blid2_navig_pane_t1_ParamLimits

0xbd6d,	// (0x00086372) blid2_navig_pane_t1

0xbd7f,	// (0x00086384) blid2_navig_pane_t2_ParamLimits

0xbd7f,	// (0x00086384) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x0008a11d) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x0008a11d) blid2_navig_pane_t

0xbd91,	// (0x00086396) blid2_navig_ring_pane_ParamLimits

0xbd91,	// (0x00086396) blid2_navig_ring_pane

0xbda1,	// (0x000863a6) blid2_speed_pane_ParamLimits

0xbda1,	// (0x000863a6) blid2_speed_pane

0xbdad,	// (0x000863b2) blid2_tripm_pane_g1_ParamLimits

0xbdad,	// (0x000863b2) blid2_tripm_pane_g1

0xbdbd,	// (0x000863c2) blid2_tripm_pane_g2_ParamLimits

0xbdbd,	// (0x000863c2) blid2_tripm_pane_g2

0xbdc9,	// (0x000863ce) blid2_tripm_pane_g3_ParamLimits

0xbdc9,	// (0x000863ce) blid2_tripm_pane_g3

0xbdd5,	// (0x000863da) blid2_tripm_pane_g4_ParamLimits

0xbdd5,	// (0x000863da) blid2_tripm_pane_g4

0xbde1,	// (0x000863e6) blid2_tripm_pane_g5_ParamLimits

0xbde1,	// (0x000863e6) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x0008a122) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x0008a122) blid2_tripm_pane_g

0xbdfd,	// (0x00086402) blid2_tripm_pane_t1_ParamLimits

0xbdfd,	// (0x00086402) blid2_tripm_pane_t1

0xbe11,	// (0x00086416) blid2_tripm_pane_t2_ParamLimits

0xbe11,	// (0x00086416) blid2_tripm_pane_t2

0xbe23,	// (0x00086428) blid2_tripm_pane_t3_ParamLimits

0xbe23,	// (0x00086428) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x0008a12f) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x0008a12f) blid2_tripm_pane_t

0xbe55,	// (0x0008645a) cell_blid2_satellite_pane_ParamLimits

0xbe55,	// (0x0008645a) cell_blid2_satellite_pane

0xbe6f,	// (0x00086474) cell_blid2_satellite_pane_g1

0x2a32,	// (0x0007d037) cell_blid2_satellite_pane_t1

0x9189,	// (0x0008378e) blid2_speed_pane_g1

0x2a40,	// (0x0007d045) blid2_speed_pane_t1

0x2a4e,	// (0x0007d053) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x0008a138) blid2_speed_pane_t

0x9189,	// (0x0008378e) blid2_navig_ring_pane_g1

0xbe78,	// (0x0008647d) blid2_navig_ring_pane_g2

0xbe80,	// (0x00086485) blid2_navig_ring_pane_g3

0xbe88,	// (0x0008648d) blid2_navig_ring_pane_g4

0xbe90,	// (0x00086495) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x0008a13d) blid2_navig_ring_pane_g

0xdcdc,	// (0x000882e1) bg_popup_window_pane_cp011

0x2a5c,	// (0x0007d061) popup_blid2_search_window_g1

0x2a64,	// (0x0007d069) popup_blid2_search_window_t1

0x2a72,	// (0x0007d077) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x0008a148) popup_blid2_search_window_t

0xe76c,	// (0x00088d71) main_browser_pane_g1

0xe481,	// (0x00088a86) main_browser_pane_ParamLimits

0xacc5,	// (0x000852ca) bg_button_pane_cp011_ParamLimits

0xaf87,	// (0x0008558c) cell_vitu2_function_pane_g1_ParamLimits

0x066e,	// (0x0007ac73) bg_popup_sub_pane_cp22_ParamLimits

0xb854,	// (0x00085e59) input_focus_pane_cp08_ParamLimits

0xb861,	// (0x00085e66) popup_vitu2_query_button_pane_ParamLimits

0xb861,	// (0x00085e66) popup_vitu2_query_button_pane

0xb836,	// (0x00085e3b) popup_vitu2_query_input_button_pane

0x261f,	// (0x0007cc24) popup_vitu2_query_window_g1_ParamLimits

0xb872,	// (0x00085e77) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x0008a04f) popup_vitu2_query_window_g_ParamLimits

0xdcdc,	// (0x000882e1) bg_button_pane_cp026

0xbe98,	// (0x0008649d) popup_vitu2_query_input_button_pane_g1

0xdcdc,	// (0x000882e1) bg_button_pane_cp025

0x2a80,	// (0x0007d085) popup_vitu2_query_button_pane_t1

0x94ce,	// (0x00083ad3) main_mp3_pane_t6

0x94e6,	// (0x00083aeb) popup_slider_window_cp01

0xabe6,	// (0x000851eb) cam4_battery_pane

0xacd3,	// (0x000852d8) cam4_battery_pane_cp02

0xbc19,	// (0x0008621e) cam4_battery_pane_cp01

0xbc19,	// (0x0008621e) cam4_battery_pane_cp03

0xf0f1,	// (0x000896f6) cam4_battery_pane_g1

0x9189,	// (0x0008378e) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x0008a14d) cam4_battery_pane_g

0x8f94,	// (0x00083599) popup_blid_sat_info2_window_t11

0x7845,	// (0x00081e4a) aid_size_touch_mv_arrow_left_ParamLimits

0x786e,	// (0x00081e73) aid_size_touch_mv_arrow_right_ParamLimits

0x0eb5,	// (0x0007b4ba) navi_pane_g1_ParamLimits

0x7897,	// (0x00081e9c) navi_pane_g2_ParamLimits

0x78c5,	// (0x00081eca) navi_pane_g3_ParamLimits

0xf418,	// (0x00089a1d) navi_pane_g_ParamLimits

0x791f,	// (0x00081f24) navi_pane_mv_t1_ParamLimits

0xa12e,	// (0x00084733) grid_imed_effect_pane_ParamLimits

0xe6b5,	// (0x00088cba) aid_placing_vt_slider_lsc

0xe6bd,	// (0x00088cc2) aid_placing_vt_slider_prt

0x066e,	// (0x0007ac73) bg_tb_trans_pane_cp01_ParamLimits

0x933c,	// (0x00083941) popup_image_details_window_g1_ParamLimits

0x934f,	// (0x00083954) popup_image_details_window_g2_ParamLimits

0x9364,	// (0x00083969) popup_image_details_window_g3_ParamLimits

0x9364,	// (0x00083969) popup_image_details_window_g3

0xf74b,	// (0x00089d50) popup_image_details_window_g_ParamLimits

0x9378,	// (0x0008397d) popup_image_details_window_t1_ParamLimits

0x938a,	// (0x0008398f) popup_image_details_window_t2_ParamLimits

0x93a3,	// (0x000839a8) popup_image_details_window_t3_ParamLimits

0x93b7,	// (0x000839bc) popup_image_details_window_t4_ParamLimits

0x93d2,	// (0x000839d7) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x00089d57) popup_image_details_window_t_ParamLimits

0xbb3d,	// (0x00086142) cl_header_name_pane_ParamLimits

0xbb3d,	// (0x00086142) cl_header_name_pane

0xbea0,	// (0x000864a5) cl_header_name_pane_t1_ParamLimits

0xbea0,	// (0x000864a5) cl_header_name_pane_t1

0xbeb7,	// (0x000864bc) cl_header_name_pane_t2_ParamLimits

0xbeb7,	// (0x000864bc) cl_header_name_pane_t2

0xbee1,	// (0x000864e6) cl_header_name_pane_t3_ParamLimits

0xbee1,	// (0x000864e6) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x0008a152) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x0008a152) cl_header_name_pane_t

0x78f0,	// (0x00081ef5) navi_pane_mv_g2_ParamLimits

0xee9d,	// (0x000894a2) field_vitu2_entry_pane_g1_ParamLimits

0xeea9,	// (0x000894ae) field_vitu2_entry_pane_g2_ParamLimits

0xeeb5,	// (0x000894ba) field_vitu2_entry_pane_g3_ParamLimits

0xeeb5,	// (0x000894ba) field_vitu2_entry_pane_g3

0xf949,	// (0x00089f4e) field_vitu2_entry_pane_g_ParamLimits

0xaf17,	// (0x0008551c) cell_vitu2_itu_pane_g1_ParamLimits

0xaf27,	// (0x0008552c) cell_vitu2_itu_pane_g2_ParamLimits

0xaf27,	// (0x0008552c) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x00089f5a) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x00089f5a) cell_vitu2_itu_pane_g

0xacc5,	// (0x000852ca) bg_vkb2_func_pane_cp05_ParamLimits

0xacc5,	// (0x000852ca) bg_vkb2_func_pane_cp05

0xacc5,	// (0x000852ca) bg_vkb2_func_pane_cp03

0xacc5,	// (0x000852ca) bg_vkb2_func_pane_cp04

0xacc5,	// (0x000852ca) bg_vkb2_func_pane_cp10_ParamLimits

0xacc5,	// (0x000852ca) bg_vkb2_func_pane_cp10

0xbadf,	// (0x000860e4) bg_vkb2_func_pane_cp08

0xbac5,	// (0x000860ca) bg_vkb2_func_pane_cp06

0xbad3,	// (0x000860d8) bg_vkb2_func_pane_cp07

0x2985,	// (0x0007cf8a) bg_vkb2_func_pane_cp11_ParamLimits

0x2985,	// (0x0007cf8a) bg_vkb2_func_pane_cp11

0x299a,	// (0x0007cf9f) bg_vkb2_func_pane_cp12_ParamLimits

0x299a,	// (0x0007cf9f) bg_vkb2_func_pane_cp12

0xdcdc,	// (0x000882e1) bg_vkb2_func_pane_cp09

0xeed5,	// (0x000894da) bg_vkb2_func_pane_g1

0xe87d,	// (0x00088e82) bg_vkb2_func_pane_g2

0xeedd,	// (0x000894e2) bg_vkb2_func_pane_g3

0xeee5,	// (0x000894ea) bg_vkb2_func_pane_g4

0x25ca,	// (0x0007cbcf) bg_vkb2_func_pane_g5

0xeefd,	// (0x00089502) bg_vkb2_func_pane_g6

0xef05,	// (0x0008950a) bg_vkb2_func_pane_g7

0xeef5,	// (0x000894fa) bg_vkb2_func_pane_g8

0xe85d,	// (0x00088e62) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x0008a159) bg_vkb2_func_pane_g

0xbdef,	// (0x000863f4) blid2_tripm_pane_g6_ParamLimits

0xbdef,	// (0x000863f4) blid2_tripm_pane_g6

0xed3d,	// (0x00089342) mp4_progress_pane_g1

0xbe49,	// (0x0008644e) blid2_tripm_values_pane_ParamLimits

0xbe49,	// (0x0008644e) blid2_tripm_values_pane

0xbf06,	// (0x0008650b) blid2_tripm_values_pane_t1

0xbf14,	// (0x00086519) blid2_tripm_values_pane_t2

0xbf22,	// (0x00086527) blid2_tripm_values_pane_t3

0xbf30,	// (0x00086535) blid2_tripm_values_pane_t4

0xbf3e,	// (0x00086543) blid2_tripm_values_pane_t5

0xbf4c,	// (0x00086551) blid2_tripm_values_pane_t6

0xbf5a,	// (0x0008655f) blid2_tripm_values_pane_t7

0xbf68,	// (0x0008656d) blid2_tripm_values_pane_t8

0xbf76,	// (0x0008657b) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x0008a16c) blid2_tripm_values_pane_t

0x6755,	// (0x00080d5a) call_video_pane_t1_ParamLimits

0x676e,	// (0x00080d73) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x000898a6) call_video_pane_t_ParamLimits

0x7e50,	// (0x00082455) msg_header_pane_g1_ParamLimits

0x10f0,	// (0x0007b6f5) msg_header_pane_g2_ParamLimits

0x10f0,	// (0x0007b6f5) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x00089ac0) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x00089ac0) msg_header_pane_g

0xe481,	// (0x00088a86) main_clock2_pane_ParamLimits

0x9e50,	// (0x00084455) grid_clock2_toolbar_pane_ParamLimits

0x9e50,	// (0x00084455) grid_clock2_toolbar_pane

0x9e50,	// (0x00084455) listscroll_clock2_pane_ParamLimits

0x9e50,	// (0x00084455) listscroll_clock2_pane

0x9efd,	// (0x00084502) main_clock2_pane_t3_ParamLimits

0x9efd,	// (0x00084502) main_clock2_pane_t3

0x9f0f,	// (0x00084514) main_clock2_pane_t4_ParamLimits

0x9f0f,	// (0x00084514) main_clock2_pane_t4

0x2a8e,	// (0x0007d093) cell_clock2_toolbar_pane

0x2a96,	// (0x0007d09b) cell_clock2_toolbar_pane_cp01

0x2a96,	// (0x0007d09b) cell_clock2_toolbar_pane_cp02

0x2a9e,	// (0x0007d0a3) cell_clock2_toolbar_pane_cp03

0x2aa6,	// (0x0007d0ab) list_clock2_pane

0x0e0c,	// (0x0007b411) scroll_pane_cp10

0x2aae,	// (0x0007d0b3) list_single_clock2_pane_ParamLimits

0x2aae,	// (0x0007d0b3) list_single_clock2_pane

0x0f55,	// (0x0007b55a) list_highlight_pane_cp08

0x2abb,	// (0x0007d0c0) list_single_clock2_pane_t1

0x2ac9,	// (0x0007d0ce) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x0008a17f) list_single_clock2_pane_t

0xdcdc,	// (0x000882e1) bg_button_pane_cp10

0x2ad7,	// (0x0007d0dc) cell_clock2_toolbar_pane_g1

0x7eed,	// (0x000824f2) aid_main_viewer_pane_g1_ParamLimits

0x7eed,	// (0x000824f2) aid_main_viewer_pane_g1

0x7ef9,	// (0x000824fe) aid_main_viewer_pane_g2_ParamLimits

0x7ef9,	// (0x000824fe) aid_main_viewer_pane_g2

0x7f05,	// (0x0008250a) aid_main_viewer_pane_g3_ParamLimits

0x7f05,	// (0x0008250a) aid_main_viewer_pane_g3

0x7f16,	// (0x0008251b) aid_main_viewer_pane_g4_ParamLimits

0x7f16,	// (0x0008251b) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x00089ad1) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x00089ad1) aid_main_viewer_pane_g

0x868a,	// (0x00082c8f) main_calc_pane_ParamLimits

0x8697,	// (0x00082c9c) main_dialer2_pane_ParamLimits

0xdcdc,	// (0x000882e1) main_cam6_pane

0xdcdc,	// (0x000882e1) main_vid6_pane

0x9e5c,	// (0x00084461) listscroll_gen_pane_cp06_ParamLimits

0x9e5c,	// (0x00084461) listscroll_gen_pane_cp06

0x9f21,	// (0x00084526) main_clock2_pane_t5_ParamLimits

0x9f21,	// (0x00084526) main_clock2_pane_t5

0x9f6a,	// (0x0008456f) aid_call2_pane_cp10_ParamLimits

0x9f7c,	// (0x00084581) aid_call_pane_cp10_ParamLimits

0x0e8a,	// (0x0007b48f) popup_clock_analogue_window_cp10_g1_ParamLimits

0x0e8a,	// (0x0007b48f) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9f8e,	// (0x00084593) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9f8e,	// (0x00084593) popup_clock_analogue_window_cp10_g4_ParamLimits

0x0e8a,	// (0x0007b48f) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x00089e07) popup_clock_analogue_window_cp10_g_ParamLimits

0x9fa0,	// (0x000845a5) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa855,	// (0x00084e5a) cell_dialer2_keypad_pane_g2_ParamLimits

0xa855,	// (0x00084e5a) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x00089eed) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x00089eed) cell_dialer2_keypad_pane_g

0xa871,	// (0x00084e76) cell_dialer2_keypad_pane_t1

0xb250,	// (0x00085855) main_cset_text2_pane_ParamLimits

0xb250,	// (0x00085855) main_cset_text2_pane

0x27ff,	// (0x0007ce04) area_vitu2_query_pane_g1_ParamLimits

0xba64,	// (0x00086069) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x0008a09c) area_vitu2_query_pane_g_ParamLimits

0x2883,	// (0x0007ce88) area_vitu2_query_pane_t7_ParamLimits

0x2883,	// (0x0007ce88) area_vitu2_query_pane_t7

0xbac5,	// (0x000860ca) bg_button_pane_cp018_ParamLimits

0xbad3,	// (0x000860d8) bg_button_pane_cp021_ParamLimits

0xbadf,	// (0x000860e4) bg_button_pane_cp022_ParamLimits

0xbadf,	// (0x000860e4) bg_vkb2_func_pane_cp08_ParamLimits

0xbac5,	// (0x000860ca) bg_vkb2_func_pane_cp06_ParamLimits

0xbad3,	// (0x000860d8) bg_vkb2_func_pane_cp07_ParamLimits

0xbaf0,	// (0x000860f5) input_focus_pane_cp09_ParamLimits

0xbf84,	// (0x00086589) cam6_autofocus_pane_ParamLimits

0xbf84,	// (0x00086589) cam6_autofocus_pane

0xbfa6,	// (0x000865ab) cam6_image_uncrop_pane_ParamLimits

0xbfa6,	// (0x000865ab) cam6_image_uncrop_pane

0xbfd3,	// (0x000865d8) cam6_indi_pane_ParamLimits

0xbfd3,	// (0x000865d8) cam6_indi_pane

0xbfed,	// (0x000865f2) cam6_mode_pane_ParamLimits

0xbfed,	// (0x000865f2) cam6_mode_pane

0xc001,	// (0x00086606) cam6_timer_pane_ParamLimits

0xc001,	// (0x00086606) cam6_timer_pane

0xc00d,	// (0x00086612) cam6_zoom_pane_ParamLimits

0xc00d,	// (0x00086612) cam6_zoom_pane

0xc025,	// (0x0008662a) cam6_mode_pane_g1_ParamLimits

0xc025,	// (0x0008662a) cam6_mode_pane_g1

0xc031,	// (0x00086636) cam6_mode_pane_g2_ParamLimits

0xc031,	// (0x00086636) cam6_mode_pane_g2

0xc03d,	// (0x00086642) cam6_mode_pane_g3_ParamLimits

0xc03d,	// (0x00086642) cam6_mode_pane_g3

0xc049,	// (0x0008664e) cam6_mode_pane_g4_ParamLimits

0xc049,	// (0x0008664e) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x0008a184) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x0008a184) cam6_mode_pane_g

0x2adf,	// (0x0007d0e4) bg_tb_trans_pane_cp08_ParamLimits

0x2adf,	// (0x0007d0e4) bg_tb_trans_pane_cp08

0x2aed,	// (0x0007d0f2) cam6_battery_pane_ParamLimits

0x2aed,	// (0x0007d0f2) cam6_battery_pane

0x2b03,	// (0x0007d108) cam6_indi_pane_g1_ParamLimits

0x2b03,	// (0x0007d108) cam6_indi_pane_g1

0x2b15,	// (0x0007d11a) cam6_indi_pane_g2_ParamLimits

0x2b15,	// (0x0007d11a) cam6_indi_pane_g2

0x2b27,	// (0x0007d12c) cam6_indi_pane_g3_ParamLimits

0x2b27,	// (0x0007d12c) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x0008a18d) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x0008a18d) cam6_indi_pane_g

0x2b39,	// (0x0007d13e) cam6_indi_pane_t1_ParamLimits

0x2b39,	// (0x0007d13e) cam6_indi_pane_t1

0xad4d,	// (0x00085352) cam6_autofocus_pane_g1

0xad45,	// (0x0008534a) cam6_autofocus_pane_g2

0xad5d,	// (0x00085362) cam6_autofocus_pane_g3

0xad55,	// (0x0008535a) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x0008a194) cam6_autofocus_pane_g

0x2b5f,	// (0x0007d164) cam6_timer_pane_g1

0x2b67,	// (0x0007d16c) cam6_timer_pane_t1

0x2b75,	// (0x0007d17a) cam6_zoom_cont_pane

0x2b7d,	// (0x0007d182) cam6_zoom_pane_g1

0x2b85,	// (0x0007d18a) cam6_zoom_pane_g2

0xc055,	// (0x0008665a) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x0008a19d) cam6_zoom_pane_g

0x9189,	// (0x0008378e) cam6_battery_pane_g1

0x9189,	// (0x0008378e) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x00089d14) cam6_battery_pane_g

0x2b8d,	// (0x0007d192) cam6_zoom_cont_pane_g1

0x2b96,	// (0x0007d19b) cam6_zoom_cont_pane_g2

0x2b9f,	// (0x0007d1a4) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x0008a1a4) cam6_zoom_cont_pane_g

0xc072,	// (0x00086677) cam6_mode_pane_cp_ParamLimits

0xc072,	// (0x00086677) cam6_mode_pane_cp

0xc086,	// (0x0008668b) cam6_zoom_pane_cp_ParamLimits

0xc086,	// (0x0008668b) cam6_zoom_pane_cp

0xc09e,	// (0x000866a3) vid6_image_uncrop_cif_pane_ParamLimits

0xc09e,	// (0x000866a3) vid6_image_uncrop_cif_pane

0xc0ca,	// (0x000866cf) vid6_image_uncrop_nhd_pane_ParamLimits

0xc0ca,	// (0x000866cf) vid6_image_uncrop_nhd_pane

0xc0e7,	// (0x000866ec) vid6_image_uncrop_vga_pane_ParamLimits

0xc0e7,	// (0x000866ec) vid6_image_uncrop_vga_pane

0xc106,	// (0x0008670b) vid6_image_uncrop_wvga_pane_ParamLimits

0xc106,	// (0x0008670b) vid6_image_uncrop_wvga_pane

0xc123,	// (0x00086728) vid6_indi_pane_ParamLimits

0xc123,	// (0x00086728) vid6_indi_pane

0x2adf,	// (0x0007d0e4) bg_tb_trans_pane_cp09_ParamLimits

0x2adf,	// (0x0007d0e4) bg_tb_trans_pane_cp09

0x2bb7,	// (0x0007d1bc) cam6_battery_pane_cp_ParamLimits

0x2bb7,	// (0x0007d1bc) cam6_battery_pane_cp

0x2bc3,	// (0x0007d1c8) vid6_indi_pane_g1_ParamLimits

0x2bc3,	// (0x0007d1c8) vid6_indi_pane_g1

0x2bd5,	// (0x0007d1da) vid6_indi_pane_g2_ParamLimits

0x2bd5,	// (0x0007d1da) vid6_indi_pane_g2

0x2be7,	// (0x0007d1ec) vid6_indi_pane_g3_ParamLimits

0x2be7,	// (0x0007d1ec) vid6_indi_pane_g3

0x2bfc,	// (0x0007d201) vid6_indi_pane_g4_ParamLimits

0x2bfc,	// (0x0007d201) vid6_indi_pane_g4

0x2c11,	// (0x0007d216) vid6_indi_pane_g5_ParamLimits

0x2c11,	// (0x0007d216) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x0008a1ab) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x0008a1ab) vid6_indi_pane_g

0x2c2b,	// (0x0007d230) vid6_indi_pane_t1_ParamLimits

0x2c2b,	// (0x0007d230) vid6_indi_pane_t1

0x2c41,	// (0x0007d246) vid6_indi_pane_t2_ParamLimits

0x2c41,	// (0x0007d246) vid6_indi_pane_t2

0x2c69,	// (0x0007d26e) vid6_indi_pane_t3_ParamLimits

0x2c69,	// (0x0007d26e) vid6_indi_pane_t3

0x2c91,	// (0x0007d296) vid6_indi_pane_t4_ParamLimits

0x2c91,	// (0x0007d296) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x0008a1b6) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x0008a1b6) vid6_indi_pane_t

0x2cb5,	// (0x0007d2ba) wait_bar_pane_cp08

0xc148,	// (0x0008674d) main_cset_text2_pane_t1_ParamLimits

0xc148,	// (0x0008674d) main_cset_text2_pane_t1

0xc05d,	// (0x00086662) listscroll_gen_pane_cp06_t1_ParamLimits

0xc05d,	// (0x00086662) listscroll_gen_pane_cp06_t1

0xdcdc,	// (0x000882e1) main_cam6_set_pane

0xabd8,	// (0x000851dd) bg_tb_trans_pane_cp06_ParamLimits

0xabee,	// (0x000851f3) cam4_indicators_pane_g1_ParamLimits

0xabff,	// (0x00085204) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x00089f2a) cam4_indicators_pane_g_ParamLimits

0xac1d,	// (0x00085222) cam4_indicators_pane_t1_ParamLimits

0xacc5,	// (0x000852ca) bg_tb_trans_pane_cp07_ParamLimits

0xacdd,	// (0x000852e2) vid4_indicators_pane_g1_ParamLimits

0xacee,	// (0x000852f3) vid4_indicators_pane_g2_ParamLimits

0xacff,	// (0x00085304) vid4_indicators_pane_g3_ParamLimits

0xad10,	// (0x00085315) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x00089f3c) vid4_indicators_pane_g_ParamLimits

0xad2c,	// (0x00085331) vid4_indicators_pane_t1_ParamLimits

0xbc21,	// (0x00086226) vid4_progress_pane_g1_ParamLimits

0xbc31,	// (0x00086236) vid4_progress_pane_g2_ParamLimits

0x0a35,	// (0x0007b03a) vid4_progress_pane_g3_ParamLimits

0xbc41,	// (0x00086246) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x0008a0e7) vid4_progress_pane_g_ParamLimits

0xbc5f,	// (0x00086264) vid4_progress_pane_t1_ParamLimits

0xbc74,	// (0x00086279) vid4_progress_pane_t2_ParamLimits

0xbc8a,	// (0x0008628f) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x0008a0f2) vid4_progress_pane_t_ParamLimits

0xbc9f,	// (0x000862a4) wait_bar_pane_cp07_ParamLimits

0xc17b,	// (0x00086780) main_cam6_set_pane_g2_ParamLimits

0xc17b,	// (0x00086780) main_cam6_set_pane_g2

0xc187,	// (0x0008678c) main_cset6_listscroll_pane_ParamLimits

0xc187,	// (0x0008678c) main_cset6_listscroll_pane

0xc1b2,	// (0x000867b7) main_cset6_slider_pane_ParamLimits

0xc1b2,	// (0x000867b7) main_cset6_slider_pane

0xc1be,	// (0x000867c3) main_cset6_text2_pane_ParamLimits

0xc1be,	// (0x000867c3) main_cset6_text2_pane

0x2cc4,	// (0x0007d2c9) main_cset6_text_pane

0x2ccc,	// (0x0007d2d1) main_cset_list_pane_copy1_ParamLimits

0x2ccc,	// (0x0007d2d1) main_cset_list_pane_copy1

0x2cdc,	// (0x0007d2e1) scroll_pane_cp028_copy1

0xc1d1,	// (0x000867d6) cset_list_set_pane_copy1

0xc1e4,	// (0x000867e9) aid_position_infowindow_above_copy1

0xc1ec,	// (0x000867f1) aid_position_infowindow_below_copy1

0xc1f4,	// (0x000867f9) cset_list_set_pane_g1_copy1

0x257d,	// (0x0007cb82) cset_list_set_pane_g3_copy1_ParamLimits

0x257d,	// (0x0007cb82) cset_list_set_pane_g3_copy1

0x258c,	// (0x0007cb91) cset_list_set_pane_t1_copy1_ParamLimits

0x258c,	// (0x0007cb91) cset_list_set_pane_t1_copy1

0x066e,	// (0x0007ac73) list_highlight_pane_cp021_copy1_ParamLimits

0x066e,	// (0x0007ac73) list_highlight_pane_cp021_copy1

0x2ce5,	// (0x0007d2ea) cset6_slider_pane_ParamLimits

0x2ce5,	// (0x0007d2ea) cset6_slider_pane

0x2d11,	// (0x0007d316) main_cset6_slider_pane_g1_ParamLimits

0x2d11,	// (0x0007d316) main_cset6_slider_pane_g1

0xc1fc,	// (0x00086801) main_cset6_slider_pane_g2_ParamLimits

0xc1fc,	// (0x00086801) main_cset6_slider_pane_g2

0x2d39,	// (0x0007d33e) main_cset6_slider_pane_g3_ParamLimits

0x2d39,	// (0x0007d33e) main_cset6_slider_pane_g3

0xc224,	// (0x00086829) main_cset6_slider_pane_g4_ParamLimits

0xc224,	// (0x00086829) main_cset6_slider_pane_g4

0xc230,	// (0x00086835) main_cset6_slider_pane_g5_ParamLimits

0xc230,	// (0x00086835) main_cset6_slider_pane_g5

0xf004,	// (0x00089609) main_cset6_slider_pane_g7_ParamLimits

0xf004,	// (0x00089609) main_cset6_slider_pane_g7

0xf010,	// (0x00089615) main_cset6_slider_pane_g8_ParamLimits

0xf010,	// (0x00089615) main_cset6_slider_pane_g8

0xc23e,	// (0x00086843) main_cset6_slider_pane_g9_ParamLimits

0xc23e,	// (0x00086843) main_cset6_slider_pane_g9

0xc24a,	// (0x0008684f) main_cset6_slider_pane_g10_ParamLimits

0xc24a,	// (0x0008684f) main_cset6_slider_pane_g10

0xc256,	// (0x0008685b) main_cset6_slider_pane_g11_ParamLimits

0xc256,	// (0x0008685b) main_cset6_slider_pane_g11

0xc262,	// (0x00086867) main_cset6_slider_pane_g12_ParamLimits

0xc262,	// (0x00086867) main_cset6_slider_pane_g12

0xc26e,	// (0x00086873) main_cset6_slider_pane_g13_ParamLimits

0xc26e,	// (0x00086873) main_cset6_slider_pane_g13

0xc27a,	// (0x0008687f) main_cset6_slider_pane_g14_ParamLimits

0xc27a,	// (0x0008687f) main_cset6_slider_pane_g14

0xc286,	// (0x0008688b) main_cset6_slider_pane_g15_ParamLimits

0xc286,	// (0x0008688b) main_cset6_slider_pane_g15

0xc29e,	// (0x000868a3) main_cset6_slider_pane_g16_ParamLimits

0xc29e,	// (0x000868a3) main_cset6_slider_pane_g16

0xc2ac,	// (0x000868b1) main_cset6_slider_pane_g17_ParamLimits

0xc2ac,	// (0x000868b1) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x0008a1bf) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x0008a1bf) main_cset6_slider_pane_g

0x2d45,	// (0x0007d34a) main_cset6_slider_pane_t1_ParamLimits

0x2d45,	// (0x0007d34a) main_cset6_slider_pane_t1

0xc2d2,	// (0x000868d7) main_cset6_slider_pane_t2_ParamLimits

0xc2d2,	// (0x000868d7) main_cset6_slider_pane_t2

0xc2fd,	// (0x00086902) main_cset6_slider_pane_t3_ParamLimits

0xc2fd,	// (0x00086902) main_cset6_slider_pane_t3

0xc328,	// (0x0008692d) main_cset6_slider_pane_t4_ParamLimits

0xc328,	// (0x0008692d) main_cset6_slider_pane_t4

0xc353,	// (0x00086958) main_cset6_slider_pane_t5_ParamLimits

0xc353,	// (0x00086958) main_cset6_slider_pane_t5

0x2d86,	// (0x0007d38b) main_cset6_slider_pane_t7_ParamLimits

0x2d86,	// (0x0007d38b) main_cset6_slider_pane_t7

0xc380,	// (0x00086985) main_cset6_slider_pane_t8_ParamLimits

0xc380,	// (0x00086985) main_cset6_slider_pane_t8

0xc3a4,	// (0x000869a9) main_cset6_slider_pane_t9_ParamLimits

0xc3a4,	// (0x000869a9) main_cset6_slider_pane_t9

0xc3c8,	// (0x000869cd) main_cset6_slider_pane_t10_ParamLimits

0xc3c8,	// (0x000869cd) main_cset6_slider_pane_t10

0xc3ec,	// (0x000869f1) main_cset6_slider_pane_t11_ParamLimits

0xc3ec,	// (0x000869f1) main_cset6_slider_pane_t11

0x2dbc,	// (0x0007d3c1) main_cset6_slider_pane_t14_ParamLimits

0x2dbc,	// (0x0007d3c1) main_cset6_slider_pane_t14

0x2df5,	// (0x0007d3fa) main_cset6_slider_pane_t15_ParamLimits

0x2df5,	// (0x0007d3fa) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x0008a1e4) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x0008a1e4) main_cset6_slider_pane_t

0x25a1,	// (0x0007cba6) cset_slider_pane_g1_copy1

0x25aa,	// (0x0007cbaf) cset_slider_pane_g2_copy1

0x25b3,	// (0x0007cbb8) cset_slider_pane_g3_copy1

0xdcdc,	// (0x000882e1) bg_popup_sub_pane_cp011_copy1

0x262b,	// (0x0007cc30) main_cset_text_pane_g1_copy1

0x2633,	// (0x0007cc38) main_cset_text_pane_t1_copy1

0x2641,	// (0x0007cc46) main_cset_text_pane_t2_copy1

0x264f,	// (0x0007cc54) main_cset_text_pane_t3_copy1

0x265d,	// (0x0007cc62) main_cset_text_pane_t4_copy1

0x266b,	// (0x0007cc70) main_cset_text_pane_t5_copy1

0x2679,	// (0x0007cc7e) main_cset_text_pane_t6_copy1

0x2687,	// (0x0007cc8c) main_cset_text_pane_t7_copy1

0xc410,	// (0x00086a15) main_cset_text2_pane_t1_copy1

0xdcdc,	// (0x000882e1) main_ncimui_pane

0x86d6,	// (0x00082cdb) popup_query_ncimui_window_ParamLimits

0x86d6,	// (0x00082cdb) popup_query_ncimui_window

0x440a,	// (0x0007ea0f) field_cale_ev2_pane_g4_ParamLimits

0x440a,	// (0x0007ea0f) field_cale_ev2_pane_g4

0xa575,	// (0x00084b7a) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa575,	// (0x00084b7a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x00089ec8) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x00089ec8) cell_video_dialer_keypad_pane_g

0xa58d,	// (0x00084b92) cell_video_dialer_keypad_pane_t1

0xdcdc,	// (0x000882e1) bg_popup_window_pane_cp012

0x0ce9,	// (0x0007b2ee) heading_pane_cp06

0x2f1d,	// (0x0007d522) ncim_query_content_pane

0xdcdc,	// (0x000882e1) bg_popup_heading_pane_cp01

0x2f25,	// (0x0007d52a) ncim_heading_pane_t1

0x2f33,	// (0x0007d538) ncim_indicator_popup_pane

0x2f45,	// (0x0007d54a) ncim_query_button_pane

0x2f59,	// (0x0007d55e) ncim_query_content_pane_t1

0x2f6b,	// (0x0007d570) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x0008a223) ncim_query_content_pane_t

0x2fa5,	// (0x0007d5aa) ncim_query_list_pane

0x2fb7,	// (0x0007d5bc) ncim_query_popup_pane

0x2f33,	// (0x0007d538) ncim_indicator_popup_pane_ParamLimits

0xc500,	// (0x00086b05) ncim_query_content_pane_g1_ParamLimits

0xc500,	// (0x00086b05) ncim_query_content_pane_g1

0x2f59,	// (0x0007d55e) ncim_query_content_pane_t1_ParamLimits

0x2f6b,	// (0x0007d570) ncim_query_content_pane_t2_ParamLimits

0xc50c,	// (0x00086b11) ncim_query_content_pane_t3_ParamLimits

0xc50c,	// (0x00086b11) ncim_query_content_pane_t3

0xc529,	// (0x00086b2e) ncim_query_content_pane_t4_ParamLimits

0xc529,	// (0x00086b2e) ncim_query_content_pane_t4

0xc546,	// (0x00086b4b) ncim_query_content_pane_t5_ParamLimits

0xc546,	// (0x00086b4b) ncim_query_content_pane_t5

0x2f7d,	// (0x0007d582) ncim_query_content_pane_t6_ParamLimits

0x2f7d,	// (0x0007d582) ncim_query_content_pane_t6

0xfc1e,	// (0x0008a223) ncim_query_content_pane_t_ParamLimits

0x2fa5,	// (0x0007d5aa) ncim_query_list_pane_ParamLimits

0x2fb7,	// (0x0007d5bc) ncim_query_popup_pane_ParamLimits

0x2fcb,	// (0x0007d5d0) wait_bar_pane_cp04

0xdcdc,	// (0x000882e1) input_focus_pane_cp011

0x2fd3,	// (0x0007d5d8) ncim_query_popup_pane_t1

0x2fe1,	// (0x0007d5e6) ncim_list_query_list_pane_ParamLimits

0x2fe1,	// (0x0007d5e6) ncim_list_query_list_pane

0xdcdc,	// (0x000882e1) bg_button_pane_cp027

0x2fee,	// (0x0007d5f3) ncim_query_button_pane_g1

0xdcdc,	// (0x000882e1) list_highlight_pane_cp012

0x2ff8,	// (0x0007d5fd) ncim_list_query_list_pane_g1

0x3000,	// (0x0007d605) ncim_list_query_list_pane_t1

0xac0e,	// (0x00085213) cam4_indicators_pane_g3_ParamLimits

0xac0e,	// (0x00085213) cam4_indicators_pane_g3

0xad1c,	// (0x00085321) vid4_indicators_pane_g5_ParamLimits

0xad1c,	// (0x00085321) vid4_indicators_pane_g5

0xbc50,	// (0x00086255) vid4_progress_pane_g5_ParamLimits

0xbc50,	// (0x00086255) vid4_progress_pane_g5

0xc448,	// (0x00086a4d) main_ncimui_pane_g1

0xc48e,	// (0x00086a93) ncimui_group_query_pane_ParamLimits

0xc48e,	// (0x00086a93) ncimui_group_query_pane

0xc4c2,	// (0x00086ac7) ncimui_list_pane_ParamLimits

0xc4c2,	// (0x00086ac7) ncimui_list_pane

0xc4dc,	// (0x00086ae1) ncimui_text_pane_ParamLimits

0xc4dc,	// (0x00086ae1) ncimui_text_pane

0xc563,	// (0x00086b68) ncimui_text_pane_t1_ParamLimits

0xc563,	// (0x00086b68) ncimui_text_pane_t1

0x300e,	// (0x0007d613) ncimui_list_single_graphic_pane_ParamLimits

0x300e,	// (0x0007d613) ncimui_list_single_graphic_pane

0xc582,	// (0x00086b87) ncimui_query_pane_ParamLimits

0xc582,	// (0x00086b87) ncimui_query_pane

0xdcdc,	// (0x000882e1) list_highlight_pane_cp013

0x301e,	// (0x0007d623) ncim_list_query_list_pane_t1_copy1

0x2ff8,	// (0x0007d5fd) ncim_list_single_graphic_pane_g1

0x302c,	// (0x0007d631) ncim_query_button_pane_cp01

0x3034,	// (0x0007d639) ncim_query_entry_pane_ParamLimits

0x3034,	// (0x0007d639) ncim_query_entry_pane

0x3044,	// (0x0007d649) ncimui_query_pane_g1

0x304c,	// (0x0007d651) ncimui_query_pane_t1_ParamLimits

0x304c,	// (0x0007d651) ncimui_query_pane_t1

0xdcdc,	// (0x000882e1) input_focus_pane_cp012

0x2fd3,	// (0x0007d5d8) ncim_query_entry_pane_t1

0xe481,	// (0x00088a86) main_im_pane_ParamLimits

0x066e,	// (0x0007ac73) main_mobtv_pane_ParamLimits

0x066e,	// (0x0007ac73) main_mobtv_pane

0xc2ba,	// (0x000868bf) main_cset6_slider_pane_g18_ParamLimits

0xc2ba,	// (0x000868bf) main_cset6_slider_pane_g18

0xc2c6,	// (0x000868cb) main_cset6_slider_pane_g19_ParamLimits

0xc2c6,	// (0x000868cb) main_cset6_slider_pane_g19

0xeeb5,	// (0x000894ba) bg_main_mobtv_pane_ParamLimits

0xeeb5,	// (0x000894ba) bg_main_mobtv_pane

0xc592,	// (0x00086b97) main_mobtv_info_pane

0xc59d,	// (0x00086ba2) main_mobtv_loading_pane_ParamLimits

0xc59d,	// (0x00086ba2) main_mobtv_loading_pane

0x3070,	// (0x0007d675) main_mobtv_pg_channel_list_pane

0x307a,	// (0x0007d67f) main_mobtv_pg_hdr_pane

0xc5aa,	// (0x00086baf) main_mobtv_programe_curr_pane_ParamLimits

0xc5aa,	// (0x00086baf) main_mobtv_programe_curr_pane

0xc5b7,	// (0x00086bbc) main_mobtv_programe_next_pane_ParamLimits

0xc5b7,	// (0x00086bbc) main_mobtv_programe_next_pane

0x3083,	// (0x0007d688) popup_mobtv_noti_window

0x9189,	// (0x0008378e) main_tv_pg_hdr_pane_g1

0x308b,	// (0x0007d690) main_tv_pg_hdr_pane_g2

0x3093,	// (0x0007d698) main_tv_pg_hdr_pane_g3

0x309b,	// (0x0007d6a0) main_tv_pg_hdr_pane_g4

0x30a3,	// (0x0007d6a8) main_tv_pg_hdr_pane_g5

0x30ad,	// (0x0007d6b2) main_tv_pg_hdr_pane_g6

0x30b7,	// (0x0007d6bc) main_tv_pg_hdr_pane_g7

0x30c1,	// (0x0007d6c6) main_tv_pg_hdr_pane_g8

0x30cb,	// (0x0007d6d0) main_tv_pg_hdr_pane_g9

0x30d5,	// (0x0007d6da) main_tv_pg_hdr_pane_g10

0x30df,	// (0x0007d6e4) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x0008a230) main_tv_pg_hdr_pane_g

0x30e9,	// (0x0007d6ee) main_tv_pg_hdr_pane_t1

0x30f7,	// (0x0007d6fc) main_tv_pg_hdr_pane_t2

0x3105,	// (0x0007d70a) main_tv_pg_hdr_pane_t3

0x3115,	// (0x0007d71a) main_tv_pg_hdr_pane_t4

0x3125,	// (0x0007d72a) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x0008a247) main_tv_pg_hdr_pane_t

0x3135,	// (0x0007d73a) single_mobtv_pg_channel_pane_ParamLimits

0x3135,	// (0x0007d73a) single_mobtv_pg_channel_pane

0x3147,	// (0x0007d74c) single_mobtv_pg_channel_table_pane

0x3150,	// (0x0007d755) single_mobtv_pg_channel_thumb_pane

0x3159,	// (0x0007d75e) single_tv_pg_channel_pane_g1

0x3162,	// (0x0007d767) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x0008a252) single_tv_pg_channel_pane_g

0x9451,	// (0x00083a56) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x9451,	// (0x00083a56) bg_single_mobtv_pg_channel_thumb_pane

0x316b,	// (0x0007d770) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x316b,	// (0x0007d770) single_mobtv_pg_channel_thumb_pane_g1

0x3179,	// (0x0007d77e) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x3179,	// (0x0007d77e) single_mobtv_pg_channel_thumb_pane_g2

0x3185,	// (0x0007d78a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x3185,	// (0x0007d78a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x0008a257) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x0008a257) single_mobtv_pg_channel_thumb_pane_g

0x3191,	// (0x0007d796) single_mobtv_pg_channel_thumb_pane_t1

0x319f,	// (0x0007d7a4) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x0008a25e) single_mobtv_pg_channel_thumb_pane_t

0x9189,	// (0x0008378e) bg_single_mobtv_pg_channel_table_pane_g1

0x9189,	// (0x0008378e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x00089d14) bg_single_mobtv_pg_channel_table_pane_g

0x31ad,	// (0x0007d7b2) single_mobtv_pg_channel_table_pane_t1

0x31bb,	// (0x0007d7c0) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x0008a263) single_mobtv_pg_channel_table_pane_t

0xc5cc,	// (0x00086bd1) main_mobtv_info_pane_g1_ParamLimits

0xc5cc,	// (0x00086bd1) main_mobtv_info_pane_g1

0xc5e8,	// (0x00086bed) main_mobtv_info_pane_t1_ParamLimits

0xc5e8,	// (0x00086bed) main_mobtv_info_pane_t1

0xc660,	// (0x00086c65) main_mobtv_info_pane_t2_ParamLimits

0xc660,	// (0x00086c65) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x0008a26d) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x0008a26d) main_mobtv_info_pane_t

0xc6ef,	// (0x00086cf4) wait_bar_pane_cp05

0xc701,	// (0x00086d06) main_mobtv_loading_pane_g1_ParamLimits

0xc701,	// (0x00086d06) main_mobtv_loading_pane_g1

0xc70f,	// (0x00086d14) main_mobtv_loading_pane_g2_ParamLimits

0xc70f,	// (0x00086d14) main_mobtv_loading_pane_g2

0xc71b,	// (0x00086d20) main_mobtv_loading_pane_g3_ParamLimits

0xc71b,	// (0x00086d20) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x0008a274) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x0008a274) main_mobtv_loading_pane_g

0x31c9,	// (0x0007d7ce) main_mobtv_loading_pane_t1_ParamLimits

0x31c9,	// (0x0007d7ce) main_mobtv_loading_pane_t1

0x31e1,	// (0x0007d7e6) main_mobtv_loading_pane_t2_ParamLimits

0x31e1,	// (0x0007d7e6) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x0008a27b) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x0008a27b) main_mobtv_loading_pane_t

0xc729,	// (0x00086d2e) wait_bar_pane_cp06_ParamLimits

0xc729,	// (0x00086d2e) wait_bar_pane_cp06

0x3205,	// (0x0007d80a) main_mobtv_programe_curr_pane_t1

0x3213,	// (0x0007d818) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x0008a280) main_mobtv_programe_curr_pane_t

0x3221,	// (0x0007d826) main_mobtv_programe_next_pane_t1

0x322f,	// (0x0007d834) main_mobtv_programe_next_pane_t2

0x323d,	// (0x0007d842) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x0008a285) main_mobtv_programe_next_pane_t

0xdcdc,	// (0x000882e1) bg_popup_mobtv_noti_window_pane

0x324b,	// (0x0007d850) popup_mobtv_noti_window_g1

0x3253,	// (0x0007d858) popup_mobtv_noti_window_t1

0x3261,	// (0x0007d866) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x0008a28c) popup_mobtv_noti_window_t

0x9189,	// (0x0008378e) bg_popup_mobtv_noti_window_pane_g1

0xdcdc,	// (0x000882e1) sc_clock_pane

0xdcdc,	// (0x000882e1) main_fs_bigclock_pane

0xbe37,	// (0x0008643c) blid2_tripm_pane_t4_ParamLimits

0xbe37,	// (0x0008643c) blid2_tripm_pane_t4

0xc735,	// (0x00086d3a) sc_clock_pane_g1_ParamLimits

0xc735,	// (0x00086d3a) sc_clock_pane_g1

0xc743,	// (0x00086d48) sc_clock_pane_t1_ParamLimits

0xc743,	// (0x00086d48) sc_clock_pane_t1

0xc756,	// (0x00086d5b) sc_clock_pane_t2_ParamLimits

0xc756,	// (0x00086d5b) sc_clock_pane_t2

0xc768,	// (0x00086d6d) sc_clock_pane_t3_ParamLimits

0xc768,	// (0x00086d6d) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x0008a291) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x0008a291) sc_clock_pane_t

0xd418,	// (0x00087a1d) main_fs_bigclock_indicator_pane_ParamLimits

0xd418,	// (0x00087a1d) main_fs_bigclock_indicator_pane

0xc7ec,	// (0x00086df1) main_fs_bigclock_pane_g1_ParamLimits

0xc7ec,	// (0x00086df1) main_fs_bigclock_pane_g1

0xd424,	// (0x00087a29) main_fs_bigclock_pane_t1_ParamLimits

0xd424,	// (0x00087a29) main_fs_bigclock_pane_t1

0xd436,	// (0x00087a3b) main_fs_bigclock_pane_t2_ParamLimits

0xd436,	// (0x00087a3b) main_fs_bigclock_pane_t2

0xd44a,	// (0x00087a4f) main_fs_bigclock_pane_t3_ParamLimits

0xd44a,	// (0x00087a4f) main_fs_bigclock_pane_t3

0x0002,

0xfe8b,	// (0x0008a490) main_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x0008a490) main_fs_bigclock_pane_t

0x3e71,	// (0x0007e476) main_fs_bigclock_indicator_pane_g1

0x2f4d,	// (0x0007d552) ncim_query_content_pane_g2_ParamLimits

0x2f4d,	// (0x0007d552) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x0008a21e) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x0008a21e) ncim_query_content_pane_g

0xc77c,	// (0x00086d81) sc_clock_pane_t4_ParamLimits

0xc77c,	// (0x00086d81) sc_clock_pane_t4

0x066e,	// (0x0007ac73) main_radioblah_pane

0xee26,	// (0x0008942b) cell_call4_button_pane_t1_copy1_ParamLimits

0xee26,	// (0x0008942b) cell_call4_button_pane_t1_copy1

0xc450,	// (0x00086a55) main_ncimui_pane_t1_ParamLimits

0xc450,	// (0x00086a55) main_ncimui_pane_t1

0xc462,	// (0x00086a67) main_ncimui_pane_t2_ParamLimits

0xc462,	// (0x00086a67) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x0008a217) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x0008a217) main_ncimui_pane_t

0x338f,	// (0x0007d994) main_radioblah_anim_pane_ParamLimits

0x338f,	// (0x0007d994) main_radioblah_anim_pane

0x33a0,	// (0x0007d9a5) main_radioblah_info_pane_ParamLimits

0x33a0,	// (0x0007d9a5) main_radioblah_info_pane

0x33b4,	// (0x0007d9b9) main_radioblah_pane_t1_ParamLimits

0x33b4,	// (0x0007d9b9) main_radioblah_pane_t1

0x33d0,	// (0x0007d9d5) main_radioblah_pane_t2_ParamLimits

0x33d0,	// (0x0007d9d5) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x0008a2b2) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x0008a2b2) main_radioblah_pane_t

0xc83e,	// (0x00086e43) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc83e,	// (0x00086e43) main_radioblah_rocker_ctrl_pane

0x3418,	// (0x0007da1d) main_radioblah_info_pane_t1_ParamLimits

0x3418,	// (0x0007da1d) main_radioblah_info_pane_t1

0xc883,	// (0x00086e88) main_radioblah_info_pane_t2_ParamLimits

0xc883,	// (0x00086e88) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x0008a2bb) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x0008a2bb) main_radioblah_info_pane_t

0x9189,	// (0x0008378e) main_radioblah_rocker_ctrl_pane_g1

0xc933,	// (0x00086f38) main_radioblah_rocker_ctrl_pane_g2

0xc93b,	// (0x00086f40) main_radioblah_rocker_ctrl_pane_g3

0xc943,	// (0x00086f48) main_radioblah_rocker_ctrl_pane_g4

0xc94b,	// (0x00086f50) main_radioblah_rocker_ctrl_pane_g5

0xc953,	// (0x00086f58) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x0008a2c4) main_radioblah_rocker_ctrl_pane_g

0xc410,	// (0x00086a15) main_cset_text2_pane_t1_copy1_ParamLimits

0xab2e,	// (0x00085133) cam4_image_uncrop_qvga_pane

0xac83,	// (0x00085288) vid4_image_uncrop_qcif_pane

0xbfc5,	// (0x000865ca) cam6_image_uncrop_qvga_pane_ParamLimits

0xbfc5,	// (0x000865ca) cam6_image_uncrop_qvga_pane

0x2ba7,	// (0x0007d1ac) vid6_image_uncrop_qcif_pane_ParamLimits

0x2ba7,	// (0x0007d1ac) vid6_image_uncrop_qcif_pane

0xdcdc,	// (0x000882e1) bg_popup_preview_window_pane_cp03

0x2eff,	// (0x0007d504) list_cset_text2_pane

0x2f07,	// (0x0007d50c) main_cset6_text2_pane_g1

0x2f0f,	// (0x0007d514) main_cset6_text2_pane_t1

0xc95b,	// (0x00086f60) list_cset_text2_pane_t1_ParamLimits

0xc95b,	// (0x00086f60) list_cset_text2_pane_t1

0x066e,	// (0x0007ac73) main_radioblah_pane_ParamLimits

0xc6db,	// (0x00086ce0) main_mobtv_info_pane_t3_ParamLimits

0xc6db,	// (0x00086ce0) main_mobtv_info_pane_t3

0xc82c,	// (0x00086e31) main_radioblah_pane_g1

0xc857,	// (0x00086e5c) main_radioblah_info_pane_g1

0xc8d8,	// (0x00086edd) main_radioblah_info_pane_t3_ParamLimits

0xc8d8,	// (0x00086edd) main_radioblah_info_pane_t3

0x735d,	// (0x00081962) highlight_cell_cale_month_pane_ParamLimits

0x735d,	// (0x00081962) highlight_cell_cale_month_pane

0xdcdc,	// (0x000882e1) main_phob_fisheye_pane

0x9c72,	// (0x00084277) scroll_pane_cp0031_ParamLimits

0x9c72,	// (0x00084277) scroll_pane_cp0031

0x2cb5,	// (0x0007d2ba) wait_bar_pane_cp08_ParamLimits

0xc1d1,	// (0x000867d6) cset_list_set_pane_copy1_ParamLimits

0x3452,	// (0x0007da57) highlight_cell_cale_month_pane_g1

0xc978,	// (0x00086f7d) highlight_cell_cale_month_pane_t1

0x28ef,	// (0x0007cef4) list_gen_pane_cp01

0xefef,	// (0x000895f4) scroll_pane_01

0xc986,	// (0x00086f8b) list_single_double_fisheye_pane

0xc98f,	// (0x00086f94) list_double_fisheye_pane_g1_ParamLimits

0xc98f,	// (0x00086f94) list_double_fisheye_pane_g1

0xc99b,	// (0x00086fa0) list_double_fisheye_pane_g2_ParamLimits

0xc99b,	// (0x00086fa0) list_double_fisheye_pane_g2

0xc9af,	// (0x00086fb4) list_double_fisheye_pane_g3_ParamLimits

0xc9af,	// (0x00086fb4) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x0008a2d1) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x0008a2d1) list_double_fisheye_pane_g

0xc9d8,	// (0x00086fdd) list_double_fisheye_pane_t1_ParamLimits

0xc9d8,	// (0x00086fdd) list_double_fisheye_pane_t1

0xc9f3,	// (0x00086ff8) list_double_fisheye_pane_t2_ParamLimits

0xc9f3,	// (0x00086ff8) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x0008a2dc) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x0008a2dc) list_double_fisheye_pane_t

0xdcdc,	// (0x000882e1) main_call5_pane

0xc7a2,	// (0x00086da7) sc_swipe_pane_ParamLimits

0xc7a2,	// (0x00086da7) sc_swipe_pane

0xca21,	// (0x00087026) call5_image_pane_ParamLimits

0xca21,	// (0x00087026) call5_image_pane

0xca31,	// (0x00087036) call5_swipe_1_pane_ParamLimits

0xca31,	// (0x00087036) call5_swipe_1_pane

0xca3d,	// (0x00087042) call5_swipe_2_pane_ParamLimits

0xca3d,	// (0x00087042) call5_swipe_2_pane

0xca57,	// (0x0008705c) popup_call5_audio_first_window_ParamLimits

0xca57,	// (0x0008705c) popup_call5_audio_first_window

0x9451,	// (0x00083a56) call5_swipe_1_pane_g1_ParamLimits

0x9451,	// (0x00083a56) call5_swipe_1_pane_g1

0x345a,	// (0x0007da5f) call5_swipe_1_pane_g2_ParamLimits

0x345a,	// (0x0007da5f) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x0008a2e1) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x0008a2e1) call5_swipe_1_pane_g

0x3466,	// (0x0007da6b) call5_swipe_1_pane_t1_ParamLimits

0x3466,	// (0x0007da6b) call5_swipe_1_pane_t1

0x9451,	// (0x00083a56) call5_swipe_2_pane_g1_ParamLimits

0x9451,	// (0x00083a56) call5_swipe_2_pane_g1

0x347b,	// (0x0007da80) call5_swipe_2_pane_g2_ParamLimits

0x347b,	// (0x0007da80) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x0008a2e6) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x0008a2e6) call5_swipe_2_pane_g

0x3487,	// (0x0007da8c) call5_swipe_2_pane_t1_ParamLimits

0x3487,	// (0x0007da8c) call5_swipe_2_pane_t1

0x349c,	// (0x0007daa1) sc_swipe_pane_g1_ParamLimits

0x349c,	// (0x0007daa1) sc_swipe_pane_g1

0x34a9,	// (0x0007daae) sc_swipe_pane_g2_ParamLimits

0x34a9,	// (0x0007daae) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x0008a2eb) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x0008a2eb) sc_swipe_pane_g

0x34b5,	// (0x0007daba) sc_swipe_pane_t1_ParamLimits

0x34b5,	// (0x0007daba) sc_swipe_pane_t1

0xdcdc,	// (0x000882e1) main_cmail_launcher_pane

0xca65,	// (0x0008706a) aid_size_cell_cmail_l_ParamLimits

0xca65,	// (0x0008706a) aid_size_cell_cmail_l

0xca75,	// (0x0008707a) grid_cmail_l_pane_ParamLimits

0xca75,	// (0x0008707a) grid_cmail_l_pane

0xca85,	// (0x0008708a) cell_cmail_l_pane_ParamLimits

0xca85,	// (0x0008708a) cell_cmail_l_pane

0xca99,	// (0x0008709e) cell_cmail_l_pane_g1_ParamLimits

0xca99,	// (0x0008709e) cell_cmail_l_pane_g1

0xcaa5,	// (0x000870aa) cell_cmail_l_pane_t1_ParamLimits

0xcaa5,	// (0x000870aa) cell_cmail_l_pane_t1

0x34ca,	// (0x0007dacf) cell_cmail_l_pane_t2_ParamLimits

0x34ca,	// (0x0007dacf) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x0008a2f0) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x0008a2f0) cell_cmail_l_pane_t

0x066e,	// (0x0007ac73) grid_highlight_pane_cp018_ParamLimits

0x066e,	// (0x0007ac73) grid_highlight_pane_cp018

0x583f,	// (0x0007fe44) main2_pane_ParamLimits

0x583f,	// (0x0007fe44) main2_pane

0xe51a,	// (0x00088b1f) popup_sp_fs_action_menu_bg_pane_g1

0xe522,	// (0x00088b27) popup_sp_fs_action_menu_bg_pane_g2

0xe52a,	// (0x00088b2f) popup_sp_fs_action_menu_bg_pane_g3

0xe532,	// (0x00088b37) popup_sp_fs_action_menu_bg_pane_g4

0xe53a,	// (0x00088b3f) popup_sp_fs_action_menu_bg_pane_g5

0xe542,	// (0x00088b47) popup_sp_fs_action_menu_bg_pane_g6

0xe54a,	// (0x00088b4f) popup_sp_fs_action_menu_bg_pane_g7

0xe552,	// (0x00088b57) popup_sp_fs_action_menu_bg_pane_g8

0xe55a,	// (0x00088b5f) popup_sp_fs_action_menu_bg_pane_g9

0xe562,	// (0x00088b67) popup_sp_fs_action_menu_bg_pane_g10

0xe562,	// (0x00088b67) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x000897c0) popup_sp_fs_action_menu_bg_pane_g

0x0774,	// (0x0007ad79) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0774,	// (0x0007ad79) list_medium_line_x2_t3_g3_g1

0x0780,	// (0x0007ad85) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0780,	// (0x0007ad85) list_medium_line_x2_t3_g3_g2

0x078c,	// (0x0007ad91) list_medium_line_x2_t3_g3_g3_ParamLimits

0x078c,	// (0x0007ad91) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x00089870) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x00089870) list_medium_line_x2_t3_g3_g

0x0798,	// (0x0007ad9d) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0798,	// (0x0007ad9d) list_medium_line_x2_t3_g3_t1

0x668b,	// (0x00080c90) list_medium_line_x2_t3_g3_t2_ParamLimits

0x668b,	// (0x00080c90) list_medium_line_x2_t3_g3_t2

0x07ad,	// (0x0007adb2) list_medium_line_x2_t3_g3_t3_ParamLimits

0x07ad,	// (0x0007adb2) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x00089877) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x00089877) list_medium_line_x2_t3_g3_t

0x0774,	// (0x0007ad79) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0774,	// (0x0007ad79) list_medium_line_x2_t3_g2_g1

0x078c,	// (0x0007ad91) list_medium_line_x2_t3_g2_g2_ParamLimits

0x078c,	// (0x0007ad91) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x0008987e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x0008987e) list_medium_line_x2_t3_g2_g

0x07c2,	// (0x0007adc7) list_medium_line_x2_t3_g2_t1_ParamLimits

0x07c2,	// (0x0007adc7) list_medium_line_x2_t3_g2_t1

0x07d8,	// (0x0007addd) list_medium_line_x2_t3_g2_t2_ParamLimits

0x07d8,	// (0x0007addd) list_medium_line_x2_t3_g2_t2

0x07ea,	// (0x0007adef) list_medium_line_x2_t3_g2_t3_ParamLimits

0x07ea,	// (0x0007adef) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x00089883) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x00089883) list_medium_line_x2_t3_g2_t

0x0774,	// (0x0007ad79) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0774,	// (0x0007ad79) list_medium_line_x2_t4_g4_g1

0x0807,	// (0x0007ae0c) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0807,	// (0x0007ae0c) list_medium_line_x2_t4_g4_g2

0x0780,	// (0x0007ad85) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0780,	// (0x0007ad85) list_medium_line_x2_t4_g4_g3

0x0813,	// (0x0007ae18) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0813,	// (0x0007ae18) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0008988a) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0008988a) list_medium_line_x2_t4_g4_g

0x669d,	// (0x00080ca2) list_medium_line_x2_t4_g4_t1_ParamLimits

0x669d,	// (0x00080ca2) list_medium_line_x2_t4_g4_t1

0x66b7,	// (0x00080cbc) list_medium_line_x2_t4_g4_t2_ParamLimits

0x66b7,	// (0x00080cbc) list_medium_line_x2_t4_g4_t2

0x66cd,	// (0x00080cd2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x66cd,	// (0x00080cd2) list_medium_line_x2_t4_g4_t3

0x081f,	// (0x0007ae24) list_medium_line_x2_t4_g4_t4_ParamLimits

0x081f,	// (0x0007ae24) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x00089893) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x00089893) list_medium_line_x2_t4_g4_t

0x0774,	// (0x0007ad79) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0774,	// (0x0007ad79) list_medium_line_x2_t2_g4_g1

0x0807,	// (0x0007ae0c) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0807,	// (0x0007ae0c) list_medium_line_x2_t2_g4_g2

0x0780,	// (0x0007ad85) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0780,	// (0x0007ad85) list_medium_line_x2_t2_g4_g3

0x078c,	// (0x0007ad91) list_medium_line_x2_t2_g4_g4_ParamLimits

0x078c,	// (0x0007ad91) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x000898fa) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x000898fa) list_medium_line_x2_t2_g4_g

0x0831,	// (0x0007ae36) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0831,	// (0x0007ae36) list_medium_line_x2_t2_g4_t1

0x07ad,	// (0x0007adb2) list_medium_line_x2_t2_g4_t2_ParamLimits

0x07ad,	// (0x0007adb2) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x00089903) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x00089903) list_medium_line_x2_t2_g4_t

0x0774,	// (0x0007ad79) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0774,	// (0x0007ad79) list_medium_line_x2_t2_g3_g1

0x0780,	// (0x0007ad85) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0780,	// (0x0007ad85) list_medium_line_x2_t2_g3_g2

0x078c,	// (0x0007ad91) list_medium_line_x2_t2_g3_g3_ParamLimits

0x078c,	// (0x0007ad91) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x00089870) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x00089870) list_medium_line_x2_t2_g3_g

0x0846,	// (0x0007ae4b) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0846,	// (0x0007ae4b) list_medium_line_x2_t2_g3_t1

0x07ad,	// (0x0007adb2) list_medium_line_x2_t2_g3_t2_ParamLimits

0x07ad,	// (0x0007adb2) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x00089908) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x00089908) list_medium_line_x2_t2_g3_t

0x750f,	// (0x00081b14) main_sp_fs_list_pane_ParamLimits

0x750f,	// (0x00081b14) main_sp_fs_list_pane

0x751b,	// (0x00081b20) sp_fs_scroll_pane_ParamLimits

0x751b,	// (0x00081b20) sp_fs_scroll_pane

0x7527,	// (0x00081b2c) list_medium_line_x2_t3_t1

0x7537,	// (0x00081b3c) list_medium_line_x2_t3_t2

0x0a8a,	// (0x0007b08f) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x00089953) list_medium_line_x2_t3_t

0x7545,	// (0x00081b4a) list_medium_line_x3_t4_t1

0x7555,	// (0x00081b5a) list_medium_line_x3_t4_t2

0x0a98,	// (0x0007b09d) list_medium_line_x3_t4_t3

0x0a8a,	// (0x0007b08f) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x0008995a) list_medium_line_x3_t4_t

0x7563,	// (0x00081b68) list_medium_line_x4_t5_t1

0x7573,	// (0x00081b78) list_medium_line_x4_t5_t2

0x0a98,	// (0x0007b09d) list_medium_line_x4_t5_t3

0x0aa6,	// (0x0007b0ab) list_medium_line_x4_t5_t4

0x0a8a,	// (0x0007b08f) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x00089963) list_medium_line_x4_t5_t

0x0774,	// (0x0007ad79) list_medium_line_t4_g4_g1_ParamLimits

0x0774,	// (0x0007ad79) list_medium_line_t4_g4_g1

0x0813,	// (0x0007ae18) list_medium_line_t4_g4_g2_ParamLimits

0x0813,	// (0x0007ae18) list_medium_line_t4_g4_g2

0x0ab4,	// (0x0007b0b9) list_medium_line_t4_g4_g3_ParamLimits

0x0ab4,	// (0x0007b0b9) list_medium_line_t4_g4_g3

0x078c,	// (0x0007ad91) list_medium_line_t4_g4_g4_ParamLimits

0x078c,	// (0x0007ad91) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x0008996e) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x0008996e) list_medium_line_t4_g4_g

0x0ac0,	// (0x0007b0c5) list_medium_line_t4_g4_t1_ParamLimits

0x0ac0,	// (0x0007b0c5) list_medium_line_t4_g4_t1

0x0ad5,	// (0x0007b0da) list_medium_line_t4_g4_t2_ParamLimits

0x0ad5,	// (0x0007b0da) list_medium_line_t4_g4_t2

0x0aea,	// (0x0007b0ef) list_medium_line_t4_g4_t3_ParamLimits

0x0aea,	// (0x0007b0ef) list_medium_line_t4_g4_t3

0x07ad,	// (0x0007adb2) list_medium_line_t4_g4_t4_ParamLimits

0x07ad,	// (0x0007adb2) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x00089977) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x00089977) list_medium_line_t4_g4_t

0x7692,	// (0x00081c97) chi_dic_find_pane_g1

0x86a5,	// (0x00082caa) main_tport_pane

0x25bc,	// (0x0007cbc1) list_medium_line_plain_t1

0x25d2,	// (0x0007cbd7) list_medium_line_t2_g2_g1_ParamLimits

0x25d2,	// (0x0007cbd7) list_medium_line_t2_g2_g1

0x25de,	// (0x0007cbe3) list_medium_line_t2_g2_g2_ParamLimits

0x25de,	// (0x0007cbe3) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x0008a033) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x0008a033) list_medium_line_t2_g2_g

0xb700,	// (0x00085d05) list_medium_line_t2_g2_t1_ParamLimits

0xb700,	// (0x00085d05) list_medium_line_t2_g2_t1

0xb71a,	// (0x00085d1f) list_medium_line_t2_g2_t2_ParamLimits

0xb71a,	// (0x00085d1f) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x0008a038) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x0008a038) list_medium_line_t2_g2_t

0x28f8,	// (0x0007cefd) aid_sp_fs_list_icon_a_sm

0x4800,	// (0x0007ee05) aid_sp_fs_list_icon_d

0x2900,	// (0x0007cf05) aid_sp_fs_text_primary

0x2909,	// (0x0007cf0e) aid_sp_fs_text_secondary

0x2912,	// (0x0007cf17) list_medium_line

0x2912,	// (0x0007cf17) list_medium_line_g2

0x2912,	// (0x0007cf17) list_medium_line_g3

0x2912,	// (0x0007cf17) list_medium_line_plain

0x2912,	// (0x0007cf17) list_medium_line_plain_t2

0x2912,	// (0x0007cf17) list_medium_line_plain_t3

0x2912,	// (0x0007cf17) list_medium_line_right_icon

0x2912,	// (0x0007cf17) list_medium_line_right_iconx2

0x2912,	// (0x0007cf17) list_medium_line_t2

0x2912,	// (0x0007cf17) list_medium_line_t2_g2

0x2912,	// (0x0007cf17) list_medium_line_t2_g3

0x2912,	// (0x0007cf17) list_medium_line_t2_right_icon

0x2912,	// (0x0007cf17) list_medium_line_t2_right_iconx2

0x2912,	// (0x0007cf17) list_medium_line_t3

0x2912,	// (0x0007cf17) list_medium_line_t3_g2

0x2912,	// (0x0007cf17) list_medium_line_t3_g3

0x2912,	// (0x0007cf17) list_medium_line_t3_right_iconx2

0x291b,	// (0x0007cf20) list_medium_line_t4_g4

0x2924,	// (0x0007cf29) list_medium_line_x2

0x2924,	// (0x0007cf29) list_medium_line_x2_t2_g2

0x2924,	// (0x0007cf29) list_medium_line_x2_t2_g3

0x2924,	// (0x0007cf29) list_medium_line_x2_t2_g4

0x2924,	// (0x0007cf29) list_medium_line_x2_t3

0x2924,	// (0x0007cf29) list_medium_line_x2_t3_g2

0x2924,	// (0x0007cf29) list_medium_line_x2_t3_g3

0x2924,	// (0x0007cf29) list_medium_line_x2_t3_g4

0x2924,	// (0x0007cf29) list_medium_line_x2_t4_g2

0x2924,	// (0x0007cf29) list_medium_line_x2_t4_g4

0x292d,	// (0x0007cf32) list_medium_line_x3

0x292d,	// (0x0007cf32) list_medium_line_x3_t4

0x292d,	// (0x0007cf32) list_medium_line_x3_t4_g4

0x291b,	// (0x0007cf20) list_medium_line_x4_t4

0x291b,	// (0x0007cf20) list_medium_line_x4_t4_g7

0x291b,	// (0x0007cf20) list_medium_line_x4_t5

0x2936,	// (0x0007cf3b) list_single_fs_dyc_pane_ParamLimits

0x2936,	// (0x0007cf3b) list_single_fs_dyc_pane

0x0774,	// (0x0007ad79) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0774,	// (0x0007ad79) list_medium_line_x4_t4_g7_g1

0x2e2e,	// (0x0007d433) list_medium_line_x4_t4_g7_g2_ParamLimits

0x2e2e,	// (0x0007d433) list_medium_line_x4_t4_g7_g2

0x2e3a,	// (0x0007d43f) list_medium_line_x4_t4_g7_g3_ParamLimits

0x2e3a,	// (0x0007d43f) list_medium_line_x4_t4_g7_g3

0x2e49,	// (0x0007d44e) list_medium_line_x4_t4_g7_g4_ParamLimits

0x2e49,	// (0x0007d44e) list_medium_line_x4_t4_g7_g4

0x2e55,	// (0x0007d45a) list_medium_line_x4_t4_g7_g5_ParamLimits

0x2e55,	// (0x0007d45a) list_medium_line_x4_t4_g7_g5

0x2e64,	// (0x0007d469) list_medium_line_x4_t4_g7_g6_ParamLimits

0x2e64,	// (0x0007d469) list_medium_line_x4_t4_g7_g6

0x2e73,	// (0x0007d478) list_medium_line_x4_t4_g7_g7_ParamLimits

0x2e73,	// (0x0007d478) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x0008a1fd) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x0008a1fd) list_medium_line_x4_t4_g7_g

0x2e7f,	// (0x0007d484) list_medium_line_x4_t4_g7_t1_ParamLimits

0x2e7f,	// (0x0007d484) list_medium_line_x4_t4_g7_t1

0x2e94,	// (0x0007d499) list_medium_line_x4_t4_g7_t2_ParamLimits

0x2e94,	// (0x0007d499) list_medium_line_x4_t4_g7_t2

0x2ea9,	// (0x0007d4ae) list_medium_line_x4_t4_g7_t3_ParamLimits

0x2ea9,	// (0x0007d4ae) list_medium_line_x4_t4_g7_t3

0x2ebe,	// (0x0007d4c3) list_medium_line_x4_t4_g7_t4_ParamLimits

0x2ebe,	// (0x0007d4c3) list_medium_line_x4_t4_g7_t4

0x2ed0,	// (0x0007d4d5) list_medium_line_x4_t4_g7_t5_ParamLimits

0x2ed0,	// (0x0007d4d5) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x0008a20c) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x0008a20c) list_medium_line_x4_t4_g7_t

0x2ee2,	// (0x0007d4e7) list_single_dyc_row_pane_ParamLimits

0x2ee2,	// (0x0007d4e7) list_single_dyc_row_pane

0xca15,	// (0x0008701a) call5_gesture_pane_ParamLimits

0xca15,	// (0x0008701a) call5_gesture_pane

0xca49,	// (0x0008704e) call5_windows_pane_ParamLimits

0xca49,	// (0x0008704e) call5_windows_pane

0xcabb,	// (0x000870c0) call5_swipe_1_pane_cp_ParamLimits

0xcabb,	// (0x000870c0) call5_swipe_1_pane_cp

0xcac7,	// (0x000870cc) call5_swipe_2_pane_cp_ParamLimits

0xcac7,	// (0x000870cc) call5_swipe_2_pane_cp

0x0f55,	// (0x0007b55a) call5_image_pane_cp

0xcad3,	// (0x000870d8) popup_call5_audio_first_window_cp_ParamLimits

0xcad3,	// (0x000870d8) popup_call5_audio_first_window_cp

0x349c,	// (0x0007daa1) call5_swipe_1_pane_g1_cp_ParamLimits

0x349c,	// (0x0007daa1) call5_swipe_1_pane_g1_cp

0x34dc,	// (0x0007dae1) call5_swipe_1_pane_g2_cp

0x34b5,	// (0x0007daba) call5_swipe_1_pane_t1_cp_ParamLimits

0x34b5,	// (0x0007daba) call5_swipe_1_pane_t1_cp

0x349c,	// (0x0007daa1) call5_swipe_2_pane_g1_cp_ParamLimits

0x349c,	// (0x0007daa1) call5_swipe_2_pane_g1_cp

0x34e4,	// (0x0007dae9) call5_swipe_2_pane_g2_cp

0x34ec,	// (0x0007daf1) call5_swipe_2_pane_t1_cp_ParamLimits

0x34ec,	// (0x0007daf1) call5_swipe_2_pane_t1_cp

0x066e,	// (0x0007ac73) main_sp_fs_email_pane

0x3501,	// (0x0007db06) main_sp_fs_listscroll_pane_te

0x350a,	// (0x0007db0f) popup_sp_fs_action_menu_pane_ParamLimits

0x350a,	// (0x0007db0f) popup_sp_fs_action_menu_pane

0x9189,	// (0x0008378e) bg_sp_fs_ctrlbar_pane_g1

0x354e,	// (0x0007db53) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x3557,	// (0x0007db5c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3560,	// (0x0007db65) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x9189,	// (0x0008378e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x0008a2f5) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x4331,	// (0x0007e936) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x4331,	// (0x0007e936) bg_sp_fs_ctrlbar_ddmenu_pane

0x3569,	// (0x0007db6e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3569,	// (0x0007db6e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3575,	// (0x0007db7a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3575,	// (0x0007db7a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x0008a2fe) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x0008a2fe) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3581,	// (0x0007db86) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3581,	// (0x0007db86) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x359b,	// (0x0007dba0) list_medium_line_t2_right_icon_g1

0xcae1,	// (0x000870e6) list_medium_line_t2_right_icon_t1

0xcaf1,	// (0x000870f6) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x0008a303) list_medium_line_t2_right_icon_t

0x23a3,	// (0x0007c9a8) bg_sp_fs_ctrlbar_pane_ParamLimits

0x23a3,	// (0x0007c9a8) bg_sp_fs_ctrlbar_pane

0xcb56,	// (0x0008715b) main_sp_fs_ctrlbar_button_pane_cp01

0xcb5e,	// (0x00087163) main_sp_fs_ctrlbar_ddmenu_pane

0x35db,	// (0x0007dbe0) main_sp_fs_ctrlbar_pane_g1

0x35e7,	// (0x0007dbec) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x0008a308) main_sp_fs_ctrlbar_pane_g

0x35f3,	// (0x0007dbf8) main_sp_fs_ctrlbar_pane_t1

0xcb68,	// (0x0008716d) main_sp_fs_ctrlbar_pane

0xcb84,	// (0x00087189) main_sp_fs_listscroll_pane_te_cp01

0xcb95,	// (0x0008719a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xcb95,	// (0x0008719a) popup_sp_fs_action_menu_pane_cp01

0x066e,	// (0x0007ac73) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x066e,	// (0x0007ac73) bg_sp_fs_highlight_list_pane_cp01

0x3608,	// (0x0007dc0d) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x3608,	// (0x0007dc0d) sp_fs_action_menu_list_gene_pane_g1

0x3617,	// (0x0007dc1c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x3617,	// (0x0007dc1c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x0008a30d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x0008a30d) sp_fs_action_menu_list_gene_pane_g

0x3624,	// (0x0007dc29) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x3624,	// (0x0007dc29) sp_fs_action_menu_list_gene_pane_t1

0x363c,	// (0x0007dc41) sp_fs_action_menu_list_gene_pane_ParamLimits

0x363c,	// (0x0007dc41) sp_fs_action_menu_list_gene_pane

0x365d,	// (0x0007dc62) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x365d,	// (0x0007dc62) popup_sp_fs_action_menu_bg_pane

0x366b,	// (0x0007dc70) sp_fs_action_menu_list_pane_ParamLimits

0x366b,	// (0x0007dc70) sp_fs_action_menu_list_pane

0x368d,	// (0x0007dc92) sp_fs_scroll_pane_cp01_ParamLimits

0x368d,	// (0x0007dc92) sp_fs_scroll_pane_cp01

0xcbaf,	// (0x000871b4) list_medium_line_plain_t2_t1

0xcbbf,	// (0x000871c4) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x0008a312) list_medium_line_plain_t2_t

0xcbcd,	// (0x000871d2) list_medium_line_plain_t3_t1

0xcbdd,	// (0x000871e2) list_medium_line_plain_t3_t2

0xcbeb,	// (0x000871f0) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x0008a317) list_medium_line_plain_t3_t

0x0774,	// (0x0007ad79) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0774,	// (0x0007ad79) list_medium_line_x2_t2_g2_g1

0x078c,	// (0x0007ad91) list_medium_line_x2_t2_g2_g2_ParamLimits

0x078c,	// (0x0007ad91) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x0008987e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x0008987e) list_medium_line_x2_t2_g2_g

0x0ac0,	// (0x0007b0c5) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0ac0,	// (0x0007b0c5) list_medium_line_x2_t2_g2_t1

0x07ad,	// (0x0007adb2) list_medium_line_x2_t2_g2_t2_ParamLimits

0x07ad,	// (0x0007adb2) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x0008a31e) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x0008a31e) list_medium_line_x2_t2_g2_t

0x0774,	// (0x0007ad79) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0774,	// (0x0007ad79) list_medium_line_x2_t4_g2_g1

0x36b3,	// (0x0007dcb8) list_medium_line_x2_t4_g2_g2_ParamLimits

0x36b3,	// (0x0007dcb8) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd1e,	// (0x0008a323) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd1e,	// (0x0008a323) list_medium_line_x2_t4_g2_g

0xcbf9,	// (0x000871fe) list_medium_line_x2_t4_g2_t1_ParamLimits

0xcbf9,	// (0x000871fe) list_medium_line_x2_t4_g2_t1

0xcc10,	// (0x00087215) list_medium_line_x2_t4_g2_t2_ParamLimits

0xcc10,	// (0x00087215) list_medium_line_x2_t4_g2_t2

0xcc25,	// (0x0008722a) list_medium_line_x2_t4_g2_t3_ParamLimits

0xcc25,	// (0x0008722a) list_medium_line_x2_t4_g2_t3

0x07ad,	// (0x0007adb2) list_medium_line_x2_t4_g2_t4_ParamLimits

0x07ad,	// (0x0007adb2) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd23,	// (0x0008a328) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd23,	// (0x0008a328) list_medium_line_x2_t4_g2_t

0x36c5,	// (0x0007dcca) list_medium_line_t3_right_iconx2_g1

0x359b,	// (0x0007dba0) list_medium_line_t3_right_iconx2_g2

0xcc37,	// (0x0008723c) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd2c,	// (0x0008a331) list_medium_line_t3_right_iconx2_g

0xcc3f,	// (0x00087244) list_medium_line_t3_right_iconx2_t1

0xcc4f,	// (0x00087254) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd33,	// (0x0008a338) list_medium_line_t3_right_iconx2_t

0x0774,	// (0x0007ad79) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0774,	// (0x0007ad79) list_medium_line_x3_t4_g4_g1

0x0780,	// (0x0007ad85) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0780,	// (0x0007ad85) list_medium_line_x3_t4_g4_g2

0x0813,	// (0x0007ae18) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0813,	// (0x0007ae18) list_medium_line_x3_t4_g4_g3

0x36cd,	// (0x0007dcd2) list_medium_line_x3_t4_g4_g4_ParamLimits

0x36cd,	// (0x0007dcd2) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd38,	// (0x0008a33d) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd38,	// (0x0008a33d) list_medium_line_x3_t4_g4_g

0xcc5d,	// (0x00087262) list_medium_line_x3_t4_g4_t1_ParamLimits

0xcc5d,	// (0x00087262) list_medium_line_x3_t4_g4_t1

0xcc74,	// (0x00087279) list_medium_line_x3_t4_g4_t2_ParamLimits

0xcc74,	// (0x00087279) list_medium_line_x3_t4_g4_t2

0x0ad5,	// (0x0007b0da) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0ad5,	// (0x0007b0da) list_medium_line_x3_t4_g4_t3

0x36d9,	// (0x0007dcde) list_medium_line_x3_t4_g4_t4_ParamLimits

0x36d9,	// (0x0007dcde) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd41,	// (0x0008a346) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd41,	// (0x0008a346) list_medium_line_x3_t4_g4_t

0xcc89,	// (0x0008728e) list_single_dyc_row_text_pane_t1_ParamLimits

0xcc89,	// (0x0008728e) list_single_dyc_row_text_pane_t1

0xccc0,	// (0x000872c5) list_single_dyc_row_text_pane_t2_ParamLimits

0xccc0,	// (0x000872c5) list_single_dyc_row_text_pane_t2

0x36f6,	// (0x0007dcfb) list_single_dyc_row_text_pane_t3_ParamLimits

0x36f6,	// (0x0007dcfb) list_single_dyc_row_text_pane_t3

0x0002,

0xfd4a,	// (0x0008a34f) list_single_dyc_row_text_pane_t_ParamLimits

0xfd4a,	// (0x0008a34f) list_single_dyc_row_text_pane_t

0x3708,	// (0x0007dd0d) list_single_dyc_row_pane_g1_ParamLimits

0x3708,	// (0x0007dd0d) list_single_dyc_row_pane_g1

0x3714,	// (0x0007dd19) list_single_dyc_row_pane_g2_ParamLimits

0x3714,	// (0x0007dd19) list_single_dyc_row_pane_g2

0x3720,	// (0x0007dd25) list_single_dyc_row_pane_g3_ParamLimits

0x3720,	// (0x0007dd25) list_single_dyc_row_pane_g3

0x372c,	// (0x0007dd31) list_single_dyc_row_pane_g4_ParamLimits

0x372c,	// (0x0007dd31) list_single_dyc_row_pane_g4

0x0003,

0xfd51,	// (0x0008a356) list_single_dyc_row_pane_g_ParamLimits

0xfd51,	// (0x0008a356) list_single_dyc_row_pane_g

0x3738,	// (0x0007dd3d) list_single_dyc_row_text_pane_ParamLimits

0x3738,	// (0x0007dd3d) list_single_dyc_row_text_pane

0xdcdc,	// (0x000882e1) bg_sp_fs_scroll_pane

0x3757,	// (0x0007dd5c) thumb_sp_fs_scroll_pane

0x25d2,	// (0x0007cbd7) list_medium_line_g1_ParamLimits

0x25d2,	// (0x0007cbd7) list_medium_line_g1

0x3760,	// (0x0007dd65) list_medium_line_t1_ParamLimits

0x3760,	// (0x0007dd65) list_medium_line_t1

0x0774,	// (0x0007ad79) list_medium_line_x2_g1_ParamLimits

0x0774,	// (0x0007ad79) list_medium_line_x2_g1

0x0780,	// (0x0007ad85) list_medium_line_x2_g2_ParamLimits

0x0780,	// (0x0007ad85) list_medium_line_x2_g2

0x0001,

0xfd5a,	// (0x0008a35f) list_medium_line_x2_g_ParamLimits

0xfd5a,	// (0x0008a35f) list_medium_line_x2_g

0x3775,	// (0x0007dd7a) list_medium_line_x2_t1_ParamLimits

0x3775,	// (0x0007dd7a) list_medium_line_x2_t1

0x0774,	// (0x0007ad79) list_medium_line_x3_g1_ParamLimits

0x0774,	// (0x0007ad79) list_medium_line_x3_g1

0x0780,	// (0x0007ad85) list_medium_line_x3_g2_ParamLimits

0x0780,	// (0x0007ad85) list_medium_line_x3_g2

0x0001,

0xfd5a,	// (0x0008a35f) list_medium_line_x3_g_ParamLimits

0xfd5a,	// (0x0008a35f) list_medium_line_x3_g

0x3775,	// (0x0007dd7a) list_medium_line_x3_t1_ParamLimits

0x3775,	// (0x0007dd7a) list_medium_line_x3_t1

0x378b,	// (0x0007dd90) thumb_sp_fs_scroll_pane_g1

0x3794,	// (0x0007dd99) thumb_sp_fs_scroll_pane_g2

0x379d,	// (0x0007dda2) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x0008a364) thumb_sp_fs_scroll_pane_g

0x378b,	// (0x0007dd90) bg_sp_fs_scroll_pane_g1

0x3794,	// (0x0007dd99) bg_sp_fs_scroll_pane_g2

0x379d,	// (0x0007dda2) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x0008a364) bg_sp_fs_scroll_pane_g

0x0774,	// (0x0007ad79) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0774,	// (0x0007ad79) list_medium_line_x2_t3_g4_g1

0x0807,	// (0x0007ae0c) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0807,	// (0x0007ae0c) list_medium_line_x2_t3_g4_g2

0x0780,	// (0x0007ad85) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0780,	// (0x0007ad85) list_medium_line_x2_t3_g4_g3

0x078c,	// (0x0007ad91) list_medium_line_x2_t3_g4_g4_ParamLimits

0x078c,	// (0x0007ad91) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x000898fa) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x000898fa) list_medium_line_x2_t3_g4_g

0xcd1a,	// (0x0008731f) list_medium_line_x2_t3_g4_t1_ParamLimits

0xcd1a,	// (0x0008731f) list_medium_line_x2_t3_g4_t1

0xcd30,	// (0x00087335) list_medium_line_x2_t3_g4_t2_ParamLimits

0xcd30,	// (0x00087335) list_medium_line_x2_t3_g4_t2

0x07ad,	// (0x0007adb2) list_medium_line_x2_t3_g4_t3_ParamLimits

0x07ad,	// (0x0007adb2) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd66,	// (0x0008a36b) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd66,	// (0x0008a36b) list_medium_line_x2_t3_g4_t

0x25d2,	// (0x0007cbd7) list_medium_line_g2_g1_ParamLimits

0x25d2,	// (0x0007cbd7) list_medium_line_g2_g1

0x25de,	// (0x0007cbe3) list_medium_line_g2_g2_ParamLimits

0x25de,	// (0x0007cbe3) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x0008a033) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x0008a033) list_medium_line_g2_g

0x37a6,	// (0x0007ddab) list_medium_line_g2_t1_ParamLimits

0x37a6,	// (0x0007ddab) list_medium_line_g2_t1

0x25d2,	// (0x0007cbd7) list_medium_line_t3_g2_g1_ParamLimits

0x25d2,	// (0x0007cbd7) list_medium_line_t3_g2_g1

0x25de,	// (0x0007cbe3) list_medium_line_t3_g2_g2_ParamLimits

0x25de,	// (0x0007cbe3) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x0008a033) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x0008a033) list_medium_line_t3_g2_g

0xcd4a,	// (0x0008734f) list_medium_line_t3_g2_t1_ParamLimits

0xcd4a,	// (0x0008734f) list_medium_line_t3_g2_t1

0xcd61,	// (0x00087366) list_medium_line_t3_g2_t2_ParamLimits

0xcd61,	// (0x00087366) list_medium_line_t3_g2_t2

0xcd76,	// (0x0008737b) list_medium_line_t3_g2_t3_ParamLimits

0xcd76,	// (0x0008737b) list_medium_line_t3_g2_t3

0x0002,

0xfd6d,	// (0x0008a372) list_medium_line_t3_g2_t_ParamLimits

0xfd6d,	// (0x0008a372) list_medium_line_t3_g2_t

0x359b,	// (0x0007dba0) list_medium_line_right_icon_g1

0x37bb,	// (0x0007ddc0) list_medium_line_right_icon_t1

0x25d2,	// (0x0007cbd7) list_medium_line_t2_g1_ParamLimits

0x25d2,	// (0x0007cbd7) list_medium_line_t2_g1

0xcd8b,	// (0x00087390) list_medium_line_t2_t1_ParamLimits

0xcd8b,	// (0x00087390) list_medium_line_t2_t1

0xcda5,	// (0x000873aa) list_medium_line_t2_t2_ParamLimits

0xcda5,	// (0x000873aa) list_medium_line_t2_t2

0x0001,

0xfd74,	// (0x0008a379) list_medium_line_t2_t_ParamLimits

0xfd74,	// (0x0008a379) list_medium_line_t2_t

0x25d2,	// (0x0007cbd7) list_medium_line_t3_g1_ParamLimits

0x25d2,	// (0x0007cbd7) list_medium_line_t3_g1

0xcdba,	// (0x000873bf) list_medium_line_t3_t1_ParamLimits

0xcdba,	// (0x000873bf) list_medium_line_t3_t1

0xcdd1,	// (0x000873d6) list_medium_line_t3_t2_ParamLimits

0xcdd1,	// (0x000873d6) list_medium_line_t3_t2

0xcde6,	// (0x000873eb) list_medium_line_t3_t3_ParamLimits

0xcde6,	// (0x000873eb) list_medium_line_t3_t3

0x0002,

0xfd79,	// (0x0008a37e) list_medium_line_t3_t_ParamLimits

0xfd79,	// (0x0008a37e) list_medium_line_t3_t

0x25d2,	// (0x0007cbd7) list_medium_line_g3_g1_ParamLimits

0x25d2,	// (0x0007cbd7) list_medium_line_g3_g1

0x37c9,	// (0x0007ddce) list_medium_line_g3_g2_ParamLimits

0x37c9,	// (0x0007ddce) list_medium_line_g3_g2

0x25de,	// (0x0007cbe3) list_medium_line_g3_g3_ParamLimits

0x25de,	// (0x0007cbe3) list_medium_line_g3_g3

0x0002,

0xfd80,	// (0x0008a385) list_medium_line_g3_g_ParamLimits

0xfd80,	// (0x0008a385) list_medium_line_g3_g

0x37d5,	// (0x0007ddda) list_medium_line_g3_t1_ParamLimits

0x37d5,	// (0x0007ddda) list_medium_line_g3_t1

0x25d2,	// (0x0007cbd7) list_medium_line_t2_g3_g1_ParamLimits

0x25d2,	// (0x0007cbd7) list_medium_line_t2_g3_g1

0x37c9,	// (0x0007ddce) list_medium_line_t2_g3_g2_ParamLimits

0x37c9,	// (0x0007ddce) list_medium_line_t2_g3_g2

0x25de,	// (0x0007cbe3) list_medium_line_t2_g3_g3_ParamLimits

0x25de,	// (0x0007cbe3) list_medium_line_t2_g3_g3

0x0002,

0xfd80,	// (0x0008a385) list_medium_line_t2_g3_g_ParamLimits

0xfd80,	// (0x0008a385) list_medium_line_t2_g3_g

0xcdf8,	// (0x000873fd) list_medium_line_t2_g3_t1_ParamLimits

0xcdf8,	// (0x000873fd) list_medium_line_t2_g3_t1

0xce12,	// (0x00087417) list_medium_line_t2_g3_t2_ParamLimits

0xce12,	// (0x00087417) list_medium_line_t2_g3_t2

0x0001,

0xfd87,	// (0x0008a38c) list_medium_line_t2_g3_t_ParamLimits

0xfd87,	// (0x0008a38c) list_medium_line_t2_g3_t

0x25d2,	// (0x0007cbd7) list_medium_line_t3_g3_g1_ParamLimits

0x25d2,	// (0x0007cbd7) list_medium_line_t3_g3_g1

0x37c9,	// (0x0007ddce) list_medium_line_t3_g3_g2_ParamLimits

0x37c9,	// (0x0007ddce) list_medium_line_t3_g3_g2

0x25de,	// (0x0007cbe3) list_medium_line_t3_g3_g3_ParamLimits

0x25de,	// (0x0007cbe3) list_medium_line_t3_g3_g3

0x0002,

0xfd80,	// (0x0008a385) list_medium_line_t3_g3_g_ParamLimits

0xfd80,	// (0x0008a385) list_medium_line_t3_g3_g

0xce27,	// (0x0008742c) list_medium_line_t3_g3_t1_ParamLimits

0xce27,	// (0x0008742c) list_medium_line_t3_g3_t1

0xce3b,	// (0x00087440) list_medium_line_t3_g3_t2_ParamLimits

0xce3b,	// (0x00087440) list_medium_line_t3_g3_t2

0xce4d,	// (0x00087452) list_medium_line_t3_g3_t3_ParamLimits

0xce4d,	// (0x00087452) list_medium_line_t3_g3_t3

0x0002,

0xfd8c,	// (0x0008a391) list_medium_line_t3_g3_t_ParamLimits

0xfd8c,	// (0x0008a391) list_medium_line_t3_g3_t

0x36c5,	// (0x0007dcca) list_medium_line_right_iconx2_g1

0x359b,	// (0x0007dba0) list_medium_line_right_iconx2_g2

0x0001,

0xfd93,	// (0x0008a398) list_medium_line_right_iconx2_g

0x37ea,	// (0x0007ddef) list_medium_line_right_iconx2_t1

0x36c5,	// (0x0007dcca) list_medium_line_t2_right_iconx2_g1

0x359b,	// (0x0007dba0) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd93,	// (0x0008a398) list_medium_line_t2_right_iconx2_g

0xce5f,	// (0x00087464) list_medium_line_t2_right_iconx2_t1

0xce6f,	// (0x00087474) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd98,	// (0x0008a39d) list_medium_line_t2_right_iconx2_t

0x37f8,	// (0x0007ddfd) list_medium_line_x4_t4_t1

0xce7d,	// (0x00087482) list_medium_line_x4_t4_t2

0xce8d,	// (0x00087492) list_medium_line_x4_t4_t3

0xce9d,	// (0x000874a2) list_medium_line_x4_t4_t4

0x0003,

0xfd9d,	// (0x0008a3a2) list_medium_line_x4_t4_t

0xced6,	// (0x000874db) tport_appsw_pane_ParamLimits

0xced6,	// (0x000874db) tport_appsw_pane

0xcee2,	// (0x000874e7) tport_contact_pane_ParamLimits

0xcee2,	// (0x000874e7) tport_contact_pane

0xcef2,	// (0x000874f7) tport_listscroll_pane_ParamLimits

0xcef2,	// (0x000874f7) tport_listscroll_pane

0xcf02,	// (0x00087507) cell_tport_appsw_pane_ParamLimits

0xcf02,	// (0x00087507) cell_tport_appsw_pane

0x97bb,	// (0x00083dc0) tport_appsw_pane_g1_ParamLimits

0x97bb,	// (0x00083dc0) tport_appsw_pane_g1

0x3806,	// (0x0007de0b) tport_contact_pane_g1

0x2fd3,	// (0x0007d5d8) tport_contact_pane_t1

0x380f,	// (0x0007de14) tport_contact_pane_t2

0x0001,

0xfda6,	// (0x0008a3ab) tport_contact_pane_t

0x381d,	// (0x0007de22) list_tport_pane

0x3826,	// (0x0007de2b) scroll_pane_cp_030

0x3837,	// (0x0007de3c) cell_tport_appsw_pane_g1

0x3847,	// (0x0007de4c) cell_tport_appsw_pane_t1

0xdcdc,	// (0x000882e1) grid_highlight_pane_cp019

0xcf2d,	// (0x00087532) list_tport_double_graphic_pane_ParamLimits

0xcf2d,	// (0x00087532) list_tport_double_graphic_pane

0x066e,	// (0x0007ac73) list_highlight_pane_cp023_ParamLimits

0x066e,	// (0x0007ac73) list_highlight_pane_cp023

0xcf3f,	// (0x00087544) list_tport_double_graphic_pane_g1_ParamLimits

0xcf3f,	// (0x00087544) list_tport_double_graphic_pane_g1

0xcf4c,	// (0x00087551) list_tport_double_graphic_pane_t1_ParamLimits

0xcf4c,	// (0x00087551) list_tport_double_graphic_pane_t1

0xcf61,	// (0x00087566) list_tport_double_graphic_pane_t2_ParamLimits

0xcf61,	// (0x00087566) list_tport_double_graphic_pane_t2

0x0001,

0xfdb2,	// (0x0008a3b7) list_tport_double_graphic_pane_t_ParamLimits

0xfdb2,	// (0x0008a3b7) list_tport_double_graphic_pane_t

0xdcdc,	// (0x000882e1) main_cale_note_pane

0xaeef,	// (0x000854f4) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xaeef,	// (0x000854f4) cell_vitu2_function_top_wide_pane_cp01

0xc6ef,	// (0x00086cf4) wait_bar_pane_cp05_ParamLimits

0xdcdc,	// (0x000882e1) listscroll_cmail_pane

0x385d,	// (0x0007de62) list_cmail_pane

0xcf7d,	// (0x00087582) list_cmail_body_pane

0xcf9a,	// (0x0008759f) list_single_cmail_header_caption_pane

0xcfbf,	// (0x000875c4) list_single_cmail_header_detail_pane_ParamLimits

0xcfbf,	// (0x000875c4) list_single_cmail_header_detail_pane

0xcff2,	// (0x000875f7) list_single_cmail_header_caption_pane_t1

0xd000,	// (0x00087605) list_single_cmail_header_detail_pane_g1_ParamLimits

0xd000,	// (0x00087605) list_single_cmail_header_detail_pane_g1

0x4816,	// (0x0007ee1b) list_single_cmail_header_detail_pane_g2_ParamLimits

0x4816,	// (0x0007ee1b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb7,	// (0x0008a3bc) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb7,	// (0x0008a3bc) list_single_cmail_header_detail_pane_g

0x38a4,	// (0x0007dea9) list_single_cmail_header_detail_pane_t1_ParamLimits

0x38a4,	// (0x0007dea9) list_single_cmail_header_detail_pane_t1

0x38de,	// (0x0007dee3) list_single_cmail_header_editor_pane_bg_ParamLimits

0x38de,	// (0x0007dee3) list_single_cmail_header_editor_pane_bg

0x3162,	// (0x0007d767) list_cmail_body_pane_g1

0x38f0,	// (0x0007def5) list_cmail_body_pane_t1

0xeed5,	// (0x000894da) list_single_cmail_header_editor_pane_bg_g1

0xe87d,	// (0x00088e82) list_single_cmail_header_editor_pane_bg_g1_copy1

0xeee5,	// (0x000894ea) list_single_cmail_header_editor_pane_bg_g1_copy2

0xeedd,	// (0x000894e2) list_single_cmail_header_editor_pane_bg_g1_copy3

0x25ca,	// (0x0007cbcf) list_single_cmail_header_editor_pane_bg_g1_copy4

0xef05,	// (0x0008950a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xeef5,	// (0x000894fa) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xeefd,	// (0x00089502) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe85d,	// (0x00088e62) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd03a,	// (0x0008763f) calenote_gesture_pane_ParamLimits

0xd03a,	// (0x0008763f) calenote_gesture_pane

0xd054,	// (0x00087659) calenote_window_pane_ParamLimits

0xd054,	// (0x00087659) calenote_window_pane

0x38fe,	// (0x0007df03) popup_note_window_cp01

0xd06c,	// (0x00087671) calenote_swipe_1_pane_ParamLimits

0xd06c,	// (0x00087671) calenote_swipe_1_pane

0xcac7,	// (0x000870cc) calenote_swipe_2_pane_ParamLimits

0xcac7,	// (0x000870cc) calenote_swipe_2_pane

0x349c,	// (0x0007daa1) calenote_swipe_1_pane_g1_ParamLimits

0x349c,	// (0x0007daa1) calenote_swipe_1_pane_g1

0x34a9,	// (0x0007daae) calenote_swipe_1_pane_g2_ParamLimits

0x34a9,	// (0x0007daae) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x0008a2eb) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x0008a2eb) calenote_swipe_1_pane_g

0x3910,	// (0x0007df15) calenote_swipe_1_pane_t1_ParamLimits

0x3910,	// (0x0007df15) calenote_swipe_1_pane_t1

0x349c,	// (0x0007daa1) calenote_swipe_2_pane_g1_ParamLimits

0x349c,	// (0x0007daa1) calenote_swipe_2_pane_g1

0x392f,	// (0x0007df34) calenote_swipe_2_pane_g2_ParamLimits

0x392f,	// (0x0007df34) calenote_swipe_2_pane_g2

0x0001,

0xfdc3,	// (0x0008a3c8) calenote_swipe_2_pane_g_ParamLimits

0xfdc3,	// (0x0008a3c8) calenote_swipe_2_pane_g

0x393b,	// (0x0007df40) calenote_swipe_2_pane_t1_ParamLimits

0x393b,	// (0x0007df40) calenote_swipe_2_pane_t1

0xdcdc,	// (0x000882e1) main_mup_navstr_pane

0x9a65,	// (0x0008406a) main_mup3_pane_t7_ParamLimits

0x9a65,	// (0x0008406a) main_mup3_pane_t7

0xa654,	// (0x00084c59) main_mp4_pane_g6_ParamLimits

0xa654,	// (0x00084c59) main_mp4_pane_g6

0xa9d4,	// (0x00084fd9) main_image3_pane_t4_ParamLimits

0xa9d4,	// (0x00084fd9) main_image3_pane_t4

0xd07f,	// (0x00087684) popup_navstr_preview_pane_ParamLimits

0xd07f,	// (0x00087684) popup_navstr_preview_pane

0xd08b,	// (0x00087690) scroll_navstr_pane_ParamLimits

0xd08b,	// (0x00087690) scroll_navstr_pane

0xdcdc,	// (0x000882e1) bg_popup_preview_window_pane_cp04

0x3962,	// (0x0007df67) popup_navstr_preview_pane_t1

0xd097,	// (0x0008769c) scroll_navstr_pane_g1_ParamLimits

0xd097,	// (0x0008769c) scroll_navstr_pane_g1

0xd0a4,	// (0x000876a9) scroll_navstr_pane_t1_ParamLimits

0xd0a4,	// (0x000876a9) scroll_navstr_pane_t1

0x3907,	// (0x0007df0c) bg_button_pane_cp014

0x3907,	// (0x0007df0c) bg_button_pane_cp030

0xc9bb,	// (0x00086fc0) list_double_fisheye_pane_g4_ParamLimits

0xc9bb,	// (0x00086fc0) list_double_fisheye_pane_g4

0xc9c7,	// (0x00086fcc) list_double_fisheye_pane_g5_ParamLimits

0xc9c7,	// (0x00086fcc) list_double_fisheye_pane_g5

0x3865,	// (0x0007de6a) sp_fs_scroll_pane_cp03

0x35db,	// (0x0007dbe0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x35e7,	// (0x0007dbec) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x0008a308) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x35f3,	// (0x0007dbf8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcf73,	// (0x00087578) sp_fs_scroll_pane_cp02

0xe585,	// (0x00088b8a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe585,	// (0x00088b8a) popup_sp_fs_calendar_preview_list_single_pane

0xdcdc,	// (0x000882e1) main_cam6_pano_pane

0x066e,	// (0x0007ac73) main_mup3_pane_ParamLimits

0xdcdc,	// (0x000882e1) main_phacti_pane

0xc5c4,	// (0x00086bc9) bg_button_pane_cp11

0xc5dc,	// (0x00086be1) main_mobtv_info_pane_g2_ParamLimits

0xc5dc,	// (0x00086be1) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x0008a268) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x0008a268) main_mobtv_info_pane_g

0xc78e,	// (0x00086d93) sc_clock_pane_t5_ParamLimits

0xc78e,	// (0x00086d93) sc_clock_pane_t5

0xc82c,	// (0x00086e31) main_radioblah_pane_g1_ParamLimits

0x33e8,	// (0x0007d9ed) main_radioblah_pane_t3_ParamLimits

0x33e8,	// (0x0007d9ed) main_radioblah_pane_t3

0x3400,	// (0x0007da05) main_radioblah_pane_t4_ParamLimits

0x3400,	// (0x0007da05) main_radioblah_pane_t4

0xc84a,	// (0x00086e4f) main_radioblah_text_pane_ParamLimits

0xc84a,	// (0x00086e4f) main_radioblah_text_pane

0xc857,	// (0x00086e5c) main_radioblah_info_pane_g1_ParamLimits

0xc8ec,	// (0x00086ef1) main_radioblah_info_pane_t4_ParamLimits

0xc8ec,	// (0x00086ef1) main_radioblah_info_pane_t4

0x066e,	// (0x0007ac73) main_sp_fs_calendar_pane

0xd0b6,	// (0x000876bb) main_phacti_pane_g1

0xd0be,	// (0x000876c3) phacti_note_pane_ParamLimits

0xd0be,	// (0x000876c3) phacti_note_pane

0x3979,	// (0x0007df7e) phacti_term_pane_ParamLimits

0x3979,	// (0x0007df7e) phacti_term_pane

0x398e,	// (0x0007df93) phacti_note_pane_t1_ParamLimits

0x398e,	// (0x0007df93) phacti_note_pane_t1

0x39a5,	// (0x0007dfaa) phacti_term_pane_g1

0x39ad,	// (0x0007dfb2) phacti_term_pane_t1_ParamLimits

0x39ad,	// (0x0007dfb2) phacti_term_pane_t1

0x39d7,	// (0x0007dfdc) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe678,	// (0x00088c7d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdcd,	// (0x0008a3d2) popup_sp_fs_calendar_preview_list_single_pane_g

0x39df,	// (0x0007dfe4) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x39df,	// (0x0007dfe4) popup_sp_fs_calendar_preview_list_single_pane_t1

0x39f4,	// (0x0007dff9) aid_popup_sp_fs_bg_corner_pane

0x9189,	// (0x0008378e) popup_sp_fs_calendar_preview_bg_pane_g1

0xdcdc,	// (0x000882e1) popup_sp_fs_calendar_preview_bg_pane

0x39fc,	// (0x0007e001) popup_sp_fs_calendar_preview_list_pane

0x066e,	// (0x0007ac73) bg_main_sp_fs_cale_pane_ParamLimits

0x066e,	// (0x0007ac73) bg_main_sp_fs_cale_pane

0x3a0d,	// (0x0007e012) listscroll_cale_mrui_pane_ParamLimits

0x3a0d,	// (0x0007e012) listscroll_cale_mrui_pane

0x3a21,	// (0x0007e026) listscroll_sp_fs_schedule_track_pane

0x3a2a,	// (0x0007e02f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x3a2a,	// (0x0007e02f) main_sp_fs_ctrlbar_pane_cp01

0x3a3b,	// (0x0007e040) main_sp_fs_ribbon_pane

0x3a43,	// (0x0007e048) popup_sp_fs_cale_preview_window

0x3875,	// (0x0007de7a) list_single_sp_fs_schedule_track_pane_ParamLimits

0x3875,	// (0x0007de7a) list_single_sp_fs_schedule_track_pane

0x2523,	// (0x0007cb28) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2523,	// (0x0007cb28) bg_sp_fs_highlight_list_pane_cp03

0xd0fd,	// (0x00087702) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd0fd,	// (0x00087702) list_single_sp_fs_schedule_track_pane_g1

0xd109,	// (0x0008770e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd109,	// (0x0008770e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd2,	// (0x0008a3d7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd2,	// (0x0008a3d7) list_single_sp_fs_schedule_track_pane_g

0xd115,	// (0x0008771a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd115,	// (0x0008771a) list_single_sp_fs_schedule_track_pane_t1

0xd12d,	// (0x00087732) sp_fs_schedule_track_pane_ParamLimits

0xd12d,	// (0x00087732) sp_fs_schedule_track_pane

0x3a55,	// (0x0007e05a) sp_fs_schedule_track_pane_g1

0x3a5d,	// (0x0007e062) sp_fs_schedule_track_pane_g2

0x3a65,	// (0x0007e06a) sp_fs_schedule_track_pane_g3

0x3a6d,	// (0x0007e072) sp_fs_schedule_track_pane_g4

0x3a75,	// (0x0007e07a) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd7,	// (0x0008a3dc) sp_fs_schedule_track_pane_g

0xeed5,	// (0x000894da) bg_sp_fs_schedule_viewer_highlight_g1

0xe87d,	// (0x00088e82) bg_sp_fs_schedule_viewer_highlight_g2

0xeedd,	// (0x000894e2) bg_sp_fs_schedule_viewer_highlight_g3

0xeee5,	// (0x000894ea) bg_sp_fs_schedule_viewer_highlight_g4

0x25ca,	// (0x0007cbcf) bg_sp_fs_schedule_viewer_highlight_g5

0xeef5,	// (0x000894fa) bg_sp_fs_schedule_viewer_highlight_g6

0xeefd,	// (0x00089502) bg_sp_fs_schedule_viewer_highlight_g7

0xef05,	// (0x0008950a) bg_sp_fs_schedule_viewer_highlight_g8

0xe85d,	// (0x00088e62) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde2,	// (0x0008a3e7) bg_sp_fs_schedule_viewer_highlight_g

0xdcdc,	// (0x000882e1) bg_main_sp_fs_ribbon_pane

0xd13d,	// (0x00087742) main_sp_fs_ribbon_pane_g1

0x3a7d,	// (0x0007e082) main_sp_fs_ribbon_pane_t1

0xd146,	// (0x0008774b) main_sp_fs_ribbon_pane_t2

0x3a8c,	// (0x0007e091) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf5,	// (0x0008a3fa) main_sp_fs_ribbon_pane_t

0x3a9b,	// (0x0007e0a0) main_sp_fs_ribbon_scheduler_pane

0x3aa3,	// (0x0007e0a8) bg_main_sp_fs_ribbon_pane_g1

0x3aac,	// (0x0007e0b1) bg_main_sp_fs_ribbon_pane_g2

0x3ab5,	// (0x0007e0ba) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdfc,	// (0x0008a401) bg_main_sp_fs_ribbon_pane_g

0x3abd,	// (0x0007e0c2) main_sp_fs_ribbon_scheduler_pane_g1

0x3ac6,	// (0x0007e0cb) main_sp_fs_ribbon_scheduler_pane_g2

0x3acf,	// (0x0007e0d4) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe03,	// (0x0008a408) main_sp_fs_ribbon_scheduler_pane_g

0x3ad8,	// (0x0007e0dd) list_cale_mrui_pane

0xd155,	// (0x0008775a) sp_fs_scroll_pane_cp07_ParamLimits

0xd155,	// (0x0008775a) sp_fs_scroll_pane_cp07

0xd16b,	// (0x00087770) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd16b,	// (0x00087770) bg_sp_fs_schedule_viewer_highlight

0x3ae1,	// (0x0007e0e6) list_single_sp_fs_schedule_track_pane_cp01

0x3ae9,	// (0x0007e0ee) list_sp_fs_schedule_track_pane

0x3af1,	// (0x0007e0f6) sp_fs_scroll_pane_cp06_ParamLimits

0x3af1,	// (0x0007e0f6) sp_fs_scroll_pane_cp06

0x9189,	// (0x0008378e) bgmain_sp_fs_calendar_pane_g1

0xd178,	// (0x0008777d) list_single_cale_mrui_pane_ParamLimits

0xd178,	// (0x0008777d) list_single_cale_mrui_pane

0x3b03,	// (0x0007e108) list_single_cale_mrui_row_pane_ParamLimits

0x3b03,	// (0x0007e108) list_single_cale_mrui_row_pane

0x3b10,	// (0x0007e115) list_single_cale_mrui_row_pane_g1_ParamLimits

0x3b10,	// (0x0007e115) list_single_cale_mrui_row_pane_g1

0x3b48,	// (0x0007e14d) list_single_cale_mrui_row_pane_t1_ParamLimits

0x3b48,	// (0x0007e14d) list_single_cale_mrui_row_pane_t1

0xd19d,	// (0x000877a2) list_single_cale_mrui_row_pane_t2_ParamLimits

0xd19d,	// (0x000877a2) list_single_cale_mrui_row_pane_t2

0x3b5a,	// (0x0007e15f) list_single_cale_mrui_row_pane_t3_ParamLimits

0x3b5a,	// (0x0007e15f) list_single_cale_mrui_row_pane_t3

0x3b89,	// (0x0007e18e) list_single_cale_mrui_row_pane_t4_ParamLimits

0x3b89,	// (0x0007e18e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0f,	// (0x0008a414) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0f,	// (0x0008a414) list_single_cale_mrui_row_pane_t

0xd203,	// (0x00087808) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd203,	// (0x00087808) list_single_cmail_header_editor_pane_bg_cp01

0xd223,	// (0x00087828) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd223,	// (0x00087828) list_single_cmail_header_editor_pane_bg_cp02

0xd23f,	// (0x00087844) main_radioblah_text_pane_t1_ParamLimits

0xd23f,	// (0x00087844) main_radioblah_text_pane_t1

0x3bb8,	// (0x0007e1bd) cam6_indi_pane_cp01

0x3bc0,	// (0x0007e1c5) cam6_mode_pane_cp01

0x3bc8,	// (0x0007e1cd) cam6_pano_pane

0x3bd1,	// (0x0007e1d6) cam6_zoom_pane_cp01

0x3bd9,	// (0x0007e1de) cam6_pano_image_pane

0x3be4,	// (0x0007e1e9) cam6_pano_pane_g1

0x3162,	// (0x0007d767) cam6_pano_pane_g2

0x3bed,	// (0x0007e1f2) cam6_pano_pane_g3

0x3bf6,	// (0x0007e1fb) cam6_pano_pane_g4

0xea35,	// (0x0008903a) cam6_pano_pane_g5

0x3bff,	// (0x0007e204) cam6_pano_pane_g6

0x3c09,	// (0x0007e20e) cam6_pano_pane_g7

0x3c11,	// (0x0007e216) cam6_pano_pane_g8

0x3c1a,	// (0x0007e21f) cam6_pano_pane_g9

0x0008,

0xfe18,	// (0x0008a41d) cam6_pano_pane_g

0xdcdc,	// (0x000882e1) main_browser_tag_pane

0x395a,	// (0x0007df5f) grid_navstr_albumart_pane

0x3c25,	// (0x0007e22a) cell_navstr_albumart_pane_ParamLimits

0x3c25,	// (0x0007e22a) cell_navstr_albumart_pane

0x3c48,	// (0x0007e24d) cell_navstr_albumart_pane_g1

0x21c0,	// (0x0007c7c5) cell_navstr_albumart_pane_g2

0x21d0,	// (0x0007c7d5) cell_navstr_albumart_pane_g3

0x21c8,	// (0x0007c7cd) cell_navstr_albumart_pane_g4

0x0003,

0xfe2b,	// (0x0008a430) cell_navstr_albumart_pane_g

0xd25a,	// (0x0008785f) bt_list_pane_ParamLimits

0xd25a,	// (0x0008785f) bt_list_pane

0xd27a,	// (0x0008787f) bt_list_pane_t1

0xd289,	// (0x0008788e) bt_list_pane_t2

0x0001,

0xfe34,	// (0x0008a439) bt_list_pane_t

0xdcdc,	// (0x000882e1) main_cale_prevew_pane

0xd298,	// (0x0008789d) popup_cale_preview_window_ParamLimits

0xd298,	// (0x0008789d) popup_cale_preview_window

0x066e,	// (0x0007ac73) bg_popup_preview_window_pane_cp05_ParamLimits

0x066e,	// (0x0007ac73) bg_popup_preview_window_pane_cp05

0x3c50,	// (0x0007e255) list_cale_preview_pane_ParamLimits

0x3c50,	// (0x0007e255) list_cale_preview_pane

0x3f9e,	// (0x0007e5a3) list_double_cale_preview_pane_ParamLimits

0x3f9e,	// (0x0007e5a3) list_double_cale_preview_pane

0xd2b1,	// (0x000878b6) list_single_cale_preview_pane_ParamLimits

0xd2b1,	// (0x000878b6) list_single_cale_preview_pane

0xd2c7,	// (0x000878cc) list_single_cale_preview_pane_g1

0xd2cf,	// (0x000878d4) list_single_cale_preview_pane_t1_ParamLimits

0xd2cf,	// (0x000878d4) list_single_cale_preview_pane_t1

0xd2e4,	// (0x000878e9) list_double_cale_preview_pane_g1

0xd2ec,	// (0x000878f1) list_double_cale_preview_pane_t1_ParamLimits

0xd2ec,	// (0x000878f1) list_double_cale_preview_pane_t1

0xd301,	// (0x00087906) list_double_cale_preview_pane_t2_ParamLimits

0xd301,	// (0x00087906) list_double_cale_preview_pane_t2

0x0001,

0xfe39,	// (0x0008a43e) list_double_cale_preview_pane_t_ParamLimits

0xfe39,	// (0x0008a43e) list_double_cale_preview_pane_t

0xdcdc,	// (0x000882e1) main_ezdial_pane

0x066e,	// (0x0007ac73) main_sp_fs_email_pane_ParamLimits

0xcaff,	// (0x00087104) cmail_ddmenu_btn01_pane_ParamLimits

0xcaff,	// (0x00087104) cmail_ddmenu_btn01_pane

0xcb1c,	// (0x00087121) cmail_ddmenu_btn02_pane_ParamLimits

0xcb1c,	// (0x00087121) cmail_ddmenu_btn02_pane

0xcb3a,	// (0x0008713f) cmail_ddmenu_btn03_pane_ParamLimits

0xcb3a,	// (0x0008713f) cmail_ddmenu_btn03_pane

0xcb68,	// (0x0008716d) main_sp_fs_ctrlbar_pane_ParamLimits

0xcb84,	// (0x00087189) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcf7d,	// (0x00087582) list_cmail_body_pane_ParamLimits

0x388e,	// (0x0007de93) bg_button_pane_cp12

0x3897,	// (0x0007de9c) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3897,	// (0x0007de9c) list_single_cmail_header_detail_pane_g3

0xd016,	// (0x0008761b) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd016,	// (0x0008761b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdbe,	// (0x0008a3c3) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdbe,	// (0x0008a3c3) list_single_cmail_header_detail_pane_t

0x39c2,	// (0x0007dfc7) phacti_term_pane_t2_ParamLimits

0x39c2,	// (0x0007dfc7) phacti_term_pane_t2

0x0001,

0xfdc8,	// (0x0008a3cd) phacti_term_pane_t_ParamLimits

0xfdc8,	// (0x0008a3cd) phacti_term_pane_t

0x3c5c,	// (0x0007e261) aid_size_list_single_double

0xd319,	// (0x0008791e) popup_ezdial_listscroll_window

0xd339,	// (0x0008793e) popup_number_entry_window_cp01

0x0f55,	// (0x0007b55a) bg_popup_call_pane_cp09

0x3c68,	// (0x0007e26d) ezdial_list_pane

0x3c70,	// (0x0007e275) scroll_pane_cp23

0x4331,	// (0x0007e936) bg_button_pane_cp028_ParamLimits

0x4331,	// (0x0007e936) bg_button_pane_cp028

0xd347,	// (0x0008794c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd347,	// (0x0008794c) cmail_ddmenu_btn01_pane_g1

0xd357,	// (0x0008795c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd357,	// (0x0008795c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3e,	// (0x0008a443) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3e,	// (0x0008a443) cmail_ddmenu_btn01_pane_g

0x3c78,	// (0x0007e27d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3c78,	// (0x0007e27d) cmail_ddmenu_btn01_pane_t1

0x23a3,	// (0x0007c9a8) bg_button_pane_cp029_ParamLimits

0x23a3,	// (0x0007c9a8) bg_button_pane_cp029

0xd357,	// (0x0008795c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd357,	// (0x0008795c) cmail_ddmenu_btn02_pane_g1

0xd36f,	// (0x00087974) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd36f,	// (0x00087974) cmail_ddmenu_btn02_pane_t1

0x2523,	// (0x0007cb28) bg_button_pane_cp031_ParamLimits

0x2523,	// (0x0007cb28) bg_button_pane_cp031

0xd357,	// (0x0008795c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd357,	// (0x0008795c) cmail_ddmenu_btn03_pane_g1

0xd36f,	// (0x00087974) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd36f,	// (0x00087974) cmail_ddmenu_btn03_pane_t1

0xa871,	// (0x00084e76) cell_dialer2_keypad_pane_t1_ParamLimits

0xa88b,	// (0x00084e90) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa88b,	// (0x00084e90) cell_dialer2_keypad_pane_t1_copy1

0xc486,	// (0x00086a8b) ncimui_group_button_pane

0x066e,	// (0x0007ac73) main_sp_fs_calendar_pane_ParamLimits

0xcf9a,	// (0x0008759f) list_single_cmail_header_caption_pane_ParamLimits

0x3a04,	// (0x0007e009) aid_recal_txt_sm_pane

0xdcdc,	// (0x000882e1) mian_recal_day_pane

0x3a43,	// (0x0007e048) popup_sp_fs_cale_preview_window_ParamLimits

0xdcdc,	// (0x000882e1) list_recal_day_pane

0x3caf,	// (0x0007e2b4) list_single_recal_day_pane_ParamLimits

0x3caf,	// (0x0007e2b4) list_single_recal_day_pane

0x3cc1,	// (0x0007e2c6) list_single_recal_day_pane_g1_ParamLimits

0x3cc1,	// (0x0007e2c6) list_single_recal_day_pane_g1

0x3ccd,	// (0x0007e2d2) list_single_recal_day_pane_g2_ParamLimits

0x3ccd,	// (0x0007e2d2) list_single_recal_day_pane_g2

0x3cdc,	// (0x0007e2e1) list_single_recal_day_pane_g3_ParamLimits

0x3cdc,	// (0x0007e2e1) list_single_recal_day_pane_g3

0xd393,	// (0x00087998) list_single_recal_day_pane_g4_ParamLimits

0xd393,	// (0x00087998) list_single_recal_day_pane_g4

0x3ce8,	// (0x0007e2ed) list_single_recal_day_pane_g5_ParamLimits

0x3ce8,	// (0x0007e2ed) list_single_recal_day_pane_g5

0x3cf7,	// (0x0007e2fc) list_single_recal_day_pane_g6_ParamLimits

0x3cf7,	// (0x0007e2fc) list_single_recal_day_pane_g6

0x0005,

0xfe4d,	// (0x0008a452) list_single_recal_day_pane_g_ParamLimits

0xfe4d,	// (0x0008a452) list_single_recal_day_pane_g

0x3d03,	// (0x0007e308) list_single_recal_day_pane_t1

0x3d11,	// (0x0007e316) list_single_recal_day_pane_t2

0x0001,

0xfe5a,	// (0x0008a45f) list_single_recal_day_pane_t

0xd3a6,	// (0x000879ab) ncimui_query_button_pane_ParamLimits

0xd3a6,	// (0x000879ab) ncimui_query_button_pane

0xd3b6,	// (0x000879bb) ncimui_query_button_pane_t1_ParamLimits

0xd3b6,	// (0x000879bb) ncimui_query_button_pane_t1

0x3d1f,	// (0x0007e324) ncimui_query_button_pane_t2_ParamLimits

0x3d1f,	// (0x0007e324) ncimui_query_button_pane_t2

0x0001,

0xfe5f,	// (0x0008a464) ncimui_query_button_pane_t_ParamLimits

0xfe5f,	// (0x0008a464) ncimui_query_button_pane_t

0xd3c9,	// (0x000879ce) query_button_pane_ParamLimits

0xd3c9,	// (0x000879ce) query_button_pane

0xdcdc,	// (0x000882e1) bg_button_pane_cp0028

0x3d32,	// (0x0007e337) query_button_pane_t1

0x86a5,	// (0x00082caa) main_tport_pane_ParamLimits

0xcead,	// (0x000874b2) bg_popup_window_pane_cp01_ParamLimits

0xcead,	// (0x000874b2) bg_popup_window_pane_cp01

0xceba,	// (0x000874bf) heading_pane_cp08_ParamLimits

0xceba,	// (0x000874bf) heading_pane_cp08

0xcec8,	// (0x000874cd) heading_pane_cp07_ParamLimits

0xcec8,	// (0x000874cd) heading_pane_cp07

0x3837,	// (0x0007de3c) cell_tport_appsw_pane_g2

0x0002,

0xfdab,	// (0x0008a3b0) cell_tport_appsw_pane_g

0x7dc5,	// (0x000823ca) input_candi_list_open_g1

0x0937,	// (0x0007af3c) list_cale_time_pane_g6_ParamLimits

0x0937,	// (0x0007af3c) list_cale_time_pane_g6

0x94f0,	// (0x00083af5) aid_size_touch_calib_1_ParamLimits

0x94f0,	// (0x00083af5) aid_size_touch_calib_1

0x94fc,	// (0x00083b01) aid_size_touch_calib_2_ParamLimits

0x94fc,	// (0x00083b01) aid_size_touch_calib_2

0x950a,	// (0x00083b0f) aid_size_touch_calib_3_ParamLimits

0x950a,	// (0x00083b0f) aid_size_touch_calib_3

0x951a,	// (0x00083b1f) aid_size_touch_calib_4_ParamLimits

0x951a,	// (0x00083b1f) aid_size_touch_calib_4

0x9528,	// (0x00083b2d) main_touch_calib_button_group_pane_ParamLimits

0x9528,	// (0x00083b2d) main_touch_calib_button_group_pane

0x9536,	// (0x00083b3b) main_touch_calib_pane_g1_ParamLimits

0x9542,	// (0x00083b47) main_touch_calib_pane_g2_ParamLimits

0x954e,	// (0x00083b53) main_touch_calib_pane_g3_ParamLimits

0x955a,	// (0x00083b5f) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x00089d89) main_touch_calib_pane_g_ParamLimits

0x9566,	// (0x00083b6b) main_touch_calib_pane_t1_ParamLimits

0x957d,	// (0x00083b82) main_touch_calib_pane_t2_ParamLimits

0x9594,	// (0x00083b99) main_touch_calib_pane_t3_ParamLimits

0x95a8,	// (0x00083bad) main_touch_calib_pane_t4_ParamLimits

0x95bc,	// (0x00083bc1) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x00089d92) main_touch_calib_pane_t_ParamLimits

0x9ca8,	// (0x000842ad) list_single_fp_cale_pane_g3_ParamLimits

0x9ca8,	// (0x000842ad) list_single_fp_cale_pane_g3

0xacc5,	// (0x000852ca) bg_button_pane_cp012_ParamLimits

0xacc5,	// (0x000852ca) bg_vkb2_func_pane_cp03_ParamLimits

0xb677,	// (0x00085c7c) cell_vitu2_function_top_pane_g1_ParamLimits

0xacc5,	// (0x000852ca) bg_vkb2_func_pane_cp04_ParamLimits

0xc437,	// (0x00086a3c) main_ncimui_button_group_pane_ParamLimits

0xc437,	// (0x00086a3c) main_ncimui_button_group_pane

0xc474,	// (0x00086a79) main_ncimui_pane_t3_ParamLimits

0xc474,	// (0x00086a79) main_ncimui_pane_t3

0x3970,	// (0x0007df75) phacti_button_group_pane

0x3c5c,	// (0x0007e261) aid_size_list_single_double_ParamLimits

0xd319,	// (0x0008791e) popup_ezdial_listscroll_window_ParamLimits

0xd339,	// (0x0008793e) popup_number_entry_window_cp01_ParamLimits

0xd3d6,	// (0x000879db) phacti_button_pane_ParamLimits

0xd3d6,	// (0x000879db) phacti_button_pane

0xdcdc,	// (0x000882e1) bg_button_pane_cp14

0x3d40,	// (0x0007e345) phacti_button_pane_t1

0xd3e7,	// (0x000879ec) main_touch_calib_button_pane_ParamLimits

0xd3e7,	// (0x000879ec) main_touch_calib_button_pane

0xe481,	// (0x00088a86) bg_button_pane_cp18_ParamLimits

0xe481,	// (0x00088a86) bg_button_pane_cp18

0x3d4e,	// (0x0007e353) main_touch_calib_button_pane_t1_ParamLimits

0x3d4e,	// (0x0007e353) main_touch_calib_button_pane_t1

0x3d64,	// (0x0007e369) main_touch_calib_button_pane_t2_ParamLimits

0x3d64,	// (0x0007e369) main_touch_calib_button_pane_t2

0x0001,

0xfe64,	// (0x0008a469) main_touch_calib_button_pane_t_ParamLimits

0xfe64,	// (0x0008a469) main_touch_calib_button_pane_t

0xdcdc,	// (0x000882e1) cell_ncimui_button_pane

0xdcdc,	// (0x000882e1) bg_button_pane_cp032

0x3d82,	// (0x0007e387) cell_ncimui_button_pane_t1

0xa8e7,	// (0x00084eec) image3_infobar_pane_ParamLimits

0xa8e7,	// (0x00084eec) image3_infobar_pane

0xc7b0,	// (0x00086db5) fs_bigclock_status_pane_ParamLimits

0xc7b0,	// (0x00086db5) fs_bigclock_status_pane

0xc7bd,	// (0x00086dc2) main_fs_bigclock_clock_pane_ParamLimits

0xc7bd,	// (0x00086dc2) main_fs_bigclock_clock_pane

0xc7cd,	// (0x00086dd2) main_fs_bigclock_indi_pane_ParamLimits

0xc7cd,	// (0x00086dd2) main_fs_bigclock_indi_pane

0xc7fa,	// (0x00086dff) main_fs_bigclock_swipe_pane_ParamLimits

0xc7fa,	// (0x00086dff) main_fs_bigclock_swipe_pane

0xdcdc,	// (0x000882e1) main_fs_clock_dumped_data

0x326f,	// (0x0007d874) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x326f,	// (0x0007d874) list_single_fs_bigclock_indicator_pane_g1

0x328b,	// (0x0007d890) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x328b,	// (0x0007d890) list_single_fs_bigclock_indicator_pane_g2

0x32a5,	// (0x0007d8aa) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x32a5,	// (0x0007d8aa) list_single_fs_bigclock_indicator_pane_g3

0x32bf,	// (0x0007d8c4) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x32bf,	// (0x0007d8c4) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x0008a29c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x0008a29c) list_single_fs_bigclock_indicator_pane_g

0x32e5,	// (0x0007d8ea) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x32e5,	// (0x0007d8ea) list_single_fs_bigclock_indicator_pane_t1

0x330d,	// (0x0007d912) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x330d,	// (0x0007d912) list_single_fs_bigclock_indicator_pane_t2

0x3335,	// (0x0007d93a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3335,	// (0x0007d93a) list_single_fs_bigclock_indicator_pane_t3

0x335d,	// (0x0007d962) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x335d,	// (0x0007d962) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x0008a2a7) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x0008a2a7) list_single_fs_bigclock_indicator_pane_t

0x3d90,	// (0x0007e395) image3_infobar_fav_pane_ParamLimits

0x3d90,	// (0x0007e395) image3_infobar_fav_pane

0x3da0,	// (0x0007e3a5) image3_infobar_loc_pane_ParamLimits

0x3da0,	// (0x0007e3a5) image3_infobar_loc_pane

0x3db4,	// (0x0007e3b9) image3_infobar_time_pane_ParamLimits

0x3db4,	// (0x0007e3b9) image3_infobar_time_pane

0x9189,	// (0x0008378e) image3_infobar_time_pane_g1

0x3dc4,	// (0x0007e3c9) image3_infobar_time_pane_t1

0x9189,	// (0x0008378e) image3_infobar_loc_pane_g1

0x3dd2,	// (0x0007e3d7) image3_infobar_loc_pane_g2

0x0001,

0xfe69,	// (0x0008a46e) image3_infobar_loc_pane_g

0x3dda,	// (0x0007e3df) image3_infobar_loc_pane_t1

0x9189,	// (0x0008378e) image3_infobar_fav_pane_g1

0x3de8,	// (0x0007e3ed) image3_infobar_fav_pane_g2

0x0001,

0xfe6e,	// (0x0008a473) image3_infobar_fav_pane_g

0x3df0,	// (0x0007e3f5) fs_bigclock_status_battery_pane

0x3df9,	// (0x0007e3fe) fs_bigclock_status_signal_pane

0x3e02,	// (0x0007e407) fs_bigclock_status_title_pane

0x3e0b,	// (0x0007e410) fs_bigclock_status_signal_pane_g1

0x3e14,	// (0x0007e419) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe73,	// (0x0008a478) fs_bigclock_status_signal_pane_g

0x3e1c,	// (0x0007e421) fs_bigclock_status_battery_pane_g1

0x3e25,	// (0x0007e42a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe78,	// (0x0008a47d) fs_bigclock_status_battery_pane_g

0x3e2d,	// (0x0007e432) fs_bigclock_status_title_pane_t1

0x9189,	// (0x0008378e) main_fs_bigclock_clock_pane_g1

0x3e3b,	// (0x0007e440) main_fs_bigclock_clock_pane_g2

0x3e3b,	// (0x0007e440) main_fs_bigclock_clock_pane_g3

0x3e3b,	// (0x0007e440) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe7d,	// (0x0008a482) main_fs_bigclock_clock_pane_g

0x3e43,	// (0x0007e448) main_fs_bigclock_clock_pane_t1

0x3e51,	// (0x0007e456) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe86,	// (0x0008a48b) main_fs_bigclock_clock_pane_t

0x3e60,	// (0x0007e465) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3e60,	// (0x0007e465) list_single_fs_bigclock_indicator_pane

0xd3f9,	// (0x000879fe) list_single_fs_bigclock_pane_ParamLimits

0xd3f9,	// (0x000879fe) list_single_fs_bigclock_pane

0x3e7a,	// (0x0007e47f) main_fs_bigclock_indicator_pane_t1

0x3e89,	// (0x0007e48e) list_single_fs_bigclock_pane_g1

0x3e91,	// (0x0007e496) list_single_fs_bigclock_pane_t1

0x9189,	// (0x0008378e) main_fs_bigclock_swipe_pane_g1

0x3ecf,	// (0x0007e4d4) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe97,	// (0x0008a49c) main_fs_bigclock_swipe_pane_g

0x3ed7,	// (0x0007e4dc) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3ed7,	// (0x0007e4dc) main_fs_bigclock_swipe_pane_t1

0x7581,	// (0x00081b86) call_type_pane_ParamLimits

0xdcdc,	// (0x000882e1) main_btmg_pane

0x3b3c,	// (0x0007e141) list_single_cale_mrui_row_pane_g2_ParamLimits

0x3b3c,	// (0x0007e141) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0a,	// (0x0008a40f) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0a,	// (0x0008a40f) list_single_cale_mrui_row_pane_g

0x3c96,	// (0x0007e29b) list_recal_vselct_arw_lo_pane

0x3c9e,	// (0x0007e2a3) list_recal_vselct_arw_up_pane

0x3ca6,	// (0x0007e2ab) list_recal_vselct_pane

0x3ef4,	// (0x0007e4f9) btmg_button_pane

0xd45c,	// (0x00087a61) main_btmg_pane_g1

0xdcdc,	// (0x000882e1) bg_button_pane_cp044

0x3efe,	// (0x0007e503) btmg_button_pane_t1

0x239b,	// (0x0007c9a0) aid_listscroll_gen

0x066e,	// (0x0007ac73) main_cntbar_detail_pane

0x3855,	// (0x0007de5a) list_cmail_folder_pane

0x3865,	// (0x0007de6a) sp_fs_scroll_pane_cp03_ParamLimits

0xd464,	// (0x00087a69) list_single_fs_dyc_pane_cp01_ParamLimits

0xd464,	// (0x00087a69) list_single_fs_dyc_pane_cp01

0x3f0c,	// (0x0007e511) aid_size_cmail_indent

0x4822,	// (0x0007ee27) list_single_dyc_row_pane_cp01

0xd4a6,	// (0x00087aab) cntbar_detail_list_pane_ParamLimits

0xd4a6,	// (0x00087aab) cntbar_detail_list_pane

0xd4e0,	// (0x00087ae5) main_cntbar_detail_cont_pane_ParamLimits

0xd4e0,	// (0x00087ae5) main_cntbar_detail_cont_pane

0x751b,	// (0x00081b20) scroll_pane_cp032_ParamLimits

0x751b,	// (0x00081b20) scroll_pane_cp032

0xd4ec,	// (0x00087af1) cntbar_detail_list_event_pane_ParamLimits

0xd4ec,	// (0x00087af1) cntbar_detail_list_event_pane

0xd4b2,	// (0x00087ab7) cntbar_detail_list_shct_pane

0xe8cb,	// (0x00088ed0) aid_list_gen

0x3f15,	// (0x0007e51a) aid_scroll

0x3f1e,	// (0x0007e523) aid_size_touch_scroll_bar

0xd500,	// (0x00087b05) aid_list_double

0x3f27,	// (0x0007e52c) aid_list_single

0xd509,	// (0x00087b0e) aid_list_single_lg

0x3f30,	// (0x0007e535) aid_list_z_g_a_sm

0x482b,	// (0x0007ee30) aid_list_z_g_d

0x3f38,	// (0x0007e53d) aid_txt_z_prm

0xd512,	// (0x00087b17) aid_txt_z_prm_cp01

0xd520,	// (0x00087b25) aid_txt_z_sec

0xd52e,	// (0x00087b33) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd52e,	// (0x00087b33) main_cntbar_detail_cont_pane_g1

0xd53b,	// (0x00087b40) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd53b,	// (0x00087b40) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe9c,	// (0x0008a4a1) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe9c,	// (0x0008a4a1) main_cntbar_detail_cont_pane_g

0x3f46,	// (0x0007e54b) main_cntbar_detail_cont_pane_t1

0x3f54,	// (0x0007e559) main_cntbar_detail_cont_pane_t2

0x3f62,	// (0x0007e567) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea1,	// (0x0008a4a6) main_cntbar_detail_cont_pane_t

0xd547,	// (0x00087b4c) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd547,	// (0x00087b4c) cell_cntbar_detail_list_shct_pane

0x3f70,	// (0x0007e575) cntbar_detail_list_shct_pane_g1

0x3f79,	// (0x0007e57e) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea8,	// (0x0008a4ad) cntbar_detail_list_shct_pane_g

0xd55b,	// (0x00087b60) cntbar_detail_list_event_pane_g1_ParamLimits

0xd55b,	// (0x00087b60) cntbar_detail_list_event_pane_g1

0xd567,	// (0x00087b6c) cntbar_detail_list_event_pane_g2_ParamLimits

0xd567,	// (0x00087b6c) cntbar_detail_list_event_pane_g2

0x0005,

0xfead,	// (0x0008a4b2) cntbar_detail_list_event_pane_g_ParamLimits

0xfead,	// (0x0008a4b2) cntbar_detail_list_event_pane_g

0xd5d3,	// (0x00087bd8) cntbar_detail_list_event_pane_t1_ParamLimits

0xd5d3,	// (0x00087bd8) cntbar_detail_list_event_pane_t1

0xd5e8,	// (0x00087bed) cntbar_detail_list_event_pane_t2_ParamLimits

0xd5e8,	// (0x00087bed) cntbar_detail_list_event_pane_t2

0x0002,

0xfeba,	// (0x0008a4bf) cntbar_detail_list_event_pane_t_ParamLimits

0xfeba,	// (0x0008a4bf) cntbar_detail_list_event_pane_t

0x9189,	// (0x0008378e) cell_cntbar_detail_list_shct_pane_g1

0x790f,	// (0x00081f14) navi_pane_mv_g3

0x066e,	// (0x0007ac73) main_cntbar_detail_pane_ParamLimits

0xdcdc,	// (0x000882e1) main_notif_wgt_pane

0xa59b,	// (0x00084ba0) aid_tch_main_mp4_pane_g4

0xa7d0,	// (0x00084dd5) popup_slider_window_cp02

0x3c8d,	// (0x0007e292) list_recal_day_event_pane

0xd486,	// (0x00087a8b) cntbar_detail_btn_pane_ParamLimits

0xd486,	// (0x00087a8b) cntbar_detail_btn_pane

0xd496,	// (0x00087a9b) cntbar_detail_btn_pane_cp01_ParamLimits

0xd496,	// (0x00087a9b) cntbar_detail_btn_pane_cp01

0xd4b2,	// (0x00087ab7) cntbar_detail_list_shct_pane_ParamLimits

0xd4be,	// (0x00087ac3) cntbar_detail_pane_g1_ParamLimits

0xd4be,	// (0x00087ac3) cntbar_detail_pane_g1

0xd4ca,	// (0x00087acf) cntbar_detail_pane_t1_ParamLimits

0xd4ca,	// (0x00087acf) cntbar_detail_pane_t1

0xd573,	// (0x00087b78) cntbar_detail_list_event_pane_g3_ParamLimits

0xd573,	// (0x00087b78) cntbar_detail_list_event_pane_g3

0xd58b,	// (0x00087b90) cntbar_detail_list_event_pane_g4_ParamLimits

0xd58b,	// (0x00087b90) cntbar_detail_list_event_pane_g4

0xd5a3,	// (0x00087ba8) cntbar_detail_list_event_pane_g5_ParamLimits

0xd5a3,	// (0x00087ba8) cntbar_detail_list_event_pane_g5

0xd5bb,	// (0x00087bc0) cntbar_detail_list_event_pane_g6_ParamLimits

0xd5bb,	// (0x00087bc0) cntbar_detail_list_event_pane_g6

0xd5fd,	// (0x00087c02) cntbar_detail_list_event_pane_t3_ParamLimits

0xd5fd,	// (0x00087c02) cntbar_detail_list_event_pane_t3

0xd60f,	// (0x00087c14) popup_notif_wgt_window_ParamLimits

0xd60f,	// (0x00087c14) popup_notif_wgt_window

0xd61f,	// (0x00087c24) popup_submenu_window_cp01_ParamLimits

0xd61f,	// (0x00087c24) popup_submenu_window_cp01

0x0f55,	// (0x0007b55a) bg_popup_window_pane_cp10

0x3f82,	// (0x0007e587) listscroll_notif_wgt_pane

0x3f8c,	// (0x0007e591) list_notif_wgt_window

0x3f95,	// (0x0007e59a) scroll_pane_cp033

0x3f9e,	// (0x0007e5a3) list_notif_wgt_row_pane_ParamLimits

0x3f9e,	// (0x0007e5a3) list_notif_wgt_row_pane

0x3fb0,	// (0x0007e5b5) aid_size_list_notif_wgt_del

0x3fb9,	// (0x0007e5be) list_notif_wgt_row_pane_g1

0x3fc1,	// (0x0007e5c6) list_notif_wgt_row_pane_g2

0x3fc9,	// (0x0007e5ce) list_notif_wgt_row_pane_g3

0x0002,

0xfec1,	// (0x0008a4c6) list_notif_wgt_row_pane_g

0x3fd2,	// (0x0007e5d7) list_notif_wgt_row_pane_t1

0x3fe0,	// (0x0007e5e5) list_notif_wgt_row_pane_t2

0x3fee,	// (0x0007e5f3) list_notif_wgt_row_pane_t3

0x0002,

0xfec8,	// (0x0008a4cd) list_notif_wgt_row_pane_t

0x25ea,	// (0x0007cbef) list_recal_day_event_pane_g1

0x3ffc,	// (0x0007e601) list_recal_day_event_pane_t1

0xdcdc,	// (0x000882e1) bg_button_pane_cp045

0x400b,	// (0x0007e610) cntbar_detail_btn_pane_t1

0x23a3,	// (0x0007c9a8) main_callh_pane_ParamLimits

0x23a3,	// (0x0007c9a8) main_callh_pane

0xdcdc,	// (0x000882e1) main_coverflow0_pane

0xdcdc,	// (0x000882e1) main_wgtman_pane

0xc812,	// (0x00086e17) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc812,	// (0x00086e17) main_fs_bigclock_unlock_btn_pane

0x382f,	// (0x0007de34) bg_button_pane_cp16

0x383f,	// (0x0007de44) cell_tport_appsw_pane_g3

0xd62d,	// (0x00087c32) cf0_flow_pane_ParamLimits

0xd62d,	// (0x00087c32) cf0_flow_pane

0x4019,	// (0x0007e61e) listscroll_cf0_pane

0x4022,	// (0x0007e627) main_cf0_pane_g1

0xd63c,	// (0x00087c41) main_cf0_pane_t1_ParamLimits

0xd63c,	// (0x00087c41) main_cf0_pane_t1

0xd650,	// (0x00087c55) main_cf0_pane_t2_ParamLimits

0xd650,	// (0x00087c55) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x0008a4d4) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x0008a4d4) main_cf0_pane_t

0x402c,	// (0x0007e631) scroll_pane_cp11

0xd664,	// (0x00087c69) cf0_flow_pane_g1

0xd66c,	// (0x00087c71) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x0008a4d9) cf0_flow_pane_g

0xd674,	// (0x00087c79) cf0_flow_pane_t1

0xdcdc,	// (0x000882e1) main_call6_pane

0xdcdc,	// (0x000882e1) main_calllock_pane

0xd682,	// (0x00087c87) call6_btn_grp_pane_ParamLimits

0xd682,	// (0x00087c87) call6_btn_grp_pane

0xd691,	// (0x00087c96) call6_pane_g1_ParamLimits

0xd691,	// (0x00087c96) call6_pane_g1

0xd6a0,	// (0x00087ca5) popup_call6_1st_window_ParamLimits

0xd6a0,	// (0x00087ca5) popup_call6_1st_window

0xd6ae,	// (0x00087cb3) popup_call6_2nd_window_ParamLimits

0xd6ae,	// (0x00087cb3) popup_call6_2nd_window

0xd6bc,	// (0x00087cc1) cell_call6_btn_pane_ParamLimits

0xd6bc,	// (0x00087cc1) cell_call6_btn_pane

0x0f55,	// (0x0007b55a) bg_popup_call2_in_pane_cp03

0x4037,	// (0x0007e63c) popup_call6_1st_window_g1

0x403f,	// (0x0007e644) popup_call6_1st_window_g2

0x4047,	// (0x0007e64c) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x0008a4de) popup_call6_1st_window_g

0x404f,	// (0x0007e654) popup_call6_1st_window_t1

0x405e,	// (0x0007e663) popup_call6_1st_window_t2

0x406e,	// (0x0007e673) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x0008a4e5) popup_call6_1st_window_t

0x0f55,	// (0x0007b55a) bg_popup_call2_in_pane_cp04

0x4037,	// (0x0007e63c) popup_call6_2nd_window_g1

0x403f,	// (0x0007e644) popup_call6_2nd_window_g2

0x4047,	// (0x0007e64c) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x0008a4de) popup_call6_2nd_window_g

0x404f,	// (0x0007e654) popup_call6_2nd_window_t1

0xdcdc,	// (0x000882e1) bg_button_pane_cp15

0x407e,	// (0x0007e683) cell_call6_btn_pane_g1

0x4087,	// (0x0007e68c) cell_call6_btn_pane_t1

0xd6cb,	// (0x00087cd0) listscroll_wgtman_pane_ParamLimits

0xd6cb,	// (0x00087cd0) listscroll_wgtman_pane

0xd6e9,	// (0x00087cee) wgtman_btn_pane_ParamLimits

0xd6e9,	// (0x00087cee) wgtman_btn_pane

0x0e0c,	// (0x0007b411) aid_scroll_copy1

0x4096,	// (0x0007e69b) list_wgtman_pane

0xd71e,	// (0x00087d23) wgtman_btn_pane_g1_ParamLimits

0xd71e,	// (0x00087d23) wgtman_btn_pane_g1

0xd746,	// (0x00087d4b) wgtman_btn_pane_t1_ParamLimits

0xd746,	// (0x00087d4b) wgtman_btn_pane_t1

0x40a0,	// (0x0007e6a5) wgtman_btn_pane_t2_ParamLimits

0x40a0,	// (0x0007e6a5) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x0008a4ec) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x0008a4ec) wgtman_btn_pane_t

0xd77d,	// (0x00087d82) listrow_wgtman_pane_ParamLimits

0xd77d,	// (0x00087d82) listrow_wgtman_pane

0xd798,	// (0x00087d9d) listrow_wgtman_pane_g1

0xd7a1,	// (0x00087da6) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x0008a4f1) listrow_wgtman_pane_g

0xd7ab,	// (0x00087db0) listrow_wgtman_pane_t1

0xd7b9,	// (0x00087dbe) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x0008a4f6) listrow_wgtman_pane_t

0xd7c7,	// (0x00087dcc) wait_bar_pane_cp09

0x40b7,	// (0x0007e6bc) main_calllock_btn_pane

0x40c1,	// (0x0007e6c6) main_calllock_pane_g1

0xdcdc,	// (0x000882e1) bg_button_pane_cp17

0x40cd,	// (0x0007e6d2) main_calllock_btn_pane_g1

0x40d6,	// (0x0007e6db) main_calllock_btn_pane_t1

0xdcdc,	// (0x000882e1) main_dialer3_pane

0xdcdc,	// (0x000882e1) main_fmrd2_pane

0x9189,	// (0x0008378e) main_fs_bigclock_unlock_btn_pane_g1

0x40ed,	// (0x0007e6f2) main_fs_bigclock_unlock_btn_pane_t1

0xd7cf,	// (0x00087dd4) area_fmrd2_info_pane_ParamLimits

0xd7cf,	// (0x00087dd4) area_fmrd2_info_pane

0xd7dd,	// (0x00087de2) area_fmrd2_visual_pane_ParamLimits

0xd7dd,	// (0x00087de2) area_fmrd2_visual_pane

0xd7eb,	// (0x00087df0) fmrd2_indi_pane_ParamLimits

0xd7eb,	// (0x00087df0) fmrd2_indi_pane

0xd7f8,	// (0x00087dfd) area_fmrd2_visual_pane_g1

0xd800,	// (0x00087e05) area_fmrd2_visual_pane_t1

0xd810,	// (0x00087e15) area_fmrd2_visual_pane_t2

0xd820,	// (0x00087e25) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x0008a500) area_fmrd2_visual_pane_t

0xd830,	// (0x00087e35) area_fmrd2_info_pane_g1

0xd838,	// (0x00087e3d) area_fmrd2_info_pane_t1

0xd848,	// (0x00087e4d) area_fmrd2_info_pane_t2

0xd858,	// (0x00087e5d) area_fmrd2_info_pane_t3

0xd868,	// (0x00087e6d) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x0008a507) area_fmrd2_info_pane_t

0xd876,	// (0x00087e7b) fmrd2_indi_pane_t1

0xd886,	// (0x00087e8b) fmrd2_indi_pane_t2

0xd896,	// (0x00087e9b) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x0008a510) fmrd2_indi_pane_t

0x32ce,	// (0x0007d8d3) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x32ce,	// (0x0007d8d3) list_single_fs_bigclock_indicator_pane_g5

0x3372,	// (0x0007d977) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3372,	// (0x0007d977) list_single_fs_bigclock_indicator_pane_t5

0xd0d4,	// (0x000876d9) aid_cell_bcale_month_pane_ParamLimits

0xd0d4,	// (0x000876d9) aid_cell_bcale_month_pane

0xd0e0,	// (0x000876e5) bcale_month_pane_ParamLimits

0xd0e0,	// (0x000876e5) bcale_month_pane

0xd0ee,	// (0x000876f3) bcale_preview_pane_ParamLimits

0xd0ee,	// (0x000876f3) bcale_preview_pane

0x3e91,	// (0x0007e496) list_single_fs_bigclock_pane_t1_ParamLimits

0x3eab,	// (0x0007e4b0) list_single_fs_bigclock_pane_t2_ParamLimits

0x3eab,	// (0x0007e4b0) list_single_fs_bigclock_pane_t2

0x0001,

0xfe92,	// (0x0008a497) list_single_fs_bigclock_pane_t_ParamLimits

0xfe92,	// (0x0008a497) list_single_fs_bigclock_pane_t

0x40e5,	// (0x0007e6ea) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x0008a4fb) main_fs_bigclock_unlock_btn_pane_g

0xd8a4,	// (0x00087ea9) aid_dia3_key_size_ParamLimits

0xd8a4,	// (0x00087ea9) aid_dia3_key_size

0xd8b0,	// (0x00087eb5) aid_dia3_listrow_size_ParamLimits

0xd8b0,	// (0x00087eb5) aid_dia3_listrow_size

0xd8c0,	// (0x00087ec5) dia3_keypad_fun_pane_ParamLimits

0xd8c0,	// (0x00087ec5) dia3_keypad_fun_pane

0xd8d2,	// (0x00087ed7) dia3_keypad_num_pane_ParamLimits

0xd8d2,	// (0x00087ed7) dia3_keypad_num_pane

0xd8e4,	// (0x00087ee9) dia3_listscroll_pane_ParamLimits

0xd8e4,	// (0x00087ee9) dia3_listscroll_pane

0xd8f2,	// (0x00087ef7) dia3_numentry_pane_ParamLimits

0xd8f2,	// (0x00087ef7) dia3_numentry_pane

0x40fb,	// (0x0007e700) dia3_list_pane

0x4106,	// (0x0007e70b) scroll_pane_cp12

0xdcdc,	// (0x000882e1) bg_dia3_numentry_pane

0xd900,	// (0x00087f05) dia3_numentry_pane_t1

0xd90f,	// (0x00087f14) cell_dia3_key_num_pane

0xd917,	// (0x00087f1c) cell_dia3_key0_fun_pane_ParamLimits

0xd917,	// (0x00087f1c) cell_dia3_key0_fun_pane

0xd924,	// (0x00087f29) cell_dia3_key1_fun_pane_ParamLimits

0xd924,	// (0x00087f29) cell_dia3_key1_fun_pane

0xd931,	// (0x00087f36) dia3_listrow_pane

0x2fee,	// (0x0007d5f3) bg_dia3_numentry_pane_g1

0xdcdc,	// (0x000882e1) bg_button_pane_cp21

0x4111,	// (0x0007e716) cell_dia3_key_num_pane_t1

0x411f,	// (0x0007e724) cell_dia3_key_num_pane_t2

0x412e,	// (0x0007e733) cell_dia3_key_num_pane_t3

0x413d,	// (0x0007e742) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x0008a517) cell_dia3_key_num_pane_t

0xdcdc,	// (0x000882e1) bg_button_pane_cp19

0xd93e,	// (0x00087f43) cell_dia3_key0_fun_pane_g1

0xdcdc,	// (0x000882e1) bg_button_pane_cp20

0xd946,	// (0x00087f4b) cell_dia3_key1_fun_pane_g1

0xd94e,	// (0x00087f53) area_left_week_number_pane

0x4822,	// (0x0007ee27) area_top_day_name_pane

0xd957,	// (0x00087f5c) frame_month_view_pane

0xd961,	// (0x00087f66) grid_month_view_pane

0xd96b,	// (0x00087f70) cell_top_day_name_pane_ParamLimits

0xd96b,	// (0x00087f70) cell_top_day_name_pane

0xd985,	// (0x00087f8a) cell_area_left_week_number_pane_ParamLimits

0xd985,	// (0x00087f8a) cell_area_left_week_number_pane

0xd999,	// (0x00087f9e) cell_month_view_pane_ParamLimits

0xd999,	// (0x00087f9e) cell_month_view_pane

0x414c,	// (0x0007e751) frm_month_g1

0xd9b6,	// (0x00087fbb) frm_month_g2

0xd9c0,	// (0x00087fc5) frm_month_g3

0xd9ca,	// (0x00087fcf) frm_month_g4

0xd9d4,	// (0x00087fd9) frm_month_g5

0xd9de,	// (0x00087fe3) frm_month_g6

0xd9e8,	// (0x00087fed) frm_month_g7

0x4155,	// (0x0007e75a) frm_month_g8

0xd9f2,	// (0x00087ff7) frm_month_g9

0xd9fb,	// (0x00088000) frm_month_g10

0xda04,	// (0x00088009) frm_month_g11

0xda0d,	// (0x00088012) frm_month_g12

0xda16,	// (0x0008801b) frm_month_g13

0xda1f,	// (0x00088024) frm_month_g14

0xda28,	// (0x0008802d) frm_month_g15

0xda33,	// (0x00088038) frm_month_g16

0x000f,

0xff1b,	// (0x0008a520) frm_month_g

0xda3e,	// (0x00088043) cell_top_day_name_pane_t1

0xda4d,	// (0x00088052) cell_area_left_week_number_pane_g1

0xda3e,	// (0x00088043) cell_area_left_week_number_pane_t1

0x9189,	// (0x0008378e) cell_month_view_pane_g1

0xda55,	// (0x0008805a) cell_month_view_pane_t1

0xdcdc,	// (0x000882e1) main_fps_pane

0x35a3,	// (0x0007dba8) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x35a3,	// (0x0007dba8) cmail_ddmenu_btn02_pane_cp1

0x35bf,	// (0x0007dbc4) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x35bf,	// (0x0007dbc4) cmail_ddmenu_btn02_pane_cp2

0xd363,	// (0x00087968) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd363,	// (0x00087968) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe43,	// (0x0008a448) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe43,	// (0x0008a448) cmail_ddmenu_btn02_pane_g

0xd381,	// (0x00087986) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd381,	// (0x00087986) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe48,	// (0x0008a44d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe48,	// (0x0008a44d) cmail_ddmenu_btn02_pane_t

0xda64,	// (0x00088069) fps_text_pane_ParamLimits

0xda64,	// (0x00088069) fps_text_pane

0xda71,	// (0x00088076) main_fps_pane_g1_ParamLimits

0xda71,	// (0x00088076) main_fps_pane_g1

0xda7f,	// (0x00088084) wait_bar_pane_cp010_ParamLimits

0xda7f,	// (0x00088084) wait_bar_pane_cp010

0xda8b,	// (0x00088090) fps_text_pane_t1_ParamLimits

0xda8b,	// (0x00088090) fps_text_pane_t1

0xabb4,	// (0x000851b9) cam4_image_uncrop_pane_g1

0xabbd,	// (0x000851c2) cam4_image_uncrop_pane_g2

0xabc6,	// (0x000851cb) cam4_image_uncrop_pane_g3

0xabcf,	// (0x000851d4) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x00089f21) cam4_image_uncrop_pane_g

0xd931,	// (0x00087f36) dia3_listrow_pane_ParamLimits

0xdcdc,	// (0x000882e1) main_phob2_pane

0xcf0f,	// (0x00087514) cell_tport_appsw_pane_cp02_ParamLimits

0xcf0f,	// (0x00087514) cell_tport_appsw_pane_cp02

0xcf1e,	// (0x00087523) cell_tport_appsw_pane_cp03_ParamLimits

0xcf1e,	// (0x00087523) cell_tport_appsw_pane_cp03

0xdcdc,	// (0x000882e1) phob2_contact_card_pane

0xdcdc,	// (0x000882e1) phob2_listscroll_pane

0xdaa4,	// (0x000880a9) phob2_list_pane

0xdaac,	// (0x000880b1) scroll_pane_cp034

0xdab4,	// (0x000880b9) phob2_cc_data_pane_ParamLimits

0xdab4,	// (0x000880b9) phob2_cc_data_pane

0xdace,	// (0x000880d3) phob2_cc_listscroll_pane_ParamLimits

0xdace,	// (0x000880d3) phob2_cc_listscroll_pane

0xdae8,	// (0x000880ed) list_double_large_graphic_phob2_pane_ParamLimits

0xdae8,	// (0x000880ed) list_double_large_graphic_phob2_pane

0xdb06,	// (0x0008810b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xdb06,	// (0x0008810b) list_double_large_graphic_phob2_pane_g1

0x415e,	// (0x0007e763) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x415e,	// (0x0007e763) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x0008a541) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x0008a541) list_double_large_graphic_phob2_pane_g

0x416a,	// (0x0007e76f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x416a,	// (0x0007e76f) list_double_large_graphic_phob2_pane_t1

0x417f,	// (0x0007e784) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x417f,	// (0x0007e784) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x0008a546) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x0008a546) list_double_large_graphic_phob2_pane_t

0xdcdc,	// (0x000882e1) list_highlight_pane_cp024

0xdb13,	// (0x00088118) phob2_cc_button_pane

0xdb1b,	// (0x00088120) phob2_cc_data_pane_g1_ParamLimits

0xdb1b,	// (0x00088120) phob2_cc_data_pane_g1

0xdb27,	// (0x0008812c) phob2_cc_data_pane_g2_ParamLimits

0xdb27,	// (0x0008812c) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x0008a54b) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x0008a54b) phob2_cc_data_pane_g

0xdb33,	// (0x00088138) phob2_cc_data_pane_t1_ParamLimits

0xdb33,	// (0x00088138) phob2_cc_data_pane_t1

0xdb45,	// (0x0008814a) phob2_cc_data_pane_t2_ParamLimits

0xdb45,	// (0x0008814a) phob2_cc_data_pane_t2

0xdb57,	// (0x0008815c) phob2_cc_data_pane_t3_ParamLimits

0xdb57,	// (0x0008815c) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x0008a550) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x0008a550) phob2_cc_data_pane_t

0xdb69,	// (0x0008816e) phob2_cc_list_pane_ParamLimits

0xdb69,	// (0x0008816e) phob2_cc_list_pane

0xdb75,	// (0x0008817a) scroll_pane_cp035_ParamLimits

0xdb75,	// (0x0008817a) scroll_pane_cp035

0x066e,	// (0x0007ac73) bg_button_pane_cp033

0xdb81,	// (0x00088186) phob2_cc_button_pane_g1

0xdb8d,	// (0x00088192) phob2_cc_button_pane_t1

0xdba2,	// (0x000881a7) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x0008a557) phob2_cc_button_pane_t

0xdbb4,	// (0x000881b9) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xdbb4,	// (0x000881b9) list_double_large_graphic_phob2_cc_pane

0xdbdb,	// (0x000881e0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xdbdb,	// (0x000881e0) list_double_large_graphic_phob2_cc_pane_g1

0xdbec,	// (0x000881f1) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xdbec,	// (0x000881f1) list_double_large_graphic_phob2_cc_pane_g2

0xdbfb,	// (0x00088200) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xdbfb,	// (0x00088200) list_double_large_graphic_phob2_cc_pane_g3

0xdc0a,	// (0x0008820f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xdc0a,	// (0x0008820f) list_double_large_graphic_phob2_cc_pane_g4

0xdc1b,	// (0x00088220) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xdc1b,	// (0x00088220) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x0008a55c) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x0008a55c) list_double_large_graphic_phob2_cc_pane_g

0xdc2a,	// (0x0008822f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xdc2a,	// (0x0008822f) list_double_large_graphic_phob2_cc_pane_t1

0xdc53,	// (0x00088258) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xdc53,	// (0x00088258) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x0008a567) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x0008a567) list_double_large_graphic_phob2_cc_pane_t

0xdc7c,	// (0x00088281) list_highlight_pane_cp025_ParamLimits

0xdc7c,	// (0x00088281) list_highlight_pane_cp025

0x066e,	// (0x0007ac73) bg_button_pane_cp033_ParamLimits

0xdb81,	// (0x00088186) phob2_cc_button_pane_g1_ParamLimits

0xdb8d,	// (0x00088192) phob2_cc_button_pane_t1_ParamLimits

0xdba2,	// (0x000881a7) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x0008a557) phob2_cc_button_pane_t_ParamLimits

0x59bf,	// (0x0007ffc4) popup_wgtman_window

0xefef,	// (0x000895f4) scroll_pane_cp038

0xd706,	// (0x00087d0b) wgtman_btn_pane_cp_01_ParamLimits

0xd706,	// (0x00087d0b) wgtman_btn_pane_cp_01

0xdc8a,	// (0x0008828f) wgtman_content_pane

0xdc93,	// (0x00088298) wgtman_heading_pane

0xdcdc,	// (0x000882e1) bg_heading_pane_cp02

0xdc9c,	// (0x000882a1) wgtman_heading_pane_g1

0xdca4,	// (0x000882a9) wgtman_heading_pane_t1

0xdcb2,	// (0x000882b7) scroll_pane_cp036

0xdcba,	// (0x000882bf) wgtman_list_pane

0xdcc2,	// (0x000882c7) wgtman_list_pane_t1_ParamLimits

0xdcc2,	// (0x000882c7) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
