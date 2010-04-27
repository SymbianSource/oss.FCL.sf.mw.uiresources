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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000a4dce };

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
0x0221,	// (0x000a4fef) Screen

0x022d,	// (0x000a4ffb) application_window

0x0295,	// (0x000a5063) area_bottom_pane_ParamLimits

0x0295,	// (0x000a5063) area_bottom_pane

0x02f2,	// (0x000a50c0) area_top_pane_ParamLimits

0x02f2,	// (0x000a50c0) area_top_pane

0x9516,	// (0x000ae2e4) call_video_uplink_pane_ParamLimits

0x9516,	// (0x000ae2e4) call_video_uplink_pane

0x0380,	// (0x000a514e) main_pane_ParamLimits

0x0380,	// (0x000a514e) main_pane

0xbbf3,	// (0x000b09c1) context_pane

0x3a00,	// (0x000a87ce) navi_pane

0x3a32,	// (0x000a8800) popup_cale_events_window_ParamLimits

0x3a32,	// (0x000a8800) popup_cale_events_window

0xbc06,	// (0x000b09d4) popup_mup_playback_window

0x3a4a,	// (0x000a8818) signal_pane

0xedc2,	// (0x000b3b90) main_browser_pane

0x96ee,	// (0x000ae4bc) main_burst_pane

0x374e,	// (0x000a851c) main_calc_pane

0xbbcb,	// (0x000b0999) main_cale_day_pane

0x3762,	// (0x000a8530) main_cale_month_pane

0xbbcb,	// (0x000b0999) main_cale_week_pane

0x96ee,	// (0x000ae4bc) main_call_pane

0xeaa2,	// (0x000b3870) main_call_poc_pane

0x96ee,	// (0x000ae4bc) main_camera_pane

0x96ee,	// (0x000ae4bc) main_chi_dic_pane

0xa54a,	// (0x000af318) main_clock_pane

0xeaa2,	// (0x000b3870) main_fmradio_pane

0x96ee,	// (0x000ae4bc) main_graph_messa_pane

0xeaa2,	// (0x000b3870) main_help_pane

0xedc2,	// (0x000b3b90) main_im_pane

0xecfd,	// (0x000b3acb) main_image_pane_ParamLimits

0xecfd,	// (0x000b3acb) main_image_pane

0xeaa2,	// (0x000b3870) main_location2_pane

0x96ee,	// (0x000ae4bc) main_location_pane

0xecfd,	// (0x000b3acb) main_messa_pane

0xeaa2,	// (0x000b3870) main_mp2_pane

0x96ee,	// (0x000ae4bc) main_mp_pane

0xeaa2,	// (0x000b3870) main_msg_pane

0xeaa2,	// (0x000b3870) main_mup_eq_pane

0xeaa2,	// (0x000b3870) main_mup_pane

0xedc2,	// (0x000b3b90) main_notes_pane

0xeaa2,	// (0x000b3870) main_pec_pane

0xeaa2,	// (0x000b3870) main_phob_pane

0xeaa2,	// (0x000b3870) main_pinb_pane

0xeaa2,	// (0x000b3870) main_postcard_pane

0xeaa2,	// (0x000b3870) main_qdial_pane

0x96ee,	// (0x000ae4bc) main_skin_pane

0xeaa2,	// (0x000b3870) main_smil2_pane

0x96ee,	// (0x000ae4bc) main_smil_pane

0x96ee,	// (0x000ae4bc) main_video_pane

0x96ee,	// (0x000ae4bc) main_video_tele_pane

0xecfd,	// (0x000b3acb) main_viewer_pane_ParamLimits

0xecfd,	// (0x000b3acb) main_viewer_pane

0x96ee,	// (0x000ae4bc) main_vorec_pane

0x37b4,	// (0x000a8582) popup_blid_sat_info_window_ParamLimits

0x37b4,	// (0x000a8582) popup_blid_sat_info_window

0x380c,	// (0x000a85da) popup_dyc_status_message_window_ParamLimits

0x380c,	// (0x000a85da) popup_dyc_status_message_window

0x3826,	// (0x000a85f4) popup_grid_large_graphic_window_ParamLimits

0x3826,	// (0x000a85f4) popup_grid_large_graphic_window

0x38e2,	// (0x000a86b0) popup_loc_request_window_ParamLimits

0x38e2,	// (0x000a86b0) popup_loc_request_window

0x39d8,	// (0x000a87a6) popup_wml_address_window_ParamLimits

0x39d8,	// (0x000a87a6) popup_wml_address_window

0x3588,	// (0x000a8356) call_muted_g1

0x323d,	// (0x000a800b) popup_call_audio_conf_window_ParamLimits

0x323d,	// (0x000a800b) popup_call_audio_conf_window

0x359c,	// (0x000a836a) popup_call_audio_first_window_ParamLimits

0x359c,	// (0x000a836a) popup_call_audio_first_window

0x3612,	// (0x000a83e0) popup_call_audio_in_window_ParamLimits

0x3612,	// (0x000a83e0) popup_call_audio_in_window

0x364e,	// (0x000a841c) popup_call_audio_out_window_ParamLimits

0x364e,	// (0x000a841c) popup_call_audio_out_window

0x3688,	// (0x000a8456) popup_call_audio_second_window_ParamLimits

0x3688,	// (0x000a8456) popup_call_audio_second_window

0x36de,	// (0x000a84ac) popup_call_audio_wait_window_ParamLimits

0x36de,	// (0x000a84ac) popup_call_audio_wait_window

0x3713,	// (0x000a84e1) popup_number_entry_window_ParamLimits

0x3713,	// (0x000a84e1) popup_number_entry_window

0xe68f,	// (0x000b345d) bg_popup_call_pane_cp05_ParamLimits

0xe68f,	// (0x000b345d) bg_popup_call_pane_cp05

0xe6af,	// (0x000b347d) popup_number_entry_window_t1

0xe6c2,	// (0x000b3490) popup_number_entry_window_t2

0xe6d4,	// (0x000b34a2) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000b3e98) popup_number_entry_window_t

0xe6e6,	// (0x000b34b4) text_title_cp2

0xe6f9,	// (0x000b34c7) bg_popup_call_pane_cp_ParamLimits

0xe6f9,	// (0x000b34c7) bg_popup_call_pane_cp

0xe707,	// (0x000b34d5) call_thumbnail_pane

0xe70f,	// (0x000b34dd) popup_call_audio_in_window_g1_ParamLimits

0xe70f,	// (0x000b34dd) popup_call_audio_in_window_g1

0xe71b,	// (0x000b34e9) popup_call_audio_in_window_g2_ParamLimits

0xe71b,	// (0x000b34e9) popup_call_audio_in_window_g2

0xe727,	// (0x000b34f5) popup_call_audio_in_window_g3_ParamLimits

0xe727,	// (0x000b34f5) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000b3ea1) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000b3ea1) popup_call_audio_in_window_g

0xe733,	// (0x000b3501) popup_call_audio_in_window_t1_ParamLimits

0xe733,	// (0x000b3501) popup_call_audio_in_window_t1

0xe74f,	// (0x000b351d) popup_call_audio_in_window_t2_ParamLimits

0xe74f,	// (0x000b351d) popup_call_audio_in_window_t2

0xe76b,	// (0x000b3539) popup_call_audio_in_window_t3_ParamLimits

0xe76b,	// (0x000b3539) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000b3ea8) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000b3ea8) popup_call_audio_in_window_t

0xe6f9,	// (0x000b34c7) bg_popup_call_pane_cp01_ParamLimits

0xe6f9,	// (0x000b34c7) bg_popup_call_pane_cp01

0xe707,	// (0x000b34d5) call_thumbnail_pane_cp02

0xe77e,	// (0x000b354c) call_type_pane_cp022

0xe786,	// (0x000b3554) popup_call_audio_out_window_g1_ParamLimits

0xe786,	// (0x000b3554) popup_call_audio_out_window_g1

0xe798,	// (0x000b3566) popup_call_audio_out_window_g2_ParamLimits

0xe798,	// (0x000b3566) popup_call_audio_out_window_g2

0xe7a4,	// (0x000b3572) popup_call_audio_out_window_g3_ParamLimits

0xe7a4,	// (0x000b3572) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000b3eaf) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000b3eaf) popup_call_audio_out_window_g

0xe7b6,	// (0x000b3584) popup_call_audio_out_window_t1_ParamLimits

0xe7b6,	// (0x000b3584) popup_call_audio_out_window_t1

0xe7ce,	// (0x000b359c) popup_call_audio_out_window_t2_ParamLimits

0xe7ce,	// (0x000b359c) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000b3eb6) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000b3eb6) popup_call_audio_out_window_t

0xe7e3,	// (0x000b35b1) bg_popup_call_pane_ParamLimits

0xe7e3,	// (0x000b35b1) bg_popup_call_pane

0x053c,	// (0x000a530a) call_thumbnail_pane_cp_ParamLimits

0x053c,	// (0x000a530a) call_thumbnail_pane_cp

0xe867,	// (0x000b3635) call_type_pane_cp01_ParamLimits

0xe867,	// (0x000b3635) call_type_pane_cp01

0xe8ab,	// (0x000b3679) popup_call_audio_first_window_g1_ParamLimits

0xe8ab,	// (0x000b3679) popup_call_audio_first_window_g1

0xe8f7,	// (0x000b36c5) popup_call_audio_first_window_g2_ParamLimits

0xe8f7,	// (0x000b36c5) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000b3ebb) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000b3ebb) popup_call_audio_first_window_g

0xe93b,	// (0x000b3709) popup_call_audio_first_window_t1_ParamLimits

0xe93b,	// (0x000b3709) popup_call_audio_first_window_t1

0xe9e7,	// (0x000b37b5) popup_call_audio_first_window_t4_ParamLimits

0xe9e7,	// (0x000b37b5) popup_call_audio_first_window_t4

0xea73,	// (0x000b3841) popup_call_audio_first_window_t5_ParamLimits

0xea73,	// (0x000b3841) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000b3ec0) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000b3ec0) popup_call_audio_first_window_t

0xeaa2,	// (0x000b3870) bg_popup_call_pane_cp02

0xeaac,	// (0x000b387a) call_type_pane_cp023

0xeab4,	// (0x000b3882) popup_call_audio_wait_window_g1

0xeabc,	// (0x000b388a) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000b3ec7) popup_call_audio_wait_window_g

0xeac4,	// (0x000b3892) popup_call_audio_wait_window_t3

0xead2,	// (0x000b38a0) bg_popup_call_pane_cp03_ParamLimits

0xead2,	// (0x000b38a0) bg_popup_call_pane_cp03

0xeb32,	// (0x000b3900) call_thumbnail_pane_cp011_ParamLimits

0xeb32,	// (0x000b3900) call_thumbnail_pane_cp011

0xeb3e,	// (0x000b390c) call_type_pane_cp034_ParamLimits

0xeb3e,	// (0x000b390c) call_type_pane_cp034

0xeb7a,	// (0x000b3948) popup_call_audio_second_window_g1_ParamLimits

0xeb7a,	// (0x000b3948) popup_call_audio_second_window_g1

0xebb6,	// (0x000b3984) popup_call_audio_second_window_g2_ParamLimits

0xebb6,	// (0x000b3984) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000b3ecc) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000b3ecc) popup_call_audio_second_window_g

0xebf2,	// (0x000b39c0) popup_call_audio_second_window_t1_ParamLimits

0xebf2,	// (0x000b39c0) popup_call_audio_second_window_t1

0xec73,	// (0x000b3a41) popup_call_audio_second_window_t2_ParamLimits

0xec73,	// (0x000b3a41) popup_call_audio_second_window_t2

0xeca9,	// (0x000b3a77) popup_call_audio_second_window_t3_ParamLimits

0xeca9,	// (0x000b3a77) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000b3ed1) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000b3ed1) popup_call_audio_second_window_t

0xeaa2,	// (0x000b3870) bg_popup_call_pane_cp04

0xecdf,	// (0x000b3aad) list_conf_pane

0xece7,	// (0x000b3ab5) popup_call_audio_conf_window_t1

0xecf5,	// (0x000b3ac3) call_thumbnail_pane_g1

0xecfd,	// (0x000b3acb) bg_pinb_pane_ParamLimits

0xecfd,	// (0x000b3acb) bg_pinb_pane

0xed0b,	// (0x000b3ad9) find_pinb_pane

0xed14,	// (0x000b3ae2) listscroll_pinb_pane_ParamLimits

0xed14,	// (0x000b3ae2) listscroll_pinb_pane

0xed23,	// (0x000b3af1) pinb_bg_pane_g1

0x0560,	// (0x000a532e) pinb_bg_pane_g2

0x056c,	// (0x000a533a) pinb_bg_pane_g3

0x0578,	// (0x000a5346) pinb_bg_pane_g4

0x0584,	// (0x000a5352) pinb_bg_pane_g5

0x0590,	// (0x000a535e) pinb_bg_pane_g6

0x059b,	// (0x000a5369) pinb_bg_pane_g7

0x05a6,	// (0x000a5374) pinb_bg_pane_g8

0x05b1,	// (0x000a537f) pinb_bg_pane_g9

0x05bb,	// (0x000a5389) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x000b3ed8) pinb_bg_pane_g

0x05d8,	// (0x000a53a6) grid_pinb_pane

0x05e1,	// (0x000a53af) list_pinb_pane

0x05ea,	// (0x000a53b8) scroll_pane_cp01_ParamLimits

0x05ea,	// (0x000a53b8) scroll_pane_cp01

0xed2d,	// (0x000b3afb) find_pinb_pane_g1_ParamLimits

0xed2d,	// (0x000b3afb) find_pinb_pane_g1

0xed45,	// (0x000b3b13) find_pinb_pane_t1

0xed57,	// (0x000b3b25) find_pinb_pane_t2

0x0001,

0xf124,	// (0x000b3ef2) find_pinb_pane_t

0xed6c,	// (0x000b3b3a) input_focus_pane_cp01_ParamLimits

0xed6c,	// (0x000b3b3a) input_focus_pane_cp01

0x05fc,	// (0x000a53ca) cell_pinb_pane_ParamLimits

0x05fc,	// (0x000a53ca) cell_pinb_pane

0x0625,	// (0x000a53f3) cell_pinb_pane_g1_ParamLimits

0x0625,	// (0x000a53f3) cell_pinb_pane_g1

0x0635,	// (0x000a5403) cell_pinb_pane_g2_ParamLimits

0x0635,	// (0x000a5403) cell_pinb_pane_g2

0xed78,	// (0x000b3b46) cell_pinb_pane_g3_ParamLimits

0xed78,	// (0x000b3b46) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x000b3ef7) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x000b3ef7) cell_pinb_pane_g

0xeaa2,	// (0x000b3870) grid_highlight_pane_cp01

0x0641,	// (0x000a540f) list_pinb_item_pane_ParamLimits

0x0641,	// (0x000a540f) list_pinb_item_pane

0xeaa2,	// (0x000b3870) list_highlight_pane_cp02

0x0653,	// (0x000a5421) list_pinb_item_pane_g1_ParamLimits

0x0653,	// (0x000a5421) list_pinb_item_pane_g1

0x0660,	// (0x000a542e) list_pinb_item_pane_g2_ParamLimits

0x0660,	// (0x000a542e) list_pinb_item_pane_g2

0x066c,	// (0x000a543a) list_pinb_item_pane_g3_ParamLimits

0x066c,	// (0x000a543a) list_pinb_item_pane_g3

0x067d,	// (0x000a544b) list_pinb_item_pane_g4_ParamLimits

0x067d,	// (0x000a544b) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x000b3efe) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x000b3efe) list_pinb_item_pane_g

0x0689,	// (0x000a5457) list_pinb_item_pane_t1_ParamLimits

0x0689,	// (0x000a5457) list_pinb_item_pane_t1

0x06be,	// (0x000a548c) calc_display_pane

0x06e6,	// (0x000a54b4) calc_paper_pane

0x0709,	// (0x000a54d7) grid_calc_pane

0xeaa2,	// (0x000b3870) bg_list_pane_cp01

0x0737,	// (0x000a5505) clock_g1

0x073f,	// (0x000a550d) clock_g2

0x0001,

0xf139,	// (0x000b3f07) clock_g

0x0747,	// (0x000a5515) clock_t1_ParamLimits

0x0747,	// (0x000a5515) clock_t1

0x075c,	// (0x000a552a) clock_t2_ParamLimits

0x075c,	// (0x000a552a) clock_t2

0x076e,	// (0x000a553c) clock_t3_ParamLimits

0x076e,	// (0x000a553c) clock_t3

0x0780,	// (0x000a554e) clock_t4_ParamLimits

0x0780,	// (0x000a554e) clock_t4

0x0792,	// (0x000a5560) clock_t5_ParamLimits

0x0792,	// (0x000a5560) clock_t5

0x07a7,	// (0x000a5575) clock_t6_ParamLimits

0x07a7,	// (0x000a5575) clock_t6

0x07b9,	// (0x000a5587) clock_t7_ParamLimits

0x07b9,	// (0x000a5587) clock_t7

0x07cb,	// (0x000a5599) clock_t8_ParamLimits

0x07cb,	// (0x000a5599) clock_t8

0x07df,	// (0x000a55ad) clock_t9_ParamLimits

0x07df,	// (0x000a55ad) clock_t9

0x0008,

0xf13e,	// (0x000b3f0c) clock_t_ParamLimits

0xf13e,	// (0x000b3f0c) clock_t

0xed84,	// (0x000b3b52) popup_clock_analogue_window_cp02

0xed84,	// (0x000b3b52) popup_clock_digital_window_cp01

0xed8c,	// (0x000b3b5a) listscroll_help_pane

0xeaa2,	// (0x000b3870) phob_pre_status_pane

0xed96,	// (0x000b3b64) grid_qdial_pane

0xecfd,	// (0x000b3acb) listscroll_mce_pane

0xecfd,	// (0x000b3acb) bg_notes_pane

0xeda0,	// (0x000b3b6e) list_notes_pane

0x07f3,	// (0x000a55c1) scroll_pane_cp06

0xedae,	// (0x000b3b7c) bg_calc_paper_pane

0x9554,	// (0x000ae322) list_calc_pane

0xedc2,	// (0x000b3b90) bg_calc_display_pane

0x0807,	// (0x000a55d5) calc_display_pane_t1

0x0819,	// (0x000a55e7) calc_display_pane_t2

0x956e,	// (0x000ae33c) calc_display_pane_t3

0x0002,

0xf151,	// (0x000b3f1f) calc_display_pane_t

0x082b,	// (0x000a55f9) cell_calc_pane_ParamLimits

0x082b,	// (0x000a55f9) cell_calc_pane

0xedce,	// (0x000b3b9c) bg_calc_paper_pane_g1

0xedda,	// (0x000b3ba8) bg_calc_paper_pane_g2

0xede6,	// (0x000b3bb4) bg_calc_paper_pane_g3

0xedf2,	// (0x000b3bc0) bg_calc_paper_pane_g4

0xedfe,	// (0x000b3bcc) bg_calc_paper_pane_g5

0x0860,	// (0x000a562e) bg_calc_paper_pane_g6

0x086f,	// (0x000a563d) bg_calc_paper_pane_g7

0x087e,	// (0x000a564c) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000b3f26) bg_calc_paper_pane_g

0x0891,	// (0x000a565f) calc_bg_paper_pane_g9

0x08a4,	// (0x000a5672) list_calc_item_pane_ParamLimits

0x08a4,	// (0x000a5672) list_calc_item_pane

0xee0a,	// (0x000b3bd8) list_calc_item_pane_g1

0x9580,	// (0x000ae34e) list_calc_item_pane_t1_ParamLimits

0x9580,	// (0x000ae34e) list_calc_item_pane_t1

0x08b9,	// (0x000a5687) list_calc_item_pane_t2_ParamLimits

0x08b9,	// (0x000a5687) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000b3f37) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000b3f37) list_calc_item_pane_t

0xee17,	// (0x000b3be5) cell_calc_pane_g1

0xee21,	// (0x000b3bef) grid_highlight_pane_cp02

0x08eb,	// (0x000a56b9) bg_calc_display_pane_g1

0x08f4,	// (0x000a56c2) bg_calc_display_pane_g2

0x08fe,	// (0x000a56cc) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000b3f41) bg_calc_display_pane_g

0x0907,	// (0x000a56d5) cell_qdial_pane_ParamLimits

0x0907,	// (0x000a56d5) cell_qdial_pane

0x091b,	// (0x000a56e9) cell_qdial_pane_g1_ParamLimits

0x091b,	// (0x000a56e9) cell_qdial_pane_g1

0x0931,	// (0x000a56ff) cell_qdial_pane_g2_ParamLimits

0x0931,	// (0x000a56ff) cell_qdial_pane_g2

0xee43,	// (0x000b3c11) cell_qdial_pane_g3_ParamLimits

0xee43,	// (0x000b3c11) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000b3f48) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000b3f48) cell_qdial_pane_g

0x0958,	// (0x000a5726) cell_qdial_pane_t1_ParamLimits

0x0958,	// (0x000a5726) cell_qdial_pane_t1

0x0970,	// (0x000a573e) cell_qdial_pane_t2_ParamLimits

0x0970,	// (0x000a573e) cell_qdial_pane_t2

0x0983,	// (0x000a5751) cell_qdial_pane_t3_ParamLimits

0x0983,	// (0x000a5751) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000b3f51) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000b3f51) cell_qdial_pane_t

0xeaa2,	// (0x000b3870) grid_highlight_pane_cp04

0xee4f,	// (0x000b3c1d) thumbnail_qdial_pane_ParamLimits

0xee4f,	// (0x000b3c1d) thumbnail_qdial_pane

0x95ca,	// (0x000ae398) list_help_pane

0x95d3,	// (0x000ae3a1) scroll_pane_cp02

0x0996,	// (0x000a5764) help_list_pane_t1_ParamLimits

0x0996,	// (0x000a5764) help_list_pane_t1

0x95dc,	// (0x000ae3aa) bg_notes_pane_g2

0x95e4,	// (0x000ae3b2) bg_notes_pane_g3

0x95ec,	// (0x000ae3ba) notes_bg_pane_g1

0x95f4,	// (0x000ae3c2) notes_bg_pane_g4

0x95fc,	// (0x000ae3ca) notes_bg_pane_g5

0x9604,	// (0x000ae3d2) notes_bg_pane_g6

0x960c,	// (0x000ae3da) notes_bg_pane_g7

0x9614,	// (0x000ae3e2) notes_bg_pane_g8

0x961c,	// (0x000ae3ea) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000b3f6f) notes_bg_pane_g

0x09b3,	// (0x000a5781) list_notes_text_pane_ParamLimits

0x09b3,	// (0x000a5781) list_notes_text_pane

0x9624,	// (0x000ae3f2) list_notes_text_pane_g1

0x09c8,	// (0x000a5796) list_notes_text_pane_t1

0x09d6,	// (0x000a57a4) listscroll_cale_week_pane

0x0a02,	// (0x000a57d0) bg_cale_heading_pane

0x9647,	// (0x000ae415) bg_cale_pane_cp01

0x0a1a,	// (0x000a57e8) cale_week_corner_pane

0x0a39,	// (0x000a5807) cale_week_day_heading_pane

0x0a56,	// (0x000a5824) cale_week_scroll_pane_g1

0x0a69,	// (0x000a5837) cale_week_scroll_pane_g2

0x0a81,	// (0x000a584f) cale_week_scroll_pane_g3

0x0a99,	// (0x000a5867) cale_week_scroll_pane_g4

0x0ab1,	// (0x000a587f) cale_week_scroll_pane_g5

0x0ad1,	// (0x000a589f) cale_week_scroll_pane_g6

0x0af1,	// (0x000a58bf) cale_week_scroll_pane_g7

0x0b11,	// (0x000a58df) cale_week_scroll_pane_g8

0x0b35,	// (0x000a5903) cale_week_scroll_pane_g9

0x0b4d,	// (0x000a591b) cale_week_scroll_pane_g10

0x0b65,	// (0x000a5933) cale_week_scroll_pane_g11

0x0b7d,	// (0x000a594b) cale_week_scroll_pane_g12

0x0b95,	// (0x000a5963) cale_week_scroll_pane_g13

0x0b95,	// (0x000a5963) cale_week_scroll_pane_g14

0x0b95,	// (0x000a5963) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000b3f7e) cale_week_scroll_pane_g

0x0bd1,	// (0x000a599f) cale_week_time_pane

0x0bf5,	// (0x000a59c3) grid_cale_week_pane

0x9676,	// (0x000ae444) scroll_pane_cp08

0x0c1b,	// (0x000a59e9) cell_cale_week_pane_ParamLimits

0x0c1b,	// (0x000a59e9) cell_cale_week_pane

0x0ca9,	// (0x000a5a77) cale_week_day_heading_pane_t1

0x0cee,	// (0x000a5abc) cale_week_day_heading_pane_t2

0x0d38,	// (0x000a5b06) cale_week_day_heading_pane_t3

0x0d82,	// (0x000a5b50) cale_week_day_heading_pane_t4

0x0dcc,	// (0x000a5b9a) cale_week_day_heading_pane_t5

0x0e1e,	// (0x000a5bec) cale_week_day_heading_pane_t6

0x0e70,	// (0x000a5c3e) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000b3f9f) cale_week_day_heading_pane_t

0x9693,	// (0x000ae461) bg_cale_side_pane

0x0eb5,	// (0x000a5c83) cale_week_time_pane_t1

0x0ecf,	// (0x000a5c9d) cale_week_time_pane_t2

0x0ee9,	// (0x000a5cb7) cale_week_time_pane_t3

0x0f03,	// (0x000a5cd1) cale_week_time_pane_t4

0x0f1d,	// (0x000a5ceb) cale_week_time_pane_t5

0x0f37,	// (0x000a5d05) cale_week_time_pane_t6

0x0f51,	// (0x000a5d1f) cale_week_time_pane_t7

0x0f6b,	// (0x000a5d39) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000b3fae) cale_week_time_pane_t

0x0f8b,	// (0x000a5d59) cell_cale_week_pane_g2

0x0faa,	// (0x000a5d78) cell_cale_week_pane_g3_ParamLimits

0x0faa,	// (0x000a5d78) cell_cale_week_pane_g3

0x96a1,	// (0x000ae46f) grid_highlight_pane_cp07

0x96a9,	// (0x000ae477) listscroll_gms_pane

0x96b3,	// (0x000ae481) grid_gms_pane

0x96bc,	// (0x000ae48a) listscroll_gms_pane_g1

0x96c4,	// (0x000ae492) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000b3fbf) listscroll_gms_pane_g

0x0fc2,	// (0x000a5d90) scroll_pane_cp010

0x0fcd,	// (0x000a5d9b) cell_gms_pane_ParamLimits

0x0fcd,	// (0x000a5d9b) cell_gms_pane

0x0fe0,	// (0x000a5dae) cell_gms_pane_g1

0x96cc,	// (0x000ae49a) cell_gms_pane_g2

0x96d4,	// (0x000ae4a2) cell_gms_pane_g3

0x96dd,	// (0x000ae4ab) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000b3fc4) cell_gms_pane_g

0x96e6,	// (0x000ae4b4) grid_highlight_pane_cp09

0x3532,	// (0x000a8300) phob_pre_status_pane_g1

0x353a,	// (0x000a8308) phob_pre_status_pane_g2

0x3542,	// (0x000a8310) phob_pre_status_pane_g3

0x354a,	// (0x000a8318) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x000b43af) phob_pre_status_pane_g

0x355a,	// (0x000a8328) phob_pre_status_pane_t1

0x3568,	// (0x000a8336) phob_pre_status_pane_t2

0x3578,	// (0x000a8346) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x000b43ba) phob_pre_status_pane_t

0x96ee,	// (0x000ae4bc) bg_list_pane_cp05

0x0ff0,	// (0x000a5dbe) grid_vorec_pane

0x0ff8,	// (0x000a5dc6) vorec_t1

0x1006,	// (0x000a5dd4) vorec_t2

0x1014,	// (0x000a5de2) vorec_t3

0x1022,	// (0x000a5df0) vorec_t4

0x94f0,	// (0x000ae2be) vorec_t5

0x94fe,	// (0x000ae2cc) vorec_t6

0x0004,

0xf1ff,	// (0x000b3fcd) vorec_t

0x950c,	// (0x000ae2da) wait_bar_pane_cp01

0x103e,	// (0x000a5e0c) cell_vorec_pane_ParamLimits

0x103e,	// (0x000a5e0c) cell_vorec_pane

0x96f6,	// (0x000ae4c4) cell_vorec_pane_g1

0xeaa2,	// (0x000b3870) grid_highlight_pane_cp05

0x1066,	// (0x000a5e34) cams_zoom_pane

0x1075,	// (0x000a5e43) image_vga_pane

0x108f,	// (0x000a5e5d) main_camera_pane_g1

0x10a1,	// (0x000a5e6f) main_camera_pane_g2

0x10b1,	// (0x000a5e7f) main_camera_pane_g3

0x10c1,	// (0x000a5e8f) main_camera_pane_g4

0x10d1,	// (0x000a5e9f) main_camera_pane_g5

0x10e1,	// (0x000a5eaf) main_camera_pane_g6

0x10f3,	// (0x000a5ec1) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000b3fd8) main_camera_pane_g

0x1103,	// (0x000a5ed1) main_camera_pane_t1

0x1119,	// (0x000a5ee7) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000b3fe9) main_camera_pane_t

0x1153,	// (0x000a5f21) cams_zoom_pane_cp_ParamLimits

0x1153,	// (0x000a5f21) cams_zoom_pane_cp

0x117b,	// (0x000a5f49) image_cif_pane_ParamLimits

0x117b,	// (0x000a5f49) image_cif_pane

0x11b1,	// (0x000a5f7f) image_subqcif_pane

0x11b9,	// (0x000a5f87) main_video_pane_g1_ParamLimits

0x11b9,	// (0x000a5f87) main_video_pane_g1

0x11dd,	// (0x000a5fab) main_video_pane_g2_ParamLimits

0x11dd,	// (0x000a5fab) main_video_pane_g2

0x1211,	// (0x000a5fdf) main_video_pane_g3_ParamLimits

0x1211,	// (0x000a5fdf) main_video_pane_g3

0x123f,	// (0x000a600d) main_video_pane_g4_ParamLimits

0x123f,	// (0x000a600d) main_video_pane_g4

0x126d,	// (0x000a603b) main_video_pane_g5_ParamLimits

0x126d,	// (0x000a603b) main_video_pane_g5

0x970c,	// (0x000ae4da) main_video_pane_g6_ParamLimits

0x970c,	// (0x000ae4da) main_video_pane_g6

0x0006,

0xf220,	// (0x000b3fee) main_video_pane_g_ParamLimits

0xf220,	// (0x000b3fee) main_video_pane_g

0x1296,	// (0x000a6064) main_video_pane_t1_ParamLimits

0x1296,	// (0x000a6064) main_video_pane_t1

0x9726,	// (0x000ae4f4) cams_zoom_pane_g1

0x972f,	// (0x000ae4fd) cams_zoom_pane_g2

0x9738,	// (0x000ae506) cams_zoom_pane_g3

0x9741,	// (0x000ae50f) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000b3ffd) cams_zoom_pane_g

0x12f3,	// (0x000a60c1) grid_cams_pane

0x130d,	// (0x000a60db) linegrid_cams_pane

0x1321,	// (0x000a60ef) cell_cams_pane_ParamLimits

0x1321,	// (0x000a60ef) cell_cams_pane

0x974a,	// (0x000ae518) cams_burst_image_pane

0x9752,	// (0x000ae520) cell_cams_pane_g1

0xeaa2,	// (0x000b3870) grid_highlight_pane_cp03

0xee17,	// (0x000b3be5) mp_bg_pane_g1

0xeaa2,	// (0x000b3870) bg_list_pane_cp03

0xbaf0,	// (0x000b08be) bg_mp_pane

0xbaf8,	// (0x000b08c6) grid_mp_pane

0xbb00,	// (0x000b08ce) media_player_g1

0xbb08,	// (0x000b08d6) media_player_t1

0xbb16,	// (0x000b08e4) media_player_t2

0xbb24,	// (0x000b08f2) media_player_t3

0xbb32,	// (0x000b0900) media_player_t4

0xbb40,	// (0x000b090e) media_player_t5

0xbb4e,	// (0x000b091c) media_player_t6

0xbb5c,	// (0x000b092a) media_player_t7

0x0006,

0xf5cb,	// (0x000b4399) media_player_t

0xbb6a,	// (0x000b0938) wait_bar_pane_cp02

0xf5b0,	// (0x000b437e) main_usb_pane_t

0x3529,	// (0x000a82f7) cell_mp_pane

0xee17,	// (0x000b3be5) cell_mp_pane_g1

0xeaa2,	// (0x000b3870) grid_highlight_pane_cp06

0x975a,	// (0x000ae528) grid_skin_colour_pane

0x9762,	// (0x000ae530) list_highlight_pane_cp03

0x1457,	// (0x000a6225) skin_g1

0x976a,	// (0x000ae538) skin_t1

0x9779,	// (0x000ae547) skin_t2

0x0001,

0xf264,	// (0x000b4032) skin_t

0x145f,	// (0x000a622d) cell_skin_colour_pane_ParamLimits

0x145f,	// (0x000a622d) cell_skin_colour_pane

0x9787,	// (0x000ae555) cell_skin_colour_pane_g1

0x14d8,	// (0x000a62a6) call_video_g1_ParamLimits

0x14d8,	// (0x000a62a6) call_video_g1

0x14f4,	// (0x000a62c2) call_video_g2_ParamLimits

0x14f4,	// (0x000a62c2) call_video_g2

0x0001,

0xf269,	// (0x000b4037) call_video_g_ParamLimits

0xf269,	// (0x000b4037) call_video_g

0x1546,	// (0x000a6314) call_video_uplink_pane_cp1_ParamLimits

0x1546,	// (0x000a6314) call_video_uplink_pane_cp1

0x9799,	// (0x000ae567) call_video_uplink_pane_cp2

0x15e5,	// (0x000a63b3) video_down_crop_pane_ParamLimits

0x15e5,	// (0x000a63b3) video_down_crop_pane

0x16dc,	// (0x000a64aa) video_down_pane_ParamLimits

0x16dc,	// (0x000a64aa) video_down_pane

0x97a1,	// (0x000ae56f) video_down_subqcif_pane_ParamLimits

0x97a1,	// (0x000ae56f) video_down_subqcif_pane

0x97b9,	// (0x000ae587) video_down_subqcif_pane_cp_ParamLimits

0x97b9,	// (0x000ae587) video_down_subqcif_pane_cp

0x97df,	// (0x000ae5ad) im_reading_pane_ParamLimits

0x97df,	// (0x000ae5ad) im_reading_pane

0x17ea,	// (0x000a65b8) im_writing_pane_ParamLimits

0x17ea,	// (0x000a65b8) im_writing_pane

0x1800,	// (0x000a65ce) im_reading_pane_t1

0x97f9,	// (0x000ae5c7) list_im_pane

0x980a,	// (0x000ae5d8) scroll_pane_cp07

0x1839,	// (0x000a6607) im_writing_pane_t1_ParamLimits

0x1839,	// (0x000a6607) im_writing_pane_t1

0x9823,	// (0x000ae5f1) im_writing_pane_t2_ParamLimits

0x9823,	// (0x000ae5f1) im_writing_pane_t2

0x0001,

0xf273,	// (0x000b4041) im_writing_pane_t_ParamLimits

0xf273,	// (0x000b4041) im_writing_pane_t

0xeaa2,	// (0x000b3870) input_focus_pane_cp04

0xeaa2,	// (0x000b3870) input_focus_pane_cp05

0x184e,	// (0x000a661c) list_im_single_pane_ParamLimits

0x184e,	// (0x000a661c) list_im_single_pane

0x1862,	// (0x000a6630) list_single_im_pane_t1

0x34e9,	// (0x000a82b7) blid_accuracy_pane

0x34f1,	// (0x000a82bf) blid_compass_pane

0x34fb,	// (0x000a82c9) main_location_t1

0x350b,	// (0x000a82d9) main_location_t2

0x351b,	// (0x000a82e9) main_location_t3

0x0002,

0xf5da,	// (0x000b43a8) main_location_t

0xeaa2,	// (0x000b3870) aid_levels_location

0xee17,	// (0x000b3be5) blid_accuracy_pane_g1

0xee17,	// (0x000b3be5) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000b40a3) blid_accuracy_pane_g

0x986b,	// (0x000ae639) wml_content_pane

0x98a9,	// (0x000ae677) wml_button_pane_ParamLimits

0x98a9,	// (0x000ae677) wml_button_pane

0x1871,	// (0x000a663f) wml_list_single_large_pane_ParamLimits

0x1871,	// (0x000a663f) wml_list_single_large_pane

0x1886,	// (0x000a6654) wml_list_single_medium_pane_ParamLimits

0x1886,	// (0x000a6654) wml_list_single_medium_pane

0x189c,	// (0x000a666a) wml_list_single_small_pane_ParamLimits

0x189c,	// (0x000a666a) wml_list_single_small_pane

0x98bd,	// (0x000ae68b) wml_selection_box_pane_ParamLimits

0x98bd,	// (0x000ae68b) wml_selection_box_pane

0x98d0,	// (0x000ae69e) wml_list_single_pane_t1

0x98df,	// (0x000ae6ad) wml_list_single_medium_pane_t1

0x98ee,	// (0x000ae6bc) wml_list_single_large_pane_t1

0x98fd,	// (0x000ae6cb) input_focus_pane_cp02_ParamLimits

0x98fd,	// (0x000ae6cb) input_focus_pane_cp02

0x9910,	// (0x000ae6de) wml_selection_box_pane_g1

0x9919,	// (0x000ae6e7) wml_selection_box_pane_t1_ParamLimits

0x9919,	// (0x000ae6e7) wml_selection_box_pane_t1

0xecfd,	// (0x000b3acb) bg_wml_button_pane_ParamLimits

0xecfd,	// (0x000b3acb) bg_wml_button_pane

0x9931,	// (0x000ae6ff) wml_button_pane_g1

0x9939,	// (0x000ae707) wml_button_pane_t1

0x9931,	// (0x000ae6ff) wml_button_bg_pane_g1

0x9949,	// (0x000ae717) wml_button_bg_pane_g2

0x9951,	// (0x000ae71f) wml_button_bg_pane_g3

0x9959,	// (0x000ae727) wml_button_bg_pane_g4

0x9961,	// (0x000ae72f) wml_button_bg_pane_g5

0x9969,	// (0x000ae737) wml_button_bg_pane_g6

0x9971,	// (0x000ae73f) wml_button_bg_pane_g7

0x9979,	// (0x000ae747) wml_button_bg_pane_g8

0x9981,	// (0x000ae74f) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000b4046) wml_button_bg_pane_g

0x18b4,	// (0x000a6682) bg_list_pane_cp02

0x9989,	// (0x000ae757) mce_header_pane_ParamLimits

0x9989,	// (0x000ae757) mce_header_pane

0x999f,	// (0x000ae76d) mce_icon_pane

0x999f,	// (0x000ae76d) mce_image_pane

0x99a8,	// (0x000ae776) mce_text_pane_ParamLimits

0x99a8,	// (0x000ae776) mce_text_pane

0x18bc,	// (0x000a668a) scroll_pane_cp03

0x98a1,	// (0x000ae66f) scroll_pane_cp04

0x99bb,	// (0x000ae789) scroll_pane_cp05_ParamLimits

0x99bb,	// (0x000ae789) scroll_pane_cp05

0x18c6,	// (0x000a6694) mce_header_field_pane_ParamLimits

0x18c6,	// (0x000a6694) mce_header_field_pane

0x18dd,	// (0x000a66ab) mce_header_field_pane_2_ParamLimits

0x18dd,	// (0x000a66ab) mce_header_field_pane_2

0x18f3,	// (0x000a66c1) mce_header_field_pane_3

0x18fb,	// (0x000a66c9) list_single_mce_message_pane_ParamLimits

0x18fb,	// (0x000a66c9) list_single_mce_message_pane

0x1910,	// (0x000a66de) list_single_mce_smart_pane_ParamLimits

0x1910,	// (0x000a66de) list_single_mce_smart_pane

0x99c7,	// (0x000ae795) input_focus_pane_cp03

0x99d0,	// (0x000ae79e) list_header_data_pane

0x1930,	// (0x000a66fe) mce_header_field_pane_t1

0x1940,	// (0x000a670e) list_single_mce_header_pane_ParamLimits

0x1940,	// (0x000a670e) list_single_mce_header_pane

0x99d8,	// (0x000ae7a6) list_single_mce_header_pane_t1

0x99e7,	// (0x000ae7b5) list_single_mce_message_pane_g1

0x99ef,	// (0x000ae7bd) list_single_mce_message_pane_t1

0x197a,	// (0x000a6748) bg_cale_heading_pane_cp01_ParamLimits

0x197a,	// (0x000a6748) bg_cale_heading_pane_cp01

0x99fd,	// (0x000ae7cb) bg_cale_pane_cp02_ParamLimits

0x99fd,	// (0x000ae7cb) bg_cale_pane_cp02

0x19a9,	// (0x000a6777) cale_month_corner_pane

0x19c8,	// (0x000a6796) cale_month_day_heading_pane_ParamLimits

0x19c8,	// (0x000a6796) cale_month_day_heading_pane

0x1a0f,	// (0x000a67dd) cale_month_pane_g1_ParamLimits

0x1a0f,	// (0x000a67dd) cale_month_pane_g1

0x1a33,	// (0x000a6801) cale_month_pane_g2_ParamLimits

0x1a33,	// (0x000a6801) cale_month_pane_g2

0x1a63,	// (0x000a6831) cale_month_pane_g3_ParamLimits

0x1a63,	// (0x000a6831) cale_month_pane_g3

0x1a9f,	// (0x000a686d) cale_month_pane_g4_ParamLimits

0x1a9f,	// (0x000a686d) cale_month_pane_g4

0x1adb,	// (0x000a68a9) cale_month_pane_g5_ParamLimits

0x1adb,	// (0x000a68a9) cale_month_pane_g5

0x1b23,	// (0x000a68f1) cale_month_pane_g6_ParamLimits

0x1b23,	// (0x000a68f1) cale_month_pane_g6

0x1b6f,	// (0x000a693d) cale_month_pane_g7_ParamLimits

0x1b6f,	// (0x000a693d) cale_month_pane_g7

0x1bc3,	// (0x000a6991) cale_month_pane_g8_ParamLimits

0x1bc3,	// (0x000a6991) cale_month_pane_g8

0x1c17,	// (0x000a69e5) cale_month_pane_g9_ParamLimits

0x1c17,	// (0x000a69e5) cale_month_pane_g9

0x1c69,	// (0x000a6a37) cale_month_pane_g10_ParamLimits

0x1c69,	// (0x000a6a37) cale_month_pane_g10

0x1cbb,	// (0x000a6a89) cale_month_pane_g11_ParamLimits

0x1cbb,	// (0x000a6a89) cale_month_pane_g11

0x1d0d,	// (0x000a6adb) cale_month_pane_g12_ParamLimits

0x1d0d,	// (0x000a6adb) cale_month_pane_g12

0x1d5f,	// (0x000a6b2d) cale_month_pane_g13_ParamLimits

0x1d5f,	// (0x000a6b2d) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000b4059) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000b4059) cale_month_pane_g

0x1db1,	// (0x000a6b7f) cale_month_week_pane

0x1dd5,	// (0x000a6ba3) grid_cale_month_pane_ParamLimits

0x1dd5,	// (0x000a6ba3) grid_cale_month_pane

0x1e13,	// (0x000a6be1) cale_month_day_heading_pane_t1

0x1e99,	// (0x000a6c67) cale_month_day_heading_pane_t2

0x1f2a,	// (0x000a6cf8) cale_month_day_heading_pane_t3

0x1fbb,	// (0x000a6d89) cale_month_day_heading_pane_t4

0x2050,	// (0x000a6e1e) cale_month_day_heading_pane_t5

0x20f1,	// (0x000a6ebf) cale_month_day_heading_pane_t6

0x2192,	// (0x000a6f60) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000b4074) cale_month_day_heading_pane_t

0x9693,	// (0x000ae461) bg_cale_side_pane_cp01

0x223b,	// (0x000a7009) cale_month_week_pane_t1

0x2254,	// (0x000a7022) cale_month_week_pane_t2

0x226d,	// (0x000a703b) cale_month_week_pane_t3

0x2286,	// (0x000a7054) cale_month_week_pane_t4

0x229f,	// (0x000a706d) cale_month_week_pane_t5

0x22b8,	// (0x000a7086) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000b4083) cale_month_week_pane_t

0x22d1,	// (0x000a709f) cell_cale_month_pane_ParamLimits

0x22d1,	// (0x000a709f) cell_cale_month_pane

0x9a3c,	// (0x000ae80a) cell_cale_month_pane_g1

0x2425,	// (0x000a71f3) cell_cale_month_pane_t1_ParamLimits

0x2425,	// (0x000a71f3) cell_cale_month_pane_t1

0x96a1,	// (0x000ae46f) grid_highlight_pane_cp08

0xee17,	// (0x000b3be5) main_smil_g1

0x2445,	// (0x000a7213) smil_status_pane

0x9a48,	// (0x000ae816) smil_text_pane

0xba10,	// (0x000b07de) bg_popup_call3_rect_pane_g8

0xba18,	// (0x000b07e6) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000b433c) bg_popup_call3_rect_pane_g

0xbc6d,	// (0x000b0a3b) smil_status_volume_pane_g1

0x9a52,	// (0x000ae820) smil_status_pane_t1

0x9d51,	// (0x000aeb1f) volume_smil_pane

0x9a69,	// (0x000ae837) list_smil_text_pane

0x2458,	// (0x000a7226) scroll_pane_cp011

0x2463,	// (0x000a7231) smil_text_list_pane_t1_ParamLimits

0x2463,	// (0x000a7231) smil_text_list_pane_t1

0x9a73,	// (0x000ae841) aid_volume_smil_ParamLimits

0x9a73,	// (0x000ae841) aid_volume_smil

0xee17,	// (0x000b3be5) smil_volume_pane_g1

0xee17,	// (0x000b3be5) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000b40a3) smil_volume_pane_g

0x09d6,	// (0x000a57a4) listscroll_cale_day_pane

0x9a95,	// (0x000ae863) bg_cale_pane

0x9aad,	// (0x000ae87b) list_cale_pane

0x9ad0,	// (0x000ae89e) scroll_pane_cp09

0x9ae1,	// (0x000ae8af) cale_bg_pane_g1

0x9ae9,	// (0x000ae8b7) cale_bg_pane_g2

0x9af1,	// (0x000ae8bf) cale_bg_pane_g3

0x9af9,	// (0x000ae8c7) cale_bg_pane_g4

0x9b01,	// (0x000ae8cf) cale_bg_pane_g5

0x9b09,	// (0x000ae8d7) cale_bg_pane_g6

0x9b11,	// (0x000ae8df) cale_bg_pane_g7

0x9b19,	// (0x000ae8e7) cale_bg_pane_g8

0x9b21,	// (0x000ae8ef) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000b40a8) cale_bg_pane_g

0x24a7,	// (0x000a7275) list_cale_time_pane_ParamLimits

0x24a7,	// (0x000a7275) list_cale_time_pane

0x9b29,	// (0x000ae8f7) list_cale_time_pane_g1_ParamLimits

0x9b29,	// (0x000ae8f7) list_cale_time_pane_g1

0x9b35,	// (0x000ae903) list_cale_time_pane_g2_ParamLimits

0x9b35,	// (0x000ae903) list_cale_time_pane_g2

0x24bc,	// (0x000a728a) list_cale_time_pane_g3_ParamLimits

0x24bc,	// (0x000a728a) list_cale_time_pane_g3

0x24ca,	// (0x000a7298) list_cale_time_pane_g4_ParamLimits

0x24ca,	// (0x000a7298) list_cale_time_pane_g4

0x24d8,	// (0x000a72a6) list_cale_time_pane_g5_ParamLimits

0x24d8,	// (0x000a72a6) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000b40bb) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000b40bb) list_cale_time_pane_g

0x9b4f,	// (0x000ae91d) list_cale_time_pane_t1_ParamLimits

0x9b4f,	// (0x000ae91d) list_cale_time_pane_t1

0x9b77,	// (0x000ae945) list_cale_time_pane_t2_ParamLimits

0x9b77,	// (0x000ae945) list_cale_time_pane_t2

0x2839,	// (0x000a7607) aid_blid_cardinal_pane

0x2877,	// (0x000a7645) compass_pane_t4

0x9b9f,	// (0x000ae96d) list_cale_time_pane_t4_ParamLimits

0x9b9f,	// (0x000ae96d) list_cale_time_pane_t4

0x2885,	// (0x000a7653) compass_pane_t5

0x2893,	// (0x000a7661) compass_pane_t6

0x28a1,	// (0x000a766f) compass_pane_t7

0xa68f,	// (0x000af45d) navi_pane_cc_t1

0xa86c,	// (0x000af63a) aid_phob_thumbnail_center_pane

0x2f01,	// (0x000a7ccf) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000b40c8) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000b40c8) list_cale_time_pane_t

0xe6f9,	// (0x000b34c7) bg_popup_window_pane_cp02_ParamLimits

0xe6f9,	// (0x000b34c7) bg_popup_window_pane_cp02

0x9bc7,	// (0x000ae995) heading_pane_cp01_ParamLimits

0x9bc7,	// (0x000ae995) heading_pane_cp01

0x9bd3,	// (0x000ae9a1) loc_req_pane_ParamLimits

0x9bd3,	// (0x000ae9a1) loc_req_pane

0x9be3,	// (0x000ae9b1) loc_type_pane_ParamLimits

0x9be3,	// (0x000ae9b1) loc_type_pane

0x9bf5,	// (0x000ae9c3) loc_type_pane_t1_ParamLimits

0x9bf5,	// (0x000ae9c3) loc_type_pane_t1

0x9c07,	// (0x000ae9d5) loc_type_pane_t2_ParamLimits

0x9c07,	// (0x000ae9d5) loc_type_pane_t2

0x9c19,	// (0x000ae9e7) loc_type_pane_t3_ParamLimits

0x9c19,	// (0x000ae9e7) loc_type_pane_t3

0x0002,

0xf301,	// (0x000b40cf) loc_type_pane_t_ParamLimits

0xf301,	// (0x000b40cf) loc_type_pane_t

0x9c2b,	// (0x000ae9f9) list_loc_req_pane

0xa282,	// (0x000af050) scroll_pane_cp012

0x24e6,	// (0x000a72b4) list_single_loc_request_popup_menu_pane_ParamLimits

0x24e6,	// (0x000a72b4) list_single_loc_request_popup_menu_pane

0xa28d,	// (0x000af05b) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa28d,	// (0x000af05b) list_single_loc_request_popup_menu_pane_g1

0xa299,	// (0x000af067) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa299,	// (0x000af067) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000b40d6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000b40d6) list_single_loc_request_popup_menu_pane_g

0xa2a5,	// (0x000af073) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa2a5,	// (0x000af073) list_single_loc_request_popup_menu_pane_t1

0xecfd,	// (0x000b3acb) bg_popup_window_pane_cp03_ParamLimits

0xecfd,	// (0x000b3acb) bg_popup_window_pane_cp03

0xb0a7,	// (0x000afe75) heading_loc_req_pane_ParamLimits

0xb0a7,	// (0x000afe75) heading_loc_req_pane

0x24f3,	// (0x000a72c1) popup_dyc_status_message_window_g1_ParamLimits

0x24f3,	// (0x000a72c1) popup_dyc_status_message_window_g1

0x2507,	// (0x000a72d5) popup_dyc_status_message_window_t1_ParamLimits

0x2507,	// (0x000a72d5) popup_dyc_status_message_window_t1

0x251c,	// (0x000a72ea) popup_dyc_status_message_window_t2_ParamLimits

0x251c,	// (0x000a72ea) popup_dyc_status_message_window_t2

0x2531,	// (0x000a72ff) popup_dyc_status_message_window_t3_ParamLimits

0x2531,	// (0x000a72ff) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000b40db) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000b40db) popup_dyc_status_message_window_t

0xeaa2,	// (0x000b3870) bg_heading_pane_cp01

0xa2bb,	// (0x000af089) heading_loc_req_pane_g1

0xa2c3,	// (0x000af091) heading_loc_req_pane_g2

0xa2cb,	// (0x000af099) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000b40e2) heading_loc_req_pane_g

0xa2d3,	// (0x000af0a1) heading_loc_req_pane_t1

0xa2e2,	// (0x000af0b0) bg_popup_sub_pane_cp01_ParamLimits

0xa2e2,	// (0x000af0b0) bg_popup_sub_pane_cp01

0xa2f0,	// (0x000af0be) popup_cale_events_window_g1_ParamLimits

0xa2f0,	// (0x000af0be) popup_cale_events_window_g1

0xa310,	// (0x000af0de) popup_cale_events_window_g2_ParamLimits

0xa310,	// (0x000af0de) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000b4116) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000b4116) popup_cale_events_window_g

0xa330,	// (0x000af0fe) popup_cale_events_window_t1_ParamLimits

0xa330,	// (0x000af0fe) popup_cale_events_window_t1

0xa342,	// (0x000af110) popup_cale_events_window_t2_ParamLimits

0xa342,	// (0x000af110) popup_cale_events_window_t2

0xa380,	// (0x000af14e) popup_cale_events_window_t3_ParamLimits

0xa380,	// (0x000af14e) popup_cale_events_window_t3

0xa3ba,	// (0x000af188) popup_cale_events_window_t4_ParamLimits

0xa3ba,	// (0x000af188) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000b411b) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000b411b) popup_cale_events_window_t

0x2634,	// (0x000a7402) call_type_pane

0x2644,	// (0x000a7412) popup_call_status_window_g1

0x2658,	// (0x000a7426) popup_call_status_window_g2

0x266c,	// (0x000a743a) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000b4124) popup_call_status_window_g

0xa3f0,	// (0x000af1be) call_type_pane_g1

0xa3f9,	// (0x000af1c7) call_type_pane_g2

0x0001,

0xf35d,	// (0x000b412b) call_type_pane_g

0xeaa2,	// (0x000b3870) bg_popup_sub_pane_cp02

0xa402,	// (0x000af1d0) listscroll_popup_wml_pane

0xa40a,	// (0x000af1d8) list_wml_pane

0xa414,	// (0x000af1e2) scroll_pane_cp013

0xa41f,	// (0x000af1ed) list_single_graphic_popup_wml_pane_ParamLimits

0xa41f,	// (0x000af1ed) list_single_graphic_popup_wml_pane

0xee17,	// (0x000b3be5) list_single_graphic_popup_wml_pane_g1

0xa433,	// (0x000af201) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000b4130) list_single_graphic_popup_wml_pane_g

0xa43b,	// (0x000af209) list_single_graphic_popup_wml_pane_t1

0xa451,	// (0x000af21f) aid_call_pane

0xecf5,	// (0x000b3ac3) popup_clock_analogue_window_g1

0xecf5,	// (0x000b3ac3) popup_clock_analogue_window_g2

0x9c35,	// (0x000aea03) popup_clock_analogue_window_g3

0x9c35,	// (0x000aea03) popup_clock_analogue_window_g4

0xee17,	// (0x000b3be5) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000b4135) popup_clock_analogue_window_g

0x9c3d,	// (0x000aea0b) popup_clock_analogue_window_t1

0x9c4b,	// (0x000aea19) clock_digital_number_pane_ParamLimits

0x9c4b,	// (0x000aea19) clock_digital_number_pane

0x9c57,	// (0x000aea25) clock_digital_number_pane_cp02_ParamLimits

0x9c57,	// (0x000aea25) clock_digital_number_pane_cp02

0x9c63,	// (0x000aea31) clock_digital_number_pane_cp03_ParamLimits

0x9c63,	// (0x000aea31) clock_digital_number_pane_cp03

0x9c6f,	// (0x000aea3d) clock_digital_number_pane_cp04_ParamLimits

0x9c6f,	// (0x000aea3d) clock_digital_number_pane_cp04

0x9c7f,	// (0x000aea4d) clock_digital_separator_pane_ParamLimits

0x9c7f,	// (0x000aea4d) clock_digital_separator_pane

0x9c8b,	// (0x000aea59) popup_clock_digital_window_t1

0xee17,	// (0x000b3be5) clock_digital_number_pane_g1

0xee17,	// (0x000b3be5) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000b40a3) clock_digital_number_pane_g

0xee17,	// (0x000b3be5) clock_digital_separator_pane_g1

0xee17,	// (0x000b3be5) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000b40a3) clock_digital_separator_pane_g

0xeaa2,	// (0x000b3870) bg_popup_window_pane_cp04

0xa459,	// (0x000af227) heading_pane_cp03

0xa461,	// (0x000af22f) listscroll_popup_gms_pane

0xa469,	// (0x000af237) grid_large_graphic_popup_pane

0xa473,	// (0x000af241) listscroll_popup_gms_pane_g1

0xa47b,	// (0x000af249) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000b4140) listscroll_popup_gms_pane_g

0x98a1,	// (0x000ae66f) scroll_pane_cp014

0x267b,	// (0x000a7449) cell_large_graphic_popup_pane_ParamLimits

0x267b,	// (0x000a7449) cell_large_graphic_popup_pane

0x2693,	// (0x000a7461) cell_large_graphic_popup_pane_g1_ParamLimits

0x2693,	// (0x000a7461) cell_large_graphic_popup_pane_g1

0xa483,	// (0x000af251) cell_large_graphic_popup_pane_g2_ParamLimits

0xa483,	// (0x000af251) cell_large_graphic_popup_pane_g2

0xa48f,	// (0x000af25d) cell_large_graphic_popup_pane_g3_ParamLimits

0xa48f,	// (0x000af25d) cell_large_graphic_popup_pane_g3

0xa49c,	// (0x000af26a) cell_large_graphic_popup_pane_g4_ParamLimits

0xa49c,	// (0x000af26a) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000b4145) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000b4145) cell_large_graphic_popup_pane_g

0xa4ac,	// (0x000af27a) grid_highlight_pane_cp010

0xee17,	// (0x000b3be5) bg_popup_call_pane_g1

0xa4b6,	// (0x000af284) list_single_graphic_popup_conf_pane_ParamLimits

0xa4b6,	// (0x000af284) list_single_graphic_popup_conf_pane

0xa4c9,	// (0x000af297) list_highlight_pane_cp01

0xa4d2,	// (0x000af2a0) list_single_graphic_popup_conf_pane_g1

0xa4da,	// (0x000af2a8) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000b414e) list_single_graphic_popup_conf_pane_g

0xa4e2,	// (0x000af2b0) list_single_graphic_popup_conf_pane_t1

0xa4f0,	// (0x000af2be) linegrid_cams_pane_g1

0x269f,	// (0x000a746d) linegrid_cams_pane_g2

0x96d4,	// (0x000ae4a2) linegrid_cams_pane_g3

0xa4f9,	// (0x000af2c7) linegrid_cams_pane_g4

0x26a8,	// (0x000a7476) linegrid_cams_pane_g5

0x26b1,	// (0x000a747f) linegrid_cams_pane_g6

0x96dd,	// (0x000ae4ab) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000b4153) linegrid_cams_pane_g

0xa502,	// (0x000af2d0) popup_clock_analogue_window

0xa502,	// (0x000af2d0) popup_clock_digital_window

0xeaa2,	// (0x000b3870) popup_phob_thumbnail_window

0xee17,	// (0x000b3be5) call_video_uplink_pane_g1

0xa50b,	// (0x000af2d9) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000b4162) call_video_uplink_pane_g

0xa513,	// (0x000af2e1) video_uplink_pane

0xa51b,	// (0x000af2e9) mce_image_pane_g1

0x26bc,	// (0x000a748a) mce_image_pane_g2

0x26c6,	// (0x000a7494) mce_image_pane_g3

0x26ce,	// (0x000a749c) mce_image_pane_g4

0x26d6,	// (0x000a74a4) mce_image_pane_g5

0x0004,

0xf399,	// (0x000b4167) mce_image_pane_g

0xa525,	// (0x000af2f3) control_top_pane_stacon_cp01_ParamLimits

0xa525,	// (0x000af2f3) control_top_pane_stacon_cp01

0xa539,	// (0x000af307) uni_indicator_pane_stacon_cp01_ParamLimits

0xa539,	// (0x000af307) uni_indicator_pane_stacon_cp01

0xa54a,	// (0x000af318) bg_popup_sub_pane_cp03

0xa554,	// (0x000af322) chi_dic_find_pane

0x26de,	// (0x000a74ac) listscroll_chi_dic_pane

0xa55c,	// (0x000af32a) main_pane_chidic_g1

0xa564,	// (0x000af332) chi_dic_find_pane_t1

0xa572,	// (0x000af340) find_chidic_pane

0xa57b,	// (0x000af349) chi_dic_list_pane_ParamLimits

0xa57b,	// (0x000af349) chi_dic_list_pane

0xa58c,	// (0x000af35a) scroll_pane_cp020

0xa594,	// (0x000af362) find_chidic_pane_t1

0xeaa2,	// (0x000b3870) input_focus_pane_cp06

0x26f2,	// (0x000a74c0) list_chi_dic_pane_ParamLimits

0x26f2,	// (0x000a74c0) list_chi_dic_pane

0x2704,	// (0x000a74d2) list_chi_dic_pane_t1_ParamLimits

0x2704,	// (0x000a74d2) list_chi_dic_pane_t1

0xeaa2,	// (0x000b3870) list_highlight_pane_cp020

0xa5a3,	// (0x000af371) bg_cale_heading_pane_g1

0x2717,	// (0x000a74e5) bg_cale_heading_pane_g2

0x271f,	// (0x000a74ed) bg_cale_heading_pane_g3

0x2727,	// (0x000a74f5) bg_cale_heading_pane_g4

0x2731,	// (0x000a74ff) bg_cale_heading_pane_g5

0x273b,	// (0x000a7509) bg_cale_heading_pane_g6

0x2743,	// (0x000a7511) bg_cale_heading_pane_g7

0x274b,	// (0x000a7519) bg_cale_heading_pane_g8

0x2755,	// (0x000a7523) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000b4172) bg_cale_heading_pane_g

0xa5a3,	// (0x000af371) bg_cale_side_pane_g1

0x275f,	// (0x000a752d) bg_cale_side_pane_g2

0x2767,	// (0x000a7535) bg_cale_side_pane_g3

0x276f,	// (0x000a753d) bg_cale_side_pane_g4

0x2777,	// (0x000a7545) bg_cale_side_pane_g5

0x277f,	// (0x000a754d) bg_cale_side_pane_g6

0x2787,	// (0x000a7555) bg_cale_side_pane_g7

0x278f,	// (0x000a755d) bg_cale_side_pane_g8

0x2797,	// (0x000a7565) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000b4185) bg_cale_side_pane_g

0x279f,	// (0x000a756d) popup_call_status_window_ParamLimits

0x279f,	// (0x000a756d) popup_call_status_window

0xa5ab,	// (0x000af379) stacon_top_pane

0xa5b3,	// (0x000af381) status_pane_ParamLimits

0xa5b3,	// (0x000af381) status_pane

0xa5c8,	// (0x000af396) status_small_pane

0xa5d0,	// (0x000af39e) control_pane

0xeaa2,	// (0x000b3870) stacon_bottom_pane

0xa5d8,	// (0x000af3a6) list_single_mce_smart_pane_t1_ParamLimits

0xa5d8,	// (0x000af3a6) list_single_mce_smart_pane_t1

0xa5eb,	// (0x000af3b9) list_single_mce_smart_pane_t2_ParamLimits

0xa5eb,	// (0x000af3b9) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000b4198) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000b4198) list_single_mce_smart_pane_t

0x27e8,	// (0x000a75b6) compass_pane

0x27f1,	// (0x000a75bf) main_location2_pane_t1

0x2803,	// (0x000a75d1) main_location2_pane_t2

0x2815,	// (0x000a75e3) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000b419d) main_location2_pane_t

0xa60a,	// (0x000af3d8) compass_pane_g1_ParamLimits

0xa60a,	// (0x000af3d8) compass_pane_g1

0x2859,	// (0x000a7627) compass_pane_t1

0x2868,	// (0x000a7636) compass_pane_t2

0x0005,

0xf3d8,	// (0x000b41a6) compass_pane_t

0x28af,	// (0x000a767d) text_secondary_cp61

0xa686,	// (0x000af454) navi_pane_cams_g5

0xa702,	// (0x000af4d0) navi_pane_im_t1

0xa710,	// (0x000af4de) navi_pane_mp_g1_ParamLimits

0xa710,	// (0x000af4de) navi_pane_mp_g1

0xa724,	// (0x000af4f2) navi_pane_mp_g2_ParamLimits

0xa724,	// (0x000af4f2) navi_pane_mp_g2

0xa730,	// (0x000af4fe) navi_pane_mp_g3_ParamLimits

0xa730,	// (0x000af4fe) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000b41ba) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000b41ba) navi_pane_mp_g

0xa73c,	// (0x000af50a) navi_pane_mp_t1

0xa74a,	// (0x000af518) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000b41c1) navi_pane_mp_t

0xa7b5,	// (0x000af583) navi_pane_vt_g1

0xa73c,	// (0x000af50a) navi_pane_vt_t1

0xa7bd,	// (0x000af58b) navi_slider_pane

0x96ee,	// (0x000ae4bc) zooming_pane

0xa7cd,	// (0x000af59b) navi_slider_pane_g1

0x9ca8,	// (0x000aea76) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000b41c8) navi_slider_pane_g

0xa7f1,	// (0x000af5bf) aid_levels_zoom

0xa7f9,	// (0x000af5c7) zooming_pane_g1

0xa801,	// (0x000af5cf) zooming_pane_g2

0xa801,	// (0x000af5cf) zooming_pane_g3

0x0002,

0xf409,	// (0x000b41d7) zooming_pane_g

0xa809,	// (0x000af5d7) level_10_zoom

0xa812,	// (0x000af5e0) level_11_zoom

0xa81b,	// (0x000af5e9) level_1_zoom

0xa824,	// (0x000af5f2) level_2_zoom

0xa82d,	// (0x000af5fb) level_3_zoom

0xa836,	// (0x000af604) level_4_zoom

0xa83f,	// (0x000af60d) level_5_zoom

0xa848,	// (0x000af616) level_6_zoom

0xa851,	// (0x000af61f) level_7_zoom

0xa85a,	// (0x000af628) level_8_zoom

0xa863,	// (0x000af631) level_9_zoom

0xa874,	// (0x000af642) popup_phob_thumbnail_window_g1

0xa87c,	// (0x000af64a) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000b41de) popup_phob_thumbnail_window_g

0xbb72,	// (0x000b0940) level_1_location

0xbb7a,	// (0x000b0948) level_2_location

0xbb82,	// (0x000b0950) level_3_location

0xbb8a,	// (0x000b0958) level_4_location

0x96ee,	// (0x000ae4bc) level_5_location

0x2900,	// (0x000a76ce) mce_icon_pane_g1

0x290a,	// (0x000a76d8) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000b41e3) mce_icon_pane_g

0x2912,	// (0x000a76e0) main_mup_pane_g1_ParamLimits

0x2912,	// (0x000a76e0) main_mup_pane_g1

0x2928,	// (0x000a76f6) main_mup_pane_g2_ParamLimits

0x2928,	// (0x000a76f6) main_mup_pane_g2

0x2940,	// (0x000a770e) main_mup_pane_g3_ParamLimits

0x2940,	// (0x000a770e) main_mup_pane_g3

0x2958,	// (0x000a7726) main_mup_pane_g4_ParamLimits

0x2958,	// (0x000a7726) main_mup_pane_g4

0x2970,	// (0x000a773e) main_mup_pane_g5_ParamLimits

0x2970,	// (0x000a773e) main_mup_pane_g5

0x298c,	// (0x000a775a) main_mup_pane_g6_ParamLimits

0x298c,	// (0x000a775a) main_mup_pane_g6

0x29a4,	// (0x000a7772) main_mup_pane_g7_ParamLimits

0x29a4,	// (0x000a7772) main_mup_pane_g7

0x29bc,	// (0x000a778a) main_mup_pane_g8_ParamLimits

0x29bc,	// (0x000a778a) main_mup_pane_g8

0x29d6,	// (0x000a77a4) main_mup_pane_g9_ParamLimits

0x29d6,	// (0x000a77a4) main_mup_pane_g9

0x29f0,	// (0x000a77be) main_mup_pane_g10_ParamLimits

0x29f0,	// (0x000a77be) main_mup_pane_g10

0x2a0a,	// (0x000a77d8) main_mup_pane_g11_ParamLimits

0x2a0a,	// (0x000a77d8) main_mup_pane_g11

0x2a1e,	// (0x000a77ec) main_mup_pane_g12_ParamLimits

0x2a1e,	// (0x000a77ec) main_mup_pane_g12

0x2a34,	// (0x000a7802) main_mup_pane_g13_ParamLimits

0x2a34,	// (0x000a7802) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000b41e8) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000b41e8) main_mup_pane_g

0x2a48,	// (0x000a7816) main_mup_pane_t1_ParamLimits

0x2a48,	// (0x000a7816) main_mup_pane_t1

0x2a62,	// (0x000a7830) main_mup_pane_t2_ParamLimits

0x2a62,	// (0x000a7830) main_mup_pane_t2

0x2a7a,	// (0x000a7848) main_mup_pane_t3_ParamLimits

0x2a7a,	// (0x000a7848) main_mup_pane_t3

0x2a92,	// (0x000a7860) main_mup_pane_t4_ParamLimits

0x2a92,	// (0x000a7860) main_mup_pane_t4

0x2ab0,	// (0x000a787e) main_mup_pane_t5_ParamLimits

0x2ab0,	// (0x000a787e) main_mup_pane_t5

0x2ac5,	// (0x000a7893) main_mup_pane_t6_ParamLimits

0x2ac5,	// (0x000a7893) main_mup_pane_t6

0x0005,

0xf435,	// (0x000b4203) main_mup_pane_t_ParamLimits

0xf435,	// (0x000b4203) main_mup_pane_t

0x2ad7,	// (0x000a78a5) mup_progress_pane_ParamLimits

0x2ad7,	// (0x000a78a5) mup_progress_pane

0x2ae3,	// (0x000a78b1) mup_visualizer_pane_ParamLimits

0x2ae3,	// (0x000a78b1) mup_visualizer_pane

0x2b13,	// (0x000a78e1) mup_volume_pane_ParamLimits

0x2b13,	// (0x000a78e1) mup_volume_pane

0xa884,	// (0x000af652) mup_visualizer_pane_g1_ParamLimits

0xa884,	// (0x000af652) mup_visualizer_pane_g1

0xa884,	// (0x000af652) mup_visualizer_pane_g2_ParamLimits

0xa884,	// (0x000af652) mup_visualizer_pane_g2

0xa60a,	// (0x000af3d8) mup_visualizer_pane_g3_ParamLimits

0xa60a,	// (0x000af3d8) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000b4210) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000b4210) mup_visualizer_pane_g

0xee17,	// (0x000b3be5) mup_volume_pane_g1

0xa89a,	// (0x000af668) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000b4217) mup_volume_pane_g

0xee17,	// (0x000b3be5) mup_progress_pane_g1

0xa8a3,	// (0x000af671) mup_progress_pane_g2

0xa8ac,	// (0x000af67a) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000b421c) mup_progress_pane_g

0xeaa2,	// (0x000b3870) bg_popup_window_pane_cp05

0xa8b5,	// (0x000af683) heading_pane_cp02_ParamLimits

0xa8b5,	// (0x000af683) heading_pane_cp02

0xa8cf,	// (0x000af69d) list_popup_blid_pane

0xa8d7,	// (0x000af6a5) list_blid_sat_info_pane_ParamLimits

0xa8d7,	// (0x000af6a5) list_blid_sat_info_pane

0xa8ea,	// (0x000af6b8) list_blid_sat_info_pane_g1

0xa8f2,	// (0x000af6c0) list_blid_sat_info_pane_t1

0x2c29,	// (0x000a79f7) mup_equalizer_pane_ParamLimits

0x2c29,	// (0x000a79f7) mup_equalizer_pane

0x2c42,	// (0x000a7a10) mup_equalizer_pane_cp1_ParamLimits

0x2c42,	// (0x000a7a10) mup_equalizer_pane_cp1

0x2c5f,	// (0x000a7a2d) mup_equalizer_pane_cp2_ParamLimits

0x2c5f,	// (0x000a7a2d) mup_equalizer_pane_cp2

0x2c7c,	// (0x000a7a4a) mup_equalizer_pane_cp3_ParamLimits

0x2c7c,	// (0x000a7a4a) mup_equalizer_pane_cp3

0x2c9d,	// (0x000a7a6b) mup_equalizer_pane_cp4_ParamLimits

0x2c9d,	// (0x000a7a6b) mup_equalizer_pane_cp4

0x2cbe,	// (0x000a7a8c) mup_equalizer_pane_cp5

0x2cd2,	// (0x000a7aa0) mup_equalizer_pane_cp6

0x2ce6,	// (0x000a7ab4) mup_equalizer_pane_cp7

0xba90,	// (0x000b085e) bg_popup_call_poc_act_pane_g9

0xba98,	// (0x000b0866) bg_popup_call_poc_act_pane_g10

0xbaa0,	// (0x000b086e) bg_popup_call_poc_act_pane_g11

0x000a,

0xecfd,	// (0x000b3acb) mup_scale_pane

0xee17,	// (0x000b3be5) mup_scale_pane_g1

0xa900,	// (0x000af6ce) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000b4238) mup_scale_pane_g

0xa924,	// (0x000af6f2) msg_data_pane

0xa92c,	// (0x000af6fa) scroll_pane_cp017

0x2d0c,	// (0x000a7ada) bg_list_pane_cp04_ParamLimits

0x2d0c,	// (0x000a7ada) bg_list_pane_cp04

0xa934,	// (0x000af702) msg_data_pane_g1

0x2d2c,	// (0x000a7afa) msg_data_pane_g2

0x2d36,	// (0x000a7b04) msg_data_pane_g3

0x2d3e,	// (0x000a7b0c) msg_data_pane_g4

0x2d46,	// (0x000a7b14) msg_data_pane_g5

0x2d4e,	// (0x000a7b1c) msg_data_pane_g6

0x2d56,	// (0x000a7b24) msg_data_pane_g7

0x0006,

0xf479,	// (0x000b4247) msg_data_pane_g

0x2d5e,	// (0x000a7b2c) msg_text_pane_ParamLimits

0x2d5e,	// (0x000a7b2c) msg_text_pane

0x2d80,	// (0x000a7b4e) qrid_highlight_pane_cp011_ParamLimits

0x2d80,	// (0x000a7b4e) qrid_highlight_pane_cp011

0xeaa2,	// (0x000b3870) msg_body_pane

0xeaa2,	// (0x000b3870) msg_header_pane

0xa945,	// (0x000af713) input_focus_pane_cp07

0x2da4,	// (0x000a7b72) msg_header_pane_t1_ParamLimits

0x2da4,	// (0x000a7b72) msg_header_pane_t1

0x2db6,	// (0x000a7b84) msg_header_pane_t2_ParamLimits

0x2db6,	// (0x000a7b84) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000b425b) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000b425b) msg_header_pane_t

0xa95a,	// (0x000af728) msg_body_pane_g1

0x2dc8,	// (0x000a7b96) msg_body_pane_t1_ParamLimits

0x2dc8,	// (0x000a7b96) msg_body_pane_t1

0x2df9,	// (0x000a7bc7) msg_body_pane_t2_ParamLimits

0x2df9,	// (0x000a7bc7) msg_body_pane_t2

0x2e0b,	// (0x000a7bd9) msg_body_pane_t3_ParamLimits

0x2e0b,	// (0x000a7bd9) msg_body_pane_t3

0x0002,

0xf492,	// (0x000b4260) msg_body_pane_t_ParamLimits

0xf492,	// (0x000b4260) msg_body_pane_t

0x2e57,	// (0x000a7c25) main_viewer_pane_g1_ParamLimits

0x2e57,	// (0x000a7c25) main_viewer_pane_g1

0x2e65,	// (0x000a7c33) main_viewer_pane_g2_ParamLimits

0x2e65,	// (0x000a7c33) main_viewer_pane_g2

0x2e73,	// (0x000a7c41) main_viewer_pane_g3_ParamLimits

0x2e73,	// (0x000a7c41) main_viewer_pane_g3

0x2e82,	// (0x000a7c50) main_viewer_pane_g4_ParamLimits

0x2e82,	// (0x000a7c50) main_viewer_pane_g4

0x9cd2,	// (0x000aeaa0) main_viewer_pane_g5_ParamLimits

0x9cd2,	// (0x000aeaa0) main_viewer_pane_g5

0x9cd2,	// (0x000aeaa0) main_viewer_pane_g7_ParamLimits

0x9cd2,	// (0x000aeaa0) main_viewer_pane_g7

0xa28d,	// (0x000af05b) main_viewer_pane_g8_ParamLimits

0xa28d,	// (0x000af05b) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000b4270) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000b4270) main_viewer_pane_g

0xa962,	// (0x000af730) viewer_content_pane_ParamLimits

0xa962,	// (0x000af730) viewer_content_pane

0x2ebe,	// (0x000a7c8c) main_postcard_pane_g1_ParamLimits

0x2ebe,	// (0x000a7c8c) main_postcard_pane_g1

0x2ed4,	// (0x000a7ca2) main_postcard_pane_g2_ParamLimits

0x2ed4,	// (0x000a7ca2) main_postcard_pane_g2

0x2eea,	// (0x000a7cb8) main_postcard_pane_g3_ParamLimits

0x2eea,	// (0x000a7cb8) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000b4281) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000b4281) main_postcard_pane_g

0x2f01,	// (0x000a7ccf) main_postcard_pane_g4

0xbc80,	// (0x000b0a4e) smil_status_volume_pane_g2

0x2f44,	// (0x000a7d12) postcard_pane_ParamLimits

0x2f44,	// (0x000a7d12) postcard_pane

0xa970,	// (0x000af73e) postcard_pane_g1_ParamLimits

0xa970,	// (0x000af73e) postcard_pane_g1

0x2f86,	// (0x000a7d54) postcard_pane_g2_ParamLimits

0x2f86,	// (0x000a7d54) postcard_pane_g2

0x2f92,	// (0x000a7d60) postcard_pane_g3_ParamLimits

0x2f92,	// (0x000a7d60) postcard_pane_g3

0xa97e,	// (0x000af74c) postcard_pane_g4_ParamLimits

0xa97e,	// (0x000af74c) postcard_pane_g4

0x2f9e,	// (0x000a7d6c) postcard_pane_g5_ParamLimits

0x2f9e,	// (0x000a7d6c) postcard_pane_g5

0x2fb3,	// (0x000a7d81) postcard_pane_g6_ParamLimits

0x2fb3,	// (0x000a7d81) postcard_pane_g6

0xa970,	// (0x000af73e) postcard_pane_g7_ParamLimits

0xa970,	// (0x000af73e) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000b428e) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000b428e) postcard_pane_g

0x2fc7,	// (0x000a7d95) main_mp2_pane_g1_ParamLimits

0x2fc7,	// (0x000a7d95) main_mp2_pane_g1

0x2fd3,	// (0x000a7da1) main_mp2_pane_g2_ParamLimits

0x2fd3,	// (0x000a7da1) main_mp2_pane_g2

0x2fdf,	// (0x000a7dad) main_mp2_pane_g3_ParamLimits

0x2fdf,	// (0x000a7dad) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000b429d) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000b429d) main_mp2_pane_g

0x2feb,	// (0x000a7db9) main_mp2_pane_t1_ParamLimits

0x2feb,	// (0x000a7db9) main_mp2_pane_t1

0x3000,	// (0x000a7dce) main_mp2_pane_t2_ParamLimits

0x3000,	// (0x000a7dce) main_mp2_pane_t2

0x3012,	// (0x000a7de0) main_mp2_pane_t3_ParamLimits

0x3012,	// (0x000a7de0) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000b42a4) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000b42a4) main_mp2_pane_t

0xa98c,	// (0x000af75a) pec_content_pane_ParamLimits

0xa98c,	// (0x000af75a) pec_content_pane

0x98a1,	// (0x000ae66f) scroll_pane_cp015

0xa99e,	// (0x000af76c) pec_attribute_pane_ParamLimits

0xa99e,	// (0x000af76c) pec_attribute_pane

0x3024,	// (0x000a7df2) pec_content_pane_g1_ParamLimits

0x3024,	// (0x000a7df2) pec_content_pane_g1

0xa9ae,	// (0x000af77c) pec_content_pane_t1_ParamLimits

0xa9ae,	// (0x000af77c) pec_content_pane_t1

0xa9c0,	// (0x000af78e) pec_content_pane_t2_ParamLimits

0xa9c0,	// (0x000af78e) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000b42ab) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000b42ab) pec_content_pane_t

0x3030,	// (0x000a7dfe) list_single_graphic_pane_cp01_ParamLimits

0x3030,	// (0x000a7dfe) list_single_graphic_pane_cp01

0xecfd,	// (0x000b3acb) bg_popup_sub_pane_cp04

0xa9d2,	// (0x000af7a0) popup_mup_playback_window_g1

0xa9de,	// (0x000af7ac) popup_mup_playback_window_t1

0xa9f3,	// (0x000af7c1) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000b42b0) popup_mup_playback_window_t

0xaa2a,	// (0x000af7f8) main_image_pane_g1_ParamLimits

0xaa2a,	// (0x000af7f8) main_image_pane_g1

0xaa6d,	// (0x000af83b) scroll_pane_cp018_ParamLimits

0xaa6d,	// (0x000af83b) scroll_pane_cp018

0xaa85,	// (0x000af853) scroll_pane_cp016_ParamLimits

0xaa85,	// (0x000af853) scroll_pane_cp016

0x30fd,	// (0x000a7ecb) smil2_image_pane_ParamLimits

0x30fd,	// (0x000a7ecb) smil2_image_pane

0x312d,	// (0x000a7efb) smil2_root_pane_ParamLimits

0x312d,	// (0x000a7efb) smil2_root_pane

0x3165,	// (0x000a7f33) smil2_text_pane_ParamLimits

0x3165,	// (0x000a7f33) smil2_text_pane

0xeaa2,	// (0x000b3870) bg_list_pane_cp06

0xaac1,	// (0x000af88f) grid_radio_pane

0xeaa2,	// (0x000b3870) bg_popup_window_pane_cp06

0xaac9,	// (0x000af897) main_fmradio_pane_t1

0xa459,	// (0x000af227) heading_pane_cp04

0xaad7,	// (0x000af8a5) main_fmradio_pane_t2

0xbaa8,	// (0x000b0876) popup_cale_lunar_info_window_g1

0xaae5,	// (0x000af8b3) main_fmradio_pane_t3

0xbab0,	// (0x000b087e) popup_cale_lunar_info_window_g2

0xaaf3,	// (0x000af8c1) main_fmradio_pane_t4

0x0001,

0xab01,	// (0x000af8cf) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x000b438b) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000b42c5) main_fmradio_pane_t

0xab0f,	// (0x000af8dd) wait_bar_pane_cp03

0xab17,	// (0x000af8e5) cell_fmradio_pane_ParamLimits

0xab17,	// (0x000af8e5) cell_fmradio_pane

0xa970,	// (0x000af73e) cell_fmradio_pane_g1_ParamLimits

0xa970,	// (0x000af73e) cell_fmradio_pane_g1

0xeaa2,	// (0x000b3870) grid_highlight_pane_cp011

0xab2a,	// (0x000af8f8) poc_content_pane_ParamLimits

0xab2a,	// (0x000af8f8) poc_content_pane

0xab3c,	// (0x000af90a) scroll_pane_cp019

0x31e5,	// (0x000a7fb3) popup_call_poc_act_window_ParamLimits

0x31e5,	// (0x000a7fb3) popup_call_poc_act_window

0x3209,	// (0x000a7fd7) popup_call_poc_inact_window_ParamLimits

0x3209,	// (0x000a7fd7) popup_call_poc_inact_window

0xf594,	// (0x000b4362) bg_popup_call_poc_act_pane_g

0xba20,	// (0x000b07ee) bg_popup_call_poc_inact_pane_g1

0xba28,	// (0x000b07f6) bg_popup_call_poc_inact_pane_g2

0xab44,	// (0x000af912) popup_call_poc_act_window_g2

0xba30,	// (0x000b07fe) bg_popup_call_poc_inact_pane_g3

0xba38,	// (0x000b0806) bg_popup_call_poc_inact_pane_g4

0xba40,	// (0x000b080e) bg_popup_call_poc_inact_pane_g5

0xab4c,	// (0x000af91a) popup_call_poc_act_window_t1_ParamLimits

0xab4c,	// (0x000af91a) popup_call_poc_act_window_t1

0xab74,	// (0x000af942) popup_call_poc_act_window_t2_ParamLimits

0xab74,	// (0x000af942) popup_call_poc_act_window_t2

0xab9c,	// (0x000af96a) popup_call_poc_act_window_t3_ParamLimits

0xab9c,	// (0x000af96a) popup_call_poc_act_window_t3

0xabc4,	// (0x000af992) popup_call_poc_act_window_t4_ParamLimits

0xabc4,	// (0x000af992) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000b42d0) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000b42d0) popup_call_poc_act_window_t

0xba48,	// (0x000b0816) bg_popup_call_poc_inact_pane_g6

0xba50,	// (0x000b081e) bg_popup_call_poc_inact_pane_g7

0xba58,	// (0x000b0826) bg_popup_call_poc_inact_pane_g8

0xabd6,	// (0x000af9a4) popup_call_poc_inact_window_g2

0xba60,	// (0x000b082e) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000b434f) bg_popup_call_poc_inact_pane_g

0xabde,	// (0x000af9ac) popup_call_poc_inact_window_t1_ParamLimits

0xabde,	// (0x000af9ac) popup_call_poc_inact_window_t1

0xabf3,	// (0x000af9c1) popup_call_poc_inact_window_t2_ParamLimits

0xabf3,	// (0x000af9c1) popup_call_poc_inact_window_t2

0xac08,	// (0x000af9d6) popup_call_poc_inact_window_t3_ParamLimits

0xac08,	// (0x000af9d6) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000b42d9) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000b42d9) popup_call_poc_inact_window_t

0xbbf3,	// (0x000b09c1) context_pane_ParamLimits

0x3a4a,	// (0x000a8818) signal_pane_ParamLimits

0x96ee,	// (0x000ae4bc) main_call2_pane

0x9d1d,	// (0x000aeaeb) popup_phob_thumbnail2_window_ParamLimits

0x9d1d,	// (0x000aeaeb) popup_phob_thumbnail2_window

0x9cba,	// (0x000aea88) aid_hotspot_pointer_arrow_pane

0x9cc2,	// (0x000aea90) aid_hotspot_pointer_hand_pane

0x3552,	// (0x000a8320) phob_pre_status_pane_g5

0x1066,	// (0x000a5e34) cams_zoom_pane_ParamLimits

0x1075,	// (0x000a5e43) image_vga_pane_ParamLimits

0x108f,	// (0x000a5e5d) main_camera_pane_g1_ParamLimits

0x10a1,	// (0x000a5e6f) main_camera_pane_g2_ParamLimits

0x10b1,	// (0x000a5e7f) main_camera_pane_g3_ParamLimits

0x10c1,	// (0x000a5e8f) main_camera_pane_g4_ParamLimits

0x10d1,	// (0x000a5e9f) main_camera_pane_g5_ParamLimits

0x10e1,	// (0x000a5eaf) main_camera_pane_g6_ParamLimits

0x10f3,	// (0x000a5ec1) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000b3fd8) main_camera_pane_g_ParamLimits

0x1103,	// (0x000a5ed1) main_camera_pane_t1_ParamLimits

0x1119,	// (0x000a5ee7) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000b3fe9) main_camera_pane_t_ParamLimits

0xecfd,	// (0x000b3acb) bg_popup_preview_window_pane_cp01_ParamLimits

0xecfd,	// (0x000b3acb) bg_popup_preview_window_pane_cp01

0xac1d,	// (0x000af9eb) popup_phob_thumbnail2_window_g1_ParamLimits

0xac1d,	// (0x000af9eb) popup_phob_thumbnail2_window_g1

0xeaa2,	// (0x000b3870) call2_cli_visual_pane

0x323d,	// (0x000a800b) popup_call2_audio_conf_window_ParamLimits

0x323d,	// (0x000a800b) popup_call2_audio_conf_window

0x325d,	// (0x000a802b) popup_call2_audio_first_window_ParamLimits

0x325d,	// (0x000a802b) popup_call2_audio_first_window

0x32f3,	// (0x000a80c1) popup_call2_audio_in_window_ParamLimits

0x32f3,	// (0x000a80c1) popup_call2_audio_in_window

0x333b,	// (0x000a8109) popup_call2_audio_out_window_ParamLimits

0x333b,	// (0x000a8109) popup_call2_audio_out_window

0x33a5,	// (0x000a8173) popup_call2_audio_second_window_ParamLimits

0x33a5,	// (0x000a8173) popup_call2_audio_second_window

0x340b,	// (0x000a81d9) popup_call2_audio_wait_window_ParamLimits

0x340b,	// (0x000a81d9) popup_call2_audio_wait_window

0xeaa2,	// (0x000b3870) bg_popup_call2_act_pane_cp03

0xecdf,	// (0x000b3aad) list_conf_pane_cp

0xac29,	// (0x000af9f7) popup_call2_audio_conf_window_t1

0xa4b6,	// (0x000af284) list_single_graphic_popup_conf2_pane_ParamLimits

0xa4b6,	// (0x000af284) list_single_graphic_popup_conf2_pane

0xa4c9,	// (0x000af297) list_highlight_pane_cp04

0xac37,	// (0x000afa05) list_single_graphic_popup_conf2_pane_g1

0xa4da,	// (0x000af2a8) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000b42e0) list_single_graphic_popup_conf2_pane_g

0xac41,	// (0x000afa0f) list_single_graphic_popup_conf2_pane_t1

0xac4f,	// (0x000afa1d) bg_popup_call2_act_pane_cp01_ParamLimits

0xac4f,	// (0x000afa1d) bg_popup_call2_act_pane_cp01

0xacd9,	// (0x000afaa7) call_type_pane_cp05_ParamLimits

0xacd9,	// (0x000afaa7) call_type_pane_cp05

0xad2d,	// (0x000afafb) popup_call2_audio_second_window_g1_ParamLimits

0xad2d,	// (0x000afafb) popup_call2_audio_second_window_g1

0xad81,	// (0x000afb4f) popup_call2_audio_second_window_g2_ParamLimits

0xad81,	// (0x000afb4f) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000b42e5) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000b42e5) popup_call2_audio_second_window_g

0xade6,	// (0x000afbb4) popup_call2_audio_second_window_t1_ParamLimits

0xade6,	// (0x000afbb4) popup_call2_audio_second_window_t1

0xaea1,	// (0x000afc6f) popup_call2_audio_second_window_t2_ParamLimits

0xaea1,	// (0x000afc6f) popup_call2_audio_second_window_t2

0xaef4,	// (0x000afcc2) popup_call2_audio_second_window_t3_ParamLimits

0xaef4,	// (0x000afcc2) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000b42ec) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000b42ec) popup_call2_audio_second_window_t

0xeaa2,	// (0x000b3870) bg_popup_call2_in_pane_cp02

0xeaac,	// (0x000b387a) call_type_pane_cp04

0xeab4,	// (0x000b3882) popup_call2_audio_wait_window_g1

0xeabc,	// (0x000b388a) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000b3ec7) popup_call2_audio_wait_window_g

0xeac4,	// (0x000b3892) popup_call2_audio_wait_window_t3

0xafe7,	// (0x000afdb5) bg_popup_call2_act_pane_ParamLimits

0xafe7,	// (0x000afdb5) bg_popup_call2_act_pane

0xb0b3,	// (0x000afe81) call_type_pane_cp03_ParamLimits

0xb0b3,	// (0x000afe81) call_type_pane_cp03

0xb117,	// (0x000afee5) popup_call2_audio_first_window_g1_ParamLimits

0xb117,	// (0x000afee5) popup_call2_audio_first_window_g1

0xb187,	// (0x000aff55) popup_call2_audio_first_window_g2_ParamLimits

0xb187,	// (0x000aff55) popup_call2_audio_first_window_g2

0xa884,	// (0x000af652) popup_call2_audio_first_window_g3_ParamLimits

0xa884,	// (0x000af652) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000b42f5) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000b42f5) popup_call2_audio_first_window_g

0xb265,	// (0x000b0033) popup_call2_audio_first_window_t1_ParamLimits

0xb265,	// (0x000b0033) popup_call2_audio_first_window_t1

0xb368,	// (0x000b0136) popup_call2_audio_first_window_t4_ParamLimits

0xb368,	// (0x000b0136) popup_call2_audio_first_window_t4

0xb44b,	// (0x000b0219) popup_call2_audio_first_window_t5_ParamLimits

0xb44b,	// (0x000b0219) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000b4300) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000b4300) popup_call2_audio_first_window_t

0xecf5,	// (0x000b3ac3) bg_popup_call2_act_pane_g1

0xbab8,	// (0x000b0886) popup_cale_lunar_info_window_t1

0xbac6,	// (0x000b0894) popup_cale_lunar_info_window_t2

0xbad4,	// (0x000b08a2) popup_cale_lunar_info_window_t3

0xeaa2,	// (0x000b3870) bg_popup_call2_bubble_pane

0xb54c,	// (0x000b031a) bg_popup_call2_in_pane_cp01_ParamLimits

0xb54c,	// (0x000b031a) bg_popup_call2_in_pane_cp01

0xe77e,	// (0x000b354c) call_type_pane_cp02

0xb594,	// (0x000b0362) popup_call2_audio_out_window_g1_ParamLimits

0xb594,	// (0x000b0362) popup_call2_audio_out_window_g1

0xb5c0,	// (0x000b038e) popup_call2_audio_out_window_g2_ParamLimits

0xb5c0,	// (0x000b038e) popup_call2_audio_out_window_g2

0xb5e8,	// (0x000b03b6) popup_call2_audio_out_window_g3_ParamLimits

0xb5e8,	// (0x000b03b6) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000b4309) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000b4309) popup_call2_audio_out_window_g

0xb623,	// (0x000b03f1) popup_call2_audio_out_window_t1_ParamLimits

0xb623,	// (0x000b03f1) popup_call2_audio_out_window_t1

0xb682,	// (0x000b0450) popup_call2_audio_out_window_t2_ParamLimits

0xb682,	// (0x000b0450) popup_call2_audio_out_window_t2

0xb6d6,	// (0x000b04a4) popup_call2_audio_out_window_t3_ParamLimits

0xb6d6,	// (0x000b04a4) popup_call2_audio_out_window_t3

0xb6ec,	// (0x000b04ba) popup_call2_audio_out_window_t4_ParamLimits

0xb6ec,	// (0x000b04ba) popup_call2_audio_out_window_t4

0xb702,	// (0x000b04d0) popup_call2_audio_out_window_t5_ParamLimits

0xb702,	// (0x000b04d0) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000b4312) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000b4312) popup_call2_audio_out_window_t

0xb766,	// (0x000b0534) bg_popup_call2_in_pane_ParamLimits

0xb766,	// (0x000b0534) bg_popup_call2_in_pane

0xb7c2,	// (0x000b0590) popup_call2_audio_in_window_g1_ParamLimits

0xb7c2,	// (0x000b0590) popup_call2_audio_in_window_g1

0xb7fa,	// (0x000b05c8) popup_call2_audio_in_window_g2_ParamLimits

0xb7fa,	// (0x000b05c8) popup_call2_audio_in_window_g2

0xb832,	// (0x000b0600) popup_call2_audio_in_window_g3_ParamLimits

0xb832,	// (0x000b0600) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000b431f) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000b431f) popup_call2_audio_in_window_g

0xb88a,	// (0x000b0658) popup_call2_audio_in_window_t1_ParamLimits

0xb88a,	// (0x000b0658) popup_call2_audio_in_window_t1

0xb90a,	// (0x000b06d8) popup_call2_audio_in_window_t2_ParamLimits

0xb90a,	// (0x000b06d8) popup_call2_audio_in_window_t2

0xb98a,	// (0x000b0758) popup_call2_audio_in_window_t3_ParamLimits

0xb98a,	// (0x000b0758) popup_call2_audio_in_window_t3

0xb9a4,	// (0x000b0772) popup_call2_audio_in_window_t4_ParamLimits

0xb9a4,	// (0x000b0772) popup_call2_audio_in_window_t4

0xb9b6,	// (0x000b0784) popup_call2_audio_in_window_t5_ParamLimits

0xb9b6,	// (0x000b0784) popup_call2_audio_in_window_t5

0xb9cb,	// (0x000b0799) popup_call2_audio_in_window_t6_ParamLimits

0xb9cb,	// (0x000b0799) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000b4328) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000b4328) popup_call2_audio_in_window_t

0xecf5,	// (0x000b3ac3) bg_popup_call2_in_pane_g1

0xbae2,	// (0x000b08b0) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x000b4390) popup_cale_lunar_info_window_t

0xecfd,	// (0x000b3acb) bg_popup_call2_rect_pane_ParamLimits

0xecfd,	// (0x000b3acb) bg_popup_call2_rect_pane

0xeaa2,	// (0x000b3870) call2_cli_visual_graphic_pane

0xeaa2,	// (0x000b3870) call2_cli_visual_text_pane

0x9d44,	// (0x000aeb12) smil_status_volume_pane_g3

0x0002,

0xee17,	// (0x000b3be5) call2_cli_visual_graphic_pane_g1

0xee17,	// (0x000b3be5) call2_cli_visual_graphic_pane_g2

0xee17,	// (0x000b3be5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000b4335) call2_cli_visual_graphic_pane_g

0xb9e0,	// (0x000b07ae) bg_popup_call2_rect_pane_g1

0x95c2,	// (0x000ae390) bg_popup_call2_rect_pane_g2

0xb9e8,	// (0x000b07b6) bg_popup_call2_rect_pane_g3

0xb9f0,	// (0x000b07be) bg_popup_call2_rect_pane_g4

0xb9f8,	// (0x000b07c6) bg_popup_call2_rect_pane_g5

0xba00,	// (0x000b07ce) bg_popup_call2_rect_pane_g6

0xba08,	// (0x000b07d6) bg_popup_call2_rect_pane_g7

0xba10,	// (0x000b07de) bg_popup_call2_rect_pane_g8

0xba18,	// (0x000b07e6) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000b433c) bg_popup_call2_rect_pane_g

0xba20,	// (0x000b07ee) bg_popup_call2_bubble_pane_g1

0xba28,	// (0x000b07f6) bg_popup_call2_bubble_pane_g2

0xba30,	// (0x000b07fe) bg_popup_call2_bubble_pane_g3

0xba38,	// (0x000b0806) bg_popup_call2_bubble_pane_g4

0xba40,	// (0x000b080e) bg_popup_call2_bubble_pane_g5

0xba48,	// (0x000b0816) bg_popup_call2_bubble_pane_g6

0xba50,	// (0x000b081e) bg_popup_call2_bubble_pane_g7

0xba58,	// (0x000b0826) bg_popup_call2_bubble_pane_g8

0xba60,	// (0x000b082e) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000b434f) bg_popup_call2_bubble_pane_g

0x09e8,	// (0x000a57b6) aid_cale_week_size_cell_pane

0x112f,	// (0x000a5efd) aid_cams_cif_uncrop_pane_ParamLimits

0x112f,	// (0x000a5efd) aid_cams_cif_uncrop_pane

0x12df,	// (0x000a60ad) aid_cams_size_cell_ParamLimits

0x12df,	// (0x000a60ad) aid_cams_size_cell

0x12f3,	// (0x000a60c1) grid_cams_pane_ParamLimits

0x130d,	// (0x000a60db) linegrid_cams_pane_ParamLimits

0x150a,	// (0x000a62d8) call_video_pane_t1

0x1528,	// (0x000a62f6) call_video_pane_t2

0x0001,

0xf26e,	// (0x000b403c) call_video_pane_t

0x1954,	// (0x000a6722) aid_cale_month_size_cell_pane_ParamLimits

0x1954,	// (0x000a6722) aid_cale_month_size_cell_pane

0xf60b,	// (0x000b43d9) smil_status_volume_pane_g

0x9d51,	// (0x000aeb1f) volume_smil_pane_ParamLimits

0x0241,	// (0x000a500f) aid_popup2_width_pane

0x0942,	// (0x000a5710) cell_qdial_pane_g4_ParamLimits

0x0942,	// (0x000a5710) cell_qdial_pane_g4

0x2839,	// (0x000a7607) aid_blid_cardinal_pane_ParamLimits

0x2845,	// (0x000a7613) aid_blid_destination_pane_ParamLimits

0x2845,	// (0x000a7613) aid_blid_destination_pane

0xecfd,	// (0x000b3acb) bg_popup_call_poc_act_pane_ParamLimits

0xecfd,	// (0x000b3acb) bg_popup_call_poc_act_pane

0xecfd,	// (0x000b3acb) bg_popup_call_poc_inact_pane_ParamLimits

0xecfd,	// (0x000b3acb) bg_popup_call_poc_inact_pane

0xba68,	// (0x000b0836) bg_popup_call_poc_act_pane_g1

0xba70,	// (0x000b083e) bg_popup_call_poc_act_pane_g2

0xba78,	// (0x000b0846) bg_popup_call_poc_act_pane_g3

0xba38,	// (0x000b0806) bg_popup_call_poc_act_pane_g4

0xba40,	// (0x000b080e) bg_popup_call_poc_act_pane_g5

0xba80,	// (0x000b084e) bg_popup_call_poc_act_pane_g6

0xba50,	// (0x000b081e) bg_popup_call_poc_act_pane_g7

0xba88,	// (0x000b0856) bg_popup_call_poc_act_pane_g8

0xeaa2,	// (0x000b3870) main_usb_pane

0x9cf8,	// (0x000aeac6) popup_cale_lunar_info_window

0x1800,	// (0x000a65ce) im_reading_pane_t1_ParamLimits

0x97f9,	// (0x000ae5c7) list_im_pane_ParamLimits

0x980a,	// (0x000ae5d8) scroll_pane_cp07_ParamLimits

0xeaa2,	// (0x000b3870) grid_highlight_pane_cp012

0xecfd,	// (0x000b3acb) mup_scale_pane_ParamLimits

0xa970,	// (0x000af73e) main_usb_pane_g1_ParamLimits

0xa970,	// (0x000af73e) main_usb_pane_g1

0x3467,	// (0x000a8235) main_usb_pane_g2_ParamLimits

0x3467,	// (0x000a8235) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x000b4379) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x000b4379) main_usb_pane_g

0x347d,	// (0x000a824b) main_usb_pane_t1_ParamLimits

0x347d,	// (0x000a824b) main_usb_pane_t1

0x348f,	// (0x000a825d) main_usb_pane_t2_ParamLimits

0x348f,	// (0x000a825d) main_usb_pane_t2

0x34a1,	// (0x000a826f) main_usb_pane_t3_ParamLimits

0x34a1,	// (0x000a826f) main_usb_pane_t3

0x34b3,	// (0x000a8281) main_usb_pane_t4_ParamLimits

0x34b3,	// (0x000a8281) main_usb_pane_t4

0x34c5,	// (0x000a8293) main_usb_pane_t5_ParamLimits

0x34c5,	// (0x000a8293) main_usb_pane_t5

0x34d7,	// (0x000a82a5) main_usb_pane_t6_ParamLimits

0x34d7,	// (0x000a82a5) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x000b437e) main_usb_pane_t_ParamLimits

0x27e8,	// (0x000a75b6) aid_text_placing

0x27f1,	// (0x000a75bf) main_location2_pane_t1_ParamLimits

0x2803,	// (0x000a75d1) main_location2_pane_t2_ParamLimits

0x2815,	// (0x000a75e3) main_location2_pane_t3_ParamLimits

0x2827,	// (0x000a75f5) main_location2_pane_t4_ParamLimits

0x2827,	// (0x000a75f5) main_location2_pane_t4

0xf3cf,	// (0x000b419d) main_location2_pane_t_ParamLimits

0xed39,	// (0x000b3b07) find_pinb_pane_g2_ParamLimits

0xed39,	// (0x000b3b07) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x000b3eed) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x000b3eed) find_pinb_pane_g

0xed45,	// (0x000b3b13) find_pinb_pane_t1_ParamLimits

0xed57,	// (0x000b3b25) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x000b3ef2) find_pinb_pane_t_ParamLimits

0xeaa2,	// (0x000b3870) main_call3_pane

0x1e13,	// (0x000a6be1) cale_month_day_heading_pane_t1_ParamLimits

0x1e99,	// (0x000a6c67) cale_month_day_heading_pane_t2_ParamLimits

0x1f2a,	// (0x000a6cf8) cale_month_day_heading_pane_t3_ParamLimits

0x1fbb,	// (0x000a6d89) cale_month_day_heading_pane_t4_ParamLimits

0x2050,	// (0x000a6e1e) cale_month_day_heading_pane_t5_ParamLimits

0x20f1,	// (0x000a6ebf) cale_month_day_heading_pane_t6_ParamLimits

0x2192,	// (0x000a6f60) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000b4074) cale_month_day_heading_pane_t_ParamLimits

0x9a60,	// (0x000ae82e) smil_status_volume_pane

0x2f62,	// (0x000a7d30) postcard_address_pane_ParamLimits

0x2f62,	// (0x000a7d30) postcard_address_pane

0x2f74,	// (0x000a7d42) postcard_message_pane_ParamLimits

0x2f74,	// (0x000a7d42) postcard_message_pane

0x3445,	// (0x000a8213) call2_cli_visual_pane_t1_ParamLimits

0x3445,	// (0x000a8213) call2_cli_visual_pane_t1

0x3c77,	// (0x000a8a45) postcard_message_pane_t1_ParamLimits

0x3c77,	// (0x000a8a45) postcard_message_pane_t1

0x3c60,	// (0x000a8a2e) postcard_address_pane_t1_ParamLimits

0x3c60,	// (0x000a8a2e) postcard_address_pane_t1

0x3c4c,	// (0x000a8a1a) popup_call3_audio_in_window_ParamLimits

0x3c4c,	// (0x000a8a1a) popup_call3_audio_in_window

0x3ad7,	// (0x000a88a5) bg_popup_call3_in_pane_ParamLimits

0x3ad7,	// (0x000a88a5) bg_popup_call3_in_pane

0x3b4d,	// (0x000a891b) popup_call3_audio_in_window_g1_ParamLimits

0x3b4d,	// (0x000a891b) popup_call3_audio_in_window_g1

0x3b6d,	// (0x000a893b) popup_call3_audio_in_window_g2_ParamLimits

0x3b6d,	// (0x000a893b) popup_call3_audio_in_window_g2

0x3b8d,	// (0x000a895b) popup_call3_audio_in_window_g3_ParamLimits

0x3b8d,	// (0x000a895b) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x000b43e0) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x000b43e0) popup_call3_audio_in_window_g

0x3bbe,	// (0x000a898c) popup_call3_audio_in_window_t1_ParamLimits

0x3bbe,	// (0x000a898c) popup_call3_audio_in_window_t1

0x3bfc,	// (0x000a89ca) popup_call3_audio_in_window_t2_ParamLimits

0x3bfc,	// (0x000a89ca) popup_call3_audio_in_window_t2

0x3c3a,	// (0x000a8a08) popup_call3_audio_in_window_t3_ParamLimits

0x3c3a,	// (0x000a8a08) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x000b43e9) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x000b43e9) popup_call3_audio_in_window_t

0x96ee,	// (0x000ae4bc) bg_popup_call3_rect_pane

0xb9e0,	// (0x000b07ae) bg_popup_call3_rect_pane_g1

0x95c2,	// (0x000ae390) bg_popup_call3_rect_pane_g2

0xb9e8,	// (0x000b07b6) bg_popup_call3_rect_pane_g3

0xb9f0,	// (0x000b07be) bg_popup_call3_rect_pane_g4

0xb9f8,	// (0x000b07c6) bg_popup_call3_rect_pane_g5

0xba00,	// (0x000b07ce) bg_popup_call3_rect_pane_g6

0xba08,	// (0x000b07d6) bg_popup_call3_rect_pane_g7

0x2b29,	// (0x000a78f7) mup_visualizer_osc_pane

0xa892,	// (0x000af660) mup_visualizer_spec_pane

0x3b07,	// (0x000a88d5) call3_video_qcif_pane_ParamLimits

0x3b07,	// (0x000a88d5) call3_video_qcif_pane

0x3b1a,	// (0x000a88e8) call3_video_qcif_uncrop_pane_ParamLimits

0x3b1a,	// (0x000a88e8) call3_video_qcif_uncrop_pane

0x3b28,	// (0x000a88f6) call3_video_subqcif_pane_ParamLimits

0x3b28,	// (0x000a88f6) call3_video_subqcif_pane

0x3b3c,	// (0x000a890a) call3_video_subqcif_uncrop_pane_ParamLimits

0x3b3c,	// (0x000a890a) call3_video_subqcif_uncrop_pane

0x3bad,	// (0x000a897b) popup_call3_audio_in_window_g4_ParamLimits

0x3bad,	// (0x000a897b) popup_call3_audio_in_window_g4

0x3ac6,	// (0x000a8894) mup_spec_half_pane

0x3acf,	// (0x000a889d) mup_spec_half_pane_cp

0xbc53,	// (0x000b0a21) mup_osc_middle_pane

0xbc5c,	// (0x000b0a2a) mup_visualizer_osc_pane_g1

0x3aa6,	// (0x000a8874) mup_spec_bar_pane_ParamLimits

0x3aa6,	// (0x000a8874) mup_spec_bar_pane

0xbc40,	// (0x000b0a0e) mup_spec_bar_pane_g1

0xbc4a,	// (0x000b0a18) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000b43d4) mup_spec_bar_pane_g

0x09e8,	// (0x000a57b6) aid_cale_week_size_cell_pane_ParamLimits

0x0a02,	// (0x000a57d0) bg_cale_heading_pane_ParamLimits

0x9647,	// (0x000ae415) bg_cale_pane_cp01_ParamLimits

0x0a1a,	// (0x000a57e8) cale_week_corner_pane_ParamLimits

0x0a39,	// (0x000a5807) cale_week_day_heading_pane_ParamLimits

0x0a56,	// (0x000a5824) cale_week_scroll_pane_g1_ParamLimits

0x0a69,	// (0x000a5837) cale_week_scroll_pane_g2_ParamLimits

0x0a81,	// (0x000a584f) cale_week_scroll_pane_g3_ParamLimits

0x0a99,	// (0x000a5867) cale_week_scroll_pane_g4_ParamLimits

0x0ab1,	// (0x000a587f) cale_week_scroll_pane_g5_ParamLimits

0x0ad1,	// (0x000a589f) cale_week_scroll_pane_g6_ParamLimits

0x0af1,	// (0x000a58bf) cale_week_scroll_pane_g7_ParamLimits

0x0b11,	// (0x000a58df) cale_week_scroll_pane_g8_ParamLimits

0x0b35,	// (0x000a5903) cale_week_scroll_pane_g9_ParamLimits

0x0b4d,	// (0x000a591b) cale_week_scroll_pane_g10_ParamLimits

0x0b65,	// (0x000a5933) cale_week_scroll_pane_g11_ParamLimits

0x0b7d,	// (0x000a594b) cale_week_scroll_pane_g12_ParamLimits

0x0b95,	// (0x000a5963) cale_week_scroll_pane_g13_ParamLimits

0x0b95,	// (0x000a5963) cale_week_scroll_pane_g14_ParamLimits

0x0b95,	// (0x000a5963) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000b3f7e) cale_week_scroll_pane_g_ParamLimits

0x0bd1,	// (0x000a599f) cale_week_time_pane_ParamLimits

0x0bf5,	// (0x000a59c3) grid_cale_week_pane_ParamLimits

0x9664,	// (0x000ae432) listscroll_cale_week_pane_t1

0x9676,	// (0x000ae444) scroll_pane_cp08_ParamLimits

0x19a9,	// (0x000a6777) cale_month_corner_pane_ParamLimits

0x9a2a,	// (0x000ae7f8) cale_month_pane_t1

0x1db1,	// (0x000a6b7f) cale_month_week_pane_ParamLimits

0x2644,	// (0x000a7412) popup_call_status_window_g1_ParamLimits

0x2658,	// (0x000a7426) popup_call_status_window_g2_ParamLimits

0x266c,	// (0x000a743a) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000b4124) popup_call_status_window_g_ParamLimits

0xa449,	// (0x000af217) aid_call2_pane

0x2d96,	// (0x000a7b64) msg_header_pane_g1

0x2f62,	// (0x000a7d30) postcard_address2_pane_ParamLimits

0x2f62,	// (0x000a7d30) postcard_address2_pane

0x2f74,	// (0x000a7d42) postcard_message2_pane_ParamLimits

0x2f74,	// (0x000a7d42) postcard_message2_pane

0x3a58,	// (0x000a8826) message2_row_pane_ParamLimits

0x3a58,	// (0x000a8826) message2_row_pane

0x3a74,	// (0x000a8842) address2_row_pane_ParamLimits

0x3a74,	// (0x000a8842) address2_row_pane

0xbc0e,	// (0x000b09dc) postcard_message2_row_pane_g1

0xbc16,	// (0x000b09e4) postcard_message2_row_pane_t1

0xbc0e,	// (0x000b09dc) address2_row_pane_g1

0xbc16,	// (0x000b09e4) address2_row_pane_t1

0x0fe8,	// (0x000a5db6) aid_size_cell_vorec

0xeaa2,	// (0x000b3870) main_rss_pane

0x3a87,	// (0x000a8855) rss_list_single_pane_ParamLimits

0x3a87,	// (0x000a8855) rss_list_single_pane

0xbc24,	// (0x000b09f2) rss_list_single_pane_t1

0xbc32,	// (0x000b0a00) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x000b43cf) rss_list_single_pane_t

0xeaa2,	// (0x000b3870) main_camera2_pane

0xeaa2,	// (0x000b3870) main_video2_pane

0x3cf0,	// (0x000a8abe) cams_zoom_pane_cp2_ParamLimits

0x3cf0,	// (0x000a8abe) cams_zoom_pane_cp2

0x3d10,	// (0x000a8ade) image2_vga_pane_ParamLimits

0x3d10,	// (0x000a8ade) image2_vga_pane

0x3d61,	// (0x000a8b2f) main_camera2_pane_g1_ParamLimits

0x3d61,	// (0x000a8b2f) main_camera2_pane_g1

0x3d81,	// (0x000a8b4f) main_camera2_pane_g2_ParamLimits

0x3d81,	// (0x000a8b4f) main_camera2_pane_g2

0x3da1,	// (0x000a8b6f) main_camera2_pane_g3_ParamLimits

0x3da1,	// (0x000a8b6f) main_camera2_pane_g3

0x3dc1,	// (0x000a8b8f) main_camera2_pane_g4_ParamLimits

0x3dc1,	// (0x000a8b8f) main_camera2_pane_g4

0x3de1,	// (0x000a8baf) main_camera2_pane_g5_ParamLimits

0x3de1,	// (0x000a8baf) main_camera2_pane_g5

0x3e01,	// (0x000a8bcf) main_camera2_pane_g6_ParamLimits

0x3e01,	// (0x000a8bcf) main_camera2_pane_g6

0x3e21,	// (0x000a8bef) main_camera2_pane_g7_ParamLimits

0x3e21,	// (0x000a8bef) main_camera2_pane_g7

0x3e41,	// (0x000a8c0f) main_camera2_pane_g8_ParamLimits

0x3e41,	// (0x000a8c0f) main_camera2_pane_g8

0x0008,

0xf622,	// (0x000b43f0) main_camera2_pane_g_ParamLimits

0xf622,	// (0x000b43f0) main_camera2_pane_g

0x3e81,	// (0x000a8c4f) main_camera2_pane_t1_ParamLimits

0x3e81,	// (0x000a8c4f) main_camera2_pane_t1

0x3eb6,	// (0x000a8c84) main_camera2_pane_t2_ParamLimits

0x3eb6,	// (0x000a8c84) main_camera2_pane_t2

0x3edc,	// (0x000a8caa) main_camera2_pane_t3_ParamLimits

0x3edc,	// (0x000a8caa) main_camera2_pane_t3

0x3f3a,	// (0x000a8d08) main_camera2_pane_t4_ParamLimits

0x3f3a,	// (0x000a8d08) main_camera2_pane_t4

0x0006,

0xf635,	// (0x000b4403) main_camera2_pane_t_ParamLimits

0xf635,	// (0x000b4403) main_camera2_pane_t

0x3fcc,	// (0x000a8d9a) cams_zoom_pane_cp4_ParamLimits

0x3fcc,	// (0x000a8d9a) cams_zoom_pane_cp4

0x3fe2,	// (0x000a8db0) image2_cif_pane_ParamLimits

0x3fe2,	// (0x000a8db0) image2_cif_pane

0x400d,	// (0x000a8ddb) image2_subqcif_pane_ParamLimits

0x400d,	// (0x000a8ddb) image2_subqcif_pane

0x4027,	// (0x000a8df5) main_video2_pane_g1_ParamLimits

0x4027,	// (0x000a8df5) main_video2_pane_g1

0x4041,	// (0x000a8e0f) main_video2_pane_g2_ParamLimits

0x4041,	// (0x000a8e0f) main_video2_pane_g2

0x4057,	// (0x000a8e25) main_video2_pane_g3_ParamLimits

0x4057,	// (0x000a8e25) main_video2_pane_g3

0x406d,	// (0x000a8e3b) main_video2_pane_g4_ParamLimits

0x406d,	// (0x000a8e3b) main_video2_pane_g4

0x4083,	// (0x000a8e51) main_video2_pane_g5_ParamLimits

0x4083,	// (0x000a8e51) main_video2_pane_g5

0x4099,	// (0x000a8e67) main_video2_pane_g6_ParamLimits

0x4099,	// (0x000a8e67) main_video2_pane_g6

0x0005,

0xf644,	// (0x000b4412) main_video2_pane_g_ParamLimits

0xf644,	// (0x000b4412) main_video2_pane_g

0x40b3,	// (0x000a8e81) main_video2_pane_t1_ParamLimits

0x40b3,	// (0x000a8e81) main_video2_pane_t1

0x40d7,	// (0x000a8ea5) main_video2_pane_t2_ParamLimits

0x40d7,	// (0x000a8ea5) main_video2_pane_t2

0x4125,	// (0x000a8ef3) main_video2_pane_t3_ParamLimits

0x4125,	// (0x000a8ef3) main_video2_pane_t3

0x0002,

0xf651,	// (0x000b441f) main_video2_pane_t_ParamLimits

0xf651,	// (0x000b441f) main_video2_pane_t

0x3592,	// (0x000a8360) call_muted_g2

0x0001,

0xf5f3,	// (0x000b43c1) call_muted_g

0xeaa2,	// (0x000b3870) main_mup2_pane

0x4169,	// (0x000a8f37) main_mup2_pane_g1_ParamLimits

0x4169,	// (0x000a8f37) main_mup2_pane_g1

0x4175,	// (0x000a8f43) main_mup2_pane_g2_ParamLimits

0x4175,	// (0x000a8f43) main_mup2_pane_g2

0x9dbf,	// (0x000aeb8d) main_mup_pane_g13_cp1

0x9dc7,	// (0x000aeb95) mup_volume_pane_cp1

0x4191,	// (0x000a8f5f) main_mup2_pane_g4_ParamLimits

0x4191,	// (0x000a8f5f) main_mup2_pane_g4

0x41a3,	// (0x000a8f71) main_mup2_pane_g5_ParamLimits

0x41a3,	// (0x000a8f71) main_mup2_pane_g5

0x41b5,	// (0x000a8f83) main_mup2_pane_g6_ParamLimits

0x41b5,	// (0x000a8f83) main_mup2_pane_g6

0x41c7,	// (0x000a8f95) main_mup2_pane_g7_ParamLimits

0x41c7,	// (0x000a8f95) main_mup2_pane_g7

0x0006,

0xf658,	// (0x000b4426) main_mup2_pane_g_ParamLimits

0xf658,	// (0x000b4426) main_mup2_pane_g

0x41df,	// (0x000a8fad) main_mup2_pane_t1_ParamLimits

0x41df,	// (0x000a8fad) main_mup2_pane_t1

0x41f5,	// (0x000a8fc3) main_mup2_pane_t2_ParamLimits

0x41f5,	// (0x000a8fc3) main_mup2_pane_t2

0x420b,	// (0x000a8fd9) main_mup2_pane_t3_ParamLimits

0x420b,	// (0x000a8fd9) main_mup2_pane_t3

0x4221,	// (0x000a8fef) main_mup2_pane_t4_ParamLimits

0x4221,	// (0x000a8fef) main_mup2_pane_t4

0x4239,	// (0x000a9007) main_mup2_pane_t5_ParamLimits

0x4239,	// (0x000a9007) main_mup2_pane_t5

0x4251,	// (0x000a901f) main_mup2_pane_t6_ParamLimits

0x4251,	// (0x000a901f) main_mup2_pane_t6

0x0005,

0xf667,	// (0x000b4435) main_mup2_pane_t_ParamLimits

0xf667,	// (0x000b4435) main_mup2_pane_t

0x4281,	// (0x000a904f) mup2_visualizer_pane_ParamLimits

0x4281,	// (0x000a904f) mup2_visualizer_pane

0x42af,	// (0x000a907d) mup_progress_pane_cp_ParamLimits

0x42af,	// (0x000a907d) mup_progress_pane_cp

0x9daa,	// (0x000aeb78) mup_volume_pane_cp_ParamLimits

0x9daa,	// (0x000aeb78) mup_volume_pane_cp

0x42c3,	// (0x000a9091) mup2_visualizer_pane_g1_ParamLimits

0x42c3,	// (0x000a9091) mup2_visualizer_pane_g1

0xbc93,	// (0x000b0a61) mup2_visualizer_pane_g2_ParamLimits

0xbc93,	// (0x000b0a61) mup2_visualizer_pane_g2

0x42da,	// (0x000a90a8) mup2_visualizer_pane_g3_ParamLimits

0x42da,	// (0x000a90a8) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000b4442) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000b4442) mup2_visualizer_pane_g

0xaab9,	// (0x000af887) aid_size_cell_fmradio

0x3744,	// (0x000a8512) aid_height_parent_landcape

0x9888,	// (0x000ae656) wml_content_pane_cp

0x9890,	// (0x000ae65e) wml_tabs_pane

0x9899,	// (0x000ae667) popup_wml_miniature_window

0x98a1,	// (0x000ae66f) scroll_pane_cp021

0x98b5,	// (0x000ae683) wml_content_pane_comp8

0xeaa2,	// (0x000b3870) bg_popup_sub_pane_cp05

0xbcb1,	// (0x000b0a7f) popup_wml_miniature_window_g1

0xbcb9,	// (0x000b0a87) wml_miniature_view_pane

0x42e6,	// (0x000a90b4) aid_size_wml_view

0x42ee,	// (0x000a90bc) wml_miniature_view_pane_g1

0x42f7,	// (0x000a90c5) wml_miniature_view_pane_g2

0x4300,	// (0x000a90ce) wml_miniature_view_pane_g3

0x4308,	// (0x000a90d6) wml_miniature_view_pane_g4

0x4310,	// (0x000a90de) wml_miniature_view_pane_g5

0x4318,	// (0x000a90e6) wml_miniature_view_pane_g6

0x4320,	// (0x000a90ee) wml_miniature_view_pane_g7

0x4328,	// (0x000a90f6) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000b4449) wml_miniature_view_pane_g

0xbcc1,	// (0x000b0a8f) background_graphic_ParamLimits

0xbcc1,	// (0x000b0a8f) background_graphic

0xbccd,	// (0x000b0a9b) wml_tabs_2_pane

0xbcd6,	// (0x000b0aa4) wml_tabs_3_pane_ParamLimits

0xbcd6,	// (0x000b0aa4) wml_tabs_3_pane

0xbce8,	// (0x000b0ab6) wml_tabs_4_pane_ParamLimits

0xbce8,	// (0x000b0ab6) wml_tabs_4_pane

0xbcfe,	// (0x000b0acc) wml_tabs_5_pane_ParamLimits

0xbcfe,	// (0x000b0acc) wml_tabs_5_pane

0xbd18,	// (0x000b0ae6) wml_tabs_pane_g2_ParamLimits

0xbd18,	// (0x000b0ae6) wml_tabs_pane_g2

0xbd2c,	// (0x000b0afa) wml_tabs_pane_g3_ParamLimits

0xbd2c,	// (0x000b0afa) wml_tabs_pane_g3

0x4330,	// (0x000a90fe) wml_tabs_2_active_pane_ParamLimits

0x4330,	// (0x000a90fe) wml_tabs_2_active_pane

0x4344,	// (0x000a9112) wml_tabs_2_passive_pane_ParamLimits

0x4344,	// (0x000a9112) wml_tabs_2_passive_pane

0x4358,	// (0x000a9126) wml_tabs_3_active_pane_cp_ParamLimits

0x4358,	// (0x000a9126) wml_tabs_3_active_pane_cp

0x436d,	// (0x000a913b) wml_tabs_3_passive_pane_ParamLimits

0x436d,	// (0x000a913b) wml_tabs_3_passive_pane

0x4380,	// (0x000a914e) wml_tabs_3_passive_pane_cp_ParamLimits

0x4380,	// (0x000a914e) wml_tabs_3_passive_pane_cp

0x4397,	// (0x000a9165) tabs_4_active_pane

0x439f,	// (0x000a916d) tabs_4_passive_pane

0x43a9,	// (0x000a9177) tabs_4_passive_pane_cp

0x43b1,	// (0x000a917f) tabs_4_passive_pane_cp2

0x345f,	// (0x000a822d) aid_height_text

0x2aff,	// (0x000a78cd) mup_volume_cont_pane_ParamLimits

0x2aff,	// (0x000a78cd) mup_volume_cont_pane

0x05c6,	// (0x000a5394) aid_size_cell_pinb

0x05d0,	// (0x000a539e) aid_size_list_pinb

0x429b,	// (0x000a9069) mup2_volume_cont_pane_ParamLimits

0x429b,	// (0x000a9069) mup2_volume_cont_pane

0x9d96,	// (0x000aeb64) mup2_volume_cont_pane_g1_ParamLimits

0x9d96,	// (0x000aeb64) mup2_volume_cont_pane_g1

0x024d,	// (0x000a501b) aid_size_cell_touch_ParamLimits

0x024d,	// (0x000a501b) aid_size_cell_touch

0x04b6,	// (0x000a5284) touch_pane_ParamLimits

0x04b6,	// (0x000a5284) touch_pane

0x9542,	// (0x000ae310) main_rss2_pane

0xbd49,	// (0x000b0b17) listscroll_rss2_pane

0xbd52,	// (0x000b0b20) rss2_navigation_pane

0xbd5a,	// (0x000b0b28) list_rss2_pane

0xa58c,	// (0x000af35a) scroll_pane_cp22

0xbd62,	// (0x000b0b30) rss2_navigation_pane_g1

0xbd6b,	// (0x000b0b39) rss2_navigation_pane_g2

0xbd73,	// (0x000b0b41) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000b445a) rss2_navigation_pane_g

0xbd7b,	// (0x000b0b49) rss2_navigation_pane_t1

0x43bb,	// (0x000a9189) rss2_list_single_pane_ParamLimits

0x43bb,	// (0x000a9189) rss2_list_single_pane

0xbd89,	// (0x000b0b57) rss2_list_single_pane_t2

0xbd97,	// (0x000b0b65) rss2_list_single_pane_t3_ParamLimits

0xbd97,	// (0x000b0b65) rss2_list_single_pane_t3

0xbdb4,	// (0x000b0b82) rss2_list_single_pane_t4

0x244e,	// (0x000a721c) smil_status_pane_g1

0x9534,	// (0x000ae302) main_image2_pane_ParamLimits

0x9534,	// (0x000ae302) main_image2_pane

0x3e61,	// (0x000a8c2f) main_camera2_pane_g9_ParamLimits

0x3e61,	// (0x000a8c2f) main_camera2_pane_g9

0x3f8f,	// (0x000a8d5d) main_camera2_pane_t5_ParamLimits

0x3f8f,	// (0x000a8d5d) main_camera2_pane_t5

0x9d66,	// (0x000aeb34) main_camera2_pane_t6_ParamLimits

0x9d66,	// (0x000aeb34) main_camera2_pane_t6

0x43d0,	// (0x000a919e) main_image2_pane_g1_ParamLimits

0x43d0,	// (0x000a919e) main_image2_pane_g1

0x319b,	// (0x000a7f69) smil2_video_pane_ParamLimits

0x319b,	// (0x000a7f69) smil2_video_pane

0x028d,	// (0x000a505b) aid_zoom_text_primary_cp

0x952a,	// (0x000ae2f8) popup_preview_fixed_window

0x97f1,	// (0x000ae5bf) im_reading_pane_g1

0x3cd8,	// (0x000a8aa6) cams2_bc_adjust_pane_cp_ParamLimits

0x3cd8,	// (0x000a8aa6) cams2_bc_adjust_pane_cp

0x3fbe,	// (0x000a8d8c) cams2_bc_adjust_pane_ParamLimits

0x3fbe,	// (0x000a8d8c) cams2_bc_adjust_pane

0xcb9b,	// (0x000b1969) cams2_bc_adjust_pane_g1

0x9dcf,	// (0x000aeb9d) cams2_slider_pane

0x9dd8,	// (0x000aeba6) cams2_slider_pane_g1

0x9de1,	// (0x000aebaf) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000b4461) cams2_slider_pane_g

0x06be,	// (0x000a548c) calc_display_pane_ParamLimits

0x06e6,	// (0x000a54b4) calc_paper_pane_ParamLimits

0x0709,	// (0x000a54d7) grid_calc_pane_ParamLimits

0x9c8b,	// (0x000aea59) popup_clock_digital_window_t1_ParamLimits

0xaa56,	// (0x000af824) main_image_pane_t1

0x06a0,	// (0x000a546e) aid_size_cell_calc_ParamLimits

0x06a0,	// (0x000a546e) aid_size_cell_calc

0x379c,	// (0x000a856a) popup_blid_sat_info2_window_ParamLimits

0x379c,	// (0x000a856a) popup_blid_sat_info2_window

0xbdca,	// (0x000b0b98) aid_size_cell_blid

0xbdd2,	// (0x000b0ba0) bg_popup_window_pane_cp07

0xbdf5,	// (0x000b0bc3) grid_popup_blid_pane

0xbdff,	// (0x000b0bcd) heading_pane_cp05_ParamLimits

0xbdff,	// (0x000b0bcd) heading_pane_cp05

0xbed5,	// (0x000b0ca3) cell_popup_blid_pane_ParamLimits

0xbed5,	// (0x000b0ca3) cell_popup_blid_pane

0xbef9,	// (0x000b0cc7) cell_popup_blid_pane_g1

0xbf01,	// (0x000b0ccf) cell_popup_blid_pane_t1

0x426b,	// (0x000a9039) mup2_indicator_pane_ParamLimits

0x426b,	// (0x000a9039) mup2_indicator_pane

0x96ee,	// (0x000ae4bc) mup2_visualizer_osc_pane

0xbc9f,	// (0x000b0a6d) mup2_visualizer_spec_pane_ParamLimits

0xbc9f,	// (0x000b0a6d) mup2_visualizer_spec_pane

0x43e6,	// (0x000a91b4) mup2_spec_half_pane

0x43ef,	// (0x000a91bd) mup2_spec_half_pane_cp

0x43f7,	// (0x000a91c5) mup2_spec_bar_pane_ParamLimits

0x43f7,	// (0x000a91c5) mup2_spec_bar_pane

0xbc40,	// (0x000b0a0e) mup2_spec_bar_pane_g1

0xbc4a,	// (0x000b0a18) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000b43d4) mup2_spec_bar_pane_g

0x4417,	// (0x000a91e5) mup2_osc_middle_pane

0xbc5c,	// (0x000b0a2a) mup2_visualizer_osc_pane_g1

0xe6af,	// (0x000b347d) popup_number_entry_window_t1_ParamLimits

0xe6c2,	// (0x000b3490) popup_number_entry_window_t2_ParamLimits

0xe6d4,	// (0x000b34a2) popup_number_entry_window_t3_ParamLimits

0x0508,	// (0x000a52d6) popup_number_entry_window_t5_ParamLimits

0x0508,	// (0x000a52d6) popup_number_entry_window_t5

0xf0ca,	// (0x000b3e98) popup_number_entry_window_t_ParamLimits

0xe6e6,	// (0x000b34b4) text_title_cp2_ParamLimits

0x9cca,	// (0x000aea98) aid_hotspot_pointer_text2_pane

0x9ce4,	// (0x000aeab2) main_viewer_pane_g9_ParamLimits

0x9ce4,	// (0x000aeab2) main_viewer_pane_g9

0x9a2a,	// (0x000ae7f8) cale_month_pane_t1_ParamLimits

0x9a95,	// (0x000ae863) bg_cale_pane_ParamLimits

0x9aad,	// (0x000ae87b) list_cale_pane_ParamLimits

0x9abe,	// (0x000ae88c) listscroll_cale_day_pane_t1

0x9ad0,	// (0x000ae89e) scroll_pane_cp09_ParamLimits

0x2b31,	// (0x000a78ff) main_mup_eq_pane_t1_ParamLimits

0x2b31,	// (0x000a78ff) main_mup_eq_pane_t1

0x2b4b,	// (0x000a7919) main_mup_eq_pane_t2_ParamLimits

0x2b4b,	// (0x000a7919) main_mup_eq_pane_t2

0x2b65,	// (0x000a7933) main_mup_eq_pane_t3_ParamLimits

0x2b65,	// (0x000a7933) main_mup_eq_pane_t3

0x2b81,	// (0x000a794f) main_mup_eq_pane_t4_ParamLimits

0x2b81,	// (0x000a794f) main_mup_eq_pane_t4

0x2b9d,	// (0x000a796b) main_mup_eq_pane_t5_ParamLimits

0x2b9d,	// (0x000a796b) main_mup_eq_pane_t5

0x2bb9,	// (0x000a7987) main_mup_eq_pane_t6_ParamLimits

0x2bb9,	// (0x000a7987) main_mup_eq_pane_t6

0x2bcd,	// (0x000a799b) main_mup_eq_pane_t7_ParamLimits

0x2bcd,	// (0x000a799b) main_mup_eq_pane_t7

0x2be1,	// (0x000a79af) main_mup_eq_pane_t8_ParamLimits

0x2be1,	// (0x000a79af) main_mup_eq_pane_t8

0x2bf5,	// (0x000a79c3) main_mup_eq_pane_t9_ParamLimits

0x2bf5,	// (0x000a79c3) main_mup_eq_pane_t9

0x2c0f,	// (0x000a79dd) main_mup_eq_pane_t10_ParamLimits

0x2c0f,	// (0x000a79dd) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000b4223) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000b4223) main_mup_eq_pane_t

0x2cbe,	// (0x000a7a8c) mup_equalizer_pane_cp5_ParamLimits

0x2cd2,	// (0x000a7aa0) mup_equalizer_pane_cp6_ParamLimits

0x2ce6,	// (0x000a7ab4) mup_equalizer_pane_cp7_ParamLimits

0x9542,	// (0x000ae310) main_gallery_pane

0xbc65,	// (0x000b0a33) smil2_volume_pane

0xbc6d,	// (0x000b0a3b) smil_status_volume_pane_g1_ParamLimits

0xbc80,	// (0x000b0a4e) smil_status_volume_pane_g2_ParamLimits

0x9d44,	// (0x000aeb12) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x000b43d9) smil_status_volume_pane_g_ParamLimits

0xbdd2,	// (0x000b0ba0) bg_popup_window_pane_cp07_ParamLimits

0xbde0,	// (0x000b0bae) blid_firmament_pane

0x4420,	// (0x000a91ee) aid_size_cell_gallery_ParamLimits

0x4420,	// (0x000a91ee) aid_size_cell_gallery

0x4436,	// (0x000a9204) grid_gallery_pane_ParamLimits

0x4436,	// (0x000a9204) grid_gallery_pane

0x444f,	// (0x000a921d) cell_gallery_pane_ParamLimits

0x444f,	// (0x000a921d) cell_gallery_pane

0xbf0f,	// (0x000b0cdd) bg_cell_gallery_focus_pane_ParamLimits

0xbf0f,	// (0x000b0cdd) bg_cell_gallery_focus_pane

0xbf21,	// (0x000b0cef) cell_gallery_pane_g1_ParamLimits

0xbf21,	// (0x000b0cef) cell_gallery_pane_g1

0x4498,	// (0x000a9266) cell_gallery_pane_g2_ParamLimits

0x4498,	// (0x000a9266) cell_gallery_pane_g2

0x44a5,	// (0x000a9273) cell_gallery_pane_g3_ParamLimits

0x44a5,	// (0x000a9273) cell_gallery_pane_g3

0xbf2d,	// (0x000b0cfb) cell_gallery_pane_g4_ParamLimits

0xbf2d,	// (0x000b0cfb) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x000b4487) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x000b4487) cell_gallery_pane_g

0xbf39,	// (0x000b0d07) bg_cell_gallery_focus_pane_g1

0xbf41,	// (0x000b0d0f) bg_cell_gallery_focus_pane_g2

0xbf49,	// (0x000b0d17) bg_cell_gallery_focus_pane_g3

0xbf51,	// (0x000b0d1f) bg_cell_gallery_focus_pane_g4

0xbf59,	// (0x000b0d27) bg_cell_gallery_focus_pane_g5

0xbf61,	// (0x000b0d2f) bg_cell_gallery_focus_pane_g6

0xbf69,	// (0x000b0d37) bg_cell_gallery_focus_pane_g7

0xbf71,	// (0x000b0d3f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x000b4490) bg_cell_gallery_focus_pane_g

0xbf79,	// (0x000b0d47) aid_firma_cardinal

0xbf8d,	// (0x000b0d5b) blid_firmament_pane_t1

0xbfa4,	// (0x000b0d72) blid_firmament_pane_t2

0xbfbb,	// (0x000b0d89) blid_firmament_pane_t3

0xbfd2,	// (0x000b0da0) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x000b44a1) blid_firmament_pane_t

0xbfe9,	// (0x000b0db7) blid_sat_info_pane

0xbff9,	// (0x000b0dc7) blid_sat_info_pane_g1

0xbff9,	// (0x000b0dc7) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x000b44aa) blid_sat_info_pane_g

0xc003,	// (0x000b0dd1) blid_sat_info_pane_t1

0xc011,	// (0x000b0ddf) smil2_volume_content_pane

0xc01a,	// (0x000b0de8) smil2_volume_pane_g1

0xc022,	// (0x000b0df0) smil2_volume_content_pane_g1

0xc02b,	// (0x000b0df9) smil2_volume_content_pane_g2

0xc034,	// (0x000b0e02) smil2_volume_content_pane_g3

0xc03d,	// (0x000b0e0b) smil2_volume_content_pane_g4

0xc046,	// (0x000b0e14) smil2_volume_content_pane_g5

0xc04f,	// (0x000b0e1d) smil2_volume_content_pane_g6

0xc058,	// (0x000b0e26) smil2_volume_content_pane_g7

0xc061,	// (0x000b0e2f) smil2_volume_content_pane_g8

0xc06a,	// (0x000b0e38) smil2_volume_content_pane_g9

0xc073,	// (0x000b0e41) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x000b44af) smil2_volume_content_pane_g

0x0ca9,	// (0x000a5a77) cale_week_day_heading_pane_t1_ParamLimits

0x0cee,	// (0x000a5abc) cale_week_day_heading_pane_t2_ParamLimits

0x0d38,	// (0x000a5b06) cale_week_day_heading_pane_t3_ParamLimits

0x0d82,	// (0x000a5b50) cale_week_day_heading_pane_t4_ParamLimits

0x0dcc,	// (0x000a5b9a) cale_week_day_heading_pane_t5_ParamLimits

0x0e1e,	// (0x000a5bec) cale_week_day_heading_pane_t6_ParamLimits

0x0e70,	// (0x000a5c3e) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000b3f9f) cale_week_day_heading_pane_t_ParamLimits

0x9693,	// (0x000ae461) bg_cale_side_pane_ParamLimits

0x0eb5,	// (0x000a5c83) cale_week_time_pane_t1_ParamLimits

0x0ecf,	// (0x000a5c9d) cale_week_time_pane_t2_ParamLimits

0x0ee9,	// (0x000a5cb7) cale_week_time_pane_t3_ParamLimits

0x0f03,	// (0x000a5cd1) cale_week_time_pane_t4_ParamLimits

0x0f1d,	// (0x000a5ceb) cale_week_time_pane_t5_ParamLimits

0x0f37,	// (0x000a5d05) cale_week_time_pane_t6_ParamLimits

0x0f51,	// (0x000a5d1f) cale_week_time_pane_t7_ParamLimits

0x0f6b,	// (0x000a5d39) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000b3fae) cale_week_time_pane_t_ParamLimits

0x0f8b,	// (0x000a5d59) cell_cale_week_pane_g2_ParamLimits

0x9693,	// (0x000ae461) bg_cale_side_pane_cp01_ParamLimits

0x223b,	// (0x000a7009) cale_month_week_pane_t1_ParamLimits

0x2254,	// (0x000a7022) cale_month_week_pane_t2_ParamLimits

0x226d,	// (0x000a703b) cale_month_week_pane_t3_ParamLimits

0x2286,	// (0x000a7054) cale_month_week_pane_t4_ParamLimits

0x229f,	// (0x000a706d) cale_month_week_pane_t5_ParamLimits

0x22b8,	// (0x000a7086) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000b4083) cale_month_week_pane_t_ParamLimits

0x9a3c,	// (0x000ae80a) cell_cale_month_pane_g1_ParamLimits

0x9542,	// (0x000ae310) main_cale_event_viewer_pane

0xe685,	// (0x000b3453) listscroll_cale_event_viewer_pane

0xc07c,	// (0x000b0e4a) list_cale_ev_pane

0xc084,	// (0x000b0e52) scroll_pane_cp023

0xc090,	// (0x000b0e5e) field_cale_ev_pane_ParamLimits

0xc090,	// (0x000b0e5e) field_cale_ev_pane

0xc0ae,	// (0x000b0e7c) field_cale_ev_content_pane_ParamLimits

0xc0ae,	// (0x000b0e7c) field_cale_ev_content_pane

0xc0ba,	// (0x000b0e88) field_cale_ev_pane_g1_ParamLimits

0xc0ba,	// (0x000b0e88) field_cale_ev_pane_g1

0xc0c6,	// (0x000b0e94) field_cale_ev_pane_g2_ParamLimits

0xc0c6,	// (0x000b0e94) field_cale_ev_pane_g2

0xc0de,	// (0x000b0eac) field_cale_ev_pane_g3_ParamLimits

0xc0de,	// (0x000b0eac) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x000b44c4) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x000b44c4) field_cale_ev_pane_g

0xc0f6,	// (0x000b0ec4) field_cale_ev_pane_t1_ParamLimits

0xc0f6,	// (0x000b0ec4) field_cale_ev_pane_t1

0xc10d,	// (0x000b0edb) field_cale_ev_content_pane_t1_ParamLimits

0xc10d,	// (0x000b0edb) field_cale_ev_content_pane_t1

0xa93c,	// (0x000af70a) bg_button_pane_cp01

0x09d6,	// (0x000a57a4) listscroll_cale_week_pane_ParamLimits

0x963e,	// (0x000ae40c) popup_toolbar_window_cp01

0x9664,	// (0x000ae432) listscroll_cale_week_pane_t1_ParamLimits

0x09d6,	// (0x000a57a4) listscroll_cale_day_pane_ParamLimits

0x963e,	// (0x000ae40c) popup_toolbar_window_cp02

0x9abe,	// (0x000ae88c) listscroll_cale_day_pane_t1_ParamLimits

0x3762,	// (0x000a8530) main_cale_month_pane_ParamLimits

0x9d2f,	// (0x000aeafd) popup_toolbar_window_cp03_ParamLimits

0x9d2f,	// (0x000aeafd) popup_toolbar_window_cp03

0x3063,	// (0x000a7e31) main_image_pane_g2_ParamLimits

0x3063,	// (0x000a7e31) main_image_pane_g2

0x3074,	// (0x000a7e42) main_image_pane_g3_ParamLimits

0x3074,	// (0x000a7e42) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000b42b5) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000b42b5) main_image_pane_g

0xaa56,	// (0x000af824) main_image_pane_t1_ParamLimits

0x3085,	// (0x000a7e53) main_image_pane_t2_ParamLimits

0x3085,	// (0x000a7e53) main_image_pane_t2

0x3097,	// (0x000a7e65) main_image_pane_t3_ParamLimits

0x3097,	// (0x000a7e65) main_image_pane_t3

0x30bf,	// (0x000a7e8d) main_image_pane_t4_ParamLimits

0x30bf,	// (0x000a7e8d) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000b42bc) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000b42bc) main_image_pane_t

0x30df,	// (0x000a7ead) popup_image_details_window_cp01

0x30e9,	// (0x000a7eb7) popup_toobar_trans_pane_cp01_ParamLimits

0x30e9,	// (0x000a7eb7) popup_toobar_trans_pane_cp01

0x387b,	// (0x000a8649) popup_image_details_window_ParamLimits

0x387b,	// (0x000a8649) popup_image_details_window

0x9d02,	// (0x000aead0) popup_image_focus_window

0x3c92,	// (0x000a8a60) camera2_autofocus_pane_ParamLimits

0x3c92,	// (0x000a8a60) camera2_autofocus_pane

0xe685,	// (0x000b3453) bg_popup_sub_pane_cp06

0xc12b,	// (0x000b0ef9) popup_image_focus_window_g1

0xc133,	// (0x000b0f01) popup_image_focus_window_g2

0xc13b,	// (0x000b0f09) popup_image_focus_window_g3

0xc143,	// (0x000b0f11) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x000b44cb) popup_image_focus_window_g

0xc14b,	// (0x000b0f19) popup_image_focus_window_t1

0xc159,	// (0x000b0f27) popup_image_focus_window_t2

0xc169,	// (0x000b0f37) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x000b44d4) popup_image_focus_window_t

0xc177,	// (0x000b0f45) camera2_autofocus_pane_g1

0xbbe5,	// (0x000b09b3) bg_tb_trans_pane_cp01

0xc185,	// (0x000b0f53) popup_image_details_window_g1

0xc198,	// (0x000b0f66) popup_image_details_window_g2

0x0002,

0xf718,	// (0x000b44e6) popup_image_details_window_g

0xc1c1,	// (0x000b0f8f) popup_image_details_window_t1

0xc1d3,	// (0x000b0fa1) popup_image_details_window_t2

0xc1ec,	// (0x000b0fba) popup_image_details_window_t3

0xc200,	// (0x000b0fce) popup_image_details_window_t4

0xc21b,	// (0x000b0fe9) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x000b44ed) popup_image_details_window_t

0xedae,	// (0x000b3b7c) bg_calc_paper_pane_ParamLimits

0x9542,	// (0x000ae310) grid_highlight_pane_cp013

0x9554,	// (0x000ae322) list_calc_pane_ParamLimits

0x9566,	// (0x000ae334) scroll_pane_cp024

0xedc2,	// (0x000b3b90) bg_calc_display_pane_ParamLimits

0x0807,	// (0x000a55d5) calc_display_pane_t1_ParamLimits

0x0819,	// (0x000a55e7) calc_display_pane_t2_ParamLimits

0x956e,	// (0x000ae33c) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000b3f1f) calc_display_pane_t_ParamLimits

0x08d3,	// (0x000a56a1) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000b3f3c) cell_calc_pane_g

0x08dc,	// (0x000a56aa) cell_calc_pane_t1

0xee21,	// (0x000b3bef) grid_highlight_pane_cp02_ParamLimits

0xee37,	// (0x000b3c05) toolbar_button_pane_cp01_ParamLimits

0xee37,	// (0x000b3c05) toolbar_button_pane_cp01

0xaa9b,	// (0x000af869) temp_image_control_pane_ParamLimits

0xaa9b,	// (0x000af869) temp_image_control_pane

0x9534,	// (0x000ae302) main_mp3_pane

0xc235,	// (0x000b1003) temp_image_control_pane_g1_ParamLimits

0xc235,	// (0x000b1003) temp_image_control_pane_g1

0xc243,	// (0x000b1011) temp_image_control_pane_g2_ParamLimits

0xc243,	// (0x000b1011) temp_image_control_pane_g2

0xc255,	// (0x000b1023) temp_image_control_pane_g3_ParamLimits

0xc255,	// (0x000b1023) temp_image_control_pane_g3

0x44e2,	// (0x000a92b0) temp_image_control_pane_g4_ParamLimits

0x44e2,	// (0x000a92b0) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x000b44f8) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x000b44f8) temp_image_control_pane_g

0xc235,	// (0x000b1003) main_mp3_pane_g1

0x44f5,	// (0x000a92c3) main_mp3_pane_g2

0x0007,

0xf733,	// (0x000b4501) main_mp3_pane_g

0xc298,	// (0x000b1066) main_mp3_pane_t1

0x9700,	// (0x000ae4ce) main_camera_pane_g8_ParamLimits

0x9700,	// (0x000ae4ce) main_camera_pane_g8

0x1285,	// (0x000a6053) main_video_pane_g7_ParamLimits

0x1285,	// (0x000a6053) main_video_pane_g7

0x9d84,	// (0x000aeb52) main_camera2_pane_t7_ParamLimits

0x9d84,	// (0x000aeb52) main_camera2_pane_t7

0x9848,	// (0x000ae616) scroll_pane_cp025_ParamLimits

0x9848,	// (0x000ae616) scroll_pane_cp025

0x985c,	// (0x000ae62a) scroll_pane_cp026_ParamLimits

0x985c,	// (0x000ae62a) scroll_pane_cp026

0x986b,	// (0x000ae639) wml_content_pane_ParamLimits

0x9542,	// (0x000ae310) main_touch_calib_pane

0x45c9,	// (0x000a9397) main_touch_calib_pane_g1

0x45db,	// (0x000a93a9) main_touch_calib_pane_g2

0x45ed,	// (0x000a93bb) main_touch_calib_pane_g3

0x45ff,	// (0x000a93cd) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000b451f) main_touch_calib_pane_g

0x4611,	// (0x000a93df) main_touch_calib_pane_t1

0x462b,	// (0x000a93f9) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000b4528) main_touch_calib_pane_t

0xa668,	// (0x000af436) mup_progress_pane_cp02

0xa69d,	// (0x000af46b) navi_pane_g1

0xa758,	// (0x000af526) navi_pane_mp_t3

0x9534,	// (0x000ae302) main_mp3_pane_ParamLimits

0x3a00,	// (0x000a87ce) navi_pane_ParamLimits

0xc235,	// (0x000b1003) main_mp3_pane_g1_ParamLimits

0x44f5,	// (0x000a92c3) main_mp3_pane_g2_ParamLimits

0x4503,	// (0x000a92d1) main_mp3_pane_g3_ParamLimits

0x4503,	// (0x000a92d1) main_mp3_pane_g3

0x4511,	// (0x000a92df) main_mp3_pane_g4_ParamLimits

0x4511,	// (0x000a92df) main_mp3_pane_g4

0xc265,	// (0x000b1033) main_mp3_pane_g5_ParamLimits

0xc265,	// (0x000b1033) main_mp3_pane_g5

0xc273,	// (0x000b1041) main_mp3_pane_g6_ParamLimits

0xc273,	// (0x000b1041) main_mp3_pane_g6

0xc280,	// (0x000b104e) main_mp3_pane_g7_ParamLimits

0xc280,	// (0x000b104e) main_mp3_pane_g7

0xc28c,	// (0x000b105a) main_mp3_pane_g8_ParamLimits

0xc28c,	// (0x000b105a) main_mp3_pane_g8

0xf733,	// (0x000b4501) main_mp3_pane_g_ParamLimits

0x451d,	// (0x000a92eb) main_mp3_pane_t2

0x452b,	// (0x000a92f9) main_mp3_pane_t3

0xc2a6,	// (0x000b1074) main_mp3_pane_t4

0xc2b4,	// (0x000b1082) main_mp3_pane_t5

0x0005,

0xf744,	// (0x000b4512) main_mp3_pane_t

0xc2c2,	// (0x000b1090) mup_progress_pane_cp01

0x028d,	// (0x000a505b) aid_zoom_text_secondary2

0xc07c,	// (0x000b0e4a) list_cale_ev2_pane

0xc084,	// (0x000b0e52) scroll_pane_cp023_ParamLimits

0x4681,	// (0x000a944f) field_cale_ev2_pane_ParamLimits

0x4681,	// (0x000a944f) field_cale_ev2_pane

0x46a1,	// (0x000a946f) field_cale_ev2_pane_g1_ParamLimits

0x46a1,	// (0x000a946f) field_cale_ev2_pane_g1

0x46ad,	// (0x000a947b) field_cale_ev2_pane_g2_ParamLimits

0x46ad,	// (0x000a947b) field_cale_ev2_pane_g2

0x46c5,	// (0x000a9493) field_cale_ev2_pane_g3_ParamLimits

0x46c5,	// (0x000a9493) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000b4533) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000b4533) field_cale_ev2_pane_g

0xc2d6,	// (0x000b10a4) field_cale_ev2_pane_t1_ParamLimits

0xc2d6,	// (0x000b10a4) field_cale_ev2_pane_t1

0xc2ed,	// (0x000b10bb) field_cale_ev2_pane_t2_ParamLimits

0xc2ed,	// (0x000b10bb) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000b453c) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000b453c) field_cale_ev2_pane_t

0x2f18,	// (0x000a7ce6) main_postcard_pane_g5_ParamLimits

0x2f18,	// (0x000a7ce6) main_postcard_pane_g5

0x2f2e,	// (0x000a7cfc) main_postcard_pane_g6_ParamLimits

0x2f2e,	// (0x000a7cfc) main_postcard_pane_g6

0x1051,	// (0x000a5e1f) camera2_autofocus_pane_cp_ParamLimits

0x1051,	// (0x000a5e1f) camera2_autofocus_pane_cp

0x9534,	// (0x000ae302) main_mup3_pane

0x46dd,	// (0x000a94ab) main_mup3_pane_g1_ParamLimits

0x46dd,	// (0x000a94ab) main_mup3_pane_g1

0x46ff,	// (0x000a94cd) main_mup3_pane_g2_ParamLimits

0x46ff,	// (0x000a94cd) main_mup3_pane_g2

0x477d,	// (0x000a954b) main_mup3_pane_g3_ParamLimits

0x477d,	// (0x000a954b) main_mup3_pane_g3

0x47c3,	// (0x000a9591) main_mup3_pane_g4_ParamLimits

0x47c3,	// (0x000a9591) main_mup3_pane_g4

0x4809,	// (0x000a95d7) main_mup3_pane_g5_ParamLimits

0x4809,	// (0x000a95d7) main_mup3_pane_g5

0x484f,	// (0x000a961d) main_mup3_pane_g6_ParamLimits

0x484f,	// (0x000a961d) main_mup3_pane_g6

0xc322,	// (0x000b10f0) main_mup3_pane_g7_ParamLimits

0xc322,	// (0x000b10f0) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000b454c) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000b454c) main_mup3_pane_g

0x48cd,	// (0x000a969b) main_mup3_pane_t1_ParamLimits

0x48cd,	// (0x000a969b) main_mup3_pane_t1

0x4941,	// (0x000a970f) main_mup3_pane_t2_ParamLimits

0x4941,	// (0x000a970f) main_mup3_pane_t2

0x4a15,	// (0x000a97e3) main_mup3_pane_t4_ParamLimits

0x4a15,	// (0x000a97e3) main_mup3_pane_t4

0x4a6b,	// (0x000a9839) main_mup3_pane_t5_ParamLimits

0x4a6b,	// (0x000a9839) main_mup3_pane_t5

0x4b27,	// (0x000a98f5) main_mup3_pane_t6_ParamLimits

0x4b27,	// (0x000a98f5) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000b455d) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000b455d) main_mup3_pane_t

0x4bdf,	// (0x000a99ad) mup3_progress_pane_ParamLimits

0x4bdf,	// (0x000a99ad) mup3_progress_pane

0x4c75,	// (0x000a9a43) popup_mup3_control_window_ParamLimits

0x4c75,	// (0x000a9a43) popup_mup3_control_window

0xc330,	// (0x000b10fe) popup_mup3_text_window

0x4ca7,	// (0x000a9a75) mup3_progress_pane_t1

0x4cc6,	// (0x000a9a94) mup3_progress_pane_t2

0xc338,	// (0x000b1106) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000b456a) mup3_progress_pane_t

0xc355,	// (0x000b1123) mup_progress_pane_cp03

0xe685,	// (0x000b3453) bg_tb_trans_pane_cp04

0x4ce5,	// (0x000a9ab3) mup3_volume_pane

0x4ced,	// (0x000a9abb) popup_mup3_control_window_g1

0x4cf6,	// (0x000a9ac4) mup3_volume_pane_g1

0x4cff,	// (0x000a9acd) mup3_volume_pane_g2

0x4d08,	// (0x000a9ad6) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000b4571) mup3_volume_pane_g

0xe685,	// (0x000b3453) bg_tb_trans_pane_cp03

0xc365,	// (0x000b1133) popup_mup3_text_window_g1

0xc36d,	// (0x000b113b) popup_mup3_text_window_t1

0xee0a,	// (0x000b3bd8) list_calc_item_pane_g1_ParamLimits

0xbd40,	// (0x000b0b0e) mup_volume_pane_cp_g1

0x4645,	// (0x000a9413) main_touch_calib_pane_t3

0x4659,	// (0x000a9427) main_touch_calib_pane_t4

0x466d,	// (0x000a943b) main_touch_calib_pane_t5

0x0239,	// (0x000a5007) aid_cell_size_toolbar2

0x0241,	// (0x000a500f) aid_popup3_width_pane

0x027d,	// (0x000a504b) aid_zoom_text_msg_primary

0x1030,	// (0x000a5dfe) vorec_t7

0xedce,	// (0x000b3b9c) bg_calc_paper_pane_g1_ParamLimits

0xedda,	// (0x000b3ba8) bg_calc_paper_pane_g2_ParamLimits

0xede6,	// (0x000b3bb4) bg_calc_paper_pane_g3_ParamLimits

0xedf2,	// (0x000b3bc0) bg_calc_paper_pane_g4_ParamLimits

0xedfe,	// (0x000b3bcc) bg_calc_paper_pane_g5_ParamLimits

0x0860,	// (0x000a562e) bg_calc_paper_pane_g6_ParamLimits

0x086f,	// (0x000a563d) bg_calc_paper_pane_g7_ParamLimits

0x087e,	// (0x000a564c) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000b3f26) bg_calc_paper_pane_g_ParamLimits

0x0891,	// (0x000a565f) calc_bg_paper_pane_g9_ParamLimits

0x119c,	// (0x000a5f6a) image_qvga_pane_ParamLimits

0x119c,	// (0x000a5f6a) image_qvga_pane

0xecfd,	// (0x000b3acb) bg_popup_sub_pane_cp04_ParamLimits

0xa9d2,	// (0x000af7a0) popup_mup_playback_window_g1_ParamLimits

0xa9de,	// (0x000af7ac) popup_mup_playback_window_t1_ParamLimits

0xa9f3,	// (0x000af7c1) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000b42b0) popup_mup_playback_window_t_ParamLimits

0x4185,	// (0x000a8f53) main_mup2_pane_g3_ParamLimits

0x4185,	// (0x000a8f53) main_mup2_pane_g3

0x15ab,	// (0x000a6379) popup_toolbar_window_cp04

0xadd5,	// (0x000afba3) popup_call2_audio_second_window_g3_ParamLimits

0xadd5,	// (0x000afba3) popup_call2_audio_second_window_g3

0xb1eb,	// (0x000affb9) popup_call2_audio_first_window_g4_ParamLimits

0xb1eb,	// (0x000affb9) popup_call2_audio_first_window_g4

0xb86a,	// (0x000b0638) popup_call2_audio_in_window_g4_ParamLimits

0xb86a,	// (0x000b0638) popup_call2_audio_in_window_g4

0x3045,	// (0x000a7e13) aid_area_sk_bg_cut_ParamLimits

0x3045,	// (0x000a7e13) aid_area_sk_bg_cut

0xaa08,	// (0x000af7d6) aid_area_sk_bg_cut_2_ParamLimits

0xaa08,	// (0x000af7d6) aid_area_sk_bg_cut_2

0x4488,	// (0x000a9256) aid_placing_details_win

0x4490,	// (0x000a925e) aid_placing_details_win_2

0xc177,	// (0x000b0f45) camera2_autofocus_pane_g1_ParamLimits

0x044f,	// (0x000a521d) popup_fixed_preview_cale_window_ParamLimits

0x044f,	// (0x000a521d) popup_fixed_preview_cale_window

0xa7d6,	// (0x000af5a4) navi_slider_pane_g3

0xa7df,	// (0x000af5ad) navi_slider_pane_g4

0xa7e8,	// (0x000af5b6) navi_slider_pane_g5

0xa7d6,	// (0x000af5a4) navi_slider_pane_g6

0x9cb1,	// (0x000aea7f) navi_slider_pane_g7

0xa909,	// (0x000af6d7) mup_scale_pane_g3

0xa912,	// (0x000af6e0) mup_scale_pane_g4

0xa91b,	// (0x000af6e9) mup_scale_pane_g5

0x2cfa,	// (0x000a7ac8) mup_scale_pane_g6

0x2d03,	// (0x000a7ad1) mup_scale_pane_g7

0xa7d6,	// (0x000af5a4) cams2_slider_pane_g3

0xbdc2,	// (0x000b0b90) cams2_slider_pane_g4

0x9dea,	// (0x000aebb8) cams2_slider_pane_g5

0xa7d6,	// (0x000af5a4) cams2_slider_pane_g6

0x9df2,	// (0x000aebc0) cams2_slider_pane_g7

0xbff9,	// (0x000b0dc7) camera2_autofocus_pane_cp_g1

0xbbcb,	// (0x000b0999) bg_popup_preview_window_pane_cp02_ParamLimits

0xbbcb,	// (0x000b0999) bg_popup_preview_window_pane_cp02

0xc37b,	// (0x000b1149) list_fp_cale_pane_ParamLimits

0xc37b,	// (0x000b1149) list_fp_cale_pane

0xc387,	// (0x000b1155) popup_fixed_preview_cale_window_t1_ParamLimits

0xc387,	// (0x000b1155) popup_fixed_preview_cale_window_t1

0x4d11,	// (0x000a9adf) popup_fixed_preview_cale_window_t2_ParamLimits

0x4d11,	// (0x000a9adf) popup_fixed_preview_cale_window_t2

0x4d26,	// (0x000a9af4) popup_fixed_preview_cale_window_t3_ParamLimits

0x4d26,	// (0x000a9af4) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x000b4578) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x000b4578) popup_fixed_preview_cale_window_t

0x4d3b,	// (0x000a9b09) list_single_fp_cale_pane_ParamLimits

0x4d3b,	// (0x000a9b09) list_single_fp_cale_pane

0xc3a5,	// (0x000b1173) list_single_fp_cale_pane_g1_ParamLimits

0xc3a5,	// (0x000b1173) list_single_fp_cale_pane_g1

0xc3b1,	// (0x000b117f) list_single_fp_cale_pane_g2_ParamLimits

0xc3b1,	// (0x000b117f) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x000b457f) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x000b457f) list_single_fp_cale_pane_g

0xc3ca,	// (0x000b1198) list_single_fp_cale_pane_t1_ParamLimits

0xc3ca,	// (0x000b1198) list_single_fp_cale_pane_t1

0xc3dc,	// (0x000b11aa) list_single_fp_cale_pane_t2_ParamLimits

0xc3dc,	// (0x000b11aa) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x000b4586) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x000b4586) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9542,	// (0x000ae310) main_dialer_pane

0x4d50,	// (0x000a9b1e) aid_cell_size_keypad

0x4d5a,	// (0x000a9b28) dialer_ne_pane

0x4d62,	// (0x000a9b30) grid_dialer_command_1_pane

0x4d6a,	// (0x000a9b38) grid_dialer_command_2_pane

0x4d72,	// (0x000a9b40) grid_dialer_keypad_pane

0x4d84,	// (0x000a9b52) bg_popup_call_pane_cp06_ParamLimits

0x4d84,	// (0x000a9b52) bg_popup_call_pane_cp06

0x4d90,	// (0x000a9b5e) dialer_ne_clear_pane_ParamLimits

0x4d90,	// (0x000a9b5e) dialer_ne_clear_pane

0xc40f,	// (0x000b11dd) dialer_ne_pane_g1

0xc417,	// (0x000b11e5) dialer_ne_pane_t1_ParamLimits

0xc417,	// (0x000b11e5) dialer_ne_pane_t1

0x4d9c,	// (0x000a9b6a) dialer_ne_pane_t2_ParamLimits

0x4d9c,	// (0x000a9b6a) dialer_ne_pane_t2

0x4dc6,	// (0x000a9b94) dialer_ne_pane_t3_ParamLimits

0x4dc6,	// (0x000a9b94) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x000b458b) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x000b458b) dialer_ne_pane_t

0x4df6,	// (0x000a9bc4) dialer_ne_pane_t3_copy1_ParamLimits

0x4df6,	// (0x000a9bc4) dialer_ne_pane_t3_copy1

0x4e25,	// (0x000a9bf3) cell_dialer_keypad_pane_ParamLimits

0x4e25,	// (0x000a9bf3) cell_dialer_keypad_pane

0x4e3c,	// (0x000a9c0a) cell_dialer_command_1_pane_ParamLimits

0x4e3c,	// (0x000a9c0a) cell_dialer_command_1_pane

0x4e52,	// (0x000a9c20) cell_dialer_command_2_pane_ParamLimits

0x4e52,	// (0x000a9c20) cell_dialer_command_2_pane

0xc429,	// (0x000b11f7) bg_button_pane_cp02_ParamLimits

0xc429,	// (0x000b11f7) bg_button_pane_cp02

0x4e61,	// (0x000a9c2f) cell_dialer_keypad_pane_g1_ParamLimits

0x4e61,	// (0x000a9c2f) cell_dialer_keypad_pane_g1

0xc429,	// (0x000b11f7) bg_button_pane_cp03_ParamLimits

0xc429,	// (0x000b11f7) bg_button_pane_cp03

0x4e75,	// (0x000a9c43) cell_dialer_command_1_pane_g1_ParamLimits

0x4e75,	// (0x000a9c43) cell_dialer_command_1_pane_g1

0xc435,	// (0x000b1203) bg_button_pane_cp04

0x4e89,	// (0x000a9c57) cell_dialer_command_2_pane_g1

0x96ee,	// (0x000ae4bc) bg_button_pane_cp06

0xc43d,	// (0x000b120b) dialer_ne_clear_pane_g1

0xa6a9,	// (0x000af477) navi_pane_g2

0xa6d7,	// (0x000af4a5) navi_pane_g3

0x0002,

0xf3e5,	// (0x000b41b3) navi_pane_g

0xa766,	// (0x000af534) navi_pane_mv_g2

0xa78d,	// (0x000af55b) navi_pane_mv_g5

0x28be,	// (0x000a768c) navi_pane_mv_t1

0xedc2,	// (0x000b3b90) main_clock2_pane

0x4ed4,	// (0x000a9ca2) main_clock2_list_pane_ParamLimits

0x4ed4,	// (0x000a9ca2) main_clock2_list_pane

0x4f0a,	// (0x000a9cd8) main_clock2_pane_t1_ParamLimits

0x4f0a,	// (0x000a9cd8) main_clock2_pane_t1

0x4f46,	// (0x000a9d14) main_clock2_pane_t2_ParamLimits

0x4f46,	// (0x000a9d14) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000b4597) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000b4597) main_clock2_pane_t

0x4fe4,	// (0x000a9db2) popup_clock_analogue_window_cp03_ParamLimits

0x4fe4,	// (0x000a9db2) popup_clock_analogue_window_cp03

0x5009,	// (0x000a9dd7) popup_clock_digital_window_cp02_ParamLimits

0x5009,	// (0x000a9dd7) popup_clock_digital_window_cp02

0x507a,	// (0x000a9e48) main_clock2_list_single_pane_ParamLimits

0x507a,	// (0x000a9e48) main_clock2_list_single_pane

0x96ee,	// (0x000ae4bc) list_highlight_pane_cp05

0xc47b,	// (0x000b1249) main_clock2_list_single_pane_t1

0x15ab,	// (0x000a6379) popup_toolbar_window_cp04_ParamLimits

0x44b2,	// (0x000a9280) camera2_autofocus_pane_g2_ParamLimits

0x44b2,	// (0x000a9280) camera2_autofocus_pane_g2

0x44be,	// (0x000a928c) camera2_autofocus_pane_g3_ParamLimits

0x44be,	// (0x000a928c) camera2_autofocus_pane_g3

0x44ca,	// (0x000a9298) camera2_autofocus_pane_g4_ParamLimits

0x44ca,	// (0x000a9298) camera2_autofocus_pane_g4

0x44d6,	// (0x000a92a4) camera2_autofocus_pane_g5_ParamLimits

0x44d6,	// (0x000a92a4) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x000b44db) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x000b44db) camera2_autofocus_pane_g

0xc302,	// (0x000b10d0) camera2_autofocus_pane_cp_g2

0xc30a,	// (0x000b10d8) camera2_autofocus_pane_cp_g3

0xc312,	// (0x000b10e0) camera2_autofocus_pane_cp_g4

0xc31a,	// (0x000b10e8) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000b4541) camera2_autofocus_pane_cp_g

0x4d7c,	// (0x000a9b4a) popup_dialer_spcha_window

0xe685,	// (0x000b3453) bg_popup_sub_pane_cp07

0xc489,	// (0x000b1257) list_spcha_pane

0xc491,	// (0x000b125f) list_single_spcha_pane_ParamLimits

0xc491,	// (0x000b125f) list_single_spcha_pane

0xe685,	// (0x000b3453) list_highlight_pane_cp06

0xc4a2,	// (0x000b1270) list_single_spcha_pane_t1

0xb614,	// (0x000b03e2) popup_call2_audio_out_window_g4_ParamLimits

0xb614,	// (0x000b03e2) popup_call2_audio_out_window_g4

0x9542,	// (0x000ae310) main_imed2_pane

0x9d0a,	// (0x000aead8) popup_imed_adjust2_window

0x3893,	// (0x000a8661) popup_imed_trans_window_ParamLimits

0x3893,	// (0x000a8661) popup_imed_trans_window

0xbe37,	// (0x000b0c05) popup_blid_sat_info2_window_t1

0xbe45,	// (0x000b0c13) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000b4470) popup_blid_sat_info2_window_t

0x5124,	// (0x000a9ef2) aid_size_cell_colour_35

0x5144,	// (0x000a9f12) aid_size_cell_colour_112

0x5164,	// (0x000a9f32) aid_size_cell_effect

0xbbd7,	// (0x000b09a5) bg_tb_trans_pane_cp02

0x9bc7,	// (0x000ae995) heading_imed_pane

0x5184,	// (0x000a9f52) listscroll_imed_pane

0xc4b0,	// (0x000b127e) heading_imed_pane_g1

0xc4b8,	// (0x000b1286) heading_imed_pane_t1

0xc4c6,	// (0x000b1294) grid_imed_colour_35_pane_ParamLimits

0xc4c6,	// (0x000b1294) grid_imed_colour_35_pane

0x5190,	// (0x000a9f5e) grid_imed_effect_pane

0xc4dd,	// (0x000b12ab) list_imed_aspect_pane

0x51a6,	// (0x000a9f74) scroll_pane_cp027_ParamLimits

0x51a6,	// (0x000a9f74) scroll_pane_cp027

0x51b7,	// (0x000a9f85) cell_imed_effect_pane_ParamLimits

0x51b7,	// (0x000a9f85) cell_imed_effect_pane

0xc4e5,	// (0x000b12b3) cell_imed_colour_pane_ParamLimits

0xc4e5,	// (0x000b12b3) cell_imed_colour_pane

0xc527,	// (0x000b12f5) cell_imed_colour_pane_g1_ParamLimits

0xc527,	// (0x000b12f5) cell_imed_colour_pane_g1

0xc538,	// (0x000b1306) hgihlgiht_grid_pane_cp016_ParamLimits

0xc538,	// (0x000b1306) hgihlgiht_grid_pane_cp016

0x51de,	// (0x000a9fac) cell_imed_effect_pane_g1

0x51e6,	// (0x000a9fb4) grid_highlight_pane_cp017

0xc549,	// (0x000b1317) list_imed_single_pane_ParamLimits

0xc549,	// (0x000b1317) list_imed_single_pane

0xe685,	// (0x000b3453) list_highlight_pane_cp07

0xc55e,	// (0x000b132c) list_imed_aspect_pane_comp1_t1

0xbbd7,	// (0x000b09a5) bg_tb_trans_pane_cp05

0xc580,	// (0x000b134e) popup_imed_adjust2_window_g1

0xc5a7,	// (0x000b1375) popup_imed_adjust2_window_t1

0xc5bf,	// (0x000b138d) slider_imed_adjust_pane

0xc5d3,	// (0x000b13a1) slider_imed_adjust_pane_g1

0xc5e3,	// (0x000b13b1) slider_imed_adjust_pane_g2

0xc5f3,	// (0x000b13c1) slider_imed_adjust_pane_g3

0xc604,	// (0x000b13d2) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000b45b4) slider_imed_adjust_pane_g

0x51ef,	// (0x000a9fbd) aid_size_cell_clipart2

0x51fb,	// (0x000a9fc9) grid_imed_clipart_pane

0xc615,	// (0x000b13e3) scroll_pane_cp031

0x5205,	// (0x000a9fd3) cell_imed_clipart_pane_ParamLimits

0x5205,	// (0x000a9fd3) cell_imed_clipart_pane

0x5227,	// (0x000a9ff5) cell_imed_clipart_pane_g1

0xe685,	// (0x000b3453) grid_highlight_pane_cp014

0x4ee9,	// (0x000a9cb7) main_clock2_pane_g1_ParamLimits

0x4ee9,	// (0x000a9cb7) main_clock2_pane_g1

0x5025,	// (0x000a9df3) aid_call2_pane_cp10

0x5037,	// (0x000a9e05) aid_call_pane_cp10

0xa60a,	// (0x000af3d8) popup_clock_analogue_window_cp10_g1

0xa60a,	// (0x000af3d8) popup_clock_analogue_window_cp10_g2

0x5049,	// (0x000a9e17) popup_clock_analogue_window_cp10_g3

0x5049,	// (0x000a9e17) popup_clock_analogue_window_cp10_g4

0xa60a,	// (0x000af3d8) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000b45a2) popup_clock_analogue_window_cp10_g

0x505b,	// (0x000a9e29) popup_clock_analogue_window_cp10_t1

0x508c,	// (0x000a9e5a) clock_digital_number_pane_cp10_ParamLimits

0x508c,	// (0x000a9e5a) clock_digital_number_pane_cp10

0x50a4,	// (0x000a9e72) clock_digital_number_pane_cp11_ParamLimits

0x50a4,	// (0x000a9e72) clock_digital_number_pane_cp11

0x50bc,	// (0x000a9e8a) clock_digital_number_pane_cp12_ParamLimits

0x50bc,	// (0x000a9e8a) clock_digital_number_pane_cp12

0x50d4,	// (0x000a9ea2) clock_digital_number_pane_cp13_ParamLimits

0x50d4,	// (0x000a9ea2) clock_digital_number_pane_cp13

0x50ec,	// (0x000a9eba) clock_digital_separator_pane_cp10_ParamLimits

0x50ec,	// (0x000a9eba) clock_digital_separator_pane_cp10

0x5104,	// (0x000a9ed2) popup_clock_digital_window_cp02_t1_ParamLimits

0x5104,	// (0x000a9ed2) popup_clock_digital_window_cp02_t1

0xecf5,	// (0x000b3ac3) clock_digital_number_pane_cp10_g1

0xecf5,	// (0x000b3ac3) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000b45bd) clock_digital_number_pane_cp10_g

0xecf5,	// (0x000b3ac3) clock_digital_separator_pane_cp10_g1

0xecf5,	// (0x000b3ac3) clock_digital_separator_pane_g2_cp10

0xa795,	// (0x000af563) navi_pane_vded_g4

0xa79e,	// (0x000af56c) navi_pane_vded_g5

0xa7a7,	// (0x000af575) navi_pane_vded_t1

0x9542,	// (0x000ae310) main_vded_pane

0x5230,	// (0x000a9ffe) main_vded_pane_g1

0x523a,	// (0x000aa008) main_vded_pane_g2

0x5244,	// (0x000aa012) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000b45c2) main_vded_pane_g

0x524e,	// (0x000aa01c) main_vded_pane_t1

0x525c,	// (0x000aa02a) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000b45c9) main_vded_pane_t

0x526a,	// (0x000aa038) vded_slider_pane

0x5272,	// (0x000aa040) vded_video_pane

0xc61d,	// (0x000b13eb) vded_video_pane_g1

0x527a,	// (0x000aa048) vded_video_pane_g2

0xbff9,	// (0x000b0dc7) vded_video_pane_g3

0x0002,

0xf800,	// (0x000b45ce) vded_video_pane_g

0xc627,	// (0x000b13f5) vded_slider_pane_g1

0xbd40,	// (0x000b0b0e) vded_slider_pane_g2

0xc630,	// (0x000b13fe) vded_slider_pane_g3

0xc639,	// (0x000b1407) vded_slider_pane_g4

0xc642,	// (0x000b1410) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000b45d5) vded_slider_pane_g

0x4c5d,	// (0x000a9a2b) mup3_rocker_pane_ParamLimits

0x4c5d,	// (0x000a9a2b) mup3_rocker_pane

0x5283,	// (0x000aa051) mup3_control_keys_pane_g1

0x528b,	// (0x000aa059) mup3_control_keys_pane_g2

0x5293,	// (0x000aa061) mup3_control_keys_pane_g3

0x529b,	// (0x000aa069) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000b45e0) mup3_control_keys_pane_g

0x0486,	// (0x000a5254) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0486,	// (0x000a5254) popup_toolbar2_fixed_window_cp01

0x4c91,	// (0x000a9a5f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4c91,	// (0x000a9a5f) popup_toolbar2_fixed_window_cp02

0xaf47,	// (0x000afd15) popup_call2_audio_second_window_t4_ParamLimits

0xaf47,	// (0x000afd15) popup_call2_audio_second_window_t4

0xb481,	// (0x000b024f) popup_call2_audio_first_window_t6_ParamLimits

0xb481,	// (0x000b024f) popup_call2_audio_first_window_t6

0xb717,	// (0x000b04e5) popup_call2_audio_out_window_t6_ParamLimits

0xb717,	// (0x000b04e5) popup_call2_audio_out_window_t6

0x9542,	// (0x000ae310) main_vitu_pane

0x52ab,	// (0x000aa079) aid_size_cell_itu_ParamLimits

0x52ab,	// (0x000aa079) aid_size_cell_itu

0xbbe5,	// (0x000b09b3) bg_popup_window_pane_cp08_ParamLimits

0xbbe5,	// (0x000b09b3) bg_popup_window_pane_cp08

0x52c1,	// (0x000aa08f) field_vitu_entry_pane_ParamLimits

0x52c1,	// (0x000aa08f) field_vitu_entry_pane

0x52d8,	// (0x000aa0a6) grid_vitu_function_pane_ParamLimits

0x52d8,	// (0x000aa0a6) grid_vitu_function_pane

0x52f3,	// (0x000aa0c1) grid_vitu_itu_pane_ParamLimits

0x52f3,	// (0x000aa0c1) grid_vitu_itu_pane

0x5311,	// (0x000aa0df) cell_vitu_itu_pane_ParamLimits

0x5311,	// (0x000aa0df) cell_vitu_itu_pane

0x5333,	// (0x000aa101) cell_vitu_function_pane_ParamLimits

0x5333,	// (0x000aa101) cell_vitu_function_pane

0xbbe5,	// (0x000b09b3) bg_popup_sub_pane_cp08_ParamLimits

0xbbe5,	// (0x000b09b3) bg_popup_sub_pane_cp08

0x534c,	// (0x000aa11a) field_vitu_entry_pane_t1_ParamLimits

0x534c,	// (0x000aa11a) field_vitu_entry_pane_t1

0xc663,	// (0x000b1431) field_vitu_entry_pane_t2_ParamLimits

0xc663,	// (0x000b1431) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000b45ee) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000b45ee) field_vitu_entry_pane_t

0xc680,	// (0x000b144e) bg_button_pane_cp05_ParamLimits

0xc680,	// (0x000b144e) bg_button_pane_cp05

0x536a,	// (0x000aa138) cell_vitu_itu_pane_g1

0x5382,	// (0x000aa150) cell_vitu_itu_pane_t1_ParamLimits

0x5382,	// (0x000aa150) cell_vitu_itu_pane_t1

0x5394,	// (0x000aa162) cell_vitu_itu_pane_t2_ParamLimits

0x5394,	// (0x000aa162) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000b45f3) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000b45f3) cell_vitu_itu_pane_t

0xc68e,	// (0x000b145c) bg_button_pane_cp07

0x53c9,	// (0x000aa197) cell_vitu_function_pane_g1

0x954c,	// (0x000ae31a) main_calc_pane_g1

0x0271,	// (0x000a503f) aid_visual_content_pane

0x9542,	// (0x000ae310) main_vradio_pane

0x53d2,	// (0x000aa1a0) main_vradio_pane_g1_ParamLimits

0x53d2,	// (0x000aa1a0) main_vradio_pane_g1

0xc698,	// (0x000b1466) main_vradio_pane_g2_ParamLimits

0xc698,	// (0x000b1466) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000b45fa) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000b45fa) main_vradio_pane_g

0x53eb,	// (0x000aa1b9) main_vradio_pane_t1_ParamLimits

0x53eb,	// (0x000aa1b9) main_vradio_pane_t1

0x5400,	// (0x000aa1ce) main_vradio_pane_t2_ParamLimits

0x5400,	// (0x000aa1ce) main_vradio_pane_t2

0xc6a5,	// (0x000b1473) main_vradio_pane_t3_ParamLimits

0xc6a5,	// (0x000b1473) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000b45ff) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000b45ff) main_vradio_pane_t

0x5415,	// (0x000aa1e3) vradio_rocker_control_pane_ParamLimits

0x5415,	// (0x000aa1e3) vradio_rocker_control_pane

0x5427,	// (0x000aa1f5) vradio_station_info_pane_ParamLimits

0x5427,	// (0x000aa1f5) vradio_station_info_pane

0xc6b9,	// (0x000b1487) vradio_frequency_info_pane_ParamLimits

0xc6b9,	// (0x000b1487) vradio_frequency_info_pane

0xbff9,	// (0x000b0dc7) vradio_station_info_pane_g1

0xc6c8,	// (0x000b1496) vradio_station_info_pane_t1_ParamLimits

0xc6c8,	// (0x000b1496) vradio_station_info_pane_t1

0xc6ea,	// (0x000b14b8) vradio_station_info_pane_t2_ParamLimits

0xc6ea,	// (0x000b14b8) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000b4606) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000b4606) vradio_station_info_pane_t

0xc6fc,	// (0x000b14ca) vradio_tuning_pane

0xc704,	// (0x000b14d2) vradio_rocker_control_pane_g1

0xc70c,	// (0x000b14da) vradio_rocker_control_pane_g2

0xc714,	// (0x000b14e2) vradio_rocker_control_pane_g3

0xc71c,	// (0x000b14ea) vradio_rocker_control_pane_g4

0xc724,	// (0x000b14f2) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000b460b) vradio_rocker_control_pane_g

0x5439,	// (0x000aa207) vradio_frequency_info_pane_g1

0xc72c,	// (0x000b14fa) vradio_frequency_info_pane_t1_ParamLimits

0xc72c,	// (0x000b14fa) vradio_frequency_info_pane_t1

0x5443,	// (0x000aa211) vradio_tuning_pane_g1

0x544e,	// (0x000aa21c) vradio_tuning_pane_t1

0x02ce,	// (0x000a509c) area_side_right_pane_ParamLimits

0x02ce,	// (0x000a509c) area_side_right_pane

0xbb92,	// (0x000b0960) status_small_pane_g1

0xbb9a,	// (0x000b0968) status_small_pane_g2

0xbba3,	// (0x000b0971) status_small_pane_g3

0xbbac,	// (0x000b097a) status_small_pane_g4

0x0003,

0xf5f8,	// (0x000b43c6) status_small_pane_g

0xbbb5,	// (0x000b0983) status_small_pane_t1

0x9542,	// (0x000ae310) main_video3_pane

0xc740,	// (0x000b150e) cams_zoom_vslider_pane

0xc748,	// (0x000b1516) image3_wide_pane_ParamLimits

0xc748,	// (0x000b1516) image3_wide_pane

0xc762,	// (0x000b1530) image3_wide_small_pane

0xc76e,	// (0x000b153c) main_video3_pane_g1_ParamLimits

0xc76e,	// (0x000b153c) main_video3_pane_g1

0xc78a,	// (0x000b1558) main_video3_pane_g2_ParamLimits

0xc78a,	// (0x000b1558) main_video3_pane_g2

0x0001,

0xf848,	// (0x000b4616) main_video3_pane_g_ParamLimits

0xf848,	// (0x000b4616) main_video3_pane_g

0xc7a6,	// (0x000b1574) main_video3_pane_t1_ParamLimits

0xc7a6,	// (0x000b1574) main_video3_pane_t1

0xc7d1,	// (0x000b159f) main_video3_pane_t2_ParamLimits

0xc7d1,	// (0x000b159f) main_video3_pane_t2

0xc7fc,	// (0x000b15ca) main_video3_pane_t3_ParamLimits

0xc7fc,	// (0x000b15ca) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000b461b) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000b461b) main_video3_pane_t

0xc829,	// (0x000b15f7) cams_zoom_vslider_pane_g1

0xc832,	// (0x000b1600) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000b4622) cams_zoom_vslider_pane_g

0xc83a,	// (0x000b1608) small_slider_vertical_pane

0xbff9,	// (0x000b0dc7) small_slider_vertical_pane_g1

0xbff9,	// (0x000b0dc7) small_slider_vertical_pane_g2

0xc842,	// (0x000b1610) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000b4627) small_slider_vertical_pane_g

0x9542,	// (0x000ae310) main_hwr_training_pane

0xc84b,	// (0x000b1619) hwr_training_instruct_pane_ParamLimits

0xc84b,	// (0x000b1619) hwr_training_instruct_pane

0x545d,	// (0x000aa22b) hwr_training_navi_pane_ParamLimits

0x545d,	// (0x000aa22b) hwr_training_navi_pane

0x547c,	// (0x000aa24a) hwr_training_write_pane_ParamLimits

0x547c,	// (0x000aa24a) hwr_training_write_pane

0xe685,	// (0x000b3453) bg_frame_shadow_pane

0xc882,	// (0x000b1650) hwr_training_write_pane_g1

0xc88a,	// (0x000b1658) hwr_training_write_pane_g2

0xc892,	// (0x000b1660) hwr_training_write_pane_g3

0xc89a,	// (0x000b1668) hwr_training_write_pane_g4

0xc8a2,	// (0x000b1670) hwr_training_write_pane_g5

0xc8aa,	// (0x000b1678) hwr_training_write_pane_g6

0xc8b2,	// (0x000b1680) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000b462e) hwr_training_write_pane_g

0x9dfb,	// (0x000aebc9) hwr_training_navi_pane_g1_ParamLimits

0x9dfb,	// (0x000aebc9) hwr_training_navi_pane_g1

0x9e0d,	// (0x000aebdb) hwr_training_navi_pane_g2_ParamLimits

0x9e0d,	// (0x000aebdb) hwr_training_navi_pane_g2

0x9e1f,	// (0x000aebed) hwr_training_navi_pane_g3_ParamLimits

0x9e1f,	// (0x000aebed) hwr_training_navi_pane_g3

0x9e2f,	// (0x000aebfd) hwr_training_navi_pane_g4_ParamLimits

0x9e2f,	// (0x000aebfd) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000b463d) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000b463d) hwr_training_navi_pane_g

0x9e3c,	// (0x000aec0a) hwr_training_navi_pane_t1

0x54c4,	// (0x000aa292) list_single_hwr_training_instruct_pane_ParamLimits

0x54c4,	// (0x000aa292) list_single_hwr_training_instruct_pane

0xc8ba,	// (0x000b1688) list_single_hwr_training_instruct_pane_t1

0xbf39,	// (0x000b0d07) bg_frame_shadow_pane_g1

0xc8c9,	// (0x000b1697) bg_frame_shadow_pane_g2

0xc8d1,	// (0x000b169f) bg_frame_shadow_pane_g3

0xc8d9,	// (0x000b16a7) bg_frame_shadow_pane_g4

0xc8e1,	// (0x000b16af) bg_frame_shadow_pane_g5

0xc8e9,	// (0x000b16b7) bg_frame_shadow_pane_g6

0xc8f1,	// (0x000b16bf) bg_frame_shadow_pane_g7

0x959a,	// (0x000ae368) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000b4648) bg_frame_shadow_pane_g

0x9542,	// (0x000ae310) main_video_tele_dialer_pane

0x54d9,	// (0x000aa2a7) aid_size_cell_video_keypad_ParamLimits

0x54d9,	// (0x000aa2a7) aid_size_cell_video_keypad

0x54f3,	// (0x000aa2c1) grid_video_dialer_keypad_pane_ParamLimits

0x54f3,	// (0x000aa2c1) grid_video_dialer_keypad_pane

0x553f,	// (0x000aa30d) video_down_pane_cp_ParamLimits

0x553f,	// (0x000aa30d) video_down_pane_cp

0x5571,	// (0x000aa33f) cell_video_dialer_keypad_pane_ParamLimits

0x5571,	// (0x000aa33f) cell_video_dialer_keypad_pane

0xc8f9,	// (0x000b16c7) bg_button_pane_cp08_ParamLimits

0xc8f9,	// (0x000b16c7) bg_button_pane_cp08

0x5593,	// (0x000aa361) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5593,	// (0x000aa361) cell_video_dialer_keypad_pane_g1

0x4c47,	// (0x000a9a15) mup3_rocker2_pane_ParamLimits

0x4c47,	// (0x000a9a15) mup3_rocker2_pane

0xbff9,	// (0x000b0dc7) mup3_rocker2_pane_g1

0x3774,	// (0x000a8542) main_dialer2_pane

0x9542,	// (0x000ae310) main_mp4_pane

0x9e52,	// (0x000aec20) main_mp4_pane_g1_ParamLimits

0x9e52,	// (0x000aec20) main_mp4_pane_g1

0x9e52,	// (0x000aec20) main_mp4_pane_g2_ParamLimits

0x9e52,	// (0x000aec20) main_mp4_pane_g2

0x55ca,	// (0x000aa398) main_mp4_pane_g3_ParamLimits

0x55ca,	// (0x000aa398) main_mp4_pane_g3

0x9e60,	// (0x000aec2e) main_mp4_pane_g4_ParamLimits

0x9e60,	// (0x000aec2e) main_mp4_pane_g4

0x9e88,	// (0x000aec56) main_mp4_pane_g5_ParamLimits

0x9e88,	// (0x000aec56) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000b4668) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000b4668) main_mp4_pane_g

0x9ed8,	// (0x000aeca6) main_mp4_pane_t1_ParamLimits

0x9ed8,	// (0x000aeca6) main_mp4_pane_t1

0x9f34,	// (0x000aed02) main_mp4_pane_t2_ParamLimits

0x9f34,	// (0x000aed02) main_mp4_pane_t2

0xc905,	// (0x000b16d3) main_mp4_pane_t3_ParamLimits

0xc905,	// (0x000b16d3) main_mp4_pane_t3

0x9f86,	// (0x000aed54) main_mp4_pane_t4_ParamLimits

0x9f86,	// (0x000aed54) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000b4675) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000b4675) main_mp4_pane_t

0x9fca,	// (0x000aed98) mp4_progress_pane_ParamLimits

0x9fca,	// (0x000aed98) mp4_progress_pane

0xa014,	// (0x000aede2) mp4_rocker_pane_ParamLimits

0xa014,	// (0x000aede2) mp4_rocker_pane

0xc92d,	// (0x000b16fb) mp4_progress_pane_t1

0xc946,	// (0x000b1714) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000b467e) mp4_progress_pane_t

0xc95f,	// (0x000b172d) mup_progress_pane_cp04

0xcba3,	// (0x000b1971) mp4_rocker_pane_g1

0x5606,	// (0x000aa3d4) aid_cell_size_keypad2_ParamLimits

0x5606,	// (0x000aa3d4) aid_cell_size_keypad2

0x561c,	// (0x000aa3ea) dialer2_ne_pane_ParamLimits

0x561c,	// (0x000aa3ea) dialer2_ne_pane

0x5636,	// (0x000aa404) grid_dialer2_keypad_pane_ParamLimits

0x5636,	// (0x000aa404) grid_dialer2_keypad_pane

0xbdd2,	// (0x000b0ba0) bg_popup_call_pane_cp07_ParamLimits

0xbdd2,	// (0x000b0ba0) bg_popup_call_pane_cp07

0x5652,	// (0x000aa420) dialer2_ne_pane_t1_ParamLimits

0x5652,	// (0x000aa420) dialer2_ne_pane_t1

0x568d,	// (0x000aa45b) cell_dialer2_keypad_pane_ParamLimits

0x568d,	// (0x000aa45b) cell_dialer2_keypad_pane

0xc97d,	// (0x000b174b) bg_button_pane_pane_cp04_ParamLimits

0xc97d,	// (0x000b174b) bg_button_pane_pane_cp04

0x56af,	// (0x000aa47d) cell_dialer2_keypad_pane_g1_ParamLimits

0x56af,	// (0x000aa47d) cell_dialer2_keypad_pane_g1

0x147f,	// (0x000a624d) aid_placing_vt_set_content_ParamLimits

0x147f,	// (0x000a624d) aid_placing_vt_set_content

0x14a7,	// (0x000a6275) aid_placing_vt_set_title_ParamLimits

0x14a7,	// (0x000a6275) aid_placing_vt_set_title

0x9542,	// (0x000ae310) main_image3_pane

0x5775,	// (0x000aa543) area_side_right_pane_cp01_ParamLimits

0x5775,	// (0x000aa543) area_side_right_pane_cp01

0x9e52,	// (0x000aec20) main_image3_pane_g1_ParamLimits

0x9e52,	// (0x000aec20) main_image3_pane_g1

0x578c,	// (0x000aa55a) main_image3_pane_g2_ParamLimits

0x578c,	// (0x000aa55a) main_image3_pane_g2

0x57b4,	// (0x000aa582) main_image3_pane_g3_ParamLimits

0x57b4,	// (0x000aa582) main_image3_pane_g3

0x57de,	// (0x000aa5ac) main_image3_pane_g4_ParamLimits

0x57de,	// (0x000aa5ac) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000b468d) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000b468d) main_image3_pane_g

0x5808,	// (0x000aa5d6) main_image3_pane_t1_ParamLimits

0x5808,	// (0x000aa5d6) main_image3_pane_t1

0x5860,	// (0x000aa62e) main_image3_pane_t2_ParamLimits

0x5860,	// (0x000aa62e) main_image3_pane_t2

0x58b2,	// (0x000aa680) main_image3_pane_t3_ParamLimits

0x58b2,	// (0x000aa680) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000b4696) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000b4696) main_image3_pane_t

0xbbe5,	// (0x000b09b3) grid_sctrl_middle_pane_cp01_ParamLimits

0xbbe5,	// (0x000b09b3) grid_sctrl_middle_pane_cp01

0x593a,	// (0x000aa708) cell_sctrl_middle_pane_cp01_ParamLimits

0x593a,	// (0x000aa708) cell_sctrl_middle_pane_cp01

0x5957,	// (0x000aa725) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5957,	// (0x000aa725) cell_sctrl_middle_pane_cp01_g1

0x9542,	// (0x000ae310) main_call4_pane

0x596d,	// (0x000aa73b) aid_size_button_call4_ParamLimits

0x596d,	// (0x000aa73b) aid_size_button_call4

0x599e,	// (0x000aa76c) call4_windows_pane_ParamLimits

0x599e,	// (0x000aa76c) call4_windows_pane

0x59be,	// (0x000aa78c) grid_call4_button_pane_ParamLimits

0x59be,	// (0x000aa78c) grid_call4_button_pane

0xc989,	// (0x000b1757) call4_windows_conf_pane

0xc9a0,	// (0x000b176e) popup_call4_audio_first_window_ParamLimits

0xc9a0,	// (0x000b176e) popup_call4_audio_first_window

0xc9ec,	// (0x000b17ba) popup_call4_audio_second_window_ParamLimits

0xc9ec,	// (0x000b17ba) popup_call4_audio_second_window

0xca00,	// (0x000b17ce) popup_call4_audio_wait_window_ParamLimits

0xca00,	// (0x000b17ce) popup_call4_audio_wait_window

0x59eb,	// (0x000aa7b9) cell_call4_button_pane_ParamLimits

0x59eb,	// (0x000aa7b9) cell_call4_button_pane

0x5a14,	// (0x000aa7e2) bg_button_pane_cp09_ParamLimits

0x5a14,	// (0x000aa7e2) bg_button_pane_cp09

0x5a20,	// (0x000aa7ee) cell_call4_button_pane_g1_ParamLimits

0x5a20,	// (0x000aa7ee) cell_call4_button_pane_g1

0x5a46,	// (0x000aa814) cell_call4_button_pane_t1_ParamLimits

0x5a46,	// (0x000aa814) cell_call4_button_pane_t1

0xca48,	// (0x000b1816) popup_call4_audio_conf_window_ParamLimits

0xca48,	// (0x000b1816) popup_call4_audio_conf_window

0x4ca7,	// (0x000a9a75) mup3_progress_pane_t1_ParamLimits

0x4cc6,	// (0x000a9a94) mup3_progress_pane_t2_ParamLimits

0xc338,	// (0x000b1106) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000b456a) mup3_progress_pane_t_ParamLimits

0xc355,	// (0x000b1123) mup_progress_pane_cp03_ParamLimits

0x52a3,	// (0x000aa071) mup3_control_keys_pane_g4_copy1

0x9ff8,	// (0x000aedc6) mp4_rocker2_pane_ParamLimits

0x9ff8,	// (0x000aedc6) mp4_rocker2_pane

0xca5c,	// (0x000b182a) mp4_rocker2_pane_g1

0xca64,	// (0x000b1832) mp4_rocker2_pane_g2

0xa066,	// (0x000aee34) mp4_rocker2_pane_g3

0xa06e,	// (0x000aee3c) mp4_rocker2_pane_g4

0xa076,	// (0x000aee44) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000b469f) mp4_rocker2_pane_g

0x9542,	// (0x000ae310) main_camera4_pane

0x9542,	// (0x000ae310) main_video4_pane

0x550d,	// (0x000aa2db) main_video_tele_dialer_pane_t1_ParamLimits

0x550d,	// (0x000aa2db) main_video_tele_dialer_pane_t1

0x5526,	// (0x000aa2f4) main_video_tele_dialer_pane_t2_ParamLimits

0x5526,	// (0x000aa2f4) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000b4659) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000b4659) main_video_tele_dialer_pane_t

0x5a84,	// (0x000aa852) cam4_autofocus_pane_ParamLimits

0x5a84,	// (0x000aa852) cam4_autofocus_pane

0x5a9a,	// (0x000aa868) cam4_image_uncrop_pane_ParamLimits

0x5a9a,	// (0x000aa868) cam4_image_uncrop_pane

0x5ab4,	// (0x000aa882) cam4_indicators_pane_ParamLimits

0x5ab4,	// (0x000aa882) cam4_indicators_pane

0x5adf,	// (0x000aa8ad) main_camera4_pane_g1_ParamLimits

0x5adf,	// (0x000aa8ad) main_camera4_pane_g1

0x5af1,	// (0x000aa8bf) main_camera4_pane_g2_ParamLimits

0x5af1,	// (0x000aa8bf) main_camera4_pane_g2

0x5b04,	// (0x000aa8d2) main_camera4_pane_g3_ParamLimits

0x5b04,	// (0x000aa8d2) main_camera4_pane_g3

0x5b17,	// (0x000aa8e5) main_camera4_pane_g4_ParamLimits

0x5b17,	// (0x000aa8e5) main_camera4_pane_g4

0x5b2a,	// (0x000aa8f8) main_camera4_pane_g5_ParamLimits

0x5b2a,	// (0x000aa8f8) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000b46aa) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000b46aa) main_camera4_pane_g

0x5b4e,	// (0x000aa91c) main_camera4_pane_t1_ParamLimits

0x5b4e,	// (0x000aa91c) main_camera4_pane_t1

0xa09a,	// (0x000aee68) bg_tb_trans_pane_cp06

0xa0b0,	// (0x000aee7e) cam4_indicators_pane_g1

0xa0c1,	// (0x000aee8f) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000b46c5) cam4_indicators_pane_g

0xa0df,	// (0x000aeead) cam4_indicators_pane_t1

0x5bb2,	// (0x000aa980) main_video4_pane_g1_ParamLimits

0x5bb2,	// (0x000aa980) main_video4_pane_g1

0x5bc1,	// (0x000aa98f) main_video4_pane_g2_ParamLimits

0x5bc1,	// (0x000aa98f) main_video4_pane_g2

0x5bd0,	// (0x000aa99e) main_video4_pane_g3_ParamLimits

0x5bd0,	// (0x000aa99e) main_video4_pane_g3

0x5bdf,	// (0x000aa9ad) main_video4_pane_g4_ParamLimits

0x5bdf,	// (0x000aa9ad) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000b46cc) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000b46cc) main_video4_pane_g

0x5bfd,	// (0x000aa9cb) vid4_indicators_pane_ParamLimits

0x5bfd,	// (0x000aa9cb) vid4_indicators_pane

0x5c2b,	// (0x000aa9f9) video4_image_uncrop_cif_pane_ParamLimits

0x5c2b,	// (0x000aa9f9) video4_image_uncrop_cif_pane

0x5c45,	// (0x000aaa13) video4_image_uncrop_nhd_pane_ParamLimits

0x5c45,	// (0x000aaa13) video4_image_uncrop_nhd_pane

0x5a9a,	// (0x000aa868) video4_image_uncrop_vga_pane_ParamLimits

0x5a9a,	// (0x000aa868) video4_image_uncrop_vga_pane

0x9534,	// (0x000ae302) bg_tb_trans_pane_cp07

0xa10b,	// (0x000aeed9) vid4_indicators_pane_g1

0xa11f,	// (0x000aeeed) vid4_indicators_pane_g2

0xa133,	// (0x000aef01) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000b46d7) vid4_indicators_pane_g

0xa162,	// (0x000aef30) vid4_indicators_pane_t1

0x5c59,	// (0x000aaa27) cam4_autofocus_pane_g1

0x5c61,	// (0x000aaa2f) cam4_autofocus_pane_g2

0x5c69,	// (0x000aaa37) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000b46e2) cam4_autofocus_pane_g

0x5c71,	// (0x000aaa3f) cam4_autofocus_pane_g3_copy1

0x5555,	// (0x000aa323) video_down_pane_cp_t1

0x5563,	// (0x000aa331) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000b465e) video_down_pane_cp_t

0x9534,	// (0x000ae302) popup_vitu2_window_ParamLimits

0x9534,	// (0x000ae302) popup_vitu2_window

0x5c79,	// (0x000aaa47) aid_size_cell2_itu2_ParamLimits

0x5c79,	// (0x000aaa47) aid_size_cell2_itu2

0x5c9f,	// (0x000aaa6d) aid_size_cell_itu2_ParamLimits

0x5c9f,	// (0x000aaa6d) aid_size_cell_itu2

0x5cfb,	// (0x000aaac9) bg_popup_window_pane_cp09_ParamLimits

0x5cfb,	// (0x000aaac9) bg_popup_window_pane_cp09

0x5d09,	// (0x000aaad7) field_vitu2_entry_pane_ParamLimits

0x5d09,	// (0x000aaad7) field_vitu2_entry_pane

0x5d2f,	// (0x000aaafd) grid_vitu2_function_pane_ParamLimits

0x5d2f,	// (0x000aaafd) grid_vitu2_function_pane

0x5d80,	// (0x000aab4e) grid_vitu2_itu_pane_ParamLimits

0x5d80,	// (0x000aab4e) grid_vitu2_itu_pane

0x5e18,	// (0x000aabe6) cell_vitu2_itu_pane_ParamLimits

0x5e18,	// (0x000aabe6) cell_vitu2_itu_pane

0x5e44,	// (0x000aac12) cell_vitu2_function_pane_ParamLimits

0x5e44,	// (0x000aac12) cell_vitu2_function_pane

0xca7e,	// (0x000b184c) bg_popup_call_pane_cp08_ParamLimits

0xca7e,	// (0x000b184c) bg_popup_call_pane_cp08

0xca95,	// (0x000b1863) field_vitu2_entry_pane_g1

0xcaa1,	// (0x000b186f) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000b46e9) field_vitu2_entry_pane_g

0x5e83,	// (0x000aac51) field_vitu2_entry_pane_t1_ParamLimits

0x5e83,	// (0x000aac51) field_vitu2_entry_pane_t1

0xcabb,	// (0x000b1889) field_vitu2_entry_pane_t2_ParamLimits

0xcabb,	// (0x000b1889) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000b46f0) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000b46f0) field_vitu2_entry_pane_t

0x5eb2,	// (0x000aac80) bg_button_pane_cp010_ParamLimits

0x5eb2,	// (0x000aac80) bg_button_pane_cp010

0xa179,	// (0x000aef47) cell_vitu2_itu_pane_g1

0x5ece,	// (0x000aac9c) cell_vitu2_itu_pane_t1_ParamLimits

0x5ece,	// (0x000aac9c) cell_vitu2_itu_pane_t1

0x0135,	// (0x000a4f03) cell_vitu2_itu_pane_t2_ParamLimits

0x0135,	// (0x000a4f03) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000b46fa) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000b46fa) cell_vitu2_itu_pane_t

0x9534,	// (0x000ae302) bg_button_pane_cp011

0x5f2c,	// (0x000aacfa) cell_vitu2_function_pane_g1

0x9542,	// (0x000ae310) main_myfav_hc_pane

0x5902,	// (0x000aa6d0) popup_image3_note_pane_ParamLimits

0x5902,	// (0x000aa6d0) popup_image3_note_pane

0x591e,	// (0x000aa6ec) popup_image3_tool_bar_pane_ParamLimits

0x591e,	// (0x000aa6ec) popup_image3_tool_bar_pane

0x01c3,	// (0x000a4f91) cell_vitu2_itu_pane_t3_ParamLimits

0x01c3,	// (0x000a4f91) cell_vitu2_itu_pane_t3

0xe685,	// (0x000b3453) bg_popup_trans_pane

0xcae0,	// (0x000b18ae) grid_image3_tool_bar_pane

0xcaea,	// (0x000b18b8) bg_popup_trans_pane_g1

0x9951,	// (0x000ae71f) bg_popup_trans_pane_g2

0xcaf2,	// (0x000b18c0) bg_popup_trans_pane_g3

0xcafa,	// (0x000b18c8) bg_popup_trans_pane_g4

0xcb02,	// (0x000b18d0) bg_popup_trans_pane_g5

0xcb0a,	// (0x000b18d8) bg_popup_trans_pane_g6

0xcb12,	// (0x000b18e0) bg_popup_trans_pane_g7

0xcb1a,	// (0x000b18e8) bg_popup_trans_pane_g8

0x9931,	// (0x000ae6ff) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000b4701) bg_popup_trans_pane_g

0xcb22,	// (0x000b18f0) cell_image3_tool_bar_pane_ParamLimits

0xcb22,	// (0x000b18f0) cell_image3_tool_bar_pane

0xbff9,	// (0x000b0dc7) cell_image3_tool_bar_pane_g1

0xe685,	// (0x000b3453) bg_popup_trans_pane_cp1

0xcb36,	// (0x000b1904) popup_image3_note_pane_t1

0xcb44,	// (0x000b1912) popup_image3_note_pane_t2

0xcb52,	// (0x000b1920) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000b4714) popup_image3_note_pane_t

0xcb60,	// (0x000b192e) popup_image3_note_pane_t3_copy1

0x5f40,	// (0x000aad0e) bg_myfav_hc_instruction_pane_ParamLimits

0x5f40,	// (0x000aad0e) bg_myfav_hc_instruction_pane

0x5f54,	// (0x000aad22) cell_myfav_contact_pane_ParamLimits

0x5f54,	// (0x000aad22) cell_myfav_contact_pane

0x5f72,	// (0x000aad40) cell_myfav_contact_pane_cp1_ParamLimits

0x5f72,	// (0x000aad40) cell_myfav_contact_pane_cp1

0x5f8a,	// (0x000aad58) cell_myfav_contact_pane_cp2_ParamLimits

0x5f8a,	// (0x000aad58) cell_myfav_contact_pane_cp2

0x5fa2,	// (0x000aad70) cell_myfav_contact_pane_cp3_ParamLimits

0x5fa2,	// (0x000aad70) cell_myfav_contact_pane_cp3

0x5fb9,	// (0x000aad87) cell_myfav_contact_pane_cp4_ParamLimits

0x5fb9,	// (0x000aad87) cell_myfav_contact_pane_cp4

0x5fd1,	// (0x000aad9f) cell_myfav_contact_pane_cp5_ParamLimits

0x5fd1,	// (0x000aad9f) cell_myfav_contact_pane_cp5

0x5fe5,	// (0x000aadb3) cell_myfav_contact_pane_cp6_ParamLimits

0x5fe5,	// (0x000aadb3) cell_myfav_contact_pane_cp6

0x5ffb,	// (0x000aadc9) cell_myfav_contact_pane_cp7_ParamLimits

0x5ffb,	// (0x000aadc9) cell_myfav_contact_pane_cp7

0xcb6e,	// (0x000b193c) listscroll_gen_pane_cp05

0x6015,	// (0x000aade3) main_myfav_hc_pane_g1_ParamLimits

0x6015,	// (0x000aade3) main_myfav_hc_pane_g1

0x602f,	// (0x000aadfd) main_myfav_hc_pane_g2_ParamLimits

0x602f,	// (0x000aadfd) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000b471b) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000b471b) main_myfav_hc_pane_g

0x6061,	// (0x000aae2f) main_myfav_hc_pane_t1_ParamLimits

0x6061,	// (0x000aae2f) main_myfav_hc_pane_t1

0xcb77,	// (0x000b1945) main_myfav_hc_pane_t2_ParamLimits

0xcb77,	// (0x000b1945) main_myfav_hc_pane_t2

0xcb89,	// (0x000b1957) main_myfav_hc_pane_t3_ParamLimits

0xcb89,	// (0x000b1957) main_myfav_hc_pane_t3

0x6078,	// (0x000aae46) main_myfav_hc_pane_t4_ParamLimits

0x6078,	// (0x000aae46) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000b4722) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000b4722) main_myfav_hc_pane_t

0xbff9,	// (0x000b0dc7) bg_myfav_hc_instruction_pane_g1

0xcbad,	// (0x000b197b) cell_myfav_contact_pane_g1_ParamLimits

0xcbad,	// (0x000b197b) cell_myfav_contact_pane_g1

0xcbad,	// (0x000b197b) cell_myfav_contact_pane_g2_ParamLimits

0xcbad,	// (0x000b197b) cell_myfav_contact_pane_g2

0xcbb9,	// (0x000b1987) cell_myfav_contact_pane_g3_ParamLimits

0xcbb9,	// (0x000b1987) cell_myfav_contact_pane_g3

0xc322,	// (0x000b10f0) cell_myfav_contact_pane_g4_ParamLimits

0xc322,	// (0x000b10f0) cell_myfav_contact_pane_g4

0xcbc6,	// (0x000b1994) cell_myfav_contact_pane_g5_ParamLimits

0xcbc6,	// (0x000b1994) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000b472d) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000b472d) cell_myfav_contact_pane_g

0x6049,	// (0x000aae17) main_myfav_hc_pane_g3_ParamLimits

0x6049,	// (0x000aae17) main_myfav_hc_pane_g3

0x03e8,	// (0x000a51b6) popup_adpt_find_window

0x60a0,	// (0x000aae6e) afind_page_pane_ParamLimits

0x60a0,	// (0x000aae6e) afind_page_pane

0x60b5,	// (0x000aae83) aid_size_cell_afind_ParamLimits

0x60b5,	// (0x000aae83) aid_size_cell_afind

0x60d3,	// (0x000aaea1) bg_popup_sub_pane_cp09_ParamLimits

0x60d3,	// (0x000aaea1) bg_popup_sub_pane_cp09

0x60e0,	// (0x000aaeae) find_pane_cp01_ParamLimits

0x60e0,	// (0x000aaeae) find_pane_cp01

0xcbd2,	// (0x000b19a0) grid_afind_control_pane_ParamLimits

0xcbd2,	// (0x000b19a0) grid_afind_control_pane

0x60ed,	// (0x000aaebb) grid_afind_pane_ParamLimits

0x60ed,	// (0x000aaebb) grid_afind_pane

0x610f,	// (0x000aaedd) cell_afind_pane_ParamLimits

0x610f,	// (0x000aaedd) cell_afind_pane

0xbff9,	// (0x000b0dc7) afind_page_pane_g1

0x6176,	// (0x000aaf44) afind_page_pane_g2

0x617f,	// (0x000aaf4d) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000b4738) afind_page_pane_g

0x6188,	// (0x000aaf56) afind_page_pane_t1

0xcbe6,	// (0x000b19b4) cell_afind_grid_control_pane_ParamLimits

0xcbe6,	// (0x000b19b4) cell_afind_grid_control_pane

0xc97d,	// (0x000b174b) bg_button_pane_cp69_ParamLimits

0xc97d,	// (0x000b174b) bg_button_pane_cp69

0x61a8,	// (0x000aaf76) cell_afind_pane_g1_ParamLimits

0x61a8,	// (0x000aaf76) cell_afind_pane_g1

0x61b5,	// (0x000aaf83) cell_afind_pane_t1_ParamLimits

0x61b5,	// (0x000aaf83) cell_afind_pane_t1

0x974a,	// (0x000ae518) bg_button_pane_cp72

0xcbf5,	// (0x000b19c3) cell_afind_grid_control_pane_g1

0x3222,	// (0x000a7ff0) aid_image_placing_area_ParamLimits

0x3222,	// (0x000a7ff0) aid_image_placing_area

0xc64b,	// (0x000b1419) field_vitu_entry_pane_g1_ParamLimits

0xc64b,	// (0x000b1419) field_vitu_entry_pane_g1

0xc657,	// (0x000b1425) field_vitu_entry_pane_g2_ParamLimits

0xc657,	// (0x000b1425) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000b45e9) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000b45e9) field_vitu_entry_pane_g

0x536a,	// (0x000aa138) cell_vitu_itu_pane_g1_ParamLimits

0x53ac,	// (0x000aa17a) cell_vitu_itu_pane_t3_ParamLimits

0x53ac,	// (0x000aa17a) cell_vitu_itu_pane_t3

0xc92d,	// (0x000b16fb) mp4_progress_pane_t1_ParamLimits

0xc946,	// (0x000b1714) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000b467e) mp4_progress_pane_t_ParamLimits

0xc95f,	// (0x000b172d) mup_progress_pane_cp04_ParamLimits

0x608c,	// (0x000aae5a) main_myfav_hc_pane_t5_ParamLimits

0x608c,	// (0x000aae5a) main_myfav_hc_pane_t5

0x0285,	// (0x000a5053) aid_zoom_text_primary

0x03e8,	// (0x000a51b6) popup_adpt_find_window_ParamLimits

0x9534,	// (0x000ae302) main_cam_set_pane

0x5acb,	// (0x000aa899) cam4_zoom_pane_ParamLimits

0x5acb,	// (0x000aa899) cam4_zoom_pane

0x61c7,	// (0x000aaf95) main_cam_set_pane_g1_ParamLimits

0x61c7,	// (0x000aaf95) main_cam_set_pane_g1

0x61d5,	// (0x000aafa3) main_cam_set_pane_g2_ParamLimits

0x61d5,	// (0x000aafa3) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000b473f) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000b473f) main_cam_set_pane_g

0x61f6,	// (0x000aafc4) main_cam_set_pane_t1_ParamLimits

0x61f6,	// (0x000aafc4) main_cam_set_pane_t1

0x6211,	// (0x000aafdf) main_cset_listscroll_pane_ParamLimits

0x6211,	// (0x000aafdf) main_cset_listscroll_pane

0x6231,	// (0x000aafff) main_cset_slider_pane_ParamLimits

0x6231,	// (0x000aafff) main_cset_slider_pane

0xcc06,	// (0x000b19d4) main_cset_list_pane_ParamLimits

0xcc06,	// (0x000b19d4) main_cset_list_pane

0xcc16,	// (0x000b19e4) scroll_pane_cp028

0x6257,	// (0x000ab025) aid_area_touch_slider

0x6273,	// (0x000ab041) cset_slider_pane

0x629d,	// (0x000ab06b) main_cset_slider_pane_g1

0x62b2,	// (0x000ab080) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000b4744) main_cset_slider_pane_g

0xcc4f,	// (0x000b1a1d) main_cset_slider_pane_t1

0x636e,	// (0x000ab13c) main_cset_slider_pane_t2

0x6388,	// (0x000ab156) main_cset_slider_pane_t3

0x63a2,	// (0x000ab170) main_cset_slider_pane_t4

0x63bc,	// (0x000ab18a) main_cset_slider_pane_t5

0x63d6,	// (0x000ab1a4) main_cset_slider_pane_t6

0x63eb,	// (0x000ab1b9) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000b4769) main_cset_slider_pane_t

0x64ef,	// (0x000ab2bd) cset_list_set_pane_ParamLimits

0x64ef,	// (0x000ab2bd) cset_list_set_pane

0x6501,	// (0x000ab2cf) aid_position_infowindow_above

0x6509,	// (0x000ab2d7) aid_position_infowindow_below

0xee73,	// (0x000b3c41) cset_list_set_pane_g1_ParamLimits

0xee73,	// (0x000b3c41) cset_list_set_pane_g1

0xccef,	// (0x000b1abd) cset_list_set_pane_g3_ParamLimits

0xccef,	// (0x000b1abd) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000b4788) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000b4788) cset_list_set_pane_g

0xccfe,	// (0x000b1acc) cset_list_set_pane_t1_ParamLimits

0xccfe,	// (0x000b1acc) cset_list_set_pane_t1

0xbbe5,	// (0x000b09b3) list_highlight_pane_cp021_ParamLimits

0xbbe5,	// (0x000b09b3) list_highlight_pane_cp021

0xa909,	// (0x000af6d7) cset_slider_pane_g1

0xa91b,	// (0x000af6e9) cset_slider_pane_g2

0xa912,	// (0x000af6e0) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000b478d) cset_slider_pane_g

0xa18b,	// (0x000aef59) aid_area_touch_cam4_zoom

0xa193,	// (0x000aef61) cam4_zoom_cont_pane

0xa19b,	// (0x000aef69) cam4_zoom_pane_g1

0xa1a3,	// (0x000aef71) cam4_zoom_pane_g2

0x6511,	// (0x000ab2df) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000b4794) cam4_zoom_pane_g

0xa1ab,	// (0x000aef79) cam4_zoom_cont_pane_g1

0xa1b4,	// (0x000aef82) cam4_zoom_cont_pane_g2

0xa1bd,	// (0x000aef8b) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000b479b) cam4_zoom_cont_pane_g

0x598b,	// (0x000aa759) call4_image_pane_ParamLimits

0x598b,	// (0x000aa759) call4_image_pane

0xc989,	// (0x000b1757) call4_windows_conf_pane_ParamLimits

0xc9ca,	// (0x000b1798) popup_call4_audio_in_window_ParamLimits

0xc9ca,	// (0x000b1798) popup_call4_audio_in_window

0xe685,	// (0x000b3453) bg_popup_call2_act_pane_cp02

0xca40,	// (0x000b180e) call4_list_conf_pane

0xbff9,	// (0x000b0dc7) call4_image_pane_g1

0xbff9,	// (0x000b0dc7) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x000b44aa) call4_image_pane_g

0xcd13,	// (0x000b1ae1) list_single_graphic_popup_conf4_pane_ParamLimits

0xcd13,	// (0x000b1ae1) list_single_graphic_popup_conf4_pane

0xe685,	// (0x000b3453) list_highlight_pane_cp022

0xcd26,	// (0x000b1af4) list_single_graphic_popup_conf4_pane_g1

0xa4da,	// (0x000af2a8) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000b47a2) list_single_graphic_popup_conf4_pane_g

0xcd2e,	// (0x000b1afc) list_single_graphic_popup_conf4_pane_t1

0x15cb,	// (0x000a6399) popup_vtel_slider_window_ParamLimits

0x15cb,	// (0x000a6399) popup_vtel_slider_window

0xc96b,	// (0x000b1739) dialer2_ne_pane_t2_ParamLimits

0xc96b,	// (0x000b1739) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000b4683) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000b4683) dialer2_ne_pane_t

0xbdd2,	// (0x000b0ba0) bg_popup_sub_pane_cp010_ParamLimits

0xbdd2,	// (0x000b0ba0) bg_popup_sub_pane_cp010

0x6519,	// (0x000ab2e7) popup_vtel_slider_window_g1_ParamLimits

0x6519,	// (0x000ab2e7) popup_vtel_slider_window_g1

0x652c,	// (0x000ab2fa) popup_vtel_slider_window_g2_ParamLimits

0x652c,	// (0x000ab2fa) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000b47a7) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000b47a7) popup_vtel_slider_window_g

0x6582,	// (0x000ab350) vtel_slider_pane_ParamLimits

0x6582,	// (0x000ab350) vtel_slider_pane

0x65a4,	// (0x000ab372) vtel_slider_pane_g1_ParamLimits

0x65a4,	// (0x000ab372) vtel_slider_pane_g1

0x65b8,	// (0x000ab386) vtel_slider_pane_g2_ParamLimits

0x65b8,	// (0x000ab386) vtel_slider_pane_g2

0x65d0,	// (0x000ab39e) vtel_slider_pane_g3_ParamLimits

0x65d0,	// (0x000ab39e) vtel_slider_pane_g3

0x65a4,	// (0x000ab372) vtel_slider_pane_g4_ParamLimits

0x65a4,	// (0x000ab372) vtel_slider_pane_g4

0x65e6,	// (0x000ab3b4) vtel_slider_pane_g5_ParamLimits

0x65e6,	// (0x000ab3b4) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000b47b0) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000b47b0) vtel_slider_pane_g

0x9534,	// (0x000ae302) main_gallery2_pane

0x5ccb,	// (0x000aaa99) aid_size_row_itut2_dropdow_list_ParamLimits

0x5ccb,	// (0x000aaa99) aid_size_row_itut2_dropdow_list

0x5d57,	// (0x000aab25) grid_vitu2_function_top_pane_ParamLimits

0x5d57,	// (0x000aab25) grid_vitu2_function_top_pane

0x5dc1,	// (0x000aab8f) popup_vitu2_dropdown_list_window_ParamLimits

0x5dc1,	// (0x000aab8f) popup_vitu2_dropdown_list_window

0x5dea,	// (0x000aabb8) popup_vitu2_match_list_window

0x660a,	// (0x000ab3d8) cell_vitu2_function_top_pane_ParamLimits

0x660a,	// (0x000ab3d8) cell_vitu2_function_top_pane

0x6622,	// (0x000ab3f0) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6622,	// (0x000ab3f0) cell_vitu2_function_top_pane_cp01

0x663e,	// (0x000ab40c) cell_vitu2_function_top_wide_pane_ParamLimits

0x663e,	// (0x000ab40c) cell_vitu2_function_top_wide_pane

0x9534,	// (0x000ae302) bg_button_pane_cp012

0x665a,	// (0x000ab428) cell_vitu2_function_top_pane_g1

0xa1c6,	// (0x000aef94) bg_button_pane_cp013_ParamLimits

0xa1c6,	// (0x000aef94) bg_button_pane_cp013

0x666e,	// (0x000ab43c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x666e,	// (0x000ab43c) cell_vitu2_function_top_wide_pane_g1

0x9534,	// (0x000ae302) bg_popup_sub_pane_cp20

0x6686,	// (0x000ab454) list_vitu2_match_list_pane

0xcaea,	// (0x000b18b8) bg_popup_sub_pane_cp20_g1

0xcaf2,	// (0x000b18c0) bg_popup_sub_pane_cp20_g2

0x9951,	// (0x000ae71f) bg_popup_sub_pane_cp20_g3

0xcafa,	// (0x000b18c8) bg_popup_sub_pane_cp20_g4

0x9931,	// (0x000ae6ff) bg_popup_sub_pane_cp20_g5

0xcd44,	// (0x000b1b12) bg_popup_sub_pane_cp20_g6

0xcb0a,	// (0x000b18d8) bg_popup_sub_pane_cp20_g7

0xcb12,	// (0x000b18e0) bg_popup_sub_pane_cp20_g8

0xcb1a,	// (0x000b18e8) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000b47bb) bg_popup_sub_pane_cp20_g

0xa1e2,	// (0x000aefb0) list_vitu2_match_list_item_pane_ParamLimits

0xa1e2,	// (0x000aefb0) list_vitu2_match_list_item_pane

0xa1f4,	// (0x000aefc2) list_vitu2_match_list_item_pane_t1

0x9542,	// (0x000ae310) bg_popup_sub_pane_cp21

0xa202,	// (0x000aefd0) grid_vitu2_dropdown_list_pane

0x66ee,	// (0x000ab4bc) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x66ee,	// (0x000ab4bc) cell_vitu2_dropdown_list_char_pane

0x670f,	// (0x000ab4dd) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x670f,	// (0x000ab4dd) cell_vitu2_dropdown_list_ctrl_pane

0xcd4c,	// (0x000b1b1a) cell_vitu2_dropdown_list_char_pane_g1

0xcd55,	// (0x000b1b23) cell_vitu2_dropdown_list_char_pane_g2

0xcd5e,	// (0x000b1b2c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000b47d8) cell_vitu2_dropdown_list_char_pane_g

0x673b,	// (0x000ab509) cell_vitu2_dropdown_list_char_pane_t1

0x6749,	// (0x000ab517) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6749,	// (0x000ab517) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6756,	// (0x000ab524) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6756,	// (0x000ab524) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6763,	// (0x000ab531) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6763,	// (0x000ab531) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6770,	// (0x000ab53e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6770,	// (0x000ab53e) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa09a,	// (0x000aee68) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa09a,	// (0x000aee68) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000b47df) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000b47df) cell_vitu2_dropdown_list_ctrl_pane_g

0x678c,	// (0x000ab55a) aid_size_cell_gallery2_ParamLimits

0x678c,	// (0x000ab55a) aid_size_cell_gallery2

0x67aa,	// (0x000ab578) grid_gallery2_pane_ParamLimits

0x67aa,	// (0x000ab578) grid_gallery2_pane

0x67c4,	// (0x000ab592) scroll_pane_cp029_ParamLimits

0x67c4,	// (0x000ab592) scroll_pane_cp029

0x67d0,	// (0x000ab59e) cell_gallery2_pane_ParamLimits

0x67d0,	// (0x000ab59e) cell_gallery2_pane

0xcd67,	// (0x000b1b35) cell_gallery2_pane_g2

0x682b,	// (0x000ab5f9) cell_gallery2_pane_g3

0xcd6f,	// (0x000b1b3d) cell_gallery2_pane_g4

0xcd77,	// (0x000b1b45) cell_gallery2_pane_g5

0x96ee,	// (0x000ae4bc) grid_highlight_pane_cp10

0x5dea,	// (0x000aabb8) popup_vitu2_match_list_window_ParamLimits

0x5e01,	// (0x000aabcf) popup_vitu2_query_window_ParamLimits

0x5e01,	// (0x000aabcf) popup_vitu2_query_window

0x9542,	// (0x000ae310) bg_vitu2_candi_button_pane

0xcd4c,	// (0x000b1b1a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcd55,	// (0x000b1b23) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcd5e,	// (0x000b1b2c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6833,	// (0x000ab601) bg_button_pane_cp015

0x6845,	// (0x000ab613) bg_button_pane_cp016

0x6858,	// (0x000ab626) bg_button_pane_cp017

0xbbd7,	// (0x000b09a5) bg_popup_sub_pane_cp22

0xcd7f,	// (0x000b1b4d) popup_vitu2_query_window_g1

0x689d,	// (0x000ab66b) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000b47ea) popup_vitu2_query_window_g

0x68bc,	// (0x000ab68a) popup_vitu2_query_window_t1_ParamLimits

0x68bc,	// (0x000ab68a) popup_vitu2_query_window_t1

0x68f1,	// (0x000ab6bf) popup_vitu2_query_window_t2_ParamLimits

0x68f1,	// (0x000ab6bf) popup_vitu2_query_window_t2

0x6903,	// (0x000ab6d1) popup_vitu2_query_window_t3_ParamLimits

0x6903,	// (0x000ab6d1) popup_vitu2_query_window_t3

0x692b,	// (0x000ab6f9) popup_vitu2_query_window_t4_ParamLimits

0x692b,	// (0x000ab6f9) popup_vitu2_query_window_t4

0x694c,	// (0x000ab71a) popup_vitu2_query_window_t5_ParamLimits

0x694c,	// (0x000ab71a) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000b47f1) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000b47f1) popup_vitu2_query_window_t

0xcbfe,	// (0x000b19cc) main_cset_text_pane

0x6257,	// (0x000ab025) aid_area_touch_slider_ParamLimits

0x6273,	// (0x000ab041) cset_slider_pane_ParamLimits

0x629d,	// (0x000ab06b) main_cset_slider_pane_g1_ParamLimits

0x62b2,	// (0x000ab080) main_cset_slider_pane_g2_ParamLimits

0xcc1f,	// (0x000b19ed) main_cset_slider_pane_g3_ParamLimits

0xcc1f,	// (0x000b19ed) main_cset_slider_pane_g3

0x62c7,	// (0x000ab095) main_cset_slider_pane_g4_ParamLimits

0x62c7,	// (0x000ab095) main_cset_slider_pane_g4

0x62d6,	// (0x000ab0a4) main_cset_slider_pane_g5_ParamLimits

0x62d6,	// (0x000ab0a4) main_cset_slider_pane_g5

0x62e2,	// (0x000ab0b0) main_cset_slider_pane_g6_ParamLimits

0x62e2,	// (0x000ab0b0) main_cset_slider_pane_g6

0xf976,	// (0x000b4744) main_cset_slider_pane_g_ParamLimits

0xcc4f,	// (0x000b1a1d) main_cset_slider_pane_t1_ParamLimits

0x636e,	// (0x000ab13c) main_cset_slider_pane_t2_ParamLimits

0x6388,	// (0x000ab156) main_cset_slider_pane_t3_ParamLimits

0x63a2,	// (0x000ab170) main_cset_slider_pane_t4_ParamLimits

0x63bc,	// (0x000ab18a) main_cset_slider_pane_t5_ParamLimits

0x63d6,	// (0x000ab1a4) main_cset_slider_pane_t6_ParamLimits

0x63eb,	// (0x000ab1b9) main_cset_slider_pane_t7_ParamLimits

0x6415,	// (0x000ab1e3) main_cset_slider_pane_t8_ParamLimits

0x6415,	// (0x000ab1e3) main_cset_slider_pane_t8

0x643d,	// (0x000ab20b) main_cset_slider_pane_t9_ParamLimits

0x643d,	// (0x000ab20b) main_cset_slider_pane_t9

0x6465,	// (0x000ab233) main_cset_slider_pane_t10_ParamLimits

0x6465,	// (0x000ab233) main_cset_slider_pane_t10

0x648d,	// (0x000ab25b) main_cset_slider_pane_t11_ParamLimits

0x648d,	// (0x000ab25b) main_cset_slider_pane_t11

0x64b5,	// (0x000ab283) main_cset_slider_pane_t12_ParamLimits

0x64b5,	// (0x000ab283) main_cset_slider_pane_t12

0x64d2,	// (0x000ab2a0) main_cset_slider_pane_t13_ParamLimits

0x64d2,	// (0x000ab2a0) main_cset_slider_pane_t13

0xf99b,	// (0x000b4769) main_cset_slider_pane_t_ParamLimits

0xe685,	// (0x000b3453) bg_popup_sub_pane_cp011

0xcd8b,	// (0x000b1b59) main_cset_text_pane_g1

0xcd93,	// (0x000b1b61) main_cset_text_pane_t1

0xcda1,	// (0x000b1b6f) main_cset_text_pane_t2

0xcdaf,	// (0x000b1b7d) main_cset_text_pane_t3

0xcdbd,	// (0x000b1b8b) main_cset_text_pane_t4

0xcdcb,	// (0x000b1b99) main_cset_text_pane_t5

0xcdd9,	// (0x000b1ba7) main_cset_text_pane_t6

0xcde7,	// (0x000b1bb5) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000b4800) main_cset_text_pane_t

0x9542,	// (0x000ae310) main_cam4_burst_pane

0x9542,	// (0x000ae310) main_cam5_pane

0x6196,	// (0x000aaf64) bg_button_pane_cp019

0x619f,	// (0x000aaf6d) bg_button_pane_cp020

0xcc2b,	// (0x000b19f9) main_cset_slider_pane_g7_ParamLimits

0xcc2b,	// (0x000b19f9) main_cset_slider_pane_g7

0xcc37,	// (0x000b1a05) main_cset_slider_pane_g8_ParamLimits

0xcc37,	// (0x000b1a05) main_cset_slider_pane_g8

0x62f6,	// (0x000ab0c4) main_cset_slider_pane_g9_ParamLimits

0x62f6,	// (0x000ab0c4) main_cset_slider_pane_g9

0x6302,	// (0x000ab0d0) main_cset_slider_pane_g10_ParamLimits

0x6302,	// (0x000ab0d0) main_cset_slider_pane_g10

0x630e,	// (0x000ab0dc) main_cset_slider_pane_g11_ParamLimits

0x630e,	// (0x000ab0dc) main_cset_slider_pane_g11

0x631a,	// (0x000ab0e8) main_cset_slider_pane_g12_ParamLimits

0x631a,	// (0x000ab0e8) main_cset_slider_pane_g12

0x6326,	// (0x000ab0f4) main_cset_slider_pane_g13_ParamLimits

0x6326,	// (0x000ab0f4) main_cset_slider_pane_g13

0x6332,	// (0x000ab100) main_cset_slider_pane_g14_ParamLimits

0x6332,	// (0x000ab100) main_cset_slider_pane_g14

0x633e,	// (0x000ab10c) main_cset_slider_pane_g15_ParamLimits

0x633e,	// (0x000ab10c) main_cset_slider_pane_g15

0xcc7d,	// (0x000b1a4b) main_cset_slider_pane_t14_ParamLimits

0xcc7d,	// (0x000b1a4b) main_cset_slider_pane_t14

0xccb6,	// (0x000b1a84) main_cset_slider_pane_t15_ParamLimits

0xccb6,	// (0x000b1a84) main_cset_slider_pane_t15

0x69c3,	// (0x000ab791) aid_cam4_burst_size_cell_ParamLimits

0x69c3,	// (0x000ab791) aid_cam4_burst_size_cell

0x69e3,	// (0x000ab7b1) grid_cam4_burst_pane_ParamLimits

0x69e3,	// (0x000ab7b1) grid_cam4_burst_pane

0x6a1b,	// (0x000ab7e9) linegrid_cam4_burst_pane_ParamLimits

0x6a1b,	// (0x000ab7e9) linegrid_cam4_burst_pane

0xcdf5,	// (0x000b1bc3) scroll_pane_cp30_ParamLimits

0xcdf5,	// (0x000b1bc3) scroll_pane_cp30

0x6a3f,	// (0x000ab80d) cell_cam4_burst_pane_ParamLimits

0x6a3f,	// (0x000ab80d) cell_cam4_burst_pane

0xce01,	// (0x000b1bcf) linegrid_cam4_burst_pane_g1_ParamLimits

0xce01,	// (0x000b1bcf) linegrid_cam4_burst_pane_g1

0x6a8c,	// (0x000ab85a) linegrid_cam4_burst_pane_g2_ParamLimits

0x6a8c,	// (0x000ab85a) linegrid_cam4_burst_pane_g2

0xce0e,	// (0x000b1bdc) linegrid_cam4_burst_pane_g3_ParamLimits

0xce0e,	// (0x000b1bdc) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000b480f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000b480f) linegrid_cam4_burst_pane_g

0x6a9d,	// (0x000ab86b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6a9d,	// (0x000ab86b) linegrid_cam4_burst_pane_g3_copy1

0xce1b,	// (0x000b1be9) linegrid_cam4_burst_pane_g4_ParamLimits

0xce1b,	// (0x000b1be9) linegrid_cam4_burst_pane_g4

0x6ab7,	// (0x000ab885) linegrid_cam4_burst_pane_g5_ParamLimits

0x6ab7,	// (0x000ab885) linegrid_cam4_burst_pane_g5

0x6ac8,	// (0x000ab896) linegrid_cam4_burst_pane_g6_ParamLimits

0x6ac8,	// (0x000ab896) linegrid_cam4_burst_pane_g6

0xce28,	// (0x000b1bf6) linegrid_cam4_burst_pane_g7_ParamLimits

0xce28,	// (0x000b1bf6) linegrid_cam4_burst_pane_g7

0x6adf,	// (0x000ab8ad) cell_cam4_burst_pane_g1

0xce41,	// (0x000b1c0f) main_cam5_pane_t1_ParamLimits

0xce41,	// (0x000b1c0f) main_cam5_pane_t1

0xce53,	// (0x000b1c21) main_cam5_pane_t2_ParamLimits

0xce53,	// (0x000b1c21) main_cam5_pane_t2

0xce65,	// (0x000b1c33) main_cam5_pane_t3_ParamLimits

0xce65,	// (0x000b1c33) main_cam5_pane_t3

0xce77,	// (0x000b1c45) main_cam5_pane_t4_ParamLimits

0xce77,	// (0x000b1c45) main_cam5_pane_t4

0xce8f,	// (0x000b1c5d) main_cam5_pane_t5_ParamLimits

0xce8f,	// (0x000b1c5d) main_cam5_pane_t5

0xcea3,	// (0x000b1c71) main_cam5_pane_t6_ParamLimits

0xcea3,	// (0x000b1c71) main_cam5_pane_t6

0xceb7,	// (0x000b1c85) main_cam5_pane_t7_ParamLimits

0xceb7,	// (0x000b1c85) main_cam5_pane_t7

0xcec9,	// (0x000b1c97) main_cam5_pane_t8_ParamLimits

0xcec9,	// (0x000b1c97) main_cam5_pane_t8

0xcee5,	// (0x000b1cb3) main_cam5_pane_t9_ParamLimits

0xcee5,	// (0x000b1cb3) main_cam5_pane_t9

0xcef7,	// (0x000b1cc5) main_cam5_pane_t10_ParamLimits

0xcef7,	// (0x000b1cc5) main_cam5_pane_t10

0xcf09,	// (0x000b1cd7) main_cam5_pane_t11_ParamLimits

0xcf09,	// (0x000b1cd7) main_cam5_pane_t11

0xcf1b,	// (0x000b1ce9) main_cam5_pane_t12_ParamLimits

0xcf1b,	// (0x000b1ce9) main_cam5_pane_t12

0xcf30,	// (0x000b1cfe) main_cam5_pane_t13_ParamLimits

0xcf30,	// (0x000b1cfe) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000b481b) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000b481b) main_cam5_pane_t

0x046a,	// (0x000a5238) popup_scut_keymap_window_ParamLimits

0x046a,	// (0x000a5238) popup_scut_keymap_window

0x6af2,	// (0x000ab8c0) aid_size_cell_brow_shortcut

0x96ee,	// (0x000ae4bc) bg_popup_window_pane_cp010

0x6afe,	// (0x000ab8cc) grid_scut_pane

0x6b0a,	// (0x000ab8d8) cell_scut_pane_ParamLimits

0x6b0a,	// (0x000ab8d8) cell_scut_pane

0x6b21,	// (0x000ab8ef) cell_scut_pane_g1

0xcf4d,	// (0x000b1d1b) cell_scut_pane_t1

0xcf5c,	// (0x000b1d2a) cell_scut_pane_t2

0x6b2a,	// (0x000ab8f8) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000b4836) cell_scut_pane_t

0x4860,	// (0x000a962e) main_mup3_pane_g8_ParamLimits

0x4860,	// (0x000a962e) main_mup3_pane_g8

0x5ce3,	// (0x000aaab1) area_vitu2_query_pane_ParamLimits

0x5ce3,	// (0x000aaab1) area_vitu2_query_pane

0x686b,	// (0x000ab639) input_focus_pane_cp08

0xcf6b,	// (0x000b1d39) area_vitu2_query_pane_g1

0x6b38,	// (0x000ab906) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000b483d) area_vitu2_query_pane_g

0x6b49,	// (0x000ab917) area_vitu2_query_pane_t1_ParamLimits

0x6b49,	// (0x000ab917) area_vitu2_query_pane_t1

0x6b5d,	// (0x000ab92b) area_vitu2_query_pane_t2_ParamLimits

0x6b5d,	// (0x000ab92b) area_vitu2_query_pane_t2

0x6b71,	// (0x000ab93f) area_vitu2_query_pane_t3_ParamLimits

0x6b71,	// (0x000ab93f) area_vitu2_query_pane_t3

0xcf77,	// (0x000b1d45) area_vitu2_query_pane_t4_ParamLimits

0xcf77,	// (0x000b1d45) area_vitu2_query_pane_t4

0xcf9f,	// (0x000b1d6d) area_vitu2_query_pane_t5_ParamLimits

0xcf9f,	// (0x000b1d6d) area_vitu2_query_pane_t5

0xcfc7,	// (0x000b1d95) area_vitu2_query_pane_t6_ParamLimits

0xcfc7,	// (0x000b1d95) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000b4842) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000b4842) area_vitu2_query_pane_t

0x6b99,	// (0x000ab967) bg_button_pane_cp018

0x6ba7,	// (0x000ab975) bg_button_pane_cp021

0x6bb3,	// (0x000ab981) bg_button_pane_cp022

0x6bc2,	// (0x000ab990) input_focus_pane_cp09

0xa616,	// (0x000af3e4) aid_size_touch_mv_arrow_left

0xa63f,	// (0x000af40d) aid_size_touch_mv_arrow_right

0x6356,	// (0x000ab124) main_cset_slider_pane_g16_ParamLimits

0x6356,	// (0x000ab124) main_cset_slider_pane_g16

0x6362,	// (0x000ab130) main_cset_slider_pane_g17_ParamLimits

0x6362,	// (0x000ab130) main_cset_slider_pane_g17

0x6adf,	// (0x000ab8ad) cell_cam4_burst_pane_g1_ParamLimits

0xe685,	// (0x000b3453) compa_mode_pane

0x653c,	// (0x000ab30a) popup_vtel_slider_window_g3_ParamLimits

0x653c,	// (0x000ab30a) popup_vtel_slider_window_g3

0x6553,	// (0x000ab321) popup_vtel_slider_window_g4_ParamLimits

0x6553,	// (0x000ab321) popup_vtel_slider_window_g4

0x656a,	// (0x000ab338) popup_vtel_slider_window_t1_ParamLimits

0x656a,	// (0x000ab338) popup_vtel_slider_window_t1

0x9542,	// (0x000ae310) main_cl_pane

0x9d0a,	// (0x000aead8) popup_imed_adjust2_window_ParamLimits

0xbbd7,	// (0x000b09a5) bg_tb_trans_pane_cp05_ParamLimits

0xc580,	// (0x000b134e) popup_imed_adjust2_window_g1_ParamLimits

0xc58f,	// (0x000b135d) popup_imed_adjust2_window_g2_ParamLimits

0xc58f,	// (0x000b135d) popup_imed_adjust2_window_g2

0xc59b,	// (0x000b1369) popup_imed_adjust2_window_g3_ParamLimits

0xc59b,	// (0x000b1369) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000b45ad) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000b45ad) popup_imed_adjust2_window_g

0xc5a7,	// (0x000b1375) popup_imed_adjust2_window_t1_ParamLimits

0xc5bf,	// (0x000b138d) slider_imed_adjust_pane_ParamLimits

0xc5d3,	// (0x000b13a1) slider_imed_adjust_pane_g1_ParamLimits

0xc5e3,	// (0x000b13b1) slider_imed_adjust_pane_g2_ParamLimits

0xc5f3,	// (0x000b13c1) slider_imed_adjust_pane_g3_ParamLimits

0xc604,	// (0x000b13d2) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000b45b4) slider_imed_adjust_pane_g_ParamLimits

0x5a6c,	// (0x000aa83a) aid_touch_area_cam4_ParamLimits

0x5a6c,	// (0x000aa83a) aid_touch_area_cam4

0xa07e,	// (0x000aee4c) battery_pane_cp01

0x5b3b,	// (0x000aa909) main_camera4_pane_g6_ParamLimits

0x5b3b,	// (0x000aa909) main_camera4_pane_g6

0x5b65,	// (0x000aa933) main_camera4_pane_t2_ParamLimits

0x5b65,	// (0x000aa933) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000b46b7) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000b46b7) main_camera4_pane_t

0x5b9a,	// (0x000aa968) aid_touch_area_vid4_ParamLimits

0x5b9a,	// (0x000aa968) aid_touch_area_vid4

0x5bee,	// (0x000aa9bc) main_video4_pane_g5_ParamLimits

0x5bee,	// (0x000aa9bc) main_video4_pane_g5

0x5c13,	// (0x000aa9e1) vid4_progress_pane_ParamLimits

0x5c13,	// (0x000aa9e1) vid4_progress_pane

0xcc43,	// (0x000b1a11) main_cset_slider_pane_g18_ParamLimits

0xcc43,	// (0x000b1a11) main_cset_slider_pane_g18

0xce35,	// (0x000b1c03) cell_cam4_burst_pane_g2_ParamLimits

0xce35,	// (0x000b1c03) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000b4816) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000b4816) cell_cam4_burst_pane_g

0xedc2,	// (0x000b3b90) bg_cl_pane_ParamLimits

0xedc2,	// (0x000b3b90) bg_cl_pane

0x6bd1,	// (0x000ab99f) cl_header_pane_ParamLimits

0x6bd1,	// (0x000ab99f) cl_header_pane

0x6be5,	// (0x000ab9b3) cl_listscroll_pane_ParamLimits

0x6be5,	// (0x000ab9b3) cl_listscroll_pane

0xd013,	// (0x000b1de1) bg_cl_pane_g1

0xd01b,	// (0x000b1de9) bg_cl_pane_g2

0xd023,	// (0x000b1df1) bg_cl_pane_g3

0xd02b,	// (0x000b1df9) bg_cl_pane_g4

0xd033,	// (0x000b1e01) bg_cl_pane_g5

0xd03b,	// (0x000b1e09) bg_cl_pane_g6

0xd043,	// (0x000b1e11) bg_cl_pane_g7

0xd04b,	// (0x000b1e19) bg_cl_pane_g8

0xd053,	// (0x000b1e21) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000b4851) bg_cl_pane_g

0x6bf5,	// (0x000ab9c3) aid_height_cl_leading_ParamLimits

0x6bf5,	// (0x000ab9c3) aid_height_cl_leading

0x6c01,	// (0x000ab9cf) aid_height_cl_text_ParamLimits

0x6c01,	// (0x000ab9cf) aid_height_cl_text

0xbbe5,	// (0x000b09b3) bg_cl_header_pane_ParamLimits

0xbbe5,	// (0x000b09b3) bg_cl_header_pane

0x6c20,	// (0x000ab9ee) cl_header_pane_g1_ParamLimits

0x6c20,	// (0x000ab9ee) cl_header_pane_g1

0x6c36,	// (0x000aba04) cl_header_pane_t1_ParamLimits

0x6c36,	// (0x000aba04) cl_header_pane_t1

0xd05b,	// (0x000b1e29) cl_list_pane

0xcc16,	// (0x000b19e4) hc_scroll_pane_cp01

0x9931,	// (0x000ae6ff) bg_cl_header_pane_g1

0xcaea,	// (0x000b18b8) bg_cl_header_pane_g2

0x9951,	// (0x000ae71f) bg_cl_header_pane_g3

0xcafa,	// (0x000b18c8) bg_cl_header_pane_g4

0xcaf2,	// (0x000b18c0) bg_cl_header_pane_g5

0xcd44,	// (0x000b1b12) bg_cl_header_pane_g6

0xcb12,	// (0x000b18e0) bg_cl_header_pane_g7

0xcb1a,	// (0x000b18e8) bg_cl_header_pane_g8

0xcb0a,	// (0x000b18d8) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000b4864) bg_cl_header_pane_g

0x6c4f,	// (0x000aba1d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6c4f,	// (0x000aba1d) hc_cl_list_double_graphic_heading_pane

0x6c60,	// (0x000aba2e) hc_cl_list_single_graphic_pane_ParamLimits

0x6c60,	// (0x000aba2e) hc_cl_list_single_graphic_pane

0x6c76,	// (0x000aba44) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6c76,	// (0x000aba44) hc_cl_list_single_graphic_pane_g1

0x6c82,	// (0x000aba50) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6c82,	// (0x000aba50) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000b4877) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000b4877) hc_cl_list_single_graphic_pane_g

0x6c96,	// (0x000aba64) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6c96,	// (0x000aba64) hc_cl_list_single_graphic_pane_t1

0x6c76,	// (0x000aba44) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6c76,	// (0x000aba44) hc_cl_list_double_graphic_heading_pane_g1

0x6cab,	// (0x000aba79) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6cab,	// (0x000aba79) hc_cl_list_double_graphic_heading_pane_g2

0x6cbf,	// (0x000aba8d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6cbf,	// (0x000aba8d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000b487c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000b487c) hc_cl_list_double_graphic_heading_pane_g

0x6cd3,	// (0x000abaa1) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6cd3,	// (0x000abaa1) hc_cl_list_double_graphic_heading_pane_t1

0x6ce8,	// (0x000abab6) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6ce8,	// (0x000abab6) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000b4883) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000b4883) hc_cl_list_double_graphic_heading_pane_t

0xa212,	// (0x000aefe0) vid4_progress_pane_g1

0xa222,	// (0x000aeff0) vid4_progress_pane_g2

0x6cfd,	// (0x000abacb) vid4_progress_pane_g3

0xa232,	// (0x000af000) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000b4888) vid4_progress_pane_g

0x6d0f,	// (0x000abadd) vid4_progress_pane_t1

0xa24a,	// (0x000af018) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000b4893) vid4_progress_pane_t

0x6d27,	// (0x000abaf5) wait_bar_pane_cp07

0xbde0,	// (0x000b0bae) blid_firmament_pane_ParamLimits

0xbe2f,	// (0x000b0bfd) popup_blid_sat_info2_window_g1

0xbe53,	// (0x000b0c21) popup_blid_sat_info2_window_t3

0xbe61,	// (0x000b0c2f) popup_blid_sat_info2_window_t4

0xbe6f,	// (0x000b0c3d) popup_blid_sat_info2_window_t5

0xbe7d,	// (0x000b0c4b) popup_blid_sat_info2_window_t6

0xbe8d,	// (0x000b0c5b) popup_blid_sat_info2_window_t7

0xbe9b,	// (0x000b0c69) popup_blid_sat_info2_window_t8

0xbea9,	// (0x000b0c77) popup_blid_sat_info2_window_t9

0xbeb7,	// (0x000b0c85) popup_blid_sat_info2_window_t10

0xbf79,	// (0x000b0d47) aid_firma_cardinal_ParamLimits

0xbf8d,	// (0x000b0d5b) blid_firmament_pane_t1_ParamLimits

0xbfa4,	// (0x000b0d72) blid_firmament_pane_t2_ParamLimits

0xbfbb,	// (0x000b0d89) blid_firmament_pane_t3_ParamLimits

0xbfd2,	// (0x000b0da0) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x000b44a1) blid_firmament_pane_t_ParamLimits

0xbfe9,	// (0x000b0db7) blid_sat_info_pane_ParamLimits

0x9534,	// (0x000ae302) main_cam_set_pane_ParamLimits

0x5124,	// (0x000a9ef2) aid_size_cell_colour_35_ParamLimits

0x5144,	// (0x000a9f12) aid_size_cell_colour_112_ParamLimits

0x5164,	// (0x000a9f32) aid_size_cell_effect_ParamLimits

0xbbd7,	// (0x000b09a5) bg_tb_trans_pane_cp02_ParamLimits

0x9bc7,	// (0x000ae995) heading_imed_pane_ParamLimits

0x5184,	// (0x000a9f52) listscroll_imed_pane_ParamLimits

0xb1fd,	// (0x000affcb) popup_call2_audio_first_window_g5_ParamLimits

0xb1fd,	// (0x000affcb) popup_call2_audio_first_window_g5

0x5717,	// (0x000aa4e5) aid_size_touch_image3_arrow_left_ParamLimits

0x5717,	// (0x000aa4e5) aid_size_touch_image3_arrow_left

0x5743,	// (0x000aa511) aid_size_touch_image3_arrow_right_ParamLimits

0x5743,	// (0x000aa511) aid_size_touch_image3_arrow_right

0xa25f,	// (0x000af02d) vid4_progress_pane_t3

0x5497,	// (0x000aa265) main_hwr_training_symbol_option_pane_ParamLimits

0x5497,	// (0x000aa265) main_hwr_training_symbol_option_pane

0xc86d,	// (0x000b163b) popup_hwr_training_preview_window_ParamLimits

0xc86d,	// (0x000b163b) popup_hwr_training_preview_window

0x54b7,	// (0x000aa285) hwr_training_navi_pane_g5_ParamLimits

0x54b7,	// (0x000aa285) hwr_training_navi_pane_g5

0xcad8,	// (0x000b18a6) popup_char_count_window

0x9534,	// (0x000ae302) bg_popup_sub_pane_cp20_ParamLimits

0x6686,	// (0x000ab454) list_vitu2_match_list_pane_ParamLimits

0x6695,	// (0x000ab463) vitu2_page_scroll_pane_ParamLimits

0x6695,	// (0x000ab463) vitu2_page_scroll_pane

0xd07e,	// (0x000b1e4c) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd07e,	// (0x000b1e4c) list_single_hwr_training_symbol_option_pane

0xd091,	// (0x000b1e5f) list_single_hwr_training_symbol_option_pane_g1

0xd099,	// (0x000b1e67) list_single_hwr_training_symbol_option_pane_t1

0xd0a7,	// (0x000b1e75) bg_button_pane_cp023

0xd0b0,	// (0x000b1e7e) bg_button_pane_cp024

0x6d69,	// (0x000abb37) vitu2_page_scroll_pane_g1

0x6d71,	// (0x000abb3f) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000b489a) vitu2_page_scroll_pane_g

0x6d79,	// (0x000abb47) vitu2_page_scroll_pane_t1

0xbd40,	// (0x000b0b0e) popup_char_count_window_g1

0xd0e3,	// (0x000b1eb1) popup_char_count_window_g2

0xd0ec,	// (0x000b1eba) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000b489f) popup_char_count_window_g

0xd0f5,	// (0x000b1ec3) popup_char_count_window_t1

0x9542,	// (0x000ae310) main_vded2_pane

0xc56c,	// (0x000b133a) aid_size_cell_imed_line

0xc576,	// (0x000b1344) grid_imed_line_width_pane

0xa144,	// (0x000aef12) vid4_indicators_pane_g4

0xd103,	// (0x000b1ed1) cell_imed_line_width_pane_ParamLimits

0xd103,	// (0x000b1ed1) cell_imed_line_width_pane

0xd117,	// (0x000b1ee5) cell_imed_line_width_pane_g1

0xcb9b,	// (0x000b1969) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000b48a6) cell_imed_line_width_pane_g

0x6d88,	// (0x000abb56) main_vded2_pane_g1_ParamLimits

0x6d88,	// (0x000abb56) main_vded2_pane_g1

0x6d9e,	// (0x000abb6c) main_vded2_pane_g2_ParamLimits

0x6d9e,	// (0x000abb6c) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000b48ab) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000b48ab) main_vded2_pane_g

0x6db0,	// (0x000abb7e) vded2_slider_pane_ParamLimits

0x6db0,	// (0x000abb7e) vded2_slider_pane

0x6dc0,	// (0x000abb8e) aid_size_touch_vded2_end

0x6dca,	// (0x000abb98) aid_size_touch_vded2_playhead

0xd120,	// (0x000b1eee) aid_size_touch_vded2_start

0xd128,	// (0x000b1ef6) vded2_slider_bg_pane

0xd131,	// (0x000b1eff) vded2_slider_pane_g1

0xd13a,	// (0x000b1f08) vded2_slider_pane_g2

0x6dd4,	// (0x000abba2) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000b48b0) vded2_slider_pane_g

0xd142,	// (0x000b1f10) vded2_slider_bg_pane_g1

0xd14b,	// (0x000b1f19) vded2_slider_bg_pane_g2

0xd154,	// (0x000b1f22) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x000b48b7) vded2_slider_bg_pane_g

0x2e91,	// (0x000a7c5f) aid_postcard_touch_down_pane_ParamLimits

0x2e91,	// (0x000a7c5f) aid_postcard_touch_down_pane

0x2ea7,	// (0x000a7c75) aid_postcard_touch_up_pane_ParamLimits

0x2ea7,	// (0x000a7c75) aid_postcard_touch_up_pane

0x9542,	// (0x000ae310) main_blid2_pane

0x9cf0,	// (0x000aeabe) popup_blid2_search_window

0xe685,	// (0x000b3453) blid2_gps_pane

0xe685,	// (0x000b3453) blid2_navig_pane

0xe685,	// (0x000b3453) blid2_search_pane

0xe685,	// (0x000b3453) blid2_tripm_pane

0x6ddf,	// (0x000abbad) blid2_search_pane_g1_ParamLimits

0x6ddf,	// (0x000abbad) blid2_search_pane_g1

0x6df9,	// (0x000abbc7) blid2_search_pane_t1_ParamLimits

0x6df9,	// (0x000abbc7) blid2_search_pane_t1

0x6e0b,	// (0x000abbd9) aid_size_cell_blid2_gps_ParamLimits

0x6e0b,	// (0x000abbd9) aid_size_cell_blid2_gps

0x6e23,	// (0x000abbf1) blid2_gps_pane_g1_ParamLimits

0x6e23,	// (0x000abbf1) blid2_gps_pane_g1

0x6e37,	// (0x000abc05) grid_blid2_satellite_pane_ParamLimits

0x6e37,	// (0x000abc05) grid_blid2_satellite_pane

0x6e51,	// (0x000abc1f) blid2_navig_pane_g1_ParamLimits

0x6e51,	// (0x000abc1f) blid2_navig_pane_g1

0x6e5d,	// (0x000abc2b) blid2_navig_pane_t1_ParamLimits

0x6e5d,	// (0x000abc2b) blid2_navig_pane_t1

0x6e78,	// (0x000abc46) blid2_navig_pane_t2_ParamLimits

0x6e78,	// (0x000abc46) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x000b48be) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x000b48be) blid2_navig_pane_t

0x6e93,	// (0x000abc61) blid2_navig_ring_pane_ParamLimits

0x6e93,	// (0x000abc61) blid2_navig_ring_pane

0x6eac,	// (0x000abc7a) blid2_speed_pane_ParamLimits

0x6eac,	// (0x000abc7a) blid2_speed_pane

0x6eb8,	// (0x000abc86) blid2_tripm_pane_g1_ParamLimits

0x6eb8,	// (0x000abc86) blid2_tripm_pane_g1

0x6ed1,	// (0x000abc9f) blid2_tripm_pane_g2_ParamLimits

0x6ed1,	// (0x000abc9f) blid2_tripm_pane_g2

0x6ee5,	// (0x000abcb3) blid2_tripm_pane_g3_ParamLimits

0x6ee5,	// (0x000abcb3) blid2_tripm_pane_g3

0x6ef9,	// (0x000abcc7) blid2_tripm_pane_g4_ParamLimits

0x6ef9,	// (0x000abcc7) blid2_tripm_pane_g4

0x6f0d,	// (0x000abcdb) blid2_tripm_pane_g5_ParamLimits

0x6f0d,	// (0x000abcdb) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x000b48c3) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x000b48c3) blid2_tripm_pane_g

0x6f33,	// (0x000abd01) blid2_tripm_pane_t1_ParamLimits

0x6f33,	// (0x000abd01) blid2_tripm_pane_t1

0x6f4e,	// (0x000abd1c) blid2_tripm_pane_t2_ParamLimits

0x6f4e,	// (0x000abd1c) blid2_tripm_pane_t2

0x6f67,	// (0x000abd35) blid2_tripm_pane_t3_ParamLimits

0x6f67,	// (0x000abd35) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x000b48d0) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x000b48d0) blid2_tripm_pane_t

0x6fae,	// (0x000abd7c) cell_blid2_satellite_pane_ParamLimits

0x6fae,	// (0x000abd7c) cell_blid2_satellite_pane

0x6fcc,	// (0x000abd9a) cell_blid2_satellite_pane_g1

0xd15d,	// (0x000b1f2b) cell_blid2_satellite_pane_t1

0xbff9,	// (0x000b0dc7) blid2_speed_pane_g1

0xd16b,	// (0x000b1f39) blid2_speed_pane_t1

0xd179,	// (0x000b1f47) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x000b48d9) blid2_speed_pane_t

0xbff9,	// (0x000b0dc7) blid2_navig_ring_pane_g1

0x6fd5,	// (0x000abda3) blid2_navig_ring_pane_g2

0x6fdd,	// (0x000abdab) blid2_navig_ring_pane_g3

0x6fe5,	// (0x000abdb3) blid2_navig_ring_pane_g4

0x6fed,	// (0x000abdbb) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x000b48de) blid2_navig_ring_pane_g

0xe685,	// (0x000b3453) bg_popup_window_pane_cp011

0xd187,	// (0x000b1f55) popup_blid2_search_window_g1

0xd18f,	// (0x000b1f5d) popup_blid2_search_window_t1

0xd19d,	// (0x000b1f6b) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x000b48e9) popup_blid2_search_window_t

0x9840,	// (0x000ae60e) main_browser_pane_g1

0xedc2,	// (0x000b3b90) main_browser_pane_ParamLimits

0x9534,	// (0x000ae302) bg_button_pane_cp011_ParamLimits

0x5f2c,	// (0x000aacfa) cell_vitu2_function_pane_g1_ParamLimits

0xbbd7,	// (0x000b09a5) bg_popup_sub_pane_cp22_ParamLimits

0x686b,	// (0x000ab639) input_focus_pane_cp08_ParamLimits

0x6882,	// (0x000ab650) popup_vitu2_query_button_pane_ParamLimits

0x6882,	// (0x000ab650) popup_vitu2_query_button_pane

0x6893,	// (0x000ab661) popup_vitu2_query_input_button_pane

0xcd7f,	// (0x000b1b4d) popup_vitu2_query_window_g1_ParamLimits

0x689d,	// (0x000ab66b) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000b47ea) popup_vitu2_query_window_g_ParamLimits

0xe685,	// (0x000b3453) bg_button_pane_cp026

0x6ff5,	// (0x000abdc3) popup_vitu2_query_input_button_pane_g1

0xe685,	// (0x000b3453) bg_button_pane_cp025

0xd1ab,	// (0x000b1f79) popup_vitu2_query_button_pane_t1

0x4539,	// (0x000a9307) main_mp3_pane_t6

0x4547,	// (0x000a9315) popup_slider_window_cp01

0xa0a8,	// (0x000aee76) cam4_battery_pane

0xa101,	// (0x000aeecf) cam4_battery_pane_cp02

0xa20a,	// (0x000aefd8) cam4_battery_pane_cp01

0xa20a,	// (0x000aefd8) cam4_battery_pane_cp03

0xcba3,	// (0x000b1971) cam4_battery_pane_g1

0xbff9,	// (0x000b0dc7) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x000b48ee) cam4_battery_pane_g

0xbec5,	// (0x000b0c93) popup_blid_sat_info2_window_t11

0xa616,	// (0x000af3e4) aid_size_touch_mv_arrow_left_ParamLimits

0xa63f,	// (0x000af40d) aid_size_touch_mv_arrow_right_ParamLimits

0xa69d,	// (0x000af46b) navi_pane_g1_ParamLimits

0xa6a9,	// (0x000af477) navi_pane_g2_ParamLimits

0xa6d7,	// (0x000af4a5) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000b41b3) navi_pane_g_ParamLimits

0x28be,	// (0x000a768c) navi_pane_mv_t1_ParamLimits

0x5190,	// (0x000a9f5e) grid_imed_effect_pane_ParamLimits

0x14c8,	// (0x000a6296) aid_placing_vt_slider_lsc

0x978f,	// (0x000ae55d) aid_placing_vt_slider_prt

0xbbe5,	// (0x000b09b3) bg_tb_trans_pane_cp01_ParamLimits

0xc185,	// (0x000b0f53) popup_image_details_window_g1_ParamLimits

0xc198,	// (0x000b0f66) popup_image_details_window_g2_ParamLimits

0xc1ad,	// (0x000b0f7b) popup_image_details_window_g3_ParamLimits

0xc1ad,	// (0x000b0f7b) popup_image_details_window_g3

0xf718,	// (0x000b44e6) popup_image_details_window_g_ParamLimits

0xc1c1,	// (0x000b0f8f) popup_image_details_window_t1_ParamLimits

0xc1d3,	// (0x000b0fa1) popup_image_details_window_t2_ParamLimits

0xc1ec,	// (0x000b0fba) popup_image_details_window_t3_ParamLimits

0xc200,	// (0x000b0fce) popup_image_details_window_t4_ParamLimits

0xc21b,	// (0x000b0fe9) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x000b44ed) popup_image_details_window_t_ParamLimits

0x6c0d,	// (0x000ab9db) cl_header_name_pane_ParamLimits

0x6c0d,	// (0x000ab9db) cl_header_name_pane

0x6ffd,	// (0x000abdcb) cl_header_name_pane_t1_ParamLimits

0x6ffd,	// (0x000abdcb) cl_header_name_pane_t1

0x701e,	// (0x000abdec) cl_header_name_pane_t2_ParamLimits

0x701e,	// (0x000abdec) cl_header_name_pane_t2

0x7060,	// (0x000abe2e) cl_header_name_pane_t3_ParamLimits

0x7060,	// (0x000abe2e) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x000b48f3) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x000b48f3) cl_header_name_pane_t

0xa766,	// (0x000af534) navi_pane_mv_g2_ParamLimits

0xca95,	// (0x000b1863) field_vitu2_entry_pane_g1_ParamLimits

0xcaa1,	// (0x000b186f) field_vitu2_entry_pane_g2_ParamLimits

0xcaad,	// (0x000b187b) field_vitu2_entry_pane_g3_ParamLimits

0xcaad,	// (0x000b187b) field_vitu2_entry_pane_g3

0xf91b,	// (0x000b46e9) field_vitu2_entry_pane_g_ParamLimits

0xa179,	// (0x000aef47) cell_vitu2_itu_pane_g1_ParamLimits

0x5ec0,	// (0x000aac8e) cell_vitu2_itu_pane_g2_ParamLimits

0x5ec0,	// (0x000aac8e) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000b46f5) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000b46f5) cell_vitu2_itu_pane_g

0x9534,	// (0x000ae302) bg_vkb2_func_pane_cp05_ParamLimits

0x9534,	// (0x000ae302) bg_vkb2_func_pane_cp05

0x9534,	// (0x000ae302) bg_vkb2_func_pane_cp03

0x9534,	// (0x000ae302) bg_vkb2_func_pane_cp04

0x9534,	// (0x000ae302) bg_vkb2_func_pane_cp10_ParamLimits

0x9534,	// (0x000ae302) bg_vkb2_func_pane_cp10

0x6bb3,	// (0x000ab981) bg_vkb2_func_pane_cp08

0x6b99,	// (0x000ab967) bg_vkb2_func_pane_cp06

0x6ba7,	// (0x000ab975) bg_vkb2_func_pane_cp07

0xd0b9,	// (0x000b1e87) bg_vkb2_func_pane_cp11_ParamLimits

0xd0b9,	// (0x000b1e87) bg_vkb2_func_pane_cp11

0xd0ce,	// (0x000b1e9c) bg_vkb2_func_pane_cp12_ParamLimits

0xd0ce,	// (0x000b1e9c) bg_vkb2_func_pane_cp12

0xe685,	// (0x000b3453) bg_vkb2_func_pane_cp09

0xcaea,	// (0x000b18b8) bg_vkb2_func_pane_g1

0x9951,	// (0x000ae71f) bg_vkb2_func_pane_g2

0xcaf2,	// (0x000b18c0) bg_vkb2_func_pane_g3

0xcafa,	// (0x000b18c8) bg_vkb2_func_pane_g4

0xcd44,	// (0x000b1b12) bg_vkb2_func_pane_g5

0xcb12,	// (0x000b18e0) bg_vkb2_func_pane_g6

0xcb1a,	// (0x000b18e8) bg_vkb2_func_pane_g7

0xcb0a,	// (0x000b18d8) bg_vkb2_func_pane_g8

0x9931,	// (0x000ae6ff) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x000b48fa) bg_vkb2_func_pane_g

0x6f21,	// (0x000abcef) blid2_tripm_pane_g6_ParamLimits

0x6f21,	// (0x000abcef) blid2_tripm_pane_g6

0xc925,	// (0x000b16f3) mp4_progress_pane_g1

0x6f9a,	// (0x000abd68) blid2_tripm_values_pane_ParamLimits

0x6f9a,	// (0x000abd68) blid2_tripm_values_pane

0x7091,	// (0x000abe5f) blid2_tripm_values_pane_t1

0x709f,	// (0x000abe6d) blid2_tripm_values_pane_t2

0x70ad,	// (0x000abe7b) blid2_tripm_values_pane_t3

0x70bb,	// (0x000abe89) blid2_tripm_values_pane_t4

0x70c9,	// (0x000abe97) blid2_tripm_values_pane_t5

0x70d7,	// (0x000abea5) blid2_tripm_values_pane_t6

0x70e5,	// (0x000abeb3) blid2_tripm_values_pane_t7

0x70f3,	// (0x000abec1) blid2_tripm_values_pane_t8

0x7101,	// (0x000abecf) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x000b490d) blid2_tripm_values_pane_t

0x150a,	// (0x000a62d8) call_video_pane_t1_ParamLimits

0x1528,	// (0x000a62f6) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000b403c) call_video_pane_t_ParamLimits

0x2d96,	// (0x000a7b64) msg_header_pane_g1_ParamLimits

0xa94e,	// (0x000af71c) msg_header_pane_g2_ParamLimits

0xa94e,	// (0x000af71c) msg_header_pane_g2

0x0001,

0xf488,	// (0x000b4256) msg_header_pane_g_ParamLimits

0xf488,	// (0x000b4256) msg_header_pane_g

0xedc2,	// (0x000b3b90) main_clock2_pane_ParamLimits

0x4e91,	// (0x000a9c5f) grid_clock2_toolbar_pane_ParamLimits

0x4e91,	// (0x000a9c5f) grid_clock2_toolbar_pane

0x4e91,	// (0x000a9c5f) listscroll_clock2_pane_ParamLimits

0x4e91,	// (0x000a9c5f) listscroll_clock2_pane

0x4f84,	// (0x000a9d52) main_clock2_pane_t3_ParamLimits

0x4f84,	// (0x000a9d52) main_clock2_pane_t3

0x4fa8,	// (0x000a9d76) main_clock2_pane_t4_ParamLimits

0x4fa8,	// (0x000a9d76) main_clock2_pane_t4

0xd1b9,	// (0x000b1f87) cell_clock2_toolbar_pane

0xd1c1,	// (0x000b1f8f) cell_clock2_toolbar_pane_cp01

0xd1c1,	// (0x000b1f8f) cell_clock2_toolbar_pane_cp02

0xd1c9,	// (0x000b1f97) cell_clock2_toolbar_pane_cp03

0xd1d1,	// (0x000b1f9f) list_clock2_pane

0xa58c,	// (0x000af35a) scroll_pane_cp10

0xd1d9,	// (0x000b1fa7) list_single_clock2_pane_ParamLimits

0xd1d9,	// (0x000b1fa7) list_single_clock2_pane

0x96ee,	// (0x000ae4bc) list_highlight_pane_cp08

0xd1e6,	// (0x000b1fb4) list_single_clock2_pane_t1

0xd1f4,	// (0x000b1fc2) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000b4920) list_single_clock2_pane_t

0xe685,	// (0x000b3453) bg_button_pane_cp10

0xd202,	// (0x000b1fd0) cell_clock2_toolbar_pane_g1

0x2e1d,	// (0x000a7beb) aid_main_viewer_pane_g1_ParamLimits

0x2e1d,	// (0x000a7beb) aid_main_viewer_pane_g1

0x2e2b,	// (0x000a7bf9) aid_main_viewer_pane_g2_ParamLimits

0x2e2b,	// (0x000a7bf9) aid_main_viewer_pane_g2

0x2e39,	// (0x000a7c07) aid_main_viewer_pane_g3_ParamLimits

0x2e39,	// (0x000a7c07) aid_main_viewer_pane_g3

0x2e48,	// (0x000a7c16) aid_main_viewer_pane_g4_ParamLimits

0x2e48,	// (0x000a7c16) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000b4267) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000b4267) aid_main_viewer_pane_g

0x374e,	// (0x000a851c) main_calc_pane_ParamLimits

0x3774,	// (0x000a8542) main_dialer2_pane_ParamLimits

0x9542,	// (0x000ae310) main_cam6_pane

0x9542,	// (0x000ae310) main_vid6_pane

0x4e9d,	// (0x000a9c6b) listscroll_gen_pane_cp06_ParamLimits

0x4e9d,	// (0x000a9c6b) listscroll_gen_pane_cp06

0x4fcb,	// (0x000a9d99) main_clock2_pane_t5_ParamLimits

0x4fcb,	// (0x000a9d99) main_clock2_pane_t5

0x5025,	// (0x000a9df3) aid_call2_pane_cp10_ParamLimits

0x5037,	// (0x000a9e05) aid_call_pane_cp10_ParamLimits

0xa60a,	// (0x000af3d8) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa60a,	// (0x000af3d8) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5049,	// (0x000a9e17) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5049,	// (0x000a9e17) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa60a,	// (0x000af3d8) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000b45a2) popup_clock_analogue_window_cp10_g_ParamLimits

0x505b,	// (0x000a9e29) popup_clock_analogue_window_cp10_t1_ParamLimits

0x56c4,	// (0x000aa492) cell_dialer2_keypad_pane_g2_ParamLimits

0x56c4,	// (0x000aa492) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000b4688) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000b4688) cell_dialer2_keypad_pane_g

0x56e0,	// (0x000aa4ae) cell_dialer2_keypad_pane_t1

0x6249,	// (0x000ab017) main_cset_text2_pane_ParamLimits

0x6249,	// (0x000ab017) main_cset_text2_pane

0xcf6b,	// (0x000b1d39) area_vitu2_query_pane_g1_ParamLimits

0x6b38,	// (0x000ab906) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000b483d) area_vitu2_query_pane_g_ParamLimits

0xcfef,	// (0x000b1dbd) area_vitu2_query_pane_t7_ParamLimits

0xcfef,	// (0x000b1dbd) area_vitu2_query_pane_t7

0x6b99,	// (0x000ab967) bg_button_pane_cp018_ParamLimits

0x6ba7,	// (0x000ab975) bg_button_pane_cp021_ParamLimits

0x6bb3,	// (0x000ab981) bg_button_pane_cp022_ParamLimits

0x6bb3,	// (0x000ab981) bg_vkb2_func_pane_cp08_ParamLimits

0x6b99,	// (0x000ab967) bg_vkb2_func_pane_cp06_ParamLimits

0x6ba7,	// (0x000ab975) bg_vkb2_func_pane_cp07_ParamLimits

0x6bc2,	// (0x000ab990) input_focus_pane_cp09_ParamLimits

0xa274,	// (0x000af042) cam6_autofocus_pane_ParamLimits

0xa274,	// (0x000af042) cam6_autofocus_pane

0x710f,	// (0x000abedd) cam6_image_uncrop_pane_ParamLimits

0x710f,	// (0x000abedd) cam6_image_uncrop_pane

0x711e,	// (0x000abeec) cam6_indi_pane_ParamLimits

0x711e,	// (0x000abeec) cam6_indi_pane

0x7134,	// (0x000abf02) cam6_mode_pane_ParamLimits

0x7134,	// (0x000abf02) cam6_mode_pane

0x7146,	// (0x000abf14) cam6_timer_pane_ParamLimits

0x7146,	// (0x000abf14) cam6_timer_pane

0x7152,	// (0x000abf20) cam6_zoom_pane_ParamLimits

0x7152,	// (0x000abf20) cam6_zoom_pane

0x715e,	// (0x000abf2c) cam6_mode_pane_g1_ParamLimits

0x715e,	// (0x000abf2c) cam6_mode_pane_g1

0x716e,	// (0x000abf3c) cam6_mode_pane_g2_ParamLimits

0x716e,	// (0x000abf3c) cam6_mode_pane_g2

0x717e,	// (0x000abf4c) cam6_mode_pane_g3_ParamLimits

0x717e,	// (0x000abf4c) cam6_mode_pane_g3

0x718e,	// (0x000abf5c) cam6_mode_pane_g4_ParamLimits

0x718e,	// (0x000abf5c) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000b4925) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000b4925) cam6_mode_pane_g

0xd20a,	// (0x000b1fd8) bg_tb_trans_pane_cp08_ParamLimits

0xd20a,	// (0x000b1fd8) bg_tb_trans_pane_cp08

0xd218,	// (0x000b1fe6) cam6_battery_pane_ParamLimits

0xd218,	// (0x000b1fe6) cam6_battery_pane

0xd22e,	// (0x000b1ffc) cam6_indi_pane_g1_ParamLimits

0xd22e,	// (0x000b1ffc) cam6_indi_pane_g1

0xd240,	// (0x000b200e) cam6_indi_pane_g2_ParamLimits

0xd240,	// (0x000b200e) cam6_indi_pane_g2

0xd252,	// (0x000b2020) cam6_indi_pane_g3_ParamLimits

0xd252,	// (0x000b2020) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000b492e) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000b492e) cam6_indi_pane_g

0xd264,	// (0x000b2032) cam6_indi_pane_t1_ParamLimits

0xd264,	// (0x000b2032) cam6_indi_pane_t1

0x719e,	// (0x000abf6c) cam6_autofocus_pane_g1

0x71a6,	// (0x000abf74) cam6_autofocus_pane_g2

0x71ae,	// (0x000abf7c) cam6_autofocus_pane_g3

0x71b6,	// (0x000abf84) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000b4935) cam6_autofocus_pane_g

0xd28a,	// (0x000b2058) cam6_timer_pane_g1

0xd292,	// (0x000b2060) cam6_timer_pane_t1

0xd2a0,	// (0x000b206e) cam6_zoom_cont_pane

0xd2a8,	// (0x000b2076) cam6_zoom_pane_g1

0xd2b0,	// (0x000b207e) cam6_zoom_pane_g2

0x71be,	// (0x000abf8c) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000b493e) cam6_zoom_pane_g

0xbff9,	// (0x000b0dc7) cam6_battery_pane_g1

0xbff9,	// (0x000b0dc7) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x000b44aa) cam6_battery_pane_g

0xd2b8,	// (0x000b2086) cam6_zoom_cont_pane_g1

0xd2c1,	// (0x000b208f) cam6_zoom_cont_pane_g2

0xd2ca,	// (0x000b2098) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000b4945) cam6_zoom_cont_pane_g

0x71db,	// (0x000abfa9) cam6_mode_pane_cp_ParamLimits

0x71db,	// (0x000abfa9) cam6_mode_pane_cp

0x71ed,	// (0x000abfbb) cam6_zoom_pane_cp_ParamLimits

0x71ed,	// (0x000abfbb) cam6_zoom_pane_cp

0x71f9,	// (0x000abfc7) vid6_image_uncrop_cif_pane_ParamLimits

0x71f9,	// (0x000abfc7) vid6_image_uncrop_cif_pane

0x7209,	// (0x000abfd7) vid6_image_uncrop_nhd_pane_ParamLimits

0x7209,	// (0x000abfd7) vid6_image_uncrop_nhd_pane

0x7218,	// (0x000abfe6) vid6_image_uncrop_vga_pane_ParamLimits

0x7218,	// (0x000abfe6) vid6_image_uncrop_vga_pane

0x7227,	// (0x000abff5) vid6_image_uncrop_wvga_pane_ParamLimits

0x7227,	// (0x000abff5) vid6_image_uncrop_wvga_pane

0x7236,	// (0x000ac004) vid6_indi_pane_ParamLimits

0x7236,	// (0x000ac004) vid6_indi_pane

0xd20a,	// (0x000b1fd8) bg_tb_trans_pane_cp09_ParamLimits

0xd20a,	// (0x000b1fd8) bg_tb_trans_pane_cp09

0xd2e2,	// (0x000b20b0) cam6_battery_pane_cp_ParamLimits

0xd2e2,	// (0x000b20b0) cam6_battery_pane_cp

0xd2ee,	// (0x000b20bc) vid6_indi_pane_g1_ParamLimits

0xd2ee,	// (0x000b20bc) vid6_indi_pane_g1

0xd300,	// (0x000b20ce) vid6_indi_pane_g2_ParamLimits

0xd300,	// (0x000b20ce) vid6_indi_pane_g2

0xd312,	// (0x000b20e0) vid6_indi_pane_g3_ParamLimits

0xd312,	// (0x000b20e0) vid6_indi_pane_g3

0xd327,	// (0x000b20f5) vid6_indi_pane_g4_ParamLimits

0xd327,	// (0x000b20f5) vid6_indi_pane_g4

0xd33c,	// (0x000b210a) vid6_indi_pane_g5_ParamLimits

0xd33c,	// (0x000b210a) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000b494c) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000b494c) vid6_indi_pane_g

0xd356,	// (0x000b2124) vid6_indi_pane_t1_ParamLimits

0xd356,	// (0x000b2124) vid6_indi_pane_t1

0xd36c,	// (0x000b213a) vid6_indi_pane_t2_ParamLimits

0xd36c,	// (0x000b213a) vid6_indi_pane_t2

0xd394,	// (0x000b2162) vid6_indi_pane_t3_ParamLimits

0xd394,	// (0x000b2162) vid6_indi_pane_t3

0xd3bc,	// (0x000b218a) vid6_indi_pane_t4_ParamLimits

0xd3bc,	// (0x000b218a) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000b4957) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000b4957) vid6_indi_pane_t

0xd3e0,	// (0x000b21ae) wait_bar_pane_cp08

0x724e,	// (0x000ac01c) main_cset_text2_pane_t1_ParamLimits

0x724e,	// (0x000ac01c) main_cset_text2_pane_t1

0x71c6,	// (0x000abf94) listscroll_gen_pane_cp06_t1_ParamLimits

0x71c6,	// (0x000abf94) listscroll_gen_pane_cp06_t1

0x9542,	// (0x000ae310) main_cam6_set_pane

0xa09a,	// (0x000aee68) bg_tb_trans_pane_cp06_ParamLimits

0xa0b0,	// (0x000aee7e) cam4_indicators_pane_g1_ParamLimits

0xa0c1,	// (0x000aee8f) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000b46c5) cam4_indicators_pane_g_ParamLimits

0xa0df,	// (0x000aeead) cam4_indicators_pane_t1_ParamLimits

0x9534,	// (0x000ae302) bg_tb_trans_pane_cp07_ParamLimits

0xa10b,	// (0x000aeed9) vid4_indicators_pane_g1_ParamLimits

0xa11f,	// (0x000aeeed) vid4_indicators_pane_g2_ParamLimits

0xa133,	// (0x000aef01) vid4_indicators_pane_g3_ParamLimits

0xa144,	// (0x000aef12) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000b46d7) vid4_indicators_pane_g_ParamLimits

0xa162,	// (0x000aef30) vid4_indicators_pane_t1_ParamLimits

0xa212,	// (0x000aefe0) vid4_progress_pane_g1_ParamLimits

0xa222,	// (0x000aeff0) vid4_progress_pane_g2_ParamLimits

0x6cfd,	// (0x000abacb) vid4_progress_pane_g3_ParamLimits

0xa232,	// (0x000af000) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000b4888) vid4_progress_pane_g_ParamLimits

0x6d0f,	// (0x000abadd) vid4_progress_pane_t1_ParamLimits

0xa24a,	// (0x000af018) vid4_progress_pane_t2_ParamLimits

0xa25f,	// (0x000af02d) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000b4893) vid4_progress_pane_t_ParamLimits

0x6d27,	// (0x000abaf5) wait_bar_pane_cp07_ParamLimits

0x726b,	// (0x000ac039) main_cam6_set_pane_g2_ParamLimits

0x726b,	// (0x000ac039) main_cam6_set_pane_g2

0x728f,	// (0x000ac05d) main_cset6_listscroll_pane_ParamLimits

0x728f,	// (0x000ac05d) main_cset6_listscroll_pane

0x72af,	// (0x000ac07d) main_cset6_slider_pane_ParamLimits

0x72af,	// (0x000ac07d) main_cset6_slider_pane

0x72c5,	// (0x000ac093) main_cset6_text2_pane_ParamLimits

0x72c5,	// (0x000ac093) main_cset6_text2_pane

0xd3ef,	// (0x000b21bd) main_cset6_text_pane

0xd3f7,	// (0x000b21c5) main_cset_list_pane_copy1_ParamLimits

0xd3f7,	// (0x000b21c5) main_cset_list_pane_copy1

0xd407,	// (0x000b21d5) scroll_pane_cp028_copy1

0x72d3,	// (0x000ac0a1) cset_list_set_pane_copy1

0x72e4,	// (0x000ac0b2) aid_position_infowindow_above_copy1

0x72ec,	// (0x000ac0ba) aid_position_infowindow_below_copy1

0x72f4,	// (0x000ac0c2) cset_list_set_pane_g1_copy1

0x72fc,	// (0x000ac0ca) cset_list_set_pane_g3_copy1_ParamLimits

0x72fc,	// (0x000ac0ca) cset_list_set_pane_g3_copy1

0x730b,	// (0x000ac0d9) cset_list_set_pane_t1_copy1_ParamLimits

0x730b,	// (0x000ac0d9) cset_list_set_pane_t1_copy1

0xbbe5,	// (0x000b09b3) list_highlight_pane_cp021_copy1_ParamLimits

0xbbe5,	// (0x000b09b3) list_highlight_pane_cp021_copy1

0xd410,	// (0x000b21de) cset6_slider_pane_ParamLimits

0xd410,	// (0x000b21de) cset6_slider_pane

0xd43c,	// (0x000b220a) main_cset6_slider_pane_g1_ParamLimits

0xd43c,	// (0x000b220a) main_cset6_slider_pane_g1

0x7320,	// (0x000ac0ee) main_cset6_slider_pane_g2_ParamLimits

0x7320,	// (0x000ac0ee) main_cset6_slider_pane_g2

0xd464,	// (0x000b2232) main_cset6_slider_pane_g3_ParamLimits

0xd464,	// (0x000b2232) main_cset6_slider_pane_g3

0x7348,	// (0x000ac116) main_cset6_slider_pane_g4_ParamLimits

0x7348,	// (0x000ac116) main_cset6_slider_pane_g4

0x7354,	// (0x000ac122) main_cset6_slider_pane_g5_ParamLimits

0x7354,	// (0x000ac122) main_cset6_slider_pane_g5

0xcc2b,	// (0x000b19f9) main_cset6_slider_pane_g7_ParamLimits

0xcc2b,	// (0x000b19f9) main_cset6_slider_pane_g7

0xcc37,	// (0x000b1a05) main_cset6_slider_pane_g8_ParamLimits

0xcc37,	// (0x000b1a05) main_cset6_slider_pane_g8

0x62f6,	// (0x000ab0c4) main_cset6_slider_pane_g9_ParamLimits

0x62f6,	// (0x000ab0c4) main_cset6_slider_pane_g9

0x6302,	// (0x000ab0d0) main_cset6_slider_pane_g10_ParamLimits

0x6302,	// (0x000ab0d0) main_cset6_slider_pane_g10

0x630e,	// (0x000ab0dc) main_cset6_slider_pane_g11_ParamLimits

0x630e,	// (0x000ab0dc) main_cset6_slider_pane_g11

0x631a,	// (0x000ab0e8) main_cset6_slider_pane_g12_ParamLimits

0x631a,	// (0x000ab0e8) main_cset6_slider_pane_g12

0x6326,	// (0x000ab0f4) main_cset6_slider_pane_g13_ParamLimits

0x6326,	// (0x000ab0f4) main_cset6_slider_pane_g13

0x6332,	// (0x000ab100) main_cset6_slider_pane_g14_ParamLimits

0x6332,	// (0x000ab100) main_cset6_slider_pane_g14

0x7360,	// (0x000ac12e) main_cset6_slider_pane_g15_ParamLimits

0x7360,	// (0x000ac12e) main_cset6_slider_pane_g15

0x6356,	// (0x000ab124) main_cset6_slider_pane_g16_ParamLimits

0x6356,	// (0x000ab124) main_cset6_slider_pane_g16

0x6362,	// (0x000ab130) main_cset6_slider_pane_g17_ParamLimits

0x6362,	// (0x000ab130) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000b4960) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000b4960) main_cset6_slider_pane_g

0xd470,	// (0x000b223e) main_cset6_slider_pane_t1_ParamLimits

0xd470,	// (0x000b223e) main_cset6_slider_pane_t1

0x7390,	// (0x000ac15e) main_cset6_slider_pane_t2_ParamLimits

0x7390,	// (0x000ac15e) main_cset6_slider_pane_t2

0x73bb,	// (0x000ac189) main_cset6_slider_pane_t3_ParamLimits

0x73bb,	// (0x000ac189) main_cset6_slider_pane_t3

0x73e6,	// (0x000ac1b4) main_cset6_slider_pane_t4_ParamLimits

0x73e6,	// (0x000ac1b4) main_cset6_slider_pane_t4

0x7411,	// (0x000ac1df) main_cset6_slider_pane_t5_ParamLimits

0x7411,	// (0x000ac1df) main_cset6_slider_pane_t5

0xd4b1,	// (0x000b227f) main_cset6_slider_pane_t7_ParamLimits

0xd4b1,	// (0x000b227f) main_cset6_slider_pane_t7

0x743c,	// (0x000ac20a) main_cset6_slider_pane_t8_ParamLimits

0x743c,	// (0x000ac20a) main_cset6_slider_pane_t8

0x7460,	// (0x000ac22e) main_cset6_slider_pane_t9_ParamLimits

0x7460,	// (0x000ac22e) main_cset6_slider_pane_t9

0x7484,	// (0x000ac252) main_cset6_slider_pane_t10_ParamLimits

0x7484,	// (0x000ac252) main_cset6_slider_pane_t10

0x74a8,	// (0x000ac276) main_cset6_slider_pane_t11_ParamLimits

0x74a8,	// (0x000ac276) main_cset6_slider_pane_t11

0xd4e7,	// (0x000b22b5) main_cset6_slider_pane_t14_ParamLimits

0xd4e7,	// (0x000b22b5) main_cset6_slider_pane_t14

0xd520,	// (0x000b22ee) main_cset6_slider_pane_t15_ParamLimits

0xd520,	// (0x000b22ee) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000b4985) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000b4985) main_cset6_slider_pane_t

0xd559,	// (0x000b2327) cset_slider_pane_g1_copy1

0xd562,	// (0x000b2330) cset_slider_pane_g2_copy1

0xd56b,	// (0x000b2339) cset_slider_pane_g3_copy1

0xe685,	// (0x000b3453) bg_popup_sub_pane_cp011_copy1

0xd574,	// (0x000b2342) main_cset_text_pane_g1_copy1

0xcd93,	// (0x000b1b61) main_cset_text_pane_t1_copy1

0xcda1,	// (0x000b1b6f) main_cset_text_pane_t2_copy1

0xcdaf,	// (0x000b1b7d) main_cset_text_pane_t3_copy1

0xcdbd,	// (0x000b1b8b) main_cset_text_pane_t4_copy1

0xcdcb,	// (0x000b1b99) main_cset_text_pane_t5_copy1

0xd57c,	// (0x000b234a) main_cset_text_pane_t6_copy1

0xcde7,	// (0x000b1bb5) main_cset_text_pane_t7_copy1

0x724e,	// (0x000ac01c) main_cset_text2_pane_t1_copy1

0x9534,	// (0x000ae302) main_ncimui_pane

0x39be,	// (0x000a878c) popup_query_ncimui_window_ParamLimits

0x39be,	// (0x000a878c) popup_query_ncimui_window

0xc2ca,	// (0x000b1098) field_cale_ev2_pane_g4_ParamLimits

0xc2ca,	// (0x000b1098) field_cale_ev2_pane_g4

0x55a4,	// (0x000aa372) cell_video_dialer_keypad_pane_g2_ParamLimits

0x55a4,	// (0x000aa372) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000b4663) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000b4663) cell_video_dialer_keypad_pane_g

0x55bc,	// (0x000aa38a) cell_video_dialer_keypad_pane_t1

0xe685,	// (0x000b3453) bg_popup_window_pane_cp012

0xa459,	// (0x000af227) heading_pane_cp06

0xd5a8,	// (0x000b2376) ncim_query_content_pane

0xe685,	// (0x000b3453) bg_popup_heading_pane_cp01

0xd5b0,	// (0x000b237e) ncim_heading_pane_t1

0xd5be,	// (0x000b238c) ncim_indicator_popup_pane

0xd5d0,	// (0x000b239e) ncim_query_button_pane

0xd5e4,	// (0x000b23b2) ncim_query_content_pane_t1

0xd5f6,	// (0x000b23c4) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x000b49c9) ncim_query_content_pane_t

0xd630,	// (0x000b23fe) ncim_query_list_pane

0xd642,	// (0x000b2410) ncim_query_popup_pane

0xd5be,	// (0x000b238c) ncim_indicator_popup_pane_ParamLimits

0x76c3,	// (0x000ac491) ncim_query_content_pane_g1_ParamLimits

0x76c3,	// (0x000ac491) ncim_query_content_pane_g1

0xd5e4,	// (0x000b23b2) ncim_query_content_pane_t1_ParamLimits

0xd5f6,	// (0x000b23c4) ncim_query_content_pane_t2_ParamLimits

0x76cf,	// (0x000ac49d) ncim_query_content_pane_t3_ParamLimits

0x76cf,	// (0x000ac49d) ncim_query_content_pane_t3

0x76f7,	// (0x000ac4c5) ncim_query_content_pane_t4_ParamLimits

0x76f7,	// (0x000ac4c5) ncim_query_content_pane_t4

0x771f,	// (0x000ac4ed) ncim_query_content_pane_t5_ParamLimits

0x771f,	// (0x000ac4ed) ncim_query_content_pane_t5

0xd608,	// (0x000b23d6) ncim_query_content_pane_t6_ParamLimits

0xd608,	// (0x000b23d6) ncim_query_content_pane_t6

0xfbfb,	// (0x000b49c9) ncim_query_content_pane_t_ParamLimits

0xd630,	// (0x000b23fe) ncim_query_list_pane_ParamLimits

0xd642,	// (0x000b2410) ncim_query_popup_pane_ParamLimits

0xd656,	// (0x000b2424) wait_bar_pane_cp04

0xe685,	// (0x000b3453) input_focus_pane_cp011

0xd65e,	// (0x000b242c) ncim_query_popup_pane_t1

0xd66c,	// (0x000b243a) ncim_list_query_list_pane_ParamLimits

0xd66c,	// (0x000b243a) ncim_list_query_list_pane

0xe685,	// (0x000b3453) bg_button_pane_cp027

0xd679,	// (0x000b2447) ncim_query_button_pane_g1

0xe685,	// (0x000b3453) list_highlight_pane_cp012

0xd683,	// (0x000b2451) ncim_list_query_list_pane_g1

0xd68b,	// (0x000b2459) ncim_list_query_list_pane_t1

0xa0d0,	// (0x000aee9e) cam4_indicators_pane_g3_ParamLimits

0xa0d0,	// (0x000aee9e) cam4_indicators_pane_g3

0xa150,	// (0x000aef1e) vid4_indicators_pane_g5_ParamLimits

0xa150,	// (0x000aef1e) vid4_indicators_pane_g5

0xa23e,	// (0x000af00c) vid4_progress_pane_g5_ParamLimits

0xa23e,	// (0x000af00c) vid4_progress_pane_g5

0x75b1,	// (0x000ac37f) main_ncimui_pane_g1

0x7617,	// (0x000ac3e5) ncimui_group_query_pane_ParamLimits

0x7617,	// (0x000ac3e5) ncimui_group_query_pane

0x765f,	// (0x000ac42d) ncimui_list_pane_ParamLimits

0x765f,	// (0x000ac42d) ncimui_list_pane

0x7686,	// (0x000ac454) ncimui_text_pane_ParamLimits

0x7686,	// (0x000ac454) ncimui_text_pane

0x7747,	// (0x000ac515) ncimui_text_pane_t1_ParamLimits

0x7747,	// (0x000ac515) ncimui_text_pane_t1

0xd699,	// (0x000b2467) ncimui_list_single_graphic_pane_ParamLimits

0xd699,	// (0x000b2467) ncimui_list_single_graphic_pane

0x7765,	// (0x000ac533) ncimui_query_pane_ParamLimits

0x7765,	// (0x000ac533) ncimui_query_pane

0xe685,	// (0x000b3453) list_highlight_pane_cp013

0xd6a9,	// (0x000b2477) ncim_list_query_list_pane_t1_copy1

0xd683,	// (0x000b2451) ncim_list_single_graphic_pane_g1

0xd6b7,	// (0x000b2485) ncim_query_button_pane_cp01

0xd6c3,	// (0x000b2491) ncim_query_entry_pane_ParamLimits

0xd6c3,	// (0x000b2491) ncim_query_entry_pane

0xd6d6,	// (0x000b24a4) ncimui_query_pane_g1

0xd6e2,	// (0x000b24b0) ncimui_query_pane_t1_ParamLimits

0xd6e2,	// (0x000b24b0) ncimui_query_pane_t1

0xbbe5,	// (0x000b09b3) input_focus_pane_cp012

0xd6fb,	// (0x000b24c9) ncim_query_entry_pane_t1

0xedc2,	// (0x000b3b90) main_im_pane_ParamLimits

0x9534,	// (0x000ae302) main_mobtv_pane_ParamLimits

0x9534,	// (0x000ae302) main_mobtv_pane

0x7378,	// (0x000ac146) main_cset6_slider_pane_g18_ParamLimits

0x7378,	// (0x000ac146) main_cset6_slider_pane_g18

0x7384,	// (0x000ac152) main_cset6_slider_pane_g19_ParamLimits

0x7384,	// (0x000ac152) main_cset6_slider_pane_g19

0x7778,	// (0x000ac546) bg_main_mobtv_pane_ParamLimits

0x7778,	// (0x000ac546) bg_main_mobtv_pane

0x7786,	// (0x000ac554) main_mobtv_info_pane

0x778f,	// (0x000ac55d) main_mobtv_loading_pane_ParamLimits

0x778f,	// (0x000ac55d) main_mobtv_loading_pane

0xd70d,	// (0x000b24db) main_mobtv_pg_channel_list_pane

0xd717,	// (0x000b24e5) main_mobtv_pg_hdr_pane

0x779c,	// (0x000ac56a) main_mobtv_programe_curr_pane_ParamLimits

0x779c,	// (0x000ac56a) main_mobtv_programe_curr_pane

0x77a9,	// (0x000ac577) main_mobtv_programe_next_pane_ParamLimits

0x77a9,	// (0x000ac577) main_mobtv_programe_next_pane

0xd720,	// (0x000b24ee) popup_mobtv_noti_window

0xbff9,	// (0x000b0dc7) main_tv_pg_hdr_pane_g1

0xd728,	// (0x000b24f6) main_tv_pg_hdr_pane_g2

0xd730,	// (0x000b24fe) main_tv_pg_hdr_pane_g3

0xd738,	// (0x000b2506) main_tv_pg_hdr_pane_g4

0xd740,	// (0x000b250e) main_tv_pg_hdr_pane_g5

0xd74a,	// (0x000b2518) main_tv_pg_hdr_pane_g6

0xd754,	// (0x000b2522) main_tv_pg_hdr_pane_g7

0xd75e,	// (0x000b252c) main_tv_pg_hdr_pane_g8

0xd768,	// (0x000b2536) main_tv_pg_hdr_pane_g9

0xd772,	// (0x000b2540) main_tv_pg_hdr_pane_g10

0xd77c,	// (0x000b254a) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x000b49d6) main_tv_pg_hdr_pane_g

0xd786,	// (0x000b2554) main_tv_pg_hdr_pane_t1

0xd794,	// (0x000b2562) main_tv_pg_hdr_pane_t2

0xd7a2,	// (0x000b2570) main_tv_pg_hdr_pane_t3

0xd7b2,	// (0x000b2580) main_tv_pg_hdr_pane_t4

0xd7c2,	// (0x000b2590) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x000b49ed) main_tv_pg_hdr_pane_t

0xd7d2,	// (0x000b25a0) single_mobtv_pg_channel_pane_ParamLimits

0xd7d2,	// (0x000b25a0) single_mobtv_pg_channel_pane

0xd7e4,	// (0x000b25b2) single_mobtv_pg_channel_table_pane

0xd7ed,	// (0x000b25bb) single_mobtv_pg_channel_thumb_pane

0xd7f6,	// (0x000b25c4) single_tv_pg_channel_pane_g1

0xd7ff,	// (0x000b25cd) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x000b49f8) single_tv_pg_channel_pane_g

0xc265,	// (0x000b1033) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc265,	// (0x000b1033) bg_single_mobtv_pg_channel_thumb_pane

0xd808,	// (0x000b25d6) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd808,	// (0x000b25d6) single_mobtv_pg_channel_thumb_pane_g1

0xd816,	// (0x000b25e4) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd816,	// (0x000b25e4) single_mobtv_pg_channel_thumb_pane_g2

0xd822,	// (0x000b25f0) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd822,	// (0x000b25f0) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x000b49fd) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x000b49fd) single_mobtv_pg_channel_thumb_pane_g

0xd82e,	// (0x000b25fc) single_mobtv_pg_channel_thumb_pane_t1

0xd83c,	// (0x000b260a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x000b4a04) single_mobtv_pg_channel_thumb_pane_t

0xbff9,	// (0x000b0dc7) bg_single_mobtv_pg_channel_table_pane_g1

0xbff9,	// (0x000b0dc7) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x000b44aa) bg_single_mobtv_pg_channel_table_pane_g

0xd84a,	// (0x000b2618) single_mobtv_pg_channel_table_pane_t1

0xd858,	// (0x000b2626) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x000b4a09) single_mobtv_pg_channel_table_pane_t

0x77be,	// (0x000ac58c) main_mobtv_info_pane_g1_ParamLimits

0x77be,	// (0x000ac58c) main_mobtv_info_pane_g1

0x77dc,	// (0x000ac5aa) main_mobtv_info_pane_t1_ParamLimits

0x77dc,	// (0x000ac5aa) main_mobtv_info_pane_t1

0x7854,	// (0x000ac622) main_mobtv_info_pane_t2_ParamLimits

0x7854,	// (0x000ac622) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000b4a13) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000b4a13) main_mobtv_info_pane_t

0x78e3,	// (0x000ac6b1) wait_bar_pane_cp05

0x78f5,	// (0x000ac6c3) main_mobtv_loading_pane_g1_ParamLimits

0x78f5,	// (0x000ac6c3) main_mobtv_loading_pane_g1

0x7908,	// (0x000ac6d6) main_mobtv_loading_pane_g2_ParamLimits

0x7908,	// (0x000ac6d6) main_mobtv_loading_pane_g2

0x7914,	// (0x000ac6e2) main_mobtv_loading_pane_g3_ParamLimits

0x7914,	// (0x000ac6e2) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000b4a1a) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000b4a1a) main_mobtv_loading_pane_g

0xd866,	// (0x000b2634) main_mobtv_loading_pane_t1_ParamLimits

0xd866,	// (0x000b2634) main_mobtv_loading_pane_t1

0xd87e,	// (0x000b264c) main_mobtv_loading_pane_t2_ParamLimits

0xd87e,	// (0x000b264c) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000b4a21) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000b4a21) main_mobtv_loading_pane_t

0x7927,	// (0x000ac6f5) wait_bar_pane_cp06_ParamLimits

0x7927,	// (0x000ac6f5) wait_bar_pane_cp06

0xd8a2,	// (0x000b2670) main_mobtv_programe_curr_pane_t1

0xd8b0,	// (0x000b267e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000b4a26) main_mobtv_programe_curr_pane_t

0xd8be,	// (0x000b268c) main_mobtv_programe_next_pane_t1

0xd8cc,	// (0x000b269a) main_mobtv_programe_next_pane_t2

0xd8da,	// (0x000b26a8) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000b4a2b) main_mobtv_programe_next_pane_t

0xe685,	// (0x000b3453) bg_popup_mobtv_noti_window_pane

0xd8e8,	// (0x000b26b6) popup_mobtv_noti_window_g1

0xd8f0,	// (0x000b26be) popup_mobtv_noti_window_t1

0xd8fe,	// (0x000b26cc) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000b4a32) popup_mobtv_noti_window_t

0xbff9,	// (0x000b0dc7) bg_popup_mobtv_noti_window_pane_g1

0x9542,	// (0x000ae310) sc_clock_pane

0x9542,	// (0x000ae310) main_fs_bigclock_pane

0x6f84,	// (0x000abd52) blid2_tripm_pane_t4_ParamLimits

0x6f84,	// (0x000abd52) blid2_tripm_pane_t4

0x7936,	// (0x000ac704) sc_clock_pane_g1_ParamLimits

0x7936,	// (0x000ac704) sc_clock_pane_g1

0x7948,	// (0x000ac716) sc_clock_pane_t1_ParamLimits

0x7948,	// (0x000ac716) sc_clock_pane_t1

0x796a,	// (0x000ac738) sc_clock_pane_t2_ParamLimits

0x796a,	// (0x000ac738) sc_clock_pane_t2

0x7982,	// (0x000ac750) sc_clock_pane_t3_ParamLimits

0x7982,	// (0x000ac750) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000b4a37) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000b4a37) sc_clock_pane_t

0x89b7,	// (0x000ad785) main_fs_bigclock_indicator_pane_ParamLimits

0x89b7,	// (0x000ad785) main_fs_bigclock_indicator_pane

0x7a22,	// (0x000ac7f0) main_fs_bigclock_pane_g1_ParamLimits

0x7a22,	// (0x000ac7f0) main_fs_bigclock_pane_g1

0x89c3,	// (0x000ad791) main_fs_bigclock_pane_t1_ParamLimits

0x89c3,	// (0x000ad791) main_fs_bigclock_pane_t1

0x89d5,	// (0x000ad7a3) main_fs_bigclock_pane_t2_ParamLimits

0x89d5,	// (0x000ad7a3) main_fs_bigclock_pane_t2

0x89e9,	// (0x000ad7b7) main_fs_bigclock_pane_t3_ParamLimits

0x89e9,	// (0x000ad7b7) main_fs_bigclock_pane_t3

0x0002,

0xfe5f,	// (0x000b4c2d) main_fs_bigclock_pane_t_ParamLimits

0xfe5f,	// (0x000b4c2d) main_fs_bigclock_pane_t

0xe440,	// (0x000b320e) main_fs_bigclock_indicator_pane_g1

0xd5d8,	// (0x000b23a6) ncim_query_content_pane_g2_ParamLimits

0xd5d8,	// (0x000b23a6) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x000b49c4) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x000b49c4) ncim_query_content_pane_g

0x799b,	// (0x000ac769) sc_clock_pane_t4_ParamLimits

0x799b,	// (0x000ac769) sc_clock_pane_t4

0x9534,	// (0x000ae302) main_radioblah_pane

0xca0e,	// (0x000b17dc) cell_call4_button_pane_t1_copy1_ParamLimits

0xca0e,	// (0x000b17dc) cell_call4_button_pane_t1_copy1

0x75c9,	// (0x000ac397) main_ncimui_pane_t1_ParamLimits

0x75c9,	// (0x000ac397) main_ncimui_pane_t1

0x75e3,	// (0x000ac3b1) main_ncimui_pane_t2_ParamLimits

0x75e3,	// (0x000ac3b1) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x000b49bd) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x000b49bd) main_ncimui_pane_t

0xda42,	// (0x000b2810) main_radioblah_anim_pane_ParamLimits

0xda42,	// (0x000b2810) main_radioblah_anim_pane

0xda53,	// (0x000b2821) main_radioblah_info_pane_ParamLimits

0xda53,	// (0x000b2821) main_radioblah_info_pane

0xda67,	// (0x000b2835) main_radioblah_pane_t1_ParamLimits

0xda67,	// (0x000b2835) main_radioblah_pane_t1

0xda83,	// (0x000b2851) main_radioblah_pane_t2_ParamLimits

0xda83,	// (0x000b2851) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000b4a58) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000b4a58) main_radioblah_pane_t

0x7a7a,	// (0x000ac848) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7a7a,	// (0x000ac848) main_radioblah_rocker_ctrl_pane

0xdacb,	// (0x000b2899) main_radioblah_info_pane_t1_ParamLimits

0xdacb,	// (0x000b2899) main_radioblah_info_pane_t1

0x7ad2,	// (0x000ac8a0) main_radioblah_info_pane_t2_ParamLimits

0x7ad2,	// (0x000ac8a0) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000b4a61) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000b4a61) main_radioblah_info_pane_t

0xbff9,	// (0x000b0dc7) main_radioblah_rocker_ctrl_pane_g1

0x7b82,	// (0x000ac950) main_radioblah_rocker_ctrl_pane_g2

0x7b8a,	// (0x000ac958) main_radioblah_rocker_ctrl_pane_g3

0x7b92,	// (0x000ac960) main_radioblah_rocker_ctrl_pane_g4

0x7b9a,	// (0x000ac968) main_radioblah_rocker_ctrl_pane_g5

0x7ba2,	// (0x000ac970) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000b4a6a) main_radioblah_rocker_ctrl_pane_g

0x724e,	// (0x000ac01c) main_cset_text2_pane_t1_copy1_ParamLimits

0xa092,	// (0x000aee60) cam4_image_uncrop_qvga_pane

0xa0f9,	// (0x000aeec7) vid4_image_uncrop_qcif_pane

0xa274,	// (0x000af042) cam6_image_uncrop_qvga_pane_ParamLimits

0xa274,	// (0x000af042) cam6_image_uncrop_qvga_pane

0xd2d2,	// (0x000b20a0) vid6_image_uncrop_qcif_pane_ParamLimits

0xd2d2,	// (0x000b20a0) vid6_image_uncrop_qcif_pane

0xe685,	// (0x000b3453) bg_popup_preview_window_pane_cp03

0xd58a,	// (0x000b2358) list_cset_text2_pane

0xd592,	// (0x000b2360) main_cset6_text2_pane_g1

0xd59a,	// (0x000b2368) main_cset6_text2_pane_t1

0x7baa,	// (0x000ac978) list_cset_text2_pane_t1_ParamLimits

0x7baa,	// (0x000ac978) list_cset_text2_pane_t1

0x9534,	// (0x000ae302) main_radioblah_pane_ParamLimits

0x78cf,	// (0x000ac69d) main_mobtv_info_pane_t3_ParamLimits

0x78cf,	// (0x000ac69d) main_mobtv_info_pane_t3

0x7a68,	// (0x000ac836) main_radioblah_pane_g1

0x7aa2,	// (0x000ac870) main_radioblah_info_pane_g1

0x7b27,	// (0x000ac8f5) main_radioblah_info_pane_t3_ParamLimits

0x7b27,	// (0x000ac8f5) main_radioblah_info_pane_t3

0x23d5,	// (0x000a71a3) highlight_cell_cale_month_pane_ParamLimits

0x23d5,	// (0x000a71a3) highlight_cell_cale_month_pane

0x9542,	// (0x000ae310) main_phob_fisheye_pane

0xc399,	// (0x000b1167) scroll_pane_cp0031_ParamLimits

0xc399,	// (0x000b1167) scroll_pane_cp0031

0xd3e0,	// (0x000b21ae) wait_bar_pane_cp08_ParamLimits

0x72d3,	// (0x000ac0a1) cset_list_set_pane_copy1_ParamLimits

0xdb05,	// (0x000b28d3) highlight_cell_cale_month_pane_g1

0x7bc3,	// (0x000ac991) highlight_cell_cale_month_pane_t1

0xd05b,	// (0x000b1e29) list_gen_pane_cp01

0xcc16,	// (0x000b19e4) scroll_pane_01

0xee87,	// (0x000b3c55) list_single_double_fisheye_pane

0x7bd1,	// (0x000ac99f) list_double_fisheye_pane_g1_ParamLimits

0x7bd1,	// (0x000ac99f) list_double_fisheye_pane_g1

0x7bdd,	// (0x000ac9ab) list_double_fisheye_pane_g2_ParamLimits

0x7bdd,	// (0x000ac9ab) list_double_fisheye_pane_g2

0x7bf1,	// (0x000ac9bf) list_double_fisheye_pane_g3_ParamLimits

0x7bf1,	// (0x000ac9bf) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000b4a77) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000b4a77) list_double_fisheye_pane_g

0x7c1a,	// (0x000ac9e8) list_double_fisheye_pane_t1_ParamLimits

0x7c1a,	// (0x000ac9e8) list_double_fisheye_pane_t1

0x7c35,	// (0x000aca03) list_double_fisheye_pane_t2_ParamLimits

0x7c35,	// (0x000aca03) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000b4a82) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000b4a82) list_double_fisheye_pane_t

0x9542,	// (0x000ae310) main_call5_pane

0x79c6,	// (0x000ac794) sc_swipe_pane_ParamLimits

0x79c6,	// (0x000ac794) sc_swipe_pane

0x7c6a,	// (0x000aca38) call5_image_pane_ParamLimits

0x7c6a,	// (0x000aca38) call5_image_pane

0x7c87,	// (0x000aca55) call5_swipe_1_pane_ParamLimits

0x7c87,	// (0x000aca55) call5_swipe_1_pane

0x7c9a,	// (0x000aca68) call5_swipe_2_pane_ParamLimits

0x7c9a,	// (0x000aca68) call5_swipe_2_pane

0x7cc5,	// (0x000aca93) popup_call5_audio_first_window_ParamLimits

0x7cc5,	// (0x000aca93) popup_call5_audio_first_window

0xc265,	// (0x000b1033) call5_swipe_1_pane_g1_ParamLimits

0xc265,	// (0x000b1033) call5_swipe_1_pane_g1

0xdb0d,	// (0x000b28db) call5_swipe_1_pane_g2_ParamLimits

0xdb0d,	// (0x000b28db) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000b4a87) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000b4a87) call5_swipe_1_pane_g

0xdb19,	// (0x000b28e7) call5_swipe_1_pane_t1_ParamLimits

0xdb19,	// (0x000b28e7) call5_swipe_1_pane_t1

0xc265,	// (0x000b1033) call5_swipe_2_pane_g1_ParamLimits

0xc265,	// (0x000b1033) call5_swipe_2_pane_g1

0xdb2e,	// (0x000b28fc) call5_swipe_2_pane_g2_ParamLimits

0xdb2e,	// (0x000b28fc) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000b4a8c) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000b4a8c) call5_swipe_2_pane_g

0xdb3a,	// (0x000b2908) call5_swipe_2_pane_t1_ParamLimits

0xdb3a,	// (0x000b2908) call5_swipe_2_pane_t1

0xdb4f,	// (0x000b291d) sc_swipe_pane_g1_ParamLimits

0xdb4f,	// (0x000b291d) sc_swipe_pane_g1

0xdb5c,	// (0x000b292a) sc_swipe_pane_g2_ParamLimits

0xdb5c,	// (0x000b292a) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000b4a91) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000b4a91) sc_swipe_pane_g

0xdb68,	// (0x000b2936) sc_swipe_pane_t1_ParamLimits

0xdb68,	// (0x000b2936) sc_swipe_pane_t1

0x9542,	// (0x000ae310) main_cmail_launcher_pane

0x7cd6,	// (0x000acaa4) aid_size_cell_cmail_l_ParamLimits

0x7cd6,	// (0x000acaa4) aid_size_cell_cmail_l

0x7cf0,	// (0x000acabe) grid_cmail_l_pane_ParamLimits

0x7cf0,	// (0x000acabe) grid_cmail_l_pane

0x7d0b,	// (0x000acad9) cell_cmail_l_pane_ParamLimits

0x7d0b,	// (0x000acad9) cell_cmail_l_pane

0x7d31,	// (0x000acaff) cell_cmail_l_pane_g1_ParamLimits

0x7d31,	// (0x000acaff) cell_cmail_l_pane_g1

0x7d3d,	// (0x000acb0b) cell_cmail_l_pane_t1_ParamLimits

0x7d3d,	// (0x000acb0b) cell_cmail_l_pane_t1

0xdb7d,	// (0x000b294b) cell_cmail_l_pane_t2_ParamLimits

0xdb7d,	// (0x000b294b) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000b4a96) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000b4a96) cell_cmail_l_pane_t

0xbbe5,	// (0x000b09b3) grid_highlight_pane_cp018_ParamLimits

0xbbe5,	// (0x000b09b3) grid_highlight_pane_cp018

0x034f,	// (0x000a511d) main2_pane_ParamLimits

0x034f,	// (0x000a511d) main2_pane

0xee5b,	// (0x000b3c29) popup_sp_fs_action_menu_bg_pane_g1

0xee63,	// (0x000b3c31) popup_sp_fs_action_menu_bg_pane_g2

0xee6b,	// (0x000b3c39) popup_sp_fs_action_menu_bg_pane_g3

0x9592,	// (0x000ae360) popup_sp_fs_action_menu_bg_pane_g4

0x959a,	// (0x000ae368) popup_sp_fs_action_menu_bg_pane_g5

0x95a2,	// (0x000ae370) popup_sp_fs_action_menu_bg_pane_g6

0x95aa,	// (0x000ae378) popup_sp_fs_action_menu_bg_pane_g7

0x95b2,	// (0x000ae380) popup_sp_fs_action_menu_bg_pane_g8

0x95ba,	// (0x000ae388) popup_sp_fs_action_menu_bg_pane_g9

0x95c2,	// (0x000ae390) popup_sp_fs_action_menu_bg_pane_g10

0x95c2,	// (0x000ae390) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000b3f58) popup_sp_fs_action_menu_bg_pane_g

0x1341,	// (0x000a610f) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1341,	// (0x000a610f) list_medium_line_x2_t3_g3_g1

0x134d,	// (0x000a611b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x134d,	// (0x000a611b) list_medium_line_x2_t3_g3_g2

0x1359,	// (0x000a6127) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1359,	// (0x000a6127) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000b4006) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000b4006) list_medium_line_x2_t3_g3_g

0x1365,	// (0x000a6133) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1365,	// (0x000a6133) list_medium_line_x2_t3_g3_t1

0x137a,	// (0x000a6148) list_medium_line_x2_t3_g3_t2_ParamLimits

0x137a,	// (0x000a6148) list_medium_line_x2_t3_g3_t2

0x138e,	// (0x000a615c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x138e,	// (0x000a615c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000b400d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000b400d) list_medium_line_x2_t3_g3_t

0x1341,	// (0x000a610f) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1341,	// (0x000a610f) list_medium_line_x2_t3_g2_g1

0x1359,	// (0x000a6127) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1359,	// (0x000a6127) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000b4014) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000b4014) list_medium_line_x2_t3_g2_g

0x13a3,	// (0x000a6171) list_medium_line_x2_t3_g2_t1_ParamLimits

0x13a3,	// (0x000a6171) list_medium_line_x2_t3_g2_t1

0x13b9,	// (0x000a6187) list_medium_line_x2_t3_g2_t2_ParamLimits

0x13b9,	// (0x000a6187) list_medium_line_x2_t3_g2_t2

0x13cb,	// (0x000a6199) list_medium_line_x2_t3_g2_t3_ParamLimits

0x13cb,	// (0x000a6199) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000b4019) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000b4019) list_medium_line_x2_t3_g2_t

0x1341,	// (0x000a610f) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1341,	// (0x000a610f) list_medium_line_x2_t4_g4_g1

0x13e8,	// (0x000a61b6) list_medium_line_x2_t4_g4_g2_ParamLimits

0x13e8,	// (0x000a61b6) list_medium_line_x2_t4_g4_g2

0x134d,	// (0x000a611b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x134d,	// (0x000a611b) list_medium_line_x2_t4_g4_g3

0x13f4,	// (0x000a61c2) list_medium_line_x2_t4_g4_g4_ParamLimits

0x13f4,	// (0x000a61c2) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000b4020) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000b4020) list_medium_line_x2_t4_g4_g

0x1400,	// (0x000a61ce) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1400,	// (0x000a61ce) list_medium_line_x2_t4_g4_t1

0x141a,	// (0x000a61e8) list_medium_line_x2_t4_g4_t2_ParamLimits

0x141a,	// (0x000a61e8) list_medium_line_x2_t4_g4_t2

0x1430,	// (0x000a61fe) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1430,	// (0x000a61fe) list_medium_line_x2_t4_g4_t3

0x1445,	// (0x000a6213) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1445,	// (0x000a6213) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000b4029) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000b4029) list_medium_line_x2_t4_g4_t

0x1341,	// (0x000a610f) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1341,	// (0x000a610f) list_medium_line_x2_t2_g4_g1

0x13e8,	// (0x000a61b6) list_medium_line_x2_t2_g4_g2_ParamLimits

0x13e8,	// (0x000a61b6) list_medium_line_x2_t2_g4_g2

0x134d,	// (0x000a611b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x134d,	// (0x000a611b) list_medium_line_x2_t2_g4_g3

0x1359,	// (0x000a6127) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1359,	// (0x000a6127) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000b4090) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000b4090) list_medium_line_x2_t2_g4_g

0x23fb,	// (0x000a71c9) list_medium_line_x2_t2_g4_t1_ParamLimits

0x23fb,	// (0x000a71c9) list_medium_line_x2_t2_g4_t1

0x138e,	// (0x000a615c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x138e,	// (0x000a615c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000b4099) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000b4099) list_medium_line_x2_t2_g4_t

0x1341,	// (0x000a610f) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1341,	// (0x000a610f) list_medium_line_x2_t2_g3_g1

0x134d,	// (0x000a611b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x134d,	// (0x000a611b) list_medium_line_x2_t2_g3_g2

0x1359,	// (0x000a6127) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1359,	// (0x000a6127) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000b4006) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000b4006) list_medium_line_x2_t2_g3_g

0x2410,	// (0x000a71de) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2410,	// (0x000a71de) list_medium_line_x2_t2_g3_t1

0x138e,	// (0x000a615c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x138e,	// (0x000a615c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000b409e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000b409e) list_medium_line_x2_t2_g3_t

0x254d,	// (0x000a731b) main_sp_fs_list_pane_ParamLimits

0x254d,	// (0x000a731b) main_sp_fs_list_pane

0xbe23,	// (0x000b0bf1) sp_fs_scroll_pane_ParamLimits

0xbe23,	// (0x000b0bf1) sp_fs_scroll_pane

0x2559,	// (0x000a7327) list_medium_line_x2_t3_t1

0x2569,	// (0x000a7337) list_medium_line_x2_t3_t2

0x2577,	// (0x000a7345) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000b40e9) list_medium_line_x2_t3_t

0x2585,	// (0x000a7353) list_medium_line_x3_t4_t1

0x2595,	// (0x000a7363) list_medium_line_x3_t4_t2

0x25a3,	// (0x000a7371) list_medium_line_x3_t4_t3

0x2577,	// (0x000a7345) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000b40f0) list_medium_line_x3_t4_t

0x25b1,	// (0x000a737f) list_medium_line_x4_t5_t1

0x25c1,	// (0x000a738f) list_medium_line_x4_t5_t2

0x25a3,	// (0x000a7371) list_medium_line_x4_t5_t3

0x25cf,	// (0x000a739d) list_medium_line_x4_t5_t4

0x2577,	// (0x000a7345) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000b40f9) list_medium_line_x4_t5_t

0x1341,	// (0x000a610f) list_medium_line_t4_g4_g1_ParamLimits

0x1341,	// (0x000a610f) list_medium_line_t4_g4_g1

0x25dd,	// (0x000a73ab) list_medium_line_t4_g4_g2_ParamLimits

0x25dd,	// (0x000a73ab) list_medium_line_t4_g4_g2

0x25e9,	// (0x000a73b7) list_medium_line_t4_g4_g3_ParamLimits

0x25e9,	// (0x000a73b7) list_medium_line_t4_g4_g3

0x1359,	// (0x000a6127) list_medium_line_t4_g4_g4_ParamLimits

0x1359,	// (0x000a6127) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000b4104) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000b4104) list_medium_line_t4_g4_g

0x25f5,	// (0x000a73c3) list_medium_line_t4_g4_t1_ParamLimits

0x25f5,	// (0x000a73c3) list_medium_line_t4_g4_t1

0x260a,	// (0x000a73d8) list_medium_line_t4_g4_t2_ParamLimits

0x260a,	// (0x000a73d8) list_medium_line_t4_g4_t2

0x261f,	// (0x000a73ed) list_medium_line_t4_g4_t3_ParamLimits

0x261f,	// (0x000a73ed) list_medium_line_t4_g4_t3

0x138e,	// (0x000a615c) list_medium_line_t4_g4_t4_ParamLimits

0x138e,	// (0x000a615c) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000b410d) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000b410d) list_medium_line_t4_g4_t

0x26e7,	// (0x000a74b5) chi_dic_find_pane_g1

0x3788,	// (0x000a8556) main_tport_pane

0x65fc,	// (0x000ab3ca) list_medium_line_plain_t1

0x66a4,	// (0x000ab472) list_medium_line_t2_g2_g1_ParamLimits

0x66a4,	// (0x000ab472) list_medium_line_t2_g2_g1

0x66b0,	// (0x000ab47e) list_medium_line_t2_g2_g2_ParamLimits

0x66b0,	// (0x000ab47e) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000b47ce) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000b47ce) list_medium_line_t2_g2_g

0x66bc,	// (0x000ab48a) list_medium_line_t2_g2_t1_ParamLimits

0x66bc,	// (0x000ab48a) list_medium_line_t2_g2_t1

0x66d3,	// (0x000ab4a1) list_medium_line_t2_g2_t2_ParamLimits

0x66d3,	// (0x000ab4a1) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000b47d3) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000b47d3) list_medium_line_t2_g2_t

0xd064,	// (0x000b1e32) aid_sp_fs_list_icon_a_sm

0xee7f,	// (0x000b3c4d) aid_sp_fs_list_icon_d

0xd06c,	// (0x000b1e3a) aid_sp_fs_text_primary

0xd075,	// (0x000b1e43) aid_sp_fs_text_secondary

0x6d3a,	// (0x000abb08) list_medium_line

0x6d3a,	// (0x000abb08) list_medium_line_g2

0x6d3a,	// (0x000abb08) list_medium_line_g3

0x6d3a,	// (0x000abb08) list_medium_line_plain

0x6d3a,	// (0x000abb08) list_medium_line_plain_t2

0x6d3a,	// (0x000abb08) list_medium_line_plain_t3

0x6d3a,	// (0x000abb08) list_medium_line_right_icon

0x6d3a,	// (0x000abb08) list_medium_line_right_iconx2

0x6d3a,	// (0x000abb08) list_medium_line_t2

0x6d3a,	// (0x000abb08) list_medium_line_t2_g2

0x6d3a,	// (0x000abb08) list_medium_line_t2_g3

0x6d3a,	// (0x000abb08) list_medium_line_t2_right_icon

0x6d3a,	// (0x000abb08) list_medium_line_t2_right_iconx2

0x6d3a,	// (0x000abb08) list_medium_line_t3

0x6d3a,	// (0x000abb08) list_medium_line_t3_g2

0x6d3a,	// (0x000abb08) list_medium_line_t3_g3

0x6d3a,	// (0x000abb08) list_medium_line_t3_right_iconx2

0x6d43,	// (0x000abb11) list_medium_line_t4_g4

0x6d3a,	// (0x000abb08) list_medium_line_x2

0x6d3a,	// (0x000abb08) list_medium_line_x2_t2_g2

0x6d3a,	// (0x000abb08) list_medium_line_x2_t2_g3

0x6d3a,	// (0x000abb08) list_medium_line_x2_t2_g4

0x6d3a,	// (0x000abb08) list_medium_line_x2_t3

0x6d3a,	// (0x000abb08) list_medium_line_x2_t3_g2

0x6d3a,	// (0x000abb08) list_medium_line_x2_t3_g3

0x6d3a,	// (0x000abb08) list_medium_line_x2_t3_g4

0x6d3a,	// (0x000abb08) list_medium_line_x2_t4_g2

0x6d3a,	// (0x000abb08) list_medium_line_x2_t4_g4

0x6d4c,	// (0x000abb1a) list_medium_line_x3

0x6d4c,	// (0x000abb1a) list_medium_line_x3_t4

0x6d4c,	// (0x000abb1a) list_medium_line_x3_t4_g4

0x6d43,	// (0x000abb11) list_medium_line_x4_t4

0x6d43,	// (0x000abb11) list_medium_line_x4_t4_g7

0x6d43,	// (0x000abb11) list_medium_line_x4_t5

0x6d55,	// (0x000abb23) list_single_fs_dyc_pane_ParamLimits

0x6d55,	// (0x000abb23) list_single_fs_dyc_pane

0x1341,	// (0x000a610f) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1341,	// (0x000a610f) list_medium_line_x4_t4_g7_g1

0x74cc,	// (0x000ac29a) list_medium_line_x4_t4_g7_g2_ParamLimits

0x74cc,	// (0x000ac29a) list_medium_line_x4_t4_g7_g2

0x74d8,	// (0x000ac2a6) list_medium_line_x4_t4_g7_g3_ParamLimits

0x74d8,	// (0x000ac2a6) list_medium_line_x4_t4_g7_g3

0x74e7,	// (0x000ac2b5) list_medium_line_x4_t4_g7_g4_ParamLimits

0x74e7,	// (0x000ac2b5) list_medium_line_x4_t4_g7_g4

0x74f3,	// (0x000ac2c1) list_medium_line_x4_t4_g7_g5_ParamLimits

0x74f3,	// (0x000ac2c1) list_medium_line_x4_t4_g7_g5

0x7502,	// (0x000ac2d0) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7502,	// (0x000ac2d0) list_medium_line_x4_t4_g7_g6

0x7511,	// (0x000ac2df) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7511,	// (0x000ac2df) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000b499e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000b499e) list_medium_line_x4_t4_g7_g

0x751d,	// (0x000ac2eb) list_medium_line_x4_t4_g7_t1_ParamLimits

0x751d,	// (0x000ac2eb) list_medium_line_x4_t4_g7_t1

0x7532,	// (0x000ac300) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7532,	// (0x000ac300) list_medium_line_x4_t4_g7_t2

0x7547,	// (0x000ac315) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7547,	// (0x000ac315) list_medium_line_x4_t4_g7_t3

0x755c,	// (0x000ac32a) list_medium_line_x4_t4_g7_t4_ParamLimits

0x755c,	// (0x000ac32a) list_medium_line_x4_t4_g7_t4

0x756e,	// (0x000ac33c) list_medium_line_x4_t4_g7_t5_ParamLimits

0x756e,	// (0x000ac33c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000b49ad) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000b49ad) list_medium_line_x4_t4_g7_t

0x7580,	// (0x000ac34e) list_single_dyc_row_pane_ParamLimits

0x7580,	// (0x000ac34e) list_single_dyc_row_pane

0x7c57,	// (0x000aca25) call5_gesture_pane_ParamLimits

0x7c57,	// (0x000aca25) call5_gesture_pane

0x7cad,	// (0x000aca7b) call5_windows_pane_ParamLimits

0x7cad,	// (0x000aca7b) call5_windows_pane

0x7d53,	// (0x000acb21) call5_swipe_1_pane_cp_ParamLimits

0x7d53,	// (0x000acb21) call5_swipe_1_pane_cp

0x7d5f,	// (0x000acb2d) call5_swipe_2_pane_cp_ParamLimits

0x7d5f,	// (0x000acb2d) call5_swipe_2_pane_cp

0x96ee,	// (0x000ae4bc) call5_image_pane_cp

0x7d6b,	// (0x000acb39) popup_call5_audio_first_window_cp_ParamLimits

0x7d6b,	// (0x000acb39) popup_call5_audio_first_window_cp

0xdb4f,	// (0x000b291d) call5_swipe_1_pane_g1_cp_ParamLimits

0xdb4f,	// (0x000b291d) call5_swipe_1_pane_g1_cp

0xdb8f,	// (0x000b295d) call5_swipe_1_pane_g2_cp

0xdb68,	// (0x000b2936) call5_swipe_1_pane_t1_cp_ParamLimits

0xdb68,	// (0x000b2936) call5_swipe_1_pane_t1_cp

0xdb4f,	// (0x000b291d) call5_swipe_2_pane_g1_cp_ParamLimits

0xdb4f,	// (0x000b291d) call5_swipe_2_pane_g1_cp

0xdb97,	// (0x000b2965) call5_swipe_2_pane_g2_cp

0xdb9f,	// (0x000b296d) call5_swipe_2_pane_t1_cp_ParamLimits

0xdb9f,	// (0x000b296d) call5_swipe_2_pane_t1_cp

0xbbe5,	// (0x000b09b3) main_sp_fs_email_pane

0xdbb4,	// (0x000b2982) main_sp_fs_listscroll_pane_te

0x7d79,	// (0x000acb47) popup_sp_fs_action_menu_pane_ParamLimits

0x7d79,	// (0x000acb47) popup_sp_fs_action_menu_pane

0xbff9,	// (0x000b0dc7) bg_sp_fs_ctrlbar_pane_g1

0xc630,	// (0x000b13fe) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc642,	// (0x000b1410) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc639,	// (0x000b1407) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbff9,	// (0x000b0dc7) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000b4a9b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbdd2,	// (0x000b0ba0) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbdd2,	// (0x000b0ba0) bg_sp_fs_ctrlbar_ddmenu_pane

0xdbbd,	// (0x000b298b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdbbd,	// (0x000b298b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdbc9,	// (0x000b2997) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdbc9,	// (0x000b2997) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000b4aa4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000b4aa4) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdbd5,	// (0x000b29a3) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdbd5,	// (0x000b29a3) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7dbd,	// (0x000acb8b) list_medium_line_t2_right_icon_g1

0x7dc5,	// (0x000acb93) list_medium_line_t2_right_icon_t1

0x7dd5,	// (0x000acba3) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000b4aa9) list_medium_line_t2_right_icon_t

0xbbd7,	// (0x000b09a5) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbbd7,	// (0x000b09a5) bg_sp_fs_ctrlbar_pane

0x7e2f,	// (0x000acbfd) main_sp_fs_ctrlbar_button_pane_cp01

0x7e39,	// (0x000acc07) main_sp_fs_ctrlbar_ddmenu_pane

0xdc27,	// (0x000b29f5) main_sp_fs_ctrlbar_pane_g1

0xdc33,	// (0x000b2a01) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000b4aae) main_sp_fs_ctrlbar_pane_g

0xdc3f,	// (0x000b2a0d) main_sp_fs_ctrlbar_pane_t1

0x7e43,	// (0x000acc11) main_sp_fs_ctrlbar_pane

0x7e67,	// (0x000acc35) main_sp_fs_listscroll_pane_te_cp01

0x7e87,	// (0x000acc55) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e87,	// (0x000acc55) popup_sp_fs_action_menu_pane_cp01

0xbbe5,	// (0x000b09b3) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xbbe5,	// (0x000b09b3) bg_sp_fs_highlight_list_pane_cp01

0xdc6f,	// (0x000b2a3d) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdc6f,	// (0x000b2a3d) sp_fs_action_menu_list_gene_pane_g1

0xdc7e,	// (0x000b2a4c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdc7e,	// (0x000b2a4c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000b4ab8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000b4ab8) sp_fs_action_menu_list_gene_pane_g

0xdc8b,	// (0x000b2a59) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdc8b,	// (0x000b2a59) sp_fs_action_menu_list_gene_pane_t1

0xdca3,	// (0x000b2a71) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdca3,	// (0x000b2a71) sp_fs_action_menu_list_gene_pane

0xdcc4,	// (0x000b2a92) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdcc4,	// (0x000b2a92) popup_sp_fs_action_menu_bg_pane

0xdcd2,	// (0x000b2aa0) sp_fs_action_menu_list_pane_ParamLimits

0xdcd2,	// (0x000b2aa0) sp_fs_action_menu_list_pane

0x7eb7,	// (0x000acc85) sp_fs_scroll_pane_cp01_ParamLimits

0x7eb7,	// (0x000acc85) sp_fs_scroll_pane_cp01

0x7edd,	// (0x000accab) list_medium_line_plain_t2_t1

0x7eed,	// (0x000accbb) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000b4abd) list_medium_line_plain_t2_t

0x7efd,	// (0x000acccb) list_medium_line_plain_t3_t1

0x7f0d,	// (0x000accdb) list_medium_line_plain_t3_t2

0x7f1b,	// (0x000acce9) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000b4ac2) list_medium_line_plain_t3_t

0x1341,	// (0x000a610f) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1341,	// (0x000a610f) list_medium_line_x2_t2_g2_g1

0x1359,	// (0x000a6127) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1359,	// (0x000a6127) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000b4014) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000b4014) list_medium_line_x2_t2_g2_g

0x25f5,	// (0x000a73c3) list_medium_line_x2_t2_g2_t1_ParamLimits

0x25f5,	// (0x000a73c3) list_medium_line_x2_t2_g2_t1

0x138e,	// (0x000a615c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x138e,	// (0x000a615c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000b4ac9) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000b4ac9) list_medium_line_x2_t2_g2_t

0x1341,	// (0x000a610f) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1341,	// (0x000a610f) list_medium_line_x2_t4_g2_g1

0x7f29,	// (0x000accf7) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7f29,	// (0x000accf7) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000b4ace) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000b4ace) list_medium_line_x2_t4_g2_g

0x7f3b,	// (0x000acd09) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7f3b,	// (0x000acd09) list_medium_line_x2_t4_g2_t1

0x7f55,	// (0x000acd23) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7f55,	// (0x000acd23) list_medium_line_x2_t4_g2_t2

0x7f6a,	// (0x000acd38) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f6a,	// (0x000acd38) list_medium_line_x2_t4_g2_t3

0x138e,	// (0x000a615c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x138e,	// (0x000a615c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000b4ad3) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000b4ad3) list_medium_line_x2_t4_g2_t

0x7f7f,	// (0x000acd4d) list_medium_line_t3_right_iconx2_g1

0x7dbd,	// (0x000acb8b) list_medium_line_t3_right_iconx2_g2

0x7f87,	// (0x000acd55) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000b4adc) list_medium_line_t3_right_iconx2_g

0x7f91,	// (0x000acd5f) list_medium_line_t3_right_iconx2_t1

0x7fa1,	// (0x000acd6f) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000b4ae3) list_medium_line_t3_right_iconx2_t

0x1341,	// (0x000a610f) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1341,	// (0x000a610f) list_medium_line_x3_t4_g4_g1

0x134d,	// (0x000a611b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x134d,	// (0x000a611b) list_medium_line_x3_t4_g4_g2

0x25dd,	// (0x000a73ab) list_medium_line_x3_t4_g4_g3_ParamLimits

0x25dd,	// (0x000a73ab) list_medium_line_x3_t4_g4_g3

0x7faf,	// (0x000acd7d) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7faf,	// (0x000acd7d) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000b4ae8) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000b4ae8) list_medium_line_x3_t4_g4_g

0x7fbb,	// (0x000acd89) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7fbb,	// (0x000acd89) list_medium_line_x3_t4_g4_t1

0x7fd2,	// (0x000acda0) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7fd2,	// (0x000acda0) list_medium_line_x3_t4_g4_t2

0x260a,	// (0x000a73d8) list_medium_line_x3_t4_g4_t3_ParamLimits

0x260a,	// (0x000a73d8) list_medium_line_x3_t4_g4_t3

0x7fed,	// (0x000acdbb) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7fed,	// (0x000acdbb) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000b4af1) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000b4af1) list_medium_line_x3_t4_g4_t

0x800a,	// (0x000acdd8) list_single_dyc_row_text_pane_t1_ParamLimits

0x800a,	// (0x000acdd8) list_single_dyc_row_text_pane_t1

0x8053,	// (0x000ace21) list_single_dyc_row_text_pane_t2_ParamLimits

0x8053,	// (0x000ace21) list_single_dyc_row_text_pane_t2

0xdcf4,	// (0x000b2ac2) list_single_dyc_row_text_pane_t3_ParamLimits

0xdcf4,	// (0x000b2ac2) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000b4afa) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000b4afa) list_single_dyc_row_text_pane_t

0xdd18,	// (0x000b2ae6) list_single_dyc_row_pane_g1_ParamLimits

0xdd18,	// (0x000b2ae6) list_single_dyc_row_pane_g1

0xdd24,	// (0x000b2af2) list_single_dyc_row_pane_g2_ParamLimits

0xdd24,	// (0x000b2af2) list_single_dyc_row_pane_g2

0xdd30,	// (0x000b2afe) list_single_dyc_row_pane_g3_ParamLimits

0xdd30,	// (0x000b2afe) list_single_dyc_row_pane_g3

0xdd3c,	// (0x000b2b0a) list_single_dyc_row_pane_g4_ParamLimits

0xdd3c,	// (0x000b2b0a) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000b4b07) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000b4b07) list_single_dyc_row_pane_g

0xdd48,	// (0x000b2b16) list_single_dyc_row_text_pane_ParamLimits

0xdd48,	// (0x000b2b16) list_single_dyc_row_text_pane

0xe685,	// (0x000b3453) bg_sp_fs_scroll_pane

0xdd67,	// (0x000b2b35) thumb_sp_fs_scroll_pane

0x66a4,	// (0x000ab472) list_medium_line_g1_ParamLimits

0x66a4,	// (0x000ab472) list_medium_line_g1

0x8188,	// (0x000acf56) list_medium_line_t1_ParamLimits

0x8188,	// (0x000acf56) list_medium_line_t1

0x1341,	// (0x000a610f) list_medium_line_x2_g1_ParamLimits

0x1341,	// (0x000a610f) list_medium_line_x2_g1

0x134d,	// (0x000a611b) list_medium_line_x2_g2_ParamLimits

0x134d,	// (0x000a611b) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000b4b10) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000b4b10) list_medium_line_x2_g

0xdd70,	// (0x000b2b3e) list_medium_line_x2_t1_ParamLimits

0xdd70,	// (0x000b2b3e) list_medium_line_x2_t1

0x1341,	// (0x000a610f) list_medium_line_x3_g1_ParamLimits

0x1341,	// (0x000a610f) list_medium_line_x3_g1

0x134d,	// (0x000a611b) list_medium_line_x3_g2_ParamLimits

0x134d,	// (0x000a611b) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000b4b10) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000b4b10) list_medium_line_x3_g

0xdd70,	// (0x000b2b3e) list_medium_line_x3_t1_ParamLimits

0xdd70,	// (0x000b2b3e) list_medium_line_x3_t1

0xdd86,	// (0x000b2b54) thumb_sp_fs_scroll_pane_g1

0xdd8f,	// (0x000b2b5d) thumb_sp_fs_scroll_pane_g2

0xdd98,	// (0x000b2b66) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000b4b15) thumb_sp_fs_scroll_pane_g

0xdd86,	// (0x000b2b54) bg_sp_fs_scroll_pane_g1

0xdd8f,	// (0x000b2b5d) bg_sp_fs_scroll_pane_g2

0xdd98,	// (0x000b2b66) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000b4b15) bg_sp_fs_scroll_pane_g

0x1341,	// (0x000a610f) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1341,	// (0x000a610f) list_medium_line_x2_t3_g4_g1

0x13e8,	// (0x000a61b6) list_medium_line_x2_t3_g4_g2_ParamLimits

0x13e8,	// (0x000a61b6) list_medium_line_x2_t3_g4_g2

0x134d,	// (0x000a611b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x134d,	// (0x000a611b) list_medium_line_x2_t3_g4_g3

0x1359,	// (0x000a6127) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1359,	// (0x000a6127) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000b4090) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000b4090) list_medium_line_x2_t3_g4_g

0x819d,	// (0x000acf6b) list_medium_line_x2_t3_g4_t1_ParamLimits

0x819d,	// (0x000acf6b) list_medium_line_x2_t3_g4_t1

0x81b7,	// (0x000acf85) list_medium_line_x2_t3_g4_t2_ParamLimits

0x81b7,	// (0x000acf85) list_medium_line_x2_t3_g4_t2

0x138e,	// (0x000a615c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x138e,	// (0x000a615c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000b4b1c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000b4b1c) list_medium_line_x2_t3_g4_t

0x66a4,	// (0x000ab472) list_medium_line_g2_g1_ParamLimits

0x66a4,	// (0x000ab472) list_medium_line_g2_g1

0x66b0,	// (0x000ab47e) list_medium_line_g2_g2_ParamLimits

0x66b0,	// (0x000ab47e) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000b47ce) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000b47ce) list_medium_line_g2_g

0x81d1,	// (0x000acf9f) list_medium_line_g2_t1_ParamLimits

0x81d1,	// (0x000acf9f) list_medium_line_g2_t1

0x66a4,	// (0x000ab472) list_medium_line_t3_g2_g1_ParamLimits

0x66a4,	// (0x000ab472) list_medium_line_t3_g2_g1

0x66b0,	// (0x000ab47e) list_medium_line_t3_g2_g2_ParamLimits

0x66b0,	// (0x000ab47e) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000b47ce) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000b47ce) list_medium_line_t3_g2_g

0x81e6,	// (0x000acfb4) list_medium_line_t3_g2_t1_ParamLimits

0x81e6,	// (0x000acfb4) list_medium_line_t3_g2_t1

0x81fd,	// (0x000acfcb) list_medium_line_t3_g2_t2_ParamLimits

0x81fd,	// (0x000acfcb) list_medium_line_t3_g2_t2

0x8212,	// (0x000acfe0) list_medium_line_t3_g2_t3_ParamLimits

0x8212,	// (0x000acfe0) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000b4b23) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000b4b23) list_medium_line_t3_g2_t

0x7dbd,	// (0x000acb8b) list_medium_line_right_icon_g1

0x822b,	// (0x000acff9) list_medium_line_right_icon_t1

0x66a4,	// (0x000ab472) list_medium_line_t2_g1_ParamLimits

0x66a4,	// (0x000ab472) list_medium_line_t2_g1

0x8239,	// (0x000ad007) list_medium_line_t2_t1_ParamLimits

0x8239,	// (0x000ad007) list_medium_line_t2_t1

0x8253,	// (0x000ad021) list_medium_line_t2_t2_ParamLimits

0x8253,	// (0x000ad021) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000b4b2a) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000b4b2a) list_medium_line_t2_t

0x66a4,	// (0x000ab472) list_medium_line_t3_g1_ParamLimits

0x66a4,	// (0x000ab472) list_medium_line_t3_g1

0x826c,	// (0x000ad03a) list_medium_line_t3_t1_ParamLimits

0x826c,	// (0x000ad03a) list_medium_line_t3_t1

0x8283,	// (0x000ad051) list_medium_line_t3_t2_ParamLimits

0x8283,	// (0x000ad051) list_medium_line_t3_t2

0x8298,	// (0x000ad066) list_medium_line_t3_t3_ParamLimits

0x8298,	// (0x000ad066) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000b4b2f) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000b4b2f) list_medium_line_t3_t

0x66a4,	// (0x000ab472) list_medium_line_g3_g1_ParamLimits

0x66a4,	// (0x000ab472) list_medium_line_g3_g1

0x82aa,	// (0x000ad078) list_medium_line_g3_g2_ParamLimits

0x82aa,	// (0x000ad078) list_medium_line_g3_g2

0x66b0,	// (0x000ab47e) list_medium_line_g3_g3_ParamLimits

0x66b0,	// (0x000ab47e) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000b4b36) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000b4b36) list_medium_line_g3_g

0x82b6,	// (0x000ad084) list_medium_line_g3_t1_ParamLimits

0x82b6,	// (0x000ad084) list_medium_line_g3_t1

0x66a4,	// (0x000ab472) list_medium_line_t2_g3_g1_ParamLimits

0x66a4,	// (0x000ab472) list_medium_line_t2_g3_g1

0x82aa,	// (0x000ad078) list_medium_line_t2_g3_g2_ParamLimits

0x82aa,	// (0x000ad078) list_medium_line_t2_g3_g2

0x66b0,	// (0x000ab47e) list_medium_line_t2_g3_g3_ParamLimits

0x66b0,	// (0x000ab47e) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000b4b36) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000b4b36) list_medium_line_t2_g3_g

0x82cb,	// (0x000ad099) list_medium_line_t2_g3_t1_ParamLimits

0x82cb,	// (0x000ad099) list_medium_line_t2_g3_t1

0x82e2,	// (0x000ad0b0) list_medium_line_t2_g3_t2_ParamLimits

0x82e2,	// (0x000ad0b0) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000b4b3d) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000b4b3d) list_medium_line_t2_g3_t

0x66a4,	// (0x000ab472) list_medium_line_t3_g3_g1_ParamLimits

0x66a4,	// (0x000ab472) list_medium_line_t3_g3_g1

0x82aa,	// (0x000ad078) list_medium_line_t3_g3_g2_ParamLimits

0x82aa,	// (0x000ad078) list_medium_line_t3_g3_g2

0x66b0,	// (0x000ab47e) list_medium_line_t3_g3_g3_ParamLimits

0x66b0,	// (0x000ab47e) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000b4b36) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000b4b36) list_medium_line_t3_g3_g

0x82fd,	// (0x000ad0cb) list_medium_line_t3_g3_t1_ParamLimits

0x82fd,	// (0x000ad0cb) list_medium_line_t3_g3_t1

0x8311,	// (0x000ad0df) list_medium_line_t3_g3_t2_ParamLimits

0x8311,	// (0x000ad0df) list_medium_line_t3_g3_t2

0x8323,	// (0x000ad0f1) list_medium_line_t3_g3_t3_ParamLimits

0x8323,	// (0x000ad0f1) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000b4b42) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000b4b42) list_medium_line_t3_g3_t

0x7f7f,	// (0x000acd4d) list_medium_line_right_iconx2_g1

0x7dbd,	// (0x000acb8b) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000b4b49) list_medium_line_right_iconx2_g

0x8337,	// (0x000ad105) list_medium_line_right_iconx2_t1

0x7f7f,	// (0x000acd4d) list_medium_line_t2_right_iconx2_g1

0x7dbd,	// (0x000acb8b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000b4b49) list_medium_line_t2_right_iconx2_g

0x8345,	// (0x000ad113) list_medium_line_t2_right_iconx2_t1

0x8355,	// (0x000ad123) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000b4b4e) list_medium_line_t2_right_iconx2_t

0x8367,	// (0x000ad135) list_medium_line_x4_t4_t1

0x8375,	// (0x000ad143) list_medium_line_x4_t4_t2

0x8385,	// (0x000ad153) list_medium_line_x4_t4_t3

0x8395,	// (0x000ad163) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000b4b53) list_medium_line_x4_t4_t

0x83e8,	// (0x000ad1b6) tport_appsw_pane_ParamLimits

0x83e8,	// (0x000ad1b6) tport_appsw_pane

0x8400,	// (0x000ad1ce) tport_contact_pane_ParamLimits

0x8400,	// (0x000ad1ce) tport_contact_pane

0x8418,	// (0x000ad1e6) tport_listscroll_pane_ParamLimits

0x8418,	// (0x000ad1e6) tport_listscroll_pane

0x8432,	// (0x000ad200) cell_tport_appsw_pane_ParamLimits

0x8432,	// (0x000ad200) cell_tport_appsw_pane

0xcaad,	// (0x000b187b) tport_appsw_pane_g1_ParamLimits

0xcaad,	// (0x000b187b) tport_appsw_pane_g1

0xdda1,	// (0x000b2b6f) tport_contact_pane_g1

0xd65e,	// (0x000b242c) tport_contact_pane_t1

0xddaa,	// (0x000b2b78) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000b4b5c) tport_contact_pane_t

0xddb8,	// (0x000b2b86) list_tport_pane

0xddc1,	// (0x000b2b8f) scroll_pane_cp_030

0x847a,	// (0x000ad248) cell_tport_appsw_pane_g1

0x848a,	// (0x000ad258) cell_tport_appsw_pane_t1

0x8498,	// (0x000ad266) grid_highlight_pane_cp019

0x84a0,	// (0x000ad26e) list_tport_double_graphic_pane_ParamLimits

0x84a0,	// (0x000ad26e) list_tport_double_graphic_pane

0xbbe5,	// (0x000b09b3) list_highlight_pane_cp023_ParamLimits

0xbbe5,	// (0x000b09b3) list_highlight_pane_cp023

0x84ad,	// (0x000ad27b) list_tport_double_graphic_pane_g1_ParamLimits

0x84ad,	// (0x000ad27b) list_tport_double_graphic_pane_g1

0x84ba,	// (0x000ad288) list_tport_double_graphic_pane_t1_ParamLimits

0x84ba,	// (0x000ad288) list_tport_double_graphic_pane_t1

0x84cf,	// (0x000ad29d) list_tport_double_graphic_pane_t2_ParamLimits

0x84cf,	// (0x000ad29d) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000b4b68) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000b4b68) list_tport_double_graphic_pane_t

0xe685,	// (0x000b3453) main_cale_note_pane

0x5e69,	// (0x000aac37) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5e69,	// (0x000aac37) cell_vitu2_function_top_wide_pane_cp01

0x78e3,	// (0x000ac6b1) wait_bar_pane_cp05_ParamLimits

0xbbe5,	// (0x000b09b3) listscroll_cmail_pane

0xddca,	// (0x000b2b98) list_cmail_pane

0xcb22,	// (0x000b18f0) list_cmail_body_pane

0x84e1,	// (0x000ad2af) list_single_cmail_header_caption_pane

0x84f8,	// (0x000ad2c6) list_single_cmail_header_detail_pane_ParamLimits

0x84f8,	// (0x000ad2c6) list_single_cmail_header_detail_pane

0xddda,	// (0x000b2ba8) list_single_cmail_header_caption_pane_t1

0x8522,	// (0x000ad2f0) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8522,	// (0x000ad2f0) list_single_cmail_header_detail_pane_g1

0xee90,	// (0x000b3c5e) list_single_cmail_header_detail_pane_g2_ParamLimits

0xee90,	// (0x000b3c5e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000b4b6d) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000b4b6d) list_single_cmail_header_detail_pane_g

0xddfe,	// (0x000b2bcc) list_single_cmail_header_detail_pane_t1_ParamLimits

0xddfe,	// (0x000b2bcc) list_single_cmail_header_detail_pane_t1

0xde5e,	// (0x000b2c2c) list_single_cmail_header_editor_pane_bg_ParamLimits

0xde5e,	// (0x000b2c2c) list_single_cmail_header_editor_pane_bg

0xd7ff,	// (0x000b25cd) list_cmail_body_pane_g1

0xde75,	// (0x000b2c43) list_cmail_body_pane_t1

0xcaea,	// (0x000b18b8) list_single_cmail_header_editor_pane_bg_g1

0x9951,	// (0x000ae71f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcafa,	// (0x000b18c8) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcaf2,	// (0x000b18c0) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcd44,	// (0x000b1b12) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcb1a,	// (0x000b18e8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcb0a,	// (0x000b18d8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcb12,	// (0x000b18e0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x9931,	// (0x000ae6ff) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x853a,	// (0x000ad308) calenote_gesture_pane_ParamLimits

0x853a,	// (0x000ad308) calenote_gesture_pane

0x855a,	// (0x000ad328) calenote_window_pane_ParamLimits

0x855a,	// (0x000ad328) calenote_window_pane

0xde83,	// (0x000b2c51) popup_note_window_cp01

0x8576,	// (0x000ad344) calenote_swipe_1_pane_ParamLimits

0x8576,	// (0x000ad344) calenote_swipe_1_pane

0x7d5f,	// (0x000acb2d) calenote_swipe_2_pane_ParamLimits

0x7d5f,	// (0x000acb2d) calenote_swipe_2_pane

0xdb4f,	// (0x000b291d) calenote_swipe_1_pane_g1_ParamLimits

0xdb4f,	// (0x000b291d) calenote_swipe_1_pane_g1

0xdb5c,	// (0x000b292a) calenote_swipe_1_pane_g2_ParamLimits

0xdb5c,	// (0x000b292a) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000b4a91) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000b4a91) calenote_swipe_1_pane_g

0xde95,	// (0x000b2c63) calenote_swipe_1_pane_t1_ParamLimits

0xde95,	// (0x000b2c63) calenote_swipe_1_pane_t1

0xdb4f,	// (0x000b291d) calenote_swipe_2_pane_g1_ParamLimits

0xdb4f,	// (0x000b291d) calenote_swipe_2_pane_g1

0xdeb4,	// (0x000b2c82) calenote_swipe_2_pane_g2_ParamLimits

0xdeb4,	// (0x000b2c82) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000b4b79) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000b4b79) calenote_swipe_2_pane_g

0xdec0,	// (0x000b2c8e) calenote_swipe_2_pane_t1_ParamLimits

0xdec0,	// (0x000b2c8e) calenote_swipe_2_pane_t1

0xe685,	// (0x000b3453) main_mup_navstr_pane

0x4b39,	// (0x000a9907) main_mup3_pane_t7_ParamLimits

0x4b39,	// (0x000a9907) main_mup3_pane_t7

0x9eb0,	// (0x000aec7e) main_mp4_pane_g6_ParamLimits

0x9eb0,	// (0x000aec7e) main_mp4_pane_g6

0xa054,	// (0x000aee22) main_image3_pane_t4_ParamLimits

0xa054,	// (0x000aee22) main_image3_pane_t4

0x858b,	// (0x000ad359) popup_navstr_preview_pane_ParamLimits

0x858b,	// (0x000ad359) popup_navstr_preview_pane

0x859f,	// (0x000ad36d) scroll_navstr_pane_ParamLimits

0x859f,	// (0x000ad36d) scroll_navstr_pane

0xe685,	// (0x000b3453) bg_popup_preview_window_pane_cp04

0xdee7,	// (0x000b2cb5) popup_navstr_preview_pane_t1

0x85b3,	// (0x000ad381) scroll_navstr_pane_g1_ParamLimits

0x85b3,	// (0x000ad381) scroll_navstr_pane_g1

0x85c7,	// (0x000ad395) scroll_navstr_pane_t1_ParamLimits

0x85c7,	// (0x000ad395) scroll_navstr_pane_t1

0xde8c,	// (0x000b2c5a) bg_button_pane_cp014

0xde8c,	// (0x000b2c5a) bg_button_pane_cp030

0x7bfd,	// (0x000ac9cb) list_double_fisheye_pane_g4_ParamLimits

0x7bfd,	// (0x000ac9cb) list_double_fisheye_pane_g4

0x7c09,	// (0x000ac9d7) list_double_fisheye_pane_g5_ParamLimits

0x7c09,	// (0x000ac9d7) list_double_fisheye_pane_g5

0xbe23,	// (0x000b0bf1) sp_fs_scroll_pane_cp03

0xdc27,	// (0x000b29f5) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdc33,	// (0x000b2a01) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000b4aae) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdc3f,	// (0x000b2a0d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xddd2,	// (0x000b2ba0) sp_fs_scroll_pane_cp02

0x962d,	// (0x000ae3fb) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x962d,	// (0x000ae3fb) popup_sp_fs_calendar_preview_list_single_pane

0xe685,	// (0x000b3453) main_cam6_pano_pane

0x9534,	// (0x000ae302) main_mup3_pane_ParamLimits

0xe685,	// (0x000b3453) main_phacti_pane

0x77b6,	// (0x000ac584) bg_button_pane_cp11

0x77d0,	// (0x000ac59e) main_mobtv_info_pane_g2_ParamLimits

0x77d0,	// (0x000ac59e) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x000b4a0e) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x000b4a0e) main_mobtv_info_pane_g

0x79ad,	// (0x000ac77b) sc_clock_pane_t5_ParamLimits

0x79ad,	// (0x000ac77b) sc_clock_pane_t5

0x7a68,	// (0x000ac836) main_radioblah_pane_g1_ParamLimits

0xda9b,	// (0x000b2869) main_radioblah_pane_t3_ParamLimits

0xda9b,	// (0x000b2869) main_radioblah_pane_t3

0xdab3,	// (0x000b2881) main_radioblah_pane_t4_ParamLimits

0xdab3,	// (0x000b2881) main_radioblah_pane_t4

0x7a90,	// (0x000ac85e) main_radioblah_text_pane_ParamLimits

0x7a90,	// (0x000ac85e) main_radioblah_text_pane

0x7aa2,	// (0x000ac870) main_radioblah_info_pane_g1_ParamLimits

0x7b3b,	// (0x000ac909) main_radioblah_info_pane_t4_ParamLimits

0x7b3b,	// (0x000ac909) main_radioblah_info_pane_t4

0xbbe5,	// (0x000b09b3) main_sp_fs_calendar_pane

0x85de,	// (0x000ad3ac) main_phacti_pane_g1

0x85e6,	// (0x000ad3b4) phacti_note_pane_ParamLimits

0x85e6,	// (0x000ad3b4) phacti_note_pane

0xdefe,	// (0x000b2ccc) phacti_term_pane_ParamLimits

0xdefe,	// (0x000b2ccc) phacti_term_pane

0xdf13,	// (0x000b2ce1) phacti_note_pane_t1_ParamLimits

0xdf13,	// (0x000b2ce1) phacti_note_pane_t1

0xdf2a,	// (0x000b2cf8) phacti_term_pane_g1

0xdf32,	// (0x000b2d00) phacti_term_pane_t1_ParamLimits

0xdf32,	// (0x000b2d00) phacti_term_pane_t1

0xdf5c,	// (0x000b2d2a) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9752,	// (0x000ae520) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000b4b83) popup_sp_fs_calendar_preview_list_single_pane_g

0xdf64,	// (0x000b2d32) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xdf64,	// (0x000b2d32) popup_sp_fs_calendar_preview_list_single_pane_t1

0xdf79,	// (0x000b2d47) aid_popup_sp_fs_bg_corner_pane

0xbff9,	// (0x000b0dc7) popup_sp_fs_calendar_preview_bg_pane_g1

0xe685,	// (0x000b3453) popup_sp_fs_calendar_preview_bg_pane

0xdf81,	// (0x000b2d4f) popup_sp_fs_calendar_preview_list_pane

0xbbd7,	// (0x000b09a5) bg_main_sp_fs_cale_pane_ParamLimits

0xbbd7,	// (0x000b09a5) bg_main_sp_fs_cale_pane

0xdf89,	// (0x000b2d57) listscroll_cale_mrui_pane_ParamLimits

0xdf89,	// (0x000b2d57) listscroll_cale_mrui_pane

0xcb6e,	// (0x000b193c) listscroll_sp_fs_schedule_track_pane

0xdf9e,	// (0x000b2d6c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xdf9e,	// (0x000b2d6c) main_sp_fs_ctrlbar_pane_cp01

0xdfb1,	// (0x000b2d7f) main_sp_fs_ribbon_pane

0xdfb9,	// (0x000b2d87) popup_sp_fs_cale_preview_window

0x865b,	// (0x000ad429) list_single_sp_fs_schedule_track_pane_ParamLimits

0x865b,	// (0x000ad429) list_single_sp_fs_schedule_track_pane

0xbbe5,	// (0x000b09b3) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xbbe5,	// (0x000b09b3) bg_sp_fs_highlight_list_pane_cp03

0x866f,	// (0x000ad43d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x866f,	// (0x000ad43d) list_single_sp_fs_schedule_track_pane_g1

0x867b,	// (0x000ad449) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x867b,	// (0x000ad449) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000b4b88) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000b4b88) list_single_sp_fs_schedule_track_pane_g

0x8687,	// (0x000ad455) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8687,	// (0x000ad455) list_single_sp_fs_schedule_track_pane_t1

0x86a1,	// (0x000ad46f) sp_fs_schedule_track_pane_ParamLimits

0x86a1,	// (0x000ad46f) sp_fs_schedule_track_pane

0xdfcb,	// (0x000b2d99) sp_fs_schedule_track_pane_g1

0xdfd3,	// (0x000b2da1) sp_fs_schedule_track_pane_g2

0xdfdb,	// (0x000b2da9) sp_fs_schedule_track_pane_g3

0xdfe3,	// (0x000b2db1) sp_fs_schedule_track_pane_g4

0xdfeb,	// (0x000b2db9) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000b4b8d) sp_fs_schedule_track_pane_g

0xcaea,	// (0x000b18b8) bg_sp_fs_schedule_viewer_highlight_g1

0x9951,	// (0x000ae71f) bg_sp_fs_schedule_viewer_highlight_g2

0xcaf2,	// (0x000b18c0) bg_sp_fs_schedule_viewer_highlight_g3

0xcafa,	// (0x000b18c8) bg_sp_fs_schedule_viewer_highlight_g4

0xcd44,	// (0x000b1b12) bg_sp_fs_schedule_viewer_highlight_g5

0xcb0a,	// (0x000b18d8) bg_sp_fs_schedule_viewer_highlight_g6

0xcb12,	// (0x000b18e0) bg_sp_fs_schedule_viewer_highlight_g7

0xcb1a,	// (0x000b18e8) bg_sp_fs_schedule_viewer_highlight_g8

0x9931,	// (0x000ae6ff) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000b4b98) bg_sp_fs_schedule_viewer_highlight_g

0xe685,	// (0x000b3453) bg_main_sp_fs_ribbon_pane

0x86b2,	// (0x000ad480) main_sp_fs_ribbon_pane_g1

0xdff3,	// (0x000b2dc1) main_sp_fs_ribbon_pane_t1

0x86bb,	// (0x000ad489) main_sp_fs_ribbon_pane_t2

0xe002,	// (0x000b2dd0) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000b4bab) main_sp_fs_ribbon_pane_t

0xe011,	// (0x000b2ddf) main_sp_fs_ribbon_scheduler_pane

0xe019,	// (0x000b2de7) bg_main_sp_fs_ribbon_pane_g1

0xe022,	// (0x000b2df0) bg_main_sp_fs_ribbon_pane_g2

0xe02b,	// (0x000b2df9) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000b4bb2) bg_main_sp_fs_ribbon_pane_g

0xe033,	// (0x000b2e01) main_sp_fs_ribbon_scheduler_pane_g1

0xe03c,	// (0x000b2e0a) main_sp_fs_ribbon_scheduler_pane_g2

0xe045,	// (0x000b2e13) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000b4bb9) main_sp_fs_ribbon_scheduler_pane_g

0xe04e,	// (0x000b2e1c) list_cale_mrui_pane

0x86ca,	// (0x000ad498) sp_fs_scroll_pane_cp07_ParamLimits

0x86ca,	// (0x000ad498) sp_fs_scroll_pane_cp07

0x86e6,	// (0x000ad4b4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x86e6,	// (0x000ad4b4) bg_sp_fs_schedule_viewer_highlight

0xe05b,	// (0x000b2e29) list_single_sp_fs_schedule_track_pane_cp01

0xe063,	// (0x000b2e31) list_sp_fs_schedule_track_pane

0xe06b,	// (0x000b2e39) sp_fs_scroll_pane_cp06_ParamLimits

0xe06b,	// (0x000b2e39) sp_fs_scroll_pane_cp06

0xbff9,	// (0x000b0dc7) bgmain_sp_fs_calendar_pane_g1

0x86f6,	// (0x000ad4c4) list_single_cale_mrui_pane_ParamLimits

0x86f6,	// (0x000ad4c4) list_single_cale_mrui_pane

0xe07d,	// (0x000b2e4b) list_single_cale_mrui_row_pane_ParamLimits

0xe07d,	// (0x000b2e4b) list_single_cale_mrui_row_pane

0xe08a,	// (0x000b2e58) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe08a,	// (0x000b2e58) list_single_cale_mrui_row_pane_g1

0xe0cf,	// (0x000b2e9d) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe0cf,	// (0x000b2e9d) list_single_cale_mrui_row_pane_t1

0x8717,	// (0x000ad4e5) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8717,	// (0x000ad4e5) list_single_cale_mrui_row_pane_t2

0xe0e1,	// (0x000b2eaf) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe0e1,	// (0x000b2eaf) list_single_cale_mrui_row_pane_t3

0xe110,	// (0x000b2ede) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe110,	// (0x000b2ede) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000b4bc7) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000b4bc7) list_single_cale_mrui_row_pane_t

0x877f,	// (0x000ad54d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x877f,	// (0x000ad54d) list_single_cmail_header_editor_pane_bg_cp01

0x87a5,	// (0x000ad573) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x87a5,	// (0x000ad573) list_single_cmail_header_editor_pane_bg_cp02

0x87c5,	// (0x000ad593) main_radioblah_text_pane_t1_ParamLimits

0x87c5,	// (0x000ad593) main_radioblah_text_pane_t1

0xe13f,	// (0x000b2f0d) cam6_indi_pane_cp01

0xe147,	// (0x000b2f15) cam6_mode_pane_cp01

0xe14f,	// (0x000b2f1d) cam6_pano_pane

0xe158,	// (0x000b2f26) cam6_zoom_pane_cp01

0xe160,	// (0x000b2f2e) cam6_pano_image_pane

0xe16b,	// (0x000b2f39) cam6_pano_pane_g1

0xd7ff,	// (0x000b25cd) cam6_pano_pane_g2

0xe174,	// (0x000b2f42) cam6_pano_pane_g3

0xe17d,	// (0x000b2f4b) cam6_pano_pane_g4

0xc61d,	// (0x000b13eb) cam6_pano_pane_g5

0xe186,	// (0x000b2f54) cam6_pano_pane_g6

0xe190,	// (0x000b2f5e) cam6_pano_pane_g7

0xe198,	// (0x000b2f66) cam6_pano_pane_g8

0xe1a1,	// (0x000b2f6f) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000b4bd0) cam6_pano_pane_g

0xe685,	// (0x000b3453) main_browser_tag_pane

0xdedf,	// (0x000b2cad) grid_navstr_albumart_pane

0xe1ac,	// (0x000b2f7a) cell_navstr_albumart_pane_ParamLimits

0xe1ac,	// (0x000b2f7a) cell_navstr_albumart_pane

0xe1cc,	// (0x000b2f9a) cell_navstr_albumart_pane_g1

0xb9e8,	// (0x000b07b6) cell_navstr_albumart_pane_g2

0xb9f8,	// (0x000b07c6) cell_navstr_albumart_pane_g3

0xb9f0,	// (0x000b07be) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000b4be3) cell_navstr_albumart_pane_g

0x87df,	// (0x000ad5ad) bt_list_pane_ParamLimits

0x87df,	// (0x000ad5ad) bt_list_pane

0x87f3,	// (0x000ad5c1) bt_list_pane_t1

0x8802,	// (0x000ad5d0) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000b4bec) bt_list_pane_t

0xe685,	// (0x000b3453) main_cale_prevew_pane

0x8811,	// (0x000ad5df) popup_cale_preview_window_ParamLimits

0x8811,	// (0x000ad5df) popup_cale_preview_window

0xbbe5,	// (0x000b09b3) bg_popup_preview_window_pane_cp05_ParamLimits

0xbbe5,	// (0x000b09b3) bg_popup_preview_window_pane_cp05

0xe1d4,	// (0x000b2fa2) list_cale_preview_pane_ParamLimits

0xe1d4,	// (0x000b2fa2) list_cale_preview_pane

0x882c,	// (0x000ad5fa) list_double_cale_preview_pane_ParamLimits

0x882c,	// (0x000ad5fa) list_double_cale_preview_pane

0x883e,	// (0x000ad60c) list_single_cale_preview_pane_ParamLimits

0x883e,	// (0x000ad60c) list_single_cale_preview_pane

0x8854,	// (0x000ad622) list_single_cale_preview_pane_g1

0x885c,	// (0x000ad62a) list_single_cale_preview_pane_t1_ParamLimits

0x885c,	// (0x000ad62a) list_single_cale_preview_pane_t1

0x8871,	// (0x000ad63f) list_double_cale_preview_pane_g1

0x8879,	// (0x000ad647) list_double_cale_preview_pane_t1_ParamLimits

0x8879,	// (0x000ad647) list_double_cale_preview_pane_t1

0x888e,	// (0x000ad65c) list_double_cale_preview_pane_t2_ParamLimits

0x888e,	// (0x000ad65c) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000b4bf1) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000b4bf1) list_double_cale_preview_pane_t

0xe685,	// (0x000b3453) main_ezdial_pane

0xbbe5,	// (0x000b09b3) main_sp_fs_email_pane_ParamLimits

0x7de7,	// (0x000acbb5) cmail_ddmenu_btn01_pane_ParamLimits

0x7de7,	// (0x000acbb5) cmail_ddmenu_btn01_pane

0x7dfa,	// (0x000acbc8) cmail_ddmenu_btn02_pane_ParamLimits

0x7dfa,	// (0x000acbc8) cmail_ddmenu_btn02_pane

0x7e1d,	// (0x000acbeb) cmail_ddmenu_btn03_pane_ParamLimits

0x7e1d,	// (0x000acbeb) cmail_ddmenu_btn03_pane

0x7e43,	// (0x000acc11) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e67,	// (0x000acc35) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcb22,	// (0x000b18f0) list_cmail_body_pane_ParamLimits

0xdde8,	// (0x000b2bb6) bg_button_pane_cp12

0xddf1,	// (0x000b2bbf) list_single_cmail_header_detail_pane_g3_ParamLimits

0xddf1,	// (0x000b2bbf) list_single_cmail_header_detail_pane_g3

0xde3a,	// (0x000b2c08) list_single_cmail_header_detail_pane_t2_ParamLimits

0xde3a,	// (0x000b2c08) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000b4b74) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000b4b74) list_single_cmail_header_detail_pane_t

0xdf47,	// (0x000b2d15) phacti_term_pane_t2_ParamLimits

0xdf47,	// (0x000b2d15) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000b4b7e) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000b4b7e) phacti_term_pane_t

0xe1e0,	// (0x000b2fae) aid_size_list_single_double

0x88a6,	// (0x000ad674) popup_ezdial_listscroll_window

0x88c2,	// (0x000ad690) popup_number_entry_window_cp01

0x96ee,	// (0x000ae4bc) bg_popup_call_pane_cp09

0xe1ec,	// (0x000b2fba) ezdial_list_pane

0xe1f4,	// (0x000b2fc2) scroll_pane_cp23

0xbbd7,	// (0x000b09a5) bg_button_pane_cp028_ParamLimits

0xbbd7,	// (0x000b09a5) bg_button_pane_cp028

0x88d0,	// (0x000ad69e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x88d0,	// (0x000ad69e) cmail_ddmenu_btn01_pane_g1

0x88dc,	// (0x000ad6aa) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x88dc,	// (0x000ad6aa) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000b4bf6) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000b4bf6) cmail_ddmenu_btn01_pane_g

0xe1fc,	// (0x000b2fca) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe1fc,	// (0x000b2fca) cmail_ddmenu_btn01_pane_t1

0xbbd7,	// (0x000b09a5) bg_button_pane_cp029_ParamLimits

0xbbd7,	// (0x000b09a5) bg_button_pane_cp029

0x88f0,	// (0x000ad6be) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x88f0,	// (0x000ad6be) cmail_ddmenu_btn02_pane_g1

0x8908,	// (0x000ad6d6) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8908,	// (0x000ad6d6) cmail_ddmenu_btn02_pane_t1

0xbbe5,	// (0x000b09b3) bg_button_pane_cp031_ParamLimits

0xbbe5,	// (0x000b09b3) bg_button_pane_cp031

0x88f0,	// (0x000ad6be) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x88f0,	// (0x000ad6be) cmail_ddmenu_btn03_pane_g1

0x8908,	// (0x000ad6d6) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8908,	// (0x000ad6d6) cmail_ddmenu_btn03_pane_t1

0x56e0,	// (0x000aa4ae) cell_dialer2_keypad_pane_t1_ParamLimits

0x56fa,	// (0x000aa4c8) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x56fa,	// (0x000aa4c8) cell_dialer2_keypad_pane_t1_copy1

0x760f,	// (0x000ac3dd) ncimui_group_button_pane

0xbbe5,	// (0x000b09b3) main_sp_fs_calendar_pane_ParamLimits

0x84e1,	// (0x000ad2af) list_single_cmail_header_caption_pane_ParamLimits

0xee9c,	// (0x000b3c6a) aid_recal_txt_sm_pane

0xe685,	// (0x000b3453) mian_recal_day_pane

0xdfb9,	// (0x000b2d87) popup_sp_fs_cale_preview_window_ParamLimits

0xe212,	// (0x000b2fe0) list_recal_day_pane

0xe255,	// (0x000b3023) list_single_recal_day_pane_ParamLimits

0xe255,	// (0x000b3023) list_single_recal_day_pane

0xe267,	// (0x000b3035) list_single_recal_day_pane_g1_ParamLimits

0xe267,	// (0x000b3035) list_single_recal_day_pane_g1

0xe273,	// (0x000b3041) list_single_recal_day_pane_g2_ParamLimits

0xe273,	// (0x000b3041) list_single_recal_day_pane_g2

0xe283,	// (0x000b3051) list_single_recal_day_pane_g3_ParamLimits

0xe283,	// (0x000b3051) list_single_recal_day_pane_g3

0x892c,	// (0x000ad6fa) list_single_recal_day_pane_g4_ParamLimits

0x892c,	// (0x000ad6fa) list_single_recal_day_pane_g4

0xe28f,	// (0x000b305d) list_single_recal_day_pane_g5_ParamLimits

0xe28f,	// (0x000b305d) list_single_recal_day_pane_g5

0xe29f,	// (0x000b306d) list_single_recal_day_pane_g6_ParamLimits

0xe29f,	// (0x000b306d) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000b4c05) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000b4c05) list_single_recal_day_pane_g

0xe2b3,	// (0x000b3081) list_single_recal_day_pane_t1

0xe2c5,	// (0x000b3093) list_single_recal_day_pane_t2

0x0001,

0x0010,	// (0x000a4dde) list_single_recal_day_pane_t

0x894c,	// (0x000ad71a) ncimui_query_button_pane_ParamLimits

0x894c,	// (0x000ad71a) ncimui_query_button_pane

0x895c,	// (0x000ad72a) ncimui_query_button_pane_t1_ParamLimits

0x895c,	// (0x000ad72a) ncimui_query_button_pane_t1

0xe2d7,	// (0x000b30a5) ncimui_query_button_pane_t2_ParamLimits

0xe2d7,	// (0x000b30a5) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x000b4c10) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x000b4c10) ncimui_query_button_pane_t

0x896f,	// (0x000ad73d) query_button_pane_ParamLimits

0x896f,	// (0x000ad73d) query_button_pane

0xe685,	// (0x000b3453) bg_button_pane_cp0028

0xe2ea,	// (0x000b30b8) query_button_pane_t1

0x3788,	// (0x000a8556) main_tport_pane_ParamLimits

0x83a5,	// (0x000ad173) bg_popup_window_pane_cp01_ParamLimits

0x83a5,	// (0x000ad173) bg_popup_window_pane_cp01

0x83c0,	// (0x000ad18e) heading_pane_cp08_ParamLimits

0x83c0,	// (0x000ad18e) heading_pane_cp08

0x83d3,	// (0x000ad1a1) heading_pane_cp07_ParamLimits

0x83d3,	// (0x000ad1a1) heading_pane_cp07

0x847a,	// (0x000ad248) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000b4b61) cell_tport_appsw_pane_g

0x2d24,	// (0x000a7af2) input_candi_list_open_g1

0x9b42,	// (0x000ae910) list_cale_time_pane_g6_ParamLimits

0x9b42,	// (0x000ae910) list_cale_time_pane_g6

0x4551,	// (0x000a931f) aid_size_touch_calib_1_ParamLimits

0x4551,	// (0x000a931f) aid_size_touch_calib_1

0x4563,	// (0x000a9331) aid_size_touch_calib_2_ParamLimits

0x4563,	// (0x000a9331) aid_size_touch_calib_2

0x457b,	// (0x000a9349) aid_size_touch_calib_3_ParamLimits

0x457b,	// (0x000a9349) aid_size_touch_calib_3

0x4599,	// (0x000a9367) aid_size_touch_calib_4_ParamLimits

0x4599,	// (0x000a9367) aid_size_touch_calib_4

0x45b1,	// (0x000a937f) main_touch_calib_button_group_pane_ParamLimits

0x45b1,	// (0x000a937f) main_touch_calib_button_group_pane

0x45c9,	// (0x000a9397) main_touch_calib_pane_g1_ParamLimits

0x45db,	// (0x000a93a9) main_touch_calib_pane_g2_ParamLimits

0x45ed,	// (0x000a93bb) main_touch_calib_pane_g3_ParamLimits

0x45ff,	// (0x000a93cd) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000b451f) main_touch_calib_pane_g_ParamLimits

0x4611,	// (0x000a93df) main_touch_calib_pane_t1_ParamLimits

0x462b,	// (0x000a93f9) main_touch_calib_pane_t2_ParamLimits

0x4645,	// (0x000a9413) main_touch_calib_pane_t3_ParamLimits

0x4659,	// (0x000a9427) main_touch_calib_pane_t4_ParamLimits

0x466d,	// (0x000a943b) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000b4528) main_touch_calib_pane_t_ParamLimits

0xc3bd,	// (0x000b118b) list_single_fp_cale_pane_g3_ParamLimits

0xc3bd,	// (0x000b118b) list_single_fp_cale_pane_g3

0x9534,	// (0x000ae302) bg_button_pane_cp012_ParamLimits

0x9534,	// (0x000ae302) bg_vkb2_func_pane_cp03_ParamLimits

0x665a,	// (0x000ab428) cell_vitu2_function_top_pane_g1_ParamLimits

0x9534,	// (0x000ae302) bg_vkb2_func_pane_cp04_ParamLimits

0x759d,	// (0x000ac36b) main_ncimui_button_group_pane_ParamLimits

0x759d,	// (0x000ac36b) main_ncimui_button_group_pane

0x75fd,	// (0x000ac3cb) main_ncimui_pane_t3_ParamLimits

0x75fd,	// (0x000ac3cb) main_ncimui_pane_t3

0xdef5,	// (0x000b2cc3) phacti_button_group_pane

0xe1e0,	// (0x000b2fae) aid_size_list_single_double_ParamLimits

0x88a6,	// (0x000ad674) popup_ezdial_listscroll_window_ParamLimits

0x88c2,	// (0x000ad690) popup_number_entry_window_cp01_ParamLimits

0x8982,	// (0x000ad750) phacti_button_pane_ParamLimits

0x8982,	// (0x000ad750) phacti_button_pane

0xe685,	// (0x000b3453) bg_button_pane_cp14

0xe2f8,	// (0x000b30c6) phacti_button_pane_t1

0x8993,	// (0x000ad761) main_touch_calib_button_pane_ParamLimits

0x8993,	// (0x000ad761) main_touch_calib_button_pane

0xedc2,	// (0x000b3b90) bg_button_pane_cp18_ParamLimits

0xedc2,	// (0x000b3b90) bg_button_pane_cp18

0xe306,	// (0x000b30d4) main_touch_calib_button_pane_t1_ParamLimits

0xe306,	// (0x000b30d4) main_touch_calib_button_pane_t1

0xe31c,	// (0x000b30ea) main_touch_calib_button_pane_t2_ParamLimits

0xe31c,	// (0x000b30ea) main_touch_calib_button_pane_t2

0x0001,

0x001a,	// (0x000a4de8) main_touch_calib_button_pane_t_ParamLimits

0x001a,	// (0x000a4de8) main_touch_calib_button_pane_t

0xe685,	// (0x000b3453) cell_ncimui_button_pane

0xe685,	// (0x000b3453) bg_button_pane_cp032

0xe33a,	// (0x000b3108) cell_ncimui_button_pane_t1

0xa034,	// (0x000aee02) image3_infobar_pane_ParamLimits

0xa034,	// (0x000aee02) image3_infobar_pane

0x79d9,	// (0x000ac7a7) fs_bigclock_status_pane_ParamLimits

0x79d9,	// (0x000ac7a7) fs_bigclock_status_pane

0x79e6,	// (0x000ac7b4) main_fs_bigclock_clock_pane_ParamLimits

0x79e6,	// (0x000ac7b4) main_fs_bigclock_clock_pane

0x7a06,	// (0x000ac7d4) main_fs_bigclock_indi_pane_ParamLimits

0x7a06,	// (0x000ac7d4) main_fs_bigclock_indi_pane

0x7a30,	// (0x000ac7fe) main_fs_bigclock_swipe_pane_ParamLimits

0x7a30,	// (0x000ac7fe) main_fs_bigclock_swipe_pane

0xe685,	// (0x000b3453) main_fs_clock_dumped_data

0xd90c,	// (0x000b26da) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd90c,	// (0x000b26da) list_single_fs_bigclock_indicator_pane_g1

0xd927,	// (0x000b26f5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd927,	// (0x000b26f5) list_single_fs_bigclock_indicator_pane_g2

0xd941,	// (0x000b270f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd941,	// (0x000b270f) list_single_fs_bigclock_indicator_pane_g3

0xd95b,	// (0x000b2729) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd95b,	// (0x000b2729) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000b4a42) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000b4a42) list_single_fs_bigclock_indicator_pane_g

0xd986,	// (0x000b2754) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd986,	// (0x000b2754) list_single_fs_bigclock_indicator_pane_t1

0xd9ae,	// (0x000b277c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd9ae,	// (0x000b277c) list_single_fs_bigclock_indicator_pane_t2

0xd9d6,	// (0x000b27a4) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd9d6,	// (0x000b27a4) list_single_fs_bigclock_indicator_pane_t3

0xd9fe,	// (0x000b27cc) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd9fe,	// (0x000b27cc) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000b4a4d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000b4a4d) list_single_fs_bigclock_indicator_pane_t

0xe348,	// (0x000b3116) image3_infobar_fav_pane_ParamLimits

0xe348,	// (0x000b3116) image3_infobar_fav_pane

0xe358,	// (0x000b3126) image3_infobar_loc_pane_ParamLimits

0xe358,	// (0x000b3126) image3_infobar_loc_pane

0xe36c,	// (0x000b313a) image3_infobar_time_pane_ParamLimits

0xe36c,	// (0x000b313a) image3_infobar_time_pane

0xbff9,	// (0x000b0dc7) image3_infobar_time_pane_g1

0xe37c,	// (0x000b314a) image3_infobar_time_pane_t1

0xbff9,	// (0x000b0dc7) image3_infobar_loc_pane_g1

0xe38a,	// (0x000b3158) image3_infobar_loc_pane_g2

0x0001,

0xfe47,	// (0x000b4c15) image3_infobar_loc_pane_g

0xe392,	// (0x000b3160) image3_infobar_loc_pane_t1

0xbff9,	// (0x000b0dc7) image3_infobar_fav_pane_g1

0xe3a0,	// (0x000b316e) image3_infobar_fav_pane_g2

0x0001,

0xfe4c,	// (0x000b4c1a) image3_infobar_fav_pane_g

0xe3a8,	// (0x000b3176) fs_bigclock_status_battery_pane

0xe3b1,	// (0x000b317f) fs_bigclock_status_signal_pane

0xe3ba,	// (0x000b3188) fs_bigclock_status_title_pane

0xe3c3,	// (0x000b3191) fs_bigclock_status_signal_pane_g1

0xe3cc,	// (0x000b319a) fs_bigclock_status_signal_pane_g2

0x0001,

0x0029,	// (0x000a4df7) fs_bigclock_status_signal_pane_g

0xe3d4,	// (0x000b31a2) fs_bigclock_status_battery_pane_g1

0xe3dd,	// (0x000b31ab) fs_bigclock_status_battery_pane_g2

0x0001,

0x002e,	// (0x000a4dfc) fs_bigclock_status_battery_pane_g

0xe3e5,	// (0x000b31b3) fs_bigclock_status_title_pane_t1

0xbff9,	// (0x000b0dc7) main_fs_bigclock_clock_pane_g1

0xe3f3,	// (0x000b31c1) main_fs_bigclock_clock_pane_g2

0xe3fc,	// (0x000b31ca) main_fs_bigclock_clock_pane_g3

0xe3fc,	// (0x000b31ca) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe51,	// (0x000b4c1f) main_fs_bigclock_clock_pane_g

0xe404,	// (0x000b31d2) main_fs_bigclock_clock_pane_t1

0x89a8,	// (0x000ad776) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe5a,	// (0x000b4c28) main_fs_bigclock_clock_pane_t

0xe412,	// (0x000b31e0) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe412,	// (0x000b31e0) list_single_fs_bigclock_indicator_pane

0xe423,	// (0x000b31f1) list_single_fs_bigclock_pane_ParamLimits

0xe423,	// (0x000b31f1) list_single_fs_bigclock_pane

0xe449,	// (0x000b3217) main_fs_bigclock_indicator_pane_t1

0xe458,	// (0x000b3226) list_single_fs_bigclock_pane_g1

0xe460,	// (0x000b322e) list_single_fs_bigclock_pane_t1

0xbff9,	// (0x000b0dc7) main_fs_bigclock_swipe_pane_g1

0xe4a3,	// (0x000b3271) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe66,	// (0x000b4c34) main_fs_bigclock_swipe_pane_g

0xe4ab,	// (0x000b3279) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe4ab,	// (0x000b3279) main_fs_bigclock_swipe_pane_t1

0x2634,	// (0x000a7402) call_type_pane_ParamLimits

0xe685,	// (0x000b3453) main_btmg_pane

0xe0b6,	// (0x000b2e84) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe0b6,	// (0x000b2e84) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000b4bc0) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000b4bc0) list_single_cale_mrui_row_pane_g

0xe23b,	// (0x000b3009) list_recal_vselct_arw_lo_pane

0xe243,	// (0x000b3011) list_recal_vselct_arw_up_pane

0xe24b,	// (0x000b3019) list_recal_vselct_pane

0x89fb,	// (0x000ad7c9) btmg_button_pane

0x8a05,	// (0x000ad7d3) main_btmg_pane_g1

0xe685,	// (0x000b3453) bg_button_pane_cp044

0xe4c8,	// (0x000b3296) btmg_button_pane_t1

0xbbc3,	// (0x000b0991) aid_listscroll_gen

0xbbe5,	// (0x000b09b3) main_cntbar_detail_pane

0xddca,	// (0x000b2b98) list_cmail_folder_pane

0xbe23,	// (0x000b0bf1) sp_fs_scroll_pane_cp03_ParamLimits

0x8a0f,	// (0x000ad7dd) list_single_fs_dyc_pane_cp01_ParamLimits

0x8a0f,	// (0x000ad7dd) list_single_fs_dyc_pane_cp01

0xe4d6,	// (0x000b32a4) aid_size_cmail_indent

0xe4df,	// (0x000b32ad) list_single_dyc_row_pane_cp01

0x8a57,	// (0x000ad825) cntbar_detail_list_pane_ParamLimits

0x8a57,	// (0x000ad825) cntbar_detail_list_pane

0x8aa3,	// (0x000ad871) main_cntbar_detail_cont_pane_ParamLimits

0x8aa3,	// (0x000ad871) main_cntbar_detail_cont_pane

0xbe23,	// (0x000b0bf1) scroll_pane_cp032_ParamLimits

0xbe23,	// (0x000b0bf1) scroll_pane_cp032

0x8ab7,	// (0x000ad885) cntbar_detail_list_event_pane_ParamLimits

0x8ab7,	// (0x000ad885) cntbar_detail_list_event_pane

0x8a67,	// (0x000ad835) cntbar_detail_list_shct_pane

0x999f,	// (0x000ae76d) aid_list_gen

0xe4e8,	// (0x000b32b6) aid_scroll

0xe4f1,	// (0x000b32bf) aid_size_touch_scroll_bar

0x6d3a,	// (0x000abb08) aid_list_double

0x8ac7,	// (0x000ad895) aid_list_single

0x6d3a,	// (0x000abb08) aid_list_single_lg

0x8ad0,	// (0x000ad89e) aid_list_z_g_a_sm

0x8ad8,	// (0x000ad8a6) aid_list_z_g_d

0x8ae0,	// (0x000ad8ae) aid_txt_z_prm

0x8aee,	// (0x000ad8bc) aid_txt_z_prm_cp01

0x8afc,	// (0x000ad8ca) aid_txt_z_sec

0x8b0a,	// (0x000ad8d8) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8b0a,	// (0x000ad8d8) main_cntbar_detail_cont_pane_g1

0x8b1e,	// (0x000ad8ec) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8b1e,	// (0x000ad8ec) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe6b,	// (0x000b4c39) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe6b,	// (0x000b4c39) main_cntbar_detail_cont_pane_g

0xe4fa,	// (0x000b32c8) main_cntbar_detail_cont_pane_t1

0xe508,	// (0x000b32d6) main_cntbar_detail_cont_pane_t2

0xe516,	// (0x000b32e4) main_cntbar_detail_cont_pane_t3

0x0002,

0x0057,	// (0x000a4e25) main_cntbar_detail_cont_pane_t

0x8b2e,	// (0x000ad8fc) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8b2e,	// (0x000ad8fc) cell_cntbar_detail_list_shct_pane

0xe524,	// (0x000b32f2) cntbar_detail_list_shct_pane_g1

0xe52d,	// (0x000b32fb) cntbar_detail_list_shct_pane_g2

0x0001,

0x005e,	// (0x000a4e2c) cntbar_detail_list_shct_pane_g

0x8b42,	// (0x000ad910) cntbar_detail_list_event_pane_g1_ParamLimits

0x8b42,	// (0x000ad910) cntbar_detail_list_event_pane_g1

0x8b4e,	// (0x000ad91c) cntbar_detail_list_event_pane_g2_ParamLimits

0x8b4e,	// (0x000ad91c) cntbar_detail_list_event_pane_g2

0x0005,

0xfe70,	// (0x000b4c3e) cntbar_detail_list_event_pane_g_ParamLimits

0xfe70,	// (0x000b4c3e) cntbar_detail_list_event_pane_g

0x8bba,	// (0x000ad988) cntbar_detail_list_event_pane_t1_ParamLimits

0x8bba,	// (0x000ad988) cntbar_detail_list_event_pane_t1

0x8bcf,	// (0x000ad99d) cntbar_detail_list_event_pane_t2_ParamLimits

0x8bcf,	// (0x000ad99d) cntbar_detail_list_event_pane_t2

0x0002,

0xfe7d,	// (0x000b4c4b) cntbar_detail_list_event_pane_t_ParamLimits

0xfe7d,	// (0x000b4c4b) cntbar_detail_list_event_pane_t

0xbff9,	// (0x000b0dc7) cell_cntbar_detail_list_shct_pane_g1

0xa785,	// (0x000af553) navi_pane_mv_g3

0xbbe5,	// (0x000b09b3) main_cntbar_detail_pane_ParamLimits

0xe685,	// (0x000b3453) main_notif_wgt_pane

0x9e4a,	// (0x000aec18) aid_tch_main_mp4_pane_g4

0xa02c,	// (0x000aedfa) popup_slider_window_cp02

0xe231,	// (0x000b2fff) list_recal_day_event_pane

0x8a25,	// (0x000ad7f3) cntbar_detail_btn_pane_ParamLimits

0x8a25,	// (0x000ad7f3) cntbar_detail_btn_pane

0x8a3e,	// (0x000ad80c) cntbar_detail_btn_pane_cp01_ParamLimits

0x8a3e,	// (0x000ad80c) cntbar_detail_btn_pane_cp01

0x8a67,	// (0x000ad835) cntbar_detail_list_shct_pane_ParamLimits

0x8a77,	// (0x000ad845) cntbar_detail_pane_g1_ParamLimits

0x8a77,	// (0x000ad845) cntbar_detail_pane_g1

0x8a87,	// (0x000ad855) cntbar_detail_pane_t1_ParamLimits

0x8a87,	// (0x000ad855) cntbar_detail_pane_t1

0x8b5a,	// (0x000ad928) cntbar_detail_list_event_pane_g3_ParamLimits

0x8b5a,	// (0x000ad928) cntbar_detail_list_event_pane_g3

0x8b72,	// (0x000ad940) cntbar_detail_list_event_pane_g4_ParamLimits

0x8b72,	// (0x000ad940) cntbar_detail_list_event_pane_g4

0x8b8a,	// (0x000ad958) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b8a,	// (0x000ad958) cntbar_detail_list_event_pane_g5

0x8ba2,	// (0x000ad970) cntbar_detail_list_event_pane_g6_ParamLimits

0x8ba2,	// (0x000ad970) cntbar_detail_list_event_pane_g6

0x8be4,	// (0x000ad9b2) cntbar_detail_list_event_pane_t3_ParamLimits

0x8be4,	// (0x000ad9b2) cntbar_detail_list_event_pane_t3

0x8bf6,	// (0x000ad9c4) popup_notif_wgt_window_ParamLimits

0x8bf6,	// (0x000ad9c4) popup_notif_wgt_window

0x8c0f,	// (0x000ad9dd) popup_submenu_window_cp01_ParamLimits

0x8c0f,	// (0x000ad9dd) popup_submenu_window_cp01

0x96ee,	// (0x000ae4bc) bg_popup_window_pane_cp10

0xe536,	// (0x000b3304) listscroll_notif_wgt_pane

0xe548,	// (0x000b3316) list_notif_wgt_window

0xe551,	// (0x000b331f) scroll_pane_cp033

0x8c25,	// (0x000ad9f3) list_notif_wgt_row_pane_ParamLimits

0x8c25,	// (0x000ad9f3) list_notif_wgt_row_pane

0xe55a,	// (0x000b3328) aid_size_list_notif_wgt_del

0xe567,	// (0x000b3335) list_notif_wgt_row_pane_g1

0xe573,	// (0x000b3341) list_notif_wgt_row_pane_g2

0xe587,	// (0x000b3355) list_notif_wgt_row_pane_g3

0x0002,

0x0077,	// (0x000a4e45) list_notif_wgt_row_pane_g

0xe594,	// (0x000b3362) list_notif_wgt_row_pane_t1

0xe5aa,	// (0x000b3378) list_notif_wgt_row_pane_t2

0xe5bc,	// (0x000b338a) list_notif_wgt_row_pane_t3

0x0002,

0x007e,	// (0x000a4e4c) list_notif_wgt_row_pane_t

0xcd5e,	// (0x000b1b2c) list_recal_day_event_pane_g1

0xe5ce,	// (0x000b339c) list_recal_day_event_pane_t1

0xe685,	// (0x000b3453) bg_button_pane_cp045

0x8c35,	// (0x000ada03) cntbar_detail_btn_pane_t1

0xbbd7,	// (0x000b09a5) main_callh_pane_ParamLimits

0xbbd7,	// (0x000b09a5) main_callh_pane

0xe685,	// (0x000b3453) main_coverflow0_pane

0xe685,	// (0x000b3453) main_wgtman_pane

0x7a48,	// (0x000ac816) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7a48,	// (0x000ac816) main_fs_bigclock_unlock_btn_pane

0x8472,	// (0x000ad240) bg_button_pane_cp16

0x8482,	// (0x000ad250) cell_tport_appsw_pane_g3

0x8c43,	// (0x000ada11) cf0_flow_pane_ParamLimits

0x8c43,	// (0x000ada11) cf0_flow_pane

0xe5dd,	// (0x000b33ab) listscroll_cf0_pane

0xe5e8,	// (0x000b33b6) main_cf0_pane_g1

0x8c58,	// (0x000ada26) main_cf0_pane_t1_ParamLimits

0x8c58,	// (0x000ada26) main_cf0_pane_t1

0x8c6f,	// (0x000ada3d) main_cf0_pane_t2_ParamLimits

0x8c6f,	// (0x000ada3d) main_cf0_pane_t2

0x0001,

0xfe84,	// (0x000b4c52) main_cf0_pane_t_ParamLimits

0xfe84,	// (0x000b4c52) main_cf0_pane_t

0xe5fa,	// (0x000b33c8) scroll_pane_cp11

0x8c86,	// (0x000ada54) cf0_flow_pane_g1

0x8c8e,	// (0x000ada5c) cf0_flow_pane_g2

0x0001,

0xfe89,	// (0x000b4c57) cf0_flow_pane_g

0x8c96,	// (0x000ada64) cf0_flow_pane_t1

0xe685,	// (0x000b3453) main_call6_pane

0xe685,	// (0x000b3453) main_calllock_pane

0x8ca4,	// (0x000ada72) call6_btn_grp_pane_ParamLimits

0x8ca4,	// (0x000ada72) call6_btn_grp_pane

0x8cbe,	// (0x000ada8c) call6_pane_g1_ParamLimits

0x8cbe,	// (0x000ada8c) call6_pane_g1

0x8cd3,	// (0x000adaa1) popup_call6_1st_window_ParamLimits

0x8cd3,	// (0x000adaa1) popup_call6_1st_window

0x8ce4,	// (0x000adab2) popup_call6_2nd_window_ParamLimits

0x8ce4,	// (0x000adab2) popup_call6_2nd_window

0x8cf5,	// (0x000adac3) cell_call6_btn_pane_ParamLimits

0x8cf5,	// (0x000adac3) cell_call6_btn_pane

0x96ee,	// (0x000ae4bc) bg_popup_call2_in_pane_cp03

0xe605,	// (0x000b33d3) popup_call6_1st_window_g1

0xe60d,	// (0x000b33db) popup_call6_1st_window_g2

0xe615,	// (0x000b33e3) popup_call6_1st_window_g3

0x0002,

0x0094,	// (0x000a4e62) popup_call6_1st_window_g

0xe61d,	// (0x000b33eb) popup_call6_1st_window_t1

0xe62c,	// (0x000b33fa) popup_call6_1st_window_t2

0xe63c,	// (0x000b340a) popup_call6_1st_window_t3

0x0002,

0x009b,	// (0x000a4e69) popup_call6_1st_window_t

0x96ee,	// (0x000ae4bc) bg_popup_call2_in_pane_cp04

0xe605,	// (0x000b33d3) popup_call6_2nd_window_g1

0xe60d,	// (0x000b33db) popup_call6_2nd_window_g2

0xe615,	// (0x000b33e3) popup_call6_2nd_window_g3

0x0002,

0x0094,	// (0x000a4e62) popup_call6_2nd_window_g

0xe61d,	// (0x000b33eb) popup_call6_2nd_window_t1

0xe685,	// (0x000b3453) bg_button_pane_cp15

0xe64c,	// (0x000b341a) cell_call6_btn_pane_g1

0xe655,	// (0x000b3423) cell_call6_btn_pane_t1

0x8d09,	// (0x000adad7) listscroll_wgtman_pane_ParamLimits

0x8d09,	// (0x000adad7) listscroll_wgtman_pane

0x8d2a,	// (0x000adaf8) wgtman_btn_pane_ParamLimits

0x8d2a,	// (0x000adaf8) wgtman_btn_pane

0xa58c,	// (0x000af35a) aid_scroll_copy1

0xe664,	// (0x000b3432) list_wgtman_pane

0x8d6d,	// (0x000adb3b) wgtman_btn_pane_g1_ParamLimits

0x8d6d,	// (0x000adb3b) wgtman_btn_pane_g1

0x8d99,	// (0x000adb67) wgtman_btn_pane_t1_ParamLimits

0x8d99,	// (0x000adb67) wgtman_btn_pane_t1

0xe66e,	// (0x000b343c) wgtman_btn_pane_t2_ParamLimits

0xe66e,	// (0x000b343c) wgtman_btn_pane_t2

0x0001,

0xfe8e,	// (0x000b4c5c) wgtman_btn_pane_t_ParamLimits

0xfe8e,	// (0x000b4c5c) wgtman_btn_pane_t

0x8dd6,	// (0x000adba4) listrow_wgtman_pane_ParamLimits

0x8dd6,	// (0x000adba4) listrow_wgtman_pane

0x8de8,	// (0x000adbb6) listrow_wgtman_pane_g1

0x8df5,	// (0x000adbc3) listrow_wgtman_pane_g2

0x0001,

0xfe93,	// (0x000b4c61) listrow_wgtman_pane_g

0x8e13,	// (0x000adbe1) listrow_wgtman_pane_t1

0x8e2b,	// (0x000adbf9) listrow_wgtman_pane_t2

0x0001,

0xfe98,	// (0x000b4c66) listrow_wgtman_pane_t

0x8e51,	// (0x000adc1f) wait_bar_pane_cp09

0xeea5,	// (0x000b3c73) main_calllock_btn_pane

0xeeaf,	// (0x000b3c7d) main_calllock_pane_g1

0xe685,	// (0x000b3453) bg_button_pane_cp17

0xeebb,	// (0x000b3c89) main_calllock_btn_pane_g1

0xeec4,	// (0x000b3c92) main_calllock_btn_pane_t1

0xe685,	// (0x000b3453) main_dialer3_pane

0xe685,	// (0x000b3453) main_fmrd2_pane

0xbff9,	// (0x000b0dc7) main_fs_bigclock_unlock_btn_pane_g1

0xeedb,	// (0x000b3ca9) main_fs_bigclock_unlock_btn_pane_t1

0x8e63,	// (0x000adc31) area_fmrd2_info_pane_ParamLimits

0x8e63,	// (0x000adc31) area_fmrd2_info_pane

0x8e74,	// (0x000adc42) area_fmrd2_visual_pane_ParamLimits

0x8e74,	// (0x000adc42) area_fmrd2_visual_pane

0x8e82,	// (0x000adc50) fmrd2_indi_pane_ParamLimits

0x8e82,	// (0x000adc50) fmrd2_indi_pane

0x8e8f,	// (0x000adc5d) area_fmrd2_visual_pane_g1

0x8e97,	// (0x000adc65) area_fmrd2_visual_pane_t1

0x8ea7,	// (0x000adc75) area_fmrd2_visual_pane_t2

0x8eb7,	// (0x000adc85) area_fmrd2_visual_pane_t3

0x0002,

0xfea2,	// (0x000b4c70) area_fmrd2_visual_pane_t

0x8ec7,	// (0x000adc95) area_fmrd2_info_pane_g1

0x8ecf,	// (0x000adc9d) area_fmrd2_info_pane_t1

0x8edf,	// (0x000adcad) area_fmrd2_info_pane_t2

0x8eef,	// (0x000adcbd) area_fmrd2_info_pane_t3

0x8eff,	// (0x000adccd) area_fmrd2_info_pane_t4

0x0003,

0xfea9,	// (0x000b4c77) area_fmrd2_info_pane_t

0x8f0d,	// (0x000adcdb) fmrd2_indi_pane_t1

0x8f1d,	// (0x000adceb) fmrd2_indi_pane_t2

0x8f2d,	// (0x000adcfb) fmrd2_indi_pane_t3

0x0002,

0xfeb2,	// (0x000b4c80) fmrd2_indi_pane_t

0xd96a,	// (0x000b2738) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd96a,	// (0x000b2738) list_single_fs_bigclock_indicator_pane_g5

0xda1a,	// (0x000b27e8) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xda1a,	// (0x000b27e8) list_single_fs_bigclock_indicator_pane_t5

0x85fa,	// (0x000ad3c8) aid_cell_bcale_month_pane_ParamLimits

0x85fa,	// (0x000ad3c8) aid_cell_bcale_month_pane

0x8618,	// (0x000ad3e6) bcale_month_pane_ParamLimits

0x8618,	// (0x000ad3e6) bcale_month_pane

0x863c,	// (0x000ad40a) bcale_preview_pane_ParamLimits

0x863c,	// (0x000ad40a) bcale_preview_pane

0xe460,	// (0x000b322e) list_single_fs_bigclock_pane_t1_ParamLimits

0xe47f,	// (0x000b324d) list_single_fs_bigclock_pane_t2_ParamLimits

0xe47f,	// (0x000b324d) list_single_fs_bigclock_pane_t2

0x0001,

0x0048,	// (0x000a4e16) list_single_fs_bigclock_pane_t_ParamLimits

0x0048,	// (0x000a4e16) list_single_fs_bigclock_pane_t

0xeed3,	// (0x000b3ca1) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe9d,	// (0x000b4c6b) main_fs_bigclock_unlock_btn_pane_g

0x8f3d,	// (0x000add0b) aid_dia3_key_size_ParamLimits

0x8f3d,	// (0x000add0b) aid_dia3_key_size

0x8f4c,	// (0x000add1a) aid_dia3_listrow_size_ParamLimits

0x8f4c,	// (0x000add1a) aid_dia3_listrow_size

0x8f61,	// (0x000add2f) dia3_keypad_fun_pane_ParamLimits

0x8f61,	// (0x000add2f) dia3_keypad_fun_pane

0x8f7d,	// (0x000add4b) dia3_keypad_num_pane_ParamLimits

0x8f7d,	// (0x000add4b) dia3_keypad_num_pane

0x8f98,	// (0x000add66) dia3_listscroll_pane_ParamLimits

0x8f98,	// (0x000add66) dia3_listscroll_pane

0x8fab,	// (0x000add79) dia3_numentry_pane_ParamLimits

0x8fab,	// (0x000add79) dia3_numentry_pane

0xeee9,	// (0x000b3cb7) dia3_list_pane

0xeef4,	// (0x000b3cc2) scroll_pane_cp12

0xe685,	// (0x000b3453) bg_dia3_numentry_pane

0x8fbf,	// (0x000add8d) dia3_numentry_pane_t1

0x8fce,	// (0x000add9c) cell_dia3_key_num_pane

0x8fd6,	// (0x000adda4) cell_dia3_key0_fun_pane_ParamLimits

0x8fd6,	// (0x000adda4) cell_dia3_key0_fun_pane

0x8fea,	// (0x000addb8) cell_dia3_key1_fun_pane_ParamLimits

0x8fea,	// (0x000addb8) cell_dia3_key1_fun_pane

0x9002,	// (0x000addd0) dia3_listrow_pane

0xd679,	// (0x000b2447) bg_dia3_numentry_pane_g1

0xe685,	// (0x000b3453) bg_button_pane_cp21

0xeeff,	// (0x000b3ccd) cell_dia3_key_num_pane_t1

0xef0d,	// (0x000b3cdb) cell_dia3_key_num_pane_t2

0xef1c,	// (0x000b3cea) cell_dia3_key_num_pane_t3

0xef2b,	// (0x000b3cf9) cell_dia3_key_num_pane_t4

0x0003,

0xfeb9,	// (0x000b4c87) cell_dia3_key_num_pane_t

0xe685,	// (0x000b3453) bg_button_pane_cp19

0x9014,	// (0x000adde2) cell_dia3_key0_fun_pane_g1

0xe685,	// (0x000b3453) bg_button_pane_cp20

0x901c,	// (0x000addea) cell_dia3_key1_fun_pane_g1

0x9024,	// (0x000addf2) area_left_week_number_pane

0x9030,	// (0x000addfe) area_top_day_name_pane

0x9043,	// (0x000ade11) frame_month_view_pane

0xef3a,	// (0x000b3d08) grid_month_view_pane

0x9056,	// (0x000ade24) cell_top_day_name_pane_ParamLimits

0x9056,	// (0x000ade24) cell_top_day_name_pane

0x9083,	// (0x000ade51) cell_area_left_week_number_pane_ParamLimits

0x9083,	// (0x000ade51) cell_area_left_week_number_pane

0x9097,	// (0x000ade65) cell_month_view_pane_ParamLimits

0x9097,	// (0x000ade65) cell_month_view_pane

0xef48,	// (0x000b3d16) frm_month_g1

0x90c4,	// (0x000ade92) frm_month_g2

0x90d7,	// (0x000adea5) frm_month_g3

0x90ea,	// (0x000adeb8) frm_month_g4

0x90fd,	// (0x000adecb) frm_month_g5

0x9110,	// (0x000adede) frm_month_g6

0x9123,	// (0x000adef1) frm_month_g7

0xef55,	// (0x000b3d23) frm_month_g8

0x9136,	// (0x000adf04) frm_month_g9

0x9146,	// (0x000adf14) frm_month_g10

0x9156,	// (0x000adf24) frm_month_g11

0x9166,	// (0x000adf34) frm_month_g12

0x9178,	// (0x000adf46) frm_month_g13

0x918a,	// (0x000adf58) frm_month_g14

0x919e,	// (0x000adf6c) frm_month_g15

0x91b2,	// (0x000adf80) frm_month_g16

0x000f,

0xfec2,	// (0x000b4c90) frm_month_g

0xef62,	// (0x000b3d30) cell_top_day_name_pane_t1

0x91c6,	// (0x000adf94) cell_area_left_week_number_pane_g1

0x91d2,	// (0x000adfa0) cell_area_left_week_number_pane_t1

0xc265,	// (0x000b1033) cell_month_view_pane_g1

0x91e5,	// (0x000adfb3) cell_month_view_pane_t1

0xe685,	// (0x000b3453) main_fps_pane

0xdbef,	// (0x000b29bd) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdbef,	// (0x000b29bd) cmail_ddmenu_btn02_pane_cp1

0xdc0b,	// (0x000b29d9) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdc0b,	// (0x000b29d9) cmail_ddmenu_btn02_pane_cp2

0x88fc,	// (0x000ad6ca) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x88fc,	// (0x000ad6ca) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000b4bfb) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000b4bfb) cmail_ddmenu_btn02_pane_g

0x891a,	// (0x000ad6e8) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x891a,	// (0x000ad6e8) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000b4c00) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000b4c00) cmail_ddmenu_btn02_pane_t

0x91f8,	// (0x000adfc6) fps_text_pane_ParamLimits

0x91f8,	// (0x000adfc6) fps_text_pane

0x920f,	// (0x000adfdd) main_fps_pane_g1_ParamLimits

0x920f,	// (0x000adfdd) main_fps_pane_g1

0x9229,	// (0x000adff7) wait_bar_pane_cp010_ParamLimits

0x9229,	// (0x000adff7) wait_bar_pane_cp010

0x923a,	// (0x000ae008) fps_text_pane_t1_ParamLimits

0x923a,	// (0x000ae008) fps_text_pane_t1

0xca6c,	// (0x000b183a) cam4_image_uncrop_pane_g1

0xca75,	// (0x000b1843) cam4_image_uncrop_pane_g2

0x5b86,	// (0x000aa954) cam4_image_uncrop_pane_g3

0x5b8f,	// (0x000aa95d) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000b46bc) cam4_image_uncrop_pane_g

0x9002,	// (0x000addd0) dia3_listrow_pane_ParamLimits

0xe685,	// (0x000b3453) main_phob2_pane

0x8443,	// (0x000ad211) cell_tport_appsw_pane_cp02_ParamLimits

0x8443,	// (0x000ad211) cell_tport_appsw_pane_cp02

0x8457,	// (0x000ad225) cell_tport_appsw_pane_cp03_ParamLimits

0x8457,	// (0x000ad225) cell_tport_appsw_pane_cp03

0xe685,	// (0x000b3453) phob2_contact_card_pane

0xe685,	// (0x000b3453) phob2_listscroll_pane

0xef75,	// (0x000b3d43) phob2_list_pane

0xef7d,	// (0x000b3d4b) scroll_pane_cp034

0x9252,	// (0x000ae020) phob2_cc_data_pane_ParamLimits

0x9252,	// (0x000ae020) phob2_cc_data_pane

0x9271,	// (0x000ae03f) phob2_cc_listscroll_pane_ParamLimits

0x9271,	// (0x000ae03f) phob2_cc_listscroll_pane

0x928f,	// (0x000ae05d) list_double_large_graphic_phob2_pane_ParamLimits

0x928f,	// (0x000ae05d) list_double_large_graphic_phob2_pane

0x92a1,	// (0x000ae06f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x92a1,	// (0x000ae06f) list_double_large_graphic_phob2_pane_g1

0x92b7,	// (0x000ae085) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x92b7,	// (0x000ae085) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfee3,	// (0x000b4cb1) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfee3,	// (0x000b4cb1) list_double_large_graphic_phob2_pane_g

0x92c3,	// (0x000ae091) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x92c3,	// (0x000ae091) list_double_large_graphic_phob2_pane_t1

0x92d8,	// (0x000ae0a6) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x92d8,	// (0x000ae0a6) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfee8,	// (0x000b4cb6) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfee8,	// (0x000b4cb6) list_double_large_graphic_phob2_pane_t

0xe685,	// (0x000b3453) list_highlight_pane_cp024

0x92ea,	// (0x000ae0b8) phob2_cc_button_pane

0x92f2,	// (0x000ae0c0) phob2_cc_data_pane_g1_ParamLimits

0x92f2,	// (0x000ae0c0) phob2_cc_data_pane_g1

0x9307,	// (0x000ae0d5) phob2_cc_data_pane_g2_ParamLimits

0x9307,	// (0x000ae0d5) phob2_cc_data_pane_g2

0x0001,

0xfeed,	// (0x000b4cbb) phob2_cc_data_pane_g_ParamLimits

0xfeed,	// (0x000b4cbb) phob2_cc_data_pane_g

0x9317,	// (0x000ae0e5) phob2_cc_data_pane_t1_ParamLimits

0x9317,	// (0x000ae0e5) phob2_cc_data_pane_t1

0x932f,	// (0x000ae0fd) phob2_cc_data_pane_t2_ParamLimits

0x932f,	// (0x000ae0fd) phob2_cc_data_pane_t2

0x9347,	// (0x000ae115) phob2_cc_data_pane_t3_ParamLimits

0x9347,	// (0x000ae115) phob2_cc_data_pane_t3

0x0002,

0xfef2,	// (0x000b4cc0) phob2_cc_data_pane_t_ParamLimits

0xfef2,	// (0x000b4cc0) phob2_cc_data_pane_t

0xef85,	// (0x000b3d53) phob2_cc_list_pane_ParamLimits

0xef85,	// (0x000b3d53) phob2_cc_list_pane

0xcdf5,	// (0x000b1bc3) scroll_pane_cp035_ParamLimits

0xcdf5,	// (0x000b1bc3) scroll_pane_cp035

0xbbe5,	// (0x000b09b3) bg_button_pane_cp033

0xef91,	// (0x000b3d5f) phob2_cc_button_pane_g1

0xef9d,	// (0x000b3d6b) phob2_cc_button_pane_t1

0xefb2,	// (0x000b3d80) phob2_cc_button_pane_t2

0x0001,

0xfef9,	// (0x000b4cc7) phob2_cc_button_pane_t

0x935f,	// (0x000ae12d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x935f,	// (0x000ae12d) list_double_large_graphic_phob2_cc_pane

0x9371,	// (0x000ae13f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9371,	// (0x000ae13f) list_double_large_graphic_phob2_cc_pane_g1

0x937d,	// (0x000ae14b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x937d,	// (0x000ae14b) list_double_large_graphic_phob2_cc_pane_g2

0x9389,	// (0x000ae157) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9389,	// (0x000ae157) list_double_large_graphic_phob2_cc_pane_g3

0x9395,	// (0x000ae163) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9395,	// (0x000ae163) list_double_large_graphic_phob2_cc_pane_g4

0x93a1,	// (0x000ae16f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x93a1,	// (0x000ae16f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfefe,	// (0x000b4ccc) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfefe,	// (0x000b4ccc) list_double_large_graphic_phob2_cc_pane_g

0x93ad,	// (0x000ae17b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x93ad,	// (0x000ae17b) list_double_large_graphic_phob2_cc_pane_t1

0x93d6,	// (0x000ae1a4) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x93d6,	// (0x000ae1a4) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff09,	// (0x000b4cd7) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff09,	// (0x000b4cd7) list_double_large_graphic_phob2_cc_pane_t

0xefc4,	// (0x000b3d92) list_highlight_pane_cp025_ParamLimits

0xefc4,	// (0x000b3d92) list_highlight_pane_cp025

0xbbe5,	// (0x000b09b3) bg_button_pane_cp033_ParamLimits

0xef91,	// (0x000b3d5f) phob2_cc_button_pane_g1_ParamLimits

0xef9d,	// (0x000b3d6b) phob2_cc_button_pane_t1_ParamLimits

0xefb2,	// (0x000b3d80) phob2_cc_button_pane_t2_ParamLimits

0xfef9,	// (0x000b4cc7) phob2_cc_button_pane_t_ParamLimits

0x04aa,	// (0x000a5278) popup_wgtman_window

0xcc16,	// (0x000b19e4) scroll_pane_cp038

0x8d4f,	// (0x000adb1d) wgtman_btn_pane_cp_01_ParamLimits

0x8d4f,	// (0x000adb1d) wgtman_btn_pane_cp_01

0xefd2,	// (0x000b3da0) wgtman_content_pane

0xefdb,	// (0x000b3da9) wgtman_heading_pane

0xe685,	// (0x000b3453) bg_heading_pane_cp02

0xefe4,	// (0x000b3db2) wgtman_heading_pane_g1

0xefec,	// (0x000b3dba) wgtman_heading_pane_t1

0xeffa,	// (0x000b3dc8) scroll_pane_cp036

0xf002,	// (0x000b3dd0) wgtman_list_pane

0xf00a,	// (0x000b3dd8) wgtman_list_pane_t1_ParamLimits

0xf00a,	// (0x000b3dd8) wgtman_list_pane_t1

0xa086,	// (0x000aee54) cam4_grid_pane

0x6833,	// (0x000ab601) bg_button_pane_cp015_ParamLimits

0x6845,	// (0x000ab613) bg_button_pane_cp016_ParamLimits

0x6858,	// (0x000ab626) bg_button_pane_cp017_ParamLimits

0x68b0,	// (0x000ab67e) popup_vitu2_query_window_g3_ParamLimits

0x68b0,	// (0x000ab67e) popup_vitu2_query_window_g3

0x696d,	// (0x000ab73b) popup_vitu2_query_window_t6_ParamLimits

0x696d,	// (0x000ab73b) popup_vitu2_query_window_t6

0x6998,	// (0x000ab766) popup_vitu2_query_window_t7_ParamLimits

0x6998,	// (0x000ab766) popup_vitu2_query_window_t7

0xca6c,	// (0x000b183a) cam4_grid_pane_g1

0xca75,	// (0x000b1843) cam4_grid_pane_g2

0xf024,	// (0x000b3df2) cam4_grid_pane_g3

0xf02d,	// (0x000b3dfb) cam4_grid_pane_g4

0x0003,

0xff0e,	// (0x000b4cdc) cam4_grid_pane_g

0x14c8,	// (0x000a6296) aid_placing_vt_slider_lsc_ParamLimits

0x17d3,	// (0x000a65a1) vidtel_button_pane_ParamLimits

0x17d3,	// (0x000a65a1) vidtel_button_pane

0xf038,	// (0x000b3e06) bg_button_pane_cp034

0x93ff,	// (0x000ae1cd) vidtel_button_pane_g1

0xf042,	// (0x000b3e10) vidtel_button_pane_t1

0xcd3c,	// (0x000b1b0a) aid_size_vtel_slider_touch

0xcdf5,	// (0x000b1bc3) scroll_pane_cp039

0xd6b7,	// (0x000b2485) ncim_query_button_pane_cp01_ParamLimits

0xd6d6,	// (0x000b24a4) ncimui_query_pane_g1_ParamLimits

0xbbe5,	// (0x000b09b3) input_focus_pane_cp012_ParamLimits

0xd6fb,	// (0x000b24c9) ncim_query_entry_pane_t1_ParamLimits

0xcdf5,	// (0x000b1bc3) scroll_pane_cp039_ParamLimits

0xa670,	// (0x000af43e) navi_pane_bcale_mc_g1

0xa678,	// (0x000af446) navi_pane_bcale_mc_t1

0xdc54,	// (0x000b2a22) main_sp_fs_email_pane_g1

0xdc60,	// (0x000b2a2e) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000b4ab3) main_sp_fs_email_pane_g

0xe0c2,	// (0x000b2e90) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe0c2,	// (0x000b2e90) list_single_cale_mrui_row_pane_g3

0x8942,	// (0x000ad710) list_single_recal_day_pane_g5_event_pane

0xe2ab,	// (0x000b3079) list_single_recal_day_pane_g7

0xf050,	// (0x000b3e1e) list_recal_day_event_pane_cp01

0xf059,	// (0x000b3e27) list_recal_vselct_arw_lo_pane_cp01

0xf061,	// (0x000b3e2f) list_recal_vselct_arw_up_pane_cp01

0xf069,	// (0x000b3e37) list_recal_vselct_pane_cp01

0xcd5e,	// (0x000b1b2c) list_recal_day_event_pane_cp01_g1

0xf073,	// (0x000b3e41) list_recal_day_event_pane_cp01_t1

0xe2b3,	// (0x000b3081) list_single_recal_day_pane_t1_ParamLimits

0xe2c5,	// (0x000b3093) list_single_recal_day_pane_t2_ParamLimits

0x0010,	// (0x000a4dde) list_single_recal_day_pane_t_ParamLimits

0xecfd,	// (0x000b3acb) bg_notes_pane_ParamLimits

0xeda0,	// (0x000b3b6e) list_notes_pane_ParamLimits

0x07f3,	// (0x000a55c1) scroll_pane_cp06_ParamLimits

0xedc2,	// (0x000b3b90) main_notes_pane_ParamLimits

0xe685,	// (0x000b3453) main_welc_pane

0x9407,	// (0x000ae1d5) main_welc_body_pane_ParamLimits

0x9407,	// (0x000ae1d5) main_welc_body_pane

0x9425,	// (0x000ae1f3) main_welc_opti_pane_ParamLimits

0x9425,	// (0x000ae1f3) main_welc_opti_pane

0x946a,	// (0x000ae238) main_welc_pane_t1_ParamLimits

0x946a,	// (0x000ae238) main_welc_pane_t1

0x9488,	// (0x000ae256) main_welc_body_row_pane_ParamLimits

0x9488,	// (0x000ae256) main_welc_body_row_pane

0xf081,	// (0x000b3e4f) main_welc_opti_row_pane_ParamLimits

0xf081,	// (0x000b3e4f) main_welc_opti_row_pane

0xf08f,	// (0x000b3e5d) main_welc_opti_row_pane_g1

0x949c,	// (0x000ae26a) main_welc_opti_row_pane_t1

0xf097,	// (0x000b3e65) main_welc_body_row_pane_t1

0xe540,	// (0x000b330e) popup_notif_wgt_heading_pane

0xe55a,	// (0x000b3328) aid_size_list_notif_wgt_del_ParamLimits

0xe567,	// (0x000b3335) list_notif_wgt_row_pane_g1_ParamLimits

0xe573,	// (0x000b3341) list_notif_wgt_row_pane_g2_ParamLimits

0xe587,	// (0x000b3355) list_notif_wgt_row_pane_g3_ParamLimits

0x0077,	// (0x000a4e45) list_notif_wgt_row_pane_g_ParamLimits

0xe594,	// (0x000b3362) list_notif_wgt_row_pane_t1_ParamLimits

0xe5aa,	// (0x000b3378) list_notif_wgt_row_pane_t2_ParamLimits

0xe5bc,	// (0x000b338a) list_notif_wgt_row_pane_t3_ParamLimits

0x007e,	// (0x000a4e4c) list_notif_wgt_row_pane_t_ParamLimits

0x8de8,	// (0x000adbb6) listrow_wgtman_pane_g1_ParamLimits

0x8df5,	// (0x000adbc3) listrow_wgtman_pane_g2_ParamLimits

0xfe93,	// (0x000b4c61) listrow_wgtman_pane_g_ParamLimits

0x8e13,	// (0x000adbe1) listrow_wgtman_pane_t1_ParamLimits

0x8e2b,	// (0x000adbf9) listrow_wgtman_pane_t2_ParamLimits

0xfe98,	// (0x000b4c66) listrow_wgtman_pane_t_ParamLimits

0x8e51,	// (0x000adc1f) wait_bar_pane_cp09_ParamLimits

0xe685,	// (0x000b3453) bg_popup_heading_pane_cp02

0xf0a6,	// (0x000b3e74) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x000b3e7c) popup_notif_wgt_heading_pane_t1

0xe685,	// (0x000b3453) main_vids_pane

0xe685,	// (0x000b3453) vids_listscroll_pane

0x94ab,	// (0x000ae279) scroll_pane_cp040

0xe685,	// (0x000b3453) vids_list_pane

0x94b6,	// (0x000ae284) vids_list_double_pane_ParamLimits

0x94b6,	// (0x000ae284) vids_list_double_pane

0x94c7,	// (0x000ae295) vids_list_double_pane_g1

0x94d0,	// (0x000ae29e) vids_list_double_pane_t1

0x94e0,	// (0x000ae2ae) vids_list_double_pane_t2

0x0001,

0xff1c,	// (0x000b4cea) vids_list_double_pane_t

0x9534,	// (0x000ae302) main_ncimui_pane_ParamLimits

0x75b1,	// (0x000ac37f) main_ncimui_pane_g1_ParamLimits

0x75bd,	// (0x000ac38b) main_ncimui_pane_g2_ParamLimits

0x75bd,	// (0x000ac38b) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x000b49b8) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x000b49b8) main_ncimui_pane_g

0x9440,	// (0x000ae20e) main_welc_pane_g1_ParamLimits

0x9440,	// (0x000ae20e) main_welc_pane_g1

0x9455,	// (0x000ae223) main_welc_pane_g2_ParamLimits

0x9455,	// (0x000ae223) main_welc_pane_g2

0x0001,

0xff17,	// (0x000b4ce5) main_welc_pane_g_ParamLimits

0xff17,	// (0x000b4ce5) main_welc_pane_g

0xecfd,	// (0x000b3acb) listscroll_mce_pane_ParamLimits

0xa7c5,	// (0x000af593) wait_bar_pane_cp10

0xbbcb,	// (0x000b0999) main_cale_day_pane_ParamLimits

0xbbcb,	// (0x000b0999) main_cale_week_pane_ParamLimits

0xecfd,	// (0x000b3acb) main_messa_pane_ParamLimits

0x4ec2,	// (0x000a9c90) main_clock2_btn_pane_ParamLimits

0x4ec2,	// (0x000a9c90) main_clock2_btn_pane

0xc445,	// (0x000b1213) main_clock2_btn_pane_cp01_ParamLimits

0xc445,	// (0x000b1213) main_clock2_btn_pane_cp01

0xe04e,	// (0x000b2e1c) list_cale_mrui_pane_ParamLimits

0xe5f2,	// (0x000b33c0) main_cf0_pane_g2

0x0001,

0x0085,	// (0x000a4e53) main_cf0_pane_g

0x9024,	// (0x000addf2) area_left_week_number_pane_ParamLimits

0x9030,	// (0x000addfe) area_top_day_name_pane_ParamLimits

0x9043,	// (0x000ade11) frame_month_view_pane_ParamLimits

0xef3a,	// (0x000b3d08) grid_month_view_pane_ParamLimits

0xef48,	// (0x000b3d16) frm_month_g1_ParamLimits

0x90c4,	// (0x000ade92) frm_month_g2_ParamLimits

0x90d7,	// (0x000adea5) frm_month_g3_ParamLimits

0x90ea,	// (0x000adeb8) frm_month_g4_ParamLimits

0x90fd,	// (0x000adecb) frm_month_g5_ParamLimits

0x9110,	// (0x000adede) frm_month_g6_ParamLimits

0x9123,	// (0x000adef1) frm_month_g7_ParamLimits

0xef55,	// (0x000b3d23) frm_month_g8_ParamLimits

0x9136,	// (0x000adf04) frm_month_g9_ParamLimits

0x9146,	// (0x000adf14) frm_month_g10_ParamLimits

0x9156,	// (0x000adf24) frm_month_g11_ParamLimits

0x9166,	// (0x000adf34) frm_month_g12_ParamLimits

0x9178,	// (0x000adf46) frm_month_g13_ParamLimits

0x918a,	// (0x000adf58) frm_month_g14_ParamLimits

0x919e,	// (0x000adf6c) frm_month_g15_ParamLimits

0x91b2,	// (0x000adf80) frm_month_g16_ParamLimits

0xfec2,	// (0x000b4c90) frm_month_g_ParamLimits

0xef62,	// (0x000b3d30) cell_top_day_name_pane_t1_ParamLimits

0x91c6,	// (0x000adf94) cell_area_left_week_number_pane_g1_ParamLimits

0x91d2,	// (0x000adfa0) cell_area_left_week_number_pane_t1_ParamLimits

0xc265,	// (0x000b1033) cell_month_view_pane_g1_ParamLimits

0x91e5,	// (0x000adfb3) cell_month_view_pane_t1_ParamLimits

0xecf5,	// (0x000b3ac3) main_clock2_btn_pane_g1

0xf0bc,	// (0x000b3e8a) main_clock2_btn_pane_t1

0xbbe5,	// (0x000b09b3) listscroll_cmail_pane_ParamLimits

0xdc54,	// (0x000b2a22) main_sp_fs_email_pane_g1_ParamLimits

0xdc60,	// (0x000b2a2e) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000b4ab3) main_sp_fs_email_pane_g_ParamLimits

0xe212,	// (0x000b2fe0) list_recal_day_pane_ParamLimits

0xe223,	// (0x000b2ff1) mian_recal_day_pane_t1

0x80c9,	// (0x000ace97) list_single_dyc_row_text_pane_t4_ParamLimits

0x80c9,	// (0x000ace97) list_single_dyc_row_text_pane_t4

0x8112,	// (0x000acee0) list_single_dyc_row_text_pane_t5_ParamLimits

0x8112,	// (0x000acee0) list_single_dyc_row_text_pane_t5

0xdd06,	// (0x000b2ad4) list_single_dyc_row_text_pane_t6_ParamLimits

0xdd06,	// (0x000b2ad4) list_single_dyc_row_text_pane_t6

0x249f,	// (0x000a726d) aid_mgn_list_cale_time_pane

0x9534,	// (0x000ae302) main_gallery2_pane_ParamLimits

0xc45b,	// (0x000b1229) main_clock2_pane_cp01_t1

0xc46b,	// (0x000b1239) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x000b4592) main_clock2_pane_cp01_t

0x0bad,	// (0x000a597b) cale_week_scroll_pane_g16_ParamLimits

0x0bad,	// (0x000a597b) cale_week_scroll_pane_g16

0x96ee,	// (0x000ae4bc) vorec_slider_pane
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
