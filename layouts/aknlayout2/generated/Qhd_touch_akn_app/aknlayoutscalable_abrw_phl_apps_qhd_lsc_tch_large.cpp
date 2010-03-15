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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0009c17f };

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
0x03de,	// (0x0009c55d) Screen

0x03ea,	// (0x0009c569) application_window

0x0430,	// (0x0009c5af) area_bottom_pane_ParamLimits

0x0430,	// (0x0009c5af) area_bottom_pane

0x0469,	// (0x0009c5e8) area_top_pane_ParamLimits

0x0469,	// (0x0009c5e8) area_top_pane

0xa4d5,	// (0x000a6654) call_video_uplink_pane_ParamLimits

0xa4d5,	// (0x000a6654) call_video_uplink_pane

0x04f7,	// (0x0009c676) main_pane_ParamLimits

0x04f7,	// (0x0009c676) main_pane

0xe286,	// (0x000aa405) context_pane

0x3c72,	// (0x0009fdf1) navi_pane

0x3c9a,	// (0x0009fe19) popup_cale_events_window_ParamLimits

0x3c9a,	// (0x0009fe19) popup_cale_events_window

0xe299,	// (0x000aa418) popup_mup_playback_window

0x3cb2,	// (0x0009fe31) signal_pane

0xb3bf,	// (0x000a753e) main_browser_pane

0xca4a,	// (0x000a8bc9) main_burst_pane

0x39c0,	// (0x0009fb3f) main_calc_pane

0xe26c,	// (0x000aa3eb) main_cale_day_pane

0x39d4,	// (0x0009fb53) main_cale_month_pane

0xe26c,	// (0x000aa3eb) main_cale_week_pane

0xca4a,	// (0x000a8bc9) main_call_pane

0xb09f,	// (0x000a721e) main_call_poc_pane

0xca4a,	// (0x000a8bc9) main_camera_pane

0xca4a,	// (0x000a8bc9) main_chi_dic_pane

0xc8bf,	// (0x000a8a3e) main_clock_pane

0xb09f,	// (0x000a721e) main_fmradio_pane

0xca4a,	// (0x000a8bc9) main_graph_messa_pane

0xb09f,	// (0x000a721e) main_help_pane

0xb3bf,	// (0x000a753e) main_im_pane

0xb2fa,	// (0x000a7479) main_image_pane_ParamLimits

0xb2fa,	// (0x000a7479) main_image_pane

0xb09f,	// (0x000a721e) main_location2_pane

0xca4a,	// (0x000a8bc9) main_location_pane

0xb2fa,	// (0x000a7479) main_messa_pane

0xb09f,	// (0x000a721e) main_mp2_pane

0xca4a,	// (0x000a8bc9) main_mp_pane

0xb09f,	// (0x000a721e) main_msg_pane

0xb09f,	// (0x000a721e) main_mup_eq_pane

0xb09f,	// (0x000a721e) main_mup_pane

0xb3bf,	// (0x000a753e) main_notes_pane

0xb09f,	// (0x000a721e) main_pec_pane

0xb09f,	// (0x000a721e) main_phob_pane

0xb09f,	// (0x000a721e) main_pinb_pane

0xb09f,	// (0x000a721e) main_postcard_pane

0xb09f,	// (0x000a721e) main_qdial_pane

0xca4a,	// (0x000a8bc9) main_skin_pane

0xb09f,	// (0x000a721e) main_smil2_pane

0xca4a,	// (0x000a8bc9) main_smil_pane

0xca4a,	// (0x000a8bc9) main_video_pane

0xca4a,	// (0x000a8bc9) main_video_tele_pane

0xb2fa,	// (0x000a7479) main_viewer_pane_ParamLimits

0xb2fa,	// (0x000a7479) main_viewer_pane

0xca4a,	// (0x000a8bc9) main_vorec_pane

0x3a26,	// (0x0009fba5) popup_blid_sat_info_window_ParamLimits

0x3a26,	// (0x0009fba5) popup_blid_sat_info_window

0x3a7e,	// (0x0009fbfd) popup_dyc_status_message_window_ParamLimits

0x3a7e,	// (0x0009fbfd) popup_dyc_status_message_window

0x3a98,	// (0x0009fc17) popup_grid_large_graphic_window_ParamLimits

0x3a98,	// (0x0009fc17) popup_grid_large_graphic_window

0x3b54,	// (0x0009fcd3) popup_loc_request_window_ParamLimits

0x3b54,	// (0x0009fcd3) popup_loc_request_window

0x3c4a,	// (0x0009fdc9) popup_wml_address_window_ParamLimits

0x3c4a,	// (0x0009fdc9) popup_wml_address_window

0x37fa,	// (0x0009f979) call_muted_g1

0x34af,	// (0x0009f62e) popup_call_audio_conf_window_ParamLimits

0x34af,	// (0x0009f62e) popup_call_audio_conf_window

0x380e,	// (0x0009f98d) popup_call_audio_first_window_ParamLimits

0x380e,	// (0x0009f98d) popup_call_audio_first_window

0x3884,	// (0x0009fa03) popup_call_audio_in_window_ParamLimits

0x3884,	// (0x0009fa03) popup_call_audio_in_window

0x38c0,	// (0x0009fa3f) popup_call_audio_out_window_ParamLimits

0x38c0,	// (0x0009fa3f) popup_call_audio_out_window

0x38fa,	// (0x0009fa79) popup_call_audio_second_window_ParamLimits

0x38fa,	// (0x0009fa79) popup_call_audio_second_window

0x3950,	// (0x0009facf) popup_call_audio_wait_window_ParamLimits

0x3950,	// (0x0009facf) popup_call_audio_wait_window

0x3985,	// (0x0009fb04) popup_number_entry_window_ParamLimits

0x3985,	// (0x0009fb04) popup_number_entry_window

0x067f,	// (0x0009c7fe) bg_popup_call_pane_cp05_ParamLimits

0x067f,	// (0x0009c7fe) bg_popup_call_pane_cp05

0xa50b,	// (0x000a668a) popup_number_entry_window_t1

0xa51e,	// (0x000a669d) popup_number_entry_window_t2

0xa530,	// (0x000a66af) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x000ab252) popup_number_entry_window_t

0xa542,	// (0x000a66c1) text_title_cp2

0xa555,	// (0x000a66d4) bg_popup_call_pane_cp_ParamLimits

0xa555,	// (0x000a66d4) bg_popup_call_pane_cp

0xa563,	// (0x000a66e2) call_thumbnail_pane

0xa56b,	// (0x000a66ea) popup_call_audio_in_window_g1_ParamLimits

0xa56b,	// (0x000a66ea) popup_call_audio_in_window_g1

0xa577,	// (0x000a66f6) popup_call_audio_in_window_g2_ParamLimits

0xa577,	// (0x000a66f6) popup_call_audio_in_window_g2

0xa583,	// (0x000a6702) popup_call_audio_in_window_g3_ParamLimits

0xa583,	// (0x000a6702) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x000ab25b) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x000ab25b) popup_call_audio_in_window_g

0xa58f,	// (0x000a670e) popup_call_audio_in_window_t1_ParamLimits

0xa58f,	// (0x000a670e) popup_call_audio_in_window_t1

0xa5ab,	// (0x000a672a) popup_call_audio_in_window_t2_ParamLimits

0xa5ab,	// (0x000a672a) popup_call_audio_in_window_t2

0xa5c7,	// (0x000a6746) popup_call_audio_in_window_t3_ParamLimits

0xa5c7,	// (0x000a6746) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x000ab262) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x000ab262) popup_call_audio_in_window_t

0xa555,	// (0x000a66d4) bg_popup_call_pane_cp01_ParamLimits

0xa555,	// (0x000a66d4) bg_popup_call_pane_cp01

0xa563,	// (0x000a66e2) call_thumbnail_pane_cp02

0xa5da,	// (0x000a6759) call_type_pane_cp022

0xa5e2,	// (0x000a6761) popup_call_audio_out_window_g1_ParamLimits

0xa5e2,	// (0x000a6761) popup_call_audio_out_window_g1

0xa5f4,	// (0x000a6773) popup_call_audio_out_window_g2_ParamLimits

0xa5f4,	// (0x000a6773) popup_call_audio_out_window_g2

0xa600,	// (0x000a677f) popup_call_audio_out_window_g3_ParamLimits

0xa600,	// (0x000a677f) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x000ab269) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x000ab269) popup_call_audio_out_window_g

0xa612,	// (0x000a6791) popup_call_audio_out_window_t1_ParamLimits

0xa612,	// (0x000a6791) popup_call_audio_out_window_t1

0xa62a,	// (0x000a67a9) popup_call_audio_out_window_t2_ParamLimits

0xa62a,	// (0x000a67a9) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x000ab270) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x000ab270) popup_call_audio_out_window_t

0xa63f,	// (0x000a67be) bg_popup_call_pane_ParamLimits

0xa63f,	// (0x000a67be) bg_popup_call_pane

0x06d3,	// (0x0009c852) call_thumbnail_pane_cp_ParamLimits

0x06d3,	// (0x0009c852) call_thumbnail_pane_cp

0xa6c3,	// (0x000a6842) call_type_pane_cp01_ParamLimits

0xa6c3,	// (0x000a6842) call_type_pane_cp01

0xa707,	// (0x000a6886) popup_call_audio_first_window_g1_ParamLimits

0xa707,	// (0x000a6886) popup_call_audio_first_window_g1

0xa753,	// (0x000a68d2) popup_call_audio_first_window_g2_ParamLimits

0xa753,	// (0x000a68d2) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x000ab275) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x000ab275) popup_call_audio_first_window_g

0xa797,	// (0x000a6916) popup_call_audio_first_window_t1_ParamLimits

0xa797,	// (0x000a6916) popup_call_audio_first_window_t1

0xa843,	// (0x000a69c2) popup_call_audio_first_window_t4_ParamLimits

0xa843,	// (0x000a69c2) popup_call_audio_first_window_t4

0xb070,	// (0x000a71ef) popup_call_audio_first_window_t5_ParamLimits

0xb070,	// (0x000a71ef) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x000ab27a) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x000ab27a) popup_call_audio_first_window_t

0xb09f,	// (0x000a721e) bg_popup_call_pane_cp02

0xb0a9,	// (0x000a7228) call_type_pane_cp023

0xb0b1,	// (0x000a7230) popup_call_audio_wait_window_g1

0xb0b9,	// (0x000a7238) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x000ab281) popup_call_audio_wait_window_g

0xb0c1,	// (0x000a7240) popup_call_audio_wait_window_t3

0xb0cf,	// (0x000a724e) bg_popup_call_pane_cp03_ParamLimits

0xb0cf,	// (0x000a724e) bg_popup_call_pane_cp03

0xb12f,	// (0x000a72ae) call_thumbnail_pane_cp011_ParamLimits

0xb12f,	// (0x000a72ae) call_thumbnail_pane_cp011

0xb13b,	// (0x000a72ba) call_type_pane_cp034_ParamLimits

0xb13b,	// (0x000a72ba) call_type_pane_cp034

0xb177,	// (0x000a72f6) popup_call_audio_second_window_g1_ParamLimits

0xb177,	// (0x000a72f6) popup_call_audio_second_window_g1

0xb1b3,	// (0x000a7332) popup_call_audio_second_window_g2_ParamLimits

0xb1b3,	// (0x000a7332) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x000ab286) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x000ab286) popup_call_audio_second_window_g

0xb1ef,	// (0x000a736e) popup_call_audio_second_window_t1_ParamLimits

0xb1ef,	// (0x000a736e) popup_call_audio_second_window_t1

0xb270,	// (0x000a73ef) popup_call_audio_second_window_t2_ParamLimits

0xb270,	// (0x000a73ef) popup_call_audio_second_window_t2

0xb2a6,	// (0x000a7425) popup_call_audio_second_window_t3_ParamLimits

0xb2a6,	// (0x000a7425) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x000ab28b) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x000ab28b) popup_call_audio_second_window_t

0xb09f,	// (0x000a721e) bg_popup_call_pane_cp04

0xb2dc,	// (0x000a745b) list_conf_pane

0xb2e4,	// (0x000a7463) popup_call_audio_conf_window_t1

0xb2f2,	// (0x000a7471) call_thumbnail_pane_g1

0xb2fa,	// (0x000a7479) bg_pinb_pane_ParamLimits

0xb2fa,	// (0x000a7479) bg_pinb_pane

0xb308,	// (0x000a7487) find_pinb_pane

0xb311,	// (0x000a7490) listscroll_pinb_pane_ParamLimits

0xb311,	// (0x000a7490) listscroll_pinb_pane

0xb320,	// (0x000a749f) pinb_bg_pane_g1

0x06f7,	// (0x0009c876) pinb_bg_pane_g2

0x0703,	// (0x0009c882) pinb_bg_pane_g3

0x070f,	// (0x0009c88e) pinb_bg_pane_g4

0x071b,	// (0x0009c89a) pinb_bg_pane_g5

0x0727,	// (0x0009c8a6) pinb_bg_pane_g6

0x0732,	// (0x0009c8b1) pinb_bg_pane_g7

0x073d,	// (0x0009c8bc) pinb_bg_pane_g8

0x0748,	// (0x0009c8c7) pinb_bg_pane_g9

0x0752,	// (0x0009c8d1) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x000ab292) pinb_bg_pane_g

0x076f,	// (0x0009c8ee) grid_pinb_pane

0x0778,	// (0x0009c8f7) list_pinb_pane

0x0781,	// (0x0009c900) scroll_pane_cp01_ParamLimits

0x0781,	// (0x0009c900) scroll_pane_cp01

0xb32a,	// (0x000a74a9) find_pinb_pane_g1_ParamLimits

0xb32a,	// (0x000a74a9) find_pinb_pane_g1

0xb342,	// (0x000a74c1) find_pinb_pane_t1

0xb354,	// (0x000a74d3) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x000ab2ac) find_pinb_pane_t

0xb369,	// (0x000a74e8) input_focus_pane_cp01_ParamLimits

0xb369,	// (0x000a74e8) input_focus_pane_cp01

0x0793,	// (0x0009c912) cell_pinb_pane_ParamLimits

0x0793,	// (0x0009c912) cell_pinb_pane

0x07bc,	// (0x0009c93b) cell_pinb_pane_g1_ParamLimits

0x07bc,	// (0x0009c93b) cell_pinb_pane_g1

0x07cc,	// (0x0009c94b) cell_pinb_pane_g2_ParamLimits

0x07cc,	// (0x0009c94b) cell_pinb_pane_g2

0xb375,	// (0x000a74f4) cell_pinb_pane_g3_ParamLimits

0xb375,	// (0x000a74f4) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x000ab2b1) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x000ab2b1) cell_pinb_pane_g

0xb09f,	// (0x000a721e) grid_highlight_pane_cp01

0x07d8,	// (0x0009c957) list_pinb_item_pane_ParamLimits

0x07d8,	// (0x0009c957) list_pinb_item_pane

0xb09f,	// (0x000a721e) list_highlight_pane_cp02

0x07ea,	// (0x0009c969) list_pinb_item_pane_g1_ParamLimits

0x07ea,	// (0x0009c969) list_pinb_item_pane_g1

0x07f7,	// (0x0009c976) list_pinb_item_pane_g2_ParamLimits

0x07f7,	// (0x0009c976) list_pinb_item_pane_g2

0x0803,	// (0x0009c982) list_pinb_item_pane_g3_ParamLimits

0x0803,	// (0x0009c982) list_pinb_item_pane_g3

0x0814,	// (0x0009c993) list_pinb_item_pane_g4_ParamLimits

0x0814,	// (0x0009c993) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x000ab2b8) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x000ab2b8) list_pinb_item_pane_g

0x0820,	// (0x0009c99f) list_pinb_item_pane_t1_ParamLimits

0x0820,	// (0x0009c99f) list_pinb_item_pane_t1

0x0855,	// (0x0009c9d4) calc_display_pane

0x087d,	// (0x0009c9fc) calc_paper_pane

0x08a0,	// (0x0009ca1f) grid_calc_pane

0xb09f,	// (0x000a721e) bg_list_pane_cp01

0x08ce,	// (0x0009ca4d) clock_g1

0x08d6,	// (0x0009ca55) clock_g2

0x0001,

0xf142,	// (0x000ab2c1) clock_g

0x08de,	// (0x0009ca5d) clock_t1_ParamLimits

0x08de,	// (0x0009ca5d) clock_t1

0x08f3,	// (0x0009ca72) clock_t2_ParamLimits

0x08f3,	// (0x0009ca72) clock_t2

0x0905,	// (0x0009ca84) clock_t3_ParamLimits

0x0905,	// (0x0009ca84) clock_t3

0x0917,	// (0x0009ca96) clock_t4_ParamLimits

0x0917,	// (0x0009ca96) clock_t4

0x0929,	// (0x0009caa8) clock_t5_ParamLimits

0x0929,	// (0x0009caa8) clock_t5

0x093e,	// (0x0009cabd) clock_t6_ParamLimits

0x093e,	// (0x0009cabd) clock_t6

0x0950,	// (0x0009cacf) clock_t7_ParamLimits

0x0950,	// (0x0009cacf) clock_t7

0x0962,	// (0x0009cae1) clock_t8_ParamLimits

0x0962,	// (0x0009cae1) clock_t8

0x0976,	// (0x0009caf5) clock_t9_ParamLimits

0x0976,	// (0x0009caf5) clock_t9

0x0008,

0xf147,	// (0x000ab2c6) clock_t_ParamLimits

0xf147,	// (0x000ab2c6) clock_t

0xb381,	// (0x000a7500) popup_clock_analogue_window_cp02

0xb381,	// (0x000a7500) popup_clock_digital_window_cp01

0xb389,	// (0x000a7508) listscroll_help_pane

0xb09f,	// (0x000a721e) phob_pre_status_pane

0xb393,	// (0x000a7512) grid_qdial_pane

0xb2fa,	// (0x000a7479) listscroll_mce_pane

0xb2fa,	// (0x000a7479) bg_notes_pane

0xb39d,	// (0x000a751c) list_notes_pane

0x098a,	// (0x0009cb09) scroll_pane_cp06

0xb3ab,	// (0x000a752a) bg_calc_paper_pane

0xa8d7,	// (0x000a6a56) list_calc_pane

0xb3bf,	// (0x000a753e) bg_calc_display_pane

0x099e,	// (0x0009cb1d) calc_display_pane_t1

0x09b0,	// (0x0009cb2f) calc_display_pane_t2

0xa8f1,	// (0x000a6a70) calc_display_pane_t3

0x0002,

0xf15a,	// (0x000ab2d9) calc_display_pane_t

0x09c2,	// (0x0009cb41) cell_calc_pane_ParamLimits

0x09c2,	// (0x0009cb41) cell_calc_pane

0xb3cb,	// (0x000a754a) bg_calc_paper_pane_g1

0xb3d7,	// (0x000a7556) bg_calc_paper_pane_g2

0xb3e3,	// (0x000a7562) bg_calc_paper_pane_g3

0xb3ef,	// (0x000a756e) bg_calc_paper_pane_g4

0xb3fb,	// (0x000a757a) bg_calc_paper_pane_g5

0x09f7,	// (0x0009cb76) bg_calc_paper_pane_g6

0x0a06,	// (0x0009cb85) bg_calc_paper_pane_g7

0x0a15,	// (0x0009cb94) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x000ab2e0) bg_calc_paper_pane_g

0x0a28,	// (0x0009cba7) calc_bg_paper_pane_g9

0x0a3b,	// (0x0009cbba) list_calc_item_pane_ParamLimits

0x0a3b,	// (0x0009cbba) list_calc_item_pane

0xb407,	// (0x000a7586) list_calc_item_pane_g1

0xa903,	// (0x000a6a82) list_calc_item_pane_t1_ParamLimits

0xa903,	// (0x000a6a82) list_calc_item_pane_t1

0x0a50,	// (0x0009cbcf) list_calc_item_pane_t2_ParamLimits

0x0a50,	// (0x0009cbcf) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x000ab2f1) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x000ab2f1) list_calc_item_pane_t

0xb414,	// (0x000a7593) cell_calc_pane_g1

0xb41e,	// (0x000a759d) grid_highlight_pane_cp02

0x0a82,	// (0x0009cc01) bg_calc_display_pane_g1

0x0a8b,	// (0x0009cc0a) bg_calc_display_pane_g2

0x0a95,	// (0x0009cc14) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x000ab2fb) bg_calc_display_pane_g

0x0a9e,	// (0x0009cc1d) cell_qdial_pane_ParamLimits

0x0a9e,	// (0x0009cc1d) cell_qdial_pane

0x0ab2,	// (0x0009cc31) cell_qdial_pane_g1_ParamLimits

0x0ab2,	// (0x0009cc31) cell_qdial_pane_g1

0x0ac8,	// (0x0009cc47) cell_qdial_pane_g2_ParamLimits

0x0ac8,	// (0x0009cc47) cell_qdial_pane_g2

0xb440,	// (0x000a75bf) cell_qdial_pane_g3_ParamLimits

0xb440,	// (0x000a75bf) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x000ab302) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x000ab302) cell_qdial_pane_g

0x0aef,	// (0x0009cc6e) cell_qdial_pane_t1_ParamLimits

0x0aef,	// (0x0009cc6e) cell_qdial_pane_t1

0x0b07,	// (0x0009cc86) cell_qdial_pane_t2_ParamLimits

0x0b07,	// (0x0009cc86) cell_qdial_pane_t2

0x0b1a,	// (0x0009cc99) cell_qdial_pane_t3_ParamLimits

0x0b1a,	// (0x0009cc99) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x000ab30b) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x000ab30b) cell_qdial_pane_t

0xb09f,	// (0x000a721e) grid_highlight_pane_cp04

0xb44c,	// (0x000a75cb) thumbnail_qdial_pane_ParamLimits

0xb44c,	// (0x000a75cb) thumbnail_qdial_pane

0xb4a8,	// (0x000a7627) list_help_pane

0xb4b1,	// (0x000a7630) scroll_pane_cp02

0x0b2d,	// (0x0009ccac) help_list_pane_t1_ParamLimits

0x0b2d,	// (0x0009ccac) help_list_pane_t1

0xa915,	// (0x000a6a94) bg_notes_pane_g2

0xa91d,	// (0x000a6a9c) bg_notes_pane_g3

0xa925,	// (0x000a6aa4) notes_bg_pane_g1

0xa92d,	// (0x000a6aac) notes_bg_pane_g4

0xa935,	// (0x000a6ab4) notes_bg_pane_g5

0xa93d,	// (0x000a6abc) notes_bg_pane_g6

0xa945,	// (0x000a6ac4) notes_bg_pane_g7

0xa94d,	// (0x000a6acc) notes_bg_pane_g8

0xa955,	// (0x000a6ad4) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x000ab329) notes_bg_pane_g

0x0b4a,	// (0x0009ccc9) list_notes_text_pane_ParamLimits

0x0b4a,	// (0x0009ccc9) list_notes_text_pane

0xb4ba,	// (0x000a7639) list_notes_text_pane_g1

0x0b5f,	// (0x0009ccde) list_notes_text_pane_t1

0x0b6d,	// (0x0009ccec) listscroll_cale_week_pane

0x0b99,	// (0x0009cd18) bg_cale_heading_pane

0xb4dd,	// (0x000a765c) bg_cale_pane_cp01

0x0bb1,	// (0x0009cd30) cale_week_corner_pane

0x0bd0,	// (0x0009cd4f) cale_week_day_heading_pane

0x0bed,	// (0x0009cd6c) cale_week_scroll_pane_g1

0x0c00,	// (0x0009cd7f) cale_week_scroll_pane_g2

0x0c18,	// (0x0009cd97) cale_week_scroll_pane_g3

0x0c30,	// (0x0009cdaf) cale_week_scroll_pane_g4

0x0c48,	// (0x0009cdc7) cale_week_scroll_pane_g5

0x0c68,	// (0x0009cde7) cale_week_scroll_pane_g6

0x0c88,	// (0x0009ce07) cale_week_scroll_pane_g7

0x0ca8,	// (0x0009ce27) cale_week_scroll_pane_g8

0x0ccc,	// (0x0009ce4b) cale_week_scroll_pane_g9

0x0ce4,	// (0x0009ce63) cale_week_scroll_pane_g10

0x0cfc,	// (0x0009ce7b) cale_week_scroll_pane_g11

0x0d14,	// (0x0009ce93) cale_week_scroll_pane_g12

0x0d2c,	// (0x0009ceab) cale_week_scroll_pane_g13

0x0d2c,	// (0x0009ceab) cale_week_scroll_pane_g14

0x0d2c,	// (0x0009ceab) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x000ab338) cale_week_scroll_pane_g

0x0d44,	// (0x0009cec3) cale_week_time_pane

0x0d68,	// (0x0009cee7) grid_cale_week_pane

0xb50d,	// (0x000a768c) scroll_pane_cp08

0x0d8e,	// (0x0009cf0d) cell_cale_week_pane_ParamLimits

0x0d8e,	// (0x0009cf0d) cell_cale_week_pane

0x0e1c,	// (0x0009cf9b) cale_week_day_heading_pane_t1

0x0e61,	// (0x0009cfe0) cale_week_day_heading_pane_t2

0x0eab,	// (0x0009d02a) cale_week_day_heading_pane_t3

0x0ef5,	// (0x0009d074) cale_week_day_heading_pane_t4

0x0f3f,	// (0x0009d0be) cale_week_day_heading_pane_t5

0x0f91,	// (0x0009d110) cale_week_day_heading_pane_t6

0x0fe3,	// (0x0009d162) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x000ab357) cale_week_day_heading_pane_t

0xb52a,	// (0x000a76a9) bg_cale_side_pane

0x1028,	// (0x0009d1a7) cale_week_time_pane_t1

0x1042,	// (0x0009d1c1) cale_week_time_pane_t2

0x105c,	// (0x0009d1db) cale_week_time_pane_t3

0x1076,	// (0x0009d1f5) cale_week_time_pane_t4

0x1090,	// (0x0009d20f) cale_week_time_pane_t5

0x10aa,	// (0x0009d229) cale_week_time_pane_t6

0x10c4,	// (0x0009d243) cale_week_time_pane_t7

0x10de,	// (0x0009d25d) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x000ab366) cale_week_time_pane_t

0x10fe,	// (0x0009d27d) cell_cale_week_pane_g2

0x111d,	// (0x0009d29c) cell_cale_week_pane_g3_ParamLimits

0x111d,	// (0x0009d29c) cell_cale_week_pane_g3

0xb538,	// (0x000a76b7) grid_highlight_pane_cp07

0xb540,	// (0x000a76bf) listscroll_gms_pane

0xb54a,	// (0x000a76c9) grid_gms_pane

0xb553,	// (0x000a76d2) listscroll_gms_pane_g1

0xb55b,	// (0x000a76da) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x000ab377) listscroll_gms_pane_g

0x1135,	// (0x0009d2b4) scroll_pane_cp010

0x1140,	// (0x0009d2bf) cell_gms_pane_ParamLimits

0x1140,	// (0x0009d2bf) cell_gms_pane

0x1153,	// (0x0009d2d2) cell_gms_pane_g1

0xb563,	// (0x000a76e2) cell_gms_pane_g2

0xb56b,	// (0x000a76ea) cell_gms_pane_g3

0xb574,	// (0x000a76f3) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x000ab37c) cell_gms_pane_g

0xb57d,	// (0x000a76fc) grid_highlight_pane_cp09

0x37a4,	// (0x0009f923) phob_pre_status_pane_g1

0x37ac,	// (0x0009f92b) phob_pre_status_pane_g2

0x37b4,	// (0x0009f933) phob_pre_status_pane_g3

0x37bc,	// (0x0009f93b) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x000ab76b) phob_pre_status_pane_g

0x37cc,	// (0x0009f94b) phob_pre_status_pane_t1

0x37da,	// (0x0009f959) phob_pre_status_pane_t2

0x37ea,	// (0x0009f969) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x000ab776) phob_pre_status_pane_t

0xb09f,	// (0x000a721e) bg_list_pane_cp05

0x1163,	// (0x0009d2e2) grid_vorec_pane

0x116d,	// (0x0009d2ec) vorec_t1

0x117b,	// (0x0009d2fa) vorec_t2

0x1189,	// (0x0009d308) vorec_t3

0x1197,	// (0x0009d316) vorec_t4

0x11a5,	// (0x0009d324) vorec_t5

0xa95d,	// (0x000a6adc) vorec_t6

0x0006,

0xf206,	// (0x000ab385) vorec_t

0x11c1,	// (0x0009d340) wait_bar_pane_cp01

0x11c9,	// (0x0009d348) cell_vorec_pane_ParamLimits

0x11c9,	// (0x0009d348) cell_vorec_pane

0xb585,	// (0x000a7704) cell_vorec_pane_g1

0xb09f,	// (0x000a721e) grid_highlight_pane_cp05

0x11f1,	// (0x0009d370) cams_zoom_pane

0x1200,	// (0x0009d37f) image_vga_pane

0x121a,	// (0x0009d399) main_camera_pane_g1

0x122c,	// (0x0009d3ab) main_camera_pane_g2

0x123c,	// (0x0009d3bb) main_camera_pane_g3

0x124c,	// (0x0009d3cb) main_camera_pane_g4

0x125c,	// (0x0009d3db) main_camera_pane_g5

0x126c,	// (0x0009d3eb) main_camera_pane_g6

0x127e,	// (0x0009d3fd) main_camera_pane_g7

0x0007,

0xf215,	// (0x000ab394) main_camera_pane_g

0x128e,	// (0x0009d40d) main_camera_pane_t1

0x12a4,	// (0x0009d423) main_camera_pane_t2

0x0001,

0xf226,	// (0x000ab3a5) main_camera_pane_t

0x12de,	// (0x0009d45d) cams_zoom_pane_cp_ParamLimits

0x12de,	// (0x0009d45d) cams_zoom_pane_cp

0x1306,	// (0x0009d485) image_cif_pane_ParamLimits

0x1306,	// (0x0009d485) image_cif_pane

0x133c,	// (0x0009d4bb) image_subqcif_pane

0x1344,	// (0x0009d4c3) main_video_pane_g1_ParamLimits

0x1344,	// (0x0009d4c3) main_video_pane_g1

0x1368,	// (0x0009d4e7) main_video_pane_g2_ParamLimits

0x1368,	// (0x0009d4e7) main_video_pane_g2

0x139c,	// (0x0009d51b) main_video_pane_g3_ParamLimits

0x139c,	// (0x0009d51b) main_video_pane_g3

0x13ca,	// (0x0009d549) main_video_pane_g4_ParamLimits

0x13ca,	// (0x0009d549) main_video_pane_g4

0x13f8,	// (0x0009d577) main_video_pane_g5_ParamLimits

0x13f8,	// (0x0009d577) main_video_pane_g5

0xb59b,	// (0x000a771a) main_video_pane_g6_ParamLimits

0xb59b,	// (0x000a771a) main_video_pane_g6

0x0006,

0xf22b,	// (0x000ab3aa) main_video_pane_g_ParamLimits

0xf22b,	// (0x000ab3aa) main_video_pane_g

0x1421,	// (0x0009d5a0) main_video_pane_t1_ParamLimits

0x1421,	// (0x0009d5a0) main_video_pane_t1

0xb5b5,	// (0x000a7734) cams_zoom_pane_g1

0xb5be,	// (0x000a773d) cams_zoom_pane_g2

0xb5c7,	// (0x000a7746) cams_zoom_pane_g3

0xb5d0,	// (0x000a774f) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x000ab3b9) cams_zoom_pane_g

0x147e,	// (0x0009d5fd) grid_cams_pane

0x1498,	// (0x0009d617) linegrid_cams_pane

0x14ac,	// (0x0009d62b) cell_cams_pane_ParamLimits

0x14ac,	// (0x0009d62b) cell_cams_pane

0xb5d9,	// (0x000a7758) cams_burst_image_pane

0xb5e1,	// (0x000a7760) cell_cams_pane_g1

0xb09f,	// (0x000a721e) grid_highlight_pane_cp03

0xb414,	// (0x000a7593) mp_bg_pane_g1

0xb09f,	// (0x000a721e) bg_list_pane_cp03

0xe191,	// (0x000aa310) bg_mp_pane

0xe199,	// (0x000aa318) grid_mp_pane

0xe1a1,	// (0x000aa320) media_player_g1

0xe1a9,	// (0x000aa328) media_player_t1

0xe1b7,	// (0x000aa336) media_player_t2

0xe1c5,	// (0x000aa344) media_player_t3

0xe1d3,	// (0x000aa352) media_player_t4

0xe1e1,	// (0x000aa360) media_player_t5

0xe1ef,	// (0x000aa36e) media_player_t6

0xe1fd,	// (0x000aa37c) media_player_t7

0x0006,

0xf5d6,	// (0x000ab755) media_player_t

0xe20b,	// (0x000aa38a) wait_bar_pane_cp02

0xf5bb,	// (0x000ab73a) main_usb_pane_t

0x379b,	// (0x0009f91a) cell_mp_pane

0xb414,	// (0x000a7593) cell_mp_pane_g1

0xb09f,	// (0x000a721e) grid_highlight_pane_cp06

0xb5e9,	// (0x000a7768) grid_skin_colour_pane

0xb5f1,	// (0x000a7770) list_highlight_pane_cp03

0x15e2,	// (0x0009d761) skin_g1

0xb5f9,	// (0x000a7778) skin_t1

0xb608,	// (0x000a7787) skin_t2

0x0001,

0xf26f,	// (0x000ab3ee) skin_t

0x15ea,	// (0x0009d769) cell_skin_colour_pane_ParamLimits

0x15ea,	// (0x0009d769) cell_skin_colour_pane

0xb616,	// (0x000a7795) cell_skin_colour_pane_g1

0x1663,	// (0x0009d7e2) call_video_g1_ParamLimits

0x1663,	// (0x0009d7e2) call_video_g1

0x167f,	// (0x0009d7fe) call_video_g2_ParamLimits

0x167f,	// (0x0009d7fe) call_video_g2

0x0001,

0xf274,	// (0x000ab3f3) call_video_g_ParamLimits

0xf274,	// (0x000ab3f3) call_video_g

0x16d1,	// (0x0009d850) call_video_uplink_pane_cp1_ParamLimits

0x16d1,	// (0x0009d850) call_video_uplink_pane_cp1

0xb628,	// (0x000a77a7) call_video_uplink_pane_cp2

0x1770,	// (0x0009d8ef) video_down_crop_pane_ParamLimits

0x1770,	// (0x0009d8ef) video_down_crop_pane

0x1867,	// (0x0009d9e6) video_down_pane_ParamLimits

0x1867,	// (0x0009d9e6) video_down_pane

0xb630,	// (0x000a77af) video_down_subqcif_pane_ParamLimits

0xb630,	// (0x000a77af) video_down_subqcif_pane

0xb648,	// (0x000a77c7) video_down_subqcif_pane_cp_ParamLimits

0xb648,	// (0x000a77c7) video_down_subqcif_pane_cp

0xb66e,	// (0x000a77ed) im_reading_pane_ParamLimits

0xb66e,	// (0x000a77ed) im_reading_pane

0x1975,	// (0x0009daf4) im_writing_pane_ParamLimits

0x1975,	// (0x0009daf4) im_writing_pane

0x198b,	// (0x0009db0a) im_reading_pane_t1

0xb688,	// (0x000a7807) list_im_pane

0xb699,	// (0x000a7818) scroll_pane_cp07

0x19c4,	// (0x0009db43) im_writing_pane_t1_ParamLimits

0x19c4,	// (0x0009db43) im_writing_pane_t1

0xb6b2,	// (0x000a7831) im_writing_pane_t2_ParamLimits

0xb6b2,	// (0x000a7831) im_writing_pane_t2

0x0001,

0xf27e,	// (0x000ab3fd) im_writing_pane_t_ParamLimits

0xf27e,	// (0x000ab3fd) im_writing_pane_t

0xb09f,	// (0x000a721e) input_focus_pane_cp04

0xb09f,	// (0x000a721e) input_focus_pane_cp05

0x19d9,	// (0x0009db58) list_im_single_pane_ParamLimits

0x19d9,	// (0x0009db58) list_im_single_pane

0x19ed,	// (0x0009db6c) list_single_im_pane_t1

0x375b,	// (0x0009f8da) blid_accuracy_pane

0x3763,	// (0x0009f8e2) blid_compass_pane

0x376d,	// (0x0009f8ec) main_location_t1

0x377d,	// (0x0009f8fc) main_location_t2

0x378d,	// (0x0009f90c) main_location_t3

0x0002,

0xf5e5,	// (0x000ab764) main_location_t

0xb09f,	// (0x000a721e) aid_levels_location

0xb414,	// (0x000a7593) blid_accuracy_pane_g1

0xb414,	// (0x000a7593) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x000ab45f) blid_accuracy_pane_g

0xb6fa,	// (0x000a7879) wml_content_pane

0xb738,	// (0x000a78b7) wml_button_pane_ParamLimits

0xb738,	// (0x000a78b7) wml_button_pane

0x19fc,	// (0x0009db7b) wml_list_single_large_pane_ParamLimits

0x19fc,	// (0x0009db7b) wml_list_single_large_pane

0x1a11,	// (0x0009db90) wml_list_single_medium_pane_ParamLimits

0x1a11,	// (0x0009db90) wml_list_single_medium_pane

0x1a27,	// (0x0009dba6) wml_list_single_small_pane_ParamLimits

0x1a27,	// (0x0009dba6) wml_list_single_small_pane

0xb74c,	// (0x000a78cb) wml_selection_box_pane_ParamLimits

0xb74c,	// (0x000a78cb) wml_selection_box_pane

0xb75f,	// (0x000a78de) wml_list_single_pane_t1

0xb76e,	// (0x000a78ed) wml_list_single_medium_pane_t1

0xb77d,	// (0x000a78fc) wml_list_single_large_pane_t1

0xb78c,	// (0x000a790b) input_focus_pane_cp02_ParamLimits

0xb78c,	// (0x000a790b) input_focus_pane_cp02

0xb79f,	// (0x000a791e) wml_selection_box_pane_g1

0xb7a8,	// (0x000a7927) wml_selection_box_pane_t1_ParamLimits

0xb7a8,	// (0x000a7927) wml_selection_box_pane_t1

0xb2fa,	// (0x000a7479) bg_wml_button_pane_ParamLimits

0xb2fa,	// (0x000a7479) bg_wml_button_pane

0xb7c0,	// (0x000a793f) wml_button_pane_g1

0xb7c8,	// (0x000a7947) wml_button_pane_t1

0xb7c0,	// (0x000a793f) wml_button_bg_pane_g1

0xb7d8,	// (0x000a7957) wml_button_bg_pane_g2

0xb7e0,	// (0x000a795f) wml_button_bg_pane_g3

0xb7e8,	// (0x000a7967) wml_button_bg_pane_g4

0xb7f0,	// (0x000a796f) wml_button_bg_pane_g5

0xb7f8,	// (0x000a7977) wml_button_bg_pane_g6

0xb800,	// (0x000a797f) wml_button_bg_pane_g7

0xb808,	// (0x000a7987) wml_button_bg_pane_g8

0xb810,	// (0x000a798f) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x000ab402) wml_button_bg_pane_g

0x1a3f,	// (0x0009dbbe) bg_list_pane_cp02

0xb818,	// (0x000a7997) mce_header_pane_ParamLimits

0xb818,	// (0x000a7997) mce_header_pane

0xb82e,	// (0x000a79ad) mce_icon_pane

0xb82e,	// (0x000a79ad) mce_image_pane

0xb837,	// (0x000a79b6) mce_text_pane_ParamLimits

0xb837,	// (0x000a79b6) mce_text_pane

0x1a47,	// (0x0009dbc6) scroll_pane_cp03

0xb730,	// (0x000a78af) scroll_pane_cp04

0xb84a,	// (0x000a79c9) scroll_pane_cp05_ParamLimits

0xb84a,	// (0x000a79c9) scroll_pane_cp05

0x1a51,	// (0x0009dbd0) mce_header_field_pane_ParamLimits

0x1a51,	// (0x0009dbd0) mce_header_field_pane

0x1a68,	// (0x0009dbe7) mce_header_field_pane_2_ParamLimits

0x1a68,	// (0x0009dbe7) mce_header_field_pane_2

0x1a7e,	// (0x0009dbfd) mce_header_field_pane_3

0x1a86,	// (0x0009dc05) list_single_mce_message_pane_ParamLimits

0x1a86,	// (0x0009dc05) list_single_mce_message_pane

0x1a9b,	// (0x0009dc1a) list_single_mce_smart_pane_ParamLimits

0x1a9b,	// (0x0009dc1a) list_single_mce_smart_pane

0xb856,	// (0x000a79d5) input_focus_pane_cp03

0xb85f,	// (0x000a79de) list_header_data_pane

0x1abb,	// (0x0009dc3a) mce_header_field_pane_t1

0x1acb,	// (0x0009dc4a) list_single_mce_header_pane_ParamLimits

0x1acb,	// (0x0009dc4a) list_single_mce_header_pane

0xb867,	// (0x000a79e6) list_single_mce_header_pane_t1

0xb876,	// (0x000a79f5) list_single_mce_message_pane_g1

0xb87e,	// (0x000a79fd) list_single_mce_message_pane_t1

0x1b05,	// (0x0009dc84) bg_cale_heading_pane_cp01_ParamLimits

0x1b05,	// (0x0009dc84) bg_cale_heading_pane_cp01

0xb88c,	// (0x000a7a0b) bg_cale_pane_cp02_ParamLimits

0xb88c,	// (0x000a7a0b) bg_cale_pane_cp02

0x1b34,	// (0x0009dcb3) cale_month_corner_pane

0x1b53,	// (0x0009dcd2) cale_month_day_heading_pane_ParamLimits

0x1b53,	// (0x0009dcd2) cale_month_day_heading_pane

0x1b9a,	// (0x0009dd19) cale_month_pane_g1_ParamLimits

0x1b9a,	// (0x0009dd19) cale_month_pane_g1

0x1bbe,	// (0x0009dd3d) cale_month_pane_g2_ParamLimits

0x1bbe,	// (0x0009dd3d) cale_month_pane_g2

0x1bee,	// (0x0009dd6d) cale_month_pane_g3_ParamLimits

0x1bee,	// (0x0009dd6d) cale_month_pane_g3

0x1c2a,	// (0x0009dda9) cale_month_pane_g4_ParamLimits

0x1c2a,	// (0x0009dda9) cale_month_pane_g4

0x1c66,	// (0x0009dde5) cale_month_pane_g5_ParamLimits

0x1c66,	// (0x0009dde5) cale_month_pane_g5

0x1cae,	// (0x0009de2d) cale_month_pane_g6_ParamLimits

0x1cae,	// (0x0009de2d) cale_month_pane_g6

0x1cfa,	// (0x0009de79) cale_month_pane_g7_ParamLimits

0x1cfa,	// (0x0009de79) cale_month_pane_g7

0x1d4e,	// (0x0009decd) cale_month_pane_g8_ParamLimits

0x1d4e,	// (0x0009decd) cale_month_pane_g8

0x1da2,	// (0x0009df21) cale_month_pane_g9_ParamLimits

0x1da2,	// (0x0009df21) cale_month_pane_g9

0x1df4,	// (0x0009df73) cale_month_pane_g10_ParamLimits

0x1df4,	// (0x0009df73) cale_month_pane_g10

0x1e46,	// (0x0009dfc5) cale_month_pane_g11_ParamLimits

0x1e46,	// (0x0009dfc5) cale_month_pane_g11

0x1e98,	// (0x0009e017) cale_month_pane_g12_ParamLimits

0x1e98,	// (0x0009e017) cale_month_pane_g12

0x1eea,	// (0x0009e069) cale_month_pane_g13_ParamLimits

0x1eea,	// (0x0009e069) cale_month_pane_g13

0x000c,

0xf296,	// (0x000ab415) cale_month_pane_g_ParamLimits

0xf296,	// (0x000ab415) cale_month_pane_g

0x1f3c,	// (0x0009e0bb) cale_month_week_pane

0x1f60,	// (0x0009e0df) grid_cale_month_pane_ParamLimits

0x1f60,	// (0x0009e0df) grid_cale_month_pane

0x1f9e,	// (0x0009e11d) cale_month_day_heading_pane_t1

0x2024,	// (0x0009e1a3) cale_month_day_heading_pane_t2

0x20b5,	// (0x0009e234) cale_month_day_heading_pane_t3

0x2146,	// (0x0009e2c5) cale_month_day_heading_pane_t4

0x21db,	// (0x0009e35a) cale_month_day_heading_pane_t5

0x227c,	// (0x0009e3fb) cale_month_day_heading_pane_t6

0x231d,	// (0x0009e49c) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x000ab430) cale_month_day_heading_pane_t

0xb52a,	// (0x000a76a9) bg_cale_side_pane_cp01

0x23c6,	// (0x0009e545) cale_month_week_pane_t1

0x23df,	// (0x0009e55e) cale_month_week_pane_t2

0x23f8,	// (0x0009e577) cale_month_week_pane_t3

0x2411,	// (0x0009e590) cale_month_week_pane_t4

0x242a,	// (0x0009e5a9) cale_month_week_pane_t5

0x2443,	// (0x0009e5c2) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x000ab43f) cale_month_week_pane_t

0x245c,	// (0x0009e5db) cell_cale_month_pane_ParamLimits

0x245c,	// (0x0009e5db) cell_cale_month_pane

0xa96b,	// (0x000a6aea) cell_cale_month_pane_g1

0x25b0,	// (0x0009e72f) cell_cale_month_pane_t1_ParamLimits

0x25b0,	// (0x0009e72f) cell_cale_month_pane_t1

0xb538,	// (0x000a76b7) grid_highlight_pane_cp08

0xb414,	// (0x000a7593) main_smil_g1

0x25d0,	// (0x0009e74f) smil_status_pane

0xb8cb,	// (0x000a7a4a) smil_text_pane

0xe0b1,	// (0x000aa230) bg_popup_call3_rect_pane_g8

0xe0b9,	// (0x000aa238) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x000ab6f8) bg_popup_call3_rect_pane_g

0xe300,	// (0x000aa47f) smil_status_volume_pane_g1

0xb8d5,	// (0x000a7a54) smil_status_pane_t1

0xaac1,	// (0x000a6c40) volume_smil_pane

0xb8ec,	// (0x000a7a6b) list_smil_text_pane

0x25e3,	// (0x0009e762) scroll_pane_cp011

0x25ee,	// (0x0009e76d) smil_text_list_pane_t1_ParamLimits

0x25ee,	// (0x0009e76d) smil_text_list_pane_t1

0xa977,	// (0x000a6af6) aid_volume_smil_ParamLimits

0xa977,	// (0x000a6af6) aid_volume_smil

0xb414,	// (0x000a7593) smil_volume_pane_g1

0xb414,	// (0x000a7593) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x000ab45f) smil_volume_pane_g

0x0b6d,	// (0x0009ccec) listscroll_cale_day_pane

0xb8f6,	// (0x000a7a75) bg_cale_pane

0xb90e,	// (0x000a7a8d) list_cale_pane

0xb931,	// (0x000a7ab0) scroll_pane_cp09

0xb942,	// (0x000a7ac1) cale_bg_pane_g1

0xb94a,	// (0x000a7ac9) cale_bg_pane_g2

0xb952,	// (0x000a7ad1) cale_bg_pane_g3

0xb95a,	// (0x000a7ad9) cale_bg_pane_g4

0xb962,	// (0x000a7ae1) cale_bg_pane_g5

0xb96a,	// (0x000a7ae9) cale_bg_pane_g6

0xb972,	// (0x000a7af1) cale_bg_pane_g7

0xb97a,	// (0x000a7af9) cale_bg_pane_g8

0xb982,	// (0x000a7b01) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x000ab464) cale_bg_pane_g

0x262a,	// (0x0009e7a9) list_cale_time_pane_ParamLimits

0x262a,	// (0x0009e7a9) list_cale_time_pane

0xb98a,	// (0x000a7b09) list_cale_time_pane_g1_ParamLimits

0xb98a,	// (0x000a7b09) list_cale_time_pane_g1

0xb996,	// (0x000a7b15) list_cale_time_pane_g2_ParamLimits

0xb996,	// (0x000a7b15) list_cale_time_pane_g2

0x263d,	// (0x0009e7bc) list_cale_time_pane_g3_ParamLimits

0x263d,	// (0x0009e7bc) list_cale_time_pane_g3

0x264b,	// (0x0009e7ca) list_cale_time_pane_g4_ParamLimits

0x264b,	// (0x0009e7ca) list_cale_time_pane_g4

0x2659,	// (0x0009e7d8) list_cale_time_pane_g5_ParamLimits

0x2659,	// (0x0009e7d8) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x000ab477) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x000ab477) list_cale_time_pane_g

0xb9b0,	// (0x000a7b2f) list_cale_time_pane_t1_ParamLimits

0xb9b0,	// (0x000a7b2f) list_cale_time_pane_t1

0xb9d8,	// (0x000a7b57) list_cale_time_pane_t2_ParamLimits

0xb9d8,	// (0x000a7b57) list_cale_time_pane_t2

0x29ae,	// (0x0009eb2d) aid_blid_cardinal_pane

0x29ec,	// (0x0009eb6b) compass_pane_t4

0xba00,	// (0x000a7b7f) list_cale_time_pane_t4_ParamLimits

0xba00,	// (0x000a7b7f) list_cale_time_pane_t4

0x29fa,	// (0x0009eb79) compass_pane_t5

0x2a08,	// (0x0009eb87) compass_pane_t6

0x2a16,	// (0x0009eb95) compass_pane_t7

0xc99c,	// (0x000a8b1b) navi_pane_cc_t1

0xcaf1,	// (0x000a8c70) aid_phob_thumbnail_center_pane

0x3173,	// (0x0009f2f2) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x000ab484) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x000ab484) list_cale_time_pane_t

0xa555,	// (0x000a66d4) bg_popup_window_pane_cp02_ParamLimits

0xa555,	// (0x000a66d4) bg_popup_window_pane_cp02

0xba28,	// (0x000a7ba7) heading_pane_cp01_ParamLimits

0xba28,	// (0x000a7ba7) heading_pane_cp01

0xba34,	// (0x000a7bb3) loc_req_pane_ParamLimits

0xba34,	// (0x000a7bb3) loc_req_pane

0xba44,	// (0x000a7bc3) loc_type_pane_ParamLimits

0xba44,	// (0x000a7bc3) loc_type_pane

0xba56,	// (0x000a7bd5) loc_type_pane_t1_ParamLimits

0xba56,	// (0x000a7bd5) loc_type_pane_t1

0xba68,	// (0x000a7be7) loc_type_pane_t2_ParamLimits

0xba68,	// (0x000a7be7) loc_type_pane_t2

0xba7a,	// (0x000a7bf9) loc_type_pane_t3_ParamLimits

0xba7a,	// (0x000a7bf9) loc_type_pane_t3

0x0002,

0xf30c,	// (0x000ab48b) loc_type_pane_t_ParamLimits

0xf30c,	// (0x000ab48b) loc_type_pane_t

0xba8c,	// (0x000a7c0b) list_loc_req_pane

0xba96,	// (0x000a7c15) scroll_pane_cp012

0x2667,	// (0x0009e7e6) list_single_loc_request_popup_menu_pane_ParamLimits

0x2667,	// (0x0009e7e6) list_single_loc_request_popup_menu_pane

0xbaa1,	// (0x000a7c20) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xbaa1,	// (0x000a7c20) list_single_loc_request_popup_menu_pane_g1

0xbaad,	// (0x000a7c2c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xbaad,	// (0x000a7c2c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x000ab492) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x000ab492) list_single_loc_request_popup_menu_pane_g

0xbab9,	// (0x000a7c38) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xbab9,	// (0x000a7c38) list_single_loc_request_popup_menu_pane_t1

0xb2fa,	// (0x000a7479) bg_popup_window_pane_cp03_ParamLimits

0xb2fa,	// (0x000a7479) bg_popup_window_pane_cp03

0xc79c,	// (0x000a891b) heading_loc_req_pane_ParamLimits

0xc79c,	// (0x000a891b) heading_loc_req_pane

0x2674,	// (0x0009e7f3) popup_dyc_status_message_window_g1_ParamLimits

0x2674,	// (0x0009e7f3) popup_dyc_status_message_window_g1

0x2688,	// (0x0009e807) popup_dyc_status_message_window_t1_ParamLimits

0x2688,	// (0x0009e807) popup_dyc_status_message_window_t1

0x269d,	// (0x0009e81c) popup_dyc_status_message_window_t2_ParamLimits

0x269d,	// (0x0009e81c) popup_dyc_status_message_window_t2

0x26b2,	// (0x0009e831) popup_dyc_status_message_window_t3_ParamLimits

0x26b2,	// (0x0009e831) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x000ab497) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x000ab497) popup_dyc_status_message_window_t

0xb09f,	// (0x000a721e) bg_heading_pane_cp01

0xbacf,	// (0x000a7c4e) heading_loc_req_pane_g1

0xbad7,	// (0x000a7c56) heading_loc_req_pane_g2

0xbadf,	// (0x000a7c5e) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x000ab49e) heading_loc_req_pane_g

0xbae7,	// (0x000a7c66) heading_loc_req_pane_t1

0xbaf6,	// (0x000a7c75) bg_popup_sub_pane_cp01_ParamLimits

0xbaf6,	// (0x000a7c75) bg_popup_sub_pane_cp01

0xbb04,	// (0x000a7c83) popup_cale_events_window_g1_ParamLimits

0xbb04,	// (0x000a7c83) popup_cale_events_window_g1

0xbb24,	// (0x000a7ca3) popup_cale_events_window_g2_ParamLimits

0xbb24,	// (0x000a7ca3) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x000ab4d2) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x000ab4d2) popup_cale_events_window_g

0xbb44,	// (0x000a7cc3) popup_cale_events_window_t1_ParamLimits

0xbb44,	// (0x000a7cc3) popup_cale_events_window_t1

0xbb56,	// (0x000a7cd5) popup_cale_events_window_t2_ParamLimits

0xbb56,	// (0x000a7cd5) popup_cale_events_window_t2

0xbb94,	// (0x000a7d13) popup_cale_events_window_t3_ParamLimits

0xbb94,	// (0x000a7d13) popup_cale_events_window_t3

0xbbce,	// (0x000a7d4d) popup_cale_events_window_t4_ParamLimits

0xbbce,	// (0x000a7d4d) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x000ab4d7) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x000ab4d7) popup_cale_events_window_t

0x27a9,	// (0x0009e928) call_type_pane

0x27b9,	// (0x0009e938) popup_call_status_window_g1

0x27cd,	// (0x0009e94c) popup_call_status_window_g2

0x27e1,	// (0x0009e960) popup_call_status_window_g3

0x0002,

0xf361,	// (0x000ab4e0) popup_call_status_window_g

0xbc04,	// (0x000a7d83) call_type_pane_g1

0xbc0d,	// (0x000a7d8c) call_type_pane_g2

0x0001,

0xf368,	// (0x000ab4e7) call_type_pane_g

0xb09f,	// (0x000a721e) bg_popup_sub_pane_cp02

0xbc16,	// (0x000a7d95) listscroll_popup_wml_pane

0xbc1e,	// (0x000a7d9d) list_wml_pane

0xbc28,	// (0x000a7da7) scroll_pane_cp013

0xbc33,	// (0x000a7db2) list_single_graphic_popup_wml_pane_ParamLimits

0xbc33,	// (0x000a7db2) list_single_graphic_popup_wml_pane

0xb414,	// (0x000a7593) list_single_graphic_popup_wml_pane_g1

0xc7a8,	// (0x000a8927) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x000ab4ec) list_single_graphic_popup_wml_pane_g

0xc7b0,	// (0x000a892f) list_single_graphic_popup_wml_pane_t1

0xc7c6,	// (0x000a8945) aid_call_pane

0xb2f2,	// (0x000a7471) popup_clock_analogue_window_g1

0xb2f2,	// (0x000a7471) popup_clock_analogue_window_g2

0xa9a5,	// (0x000a6b24) popup_clock_analogue_window_g3

0xa9a5,	// (0x000a6b24) popup_clock_analogue_window_g4

0xb414,	// (0x000a7593) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x000ab4f1) popup_clock_analogue_window_g

0xa9ad,	// (0x000a6b2c) popup_clock_analogue_window_t1

0xa9bb,	// (0x000a6b3a) clock_digital_number_pane_ParamLimits

0xa9bb,	// (0x000a6b3a) clock_digital_number_pane

0xa9c7,	// (0x000a6b46) clock_digital_number_pane_cp02_ParamLimits

0xa9c7,	// (0x000a6b46) clock_digital_number_pane_cp02

0xa9d3,	// (0x000a6b52) clock_digital_number_pane_cp03_ParamLimits

0xa9d3,	// (0x000a6b52) clock_digital_number_pane_cp03

0xa9df,	// (0x000a6b5e) clock_digital_number_pane_cp04_ParamLimits

0xa9df,	// (0x000a6b5e) clock_digital_number_pane_cp04

0xa9ef,	// (0x000a6b6e) clock_digital_separator_pane_ParamLimits

0xa9ef,	// (0x000a6b6e) clock_digital_separator_pane

0xa9fb,	// (0x000a6b7a) popup_clock_digital_window_t1

0xb414,	// (0x000a7593) clock_digital_number_pane_g1

0xb414,	// (0x000a7593) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x000ab45f) clock_digital_number_pane_g

0xb414,	// (0x000a7593) clock_digital_separator_pane_g1

0xb414,	// (0x000a7593) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x000ab45f) clock_digital_separator_pane_g

0xb09f,	// (0x000a721e) bg_popup_window_pane_cp04

0xc7ce,	// (0x000a894d) heading_pane_cp03

0xc7d6,	// (0x000a8955) listscroll_popup_gms_pane

0xc7de,	// (0x000a895d) grid_large_graphic_popup_pane

0xc7e8,	// (0x000a8967) listscroll_popup_gms_pane_g1

0xc7f0,	// (0x000a896f) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x000ab4fc) listscroll_popup_gms_pane_g

0xb730,	// (0x000a78af) scroll_pane_cp014

0x27f0,	// (0x0009e96f) cell_large_graphic_popup_pane_ParamLimits

0x27f0,	// (0x0009e96f) cell_large_graphic_popup_pane

0x2808,	// (0x0009e987) cell_large_graphic_popup_pane_g1_ParamLimits

0x2808,	// (0x0009e987) cell_large_graphic_popup_pane_g1

0xc7f8,	// (0x000a8977) cell_large_graphic_popup_pane_g2_ParamLimits

0xc7f8,	// (0x000a8977) cell_large_graphic_popup_pane_g2

0xc804,	// (0x000a8983) cell_large_graphic_popup_pane_g3_ParamLimits

0xc804,	// (0x000a8983) cell_large_graphic_popup_pane_g3

0xc811,	// (0x000a8990) cell_large_graphic_popup_pane_g4_ParamLimits

0xc811,	// (0x000a8990) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x000ab501) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x000ab501) cell_large_graphic_popup_pane_g

0xc821,	// (0x000a89a0) grid_highlight_pane_cp010

0xb414,	// (0x000a7593) bg_popup_call_pane_g1

0xc82b,	// (0x000a89aa) list_single_graphic_popup_conf_pane_ParamLimits

0xc82b,	// (0x000a89aa) list_single_graphic_popup_conf_pane

0xc83e,	// (0x000a89bd) list_highlight_pane_cp01

0xc847,	// (0x000a89c6) list_single_graphic_popup_conf_pane_g1

0xc84f,	// (0x000a89ce) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x000ab50a) list_single_graphic_popup_conf_pane_g

0xc857,	// (0x000a89d6) list_single_graphic_popup_conf_pane_t1

0xc865,	// (0x000a89e4) linegrid_cams_pane_g1

0x2814,	// (0x0009e993) linegrid_cams_pane_g2

0xb56b,	// (0x000a76ea) linegrid_cams_pane_g3

0xc86e,	// (0x000a89ed) linegrid_cams_pane_g4

0x281d,	// (0x0009e99c) linegrid_cams_pane_g5

0x2826,	// (0x0009e9a5) linegrid_cams_pane_g6

0xb574,	// (0x000a76f3) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x000ab50f) linegrid_cams_pane_g

0xc877,	// (0x000a89f6) popup_clock_analogue_window

0xc877,	// (0x000a89f6) popup_clock_digital_window

0xb09f,	// (0x000a721e) popup_phob_thumbnail_window

0xb414,	// (0x000a7593) call_video_uplink_pane_g1

0xc880,	// (0x000a89ff) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x000ab51e) call_video_uplink_pane_g

0xc888,	// (0x000a8a07) video_uplink_pane

0xc890,	// (0x000a8a0f) mce_image_pane_g1

0x2831,	// (0x0009e9b0) mce_image_pane_g2

0x283b,	// (0x0009e9ba) mce_image_pane_g3

0x2843,	// (0x0009e9c2) mce_image_pane_g4

0x284b,	// (0x0009e9ca) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x000ab523) mce_image_pane_g

0xc89a,	// (0x000a8a19) control_top_pane_stacon_cp01_ParamLimits

0xc89a,	// (0x000a8a19) control_top_pane_stacon_cp01

0xc8ae,	// (0x000a8a2d) uni_indicator_pane_stacon_cp01_ParamLimits

0xc8ae,	// (0x000a8a2d) uni_indicator_pane_stacon_cp01

0xc8bf,	// (0x000a8a3e) bg_popup_sub_pane_cp03

0xc8c9,	// (0x000a8a48) chi_dic_find_pane

0x2853,	// (0x0009e9d2) listscroll_chi_dic_pane

0xc8d1,	// (0x000a8a50) main_pane_chidic_g1

0xc8d9,	// (0x000a8a58) chi_dic_find_pane_t1

0xc8e7,	// (0x000a8a66) find_chidic_pane

0xc8f0,	// (0x000a8a6f) chi_dic_list_pane_ParamLimits

0xc8f0,	// (0x000a8a6f) chi_dic_list_pane

0xc901,	// (0x000a8a80) scroll_pane_cp020

0xc909,	// (0x000a8a88) find_chidic_pane_t1

0xb09f,	// (0x000a721e) input_focus_pane_cp06

0x2867,	// (0x0009e9e6) list_chi_dic_pane_ParamLimits

0x2867,	// (0x0009e9e6) list_chi_dic_pane

0x2879,	// (0x0009e9f8) list_chi_dic_pane_t1_ParamLimits

0x2879,	// (0x0009e9f8) list_chi_dic_pane_t1

0xb09f,	// (0x000a721e) list_highlight_pane_cp020

0xc918,	// (0x000a8a97) bg_cale_heading_pane_g1

0x288c,	// (0x0009ea0b) bg_cale_heading_pane_g2

0x2894,	// (0x0009ea13) bg_cale_heading_pane_g3

0x289c,	// (0x0009ea1b) bg_cale_heading_pane_g4

0x28a6,	// (0x0009ea25) bg_cale_heading_pane_g5

0x28b0,	// (0x0009ea2f) bg_cale_heading_pane_g6

0x28b8,	// (0x0009ea37) bg_cale_heading_pane_g7

0x28c0,	// (0x0009ea3f) bg_cale_heading_pane_g8

0x28ca,	// (0x0009ea49) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x000ab52e) bg_cale_heading_pane_g

0xc918,	// (0x000a8a97) bg_cale_side_pane_g1

0x28d4,	// (0x0009ea53) bg_cale_side_pane_g2

0x28dc,	// (0x0009ea5b) bg_cale_side_pane_g3

0x28e4,	// (0x0009ea63) bg_cale_side_pane_g4

0x28ec,	// (0x0009ea6b) bg_cale_side_pane_g5

0x28f4,	// (0x0009ea73) bg_cale_side_pane_g6

0x28fc,	// (0x0009ea7b) bg_cale_side_pane_g7

0x2904,	// (0x0009ea83) bg_cale_side_pane_g8

0x290c,	// (0x0009ea8b) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x000ab541) bg_cale_side_pane_g

0x2914,	// (0x0009ea93) popup_call_status_window_ParamLimits

0x2914,	// (0x0009ea93) popup_call_status_window

0xc920,	// (0x000a8a9f) stacon_top_pane

0xc928,	// (0x000a8aa7) status_pane_ParamLimits

0xc928,	// (0x000a8aa7) status_pane

0xc93d,	// (0x000a8abc) status_small_pane

0xc945,	// (0x000a8ac4) control_pane

0xb09f,	// (0x000a721e) stacon_bottom_pane

0xc94d,	// (0x000a8acc) list_single_mce_smart_pane_t1_ParamLimits

0xc94d,	// (0x000a8acc) list_single_mce_smart_pane_t1

0xc960,	// (0x000a8adf) list_single_mce_smart_pane_t2_ParamLimits

0xc960,	// (0x000a8adf) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x000ab554) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x000ab554) list_single_mce_smart_pane_t

0x295d,	// (0x0009eadc) compass_pane

0x2966,	// (0x0009eae5) main_location2_pane_t1

0x2978,	// (0x0009eaf7) main_location2_pane_t2

0x298a,	// (0x0009eb09) main_location2_pane_t3

0x0003,

0xf3da,	// (0x000ab559) main_location2_pane_t

0xc97f,	// (0x000a8afe) compass_pane_g1_ParamLimits

0xc97f,	// (0x000a8afe) compass_pane_g1

0x29ce,	// (0x0009eb4d) compass_pane_t1

0x29dd,	// (0x0009eb5c) compass_pane_t2

0x0005,

0xf3e3,	// (0x000ab562) compass_pane_t

0x2a24,	// (0x0009eba3) text_secondary_cp61

0xc993,	// (0x000a8b12) navi_pane_cams_g5

0xc9b6,	// (0x000a8b35) navi_pane_im_t1

0xc9c4,	// (0x000a8b43) navi_pane_mp_g1_ParamLimits

0xc9c4,	// (0x000a8b43) navi_pane_mp_g1

0xc9d8,	// (0x000a8b57) navi_pane_mp_g2_ParamLimits

0xc9d8,	// (0x000a8b57) navi_pane_mp_g2

0xc9e4,	// (0x000a8b63) navi_pane_mp_g3_ParamLimits

0xc9e4,	// (0x000a8b63) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x000ab576) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x000ab576) navi_pane_mp_g

0xc9f0,	// (0x000a8b6f) navi_pane_mp_t1

0xc9fe,	// (0x000a8b7d) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x000ab57d) navi_pane_mp_t

0xca3a,	// (0x000a8bb9) navi_pane_vt_g1

0xc9f0,	// (0x000a8b6f) navi_pane_vt_t1

0xca42,	// (0x000a8bc1) navi_slider_pane

0xca4a,	// (0x000a8bc9) zooming_pane

0xca52,	// (0x000a8bd1) navi_slider_pane_g1

0xaa18,	// (0x000a6b97) navi_slider_pane_g2

0x0006,

0xf405,	// (0x000ab584) navi_slider_pane_g

0xca76,	// (0x000a8bf5) aid_levels_zoom

0xca7e,	// (0x000a8bfd) zooming_pane_g1

0xca86,	// (0x000a8c05) zooming_pane_g2

0xca86,	// (0x000a8c05) zooming_pane_g3

0x0002,

0xf414,	// (0x000ab593) zooming_pane_g

0xca8e,	// (0x000a8c0d) level_10_zoom

0xca97,	// (0x000a8c16) level_11_zoom

0xcaa0,	// (0x000a8c1f) level_1_zoom

0xcaa9,	// (0x000a8c28) level_2_zoom

0xcab2,	// (0x000a8c31) level_3_zoom

0xcabb,	// (0x000a8c3a) level_4_zoom

0xcac4,	// (0x000a8c43) level_5_zoom

0xcacd,	// (0x000a8c4c) level_6_zoom

0xcad6,	// (0x000a8c55) level_7_zoom

0xcadf,	// (0x000a8c5e) level_8_zoom

0xcae8,	// (0x000a8c67) level_9_zoom

0xcaf9,	// (0x000a8c78) popup_phob_thumbnail_window_g1

0xcb01,	// (0x000a8c80) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x000ab59a) popup_phob_thumbnail_window_g

0xe213,	// (0x000aa392) level_1_location

0xe21b,	// (0x000aa39a) level_2_location

0xe223,	// (0x000aa3a2) level_3_location

0xe22b,	// (0x000aa3aa) level_4_location

0xca4a,	// (0x000a8bc9) level_5_location

0x2b67,	// (0x0009ece6) mce_icon_pane_g1

0x2b71,	// (0x0009ecf0) mce_icon_pane_g2

0x0001,

0xf420,	// (0x000ab59f) mce_icon_pane_g

0x2b79,	// (0x0009ecf8) main_mup_pane_g1_ParamLimits

0x2b79,	// (0x0009ecf8) main_mup_pane_g1

0x2b8f,	// (0x0009ed0e) main_mup_pane_g2_ParamLimits

0x2b8f,	// (0x0009ed0e) main_mup_pane_g2

0x2ba7,	// (0x0009ed26) main_mup_pane_g3_ParamLimits

0x2ba7,	// (0x0009ed26) main_mup_pane_g3

0x2bbf,	// (0x0009ed3e) main_mup_pane_g4_ParamLimits

0x2bbf,	// (0x0009ed3e) main_mup_pane_g4

0x2bd7,	// (0x0009ed56) main_mup_pane_g5_ParamLimits

0x2bd7,	// (0x0009ed56) main_mup_pane_g5

0x2bf3,	// (0x0009ed72) main_mup_pane_g6_ParamLimits

0x2bf3,	// (0x0009ed72) main_mup_pane_g6

0x2c0b,	// (0x0009ed8a) main_mup_pane_g7_ParamLimits

0x2c0b,	// (0x0009ed8a) main_mup_pane_g7

0x2c23,	// (0x0009eda2) main_mup_pane_g8_ParamLimits

0x2c23,	// (0x0009eda2) main_mup_pane_g8

0x2c3d,	// (0x0009edbc) main_mup_pane_g9_ParamLimits

0x2c3d,	// (0x0009edbc) main_mup_pane_g9

0x2c57,	// (0x0009edd6) main_mup_pane_g10_ParamLimits

0x2c57,	// (0x0009edd6) main_mup_pane_g10

0x2c71,	// (0x0009edf0) main_mup_pane_g11_ParamLimits

0x2c71,	// (0x0009edf0) main_mup_pane_g11

0x2c85,	// (0x0009ee04) main_mup_pane_g12_ParamLimits

0x2c85,	// (0x0009ee04) main_mup_pane_g12

0x2c9b,	// (0x0009ee1a) main_mup_pane_g13_ParamLimits

0x2c9b,	// (0x0009ee1a) main_mup_pane_g13

0x000c,

0xf425,	// (0x000ab5a4) main_mup_pane_g_ParamLimits

0xf425,	// (0x000ab5a4) main_mup_pane_g

0x2caf,	// (0x0009ee2e) main_mup_pane_t1_ParamLimits

0x2caf,	// (0x0009ee2e) main_mup_pane_t1

0x2cc9,	// (0x0009ee48) main_mup_pane_t2_ParamLimits

0x2cc9,	// (0x0009ee48) main_mup_pane_t2

0x2ce1,	// (0x0009ee60) main_mup_pane_t3_ParamLimits

0x2ce1,	// (0x0009ee60) main_mup_pane_t3

0x2cf9,	// (0x0009ee78) main_mup_pane_t4_ParamLimits

0x2cf9,	// (0x0009ee78) main_mup_pane_t4

0x2d17,	// (0x0009ee96) main_mup_pane_t5_ParamLimits

0x2d17,	// (0x0009ee96) main_mup_pane_t5

0x2d2c,	// (0x0009eeab) main_mup_pane_t6_ParamLimits

0x2d2c,	// (0x0009eeab) main_mup_pane_t6

0x0005,

0xf440,	// (0x000ab5bf) main_mup_pane_t_ParamLimits

0xf440,	// (0x000ab5bf) main_mup_pane_t

0x2d3e,	// (0x0009eebd) mup_progress_pane_ParamLimits

0x2d3e,	// (0x0009eebd) mup_progress_pane

0x2d4a,	// (0x0009eec9) mup_visualizer_pane_ParamLimits

0x2d4a,	// (0x0009eec9) mup_visualizer_pane

0x2d7a,	// (0x0009eef9) mup_volume_pane_ParamLimits

0x2d7a,	// (0x0009eef9) mup_volume_pane

0xcb09,	// (0x000a8c88) mup_visualizer_pane_g1_ParamLimits

0xcb09,	// (0x000a8c88) mup_visualizer_pane_g1

0xcb09,	// (0x000a8c88) mup_visualizer_pane_g2_ParamLimits

0xcb09,	// (0x000a8c88) mup_visualizer_pane_g2

0xc97f,	// (0x000a8afe) mup_visualizer_pane_g3_ParamLimits

0xc97f,	// (0x000a8afe) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x000ab5cc) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x000ab5cc) mup_visualizer_pane_g

0xb414,	// (0x000a7593) mup_volume_pane_g1

0xcb1f,	// (0x000a8c9e) mup_volume_pane_g2

0x0001,

0xf454,	// (0x000ab5d3) mup_volume_pane_g

0xb414,	// (0x000a7593) mup_progress_pane_g1

0xcb28,	// (0x000a8ca7) mup_progress_pane_g2

0xcb31,	// (0x000a8cb0) mup_progress_pane_g3

0x0002,

0xf459,	// (0x000ab5d8) mup_progress_pane_g

0xb09f,	// (0x000a721e) bg_popup_window_pane_cp05

0xcb3a,	// (0x000a8cb9) heading_pane_cp02_ParamLimits

0xcb3a,	// (0x000a8cb9) heading_pane_cp02

0xcb54,	// (0x000a8cd3) list_popup_blid_pane

0xcb5c,	// (0x000a8cdb) list_blid_sat_info_pane_ParamLimits

0xcb5c,	// (0x000a8cdb) list_blid_sat_info_pane

0xcb6f,	// (0x000a8cee) list_blid_sat_info_pane_g1

0xcb77,	// (0x000a8cf6) list_blid_sat_info_pane_t1

0x2e90,	// (0x0009f00f) mup_equalizer_pane_ParamLimits

0x2e90,	// (0x0009f00f) mup_equalizer_pane

0x2ea9,	// (0x0009f028) mup_equalizer_pane_cp1_ParamLimits

0x2ea9,	// (0x0009f028) mup_equalizer_pane_cp1

0x2ec6,	// (0x0009f045) mup_equalizer_pane_cp2_ParamLimits

0x2ec6,	// (0x0009f045) mup_equalizer_pane_cp2

0x2ee3,	// (0x0009f062) mup_equalizer_pane_cp3_ParamLimits

0x2ee3,	// (0x0009f062) mup_equalizer_pane_cp3

0x2f04,	// (0x0009f083) mup_equalizer_pane_cp4_ParamLimits

0x2f04,	// (0x0009f083) mup_equalizer_pane_cp4

0x2f25,	// (0x0009f0a4) mup_equalizer_pane_cp5

0x2f39,	// (0x0009f0b8) mup_equalizer_pane_cp6

0x2f4d,	// (0x0009f0cc) mup_equalizer_pane_cp7

0xe131,	// (0x000aa2b0) bg_popup_call_poc_act_pane_g9

0xe139,	// (0x000aa2b8) bg_popup_call_poc_act_pane_g10

0xe141,	// (0x000aa2c0) bg_popup_call_poc_act_pane_g11

0x000a,

0xb2fa,	// (0x000a7479) mup_scale_pane

0xb414,	// (0x000a7593) mup_scale_pane_g1

0xcb85,	// (0x000a8d04) mup_scale_pane_g2

0x0006,

0xf475,	// (0x000ab5f4) mup_scale_pane_g

0xcba9,	// (0x000a8d28) msg_data_pane

0xcbb1,	// (0x000a8d30) scroll_pane_cp017

0x2f73,	// (0x0009f0f2) bg_list_pane_cp04_ParamLimits

0x2f73,	// (0x0009f0f2) bg_list_pane_cp04

0xcbb9,	// (0x000a8d38) msg_data_pane_g1

0x2f93,	// (0x0009f112) msg_data_pane_g2

0x2f9d,	// (0x0009f11c) msg_data_pane_g3

0x2fa5,	// (0x0009f124) msg_data_pane_g4

0x2fad,	// (0x0009f12c) msg_data_pane_g5

0x2fb5,	// (0x0009f134) msg_data_pane_g6

0x2fbd,	// (0x0009f13c) msg_data_pane_g7

0x0006,

0xf484,	// (0x000ab603) msg_data_pane_g

0x2fc5,	// (0x0009f144) msg_text_pane_ParamLimits

0x2fc5,	// (0x0009f144) msg_text_pane

0x2fe7,	// (0x0009f166) qrid_highlight_pane_cp011_ParamLimits

0x2fe7,	// (0x0009f166) qrid_highlight_pane_cp011

0xb09f,	// (0x000a721e) msg_body_pane

0xb09f,	// (0x000a721e) msg_header_pane

0xcbc1,	// (0x000a8d40) input_focus_pane_cp07

0x3016,	// (0x0009f195) msg_header_pane_t1_ParamLimits

0x3016,	// (0x0009f195) msg_header_pane_t1

0x3028,	// (0x0009f1a7) msg_header_pane_t2_ParamLimits

0x3028,	// (0x0009f1a7) msg_header_pane_t2

0x0001,

0xf498,	// (0x000ab617) msg_header_pane_t_ParamLimits

0xf498,	// (0x000ab617) msg_header_pane_t

0xcbd6,	// (0x000a8d55) msg_body_pane_g1

0x303a,	// (0x0009f1b9) msg_body_pane_t1_ParamLimits

0x303a,	// (0x0009f1b9) msg_body_pane_t1

0x306b,	// (0x0009f1ea) msg_body_pane_t2_ParamLimits

0x306b,	// (0x0009f1ea) msg_body_pane_t2

0x307d,	// (0x0009f1fc) msg_body_pane_t3_ParamLimits

0x307d,	// (0x0009f1fc) msg_body_pane_t3

0x0002,

0xf49d,	// (0x000ab61c) msg_body_pane_t_ParamLimits

0xf49d,	// (0x000ab61c) msg_body_pane_t

0x30c9,	// (0x0009f248) main_viewer_pane_g1_ParamLimits

0x30c9,	// (0x0009f248) main_viewer_pane_g1

0x30d7,	// (0x0009f256) main_viewer_pane_g2_ParamLimits

0x30d7,	// (0x0009f256) main_viewer_pane_g2

0x30e5,	// (0x0009f264) main_viewer_pane_g3_ParamLimits

0x30e5,	// (0x0009f264) main_viewer_pane_g3

0x30f4,	// (0x0009f273) main_viewer_pane_g4_ParamLimits

0x30f4,	// (0x0009f273) main_viewer_pane_g4

0xaa42,	// (0x000a6bc1) main_viewer_pane_g5_ParamLimits

0xaa42,	// (0x000a6bc1) main_viewer_pane_g5

0xaa42,	// (0x000a6bc1) main_viewer_pane_g7_ParamLimits

0xaa42,	// (0x000a6bc1) main_viewer_pane_g7

0xbaa1,	// (0x000a7c20) main_viewer_pane_g8_ParamLimits

0xbaa1,	// (0x000a7c20) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x000ab62c) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x000ab62c) main_viewer_pane_g

0xcbde,	// (0x000a8d5d) viewer_content_pane_ParamLimits

0xcbde,	// (0x000a8d5d) viewer_content_pane

0x3130,	// (0x0009f2af) main_postcard_pane_g1_ParamLimits

0x3130,	// (0x0009f2af) main_postcard_pane_g1

0x3146,	// (0x0009f2c5) main_postcard_pane_g2_ParamLimits

0x3146,	// (0x0009f2c5) main_postcard_pane_g2

0x315c,	// (0x0009f2db) main_postcard_pane_g3_ParamLimits

0x315c,	// (0x0009f2db) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x000ab63d) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x000ab63d) main_postcard_pane_g

0x3173,	// (0x0009f2f2) main_postcard_pane_g4

0xe313,	// (0x000aa492) smil_status_volume_pane_g2

0x31b6,	// (0x0009f335) postcard_pane_ParamLimits

0x31b6,	// (0x0009f335) postcard_pane

0xcbec,	// (0x000a8d6b) postcard_pane_g1_ParamLimits

0xcbec,	// (0x000a8d6b) postcard_pane_g1

0x31f8,	// (0x0009f377) postcard_pane_g2_ParamLimits

0x31f8,	// (0x0009f377) postcard_pane_g2

0x3204,	// (0x0009f383) postcard_pane_g3_ParamLimits

0x3204,	// (0x0009f383) postcard_pane_g3

0xcbfa,	// (0x000a8d79) postcard_pane_g4_ParamLimits

0xcbfa,	// (0x000a8d79) postcard_pane_g4

0x3210,	// (0x0009f38f) postcard_pane_g5_ParamLimits

0x3210,	// (0x0009f38f) postcard_pane_g5

0x3225,	// (0x0009f3a4) postcard_pane_g6_ParamLimits

0x3225,	// (0x0009f3a4) postcard_pane_g6

0xcbec,	// (0x000a8d6b) postcard_pane_g7_ParamLimits

0xcbec,	// (0x000a8d6b) postcard_pane_g7

0x0006,

0xf4cb,	// (0x000ab64a) postcard_pane_g_ParamLimits

0xf4cb,	// (0x000ab64a) postcard_pane_g

0x3239,	// (0x0009f3b8) main_mp2_pane_g1_ParamLimits

0x3239,	// (0x0009f3b8) main_mp2_pane_g1

0x3245,	// (0x0009f3c4) main_mp2_pane_g2_ParamLimits

0x3245,	// (0x0009f3c4) main_mp2_pane_g2

0x3251,	// (0x0009f3d0) main_mp2_pane_g3_ParamLimits

0x3251,	// (0x0009f3d0) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x000ab659) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x000ab659) main_mp2_pane_g

0x325d,	// (0x0009f3dc) main_mp2_pane_t1_ParamLimits

0x325d,	// (0x0009f3dc) main_mp2_pane_t1

0x3272,	// (0x0009f3f1) main_mp2_pane_t2_ParamLimits

0x3272,	// (0x0009f3f1) main_mp2_pane_t2

0x3284,	// (0x0009f403) main_mp2_pane_t3_ParamLimits

0x3284,	// (0x0009f403) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x000ab660) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x000ab660) main_mp2_pane_t

0xcc08,	// (0x000a8d87) pec_content_pane_ParamLimits

0xcc08,	// (0x000a8d87) pec_content_pane

0xb730,	// (0x000a78af) scroll_pane_cp015

0xcc1a,	// (0x000a8d99) pec_attribute_pane_ParamLimits

0xcc1a,	// (0x000a8d99) pec_attribute_pane

0x3296,	// (0x0009f415) pec_content_pane_g1_ParamLimits

0x3296,	// (0x0009f415) pec_content_pane_g1

0xcc2a,	// (0x000a8da9) pec_content_pane_t1_ParamLimits

0xcc2a,	// (0x000a8da9) pec_content_pane_t1

0xcc3c,	// (0x000a8dbb) pec_content_pane_t2_ParamLimits

0xcc3c,	// (0x000a8dbb) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x000ab667) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x000ab667) pec_content_pane_t

0x32a2,	// (0x0009f421) list_single_graphic_pane_cp01_ParamLimits

0x32a2,	// (0x0009f421) list_single_graphic_pane_cp01

0xb2fa,	// (0x000a7479) bg_popup_sub_pane_cp04

0xcc4e,	// (0x000a8dcd) popup_mup_playback_window_g1

0xcc5a,	// (0x000a8dd9) popup_mup_playback_window_t1

0xcc6f,	// (0x000a8dee) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x000ab66c) popup_mup_playback_window_t

0xcca6,	// (0x000a8e25) main_image_pane_g1_ParamLimits

0xcca6,	// (0x000a8e25) main_image_pane_g1

0xcce9,	// (0x000a8e68) scroll_pane_cp018_ParamLimits

0xcce9,	// (0x000a8e68) scroll_pane_cp018

0xcd01,	// (0x000a8e80) scroll_pane_cp016_ParamLimits

0xcd01,	// (0x000a8e80) scroll_pane_cp016

0x336f,	// (0x0009f4ee) smil2_image_pane_ParamLimits

0x336f,	// (0x0009f4ee) smil2_image_pane

0x339f,	// (0x0009f51e) smil2_root_pane_ParamLimits

0x339f,	// (0x0009f51e) smil2_root_pane

0x33d7,	// (0x0009f556) smil2_text_pane_ParamLimits

0x33d7,	// (0x0009f556) smil2_text_pane

0xb09f,	// (0x000a721e) bg_list_pane_cp06

0xcd3d,	// (0x000a8ebc) grid_radio_pane

0xb09f,	// (0x000a721e) bg_popup_window_pane_cp06

0xcd45,	// (0x000a8ec4) main_fmradio_pane_t1

0xc7ce,	// (0x000a894d) heading_pane_cp04

0xcd53,	// (0x000a8ed2) main_fmradio_pane_t2

0xe149,	// (0x000aa2c8) popup_cale_lunar_info_window_g1

0xcd61,	// (0x000a8ee0) main_fmradio_pane_t3

0xe151,	// (0x000aa2d0) popup_cale_lunar_info_window_g2

0xcd6f,	// (0x000a8eee) main_fmradio_pane_t4

0x0001,

0xcd7d,	// (0x000a8efc) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x000ab747) popup_cale_lunar_info_window_g

0xf502,	// (0x000ab681) main_fmradio_pane_t

0xcd8b,	// (0x000a8f0a) wait_bar_pane_cp03

0xcd93,	// (0x000a8f12) cell_fmradio_pane_ParamLimits

0xcd93,	// (0x000a8f12) cell_fmradio_pane

0xcbec,	// (0x000a8d6b) cell_fmradio_pane_g1_ParamLimits

0xcbec,	// (0x000a8d6b) cell_fmradio_pane_g1

0xb09f,	// (0x000a721e) grid_highlight_pane_cp011

0xcda6,	// (0x000a8f25) poc_content_pane_ParamLimits

0xcda6,	// (0x000a8f25) poc_content_pane

0xcdb8,	// (0x000a8f37) scroll_pane_cp019

0x3457,	// (0x0009f5d6) popup_call_poc_act_window_ParamLimits

0x3457,	// (0x0009f5d6) popup_call_poc_act_window

0x347b,	// (0x0009f5fa) popup_call_poc_inact_window_ParamLimits

0x347b,	// (0x0009f5fa) popup_call_poc_inact_window

0xf59f,	// (0x000ab71e) bg_popup_call_poc_act_pane_g

0xe0c1,	// (0x000aa240) bg_popup_call_poc_inact_pane_g1

0xe0c9,	// (0x000aa248) bg_popup_call_poc_inact_pane_g2

0xcdc0,	// (0x000a8f3f) popup_call_poc_act_window_g2

0xe0d1,	// (0x000aa250) bg_popup_call_poc_inact_pane_g3

0xe0d9,	// (0x000aa258) bg_popup_call_poc_inact_pane_g4

0xe0e1,	// (0x000aa260) bg_popup_call_poc_inact_pane_g5

0xcdc8,	// (0x000a8f47) popup_call_poc_act_window_t1_ParamLimits

0xcdc8,	// (0x000a8f47) popup_call_poc_act_window_t1

0xcdf0,	// (0x000a8f6f) popup_call_poc_act_window_t2_ParamLimits

0xcdf0,	// (0x000a8f6f) popup_call_poc_act_window_t2

0xce18,	// (0x000a8f97) popup_call_poc_act_window_t3_ParamLimits

0xce18,	// (0x000a8f97) popup_call_poc_act_window_t3

0xce40,	// (0x000a8fbf) popup_call_poc_act_window_t4_ParamLimits

0xce40,	// (0x000a8fbf) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x000ab68c) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x000ab68c) popup_call_poc_act_window_t

0xe0e9,	// (0x000aa268) bg_popup_call_poc_inact_pane_g6

0xe0f1,	// (0x000aa270) bg_popup_call_poc_inact_pane_g7

0xe0f9,	// (0x000aa278) bg_popup_call_poc_inact_pane_g8

0xce52,	// (0x000a8fd1) popup_call_poc_inact_window_g2

0xe101,	// (0x000aa280) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x000ab70b) bg_popup_call_poc_inact_pane_g

0xce5a,	// (0x000a8fd9) popup_call_poc_inact_window_t1_ParamLimits

0xce5a,	// (0x000a8fd9) popup_call_poc_inact_window_t1

0xce6f,	// (0x000a8fee) popup_call_poc_inact_window_t2_ParamLimits

0xce6f,	// (0x000a8fee) popup_call_poc_inact_window_t2

0xce84,	// (0x000a9003) popup_call_poc_inact_window_t3_ParamLimits

0xce84,	// (0x000a9003) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x000ab695) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x000ab695) popup_call_poc_inact_window_t

0xe286,	// (0x000aa405) context_pane_ParamLimits

0x3cb2,	// (0x0009fe31) signal_pane_ParamLimits

0xca4a,	// (0x000a8bc9) main_call2_pane

0xaa8d,	// (0x000a6c0c) popup_phob_thumbnail2_window_ParamLimits

0xaa8d,	// (0x000a6c0c) popup_phob_thumbnail2_window

0xaa2a,	// (0x000a6ba9) aid_hotspot_pointer_arrow_pane

0xaa32,	// (0x000a6bb1) aid_hotspot_pointer_hand_pane

0x37c4,	// (0x0009f943) phob_pre_status_pane_g5

0x11f1,	// (0x0009d370) cams_zoom_pane_ParamLimits

0x1200,	// (0x0009d37f) image_vga_pane_ParamLimits

0x121a,	// (0x0009d399) main_camera_pane_g1_ParamLimits

0x122c,	// (0x0009d3ab) main_camera_pane_g2_ParamLimits

0x123c,	// (0x0009d3bb) main_camera_pane_g3_ParamLimits

0x124c,	// (0x0009d3cb) main_camera_pane_g4_ParamLimits

0x125c,	// (0x0009d3db) main_camera_pane_g5_ParamLimits

0x126c,	// (0x0009d3eb) main_camera_pane_g6_ParamLimits

0x127e,	// (0x0009d3fd) main_camera_pane_g7_ParamLimits

0xf215,	// (0x000ab394) main_camera_pane_g_ParamLimits

0x128e,	// (0x0009d40d) main_camera_pane_t1_ParamLimits

0x12a4,	// (0x0009d423) main_camera_pane_t2_ParamLimits

0xf226,	// (0x000ab3a5) main_camera_pane_t_ParamLimits

0xb2fa,	// (0x000a7479) bg_popup_preview_window_pane_cp01_ParamLimits

0xb2fa,	// (0x000a7479) bg_popup_preview_window_pane_cp01

0xce99,	// (0x000a9018) popup_phob_thumbnail2_window_g1_ParamLimits

0xce99,	// (0x000a9018) popup_phob_thumbnail2_window_g1

0xb09f,	// (0x000a721e) call2_cli_visual_pane

0x34af,	// (0x0009f62e) popup_call2_audio_conf_window_ParamLimits

0x34af,	// (0x0009f62e) popup_call2_audio_conf_window

0x34cf,	// (0x0009f64e) popup_call2_audio_first_window_ParamLimits

0x34cf,	// (0x0009f64e) popup_call2_audio_first_window

0x3565,	// (0x0009f6e4) popup_call2_audio_in_window_ParamLimits

0x3565,	// (0x0009f6e4) popup_call2_audio_in_window

0x35ad,	// (0x0009f72c) popup_call2_audio_out_window_ParamLimits

0x35ad,	// (0x0009f72c) popup_call2_audio_out_window

0x3617,	// (0x0009f796) popup_call2_audio_second_window_ParamLimits

0x3617,	// (0x0009f796) popup_call2_audio_second_window

0x367d,	// (0x0009f7fc) popup_call2_audio_wait_window_ParamLimits

0x367d,	// (0x0009f7fc) popup_call2_audio_wait_window

0xb09f,	// (0x000a721e) bg_popup_call2_act_pane_cp03

0xb2dc,	// (0x000a745b) list_conf_pane_cp

0xcea5,	// (0x000a9024) popup_call2_audio_conf_window_t1

0xc82b,	// (0x000a89aa) list_single_graphic_popup_conf2_pane_ParamLimits

0xc82b,	// (0x000a89aa) list_single_graphic_popup_conf2_pane

0xc83e,	// (0x000a89bd) list_highlight_pane_cp04

0xceb3,	// (0x000a9032) list_single_graphic_popup_conf2_pane_g1

0xc84f,	// (0x000a89ce) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x000ab69c) list_single_graphic_popup_conf2_pane_g

0xcebd,	// (0x000a903c) list_single_graphic_popup_conf2_pane_t1

0xcecb,	// (0x000a904a) bg_popup_call2_act_pane_cp01_ParamLimits

0xcecb,	// (0x000a904a) bg_popup_call2_act_pane_cp01

0xd386,	// (0x000a9505) call_type_pane_cp05_ParamLimits

0xd386,	// (0x000a9505) call_type_pane_cp05

0xd3da,	// (0x000a9559) popup_call2_audio_second_window_g1_ParamLimits

0xd3da,	// (0x000a9559) popup_call2_audio_second_window_g1

0xd42e,	// (0x000a95ad) popup_call2_audio_second_window_g2_ParamLimits

0xd42e,	// (0x000a95ad) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x000ab6a1) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x000ab6a1) popup_call2_audio_second_window_g

0xd493,	// (0x000a9612) popup_call2_audio_second_window_t1_ParamLimits

0xd493,	// (0x000a9612) popup_call2_audio_second_window_t1

0xd54e,	// (0x000a96cd) popup_call2_audio_second_window_t2_ParamLimits

0xd54e,	// (0x000a96cd) popup_call2_audio_second_window_t2

0xd5a1,	// (0x000a9720) popup_call2_audio_second_window_t3_ParamLimits

0xd5a1,	// (0x000a9720) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x000ab6a8) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x000ab6a8) popup_call2_audio_second_window_t

0xb09f,	// (0x000a721e) bg_popup_call2_in_pane_cp02

0xb0a9,	// (0x000a7228) call_type_pane_cp04

0xb0b1,	// (0x000a7230) popup_call2_audio_wait_window_g1

0xb0b9,	// (0x000a7238) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x000ab281) popup_call2_audio_wait_window_g

0xb0c1,	// (0x000a7240) popup_call2_audio_wait_window_t3

0xd694,	// (0x000a9813) bg_popup_call2_act_pane_ParamLimits

0xd694,	// (0x000a9813) bg_popup_call2_act_pane

0xd754,	// (0x000a98d3) call_type_pane_cp03_ParamLimits

0xd754,	// (0x000a98d3) call_type_pane_cp03

0xd7b8,	// (0x000a9937) popup_call2_audio_first_window_g1_ParamLimits

0xd7b8,	// (0x000a9937) popup_call2_audio_first_window_g1

0xd828,	// (0x000a99a7) popup_call2_audio_first_window_g2_ParamLimits

0xd828,	// (0x000a99a7) popup_call2_audio_first_window_g2

0xcb09,	// (0x000a8c88) popup_call2_audio_first_window_g3_ParamLimits

0xcb09,	// (0x000a8c88) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x000ab6b1) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x000ab6b1) popup_call2_audio_first_window_g

0xd906,	// (0x000a9a85) popup_call2_audio_first_window_t1_ParamLimits

0xd906,	// (0x000a9a85) popup_call2_audio_first_window_t1

0xda09,	// (0x000a9b88) popup_call2_audio_first_window_t4_ParamLimits

0xda09,	// (0x000a9b88) popup_call2_audio_first_window_t4

0xdaec,	// (0x000a9c6b) popup_call2_audio_first_window_t5_ParamLimits

0xdaec,	// (0x000a9c6b) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x000ab6bc) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x000ab6bc) popup_call2_audio_first_window_t

0xb2f2,	// (0x000a7471) bg_popup_call2_act_pane_g1

0xe159,	// (0x000aa2d8) popup_cale_lunar_info_window_t1

0xe167,	// (0x000aa2e6) popup_cale_lunar_info_window_t2

0xe175,	// (0x000aa2f4) popup_cale_lunar_info_window_t3

0xb09f,	// (0x000a721e) bg_popup_call2_bubble_pane

0xdbed,	// (0x000a9d6c) bg_popup_call2_in_pane_cp01_ParamLimits

0xdbed,	// (0x000a9d6c) bg_popup_call2_in_pane_cp01

0xa5da,	// (0x000a6759) call_type_pane_cp02

0xdc35,	// (0x000a9db4) popup_call2_audio_out_window_g1_ParamLimits

0xdc35,	// (0x000a9db4) popup_call2_audio_out_window_g1

0xdc61,	// (0x000a9de0) popup_call2_audio_out_window_g2_ParamLimits

0xdc61,	// (0x000a9de0) popup_call2_audio_out_window_g2

0xdc89,	// (0x000a9e08) popup_call2_audio_out_window_g3_ParamLimits

0xdc89,	// (0x000a9e08) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x000ab6c5) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x000ab6c5) popup_call2_audio_out_window_g

0xdcc4,	// (0x000a9e43) popup_call2_audio_out_window_t1_ParamLimits

0xdcc4,	// (0x000a9e43) popup_call2_audio_out_window_t1

0xdd23,	// (0x000a9ea2) popup_call2_audio_out_window_t2_ParamLimits

0xdd23,	// (0x000a9ea2) popup_call2_audio_out_window_t2

0xdd77,	// (0x000a9ef6) popup_call2_audio_out_window_t3_ParamLimits

0xdd77,	// (0x000a9ef6) popup_call2_audio_out_window_t3

0xdd8d,	// (0x000a9f0c) popup_call2_audio_out_window_t4_ParamLimits

0xdd8d,	// (0x000a9f0c) popup_call2_audio_out_window_t4

0xdda3,	// (0x000a9f22) popup_call2_audio_out_window_t5_ParamLimits

0xdda3,	// (0x000a9f22) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x000ab6ce) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x000ab6ce) popup_call2_audio_out_window_t

0xde07,	// (0x000a9f86) bg_popup_call2_in_pane_ParamLimits

0xde07,	// (0x000a9f86) bg_popup_call2_in_pane

0xde63,	// (0x000a9fe2) popup_call2_audio_in_window_g1_ParamLimits

0xde63,	// (0x000a9fe2) popup_call2_audio_in_window_g1

0xde9b,	// (0x000aa01a) popup_call2_audio_in_window_g2_ParamLimits

0xde9b,	// (0x000aa01a) popup_call2_audio_in_window_g2

0xded3,	// (0x000aa052) popup_call2_audio_in_window_g3_ParamLimits

0xded3,	// (0x000aa052) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x000ab6db) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x000ab6db) popup_call2_audio_in_window_g

0xdf2b,	// (0x000aa0aa) popup_call2_audio_in_window_t1_ParamLimits

0xdf2b,	// (0x000aa0aa) popup_call2_audio_in_window_t1

0xdfab,	// (0x000aa12a) popup_call2_audio_in_window_t2_ParamLimits

0xdfab,	// (0x000aa12a) popup_call2_audio_in_window_t2

0xe02b,	// (0x000aa1aa) popup_call2_audio_in_window_t3_ParamLimits

0xe02b,	// (0x000aa1aa) popup_call2_audio_in_window_t3

0xe045,	// (0x000aa1c4) popup_call2_audio_in_window_t4_ParamLimits

0xe045,	// (0x000aa1c4) popup_call2_audio_in_window_t4

0xe057,	// (0x000aa1d6) popup_call2_audio_in_window_t5_ParamLimits

0xe057,	// (0x000aa1d6) popup_call2_audio_in_window_t5

0xe06c,	// (0x000aa1eb) popup_call2_audio_in_window_t6_ParamLimits

0xe06c,	// (0x000aa1eb) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x000ab6e4) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x000ab6e4) popup_call2_audio_in_window_t

0xb2f2,	// (0x000a7471) bg_popup_call2_in_pane_g1

0xe183,	// (0x000aa302) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x000ab74c) popup_cale_lunar_info_window_t

0xb2fa,	// (0x000a7479) bg_popup_call2_rect_pane_ParamLimits

0xb2fa,	// (0x000a7479) bg_popup_call2_rect_pane

0xb09f,	// (0x000a721e) call2_cli_visual_graphic_pane

0xb09f,	// (0x000a721e) call2_cli_visual_text_pane

0xaab4,	// (0x000a6c33) smil_status_volume_pane_g3

0x0002,

0xb414,	// (0x000a7593) call2_cli_visual_graphic_pane_g1

0xb414,	// (0x000a7593) call2_cli_visual_graphic_pane_g2

0xb414,	// (0x000a7593) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x000ab6f1) call2_cli_visual_graphic_pane_g

0xe081,	// (0x000aa200) bg_popup_call2_rect_pane_g1

0xb4a0,	// (0x000a761f) bg_popup_call2_rect_pane_g2

0xe089,	// (0x000aa208) bg_popup_call2_rect_pane_g3

0xe091,	// (0x000aa210) bg_popup_call2_rect_pane_g4

0xe099,	// (0x000aa218) bg_popup_call2_rect_pane_g5

0xe0a1,	// (0x000aa220) bg_popup_call2_rect_pane_g6

0xe0a9,	// (0x000aa228) bg_popup_call2_rect_pane_g7

0xe0b1,	// (0x000aa230) bg_popup_call2_rect_pane_g8

0xe0b9,	// (0x000aa238) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x000ab6f8) bg_popup_call2_rect_pane_g

0xe0c1,	// (0x000aa240) bg_popup_call2_bubble_pane_g1

0xe0c9,	// (0x000aa248) bg_popup_call2_bubble_pane_g2

0xe0d1,	// (0x000aa250) bg_popup_call2_bubble_pane_g3

0xe0d9,	// (0x000aa258) bg_popup_call2_bubble_pane_g4

0xe0e1,	// (0x000aa260) bg_popup_call2_bubble_pane_g5

0xe0e9,	// (0x000aa268) bg_popup_call2_bubble_pane_g6

0xe0f1,	// (0x000aa270) bg_popup_call2_bubble_pane_g7

0xe0f9,	// (0x000aa278) bg_popup_call2_bubble_pane_g8

0xe101,	// (0x000aa280) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x000ab70b) bg_popup_call2_bubble_pane_g

0x0b7f,	// (0x0009ccfe) aid_cale_week_size_cell_pane

0x12ba,	// (0x0009d439) aid_cams_cif_uncrop_pane_ParamLimits

0x12ba,	// (0x0009d439) aid_cams_cif_uncrop_pane

0x146a,	// (0x0009d5e9) aid_cams_size_cell_ParamLimits

0x146a,	// (0x0009d5e9) aid_cams_size_cell

0x147e,	// (0x0009d5fd) grid_cams_pane_ParamLimits

0x1498,	// (0x0009d617) linegrid_cams_pane_ParamLimits

0x1695,	// (0x0009d814) call_video_pane_t1

0x16b3,	// (0x0009d832) call_video_pane_t2

0x0001,

0xf279,	// (0x000ab3f8) call_video_pane_t

0x1adf,	// (0x0009dc5e) aid_cale_month_size_cell_pane_ParamLimits

0x1adf,	// (0x0009dc5e) aid_cale_month_size_cell_pane

0xf616,	// (0x000ab795) smil_status_volume_pane_g

0xaac1,	// (0x000a6c40) volume_smil_pane_ParamLimits

0xa48d,	// (0x000a660c) aid_popup2_width_pane

0x0ad9,	// (0x0009cc58) cell_qdial_pane_g4_ParamLimits

0x0ad9,	// (0x0009cc58) cell_qdial_pane_g4

0x29ae,	// (0x0009eb2d) aid_blid_cardinal_pane_ParamLimits

0x29ba,	// (0x0009eb39) aid_blid_destination_pane_ParamLimits

0x29ba,	// (0x0009eb39) aid_blid_destination_pane

0xb2fa,	// (0x000a7479) bg_popup_call_poc_act_pane_ParamLimits

0xb2fa,	// (0x000a7479) bg_popup_call_poc_act_pane

0xb2fa,	// (0x000a7479) bg_popup_call_poc_inact_pane_ParamLimits

0xb2fa,	// (0x000a7479) bg_popup_call_poc_inact_pane

0xe109,	// (0x000aa288) bg_popup_call_poc_act_pane_g1

0xe111,	// (0x000aa290) bg_popup_call_poc_act_pane_g2

0xe119,	// (0x000aa298) bg_popup_call_poc_act_pane_g3

0xe0d9,	// (0x000aa258) bg_popup_call_poc_act_pane_g4

0xe0e1,	// (0x000aa260) bg_popup_call_poc_act_pane_g5

0xe121,	// (0x000aa2a0) bg_popup_call_poc_act_pane_g6

0xe0f1,	// (0x000aa270) bg_popup_call_poc_act_pane_g7

0xe129,	// (0x000aa2a8) bg_popup_call_poc_act_pane_g8

0xb09f,	// (0x000a721e) main_usb_pane

0xaa68,	// (0x000a6be7) popup_cale_lunar_info_window

0x198b,	// (0x0009db0a) im_reading_pane_t1_ParamLimits

0xb688,	// (0x000a7807) list_im_pane_ParamLimits

0xb699,	// (0x000a7818) scroll_pane_cp07_ParamLimits

0xb09f,	// (0x000a721e) grid_highlight_pane_cp012

0xb2fa,	// (0x000a7479) mup_scale_pane_ParamLimits

0xcbec,	// (0x000a8d6b) main_usb_pane_g1_ParamLimits

0xcbec,	// (0x000a8d6b) main_usb_pane_g1

0x36d9,	// (0x0009f858) main_usb_pane_g2_ParamLimits

0x36d9,	// (0x0009f858) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x000ab735) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x000ab735) main_usb_pane_g

0x36ef,	// (0x0009f86e) main_usb_pane_t1_ParamLimits

0x36ef,	// (0x0009f86e) main_usb_pane_t1

0x3701,	// (0x0009f880) main_usb_pane_t2_ParamLimits

0x3701,	// (0x0009f880) main_usb_pane_t2

0x3713,	// (0x0009f892) main_usb_pane_t3_ParamLimits

0x3713,	// (0x0009f892) main_usb_pane_t3

0x3725,	// (0x0009f8a4) main_usb_pane_t4_ParamLimits

0x3725,	// (0x0009f8a4) main_usb_pane_t4

0x3737,	// (0x0009f8b6) main_usb_pane_t5_ParamLimits

0x3737,	// (0x0009f8b6) main_usb_pane_t5

0x3749,	// (0x0009f8c8) main_usb_pane_t6_ParamLimits

0x3749,	// (0x0009f8c8) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x000ab73a) main_usb_pane_t_ParamLimits

0x295d,	// (0x0009eadc) aid_text_placing

0x2966,	// (0x0009eae5) main_location2_pane_t1_ParamLimits

0x2978,	// (0x0009eaf7) main_location2_pane_t2_ParamLimits

0x298a,	// (0x0009eb09) main_location2_pane_t3_ParamLimits

0x299c,	// (0x0009eb1b) main_location2_pane_t4_ParamLimits

0x299c,	// (0x0009eb1b) main_location2_pane_t4

0xf3da,	// (0x000ab559) main_location2_pane_t_ParamLimits

0xb336,	// (0x000a74b5) find_pinb_pane_g2_ParamLimits

0xb336,	// (0x000a74b5) find_pinb_pane_g2

0x0001,

0xf128,	// (0x000ab2a7) find_pinb_pane_g_ParamLimits

0xf128,	// (0x000ab2a7) find_pinb_pane_g

0xb342,	// (0x000a74c1) find_pinb_pane_t1_ParamLimits

0xb354,	// (0x000a74d3) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x000ab2ac) find_pinb_pane_t_ParamLimits

0xb09f,	// (0x000a721e) main_call3_pane

0x1f9e,	// (0x0009e11d) cale_month_day_heading_pane_t1_ParamLimits

0x2024,	// (0x0009e1a3) cale_month_day_heading_pane_t2_ParamLimits

0x20b5,	// (0x0009e234) cale_month_day_heading_pane_t3_ParamLimits

0x2146,	// (0x0009e2c5) cale_month_day_heading_pane_t4_ParamLimits

0x21db,	// (0x0009e35a) cale_month_day_heading_pane_t5_ParamLimits

0x227c,	// (0x0009e3fb) cale_month_day_heading_pane_t6_ParamLimits

0x231d,	// (0x0009e49c) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x000ab430) cale_month_day_heading_pane_t_ParamLimits

0xb8e3,	// (0x000a7a62) smil_status_volume_pane

0x31d4,	// (0x0009f353) postcard_address_pane_ParamLimits

0x31d4,	// (0x0009f353) postcard_address_pane

0x31e6,	// (0x0009f365) postcard_message_pane_ParamLimits

0x31e6,	// (0x0009f365) postcard_message_pane

0x36b7,	// (0x0009f836) call2_cli_visual_pane_t1_ParamLimits

0x36b7,	// (0x0009f836) call2_cli_visual_pane_t1

0x3edf,	// (0x000a005e) postcard_message_pane_t1_ParamLimits

0x3edf,	// (0x000a005e) postcard_message_pane_t1

0x3ec8,	// (0x000a0047) postcard_address_pane_t1_ParamLimits

0x3ec8,	// (0x000a0047) postcard_address_pane_t1

0x3eb4,	// (0x000a0033) popup_call3_audio_in_window_ParamLimits

0x3eb4,	// (0x000a0033) popup_call3_audio_in_window

0x3d3f,	// (0x0009febe) bg_popup_call3_in_pane_ParamLimits

0x3d3f,	// (0x0009febe) bg_popup_call3_in_pane

0x3db5,	// (0x0009ff34) popup_call3_audio_in_window_g1_ParamLimits

0x3db5,	// (0x0009ff34) popup_call3_audio_in_window_g1

0x3dd5,	// (0x0009ff54) popup_call3_audio_in_window_g2_ParamLimits

0x3dd5,	// (0x0009ff54) popup_call3_audio_in_window_g2

0x3df5,	// (0x0009ff74) popup_call3_audio_in_window_g3_ParamLimits

0x3df5,	// (0x0009ff74) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x000ab79c) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x000ab79c) popup_call3_audio_in_window_g

0x3e26,	// (0x0009ffa5) popup_call3_audio_in_window_t1_ParamLimits

0x3e26,	// (0x0009ffa5) popup_call3_audio_in_window_t1

0x3e64,	// (0x0009ffe3) popup_call3_audio_in_window_t2_ParamLimits

0x3e64,	// (0x0009ffe3) popup_call3_audio_in_window_t2

0x3ea2,	// (0x000a0021) popup_call3_audio_in_window_t3_ParamLimits

0x3ea2,	// (0x000a0021) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x000ab7a5) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x000ab7a5) popup_call3_audio_in_window_t

0xca4a,	// (0x000a8bc9) bg_popup_call3_rect_pane

0xe081,	// (0x000aa200) bg_popup_call3_rect_pane_g1

0xb4a0,	// (0x000a761f) bg_popup_call3_rect_pane_g2

0xe089,	// (0x000aa208) bg_popup_call3_rect_pane_g3

0xe091,	// (0x000aa210) bg_popup_call3_rect_pane_g4

0xe099,	// (0x000aa218) bg_popup_call3_rect_pane_g5

0xe0a1,	// (0x000aa220) bg_popup_call3_rect_pane_g6

0xe0a9,	// (0x000aa228) bg_popup_call3_rect_pane_g7

0x2d90,	// (0x0009ef0f) mup_visualizer_osc_pane

0xcb17,	// (0x000a8c96) mup_visualizer_spec_pane

0x3d6f,	// (0x0009feee) call3_video_qcif_pane_ParamLimits

0x3d6f,	// (0x0009feee) call3_video_qcif_pane

0x3d82,	// (0x0009ff01) call3_video_qcif_uncrop_pane_ParamLimits

0x3d82,	// (0x0009ff01) call3_video_qcif_uncrop_pane

0x3d90,	// (0x0009ff0f) call3_video_subqcif_pane_ParamLimits

0x3d90,	// (0x0009ff0f) call3_video_subqcif_pane

0x3da4,	// (0x0009ff23) call3_video_subqcif_uncrop_pane_ParamLimits

0x3da4,	// (0x0009ff23) call3_video_subqcif_uncrop_pane

0x3e15,	// (0x0009ff94) popup_call3_audio_in_window_g4_ParamLimits

0x3e15,	// (0x0009ff94) popup_call3_audio_in_window_g4

0x3d2e,	// (0x0009fead) mup_spec_half_pane

0x3d37,	// (0x0009feb6) mup_spec_half_pane_cp

0xe2e6,	// (0x000aa465) mup_osc_middle_pane

0xe2ef,	// (0x000aa46e) mup_visualizer_osc_pane_g1

0x3d0e,	// (0x0009fe8d) mup_spec_bar_pane_ParamLimits

0x3d0e,	// (0x0009fe8d) mup_spec_bar_pane

0xe2d3,	// (0x000aa452) mup_spec_bar_pane_g1

0xe2dd,	// (0x000aa45c) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x000ab790) mup_spec_bar_pane_g

0x0b7f,	// (0x0009ccfe) aid_cale_week_size_cell_pane_ParamLimits

0x0b99,	// (0x0009cd18) bg_cale_heading_pane_ParamLimits

0xb4dd,	// (0x000a765c) bg_cale_pane_cp01_ParamLimits

0x0bb1,	// (0x0009cd30) cale_week_corner_pane_ParamLimits

0x0bd0,	// (0x0009cd4f) cale_week_day_heading_pane_ParamLimits

0x0bed,	// (0x0009cd6c) cale_week_scroll_pane_g1_ParamLimits

0x0c00,	// (0x0009cd7f) cale_week_scroll_pane_g2_ParamLimits

0x0c18,	// (0x0009cd97) cale_week_scroll_pane_g3_ParamLimits

0x0c30,	// (0x0009cdaf) cale_week_scroll_pane_g4_ParamLimits

0x0c48,	// (0x0009cdc7) cale_week_scroll_pane_g5_ParamLimits

0x0c68,	// (0x0009cde7) cale_week_scroll_pane_g6_ParamLimits

0x0c88,	// (0x0009ce07) cale_week_scroll_pane_g7_ParamLimits

0x0ca8,	// (0x0009ce27) cale_week_scroll_pane_g8_ParamLimits

0x0ccc,	// (0x0009ce4b) cale_week_scroll_pane_g9_ParamLimits

0x0ce4,	// (0x0009ce63) cale_week_scroll_pane_g10_ParamLimits

0x0cfc,	// (0x0009ce7b) cale_week_scroll_pane_g11_ParamLimits

0x0d14,	// (0x0009ce93) cale_week_scroll_pane_g12_ParamLimits

0x0d2c,	// (0x0009ceab) cale_week_scroll_pane_g13_ParamLimits

0x0d2c,	// (0x0009ceab) cale_week_scroll_pane_g14_ParamLimits

0x0d2c,	// (0x0009ceab) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x000ab338) cale_week_scroll_pane_g_ParamLimits

0x0d44,	// (0x0009cec3) cale_week_time_pane_ParamLimits

0x0d68,	// (0x0009cee7) grid_cale_week_pane_ParamLimits

0xb4fb,	// (0x000a767a) listscroll_cale_week_pane_t1

0xb50d,	// (0x000a768c) scroll_pane_cp08_ParamLimits

0x1b34,	// (0x0009dcb3) cale_month_corner_pane_ParamLimits

0xb8b9,	// (0x000a7a38) cale_month_pane_t1

0x1f3c,	// (0x0009e0bb) cale_month_week_pane_ParamLimits

0x27b9,	// (0x0009e938) popup_call_status_window_g1_ParamLimits

0x27cd,	// (0x0009e94c) popup_call_status_window_g2_ParamLimits

0x27e1,	// (0x0009e960) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x000ab4e0) popup_call_status_window_g_ParamLimits

0xc7be,	// (0x000a893d) aid_call2_pane

0x3008,	// (0x0009f187) msg_header_pane_g1

0x31d4,	// (0x0009f353) postcard_address2_pane_ParamLimits

0x31d4,	// (0x0009f353) postcard_address2_pane

0x31e6,	// (0x0009f365) postcard_message2_pane_ParamLimits

0x31e6,	// (0x0009f365) postcard_message2_pane

0x3cc0,	// (0x0009fe3f) message2_row_pane_ParamLimits

0x3cc0,	// (0x0009fe3f) message2_row_pane

0x3cdc,	// (0x0009fe5b) address2_row_pane_ParamLimits

0x3cdc,	// (0x0009fe5b) address2_row_pane

0xe2a1,	// (0x000aa420) postcard_message2_row_pane_g1

0xe2a9,	// (0x000aa428) postcard_message2_row_pane_t1

0xe2a1,	// (0x000aa420) address2_row_pane_g1

0xe2a9,	// (0x000aa428) address2_row_pane_t1

0x115b,	// (0x0009d2da) aid_size_cell_vorec

0xb09f,	// (0x000a721e) main_rss_pane

0x3cef,	// (0x0009fe6e) rss_list_single_pane_ParamLimits

0x3cef,	// (0x0009fe6e) rss_list_single_pane

0xe2b7,	// (0x000aa436) rss_list_single_pane_t1

0xe2c5,	// (0x000aa444) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x000ab78b) rss_list_single_pane_t

0xb09f,	// (0x000a721e) main_camera2_pane

0xb09f,	// (0x000a721e) main_video2_pane

0x3f58,	// (0x000a00d7) cams_zoom_pane_cp2_ParamLimits

0x3f58,	// (0x000a00d7) cams_zoom_pane_cp2

0x3f78,	// (0x000a00f7) image2_vga_pane_ParamLimits

0x3f78,	// (0x000a00f7) image2_vga_pane

0x3fc9,	// (0x000a0148) main_camera2_pane_g1_ParamLimits

0x3fc9,	// (0x000a0148) main_camera2_pane_g1

0x3fe9,	// (0x000a0168) main_camera2_pane_g2_ParamLimits

0x3fe9,	// (0x000a0168) main_camera2_pane_g2

0x4009,	// (0x000a0188) main_camera2_pane_g3_ParamLimits

0x4009,	// (0x000a0188) main_camera2_pane_g3

0x4029,	// (0x000a01a8) main_camera2_pane_g4_ParamLimits

0x4029,	// (0x000a01a8) main_camera2_pane_g4

0x4049,	// (0x000a01c8) main_camera2_pane_g5_ParamLimits

0x4049,	// (0x000a01c8) main_camera2_pane_g5

0x4069,	// (0x000a01e8) main_camera2_pane_g6_ParamLimits

0x4069,	// (0x000a01e8) main_camera2_pane_g6

0x4089,	// (0x000a0208) main_camera2_pane_g7_ParamLimits

0x4089,	// (0x000a0208) main_camera2_pane_g7

0x40a9,	// (0x000a0228) main_camera2_pane_g8_ParamLimits

0x40a9,	// (0x000a0228) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x000ab7ac) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x000ab7ac) main_camera2_pane_g

0x40e9,	// (0x000a0268) main_camera2_pane_t1_ParamLimits

0x40e9,	// (0x000a0268) main_camera2_pane_t1

0x411e,	// (0x000a029d) main_camera2_pane_t2_ParamLimits

0x411e,	// (0x000a029d) main_camera2_pane_t2

0x4144,	// (0x000a02c3) main_camera2_pane_t3_ParamLimits

0x4144,	// (0x000a02c3) main_camera2_pane_t3

0x41a2,	// (0x000a0321) main_camera2_pane_t4_ParamLimits

0x41a2,	// (0x000a0321) main_camera2_pane_t4

0x0006,

0xf640,	// (0x000ab7bf) main_camera2_pane_t_ParamLimits

0xf640,	// (0x000ab7bf) main_camera2_pane_t

0x4234,	// (0x000a03b3) cams_zoom_pane_cp4_ParamLimits

0x4234,	// (0x000a03b3) cams_zoom_pane_cp4

0x424a,	// (0x000a03c9) image2_cif_pane_ParamLimits

0x424a,	// (0x000a03c9) image2_cif_pane

0x4275,	// (0x000a03f4) image2_subqcif_pane_ParamLimits

0x4275,	// (0x000a03f4) image2_subqcif_pane

0x428f,	// (0x000a040e) main_video2_pane_g1_ParamLimits

0x428f,	// (0x000a040e) main_video2_pane_g1

0x42a9,	// (0x000a0428) main_video2_pane_g2_ParamLimits

0x42a9,	// (0x000a0428) main_video2_pane_g2

0x42bf,	// (0x000a043e) main_video2_pane_g3_ParamLimits

0x42bf,	// (0x000a043e) main_video2_pane_g3

0x42d5,	// (0x000a0454) main_video2_pane_g4_ParamLimits

0x42d5,	// (0x000a0454) main_video2_pane_g4

0x42eb,	// (0x000a046a) main_video2_pane_g5_ParamLimits

0x42eb,	// (0x000a046a) main_video2_pane_g5

0x4301,	// (0x000a0480) main_video2_pane_g6_ParamLimits

0x4301,	// (0x000a0480) main_video2_pane_g6

0x0005,

0xf64f,	// (0x000ab7ce) main_video2_pane_g_ParamLimits

0xf64f,	// (0x000ab7ce) main_video2_pane_g

0x431b,	// (0x000a049a) main_video2_pane_t1_ParamLimits

0x431b,	// (0x000a049a) main_video2_pane_t1

0x433f,	// (0x000a04be) main_video2_pane_t2_ParamLimits

0x433f,	// (0x000a04be) main_video2_pane_t2

0x438d,	// (0x000a050c) main_video2_pane_t3_ParamLimits

0x438d,	// (0x000a050c) main_video2_pane_t3

0x0002,

0xf65c,	// (0x000ab7db) main_video2_pane_t_ParamLimits

0xf65c,	// (0x000ab7db) main_video2_pane_t

0x3804,	// (0x0009f983) call_muted_g2

0x0001,

0xf5fe,	// (0x000ab77d) call_muted_g

0xb09f,	// (0x000a721e) main_mup2_pane

0x43d1,	// (0x000a0550) main_mup2_pane_g1_ParamLimits

0x43d1,	// (0x000a0550) main_mup2_pane_g1

0x43dd,	// (0x000a055c) main_mup2_pane_g2_ParamLimits

0x43dd,	// (0x000a055c) main_mup2_pane_g2

0xab2f,	// (0x000a6cae) main_mup_pane_g13_cp1

0xab37,	// (0x000a6cb6) mup_volume_pane_cp1

0x43f9,	// (0x000a0578) main_mup2_pane_g4_ParamLimits

0x43f9,	// (0x000a0578) main_mup2_pane_g4

0x440b,	// (0x000a058a) main_mup2_pane_g5_ParamLimits

0x440b,	// (0x000a058a) main_mup2_pane_g5

0x441d,	// (0x000a059c) main_mup2_pane_g6_ParamLimits

0x441d,	// (0x000a059c) main_mup2_pane_g6

0x442f,	// (0x000a05ae) main_mup2_pane_g7_ParamLimits

0x442f,	// (0x000a05ae) main_mup2_pane_g7

0x0006,

0xf663,	// (0x000ab7e2) main_mup2_pane_g_ParamLimits

0xf663,	// (0x000ab7e2) main_mup2_pane_g

0x4447,	// (0x000a05c6) main_mup2_pane_t1_ParamLimits

0x4447,	// (0x000a05c6) main_mup2_pane_t1

0x445d,	// (0x000a05dc) main_mup2_pane_t2_ParamLimits

0x445d,	// (0x000a05dc) main_mup2_pane_t2

0x4473,	// (0x000a05f2) main_mup2_pane_t3_ParamLimits

0x4473,	// (0x000a05f2) main_mup2_pane_t3

0x4489,	// (0x000a0608) main_mup2_pane_t4_ParamLimits

0x4489,	// (0x000a0608) main_mup2_pane_t4

0x44a1,	// (0x000a0620) main_mup2_pane_t5_ParamLimits

0x44a1,	// (0x000a0620) main_mup2_pane_t5

0x44b9,	// (0x000a0638) main_mup2_pane_t6_ParamLimits

0x44b9,	// (0x000a0638) main_mup2_pane_t6

0x0005,

0xf672,	// (0x000ab7f1) main_mup2_pane_t_ParamLimits

0xf672,	// (0x000ab7f1) main_mup2_pane_t

0x44e9,	// (0x000a0668) mup2_visualizer_pane_ParamLimits

0x44e9,	// (0x000a0668) mup2_visualizer_pane

0x4517,	// (0x000a0696) mup_progress_pane_cp_ParamLimits

0x4517,	// (0x000a0696) mup_progress_pane_cp

0xab1a,	// (0x000a6c99) mup_volume_pane_cp_ParamLimits

0xab1a,	// (0x000a6c99) mup_volume_pane_cp

0x452b,	// (0x000a06aa) mup2_visualizer_pane_g1_ParamLimits

0x452b,	// (0x000a06aa) mup2_visualizer_pane_g1

0xe326,	// (0x000aa4a5) mup2_visualizer_pane_g2_ParamLimits

0xe326,	// (0x000aa4a5) mup2_visualizer_pane_g2

0x4542,	// (0x000a06c1) mup2_visualizer_pane_g3_ParamLimits

0x4542,	// (0x000a06c1) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x000ab7fe) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x000ab7fe) mup2_visualizer_pane_g

0xcd35,	// (0x000a8eb4) aid_size_cell_fmradio

0x39b6,	// (0x0009fb35) aid_height_parent_landcape

0xb717,	// (0x000a7896) wml_content_pane_cp

0xb71f,	// (0x000a789e) wml_tabs_pane

0xb728,	// (0x000a78a7) popup_wml_miniature_window

0xb730,	// (0x000a78af) scroll_pane_cp021

0xb744,	// (0x000a78c3) wml_content_pane_comp8

0xb09f,	// (0x000a721e) bg_popup_sub_pane_cp05

0xe344,	// (0x000aa4c3) popup_wml_miniature_window_g1

0xe34c,	// (0x000aa4cb) wml_miniature_view_pane

0x454e,	// (0x000a06cd) aid_size_wml_view

0x4556,	// (0x000a06d5) wml_miniature_view_pane_g1

0x455f,	// (0x000a06de) wml_miniature_view_pane_g2

0x4568,	// (0x000a06e7) wml_miniature_view_pane_g3

0x4570,	// (0x000a06ef) wml_miniature_view_pane_g4

0x4578,	// (0x000a06f7) wml_miniature_view_pane_g5

0x4580,	// (0x000a06ff) wml_miniature_view_pane_g6

0x4588,	// (0x000a0707) wml_miniature_view_pane_g7

0x4590,	// (0x000a070f) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x000ab805) wml_miniature_view_pane_g

0xe354,	// (0x000aa4d3) background_graphic_ParamLimits

0xe354,	// (0x000aa4d3) background_graphic

0xe360,	// (0x000aa4df) wml_tabs_2_pane

0xe369,	// (0x000aa4e8) wml_tabs_3_pane_ParamLimits

0xe369,	// (0x000aa4e8) wml_tabs_3_pane

0xe37b,	// (0x000aa4fa) wml_tabs_4_pane_ParamLimits

0xe37b,	// (0x000aa4fa) wml_tabs_4_pane

0xe391,	// (0x000aa510) wml_tabs_5_pane_ParamLimits

0xe391,	// (0x000aa510) wml_tabs_5_pane

0xe3ab,	// (0x000aa52a) wml_tabs_pane_g2_ParamLimits

0xe3ab,	// (0x000aa52a) wml_tabs_pane_g2

0xe3bf,	// (0x000aa53e) wml_tabs_pane_g3_ParamLimits

0xe3bf,	// (0x000aa53e) wml_tabs_pane_g3

0x4598,	// (0x000a0717) wml_tabs_2_active_pane_ParamLimits

0x4598,	// (0x000a0717) wml_tabs_2_active_pane

0x45ac,	// (0x000a072b) wml_tabs_2_passive_pane_ParamLimits

0x45ac,	// (0x000a072b) wml_tabs_2_passive_pane

0x45c0,	// (0x000a073f) wml_tabs_3_active_pane_cp_ParamLimits

0x45c0,	// (0x000a073f) wml_tabs_3_active_pane_cp

0x45d5,	// (0x000a0754) wml_tabs_3_passive_pane_ParamLimits

0x45d5,	// (0x000a0754) wml_tabs_3_passive_pane

0x45e8,	// (0x000a0767) wml_tabs_3_passive_pane_cp_ParamLimits

0x45e8,	// (0x000a0767) wml_tabs_3_passive_pane_cp

0x45ff,	// (0x000a077e) tabs_4_active_pane

0x4607,	// (0x000a0786) tabs_4_passive_pane

0x4611,	// (0x000a0790) tabs_4_passive_pane_cp

0x4619,	// (0x000a0798) tabs_4_passive_pane_cp2

0x36d1,	// (0x0009f850) aid_height_text

0x2d66,	// (0x0009eee5) mup_volume_cont_pane_ParamLimits

0x2d66,	// (0x0009eee5) mup_volume_cont_pane

0x075d,	// (0x0009c8dc) aid_size_cell_pinb

0x0767,	// (0x0009c8e6) aid_size_list_pinb

0x4503,	// (0x000a0682) mup2_volume_cont_pane_ParamLimits

0x4503,	// (0x000a0682) mup2_volume_cont_pane

0xab06,	// (0x000a6c85) mup2_volume_cont_pane_g1_ParamLimits

0xab06,	// (0x000a6c85) mup2_volume_cont_pane_g1

0x0400,	// (0x0009c57f) aid_size_cell_touch_ParamLimits

0x0400,	// (0x0009c57f) aid_size_cell_touch

0x062d,	// (0x0009c7ac) touch_pane_ParamLimits

0x062d,	// (0x0009c7ac) touch_pane

0xa501,	// (0x000a6680) main_rss2_pane

0xe3dc,	// (0x000aa55b) listscroll_rss2_pane

0xe3e5,	// (0x000aa564) rss2_navigation_pane

0xe3ed,	// (0x000aa56c) list_rss2_pane

0xc901,	// (0x000a8a80) scroll_pane_cp22

0xe3f5,	// (0x000aa574) rss2_navigation_pane_g1

0xe3fe,	// (0x000aa57d) rss2_navigation_pane_g2

0xe406,	// (0x000aa585) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x000ab816) rss2_navigation_pane_g

0xe40e,	// (0x000aa58d) rss2_navigation_pane_t1

0x4623,	// (0x000a07a2) rss2_list_single_pane_ParamLimits

0x4623,	// (0x000a07a2) rss2_list_single_pane

0xe41c,	// (0x000aa59b) rss2_list_single_pane_t2

0xe42a,	// (0x000aa5a9) rss2_list_single_pane_t3_ParamLimits

0xe42a,	// (0x000aa5a9) rss2_list_single_pane_t3

0xe447,	// (0x000aa5c6) rss2_list_single_pane_t4

0x25d9,	// (0x0009e758) smil_status_pane_g1

0xa4f3,	// (0x000a6672) main_image2_pane_ParamLimits

0xa4f3,	// (0x000a6672) main_image2_pane

0x40c9,	// (0x000a0248) main_camera2_pane_g9_ParamLimits

0x40c9,	// (0x000a0248) main_camera2_pane_g9

0x41f7,	// (0x000a0376) main_camera2_pane_t5_ParamLimits

0x41f7,	// (0x000a0376) main_camera2_pane_t5

0xaad6,	// (0x000a6c55) main_camera2_pane_t6_ParamLimits

0xaad6,	// (0x000a6c55) main_camera2_pane_t6

0x4638,	// (0x000a07b7) main_image2_pane_g1_ParamLimits

0x4638,	// (0x000a07b7) main_image2_pane_g1

0x340d,	// (0x0009f58c) smil2_video_pane_ParamLimits

0x340d,	// (0x0009f58c) smil2_video_pane

0xa4a9,	// (0x000a6628) aid_zoom_text_primary_cp

0xa4e9,	// (0x000a6668) popup_preview_fixed_window

0xb680,	// (0x000a77ff) im_reading_pane_g1

0x3f40,	// (0x000a00bf) cams2_bc_adjust_pane_cp_ParamLimits

0x3f40,	// (0x000a00bf) cams2_bc_adjust_pane_cp

0x4226,	// (0x000a03a5) cams2_bc_adjust_pane_ParamLimits

0x4226,	// (0x000a03a5) cams2_bc_adjust_pane

0x464e,	// (0x000a07cd) cams2_bc_adjust_pane_g1

0xab3f,	// (0x000a6cbe) cams2_slider_pane

0xab48,	// (0x000a6cc7) cams2_slider_pane_g1

0xab51,	// (0x000a6cd0) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x000ab81d) cams2_slider_pane_g

0x0855,	// (0x0009c9d4) calc_display_pane_ParamLimits

0x087d,	// (0x0009c9fc) calc_paper_pane_ParamLimits

0x08a0,	// (0x0009ca1f) grid_calc_pane_ParamLimits

0xa9fb,	// (0x000a6b7a) popup_clock_digital_window_t1_ParamLimits

0xccd2,	// (0x000a8e51) main_image_pane_t1

0x0837,	// (0x0009c9b6) aid_size_cell_calc_ParamLimits

0x0837,	// (0x0009c9b6) aid_size_cell_calc

0x3a0e,	// (0x0009fb8d) popup_blid_sat_info2_window_ParamLimits

0x3a0e,	// (0x0009fb8d) popup_blid_sat_info2_window

0xe45d,	// (0x000aa5dc) aid_size_cell_blid

0xe465,	// (0x000aa5e4) bg_popup_window_pane_cp07

0xe488,	// (0x000aa607) grid_popup_blid_pane

0xe492,	// (0x000aa611) heading_pane_cp05_ParamLimits

0xe492,	// (0x000aa611) heading_pane_cp05

0xe55c,	// (0x000aa6db) cell_popup_blid_pane_ParamLimits

0xe55c,	// (0x000aa6db) cell_popup_blid_pane

0xe580,	// (0x000aa6ff) cell_popup_blid_pane_g1

0xe588,	// (0x000aa707) cell_popup_blid_pane_t1

0x44d3,	// (0x000a0652) mup2_indicator_pane_ParamLimits

0x44d3,	// (0x000a0652) mup2_indicator_pane

0xca4a,	// (0x000a8bc9) mup2_visualizer_osc_pane

0xe332,	// (0x000aa4b1) mup2_visualizer_spec_pane_ParamLimits

0xe332,	// (0x000aa4b1) mup2_visualizer_spec_pane

0x4656,	// (0x000a07d5) mup2_spec_half_pane

0x465f,	// (0x000a07de) mup2_spec_half_pane_cp

0x4667,	// (0x000a07e6) mup2_spec_bar_pane_ParamLimits

0x4667,	// (0x000a07e6) mup2_spec_bar_pane

0xe2d3,	// (0x000aa452) mup2_spec_bar_pane_g1

0xe2dd,	// (0x000aa45c) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x000ab790) mup2_spec_bar_pane_g

0x4687,	// (0x000a0806) mup2_osc_middle_pane

0xe2ef,	// (0x000aa46e) mup2_visualizer_osc_pane_g1

0xa50b,	// (0x000a668a) popup_number_entry_window_t1_ParamLimits

0xa51e,	// (0x000a669d) popup_number_entry_window_t2_ParamLimits

0xa530,	// (0x000a66af) popup_number_entry_window_t3_ParamLimits

0x069f,	// (0x0009c81e) popup_number_entry_window_t5_ParamLimits

0x069f,	// (0x0009c81e) popup_number_entry_window_t5

0xf0d3,	// (0x000ab252) popup_number_entry_window_t_ParamLimits

0xa542,	// (0x000a66c1) text_title_cp2_ParamLimits

0xaa3a,	// (0x000a6bb9) aid_hotspot_pointer_text2_pane

0xaa54,	// (0x000a6bd3) main_viewer_pane_g9_ParamLimits

0xaa54,	// (0x000a6bd3) main_viewer_pane_g9

0xb8b9,	// (0x000a7a38) cale_month_pane_t1_ParamLimits

0xb8f6,	// (0x000a7a75) bg_cale_pane_ParamLimits

0xb90e,	// (0x000a7a8d) list_cale_pane_ParamLimits

0xb91f,	// (0x000a7a9e) listscroll_cale_day_pane_t1

0xb931,	// (0x000a7ab0) scroll_pane_cp09_ParamLimits

0x2d98,	// (0x0009ef17) main_mup_eq_pane_t1_ParamLimits

0x2d98,	// (0x0009ef17) main_mup_eq_pane_t1

0x2db2,	// (0x0009ef31) main_mup_eq_pane_t2_ParamLimits

0x2db2,	// (0x0009ef31) main_mup_eq_pane_t2

0x2dcc,	// (0x0009ef4b) main_mup_eq_pane_t3_ParamLimits

0x2dcc,	// (0x0009ef4b) main_mup_eq_pane_t3

0x2de8,	// (0x0009ef67) main_mup_eq_pane_t4_ParamLimits

0x2de8,	// (0x0009ef67) main_mup_eq_pane_t4

0x2e04,	// (0x0009ef83) main_mup_eq_pane_t5_ParamLimits

0x2e04,	// (0x0009ef83) main_mup_eq_pane_t5

0x2e20,	// (0x0009ef9f) main_mup_eq_pane_t6_ParamLimits

0x2e20,	// (0x0009ef9f) main_mup_eq_pane_t6

0x2e34,	// (0x0009efb3) main_mup_eq_pane_t7_ParamLimits

0x2e34,	// (0x0009efb3) main_mup_eq_pane_t7

0x2e48,	// (0x0009efc7) main_mup_eq_pane_t8_ParamLimits

0x2e48,	// (0x0009efc7) main_mup_eq_pane_t8

0x2e5c,	// (0x0009efdb) main_mup_eq_pane_t9_ParamLimits

0x2e5c,	// (0x0009efdb) main_mup_eq_pane_t9

0x2e76,	// (0x0009eff5) main_mup_eq_pane_t10_ParamLimits

0x2e76,	// (0x0009eff5) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x000ab5df) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x000ab5df) main_mup_eq_pane_t

0x2f25,	// (0x0009f0a4) mup_equalizer_pane_cp5_ParamLimits

0x2f39,	// (0x0009f0b8) mup_equalizer_pane_cp6_ParamLimits

0x2f4d,	// (0x0009f0cc) mup_equalizer_pane_cp7_ParamLimits

0xa501,	// (0x000a6680) main_gallery_pane

0xe2f8,	// (0x000aa477) smil2_volume_pane

0xe300,	// (0x000aa47f) smil_status_volume_pane_g1_ParamLimits

0xe313,	// (0x000aa492) smil_status_volume_pane_g2_ParamLimits

0xaab4,	// (0x000a6c33) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x000ab795) smil_status_volume_pane_g_ParamLimits

0xe465,	// (0x000aa5e4) bg_popup_window_pane_cp07_ParamLimits

0xe473,	// (0x000aa5f2) blid_firmament_pane

0x4690,	// (0x000a080f) aid_size_cell_gallery_ParamLimits

0x4690,	// (0x000a080f) aid_size_cell_gallery

0x46a6,	// (0x000a0825) grid_gallery_pane_ParamLimits

0x46a6,	// (0x000a0825) grid_gallery_pane

0x46bf,	// (0x000a083e) cell_gallery_pane_ParamLimits

0x46bf,	// (0x000a083e) cell_gallery_pane

0xe596,	// (0x000aa715) bg_cell_gallery_focus_pane_ParamLimits

0xe596,	// (0x000aa715) bg_cell_gallery_focus_pane

0xe5a8,	// (0x000aa727) cell_gallery_pane_g1_ParamLimits

0xe5a8,	// (0x000aa727) cell_gallery_pane_g1

0x4708,	// (0x000a0887) cell_gallery_pane_g2_ParamLimits

0x4708,	// (0x000a0887) cell_gallery_pane_g2

0x4715,	// (0x000a0894) cell_gallery_pane_g3_ParamLimits

0x4715,	// (0x000a0894) cell_gallery_pane_g3

0xe5b4,	// (0x000aa733) cell_gallery_pane_g4_ParamLimits

0xe5b4,	// (0x000aa733) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x000ab843) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x000ab843) cell_gallery_pane_g

0xe5c0,	// (0x000aa73f) bg_cell_gallery_focus_pane_g1

0xe5c8,	// (0x000aa747) bg_cell_gallery_focus_pane_g2

0xe5d0,	// (0x000aa74f) bg_cell_gallery_focus_pane_g3

0xe5d8,	// (0x000aa757) bg_cell_gallery_focus_pane_g4

0xe5e0,	// (0x000aa75f) bg_cell_gallery_focus_pane_g5

0xe5e8,	// (0x000aa767) bg_cell_gallery_focus_pane_g6

0xe5f0,	// (0x000aa76f) bg_cell_gallery_focus_pane_g7

0xe5f8,	// (0x000aa777) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x000ab84c) bg_cell_gallery_focus_pane_g

0xe600,	// (0x000aa77f) aid_firma_cardinal

0xe614,	// (0x000aa793) blid_firmament_pane_t1

0xe62b,	// (0x000aa7aa) blid_firmament_pane_t2

0xe642,	// (0x000aa7c1) blid_firmament_pane_t3

0xe659,	// (0x000aa7d8) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x000ab85d) blid_firmament_pane_t

0xe670,	// (0x000aa7ef) blid_sat_info_pane

0xe680,	// (0x000aa7ff) blid_sat_info_pane_g1

0xe680,	// (0x000aa7ff) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x000ab866) blid_sat_info_pane_g

0xe68a,	// (0x000aa809) blid_sat_info_pane_t1

0xe698,	// (0x000aa817) smil2_volume_content_pane

0xe6a1,	// (0x000aa820) smil2_volume_pane_g1

0xe6a9,	// (0x000aa828) smil2_volume_content_pane_g1

0xe6b2,	// (0x000aa831) smil2_volume_content_pane_g2

0xe6bb,	// (0x000aa83a) smil2_volume_content_pane_g3

0xe6c4,	// (0x000aa843) smil2_volume_content_pane_g4

0xe6cd,	// (0x000aa84c) smil2_volume_content_pane_g5

0xe6d6,	// (0x000aa855) smil2_volume_content_pane_g6

0xe6df,	// (0x000aa85e) smil2_volume_content_pane_g7

0xe6e8,	// (0x000aa867) smil2_volume_content_pane_g8

0xe6f1,	// (0x000aa870) smil2_volume_content_pane_g9

0xe6fa,	// (0x000aa879) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x000ab86b) smil2_volume_content_pane_g

0x0e1c,	// (0x0009cf9b) cale_week_day_heading_pane_t1_ParamLimits

0x0e61,	// (0x0009cfe0) cale_week_day_heading_pane_t2_ParamLimits

0x0eab,	// (0x0009d02a) cale_week_day_heading_pane_t3_ParamLimits

0x0ef5,	// (0x0009d074) cale_week_day_heading_pane_t4_ParamLimits

0x0f3f,	// (0x0009d0be) cale_week_day_heading_pane_t5_ParamLimits

0x0f91,	// (0x0009d110) cale_week_day_heading_pane_t6_ParamLimits

0x0fe3,	// (0x0009d162) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x000ab357) cale_week_day_heading_pane_t_ParamLimits

0xb52a,	// (0x000a76a9) bg_cale_side_pane_ParamLimits

0x1028,	// (0x0009d1a7) cale_week_time_pane_t1_ParamLimits

0x1042,	// (0x0009d1c1) cale_week_time_pane_t2_ParamLimits

0x105c,	// (0x0009d1db) cale_week_time_pane_t3_ParamLimits

0x1076,	// (0x0009d1f5) cale_week_time_pane_t4_ParamLimits

0x1090,	// (0x0009d20f) cale_week_time_pane_t5_ParamLimits

0x10aa,	// (0x0009d229) cale_week_time_pane_t6_ParamLimits

0x10c4,	// (0x0009d243) cale_week_time_pane_t7_ParamLimits

0x10de,	// (0x0009d25d) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x000ab366) cale_week_time_pane_t_ParamLimits

0x10fe,	// (0x0009d27d) cell_cale_week_pane_g2_ParamLimits

0xb52a,	// (0x000a76a9) bg_cale_side_pane_cp01_ParamLimits

0x23c6,	// (0x0009e545) cale_month_week_pane_t1_ParamLimits

0x23df,	// (0x0009e55e) cale_month_week_pane_t2_ParamLimits

0x23f8,	// (0x0009e577) cale_month_week_pane_t3_ParamLimits

0x2411,	// (0x0009e590) cale_month_week_pane_t4_ParamLimits

0x242a,	// (0x0009e5a9) cale_month_week_pane_t5_ParamLimits

0x2443,	// (0x0009e5c2) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x000ab43f) cale_month_week_pane_t_ParamLimits

0xa96b,	// (0x000a6aea) cell_cale_month_pane_g1_ParamLimits

0xa501,	// (0x000a6680) main_cale_event_viewer_pane

0x03f6,	// (0x0009c575) listscroll_cale_event_viewer_pane

0xe703,	// (0x000aa882) list_cale_ev_pane

0xe70b,	// (0x000aa88a) scroll_pane_cp023

0xe717,	// (0x000aa896) field_cale_ev_pane_ParamLimits

0xe717,	// (0x000aa896) field_cale_ev_pane

0xe735,	// (0x000aa8b4) field_cale_ev_content_pane_ParamLimits

0xe735,	// (0x000aa8b4) field_cale_ev_content_pane

0xe741,	// (0x000aa8c0) field_cale_ev_pane_g1_ParamLimits

0xe741,	// (0x000aa8c0) field_cale_ev_pane_g1

0xe74d,	// (0x000aa8cc) field_cale_ev_pane_g2_ParamLimits

0xe74d,	// (0x000aa8cc) field_cale_ev_pane_g2

0xe765,	// (0x000aa8e4) field_cale_ev_pane_g3_ParamLimits

0xe765,	// (0x000aa8e4) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x000ab880) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x000ab880) field_cale_ev_pane_g

0xe77d,	// (0x000aa8fc) field_cale_ev_pane_t1_ParamLimits

0xe77d,	// (0x000aa8fc) field_cale_ev_pane_t1

0xe794,	// (0x000aa913) field_cale_ev_content_pane_t1_ParamLimits

0xe794,	// (0x000aa913) field_cale_ev_content_pane_t1

0x2ffd,	// (0x0009f17c) bg_button_pane_cp01

0x0b6d,	// (0x0009ccec) listscroll_cale_week_pane_ParamLimits

0xb4d4,	// (0x000a7653) popup_toolbar_window_cp01

0xb4fb,	// (0x000a767a) listscroll_cale_week_pane_t1_ParamLimits

0x0b6d,	// (0x0009ccec) listscroll_cale_day_pane_ParamLimits

0xb4d4,	// (0x000a7653) popup_toolbar_window_cp02

0xb91f,	// (0x000a7a9e) listscroll_cale_day_pane_t1_ParamLimits

0x39d4,	// (0x0009fb53) main_cale_month_pane_ParamLimits

0xaa9f,	// (0x000a6c1e) popup_toolbar_window_cp03_ParamLimits

0xaa9f,	// (0x000a6c1e) popup_toolbar_window_cp03

0x32d5,	// (0x0009f454) main_image_pane_g2_ParamLimits

0x32d5,	// (0x0009f454) main_image_pane_g2

0x32e6,	// (0x0009f465) main_image_pane_g3_ParamLimits

0x32e6,	// (0x0009f465) main_image_pane_g3

0x0002,

0xf4f2,	// (0x000ab671) main_image_pane_g_ParamLimits

0xf4f2,	// (0x000ab671) main_image_pane_g

0xccd2,	// (0x000a8e51) main_image_pane_t1_ParamLimits

0x32f7,	// (0x0009f476) main_image_pane_t2_ParamLimits

0x32f7,	// (0x0009f476) main_image_pane_t2

0x3309,	// (0x0009f488) main_image_pane_t3_ParamLimits

0x3309,	// (0x0009f488) main_image_pane_t3

0x3331,	// (0x0009f4b0) main_image_pane_t4_ParamLimits

0x3331,	// (0x0009f4b0) main_image_pane_t4

0x0003,

0xf4f9,	// (0x000ab678) main_image_pane_t_ParamLimits

0xf4f9,	// (0x000ab678) main_image_pane_t

0x3351,	// (0x0009f4d0) popup_image_details_window_cp01

0x335b,	// (0x0009f4da) popup_toobar_trans_pane_cp01_ParamLimits

0x335b,	// (0x0009f4da) popup_toobar_trans_pane_cp01

0x3aed,	// (0x0009fc6c) popup_image_details_window_ParamLimits

0x3aed,	// (0x0009fc6c) popup_image_details_window

0xaa72,	// (0x000a6bf1) popup_image_focus_window

0x3efa,	// (0x000a0079) camera2_autofocus_pane_ParamLimits

0x3efa,	// (0x000a0079) camera2_autofocus_pane

0x03f6,	// (0x0009c575) bg_popup_sub_pane_cp06

0xe7b2,	// (0x000aa931) popup_image_focus_window_g1

0xe7ba,	// (0x000aa939) popup_image_focus_window_g2

0xe7c2,	// (0x000aa941) popup_image_focus_window_g3

0xe7ca,	// (0x000aa949) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x000ab887) popup_image_focus_window_g

0xe7d2,	// (0x000aa951) popup_image_focus_window_t1

0xe7e0,	// (0x000aa95f) popup_image_focus_window_t2

0xe7f0,	// (0x000aa96f) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x000ab890) popup_image_focus_window_t

0xe7fe,	// (0x000aa97d) camera2_autofocus_pane_g1

0xcf55,	// (0x000a90d4) bg_tb_trans_pane_cp01

0xe80c,	// (0x000aa98b) popup_image_details_window_g1

0xe81f,	// (0x000aa99e) popup_image_details_window_g2

0x0002,

0xf723,	// (0x000ab8a2) popup_image_details_window_g

0xe848,	// (0x000aa9c7) popup_image_details_window_t1

0xe85a,	// (0x000aa9d9) popup_image_details_window_t2

0xe873,	// (0x000aa9f2) popup_image_details_window_t3

0xe887,	// (0x000aaa06) popup_image_details_window_t4

0xe8a2,	// (0x000aaa21) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x000ab8a9) popup_image_details_window_t

0xb3ab,	// (0x000a752a) bg_calc_paper_pane_ParamLimits

0xa501,	// (0x000a6680) grid_highlight_pane_cp013

0xa8d7,	// (0x000a6a56) list_calc_pane_ParamLimits

0xa8e9,	// (0x000a6a68) scroll_pane_cp024

0xb3bf,	// (0x000a753e) bg_calc_display_pane_ParamLimits

0x099e,	// (0x0009cb1d) calc_display_pane_t1_ParamLimits

0x09b0,	// (0x0009cb2f) calc_display_pane_t2_ParamLimits

0xa8f1,	// (0x000a6a70) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x000ab2d9) calc_display_pane_t_ParamLimits

0x0a6a,	// (0x0009cbe9) cell_calc_pane_g2

0x0001,

0xf177,	// (0x000ab2f6) cell_calc_pane_g

0x0a73,	// (0x0009cbf2) cell_calc_pane_t1

0xb41e,	// (0x000a759d) grid_highlight_pane_cp02_ParamLimits

0xb434,	// (0x000a75b3) toolbar_button_pane_cp01_ParamLimits

0xb434,	// (0x000a75b3) toolbar_button_pane_cp01

0xcd17,	// (0x000a8e96) temp_image_control_pane_ParamLimits

0xcd17,	// (0x000a8e96) temp_image_control_pane

0xa4f3,	// (0x000a6672) main_mp3_pane

0xe8bc,	// (0x000aaa3b) temp_image_control_pane_g1_ParamLimits

0xe8bc,	// (0x000aaa3b) temp_image_control_pane_g1

0xe8ca,	// (0x000aaa49) temp_image_control_pane_g2_ParamLimits

0xe8ca,	// (0x000aaa49) temp_image_control_pane_g2

0xe8dc,	// (0x000aaa5b) temp_image_control_pane_g3_ParamLimits

0xe8dc,	// (0x000aaa5b) temp_image_control_pane_g3

0x4752,	// (0x000a08d1) temp_image_control_pane_g4_ParamLimits

0x4752,	// (0x000a08d1) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x000ab8b4) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x000ab8b4) temp_image_control_pane_g

0xe8bc,	// (0x000aaa3b) main_mp3_pane_g1

0x4765,	// (0x000a08e4) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x000ab8bd) main_mp3_pane_g

0xe91f,	// (0x000aaa9e) main_mp3_pane_t1

0xb58f,	// (0x000a770e) main_camera_pane_g8_ParamLimits

0xb58f,	// (0x000a770e) main_camera_pane_g8

0x1410,	// (0x0009d58f) main_video_pane_g7_ParamLimits

0x1410,	// (0x0009d58f) main_video_pane_g7

0xaaf4,	// (0x000a6c73) main_camera2_pane_t7_ParamLimits

0xaaf4,	// (0x000a6c73) main_camera2_pane_t7

0xb6d7,	// (0x000a7856) scroll_pane_cp025_ParamLimits

0xb6d7,	// (0x000a7856) scroll_pane_cp025

0xb6eb,	// (0x000a786a) scroll_pane_cp026_ParamLimits

0xb6eb,	// (0x000a786a) scroll_pane_cp026

0xb6fa,	// (0x000a7879) wml_content_pane_ParamLimits

0xa501,	// (0x000a6680) main_touch_calib_pane

0x4839,	// (0x000a09b8) main_touch_calib_pane_g1

0x484b,	// (0x000a09ca) main_touch_calib_pane_g2

0x485d,	// (0x000a09dc) main_touch_calib_pane_g3

0x486f,	// (0x000a09ee) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x000ab8db) main_touch_calib_pane_g

0x4881,	// (0x000a0a00) main_touch_calib_pane_t1

0x489b,	// (0x000a0a1a) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x000ab8e4) main_touch_calib_pane_t

0xc98b,	// (0x000a8b0a) mup_progress_pane_cp02

0xc9aa,	// (0x000a8b29) navi_pane_g1

0xca0c,	// (0x000a8b8b) navi_pane_mp_t3

0xa4f3,	// (0x000a6672) main_mp3_pane_ParamLimits

0x3c72,	// (0x0009fdf1) navi_pane_ParamLimits

0xe8bc,	// (0x000aaa3b) main_mp3_pane_g1_ParamLimits

0x4765,	// (0x000a08e4) main_mp3_pane_g2_ParamLimits

0x4773,	// (0x000a08f2) main_mp3_pane_g3_ParamLimits

0x4773,	// (0x000a08f2) main_mp3_pane_g3

0x4781,	// (0x000a0900) main_mp3_pane_g4_ParamLimits

0x4781,	// (0x000a0900) main_mp3_pane_g4

0xe8ec,	// (0x000aaa6b) main_mp3_pane_g5_ParamLimits

0xe8ec,	// (0x000aaa6b) main_mp3_pane_g5

0xe8fa,	// (0x000aaa79) main_mp3_pane_g6_ParamLimits

0xe8fa,	// (0x000aaa79) main_mp3_pane_g6

0xe907,	// (0x000aaa86) main_mp3_pane_g7_ParamLimits

0xe907,	// (0x000aaa86) main_mp3_pane_g7

0xe913,	// (0x000aaa92) main_mp3_pane_g8_ParamLimits

0xe913,	// (0x000aaa92) main_mp3_pane_g8

0xf73e,	// (0x000ab8bd) main_mp3_pane_g_ParamLimits

0x478d,	// (0x000a090c) main_mp3_pane_t2

0x479b,	// (0x000a091a) main_mp3_pane_t3

0xe92d,	// (0x000aaaac) main_mp3_pane_t4

0xe93b,	// (0x000aaaba) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x000ab8ce) main_mp3_pane_t

0xe949,	// (0x000aaac8) mup_progress_pane_cp01

0xa4a9,	// (0x000a6628) aid_zoom_text_secondary2

0xe703,	// (0x000aa882) list_cale_ev2_pane

0xe70b,	// (0x000aa88a) scroll_pane_cp023_ParamLimits

0x48f1,	// (0x000a0a70) field_cale_ev2_pane_ParamLimits

0x48f1,	// (0x000a0a70) field_cale_ev2_pane

0x4911,	// (0x000a0a90) field_cale_ev2_pane_g1_ParamLimits

0x4911,	// (0x000a0a90) field_cale_ev2_pane_g1

0x491d,	// (0x000a0a9c) field_cale_ev2_pane_g2_ParamLimits

0x491d,	// (0x000a0a9c) field_cale_ev2_pane_g2

0x4935,	// (0x000a0ab4) field_cale_ev2_pane_g3_ParamLimits

0x4935,	// (0x000a0ab4) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x000ab8ef) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x000ab8ef) field_cale_ev2_pane_g

0xe95d,	// (0x000aaadc) field_cale_ev2_pane_t1_ParamLimits

0xe95d,	// (0x000aaadc) field_cale_ev2_pane_t1

0xe974,	// (0x000aaaf3) field_cale_ev2_pane_t2_ParamLimits

0xe974,	// (0x000aaaf3) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x000ab8f8) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x000ab8f8) field_cale_ev2_pane_t

0x318a,	// (0x0009f309) main_postcard_pane_g5_ParamLimits

0x318a,	// (0x0009f309) main_postcard_pane_g5

0x31a0,	// (0x0009f31f) main_postcard_pane_g6_ParamLimits

0x31a0,	// (0x0009f31f) main_postcard_pane_g6

0x11dc,	// (0x0009d35b) camera2_autofocus_pane_cp_ParamLimits

0x11dc,	// (0x0009d35b) camera2_autofocus_pane_cp

0xa4f3,	// (0x000a6672) main_mup3_pane

0x494d,	// (0x000a0acc) main_mup3_pane_g1_ParamLimits

0x494d,	// (0x000a0acc) main_mup3_pane_g1

0x496f,	// (0x000a0aee) main_mup3_pane_g2_ParamLimits

0x496f,	// (0x000a0aee) main_mup3_pane_g2

0x49ed,	// (0x000a0b6c) main_mup3_pane_g3_ParamLimits

0x49ed,	// (0x000a0b6c) main_mup3_pane_g3

0x4a33,	// (0x000a0bb2) main_mup3_pane_g4_ParamLimits

0x4a33,	// (0x000a0bb2) main_mup3_pane_g4

0x4a79,	// (0x000a0bf8) main_mup3_pane_g5_ParamLimits

0x4a79,	// (0x000a0bf8) main_mup3_pane_g5

0x4abf,	// (0x000a0c3e) main_mup3_pane_g6_ParamLimits

0x4abf,	// (0x000a0c3e) main_mup3_pane_g6

0xe9a9,	// (0x000aab28) main_mup3_pane_g7_ParamLimits

0xe9a9,	// (0x000aab28) main_mup3_pane_g7

0x0007,

0xf789,	// (0x000ab908) main_mup3_pane_g_ParamLimits

0xf789,	// (0x000ab908) main_mup3_pane_g

0x4b3d,	// (0x000a0cbc) main_mup3_pane_t1_ParamLimits

0x4b3d,	// (0x000a0cbc) main_mup3_pane_t1

0x4bb1,	// (0x000a0d30) main_mup3_pane_t2_ParamLimits

0x4bb1,	// (0x000a0d30) main_mup3_pane_t2

0x4c85,	// (0x000a0e04) main_mup3_pane_t4_ParamLimits

0x4c85,	// (0x000a0e04) main_mup3_pane_t4

0x4cdb,	// (0x000a0e5a) main_mup3_pane_t5_ParamLimits

0x4cdb,	// (0x000a0e5a) main_mup3_pane_t5

0x4d97,	// (0x000a0f16) main_mup3_pane_t6_ParamLimits

0x4d97,	// (0x000a0f16) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x000ab919) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x000ab919) main_mup3_pane_t

0x4e4f,	// (0x000a0fce) mup3_progress_pane_ParamLimits

0x4e4f,	// (0x000a0fce) mup3_progress_pane

0x4ee5,	// (0x000a1064) popup_mup3_control_window_ParamLimits

0x4ee5,	// (0x000a1064) popup_mup3_control_window

0xe9b7,	// (0x000aab36) popup_mup3_text_window

0x4f17,	// (0x000a1096) mup3_progress_pane_t1

0x4f36,	// (0x000a10b5) mup3_progress_pane_t2

0xe9bf,	// (0x000aab3e) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x000ab926) mup3_progress_pane_t

0xe9dc,	// (0x000aab5b) mup_progress_pane_cp03

0x03f6,	// (0x0009c575) bg_tb_trans_pane_cp04

0x4f55,	// (0x000a10d4) mup3_volume_pane

0x4f5d,	// (0x000a10dc) popup_mup3_control_window_g1

0x4f66,	// (0x000a10e5) mup3_volume_pane_g1

0x4f6f,	// (0x000a10ee) mup3_volume_pane_g2

0x4f78,	// (0x000a10f7) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x000ab92d) mup3_volume_pane_g

0x03f6,	// (0x0009c575) bg_tb_trans_pane_cp03

0xe9ec,	// (0x000aab6b) popup_mup3_text_window_g1

0xe9f4,	// (0x000aab73) popup_mup3_text_window_t1

0xb407,	// (0x000a7586) list_calc_item_pane_g1_ParamLimits

0xe3d3,	// (0x000aa552) mup_volume_pane_cp_g1

0x48b5,	// (0x000a0a34) main_touch_calib_pane_t3

0x48c9,	// (0x000a0a48) main_touch_calib_pane_t4

0x48dd,	// (0x000a0a5c) main_touch_calib_pane_t5

0xa485,	// (0x000a6604) aid_cell_size_toolbar2

0xa48d,	// (0x000a660c) aid_popup3_width_pane

0xa499,	// (0x000a6618) aid_zoom_text_msg_primary

0x11b3,	// (0x0009d332) vorec_t7

0xb3cb,	// (0x000a754a) bg_calc_paper_pane_g1_ParamLimits

0xb3d7,	// (0x000a7556) bg_calc_paper_pane_g2_ParamLimits

0xb3e3,	// (0x000a7562) bg_calc_paper_pane_g3_ParamLimits

0xb3ef,	// (0x000a756e) bg_calc_paper_pane_g4_ParamLimits

0xb3fb,	// (0x000a757a) bg_calc_paper_pane_g5_ParamLimits

0x09f7,	// (0x0009cb76) bg_calc_paper_pane_g6_ParamLimits

0x0a06,	// (0x0009cb85) bg_calc_paper_pane_g7_ParamLimits

0x0a15,	// (0x0009cb94) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x000ab2e0) bg_calc_paper_pane_g_ParamLimits

0x0a28,	// (0x0009cba7) calc_bg_paper_pane_g9_ParamLimits

0x1327,	// (0x0009d4a6) image_qvga_pane_ParamLimits

0x1327,	// (0x0009d4a6) image_qvga_pane

0xb2fa,	// (0x000a7479) bg_popup_sub_pane_cp04_ParamLimits

0xcc4e,	// (0x000a8dcd) popup_mup_playback_window_g1_ParamLimits

0xcc5a,	// (0x000a8dd9) popup_mup_playback_window_t1_ParamLimits

0xcc6f,	// (0x000a8dee) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x000ab66c) popup_mup_playback_window_t_ParamLimits

0x43ed,	// (0x000a056c) main_mup2_pane_g3_ParamLimits

0x43ed,	// (0x000a056c) main_mup2_pane_g3

0x1736,	// (0x0009d8b5) popup_toolbar_window_cp04

0xd482,	// (0x000a9601) popup_call2_audio_second_window_g3_ParamLimits

0xd482,	// (0x000a9601) popup_call2_audio_second_window_g3

0xd88c,	// (0x000a9a0b) popup_call2_audio_first_window_g4_ParamLimits

0xd88c,	// (0x000a9a0b) popup_call2_audio_first_window_g4

0xdf0b,	// (0x000aa08a) popup_call2_audio_in_window_g4_ParamLimits

0xdf0b,	// (0x000aa08a) popup_call2_audio_in_window_g4

0x32b7,	// (0x0009f436) aid_area_sk_bg_cut_ParamLimits

0x32b7,	// (0x0009f436) aid_area_sk_bg_cut

0xcc84,	// (0x000a8e03) aid_area_sk_bg_cut_2_ParamLimits

0xcc84,	// (0x000a8e03) aid_area_sk_bg_cut_2

0x46f8,	// (0x000a0877) aid_placing_details_win

0x4700,	// (0x000a087f) aid_placing_details_win_2

0xe7fe,	// (0x000aa97d) camera2_autofocus_pane_g1_ParamLimits

0x05c6,	// (0x0009c745) popup_fixed_preview_cale_window_ParamLimits

0x05c6,	// (0x0009c745) popup_fixed_preview_cale_window

0xca5b,	// (0x000a8bda) navi_slider_pane_g3

0xca64,	// (0x000a8be3) navi_slider_pane_g4

0xca6d,	// (0x000a8bec) navi_slider_pane_g5

0xca5b,	// (0x000a8bda) navi_slider_pane_g6

0xaa21,	// (0x000a6ba0) navi_slider_pane_g7

0xcb8e,	// (0x000a8d0d) mup_scale_pane_g3

0xcb97,	// (0x000a8d16) mup_scale_pane_g4

0xcba0,	// (0x000a8d1f) mup_scale_pane_g5

0x2f61,	// (0x0009f0e0) mup_scale_pane_g6

0x2f6a,	// (0x0009f0e9) mup_scale_pane_g7

0xca5b,	// (0x000a8bda) cams2_slider_pane_g3

0xe455,	// (0x000aa5d4) cams2_slider_pane_g4

0xab5a,	// (0x000a6cd9) cams2_slider_pane_g5

0xca5b,	// (0x000a8bda) cams2_slider_pane_g6

0xab62,	// (0x000a6ce1) cams2_slider_pane_g7

0xe680,	// (0x000aa7ff) camera2_autofocus_pane_cp_g1

0xe26c,	// (0x000aa3eb) bg_popup_preview_window_pane_cp02_ParamLimits

0xe26c,	// (0x000aa3eb) bg_popup_preview_window_pane_cp02

0xea02,	// (0x000aab81) list_fp_cale_pane_ParamLimits

0xea02,	// (0x000aab81) list_fp_cale_pane

0xea0e,	// (0x000aab8d) popup_fixed_preview_cale_window_t1_ParamLimits

0xea0e,	// (0x000aab8d) popup_fixed_preview_cale_window_t1

0x4f81,	// (0x000a1100) popup_fixed_preview_cale_window_t2_ParamLimits

0x4f81,	// (0x000a1100) popup_fixed_preview_cale_window_t2

0x4f96,	// (0x000a1115) popup_fixed_preview_cale_window_t3_ParamLimits

0x4f96,	// (0x000a1115) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x000ab934) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x000ab934) popup_fixed_preview_cale_window_t

0x4fab,	// (0x000a112a) list_single_fp_cale_pane_ParamLimits

0x4fab,	// (0x000a112a) list_single_fp_cale_pane

0xea2c,	// (0x000aabab) list_single_fp_cale_pane_g1_ParamLimits

0xea2c,	// (0x000aabab) list_single_fp_cale_pane_g1

0xea38,	// (0x000aabb7) list_single_fp_cale_pane_g2_ParamLimits

0xea38,	// (0x000aabb7) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x000ab93b) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x000ab93b) list_single_fp_cale_pane_g

0xea51,	// (0x000aabd0) list_single_fp_cale_pane_t1_ParamLimits

0xea51,	// (0x000aabd0) list_single_fp_cale_pane_t1

0xea63,	// (0x000aabe2) list_single_fp_cale_pane_t2_ParamLimits

0xea63,	// (0x000aabe2) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x000ab942) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x000ab942) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa501,	// (0x000a6680) main_dialer_pane

0x4fc0,	// (0x000a113f) aid_cell_size_keypad

0x4fca,	// (0x000a1149) dialer_ne_pane

0x4fd2,	// (0x000a1151) grid_dialer_command_1_pane

0x4fda,	// (0x000a1159) grid_dialer_command_2_pane

0x4fe2,	// (0x000a1161) grid_dialer_keypad_pane

0x4ff4,	// (0x000a1173) bg_popup_call_pane_cp06_ParamLimits

0x4ff4,	// (0x000a1173) bg_popup_call_pane_cp06

0x5000,	// (0x000a117f) dialer_ne_clear_pane_ParamLimits

0x5000,	// (0x000a117f) dialer_ne_clear_pane

0xea96,	// (0x000aac15) dialer_ne_pane_g1

0xea9e,	// (0x000aac1d) dialer_ne_pane_t1_ParamLimits

0xea9e,	// (0x000aac1d) dialer_ne_pane_t1

0x500c,	// (0x000a118b) dialer_ne_pane_t2_ParamLimits

0x500c,	// (0x000a118b) dialer_ne_pane_t2

0x5036,	// (0x000a11b5) dialer_ne_pane_t3_ParamLimits

0x5036,	// (0x000a11b5) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x000ab947) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x000ab947) dialer_ne_pane_t

0x5066,	// (0x000a11e5) dialer_ne_pane_t3_copy1_ParamLimits

0x5066,	// (0x000a11e5) dialer_ne_pane_t3_copy1

0x5095,	// (0x000a1214) cell_dialer_keypad_pane_ParamLimits

0x5095,	// (0x000a1214) cell_dialer_keypad_pane

0x50ac,	// (0x000a122b) cell_dialer_command_1_pane_ParamLimits

0x50ac,	// (0x000a122b) cell_dialer_command_1_pane

0x50c2,	// (0x000a1241) cell_dialer_command_2_pane_ParamLimits

0x50c2,	// (0x000a1241) cell_dialer_command_2_pane

0xeab0,	// (0x000aac2f) bg_button_pane_cp02_ParamLimits

0xeab0,	// (0x000aac2f) bg_button_pane_cp02

0x50d1,	// (0x000a1250) cell_dialer_keypad_pane_g1_ParamLimits

0x50d1,	// (0x000a1250) cell_dialer_keypad_pane_g1

0xeab0,	// (0x000aac2f) bg_button_pane_cp03_ParamLimits

0xeab0,	// (0x000aac2f) bg_button_pane_cp03

0x50e5,	// (0x000a1264) cell_dialer_command_1_pane_g1_ParamLimits

0x50e5,	// (0x000a1264) cell_dialer_command_1_pane_g1

0xeabc,	// (0x000aac3b) bg_button_pane_cp04

0x50f9,	// (0x000a1278) cell_dialer_command_2_pane_g1

0xca4a,	// (0x000a8bc9) bg_button_pane_cp06

0xeac4,	// (0x000aac43) dialer_ne_clear_pane_g1

0x2a9b,	// (0x0009ec1a) navi_pane_g2

0x2ac9,	// (0x0009ec48) navi_pane_g3

0x0002,

0xf3f0,	// (0x000ab56f) navi_pane_g

0x2af2,	// (0x0009ec71) navi_pane_mv_g2

0x2b19,	// (0x0009ec98) navi_pane_mv_g5

0x2b21,	// (0x0009eca0) navi_pane_mv_t1

0xb3bf,	// (0x000a753e) main_clock2_pane

0x5144,	// (0x000a12c3) main_clock2_list_pane_ParamLimits

0x5144,	// (0x000a12c3) main_clock2_list_pane

0x517c,	// (0x000a12fb) main_clock2_pane_t1_ParamLimits

0x517c,	// (0x000a12fb) main_clock2_pane_t1

0x51b8,	// (0x000a1337) main_clock2_pane_t2_ParamLimits

0x51b8,	// (0x000a1337) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x000ab94e) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x000ab94e) main_clock2_pane_t

0x5256,	// (0x000a13d5) popup_clock_analogue_window_cp03_ParamLimits

0x5256,	// (0x000a13d5) popup_clock_analogue_window_cp03

0x527b,	// (0x000a13fa) popup_clock_digital_window_cp02_ParamLimits

0x527b,	// (0x000a13fa) popup_clock_digital_window_cp02

0x52ec,	// (0x000a146b) main_clock2_list_single_pane_ParamLimits

0x52ec,	// (0x000a146b) main_clock2_list_single_pane

0xca4a,	// (0x000a8bc9) list_highlight_pane_cp05

0xeae2,	// (0x000aac61) main_clock2_list_single_pane_t1

0x1736,	// (0x0009d8b5) popup_toolbar_window_cp04_ParamLimits

0x4722,	// (0x000a08a1) camera2_autofocus_pane_g2_ParamLimits

0x4722,	// (0x000a08a1) camera2_autofocus_pane_g2

0x472e,	// (0x000a08ad) camera2_autofocus_pane_g3_ParamLimits

0x472e,	// (0x000a08ad) camera2_autofocus_pane_g3

0x473a,	// (0x000a08b9) camera2_autofocus_pane_g4_ParamLimits

0x473a,	// (0x000a08b9) camera2_autofocus_pane_g4

0x4746,	// (0x000a08c5) camera2_autofocus_pane_g5_ParamLimits

0x4746,	// (0x000a08c5) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x000ab897) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x000ab897) camera2_autofocus_pane_g

0xe989,	// (0x000aab08) camera2_autofocus_pane_cp_g2

0xe991,	// (0x000aab10) camera2_autofocus_pane_cp_g3

0xe999,	// (0x000aab18) camera2_autofocus_pane_cp_g4

0xe9a1,	// (0x000aab20) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x000ab8fd) camera2_autofocus_pane_cp_g

0x4fec,	// (0x000a116b) popup_dialer_spcha_window

0x03f6,	// (0x0009c575) bg_popup_sub_pane_cp07

0xeaf0,	// (0x000aac6f) list_spcha_pane

0xeaf8,	// (0x000aac77) list_single_spcha_pane_ParamLimits

0xeaf8,	// (0x000aac77) list_single_spcha_pane

0x03f6,	// (0x0009c575) list_highlight_pane_cp06

0xeb09,	// (0x000aac88) list_single_spcha_pane_t1

0xdcb5,	// (0x000a9e34) popup_call2_audio_out_window_g4_ParamLimits

0xdcb5,	// (0x000a9e34) popup_call2_audio_out_window_g4

0xa501,	// (0x000a6680) main_imed2_pane

0xaa7a,	// (0x000a6bf9) popup_imed_adjust2_window

0x3b05,	// (0x0009fc84) popup_imed_trans_window_ParamLimits

0x3b05,	// (0x0009fc84) popup_imed_trans_window

0xe4be,	// (0x000aa63d) popup_blid_sat_info2_window_t1

0xe4cc,	// (0x000aa64b) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x000ab82c) popup_blid_sat_info2_window_t

0x5396,	// (0x000a1515) aid_size_cell_colour_35

0x53b6,	// (0x000a1535) aid_size_cell_colour_112

0x53d6,	// (0x000a1555) aid_size_cell_effect

0xe278,	// (0x000aa3f7) bg_tb_trans_pane_cp02

0xba28,	// (0x000a7ba7) heading_imed_pane

0x53f6,	// (0x000a1575) listscroll_imed_pane

0xeb17,	// (0x000aac96) heading_imed_pane_g1

0xeb1f,	// (0x000aac9e) heading_imed_pane_t1

0xeb2d,	// (0x000aacac) grid_imed_colour_35_pane_ParamLimits

0xeb2d,	// (0x000aacac) grid_imed_colour_35_pane

0x5402,	// (0x000a1581) grid_imed_effect_pane

0xeb44,	// (0x000aacc3) list_imed_aspect_pane

0x5418,	// (0x000a1597) scroll_pane_cp027_ParamLimits

0x5418,	// (0x000a1597) scroll_pane_cp027

0x5429,	// (0x000a15a8) cell_imed_effect_pane_ParamLimits

0x5429,	// (0x000a15a8) cell_imed_effect_pane

0xeb4c,	// (0x000aaccb) cell_imed_colour_pane_ParamLimits

0xeb4c,	// (0x000aaccb) cell_imed_colour_pane

0xeb8e,	// (0x000aad0d) cell_imed_colour_pane_g1_ParamLimits

0xeb8e,	// (0x000aad0d) cell_imed_colour_pane_g1

0xeb9f,	// (0x000aad1e) hgihlgiht_grid_pane_cp016_ParamLimits

0xeb9f,	// (0x000aad1e) hgihlgiht_grid_pane_cp016

0x5450,	// (0x000a15cf) cell_imed_effect_pane_g1

0x5458,	// (0x000a15d7) grid_highlight_pane_cp017

0xebb0,	// (0x000aad2f) list_imed_single_pane_ParamLimits

0xebb0,	// (0x000aad2f) list_imed_single_pane

0x03f6,	// (0x0009c575) list_highlight_pane_cp07

0xebc5,	// (0x000aad44) list_imed_aspect_pane_comp1_t1

0xe278,	// (0x000aa3f7) bg_tb_trans_pane_cp05

0xebe7,	// (0x000aad66) popup_imed_adjust2_window_g1

0xec0e,	// (0x000aad8d) popup_imed_adjust2_window_t1

0xec26,	// (0x000aada5) slider_imed_adjust_pane

0xec3a,	// (0x000aadb9) slider_imed_adjust_pane_g1

0xec4a,	// (0x000aadc9) slider_imed_adjust_pane_g2

0xec5a,	// (0x000aadd9) slider_imed_adjust_pane_g3

0xec6b,	// (0x000aadea) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x000ab96b) slider_imed_adjust_pane_g

0x5461,	// (0x000a15e0) aid_size_cell_clipart2

0x546d,	// (0x000a15ec) grid_imed_clipart_pane

0xec7c,	// (0x000aadfb) scroll_pane_cp031

0x5477,	// (0x000a15f6) cell_imed_clipart_pane_ParamLimits

0x5477,	// (0x000a15f6) cell_imed_clipart_pane

0x5499,	// (0x000a1618) cell_imed_clipart_pane_g1

0x03f6,	// (0x0009c575) grid_highlight_pane_cp014

0x5159,	// (0x000a12d8) main_clock2_pane_g1_ParamLimits

0x5159,	// (0x000a12d8) main_clock2_pane_g1

0x5297,	// (0x000a1416) aid_call2_pane_cp10

0x52a9,	// (0x000a1428) aid_call_pane_cp10

0xc97f,	// (0x000a8afe) popup_clock_analogue_window_cp10_g1

0xc97f,	// (0x000a8afe) popup_clock_analogue_window_cp10_g2

0x52bb,	// (0x000a143a) popup_clock_analogue_window_cp10_g3

0x52bb,	// (0x000a143a) popup_clock_analogue_window_cp10_g4

0xc97f,	// (0x000a8afe) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x000ab959) popup_clock_analogue_window_cp10_g

0x52cd,	// (0x000a144c) popup_clock_analogue_window_cp10_t1

0x52fe,	// (0x000a147d) clock_digital_number_pane_cp10_ParamLimits

0x52fe,	// (0x000a147d) clock_digital_number_pane_cp10

0x5316,	// (0x000a1495) clock_digital_number_pane_cp11_ParamLimits

0x5316,	// (0x000a1495) clock_digital_number_pane_cp11

0x532e,	// (0x000a14ad) clock_digital_number_pane_cp12_ParamLimits

0x532e,	// (0x000a14ad) clock_digital_number_pane_cp12

0x5346,	// (0x000a14c5) clock_digital_number_pane_cp13_ParamLimits

0x5346,	// (0x000a14c5) clock_digital_number_pane_cp13

0x535e,	// (0x000a14dd) clock_digital_separator_pane_cp10_ParamLimits

0x535e,	// (0x000a14dd) clock_digital_separator_pane_cp10

0x5376,	// (0x000a14f5) popup_clock_digital_window_cp02_t1_ParamLimits

0x5376,	// (0x000a14f5) popup_clock_digital_window_cp02_t1

0xb2f2,	// (0x000a7471) clock_digital_number_pane_cp10_g1

0xb2f2,	// (0x000a7471) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x000ab974) clock_digital_number_pane_cp10_g

0xb2f2,	// (0x000a7471) clock_digital_separator_pane_cp10_g1

0xb2f2,	// (0x000a7471) clock_digital_separator_pane_g2_cp10

0xca1a,	// (0x000a8b99) navi_pane_vded_g4

0xca23,	// (0x000a8ba2) navi_pane_vded_g5

0xca2c,	// (0x000a8bab) navi_pane_vded_t1

0xa501,	// (0x000a6680) main_vded_pane

0x54a2,	// (0x000a1621) main_vded_pane_g1

0x54ac,	// (0x000a162b) main_vded_pane_g2

0x54b6,	// (0x000a1635) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x000ab979) main_vded_pane_g

0x54c0,	// (0x000a163f) main_vded_pane_t1

0x54ce,	// (0x000a164d) main_vded_pane_t2

0x0001,

0xf801,	// (0x000ab980) main_vded_pane_t

0x54dc,	// (0x000a165b) vded_slider_pane

0x54e4,	// (0x000a1663) vded_video_pane

0xec84,	// (0x000aae03) vded_video_pane_g1

0x54ec,	// (0x000a166b) vded_video_pane_g2

0xe680,	// (0x000aa7ff) vded_video_pane_g3

0x0002,

0xf806,	// (0x000ab985) vded_video_pane_g

0xec8e,	// (0x000aae0d) vded_slider_pane_g1

0xe3d3,	// (0x000aa552) vded_slider_pane_g2

0xec97,	// (0x000aae16) vded_slider_pane_g3

0xeca0,	// (0x000aae1f) vded_slider_pane_g4

0xeca9,	// (0x000aae28) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x000ab98c) vded_slider_pane_g

0x4ecd,	// (0x000a104c) mup3_rocker_pane_ParamLimits

0x4ecd,	// (0x000a104c) mup3_rocker_pane

0x54f5,	// (0x000a1674) mup3_control_keys_pane_g1

0x54fd,	// (0x000a167c) mup3_control_keys_pane_g2

0x5505,	// (0x000a1684) mup3_control_keys_pane_g3

0x550d,	// (0x000a168c) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x000ab997) mup3_control_keys_pane_g

0x05fd,	// (0x0009c77c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x05fd,	// (0x0009c77c) popup_toolbar2_fixed_window_cp01

0x4f01,	// (0x000a1080) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4f01,	// (0x000a1080) popup_toolbar2_fixed_window_cp02

0xd5f4,	// (0x000a9773) popup_call2_audio_second_window_t4_ParamLimits

0xd5f4,	// (0x000a9773) popup_call2_audio_second_window_t4

0xdb22,	// (0x000a9ca1) popup_call2_audio_first_window_t6_ParamLimits

0xdb22,	// (0x000a9ca1) popup_call2_audio_first_window_t6

0xddb8,	// (0x000a9f37) popup_call2_audio_out_window_t6_ParamLimits

0xddb8,	// (0x000a9f37) popup_call2_audio_out_window_t6

0xa501,	// (0x000a6680) main_vitu_pane

0x551d,	// (0x000a169c) aid_size_cell_itu_ParamLimits

0x551d,	// (0x000a169c) aid_size_cell_itu

0xcf55,	// (0x000a90d4) bg_popup_window_pane_cp08_ParamLimits

0xcf55,	// (0x000a90d4) bg_popup_window_pane_cp08

0x5533,	// (0x000a16b2) field_vitu_entry_pane_ParamLimits

0x5533,	// (0x000a16b2) field_vitu_entry_pane

0x554a,	// (0x000a16c9) grid_vitu_function_pane_ParamLimits

0x554a,	// (0x000a16c9) grid_vitu_function_pane

0x5565,	// (0x000a16e4) grid_vitu_itu_pane_ParamLimits

0x5565,	// (0x000a16e4) grid_vitu_itu_pane

0x5583,	// (0x000a1702) cell_vitu_itu_pane_ParamLimits

0x5583,	// (0x000a1702) cell_vitu_itu_pane

0x55a5,	// (0x000a1724) cell_vitu_function_pane_ParamLimits

0x55a5,	// (0x000a1724) cell_vitu_function_pane

0xcf55,	// (0x000a90d4) bg_popup_sub_pane_cp08_ParamLimits

0xcf55,	// (0x000a90d4) bg_popup_sub_pane_cp08

0x55be,	// (0x000a173d) field_vitu_entry_pane_t1_ParamLimits

0x55be,	// (0x000a173d) field_vitu_entry_pane_t1

0xecca,	// (0x000aae49) field_vitu_entry_pane_t2_ParamLimits

0xecca,	// (0x000aae49) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x000ab9a5) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x000ab9a5) field_vitu_entry_pane_t

0xece7,	// (0x000aae66) bg_button_pane_cp05_ParamLimits

0xece7,	// (0x000aae66) bg_button_pane_cp05

0x55dc,	// (0x000a175b) cell_vitu_itu_pane_g1

0x55f4,	// (0x000a1773) cell_vitu_itu_pane_t1_ParamLimits

0x55f4,	// (0x000a1773) cell_vitu_itu_pane_t1

0x5606,	// (0x000a1785) cell_vitu_itu_pane_t2_ParamLimits

0x5606,	// (0x000a1785) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x000ab9aa) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x000ab9aa) cell_vitu_itu_pane_t

0xecf5,	// (0x000aae74) bg_button_pane_cp07

0x563b,	// (0x000a17ba) cell_vitu_function_pane_g1

0xa8cf,	// (0x000a6a4e) main_calc_pane_g1

0x0424,	// (0x0009c5a3) aid_visual_content_pane

0xa501,	// (0x000a6680) main_vradio_pane

0x5644,	// (0x000a17c3) main_vradio_pane_g1_ParamLimits

0x5644,	// (0x000a17c3) main_vradio_pane_g1

0xecff,	// (0x000aae7e) main_vradio_pane_g2_ParamLimits

0xecff,	// (0x000aae7e) main_vradio_pane_g2

0x0001,

0xf832,	// (0x000ab9b1) main_vradio_pane_g_ParamLimits

0xf832,	// (0x000ab9b1) main_vradio_pane_g

0x565d,	// (0x000a17dc) main_vradio_pane_t1_ParamLimits

0x565d,	// (0x000a17dc) main_vradio_pane_t1

0x5672,	// (0x000a17f1) main_vradio_pane_t2_ParamLimits

0x5672,	// (0x000a17f1) main_vradio_pane_t2

0xed0c,	// (0x000aae8b) main_vradio_pane_t3_ParamLimits

0xed0c,	// (0x000aae8b) main_vradio_pane_t3

0x0002,

0xf837,	// (0x000ab9b6) main_vradio_pane_t_ParamLimits

0xf837,	// (0x000ab9b6) main_vradio_pane_t

0x5687,	// (0x000a1806) vradio_rocker_control_pane_ParamLimits

0x5687,	// (0x000a1806) vradio_rocker_control_pane

0x5699,	// (0x000a1818) vradio_station_info_pane_ParamLimits

0x5699,	// (0x000a1818) vradio_station_info_pane

0xed20,	// (0x000aae9f) vradio_frequency_info_pane_ParamLimits

0xed20,	// (0x000aae9f) vradio_frequency_info_pane

0xe680,	// (0x000aa7ff) vradio_station_info_pane_g1

0xed2f,	// (0x000aaeae) vradio_station_info_pane_t1_ParamLimits

0xed2f,	// (0x000aaeae) vradio_station_info_pane_t1

0xed51,	// (0x000aaed0) vradio_station_info_pane_t2_ParamLimits

0xed51,	// (0x000aaed0) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x000ab9bd) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x000ab9bd) vradio_station_info_pane_t

0xed63,	// (0x000aaee2) vradio_tuning_pane

0xed6b,	// (0x000aaeea) vradio_rocker_control_pane_g1

0xed73,	// (0x000aaef2) vradio_rocker_control_pane_g2

0xed7b,	// (0x000aaefa) vradio_rocker_control_pane_g3

0xed83,	// (0x000aaf02) vradio_rocker_control_pane_g4

0xed8b,	// (0x000aaf0a) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x000ab9c2) vradio_rocker_control_pane_g

0x56ab,	// (0x000a182a) vradio_frequency_info_pane_g1

0xed93,	// (0x000aaf12) vradio_frequency_info_pane_t1_ParamLimits

0xed93,	// (0x000aaf12) vradio_frequency_info_pane_t1

0x56b5,	// (0x000a1834) vradio_tuning_pane_g1

0x56c0,	// (0x000a183f) vradio_tuning_pane_t1

0xa4b1,	// (0x000a6630) area_side_right_pane_ParamLimits

0xa4b1,	// (0x000a6630) area_side_right_pane

0xe233,	// (0x000aa3b2) status_small_pane_g1

0xe23b,	// (0x000aa3ba) status_small_pane_g2

0xe244,	// (0x000aa3c3) status_small_pane_g3

0xe24d,	// (0x000aa3cc) status_small_pane_g4

0x0003,

0xf603,	// (0x000ab782) status_small_pane_g

0xe256,	// (0x000aa3d5) status_small_pane_t1

0xa501,	// (0x000a6680) main_video3_pane

0xeda7,	// (0x000aaf26) cams_zoom_vslider_pane

0xedaf,	// (0x000aaf2e) image3_wide_pane_ParamLimits

0xedaf,	// (0x000aaf2e) image3_wide_pane

0xedc9,	// (0x000aaf48) image3_wide_small_pane

0xedd5,	// (0x000aaf54) main_video3_pane_g1_ParamLimits

0xedd5,	// (0x000aaf54) main_video3_pane_g1

0xedf1,	// (0x000aaf70) main_video3_pane_g2_ParamLimits

0xedf1,	// (0x000aaf70) main_video3_pane_g2

0x0001,

0xf84e,	// (0x000ab9cd) main_video3_pane_g_ParamLimits

0xf84e,	// (0x000ab9cd) main_video3_pane_g

0xee0d,	// (0x000aaf8c) main_video3_pane_t1_ParamLimits

0xee0d,	// (0x000aaf8c) main_video3_pane_t1

0xee38,	// (0x000aafb7) main_video3_pane_t2_ParamLimits

0xee38,	// (0x000aafb7) main_video3_pane_t2

0xee63,	// (0x000aafe2) main_video3_pane_t3_ParamLimits

0xee63,	// (0x000aafe2) main_video3_pane_t3

0x0002,

0xf853,	// (0x000ab9d2) main_video3_pane_t_ParamLimits

0xf853,	// (0x000ab9d2) main_video3_pane_t

0xee90,	// (0x000ab00f) cams_zoom_vslider_pane_g1

0xee99,	// (0x000ab018) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x000ab9d9) cams_zoom_vslider_pane_g

0xeea1,	// (0x000ab020) small_slider_vertical_pane

0xe680,	// (0x000aa7ff) small_slider_vertical_pane_g1

0xe680,	// (0x000aa7ff) small_slider_vertical_pane_g2

0xeea9,	// (0x000ab028) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x000ab9de) small_slider_vertical_pane_g

0xa501,	// (0x000a6680) main_hwr_training_pane

0xeeb2,	// (0x000ab031) hwr_training_instruct_pane_ParamLimits

0xeeb2,	// (0x000ab031) hwr_training_instruct_pane

0x56cf,	// (0x000a184e) hwr_training_navi_pane_ParamLimits

0x56cf,	// (0x000a184e) hwr_training_navi_pane

0x56ee,	// (0x000a186d) hwr_training_write_pane_ParamLimits

0x56ee,	// (0x000a186d) hwr_training_write_pane

0x03f6,	// (0x0009c575) bg_frame_shadow_pane

0xeee9,	// (0x000ab068) hwr_training_write_pane_g1

0xeef1,	// (0x000ab070) hwr_training_write_pane_g2

0xeef9,	// (0x000ab078) hwr_training_write_pane_g3

0xef01,	// (0x000ab080) hwr_training_write_pane_g4

0xef09,	// (0x000ab088) hwr_training_write_pane_g5

0xef11,	// (0x000ab090) hwr_training_write_pane_g6

0xef19,	// (0x000ab098) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x000ab9e5) hwr_training_write_pane_g

0xab6b,	// (0x000a6cea) hwr_training_navi_pane_g1_ParamLimits

0xab6b,	// (0x000a6cea) hwr_training_navi_pane_g1

0xab7d,	// (0x000a6cfc) hwr_training_navi_pane_g2_ParamLimits

0xab7d,	// (0x000a6cfc) hwr_training_navi_pane_g2

0xab8f,	// (0x000a6d0e) hwr_training_navi_pane_g3_ParamLimits

0xab8f,	// (0x000a6d0e) hwr_training_navi_pane_g3

0xab9f,	// (0x000a6d1e) hwr_training_navi_pane_g4_ParamLimits

0xab9f,	// (0x000a6d1e) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x000ab9f4) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x000ab9f4) hwr_training_navi_pane_g

0xabac,	// (0x000a6d2b) hwr_training_navi_pane_t1

0x5736,	// (0x000a18b5) list_single_hwr_training_instruct_pane_ParamLimits

0x5736,	// (0x000a18b5) list_single_hwr_training_instruct_pane

0xef21,	// (0x000ab0a0) list_single_hwr_training_instruct_pane_t1

0xe5c0,	// (0x000aa73f) bg_frame_shadow_pane_g1

0xef30,	// (0x000ab0af) bg_frame_shadow_pane_g2

0xef38,	// (0x000ab0b7) bg_frame_shadow_pane_g3

0xef40,	// (0x000ab0bf) bg_frame_shadow_pane_g4

0xef48,	// (0x000ab0c7) bg_frame_shadow_pane_g5

0xef50,	// (0x000ab0cf) bg_frame_shadow_pane_g6

0xef58,	// (0x000ab0d7) bg_frame_shadow_pane_g7

0xb478,	// (0x000a75f7) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x000ab9ff) bg_frame_shadow_pane_g

0xa501,	// (0x000a6680) main_video_tele_dialer_pane

0x574b,	// (0x000a18ca) aid_size_cell_video_keypad_ParamLimits

0x574b,	// (0x000a18ca) aid_size_cell_video_keypad

0x5765,	// (0x000a18e4) grid_video_dialer_keypad_pane_ParamLimits

0x5765,	// (0x000a18e4) grid_video_dialer_keypad_pane

0x57b1,	// (0x000a1930) video_down_pane_cp_ParamLimits

0x57b1,	// (0x000a1930) video_down_pane_cp

0x57e3,	// (0x000a1962) cell_video_dialer_keypad_pane_ParamLimits

0x57e3,	// (0x000a1962) cell_video_dialer_keypad_pane

0xef60,	// (0x000ab0df) bg_button_pane_cp08_ParamLimits

0xef60,	// (0x000ab0df) bg_button_pane_cp08

0x5805,	// (0x000a1984) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5805,	// (0x000a1984) cell_video_dialer_keypad_pane_g1

0x4eb7,	// (0x000a1036) mup3_rocker2_pane_ParamLimits

0x4eb7,	// (0x000a1036) mup3_rocker2_pane

0xe680,	// (0x000aa7ff) mup3_rocker2_pane_g1

0x39e6,	// (0x0009fb65) main_dialer2_pane

0xa501,	// (0x000a6680) main_mp4_pane

0xabc2,	// (0x000a6d41) main_mp4_pane_g1_ParamLimits

0xabc2,	// (0x000a6d41) main_mp4_pane_g1

0xabc2,	// (0x000a6d41) main_mp4_pane_g2_ParamLimits

0xabc2,	// (0x000a6d41) main_mp4_pane_g2

0x583c,	// (0x000a19bb) main_mp4_pane_g3_ParamLimits

0x583c,	// (0x000a19bb) main_mp4_pane_g3

0xabd0,	// (0x000a6d4f) main_mp4_pane_g4_ParamLimits

0xabd0,	// (0x000a6d4f) main_mp4_pane_g4

0xabf8,	// (0x000a6d77) main_mp4_pane_g5_ParamLimits

0xabf8,	// (0x000a6d77) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x000aba1f) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x000aba1f) main_mp4_pane_g

0xac48,	// (0x000a6dc7) main_mp4_pane_t1_ParamLimits

0xac48,	// (0x000a6dc7) main_mp4_pane_t1

0xaca4,	// (0x000a6e23) main_mp4_pane_t2_ParamLimits

0xaca4,	// (0x000a6e23) main_mp4_pane_t2

0xef6c,	// (0x000ab0eb) main_mp4_pane_t3_ParamLimits

0xef6c,	// (0x000ab0eb) main_mp4_pane_t3

0xacf6,	// (0x000a6e75) main_mp4_pane_t4_ParamLimits

0xacf6,	// (0x000a6e75) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x000aba2c) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x000aba2c) main_mp4_pane_t

0xad3a,	// (0x000a6eb9) mp4_progress_pane_ParamLimits

0xad3a,	// (0x000a6eb9) mp4_progress_pane

0xad84,	// (0x000a6f03) mp4_rocker_pane_ParamLimits

0xad84,	// (0x000a6f03) mp4_rocker_pane

0xef94,	// (0x000ab113) mp4_progress_pane_t1

0xefad,	// (0x000ab12c) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x000aba35) mp4_progress_pane_t

0xefc6,	// (0x000ab145) mup_progress_pane_cp04

0x5878,	// (0x000a19f7) mp4_rocker_pane_g1

0x5882,	// (0x000a1a01) aid_cell_size_keypad2_ParamLimits

0x5882,	// (0x000a1a01) aid_cell_size_keypad2

0x5898,	// (0x000a1a17) dialer2_ne_pane_ParamLimits

0x5898,	// (0x000a1a17) dialer2_ne_pane

0x58b2,	// (0x000a1a31) grid_dialer2_keypad_pane_ParamLimits

0x58b2,	// (0x000a1a31) grid_dialer2_keypad_pane

0xe465,	// (0x000aa5e4) bg_popup_call_pane_cp07_ParamLimits

0xe465,	// (0x000aa5e4) bg_popup_call_pane_cp07

0x58ce,	// (0x000a1a4d) dialer2_ne_pane_t1_ParamLimits

0x58ce,	// (0x000a1a4d) dialer2_ne_pane_t1

0x5909,	// (0x000a1a88) cell_dialer2_keypad_pane_ParamLimits

0x5909,	// (0x000a1a88) cell_dialer2_keypad_pane

0xefe4,	// (0x000ab163) bg_button_pane_pane_cp04_ParamLimits

0xefe4,	// (0x000ab163) bg_button_pane_pane_cp04

0x592b,	// (0x000a1aaa) cell_dialer2_keypad_pane_g1_ParamLimits

0x592b,	// (0x000a1aaa) cell_dialer2_keypad_pane_g1

0x160a,	// (0x0009d789) aid_placing_vt_set_content_ParamLimits

0x160a,	// (0x0009d789) aid_placing_vt_set_content

0x1632,	// (0x0009d7b1) aid_placing_vt_set_title_ParamLimits

0x1632,	// (0x0009d7b1) aid_placing_vt_set_title

0xa501,	// (0x000a6680) main_image3_pane

0x59f1,	// (0x000a1b70) area_side_right_pane_cp01_ParamLimits

0x59f1,	// (0x000a1b70) area_side_right_pane_cp01

0xabc2,	// (0x000a6d41) main_image3_pane_g1_ParamLimits

0xabc2,	// (0x000a6d41) main_image3_pane_g1

0x5a08,	// (0x000a1b87) main_image3_pane_g2_ParamLimits

0x5a08,	// (0x000a1b87) main_image3_pane_g2

0x5a30,	// (0x000a1baf) main_image3_pane_g3_ParamLimits

0x5a30,	// (0x000a1baf) main_image3_pane_g3

0x5a5a,	// (0x000a1bd9) main_image3_pane_g4_ParamLimits

0x5a5a,	// (0x000a1bd9) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x000aba44) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x000aba44) main_image3_pane_g

0x5a84,	// (0x000a1c03) main_image3_pane_t1_ParamLimits

0x5a84,	// (0x000a1c03) main_image3_pane_t1

0x5adc,	// (0x000a1c5b) main_image3_pane_t2_ParamLimits

0x5adc,	// (0x000a1c5b) main_image3_pane_t2

0x5b2e,	// (0x000a1cad) main_image3_pane_t3_ParamLimits

0x5b2e,	// (0x000a1cad) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x000aba4d) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x000aba4d) main_image3_pane_t

0xcf55,	// (0x000a90d4) grid_sctrl_middle_pane_cp01_ParamLimits

0xcf55,	// (0x000a90d4) grid_sctrl_middle_pane_cp01

0x5bb6,	// (0x000a1d35) cell_sctrl_middle_pane_cp01_ParamLimits

0x5bb6,	// (0x000a1d35) cell_sctrl_middle_pane_cp01

0x5bd3,	// (0x000a1d52) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5bd3,	// (0x000a1d52) cell_sctrl_middle_pane_cp01_g1

0xa501,	// (0x000a6680) main_call4_pane

0x5be9,	// (0x000a1d68) aid_size_button_call4_ParamLimits

0x5be9,	// (0x000a1d68) aid_size_button_call4

0x5c1a,	// (0x000a1d99) call4_windows_pane_ParamLimits

0x5c1a,	// (0x000a1d99) call4_windows_pane

0x5c3a,	// (0x000a1db9) grid_call4_button_pane_ParamLimits

0x5c3a,	// (0x000a1db9) grid_call4_button_pane

0xeff0,	// (0x000ab16f) call4_windows_conf_pane

0xf007,	// (0x000ab186) popup_call4_audio_first_window_ParamLimits

0xf007,	// (0x000ab186) popup_call4_audio_first_window

0xf053,	// (0x000ab1d2) popup_call4_audio_second_window_ParamLimits

0xf053,	// (0x000ab1d2) popup_call4_audio_second_window

0xf067,	// (0x000ab1e6) popup_call4_audio_wait_window_ParamLimits

0xf067,	// (0x000ab1e6) popup_call4_audio_wait_window

0x5c67,	// (0x000a1de6) cell_call4_button_pane_ParamLimits

0x5c67,	// (0x000a1de6) cell_call4_button_pane

0x5c90,	// (0x000a1e0f) bg_button_pane_cp09_ParamLimits

0x5c90,	// (0x000a1e0f) bg_button_pane_cp09

0x5c9c,	// (0x000a1e1b) cell_call4_button_pane_g1_ParamLimits

0x5c9c,	// (0x000a1e1b) cell_call4_button_pane_g1

0x5cc2,	// (0x000a1e41) cell_call4_button_pane_t1_ParamLimits

0x5cc2,	// (0x000a1e41) cell_call4_button_pane_t1

0xf0af,	// (0x000ab22e) popup_call4_audio_conf_window_ParamLimits

0xf0af,	// (0x000ab22e) popup_call4_audio_conf_window

0x4f17,	// (0x000a1096) mup3_progress_pane_t1_ParamLimits

0x4f36,	// (0x000a10b5) mup3_progress_pane_t2_ParamLimits

0xe9bf,	// (0x000aab3e) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x000ab926) mup3_progress_pane_t_ParamLimits

0xe9dc,	// (0x000aab5b) mup_progress_pane_cp03_ParamLimits

0x5515,	// (0x000a1694) mup3_control_keys_pane_g4_copy1

0xad68,	// (0x000a6ee7) mp4_rocker2_pane_ParamLimits

0xad68,	// (0x000a6ee7) mp4_rocker2_pane

0xf0c3,	// (0x000ab242) mp4_rocker2_pane_g1

0xf0cb,	// (0x000ab24a) mp4_rocker2_pane_g2

0xadd6,	// (0x000a6f55) mp4_rocker2_pane_g3

0xadde,	// (0x000a6f5d) mp4_rocker2_pane_g4

0xade6,	// (0x000a6f65) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x000aba56) mp4_rocker2_pane_g

0xa501,	// (0x000a6680) main_camera4_pane

0xa501,	// (0x000a6680) main_video4_pane

0x577f,	// (0x000a18fe) main_video_tele_dialer_pane_t1_ParamLimits

0x577f,	// (0x000a18fe) main_video_tele_dialer_pane_t1

0x5798,	// (0x000a1917) main_video_tele_dialer_pane_t2_ParamLimits

0x5798,	// (0x000a1917) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x000aba10) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x000aba10) main_video_tele_dialer_pane_t

0x5d00,	// (0x000a1e7f) cam4_autofocus_pane_ParamLimits

0x5d00,	// (0x000a1e7f) cam4_autofocus_pane

0x5d16,	// (0x000a1e95) cam4_image_uncrop_pane_ParamLimits

0x5d16,	// (0x000a1e95) cam4_image_uncrop_pane

0x5d30,	// (0x000a1eaf) cam4_indicators_pane_ParamLimits

0x5d30,	// (0x000a1eaf) cam4_indicators_pane

0x5d5b,	// (0x000a1eda) main_camera4_pane_g1_ParamLimits

0x5d5b,	// (0x000a1eda) main_camera4_pane_g1

0x5d6d,	// (0x000a1eec) main_camera4_pane_g2_ParamLimits

0x5d6d,	// (0x000a1eec) main_camera4_pane_g2

0x5d80,	// (0x000a1eff) main_camera4_pane_g3_ParamLimits

0x5d80,	// (0x000a1eff) main_camera4_pane_g3

0x5d93,	// (0x000a1f12) main_camera4_pane_g4_ParamLimits

0x5d93,	// (0x000a1f12) main_camera4_pane_g4

0x5da6,	// (0x000a1f25) main_camera4_pane_g5_ParamLimits

0x5da6,	// (0x000a1f25) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x000aba61) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x000aba61) main_camera4_pane_g

0x5dca,	// (0x000a1f49) main_camera4_pane_t1_ParamLimits

0x5dca,	// (0x000a1f49) main_camera4_pane_t1

0xae1c,	// (0x000a6f9b) bg_tb_trans_pane_cp06

0xae32,	// (0x000a6fb1) cam4_indicators_pane_g1

0xae43,	// (0x000a6fc2) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x000aba7c) cam4_indicators_pane_g

0xae61,	// (0x000a6fe0) cam4_indicators_pane_t1

0x5e2e,	// (0x000a1fad) main_video4_pane_g1_ParamLimits

0x5e2e,	// (0x000a1fad) main_video4_pane_g1

0x5e3d,	// (0x000a1fbc) main_video4_pane_g2_ParamLimits

0x5e3d,	// (0x000a1fbc) main_video4_pane_g2

0x5e4c,	// (0x000a1fcb) main_video4_pane_g3_ParamLimits

0x5e4c,	// (0x000a1fcb) main_video4_pane_g3

0x5e5b,	// (0x000a1fda) main_video4_pane_g4_ParamLimits

0x5e5b,	// (0x000a1fda) main_video4_pane_g4

0x0004,

0xf904,	// (0x000aba83) main_video4_pane_g_ParamLimits

0xf904,	// (0x000aba83) main_video4_pane_g

0x5e79,	// (0x000a1ff8) vid4_indicators_pane_ParamLimits

0x5e79,	// (0x000a1ff8) vid4_indicators_pane

0x5ea7,	// (0x000a2026) video4_image_uncrop_cif_pane_ParamLimits

0x5ea7,	// (0x000a2026) video4_image_uncrop_cif_pane

0x5ec1,	// (0x000a2040) video4_image_uncrop_nhd_pane_ParamLimits

0x5ec1,	// (0x000a2040) video4_image_uncrop_nhd_pane

0x5d16,	// (0x000a1e95) video4_image_uncrop_vga_pane_ParamLimits

0x5d16,	// (0x000a1e95) video4_image_uncrop_vga_pane

0xa4f3,	// (0x000a6672) bg_tb_trans_pane_cp07

0xae8d,	// (0x000a700c) vid4_indicators_pane_g1

0xaea1,	// (0x000a7020) vid4_indicators_pane_g2

0xaeb5,	// (0x000a7034) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x000aba8e) vid4_indicators_pane_g

0xaee4,	// (0x000a7063) vid4_indicators_pane_t1

0x5ed5,	// (0x000a2054) cam4_autofocus_pane_g1

0x5edd,	// (0x000a205c) cam4_autofocus_pane_g2

0x5ee5,	// (0x000a2064) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x000aba99) cam4_autofocus_pane_g

0x5eed,	// (0x000a206c) cam4_autofocus_pane_g3_copy1

0x57c7,	// (0x000a1946) video_down_pane_cp_t1

0x57d5,	// (0x000a1954) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x000aba15) video_down_pane_cp_t

0xa4f3,	// (0x000a6672) popup_vitu2_window_ParamLimits

0xa4f3,	// (0x000a6672) popup_vitu2_window

0x5ef5,	// (0x000a2074) aid_size_cell2_itu2_ParamLimits

0x5ef5,	// (0x000a2074) aid_size_cell2_itu2

0x5f1b,	// (0x000a209a) aid_size_cell_itu2_ParamLimits

0x5f1b,	// (0x000a209a) aid_size_cell_itu2

0x5f77,	// (0x000a20f6) bg_popup_window_pane_cp09_ParamLimits

0x5f77,	// (0x000a20f6) bg_popup_window_pane_cp09

0x5f85,	// (0x000a2104) field_vitu2_entry_pane_ParamLimits

0x5f85,	// (0x000a2104) field_vitu2_entry_pane

0x5fab,	// (0x000a212a) grid_vitu2_function_pane_ParamLimits

0x5fab,	// (0x000a212a) grid_vitu2_function_pane

0x5ffc,	// (0x000a217b) grid_vitu2_itu_pane_ParamLimits

0x5ffc,	// (0x000a217b) grid_vitu2_itu_pane

0x608f,	// (0x000a220e) cell_vitu2_itu_pane_ParamLimits

0x608f,	// (0x000a220e) cell_vitu2_itu_pane

0x60b3,	// (0x000a2232) cell_vitu2_function_pane_ParamLimits

0x60b3,	// (0x000a2232) cell_vitu2_function_pane

0x60f2,	// (0x000a2271) bg_popup_call_pane_cp08_ParamLimits

0x60f2,	// (0x000a2271) bg_popup_call_pane_cp08

0x610b,	// (0x000a228a) field_vitu2_entry_pane_g1

0x6117,	// (0x000a2296) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x000abaa0) field_vitu2_entry_pane_g

0x6131,	// (0x000a22b0) field_vitu2_entry_pane_t1_ParamLimits

0x6131,	// (0x000a22b0) field_vitu2_entry_pane_t1

0x6160,	// (0x000a22df) field_vitu2_entry_pane_t2_ParamLimits

0x6160,	// (0x000a22df) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x000abaa7) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x000abaa7) field_vitu2_entry_pane_t

0x6185,	// (0x000a2304) bg_button_pane_cp010_ParamLimits

0x6185,	// (0x000a2304) bg_button_pane_cp010

0x6193,	// (0x000a2312) cell_vitu2_itu_pane_g1

0x61b1,	// (0x000a2330) cell_vitu2_itu_pane_t1_ParamLimits

0x61b1,	// (0x000a2330) cell_vitu2_itu_pane_t1

0x0302,	// (0x0009c481) cell_vitu2_itu_pane_t2_ParamLimits

0x0302,	// (0x0009c481) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x000abab1) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x000abab1) cell_vitu2_itu_pane_t

0xa4f3,	// (0x000a6672) bg_button_pane_cp011

0x6217,	// (0x000a2396) cell_vitu2_function_pane_g1

0xa501,	// (0x000a6680) main_myfav_hc_pane

0x5b7e,	// (0x000a1cfd) popup_image3_note_pane_ParamLimits

0x5b7e,	// (0x000a1cfd) popup_image3_note_pane

0x5b9a,	// (0x000a1d19) popup_image3_tool_bar_pane_ParamLimits

0x5b9a,	// (0x000a1d19) popup_image3_tool_bar_pane

0x0386,	// (0x0009c505) cell_vitu2_itu_pane_t3_ParamLimits

0x0386,	// (0x0009c505) cell_vitu2_itu_pane_t3

0x03f6,	// (0x0009c575) bg_popup_trans_pane

0x622b,	// (0x000a23aa) grid_image3_tool_bar_pane

0x6235,	// (0x000a23b4) bg_popup_trans_pane_g1

0xb7e0,	// (0x000a795f) bg_popup_trans_pane_g2

0x623d,	// (0x000a23bc) bg_popup_trans_pane_g3

0x6245,	// (0x000a23c4) bg_popup_trans_pane_g4

0x624d,	// (0x000a23cc) bg_popup_trans_pane_g5

0x6255,	// (0x000a23d4) bg_popup_trans_pane_g6

0x625d,	// (0x000a23dc) bg_popup_trans_pane_g7

0x6265,	// (0x000a23e4) bg_popup_trans_pane_g8

0xb7c0,	// (0x000a793f) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x000abab8) bg_popup_trans_pane_g

0x626d,	// (0x000a23ec) cell_image3_tool_bar_pane_ParamLimits

0x626d,	// (0x000a23ec) cell_image3_tool_bar_pane

0xe680,	// (0x000aa7ff) cell_image3_tool_bar_pane_g1

0x03f6,	// (0x0009c575) bg_popup_trans_pane_cp1

0x6281,	// (0x000a2400) popup_image3_note_pane_t1

0x628f,	// (0x000a240e) popup_image3_note_pane_t2

0x629d,	// (0x000a241c) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x000abacb) popup_image3_note_pane_t

0x62ab,	// (0x000a242a) popup_image3_note_pane_t3_copy1

0x62b9,	// (0x000a2438) bg_myfav_hc_instruction_pane_ParamLimits

0x62b9,	// (0x000a2438) bg_myfav_hc_instruction_pane

0x62cd,	// (0x000a244c) cell_myfav_contact_pane_ParamLimits

0x62cd,	// (0x000a244c) cell_myfav_contact_pane

0x62eb,	// (0x000a246a) cell_myfav_contact_pane_cp1_ParamLimits

0x62eb,	// (0x000a246a) cell_myfav_contact_pane_cp1

0x6303,	// (0x000a2482) cell_myfav_contact_pane_cp2_ParamLimits

0x6303,	// (0x000a2482) cell_myfav_contact_pane_cp2

0x631b,	// (0x000a249a) cell_myfav_contact_pane_cp3_ParamLimits

0x631b,	// (0x000a249a) cell_myfav_contact_pane_cp3

0x6332,	// (0x000a24b1) cell_myfav_contact_pane_cp4_ParamLimits

0x6332,	// (0x000a24b1) cell_myfav_contact_pane_cp4

0x634a,	// (0x000a24c9) cell_myfav_contact_pane_cp5_ParamLimits

0x634a,	// (0x000a24c9) cell_myfav_contact_pane_cp5

0x635e,	// (0x000a24dd) cell_myfav_contact_pane_cp6_ParamLimits

0x635e,	// (0x000a24dd) cell_myfav_contact_pane_cp6

0x6374,	// (0x000a24f3) cell_myfav_contact_pane_cp7_ParamLimits

0x6374,	// (0x000a24f3) cell_myfav_contact_pane_cp7

0x638e,	// (0x000a250d) listscroll_gen_pane_cp05

0x6397,	// (0x000a2516) main_myfav_hc_pane_g1_ParamLimits

0x6397,	// (0x000a2516) main_myfav_hc_pane_g1

0x63b1,	// (0x000a2530) main_myfav_hc_pane_g2_ParamLimits

0x63b1,	// (0x000a2530) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x000abad2) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x000abad2) main_myfav_hc_pane_g

0x63e3,	// (0x000a2562) main_myfav_hc_pane_t1_ParamLimits

0x63e3,	// (0x000a2562) main_myfav_hc_pane_t1

0x63fa,	// (0x000a2579) main_myfav_hc_pane_t2_ParamLimits

0x63fa,	// (0x000a2579) main_myfav_hc_pane_t2

0x640c,	// (0x000a258b) main_myfav_hc_pane_t3_ParamLimits

0x640c,	// (0x000a258b) main_myfav_hc_pane_t3

0x641e,	// (0x000a259d) main_myfav_hc_pane_t4_ParamLimits

0x641e,	// (0x000a259d) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x000abad9) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x000abad9) main_myfav_hc_pane_t

0xe680,	// (0x000aa7ff) bg_myfav_hc_instruction_pane_g1

0x6446,	// (0x000a25c5) cell_myfav_contact_pane_g1_ParamLimits

0x6446,	// (0x000a25c5) cell_myfav_contact_pane_g1

0x6446,	// (0x000a25c5) cell_myfav_contact_pane_g2_ParamLimits

0x6446,	// (0x000a25c5) cell_myfav_contact_pane_g2

0x6452,	// (0x000a25d1) cell_myfav_contact_pane_g3_ParamLimits

0x6452,	// (0x000a25d1) cell_myfav_contact_pane_g3

0xe9a9,	// (0x000aab28) cell_myfav_contact_pane_g4_ParamLimits

0xe9a9,	// (0x000aab28) cell_myfav_contact_pane_g4

0x645f,	// (0x000a25de) cell_myfav_contact_pane_g5_ParamLimits

0x645f,	// (0x000a25de) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x000abae4) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x000abae4) cell_myfav_contact_pane_g

0x63cb,	// (0x000a254a) main_myfav_hc_pane_g3_ParamLimits

0x63cb,	// (0x000a254a) main_myfav_hc_pane_g3

0x055f,	// (0x0009c6de) popup_adpt_find_window

0x646b,	// (0x000a25ea) afind_page_pane_ParamLimits

0x646b,	// (0x000a25ea) afind_page_pane

0x6480,	// (0x000a25ff) aid_size_cell_afind_ParamLimits

0x6480,	// (0x000a25ff) aid_size_cell_afind

0x649e,	// (0x000a261d) bg_popup_sub_pane_cp09_ParamLimits

0x649e,	// (0x000a261d) bg_popup_sub_pane_cp09

0x64ab,	// (0x000a262a) find_pane_cp01_ParamLimits

0x64ab,	// (0x000a262a) find_pane_cp01

0x64b8,	// (0x000a2637) grid_afind_control_pane_ParamLimits

0x64b8,	// (0x000a2637) grid_afind_control_pane

0x64cc,	// (0x000a264b) grid_afind_pane_ParamLimits

0x64cc,	// (0x000a264b) grid_afind_pane

0x64ee,	// (0x000a266d) cell_afind_pane_ParamLimits

0x64ee,	// (0x000a266d) cell_afind_pane

0xe680,	// (0x000aa7ff) afind_page_pane_g1

0x654f,	// (0x000a26ce) afind_page_pane_g2

0x6558,	// (0x000a26d7) afind_page_pane_g3

0x0002,

0xf970,	// (0x000abaef) afind_page_pane_g

0x6561,	// (0x000a26e0) afind_page_pane_t1

0x6581,	// (0x000a2700) cell_afind_grid_control_pane_ParamLimits

0x6581,	// (0x000a2700) cell_afind_grid_control_pane

0xefe4,	// (0x000ab163) bg_button_pane_cp69_ParamLimits

0xefe4,	// (0x000ab163) bg_button_pane_cp69

0x6590,	// (0x000a270f) cell_afind_pane_g1_ParamLimits

0x6590,	// (0x000a270f) cell_afind_pane_g1

0x659d,	// (0x000a271c) cell_afind_pane_t1_ParamLimits

0x659d,	// (0x000a271c) cell_afind_pane_t1

0xb5d9,	// (0x000a7758) bg_button_pane_cp72

0x65af,	// (0x000a272e) cell_afind_grid_control_pane_g1

0x3494,	// (0x0009f613) aid_image_placing_area_ParamLimits

0x3494,	// (0x0009f613) aid_image_placing_area

0xecb2,	// (0x000aae31) field_vitu_entry_pane_g1_ParamLimits

0xecb2,	// (0x000aae31) field_vitu_entry_pane_g1

0xecbe,	// (0x000aae3d) field_vitu_entry_pane_g2_ParamLimits

0xecbe,	// (0x000aae3d) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x000ab9a0) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x000ab9a0) field_vitu_entry_pane_g

0x55dc,	// (0x000a175b) cell_vitu_itu_pane_g1_ParamLimits

0x561e,	// (0x000a179d) cell_vitu_itu_pane_t3_ParamLimits

0x561e,	// (0x000a179d) cell_vitu_itu_pane_t3

0xef94,	// (0x000ab113) mp4_progress_pane_t1_ParamLimits

0xefad,	// (0x000ab12c) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x000aba35) mp4_progress_pane_t_ParamLimits

0xefc6,	// (0x000ab145) mup_progress_pane_cp04_ParamLimits

0x6432,	// (0x000a25b1) main_myfav_hc_pane_t5_ParamLimits

0x6432,	// (0x000a25b1) main_myfav_hc_pane_t5

0xa4a1,	// (0x000a6620) aid_zoom_text_primary

0x055f,	// (0x0009c6de) popup_adpt_find_window_ParamLimits

0xa4f3,	// (0x000a6672) main_cam_set_pane

0x5d47,	// (0x000a1ec6) cam4_zoom_pane_ParamLimits

0x5d47,	// (0x000a1ec6) cam4_zoom_pane

0x65b8,	// (0x000a2737) main_cam_set_pane_g1_ParamLimits

0x65b8,	// (0x000a2737) main_cam_set_pane_g1

0x65c6,	// (0x000a2745) main_cam_set_pane_g2_ParamLimits

0x65c6,	// (0x000a2745) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x000abaf6) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x000abaf6) main_cam_set_pane_g

0x65e7,	// (0x000a2766) main_cam_set_pane_t1_ParamLimits

0x65e7,	// (0x000a2766) main_cam_set_pane_t1

0x6602,	// (0x000a2781) main_cset_listscroll_pane_ParamLimits

0x6602,	// (0x000a2781) main_cset_listscroll_pane

0x6622,	// (0x000a27a1) main_cset_slider_pane_ParamLimits

0x6622,	// (0x000a27a1) main_cset_slider_pane

0x6650,	// (0x000a27cf) main_cset_list_pane_ParamLimits

0x6650,	// (0x000a27cf) main_cset_list_pane

0x6660,	// (0x000a27df) scroll_pane_cp028

0x6669,	// (0x000a27e8) aid_area_touch_slider

0x6685,	// (0x000a2804) cset_slider_pane

0x66af,	// (0x000a282e) main_cset_slider_pane_g1

0x66c4,	// (0x000a2843) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x000abafb) main_cset_slider_pane_g

0x67b0,	// (0x000a292f) main_cset_slider_pane_t1

0x67de,	// (0x000a295d) main_cset_slider_pane_t2

0x67f8,	// (0x000a2977) main_cset_slider_pane_t3

0x6812,	// (0x000a2991) main_cset_slider_pane_t4

0x682c,	// (0x000a29ab) main_cset_slider_pane_t5

0x6846,	// (0x000a29c5) main_cset_slider_pane_t6

0x685b,	// (0x000a29da) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x000abb20) main_cset_slider_pane_t

0x69d1,	// (0x000a2b50) cset_list_set_pane_ParamLimits

0x69d1,	// (0x000a2b50) cset_list_set_pane

0x69e3,	// (0x000a2b62) aid_position_infowindow_above

0x69eb,	// (0x000a2b6a) aid_position_infowindow_below

0x69f3,	// (0x000a2b72) cset_list_set_pane_g1_ParamLimits

0x69f3,	// (0x000a2b72) cset_list_set_pane_g1

0x69ff,	// (0x000a2b7e) cset_list_set_pane_g3_ParamLimits

0x69ff,	// (0x000a2b7e) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x000abb3f) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x000abb3f) cset_list_set_pane_g

0x6a0e,	// (0x000a2b8d) cset_list_set_pane_t1_ParamLimits

0x6a0e,	// (0x000a2b8d) cset_list_set_pane_t1

0xcf55,	// (0x000a90d4) list_highlight_pane_cp021_ParamLimits

0xcf55,	// (0x000a90d4) list_highlight_pane_cp021

0xcb8e,	// (0x000a8d0d) cset_slider_pane_g1

0xcba0,	// (0x000a8d1f) cset_slider_pane_g2

0xcb97,	// (0x000a8d16) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x000abb44) cset_slider_pane_g

0xaefb,	// (0x000a707a) aid_area_touch_cam4_zoom

0xaf03,	// (0x000a7082) cam4_zoom_cont_pane

0xaf0b,	// (0x000a708a) cam4_zoom_pane_g1

0xaf13,	// (0x000a7092) cam4_zoom_pane_g2

0x6a23,	// (0x000a2ba2) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x000abb4b) cam4_zoom_pane_g

0xaf1b,	// (0x000a709a) cam4_zoom_cont_pane_g1

0xaf24,	// (0x000a70a3) cam4_zoom_cont_pane_g2

0xaf2d,	// (0x000a70ac) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x000abb52) cam4_zoom_cont_pane_g

0x5c07,	// (0x000a1d86) call4_image_pane_ParamLimits

0x5c07,	// (0x000a1d86) call4_image_pane

0xeff0,	// (0x000ab16f) call4_windows_conf_pane_ParamLimits

0xf031,	// (0x000ab1b0) popup_call4_audio_in_window_ParamLimits

0xf031,	// (0x000ab1b0) popup_call4_audio_in_window

0x03f6,	// (0x0009c575) bg_popup_call2_act_pane_cp02

0xf0a7,	// (0x000ab226) call4_list_conf_pane

0xe680,	// (0x000aa7ff) call4_image_pane_g1

0xe680,	// (0x000aa7ff) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x000ab866) call4_image_pane_g

0x6a2b,	// (0x000a2baa) list_single_graphic_popup_conf4_pane_ParamLimits

0x6a2b,	// (0x000a2baa) list_single_graphic_popup_conf4_pane

0x03f6,	// (0x0009c575) list_highlight_pane_cp022

0x6a3e,	// (0x000a2bbd) list_single_graphic_popup_conf4_pane_g1

0xc84f,	// (0x000a89ce) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x000abb59) list_single_graphic_popup_conf4_pane_g

0x6a46,	// (0x000a2bc5) list_single_graphic_popup_conf4_pane_t1

0x1756,	// (0x0009d8d5) popup_vtel_slider_window_ParamLimits

0x1756,	// (0x0009d8d5) popup_vtel_slider_window

0xefd2,	// (0x000ab151) dialer2_ne_pane_t2_ParamLimits

0xefd2,	// (0x000ab151) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x000aba3a) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x000aba3a) dialer2_ne_pane_t

0xe465,	// (0x000aa5e4) bg_popup_sub_pane_cp010_ParamLimits

0xe465,	// (0x000aa5e4) bg_popup_sub_pane_cp010

0x6a5c,	// (0x000a2bdb) popup_vtel_slider_window_g1_ParamLimits

0x6a5c,	// (0x000a2bdb) popup_vtel_slider_window_g1

0x6a6f,	// (0x000a2bee) popup_vtel_slider_window_g2_ParamLimits

0x6a6f,	// (0x000a2bee) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x000abb5e) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x000abb5e) popup_vtel_slider_window_g

0x6ac5,	// (0x000a2c44) vtel_slider_pane_ParamLimits

0x6ac5,	// (0x000a2c44) vtel_slider_pane

0x6ae7,	// (0x000a2c66) vtel_slider_pane_g1_ParamLimits

0x6ae7,	// (0x000a2c66) vtel_slider_pane_g1

0x6afb,	// (0x000a2c7a) vtel_slider_pane_g2_ParamLimits

0x6afb,	// (0x000a2c7a) vtel_slider_pane_g2

0x6b13,	// (0x000a2c92) vtel_slider_pane_g3_ParamLimits

0x6b13,	// (0x000a2c92) vtel_slider_pane_g3

0x6ae7,	// (0x000a2c66) vtel_slider_pane_g4_ParamLimits

0x6ae7,	// (0x000a2c66) vtel_slider_pane_g4

0x6b29,	// (0x000a2ca8) vtel_slider_pane_g5_ParamLimits

0x6b29,	// (0x000a2ca8) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x000abb67) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x000abb67) vtel_slider_pane_g

0xa501,	// (0x000a6680) main_gallery2_pane

0x5f47,	// (0x000a20c6) aid_size_row_itut2_dropdow_list_ParamLimits

0x5f47,	// (0x000a20c6) aid_size_row_itut2_dropdow_list

0x5fd3,	// (0x000a2152) grid_vitu2_function_top_pane_ParamLimits

0x5fd3,	// (0x000a2152) grid_vitu2_function_top_pane

0x6038,	// (0x000a21b7) popup_vitu2_dropdown_list_window_ParamLimits

0x6038,	// (0x000a21b7) popup_vitu2_dropdown_list_window

0x6061,	// (0x000a21e0) popup_vitu2_match_list_window

0x6b4d,	// (0x000a2ccc) cell_vitu2_function_top_pane_ParamLimits

0x6b4d,	// (0x000a2ccc) cell_vitu2_function_top_pane

0x6b6b,	// (0x000a2cea) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6b6b,	// (0x000a2cea) cell_vitu2_function_top_pane_cp01

0x6b89,	// (0x000a2d08) cell_vitu2_function_top_wide_pane_ParamLimits

0x6b89,	// (0x000a2d08) cell_vitu2_function_top_wide_pane

0xa4f3,	// (0x000a6672) bg_button_pane_cp012

0x6ba7,	// (0x000a2d26) cell_vitu2_function_top_pane_g1

0xaf36,	// (0x000a70b5) bg_button_pane_cp013_ParamLimits

0xaf36,	// (0x000a70b5) bg_button_pane_cp013

0x6bbb,	// (0x000a2d3a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6bbb,	// (0x000a2d3a) cell_vitu2_function_top_wide_pane_g1

0xa4f3,	// (0x000a6672) bg_popup_sub_pane_cp20

0x6bd3,	// (0x000a2d52) list_vitu2_match_list_pane

0x6235,	// (0x000a23b4) bg_popup_sub_pane_cp20_g1

0x623d,	// (0x000a23bc) bg_popup_sub_pane_cp20_g2

0xb7e0,	// (0x000a795f) bg_popup_sub_pane_cp20_g3

0x6245,	// (0x000a23c4) bg_popup_sub_pane_cp20_g4

0xb7c0,	// (0x000a793f) bg_popup_sub_pane_cp20_g5

0x6bf1,	// (0x000a2d70) bg_popup_sub_pane_cp20_g6

0x6255,	// (0x000a23d4) bg_popup_sub_pane_cp20_g7

0x625d,	// (0x000a23dc) bg_popup_sub_pane_cp20_g8

0x6265,	// (0x000a23e4) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x000abb72) bg_popup_sub_pane_cp20_g

0xaf52,	// (0x000a70d1) list_vitu2_match_list_item_pane_ParamLimits

0xaf52,	// (0x000a70d1) list_vitu2_match_list_item_pane

0xaf64,	// (0x000a70e3) list_vitu2_match_list_item_pane_t1

0xa501,	// (0x000a6680) bg_popup_sub_pane_cp21

0xaf72,	// (0x000a70f1) grid_vitu2_dropdown_list_pane

0x6c46,	// (0x000a2dc5) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6c46,	// (0x000a2dc5) cell_vitu2_dropdown_list_char_pane

0x6c67,	// (0x000a2de6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6c67,	// (0x000a2de6) cell_vitu2_dropdown_list_ctrl_pane

0x6c93,	// (0x000a2e12) cell_vitu2_dropdown_list_char_pane_g1

0x6c9c,	// (0x000a2e1b) cell_vitu2_dropdown_list_char_pane_g2

0x6ca5,	// (0x000a2e24) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x000abb8f) cell_vitu2_dropdown_list_char_pane_g

0x6cae,	// (0x000a2e2d) cell_vitu2_dropdown_list_char_pane_t1

0x6cbc,	// (0x000a2e3b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6cbc,	// (0x000a2e3b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6cc9,	// (0x000a2e48) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6cc9,	// (0x000a2e48) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6cd6,	// (0x000a2e55) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6cd6,	// (0x000a2e55) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6ce3,	// (0x000a2e62) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6ce3,	// (0x000a2e62) cell_vitu2_dropdown_list_ctrl_pane_g4

0xae1c,	// (0x000a6f9b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xae1c,	// (0x000a6f9b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x000abb96) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x000abb96) cell_vitu2_dropdown_list_ctrl_pane_g

0x6cff,	// (0x000a2e7e) aid_size_cell_gallery2_ParamLimits

0x6cff,	// (0x000a2e7e) aid_size_cell_gallery2

0x6d15,	// (0x000a2e94) grid_gallery2_pane_ParamLimits

0x6d15,	// (0x000a2e94) grid_gallery2_pane

0x6d29,	// (0x000a2ea8) scroll_pane_cp029_ParamLimits

0x6d29,	// (0x000a2ea8) scroll_pane_cp029

0x6d35,	// (0x000a2eb4) cell_gallery2_pane_ParamLimits

0x6d35,	// (0x000a2eb4) cell_gallery2_pane

0x6d6b,	// (0x000a2eea) cell_gallery2_pane_g2

0x6d75,	// (0x000a2ef4) cell_gallery2_pane_g3

0x6d7d,	// (0x000a2efc) cell_gallery2_pane_g4

0x6d85,	// (0x000a2f04) cell_gallery2_pane_g5

0xca4a,	// (0x000a8bc9) grid_highlight_pane_cp10

0x6061,	// (0x000a21e0) popup_vitu2_match_list_window_ParamLimits

0x6078,	// (0x000a21f7) popup_vitu2_query_window_ParamLimits

0x6078,	// (0x000a21f7) popup_vitu2_query_window

0xa501,	// (0x000a6680) bg_vitu2_candi_button_pane

0x6c93,	// (0x000a2e12) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x6c9c,	// (0x000a2e1b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x6ca5,	// (0x000a2e24) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6d8d,	// (0x000a2f0c) bg_button_pane_cp015

0x6d9f,	// (0x000a2f1e) bg_button_pane_cp016

0x6db2,	// (0x000a2f31) bg_button_pane_cp017

0xe278,	// (0x000aa3f7) bg_popup_sub_pane_cp22

0x6df7,	// (0x000a2f76) popup_vitu2_query_window_g1

0x6e03,	// (0x000a2f82) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x000abba1) popup_vitu2_query_window_g

0x6e22,	// (0x000a2fa1) popup_vitu2_query_window_t1_ParamLimits

0x6e22,	// (0x000a2fa1) popup_vitu2_query_window_t1

0x6e57,	// (0x000a2fd6) popup_vitu2_query_window_t2_ParamLimits

0x6e57,	// (0x000a2fd6) popup_vitu2_query_window_t2

0x6e69,	// (0x000a2fe8) popup_vitu2_query_window_t3_ParamLimits

0x6e69,	// (0x000a2fe8) popup_vitu2_query_window_t3

0x6e91,	// (0x000a3010) popup_vitu2_query_window_t4_ParamLimits

0x6e91,	// (0x000a3010) popup_vitu2_query_window_t4

0x6eb2,	// (0x000a3031) popup_vitu2_query_window_t5_ParamLimits

0x6eb2,	// (0x000a3031) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x000abba8) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x000abba8) popup_vitu2_query_window_t

0x6648,	// (0x000a27c7) main_cset_text_pane

0x6669,	// (0x000a27e8) aid_area_touch_slider_ParamLimits

0x6685,	// (0x000a2804) cset_slider_pane_ParamLimits

0x66af,	// (0x000a282e) main_cset_slider_pane_g1_ParamLimits

0x66c4,	// (0x000a2843) main_cset_slider_pane_g2_ParamLimits

0x66d9,	// (0x000a2858) main_cset_slider_pane_g3_ParamLimits

0x66d9,	// (0x000a2858) main_cset_slider_pane_g3

0x66e5,	// (0x000a2864) main_cset_slider_pane_g4_ParamLimits

0x66e5,	// (0x000a2864) main_cset_slider_pane_g4

0x66f4,	// (0x000a2873) main_cset_slider_pane_g5_ParamLimits

0x66f4,	// (0x000a2873) main_cset_slider_pane_g5

0x6700,	// (0x000a287f) main_cset_slider_pane_g6_ParamLimits

0x6700,	// (0x000a287f) main_cset_slider_pane_g6

0xf97c,	// (0x000abafb) main_cset_slider_pane_g_ParamLimits

0x67b0,	// (0x000a292f) main_cset_slider_pane_t1_ParamLimits

0x67de,	// (0x000a295d) main_cset_slider_pane_t2_ParamLimits

0x67f8,	// (0x000a2977) main_cset_slider_pane_t3_ParamLimits

0x6812,	// (0x000a2991) main_cset_slider_pane_t4_ParamLimits

0x682c,	// (0x000a29ab) main_cset_slider_pane_t5_ParamLimits

0x6846,	// (0x000a29c5) main_cset_slider_pane_t6_ParamLimits

0x685b,	// (0x000a29da) main_cset_slider_pane_t7_ParamLimits

0x6885,	// (0x000a2a04) main_cset_slider_pane_t8_ParamLimits

0x6885,	// (0x000a2a04) main_cset_slider_pane_t8

0x68ad,	// (0x000a2a2c) main_cset_slider_pane_t9_ParamLimits

0x68ad,	// (0x000a2a2c) main_cset_slider_pane_t9

0x68d5,	// (0x000a2a54) main_cset_slider_pane_t10_ParamLimits

0x68d5,	// (0x000a2a54) main_cset_slider_pane_t10

0x68fd,	// (0x000a2a7c) main_cset_slider_pane_t11_ParamLimits

0x68fd,	// (0x000a2a7c) main_cset_slider_pane_t11

0x6925,	// (0x000a2aa4) main_cset_slider_pane_t12_ParamLimits

0x6925,	// (0x000a2aa4) main_cset_slider_pane_t12

0x6942,	// (0x000a2ac1) main_cset_slider_pane_t13_ParamLimits

0x6942,	// (0x000a2ac1) main_cset_slider_pane_t13

0xf9a1,	// (0x000abb20) main_cset_slider_pane_t_ParamLimits

0x03f6,	// (0x0009c575) bg_popup_sub_pane_cp011

0x6f29,	// (0x000a30a8) main_cset_text_pane_g1

0x6f31,	// (0x000a30b0) main_cset_text_pane_t1

0x6f3f,	// (0x000a30be) main_cset_text_pane_t2

0x6f4d,	// (0x000a30cc) main_cset_text_pane_t3

0x6f5b,	// (0x000a30da) main_cset_text_pane_t4

0x6f69,	// (0x000a30e8) main_cset_text_pane_t5

0x6f77,	// (0x000a30f6) main_cset_text_pane_t6

0x6f85,	// (0x000a3104) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x000abbb7) main_cset_text_pane_t

0xa501,	// (0x000a6680) main_cam4_burst_pane

0xa501,	// (0x000a6680) main_cam5_pane

0x656f,	// (0x000a26ee) bg_button_pane_cp019

0x6578,	// (0x000a26f7) bg_button_pane_cp020

0x6714,	// (0x000a2893) main_cset_slider_pane_g7_ParamLimits

0x6714,	// (0x000a2893) main_cset_slider_pane_g7

0x6720,	// (0x000a289f) main_cset_slider_pane_g8_ParamLimits

0x6720,	// (0x000a289f) main_cset_slider_pane_g8

0x672c,	// (0x000a28ab) main_cset_slider_pane_g9_ParamLimits

0x672c,	// (0x000a28ab) main_cset_slider_pane_g9

0x6738,	// (0x000a28b7) main_cset_slider_pane_g10_ParamLimits

0x6738,	// (0x000a28b7) main_cset_slider_pane_g10

0x6744,	// (0x000a28c3) main_cset_slider_pane_g11_ParamLimits

0x6744,	// (0x000a28c3) main_cset_slider_pane_g11

0x6750,	// (0x000a28cf) main_cset_slider_pane_g12_ParamLimits

0x6750,	// (0x000a28cf) main_cset_slider_pane_g12

0x675c,	// (0x000a28db) main_cset_slider_pane_g13_ParamLimits

0x675c,	// (0x000a28db) main_cset_slider_pane_g13

0x6768,	// (0x000a28e7) main_cset_slider_pane_g14_ParamLimits

0x6768,	// (0x000a28e7) main_cset_slider_pane_g14

0x6774,	// (0x000a28f3) main_cset_slider_pane_g15_ParamLimits

0x6774,	// (0x000a28f3) main_cset_slider_pane_g15

0x695f,	// (0x000a2ade) main_cset_slider_pane_t14_ParamLimits

0x695f,	// (0x000a2ade) main_cset_slider_pane_t14

0x6998,	// (0x000a2b17) main_cset_slider_pane_t15_ParamLimits

0x6998,	// (0x000a2b17) main_cset_slider_pane_t15

0x6f93,	// (0x000a3112) aid_cam4_burst_size_cell_ParamLimits

0x6f93,	// (0x000a3112) aid_cam4_burst_size_cell

0x6fb3,	// (0x000a3132) grid_cam4_burst_pane_ParamLimits

0x6fb3,	// (0x000a3132) grid_cam4_burst_pane

0x6feb,	// (0x000a316a) linegrid_cam4_burst_pane_ParamLimits

0x6feb,	// (0x000a316a) linegrid_cam4_burst_pane

0xaf7a,	// (0x000a70f9) scroll_pane_cp30_ParamLimits

0xaf7a,	// (0x000a70f9) scroll_pane_cp30

0x700f,	// (0x000a318e) cell_cam4_burst_pane_ParamLimits

0x700f,	// (0x000a318e) cell_cam4_burst_pane

0x705c,	// (0x000a31db) linegrid_cam4_burst_pane_g1_ParamLimits

0x705c,	// (0x000a31db) linegrid_cam4_burst_pane_g1

0x7069,	// (0x000a31e8) linegrid_cam4_burst_pane_g2_ParamLimits

0x7069,	// (0x000a31e8) linegrid_cam4_burst_pane_g2

0x707a,	// (0x000a31f9) linegrid_cam4_burst_pane_g3_ParamLimits

0x707a,	// (0x000a31f9) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x000abbc6) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x000abbc6) linegrid_cam4_burst_pane_g

0x7087,	// (0x000a3206) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7087,	// (0x000a3206) linegrid_cam4_burst_pane_g3_copy1

0x70a1,	// (0x000a3220) linegrid_cam4_burst_pane_g4_ParamLimits

0x70a1,	// (0x000a3220) linegrid_cam4_burst_pane_g4

0x70ae,	// (0x000a322d) linegrid_cam4_burst_pane_g5_ParamLimits

0x70ae,	// (0x000a322d) linegrid_cam4_burst_pane_g5

0x70bf,	// (0x000a323e) linegrid_cam4_burst_pane_g6_ParamLimits

0x70bf,	// (0x000a323e) linegrid_cam4_burst_pane_g6

0x70d6,	// (0x000a3255) linegrid_cam4_burst_pane_g7_ParamLimits

0x70d6,	// (0x000a3255) linegrid_cam4_burst_pane_g7

0x70e3,	// (0x000a3262) cell_cam4_burst_pane_g1

0x7102,	// (0x000a3281) main_cam5_pane_t1_ParamLimits

0x7102,	// (0x000a3281) main_cam5_pane_t1

0x7114,	// (0x000a3293) main_cam5_pane_t2_ParamLimits

0x7114,	// (0x000a3293) main_cam5_pane_t2

0x7126,	// (0x000a32a5) main_cam5_pane_t3_ParamLimits

0x7126,	// (0x000a32a5) main_cam5_pane_t3

0x7138,	// (0x000a32b7) main_cam5_pane_t4_ParamLimits

0x7138,	// (0x000a32b7) main_cam5_pane_t4

0x7150,	// (0x000a32cf) main_cam5_pane_t5_ParamLimits

0x7150,	// (0x000a32cf) main_cam5_pane_t5

0x7164,	// (0x000a32e3) main_cam5_pane_t6_ParamLimits

0x7164,	// (0x000a32e3) main_cam5_pane_t6

0x7178,	// (0x000a32f7) main_cam5_pane_t7_ParamLimits

0x7178,	// (0x000a32f7) main_cam5_pane_t7

0x718a,	// (0x000a3309) main_cam5_pane_t8_ParamLimits

0x718a,	// (0x000a3309) main_cam5_pane_t8

0x71a6,	// (0x000a3325) main_cam5_pane_t9_ParamLimits

0x71a6,	// (0x000a3325) main_cam5_pane_t9

0x71b8,	// (0x000a3337) main_cam5_pane_t10_ParamLimits

0x71b8,	// (0x000a3337) main_cam5_pane_t10

0x71ca,	// (0x000a3349) main_cam5_pane_t11_ParamLimits

0x71ca,	// (0x000a3349) main_cam5_pane_t11

0x71dc,	// (0x000a335b) main_cam5_pane_t12_ParamLimits

0x71dc,	// (0x000a335b) main_cam5_pane_t12

0x71f1,	// (0x000a3370) main_cam5_pane_t13_ParamLimits

0x71f1,	// (0x000a3370) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x000abbd2) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x000abbd2) main_cam5_pane_t

0x05e1,	// (0x0009c760) popup_scut_keymap_window_ParamLimits

0x05e1,	// (0x0009c760) popup_scut_keymap_window

0x720e,	// (0x000a338d) aid_size_cell_brow_shortcut

0xca4a,	// (0x000a8bc9) bg_popup_window_pane_cp010

0x721a,	// (0x000a3399) grid_scut_pane

0x7226,	// (0x000a33a5) cell_scut_pane_ParamLimits

0x7226,	// (0x000a33a5) cell_scut_pane

0x723d,	// (0x000a33bc) cell_scut_pane_g1

0x7246,	// (0x000a33c5) cell_scut_pane_t1

0x7255,	// (0x000a33d4) cell_scut_pane_t2

0x7264,	// (0x000a33e3) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x000abbed) cell_scut_pane_t

0x4ad0,	// (0x000a0c4f) main_mup3_pane_g8_ParamLimits

0x4ad0,	// (0x000a0c4f) main_mup3_pane_g8

0x5f5f,	// (0x000a20de) area_vitu2_query_pane_ParamLimits

0x5f5f,	// (0x000a20de) area_vitu2_query_pane

0x6dc5,	// (0x000a2f44) input_focus_pane_cp08

0x7272,	// (0x000a33f1) area_vitu2_query_pane_g1

0x727e,	// (0x000a33fd) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x000abbf4) area_vitu2_query_pane_g

0x728f,	// (0x000a340e) area_vitu2_query_pane_t1_ParamLimits

0x728f,	// (0x000a340e) area_vitu2_query_pane_t1

0x72a3,	// (0x000a3422) area_vitu2_query_pane_t2_ParamLimits

0x72a3,	// (0x000a3422) area_vitu2_query_pane_t2

0x72b7,	// (0x000a3436) area_vitu2_query_pane_t3_ParamLimits

0x72b7,	// (0x000a3436) area_vitu2_query_pane_t3

0x72df,	// (0x000a345e) area_vitu2_query_pane_t4_ParamLimits

0x72df,	// (0x000a345e) area_vitu2_query_pane_t4

0x7307,	// (0x000a3486) area_vitu2_query_pane_t5_ParamLimits

0x7307,	// (0x000a3486) area_vitu2_query_pane_t5

0x732f,	// (0x000a34ae) area_vitu2_query_pane_t6_ParamLimits

0x732f,	// (0x000a34ae) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x000abbf9) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x000abbf9) area_vitu2_query_pane_t

0x737b,	// (0x000a34fa) bg_button_pane_cp018

0x7389,	// (0x000a3508) bg_button_pane_cp021

0x7395,	// (0x000a3514) bg_button_pane_cp022

0x73a4,	// (0x000a3523) input_focus_pane_cp09

0x2a33,	// (0x0009ebb2) aid_size_touch_mv_arrow_left

0x2a5c,	// (0x0009ebdb) aid_size_touch_mv_arrow_right

0x678c,	// (0x000a290b) main_cset_slider_pane_g16_ParamLimits

0x678c,	// (0x000a290b) main_cset_slider_pane_g16

0x6798,	// (0x000a2917) main_cset_slider_pane_g17_ParamLimits

0x6798,	// (0x000a2917) main_cset_slider_pane_g17

0x70e3,	// (0x000a3262) cell_cam4_burst_pane_g1_ParamLimits

0x03f6,	// (0x0009c575) compa_mode_pane

0x6a7f,	// (0x000a2bfe) popup_vtel_slider_window_g3_ParamLimits

0x6a7f,	// (0x000a2bfe) popup_vtel_slider_window_g3

0x6a96,	// (0x000a2c15) popup_vtel_slider_window_g4_ParamLimits

0x6a96,	// (0x000a2c15) popup_vtel_slider_window_g4

0x6aad,	// (0x000a2c2c) popup_vtel_slider_window_t1_ParamLimits

0x6aad,	// (0x000a2c2c) popup_vtel_slider_window_t1

0xa501,	// (0x000a6680) main_cl_pane

0xaa7a,	// (0x000a6bf9) popup_imed_adjust2_window_ParamLimits

0xe278,	// (0x000aa3f7) bg_tb_trans_pane_cp05_ParamLimits

0xebe7,	// (0x000aad66) popup_imed_adjust2_window_g1_ParamLimits

0xebf6,	// (0x000aad75) popup_imed_adjust2_window_g2_ParamLimits

0xebf6,	// (0x000aad75) popup_imed_adjust2_window_g2

0xec02,	// (0x000aad81) popup_imed_adjust2_window_g3_ParamLimits

0xec02,	// (0x000aad81) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x000ab964) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x000ab964) popup_imed_adjust2_window_g

0xec0e,	// (0x000aad8d) popup_imed_adjust2_window_t1_ParamLimits

0xec26,	// (0x000aada5) slider_imed_adjust_pane_ParamLimits

0xec3a,	// (0x000aadb9) slider_imed_adjust_pane_g1_ParamLimits

0xec4a,	// (0x000aadc9) slider_imed_adjust_pane_g2_ParamLimits

0xec5a,	// (0x000aadd9) slider_imed_adjust_pane_g3_ParamLimits

0xec6b,	// (0x000aadea) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x000ab96b) slider_imed_adjust_pane_g_ParamLimits

0x5ce8,	// (0x000a1e67) aid_touch_area_cam4_ParamLimits

0x5ce8,	// (0x000a1e67) aid_touch_area_cam4

0xadee,	// (0x000a6f6d) battery_pane_cp01

0x5db7,	// (0x000a1f36) main_camera4_pane_g6_ParamLimits

0x5db7,	// (0x000a1f36) main_camera4_pane_g6

0x5de1,	// (0x000a1f60) main_camera4_pane_t2_ParamLimits

0x5de1,	// (0x000a1f60) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x000aba6e) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x000aba6e) main_camera4_pane_t

0x5e16,	// (0x000a1f95) aid_touch_area_vid4_ParamLimits

0x5e16,	// (0x000a1f95) aid_touch_area_vid4

0x5e6a,	// (0x000a1fe9) main_video4_pane_g5_ParamLimits

0x5e6a,	// (0x000a1fe9) main_video4_pane_g5

0x5e8f,	// (0x000a200e) vid4_progress_pane_ParamLimits

0x5e8f,	// (0x000a200e) vid4_progress_pane

0x67a4,	// (0x000a2923) main_cset_slider_pane_g18_ParamLimits

0x67a4,	// (0x000a2923) main_cset_slider_pane_g18

0x70f6,	// (0x000a3275) cell_cam4_burst_pane_g2_ParamLimits

0x70f6,	// (0x000a3275) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x000abbcd) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x000abbcd) cell_cam4_burst_pane_g

0xb3bf,	// (0x000a753e) bg_cl_pane_ParamLimits

0xb3bf,	// (0x000a753e) bg_cl_pane

0x73b3,	// (0x000a3532) cl_header_pane_ParamLimits

0x73b3,	// (0x000a3532) cl_header_pane

0x73c7,	// (0x000a3546) cl_listscroll_pane_ParamLimits

0x73c7,	// (0x000a3546) cl_listscroll_pane

0x73d7,	// (0x000a3556) bg_cl_pane_g1

0x73df,	// (0x000a355e) bg_cl_pane_g2

0x73e7,	// (0x000a3566) bg_cl_pane_g3

0x73ef,	// (0x000a356e) bg_cl_pane_g4

0x73f7,	// (0x000a3576) bg_cl_pane_g5

0x73ff,	// (0x000a357e) bg_cl_pane_g6

0x7407,	// (0x000a3586) bg_cl_pane_g7

0x740f,	// (0x000a358e) bg_cl_pane_g8

0x7417,	// (0x000a3596) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x000abc08) bg_cl_pane_g

0x741f,	// (0x000a359e) aid_height_cl_leading_ParamLimits

0x741f,	// (0x000a359e) aid_height_cl_leading

0x742b,	// (0x000a35aa) aid_height_cl_text_ParamLimits

0x742b,	// (0x000a35aa) aid_height_cl_text

0xcf55,	// (0x000a90d4) bg_cl_header_pane_ParamLimits

0xcf55,	// (0x000a90d4) bg_cl_header_pane

0x744a,	// (0x000a35c9) cl_header_pane_g1_ParamLimits

0x744a,	// (0x000a35c9) cl_header_pane_g1

0x7460,	// (0x000a35df) cl_header_pane_t1_ParamLimits

0x7460,	// (0x000a35df) cl_header_pane_t1

0x7479,	// (0x000a35f8) cl_list_pane

0x6660,	// (0x000a27df) hc_scroll_pane_cp01

0xb7c0,	// (0x000a793f) bg_cl_header_pane_g1

0x6235,	// (0x000a23b4) bg_cl_header_pane_g2

0xb7e0,	// (0x000a795f) bg_cl_header_pane_g3

0x6245,	// (0x000a23c4) bg_cl_header_pane_g4

0x623d,	// (0x000a23bc) bg_cl_header_pane_g5

0x6bf1,	// (0x000a2d70) bg_cl_header_pane_g6

0x625d,	// (0x000a23dc) bg_cl_header_pane_g7

0x6265,	// (0x000a23e4) bg_cl_header_pane_g8

0x6255,	// (0x000a23d4) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x000abc1b) bg_cl_header_pane_g

0x7482,	// (0x000a3601) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7482,	// (0x000a3601) hc_cl_list_double_graphic_heading_pane

0x7493,	// (0x000a3612) hc_cl_list_single_graphic_pane_ParamLimits

0x7493,	// (0x000a3612) hc_cl_list_single_graphic_pane

0x74a9,	// (0x000a3628) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x74a9,	// (0x000a3628) hc_cl_list_single_graphic_pane_g1

0x74b5,	// (0x000a3634) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x74b5,	// (0x000a3634) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x000abc2e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x000abc2e) hc_cl_list_single_graphic_pane_g

0x74c9,	// (0x000a3648) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x74c9,	// (0x000a3648) hc_cl_list_single_graphic_pane_t1

0x74a9,	// (0x000a3628) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x74a9,	// (0x000a3628) hc_cl_list_double_graphic_heading_pane_g1

0x74de,	// (0x000a365d) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x74de,	// (0x000a365d) hc_cl_list_double_graphic_heading_pane_g2

0x74f2,	// (0x000a3671) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x74f2,	// (0x000a3671) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x000abc33) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x000abc33) hc_cl_list_double_graphic_heading_pane_g

0x7506,	// (0x000a3685) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7506,	// (0x000a3685) hc_cl_list_double_graphic_heading_pane_t1

0x751b,	// (0x000a369a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x751b,	// (0x000a369a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x000abc3a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x000abc3a) hc_cl_list_double_graphic_heading_pane_t

0x7530,	// (0x000a36af) vid4_progress_pane_g1

0x7542,	// (0x000a36c1) vid4_progress_pane_g2

0xbaa1,	// (0x000a7c20) vid4_progress_pane_g3

0xaf8e,	// (0x000a710d) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x000abc3f) vid4_progress_pane_g

0xafac,	// (0x000a712b) vid4_progress_pane_t1

0xafc1,	// (0x000a7140) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x000abc4a) vid4_progress_pane_t

0xafec,	// (0x000a716b) wait_bar_pane_cp07

0xe473,	// (0x000aa5f2) blid_firmament_pane_ParamLimits

0xe4b6,	// (0x000aa635) popup_blid_sat_info2_window_g1

0xe4da,	// (0x000aa659) popup_blid_sat_info2_window_t3

0xe4e8,	// (0x000aa667) popup_blid_sat_info2_window_t4

0xe4f6,	// (0x000aa675) popup_blid_sat_info2_window_t5

0xe504,	// (0x000aa683) popup_blid_sat_info2_window_t6

0xe514,	// (0x000aa693) popup_blid_sat_info2_window_t7

0xe522,	// (0x000aa6a1) popup_blid_sat_info2_window_t8

0xe530,	// (0x000aa6af) popup_blid_sat_info2_window_t9

0xe53e,	// (0x000aa6bd) popup_blid_sat_info2_window_t10

0xe600,	// (0x000aa77f) aid_firma_cardinal_ParamLimits

0xe614,	// (0x000aa793) blid_firmament_pane_t1_ParamLimits

0xe62b,	// (0x000aa7aa) blid_firmament_pane_t2_ParamLimits

0xe642,	// (0x000aa7c1) blid_firmament_pane_t3_ParamLimits

0xe659,	// (0x000aa7d8) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x000ab85d) blid_firmament_pane_t_ParamLimits

0xe670,	// (0x000aa7ef) blid_sat_info_pane_ParamLimits

0xa4f3,	// (0x000a6672) main_cam_set_pane_ParamLimits

0x5396,	// (0x000a1515) aid_size_cell_colour_35_ParamLimits

0x53b6,	// (0x000a1535) aid_size_cell_colour_112_ParamLimits

0x53d6,	// (0x000a1555) aid_size_cell_effect_ParamLimits

0xe278,	// (0x000aa3f7) bg_tb_trans_pane_cp02_ParamLimits

0xba28,	// (0x000a7ba7) heading_imed_pane_ParamLimits

0x53f6,	// (0x000a1575) listscroll_imed_pane_ParamLimits

0xd89e,	// (0x000a9a1d) popup_call2_audio_first_window_g5_ParamLimits

0xd89e,	// (0x000a9a1d) popup_call2_audio_first_window_g5

0x5993,	// (0x000a1b12) aid_size_touch_image3_arrow_left_ParamLimits

0x5993,	// (0x000a1b12) aid_size_touch_image3_arrow_left

0x59bf,	// (0x000a1b3e) aid_size_touch_image3_arrow_right_ParamLimits

0x59bf,	// (0x000a1b3e) aid_size_touch_image3_arrow_right

0xafd7,	// (0x000a7156) vid4_progress_pane_t3

0x5709,	// (0x000a1888) main_hwr_training_symbol_option_pane_ParamLimits

0x5709,	// (0x000a1888) main_hwr_training_symbol_option_pane

0xeed4,	// (0x000ab053) popup_hwr_training_preview_window_ParamLimits

0xeed4,	// (0x000ab053) popup_hwr_training_preview_window

0x5729,	// (0x000a18a8) hwr_training_navi_pane_g5_ParamLimits

0x5729,	// (0x000a18a8) hwr_training_navi_pane_g5

0x617d,	// (0x000a22fc) popup_char_count_window

0xa4f3,	// (0x000a6672) bg_popup_sub_pane_cp20_ParamLimits

0x6bd3,	// (0x000a2d52) list_vitu2_match_list_pane_ParamLimits

0x6be2,	// (0x000a2d61) vitu2_page_scroll_pane_ParamLimits

0x6be2,	// (0x000a2d61) vitu2_page_scroll_pane

0x75a5,	// (0x000a3724) list_single_hwr_training_symbol_option_pane_ParamLimits

0x75a5,	// (0x000a3724) list_single_hwr_training_symbol_option_pane

0x75b8,	// (0x000a3737) list_single_hwr_training_symbol_option_pane_g1

0x75c0,	// (0x000a373f) list_single_hwr_training_symbol_option_pane_t1

0x75ce,	// (0x000a374d) bg_button_pane_cp023

0x75d7,	// (0x000a3756) bg_button_pane_cp024

0x760a,	// (0x000a3789) vitu2_page_scroll_pane_g1

0x7612,	// (0x000a3791) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x000abc51) vitu2_page_scroll_pane_g

0x761a,	// (0x000a3799) vitu2_page_scroll_pane_t1

0x7629,	// (0x000a37a8) popup_char_count_window_g1

0x7632,	// (0x000a37b1) popup_char_count_window_g2

0x763b,	// (0x000a37ba) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x000abc56) popup_char_count_window_g

0x7644,	// (0x000a37c3) popup_char_count_window_t1

0xa501,	// (0x000a6680) main_vded2_pane

0xebd3,	// (0x000aad52) aid_size_cell_imed_line

0xebdd,	// (0x000aad5c) grid_imed_line_width_pane

0xaec6,	// (0x000a7045) vid4_indicators_pane_g4

0x7652,	// (0x000a37d1) cell_imed_line_width_pane_ParamLimits

0x7652,	// (0x000a37d1) cell_imed_line_width_pane

0x7666,	// (0x000a37e5) cell_imed_line_width_pane_g1

0x464e,	// (0x000a07cd) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x000abc5d) cell_imed_line_width_pane_g

0x766f,	// (0x000a37ee) main_vded2_pane_g1_ParamLimits

0x766f,	// (0x000a37ee) main_vded2_pane_g1

0x7685,	// (0x000a3804) main_vded2_pane_g2_ParamLimits

0x7685,	// (0x000a3804) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x000abc62) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x000abc62) main_vded2_pane_g

0x7697,	// (0x000a3816) vded2_slider_pane_ParamLimits

0x7697,	// (0x000a3816) vded2_slider_pane

0x76a7,	// (0x000a3826) aid_size_touch_vded2_end

0x76b1,	// (0x000a3830) aid_size_touch_vded2_playhead

0x76bb,	// (0x000a383a) aid_size_touch_vded2_start

0x76c3,	// (0x000a3842) vded2_slider_bg_pane

0x76cc,	// (0x000a384b) vded2_slider_pane_g1

0x76d5,	// (0x000a3854) vded2_slider_pane_g2

0x76dd,	// (0x000a385c) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x000abc67) vded2_slider_pane_g

0x76e8,	// (0x000a3867) vded2_slider_bg_pane_g1

0x76f1,	// (0x000a3870) vded2_slider_bg_pane_g2

0x76fa,	// (0x000a3879) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x000abc6e) vded2_slider_bg_pane_g

0x3103,	// (0x0009f282) aid_postcard_touch_down_pane_ParamLimits

0x3103,	// (0x0009f282) aid_postcard_touch_down_pane

0x3119,	// (0x0009f298) aid_postcard_touch_up_pane_ParamLimits

0x3119,	// (0x0009f298) aid_postcard_touch_up_pane

0xa501,	// (0x000a6680) main_blid2_pane

0xaa60,	// (0x000a6bdf) popup_blid2_search_window

0x03f6,	// (0x0009c575) blid2_gps_pane

0x03f6,	// (0x0009c575) blid2_navig_pane

0x03f6,	// (0x0009c575) blid2_search_pane

0x03f6,	// (0x0009c575) blid2_tripm_pane

0x7703,	// (0x000a3882) blid2_search_pane_g1_ParamLimits

0x7703,	// (0x000a3882) blid2_search_pane_g1

0x771d,	// (0x000a389c) blid2_search_pane_t1_ParamLimits

0x771d,	// (0x000a389c) blid2_search_pane_t1

0x772f,	// (0x000a38ae) aid_size_cell_blid2_gps_ParamLimits

0x772f,	// (0x000a38ae) aid_size_cell_blid2_gps

0x7747,	// (0x000a38c6) blid2_gps_pane_g1_ParamLimits

0x7747,	// (0x000a38c6) blid2_gps_pane_g1

0x775b,	// (0x000a38da) grid_blid2_satellite_pane_ParamLimits

0x775b,	// (0x000a38da) grid_blid2_satellite_pane

0x7775,	// (0x000a38f4) blid2_navig_pane_g1_ParamLimits

0x7775,	// (0x000a38f4) blid2_navig_pane_g1

0x7781,	// (0x000a3900) blid2_navig_pane_t1_ParamLimits

0x7781,	// (0x000a3900) blid2_navig_pane_t1

0x779c,	// (0x000a391b) blid2_navig_pane_t2_ParamLimits

0x779c,	// (0x000a391b) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x000abc75) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x000abc75) blid2_navig_pane_t

0x77b7,	// (0x000a3936) blid2_navig_ring_pane_ParamLimits

0x77b7,	// (0x000a3936) blid2_navig_ring_pane

0x77d0,	// (0x000a394f) blid2_speed_pane_ParamLimits

0x77d0,	// (0x000a394f) blid2_speed_pane

0x77dc,	// (0x000a395b) blid2_tripm_pane_g1_ParamLimits

0x77dc,	// (0x000a395b) blid2_tripm_pane_g1

0x77f5,	// (0x000a3974) blid2_tripm_pane_g2_ParamLimits

0x77f5,	// (0x000a3974) blid2_tripm_pane_g2

0x7809,	// (0x000a3988) blid2_tripm_pane_g3_ParamLimits

0x7809,	// (0x000a3988) blid2_tripm_pane_g3

0x781d,	// (0x000a399c) blid2_tripm_pane_g4_ParamLimits

0x781d,	// (0x000a399c) blid2_tripm_pane_g4

0x7831,	// (0x000a39b0) blid2_tripm_pane_g5_ParamLimits

0x7831,	// (0x000a39b0) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x000abc7a) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x000abc7a) blid2_tripm_pane_g

0x7857,	// (0x000a39d6) blid2_tripm_pane_t1_ParamLimits

0x7857,	// (0x000a39d6) blid2_tripm_pane_t1

0x7872,	// (0x000a39f1) blid2_tripm_pane_t2_ParamLimits

0x7872,	// (0x000a39f1) blid2_tripm_pane_t2

0x788b,	// (0x000a3a0a) blid2_tripm_pane_t3_ParamLimits

0x788b,	// (0x000a3a0a) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x000abc87) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x000abc87) blid2_tripm_pane_t

0x78d2,	// (0x000a3a51) cell_blid2_satellite_pane_ParamLimits

0x78d2,	// (0x000a3a51) cell_blid2_satellite_pane

0x78f0,	// (0x000a3a6f) cell_blid2_satellite_pane_g1

0x78f9,	// (0x000a3a78) cell_blid2_satellite_pane_t1

0xe680,	// (0x000aa7ff) blid2_speed_pane_g1

0x7907,	// (0x000a3a86) blid2_speed_pane_t1

0x7915,	// (0x000a3a94) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x000abc90) blid2_speed_pane_t

0xe680,	// (0x000aa7ff) blid2_navig_ring_pane_g1

0x7923,	// (0x000a3aa2) blid2_navig_ring_pane_g2

0x792b,	// (0x000a3aaa) blid2_navig_ring_pane_g3

0x7933,	// (0x000a3ab2) blid2_navig_ring_pane_g4

0x793b,	// (0x000a3aba) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x000abc95) blid2_navig_ring_pane_g

0x03f6,	// (0x0009c575) bg_popup_window_pane_cp011

0x7943,	// (0x000a3ac2) popup_blid2_search_window_g1

0x794b,	// (0x000a3aca) popup_blid2_search_window_t1

0x7959,	// (0x000a3ad8) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x000abca0) popup_blid2_search_window_t

0xb6cf,	// (0x000a784e) main_browser_pane_g1

0xb3bf,	// (0x000a753e) main_browser_pane_ParamLimits

0xa4f3,	// (0x000a6672) bg_button_pane_cp011_ParamLimits

0x6217,	// (0x000a2396) cell_vitu2_function_pane_g1_ParamLimits

0xe278,	// (0x000aa3f7) bg_popup_sub_pane_cp22_ParamLimits

0x6dc5,	// (0x000a2f44) input_focus_pane_cp08_ParamLimits

0x6ddc,	// (0x000a2f5b) popup_vitu2_query_button_pane_ParamLimits

0x6ddc,	// (0x000a2f5b) popup_vitu2_query_button_pane

0x6ded,	// (0x000a2f6c) popup_vitu2_query_input_button_pane

0x6df7,	// (0x000a2f76) popup_vitu2_query_window_g1_ParamLimits

0x6e03,	// (0x000a2f82) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x000abba1) popup_vitu2_query_window_g_ParamLimits

0x03f6,	// (0x0009c575) bg_button_pane_cp026

0x7967,	// (0x000a3ae6) popup_vitu2_query_input_button_pane_g1

0x03f6,	// (0x0009c575) bg_button_pane_cp025

0x796f,	// (0x000a3aee) popup_vitu2_query_button_pane_t1

0x47a9,	// (0x000a0928) main_mp3_pane_t6

0x47b7,	// (0x000a0936) popup_slider_window_cp01

0xae2a,	// (0x000a6fa9) cam4_battery_pane

0xae83,	// (0x000a7002) cam4_battery_pane_cp02

0xaf86,	// (0x000a7105) cam4_battery_pane_cp01

0xaf86,	// (0x000a7105) cam4_battery_pane_cp03

0x5878,	// (0x000a19f7) cam4_battery_pane_g1

0xe680,	// (0x000aa7ff) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x000abca5) cam4_battery_pane_g

0xe54c,	// (0x000aa6cb) popup_blid_sat_info2_window_t11

0x2a33,	// (0x0009ebb2) aid_size_touch_mv_arrow_left_ParamLimits

0x2a5c,	// (0x0009ebdb) aid_size_touch_mv_arrow_right_ParamLimits

0xc9aa,	// (0x000a8b29) navi_pane_g1_ParamLimits

0x2a9b,	// (0x0009ec1a) navi_pane_g2_ParamLimits

0x2ac9,	// (0x0009ec48) navi_pane_g3_ParamLimits

0xf3f0,	// (0x000ab56f) navi_pane_g_ParamLimits

0x2b21,	// (0x0009eca0) navi_pane_mv_t1_ParamLimits

0x5402,	// (0x000a1581) grid_imed_effect_pane_ParamLimits

0x1653,	// (0x0009d7d2) aid_placing_vt_slider_lsc

0xb61e,	// (0x000a779d) aid_placing_vt_slider_prt

0xcf55,	// (0x000a90d4) bg_tb_trans_pane_cp01_ParamLimits

0xe80c,	// (0x000aa98b) popup_image_details_window_g1_ParamLimits

0xe81f,	// (0x000aa99e) popup_image_details_window_g2_ParamLimits

0xe834,	// (0x000aa9b3) popup_image_details_window_g3_ParamLimits

0xe834,	// (0x000aa9b3) popup_image_details_window_g3

0xf723,	// (0x000ab8a2) popup_image_details_window_g_ParamLimits

0xe848,	// (0x000aa9c7) popup_image_details_window_t1_ParamLimits

0xe85a,	// (0x000aa9d9) popup_image_details_window_t2_ParamLimits

0xe873,	// (0x000aa9f2) popup_image_details_window_t3_ParamLimits

0xe887,	// (0x000aaa06) popup_image_details_window_t4_ParamLimits

0xe8a2,	// (0x000aaa21) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x000ab8a9) popup_image_details_window_t_ParamLimits

0x7437,	// (0x000a35b6) cl_header_name_pane_ParamLimits

0x7437,	// (0x000a35b6) cl_header_name_pane

0x797d,	// (0x000a3afc) cl_header_name_pane_t1_ParamLimits

0x797d,	// (0x000a3afc) cl_header_name_pane_t1

0x799e,	// (0x000a3b1d) cl_header_name_pane_t2_ParamLimits

0x799e,	// (0x000a3b1d) cl_header_name_pane_t2

0x79e0,	// (0x000a3b5f) cl_header_name_pane_t3_ParamLimits

0x79e0,	// (0x000a3b5f) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x000abcaa) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x000abcaa) cl_header_name_pane_t

0x2af2,	// (0x0009ec71) navi_pane_mv_g2_ParamLimits

0x610b,	// (0x000a228a) field_vitu2_entry_pane_g1_ParamLimits

0x6117,	// (0x000a2296) field_vitu2_entry_pane_g2_ParamLimits

0x6123,	// (0x000a22a2) field_vitu2_entry_pane_g3_ParamLimits

0x6123,	// (0x000a22a2) field_vitu2_entry_pane_g3

0xf921,	// (0x000abaa0) field_vitu2_entry_pane_g_ParamLimits

0x6193,	// (0x000a2312) cell_vitu2_itu_pane_g1_ParamLimits

0x61a3,	// (0x000a2322) cell_vitu2_itu_pane_g2_ParamLimits

0x61a3,	// (0x000a2322) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x000abaac) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x000abaac) cell_vitu2_itu_pane_g

0xa4f3,	// (0x000a6672) bg_vkb2_func_pane_cp05_ParamLimits

0xa4f3,	// (0x000a6672) bg_vkb2_func_pane_cp05

0xa4f3,	// (0x000a6672) bg_vkb2_func_pane_cp03

0xa4f3,	// (0x000a6672) bg_vkb2_func_pane_cp04

0xa4f3,	// (0x000a6672) bg_vkb2_func_pane_cp10_ParamLimits

0xa4f3,	// (0x000a6672) bg_vkb2_func_pane_cp10

0x7395,	// (0x000a3514) bg_vkb2_func_pane_cp08

0x737b,	// (0x000a34fa) bg_vkb2_func_pane_cp06

0x7389,	// (0x000a3508) bg_vkb2_func_pane_cp07

0x75e0,	// (0x000a375f) bg_vkb2_func_pane_cp11_ParamLimits

0x75e0,	// (0x000a375f) bg_vkb2_func_pane_cp11

0x75f5,	// (0x000a3774) bg_vkb2_func_pane_cp12_ParamLimits

0x75f5,	// (0x000a3774) bg_vkb2_func_pane_cp12

0x03f6,	// (0x0009c575) bg_vkb2_func_pane_cp09

0x6235,	// (0x000a23b4) bg_vkb2_func_pane_g1

0xb7e0,	// (0x000a795f) bg_vkb2_func_pane_g2

0x623d,	// (0x000a23bc) bg_vkb2_func_pane_g3

0x6245,	// (0x000a23c4) bg_vkb2_func_pane_g4

0x6bf1,	// (0x000a2d70) bg_vkb2_func_pane_g5

0x625d,	// (0x000a23dc) bg_vkb2_func_pane_g6

0x6265,	// (0x000a23e4) bg_vkb2_func_pane_g7

0x6255,	// (0x000a23d4) bg_vkb2_func_pane_g8

0xb7c0,	// (0x000a793f) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x000abcb1) bg_vkb2_func_pane_g

0x7845,	// (0x000a39c4) blid2_tripm_pane_g6_ParamLimits

0x7845,	// (0x000a39c4) blid2_tripm_pane_g6

0xef8c,	// (0x000ab10b) mp4_progress_pane_g1

0x78be,	// (0x000a3a3d) blid2_tripm_values_pane_ParamLimits

0x78be,	// (0x000a3a3d) blid2_tripm_values_pane

0x7a11,	// (0x000a3b90) blid2_tripm_values_pane_t1

0x7a1f,	// (0x000a3b9e) blid2_tripm_values_pane_t2

0x7a2d,	// (0x000a3bac) blid2_tripm_values_pane_t3

0x7a3b,	// (0x000a3bba) blid2_tripm_values_pane_t4

0x7a49,	// (0x000a3bc8) blid2_tripm_values_pane_t5

0x7a57,	// (0x000a3bd6) blid2_tripm_values_pane_t6

0x7a65,	// (0x000a3be4) blid2_tripm_values_pane_t7

0x7a73,	// (0x000a3bf2) blid2_tripm_values_pane_t8

0x7a81,	// (0x000a3c00) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x000abcc4) blid2_tripm_values_pane_t

0x1695,	// (0x0009d814) call_video_pane_t1_ParamLimits

0x16b3,	// (0x0009d832) call_video_pane_t2_ParamLimits

0xf279,	// (0x000ab3f8) call_video_pane_t_ParamLimits

0x3008,	// (0x0009f187) msg_header_pane_g1_ParamLimits

0xcbca,	// (0x000a8d49) msg_header_pane_g2_ParamLimits

0xcbca,	// (0x000a8d49) msg_header_pane_g2

0x0001,

0xf493,	// (0x000ab612) msg_header_pane_g_ParamLimits

0xf493,	// (0x000ab612) msg_header_pane_g

0xb3bf,	// (0x000a753e) main_clock2_pane_ParamLimits

0x5101,	// (0x000a1280) grid_clock2_toolbar_pane_ParamLimits

0x5101,	// (0x000a1280) grid_clock2_toolbar_pane

0x5101,	// (0x000a1280) listscroll_clock2_pane_ParamLimits

0x5101,	// (0x000a1280) listscroll_clock2_pane

0x51f6,	// (0x000a1375) main_clock2_pane_t3_ParamLimits

0x51f6,	// (0x000a1375) main_clock2_pane_t3

0x521a,	// (0x000a1399) main_clock2_pane_t4_ParamLimits

0x521a,	// (0x000a1399) main_clock2_pane_t4

0x7a8f,	// (0x000a3c0e) cell_clock2_toolbar_pane

0x7a97,	// (0x000a3c16) cell_clock2_toolbar_pane_cp01

0x7a97,	// (0x000a3c16) cell_clock2_toolbar_pane_cp02

0x7a9f,	// (0x000a3c1e) cell_clock2_toolbar_pane_cp03

0x7aa7,	// (0x000a3c26) list_clock2_pane

0xc901,	// (0x000a8a80) scroll_pane_cp10

0x7aaf,	// (0x000a3c2e) list_single_clock2_pane_ParamLimits

0x7aaf,	// (0x000a3c2e) list_single_clock2_pane

0xca4a,	// (0x000a8bc9) list_highlight_pane_cp08

0x7abc,	// (0x000a3c3b) list_single_clock2_pane_t1

0x7aca,	// (0x000a3c49) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x000abcd7) list_single_clock2_pane_t

0x03f6,	// (0x0009c575) bg_button_pane_cp10

0x7ad8,	// (0x000a3c57) cell_clock2_toolbar_pane_g1

0x308f,	// (0x0009f20e) aid_main_viewer_pane_g1_ParamLimits

0x308f,	// (0x0009f20e) aid_main_viewer_pane_g1

0x309d,	// (0x0009f21c) aid_main_viewer_pane_g2_ParamLimits

0x309d,	// (0x0009f21c) aid_main_viewer_pane_g2

0x30ab,	// (0x0009f22a) aid_main_viewer_pane_g3_ParamLimits

0x30ab,	// (0x0009f22a) aid_main_viewer_pane_g3

0x30ba,	// (0x0009f239) aid_main_viewer_pane_g4_ParamLimits

0x30ba,	// (0x0009f239) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x000ab623) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x000ab623) aid_main_viewer_pane_g

0x39c0,	// (0x0009fb3f) main_calc_pane_ParamLimits

0x39e6,	// (0x0009fb65) main_dialer2_pane_ParamLimits

0xa501,	// (0x000a6680) main_cam6_pane

0xa501,	// (0x000a6680) main_vid6_pane

0x510d,	// (0x000a128c) listscroll_gen_pane_cp06_ParamLimits

0x510d,	// (0x000a128c) listscroll_gen_pane_cp06

0x523d,	// (0x000a13bc) main_clock2_pane_t5_ParamLimits

0x523d,	// (0x000a13bc) main_clock2_pane_t5

0x5297,	// (0x000a1416) aid_call2_pane_cp10_ParamLimits

0x52a9,	// (0x000a1428) aid_call_pane_cp10_ParamLimits

0xc97f,	// (0x000a8afe) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc97f,	// (0x000a8afe) popup_clock_analogue_window_cp10_g2_ParamLimits

0x52bb,	// (0x000a143a) popup_clock_analogue_window_cp10_g3_ParamLimits

0x52bb,	// (0x000a143a) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc97f,	// (0x000a8afe) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x000ab959) popup_clock_analogue_window_cp10_g_ParamLimits

0x52cd,	// (0x000a144c) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5940,	// (0x000a1abf) cell_dialer2_keypad_pane_g2_ParamLimits

0x5940,	// (0x000a1abf) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x000aba3f) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x000aba3f) cell_dialer2_keypad_pane_g

0x595c,	// (0x000a1adb) cell_dialer2_keypad_pane_t1

0x663a,	// (0x000a27b9) main_cset_text2_pane_ParamLimits

0x663a,	// (0x000a27b9) main_cset_text2_pane

0x7272,	// (0x000a33f1) area_vitu2_query_pane_g1_ParamLimits

0x727e,	// (0x000a33fd) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x000abbf4) area_vitu2_query_pane_g_ParamLimits

0x7357,	// (0x000a34d6) area_vitu2_query_pane_t7_ParamLimits

0x7357,	// (0x000a34d6) area_vitu2_query_pane_t7

0x737b,	// (0x000a34fa) bg_button_pane_cp018_ParamLimits

0x7389,	// (0x000a3508) bg_button_pane_cp021_ParamLimits

0x7395,	// (0x000a3514) bg_button_pane_cp022_ParamLimits

0x7395,	// (0x000a3514) bg_vkb2_func_pane_cp08_ParamLimits

0x737b,	// (0x000a34fa) bg_vkb2_func_pane_cp06_ParamLimits

0x7389,	// (0x000a3508) bg_vkb2_func_pane_cp07_ParamLimits

0x73a4,	// (0x000a3523) input_focus_pane_cp09_ParamLimits

0xaffe,	// (0x000a717d) cam6_autofocus_pane_ParamLimits

0xaffe,	// (0x000a717d) cam6_autofocus_pane

0x7ae0,	// (0x000a3c5f) cam6_image_uncrop_pane_ParamLimits

0x7ae0,	// (0x000a3c5f) cam6_image_uncrop_pane

0x7aef,	// (0x000a3c6e) cam6_indi_pane_ParamLimits

0x7aef,	// (0x000a3c6e) cam6_indi_pane

0x7b05,	// (0x000a3c84) cam6_mode_pane_ParamLimits

0x7b05,	// (0x000a3c84) cam6_mode_pane

0x7b17,	// (0x000a3c96) cam6_timer_pane_ParamLimits

0x7b17,	// (0x000a3c96) cam6_timer_pane

0x7b23,	// (0x000a3ca2) cam6_zoom_pane_ParamLimits

0x7b23,	// (0x000a3ca2) cam6_zoom_pane

0x7b2f,	// (0x000a3cae) cam6_mode_pane_g1_ParamLimits

0x7b2f,	// (0x000a3cae) cam6_mode_pane_g1

0x7b3f,	// (0x000a3cbe) cam6_mode_pane_g2_ParamLimits

0x7b3f,	// (0x000a3cbe) cam6_mode_pane_g2

0x7b4f,	// (0x000a3cce) cam6_mode_pane_g3_ParamLimits

0x7b4f,	// (0x000a3cce) cam6_mode_pane_g3

0x7b5f,	// (0x000a3cde) cam6_mode_pane_g4_ParamLimits

0x7b5f,	// (0x000a3cde) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x000abcdc) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x000abcdc) cam6_mode_pane_g

0x7b6f,	// (0x000a3cee) bg_tb_trans_pane_cp08_ParamLimits

0x7b6f,	// (0x000a3cee) bg_tb_trans_pane_cp08

0x7b7d,	// (0x000a3cfc) cam6_battery_pane_ParamLimits

0x7b7d,	// (0x000a3cfc) cam6_battery_pane

0x7b93,	// (0x000a3d12) cam6_indi_pane_g1_ParamLimits

0x7b93,	// (0x000a3d12) cam6_indi_pane_g1

0x7ba5,	// (0x000a3d24) cam6_indi_pane_g2_ParamLimits

0x7ba5,	// (0x000a3d24) cam6_indi_pane_g2

0x7bb7,	// (0x000a3d36) cam6_indi_pane_g3_ParamLimits

0x7bb7,	// (0x000a3d36) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x000abce5) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x000abce5) cam6_indi_pane_g

0x7bc9,	// (0x000a3d48) cam6_indi_pane_t1_ParamLimits

0x7bc9,	// (0x000a3d48) cam6_indi_pane_t1

0x7bef,	// (0x000a3d6e) cam6_autofocus_pane_g1

0x7bf7,	// (0x000a3d76) cam6_autofocus_pane_g2

0x7bff,	// (0x000a3d7e) cam6_autofocus_pane_g3

0x7c07,	// (0x000a3d86) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x000abcec) cam6_autofocus_pane_g

0x7c0f,	// (0x000a3d8e) cam6_timer_pane_g1

0x7c17,	// (0x000a3d96) cam6_timer_pane_t1

0x7c25,	// (0x000a3da4) cam6_zoom_cont_pane

0x7c2d,	// (0x000a3dac) cam6_zoom_pane_g1

0x7c35,	// (0x000a3db4) cam6_zoom_pane_g2

0x7c3d,	// (0x000a3dbc) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x000abcf5) cam6_zoom_pane_g

0xe680,	// (0x000aa7ff) cam6_battery_pane_g1

0xe680,	// (0x000aa7ff) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x000ab866) cam6_battery_pane_g

0x7c45,	// (0x000a3dc4) cam6_zoom_cont_pane_g1

0x7c4e,	// (0x000a3dcd) cam6_zoom_cont_pane_g2

0x7c57,	// (0x000a3dd6) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x000abcfc) cam6_zoom_cont_pane_g

0x7c74,	// (0x000a3df3) cam6_mode_pane_cp_ParamLimits

0x7c74,	// (0x000a3df3) cam6_mode_pane_cp

0x7c86,	// (0x000a3e05) cam6_zoom_pane_cp_ParamLimits

0x7c86,	// (0x000a3e05) cam6_zoom_pane_cp

0x7c92,	// (0x000a3e11) vid6_image_uncrop_cif_pane_ParamLimits

0x7c92,	// (0x000a3e11) vid6_image_uncrop_cif_pane

0x7ca2,	// (0x000a3e21) vid6_image_uncrop_nhd_pane_ParamLimits

0x7ca2,	// (0x000a3e21) vid6_image_uncrop_nhd_pane

0x7cc1,	// (0x000a3e40) vid6_image_uncrop_vga_pane_ParamLimits

0x7cc1,	// (0x000a3e40) vid6_image_uncrop_vga_pane

0x7cd0,	// (0x000a3e4f) vid6_image_uncrop_wvga_pane_ParamLimits

0x7cd0,	// (0x000a3e4f) vid6_image_uncrop_wvga_pane

0x7cdf,	// (0x000a3e5e) vid6_indi_pane_ParamLimits

0x7cdf,	// (0x000a3e5e) vid6_indi_pane

0x7b6f,	// (0x000a3cee) bg_tb_trans_pane_cp09_ParamLimits

0x7b6f,	// (0x000a3cee) bg_tb_trans_pane_cp09

0x7cf7,	// (0x000a3e76) cam6_battery_pane_cp_ParamLimits

0x7cf7,	// (0x000a3e76) cam6_battery_pane_cp

0x7d03,	// (0x000a3e82) vid6_indi_pane_g1_ParamLimits

0x7d03,	// (0x000a3e82) vid6_indi_pane_g1

0x7d15,	// (0x000a3e94) vid6_indi_pane_g2_ParamLimits

0x7d15,	// (0x000a3e94) vid6_indi_pane_g2

0x7d27,	// (0x000a3ea6) vid6_indi_pane_g3_ParamLimits

0x7d27,	// (0x000a3ea6) vid6_indi_pane_g3

0x7d3c,	// (0x000a3ebb) vid6_indi_pane_g4_ParamLimits

0x7d3c,	// (0x000a3ebb) vid6_indi_pane_g4

0x7d51,	// (0x000a3ed0) vid6_indi_pane_g5_ParamLimits

0x7d51,	// (0x000a3ed0) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x000abd03) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x000abd03) vid6_indi_pane_g

0x7d6b,	// (0x000a3eea) vid6_indi_pane_t1_ParamLimits

0x7d6b,	// (0x000a3eea) vid6_indi_pane_t1

0x7d81,	// (0x000a3f00) vid6_indi_pane_t2_ParamLimits

0x7d81,	// (0x000a3f00) vid6_indi_pane_t2

0x7da9,	// (0x000a3f28) vid6_indi_pane_t3_ParamLimits

0x7da9,	// (0x000a3f28) vid6_indi_pane_t3

0x7dd1,	// (0x000a3f50) vid6_indi_pane_t4_ParamLimits

0x7dd1,	// (0x000a3f50) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x000abd0e) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x000abd0e) vid6_indi_pane_t

0x7df5,	// (0x000a3f74) wait_bar_pane_cp08

0x7e04,	// (0x000a3f83) main_cset_text2_pane_t1_ParamLimits

0x7e04,	// (0x000a3f83) main_cset_text2_pane_t1

0x7c5f,	// (0x000a3dde) listscroll_gen_pane_cp06_t1_ParamLimits

0x7c5f,	// (0x000a3dde) listscroll_gen_pane_cp06_t1

0xa501,	// (0x000a6680) main_cam6_set_pane

0xae1c,	// (0x000a6f9b) bg_tb_trans_pane_cp06_ParamLimits

0xae32,	// (0x000a6fb1) cam4_indicators_pane_g1_ParamLimits

0xae43,	// (0x000a6fc2) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x000aba7c) cam4_indicators_pane_g_ParamLimits

0xae61,	// (0x000a6fe0) cam4_indicators_pane_t1_ParamLimits

0xa4f3,	// (0x000a6672) bg_tb_trans_pane_cp07_ParamLimits

0xae8d,	// (0x000a700c) vid4_indicators_pane_g1_ParamLimits

0xaea1,	// (0x000a7020) vid4_indicators_pane_g2_ParamLimits

0xaeb5,	// (0x000a7034) vid4_indicators_pane_g3_ParamLimits

0xaec6,	// (0x000a7045) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x000aba8e) vid4_indicators_pane_g_ParamLimits

0xaee4,	// (0x000a7063) vid4_indicators_pane_t1_ParamLimits

0x7530,	// (0x000a36af) vid4_progress_pane_g1_ParamLimits

0x7542,	// (0x000a36c1) vid4_progress_pane_g2_ParamLimits

0xbaa1,	// (0x000a7c20) vid4_progress_pane_g3_ParamLimits

0xaf8e,	// (0x000a710d) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x000abc3f) vid4_progress_pane_g_ParamLimits

0xafac,	// (0x000a712b) vid4_progress_pane_t1_ParamLimits

0xafc1,	// (0x000a7140) vid4_progress_pane_t2_ParamLimits

0xafd7,	// (0x000a7156) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x000abc4a) vid4_progress_pane_t_ParamLimits

0xafec,	// (0x000a716b) wait_bar_pane_cp07_ParamLimits

0x7e21,	// (0x000a3fa0) main_cam6_set_pane_g2_ParamLimits

0x7e21,	// (0x000a3fa0) main_cam6_set_pane_g2

0x7e45,	// (0x000a3fc4) main_cset6_listscroll_pane_ParamLimits

0x7e45,	// (0x000a3fc4) main_cset6_listscroll_pane

0x7e65,	// (0x000a3fe4) main_cset6_slider_pane_ParamLimits

0x7e65,	// (0x000a3fe4) main_cset6_slider_pane

0x7e7b,	// (0x000a3ffa) main_cset6_text2_pane_ParamLimits

0x7e7b,	// (0x000a3ffa) main_cset6_text2_pane

0x7e89,	// (0x000a4008) main_cset6_text_pane

0x7e91,	// (0x000a4010) main_cset_list_pane_copy1_ParamLimits

0x7e91,	// (0x000a4010) main_cset_list_pane_copy1

0x7ea1,	// (0x000a4020) scroll_pane_cp028_copy1

0x7eaa,	// (0x000a4029) cset_list_set_pane_copy1

0x7ebb,	// (0x000a403a) aid_position_infowindow_above_copy1

0x7ec3,	// (0x000a4042) aid_position_infowindow_below_copy1

0x7ecb,	// (0x000a404a) cset_list_set_pane_g1_copy1

0x7ed3,	// (0x000a4052) cset_list_set_pane_g3_copy1_ParamLimits

0x7ed3,	// (0x000a4052) cset_list_set_pane_g3_copy1

0x7ee2,	// (0x000a4061) cset_list_set_pane_t1_copy1_ParamLimits

0x7ee2,	// (0x000a4061) cset_list_set_pane_t1_copy1

0xcf55,	// (0x000a90d4) list_highlight_pane_cp021_copy1_ParamLimits

0xcf55,	// (0x000a90d4) list_highlight_pane_cp021_copy1

0x7ef7,	// (0x000a4076) cset6_slider_pane_ParamLimits

0x7ef7,	// (0x000a4076) cset6_slider_pane

0x7f23,	// (0x000a40a2) main_cset6_slider_pane_g1_ParamLimits

0x7f23,	// (0x000a40a2) main_cset6_slider_pane_g1

0x7f4b,	// (0x000a40ca) main_cset6_slider_pane_g2_ParamLimits

0x7f4b,	// (0x000a40ca) main_cset6_slider_pane_g2

0x7f73,	// (0x000a40f2) main_cset6_slider_pane_g3_ParamLimits

0x7f73,	// (0x000a40f2) main_cset6_slider_pane_g3

0x7f7f,	// (0x000a40fe) main_cset6_slider_pane_g4_ParamLimits

0x7f7f,	// (0x000a40fe) main_cset6_slider_pane_g4

0x7f8b,	// (0x000a410a) main_cset6_slider_pane_g5_ParamLimits

0x7f8b,	// (0x000a410a) main_cset6_slider_pane_g5

0x6714,	// (0x000a2893) main_cset6_slider_pane_g7_ParamLimits

0x6714,	// (0x000a2893) main_cset6_slider_pane_g7

0x6720,	// (0x000a289f) main_cset6_slider_pane_g8_ParamLimits

0x6720,	// (0x000a289f) main_cset6_slider_pane_g8

0x672c,	// (0x000a28ab) main_cset6_slider_pane_g9_ParamLimits

0x672c,	// (0x000a28ab) main_cset6_slider_pane_g9

0x6738,	// (0x000a28b7) main_cset6_slider_pane_g10_ParamLimits

0x6738,	// (0x000a28b7) main_cset6_slider_pane_g10

0x6744,	// (0x000a28c3) main_cset6_slider_pane_g11_ParamLimits

0x6744,	// (0x000a28c3) main_cset6_slider_pane_g11

0x6750,	// (0x000a28cf) main_cset6_slider_pane_g12_ParamLimits

0x6750,	// (0x000a28cf) main_cset6_slider_pane_g12

0x675c,	// (0x000a28db) main_cset6_slider_pane_g13_ParamLimits

0x675c,	// (0x000a28db) main_cset6_slider_pane_g13

0x6768,	// (0x000a28e7) main_cset6_slider_pane_g14_ParamLimits

0x6768,	// (0x000a28e7) main_cset6_slider_pane_g14

0x7f97,	// (0x000a4116) main_cset6_slider_pane_g15_ParamLimits

0x7f97,	// (0x000a4116) main_cset6_slider_pane_g15

0x678c,	// (0x000a290b) main_cset6_slider_pane_g16_ParamLimits

0x678c,	// (0x000a290b) main_cset6_slider_pane_g16

0x6798,	// (0x000a2917) main_cset6_slider_pane_g17_ParamLimits

0x6798,	// (0x000a2917) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x000abd17) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x000abd17) main_cset6_slider_pane_g

0x7fc7,	// (0x000a4146) main_cset6_slider_pane_t1_ParamLimits

0x7fc7,	// (0x000a4146) main_cset6_slider_pane_t1

0x8008,	// (0x000a4187) main_cset6_slider_pane_t2_ParamLimits

0x8008,	// (0x000a4187) main_cset6_slider_pane_t2

0x8033,	// (0x000a41b2) main_cset6_slider_pane_t3_ParamLimits

0x8033,	// (0x000a41b2) main_cset6_slider_pane_t3

0x805e,	// (0x000a41dd) main_cset6_slider_pane_t4_ParamLimits

0x805e,	// (0x000a41dd) main_cset6_slider_pane_t4

0x8089,	// (0x000a4208) main_cset6_slider_pane_t5_ParamLimits

0x8089,	// (0x000a4208) main_cset6_slider_pane_t5

0x80b4,	// (0x000a4233) main_cset6_slider_pane_t7_ParamLimits

0x80b4,	// (0x000a4233) main_cset6_slider_pane_t7

0x80ea,	// (0x000a4269) main_cset6_slider_pane_t8_ParamLimits

0x80ea,	// (0x000a4269) main_cset6_slider_pane_t8

0x810e,	// (0x000a428d) main_cset6_slider_pane_t9_ParamLimits

0x810e,	// (0x000a428d) main_cset6_slider_pane_t9

0x8132,	// (0x000a42b1) main_cset6_slider_pane_t10_ParamLimits

0x8132,	// (0x000a42b1) main_cset6_slider_pane_t10

0x8156,	// (0x000a42d5) main_cset6_slider_pane_t11_ParamLimits

0x8156,	// (0x000a42d5) main_cset6_slider_pane_t11

0x817a,	// (0x000a42f9) main_cset6_slider_pane_t14_ParamLimits

0x817a,	// (0x000a42f9) main_cset6_slider_pane_t14

0x81b3,	// (0x000a4332) main_cset6_slider_pane_t15_ParamLimits

0x81b3,	// (0x000a4332) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x000abd3c) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x000abd3c) main_cset6_slider_pane_t

0x81ec,	// (0x000a436b) cset_slider_pane_g1_copy1

0x81f5,	// (0x000a4374) cset_slider_pane_g2_copy1

0x81fe,	// (0x000a437d) cset_slider_pane_g3_copy1

0x03f6,	// (0x0009c575) bg_popup_sub_pane_cp011_copy1

0xb00c,	// (0x000a718b) main_cset_text_pane_g1_copy1

0x6f31,	// (0x000a30b0) main_cset_text_pane_t1_copy1

0x6f3f,	// (0x000a30be) main_cset_text_pane_t2_copy1

0x6f4d,	// (0x000a30cc) main_cset_text_pane_t3_copy1

0x6f5b,	// (0x000a30da) main_cset_text_pane_t4_copy1

0x6f69,	// (0x000a30e8) main_cset_text_pane_t5_copy1

0xb014,	// (0x000a7193) main_cset_text_pane_t6_copy1

0x6f85,	// (0x000a3104) main_cset_text_pane_t7_copy1

0x7e04,	// (0x000a3f83) main_cset_text2_pane_t1_copy1

0xa4f3,	// (0x000a6672) main_ncimui_pane

0x3c30,	// (0x0009fdaf) popup_query_ncimui_window_ParamLimits

0x3c30,	// (0x0009fdaf) popup_query_ncimui_window

0xe951,	// (0x000aaad0) field_cale_ev2_pane_g4_ParamLimits

0xe951,	// (0x000aaad0) field_cale_ev2_pane_g4

0x5816,	// (0x000a1995) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5816,	// (0x000a1995) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x000aba1a) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x000aba1a) cell_video_dialer_keypad_pane_g

0x582e,	// (0x000a19ad) cell_video_dialer_keypad_pane_t1

0x03f6,	// (0x0009c575) bg_popup_window_pane_cp012

0xc7ce,	// (0x000a894d) heading_pane_cp06

0xb040,	// (0x000a71bf) ncim_query_content_pane

0x03f6,	// (0x0009c575) bg_popup_heading_pane_cp01

0xb048,	// (0x000a71c7) ncim_heading_pane_t1

0xb056,	// (0x000a71d5) ncim_indicator_popup_pane

0xb068,	// (0x000a71e7) ncim_query_button_pane

0xbc53,	// (0x000a7dd2) ncim_query_content_pane_t1

0xbc65,	// (0x000a7de4) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x000abd80) ncim_query_content_pane_t

0xbc9f,	// (0x000a7e1e) ncim_query_list_pane

0xbcb1,	// (0x000a7e30) ncim_query_popup_pane

0xb056,	// (0x000a71d5) ncim_indicator_popup_pane_ParamLimits

0x83fd,	// (0x000a457c) ncim_query_content_pane_g1_ParamLimits

0x83fd,	// (0x000a457c) ncim_query_content_pane_g1

0xbc53,	// (0x000a7dd2) ncim_query_content_pane_t1_ParamLimits

0xbc65,	// (0x000a7de4) ncim_query_content_pane_t2_ParamLimits

0x8409,	// (0x000a4588) ncim_query_content_pane_t3_ParamLimits

0x8409,	// (0x000a4588) ncim_query_content_pane_t3

0x8431,	// (0x000a45b0) ncim_query_content_pane_t4_ParamLimits

0x8431,	// (0x000a45b0) ncim_query_content_pane_t4

0x8459,	// (0x000a45d8) ncim_query_content_pane_t5_ParamLimits

0x8459,	// (0x000a45d8) ncim_query_content_pane_t5

0xbc77,	// (0x000a7df6) ncim_query_content_pane_t6_ParamLimits

0xbc77,	// (0x000a7df6) ncim_query_content_pane_t6

0xfc01,	// (0x000abd80) ncim_query_content_pane_t_ParamLimits

0xbc9f,	// (0x000a7e1e) ncim_query_list_pane_ParamLimits

0xbcb1,	// (0x000a7e30) ncim_query_popup_pane_ParamLimits

0xbcc5,	// (0x000a7e44) wait_bar_pane_cp04

0x03f6,	// (0x0009c575) input_focus_pane_cp011

0xbccd,	// (0x000a7e4c) ncim_query_popup_pane_t1

0xbcdb,	// (0x000a7e5a) ncim_list_query_list_pane_ParamLimits

0xbcdb,	// (0x000a7e5a) ncim_list_query_list_pane

0x03f6,	// (0x0009c575) bg_button_pane_cp027

0xbce8,	// (0x000a7e67) ncim_query_button_pane_g1

0x03f6,	// (0x0009c575) list_highlight_pane_cp012

0xbcf2,	// (0x000a7e71) ncim_list_query_list_pane_g1

0xbcfa,	// (0x000a7e79) ncim_list_query_list_pane_t1

0xae52,	// (0x000a6fd1) cam4_indicators_pane_g3_ParamLimits

0xae52,	// (0x000a6fd1) cam4_indicators_pane_g3

0xaed2,	// (0x000a7051) vid4_indicators_pane_g5_ParamLimits

0xaed2,	// (0x000a7051) vid4_indicators_pane_g5

0xaf9d,	// (0x000a711c) vid4_progress_pane_g5_ParamLimits

0xaf9d,	// (0x000a711c) vid4_progress_pane_g5

0x82eb,	// (0x000a446a) main_ncimui_pane_g1

0x8351,	// (0x000a44d0) ncimui_group_query_pane_ParamLimits

0x8351,	// (0x000a44d0) ncimui_group_query_pane

0x8399,	// (0x000a4518) ncimui_list_pane_ParamLimits

0x8399,	// (0x000a4518) ncimui_list_pane

0x83c0,	// (0x000a453f) ncimui_text_pane_ParamLimits

0x83c0,	// (0x000a453f) ncimui_text_pane

0x8481,	// (0x000a4600) ncimui_text_pane_t1_ParamLimits

0x8481,	// (0x000a4600) ncimui_text_pane_t1

0xbd08,	// (0x000a7e87) ncimui_list_single_graphic_pane_ParamLimits

0xbd08,	// (0x000a7e87) ncimui_list_single_graphic_pane

0x849f,	// (0x000a461e) ncimui_query_pane_ParamLimits

0x849f,	// (0x000a461e) ncimui_query_pane

0x03f6,	// (0x0009c575) list_highlight_pane_cp013

0xbd18,	// (0x000a7e97) ncim_list_query_list_pane_t1_copy1

0xbcf2,	// (0x000a7e71) ncim_list_single_graphic_pane_g1

0xbd26,	// (0x000a7ea5) ncim_query_button_pane_cp01

0xbd32,	// (0x000a7eb1) ncim_query_entry_pane_ParamLimits

0xbd32,	// (0x000a7eb1) ncim_query_entry_pane

0xbd45,	// (0x000a7ec4) ncimui_query_pane_g1

0xbd51,	// (0x000a7ed0) ncimui_query_pane_t1_ParamLimits

0xbd51,	// (0x000a7ed0) ncimui_query_pane_t1

0xcf55,	// (0x000a90d4) input_focus_pane_cp012

0xbd6a,	// (0x000a7ee9) ncim_query_entry_pane_t1

0xb3bf,	// (0x000a753e) main_im_pane_ParamLimits

0xa4f3,	// (0x000a6672) main_mobtv_pane_ParamLimits

0xa4f3,	// (0x000a6672) main_mobtv_pane

0x7faf,	// (0x000a412e) main_cset6_slider_pane_g18_ParamLimits

0x7faf,	// (0x000a412e) main_cset6_slider_pane_g18

0x7fbb,	// (0x000a413a) main_cset6_slider_pane_g19_ParamLimits

0x7fbb,	// (0x000a413a) main_cset6_slider_pane_g19

0x84b2,	// (0x000a4631) bg_main_mobtv_pane_ParamLimits

0x84b2,	// (0x000a4631) bg_main_mobtv_pane

0x84c0,	// (0x000a463f) main_mobtv_info_pane

0x84c9,	// (0x000a4648) main_mobtv_loading_pane_ParamLimits

0x84c9,	// (0x000a4648) main_mobtv_loading_pane

0xbd7c,	// (0x000a7efb) main_mobtv_pg_channel_list_pane

0xbd86,	// (0x000a7f05) main_mobtv_pg_hdr_pane

0x84d6,	// (0x000a4655) main_mobtv_programe_curr_pane_ParamLimits

0x84d6,	// (0x000a4655) main_mobtv_programe_curr_pane

0x84e3,	// (0x000a4662) main_mobtv_programe_next_pane_ParamLimits

0x84e3,	// (0x000a4662) main_mobtv_programe_next_pane

0xbd8f,	// (0x000a7f0e) popup_mobtv_noti_window

0xe680,	// (0x000aa7ff) main_tv_pg_hdr_pane_g1

0xbd97,	// (0x000a7f16) main_tv_pg_hdr_pane_g2

0xbd9f,	// (0x000a7f1e) main_tv_pg_hdr_pane_g3

0xbda7,	// (0x000a7f26) main_tv_pg_hdr_pane_g4

0xbdaf,	// (0x000a7f2e) main_tv_pg_hdr_pane_g5

0xbdb9,	// (0x000a7f38) main_tv_pg_hdr_pane_g6

0xbdc3,	// (0x000a7f42) main_tv_pg_hdr_pane_g7

0xbdcd,	// (0x000a7f4c) main_tv_pg_hdr_pane_g8

0xbdd7,	// (0x000a7f56) main_tv_pg_hdr_pane_g9

0xbde1,	// (0x000a7f60) main_tv_pg_hdr_pane_g10

0xbdeb,	// (0x000a7f6a) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x000abd8d) main_tv_pg_hdr_pane_g

0xbdf5,	// (0x000a7f74) main_tv_pg_hdr_pane_t1

0xbe03,	// (0x000a7f82) main_tv_pg_hdr_pane_t2

0xbe11,	// (0x000a7f90) main_tv_pg_hdr_pane_t3

0xbe21,	// (0x000a7fa0) main_tv_pg_hdr_pane_t4

0xbe31,	// (0x000a7fb0) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x000abda4) main_tv_pg_hdr_pane_t

0xbe41,	// (0x000a7fc0) single_mobtv_pg_channel_pane_ParamLimits

0xbe41,	// (0x000a7fc0) single_mobtv_pg_channel_pane

0xbe53,	// (0x000a7fd2) single_mobtv_pg_channel_table_pane

0xbe5c,	// (0x000a7fdb) single_mobtv_pg_channel_thumb_pane

0xbe65,	// (0x000a7fe4) single_tv_pg_channel_pane_g1

0xbe6e,	// (0x000a7fed) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x000abdaf) single_tv_pg_channel_pane_g

0xe8ec,	// (0x000aaa6b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe8ec,	// (0x000aaa6b) bg_single_mobtv_pg_channel_thumb_pane

0xbe77,	// (0x000a7ff6) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xbe77,	// (0x000a7ff6) single_mobtv_pg_channel_thumb_pane_g1

0xbe85,	// (0x000a8004) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xbe85,	// (0x000a8004) single_mobtv_pg_channel_thumb_pane_g2

0xbe91,	// (0x000a8010) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xbe91,	// (0x000a8010) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x000abdb4) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x000abdb4) single_mobtv_pg_channel_thumb_pane_g

0xbe9d,	// (0x000a801c) single_mobtv_pg_channel_thumb_pane_t1

0xbeab,	// (0x000a802a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x000abdbb) single_mobtv_pg_channel_thumb_pane_t

0xe680,	// (0x000aa7ff) bg_single_mobtv_pg_channel_table_pane_g1

0xe680,	// (0x000aa7ff) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x000ab866) bg_single_mobtv_pg_channel_table_pane_g

0xbeb9,	// (0x000a8038) single_mobtv_pg_channel_table_pane_t1

0xbec7,	// (0x000a8046) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x000abdc0) single_mobtv_pg_channel_table_pane_t

0x84f8,	// (0x000a4677) main_mobtv_info_pane_g1_ParamLimits

0x84f8,	// (0x000a4677) main_mobtv_info_pane_g1

0x8516,	// (0x000a4695) main_mobtv_info_pane_t1_ParamLimits

0x8516,	// (0x000a4695) main_mobtv_info_pane_t1

0x858e,	// (0x000a470d) main_mobtv_info_pane_t2_ParamLimits

0x858e,	// (0x000a470d) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x000abdca) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x000abdca) main_mobtv_info_pane_t

0x861d,	// (0x000a479c) wait_bar_pane_cp05

0x862f,	// (0x000a47ae) main_mobtv_loading_pane_g1_ParamLimits

0x862f,	// (0x000a47ae) main_mobtv_loading_pane_g1

0x8642,	// (0x000a47c1) main_mobtv_loading_pane_g2_ParamLimits

0x8642,	// (0x000a47c1) main_mobtv_loading_pane_g2

0x864e,	// (0x000a47cd) main_mobtv_loading_pane_g3_ParamLimits

0x864e,	// (0x000a47cd) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x000abdd1) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x000abdd1) main_mobtv_loading_pane_g

0xbed5,	// (0x000a8054) main_mobtv_loading_pane_t1_ParamLimits

0xbed5,	// (0x000a8054) main_mobtv_loading_pane_t1

0xbeed,	// (0x000a806c) main_mobtv_loading_pane_t2_ParamLimits

0xbeed,	// (0x000a806c) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x000abdd8) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x000abdd8) main_mobtv_loading_pane_t

0x8661,	// (0x000a47e0) wait_bar_pane_cp06_ParamLimits

0x8661,	// (0x000a47e0) wait_bar_pane_cp06

0xbf11,	// (0x000a8090) main_mobtv_programe_curr_pane_t1

0xbf1f,	// (0x000a809e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x000abddd) main_mobtv_programe_curr_pane_t

0xbf2d,	// (0x000a80ac) main_mobtv_programe_next_pane_t1

0xbf3b,	// (0x000a80ba) main_mobtv_programe_next_pane_t2

0xbf49,	// (0x000a80c8) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x000abde2) main_mobtv_programe_next_pane_t

0x03f6,	// (0x0009c575) bg_popup_mobtv_noti_window_pane

0xbf57,	// (0x000a80d6) popup_mobtv_noti_window_g1

0xbf5f,	// (0x000a80de) popup_mobtv_noti_window_t1

0xbf6d,	// (0x000a80ec) popup_mobtv_noti_window_t2

0x0001,

0x0005,	// (0x0009c184) popup_mobtv_noti_window_t

0xe680,	// (0x000aa7ff) bg_popup_mobtv_noti_window_pane_g1

0xa501,	// (0x000a6680) sc_clock_pane

0xa501,	// (0x000a6680) main_fs_bigclock_pane

0x78a8,	// (0x000a3a27) blid2_tripm_pane_t4_ParamLimits

0x78a8,	// (0x000a3a27) blid2_tripm_pane_t4

0x8670,	// (0x000a47ef) sc_clock_pane_g1_ParamLimits

0x8670,	// (0x000a47ef) sc_clock_pane_g1

0x8682,	// (0x000a4801) sc_clock_pane_t1_ParamLimits

0x8682,	// (0x000a4801) sc_clock_pane_t1

0x86a4,	// (0x000a4823) sc_clock_pane_t2_ParamLimits

0x86a4,	// (0x000a4823) sc_clock_pane_t2

0x86bc,	// (0x000a483b) sc_clock_pane_t3_ParamLimits

0x86bc,	// (0x000a483b) sc_clock_pane_t3

0x0004,

0xfc6a,	// (0x000abde9) sc_clock_pane_t_ParamLimits

0xfc6a,	// (0x000abde9) sc_clock_pane_t

0x9959,	// (0x000a5ad8) main_fs_bigclock_indicator_pane_ParamLimits

0x9959,	// (0x000a5ad8) main_fs_bigclock_indicator_pane

0xe8bc,	// (0x000aaa3b) main_fs_bigclock_pane_g1_ParamLimits

0xe8bc,	// (0x000aaa3b) main_fs_bigclock_pane_g1

0x9965,	// (0x000a5ae4) main_fs_bigclock_pane_t1_ParamLimits

0x9965,	// (0x000a5ae4) main_fs_bigclock_pane_t1

0x9977,	// (0x000a5af6) main_fs_bigclock_pane_t2_ParamLimits

0x9977,	// (0x000a5af6) main_fs_bigclock_pane_t2

0x998b,	// (0x000a5b0a) main_fs_bigclock_pane_t3_ParamLimits

0x998b,	// (0x000a5b0a) main_fs_bigclock_pane_t3

0x0002,

0xfe08,	// (0x000abf87) main_fs_bigclock_pane_t_ParamLimits

0xfe08,	// (0x000abf87) main_fs_bigclock_pane_t

0xc75d,	// (0x000a88dc) main_fs_bigclock_indicator_pane_g1

0xbc47,	// (0x000a7dc6) ncim_query_content_pane_g2_ParamLimits

0xbc47,	// (0x000a7dc6) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x000abd7b) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x000abd7b) ncim_query_content_pane_g

0x86d5,	// (0x000a4854) sc_clock_pane_t4_ParamLimits

0x86d5,	// (0x000a4854) sc_clock_pane_t4

0xa4f3,	// (0x000a6672) main_radioblah_pane

0xf075,	// (0x000ab1f4) cell_call4_button_pane_t1_copy1_ParamLimits

0xf075,	// (0x000ab1f4) cell_call4_button_pane_t1_copy1

0x8303,	// (0x000a4482) main_ncimui_pane_t1_ParamLimits

0x8303,	// (0x000a4482) main_ncimui_pane_t1

0x831d,	// (0x000a449c) main_ncimui_pane_t2_ParamLimits

0x831d,	// (0x000a449c) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x000abd74) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x000abd74) main_ncimui_pane_t

0xc0a7,	// (0x000a8226) main_radioblah_anim_pane_ParamLimits

0xc0a7,	// (0x000a8226) main_radioblah_anim_pane

0xc0b8,	// (0x000a8237) main_radioblah_info_pane_ParamLimits

0xc0b8,	// (0x000a8237) main_radioblah_info_pane

0xc0cc,	// (0x000a824b) main_radioblah_pane_t1_ParamLimits

0xc0cc,	// (0x000a824b) main_radioblah_pane_t1

0xc0e8,	// (0x000a8267) main_radioblah_pane_t2_ParamLimits

0xc0e8,	// (0x000a8267) main_radioblah_pane_t2

0x0003,

0x002b,	// (0x0009c1aa) main_radioblah_pane_t_ParamLimits

0x002b,	// (0x0009c1aa) main_radioblah_pane_t

0x878b,	// (0x000a490a) main_radioblah_rocker_ctrl_pane_ParamLimits

0x878b,	// (0x000a490a) main_radioblah_rocker_ctrl_pane

0xc130,	// (0x000a82af) main_radioblah_info_pane_t1_ParamLimits

0xc130,	// (0x000a82af) main_radioblah_info_pane_t1

0x87e3,	// (0x000a4962) main_radioblah_info_pane_t2_ParamLimits

0x87e3,	// (0x000a4962) main_radioblah_info_pane_t2

0x0003,

0xfc75,	// (0x000abdf4) main_radioblah_info_pane_t_ParamLimits

0xfc75,	// (0x000abdf4) main_radioblah_info_pane_t

0xe680,	// (0x000aa7ff) main_radioblah_rocker_ctrl_pane_g1

0x8893,	// (0x000a4a12) main_radioblah_rocker_ctrl_pane_g2

0x889b,	// (0x000a4a1a) main_radioblah_rocker_ctrl_pane_g3

0x88a3,	// (0x000a4a22) main_radioblah_rocker_ctrl_pane_g4

0x88ab,	// (0x000a4a2a) main_radioblah_rocker_ctrl_pane_g5

0x88b3,	// (0x000a4a32) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc7e,	// (0x000abdfd) main_radioblah_rocker_ctrl_pane_g

0x7e04,	// (0x000a3f83) main_cset_text2_pane_t1_copy1_ParamLimits

0xae02,	// (0x000a6f81) cam4_image_uncrop_qvga_pane

0xae7b,	// (0x000a6ffa) vid4_image_uncrop_qcif_pane

0xaffe,	// (0x000a717d) cam6_image_uncrop_qvga_pane_ParamLimits

0xaffe,	// (0x000a717d) cam6_image_uncrop_qvga_pane

0x7cb1,	// (0x000a3e30) vid6_image_uncrop_qcif_pane_ParamLimits

0x7cb1,	// (0x000a3e30) vid6_image_uncrop_qcif_pane

0x03f6,	// (0x0009c575) bg_popup_preview_window_pane_cp03

0xb022,	// (0x000a71a1) list_cset_text2_pane

0xb02a,	// (0x000a71a9) main_cset6_text2_pane_g1

0xb032,	// (0x000a71b1) main_cset6_text2_pane_t1

0x88bb,	// (0x000a4a3a) list_cset_text2_pane_t1_ParamLimits

0x88bb,	// (0x000a4a3a) list_cset_text2_pane_t1

0xa4f3,	// (0x000a6672) main_radioblah_pane_ParamLimits

0x8609,	// (0x000a4788) main_mobtv_info_pane_t3_ParamLimits

0x8609,	// (0x000a4788) main_mobtv_info_pane_t3

0x8779,	// (0x000a48f8) main_radioblah_pane_g1

0x87b3,	// (0x000a4932) main_radioblah_info_pane_g1

0x8838,	// (0x000a49b7) main_radioblah_info_pane_t3_ParamLimits

0x8838,	// (0x000a49b7) main_radioblah_info_pane_t3

0x2560,	// (0x0009e6df) highlight_cell_cale_month_pane_ParamLimits

0x2560,	// (0x0009e6df) highlight_cell_cale_month_pane

0xa501,	// (0x000a6680) main_phob_fisheye_pane

0xea20,	// (0x000aab9f) scroll_pane_cp0031_ParamLimits

0xea20,	// (0x000aab9f) scroll_pane_cp0031

0x7df5,	// (0x000a3f74) wait_bar_pane_cp08_ParamLimits

0x7eaa,	// (0x000a4029) cset_list_set_pane_copy1_ParamLimits

0xc16a,	// (0x000a82e9) highlight_cell_cale_month_pane_g1

0x88d4,	// (0x000a4a53) highlight_cell_cale_month_pane_t1

0x7479,	// (0x000a35f8) list_gen_pane_cp01

0x6660,	// (0x000a27df) scroll_pane_01

0x88e2,	// (0x000a4a61) list_single_double_fisheye_pane

0x88eb,	// (0x000a4a6a) list_double_fisheye_pane_g1_ParamLimits

0x88eb,	// (0x000a4a6a) list_double_fisheye_pane_g1

0x88f7,	// (0x000a4a76) list_double_fisheye_pane_g2_ParamLimits

0x88f7,	// (0x000a4a76) list_double_fisheye_pane_g2

0x890b,	// (0x000a4a8a) list_double_fisheye_pane_g3_ParamLimits

0x890b,	// (0x000a4a8a) list_double_fisheye_pane_g3

0x0004,

0xfc8b,	// (0x000abe0a) list_double_fisheye_pane_g_ParamLimits

0xfc8b,	// (0x000abe0a) list_double_fisheye_pane_g

0x8934,	// (0x000a4ab3) list_double_fisheye_pane_t1_ParamLimits

0x8934,	// (0x000a4ab3) list_double_fisheye_pane_t1

0x894f,	// (0x000a4ace) list_double_fisheye_pane_t2_ParamLimits

0x894f,	// (0x000a4ace) list_double_fisheye_pane_t2

0x0001,

0xfc96,	// (0x000abe15) list_double_fisheye_pane_t_ParamLimits

0xfc96,	// (0x000abe15) list_double_fisheye_pane_t

0xa501,	// (0x000a6680) main_call5_pane

0x8700,	// (0x000a487f) sc_swipe_pane_ParamLimits

0x8700,	// (0x000a487f) sc_swipe_pane

0x8984,	// (0x000a4b03) call5_image_pane_ParamLimits

0x8984,	// (0x000a4b03) call5_image_pane

0x89a1,	// (0x000a4b20) call5_swipe_1_pane_ParamLimits

0x89a1,	// (0x000a4b20) call5_swipe_1_pane

0x89b4,	// (0x000a4b33) call5_swipe_2_pane_ParamLimits

0x89b4,	// (0x000a4b33) call5_swipe_2_pane

0x89df,	// (0x000a4b5e) popup_call5_audio_first_window_ParamLimits

0x89df,	// (0x000a4b5e) popup_call5_audio_first_window

0xe8ec,	// (0x000aaa6b) call5_swipe_1_pane_g1_ParamLimits

0xe8ec,	// (0x000aaa6b) call5_swipe_1_pane_g1

0xc172,	// (0x000a82f1) call5_swipe_1_pane_g2_ParamLimits

0xc172,	// (0x000a82f1) call5_swipe_1_pane_g2

0x0001,

0x005a,	// (0x0009c1d9) call5_swipe_1_pane_g_ParamLimits

0x005a,	// (0x0009c1d9) call5_swipe_1_pane_g

0xc17e,	// (0x000a82fd) call5_swipe_1_pane_t1_ParamLimits

0xc17e,	// (0x000a82fd) call5_swipe_1_pane_t1

0xe8ec,	// (0x000aaa6b) call5_swipe_2_pane_g1_ParamLimits

0xe8ec,	// (0x000aaa6b) call5_swipe_2_pane_g1

0xc193,	// (0x000a8312) call5_swipe_2_pane_g2_ParamLimits

0xc193,	// (0x000a8312) call5_swipe_2_pane_g2

0x0001,

0x005f,	// (0x0009c1de) call5_swipe_2_pane_g_ParamLimits

0x005f,	// (0x0009c1de) call5_swipe_2_pane_g

0xc19f,	// (0x000a831e) call5_swipe_2_pane_t1_ParamLimits

0xc19f,	// (0x000a831e) call5_swipe_2_pane_t1

0xc1b4,	// (0x000a8333) sc_swipe_pane_g1_ParamLimits

0xc1b4,	// (0x000a8333) sc_swipe_pane_g1

0xc1c1,	// (0x000a8340) sc_swipe_pane_g2_ParamLimits

0xc1c1,	// (0x000a8340) sc_swipe_pane_g2

0x0001,

0x0064,	// (0x0009c1e3) sc_swipe_pane_g_ParamLimits

0x0064,	// (0x0009c1e3) sc_swipe_pane_g

0xc1cd,	// (0x000a834c) sc_swipe_pane_t1_ParamLimits

0xc1cd,	// (0x000a834c) sc_swipe_pane_t1

0xa501,	// (0x000a6680) main_cmail_launcher_pane

0x89f0,	// (0x000a4b6f) aid_size_cell_cmail_l_ParamLimits

0x89f0,	// (0x000a4b6f) aid_size_cell_cmail_l

0x8a0a,	// (0x000a4b89) grid_cmail_l_pane_ParamLimits

0x8a0a,	// (0x000a4b89) grid_cmail_l_pane

0x8a25,	// (0x000a4ba4) cell_cmail_l_pane_ParamLimits

0x8a25,	// (0x000a4ba4) cell_cmail_l_pane

0x8a4b,	// (0x000a4bca) cell_cmail_l_pane_g1_ParamLimits

0x8a4b,	// (0x000a4bca) cell_cmail_l_pane_g1

0x8a57,	// (0x000a4bd6) cell_cmail_l_pane_t1_ParamLimits

0x8a57,	// (0x000a4bd6) cell_cmail_l_pane_t1

0xc1e2,	// (0x000a8361) cell_cmail_l_pane_t2_ParamLimits

0xc1e2,	// (0x000a8361) cell_cmail_l_pane_t2

0x0001,

0xfc9b,	// (0x000abe1a) cell_cmail_l_pane_t_ParamLimits

0xfc9b,	// (0x000abe1a) cell_cmail_l_pane_t

0xcf55,	// (0x000a90d4) grid_highlight_pane_cp018_ParamLimits

0xcf55,	// (0x000a90d4) grid_highlight_pane_cp018

0x04c6,	// (0x0009c645) main2_pane_ParamLimits

0x04c6,	// (0x0009c645) main2_pane

0xb458,	// (0x000a75d7) popup_sp_fs_action_menu_bg_pane_g1

0xb460,	// (0x000a75df) popup_sp_fs_action_menu_bg_pane_g2

0xb468,	// (0x000a75e7) popup_sp_fs_action_menu_bg_pane_g3

0xb470,	// (0x000a75ef) popup_sp_fs_action_menu_bg_pane_g4

0xb478,	// (0x000a75f7) popup_sp_fs_action_menu_bg_pane_g5

0xb480,	// (0x000a75ff) popup_sp_fs_action_menu_bg_pane_g6

0xb488,	// (0x000a7607) popup_sp_fs_action_menu_bg_pane_g7

0xb490,	// (0x000a760f) popup_sp_fs_action_menu_bg_pane_g8

0xb498,	// (0x000a7617) popup_sp_fs_action_menu_bg_pane_g9

0xb4a0,	// (0x000a761f) popup_sp_fs_action_menu_bg_pane_g10

0xb4a0,	// (0x000a761f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x000ab312) popup_sp_fs_action_menu_bg_pane_g

0x14cc,	// (0x0009d64b) list_medium_line_x2_t3_g3_g1_ParamLimits

0x14cc,	// (0x0009d64b) list_medium_line_x2_t3_g3_g1

0x14d8,	// (0x0009d657) list_medium_line_x2_t3_g3_g2_ParamLimits

0x14d8,	// (0x0009d657) list_medium_line_x2_t3_g3_g2

0x14e4,	// (0x0009d663) list_medium_line_x2_t3_g3_g3_ParamLimits

0x14e4,	// (0x0009d663) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x000ab3c2) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x000ab3c2) list_medium_line_x2_t3_g3_g

0x14f0,	// (0x0009d66f) list_medium_line_x2_t3_g3_t1_ParamLimits

0x14f0,	// (0x0009d66f) list_medium_line_x2_t3_g3_t1

0x1505,	// (0x0009d684) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1505,	// (0x0009d684) list_medium_line_x2_t3_g3_t2

0x1519,	// (0x0009d698) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1519,	// (0x0009d698) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x000ab3c9) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x000ab3c9) list_medium_line_x2_t3_g3_t

0x14cc,	// (0x0009d64b) list_medium_line_x2_t3_g2_g1_ParamLimits

0x14cc,	// (0x0009d64b) list_medium_line_x2_t3_g2_g1

0x14e4,	// (0x0009d663) list_medium_line_x2_t3_g2_g2_ParamLimits

0x14e4,	// (0x0009d663) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x000ab3d0) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x000ab3d0) list_medium_line_x2_t3_g2_g

0x152e,	// (0x0009d6ad) list_medium_line_x2_t3_g2_t1_ParamLimits

0x152e,	// (0x0009d6ad) list_medium_line_x2_t3_g2_t1

0x1544,	// (0x0009d6c3) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1544,	// (0x0009d6c3) list_medium_line_x2_t3_g2_t2

0x1556,	// (0x0009d6d5) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1556,	// (0x0009d6d5) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x000ab3d5) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x000ab3d5) list_medium_line_x2_t3_g2_t

0x14cc,	// (0x0009d64b) list_medium_line_x2_t4_g4_g1_ParamLimits

0x14cc,	// (0x0009d64b) list_medium_line_x2_t4_g4_g1

0x1573,	// (0x0009d6f2) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1573,	// (0x0009d6f2) list_medium_line_x2_t4_g4_g2

0x14d8,	// (0x0009d657) list_medium_line_x2_t4_g4_g3_ParamLimits

0x14d8,	// (0x0009d657) list_medium_line_x2_t4_g4_g3

0x157f,	// (0x0009d6fe) list_medium_line_x2_t4_g4_g4_ParamLimits

0x157f,	// (0x0009d6fe) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x000ab3dc) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x000ab3dc) list_medium_line_x2_t4_g4_g

0x158b,	// (0x0009d70a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x158b,	// (0x0009d70a) list_medium_line_x2_t4_g4_t1

0x15a5,	// (0x0009d724) list_medium_line_x2_t4_g4_t2_ParamLimits

0x15a5,	// (0x0009d724) list_medium_line_x2_t4_g4_t2

0x15bb,	// (0x0009d73a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x15bb,	// (0x0009d73a) list_medium_line_x2_t4_g4_t3

0x15d0,	// (0x0009d74f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x15d0,	// (0x0009d74f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x000ab3e5) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x000ab3e5) list_medium_line_x2_t4_g4_t

0x14cc,	// (0x0009d64b) list_medium_line_x2_t2_g4_g1_ParamLimits

0x14cc,	// (0x0009d64b) list_medium_line_x2_t2_g4_g1

0x1573,	// (0x0009d6f2) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1573,	// (0x0009d6f2) list_medium_line_x2_t2_g4_g2

0x14d8,	// (0x0009d657) list_medium_line_x2_t2_g4_g3_ParamLimits

0x14d8,	// (0x0009d657) list_medium_line_x2_t2_g4_g3

0x14e4,	// (0x0009d663) list_medium_line_x2_t2_g4_g4_ParamLimits

0x14e4,	// (0x0009d663) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x000ab44c) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x000ab44c) list_medium_line_x2_t2_g4_g

0x2586,	// (0x0009e705) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2586,	// (0x0009e705) list_medium_line_x2_t2_g4_t1

0x1519,	// (0x0009d698) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1519,	// (0x0009d698) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x000ab455) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x000ab455) list_medium_line_x2_t2_g4_t

0x14cc,	// (0x0009d64b) list_medium_line_x2_t2_g3_g1_ParamLimits

0x14cc,	// (0x0009d64b) list_medium_line_x2_t2_g3_g1

0x14d8,	// (0x0009d657) list_medium_line_x2_t2_g3_g2_ParamLimits

0x14d8,	// (0x0009d657) list_medium_line_x2_t2_g3_g2

0x14e4,	// (0x0009d663) list_medium_line_x2_t2_g3_g3_ParamLimits

0x14e4,	// (0x0009d663) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x000ab3c2) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x000ab3c2) list_medium_line_x2_t2_g3_g

0x259b,	// (0x0009e71a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x259b,	// (0x0009e71a) list_medium_line_x2_t2_g3_t1

0x1519,	// (0x0009d698) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1519,	// (0x0009d698) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x000ab45a) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x000ab45a) list_medium_line_x2_t2_g3_t

0x26ce,	// (0x0009e84d) main_sp_fs_list_pane_ParamLimits

0x26ce,	// (0x0009e84d) main_sp_fs_list_pane

0xa999,	// (0x000a6b18) sp_fs_scroll_pane_ParamLimits

0xa999,	// (0x000a6b18) sp_fs_scroll_pane

0x26da,	// (0x0009e859) list_medium_line_x2_t3_t1

0x26ea,	// (0x0009e869) list_medium_line_x2_t3_t2

0x26f8,	// (0x0009e877) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x000ab4a5) list_medium_line_x2_t3_t

0x2706,	// (0x0009e885) list_medium_line_x3_t4_t1

0x2716,	// (0x0009e895) list_medium_line_x3_t4_t2

0x2724,	// (0x0009e8a3) list_medium_line_x3_t4_t3

0x26f8,	// (0x0009e877) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x000ab4ac) list_medium_line_x3_t4_t

0x2732,	// (0x0009e8b1) list_medium_line_x4_t5_t1

0x2742,	// (0x0009e8c1) list_medium_line_x4_t5_t2

0x2724,	// (0x0009e8a3) list_medium_line_x4_t5_t3

0x2750,	// (0x0009e8cf) list_medium_line_x4_t5_t4

0x26f8,	// (0x0009e877) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x000ab4b5) list_medium_line_x4_t5_t

0x14cc,	// (0x0009d64b) list_medium_line_t4_g4_g1_ParamLimits

0x14cc,	// (0x0009d64b) list_medium_line_t4_g4_g1

0x157f,	// (0x0009d6fe) list_medium_line_t4_g4_g2_ParamLimits

0x157f,	// (0x0009d6fe) list_medium_line_t4_g4_g2

0x275e,	// (0x0009e8dd) list_medium_line_t4_g4_g3_ParamLimits

0x275e,	// (0x0009e8dd) list_medium_line_t4_g4_g3

0x14e4,	// (0x0009d663) list_medium_line_t4_g4_g4_ParamLimits

0x14e4,	// (0x0009d663) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x000ab4c0) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x000ab4c0) list_medium_line_t4_g4_g

0x276a,	// (0x0009e8e9) list_medium_line_t4_g4_t1_ParamLimits

0x276a,	// (0x0009e8e9) list_medium_line_t4_g4_t1

0x277f,	// (0x0009e8fe) list_medium_line_t4_g4_t2_ParamLimits

0x277f,	// (0x0009e8fe) list_medium_line_t4_g4_t2

0x2794,	// (0x0009e913) list_medium_line_t4_g4_t3_ParamLimits

0x2794,	// (0x0009e913) list_medium_line_t4_g4_t3

0x1519,	// (0x0009d698) list_medium_line_t4_g4_t4_ParamLimits

0x1519,	// (0x0009d698) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x000ab4c9) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x000ab4c9) list_medium_line_t4_g4_t

0x285c,	// (0x0009e9db) chi_dic_find_pane_g1

0x39fa,	// (0x0009fb79) main_tport_pane

0x6b3f,	// (0x000a2cbe) list_medium_line_plain_t1

0x6bf9,	// (0x000a2d78) list_medium_line_t2_g2_g1_ParamLimits

0x6bf9,	// (0x000a2d78) list_medium_line_t2_g2_g1

0x6c05,	// (0x000a2d84) list_medium_line_t2_g2_g2_ParamLimits

0x6c05,	// (0x000a2d84) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x000abb85) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x000abb85) list_medium_line_t2_g2_g

0x6c11,	// (0x000a2d90) list_medium_line_t2_g2_t1_ParamLimits

0x6c11,	// (0x000a2d90) list_medium_line_t2_g2_t1

0x6c2b,	// (0x000a2daa) list_medium_line_t2_g2_t2_ParamLimits

0x6c2b,	// (0x000a2daa) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x000abb8a) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x000abb8a) list_medium_line_t2_g2_t

0x7554,	// (0x000a36d3) aid_sp_fs_list_icon_a_sm

0x755c,	// (0x000a36db) aid_sp_fs_list_icon_d

0x7564,	// (0x000a36e3) aid_sp_fs_text_primary

0x756d,	// (0x000a36ec) aid_sp_fs_text_secondary

0x7576,	// (0x000a36f5) list_medium_line

0x7576,	// (0x000a36f5) list_medium_line_g2

0x7576,	// (0x000a36f5) list_medium_line_g3

0x7576,	// (0x000a36f5) list_medium_line_plain

0x7576,	// (0x000a36f5) list_medium_line_plain_t2

0x7576,	// (0x000a36f5) list_medium_line_plain_t3

0x7576,	// (0x000a36f5) list_medium_line_right_icon

0x7576,	// (0x000a36f5) list_medium_line_right_iconx2

0x7576,	// (0x000a36f5) list_medium_line_t2

0x7576,	// (0x000a36f5) list_medium_line_t2_g2

0x7576,	// (0x000a36f5) list_medium_line_t2_g3

0x7576,	// (0x000a36f5) list_medium_line_t2_right_icon

0x7576,	// (0x000a36f5) list_medium_line_t2_right_iconx2

0x7576,	// (0x000a36f5) list_medium_line_t3

0x7576,	// (0x000a36f5) list_medium_line_t3_g2

0x7576,	// (0x000a36f5) list_medium_line_t3_g3

0x7576,	// (0x000a36f5) list_medium_line_t3_right_iconx2

0x757f,	// (0x000a36fe) list_medium_line_t4_g4

0x7576,	// (0x000a36f5) list_medium_line_x2

0x7576,	// (0x000a36f5) list_medium_line_x2_t2_g2

0x7576,	// (0x000a36f5) list_medium_line_x2_t2_g3

0x7576,	// (0x000a36f5) list_medium_line_x2_t2_g4

0x7576,	// (0x000a36f5) list_medium_line_x2_t3

0x7576,	// (0x000a36f5) list_medium_line_x2_t3_g2

0x7576,	// (0x000a36f5) list_medium_line_x2_t3_g3

0x7576,	// (0x000a36f5) list_medium_line_x2_t3_g4

0x7576,	// (0x000a36f5) list_medium_line_x2_t4_g2

0x7576,	// (0x000a36f5) list_medium_line_x2_t4_g4

0x7588,	// (0x000a3707) list_medium_line_x3

0x7588,	// (0x000a3707) list_medium_line_x3_t4

0x7588,	// (0x000a3707) list_medium_line_x3_t4_g4

0x757f,	// (0x000a36fe) list_medium_line_x4_t4

0x757f,	// (0x000a36fe) list_medium_line_x4_t4_g7

0x757f,	// (0x000a36fe) list_medium_line_x4_t5

0x7591,	// (0x000a3710) list_single_fs_dyc_pane_ParamLimits

0x7591,	// (0x000a3710) list_single_fs_dyc_pane

0x14cc,	// (0x0009d64b) list_medium_line_x4_t4_g7_g1_ParamLimits

0x14cc,	// (0x0009d64b) list_medium_line_x4_t4_g7_g1

0x8207,	// (0x000a4386) list_medium_line_x4_t4_g7_g2_ParamLimits

0x8207,	// (0x000a4386) list_medium_line_x4_t4_g7_g2

0x8213,	// (0x000a4392) list_medium_line_x4_t4_g7_g3_ParamLimits

0x8213,	// (0x000a4392) list_medium_line_x4_t4_g7_g3

0x8222,	// (0x000a43a1) list_medium_line_x4_t4_g7_g4_ParamLimits

0x8222,	// (0x000a43a1) list_medium_line_x4_t4_g7_g4

0x822e,	// (0x000a43ad) list_medium_line_x4_t4_g7_g5_ParamLimits

0x822e,	// (0x000a43ad) list_medium_line_x4_t4_g7_g5

0x823d,	// (0x000a43bc) list_medium_line_x4_t4_g7_g6_ParamLimits

0x823d,	// (0x000a43bc) list_medium_line_x4_t4_g7_g6

0x824c,	// (0x000a43cb) list_medium_line_x4_t4_g7_g7_ParamLimits

0x824c,	// (0x000a43cb) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x000abd55) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x000abd55) list_medium_line_x4_t4_g7_g

0x8258,	// (0x000a43d7) list_medium_line_x4_t4_g7_t1_ParamLimits

0x8258,	// (0x000a43d7) list_medium_line_x4_t4_g7_t1

0x826d,	// (0x000a43ec) list_medium_line_x4_t4_g7_t2_ParamLimits

0x826d,	// (0x000a43ec) list_medium_line_x4_t4_g7_t2

0x8282,	// (0x000a4401) list_medium_line_x4_t4_g7_t3_ParamLimits

0x8282,	// (0x000a4401) list_medium_line_x4_t4_g7_t3

0x8297,	// (0x000a4416) list_medium_line_x4_t4_g7_t4_ParamLimits

0x8297,	// (0x000a4416) list_medium_line_x4_t4_g7_t4

0x82a9,	// (0x000a4428) list_medium_line_x4_t4_g7_t5_ParamLimits

0x82a9,	// (0x000a4428) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x000abd64) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x000abd64) list_medium_line_x4_t4_g7_t

0x82bb,	// (0x000a443a) list_single_dyc_row_pane_ParamLimits

0x82bb,	// (0x000a443a) list_single_dyc_row_pane

0x8971,	// (0x000a4af0) call5_gesture_pane_ParamLimits

0x8971,	// (0x000a4af0) call5_gesture_pane

0x89c7,	// (0x000a4b46) call5_windows_pane_ParamLimits

0x89c7,	// (0x000a4b46) call5_windows_pane

0x8a6d,	// (0x000a4bec) call5_swipe_1_pane_cp_ParamLimits

0x8a6d,	// (0x000a4bec) call5_swipe_1_pane_cp

0x8a79,	// (0x000a4bf8) call5_swipe_2_pane_cp_ParamLimits

0x8a79,	// (0x000a4bf8) call5_swipe_2_pane_cp

0xca4a,	// (0x000a8bc9) call5_image_pane_cp

0x8a85,	// (0x000a4c04) popup_call5_audio_first_window_cp_ParamLimits

0x8a85,	// (0x000a4c04) popup_call5_audio_first_window_cp

0xc1b4,	// (0x000a8333) call5_swipe_1_pane_g1_cp_ParamLimits

0xc1b4,	// (0x000a8333) call5_swipe_1_pane_g1_cp

0xc1f4,	// (0x000a8373) call5_swipe_1_pane_g2_cp

0xc1cd,	// (0x000a834c) call5_swipe_1_pane_t1_cp_ParamLimits

0xc1cd,	// (0x000a834c) call5_swipe_1_pane_t1_cp

0xc1b4,	// (0x000a8333) call5_swipe_2_pane_g1_cp_ParamLimits

0xc1b4,	// (0x000a8333) call5_swipe_2_pane_g1_cp

0xc1fc,	// (0x000a837b) call5_swipe_2_pane_g2_cp

0xc204,	// (0x000a8383) call5_swipe_2_pane_t1_cp_ParamLimits

0xc204,	// (0x000a8383) call5_swipe_2_pane_t1_cp

0xcf55,	// (0x000a90d4) main_sp_fs_email_pane

0xc219,	// (0x000a8398) main_sp_fs_listscroll_pane_te

0x8a93,	// (0x000a4c12) popup_sp_fs_action_menu_pane_ParamLimits

0x8a93,	// (0x000a4c12) popup_sp_fs_action_menu_pane

0xe680,	// (0x000aa7ff) bg_sp_fs_ctrlbar_pane_g1

0xc222,	// (0x000a83a1) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc22b,	// (0x000a83aa) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc234,	// (0x000a83b3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe680,	// (0x000aa7ff) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfca0,	// (0x000abe1f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe465,	// (0x000aa5e4) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe465,	// (0x000aa5e4) bg_sp_fs_ctrlbar_ddmenu_pane

0xc23d,	// (0x000a83bc) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc23d,	// (0x000a83bc) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc249,	// (0x000a83c8) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc249,	// (0x000a83c8) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0077,	// (0x0009c1f6) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0077,	// (0x0009c1f6) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc255,	// (0x000a83d4) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc255,	// (0x000a83d4) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8ad7,	// (0x000a4c56) list_medium_line_t2_right_icon_g1

0x8adf,	// (0x000a4c5e) list_medium_line_t2_right_icon_t1

0x8aef,	// (0x000a4c6e) list_medium_line_t2_right_icon_t2

0x0001,

0xfca9,	// (0x000abe28) list_medium_line_t2_right_icon_t

0xe278,	// (0x000aa3f7) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe278,	// (0x000aa3f7) bg_sp_fs_ctrlbar_pane

0x8b49,	// (0x000a4cc8) main_sp_fs_ctrlbar_button_pane_cp01

0x8b53,	// (0x000a4cd2) main_sp_fs_ctrlbar_ddmenu_pane

0xc2a7,	// (0x000a8426) main_sp_fs_ctrlbar_pane_g1

0xc2b3,	// (0x000a8432) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0081,	// (0x0009c200) main_sp_fs_ctrlbar_pane_g

0xc2bf,	// (0x000a843e) main_sp_fs_ctrlbar_pane_t1

0x8b5d,	// (0x000a4cdc) main_sp_fs_ctrlbar_pane

0x8b81,	// (0x000a4d00) main_sp_fs_listscroll_pane_te_cp01

0x8ba1,	// (0x000a4d20) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8ba1,	// (0x000a4d20) popup_sp_fs_action_menu_pane_cp01

0xcf55,	// (0x000a90d4) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xcf55,	// (0x000a90d4) bg_sp_fs_highlight_list_pane_cp01

0x8bd1,	// (0x000a4d50) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x8bd1,	// (0x000a4d50) sp_fs_action_menu_list_gene_pane_g1

0xc2ef,	// (0x000a846e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xc2ef,	// (0x000a846e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcae,	// (0x000abe2d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcae,	// (0x000abe2d) sp_fs_action_menu_list_gene_pane_g

0x8be0,	// (0x000a4d5f) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8be0,	// (0x000a4d5f) sp_fs_action_menu_list_gene_pane_t1

0x8bf8,	// (0x000a4d77) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8bf8,	// (0x000a4d77) sp_fs_action_menu_list_gene_pane

0xc2fc,	// (0x000a847b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xc2fc,	// (0x000a847b) popup_sp_fs_action_menu_bg_pane

0x8c19,	// (0x000a4d98) sp_fs_action_menu_list_pane_ParamLimits

0x8c19,	// (0x000a4d98) sp_fs_action_menu_list_pane

0x8c3b,	// (0x000a4dba) sp_fs_scroll_pane_cp01_ParamLimits

0x8c3b,	// (0x000a4dba) sp_fs_scroll_pane_cp01

0x8c61,	// (0x000a4de0) list_medium_line_plain_t2_t1

0x8c71,	// (0x000a4df0) list_medium_line_plain_t2_t2

0x0001,

0xfcb3,	// (0x000abe32) list_medium_line_plain_t2_t

0x8c81,	// (0x000a4e00) list_medium_line_plain_t3_t1

0x8c91,	// (0x000a4e10) list_medium_line_plain_t3_t2

0x8c9f,	// (0x000a4e1e) list_medium_line_plain_t3_t3

0x0002,

0xfcb8,	// (0x000abe37) list_medium_line_plain_t3_t

0x14cc,	// (0x0009d64b) list_medium_line_x2_t2_g2_g1_ParamLimits

0x14cc,	// (0x0009d64b) list_medium_line_x2_t2_g2_g1

0x14e4,	// (0x0009d663) list_medium_line_x2_t2_g2_g2_ParamLimits

0x14e4,	// (0x0009d663) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x000ab3d0) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x000ab3d0) list_medium_line_x2_t2_g2_g

0x276a,	// (0x0009e8e9) list_medium_line_x2_t2_g2_t1_ParamLimits

0x276a,	// (0x0009e8e9) list_medium_line_x2_t2_g2_t1

0x1519,	// (0x0009d698) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1519,	// (0x0009d698) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcbf,	// (0x000abe3e) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcbf,	// (0x000abe3e) list_medium_line_x2_t2_g2_t

0x14cc,	// (0x0009d64b) list_medium_line_x2_t4_g2_g1_ParamLimits

0x14cc,	// (0x0009d64b) list_medium_line_x2_t4_g2_g1

0x8cad,	// (0x000a4e2c) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8cad,	// (0x000a4e2c) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcc4,	// (0x000abe43) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcc4,	// (0x000abe43) list_medium_line_x2_t4_g2_g

0x8cbf,	// (0x000a4e3e) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8cbf,	// (0x000a4e3e) list_medium_line_x2_t4_g2_t1

0x8cd9,	// (0x000a4e58) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8cd9,	// (0x000a4e58) list_medium_line_x2_t4_g2_t2

0x8cee,	// (0x000a4e6d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8cee,	// (0x000a4e6d) list_medium_line_x2_t4_g2_t3

0x1519,	// (0x0009d698) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1519,	// (0x0009d698) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcc9,	// (0x000abe48) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcc9,	// (0x000abe48) list_medium_line_x2_t4_g2_t

0x8d03,	// (0x000a4e82) list_medium_line_t3_right_iconx2_g1

0x8ad7,	// (0x000a4c56) list_medium_line_t3_right_iconx2_g2

0x8d0b,	// (0x000a4e8a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcd2,	// (0x000abe51) list_medium_line_t3_right_iconx2_g

0x8d15,	// (0x000a4e94) list_medium_line_t3_right_iconx2_t1

0x8d25,	// (0x000a4ea4) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcd9,	// (0x000abe58) list_medium_line_t3_right_iconx2_t

0x14cc,	// (0x0009d64b) list_medium_line_x3_t4_g4_g1_ParamLimits

0x14cc,	// (0x0009d64b) list_medium_line_x3_t4_g4_g1

0x14d8,	// (0x0009d657) list_medium_line_x3_t4_g4_g2_ParamLimits

0x14d8,	// (0x0009d657) list_medium_line_x3_t4_g4_g2

0x157f,	// (0x0009d6fe) list_medium_line_x3_t4_g4_g3_ParamLimits

0x157f,	// (0x0009d6fe) list_medium_line_x3_t4_g4_g3

0x8d33,	// (0x000a4eb2) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8d33,	// (0x000a4eb2) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcde,	// (0x000abe5d) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcde,	// (0x000abe5d) list_medium_line_x3_t4_g4_g

0x8d3f,	// (0x000a4ebe) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8d3f,	// (0x000a4ebe) list_medium_line_x3_t4_g4_t1

0x8d56,	// (0x000a4ed5) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8d56,	// (0x000a4ed5) list_medium_line_x3_t4_g4_t2

0x277f,	// (0x0009e8fe) list_medium_line_x3_t4_g4_t3_ParamLimits

0x277f,	// (0x0009e8fe) list_medium_line_x3_t4_g4_t3

0x8d71,	// (0x000a4ef0) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8d71,	// (0x000a4ef0) list_medium_line_x3_t4_g4_t4

0x0003,

0xfce7,	// (0x000abe66) list_medium_line_x3_t4_g4_t_ParamLimits

0xfce7,	// (0x000abe66) list_medium_line_x3_t4_g4_t

0x8d8e,	// (0x000a4f0d) list_single_dyc_row_text_pane_t1_ParamLimits

0x8d8e,	// (0x000a4f0d) list_single_dyc_row_text_pane_t1

0x8dd7,	// (0x000a4f56) list_single_dyc_row_text_pane_t2_ParamLimits

0x8dd7,	// (0x000a4f56) list_single_dyc_row_text_pane_t2

0x8e31,	// (0x000a4fb0) list_single_dyc_row_text_pane_t3_ParamLimits

0x8e31,	// (0x000a4fb0) list_single_dyc_row_text_pane_t3

0x0002,

0xfcf0,	// (0x000abe6f) list_single_dyc_row_text_pane_t_ParamLimits

0xfcf0,	// (0x000abe6f) list_single_dyc_row_text_pane_t

0x8e43,	// (0x000a4fc2) list_single_dyc_row_pane_g1_ParamLimits

0x8e43,	// (0x000a4fc2) list_single_dyc_row_pane_g1

0x8e4f,	// (0x000a4fce) list_single_dyc_row_pane_g2_ParamLimits

0x8e4f,	// (0x000a4fce) list_single_dyc_row_pane_g2

0x8e5b,	// (0x000a4fda) list_single_dyc_row_pane_g3_ParamLimits

0x8e5b,	// (0x000a4fda) list_single_dyc_row_pane_g3

0x8e67,	// (0x000a4fe6) list_single_dyc_row_pane_g4_ParamLimits

0x8e67,	// (0x000a4fe6) list_single_dyc_row_pane_g4

0x0003,

0xfcf7,	// (0x000abe76) list_single_dyc_row_pane_g_ParamLimits

0xfcf7,	// (0x000abe76) list_single_dyc_row_pane_g

0x8e73,	// (0x000a4ff2) list_single_dyc_row_text_pane_ParamLimits

0x8e73,	// (0x000a4ff2) list_single_dyc_row_text_pane

0x03f6,	// (0x0009c575) bg_sp_fs_scroll_pane

0xc30a,	// (0x000a8489) thumb_sp_fs_scroll_pane

0x6bf9,	// (0x000a2d78) list_medium_line_g1_ParamLimits

0x6bf9,	// (0x000a2d78) list_medium_line_g1

0x8e92,	// (0x000a5011) list_medium_line_t1_ParamLimits

0x8e92,	// (0x000a5011) list_medium_line_t1

0x14cc,	// (0x0009d64b) list_medium_line_x2_g1_ParamLimits

0x14cc,	// (0x0009d64b) list_medium_line_x2_g1

0x14d8,	// (0x0009d657) list_medium_line_x2_g2_ParamLimits

0x14d8,	// (0x0009d657) list_medium_line_x2_g2

0x0001,

0xfd00,	// (0x000abe7f) list_medium_line_x2_g_ParamLimits

0xfd00,	// (0x000abe7f) list_medium_line_x2_g

0x8ea7,	// (0x000a5026) list_medium_line_x2_t1_ParamLimits

0x8ea7,	// (0x000a5026) list_medium_line_x2_t1

0x14cc,	// (0x0009d64b) list_medium_line_x3_g1_ParamLimits

0x14cc,	// (0x0009d64b) list_medium_line_x3_g1

0x14d8,	// (0x0009d657) list_medium_line_x3_g2_ParamLimits

0x14d8,	// (0x0009d657) list_medium_line_x3_g2

0x0001,

0xfd00,	// (0x000abe7f) list_medium_line_x3_g_ParamLimits

0xfd00,	// (0x000abe7f) list_medium_line_x3_g

0x8ea7,	// (0x000a5026) list_medium_line_x3_t1_ParamLimits

0x8ea7,	// (0x000a5026) list_medium_line_x3_t1

0xc313,	// (0x000a8492) thumb_sp_fs_scroll_pane_g1

0xc31c,	// (0x000a849b) thumb_sp_fs_scroll_pane_g2

0xc325,	// (0x000a84a4) thumb_sp_fs_scroll_pane_g3

0x0002,

0x00e2,	// (0x0009c261) thumb_sp_fs_scroll_pane_g

0xc313,	// (0x000a8492) bg_sp_fs_scroll_pane_g1

0xc31c,	// (0x000a849b) bg_sp_fs_scroll_pane_g2

0xc325,	// (0x000a84a4) bg_sp_fs_scroll_pane_g3

0x0002,

0x00e2,	// (0x0009c261) bg_sp_fs_scroll_pane_g

0x14cc,	// (0x0009d64b) list_medium_line_x2_t3_g4_g1_ParamLimits

0x14cc,	// (0x0009d64b) list_medium_line_x2_t3_g4_g1

0x1573,	// (0x0009d6f2) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1573,	// (0x0009d6f2) list_medium_line_x2_t3_g4_g2

0x14d8,	// (0x0009d657) list_medium_line_x2_t3_g4_g3_ParamLimits

0x14d8,	// (0x0009d657) list_medium_line_x2_t3_g4_g3

0x14e4,	// (0x0009d663) list_medium_line_x2_t3_g4_g4_ParamLimits

0x14e4,	// (0x0009d663) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x000ab44c) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x000ab44c) list_medium_line_x2_t3_g4_g

0x8ebd,	// (0x000a503c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8ebd,	// (0x000a503c) list_medium_line_x2_t3_g4_t1

0x8ed7,	// (0x000a5056) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8ed7,	// (0x000a5056) list_medium_line_x2_t3_g4_t2

0x1519,	// (0x0009d698) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1519,	// (0x0009d698) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd05,	// (0x000abe84) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd05,	// (0x000abe84) list_medium_line_x2_t3_g4_t

0x6bf9,	// (0x000a2d78) list_medium_line_g2_g1_ParamLimits

0x6bf9,	// (0x000a2d78) list_medium_line_g2_g1

0x6c05,	// (0x000a2d84) list_medium_line_g2_g2_ParamLimits

0x6c05,	// (0x000a2d84) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x000abb85) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x000abb85) list_medium_line_g2_g

0x8ef1,	// (0x000a5070) list_medium_line_g2_t1_ParamLimits

0x8ef1,	// (0x000a5070) list_medium_line_g2_t1

0x6bf9,	// (0x000a2d78) list_medium_line_t3_g2_g1_ParamLimits

0x6bf9,	// (0x000a2d78) list_medium_line_t3_g2_g1

0x6c05,	// (0x000a2d84) list_medium_line_t3_g2_g2_ParamLimits

0x6c05,	// (0x000a2d84) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x000abb85) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x000abb85) list_medium_line_t3_g2_g

0x8f06,	// (0x000a5085) list_medium_line_t3_g2_t1_ParamLimits

0x8f06,	// (0x000a5085) list_medium_line_t3_g2_t1

0x8f1d,	// (0x000a509c) list_medium_line_t3_g2_t2_ParamLimits

0x8f1d,	// (0x000a509c) list_medium_line_t3_g2_t2

0x8f32,	// (0x000a50b1) list_medium_line_t3_g2_t3_ParamLimits

0x8f32,	// (0x000a50b1) list_medium_line_t3_g2_t3

0x0002,

0xfd0c,	// (0x000abe8b) list_medium_line_t3_g2_t_ParamLimits

0xfd0c,	// (0x000abe8b) list_medium_line_t3_g2_t

0x8ad7,	// (0x000a4c56) list_medium_line_right_icon_g1

0x8f4b,	// (0x000a50ca) list_medium_line_right_icon_t1

0x6bf9,	// (0x000a2d78) list_medium_line_t2_g1_ParamLimits

0x6bf9,	// (0x000a2d78) list_medium_line_t2_g1

0x8f59,	// (0x000a50d8) list_medium_line_t2_t1_ParamLimits

0x8f59,	// (0x000a50d8) list_medium_line_t2_t1

0x8f73,	// (0x000a50f2) list_medium_line_t2_t2_ParamLimits

0x8f73,	// (0x000a50f2) list_medium_line_t2_t2

0x0001,

0xfd13,	// (0x000abe92) list_medium_line_t2_t_ParamLimits

0xfd13,	// (0x000abe92) list_medium_line_t2_t

0x6bf9,	// (0x000a2d78) list_medium_line_t3_g1_ParamLimits

0x6bf9,	// (0x000a2d78) list_medium_line_t3_g1

0x8f8c,	// (0x000a510b) list_medium_line_t3_t1_ParamLimits

0x8f8c,	// (0x000a510b) list_medium_line_t3_t1

0x8fa6,	// (0x000a5125) list_medium_line_t3_t2_ParamLimits

0x8fa6,	// (0x000a5125) list_medium_line_t3_t2

0x8fbb,	// (0x000a513a) list_medium_line_t3_t3_ParamLimits

0x8fbb,	// (0x000a513a) list_medium_line_t3_t3

0x0002,

0xfd18,	// (0x000abe97) list_medium_line_t3_t_ParamLimits

0xfd18,	// (0x000abe97) list_medium_line_t3_t

0x6bf9,	// (0x000a2d78) list_medium_line_g3_g1_ParamLimits

0x6bf9,	// (0x000a2d78) list_medium_line_g3_g1

0x8fd0,	// (0x000a514f) list_medium_line_g3_g2_ParamLimits

0x8fd0,	// (0x000a514f) list_medium_line_g3_g2

0x6c05,	// (0x000a2d84) list_medium_line_g3_g3_ParamLimits

0x6c05,	// (0x000a2d84) list_medium_line_g3_g3

0x0002,

0xfd1f,	// (0x000abe9e) list_medium_line_g3_g_ParamLimits

0xfd1f,	// (0x000abe9e) list_medium_line_g3_g

0x8fdc,	// (0x000a515b) list_medium_line_g3_t1_ParamLimits

0x8fdc,	// (0x000a515b) list_medium_line_g3_t1

0x6bf9,	// (0x000a2d78) list_medium_line_t2_g3_g1_ParamLimits

0x6bf9,	// (0x000a2d78) list_medium_line_t2_g3_g1

0x8fd0,	// (0x000a514f) list_medium_line_t2_g3_g2_ParamLimits

0x8fd0,	// (0x000a514f) list_medium_line_t2_g3_g2

0x6c05,	// (0x000a2d84) list_medium_line_t2_g3_g3_ParamLimits

0x6c05,	// (0x000a2d84) list_medium_line_t2_g3_g3

0x0002,

0xfd1f,	// (0x000abe9e) list_medium_line_t2_g3_g_ParamLimits

0xfd1f,	// (0x000abe9e) list_medium_line_t2_g3_g

0x8ff1,	// (0x000a5170) list_medium_line_t2_g3_t1_ParamLimits

0x8ff1,	// (0x000a5170) list_medium_line_t2_g3_t1

0x900b,	// (0x000a518a) list_medium_line_t2_g3_t2_ParamLimits

0x900b,	// (0x000a518a) list_medium_line_t2_g3_t2

0x0001,

0xfd26,	// (0x000abea5) list_medium_line_t2_g3_t_ParamLimits

0xfd26,	// (0x000abea5) list_medium_line_t2_g3_t

0x6bf9,	// (0x000a2d78) list_medium_line_t3_g3_g1_ParamLimits

0x6bf9,	// (0x000a2d78) list_medium_line_t3_g3_g1

0x8fd0,	// (0x000a514f) list_medium_line_t3_g3_g2_ParamLimits

0x8fd0,	// (0x000a514f) list_medium_line_t3_g3_g2

0x6c05,	// (0x000a2d84) list_medium_line_t3_g3_g3_ParamLimits

0x6c05,	// (0x000a2d84) list_medium_line_t3_g3_g3

0x0002,

0xfd1f,	// (0x000abe9e) list_medium_line_t3_g3_g_ParamLimits

0xfd1f,	// (0x000abe9e) list_medium_line_t3_g3_g

0x9026,	// (0x000a51a5) list_medium_line_t3_g3_t1_ParamLimits

0x9026,	// (0x000a51a5) list_medium_line_t3_g3_t1

0x903a,	// (0x000a51b9) list_medium_line_t3_g3_t2_ParamLimits

0x903a,	// (0x000a51b9) list_medium_line_t3_g3_t2

0x904c,	// (0x000a51cb) list_medium_line_t3_g3_t3_ParamLimits

0x904c,	// (0x000a51cb) list_medium_line_t3_g3_t3

0x0002,

0xfd2b,	// (0x000abeaa) list_medium_line_t3_g3_t_ParamLimits

0xfd2b,	// (0x000abeaa) list_medium_line_t3_g3_t

0x8d03,	// (0x000a4e82) list_medium_line_right_iconx2_g1

0x8ad7,	// (0x000a4c56) list_medium_line_right_iconx2_g2

0x0001,

0xfd32,	// (0x000abeb1) list_medium_line_right_iconx2_g

0x9060,	// (0x000a51df) list_medium_line_right_iconx2_t1

0x8d03,	// (0x000a4e82) list_medium_line_t2_right_iconx2_g1

0x8ad7,	// (0x000a4c56) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd32,	// (0x000abeb1) list_medium_line_t2_right_iconx2_g

0x906e,	// (0x000a51ed) list_medium_line_t2_right_iconx2_t1

0x907e,	// (0x000a51fd) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd37,	// (0x000abeb6) list_medium_line_t2_right_iconx2_t

0x9090,	// (0x000a520f) list_medium_line_x4_t4_t1

0x909e,	// (0x000a521d) list_medium_line_x4_t4_t2

0x90ae,	// (0x000a522d) list_medium_line_x4_t4_t3

0x90be,	// (0x000a523d) list_medium_line_x4_t4_t4

0x0003,

0xfd3c,	// (0x000abebb) list_medium_line_x4_t4_t

0x9111,	// (0x000a5290) tport_appsw_pane_ParamLimits

0x9111,	// (0x000a5290) tport_appsw_pane

0x9129,	// (0x000a52a8) tport_contact_pane_ParamLimits

0x9129,	// (0x000a52a8) tport_contact_pane

0x9141,	// (0x000a52c0) tport_listscroll_pane_ParamLimits

0x9141,	// (0x000a52c0) tport_listscroll_pane

0x915b,	// (0x000a52da) cell_tport_appsw_pane_ParamLimits

0x915b,	// (0x000a52da) cell_tport_appsw_pane

0x6123,	// (0x000a22a2) tport_appsw_pane_g1_ParamLimits

0x6123,	// (0x000a22a2) tport_appsw_pane_g1

0xc32e,	// (0x000a84ad) tport_contact_pane_g1

0xbccd,	// (0x000a7e4c) tport_contact_pane_t1

0xc337,	// (0x000a84b6) tport_contact_pane_t2

0x0001,

0x0129,	// (0x0009c2a8) tport_contact_pane_t

0xc345,	// (0x000a84c4) list_tport_pane

0xc34e,	// (0x000a84cd) scroll_pane_cp_030

0x91a3,	// (0x000a5322) cell_tport_appsw_pane_g1

0x91b3,	// (0x000a5332) cell_tport_appsw_pane_t1

0x03f6,	// (0x0009c575) grid_highlight_pane_cp019

0x91c1,	// (0x000a5340) list_tport_double_graphic_pane_ParamLimits

0x91c1,	// (0x000a5340) list_tport_double_graphic_pane

0xcf55,	// (0x000a90d4) list_highlight_pane_cp023_ParamLimits

0xcf55,	// (0x000a90d4) list_highlight_pane_cp023

0x91ce,	// (0x000a534d) list_tport_double_graphic_pane_g1_ParamLimits

0x91ce,	// (0x000a534d) list_tport_double_graphic_pane_g1

0x91db,	// (0x000a535a) list_tport_double_graphic_pane_t1_ParamLimits

0x91db,	// (0x000a535a) list_tport_double_graphic_pane_t1

0x91f0,	// (0x000a536f) list_tport_double_graphic_pane_t2_ParamLimits

0x91f0,	// (0x000a536f) list_tport_double_graphic_pane_t2

0x0001,

0xfd4c,	// (0x000abecb) list_tport_double_graphic_pane_t_ParamLimits

0xfd4c,	// (0x000abecb) list_tport_double_graphic_pane_t

0x03f6,	// (0x0009c575) main_cale_note_pane

0x60d8,	// (0x000a2257) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x60d8,	// (0x000a2257) cell_vitu2_function_top_wide_pane_cp01

0x861d,	// (0x000a479c) wait_bar_pane_cp05_ParamLimits

0xcf55,	// (0x000a90d4) listscroll_cmail_pane

0xc357,	// (0x000a84d6) list_cmail_pane

0x6a2b,	// (0x000a2baa) list_cmail_body_pane

0x9202,	// (0x000a5381) list_single_cmail_header_caption_pane

0x9218,	// (0x000a5397) list_single_cmail_header_detail_pane_ParamLimits

0x9218,	// (0x000a5397) list_single_cmail_header_detail_pane

0xc367,	// (0x000a84e6) list_single_cmail_header_caption_pane_t1

0x924c,	// (0x000a53cb) list_single_cmail_header_detail_pane_g1_ParamLimits

0x924c,	// (0x000a53cb) list_single_cmail_header_detail_pane_g1

0x9264,	// (0x000a53e3) list_single_cmail_header_detail_pane_g2_ParamLimits

0x9264,	// (0x000a53e3) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd51,	// (0x000abed0) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd51,	// (0x000abed0) list_single_cmail_header_detail_pane_g

0x9270,	// (0x000a53ef) list_single_cmail_header_detail_pane_t1_ParamLimits

0x9270,	// (0x000a53ef) list_single_cmail_header_detail_pane_t1

0x92d2,	// (0x000a5451) list_single_cmail_header_editor_pane_bg_ParamLimits

0x92d2,	// (0x000a5451) list_single_cmail_header_editor_pane_bg

0xbe6e,	// (0x000a7fed) list_cmail_body_pane_g1

0xc382,	// (0x000a8501) list_cmail_body_pane_t1

0x6235,	// (0x000a23b4) list_single_cmail_header_editor_pane_bg_g1

0xb7e0,	// (0x000a795f) list_single_cmail_header_editor_pane_bg_g1_copy1

0x6245,	// (0x000a23c4) list_single_cmail_header_editor_pane_bg_g1_copy2

0x623d,	// (0x000a23bc) list_single_cmail_header_editor_pane_bg_g1_copy3

0x6bf1,	// (0x000a2d70) list_single_cmail_header_editor_pane_bg_g1_copy4

0x6265,	// (0x000a23e4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x6255,	// (0x000a23d4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x625d,	// (0x000a23dc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb7c0,	// (0x000a793f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x92eb,	// (0x000a546a) calenote_gesture_pane_ParamLimits

0x92eb,	// (0x000a546a) calenote_gesture_pane

0x930b,	// (0x000a548a) calenote_window_pane_ParamLimits

0x930b,	// (0x000a548a) calenote_window_pane

0xc390,	// (0x000a850f) popup_note_window_cp01

0x9327,	// (0x000a54a6) calenote_swipe_1_pane_ParamLimits

0x9327,	// (0x000a54a6) calenote_swipe_1_pane

0x8a79,	// (0x000a4bf8) calenote_swipe_2_pane_ParamLimits

0x8a79,	// (0x000a4bf8) calenote_swipe_2_pane

0xc1b4,	// (0x000a8333) calenote_swipe_1_pane_g1_ParamLimits

0xc1b4,	// (0x000a8333) calenote_swipe_1_pane_g1

0xc1c1,	// (0x000a8340) calenote_swipe_1_pane_g2_ParamLimits

0xc1c1,	// (0x000a8340) calenote_swipe_1_pane_g2

0x0001,

0x0064,	// (0x0009c1e3) calenote_swipe_1_pane_g_ParamLimits

0x0064,	// (0x0009c1e3) calenote_swipe_1_pane_g

0xc3a2,	// (0x000a8521) calenote_swipe_1_pane_t1_ParamLimits

0xc3a2,	// (0x000a8521) calenote_swipe_1_pane_t1

0xc1b4,	// (0x000a8333) calenote_swipe_2_pane_g1_ParamLimits

0xc1b4,	// (0x000a8333) calenote_swipe_2_pane_g1

0xc3c1,	// (0x000a8540) calenote_swipe_2_pane_g2_ParamLimits

0xc3c1,	// (0x000a8540) calenote_swipe_2_pane_g2

0x0001,

0x0146,	// (0x0009c2c5) calenote_swipe_2_pane_g_ParamLimits

0x0146,	// (0x0009c2c5) calenote_swipe_2_pane_g

0xc3cd,	// (0x000a854c) calenote_swipe_2_pane_t1_ParamLimits

0xc3cd,	// (0x000a854c) calenote_swipe_2_pane_t1

0x03f6,	// (0x0009c575) main_mup_navstr_pane

0x4da9,	// (0x000a0f28) main_mup3_pane_t7_ParamLimits

0x4da9,	// (0x000a0f28) main_mup3_pane_t7

0xac20,	// (0x000a6d9f) main_mp4_pane_g6_ParamLimits

0xac20,	// (0x000a6d9f) main_mp4_pane_g6

0xadc4,	// (0x000a6f43) main_image3_pane_t4_ParamLimits

0xadc4,	// (0x000a6f43) main_image3_pane_t4

0x933c,	// (0x000a54bb) popup_navstr_preview_pane_ParamLimits

0x933c,	// (0x000a54bb) popup_navstr_preview_pane

0x9350,	// (0x000a54cf) scroll_navstr_pane_ParamLimits

0x9350,	// (0x000a54cf) scroll_navstr_pane

0x03f6,	// (0x0009c575) bg_popup_preview_window_pane_cp04

0xc3f4,	// (0x000a8573) popup_navstr_preview_pane_t1

0x9364,	// (0x000a54e3) scroll_navstr_pane_g1_ParamLimits

0x9364,	// (0x000a54e3) scroll_navstr_pane_g1

0x9378,	// (0x000a54f7) scroll_navstr_pane_t1_ParamLimits

0x9378,	// (0x000a54f7) scroll_navstr_pane_t1

0xc399,	// (0x000a8518) bg_button_pane_cp014

0xc399,	// (0x000a8518) bg_button_pane_cp030

0x8917,	// (0x000a4a96) list_double_fisheye_pane_g4_ParamLimits

0x8917,	// (0x000a4a96) list_double_fisheye_pane_g4

0x8923,	// (0x000a4aa2) list_double_fisheye_pane_g5_ParamLimits

0x8923,	// (0x000a4aa2) list_double_fisheye_pane_g5

0xa999,	// (0x000a6b18) sp_fs_scroll_pane_cp03

0xc2a7,	// (0x000a8426) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xc2b3,	// (0x000a8432) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0081,	// (0x0009c200) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc2bf,	// (0x000a843e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xc35f,	// (0x000a84de) sp_fs_scroll_pane_cp02

0xb4c3,	// (0x000a7642) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xb4c3,	// (0x000a7642) popup_sp_fs_calendar_preview_list_single_pane

0x03f6,	// (0x0009c575) main_cam6_pano_pane

0xa4f3,	// (0x000a6672) main_mup3_pane_ParamLimits

0x03f6,	// (0x0009c575) main_phacti_pane

0x84f0,	// (0x000a466f) bg_button_pane_cp11

0x850a,	// (0x000a4689) main_mobtv_info_pane_g2_ParamLimits

0x850a,	// (0x000a4689) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x000abdc5) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x000abdc5) main_mobtv_info_pane_g

0x86e7,	// (0x000a4866) sc_clock_pane_t5_ParamLimits

0x86e7,	// (0x000a4866) sc_clock_pane_t5

0x8779,	// (0x000a48f8) main_radioblah_pane_g1_ParamLimits

0xc100,	// (0x000a827f) main_radioblah_pane_t3_ParamLimits

0xc100,	// (0x000a827f) main_radioblah_pane_t3

0xc118,	// (0x000a8297) main_radioblah_pane_t4_ParamLimits

0xc118,	// (0x000a8297) main_radioblah_pane_t4

0x87a1,	// (0x000a4920) main_radioblah_text_pane_ParamLimits

0x87a1,	// (0x000a4920) main_radioblah_text_pane

0x87b3,	// (0x000a4932) main_radioblah_info_pane_g1_ParamLimits

0x884c,	// (0x000a49cb) main_radioblah_info_pane_t4_ParamLimits

0x884c,	// (0x000a49cb) main_radioblah_info_pane_t4

0xcf55,	// (0x000a90d4) main_sp_fs_calendar_pane

0x938f,	// (0x000a550e) main_phacti_pane_g1

0x9397,	// (0x000a5516) phacti_note_pane_ParamLimits

0x9397,	// (0x000a5516) phacti_note_pane

0xc40b,	// (0x000a858a) phacti_term_pane_ParamLimits

0xc40b,	// (0x000a858a) phacti_term_pane

0xc420,	// (0x000a859f) phacti_note_pane_t1_ParamLimits

0xc420,	// (0x000a859f) phacti_note_pane_t1

0x93ab,	// (0x000a552a) phacti_term_pane_g1

0x93b3,	// (0x000a5532) phacti_term_pane_t1_ParamLimits

0x93b3,	// (0x000a5532) phacti_term_pane_t1

0xc437,	// (0x000a85b6) popup_sp_fs_calendar_preview_list_single_pane_g1

0xb5e1,	// (0x000a7760) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd62,	// (0x000abee1) popup_sp_fs_calendar_preview_list_single_pane_g

0xc43f,	// (0x000a85be) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xc43f,	// (0x000a85be) popup_sp_fs_calendar_preview_list_single_pane_t1

0xc454,	// (0x000a85d3) aid_popup_sp_fs_bg_corner_pane

0xe680,	// (0x000aa7ff) popup_sp_fs_calendar_preview_bg_pane_g1

0x03f6,	// (0x0009c575) popup_sp_fs_calendar_preview_bg_pane

0xc45c,	// (0x000a85db) popup_sp_fs_calendar_preview_list_pane

0xe278,	// (0x000aa3f7) bg_main_sp_fs_cale_pane_ParamLimits

0xe278,	// (0x000aa3f7) bg_main_sp_fs_cale_pane

0x9447,	// (0x000a55c6) listscroll_cale_mrui_pane_ParamLimits

0x9447,	// (0x000a55c6) listscroll_cale_mrui_pane

0x945c,	// (0x000a55db) listscroll_sp_fs_schedule_track_pane

0x9465,	// (0x000a55e4) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x9465,	// (0x000a55e4) main_sp_fs_ctrlbar_pane_cp01

0xc464,	// (0x000a85e3) main_sp_fs_ribbon_pane

0x9478,	// (0x000a55f7) popup_sp_fs_cale_preview_window

0x948a,	// (0x000a5609) list_single_sp_fs_schedule_track_pane_ParamLimits

0x948a,	// (0x000a5609) list_single_sp_fs_schedule_track_pane

0xcf55,	// (0x000a90d4) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xcf55,	// (0x000a90d4) bg_sp_fs_highlight_list_pane_cp03

0x949d,	// (0x000a561c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x949d,	// (0x000a561c) list_single_sp_fs_schedule_track_pane_g1

0x94a9,	// (0x000a5628) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x94a9,	// (0x000a5628) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd67,	// (0x000abee6) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd67,	// (0x000abee6) list_single_sp_fs_schedule_track_pane_g

0x94b5,	// (0x000a5634) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x94b5,	// (0x000a5634) list_single_sp_fs_schedule_track_pane_t1

0x94cf,	// (0x000a564e) sp_fs_schedule_track_pane_ParamLimits

0x94cf,	// (0x000a564e) sp_fs_schedule_track_pane

0xc46c,	// (0x000a85eb) sp_fs_schedule_track_pane_g1

0xc474,	// (0x000a85f3) sp_fs_schedule_track_pane_g2

0xc47c,	// (0x000a85fb) sp_fs_schedule_track_pane_g3

0xc484,	// (0x000a8603) sp_fs_schedule_track_pane_g4

0xc48c,	// (0x000a860b) sp_fs_schedule_track_pane_g5

0x0004,

0xfd6c,	// (0x000abeeb) sp_fs_schedule_track_pane_g

0x6235,	// (0x000a23b4) bg_sp_fs_schedule_viewer_highlight_g1

0xb7e0,	// (0x000a795f) bg_sp_fs_schedule_viewer_highlight_g2

0x623d,	// (0x000a23bc) bg_sp_fs_schedule_viewer_highlight_g3

0x6245,	// (0x000a23c4) bg_sp_fs_schedule_viewer_highlight_g4

0x6bf1,	// (0x000a2d70) bg_sp_fs_schedule_viewer_highlight_g5

0x6255,	// (0x000a23d4) bg_sp_fs_schedule_viewer_highlight_g6

0x625d,	// (0x000a23dc) bg_sp_fs_schedule_viewer_highlight_g7

0x6265,	// (0x000a23e4) bg_sp_fs_schedule_viewer_highlight_g8

0xb7c0,	// (0x000a793f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd77,	// (0x000abef6) bg_sp_fs_schedule_viewer_highlight_g

0x03f6,	// (0x0009c575) bg_main_sp_fs_ribbon_pane

0x94e0,	// (0x000a565f) main_sp_fs_ribbon_pane_g1

0xc494,	// (0x000a8613) main_sp_fs_ribbon_pane_t1

0x94e9,	// (0x000a5668) main_sp_fs_ribbon_pane_t2

0xc4a3,	// (0x000a8622) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd8a,	// (0x000abf09) main_sp_fs_ribbon_pane_t

0xc4b2,	// (0x000a8631) main_sp_fs_ribbon_scheduler_pane

0xc4ba,	// (0x000a8639) bg_main_sp_fs_ribbon_pane_g1

0xc4c3,	// (0x000a8642) bg_main_sp_fs_ribbon_pane_g2

0xc4cc,	// (0x000a864b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd91,	// (0x000abf10) bg_main_sp_fs_ribbon_pane_g

0xc4d4,	// (0x000a8653) main_sp_fs_ribbon_scheduler_pane_g1

0xc4dd,	// (0x000a865c) main_sp_fs_ribbon_scheduler_pane_g2

0xc4e6,	// (0x000a8665) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd98,	// (0x000abf17) main_sp_fs_ribbon_scheduler_pane_g

0xc4ef,	// (0x000a866e) list_cale_mrui_pane

0x94f8,	// (0x000a5677) sp_fs_scroll_pane_cp07_ParamLimits

0x94f8,	// (0x000a5677) sp_fs_scroll_pane_cp07

0x9514,	// (0x000a5693) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9514,	// (0x000a5693) bg_sp_fs_schedule_viewer_highlight

0xc4fc,	// (0x000a867b) list_single_sp_fs_schedule_track_pane_cp01

0xc504,	// (0x000a8683) list_sp_fs_schedule_track_pane

0xc50c,	// (0x000a868b) sp_fs_scroll_pane_cp06_ParamLimits

0xc50c,	// (0x000a868b) sp_fs_scroll_pane_cp06

0xe680,	// (0x000aa7ff) bgmain_sp_fs_calendar_pane_g1

0x9524,	// (0x000a56a3) list_single_cale_mrui_pane_ParamLimits

0x9524,	// (0x000a56a3) list_single_cale_mrui_pane

0x9545,	// (0x000a56c4) list_single_cale_mrui_row_pane_ParamLimits

0x9545,	// (0x000a56c4) list_single_cale_mrui_row_pane

0x9552,	// (0x000a56d1) list_single_cale_mrui_row_pane_g1_ParamLimits

0x9552,	// (0x000a56d1) list_single_cale_mrui_row_pane_g1

0x958a,	// (0x000a5709) list_single_cale_mrui_row_pane_t1_ParamLimits

0x958a,	// (0x000a5709) list_single_cale_mrui_row_pane_t1

0x959c,	// (0x000a571b) list_single_cale_mrui_row_pane_t2_ParamLimits

0x959c,	// (0x000a571b) list_single_cale_mrui_row_pane_t2

0x9604,	// (0x000a5783) list_single_cale_mrui_row_pane_t3_ParamLimits

0x9604,	// (0x000a5783) list_single_cale_mrui_row_pane_t3

0x9633,	// (0x000a57b2) list_single_cale_mrui_row_pane_t4_ParamLimits

0x9633,	// (0x000a57b2) list_single_cale_mrui_row_pane_t4

0x0003,

0xfda6,	// (0x000abf25) list_single_cale_mrui_row_pane_t_ParamLimits

0xfda6,	// (0x000abf25) list_single_cale_mrui_row_pane_t

0x9662,	// (0x000a57e1) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9662,	// (0x000a57e1) list_single_cmail_header_editor_pane_bg_cp01

0x9688,	// (0x000a5807) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9688,	// (0x000a5807) list_single_cmail_header_editor_pane_bg_cp02

0x96a8,	// (0x000a5827) main_radioblah_text_pane_t1_ParamLimits

0x96a8,	// (0x000a5827) main_radioblah_text_pane_t1

0xc52b,	// (0x000a86aa) cam6_indi_pane_cp01

0xc533,	// (0x000a86b2) cam6_mode_pane_cp01

0xc53b,	// (0x000a86ba) cam6_pano_pane

0xc544,	// (0x000a86c3) cam6_zoom_pane_cp01

0xc54c,	// (0x000a86cb) cam6_pano_image_pane

0xc557,	// (0x000a86d6) cam6_pano_pane_g1

0xbe6e,	// (0x000a7fed) cam6_pano_pane_g2

0xc560,	// (0x000a86df) cam6_pano_pane_g3

0xc569,	// (0x000a86e8) cam6_pano_pane_g4

0xec84,	// (0x000aae03) cam6_pano_pane_g5

0xc572,	// (0x000a86f1) cam6_pano_pane_g6

0xc57c,	// (0x000a86fb) cam6_pano_pane_g7

0xc584,	// (0x000a8703) cam6_pano_pane_g8

0xc58d,	// (0x000a870c) cam6_pano_pane_g9

0x0008,

0xfdaf,	// (0x000abf2e) cam6_pano_pane_g

0x03f6,	// (0x0009c575) main_browser_tag_pane

0xc3ec,	// (0x000a856b) grid_navstr_albumart_pane

0xc598,	// (0x000a8717) cell_navstr_albumart_pane_ParamLimits

0xc598,	// (0x000a8717) cell_navstr_albumart_pane

0xc5b8,	// (0x000a8737) cell_navstr_albumart_pane_g1

0xe089,	// (0x000aa208) cell_navstr_albumart_pane_g2

0xe099,	// (0x000aa218) cell_navstr_albumart_pane_g3

0xe091,	// (0x000aa210) cell_navstr_albumart_pane_g4

0x0003,

0x01b0,	// (0x0009c32f) cell_navstr_albumart_pane_g

0x96c2,	// (0x000a5841) bt_list_pane_ParamLimits

0x96c2,	// (0x000a5841) bt_list_pane

0x96d6,	// (0x000a5855) bt_list_pane_t1

0x96e5,	// (0x000a5864) bt_list_pane_t2

0x0001,

0xfdc2,	// (0x000abf41) bt_list_pane_t

0x03f6,	// (0x0009c575) main_cale_prevew_pane

0x96f4,	// (0x000a5873) popup_cale_preview_window_ParamLimits

0x96f4,	// (0x000a5873) popup_cale_preview_window

0xcf55,	// (0x000a90d4) bg_popup_preview_window_pane_cp05_ParamLimits

0xcf55,	// (0x000a90d4) bg_popup_preview_window_pane_cp05

0xc5c0,	// (0x000a873f) list_cale_preview_pane_ParamLimits

0xc5c0,	// (0x000a873f) list_cale_preview_pane

0x970f,	// (0x000a588e) list_double_cale_preview_pane_ParamLimits

0x970f,	// (0x000a588e) list_double_cale_preview_pane

0x9721,	// (0x000a58a0) list_single_cale_preview_pane_ParamLimits

0x9721,	// (0x000a58a0) list_single_cale_preview_pane

0x9737,	// (0x000a58b6) list_single_cale_preview_pane_g1

0x973f,	// (0x000a58be) list_single_cale_preview_pane_t1_ParamLimits

0x973f,	// (0x000a58be) list_single_cale_preview_pane_t1

0x9754,	// (0x000a58d3) list_double_cale_preview_pane_g1

0x975c,	// (0x000a58db) list_double_cale_preview_pane_t1_ParamLimits

0x975c,	// (0x000a58db) list_double_cale_preview_pane_t1

0x9771,	// (0x000a58f0) list_double_cale_preview_pane_t2_ParamLimits

0x9771,	// (0x000a58f0) list_double_cale_preview_pane_t2

0x0001,

0xfdc7,	// (0x000abf46) list_double_cale_preview_pane_t_ParamLimits

0xfdc7,	// (0x000abf46) list_double_cale_preview_pane_t

0x03f6,	// (0x0009c575) main_ezdial_pane

0xcf55,	// (0x000a90d4) main_sp_fs_email_pane_ParamLimits

0x8b01,	// (0x000a4c80) cmail_ddmenu_btn01_pane_ParamLimits

0x8b01,	// (0x000a4c80) cmail_ddmenu_btn01_pane

0x8b14,	// (0x000a4c93) cmail_ddmenu_btn02_pane_ParamLimits

0x8b14,	// (0x000a4c93) cmail_ddmenu_btn02_pane

0x8b37,	// (0x000a4cb6) cmail_ddmenu_btn03_pane_ParamLimits

0x8b37,	// (0x000a4cb6) cmail_ddmenu_btn03_pane

0x8b5d,	// (0x000a4cdc) main_sp_fs_ctrlbar_pane_ParamLimits

0x8b81,	// (0x000a4d00) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x6a2b,	// (0x000a2baa) list_cmail_body_pane_ParamLimits

0x9241,	// (0x000a53c0) bg_button_pane_cp12

0xc375,	// (0x000a84f4) list_single_cmail_header_detail_pane_g3_ParamLimits

0xc375,	// (0x000a84f4) list_single_cmail_header_detail_pane_g3

0x92ae,	// (0x000a542d) list_single_cmail_header_detail_pane_t2_ParamLimits

0x92ae,	// (0x000a542d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd58,	// (0x000abed7) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd58,	// (0x000abed7) list_single_cmail_header_detail_pane_t

0x93c8,	// (0x000a5547) phacti_term_pane_t2_ParamLimits

0x93c8,	// (0x000a5547) phacti_term_pane_t2

0x0001,

0xfd5d,	// (0x000abedc) phacti_term_pane_t_ParamLimits

0xfd5d,	// (0x000abedc) phacti_term_pane_t

0xc5cc,	// (0x000a874b) aid_size_list_single_double

0x9789,	// (0x000a5908) popup_ezdial_listscroll_window

0x97a5,	// (0x000a5924) popup_number_entry_window_cp01

0xca4a,	// (0x000a8bc9) bg_popup_call_pane_cp09

0xc5d8,	// (0x000a8757) ezdial_list_pane

0xc5e0,	// (0x000a875f) scroll_pane_cp23

0xe278,	// (0x000aa3f7) bg_button_pane_cp028_ParamLimits

0xe278,	// (0x000aa3f7) bg_button_pane_cp028

0x97b3,	// (0x000a5932) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x97b3,	// (0x000a5932) cmail_ddmenu_btn01_pane_g1

0x97bf,	// (0x000a593e) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x97bf,	// (0x000a593e) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfdcc,	// (0x000abf4b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfdcc,	// (0x000abf4b) cmail_ddmenu_btn01_pane_g

0xc5e8,	// (0x000a8767) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xc5e8,	// (0x000a8767) cmail_ddmenu_btn01_pane_t1

0xe278,	// (0x000aa3f7) bg_button_pane_cp029_ParamLimits

0xe278,	// (0x000aa3f7) bg_button_pane_cp029

0x97cb,	// (0x000a594a) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x97cb,	// (0x000a594a) cmail_ddmenu_btn02_pane_g1

0x97e3,	// (0x000a5962) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x97e3,	// (0x000a5962) cmail_ddmenu_btn02_pane_t1

0xcf55,	// (0x000a90d4) bg_button_pane_cp031_ParamLimits

0xcf55,	// (0x000a90d4) bg_button_pane_cp031

0x97cb,	// (0x000a594a) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x97cb,	// (0x000a594a) cmail_ddmenu_btn03_pane_g1

0x97e3,	// (0x000a5962) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x97e3,	// (0x000a5962) cmail_ddmenu_btn03_pane_t1

0x595c,	// (0x000a1adb) cell_dialer2_keypad_pane_t1_ParamLimits

0x5976,	// (0x000a1af5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5976,	// (0x000a1af5) cell_dialer2_keypad_pane_t1_copy1

0x8349,	// (0x000a44c8) ncimui_group_button_pane

0xcf55,	// (0x000a90d4) main_sp_fs_calendar_pane_ParamLimits

0x9202,	// (0x000a5381) list_single_cmail_header_caption_pane_ParamLimits

0x93fb,	// (0x000a557a) aid_recal_txt_sm_pane

0x03f6,	// (0x0009c575) mian_recal_day_pane

0x9478,	// (0x000a55f7) popup_sp_fs_cale_preview_window_ParamLimits

0xc5fd,	// (0x000a877c) list_recal_day_pane

0x9823,	// (0x000a59a2) list_single_recal_day_pane_ParamLimits

0x9823,	// (0x000a59a2) list_single_recal_day_pane

0xc624,	// (0x000a87a3) list_single_recal_day_pane_g1_ParamLimits

0xc624,	// (0x000a87a3) list_single_recal_day_pane_g1

0x9835,	// (0x000a59b4) list_single_recal_day_pane_g2_ParamLimits

0x9835,	// (0x000a59b4) list_single_recal_day_pane_g2

0x9845,	// (0x000a59c4) list_single_recal_day_pane_g3_ParamLimits

0x9845,	// (0x000a59c4) list_single_recal_day_pane_g3

0x9851,	// (0x000a59d0) list_single_recal_day_pane_g4_ParamLimits

0x9851,	// (0x000a59d0) list_single_recal_day_pane_g4

0x9867,	// (0x000a59e6) list_single_recal_day_pane_g5_ParamLimits

0x9867,	// (0x000a59e6) list_single_recal_day_pane_g5

0x9881,	// (0x000a5a00) list_single_recal_day_pane_g6_ParamLimits

0x9881,	// (0x000a5a00) list_single_recal_day_pane_g6

0x0004,

0xfddb,	// (0x000abf5a) list_single_recal_day_pane_g_ParamLimits

0xfddb,	// (0x000abf5a) list_single_recal_day_pane_g

0x9895,	// (0x000a5a14) list_single_recal_day_pane_t1

0x98a7,	// (0x000a5a26) list_single_recal_day_pane_t2

0x0001,

0xfde6,	// (0x000abf65) list_single_recal_day_pane_t

0x98b9,	// (0x000a5a38) ncimui_query_button_pane_ParamLimits

0x98b9,	// (0x000a5a38) ncimui_query_button_pane

0x98c9,	// (0x000a5a48) ncimui_query_button_pane_t1_ParamLimits

0x98c9,	// (0x000a5a48) ncimui_query_button_pane_t1

0xc630,	// (0x000a87af) ncimui_query_button_pane_t2_ParamLimits

0xc630,	// (0x000a87af) ncimui_query_button_pane_t2

0x0001,

0xfdeb,	// (0x000abf6a) ncimui_query_button_pane_t_ParamLimits

0xfdeb,	// (0x000abf6a) ncimui_query_button_pane_t

0x98dc,	// (0x000a5a5b) query_button_pane_ParamLimits

0x98dc,	// (0x000a5a5b) query_button_pane

0x03f6,	// (0x0009c575) bg_button_pane_cp0028

0xc643,	// (0x000a87c2) query_button_pane_t1

0x39fa,	// (0x0009fb79) main_tport_pane_ParamLimits

0x90ce,	// (0x000a524d) bg_popup_window_pane_cp01_ParamLimits

0x90ce,	// (0x000a524d) bg_popup_window_pane_cp01

0x90e9,	// (0x000a5268) heading_pane_cp08_ParamLimits

0x90e9,	// (0x000a5268) heading_pane_cp08

0x90fc,	// (0x000a527b) heading_pane_cp07_ParamLimits

0x90fc,	// (0x000a527b) heading_pane_cp07

0x91a3,	// (0x000a5322) cell_tport_appsw_pane_g2

0x0002,

0xfd45,	// (0x000abec4) cell_tport_appsw_pane_g

0x2f8b,	// (0x0009f10a) input_candi_list_open_g1

0xb9a3,	// (0x000a7b22) list_cale_time_pane_g6_ParamLimits

0xb9a3,	// (0x000a7b22) list_cale_time_pane_g6

0x47c1,	// (0x000a0940) aid_size_touch_calib_1_ParamLimits

0x47c1,	// (0x000a0940) aid_size_touch_calib_1

0x47d3,	// (0x000a0952) aid_size_touch_calib_2_ParamLimits

0x47d3,	// (0x000a0952) aid_size_touch_calib_2

0x47eb,	// (0x000a096a) aid_size_touch_calib_3_ParamLimits

0x47eb,	// (0x000a096a) aid_size_touch_calib_3

0x4809,	// (0x000a0988) aid_size_touch_calib_4_ParamLimits

0x4809,	// (0x000a0988) aid_size_touch_calib_4

0x4821,	// (0x000a09a0) main_touch_calib_button_group_pane_ParamLimits

0x4821,	// (0x000a09a0) main_touch_calib_button_group_pane

0x4839,	// (0x000a09b8) main_touch_calib_pane_g1_ParamLimits

0x484b,	// (0x000a09ca) main_touch_calib_pane_g2_ParamLimits

0x485d,	// (0x000a09dc) main_touch_calib_pane_g3_ParamLimits

0x486f,	// (0x000a09ee) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x000ab8db) main_touch_calib_pane_g_ParamLimits

0x4881,	// (0x000a0a00) main_touch_calib_pane_t1_ParamLimits

0x489b,	// (0x000a0a1a) main_touch_calib_pane_t2_ParamLimits

0x48b5,	// (0x000a0a34) main_touch_calib_pane_t3_ParamLimits

0x48c9,	// (0x000a0a48) main_touch_calib_pane_t4_ParamLimits

0x48dd,	// (0x000a0a5c) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x000ab8e4) main_touch_calib_pane_t_ParamLimits

0xea44,	// (0x000aabc3) list_single_fp_cale_pane_g3_ParamLimits

0xea44,	// (0x000aabc3) list_single_fp_cale_pane_g3

0xa4f3,	// (0x000a6672) bg_button_pane_cp012_ParamLimits

0xa4f3,	// (0x000a6672) bg_vkb2_func_pane_cp03_ParamLimits

0x6ba7,	// (0x000a2d26) cell_vitu2_function_top_pane_g1_ParamLimits

0xa4f3,	// (0x000a6672) bg_vkb2_func_pane_cp04_ParamLimits

0x82d7,	// (0x000a4456) main_ncimui_button_group_pane_ParamLimits

0x82d7,	// (0x000a4456) main_ncimui_button_group_pane

0x8337,	// (0x000a44b6) main_ncimui_pane_t3_ParamLimits

0x8337,	// (0x000a44b6) main_ncimui_pane_t3

0xc402,	// (0x000a8581) phacti_button_group_pane

0xc5cc,	// (0x000a874b) aid_size_list_single_double_ParamLimits

0x9789,	// (0x000a5908) popup_ezdial_listscroll_window_ParamLimits

0x97a5,	// (0x000a5924) popup_number_entry_window_cp01_ParamLimits

0x98ef,	// (0x000a5a6e) phacti_button_pane_ParamLimits

0x98ef,	// (0x000a5a6e) phacti_button_pane

0x03f6,	// (0x0009c575) bg_button_pane_cp14

0xc651,	// (0x000a87d0) phacti_button_pane_t1

0x9900,	// (0x000a5a7f) main_touch_calib_button_pane_ParamLimits

0x9900,	// (0x000a5a7f) main_touch_calib_button_pane

0xb3bf,	// (0x000a753e) bg_button_pane_cp18_ParamLimits

0xb3bf,	// (0x000a753e) bg_button_pane_cp18

0xc65f,	// (0x000a87de) main_touch_calib_button_pane_t1_ParamLimits

0xc65f,	// (0x000a87de) main_touch_calib_button_pane_t1

0xc675,	// (0x000a87f4) main_touch_calib_button_pane_t2_ParamLimits

0xc675,	// (0x000a87f4) main_touch_calib_button_pane_t2

0x0001,

0x01e7,	// (0x0009c366) main_touch_calib_button_pane_t_ParamLimits

0x01e7,	// (0x0009c366) main_touch_calib_button_pane_t

0x03f6,	// (0x0009c575) cell_ncimui_button_pane

0x03f6,	// (0x0009c575) bg_button_pane_cp032

0xc693,	// (0x000a8812) cell_ncimui_button_pane_t1

0xada4,	// (0x000a6f23) image3_infobar_pane_ParamLimits

0xada4,	// (0x000a6f23) image3_infobar_pane

0x8713,	// (0x000a4892) fs_bigclock_status_pane_ParamLimits

0x8713,	// (0x000a4892) fs_bigclock_status_pane

0x8720,	// (0x000a489f) main_fs_bigclock_clock_pane_ParamLimits

0x8720,	// (0x000a489f) main_fs_bigclock_clock_pane

0x873c,	// (0x000a48bb) main_fs_bigclock_indi_pane_ParamLimits

0x873c,	// (0x000a48bb) main_fs_bigclock_indi_pane

0x8755,	// (0x000a48d4) main_fs_bigclock_swipe_pane_ParamLimits

0x8755,	// (0x000a48d4) main_fs_bigclock_swipe_pane

0x03f6,	// (0x0009c575) main_fs_clock_dumped_data

0xbf7b,	// (0x000a80fa) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xbf7b,	// (0x000a80fa) list_single_fs_bigclock_indicator_pane_g1

0xbf95,	// (0x000a8114) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xbf95,	// (0x000a8114) list_single_fs_bigclock_indicator_pane_g2

0xbfaf,	// (0x000a812e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xbfaf,	// (0x000a812e) list_single_fs_bigclock_indicator_pane_g3

0xbfc9,	// (0x000a8148) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xbfc9,	// (0x000a8148) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0015,	// (0x0009c194) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0015,	// (0x0009c194) list_single_fs_bigclock_indicator_pane_g

0xbff2,	// (0x000a8171) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xbff2,	// (0x000a8171) list_single_fs_bigclock_indicator_pane_t1

0xc01a,	// (0x000a8199) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc01a,	// (0x000a8199) list_single_fs_bigclock_indicator_pane_t2

0xc042,	// (0x000a81c1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc042,	// (0x000a81c1) list_single_fs_bigclock_indicator_pane_t3

0xc06a,	// (0x000a81e9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc06a,	// (0x000a81e9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0020,	// (0x0009c19f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0020,	// (0x0009c19f) list_single_fs_bigclock_indicator_pane_t

0xc6a1,	// (0x000a8820) image3_infobar_fav_pane_ParamLimits

0xc6a1,	// (0x000a8820) image3_infobar_fav_pane

0xc6b1,	// (0x000a8830) image3_infobar_loc_pane_ParamLimits

0xc6b1,	// (0x000a8830) image3_infobar_loc_pane

0xc6c5,	// (0x000a8844) image3_infobar_time_pane_ParamLimits

0xc6c5,	// (0x000a8844) image3_infobar_time_pane

0xe680,	// (0x000aa7ff) image3_infobar_time_pane_g1

0xc6d5,	// (0x000a8854) image3_infobar_time_pane_t1

0xe680,	// (0x000aa7ff) image3_infobar_loc_pane_g1

0xc6e3,	// (0x000a8862) image3_infobar_loc_pane_g2

0x0001,

0xfdf0,	// (0x000abf6f) image3_infobar_loc_pane_g

0xc6eb,	// (0x000a886a) image3_infobar_loc_pane_t1

0xe680,	// (0x000aa7ff) image3_infobar_fav_pane_g1

0xc6f9,	// (0x000a8878) image3_infobar_fav_pane_g2

0x0001,

0xfdf5,	// (0x000abf74) image3_infobar_fav_pane_g

0xc701,	// (0x000a8880) fs_bigclock_status_battery_pane

0xc70a,	// (0x000a8889) fs_bigclock_status_signal_pane

0xc713,	// (0x000a8892) fs_bigclock_status_title_pane

0xc71c,	// (0x000a889b) fs_bigclock_status_signal_pane_g1

0xc725,	// (0x000a88a4) fs_bigclock_status_signal_pane_g2

0x0001,

0x01f6,	// (0x0009c375) fs_bigclock_status_signal_pane_g

0xc72d,	// (0x000a88ac) fs_bigclock_status_battery_pane_g1

0xc736,	// (0x000a88b5) fs_bigclock_status_battery_pane_g2

0x0001,

0x01fb,	// (0x0009c37a) fs_bigclock_status_battery_pane_g

0xc73e,	// (0x000a88bd) fs_bigclock_status_title_pane_t1

0xe680,	// (0x000aa7ff) main_fs_bigclock_clock_pane_g1

0x9915,	// (0x000a5a94) main_fs_bigclock_clock_pane_g2

0x9915,	// (0x000a5a94) main_fs_bigclock_clock_pane_g3

0x9915,	// (0x000a5a94) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdfa,	// (0x000abf79) main_fs_bigclock_clock_pane_g

0x991d,	// (0x000a5a9c) main_fs_bigclock_clock_pane_t1

0x992b,	// (0x000a5aaa) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe03,	// (0x000abf82) main_fs_bigclock_clock_pane_t

0xc74c,	// (0x000a88cb) list_single_fs_bigclock_indicator_pane_ParamLimits

0xc74c,	// (0x000a88cb) list_single_fs_bigclock_indicator_pane

0x993a,	// (0x000a5ab9) list_single_fs_bigclock_pane_ParamLimits

0x993a,	// (0x000a5ab9) list_single_fs_bigclock_pane

0xc766,	// (0x000a88e5) main_fs_bigclock_indicator_pane_t1

0xc775,	// (0x000a88f4) list_single_fs_bigclock_pane_g1

0xc77d,	// (0x000a88fc) list_single_fs_bigclock_pane_t1

0xe680,	// (0x000aa7ff) main_fs_bigclock_swipe_pane_g1

0xcf87,	// (0x000a9106) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe14,	// (0x000abf93) main_fs_bigclock_swipe_pane_g

0xcf8f,	// (0x000a910e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xcf8f,	// (0x000a910e) main_fs_bigclock_swipe_pane_t1

0x27a9,	// (0x0009e928) call_type_pane_ParamLimits

0x03f6,	// (0x0009c575) main_btmg_pane

0x957e,	// (0x000a56fd) list_single_cale_mrui_row_pane_g2_ParamLimits

0x957e,	// (0x000a56fd) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd9f,	// (0x000abf1e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd9f,	// (0x000abf1e) list_single_cale_mrui_row_pane_g

0x9811,	// (0x000a5990) list_recal_vselct_arw_lo_pane

0xc61c,	// (0x000a879b) list_recal_vselct_arw_up_pane

0x9819,	// (0x000a5998) list_recal_vselct_pane

0x999d,	// (0x000a5b1c) btmg_button_pane

0x99a7,	// (0x000a5b26) main_btmg_pane_g1

0x03f6,	// (0x0009c575) bg_button_pane_cp044

0xcfac,	// (0x000a912b) btmg_button_pane_t1

0xe264,	// (0x000aa3e3) aid_listscroll_gen

0xcf55,	// (0x000a90d4) main_cntbar_detail_pane

0xc357,	// (0x000a84d6) list_cmail_folder_pane

0xa999,	// (0x000a6b18) sp_fs_scroll_pane_cp03_ParamLimits

0x99b1,	// (0x000a5b30) list_single_fs_dyc_pane_cp01_ParamLimits

0x99b1,	// (0x000a5b30) list_single_fs_dyc_pane_cp01

0xcfba,	// (0x000a9139) aid_size_cmail_indent

0x99c6,	// (0x000a5b45) list_single_dyc_row_pane_cp01

0x9a01,	// (0x000a5b80) cntbar_detail_list_pane_ParamLimits

0x9a01,	// (0x000a5b80) cntbar_detail_list_pane

0x9a4d,	// (0x000a5bcc) main_cntbar_detail_cont_pane_ParamLimits

0x9a4d,	// (0x000a5bcc) main_cntbar_detail_cont_pane

0xa999,	// (0x000a6b18) scroll_pane_cp032_ParamLimits

0xa999,	// (0x000a6b18) scroll_pane_cp032

0x9a61,	// (0x000a5be0) cntbar_detail_list_event_pane_ParamLimits

0x9a61,	// (0x000a5be0) cntbar_detail_list_event_pane

0x9a11,	// (0x000a5b90) cntbar_detail_list_shct_pane

0xb82e,	// (0x000a79ad) aid_list_gen

0xcfc3,	// (0x000a9142) aid_scroll

0xcfcc,	// (0x000a914b) aid_size_touch_scroll_bar

0x7576,	// (0x000a36f5) aid_list_double

0x9a71,	// (0x000a5bf0) aid_list_single

0x7576,	// (0x000a36f5) aid_list_single_lg

0x9a7a,	// (0x000a5bf9) aid_list_z_g_a_sm

0x9a82,	// (0x000a5c01) aid_list_z_g_d

0x9a8a,	// (0x000a5c09) aid_txt_z_prm

0x9a98,	// (0x000a5c17) aid_txt_z_prm_cp01

0x9aa6,	// (0x000a5c25) aid_txt_z_sec

0x9ab4,	// (0x000a5c33) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9ab4,	// (0x000a5c33) main_cntbar_detail_cont_pane_g1

0x9ac8,	// (0x000a5c47) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9ac8,	// (0x000a5c47) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe19,	// (0x000abf98) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe19,	// (0x000abf98) main_cntbar_detail_cont_pane_g

0xcfd5,	// (0x000a9154) main_cntbar_detail_cont_pane_t1

0xcfe3,	// (0x000a9162) main_cntbar_detail_cont_pane_t2

0xcff1,	// (0x000a9170) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe1e,	// (0x000abf9d) main_cntbar_detail_cont_pane_t

0x9ad8,	// (0x000a5c57) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9ad8,	// (0x000a5c57) cell_cntbar_detail_list_shct_pane

0xcfff,	// (0x000a917e) cntbar_detail_list_shct_pane_g1

0xd008,	// (0x000a9187) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe25,	// (0x000abfa4) cntbar_detail_list_shct_pane_g

0x9aec,	// (0x000a5c6b) cntbar_detail_list_event_pane_g1_ParamLimits

0x9aec,	// (0x000a5c6b) cntbar_detail_list_event_pane_g1

0x9af8,	// (0x000a5c77) cntbar_detail_list_event_pane_g2_ParamLimits

0x9af8,	// (0x000a5c77) cntbar_detail_list_event_pane_g2

0x0005,

0xfe2a,	// (0x000abfa9) cntbar_detail_list_event_pane_g_ParamLimits

0xfe2a,	// (0x000abfa9) cntbar_detail_list_event_pane_g

0x9b64,	// (0x000a5ce3) cntbar_detail_list_event_pane_t1_ParamLimits

0x9b64,	// (0x000a5ce3) cntbar_detail_list_event_pane_t1

0x9b79,	// (0x000a5cf8) cntbar_detail_list_event_pane_t2_ParamLimits

0x9b79,	// (0x000a5cf8) cntbar_detail_list_event_pane_t2

0x0002,

0xfe37,	// (0x000abfb6) cntbar_detail_list_event_pane_t_ParamLimits

0xfe37,	// (0x000abfb6) cntbar_detail_list_event_pane_t

0xe680,	// (0x000aa7ff) cell_cntbar_detail_list_shct_pane_g1

0x2b11,	// (0x0009ec90) navi_pane_mv_g3

0xcf55,	// (0x000a90d4) main_cntbar_detail_pane_ParamLimits

0x03f6,	// (0x0009c575) main_notif_wgt_pane

0xabba,	// (0x000a6d39) aid_tch_main_mp4_pane_g4

0xad9c,	// (0x000a6f1b) popup_slider_window_cp02

0x9807,	// (0x000a5986) list_recal_day_event_pane

0x99cf,	// (0x000a5b4e) cntbar_detail_btn_pane_ParamLimits

0x99cf,	// (0x000a5b4e) cntbar_detail_btn_pane

0x99e8,	// (0x000a5b67) cntbar_detail_btn_pane_cp01_ParamLimits

0x99e8,	// (0x000a5b67) cntbar_detail_btn_pane_cp01

0x9a11,	// (0x000a5b90) cntbar_detail_list_shct_pane_ParamLimits

0x9a21,	// (0x000a5ba0) cntbar_detail_pane_g1_ParamLimits

0x9a21,	// (0x000a5ba0) cntbar_detail_pane_g1

0x9a31,	// (0x000a5bb0) cntbar_detail_pane_t1_ParamLimits

0x9a31,	// (0x000a5bb0) cntbar_detail_pane_t1

0x9b04,	// (0x000a5c83) cntbar_detail_list_event_pane_g3_ParamLimits

0x9b04,	// (0x000a5c83) cntbar_detail_list_event_pane_g3

0x9b1c,	// (0x000a5c9b) cntbar_detail_list_event_pane_g4_ParamLimits

0x9b1c,	// (0x000a5c9b) cntbar_detail_list_event_pane_g4

0x9b34,	// (0x000a5cb3) cntbar_detail_list_event_pane_g5_ParamLimits

0x9b34,	// (0x000a5cb3) cntbar_detail_list_event_pane_g5

0x9b4c,	// (0x000a5ccb) cntbar_detail_list_event_pane_g6_ParamLimits

0x9b4c,	// (0x000a5ccb) cntbar_detail_list_event_pane_g6

0x9b8e,	// (0x000a5d0d) cntbar_detail_list_event_pane_t3_ParamLimits

0x9b8e,	// (0x000a5d0d) cntbar_detail_list_event_pane_t3

0x9ba0,	// (0x000a5d1f) popup_notif_wgt_window_ParamLimits

0x9ba0,	// (0x000a5d1f) popup_notif_wgt_window

0x9bb9,	// (0x000a5d38) popup_submenu_window_cp01_ParamLimits

0x9bb9,	// (0x000a5d38) popup_submenu_window_cp01

0xca4a,	// (0x000a8bc9) bg_popup_window_pane_cp10

0xd011,	// (0x000a9190) listscroll_notif_wgt_pane

0xd023,	// (0x000a91a2) list_notif_wgt_window

0xd02c,	// (0x000a91ab) scroll_pane_cp033

0x98b9,	// (0x000a5a38) list_notif_wgt_row_pane_ParamLimits

0x98b9,	// (0x000a5a38) list_notif_wgt_row_pane

0xd035,	// (0x000a91b4) aid_size_list_notif_wgt_del

0xd042,	// (0x000a91c1) list_notif_wgt_row_pane_g1

0xd04e,	// (0x000a91cd) list_notif_wgt_row_pane_g2

0xd05a,	// (0x000a91d9) list_notif_wgt_row_pane_g3

0x0002,

0xfe3e,	// (0x000abfbd) list_notif_wgt_row_pane_g

0xd067,	// (0x000a91e6) list_notif_wgt_row_pane_t1

0xd07c,	// (0x000a91fb) list_notif_wgt_row_pane_t2

0xd08e,	// (0x000a920d) list_notif_wgt_row_pane_t3

0x0002,

0xfe45,	// (0x000abfc4) list_notif_wgt_row_pane_t

0x6ca5,	// (0x000a2e24) list_recal_day_event_pane_g1

0xd0a0,	// (0x000a921f) list_recal_day_event_pane_t1

0x03f6,	// (0x0009c575) bg_button_pane_cp045

0x9bcf,	// (0x000a5d4e) cntbar_detail_btn_pane_t1

0xe278,	// (0x000aa3f7) main_callh_pane_ParamLimits

0xe278,	// (0x000aa3f7) main_callh_pane

0x03f6,	// (0x0009c575) main_coverflow0_pane

0x03f6,	// (0x0009c575) main_wgtman_pane

0x8763,	// (0x000a48e2) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8763,	// (0x000a48e2) main_fs_bigclock_unlock_btn_pane

0x919b,	// (0x000a531a) bg_button_pane_cp16

0x91ab,	// (0x000a532a) cell_tport_appsw_pane_g3

0x9bdd,	// (0x000a5d5c) cf0_flow_pane_ParamLimits

0x9bdd,	// (0x000a5d5c) cf0_flow_pane

0xd0af,	// (0x000a922e) listscroll_cf0_pane

0xd0ba,	// (0x000a9239) main_cf0_pane_g1

0x9bf2,	// (0x000a5d71) main_cf0_pane_t1_ParamLimits

0x9bf2,	// (0x000a5d71) main_cf0_pane_t1

0x9c09,	// (0x000a5d88) main_cf0_pane_t2_ParamLimits

0x9c09,	// (0x000a5d88) main_cf0_pane_t2

0x0001,

0xfe51,	// (0x000abfd0) main_cf0_pane_t_ParamLimits

0xfe51,	// (0x000abfd0) main_cf0_pane_t

0xd0cc,	// (0x000a924b) scroll_pane_cp11

0x9c20,	// (0x000a5d9f) cf0_flow_pane_g1

0x9c28,	// (0x000a5da7) cf0_flow_pane_g2

0x0001,

0xfe56,	// (0x000abfd5) cf0_flow_pane_g

0x9c30,	// (0x000a5daf) cf0_flow_pane_t1

0x03f6,	// (0x0009c575) main_call6_pane

0x03f6,	// (0x0009c575) main_calllock_pane

0x9c3e,	// (0x000a5dbd) call6_btn_grp_pane_ParamLimits

0x9c3e,	// (0x000a5dbd) call6_btn_grp_pane

0x9c58,	// (0x000a5dd7) call6_pane_g1_ParamLimits

0x9c58,	// (0x000a5dd7) call6_pane_g1

0x9c6d,	// (0x000a5dec) popup_call6_1st_window_ParamLimits

0x9c6d,	// (0x000a5dec) popup_call6_1st_window

0x9c7e,	// (0x000a5dfd) popup_call6_2nd_window_ParamLimits

0x9c7e,	// (0x000a5dfd) popup_call6_2nd_window

0x9c8f,	// (0x000a5e0e) cell_call6_btn_pane_ParamLimits

0x9c8f,	// (0x000a5e0e) cell_call6_btn_pane

0xca4a,	// (0x000a8bc9) bg_popup_call2_in_pane_cp03

0xd0d7,	// (0x000a9256) popup_call6_1st_window_g1

0xd0df,	// (0x000a925e) popup_call6_1st_window_g2

0xd0e7,	// (0x000a9266) popup_call6_1st_window_g3

0x0002,

0xfe5b,	// (0x000abfda) popup_call6_1st_window_g

0xd0ef,	// (0x000a926e) popup_call6_1st_window_t1

0xd0fe,	// (0x000a927d) popup_call6_1st_window_t2

0xd10e,	// (0x000a928d) popup_call6_1st_window_t3

0x0002,

0xfe62,	// (0x000abfe1) popup_call6_1st_window_t

0xca4a,	// (0x000a8bc9) bg_popup_call2_in_pane_cp04

0xd0d7,	// (0x000a9256) popup_call6_2nd_window_g1

0xd0df,	// (0x000a925e) popup_call6_2nd_window_g2

0xd0e7,	// (0x000a9266) popup_call6_2nd_window_g3

0x0002,

0xfe5b,	// (0x000abfda) popup_call6_2nd_window_g

0xd0ef,	// (0x000a926e) popup_call6_2nd_window_t1

0x03f6,	// (0x0009c575) bg_button_pane_cp15

0xd11e,	// (0x000a929d) cell_call6_btn_pane_g1

0xd127,	// (0x000a92a6) cell_call6_btn_pane_t1

0x9ca3,	// (0x000a5e22) listscroll_wgtman_pane_ParamLimits

0x9ca3,	// (0x000a5e22) listscroll_wgtman_pane

0x9cc6,	// (0x000a5e45) wgtman_btn_pane_ParamLimits

0x9cc6,	// (0x000a5e45) wgtman_btn_pane

0xc901,	// (0x000a8a80) aid_scroll_copy1

0xd136,	// (0x000a92b5) list_wgtman_pane

0x9d09,	// (0x000a5e88) wgtman_btn_pane_g1_ParamLimits

0x9d09,	// (0x000a5e88) wgtman_btn_pane_g1

0x9d35,	// (0x000a5eb4) wgtman_btn_pane_t1_ParamLimits

0x9d35,	// (0x000a5eb4) wgtman_btn_pane_t1

0xd140,	// (0x000a92bf) wgtman_btn_pane_t2_ParamLimits

0xd140,	// (0x000a92bf) wgtman_btn_pane_t2

0x0001,

0xfe69,	// (0x000abfe8) wgtman_btn_pane_t_ParamLimits

0xfe69,	// (0x000abfe8) wgtman_btn_pane_t

0x9d72,	// (0x000a5ef1) listrow_wgtman_pane_ParamLimits

0x9d72,	// (0x000a5ef1) listrow_wgtman_pane

0x9d84,	// (0x000a5f03) listrow_wgtman_pane_g1

0x9d91,	// (0x000a5f10) listrow_wgtman_pane_g2

0x0001,

0xfe6e,	// (0x000abfed) listrow_wgtman_pane_g

0x9daf,	// (0x000a5f2e) listrow_wgtman_pane_t1

0x9dc7,	// (0x000a5f46) listrow_wgtman_pane_t2

0x0001,

0xfe73,	// (0x000abff2) listrow_wgtman_pane_t

0x9ded,	// (0x000a5f6c) wait_bar_pane_cp09

0xd157,	// (0x000a92d6) main_calllock_btn_pane

0xd161,	// (0x000a92e0) main_calllock_pane_g1

0x03f6,	// (0x0009c575) bg_button_pane_cp17

0xd16d,	// (0x000a92ec) main_calllock_btn_pane_g1

0xd176,	// (0x000a92f5) main_calllock_btn_pane_t1

0x03f6,	// (0x0009c575) main_dialer3_pane

0x03f6,	// (0x0009c575) main_fmrd2_pane

0xe680,	// (0x000aa7ff) main_fs_bigclock_unlock_btn_pane_g1

0xd18d,	// (0x000a930c) main_fs_bigclock_unlock_btn_pane_t1

0x9dff,	// (0x000a5f7e) area_fmrd2_info_pane_ParamLimits

0x9dff,	// (0x000a5f7e) area_fmrd2_info_pane

0x9e10,	// (0x000a5f8f) area_fmrd2_visual_pane_ParamLimits

0x9e10,	// (0x000a5f8f) area_fmrd2_visual_pane

0x9e1e,	// (0x000a5f9d) fmrd2_indi_pane_ParamLimits

0x9e1e,	// (0x000a5f9d) fmrd2_indi_pane

0x9e2b,	// (0x000a5faa) area_fmrd2_visual_pane_g1

0x9e33,	// (0x000a5fb2) area_fmrd2_visual_pane_t1

0x9e43,	// (0x000a5fc2) area_fmrd2_visual_pane_t2

0x9e53,	// (0x000a5fd2) area_fmrd2_visual_pane_t3

0x0002,

0xfe7d,	// (0x000abffc) area_fmrd2_visual_pane_t

0x9e63,	// (0x000a5fe2) area_fmrd2_info_pane_g1

0x9e6b,	// (0x000a5fea) area_fmrd2_info_pane_t1

0x9e7b,	// (0x000a5ffa) area_fmrd2_info_pane_t2

0x9e8b,	// (0x000a600a) area_fmrd2_info_pane_t3

0x9e9b,	// (0x000a601a) area_fmrd2_info_pane_t4

0x0003,

0xfe84,	// (0x000ac003) area_fmrd2_info_pane_t

0x9ea9,	// (0x000a6028) fmrd2_indi_pane_t1

0x9eb9,	// (0x000a6038) fmrd2_indi_pane_t2

0x9ec9,	// (0x000a6048) fmrd2_indi_pane_t3

0x0002,

0xfe8d,	// (0x000ac00c) fmrd2_indi_pane_t

0xbfd8,	// (0x000a8157) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xbfd8,	// (0x000a8157) list_single_fs_bigclock_indicator_pane_g5

0xc07f,	// (0x000a81fe) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc07f,	// (0x000a81fe) list_single_fs_bigclock_indicator_pane_t5

0x93dd,	// (0x000a555c) aid_cell_bcale_month_pane_ParamLimits

0x93dd,	// (0x000a555c) aid_cell_bcale_month_pane

0x9404,	// (0x000a5583) bcale_month_pane_ParamLimits

0x9404,	// (0x000a5583) bcale_month_pane

0x9428,	// (0x000a55a7) bcale_preview_pane_ParamLimits

0x9428,	// (0x000a55a7) bcale_preview_pane

0xc77d,	// (0x000a88fc) list_single_fs_bigclock_pane_t1_ParamLimits

0xcf63,	// (0x000a90e2) list_single_fs_bigclock_pane_t2_ParamLimits

0xcf63,	// (0x000a90e2) list_single_fs_bigclock_pane_t2

0x0001,

0xfe0f,	// (0x000abf8e) list_single_fs_bigclock_pane_t_ParamLimits

0xfe0f,	// (0x000abf8e) list_single_fs_bigclock_pane_t

0xd185,	// (0x000a9304) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe78,	// (0x000abff7) main_fs_bigclock_unlock_btn_pane_g

0x9ed9,	// (0x000a6058) aid_dia3_key_size_ParamLimits

0x9ed9,	// (0x000a6058) aid_dia3_key_size

0x9ee8,	// (0x000a6067) aid_dia3_listrow_size_ParamLimits

0x9ee8,	// (0x000a6067) aid_dia3_listrow_size

0x9efd,	// (0x000a607c) dia3_keypad_fun_pane_ParamLimits

0x9efd,	// (0x000a607c) dia3_keypad_fun_pane

0x9f19,	// (0x000a6098) dia3_keypad_num_pane_ParamLimits

0x9f19,	// (0x000a6098) dia3_keypad_num_pane

0x9f34,	// (0x000a60b3) dia3_listscroll_pane_ParamLimits

0x9f34,	// (0x000a60b3) dia3_listscroll_pane

0x9f47,	// (0x000a60c6) dia3_numentry_pane_ParamLimits

0x9f47,	// (0x000a60c6) dia3_numentry_pane

0xd19b,	// (0x000a931a) dia3_list_pane

0xd1a6,	// (0x000a9325) scroll_pane_cp12

0x03f6,	// (0x0009c575) bg_dia3_numentry_pane

0x9f5b,	// (0x000a60da) dia3_numentry_pane_t1

0x9f6a,	// (0x000a60e9) cell_dia3_key_num_pane

0x9f72,	// (0x000a60f1) cell_dia3_key0_fun_pane_ParamLimits

0x9f72,	// (0x000a60f1) cell_dia3_key0_fun_pane

0x9f86,	// (0x000a6105) cell_dia3_key1_fun_pane_ParamLimits

0x9f86,	// (0x000a6105) cell_dia3_key1_fun_pane

0x9f9e,	// (0x000a611d) dia3_listrow_pane

0xbce8,	// (0x000a7e67) bg_dia3_numentry_pane_g1

0x03f6,	// (0x0009c575) bg_button_pane_cp21

0xd1b1,	// (0x000a9330) cell_dia3_key_num_pane_t1

0xd1bf,	// (0x000a933e) cell_dia3_key_num_pane_t2

0xd1ce,	// (0x000a934d) cell_dia3_key_num_pane_t3

0xd1dd,	// (0x000a935c) cell_dia3_key_num_pane_t4

0x0003,

0xfe94,	// (0x000ac013) cell_dia3_key_num_pane_t

0x03f6,	// (0x0009c575) bg_button_pane_cp19

0x9fb0,	// (0x000a612f) cell_dia3_key0_fun_pane_g1

0x03f6,	// (0x0009c575) bg_button_pane_cp20

0x9fb8,	// (0x000a6137) cell_dia3_key1_fun_pane_g1

0x9fc0,	// (0x000a613f) area_left_week_number_pane

0x9fcc,	// (0x000a614b) area_top_day_name_pane

0x9fdf,	// (0x000a615e) frame_month_view_pane

0xd1ec,	// (0x000a936b) grid_month_view_pane

0x9ff2,	// (0x000a6171) cell_top_day_name_pane_ParamLimits

0x9ff2,	// (0x000a6171) cell_top_day_name_pane

0xa01f,	// (0x000a619e) cell_area_left_week_number_pane_ParamLimits

0xa01f,	// (0x000a619e) cell_area_left_week_number_pane

0xa033,	// (0x000a61b2) cell_month_view_pane_ParamLimits

0xa033,	// (0x000a61b2) cell_month_view_pane

0xd1fa,	// (0x000a9379) frm_month_g1

0xa060,	// (0x000a61df) frm_month_g2

0xa073,	// (0x000a61f2) frm_month_g3

0xa086,	// (0x000a6205) frm_month_g4

0xa099,	// (0x000a6218) frm_month_g5

0xa0ac,	// (0x000a622b) frm_month_g6

0xa0bf,	// (0x000a623e) frm_month_g7

0xd207,	// (0x000a9386) frm_month_g8

0xa0d2,	// (0x000a6251) frm_month_g9

0xa0e2,	// (0x000a6261) frm_month_g10

0xa0f2,	// (0x000a6271) frm_month_g11

0xa102,	// (0x000a6281) frm_month_g12

0xa114,	// (0x000a6293) frm_month_g13

0xa126,	// (0x000a62a5) frm_month_g14

0xa13a,	// (0x000a62b9) frm_month_g15

0xa14e,	// (0x000a62cd) frm_month_g16

0x000f,

0xfe9d,	// (0x000ac01c) frm_month_g

0xd214,	// (0x000a9393) cell_top_day_name_pane_t1

0xa162,	// (0x000a62e1) cell_area_left_week_number_pane_g1

0xa16e,	// (0x000a62ed) cell_area_left_week_number_pane_t1

0xe8ec,	// (0x000aaa6b) cell_month_view_pane_g1

0xa181,	// (0x000a6300) cell_month_view_pane_t1

0x03f6,	// (0x0009c575) main_fps_pane

0xc26f,	// (0x000a83ee) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc26f,	// (0x000a83ee) cmail_ddmenu_btn02_pane_cp1

0xc28b,	// (0x000a840a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc28b,	// (0x000a840a) cmail_ddmenu_btn02_pane_cp2

0x97d7,	// (0x000a5956) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x97d7,	// (0x000a5956) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfdd1,	// (0x000abf50) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfdd1,	// (0x000abf50) cmail_ddmenu_btn02_pane_g

0x97f5,	// (0x000a5974) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x97f5,	// (0x000a5974) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfdd6,	// (0x000abf55) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfdd6,	// (0x000abf55) cmail_ddmenu_btn02_pane_t

0xa194,	// (0x000a6313) fps_text_pane_ParamLimits

0xa194,	// (0x000a6313) fps_text_pane

0xa1ab,	// (0x000a632a) main_fps_pane_g1_ParamLimits

0xa1ab,	// (0x000a632a) main_fps_pane_g1

0xa1c5,	// (0x000a6344) wait_bar_pane_cp010_ParamLimits

0xa1c5,	// (0x000a6344) wait_bar_pane_cp010

0xa1d6,	// (0x000a6355) fps_text_pane_t1_ParamLimits

0xa1d6,	// (0x000a6355) fps_text_pane_t1

0xae0a,	// (0x000a6f89) cam4_image_uncrop_pane_g1

0xae13,	// (0x000a6f92) cam4_image_uncrop_pane_g2

0x5e02,	// (0x000a1f81) cam4_image_uncrop_pane_g3

0x5e0b,	// (0x000a1f8a) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x000aba73) cam4_image_uncrop_pane_g

0x9f9e,	// (0x000a611d) dia3_listrow_pane_ParamLimits

0x03f6,	// (0x0009c575) main_phob2_pane

0x916c,	// (0x000a52eb) cell_tport_appsw_pane_cp02_ParamLimits

0x916c,	// (0x000a52eb) cell_tport_appsw_pane_cp02

0x9180,	// (0x000a52ff) cell_tport_appsw_pane_cp03_ParamLimits

0x9180,	// (0x000a52ff) cell_tport_appsw_pane_cp03

0x03f6,	// (0x0009c575) phob2_contact_card_pane

0x03f6,	// (0x0009c575) phob2_listscroll_pane

0xd227,	// (0x000a93a6) phob2_list_pane

0xd22f,	// (0x000a93ae) scroll_pane_cp034

0xa1ee,	// (0x000a636d) phob2_cc_data_pane_ParamLimits

0xa1ee,	// (0x000a636d) phob2_cc_data_pane

0xa20d,	// (0x000a638c) phob2_cc_listscroll_pane_ParamLimits

0xa20d,	// (0x000a638c) phob2_cc_listscroll_pane

0xa22b,	// (0x000a63aa) list_double_large_graphic_phob2_pane_ParamLimits

0xa22b,	// (0x000a63aa) list_double_large_graphic_phob2_pane

0xa23d,	// (0x000a63bc) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa23d,	// (0x000a63bc) list_double_large_graphic_phob2_pane_g1

0xa253,	// (0x000a63d2) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xa253,	// (0x000a63d2) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfebe,	// (0x000ac03d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfebe,	// (0x000ac03d) list_double_large_graphic_phob2_pane_g

0xa25f,	// (0x000a63de) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa25f,	// (0x000a63de) list_double_large_graphic_phob2_pane_t1

0xa274,	// (0x000a63f3) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xa274,	// (0x000a63f3) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfec3,	// (0x000ac042) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfec3,	// (0x000ac042) list_double_large_graphic_phob2_pane_t

0x03f6,	// (0x0009c575) list_highlight_pane_cp024

0xd237,	// (0x000a93b6) phob2_cc_button_pane

0xa286,	// (0x000a6405) phob2_cc_data_pane_g1_ParamLimits

0xa286,	// (0x000a6405) phob2_cc_data_pane_g1

0xa29b,	// (0x000a641a) phob2_cc_data_pane_g2_ParamLimits

0xa29b,	// (0x000a641a) phob2_cc_data_pane_g2

0x0001,

0xfec8,	// (0x000ac047) phob2_cc_data_pane_g_ParamLimits

0xfec8,	// (0x000ac047) phob2_cc_data_pane_g

0xa2ad,	// (0x000a642c) phob2_cc_data_pane_t1_ParamLimits

0xa2ad,	// (0x000a642c) phob2_cc_data_pane_t1

0xa2c5,	// (0x000a6444) phob2_cc_data_pane_t2_ParamLimits

0xa2c5,	// (0x000a6444) phob2_cc_data_pane_t2

0xa2dd,	// (0x000a645c) phob2_cc_data_pane_t3_ParamLimits

0xa2dd,	// (0x000a645c) phob2_cc_data_pane_t3

0x0002,

0xfecd,	// (0x000ac04c) phob2_cc_data_pane_t_ParamLimits

0xfecd,	// (0x000ac04c) phob2_cc_data_pane_t

0xd23f,	// (0x000a93be) phob2_cc_list_pane_ParamLimits

0xd23f,	// (0x000a93be) phob2_cc_list_pane

0xaf7a,	// (0x000a70f9) scroll_pane_cp035_ParamLimits

0xaf7a,	// (0x000a70f9) scroll_pane_cp035

0xcf55,	// (0x000a90d4) bg_button_pane_cp033

0xd24b,	// (0x000a93ca) phob2_cc_button_pane_g1

0xd257,	// (0x000a93d6) phob2_cc_button_pane_t1

0xd26c,	// (0x000a93eb) phob2_cc_button_pane_t2

0x0001,

0xfed4,	// (0x000ac053) phob2_cc_button_pane_t

0xa2f5,	// (0x000a6474) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa2f5,	// (0x000a6474) list_double_large_graphic_phob2_cc_pane

0xa307,	// (0x000a6486) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa307,	// (0x000a6486) list_double_large_graphic_phob2_cc_pane_g1

0xa313,	// (0x000a6492) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa313,	// (0x000a6492) list_double_large_graphic_phob2_cc_pane_g2

0xa31f,	// (0x000a649e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xa31f,	// (0x000a649e) list_double_large_graphic_phob2_cc_pane_g3

0xa32b,	// (0x000a64aa) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xa32b,	// (0x000a64aa) list_double_large_graphic_phob2_cc_pane_g4

0xa337,	// (0x000a64b6) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa337,	// (0x000a64b6) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfed9,	// (0x000ac058) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfed9,	// (0x000ac058) list_double_large_graphic_phob2_cc_pane_g

0xa343,	// (0x000a64c2) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xa343,	// (0x000a64c2) list_double_large_graphic_phob2_cc_pane_t1

0xa36c,	// (0x000a64eb) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xa36c,	// (0x000a64eb) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfee4,	// (0x000ac063) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfee4,	// (0x000ac063) list_double_large_graphic_phob2_cc_pane_t

0xd27e,	// (0x000a93fd) list_highlight_pane_cp025_ParamLimits

0xd27e,	// (0x000a93fd) list_highlight_pane_cp025

0xcf55,	// (0x000a90d4) bg_button_pane_cp033_ParamLimits

0xd24b,	// (0x000a93ca) phob2_cc_button_pane_g1_ParamLimits

0xd257,	// (0x000a93d6) phob2_cc_button_pane_t1_ParamLimits

0xd26c,	// (0x000a93eb) phob2_cc_button_pane_t2_ParamLimits

0xfed4,	// (0x000ac053) phob2_cc_button_pane_t_ParamLimits

0x0621,	// (0x0009c7a0) popup_wgtman_window

0x6660,	// (0x000a27df) scroll_pane_cp038

0x9ceb,	// (0x000a5e6a) wgtman_btn_pane_cp_01_ParamLimits

0x9ceb,	// (0x000a5e6a) wgtman_btn_pane_cp_01

0xd28c,	// (0x000a940b) wgtman_content_pane

0xd295,	// (0x000a9414) wgtman_heading_pane

0x03f6,	// (0x0009c575) bg_heading_pane_cp02

0xd29e,	// (0x000a941d) wgtman_heading_pane_g1

0xd2a6,	// (0x000a9425) wgtman_heading_pane_t1

0xd2b4,	// (0x000a9433) scroll_pane_cp036

0xd2bc,	// (0x000a943b) wgtman_list_pane

0xd2c4,	// (0x000a9443) wgtman_list_pane_t1_ParamLimits

0xd2c4,	// (0x000a9443) wgtman_list_pane_t1

0xadf6,	// (0x000a6f75) cam4_grid_pane

0x6d8d,	// (0x000a2f0c) bg_button_pane_cp015_ParamLimits

0x6d9f,	// (0x000a2f1e) bg_button_pane_cp016_ParamLimits

0x6db2,	// (0x000a2f31) bg_button_pane_cp017_ParamLimits

0x6e16,	// (0x000a2f95) popup_vitu2_query_window_g3_ParamLimits

0x6e16,	// (0x000a2f95) popup_vitu2_query_window_g3

0x6ed3,	// (0x000a3052) popup_vitu2_query_window_t6_ParamLimits

0x6ed3,	// (0x000a3052) popup_vitu2_query_window_t6

0x6efe,	// (0x000a307d) popup_vitu2_query_window_t7_ParamLimits

0x6efe,	// (0x000a307d) popup_vitu2_query_window_t7

0xae0a,	// (0x000a6f89) cam4_grid_pane_g1

0xae13,	// (0x000a6f92) cam4_grid_pane_g2

0xd2de,	// (0x000a945d) cam4_grid_pane_g3

0xd2e7,	// (0x000a9466) cam4_grid_pane_g4

0x0003,

0xfee9,	// (0x000ac068) cam4_grid_pane_g

0x1653,	// (0x0009d7d2) aid_placing_vt_slider_lsc_ParamLimits

0x195e,	// (0x0009dadd) vidtel_button_pane_ParamLimits

0x195e,	// (0x0009dadd) vidtel_button_pane

0xd2f2,	// (0x000a9471) bg_button_pane_cp034

0xa395,	// (0x000a6514) vidtel_button_pane_g1

0xd2fc,	// (0x000a947b) vidtel_button_pane_t1

0x6a54,	// (0x000a2bd3) aid_size_vtel_slider_touch

0xaf7a,	// (0x000a70f9) scroll_pane_cp039

0xbd26,	// (0x000a7ea5) ncim_query_button_pane_cp01_ParamLimits

0xbd45,	// (0x000a7ec4) ncimui_query_pane_g1_ParamLimits

0xcf55,	// (0x000a90d4) input_focus_pane_cp012_ParamLimits

0xbd6a,	// (0x000a7ee9) ncim_query_entry_pane_t1_ParamLimits

0xaf7a,	// (0x000a70f9) scroll_pane_cp039_ParamLimits

0x2a85,	// (0x0009ec04) navi_pane_bcale_mc_g1

0x2a8d,	// (0x0009ec0c) navi_pane_bcale_mc_t1

0xc2d4,	// (0x000a8453) main_sp_fs_email_pane_g1

0xc2e0,	// (0x000a845f) main_sp_fs_email_pane_g2

0x0001,

0x0086,	// (0x0009c205) main_sp_fs_email_pane_g

0xc51e,	// (0x000a869d) list_single_cale_mrui_row_pane_g3_ParamLimits

0xc51e,	// (0x000a869d) list_single_cale_mrui_row_pane_g3

0x9877,	// (0x000a59f6) list_single_recal_day_pane_g5_event_pane

0x988d,	// (0x000a5a0c) list_single_recal_day_pane_g7

0xd30a,	// (0x000a9489) list_recal_day_event_pane_cp01

0xd313,	// (0x000a9492) list_recal_vselct_arw_lo_pane_cp01

0xd31b,	// (0x000a949a) list_recal_vselct_arw_up_pane_cp01

0xd323,	// (0x000a94a2) list_recal_vselct_pane_cp01

0x6ca5,	// (0x000a2e24) list_recal_day_event_pane_cp01_g1

0xa39d,	// (0x000a651c) list_recal_day_event_pane_cp01_t1

0x9895,	// (0x000a5a14) list_single_recal_day_pane_t1_ParamLimits

0x98a7,	// (0x000a5a26) list_single_recal_day_pane_t2_ParamLimits

0xfde6,	// (0x000abf65) list_single_recal_day_pane_t_ParamLimits

0xb2fa,	// (0x000a7479) bg_notes_pane_ParamLimits

0xb39d,	// (0x000a751c) list_notes_pane_ParamLimits

0x098a,	// (0x0009cb09) scroll_pane_cp06_ParamLimits

0xb3bf,	// (0x000a753e) main_notes_pane_ParamLimits

0x03f6,	// (0x0009c575) main_welc_pane

0xa3ab,	// (0x000a652a) main_welc_body_pane_ParamLimits

0xa3ab,	// (0x000a652a) main_welc_body_pane

0xa3c9,	// (0x000a6548) main_welc_opti_pane_ParamLimits

0xa3c9,	// (0x000a6548) main_welc_opti_pane

0xa40e,	// (0x000a658d) main_welc_pane_t1_ParamLimits

0xa40e,	// (0x000a658d) main_welc_pane_t1

0xa42c,	// (0x000a65ab) main_welc_body_row_pane_ParamLimits

0xa42c,	// (0x000a65ab) main_welc_body_row_pane

0xd32d,	// (0x000a94ac) main_welc_opti_row_pane_ParamLimits

0xd32d,	// (0x000a94ac) main_welc_opti_row_pane

0xd33b,	// (0x000a94ba) main_welc_opti_row_pane_g1

0xd343,	// (0x000a94c2) main_welc_opti_row_pane_t1

0xd353,	// (0x000a94d2) main_welc_body_row_pane_t1

0xd01b,	// (0x000a919a) popup_notif_wgt_heading_pane

0xd035,	// (0x000a91b4) aid_size_list_notif_wgt_del_ParamLimits

0xd042,	// (0x000a91c1) list_notif_wgt_row_pane_g1_ParamLimits

0xd04e,	// (0x000a91cd) list_notif_wgt_row_pane_g2_ParamLimits

0xd05a,	// (0x000a91d9) list_notif_wgt_row_pane_g3_ParamLimits

0xfe3e,	// (0x000abfbd) list_notif_wgt_row_pane_g_ParamLimits

0xd067,	// (0x000a91e6) list_notif_wgt_row_pane_t1_ParamLimits

0xd07c,	// (0x000a91fb) list_notif_wgt_row_pane_t2_ParamLimits

0xd08e,	// (0x000a920d) list_notif_wgt_row_pane_t3_ParamLimits

0xfe45,	// (0x000abfc4) list_notif_wgt_row_pane_t_ParamLimits

0x9d84,	// (0x000a5f03) listrow_wgtman_pane_g1_ParamLimits

0x9d91,	// (0x000a5f10) listrow_wgtman_pane_g2_ParamLimits

0xfe6e,	// (0x000abfed) listrow_wgtman_pane_g_ParamLimits

0x9daf,	// (0x000a5f2e) listrow_wgtman_pane_t1_ParamLimits

0x9dc7,	// (0x000a5f46) listrow_wgtman_pane_t2_ParamLimits

0xfe73,	// (0x000abff2) listrow_wgtman_pane_t_ParamLimits

0x9ded,	// (0x000a5f6c) wait_bar_pane_cp09_ParamLimits

0x03f6,	// (0x0009c575) bg_popup_heading_pane_cp02

0xd362,	// (0x000a94e1) popup_notif_wgt_heading_pane_g1

0xd36a,	// (0x000a94e9) popup_notif_wgt_heading_pane_t1

0x03f6,	// (0x0009c575) main_vids_pane

0x03f6,	// (0x0009c575) vids_listscroll_pane

0xa440,	// (0x000a65bf) scroll_pane_cp040

0x03f6,	// (0x0009c575) vids_list_pane

0xa44b,	// (0x000a65ca) vids_list_double_pane_ParamLimits

0xa44b,	// (0x000a65ca) vids_list_double_pane

0xa45c,	// (0x000a65db) vids_list_double_pane_g1

0xa465,	// (0x000a65e4) vids_list_double_pane_t1

0xa475,	// (0x000a65f4) vids_list_double_pane_t2

0x0001,

0xfef7,	// (0x000ac076) vids_list_double_pane_t

0xa4f3,	// (0x000a6672) main_ncimui_pane_ParamLimits

0x82eb,	// (0x000a446a) main_ncimui_pane_g1_ParamLimits

0x82f7,	// (0x000a4476) main_ncimui_pane_g2_ParamLimits

0x82f7,	// (0x000a4476) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x000abd6f) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x000abd6f) main_ncimui_pane_g

0xa3e4,	// (0x000a6563) main_welc_pane_g1_ParamLimits

0xa3e4,	// (0x000a6563) main_welc_pane_g1

0xa3f9,	// (0x000a6578) main_welc_pane_g2_ParamLimits

0xa3f9,	// (0x000a6578) main_welc_pane_g2

0x0001,

0xfef2,	// (0x000ac071) main_welc_pane_g_ParamLimits

0xfef2,	// (0x000ac071) main_welc_pane_g

0xb2fa,	// (0x000a7479) listscroll_mce_pane_ParamLimits

0x2b5f,	// (0x0009ecde) wait_bar_pane_cp10

0xe26c,	// (0x000aa3eb) main_cale_day_pane_ParamLimits

0xe26c,	// (0x000aa3eb) main_cale_week_pane_ParamLimits

0xb2fa,	// (0x000a7479) main_messa_pane_ParamLimits

0x5132,	// (0x000a12b1) main_clock2_btn_pane_ParamLimits

0x5132,	// (0x000a12b1) main_clock2_btn_pane

0xeacc,	// (0x000aac4b) main_clock2_btn_pane_cp01_ParamLimits

0xeacc,	// (0x000aac4b) main_clock2_btn_pane_cp01

0xc4ef,	// (0x000a866e) list_cale_mrui_pane_ParamLimits

0xd0c4,	// (0x000a9243) main_cf0_pane_g2

0x0001,

0xfe4c,	// (0x000abfcb) main_cf0_pane_g

0x9fc0,	// (0x000a613f) area_left_week_number_pane_ParamLimits

0x9fcc,	// (0x000a614b) area_top_day_name_pane_ParamLimits

0x9fdf,	// (0x000a615e) frame_month_view_pane_ParamLimits

0xd1ec,	// (0x000a936b) grid_month_view_pane_ParamLimits

0xd1fa,	// (0x000a9379) frm_month_g1_ParamLimits

0xa060,	// (0x000a61df) frm_month_g2_ParamLimits

0xa073,	// (0x000a61f2) frm_month_g3_ParamLimits

0xa086,	// (0x000a6205) frm_month_g4_ParamLimits

0xa099,	// (0x000a6218) frm_month_g5_ParamLimits

0xa0ac,	// (0x000a622b) frm_month_g6_ParamLimits

0xa0bf,	// (0x000a623e) frm_month_g7_ParamLimits

0xd207,	// (0x000a9386) frm_month_g8_ParamLimits

0xa0d2,	// (0x000a6251) frm_month_g9_ParamLimits

0xa0e2,	// (0x000a6261) frm_month_g10_ParamLimits

0xa0f2,	// (0x000a6271) frm_month_g11_ParamLimits

0xa102,	// (0x000a6281) frm_month_g12_ParamLimits

0xa114,	// (0x000a6293) frm_month_g13_ParamLimits

0xa126,	// (0x000a62a5) frm_month_g14_ParamLimits

0xa13a,	// (0x000a62b9) frm_month_g15_ParamLimits

0xa14e,	// (0x000a62cd) frm_month_g16_ParamLimits

0xfe9d,	// (0x000ac01c) frm_month_g_ParamLimits

0xd214,	// (0x000a9393) cell_top_day_name_pane_t1_ParamLimits

0xa162,	// (0x000a62e1) cell_area_left_week_number_pane_g1_ParamLimits

0xa16e,	// (0x000a62ed) cell_area_left_week_number_pane_t1_ParamLimits

0xe8ec,	// (0x000aaa6b) cell_month_view_pane_g1_ParamLimits

0xa181,	// (0x000a6300) cell_month_view_pane_t1_ParamLimits

0xb2f2,	// (0x000a7471) main_clock2_btn_pane_g1

0xd378,	// (0x000a94f7) main_clock2_btn_pane_t1

0xcf55,	// (0x000a90d4) listscroll_cmail_pane_ParamLimits

0xc2d4,	// (0x000a8453) main_sp_fs_email_pane_g1_ParamLimits

0xc2e0,	// (0x000a845f) main_sp_fs_email_pane_g2_ParamLimits

0x0086,	// (0x0009c205) main_sp_fs_email_pane_g_ParamLimits

0xc5fd,	// (0x000a877c) list_recal_day_pane_ParamLimits

0xc60e,	// (0x000a878d) mian_recal_day_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
