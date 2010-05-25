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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0009d4bb };

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
0x02df,	// (0x0009d79a) Screen

0x02eb,	// (0x0009d7a6) application_window

0x0327,	// (0x0009d7e2) area_bottom_pane_ParamLimits

0x0327,	// (0x0009d7e2) area_bottom_pane

0x0360,	// (0x0009d81b) area_top_pane_ParamLimits

0x0360,	// (0x0009d81b) area_top_pane

0xa2d4,	// (0x000a778f) call_video_uplink_pane_ParamLimits

0xa2d4,	// (0x000a778f) call_video_uplink_pane

0x03ee,	// (0x0009d8a9) main_pane_ParamLimits

0x03ee,	// (0x0009d8a9) main_pane

0xd89b,	// (0x000aad56) context_pane

0x3df4,	// (0x000a12af) navi_pane

0x3e26,	// (0x000a12e1) popup_cale_events_window_ParamLimits

0x3e26,	// (0x000a12e1) popup_cale_events_window

0xd8ae,	// (0x000aad69) popup_mup_playback_window

0x3e3e,	// (0x000a12f9) signal_pane

0xa538,	// (0x000a79f3) main_browser_pane

0xa769,	// (0x000a7c24) main_burst_pane

0x3b42,	// (0x000a0ffd) main_calc_pane

0xd881,	// (0x000aad3c) main_cale_day_pane

0x3b56,	// (0x000a1011) main_cale_month_pane

0xd881,	// (0x000aad3c) main_cale_week_pane

0xa769,	// (0x000a7c24) main_call_pane

0x0969,	// (0x0009de24) main_call_poc_pane

0xa769,	// (0x000a7c24) main_camera_pane

0xa769,	// (0x000a7c24) main_chi_dic_pane

0xb5c5,	// (0x000a8a80) main_clock_pane

0x0969,	// (0x0009de24) main_fmradio_pane

0xa769,	// (0x000a7c24) main_graph_messa_pane

0x0969,	// (0x0009de24) main_help_pane

0xa538,	// (0x000a79f3) main_im_pane

0xa451,	// (0x000a790c) main_image_pane_ParamLimits

0xa451,	// (0x000a790c) main_image_pane

0x0969,	// (0x0009de24) main_location2_pane

0xa769,	// (0x000a7c24) main_location_pane

0xa451,	// (0x000a790c) main_messa_pane

0x0969,	// (0x0009de24) main_mp2_pane

0xa769,	// (0x000a7c24) main_mp_pane

0x0969,	// (0x0009de24) main_msg_pane

0x0969,	// (0x0009de24) main_mup_eq_pane

0x0969,	// (0x0009de24) main_mup_pane

0xa538,	// (0x000a79f3) main_notes_pane

0x0969,	// (0x0009de24) main_pec_pane

0x0969,	// (0x0009de24) main_phob_pane

0x0969,	// (0x0009de24) main_pinb_pane

0x0969,	// (0x0009de24) main_postcard_pane

0x0969,	// (0x0009de24) main_qdial_pane

0xa769,	// (0x000a7c24) main_skin_pane

0x0969,	// (0x0009de24) main_smil2_pane

0xa769,	// (0x000a7c24) main_smil_pane

0xa769,	// (0x000a7c24) main_video_pane

0xa769,	// (0x000a7c24) main_video_tele_pane

0xa451,	// (0x000a790c) main_viewer_pane_ParamLimits

0xa451,	// (0x000a790c) main_viewer_pane

0xa769,	// (0x000a7c24) main_vorec_pane

0x3ba8,	// (0x000a1063) popup_blid_sat_info_window_ParamLimits

0x3ba8,	// (0x000a1063) popup_blid_sat_info_window

0x3c00,	// (0x000a10bb) popup_dyc_status_message_window_ParamLimits

0x3c00,	// (0x000a10bb) popup_dyc_status_message_window

0x3c1a,	// (0x000a10d5) popup_grid_large_graphic_window_ParamLimits

0x3c1a,	// (0x000a10d5) popup_grid_large_graphic_window

0x3cd6,	// (0x000a1191) popup_loc_request_window_ParamLimits

0x3cd6,	// (0x000a1191) popup_loc_request_window

0x3dcc,	// (0x000a1287) popup_wml_address_window_ParamLimits

0x3dcc,	// (0x000a1287) popup_wml_address_window

0x397c,	// (0x000a0e37) call_muted_g1

0x3631,	// (0x000a0aec) popup_call_audio_conf_window_ParamLimits

0x3631,	// (0x000a0aec) popup_call_audio_conf_window

0x3990,	// (0x000a0e4b) popup_call_audio_first_window_ParamLimits

0x3990,	// (0x000a0e4b) popup_call_audio_first_window

0x3a06,	// (0x000a0ec1) popup_call_audio_in_window_ParamLimits

0x3a06,	// (0x000a0ec1) popup_call_audio_in_window

0x3a42,	// (0x000a0efd) popup_call_audio_out_window_ParamLimits

0x3a42,	// (0x000a0efd) popup_call_audio_out_window

0x3a7c,	// (0x000a0f37) popup_call_audio_second_window_ParamLimits

0x3a7c,	// (0x000a0f37) popup_call_audio_second_window

0x3ad2,	// (0x000a0f8d) popup_call_audio_wait_window_ParamLimits

0x3ad2,	// (0x000a0f8d) popup_call_audio_wait_window

0x3b07,	// (0x000a0fc2) popup_number_entry_window_ParamLimits

0x3b07,	// (0x000a0fc2) popup_number_entry_window

0xe279,	// (0x000ab734) bg_popup_call_pane_cp05_ParamLimits

0xe279,	// (0x000ab734) bg_popup_call_pane_cp05

0xe299,	// (0x000ab754) popup_number_entry_window_t1

0xe2ac,	// (0x000ab767) popup_number_entry_window_t2

0xe2be,	// (0x000ab779) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000ac585) popup_number_entry_window_t

0xe2d0,	// (0x000ab78b) text_title_cp2

0xe2e3,	// (0x000ab79e) bg_popup_call_pane_cp_ParamLimits

0xe2e3,	// (0x000ab79e) bg_popup_call_pane_cp

0x05aa,	// (0x0009da65) call_thumbnail_pane

0x05b2,	// (0x0009da6d) popup_call_audio_in_window_g1_ParamLimits

0x05b2,	// (0x0009da6d) popup_call_audio_in_window_g1

0x05be,	// (0x0009da79) popup_call_audio_in_window_g2_ParamLimits

0x05be,	// (0x0009da79) popup_call_audio_in_window_g2

0x05ca,	// (0x0009da85) popup_call_audio_in_window_g3_ParamLimits

0x05ca,	// (0x0009da85) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000ac58e) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000ac58e) popup_call_audio_in_window_g

0x05d6,	// (0x0009da91) popup_call_audio_in_window_t1_ParamLimits

0x05d6,	// (0x0009da91) popup_call_audio_in_window_t1

0x05f2,	// (0x0009daad) popup_call_audio_in_window_t2_ParamLimits

0x05f2,	// (0x0009daad) popup_call_audio_in_window_t2

0x060e,	// (0x0009dac9) popup_call_audio_in_window_t3_ParamLimits

0x060e,	// (0x0009dac9) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000ac595) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000ac595) popup_call_audio_in_window_t

0xe2e3,	// (0x000ab79e) bg_popup_call_pane_cp01_ParamLimits

0xe2e3,	// (0x000ab79e) bg_popup_call_pane_cp01

0x05aa,	// (0x0009da65) call_thumbnail_pane_cp02

0x0621,	// (0x0009dadc) call_type_pane_cp022

0x0629,	// (0x0009dae4) popup_call_audio_out_window_g1_ParamLimits

0x0629,	// (0x0009dae4) popup_call_audio_out_window_g1

0x063b,	// (0x0009daf6) popup_call_audio_out_window_g2_ParamLimits

0x063b,	// (0x0009daf6) popup_call_audio_out_window_g2

0x0647,	// (0x0009db02) popup_call_audio_out_window_g3_ParamLimits

0x0647,	// (0x0009db02) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000ac59c) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000ac59c) popup_call_audio_out_window_g

0x0659,	// (0x0009db14) popup_call_audio_out_window_t1_ParamLimits

0x0659,	// (0x0009db14) popup_call_audio_out_window_t1

0x0671,	// (0x0009db2c) popup_call_audio_out_window_t2_ParamLimits

0x0671,	// (0x0009db2c) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000ac5a3) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000ac5a3) popup_call_audio_out_window_t

0x0686,	// (0x0009db41) bg_popup_call_pane_ParamLimits

0x0686,	// (0x0009db41) bg_popup_call_pane

0x070a,	// (0x0009dbc5) call_thumbnail_pane_cp_ParamLimits

0x070a,	// (0x0009dbc5) call_thumbnail_pane_cp

0x072e,	// (0x0009dbe9) call_type_pane_cp01_ParamLimits

0x072e,	// (0x0009dbe9) call_type_pane_cp01

0x0772,	// (0x0009dc2d) popup_call_audio_first_window_g1_ParamLimits

0x0772,	// (0x0009dc2d) popup_call_audio_first_window_g1

0x07be,	// (0x0009dc79) popup_call_audio_first_window_g2_ParamLimits

0x07be,	// (0x0009dc79) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000ac5a8) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000ac5a8) popup_call_audio_first_window_g

0x0802,	// (0x0009dcbd) popup_call_audio_first_window_t1_ParamLimits

0x0802,	// (0x0009dcbd) popup_call_audio_first_window_t1

0x08ae,	// (0x0009dd69) popup_call_audio_first_window_t4_ParamLimits

0x08ae,	// (0x0009dd69) popup_call_audio_first_window_t4

0x093a,	// (0x0009ddf5) popup_call_audio_first_window_t5_ParamLimits

0x093a,	// (0x0009ddf5) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000ac5ad) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000ac5ad) popup_call_audio_first_window_t

0x0969,	// (0x0009de24) bg_popup_call_pane_cp02

0x0973,	// (0x0009de2e) call_type_pane_cp023

0x097b,	// (0x0009de36) popup_call_audio_wait_window_g1

0x0983,	// (0x0009de3e) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000ac5b4) popup_call_audio_wait_window_g

0x098b,	// (0x0009de46) popup_call_audio_wait_window_t3

0x0999,	// (0x0009de54) bg_popup_call_pane_cp03_ParamLimits

0x0999,	// (0x0009de54) bg_popup_call_pane_cp03

0x09f9,	// (0x0009deb4) call_thumbnail_pane_cp011_ParamLimits

0x09f9,	// (0x0009deb4) call_thumbnail_pane_cp011

0x0a05,	// (0x0009dec0) call_type_pane_cp034_ParamLimits

0x0a05,	// (0x0009dec0) call_type_pane_cp034

0x0a41,	// (0x0009defc) popup_call_audio_second_window_g1_ParamLimits

0x0a41,	// (0x0009defc) popup_call_audio_second_window_g1

0xa30a,	// (0x000a77c5) popup_call_audio_second_window_g2_ParamLimits

0xa30a,	// (0x000a77c5) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000ac5b9) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000ac5b9) popup_call_audio_second_window_g

0xa346,	// (0x000a7801) popup_call_audio_second_window_t1_ParamLimits

0xa346,	// (0x000a7801) popup_call_audio_second_window_t1

0xa3c7,	// (0x000a7882) popup_call_audio_second_window_t2_ParamLimits

0xa3c7,	// (0x000a7882) popup_call_audio_second_window_t2

0xa3fd,	// (0x000a78b8) popup_call_audio_second_window_t3_ParamLimits

0xa3fd,	// (0x000a78b8) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000ac5be) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000ac5be) popup_call_audio_second_window_t

0x0969,	// (0x0009de24) bg_popup_call_pane_cp04

0xa433,	// (0x000a78ee) list_conf_pane

0xa43b,	// (0x000a78f6) popup_call_audio_conf_window_t1

0xa449,	// (0x000a7904) call_thumbnail_pane_g1

0xa451,	// (0x000a790c) bg_pinb_pane_ParamLimits

0xa451,	// (0x000a790c) bg_pinb_pane

0xa45f,	// (0x000a791a) find_pinb_pane

0xa468,	// (0x000a7923) listscroll_pinb_pane_ParamLimits

0xa468,	// (0x000a7923) listscroll_pinb_pane

0xa477,	// (0x000a7932) pinb_bg_pane_g1

0x0a7d,	// (0x0009df38) pinb_bg_pane_g2

0x0a89,	// (0x0009df44) pinb_bg_pane_g3

0x0a95,	// (0x0009df50) pinb_bg_pane_g4

0x0aa1,	// (0x0009df5c) pinb_bg_pane_g5

0x0aad,	// (0x0009df68) pinb_bg_pane_g6

0x0ab8,	// (0x0009df73) pinb_bg_pane_g7

0x0ac3,	// (0x0009df7e) pinb_bg_pane_g8

0x0ace,	// (0x0009df89) pinb_bg_pane_g9

0x0ad8,	// (0x0009df93) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x000ac5c5) pinb_bg_pane_g

0x0af5,	// (0x0009dfb0) grid_pinb_pane

0x0afe,	// (0x0009dfb9) list_pinb_pane

0x0b07,	// (0x0009dfc2) scroll_pane_cp01_ParamLimits

0x0b07,	// (0x0009dfc2) scroll_pane_cp01

0xa481,	// (0x000a793c) find_pinb_pane_g1_ParamLimits

0xa481,	// (0x000a793c) find_pinb_pane_g1

0xa499,	// (0x000a7954) find_pinb_pane_t1

0xa4ab,	// (0x000a7966) find_pinb_pane_t2

0x0001,

0xf124,	// (0x000ac5df) find_pinb_pane_t

0xa4c0,	// (0x000a797b) input_focus_pane_cp01_ParamLimits

0xa4c0,	// (0x000a797b) input_focus_pane_cp01

0x0b19,	// (0x0009dfd4) cell_pinb_pane_ParamLimits

0x0b19,	// (0x0009dfd4) cell_pinb_pane

0x0b42,	// (0x0009dffd) cell_pinb_pane_g1_ParamLimits

0x0b42,	// (0x0009dffd) cell_pinb_pane_g1

0x0b52,	// (0x0009e00d) cell_pinb_pane_g2_ParamLimits

0x0b52,	// (0x0009e00d) cell_pinb_pane_g2

0xa4cc,	// (0x000a7987) cell_pinb_pane_g3_ParamLimits

0xa4cc,	// (0x000a7987) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x000ac5e4) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x000ac5e4) cell_pinb_pane_g

0x0969,	// (0x0009de24) grid_highlight_pane_cp01

0x0b5e,	// (0x0009e019) list_pinb_item_pane_ParamLimits

0x0b5e,	// (0x0009e019) list_pinb_item_pane

0x0969,	// (0x0009de24) list_highlight_pane_cp02

0x0b70,	// (0x0009e02b) list_pinb_item_pane_g1_ParamLimits

0x0b70,	// (0x0009e02b) list_pinb_item_pane_g1

0x0b7d,	// (0x0009e038) list_pinb_item_pane_g2_ParamLimits

0x0b7d,	// (0x0009e038) list_pinb_item_pane_g2

0x0b89,	// (0x0009e044) list_pinb_item_pane_g3_ParamLimits

0x0b89,	// (0x0009e044) list_pinb_item_pane_g3

0x0b9a,	// (0x0009e055) list_pinb_item_pane_g4_ParamLimits

0x0b9a,	// (0x0009e055) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x000ac5eb) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x000ac5eb) list_pinb_item_pane_g

0x0ba6,	// (0x0009e061) list_pinb_item_pane_t1_ParamLimits

0x0ba6,	// (0x0009e061) list_pinb_item_pane_t1

0x0bdb,	// (0x0009e096) calc_display_pane

0x0c03,	// (0x0009e0be) calc_paper_pane

0x0c26,	// (0x0009e0e1) grid_calc_pane

0x0969,	// (0x0009de24) bg_list_pane_cp01

0x0c54,	// (0x0009e10f) clock_g1

0x0c5c,	// (0x0009e117) clock_g2

0x0001,

0xf139,	// (0x000ac5f4) clock_g

0x0c64,	// (0x0009e11f) clock_t1_ParamLimits

0x0c64,	// (0x0009e11f) clock_t1

0x0c79,	// (0x0009e134) clock_t2_ParamLimits

0x0c79,	// (0x0009e134) clock_t2

0x0c8b,	// (0x0009e146) clock_t3_ParamLimits

0x0c8b,	// (0x0009e146) clock_t3

0x0c9d,	// (0x0009e158) clock_t4_ParamLimits

0x0c9d,	// (0x0009e158) clock_t4

0x0caf,	// (0x0009e16a) clock_t5_ParamLimits

0x0caf,	// (0x0009e16a) clock_t5

0x0cc4,	// (0x0009e17f) clock_t6_ParamLimits

0x0cc4,	// (0x0009e17f) clock_t6

0x0cd6,	// (0x0009e191) clock_t7_ParamLimits

0x0cd6,	// (0x0009e191) clock_t7

0x0ce8,	// (0x0009e1a3) clock_t8_ParamLimits

0x0ce8,	// (0x0009e1a3) clock_t8

0x0cfc,	// (0x0009e1b7) clock_t9_ParamLimits

0x0cfc,	// (0x0009e1b7) clock_t9

0x0008,

0xf13e,	// (0x000ac5f9) clock_t_ParamLimits

0xf13e,	// (0x000ac5f9) clock_t

0xa4e0,	// (0x000a799b) popup_clock_analogue_window_cp02

0xa4e0,	// (0x000a799b) popup_clock_digital_window_cp01

0xa4e8,	// (0x000a79a3) listscroll_help_pane

0x0969,	// (0x0009de24) phob_pre_status_pane

0xa4f2,	// (0x000a79ad) grid_qdial_pane

0xa451,	// (0x000a790c) listscroll_mce_pane

0xa451,	// (0x000a790c) bg_notes_pane

0xa4fc,	// (0x000a79b7) list_notes_pane

0x0d10,	// (0x0009e1cb) scroll_pane_cp06

0xa50a,	// (0x000a79c5) bg_calc_paper_pane

0xa51e,	// (0x000a79d9) list_calc_pane

0xa538,	// (0x000a79f3) bg_calc_display_pane

0x0d24,	// (0x0009e1df) calc_display_pane_t1

0x0d36,	// (0x0009e1f1) calc_display_pane_t2

0xa544,	// (0x000a79ff) calc_display_pane_t3

0x0002,

0xf151,	// (0x000ac60c) calc_display_pane_t

0x0d48,	// (0x0009e203) cell_calc_pane_ParamLimits

0x0d48,	// (0x0009e203) cell_calc_pane

0xa556,	// (0x000a7a11) bg_calc_paper_pane_g1

0xa562,	// (0x000a7a1d) bg_calc_paper_pane_g2

0xa56e,	// (0x000a7a29) bg_calc_paper_pane_g3

0xa57a,	// (0x000a7a35) bg_calc_paper_pane_g4

0xa586,	// (0x000a7a41) bg_calc_paper_pane_g5

0x0d7d,	// (0x0009e238) bg_calc_paper_pane_g6

0x0d8c,	// (0x0009e247) bg_calc_paper_pane_g7

0x0d9b,	// (0x0009e256) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000ac613) bg_calc_paper_pane_g

0x0dae,	// (0x0009e269) calc_bg_paper_pane_g9

0x0dc1,	// (0x0009e27c) list_calc_item_pane_ParamLimits

0x0dc1,	// (0x0009e27c) list_calc_item_pane

0xa592,	// (0x000a7a4d) list_calc_item_pane_g1

0xa59f,	// (0x000a7a5a) list_calc_item_pane_t1_ParamLimits

0xa59f,	// (0x000a7a5a) list_calc_item_pane_t1

0x0dd6,	// (0x0009e291) list_calc_item_pane_t2_ParamLimits

0x0dd6,	// (0x0009e291) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000ac624) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000ac624) list_calc_item_pane_t

0xa5b1,	// (0x000a7a6c) cell_calc_pane_g1

0xa5bb,	// (0x000a7a76) grid_highlight_pane_cp02

0x0e08,	// (0x0009e2c3) bg_calc_display_pane_g1

0x0e11,	// (0x0009e2cc) bg_calc_display_pane_g2

0x0e1b,	// (0x0009e2d6) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000ac62e) bg_calc_display_pane_g

0x0e24,	// (0x0009e2df) cell_qdial_pane_ParamLimits

0x0e24,	// (0x0009e2df) cell_qdial_pane

0x0e38,	// (0x0009e2f3) cell_qdial_pane_g1_ParamLimits

0x0e38,	// (0x0009e2f3) cell_qdial_pane_g1

0x0e4e,	// (0x0009e309) cell_qdial_pane_g2_ParamLimits

0x0e4e,	// (0x0009e309) cell_qdial_pane_g2

0xa5dd,	// (0x000a7a98) cell_qdial_pane_g3_ParamLimits

0xa5dd,	// (0x000a7a98) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000ac635) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000ac635) cell_qdial_pane_g

0x0e75,	// (0x0009e330) cell_qdial_pane_t1_ParamLimits

0x0e75,	// (0x0009e330) cell_qdial_pane_t1

0x0e8d,	// (0x0009e348) cell_qdial_pane_t2_ParamLimits

0x0e8d,	// (0x0009e348) cell_qdial_pane_t2

0x0ea0,	// (0x0009e35b) cell_qdial_pane_t3_ParamLimits

0x0ea0,	// (0x0009e35b) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000ac63e) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000ac63e) cell_qdial_pane_t

0x0969,	// (0x0009de24) grid_highlight_pane_cp04

0xa5e9,	// (0x000a7aa4) thumbnail_qdial_pane_ParamLimits

0xa5e9,	// (0x000a7aa4) thumbnail_qdial_pane

0xa645,	// (0x000a7b00) list_help_pane

0xa64e,	// (0x000a7b09) scroll_pane_cp02

0x0eb3,	// (0x0009e36e) help_list_pane_t1_ParamLimits

0x0eb3,	// (0x0009e36e) help_list_pane_t1

0xa657,	// (0x000a7b12) bg_notes_pane_g2

0xa65f,	// (0x000a7b1a) bg_notes_pane_g3

0xa667,	// (0x000a7b22) notes_bg_pane_g1

0xa66f,	// (0x000a7b2a) notes_bg_pane_g4

0xa677,	// (0x000a7b32) notes_bg_pane_g5

0xa67f,	// (0x000a7b3a) notes_bg_pane_g6

0xa687,	// (0x000a7b42) notes_bg_pane_g7

0xa68f,	// (0x000a7b4a) notes_bg_pane_g8

0xa697,	// (0x000a7b52) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000ac65c) notes_bg_pane_g

0x0ed0,	// (0x0009e38b) list_notes_text_pane_ParamLimits

0x0ed0,	// (0x0009e38b) list_notes_text_pane

0xa69f,	// (0x000a7b5a) list_notes_text_pane_g1

0x0ee5,	// (0x0009e3a0) list_notes_text_pane_t1

0x0ef3,	// (0x0009e3ae) listscroll_cale_week_pane

0x0f1f,	// (0x0009e3da) bg_cale_heading_pane

0xa6c2,	// (0x000a7b7d) bg_cale_pane_cp01

0x0f37,	// (0x0009e3f2) cale_week_corner_pane

0x0f56,	// (0x0009e411) cale_week_day_heading_pane

0x0f73,	// (0x0009e42e) cale_week_scroll_pane_g1

0x0f86,	// (0x0009e441) cale_week_scroll_pane_g2

0x0f9e,	// (0x0009e459) cale_week_scroll_pane_g3

0x0fb6,	// (0x0009e471) cale_week_scroll_pane_g4

0x0fce,	// (0x0009e489) cale_week_scroll_pane_g5

0x0fee,	// (0x0009e4a9) cale_week_scroll_pane_g6

0x100e,	// (0x0009e4c9) cale_week_scroll_pane_g7

0x102e,	// (0x0009e4e9) cale_week_scroll_pane_g8

0x1052,	// (0x0009e50d) cale_week_scroll_pane_g9

0x106a,	// (0x0009e525) cale_week_scroll_pane_g10

0x1082,	// (0x0009e53d) cale_week_scroll_pane_g11

0x109a,	// (0x0009e555) cale_week_scroll_pane_g12

0x10b2,	// (0x0009e56d) cale_week_scroll_pane_g13

0x10b2,	// (0x0009e56d) cale_week_scroll_pane_g14

0x10b2,	// (0x0009e56d) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000ac66b) cale_week_scroll_pane_g

0x10ee,	// (0x0009e5a9) cale_week_time_pane

0x1112,	// (0x0009e5cd) grid_cale_week_pane

0xa6f1,	// (0x000a7bac) scroll_pane_cp08

0x1138,	// (0x0009e5f3) cell_cale_week_pane_ParamLimits

0x1138,	// (0x0009e5f3) cell_cale_week_pane

0x11c6,	// (0x0009e681) cale_week_day_heading_pane_t1

0x11f0,	// (0x0009e6ab) cale_week_day_heading_pane_t2

0x121f,	// (0x0009e6da) cale_week_day_heading_pane_t3

0x124e,	// (0x0009e709) cale_week_day_heading_pane_t4

0x127d,	// (0x0009e738) cale_week_day_heading_pane_t5

0x12b4,	// (0x0009e76f) cale_week_day_heading_pane_t6

0x12eb,	// (0x0009e7a6) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000ac68c) cale_week_day_heading_pane_t

0xa70e,	// (0x000a7bc9) bg_cale_side_pane

0x1315,	// (0x0009e7d0) cale_week_time_pane_t1

0x132f,	// (0x0009e7ea) cale_week_time_pane_t2

0x1349,	// (0x0009e804) cale_week_time_pane_t3

0x1363,	// (0x0009e81e) cale_week_time_pane_t4

0x137d,	// (0x0009e838) cale_week_time_pane_t5

0x1397,	// (0x0009e852) cale_week_time_pane_t6

0x13b1,	// (0x0009e86c) cale_week_time_pane_t7

0x13cb,	// (0x0009e886) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000ac69b) cale_week_time_pane_t

0x13e5,	// (0x0009e8a0) cell_cale_week_pane_g2

0x1404,	// (0x0009e8bf) cell_cale_week_pane_g3_ParamLimits

0x1404,	// (0x0009e8bf) cell_cale_week_pane_g3

0xa71c,	// (0x000a7bd7) grid_highlight_pane_cp07

0xa724,	// (0x000a7bdf) listscroll_gms_pane

0xa72e,	// (0x000a7be9) grid_gms_pane

0xa737,	// (0x000a7bf2) listscroll_gms_pane_g1

0xa73f,	// (0x000a7bfa) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000ac6ac) listscroll_gms_pane_g

0x141c,	// (0x0009e8d7) scroll_pane_cp010

0x1427,	// (0x0009e8e2) cell_gms_pane_ParamLimits

0x1427,	// (0x0009e8e2) cell_gms_pane

0x143a,	// (0x0009e8f5) cell_gms_pane_g1

0xa747,	// (0x000a7c02) cell_gms_pane_g2

0xa74f,	// (0x000a7c0a) cell_gms_pane_g3

0xa758,	// (0x000a7c13) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000ac6b1) cell_gms_pane_g

0xa761,	// (0x000a7c1c) grid_highlight_pane_cp09

0x3926,	// (0x000a0de1) phob_pre_status_pane_g1

0x392e,	// (0x000a0de9) phob_pre_status_pane_g2

0x3936,	// (0x000a0df1) phob_pre_status_pane_g3

0x393e,	// (0x000a0df9) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x000aca9c) phob_pre_status_pane_g

0x394e,	// (0x000a0e09) phob_pre_status_pane_t1

0x395c,	// (0x000a0e17) phob_pre_status_pane_t2

0x396c,	// (0x000a0e27) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x000acaa7) phob_pre_status_pane_t

0xa769,	// (0x000a7c24) bg_list_pane_cp05

0x144a,	// (0x0009e905) grid_vorec_pane

0x1452,	// (0x0009e90d) vorec_t1

0x1460,	// (0x0009e91b) vorec_t2

0x146e,	// (0x0009e929) vorec_t3

0x147c,	// (0x0009e937) vorec_t4

0xa25e,	// (0x000a7719) vorec_t5

0xa26c,	// (0x000a7727) vorec_t6

0x0004,

0xf1ff,	// (0x000ac6ba) vorec_t

0xa27a,	// (0x000a7735) wait_bar_pane_cp01

0x1498,	// (0x0009e953) cell_vorec_pane_ParamLimits

0x1498,	// (0x0009e953) cell_vorec_pane

0xa771,	// (0x000a7c2c) cell_vorec_pane_g1

0x0969,	// (0x0009de24) grid_highlight_pane_cp05

0x14c0,	// (0x0009e97b) cams_zoom_pane

0x14cf,	// (0x0009e98a) image_vga_pane

0x14e9,	// (0x0009e9a4) main_camera_pane_g1

0x14fb,	// (0x0009e9b6) main_camera_pane_g2

0x150b,	// (0x0009e9c6) main_camera_pane_g3

0x151b,	// (0x0009e9d6) main_camera_pane_g4

0x152b,	// (0x0009e9e6) main_camera_pane_g5

0x153b,	// (0x0009e9f6) main_camera_pane_g6

0x154d,	// (0x0009ea08) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000ac6c5) main_camera_pane_g

0x155d,	// (0x0009ea18) main_camera_pane_t1

0x1573,	// (0x0009ea2e) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000ac6d6) main_camera_pane_t

0x15ad,	// (0x0009ea68) cams_zoom_pane_cp_ParamLimits

0x15ad,	// (0x0009ea68) cams_zoom_pane_cp

0x15d5,	// (0x0009ea90) image_cif_pane_ParamLimits

0x15d5,	// (0x0009ea90) image_cif_pane

0x160b,	// (0x0009eac6) image_subqcif_pane

0x1613,	// (0x0009eace) main_video_pane_g1_ParamLimits

0x1613,	// (0x0009eace) main_video_pane_g1

0x1637,	// (0x0009eaf2) main_video_pane_g2_ParamLimits

0x1637,	// (0x0009eaf2) main_video_pane_g2

0x166b,	// (0x0009eb26) main_video_pane_g3_ParamLimits

0x166b,	// (0x0009eb26) main_video_pane_g3

0x1699,	// (0x0009eb54) main_video_pane_g4_ParamLimits

0x1699,	// (0x0009eb54) main_video_pane_g4

0x16c7,	// (0x0009eb82) main_video_pane_g5_ParamLimits

0x16c7,	// (0x0009eb82) main_video_pane_g5

0xa787,	// (0x000a7c42) main_video_pane_g6_ParamLimits

0xa787,	// (0x000a7c42) main_video_pane_g6

0x0006,

0xf220,	// (0x000ac6db) main_video_pane_g_ParamLimits

0xf220,	// (0x000ac6db) main_video_pane_g

0x16f0,	// (0x0009ebab) main_video_pane_t1_ParamLimits

0x16f0,	// (0x0009ebab) main_video_pane_t1

0xa7a1,	// (0x000a7c5c) cams_zoom_pane_g1

0xa7aa,	// (0x000a7c65) cams_zoom_pane_g2

0xa7b3,	// (0x000a7c6e) cams_zoom_pane_g3

0xa7bc,	// (0x000a7c77) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000ac6ea) cams_zoom_pane_g

0x174d,	// (0x0009ec08) grid_cams_pane

0x1767,	// (0x0009ec22) linegrid_cams_pane

0x177b,	// (0x0009ec36) cell_cams_pane_ParamLimits

0x177b,	// (0x0009ec36) cell_cams_pane

0xa7c5,	// (0x000a7c80) cams_burst_image_pane

0xa7cd,	// (0x000a7c88) cell_cams_pane_g1

0x0969,	// (0x0009de24) grid_highlight_pane_cp03

0xa5b1,	// (0x000a7a6c) mp_bg_pane_g1

0x0969,	// (0x0009de24) bg_list_pane_cp03

0xd7a6,	// (0x000aac61) bg_mp_pane

0xd7ae,	// (0x000aac69) grid_mp_pane

0xd7b6,	// (0x000aac71) media_player_g1

0xd7be,	// (0x000aac79) media_player_t1

0xd7cc,	// (0x000aac87) media_player_t2

0xd7da,	// (0x000aac95) media_player_t3

0xd7e8,	// (0x000aaca3) media_player_t4

0xd7f6,	// (0x000aacb1) media_player_t5

0xd804,	// (0x000aacbf) media_player_t6

0xd812,	// (0x000aaccd) media_player_t7

0x0006,

0xf5cb,	// (0x000aca86) media_player_t

0xd820,	// (0x000aacdb) wait_bar_pane_cp02

0xf5b0,	// (0x000aca6b) main_usb_pane_t

0x391d,	// (0x000a0dd8) cell_mp_pane

0xa5b1,	// (0x000a7a6c) cell_mp_pane_g1

0x0969,	// (0x0009de24) grid_highlight_pane_cp06

0xa7d5,	// (0x000a7c90) grid_skin_colour_pane

0xa7dd,	// (0x000a7c98) list_highlight_pane_cp03

0x1894,	// (0x0009ed4f) skin_g1

0xa7e5,	// (0x000a7ca0) skin_t1

0xa7f4,	// (0x000a7caf) skin_t2

0x0001,

0xf264,	// (0x000ac71f) skin_t

0x189c,	// (0x0009ed57) cell_skin_colour_pane_ParamLimits

0x189c,	// (0x0009ed57) cell_skin_colour_pane

0xa802,	// (0x000a7cbd) cell_skin_colour_pane_g1

0x1915,	// (0x0009edd0) call_video_g1_ParamLimits

0x1915,	// (0x0009edd0) call_video_g1

0x1931,	// (0x0009edec) call_video_g2_ParamLimits

0x1931,	// (0x0009edec) call_video_g2

0x0001,

0xf269,	// (0x000ac724) call_video_g_ParamLimits

0xf269,	// (0x000ac724) call_video_g

0x1983,	// (0x0009ee3e) call_video_uplink_pane_cp1_ParamLimits

0x1983,	// (0x0009ee3e) call_video_uplink_pane_cp1

0xa814,	// (0x000a7ccf) call_video_uplink_pane_cp2

0x1a22,	// (0x0009eedd) video_down_crop_pane_ParamLimits

0x1a22,	// (0x0009eedd) video_down_crop_pane

0x1b19,	// (0x0009efd4) video_down_pane_ParamLimits

0x1b19,	// (0x0009efd4) video_down_pane

0xa81c,	// (0x000a7cd7) video_down_subqcif_pane_ParamLimits

0xa81c,	// (0x000a7cd7) video_down_subqcif_pane

0xa834,	// (0x000a7cef) video_down_subqcif_pane_cp_ParamLimits

0xa834,	// (0x000a7cef) video_down_subqcif_pane_cp

0xa85a,	// (0x000a7d15) im_reading_pane_ParamLimits

0xa85a,	// (0x000a7d15) im_reading_pane

0x1c27,	// (0x0009f0e2) im_writing_pane_ParamLimits

0x1c27,	// (0x0009f0e2) im_writing_pane

0x1c3d,	// (0x0009f0f8) im_reading_pane_t1

0xa874,	// (0x000a7d2f) list_im_pane

0xa885,	// (0x000a7d40) scroll_pane_cp07

0x1c76,	// (0x0009f131) im_writing_pane_t1_ParamLimits

0x1c76,	// (0x0009f131) im_writing_pane_t1

0xa89e,	// (0x000a7d59) im_writing_pane_t2_ParamLimits

0xa89e,	// (0x000a7d59) im_writing_pane_t2

0x0001,

0xf273,	// (0x000ac72e) im_writing_pane_t_ParamLimits

0xf273,	// (0x000ac72e) im_writing_pane_t

0x0969,	// (0x0009de24) input_focus_pane_cp04

0x0969,	// (0x0009de24) input_focus_pane_cp05

0x1c8b,	// (0x0009f146) list_im_single_pane_ParamLimits

0x1c8b,	// (0x0009f146) list_im_single_pane

0x1c9f,	// (0x0009f15a) list_single_im_pane_t1

0x38dd,	// (0x000a0d98) blid_accuracy_pane

0x38e5,	// (0x000a0da0) blid_compass_pane

0x38ef,	// (0x000a0daa) main_location_t1

0x38ff,	// (0x000a0dba) main_location_t2

0x390f,	// (0x000a0dca) main_location_t3

0x0002,

0xf5da,	// (0x000aca95) main_location_t

0x0969,	// (0x0009de24) aid_levels_location

0xa5b1,	// (0x000a7a6c) blid_accuracy_pane_g1

0xa5b1,	// (0x000a7a6c) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000ac790) blid_accuracy_pane_g

0xaf61,	// (0x000a841c) wml_content_pane

0xaf9f,	// (0x000a845a) wml_button_pane_ParamLimits

0xaf9f,	// (0x000a845a) wml_button_pane

0x1cae,	// (0x0009f169) wml_list_single_large_pane_ParamLimits

0x1cae,	// (0x0009f169) wml_list_single_large_pane

0x1cc3,	// (0x0009f17e) wml_list_single_medium_pane_ParamLimits

0x1cc3,	// (0x0009f17e) wml_list_single_medium_pane

0x1cd9,	// (0x0009f194) wml_list_single_small_pane_ParamLimits

0x1cd9,	// (0x0009f194) wml_list_single_small_pane

0xafb3,	// (0x000a846e) wml_selection_box_pane_ParamLimits

0xafb3,	// (0x000a846e) wml_selection_box_pane

0xafc6,	// (0x000a8481) wml_list_single_pane_t1

0xafd5,	// (0x000a8490) wml_list_single_medium_pane_t1

0xafe4,	// (0x000a849f) wml_list_single_large_pane_t1

0xaff3,	// (0x000a84ae) input_focus_pane_cp02_ParamLimits

0xaff3,	// (0x000a84ae) input_focus_pane_cp02

0xb006,	// (0x000a84c1) wml_selection_box_pane_g1

0xb00f,	// (0x000a84ca) wml_selection_box_pane_t1_ParamLimits

0xb00f,	// (0x000a84ca) wml_selection_box_pane_t1

0xa451,	// (0x000a790c) bg_wml_button_pane_ParamLimits

0xa451,	// (0x000a790c) bg_wml_button_pane

0xb027,	// (0x000a84e2) wml_button_pane_g1

0xb02f,	// (0x000a84ea) wml_button_pane_t1

0xb027,	// (0x000a84e2) wml_button_bg_pane_g1

0xb03f,	// (0x000a84fa) wml_button_bg_pane_g2

0xb047,	// (0x000a8502) wml_button_bg_pane_g3

0xb04f,	// (0x000a850a) wml_button_bg_pane_g4

0xb057,	// (0x000a8512) wml_button_bg_pane_g5

0xb05f,	// (0x000a851a) wml_button_bg_pane_g6

0xb067,	// (0x000a8522) wml_button_bg_pane_g7

0xb06f,	// (0x000a852a) wml_button_bg_pane_g8

0xb077,	// (0x000a8532) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000ac733) wml_button_bg_pane_g

0x1cf1,	// (0x0009f1ac) bg_list_pane_cp02

0xb07f,	// (0x000a853a) mce_header_pane_ParamLimits

0xb07f,	// (0x000a853a) mce_header_pane

0xb095,	// (0x000a8550) mce_icon_pane

0xb095,	// (0x000a8550) mce_image_pane

0xb09e,	// (0x000a8559) mce_text_pane_ParamLimits

0xb09e,	// (0x000a8559) mce_text_pane

0x1cf9,	// (0x0009f1b4) scroll_pane_cp03

0xaf97,	// (0x000a8452) scroll_pane_cp04

0xb0b1,	// (0x000a856c) scroll_pane_cp05_ParamLimits

0xb0b1,	// (0x000a856c) scroll_pane_cp05

0x1d03,	// (0x0009f1be) mce_header_field_pane_ParamLimits

0x1d03,	// (0x0009f1be) mce_header_field_pane

0x1d1a,	// (0x0009f1d5) mce_header_field_pane_2_ParamLimits

0x1d1a,	// (0x0009f1d5) mce_header_field_pane_2

0x1d30,	// (0x0009f1eb) mce_header_field_pane_3

0x1d38,	// (0x0009f1f3) list_single_mce_message_pane_ParamLimits

0x1d38,	// (0x0009f1f3) list_single_mce_message_pane

0x1d4d,	// (0x0009f208) list_single_mce_smart_pane_ParamLimits

0x1d4d,	// (0x0009f208) list_single_mce_smart_pane

0xb0bd,	// (0x000a8578) input_focus_pane_cp03

0xb0c6,	// (0x000a8581) list_header_data_pane

0x1d6d,	// (0x0009f228) mce_header_field_pane_t1

0x1d7d,	// (0x0009f238) list_single_mce_header_pane_ParamLimits

0x1d7d,	// (0x0009f238) list_single_mce_header_pane

0xb0ce,	// (0x000a8589) list_single_mce_header_pane_t1

0xb0dd,	// (0x000a8598) list_single_mce_message_pane_g1

0xb0e5,	// (0x000a85a0) list_single_mce_message_pane_t1

0x1db7,	// (0x0009f272) bg_cale_heading_pane_cp01_ParamLimits

0x1db7,	// (0x0009f272) bg_cale_heading_pane_cp01

0xb0f3,	// (0x000a85ae) bg_cale_pane_cp02_ParamLimits

0xb0f3,	// (0x000a85ae) bg_cale_pane_cp02

0x1df1,	// (0x0009f2ac) cale_month_corner_pane

0x1e10,	// (0x0009f2cb) cale_month_day_heading_pane_ParamLimits

0x1e10,	// (0x0009f2cb) cale_month_day_heading_pane

0x1e62,	// (0x0009f31d) cale_month_pane_g1_ParamLimits

0x1e62,	// (0x0009f31d) cale_month_pane_g1

0x1e91,	// (0x0009f34c) cale_month_pane_g2_ParamLimits

0x1e91,	// (0x0009f34c) cale_month_pane_g2

0x1ec1,	// (0x0009f37c) cale_month_pane_g3_ParamLimits

0x1ec1,	// (0x0009f37c) cale_month_pane_g3

0x1efd,	// (0x0009f3b8) cale_month_pane_g4_ParamLimits

0x1efd,	// (0x0009f3b8) cale_month_pane_g4

0x1f39,	// (0x0009f3f4) cale_month_pane_g5_ParamLimits

0x1f39,	// (0x0009f3f4) cale_month_pane_g5

0x1f81,	// (0x0009f43c) cale_month_pane_g6_ParamLimits

0x1f81,	// (0x0009f43c) cale_month_pane_g6

0x1fcd,	// (0x0009f488) cale_month_pane_g7_ParamLimits

0x1fcd,	// (0x0009f488) cale_month_pane_g7

0x2021,	// (0x0009f4dc) cale_month_pane_g8_ParamLimits

0x2021,	// (0x0009f4dc) cale_month_pane_g8

0x2075,	// (0x0009f530) cale_month_pane_g9_ParamLimits

0x2075,	// (0x0009f530) cale_month_pane_g9

0x20c7,	// (0x0009f582) cale_month_pane_g10_ParamLimits

0x20c7,	// (0x0009f582) cale_month_pane_g10

0x2119,	// (0x0009f5d4) cale_month_pane_g11_ParamLimits

0x2119,	// (0x0009f5d4) cale_month_pane_g11

0x216b,	// (0x0009f626) cale_month_pane_g12_ParamLimits

0x216b,	// (0x0009f626) cale_month_pane_g12

0x21bd,	// (0x0009f678) cale_month_pane_g13_ParamLimits

0x21bd,	// (0x0009f678) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000ac746) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000ac746) cale_month_pane_g

0x220f,	// (0x0009f6ca) cale_month_week_pane

0x2233,	// (0x0009f6ee) grid_cale_month_pane_ParamLimits

0x2233,	// (0x0009f6ee) grid_cale_month_pane

0x227c,	// (0x0009f737) cale_month_day_heading_pane_t1

0x2302,	// (0x0009f7bd) cale_month_day_heading_pane_t2

0x237b,	// (0x0009f836) cale_month_day_heading_pane_t3

0x23f4,	// (0x0009f8af) cale_month_day_heading_pane_t4

0x2475,	// (0x0009f930) cale_month_day_heading_pane_t5

0x24fe,	// (0x0009f9b9) cale_month_day_heading_pane_t6

0x2587,	// (0x0009fa42) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000ac761) cale_month_day_heading_pane_t

0xa70e,	// (0x000a7bc9) bg_cale_side_pane_cp01

0x2618,	// (0x0009fad3) cale_month_week_pane_t1

0x2631,	// (0x0009faec) cale_month_week_pane_t2

0x264a,	// (0x0009fb05) cale_month_week_pane_t3

0x2663,	// (0x0009fb1e) cale_month_week_pane_t4

0x267c,	// (0x0009fb37) cale_month_week_pane_t5

0x2695,	// (0x0009fb50) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000ac770) cale_month_week_pane_t

0x26ae,	// (0x0009fb69) cell_cale_month_pane_ParamLimits

0x26ae,	// (0x0009fb69) cell_cale_month_pane

0xa8bb,	// (0x000a7d76) cell_cale_month_pane_g1

0x2806,	// (0x0009fcc1) cell_cale_month_pane_t1_ParamLimits

0x2806,	// (0x0009fcc1) cell_cale_month_pane_t1

0xa71c,	// (0x000a7bd7) grid_highlight_pane_cp08

0xa5b1,	// (0x000a7a6c) main_smil_g1

0x2832,	// (0x0009fced) smil_status_pane

0xb132,	// (0x000a85ed) smil_text_pane

0xd6c6,	// (0x000aab81) bg_popup_call3_rect_pane_g8

0xd6ce,	// (0x000aab89) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000aca29) bg_popup_call3_rect_pane_g

0xd915,	// (0x000aadd0) smil_status_volume_pane_g1

0xb13c,	// (0x000a85f7) smil_status_pane_t1

0xaa05,	// (0x000a7ec0) volume_smil_pane

0xb153,	// (0x000a860e) list_smil_text_pane

0x2845,	// (0x0009fd00) scroll_pane_cp011

0x2850,	// (0x0009fd0b) smil_text_list_pane_t1_ParamLimits

0x2850,	// (0x0009fd0b) smil_text_list_pane_t1

0xa8c7,	// (0x000a7d82) aid_volume_smil_ParamLimits

0xa8c7,	// (0x000a7d82) aid_volume_smil

0xa5b1,	// (0x000a7a6c) smil_volume_pane_g1

0xa5b1,	// (0x000a7a6c) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000ac790) smil_volume_pane_g

0x0ef3,	// (0x0009e3ae) listscroll_cale_day_pane

0xb15d,	// (0x000a8618) bg_cale_pane

0xb175,	// (0x000a8630) list_cale_pane

0xb198,	// (0x000a8653) scroll_pane_cp09

0xb1a9,	// (0x000a8664) cale_bg_pane_g1

0xb1b1,	// (0x000a866c) cale_bg_pane_g2

0xb1b9,	// (0x000a8674) cale_bg_pane_g3

0xb1c1,	// (0x000a867c) cale_bg_pane_g4

0xb1c9,	// (0x000a8684) cale_bg_pane_g5

0xb1d1,	// (0x000a868c) cale_bg_pane_g6

0xb1d9,	// (0x000a8694) cale_bg_pane_g7

0xb1e1,	// (0x000a869c) cale_bg_pane_g8

0xb1e9,	// (0x000a86a4) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000ac795) cale_bg_pane_g

0x2894,	// (0x0009fd4f) list_cale_time_pane_ParamLimits

0x2894,	// (0x0009fd4f) list_cale_time_pane

0xb1f1,	// (0x000a86ac) list_cale_time_pane_g1_ParamLimits

0xb1f1,	// (0x000a86ac) list_cale_time_pane_g1

0xb1fd,	// (0x000a86b8) list_cale_time_pane_g2_ParamLimits

0xb1fd,	// (0x000a86b8) list_cale_time_pane_g2

0x28a9,	// (0x0009fd64) list_cale_time_pane_g3_ParamLimits

0x28a9,	// (0x0009fd64) list_cale_time_pane_g3

0x28b7,	// (0x0009fd72) list_cale_time_pane_g4_ParamLimits

0x28b7,	// (0x0009fd72) list_cale_time_pane_g4

0x28c5,	// (0x0009fd80) list_cale_time_pane_g5_ParamLimits

0x28c5,	// (0x0009fd80) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000ac7a8) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000ac7a8) list_cale_time_pane_g

0xb217,	// (0x000a86d2) list_cale_time_pane_t1_ParamLimits

0xb217,	// (0x000a86d2) list_cale_time_pane_t1

0xb23f,	// (0x000a86fa) list_cale_time_pane_t2_ParamLimits

0xb23f,	// (0x000a86fa) list_cale_time_pane_t2

0x2c26,	// (0x000a00e1) aid_blid_cardinal_pane

0x2c64,	// (0x000a011f) compass_pane_t4

0xb267,	// (0x000a8722) list_cale_time_pane_t4_ParamLimits

0xb267,	// (0x000a8722) list_cale_time_pane_t4

0x2c72,	// (0x000a012d) compass_pane_t5

0x2c80,	// (0x000a013b) compass_pane_t6

0x2c8e,	// (0x000a0149) compass_pane_t7

0xb70a,	// (0x000a8bc5) navi_pane_cc_t1

0xb8e7,	// (0x000a8da2) aid_phob_thumbnail_center_pane

0x32f5,	// (0x000a07b0) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000ac7b5) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000ac7b5) list_cale_time_pane_t

0xe2e3,	// (0x000ab79e) bg_popup_window_pane_cp02_ParamLimits

0xe2e3,	// (0x000ab79e) bg_popup_window_pane_cp02

0xb28f,	// (0x000a874a) heading_pane_cp01_ParamLimits

0xb28f,	// (0x000a874a) heading_pane_cp01

0xb29b,	// (0x000a8756) loc_req_pane_ParamLimits

0xb29b,	// (0x000a8756) loc_req_pane

0xb2ab,	// (0x000a8766) loc_type_pane_ParamLimits

0xb2ab,	// (0x000a8766) loc_type_pane

0xb2bd,	// (0x000a8778) loc_type_pane_t1_ParamLimits

0xb2bd,	// (0x000a8778) loc_type_pane_t1

0xb2cf,	// (0x000a878a) loc_type_pane_t2_ParamLimits

0xb2cf,	// (0x000a878a) loc_type_pane_t2

0xb2e1,	// (0x000a879c) loc_type_pane_t3_ParamLimits

0xb2e1,	// (0x000a879c) loc_type_pane_t3

0x0002,

0xf301,	// (0x000ac7bc) loc_type_pane_t_ParamLimits

0xf301,	// (0x000ac7bc) loc_type_pane_t

0xb2f3,	// (0x000a87ae) list_loc_req_pane

0xb2fd,	// (0x000a87b8) scroll_pane_cp012

0x28d3,	// (0x0009fd8e) list_single_loc_request_popup_menu_pane_ParamLimits

0x28d3,	// (0x0009fd8e) list_single_loc_request_popup_menu_pane

0xb308,	// (0x000a87c3) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb308,	// (0x000a87c3) list_single_loc_request_popup_menu_pane_g1

0xb314,	// (0x000a87cf) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb314,	// (0x000a87cf) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000ac7c3) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000ac7c3) list_single_loc_request_popup_menu_pane_g

0xb320,	// (0x000a87db) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb320,	// (0x000a87db) list_single_loc_request_popup_menu_pane_t1

0xa451,	// (0x000a790c) bg_popup_window_pane_cp03_ParamLimits

0xa451,	// (0x000a790c) bg_popup_window_pane_cp03

0xc8a2,	// (0x000a9d5d) heading_loc_req_pane_ParamLimits

0xc8a2,	// (0x000a9d5d) heading_loc_req_pane

0x28e0,	// (0x0009fd9b) popup_dyc_status_message_window_g1_ParamLimits

0x28e0,	// (0x0009fd9b) popup_dyc_status_message_window_g1

0x28f4,	// (0x0009fdaf) popup_dyc_status_message_window_t1_ParamLimits

0x28f4,	// (0x0009fdaf) popup_dyc_status_message_window_t1

0x2909,	// (0x0009fdc4) popup_dyc_status_message_window_t2_ParamLimits

0x2909,	// (0x0009fdc4) popup_dyc_status_message_window_t2

0x291e,	// (0x0009fdd9) popup_dyc_status_message_window_t3_ParamLimits

0x291e,	// (0x0009fdd9) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000ac7c8) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000ac7c8) popup_dyc_status_message_window_t

0x0969,	// (0x0009de24) bg_heading_pane_cp01

0xb336,	// (0x000a87f1) heading_loc_req_pane_g1

0xb33e,	// (0x000a87f9) heading_loc_req_pane_g2

0xb346,	// (0x000a8801) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000ac7cf) heading_loc_req_pane_g

0xb34e,	// (0x000a8809) heading_loc_req_pane_t1

0xb35d,	// (0x000a8818) bg_popup_sub_pane_cp01_ParamLimits

0xb35d,	// (0x000a8818) bg_popup_sub_pane_cp01

0xb36b,	// (0x000a8826) popup_cale_events_window_g1_ParamLimits

0xb36b,	// (0x000a8826) popup_cale_events_window_g1

0xb38b,	// (0x000a8846) popup_cale_events_window_g2_ParamLimits

0xb38b,	// (0x000a8846) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000ac803) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000ac803) popup_cale_events_window_g

0xb3ab,	// (0x000a8866) popup_cale_events_window_t1_ParamLimits

0xb3ab,	// (0x000a8866) popup_cale_events_window_t1

0xb3bd,	// (0x000a8878) popup_cale_events_window_t2_ParamLimits

0xb3bd,	// (0x000a8878) popup_cale_events_window_t2

0xb3fb,	// (0x000a88b6) popup_cale_events_window_t3_ParamLimits

0xb3fb,	// (0x000a88b6) popup_cale_events_window_t3

0xb435,	// (0x000a88f0) popup_cale_events_window_t4_ParamLimits

0xb435,	// (0x000a88f0) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000ac808) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000ac808) popup_cale_events_window_t

0x2a21,	// (0x0009fedc) call_type_pane

0x2a31,	// (0x0009feec) popup_call_status_window_g1

0x2a45,	// (0x0009ff00) popup_call_status_window_g2

0x2a59,	// (0x0009ff14) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000ac811) popup_call_status_window_g

0xb46b,	// (0x000a8926) call_type_pane_g1

0xb474,	// (0x000a892f) call_type_pane_g2

0x0001,

0xf35d,	// (0x000ac818) call_type_pane_g

0x0969,	// (0x0009de24) bg_popup_sub_pane_cp02

0xb47d,	// (0x000a8938) listscroll_popup_wml_pane

0xb485,	// (0x000a8940) list_wml_pane

0xb48f,	// (0x000a894a) scroll_pane_cp013

0xb49a,	// (0x000a8955) list_single_graphic_popup_wml_pane_ParamLimits

0xb49a,	// (0x000a8955) list_single_graphic_popup_wml_pane

0xa5b1,	// (0x000a7a6c) list_single_graphic_popup_wml_pane_g1

0xb4ae,	// (0x000a8969) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000ac81d) list_single_graphic_popup_wml_pane_g

0xb4b6,	// (0x000a8971) list_single_graphic_popup_wml_pane_t1

0xb4cc,	// (0x000a8987) aid_call_pane

0xa449,	// (0x000a7904) popup_clock_analogue_window_g1

0xa449,	// (0x000a7904) popup_clock_analogue_window_g2

0xa8e9,	// (0x000a7da4) popup_clock_analogue_window_g3

0xa8e9,	// (0x000a7da4) popup_clock_analogue_window_g4

0xa5b1,	// (0x000a7a6c) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000ac822) popup_clock_analogue_window_g

0xa8f1,	// (0x000a7dac) popup_clock_analogue_window_t1

0xa8ff,	// (0x000a7dba) clock_digital_number_pane_ParamLimits

0xa8ff,	// (0x000a7dba) clock_digital_number_pane

0xa90b,	// (0x000a7dc6) clock_digital_number_pane_cp02_ParamLimits

0xa90b,	// (0x000a7dc6) clock_digital_number_pane_cp02

0xa917,	// (0x000a7dd2) clock_digital_number_pane_cp03_ParamLimits

0xa917,	// (0x000a7dd2) clock_digital_number_pane_cp03

0xa923,	// (0x000a7dde) clock_digital_number_pane_cp04_ParamLimits

0xa923,	// (0x000a7dde) clock_digital_number_pane_cp04

0xa933,	// (0x000a7dee) clock_digital_separator_pane_ParamLimits

0xa933,	// (0x000a7dee) clock_digital_separator_pane

0xa93f,	// (0x000a7dfa) popup_clock_digital_window_t1

0xa5b1,	// (0x000a7a6c) clock_digital_number_pane_g1

0xa5b1,	// (0x000a7a6c) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000ac790) clock_digital_number_pane_g

0xa5b1,	// (0x000a7a6c) clock_digital_separator_pane_g1

0xa5b1,	// (0x000a7a6c) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000ac790) clock_digital_separator_pane_g

0x0969,	// (0x0009de24) bg_popup_window_pane_cp04

0xb4d4,	// (0x000a898f) heading_pane_cp03

0xb4dc,	// (0x000a8997) listscroll_popup_gms_pane

0xb4e4,	// (0x000a899f) grid_large_graphic_popup_pane

0xb4ee,	// (0x000a89a9) listscroll_popup_gms_pane_g1

0xb4f6,	// (0x000a89b1) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000ac82d) listscroll_popup_gms_pane_g

0xaf97,	// (0x000a8452) scroll_pane_cp014

0x2a68,	// (0x0009ff23) cell_large_graphic_popup_pane_ParamLimits

0x2a68,	// (0x0009ff23) cell_large_graphic_popup_pane

0x2a80,	// (0x0009ff3b) cell_large_graphic_popup_pane_g1_ParamLimits

0x2a80,	// (0x0009ff3b) cell_large_graphic_popup_pane_g1

0xb4fe,	// (0x000a89b9) cell_large_graphic_popup_pane_g2_ParamLimits

0xb4fe,	// (0x000a89b9) cell_large_graphic_popup_pane_g2

0xb50a,	// (0x000a89c5) cell_large_graphic_popup_pane_g3_ParamLimits

0xb50a,	// (0x000a89c5) cell_large_graphic_popup_pane_g3

0xb517,	// (0x000a89d2) cell_large_graphic_popup_pane_g4_ParamLimits

0xb517,	// (0x000a89d2) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000ac832) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000ac832) cell_large_graphic_popup_pane_g

0xb527,	// (0x000a89e2) grid_highlight_pane_cp010

0xa5b1,	// (0x000a7a6c) bg_popup_call_pane_g1

0xb531,	// (0x000a89ec) list_single_graphic_popup_conf_pane_ParamLimits

0xb531,	// (0x000a89ec) list_single_graphic_popup_conf_pane

0xb544,	// (0x000a89ff) list_highlight_pane_cp01

0xb54d,	// (0x000a8a08) list_single_graphic_popup_conf_pane_g1

0xb555,	// (0x000a8a10) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000ac83b) list_single_graphic_popup_conf_pane_g

0xb55d,	// (0x000a8a18) list_single_graphic_popup_conf_pane_t1

0xb56b,	// (0x000a8a26) linegrid_cams_pane_g1

0x2a8c,	// (0x0009ff47) linegrid_cams_pane_g2

0xa74f,	// (0x000a7c0a) linegrid_cams_pane_g3

0xb574,	// (0x000a8a2f) linegrid_cams_pane_g4

0x2a95,	// (0x0009ff50) linegrid_cams_pane_g5

0x2a9e,	// (0x0009ff59) linegrid_cams_pane_g6

0xa758,	// (0x000a7c13) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000ac840) linegrid_cams_pane_g

0xb57d,	// (0x000a8a38) popup_clock_analogue_window

0xb57d,	// (0x000a8a38) popup_clock_digital_window

0x0969,	// (0x0009de24) popup_phob_thumbnail_window

0xa5b1,	// (0x000a7a6c) call_video_uplink_pane_g1

0xb586,	// (0x000a8a41) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000ac84f) call_video_uplink_pane_g

0xb58e,	// (0x000a8a49) video_uplink_pane

0xb596,	// (0x000a8a51) mce_image_pane_g1

0x2aa9,	// (0x0009ff64) mce_image_pane_g2

0x2ab3,	// (0x0009ff6e) mce_image_pane_g3

0x2abb,	// (0x0009ff76) mce_image_pane_g4

0x2ac3,	// (0x0009ff7e) mce_image_pane_g5

0x0004,

0xf399,	// (0x000ac854) mce_image_pane_g

0xb5a0,	// (0x000a8a5b) control_top_pane_stacon_cp01_ParamLimits

0xb5a0,	// (0x000a8a5b) control_top_pane_stacon_cp01

0xb5b4,	// (0x000a8a6f) uni_indicator_pane_stacon_cp01_ParamLimits

0xb5b4,	// (0x000a8a6f) uni_indicator_pane_stacon_cp01

0xb5c5,	// (0x000a8a80) bg_popup_sub_pane_cp03

0xb5cf,	// (0x000a8a8a) chi_dic_find_pane

0x2acb,	// (0x0009ff86) listscroll_chi_dic_pane

0xb5d7,	// (0x000a8a92) main_pane_chidic_g1

0xb5df,	// (0x000a8a9a) chi_dic_find_pane_t1

0xb5ed,	// (0x000a8aa8) find_chidic_pane

0xb5f6,	// (0x000a8ab1) chi_dic_list_pane_ParamLimits

0xb5f6,	// (0x000a8ab1) chi_dic_list_pane

0xb607,	// (0x000a8ac2) scroll_pane_cp020

0xb60f,	// (0x000a8aca) find_chidic_pane_t1

0x0969,	// (0x0009de24) input_focus_pane_cp06

0x2adf,	// (0x0009ff9a) list_chi_dic_pane_ParamLimits

0x2adf,	// (0x0009ff9a) list_chi_dic_pane

0x2af1,	// (0x0009ffac) list_chi_dic_pane_t1_ParamLimits

0x2af1,	// (0x0009ffac) list_chi_dic_pane_t1

0x0969,	// (0x0009de24) list_highlight_pane_cp020

0xb61e,	// (0x000a8ad9) bg_cale_heading_pane_g1

0x2b04,	// (0x0009ffbf) bg_cale_heading_pane_g2

0x2b0c,	// (0x0009ffc7) bg_cale_heading_pane_g3

0x2b14,	// (0x0009ffcf) bg_cale_heading_pane_g4

0x2b1e,	// (0x0009ffd9) bg_cale_heading_pane_g5

0x2b28,	// (0x0009ffe3) bg_cale_heading_pane_g6

0x2b30,	// (0x0009ffeb) bg_cale_heading_pane_g7

0x2b38,	// (0x0009fff3) bg_cale_heading_pane_g8

0x2b42,	// (0x0009fffd) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000ac85f) bg_cale_heading_pane_g

0xb61e,	// (0x000a8ad9) bg_cale_side_pane_g1

0x2b4c,	// (0x000a0007) bg_cale_side_pane_g2

0x2b54,	// (0x000a000f) bg_cale_side_pane_g3

0x2b5c,	// (0x000a0017) bg_cale_side_pane_g4

0x2b64,	// (0x000a001f) bg_cale_side_pane_g5

0x2b6c,	// (0x000a0027) bg_cale_side_pane_g6

0x2b74,	// (0x000a002f) bg_cale_side_pane_g7

0x2b7c,	// (0x000a0037) bg_cale_side_pane_g8

0x2b84,	// (0x000a003f) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000ac872) bg_cale_side_pane_g

0x2b8c,	// (0x000a0047) popup_call_status_window_ParamLimits

0x2b8c,	// (0x000a0047) popup_call_status_window

0xb626,	// (0x000a8ae1) stacon_top_pane

0xb62e,	// (0x000a8ae9) status_pane_ParamLimits

0xb62e,	// (0x000a8ae9) status_pane

0xb643,	// (0x000a8afe) status_small_pane

0xb64b,	// (0x000a8b06) control_pane

0x0969,	// (0x0009de24) stacon_bottom_pane

0xb653,	// (0x000a8b0e) list_single_mce_smart_pane_t1_ParamLimits

0xb653,	// (0x000a8b0e) list_single_mce_smart_pane_t1

0xb666,	// (0x000a8b21) list_single_mce_smart_pane_t2_ParamLimits

0xb666,	// (0x000a8b21) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000ac885) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000ac885) list_single_mce_smart_pane_t

0x2bd5,	// (0x000a0090) compass_pane

0x2bde,	// (0x000a0099) main_location2_pane_t1

0x2bf0,	// (0x000a00ab) main_location2_pane_t2

0x2c02,	// (0x000a00bd) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000ac88a) main_location2_pane_t

0xb685,	// (0x000a8b40) compass_pane_g1_ParamLimits

0xb685,	// (0x000a8b40) compass_pane_g1

0x2c46,	// (0x000a0101) compass_pane_t1

0x2c55,	// (0x000a0110) compass_pane_t2

0x0005,

0xf3d8,	// (0x000ac893) compass_pane_t

0x2c9c,	// (0x000a0157) text_secondary_cp61

0xb701,	// (0x000a8bbc) navi_pane_cams_g5

0xb77d,	// (0x000a8c38) navi_pane_im_t1

0xb78b,	// (0x000a8c46) navi_pane_mp_g1_ParamLimits

0xb78b,	// (0x000a8c46) navi_pane_mp_g1

0xb79f,	// (0x000a8c5a) navi_pane_mp_g2_ParamLimits

0xb79f,	// (0x000a8c5a) navi_pane_mp_g2

0xb7ab,	// (0x000a8c66) navi_pane_mp_g3_ParamLimits

0xb7ab,	// (0x000a8c66) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000ac8a7) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000ac8a7) navi_pane_mp_g

0xb7b7,	// (0x000a8c72) navi_pane_mp_t1

0xb7c5,	// (0x000a8c80) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000ac8ae) navi_pane_mp_t

0xb830,	// (0x000a8ceb) navi_pane_vt_g1

0xb7b7,	// (0x000a8c72) navi_pane_vt_t1

0xb838,	// (0x000a8cf3) navi_slider_pane

0xa769,	// (0x000a7c24) zooming_pane

0xb848,	// (0x000a8d03) navi_slider_pane_g1

0xa95c,	// (0x000a7e17) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000ac8b5) navi_slider_pane_g

0xb86c,	// (0x000a8d27) aid_levels_zoom

0xb874,	// (0x000a8d2f) zooming_pane_g1

0xb87c,	// (0x000a8d37) zooming_pane_g2

0xb87c,	// (0x000a8d37) zooming_pane_g3

0x0002,

0xf409,	// (0x000ac8c4) zooming_pane_g

0xb884,	// (0x000a8d3f) level_10_zoom

0xb88d,	// (0x000a8d48) level_11_zoom

0xb896,	// (0x000a8d51) level_1_zoom

0xb89f,	// (0x000a8d5a) level_2_zoom

0xb8a8,	// (0x000a8d63) level_3_zoom

0xb8b1,	// (0x000a8d6c) level_4_zoom

0xb8ba,	// (0x000a8d75) level_5_zoom

0xb8c3,	// (0x000a8d7e) level_6_zoom

0xb8cc,	// (0x000a8d87) level_7_zoom

0xb8d5,	// (0x000a8d90) level_8_zoom

0xb8de,	// (0x000a8d99) level_9_zoom

0xb8ef,	// (0x000a8daa) popup_phob_thumbnail_window_g1

0xb8f7,	// (0x000a8db2) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000ac8cb) popup_phob_thumbnail_window_g

0xd828,	// (0x000aace3) level_1_location

0xd830,	// (0x000aaceb) level_2_location

0xd838,	// (0x000aacf3) level_3_location

0xd840,	// (0x000aacfb) level_4_location

0xa769,	// (0x000a7c24) level_5_location

0x2ced,	// (0x000a01a8) mce_icon_pane_g1

0x2cf7,	// (0x000a01b2) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000ac8d0) mce_icon_pane_g

0x2cff,	// (0x000a01ba) main_mup_pane_g1_ParamLimits

0x2cff,	// (0x000a01ba) main_mup_pane_g1

0x2d15,	// (0x000a01d0) main_mup_pane_g2_ParamLimits

0x2d15,	// (0x000a01d0) main_mup_pane_g2

0x2d2d,	// (0x000a01e8) main_mup_pane_g3_ParamLimits

0x2d2d,	// (0x000a01e8) main_mup_pane_g3

0x2d45,	// (0x000a0200) main_mup_pane_g4_ParamLimits

0x2d45,	// (0x000a0200) main_mup_pane_g4

0x2d5d,	// (0x000a0218) main_mup_pane_g5_ParamLimits

0x2d5d,	// (0x000a0218) main_mup_pane_g5

0x2d79,	// (0x000a0234) main_mup_pane_g6_ParamLimits

0x2d79,	// (0x000a0234) main_mup_pane_g6

0x2d91,	// (0x000a024c) main_mup_pane_g7_ParamLimits

0x2d91,	// (0x000a024c) main_mup_pane_g7

0x2da9,	// (0x000a0264) main_mup_pane_g8_ParamLimits

0x2da9,	// (0x000a0264) main_mup_pane_g8

0x2dc3,	// (0x000a027e) main_mup_pane_g9_ParamLimits

0x2dc3,	// (0x000a027e) main_mup_pane_g9

0x2ddd,	// (0x000a0298) main_mup_pane_g10_ParamLimits

0x2ddd,	// (0x000a0298) main_mup_pane_g10

0x2df7,	// (0x000a02b2) main_mup_pane_g11_ParamLimits

0x2df7,	// (0x000a02b2) main_mup_pane_g11

0x2e0b,	// (0x000a02c6) main_mup_pane_g12_ParamLimits

0x2e0b,	// (0x000a02c6) main_mup_pane_g12

0x2e21,	// (0x000a02dc) main_mup_pane_g13_ParamLimits

0x2e21,	// (0x000a02dc) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000ac8d5) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000ac8d5) main_mup_pane_g

0x2e35,	// (0x000a02f0) main_mup_pane_t1_ParamLimits

0x2e35,	// (0x000a02f0) main_mup_pane_t1

0x2e4f,	// (0x000a030a) main_mup_pane_t2_ParamLimits

0x2e4f,	// (0x000a030a) main_mup_pane_t2

0x2e67,	// (0x000a0322) main_mup_pane_t3_ParamLimits

0x2e67,	// (0x000a0322) main_mup_pane_t3

0x2e7f,	// (0x000a033a) main_mup_pane_t4_ParamLimits

0x2e7f,	// (0x000a033a) main_mup_pane_t4

0x2e9d,	// (0x000a0358) main_mup_pane_t5_ParamLimits

0x2e9d,	// (0x000a0358) main_mup_pane_t5

0x2eb2,	// (0x000a036d) main_mup_pane_t6_ParamLimits

0x2eb2,	// (0x000a036d) main_mup_pane_t6

0x0005,

0xf435,	// (0x000ac8f0) main_mup_pane_t_ParamLimits

0xf435,	// (0x000ac8f0) main_mup_pane_t

0x2ec4,	// (0x000a037f) mup_progress_pane_ParamLimits

0x2ec4,	// (0x000a037f) mup_progress_pane

0x2ed0,	// (0x000a038b) mup_visualizer_pane_ParamLimits

0x2ed0,	// (0x000a038b) mup_visualizer_pane

0x2f00,	// (0x000a03bb) mup_volume_pane_ParamLimits

0x2f00,	// (0x000a03bb) mup_volume_pane

0xb8ff,	// (0x000a8dba) mup_visualizer_pane_g1_ParamLimits

0xb8ff,	// (0x000a8dba) mup_visualizer_pane_g1

0xb8ff,	// (0x000a8dba) mup_visualizer_pane_g2_ParamLimits

0xb8ff,	// (0x000a8dba) mup_visualizer_pane_g2

0xb685,	// (0x000a8b40) mup_visualizer_pane_g3_ParamLimits

0xb685,	// (0x000a8b40) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000ac8fd) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000ac8fd) mup_visualizer_pane_g

0xa5b1,	// (0x000a7a6c) mup_volume_pane_g1

0xb915,	// (0x000a8dd0) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000ac904) mup_volume_pane_g

0xa5b1,	// (0x000a7a6c) mup_progress_pane_g1

0xb91e,	// (0x000a8dd9) mup_progress_pane_g2

0xb927,	// (0x000a8de2) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000ac909) mup_progress_pane_g

0x0969,	// (0x0009de24) bg_popup_window_pane_cp05

0xb930,	// (0x000a8deb) heading_pane_cp02_ParamLimits

0xb930,	// (0x000a8deb) heading_pane_cp02

0xb94a,	// (0x000a8e05) list_popup_blid_pane

0xb952,	// (0x000a8e0d) list_blid_sat_info_pane_ParamLimits

0xb952,	// (0x000a8e0d) list_blid_sat_info_pane

0xb965,	// (0x000a8e20) list_blid_sat_info_pane_g1

0xb96d,	// (0x000a8e28) list_blid_sat_info_pane_t1

0x3016,	// (0x000a04d1) mup_equalizer_pane_ParamLimits

0x3016,	// (0x000a04d1) mup_equalizer_pane

0x302f,	// (0x000a04ea) mup_equalizer_pane_cp1_ParamLimits

0x302f,	// (0x000a04ea) mup_equalizer_pane_cp1

0x304c,	// (0x000a0507) mup_equalizer_pane_cp2_ParamLimits

0x304c,	// (0x000a0507) mup_equalizer_pane_cp2

0x3069,	// (0x000a0524) mup_equalizer_pane_cp3_ParamLimits

0x3069,	// (0x000a0524) mup_equalizer_pane_cp3

0x308a,	// (0x000a0545) mup_equalizer_pane_cp4_ParamLimits

0x308a,	// (0x000a0545) mup_equalizer_pane_cp4

0x30ab,	// (0x000a0566) mup_equalizer_pane_cp5

0x30bf,	// (0x000a057a) mup_equalizer_pane_cp6

0x30d3,	// (0x000a058e) mup_equalizer_pane_cp7

0xd746,	// (0x000aac01) bg_popup_call_poc_act_pane_g9

0xd74e,	// (0x000aac09) bg_popup_call_poc_act_pane_g10

0xd756,	// (0x000aac11) bg_popup_call_poc_act_pane_g11

0x000a,

0xa451,	// (0x000a790c) mup_scale_pane

0xa5b1,	// (0x000a7a6c) mup_scale_pane_g1

0xb97b,	// (0x000a8e36) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000ac925) mup_scale_pane_g

0xb99f,	// (0x000a8e5a) msg_data_pane

0xb9a7,	// (0x000a8e62) scroll_pane_cp017

0x30f9,	// (0x000a05b4) bg_list_pane_cp04_ParamLimits

0x30f9,	// (0x000a05b4) bg_list_pane_cp04

0xb9af,	// (0x000a8e6a) msg_data_pane_g1

0x3119,	// (0x000a05d4) msg_data_pane_g2

0x3123,	// (0x000a05de) msg_data_pane_g3

0x312b,	// (0x000a05e6) msg_data_pane_g4

0x3133,	// (0x000a05ee) msg_data_pane_g5

0x313b,	// (0x000a05f6) msg_data_pane_g6

0x3143,	// (0x000a05fe) msg_data_pane_g7

0x0006,

0xf479,	// (0x000ac934) msg_data_pane_g

0x314b,	// (0x000a0606) msg_text_pane_ParamLimits

0x314b,	// (0x000a0606) msg_text_pane

0x3174,	// (0x000a062f) qrid_highlight_pane_cp011_ParamLimits

0x3174,	// (0x000a062f) qrid_highlight_pane_cp011

0x0969,	// (0x0009de24) msg_body_pane

0x0969,	// (0x0009de24) msg_header_pane

0xb9c0,	// (0x000a8e7b) input_focus_pane_cp07

0x3198,	// (0x000a0653) msg_header_pane_t1_ParamLimits

0x3198,	// (0x000a0653) msg_header_pane_t1

0x31aa,	// (0x000a0665) msg_header_pane_t2_ParamLimits

0x31aa,	// (0x000a0665) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000ac948) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000ac948) msg_header_pane_t

0xb9d5,	// (0x000a8e90) msg_body_pane_g1

0x31bc,	// (0x000a0677) msg_body_pane_t1_ParamLimits

0x31bc,	// (0x000a0677) msg_body_pane_t1

0x31ed,	// (0x000a06a8) msg_body_pane_t2_ParamLimits

0x31ed,	// (0x000a06a8) msg_body_pane_t2

0x31ff,	// (0x000a06ba) msg_body_pane_t3_ParamLimits

0x31ff,	// (0x000a06ba) msg_body_pane_t3

0x0002,

0xf492,	// (0x000ac94d) msg_body_pane_t_ParamLimits

0xf492,	// (0x000ac94d) msg_body_pane_t

0x324b,	// (0x000a0706) main_viewer_pane_g1_ParamLimits

0x324b,	// (0x000a0706) main_viewer_pane_g1

0x3259,	// (0x000a0714) main_viewer_pane_g2_ParamLimits

0x3259,	// (0x000a0714) main_viewer_pane_g2

0x3267,	// (0x000a0722) main_viewer_pane_g3_ParamLimits

0x3267,	// (0x000a0722) main_viewer_pane_g3

0x3276,	// (0x000a0731) main_viewer_pane_g4_ParamLimits

0x3276,	// (0x000a0731) main_viewer_pane_g4

0xa986,	// (0x000a7e41) main_viewer_pane_g5_ParamLimits

0xa986,	// (0x000a7e41) main_viewer_pane_g5

0xa986,	// (0x000a7e41) main_viewer_pane_g7_ParamLimits

0xa986,	// (0x000a7e41) main_viewer_pane_g7

0xb308,	// (0x000a87c3) main_viewer_pane_g8_ParamLimits

0xb308,	// (0x000a87c3) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000ac95d) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000ac95d) main_viewer_pane_g

0xb9dd,	// (0x000a8e98) viewer_content_pane_ParamLimits

0xb9dd,	// (0x000a8e98) viewer_content_pane

0x32b2,	// (0x000a076d) main_postcard_pane_g1_ParamLimits

0x32b2,	// (0x000a076d) main_postcard_pane_g1

0x32c8,	// (0x000a0783) main_postcard_pane_g2_ParamLimits

0x32c8,	// (0x000a0783) main_postcard_pane_g2

0x32de,	// (0x000a0799) main_postcard_pane_g3_ParamLimits

0x32de,	// (0x000a0799) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000ac96e) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000ac96e) main_postcard_pane_g

0x32f5,	// (0x000a07b0) main_postcard_pane_g4

0xd928,	// (0x000aade3) smil_status_volume_pane_g2

0x3338,	// (0x000a07f3) postcard_pane_ParamLimits

0x3338,	// (0x000a07f3) postcard_pane

0xb9eb,	// (0x000a8ea6) postcard_pane_g1_ParamLimits

0xb9eb,	// (0x000a8ea6) postcard_pane_g1

0x337a,	// (0x000a0835) postcard_pane_g2_ParamLimits

0x337a,	// (0x000a0835) postcard_pane_g2

0x3386,	// (0x000a0841) postcard_pane_g3_ParamLimits

0x3386,	// (0x000a0841) postcard_pane_g3

0xb9f9,	// (0x000a8eb4) postcard_pane_g4_ParamLimits

0xb9f9,	// (0x000a8eb4) postcard_pane_g4

0x3392,	// (0x000a084d) postcard_pane_g5_ParamLimits

0x3392,	// (0x000a084d) postcard_pane_g5

0x33a7,	// (0x000a0862) postcard_pane_g6_ParamLimits

0x33a7,	// (0x000a0862) postcard_pane_g6

0xb9eb,	// (0x000a8ea6) postcard_pane_g7_ParamLimits

0xb9eb,	// (0x000a8ea6) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000ac97b) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000ac97b) postcard_pane_g

0x33bb,	// (0x000a0876) main_mp2_pane_g1_ParamLimits

0x33bb,	// (0x000a0876) main_mp2_pane_g1

0x33c7,	// (0x000a0882) main_mp2_pane_g2_ParamLimits

0x33c7,	// (0x000a0882) main_mp2_pane_g2

0x33d3,	// (0x000a088e) main_mp2_pane_g3_ParamLimits

0x33d3,	// (0x000a088e) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000ac98a) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000ac98a) main_mp2_pane_g

0x33df,	// (0x000a089a) main_mp2_pane_t1_ParamLimits

0x33df,	// (0x000a089a) main_mp2_pane_t1

0x33f4,	// (0x000a08af) main_mp2_pane_t2_ParamLimits

0x33f4,	// (0x000a08af) main_mp2_pane_t2

0x3406,	// (0x000a08c1) main_mp2_pane_t3_ParamLimits

0x3406,	// (0x000a08c1) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000ac991) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000ac991) main_mp2_pane_t

0xba07,	// (0x000a8ec2) pec_content_pane_ParamLimits

0xba07,	// (0x000a8ec2) pec_content_pane

0xaf97,	// (0x000a8452) scroll_pane_cp015

0xba19,	// (0x000a8ed4) pec_attribute_pane_ParamLimits

0xba19,	// (0x000a8ed4) pec_attribute_pane

0x3418,	// (0x000a08d3) pec_content_pane_g1_ParamLimits

0x3418,	// (0x000a08d3) pec_content_pane_g1

0xba29,	// (0x000a8ee4) pec_content_pane_t1_ParamLimits

0xba29,	// (0x000a8ee4) pec_content_pane_t1

0xba3b,	// (0x000a8ef6) pec_content_pane_t2_ParamLimits

0xba3b,	// (0x000a8ef6) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000ac998) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000ac998) pec_content_pane_t

0x3424,	// (0x000a08df) list_single_graphic_pane_cp01_ParamLimits

0x3424,	// (0x000a08df) list_single_graphic_pane_cp01

0xa451,	// (0x000a790c) bg_popup_sub_pane_cp04

0xba4d,	// (0x000a8f08) popup_mup_playback_window_g1

0xba59,	// (0x000a8f14) popup_mup_playback_window_t1

0xba6e,	// (0x000a8f29) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000ac99d) popup_mup_playback_window_t

0xbaa5,	// (0x000a8f60) main_image_pane_g1_ParamLimits

0xbaa5,	// (0x000a8f60) main_image_pane_g1

0xbae8,	// (0x000a8fa3) scroll_pane_cp018_ParamLimits

0xbae8,	// (0x000a8fa3) scroll_pane_cp018

0xbbf4,	// (0x000a90af) scroll_pane_cp016_ParamLimits

0xbbf4,	// (0x000a90af) scroll_pane_cp016

0x34f1,	// (0x000a09ac) smil2_image_pane_ParamLimits

0x34f1,	// (0x000a09ac) smil2_image_pane

0x3521,	// (0x000a09dc) smil2_root_pane_ParamLimits

0x3521,	// (0x000a09dc) smil2_root_pane

0x3559,	// (0x000a0a14) smil2_text_pane_ParamLimits

0x3559,	// (0x000a0a14) smil2_text_pane

0x0969,	// (0x0009de24) bg_list_pane_cp06

0xbc30,	// (0x000a90eb) grid_radio_pane

0x0969,	// (0x0009de24) bg_popup_window_pane_cp06

0xbc38,	// (0x000a90f3) main_fmradio_pane_t1

0xb4d4,	// (0x000a898f) heading_pane_cp04

0xbc46,	// (0x000a9101) main_fmradio_pane_t2

0xd75e,	// (0x000aac19) popup_cale_lunar_info_window_g1

0xbc54,	// (0x000a910f) main_fmradio_pane_t3

0xd766,	// (0x000aac21) popup_cale_lunar_info_window_g2

0xbc62,	// (0x000a911d) main_fmradio_pane_t4

0x0001,

0xbc70,	// (0x000a912b) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x000aca78) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000ac9b2) main_fmradio_pane_t

0xbc7e,	// (0x000a9139) wait_bar_pane_cp03

0xbc86,	// (0x000a9141) cell_fmradio_pane_ParamLimits

0xbc86,	// (0x000a9141) cell_fmradio_pane

0xb9eb,	// (0x000a8ea6) cell_fmradio_pane_g1_ParamLimits

0xb9eb,	// (0x000a8ea6) cell_fmradio_pane_g1

0x0969,	// (0x0009de24) grid_highlight_pane_cp011

0xbc99,	// (0x000a9154) poc_content_pane_ParamLimits

0xbc99,	// (0x000a9154) poc_content_pane

0xbcab,	// (0x000a9166) scroll_pane_cp019

0x35d9,	// (0x000a0a94) popup_call_poc_act_window_ParamLimits

0x35d9,	// (0x000a0a94) popup_call_poc_act_window

0x35fd,	// (0x000a0ab8) popup_call_poc_inact_window_ParamLimits

0x35fd,	// (0x000a0ab8) popup_call_poc_inact_window

0xf594,	// (0x000aca4f) bg_popup_call_poc_act_pane_g

0xd6d6,	// (0x000aab91) bg_popup_call_poc_inact_pane_g1

0xd6de,	// (0x000aab99) bg_popup_call_poc_inact_pane_g2

0xbcb3,	// (0x000a916e) popup_call_poc_act_window_g2

0xd6e6,	// (0x000aaba1) bg_popup_call_poc_inact_pane_g3

0xd6ee,	// (0x000aaba9) bg_popup_call_poc_inact_pane_g4

0xd6f6,	// (0x000aabb1) bg_popup_call_poc_inact_pane_g5

0xbcbb,	// (0x000a9176) popup_call_poc_act_window_t1_ParamLimits

0xbcbb,	// (0x000a9176) popup_call_poc_act_window_t1

0xbce3,	// (0x000a919e) popup_call_poc_act_window_t2_ParamLimits

0xbce3,	// (0x000a919e) popup_call_poc_act_window_t2

0xbd0b,	// (0x000a91c6) popup_call_poc_act_window_t3_ParamLimits

0xbd0b,	// (0x000a91c6) popup_call_poc_act_window_t3

0xbd33,	// (0x000a91ee) popup_call_poc_act_window_t4_ParamLimits

0xbd33,	// (0x000a91ee) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000ac9bd) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000ac9bd) popup_call_poc_act_window_t

0xd6fe,	// (0x000aabb9) bg_popup_call_poc_inact_pane_g6

0xd706,	// (0x000aabc1) bg_popup_call_poc_inact_pane_g7

0xd70e,	// (0x000aabc9) bg_popup_call_poc_inact_pane_g8

0xbd45,	// (0x000a9200) popup_call_poc_inact_window_g2

0xd716,	// (0x000aabd1) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000aca3c) bg_popup_call_poc_inact_pane_g

0xbd4d,	// (0x000a9208) popup_call_poc_inact_window_t1_ParamLimits

0xbd4d,	// (0x000a9208) popup_call_poc_inact_window_t1

0xbd62,	// (0x000a921d) popup_call_poc_inact_window_t2_ParamLimits

0xbd62,	// (0x000a921d) popup_call_poc_inact_window_t2

0xbd77,	// (0x000a9232) popup_call_poc_inact_window_t3_ParamLimits

0xbd77,	// (0x000a9232) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000ac9c6) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000ac9c6) popup_call_poc_inact_window_t

0xd89b,	// (0x000aad56) context_pane_ParamLimits

0x3e3e,	// (0x000a12f9) signal_pane_ParamLimits

0xa769,	// (0x000a7c24) main_call2_pane

0xa9d1,	// (0x000a7e8c) popup_phob_thumbnail2_window_ParamLimits

0xa9d1,	// (0x000a7e8c) popup_phob_thumbnail2_window

0xa96e,	// (0x000a7e29) aid_hotspot_pointer_arrow_pane

0xa976,	// (0x000a7e31) aid_hotspot_pointer_hand_pane

0x3946,	// (0x000a0e01) phob_pre_status_pane_g5

0x14c0,	// (0x0009e97b) cams_zoom_pane_ParamLimits

0x14cf,	// (0x0009e98a) image_vga_pane_ParamLimits

0x14e9,	// (0x0009e9a4) main_camera_pane_g1_ParamLimits

0x14fb,	// (0x0009e9b6) main_camera_pane_g2_ParamLimits

0x150b,	// (0x0009e9c6) main_camera_pane_g3_ParamLimits

0x151b,	// (0x0009e9d6) main_camera_pane_g4_ParamLimits

0x152b,	// (0x0009e9e6) main_camera_pane_g5_ParamLimits

0x153b,	// (0x0009e9f6) main_camera_pane_g6_ParamLimits

0x154d,	// (0x0009ea08) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000ac6c5) main_camera_pane_g_ParamLimits

0x155d,	// (0x0009ea18) main_camera_pane_t1_ParamLimits

0x1573,	// (0x0009ea2e) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000ac6d6) main_camera_pane_t_ParamLimits

0xa451,	// (0x000a790c) bg_popup_preview_window_pane_cp01_ParamLimits

0xa451,	// (0x000a790c) bg_popup_preview_window_pane_cp01

0xbd8c,	// (0x000a9247) popup_phob_thumbnail2_window_g1_ParamLimits

0xbd8c,	// (0x000a9247) popup_phob_thumbnail2_window_g1

0x0969,	// (0x0009de24) call2_cli_visual_pane

0x3631,	// (0x000a0aec) popup_call2_audio_conf_window_ParamLimits

0x3631,	// (0x000a0aec) popup_call2_audio_conf_window

0x3651,	// (0x000a0b0c) popup_call2_audio_first_window_ParamLimits

0x3651,	// (0x000a0b0c) popup_call2_audio_first_window

0x36e7,	// (0x000a0ba2) popup_call2_audio_in_window_ParamLimits

0x36e7,	// (0x000a0ba2) popup_call2_audio_in_window

0x372f,	// (0x000a0bea) popup_call2_audio_out_window_ParamLimits

0x372f,	// (0x000a0bea) popup_call2_audio_out_window

0x3799,	// (0x000a0c54) popup_call2_audio_second_window_ParamLimits

0x3799,	// (0x000a0c54) popup_call2_audio_second_window

0x37ff,	// (0x000a0cba) popup_call2_audio_wait_window_ParamLimits

0x37ff,	// (0x000a0cba) popup_call2_audio_wait_window

0x0969,	// (0x0009de24) bg_popup_call2_act_pane_cp03

0xa433,	// (0x000a78ee) list_conf_pane_cp

0xbd98,	// (0x000a9253) popup_call2_audio_conf_window_t1

0xb531,	// (0x000a89ec) list_single_graphic_popup_conf2_pane_ParamLimits

0xb531,	// (0x000a89ec) list_single_graphic_popup_conf2_pane

0xb544,	// (0x000a89ff) list_highlight_pane_cp04

0xbda6,	// (0x000a9261) list_single_graphic_popup_conf2_pane_g1

0xb555,	// (0x000a8a10) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000ac9cd) list_single_graphic_popup_conf2_pane_g

0xc8ba,	// (0x000a9d75) list_single_graphic_popup_conf2_pane_t1

0xc8c8,	// (0x000a9d83) bg_popup_call2_act_pane_cp01_ParamLimits

0xc8c8,	// (0x000a9d83) bg_popup_call2_act_pane_cp01

0xc952,	// (0x000a9e0d) call_type_pane_cp05_ParamLimits

0xc952,	// (0x000a9e0d) call_type_pane_cp05

0xc9a6,	// (0x000a9e61) popup_call2_audio_second_window_g1_ParamLimits

0xc9a6,	// (0x000a9e61) popup_call2_audio_second_window_g1

0xc9fa,	// (0x000a9eb5) popup_call2_audio_second_window_g2_ParamLimits

0xc9fa,	// (0x000a9eb5) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000ac9d2) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000ac9d2) popup_call2_audio_second_window_g

0xca5f,	// (0x000a9f1a) popup_call2_audio_second_window_t1_ParamLimits

0xca5f,	// (0x000a9f1a) popup_call2_audio_second_window_t1

0xcb1a,	// (0x000a9fd5) popup_call2_audio_second_window_t2_ParamLimits

0xcb1a,	// (0x000a9fd5) popup_call2_audio_second_window_t2

0xcb6d,	// (0x000aa028) popup_call2_audio_second_window_t3_ParamLimits

0xcb6d,	// (0x000aa028) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000ac9d9) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000ac9d9) popup_call2_audio_second_window_t

0x0969,	// (0x0009de24) bg_popup_call2_in_pane_cp02

0x0973,	// (0x0009de2e) call_type_pane_cp04

0x097b,	// (0x0009de36) popup_call2_audio_wait_window_g1

0x0983,	// (0x0009de3e) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000ac5b4) popup_call2_audio_wait_window_g

0x098b,	// (0x0009de46) popup_call2_audio_wait_window_t3

0xcc60,	// (0x000aa11b) bg_popup_call2_act_pane_ParamLimits

0xcc60,	// (0x000aa11b) bg_popup_call2_act_pane

0xcd20,	// (0x000aa1db) call_type_pane_cp03_ParamLimits

0xcd20,	// (0x000aa1db) call_type_pane_cp03

0xcd84,	// (0x000aa23f) popup_call2_audio_first_window_g1_ParamLimits

0xcd84,	// (0x000aa23f) popup_call2_audio_first_window_g1

0xcdf4,	// (0x000aa2af) popup_call2_audio_first_window_g2_ParamLimits

0xcdf4,	// (0x000aa2af) popup_call2_audio_first_window_g2

0xb8ff,	// (0x000a8dba) popup_call2_audio_first_window_g3_ParamLimits

0xb8ff,	// (0x000a8dba) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000ac9e2) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000ac9e2) popup_call2_audio_first_window_g

0xced2,	// (0x000aa38d) popup_call2_audio_first_window_t1_ParamLimits

0xced2,	// (0x000aa38d) popup_call2_audio_first_window_t1

0xcfd5,	// (0x000aa490) popup_call2_audio_first_window_t4_ParamLimits

0xcfd5,	// (0x000aa490) popup_call2_audio_first_window_t4

0xd0b8,	// (0x000aa573) popup_call2_audio_first_window_t5_ParamLimits

0xd0b8,	// (0x000aa573) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000ac9ed) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000ac9ed) popup_call2_audio_first_window_t

0xa449,	// (0x000a7904) bg_popup_call2_act_pane_g1

0xd76e,	// (0x000aac29) popup_cale_lunar_info_window_t1

0xd77c,	// (0x000aac37) popup_cale_lunar_info_window_t2

0xd78a,	// (0x000aac45) popup_cale_lunar_info_window_t3

0x0969,	// (0x0009de24) bg_popup_call2_bubble_pane

0xd1b9,	// (0x000aa674) bg_popup_call2_in_pane_cp01_ParamLimits

0xd1b9,	// (0x000aa674) bg_popup_call2_in_pane_cp01

0x0621,	// (0x0009dadc) call_type_pane_cp02

0xd201,	// (0x000aa6bc) popup_call2_audio_out_window_g1_ParamLimits

0xd201,	// (0x000aa6bc) popup_call2_audio_out_window_g1

0xd22d,	// (0x000aa6e8) popup_call2_audio_out_window_g2_ParamLimits

0xd22d,	// (0x000aa6e8) popup_call2_audio_out_window_g2

0xd255,	// (0x000aa710) popup_call2_audio_out_window_g3_ParamLimits

0xd255,	// (0x000aa710) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000ac9f6) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000ac9f6) popup_call2_audio_out_window_g

0xd290,	// (0x000aa74b) popup_call2_audio_out_window_t1_ParamLimits

0xd290,	// (0x000aa74b) popup_call2_audio_out_window_t1

0xd2ef,	// (0x000aa7aa) popup_call2_audio_out_window_t2_ParamLimits

0xd2ef,	// (0x000aa7aa) popup_call2_audio_out_window_t2

0xd343,	// (0x000aa7fe) popup_call2_audio_out_window_t3_ParamLimits

0xd343,	// (0x000aa7fe) popup_call2_audio_out_window_t3

0xd359,	// (0x000aa814) popup_call2_audio_out_window_t4_ParamLimits

0xd359,	// (0x000aa814) popup_call2_audio_out_window_t4

0xd36f,	// (0x000aa82a) popup_call2_audio_out_window_t5_ParamLimits

0xd36f,	// (0x000aa82a) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000ac9ff) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000ac9ff) popup_call2_audio_out_window_t

0xd3d3,	// (0x000aa88e) bg_popup_call2_in_pane_ParamLimits

0xd3d3,	// (0x000aa88e) bg_popup_call2_in_pane

0xd42f,	// (0x000aa8ea) popup_call2_audio_in_window_g1_ParamLimits

0xd42f,	// (0x000aa8ea) popup_call2_audio_in_window_g1

0xd467,	// (0x000aa922) popup_call2_audio_in_window_g2_ParamLimits

0xd467,	// (0x000aa922) popup_call2_audio_in_window_g2

0xd49f,	// (0x000aa95a) popup_call2_audio_in_window_g3_ParamLimits

0xd49f,	// (0x000aa95a) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000aca0c) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000aca0c) popup_call2_audio_in_window_g

0xd4f7,	// (0x000aa9b2) popup_call2_audio_in_window_t1_ParamLimits

0xd4f7,	// (0x000aa9b2) popup_call2_audio_in_window_t1

0xd5c0,	// (0x000aaa7b) popup_call2_audio_in_window_t2_ParamLimits

0xd5c0,	// (0x000aaa7b) popup_call2_audio_in_window_t2

0xd640,	// (0x000aaafb) popup_call2_audio_in_window_t3_ParamLimits

0xd640,	// (0x000aaafb) popup_call2_audio_in_window_t3

0xd65a,	// (0x000aab15) popup_call2_audio_in_window_t4_ParamLimits

0xd65a,	// (0x000aab15) popup_call2_audio_in_window_t4

0xd66c,	// (0x000aab27) popup_call2_audio_in_window_t5_ParamLimits

0xd66c,	// (0x000aab27) popup_call2_audio_in_window_t5

0xd681,	// (0x000aab3c) popup_call2_audio_in_window_t6_ParamLimits

0xd681,	// (0x000aab3c) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000aca15) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000aca15) popup_call2_audio_in_window_t

0xa449,	// (0x000a7904) bg_popup_call2_in_pane_g1

0xd798,	// (0x000aac53) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x000aca7d) popup_cale_lunar_info_window_t

0xa451,	// (0x000a790c) bg_popup_call2_rect_pane_ParamLimits

0xa451,	// (0x000a790c) bg_popup_call2_rect_pane

0x0969,	// (0x0009de24) call2_cli_visual_graphic_pane

0x0969,	// (0x0009de24) call2_cli_visual_text_pane

0xa9f8,	// (0x000a7eb3) smil_status_volume_pane_g3

0x0002,

0xa5b1,	// (0x000a7a6c) call2_cli_visual_graphic_pane_g1

0xa5b1,	// (0x000a7a6c) call2_cli_visual_graphic_pane_g2

0xa5b1,	// (0x000a7a6c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000aca22) call2_cli_visual_graphic_pane_g

0xd696,	// (0x000aab51) bg_popup_call2_rect_pane_g1

0xa63d,	// (0x000a7af8) bg_popup_call2_rect_pane_g2

0xd69e,	// (0x000aab59) bg_popup_call2_rect_pane_g3

0xd6a6,	// (0x000aab61) bg_popup_call2_rect_pane_g4

0xd6ae,	// (0x000aab69) bg_popup_call2_rect_pane_g5

0xd6b6,	// (0x000aab71) bg_popup_call2_rect_pane_g6

0xd6be,	// (0x000aab79) bg_popup_call2_rect_pane_g7

0xd6c6,	// (0x000aab81) bg_popup_call2_rect_pane_g8

0xd6ce,	// (0x000aab89) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000aca29) bg_popup_call2_rect_pane_g

0xd6d6,	// (0x000aab91) bg_popup_call2_bubble_pane_g1

0xd6de,	// (0x000aab99) bg_popup_call2_bubble_pane_g2

0xd6e6,	// (0x000aaba1) bg_popup_call2_bubble_pane_g3

0xd6ee,	// (0x000aaba9) bg_popup_call2_bubble_pane_g4

0xd6f6,	// (0x000aabb1) bg_popup_call2_bubble_pane_g5

0xd6fe,	// (0x000aabb9) bg_popup_call2_bubble_pane_g6

0xd706,	// (0x000aabc1) bg_popup_call2_bubble_pane_g7

0xd70e,	// (0x000aabc9) bg_popup_call2_bubble_pane_g8

0xd716,	// (0x000aabd1) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000aca3c) bg_popup_call2_bubble_pane_g

0x0f05,	// (0x0009e3c0) aid_cale_week_size_cell_pane

0x1589,	// (0x0009ea44) aid_cams_cif_uncrop_pane_ParamLimits

0x1589,	// (0x0009ea44) aid_cams_cif_uncrop_pane

0x1739,	// (0x0009ebf4) aid_cams_size_cell_ParamLimits

0x1739,	// (0x0009ebf4) aid_cams_size_cell

0x174d,	// (0x0009ec08) grid_cams_pane_ParamLimits

0x1767,	// (0x0009ec22) linegrid_cams_pane_ParamLimits

0x1947,	// (0x0009ee02) call_video_pane_t1

0x1965,	// (0x0009ee20) call_video_pane_t2

0x0001,

0xf26e,	// (0x000ac729) call_video_pane_t

0x1d91,	// (0x0009f24c) aid_cale_month_size_cell_pane_ParamLimits

0x1d91,	// (0x0009f24c) aid_cale_month_size_cell_pane

0xf60b,	// (0x000acac6) smil_status_volume_pane_g

0xaa05,	// (0x000a7ec0) volume_smil_pane_ParamLimits

0xa28c,	// (0x000a7747) aid_popup2_width_pane

0x0e5f,	// (0x0009e31a) cell_qdial_pane_g4_ParamLimits

0x0e5f,	// (0x0009e31a) cell_qdial_pane_g4

0x2c26,	// (0x000a00e1) aid_blid_cardinal_pane_ParamLimits

0x2c32,	// (0x000a00ed) aid_blid_destination_pane_ParamLimits

0x2c32,	// (0x000a00ed) aid_blid_destination_pane

0xa451,	// (0x000a790c) bg_popup_call_poc_act_pane_ParamLimits

0xa451,	// (0x000a790c) bg_popup_call_poc_act_pane

0xa451,	// (0x000a790c) bg_popup_call_poc_inact_pane_ParamLimits

0xa451,	// (0x000a790c) bg_popup_call_poc_inact_pane

0xd71e,	// (0x000aabd9) bg_popup_call_poc_act_pane_g1

0xd726,	// (0x000aabe1) bg_popup_call_poc_act_pane_g2

0xd72e,	// (0x000aabe9) bg_popup_call_poc_act_pane_g3

0xd6ee,	// (0x000aaba9) bg_popup_call_poc_act_pane_g4

0xd6f6,	// (0x000aabb1) bg_popup_call_poc_act_pane_g5

0xd736,	// (0x000aabf1) bg_popup_call_poc_act_pane_g6

0xd706,	// (0x000aabc1) bg_popup_call_poc_act_pane_g7

0xd73e,	// (0x000aabf9) bg_popup_call_poc_act_pane_g8

0x0969,	// (0x0009de24) main_usb_pane

0xa9ac,	// (0x000a7e67) popup_cale_lunar_info_window

0x1c3d,	// (0x0009f0f8) im_reading_pane_t1_ParamLimits

0xa874,	// (0x000a7d2f) list_im_pane_ParamLimits

0xa885,	// (0x000a7d40) scroll_pane_cp07_ParamLimits

0x0969,	// (0x0009de24) grid_highlight_pane_cp012

0xa451,	// (0x000a790c) mup_scale_pane_ParamLimits

0xb9eb,	// (0x000a8ea6) main_usb_pane_g1_ParamLimits

0xb9eb,	// (0x000a8ea6) main_usb_pane_g1

0x385b,	// (0x000a0d16) main_usb_pane_g2_ParamLimits

0x385b,	// (0x000a0d16) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x000aca66) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x000aca66) main_usb_pane_g

0x3871,	// (0x000a0d2c) main_usb_pane_t1_ParamLimits

0x3871,	// (0x000a0d2c) main_usb_pane_t1

0x3883,	// (0x000a0d3e) main_usb_pane_t2_ParamLimits

0x3883,	// (0x000a0d3e) main_usb_pane_t2

0x3895,	// (0x000a0d50) main_usb_pane_t3_ParamLimits

0x3895,	// (0x000a0d50) main_usb_pane_t3

0x38a7,	// (0x000a0d62) main_usb_pane_t4_ParamLimits

0x38a7,	// (0x000a0d62) main_usb_pane_t4

0x38b9,	// (0x000a0d74) main_usb_pane_t5_ParamLimits

0x38b9,	// (0x000a0d74) main_usb_pane_t5

0x38cb,	// (0x000a0d86) main_usb_pane_t6_ParamLimits

0x38cb,	// (0x000a0d86) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x000aca6b) main_usb_pane_t_ParamLimits

0x2bd5,	// (0x000a0090) aid_text_placing

0x2bde,	// (0x000a0099) main_location2_pane_t1_ParamLimits

0x2bf0,	// (0x000a00ab) main_location2_pane_t2_ParamLimits

0x2c02,	// (0x000a00bd) main_location2_pane_t3_ParamLimits

0x2c14,	// (0x000a00cf) main_location2_pane_t4_ParamLimits

0x2c14,	// (0x000a00cf) main_location2_pane_t4

0xf3cf,	// (0x000ac88a) main_location2_pane_t_ParamLimits

0xa48d,	// (0x000a7948) find_pinb_pane_g2_ParamLimits

0xa48d,	// (0x000a7948) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x000ac5da) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x000ac5da) find_pinb_pane_g

0xa499,	// (0x000a7954) find_pinb_pane_t1_ParamLimits

0xa4ab,	// (0x000a7966) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x000ac5df) find_pinb_pane_t_ParamLimits

0x0969,	// (0x0009de24) main_call3_pane

0x227c,	// (0x0009f737) cale_month_day_heading_pane_t1_ParamLimits

0x2302,	// (0x0009f7bd) cale_month_day_heading_pane_t2_ParamLimits

0x237b,	// (0x0009f836) cale_month_day_heading_pane_t3_ParamLimits

0x23f4,	// (0x0009f8af) cale_month_day_heading_pane_t4_ParamLimits

0x2475,	// (0x0009f930) cale_month_day_heading_pane_t5_ParamLimits

0x24fe,	// (0x0009f9b9) cale_month_day_heading_pane_t6_ParamLimits

0x2587,	// (0x0009fa42) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000ac761) cale_month_day_heading_pane_t_ParamLimits

0xb14a,	// (0x000a8605) smil_status_volume_pane

0x3356,	// (0x000a0811) postcard_address_pane_ParamLimits

0x3356,	// (0x000a0811) postcard_address_pane

0x3368,	// (0x000a0823) postcard_message_pane_ParamLimits

0x3368,	// (0x000a0823) postcard_message_pane

0x3839,	// (0x000a0cf4) call2_cli_visual_pane_t1_ParamLimits

0x3839,	// (0x000a0cf4) call2_cli_visual_pane_t1

0x406b,	// (0x000a1526) postcard_message_pane_t1_ParamLimits

0x406b,	// (0x000a1526) postcard_message_pane_t1

0x4054,	// (0x000a150f) postcard_address_pane_t1_ParamLimits

0x4054,	// (0x000a150f) postcard_address_pane_t1

0x4040,	// (0x000a14fb) popup_call3_audio_in_window_ParamLimits

0x4040,	// (0x000a14fb) popup_call3_audio_in_window

0x3ecb,	// (0x000a1386) bg_popup_call3_in_pane_ParamLimits

0x3ecb,	// (0x000a1386) bg_popup_call3_in_pane

0x3f41,	// (0x000a13fc) popup_call3_audio_in_window_g1_ParamLimits

0x3f41,	// (0x000a13fc) popup_call3_audio_in_window_g1

0x3f61,	// (0x000a141c) popup_call3_audio_in_window_g2_ParamLimits

0x3f61,	// (0x000a141c) popup_call3_audio_in_window_g2

0x3f81,	// (0x000a143c) popup_call3_audio_in_window_g3_ParamLimits

0x3f81,	// (0x000a143c) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x000acacd) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x000acacd) popup_call3_audio_in_window_g

0x3fb2,	// (0x000a146d) popup_call3_audio_in_window_t1_ParamLimits

0x3fb2,	// (0x000a146d) popup_call3_audio_in_window_t1

0x3ff0,	// (0x000a14ab) popup_call3_audio_in_window_t2_ParamLimits

0x3ff0,	// (0x000a14ab) popup_call3_audio_in_window_t2

0x402e,	// (0x000a14e9) popup_call3_audio_in_window_t3_ParamLimits

0x402e,	// (0x000a14e9) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x000acad6) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x000acad6) popup_call3_audio_in_window_t

0xa769,	// (0x000a7c24) bg_popup_call3_rect_pane

0xd696,	// (0x000aab51) bg_popup_call3_rect_pane_g1

0xa63d,	// (0x000a7af8) bg_popup_call3_rect_pane_g2

0xd69e,	// (0x000aab59) bg_popup_call3_rect_pane_g3

0xd6a6,	// (0x000aab61) bg_popup_call3_rect_pane_g4

0xd6ae,	// (0x000aab69) bg_popup_call3_rect_pane_g5

0xd6b6,	// (0x000aab71) bg_popup_call3_rect_pane_g6

0xd6be,	// (0x000aab79) bg_popup_call3_rect_pane_g7

0x2f16,	// (0x000a03d1) mup_visualizer_osc_pane

0xb90d,	// (0x000a8dc8) mup_visualizer_spec_pane

0x3efb,	// (0x000a13b6) call3_video_qcif_pane_ParamLimits

0x3efb,	// (0x000a13b6) call3_video_qcif_pane

0x3f0e,	// (0x000a13c9) call3_video_qcif_uncrop_pane_ParamLimits

0x3f0e,	// (0x000a13c9) call3_video_qcif_uncrop_pane

0x3f1c,	// (0x000a13d7) call3_video_subqcif_pane_ParamLimits

0x3f1c,	// (0x000a13d7) call3_video_subqcif_pane

0x3f30,	// (0x000a13eb) call3_video_subqcif_uncrop_pane_ParamLimits

0x3f30,	// (0x000a13eb) call3_video_subqcif_uncrop_pane

0x3fa1,	// (0x000a145c) popup_call3_audio_in_window_g4_ParamLimits

0x3fa1,	// (0x000a145c) popup_call3_audio_in_window_g4

0x3eba,	// (0x000a1375) mup_spec_half_pane

0x3ec3,	// (0x000a137e) mup_spec_half_pane_cp

0xd8fb,	// (0x000aadb6) mup_osc_middle_pane

0xd904,	// (0x000aadbf) mup_visualizer_osc_pane_g1

0x3e9a,	// (0x000a1355) mup_spec_bar_pane_ParamLimits

0x3e9a,	// (0x000a1355) mup_spec_bar_pane

0xd8e8,	// (0x000aada3) mup_spec_bar_pane_g1

0xd8f2,	// (0x000aadad) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000acac1) mup_spec_bar_pane_g

0x0f05,	// (0x0009e3c0) aid_cale_week_size_cell_pane_ParamLimits

0x0f1f,	// (0x0009e3da) bg_cale_heading_pane_ParamLimits

0xa6c2,	// (0x000a7b7d) bg_cale_pane_cp01_ParamLimits

0x0f37,	// (0x0009e3f2) cale_week_corner_pane_ParamLimits

0x0f56,	// (0x0009e411) cale_week_day_heading_pane_ParamLimits

0x0f73,	// (0x0009e42e) cale_week_scroll_pane_g1_ParamLimits

0x0f86,	// (0x0009e441) cale_week_scroll_pane_g2_ParamLimits

0x0f9e,	// (0x0009e459) cale_week_scroll_pane_g3_ParamLimits

0x0fb6,	// (0x0009e471) cale_week_scroll_pane_g4_ParamLimits

0x0fce,	// (0x0009e489) cale_week_scroll_pane_g5_ParamLimits

0x0fee,	// (0x0009e4a9) cale_week_scroll_pane_g6_ParamLimits

0x100e,	// (0x0009e4c9) cale_week_scroll_pane_g7_ParamLimits

0x102e,	// (0x0009e4e9) cale_week_scroll_pane_g8_ParamLimits

0x1052,	// (0x0009e50d) cale_week_scroll_pane_g9_ParamLimits

0x106a,	// (0x0009e525) cale_week_scroll_pane_g10_ParamLimits

0x1082,	// (0x0009e53d) cale_week_scroll_pane_g11_ParamLimits

0x109a,	// (0x0009e555) cale_week_scroll_pane_g12_ParamLimits

0x10b2,	// (0x0009e56d) cale_week_scroll_pane_g13_ParamLimits

0x10b2,	// (0x0009e56d) cale_week_scroll_pane_g14_ParamLimits

0x10b2,	// (0x0009e56d) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000ac66b) cale_week_scroll_pane_g_ParamLimits

0x10ee,	// (0x0009e5a9) cale_week_time_pane_ParamLimits

0x1112,	// (0x0009e5cd) grid_cale_week_pane_ParamLimits

0xa6df,	// (0x000a7b9a) listscroll_cale_week_pane_t1

0xa6f1,	// (0x000a7bac) scroll_pane_cp08_ParamLimits

0x1df1,	// (0x0009f2ac) cale_month_corner_pane_ParamLimits

0xb120,	// (0x000a85db) cale_month_pane_t1

0x220f,	// (0x0009f6ca) cale_month_week_pane_ParamLimits

0x2a31,	// (0x0009feec) popup_call_status_window_g1_ParamLimits

0x2a45,	// (0x0009ff00) popup_call_status_window_g2_ParamLimits

0x2a59,	// (0x0009ff14) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000ac811) popup_call_status_window_g_ParamLimits

0xb4c4,	// (0x000a897f) aid_call2_pane

0x318a,	// (0x000a0645) msg_header_pane_g1

0x3356,	// (0x000a0811) postcard_address2_pane_ParamLimits

0x3356,	// (0x000a0811) postcard_address2_pane

0x3368,	// (0x000a0823) postcard_message2_pane_ParamLimits

0x3368,	// (0x000a0823) postcard_message2_pane

0x3e4c,	// (0x000a1307) message2_row_pane_ParamLimits

0x3e4c,	// (0x000a1307) message2_row_pane

0x3e68,	// (0x000a1323) address2_row_pane_ParamLimits

0x3e68,	// (0x000a1323) address2_row_pane

0xd8b6,	// (0x000aad71) postcard_message2_row_pane_g1

0xd8be,	// (0x000aad79) postcard_message2_row_pane_t1

0xd8b6,	// (0x000aad71) address2_row_pane_g1

0xd8be,	// (0x000aad79) address2_row_pane_t1

0x1442,	// (0x0009e8fd) aid_size_cell_vorec

0x0969,	// (0x0009de24) main_rss_pane

0x3e7b,	// (0x000a1336) rss_list_single_pane_ParamLimits

0x3e7b,	// (0x000a1336) rss_list_single_pane

0xd8cc,	// (0x000aad87) rss_list_single_pane_t1

0xd8da,	// (0x000aad95) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x000acabc) rss_list_single_pane_t

0x0969,	// (0x0009de24) main_camera2_pane

0x0969,	// (0x0009de24) main_video2_pane

0x40e4,	// (0x000a159f) cams_zoom_pane_cp2_ParamLimits

0x40e4,	// (0x000a159f) cams_zoom_pane_cp2

0x4104,	// (0x000a15bf) image2_vga_pane_ParamLimits

0x4104,	// (0x000a15bf) image2_vga_pane

0x4155,	// (0x000a1610) main_camera2_pane_g1_ParamLimits

0x4155,	// (0x000a1610) main_camera2_pane_g1

0x4175,	// (0x000a1630) main_camera2_pane_g2_ParamLimits

0x4175,	// (0x000a1630) main_camera2_pane_g2

0x4195,	// (0x000a1650) main_camera2_pane_g3_ParamLimits

0x4195,	// (0x000a1650) main_camera2_pane_g3

0x41b5,	// (0x000a1670) main_camera2_pane_g4_ParamLimits

0x41b5,	// (0x000a1670) main_camera2_pane_g4

0x41d5,	// (0x000a1690) main_camera2_pane_g5_ParamLimits

0x41d5,	// (0x000a1690) main_camera2_pane_g5

0x41f5,	// (0x000a16b0) main_camera2_pane_g6_ParamLimits

0x41f5,	// (0x000a16b0) main_camera2_pane_g6

0x4215,	// (0x000a16d0) main_camera2_pane_g7_ParamLimits

0x4215,	// (0x000a16d0) main_camera2_pane_g7

0x4235,	// (0x000a16f0) main_camera2_pane_g8_ParamLimits

0x4235,	// (0x000a16f0) main_camera2_pane_g8

0x0008,

0xf622,	// (0x000acadd) main_camera2_pane_g_ParamLimits

0xf622,	// (0x000acadd) main_camera2_pane_g

0x4275,	// (0x000a1730) main_camera2_pane_t1_ParamLimits

0x4275,	// (0x000a1730) main_camera2_pane_t1

0x42aa,	// (0x000a1765) main_camera2_pane_t2_ParamLimits

0x42aa,	// (0x000a1765) main_camera2_pane_t2

0x42d0,	// (0x000a178b) main_camera2_pane_t3_ParamLimits

0x42d0,	// (0x000a178b) main_camera2_pane_t3

0x432e,	// (0x000a17e9) main_camera2_pane_t4_ParamLimits

0x432e,	// (0x000a17e9) main_camera2_pane_t4

0x0006,

0xf635,	// (0x000acaf0) main_camera2_pane_t_ParamLimits

0xf635,	// (0x000acaf0) main_camera2_pane_t

0x43c0,	// (0x000a187b) cams_zoom_pane_cp4_ParamLimits

0x43c0,	// (0x000a187b) cams_zoom_pane_cp4

0x43d6,	// (0x000a1891) image2_cif_pane_ParamLimits

0x43d6,	// (0x000a1891) image2_cif_pane

0x4401,	// (0x000a18bc) image2_subqcif_pane_ParamLimits

0x4401,	// (0x000a18bc) image2_subqcif_pane

0x441b,	// (0x000a18d6) main_video2_pane_g1_ParamLimits

0x441b,	// (0x000a18d6) main_video2_pane_g1

0x4435,	// (0x000a18f0) main_video2_pane_g2_ParamLimits

0x4435,	// (0x000a18f0) main_video2_pane_g2

0x444b,	// (0x000a1906) main_video2_pane_g3_ParamLimits

0x444b,	// (0x000a1906) main_video2_pane_g3

0x4461,	// (0x000a191c) main_video2_pane_g4_ParamLimits

0x4461,	// (0x000a191c) main_video2_pane_g4

0x4477,	// (0x000a1932) main_video2_pane_g5_ParamLimits

0x4477,	// (0x000a1932) main_video2_pane_g5

0x448d,	// (0x000a1948) main_video2_pane_g6_ParamLimits

0x448d,	// (0x000a1948) main_video2_pane_g6

0x0005,

0xf644,	// (0x000acaff) main_video2_pane_g_ParamLimits

0xf644,	// (0x000acaff) main_video2_pane_g

0x44a7,	// (0x000a1962) main_video2_pane_t1_ParamLimits

0x44a7,	// (0x000a1962) main_video2_pane_t1

0x44cb,	// (0x000a1986) main_video2_pane_t2_ParamLimits

0x44cb,	// (0x000a1986) main_video2_pane_t2

0x4519,	// (0x000a19d4) main_video2_pane_t3_ParamLimits

0x4519,	// (0x000a19d4) main_video2_pane_t3

0x0002,

0xf651,	// (0x000acb0c) main_video2_pane_t_ParamLimits

0xf651,	// (0x000acb0c) main_video2_pane_t

0x3986,	// (0x000a0e41) call_muted_g2

0x0001,

0xf5f3,	// (0x000acaae) call_muted_g

0x0969,	// (0x0009de24) main_mup2_pane

0x455d,	// (0x000a1a18) main_mup2_pane_g1_ParamLimits

0x455d,	// (0x000a1a18) main_mup2_pane_g1

0x4569,	// (0x000a1a24) main_mup2_pane_g2_ParamLimits

0x4569,	// (0x000a1a24) main_mup2_pane_g2

0xaa73,	// (0x000a7f2e) main_mup_pane_g13_cp1

0xaa7b,	// (0x000a7f36) mup_volume_pane_cp1

0x4585,	// (0x000a1a40) main_mup2_pane_g4_ParamLimits

0x4585,	// (0x000a1a40) main_mup2_pane_g4

0x4597,	// (0x000a1a52) main_mup2_pane_g5_ParamLimits

0x4597,	// (0x000a1a52) main_mup2_pane_g5

0x45a9,	// (0x000a1a64) main_mup2_pane_g6_ParamLimits

0x45a9,	// (0x000a1a64) main_mup2_pane_g6

0x45bb,	// (0x000a1a76) main_mup2_pane_g7_ParamLimits

0x45bb,	// (0x000a1a76) main_mup2_pane_g7

0x0006,

0xf658,	// (0x000acb13) main_mup2_pane_g_ParamLimits

0xf658,	// (0x000acb13) main_mup2_pane_g

0x45d3,	// (0x000a1a8e) main_mup2_pane_t1_ParamLimits

0x45d3,	// (0x000a1a8e) main_mup2_pane_t1

0x45e9,	// (0x000a1aa4) main_mup2_pane_t2_ParamLimits

0x45e9,	// (0x000a1aa4) main_mup2_pane_t2

0x45ff,	// (0x000a1aba) main_mup2_pane_t3_ParamLimits

0x45ff,	// (0x000a1aba) main_mup2_pane_t3

0x4615,	// (0x000a1ad0) main_mup2_pane_t4_ParamLimits

0x4615,	// (0x000a1ad0) main_mup2_pane_t4

0x462d,	// (0x000a1ae8) main_mup2_pane_t5_ParamLimits

0x462d,	// (0x000a1ae8) main_mup2_pane_t5

0x4645,	// (0x000a1b00) main_mup2_pane_t6_ParamLimits

0x4645,	// (0x000a1b00) main_mup2_pane_t6

0x0005,

0xf667,	// (0x000acb22) main_mup2_pane_t_ParamLimits

0xf667,	// (0x000acb22) main_mup2_pane_t

0x4675,	// (0x000a1b30) mup2_visualizer_pane_ParamLimits

0x4675,	// (0x000a1b30) mup2_visualizer_pane

0x46a3,	// (0x000a1b5e) mup_progress_pane_cp_ParamLimits

0x46a3,	// (0x000a1b5e) mup_progress_pane_cp

0xaa5e,	// (0x000a7f19) mup_volume_pane_cp_ParamLimits

0xaa5e,	// (0x000a7f19) mup_volume_pane_cp

0x46b7,	// (0x000a1b72) mup2_visualizer_pane_g1_ParamLimits

0x46b7,	// (0x000a1b72) mup2_visualizer_pane_g1

0xd93b,	// (0x000aadf6) mup2_visualizer_pane_g2_ParamLimits

0xd93b,	// (0x000aadf6) mup2_visualizer_pane_g2

0x46ce,	// (0x000a1b89) mup2_visualizer_pane_g3_ParamLimits

0x46ce,	// (0x000a1b89) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000acb2f) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000acb2f) mup2_visualizer_pane_g

0xbc28,	// (0x000a90e3) aid_size_cell_fmradio

0x3b38,	// (0x000a0ff3) aid_height_parent_landcape

0xaf7e,	// (0x000a8439) wml_content_pane_cp

0xaf86,	// (0x000a8441) wml_tabs_pane

0xaf8f,	// (0x000a844a) popup_wml_miniature_window

0xaf97,	// (0x000a8452) scroll_pane_cp021

0xafab,	// (0x000a8466) wml_content_pane_comp8

0x0969,	// (0x0009de24) bg_popup_sub_pane_cp05

0xd959,	// (0x000aae14) popup_wml_miniature_window_g1

0xd961,	// (0x000aae1c) wml_miniature_view_pane

0x46da,	// (0x000a1b95) aid_size_wml_view

0x46e2,	// (0x000a1b9d) wml_miniature_view_pane_g1

0x46eb,	// (0x000a1ba6) wml_miniature_view_pane_g2

0x46f4,	// (0x000a1baf) wml_miniature_view_pane_g3

0x46fc,	// (0x000a1bb7) wml_miniature_view_pane_g4

0x4704,	// (0x000a1bbf) wml_miniature_view_pane_g5

0x470c,	// (0x000a1bc7) wml_miniature_view_pane_g6

0x4714,	// (0x000a1bcf) wml_miniature_view_pane_g7

0x471c,	// (0x000a1bd7) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000acb36) wml_miniature_view_pane_g

0xd969,	// (0x000aae24) background_graphic_ParamLimits

0xd969,	// (0x000aae24) background_graphic

0xd975,	// (0x000aae30) wml_tabs_2_pane

0xd97e,	// (0x000aae39) wml_tabs_3_pane_ParamLimits

0xd97e,	// (0x000aae39) wml_tabs_3_pane

0xd990,	// (0x000aae4b) wml_tabs_4_pane_ParamLimits

0xd990,	// (0x000aae4b) wml_tabs_4_pane

0xd9a6,	// (0x000aae61) wml_tabs_5_pane_ParamLimits

0xd9a6,	// (0x000aae61) wml_tabs_5_pane

0xd9c0,	// (0x000aae7b) wml_tabs_pane_g2_ParamLimits

0xd9c0,	// (0x000aae7b) wml_tabs_pane_g2

0xd9d4,	// (0x000aae8f) wml_tabs_pane_g3_ParamLimits

0xd9d4,	// (0x000aae8f) wml_tabs_pane_g3

0x4724,	// (0x000a1bdf) wml_tabs_2_active_pane_ParamLimits

0x4724,	// (0x000a1bdf) wml_tabs_2_active_pane

0x4738,	// (0x000a1bf3) wml_tabs_2_passive_pane_ParamLimits

0x4738,	// (0x000a1bf3) wml_tabs_2_passive_pane

0x474c,	// (0x000a1c07) wml_tabs_3_active_pane_cp_ParamLimits

0x474c,	// (0x000a1c07) wml_tabs_3_active_pane_cp

0x4761,	// (0x000a1c1c) wml_tabs_3_passive_pane_ParamLimits

0x4761,	// (0x000a1c1c) wml_tabs_3_passive_pane

0x4774,	// (0x000a1c2f) wml_tabs_3_passive_pane_cp_ParamLimits

0x4774,	// (0x000a1c2f) wml_tabs_3_passive_pane_cp

0x478b,	// (0x000a1c46) tabs_4_active_pane

0x4793,	// (0x000a1c4e) tabs_4_passive_pane

0x479d,	// (0x000a1c58) tabs_4_passive_pane_cp

0x47a5,	// (0x000a1c60) tabs_4_passive_pane_cp2

0x3853,	// (0x000a0d0e) aid_height_text

0x2eec,	// (0x000a03a7) mup_volume_cont_pane_ParamLimits

0x2eec,	// (0x000a03a7) mup_volume_cont_pane

0x0ae3,	// (0x0009df9e) aid_size_cell_pinb

0x0aed,	// (0x0009dfa8) aid_size_list_pinb

0x468f,	// (0x000a1b4a) mup2_volume_cont_pane_ParamLimits

0x468f,	// (0x000a1b4a) mup2_volume_cont_pane

0xaa4a,	// (0x000a7f05) mup2_volume_cont_pane_g1_ParamLimits

0xaa4a,	// (0x000a7f05) mup2_volume_cont_pane_g1

0x02f7,	// (0x0009d7b2) aid_size_cell_touch_ParamLimits

0x02f7,	// (0x0009d7b2) aid_size_cell_touch

0x0524,	// (0x0009d9df) touch_pane_ParamLimits

0x0524,	// (0x0009d9df) touch_pane

0xa300,	// (0x000a77bb) main_rss2_pane

0xd9f1,	// (0x000aaeac) listscroll_rss2_pane

0xd9fa,	// (0x000aaeb5) rss2_navigation_pane

0xda02,	// (0x000aaebd) list_rss2_pane

0xb607,	// (0x000a8ac2) scroll_pane_cp22

0xda0a,	// (0x000aaec5) rss2_navigation_pane_g1

0xda13,	// (0x000aaece) rss2_navigation_pane_g2

0xda1b,	// (0x000aaed6) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000acb47) rss2_navigation_pane_g

0xda23,	// (0x000aaede) rss2_navigation_pane_t1

0x47af,	// (0x000a1c6a) rss2_list_single_pane_ParamLimits

0x47af,	// (0x000a1c6a) rss2_list_single_pane

0xda31,	// (0x000aaeec) rss2_list_single_pane_t2

0xda3f,	// (0x000aaefa) rss2_list_single_pane_t3_ParamLimits

0xda3f,	// (0x000aaefa) rss2_list_single_pane_t3

0xda5c,	// (0x000aaf17) rss2_list_single_pane_t4

0x283b,	// (0x0009fcf6) smil_status_pane_g1

0xa2f2,	// (0x000a77ad) main_image2_pane_ParamLimits

0xa2f2,	// (0x000a77ad) main_image2_pane

0x4255,	// (0x000a1710) main_camera2_pane_g9_ParamLimits

0x4255,	// (0x000a1710) main_camera2_pane_g9

0x4383,	// (0x000a183e) main_camera2_pane_t5_ParamLimits

0x4383,	// (0x000a183e) main_camera2_pane_t5

0xaa1a,	// (0x000a7ed5) main_camera2_pane_t6_ParamLimits

0xaa1a,	// (0x000a7ed5) main_camera2_pane_t6

0x47c4,	// (0x000a1c7f) main_image2_pane_g1_ParamLimits

0x47c4,	// (0x000a1c7f) main_image2_pane_g1

0x358f,	// (0x000a0a4a) smil2_video_pane_ParamLimits

0x358f,	// (0x000a0a4a) smil2_video_pane

0xa2a8,	// (0x000a7763) aid_zoom_text_primary_cp

0xa2e8,	// (0x000a77a3) popup_preview_fixed_window

0xa86c,	// (0x000a7d27) im_reading_pane_g1

0x40cc,	// (0x000a1587) cams2_bc_adjust_pane_cp_ParamLimits

0x40cc,	// (0x000a1587) cams2_bc_adjust_pane_cp

0x43b2,	// (0x000a186d) cams2_bc_adjust_pane_ParamLimits

0x43b2,	// (0x000a186d) cams2_bc_adjust_pane

0x47da,	// (0x000a1c95) cams2_bc_adjust_pane_g1

0xaa83,	// (0x000a7f3e) cams2_slider_pane

0xaa8c,	// (0x000a7f47) cams2_slider_pane_g1

0xaa95,	// (0x000a7f50) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000acb4e) cams2_slider_pane_g

0x0bdb,	// (0x0009e096) calc_display_pane_ParamLimits

0x0c03,	// (0x0009e0be) calc_paper_pane_ParamLimits

0x0c26,	// (0x0009e0e1) grid_calc_pane_ParamLimits

0xa93f,	// (0x000a7dfa) popup_clock_digital_window_t1_ParamLimits

0xbad1,	// (0x000a8f8c) main_image_pane_t1

0x0bbd,	// (0x0009e078) aid_size_cell_calc_ParamLimits

0x0bbd,	// (0x0009e078) aid_size_cell_calc

0x3b90,	// (0x000a104b) popup_blid_sat_info2_window_ParamLimits

0x3b90,	// (0x000a104b) popup_blid_sat_info2_window

0xda72,	// (0x000aaf2d) aid_size_cell_blid

0xda7a,	// (0x000aaf35) bg_popup_window_pane_cp07

0xda9d,	// (0x000aaf58) grid_popup_blid_pane

0xdaa7,	// (0x000aaf62) heading_pane_cp05_ParamLimits

0xdaa7,	// (0x000aaf62) heading_pane_cp05

0xdb71,	// (0x000ab02c) cell_popup_blid_pane_ParamLimits

0xdb71,	// (0x000ab02c) cell_popup_blid_pane

0xdb95,	// (0x000ab050) cell_popup_blid_pane_g1

0xdb9d,	// (0x000ab058) cell_popup_blid_pane_t1

0x465f,	// (0x000a1b1a) mup2_indicator_pane_ParamLimits

0x465f,	// (0x000a1b1a) mup2_indicator_pane

0xa769,	// (0x000a7c24) mup2_visualizer_osc_pane

0xd947,	// (0x000aae02) mup2_visualizer_spec_pane_ParamLimits

0xd947,	// (0x000aae02) mup2_visualizer_spec_pane

0x47e2,	// (0x000a1c9d) mup2_spec_half_pane

0x47eb,	// (0x000a1ca6) mup2_spec_half_pane_cp

0x47f3,	// (0x000a1cae) mup2_spec_bar_pane_ParamLimits

0x47f3,	// (0x000a1cae) mup2_spec_bar_pane

0xd8e8,	// (0x000aada3) mup2_spec_bar_pane_g1

0xd8f2,	// (0x000aadad) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000acac1) mup2_spec_bar_pane_g

0x4813,	// (0x000a1cce) mup2_osc_middle_pane

0xd904,	// (0x000aadbf) mup2_visualizer_osc_pane_g1

0xe299,	// (0x000ab754) popup_number_entry_window_t1_ParamLimits

0xe2ac,	// (0x000ab767) popup_number_entry_window_t2_ParamLimits

0xe2be,	// (0x000ab779) popup_number_entry_window_t3_ParamLimits

0x0576,	// (0x0009da31) popup_number_entry_window_t5_ParamLimits

0x0576,	// (0x0009da31) popup_number_entry_window_t5

0xf0ca,	// (0x000ac585) popup_number_entry_window_t_ParamLimits

0xe2d0,	// (0x000ab78b) text_title_cp2_ParamLimits

0xa97e,	// (0x000a7e39) aid_hotspot_pointer_text2_pane

0xa998,	// (0x000a7e53) main_viewer_pane_g9_ParamLimits

0xa998,	// (0x000a7e53) main_viewer_pane_g9

0xb120,	// (0x000a85db) cale_month_pane_t1_ParamLimits

0xb15d,	// (0x000a8618) bg_cale_pane_ParamLimits

0xb175,	// (0x000a8630) list_cale_pane_ParamLimits

0xb186,	// (0x000a8641) listscroll_cale_day_pane_t1

0xb198,	// (0x000a8653) scroll_pane_cp09_ParamLimits

0x2f1e,	// (0x000a03d9) main_mup_eq_pane_t1_ParamLimits

0x2f1e,	// (0x000a03d9) main_mup_eq_pane_t1

0x2f38,	// (0x000a03f3) main_mup_eq_pane_t2_ParamLimits

0x2f38,	// (0x000a03f3) main_mup_eq_pane_t2

0x2f52,	// (0x000a040d) main_mup_eq_pane_t3_ParamLimits

0x2f52,	// (0x000a040d) main_mup_eq_pane_t3

0x2f6e,	// (0x000a0429) main_mup_eq_pane_t4_ParamLimits

0x2f6e,	// (0x000a0429) main_mup_eq_pane_t4

0x2f8a,	// (0x000a0445) main_mup_eq_pane_t5_ParamLimits

0x2f8a,	// (0x000a0445) main_mup_eq_pane_t5

0x2fa6,	// (0x000a0461) main_mup_eq_pane_t6_ParamLimits

0x2fa6,	// (0x000a0461) main_mup_eq_pane_t6

0x2fba,	// (0x000a0475) main_mup_eq_pane_t7_ParamLimits

0x2fba,	// (0x000a0475) main_mup_eq_pane_t7

0x2fce,	// (0x000a0489) main_mup_eq_pane_t8_ParamLimits

0x2fce,	// (0x000a0489) main_mup_eq_pane_t8

0x2fe2,	// (0x000a049d) main_mup_eq_pane_t9_ParamLimits

0x2fe2,	// (0x000a049d) main_mup_eq_pane_t9

0x2ffc,	// (0x000a04b7) main_mup_eq_pane_t10_ParamLimits

0x2ffc,	// (0x000a04b7) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000ac910) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000ac910) main_mup_eq_pane_t

0x30ab,	// (0x000a0566) mup_equalizer_pane_cp5_ParamLimits

0x30bf,	// (0x000a057a) mup_equalizer_pane_cp6_ParamLimits

0x30d3,	// (0x000a058e) mup_equalizer_pane_cp7_ParamLimits

0xa300,	// (0x000a77bb) main_gallery_pane

0xd90d,	// (0x000aadc8) smil2_volume_pane

0xd915,	// (0x000aadd0) smil_status_volume_pane_g1_ParamLimits

0xd928,	// (0x000aade3) smil_status_volume_pane_g2_ParamLimits

0xa9f8,	// (0x000a7eb3) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x000acac6) smil_status_volume_pane_g_ParamLimits

0xda7a,	// (0x000aaf35) bg_popup_window_pane_cp07_ParamLimits

0xda88,	// (0x000aaf43) blid_firmament_pane

0x481c,	// (0x000a1cd7) aid_size_cell_gallery_ParamLimits

0x481c,	// (0x000a1cd7) aid_size_cell_gallery

0x4832,	// (0x000a1ced) grid_gallery_pane_ParamLimits

0x4832,	// (0x000a1ced) grid_gallery_pane

0x484b,	// (0x000a1d06) cell_gallery_pane_ParamLimits

0x484b,	// (0x000a1d06) cell_gallery_pane

0xdbab,	// (0x000ab066) bg_cell_gallery_focus_pane_ParamLimits

0xdbab,	// (0x000ab066) bg_cell_gallery_focus_pane

0xdbbd,	// (0x000ab078) cell_gallery_pane_g1_ParamLimits

0xdbbd,	// (0x000ab078) cell_gallery_pane_g1

0x4894,	// (0x000a1d4f) cell_gallery_pane_g2_ParamLimits

0x4894,	// (0x000a1d4f) cell_gallery_pane_g2

0x48a1,	// (0x000a1d5c) cell_gallery_pane_g3_ParamLimits

0x48a1,	// (0x000a1d5c) cell_gallery_pane_g3

0xdbc9,	// (0x000ab084) cell_gallery_pane_g4_ParamLimits

0xdbc9,	// (0x000ab084) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x000acb74) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x000acb74) cell_gallery_pane_g

0xdbd5,	// (0x000ab090) bg_cell_gallery_focus_pane_g1

0xdbdd,	// (0x000ab098) bg_cell_gallery_focus_pane_g2

0xdbe5,	// (0x000ab0a0) bg_cell_gallery_focus_pane_g3

0xdbed,	// (0x000ab0a8) bg_cell_gallery_focus_pane_g4

0xdbf5,	// (0x000ab0b0) bg_cell_gallery_focus_pane_g5

0xdbfd,	// (0x000ab0b8) bg_cell_gallery_focus_pane_g6

0xdc05,	// (0x000ab0c0) bg_cell_gallery_focus_pane_g7

0xdc0d,	// (0x000ab0c8) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x000acb7d) bg_cell_gallery_focus_pane_g

0xdc15,	// (0x000ab0d0) aid_firma_cardinal

0xdc29,	// (0x000ab0e4) blid_firmament_pane_t1

0xdc40,	// (0x000ab0fb) blid_firmament_pane_t2

0xdc57,	// (0x000ab112) blid_firmament_pane_t3

0xdc6e,	// (0x000ab129) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x000acb8e) blid_firmament_pane_t

0xdc85,	// (0x000ab140) blid_sat_info_pane

0xdc95,	// (0x000ab150) blid_sat_info_pane_g1

0xdc95,	// (0x000ab150) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x000acb97) blid_sat_info_pane_g

0xdc9f,	// (0x000ab15a) blid_sat_info_pane_t1

0xdcad,	// (0x000ab168) smil2_volume_content_pane

0xdcb6,	// (0x000ab171) smil2_volume_pane_g1

0xdcbe,	// (0x000ab179) smil2_volume_content_pane_g1

0xdcc7,	// (0x000ab182) smil2_volume_content_pane_g2

0xdcd0,	// (0x000ab18b) smil2_volume_content_pane_g3

0xdcd9,	// (0x000ab194) smil2_volume_content_pane_g4

0xdce2,	// (0x000ab19d) smil2_volume_content_pane_g5

0xdceb,	// (0x000ab1a6) smil2_volume_content_pane_g6

0xdcf4,	// (0x000ab1af) smil2_volume_content_pane_g7

0xdcfd,	// (0x000ab1b8) smil2_volume_content_pane_g8

0xdd06,	// (0x000ab1c1) smil2_volume_content_pane_g9

0xdd0f,	// (0x000ab1ca) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x000acb9c) smil2_volume_content_pane_g

0x11c6,	// (0x0009e681) cale_week_day_heading_pane_t1_ParamLimits

0x11f0,	// (0x0009e6ab) cale_week_day_heading_pane_t2_ParamLimits

0x121f,	// (0x0009e6da) cale_week_day_heading_pane_t3_ParamLimits

0x124e,	// (0x0009e709) cale_week_day_heading_pane_t4_ParamLimits

0x127d,	// (0x0009e738) cale_week_day_heading_pane_t5_ParamLimits

0x12b4,	// (0x0009e76f) cale_week_day_heading_pane_t6_ParamLimits

0x12eb,	// (0x0009e7a6) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000ac68c) cale_week_day_heading_pane_t_ParamLimits

0xa70e,	// (0x000a7bc9) bg_cale_side_pane_ParamLimits

0x1315,	// (0x0009e7d0) cale_week_time_pane_t1_ParamLimits

0x132f,	// (0x0009e7ea) cale_week_time_pane_t2_ParamLimits

0x1349,	// (0x0009e804) cale_week_time_pane_t3_ParamLimits

0x1363,	// (0x0009e81e) cale_week_time_pane_t4_ParamLimits

0x137d,	// (0x0009e838) cale_week_time_pane_t5_ParamLimits

0x1397,	// (0x0009e852) cale_week_time_pane_t6_ParamLimits

0x13b1,	// (0x0009e86c) cale_week_time_pane_t7_ParamLimits

0x13cb,	// (0x0009e886) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000ac69b) cale_week_time_pane_t_ParamLimits

0x13e5,	// (0x0009e8a0) cell_cale_week_pane_g2_ParamLimits

0xa70e,	// (0x000a7bc9) bg_cale_side_pane_cp01_ParamLimits

0x2618,	// (0x0009fad3) cale_month_week_pane_t1_ParamLimits

0x2631,	// (0x0009faec) cale_month_week_pane_t2_ParamLimits

0x264a,	// (0x0009fb05) cale_month_week_pane_t3_ParamLimits

0x2663,	// (0x0009fb1e) cale_month_week_pane_t4_ParamLimits

0x267c,	// (0x0009fb37) cale_month_week_pane_t5_ParamLimits

0x2695,	// (0x0009fb50) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000ac770) cale_month_week_pane_t_ParamLimits

0xa8bb,	// (0x000a7d76) cell_cale_month_pane_g1_ParamLimits

0xa300,	// (0x000a77bb) main_cale_event_viewer_pane

0xe26f,	// (0x000ab72a) listscroll_cale_event_viewer_pane

0xdd18,	// (0x000ab1d3) list_cale_ev_pane

0xdd20,	// (0x000ab1db) scroll_pane_cp023

0xdd2c,	// (0x000ab1e7) field_cale_ev_pane_ParamLimits

0xdd2c,	// (0x000ab1e7) field_cale_ev_pane

0xdd4a,	// (0x000ab205) field_cale_ev_content_pane_ParamLimits

0xdd4a,	// (0x000ab205) field_cale_ev_content_pane

0xdd56,	// (0x000ab211) field_cale_ev_pane_g1_ParamLimits

0xdd56,	// (0x000ab211) field_cale_ev_pane_g1

0xdd62,	// (0x000ab21d) field_cale_ev_pane_g2_ParamLimits

0xdd62,	// (0x000ab21d) field_cale_ev_pane_g2

0xdd7a,	// (0x000ab235) field_cale_ev_pane_g3_ParamLimits

0xdd7a,	// (0x000ab235) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x000acbb1) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x000acbb1) field_cale_ev_pane_g

0xdd92,	// (0x000ab24d) field_cale_ev_pane_t1_ParamLimits

0xdd92,	// (0x000ab24d) field_cale_ev_pane_t1

0xdda9,	// (0x000ab264) field_cale_ev_content_pane_t1_ParamLimits

0xdda9,	// (0x000ab264) field_cale_ev_content_pane_t1

0xb9b7,	// (0x000a8e72) bg_button_pane_cp01

0x0ef3,	// (0x0009e3ae) listscroll_cale_week_pane_ParamLimits

0xa6b9,	// (0x000a7b74) popup_toolbar_window_cp01

0xa6df,	// (0x000a7b9a) listscroll_cale_week_pane_t1_ParamLimits

0x0ef3,	// (0x0009e3ae) listscroll_cale_day_pane_ParamLimits

0xa6b9,	// (0x000a7b74) popup_toolbar_window_cp02

0xb186,	// (0x000a8641) listscroll_cale_day_pane_t1_ParamLimits

0x3b56,	// (0x000a1011) main_cale_month_pane_ParamLimits

0xa9e3,	// (0x000a7e9e) popup_toolbar_window_cp03_ParamLimits

0xa9e3,	// (0x000a7e9e) popup_toolbar_window_cp03

0x3457,	// (0x000a0912) main_image_pane_g2_ParamLimits

0x3457,	// (0x000a0912) main_image_pane_g2

0x3468,	// (0x000a0923) main_image_pane_g3_ParamLimits

0x3468,	// (0x000a0923) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000ac9a2) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000ac9a2) main_image_pane_g

0xbad1,	// (0x000a8f8c) main_image_pane_t1_ParamLimits

0x3479,	// (0x000a0934) main_image_pane_t2_ParamLimits

0x3479,	// (0x000a0934) main_image_pane_t2

0x348b,	// (0x000a0946) main_image_pane_t3_ParamLimits

0x348b,	// (0x000a0946) main_image_pane_t3

0x34b3,	// (0x000a096e) main_image_pane_t4_ParamLimits

0x34b3,	// (0x000a096e) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000ac9a9) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000ac9a9) main_image_pane_t

0x34d3,	// (0x000a098e) popup_image_details_window_cp01

0x34dd,	// (0x000a0998) popup_toobar_trans_pane_cp01_ParamLimits

0x34dd,	// (0x000a0998) popup_toobar_trans_pane_cp01

0x3c6f,	// (0x000a112a) popup_image_details_window_ParamLimits

0x3c6f,	// (0x000a112a) popup_image_details_window

0xa9b6,	// (0x000a7e71) popup_image_focus_window

0x4086,	// (0x000a1541) camera2_autofocus_pane_ParamLimits

0x4086,	// (0x000a1541) camera2_autofocus_pane

0xe26f,	// (0x000ab72a) bg_popup_sub_pane_cp06

0xddc7,	// (0x000ab282) popup_image_focus_window_g1

0xddcf,	// (0x000ab28a) popup_image_focus_window_g2

0xddd7,	// (0x000ab292) popup_image_focus_window_g3

0xdddf,	// (0x000ab29a) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x000acbb8) popup_image_focus_window_g

0xdde7,	// (0x000ab2a2) popup_image_focus_window_t1

0xddf5,	// (0x000ab2b0) popup_image_focus_window_t2

0xde05,	// (0x000ab2c0) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x000acbc1) popup_image_focus_window_t

0xde13,	// (0x000ab2ce) camera2_autofocus_pane_g1

0xd577,	// (0x000aaa32) bg_tb_trans_pane_cp01

0xde21,	// (0x000ab2dc) popup_image_details_window_g1

0xde34,	// (0x000ab2ef) popup_image_details_window_g2

0x0002,

0xf718,	// (0x000acbd3) popup_image_details_window_g

0xde5d,	// (0x000ab318) popup_image_details_window_t1

0xde6f,	// (0x000ab32a) popup_image_details_window_t2

0xde88,	// (0x000ab343) popup_image_details_window_t3

0xde9c,	// (0x000ab357) popup_image_details_window_t4

0xdeb7,	// (0x000ab372) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x000acbda) popup_image_details_window_t

0xa50a,	// (0x000a79c5) bg_calc_paper_pane_ParamLimits

0xa300,	// (0x000a77bb) grid_highlight_pane_cp013

0xa51e,	// (0x000a79d9) list_calc_pane_ParamLimits

0xa530,	// (0x000a79eb) scroll_pane_cp024

0xa538,	// (0x000a79f3) bg_calc_display_pane_ParamLimits

0x0d24,	// (0x0009e1df) calc_display_pane_t1_ParamLimits

0x0d36,	// (0x0009e1f1) calc_display_pane_t2_ParamLimits

0xa544,	// (0x000a79ff) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000ac60c) calc_display_pane_t_ParamLimits

0x0df0,	// (0x0009e2ab) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000ac629) cell_calc_pane_g

0x0df9,	// (0x0009e2b4) cell_calc_pane_t1

0xa5bb,	// (0x000a7a76) grid_highlight_pane_cp02_ParamLimits

0xa5d1,	// (0x000a7a8c) toolbar_button_pane_cp01_ParamLimits

0xa5d1,	// (0x000a7a8c) toolbar_button_pane_cp01

0xbc0a,	// (0x000a90c5) temp_image_control_pane_ParamLimits

0xbc0a,	// (0x000a90c5) temp_image_control_pane

0xa2f2,	// (0x000a77ad) main_mp3_pane

0xded1,	// (0x000ab38c) temp_image_control_pane_g1_ParamLimits

0xded1,	// (0x000ab38c) temp_image_control_pane_g1

0xdedf,	// (0x000ab39a) temp_image_control_pane_g2_ParamLimits

0xdedf,	// (0x000ab39a) temp_image_control_pane_g2

0xdef1,	// (0x000ab3ac) temp_image_control_pane_g3_ParamLimits

0xdef1,	// (0x000ab3ac) temp_image_control_pane_g3

0x48de,	// (0x000a1d99) temp_image_control_pane_g4_ParamLimits

0x48de,	// (0x000a1d99) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x000acbe5) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x000acbe5) temp_image_control_pane_g

0xded1,	// (0x000ab38c) main_mp3_pane_g1

0x48f1,	// (0x000a1dac) main_mp3_pane_g2

0x0007,

0xf733,	// (0x000acbee) main_mp3_pane_g

0xdf34,	// (0x000ab3ef) main_mp3_pane_t1

0xa77b,	// (0x000a7c36) main_camera_pane_g8_ParamLimits

0xa77b,	// (0x000a7c36) main_camera_pane_g8

0x16df,	// (0x0009eb9a) main_video_pane_g7_ParamLimits

0x16df,	// (0x0009eb9a) main_video_pane_g7

0xaa38,	// (0x000a7ef3) main_camera2_pane_t7_ParamLimits

0xaa38,	// (0x000a7ef3) main_camera2_pane_t7

0xaf3e,	// (0x000a83f9) scroll_pane_cp025_ParamLimits

0xaf3e,	// (0x000a83f9) scroll_pane_cp025

0xaf52,	// (0x000a840d) scroll_pane_cp026_ParamLimits

0xaf52,	// (0x000a840d) scroll_pane_cp026

0xaf61,	// (0x000a841c) wml_content_pane_ParamLimits

0xa300,	// (0x000a77bb) main_touch_calib_pane

0x49c5,	// (0x000a1e80) main_touch_calib_pane_g1

0x49d7,	// (0x000a1e92) main_touch_calib_pane_g2

0x49e9,	// (0x000a1ea4) main_touch_calib_pane_g3

0x49fb,	// (0x000a1eb6) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000acc0c) main_touch_calib_pane_g

0x4a0d,	// (0x000a1ec8) main_touch_calib_pane_t1

0x4a27,	// (0x000a1ee2) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000acc15) main_touch_calib_pane_t

0xb6e3,	// (0x000a8b9e) mup_progress_pane_cp02

0xb718,	// (0x000a8bd3) navi_pane_g1

0xb7d3,	// (0x000a8c8e) navi_pane_mp_t3

0xa2f2,	// (0x000a77ad) main_mp3_pane_ParamLimits

0x3df4,	// (0x000a12af) navi_pane_ParamLimits

0xded1,	// (0x000ab38c) main_mp3_pane_g1_ParamLimits

0x48f1,	// (0x000a1dac) main_mp3_pane_g2_ParamLimits

0x48ff,	// (0x000a1dba) main_mp3_pane_g3_ParamLimits

0x48ff,	// (0x000a1dba) main_mp3_pane_g3

0x490d,	// (0x000a1dc8) main_mp3_pane_g4_ParamLimits

0x490d,	// (0x000a1dc8) main_mp3_pane_g4

0xdf01,	// (0x000ab3bc) main_mp3_pane_g5_ParamLimits

0xdf01,	// (0x000ab3bc) main_mp3_pane_g5

0xdf0f,	// (0x000ab3ca) main_mp3_pane_g6_ParamLimits

0xdf0f,	// (0x000ab3ca) main_mp3_pane_g6

0xdf1c,	// (0x000ab3d7) main_mp3_pane_g7_ParamLimits

0xdf1c,	// (0x000ab3d7) main_mp3_pane_g7

0xdf28,	// (0x000ab3e3) main_mp3_pane_g8_ParamLimits

0xdf28,	// (0x000ab3e3) main_mp3_pane_g8

0xf733,	// (0x000acbee) main_mp3_pane_g_ParamLimits

0x4919,	// (0x000a1dd4) main_mp3_pane_t2

0x4927,	// (0x000a1de2) main_mp3_pane_t3

0xdf42,	// (0x000ab3fd) main_mp3_pane_t4

0xdf50,	// (0x000ab40b) main_mp3_pane_t5

0x0005,

0xf744,	// (0x000acbff) main_mp3_pane_t

0xdf5e,	// (0x000ab419) mup_progress_pane_cp01

0xa2a8,	// (0x000a7763) aid_zoom_text_secondary2

0xdd18,	// (0x000ab1d3) list_cale_ev2_pane

0xdd20,	// (0x000ab1db) scroll_pane_cp023_ParamLimits

0x4a7d,	// (0x000a1f38) field_cale_ev2_pane_ParamLimits

0x4a7d,	// (0x000a1f38) field_cale_ev2_pane

0x4a9d,	// (0x000a1f58) field_cale_ev2_pane_g1_ParamLimits

0x4a9d,	// (0x000a1f58) field_cale_ev2_pane_g1

0x4aa9,	// (0x000a1f64) field_cale_ev2_pane_g2_ParamLimits

0x4aa9,	// (0x000a1f64) field_cale_ev2_pane_g2

0x4ac1,	// (0x000a1f7c) field_cale_ev2_pane_g3_ParamLimits

0x4ac1,	// (0x000a1f7c) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000acc20) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000acc20) field_cale_ev2_pane_g

0xdf72,	// (0x000ab42d) field_cale_ev2_pane_t1_ParamLimits

0xdf72,	// (0x000ab42d) field_cale_ev2_pane_t1

0xdf89,	// (0x000ab444) field_cale_ev2_pane_t2_ParamLimits

0xdf89,	// (0x000ab444) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000acc29) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000acc29) field_cale_ev2_pane_t

0x330c,	// (0x000a07c7) main_postcard_pane_g5_ParamLimits

0x330c,	// (0x000a07c7) main_postcard_pane_g5

0x3322,	// (0x000a07dd) main_postcard_pane_g6_ParamLimits

0x3322,	// (0x000a07dd) main_postcard_pane_g6

0x14ab,	// (0x0009e966) camera2_autofocus_pane_cp_ParamLimits

0x14ab,	// (0x0009e966) camera2_autofocus_pane_cp

0xa2f2,	// (0x000a77ad) main_mup3_pane

0x4ad9,	// (0x000a1f94) main_mup3_pane_g1_ParamLimits

0x4ad9,	// (0x000a1f94) main_mup3_pane_g1

0x4afb,	// (0x000a1fb6) main_mup3_pane_g2_ParamLimits

0x4afb,	// (0x000a1fb6) main_mup3_pane_g2

0x4b79,	// (0x000a2034) main_mup3_pane_g3_ParamLimits

0x4b79,	// (0x000a2034) main_mup3_pane_g3

0x4bbf,	// (0x000a207a) main_mup3_pane_g4_ParamLimits

0x4bbf,	// (0x000a207a) main_mup3_pane_g4

0x4c05,	// (0x000a20c0) main_mup3_pane_g5_ParamLimits

0x4c05,	// (0x000a20c0) main_mup3_pane_g5

0x4c4b,	// (0x000a2106) main_mup3_pane_g6_ParamLimits

0x4c4b,	// (0x000a2106) main_mup3_pane_g6

0xdfbe,	// (0x000ab479) main_mup3_pane_g7_ParamLimits

0xdfbe,	// (0x000ab479) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000acc39) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000acc39) main_mup3_pane_g

0x4cc9,	// (0x000a2184) main_mup3_pane_t1_ParamLimits

0x4cc9,	// (0x000a2184) main_mup3_pane_t1

0x4d3d,	// (0x000a21f8) main_mup3_pane_t2_ParamLimits

0x4d3d,	// (0x000a21f8) main_mup3_pane_t2

0x4e11,	// (0x000a22cc) main_mup3_pane_t4_ParamLimits

0x4e11,	// (0x000a22cc) main_mup3_pane_t4

0x4e67,	// (0x000a2322) main_mup3_pane_t5_ParamLimits

0x4e67,	// (0x000a2322) main_mup3_pane_t5

0x4f23,	// (0x000a23de) main_mup3_pane_t6_ParamLimits

0x4f23,	// (0x000a23de) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000acc4a) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000acc4a) main_mup3_pane_t

0x4fdb,	// (0x000a2496) mup3_progress_pane_ParamLimits

0x4fdb,	// (0x000a2496) mup3_progress_pane

0x5071,	// (0x000a252c) popup_mup3_control_window_ParamLimits

0x5071,	// (0x000a252c) popup_mup3_control_window

0xdfcc,	// (0x000ab487) popup_mup3_text_window

0x50a3,	// (0x000a255e) mup3_progress_pane_t1

0x50c2,	// (0x000a257d) mup3_progress_pane_t2

0xdfd4,	// (0x000ab48f) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000acc57) mup3_progress_pane_t

0xdff1,	// (0x000ab4ac) mup_progress_pane_cp03

0xe26f,	// (0x000ab72a) bg_tb_trans_pane_cp04

0x50e1,	// (0x000a259c) mup3_volume_pane

0x50e9,	// (0x000a25a4) popup_mup3_control_window_g1

0x50f2,	// (0x000a25ad) mup3_volume_pane_g1

0x50fb,	// (0x000a25b6) mup3_volume_pane_g2

0x5104,	// (0x000a25bf) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000acc5e) mup3_volume_pane_g

0xe26f,	// (0x000ab72a) bg_tb_trans_pane_cp03

0xe001,	// (0x000ab4bc) popup_mup3_text_window_g1

0xe009,	// (0x000ab4c4) popup_mup3_text_window_t1

0xa592,	// (0x000a7a4d) list_calc_item_pane_g1_ParamLimits

0xd9e8,	// (0x000aaea3) mup_volume_pane_cp_g1

0x4a41,	// (0x000a1efc) main_touch_calib_pane_t3

0x4a55,	// (0x000a1f10) main_touch_calib_pane_t4

0x4a69,	// (0x000a1f24) main_touch_calib_pane_t5

0xa284,	// (0x000a773f) aid_cell_size_toolbar2

0xa28c,	// (0x000a7747) aid_popup3_width_pane

0xa298,	// (0x000a7753) aid_zoom_text_msg_primary

0x148a,	// (0x0009e945) vorec_t7

0xa556,	// (0x000a7a11) bg_calc_paper_pane_g1_ParamLimits

0xa562,	// (0x000a7a1d) bg_calc_paper_pane_g2_ParamLimits

0xa56e,	// (0x000a7a29) bg_calc_paper_pane_g3_ParamLimits

0xa57a,	// (0x000a7a35) bg_calc_paper_pane_g4_ParamLimits

0xa586,	// (0x000a7a41) bg_calc_paper_pane_g5_ParamLimits

0x0d7d,	// (0x0009e238) bg_calc_paper_pane_g6_ParamLimits

0x0d8c,	// (0x0009e247) bg_calc_paper_pane_g7_ParamLimits

0x0d9b,	// (0x0009e256) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000ac613) bg_calc_paper_pane_g_ParamLimits

0x0dae,	// (0x0009e269) calc_bg_paper_pane_g9_ParamLimits

0x15f6,	// (0x0009eab1) image_qvga_pane_ParamLimits

0x15f6,	// (0x0009eab1) image_qvga_pane

0xa451,	// (0x000a790c) bg_popup_sub_pane_cp04_ParamLimits

0xba4d,	// (0x000a8f08) popup_mup_playback_window_g1_ParamLimits

0xba59,	// (0x000a8f14) popup_mup_playback_window_t1_ParamLimits

0xba6e,	// (0x000a8f29) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000ac99d) popup_mup_playback_window_t_ParamLimits

0x4579,	// (0x000a1a34) main_mup2_pane_g3_ParamLimits

0x4579,	// (0x000a1a34) main_mup2_pane_g3

0x19e8,	// (0x0009eea3) popup_toolbar_window_cp04

0xca4e,	// (0x000a9f09) popup_call2_audio_second_window_g3_ParamLimits

0xca4e,	// (0x000a9f09) popup_call2_audio_second_window_g3

0xce58,	// (0x000aa313) popup_call2_audio_first_window_g4_ParamLimits

0xce58,	// (0x000aa313) popup_call2_audio_first_window_g4

0xd4d7,	// (0x000aa992) popup_call2_audio_in_window_g4_ParamLimits

0xd4d7,	// (0x000aa992) popup_call2_audio_in_window_g4

0x3439,	// (0x000a08f4) aid_area_sk_bg_cut_ParamLimits

0x3439,	// (0x000a08f4) aid_area_sk_bg_cut

0xba83,	// (0x000a8f3e) aid_area_sk_bg_cut_2_ParamLimits

0xba83,	// (0x000a8f3e) aid_area_sk_bg_cut_2

0x4884,	// (0x000a1d3f) aid_placing_details_win

0x488c,	// (0x000a1d47) aid_placing_details_win_2

0xde13,	// (0x000ab2ce) camera2_autofocus_pane_g1_ParamLimits

0x04bd,	// (0x0009d978) popup_fixed_preview_cale_window_ParamLimits

0x04bd,	// (0x0009d978) popup_fixed_preview_cale_window

0xb851,	// (0x000a8d0c) navi_slider_pane_g3

0xb85a,	// (0x000a8d15) navi_slider_pane_g4

0xb863,	// (0x000a8d1e) navi_slider_pane_g5

0xb851,	// (0x000a8d0c) navi_slider_pane_g6

0xa965,	// (0x000a7e20) navi_slider_pane_g7

0xb984,	// (0x000a8e3f) mup_scale_pane_g3

0xb98d,	// (0x000a8e48) mup_scale_pane_g4

0xb996,	// (0x000a8e51) mup_scale_pane_g5

0x30e7,	// (0x000a05a2) mup_scale_pane_g6

0x30f0,	// (0x000a05ab) mup_scale_pane_g7

0xb851,	// (0x000a8d0c) cams2_slider_pane_g3

0xda6a,	// (0x000aaf25) cams2_slider_pane_g4

0xaa9e,	// (0x000a7f59) cams2_slider_pane_g5

0xb851,	// (0x000a8d0c) cams2_slider_pane_g6

0xaaa6,	// (0x000a7f61) cams2_slider_pane_g7

0xdc95,	// (0x000ab150) camera2_autofocus_pane_cp_g1

0xd881,	// (0x000aad3c) bg_popup_preview_window_pane_cp02_ParamLimits

0xd881,	// (0x000aad3c) bg_popup_preview_window_pane_cp02

0xe017,	// (0x000ab4d2) list_fp_cale_pane_ParamLimits

0xe017,	// (0x000ab4d2) list_fp_cale_pane

0xe023,	// (0x000ab4de) popup_fixed_preview_cale_window_t1_ParamLimits

0xe023,	// (0x000ab4de) popup_fixed_preview_cale_window_t1

0x510d,	// (0x000a25c8) popup_fixed_preview_cale_window_t2_ParamLimits

0x510d,	// (0x000a25c8) popup_fixed_preview_cale_window_t2

0x5122,	// (0x000a25dd) popup_fixed_preview_cale_window_t3_ParamLimits

0x5122,	// (0x000a25dd) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x000acc65) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x000acc65) popup_fixed_preview_cale_window_t

0x5137,	// (0x000a25f2) list_single_fp_cale_pane_ParamLimits

0x5137,	// (0x000a25f2) list_single_fp_cale_pane

0xe041,	// (0x000ab4fc) list_single_fp_cale_pane_g1_ParamLimits

0xe041,	// (0x000ab4fc) list_single_fp_cale_pane_g1

0xe04d,	// (0x000ab508) list_single_fp_cale_pane_g2_ParamLimits

0xe04d,	// (0x000ab508) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x000acc6c) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x000acc6c) list_single_fp_cale_pane_g

0xe066,	// (0x000ab521) list_single_fp_cale_pane_t1_ParamLimits

0xe066,	// (0x000ab521) list_single_fp_cale_pane_t1

0xe078,	// (0x000ab533) list_single_fp_cale_pane_t2_ParamLimits

0xe078,	// (0x000ab533) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x000acc73) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x000acc73) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa300,	// (0x000a77bb) main_dialer_pane

0x514c,	// (0x000a2607) aid_cell_size_keypad

0x5156,	// (0x000a2611) dialer_ne_pane

0x515e,	// (0x000a2619) grid_dialer_command_1_pane

0x5166,	// (0x000a2621) grid_dialer_command_2_pane

0x516e,	// (0x000a2629) grid_dialer_keypad_pane

0x5180,	// (0x000a263b) bg_popup_call_pane_cp06_ParamLimits

0x5180,	// (0x000a263b) bg_popup_call_pane_cp06

0x518c,	// (0x000a2647) dialer_ne_clear_pane_ParamLimits

0x518c,	// (0x000a2647) dialer_ne_clear_pane

0xe0ab,	// (0x000ab566) dialer_ne_pane_g1

0xe0b3,	// (0x000ab56e) dialer_ne_pane_t1_ParamLimits

0xe0b3,	// (0x000ab56e) dialer_ne_pane_t1

0x5198,	// (0x000a2653) dialer_ne_pane_t2_ParamLimits

0x5198,	// (0x000a2653) dialer_ne_pane_t2

0x51c2,	// (0x000a267d) dialer_ne_pane_t3_ParamLimits

0x51c2,	// (0x000a267d) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x000acc78) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x000acc78) dialer_ne_pane_t

0x51f2,	// (0x000a26ad) dialer_ne_pane_t3_copy1_ParamLimits

0x51f2,	// (0x000a26ad) dialer_ne_pane_t3_copy1

0x5221,	// (0x000a26dc) cell_dialer_keypad_pane_ParamLimits

0x5221,	// (0x000a26dc) cell_dialer_keypad_pane

0x5238,	// (0x000a26f3) cell_dialer_command_1_pane_ParamLimits

0x5238,	// (0x000a26f3) cell_dialer_command_1_pane

0x524e,	// (0x000a2709) cell_dialer_command_2_pane_ParamLimits

0x524e,	// (0x000a2709) cell_dialer_command_2_pane

0xe0c5,	// (0x000ab580) bg_button_pane_cp02_ParamLimits

0xe0c5,	// (0x000ab580) bg_button_pane_cp02

0x525d,	// (0x000a2718) cell_dialer_keypad_pane_g1_ParamLimits

0x525d,	// (0x000a2718) cell_dialer_keypad_pane_g1

0xe0c5,	// (0x000ab580) bg_button_pane_cp03_ParamLimits

0xe0c5,	// (0x000ab580) bg_button_pane_cp03

0x5271,	// (0x000a272c) cell_dialer_command_1_pane_g1_ParamLimits

0x5271,	// (0x000a272c) cell_dialer_command_1_pane_g1

0xe0d1,	// (0x000ab58c) bg_button_pane_cp04

0x5285,	// (0x000a2740) cell_dialer_command_2_pane_g1

0xa769,	// (0x000a7c24) bg_button_pane_cp06

0xe0d9,	// (0x000ab594) dialer_ne_clear_pane_g1

0xb724,	// (0x000a8bdf) navi_pane_g2

0xb752,	// (0x000a8c0d) navi_pane_g3

0x0002,

0xf3e5,	// (0x000ac8a0) navi_pane_g

0xb7e1,	// (0x000a8c9c) navi_pane_mv_g2

0xb808,	// (0x000a8cc3) navi_pane_mv_g5

0x2cab,	// (0x000a0166) navi_pane_mv_t1

0xa538,	// (0x000a79f3) main_clock2_pane

0x52d2,	// (0x000a278d) main_clock2_list_pane_ParamLimits

0x52d2,	// (0x000a278d) main_clock2_list_pane

0x530a,	// (0x000a27c5) main_clock2_pane_t1_ParamLimits

0x530a,	// (0x000a27c5) main_clock2_pane_t1

0x5346,	// (0x000a2801) main_clock2_pane_t2_ParamLimits

0x5346,	// (0x000a2801) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000acc84) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000acc84) main_clock2_pane_t

0x53e4,	// (0x000a289f) popup_clock_analogue_window_cp03_ParamLimits

0x53e4,	// (0x000a289f) popup_clock_analogue_window_cp03

0x5409,	// (0x000a28c4) popup_clock_digital_window_cp02_ParamLimits

0x5409,	// (0x000a28c4) popup_clock_digital_window_cp02

0x547a,	// (0x000a2935) main_clock2_list_single_pane_ParamLimits

0x547a,	// (0x000a2935) main_clock2_list_single_pane

0xa769,	// (0x000a7c24) list_highlight_pane_cp05

0xe117,	// (0x000ab5d2) main_clock2_list_single_pane_t1

0x19e8,	// (0x0009eea3) popup_toolbar_window_cp04_ParamLimits

0x48ae,	// (0x000a1d69) camera2_autofocus_pane_g2_ParamLimits

0x48ae,	// (0x000a1d69) camera2_autofocus_pane_g2

0x48ba,	// (0x000a1d75) camera2_autofocus_pane_g3_ParamLimits

0x48ba,	// (0x000a1d75) camera2_autofocus_pane_g3

0x48c6,	// (0x000a1d81) camera2_autofocus_pane_g4_ParamLimits

0x48c6,	// (0x000a1d81) camera2_autofocus_pane_g4

0x48d2,	// (0x000a1d8d) camera2_autofocus_pane_g5_ParamLimits

0x48d2,	// (0x000a1d8d) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x000acbc8) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x000acbc8) camera2_autofocus_pane_g

0xdf9e,	// (0x000ab459) camera2_autofocus_pane_cp_g2

0xdfa6,	// (0x000ab461) camera2_autofocus_pane_cp_g3

0xdfae,	// (0x000ab469) camera2_autofocus_pane_cp_g4

0xdfb6,	// (0x000ab471) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000acc2e) camera2_autofocus_pane_cp_g

0x5178,	// (0x000a2633) popup_dialer_spcha_window

0xe26f,	// (0x000ab72a) bg_popup_sub_pane_cp07

0xe125,	// (0x000ab5e0) list_spcha_pane

0xe12d,	// (0x000ab5e8) list_single_spcha_pane_ParamLimits

0xe12d,	// (0x000ab5e8) list_single_spcha_pane

0xe26f,	// (0x000ab72a) list_highlight_pane_cp06

0xe13e,	// (0x000ab5f9) list_single_spcha_pane_t1

0xd281,	// (0x000aa73c) popup_call2_audio_out_window_g4_ParamLimits

0xd281,	// (0x000aa73c) popup_call2_audio_out_window_g4

0xa300,	// (0x000a77bb) main_imed2_pane

0xa9be,	// (0x000a7e79) popup_imed_adjust2_window

0x3c87,	// (0x000a1142) popup_imed_trans_window_ParamLimits

0x3c87,	// (0x000a1142) popup_imed_trans_window

0xdad3,	// (0x000aaf8e) popup_blid_sat_info2_window_t1

0xdae1,	// (0x000aaf9c) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000acb5d) popup_blid_sat_info2_window_t

0x5523,	// (0x000a29de) aid_size_cell_colour_35

0x5543,	// (0x000a29fe) aid_size_cell_colour_112

0x5563,	// (0x000a2a1e) aid_size_cell_effect

0xd88d,	// (0x000aad48) bg_tb_trans_pane_cp02

0xb28f,	// (0x000a874a) heading_imed_pane

0x5583,	// (0x000a2a3e) listscroll_imed_pane

0xe14c,	// (0x000ab607) heading_imed_pane_g1

0xe154,	// (0x000ab60f) heading_imed_pane_t1

0xe162,	// (0x000ab61d) grid_imed_colour_35_pane_ParamLimits

0xe162,	// (0x000ab61d) grid_imed_colour_35_pane

0x558f,	// (0x000a2a4a) grid_imed_effect_pane

0xe179,	// (0x000ab634) list_imed_aspect_pane

0x55a5,	// (0x000a2a60) scroll_pane_cp027_ParamLimits

0x55a5,	// (0x000a2a60) scroll_pane_cp027

0x55b6,	// (0x000a2a71) cell_imed_effect_pane_ParamLimits

0x55b6,	// (0x000a2a71) cell_imed_effect_pane

0xe181,	// (0x000ab63c) cell_imed_colour_pane_ParamLimits

0xe181,	// (0x000ab63c) cell_imed_colour_pane

0xe1c3,	// (0x000ab67e) cell_imed_colour_pane_g1_ParamLimits

0xe1c3,	// (0x000ab67e) cell_imed_colour_pane_g1

0xe1d4,	// (0x000ab68f) hgihlgiht_grid_pane_cp016_ParamLimits

0xe1d4,	// (0x000ab68f) hgihlgiht_grid_pane_cp016

0x55dd,	// (0x000a2a98) cell_imed_effect_pane_g1

0x55e5,	// (0x000a2aa0) grid_highlight_pane_cp017

0xe1e5,	// (0x000ab6a0) list_imed_single_pane_ParamLimits

0xe1e5,	// (0x000ab6a0) list_imed_single_pane

0xe26f,	// (0x000ab72a) list_highlight_pane_cp07

0xe1fa,	// (0x000ab6b5) list_imed_aspect_pane_comp1_t1

0xd88d,	// (0x000aad48) bg_tb_trans_pane_cp05

0xe21c,	// (0x000ab6d7) popup_imed_adjust2_window_g1

0xe243,	// (0x000ab6fe) popup_imed_adjust2_window_t1

0xe25b,	// (0x000ab716) slider_imed_adjust_pane

0xe2f1,	// (0x000ab7ac) slider_imed_adjust_pane_g1

0xe301,	// (0x000ab7bc) slider_imed_adjust_pane_g2

0xe311,	// (0x000ab7cc) slider_imed_adjust_pane_g3

0xe322,	// (0x000ab7dd) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000acca1) slider_imed_adjust_pane_g

0x55ee,	// (0x000a2aa9) aid_size_cell_clipart2

0x55fa,	// (0x000a2ab5) grid_imed_clipart_pane

0xe333,	// (0x000ab7ee) scroll_pane_cp031

0x5604,	// (0x000a2abf) cell_imed_clipart_pane_ParamLimits

0x5604,	// (0x000a2abf) cell_imed_clipart_pane

0x5626,	// (0x000a2ae1) cell_imed_clipart_pane_g1

0xe26f,	// (0x000ab72a) grid_highlight_pane_cp014

0x52e7,	// (0x000a27a2) main_clock2_pane_g1_ParamLimits

0x52e7,	// (0x000a27a2) main_clock2_pane_g1

0x5425,	// (0x000a28e0) aid_call2_pane_cp10

0x5437,	// (0x000a28f2) aid_call_pane_cp10

0xb685,	// (0x000a8b40) popup_clock_analogue_window_cp10_g1

0xb685,	// (0x000a8b40) popup_clock_analogue_window_cp10_g2

0x5449,	// (0x000a2904) popup_clock_analogue_window_cp10_g3

0x5449,	// (0x000a2904) popup_clock_analogue_window_cp10_g4

0xb685,	// (0x000a8b40) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000acc8f) popup_clock_analogue_window_cp10_g

0x545b,	// (0x000a2916) popup_clock_analogue_window_cp10_t1

0x548c,	// (0x000a2947) clock_digital_number_pane_cp10_ParamLimits

0x548c,	// (0x000a2947) clock_digital_number_pane_cp10

0x54a4,	// (0x000a295f) clock_digital_number_pane_cp11_ParamLimits

0x54a4,	// (0x000a295f) clock_digital_number_pane_cp11

0x54bc,	// (0x000a2977) clock_digital_number_pane_cp12_ParamLimits

0x54bc,	// (0x000a2977) clock_digital_number_pane_cp12

0x54d4,	// (0x000a298f) clock_digital_number_pane_cp13_ParamLimits

0x54d4,	// (0x000a298f) clock_digital_number_pane_cp13

0x54ec,	// (0x000a29a7) clock_digital_separator_pane_cp10_ParamLimits

0x54ec,	// (0x000a29a7) clock_digital_separator_pane_cp10

0x5504,	// (0x000a29bf) popup_clock_digital_window_cp02_t1_ParamLimits

0x5504,	// (0x000a29bf) popup_clock_digital_window_cp02_t1

0xa449,	// (0x000a7904) clock_digital_number_pane_cp10_g1

0xa449,	// (0x000a7904) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000accaa) clock_digital_number_pane_cp10_g

0xa449,	// (0x000a7904) clock_digital_separator_pane_cp10_g1

0xa449,	// (0x000a7904) clock_digital_separator_pane_g2_cp10

0xb810,	// (0x000a8ccb) navi_pane_vded_g4

0xb819,	// (0x000a8cd4) navi_pane_vded_g5

0xb822,	// (0x000a8cdd) navi_pane_vded_t1

0xa300,	// (0x000a77bb) main_vded_pane

0x562f,	// (0x000a2aea) main_vded_pane_g1

0x5639,	// (0x000a2af4) main_vded_pane_g2

0x5643,	// (0x000a2afe) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000accaf) main_vded_pane_g

0x564d,	// (0x000a2b08) main_vded_pane_t1

0x565b,	// (0x000a2b16) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000accb6) main_vded_pane_t

0x5669,	// (0x000a2b24) vded_slider_pane

0x5671,	// (0x000a2b2c) vded_video_pane

0xe33b,	// (0x000ab7f6) vded_video_pane_g1

0x5679,	// (0x000a2b34) vded_video_pane_g2

0xdc95,	// (0x000ab150) vded_video_pane_g3

0x0002,

0xf800,	// (0x000accbb) vded_video_pane_g

0xe345,	// (0x000ab800) vded_slider_pane_g1

0xd9e8,	// (0x000aaea3) vded_slider_pane_g2

0xe34e,	// (0x000ab809) vded_slider_pane_g3

0xe357,	// (0x000ab812) vded_slider_pane_g4

0xe360,	// (0x000ab81b) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000accc2) vded_slider_pane_g

0x5059,	// (0x000a2514) mup3_rocker_pane_ParamLimits

0x5059,	// (0x000a2514) mup3_rocker_pane

0x5682,	// (0x000a2b3d) mup3_control_keys_pane_g1

0x568a,	// (0x000a2b45) mup3_control_keys_pane_g2

0x5692,	// (0x000a2b4d) mup3_control_keys_pane_g3

0x569a,	// (0x000a2b55) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000acccd) mup3_control_keys_pane_g

0x04f4,	// (0x0009d9af) popup_toolbar2_fixed_window_cp01_ParamLimits

0x04f4,	// (0x0009d9af) popup_toolbar2_fixed_window_cp01

0x508d,	// (0x000a2548) popup_toolbar2_fixed_window_cp02_ParamLimits

0x508d,	// (0x000a2548) popup_toolbar2_fixed_window_cp02

0xcbc0,	// (0x000aa07b) popup_call2_audio_second_window_t4_ParamLimits

0xcbc0,	// (0x000aa07b) popup_call2_audio_second_window_t4

0xd0ee,	// (0x000aa5a9) popup_call2_audio_first_window_t6_ParamLimits

0xd0ee,	// (0x000aa5a9) popup_call2_audio_first_window_t6

0xd384,	// (0x000aa83f) popup_call2_audio_out_window_t6_ParamLimits

0xd384,	// (0x000aa83f) popup_call2_audio_out_window_t6

0xa300,	// (0x000a77bb) main_vitu_pane

0x56aa,	// (0x000a2b65) aid_size_cell_itu_ParamLimits

0x56aa,	// (0x000a2b65) aid_size_cell_itu

0xd577,	// (0x000aaa32) bg_popup_window_pane_cp08_ParamLimits

0xd577,	// (0x000aaa32) bg_popup_window_pane_cp08

0x56c0,	// (0x000a2b7b) field_vitu_entry_pane_ParamLimits

0x56c0,	// (0x000a2b7b) field_vitu_entry_pane

0x56d7,	// (0x000a2b92) grid_vitu_function_pane_ParamLimits

0x56d7,	// (0x000a2b92) grid_vitu_function_pane

0x56f2,	// (0x000a2bad) grid_vitu_itu_pane_ParamLimits

0x56f2,	// (0x000a2bad) grid_vitu_itu_pane

0x5710,	// (0x000a2bcb) cell_vitu_itu_pane_ParamLimits

0x5710,	// (0x000a2bcb) cell_vitu_itu_pane

0x5732,	// (0x000a2bed) cell_vitu_function_pane_ParamLimits

0x5732,	// (0x000a2bed) cell_vitu_function_pane

0xd577,	// (0x000aaa32) bg_popup_sub_pane_cp08_ParamLimits

0xd577,	// (0x000aaa32) bg_popup_sub_pane_cp08

0x574b,	// (0x000a2c06) field_vitu_entry_pane_t1_ParamLimits

0x574b,	// (0x000a2c06) field_vitu_entry_pane_t1

0xe381,	// (0x000ab83c) field_vitu_entry_pane_t2_ParamLimits

0xe381,	// (0x000ab83c) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000accdb) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000accdb) field_vitu_entry_pane_t

0xe39e,	// (0x000ab859) bg_button_pane_cp05_ParamLimits

0xe39e,	// (0x000ab859) bg_button_pane_cp05

0x5769,	// (0x000a2c24) cell_vitu_itu_pane_g1

0x5781,	// (0x000a2c3c) cell_vitu_itu_pane_t1_ParamLimits

0x5781,	// (0x000a2c3c) cell_vitu_itu_pane_t1

0x5793,	// (0x000a2c4e) cell_vitu_itu_pane_t2_ParamLimits

0x5793,	// (0x000a2c4e) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000acce0) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000acce0) cell_vitu_itu_pane_t

0xe3ac,	// (0x000ab867) bg_button_pane_cp07

0x57c8,	// (0x000a2c83) cell_vitu_function_pane_g1

0xa4d8,	// (0x000a7993) main_calc_pane_g1

0x031b,	// (0x0009d7d6) aid_visual_content_pane

0xa300,	// (0x000a77bb) main_vradio_pane

0x57d1,	// (0x000a2c8c) main_vradio_pane_g1_ParamLimits

0x57d1,	// (0x000a2c8c) main_vradio_pane_g1

0xe3b6,	// (0x000ab871) main_vradio_pane_g2_ParamLimits

0xe3b6,	// (0x000ab871) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000acce7) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000acce7) main_vradio_pane_g

0x57ea,	// (0x000a2ca5) main_vradio_pane_t1_ParamLimits

0x57ea,	// (0x000a2ca5) main_vradio_pane_t1

0x57ff,	// (0x000a2cba) main_vradio_pane_t2_ParamLimits

0x57ff,	// (0x000a2cba) main_vradio_pane_t2

0xe3c3,	// (0x000ab87e) main_vradio_pane_t3_ParamLimits

0xe3c3,	// (0x000ab87e) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000accec) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000accec) main_vradio_pane_t

0x5814,	// (0x000a2ccf) vradio_rocker_control_pane_ParamLimits

0x5814,	// (0x000a2ccf) vradio_rocker_control_pane

0x5826,	// (0x000a2ce1) vradio_station_info_pane_ParamLimits

0x5826,	// (0x000a2ce1) vradio_station_info_pane

0xe3d7,	// (0x000ab892) vradio_frequency_info_pane_ParamLimits

0xe3d7,	// (0x000ab892) vradio_frequency_info_pane

0xdc95,	// (0x000ab150) vradio_station_info_pane_g1

0xe3e6,	// (0x000ab8a1) vradio_station_info_pane_t1_ParamLimits

0xe3e6,	// (0x000ab8a1) vradio_station_info_pane_t1

0xe408,	// (0x000ab8c3) vradio_station_info_pane_t2_ParamLimits

0xe408,	// (0x000ab8c3) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000accf3) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000accf3) vradio_station_info_pane_t

0xe41a,	// (0x000ab8d5) vradio_tuning_pane

0xe422,	// (0x000ab8dd) vradio_rocker_control_pane_g1

0xe42a,	// (0x000ab8e5) vradio_rocker_control_pane_g2

0xe432,	// (0x000ab8ed) vradio_rocker_control_pane_g3

0xe43a,	// (0x000ab8f5) vradio_rocker_control_pane_g4

0xe442,	// (0x000ab8fd) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000accf8) vradio_rocker_control_pane_g

0x5838,	// (0x000a2cf3) vradio_frequency_info_pane_g1

0xe44a,	// (0x000ab905) vradio_frequency_info_pane_t1_ParamLimits

0xe44a,	// (0x000ab905) vradio_frequency_info_pane_t1

0x5842,	// (0x000a2cfd) vradio_tuning_pane_g1

0x584d,	// (0x000a2d08) vradio_tuning_pane_t1

0xa2b0,	// (0x000a776b) area_side_right_pane_ParamLimits

0xa2b0,	// (0x000a776b) area_side_right_pane

0xd848,	// (0x000aad03) status_small_pane_g1

0xd850,	// (0x000aad0b) status_small_pane_g2

0xd859,	// (0x000aad14) status_small_pane_g3

0xd862,	// (0x000aad1d) status_small_pane_g4

0x0003,

0xf5f8,	// (0x000acab3) status_small_pane_g

0xd86b,	// (0x000aad26) status_small_pane_t1

0xa300,	// (0x000a77bb) main_video3_pane

0xe45e,	// (0x000ab919) cams_zoom_vslider_pane

0xe466,	// (0x000ab921) image3_wide_pane_ParamLimits

0xe466,	// (0x000ab921) image3_wide_pane

0xe480,	// (0x000ab93b) image3_wide_small_pane

0xe48c,	// (0x000ab947) main_video3_pane_g1_ParamLimits

0xe48c,	// (0x000ab947) main_video3_pane_g1

0xe4a8,	// (0x000ab963) main_video3_pane_g2_ParamLimits

0xe4a8,	// (0x000ab963) main_video3_pane_g2

0x0001,

0xf848,	// (0x000acd03) main_video3_pane_g_ParamLimits

0xf848,	// (0x000acd03) main_video3_pane_g

0xe4c4,	// (0x000ab97f) main_video3_pane_t1_ParamLimits

0xe4c4,	// (0x000ab97f) main_video3_pane_t1

0xe4ef,	// (0x000ab9aa) main_video3_pane_t2_ParamLimits

0xe4ef,	// (0x000ab9aa) main_video3_pane_t2

0xe51a,	// (0x000ab9d5) main_video3_pane_t3_ParamLimits

0xe51a,	// (0x000ab9d5) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000acd08) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000acd08) main_video3_pane_t

0xe547,	// (0x000aba02) cams_zoom_vslider_pane_g1

0xe550,	// (0x000aba0b) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000acd0f) cams_zoom_vslider_pane_g

0xe558,	// (0x000aba13) small_slider_vertical_pane

0xdc95,	// (0x000ab150) small_slider_vertical_pane_g1

0xdc95,	// (0x000ab150) small_slider_vertical_pane_g2

0xe560,	// (0x000aba1b) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000acd14) small_slider_vertical_pane_g

0xa300,	// (0x000a77bb) main_hwr_training_pane

0xe569,	// (0x000aba24) hwr_training_instruct_pane_ParamLimits

0xe569,	// (0x000aba24) hwr_training_instruct_pane

0x585c,	// (0x000a2d17) hwr_training_navi_pane_ParamLimits

0x585c,	// (0x000a2d17) hwr_training_navi_pane

0x587b,	// (0x000a2d36) hwr_training_write_pane_ParamLimits

0x587b,	// (0x000a2d36) hwr_training_write_pane

0xe26f,	// (0x000ab72a) bg_frame_shadow_pane

0xe5a0,	// (0x000aba5b) hwr_training_write_pane_g1

0xe5a8,	// (0x000aba63) hwr_training_write_pane_g2

0xe5b0,	// (0x000aba6b) hwr_training_write_pane_g3

0xe5b8,	// (0x000aba73) hwr_training_write_pane_g4

0xe5c0,	// (0x000aba7b) hwr_training_write_pane_g5

0xe5c8,	// (0x000aba83) hwr_training_write_pane_g6

0xe5d0,	// (0x000aba8b) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000acd1b) hwr_training_write_pane_g

0xaaaf,	// (0x000a7f6a) hwr_training_navi_pane_g1_ParamLimits

0xaaaf,	// (0x000a7f6a) hwr_training_navi_pane_g1

0xaac1,	// (0x000a7f7c) hwr_training_navi_pane_g2_ParamLimits

0xaac1,	// (0x000a7f7c) hwr_training_navi_pane_g2

0xaad3,	// (0x000a7f8e) hwr_training_navi_pane_g3_ParamLimits

0xaad3,	// (0x000a7f8e) hwr_training_navi_pane_g3

0xaae3,	// (0x000a7f9e) hwr_training_navi_pane_g4_ParamLimits

0xaae3,	// (0x000a7f9e) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000acd2a) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000acd2a) hwr_training_navi_pane_g

0xaaf0,	// (0x000a7fab) hwr_training_navi_pane_t1

0x58c3,	// (0x000a2d7e) list_single_hwr_training_instruct_pane_ParamLimits

0x58c3,	// (0x000a2d7e) list_single_hwr_training_instruct_pane

0xe5d8,	// (0x000aba93) list_single_hwr_training_instruct_pane_t1

0xdbd5,	// (0x000ab090) bg_frame_shadow_pane_g1

0xe5e7,	// (0x000abaa2) bg_frame_shadow_pane_g2

0xe5ef,	// (0x000abaaa) bg_frame_shadow_pane_g3

0xe5f7,	// (0x000abab2) bg_frame_shadow_pane_g4

0xe5ff,	// (0x000ababa) bg_frame_shadow_pane_g5

0xe607,	// (0x000abac2) bg_frame_shadow_pane_g6

0xe60f,	// (0x000abaca) bg_frame_shadow_pane_g7

0xa615,	// (0x000a7ad0) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000acd35) bg_frame_shadow_pane_g

0xa300,	// (0x000a77bb) main_video_tele_dialer_pane

0x58d8,	// (0x000a2d93) aid_size_cell_video_keypad_ParamLimits

0x58d8,	// (0x000a2d93) aid_size_cell_video_keypad

0x58f2,	// (0x000a2dad) grid_video_dialer_keypad_pane_ParamLimits

0x58f2,	// (0x000a2dad) grid_video_dialer_keypad_pane

0x593e,	// (0x000a2df9) video_down_pane_cp_ParamLimits

0x593e,	// (0x000a2df9) video_down_pane_cp

0x5970,	// (0x000a2e2b) cell_video_dialer_keypad_pane_ParamLimits

0x5970,	// (0x000a2e2b) cell_video_dialer_keypad_pane

0xe617,	// (0x000abad2) bg_button_pane_cp08_ParamLimits

0xe617,	// (0x000abad2) bg_button_pane_cp08

0x5992,	// (0x000a2e4d) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5992,	// (0x000a2e4d) cell_video_dialer_keypad_pane_g1

0x5043,	// (0x000a24fe) mup3_rocker2_pane_ParamLimits

0x5043,	// (0x000a24fe) mup3_rocker2_pane

0xdc95,	// (0x000ab150) mup3_rocker2_pane_g1

0x3b68,	// (0x000a1023) main_dialer2_pane

0xa300,	// (0x000a77bb) main_mp4_pane

0xab06,	// (0x000a7fc1) main_mp4_pane_g1_ParamLimits

0xab06,	// (0x000a7fc1) main_mp4_pane_g1

0xab06,	// (0x000a7fc1) main_mp4_pane_g2_ParamLimits

0xab06,	// (0x000a7fc1) main_mp4_pane_g2

0x59c9,	// (0x000a2e84) main_mp4_pane_g3_ParamLimits

0x59c9,	// (0x000a2e84) main_mp4_pane_g3

0xab14,	// (0x000a7fcf) main_mp4_pane_g4_ParamLimits

0xab14,	// (0x000a7fcf) main_mp4_pane_g4

0xab3c,	// (0x000a7ff7) main_mp4_pane_g5_ParamLimits

0xab3c,	// (0x000a7ff7) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000acd55) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000acd55) main_mp4_pane_g

0xab8c,	// (0x000a8047) main_mp4_pane_t1_ParamLimits

0xab8c,	// (0x000a8047) main_mp4_pane_t1

0xabe8,	// (0x000a80a3) main_mp4_pane_t2_ParamLimits

0xabe8,	// (0x000a80a3) main_mp4_pane_t2

0xe623,	// (0x000abade) main_mp4_pane_t3_ParamLimits

0xe623,	// (0x000abade) main_mp4_pane_t3

0xac3a,	// (0x000a80f5) main_mp4_pane_t4_ParamLimits

0xac3a,	// (0x000a80f5) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000acd62) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000acd62) main_mp4_pane_t

0xac7e,	// (0x000a8139) mp4_progress_pane_ParamLimits

0xac7e,	// (0x000a8139) mp4_progress_pane

0xacc8,	// (0x000a8183) mp4_rocker_pane_ParamLimits

0xacc8,	// (0x000a8183) mp4_rocker_pane

0xe64b,	// (0x000abb06) mp4_progress_pane_t1

0xe664,	// (0x000abb1f) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000acd6b) mp4_progress_pane_t

0xe67d,	// (0x000abb38) mup_progress_pane_cp04

0x5a05,	// (0x000a2ec0) mp4_rocker_pane_g1

0x5a0f,	// (0x000a2eca) aid_cell_size_keypad2_ParamLimits

0x5a0f,	// (0x000a2eca) aid_cell_size_keypad2

0x5a25,	// (0x000a2ee0) dialer2_ne_pane_ParamLimits

0x5a25,	// (0x000a2ee0) dialer2_ne_pane

0x5a3f,	// (0x000a2efa) grid_dialer2_keypad_pane_ParamLimits

0x5a3f,	// (0x000a2efa) grid_dialer2_keypad_pane

0xda7a,	// (0x000aaf35) bg_popup_call_pane_cp07_ParamLimits

0xda7a,	// (0x000aaf35) bg_popup_call_pane_cp07

0x5a5b,	// (0x000a2f16) dialer2_ne_pane_t1_ParamLimits

0x5a5b,	// (0x000a2f16) dialer2_ne_pane_t1

0x5a96,	// (0x000a2f51) cell_dialer2_keypad_pane_ParamLimits

0x5a96,	// (0x000a2f51) cell_dialer2_keypad_pane

0xe69b,	// (0x000abb56) bg_button_pane_pane_cp04_ParamLimits

0xe69b,	// (0x000abb56) bg_button_pane_pane_cp04

0x5ab8,	// (0x000a2f73) cell_dialer2_keypad_pane_g1_ParamLimits

0x5ab8,	// (0x000a2f73) cell_dialer2_keypad_pane_g1

0x18bc,	// (0x0009ed77) aid_placing_vt_set_content_ParamLimits

0x18bc,	// (0x0009ed77) aid_placing_vt_set_content

0x18e4,	// (0x0009ed9f) aid_placing_vt_set_title_ParamLimits

0x18e4,	// (0x0009ed9f) aid_placing_vt_set_title

0xa300,	// (0x000a77bb) main_image3_pane

0x5b7e,	// (0x000a3039) area_side_right_pane_cp01_ParamLimits

0x5b7e,	// (0x000a3039) area_side_right_pane_cp01

0xab06,	// (0x000a7fc1) main_image3_pane_g1_ParamLimits

0xab06,	// (0x000a7fc1) main_image3_pane_g1

0x5b95,	// (0x000a3050) main_image3_pane_g2_ParamLimits

0x5b95,	// (0x000a3050) main_image3_pane_g2

0x5bbd,	// (0x000a3078) main_image3_pane_g3_ParamLimits

0x5bbd,	// (0x000a3078) main_image3_pane_g3

0x5be7,	// (0x000a30a2) main_image3_pane_g4_ParamLimits

0x5be7,	// (0x000a30a2) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000acd7a) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000acd7a) main_image3_pane_g

0x5c11,	// (0x000a30cc) main_image3_pane_t1_ParamLimits

0x5c11,	// (0x000a30cc) main_image3_pane_t1

0x5c69,	// (0x000a3124) main_image3_pane_t2_ParamLimits

0x5c69,	// (0x000a3124) main_image3_pane_t2

0x5cbb,	// (0x000a3176) main_image3_pane_t3_ParamLimits

0x5cbb,	// (0x000a3176) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000acd83) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000acd83) main_image3_pane_t

0xd577,	// (0x000aaa32) grid_sctrl_middle_pane_cp01_ParamLimits

0xd577,	// (0x000aaa32) grid_sctrl_middle_pane_cp01

0x5d43,	// (0x000a31fe) cell_sctrl_middle_pane_cp01_ParamLimits

0x5d43,	// (0x000a31fe) cell_sctrl_middle_pane_cp01

0x5d60,	// (0x000a321b) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5d60,	// (0x000a321b) cell_sctrl_middle_pane_cp01_g1

0xa300,	// (0x000a77bb) main_call4_pane

0x5d76,	// (0x000a3231) aid_size_button_call4_ParamLimits

0x5d76,	// (0x000a3231) aid_size_button_call4

0x5da7,	// (0x000a3262) call4_windows_pane_ParamLimits

0x5da7,	// (0x000a3262) call4_windows_pane

0x5dc7,	// (0x000a3282) grid_call4_button_pane_ParamLimits

0x5dc7,	// (0x000a3282) grid_call4_button_pane

0xe6a7,	// (0x000abb62) call4_windows_conf_pane

0xe6be,	// (0x000abb79) popup_call4_audio_first_window_ParamLimits

0xe6be,	// (0x000abb79) popup_call4_audio_first_window

0xe70a,	// (0x000abbc5) popup_call4_audio_second_window_ParamLimits

0xe70a,	// (0x000abbc5) popup_call4_audio_second_window

0xe71e,	// (0x000abbd9) popup_call4_audio_wait_window_ParamLimits

0xe71e,	// (0x000abbd9) popup_call4_audio_wait_window

0x5df4,	// (0x000a32af) cell_call4_button_pane_ParamLimits

0x5df4,	// (0x000a32af) cell_call4_button_pane

0x5e1d,	// (0x000a32d8) bg_button_pane_cp09_ParamLimits

0x5e1d,	// (0x000a32d8) bg_button_pane_cp09

0x5e29,	// (0x000a32e4) cell_call4_button_pane_g1_ParamLimits

0x5e29,	// (0x000a32e4) cell_call4_button_pane_g1

0x5e4f,	// (0x000a330a) cell_call4_button_pane_t1_ParamLimits

0x5e4f,	// (0x000a330a) cell_call4_button_pane_t1

0xe766,	// (0x000abc21) popup_call4_audio_conf_window_ParamLimits

0xe766,	// (0x000abc21) popup_call4_audio_conf_window

0x50a3,	// (0x000a255e) mup3_progress_pane_t1_ParamLimits

0x50c2,	// (0x000a257d) mup3_progress_pane_t2_ParamLimits

0xdfd4,	// (0x000ab48f) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000acc57) mup3_progress_pane_t_ParamLimits

0xdff1,	// (0x000ab4ac) mup_progress_pane_cp03_ParamLimits

0x56a2,	// (0x000a2b5d) mup3_control_keys_pane_g4_copy1

0xacac,	// (0x000a8167) mp4_rocker2_pane_ParamLimits

0xacac,	// (0x000a8167) mp4_rocker2_pane

0xe77a,	// (0x000abc35) mp4_rocker2_pane_g1

0xe782,	// (0x000abc3d) mp4_rocker2_pane_g2

0xad1a,	// (0x000a81d5) mp4_rocker2_pane_g3

0xad22,	// (0x000a81dd) mp4_rocker2_pane_g4

0xad2a,	// (0x000a81e5) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000acd8c) mp4_rocker2_pane_g

0xa300,	// (0x000a77bb) main_camera4_pane

0xa300,	// (0x000a77bb) main_video4_pane

0x590c,	// (0x000a2dc7) main_video_tele_dialer_pane_t1_ParamLimits

0x590c,	// (0x000a2dc7) main_video_tele_dialer_pane_t1

0x5925,	// (0x000a2de0) main_video_tele_dialer_pane_t2_ParamLimits

0x5925,	// (0x000a2de0) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000acd46) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000acd46) main_video_tele_dialer_pane_t

0x5e8d,	// (0x000a3348) cam4_autofocus_pane_ParamLimits

0x5e8d,	// (0x000a3348) cam4_autofocus_pane

0x5ea3,	// (0x000a335e) cam4_image_uncrop_pane_ParamLimits

0x5ea3,	// (0x000a335e) cam4_image_uncrop_pane

0x5ebd,	// (0x000a3378) cam4_indicators_pane_ParamLimits

0x5ebd,	// (0x000a3378) cam4_indicators_pane

0x5ee8,	// (0x000a33a3) main_camera4_pane_g1_ParamLimits

0x5ee8,	// (0x000a33a3) main_camera4_pane_g1

0x5efa,	// (0x000a33b5) main_camera4_pane_g2_ParamLimits

0x5efa,	// (0x000a33b5) main_camera4_pane_g2

0x5f0d,	// (0x000a33c8) main_camera4_pane_g3_ParamLimits

0x5f0d,	// (0x000a33c8) main_camera4_pane_g3

0x5f20,	// (0x000a33db) main_camera4_pane_g4_ParamLimits

0x5f20,	// (0x000a33db) main_camera4_pane_g4

0x5f33,	// (0x000a33ee) main_camera4_pane_g5_ParamLimits

0x5f33,	// (0x000a33ee) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000acd97) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000acd97) main_camera4_pane_g

0x5f57,	// (0x000a3412) main_camera4_pane_t1_ParamLimits

0x5f57,	// (0x000a3412) main_camera4_pane_t1

0xad4e,	// (0x000a8209) bg_tb_trans_pane_cp06

0xad64,	// (0x000a821f) cam4_indicators_pane_g1

0xad75,	// (0x000a8230) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000acdb2) cam4_indicators_pane_g

0xad93,	// (0x000a824e) cam4_indicators_pane_t1

0x5fcd,	// (0x000a3488) main_video4_pane_g1_ParamLimits

0x5fcd,	// (0x000a3488) main_video4_pane_g1

0x5fdc,	// (0x000a3497) main_video4_pane_g2_ParamLimits

0x5fdc,	// (0x000a3497) main_video4_pane_g2

0x5feb,	// (0x000a34a6) main_video4_pane_g3_ParamLimits

0x5feb,	// (0x000a34a6) main_video4_pane_g3

0x5ffa,	// (0x000a34b5) main_video4_pane_g4_ParamLimits

0x5ffa,	// (0x000a34b5) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000acdb9) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000acdb9) main_video4_pane_g

0x6018,	// (0x000a34d3) vid4_indicators_pane_ParamLimits

0x6018,	// (0x000a34d3) vid4_indicators_pane

0x6046,	// (0x000a3501) video4_image_uncrop_cif_pane_ParamLimits

0x6046,	// (0x000a3501) video4_image_uncrop_cif_pane

0x6060,	// (0x000a351b) video4_image_uncrop_nhd_pane_ParamLimits

0x6060,	// (0x000a351b) video4_image_uncrop_nhd_pane

0x5ea3,	// (0x000a335e) video4_image_uncrop_vga_pane_ParamLimits

0x5ea3,	// (0x000a335e) video4_image_uncrop_vga_pane

0xa2f2,	// (0x000a77ad) bg_tb_trans_pane_cp07

0xadbf,	// (0x000a827a) vid4_indicators_pane_g1

0xadd3,	// (0x000a828e) vid4_indicators_pane_g2

0xade7,	// (0x000a82a2) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000acdc4) vid4_indicators_pane_g

0xae16,	// (0x000a82d1) vid4_indicators_pane_t1

0x6074,	// (0x000a352f) cam4_autofocus_pane_g1

0x607c,	// (0x000a3537) cam4_autofocus_pane_g2

0x6084,	// (0x000a353f) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000acdcf) cam4_autofocus_pane_g

0x608c,	// (0x000a3547) cam4_autofocus_pane_g3_copy1

0x5954,	// (0x000a2e0f) video_down_pane_cp_t1

0x5962,	// (0x000a2e1d) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000acd4b) video_down_pane_cp_t

0xa2f2,	// (0x000a77ad) popup_vitu2_window_ParamLimits

0xa2f2,	// (0x000a77ad) popup_vitu2_window

0x6094,	// (0x000a354f) aid_size_cell2_itu2_ParamLimits

0x6094,	// (0x000a354f) aid_size_cell2_itu2

0x60ba,	// (0x000a3575) aid_size_cell_itu2_ParamLimits

0x60ba,	// (0x000a3575) aid_size_cell_itu2

0x6116,	// (0x000a35d1) bg_popup_window_pane_cp09_ParamLimits

0x6116,	// (0x000a35d1) bg_popup_window_pane_cp09

0x6124,	// (0x000a35df) field_vitu2_entry_pane_ParamLimits

0x6124,	// (0x000a35df) field_vitu2_entry_pane

0x614a,	// (0x000a3605) grid_vitu2_function_pane_ParamLimits

0x614a,	// (0x000a3605) grid_vitu2_function_pane

0x619b,	// (0x000a3656) grid_vitu2_itu_pane_ParamLimits

0x619b,	// (0x000a3656) grid_vitu2_itu_pane

0x6233,	// (0x000a36ee) cell_vitu2_itu_pane_ParamLimits

0x6233,	// (0x000a36ee) cell_vitu2_itu_pane

0x625f,	// (0x000a371a) cell_vitu2_function_pane_ParamLimits

0x625f,	// (0x000a371a) cell_vitu2_function_pane

0xe78a,	// (0x000abc45) bg_popup_call_pane_cp08_ParamLimits

0xe78a,	// (0x000abc45) bg_popup_call_pane_cp08

0xe7a1,	// (0x000abc5c) field_vitu2_entry_pane_g1

0xe7ad,	// (0x000abc68) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000acdd6) field_vitu2_entry_pane_g

0x629e,	// (0x000a3759) field_vitu2_entry_pane_t1_ParamLimits

0x629e,	// (0x000a3759) field_vitu2_entry_pane_t1

0xe7c7,	// (0x000abc82) field_vitu2_entry_pane_t2_ParamLimits

0xe7c7,	// (0x000abc82) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000acddd) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000acddd) field_vitu2_entry_pane_t

0x62cc,	// (0x000a3787) bg_button_pane_cp010_ParamLimits

0x62cc,	// (0x000a3787) bg_button_pane_cp010

0xae2d,	// (0x000a82e8) cell_vitu2_itu_pane_g1

0x62e8,	// (0x000a37a3) cell_vitu2_itu_pane_t1_ParamLimits

0x62e8,	// (0x000a37a3) cell_vitu2_itu_pane_t1

0x01f3,	// (0x0009d6ae) cell_vitu2_itu_pane_t2_ParamLimits

0x01f3,	// (0x0009d6ae) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000acde7) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000acde7) cell_vitu2_itu_pane_t

0xa2f2,	// (0x000a77ad) bg_button_pane_cp011

0x6346,	// (0x000a3801) cell_vitu2_function_pane_g1

0xa300,	// (0x000a77bb) main_myfav_hc_pane

0x5d0b,	// (0x000a31c6) popup_image3_note_pane_ParamLimits

0x5d0b,	// (0x000a31c6) popup_image3_note_pane

0x5d27,	// (0x000a31e2) popup_image3_tool_bar_pane_ParamLimits

0x5d27,	// (0x000a31e2) popup_image3_tool_bar_pane

0x0281,	// (0x0009d73c) cell_vitu2_itu_pane_t3_ParamLimits

0x0281,	// (0x0009d73c) cell_vitu2_itu_pane_t3

0xe26f,	// (0x000ab72a) bg_popup_trans_pane

0xe7ec,	// (0x000abca7) grid_image3_tool_bar_pane

0xe7f6,	// (0x000abcb1) bg_popup_trans_pane_g1

0xb047,	// (0x000a8502) bg_popup_trans_pane_g2

0xe7fe,	// (0x000abcb9) bg_popup_trans_pane_g3

0xe806,	// (0x000abcc1) bg_popup_trans_pane_g4

0xe80e,	// (0x000abcc9) bg_popup_trans_pane_g5

0xe816,	// (0x000abcd1) bg_popup_trans_pane_g6

0xe81e,	// (0x000abcd9) bg_popup_trans_pane_g7

0xe826,	// (0x000abce1) bg_popup_trans_pane_g8

0xb027,	// (0x000a84e2) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000acdee) bg_popup_trans_pane_g

0xe82e,	// (0x000abce9) cell_image3_tool_bar_pane_ParamLimits

0xe82e,	// (0x000abce9) cell_image3_tool_bar_pane

0xdc95,	// (0x000ab150) cell_image3_tool_bar_pane_g1

0xe26f,	// (0x000ab72a) bg_popup_trans_pane_cp1

0xe842,	// (0x000abcfd) popup_image3_note_pane_t1

0xe850,	// (0x000abd0b) popup_image3_note_pane_t2

0xe85e,	// (0x000abd19) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000ace01) popup_image3_note_pane_t

0xe86c,	// (0x000abd27) popup_image3_note_pane_t3_copy1

0x635a,	// (0x000a3815) bg_myfav_hc_instruction_pane_ParamLimits

0x635a,	// (0x000a3815) bg_myfav_hc_instruction_pane

0x636e,	// (0x000a3829) cell_myfav_contact_pane_ParamLimits

0x636e,	// (0x000a3829) cell_myfav_contact_pane

0x638c,	// (0x000a3847) cell_myfav_contact_pane_cp1_ParamLimits

0x638c,	// (0x000a3847) cell_myfav_contact_pane_cp1

0x63a4,	// (0x000a385f) cell_myfav_contact_pane_cp2_ParamLimits

0x63a4,	// (0x000a385f) cell_myfav_contact_pane_cp2

0x63bc,	// (0x000a3877) cell_myfav_contact_pane_cp3_ParamLimits

0x63bc,	// (0x000a3877) cell_myfav_contact_pane_cp3

0x63d3,	// (0x000a388e) cell_myfav_contact_pane_cp4_ParamLimits

0x63d3,	// (0x000a388e) cell_myfav_contact_pane_cp4

0x63eb,	// (0x000a38a6) cell_myfav_contact_pane_cp5_ParamLimits

0x63eb,	// (0x000a38a6) cell_myfav_contact_pane_cp5

0x63ff,	// (0x000a38ba) cell_myfav_contact_pane_cp6_ParamLimits

0x63ff,	// (0x000a38ba) cell_myfav_contact_pane_cp6

0x6415,	// (0x000a38d0) cell_myfav_contact_pane_cp7_ParamLimits

0x6415,	// (0x000a38d0) cell_myfav_contact_pane_cp7

0xe87a,	// (0x000abd35) listscroll_gen_pane_cp05

0x642f,	// (0x000a38ea) main_myfav_hc_pane_g1_ParamLimits

0x642f,	// (0x000a38ea) main_myfav_hc_pane_g1

0x6449,	// (0x000a3904) main_myfav_hc_pane_g2_ParamLimits

0x6449,	// (0x000a3904) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000ace08) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000ace08) main_myfav_hc_pane_g

0x647b,	// (0x000a3936) main_myfav_hc_pane_t1_ParamLimits

0x647b,	// (0x000a3936) main_myfav_hc_pane_t1

0xe883,	// (0x000abd3e) main_myfav_hc_pane_t2_ParamLimits

0xe883,	// (0x000abd3e) main_myfav_hc_pane_t2

0xe895,	// (0x000abd50) main_myfav_hc_pane_t3_ParamLimits

0xe895,	// (0x000abd50) main_myfav_hc_pane_t3

0x6492,	// (0x000a394d) main_myfav_hc_pane_t4_ParamLimits

0x6492,	// (0x000a394d) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000ace0f) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000ace0f) main_myfav_hc_pane_t

0xdc95,	// (0x000ab150) bg_myfav_hc_instruction_pane_g1

0xe8a7,	// (0x000abd62) cell_myfav_contact_pane_g1_ParamLimits

0xe8a7,	// (0x000abd62) cell_myfav_contact_pane_g1

0xe8a7,	// (0x000abd62) cell_myfav_contact_pane_g2_ParamLimits

0xe8a7,	// (0x000abd62) cell_myfav_contact_pane_g2

0xe8b3,	// (0x000abd6e) cell_myfav_contact_pane_g3_ParamLimits

0xe8b3,	// (0x000abd6e) cell_myfav_contact_pane_g3

0xdfbe,	// (0x000ab479) cell_myfav_contact_pane_g4_ParamLimits

0xdfbe,	// (0x000ab479) cell_myfav_contact_pane_g4

0xe8c0,	// (0x000abd7b) cell_myfav_contact_pane_g5_ParamLimits

0xe8c0,	// (0x000abd7b) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000ace1a) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000ace1a) cell_myfav_contact_pane_g

0x6463,	// (0x000a391e) main_myfav_hc_pane_g3_ParamLimits

0x6463,	// (0x000a391e) main_myfav_hc_pane_g3

0x0456,	// (0x0009d911) popup_adpt_find_window

0x64ba,	// (0x000a3975) afind_page_pane_ParamLimits

0x64ba,	// (0x000a3975) afind_page_pane

0x64cf,	// (0x000a398a) aid_size_cell_afind_ParamLimits

0x64cf,	// (0x000a398a) aid_size_cell_afind

0x64ed,	// (0x000a39a8) bg_popup_sub_pane_cp09_ParamLimits

0x64ed,	// (0x000a39a8) bg_popup_sub_pane_cp09

0x64fa,	// (0x000a39b5) find_pane_cp01_ParamLimits

0x64fa,	// (0x000a39b5) find_pane_cp01

0xe8cc,	// (0x000abd87) grid_afind_control_pane_ParamLimits

0xe8cc,	// (0x000abd87) grid_afind_control_pane

0x6507,	// (0x000a39c2) grid_afind_pane_ParamLimits

0x6507,	// (0x000a39c2) grid_afind_pane

0x6529,	// (0x000a39e4) cell_afind_pane_ParamLimits

0x6529,	// (0x000a39e4) cell_afind_pane

0xdc95,	// (0x000ab150) afind_page_pane_g1

0x6590,	// (0x000a3a4b) afind_page_pane_g2

0x6599,	// (0x000a3a54) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000ace25) afind_page_pane_g

0x65a2,	// (0x000a3a5d) afind_page_pane_t1

0xe8e0,	// (0x000abd9b) cell_afind_grid_control_pane_ParamLimits

0xe8e0,	// (0x000abd9b) cell_afind_grid_control_pane

0xe69b,	// (0x000abb56) bg_button_pane_cp69_ParamLimits

0xe69b,	// (0x000abb56) bg_button_pane_cp69

0x65c2,	// (0x000a3a7d) cell_afind_pane_g1_ParamLimits

0x65c2,	// (0x000a3a7d) cell_afind_pane_g1

0x65cf,	// (0x000a3a8a) cell_afind_pane_t1_ParamLimits

0x65cf,	// (0x000a3a8a) cell_afind_pane_t1

0xa7c5,	// (0x000a7c80) bg_button_pane_cp72

0xe8ef,	// (0x000abdaa) cell_afind_grid_control_pane_g1

0x3616,	// (0x000a0ad1) aid_image_placing_area_ParamLimits

0x3616,	// (0x000a0ad1) aid_image_placing_area

0xe369,	// (0x000ab824) field_vitu_entry_pane_g1_ParamLimits

0xe369,	// (0x000ab824) field_vitu_entry_pane_g1

0xe375,	// (0x000ab830) field_vitu_entry_pane_g2_ParamLimits

0xe375,	// (0x000ab830) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000accd6) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000accd6) field_vitu_entry_pane_g

0x5769,	// (0x000a2c24) cell_vitu_itu_pane_g1_ParamLimits

0x57ab,	// (0x000a2c66) cell_vitu_itu_pane_t3_ParamLimits

0x57ab,	// (0x000a2c66) cell_vitu_itu_pane_t3

0xe64b,	// (0x000abb06) mp4_progress_pane_t1_ParamLimits

0xe664,	// (0x000abb1f) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000acd6b) mp4_progress_pane_t_ParamLimits

0xe67d,	// (0x000abb38) mup_progress_pane_cp04_ParamLimits

0x64a6,	// (0x000a3961) main_myfav_hc_pane_t5_ParamLimits

0x64a6,	// (0x000a3961) main_myfav_hc_pane_t5

0xa2a0,	// (0x000a775b) aid_zoom_text_primary

0x0456,	// (0x0009d911) popup_adpt_find_window_ParamLimits

0xa2f2,	// (0x000a77ad) main_cam_set_pane

0x5ed4,	// (0x000a338f) cam4_zoom_pane_ParamLimits

0x5ed4,	// (0x000a338f) cam4_zoom_pane

0x65e1,	// (0x000a3a9c) main_cam_set_pane_g1_ParamLimits

0x65e1,	// (0x000a3a9c) main_cam_set_pane_g1

0x65ef,	// (0x000a3aaa) main_cam_set_pane_g2_ParamLimits

0x65ef,	// (0x000a3aaa) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000ace2c) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000ace2c) main_cam_set_pane_g

0x6610,	// (0x000a3acb) main_cam_set_pane_t1_ParamLimits

0x6610,	// (0x000a3acb) main_cam_set_pane_t1

0x662b,	// (0x000a3ae6) main_cset_listscroll_pane_ParamLimits

0x662b,	// (0x000a3ae6) main_cset_listscroll_pane

0x664b,	// (0x000a3b06) main_cset_slider_pane_ParamLimits

0x664b,	// (0x000a3b06) main_cset_slider_pane

0xe900,	// (0x000abdbb) main_cset_list_pane_ParamLimits

0xe900,	// (0x000abdbb) main_cset_list_pane

0xe910,	// (0x000abdcb) scroll_pane_cp028

0x6671,	// (0x000a3b2c) aid_area_touch_slider

0x668d,	// (0x000a3b48) cset_slider_pane

0x66b7,	// (0x000a3b72) main_cset_slider_pane_g1

0x66cc,	// (0x000a3b87) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000ace31) main_cset_slider_pane_g

0xe949,	// (0x000abe04) main_cset_slider_pane_t1

0x6788,	// (0x000a3c43) main_cset_slider_pane_t2

0x67a2,	// (0x000a3c5d) main_cset_slider_pane_t3

0x67bc,	// (0x000a3c77) main_cset_slider_pane_t4

0x67d6,	// (0x000a3c91) main_cset_slider_pane_t5

0x67f0,	// (0x000a3cab) main_cset_slider_pane_t6

0x6805,	// (0x000a3cc0) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000ace56) main_cset_slider_pane_t

0x6909,	// (0x000a3dc4) cset_list_set_pane_ParamLimits

0x6909,	// (0x000a3dc4) cset_list_set_pane

0x691b,	// (0x000a3dd6) aid_position_infowindow_above

0x6923,	// (0x000a3dde) aid_position_infowindow_below

0xe9e9,	// (0x000abea4) cset_list_set_pane_g1_ParamLimits

0xe9e9,	// (0x000abea4) cset_list_set_pane_g1

0xe9f5,	// (0x000abeb0) cset_list_set_pane_g3_ParamLimits

0xe9f5,	// (0x000abeb0) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000ace75) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000ace75) cset_list_set_pane_g

0xea04,	// (0x000abebf) cset_list_set_pane_t1_ParamLimits

0xea04,	// (0x000abebf) cset_list_set_pane_t1

0xd577,	// (0x000aaa32) list_highlight_pane_cp021_ParamLimits

0xd577,	// (0x000aaa32) list_highlight_pane_cp021

0xb984,	// (0x000a8e3f) cset_slider_pane_g1

0xb996,	// (0x000a8e51) cset_slider_pane_g2

0xb98d,	// (0x000a8e48) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000ace7a) cset_slider_pane_g

0xae3f,	// (0x000a82fa) aid_area_touch_cam4_zoom

0xae47,	// (0x000a8302) cam4_zoom_cont_pane

0xae4f,	// (0x000a830a) cam4_zoom_pane_g1

0xae57,	// (0x000a8312) cam4_zoom_pane_g2

0x692b,	// (0x000a3de6) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000ace81) cam4_zoom_pane_g

0xae5f,	// (0x000a831a) cam4_zoom_cont_pane_g1

0xae68,	// (0x000a8323) cam4_zoom_cont_pane_g2

0xae71,	// (0x000a832c) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000ace88) cam4_zoom_cont_pane_g

0x5d94,	// (0x000a324f) call4_image_pane_ParamLimits

0x5d94,	// (0x000a324f) call4_image_pane

0xe6a7,	// (0x000abb62) call4_windows_conf_pane_ParamLimits

0xe6e8,	// (0x000abba3) popup_call4_audio_in_window_ParamLimits

0xe6e8,	// (0x000abba3) popup_call4_audio_in_window

0xe26f,	// (0x000ab72a) bg_popup_call2_act_pane_cp02

0xe75e,	// (0x000abc19) call4_list_conf_pane

0xdc95,	// (0x000ab150) call4_image_pane_g1

0xdc95,	// (0x000ab150) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x000acb97) call4_image_pane_g

0xea19,	// (0x000abed4) list_single_graphic_popup_conf4_pane_ParamLimits

0xea19,	// (0x000abed4) list_single_graphic_popup_conf4_pane

0xe26f,	// (0x000ab72a) list_highlight_pane_cp022

0xea2c,	// (0x000abee7) list_single_graphic_popup_conf4_pane_g1

0xb555,	// (0x000a8a10) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000ace8f) list_single_graphic_popup_conf4_pane_g

0xea34,	// (0x000abeef) list_single_graphic_popup_conf4_pane_t1

0x1a08,	// (0x0009eec3) popup_vtel_slider_window_ParamLimits

0x1a08,	// (0x0009eec3) popup_vtel_slider_window

0xe689,	// (0x000abb44) dialer2_ne_pane_t2_ParamLimits

0xe689,	// (0x000abb44) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000acd70) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000acd70) dialer2_ne_pane_t

0xda7a,	// (0x000aaf35) bg_popup_sub_pane_cp010_ParamLimits

0xda7a,	// (0x000aaf35) bg_popup_sub_pane_cp010

0x6933,	// (0x000a3dee) popup_vtel_slider_window_g1_ParamLimits

0x6933,	// (0x000a3dee) popup_vtel_slider_window_g1

0x6946,	// (0x000a3e01) popup_vtel_slider_window_g2_ParamLimits

0x6946,	// (0x000a3e01) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000ace94) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000ace94) popup_vtel_slider_window_g

0x699c,	// (0x000a3e57) vtel_slider_pane_ParamLimits

0x699c,	// (0x000a3e57) vtel_slider_pane

0x69be,	// (0x000a3e79) vtel_slider_pane_g1_ParamLimits

0x69be,	// (0x000a3e79) vtel_slider_pane_g1

0x69d2,	// (0x000a3e8d) vtel_slider_pane_g2_ParamLimits

0x69d2,	// (0x000a3e8d) vtel_slider_pane_g2

0x69ea,	// (0x000a3ea5) vtel_slider_pane_g3_ParamLimits

0x69ea,	// (0x000a3ea5) vtel_slider_pane_g3

0x69be,	// (0x000a3e79) vtel_slider_pane_g4_ParamLimits

0x69be,	// (0x000a3e79) vtel_slider_pane_g4

0x6a00,	// (0x000a3ebb) vtel_slider_pane_g5_ParamLimits

0x6a00,	// (0x000a3ebb) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000ace9d) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000ace9d) vtel_slider_pane_g

0xa2f2,	// (0x000a77ad) main_gallery2_pane

0x60e6,	// (0x000a35a1) aid_size_row_itut2_dropdow_list_ParamLimits

0x60e6,	// (0x000a35a1) aid_size_row_itut2_dropdow_list

0x6172,	// (0x000a362d) grid_vitu2_function_top_pane_ParamLimits

0x6172,	// (0x000a362d) grid_vitu2_function_top_pane

0x61dc,	// (0x000a3697) popup_vitu2_dropdown_list_window_ParamLimits

0x61dc,	// (0x000a3697) popup_vitu2_dropdown_list_window

0x6205,	// (0x000a36c0) popup_vitu2_match_list_window

0x6a24,	// (0x000a3edf) cell_vitu2_function_top_pane_ParamLimits

0x6a24,	// (0x000a3edf) cell_vitu2_function_top_pane

0x6a3c,	// (0x000a3ef7) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6a3c,	// (0x000a3ef7) cell_vitu2_function_top_pane_cp01

0x6a58,	// (0x000a3f13) cell_vitu2_function_top_wide_pane_ParamLimits

0x6a58,	// (0x000a3f13) cell_vitu2_function_top_wide_pane

0xa2f2,	// (0x000a77ad) bg_button_pane_cp012

0x6a74,	// (0x000a3f2f) cell_vitu2_function_top_pane_g1

0xae7a,	// (0x000a8335) bg_button_pane_cp013_ParamLimits

0xae7a,	// (0x000a8335) bg_button_pane_cp013

0x6a88,	// (0x000a3f43) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6a88,	// (0x000a3f43) cell_vitu2_function_top_wide_pane_g1

0xa2f2,	// (0x000a77ad) bg_popup_sub_pane_cp20

0x6aa0,	// (0x000a3f5b) list_vitu2_match_list_pane

0xe7f6,	// (0x000abcb1) bg_popup_sub_pane_cp20_g1

0xe7fe,	// (0x000abcb9) bg_popup_sub_pane_cp20_g2

0xb047,	// (0x000a8502) bg_popup_sub_pane_cp20_g3

0xe806,	// (0x000abcc1) bg_popup_sub_pane_cp20_g4

0xb027,	// (0x000a84e2) bg_popup_sub_pane_cp20_g5

0xea4a,	// (0x000abf05) bg_popup_sub_pane_cp20_g6

0xe816,	// (0x000abcd1) bg_popup_sub_pane_cp20_g7

0xe81e,	// (0x000abcd9) bg_popup_sub_pane_cp20_g8

0xe826,	// (0x000abce1) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000acea8) bg_popup_sub_pane_cp20_g

0xae96,	// (0x000a8351) list_vitu2_match_list_item_pane_ParamLimits

0xae96,	// (0x000a8351) list_vitu2_match_list_item_pane

0xaea8,	// (0x000a8363) list_vitu2_match_list_item_pane_t1

0xa300,	// (0x000a77bb) bg_popup_sub_pane_cp21

0xaeb6,	// (0x000a8371) grid_vitu2_dropdown_list_pane

0x6b0e,	// (0x000a3fc9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6b0e,	// (0x000a3fc9) cell_vitu2_dropdown_list_char_pane

0x6b2f,	// (0x000a3fea) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6b2f,	// (0x000a3fea) cell_vitu2_dropdown_list_ctrl_pane

0xea52,	// (0x000abf0d) cell_vitu2_dropdown_list_char_pane_g1

0xea5b,	// (0x000abf16) cell_vitu2_dropdown_list_char_pane_g2

0xea64,	// (0x000abf1f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000acec5) cell_vitu2_dropdown_list_char_pane_g

0x6b5b,	// (0x000a4016) cell_vitu2_dropdown_list_char_pane_t1

0x6b69,	// (0x000a4024) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6b69,	// (0x000a4024) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6b76,	// (0x000a4031) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6b76,	// (0x000a4031) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6b83,	// (0x000a403e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6b83,	// (0x000a403e) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6b90,	// (0x000a404b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6b90,	// (0x000a404b) cell_vitu2_dropdown_list_ctrl_pane_g4

0xad4e,	// (0x000a8209) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xad4e,	// (0x000a8209) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000acecc) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000acecc) cell_vitu2_dropdown_list_ctrl_pane_g

0x6bac,	// (0x000a4067) aid_size_cell_gallery2_ParamLimits

0x6bac,	// (0x000a4067) aid_size_cell_gallery2

0x6bca,	// (0x000a4085) grid_gallery2_pane_ParamLimits

0x6bca,	// (0x000a4085) grid_gallery2_pane

0x6be4,	// (0x000a409f) scroll_pane_cp029_ParamLimits

0x6be4,	// (0x000a409f) scroll_pane_cp029

0x6bf0,	// (0x000a40ab) cell_gallery2_pane_ParamLimits

0x6bf0,	// (0x000a40ab) cell_gallery2_pane

0xea6d,	// (0x000abf28) cell_gallery2_pane_g2

0x6c4c,	// (0x000a4107) cell_gallery2_pane_g3

0xea75,	// (0x000abf30) cell_gallery2_pane_g4

0xea7d,	// (0x000abf38) cell_gallery2_pane_g5

0xa769,	// (0x000a7c24) grid_highlight_pane_cp10

0x6205,	// (0x000a36c0) popup_vitu2_match_list_window_ParamLimits

0x621c,	// (0x000a36d7) popup_vitu2_query_window_ParamLimits

0x621c,	// (0x000a36d7) popup_vitu2_query_window

0xa300,	// (0x000a77bb) bg_vitu2_candi_button_pane

0xea52,	// (0x000abf0d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xea5b,	// (0x000abf16) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xea64,	// (0x000abf1f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6c54,	// (0x000a410f) bg_button_pane_cp015

0x6c66,	// (0x000a4121) bg_button_pane_cp016

0x6c79,	// (0x000a4134) bg_button_pane_cp017

0xd88d,	// (0x000aad48) bg_popup_sub_pane_cp22

0xea85,	// (0x000abf40) popup_vitu2_query_window_g1

0x6cbe,	// (0x000a4179) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000aced7) popup_vitu2_query_window_g

0x6cdd,	// (0x000a4198) popup_vitu2_query_window_t1_ParamLimits

0x6cdd,	// (0x000a4198) popup_vitu2_query_window_t1

0x6d12,	// (0x000a41cd) popup_vitu2_query_window_t2_ParamLimits

0x6d12,	// (0x000a41cd) popup_vitu2_query_window_t2

0x6d24,	// (0x000a41df) popup_vitu2_query_window_t3_ParamLimits

0x6d24,	// (0x000a41df) popup_vitu2_query_window_t3

0x6d4c,	// (0x000a4207) popup_vitu2_query_window_t4_ParamLimits

0x6d4c,	// (0x000a4207) popup_vitu2_query_window_t4

0x6d6d,	// (0x000a4228) popup_vitu2_query_window_t5_ParamLimits

0x6d6d,	// (0x000a4228) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000acede) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000acede) popup_vitu2_query_window_t

0xe8f8,	// (0x000abdb3) main_cset_text_pane

0x6671,	// (0x000a3b2c) aid_area_touch_slider_ParamLimits

0x668d,	// (0x000a3b48) cset_slider_pane_ParamLimits

0x66b7,	// (0x000a3b72) main_cset_slider_pane_g1_ParamLimits

0x66cc,	// (0x000a3b87) main_cset_slider_pane_g2_ParamLimits

0xe919,	// (0x000abdd4) main_cset_slider_pane_g3_ParamLimits

0xe919,	// (0x000abdd4) main_cset_slider_pane_g3

0x66e1,	// (0x000a3b9c) main_cset_slider_pane_g4_ParamLimits

0x66e1,	// (0x000a3b9c) main_cset_slider_pane_g4

0x66f0,	// (0x000a3bab) main_cset_slider_pane_g5_ParamLimits

0x66f0,	// (0x000a3bab) main_cset_slider_pane_g5

0x66fc,	// (0x000a3bb7) main_cset_slider_pane_g6_ParamLimits

0x66fc,	// (0x000a3bb7) main_cset_slider_pane_g6

0xf976,	// (0x000ace31) main_cset_slider_pane_g_ParamLimits

0xe949,	// (0x000abe04) main_cset_slider_pane_t1_ParamLimits

0x6788,	// (0x000a3c43) main_cset_slider_pane_t2_ParamLimits

0x67a2,	// (0x000a3c5d) main_cset_slider_pane_t3_ParamLimits

0x67bc,	// (0x000a3c77) main_cset_slider_pane_t4_ParamLimits

0x67d6,	// (0x000a3c91) main_cset_slider_pane_t5_ParamLimits

0x67f0,	// (0x000a3cab) main_cset_slider_pane_t6_ParamLimits

0x6805,	// (0x000a3cc0) main_cset_slider_pane_t7_ParamLimits

0x682f,	// (0x000a3cea) main_cset_slider_pane_t8_ParamLimits

0x682f,	// (0x000a3cea) main_cset_slider_pane_t8

0x6857,	// (0x000a3d12) main_cset_slider_pane_t9_ParamLimits

0x6857,	// (0x000a3d12) main_cset_slider_pane_t9

0x687f,	// (0x000a3d3a) main_cset_slider_pane_t10_ParamLimits

0x687f,	// (0x000a3d3a) main_cset_slider_pane_t10

0x68a7,	// (0x000a3d62) main_cset_slider_pane_t11_ParamLimits

0x68a7,	// (0x000a3d62) main_cset_slider_pane_t11

0x68cf,	// (0x000a3d8a) main_cset_slider_pane_t12_ParamLimits

0x68cf,	// (0x000a3d8a) main_cset_slider_pane_t12

0x68ec,	// (0x000a3da7) main_cset_slider_pane_t13_ParamLimits

0x68ec,	// (0x000a3da7) main_cset_slider_pane_t13

0xf99b,	// (0x000ace56) main_cset_slider_pane_t_ParamLimits

0xe26f,	// (0x000ab72a) bg_popup_sub_pane_cp011

0xea91,	// (0x000abf4c) main_cset_text_pane_g1

0xea99,	// (0x000abf54) main_cset_text_pane_t1

0xeaa7,	// (0x000abf62) main_cset_text_pane_t2

0xeab5,	// (0x000abf70) main_cset_text_pane_t3

0xeac3,	// (0x000abf7e) main_cset_text_pane_t4

0xead1,	// (0x000abf8c) main_cset_text_pane_t5

0xeadf,	// (0x000abf9a) main_cset_text_pane_t6

0xeaed,	// (0x000abfa8) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000aceed) main_cset_text_pane_t

0xa300,	// (0x000a77bb) main_cam4_burst_pane

0xa300,	// (0x000a77bb) main_cam5_pane

0x65b0,	// (0x000a3a6b) bg_button_pane_cp019

0x65b9,	// (0x000a3a74) bg_button_pane_cp020

0xe925,	// (0x000abde0) main_cset_slider_pane_g7_ParamLimits

0xe925,	// (0x000abde0) main_cset_slider_pane_g7

0xe931,	// (0x000abdec) main_cset_slider_pane_g8_ParamLimits

0xe931,	// (0x000abdec) main_cset_slider_pane_g8

0x6710,	// (0x000a3bcb) main_cset_slider_pane_g9_ParamLimits

0x6710,	// (0x000a3bcb) main_cset_slider_pane_g9

0x671c,	// (0x000a3bd7) main_cset_slider_pane_g10_ParamLimits

0x671c,	// (0x000a3bd7) main_cset_slider_pane_g10

0x6728,	// (0x000a3be3) main_cset_slider_pane_g11_ParamLimits

0x6728,	// (0x000a3be3) main_cset_slider_pane_g11

0x6734,	// (0x000a3bef) main_cset_slider_pane_g12_ParamLimits

0x6734,	// (0x000a3bef) main_cset_slider_pane_g12

0x6740,	// (0x000a3bfb) main_cset_slider_pane_g13_ParamLimits

0x6740,	// (0x000a3bfb) main_cset_slider_pane_g13

0x674c,	// (0x000a3c07) main_cset_slider_pane_g14_ParamLimits

0x674c,	// (0x000a3c07) main_cset_slider_pane_g14

0x6758,	// (0x000a3c13) main_cset_slider_pane_g15_ParamLimits

0x6758,	// (0x000a3c13) main_cset_slider_pane_g15

0xe977,	// (0x000abe32) main_cset_slider_pane_t14_ParamLimits

0xe977,	// (0x000abe32) main_cset_slider_pane_t14

0xe9b0,	// (0x000abe6b) main_cset_slider_pane_t15_ParamLimits

0xe9b0,	// (0x000abe6b) main_cset_slider_pane_t15

0x6de4,	// (0x000a429f) aid_cam4_burst_size_cell_ParamLimits

0x6de4,	// (0x000a429f) aid_cam4_burst_size_cell

0x6e04,	// (0x000a42bf) grid_cam4_burst_pane_ParamLimits

0x6e04,	// (0x000a42bf) grid_cam4_burst_pane

0x6e3c,	// (0x000a42f7) linegrid_cam4_burst_pane_ParamLimits

0x6e3c,	// (0x000a42f7) linegrid_cam4_burst_pane

0xeafb,	// (0x000abfb6) scroll_pane_cp30_ParamLimits

0xeafb,	// (0x000abfb6) scroll_pane_cp30

0x6e60,	// (0x000a431b) cell_cam4_burst_pane_ParamLimits

0x6e60,	// (0x000a431b) cell_cam4_burst_pane

0xeb07,	// (0x000abfc2) linegrid_cam4_burst_pane_g1_ParamLimits

0xeb07,	// (0x000abfc2) linegrid_cam4_burst_pane_g1

0x6ead,	// (0x000a4368) linegrid_cam4_burst_pane_g2_ParamLimits

0x6ead,	// (0x000a4368) linegrid_cam4_burst_pane_g2

0xeb14,	// (0x000abfcf) linegrid_cam4_burst_pane_g3_ParamLimits

0xeb14,	// (0x000abfcf) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000acefc) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000acefc) linegrid_cam4_burst_pane_g

0x6ebe,	// (0x000a4379) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6ebe,	// (0x000a4379) linegrid_cam4_burst_pane_g3_copy1

0xef1d,	// (0x000ac3d8) linegrid_cam4_burst_pane_g4_ParamLimits

0xef1d,	// (0x000ac3d8) linegrid_cam4_burst_pane_g4

0x6ed8,	// (0x000a4393) linegrid_cam4_burst_pane_g5_ParamLimits

0x6ed8,	// (0x000a4393) linegrid_cam4_burst_pane_g5

0x6ee9,	// (0x000a43a4) linegrid_cam4_burst_pane_g6_ParamLimits

0x6ee9,	// (0x000a43a4) linegrid_cam4_burst_pane_g6

0xef2a,	// (0x000ac3e5) linegrid_cam4_burst_pane_g7_ParamLimits

0xef2a,	// (0x000ac3e5) linegrid_cam4_burst_pane_g7

0x6f00,	// (0x000a43bb) cell_cam4_burst_pane_g1

0xef43,	// (0x000ac3fe) main_cam5_pane_t1_ParamLimits

0xef43,	// (0x000ac3fe) main_cam5_pane_t1

0xef55,	// (0x000ac410) main_cam5_pane_t2_ParamLimits

0xef55,	// (0x000ac410) main_cam5_pane_t2

0xef67,	// (0x000ac422) main_cam5_pane_t3_ParamLimits

0xef67,	// (0x000ac422) main_cam5_pane_t3

0xef79,	// (0x000ac434) main_cam5_pane_t4_ParamLimits

0xef79,	// (0x000ac434) main_cam5_pane_t4

0xef91,	// (0x000ac44c) main_cam5_pane_t5_ParamLimits

0xef91,	// (0x000ac44c) main_cam5_pane_t5

0xefa5,	// (0x000ac460) main_cam5_pane_t6_ParamLimits

0xefa5,	// (0x000ac460) main_cam5_pane_t6

0xefb9,	// (0x000ac474) main_cam5_pane_t7_ParamLimits

0xefb9,	// (0x000ac474) main_cam5_pane_t7

0xefcb,	// (0x000ac486) main_cam5_pane_t8_ParamLimits

0xefcb,	// (0x000ac486) main_cam5_pane_t8

0xefe7,	// (0x000ac4a2) main_cam5_pane_t9_ParamLimits

0xefe7,	// (0x000ac4a2) main_cam5_pane_t9

0xeff9,	// (0x000ac4b4) main_cam5_pane_t10_ParamLimits

0xeff9,	// (0x000ac4b4) main_cam5_pane_t10

0xf00b,	// (0x000ac4c6) main_cam5_pane_t11_ParamLimits

0xf00b,	// (0x000ac4c6) main_cam5_pane_t11

0xf01d,	// (0x000ac4d8) main_cam5_pane_t12_ParamLimits

0xf01d,	// (0x000ac4d8) main_cam5_pane_t12

0xf032,	// (0x000ac4ed) main_cam5_pane_t13_ParamLimits

0xf032,	// (0x000ac4ed) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000acf08) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000acf08) main_cam5_pane_t

0x04d8,	// (0x0009d993) popup_scut_keymap_window_ParamLimits

0x04d8,	// (0x0009d993) popup_scut_keymap_window

0x6f13,	// (0x000a43ce) aid_size_cell_brow_shortcut

0xa769,	// (0x000a7c24) bg_popup_window_pane_cp010

0x6f1f,	// (0x000a43da) grid_scut_pane

0x6f2b,	// (0x000a43e6) cell_scut_pane_ParamLimits

0x6f2b,	// (0x000a43e6) cell_scut_pane

0x6f42,	// (0x000a43fd) cell_scut_pane_g1

0xf04f,	// (0x000ac50a) cell_scut_pane_t1

0xf05e,	// (0x000ac519) cell_scut_pane_t2

0x6f4b,	// (0x000a4406) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000acf23) cell_scut_pane_t

0x4c5c,	// (0x000a2117) main_mup3_pane_g8_ParamLimits

0x4c5c,	// (0x000a2117) main_mup3_pane_g8

0x60fe,	// (0x000a35b9) area_vitu2_query_pane_ParamLimits

0x60fe,	// (0x000a35b9) area_vitu2_query_pane

0x6c8c,	// (0x000a4147) input_focus_pane_cp08

0xf06d,	// (0x000ac528) area_vitu2_query_pane_g1

0x6f59,	// (0x000a4414) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000acf2a) area_vitu2_query_pane_g

0x6f6a,	// (0x000a4425) area_vitu2_query_pane_t1_ParamLimits

0x6f6a,	// (0x000a4425) area_vitu2_query_pane_t1

0x6f7e,	// (0x000a4439) area_vitu2_query_pane_t2_ParamLimits

0x6f7e,	// (0x000a4439) area_vitu2_query_pane_t2

0x6f92,	// (0x000a444d) area_vitu2_query_pane_t3_ParamLimits

0x6f92,	// (0x000a444d) area_vitu2_query_pane_t3

0xeb21,	// (0x000abfdc) area_vitu2_query_pane_t4_ParamLimits

0xeb21,	// (0x000abfdc) area_vitu2_query_pane_t4

0xeb49,	// (0x000ac004) area_vitu2_query_pane_t5_ParamLimits

0xeb49,	// (0x000ac004) area_vitu2_query_pane_t5

0xeb71,	// (0x000ac02c) area_vitu2_query_pane_t6_ParamLimits

0xeb71,	// (0x000ac02c) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000acf2f) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000acf2f) area_vitu2_query_pane_t

0x6fba,	// (0x000a4475) bg_button_pane_cp018

0x6fc8,	// (0x000a4483) bg_button_pane_cp021

0x6fd4,	// (0x000a448f) bg_button_pane_cp022

0x6fe3,	// (0x000a449e) input_focus_pane_cp09

0xb691,	// (0x000a8b4c) aid_size_touch_mv_arrow_left

0xb6ba,	// (0x000a8b75) aid_size_touch_mv_arrow_right

0x6770,	// (0x000a3c2b) main_cset_slider_pane_g16_ParamLimits

0x6770,	// (0x000a3c2b) main_cset_slider_pane_g16

0x677c,	// (0x000a3c37) main_cset_slider_pane_g17_ParamLimits

0x677c,	// (0x000a3c37) main_cset_slider_pane_g17

0x6f00,	// (0x000a43bb) cell_cam4_burst_pane_g1_ParamLimits

0xe26f,	// (0x000ab72a) compa_mode_pane

0x6956,	// (0x000a3e11) popup_vtel_slider_window_g3_ParamLimits

0x6956,	// (0x000a3e11) popup_vtel_slider_window_g3

0x696d,	// (0x000a3e28) popup_vtel_slider_window_g4_ParamLimits

0x696d,	// (0x000a3e28) popup_vtel_slider_window_g4

0x6984,	// (0x000a3e3f) popup_vtel_slider_window_t1_ParamLimits

0x6984,	// (0x000a3e3f) popup_vtel_slider_window_t1

0xa300,	// (0x000a77bb) main_cl_pane

0xa9be,	// (0x000a7e79) popup_imed_adjust2_window_ParamLimits

0xd88d,	// (0x000aad48) bg_tb_trans_pane_cp05_ParamLimits

0xe21c,	// (0x000ab6d7) popup_imed_adjust2_window_g1_ParamLimits

0xe22b,	// (0x000ab6e6) popup_imed_adjust2_window_g2_ParamLimits

0xe22b,	// (0x000ab6e6) popup_imed_adjust2_window_g2

0xe237,	// (0x000ab6f2) popup_imed_adjust2_window_g3_ParamLimits

0xe237,	// (0x000ab6f2) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000acc9a) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000acc9a) popup_imed_adjust2_window_g

0xe243,	// (0x000ab6fe) popup_imed_adjust2_window_t1_ParamLimits

0xe25b,	// (0x000ab716) slider_imed_adjust_pane_ParamLimits

0xe2f1,	// (0x000ab7ac) slider_imed_adjust_pane_g1_ParamLimits

0xe301,	// (0x000ab7bc) slider_imed_adjust_pane_g2_ParamLimits

0xe311,	// (0x000ab7cc) slider_imed_adjust_pane_g3_ParamLimits

0xe322,	// (0x000ab7dd) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000acca1) slider_imed_adjust_pane_g_ParamLimits

0x5e75,	// (0x000a3330) aid_touch_area_cam4_ParamLimits

0x5e75,	// (0x000a3330) aid_touch_area_cam4

0xad32,	// (0x000a81ed) battery_pane_cp01

0x5f44,	// (0x000a33ff) main_camera4_pane_g6_ParamLimits

0x5f44,	// (0x000a33ff) main_camera4_pane_g6

0x5f6e,	// (0x000a3429) main_camera4_pane_t2_ParamLimits

0x5f6e,	// (0x000a3429) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000acda4) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000acda4) main_camera4_pane_t

0x5fb5,	// (0x000a3470) aid_touch_area_vid4_ParamLimits

0x5fb5,	// (0x000a3470) aid_touch_area_vid4

0x6009,	// (0x000a34c4) main_video4_pane_g5_ParamLimits

0x6009,	// (0x000a34c4) main_video4_pane_g5

0x602e,	// (0x000a34e9) vid4_progress_pane_ParamLimits

0x602e,	// (0x000a34e9) vid4_progress_pane

0xe93d,	// (0x000abdf8) main_cset_slider_pane_g18_ParamLimits

0xe93d,	// (0x000abdf8) main_cset_slider_pane_g18

0xef37,	// (0x000ac3f2) cell_cam4_burst_pane_g2_ParamLimits

0xef37,	// (0x000ac3f2) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000acf03) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000acf03) cell_cam4_burst_pane_g

0xa538,	// (0x000a79f3) bg_cl_pane_ParamLimits

0xa538,	// (0x000a79f3) bg_cl_pane

0x6ff2,	// (0x000a44ad) cl_header_pane_ParamLimits

0x6ff2,	// (0x000a44ad) cl_header_pane

0x7006,	// (0x000a44c1) cl_listscroll_pane_ParamLimits

0x7006,	// (0x000a44c1) cl_listscroll_pane

0xf079,	// (0x000ac534) bg_cl_pane_g1

0xf081,	// (0x000ac53c) bg_cl_pane_g2

0xf089,	// (0x000ac544) bg_cl_pane_g3

0xf091,	// (0x000ac54c) bg_cl_pane_g4

0xf099,	// (0x000ac554) bg_cl_pane_g5

0xf0a1,	// (0x000ac55c) bg_cl_pane_g6

0xf0a9,	// (0x000ac564) bg_cl_pane_g7

0xf0b1,	// (0x000ac56c) bg_cl_pane_g8

0xf0b9,	// (0x000ac574) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000acf3e) bg_cl_pane_g

0x7016,	// (0x000a44d1) aid_height_cl_leading_ParamLimits

0x7016,	// (0x000a44d1) aid_height_cl_leading

0x7022,	// (0x000a44dd) aid_height_cl_text_ParamLimits

0x7022,	// (0x000a44dd) aid_height_cl_text

0xd577,	// (0x000aaa32) bg_cl_header_pane_ParamLimits

0xd577,	// (0x000aaa32) bg_cl_header_pane

0x7041,	// (0x000a44fc) cl_header_pane_g1_ParamLimits

0x7041,	// (0x000a44fc) cl_header_pane_g1

0x7057,	// (0x000a4512) cl_header_pane_t1_ParamLimits

0x7057,	// (0x000a4512) cl_header_pane_t1

0xf0c1,	// (0x000ac57c) cl_list_pane

0xe910,	// (0x000abdcb) hc_scroll_pane_cp01

0xb027,	// (0x000a84e2) bg_cl_header_pane_g1

0xe7f6,	// (0x000abcb1) bg_cl_header_pane_g2

0xb047,	// (0x000a8502) bg_cl_header_pane_g3

0xe806,	// (0x000abcc1) bg_cl_header_pane_g4

0xe7fe,	// (0x000abcb9) bg_cl_header_pane_g5

0xea4a,	// (0x000abf05) bg_cl_header_pane_g6

0xe81e,	// (0x000abcd9) bg_cl_header_pane_g7

0xe826,	// (0x000abce1) bg_cl_header_pane_g8

0xe816,	// (0x000abcd1) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000acf51) bg_cl_header_pane_g

0x7070,	// (0x000a452b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7070,	// (0x000a452b) hc_cl_list_double_graphic_heading_pane

0x7081,	// (0x000a453c) hc_cl_list_single_graphic_pane_ParamLimits

0x7081,	// (0x000a453c) hc_cl_list_single_graphic_pane

0x7097,	// (0x000a4552) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7097,	// (0x000a4552) hc_cl_list_single_graphic_pane_g1

0x70a3,	// (0x000a455e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x70a3,	// (0x000a455e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000acf64) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000acf64) hc_cl_list_single_graphic_pane_g

0x70b7,	// (0x000a4572) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x70b7,	// (0x000a4572) hc_cl_list_single_graphic_pane_t1

0x7097,	// (0x000a4552) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7097,	// (0x000a4552) hc_cl_list_double_graphic_heading_pane_g1

0x70cc,	// (0x000a4587) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x70cc,	// (0x000a4587) hc_cl_list_double_graphic_heading_pane_g2

0x70e0,	// (0x000a459b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x70e0,	// (0x000a459b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000acf69) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000acf69) hc_cl_list_double_graphic_heading_pane_g

0x70f4,	// (0x000a45af) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x70f4,	// (0x000a45af) hc_cl_list_double_graphic_heading_pane_t1

0x7109,	// (0x000a45c4) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7109,	// (0x000a45c4) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000acf70) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000acf70) hc_cl_list_double_graphic_heading_pane_t

0xaec6,	// (0x000a8381) vid4_progress_pane_g1

0xaed6,	// (0x000a8391) vid4_progress_pane_g2

0x711e,	// (0x000a45d9) vid4_progress_pane_g3

0xaee6,	// (0x000a83a1) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000acf75) vid4_progress_pane_g

0x7130,	// (0x000a45eb) vid4_progress_pane_t1

0xaefe,	// (0x000a83b9) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000acf80) vid4_progress_pane_t

0x7148,	// (0x000a4603) wait_bar_pane_cp07

0xda88,	// (0x000aaf43) blid_firmament_pane_ParamLimits

0xdacb,	// (0x000aaf86) popup_blid_sat_info2_window_g1

0xdaef,	// (0x000aafaa) popup_blid_sat_info2_window_t3

0xdafd,	// (0x000aafb8) popup_blid_sat_info2_window_t4

0xdb0b,	// (0x000aafc6) popup_blid_sat_info2_window_t5

0xdb19,	// (0x000aafd4) popup_blid_sat_info2_window_t6

0xdb29,	// (0x000aafe4) popup_blid_sat_info2_window_t7

0xdb37,	// (0x000aaff2) popup_blid_sat_info2_window_t8

0xdb45,	// (0x000ab000) popup_blid_sat_info2_window_t9

0xdb53,	// (0x000ab00e) popup_blid_sat_info2_window_t10

0xdc15,	// (0x000ab0d0) aid_firma_cardinal_ParamLimits

0xdc29,	// (0x000ab0e4) blid_firmament_pane_t1_ParamLimits

0xdc40,	// (0x000ab0fb) blid_firmament_pane_t2_ParamLimits

0xdc57,	// (0x000ab112) blid_firmament_pane_t3_ParamLimits

0xdc6e,	// (0x000ab129) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x000acb8e) blid_firmament_pane_t_ParamLimits

0xdc85,	// (0x000ab140) blid_sat_info_pane_ParamLimits

0xa2f2,	// (0x000a77ad) main_cam_set_pane_ParamLimits

0x5523,	// (0x000a29de) aid_size_cell_colour_35_ParamLimits

0x5543,	// (0x000a29fe) aid_size_cell_colour_112_ParamLimits

0x5563,	// (0x000a2a1e) aid_size_cell_effect_ParamLimits

0xd88d,	// (0x000aad48) bg_tb_trans_pane_cp02_ParamLimits

0xb28f,	// (0x000a874a) heading_imed_pane_ParamLimits

0x5583,	// (0x000a2a3e) listscroll_imed_pane_ParamLimits

0xce6a,	// (0x000aa325) popup_call2_audio_first_window_g5_ParamLimits

0xce6a,	// (0x000aa325) popup_call2_audio_first_window_g5

0x5b20,	// (0x000a2fdb) aid_size_touch_image3_arrow_left_ParamLimits

0x5b20,	// (0x000a2fdb) aid_size_touch_image3_arrow_left

0x5b4c,	// (0x000a3007) aid_size_touch_image3_arrow_right_ParamLimits

0x5b4c,	// (0x000a3007) aid_size_touch_image3_arrow_right

0xaf13,	// (0x000a83ce) vid4_progress_pane_t3

0x5896,	// (0x000a2d51) main_hwr_training_symbol_option_pane_ParamLimits

0x5896,	// (0x000a2d51) main_hwr_training_symbol_option_pane

0xe58b,	// (0x000aba46) popup_hwr_training_preview_window_ParamLimits

0xe58b,	// (0x000aba46) popup_hwr_training_preview_window

0x58b6,	// (0x000a2d71) hwr_training_navi_pane_g5_ParamLimits

0x58b6,	// (0x000a2d71) hwr_training_navi_pane_g5

0xe7e4,	// (0x000abc9f) popup_char_count_window

0xa2f2,	// (0x000a77ad) bg_popup_sub_pane_cp20_ParamLimits

0x6aa0,	// (0x000a3f5b) list_vitu2_match_list_pane_ParamLimits

0x6aaf,	// (0x000a3f6a) vitu2_page_scroll_pane_ParamLimits

0x6aaf,	// (0x000a3f6a) vitu2_page_scroll_pane

0x719b,	// (0x000a4656) list_single_hwr_training_symbol_option_pane_ParamLimits

0x719b,	// (0x000a4656) list_single_hwr_training_symbol_option_pane

0x71ae,	// (0x000a4669) list_single_hwr_training_symbol_option_pane_g1

0x71b6,	// (0x000a4671) list_single_hwr_training_symbol_option_pane_t1

0x71c4,	// (0x000a467f) bg_button_pane_cp023

0x71cd,	// (0x000a4688) bg_button_pane_cp024

0x7200,	// (0x000a46bb) vitu2_page_scroll_pane_g1

0x7208,	// (0x000a46c3) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000acf87) vitu2_page_scroll_pane_g

0x7210,	// (0x000a46cb) vitu2_page_scroll_pane_t1

0xd9e8,	// (0x000aaea3) popup_char_count_window_g1

0x721f,	// (0x000a46da) popup_char_count_window_g2

0x7228,	// (0x000a46e3) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000acf8c) popup_char_count_window_g

0x7231,	// (0x000a46ec) popup_char_count_window_t1

0xa300,	// (0x000a77bb) main_vded2_pane

0xe208,	// (0x000ab6c3) aid_size_cell_imed_line

0xe212,	// (0x000ab6cd) grid_imed_line_width_pane

0xadf8,	// (0x000a82b3) vid4_indicators_pane_g4

0x723f,	// (0x000a46fa) cell_imed_line_width_pane_ParamLimits

0x723f,	// (0x000a46fa) cell_imed_line_width_pane

0x7253,	// (0x000a470e) cell_imed_line_width_pane_g1

0x47da,	// (0x000a1c95) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000acf93) cell_imed_line_width_pane_g

0x725c,	// (0x000a4717) main_vded2_pane_g1_ParamLimits

0x725c,	// (0x000a4717) main_vded2_pane_g1

0x7272,	// (0x000a472d) main_vded2_pane_g2_ParamLimits

0x7272,	// (0x000a472d) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000acf98) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000acf98) main_vded2_pane_g

0x7284,	// (0x000a473f) vded2_slider_pane_ParamLimits

0x7284,	// (0x000a473f) vded2_slider_pane

0x7294,	// (0x000a474f) aid_size_touch_vded2_end

0x729e,	// (0x000a4759) aid_size_touch_vded2_playhead

0x72a8,	// (0x000a4763) aid_size_touch_vded2_start

0x72b0,	// (0x000a476b) vded2_slider_bg_pane

0x72b9,	// (0x000a4774) vded2_slider_pane_g1

0x72c2,	// (0x000a477d) vded2_slider_pane_g2

0x72ca,	// (0x000a4785) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000acf9d) vded2_slider_pane_g

0x72d5,	// (0x000a4790) vded2_slider_bg_pane_g1

0x72de,	// (0x000a4799) vded2_slider_bg_pane_g2

0x72e7,	// (0x000a47a2) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x000acfa4) vded2_slider_bg_pane_g

0x3285,	// (0x000a0740) aid_postcard_touch_down_pane_ParamLimits

0x3285,	// (0x000a0740) aid_postcard_touch_down_pane

0x329b,	// (0x000a0756) aid_postcard_touch_up_pane_ParamLimits

0x329b,	// (0x000a0756) aid_postcard_touch_up_pane

0xa300,	// (0x000a77bb) main_blid2_pane

0xa9a4,	// (0x000a7e5f) popup_blid2_search_window

0xe26f,	// (0x000ab72a) blid2_gps_pane

0xe26f,	// (0x000ab72a) blid2_navig_pane

0xe26f,	// (0x000ab72a) blid2_search_pane

0xe26f,	// (0x000ab72a) blid2_tripm_pane

0x72f0,	// (0x000a47ab) blid2_search_pane_g1_ParamLimits

0x72f0,	// (0x000a47ab) blid2_search_pane_g1

0x730a,	// (0x000a47c5) blid2_search_pane_t1_ParamLimits

0x730a,	// (0x000a47c5) blid2_search_pane_t1

0x731c,	// (0x000a47d7) aid_size_cell_blid2_gps_ParamLimits

0x731c,	// (0x000a47d7) aid_size_cell_blid2_gps

0x7334,	// (0x000a47ef) blid2_gps_pane_g1_ParamLimits

0x7334,	// (0x000a47ef) blid2_gps_pane_g1

0x7348,	// (0x000a4803) grid_blid2_satellite_pane_ParamLimits

0x7348,	// (0x000a4803) grid_blid2_satellite_pane

0x7362,	// (0x000a481d) blid2_navig_pane_g1_ParamLimits

0x7362,	// (0x000a481d) blid2_navig_pane_g1

0x736e,	// (0x000a4829) blid2_navig_pane_t1_ParamLimits

0x736e,	// (0x000a4829) blid2_navig_pane_t1

0x7389,	// (0x000a4844) blid2_navig_pane_t2_ParamLimits

0x7389,	// (0x000a4844) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x000acfab) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x000acfab) blid2_navig_pane_t

0x73a4,	// (0x000a485f) blid2_navig_ring_pane_ParamLimits

0x73a4,	// (0x000a485f) blid2_navig_ring_pane

0x73bd,	// (0x000a4878) blid2_speed_pane_ParamLimits

0x73bd,	// (0x000a4878) blid2_speed_pane

0x73c9,	// (0x000a4884) blid2_tripm_pane_g1_ParamLimits

0x73c9,	// (0x000a4884) blid2_tripm_pane_g1

0x73e2,	// (0x000a489d) blid2_tripm_pane_g2_ParamLimits

0x73e2,	// (0x000a489d) blid2_tripm_pane_g2

0x73f6,	// (0x000a48b1) blid2_tripm_pane_g3_ParamLimits

0x73f6,	// (0x000a48b1) blid2_tripm_pane_g3

0x740a,	// (0x000a48c5) blid2_tripm_pane_g4_ParamLimits

0x740a,	// (0x000a48c5) blid2_tripm_pane_g4

0x741e,	// (0x000a48d9) blid2_tripm_pane_g5_ParamLimits

0x741e,	// (0x000a48d9) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x000acfb0) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x000acfb0) blid2_tripm_pane_g

0x7444,	// (0x000a48ff) blid2_tripm_pane_t1_ParamLimits

0x7444,	// (0x000a48ff) blid2_tripm_pane_t1

0x745f,	// (0x000a491a) blid2_tripm_pane_t2_ParamLimits

0x745f,	// (0x000a491a) blid2_tripm_pane_t2

0x7478,	// (0x000a4933) blid2_tripm_pane_t3_ParamLimits

0x7478,	// (0x000a4933) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x000acfbd) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x000acfbd) blid2_tripm_pane_t

0x74bf,	// (0x000a497a) cell_blid2_satellite_pane_ParamLimits

0x74bf,	// (0x000a497a) cell_blid2_satellite_pane

0x74dd,	// (0x000a4998) cell_blid2_satellite_pane_g1

0x74e6,	// (0x000a49a1) cell_blid2_satellite_pane_t1

0xdc95,	// (0x000ab150) blid2_speed_pane_g1

0x74f4,	// (0x000a49af) blid2_speed_pane_t1

0x7502,	// (0x000a49bd) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x000acfc6) blid2_speed_pane_t

0xdc95,	// (0x000ab150) blid2_navig_ring_pane_g1

0x7510,	// (0x000a49cb) blid2_navig_ring_pane_g2

0x7518,	// (0x000a49d3) blid2_navig_ring_pane_g3

0x7520,	// (0x000a49db) blid2_navig_ring_pane_g4

0x7528,	// (0x000a49e3) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x000acfcb) blid2_navig_ring_pane_g

0xe26f,	// (0x000ab72a) bg_popup_window_pane_cp011

0x7530,	// (0x000a49eb) popup_blid2_search_window_g1

0x7538,	// (0x000a49f3) popup_blid2_search_window_t1

0x7546,	// (0x000a4a01) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x000acfd6) popup_blid2_search_window_t

0xaf36,	// (0x000a83f1) main_browser_pane_g1

0xa538,	// (0x000a79f3) main_browser_pane_ParamLimits

0xa2f2,	// (0x000a77ad) bg_button_pane_cp011_ParamLimits

0x6346,	// (0x000a3801) cell_vitu2_function_pane_g1_ParamLimits

0xd88d,	// (0x000aad48) bg_popup_sub_pane_cp22_ParamLimits

0x6c8c,	// (0x000a4147) input_focus_pane_cp08_ParamLimits

0x6ca3,	// (0x000a415e) popup_vitu2_query_button_pane_ParamLimits

0x6ca3,	// (0x000a415e) popup_vitu2_query_button_pane

0x6cb4,	// (0x000a416f) popup_vitu2_query_input_button_pane

0xea85,	// (0x000abf40) popup_vitu2_query_window_g1_ParamLimits

0x6cbe,	// (0x000a4179) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000aced7) popup_vitu2_query_window_g_ParamLimits

0xe26f,	// (0x000ab72a) bg_button_pane_cp026

0x7554,	// (0x000a4a0f) popup_vitu2_query_input_button_pane_g1

0xe26f,	// (0x000ab72a) bg_button_pane_cp025

0x755c,	// (0x000a4a17) popup_vitu2_query_button_pane_t1

0x4935,	// (0x000a1df0) main_mp3_pane_t6

0x4943,	// (0x000a1dfe) popup_slider_window_cp01

0xad5c,	// (0x000a8217) cam4_battery_pane

0xadb5,	// (0x000a8270) cam4_battery_pane_cp02

0xaebe,	// (0x000a8379) cam4_battery_pane_cp01

0xaebe,	// (0x000a8379) cam4_battery_pane_cp03

0x5a05,	// (0x000a2ec0) cam4_battery_pane_g1

0xdc95,	// (0x000ab150) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x000acfdb) cam4_battery_pane_g

0xdb61,	// (0x000ab01c) popup_blid_sat_info2_window_t11

0xb691,	// (0x000a8b4c) aid_size_touch_mv_arrow_left_ParamLimits

0xb6ba,	// (0x000a8b75) aid_size_touch_mv_arrow_right_ParamLimits

0xb718,	// (0x000a8bd3) navi_pane_g1_ParamLimits

0xb724,	// (0x000a8bdf) navi_pane_g2_ParamLimits

0xb752,	// (0x000a8c0d) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000ac8a0) navi_pane_g_ParamLimits

0x2cab,	// (0x000a0166) navi_pane_mv_t1_ParamLimits

0x558f,	// (0x000a2a4a) grid_imed_effect_pane_ParamLimits

0x1905,	// (0x0009edc0) aid_placing_vt_slider_lsc

0xa80a,	// (0x000a7cc5) aid_placing_vt_slider_prt

0xd577,	// (0x000aaa32) bg_tb_trans_pane_cp01_ParamLimits

0xde21,	// (0x000ab2dc) popup_image_details_window_g1_ParamLimits

0xde34,	// (0x000ab2ef) popup_image_details_window_g2_ParamLimits

0xde49,	// (0x000ab304) popup_image_details_window_g3_ParamLimits

0xde49,	// (0x000ab304) popup_image_details_window_g3

0xf718,	// (0x000acbd3) popup_image_details_window_g_ParamLimits

0xde5d,	// (0x000ab318) popup_image_details_window_t1_ParamLimits

0xde6f,	// (0x000ab32a) popup_image_details_window_t2_ParamLimits

0xde88,	// (0x000ab343) popup_image_details_window_t3_ParamLimits

0xde9c,	// (0x000ab357) popup_image_details_window_t4_ParamLimits

0xdeb7,	// (0x000ab372) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x000acbda) popup_image_details_window_t_ParamLimits

0x702e,	// (0x000a44e9) cl_header_name_pane_ParamLimits

0x702e,	// (0x000a44e9) cl_header_name_pane

0x756a,	// (0x000a4a25) cl_header_name_pane_t1_ParamLimits

0x756a,	// (0x000a4a25) cl_header_name_pane_t1

0x758b,	// (0x000a4a46) cl_header_name_pane_t2_ParamLimits

0x758b,	// (0x000a4a46) cl_header_name_pane_t2

0x75cd,	// (0x000a4a88) cl_header_name_pane_t3_ParamLimits

0x75cd,	// (0x000a4a88) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x000acfe0) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x000acfe0) cl_header_name_pane_t

0xb7e1,	// (0x000a8c9c) navi_pane_mv_g2_ParamLimits

0xe7a1,	// (0x000abc5c) field_vitu2_entry_pane_g1_ParamLimits

0xe7ad,	// (0x000abc68) field_vitu2_entry_pane_g2_ParamLimits

0xe7b9,	// (0x000abc74) field_vitu2_entry_pane_g3_ParamLimits

0xe7b9,	// (0x000abc74) field_vitu2_entry_pane_g3

0xf91b,	// (0x000acdd6) field_vitu2_entry_pane_g_ParamLimits

0xae2d,	// (0x000a82e8) cell_vitu2_itu_pane_g1_ParamLimits

0x62da,	// (0x000a3795) cell_vitu2_itu_pane_g2_ParamLimits

0x62da,	// (0x000a3795) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000acde2) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000acde2) cell_vitu2_itu_pane_g

0xa2f2,	// (0x000a77ad) bg_vkb2_func_pane_cp05_ParamLimits

0xa2f2,	// (0x000a77ad) bg_vkb2_func_pane_cp05

0xa2f2,	// (0x000a77ad) bg_vkb2_func_pane_cp03

0xa2f2,	// (0x000a77ad) bg_vkb2_func_pane_cp04

0xa2f2,	// (0x000a77ad) bg_vkb2_func_pane_cp10_ParamLimits

0xa2f2,	// (0x000a77ad) bg_vkb2_func_pane_cp10

0x6fd4,	// (0x000a448f) bg_vkb2_func_pane_cp08

0x6fba,	// (0x000a4475) bg_vkb2_func_pane_cp06

0x6fc8,	// (0x000a4483) bg_vkb2_func_pane_cp07

0x71d6,	// (0x000a4691) bg_vkb2_func_pane_cp11_ParamLimits

0x71d6,	// (0x000a4691) bg_vkb2_func_pane_cp11

0x71eb,	// (0x000a46a6) bg_vkb2_func_pane_cp12_ParamLimits

0x71eb,	// (0x000a46a6) bg_vkb2_func_pane_cp12

0xe26f,	// (0x000ab72a) bg_vkb2_func_pane_cp09

0xe7f6,	// (0x000abcb1) bg_vkb2_func_pane_g1

0xb047,	// (0x000a8502) bg_vkb2_func_pane_g2

0xe7fe,	// (0x000abcb9) bg_vkb2_func_pane_g3

0xe806,	// (0x000abcc1) bg_vkb2_func_pane_g4

0xea4a,	// (0x000abf05) bg_vkb2_func_pane_g5

0xe81e,	// (0x000abcd9) bg_vkb2_func_pane_g6

0xe826,	// (0x000abce1) bg_vkb2_func_pane_g7

0xe816,	// (0x000abcd1) bg_vkb2_func_pane_g8

0xb027,	// (0x000a84e2) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x000acfe7) bg_vkb2_func_pane_g

0x7432,	// (0x000a48ed) blid2_tripm_pane_g6_ParamLimits

0x7432,	// (0x000a48ed) blid2_tripm_pane_g6

0xe643,	// (0x000abafe) mp4_progress_pane_g1

0x74ab,	// (0x000a4966) blid2_tripm_values_pane_ParamLimits

0x74ab,	// (0x000a4966) blid2_tripm_values_pane

0x75fe,	// (0x000a4ab9) blid2_tripm_values_pane_t1

0x760c,	// (0x000a4ac7) blid2_tripm_values_pane_t2

0x761a,	// (0x000a4ad5) blid2_tripm_values_pane_t3

0x7628,	// (0x000a4ae3) blid2_tripm_values_pane_t4

0x7636,	// (0x000a4af1) blid2_tripm_values_pane_t5

0x7644,	// (0x000a4aff) blid2_tripm_values_pane_t6

0x7652,	// (0x000a4b0d) blid2_tripm_values_pane_t7

0x7660,	// (0x000a4b1b) blid2_tripm_values_pane_t8

0x766e,	// (0x000a4b29) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x000acffa) blid2_tripm_values_pane_t

0x1947,	// (0x0009ee02) call_video_pane_t1_ParamLimits

0x1965,	// (0x0009ee20) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000ac729) call_video_pane_t_ParamLimits

0x318a,	// (0x000a0645) msg_header_pane_g1_ParamLimits

0xb9c9,	// (0x000a8e84) msg_header_pane_g2_ParamLimits

0xb9c9,	// (0x000a8e84) msg_header_pane_g2

0x0001,

0xf488,	// (0x000ac943) msg_header_pane_g_ParamLimits

0xf488,	// (0x000ac943) msg_header_pane_g

0xa538,	// (0x000a79f3) main_clock2_pane_ParamLimits

0x528d,	// (0x000a2748) grid_clock2_toolbar_pane_ParamLimits

0x528d,	// (0x000a2748) grid_clock2_toolbar_pane

0x528d,	// (0x000a2748) listscroll_clock2_pane_ParamLimits

0x528d,	// (0x000a2748) listscroll_clock2_pane

0x5384,	// (0x000a283f) main_clock2_pane_t3_ParamLimits

0x5384,	// (0x000a283f) main_clock2_pane_t3

0x53a8,	// (0x000a2863) main_clock2_pane_t4_ParamLimits

0x53a8,	// (0x000a2863) main_clock2_pane_t4

0x767c,	// (0x000a4b37) cell_clock2_toolbar_pane

0x7684,	// (0x000a4b3f) cell_clock2_toolbar_pane_cp01

0x7684,	// (0x000a4b3f) cell_clock2_toolbar_pane_cp02

0x768c,	// (0x000a4b47) cell_clock2_toolbar_pane_cp03

0x7694,	// (0x000a4b4f) list_clock2_pane

0xb607,	// (0x000a8ac2) scroll_pane_cp10

0x769c,	// (0x000a4b57) list_single_clock2_pane_ParamLimits

0x769c,	// (0x000a4b57) list_single_clock2_pane

0xa769,	// (0x000a7c24) list_highlight_pane_cp08

0x76a9,	// (0x000a4b64) list_single_clock2_pane_t1

0x76b7,	// (0x000a4b72) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000ad00d) list_single_clock2_pane_t

0xe26f,	// (0x000ab72a) bg_button_pane_cp10

0x76c5,	// (0x000a4b80) cell_clock2_toolbar_pane_g1

0x3211,	// (0x000a06cc) aid_main_viewer_pane_g1_ParamLimits

0x3211,	// (0x000a06cc) aid_main_viewer_pane_g1

0x321f,	// (0x000a06da) aid_main_viewer_pane_g2_ParamLimits

0x321f,	// (0x000a06da) aid_main_viewer_pane_g2

0x322d,	// (0x000a06e8) aid_main_viewer_pane_g3_ParamLimits

0x322d,	// (0x000a06e8) aid_main_viewer_pane_g3

0x323c,	// (0x000a06f7) aid_main_viewer_pane_g4_ParamLimits

0x323c,	// (0x000a06f7) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000ac954) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000ac954) aid_main_viewer_pane_g

0x3b42,	// (0x000a0ffd) main_calc_pane_ParamLimits

0x3b68,	// (0x000a1023) main_dialer2_pane_ParamLimits

0xa300,	// (0x000a77bb) main_cam6_pane

0xa300,	// (0x000a77bb) main_vid6_pane

0x5299,	// (0x000a2754) listscroll_gen_pane_cp06_ParamLimits

0x5299,	// (0x000a2754) listscroll_gen_pane_cp06

0x53cb,	// (0x000a2886) main_clock2_pane_t5_ParamLimits

0x53cb,	// (0x000a2886) main_clock2_pane_t5

0x5425,	// (0x000a28e0) aid_call2_pane_cp10_ParamLimits

0x5437,	// (0x000a28f2) aid_call_pane_cp10_ParamLimits

0xb685,	// (0x000a8b40) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb685,	// (0x000a8b40) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5449,	// (0x000a2904) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5449,	// (0x000a2904) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb685,	// (0x000a8b40) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000acc8f) popup_clock_analogue_window_cp10_g_ParamLimits

0x545b,	// (0x000a2916) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5acd,	// (0x000a2f88) cell_dialer2_keypad_pane_g2_ParamLimits

0x5acd,	// (0x000a2f88) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000acd75) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000acd75) cell_dialer2_keypad_pane_g

0x5ae9,	// (0x000a2fa4) cell_dialer2_keypad_pane_t1

0x6663,	// (0x000a3b1e) main_cset_text2_pane_ParamLimits

0x6663,	// (0x000a3b1e) main_cset_text2_pane

0xf06d,	// (0x000ac528) area_vitu2_query_pane_g1_ParamLimits

0x6f59,	// (0x000a4414) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000acf2a) area_vitu2_query_pane_g_ParamLimits

0xeb99,	// (0x000ac054) area_vitu2_query_pane_t7_ParamLimits

0xeb99,	// (0x000ac054) area_vitu2_query_pane_t7

0x6fba,	// (0x000a4475) bg_button_pane_cp018_ParamLimits

0x6fc8,	// (0x000a4483) bg_button_pane_cp021_ParamLimits

0x6fd4,	// (0x000a448f) bg_button_pane_cp022_ParamLimits

0x6fd4,	// (0x000a448f) bg_vkb2_func_pane_cp08_ParamLimits

0x6fba,	// (0x000a4475) bg_vkb2_func_pane_cp06_ParamLimits

0x6fc8,	// (0x000a4483) bg_vkb2_func_pane_cp07_ParamLimits

0x6fe3,	// (0x000a449e) input_focus_pane_cp09_ParamLimits

0xaf28,	// (0x000a83e3) cam6_autofocus_pane_ParamLimits

0xaf28,	// (0x000a83e3) cam6_autofocus_pane

0x76cd,	// (0x000a4b88) cam6_image_uncrop_pane_ParamLimits

0x76cd,	// (0x000a4b88) cam6_image_uncrop_pane

0x76dc,	// (0x000a4b97) cam6_indi_pane_ParamLimits

0x76dc,	// (0x000a4b97) cam6_indi_pane

0x76f2,	// (0x000a4bad) cam6_mode_pane_ParamLimits

0x76f2,	// (0x000a4bad) cam6_mode_pane

0x7704,	// (0x000a4bbf) cam6_timer_pane_ParamLimits

0x7704,	// (0x000a4bbf) cam6_timer_pane

0x7710,	// (0x000a4bcb) cam6_zoom_pane_ParamLimits

0x7710,	// (0x000a4bcb) cam6_zoom_pane

0x771c,	// (0x000a4bd7) cam6_mode_pane_g1_ParamLimits

0x771c,	// (0x000a4bd7) cam6_mode_pane_g1

0x772c,	// (0x000a4be7) cam6_mode_pane_g2_ParamLimits

0x772c,	// (0x000a4be7) cam6_mode_pane_g2

0x773c,	// (0x000a4bf7) cam6_mode_pane_g3_ParamLimits

0x773c,	// (0x000a4bf7) cam6_mode_pane_g3

0x774c,	// (0x000a4c07) cam6_mode_pane_g4_ParamLimits

0x774c,	// (0x000a4c07) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000ad012) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000ad012) cam6_mode_pane_g

0x775c,	// (0x000a4c17) bg_tb_trans_pane_cp08_ParamLimits

0x775c,	// (0x000a4c17) bg_tb_trans_pane_cp08

0x776a,	// (0x000a4c25) cam6_battery_pane_ParamLimits

0x776a,	// (0x000a4c25) cam6_battery_pane

0x7780,	// (0x000a4c3b) cam6_indi_pane_g1_ParamLimits

0x7780,	// (0x000a4c3b) cam6_indi_pane_g1

0x7792,	// (0x000a4c4d) cam6_indi_pane_g2_ParamLimits

0x7792,	// (0x000a4c4d) cam6_indi_pane_g2

0x77a4,	// (0x000a4c5f) cam6_indi_pane_g3_ParamLimits

0x77a4,	// (0x000a4c5f) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000ad01b) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000ad01b) cam6_indi_pane_g

0x77b6,	// (0x000a4c71) cam6_indi_pane_t1_ParamLimits

0x77b6,	// (0x000a4c71) cam6_indi_pane_t1

0x77dc,	// (0x000a4c97) cam6_autofocus_pane_g1

0x77e4,	// (0x000a4c9f) cam6_autofocus_pane_g2

0x77ec,	// (0x000a4ca7) cam6_autofocus_pane_g3

0x77f4,	// (0x000a4caf) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000ad022) cam6_autofocus_pane_g

0x77fc,	// (0x000a4cb7) cam6_timer_pane_g1

0x7804,	// (0x000a4cbf) cam6_timer_pane_t1

0x7812,	// (0x000a4ccd) cam6_zoom_cont_pane

0x781a,	// (0x000a4cd5) cam6_zoom_pane_g1

0x7822,	// (0x000a4cdd) cam6_zoom_pane_g2

0x782a,	// (0x000a4ce5) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000ad02b) cam6_zoom_pane_g

0xdc95,	// (0x000ab150) cam6_battery_pane_g1

0xdc95,	// (0x000ab150) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x000acb97) cam6_battery_pane_g

0x7832,	// (0x000a4ced) cam6_zoom_cont_pane_g1

0x783b,	// (0x000a4cf6) cam6_zoom_cont_pane_g2

0x7844,	// (0x000a4cff) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000ad032) cam6_zoom_cont_pane_g

0x7861,	// (0x000a4d1c) cam6_mode_pane_cp_ParamLimits

0x7861,	// (0x000a4d1c) cam6_mode_pane_cp

0x7873,	// (0x000a4d2e) cam6_zoom_pane_cp_ParamLimits

0x7873,	// (0x000a4d2e) cam6_zoom_pane_cp

0x787f,	// (0x000a4d3a) vid6_image_uncrop_cif_pane_ParamLimits

0x787f,	// (0x000a4d3a) vid6_image_uncrop_cif_pane

0x788f,	// (0x000a4d4a) vid6_image_uncrop_nhd_pane_ParamLimits

0x788f,	// (0x000a4d4a) vid6_image_uncrop_nhd_pane

0x78ae,	// (0x000a4d69) vid6_image_uncrop_vga_pane_ParamLimits

0x78ae,	// (0x000a4d69) vid6_image_uncrop_vga_pane

0x78bd,	// (0x000a4d78) vid6_image_uncrop_wvga_pane_ParamLimits

0x78bd,	// (0x000a4d78) vid6_image_uncrop_wvga_pane

0x78cc,	// (0x000a4d87) vid6_indi_pane_ParamLimits

0x78cc,	// (0x000a4d87) vid6_indi_pane

0x775c,	// (0x000a4c17) bg_tb_trans_pane_cp09_ParamLimits

0x775c,	// (0x000a4c17) bg_tb_trans_pane_cp09

0x78e4,	// (0x000a4d9f) cam6_battery_pane_cp_ParamLimits

0x78e4,	// (0x000a4d9f) cam6_battery_pane_cp

0x78f0,	// (0x000a4dab) vid6_indi_pane_g1_ParamLimits

0x78f0,	// (0x000a4dab) vid6_indi_pane_g1

0x7902,	// (0x000a4dbd) vid6_indi_pane_g2_ParamLimits

0x7902,	// (0x000a4dbd) vid6_indi_pane_g2

0x7914,	// (0x000a4dcf) vid6_indi_pane_g3_ParamLimits

0x7914,	// (0x000a4dcf) vid6_indi_pane_g3

0x7929,	// (0x000a4de4) vid6_indi_pane_g4_ParamLimits

0x7929,	// (0x000a4de4) vid6_indi_pane_g4

0x793e,	// (0x000a4df9) vid6_indi_pane_g5_ParamLimits

0x793e,	// (0x000a4df9) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000ad039) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000ad039) vid6_indi_pane_g

0x7958,	// (0x000a4e13) vid6_indi_pane_t1_ParamLimits

0x7958,	// (0x000a4e13) vid6_indi_pane_t1

0x796e,	// (0x000a4e29) vid6_indi_pane_t2_ParamLimits

0x796e,	// (0x000a4e29) vid6_indi_pane_t2

0x7996,	// (0x000a4e51) vid6_indi_pane_t3_ParamLimits

0x7996,	// (0x000a4e51) vid6_indi_pane_t3

0x79be,	// (0x000a4e79) vid6_indi_pane_t4_ParamLimits

0x79be,	// (0x000a4e79) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000ad044) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000ad044) vid6_indi_pane_t

0x79e2,	// (0x000a4e9d) wait_bar_pane_cp08

0x79f1,	// (0x000a4eac) main_cset_text2_pane_t1_ParamLimits

0x79f1,	// (0x000a4eac) main_cset_text2_pane_t1

0x784c,	// (0x000a4d07) listscroll_gen_pane_cp06_t1_ParamLimits

0x784c,	// (0x000a4d07) listscroll_gen_pane_cp06_t1

0xa300,	// (0x000a77bb) main_cam6_set_pane

0xad4e,	// (0x000a8209) bg_tb_trans_pane_cp06_ParamLimits

0xad64,	// (0x000a821f) cam4_indicators_pane_g1_ParamLimits

0xad75,	// (0x000a8230) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000acdb2) cam4_indicators_pane_g_ParamLimits

0xad93,	// (0x000a824e) cam4_indicators_pane_t1_ParamLimits

0xa2f2,	// (0x000a77ad) bg_tb_trans_pane_cp07_ParamLimits

0xadbf,	// (0x000a827a) vid4_indicators_pane_g1_ParamLimits

0xadd3,	// (0x000a828e) vid4_indicators_pane_g2_ParamLimits

0xade7,	// (0x000a82a2) vid4_indicators_pane_g3_ParamLimits

0xadf8,	// (0x000a82b3) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000acdc4) vid4_indicators_pane_g_ParamLimits

0xae16,	// (0x000a82d1) vid4_indicators_pane_t1_ParamLimits

0xaec6,	// (0x000a8381) vid4_progress_pane_g1_ParamLimits

0xaed6,	// (0x000a8391) vid4_progress_pane_g2_ParamLimits

0x711e,	// (0x000a45d9) vid4_progress_pane_g3_ParamLimits

0xaee6,	// (0x000a83a1) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000acf75) vid4_progress_pane_g_ParamLimits

0x7130,	// (0x000a45eb) vid4_progress_pane_t1_ParamLimits

0xaefe,	// (0x000a83b9) vid4_progress_pane_t2_ParamLimits

0xaf13,	// (0x000a83ce) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000acf80) vid4_progress_pane_t_ParamLimits

0x7148,	// (0x000a4603) wait_bar_pane_cp07_ParamLimits

0x7a0e,	// (0x000a4ec9) main_cam6_set_pane_g2_ParamLimits

0x7a0e,	// (0x000a4ec9) main_cam6_set_pane_g2

0x7a32,	// (0x000a4eed) main_cset6_listscroll_pane_ParamLimits

0x7a32,	// (0x000a4eed) main_cset6_listscroll_pane

0x7a52,	// (0x000a4f0d) main_cset6_slider_pane_ParamLimits

0x7a52,	// (0x000a4f0d) main_cset6_slider_pane

0x7a68,	// (0x000a4f23) main_cset6_text2_pane_ParamLimits

0x7a68,	// (0x000a4f23) main_cset6_text2_pane

0x7a76,	// (0x000a4f31) main_cset6_text_pane

0x7a7e,	// (0x000a4f39) main_cset_list_pane_copy1_ParamLimits

0x7a7e,	// (0x000a4f39) main_cset_list_pane_copy1

0x7a8e,	// (0x000a4f49) scroll_pane_cp028_copy1

0x7a97,	// (0x000a4f52) cset_list_set_pane_copy1

0x7aa8,	// (0x000a4f63) aid_position_infowindow_above_copy1

0x7ab0,	// (0x000a4f6b) aid_position_infowindow_below_copy1

0x7ab8,	// (0x000a4f73) cset_list_set_pane_g1_copy1

0x7ac0,	// (0x000a4f7b) cset_list_set_pane_g3_copy1_ParamLimits

0x7ac0,	// (0x000a4f7b) cset_list_set_pane_g3_copy1

0x7acf,	// (0x000a4f8a) cset_list_set_pane_t1_copy1_ParamLimits

0x7acf,	// (0x000a4f8a) cset_list_set_pane_t1_copy1

0xd577,	// (0x000aaa32) list_highlight_pane_cp021_copy1_ParamLimits

0xd577,	// (0x000aaa32) list_highlight_pane_cp021_copy1

0x7ae4,	// (0x000a4f9f) cset6_slider_pane_ParamLimits

0x7ae4,	// (0x000a4f9f) cset6_slider_pane

0x7b10,	// (0x000a4fcb) main_cset6_slider_pane_g1_ParamLimits

0x7b10,	// (0x000a4fcb) main_cset6_slider_pane_g1

0x7b38,	// (0x000a4ff3) main_cset6_slider_pane_g2_ParamLimits

0x7b38,	// (0x000a4ff3) main_cset6_slider_pane_g2

0x7b60,	// (0x000a501b) main_cset6_slider_pane_g3_ParamLimits

0x7b60,	// (0x000a501b) main_cset6_slider_pane_g3

0x7b6c,	// (0x000a5027) main_cset6_slider_pane_g4_ParamLimits

0x7b6c,	// (0x000a5027) main_cset6_slider_pane_g4

0x7b78,	// (0x000a5033) main_cset6_slider_pane_g5_ParamLimits

0x7b78,	// (0x000a5033) main_cset6_slider_pane_g5

0xe925,	// (0x000abde0) main_cset6_slider_pane_g7_ParamLimits

0xe925,	// (0x000abde0) main_cset6_slider_pane_g7

0xe931,	// (0x000abdec) main_cset6_slider_pane_g8_ParamLimits

0xe931,	// (0x000abdec) main_cset6_slider_pane_g8

0x6710,	// (0x000a3bcb) main_cset6_slider_pane_g9_ParamLimits

0x6710,	// (0x000a3bcb) main_cset6_slider_pane_g9

0x671c,	// (0x000a3bd7) main_cset6_slider_pane_g10_ParamLimits

0x671c,	// (0x000a3bd7) main_cset6_slider_pane_g10

0x6728,	// (0x000a3be3) main_cset6_slider_pane_g11_ParamLimits

0x6728,	// (0x000a3be3) main_cset6_slider_pane_g11

0x6734,	// (0x000a3bef) main_cset6_slider_pane_g12_ParamLimits

0x6734,	// (0x000a3bef) main_cset6_slider_pane_g12

0x6740,	// (0x000a3bfb) main_cset6_slider_pane_g13_ParamLimits

0x6740,	// (0x000a3bfb) main_cset6_slider_pane_g13

0x674c,	// (0x000a3c07) main_cset6_slider_pane_g14_ParamLimits

0x674c,	// (0x000a3c07) main_cset6_slider_pane_g14

0x7b84,	// (0x000a503f) main_cset6_slider_pane_g15_ParamLimits

0x7b84,	// (0x000a503f) main_cset6_slider_pane_g15

0x6770,	// (0x000a3c2b) main_cset6_slider_pane_g16_ParamLimits

0x6770,	// (0x000a3c2b) main_cset6_slider_pane_g16

0x677c,	// (0x000a3c37) main_cset6_slider_pane_g17_ParamLimits

0x677c,	// (0x000a3c37) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000ad04d) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000ad04d) main_cset6_slider_pane_g

0x7bb4,	// (0x000a506f) main_cset6_slider_pane_t1_ParamLimits

0x7bb4,	// (0x000a506f) main_cset6_slider_pane_t1

0x7bf5,	// (0x000a50b0) main_cset6_slider_pane_t2_ParamLimits

0x7bf5,	// (0x000a50b0) main_cset6_slider_pane_t2

0x7c20,	// (0x000a50db) main_cset6_slider_pane_t3_ParamLimits

0x7c20,	// (0x000a50db) main_cset6_slider_pane_t3

0x7c4b,	// (0x000a5106) main_cset6_slider_pane_t4_ParamLimits

0x7c4b,	// (0x000a5106) main_cset6_slider_pane_t4

0x7c76,	// (0x000a5131) main_cset6_slider_pane_t5_ParamLimits

0x7c76,	// (0x000a5131) main_cset6_slider_pane_t5

0x7ca1,	// (0x000a515c) main_cset6_slider_pane_t7_ParamLimits

0x7ca1,	// (0x000a515c) main_cset6_slider_pane_t7

0x7cd7,	// (0x000a5192) main_cset6_slider_pane_t8_ParamLimits

0x7cd7,	// (0x000a5192) main_cset6_slider_pane_t8

0x7cfb,	// (0x000a51b6) main_cset6_slider_pane_t9_ParamLimits

0x7cfb,	// (0x000a51b6) main_cset6_slider_pane_t9

0x7d1f,	// (0x000a51da) main_cset6_slider_pane_t10_ParamLimits

0x7d1f,	// (0x000a51da) main_cset6_slider_pane_t10

0x7d43,	// (0x000a51fe) main_cset6_slider_pane_t11_ParamLimits

0x7d43,	// (0x000a51fe) main_cset6_slider_pane_t11

0x7d67,	// (0x000a5222) main_cset6_slider_pane_t14_ParamLimits

0x7d67,	// (0x000a5222) main_cset6_slider_pane_t14

0x7da0,	// (0x000a525b) main_cset6_slider_pane_t15_ParamLimits

0x7da0,	// (0x000a525b) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000ad072) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000ad072) main_cset6_slider_pane_t

0xebce,	// (0x000ac089) cset_slider_pane_g1_copy1

0xebd7,	// (0x000ac092) cset_slider_pane_g2_copy1

0xebe0,	// (0x000ac09b) cset_slider_pane_g3_copy1

0xe26f,	// (0x000ab72a) bg_popup_sub_pane_cp011_copy1

0x7ea9,	// (0x000a5364) main_cset_text_pane_g1_copy1

0xea99,	// (0x000abf54) main_cset_text_pane_t1_copy1

0xeaa7,	// (0x000abf62) main_cset_text_pane_t2_copy1

0xeab5,	// (0x000abf70) main_cset_text_pane_t3_copy1

0xeac3,	// (0x000abf7e) main_cset_text_pane_t4_copy1

0xead1,	// (0x000abf8c) main_cset_text_pane_t5_copy1

0x7eb1,	// (0x000a536c) main_cset_text_pane_t6_copy1

0x7ebf,	// (0x000a537a) main_cset_text_pane_t7_copy1

0x79f1,	// (0x000a4eac) main_cset_text2_pane_t1_copy1

0xa2f2,	// (0x000a77ad) main_ncimui_pane

0x3db2,	// (0x000a126d) popup_query_ncimui_window_ParamLimits

0x3db2,	// (0x000a126d) popup_query_ncimui_window

0xdf66,	// (0x000ab421) field_cale_ev2_pane_g4_ParamLimits

0xdf66,	// (0x000ab421) field_cale_ev2_pane_g4

0x59a3,	// (0x000a2e5e) cell_video_dialer_keypad_pane_g2_ParamLimits

0x59a3,	// (0x000a2e5e) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000acd50) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000acd50) cell_video_dialer_keypad_pane_g

0x59bb,	// (0x000a2e76) cell_video_dialer_keypad_pane_t1

0xe26f,	// (0x000ab72a) bg_popup_window_pane_cp012

0xb4d4,	// (0x000a898f) heading_pane_cp06

0x8014,	// (0x000a54cf) ncim_query_content_pane

0xe26f,	// (0x000ab72a) bg_popup_heading_pane_cp01

0x801c,	// (0x000a54d7) ncim_heading_pane_t1

0x802a,	// (0x000a54e5) ncim_indicator_popup_pane

0x803c,	// (0x000a54f7) ncim_query_button_pane

0x805c,	// (0x000a5517) ncim_query_content_pane_t1

0x806e,	// (0x000a5529) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x000ad0b6) ncim_query_content_pane_t

0x8120,	// (0x000a55db) ncim_query_list_pane

0x8132,	// (0x000a55ed) ncim_query_popup_pane

0x802a,	// (0x000a54e5) ncim_indicator_popup_pane_ParamLimits

0x8044,	// (0x000a54ff) ncim_query_content_pane_g1_ParamLimits

0x8044,	// (0x000a54ff) ncim_query_content_pane_g1

0x805c,	// (0x000a5517) ncim_query_content_pane_t1_ParamLimits

0x806e,	// (0x000a5529) ncim_query_content_pane_t2_ParamLimits

0x8080,	// (0x000a553b) ncim_query_content_pane_t3_ParamLimits

0x8080,	// (0x000a553b) ncim_query_content_pane_t3

0x80a8,	// (0x000a5563) ncim_query_content_pane_t4_ParamLimits

0x80a8,	// (0x000a5563) ncim_query_content_pane_t4

0x80d0,	// (0x000a558b) ncim_query_content_pane_t5_ParamLimits

0x80d0,	// (0x000a558b) ncim_query_content_pane_t5

0x80f8,	// (0x000a55b3) ncim_query_content_pane_t6_ParamLimits

0x80f8,	// (0x000a55b3) ncim_query_content_pane_t6

0xfbfb,	// (0x000ad0b6) ncim_query_content_pane_t_ParamLimits

0x8120,	// (0x000a55db) ncim_query_list_pane_ParamLimits

0x8132,	// (0x000a55ed) ncim_query_popup_pane_ParamLimits

0x8146,	// (0x000a5601) wait_bar_pane_cp04

0xe26f,	// (0x000ab72a) input_focus_pane_cp011

0x814e,	// (0x000a5609) ncim_query_popup_pane_t1

0x815c,	// (0x000a5617) ncim_list_query_list_pane_ParamLimits

0x815c,	// (0x000a5617) ncim_list_query_list_pane

0xe26f,	// (0x000ab72a) bg_button_pane_cp027

0x8169,	// (0x000a5624) ncim_query_button_pane_g1

0xe26f,	// (0x000ab72a) list_highlight_pane_cp012

0x8173,	// (0x000a562e) ncim_list_query_list_pane_g1

0x817b,	// (0x000a5636) ncim_list_query_list_pane_t1

0xad84,	// (0x000a823f) cam4_indicators_pane_g3_ParamLimits

0xad84,	// (0x000a823f) cam4_indicators_pane_g3

0xae04,	// (0x000a82bf) vid4_indicators_pane_g5_ParamLimits

0xae04,	// (0x000a82bf) vid4_indicators_pane_g5

0xaef2,	// (0x000a83ad) vid4_progress_pane_g5_ParamLimits

0xaef2,	// (0x000a83ad) vid4_progress_pane_g5

0x7eff,	// (0x000a53ba) main_ncimui_pane_g1

0x7f68,	// (0x000a5423) ncimui_group_query_pane_ParamLimits

0x7f68,	// (0x000a5423) ncimui_group_query_pane

0x7fb0,	// (0x000a546b) ncimui_list_pane_ParamLimits

0x7fb0,	// (0x000a546b) ncimui_list_pane

0x7fd7,	// (0x000a5492) ncimui_text_pane_ParamLimits

0x7fd7,	// (0x000a5492) ncimui_text_pane

0x8189,	// (0x000a5644) ncimui_text_pane_t1_ParamLimits

0x8189,	// (0x000a5644) ncimui_text_pane_t1

0x81a7,	// (0x000a5662) ncimui_list_single_graphic_pane_ParamLimits

0x81a7,	// (0x000a5662) ncimui_list_single_graphic_pane

0x81b7,	// (0x000a5672) ncimui_query_pane_ParamLimits

0x81b7,	// (0x000a5672) ncimui_query_pane

0xe26f,	// (0x000ab72a) list_highlight_pane_cp013

0x81ca,	// (0x000a5685) ncim_list_query_list_pane_t1_copy1

0x8173,	// (0x000a562e) ncim_list_single_graphic_pane_g1

0x81d8,	// (0x000a5693) ncim_query_button_pane_cp01

0x81e4,	// (0x000a569f) ncim_query_entry_pane_ParamLimits

0x81e4,	// (0x000a569f) ncim_query_entry_pane

0x81f7,	// (0x000a56b2) ncimui_query_pane_g1

0x8203,	// (0x000a56be) ncimui_query_pane_t1_ParamLimits

0x8203,	// (0x000a56be) ncimui_query_pane_t1

0xd577,	// (0x000aaa32) input_focus_pane_cp012

0x821c,	// (0x000a56d7) ncim_query_entry_pane_t1

0xa538,	// (0x000a79f3) main_im_pane_ParamLimits

0xa2f2,	// (0x000a77ad) main_mobtv_pane_ParamLimits

0xa2f2,	// (0x000a77ad) main_mobtv_pane

0x7b9c,	// (0x000a5057) main_cset6_slider_pane_g18_ParamLimits

0x7b9c,	// (0x000a5057) main_cset6_slider_pane_g18

0x7ba8,	// (0x000a5063) main_cset6_slider_pane_g19_ParamLimits

0x7ba8,	// (0x000a5063) main_cset6_slider_pane_g19

0x822e,	// (0x000a56e9) bg_main_mobtv_pane_ParamLimits

0x822e,	// (0x000a56e9) bg_main_mobtv_pane

0x823c,	// (0x000a56f7) main_mobtv_info_pane

0x8245,	// (0x000a5700) main_mobtv_loading_pane_ParamLimits

0x8245,	// (0x000a5700) main_mobtv_loading_pane

0x8252,	// (0x000a570d) main_mobtv_pg_channel_list_pane

0x825c,	// (0x000a5717) main_mobtv_pg_hdr_pane

0x8265,	// (0x000a5720) main_mobtv_programe_curr_pane_ParamLimits

0x8265,	// (0x000a5720) main_mobtv_programe_curr_pane

0x8272,	// (0x000a572d) main_mobtv_programe_next_pane_ParamLimits

0x8272,	// (0x000a572d) main_mobtv_programe_next_pane

0x827f,	// (0x000a573a) popup_mobtv_noti_window

0xdc95,	// (0x000ab150) main_tv_pg_hdr_pane_g1

0x8287,	// (0x000a5742) main_tv_pg_hdr_pane_g2

0x828f,	// (0x000a574a) main_tv_pg_hdr_pane_g3

0x8297,	// (0x000a5752) main_tv_pg_hdr_pane_g4

0x829f,	// (0x000a575a) main_tv_pg_hdr_pane_g5

0x82a9,	// (0x000a5764) main_tv_pg_hdr_pane_g6

0x82b3,	// (0x000a576e) main_tv_pg_hdr_pane_g7

0x82bd,	// (0x000a5778) main_tv_pg_hdr_pane_g8

0x82c7,	// (0x000a5782) main_tv_pg_hdr_pane_g9

0x82d1,	// (0x000a578c) main_tv_pg_hdr_pane_g10

0x82db,	// (0x000a5796) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x000ad0c3) main_tv_pg_hdr_pane_g

0x82e5,	// (0x000a57a0) main_tv_pg_hdr_pane_t1

0x82f3,	// (0x000a57ae) main_tv_pg_hdr_pane_t2

0x8301,	// (0x000a57bc) main_tv_pg_hdr_pane_t3

0x8311,	// (0x000a57cc) main_tv_pg_hdr_pane_t4

0x8321,	// (0x000a57dc) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x000ad0da) main_tv_pg_hdr_pane_t

0x8331,	// (0x000a57ec) single_mobtv_pg_channel_pane_ParamLimits

0x8331,	// (0x000a57ec) single_mobtv_pg_channel_pane

0x8343,	// (0x000a57fe) single_mobtv_pg_channel_table_pane

0x834c,	// (0x000a5807) single_mobtv_pg_channel_thumb_pane

0x8355,	// (0x000a5810) single_tv_pg_channel_pane_g1

0x835e,	// (0x000a5819) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x000ad0e5) single_tv_pg_channel_pane_g

0xdf01,	// (0x000ab3bc) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xdf01,	// (0x000ab3bc) bg_single_mobtv_pg_channel_thumb_pane

0x8367,	// (0x000a5822) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x8367,	// (0x000a5822) single_mobtv_pg_channel_thumb_pane_g1

0x8375,	// (0x000a5830) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x8375,	// (0x000a5830) single_mobtv_pg_channel_thumb_pane_g2

0x8381,	// (0x000a583c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x8381,	// (0x000a583c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x000ad0ea) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x000ad0ea) single_mobtv_pg_channel_thumb_pane_g

0x838d,	// (0x000a5848) single_mobtv_pg_channel_thumb_pane_t1

0x839b,	// (0x000a5856) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x000ad0f1) single_mobtv_pg_channel_thumb_pane_t

0xdc95,	// (0x000ab150) bg_single_mobtv_pg_channel_table_pane_g1

0xdc95,	// (0x000ab150) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x000acb97) bg_single_mobtv_pg_channel_table_pane_g

0x83a9,	// (0x000a5864) single_mobtv_pg_channel_table_pane_t1

0x83b7,	// (0x000a5872) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x000ad0f6) single_mobtv_pg_channel_table_pane_t

0x83cd,	// (0x000a5888) main_mobtv_info_pane_g1_ParamLimits

0x83cd,	// (0x000a5888) main_mobtv_info_pane_g1

0x83eb,	// (0x000a58a6) main_mobtv_info_pane_t1_ParamLimits

0x83eb,	// (0x000a58a6) main_mobtv_info_pane_t1

0x8463,	// (0x000a591e) main_mobtv_info_pane_t2_ParamLimits

0x8463,	// (0x000a591e) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000ad100) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000ad100) main_mobtv_info_pane_t

0x84f2,	// (0x000a59ad) wait_bar_pane_cp05

0x8504,	// (0x000a59bf) main_mobtv_loading_pane_g1_ParamLimits

0x8504,	// (0x000a59bf) main_mobtv_loading_pane_g1

0x8517,	// (0x000a59d2) main_mobtv_loading_pane_g2_ParamLimits

0x8517,	// (0x000a59d2) main_mobtv_loading_pane_g2

0x8523,	// (0x000a59de) main_mobtv_loading_pane_g3_ParamLimits

0x8523,	// (0x000a59de) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000ad107) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000ad107) main_mobtv_loading_pane_g

0x8536,	// (0x000a59f1) main_mobtv_loading_pane_t1_ParamLimits

0x8536,	// (0x000a59f1) main_mobtv_loading_pane_t1

0x854e,	// (0x000a5a09) main_mobtv_loading_pane_t2_ParamLimits

0x854e,	// (0x000a5a09) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000ad10e) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000ad10e) main_mobtv_loading_pane_t

0x8572,	// (0x000a5a2d) wait_bar_pane_cp06_ParamLimits

0x8572,	// (0x000a5a2d) wait_bar_pane_cp06

0x8581,	// (0x000a5a3c) main_mobtv_programe_curr_pane_t1

0x858f,	// (0x000a5a4a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000ad113) main_mobtv_programe_curr_pane_t

0x859d,	// (0x000a5a58) main_mobtv_programe_next_pane_t1

0x85ab,	// (0x000a5a66) main_mobtv_programe_next_pane_t2

0x85b9,	// (0x000a5a74) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000ad118) main_mobtv_programe_next_pane_t

0xe26f,	// (0x000ab72a) bg_popup_mobtv_noti_window_pane

0x85c7,	// (0x000a5a82) popup_mobtv_noti_window_g1

0x85cf,	// (0x000a5a8a) popup_mobtv_noti_window_t1

0x85dd,	// (0x000a5a98) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000ad11f) popup_mobtv_noti_window_t

0xdc95,	// (0x000ab150) bg_popup_mobtv_noti_window_pane_g1

0xa300,	// (0x000a77bb) sc_clock_pane

0xa300,	// (0x000a77bb) main_fs_bigclock_pane

0x7495,	// (0x000a4950) blid2_tripm_pane_t4_ParamLimits

0x7495,	// (0x000a4950) blid2_tripm_pane_t4

0x85eb,	// (0x000a5aa6) sc_clock_pane_g1_ParamLimits

0x85eb,	// (0x000a5aa6) sc_clock_pane_g1

0x85fd,	// (0x000a5ab8) sc_clock_pane_t1_ParamLimits

0x85fd,	// (0x000a5ab8) sc_clock_pane_t1

0x861f,	// (0x000a5ada) sc_clock_pane_t2_ParamLimits

0x861f,	// (0x000a5ada) sc_clock_pane_t2

0x8637,	// (0x000a5af2) sc_clock_pane_t3_ParamLimits

0x8637,	// (0x000a5af2) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000ad124) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000ad124) sc_clock_pane_t

0x9714,	// (0x000a6bcf) main_fs_bigclock_indicator_pane_ParamLimits

0x9714,	// (0x000a6bcf) main_fs_bigclock_indicator_pane

0x86dd,	// (0x000a5b98) main_fs_bigclock_pane_g1_ParamLimits

0x86dd,	// (0x000a5b98) main_fs_bigclock_pane_g1

0x9720,	// (0x000a6bdb) main_fs_bigclock_pane_t1_ParamLimits

0x9720,	// (0x000a6bdb) main_fs_bigclock_pane_t1

0x9732,	// (0x000a6bed) main_fs_bigclock_pane_t2_ParamLimits

0x9732,	// (0x000a6bed) main_fs_bigclock_pane_t2

0x9746,	// (0x000a6c01) main_fs_bigclock_pane_t3_ParamLimits

0x9746,	// (0x000a6c01) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000ad32e) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000ad32e) main_fs_bigclock_pane_t

0xc4b5,	// (0x000a9970) main_fs_bigclock_indicator_pane_g1

0x8050,	// (0x000a550b) ncim_query_content_pane_g2_ParamLimits

0x8050,	// (0x000a550b) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x000ad0b1) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x000ad0b1) ncim_query_content_pane_g

0x8650,	// (0x000a5b0b) sc_clock_pane_t4_ParamLimits

0x8650,	// (0x000a5b0b) sc_clock_pane_t4

0xa2f2,	// (0x000a77ad) main_radioblah_pane

0xe72c,	// (0x000abbe7) cell_call4_button_pane_t1_copy1_ParamLimits

0xe72c,	// (0x000abbe7) cell_call4_button_pane_t1_copy1

0x7f17,	// (0x000a53d2) main_ncimui_pane_t1_ParamLimits

0x7f17,	// (0x000a53d2) main_ncimui_pane_t1

0x7f31,	// (0x000a53ec) main_ncimui_pane_t2_ParamLimits

0x7f31,	// (0x000a53ec) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x000ad0aa) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x000ad0aa) main_ncimui_pane_t

0xbdd8,	// (0x000a9293) main_radioblah_anim_pane_ParamLimits

0xbdd8,	// (0x000a9293) main_radioblah_anim_pane

0xbde9,	// (0x000a92a4) main_radioblah_info_pane_ParamLimits

0xbde9,	// (0x000a92a4) main_radioblah_info_pane

0xbdfd,	// (0x000a92b8) main_radioblah_pane_t1_ParamLimits

0xbdfd,	// (0x000a92b8) main_radioblah_pane_t1

0xbe19,	// (0x000a92d4) main_radioblah_pane_t2_ParamLimits

0xbe19,	// (0x000a92d4) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000ad145) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000ad145) main_radioblah_pane_t

0x8757,	// (0x000a5c12) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8757,	// (0x000a5c12) main_radioblah_rocker_ctrl_pane

0xbe61,	// (0x000a931c) main_radioblah_info_pane_t1_ParamLimits

0xbe61,	// (0x000a931c) main_radioblah_info_pane_t1

0x87af,	// (0x000a5c6a) main_radioblah_info_pane_t2_ParamLimits

0x87af,	// (0x000a5c6a) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000ad14e) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000ad14e) main_radioblah_info_pane_t

0xdc95,	// (0x000ab150) main_radioblah_rocker_ctrl_pane_g1

0x885f,	// (0x000a5d1a) main_radioblah_rocker_ctrl_pane_g2

0x8867,	// (0x000a5d22) main_radioblah_rocker_ctrl_pane_g3

0x886f,	// (0x000a5d2a) main_radioblah_rocker_ctrl_pane_g4

0x8877,	// (0x000a5d32) main_radioblah_rocker_ctrl_pane_g5

0x887f,	// (0x000a5d3a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000ad157) main_radioblah_rocker_ctrl_pane_g

0x79f1,	// (0x000a4eac) main_cset_text2_pane_t1_copy1_ParamLimits

0xad46,	// (0x000a8201) cam4_image_uncrop_qvga_pane

0xadad,	// (0x000a8268) vid4_image_uncrop_qcif_pane

0xaf28,	// (0x000a83e3) cam6_image_uncrop_qvga_pane_ParamLimits

0xaf28,	// (0x000a83e3) cam6_image_uncrop_qvga_pane

0x789e,	// (0x000a4d59) vid6_image_uncrop_qcif_pane_ParamLimits

0x789e,	// (0x000a4d59) vid6_image_uncrop_qcif_pane

0xe26f,	// (0x000ab72a) bg_popup_preview_window_pane_cp03

0x7ecd,	// (0x000a5388) list_cset_text2_pane

0x7ed5,	// (0x000a5390) main_cset6_text2_pane_g1

0x7edd,	// (0x000a5398) main_cset6_text2_pane_t1

0x8887,	// (0x000a5d42) list_cset_text2_pane_t1_ParamLimits

0x8887,	// (0x000a5d42) list_cset_text2_pane_t1

0xa2f2,	// (0x000a77ad) main_radioblah_pane_ParamLimits

0x84de,	// (0x000a5999) main_mobtv_info_pane_t3_ParamLimits

0x84de,	// (0x000a5999) main_mobtv_info_pane_t3

0x8745,	// (0x000a5c00) main_radioblah_pane_g1

0x877f,	// (0x000a5c3a) main_radioblah_info_pane_g1

0x8804,	// (0x000a5cbf) main_radioblah_info_pane_t3_ParamLimits

0x8804,	// (0x000a5cbf) main_radioblah_info_pane_t3

0x27b6,	// (0x0009fc71) highlight_cell_cale_month_pane_ParamLimits

0x27b6,	// (0x0009fc71) highlight_cell_cale_month_pane

0xa300,	// (0x000a77bb) main_phob_fisheye_pane

0xe035,	// (0x000ab4f0) scroll_pane_cp0031_ParamLimits

0xe035,	// (0x000ab4f0) scroll_pane_cp0031

0x79e2,	// (0x000a4e9d) wait_bar_pane_cp08_ParamLimits

0x7a97,	// (0x000a4f52) cset_list_set_pane_copy1_ParamLimits

0xbe9b,	// (0x000a9356) highlight_cell_cale_month_pane_g1

0x88a0,	// (0x000a5d5b) highlight_cell_cale_month_pane_t1

0xf0c1,	// (0x000ac57c) list_gen_pane_cp01

0xe910,	// (0x000abdcb) scroll_pane_01

0x88ae,	// (0x000a5d69) list_single_double_fisheye_pane

0x88b7,	// (0x000a5d72) list_double_fisheye_pane_g1_ParamLimits

0x88b7,	// (0x000a5d72) list_double_fisheye_pane_g1

0x88c3,	// (0x000a5d7e) list_double_fisheye_pane_g2_ParamLimits

0x88c3,	// (0x000a5d7e) list_double_fisheye_pane_g2

0x88d7,	// (0x000a5d92) list_double_fisheye_pane_g3_ParamLimits

0x88d7,	// (0x000a5d92) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000ad164) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000ad164) list_double_fisheye_pane_g

0x8900,	// (0x000a5dbb) list_double_fisheye_pane_t1_ParamLimits

0x8900,	// (0x000a5dbb) list_double_fisheye_pane_t1

0x891b,	// (0x000a5dd6) list_double_fisheye_pane_t2_ParamLimits

0x891b,	// (0x000a5dd6) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000ad16f) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000ad16f) list_double_fisheye_pane_t

0xa300,	// (0x000a77bb) main_call5_pane

0x867b,	// (0x000a5b36) sc_swipe_pane_ParamLimits

0x867b,	// (0x000a5b36) sc_swipe_pane

0x8950,	// (0x000a5e0b) call5_image_pane_ParamLimits

0x8950,	// (0x000a5e0b) call5_image_pane

0x896d,	// (0x000a5e28) call5_swipe_1_pane_ParamLimits

0x896d,	// (0x000a5e28) call5_swipe_1_pane

0x8980,	// (0x000a5e3b) call5_swipe_2_pane_ParamLimits

0x8980,	// (0x000a5e3b) call5_swipe_2_pane

0x89ab,	// (0x000a5e66) popup_call5_audio_first_window_ParamLimits

0x89ab,	// (0x000a5e66) popup_call5_audio_first_window

0xdf01,	// (0x000ab3bc) call5_swipe_1_pane_g1_ParamLimits

0xdf01,	// (0x000ab3bc) call5_swipe_1_pane_g1

0xbea3,	// (0x000a935e) call5_swipe_1_pane_g2_ParamLimits

0xbea3,	// (0x000a935e) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000ad174) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000ad174) call5_swipe_1_pane_g

0xbeaf,	// (0x000a936a) call5_swipe_1_pane_t1_ParamLimits

0xbeaf,	// (0x000a936a) call5_swipe_1_pane_t1

0xdf01,	// (0x000ab3bc) call5_swipe_2_pane_g1_ParamLimits

0xdf01,	// (0x000ab3bc) call5_swipe_2_pane_g1

0xbec4,	// (0x000a937f) call5_swipe_2_pane_g2_ParamLimits

0xbec4,	// (0x000a937f) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000ad179) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000ad179) call5_swipe_2_pane_g

0xbed0,	// (0x000a938b) call5_swipe_2_pane_t1_ParamLimits

0xbed0,	// (0x000a938b) call5_swipe_2_pane_t1

0xbee5,	// (0x000a93a0) sc_swipe_pane_g1_ParamLimits

0xbee5,	// (0x000a93a0) sc_swipe_pane_g1

0xbef2,	// (0x000a93ad) sc_swipe_pane_g2_ParamLimits

0xbef2,	// (0x000a93ad) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000ad17e) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000ad17e) sc_swipe_pane_g

0xbefe,	// (0x000a93b9) sc_swipe_pane_t1_ParamLimits

0xbefe,	// (0x000a93b9) sc_swipe_pane_t1

0xa300,	// (0x000a77bb) main_cmail_launcher_pane

0x89bc,	// (0x000a5e77) aid_size_cell_cmail_l_ParamLimits

0x89bc,	// (0x000a5e77) aid_size_cell_cmail_l

0x89d6,	// (0x000a5e91) grid_cmail_l_pane_ParamLimits

0x89d6,	// (0x000a5e91) grid_cmail_l_pane

0x89f1,	// (0x000a5eac) cell_cmail_l_pane_ParamLimits

0x89f1,	// (0x000a5eac) cell_cmail_l_pane

0x8a17,	// (0x000a5ed2) cell_cmail_l_pane_g1_ParamLimits

0x8a17,	// (0x000a5ed2) cell_cmail_l_pane_g1

0x8a23,	// (0x000a5ede) cell_cmail_l_pane_t1_ParamLimits

0x8a23,	// (0x000a5ede) cell_cmail_l_pane_t1

0xbf13,	// (0x000a93ce) cell_cmail_l_pane_t2_ParamLimits

0xbf13,	// (0x000a93ce) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000ad183) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000ad183) cell_cmail_l_pane_t

0xd577,	// (0x000aaa32) grid_highlight_pane_cp018_ParamLimits

0xd577,	// (0x000aaa32) grid_highlight_pane_cp018

0x03bd,	// (0x0009d878) main2_pane_ParamLimits

0x03bd,	// (0x0009d878) main2_pane

0xa5f5,	// (0x000a7ab0) popup_sp_fs_action_menu_bg_pane_g1

0xa5fd,	// (0x000a7ab8) popup_sp_fs_action_menu_bg_pane_g2

0xa605,	// (0x000a7ac0) popup_sp_fs_action_menu_bg_pane_g3

0xa60d,	// (0x000a7ac8) popup_sp_fs_action_menu_bg_pane_g4

0xa615,	// (0x000a7ad0) popup_sp_fs_action_menu_bg_pane_g5

0xa61d,	// (0x000a7ad8) popup_sp_fs_action_menu_bg_pane_g6

0xa625,	// (0x000a7ae0) popup_sp_fs_action_menu_bg_pane_g7

0xa62d,	// (0x000a7ae8) popup_sp_fs_action_menu_bg_pane_g8

0xa635,	// (0x000a7af0) popup_sp_fs_action_menu_bg_pane_g9

0xa63d,	// (0x000a7af8) popup_sp_fs_action_menu_bg_pane_g10

0xa63d,	// (0x000a7af8) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000ac645) popup_sp_fs_action_menu_bg_pane_g

0x179b,	// (0x0009ec56) list_medium_line_x2_t3_g3_g1_ParamLimits

0x179b,	// (0x0009ec56) list_medium_line_x2_t3_g3_g1

0x17a7,	// (0x0009ec62) list_medium_line_x2_t3_g3_g2_ParamLimits

0x17a7,	// (0x0009ec62) list_medium_line_x2_t3_g3_g2

0x17b3,	// (0x0009ec6e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x17b3,	// (0x0009ec6e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000ac6f3) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000ac6f3) list_medium_line_x2_t3_g3_g

0x17bf,	// (0x0009ec7a) list_medium_line_x2_t3_g3_t1_ParamLimits

0x17bf,	// (0x0009ec7a) list_medium_line_x2_t3_g3_t1

0x17d4,	// (0x0009ec8f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x17d4,	// (0x0009ec8f) list_medium_line_x2_t3_g3_t2

0x17e8,	// (0x0009eca3) list_medium_line_x2_t3_g3_t3_ParamLimits

0x17e8,	// (0x0009eca3) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000ac6fa) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000ac6fa) list_medium_line_x2_t3_g3_t

0x179b,	// (0x0009ec56) list_medium_line_x2_t3_g2_g1_ParamLimits

0x179b,	// (0x0009ec56) list_medium_line_x2_t3_g2_g1

0x17b3,	// (0x0009ec6e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x17b3,	// (0x0009ec6e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000ac701) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000ac701) list_medium_line_x2_t3_g2_g

0x17fd,	// (0x0009ecb8) list_medium_line_x2_t3_g2_t1_ParamLimits

0x17fd,	// (0x0009ecb8) list_medium_line_x2_t3_g2_t1

0x1813,	// (0x0009ecce) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1813,	// (0x0009ecce) list_medium_line_x2_t3_g2_t2

0x17e8,	// (0x0009eca3) list_medium_line_x2_t3_g2_t3_ParamLimits

0x17e8,	// (0x0009eca3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000ac706) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000ac706) list_medium_line_x2_t3_g2_t

0x179b,	// (0x0009ec56) list_medium_line_x2_t4_g4_g1_ParamLimits

0x179b,	// (0x0009ec56) list_medium_line_x2_t4_g4_g1

0x1825,	// (0x0009ece0) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1825,	// (0x0009ece0) list_medium_line_x2_t4_g4_g2

0x17a7,	// (0x0009ec62) list_medium_line_x2_t4_g4_g3_ParamLimits

0x17a7,	// (0x0009ec62) list_medium_line_x2_t4_g4_g3

0x1831,	// (0x0009ecec) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1831,	// (0x0009ecec) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000ac70d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000ac70d) list_medium_line_x2_t4_g4_g

0x183d,	// (0x0009ecf8) list_medium_line_x2_t4_g4_t1_ParamLimits

0x183d,	// (0x0009ecf8) list_medium_line_x2_t4_g4_t1

0x1857,	// (0x0009ed12) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1857,	// (0x0009ed12) list_medium_line_x2_t4_g4_t2

0x186d,	// (0x0009ed28) list_medium_line_x2_t4_g4_t3_ParamLimits

0x186d,	// (0x0009ed28) list_medium_line_x2_t4_g4_t3

0x1882,	// (0x0009ed3d) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1882,	// (0x0009ed3d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000ac716) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000ac716) list_medium_line_x2_t4_g4_t

0x179b,	// (0x0009ec56) list_medium_line_x2_t2_g4_g1_ParamLimits

0x179b,	// (0x0009ec56) list_medium_line_x2_t2_g4_g1

0x1825,	// (0x0009ece0) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1825,	// (0x0009ece0) list_medium_line_x2_t2_g4_g2

0x17a7,	// (0x0009ec62) list_medium_line_x2_t2_g4_g3_ParamLimits

0x17a7,	// (0x0009ec62) list_medium_line_x2_t2_g4_g3

0x17b3,	// (0x0009ec6e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x17b3,	// (0x0009ec6e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000ac77d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000ac77d) list_medium_line_x2_t2_g4_g

0x27dc,	// (0x0009fc97) list_medium_line_x2_t2_g4_t1_ParamLimits

0x27dc,	// (0x0009fc97) list_medium_line_x2_t2_g4_t1

0x17e8,	// (0x0009eca3) list_medium_line_x2_t2_g4_t2_ParamLimits

0x17e8,	// (0x0009eca3) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000ac786) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000ac786) list_medium_line_x2_t2_g4_t

0x179b,	// (0x0009ec56) list_medium_line_x2_t2_g3_g1_ParamLimits

0x179b,	// (0x0009ec56) list_medium_line_x2_t2_g3_g1

0x17a7,	// (0x0009ec62) list_medium_line_x2_t2_g3_g2_ParamLimits

0x17a7,	// (0x0009ec62) list_medium_line_x2_t2_g3_g2

0x17b3,	// (0x0009ec6e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x17b3,	// (0x0009ec6e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000ac6f3) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000ac6f3) list_medium_line_x2_t2_g3_g

0x27f1,	// (0x0009fcac) list_medium_line_x2_t2_g3_t1_ParamLimits

0x27f1,	// (0x0009fcac) list_medium_line_x2_t2_g3_t1

0x17e8,	// (0x0009eca3) list_medium_line_x2_t2_g3_t2_ParamLimits

0x17e8,	// (0x0009eca3) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000ac78b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000ac78b) list_medium_line_x2_t2_g3_t

0x293a,	// (0x0009fdf5) main_sp_fs_list_pane_ParamLimits

0x293a,	// (0x0009fdf5) main_sp_fs_list_pane

0xc8ae,	// (0x000a9d69) sp_fs_scroll_pane_ParamLimits

0xc8ae,	// (0x000a9d69) sp_fs_scroll_pane

0x2946,	// (0x0009fe01) list_medium_line_x2_t3_t1

0x2956,	// (0x0009fe11) list_medium_line_x2_t3_t2

0x2964,	// (0x0009fe1f) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000ac7d6) list_medium_line_x2_t3_t

0x2972,	// (0x0009fe2d) list_medium_line_x3_t4_t1

0x2982,	// (0x0009fe3d) list_medium_line_x3_t4_t2

0x2990,	// (0x0009fe4b) list_medium_line_x3_t4_t3

0x2964,	// (0x0009fe1f) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000ac7dd) list_medium_line_x3_t4_t

0x299e,	// (0x0009fe59) list_medium_line_x4_t5_t1

0x29ae,	// (0x0009fe69) list_medium_line_x4_t5_t2

0x2990,	// (0x0009fe4b) list_medium_line_x4_t5_t3

0x29bc,	// (0x0009fe77) list_medium_line_x4_t5_t4

0x2964,	// (0x0009fe1f) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000ac7e6) list_medium_line_x4_t5_t

0x179b,	// (0x0009ec56) list_medium_line_t4_g4_g1_ParamLimits

0x179b,	// (0x0009ec56) list_medium_line_t4_g4_g1

0x29ca,	// (0x0009fe85) list_medium_line_t4_g4_g2_ParamLimits

0x29ca,	// (0x0009fe85) list_medium_line_t4_g4_g2

0x29d6,	// (0x0009fe91) list_medium_line_t4_g4_g3_ParamLimits

0x29d6,	// (0x0009fe91) list_medium_line_t4_g4_g3

0x17b3,	// (0x0009ec6e) list_medium_line_t4_g4_g4_ParamLimits

0x17b3,	// (0x0009ec6e) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000ac7f1) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000ac7f1) list_medium_line_t4_g4_g

0x29e2,	// (0x0009fe9d) list_medium_line_t4_g4_t1_ParamLimits

0x29e2,	// (0x0009fe9d) list_medium_line_t4_g4_t1

0x29f7,	// (0x0009feb2) list_medium_line_t4_g4_t2_ParamLimits

0x29f7,	// (0x0009feb2) list_medium_line_t4_g4_t2

0x2a0c,	// (0x0009fec7) list_medium_line_t4_g4_t3_ParamLimits

0x2a0c,	// (0x0009fec7) list_medium_line_t4_g4_t3

0x17e8,	// (0x0009eca3) list_medium_line_t4_g4_t4_ParamLimits

0x17e8,	// (0x0009eca3) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000ac7fa) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000ac7fa) list_medium_line_t4_g4_t

0x2ad4,	// (0x0009ff8f) chi_dic_find_pane_g1

0x3b7c,	// (0x000a1037) main_tport_pane

0x6a16,	// (0x000a3ed1) list_medium_line_plain_t1

0x6abe,	// (0x000a3f79) list_medium_line_t2_g2_g1_ParamLimits

0x6abe,	// (0x000a3f79) list_medium_line_t2_g2_g1

0x6aca,	// (0x000a3f85) list_medium_line_t2_g2_g2_ParamLimits

0x6aca,	// (0x000a3f85) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000acebb) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000acebb) list_medium_line_t2_g2_g

0x6ad6,	// (0x000a3f91) list_medium_line_t2_g2_t1_ParamLimits

0x6ad6,	// (0x000a3f91) list_medium_line_t2_g2_t1

0x6af0,	// (0x000a3fab) list_medium_line_t2_g2_t2_ParamLimits

0x6af0,	// (0x000a3fab) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000acec0) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000acec0) list_medium_line_t2_g2_t

0xebbd,	// (0x000ac078) aid_sp_fs_list_icon_a_sm

0x715b,	// (0x000a4616) aid_sp_fs_list_icon_d

0x7163,	// (0x000a461e) aid_sp_fs_text_primary

0xebc5,	// (0x000ac080) aid_sp_fs_text_secondary

0x716c,	// (0x000a4627) list_medium_line

0x716c,	// (0x000a4627) list_medium_line_g2

0x716c,	// (0x000a4627) list_medium_line_g3

0x716c,	// (0x000a4627) list_medium_line_plain

0x716c,	// (0x000a4627) list_medium_line_plain_t2

0x716c,	// (0x000a4627) list_medium_line_plain_t3

0x716c,	// (0x000a4627) list_medium_line_right_icon

0x716c,	// (0x000a4627) list_medium_line_right_iconx2

0x716c,	// (0x000a4627) list_medium_line_t2

0x716c,	// (0x000a4627) list_medium_line_t2_g2

0x716c,	// (0x000a4627) list_medium_line_t2_g3

0x716c,	// (0x000a4627) list_medium_line_t2_right_icon

0x716c,	// (0x000a4627) list_medium_line_t2_right_iconx2

0x716c,	// (0x000a4627) list_medium_line_t3

0x716c,	// (0x000a4627) list_medium_line_t3_g2

0x716c,	// (0x000a4627) list_medium_line_t3_g3

0x716c,	// (0x000a4627) list_medium_line_t3_right_iconx2

0x7175,	// (0x000a4630) list_medium_line_t4_g4

0x716c,	// (0x000a4627) list_medium_line_x2

0x716c,	// (0x000a4627) list_medium_line_x2_t2_g2

0x716c,	// (0x000a4627) list_medium_line_x2_t2_g3

0x716c,	// (0x000a4627) list_medium_line_x2_t2_g4

0x716c,	// (0x000a4627) list_medium_line_x2_t3

0x716c,	// (0x000a4627) list_medium_line_x2_t3_g2

0x716c,	// (0x000a4627) list_medium_line_x2_t3_g3

0x716c,	// (0x000a4627) list_medium_line_x2_t3_g4

0x716c,	// (0x000a4627) list_medium_line_x2_t4_g2

0x716c,	// (0x000a4627) list_medium_line_x2_t4_g4

0x717e,	// (0x000a4639) list_medium_line_x3

0x717e,	// (0x000a4639) list_medium_line_x3_t4

0x717e,	// (0x000a4639) list_medium_line_x3_t4_g4

0x7175,	// (0x000a4630) list_medium_line_x4_t4

0x7175,	// (0x000a4630) list_medium_line_x4_t4_g7

0x7175,	// (0x000a4630) list_medium_line_x4_t5

0x7187,	// (0x000a4642) list_single_fs_dyc_pane_ParamLimits

0x7187,	// (0x000a4642) list_single_fs_dyc_pane

0x179b,	// (0x0009ec56) list_medium_line_x4_t4_g7_g1_ParamLimits

0x179b,	// (0x0009ec56) list_medium_line_x4_t4_g7_g1

0x7dd9,	// (0x000a5294) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7dd9,	// (0x000a5294) list_medium_line_x4_t4_g7_g2

0x7de5,	// (0x000a52a0) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7de5,	// (0x000a52a0) list_medium_line_x4_t4_g7_g3

0x7df4,	// (0x000a52af) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7df4,	// (0x000a52af) list_medium_line_x4_t4_g7_g4

0x7e00,	// (0x000a52bb) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7e00,	// (0x000a52bb) list_medium_line_x4_t4_g7_g5

0x7e0f,	// (0x000a52ca) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7e0f,	// (0x000a52ca) list_medium_line_x4_t4_g7_g6

0x7e1e,	// (0x000a52d9) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7e1e,	// (0x000a52d9) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000ad08b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000ad08b) list_medium_line_x4_t4_g7_g

0x7e2a,	// (0x000a52e5) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7e2a,	// (0x000a52e5) list_medium_line_x4_t4_g7_t1

0x7e3f,	// (0x000a52fa) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7e3f,	// (0x000a52fa) list_medium_line_x4_t4_g7_t2

0x7e54,	// (0x000a530f) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7e54,	// (0x000a530f) list_medium_line_x4_t4_g7_t3

0x7e69,	// (0x000a5324) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7e69,	// (0x000a5324) list_medium_line_x4_t4_g7_t4

0x7e7b,	// (0x000a5336) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7e7b,	// (0x000a5336) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000ad09a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000ad09a) list_medium_line_x4_t4_g7_t

0x7e8d,	// (0x000a5348) list_single_dyc_row_pane_ParamLimits

0x7e8d,	// (0x000a5348) list_single_dyc_row_pane

0x893d,	// (0x000a5df8) call5_gesture_pane_ParamLimits

0x893d,	// (0x000a5df8) call5_gesture_pane

0x8993,	// (0x000a5e4e) call5_windows_pane_ParamLimits

0x8993,	// (0x000a5e4e) call5_windows_pane

0x8a39,	// (0x000a5ef4) call5_swipe_1_pane_cp_ParamLimits

0x8a39,	// (0x000a5ef4) call5_swipe_1_pane_cp

0x8a45,	// (0x000a5f00) call5_swipe_2_pane_cp_ParamLimits

0x8a45,	// (0x000a5f00) call5_swipe_2_pane_cp

0xa769,	// (0x000a7c24) call5_image_pane_cp

0x8a51,	// (0x000a5f0c) popup_call5_audio_first_window_cp_ParamLimits

0x8a51,	// (0x000a5f0c) popup_call5_audio_first_window_cp

0xbee5,	// (0x000a93a0) call5_swipe_1_pane_g1_cp_ParamLimits

0xbee5,	// (0x000a93a0) call5_swipe_1_pane_g1_cp

0xbf25,	// (0x000a93e0) call5_swipe_1_pane_g2_cp

0xbefe,	// (0x000a93b9) call5_swipe_1_pane_t1_cp_ParamLimits

0xbefe,	// (0x000a93b9) call5_swipe_1_pane_t1_cp

0xbee5,	// (0x000a93a0) call5_swipe_2_pane_g1_cp_ParamLimits

0xbee5,	// (0x000a93a0) call5_swipe_2_pane_g1_cp

0xbf2d,	// (0x000a93e8) call5_swipe_2_pane_g2_cp

0xbf35,	// (0x000a93f0) call5_swipe_2_pane_t1_cp_ParamLimits

0xbf35,	// (0x000a93f0) call5_swipe_2_pane_t1_cp

0xd577,	// (0x000aaa32) main_sp_fs_email_pane

0xbf4a,	// (0x000a9405) main_sp_fs_listscroll_pane_te

0x8a5f,	// (0x000a5f1a) popup_sp_fs_action_menu_pane_ParamLimits

0x8a5f,	// (0x000a5f1a) popup_sp_fs_action_menu_pane

0xdc95,	// (0x000ab150) bg_sp_fs_ctrlbar_pane_g1

0xbf53,	// (0x000a940e) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xbf5c,	// (0x000a9417) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xbf65,	// (0x000a9420) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xdc95,	// (0x000ab150) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000ad188) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xda7a,	// (0x000aaf35) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xda7a,	// (0x000aaf35) bg_sp_fs_ctrlbar_ddmenu_pane

0xbf6e,	// (0x000a9429) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xbf6e,	// (0x000a9429) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xbf7a,	// (0x000a9435) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xbf7a,	// (0x000a9435) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000ad191) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000ad191) main_sp_fs_ctrlbar_ddmenu_pane_g

0xbf86,	// (0x000a9441) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xbf86,	// (0x000a9441) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8aa3,	// (0x000a5f5e) list_medium_line_t2_right_icon_g1

0x8aab,	// (0x000a5f66) list_medium_line_t2_right_icon_t1

0x8abb,	// (0x000a5f76) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000ad196) list_medium_line_t2_right_icon_t

0xd88d,	// (0x000aad48) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd88d,	// (0x000aad48) bg_sp_fs_ctrlbar_pane

0x8b15,	// (0x000a5fd0) main_sp_fs_ctrlbar_button_pane_cp01

0x8b1f,	// (0x000a5fda) main_sp_fs_ctrlbar_ddmenu_pane

0xbfd8,	// (0x000a9493) main_sp_fs_ctrlbar_pane_g1

0xbfe4,	// (0x000a949f) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000ad19b) main_sp_fs_ctrlbar_pane_g

0xbff0,	// (0x000a94ab) main_sp_fs_ctrlbar_pane_t1

0x8b29,	// (0x000a5fe4) main_sp_fs_ctrlbar_pane

0x8b4d,	// (0x000a6008) main_sp_fs_listscroll_pane_te_cp01

0x8b6d,	// (0x000a6028) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8b6d,	// (0x000a6028) popup_sp_fs_action_menu_pane_cp01

0xd577,	// (0x000aaa32) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xd577,	// (0x000aaa32) bg_sp_fs_highlight_list_pane_cp01

0xebe9,	// (0x000ac0a4) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xebe9,	// (0x000ac0a4) sp_fs_action_menu_list_gene_pane_g1

0xc020,	// (0x000a94db) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xc020,	// (0x000a94db) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000ad1a5) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000ad1a5) sp_fs_action_menu_list_gene_pane_g

0xebf8,	// (0x000ac0b3) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xebf8,	// (0x000ac0b3) sp_fs_action_menu_list_gene_pane_t1

0xec10,	// (0x000ac0cb) sp_fs_action_menu_list_gene_pane_ParamLimits

0xec10,	// (0x000ac0cb) sp_fs_action_menu_list_gene_pane

0xc02d,	// (0x000a94e8) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xc02d,	// (0x000a94e8) popup_sp_fs_action_menu_bg_pane

0xec31,	// (0x000ac0ec) sp_fs_action_menu_list_pane_ParamLimits

0xec31,	// (0x000ac0ec) sp_fs_action_menu_list_pane

0x8b9d,	// (0x000a6058) sp_fs_scroll_pane_cp01_ParamLimits

0x8b9d,	// (0x000a6058) sp_fs_scroll_pane_cp01

0x8bc3,	// (0x000a607e) list_medium_line_plain_t2_t1

0x8bd3,	// (0x000a608e) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000ad1aa) list_medium_line_plain_t2_t

0x8be3,	// (0x000a609e) list_medium_line_plain_t3_t1

0x8bf3,	// (0x000a60ae) list_medium_line_plain_t3_t2

0x8c01,	// (0x000a60bc) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000ad1af) list_medium_line_plain_t3_t

0x179b,	// (0x0009ec56) list_medium_line_x2_t2_g2_g1_ParamLimits

0x179b,	// (0x0009ec56) list_medium_line_x2_t2_g2_g1

0x17b3,	// (0x0009ec6e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x17b3,	// (0x0009ec6e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000ac701) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000ac701) list_medium_line_x2_t2_g2_g

0x29e2,	// (0x0009fe9d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x29e2,	// (0x0009fe9d) list_medium_line_x2_t2_g2_t1

0x17e8,	// (0x0009eca3) list_medium_line_x2_t2_g2_t2_ParamLimits

0x17e8,	// (0x0009eca3) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000ad1b6) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000ad1b6) list_medium_line_x2_t2_g2_t

0x179b,	// (0x0009ec56) list_medium_line_x2_t4_g2_g1_ParamLimits

0x179b,	// (0x0009ec56) list_medium_line_x2_t4_g2_g1

0x8c0f,	// (0x000a60ca) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8c0f,	// (0x000a60ca) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000ad1bb) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000ad1bb) list_medium_line_x2_t4_g2_g

0x8c21,	// (0x000a60dc) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8c21,	// (0x000a60dc) list_medium_line_x2_t4_g2_t1

0x8c3b,	// (0x000a60f6) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8c3b,	// (0x000a60f6) list_medium_line_x2_t4_g2_t2

0x8c51,	// (0x000a610c) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8c51,	// (0x000a610c) list_medium_line_x2_t4_g2_t3

0x17e8,	// (0x0009eca3) list_medium_line_x2_t4_g2_t4_ParamLimits

0x17e8,	// (0x0009eca3) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000ad1c0) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000ad1c0) list_medium_line_x2_t4_g2_t

0x8c66,	// (0x000a6121) list_medium_line_t3_right_iconx2_g1

0x8aa3,	// (0x000a5f5e) list_medium_line_t3_right_iconx2_g2

0x8c6e,	// (0x000a6129) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000ad1c9) list_medium_line_t3_right_iconx2_g

0x8c78,	// (0x000a6133) list_medium_line_t3_right_iconx2_t1

0x8c88,	// (0x000a6143) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000ad1d0) list_medium_line_t3_right_iconx2_t

0x179b,	// (0x0009ec56) list_medium_line_x3_t4_g4_g1_ParamLimits

0x179b,	// (0x0009ec56) list_medium_line_x3_t4_g4_g1

0x17a7,	// (0x0009ec62) list_medium_line_x3_t4_g4_g2_ParamLimits

0x17a7,	// (0x0009ec62) list_medium_line_x3_t4_g4_g2

0x29ca,	// (0x0009fe85) list_medium_line_x3_t4_g4_g3_ParamLimits

0x29ca,	// (0x0009fe85) list_medium_line_x3_t4_g4_g3

0x8c96,	// (0x000a6151) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8c96,	// (0x000a6151) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000ad1d5) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000ad1d5) list_medium_line_x3_t4_g4_g

0x8ca2,	// (0x000a615d) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8ca2,	// (0x000a615d) list_medium_line_x3_t4_g4_t1

0x8cb9,	// (0x000a6174) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8cb9,	// (0x000a6174) list_medium_line_x3_t4_g4_t2

0x29f7,	// (0x0009feb2) list_medium_line_x3_t4_g4_t3_ParamLimits

0x29f7,	// (0x0009feb2) list_medium_line_x3_t4_g4_t3

0x8cd4,	// (0x000a618f) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8cd4,	// (0x000a618f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000ad1de) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000ad1de) list_medium_line_x3_t4_g4_t

0x8cf1,	// (0x000a61ac) list_single_dyc_row_text_pane_t1_ParamLimits

0x8cf1,	// (0x000a61ac) list_single_dyc_row_text_pane_t1

0x8d3a,	// (0x000a61f5) list_single_dyc_row_text_pane_t2_ParamLimits

0x8d3a,	// (0x000a61f5) list_single_dyc_row_text_pane_t2

0xec53,	// (0x000ac10e) list_single_dyc_row_text_pane_t3_ParamLimits

0xec53,	// (0x000ac10e) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000ad1e7) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000ad1e7) list_single_dyc_row_text_pane_t

0xec77,	// (0x000ac132) list_single_dyc_row_pane_g1_ParamLimits

0xec77,	// (0x000ac132) list_single_dyc_row_pane_g1

0xec83,	// (0x000ac13e) list_single_dyc_row_pane_g2_ParamLimits

0xec83,	// (0x000ac13e) list_single_dyc_row_pane_g2

0xec8f,	// (0x000ac14a) list_single_dyc_row_pane_g3_ParamLimits

0xec8f,	// (0x000ac14a) list_single_dyc_row_pane_g3

0xec9b,	// (0x000ac156) list_single_dyc_row_pane_g4_ParamLimits

0xec9b,	// (0x000ac156) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000ad1f4) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000ad1f4) list_single_dyc_row_pane_g

0xeca7,	// (0x000ac162) list_single_dyc_row_text_pane_ParamLimits

0xeca7,	// (0x000ac162) list_single_dyc_row_text_pane

0xe26f,	// (0x000ab72a) bg_sp_fs_scroll_pane

0xc03b,	// (0x000a94f6) thumb_sp_fs_scroll_pane

0x6abe,	// (0x000a3f79) list_medium_line_g1_ParamLimits

0x6abe,	// (0x000a3f79) list_medium_line_g1

0x8e6f,	// (0x000a632a) list_medium_line_t1_ParamLimits

0x8e6f,	// (0x000a632a) list_medium_line_t1

0x179b,	// (0x0009ec56) list_medium_line_x2_g1_ParamLimits

0x179b,	// (0x0009ec56) list_medium_line_x2_g1

0x17a7,	// (0x0009ec62) list_medium_line_x2_g2_ParamLimits

0x17a7,	// (0x0009ec62) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000ad1fd) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000ad1fd) list_medium_line_x2_g

0xecc6,	// (0x000ac181) list_medium_line_x2_t1_ParamLimits

0xecc6,	// (0x000ac181) list_medium_line_x2_t1

0x179b,	// (0x0009ec56) list_medium_line_x3_g1_ParamLimits

0x179b,	// (0x0009ec56) list_medium_line_x3_g1

0x17a7,	// (0x0009ec62) list_medium_line_x3_g2_ParamLimits

0x17a7,	// (0x0009ec62) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000ad1fd) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000ad1fd) list_medium_line_x3_g

0xecc6,	// (0x000ac181) list_medium_line_x3_t1_ParamLimits

0xecc6,	// (0x000ac181) list_medium_line_x3_t1

0xc044,	// (0x000a94ff) thumb_sp_fs_scroll_pane_g1

0xc04d,	// (0x000a9508) thumb_sp_fs_scroll_pane_g2

0xc056,	// (0x000a9511) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000ad202) thumb_sp_fs_scroll_pane_g

0xc044,	// (0x000a94ff) bg_sp_fs_scroll_pane_g1

0xc04d,	// (0x000a9508) bg_sp_fs_scroll_pane_g2

0xc056,	// (0x000a9511) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000ad202) bg_sp_fs_scroll_pane_g

0x179b,	// (0x0009ec56) list_medium_line_x2_t3_g4_g1_ParamLimits

0x179b,	// (0x0009ec56) list_medium_line_x2_t3_g4_g1

0x1825,	// (0x0009ece0) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1825,	// (0x0009ece0) list_medium_line_x2_t3_g4_g2

0x17a7,	// (0x0009ec62) list_medium_line_x2_t3_g4_g3_ParamLimits

0x17a7,	// (0x0009ec62) list_medium_line_x2_t3_g4_g3

0x17b3,	// (0x0009ec6e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x17b3,	// (0x0009ec6e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000ac77d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000ac77d) list_medium_line_x2_t3_g4_g

0x8e84,	// (0x000a633f) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8e84,	// (0x000a633f) list_medium_line_x2_t3_g4_t1

0x8e9c,	// (0x000a6357) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8e9c,	// (0x000a6357) list_medium_line_x2_t3_g4_t2

0x17e8,	// (0x0009eca3) list_medium_line_x2_t3_g4_t3_ParamLimits

0x17e8,	// (0x0009eca3) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000ad209) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000ad209) list_medium_line_x2_t3_g4_t

0x6abe,	// (0x000a3f79) list_medium_line_g2_g1_ParamLimits

0x6abe,	// (0x000a3f79) list_medium_line_g2_g1

0x6aca,	// (0x000a3f85) list_medium_line_g2_g2_ParamLimits

0x6aca,	// (0x000a3f85) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000acebb) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000acebb) list_medium_line_g2_g

0x8eb6,	// (0x000a6371) list_medium_line_g2_t1_ParamLimits

0x8eb6,	// (0x000a6371) list_medium_line_g2_t1

0x6abe,	// (0x000a3f79) list_medium_line_t3_g2_g1_ParamLimits

0x6abe,	// (0x000a3f79) list_medium_line_t3_g2_g1

0x6aca,	// (0x000a3f85) list_medium_line_t3_g2_g2_ParamLimits

0x6aca,	// (0x000a3f85) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000acebb) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000acebb) list_medium_line_t3_g2_g

0x8ecb,	// (0x000a6386) list_medium_line_t3_g2_t1_ParamLimits

0x8ecb,	// (0x000a6386) list_medium_line_t3_g2_t1

0x8ee5,	// (0x000a63a0) list_medium_line_t3_g2_t2_ParamLimits

0x8ee5,	// (0x000a63a0) list_medium_line_t3_g2_t2

0x8efb,	// (0x000a63b6) list_medium_line_t3_g2_t3_ParamLimits

0x8efb,	// (0x000a63b6) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000ad210) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000ad210) list_medium_line_t3_g2_t

0x8aa3,	// (0x000a5f5e) list_medium_line_right_icon_g1

0x8f15,	// (0x000a63d0) list_medium_line_right_icon_t1

0x6abe,	// (0x000a3f79) list_medium_line_t2_g1_ParamLimits

0x6abe,	// (0x000a3f79) list_medium_line_t2_g1

0x8f23,	// (0x000a63de) list_medium_line_t2_t1_ParamLimits

0x8f23,	// (0x000a63de) list_medium_line_t2_t1

0x8f3d,	// (0x000a63f8) list_medium_line_t2_t2_ParamLimits

0x8f3d,	// (0x000a63f8) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000ad217) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000ad217) list_medium_line_t2_t

0x6abe,	// (0x000a3f79) list_medium_line_t3_g1_ParamLimits

0x6abe,	// (0x000a3f79) list_medium_line_t3_g1

0x8f56,	// (0x000a6411) list_medium_line_t3_t1_ParamLimits

0x8f56,	// (0x000a6411) list_medium_line_t3_t1

0x8f70,	// (0x000a642b) list_medium_line_t3_t2_ParamLimits

0x8f70,	// (0x000a642b) list_medium_line_t3_t2

0x8f86,	// (0x000a6441) list_medium_line_t3_t3_ParamLimits

0x8f86,	// (0x000a6441) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000ad21c) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000ad21c) list_medium_line_t3_t

0x6abe,	// (0x000a3f79) list_medium_line_g3_g1_ParamLimits

0x6abe,	// (0x000a3f79) list_medium_line_g3_g1

0x8f9b,	// (0x000a6456) list_medium_line_g3_g2_ParamLimits

0x8f9b,	// (0x000a6456) list_medium_line_g3_g2

0x6aca,	// (0x000a3f85) list_medium_line_g3_g3_ParamLimits

0x6aca,	// (0x000a3f85) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000ad223) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000ad223) list_medium_line_g3_g

0x8fa7,	// (0x000a6462) list_medium_line_g3_t1_ParamLimits

0x8fa7,	// (0x000a6462) list_medium_line_g3_t1

0x6abe,	// (0x000a3f79) list_medium_line_t2_g3_g1_ParamLimits

0x6abe,	// (0x000a3f79) list_medium_line_t2_g3_g1

0x8f9b,	// (0x000a6456) list_medium_line_t2_g3_g2_ParamLimits

0x8f9b,	// (0x000a6456) list_medium_line_t2_g3_g2

0x6aca,	// (0x000a3f85) list_medium_line_t2_g3_g3_ParamLimits

0x6aca,	// (0x000a3f85) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000ad223) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000ad223) list_medium_line_t2_g3_g

0x8fbc,	// (0x000a6477) list_medium_line_t2_g3_t1_ParamLimits

0x8fbc,	// (0x000a6477) list_medium_line_t2_g3_t1

0x8fd6,	// (0x000a6491) list_medium_line_t2_g3_t2_ParamLimits

0x8fd6,	// (0x000a6491) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000ad22a) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000ad22a) list_medium_line_t2_g3_t

0x6abe,	// (0x000a3f79) list_medium_line_t3_g3_g1_ParamLimits

0x6abe,	// (0x000a3f79) list_medium_line_t3_g3_g1

0x8f9b,	// (0x000a6456) list_medium_line_t3_g3_g2_ParamLimits

0x8f9b,	// (0x000a6456) list_medium_line_t3_g3_g2

0x6aca,	// (0x000a3f85) list_medium_line_t3_g3_g3_ParamLimits

0x6aca,	// (0x000a3f85) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000ad223) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000ad223) list_medium_line_t3_g3_g

0x8ff2,	// (0x000a64ad) list_medium_line_t3_g3_t1_ParamLimits

0x8ff2,	// (0x000a64ad) list_medium_line_t3_g3_t1

0x900b,	// (0x000a64c6) list_medium_line_t3_g3_t2_ParamLimits

0x900b,	// (0x000a64c6) list_medium_line_t3_g3_t2

0x9021,	// (0x000a64dc) list_medium_line_t3_g3_t3_ParamLimits

0x9021,	// (0x000a64dc) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000ad22f) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000ad22f) list_medium_line_t3_g3_t

0x8c66,	// (0x000a6121) list_medium_line_right_iconx2_g1

0x8aa3,	// (0x000a5f5e) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000ad236) list_medium_line_right_iconx2_g

0x903b,	// (0x000a64f6) list_medium_line_right_iconx2_t1

0x8c66,	// (0x000a6121) list_medium_line_t2_right_iconx2_g1

0x8aa3,	// (0x000a5f5e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000ad236) list_medium_line_t2_right_iconx2_g

0x9049,	// (0x000a6504) list_medium_line_t2_right_iconx2_t1

0x9059,	// (0x000a6514) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000ad23b) list_medium_line_t2_right_iconx2_t

0x906b,	// (0x000a6526) list_medium_line_x4_t4_t1

0x9079,	// (0x000a6534) list_medium_line_x4_t4_t2

0x9089,	// (0x000a6544) list_medium_line_x4_t4_t3

0x9099,	// (0x000a6554) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000ad240) list_medium_line_x4_t4_t

0x90ec,	// (0x000a65a7) tport_appsw_pane_ParamLimits

0x90ec,	// (0x000a65a7) tport_appsw_pane

0x9104,	// (0x000a65bf) tport_contact_pane_ParamLimits

0x9104,	// (0x000a65bf) tport_contact_pane

0x911c,	// (0x000a65d7) tport_listscroll_pane_ParamLimits

0x911c,	// (0x000a65d7) tport_listscroll_pane

0x9136,	// (0x000a65f1) cell_tport_appsw_pane_ParamLimits

0x9136,	// (0x000a65f1) cell_tport_appsw_pane

0xe7b9,	// (0x000abc74) tport_appsw_pane_g1_ParamLimits

0xe7b9,	// (0x000abc74) tport_appsw_pane_g1

0xc05f,	// (0x000a951a) tport_contact_pane_g1

0x814e,	// (0x000a5609) tport_contact_pane_t1

0xc068,	// (0x000a9523) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000ad249) tport_contact_pane_t

0xc076,	// (0x000a9531) list_tport_pane

0xc07f,	// (0x000a953a) scroll_pane_cp_030

0x917e,	// (0x000a6639) cell_tport_appsw_pane_g1

0x918e,	// (0x000a6649) cell_tport_appsw_pane_t1

0x919c,	// (0x000a6657) grid_highlight_pane_cp019

0x91a4,	// (0x000a665f) list_tport_double_graphic_pane_ParamLimits

0x91a4,	// (0x000a665f) list_tport_double_graphic_pane

0xd577,	// (0x000aaa32) list_highlight_pane_cp023_ParamLimits

0xd577,	// (0x000aaa32) list_highlight_pane_cp023

0x91b1,	// (0x000a666c) list_tport_double_graphic_pane_g1_ParamLimits

0x91b1,	// (0x000a666c) list_tport_double_graphic_pane_g1

0x91be,	// (0x000a6679) list_tport_double_graphic_pane_t1_ParamLimits

0x91be,	// (0x000a6679) list_tport_double_graphic_pane_t1

0x91d3,	// (0x000a668e) list_tport_double_graphic_pane_t2_ParamLimits

0x91d3,	// (0x000a668e) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000ad255) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000ad255) list_tport_double_graphic_pane_t

0xe26f,	// (0x000ab72a) main_cale_note_pane

0x6284,	// (0x000a373f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6284,	// (0x000a373f) cell_vitu2_function_top_wide_pane_cp01

0x84f2,	// (0x000a59ad) wait_bar_pane_cp05_ParamLimits

0xd577,	// (0x000aaa32) listscroll_cmail_pane

0xc088,	// (0x000a9543) list_cmail_pane

0x91e5,	// (0x000a66a0) list_cmail_body_pane

0x91fa,	// (0x000a66b5) list_single_cmail_header_caption_pane

0x9210,	// (0x000a66cb) list_single_cmail_header_detail_pane_ParamLimits

0x9210,	// (0x000a66cb) list_single_cmail_header_detail_pane

0xc098,	// (0x000a9553) list_single_cmail_header_caption_pane_t1

0x9239,	// (0x000a66f4) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9239,	// (0x000a66f4) list_single_cmail_header_detail_pane_g1

0x9251,	// (0x000a670c) list_single_cmail_header_detail_pane_g2_ParamLimits

0x9251,	// (0x000a670c) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000ad25a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000ad25a) list_single_cmail_header_detail_pane_g

0xecdc,	// (0x000ac197) list_single_cmail_header_detail_pane_t1_ParamLimits

0xecdc,	// (0x000ac197) list_single_cmail_header_detail_pane_t1

0xed3c,	// (0x000ac1f7) list_single_cmail_header_editor_pane_bg_ParamLimits

0xed3c,	// (0x000ac1f7) list_single_cmail_header_editor_pane_bg

0x835e,	// (0x000a5819) list_cmail_body_pane_g1

0xc0bc,	// (0x000a9577) list_cmail_body_pane_t1

0xe7f6,	// (0x000abcb1) list_single_cmail_header_editor_pane_bg_g1

0xb047,	// (0x000a8502) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe806,	// (0x000abcc1) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe7fe,	// (0x000abcb9) list_single_cmail_header_editor_pane_bg_g1_copy3

0xea4a,	// (0x000abf05) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe826,	// (0x000abce1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe816,	// (0x000abcd1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe81e,	// (0x000abcd9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb027,	// (0x000a84e2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x925d,	// (0x000a6718) calenote_gesture_pane_ParamLimits

0x925d,	// (0x000a6718) calenote_gesture_pane

0x927d,	// (0x000a6738) calenote_window_pane_ParamLimits

0x927d,	// (0x000a6738) calenote_window_pane

0xc0ca,	// (0x000a9585) popup_note_window_cp01

0x9299,	// (0x000a6754) calenote_swipe_1_pane_ParamLimits

0x9299,	// (0x000a6754) calenote_swipe_1_pane

0x8a45,	// (0x000a5f00) calenote_swipe_2_pane_ParamLimits

0x8a45,	// (0x000a5f00) calenote_swipe_2_pane

0xbee5,	// (0x000a93a0) calenote_swipe_1_pane_g1_ParamLimits

0xbee5,	// (0x000a93a0) calenote_swipe_1_pane_g1

0xbef2,	// (0x000a93ad) calenote_swipe_1_pane_g2_ParamLimits

0xbef2,	// (0x000a93ad) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000ad17e) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000ad17e) calenote_swipe_1_pane_g

0xc0dc,	// (0x000a9597) calenote_swipe_1_pane_t1_ParamLimits

0xc0dc,	// (0x000a9597) calenote_swipe_1_pane_t1

0xbee5,	// (0x000a93a0) calenote_swipe_2_pane_g1_ParamLimits

0xbee5,	// (0x000a93a0) calenote_swipe_2_pane_g1

0xc0fb,	// (0x000a95b6) calenote_swipe_2_pane_g2_ParamLimits

0xc0fb,	// (0x000a95b6) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000ad266) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000ad266) calenote_swipe_2_pane_g

0xc107,	// (0x000a95c2) calenote_swipe_2_pane_t1_ParamLimits

0xc107,	// (0x000a95c2) calenote_swipe_2_pane_t1

0xe26f,	// (0x000ab72a) main_mup_navstr_pane

0x4f35,	// (0x000a23f0) main_mup3_pane_t7_ParamLimits

0x4f35,	// (0x000a23f0) main_mup3_pane_t7

0xab64,	// (0x000a801f) main_mp4_pane_g6_ParamLimits

0xab64,	// (0x000a801f) main_mp4_pane_g6

0xad08,	// (0x000a81c3) main_image3_pane_t4_ParamLimits

0xad08,	// (0x000a81c3) main_image3_pane_t4

0x92ae,	// (0x000a6769) popup_navstr_preview_pane_ParamLimits

0x92ae,	// (0x000a6769) popup_navstr_preview_pane

0x92c2,	// (0x000a677d) scroll_navstr_pane_ParamLimits

0x92c2,	// (0x000a677d) scroll_navstr_pane

0xe26f,	// (0x000ab72a) bg_popup_preview_window_pane_cp04

0xc12e,	// (0x000a95e9) popup_navstr_preview_pane_t1

0x92d6,	// (0x000a6791) scroll_navstr_pane_g1_ParamLimits

0x92d6,	// (0x000a6791) scroll_navstr_pane_g1

0x92ea,	// (0x000a67a5) scroll_navstr_pane_t1_ParamLimits

0x92ea,	// (0x000a67a5) scroll_navstr_pane_t1

0xc0d3,	// (0x000a958e) bg_button_pane_cp014

0xc0d3,	// (0x000a958e) bg_button_pane_cp030

0x88e3,	// (0x000a5d9e) list_double_fisheye_pane_g4_ParamLimits

0x88e3,	// (0x000a5d9e) list_double_fisheye_pane_g4

0x88ef,	// (0x000a5daa) list_double_fisheye_pane_g5_ParamLimits

0x88ef,	// (0x000a5daa) list_double_fisheye_pane_g5

0xc8ae,	// (0x000a9d69) sp_fs_scroll_pane_cp03

0xbfd8,	// (0x000a9493) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xbfe4,	// (0x000a949f) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000ad19b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xbff0,	// (0x000a94ab) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xc090,	// (0x000a954b) sp_fs_scroll_pane_cp02

0xa6a8,	// (0x000a7b63) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa6a8,	// (0x000a7b63) popup_sp_fs_calendar_preview_list_single_pane

0xe26f,	// (0x000ab72a) main_cam6_pano_pane

0xa2f2,	// (0x000a77ad) main_mup3_pane_ParamLimits

0xe26f,	// (0x000ab72a) main_phacti_pane

0x83c5,	// (0x000a5880) bg_button_pane_cp11

0x83df,	// (0x000a589a) main_mobtv_info_pane_g2_ParamLimits

0x83df,	// (0x000a589a) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x000ad0fb) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x000ad0fb) main_mobtv_info_pane_g

0x8662,	// (0x000a5b1d) sc_clock_pane_t5_ParamLimits

0x8662,	// (0x000a5b1d) sc_clock_pane_t5

0x8745,	// (0x000a5c00) main_radioblah_pane_g1_ParamLimits

0xbe31,	// (0x000a92ec) main_radioblah_pane_t3_ParamLimits

0xbe31,	// (0x000a92ec) main_radioblah_pane_t3

0xbe49,	// (0x000a9304) main_radioblah_pane_t4_ParamLimits

0xbe49,	// (0x000a9304) main_radioblah_pane_t4

0x876d,	// (0x000a5c28) main_radioblah_text_pane_ParamLimits

0x876d,	// (0x000a5c28) main_radioblah_text_pane

0x877f,	// (0x000a5c3a) main_radioblah_info_pane_g1_ParamLimits

0x8818,	// (0x000a5cd3) main_radioblah_info_pane_t4_ParamLimits

0x8818,	// (0x000a5cd3) main_radioblah_info_pane_t4

0xd577,	// (0x000aaa32) main_sp_fs_calendar_pane

0x9301,	// (0x000a67bc) main_phacti_pane_g1

0x9309,	// (0x000a67c4) phacti_note_pane_ParamLimits

0x9309,	// (0x000a67c4) phacti_note_pane

0xc145,	// (0x000a9600) phacti_term_pane_ParamLimits

0xc145,	// (0x000a9600) phacti_term_pane

0xc15a,	// (0x000a9615) phacti_note_pane_t1_ParamLimits

0xc15a,	// (0x000a9615) phacti_note_pane_t1

0xed53,	// (0x000ac20e) phacti_term_pane_g1

0xed5b,	// (0x000ac216) phacti_term_pane_t1_ParamLimits

0xed5b,	// (0x000ac216) phacti_term_pane_t1

0xc171,	// (0x000a962c) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa747,	// (0x000a7c02) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000ad270) popup_sp_fs_calendar_preview_list_single_pane_g

0xc179,	// (0x000a9634) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xc179,	// (0x000a9634) popup_sp_fs_calendar_preview_list_single_pane_t1

0xc18f,	// (0x000a964a) aid_popup_sp_fs_bg_corner_pane

0xdc95,	// (0x000ab150) popup_sp_fs_calendar_preview_bg_pane_g1

0xe26f,	// (0x000ab72a) popup_sp_fs_calendar_preview_bg_pane

0xc197,	// (0x000a9652) popup_sp_fs_calendar_preview_list_pane

0xd88d,	// (0x000aad48) bg_main_sp_fs_cale_pane_ParamLimits

0xd88d,	// (0x000aad48) bg_main_sp_fs_cale_pane

0xed85,	// (0x000ac240) listscroll_cale_mrui_pane_ParamLimits

0xed85,	// (0x000ac240) listscroll_cale_mrui_pane

0xed9a,	// (0x000ac255) listscroll_sp_fs_schedule_track_pane

0xeda3,	// (0x000ac25e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xeda3,	// (0x000ac25e) main_sp_fs_ctrlbar_pane_cp01

0xc19f,	// (0x000a965a) main_sp_fs_ribbon_pane

0xedb6,	// (0x000ac271) popup_sp_fs_cale_preview_window

0x9387,	// (0x000a6842) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9387,	// (0x000a6842) list_single_sp_fs_schedule_track_pane

0xd577,	// (0x000aaa32) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd577,	// (0x000aaa32) bg_sp_fs_highlight_list_pane_cp03

0x939a,	// (0x000a6855) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x939a,	// (0x000a6855) list_single_sp_fs_schedule_track_pane_g1

0x93a6,	// (0x000a6861) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x93a6,	// (0x000a6861) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000ad275) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000ad275) list_single_sp_fs_schedule_track_pane_g

0x93b2,	// (0x000a686d) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x93b2,	// (0x000a686d) list_single_sp_fs_schedule_track_pane_t1

0x93cc,	// (0x000a6887) sp_fs_schedule_track_pane_ParamLimits

0x93cc,	// (0x000a6887) sp_fs_schedule_track_pane

0xc1a7,	// (0x000a9662) sp_fs_schedule_track_pane_g1

0xc1af,	// (0x000a966a) sp_fs_schedule_track_pane_g2

0xc1b7,	// (0x000a9672) sp_fs_schedule_track_pane_g3

0xc1bf,	// (0x000a967a) sp_fs_schedule_track_pane_g4

0xc1c7,	// (0x000a9682) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000ad27a) sp_fs_schedule_track_pane_g

0xe7f6,	// (0x000abcb1) bg_sp_fs_schedule_viewer_highlight_g1

0xb047,	// (0x000a8502) bg_sp_fs_schedule_viewer_highlight_g2

0xe7fe,	// (0x000abcb9) bg_sp_fs_schedule_viewer_highlight_g3

0xe806,	// (0x000abcc1) bg_sp_fs_schedule_viewer_highlight_g4

0xea4a,	// (0x000abf05) bg_sp_fs_schedule_viewer_highlight_g5

0xe816,	// (0x000abcd1) bg_sp_fs_schedule_viewer_highlight_g6

0xe81e,	// (0x000abcd9) bg_sp_fs_schedule_viewer_highlight_g7

0xe826,	// (0x000abce1) bg_sp_fs_schedule_viewer_highlight_g8

0xb027,	// (0x000a84e2) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000ad285) bg_sp_fs_schedule_viewer_highlight_g

0xe26f,	// (0x000ab72a) bg_main_sp_fs_ribbon_pane

0x93dd,	// (0x000a6898) main_sp_fs_ribbon_pane_g1

0xc1cf,	// (0x000a968a) main_sp_fs_ribbon_pane_t1

0x93e6,	// (0x000a68a1) main_sp_fs_ribbon_pane_t2

0xc1de,	// (0x000a9699) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000ad298) main_sp_fs_ribbon_pane_t

0xc1ed,	// (0x000a96a8) main_sp_fs_ribbon_scheduler_pane

0xc1f5,	// (0x000a96b0) bg_main_sp_fs_ribbon_pane_g1

0xc1fe,	// (0x000a96b9) bg_main_sp_fs_ribbon_pane_g2

0xc207,	// (0x000a96c2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000ad29f) bg_main_sp_fs_ribbon_pane_g

0xc20f,	// (0x000a96ca) main_sp_fs_ribbon_scheduler_pane_g1

0xc218,	// (0x000a96d3) main_sp_fs_ribbon_scheduler_pane_g2

0xc221,	// (0x000a96dc) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000ad2a6) main_sp_fs_ribbon_scheduler_pane_g

0xc22a,	// (0x000a96e5) list_cale_mrui_pane

0x93f5,	// (0x000a68b0) sp_fs_scroll_pane_cp07_ParamLimits

0x93f5,	// (0x000a68b0) sp_fs_scroll_pane_cp07

0x9411,	// (0x000a68cc) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9411,	// (0x000a68cc) bg_sp_fs_schedule_viewer_highlight

0xc237,	// (0x000a96f2) list_single_sp_fs_schedule_track_pane_cp01

0xc23f,	// (0x000a96fa) list_sp_fs_schedule_track_pane

0xc247,	// (0x000a9702) sp_fs_scroll_pane_cp06_ParamLimits

0xc247,	// (0x000a9702) sp_fs_scroll_pane_cp06

0xdc95,	// (0x000ab150) bgmain_sp_fs_calendar_pane_g1

0x9421,	// (0x000a68dc) list_single_cale_mrui_pane_ParamLimits

0x9421,	// (0x000a68dc) list_single_cale_mrui_pane

0xedc8,	// (0x000ac283) list_single_cale_mrui_row_pane_ParamLimits

0xedc8,	// (0x000ac283) list_single_cale_mrui_row_pane

0xedd5,	// (0x000ac290) list_single_cale_mrui_row_pane_g1_ParamLimits

0xedd5,	// (0x000ac290) list_single_cale_mrui_row_pane_g1

0xee0d,	// (0x000ac2c8) list_single_cale_mrui_row_pane_t1_ParamLimits

0xee0d,	// (0x000ac2c8) list_single_cale_mrui_row_pane_t1

0x9442,	// (0x000a68fd) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9442,	// (0x000a68fd) list_single_cale_mrui_row_pane_t2

0xee1f,	// (0x000ac2da) list_single_cale_mrui_row_pane_t3_ParamLimits

0xee1f,	// (0x000ac2da) list_single_cale_mrui_row_pane_t3

0xee4e,	// (0x000ac309) list_single_cale_mrui_row_pane_t4_ParamLimits

0xee4e,	// (0x000ac309) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000ad2b4) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000ad2b4) list_single_cale_mrui_row_pane_t

0x94aa,	// (0x000a6965) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x94aa,	// (0x000a6965) list_single_cmail_header_editor_pane_bg_cp01

0x94d0,	// (0x000a698b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x94d0,	// (0x000a698b) list_single_cmail_header_editor_pane_bg_cp02

0x94f0,	// (0x000a69ab) main_radioblah_text_pane_t1_ParamLimits

0x94f0,	// (0x000a69ab) main_radioblah_text_pane_t1

0xc266,	// (0x000a9721) cam6_indi_pane_cp01

0xc26e,	// (0x000a9729) cam6_mode_pane_cp01

0xc276,	// (0x000a9731) cam6_pano_pane

0xc27f,	// (0x000a973a) cam6_zoom_pane_cp01

0xc287,	// (0x000a9742) cam6_pano_image_pane

0xc292,	// (0x000a974d) cam6_pano_pane_g1

0x835e,	// (0x000a5819) cam6_pano_pane_g2

0xc29b,	// (0x000a9756) cam6_pano_pane_g3

0xc2a4,	// (0x000a975f) cam6_pano_pane_g4

0xe33b,	// (0x000ab7f6) cam6_pano_pane_g5

0xc2ad,	// (0x000a9768) cam6_pano_pane_g6

0xc2b7,	// (0x000a9772) cam6_pano_pane_g7

0xc2bf,	// (0x000a977a) cam6_pano_pane_g8

0xc2c8,	// (0x000a9783) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000ad2bd) cam6_pano_pane_g

0xe26f,	// (0x000ab72a) main_browser_tag_pane

0xc126,	// (0x000a95e1) grid_navstr_albumart_pane

0xc2d3,	// (0x000a978e) cell_navstr_albumart_pane_ParamLimits

0xc2d3,	// (0x000a978e) cell_navstr_albumart_pane

0xc2f3,	// (0x000a97ae) cell_navstr_albumart_pane_g1

0xd69e,	// (0x000aab59) cell_navstr_albumart_pane_g2

0xd6ae,	// (0x000aab69) cell_navstr_albumart_pane_g3

0xd6a6,	// (0x000aab61) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000ad2d0) cell_navstr_albumart_pane_g

0x950a,	// (0x000a69c5) bt_list_pane_ParamLimits

0x950a,	// (0x000a69c5) bt_list_pane

0x951e,	// (0x000a69d9) bt_list_pane_t1

0x952d,	// (0x000a69e8) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000ad2d9) bt_list_pane_t

0xe26f,	// (0x000ab72a) main_cale_prevew_pane

0x953c,	// (0x000a69f7) popup_cale_preview_window_ParamLimits

0x953c,	// (0x000a69f7) popup_cale_preview_window

0xd577,	// (0x000aaa32) bg_popup_preview_window_pane_cp05_ParamLimits

0xd577,	// (0x000aaa32) bg_popup_preview_window_pane_cp05

0xc2fb,	// (0x000a97b6) list_cale_preview_pane_ParamLimits

0xc2fb,	// (0x000a97b6) list_cale_preview_pane

0x9557,	// (0x000a6a12) list_double_cale_preview_pane_ParamLimits

0x9557,	// (0x000a6a12) list_double_cale_preview_pane

0x9569,	// (0x000a6a24) list_single_cale_preview_pane_ParamLimits

0x9569,	// (0x000a6a24) list_single_cale_preview_pane

0x957f,	// (0x000a6a3a) list_single_cale_preview_pane_g1

0x9587,	// (0x000a6a42) list_single_cale_preview_pane_t1_ParamLimits

0x9587,	// (0x000a6a42) list_single_cale_preview_pane_t1

0x959c,	// (0x000a6a57) list_double_cale_preview_pane_g1

0x95a4,	// (0x000a6a5f) list_double_cale_preview_pane_t1_ParamLimits

0x95a4,	// (0x000a6a5f) list_double_cale_preview_pane_t1

0x95b9,	// (0x000a6a74) list_double_cale_preview_pane_t2_ParamLimits

0x95b9,	// (0x000a6a74) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000ad2de) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000ad2de) list_double_cale_preview_pane_t

0xe26f,	// (0x000ab72a) main_ezdial_pane

0xd577,	// (0x000aaa32) main_sp_fs_email_pane_ParamLimits

0x8acd,	// (0x000a5f88) cmail_ddmenu_btn01_pane_ParamLimits

0x8acd,	// (0x000a5f88) cmail_ddmenu_btn01_pane

0x8ae0,	// (0x000a5f9b) cmail_ddmenu_btn02_pane_ParamLimits

0x8ae0,	// (0x000a5f9b) cmail_ddmenu_btn02_pane

0x8b03,	// (0x000a5fbe) cmail_ddmenu_btn03_pane_ParamLimits

0x8b03,	// (0x000a5fbe) cmail_ddmenu_btn03_pane

0x8b29,	// (0x000a5fe4) main_sp_fs_ctrlbar_pane_ParamLimits

0x8b4d,	// (0x000a6008) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x91e5,	// (0x000a66a0) list_cmail_body_pane_ParamLimits

0xc0a6,	// (0x000a9561) bg_button_pane_cp12

0xc0af,	// (0x000a956a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xc0af,	// (0x000a956a) list_single_cmail_header_detail_pane_g3

0xed18,	// (0x000ac1d3) list_single_cmail_header_detail_pane_t2_ParamLimits

0xed18,	// (0x000ac1d3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000ad261) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000ad261) list_single_cmail_header_detail_pane_t

0xed70,	// (0x000ac22b) phacti_term_pane_t2_ParamLimits

0xed70,	// (0x000ac22b) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000ad26b) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000ad26b) phacti_term_pane_t

0xc307,	// (0x000a97c2) aid_size_list_single_double

0x95d1,	// (0x000a6a8c) popup_ezdial_listscroll_window

0x95ed,	// (0x000a6aa8) popup_number_entry_window_cp01

0xa769,	// (0x000a7c24) bg_popup_call_pane_cp09

0xc313,	// (0x000a97ce) ezdial_list_pane

0xc31b,	// (0x000a97d6) scroll_pane_cp23

0xd88d,	// (0x000aad48) bg_button_pane_cp028_ParamLimits

0xd88d,	// (0x000aad48) bg_button_pane_cp028

0x95fb,	// (0x000a6ab6) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x95fb,	// (0x000a6ab6) cmail_ddmenu_btn01_pane_g1

0x9607,	// (0x000a6ac2) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9607,	// (0x000a6ac2) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000ad2e3) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000ad2e3) cmail_ddmenu_btn01_pane_g

0xc323,	// (0x000a97de) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xc323,	// (0x000a97de) cmail_ddmenu_btn01_pane_t1

0xd88d,	// (0x000aad48) bg_button_pane_cp029_ParamLimits

0xd88d,	// (0x000aad48) bg_button_pane_cp029

0x9613,	// (0x000a6ace) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9613,	// (0x000a6ace) cmail_ddmenu_btn02_pane_g1

0x962c,	// (0x000a6ae7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x962c,	// (0x000a6ae7) cmail_ddmenu_btn02_pane_t1

0xd577,	// (0x000aaa32) bg_button_pane_cp031_ParamLimits

0xd577,	// (0x000aaa32) bg_button_pane_cp031

0x9613,	// (0x000a6ace) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9613,	// (0x000a6ace) cmail_ddmenu_btn03_pane_g1

0x962c,	// (0x000a6ae7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x962c,	// (0x000a6ae7) cmail_ddmenu_btn03_pane_t1

0x5ae9,	// (0x000a2fa4) cell_dialer2_keypad_pane_t1_ParamLimits

0x5b03,	// (0x000a2fbe) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5b03,	// (0x000a2fbe) cell_dialer2_keypad_pane_t1_copy1

0x7f60,	// (0x000a541b) ncimui_group_button_pane

0xd577,	// (0x000aaa32) main_sp_fs_calendar_pane_ParamLimits

0x91fa,	// (0x000a66b5) list_single_cmail_header_caption_pane_ParamLimits

0x933b,	// (0x000a67f6) aid_recal_txt_sm_pane

0xe26f,	// (0x000ab72a) mian_recal_day_pane

0xedb6,	// (0x000ac271) popup_sp_fs_cale_preview_window_ParamLimits

0xc338,	// (0x000a97f3) list_recal_day_pane

0xee98,	// (0x000ac353) list_single_recal_day_pane_ParamLimits

0xee98,	// (0x000ac353) list_single_recal_day_pane

0xc35f,	// (0x000a981a) list_single_recal_day_pane_g1_ParamLimits

0xc35f,	// (0x000a981a) list_single_recal_day_pane_g1

0xeeaa,	// (0x000ac365) list_single_recal_day_pane_g2_ParamLimits

0xeeaa,	// (0x000ac365) list_single_recal_day_pane_g2

0xeeb6,	// (0x000ac371) list_single_recal_day_pane_g3_ParamLimits

0xeeb6,	// (0x000ac371) list_single_recal_day_pane_g3

0x9650,	// (0x000a6b0b) list_single_recal_day_pane_g4_ParamLimits

0x9650,	// (0x000a6b0b) list_single_recal_day_pane_g4

0xeec2,	// (0x000ac37d) list_single_recal_day_pane_g5_ParamLimits

0xeec2,	// (0x000ac37d) list_single_recal_day_pane_g5

0xeece,	// (0x000ac389) list_single_recal_day_pane_g6_ParamLimits

0xeece,	// (0x000ac389) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000ad2f2) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000ad2f2) list_single_recal_day_pane_g

0xeee2,	// (0x000ac39d) list_single_recal_day_pane_t1

0xeef4,	// (0x000ac3af) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x000ad2fd) list_single_recal_day_pane_t

0x9668,	// (0x000a6b23) ncimui_query_button_pane_ParamLimits

0x9668,	// (0x000a6b23) ncimui_query_button_pane

0x9678,	// (0x000a6b33) ncimui_query_button_pane_t1_ParamLimits

0x9678,	// (0x000a6b33) ncimui_query_button_pane_t1

0xc36b,	// (0x000a9826) ncimui_query_button_pane_t2_ParamLimits

0xc36b,	// (0x000a9826) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000ad302) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000ad302) ncimui_query_button_pane_t

0x968b,	// (0x000a6b46) query_button_pane_ParamLimits

0x968b,	// (0x000a6b46) query_button_pane

0xe26f,	// (0x000ab72a) bg_button_pane_cp0028

0xc37e,	// (0x000a9839) query_button_pane_t1

0x3b7c,	// (0x000a1037) main_tport_pane_ParamLimits

0x90a9,	// (0x000a6564) bg_popup_window_pane_cp01_ParamLimits

0x90a9,	// (0x000a6564) bg_popup_window_pane_cp01

0x90c4,	// (0x000a657f) heading_pane_cp08_ParamLimits

0x90c4,	// (0x000a657f) heading_pane_cp08

0x90d7,	// (0x000a6592) heading_pane_cp07_ParamLimits

0x90d7,	// (0x000a6592) heading_pane_cp07

0x917e,	// (0x000a6639) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000ad24e) cell_tport_appsw_pane_g

0x3111,	// (0x000a05cc) input_candi_list_open_g1

0xb20a,	// (0x000a86c5) list_cale_time_pane_g6_ParamLimits

0xb20a,	// (0x000a86c5) list_cale_time_pane_g6

0x494d,	// (0x000a1e08) aid_size_touch_calib_1_ParamLimits

0x494d,	// (0x000a1e08) aid_size_touch_calib_1

0x495f,	// (0x000a1e1a) aid_size_touch_calib_2_ParamLimits

0x495f,	// (0x000a1e1a) aid_size_touch_calib_2

0x4977,	// (0x000a1e32) aid_size_touch_calib_3_ParamLimits

0x4977,	// (0x000a1e32) aid_size_touch_calib_3

0x4995,	// (0x000a1e50) aid_size_touch_calib_4_ParamLimits

0x4995,	// (0x000a1e50) aid_size_touch_calib_4

0x49ad,	// (0x000a1e68) main_touch_calib_button_group_pane_ParamLimits

0x49ad,	// (0x000a1e68) main_touch_calib_button_group_pane

0x49c5,	// (0x000a1e80) main_touch_calib_pane_g1_ParamLimits

0x49d7,	// (0x000a1e92) main_touch_calib_pane_g2_ParamLimits

0x49e9,	// (0x000a1ea4) main_touch_calib_pane_g3_ParamLimits

0x49fb,	// (0x000a1eb6) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000acc0c) main_touch_calib_pane_g_ParamLimits

0x4a0d,	// (0x000a1ec8) main_touch_calib_pane_t1_ParamLimits

0x4a27,	// (0x000a1ee2) main_touch_calib_pane_t2_ParamLimits

0x4a41,	// (0x000a1efc) main_touch_calib_pane_t3_ParamLimits

0x4a55,	// (0x000a1f10) main_touch_calib_pane_t4_ParamLimits

0x4a69,	// (0x000a1f24) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000acc15) main_touch_calib_pane_t_ParamLimits

0xe059,	// (0x000ab514) list_single_fp_cale_pane_g3_ParamLimits

0xe059,	// (0x000ab514) list_single_fp_cale_pane_g3

0xa2f2,	// (0x000a77ad) bg_button_pane_cp012_ParamLimits

0xa2f2,	// (0x000a77ad) bg_vkb2_func_pane_cp03_ParamLimits

0x6a74,	// (0x000a3f2f) cell_vitu2_function_top_pane_g1_ParamLimits

0xa2f2,	// (0x000a77ad) bg_vkb2_func_pane_cp04_ParamLimits

0x7eeb,	// (0x000a53a6) main_ncimui_button_group_pane_ParamLimits

0x7eeb,	// (0x000a53a6) main_ncimui_button_group_pane

0x7f4b,	// (0x000a5406) main_ncimui_pane_t3_ParamLimits

0x7f4b,	// (0x000a5406) main_ncimui_pane_t3

0xc13c,	// (0x000a95f7) phacti_button_group_pane

0xc307,	// (0x000a97c2) aid_size_list_single_double_ParamLimits

0x95d1,	// (0x000a6a8c) popup_ezdial_listscroll_window_ParamLimits

0x95ed,	// (0x000a6aa8) popup_number_entry_window_cp01_ParamLimits

0x969e,	// (0x000a6b59) phacti_button_pane_ParamLimits

0x969e,	// (0x000a6b59) phacti_button_pane

0xe26f,	// (0x000ab72a) bg_button_pane_cp14

0xc38c,	// (0x000a9847) phacti_button_pane_t1

0x96af,	// (0x000a6b6a) main_touch_calib_button_pane_ParamLimits

0x96af,	// (0x000a6b6a) main_touch_calib_button_pane

0xa538,	// (0x000a79f3) bg_button_pane_cp18_ParamLimits

0xa538,	// (0x000a79f3) bg_button_pane_cp18

0xc39a,	// (0x000a9855) main_touch_calib_button_pane_t1_ParamLimits

0xc39a,	// (0x000a9855) main_touch_calib_button_pane_t1

0xc3b0,	// (0x000a986b) main_touch_calib_button_pane_t2_ParamLimits

0xc3b0,	// (0x000a986b) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000ad307) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000ad307) main_touch_calib_button_pane_t

0xe26f,	// (0x000ab72a) cell_ncimui_button_pane

0xe26f,	// (0x000ab72a) bg_button_pane_cp032

0xc3ce,	// (0x000a9889) cell_ncimui_button_pane_t1

0xace8,	// (0x000a81a3) image3_infobar_pane_ParamLimits

0xace8,	// (0x000a81a3) image3_infobar_pane

0x868e,	// (0x000a5b49) fs_bigclock_status_pane_ParamLimits

0x868e,	// (0x000a5b49) fs_bigclock_status_pane

0x869b,	// (0x000a5b56) main_fs_bigclock_clock_pane_ParamLimits

0x869b,	// (0x000a5b56) main_fs_bigclock_clock_pane

0x86b9,	// (0x000a5b74) main_fs_bigclock_indi_pane_ParamLimits

0x86b9,	// (0x000a5b74) main_fs_bigclock_indi_pane

0x86eb,	// (0x000a5ba6) main_fs_bigclock_swipe_pane_ParamLimits

0x86eb,	// (0x000a5ba6) main_fs_bigclock_swipe_pane

0xe26f,	// (0x000ab72a) main_fs_clock_dumped_data

0x872a,	// (0x000a5be5) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x872a,	// (0x000a5be5) list_single_fs_bigclock_indicator_pane_g1

0xbb00,	// (0x000a8fbb) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xbb00,	// (0x000a8fbb) list_single_fs_bigclock_indicator_pane_g2

0xbb1a,	// (0x000a8fd5) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xbb1a,	// (0x000a8fd5) list_single_fs_bigclock_indicator_pane_g3

0xbb34,	// (0x000a8fef) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xbb34,	// (0x000a8fef) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000ad12f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000ad12f) list_single_fs_bigclock_indicator_pane_g

0xbb5f,	// (0x000a901a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xbb5f,	// (0x000a901a) list_single_fs_bigclock_indicator_pane_t1

0xbb87,	// (0x000a9042) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xbb87,	// (0x000a9042) list_single_fs_bigclock_indicator_pane_t2

0xbbaf,	// (0x000a906a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xbbaf,	// (0x000a906a) list_single_fs_bigclock_indicator_pane_t3

0xbbd7,	// (0x000a9092) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xbbd7,	// (0x000a9092) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000ad13a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000ad13a) list_single_fs_bigclock_indicator_pane_t

0xc3dc,	// (0x000a9897) image3_infobar_fav_pane_ParamLimits

0xc3dc,	// (0x000a9897) image3_infobar_fav_pane

0xc3ec,	// (0x000a98a7) image3_infobar_loc_pane_ParamLimits

0xc3ec,	// (0x000a98a7) image3_infobar_loc_pane

0xc400,	// (0x000a98bb) image3_infobar_time_pane_ParamLimits

0xc400,	// (0x000a98bb) image3_infobar_time_pane

0xdc95,	// (0x000ab150) image3_infobar_time_pane_g1

0xc410,	// (0x000a98cb) image3_infobar_time_pane_t1

0xdc95,	// (0x000ab150) image3_infobar_loc_pane_g1

0xc41e,	// (0x000a98d9) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000ad30c) image3_infobar_loc_pane_g

0xc426,	// (0x000a98e1) image3_infobar_loc_pane_t1

0xdc95,	// (0x000ab150) image3_infobar_fav_pane_g1

0xc434,	// (0x000a98ef) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000ad311) image3_infobar_fav_pane_g

0xc43c,	// (0x000a98f7) fs_bigclock_status_battery_pane

0xc445,	// (0x000a9900) fs_bigclock_status_signal_pane

0xc44e,	// (0x000a9909) fs_bigclock_status_title_pane

0xc457,	// (0x000a9912) fs_bigclock_status_signal_pane_g1

0xc460,	// (0x000a991b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000ad316) fs_bigclock_status_signal_pane_g

0xc468,	// (0x000a9923) fs_bigclock_status_battery_pane_g1

0xc471,	// (0x000a992c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000ad31b) fs_bigclock_status_battery_pane_g

0xc479,	// (0x000a9934) fs_bigclock_status_title_pane_t1

0x96c4,	// (0x000a6b7f) main_fs_bigclock_clock_pane_g1

0x96c4,	// (0x000a6b7f) main_fs_bigclock_clock_pane_g2

0x96d5,	// (0x000a6b90) main_fs_bigclock_clock_pane_g3

0x96d5,	// (0x000a6b90) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000ad320) main_fs_bigclock_clock_pane_g

0x96e8,	// (0x000a6ba3) main_fs_bigclock_clock_pane_t1

0x96fe,	// (0x000a6bb9) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000ad329) main_fs_bigclock_clock_pane_t

0xc487,	// (0x000a9942) list_single_fs_bigclock_indicator_pane_ParamLimits

0xc487,	// (0x000a9942) list_single_fs_bigclock_indicator_pane

0xc498,	// (0x000a9953) list_single_fs_bigclock_pane_ParamLimits

0xc498,	// (0x000a9953) list_single_fs_bigclock_pane

0xc4be,	// (0x000a9979) main_fs_bigclock_indicator_pane_t1

0xc4cd,	// (0x000a9988) list_single_fs_bigclock_pane_g1

0xc4d5,	// (0x000a9990) list_single_fs_bigclock_pane_t1

0xdc95,	// (0x000ab150) main_fs_bigclock_swipe_pane_g1

0xc518,	// (0x000a99d3) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000ad33a) main_fs_bigclock_swipe_pane_g

0xc520,	// (0x000a99db) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xc520,	// (0x000a99db) main_fs_bigclock_swipe_pane_t1

0x2a21,	// (0x0009fedc) call_type_pane_ParamLimits

0xe26f,	// (0x000ab72a) main_btmg_pane

0xee01,	// (0x000ac2bc) list_single_cale_mrui_row_pane_g2_ParamLimits

0xee01,	// (0x000ac2bc) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000ad2ad) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000ad2ad) list_single_cale_mrui_row_pane_g

0xee87,	// (0x000ac342) list_recal_vselct_arw_lo_pane

0xc357,	// (0x000a9812) list_recal_vselct_arw_up_pane

0xee8f,	// (0x000ac34a) list_recal_vselct_pane

0x9758,	// (0x000a6c13) btmg_button_pane

0x9762,	// (0x000a6c1d) main_btmg_pane_g1

0xe26f,	// (0x000ab72a) bg_button_pane_cp044

0xc53d,	// (0x000a99f8) btmg_button_pane_t1

0xd879,	// (0x000aad34) aid_listscroll_gen

0xd577,	// (0x000aaa32) main_cntbar_detail_pane

0xc088,	// (0x000a9543) list_cmail_folder_pane

0xc8ae,	// (0x000a9d69) sp_fs_scroll_pane_cp03_ParamLimits

0x976c,	// (0x000a6c27) list_single_fs_dyc_pane_cp01_ParamLimits

0x976c,	// (0x000a6c27) list_single_fs_dyc_pane_cp01

0xc54b,	// (0x000a9a06) aid_size_cmail_indent

0xef06,	// (0x000ac3c1) list_single_dyc_row_pane_cp01

0x97b3,	// (0x000a6c6e) cntbar_detail_list_pane_ParamLimits

0x97b3,	// (0x000a6c6e) cntbar_detail_list_pane

0x97ff,	// (0x000a6cba) main_cntbar_detail_cont_pane_ParamLimits

0x97ff,	// (0x000a6cba) main_cntbar_detail_cont_pane

0xc8ae,	// (0x000a9d69) scroll_pane_cp032_ParamLimits

0xc8ae,	// (0x000a9d69) scroll_pane_cp032

0x9813,	// (0x000a6cce) cntbar_detail_list_event_pane_ParamLimits

0x9813,	// (0x000a6cce) cntbar_detail_list_event_pane

0x97c3,	// (0x000a6c7e) cntbar_detail_list_shct_pane

0xb095,	// (0x000a8550) aid_list_gen

0xc554,	// (0x000a9a0f) aid_scroll

0xc55d,	// (0x000a9a18) aid_size_touch_scroll_bar

0x716c,	// (0x000a4627) aid_list_double

0x9823,	// (0x000a6cde) aid_list_single

0x716c,	// (0x000a4627) aid_list_single_lg

0x982c,	// (0x000a6ce7) aid_list_z_g_a_sm

0x9834,	// (0x000a6cef) aid_list_z_g_d

0x983c,	// (0x000a6cf7) aid_txt_z_prm

0x984a,	// (0x000a6d05) aid_txt_z_prm_cp01

0x9858,	// (0x000a6d13) aid_txt_z_sec

0x9866,	// (0x000a6d21) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9866,	// (0x000a6d21) main_cntbar_detail_cont_pane_g1

0x987a,	// (0x000a6d35) main_cntbar_detail_cont_pane_g2_ParamLimits

0x987a,	// (0x000a6d35) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000ad33f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000ad33f) main_cntbar_detail_cont_pane_g

0xc566,	// (0x000a9a21) main_cntbar_detail_cont_pane_t1

0xc574,	// (0x000a9a2f) main_cntbar_detail_cont_pane_t2

0xc582,	// (0x000a9a3d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000ad344) main_cntbar_detail_cont_pane_t

0x988a,	// (0x000a6d45) cell_cntbar_detail_list_shct_pane_ParamLimits

0x988a,	// (0x000a6d45) cell_cntbar_detail_list_shct_pane

0xc590,	// (0x000a9a4b) cntbar_detail_list_shct_pane_g1

0xc599,	// (0x000a9a54) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000ad34b) cntbar_detail_list_shct_pane_g

0x989e,	// (0x000a6d59) cntbar_detail_list_event_pane_g1_ParamLimits

0x989e,	// (0x000a6d59) cntbar_detail_list_event_pane_g1

0x98aa,	// (0x000a6d65) cntbar_detail_list_event_pane_g2_ParamLimits

0x98aa,	// (0x000a6d65) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000ad350) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000ad350) cntbar_detail_list_event_pane_g

0x9916,	// (0x000a6dd1) cntbar_detail_list_event_pane_t1_ParamLimits

0x9916,	// (0x000a6dd1) cntbar_detail_list_event_pane_t1

0x992b,	// (0x000a6de6) cntbar_detail_list_event_pane_t2_ParamLimits

0x992b,	// (0x000a6de6) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000ad35d) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000ad35d) cntbar_detail_list_event_pane_t

0xdc95,	// (0x000ab150) cell_cntbar_detail_list_shct_pane_g1

0xb800,	// (0x000a8cbb) navi_pane_mv_g3

0xd577,	// (0x000aaa32) main_cntbar_detail_pane_ParamLimits

0xe26f,	// (0x000ab72a) main_notif_wgt_pane

0xaafe,	// (0x000a7fb9) aid_tch_main_mp4_pane_g4

0xace0,	// (0x000a819b) popup_slider_window_cp02

0xee7d,	// (0x000ac338) list_recal_day_event_pane

0x9781,	// (0x000a6c3c) cntbar_detail_btn_pane_ParamLimits

0x9781,	// (0x000a6c3c) cntbar_detail_btn_pane

0x979a,	// (0x000a6c55) cntbar_detail_btn_pane_cp01_ParamLimits

0x979a,	// (0x000a6c55) cntbar_detail_btn_pane_cp01

0x97c3,	// (0x000a6c7e) cntbar_detail_list_shct_pane_ParamLimits

0x97d3,	// (0x000a6c8e) cntbar_detail_pane_g1_ParamLimits

0x97d3,	// (0x000a6c8e) cntbar_detail_pane_g1

0x97e3,	// (0x000a6c9e) cntbar_detail_pane_t1_ParamLimits

0x97e3,	// (0x000a6c9e) cntbar_detail_pane_t1

0x98b6,	// (0x000a6d71) cntbar_detail_list_event_pane_g3_ParamLimits

0x98b6,	// (0x000a6d71) cntbar_detail_list_event_pane_g3

0x98ce,	// (0x000a6d89) cntbar_detail_list_event_pane_g4_ParamLimits

0x98ce,	// (0x000a6d89) cntbar_detail_list_event_pane_g4

0x98e6,	// (0x000a6da1) cntbar_detail_list_event_pane_g5_ParamLimits

0x98e6,	// (0x000a6da1) cntbar_detail_list_event_pane_g5

0x98fe,	// (0x000a6db9) cntbar_detail_list_event_pane_g6_ParamLimits

0x98fe,	// (0x000a6db9) cntbar_detail_list_event_pane_g6

0x9940,	// (0x000a6dfb) cntbar_detail_list_event_pane_t3_ParamLimits

0x9940,	// (0x000a6dfb) cntbar_detail_list_event_pane_t3

0x9952,	// (0x000a6e0d) popup_notif_wgt_window_ParamLimits

0x9952,	// (0x000a6e0d) popup_notif_wgt_window

0x996b,	// (0x000a6e26) popup_submenu_window_cp01_ParamLimits

0x996b,	// (0x000a6e26) popup_submenu_window_cp01

0xa769,	// (0x000a7c24) bg_popup_window_pane_cp10

0xc5a2,	// (0x000a9a5d) listscroll_notif_wgt_pane

0xc5b4,	// (0x000a9a6f) list_notif_wgt_window

0xc5bd,	// (0x000a9a78) scroll_pane_cp033

0x9981,	// (0x000a6e3c) list_notif_wgt_row_pane_ParamLimits

0x9981,	// (0x000a6e3c) list_notif_wgt_row_pane

0xc5c6,	// (0x000a9a81) aid_size_list_notif_wgt_del

0xc5d3,	// (0x000a9a8e) list_notif_wgt_row_pane_g1

0xc5df,	// (0x000a9a9a) list_notif_wgt_row_pane_g2

0xc5ee,	// (0x000a9aa9) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000ad364) list_notif_wgt_row_pane_g

0xc5fb,	// (0x000a9ab6) list_notif_wgt_row_pane_t1

0xc611,	// (0x000a9acc) list_notif_wgt_row_pane_t2

0xc623,	// (0x000a9ade) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000ad36b) list_notif_wgt_row_pane_t

0xea64,	// (0x000abf1f) list_recal_day_event_pane_g1

0xc635,	// (0x000a9af0) list_recal_day_event_pane_t1

0xe26f,	// (0x000ab72a) bg_button_pane_cp045

0x9991,	// (0x000a6e4c) cntbar_detail_btn_pane_t1

0xd88d,	// (0x000aad48) main_callh_pane_ParamLimits

0xd88d,	// (0x000aad48) main_callh_pane

0xe26f,	// (0x000ab72a) main_coverflow0_pane

0xe26f,	// (0x000ab72a) main_wgtman_pane

0x8703,	// (0x000a5bbe) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8703,	// (0x000a5bbe) main_fs_bigclock_unlock_btn_pane

0x9176,	// (0x000a6631) bg_button_pane_cp16

0x9186,	// (0x000a6641) cell_tport_appsw_pane_g3

0x999f,	// (0x000a6e5a) cf0_flow_pane_ParamLimits

0x999f,	// (0x000a6e5a) cf0_flow_pane

0xc644,	// (0x000a9aff) listscroll_cf0_pane

0xc64f,	// (0x000a9b0a) main_cf0_pane_g1

0x99b4,	// (0x000a6e6f) main_cf0_pane_t1_ParamLimits

0x99b4,	// (0x000a6e6f) main_cf0_pane_t1

0x99cb,	// (0x000a6e86) main_cf0_pane_t2_ParamLimits

0x99cb,	// (0x000a6e86) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000ad377) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000ad377) main_cf0_pane_t

0xc661,	// (0x000a9b1c) scroll_pane_cp11

0x99e2,	// (0x000a6e9d) cf0_flow_pane_g1

0x99ea,	// (0x000a6ea5) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000ad37c) cf0_flow_pane_g

0x99f2,	// (0x000a6ead) cf0_flow_pane_t1

0xe26f,	// (0x000ab72a) main_call6_pane

0xe26f,	// (0x000ab72a) main_calllock_pane

0x9a00,	// (0x000a6ebb) call6_btn_grp_pane_ParamLimits

0x9a00,	// (0x000a6ebb) call6_btn_grp_pane

0x9a1a,	// (0x000a6ed5) call6_pane_g1_ParamLimits

0x9a1a,	// (0x000a6ed5) call6_pane_g1

0x9a2f,	// (0x000a6eea) popup_call6_1st_window_ParamLimits

0x9a2f,	// (0x000a6eea) popup_call6_1st_window

0x9a40,	// (0x000a6efb) popup_call6_2nd_window_ParamLimits

0x9a40,	// (0x000a6efb) popup_call6_2nd_window

0x9a51,	// (0x000a6f0c) cell_call6_btn_pane_ParamLimits

0x9a51,	// (0x000a6f0c) cell_call6_btn_pane

0xa769,	// (0x000a7c24) bg_popup_call2_in_pane_cp03

0xc66c,	// (0x000a9b27) popup_call6_1st_window_g1

0xc674,	// (0x000a9b2f) popup_call6_1st_window_g2

0xc67c,	// (0x000a9b37) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000ad381) popup_call6_1st_window_g

0xc684,	// (0x000a9b3f) popup_call6_1st_window_t1

0xc693,	// (0x000a9b4e) popup_call6_1st_window_t2

0xc6a3,	// (0x000a9b5e) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000ad388) popup_call6_1st_window_t

0xa769,	// (0x000a7c24) bg_popup_call2_in_pane_cp04

0xc66c,	// (0x000a9b27) popup_call6_2nd_window_g1

0xc674,	// (0x000a9b2f) popup_call6_2nd_window_g2

0xc67c,	// (0x000a9b37) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000ad381) popup_call6_2nd_window_g

0xc684,	// (0x000a9b3f) popup_call6_2nd_window_t1

0xe26f,	// (0x000ab72a) bg_button_pane_cp15

0xc6b3,	// (0x000a9b6e) cell_call6_btn_pane_g1

0xc6bc,	// (0x000a9b77) cell_call6_btn_pane_t1

0x9a65,	// (0x000a6f20) listscroll_wgtman_pane_ParamLimits

0x9a65,	// (0x000a6f20) listscroll_wgtman_pane

0x9a86,	// (0x000a6f41) wgtman_btn_pane_ParamLimits

0x9a86,	// (0x000a6f41) wgtman_btn_pane

0xb607,	// (0x000a8ac2) aid_scroll_copy1

0xc6cb,	// (0x000a9b86) list_wgtman_pane

0x9ac9,	// (0x000a6f84) wgtman_btn_pane_g1_ParamLimits

0x9ac9,	// (0x000a6f84) wgtman_btn_pane_g1

0x9af5,	// (0x000a6fb0) wgtman_btn_pane_t1_ParamLimits

0x9af5,	// (0x000a6fb0) wgtman_btn_pane_t1

0xc6d5,	// (0x000a9b90) wgtman_btn_pane_t2_ParamLimits

0xc6d5,	// (0x000a9b90) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000ad38f) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000ad38f) wgtman_btn_pane_t

0x9b32,	// (0x000a6fed) listrow_wgtman_pane_ParamLimits

0x9b32,	// (0x000a6fed) listrow_wgtman_pane

0x9b44,	// (0x000a6fff) listrow_wgtman_pane_g1

0x9b51,	// (0x000a700c) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000ad394) listrow_wgtman_pane_g

0x9b6f,	// (0x000a702a) listrow_wgtman_pane_t1

0x9b87,	// (0x000a7042) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000ad399) listrow_wgtman_pane_t

0x9bad,	// (0x000a7068) wait_bar_pane_cp09

0xc6ec,	// (0x000a9ba7) main_calllock_btn_pane

0xc6f6,	// (0x000a9bb1) main_calllock_pane_g1

0xe26f,	// (0x000ab72a) bg_button_pane_cp17

0xc702,	// (0x000a9bbd) main_calllock_btn_pane_g1

0xc70b,	// (0x000a9bc6) main_calllock_btn_pane_t1

0xe26f,	// (0x000ab72a) main_dialer3_pane

0xe26f,	// (0x000ab72a) main_fmrd2_pane

0xdc95,	// (0x000ab150) main_fs_bigclock_unlock_btn_pane_g1

0x9bc7,	// (0x000a7082) main_fs_bigclock_unlock_btn_pane_t1

0x9bd5,	// (0x000a7090) area_fmrd2_info_pane_ParamLimits

0x9bd5,	// (0x000a7090) area_fmrd2_info_pane

0x9be6,	// (0x000a70a1) area_fmrd2_visual_pane_ParamLimits

0x9be6,	// (0x000a70a1) area_fmrd2_visual_pane

0x9bf4,	// (0x000a70af) fmrd2_indi_pane_ParamLimits

0x9bf4,	// (0x000a70af) fmrd2_indi_pane

0x9c01,	// (0x000a70bc) area_fmrd2_visual_pane_g1

0x9c09,	// (0x000a70c4) area_fmrd2_visual_pane_t1

0x9c19,	// (0x000a70d4) area_fmrd2_visual_pane_t2

0x9c29,	// (0x000a70e4) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000ad3a3) area_fmrd2_visual_pane_t

0x9c39,	// (0x000a70f4) area_fmrd2_info_pane_g1

0x9c41,	// (0x000a70fc) area_fmrd2_info_pane_t1

0x9c51,	// (0x000a710c) area_fmrd2_info_pane_t2

0x9c61,	// (0x000a711c) area_fmrd2_info_pane_t3

0x9c71,	// (0x000a712c) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000ad3aa) area_fmrd2_info_pane_t

0x9c7f,	// (0x000a713a) fmrd2_indi_pane_t1

0x9c8f,	// (0x000a714a) fmrd2_indi_pane_t2

0x9c9f,	// (0x000a715a) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000ad3b3) fmrd2_indi_pane_t

0xbb43,	// (0x000a8ffe) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xbb43,	// (0x000a8ffe) list_single_fs_bigclock_indicator_pane_g5

0xbdb0,	// (0x000a926b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xbdb0,	// (0x000a926b) list_single_fs_bigclock_indicator_pane_t5

0x931d,	// (0x000a67d8) aid_cell_bcale_month_pane_ParamLimits

0x931d,	// (0x000a67d8) aid_cell_bcale_month_pane

0x9344,	// (0x000a67ff) bcale_month_pane_ParamLimits

0x9344,	// (0x000a67ff) bcale_month_pane

0x9368,	// (0x000a6823) bcale_preview_pane_ParamLimits

0x9368,	// (0x000a6823) bcale_preview_pane

0xc4d5,	// (0x000a9990) list_single_fs_bigclock_pane_t1_ParamLimits

0xc4f4,	// (0x000a99af) list_single_fs_bigclock_pane_t2_ParamLimits

0xc4f4,	// (0x000a99af) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000ad335) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000ad335) list_single_fs_bigclock_pane_t

0x9bbf,	// (0x000a707a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000ad39e) main_fs_bigclock_unlock_btn_pane_g

0x9caf,	// (0x000a716a) aid_dia3_key_size_ParamLimits

0x9caf,	// (0x000a716a) aid_dia3_key_size

0x9cbe,	// (0x000a7179) aid_dia3_listrow_size_ParamLimits

0x9cbe,	// (0x000a7179) aid_dia3_listrow_size

0x9cd3,	// (0x000a718e) dia3_keypad_fun_pane_ParamLimits

0x9cd3,	// (0x000a718e) dia3_keypad_fun_pane

0x9cef,	// (0x000a71aa) dia3_keypad_num_pane_ParamLimits

0x9cef,	// (0x000a71aa) dia3_keypad_num_pane

0x9d0a,	// (0x000a71c5) dia3_listscroll_pane_ParamLimits

0x9d0a,	// (0x000a71c5) dia3_listscroll_pane

0x9d1d,	// (0x000a71d8) dia3_numentry_pane_ParamLimits

0x9d1d,	// (0x000a71d8) dia3_numentry_pane

0xc71a,	// (0x000a9bd5) dia3_list_pane

0xc725,	// (0x000a9be0) scroll_pane_cp12

0xe26f,	// (0x000ab72a) bg_dia3_numentry_pane

0x9d31,	// (0x000a71ec) dia3_numentry_pane_t1

0x9d40,	// (0x000a71fb) cell_dia3_key_num_pane

0x9d48,	// (0x000a7203) cell_dia3_key0_fun_pane_ParamLimits

0x9d48,	// (0x000a7203) cell_dia3_key0_fun_pane

0x9d5c,	// (0x000a7217) cell_dia3_key1_fun_pane_ParamLimits

0x9d5c,	// (0x000a7217) cell_dia3_key1_fun_pane

0x9d74,	// (0x000a722f) dia3_listrow_pane

0x8169,	// (0x000a5624) bg_dia3_numentry_pane_g1

0xe26f,	// (0x000ab72a) bg_button_pane_cp21

0xc730,	// (0x000a9beb) cell_dia3_key_num_pane_t1

0xc73e,	// (0x000a9bf9) cell_dia3_key_num_pane_t2

0xc74d,	// (0x000a9c08) cell_dia3_key_num_pane_t3

0xc75c,	// (0x000a9c17) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000ad3ba) cell_dia3_key_num_pane_t

0xe26f,	// (0x000ab72a) bg_button_pane_cp19

0x9d86,	// (0x000a7241) cell_dia3_key0_fun_pane_g1

0xe26f,	// (0x000ab72a) bg_button_pane_cp20

0x9d8e,	// (0x000a7249) cell_dia3_key1_fun_pane_g1

0x9d96,	// (0x000a7251) area_left_week_number_pane

0x9da2,	// (0x000a725d) area_top_day_name_pane

0x9db5,	// (0x000a7270) frame_month_view_pane

0xc76b,	// (0x000a9c26) grid_month_view_pane

0x9dc8,	// (0x000a7283) cell_top_day_name_pane_ParamLimits

0x9dc8,	// (0x000a7283) cell_top_day_name_pane

0x9df5,	// (0x000a72b0) cell_area_left_week_number_pane_ParamLimits

0x9df5,	// (0x000a72b0) cell_area_left_week_number_pane

0x9e09,	// (0x000a72c4) cell_month_view_pane_ParamLimits

0x9e09,	// (0x000a72c4) cell_month_view_pane

0xc779,	// (0x000a9c34) frm_month_g1

0x9e36,	// (0x000a72f1) frm_month_g2

0x9e49,	// (0x000a7304) frm_month_g3

0x9e5c,	// (0x000a7317) frm_month_g4

0x9e6f,	// (0x000a732a) frm_month_g5

0x9e82,	// (0x000a733d) frm_month_g6

0x9e95,	// (0x000a7350) frm_month_g7

0xc786,	// (0x000a9c41) frm_month_g8

0x9ea8,	// (0x000a7363) frm_month_g9

0x9eb8,	// (0x000a7373) frm_month_g10

0x9ec8,	// (0x000a7383) frm_month_g11

0x9ed8,	// (0x000a7393) frm_month_g12

0x9eea,	// (0x000a73a5) frm_month_g13

0x9efc,	// (0x000a73b7) frm_month_g14

0x9f10,	// (0x000a73cb) frm_month_g15

0x9f24,	// (0x000a73df) frm_month_g16

0x000f,

0xff08,	// (0x000ad3c3) frm_month_g

0xc793,	// (0x000a9c4e) cell_top_day_name_pane_t1

0x9f38,	// (0x000a73f3) cell_area_left_week_number_pane_g1

0x9f44,	// (0x000a73ff) cell_area_left_week_number_pane_t1

0xdf01,	// (0x000ab3bc) cell_month_view_pane_g1

0x9f57,	// (0x000a7412) cell_month_view_pane_t1

0xe26f,	// (0x000ab72a) main_fps_pane

0xbfa0,	// (0x000a945b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xbfa0,	// (0x000a945b) cmail_ddmenu_btn02_pane_cp1

0xbfbc,	// (0x000a9477) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xbfbc,	// (0x000a9477) cmail_ddmenu_btn02_pane_cp2

0x961f,	// (0x000a6ada) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x961f,	// (0x000a6ada) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000ad2e8) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000ad2e8) cmail_ddmenu_btn02_pane_g

0x963e,	// (0x000a6af9) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x963e,	// (0x000a6af9) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000ad2ed) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000ad2ed) cmail_ddmenu_btn02_pane_t

0x9f6a,	// (0x000a7425) fps_text_pane_ParamLimits

0x9f6a,	// (0x000a7425) fps_text_pane

0x9f81,	// (0x000a743c) main_fps_pane_g1_ParamLimits

0x9f81,	// (0x000a743c) main_fps_pane_g1

0x9f9b,	// (0x000a7456) wait_bar_pane_cp010_ParamLimits

0x9f9b,	// (0x000a7456) wait_bar_pane_cp010

0x9fac,	// (0x000a7467) fps_text_pane_t1_ParamLimits

0x9fac,	// (0x000a7467) fps_text_pane_t1

0x5f8f,	// (0x000a344a) cam4_image_uncrop_pane_g1

0x5f98,	// (0x000a3453) cam4_image_uncrop_pane_g2

0x5fa1,	// (0x000a345c) cam4_image_uncrop_pane_g3

0x5faa,	// (0x000a3465) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000acda9) cam4_image_uncrop_pane_g

0x9d74,	// (0x000a722f) dia3_listrow_pane_ParamLimits

0xe26f,	// (0x000ab72a) main_phob2_pane

0x9147,	// (0x000a6602) cell_tport_appsw_pane_cp02_ParamLimits

0x9147,	// (0x000a6602) cell_tport_appsw_pane_cp02

0x915b,	// (0x000a6616) cell_tport_appsw_pane_cp03_ParamLimits

0x915b,	// (0x000a6616) cell_tport_appsw_pane_cp03

0xe26f,	// (0x000ab72a) phob2_contact_card_pane

0xe26f,	// (0x000ab72a) phob2_listscroll_pane

0xc7a6,	// (0x000a9c61) phob2_list_pane

0xc7ae,	// (0x000a9c69) scroll_pane_cp034

0x9fc4,	// (0x000a747f) phob2_cc_data_pane_ParamLimits

0x9fc4,	// (0x000a747f) phob2_cc_data_pane

0x9fe3,	// (0x000a749e) phob2_cc_listscroll_pane_ParamLimits

0x9fe3,	// (0x000a749e) phob2_cc_listscroll_pane

0x9b32,	// (0x000a6fed) list_double_large_graphic_phob2_pane_ParamLimits

0x9b32,	// (0x000a6fed) list_double_large_graphic_phob2_pane

0xa001,	// (0x000a74bc) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa001,	// (0x000a74bc) list_double_large_graphic_phob2_pane_g1

0xa017,	// (0x000a74d2) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xa017,	// (0x000a74d2) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x000ad3e4) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x000ad3e4) list_double_large_graphic_phob2_pane_g

0xa023,	// (0x000a74de) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa023,	// (0x000a74de) list_double_large_graphic_phob2_pane_t1

0xa038,	// (0x000a74f3) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xa038,	// (0x000a74f3) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x000ad3e9) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x000ad3e9) list_double_large_graphic_phob2_pane_t

0xe26f,	// (0x000ab72a) list_highlight_pane_cp024

0xa04a,	// (0x000a7505) phob2_cc_button_pane

0xa052,	// (0x000a750d) phob2_cc_data_pane_g1_ParamLimits

0xa052,	// (0x000a750d) phob2_cc_data_pane_g1

0xa067,	// (0x000a7522) phob2_cc_data_pane_g2_ParamLimits

0xa067,	// (0x000a7522) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x000ad3ee) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x000ad3ee) phob2_cc_data_pane_g

0xa077,	// (0x000a7532) phob2_cc_data_pane_t1_ParamLimits

0xa077,	// (0x000a7532) phob2_cc_data_pane_t1

0xa08f,	// (0x000a754a) phob2_cc_data_pane_t2_ParamLimits

0xa08f,	// (0x000a754a) phob2_cc_data_pane_t2

0xa0a7,	// (0x000a7562) phob2_cc_data_pane_t3_ParamLimits

0xa0a7,	// (0x000a7562) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000ad3f3) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000ad3f3) phob2_cc_data_pane_t

0xc7b6,	// (0x000a9c71) phob2_cc_list_pane_ParamLimits

0xc7b6,	// (0x000a9c71) phob2_cc_list_pane

0xeafb,	// (0x000abfb6) scroll_pane_cp035_ParamLimits

0xeafb,	// (0x000abfb6) scroll_pane_cp035

0xd577,	// (0x000aaa32) bg_button_pane_cp033

0xc7c2,	// (0x000a9c7d) phob2_cc_button_pane_g1

0xc7ce,	// (0x000a9c89) phob2_cc_button_pane_t1

0xc7e3,	// (0x000a9c9e) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000ad3fa) phob2_cc_button_pane_t

0xa0bf,	// (0x000a757a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa0bf,	// (0x000a757a) list_double_large_graphic_phob2_cc_pane

0xa0d1,	// (0x000a758c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa0d1,	// (0x000a758c) list_double_large_graphic_phob2_cc_pane_g1

0xa0dd,	// (0x000a7598) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa0dd,	// (0x000a7598) list_double_large_graphic_phob2_cc_pane_g2

0xa0e9,	// (0x000a75a4) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xa0e9,	// (0x000a75a4) list_double_large_graphic_phob2_cc_pane_g3

0xa0f5,	// (0x000a75b0) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xa0f5,	// (0x000a75b0) list_double_large_graphic_phob2_cc_pane_g4

0xa101,	// (0x000a75bc) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa101,	// (0x000a75bc) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000ad3ff) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000ad3ff) list_double_large_graphic_phob2_cc_pane_g

0xa10d,	// (0x000a75c8) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xa10d,	// (0x000a75c8) list_double_large_graphic_phob2_cc_pane_t1

0xa136,	// (0x000a75f1) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xa136,	// (0x000a75f1) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000ad40a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000ad40a) list_double_large_graphic_phob2_cc_pane_t

0xc7f5,	// (0x000a9cb0) list_highlight_pane_cp025_ParamLimits

0xc7f5,	// (0x000a9cb0) list_highlight_pane_cp025

0xd577,	// (0x000aaa32) bg_button_pane_cp033_ParamLimits

0xc7c2,	// (0x000a9c7d) phob2_cc_button_pane_g1_ParamLimits

0xc7ce,	// (0x000a9c89) phob2_cc_button_pane_t1_ParamLimits

0xc7e3,	// (0x000a9c9e) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000ad3fa) phob2_cc_button_pane_t_ParamLimits

0x0518,	// (0x0009d9d3) popup_wgtman_window

0xe910,	// (0x000abdcb) scroll_pane_cp038

0x9aab,	// (0x000a6f66) wgtman_btn_pane_cp_01_ParamLimits

0x9aab,	// (0x000a6f66) wgtman_btn_pane_cp_01

0xc803,	// (0x000a9cbe) wgtman_content_pane

0xc80c,	// (0x000a9cc7) wgtman_heading_pane

0xe26f,	// (0x000ab72a) bg_heading_pane_cp02

0xc815,	// (0x000a9cd0) wgtman_heading_pane_g1

0xc81d,	// (0x000a9cd8) wgtman_heading_pane_t1

0xc82b,	// (0x000a9ce6) scroll_pane_cp036

0xc833,	// (0x000a9cee) wgtman_list_pane

0xc83b,	// (0x000a9cf6) wgtman_list_pane_t1_ParamLimits

0xc83b,	// (0x000a9cf6) wgtman_list_pane_t1

0xad3a,	// (0x000a81f5) cam4_grid_pane

0x6c54,	// (0x000a410f) bg_button_pane_cp015_ParamLimits

0x6c66,	// (0x000a4121) bg_button_pane_cp016_ParamLimits

0x6c79,	// (0x000a4134) bg_button_pane_cp017_ParamLimits

0x6cd1,	// (0x000a418c) popup_vitu2_query_window_g3_ParamLimits

0x6cd1,	// (0x000a418c) popup_vitu2_query_window_g3

0x6d8e,	// (0x000a4249) popup_vitu2_query_window_t6_ParamLimits

0x6d8e,	// (0x000a4249) popup_vitu2_query_window_t6

0x6db9,	// (0x000a4274) popup_vitu2_query_window_t7_ParamLimits

0x6db9,	// (0x000a4274) popup_vitu2_query_window_t7

0x5f8f,	// (0x000a344a) cam4_grid_pane_g1

0x5f98,	// (0x000a3453) cam4_grid_pane_g2

0xc855,	// (0x000a9d10) cam4_grid_pane_g3

0xc85e,	// (0x000a9d19) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000ad40f) cam4_grid_pane_g

0x1905,	// (0x0009edc0) aid_placing_vt_slider_lsc_ParamLimits

0x1c10,	// (0x0009f0cb) vidtel_button_pane_ParamLimits

0x1c10,	// (0x0009f0cb) vidtel_button_pane

0xe26f,	// (0x000ab72a) bg_button_pane_cp034

0xa15f,	// (0x000a761a) vidtel_button_pane_g1

0xc869,	// (0x000a9d24) vidtel_button_pane_t1

0xea42,	// (0x000abefd) aid_size_vtel_slider_touch

0xeafb,	// (0x000abfb6) scroll_pane_cp039

0x81d8,	// (0x000a5693) ncim_query_button_pane_cp01_ParamLimits

0x81f7,	// (0x000a56b2) ncimui_query_pane_g1_ParamLimits

0xd577,	// (0x000aaa32) input_focus_pane_cp012_ParamLimits

0x821c,	// (0x000a56d7) ncim_query_entry_pane_t1_ParamLimits

0xeafb,	// (0x000abfb6) scroll_pane_cp039_ParamLimits

0xb6eb,	// (0x000a8ba6) navi_pane_bcale_mc_g1

0xb6f3,	// (0x000a8bae) navi_pane_bcale_mc_t1

0xc005,	// (0x000a94c0) main_sp_fs_email_pane_g1

0xc011,	// (0x000a94cc) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000ad1a0) main_sp_fs_email_pane_g

0xc259,	// (0x000a9714) list_single_cale_mrui_row_pane_g3_ParamLimits

0xc259,	// (0x000a9714) list_single_cale_mrui_row_pane_g3

0x965e,	// (0x000a6b19) list_single_recal_day_pane_g5_event_pane

0xeeda,	// (0x000ac395) list_single_recal_day_pane_g7

0xc87f,	// (0x000a9d3a) list_recal_day_event_pane_cp01

0xc888,	// (0x000a9d43) list_recal_vselct_arw_lo_pane_cp01

0xc890,	// (0x000a9d4b) list_recal_vselct_arw_up_pane_cp01

0xc898,	// (0x000a9d53) list_recal_vselct_pane_cp01

0xea64,	// (0x000abf1f) list_recal_day_event_pane_cp01_g1

0xef0f,	// (0x000ac3ca) list_recal_day_event_pane_cp01_t1

0xeee2,	// (0x000ac39d) list_single_recal_day_pane_t1_ParamLimits

0xeef4,	// (0x000ac3af) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x000ad2fd) list_single_recal_day_pane_t_ParamLimits

0xa451,	// (0x000a790c) bg_notes_pane_ParamLimits

0xa4fc,	// (0x000a79b7) list_notes_pane_ParamLimits

0x0d10,	// (0x0009e1cb) scroll_pane_cp06_ParamLimits

0xa538,	// (0x000a79f3) main_notes_pane_ParamLimits

0xe26f,	// (0x000ab72a) main_welc_pane

0xa167,	// (0x000a7622) main_welc_body_pane_ParamLimits

0xa167,	// (0x000a7622) main_welc_body_pane

0xa185,	// (0x000a7640) main_welc_opti_pane_ParamLimits

0xa185,	// (0x000a7640) main_welc_opti_pane

0xa1ca,	// (0x000a7685) main_welc_pane_t1_ParamLimits

0xa1ca,	// (0x000a7685) main_welc_pane_t1

0xa1e8,	// (0x000a76a3) main_welc_body_row_pane_ParamLimits

0xa1e8,	// (0x000a76a3) main_welc_body_row_pane

0xa1fc,	// (0x000a76b7) main_welc_opti_row_pane_ParamLimits

0xa1fc,	// (0x000a76b7) main_welc_opti_row_pane

0xd585,	// (0x000aaa40) main_welc_opti_row_pane_g1

0xa20a,	// (0x000a76c5) main_welc_opti_row_pane_t1

0xd58d,	// (0x000aaa48) main_welc_body_row_pane_t1

0xc5ac,	// (0x000a9a67) popup_notif_wgt_heading_pane

0xc5c6,	// (0x000a9a81) aid_size_list_notif_wgt_del_ParamLimits

0xc5d3,	// (0x000a9a8e) list_notif_wgt_row_pane_g1_ParamLimits

0xc5df,	// (0x000a9a9a) list_notif_wgt_row_pane_g2_ParamLimits

0xc5ee,	// (0x000a9aa9) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000ad364) list_notif_wgt_row_pane_g_ParamLimits

0xc5fb,	// (0x000a9ab6) list_notif_wgt_row_pane_t1_ParamLimits

0xc611,	// (0x000a9acc) list_notif_wgt_row_pane_t2_ParamLimits

0xc623,	// (0x000a9ade) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000ad36b) list_notif_wgt_row_pane_t_ParamLimits

0x9b44,	// (0x000a6fff) listrow_wgtman_pane_g1_ParamLimits

0x9b51,	// (0x000a700c) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000ad394) listrow_wgtman_pane_g_ParamLimits

0x9b6f,	// (0x000a702a) listrow_wgtman_pane_t1_ParamLimits

0x9b87,	// (0x000a7042) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000ad399) listrow_wgtman_pane_t_ParamLimits

0x9bad,	// (0x000a7068) wait_bar_pane_cp09_ParamLimits

0xe26f,	// (0x000ab72a) bg_popup_heading_pane_cp02

0xd59c,	// (0x000aaa57) popup_notif_wgt_heading_pane_g1

0xd5a4,	// (0x000aaa5f) popup_notif_wgt_heading_pane_t1

0xe26f,	// (0x000ab72a) main_vids_pane

0xe26f,	// (0x000ab72a) vids_listscroll_pane

0xa219,	// (0x000a76d4) scroll_pane_cp040

0xe26f,	// (0x000ab72a) vids_list_pane

0xa224,	// (0x000a76df) vids_list_double_pane_ParamLimits

0xa224,	// (0x000a76df) vids_list_double_pane

0xa235,	// (0x000a76f0) vids_list_double_pane_g1

0xa23e,	// (0x000a76f9) vids_list_double_pane_t1

0xa24e,	// (0x000a7709) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000ad41d) vids_list_double_pane_t

0xa2f2,	// (0x000a77ad) main_ncimui_pane_ParamLimits

0x7eff,	// (0x000a53ba) main_ncimui_pane_g1_ParamLimits

0x7f0b,	// (0x000a53c6) main_ncimui_pane_g2_ParamLimits

0x7f0b,	// (0x000a53c6) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x000ad0a5) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x000ad0a5) main_ncimui_pane_g

0xa1a0,	// (0x000a765b) main_welc_pane_g1_ParamLimits

0xa1a0,	// (0x000a765b) main_welc_pane_g1

0xa1b5,	// (0x000a7670) main_welc_pane_g2_ParamLimits

0xa1b5,	// (0x000a7670) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000ad418) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000ad418) main_welc_pane_g

0xa451,	// (0x000a790c) listscroll_mce_pane_ParamLimits

0xb840,	// (0x000a8cfb) wait_bar_pane_cp10

0xd881,	// (0x000aad3c) main_cale_day_pane_ParamLimits

0xd881,	// (0x000aad3c) main_cale_week_pane_ParamLimits

0xa451,	// (0x000a790c) main_messa_pane_ParamLimits

0x52c1,	// (0x000a277c) main_clock2_btn_pane_ParamLimits

0x52c1,	// (0x000a277c) main_clock2_btn_pane

0xe0e1,	// (0x000ab59c) main_clock2_btn_pane_cp01_ParamLimits

0xe0e1,	// (0x000ab59c) main_clock2_btn_pane_cp01

0xc22a,	// (0x000a96e5) list_cale_mrui_pane_ParamLimits

0xc659,	// (0x000a9b14) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000ad372) main_cf0_pane_g

0x9d96,	// (0x000a7251) area_left_week_number_pane_ParamLimits

0x9da2,	// (0x000a725d) area_top_day_name_pane_ParamLimits

0x9db5,	// (0x000a7270) frame_month_view_pane_ParamLimits

0xc76b,	// (0x000a9c26) grid_month_view_pane_ParamLimits

0xc779,	// (0x000a9c34) frm_month_g1_ParamLimits

0x9e36,	// (0x000a72f1) frm_month_g2_ParamLimits

0x9e49,	// (0x000a7304) frm_month_g3_ParamLimits

0x9e5c,	// (0x000a7317) frm_month_g4_ParamLimits

0x9e6f,	// (0x000a732a) frm_month_g5_ParamLimits

0x9e82,	// (0x000a733d) frm_month_g6_ParamLimits

0x9e95,	// (0x000a7350) frm_month_g7_ParamLimits

0xc786,	// (0x000a9c41) frm_month_g8_ParamLimits

0x9ea8,	// (0x000a7363) frm_month_g9_ParamLimits

0x9eb8,	// (0x000a7373) frm_month_g10_ParamLimits

0x9ec8,	// (0x000a7383) frm_month_g11_ParamLimits

0x9ed8,	// (0x000a7393) frm_month_g12_ParamLimits

0x9eea,	// (0x000a73a5) frm_month_g13_ParamLimits

0x9efc,	// (0x000a73b7) frm_month_g14_ParamLimits

0x9f10,	// (0x000a73cb) frm_month_g15_ParamLimits

0x9f24,	// (0x000a73df) frm_month_g16_ParamLimits

0xff08,	// (0x000ad3c3) frm_month_g_ParamLimits

0xc793,	// (0x000a9c4e) cell_top_day_name_pane_t1_ParamLimits

0x9f38,	// (0x000a73f3) cell_area_left_week_number_pane_g1_ParamLimits

0x9f44,	// (0x000a73ff) cell_area_left_week_number_pane_t1_ParamLimits

0xdf01,	// (0x000ab3bc) cell_month_view_pane_g1_ParamLimits

0x9f57,	// (0x000a7412) cell_month_view_pane_t1_ParamLimits

0xa449,	// (0x000a7904) main_clock2_btn_pane_g1

0xd5b2,	// (0x000aaa6d) main_clock2_btn_pane_t1

0xd577,	// (0x000aaa32) listscroll_cmail_pane_ParamLimits

0xc005,	// (0x000a94c0) main_sp_fs_email_pane_g1_ParamLimits

0xc011,	// (0x000a94cc) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000ad1a0) main_sp_fs_email_pane_g_ParamLimits

0xc338,	// (0x000a97f3) list_recal_day_pane_ParamLimits

0xc349,	// (0x000a9804) mian_recal_day_pane_t1

0x8db0,	// (0x000a626b) list_single_dyc_row_text_pane_t4_ParamLimits

0x8db0,	// (0x000a626b) list_single_dyc_row_text_pane_t4

0x8df9,	// (0x000a62b4) list_single_dyc_row_text_pane_t5_ParamLimits

0x8df9,	// (0x000a62b4) list_single_dyc_row_text_pane_t5

0xec65,	// (0x000ac120) list_single_dyc_row_text_pane_t6_ParamLimits

0xec65,	// (0x000ac120) list_single_dyc_row_text_pane_t6

0x288c,	// (0x0009fd47) aid_mgn_list_cale_time_pane

0xa2f2,	// (0x000a77ad) main_gallery2_pane_ParamLimits

0xe0f7,	// (0x000ab5b2) main_clock2_pane_cp01_t1

0xe107,	// (0x000ab5c2) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x000acc7f) main_clock2_pane_cp01_t

0x10ca,	// (0x0009e585) cale_week_scroll_pane_g16_ParamLimits

0x10ca,	// (0x0009e585) cale_week_scroll_pane_g16

0xa769,	// (0x000a7c24) vorec_slider_pane

0xc869,	// (0x000a9d24) vidtel_button_pane_t1_ParamLimits

0x96c4,	// (0x000a6b7f) main_fs_bigclock_clock_pane_g1_ParamLimits

0x96c4,	// (0x000a6b7f) main_fs_bigclock_clock_pane_g2_ParamLimits

0x96d5,	// (0x000a6b90) main_fs_bigclock_clock_pane_g3_ParamLimits

0x96d5,	// (0x000a6b90) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x000ad320) main_fs_bigclock_clock_pane_g_ParamLimits

0x96e8,	// (0x000a6ba3) main_fs_bigclock_clock_pane_t1_ParamLimits

0x96fe,	// (0x000a6bb9) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x000ad329) main_fs_bigclock_clock_pane_t_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
