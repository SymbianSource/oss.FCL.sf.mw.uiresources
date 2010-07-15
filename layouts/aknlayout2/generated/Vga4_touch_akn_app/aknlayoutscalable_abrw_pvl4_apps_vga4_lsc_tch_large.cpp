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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x000adf3d };

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
0xfb2e,	// (0x000ada6b) Screen

0xfb3a,	// (0x000ada77) application_window

0xfba2,	// (0x000adadf) area_bottom_pane_ParamLimits

0xfba2,	// (0x000adadf) area_bottom_pane

0xfc04,	// (0x000adb41) area_top_pane_ParamLimits

0xfc04,	// (0x000adb41) area_top_pane

0xfc61,	// (0x000adb9e) call_video_uplink_pane_ParamLimits

0xfc61,	// (0x000adb9e) call_video_uplink_pane

0xfca6,	// (0x000adbe3) main_pane_ParamLimits

0xfca6,	// (0x000adbe3) main_pane

0xc9e8,	// (0x000ba925) context_pane

0x34e7,	// (0x000b1424) navi_pane

0x351b,	// (0x000b1458) popup_cale_events_window_ParamLimits

0x351b,	// (0x000b1458) popup_cale_events_window

0xc9fb,	// (0x000ba938) popup_mup_playback_window

0x3533,	// (0x000b1470) signal_pane

0x9d8f,	// (0x000b7ccc) main_browser_pane

0xab25,	// (0x000b8a62) main_burst_pane

0x31ef,	// (0x000b112c) main_calc_pane

0xc9ce,	// (0x000ba90b) main_cale_day_pane

0x3203,	// (0x000b1140) main_cale_month_pane

0xc9ce,	// (0x000ba90b) main_cale_week_pane

0xab25,	// (0x000b8a62) main_call_pane

0x9a4d,	// (0x000b798a) main_call_poc_pane

0xab25,	// (0x000b8a62) main_camera_pane

0xab25,	// (0x000b8a62) main_chi_dic_pane

0xb32d,	// (0x000b926a) main_clock_pane

0x9a4d,	// (0x000b798a) main_fmradio_pane

0xab25,	// (0x000b8a62) main_graph_messa_pane

0x9a4d,	// (0x000b798a) main_help_pane

0x9d8f,	// (0x000b7ccc) main_im_pane

0x9ca8,	// (0x000b7be5) main_image_pane_ParamLimits

0x9ca8,	// (0x000b7be5) main_image_pane

0x9a4d,	// (0x000b798a) main_location2_pane

0xab25,	// (0x000b8a62) main_location_pane

0x9ca8,	// (0x000b7be5) main_messa_pane

0x9a4d,	// (0x000b798a) main_mp2_pane

0xab25,	// (0x000b8a62) main_mp_pane

0x9a4d,	// (0x000b798a) main_msg_pane

0x9a4d,	// (0x000b798a) main_mup_eq_pane

0x9a4d,	// (0x000b798a) main_mup_pane

0x9d8f,	// (0x000b7ccc) main_notes_pane

0x9a4d,	// (0x000b798a) main_pec_pane

0x9a4d,	// (0x000b798a) main_phob_pane

0x9a4d,	// (0x000b798a) main_pinb_pane

0x9a4d,	// (0x000b798a) main_postcard_pane

0x9a4d,	// (0x000b798a) main_qdial_pane

0xab25,	// (0x000b8a62) main_skin_pane

0x9a4d,	// (0x000b798a) main_smil2_pane

0xab25,	// (0x000b8a62) main_smil_pane

0xab25,	// (0x000b8a62) main_video_pane

0xab25,	// (0x000b8a62) main_video_tele_pane

0x9ca8,	// (0x000b7be5) main_viewer_pane_ParamLimits

0x9ca8,	// (0x000b7be5) main_viewer_pane

0xab25,	// (0x000b8a62) main_vorec_pane

0x3255,	// (0x000b1192) popup_blid_sat_info_window_ParamLimits

0x3255,	// (0x000b1192) popup_blid_sat_info_window

0x32b9,	// (0x000b11f6) popup_dyc_status_message_window_ParamLimits

0x32b9,	// (0x000b11f6) popup_dyc_status_message_window

0x32d3,	// (0x000b1210) popup_grid_large_graphic_window_ParamLimits

0x32d3,	// (0x000b1210) popup_grid_large_graphic_window

0x3395,	// (0x000b12d2) popup_loc_request_window_ParamLimits

0x3395,	// (0x000b12d2) popup_loc_request_window

0x34bb,	// (0x000b13f8) popup_wml_address_window_ParamLimits

0x34bb,	// (0x000b13f8) popup_wml_address_window

0x302d,	// (0x000b0f6a) call_muted_g1

0x2cbe,	// (0x000b0bfb) popup_call_audio_conf_window_ParamLimits

0x2cbe,	// (0x000b0bfb) popup_call_audio_conf_window

0x303d,	// (0x000b0f7a) popup_call_audio_first_window_ParamLimits

0x303d,	// (0x000b0f7a) popup_call_audio_first_window

0x30b3,	// (0x000b0ff0) popup_call_audio_in_window_ParamLimits

0x30b3,	// (0x000b0ff0) popup_call_audio_in_window

0x30ef,	// (0x000b102c) popup_call_audio_out_window_ParamLimits

0x30ef,	// (0x000b102c) popup_call_audio_out_window

0x3129,	// (0x000b1066) popup_call_audio_second_window_ParamLimits

0x3129,	// (0x000b1066) popup_call_audio_second_window

0x317f,	// (0x000b10bc) popup_call_audio_wait_window_ParamLimits

0x317f,	// (0x000b10bc) popup_call_audio_wait_window

0x31b4,	// (0x000b10f1) popup_number_entry_window_ParamLimits

0x31b4,	// (0x000b10f1) popup_number_entry_window

0x9605,	// (0x000b7542) bg_popup_call_pane_cp05_ParamLimits

0x9605,	// (0x000b7542) bg_popup_call_pane_cp05

0x9625,	// (0x000b7562) popup_number_entry_window_t1

0x9638,	// (0x000b7575) popup_number_entry_window_t2

0x964a,	// (0x000b7587) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x000bcfec) popup_number_entry_window_t

0x9691,	// (0x000b75ce) text_title_cp2

0x96a4,	// (0x000b75e1) bg_popup_call_pane_cp_ParamLimits

0x96a4,	// (0x000b75e1) bg_popup_call_pane_cp

0x96b2,	// (0x000b75ef) call_thumbnail_pane

0x96ba,	// (0x000b75f7) popup_call_audio_in_window_g1_ParamLimits

0x96ba,	// (0x000b75f7) popup_call_audio_in_window_g1

0x96c6,	// (0x000b7603) popup_call_audio_in_window_g2_ParamLimits

0x96c6,	// (0x000b7603) popup_call_audio_in_window_g2

0x96d2,	// (0x000b760f) popup_call_audio_in_window_g3_ParamLimits

0x96d2,	// (0x000b760f) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x000bcff5) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x000bcff5) popup_call_audio_in_window_g

0x96de,	// (0x000b761b) popup_call_audio_in_window_t1_ParamLimits

0x96de,	// (0x000b761b) popup_call_audio_in_window_t1

0x96fa,	// (0x000b7637) popup_call_audio_in_window_t2_ParamLimits

0x96fa,	// (0x000b7637) popup_call_audio_in_window_t2

0x9716,	// (0x000b7653) popup_call_audio_in_window_t3_ParamLimits

0x9716,	// (0x000b7653) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x000bcffc) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x000bcffc) popup_call_audio_in_window_t

0x96a4,	// (0x000b75e1) bg_popup_call_pane_cp01_ParamLimits

0x96a4,	// (0x000b75e1) bg_popup_call_pane_cp01

0x96b2,	// (0x000b75ef) call_thumbnail_pane_cp02

0x9729,	// (0x000b7666) call_type_pane_cp022

0x9731,	// (0x000b766e) popup_call_audio_out_window_g1_ParamLimits

0x9731,	// (0x000b766e) popup_call_audio_out_window_g1

0x9743,	// (0x000b7680) popup_call_audio_out_window_g2_ParamLimits

0x9743,	// (0x000b7680) popup_call_audio_out_window_g2

0x974f,	// (0x000b768c) popup_call_audio_out_window_g3_ParamLimits

0x974f,	// (0x000b768c) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x000bd003) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x000bd003) popup_call_audio_out_window_g

0x9761,	// (0x000b769e) popup_call_audio_out_window_t1_ParamLimits

0x9761,	// (0x000b769e) popup_call_audio_out_window_t1

0x9779,	// (0x000b76b6) popup_call_audio_out_window_t2_ParamLimits

0x9779,	// (0x000b76b6) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x000bd00a) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x000bd00a) popup_call_audio_out_window_t

0x978e,	// (0x000b76cb) bg_popup_call_pane_ParamLimits

0x978e,	// (0x000b76cb) bg_popup_call_pane

0xfe43,	// (0x000add80) call_thumbnail_pane_cp_ParamLimits

0xfe43,	// (0x000add80) call_thumbnail_pane_cp

0x9812,	// (0x000b774f) call_type_pane_cp01_ParamLimits

0x9812,	// (0x000b774f) call_type_pane_cp01

0x9856,	// (0x000b7793) popup_call_audio_first_window_g1_ParamLimits

0x9856,	// (0x000b7793) popup_call_audio_first_window_g1

0x98a2,	// (0x000b77df) popup_call_audio_first_window_g2_ParamLimits

0x98a2,	// (0x000b77df) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x000bd00f) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x000bd00f) popup_call_audio_first_window_g

0x98e6,	// (0x000b7823) popup_call_audio_first_window_t1_ParamLimits

0x98e6,	// (0x000b7823) popup_call_audio_first_window_t1

0x9992,	// (0x000b78cf) popup_call_audio_first_window_t4_ParamLimits

0x9992,	// (0x000b78cf) popup_call_audio_first_window_t4

0x9a1e,	// (0x000b795b) popup_call_audio_first_window_t5_ParamLimits

0x9a1e,	// (0x000b795b) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x000bd014) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x000bd014) popup_call_audio_first_window_t

0x9a4d,	// (0x000b798a) bg_popup_call_pane_cp02

0x9a57,	// (0x000b7994) call_type_pane_cp023

0x9a5f,	// (0x000b799c) popup_call_audio_wait_window_g1

0x9a67,	// (0x000b79a4) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x000bd01b) popup_call_audio_wait_window_g

0x9a6f,	// (0x000b79ac) popup_call_audio_wait_window_t3

0x9a7d,	// (0x000b79ba) bg_popup_call_pane_cp03_ParamLimits

0x9a7d,	// (0x000b79ba) bg_popup_call_pane_cp03

0x9add,	// (0x000b7a1a) call_thumbnail_pane_cp011_ParamLimits

0x9add,	// (0x000b7a1a) call_thumbnail_pane_cp011

0x9ae9,	// (0x000b7a26) call_type_pane_cp034_ParamLimits

0x9ae9,	// (0x000b7a26) call_type_pane_cp034

0x9b25,	// (0x000b7a62) popup_call_audio_second_window_g1_ParamLimits

0x9b25,	// (0x000b7a62) popup_call_audio_second_window_g1

0x9b61,	// (0x000b7a9e) popup_call_audio_second_window_g2_ParamLimits

0x9b61,	// (0x000b7a9e) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x000bd020) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x000bd020) popup_call_audio_second_window_g

0x9b9d,	// (0x000b7ada) popup_call_audio_second_window_t1_ParamLimits

0x9b9d,	// (0x000b7ada) popup_call_audio_second_window_t1

0x9c1e,	// (0x000b7b5b) popup_call_audio_second_window_t2_ParamLimits

0x9c1e,	// (0x000b7b5b) popup_call_audio_second_window_t2

0x9c54,	// (0x000b7b91) popup_call_audio_second_window_t3_ParamLimits

0x9c54,	// (0x000b7b91) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x000bd025) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x000bd025) popup_call_audio_second_window_t

0x9a4d,	// (0x000b798a) bg_popup_call_pane_cp04

0x9c8a,	// (0x000b7bc7) list_conf_pane

0x9c92,	// (0x000b7bcf) popup_call_audio_conf_window_t1

0x9ca0,	// (0x000b7bdd) call_thumbnail_pane_g1

0x9ca8,	// (0x000b7be5) bg_pinb_pane_ParamLimits

0x9ca8,	// (0x000b7be5) bg_pinb_pane

0x9cb6,	// (0x000b7bf3) find_pinb_pane

0x9cbf,	// (0x000b7bfc) listscroll_pinb_pane_ParamLimits

0x9cbf,	// (0x000b7bfc) listscroll_pinb_pane

0x9cce,	// (0x000b7c0b) pinb_bg_pane_g1

0xfe67,	// (0x000adda4) pinb_bg_pane_g2

0xfe73,	// (0x000addb0) pinb_bg_pane_g3

0xfe7f,	// (0x000addbc) pinb_bg_pane_g4

0xfe8b,	// (0x000addc8) pinb_bg_pane_g5

0xfe97,	// (0x000addd4) pinb_bg_pane_g6

0xfea2,	// (0x000adddf) pinb_bg_pane_g7

0xfead,	// (0x000addea) pinb_bg_pane_g8

0xfeb8,	// (0x000addf5) pinb_bg_pane_g9

0xfec2,	// (0x000addff) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x000bd02c) pinb_bg_pane_g

0xfedf,	// (0x000ade1c) grid_pinb_pane

0xfeea,	// (0x000ade27) list_pinb_pane

0xfef5,	// (0x000ade32) scroll_pane_cp01_ParamLimits

0xfef5,	// (0x000ade32) scroll_pane_cp01

0x9cd8,	// (0x000b7c15) find_pinb_pane_g1_ParamLimits

0x9cd8,	// (0x000b7c15) find_pinb_pane_g1

0x9cf0,	// (0x000b7c2d) find_pinb_pane_t1

0x9d02,	// (0x000b7c3f) find_pinb_pane_t2

0x0001,

0xf109,	// (0x000bd046) find_pinb_pane_t

0x9d17,	// (0x000b7c54) input_focus_pane_cp01_ParamLimits

0x9d17,	// (0x000b7c54) input_focus_pane_cp01

0xff07,	// (0x000ade44) cell_pinb_pane_ParamLimits

0xff07,	// (0x000ade44) cell_pinb_pane

0xff29,	// (0x000ade66) cell_pinb_pane_g1_ParamLimits

0xff29,	// (0x000ade66) cell_pinb_pane_g1

0xff3d,	// (0x000ade7a) cell_pinb_pane_g2_ParamLimits

0xff3d,	// (0x000ade7a) cell_pinb_pane_g2

0x9d23,	// (0x000b7c60) cell_pinb_pane_g3_ParamLimits

0x9d23,	// (0x000b7c60) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x000bd04b) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x000bd04b) cell_pinb_pane_g

0x9a4d,	// (0x000b798a) grid_highlight_pane_cp01

0xff49,	// (0x000ade86) list_pinb_item_pane_ParamLimits

0xff49,	// (0x000ade86) list_pinb_item_pane

0x9a4d,	// (0x000b798a) list_highlight_pane_cp02

0xff5c,	// (0x000ade99) list_pinb_item_pane_g1_ParamLimits

0xff5c,	// (0x000ade99) list_pinb_item_pane_g1

0xff69,	// (0x000adea6) list_pinb_item_pane_g2_ParamLimits

0xff69,	// (0x000adea6) list_pinb_item_pane_g2

0xff75,	// (0x000adeb2) list_pinb_item_pane_g3_ParamLimits

0xff75,	// (0x000adeb2) list_pinb_item_pane_g3

0xff86,	// (0x000adec3) list_pinb_item_pane_g4_ParamLimits

0xff86,	// (0x000adec3) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x000bd052) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x000bd052) list_pinb_item_pane_g

0xff92,	// (0x000adecf) list_pinb_item_pane_t1_ParamLimits

0xff92,	// (0x000adecf) list_pinb_item_pane_t1

0xffc9,	// (0x000adf06) calc_display_pane

0xffee,	// (0x000adf2b) calc_paper_pane

0x0011,	// (0x000adf4e) grid_calc_pane

0x9a4d,	// (0x000b798a) bg_list_pane_cp01

0x003f,	// (0x000adf7c) clock_g1

0x0047,	// (0x000adf84) clock_g2

0x0001,

0xf11e,	// (0x000bd05b) clock_g

0x004f,	// (0x000adf8c) clock_t1_ParamLimits

0x004f,	// (0x000adf8c) clock_t1

0x0064,	// (0x000adfa1) clock_t2_ParamLimits

0x0064,	// (0x000adfa1) clock_t2

0x0076,	// (0x000adfb3) clock_t3_ParamLimits

0x0076,	// (0x000adfb3) clock_t3

0x0088,	// (0x000adfc5) clock_t4_ParamLimits

0x0088,	// (0x000adfc5) clock_t4

0x009a,	// (0x000adfd7) clock_t5_ParamLimits

0x009a,	// (0x000adfd7) clock_t5

0x00af,	// (0x000adfec) clock_t6_ParamLimits

0x00af,	// (0x000adfec) clock_t6

0x00c1,	// (0x000adffe) clock_t7_ParamLimits

0x00c1,	// (0x000adffe) clock_t7

0x00d3,	// (0x000ae010) clock_t8_ParamLimits

0x00d3,	// (0x000ae010) clock_t8

0x00e7,	// (0x000ae024) clock_t9_ParamLimits

0x00e7,	// (0x000ae024) clock_t9

0x0008,

0xf123,	// (0x000bd060) clock_t_ParamLimits

0xf123,	// (0x000bd060) clock_t

0x9d37,	// (0x000b7c74) popup_clock_analogue_window_cp02

0x9d37,	// (0x000b7c74) popup_clock_digital_window_cp01

0x9d3f,	// (0x000b7c7c) listscroll_help_pane

0x9a4d,	// (0x000b798a) phob_pre_status_pane

0x9d49,	// (0x000b7c86) grid_qdial_pane

0x9ca8,	// (0x000b7be5) listscroll_mce_pane

0x9ca8,	// (0x000b7be5) bg_notes_pane

0x9d53,	// (0x000b7c90) list_notes_pane

0x00fd,	// (0x000ae03a) scroll_pane_cp06

0x9d61,	// (0x000b7c9e) bg_calc_paper_pane

0x9d75,	// (0x000b7cb2) list_calc_pane

0x9d8f,	// (0x000b7ccc) bg_calc_display_pane

0x0111,	// (0x000ae04e) calc_display_pane_t1

0x0123,	// (0x000ae060) calc_display_pane_t2

0x9d9b,	// (0x000b7cd8) calc_display_pane_t3

0x0002,

0xf136,	// (0x000bd073) calc_display_pane_t

0x0135,	// (0x000ae072) cell_calc_pane_ParamLimits

0x0135,	// (0x000ae072) cell_calc_pane

0x9dad,	// (0x000b7cea) bg_calc_paper_pane_g1

0x9db9,	// (0x000b7cf6) bg_calc_paper_pane_g2

0x9dc5,	// (0x000b7d02) bg_calc_paper_pane_g3

0x9dd1,	// (0x000b7d0e) bg_calc_paper_pane_g4

0x9ddd,	// (0x000b7d1a) bg_calc_paper_pane_g5

0x0170,	// (0x000ae0ad) bg_calc_paper_pane_g6

0x017e,	// (0x000ae0bb) bg_calc_paper_pane_g7

0x018c,	// (0x000ae0c9) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x000bd07a) bg_calc_paper_pane_g

0x019f,	// (0x000ae0dc) calc_bg_paper_pane_g9

0x01b2,	// (0x000ae0ef) list_calc_item_pane_ParamLimits

0x01b2,	// (0x000ae0ef) list_calc_item_pane

0x9de9,	// (0x000b7d26) list_calc_item_pane_g1

0x9df6,	// (0x000b7d33) list_calc_item_pane_t1_ParamLimits

0x9df6,	// (0x000b7d33) list_calc_item_pane_t1

0x01ca,	// (0x000ae107) list_calc_item_pane_t2_ParamLimits

0x01ca,	// (0x000ae107) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x000bd08b) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x000bd08b) list_calc_item_pane_t

0x9e08,	// (0x000b7d45) cell_calc_pane_g1

0x9e12,	// (0x000b7d4f) grid_highlight_pane_cp02

0x01fc,	// (0x000ae139) bg_calc_display_pane_g1

0x0205,	// (0x000ae142) bg_calc_display_pane_g2

0x9e34,	// (0x000b7d71) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x000bd095) bg_calc_display_pane_g

0x020f,	// (0x000ae14c) cell_qdial_pane_ParamLimits

0x020f,	// (0x000ae14c) cell_qdial_pane

0x0223,	// (0x000ae160) cell_qdial_pane_g1_ParamLimits

0x0223,	// (0x000ae160) cell_qdial_pane_g1

0x0239,	// (0x000ae176) cell_qdial_pane_g2_ParamLimits

0x0239,	// (0x000ae176) cell_qdial_pane_g2

0x9e3d,	// (0x000b7d7a) cell_qdial_pane_g3_ParamLimits

0x9e3d,	// (0x000b7d7a) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x000bd09c) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x000bd09c) cell_qdial_pane_g

0x0260,	// (0x000ae19d) cell_qdial_pane_t1_ParamLimits

0x0260,	// (0x000ae19d) cell_qdial_pane_t1

0x0278,	// (0x000ae1b5) cell_qdial_pane_t2_ParamLimits

0x0278,	// (0x000ae1b5) cell_qdial_pane_t2

0x028b,	// (0x000ae1c8) cell_qdial_pane_t3_ParamLimits

0x028b,	// (0x000ae1c8) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x000bd0a5) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x000bd0a5) cell_qdial_pane_t

0x9a4d,	// (0x000b798a) grid_highlight_pane_cp04

0x9e49,	// (0x000b7d86) thumbnail_qdial_pane_ParamLimits

0x9e49,	// (0x000b7d86) thumbnail_qdial_pane

0xaa66,	// (0x000b89a3) list_help_pane

0xaa6f,	// (0x000b89ac) scroll_pane_cp02

0x029e,	// (0x000ae1db) help_list_pane_t1_ParamLimits

0x029e,	// (0x000ae1db) help_list_pane_t1

0x9e7d,	// (0x000b7dba) bg_notes_pane_g2

0x9e85,	// (0x000b7dc2) bg_notes_pane_g3

0x9e8d,	// (0x000b7dca) notes_bg_pane_g1

0x9e95,	// (0x000b7dd2) notes_bg_pane_g4

0x9e9d,	// (0x000b7dda) notes_bg_pane_g5

0x9ea5,	// (0x000b7de2) notes_bg_pane_g6

0x9ead,	// (0x000b7dea) notes_bg_pane_g7

0x9eb5,	// (0x000b7df2) notes_bg_pane_g8

0x9ebd,	// (0x000b7dfa) notes_bg_pane_g9

0x0006,

0xf186,	// (0x000bd0c3) notes_bg_pane_g

0x02c2,	// (0x000ae1ff) list_notes_text_pane_ParamLimits

0x02c2,	// (0x000ae1ff) list_notes_text_pane

0xaa78,	// (0x000b89b5) list_notes_text_pane_g1

0x02d9,	// (0x000ae216) list_notes_text_pane_t1

0x02e7,	// (0x000ae224) listscroll_cale_week_pane

0x0311,	// (0x000ae24e) bg_cale_heading_pane

0x0335,	// (0x000ae272) bg_cale_pane_cp01

0x0352,	// (0x000ae28f) cale_week_corner_pane

0x0371,	// (0x000ae2ae) cale_week_day_heading_pane

0x039a,	// (0x000ae2d7) cale_week_scroll_pane_g1

0x03b9,	// (0x000ae2f6) cale_week_scroll_pane_g2

0x03d1,	// (0x000ae30e) cale_week_scroll_pane_g3

0x03e9,	// (0x000ae326) cale_week_scroll_pane_g4

0x0401,	// (0x000ae33e) cale_week_scroll_pane_g5

0x0421,	// (0x000ae35e) cale_week_scroll_pane_g6

0x0441,	// (0x000ae37e) cale_week_scroll_pane_g7

0x0465,	// (0x000ae3a2) cale_week_scroll_pane_g8

0x0489,	// (0x000ae3c6) cale_week_scroll_pane_g9

0x04a1,	// (0x000ae3de) cale_week_scroll_pane_g10

0x04b9,	// (0x000ae3f6) cale_week_scroll_pane_g11

0x04d1,	// (0x000ae40e) cale_week_scroll_pane_g12

0x04f5,	// (0x000ae432) cale_week_scroll_pane_g13

0x04f5,	// (0x000ae432) cale_week_scroll_pane_g14

0x04f5,	// (0x000ae432) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x000bd0d2) cale_week_scroll_pane_g

0x053d,	// (0x000ae47a) cale_week_time_pane

0x0561,	// (0x000ae49e) grid_cale_week_pane

0xaaad,	// (0x000b89ea) scroll_pane_cp08

0x0593,	// (0x000ae4d0) cell_cale_week_pane_ParamLimits

0x0593,	// (0x000ae4d0) cell_cale_week_pane

0x062f,	// (0x000ae56c) cale_week_day_heading_pane_t1

0x0659,	// (0x000ae596) cale_week_day_heading_pane_t2

0x0688,	// (0x000ae5c5) cale_week_day_heading_pane_t3

0x06b7,	// (0x000ae5f4) cale_week_day_heading_pane_t4

0x06e6,	// (0x000ae623) cale_week_day_heading_pane_t5

0x0719,	// (0x000ae656) cale_week_day_heading_pane_t6

0x0750,	// (0x000ae68d) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x000bd0f3) cale_week_day_heading_pane_t

0xaaca,	// (0x000b8a07) bg_cale_side_pane

0x077a,	// (0x000ae6b7) cale_week_time_pane_t1

0x0794,	// (0x000ae6d1) cale_week_time_pane_t2

0x07ae,	// (0x000ae6eb) cale_week_time_pane_t3

0x07c8,	// (0x000ae705) cale_week_time_pane_t4

0x07e2,	// (0x000ae71f) cale_week_time_pane_t5

0x07fc,	// (0x000ae739) cale_week_time_pane_t6

0x081c,	// (0x000ae759) cale_week_time_pane_t7

0x0842,	// (0x000ae77f) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x000bd102) cale_week_time_pane_t

0x0868,	// (0x000ae7a5) cell_cale_week_pane_g2

0x088c,	// (0x000ae7c9) cell_cale_week_pane_g3_ParamLimits

0x088c,	// (0x000ae7c9) cell_cale_week_pane_g3

0xaad8,	// (0x000b8a15) grid_highlight_pane_cp07

0xaae0,	// (0x000b8a1d) listscroll_gms_pane

0xaaea,	// (0x000b8a27) grid_gms_pane

0xaaf3,	// (0x000b8a30) listscroll_gms_pane_g1

0xaafb,	// (0x000b8a38) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x000bd113) listscroll_gms_pane_g

0x08a4,	// (0x000ae7e1) scroll_pane_cp010

0x08af,	// (0x000ae7ec) cell_gms_pane_ParamLimits

0x08af,	// (0x000ae7ec) cell_gms_pane

0x08c6,	// (0x000ae803) cell_gms_pane_g1

0xab03,	// (0x000b8a40) cell_gms_pane_g2

0xab0b,	// (0x000b8a48) cell_gms_pane_g3

0xab14,	// (0x000b8a51) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x000bd118) cell_gms_pane_g

0xab1d,	// (0x000b8a5a) grid_highlight_pane_cp09

0x2fd5,	// (0x000b0f12) phob_pre_status_pane_g1

0x2fdd,	// (0x000b0f1a) phob_pre_status_pane_g2

0x2fe5,	// (0x000b0f22) phob_pre_status_pane_g3

0x2fed,	// (0x000b0f2a) phob_pre_status_pane_g4

0x0004,

0xf5c6,	// (0x000bd503) phob_pre_status_pane_g

0x2ffd,	// (0x000b0f3a) phob_pre_status_pane_t1

0x300d,	// (0x000b0f4a) phob_pre_status_pane_t2

0x301d,	// (0x000b0f5a) phob_pre_status_pane_t3

0x0002,

0xf5d1,	// (0x000bd50e) phob_pre_status_pane_t

0xab25,	// (0x000b8a62) bg_list_pane_cp05

0x08d6,	// (0x000ae813) grid_vorec_pane

0x08e0,	// (0x000ae81d) vorec_t1

0x08ee,	// (0x000ae82b) vorec_t2

0x08fc,	// (0x000ae839) vorec_t3

0x090a,	// (0x000ae847) vorec_t4

0x95a4,	// (0x000b74e1) vorec_t5

0x95b2,	// (0x000b74ef) vorec_t6

0x0004,

0xf1e4,	// (0x000bd121) vorec_t

0x95c0,	// (0x000b74fd) wait_bar_pane_cp01

0xab2d,	// (0x000b8a6a) cell_vorec_pane_ParamLimits

0xab2d,	// (0x000b8a6a) cell_vorec_pane

0x9ec5,	// (0x000b7e02) cell_vorec_pane_g1

0x9a4d,	// (0x000b798a) grid_highlight_pane_cp05

0x093c,	// (0x000ae879) cams_zoom_pane

0x094b,	// (0x000ae888) image_vga_pane

0x0965,	// (0x000ae8a2) main_camera_pane_g1

0x0977,	// (0x000ae8b4) main_camera_pane_g2

0x0987,	// (0x000ae8c4) main_camera_pane_g3

0x099b,	// (0x000ae8d8) main_camera_pane_g4

0x09af,	// (0x000ae8ec) main_camera_pane_g5

0x09c3,	// (0x000ae900) main_camera_pane_g6

0x09d7,	// (0x000ae914) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x000bd12c) main_camera_pane_g

0x09eb,	// (0x000ae928) main_camera_pane_t1

0x0a01,	// (0x000ae93e) main_camera_pane_t2

0x0001,

0xf200,	// (0x000bd13d) main_camera_pane_t

0x0a3f,	// (0x000ae97c) cams_zoom_pane_cp_ParamLimits

0x0a3f,	// (0x000ae97c) cams_zoom_pane_cp

0x0a67,	// (0x000ae9a4) image_cif_pane_ParamLimits

0x0a67,	// (0x000ae9a4) image_cif_pane

0x0aa2,	// (0x000ae9df) image_subqcif_pane

0x0aac,	// (0x000ae9e9) main_video_pane_g1_ParamLimits

0x0aac,	// (0x000ae9e9) main_video_pane_g1

0x0ad0,	// (0x000aea0d) main_video_pane_g2_ParamLimits

0x0ad0,	// (0x000aea0d) main_video_pane_g2

0x0b06,	// (0x000aea43) main_video_pane_g3_ParamLimits

0x0b06,	// (0x000aea43) main_video_pane_g3

0x0b34,	// (0x000aea71) main_video_pane_g4_ParamLimits

0x0b34,	// (0x000aea71) main_video_pane_g4

0x0b62,	// (0x000aea9f) main_video_pane_g5_ParamLimits

0x0b62,	// (0x000aea9f) main_video_pane_g5

0xab4e,	// (0x000b8a8b) main_video_pane_g6_ParamLimits

0xab4e,	// (0x000b8a8b) main_video_pane_g6

0x0006,

0xf205,	// (0x000bd142) main_video_pane_g_ParamLimits

0xf205,	// (0x000bd142) main_video_pane_g

0x0b8b,	// (0x000aeac8) main_video_pane_t1_ParamLimits

0x0b8b,	// (0x000aeac8) main_video_pane_t1

0xab68,	// (0x000b8aa5) cams_zoom_pane_g1

0xab71,	// (0x000b8aae) cams_zoom_pane_g2

0xab7a,	// (0x000b8ab7) cams_zoom_pane_g3

0xab83,	// (0x000b8ac0) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x000bd151) cams_zoom_pane_g

0x0be8,	// (0x000aeb25) grid_cams_pane

0x0c02,	// (0x000aeb3f) linegrid_cams_pane

0x0c14,	// (0x000aeb51) cell_cams_pane_ParamLimits

0x0c14,	// (0x000aeb51) cell_cams_pane

0xab8c,	// (0x000b8ac9) cams_burst_image_pane

0xab94,	// (0x000b8ad1) cell_cams_pane_g1

0x9a4d,	// (0x000b798a) grid_highlight_pane_cp03

0x9e08,	// (0x000b7d45) mp_bg_pane_g1

0x9a4d,	// (0x000b798a) bg_list_pane_cp03

0xc8f1,	// (0x000ba82e) bg_mp_pane

0xc8f9,	// (0x000ba836) grid_mp_pane

0xc901,	// (0x000ba83e) media_player_g1

0xc90b,	// (0x000ba848) media_player_t1

0xc919,	// (0x000ba856) media_player_t2

0xc927,	// (0x000ba864) media_player_t3

0xc935,	// (0x000ba872) media_player_t4

0xc943,	// (0x000ba880) media_player_t5

0xc951,	// (0x000ba88e) media_player_t6

0xc95f,	// (0x000ba89c) media_player_t7

0x0006,

0xf5b0,	// (0x000bd4ed) media_player_t

0xc96d,	// (0x000ba8aa) wait_bar_pane_cp02

0xf595,	// (0x000bd4d2) main_usb_pane_t

0x2fcc,	// (0x000b0f09) cell_mp_pane

0x9e08,	// (0x000b7d45) cell_mp_pane_g1

0x9a4d,	// (0x000b798a) grid_highlight_pane_cp06

0xab9c,	// (0x000b8ad9) grid_skin_colour_pane

0xaba4,	// (0x000b8ae1) list_highlight_pane_cp03

0x0d2f,	// (0x000aec6c) skin_g1

0xabac,	// (0x000b8ae9) skin_t1

0xabbb,	// (0x000b8af8) skin_t2

0x0001,

0xf249,	// (0x000bd186) skin_t

0x0d39,	// (0x000aec76) cell_skin_colour_pane_ParamLimits

0x0d39,	// (0x000aec76) cell_skin_colour_pane

0xabc9,	// (0x000b8b06) cell_skin_colour_pane_g1

0x0dac,	// (0x000aece9) call_video_g1_ParamLimits

0x0dac,	// (0x000aece9) call_video_g1

0x0dc8,	// (0x000aed05) call_video_g2_ParamLimits

0x0dc8,	// (0x000aed05) call_video_g2

0x0001,

0xf24e,	// (0x000bd18b) call_video_g_ParamLimits

0xf24e,	// (0x000bd18b) call_video_g

0x0e0d,	// (0x000aed4a) call_video_uplink_pane_cp1_ParamLimits

0x0e0d,	// (0x000aed4a) call_video_uplink_pane_cp1

0xabdb,	// (0x000b8b18) call_video_uplink_pane_cp2

0x0eae,	// (0x000aedeb) video_down_crop_pane_ParamLimits

0x0eae,	// (0x000aedeb) video_down_crop_pane

0x0f97,	// (0x000aeed4) video_down_pane_ParamLimits

0x0f97,	// (0x000aeed4) video_down_pane

0xabe3,	// (0x000b8b20) video_down_subqcif_pane_ParamLimits

0xabe3,	// (0x000b8b20) video_down_subqcif_pane

0xabfd,	// (0x000b8b3a) video_down_subqcif_pane_cp_ParamLimits

0xabfd,	// (0x000b8b3a) video_down_subqcif_pane_cp

0xac25,	// (0x000b8b62) im_reading_pane_ParamLimits

0xac25,	// (0x000b8b62) im_reading_pane

0x10a2,	// (0x000aefdf) im_writing_pane_ParamLimits

0x10a2,	// (0x000aefdf) im_writing_pane

0x10c0,	// (0x000aeffd) im_reading_pane_t1

0xac3f,	// (0x000b8b7c) list_im_pane

0xac50,	// (0x000b8b8d) scroll_pane_cp07

0x10ff,	// (0x000af03c) im_writing_pane_t1_ParamLimits

0x10ff,	// (0x000af03c) im_writing_pane_t1

0xac69,	// (0x000b8ba6) im_writing_pane_t2_ParamLimits

0xac69,	// (0x000b8ba6) im_writing_pane_t2

0x0001,

0xf258,	// (0x000bd195) im_writing_pane_t_ParamLimits

0xf258,	// (0x000bd195) im_writing_pane_t

0x9a4d,	// (0x000b798a) input_focus_pane_cp04

0x9a4d,	// (0x000b798a) input_focus_pane_cp05

0x1114,	// (0x000af051) list_im_single_pane_ParamLimits

0x1114,	// (0x000af051) list_im_single_pane

0x112d,	// (0x000af06a) list_single_im_pane_t1

0x2f8c,	// (0x000b0ec9) blid_accuracy_pane

0x2f94,	// (0x000b0ed1) blid_compass_pane

0x2f9e,	// (0x000b0edb) main_location_t1

0x2fae,	// (0x000b0eeb) main_location_t2

0x2fbe,	// (0x000b0efb) main_location_t3

0x0002,

0xf5bf,	// (0x000bd4fc) main_location_t

0x9a4d,	// (0x000b798a) aid_levels_location

0x9e08,	// (0x000b7d45) blid_accuracy_pane_g1

0x9e08,	// (0x000b7d45) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x000bd1f7) blid_accuracy_pane_g

0xacb1,	// (0x000b8bee) wml_content_pane

0xacef,	// (0x000b8c2c) wml_button_pane_ParamLimits

0xacef,	// (0x000b8c2c) wml_button_pane

0x113c,	// (0x000af079) wml_list_single_large_pane_ParamLimits

0x113c,	// (0x000af079) wml_list_single_large_pane

0x1155,	// (0x000af092) wml_list_single_medium_pane_ParamLimits

0x1155,	// (0x000af092) wml_list_single_medium_pane

0x116f,	// (0x000af0ac) wml_list_single_small_pane_ParamLimits

0x116f,	// (0x000af0ac) wml_list_single_small_pane

0xad03,	// (0x000b8c40) wml_selection_box_pane_ParamLimits

0xad03,	// (0x000b8c40) wml_selection_box_pane

0xad16,	// (0x000b8c53) wml_list_single_pane_t1

0xad25,	// (0x000b8c62) wml_list_single_medium_pane_t1

0xad34,	// (0x000b8c71) wml_list_single_large_pane_t1

0xad43,	// (0x000b8c80) input_focus_pane_cp02_ParamLimits

0xad43,	// (0x000b8c80) input_focus_pane_cp02

0xad56,	// (0x000b8c93) wml_selection_box_pane_g1

0xad5f,	// (0x000b8c9c) wml_selection_box_pane_t1_ParamLimits

0xad5f,	// (0x000b8c9c) wml_selection_box_pane_t1

0x9ca8,	// (0x000b7be5) bg_wml_button_pane_ParamLimits

0x9ca8,	// (0x000b7be5) bg_wml_button_pane

0xad77,	// (0x000b8cb4) wml_button_pane_g1

0xad7f,	// (0x000b8cbc) wml_button_pane_t1

0xad77,	// (0x000b8cb4) wml_button_bg_pane_g1

0xad8f,	// (0x000b8ccc) wml_button_bg_pane_g2

0xad97,	// (0x000b8cd4) wml_button_bg_pane_g3

0xad9f,	// (0x000b8cdc) wml_button_bg_pane_g4

0xada7,	// (0x000b8ce4) wml_button_bg_pane_g5

0xadaf,	// (0x000b8cec) wml_button_bg_pane_g6

0xadb7,	// (0x000b8cf4) wml_button_bg_pane_g7

0xadbf,	// (0x000b8cfc) wml_button_bg_pane_g8

0xadc7,	// (0x000b8d04) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x000bd19a) wml_button_bg_pane_g

0x118e,	// (0x000af0cb) bg_list_pane_cp02

0xadcf,	// (0x000b8d0c) mce_header_pane_ParamLimits

0xadcf,	// (0x000b8d0c) mce_header_pane

0xade5,	// (0x000b8d22) mce_icon_pane

0xade5,	// (0x000b8d22) mce_image_pane

0xadee,	// (0x000b8d2b) mce_text_pane_ParamLimits

0xadee,	// (0x000b8d2b) mce_text_pane

0x1198,	// (0x000af0d5) scroll_pane_cp03

0xace7,	// (0x000b8c24) scroll_pane_cp04

0xae01,	// (0x000b8d3e) scroll_pane_cp05_ParamLimits

0xae01,	// (0x000b8d3e) scroll_pane_cp05

0x11a2,	// (0x000af0df) mce_header_field_pane_ParamLimits

0x11a2,	// (0x000af0df) mce_header_field_pane

0x11bb,	// (0x000af0f8) mce_header_field_pane_2_ParamLimits

0x11bb,	// (0x000af0f8) mce_header_field_pane_2

0x11d1,	// (0x000af10e) mce_header_field_pane_3

0x11d9,	// (0x000af116) list_single_mce_message_pane_ParamLimits

0x11d9,	// (0x000af116) list_single_mce_message_pane

0x11f5,	// (0x000af132) list_single_mce_smart_pane_ParamLimits

0x11f5,	// (0x000af132) list_single_mce_smart_pane

0xae0d,	// (0x000b8d4a) input_focus_pane_cp03

0xae16,	// (0x000b8d53) list_header_data_pane

0x121c,	// (0x000af159) mce_header_field_pane_t1

0x122c,	// (0x000af169) list_single_mce_header_pane_ParamLimits

0x122c,	// (0x000af169) list_single_mce_header_pane

0xae1e,	// (0x000b8d5b) list_single_mce_header_pane_t1

0xae2d,	// (0x000b8d6a) list_single_mce_message_pane_g1

0xae35,	// (0x000b8d72) list_single_mce_message_pane_t1

0x1266,	// (0x000af1a3) bg_cale_heading_pane_cp01_ParamLimits

0x1266,	// (0x000af1a3) bg_cale_heading_pane_cp01

0xae43,	// (0x000b8d80) bg_cale_pane_cp02_ParamLimits

0xae43,	// (0x000b8d80) bg_cale_pane_cp02

0x12b8,	// (0x000af1f5) cale_month_corner_pane

0x12d7,	// (0x000af214) cale_month_day_heading_pane_ParamLimits

0x12d7,	// (0x000af214) cale_month_day_heading_pane

0x1341,	// (0x000af27e) cale_month_pane_g1_ParamLimits

0x1341,	// (0x000af27e) cale_month_pane_g1

0x1388,	// (0x000af2c5) cale_month_pane_g2_ParamLimits

0x1388,	// (0x000af2c5) cale_month_pane_g2

0x13c4,	// (0x000af301) cale_month_pane_g3_ParamLimits

0x13c4,	// (0x000af301) cale_month_pane_g3

0x1418,	// (0x000af355) cale_month_pane_g4_ParamLimits

0x1418,	// (0x000af355) cale_month_pane_g4

0x146c,	// (0x000af3a9) cale_month_pane_g5_ParamLimits

0x146c,	// (0x000af3a9) cale_month_pane_g5

0x14c8,	// (0x000af405) cale_month_pane_g6_ParamLimits

0x14c8,	// (0x000af405) cale_month_pane_g6

0x1530,	// (0x000af46d) cale_month_pane_g7_ParamLimits

0x1530,	// (0x000af46d) cale_month_pane_g7

0x159c,	// (0x000af4d9) cale_month_pane_g8_ParamLimits

0x159c,	// (0x000af4d9) cale_month_pane_g8

0x1608,	// (0x000af545) cale_month_pane_g9_ParamLimits

0x1608,	// (0x000af545) cale_month_pane_g9

0x166c,	// (0x000af5a9) cale_month_pane_g10_ParamLimits

0x166c,	// (0x000af5a9) cale_month_pane_g10

0x16be,	// (0x000af5fb) cale_month_pane_g11_ParamLimits

0x16be,	// (0x000af5fb) cale_month_pane_g11

0x1710,	// (0x000af64d) cale_month_pane_g12_ParamLimits

0x1710,	// (0x000af64d) cale_month_pane_g12

0x1768,	// (0x000af6a5) cale_month_pane_g13_ParamLimits

0x1768,	// (0x000af6a5) cale_month_pane_g13

0x000c,

0xf270,	// (0x000bd1ad) cale_month_pane_g_ParamLimits

0xf270,	// (0x000bd1ad) cale_month_pane_g

0x17c0,	// (0x000af6fd) cale_month_week_pane

0x17e4,	// (0x000af721) grid_cale_month_pane_ParamLimits

0x17e4,	// (0x000af721) grid_cale_month_pane

0x1845,	// (0x000af782) cale_month_day_heading_pane_t1

0x18cb,	// (0x000af808) cale_month_day_heading_pane_t2

0x1944,	// (0x000af881) cale_month_day_heading_pane_t3

0x19bd,	// (0x000af8fa) cale_month_day_heading_pane_t4

0x1a3e,	// (0x000af97b) cale_month_day_heading_pane_t5

0x1ac7,	// (0x000afa04) cale_month_day_heading_pane_t6

0x1b58,	// (0x000afa95) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x000bd1c8) cale_month_day_heading_pane_t

0xaaca,	// (0x000b8a07) bg_cale_side_pane_cp01

0x1be9,	// (0x000afb26) cale_month_week_pane_t1

0x1c02,	// (0x000afb3f) cale_month_week_pane_t2

0x1c1b,	// (0x000afb58) cale_month_week_pane_t3

0x1c34,	// (0x000afb71) cale_month_week_pane_t4

0x1c4d,	// (0x000afb8a) cale_month_week_pane_t5

0x1c66,	// (0x000afba3) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x000bd1d7) cale_month_week_pane_t

0x1c8b,	// (0x000afbc8) cell_cale_month_pane_ParamLimits

0x1c8b,	// (0x000afbc8) cell_cale_month_pane

0x9ecf,	// (0x000b7e0c) cell_cale_month_pane_g1

0x1dff,	// (0x000afd3c) cell_cale_month_pane_t1_ParamLimits

0x1dff,	// (0x000afd3c) cell_cale_month_pane_t1

0xaad8,	// (0x000b8a15) grid_highlight_pane_cp08

0x9e08,	// (0x000b7d45) main_smil_g1

0x1e2b,	// (0x000afd68) smil_status_pane

0xae82,	// (0x000b8dbf) smil_text_pane

0xc80f,	// (0x000ba74c) bg_popup_call3_rect_pane_g8

0xc817,	// (0x000ba754) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x000bd490) bg_popup_call3_rect_pane_g

0xca75,	// (0x000ba9b2) smil_status_volume_pane_g1

0xae8c,	// (0x000b8dc9) smil_status_pane_t1

0xa0a6,	// (0x000b7fe3) volume_smil_pane

0xaea3,	// (0x000b8de0) list_smil_text_pane

0x1e40,	// (0x000afd7d) scroll_pane_cp011

0x1e4b,	// (0x000afd88) smil_text_list_pane_t1_ParamLimits

0x1e4b,	// (0x000afd88) smil_text_list_pane_t1

0x9edb,	// (0x000b7e18) aid_volume_smil_ParamLimits

0x9edb,	// (0x000b7e18) aid_volume_smil

0x9e08,	// (0x000b7d45) smil_volume_pane_g1

0x9e08,	// (0x000b7d45) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x000bd1f7) smil_volume_pane_g

0x02e7,	// (0x000ae224) listscroll_cale_day_pane

0xaead,	// (0x000b8dea) bg_cale_pane

0xaec5,	// (0x000b8e02) list_cale_pane

0xaee8,	// (0x000b8e25) scroll_pane_cp09

0xaef9,	// (0x000b8e36) cale_bg_pane_g1

0xaf01,	// (0x000b8e3e) cale_bg_pane_g2

0xaf09,	// (0x000b8e46) cale_bg_pane_g3

0xaf11,	// (0x000b8e4e) cale_bg_pane_g4

0xaf19,	// (0x000b8e56) cale_bg_pane_g5

0xaf21,	// (0x000b8e5e) cale_bg_pane_g6

0xaf29,	// (0x000b8e66) cale_bg_pane_g7

0xaf31,	// (0x000b8e6e) cale_bg_pane_g8

0xaf39,	// (0x000b8e76) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x000bd1fc) cale_bg_pane_g

0x1e9e,	// (0x000afddb) list_cale_time_pane_ParamLimits

0x1e9e,	// (0x000afddb) list_cale_time_pane

0xaf41,	// (0x000b8e7e) list_cale_time_pane_g1_ParamLimits

0xaf41,	// (0x000b8e7e) list_cale_time_pane_g1

0xaf4d,	// (0x000b8e8a) list_cale_time_pane_g2_ParamLimits

0xaf4d,	// (0x000b8e8a) list_cale_time_pane_g2

0x1eb8,	// (0x000afdf5) list_cale_time_pane_g3_ParamLimits

0x1eb8,	// (0x000afdf5) list_cale_time_pane_g3

0x1ec6,	// (0x000afe03) list_cale_time_pane_g4_ParamLimits

0x1ec6,	// (0x000afe03) list_cale_time_pane_g4

0x1ed4,	// (0x000afe11) list_cale_time_pane_g5_ParamLimits

0x1ed4,	// (0x000afe11) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x000bd20f) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x000bd20f) list_cale_time_pane_g

0xaf67,	// (0x000b8ea4) list_cale_time_pane_t1_ParamLimits

0xaf67,	// (0x000b8ea4) list_cale_time_pane_t1

0xaf8f,	// (0x000b8ecc) list_cale_time_pane_t2_ParamLimits

0xaf8f,	// (0x000b8ecc) list_cale_time_pane_t2

0x2285,	// (0x000b01c2) aid_blid_cardinal_pane

0x22c7,	// (0x000b0204) compass_pane_t4

0xafb7,	// (0x000b8ef4) list_cale_time_pane_t4_ParamLimits

0xafb7,	// (0x000b8ef4) list_cale_time_pane_t4

0x22d5,	// (0x000b0212) compass_pane_t5

0x22e5,	// (0x000b0222) compass_pane_t6

0x22f3,	// (0x000b0230) compass_pane_t7

0xb447,	// (0x000b9384) navi_pane_cc_t1

0xb626,	// (0x000b9563) aid_phob_thumbnail_center_pane

0x294f,	// (0x000b088c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x000bd21c) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x000bd21c) list_cale_time_pane_t

0x96a4,	// (0x000b75e1) bg_popup_window_pane_cp02_ParamLimits

0x96a4,	// (0x000b75e1) bg_popup_window_pane_cp02

0xafdf,	// (0x000b8f1c) heading_pane_cp01_ParamLimits

0xafdf,	// (0x000b8f1c) heading_pane_cp01

0xafeb,	// (0x000b8f28) loc_req_pane_ParamLimits

0xafeb,	// (0x000b8f28) loc_req_pane

0xaffb,	// (0x000b8f38) loc_type_pane_ParamLimits

0xaffb,	// (0x000b8f38) loc_type_pane

0xb00d,	// (0x000b8f4a) loc_type_pane_t1_ParamLimits

0xb00d,	// (0x000b8f4a) loc_type_pane_t1

0xb01f,	// (0x000b8f5c) loc_type_pane_t2_ParamLimits

0xb01f,	// (0x000b8f5c) loc_type_pane_t2

0xb031,	// (0x000b8f6e) loc_type_pane_t3_ParamLimits

0xb031,	// (0x000b8f6e) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x000bd223) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x000bd223) loc_type_pane_t

0xb043,	// (0x000b8f80) list_loc_req_pane

0xb04d,	// (0x000b8f8a) scroll_pane_cp012

0x1ee2,	// (0x000afe1f) list_single_loc_request_popup_menu_pane_ParamLimits

0x1ee2,	// (0x000afe1f) list_single_loc_request_popup_menu_pane

0xb058,	// (0x000b8f95) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb058,	// (0x000b8f95) list_single_loc_request_popup_menu_pane_g1

0xb064,	// (0x000b8fa1) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb064,	// (0x000b8fa1) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x000bd22a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x000bd22a) list_single_loc_request_popup_menu_pane_g

0xb070,	// (0x000b8fad) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb070,	// (0x000b8fad) list_single_loc_request_popup_menu_pane_t1

0x9ca8,	// (0x000b7be5) bg_popup_window_pane_cp03_ParamLimits

0x9ca8,	// (0x000b7be5) bg_popup_window_pane_cp03

0xb086,	// (0x000b8fc3) heading_loc_req_pane_ParamLimits

0xb086,	// (0x000b8fc3) heading_loc_req_pane

0x1eef,	// (0x000afe2c) popup_dyc_status_message_window_g1_ParamLimits

0x1eef,	// (0x000afe2c) popup_dyc_status_message_window_g1

0x1f03,	// (0x000afe40) popup_dyc_status_message_window_t1_ParamLimits

0x1f03,	// (0x000afe40) popup_dyc_status_message_window_t1

0x1f18,	// (0x000afe55) popup_dyc_status_message_window_t2_ParamLimits

0x1f18,	// (0x000afe55) popup_dyc_status_message_window_t2

0x1f2d,	// (0x000afe6a) popup_dyc_status_message_window_t3_ParamLimits

0x1f2d,	// (0x000afe6a) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x000bd22f) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x000bd22f) popup_dyc_status_message_window_t

0x9a4d,	// (0x000b798a) bg_heading_pane_cp01

0xb092,	// (0x000b8fcf) heading_loc_req_pane_g1

0xb09a,	// (0x000b8fd7) heading_loc_req_pane_g2

0xb0a2,	// (0x000b8fdf) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x000bd236) heading_loc_req_pane_g

0xb0aa,	// (0x000b8fe7) heading_loc_req_pane_t1

0xb0c6,	// (0x000b9003) bg_popup_sub_pane_cp01_ParamLimits

0xb0c6,	// (0x000b9003) bg_popup_sub_pane_cp01

0xb0d4,	// (0x000b9011) popup_cale_events_window_g1_ParamLimits

0xb0d4,	// (0x000b9011) popup_cale_events_window_g1

0xb0f4,	// (0x000b9031) popup_cale_events_window_g2_ParamLimits

0xb0f4,	// (0x000b9031) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x000bd26a) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x000bd26a) popup_cale_events_window_g

0xb114,	// (0x000b9051) popup_cale_events_window_t1_ParamLimits

0xb114,	// (0x000b9051) popup_cale_events_window_t1

0xb126,	// (0x000b9063) popup_cale_events_window_t2_ParamLimits

0xb126,	// (0x000b9063) popup_cale_events_window_t2

0xb164,	// (0x000b90a1) popup_cale_events_window_t3_ParamLimits

0xb164,	// (0x000b90a1) popup_cale_events_window_t3

0xb19e,	// (0x000b90db) popup_cale_events_window_t4_ParamLimits

0xb19e,	// (0x000b90db) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x000bd26f) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x000bd26f) popup_cale_events_window_t

0x2030,	// (0x000aff6d) call_type_pane

0x2040,	// (0x000aff7d) popup_call_status_window_g1

0x2054,	// (0x000aff91) popup_call_status_window_g2

0x2068,	// (0x000affa5) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x000bd278) popup_call_status_window_g

0xb1d4,	// (0x000b9111) call_type_pane_g1

0xb1dd,	// (0x000b911a) call_type_pane_g2

0x0001,

0xf342,	// (0x000bd27f) call_type_pane_g

0x9a4d,	// (0x000b798a) bg_popup_sub_pane_cp02

0xb1e6,	// (0x000b9123) listscroll_popup_wml_pane

0xb1ee,	// (0x000b912b) list_wml_pane

0xb1f8,	// (0x000b9135) scroll_pane_cp013

0xb203,	// (0x000b9140) list_single_graphic_popup_wml_pane_ParamLimits

0xb203,	// (0x000b9140) list_single_graphic_popup_wml_pane

0x9e08,	// (0x000b7d45) list_single_graphic_popup_wml_pane_g1

0xb217,	// (0x000b9154) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x000bd284) list_single_graphic_popup_wml_pane_g

0xb21f,	// (0x000b915c) list_single_graphic_popup_wml_pane_t1

0xb235,	// (0x000b9172) aid_call_pane

0x9ca0,	// (0x000b7bdd) popup_clock_analogue_window_g1

0x9ca0,	// (0x000b7bdd) popup_clock_analogue_window_g2

0x9efd,	// (0x000b7e3a) popup_clock_analogue_window_g3

0x9efd,	// (0x000b7e3a) popup_clock_analogue_window_g4

0x9e08,	// (0x000b7d45) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x000bd289) popup_clock_analogue_window_g

0x9f05,	// (0x000b7e42) popup_clock_analogue_window_t1

0x9f13,	// (0x000b7e50) clock_digital_number_pane_ParamLimits

0x9f13,	// (0x000b7e50) clock_digital_number_pane

0x9f1f,	// (0x000b7e5c) clock_digital_number_pane_cp02_ParamLimits

0x9f1f,	// (0x000b7e5c) clock_digital_number_pane_cp02

0x9f2b,	// (0x000b7e68) clock_digital_number_pane_cp03_ParamLimits

0x9f2b,	// (0x000b7e68) clock_digital_number_pane_cp03

0x9f37,	// (0x000b7e74) clock_digital_number_pane_cp04_ParamLimits

0x9f37,	// (0x000b7e74) clock_digital_number_pane_cp04

0x9f43,	// (0x000b7e80) clock_digital_separator_pane_ParamLimits

0x9f43,	// (0x000b7e80) clock_digital_separator_pane

0x9f4f,	// (0x000b7e8c) popup_clock_digital_window_t1

0x9e08,	// (0x000b7d45) clock_digital_number_pane_g1

0x9e08,	// (0x000b7d45) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x000bd1f7) clock_digital_number_pane_g

0x9e08,	// (0x000b7d45) clock_digital_separator_pane_g1

0x9e08,	// (0x000b7d45) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x000bd1f7) clock_digital_separator_pane_g

0x9a4d,	// (0x000b798a) bg_popup_window_pane_cp04

0xb23d,	// (0x000b917a) heading_pane_cp03

0xb245,	// (0x000b9182) listscroll_popup_gms_pane

0xb24d,	// (0x000b918a) grid_large_graphic_popup_pane

0xb257,	// (0x000b9194) listscroll_popup_gms_pane_g1

0xb25f,	// (0x000b919c) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x000bd294) listscroll_popup_gms_pane_g

0xace7,	// (0x000b8c24) scroll_pane_cp014

0x2078,	// (0x000affb5) cell_large_graphic_popup_pane_ParamLimits

0x2078,	// (0x000affb5) cell_large_graphic_popup_pane

0x2090,	// (0x000affcd) cell_large_graphic_popup_pane_g1_ParamLimits

0x2090,	// (0x000affcd) cell_large_graphic_popup_pane_g1

0xb267,	// (0x000b91a4) cell_large_graphic_popup_pane_g2_ParamLimits

0xb267,	// (0x000b91a4) cell_large_graphic_popup_pane_g2

0xb273,	// (0x000b91b0) cell_large_graphic_popup_pane_g3_ParamLimits

0xb273,	// (0x000b91b0) cell_large_graphic_popup_pane_g3

0xb280,	// (0x000b91bd) cell_large_graphic_popup_pane_g4_ParamLimits

0xb280,	// (0x000b91bd) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x000bd299) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x000bd299) cell_large_graphic_popup_pane_g

0xb290,	// (0x000b91cd) grid_highlight_pane_cp010

0x9e08,	// (0x000b7d45) bg_popup_call_pane_g1

0xb29a,	// (0x000b91d7) list_single_graphic_popup_conf_pane_ParamLimits

0xb29a,	// (0x000b91d7) list_single_graphic_popup_conf_pane

0xb2ac,	// (0x000b91e9) list_highlight_pane_cp01

0xb2b5,	// (0x000b91f2) list_single_graphic_popup_conf_pane_g1

0xb2bd,	// (0x000b91fa) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x000bd2a2) list_single_graphic_popup_conf_pane_g

0xb2c5,	// (0x000b9202) list_single_graphic_popup_conf_pane_t1

0xb2d3,	// (0x000b9210) linegrid_cams_pane_g1

0x209c,	// (0x000affd9) linegrid_cams_pane_g2

0xab0b,	// (0x000b8a48) linegrid_cams_pane_g3

0xb2dc,	// (0x000b9219) linegrid_cams_pane_g4

0x20a5,	// (0x000affe2) linegrid_cams_pane_g5

0x20ae,	// (0x000affeb) linegrid_cams_pane_g6

0xab14,	// (0x000b8a51) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x000bd2a7) linegrid_cams_pane_g

0xb2e5,	// (0x000b9222) popup_clock_analogue_window

0xb2e5,	// (0x000b9222) popup_clock_digital_window

0x9a4d,	// (0x000b798a) popup_phob_thumbnail_window

0x9e08,	// (0x000b7d45) call_video_uplink_pane_g1

0xb2ee,	// (0x000b922b) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x000bd2b6) call_video_uplink_pane_g

0xb2f6,	// (0x000b9233) video_uplink_pane

0xb2fe,	// (0x000b923b) mce_image_pane_g1

0x20b9,	// (0x000afff6) mce_image_pane_g2

0x20c3,	// (0x000b0000) mce_image_pane_g3

0x20cd,	// (0x000b000a) mce_image_pane_g4

0x20d5,	// (0x000b0012) mce_image_pane_g5

0x0004,

0xf37e,	// (0x000bd2bb) mce_image_pane_g

0xb308,	// (0x000b9245) control_top_pane_stacon_cp01_ParamLimits

0xb308,	// (0x000b9245) control_top_pane_stacon_cp01

0xb31c,	// (0x000b9259) uni_indicator_pane_stacon_cp01_ParamLimits

0xb31c,	// (0x000b9259) uni_indicator_pane_stacon_cp01

0xb32d,	// (0x000b926a) bg_popup_sub_pane_cp03

0x20dd,	// (0x000b001a) chi_dic_find_pane

0x20e5,	// (0x000b0022) listscroll_chi_dic_pane

0x20ee,	// (0x000b002b) main_pane_chidic_g1

0x2101,	// (0x000b003e) chi_dic_find_pane_t1

0xb337,	// (0x000b9274) find_chidic_pane

0xb340,	// (0x000b927d) chi_dic_list_pane_ParamLimits

0xb340,	// (0x000b927d) chi_dic_list_pane

0xb351,	// (0x000b928e) scroll_pane_cp020

0x210f,	// (0x000b004c) find_chidic_pane_t1

0x9a4d,	// (0x000b798a) input_focus_pane_cp06

0x211e,	// (0x000b005b) list_chi_dic_pane_ParamLimits

0x211e,	// (0x000b005b) list_chi_dic_pane

0x2130,	// (0x000b006d) list_chi_dic_pane_t1_ParamLimits

0x2130,	// (0x000b006d) list_chi_dic_pane_t1

0x9a4d,	// (0x000b798a) list_highlight_pane_cp020

0xb359,	// (0x000b9296) bg_cale_heading_pane_g1

0x2143,	// (0x000b0080) bg_cale_heading_pane_g2

0x214b,	// (0x000b0088) bg_cale_heading_pane_g3

0x2153,	// (0x000b0090) bg_cale_heading_pane_g4

0x215d,	// (0x000b009a) bg_cale_heading_pane_g5

0x2167,	// (0x000b00a4) bg_cale_heading_pane_g6

0x216f,	// (0x000b00ac) bg_cale_heading_pane_g7

0x2177,	// (0x000b00b4) bg_cale_heading_pane_g8

0x2181,	// (0x000b00be) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x000bd2c6) bg_cale_heading_pane_g

0xb359,	// (0x000b9296) bg_cale_side_pane_g1

0x218b,	// (0x000b00c8) bg_cale_side_pane_g2

0x2195,	// (0x000b00d2) bg_cale_side_pane_g3

0x219f,	// (0x000b00dc) bg_cale_side_pane_g4

0x21a9,	// (0x000b00e6) bg_cale_side_pane_g5

0x21b3,	// (0x000b00f0) bg_cale_side_pane_g6

0x21bd,	// (0x000b00fa) bg_cale_side_pane_g7

0x21c7,	// (0x000b0104) bg_cale_side_pane_g8

0x21cf,	// (0x000b010c) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x000bd2d9) bg_cale_side_pane_g

0x21d7,	// (0x000b0114) popup_call_status_window_ParamLimits

0x21d7,	// (0x000b0114) popup_call_status_window

0xb361,	// (0x000b929e) stacon_top_pane

0xb369,	// (0x000b92a6) status_pane_ParamLimits

0xb369,	// (0x000b92a6) status_pane

0xb37e,	// (0x000b92bb) status_small_pane

0xb386,	// (0x000b92c3) control_pane

0x9a4d,	// (0x000b798a) stacon_bottom_pane

0xb38e,	// (0x000b92cb) list_single_mce_smart_pane_t1_ParamLimits

0xb38e,	// (0x000b92cb) list_single_mce_smart_pane_t1

0xb3a1,	// (0x000b92de) list_single_mce_smart_pane_t2_ParamLimits

0xb3a1,	// (0x000b92de) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x000bd2ec) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x000bd2ec) list_single_mce_smart_pane_t

0x2224,	// (0x000b0161) compass_pane

0x222f,	// (0x000b016c) main_location2_pane_t1

0x2245,	// (0x000b0182) main_location2_pane_t2

0x225b,	// (0x000b0198) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x000bd2f1) main_location2_pane_t

0xb3c0,	// (0x000b92fd) compass_pane_g1_ParamLimits

0xb3c0,	// (0x000b92fd) compass_pane_g1

0x22a9,	// (0x000b01e6) compass_pane_t1

0x22b8,	// (0x000b01f5) compass_pane_t2

0x0005,

0xf3bd,	// (0x000bd2fa) compass_pane_t

0x2303,	// (0x000b0240) text_secondary_cp61

0xb43e,	// (0x000b937b) navi_pane_cams_g5

0xb4ba,	// (0x000b93f7) navi_pane_im_t1

0xb4c8,	// (0x000b9405) navi_pane_mp_g1_ParamLimits

0xb4c8,	// (0x000b9405) navi_pane_mp_g1

0xb4dc,	// (0x000b9419) navi_pane_mp_g2_ParamLimits

0xb4dc,	// (0x000b9419) navi_pane_mp_g2

0xb4e8,	// (0x000b9425) navi_pane_mp_g3_ParamLimits

0xb4e8,	// (0x000b9425) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x000bd30e) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x000bd30e) navi_pane_mp_g

0xb4f4,	// (0x000b9431) navi_pane_mp_t1

0xb502,	// (0x000b943f) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x000bd315) navi_pane_mp_t

0xb56f,	// (0x000b94ac) navi_pane_vt_g1

0xb4f4,	// (0x000b9431) navi_pane_vt_t1

0xb577,	// (0x000b94b4) navi_slider_pane

0xab25,	// (0x000b8a62) zooming_pane

0xb587,	// (0x000b94c4) navi_slider_pane_g1

0x9f6c,	// (0x000b7ea9) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x000bd31c) navi_slider_pane_g

0xb5ab,	// (0x000b94e8) aid_levels_zoom

0xb5b3,	// (0x000b94f0) zooming_pane_g1

0xb5bb,	// (0x000b94f8) zooming_pane_g2

0xb5bb,	// (0x000b94f8) zooming_pane_g3

0x0002,

0xf3ee,	// (0x000bd32b) zooming_pane_g

0xb5c3,	// (0x000b9500) level_10_zoom

0xb5cc,	// (0x000b9509) level_11_zoom

0xb5d5,	// (0x000b9512) level_1_zoom

0xb5de,	// (0x000b951b) level_2_zoom

0xb5e7,	// (0x000b9524) level_3_zoom

0xb5f0,	// (0x000b952d) level_4_zoom

0xb5f9,	// (0x000b9536) level_5_zoom

0xb602,	// (0x000b953f) level_6_zoom

0xb60b,	// (0x000b9548) level_7_zoom

0xb614,	// (0x000b9551) level_8_zoom

0xb61d,	// (0x000b955a) level_9_zoom

0xb62e,	// (0x000b956b) popup_phob_thumbnail_window_g1

0xb636,	// (0x000b9573) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x000bd332) popup_phob_thumbnail_window_g

0xc975,	// (0x000ba8b2) level_1_location

0xc97d,	// (0x000ba8ba) level_2_location

0xc985,	// (0x000ba8c2) level_3_location

0xc98d,	// (0x000ba8ca) level_4_location

0xab25,	// (0x000b8a62) level_5_location

0x2354,	// (0x000b0291) mce_icon_pane_g1

0x235e,	// (0x000b029b) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x000bd337) mce_icon_pane_g

0x2366,	// (0x000b02a3) main_mup_pane_g1_ParamLimits

0x2366,	// (0x000b02a3) main_mup_pane_g1

0x237c,	// (0x000b02b9) main_mup_pane_g2_ParamLimits

0x237c,	// (0x000b02b9) main_mup_pane_g2

0x2394,	// (0x000b02d1) main_mup_pane_g3_ParamLimits

0x2394,	// (0x000b02d1) main_mup_pane_g3

0x23ac,	// (0x000b02e9) main_mup_pane_g4_ParamLimits

0x23ac,	// (0x000b02e9) main_mup_pane_g4

0x23be,	// (0x000b02fb) main_mup_pane_g5_ParamLimits

0x23be,	// (0x000b02fb) main_mup_pane_g5

0x23da,	// (0x000b0317) main_mup_pane_g6_ParamLimits

0x23da,	// (0x000b0317) main_mup_pane_g6

0x23f4,	// (0x000b0331) main_mup_pane_g7_ParamLimits

0x23f4,	// (0x000b0331) main_mup_pane_g7

0x2412,	// (0x000b034f) main_mup_pane_g8_ParamLimits

0x2412,	// (0x000b034f) main_mup_pane_g8

0x2430,	// (0x000b036d) main_mup_pane_g9_ParamLimits

0x2430,	// (0x000b036d) main_mup_pane_g9

0x244c,	// (0x000b0389) main_mup_pane_g10_ParamLimits

0x244c,	// (0x000b0389) main_mup_pane_g10

0x246a,	// (0x000b03a7) main_mup_pane_g11_ParamLimits

0x246a,	// (0x000b03a7) main_mup_pane_g11

0x2484,	// (0x000b03c1) main_mup_pane_g12_ParamLimits

0x2484,	// (0x000b03c1) main_mup_pane_g12

0x249a,	// (0x000b03d7) main_mup_pane_g13_ParamLimits

0x249a,	// (0x000b03d7) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x000bd33c) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x000bd33c) main_mup_pane_g

0x24ae,	// (0x000b03eb) main_mup_pane_t1_ParamLimits

0x24ae,	// (0x000b03eb) main_mup_pane_t1

0x24ca,	// (0x000b0407) main_mup_pane_t2_ParamLimits

0x24ca,	// (0x000b0407) main_mup_pane_t2

0x24e2,	// (0x000b041f) main_mup_pane_t3_ParamLimits

0x24e2,	// (0x000b041f) main_mup_pane_t3

0x24fa,	// (0x000b0437) main_mup_pane_t4_ParamLimits

0x24fa,	// (0x000b0437) main_mup_pane_t4

0x2518,	// (0x000b0455) main_mup_pane_t5_ParamLimits

0x2518,	// (0x000b0455) main_mup_pane_t5

0x252d,	// (0x000b046a) main_mup_pane_t6_ParamLimits

0x252d,	// (0x000b046a) main_mup_pane_t6

0x0005,

0xf41a,	// (0x000bd357) main_mup_pane_t_ParamLimits

0xf41a,	// (0x000bd357) main_mup_pane_t

0x253f,	// (0x000b047c) mup_progress_pane_ParamLimits

0x253f,	// (0x000b047c) mup_progress_pane

0x254b,	// (0x000b0488) mup_visualizer_pane_ParamLimits

0x254b,	// (0x000b0488) mup_visualizer_pane

0x257f,	// (0x000b04bc) mup_volume_pane_ParamLimits

0x257f,	// (0x000b04bc) mup_volume_pane

0xb63e,	// (0x000b957b) mup_visualizer_pane_g1_ParamLimits

0xb63e,	// (0x000b957b) mup_visualizer_pane_g1

0xb63e,	// (0x000b957b) mup_visualizer_pane_g2_ParamLimits

0xb63e,	// (0x000b957b) mup_visualizer_pane_g2

0xb3c0,	// (0x000b92fd) mup_visualizer_pane_g3_ParamLimits

0xb3c0,	// (0x000b92fd) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x000bd364) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x000bd364) mup_visualizer_pane_g

0x9e08,	// (0x000b7d45) mup_volume_pane_g1

0xb654,	// (0x000b9591) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x000bd36b) mup_volume_pane_g

0x9e08,	// (0x000b7d45) mup_progress_pane_g1

0xb65d,	// (0x000b959a) mup_progress_pane_g2

0xb666,	// (0x000b95a3) mup_progress_pane_g3

0x0002,

0xf433,	// (0x000bd370) mup_progress_pane_g

0x9a4d,	// (0x000b798a) bg_popup_window_pane_cp05

0xb66f,	// (0x000b95ac) heading_pane_cp02_ParamLimits

0xb66f,	// (0x000b95ac) heading_pane_cp02

0xb68b,	// (0x000b95c8) list_popup_blid_pane

0xb693,	// (0x000b95d0) list_blid_sat_info_pane_ParamLimits

0xb693,	// (0x000b95d0) list_blid_sat_info_pane

0xb6a6,	// (0x000b95e3) list_blid_sat_info_pane_g1

0xb6ae,	// (0x000b95eb) list_blid_sat_info_pane_t1

0x26a9,	// (0x000b05e6) mup_equalizer_pane_ParamLimits

0x26a9,	// (0x000b05e6) mup_equalizer_pane

0x26ca,	// (0x000b0607) mup_equalizer_pane_cp1_ParamLimits

0x26ca,	// (0x000b0607) mup_equalizer_pane_cp1

0x26eb,	// (0x000b0628) mup_equalizer_pane_cp2_ParamLimits

0x26eb,	// (0x000b0628) mup_equalizer_pane_cp2

0x2710,	// (0x000b064d) mup_equalizer_pane_cp3_ParamLimits

0x2710,	// (0x000b064d) mup_equalizer_pane_cp3

0x2739,	// (0x000b0676) mup_equalizer_pane_cp4_ParamLimits

0x2739,	// (0x000b0676) mup_equalizer_pane_cp4

0x2762,	// (0x000b069f) mup_equalizer_pane_cp5

0x277a,	// (0x000b06b7) mup_equalizer_pane_cp6

0x2792,	// (0x000b06cf) mup_equalizer_pane_cp7

0xc88f,	// (0x000ba7cc) bg_popup_call_poc_act_pane_g9

0xc897,	// (0x000ba7d4) bg_popup_call_poc_act_pane_g10

0xc89f,	// (0x000ba7dc) bg_popup_call_poc_act_pane_g11

0x000a,

0x9ca8,	// (0x000b7be5) mup_scale_pane

0x9e08,	// (0x000b7d45) mup_scale_pane_g1

0xb6bc,	// (0x000b95f9) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x000bd38c) mup_scale_pane_g

0xb6e0,	// (0x000b961d) msg_data_pane

0xb6e8,	// (0x000b9625) scroll_pane_cp017

0x27bc,	// (0x000b06f9) bg_list_pane_cp04_ParamLimits

0x27bc,	// (0x000b06f9) bg_list_pane_cp04

0xb6f0,	// (0x000b962d) msg_data_pane_g1

0x27dc,	// (0x000b0719) msg_data_pane_g2

0x27e6,	// (0x000b0723) msg_data_pane_g3

0x27f0,	// (0x000b072d) msg_data_pane_g4

0x27f8,	// (0x000b0735) msg_data_pane_g5

0x2800,	// (0x000b073d) msg_data_pane_g6

0x2808,	// (0x000b0745) msg_data_pane_g7

0x0006,

0xf45e,	// (0x000bd39b) msg_data_pane_g

0x2810,	// (0x000b074d) msg_text_pane_ParamLimits

0x2810,	// (0x000b074d) msg_text_pane

0x2845,	// (0x000b0782) qrid_highlight_pane_cp011_ParamLimits

0x2845,	// (0x000b0782) qrid_highlight_pane_cp011

0x9a4d,	// (0x000b798a) msg_body_pane

0x9a4d,	// (0x000b798a) msg_header_pane

0xb701,	// (0x000b963e) input_focus_pane_cp07

0x9f86,	// (0x000b7ec3) msg_header_pane_t1_ParamLimits

0x9f86,	// (0x000b7ec3) msg_header_pane_t1

0x9f98,	// (0x000b7ed5) msg_header_pane_t2_ParamLimits

0x9f98,	// (0x000b7ed5) msg_header_pane_t2

0x0001,

0xf472,	// (0x000bd3af) msg_header_pane_t_ParamLimits

0xf472,	// (0x000bd3af) msg_header_pane_t

0xb716,	// (0x000b9653) msg_body_pane_g1

0x9faa,	// (0x000b7ee7) msg_body_pane_t1_ParamLimits

0x9faa,	// (0x000b7ee7) msg_body_pane_t1

0x9fdb,	// (0x000b7f18) msg_body_pane_t2_ParamLimits

0x9fdb,	// (0x000b7f18) msg_body_pane_t2

0x9fed,	// (0x000b7f2a) msg_body_pane_t3_ParamLimits

0x9fed,	// (0x000b7f2a) msg_body_pane_t3

0x0002,

0xf477,	// (0x000bd3b4) msg_body_pane_t_ParamLimits

0xf477,	// (0x000bd3b4) msg_body_pane_t

0x28a3,	// (0x000b07e0) main_viewer_pane_g1_ParamLimits

0x28a3,	// (0x000b07e0) main_viewer_pane_g1

0x28b1,	// (0x000b07ee) main_viewer_pane_g2_ParamLimits

0x28b1,	// (0x000b07ee) main_viewer_pane_g2

0x28bf,	// (0x000b07fc) main_viewer_pane_g3_ParamLimits

0x28bf,	// (0x000b07fc) main_viewer_pane_g3

0x28ce,	// (0x000b080b) main_viewer_pane_g4_ParamLimits

0x28ce,	// (0x000b080b) main_viewer_pane_g4

0xa017,	// (0x000b7f54) main_viewer_pane_g5_ParamLimits

0xa017,	// (0x000b7f54) main_viewer_pane_g5

0xa017,	// (0x000b7f54) main_viewer_pane_g7_ParamLimits

0xa017,	// (0x000b7f54) main_viewer_pane_g7

0xa029,	// (0x000b7f66) main_viewer_pane_g8_ParamLimits

0xa029,	// (0x000b7f66) main_viewer_pane_g8

0x0007,

0xf487,	// (0x000bd3c4) main_viewer_pane_g_ParamLimits

0xf487,	// (0x000bd3c4) main_viewer_pane_g

0xb71e,	// (0x000b965b) viewer_content_pane_ParamLimits

0xb71e,	// (0x000b965b) viewer_content_pane

0x290c,	// (0x000b0849) main_postcard_pane_g1_ParamLimits

0x290c,	// (0x000b0849) main_postcard_pane_g1

0x2922,	// (0x000b085f) main_postcard_pane_g2_ParamLimits

0x2922,	// (0x000b085f) main_postcard_pane_g2

0x2938,	// (0x000b0875) main_postcard_pane_g3_ParamLimits

0x2938,	// (0x000b0875) main_postcard_pane_g3

0x0005,

0xf498,	// (0x000bd3d5) main_postcard_pane_g_ParamLimits

0xf498,	// (0x000bd3d5) main_postcard_pane_g

0x294f,	// (0x000b088c) main_postcard_pane_g4

0xca88,	// (0x000ba9c5) smil_status_volume_pane_g2

0x2992,	// (0x000b08cf) postcard_pane_ParamLimits

0x2992,	// (0x000b08cf) postcard_pane

0xb72c,	// (0x000b9669) postcard_pane_g1_ParamLimits

0xb72c,	// (0x000b9669) postcard_pane_g1

0x29e2,	// (0x000b091f) postcard_pane_g2_ParamLimits

0x29e2,	// (0x000b091f) postcard_pane_g2

0x29ee,	// (0x000b092b) postcard_pane_g3_ParamLimits

0x29ee,	// (0x000b092b) postcard_pane_g3

0xb73a,	// (0x000b9677) postcard_pane_g4_ParamLimits

0xb73a,	// (0x000b9677) postcard_pane_g4

0x29fa,	// (0x000b0937) postcard_pane_g5_ParamLimits

0x29fa,	// (0x000b0937) postcard_pane_g5

0x2a0f,	// (0x000b094c) postcard_pane_g6_ParamLimits

0x2a0f,	// (0x000b094c) postcard_pane_g6

0xb72c,	// (0x000b9669) postcard_pane_g7_ParamLimits

0xb72c,	// (0x000b9669) postcard_pane_g7

0x0006,

0xf4a5,	// (0x000bd3e2) postcard_pane_g_ParamLimits

0xf4a5,	// (0x000bd3e2) postcard_pane_g

0x2a27,	// (0x000b0964) main_mp2_pane_g1_ParamLimits

0x2a27,	// (0x000b0964) main_mp2_pane_g1

0x2a35,	// (0x000b0972) main_mp2_pane_g2_ParamLimits

0x2a35,	// (0x000b0972) main_mp2_pane_g2

0x2a41,	// (0x000b097e) main_mp2_pane_g3_ParamLimits

0x2a41,	// (0x000b097e) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x000bd3f1) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x000bd3f1) main_mp2_pane_g

0x2a4d,	// (0x000b098a) main_mp2_pane_t1_ParamLimits

0x2a4d,	// (0x000b098a) main_mp2_pane_t1

0x2a64,	// (0x000b09a1) main_mp2_pane_t2_ParamLimits

0x2a64,	// (0x000b09a1) main_mp2_pane_t2

0x2a78,	// (0x000b09b5) main_mp2_pane_t3_ParamLimits

0x2a78,	// (0x000b09b5) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x000bd3f8) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x000bd3f8) main_mp2_pane_t

0xb748,	// (0x000b9685) pec_content_pane_ParamLimits

0xb748,	// (0x000b9685) pec_content_pane

0xace7,	// (0x000b8c24) scroll_pane_cp015

0xb75a,	// (0x000b9697) pec_attribute_pane_ParamLimits

0xb75a,	// (0x000b9697) pec_attribute_pane

0x2a8a,	// (0x000b09c7) pec_content_pane_g1_ParamLimits

0x2a8a,	// (0x000b09c7) pec_content_pane_g1

0xb76a,	// (0x000b96a7) pec_content_pane_t1_ParamLimits

0xb76a,	// (0x000b96a7) pec_content_pane_t1

0xb77c,	// (0x000b96b9) pec_content_pane_t2_ParamLimits

0xb77c,	// (0x000b96b9) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x000bd3ff) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x000bd3ff) pec_content_pane_t

0x2a96,	// (0x000b09d3) list_single_graphic_pane_cp01_ParamLimits

0x2a96,	// (0x000b09d3) list_single_graphic_pane_cp01

0x9ca8,	// (0x000b7be5) bg_popup_sub_pane_cp04

0xb78e,	// (0x000b96cb) popup_mup_playback_window_g1

0xb79a,	// (0x000b96d7) popup_mup_playback_window_t1

0xb7af,	// (0x000b96ec) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x000bd404) popup_mup_playback_window_t

0xb7e6,	// (0x000b9723) main_image_pane_g1_ParamLimits

0xb7e6,	// (0x000b9723) main_image_pane_g1

0xb829,	// (0x000b9766) scroll_pane_cp018_ParamLimits

0xb829,	// (0x000b9766) scroll_pane_cp018

0xb841,	// (0x000b977e) scroll_pane_cp016_ParamLimits

0xb841,	// (0x000b977e) scroll_pane_cp016

0x2b68,	// (0x000b0aa5) smil2_image_pane_ParamLimits

0x2b68,	// (0x000b0aa5) smil2_image_pane

0x2b9e,	// (0x000b0adb) smil2_root_pane_ParamLimits

0x2b9e,	// (0x000b0adb) smil2_root_pane

0x2bd6,	// (0x000b0b13) smil2_text_pane_ParamLimits

0x2bd6,	// (0x000b0b13) smil2_text_pane

0x9a4d,	// (0x000b798a) bg_list_pane_cp06

0xb87d,	// (0x000b97ba) grid_radio_pane

0x9a4d,	// (0x000b798a) bg_popup_window_pane_cp06

0xb887,	// (0x000b97c4) main_fmradio_pane_t1

0xb23d,	// (0x000b917a) heading_pane_cp04

0xb895,	// (0x000b97d2) main_fmradio_pane_t2

0xc8a7,	// (0x000ba7e4) popup_cale_lunar_info_window_g1

0xb8a3,	// (0x000b97e0) main_fmradio_pane_t3

0xc8af,	// (0x000ba7ec) popup_cale_lunar_info_window_g2

0xb8b3,	// (0x000b97f0) main_fmradio_pane_t4

0x0001,

0xb8c1,	// (0x000b97fe) main_fmradio_pane_t5

0x0004,

0xf5a2,	// (0x000bd4df) popup_cale_lunar_info_window_g

0xf4dc,	// (0x000bd419) main_fmradio_pane_t

0xb8cf,	// (0x000b980c) wait_bar_pane_cp03

0xb8d7,	// (0x000b9814) cell_fmradio_pane_ParamLimits

0xb8d7,	// (0x000b9814) cell_fmradio_pane

0xb72c,	// (0x000b9669) cell_fmradio_pane_g1_ParamLimits

0xb72c,	// (0x000b9669) cell_fmradio_pane_g1

0x9a4d,	// (0x000b798a) grid_highlight_pane_cp011

0xb8ec,	// (0x000b9829) poc_content_pane_ParamLimits

0xb8ec,	// (0x000b9829) poc_content_pane

0xb8fe,	// (0x000b983b) scroll_pane_cp019

0x2c66,	// (0x000b0ba3) popup_call_poc_act_window_ParamLimits

0x2c66,	// (0x000b0ba3) popup_call_poc_act_window

0x2c8a,	// (0x000b0bc7) popup_call_poc_inact_window_ParamLimits

0x2c8a,	// (0x000b0bc7) popup_call_poc_inact_window

0xf579,	// (0x000bd4b6) bg_popup_call_poc_act_pane_g

0xc81f,	// (0x000ba75c) bg_popup_call_poc_inact_pane_g1

0xc827,	// (0x000ba764) bg_popup_call_poc_inact_pane_g2

0xb906,	// (0x000b9843) popup_call_poc_act_window_g2

0xc82f,	// (0x000ba76c) bg_popup_call_poc_inact_pane_g3

0xc837,	// (0x000ba774) bg_popup_call_poc_inact_pane_g4

0xc83f,	// (0x000ba77c) bg_popup_call_poc_inact_pane_g5

0xb90e,	// (0x000b984b) popup_call_poc_act_window_t1_ParamLimits

0xb90e,	// (0x000b984b) popup_call_poc_act_window_t1

0xb936,	// (0x000b9873) popup_call_poc_act_window_t2_ParamLimits

0xb936,	// (0x000b9873) popup_call_poc_act_window_t2

0xb95e,	// (0x000b989b) popup_call_poc_act_window_t3_ParamLimits

0xb95e,	// (0x000b989b) popup_call_poc_act_window_t3

0xb986,	// (0x000b98c3) popup_call_poc_act_window_t4_ParamLimits

0xb986,	// (0x000b98c3) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x000bd424) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x000bd424) popup_call_poc_act_window_t

0xc847,	// (0x000ba784) bg_popup_call_poc_inact_pane_g6

0xc84f,	// (0x000ba78c) bg_popup_call_poc_inact_pane_g7

0xc857,	// (0x000ba794) bg_popup_call_poc_inact_pane_g8

0xb998,	// (0x000b98d5) popup_call_poc_inact_window_g2

0xc85f,	// (0x000ba79c) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf566,	// (0x000bd4a3) bg_popup_call_poc_inact_pane_g

0xb9a0,	// (0x000b98dd) popup_call_poc_inact_window_t1_ParamLimits

0xb9a0,	// (0x000b98dd) popup_call_poc_inact_window_t1

0xb9b5,	// (0x000b98f2) popup_call_poc_inact_window_t2_ParamLimits

0xb9b5,	// (0x000b98f2) popup_call_poc_inact_window_t2

0xb9ca,	// (0x000b9907) popup_call_poc_inact_window_t3_ParamLimits

0xb9ca,	// (0x000b9907) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x000bd42d) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x000bd42d) popup_call_poc_inact_window_t

0xc9e8,	// (0x000ba925) context_pane_ParamLimits

0x3533,	// (0x000b1470) signal_pane_ParamLimits

0xab25,	// (0x000b8a62) main_call2_pane

0xa072,	// (0x000b7faf) popup_phob_thumbnail2_window_ParamLimits

0xa072,	// (0x000b7faf) popup_phob_thumbnail2_window

0x9fff,	// (0x000b7f3c) aid_hotspot_pointer_arrow_pane

0xa007,	// (0x000b7f44) aid_hotspot_pointer_hand_pane

0x2ff5,	// (0x000b0f32) phob_pre_status_pane_g5

0x093c,	// (0x000ae879) cams_zoom_pane_ParamLimits

0x094b,	// (0x000ae888) image_vga_pane_ParamLimits

0x0965,	// (0x000ae8a2) main_camera_pane_g1_ParamLimits

0x0977,	// (0x000ae8b4) main_camera_pane_g2_ParamLimits

0x0987,	// (0x000ae8c4) main_camera_pane_g3_ParamLimits

0x099b,	// (0x000ae8d8) main_camera_pane_g4_ParamLimits

0x09af,	// (0x000ae8ec) main_camera_pane_g5_ParamLimits

0x09c3,	// (0x000ae900) main_camera_pane_g6_ParamLimits

0x09d7,	// (0x000ae914) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x000bd12c) main_camera_pane_g_ParamLimits

0x09eb,	// (0x000ae928) main_camera_pane_t1_ParamLimits

0x0a01,	// (0x000ae93e) main_camera_pane_t2_ParamLimits

0xf200,	// (0x000bd13d) main_camera_pane_t_ParamLimits

0x9ca8,	// (0x000b7be5) bg_popup_preview_window_pane_cp01_ParamLimits

0x9ca8,	// (0x000b7be5) bg_popup_preview_window_pane_cp01

0xb9df,	// (0x000b991c) popup_phob_thumbnail2_window_g1_ParamLimits

0xb9df,	// (0x000b991c) popup_phob_thumbnail2_window_g1

0x9a4d,	// (0x000b798a) call2_cli_visual_pane

0x2cbe,	// (0x000b0bfb) popup_call2_audio_conf_window_ParamLimits

0x2cbe,	// (0x000b0bfb) popup_call2_audio_conf_window

0x2ce6,	// (0x000b0c23) popup_call2_audio_first_window_ParamLimits

0x2ce6,	// (0x000b0c23) popup_call2_audio_first_window

0x2d7c,	// (0x000b0cb9) popup_call2_audio_in_window_ParamLimits

0x2d7c,	// (0x000b0cb9) popup_call2_audio_in_window

0x2dc8,	// (0x000b0d05) popup_call2_audio_out_window_ParamLimits

0x2dc8,	// (0x000b0d05) popup_call2_audio_out_window

0x2e3a,	// (0x000b0d77) popup_call2_audio_second_window_ParamLimits

0x2e3a,	// (0x000b0d77) popup_call2_audio_second_window

0x2ea0,	// (0x000b0ddd) popup_call2_audio_wait_window_ParamLimits

0x2ea0,	// (0x000b0ddd) popup_call2_audio_wait_window

0x9a4d,	// (0x000b798a) bg_popup_call2_act_pane_cp03

0x9c8a,	// (0x000b7bc7) list_conf_pane_cp

0xb9eb,	// (0x000b9928) popup_call2_audio_conf_window_t1

0xb9f9,	// (0x000b9936) list_single_graphic_popup_conf2_pane_ParamLimits

0xb9f9,	// (0x000b9936) list_single_graphic_popup_conf2_pane

0xb2ac,	// (0x000b91e9) list_highlight_pane_cp04

0xba0c,	// (0x000b9949) list_single_graphic_popup_conf2_pane_g1

0xb2bd,	// (0x000b91fa) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x000bd434) list_single_graphic_popup_conf2_pane_g

0xba16,	// (0x000b9953) list_single_graphic_popup_conf2_pane_t1

0xba24,	// (0x000b9961) bg_popup_call2_act_pane_cp01_ParamLimits

0xba24,	// (0x000b9961) bg_popup_call2_act_pane_cp01

0xbaae,	// (0x000b99eb) call_type_pane_cp05_ParamLimits

0xbaae,	// (0x000b99eb) call_type_pane_cp05

0xbb02,	// (0x000b9a3f) popup_call2_audio_second_window_g1_ParamLimits

0xbb02,	// (0x000b9a3f) popup_call2_audio_second_window_g1

0xbb56,	// (0x000b9a93) popup_call2_audio_second_window_g2_ParamLimits

0xbb56,	// (0x000b9a93) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x000bd439) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x000bd439) popup_call2_audio_second_window_g

0xbbbb,	// (0x000b9af8) popup_call2_audio_second_window_t1_ParamLimits

0xbbbb,	// (0x000b9af8) popup_call2_audio_second_window_t1

0xbc76,	// (0x000b9bb3) popup_call2_audio_second_window_t2_ParamLimits

0xbc76,	// (0x000b9bb3) popup_call2_audio_second_window_t2

0xbcc9,	// (0x000b9c06) popup_call2_audio_second_window_t3_ParamLimits

0xbcc9,	// (0x000b9c06) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x000bd440) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x000bd440) popup_call2_audio_second_window_t

0x9a4d,	// (0x000b798a) bg_popup_call2_in_pane_cp02

0x9a57,	// (0x000b7994) call_type_pane_cp04

0x9a5f,	// (0x000b799c) popup_call2_audio_wait_window_g1

0x9a67,	// (0x000b79a4) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x000bd01b) popup_call2_audio_wait_window_g

0x9a6f,	// (0x000b79ac) popup_call2_audio_wait_window_t3

0xbdbc,	// (0x000b9cf9) bg_popup_call2_act_pane_ParamLimits

0xbdbc,	// (0x000b9cf9) bg_popup_call2_act_pane

0xbeb8,	// (0x000b9df5) call_type_pane_cp03_ParamLimits

0xbeb8,	// (0x000b9df5) call_type_pane_cp03

0xbf1c,	// (0x000b9e59) popup_call2_audio_first_window_g1_ParamLimits

0xbf1c,	// (0x000b9e59) popup_call2_audio_first_window_g1

0xbf8c,	// (0x000b9ec9) popup_call2_audio_first_window_g2_ParamLimits

0xbf8c,	// (0x000b9ec9) popup_call2_audio_first_window_g2

0xb63e,	// (0x000b957b) popup_call2_audio_first_window_g3_ParamLimits

0xb63e,	// (0x000b957b) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x000bd449) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x000bd449) popup_call2_audio_first_window_g

0xc06a,	// (0x000b9fa7) popup_call2_audio_first_window_t1_ParamLimits

0xc06a,	// (0x000b9fa7) popup_call2_audio_first_window_t1

0xc16d,	// (0x000ba0aa) popup_call2_audio_first_window_t4_ParamLimits

0xc16d,	// (0x000ba0aa) popup_call2_audio_first_window_t4

0xc250,	// (0x000ba18d) popup_call2_audio_first_window_t5_ParamLimits

0xc250,	// (0x000ba18d) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x000bd454) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x000bd454) popup_call2_audio_first_window_t

0x9ca0,	// (0x000b7bdd) bg_popup_call2_act_pane_g1

0xc8b9,	// (0x000ba7f6) popup_cale_lunar_info_window_t1

0xc8c7,	// (0x000ba804) popup_cale_lunar_info_window_t2

0xc8d5,	// (0x000ba812) popup_cale_lunar_info_window_t3

0x9a4d,	// (0x000b798a) bg_popup_call2_bubble_pane

0xc351,	// (0x000ba28e) bg_popup_call2_in_pane_cp01_ParamLimits

0xc351,	// (0x000ba28e) bg_popup_call2_in_pane_cp01

0x9729,	// (0x000b7666) call_type_pane_cp02

0xc399,	// (0x000ba2d6) popup_call2_audio_out_window_g1_ParamLimits

0xc399,	// (0x000ba2d6) popup_call2_audio_out_window_g1

0xc3c5,	// (0x000ba302) popup_call2_audio_out_window_g2_ParamLimits

0xc3c5,	// (0x000ba302) popup_call2_audio_out_window_g2

0xc3ed,	// (0x000ba32a) popup_call2_audio_out_window_g3_ParamLimits

0xc3ed,	// (0x000ba32a) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x000bd45d) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x000bd45d) popup_call2_audio_out_window_g

0xc428,	// (0x000ba365) popup_call2_audio_out_window_t1_ParamLimits

0xc428,	// (0x000ba365) popup_call2_audio_out_window_t1

0xc487,	// (0x000ba3c4) popup_call2_audio_out_window_t2_ParamLimits

0xc487,	// (0x000ba3c4) popup_call2_audio_out_window_t2

0xc4db,	// (0x000ba418) popup_call2_audio_out_window_t3_ParamLimits

0xc4db,	// (0x000ba418) popup_call2_audio_out_window_t3

0xc4f1,	// (0x000ba42e) popup_call2_audio_out_window_t4_ParamLimits

0xc4f1,	// (0x000ba42e) popup_call2_audio_out_window_t4

0xc507,	// (0x000ba444) popup_call2_audio_out_window_t5_ParamLimits

0xc507,	// (0x000ba444) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x000bd466) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x000bd466) popup_call2_audio_out_window_t

0xc56b,	// (0x000ba4a8) bg_popup_call2_in_pane_ParamLimits

0xc56b,	// (0x000ba4a8) bg_popup_call2_in_pane

0xc5c7,	// (0x000ba504) popup_call2_audio_in_window_g1_ParamLimits

0xc5c7,	// (0x000ba504) popup_call2_audio_in_window_g1

0xc5ff,	// (0x000ba53c) popup_call2_audio_in_window_g2_ParamLimits

0xc5ff,	// (0x000ba53c) popup_call2_audio_in_window_g2

0xc637,	// (0x000ba574) popup_call2_audio_in_window_g3_ParamLimits

0xc637,	// (0x000ba574) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x000bd473) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x000bd473) popup_call2_audio_in_window_g

0xc68f,	// (0x000ba5cc) popup_call2_audio_in_window_t1_ParamLimits

0xc68f,	// (0x000ba5cc) popup_call2_audio_in_window_t1

0xc70f,	// (0x000ba64c) popup_call2_audio_in_window_t2_ParamLimits

0xc70f,	// (0x000ba64c) popup_call2_audio_in_window_t2

0xc78f,	// (0x000ba6cc) popup_call2_audio_in_window_t3_ParamLimits

0xc78f,	// (0x000ba6cc) popup_call2_audio_in_window_t3

0xc7a9,	// (0x000ba6e6) popup_call2_audio_in_window_t4_ParamLimits

0xc7a9,	// (0x000ba6e6) popup_call2_audio_in_window_t4

0xc7bb,	// (0x000ba6f8) popup_call2_audio_in_window_t5_ParamLimits

0xc7bb,	// (0x000ba6f8) popup_call2_audio_in_window_t5

0xc7cd,	// (0x000ba70a) popup_call2_audio_in_window_t6_ParamLimits

0xc7cd,	// (0x000ba70a) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x000bd47c) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x000bd47c) popup_call2_audio_in_window_t

0x9ca0,	// (0x000b7bdd) bg_popup_call2_in_pane_g1

0xc8e3,	// (0x000ba820) popup_cale_lunar_info_window_t4

0x0003,

0xf5a7,	// (0x000bd4e4) popup_cale_lunar_info_window_t

0x9ca8,	// (0x000b7be5) bg_popup_call2_rect_pane_ParamLimits

0x9ca8,	// (0x000b7be5) bg_popup_call2_rect_pane

0x9a4d,	// (0x000b798a) call2_cli_visual_graphic_pane

0x9a4d,	// (0x000b798a) call2_cli_visual_text_pane

0xa099,	// (0x000b7fd6) smil_status_volume_pane_g3

0x0002,

0x9e08,	// (0x000b7d45) call2_cli_visual_graphic_pane_g1

0x9e08,	// (0x000b7d45) call2_cli_visual_graphic_pane_g2

0x9e08,	// (0x000b7d45) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x000bd489) call2_cli_visual_graphic_pane_g

0xc7df,	// (0x000ba71c) bg_popup_call2_rect_pane_g1

0xaa5e,	// (0x000b899b) bg_popup_call2_rect_pane_g2

0xc7e7,	// (0x000ba724) bg_popup_call2_rect_pane_g3

0xc7ef,	// (0x000ba72c) bg_popup_call2_rect_pane_g4

0xc7f7,	// (0x000ba734) bg_popup_call2_rect_pane_g5

0xc7ff,	// (0x000ba73c) bg_popup_call2_rect_pane_g6

0xc807,	// (0x000ba744) bg_popup_call2_rect_pane_g7

0xc80f,	// (0x000ba74c) bg_popup_call2_rect_pane_g8

0xc817,	// (0x000ba754) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x000bd490) bg_popup_call2_rect_pane_g

0xc81f,	// (0x000ba75c) bg_popup_call2_bubble_pane_g1

0xc827,	// (0x000ba764) bg_popup_call2_bubble_pane_g2

0xc82f,	// (0x000ba76c) bg_popup_call2_bubble_pane_g3

0xc837,	// (0x000ba774) bg_popup_call2_bubble_pane_g4

0xc83f,	// (0x000ba77c) bg_popup_call2_bubble_pane_g5

0xc847,	// (0x000ba784) bg_popup_call2_bubble_pane_g6

0xc84f,	// (0x000ba78c) bg_popup_call2_bubble_pane_g7

0xc857,	// (0x000ba794) bg_popup_call2_bubble_pane_g8

0xc85f,	// (0x000ba79c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x000bd4a3) bg_popup_call2_bubble_pane_g

0x02f7,	// (0x000ae234) aid_cale_week_size_cell_pane

0x0a1b,	// (0x000ae958) aid_cams_cif_uncrop_pane_ParamLimits

0x0a1b,	// (0x000ae958) aid_cams_cif_uncrop_pane

0x0bd4,	// (0x000aeb11) aid_cams_size_cell_ParamLimits

0x0bd4,	// (0x000aeb11) aid_cams_size_cell

0x0be8,	// (0x000aeb25) grid_cams_pane_ParamLimits

0x0c02,	// (0x000aeb3f) linegrid_cams_pane_ParamLimits

0x0dd9,	// (0x000aed16) call_video_pane_t1

0x0df3,	// (0x000aed30) call_video_pane_t2

0x0001,

0xf253,	// (0x000bd190) call_video_pane_t

0x1240,	// (0x000af17d) aid_cale_month_size_cell_pane_ParamLimits

0x1240,	// (0x000af17d) aid_cale_month_size_cell_pane

0xf5f0,	// (0x000bd52d) smil_status_volume_pane_g

0xa0a6,	// (0x000b7fe3) volume_smil_pane_ParamLimits

0xfb4e,	// (0x000ada8b) aid_popup2_width_pane

0x024a,	// (0x000ae187) cell_qdial_pane_g4_ParamLimits

0x024a,	// (0x000ae187) cell_qdial_pane_g4

0x2285,	// (0x000b01c2) aid_blid_cardinal_pane_ParamLimits

0x2295,	// (0x000b01d2) aid_blid_destination_pane_ParamLimits

0x2295,	// (0x000b01d2) aid_blid_destination_pane

0x9ca8,	// (0x000b7be5) bg_popup_call_poc_act_pane_ParamLimits

0x9ca8,	// (0x000b7be5) bg_popup_call_poc_act_pane

0x9ca8,	// (0x000b7be5) bg_popup_call_poc_inact_pane_ParamLimits

0x9ca8,	// (0x000b7be5) bg_popup_call_poc_inact_pane

0xc867,	// (0x000ba7a4) bg_popup_call_poc_act_pane_g1

0xc86f,	// (0x000ba7ac) bg_popup_call_poc_act_pane_g2

0xc877,	// (0x000ba7b4) bg_popup_call_poc_act_pane_g3

0xc837,	// (0x000ba774) bg_popup_call_poc_act_pane_g4

0xc83f,	// (0x000ba77c) bg_popup_call_poc_act_pane_g5

0xc87f,	// (0x000ba7bc) bg_popup_call_poc_act_pane_g6

0xc84f,	// (0x000ba78c) bg_popup_call_poc_act_pane_g7

0xc887,	// (0x000ba7c4) bg_popup_call_poc_act_pane_g8

0x9a4d,	// (0x000b798a) main_usb_pane

0xa049,	// (0x000b7f86) popup_cale_lunar_info_window

0x10c0,	// (0x000aeffd) im_reading_pane_t1_ParamLimits

0xac3f,	// (0x000b8b7c) list_im_pane_ParamLimits

0xac50,	// (0x000b8b8d) scroll_pane_cp07_ParamLimits

0x9a4d,	// (0x000b798a) grid_highlight_pane_cp012

0x9ca8,	// (0x000b7be5) mup_scale_pane_ParamLimits

0xb72c,	// (0x000b9669) main_usb_pane_g1_ParamLimits

0xb72c,	// (0x000b9669) main_usb_pane_g1

0x2f01,	// (0x000b0e3e) main_usb_pane_g2_ParamLimits

0x2f01,	// (0x000b0e3e) main_usb_pane_g2

0x0001,

0xf590,	// (0x000bd4cd) main_usb_pane_g_ParamLimits

0xf590,	// (0x000bd4cd) main_usb_pane_g

0x2f17,	// (0x000b0e54) main_usb_pane_t1_ParamLimits

0x2f17,	// (0x000b0e54) main_usb_pane_t1

0x2f29,	// (0x000b0e66) main_usb_pane_t2_ParamLimits

0x2f29,	// (0x000b0e66) main_usb_pane_t2

0x2f3b,	// (0x000b0e78) main_usb_pane_t3_ParamLimits

0x2f3b,	// (0x000b0e78) main_usb_pane_t3

0x2f4d,	// (0x000b0e8a) main_usb_pane_t4_ParamLimits

0x2f4d,	// (0x000b0e8a) main_usb_pane_t4

0x2f62,	// (0x000b0e9f) main_usb_pane_t5_ParamLimits

0x2f62,	// (0x000b0e9f) main_usb_pane_t5

0x2f77,	// (0x000b0eb4) main_usb_pane_t6_ParamLimits

0x2f77,	// (0x000b0eb4) main_usb_pane_t6

0x0005,

0xf595,	// (0x000bd4d2) main_usb_pane_t_ParamLimits

0x2224,	// (0x000b0161) aid_text_placing

0x222f,	// (0x000b016c) main_location2_pane_t1_ParamLimits

0x2245,	// (0x000b0182) main_location2_pane_t2_ParamLimits

0x225b,	// (0x000b0198) main_location2_pane_t3_ParamLimits

0x2271,	// (0x000b01ae) main_location2_pane_t4_ParamLimits

0x2271,	// (0x000b01ae) main_location2_pane_t4

0xf3b4,	// (0x000bd2f1) main_location2_pane_t_ParamLimits

0x9ce4,	// (0x000b7c21) find_pinb_pane_g2_ParamLimits

0x9ce4,	// (0x000b7c21) find_pinb_pane_g2

0x0001,

0xf104,	// (0x000bd041) find_pinb_pane_g_ParamLimits

0xf104,	// (0x000bd041) find_pinb_pane_g

0x9cf0,	// (0x000b7c2d) find_pinb_pane_t1_ParamLimits

0x9d02,	// (0x000b7c3f) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x000bd046) find_pinb_pane_t_ParamLimits

0x9a4d,	// (0x000b798a) main_call3_pane

0x1845,	// (0x000af782) cale_month_day_heading_pane_t1_ParamLimits

0x18cb,	// (0x000af808) cale_month_day_heading_pane_t2_ParamLimits

0x1944,	// (0x000af881) cale_month_day_heading_pane_t3_ParamLimits

0x19bd,	// (0x000af8fa) cale_month_day_heading_pane_t4_ParamLimits

0x1a3e,	// (0x000af97b) cale_month_day_heading_pane_t5_ParamLimits

0x1ac7,	// (0x000afa04) cale_month_day_heading_pane_t6_ParamLimits

0x1b58,	// (0x000afa95) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x000bd1c8) cale_month_day_heading_pane_t_ParamLimits

0xae9a,	// (0x000b8dd7) smil_status_volume_pane

0x29b6,	// (0x000b08f3) postcard_address_pane_ParamLimits

0x29b6,	// (0x000b08f3) postcard_address_pane

0x29cc,	// (0x000b0909) postcard_message_pane_ParamLimits

0x29cc,	// (0x000b0909) postcard_message_pane

0x2eda,	// (0x000b0e17) call2_cli_visual_pane_t1_ParamLimits

0x2eda,	// (0x000b0e17) call2_cli_visual_pane_t1

0x3744,	// (0x000b1681) postcard_message_pane_t1_ParamLimits

0x3744,	// (0x000b1681) postcard_message_pane_t1

0xca9b,	// (0x000ba9d8) postcard_address_pane_t1_ParamLimits

0xca9b,	// (0x000ba9d8) postcard_address_pane_t1

0x3730,	// (0x000b166d) popup_call3_audio_in_window_ParamLimits

0x3730,	// (0x000b166d) popup_call3_audio_in_window

0x35b5,	// (0x000b14f2) bg_popup_call3_in_pane_ParamLimits

0x35b5,	// (0x000b14f2) bg_popup_call3_in_pane

0x3631,	// (0x000b156e) popup_call3_audio_in_window_g1_ParamLimits

0x3631,	// (0x000b156e) popup_call3_audio_in_window_g1

0x3651,	// (0x000b158e) popup_call3_audio_in_window_g2_ParamLimits

0x3651,	// (0x000b158e) popup_call3_audio_in_window_g2

0x3671,	// (0x000b15ae) popup_call3_audio_in_window_g3_ParamLimits

0x3671,	// (0x000b15ae) popup_call3_audio_in_window_g3

0x0003,

0xf5f7,	// (0x000bd534) popup_call3_audio_in_window_g_ParamLimits

0xf5f7,	// (0x000bd534) popup_call3_audio_in_window_g

0x36a2,	// (0x000b15df) popup_call3_audio_in_window_t1_ParamLimits

0x36a2,	// (0x000b15df) popup_call3_audio_in_window_t1

0x36e0,	// (0x000b161d) popup_call3_audio_in_window_t2_ParamLimits

0x36e0,	// (0x000b161d) popup_call3_audio_in_window_t2

0x371e,	// (0x000b165b) popup_call3_audio_in_window_t3_ParamLimits

0x371e,	// (0x000b165b) popup_call3_audio_in_window_t3

0x0002,

0xf600,	// (0x000bd53d) popup_call3_audio_in_window_t_ParamLimits

0xf600,	// (0x000bd53d) popup_call3_audio_in_window_t

0xab25,	// (0x000b8a62) bg_popup_call3_rect_pane

0xc7df,	// (0x000ba71c) bg_popup_call3_rect_pane_g1

0xaa5e,	// (0x000b899b) bg_popup_call3_rect_pane_g2

0xc7e7,	// (0x000ba724) bg_popup_call3_rect_pane_g3

0xc7ef,	// (0x000ba72c) bg_popup_call3_rect_pane_g4

0xc7f7,	// (0x000ba734) bg_popup_call3_rect_pane_g5

0xc7ff,	// (0x000ba73c) bg_popup_call3_rect_pane_g6

0xc807,	// (0x000ba744) bg_popup_call3_rect_pane_g7

0x2595,	// (0x000b04d2) mup_visualizer_osc_pane

0xb64c,	// (0x000b9589) mup_visualizer_spec_pane

0x35e5,	// (0x000b1522) call3_video_qcif_pane_ParamLimits

0x35e5,	// (0x000b1522) call3_video_qcif_pane

0x35f8,	// (0x000b1535) call3_video_qcif_uncrop_pane_ParamLimits

0x35f8,	// (0x000b1535) call3_video_qcif_uncrop_pane

0x3608,	// (0x000b1545) call3_video_subqcif_pane_ParamLimits

0x3608,	// (0x000b1545) call3_video_subqcif_pane

0x361e,	// (0x000b155b) call3_video_subqcif_uncrop_pane_ParamLimits

0x361e,	// (0x000b155b) call3_video_subqcif_uncrop_pane

0x3691,	// (0x000b15ce) popup_call3_audio_in_window_g4_ParamLimits

0x3691,	// (0x000b15ce) popup_call3_audio_in_window_g4

0x35a4,	// (0x000b14e1) mup_spec_half_pane

0x35ad,	// (0x000b14ea) mup_spec_half_pane_cp

0xca5b,	// (0x000ba998) mup_osc_middle_pane

0xca64,	// (0x000ba9a1) mup_visualizer_osc_pane_g1

0x3584,	// (0x000b14c1) mup_spec_bar_pane_ParamLimits

0x3584,	// (0x000b14c1) mup_spec_bar_pane

0xca48,	// (0x000ba985) mup_spec_bar_pane_g1

0xca52,	// (0x000ba98f) mup_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x000bd528) mup_spec_bar_pane_g

0x02f7,	// (0x000ae234) aid_cale_week_size_cell_pane_ParamLimits

0x0311,	// (0x000ae24e) bg_cale_heading_pane_ParamLimits

0x0335,	// (0x000ae272) bg_cale_pane_cp01_ParamLimits

0x0352,	// (0x000ae28f) cale_week_corner_pane_ParamLimits

0x0371,	// (0x000ae2ae) cale_week_day_heading_pane_ParamLimits

0x039a,	// (0x000ae2d7) cale_week_scroll_pane_g1_ParamLimits

0x03b9,	// (0x000ae2f6) cale_week_scroll_pane_g2_ParamLimits

0x03d1,	// (0x000ae30e) cale_week_scroll_pane_g3_ParamLimits

0x03e9,	// (0x000ae326) cale_week_scroll_pane_g4_ParamLimits

0x0401,	// (0x000ae33e) cale_week_scroll_pane_g5_ParamLimits

0x0421,	// (0x000ae35e) cale_week_scroll_pane_g6_ParamLimits

0x0441,	// (0x000ae37e) cale_week_scroll_pane_g7_ParamLimits

0x0465,	// (0x000ae3a2) cale_week_scroll_pane_g8_ParamLimits

0x0489,	// (0x000ae3c6) cale_week_scroll_pane_g9_ParamLimits

0x04a1,	// (0x000ae3de) cale_week_scroll_pane_g10_ParamLimits

0x04b9,	// (0x000ae3f6) cale_week_scroll_pane_g11_ParamLimits

0x04d1,	// (0x000ae40e) cale_week_scroll_pane_g12_ParamLimits

0x04f5,	// (0x000ae432) cale_week_scroll_pane_g13_ParamLimits

0x04f5,	// (0x000ae432) cale_week_scroll_pane_g14_ParamLimits

0x04f5,	// (0x000ae432) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x000bd0d2) cale_week_scroll_pane_g_ParamLimits

0x053d,	// (0x000ae47a) cale_week_time_pane_ParamLimits

0x0561,	// (0x000ae49e) grid_cale_week_pane_ParamLimits

0xaa9b,	// (0x000b89d8) listscroll_cale_week_pane_t1

0xaaad,	// (0x000b89ea) scroll_pane_cp08_ParamLimits

0x12b8,	// (0x000af1f5) cale_month_corner_pane_ParamLimits

0xae70,	// (0x000b8dad) cale_month_pane_t1

0x17c0,	// (0x000af6fd) cale_month_week_pane_ParamLimits

0x2040,	// (0x000aff7d) popup_call_status_window_g1_ParamLimits

0x2054,	// (0x000aff91) popup_call_status_window_g2_ParamLimits

0x2068,	// (0x000affa5) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x000bd278) popup_call_status_window_g_ParamLimits

0xb22d,	// (0x000b916a) aid_call2_pane

0x285b,	// (0x000b0798) msg_header_pane_g1

0x29b6,	// (0x000b08f3) postcard_address2_pane_ParamLimits

0x29b6,	// (0x000b08f3) postcard_address2_pane

0x29cc,	// (0x000b0909) postcard_message2_pane_ParamLimits

0x29cc,	// (0x000b0909) postcard_message2_pane

0x3541,	// (0x000b147e) message2_row_pane_ParamLimits

0x3541,	// (0x000b147e) message2_row_pane

0xca03,	// (0x000ba940) address2_row_pane_ParamLimits

0xca03,	// (0x000ba940) address2_row_pane

0xca16,	// (0x000ba953) postcard_message2_row_pane_g1

0xca1e,	// (0x000ba95b) postcard_message2_row_pane_t1

0xca16,	// (0x000ba953) address2_row_pane_g1

0xca1e,	// (0x000ba95b) address2_row_pane_t1

0x08ce,	// (0x000ae80b) aid_size_cell_vorec

0x9a4d,	// (0x000b798a) main_rss_pane

0x3564,	// (0x000b14a1) rss_list_single_pane_ParamLimits

0x3564,	// (0x000b14a1) rss_list_single_pane

0xca2c,	// (0x000ba969) rss_list_single_pane_t1

0xca3a,	// (0x000ba977) rss_list_single_pane_t2

0x0001,

0xf5e6,	// (0x000bd523) rss_list_single_pane_t

0x9a4d,	// (0x000b798a) main_camera2_pane

0x9a4d,	// (0x000b798a) main_video2_pane

0x37b3,	// (0x000b16f0) cams_zoom_pane_cp2_ParamLimits

0x37b3,	// (0x000b16f0) cams_zoom_pane_cp2

0x37ca,	// (0x000b1707) image2_vga_pane_ParamLimits

0x37ca,	// (0x000b1707) image2_vga_pane

0x3812,	// (0x000b174f) main_camera2_pane_g1_ParamLimits

0x3812,	// (0x000b174f) main_camera2_pane_g1

0x3832,	// (0x000b176f) main_camera2_pane_g2_ParamLimits

0x3832,	// (0x000b176f) main_camera2_pane_g2

0x3849,	// (0x000b1786) main_camera2_pane_g3_ParamLimits

0x3849,	// (0x000b1786) main_camera2_pane_g3

0x3860,	// (0x000b179d) main_camera2_pane_g4_ParamLimits

0x3860,	// (0x000b179d) main_camera2_pane_g4

0x3877,	// (0x000b17b4) main_camera2_pane_g5_ParamLimits

0x3877,	// (0x000b17b4) main_camera2_pane_g5

0x388e,	// (0x000b17cb) main_camera2_pane_g6_ParamLimits

0x388e,	// (0x000b17cb) main_camera2_pane_g6

0x38a5,	// (0x000b17e2) main_camera2_pane_g7_ParamLimits

0x38a5,	// (0x000b17e2) main_camera2_pane_g7

0x38bc,	// (0x000b17f9) main_camera2_pane_g8_ParamLimits

0x38bc,	// (0x000b17f9) main_camera2_pane_g8

0x0008,

0xf607,	// (0x000bd544) main_camera2_pane_g_ParamLimits

0xf607,	// (0x000bd544) main_camera2_pane_g

0x38ea,	// (0x000b1827) main_camera2_pane_t1_ParamLimits

0x38ea,	// (0x000b1827) main_camera2_pane_t1

0x391f,	// (0x000b185c) main_camera2_pane_t2_ParamLimits

0x391f,	// (0x000b185c) main_camera2_pane_t2

0x393c,	// (0x000b1879) main_camera2_pane_t3_ParamLimits

0x393c,	// (0x000b1879) main_camera2_pane_t3

0x399a,	// (0x000b18d7) main_camera2_pane_t4_ParamLimits

0x399a,	// (0x000b18d7) main_camera2_pane_t4

0x0006,

0xf61a,	// (0x000bd557) main_camera2_pane_t_ParamLimits

0xf61a,	// (0x000bd557) main_camera2_pane_t

0x3a23,	// (0x000b1960) cams_zoom_pane_cp4_ParamLimits

0x3a23,	// (0x000b1960) cams_zoom_pane_cp4

0x3a39,	// (0x000b1976) image2_cif_pane_ParamLimits

0x3a39,	// (0x000b1976) image2_cif_pane

0x3a64,	// (0x000b19a1) image2_subqcif_pane_ParamLimits

0x3a64,	// (0x000b19a1) image2_subqcif_pane

0x3a7f,	// (0x000b19bc) main_video2_pane_g1_ParamLimits

0x3a7f,	// (0x000b19bc) main_video2_pane_g1

0x3a99,	// (0x000b19d6) main_video2_pane_g2_ParamLimits

0x3a99,	// (0x000b19d6) main_video2_pane_g2

0x3aaf,	// (0x000b19ec) main_video2_pane_g3_ParamLimits

0x3aaf,	// (0x000b19ec) main_video2_pane_g3

0x3ac5,	// (0x000b1a02) main_video2_pane_g4_ParamLimits

0x3ac5,	// (0x000b1a02) main_video2_pane_g4

0x3adb,	// (0x000b1a18) main_video2_pane_g5_ParamLimits

0x3adb,	// (0x000b1a18) main_video2_pane_g5

0x3af1,	// (0x000b1a2e) main_video2_pane_g6_ParamLimits

0x3af1,	// (0x000b1a2e) main_video2_pane_g6

0x0005,

0xf629,	// (0x000bd566) main_video2_pane_g_ParamLimits

0xf629,	// (0x000bd566) main_video2_pane_g

0x3b0b,	// (0x000b1a48) main_video2_pane_t1_ParamLimits

0x3b0b,	// (0x000b1a48) main_video2_pane_t1

0x3b2f,	// (0x000b1a6c) main_video2_pane_t2_ParamLimits

0x3b2f,	// (0x000b1a6c) main_video2_pane_t2

0x3b7f,	// (0x000b1abc) main_video2_pane_t3_ParamLimits

0x3b7f,	// (0x000b1abc) main_video2_pane_t3

0x0002,

0xf636,	// (0x000bd573) main_video2_pane_t_ParamLimits

0xf636,	// (0x000bd573) main_video2_pane_t

0x3035,	// (0x000b0f72) call_muted_g2

0x0001,

0xf5d8,	// (0x000bd515) call_muted_g

0x9a4d,	// (0x000b798a) main_mup2_pane

0x3bc7,	// (0x000b1b04) main_mup2_pane_g1_ParamLimits

0x3bc7,	// (0x000b1b04) main_mup2_pane_g1

0x3bd3,	// (0x000b1b10) main_mup2_pane_g2_ParamLimits

0x3bd3,	// (0x000b1b10) main_mup2_pane_g2

0xa10f,	// (0x000b804c) main_mup_pane_g13_cp1

0xa117,	// (0x000b8054) mup_volume_pane_cp1

0x3bf1,	// (0x000b1b2e) main_mup2_pane_g4_ParamLimits

0x3bf1,	// (0x000b1b2e) main_mup2_pane_g4

0x3c03,	// (0x000b1b40) main_mup2_pane_g5_ParamLimits

0x3c03,	// (0x000b1b40) main_mup2_pane_g5

0x3c15,	// (0x000b1b52) main_mup2_pane_g6_ParamLimits

0x3c15,	// (0x000b1b52) main_mup2_pane_g6

0x3c27,	// (0x000b1b64) main_mup2_pane_g7_ParamLimits

0x3c27,	// (0x000b1b64) main_mup2_pane_g7

0x0006,

0xf63d,	// (0x000bd57a) main_mup2_pane_g_ParamLimits

0xf63d,	// (0x000bd57a) main_mup2_pane_g

0x3c3f,	// (0x000b1b7c) main_mup2_pane_t1_ParamLimits

0x3c3f,	// (0x000b1b7c) main_mup2_pane_t1

0x3c55,	// (0x000b1b92) main_mup2_pane_t2_ParamLimits

0x3c55,	// (0x000b1b92) main_mup2_pane_t2

0x3c6b,	// (0x000b1ba8) main_mup2_pane_t3_ParamLimits

0x3c6b,	// (0x000b1ba8) main_mup2_pane_t3

0x3c81,	// (0x000b1bbe) main_mup2_pane_t4_ParamLimits

0x3c81,	// (0x000b1bbe) main_mup2_pane_t4

0x3c99,	// (0x000b1bd6) main_mup2_pane_t5_ParamLimits

0x3c99,	// (0x000b1bd6) main_mup2_pane_t5

0x3cb1,	// (0x000b1bee) main_mup2_pane_t6_ParamLimits

0x3cb1,	// (0x000b1bee) main_mup2_pane_t6

0x0005,

0xf64c,	// (0x000bd589) main_mup2_pane_t_ParamLimits

0xf64c,	// (0x000bd589) main_mup2_pane_t

0x3ce1,	// (0x000b1c1e) mup2_visualizer_pane_ParamLimits

0x3ce1,	// (0x000b1c1e) mup2_visualizer_pane

0x3d0f,	// (0x000b1c4c) mup_progress_pane_cp_ParamLimits

0x3d0f,	// (0x000b1c4c) mup_progress_pane_cp

0xa0fa,	// (0x000b8037) mup_volume_pane_cp_ParamLimits

0xa0fa,	// (0x000b8037) mup_volume_pane_cp

0x3d25,	// (0x000b1c62) mup2_visualizer_pane_g1_ParamLimits

0x3d25,	// (0x000b1c62) mup2_visualizer_pane_g1

0xcab2,	// (0x000ba9ef) mup2_visualizer_pane_g2_ParamLimits

0xcab2,	// (0x000ba9ef) mup2_visualizer_pane_g2

0x3d3a,	// (0x000b1c77) mup2_visualizer_pane_g3_ParamLimits

0x3d3a,	// (0x000b1c77) mup2_visualizer_pane_g3

0x0002,

0xf659,	// (0x000bd596) mup2_visualizer_pane_g_ParamLimits

0xf659,	// (0x000bd596) mup2_visualizer_pane_g

0xb875,	// (0x000b97b2) aid_size_cell_fmradio

0x31e5,	// (0x000b1122) aid_height_parent_landcape

0xacce,	// (0x000b8c0b) wml_content_pane_cp

0xacd6,	// (0x000b8c13) wml_tabs_pane

0xacdf,	// (0x000b8c1c) popup_wml_miniature_window

0xace7,	// (0x000b8c24) scroll_pane_cp021

0xacfb,	// (0x000b8c38) wml_content_pane_comp8

0x9a4d,	// (0x000b798a) bg_popup_sub_pane_cp05

0xcad0,	// (0x000baa0d) popup_wml_miniature_window_g1

0xcad8,	// (0x000baa15) wml_miniature_view_pane

0x3d46,	// (0x000b1c83) aid_size_wml_view

0x3d4e,	// (0x000b1c8b) wml_miniature_view_pane_g1

0x3d57,	// (0x000b1c94) wml_miniature_view_pane_g2

0x3d60,	// (0x000b1c9d) wml_miniature_view_pane_g3

0x3d68,	// (0x000b1ca5) wml_miniature_view_pane_g4

0x3d70,	// (0x000b1cad) wml_miniature_view_pane_g5

0x3d78,	// (0x000b1cb5) wml_miniature_view_pane_g6

0x3d80,	// (0x000b1cbd) wml_miniature_view_pane_g7

0x3d88,	// (0x000b1cc5) wml_miniature_view_pane_g8

0x0007,

0xf660,	// (0x000bd59d) wml_miniature_view_pane_g

0xcae0,	// (0x000baa1d) background_graphic_ParamLimits

0xcae0,	// (0x000baa1d) background_graphic

0xcaec,	// (0x000baa29) wml_tabs_2_pane

0xcaf5,	// (0x000baa32) wml_tabs_3_pane_ParamLimits

0xcaf5,	// (0x000baa32) wml_tabs_3_pane

0xcb07,	// (0x000baa44) wml_tabs_4_pane_ParamLimits

0xcb07,	// (0x000baa44) wml_tabs_4_pane

0xcb1d,	// (0x000baa5a) wml_tabs_5_pane_ParamLimits

0xcb1d,	// (0x000baa5a) wml_tabs_5_pane

0xcb37,	// (0x000baa74) wml_tabs_pane_g2_ParamLimits

0xcb37,	// (0x000baa74) wml_tabs_pane_g2

0xcb4b,	// (0x000baa88) wml_tabs_pane_g3_ParamLimits

0xcb4b,	// (0x000baa88) wml_tabs_pane_g3

0x3d90,	// (0x000b1ccd) wml_tabs_2_active_pane_ParamLimits

0x3d90,	// (0x000b1ccd) wml_tabs_2_active_pane

0x3da4,	// (0x000b1ce1) wml_tabs_2_passive_pane_ParamLimits

0x3da4,	// (0x000b1ce1) wml_tabs_2_passive_pane

0x3db8,	// (0x000b1cf5) wml_tabs_3_active_pane_cp_ParamLimits

0x3db8,	// (0x000b1cf5) wml_tabs_3_active_pane_cp

0x3dcd,	// (0x000b1d0a) wml_tabs_3_passive_pane_ParamLimits

0x3dcd,	// (0x000b1d0a) wml_tabs_3_passive_pane

0x3de0,	// (0x000b1d1d) wml_tabs_3_passive_pane_cp_ParamLimits

0x3de0,	// (0x000b1d1d) wml_tabs_3_passive_pane_cp

0x3df7,	// (0x000b1d34) tabs_4_active_pane

0x3dff,	// (0x000b1d3c) tabs_4_passive_pane

0x3e09,	// (0x000b1d46) tabs_4_passive_pane_cp

0x3e11,	// (0x000b1d4e) tabs_4_passive_pane_cp2

0x2ef9,	// (0x000b0e36) aid_height_text

0x2567,	// (0x000b04a4) mup_volume_cont_pane_ParamLimits

0x2567,	// (0x000b04a4) mup_volume_cont_pane

0xfecd,	// (0x000ade0a) aid_size_cell_pinb

0xfed7,	// (0x000ade14) aid_size_list_pinb

0x3cfb,	// (0x000b1c38) mup2_volume_cont_pane_ParamLimits

0x3cfb,	// (0x000b1c38) mup2_volume_cont_pane

0xa0e6,	// (0x000b8023) mup2_volume_cont_pane_g1_ParamLimits

0xa0e6,	// (0x000b8023) mup2_volume_cont_pane_g1

0xfb5a,	// (0x000ada97) aid_size_cell_touch_ParamLimits

0xfb5a,	// (0x000ada97) aid_size_cell_touch

0xfdf1,	// (0x000add2e) touch_pane_ParamLimits

0xfdf1,	// (0x000add2e) touch_pane

0xf09d,	// (0x000bcfda) main_rss2_pane

0xcb68,	// (0x000baaa5) listscroll_rss2_pane

0xcb71,	// (0x000baaae) rss2_navigation_pane

0xcb79,	// (0x000baab6) list_rss2_pane

0xb351,	// (0x000b928e) scroll_pane_cp22

0xcb81,	// (0x000baabe) rss2_navigation_pane_g1

0xcb8a,	// (0x000baac7) rss2_navigation_pane_g2

0xcb92,	// (0x000baacf) rss2_navigation_pane_g3

0x0002,

0xf671,	// (0x000bd5ae) rss2_navigation_pane_g

0xcb9a,	// (0x000baad7) rss2_navigation_pane_t1

0x3e1b,	// (0x000b1d58) rss2_list_single_pane_ParamLimits

0x3e1b,	// (0x000b1d58) rss2_list_single_pane

0xcba8,	// (0x000baae5) rss2_list_single_pane_t2

0xcbb6,	// (0x000baaf3) rss2_list_single_pane_t3_ParamLimits

0xcbb6,	// (0x000baaf3) rss2_list_single_pane_t3

0xcbd3,	// (0x000bab10) rss2_list_single_pane_t4

0x1e36,	// (0x000afd73) smil_status_pane_g1

0x95f7,	// (0x000b7534) main_image2_pane_ParamLimits

0x95f7,	// (0x000b7534) main_image2_pane

0x38d3,	// (0x000b1810) main_camera2_pane_g9_ParamLimits

0x38d3,	// (0x000b1810) main_camera2_pane_g9

0x39ef,	// (0x000b192c) main_camera2_pane_t5_ParamLimits

0x39ef,	// (0x000b192c) main_camera2_pane_t5

0xa0bb,	// (0x000b7ff8) main_camera2_pane_t6_ParamLimits

0xa0bb,	// (0x000b7ff8) main_camera2_pane_t6

0x3e35,	// (0x000b1d72) main_image2_pane_g1_ParamLimits

0x3e35,	// (0x000b1d72) main_image2_pane_g1

0x2c10,	// (0x000b0b4d) smil2_video_pane_ParamLimits

0x2c10,	// (0x000b0b4d) smil2_video_pane

0xfb9a,	// (0x000adad7) aid_zoom_text_primary_cp

0xfd91,	// (0x000adcce) popup_preview_fixed_window

0xac37,	// (0x000b8b74) im_reading_pane_g1

0x37a5,	// (0x000b16e2) cams2_bc_adjust_pane_cp_ParamLimits

0x37a5,	// (0x000b16e2) cams2_bc_adjust_pane_cp

0x3a15,	// (0x000b1952) cams2_bc_adjust_pane_ParamLimits

0x3a15,	// (0x000b1952) cams2_bc_adjust_pane

0xcbe1,	// (0x000bab1e) cams2_bc_adjust_pane_g1

0xa11f,	// (0x000b805c) cams2_slider_pane

0xa128,	// (0x000b8065) cams2_slider_pane_g1

0xa131,	// (0x000b806e) cams2_slider_pane_g2

0x0006,

0xf678,	// (0x000bd5b5) cams2_slider_pane_g

0xffc9,	// (0x000adf06) calc_display_pane_ParamLimits

0xffee,	// (0x000adf2b) calc_paper_pane_ParamLimits

0x0011,	// (0x000adf4e) grid_calc_pane_ParamLimits

0x9f4f,	// (0x000b7e8c) popup_clock_digital_window_t1_ParamLimits

0xb812,	// (0x000b974f) main_image_pane_t1

0xffa9,	// (0x000adee6) aid_size_cell_calc_ParamLimits

0xffa9,	// (0x000adee6) aid_size_cell_calc

0x323b,	// (0x000b1178) popup_blid_sat_info2_window_ParamLimits

0x323b,	// (0x000b1178) popup_blid_sat_info2_window

0xcbf1,	// (0x000bab2e) aid_size_cell_blid

0xcbf9,	// (0x000bab36) bg_popup_window_pane_cp07

0xcc1c,	// (0x000bab59) grid_popup_blid_pane

0xcc26,	// (0x000bab63) heading_pane_cp05_ParamLimits

0xcc26,	// (0x000bab63) heading_pane_cp05

0xccf0,	// (0x000bac2d) cell_popup_blid_pane_ParamLimits

0xccf0,	// (0x000bac2d) cell_popup_blid_pane

0xcd1a,	// (0x000bac57) cell_popup_blid_pane_g1

0xcd22,	// (0x000bac5f) cell_popup_blid_pane_t1

0x3ccb,	// (0x000b1c08) mup2_indicator_pane_ParamLimits

0x3ccb,	// (0x000b1c08) mup2_indicator_pane

0xab25,	// (0x000b8a62) mup2_visualizer_osc_pane

0xcabe,	// (0x000ba9fb) mup2_visualizer_spec_pane_ParamLimits

0xcabe,	// (0x000ba9fb) mup2_visualizer_spec_pane

0x3e4b,	// (0x000b1d88) mup2_spec_half_pane

0x3e54,	// (0x000b1d91) mup2_spec_half_pane_cp

0x3e5c,	// (0x000b1d99) mup2_spec_bar_pane_ParamLimits

0x3e5c,	// (0x000b1d99) mup2_spec_bar_pane

0xca48,	// (0x000ba985) mup2_spec_bar_pane_g1

0xca52,	// (0x000ba98f) mup2_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x000bd528) mup2_spec_bar_pane_g

0x3e7c,	// (0x000b1db9) mup2_osc_middle_pane

0xca64,	// (0x000ba9a1) mup2_visualizer_osc_pane_g1

0x9625,	// (0x000b7562) popup_number_entry_window_t1_ParamLimits

0x9638,	// (0x000b7575) popup_number_entry_window_t2_ParamLimits

0x964a,	// (0x000b7587) popup_number_entry_window_t3_ParamLimits

0x965c,	// (0x000b7599) popup_number_entry_window_t5_ParamLimits

0x965c,	// (0x000b7599) popup_number_entry_window_t5

0xf0af,	// (0x000bcfec) popup_number_entry_window_t_ParamLimits

0x9691,	// (0x000b75ce) text_title_cp2_ParamLimits

0xa00f,	// (0x000b7f4c) aid_hotspot_pointer_text2_pane

0xa035,	// (0x000b7f72) main_viewer_pane_g9_ParamLimits

0xa035,	// (0x000b7f72) main_viewer_pane_g9

0xae70,	// (0x000b8dad) cale_month_pane_t1_ParamLimits

0xaead,	// (0x000b8dea) bg_cale_pane_ParamLimits

0xaec5,	// (0x000b8e02) list_cale_pane_ParamLimits

0xaed6,	// (0x000b8e13) listscroll_cale_day_pane_t1

0xaee8,	// (0x000b8e25) scroll_pane_cp09_ParamLimits

0x259d,	// (0x000b04da) main_mup_eq_pane_t1_ParamLimits

0x259d,	// (0x000b04da) main_mup_eq_pane_t1

0x25b9,	// (0x000b04f6) main_mup_eq_pane_t2_ParamLimits

0x25b9,	// (0x000b04f6) main_mup_eq_pane_t2

0x25d5,	// (0x000b0512) main_mup_eq_pane_t3_ParamLimits

0x25d5,	// (0x000b0512) main_mup_eq_pane_t3

0x25f3,	// (0x000b0530) main_mup_eq_pane_t4_ParamLimits

0x25f3,	// (0x000b0530) main_mup_eq_pane_t4

0x2611,	// (0x000b054e) main_mup_eq_pane_t5_ParamLimits

0x2611,	// (0x000b054e) main_mup_eq_pane_t5

0x262f,	// (0x000b056c) main_mup_eq_pane_t6_ParamLimits

0x262f,	// (0x000b056c) main_mup_eq_pane_t6

0x2645,	// (0x000b0582) main_mup_eq_pane_t7_ParamLimits

0x2645,	// (0x000b0582) main_mup_eq_pane_t7

0x265b,	// (0x000b0598) main_mup_eq_pane_t8_ParamLimits

0x265b,	// (0x000b0598) main_mup_eq_pane_t8

0x2671,	// (0x000b05ae) main_mup_eq_pane_t9_ParamLimits

0x2671,	// (0x000b05ae) main_mup_eq_pane_t9

0x268d,	// (0x000b05ca) main_mup_eq_pane_t10_ParamLimits

0x268d,	// (0x000b05ca) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x000bd377) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x000bd377) main_mup_eq_pane_t

0x2762,	// (0x000b069f) mup_equalizer_pane_cp5_ParamLimits

0x277a,	// (0x000b06b7) mup_equalizer_pane_cp6_ParamLimits

0x2792,	// (0x000b06cf) mup_equalizer_pane_cp7_ParamLimits

0xf09d,	// (0x000bcfda) main_gallery_pane

0xca6d,	// (0x000ba9aa) smil2_volume_pane

0xca75,	// (0x000ba9b2) smil_status_volume_pane_g1_ParamLimits

0xca88,	// (0x000ba9c5) smil_status_volume_pane_g2_ParamLimits

0xa099,	// (0x000b7fd6) smil_status_volume_pane_g3_ParamLimits

0xf5f0,	// (0x000bd52d) smil_status_volume_pane_g_ParamLimits

0xcbf9,	// (0x000bab36) bg_popup_window_pane_cp07_ParamLimits

0xcc07,	// (0x000bab44) blid_firmament_pane

0x3e85,	// (0x000b1dc2) aid_size_cell_gallery_ParamLimits

0x3e85,	// (0x000b1dc2) aid_size_cell_gallery

0x3e9b,	// (0x000b1dd8) grid_gallery_pane_ParamLimits

0x3e9b,	// (0x000b1dd8) grid_gallery_pane

0x3eb6,	// (0x000b1df3) cell_gallery_pane_ParamLimits

0x3eb6,	// (0x000b1df3) cell_gallery_pane

0xcd30,	// (0x000bac6d) bg_cell_gallery_focus_pane_ParamLimits

0xcd30,	// (0x000bac6d) bg_cell_gallery_focus_pane

0xcd42,	// (0x000bac7f) cell_gallery_pane_g1_ParamLimits

0xcd42,	// (0x000bac7f) cell_gallery_pane_g1

0x3f07,	// (0x000b1e44) cell_gallery_pane_g2_ParamLimits

0x3f07,	// (0x000b1e44) cell_gallery_pane_g2

0x3f14,	// (0x000b1e51) cell_gallery_pane_g3_ParamLimits

0x3f14,	// (0x000b1e51) cell_gallery_pane_g3

0xcd4e,	// (0x000bac8b) cell_gallery_pane_g4_ParamLimits

0xcd4e,	// (0x000bac8b) cell_gallery_pane_g4

0x0003,

0xf69e,	// (0x000bd5db) cell_gallery_pane_g_ParamLimits

0xf69e,	// (0x000bd5db) cell_gallery_pane_g

0xcd5a,	// (0x000bac97) bg_cell_gallery_focus_pane_g1

0xcd62,	// (0x000bac9f) bg_cell_gallery_focus_pane_g2

0xcd6a,	// (0x000baca7) bg_cell_gallery_focus_pane_g3

0xcd72,	// (0x000bacaf) bg_cell_gallery_focus_pane_g4

0xcd7a,	// (0x000bacb7) bg_cell_gallery_focus_pane_g5

0xcd82,	// (0x000bacbf) bg_cell_gallery_focus_pane_g6

0xcd8a,	// (0x000bacc7) bg_cell_gallery_focus_pane_g7

0xcd92,	// (0x000baccf) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6a7,	// (0x000bd5e4) bg_cell_gallery_focus_pane_g

0xcd9a,	// (0x000bacd7) aid_firma_cardinal

0xcdae,	// (0x000baceb) blid_firmament_pane_t1

0xcdc5,	// (0x000bad02) blid_firmament_pane_t2

0xcddc,	// (0x000bad19) blid_firmament_pane_t3

0xcdf3,	// (0x000bad30) blid_firmament_pane_t4

0x0003,

0xf6b8,	// (0x000bd5f5) blid_firmament_pane_t

0xce0a,	// (0x000bad47) blid_sat_info_pane

0xce1a,	// (0x000bad57) blid_sat_info_pane_g1

0xce1a,	// (0x000bad57) blid_sat_info_pane_g2

0x0001,

0xf6c1,	// (0x000bd5fe) blid_sat_info_pane_g

0xce24,	// (0x000bad61) blid_sat_info_pane_t1

0xce32,	// (0x000bad6f) smil2_volume_content_pane

0xce3b,	// (0x000bad78) smil2_volume_pane_g1

0x9e34,	// (0x000b7d71) smil2_volume_content_pane_g1

0xce43,	// (0x000bad80) smil2_volume_content_pane_g2

0xce4c,	// (0x000bad89) smil2_volume_content_pane_g3

0xce55,	// (0x000bad92) smil2_volume_content_pane_g4

0xce5e,	// (0x000bad9b) smil2_volume_content_pane_g5

0xce67,	// (0x000bada4) smil2_volume_content_pane_g6

0xce70,	// (0x000badad) smil2_volume_content_pane_g7

0xce79,	// (0x000badb6) smil2_volume_content_pane_g8

0xce82,	// (0x000badbf) smil2_volume_content_pane_g9

0xce8b,	// (0x000badc8) smil2_volume_content_pane_g10

0x0009,

0xf6c6,	// (0x000bd603) smil2_volume_content_pane_g

0x062f,	// (0x000ae56c) cale_week_day_heading_pane_t1_ParamLimits

0x0659,	// (0x000ae596) cale_week_day_heading_pane_t2_ParamLimits

0x0688,	// (0x000ae5c5) cale_week_day_heading_pane_t3_ParamLimits

0x06b7,	// (0x000ae5f4) cale_week_day_heading_pane_t4_ParamLimits

0x06e6,	// (0x000ae623) cale_week_day_heading_pane_t5_ParamLimits

0x0719,	// (0x000ae656) cale_week_day_heading_pane_t6_ParamLimits

0x0750,	// (0x000ae68d) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x000bd0f3) cale_week_day_heading_pane_t_ParamLimits

0xaaca,	// (0x000b8a07) bg_cale_side_pane_ParamLimits

0x077a,	// (0x000ae6b7) cale_week_time_pane_t1_ParamLimits

0x0794,	// (0x000ae6d1) cale_week_time_pane_t2_ParamLimits

0x07ae,	// (0x000ae6eb) cale_week_time_pane_t3_ParamLimits

0x07c8,	// (0x000ae705) cale_week_time_pane_t4_ParamLimits

0x07e2,	// (0x000ae71f) cale_week_time_pane_t5_ParamLimits

0x07fc,	// (0x000ae739) cale_week_time_pane_t6_ParamLimits

0x081c,	// (0x000ae759) cale_week_time_pane_t7_ParamLimits

0x0842,	// (0x000ae77f) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x000bd102) cale_week_time_pane_t_ParamLimits

0x0868,	// (0x000ae7a5) cell_cale_week_pane_g2_ParamLimits

0xaaca,	// (0x000b8a07) bg_cale_side_pane_cp01_ParamLimits

0x1be9,	// (0x000afb26) cale_month_week_pane_t1_ParamLimits

0x1c02,	// (0x000afb3f) cale_month_week_pane_t2_ParamLimits

0x1c1b,	// (0x000afb58) cale_month_week_pane_t3_ParamLimits

0x1c34,	// (0x000afb71) cale_month_week_pane_t4_ParamLimits

0x1c4d,	// (0x000afb8a) cale_month_week_pane_t5_ParamLimits

0x1c66,	// (0x000afba3) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x000bd1d7) cale_month_week_pane_t_ParamLimits

0x9ecf,	// (0x000b7e0c) cell_cale_month_pane_g1_ParamLimits

0xf09d,	// (0x000bcfda) main_cale_event_viewer_pane

0x95ed,	// (0x000b752a) listscroll_cale_event_viewer_pane

0xce94,	// (0x000badd1) list_cale_ev_pane

0xce9c,	// (0x000badd9) scroll_pane_cp023

0x3f21,	// (0x000b1e5e) field_cale_ev_pane_ParamLimits

0x3f21,	// (0x000b1e5e) field_cale_ev_pane

0xcea8,	// (0x000bade5) field_cale_ev_content_pane_ParamLimits

0xcea8,	// (0x000bade5) field_cale_ev_content_pane

0xceb4,	// (0x000badf1) field_cale_ev_pane_g1_ParamLimits

0xceb4,	// (0x000badf1) field_cale_ev_pane_g1

0xcec0,	// (0x000badfd) field_cale_ev_pane_g2_ParamLimits

0xcec0,	// (0x000badfd) field_cale_ev_pane_g2

0xced8,	// (0x000bae15) field_cale_ev_pane_g3_ParamLimits

0xced8,	// (0x000bae15) field_cale_ev_pane_g3

0x0002,

0xf6db,	// (0x000bd618) field_cale_ev_pane_g_ParamLimits

0xf6db,	// (0x000bd618) field_cale_ev_pane_g

0xcef0,	// (0x000bae2d) field_cale_ev_pane_t1_ParamLimits

0xcef0,	// (0x000bae2d) field_cale_ev_pane_t1

0x3f45,	// (0x000b1e82) field_cale_ev_content_pane_t1_ParamLimits

0x3f45,	// (0x000b1e82) field_cale_ev_content_pane_t1

0xb6f8,	// (0x000b9635) bg_button_pane_cp01

0x02e7,	// (0x000ae224) listscroll_cale_week_pane_ParamLimits

0xaa92,	// (0x000b89cf) popup_toolbar_window_cp01

0xaa9b,	// (0x000b89d8) listscroll_cale_week_pane_t1_ParamLimits

0x02e7,	// (0x000ae224) listscroll_cale_day_pane_ParamLimits

0xaa92,	// (0x000b89cf) popup_toolbar_window_cp02

0xaed6,	// (0x000b8e13) listscroll_cale_day_pane_t1_ParamLimits

0x3203,	// (0x000b1140) main_cale_month_pane_ParamLimits

0xa084,	// (0x000b7fc1) popup_toolbar_window_cp03_ParamLimits

0xa084,	// (0x000b7fc1) popup_toolbar_window_cp03

0x2ace,	// (0x000b0a0b) main_image_pane_g2_ParamLimits

0x2ace,	// (0x000b0a0b) main_image_pane_g2

0x2adf,	// (0x000b0a1c) main_image_pane_g3_ParamLimits

0x2adf,	// (0x000b0a1c) main_image_pane_g3

0x0002,

0xf4cc,	// (0x000bd409) main_image_pane_g_ParamLimits

0xf4cc,	// (0x000bd409) main_image_pane_g

0xb812,	// (0x000b974f) main_image_pane_t1_ParamLimits

0x2af0,	// (0x000b0a2d) main_image_pane_t2_ParamLimits

0x2af0,	// (0x000b0a2d) main_image_pane_t2

0x2b02,	// (0x000b0a3f) main_image_pane_t3_ParamLimits

0x2b02,	// (0x000b0a3f) main_image_pane_t3

0x2b2a,	// (0x000b0a67) main_image_pane_t4_ParamLimits

0x2b2a,	// (0x000b0a67) main_image_pane_t4

0x0003,

0xf4d3,	// (0x000bd410) main_image_pane_t_ParamLimits

0xf4d3,	// (0x000bd410) main_image_pane_t

0x2b4a,	// (0x000b0a87) popup_image_details_window_cp01

0x2b54,	// (0x000b0a91) popup_toobar_trans_pane_cp01_ParamLimits

0x2b54,	// (0x000b0a91) popup_toobar_trans_pane_cp01

0x332e,	// (0x000b126b) popup_image_details_window_ParamLimits

0x332e,	// (0x000b126b) popup_image_details_window

0xa055,	// (0x000b7f92) popup_image_focus_window

0x375f,	// (0x000b169c) camera2_autofocus_pane_ParamLimits

0x375f,	// (0x000b169c) camera2_autofocus_pane

0x95ed,	// (0x000b752a) bg_popup_sub_pane_cp06

0xcf07,	// (0x000bae44) popup_image_focus_window_g1

0xcf0f,	// (0x000bae4c) popup_image_focus_window_g2

0xcf17,	// (0x000bae54) popup_image_focus_window_g3

0xcf1f,	// (0x000bae5c) popup_image_focus_window_g4

0x0003,

0xf6e2,	// (0x000bd61f) popup_image_focus_window_g

0xcf27,	// (0x000bae64) popup_image_focus_window_t1

0xcf35,	// (0x000bae72) popup_image_focus_window_t2

0xcf45,	// (0x000bae82) popup_image_focus_window_t3

0x0002,

0xf6eb,	// (0x000bd628) popup_image_focus_window_t

0xcf53,	// (0x000bae90) camera2_autofocus_pane_g1

0xbe7c,	// (0x000b9db9) bg_tb_trans_pane_cp01

0xcf61,	// (0x000bae9e) popup_image_details_window_g1

0xcf74,	// (0x000baeb1) popup_image_details_window_g2

0x0002,

0xf6fd,	// (0x000bd63a) popup_image_details_window_g

0xcf9d,	// (0x000baeda) popup_image_details_window_t1

0xcfaf,	// (0x000baeec) popup_image_details_window_t2

0xcfc8,	// (0x000baf05) popup_image_details_window_t3

0xcfdc,	// (0x000baf19) popup_image_details_window_t4

0xcff7,	// (0x000baf34) popup_image_details_window_t5

0x0004,

0xf704,	// (0x000bd641) popup_image_details_window_t

0x9d61,	// (0x000b7c9e) bg_calc_paper_pane_ParamLimits

0xf09d,	// (0x000bcfda) grid_highlight_pane_cp013

0x9d75,	// (0x000b7cb2) list_calc_pane_ParamLimits

0x9d87,	// (0x000b7cc4) scroll_pane_cp024

0x9d8f,	// (0x000b7ccc) bg_calc_display_pane_ParamLimits

0x0111,	// (0x000ae04e) calc_display_pane_t1_ParamLimits

0x0123,	// (0x000ae060) calc_display_pane_t2_ParamLimits

0x9d9b,	// (0x000b7cd8) calc_display_pane_t3_ParamLimits

0xf136,	// (0x000bd073) calc_display_pane_t_ParamLimits

0x01e4,	// (0x000ae121) cell_calc_pane_g2

0x0001,

0xf153,	// (0x000bd090) cell_calc_pane_g

0x01ed,	// (0x000ae12a) cell_calc_pane_t1

0x9e12,	// (0x000b7d4f) grid_highlight_pane_cp02_ParamLimits

0x9e28,	// (0x000b7d65) toolbar_button_pane_cp01_ParamLimits

0x9e28,	// (0x000b7d65) toolbar_button_pane_cp01

0xb857,	// (0x000b9794) temp_image_control_pane_ParamLimits

0xb857,	// (0x000b9794) temp_image_control_pane

0x95f7,	// (0x000b7534) main_mp3_pane

0xd011,	// (0x000baf4e) temp_image_control_pane_g1_ParamLimits

0xd011,	// (0x000baf4e) temp_image_control_pane_g1

0xd01f,	// (0x000baf5c) temp_image_control_pane_g2_ParamLimits

0xd01f,	// (0x000baf5c) temp_image_control_pane_g2

0xd031,	// (0x000baf6e) temp_image_control_pane_g3_ParamLimits

0xd031,	// (0x000baf6e) temp_image_control_pane_g3

0x3f96,	// (0x000b1ed3) temp_image_control_pane_g4_ParamLimits

0x3f96,	// (0x000b1ed3) temp_image_control_pane_g4

0x0003,

0xf70f,	// (0x000bd64c) temp_image_control_pane_g_ParamLimits

0xf70f,	// (0x000bd64c) temp_image_control_pane_g

0xd011,	// (0x000baf4e) main_mp3_pane_g1

0x3fa9,	// (0x000b1ee6) main_mp3_pane_g2

0x0007,

0xf718,	// (0x000bd655) main_mp3_pane_g

0xd074,	// (0x000bafb1) main_mp3_pane_t1

0xab42,	// (0x000b8a7f) main_camera_pane_g8_ParamLimits

0xab42,	// (0x000b8a7f) main_camera_pane_g8

0x0b7a,	// (0x000aeab7) main_video_pane_g7_ParamLimits

0x0b7a,	// (0x000aeab7) main_video_pane_g7

0xa0d4,	// (0x000b8011) main_camera2_pane_t7_ParamLimits

0xa0d4,	// (0x000b8011) main_camera2_pane_t7

0xac8e,	// (0x000b8bcb) scroll_pane_cp025_ParamLimits

0xac8e,	// (0x000b8bcb) scroll_pane_cp025

0xaca2,	// (0x000b8bdf) scroll_pane_cp026_ParamLimits

0xaca2,	// (0x000b8bdf) scroll_pane_cp026

0xacb1,	// (0x000b8bee) wml_content_pane_ParamLimits

0xf09d,	// (0x000bcfda) main_touch_calib_pane

0x407b,	// (0x000b1fb8) main_touch_calib_pane_g1

0x408d,	// (0x000b1fca) main_touch_calib_pane_g2

0x409f,	// (0x000b1fdc) main_touch_calib_pane_g3

0x40b1,	// (0x000b1fee) main_touch_calib_pane_g4

0x0003,

0xf736,	// (0x000bd673) main_touch_calib_pane_g

0x40c3,	// (0x000b2000) main_touch_calib_pane_t1

0x40dd,	// (0x000b201a) main_touch_calib_pane_t2

0x0004,

0xf73f,	// (0x000bd67c) main_touch_calib_pane_t

0xb420,	// (0x000b935d) mup_progress_pane_cp02

0xb455,	// (0x000b9392) navi_pane_g1

0xb510,	// (0x000b944d) navi_pane_mp_t3

0x95f7,	// (0x000b7534) main_mp3_pane_ParamLimits

0x34e7,	// (0x000b1424) navi_pane_ParamLimits

0xd011,	// (0x000baf4e) main_mp3_pane_g1_ParamLimits

0x3fa9,	// (0x000b1ee6) main_mp3_pane_g2_ParamLimits

0x3fb5,	// (0x000b1ef2) main_mp3_pane_g3_ParamLimits

0x3fb5,	// (0x000b1ef2) main_mp3_pane_g3

0x3fc3,	// (0x000b1f00) main_mp3_pane_g4_ParamLimits

0x3fc3,	// (0x000b1f00) main_mp3_pane_g4

0xd041,	// (0x000baf7e) main_mp3_pane_g5_ParamLimits

0xd041,	// (0x000baf7e) main_mp3_pane_g5

0xd04f,	// (0x000baf8c) main_mp3_pane_g6_ParamLimits

0xd04f,	// (0x000baf8c) main_mp3_pane_g6

0xd05c,	// (0x000baf99) main_mp3_pane_g7_ParamLimits

0xd05c,	// (0x000baf99) main_mp3_pane_g7

0xd068,	// (0x000bafa5) main_mp3_pane_g8_ParamLimits

0xd068,	// (0x000bafa5) main_mp3_pane_g8

0xf718,	// (0x000bd655) main_mp3_pane_g_ParamLimits

0x3fcf,	// (0x000b1f0c) main_mp3_pane_t2

0x3fdd,	// (0x000b1f1a) main_mp3_pane_t3

0xd082,	// (0x000bafbf) main_mp3_pane_t4

0xd090,	// (0x000bafcd) main_mp3_pane_t5

0x0005,

0xf729,	// (0x000bd666) main_mp3_pane_t

0xd09e,	// (0x000bafdb) mup_progress_pane_cp01

0xf0a7,	// (0x000bcfe4) aid_zoom_text_secondary2

0xce94,	// (0x000badd1) list_cale_ev2_pane

0xce9c,	// (0x000badd9) scroll_pane_cp023_ParamLimits

0x4137,	// (0x000b2074) field_cale_ev2_pane_ParamLimits

0x4137,	// (0x000b2074) field_cale_ev2_pane

0x415b,	// (0x000b2098) field_cale_ev2_pane_g1_ParamLimits

0x415b,	// (0x000b2098) field_cale_ev2_pane_g1

0x4167,	// (0x000b20a4) field_cale_ev2_pane_g2_ParamLimits

0x4167,	// (0x000b20a4) field_cale_ev2_pane_g2

0x417f,	// (0x000b20bc) field_cale_ev2_pane_g3_ParamLimits

0x417f,	// (0x000b20bc) field_cale_ev2_pane_g3

0x0003,

0xf74a,	// (0x000bd687) field_cale_ev2_pane_g_ParamLimits

0xf74a,	// (0x000bd687) field_cale_ev2_pane_g

0x4197,	// (0x000b20d4) field_cale_ev2_pane_t1_ParamLimits

0x4197,	// (0x000b20d4) field_cale_ev2_pane_t1

0x41ae,	// (0x000b20eb) field_cale_ev2_pane_t2_ParamLimits

0x41ae,	// (0x000b20eb) field_cale_ev2_pane_t2

0x0001,

0xf753,	// (0x000bd690) field_cale_ev2_pane_t_ParamLimits

0xf753,	// (0x000bd690) field_cale_ev2_pane_t

0x2966,	// (0x000b08a3) main_postcard_pane_g5_ParamLimits

0x2966,	// (0x000b08a3) main_postcard_pane_g5

0x297c,	// (0x000b08b9) main_postcard_pane_g6_ParamLimits

0x297c,	// (0x000b08b9) main_postcard_pane_g6

0x0926,	// (0x000ae863) camera2_autofocus_pane_cp_ParamLimits

0x0926,	// (0x000ae863) camera2_autofocus_pane_cp

0x95f7,	// (0x000b7534) main_mup3_pane

0x420d,	// (0x000b214a) main_mup3_pane_g1_ParamLimits

0x420d,	// (0x000b214a) main_mup3_pane_g1

0x422f,	// (0x000b216c) main_mup3_pane_g2_ParamLimits

0x422f,	// (0x000b216c) main_mup3_pane_g2

0x42aa,	// (0x000b21e7) main_mup3_pane_g3_ParamLimits

0x42aa,	// (0x000b21e7) main_mup3_pane_g3

0x4314,	// (0x000b2251) main_mup3_pane_g4_ParamLimits

0x4314,	// (0x000b2251) main_mup3_pane_g4

0x437e,	// (0x000b22bb) main_mup3_pane_g5_ParamLimits

0x437e,	// (0x000b22bb) main_mup3_pane_g5

0x43e8,	// (0x000b2325) main_mup3_pane_g6_ParamLimits

0x43e8,	// (0x000b2325) main_mup3_pane_g6

0xd0a6,	// (0x000bafe3) main_mup3_pane_g7_ParamLimits

0xd0a6,	// (0x000bafe3) main_mup3_pane_g7

0x0007,

0xf763,	// (0x000bd6a0) main_mup3_pane_g_ParamLimits

0xf763,	// (0x000bd6a0) main_mup3_pane_g

0x4468,	// (0x000b23a5) main_mup3_pane_t1_ParamLimits

0x4468,	// (0x000b23a5) main_mup3_pane_t1

0x44da,	// (0x000b2417) main_mup3_pane_t2_ParamLimits

0x44da,	// (0x000b2417) main_mup3_pane_t2

0x45ac,	// (0x000b24e9) main_mup3_pane_t4_ParamLimits

0x45ac,	// (0x000b24e9) main_mup3_pane_t4

0x460a,	// (0x000b2547) main_mup3_pane_t5_ParamLimits

0x460a,	// (0x000b2547) main_mup3_pane_t5

0x46c6,	// (0x000b2603) main_mup3_pane_t6_ParamLimits

0x46c6,	// (0x000b2603) main_mup3_pane_t6

0x0005,

0xf774,	// (0x000bd6b1) main_mup3_pane_t_ParamLimits

0xf774,	// (0x000bd6b1) main_mup3_pane_t

0x477e,	// (0x000b26bb) mup3_progress_pane_ParamLimits

0x477e,	// (0x000b26bb) mup3_progress_pane

0x4816,	// (0x000b2753) popup_mup3_control_window_ParamLimits

0x4816,	// (0x000b2753) popup_mup3_control_window

0xd0b4,	// (0x000baff1) popup_mup3_text_window

0x484c,	// (0x000b2789) mup3_progress_pane_t1

0x486b,	// (0x000b27a8) mup3_progress_pane_t2

0xd0bc,	// (0x000baff9) mup3_progress_pane_t3

0x0002,

0xf781,	// (0x000bd6be) mup3_progress_pane_t

0xd0d9,	// (0x000bb016) mup_progress_pane_cp03

0x95ed,	// (0x000b752a) bg_tb_trans_pane_cp04

0x488a,	// (0x000b27c7) mup3_volume_pane

0x4892,	// (0x000b27cf) popup_mup3_control_window_g1

0x489b,	// (0x000b27d8) mup3_volume_pane_g1

0x48a4,	// (0x000b27e1) mup3_volume_pane_g2

0x48ad,	// (0x000b27ea) mup3_volume_pane_g3

0x0002,

0xf788,	// (0x000bd6c5) mup3_volume_pane_g

0x95ed,	// (0x000b752a) bg_tb_trans_pane_cp03

0xd0e9,	// (0x000bb026) popup_mup3_text_window_g1

0xd0f1,	// (0x000bb02e) popup_mup3_text_window_t1

0x9de9,	// (0x000b7d26) list_calc_item_pane_g1_ParamLimits

0xcb5f,	// (0x000baa9c) mup_volume_pane_cp_g1

0x40f7,	// (0x000b2034) main_touch_calib_pane_t3

0x410b,	// (0x000b2048) main_touch_calib_pane_t4

0x4121,	// (0x000b205e) main_touch_calib_pane_t5

0xfb46,	// (0x000ada83) aid_cell_size_toolbar2

0xf091,	// (0x000bcfce) aid_popup3_width_pane

0xfb8a,	// (0x000adac7) aid_zoom_text_msg_primary

0x0918,	// (0x000ae855) vorec_t7

0x9dad,	// (0x000b7cea) bg_calc_paper_pane_g1_ParamLimits

0x9db9,	// (0x000b7cf6) bg_calc_paper_pane_g2_ParamLimits

0x9dc5,	// (0x000b7d02) bg_calc_paper_pane_g3_ParamLimits

0x9dd1,	// (0x000b7d0e) bg_calc_paper_pane_g4_ParamLimits

0x9ddd,	// (0x000b7d1a) bg_calc_paper_pane_g5_ParamLimits

0x0170,	// (0x000ae0ad) bg_calc_paper_pane_g6_ParamLimits

0x017e,	// (0x000ae0bb) bg_calc_paper_pane_g7_ParamLimits

0x018c,	// (0x000ae0c9) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x000bd07a) bg_calc_paper_pane_g_ParamLimits

0x019f,	// (0x000ae0dc) calc_bg_paper_pane_g9_ParamLimits

0x0a88,	// (0x000ae9c5) image_qvga_pane_ParamLimits

0x0a88,	// (0x000ae9c5) image_qvga_pane

0x9ca8,	// (0x000b7be5) bg_popup_sub_pane_cp04_ParamLimits

0xb78e,	// (0x000b96cb) popup_mup_playback_window_g1_ParamLimits

0xb79a,	// (0x000b96d7) popup_mup_playback_window_t1_ParamLimits

0xb7af,	// (0x000b96ec) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x000bd404) popup_mup_playback_window_t_ParamLimits

0x3be3,	// (0x000b1b20) main_mup2_pane_g3_ParamLimits

0x3be3,	// (0x000b1b20) main_mup2_pane_g3

0x0e72,	// (0x000aedaf) popup_toolbar_window_cp04

0xbbaa,	// (0x000b9ae7) popup_call2_audio_second_window_g3_ParamLimits

0xbbaa,	// (0x000b9ae7) popup_call2_audio_second_window_g3

0xbff0,	// (0x000b9f2d) popup_call2_audio_first_window_g4_ParamLimits

0xbff0,	// (0x000b9f2d) popup_call2_audio_first_window_g4

0xc66f,	// (0x000ba5ac) popup_call2_audio_in_window_g4_ParamLimits

0xc66f,	// (0x000ba5ac) popup_call2_audio_in_window_g4

0x2ab0,	// (0x000b09ed) aid_area_sk_bg_cut_ParamLimits

0x2ab0,	// (0x000b09ed) aid_area_sk_bg_cut

0xb7c4,	// (0x000b9701) aid_area_sk_bg_cut_2_ParamLimits

0xb7c4,	// (0x000b9701) aid_area_sk_bg_cut_2

0x3ef7,	// (0x000b1e34) aid_placing_details_win

0x3eff,	// (0x000b1e3c) aid_placing_details_win_2

0xcf53,	// (0x000bae90) camera2_autofocus_pane_g1_ParamLimits

0xfd78,	// (0x000adcb5) popup_fixed_preview_cale_window_ParamLimits

0xfd78,	// (0x000adcb5) popup_fixed_preview_cale_window

0xb590,	// (0x000b94cd) navi_slider_pane_g3

0xb599,	// (0x000b94d6) navi_slider_pane_g4

0xb5a2,	// (0x000b94df) navi_slider_pane_g5

0xb590,	// (0x000b94cd) navi_slider_pane_g6

0x9f75,	// (0x000b7eb2) navi_slider_pane_g7

0xb6c5,	// (0x000b9602) mup_scale_pane_g3

0xb6ce,	// (0x000b960b) mup_scale_pane_g4

0xb6d7,	// (0x000b9614) mup_scale_pane_g5

0x27aa,	// (0x000b06e7) mup_scale_pane_g6

0x27b3,	// (0x000b06f0) mup_scale_pane_g7

0xb590,	// (0x000b94cd) cams2_slider_pane_g3

0xcbe9,	// (0x000bab26) cams2_slider_pane_g4

0xa13a,	// (0x000b8077) cams2_slider_pane_g5

0xb590,	// (0x000b94cd) cams2_slider_pane_g6

0xa142,	// (0x000b807f) cams2_slider_pane_g7

0xce1a,	// (0x000bad57) camera2_autofocus_pane_cp_g1

0xc9ce,	// (0x000ba90b) bg_popup_preview_window_pane_cp02_ParamLimits

0xc9ce,	// (0x000ba90b) bg_popup_preview_window_pane_cp02

0xd0ff,	// (0x000bb03c) list_fp_cale_pane_ParamLimits

0xd0ff,	// (0x000bb03c) list_fp_cale_pane

0xd10b,	// (0x000bb048) popup_fixed_preview_cale_window_t1_ParamLimits

0xd10b,	// (0x000bb048) popup_fixed_preview_cale_window_t1

0x48b6,	// (0x000b27f3) popup_fixed_preview_cale_window_t2_ParamLimits

0x48b6,	// (0x000b27f3) popup_fixed_preview_cale_window_t2

0x48cb,	// (0x000b2808) popup_fixed_preview_cale_window_t3_ParamLimits

0x48cb,	// (0x000b2808) popup_fixed_preview_cale_window_t3

0x0002,

0xf78f,	// (0x000bd6cc) popup_fixed_preview_cale_window_t_ParamLimits

0xf78f,	// (0x000bd6cc) popup_fixed_preview_cale_window_t

0x48e2,	// (0x000b281f) list_single_fp_cale_pane_ParamLimits

0x48e2,	// (0x000b281f) list_single_fp_cale_pane

0xd129,	// (0x000bb066) list_single_fp_cale_pane_g1_ParamLimits

0xd129,	// (0x000bb066) list_single_fp_cale_pane_g1

0xd135,	// (0x000bb072) list_single_fp_cale_pane_g2_ParamLimits

0xd135,	// (0x000bb072) list_single_fp_cale_pane_g2

0x0002,

0xf796,	// (0x000bd6d3) list_single_fp_cale_pane_g_ParamLimits

0xf796,	// (0x000bd6d3) list_single_fp_cale_pane_g

0xd14e,	// (0x000bb08b) list_single_fp_cale_pane_t1_ParamLimits

0xd14e,	// (0x000bb08b) list_single_fp_cale_pane_t1

0xd160,	// (0x000bb09d) list_single_fp_cale_pane_t2_ParamLimits

0xd160,	// (0x000bb09d) list_single_fp_cale_pane_t2

0x0001,

0xf79d,	// (0x000bd6da) list_single_fp_cale_pane_t_ParamLimits

0xf79d,	// (0x000bd6da) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf09d,	// (0x000bcfda) main_dialer_pane

0x48fa,	// (0x000b2837) aid_cell_size_keypad

0x4904,	// (0x000b2841) dialer_ne_pane

0x490e,	// (0x000b284b) grid_dialer_command_1_pane

0x4916,	// (0x000b2853) grid_dialer_command_2_pane

0x491e,	// (0x000b285b) grid_dialer_keypad_pane

0x4932,	// (0x000b286f) bg_popup_call_pane_cp06_ParamLimits

0x4932,	// (0x000b286f) bg_popup_call_pane_cp06

0x493e,	// (0x000b287b) dialer_ne_clear_pane_ParamLimits

0x493e,	// (0x000b287b) dialer_ne_clear_pane

0xd193,	// (0x000bb0d0) dialer_ne_pane_g1

0xd19b,	// (0x000bb0d8) dialer_ne_pane_t1_ParamLimits

0xd19b,	// (0x000bb0d8) dialer_ne_pane_t1

0x494a,	// (0x000b2887) dialer_ne_pane_t2_ParamLimits

0x494a,	// (0x000b2887) dialer_ne_pane_t2

0x4974,	// (0x000b28b1) dialer_ne_pane_t3_ParamLimits

0x4974,	// (0x000b28b1) dialer_ne_pane_t3

0x0002,

0xf7a2,	// (0x000bd6df) dialer_ne_pane_t_ParamLimits

0xf7a2,	// (0x000bd6df) dialer_ne_pane_t

0x49a4,	// (0x000b28e1) dialer_ne_pane_t3_copy1_ParamLimits

0x49a4,	// (0x000b28e1) dialer_ne_pane_t3_copy1

0x49d3,	// (0x000b2910) cell_dialer_keypad_pane_ParamLimits

0x49d3,	// (0x000b2910) cell_dialer_keypad_pane

0x49ea,	// (0x000b2927) cell_dialer_command_1_pane_ParamLimits

0x49ea,	// (0x000b2927) cell_dialer_command_1_pane

0x4a00,	// (0x000b293d) cell_dialer_command_2_pane_ParamLimits

0x4a00,	// (0x000b293d) cell_dialer_command_2_pane

0xd1ad,	// (0x000bb0ea) bg_button_pane_cp02_ParamLimits

0xd1ad,	// (0x000bb0ea) bg_button_pane_cp02

0x4a0f,	// (0x000b294c) cell_dialer_keypad_pane_g1_ParamLimits

0x4a0f,	// (0x000b294c) cell_dialer_keypad_pane_g1

0xd1ad,	// (0x000bb0ea) bg_button_pane_cp03_ParamLimits

0xd1ad,	// (0x000bb0ea) bg_button_pane_cp03

0x4a20,	// (0x000b295d) cell_dialer_command_1_pane_g1_ParamLimits

0x4a20,	// (0x000b295d) cell_dialer_command_1_pane_g1

0xd1b9,	// (0x000bb0f6) bg_button_pane_cp04

0x4a34,	// (0x000b2971) cell_dialer_command_2_pane_g1

0xab25,	// (0x000b8a62) bg_button_pane_cp06

0xd1c1,	// (0x000bb0fe) dialer_ne_clear_pane_g1

0xb461,	// (0x000b939e) navi_pane_g2

0xb48f,	// (0x000b93cc) navi_pane_g3

0x0002,

0xf3ca,	// (0x000bd307) navi_pane_g

0xb51e,	// (0x000b945b) navi_pane_mv_g2

0xb547,	// (0x000b9484) navi_pane_mv_g5

0x2312,	// (0x000b024f) navi_pane_mv_t1

0x9d8f,	// (0x000b7ccc) main_clock2_pane

0xbe7c,	// (0x000b9db9) main_clock2_list_pane_ParamLimits

0xbe7c,	// (0x000b9db9) main_clock2_list_pane

0x4aa0,	// (0x000b29dd) main_clock2_pane_t1_ParamLimits

0x4aa0,	// (0x000b29dd) main_clock2_pane_t1

0x4adb,	// (0x000b2a18) main_clock2_pane_t2_ParamLimits

0x4adb,	// (0x000b2a18) main_clock2_pane_t2

0x0004,

0xf7ae,	// (0x000bd6eb) main_clock2_pane_t_ParamLimits

0xf7ae,	// (0x000bd6eb) main_clock2_pane_t

0x4b7a,	// (0x000b2ab7) popup_clock_analogue_window_cp03_ParamLimits

0x4b7a,	// (0x000b2ab7) popup_clock_analogue_window_cp03

0x4b9f,	// (0x000b2adc) popup_clock_digital_window_cp02_ParamLimits

0x4b9f,	// (0x000b2adc) popup_clock_digital_window_cp02

0x4c18,	// (0x000b2b55) main_clock2_list_single_pane_ParamLimits

0x4c18,	// (0x000b2b55) main_clock2_list_single_pane

0xab25,	// (0x000b8a62) list_highlight_pane_cp05

0xd1f9,	// (0x000bb136) main_clock2_list_single_pane_t1

0x0e72,	// (0x000aedaf) popup_toolbar_window_cp04_ParamLimits

0x3f66,	// (0x000b1ea3) camera2_autofocus_pane_g2_ParamLimits

0x3f66,	// (0x000b1ea3) camera2_autofocus_pane_g2

0x3f72,	// (0x000b1eaf) camera2_autofocus_pane_g3_ParamLimits

0x3f72,	// (0x000b1eaf) camera2_autofocus_pane_g3

0x3f7e,	// (0x000b1ebb) camera2_autofocus_pane_g4_ParamLimits

0x3f7e,	// (0x000b1ebb) camera2_autofocus_pane_g4

0x3f8a,	// (0x000b1ec7) camera2_autofocus_pane_g5_ParamLimits

0x3f8a,	// (0x000b1ec7) camera2_autofocus_pane_g5

0x0004,

0xf6f2,	// (0x000bd62f) camera2_autofocus_pane_g_ParamLimits

0xf6f2,	// (0x000bd62f) camera2_autofocus_pane_g

0x41c3,	// (0x000b2100) camera2_autofocus_pane_cp_g2

0x41cb,	// (0x000b2108) camera2_autofocus_pane_cp_g3

0x41d3,	// (0x000b2110) camera2_autofocus_pane_cp_g4

0x41db,	// (0x000b2118) camera2_autofocus_pane_cp_g5

0x0004,

0xf758,	// (0x000bd695) camera2_autofocus_pane_cp_g

0x492a,	// (0x000b2867) popup_dialer_spcha_window

0x95ed,	// (0x000b752a) bg_popup_sub_pane_cp07

0xd207,	// (0x000bb144) list_spcha_pane

0xd20f,	// (0x000bb14c) list_single_spcha_pane_ParamLimits

0xd20f,	// (0x000bb14c) list_single_spcha_pane

0x95ed,	// (0x000b752a) list_highlight_pane_cp06

0xd220,	// (0x000bb15d) list_single_spcha_pane_t1

0xc419,	// (0x000ba356) popup_call2_audio_out_window_g4_ParamLimits

0xc419,	// (0x000ba356) popup_call2_audio_out_window_g4

0xf09d,	// (0x000bcfda) main_imed2_pane

0xa05f,	// (0x000b7f9c) popup_imed_adjust2_window

0x3346,	// (0x000b1283) popup_imed_trans_window_ParamLimits

0x3346,	// (0x000b1283) popup_imed_trans_window

0xcc52,	// (0x000bab8f) popup_blid_sat_info2_window_t1

0xcc60,	// (0x000bab9d) popup_blid_sat_info2_window_t2

0x000a,

0xf687,	// (0x000bd5c4) popup_blid_sat_info2_window_t

0x4cd3,	// (0x000b2c10) aid_size_cell_colour_35

0x4cf3,	// (0x000b2c30) aid_size_cell_colour_112

0x4d13,	// (0x000b2c50) aid_size_cell_effect

0xc9da,	// (0x000ba917) bg_tb_trans_pane_cp02

0xafdf,	// (0x000b8f1c) heading_imed_pane

0x4d33,	// (0x000b2c70) listscroll_imed_pane

0xd22e,	// (0x000bb16b) heading_imed_pane_g1

0xd236,	// (0x000bb173) heading_imed_pane_t1

0xd244,	// (0x000bb181) grid_imed_colour_35_pane_ParamLimits

0xd244,	// (0x000bb181) grid_imed_colour_35_pane

0x4d3f,	// (0x000b2c7c) grid_imed_effect_pane

0xd260,	// (0x000bb19d) list_imed_aspect_pane

0x4d56,	// (0x000b2c93) scroll_pane_cp027_ParamLimits

0x4d56,	// (0x000b2c93) scroll_pane_cp027

0x4d67,	// (0x000b2ca4) cell_imed_effect_pane_ParamLimits

0x4d67,	// (0x000b2ca4) cell_imed_effect_pane

0xd268,	// (0x000bb1a5) cell_imed_colour_pane_ParamLimits

0xd268,	// (0x000bb1a5) cell_imed_colour_pane

0xd2b2,	// (0x000bb1ef) cell_imed_colour_pane_g1_ParamLimits

0xd2b2,	// (0x000bb1ef) cell_imed_colour_pane_g1

0xd310,	// (0x000bb24d) hgihlgiht_grid_pane_cp016_ParamLimits

0xd310,	// (0x000bb24d) hgihlgiht_grid_pane_cp016

0x4d92,	// (0x000b2ccf) cell_imed_effect_pane_g1

0x4d9a,	// (0x000b2cd7) grid_highlight_pane_cp017

0xd321,	// (0x000bb25e) list_imed_single_pane_ParamLimits

0xd321,	// (0x000bb25e) list_imed_single_pane

0x95ed,	// (0x000b752a) list_highlight_pane_cp07

0xd335,	// (0x000bb272) list_imed_aspect_pane_comp1_t1

0xc9da,	// (0x000ba917) bg_tb_trans_pane_cp05

0xd357,	// (0x000bb294) popup_imed_adjust2_window_g1

0xd37e,	// (0x000bb2bb) popup_imed_adjust2_window_t1

0xd396,	// (0x000bb2d3) slider_imed_adjust_pane

0xd3aa,	// (0x000bb2e7) slider_imed_adjust_pane_g1

0xd3ba,	// (0x000bb2f7) slider_imed_adjust_pane_g2

0xd3ca,	// (0x000bb307) slider_imed_adjust_pane_g3

0xd3db,	// (0x000bb318) slider_imed_adjust_pane_g4

0x0003,

0xf7cb,	// (0x000bd708) slider_imed_adjust_pane_g

0x4da3,	// (0x000b2ce0) aid_size_cell_clipart2

0xd3ec,	// (0x000bb329) grid_imed_clipart_pane

0xd3f6,	// (0x000bb333) scroll_pane_cp031

0x4daf,	// (0x000b2cec) cell_imed_clipart_pane_ParamLimits

0x4daf,	// (0x000b2cec) cell_imed_clipart_pane

0x4dcc,	// (0x000b2d09) cell_imed_clipart_pane_g1

0x95ed,	// (0x000b752a) grid_highlight_pane_cp014

0x4a7e,	// (0x000b29bb) main_clock2_pane_g1_ParamLimits

0x4a7e,	// (0x000b29bb) main_clock2_pane_g1

0x4bbf,	// (0x000b2afc) aid_call2_pane_cp10

0x4bd1,	// (0x000b2b0e) aid_call_pane_cp10

0xb3c0,	// (0x000b92fd) popup_clock_analogue_window_cp10_g1

0xb3c0,	// (0x000b92fd) popup_clock_analogue_window_cp10_g2

0x4be3,	// (0x000b2b20) popup_clock_analogue_window_cp10_g3

0x4be3,	// (0x000b2b20) popup_clock_analogue_window_cp10_g4

0xb3c0,	// (0x000b92fd) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7b9,	// (0x000bd6f6) popup_clock_analogue_window_cp10_g

0x4bf9,	// (0x000b2b36) popup_clock_analogue_window_cp10_t1

0x4c2a,	// (0x000b2b67) clock_digital_number_pane_cp10_ParamLimits

0x4c2a,	// (0x000b2b67) clock_digital_number_pane_cp10

0x4c44,	// (0x000b2b81) clock_digital_number_pane_cp11_ParamLimits

0x4c44,	// (0x000b2b81) clock_digital_number_pane_cp11

0x4c5e,	// (0x000b2b9b) clock_digital_number_pane_cp12_ParamLimits

0x4c5e,	// (0x000b2b9b) clock_digital_number_pane_cp12

0x4c7a,	// (0x000b2bb7) clock_digital_number_pane_cp13_ParamLimits

0x4c7a,	// (0x000b2bb7) clock_digital_number_pane_cp13

0x4c96,	// (0x000b2bd3) clock_digital_separator_pane_cp10_ParamLimits

0x4c96,	// (0x000b2bd3) clock_digital_separator_pane_cp10

0x4cb2,	// (0x000b2bef) popup_clock_digital_window_cp02_t1_ParamLimits

0x4cb2,	// (0x000b2bef) popup_clock_digital_window_cp02_t1

0x9ca0,	// (0x000b7bdd) clock_digital_number_pane_cp10_g1

0x9ca0,	// (0x000b7bdd) clock_digital_number_pane_cp10_g2

0x0001,

0xf7d4,	// (0x000bd711) clock_digital_number_pane_cp10_g

0x9ca0,	// (0x000b7bdd) clock_digital_separator_pane_cp10_g1

0x9ca0,	// (0x000b7bdd) clock_digital_separator_pane_g2_cp10

0xb54f,	// (0x000b948c) navi_pane_vded_g4

0xb558,	// (0x000b9495) navi_pane_vded_g5

0xb561,	// (0x000b949e) navi_pane_vded_t1

0xf09d,	// (0x000bcfda) main_vded_pane

0x4dd5,	// (0x000b2d12) main_vded_pane_g1

0x4de1,	// (0x000b2d1e) main_vded_pane_g2

0x4ded,	// (0x000b2d2a) main_vded_pane_g3

0x0002,

0xf7d9,	// (0x000bd716) main_vded_pane_g

0x4df9,	// (0x000b2d36) main_vded_pane_t1

0x4e07,	// (0x000b2d44) main_vded_pane_t2

0x0001,

0xf7e0,	// (0x000bd71d) main_vded_pane_t

0x4e15,	// (0x000b2d52) vded_slider_pane

0x4e1f,	// (0x000b2d5c) vded_video_pane

0xd3fe,	// (0x000bb33b) vded_video_pane_g1

0x4e2b,	// (0x000b2d68) vded_video_pane_g2

0xce1a,	// (0x000bad57) vded_video_pane_g3

0x0002,

0xf7e5,	// (0x000bd722) vded_video_pane_g

0xd408,	// (0x000bb345) vded_slider_pane_g1

0xcb5f,	// (0x000baa9c) vded_slider_pane_g2

0xd411,	// (0x000bb34e) vded_slider_pane_g3

0xd41a,	// (0x000bb357) vded_slider_pane_g4

0xd423,	// (0x000bb360) vded_slider_pane_g5

0x0004,

0xf7ec,	// (0x000bd729) vded_slider_pane_g

0x4800,	// (0x000b273d) mup3_rocker_pane_ParamLimits

0x4800,	// (0x000b273d) mup3_rocker_pane

0x4e34,	// (0x000b2d71) mup3_control_keys_pane_g1

0x4e3c,	// (0x000b2d79) mup3_control_keys_pane_g2

0x4e44,	// (0x000b2d81) mup3_control_keys_pane_g3

0x4e4c,	// (0x000b2d89) mup3_control_keys_pane_g4

0x0003,

0xf7f7,	// (0x000bd734) mup3_control_keys_pane_g

0xfdb7,	// (0x000adcf4) popup_toolbar2_fixed_window_cp01_ParamLimits

0xfdb7,	// (0x000adcf4) popup_toolbar2_fixed_window_cp01

0x4836,	// (0x000b2773) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4836,	// (0x000b2773) popup_toolbar2_fixed_window_cp02

0xbd1c,	// (0x000b9c59) popup_call2_audio_second_window_t4_ParamLimits

0xbd1c,	// (0x000b9c59) popup_call2_audio_second_window_t4

0xc286,	// (0x000ba1c3) popup_call2_audio_first_window_t6_ParamLimits

0xc286,	// (0x000ba1c3) popup_call2_audio_first_window_t6

0xc51c,	// (0x000ba459) popup_call2_audio_out_window_t6_ParamLimits

0xc51c,	// (0x000ba459) popup_call2_audio_out_window_t6

0xf09d,	// (0x000bcfda) main_vitu_pane

0x4e5c,	// (0x000b2d99) aid_size_cell_itu_ParamLimits

0x4e5c,	// (0x000b2d99) aid_size_cell_itu

0xbe7c,	// (0x000b9db9) bg_popup_window_pane_cp08_ParamLimits

0xbe7c,	// (0x000b9db9) bg_popup_window_pane_cp08

0x4e72,	// (0x000b2daf) field_vitu_entry_pane_ParamLimits

0x4e72,	// (0x000b2daf) field_vitu_entry_pane

0x4e89,	// (0x000b2dc6) grid_vitu_function_pane_ParamLimits

0x4e89,	// (0x000b2dc6) grid_vitu_function_pane

0x4ea4,	// (0x000b2de1) grid_vitu_itu_pane_ParamLimits

0x4ea4,	// (0x000b2de1) grid_vitu_itu_pane

0x4ec2,	// (0x000b2dff) cell_vitu_itu_pane_ParamLimits

0x4ec2,	// (0x000b2dff) cell_vitu_itu_pane

0x4ee8,	// (0x000b2e25) cell_vitu_function_pane_ParamLimits

0x4ee8,	// (0x000b2e25) cell_vitu_function_pane

0xbe7c,	// (0x000b9db9) bg_popup_sub_pane_cp08_ParamLimits

0xbe7c,	// (0x000b9db9) bg_popup_sub_pane_cp08

0x4f03,	// (0x000b2e40) field_vitu_entry_pane_t1_ParamLimits

0x4f03,	// (0x000b2e40) field_vitu_entry_pane_t1

0xd444,	// (0x000bb381) field_vitu_entry_pane_t2_ParamLimits

0xd444,	// (0x000bb381) field_vitu_entry_pane_t2

0x0001,

0xf805,	// (0x000bd742) field_vitu_entry_pane_t_ParamLimits

0xf805,	// (0x000bd742) field_vitu_entry_pane_t

0xd461,	// (0x000bb39e) bg_button_pane_cp05_ParamLimits

0xd461,	// (0x000bb39e) bg_button_pane_cp05

0x4f23,	// (0x000b2e60) cell_vitu_itu_pane_g1

0x4f3b,	// (0x000b2e78) cell_vitu_itu_pane_t1_ParamLimits

0x4f3b,	// (0x000b2e78) cell_vitu_itu_pane_t1

0x4f4d,	// (0x000b2e8a) cell_vitu_itu_pane_t2_ParamLimits

0x4f4d,	// (0x000b2e8a) cell_vitu_itu_pane_t2

0x0002,

0xf80a,	// (0x000bd747) cell_vitu_itu_pane_t_ParamLimits

0xf80a,	// (0x000bd747) cell_vitu_itu_pane_t

0xd46f,	// (0x000bb3ac) bg_button_pane_cp07

0x4f82,	// (0x000b2ebf) cell_vitu_function_pane_g1

0x9d2f,	// (0x000b7c6c) main_calc_pane_g1

0xfb7e,	// (0x000adabb) aid_visual_content_pane

0xf09d,	// (0x000bcfda) main_vradio_pane

0x4f8b,	// (0x000b2ec8) main_vradio_pane_g1_ParamLimits

0x4f8b,	// (0x000b2ec8) main_vradio_pane_g1

0xd479,	// (0x000bb3b6) main_vradio_pane_g2_ParamLimits

0xd479,	// (0x000bb3b6) main_vradio_pane_g2

0x0001,

0xf811,	// (0x000bd74e) main_vradio_pane_g_ParamLimits

0xf811,	// (0x000bd74e) main_vradio_pane_g

0x4fa2,	// (0x000b2edf) main_vradio_pane_t1_ParamLimits

0x4fa2,	// (0x000b2edf) main_vradio_pane_t1

0x4fb7,	// (0x000b2ef4) main_vradio_pane_t2_ParamLimits

0x4fb7,	// (0x000b2ef4) main_vradio_pane_t2

0xd486,	// (0x000bb3c3) main_vradio_pane_t3_ParamLimits

0xd486,	// (0x000bb3c3) main_vradio_pane_t3

0x0002,

0xf816,	// (0x000bd753) main_vradio_pane_t_ParamLimits

0xf816,	// (0x000bd753) main_vradio_pane_t

0x4fcc,	// (0x000b2f09) vradio_rocker_control_pane_ParamLimits

0x4fcc,	// (0x000b2f09) vradio_rocker_control_pane

0x4fde,	// (0x000b2f1b) vradio_station_info_pane_ParamLimits

0x4fde,	// (0x000b2f1b) vradio_station_info_pane

0xd49a,	// (0x000bb3d7) vradio_frequency_info_pane_ParamLimits

0xd49a,	// (0x000bb3d7) vradio_frequency_info_pane

0xce1a,	// (0x000bad57) vradio_station_info_pane_g1

0xd4a9,	// (0x000bb3e6) vradio_station_info_pane_t1_ParamLimits

0xd4a9,	// (0x000bb3e6) vradio_station_info_pane_t1

0xd4cb,	// (0x000bb408) vradio_station_info_pane_t2_ParamLimits

0xd4cb,	// (0x000bb408) vradio_station_info_pane_t2

0x0001,

0xf81d,	// (0x000bd75a) vradio_station_info_pane_t_ParamLimits

0xf81d,	// (0x000bd75a) vradio_station_info_pane_t

0xd4dd,	// (0x000bb41a) vradio_tuning_pane

0xd4e5,	// (0x000bb422) vradio_rocker_control_pane_g1

0xd4ed,	// (0x000bb42a) vradio_rocker_control_pane_g2

0xd4f5,	// (0x000bb432) vradio_rocker_control_pane_g3

0xd4fd,	// (0x000bb43a) vradio_rocker_control_pane_g4

0xd505,	// (0x000bb442) vradio_rocker_control_pane_g5

0x0004,

0xf822,	// (0x000bd75f) vradio_rocker_control_pane_g

0x4fee,	// (0x000b2f2b) vradio_frequency_info_pane_g1

0xd50d,	// (0x000bb44a) vradio_frequency_info_pane_t1_ParamLimits

0xd50d,	// (0x000bb44a) vradio_frequency_info_pane_t1

0x4ff8,	// (0x000b2f35) vradio_tuning_pane_g1

0x5003,	// (0x000b2f40) vradio_tuning_pane_t1

0xfbdb,	// (0x000adb18) area_side_right_pane_ParamLimits

0xfbdb,	// (0x000adb18) area_side_right_pane

0xc995,	// (0x000ba8d2) status_small_pane_g1

0xc99d,	// (0x000ba8da) status_small_pane_g2

0xc9a6,	// (0x000ba8e3) status_small_pane_g3

0xc9af,	// (0x000ba8ec) status_small_pane_g4

0x0003,

0xf5dd,	// (0x000bd51a) status_small_pane_g

0xc9b8,	// (0x000ba8f5) status_small_pane_t1

0xf09d,	// (0x000bcfda) main_video3_pane

0xd521,	// (0x000bb45e) cams_zoom_vslider_pane

0xd529,	// (0x000bb466) image3_wide_pane_ParamLimits

0xd529,	// (0x000bb466) image3_wide_pane

0xd543,	// (0x000bb480) image3_wide_small_pane

0xd54f,	// (0x000bb48c) main_video3_pane_g1_ParamLimits

0xd54f,	// (0x000bb48c) main_video3_pane_g1

0xd56b,	// (0x000bb4a8) main_video3_pane_g2_ParamLimits

0xd56b,	// (0x000bb4a8) main_video3_pane_g2

0x0001,

0xf82d,	// (0x000bd76a) main_video3_pane_g_ParamLimits

0xf82d,	// (0x000bd76a) main_video3_pane_g

0xd587,	// (0x000bb4c4) main_video3_pane_t1_ParamLimits

0xd587,	// (0x000bb4c4) main_video3_pane_t1

0xd5b2,	// (0x000bb4ef) main_video3_pane_t2_ParamLimits

0xd5b2,	// (0x000bb4ef) main_video3_pane_t2

0xd5df,	// (0x000bb51c) main_video3_pane_t3_ParamLimits

0xd5df,	// (0x000bb51c) main_video3_pane_t3

0x0002,

0xf832,	// (0x000bd76f) main_video3_pane_t_ParamLimits

0xf832,	// (0x000bd76f) main_video3_pane_t

0xd60c,	// (0x000bb549) cams_zoom_vslider_pane_g1

0xd615,	// (0x000bb552) cams_zoom_vslider_pane_g2

0x0001,

0xf839,	// (0x000bd776) cams_zoom_vslider_pane_g

0xd61d,	// (0x000bb55a) small_slider_vertical_pane

0xce1a,	// (0x000bad57) small_slider_vertical_pane_g1

0xce1a,	// (0x000bad57) small_slider_vertical_pane_g2

0xd625,	// (0x000bb562) small_slider_vertical_pane_g3

0x0002,

0xf83e,	// (0x000bd77b) small_slider_vertical_pane_g

0xf09d,	// (0x000bcfda) main_hwr_training_pane

0xd62e,	// (0x000bb56b) hwr_training_instruct_pane_ParamLimits

0xd62e,	// (0x000bb56b) hwr_training_instruct_pane

0x5012,	// (0x000b2f4f) hwr_training_navi_pane_ParamLimits

0x5012,	// (0x000b2f4f) hwr_training_navi_pane

0x5031,	// (0x000b2f6e) hwr_training_write_pane_ParamLimits

0x5031,	// (0x000b2f6e) hwr_training_write_pane

0x95ed,	// (0x000b752a) bg_frame_shadow_pane

0xd665,	// (0x000bb5a2) hwr_training_write_pane_g1

0xd66d,	// (0x000bb5aa) hwr_training_write_pane_g2

0xd675,	// (0x000bb5b2) hwr_training_write_pane_g3

0xd67d,	// (0x000bb5ba) hwr_training_write_pane_g4

0xd685,	// (0x000bb5c2) hwr_training_write_pane_g5

0xd68d,	// (0x000bb5ca) hwr_training_write_pane_g6

0xd695,	// (0x000bb5d2) hwr_training_write_pane_g7

0x0006,

0xf845,	// (0x000bd782) hwr_training_write_pane_g

0xa14b,	// (0x000b8088) hwr_training_navi_pane_g1_ParamLimits

0xa14b,	// (0x000b8088) hwr_training_navi_pane_g1

0xa15d,	// (0x000b809a) hwr_training_navi_pane_g2_ParamLimits

0xa15d,	// (0x000b809a) hwr_training_navi_pane_g2

0xa16f,	// (0x000b80ac) hwr_training_navi_pane_g3_ParamLimits

0xa16f,	// (0x000b80ac) hwr_training_navi_pane_g3

0xa17f,	// (0x000b80bc) hwr_training_navi_pane_g4_ParamLimits

0xa17f,	// (0x000b80bc) hwr_training_navi_pane_g4

0x0004,

0xf854,	// (0x000bd791) hwr_training_navi_pane_g_ParamLimits

0xf854,	// (0x000bd791) hwr_training_navi_pane_g

0xa18c,	// (0x000b80c9) hwr_training_navi_pane_t1

0x5079,	// (0x000b2fb6) list_single_hwr_training_instruct_pane_ParamLimits

0x5079,	// (0x000b2fb6) list_single_hwr_training_instruct_pane

0xd69d,	// (0x000bb5da) list_single_hwr_training_instruct_pane_t1

0xcd5a,	// (0x000bac97) bg_frame_shadow_pane_g1

0xd6ac,	// (0x000bb5e9) bg_frame_shadow_pane_g2

0xd6b4,	// (0x000bb5f1) bg_frame_shadow_pane_g3

0xd6bc,	// (0x000bb5f9) bg_frame_shadow_pane_g4

0xd6c4,	// (0x000bb601) bg_frame_shadow_pane_g5

0xd6cc,	// (0x000bb609) bg_frame_shadow_pane_g6

0xd6d4,	// (0x000bb611) bg_frame_shadow_pane_g7

0x9e75,	// (0x000b7db2) bg_frame_shadow_pane_g8

0x0007,

0xf85f,	// (0x000bd79c) bg_frame_shadow_pane_g

0xf09d,	// (0x000bcfda) main_video_tele_dialer_pane

0x5095,	// (0x000b2fd2) aid_size_cell_video_keypad_ParamLimits

0x5095,	// (0x000b2fd2) aid_size_cell_video_keypad

0x50af,	// (0x000b2fec) grid_video_dialer_keypad_pane_ParamLimits

0x50af,	// (0x000b2fec) grid_video_dialer_keypad_pane

0x50fb,	// (0x000b3038) video_down_pane_cp_ParamLimits

0x50fb,	// (0x000b3038) video_down_pane_cp

0x512d,	// (0x000b306a) cell_video_dialer_keypad_pane_ParamLimits

0x512d,	// (0x000b306a) cell_video_dialer_keypad_pane

0xd6dc,	// (0x000bb619) bg_button_pane_cp08_ParamLimits

0xd6dc,	// (0x000bb619) bg_button_pane_cp08

0x5153,	// (0x000b3090) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5153,	// (0x000b3090) cell_video_dialer_keypad_pane_g1

0x47ea,	// (0x000b2727) mup3_rocker2_pane_ParamLimits

0x47ea,	// (0x000b2727) mup3_rocker2_pane

0xce1a,	// (0x000bad57) mup3_rocker2_pane_g1

0x3213,	// (0x000b1150) main_dialer2_pane

0xf09d,	// (0x000bcfda) main_mp4_pane

0xa1b8,	// (0x000b80f5) main_mp4_pane_g1_ParamLimits

0xa1b8,	// (0x000b80f5) main_mp4_pane_g1

0xa1b8,	// (0x000b80f5) main_mp4_pane_g2_ParamLimits

0xa1b8,	// (0x000b80f5) main_mp4_pane_g2

0x518e,	// (0x000b30cb) main_mp4_pane_g3_ParamLimits

0x518e,	// (0x000b30cb) main_mp4_pane_g3

0xa1c6,	// (0x000b8103) main_mp4_pane_g4_ParamLimits

0xa1c6,	// (0x000b8103) main_mp4_pane_g4

0xa1f4,	// (0x000b8131) main_mp4_pane_g5_ParamLimits

0xa1f4,	// (0x000b8131) main_mp4_pane_g5

0x0007,

0xf87f,	// (0x000bd7bc) main_mp4_pane_g_ParamLimits

0xf87f,	// (0x000bd7bc) main_mp4_pane_g

0xa268,	// (0x000b81a5) main_mp4_pane_t1_ParamLimits

0xa268,	// (0x000b81a5) main_mp4_pane_t1

0xa2c4,	// (0x000b8201) main_mp4_pane_t2_ParamLimits

0xa2c4,	// (0x000b8201) main_mp4_pane_t2

0xd6e8,	// (0x000bb625) main_mp4_pane_t3_ParamLimits

0xd6e8,	// (0x000bb625) main_mp4_pane_t3

0xa316,	// (0x000b8253) main_mp4_pane_t4_ParamLimits

0xa316,	// (0x000b8253) main_mp4_pane_t4

0x0003,

0xf890,	// (0x000bd7cd) main_mp4_pane_t_ParamLimits

0xf890,	// (0x000bd7cd) main_mp4_pane_t

0xa356,	// (0x000b8293) mp4_progress_pane_ParamLimits

0xa356,	// (0x000b8293) mp4_progress_pane

0xa3a0,	// (0x000b82dd) mp4_rocker_pane_ParamLimits

0xa3a0,	// (0x000b82dd) mp4_rocker_pane

0xd716,	// (0x000bb653) mp4_progress_pane_t1

0xd72f,	// (0x000bb66c) mp4_progress_pane_t2

0x0001,

0xf899,	// (0x000bd7d6) mp4_progress_pane_t

0xd748,	// (0x000bb685) mup_progress_pane_cp04

0xd75b,	// (0x000bb698) mp4_rocker_pane_g1

0x51d8,	// (0x000b3115) aid_cell_size_keypad2_ParamLimits

0x51d8,	// (0x000b3115) aid_cell_size_keypad2

0x51ee,	// (0x000b312b) dialer2_ne_pane_ParamLimits

0x51ee,	// (0x000b312b) dialer2_ne_pane

0x5206,	// (0x000b3143) grid_dialer2_keypad_pane_ParamLimits

0x5206,	// (0x000b3143) grid_dialer2_keypad_pane

0xcbf9,	// (0x000bab36) bg_popup_call_pane_cp07_ParamLimits

0xcbf9,	// (0x000bab36) bg_popup_call_pane_cp07

0x5222,	// (0x000b315f) dialer2_ne_pane_t1_ParamLimits

0x5222,	// (0x000b315f) dialer2_ne_pane_t1

0x5262,	// (0x000b319f) cell_dialer2_keypad_pane_ParamLimits

0x5262,	// (0x000b319f) cell_dialer2_keypad_pane

0xd777,	// (0x000bb6b4) bg_button_pane_pane_cp04_ParamLimits

0xd777,	// (0x000bb6b4) bg_button_pane_pane_cp04

0x5288,	// (0x000b31c5) cell_dialer2_keypad_pane_g1_ParamLimits

0x5288,	// (0x000b31c5) cell_dialer2_keypad_pane_g1

0x0d59,	// (0x000aec96) aid_placing_vt_set_content_ParamLimits

0x0d59,	// (0x000aec96) aid_placing_vt_set_content

0x0d7d,	// (0x000aecba) aid_placing_vt_set_title_ParamLimits

0x0d7d,	// (0x000aecba) aid_placing_vt_set_title

0xf09d,	// (0x000bcfda) main_image3_pane

0x534e,	// (0x000b328b) area_side_right_pane_cp01_ParamLimits

0x534e,	// (0x000b328b) area_side_right_pane_cp01

0xa1b8,	// (0x000b80f5) main_image3_pane_g1_ParamLimits

0xa1b8,	// (0x000b80f5) main_image3_pane_g1

0x5367,	// (0x000b32a4) main_image3_pane_g2_ParamLimits

0x5367,	// (0x000b32a4) main_image3_pane_g2

0x538f,	// (0x000b32cc) main_image3_pane_g3_ParamLimits

0x538f,	// (0x000b32cc) main_image3_pane_g3

0x53b9,	// (0x000b32f6) main_image3_pane_g4_ParamLimits

0x53b9,	// (0x000b32f6) main_image3_pane_g4

0x0003,

0xf8a8,	// (0x000bd7e5) main_image3_pane_g_ParamLimits

0xf8a8,	// (0x000bd7e5) main_image3_pane_g

0x53e3,	// (0x000b3320) main_image3_pane_t1_ParamLimits

0x53e3,	// (0x000b3320) main_image3_pane_t1

0x543b,	// (0x000b3378) main_image3_pane_t2_ParamLimits

0x543b,	// (0x000b3378) main_image3_pane_t2

0x548d,	// (0x000b33ca) main_image3_pane_t3_ParamLimits

0x548d,	// (0x000b33ca) main_image3_pane_t3

0x0003,

0xf8b1,	// (0x000bd7ee) main_image3_pane_t_ParamLimits

0xf8b1,	// (0x000bd7ee) main_image3_pane_t

0xbe7c,	// (0x000b9db9) grid_sctrl_middle_pane_cp01_ParamLimits

0xbe7c,	// (0x000b9db9) grid_sctrl_middle_pane_cp01

0x5515,	// (0x000b3452) cell_sctrl_middle_pane_cp01_ParamLimits

0x5515,	// (0x000b3452) cell_sctrl_middle_pane_cp01

0x5532,	// (0x000b346f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5532,	// (0x000b346f) cell_sctrl_middle_pane_cp01_g1

0xf09d,	// (0x000bcfda) main_call4_pane

0x5547,	// (0x000b3484) aid_size_button_call4_ParamLimits

0x5547,	// (0x000b3484) aid_size_button_call4

0x557a,	// (0x000b34b7) call4_windows_pane_ParamLimits

0x557a,	// (0x000b34b7) call4_windows_pane

0x5599,	// (0x000b34d6) grid_call4_button_pane_ParamLimits

0x5599,	// (0x000b34d6) grid_call4_button_pane

0x55d0,	// (0x000b350d) call4_windows_conf_pane

0x55eb,	// (0x000b3528) popup_call4_audio_first_window_ParamLimits

0x55eb,	// (0x000b3528) popup_call4_audio_first_window

0x563d,	// (0x000b357a) popup_call4_audio_second_window_ParamLimits

0x563d,	// (0x000b357a) popup_call4_audio_second_window

0x5656,	// (0x000b3593) popup_call4_audio_wait_window_ParamLimits

0x5656,	// (0x000b3593) popup_call4_audio_wait_window

0x5664,	// (0x000b35a1) cell_call4_button_pane_ParamLimits

0x5664,	// (0x000b35a1) cell_call4_button_pane

0x568b,	// (0x000b35c8) bg_button_pane_cp09_ParamLimits

0x568b,	// (0x000b35c8) bg_button_pane_cp09

0x5697,	// (0x000b35d4) cell_call4_button_pane_g1_ParamLimits

0x5697,	// (0x000b35d4) cell_call4_button_pane_g1

0x56bd,	// (0x000b35fa) cell_call4_button_pane_t1_ParamLimits

0x56bd,	// (0x000b35fa) cell_call4_button_pane_t1

0xd78b,	// (0x000bb6c8) popup_call4_audio_conf_window_ParamLimits

0xd78b,	// (0x000bb6c8) popup_call4_audio_conf_window

0x484c,	// (0x000b2789) mup3_progress_pane_t1_ParamLimits

0x486b,	// (0x000b27a8) mup3_progress_pane_t2_ParamLimits

0xd0bc,	// (0x000baff9) mup3_progress_pane_t3_ParamLimits

0xf781,	// (0x000bd6be) mup3_progress_pane_t_ParamLimits

0xd0d9,	// (0x000bb016) mup_progress_pane_cp03_ParamLimits

0x4e54,	// (0x000b2d91) mup3_control_keys_pane_g4_copy1

0xa384,	// (0x000b82c1) mp4_rocker2_pane_ParamLimits

0xa384,	// (0x000b82c1) mp4_rocker2_pane

0xd7a5,	// (0x000bb6e2) mp4_rocker2_pane_g1

0xd7ad,	// (0x000bb6ea) mp4_rocker2_pane_g2

0xa426,	// (0x000b8363) mp4_rocker2_pane_g3

0xa42e,	// (0x000b836b) mp4_rocker2_pane_g4

0xa436,	// (0x000b8373) mp4_rocker2_pane_g5

0x0004,

0xf8ba,	// (0x000bd7f7) mp4_rocker2_pane_g

0xf09d,	// (0x000bcfda) main_camera4_pane

0xf09d,	// (0x000bcfda) main_video4_pane

0x50c9,	// (0x000b3006) main_video_tele_dialer_pane_t1_ParamLimits

0x50c9,	// (0x000b3006) main_video_tele_dialer_pane_t1

0x50e2,	// (0x000b301f) main_video_tele_dialer_pane_t2_ParamLimits

0x50e2,	// (0x000b301f) main_video_tele_dialer_pane_t2

0x0001,

0xf870,	// (0x000bd7ad) main_video_tele_dialer_pane_t_ParamLimits

0xf870,	// (0x000bd7ad) main_video_tele_dialer_pane_t

0x56fb,	// (0x000b3638) cam4_autofocus_pane_ParamLimits

0x56fb,	// (0x000b3638) cam4_autofocus_pane

0x5711,	// (0x000b364e) cam4_image_uncrop_pane_ParamLimits

0x5711,	// (0x000b364e) cam4_image_uncrop_pane

0x572a,	// (0x000b3667) cam4_indicators_pane_ParamLimits

0x572a,	// (0x000b3667) cam4_indicators_pane

0x575a,	// (0x000b3697) main_camera4_pane_g1_ParamLimits

0x575a,	// (0x000b3697) main_camera4_pane_g1

0x576c,	// (0x000b36a9) main_camera4_pane_g2_ParamLimits

0x576c,	// (0x000b36a9) main_camera4_pane_g2

0x577f,	// (0x000b36bc) main_camera4_pane_g3_ParamLimits

0x577f,	// (0x000b36bc) main_camera4_pane_g3

0x5792,	// (0x000b36cf) main_camera4_pane_g4_ParamLimits

0x5792,	// (0x000b36cf) main_camera4_pane_g4

0x57a5,	// (0x000b36e2) main_camera4_pane_g5_ParamLimits

0x57a5,	// (0x000b36e2) main_camera4_pane_g5

0x0005,

0xf8c5,	// (0x000bd802) main_camera4_pane_g_ParamLimits

0xf8c5,	// (0x000bd802) main_camera4_pane_g

0x57c9,	// (0x000b3706) main_camera4_pane_t1_ParamLimits

0x57c9,	// (0x000b3706) main_camera4_pane_t1

0xa45c,	// (0x000b8399) bg_tb_trans_pane_cp06

0xa472,	// (0x000b83af) cam4_indicators_pane_g1

0xa483,	// (0x000b83c0) cam4_indicators_pane_g2

0x0002,

0xf8e0,	// (0x000bd81d) cam4_indicators_pane_g

0xa49b,	// (0x000b83d8) cam4_indicators_pane_t1

0x582d,	// (0x000b376a) main_video4_pane_g1_ParamLimits

0x582d,	// (0x000b376a) main_video4_pane_g1

0x583c,	// (0x000b3779) main_video4_pane_g2_ParamLimits

0x583c,	// (0x000b3779) main_video4_pane_g2

0x584b,	// (0x000b3788) main_video4_pane_g3_ParamLimits

0x584b,	// (0x000b3788) main_video4_pane_g3

0x585a,	// (0x000b3797) main_video4_pane_g4_ParamLimits

0x585a,	// (0x000b3797) main_video4_pane_g4

0x0004,

0xf8e7,	// (0x000bd824) main_video4_pane_g_ParamLimits

0xf8e7,	// (0x000bd824) main_video4_pane_g

0x5878,	// (0x000b37b5) vid4_indicators_pane_ParamLimits

0x5878,	// (0x000b37b5) vid4_indicators_pane

0x58a6,	// (0x000b37e3) video4_image_uncrop_cif_pane_ParamLimits

0x58a6,	// (0x000b37e3) video4_image_uncrop_cif_pane

0x58c0,	// (0x000b37fd) video4_image_uncrop_nhd_pane_ParamLimits

0x58c0,	// (0x000b37fd) video4_image_uncrop_nhd_pane

0x5711,	// (0x000b364e) video4_image_uncrop_vga_pane_ParamLimits

0x5711,	// (0x000b364e) video4_image_uncrop_vga_pane

0x95f7,	// (0x000b7534) bg_tb_trans_pane_cp07

0xa4c9,	// (0x000b8406) vid4_indicators_pane_g1

0xa4df,	// (0x000b841c) vid4_indicators_pane_g2

0xa4f3,	// (0x000b8430) vid4_indicators_pane_g3

0x0004,

0xf8f2,	// (0x000bd82f) vid4_indicators_pane_g

0xa524,	// (0x000b8461) vid4_indicators_pane_t1

0x58d6,	// (0x000b3813) cam4_autofocus_pane_g1

0x58de,	// (0x000b381b) cam4_autofocus_pane_g2

0x58e6,	// (0x000b3823) cam4_autofocus_pane_g3

0x0002,

0xf8fd,	// (0x000bd83a) cam4_autofocus_pane_g

0x58ee,	// (0x000b382b) cam4_autofocus_pane_g3_copy1

0x5111,	// (0x000b304e) video_down_pane_cp_t1

0x511f,	// (0x000b305c) video_down_pane_cp_t2

0x0001,

0xf875,	// (0x000bd7b2) video_down_pane_cp_t

0x95f7,	// (0x000b7534) popup_vitu2_window_ParamLimits

0x95f7,	// (0x000b7534) popup_vitu2_window

0x58f6,	// (0x000b3833) aid_size_cell2_itu2_ParamLimits

0x58f6,	// (0x000b3833) aid_size_cell2_itu2

0x591c,	// (0x000b3859) aid_size_cell_itu2_ParamLimits

0x591c,	// (0x000b3859) aid_size_cell_itu2

0x597c,	// (0x000b38b9) bg_popup_window_pane_cp09_ParamLimits

0x597c,	// (0x000b38b9) bg_popup_window_pane_cp09

0x598a,	// (0x000b38c7) field_vitu2_entry_pane_ParamLimits

0x598a,	// (0x000b38c7) field_vitu2_entry_pane

0x59b2,	// (0x000b38ef) grid_vitu2_function_pane_ParamLimits

0x59b2,	// (0x000b38ef) grid_vitu2_function_pane

0x5a03,	// (0x000b3940) grid_vitu2_itu_pane_ParamLimits

0x5a03,	// (0x000b3940) grid_vitu2_itu_pane

0x5a93,	// (0x000b39d0) cell_vitu2_itu_pane_ParamLimits

0x5a93,	// (0x000b39d0) cell_vitu2_itu_pane

0x5ac0,	// (0x000b39fd) cell_vitu2_function_pane_ParamLimits

0x5ac0,	// (0x000b39fd) cell_vitu2_function_pane

0xd7c9,	// (0x000bb706) bg_popup_call_pane_cp08_ParamLimits

0xd7c9,	// (0x000bb706) bg_popup_call_pane_cp08

0xd7e0,	// (0x000bb71d) field_vitu2_entry_pane_g1

0xd7ec,	// (0x000bb729) field_vitu2_entry_pane_g2

0x0002,

0xf904,	// (0x000bd841) field_vitu2_entry_pane_g

0x5b04,	// (0x000b3a41) field_vitu2_entry_pane_t1_ParamLimits

0x5b04,	// (0x000b3a41) field_vitu2_entry_pane_t1

0xa53b,	// (0x000b8478) field_vitu2_entry_pane_t2_ParamLimits

0xa53b,	// (0x000b8478) field_vitu2_entry_pane_t2

0x0001,

0xf90b,	// (0x000bd848) field_vitu2_entry_pane_t_ParamLimits

0xf90b,	// (0x000bd848) field_vitu2_entry_pane_t

0x5b32,	// (0x000b3a6f) bg_button_pane_cp010_ParamLimits

0x5b32,	// (0x000b3a6f) bg_button_pane_cp010

0xa558,	// (0x000b8495) cell_vitu2_itu_pane_g1

0x5b4e,	// (0x000b3a8b) cell_vitu2_itu_pane_t1_ParamLimits

0x5b4e,	// (0x000b3a8b) cell_vitu2_itu_pane_t1

0xfa42,	// (0x000ad97f) cell_vitu2_itu_pane_t2_ParamLimits

0xfa42,	// (0x000ad97f) cell_vitu2_itu_pane_t2

0x0002,

0xf915,	// (0x000bd852) cell_vitu2_itu_pane_t_ParamLimits

0xf915,	// (0x000bd852) cell_vitu2_itu_pane_t

0x95f7,	// (0x000b7534) bg_button_pane_cp011

0x5bac,	// (0x000b3ae9) cell_vitu2_function_pane_g1

0xf09d,	// (0x000bcfda) main_myfav_hc_pane

0x54dd,	// (0x000b341a) popup_image3_note_pane_ParamLimits

0x54dd,	// (0x000b341a) popup_image3_note_pane

0x54f9,	// (0x000b3436) popup_image3_tool_bar_pane_ParamLimits

0x54f9,	// (0x000b3436) popup_image3_tool_bar_pane

0xfad0,	// (0x000ada0d) cell_vitu2_itu_pane_t3_ParamLimits

0xfad0,	// (0x000ada0d) cell_vitu2_itu_pane_t3

0x95ed,	// (0x000b752a) bg_popup_trans_pane

0xd80e,	// (0x000bb74b) grid_image3_tool_bar_pane

0xd818,	// (0x000bb755) bg_popup_trans_pane_g1

0xad97,	// (0x000b8cd4) bg_popup_trans_pane_g2

0xd820,	// (0x000bb75d) bg_popup_trans_pane_g3

0xd828,	// (0x000bb765) bg_popup_trans_pane_g4

0xd830,	// (0x000bb76d) bg_popup_trans_pane_g5

0xd838,	// (0x000bb775) bg_popup_trans_pane_g6

0xd840,	// (0x000bb77d) bg_popup_trans_pane_g7

0xd848,	// (0x000bb785) bg_popup_trans_pane_g8

0xad77,	// (0x000b8cb4) bg_popup_trans_pane_g9

0x0008,

0xf91c,	// (0x000bd859) bg_popup_trans_pane_g

0xd850,	// (0x000bb78d) cell_image3_tool_bar_pane_ParamLimits

0xd850,	// (0x000bb78d) cell_image3_tool_bar_pane

0xce1a,	// (0x000bad57) cell_image3_tool_bar_pane_g1

0x95ed,	// (0x000b752a) bg_popup_trans_pane_cp1

0xd866,	// (0x000bb7a3) popup_image3_note_pane_t1

0xd874,	// (0x000bb7b1) popup_image3_note_pane_t2

0xd882,	// (0x000bb7bf) popup_image3_note_pane_t3

0x0002,

0xf92f,	// (0x000bd86c) popup_image3_note_pane_t

0xd892,	// (0x000bb7cf) popup_image3_note_pane_t3_copy1

0x5bc0,	// (0x000b3afd) bg_myfav_hc_instruction_pane_ParamLimits

0x5bc0,	// (0x000b3afd) bg_myfav_hc_instruction_pane

0x5bd8,	// (0x000b3b15) cell_myfav_contact_pane_ParamLimits

0x5bd8,	// (0x000b3b15) cell_myfav_contact_pane

0x5bf4,	// (0x000b3b31) cell_myfav_contact_pane_cp1_ParamLimits

0x5bf4,	// (0x000b3b31) cell_myfav_contact_pane_cp1

0x5c0c,	// (0x000b3b49) cell_myfav_contact_pane_cp2_ParamLimits

0x5c0c,	// (0x000b3b49) cell_myfav_contact_pane_cp2

0x5c24,	// (0x000b3b61) cell_myfav_contact_pane_cp3_ParamLimits

0x5c24,	// (0x000b3b61) cell_myfav_contact_pane_cp3

0x5c3b,	// (0x000b3b78) cell_myfav_contact_pane_cp4_ParamLimits

0x5c3b,	// (0x000b3b78) cell_myfav_contact_pane_cp4

0x5c53,	// (0x000b3b90) cell_myfav_contact_pane_cp5_ParamLimits

0x5c53,	// (0x000b3b90) cell_myfav_contact_pane_cp5

0x5c67,	// (0x000b3ba4) cell_myfav_contact_pane_cp6_ParamLimits

0x5c67,	// (0x000b3ba4) cell_myfav_contact_pane_cp6

0x5c7d,	// (0x000b3bba) cell_myfav_contact_pane_cp7_ParamLimits

0x5c7d,	// (0x000b3bba) cell_myfav_contact_pane_cp7

0xd8a0,	// (0x000bb7dd) listscroll_gen_pane_cp05

0x5c95,	// (0x000b3bd2) main_myfav_hc_pane_g1_ParamLimits

0x5c95,	// (0x000b3bd2) main_myfav_hc_pane_g1

0x5caf,	// (0x000b3bec) main_myfav_hc_pane_g2_ParamLimits

0x5caf,	// (0x000b3bec) main_myfav_hc_pane_g2

0x0002,

0xf936,	// (0x000bd873) main_myfav_hc_pane_g_ParamLimits

0xf936,	// (0x000bd873) main_myfav_hc_pane_g

0x5ce3,	// (0x000b3c20) main_myfav_hc_pane_t1_ParamLimits

0x5ce3,	// (0x000b3c20) main_myfav_hc_pane_t1

0xd8a9,	// (0x000bb7e6) main_myfav_hc_pane_t2_ParamLimits

0xd8a9,	// (0x000bb7e6) main_myfav_hc_pane_t2

0xd8bb,	// (0x000bb7f8) main_myfav_hc_pane_t3_ParamLimits

0xd8bb,	// (0x000bb7f8) main_myfav_hc_pane_t3

0x5cfa,	// (0x000b3c37) main_myfav_hc_pane_t4_ParamLimits

0x5cfa,	// (0x000b3c37) main_myfav_hc_pane_t4

0x0004,

0xf93d,	// (0x000bd87a) main_myfav_hc_pane_t_ParamLimits

0xf93d,	// (0x000bd87a) main_myfav_hc_pane_t

0xce1a,	// (0x000bad57) bg_myfav_hc_instruction_pane_g1

0xd8cd,	// (0x000bb80a) cell_myfav_contact_pane_g1_ParamLimits

0xd8cd,	// (0x000bb80a) cell_myfav_contact_pane_g1

0xd8cd,	// (0x000bb80a) cell_myfav_contact_pane_g2_ParamLimits

0xd8cd,	// (0x000bb80a) cell_myfav_contact_pane_g2

0xd8d9,	// (0x000bb816) cell_myfav_contact_pane_g3_ParamLimits

0xd8d9,	// (0x000bb816) cell_myfav_contact_pane_g3

0xd0a6,	// (0x000bafe3) cell_myfav_contact_pane_g4_ParamLimits

0xd0a6,	// (0x000bafe3) cell_myfav_contact_pane_g4

0xd8e6,	// (0x000bb823) cell_myfav_contact_pane_g5_ParamLimits

0xd8e6,	// (0x000bb823) cell_myfav_contact_pane_g5

0x0004,

0xf948,	// (0x000bd885) cell_myfav_contact_pane_g_ParamLimits

0xf948,	// (0x000bd885) cell_myfav_contact_pane_g

0x5cc9,	// (0x000b3c06) main_myfav_hc_pane_g3_ParamLimits

0x5cc9,	// (0x000b3c06) main_myfav_hc_pane_g3

0xfd10,	// (0x000adc4d) popup_adpt_find_window

0x5d24,	// (0x000b3c61) afind_page_pane_ParamLimits

0x5d24,	// (0x000b3c61) afind_page_pane

0x5d39,	// (0x000b3c76) aid_size_cell_afind_ParamLimits

0x5d39,	// (0x000b3c76) aid_size_cell_afind

0x5d57,	// (0x000b3c94) bg_popup_sub_pane_cp09_ParamLimits

0x5d57,	// (0x000b3c94) bg_popup_sub_pane_cp09

0x5d64,	// (0x000b3ca1) find_pane_cp01_ParamLimits

0x5d64,	// (0x000b3ca1) find_pane_cp01

0xd8f2,	// (0x000bb82f) grid_afind_control_pane_ParamLimits

0xd8f2,	// (0x000bb82f) grid_afind_control_pane

0x5d71,	// (0x000b3cae) grid_afind_pane_ParamLimits

0x5d71,	// (0x000b3cae) grid_afind_pane

0x5d93,	// (0x000b3cd0) cell_afind_pane_ParamLimits

0x5d93,	// (0x000b3cd0) cell_afind_pane

0xce1a,	// (0x000bad57) afind_page_pane_g1

0x5e00,	// (0x000b3d3d) afind_page_pane_g2

0x5e09,	// (0x000b3d46) afind_page_pane_g3

0x0002,

0xf953,	// (0x000bd890) afind_page_pane_g

0x5e12,	// (0x000b3d4f) afind_page_pane_t1

0xd906,	// (0x000bb843) cell_afind_grid_control_pane_ParamLimits

0xd906,	// (0x000bb843) cell_afind_grid_control_pane

0xd777,	// (0x000bb6b4) bg_button_pane_cp69_ParamLimits

0xd777,	// (0x000bb6b4) bg_button_pane_cp69

0x5e32,	// (0x000b3d6f) cell_afind_pane_g1_ParamLimits

0x5e32,	// (0x000b3d6f) cell_afind_pane_g1

0x5e3f,	// (0x000b3d7c) cell_afind_pane_t1_ParamLimits

0x5e3f,	// (0x000b3d7c) cell_afind_pane_t1

0xab8c,	// (0x000b8ac9) bg_button_pane_cp72

0xd915,	// (0x000bb852) cell_afind_grid_control_pane_g1

0x2ca3,	// (0x000b0be0) aid_image_placing_area_ParamLimits

0x2ca3,	// (0x000b0be0) aid_image_placing_area

0xd42c,	// (0x000bb369) field_vitu_entry_pane_g1_ParamLimits

0xd42c,	// (0x000bb369) field_vitu_entry_pane_g1

0xd438,	// (0x000bb375) field_vitu_entry_pane_g2_ParamLimits

0xd438,	// (0x000bb375) field_vitu_entry_pane_g2

0x0001,

0xf800,	// (0x000bd73d) field_vitu_entry_pane_g_ParamLimits

0xf800,	// (0x000bd73d) field_vitu_entry_pane_g

0x4f23,	// (0x000b2e60) cell_vitu_itu_pane_g1_ParamLimits

0x4f65,	// (0x000b2ea2) cell_vitu_itu_pane_t3_ParamLimits

0x4f65,	// (0x000b2ea2) cell_vitu_itu_pane_t3

0xd716,	// (0x000bb653) mp4_progress_pane_t1_ParamLimits

0xd72f,	// (0x000bb66c) mp4_progress_pane_t2_ParamLimits

0xf899,	// (0x000bd7d6) mp4_progress_pane_t_ParamLimits

0xd748,	// (0x000bb685) mup_progress_pane_cp04_ParamLimits

0x5d0e,	// (0x000b3c4b) main_myfav_hc_pane_t5_ParamLimits

0x5d0e,	// (0x000b3c4b) main_myfav_hc_pane_t5

0xfb92,	// (0x000adacf) aid_zoom_text_primary

0xfd10,	// (0x000adc4d) popup_adpt_find_window_ParamLimits

0x95f7,	// (0x000b7534) main_cam_set_pane

0x5743,	// (0x000b3680) cam4_zoom_pane_ParamLimits

0x5743,	// (0x000b3680) cam4_zoom_pane

0x5e51,	// (0x000b3d8e) main_cam_set_pane_g1_ParamLimits

0x5e51,	// (0x000b3d8e) main_cam_set_pane_g1

0x5e5f,	// (0x000b3d9c) main_cam_set_pane_g2_ParamLimits

0x5e5f,	// (0x000b3d9c) main_cam_set_pane_g2

0x0001,

0xf95a,	// (0x000bd897) main_cam_set_pane_g_ParamLimits

0xf95a,	// (0x000bd897) main_cam_set_pane_g

0x5e80,	// (0x000b3dbd) main_cam_set_pane_t1_ParamLimits

0x5e80,	// (0x000b3dbd) main_cam_set_pane_t1

0x5e9b,	// (0x000b3dd8) main_cset_listscroll_pane_ParamLimits

0x5e9b,	// (0x000b3dd8) main_cset_listscroll_pane

0x5ebf,	// (0x000b3dfc) main_cset_slider_pane_ParamLimits

0x5ebf,	// (0x000b3dfc) main_cset_slider_pane

0xd926,	// (0x000bb863) main_cset_list_pane_ParamLimits

0xd926,	// (0x000bb863) main_cset_list_pane

0xd936,	// (0x000bb873) scroll_pane_cp028

0x5ee9,	// (0x000b3e26) aid_area_touch_slider

0x5f05,	// (0x000b3e42) cset_slider_pane

0x5f2f,	// (0x000b3e6c) main_cset_slider_pane_g1

0x5f44,	// (0x000b3e81) main_cset_slider_pane_g2

0x0011,

0xf95f,	// (0x000bd89c) main_cset_slider_pane_g

0xd96f,	// (0x000bb8ac) main_cset_slider_pane_t1

0x6006,	// (0x000b3f43) main_cset_slider_pane_t2

0x6020,	// (0x000b3f5d) main_cset_slider_pane_t3

0x603a,	// (0x000b3f77) main_cset_slider_pane_t4

0x6054,	// (0x000b3f91) main_cset_slider_pane_t5

0x6072,	// (0x000b3faf) main_cset_slider_pane_t6

0x6089,	// (0x000b3fc6) main_cset_slider_pane_t7

0x000e,

0xf984,	// (0x000bd8c1) main_cset_slider_pane_t

0x6195,	// (0x000b40d2) cset_list_set_pane_ParamLimits

0x6195,	// (0x000b40d2) cset_list_set_pane

0x61a9,	// (0x000b40e6) aid_position_infowindow_above

0x61b1,	// (0x000b40ee) aid_position_infowindow_below

0x61b9,	// (0x000b40f6) cset_list_set_pane_g1_ParamLimits

0x61b9,	// (0x000b40f6) cset_list_set_pane_g1

0x61c5,	// (0x000b4102) cset_list_set_pane_g3_ParamLimits

0x61c5,	// (0x000b4102) cset_list_set_pane_g3

0x0001,

0xf9a3,	// (0x000bd8e0) cset_list_set_pane_g_ParamLimits

0xf9a3,	// (0x000bd8e0) cset_list_set_pane_g

0x61d4,	// (0x000b4111) cset_list_set_pane_t1_ParamLimits

0x61d4,	// (0x000b4111) cset_list_set_pane_t1

0xbe7c,	// (0x000b9db9) list_highlight_pane_cp021_ParamLimits

0xbe7c,	// (0x000b9db9) list_highlight_pane_cp021

0xb6c5,	// (0x000b9602) cset_slider_pane_g1

0xb6d7,	// (0x000b9614) cset_slider_pane_g2

0xb6ce,	// (0x000b960b) cset_slider_pane_g3

0x0002,

0xf9a8,	// (0x000bd8e5) cset_slider_pane_g

0xa56a,	// (0x000b84a7) aid_area_touch_cam4_zoom

0x61e9,	// (0x000b4126) cam4_zoom_cont_pane

0x61f1,	// (0x000b412e) cam4_zoom_pane_g1

0x61f9,	// (0x000b4136) cam4_zoom_pane_g2

0x6201,	// (0x000b413e) cam4_zoom_pane_g3

0x0002,

0xf9af,	// (0x000bd8ec) cam4_zoom_pane_g

0xa573,	// (0x000b84b0) cam4_zoom_cont_pane_g1

0xa57c,	// (0x000b84b9) cam4_zoom_cont_pane_g2

0xa585,	// (0x000b84c2) cam4_zoom_cont_pane_g3

0x0002,

0xf9b6,	// (0x000bd8f3) cam4_zoom_cont_pane_g

0x5565,	// (0x000b34a2) call4_image_pane_ParamLimits

0x5565,	// (0x000b34a2) call4_image_pane

0x55d0,	// (0x000b350d) call4_windows_conf_pane_ParamLimits

0x561b,	// (0x000b3558) popup_call4_audio_in_window_ParamLimits

0x561b,	// (0x000b3558) popup_call4_audio_in_window

0x95ed,	// (0x000b752a) bg_popup_call2_act_pane_cp02

0xd783,	// (0x000bb6c0) call4_list_conf_pane

0xce1a,	// (0x000bad57) call4_image_pane_g1

0xce1a,	// (0x000bad57) call4_image_pane_g2

0x0001,

0xf6c1,	// (0x000bd5fe) call4_image_pane_g

0xda0f,	// (0x000bb94c) list_single_graphic_popup_conf4_pane_ParamLimits

0xda0f,	// (0x000bb94c) list_single_graphic_popup_conf4_pane

0x95ed,	// (0x000b752a) list_highlight_pane_cp022

0xda24,	// (0x000bb961) list_single_graphic_popup_conf4_pane_g1

0xb2bd,	// (0x000b91fa) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9bd,	// (0x000bd8fa) list_single_graphic_popup_conf4_pane_g

0xda2c,	// (0x000bb969) list_single_graphic_popup_conf4_pane_t1

0x0e94,	// (0x000aedd1) popup_vtel_slider_window_ParamLimits

0x0e94,	// (0x000aedd1) popup_vtel_slider_window

0xd765,	// (0x000bb6a2) dialer2_ne_pane_t2_ParamLimits

0xd765,	// (0x000bb6a2) dialer2_ne_pane_t2

0x0001,

0xf89e,	// (0x000bd7db) dialer2_ne_pane_t_ParamLimits

0xf89e,	// (0x000bd7db) dialer2_ne_pane_t

0xcbf9,	// (0x000bab36) bg_popup_sub_pane_cp010_ParamLimits

0xcbf9,	// (0x000bab36) bg_popup_sub_pane_cp010

0x620a,	// (0x000b4147) popup_vtel_slider_window_g1_ParamLimits

0x620a,	// (0x000b4147) popup_vtel_slider_window_g1

0x621d,	// (0x000b415a) popup_vtel_slider_window_g2_ParamLimits

0x621d,	// (0x000b415a) popup_vtel_slider_window_g2

0x0003,

0xf9c2,	// (0x000bd8ff) popup_vtel_slider_window_g_ParamLimits

0xf9c2,	// (0x000bd8ff) popup_vtel_slider_window_g

0x6273,	// (0x000b41b0) vtel_slider_pane_ParamLimits

0x6273,	// (0x000b41b0) vtel_slider_pane

0x6295,	// (0x000b41d2) vtel_slider_pane_g1_ParamLimits

0x6295,	// (0x000b41d2) vtel_slider_pane_g1

0x62a9,	// (0x000b41e6) vtel_slider_pane_g2_ParamLimits

0x62a9,	// (0x000b41e6) vtel_slider_pane_g2

0x62c1,	// (0x000b41fe) vtel_slider_pane_g3_ParamLimits

0x62c1,	// (0x000b41fe) vtel_slider_pane_g3

0x6295,	// (0x000b41d2) vtel_slider_pane_g4_ParamLimits

0x6295,	// (0x000b41d2) vtel_slider_pane_g4

0x62d7,	// (0x000b4214) vtel_slider_pane_g5_ParamLimits

0x62d7,	// (0x000b4214) vtel_slider_pane_g5

0x0004,

0xf9cb,	// (0x000bd908) vtel_slider_pane_g_ParamLimits

0xf9cb,	// (0x000bd908) vtel_slider_pane_g

0x95f7,	// (0x000b7534) main_gallery2_pane

0x5948,	// (0x000b3885) aid_size_row_itut2_dropdow_list_ParamLimits

0x5948,	// (0x000b3885) aid_size_row_itut2_dropdow_list

0x59da,	// (0x000b3917) grid_vitu2_function_top_pane_ParamLimits

0x59da,	// (0x000b3917) grid_vitu2_function_top_pane

0x5a3e,	// (0x000b397b) popup_vitu2_dropdown_list_window_ParamLimits

0x5a3e,	// (0x000b397b) popup_vitu2_dropdown_list_window

0x5a67,	// (0x000b39a4) popup_vitu2_match_list_window

0x62fb,	// (0x000b4238) cell_vitu2_function_top_pane_ParamLimits

0x62fb,	// (0x000b4238) cell_vitu2_function_top_pane

0x631d,	// (0x000b425a) cell_vitu2_function_top_pane_cp01_ParamLimits

0x631d,	// (0x000b425a) cell_vitu2_function_top_pane_cp01

0x6339,	// (0x000b4276) cell_vitu2_function_top_wide_pane_ParamLimits

0x6339,	// (0x000b4276) cell_vitu2_function_top_wide_pane

0x95f7,	// (0x000b7534) bg_button_pane_cp012

0x6355,	// (0x000b4292) cell_vitu2_function_top_pane_g1

0xa58e,	// (0x000b84cb) bg_button_pane_cp013_ParamLimits

0xa58e,	// (0x000b84cb) bg_button_pane_cp013

0x6369,	// (0x000b42a6) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6369,	// (0x000b42a6) cell_vitu2_function_top_wide_pane_g1

0x95f7,	// (0x000b7534) bg_popup_sub_pane_cp20

0x6381,	// (0x000b42be) list_vitu2_match_list_pane

0xd818,	// (0x000bb755) bg_popup_sub_pane_cp20_g1

0xd820,	// (0x000bb75d) bg_popup_sub_pane_cp20_g2

0xad97,	// (0x000b8cd4) bg_popup_sub_pane_cp20_g3

0xd828,	// (0x000bb765) bg_popup_sub_pane_cp20_g4

0xad77,	// (0x000b8cb4) bg_popup_sub_pane_cp20_g5

0xda42,	// (0x000bb97f) bg_popup_sub_pane_cp20_g6

0xd838,	// (0x000bb775) bg_popup_sub_pane_cp20_g7

0xd840,	// (0x000bb77d) bg_popup_sub_pane_cp20_g8

0xd848,	// (0x000bb785) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9d6,	// (0x000bd913) bg_popup_sub_pane_cp20_g

0xa5aa,	// (0x000b84e7) list_vitu2_match_list_item_pane_ParamLimits

0xa5aa,	// (0x000b84e7) list_vitu2_match_list_item_pane

0xa5bc,	// (0x000b84f9) list_vitu2_match_list_item_pane_t1

0xf09d,	// (0x000bcfda) bg_popup_sub_pane_cp21

0xa5ca,	// (0x000b8507) grid_vitu2_dropdown_list_pane

0x63eb,	// (0x000b4328) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x63eb,	// (0x000b4328) cell_vitu2_dropdown_list_char_pane

0x640e,	// (0x000b434b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x640e,	// (0x000b434b) cell_vitu2_dropdown_list_ctrl_pane

0xda4a,	// (0x000bb987) cell_vitu2_dropdown_list_char_pane_g1

0xda53,	// (0x000bb990) cell_vitu2_dropdown_list_char_pane_g2

0xda5c,	// (0x000bb999) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f3,	// (0x000bd930) cell_vitu2_dropdown_list_char_pane_g

0x643c,	// (0x000b4379) cell_vitu2_dropdown_list_char_pane_t1

0x644a,	// (0x000b4387) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x644a,	// (0x000b4387) cell_vitu2_dropdown_list_ctrl_pane_g1

0x645a,	// (0x000b4397) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x645a,	// (0x000b4397) cell_vitu2_dropdown_list_ctrl_pane_g2

0x646b,	// (0x000b43a8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x646b,	// (0x000b43a8) cell_vitu2_dropdown_list_ctrl_pane_g3

0x647b,	// (0x000b43b8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x647b,	// (0x000b43b8) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa45c,	// (0x000b8399) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa45c,	// (0x000b8399) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9fa,	// (0x000bd937) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9fa,	// (0x000bd937) cell_vitu2_dropdown_list_ctrl_pane_g

0x6497,	// (0x000b43d4) aid_size_cell_gallery2_ParamLimits

0x6497,	// (0x000b43d4) aid_size_cell_gallery2

0x64b5,	// (0x000b43f2) grid_gallery2_pane_ParamLimits

0x64b5,	// (0x000b43f2) grid_gallery2_pane

0x64cf,	// (0x000b440c) scroll_pane_cp029_ParamLimits

0x64cf,	// (0x000b440c) scroll_pane_cp029

0x64e0,	// (0x000b441d) cell_gallery2_pane_ParamLimits

0x64e0,	// (0x000b441d) cell_gallery2_pane

0xda65,	// (0x000bb9a2) cell_gallery2_pane_g2

0x6544,	// (0x000b4481) cell_gallery2_pane_g3

0xda6d,	// (0x000bb9aa) cell_gallery2_pane_g4

0xda75,	// (0x000bb9b2) cell_gallery2_pane_g5

0xab25,	// (0x000b8a62) grid_highlight_pane_cp10

0x5a67,	// (0x000b39a4) popup_vitu2_match_list_window_ParamLimits

0x5a7e,	// (0x000b39bb) popup_vitu2_query_window_ParamLimits

0x5a7e,	// (0x000b39bb) popup_vitu2_query_window

0xf09d,	// (0x000bcfda) bg_vitu2_candi_button_pane

0xda4a,	// (0x000bb987) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xda53,	// (0x000bb990) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xda5c,	// (0x000bb999) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x654c,	// (0x000b4489) bg_button_pane_cp015

0x6560,	// (0x000b449d) bg_button_pane_cp016

0x6573,	// (0x000b44b0) bg_button_pane_cp017

0xc9da,	// (0x000ba917) bg_popup_sub_pane_cp22

0xda7d,	// (0x000bb9ba) popup_vitu2_query_window_g1

0x65b8,	// (0x000b44f5) popup_vitu2_query_window_g2

0x0002,

0xfa05,	// (0x000bd942) popup_vitu2_query_window_g

0x65d7,	// (0x000b4514) popup_vitu2_query_window_t1_ParamLimits

0x65d7,	// (0x000b4514) popup_vitu2_query_window_t1

0x660c,	// (0x000b4549) popup_vitu2_query_window_t2_ParamLimits

0x660c,	// (0x000b4549) popup_vitu2_query_window_t2

0x661e,	// (0x000b455b) popup_vitu2_query_window_t3_ParamLimits

0x661e,	// (0x000b455b) popup_vitu2_query_window_t3

0x6646,	// (0x000b4583) popup_vitu2_query_window_t4_ParamLimits

0x6646,	// (0x000b4583) popup_vitu2_query_window_t4

0x6667,	// (0x000b45a4) popup_vitu2_query_window_t5_ParamLimits

0x6667,	// (0x000b45a4) popup_vitu2_query_window_t5

0x0006,

0xfa0c,	// (0x000bd949) popup_vitu2_query_window_t_ParamLimits

0xfa0c,	// (0x000bd949) popup_vitu2_query_window_t

0xd91e,	// (0x000bb85b) main_cset_text_pane

0x5ee9,	// (0x000b3e26) aid_area_touch_slider_ParamLimits

0x5f05,	// (0x000b3e42) cset_slider_pane_ParamLimits

0x5f2f,	// (0x000b3e6c) main_cset_slider_pane_g1_ParamLimits

0x5f44,	// (0x000b3e81) main_cset_slider_pane_g2_ParamLimits

0xd93f,	// (0x000bb87c) main_cset_slider_pane_g3_ParamLimits

0xd93f,	// (0x000bb87c) main_cset_slider_pane_g3

0x5f59,	// (0x000b3e96) main_cset_slider_pane_g4_ParamLimits

0x5f59,	// (0x000b3e96) main_cset_slider_pane_g4

0x5f68,	// (0x000b3ea5) main_cset_slider_pane_g5_ParamLimits

0x5f68,	// (0x000b3ea5) main_cset_slider_pane_g5

0x5f76,	// (0x000b3eb3) main_cset_slider_pane_g6_ParamLimits

0x5f76,	// (0x000b3eb3) main_cset_slider_pane_g6

0xf95f,	// (0x000bd89c) main_cset_slider_pane_g_ParamLimits

0xd96f,	// (0x000bb8ac) main_cset_slider_pane_t1_ParamLimits

0x6006,	// (0x000b3f43) main_cset_slider_pane_t2_ParamLimits

0x6020,	// (0x000b3f5d) main_cset_slider_pane_t3_ParamLimits

0x603a,	// (0x000b3f77) main_cset_slider_pane_t4_ParamLimits

0x6054,	// (0x000b3f91) main_cset_slider_pane_t5_ParamLimits

0x6072,	// (0x000b3faf) main_cset_slider_pane_t6_ParamLimits

0x6089,	// (0x000b3fc6) main_cset_slider_pane_t7_ParamLimits

0x60b7,	// (0x000b3ff4) main_cset_slider_pane_t8_ParamLimits

0x60b7,	// (0x000b3ff4) main_cset_slider_pane_t8

0x60df,	// (0x000b401c) main_cset_slider_pane_t9_ParamLimits

0x60df,	// (0x000b401c) main_cset_slider_pane_t9

0x6107,	// (0x000b4044) main_cset_slider_pane_t10_ParamLimits

0x6107,	// (0x000b4044) main_cset_slider_pane_t10

0x612f,	// (0x000b406c) main_cset_slider_pane_t11_ParamLimits

0x612f,	// (0x000b406c) main_cset_slider_pane_t11

0x6159,	// (0x000b4096) main_cset_slider_pane_t12_ParamLimits

0x6159,	// (0x000b4096) main_cset_slider_pane_t12

0x6176,	// (0x000b40b3) main_cset_slider_pane_t13_ParamLimits

0x6176,	// (0x000b40b3) main_cset_slider_pane_t13

0xf984,	// (0x000bd8c1) main_cset_slider_pane_t_ParamLimits

0x95ed,	// (0x000b752a) bg_popup_sub_pane_cp011

0xda89,	// (0x000bb9c6) main_cset_text_pane_g1

0xda91,	// (0x000bb9ce) main_cset_text_pane_t1

0xda9f,	// (0x000bb9dc) main_cset_text_pane_t2

0xdaad,	// (0x000bb9ea) main_cset_text_pane_t3

0xdabb,	// (0x000bb9f8) main_cset_text_pane_t4

0xdac9,	// (0x000bba06) main_cset_text_pane_t5

0xdad7,	// (0x000bba14) main_cset_text_pane_t6

0xdae5,	// (0x000bba22) main_cset_text_pane_t7

0x0006,

0xfa1b,	// (0x000bd958) main_cset_text_pane_t

0xf09d,	// (0x000bcfda) main_cam4_burst_pane

0xf09d,	// (0x000bcfda) main_cam5_pane

0x5e20,	// (0x000b3d5d) bg_button_pane_cp019

0x5e29,	// (0x000b3d66) bg_button_pane_cp020

0xd94b,	// (0x000bb888) main_cset_slider_pane_g7_ParamLimits

0xd94b,	// (0x000bb888) main_cset_slider_pane_g7

0xd957,	// (0x000bb894) main_cset_slider_pane_g8_ParamLimits

0xd957,	// (0x000bb894) main_cset_slider_pane_g8

0x5f8a,	// (0x000b3ec7) main_cset_slider_pane_g9_ParamLimits

0x5f8a,	// (0x000b3ec7) main_cset_slider_pane_g9

0x5f96,	// (0x000b3ed3) main_cset_slider_pane_g10_ParamLimits

0x5f96,	// (0x000b3ed3) main_cset_slider_pane_g10

0x5fa2,	// (0x000b3edf) main_cset_slider_pane_g11_ParamLimits

0x5fa2,	// (0x000b3edf) main_cset_slider_pane_g11

0x5fae,	// (0x000b3eeb) main_cset_slider_pane_g12_ParamLimits

0x5fae,	// (0x000b3eeb) main_cset_slider_pane_g12

0x5fba,	// (0x000b3ef7) main_cset_slider_pane_g13_ParamLimits

0x5fba,	// (0x000b3ef7) main_cset_slider_pane_g13

0x5fc6,	// (0x000b3f03) main_cset_slider_pane_g14_ParamLimits

0x5fc6,	// (0x000b3f03) main_cset_slider_pane_g14

0x5fd2,	// (0x000b3f0f) main_cset_slider_pane_g15_ParamLimits

0x5fd2,	// (0x000b3f0f) main_cset_slider_pane_g15

0xd99d,	// (0x000bb8da) main_cset_slider_pane_t14_ParamLimits

0xd99d,	// (0x000bb8da) main_cset_slider_pane_t14

0xd9d6,	// (0x000bb913) main_cset_slider_pane_t15_ParamLimits

0xd9d6,	// (0x000bb913) main_cset_slider_pane_t15

0x66de,	// (0x000b461b) aid_cam4_burst_size_cell_ParamLimits

0x66de,	// (0x000b461b) aid_cam4_burst_size_cell

0x66fe,	// (0x000b463b) grid_cam4_burst_pane_ParamLimits

0x66fe,	// (0x000b463b) grid_cam4_burst_pane

0x6738,	// (0x000b4675) linegrid_cam4_burst_pane_ParamLimits

0x6738,	// (0x000b4675) linegrid_cam4_burst_pane

0xdaf3,	// (0x000bba30) scroll_pane_cp30_ParamLimits

0xdaf3,	// (0x000bba30) scroll_pane_cp30

0x675a,	// (0x000b4697) cell_cam4_burst_pane_ParamLimits

0x675a,	// (0x000b4697) cell_cam4_burst_pane

0xdaff,	// (0x000bba3c) linegrid_cam4_burst_pane_g1_ParamLimits

0xdaff,	// (0x000bba3c) linegrid_cam4_burst_pane_g1

0x67af,	// (0x000b46ec) linegrid_cam4_burst_pane_g2_ParamLimits

0x67af,	// (0x000b46ec) linegrid_cam4_burst_pane_g2

0xdb0c,	// (0x000bba49) linegrid_cam4_burst_pane_g3_ParamLimits

0xdb0c,	// (0x000bba49) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2a,	// (0x000bd967) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2a,	// (0x000bd967) linegrid_cam4_burst_pane_g

0x67c0,	// (0x000b46fd) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x67c0,	// (0x000b46fd) linegrid_cam4_burst_pane_g3_copy1

0xdb19,	// (0x000bba56) linegrid_cam4_burst_pane_g4_ParamLimits

0xdb19,	// (0x000bba56) linegrid_cam4_burst_pane_g4

0x67de,	// (0x000b471b) linegrid_cam4_burst_pane_g5_ParamLimits

0x67de,	// (0x000b471b) linegrid_cam4_burst_pane_g5

0x67ef,	// (0x000b472c) linegrid_cam4_burst_pane_g6_ParamLimits

0x67ef,	// (0x000b472c) linegrid_cam4_burst_pane_g6

0xdb26,	// (0x000bba63) linegrid_cam4_burst_pane_g7_ParamLimits

0xdb26,	// (0x000bba63) linegrid_cam4_burst_pane_g7

0x6806,	// (0x000b4743) cell_cam4_burst_pane_g1

0xdb3f,	// (0x000bba7c) main_cam5_pane_t1_ParamLimits

0xdb3f,	// (0x000bba7c) main_cam5_pane_t1

0xdb51,	// (0x000bba8e) main_cam5_pane_t2_ParamLimits

0xdb51,	// (0x000bba8e) main_cam5_pane_t2

0xdb63,	// (0x000bbaa0) main_cam5_pane_t3_ParamLimits

0xdb63,	// (0x000bbaa0) main_cam5_pane_t3

0xdb75,	// (0x000bbab2) main_cam5_pane_t4_ParamLimits

0xdb75,	// (0x000bbab2) main_cam5_pane_t4

0xdb8d,	// (0x000bbaca) main_cam5_pane_t5_ParamLimits

0xdb8d,	// (0x000bbaca) main_cam5_pane_t5

0xdba1,	// (0x000bbade) main_cam5_pane_t6_ParamLimits

0xdba1,	// (0x000bbade) main_cam5_pane_t6

0xdbb5,	// (0x000bbaf2) main_cam5_pane_t7_ParamLimits

0xdbb5,	// (0x000bbaf2) main_cam5_pane_t7

0xdbc7,	// (0x000bbb04) main_cam5_pane_t8_ParamLimits

0xdbc7,	// (0x000bbb04) main_cam5_pane_t8

0xdbe5,	// (0x000bbb22) main_cam5_pane_t9_ParamLimits

0xdbe5,	// (0x000bbb22) main_cam5_pane_t9

0xdbf7,	// (0x000bbb34) main_cam5_pane_t10_ParamLimits

0xdbf7,	// (0x000bbb34) main_cam5_pane_t10

0xdc09,	// (0x000bbb46) main_cam5_pane_t11_ParamLimits

0xdc09,	// (0x000bbb46) main_cam5_pane_t11

0xdc1d,	// (0x000bbb5a) main_cam5_pane_t12_ParamLimits

0xdc1d,	// (0x000bbb5a) main_cam5_pane_t12

0xdc34,	// (0x000bbb71) main_cam5_pane_t13_ParamLimits

0xdc34,	// (0x000bbb71) main_cam5_pane_t13

0x000c,

0xfa36,	// (0x000bd973) main_cam5_pane_t_ParamLimits

0xfa36,	// (0x000bd973) main_cam5_pane_t

0xfd9b,	// (0x000adcd8) popup_scut_keymap_window_ParamLimits

0xfd9b,	// (0x000adcd8) popup_scut_keymap_window

0x6819,	// (0x000b4756) aid_size_cell_brow_shortcut

0xab25,	// (0x000b8a62) bg_popup_window_pane_cp010

0x6825,	// (0x000b4762) grid_scut_pane

0x6831,	// (0x000b476e) cell_scut_pane_ParamLimits

0x6831,	// (0x000b476e) cell_scut_pane

0x684a,	// (0x000b4787) cell_scut_pane_g1

0xdc57,	// (0x000bbb94) cell_scut_pane_t1

0xdc66,	// (0x000bbba3) cell_scut_pane_t2

0x6853,	// (0x000b4790) cell_scut_pane_t3

0x0002,

0xfa51,	// (0x000bd98e) cell_scut_pane_t

0x43fb,	// (0x000b2338) main_mup3_pane_g8_ParamLimits

0x43fb,	// (0x000b2338) main_mup3_pane_g8

0x5964,	// (0x000b38a1) area_vitu2_query_pane_ParamLimits

0x5964,	// (0x000b38a1) area_vitu2_query_pane

0x6586,	// (0x000b44c3) input_focus_pane_cp08

0xdc75,	// (0x000bbbb2) area_vitu2_query_pane_g1

0x6861,	// (0x000b479e) area_vitu2_query_pane_g2

0x0001,

0xfa58,	// (0x000bd995) area_vitu2_query_pane_g

0x6874,	// (0x000b47b1) area_vitu2_query_pane_t1_ParamLimits

0x6874,	// (0x000b47b1) area_vitu2_query_pane_t1

0x6888,	// (0x000b47c5) area_vitu2_query_pane_t2_ParamLimits

0x6888,	// (0x000b47c5) area_vitu2_query_pane_t2

0x689c,	// (0x000b47d9) area_vitu2_query_pane_t3_ParamLimits

0x689c,	// (0x000b47d9) area_vitu2_query_pane_t3

0xa5d2,	// (0x000b850f) area_vitu2_query_pane_t4_ParamLimits

0xa5d2,	// (0x000b850f) area_vitu2_query_pane_t4

0xa5fa,	// (0x000b8537) area_vitu2_query_pane_t5_ParamLimits

0xa5fa,	// (0x000b8537) area_vitu2_query_pane_t5

0xa622,	// (0x000b855f) area_vitu2_query_pane_t6_ParamLimits

0xa622,	// (0x000b855f) area_vitu2_query_pane_t6

0x0006,

0xfa5d,	// (0x000bd99a) area_vitu2_query_pane_t_ParamLimits

0xfa5d,	// (0x000bd99a) area_vitu2_query_pane_t

0x68c4,	// (0x000b4801) bg_button_pane_cp018

0x68d2,	// (0x000b480f) bg_button_pane_cp021

0x68de,	// (0x000b481b) bg_button_pane_cp022

0x68ef,	// (0x000b482c) input_focus_pane_cp09

0xb3cc,	// (0x000b9309) aid_size_touch_mv_arrow_left

0xb3f7,	// (0x000b9334) aid_size_touch_mv_arrow_right

0x5fea,	// (0x000b3f27) main_cset_slider_pane_g16_ParamLimits

0x5fea,	// (0x000b3f27) main_cset_slider_pane_g16

0x5ff8,	// (0x000b3f35) main_cset_slider_pane_g17_ParamLimits

0x5ff8,	// (0x000b3f35) main_cset_slider_pane_g17

0x6806,	// (0x000b4743) cell_cam4_burst_pane_g1_ParamLimits

0x95ed,	// (0x000b752a) compa_mode_pane

0x622d,	// (0x000b416a) popup_vtel_slider_window_g3_ParamLimits

0x622d,	// (0x000b416a) popup_vtel_slider_window_g3

0x6244,	// (0x000b4181) popup_vtel_slider_window_g4_ParamLimits

0x6244,	// (0x000b4181) popup_vtel_slider_window_g4

0x625b,	// (0x000b4198) popup_vtel_slider_window_t1_ParamLimits

0x625b,	// (0x000b4198) popup_vtel_slider_window_t1

0xf09d,	// (0x000bcfda) main_cl_pane

0xa05f,	// (0x000b7f9c) popup_imed_adjust2_window_ParamLimits

0xc9da,	// (0x000ba917) bg_tb_trans_pane_cp05_ParamLimits

0xd357,	// (0x000bb294) popup_imed_adjust2_window_g1_ParamLimits

0xd366,	// (0x000bb2a3) popup_imed_adjust2_window_g2_ParamLimits

0xd366,	// (0x000bb2a3) popup_imed_adjust2_window_g2

0xd372,	// (0x000bb2af) popup_imed_adjust2_window_g3_ParamLimits

0xd372,	// (0x000bb2af) popup_imed_adjust2_window_g3

0x0002,

0xf7c4,	// (0x000bd701) popup_imed_adjust2_window_g_ParamLimits

0xf7c4,	// (0x000bd701) popup_imed_adjust2_window_g

0xd37e,	// (0x000bb2bb) popup_imed_adjust2_window_t1_ParamLimits

0xd396,	// (0x000bb2d3) slider_imed_adjust_pane_ParamLimits

0xd3aa,	// (0x000bb2e7) slider_imed_adjust_pane_g1_ParamLimits

0xd3ba,	// (0x000bb2f7) slider_imed_adjust_pane_g2_ParamLimits

0xd3ca,	// (0x000bb307) slider_imed_adjust_pane_g3_ParamLimits

0xd3db,	// (0x000bb318) slider_imed_adjust_pane_g4_ParamLimits

0xf7cb,	// (0x000bd708) slider_imed_adjust_pane_g_ParamLimits

0x56e3,	// (0x000b3620) aid_touch_area_cam4_ParamLimits

0x56e3,	// (0x000b3620) aid_touch_area_cam4

0xa43e,	// (0x000b837b) battery_pane_cp01

0x57b6,	// (0x000b36f3) main_camera4_pane_g6_ParamLimits

0x57b6,	// (0x000b36f3) main_camera4_pane_g6

0x57e0,	// (0x000b371d) main_camera4_pane_t2_ParamLimits

0x57e0,	// (0x000b371d) main_camera4_pane_t2

0x0001,

0xf8d2,	// (0x000bd80f) main_camera4_pane_t_ParamLimits

0xf8d2,	// (0x000bd80f) main_camera4_pane_t

0x5815,	// (0x000b3752) aid_touch_area_vid4_ParamLimits

0x5815,	// (0x000b3752) aid_touch_area_vid4

0x5869,	// (0x000b37a6) main_video4_pane_g5_ParamLimits

0x5869,	// (0x000b37a6) main_video4_pane_g5

0x588e,	// (0x000b37cb) vid4_progress_pane_ParamLimits

0x588e,	// (0x000b37cb) vid4_progress_pane

0xd963,	// (0x000bb8a0) main_cset_slider_pane_g18_ParamLimits

0xd963,	// (0x000bb8a0) main_cset_slider_pane_g18

0xdb33,	// (0x000bba70) cell_cam4_burst_pane_g2_ParamLimits

0xdb33,	// (0x000bba70) cell_cam4_burst_pane_g2

0x0001,

0xfa31,	// (0x000bd96e) cell_cam4_burst_pane_g_ParamLimits

0xfa31,	// (0x000bd96e) cell_cam4_burst_pane_g

0x9d8f,	// (0x000b7ccc) bg_cl_pane_ParamLimits

0x9d8f,	// (0x000b7ccc) bg_cl_pane

0x6900,	// (0x000b483d) cl_header_pane_ParamLimits

0x6900,	// (0x000b483d) cl_header_pane

0x6914,	// (0x000b4851) cl_listscroll_pane_ParamLimits

0x6914,	// (0x000b4851) cl_listscroll_pane

0xdc81,	// (0x000bbbbe) bg_cl_pane_g1

0xdc89,	// (0x000bbbc6) bg_cl_pane_g2

0xdc91,	// (0x000bbbce) bg_cl_pane_g3

0xdc99,	// (0x000bbbd6) bg_cl_pane_g4

0xdca1,	// (0x000bbbde) bg_cl_pane_g5

0xdca9,	// (0x000bbbe6) bg_cl_pane_g6

0xdcb1,	// (0x000bbbee) bg_cl_pane_g7

0xdcb9,	// (0x000bbbf6) bg_cl_pane_g8

0xdcc1,	// (0x000bbbfe) bg_cl_pane_g9

0x0008,

0xfa6c,	// (0x000bd9a9) bg_cl_pane_g

0x6924,	// (0x000b4861) aid_height_cl_leading_ParamLimits

0x6924,	// (0x000b4861) aid_height_cl_leading

0x6930,	// (0x000b486d) aid_height_cl_text_ParamLimits

0x6930,	// (0x000b486d) aid_height_cl_text

0xbe7c,	// (0x000b9db9) bg_cl_header_pane_ParamLimits

0xbe7c,	// (0x000b9db9) bg_cl_header_pane

0x694f,	// (0x000b488c) cl_header_pane_g1_ParamLimits

0x694f,	// (0x000b488c) cl_header_pane_g1

0x6965,	// (0x000b48a2) cl_header_pane_t1_ParamLimits

0x6965,	// (0x000b48a2) cl_header_pane_t1

0xdcc9,	// (0x000bbc06) cl_list_pane

0xd936,	// (0x000bb873) hc_scroll_pane_cp01

0xad77,	// (0x000b8cb4) bg_cl_header_pane_g1

0xd818,	// (0x000bb755) bg_cl_header_pane_g2

0xad97,	// (0x000b8cd4) bg_cl_header_pane_g3

0xd828,	// (0x000bb765) bg_cl_header_pane_g4

0xd820,	// (0x000bb75d) bg_cl_header_pane_g5

0xda42,	// (0x000bb97f) bg_cl_header_pane_g6

0xd840,	// (0x000bb77d) bg_cl_header_pane_g7

0xd848,	// (0x000bb785) bg_cl_header_pane_g8

0xd838,	// (0x000bb775) bg_cl_header_pane_g9

0x0008,

0xfa7f,	// (0x000bd9bc) bg_cl_header_pane_g

0x697e,	// (0x000b48bb) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x697e,	// (0x000b48bb) hc_cl_list_double_graphic_heading_pane

0x6991,	// (0x000b48ce) hc_cl_list_single_graphic_pane_ParamLimits

0x6991,	// (0x000b48ce) hc_cl_list_single_graphic_pane

0x69a9,	// (0x000b48e6) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x69a9,	// (0x000b48e6) hc_cl_list_single_graphic_pane_g1

0x69b5,	// (0x000b48f2) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x69b5,	// (0x000b48f2) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa92,	// (0x000bd9cf) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa92,	// (0x000bd9cf) hc_cl_list_single_graphic_pane_g

0x69c9,	// (0x000b4906) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x69c9,	// (0x000b4906) hc_cl_list_single_graphic_pane_t1

0x69a9,	// (0x000b48e6) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x69a9,	// (0x000b48e6) hc_cl_list_double_graphic_heading_pane_g1

0x69de,	// (0x000b491b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x69de,	// (0x000b491b) hc_cl_list_double_graphic_heading_pane_g2

0x69f2,	// (0x000b492f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x69f2,	// (0x000b492f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa97,	// (0x000bd9d4) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa97,	// (0x000bd9d4) hc_cl_list_double_graphic_heading_pane_g

0x6a06,	// (0x000b4943) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6a06,	// (0x000b4943) hc_cl_list_double_graphic_heading_pane_t1

0x6a1b,	// (0x000b4958) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6a1b,	// (0x000b4958) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa9e,	// (0x000bd9db) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa9e,	// (0x000bd9db) hc_cl_list_double_graphic_heading_pane_t

0xa676,	// (0x000b85b3) vid4_progress_pane_g1

0xa686,	// (0x000b85c3) vid4_progress_pane_g2

0x6a30,	// (0x000b496d) vid4_progress_pane_g3

0xa483,	// (0x000b83c0) vid4_progress_pane_g4

0x0004,

0xfaa3,	// (0x000bd9e0) vid4_progress_pane_g

0x6a42,	// (0x000b497f) vid4_progress_pane_t1

0xa696,	// (0x000b85d3) vid4_progress_pane_t2

0x0002,

0xfaae,	// (0x000bd9eb) vid4_progress_pane_t

0x6a5a,	// (0x000b4997) wait_bar_pane_cp07

0xcc07,	// (0x000bab44) blid_firmament_pane_ParamLimits

0xcc4a,	// (0x000bab87) popup_blid_sat_info2_window_g1

0xcc6e,	// (0x000babab) popup_blid_sat_info2_window_t3

0xcc7c,	// (0x000babb9) popup_blid_sat_info2_window_t4

0xcc8a,	// (0x000babc7) popup_blid_sat_info2_window_t5

0xcc98,	// (0x000babd5) popup_blid_sat_info2_window_t6

0xcca8,	// (0x000babe5) popup_blid_sat_info2_window_t7

0xccb6,	// (0x000babf3) popup_blid_sat_info2_window_t8

0xccc4,	// (0x000bac01) popup_blid_sat_info2_window_t9

0xccd2,	// (0x000bac0f) popup_blid_sat_info2_window_t10

0xcd9a,	// (0x000bacd7) aid_firma_cardinal_ParamLimits

0xcdae,	// (0x000baceb) blid_firmament_pane_t1_ParamLimits

0xcdc5,	// (0x000bad02) blid_firmament_pane_t2_ParamLimits

0xcddc,	// (0x000bad19) blid_firmament_pane_t3_ParamLimits

0xcdf3,	// (0x000bad30) blid_firmament_pane_t4_ParamLimits

0xf6b8,	// (0x000bd5f5) blid_firmament_pane_t_ParamLimits

0xce0a,	// (0x000bad47) blid_sat_info_pane_ParamLimits

0x95f7,	// (0x000b7534) main_cam_set_pane_ParamLimits

0x4cd3,	// (0x000b2c10) aid_size_cell_colour_35_ParamLimits

0x4cf3,	// (0x000b2c30) aid_size_cell_colour_112_ParamLimits

0x4d13,	// (0x000b2c50) aid_size_cell_effect_ParamLimits

0xc9da,	// (0x000ba917) bg_tb_trans_pane_cp02_ParamLimits

0xafdf,	// (0x000b8f1c) heading_imed_pane_ParamLimits

0x4d33,	// (0x000b2c70) listscroll_imed_pane_ParamLimits

0xc002,	// (0x000b9f3f) popup_call2_audio_first_window_g5_ParamLimits

0xc002,	// (0x000b9f3f) popup_call2_audio_first_window_g5

0x52f0,	// (0x000b322d) aid_size_touch_image3_arrow_left_ParamLimits

0x52f0,	// (0x000b322d) aid_size_touch_image3_arrow_left

0x531c,	// (0x000b3259) aid_size_touch_image3_arrow_right_ParamLimits

0x531c,	// (0x000b3259) aid_size_touch_image3_arrow_right

0xa6ab,	// (0x000b85e8) vid4_progress_pane_t3

0x504c,	// (0x000b2f89) main_hwr_training_symbol_option_pane_ParamLimits

0x504c,	// (0x000b2f89) main_hwr_training_symbol_option_pane

0xd650,	// (0x000bb58d) popup_hwr_training_preview_window_ParamLimits

0xd650,	// (0x000bb58d) popup_hwr_training_preview_window

0x506c,	// (0x000b2fa9) hwr_training_navi_pane_g5_ParamLimits

0x506c,	// (0x000b2fa9) hwr_training_navi_pane_g5

0xd806,	// (0x000bb743) popup_char_count_window

0x95f7,	// (0x000b7534) bg_popup_sub_pane_cp20_ParamLimits

0x6381,	// (0x000b42be) list_vitu2_match_list_pane_ParamLimits

0x6390,	// (0x000b42cd) vitu2_page_scroll_pane_ParamLimits

0x6390,	// (0x000b42cd) vitu2_page_scroll_pane

0xdcd2,	// (0x000bbc0f) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdcd2,	// (0x000bbc0f) list_single_hwr_training_symbol_option_pane

0xdce5,	// (0x000bbc22) list_single_hwr_training_symbol_option_pane_g1

0xdced,	// (0x000bbc2a) list_single_hwr_training_symbol_option_pane_t1

0xdcfb,	// (0x000bbc38) bg_button_pane_cp023

0xdd04,	// (0x000bbc41) bg_button_pane_cp024

0x6aa5,	// (0x000b49e2) vitu2_page_scroll_pane_g1

0x6aad,	// (0x000b49ea) vitu2_page_scroll_pane_g2

0x0001,

0xfab5,	// (0x000bd9f2) vitu2_page_scroll_pane_g

0x6ab7,	// (0x000b49f4) vitu2_page_scroll_pane_t1

0xd2d5,	// (0x000bb212) popup_char_count_window_g1

0xdd37,	// (0x000bbc74) popup_char_count_window_g2

0xd2de,	// (0x000bb21b) popup_char_count_window_g3

0x0002,

0xfaba,	// (0x000bd9f7) popup_char_count_window_g

0xdd40,	// (0x000bbc7d) popup_char_count_window_t1

0xf09d,	// (0x000bcfda) main_vded2_pane

0xd343,	// (0x000bb280) aid_size_cell_imed_line

0xd34d,	// (0x000bb28a) grid_imed_line_width_pane

0xa506,	// (0x000b8443) vid4_indicators_pane_g4

0xdd4e,	// (0x000bbc8b) cell_imed_line_width_pane_ParamLimits

0xdd4e,	// (0x000bbc8b) cell_imed_line_width_pane

0xdd64,	// (0x000bbca1) cell_imed_line_width_pane_g1

0xcbe1,	// (0x000bab1e) cell_imed_line_width_pane_g2

0x0001,

0xfac1,	// (0x000bd9fe) cell_imed_line_width_pane_g

0x6ac6,	// (0x000b4a03) main_vded2_pane_g1_ParamLimits

0x6ac6,	// (0x000b4a03) main_vded2_pane_g1

0x6ae1,	// (0x000b4a1e) main_vded2_pane_g2_ParamLimits

0x6ae1,	// (0x000b4a1e) main_vded2_pane_g2

0x0001,

0xfac6,	// (0x000bda03) main_vded2_pane_g_ParamLimits

0xfac6,	// (0x000bda03) main_vded2_pane_g

0x6af3,	// (0x000b4a30) vded2_slider_pane_ParamLimits

0x6af3,	// (0x000b4a30) vded2_slider_pane

0x6b03,	// (0x000b4a40) aid_size_touch_vded2_end

0x6b0d,	// (0x000b4a4a) aid_size_touch_vded2_playhead

0xdd6d,	// (0x000bbcaa) aid_size_touch_vded2_start

0xdd75,	// (0x000bbcb2) vded2_slider_bg_pane

0xdd7e,	// (0x000bbcbb) vded2_slider_pane_g1

0xdd87,	// (0x000bbcc4) vded2_slider_pane_g2

0x6b17,	// (0x000b4a54) vded2_slider_pane_g3

0x0002,

0xfacb,	// (0x000bda08) vded2_slider_pane_g

0xd2e7,	// (0x000bb224) vded2_slider_bg_pane_g1

0xd2f0,	// (0x000bb22d) vded2_slider_bg_pane_g2

0xd2f9,	// (0x000bb236) vded2_slider_bg_pane_g3

0x0002,

0xfad2,	// (0x000bda0f) vded2_slider_bg_pane_g

0x28dd,	// (0x000b081a) aid_postcard_touch_down_pane_ParamLimits

0x28dd,	// (0x000b081a) aid_postcard_touch_down_pane

0x28f5,	// (0x000b0832) aid_postcard_touch_up_pane_ParamLimits

0x28f5,	// (0x000b0832) aid_postcard_touch_up_pane

0xf09d,	// (0x000bcfda) main_blid2_pane

0xa041,	// (0x000b7f7e) popup_blid2_search_window

0x95ed,	// (0x000b752a) blid2_gps_pane

0x95ed,	// (0x000b752a) blid2_navig_pane

0x95ed,	// (0x000b752a) blid2_search_pane

0x95ed,	// (0x000b752a) blid2_tripm_pane

0x6b22,	// (0x000b4a5f) blid2_search_pane_g1_ParamLimits

0x6b22,	// (0x000b4a5f) blid2_search_pane_g1

0x6b35,	// (0x000b4a72) blid2_search_pane_t1_ParamLimits

0x6b35,	// (0x000b4a72) blid2_search_pane_t1

0x6b47,	// (0x000b4a84) aid_size_cell_blid2_gps_ParamLimits

0x6b47,	// (0x000b4a84) aid_size_cell_blid2_gps

0x6b5f,	// (0x000b4a9c) blid2_gps_pane_g1_ParamLimits

0x6b5f,	// (0x000b4a9c) blid2_gps_pane_g1

0x6b73,	// (0x000b4ab0) grid_blid2_satellite_pane_ParamLimits

0x6b73,	// (0x000b4ab0) grid_blid2_satellite_pane

0x6b8b,	// (0x000b4ac8) blid2_navig_pane_g1_ParamLimits

0x6b8b,	// (0x000b4ac8) blid2_navig_pane_g1

0x6b97,	// (0x000b4ad4) blid2_navig_pane_t1_ParamLimits

0x6b97,	// (0x000b4ad4) blid2_navig_pane_t1

0x6bb2,	// (0x000b4aef) blid2_navig_pane_t2_ParamLimits

0x6bb2,	// (0x000b4aef) blid2_navig_pane_t2

0x0001,

0xfad9,	// (0x000bda16) blid2_navig_pane_t_ParamLimits

0xfad9,	// (0x000bda16) blid2_navig_pane_t

0x6bcd,	// (0x000b4b0a) blid2_navig_ring_pane_ParamLimits

0x6bcd,	// (0x000b4b0a) blid2_navig_ring_pane

0x6be8,	// (0x000b4b25) blid2_speed_pane_ParamLimits

0x6be8,	// (0x000b4b25) blid2_speed_pane

0x6bf4,	// (0x000b4b31) blid2_tripm_pane_g1_ParamLimits

0x6bf4,	// (0x000b4b31) blid2_tripm_pane_g1

0x6c0f,	// (0x000b4b4c) blid2_tripm_pane_g2_ParamLimits

0x6c0f,	// (0x000b4b4c) blid2_tripm_pane_g2

0x6c23,	// (0x000b4b60) blid2_tripm_pane_g3_ParamLimits

0x6c23,	// (0x000b4b60) blid2_tripm_pane_g3

0x6c37,	// (0x000b4b74) blid2_tripm_pane_g4_ParamLimits

0x6c37,	// (0x000b4b74) blid2_tripm_pane_g4

0x6c4b,	// (0x000b4b88) blid2_tripm_pane_g5_ParamLimits

0x6c4b,	// (0x000b4b88) blid2_tripm_pane_g5

0x0005,

0xfade,	// (0x000bda1b) blid2_tripm_pane_g_ParamLimits

0xfade,	// (0x000bda1b) blid2_tripm_pane_g

0x6c71,	// (0x000b4bae) blid2_tripm_pane_t1_ParamLimits

0x6c71,	// (0x000b4bae) blid2_tripm_pane_t1

0x6c8a,	// (0x000b4bc7) blid2_tripm_pane_t2_ParamLimits

0x6c8a,	// (0x000b4bc7) blid2_tripm_pane_t2

0x6ca3,	// (0x000b4be0) blid2_tripm_pane_t3_ParamLimits

0x6ca3,	// (0x000b4be0) blid2_tripm_pane_t3

0x0003,

0xfaeb,	// (0x000bda28) blid2_tripm_pane_t_ParamLimits

0xfaeb,	// (0x000bda28) blid2_tripm_pane_t

0x6cea,	// (0x000b4c27) cell_blid2_satellite_pane_ParamLimits

0x6cea,	// (0x000b4c27) cell_blid2_satellite_pane

0x6d06,	// (0x000b4c43) cell_blid2_satellite_pane_g1

0xdd8f,	// (0x000bbccc) cell_blid2_satellite_pane_t1

0xce1a,	// (0x000bad57) blid2_speed_pane_g1

0xdd9d,	// (0x000bbcda) blid2_speed_pane_t1

0xddab,	// (0x000bbce8) blid2_speed_pane_t2

0x0001,

0xfaf4,	// (0x000bda31) blid2_speed_pane_t

0xce1a,	// (0x000bad57) blid2_navig_ring_pane_g1

0x6d0f,	// (0x000b4c4c) blid2_navig_ring_pane_g2

0x6d17,	// (0x000b4c54) blid2_navig_ring_pane_g3

0x6d1f,	// (0x000b4c5c) blid2_navig_ring_pane_g4

0x6d27,	// (0x000b4c64) blid2_navig_ring_pane_g5

0x0004,

0xfaf9,	// (0x000bda36) blid2_navig_ring_pane_g

0x95ed,	// (0x000b752a) bg_popup_window_pane_cp011

0xddb9,	// (0x000bbcf6) popup_blid2_search_window_g1

0xddc1,	// (0x000bbcfe) popup_blid2_search_window_t1

0xddcf,	// (0x000bbd0c) popup_blid2_search_window_t2

0x0001,

0xfb04,	// (0x000bda41) popup_blid2_search_window_t

0xac86,	// (0x000b8bc3) main_browser_pane_g1

0x9d8f,	// (0x000b7ccc) main_browser_pane_ParamLimits

0x95f7,	// (0x000b7534) bg_button_pane_cp011_ParamLimits

0x5bac,	// (0x000b3ae9) cell_vitu2_function_pane_g1_ParamLimits

0xc9da,	// (0x000ba917) bg_popup_sub_pane_cp22_ParamLimits

0x6586,	// (0x000b44c3) input_focus_pane_cp08_ParamLimits

0x659d,	// (0x000b44da) popup_vitu2_query_button_pane_ParamLimits

0x659d,	// (0x000b44da) popup_vitu2_query_button_pane

0x65ae,	// (0x000b44eb) popup_vitu2_query_input_button_pane

0xda7d,	// (0x000bb9ba) popup_vitu2_query_window_g1_ParamLimits

0x65b8,	// (0x000b44f5) popup_vitu2_query_window_g2_ParamLimits

0xfa05,	// (0x000bd942) popup_vitu2_query_window_g_ParamLimits

0x95ed,	// (0x000b752a) bg_button_pane_cp026

0x6d2f,	// (0x000b4c6c) popup_vitu2_query_input_button_pane_g1

0x95ed,	// (0x000b752a) bg_button_pane_cp025

0xdddd,	// (0x000bbd1a) popup_vitu2_query_button_pane_t1

0x3feb,	// (0x000b1f28) main_mp3_pane_t6

0x3ff9,	// (0x000b1f36) popup_slider_window_cp01

0xa46a,	// (0x000b83a7) cam4_battery_pane

0xa4bf,	// (0x000b83fc) cam4_battery_pane_cp02

0xa66e,	// (0x000b85ab) cam4_battery_pane_cp01

0xa66e,	// (0x000b85ab) cam4_battery_pane_cp03

0xd75b,	// (0x000bb698) cam4_battery_pane_g1

0xce1a,	// (0x000bad57) cam4_battery_pane_g2

0x0001,

0xfb09,	// (0x000bda46) cam4_battery_pane_g

0xcce0,	// (0x000bac1d) popup_blid_sat_info2_window_t11

0xb3cc,	// (0x000b9309) aid_size_touch_mv_arrow_left_ParamLimits

0xb3f7,	// (0x000b9334) aid_size_touch_mv_arrow_right_ParamLimits

0xb455,	// (0x000b9392) navi_pane_g1_ParamLimits

0xb461,	// (0x000b939e) navi_pane_g2_ParamLimits

0xb48f,	// (0x000b93cc) navi_pane_g3_ParamLimits

0xf3ca,	// (0x000bd307) navi_pane_g_ParamLimits

0x2312,	// (0x000b024f) navi_pane_mv_t1_ParamLimits

0x4d3f,	// (0x000b2c7c) grid_imed_effect_pane_ParamLimits

0x0d9c,	// (0x000aecd9) aid_placing_vt_slider_lsc

0xabd1,	// (0x000b8b0e) aid_placing_vt_slider_prt

0xbe7c,	// (0x000b9db9) bg_tb_trans_pane_cp01_ParamLimits

0xcf61,	// (0x000bae9e) popup_image_details_window_g1_ParamLimits

0xcf74,	// (0x000baeb1) popup_image_details_window_g2_ParamLimits

0xcf89,	// (0x000baec6) popup_image_details_window_g3_ParamLimits

0xcf89,	// (0x000baec6) popup_image_details_window_g3

0xf6fd,	// (0x000bd63a) popup_image_details_window_g_ParamLimits

0xcf9d,	// (0x000baeda) popup_image_details_window_t1_ParamLimits

0xcfaf,	// (0x000baeec) popup_image_details_window_t2_ParamLimits

0xcfc8,	// (0x000baf05) popup_image_details_window_t3_ParamLimits

0xcfdc,	// (0x000baf19) popup_image_details_window_t4_ParamLimits

0xcff7,	// (0x000baf34) popup_image_details_window_t5_ParamLimits

0xf704,	// (0x000bd641) popup_image_details_window_t_ParamLimits

0x693c,	// (0x000b4879) cl_header_name_pane_ParamLimits

0x693c,	// (0x000b4879) cl_header_name_pane

0x6d37,	// (0x000b4c74) cl_header_name_pane_t1_ParamLimits

0x6d37,	// (0x000b4c74) cl_header_name_pane_t1

0x6d58,	// (0x000b4c95) cl_header_name_pane_t2_ParamLimits

0x6d58,	// (0x000b4c95) cl_header_name_pane_t2

0x6d9a,	// (0x000b4cd7) cl_header_name_pane_t3_ParamLimits

0x6d9a,	// (0x000b4cd7) cl_header_name_pane_t3

0x0002,

0xfb0e,	// (0x000bda4b) cl_header_name_pane_t_ParamLimits

0xfb0e,	// (0x000bda4b) cl_header_name_pane_t

0xb51e,	// (0x000b945b) navi_pane_mv_g2_ParamLimits

0xd7e0,	// (0x000bb71d) field_vitu2_entry_pane_g1_ParamLimits

0xd7ec,	// (0x000bb729) field_vitu2_entry_pane_g2_ParamLimits

0xd7f8,	// (0x000bb735) field_vitu2_entry_pane_g3_ParamLimits

0xd7f8,	// (0x000bb735) field_vitu2_entry_pane_g3

0xf904,	// (0x000bd841) field_vitu2_entry_pane_g_ParamLimits

0xa558,	// (0x000b8495) cell_vitu2_itu_pane_g1_ParamLimits

0x5b40,	// (0x000b3a7d) cell_vitu2_itu_pane_g2_ParamLimits

0x5b40,	// (0x000b3a7d) cell_vitu2_itu_pane_g2

0x0001,

0xf910,	// (0x000bd84d) cell_vitu2_itu_pane_g_ParamLimits

0xf910,	// (0x000bd84d) cell_vitu2_itu_pane_g

0x95f7,	// (0x000b7534) bg_vkb2_func_pane_cp05_ParamLimits

0x95f7,	// (0x000b7534) bg_vkb2_func_pane_cp05

0x95f7,	// (0x000b7534) bg_vkb2_func_pane_cp03

0x95f7,	// (0x000b7534) bg_vkb2_func_pane_cp04

0x95f7,	// (0x000b7534) bg_vkb2_func_pane_cp10_ParamLimits

0x95f7,	// (0x000b7534) bg_vkb2_func_pane_cp10

0x68de,	// (0x000b481b) bg_vkb2_func_pane_cp08

0x68c4,	// (0x000b4801) bg_vkb2_func_pane_cp06

0x68d2,	// (0x000b480f) bg_vkb2_func_pane_cp07

0xdd0d,	// (0x000bbc4a) bg_vkb2_func_pane_cp11_ParamLimits

0xdd0d,	// (0x000bbc4a) bg_vkb2_func_pane_cp11

0xdd22,	// (0x000bbc5f) bg_vkb2_func_pane_cp12_ParamLimits

0xdd22,	// (0x000bbc5f) bg_vkb2_func_pane_cp12

0x95ed,	// (0x000b752a) bg_vkb2_func_pane_cp09

0xd818,	// (0x000bb755) bg_vkb2_func_pane_g1

0xad97,	// (0x000b8cd4) bg_vkb2_func_pane_g2

0xd820,	// (0x000bb75d) bg_vkb2_func_pane_g3

0xd828,	// (0x000bb765) bg_vkb2_func_pane_g4

0xda42,	// (0x000bb97f) bg_vkb2_func_pane_g5

0xd840,	// (0x000bb77d) bg_vkb2_func_pane_g6

0xd848,	// (0x000bb785) bg_vkb2_func_pane_g7

0xd838,	// (0x000bb775) bg_vkb2_func_pane_g8

0xad77,	// (0x000b8cb4) bg_vkb2_func_pane_g9

0x0008,

0xfb15,	// (0x000bda52) bg_vkb2_func_pane_g

0x6c5f,	// (0x000b4b9c) blid2_tripm_pane_g6_ParamLimits

0x6c5f,	// (0x000b4b9c) blid2_tripm_pane_g6

0xd70e,	// (0x000bb64b) mp4_progress_pane_g1

0x6cd6,	// (0x000b4c13) blid2_tripm_values_pane_ParamLimits

0x6cd6,	// (0x000b4c13) blid2_tripm_values_pane

0x6dcb,	// (0x000b4d08) blid2_tripm_values_pane_t1

0x6dd9,	// (0x000b4d16) blid2_tripm_values_pane_t2

0x6de7,	// (0x000b4d24) blid2_tripm_values_pane_t3

0x6df5,	// (0x000b4d32) blid2_tripm_values_pane_t4

0x6e03,	// (0x000b4d40) blid2_tripm_values_pane_t5

0x6e11,	// (0x000b4d4e) blid2_tripm_values_pane_t6

0x6e1f,	// (0x000b4d5c) blid2_tripm_values_pane_t7

0x6e2d,	// (0x000b4d6a) blid2_tripm_values_pane_t8

0x6e3b,	// (0x000b4d78) blid2_tripm_values_pane_t9

0x0008,

0xfb28,	// (0x000bda65) blid2_tripm_values_pane_t

0x0dd9,	// (0x000aed16) call_video_pane_t1_ParamLimits

0x0df3,	// (0x000aed30) call_video_pane_t2_ParamLimits

0xf253,	// (0x000bd190) call_video_pane_t_ParamLimits

0x285b,	// (0x000b0798) msg_header_pane_g1_ParamLimits

0xb70a,	// (0x000b9647) msg_header_pane_g2_ParamLimits

0xb70a,	// (0x000b9647) msg_header_pane_g2

0x0001,

0xf46d,	// (0x000bd3aa) msg_header_pane_g_ParamLimits

0xf46d,	// (0x000bd3aa) msg_header_pane_g

0x9d8f,	// (0x000b7ccc) main_clock2_pane_ParamLimits

0x4a3c,	// (0x000b2979) grid_clock2_toolbar_pane_ParamLimits

0x4a3c,	// (0x000b2979) grid_clock2_toolbar_pane

0x4a3c,	// (0x000b2979) listscroll_clock2_pane_ParamLimits

0x4a3c,	// (0x000b2979) listscroll_clock2_pane

0x4b1b,	// (0x000b2a58) main_clock2_pane_t3_ParamLimits

0x4b1b,	// (0x000b2a58) main_clock2_pane_t3

0x4b3e,	// (0x000b2a7b) main_clock2_pane_t4_ParamLimits

0x4b3e,	// (0x000b2a7b) main_clock2_pane_t4

0xddeb,	// (0x000bbd28) cell_clock2_toolbar_pane

0xddf3,	// (0x000bbd30) cell_clock2_toolbar_pane_cp01

0xddf3,	// (0x000bbd30) cell_clock2_toolbar_pane_cp02

0xddfb,	// (0x000bbd38) cell_clock2_toolbar_pane_cp03

0xde03,	// (0x000bbd40) list_clock2_pane

0xb351,	// (0x000b928e) scroll_pane_cp10

0xde0b,	// (0x000bbd48) list_single_clock2_pane_ParamLimits

0xde0b,	// (0x000bbd48) list_single_clock2_pane

0xab25,	// (0x000b8a62) list_highlight_pane_cp08

0xde18,	// (0x000bbd55) list_single_clock2_pane_t1

0xde26,	// (0x000bbd63) list_single_clock2_pane_t2

0x0001,

0xfb3b,	// (0x000bda78) list_single_clock2_pane_t

0x95ed,	// (0x000b752a) bg_button_pane_cp10

0xde34,	// (0x000bbd71) cell_clock2_toolbar_pane_g1

0x2869,	// (0x000b07a6) aid_main_viewer_pane_g1_ParamLimits

0x2869,	// (0x000b07a6) aid_main_viewer_pane_g1

0x2877,	// (0x000b07b4) aid_main_viewer_pane_g2_ParamLimits

0x2877,	// (0x000b07b4) aid_main_viewer_pane_g2

0x2885,	// (0x000b07c2) aid_main_viewer_pane_g3_ParamLimits

0x2885,	// (0x000b07c2) aid_main_viewer_pane_g3

0x2894,	// (0x000b07d1) aid_main_viewer_pane_g4_ParamLimits

0x2894,	// (0x000b07d1) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x000bd3bb) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x000bd3bb) aid_main_viewer_pane_g

0x31ef,	// (0x000b112c) main_calc_pane_ParamLimits

0x3213,	// (0x000b1150) main_dialer2_pane_ParamLimits

0xf09d,	// (0x000bcfda) main_cam6_pane

0xf09d,	// (0x000bcfda) main_vid6_pane

0x4a48,	// (0x000b2985) listscroll_gen_pane_cp06_ParamLimits

0x4a48,	// (0x000b2985) listscroll_gen_pane_cp06

0x4b61,	// (0x000b2a9e) main_clock2_pane_t5_ParamLimits

0x4b61,	// (0x000b2a9e) main_clock2_pane_t5

0x4bbf,	// (0x000b2afc) aid_call2_pane_cp10_ParamLimits

0x4bd1,	// (0x000b2b0e) aid_call_pane_cp10_ParamLimits

0xb3c0,	// (0x000b92fd) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb3c0,	// (0x000b92fd) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4be3,	// (0x000b2b20) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4be3,	// (0x000b2b20) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb3c0,	// (0x000b92fd) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7b9,	// (0x000bd6f6) popup_clock_analogue_window_cp10_g_ParamLimits

0x4bf9,	// (0x000b2b36) popup_clock_analogue_window_cp10_t1_ParamLimits

0x529d,	// (0x000b31da) cell_dialer2_keypad_pane_g2_ParamLimits

0x529d,	// (0x000b31da) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a3,	// (0x000bd7e0) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a3,	// (0x000bd7e0) cell_dialer2_keypad_pane_g

0x52b9,	// (0x000b31f6) cell_dialer2_keypad_pane_t1

0x5edb,	// (0x000b3e18) main_cset_text2_pane_ParamLimits

0x5edb,	// (0x000b3e18) main_cset_text2_pane

0xdc75,	// (0x000bbbb2) area_vitu2_query_pane_g1_ParamLimits

0x6861,	// (0x000b479e) area_vitu2_query_pane_g2_ParamLimits

0xfa58,	// (0x000bd995) area_vitu2_query_pane_g_ParamLimits

0xa64a,	// (0x000b8587) area_vitu2_query_pane_t7_ParamLimits

0xa64a,	// (0x000b8587) area_vitu2_query_pane_t7

0x68c4,	// (0x000b4801) bg_button_pane_cp018_ParamLimits

0x68d2,	// (0x000b480f) bg_button_pane_cp021_ParamLimits

0x68de,	// (0x000b481b) bg_button_pane_cp022_ParamLimits

0x68de,	// (0x000b481b) bg_vkb2_func_pane_cp08_ParamLimits

0x68c4,	// (0x000b4801) bg_vkb2_func_pane_cp06_ParamLimits

0x68d2,	// (0x000b480f) bg_vkb2_func_pane_cp07_ParamLimits

0x68ef,	// (0x000b482c) input_focus_pane_cp09_ParamLimits

0xa6c8,	// (0x000b8605) cam6_autofocus_pane_ParamLimits

0xa6c8,	// (0x000b8605) cam6_autofocus_pane

0x6e49,	// (0x000b4d86) cam6_image_uncrop_pane_ParamLimits

0x6e49,	// (0x000b4d86) cam6_image_uncrop_pane

0x6e58,	// (0x000b4d95) cam6_indi_pane_ParamLimits

0x6e58,	// (0x000b4d95) cam6_indi_pane

0x6e6e,	// (0x000b4dab) cam6_mode_pane_ParamLimits

0x6e6e,	// (0x000b4dab) cam6_mode_pane

0x6e80,	// (0x000b4dbd) cam6_timer_pane_ParamLimits

0x6e80,	// (0x000b4dbd) cam6_timer_pane

0x6e8c,	// (0x000b4dc9) cam6_zoom_pane_ParamLimits

0x6e8c,	// (0x000b4dc9) cam6_zoom_pane

0x6e9a,	// (0x000b4dd7) cam6_mode_pane_g1_ParamLimits

0x6e9a,	// (0x000b4dd7) cam6_mode_pane_g1

0x6eaa,	// (0x000b4de7) cam6_mode_pane_g2_ParamLimits

0x6eaa,	// (0x000b4de7) cam6_mode_pane_g2

0x6eba,	// (0x000b4df7) cam6_mode_pane_g3_ParamLimits

0x6eba,	// (0x000b4df7) cam6_mode_pane_g3

0x6eca,	// (0x000b4e07) cam6_mode_pane_g4_ParamLimits

0x6eca,	// (0x000b4e07) cam6_mode_pane_g4

0x0003,

0xfb40,	// (0x000bda7d) cam6_mode_pane_g_ParamLimits

0xfb40,	// (0x000bda7d) cam6_mode_pane_g

0xde3c,	// (0x000bbd79) bg_tb_trans_pane_cp08_ParamLimits

0xde3c,	// (0x000bbd79) bg_tb_trans_pane_cp08

0xde4a,	// (0x000bbd87) cam6_battery_pane_ParamLimits

0xde4a,	// (0x000bbd87) cam6_battery_pane

0xde60,	// (0x000bbd9d) cam6_indi_pane_g1_ParamLimits

0xde60,	// (0x000bbd9d) cam6_indi_pane_g1

0xde72,	// (0x000bbdaf) cam6_indi_pane_g2_ParamLimits

0xde72,	// (0x000bbdaf) cam6_indi_pane_g2

0xde84,	// (0x000bbdc1) cam6_indi_pane_g3_ParamLimits

0xde84,	// (0x000bbdc1) cam6_indi_pane_g3

0x0002,

0xfb49,	// (0x000bda86) cam6_indi_pane_g_ParamLimits

0xfb49,	// (0x000bda86) cam6_indi_pane_g

0xde96,	// (0x000bbdd3) cam6_indi_pane_t1_ParamLimits

0xde96,	// (0x000bbdd3) cam6_indi_pane_t1

0x58de,	// (0x000b381b) cam6_autofocus_pane_g1

0x58d6,	// (0x000b3813) cam6_autofocus_pane_g2

0x58ee,	// (0x000b382b) cam6_autofocus_pane_g3

0x58e6,	// (0x000b3823) cam6_autofocus_pane_g4

0x0003,

0xfb50,	// (0x000bda8d) cam6_autofocus_pane_g

0xdebc,	// (0x000bbdf9) cam6_timer_pane_g1

0xdec4,	// (0x000bbe01) cam6_timer_pane_t1

0xded2,	// (0x000bbe0f) cam6_zoom_cont_pane

0xdeda,	// (0x000bbe17) cam6_zoom_pane_g1

0xdee2,	// (0x000bbe1f) cam6_zoom_pane_g2

0x6eda,	// (0x000b4e17) cam6_zoom_pane_g3

0x0002,

0xfb59,	// (0x000bda96) cam6_zoom_pane_g

0xce1a,	// (0x000bad57) cam6_battery_pane_g1

0xce1a,	// (0x000bad57) cam6_battery_pane_g2

0x0001,

0xf6c1,	// (0x000bd5fe) cam6_battery_pane_g

0xdeea,	// (0x000bbe27) cam6_zoom_cont_pane_g1

0xdef3,	// (0x000bbe30) cam6_zoom_cont_pane_g2

0xdefc,	// (0x000bbe39) cam6_zoom_cont_pane_g3

0x0002,

0xfb60,	// (0x000bda9d) cam6_zoom_cont_pane_g

0x6ef7,	// (0x000b4e34) cam6_mode_pane_cp_ParamLimits

0x6ef7,	// (0x000b4e34) cam6_mode_pane_cp

0x6f09,	// (0x000b4e46) cam6_zoom_pane_cp_ParamLimits

0x6f09,	// (0x000b4e46) cam6_zoom_pane_cp

0x6f17,	// (0x000b4e54) vid6_image_uncrop_cif_pane_ParamLimits

0x6f17,	// (0x000b4e54) vid6_image_uncrop_cif_pane

0x6f27,	// (0x000b4e64) vid6_image_uncrop_nhd_pane_ParamLimits

0x6f27,	// (0x000b4e64) vid6_image_uncrop_nhd_pane

0x6f36,	// (0x000b4e73) vid6_image_uncrop_vga_pane_ParamLimits

0x6f36,	// (0x000b4e73) vid6_image_uncrop_vga_pane

0x6f45,	// (0x000b4e82) vid6_image_uncrop_wvga_pane_ParamLimits

0x6f45,	// (0x000b4e82) vid6_image_uncrop_wvga_pane

0x6f54,	// (0x000b4e91) vid6_indi_pane_ParamLimits

0x6f54,	// (0x000b4e91) vid6_indi_pane

0xde3c,	// (0x000bbd79) bg_tb_trans_pane_cp09_ParamLimits

0xde3c,	// (0x000bbd79) bg_tb_trans_pane_cp09

0xdf14,	// (0x000bbe51) cam6_battery_pane_cp_ParamLimits

0xdf14,	// (0x000bbe51) cam6_battery_pane_cp

0xdf20,	// (0x000bbe5d) vid6_indi_pane_g1_ParamLimits

0xdf20,	// (0x000bbe5d) vid6_indi_pane_g1

0xdf32,	// (0x000bbe6f) vid6_indi_pane_g2_ParamLimits

0xdf32,	// (0x000bbe6f) vid6_indi_pane_g2

0xdf44,	// (0x000bbe81) vid6_indi_pane_g3_ParamLimits

0xdf44,	// (0x000bbe81) vid6_indi_pane_g3

0xdf5b,	// (0x000bbe98) vid6_indi_pane_g4_ParamLimits

0xdf5b,	// (0x000bbe98) vid6_indi_pane_g4

0xdf72,	// (0x000bbeaf) vid6_indi_pane_g5_ParamLimits

0xdf72,	// (0x000bbeaf) vid6_indi_pane_g5

0x0004,

0xfb67,	// (0x000bdaa4) vid6_indi_pane_g_ParamLimits

0xfb67,	// (0x000bdaa4) vid6_indi_pane_g

0xdf8c,	// (0x000bbec9) vid6_indi_pane_t1_ParamLimits

0xdf8c,	// (0x000bbec9) vid6_indi_pane_t1

0xdfa2,	// (0x000bbedf) vid6_indi_pane_t2_ParamLimits

0xdfa2,	// (0x000bbedf) vid6_indi_pane_t2

0xdfca,	// (0x000bbf07) vid6_indi_pane_t3_ParamLimits

0xdfca,	// (0x000bbf07) vid6_indi_pane_t3

0xdff2,	// (0x000bbf2f) vid6_indi_pane_t4_ParamLimits

0xdff2,	// (0x000bbf2f) vid6_indi_pane_t4

0x0003,

0xfb72,	// (0x000bdaaf) vid6_indi_pane_t_ParamLimits

0xfb72,	// (0x000bdaaf) vid6_indi_pane_t

0xe016,	// (0x000bbf53) wait_bar_pane_cp08

0x6f6c,	// (0x000b4ea9) main_cset_text2_pane_t1_ParamLimits

0x6f6c,	// (0x000b4ea9) main_cset_text2_pane_t1

0x6ee2,	// (0x000b4e1f) listscroll_gen_pane_cp06_t1_ParamLimits

0x6ee2,	// (0x000b4e1f) listscroll_gen_pane_cp06_t1

0xf09d,	// (0x000bcfda) main_cam6_set_pane

0xa45c,	// (0x000b8399) bg_tb_trans_pane_cp06_ParamLimits

0xa472,	// (0x000b83af) cam4_indicators_pane_g1_ParamLimits

0xa483,	// (0x000b83c0) cam4_indicators_pane_g2_ParamLimits

0xf8e0,	// (0x000bd81d) cam4_indicators_pane_g_ParamLimits

0xa49b,	// (0x000b83d8) cam4_indicators_pane_t1_ParamLimits

0x95f7,	// (0x000b7534) bg_tb_trans_pane_cp07_ParamLimits

0xa4c9,	// (0x000b8406) vid4_indicators_pane_g1_ParamLimits

0xa4df,	// (0x000b841c) vid4_indicators_pane_g2_ParamLimits

0xa4f3,	// (0x000b8430) vid4_indicators_pane_g3_ParamLimits

0xa506,	// (0x000b8443) vid4_indicators_pane_g4_ParamLimits

0xf8f2,	// (0x000bd82f) vid4_indicators_pane_g_ParamLimits

0xa524,	// (0x000b8461) vid4_indicators_pane_t1_ParamLimits

0xa676,	// (0x000b85b3) vid4_progress_pane_g1_ParamLimits

0xa686,	// (0x000b85c3) vid4_progress_pane_g2_ParamLimits

0x6a30,	// (0x000b496d) vid4_progress_pane_g3_ParamLimits

0xa483,	// (0x000b83c0) vid4_progress_pane_g4_ParamLimits

0xfaa3,	// (0x000bd9e0) vid4_progress_pane_g_ParamLimits

0x6a42,	// (0x000b497f) vid4_progress_pane_t1_ParamLimits

0xa696,	// (0x000b85d3) vid4_progress_pane_t2_ParamLimits

0xa6ab,	// (0x000b85e8) vid4_progress_pane_t3_ParamLimits

0xfaae,	// (0x000bd9eb) vid4_progress_pane_t_ParamLimits

0x6a5a,	// (0x000b4997) wait_bar_pane_cp07_ParamLimits

0x6f8d,	// (0x000b4eca) main_cam6_set_pane_g2_ParamLimits

0x6f8d,	// (0x000b4eca) main_cam6_set_pane_g2

0x6fb3,	// (0x000b4ef0) main_cset6_listscroll_pane_ParamLimits

0x6fb3,	// (0x000b4ef0) main_cset6_listscroll_pane

0x6fd1,	// (0x000b4f0e) main_cset6_slider_pane_ParamLimits

0x6fd1,	// (0x000b4f0e) main_cset6_slider_pane

0x6fe7,	// (0x000b4f24) main_cset6_text2_pane_ParamLimits

0x6fe7,	// (0x000b4f24) main_cset6_text2_pane

0xe025,	// (0x000bbf62) main_cset6_text_pane

0xe02d,	// (0x000bbf6a) main_cset_list_pane_copy1_ParamLimits

0xe02d,	// (0x000bbf6a) main_cset_list_pane_copy1

0xe03d,	// (0x000bbf7a) scroll_pane_cp028_copy1

0x6ff5,	// (0x000b4f32) cset_list_set_pane_copy1

0x7009,	// (0x000b4f46) aid_position_infowindow_above_copy1

0x7011,	// (0x000b4f4e) aid_position_infowindow_below_copy1

0x7019,	// (0x000b4f56) cset_list_set_pane_g1_copy1

0x7021,	// (0x000b4f5e) cset_list_set_pane_g3_copy1_ParamLimits

0x7021,	// (0x000b4f5e) cset_list_set_pane_g3_copy1

0x7030,	// (0x000b4f6d) cset_list_set_pane_t1_copy1_ParamLimits

0x7030,	// (0x000b4f6d) cset_list_set_pane_t1_copy1

0xbe7c,	// (0x000b9db9) list_highlight_pane_cp021_copy1_ParamLimits

0xbe7c,	// (0x000b9db9) list_highlight_pane_cp021_copy1

0xe046,	// (0x000bbf83) cset6_slider_pane_ParamLimits

0xe046,	// (0x000bbf83) cset6_slider_pane

0xe072,	// (0x000bbfaf) main_cset6_slider_pane_g1_ParamLimits

0xe072,	// (0x000bbfaf) main_cset6_slider_pane_g1

0x7045,	// (0x000b4f82) main_cset6_slider_pane_g2_ParamLimits

0x7045,	// (0x000b4f82) main_cset6_slider_pane_g2

0xe09a,	// (0x000bbfd7) main_cset6_slider_pane_g3_ParamLimits

0xe09a,	// (0x000bbfd7) main_cset6_slider_pane_g3

0x706d,	// (0x000b4faa) main_cset6_slider_pane_g4_ParamLimits

0x706d,	// (0x000b4faa) main_cset6_slider_pane_g4

0x7079,	// (0x000b4fb6) main_cset6_slider_pane_g5_ParamLimits

0x7079,	// (0x000b4fb6) main_cset6_slider_pane_g5

0xd94b,	// (0x000bb888) main_cset6_slider_pane_g7_ParamLimits

0xd94b,	// (0x000bb888) main_cset6_slider_pane_g7

0xd957,	// (0x000bb894) main_cset6_slider_pane_g8_ParamLimits

0xd957,	// (0x000bb894) main_cset6_slider_pane_g8

0x5f8a,	// (0x000b3ec7) main_cset6_slider_pane_g9_ParamLimits

0x5f8a,	// (0x000b3ec7) main_cset6_slider_pane_g9

0x5f96,	// (0x000b3ed3) main_cset6_slider_pane_g10_ParamLimits

0x5f96,	// (0x000b3ed3) main_cset6_slider_pane_g10

0x5fa2,	// (0x000b3edf) main_cset6_slider_pane_g11_ParamLimits

0x5fa2,	// (0x000b3edf) main_cset6_slider_pane_g11

0x5fae,	// (0x000b3eeb) main_cset6_slider_pane_g12_ParamLimits

0x5fae,	// (0x000b3eeb) main_cset6_slider_pane_g12

0x5fba,	// (0x000b3ef7) main_cset6_slider_pane_g13_ParamLimits

0x5fba,	// (0x000b3ef7) main_cset6_slider_pane_g13

0x5fc6,	// (0x000b3f03) main_cset6_slider_pane_g14_ParamLimits

0x5fc6,	// (0x000b3f03) main_cset6_slider_pane_g14

0x7087,	// (0x000b4fc4) main_cset6_slider_pane_g15_ParamLimits

0x7087,	// (0x000b4fc4) main_cset6_slider_pane_g15

0x5fea,	// (0x000b3f27) main_cset6_slider_pane_g16_ParamLimits

0x5fea,	// (0x000b3f27) main_cset6_slider_pane_g16

0x5ff8,	// (0x000b3f35) main_cset6_slider_pane_g17_ParamLimits

0x5ff8,	// (0x000b3f35) main_cset6_slider_pane_g17

0x0011,

0xfb7b,	// (0x000bdab8) main_cset6_slider_pane_g_ParamLimits

0xfb7b,	// (0x000bdab8) main_cset6_slider_pane_g

0xe0a6,	// (0x000bbfe3) main_cset6_slider_pane_t1_ParamLimits

0xe0a6,	// (0x000bbfe3) main_cset6_slider_pane_t1

0x70b7,	// (0x000b4ff4) main_cset6_slider_pane_t2_ParamLimits

0x70b7,	// (0x000b4ff4) main_cset6_slider_pane_t2

0x70e2,	// (0x000b501f) main_cset6_slider_pane_t3_ParamLimits

0x70e2,	// (0x000b501f) main_cset6_slider_pane_t3

0x710d,	// (0x000b504a) main_cset6_slider_pane_t4_ParamLimits

0x710d,	// (0x000b504a) main_cset6_slider_pane_t4

0x713a,	// (0x000b5077) main_cset6_slider_pane_t5_ParamLimits

0x713a,	// (0x000b5077) main_cset6_slider_pane_t5

0xe0e7,	// (0x000bc024) main_cset6_slider_pane_t7_ParamLimits

0xe0e7,	// (0x000bc024) main_cset6_slider_pane_t7

0x7167,	// (0x000b50a4) main_cset6_slider_pane_t8_ParamLimits

0x7167,	// (0x000b50a4) main_cset6_slider_pane_t8

0x718b,	// (0x000b50c8) main_cset6_slider_pane_t9_ParamLimits

0x718b,	// (0x000b50c8) main_cset6_slider_pane_t9

0x71af,	// (0x000b50ec) main_cset6_slider_pane_t10_ParamLimits

0x71af,	// (0x000b50ec) main_cset6_slider_pane_t10

0x71d3,	// (0x000b5110) main_cset6_slider_pane_t11_ParamLimits

0x71d3,	// (0x000b5110) main_cset6_slider_pane_t11

0xe11d,	// (0x000bc05a) main_cset6_slider_pane_t14_ParamLimits

0xe11d,	// (0x000bc05a) main_cset6_slider_pane_t14

0xe156,	// (0x000bc093) main_cset6_slider_pane_t15_ParamLimits

0xe156,	// (0x000bc093) main_cset6_slider_pane_t15

0x000b,

0xfba0,	// (0x000bdadd) main_cset6_slider_pane_t_ParamLimits

0xfba0,	// (0x000bdadd) main_cset6_slider_pane_t

0xe18f,	// (0x000bc0cc) cset_slider_pane_g1_copy1

0xe198,	// (0x000bc0d5) cset_slider_pane_g2_copy1

0xe1a1,	// (0x000bc0de) cset_slider_pane_g3_copy1

0x95ed,	// (0x000b752a) bg_popup_sub_pane_cp011_copy1

0xe1aa,	// (0x000bc0e7) main_cset_text_pane_g1_copy1

0xda91,	// (0x000bb9ce) main_cset_text_pane_t1_copy1

0xda9f,	// (0x000bb9dc) main_cset_text_pane_t2_copy1

0xdaad,	// (0x000bb9ea) main_cset_text_pane_t3_copy1

0xdabb,	// (0x000bb9f8) main_cset_text_pane_t4_copy1

0xdac9,	// (0x000bba06) main_cset_text_pane_t5_copy1

0xe1b2,	// (0x000bc0ef) main_cset_text_pane_t6_copy1

0xe1c0,	// (0x000bc0fd) main_cset_text_pane_t7_copy1

0x6f6c,	// (0x000b4ea9) main_cset_text2_pane_t1_copy1

0x95f7,	// (0x000b7534) main_ncimui_pane

0x34a1,	// (0x000b13de) popup_query_ncimui_window_ParamLimits

0x34a1,	// (0x000b13de) popup_query_ncimui_window

0xbe8a,	// (0x000b9dc7) field_cale_ev2_pane_g4_ParamLimits

0xbe8a,	// (0x000b9dc7) field_cale_ev2_pane_g4

0x5168,	// (0x000b30a5) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5168,	// (0x000b30a5) cell_video_dialer_keypad_pane_g2

0x0001,

0xf87a,	// (0x000bd7b7) cell_video_dialer_keypad_pane_g_ParamLimits

0xf87a,	// (0x000bd7b7) cell_video_dialer_keypad_pane_g

0x5180,	// (0x000b30bd) cell_video_dialer_keypad_pane_t1

0x95ed,	// (0x000b752a) bg_popup_window_pane_cp012

0xb23d,	// (0x000b917a) heading_pane_cp06

0xe1ec,	// (0x000bc129) ncim_query_content_pane

0x95ed,	// (0x000b752a) bg_popup_heading_pane_cp01

0xe1f4,	// (0x000bc131) ncim_heading_pane_t1

0xe202,	// (0x000bc13f) ncim_indicator_popup_pane

0xe214,	// (0x000bc151) ncim_query_button_pane

0xe22a,	// (0x000bc167) ncim_query_content_pane_t1

0xe23c,	// (0x000bc179) ncim_query_content_pane_t2

0x0005,

0xfbe4,	// (0x000bdb21) ncim_query_content_pane_t

0xe276,	// (0x000bc1b3) ncim_query_list_pane

0xe288,	// (0x000bc1c5) ncim_query_popup_pane

0xe202,	// (0x000bc13f) ncim_indicator_popup_pane_ParamLimits

0x73f8,	// (0x000b5335) ncim_query_content_pane_g1_ParamLimits

0x73f8,	// (0x000b5335) ncim_query_content_pane_g1

0xe22a,	// (0x000bc167) ncim_query_content_pane_t1_ParamLimits

0xe23c,	// (0x000bc179) ncim_query_content_pane_t2_ParamLimits

0x7404,	// (0x000b5341) ncim_query_content_pane_t3_ParamLimits

0x7404,	// (0x000b5341) ncim_query_content_pane_t3

0x742c,	// (0x000b5369) ncim_query_content_pane_t4_ParamLimits

0x742c,	// (0x000b5369) ncim_query_content_pane_t4

0x7454,	// (0x000b5391) ncim_query_content_pane_t5_ParamLimits

0x7454,	// (0x000b5391) ncim_query_content_pane_t5

0xe24e,	// (0x000bc18b) ncim_query_content_pane_t6_ParamLimits

0xe24e,	// (0x000bc18b) ncim_query_content_pane_t6

0xfbe4,	// (0x000bdb21) ncim_query_content_pane_t_ParamLimits

0xe276,	// (0x000bc1b3) ncim_query_list_pane_ParamLimits

0xe288,	// (0x000bc1c5) ncim_query_popup_pane_ParamLimits

0xe29c,	// (0x000bc1d9) wait_bar_pane_cp04

0x95ed,	// (0x000b752a) input_focus_pane_cp011

0xe2a4,	// (0x000bc1e1) ncim_query_popup_pane_t1

0xe2b2,	// (0x000bc1ef) ncim_list_query_list_pane_ParamLimits

0xe2b2,	// (0x000bc1ef) ncim_list_query_list_pane

0x95ed,	// (0x000b752a) bg_button_pane_cp027

0xe2c5,	// (0x000bc202) ncim_query_button_pane_g1

0x95ed,	// (0x000b752a) list_highlight_pane_cp012

0xe2cf,	// (0x000bc20c) ncim_list_query_list_pane_g1

0xe2d7,	// (0x000bc214) ncim_list_query_list_pane_t1

0xa48f,	// (0x000b83cc) cam4_indicators_pane_g3_ParamLimits

0xa48f,	// (0x000b83cc) cam4_indicators_pane_g3

0xa512,	// (0x000b844f) vid4_indicators_pane_g5_ParamLimits

0xa512,	// (0x000b844f) vid4_indicators_pane_g5

0xa48f,	// (0x000b83cc) vid4_progress_pane_g5_ParamLimits

0xa48f,	// (0x000b83cc) vid4_progress_pane_g5

0x72e3,	// (0x000b5220) main_ncimui_pane_g1

0x734c,	// (0x000b5289) ncimui_group_query_pane_ParamLimits

0x734c,	// (0x000b5289) ncimui_group_query_pane

0x7394,	// (0x000b52d1) ncimui_list_pane_ParamLimits

0x7394,	// (0x000b52d1) ncimui_list_pane

0x73bb,	// (0x000b52f8) ncimui_text_pane_ParamLimits

0x73bb,	// (0x000b52f8) ncimui_text_pane

0x747c,	// (0x000b53b9) ncimui_text_pane_t1_ParamLimits

0x747c,	// (0x000b53b9) ncimui_text_pane_t1

0xe2e5,	// (0x000bc222) ncimui_list_single_graphic_pane_ParamLimits

0xe2e5,	// (0x000bc222) ncimui_list_single_graphic_pane

0x749a,	// (0x000b53d7) ncimui_query_pane_ParamLimits

0x749a,	// (0x000b53d7) ncimui_query_pane

0x95ed,	// (0x000b752a) list_highlight_pane_cp013

0xe2f5,	// (0x000bc232) ncim_list_query_list_pane_t1_copy1

0xe2cf,	// (0x000bc20c) ncim_list_single_graphic_pane_g1

0x74ad,	// (0x000b53ea) ncim_query_button_pane_cp01

0x74b9,	// (0x000b53f6) ncim_query_entry_pane_ParamLimits

0x74b9,	// (0x000b53f6) ncim_query_entry_pane

0x74cc,	// (0x000b5409) ncimui_query_pane_g1

0x74d8,	// (0x000b5415) ncimui_query_pane_t1_ParamLimits

0x74d8,	// (0x000b5415) ncimui_query_pane_t1

0xbe7c,	// (0x000b9db9) input_focus_pane_cp012

0xe303,	// (0x000bc240) ncim_query_entry_pane_t1

0x9d8f,	// (0x000b7ccc) main_im_pane_ParamLimits

0x95f7,	// (0x000b7534) main_mobtv_pane_ParamLimits

0x95f7,	// (0x000b7534) main_mobtv_pane

0x709f,	// (0x000b4fdc) main_cset6_slider_pane_g18_ParamLimits

0x709f,	// (0x000b4fdc) main_cset6_slider_pane_g18

0x70ab,	// (0x000b4fe8) main_cset6_slider_pane_g19_ParamLimits

0x70ab,	// (0x000b4fe8) main_cset6_slider_pane_g19

0x74f1,	// (0x000b542e) bg_main_mobtv_pane_ParamLimits

0x74f1,	// (0x000b542e) bg_main_mobtv_pane

0x74ff,	// (0x000b543c) main_mobtv_info_pane

0x750a,	// (0x000b5447) main_mobtv_loading_pane_ParamLimits

0x750a,	// (0x000b5447) main_mobtv_loading_pane

0xe315,	// (0x000bc252) main_mobtv_pg_channel_list_pane

0xe31f,	// (0x000bc25c) main_mobtv_pg_hdr_pane

0x7517,	// (0x000b5454) main_mobtv_programe_curr_pane_ParamLimits

0x7517,	// (0x000b5454) main_mobtv_programe_curr_pane

0x7524,	// (0x000b5461) main_mobtv_programe_next_pane_ParamLimits

0x7524,	// (0x000b5461) main_mobtv_programe_next_pane

0xe328,	// (0x000bc265) popup_mobtv_noti_window

0xce1a,	// (0x000bad57) main_tv_pg_hdr_pane_g1

0xe332,	// (0x000bc26f) main_tv_pg_hdr_pane_g2

0xe33a,	// (0x000bc277) main_tv_pg_hdr_pane_g3

0xe342,	// (0x000bc27f) main_tv_pg_hdr_pane_g4

0xe34a,	// (0x000bc287) main_tv_pg_hdr_pane_g5

0xe354,	// (0x000bc291) main_tv_pg_hdr_pane_g6

0xe35e,	// (0x000bc29b) main_tv_pg_hdr_pane_g7

0xe368,	// (0x000bc2a5) main_tv_pg_hdr_pane_g8

0xe372,	// (0x000bc2af) main_tv_pg_hdr_pane_g9

0xe37c,	// (0x000bc2b9) main_tv_pg_hdr_pane_g10

0xe386,	// (0x000bc2c3) main_tv_pg_hdr_pane_g11

0x000a,

0xfbf1,	// (0x000bdb2e) main_tv_pg_hdr_pane_g

0xe390,	// (0x000bc2cd) main_tv_pg_hdr_pane_t1

0xe39e,	// (0x000bc2db) main_tv_pg_hdr_pane_t2

0xe3ac,	// (0x000bc2e9) main_tv_pg_hdr_pane_t3

0xe3bc,	// (0x000bc2f9) main_tv_pg_hdr_pane_t4

0xe3cc,	// (0x000bc309) main_tv_pg_hdr_pane_t5

0x0004,

0xfc08,	// (0x000bdb45) main_tv_pg_hdr_pane_t

0xe3dc,	// (0x000bc319) single_mobtv_pg_channel_pane_ParamLimits

0xe3dc,	// (0x000bc319) single_mobtv_pg_channel_pane

0xe3ee,	// (0x000bc32b) single_mobtv_pg_channel_table_pane

0xe3f7,	// (0x000bc334) single_mobtv_pg_channel_thumb_pane

0xe400,	// (0x000bc33d) single_tv_pg_channel_pane_g1

0xe409,	// (0x000bc346) single_tv_pg_channel_pane_g2

0x0001,

0xfc13,	// (0x000bdb50) single_tv_pg_channel_pane_g

0xd041,	// (0x000baf7e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd041,	// (0x000baf7e) bg_single_mobtv_pg_channel_thumb_pane

0xe412,	// (0x000bc34f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe412,	// (0x000bc34f) single_mobtv_pg_channel_thumb_pane_g1

0xe420,	// (0x000bc35d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe420,	// (0x000bc35d) single_mobtv_pg_channel_thumb_pane_g2

0xe42c,	// (0x000bc369) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe42c,	// (0x000bc369) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc18,	// (0x000bdb55) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc18,	// (0x000bdb55) single_mobtv_pg_channel_thumb_pane_g

0xe438,	// (0x000bc375) single_mobtv_pg_channel_thumb_pane_t1

0xe446,	// (0x000bc383) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc1f,	// (0x000bdb5c) single_mobtv_pg_channel_thumb_pane_t

0xce1a,	// (0x000bad57) bg_single_mobtv_pg_channel_table_pane_g1

0xce1a,	// (0x000bad57) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6c1,	// (0x000bd5fe) bg_single_mobtv_pg_channel_table_pane_g

0xe454,	// (0x000bc391) single_mobtv_pg_channel_table_pane_t1

0xe462,	// (0x000bc39f) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc24,	// (0x000bdb61) single_mobtv_pg_channel_table_pane_t

0x7539,	// (0x000b5476) main_mobtv_info_pane_g1_ParamLimits

0x7539,	// (0x000b5476) main_mobtv_info_pane_g1

0x7557,	// (0x000b5494) main_mobtv_info_pane_t1_ParamLimits

0x7557,	// (0x000b5494) main_mobtv_info_pane_t1

0x75cf,	// (0x000b550c) main_mobtv_info_pane_t2_ParamLimits

0x75cf,	// (0x000b550c) main_mobtv_info_pane_t2

0x0002,

0xfc2e,	// (0x000bdb6b) main_mobtv_info_pane_t_ParamLimits

0xfc2e,	// (0x000bdb6b) main_mobtv_info_pane_t

0x7660,	// (0x000b559d) wait_bar_pane_cp05

0x7672,	// (0x000b55af) main_mobtv_loading_pane_g1_ParamLimits

0x7672,	// (0x000b55af) main_mobtv_loading_pane_g1

0x7683,	// (0x000b55c0) main_mobtv_loading_pane_g2_ParamLimits

0x7683,	// (0x000b55c0) main_mobtv_loading_pane_g2

0x768f,	// (0x000b55cc) main_mobtv_loading_pane_g3_ParamLimits

0x768f,	// (0x000b55cc) main_mobtv_loading_pane_g3

0x0002,

0xfc35,	// (0x000bdb72) main_mobtv_loading_pane_g_ParamLimits

0xfc35,	// (0x000bdb72) main_mobtv_loading_pane_g

0xe470,	// (0x000bc3ad) main_mobtv_loading_pane_t1_ParamLimits

0xe470,	// (0x000bc3ad) main_mobtv_loading_pane_t1

0xe488,	// (0x000bc3c5) main_mobtv_loading_pane_t2_ParamLimits

0xe488,	// (0x000bc3c5) main_mobtv_loading_pane_t2

0x0001,

0xfc3c,	// (0x000bdb79) main_mobtv_loading_pane_t_ParamLimits

0xfc3c,	// (0x000bdb79) main_mobtv_loading_pane_t

0x76a2,	// (0x000b55df) wait_bar_pane_cp06_ParamLimits

0x76a2,	// (0x000b55df) wait_bar_pane_cp06

0xe4ac,	// (0x000bc3e9) main_mobtv_programe_curr_pane_t1

0xe4ba,	// (0x000bc3f7) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc41,	// (0x000bdb7e) main_mobtv_programe_curr_pane_t

0xe4c8,	// (0x000bc405) main_mobtv_programe_next_pane_t1

0xe4d6,	// (0x000bc413) main_mobtv_programe_next_pane_t2

0xe4e4,	// (0x000bc421) main_mobtv_programe_next_pane_t3

0x0002,

0xfc46,	// (0x000bdb83) main_mobtv_programe_next_pane_t

0x95ed,	// (0x000b752a) bg_popup_mobtv_noti_window_pane

0xe4f2,	// (0x000bc42f) popup_mobtv_noti_window_g1

0xe4fa,	// (0x000bc437) popup_mobtv_noti_window_t1

0xe508,	// (0x000bc445) popup_mobtv_noti_window_t2

0x0001,

0xfc4d,	// (0x000bdb8a) popup_mobtv_noti_window_t

0xce1a,	// (0x000bad57) bg_popup_mobtv_noti_window_pane_g1

0xfde7,	// (0x000add24) sc_clock_pane

0xf09d,	// (0x000bcfda) main_fs_bigclock_pane

0x6cc0,	// (0x000b4bfd) blid2_tripm_pane_t4_ParamLimits

0x6cc0,	// (0x000b4bfd) blid2_tripm_pane_t4

0x76b1,	// (0x000b55ee) sc_clock_pane_g1_ParamLimits

0x76b1,	// (0x000b55ee) sc_clock_pane_g1

0x76c3,	// (0x000b5600) sc_clock_pane_t1_ParamLimits

0x76c3,	// (0x000b5600) sc_clock_pane_t1

0x76e7,	// (0x000b5624) sc_clock_pane_t2_ParamLimits

0x76e7,	// (0x000b5624) sc_clock_pane_t2

0x76ff,	// (0x000b563c) sc_clock_pane_t3_ParamLimits

0x76ff,	// (0x000b563c) sc_clock_pane_t3

0x0004,

0xfc52,	// (0x000bdb8f) sc_clock_pane_t_ParamLimits

0xfc52,	// (0x000bdb8f) sc_clock_pane_t

0x8944,	// (0x000b6881) main_fs_bigclock_indicator_pane_ParamLimits

0x8944,	// (0x000b6881) main_fs_bigclock_indicator_pane

0x77c5,	// (0x000b5702) main_fs_bigclock_pane_g1_ParamLimits

0x77c5,	// (0x000b5702) main_fs_bigclock_pane_g1

0x8950,	// (0x000b688d) main_fs_bigclock_pane_t1_ParamLimits

0x8950,	// (0x000b688d) main_fs_bigclock_pane_t1

0x8962,	// (0x000b689f) main_fs_bigclock_pane_t2_ParamLimits

0x8962,	// (0x000b689f) main_fs_bigclock_pane_t2

0x8976,	// (0x000b68b3) main_fs_bigclock_pane_t3_ParamLimits

0x8976,	// (0x000b68b3) main_fs_bigclock_pane_t3

0x0002,

0xfe60,	// (0x000bdd9d) main_fs_bigclock_pane_t_ParamLimits

0xfe60,	// (0x000bdd9d) main_fs_bigclock_pane_t

0xec6b,	// (0x000bcba8) main_fs_bigclock_indicator_pane_g1

0xe21c,	// (0x000bc159) ncim_query_content_pane_g2_ParamLimits

0xe21c,	// (0x000bc159) ncim_query_content_pane_g2

0x0001,

0xfbdf,	// (0x000bdb1c) ncim_query_content_pane_g_ParamLimits

0xfbdf,	// (0x000bdb1c) ncim_query_content_pane_g

0x7716,	// (0x000b5653) sc_clock_pane_t4_ParamLimits

0x7716,	// (0x000b5653) sc_clock_pane_t4

0x95f7,	// (0x000b7534) main_radioblah_pane

0xa3f4,	// (0x000b8331) cell_call4_button_pane_t1_copy1_ParamLimits

0xa3f4,	// (0x000b8331) cell_call4_button_pane_t1_copy1

0x72fb,	// (0x000b5238) main_ncimui_pane_t1_ParamLimits

0x72fb,	// (0x000b5238) main_ncimui_pane_t1

0x7315,	// (0x000b5252) main_ncimui_pane_t2_ParamLimits

0x7315,	// (0x000b5252) main_ncimui_pane_t2

0x0002,

0xfbd8,	// (0x000bdb15) main_ncimui_pane_t_ParamLimits

0xfbd8,	// (0x000bdb15) main_ncimui_pane_t

0xe516,	// (0x000bc453) main_radioblah_anim_pane_ParamLimits

0xe516,	// (0x000bc453) main_radioblah_anim_pane

0xe527,	// (0x000bc464) main_radioblah_info_pane_ParamLimits

0xe527,	// (0x000bc464) main_radioblah_info_pane

0xe53b,	// (0x000bc478) main_radioblah_pane_t1_ParamLimits

0xe53b,	// (0x000bc478) main_radioblah_pane_t1

0xe557,	// (0x000bc494) main_radioblah_pane_t2_ParamLimits

0xe557,	// (0x000bc494) main_radioblah_pane_t2

0x0003,

0xfc73,	// (0x000bdbb0) main_radioblah_pane_t_ParamLimits

0xfc73,	// (0x000bdbb0) main_radioblah_pane_t

0x796e,	// (0x000b58ab) main_radioblah_rocker_ctrl_pane_ParamLimits

0x796e,	// (0x000b58ab) main_radioblah_rocker_ctrl_pane

0xe59f,	// (0x000bc4dc) main_radioblah_info_pane_t1_ParamLimits

0xe59f,	// (0x000bc4dc) main_radioblah_info_pane_t1

0x79c6,	// (0x000b5903) main_radioblah_info_pane_t2_ParamLimits

0x79c6,	// (0x000b5903) main_radioblah_info_pane_t2

0x0003,

0xfc7c,	// (0x000bdbb9) main_radioblah_info_pane_t_ParamLimits

0xfc7c,	// (0x000bdbb9) main_radioblah_info_pane_t

0xce1a,	// (0x000bad57) main_radioblah_rocker_ctrl_pane_g1

0x7a76,	// (0x000b59b3) main_radioblah_rocker_ctrl_pane_g2

0x7a7e,	// (0x000b59bb) main_radioblah_rocker_ctrl_pane_g3

0x7a86,	// (0x000b59c3) main_radioblah_rocker_ctrl_pane_g4

0x7a8e,	// (0x000b59cb) main_radioblah_rocker_ctrl_pane_g5

0x7a96,	// (0x000b59d3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc85,	// (0x000bdbc2) main_radioblah_rocker_ctrl_pane_g

0x6f6c,	// (0x000b4ea9) main_cset_text2_pane_t1_copy1_ParamLimits

0xa452,	// (0x000b838f) cam4_image_uncrop_qvga_pane

0xa4b5,	// (0x000b83f2) vid4_image_uncrop_qcif_pane

0xa6c8,	// (0x000b8605) cam6_image_uncrop_qvga_pane_ParamLimits

0xa6c8,	// (0x000b8605) cam6_image_uncrop_qvga_pane

0xdf04,	// (0x000bbe41) vid6_image_uncrop_qcif_pane_ParamLimits

0xdf04,	// (0x000bbe41) vid6_image_uncrop_qcif_pane

0x95ed,	// (0x000b752a) bg_popup_preview_window_pane_cp03

0xe1ce,	// (0x000bc10b) list_cset_text2_pane

0xe1d6,	// (0x000bc113) main_cset6_text2_pane_g1

0xe1de,	// (0x000bc11b) main_cset6_text2_pane_t1

0xe769,	// (0x000bc6a6) list_cset_text2_pane_t1_ParamLimits

0xe769,	// (0x000bc6a6) list_cset_text2_pane_t1

0x95f7,	// (0x000b7534) main_radioblah_pane_ParamLimits

0x764c,	// (0x000b5589) main_mobtv_info_pane_t3_ParamLimits

0x764c,	// (0x000b5589) main_mobtv_info_pane_t3

0x795c,	// (0x000b5899) main_radioblah_pane_g1

0x7996,	// (0x000b58d3) main_radioblah_info_pane_g1

0x7a1b,	// (0x000b5958) main_radioblah_info_pane_t3_ParamLimits

0x7a1b,	// (0x000b5958) main_radioblah_info_pane_t3

0x1daf,	// (0x000afcec) highlight_cell_cale_month_pane_ParamLimits

0x1daf,	// (0x000afcec) highlight_cell_cale_month_pane

0xf09d,	// (0x000bcfda) main_phob_fisheye_pane

0xd11d,	// (0x000bb05a) scroll_pane_cp0031_ParamLimits

0xd11d,	// (0x000bb05a) scroll_pane_cp0031

0xe016,	// (0x000bbf53) wait_bar_pane_cp08_ParamLimits

0x6ff5,	// (0x000b4f32) cset_list_set_pane_copy1_ParamLimits

0xe5d9,	// (0x000bc516) highlight_cell_cale_month_pane_g1

0x7a9e,	// (0x000b59db) highlight_cell_cale_month_pane_t1

0xdcc9,	// (0x000bbc06) list_gen_pane_cp01

0xd936,	// (0x000bb873) scroll_pane_01

0x7aac,	// (0x000b59e9) list_single_double_fisheye_pane

0x7ab5,	// (0x000b59f2) list_double_fisheye_pane_g1_ParamLimits

0x7ab5,	// (0x000b59f2) list_double_fisheye_pane_g1

0x7ac1,	// (0x000b59fe) list_double_fisheye_pane_g2_ParamLimits

0x7ac1,	// (0x000b59fe) list_double_fisheye_pane_g2

0x7ad5,	// (0x000b5a12) list_double_fisheye_pane_g3_ParamLimits

0x7ad5,	// (0x000b5a12) list_double_fisheye_pane_g3

0x0004,

0xfc92,	// (0x000bdbcf) list_double_fisheye_pane_g_ParamLimits

0xfc92,	// (0x000bdbcf) list_double_fisheye_pane_g

0x7afe,	// (0x000b5a3b) list_double_fisheye_pane_t1_ParamLimits

0x7afe,	// (0x000b5a3b) list_double_fisheye_pane_t1

0x7b19,	// (0x000b5a56) list_double_fisheye_pane_t2_ParamLimits

0x7b19,	// (0x000b5a56) list_double_fisheye_pane_t2

0x0001,

0xfc9d,	// (0x000bdbda) list_double_fisheye_pane_t_ParamLimits

0xfc9d,	// (0x000bdbda) list_double_fisheye_pane_t

0xf09d,	// (0x000bcfda) main_call5_pane

0x7741,	// (0x000b567e) sc_swipe_pane_ParamLimits

0x7741,	// (0x000b567e) sc_swipe_pane

0x7b4e,	// (0x000b5a8b) call5_image_pane_ParamLimits

0x7b4e,	// (0x000b5a8b) call5_image_pane

0x7b6b,	// (0x000b5aa8) call5_swipe_1_pane_ParamLimits

0x7b6b,	// (0x000b5aa8) call5_swipe_1_pane

0x7b7e,	// (0x000b5abb) call5_swipe_2_pane_ParamLimits

0x7b7e,	// (0x000b5abb) call5_swipe_2_pane

0x7ba9,	// (0x000b5ae6) popup_call5_audio_first_window_ParamLimits

0x7ba9,	// (0x000b5ae6) popup_call5_audio_first_window

0xd041,	// (0x000baf7e) call5_swipe_1_pane_g1_ParamLimits

0xd041,	// (0x000baf7e) call5_swipe_1_pane_g1

0xe5e1,	// (0x000bc51e) call5_swipe_1_pane_g2_ParamLimits

0xe5e1,	// (0x000bc51e) call5_swipe_1_pane_g2

0x0001,

0xfca2,	// (0x000bdbdf) call5_swipe_1_pane_g_ParamLimits

0xfca2,	// (0x000bdbdf) call5_swipe_1_pane_g

0xe5ed,	// (0x000bc52a) call5_swipe_1_pane_t1_ParamLimits

0xe5ed,	// (0x000bc52a) call5_swipe_1_pane_t1

0xd041,	// (0x000baf7e) call5_swipe_2_pane_g1_ParamLimits

0xd041,	// (0x000baf7e) call5_swipe_2_pane_g1

0xe602,	// (0x000bc53f) call5_swipe_2_pane_g2_ParamLimits

0xe602,	// (0x000bc53f) call5_swipe_2_pane_g2

0x0001,

0xfca7,	// (0x000bdbe4) call5_swipe_2_pane_g_ParamLimits

0xfca7,	// (0x000bdbe4) call5_swipe_2_pane_g

0xe60e,	// (0x000bc54b) call5_swipe_2_pane_t1_ParamLimits

0xe60e,	// (0x000bc54b) call5_swipe_2_pane_t1

0xe623,	// (0x000bc560) sc_swipe_pane_g1_ParamLimits

0xe623,	// (0x000bc560) sc_swipe_pane_g1

0xe630,	// (0x000bc56d) sc_swipe_pane_g2_ParamLimits

0xe630,	// (0x000bc56d) sc_swipe_pane_g2

0x0001,

0xfcac,	// (0x000bdbe9) sc_swipe_pane_g_ParamLimits

0xfcac,	// (0x000bdbe9) sc_swipe_pane_g

0xe63c,	// (0x000bc579) sc_swipe_pane_t1_ParamLimits

0xe63c,	// (0x000bc579) sc_swipe_pane_t1

0xf09d,	// (0x000bcfda) main_cmail_launcher_pane

0x7bbe,	// (0x000b5afb) aid_size_cell_cmail_l_ParamLimits

0x7bbe,	// (0x000b5afb) aid_size_cell_cmail_l

0x7bcc,	// (0x000b5b09) grid_cmail_l_pane_ParamLimits

0x7bcc,	// (0x000b5b09) grid_cmail_l_pane

0x7be5,	// (0x000b5b22) cell_cmail_l_pane_ParamLimits

0x7be5,	// (0x000b5b22) cell_cmail_l_pane

0xe651,	// (0x000bc58e) cell_cmail_l_pane_g1_ParamLimits

0xe651,	// (0x000bc58e) cell_cmail_l_pane_g1

0xe65d,	// (0x000bc59a) cell_cmail_l_pane_t1_ParamLimits

0xe65d,	// (0x000bc59a) cell_cmail_l_pane_t1

0xe673,	// (0x000bc5b0) cell_cmail_l_pane_t2_ParamLimits

0xe673,	// (0x000bc5b0) cell_cmail_l_pane_t2

0x0001,

0xfcb1,	// (0x000bdbee) cell_cmail_l_pane_t_ParamLimits

0xfcb1,	// (0x000bdbee) cell_cmail_l_pane_t

0xbe7c,	// (0x000b9db9) grid_highlight_pane_cp018_ParamLimits

0xbe7c,	// (0x000b9db9) grid_highlight_pane_cp018

0xfc75,	// (0x000adbb2) main2_pane_ParamLimits

0xfc75,	// (0x000adbb2) main2_pane

0x9e55,	// (0x000b7d92) popup_sp_fs_action_menu_bg_pane_g1

0x9e5d,	// (0x000b7d9a) popup_sp_fs_action_menu_bg_pane_g2

0x9e65,	// (0x000b7da2) popup_sp_fs_action_menu_bg_pane_g3

0x9e6d,	// (0x000b7daa) popup_sp_fs_action_menu_bg_pane_g4

0x9e75,	// (0x000b7db2) popup_sp_fs_action_menu_bg_pane_g5

0xaa3e,	// (0x000b897b) popup_sp_fs_action_menu_bg_pane_g6

0xaa46,	// (0x000b8983) popup_sp_fs_action_menu_bg_pane_g7

0xaa4e,	// (0x000b898b) popup_sp_fs_action_menu_bg_pane_g8

0xaa56,	// (0x000b8993) popup_sp_fs_action_menu_bg_pane_g9

0xaa5e,	// (0x000b899b) popup_sp_fs_action_menu_bg_pane_g10

0xaa5e,	// (0x000b899b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x000bd0ac) popup_sp_fs_action_menu_bg_pane_g

0x0c36,	// (0x000aeb73) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0c36,	// (0x000aeb73) list_medium_line_x2_t3_g3_g1

0x0c42,	// (0x000aeb7f) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0c42,	// (0x000aeb7f) list_medium_line_x2_t3_g3_g2

0x0c4e,	// (0x000aeb8b) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0c4e,	// (0x000aeb8b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x000bd15a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x000bd15a) list_medium_line_x2_t3_g3_g

0x0c5a,	// (0x000aeb97) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0c5a,	// (0x000aeb97) list_medium_line_x2_t3_g3_t1

0x0c6f,	// (0x000aebac) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0c6f,	// (0x000aebac) list_medium_line_x2_t3_g3_t2

0x0c83,	// (0x000aebc0) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0c83,	// (0x000aebc0) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x000bd161) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x000bd161) list_medium_line_x2_t3_g3_t

0x0c36,	// (0x000aeb73) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0c36,	// (0x000aeb73) list_medium_line_x2_t3_g2_g1

0x0c4e,	// (0x000aeb8b) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0c4e,	// (0x000aeb8b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x000bd168) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x000bd168) list_medium_line_x2_t3_g2_g

0x0c98,	// (0x000aebd5) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0c98,	// (0x000aebd5) list_medium_line_x2_t3_g2_t1

0x0cae,	// (0x000aebeb) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0cae,	// (0x000aebeb) list_medium_line_x2_t3_g2_t2

0x0c83,	// (0x000aebc0) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0c83,	// (0x000aebc0) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x000bd16d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x000bd16d) list_medium_line_x2_t3_g2_t

0x0c36,	// (0x000aeb73) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0c36,	// (0x000aeb73) list_medium_line_x2_t4_g4_g1

0x0cc0,	// (0x000aebfd) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0cc0,	// (0x000aebfd) list_medium_line_x2_t4_g4_g2

0x0c42,	// (0x000aeb7f) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0c42,	// (0x000aeb7f) list_medium_line_x2_t4_g4_g3

0x0ccc,	// (0x000aec09) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0ccc,	// (0x000aec09) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x000bd174) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x000bd174) list_medium_line_x2_t4_g4_g

0x0cd8,	// (0x000aec15) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0cd8,	// (0x000aec15) list_medium_line_x2_t4_g4_t1

0x0cf2,	// (0x000aec2f) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0cf2,	// (0x000aec2f) list_medium_line_x2_t4_g4_t2

0x0d08,	// (0x000aec45) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0d08,	// (0x000aec45) list_medium_line_x2_t4_g4_t3

0x0d1d,	// (0x000aec5a) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0d1d,	// (0x000aec5a) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x000bd17d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x000bd17d) list_medium_line_x2_t4_g4_t

0x0c36,	// (0x000aeb73) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0c36,	// (0x000aeb73) list_medium_line_x2_t2_g4_g1

0x0cc0,	// (0x000aebfd) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0cc0,	// (0x000aebfd) list_medium_line_x2_t2_g4_g2

0x0c42,	// (0x000aeb7f) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0c42,	// (0x000aeb7f) list_medium_line_x2_t2_g4_g3

0x0c4e,	// (0x000aeb8b) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0c4e,	// (0x000aeb8b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x000bd1e4) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x000bd1e4) list_medium_line_x2_t2_g4_g

0x1dd5,	// (0x000afd12) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1dd5,	// (0x000afd12) list_medium_line_x2_t2_g4_t1

0x0c83,	// (0x000aebc0) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0c83,	// (0x000aebc0) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x000bd1ed) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x000bd1ed) list_medium_line_x2_t2_g4_t

0x0c36,	// (0x000aeb73) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0c36,	// (0x000aeb73) list_medium_line_x2_t2_g3_g1

0x0c42,	// (0x000aeb7f) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0c42,	// (0x000aeb7f) list_medium_line_x2_t2_g3_g2

0x0c4e,	// (0x000aeb8b) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0c4e,	// (0x000aeb8b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x000bd15a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x000bd15a) list_medium_line_x2_t2_g3_g

0x1dea,	// (0x000afd27) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1dea,	// (0x000afd27) list_medium_line_x2_t2_g3_t1

0x0c83,	// (0x000aebc0) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0c83,	// (0x000aebc0) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x000bd1f2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x000bd1f2) list_medium_line_x2_t2_g3_t

0x1f49,	// (0x000afe86) main_sp_fs_list_pane_ParamLimits

0x1f49,	// (0x000afe86) main_sp_fs_list_pane

0xb0ba,	// (0x000b8ff7) sp_fs_scroll_pane_ParamLimits

0xb0ba,	// (0x000b8ff7) sp_fs_scroll_pane

0x1f55,	// (0x000afe92) list_medium_line_x2_t3_t1

0x1f65,	// (0x000afea2) list_medium_line_x2_t3_t2

0x1f73,	// (0x000afeb0) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x000bd23d) list_medium_line_x2_t3_t

0x1f81,	// (0x000afebe) list_medium_line_x3_t4_t1

0x1f91,	// (0x000afece) list_medium_line_x3_t4_t2

0x1f9f,	// (0x000afedc) list_medium_line_x3_t4_t3

0x1f73,	// (0x000afeb0) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x000bd244) list_medium_line_x3_t4_t

0x1fad,	// (0x000afeea) list_medium_line_x4_t5_t1

0x1fbd,	// (0x000afefa) list_medium_line_x4_t5_t2

0x1f9f,	// (0x000afedc) list_medium_line_x4_t5_t3

0x1fcb,	// (0x000aff08) list_medium_line_x4_t5_t4

0x1f73,	// (0x000afeb0) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x000bd24d) list_medium_line_x4_t5_t

0x0c36,	// (0x000aeb73) list_medium_line_t4_g4_g1_ParamLimits

0x0c36,	// (0x000aeb73) list_medium_line_t4_g4_g1

0x1fd9,	// (0x000aff16) list_medium_line_t4_g4_g2_ParamLimits

0x1fd9,	// (0x000aff16) list_medium_line_t4_g4_g2

0x1fe5,	// (0x000aff22) list_medium_line_t4_g4_g3_ParamLimits

0x1fe5,	// (0x000aff22) list_medium_line_t4_g4_g3

0x0c4e,	// (0x000aeb8b) list_medium_line_t4_g4_g4_ParamLimits

0x0c4e,	// (0x000aeb8b) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x000bd258) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x000bd258) list_medium_line_t4_g4_g

0x1ff1,	// (0x000aff2e) list_medium_line_t4_g4_t1_ParamLimits

0x1ff1,	// (0x000aff2e) list_medium_line_t4_g4_t1

0x2006,	// (0x000aff43) list_medium_line_t4_g4_t2_ParamLimits

0x2006,	// (0x000aff43) list_medium_line_t4_g4_t2

0x201b,	// (0x000aff58) list_medium_line_t4_g4_t3_ParamLimits

0x201b,	// (0x000aff58) list_medium_line_t4_g4_t3

0x0c83,	// (0x000aebc0) list_medium_line_t4_g4_t4_ParamLimits

0x0c83,	// (0x000aebc0) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x000bd261) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x000bd261) list_medium_line_t4_g4_t

0x20f6,	// (0x000b0033) chi_dic_find_pane_g1

0x3227,	// (0x000b1164) main_tport_pane

0x62ed,	// (0x000b422a) list_medium_line_plain_t1

0x639f,	// (0x000b42dc) list_medium_line_t2_g2_g1_ParamLimits

0x639f,	// (0x000b42dc) list_medium_line_t2_g2_g1

0x63ab,	// (0x000b42e8) list_medium_line_t2_g2_g2_ParamLimits

0x63ab,	// (0x000b42e8) list_medium_line_t2_g2_g2

0x0001,

0xf9e9,	// (0x000bd926) list_medium_line_t2_g2_g_ParamLimits

0xf9e9,	// (0x000bd926) list_medium_line_t2_g2_g

0x63b7,	// (0x000b42f4) list_medium_line_t2_g2_t1_ParamLimits

0x63b7,	// (0x000b42f4) list_medium_line_t2_g2_t1

0x63d1,	// (0x000b430e) list_medium_line_t2_g2_t2_ParamLimits

0x63d1,	// (0x000b430e) list_medium_line_t2_g2_t2

0x0001,

0xf9ee,	// (0x000bd92b) list_medium_line_t2_g2_t_ParamLimits

0xf9ee,	// (0x000bd92b) list_medium_line_t2_g2_t

0xa6c0,	// (0x000b85fd) aid_sp_fs_list_icon_a_sm

0xbe96,	// (0x000b9dd3) aid_sp_fs_list_icon_d

0xd2c3,	// (0x000bb200) aid_sp_fs_text_primary

0xd2cc,	// (0x000bb209) aid_sp_fs_text_secondary

0x6a6d,	// (0x000b49aa) list_medium_line

0x6a6d,	// (0x000b49aa) list_medium_line_g2

0x6a6d,	// (0x000b49aa) list_medium_line_g3

0x6a6d,	// (0x000b49aa) list_medium_line_plain

0x6a6d,	// (0x000b49aa) list_medium_line_plain_t2

0x6a6d,	// (0x000b49aa) list_medium_line_plain_t3

0x6a6d,	// (0x000b49aa) list_medium_line_right_icon

0x6a6d,	// (0x000b49aa) list_medium_line_right_iconx2

0x6a6d,	// (0x000b49aa) list_medium_line_t2

0x6a6d,	// (0x000b49aa) list_medium_line_t2_g2

0x6a6d,	// (0x000b49aa) list_medium_line_t2_g3

0x6a6d,	// (0x000b49aa) list_medium_line_t2_right_icon

0x6a6d,	// (0x000b49aa) list_medium_line_t2_right_iconx2

0x6a6d,	// (0x000b49aa) list_medium_line_t3

0x6a6d,	// (0x000b49aa) list_medium_line_t3_g2

0x6a6d,	// (0x000b49aa) list_medium_line_t3_g3

0x6a6d,	// (0x000b49aa) list_medium_line_t3_right_iconx2

0x6a76,	// (0x000b49b3) list_medium_line_t4_g4

0x6a7f,	// (0x000b49bc) list_medium_line_x2

0x6a7f,	// (0x000b49bc) list_medium_line_x2_t2_g2

0x6a7f,	// (0x000b49bc) list_medium_line_x2_t2_g3

0x6a7f,	// (0x000b49bc) list_medium_line_x2_t2_g4

0x6a7f,	// (0x000b49bc) list_medium_line_x2_t3

0x6a7f,	// (0x000b49bc) list_medium_line_x2_t3_g2

0x6a7f,	// (0x000b49bc) list_medium_line_x2_t3_g3

0x6a7f,	// (0x000b49bc) list_medium_line_x2_t3_g4

0x6a7f,	// (0x000b49bc) list_medium_line_x2_t4_g2

0x6a7f,	// (0x000b49bc) list_medium_line_x2_t4_g4

0x6a88,	// (0x000b49c5) list_medium_line_x3

0x6a88,	// (0x000b49c5) list_medium_line_x3_t4

0x6a88,	// (0x000b49c5) list_medium_line_x3_t4_g4

0x6a76,	// (0x000b49b3) list_medium_line_x4_t4

0x6a76,	// (0x000b49b3) list_medium_line_x4_t4_g7

0x6a76,	// (0x000b49b3) list_medium_line_x4_t5

0x6a91,	// (0x000b49ce) list_single_fs_dyc_pane_ParamLimits

0x6a91,	// (0x000b49ce) list_single_fs_dyc_pane

0x0c36,	// (0x000aeb73) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0c36,	// (0x000aeb73) list_medium_line_x4_t4_g7_g1

0x71f9,	// (0x000b5136) list_medium_line_x4_t4_g7_g2_ParamLimits

0x71f9,	// (0x000b5136) list_medium_line_x4_t4_g7_g2

0x7205,	// (0x000b5142) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7205,	// (0x000b5142) list_medium_line_x4_t4_g7_g3

0x7214,	// (0x000b5151) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7214,	// (0x000b5151) list_medium_line_x4_t4_g7_g4

0x7220,	// (0x000b515d) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7220,	// (0x000b515d) list_medium_line_x4_t4_g7_g5

0x722f,	// (0x000b516c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x722f,	// (0x000b516c) list_medium_line_x4_t4_g7_g6

0x723e,	// (0x000b517b) list_medium_line_x4_t4_g7_g7_ParamLimits

0x723e,	// (0x000b517b) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb9,	// (0x000bdaf6) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb9,	// (0x000bdaf6) list_medium_line_x4_t4_g7_g

0x724a,	// (0x000b5187) list_medium_line_x4_t4_g7_t1_ParamLimits

0x724a,	// (0x000b5187) list_medium_line_x4_t4_g7_t1

0x725f,	// (0x000b519c) list_medium_line_x4_t4_g7_t2_ParamLimits

0x725f,	// (0x000b519c) list_medium_line_x4_t4_g7_t2

0x7274,	// (0x000b51b1) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7274,	// (0x000b51b1) list_medium_line_x4_t4_g7_t3

0x7289,	// (0x000b51c6) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7289,	// (0x000b51c6) list_medium_line_x4_t4_g7_t4

0x729b,	// (0x000b51d8) list_medium_line_x4_t4_g7_t5_ParamLimits

0x729b,	// (0x000b51d8) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc8,	// (0x000bdb05) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc8,	// (0x000bdb05) list_medium_line_x4_t4_g7_t

0x72ad,	// (0x000b51ea) list_single_dyc_row_pane_ParamLimits

0x72ad,	// (0x000b51ea) list_single_dyc_row_pane

0x7b3b,	// (0x000b5a78) call5_gesture_pane_ParamLimits

0x7b3b,	// (0x000b5a78) call5_gesture_pane

0x7b91,	// (0x000b5ace) call5_windows_pane_ParamLimits

0x7b91,	// (0x000b5ace) call5_windows_pane

0x7bf7,	// (0x000b5b34) call5_swipe_1_pane_cp_ParamLimits

0x7bf7,	// (0x000b5b34) call5_swipe_1_pane_cp

0x7c03,	// (0x000b5b40) call5_swipe_2_pane_cp_ParamLimits

0x7c03,	// (0x000b5b40) call5_swipe_2_pane_cp

0xab25,	// (0x000b8a62) call5_image_pane_cp

0x7c0f,	// (0x000b5b4c) popup_call5_audio_first_window_cp_ParamLimits

0x7c0f,	// (0x000b5b4c) popup_call5_audio_first_window_cp

0xe623,	// (0x000bc560) call5_swipe_1_pane_g1_cp_ParamLimits

0xe623,	// (0x000bc560) call5_swipe_1_pane_g1_cp

0xe690,	// (0x000bc5cd) call5_swipe_1_pane_g2_cp

0xe63c,	// (0x000bc579) call5_swipe_1_pane_t1_cp_ParamLimits

0xe63c,	// (0x000bc579) call5_swipe_1_pane_t1_cp

0xe623,	// (0x000bc560) call5_swipe_2_pane_g1_cp_ParamLimits

0xe623,	// (0x000bc560) call5_swipe_2_pane_g1_cp

0xe698,	// (0x000bc5d5) call5_swipe_2_pane_g2_cp

0xe6a0,	// (0x000bc5dd) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6a0,	// (0x000bc5dd) call5_swipe_2_pane_t1_cp

0xbe7c,	// (0x000b9db9) main_sp_fs_email_pane

0xe6b5,	// (0x000bc5f2) main_sp_fs_listscroll_pane_te

0x7c1d,	// (0x000b5b5a) popup_sp_fs_action_menu_pane_ParamLimits

0x7c1d,	// (0x000b5b5a) popup_sp_fs_action_menu_pane

0xce1a,	// (0x000bad57) bg_sp_fs_ctrlbar_pane_g1

0xe6be,	// (0x000bc5fb) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6c7,	// (0x000bc604) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6d0,	// (0x000bc60d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xce1a,	// (0x000bad57) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcb6,	// (0x000bdbf3) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcbf9,	// (0x000bab36) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcbf9,	// (0x000bab36) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6d9,	// (0x000bc616) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6d9,	// (0x000bc616) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6e5,	// (0x000bc622) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6e5,	// (0x000bc622) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcbf,	// (0x000bdbfc) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcbf,	// (0x000bdbfc) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6f1,	// (0x000bc62e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6f1,	// (0x000bc62e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7c63,	// (0x000b5ba0) list_medium_line_t2_right_icon_g1

0x7c6b,	// (0x000b5ba8) list_medium_line_t2_right_icon_t1

0x7c7b,	// (0x000b5bb8) list_medium_line_t2_right_icon_t2

0x0001,

0xfcc4,	// (0x000bdc01) list_medium_line_t2_right_icon_t

0xc9da,	// (0x000ba917) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc9da,	// (0x000ba917) bg_sp_fs_ctrlbar_pane

0x7cda,	// (0x000b5c17) main_sp_fs_ctrlbar_button_pane_cp01

0x7ce4,	// (0x000b5c21) main_sp_fs_ctrlbar_ddmenu_pane

0xe745,	// (0x000bc682) main_sp_fs_ctrlbar_pane_g1

0xe751,	// (0x000bc68e) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcc9,	// (0x000bdc06) main_sp_fs_ctrlbar_pane_g

0x7d22,	// (0x000b5c5f) main_sp_fs_ctrlbar_pane_t1

0x7d61,	// (0x000b5c9e) main_sp_fs_ctrlbar_pane

0x7d85,	// (0x000b5cc2) main_sp_fs_listscroll_pane_te_cp01

0x7da5,	// (0x000b5ce2) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7da5,	// (0x000b5ce2) popup_sp_fs_action_menu_pane_cp01

0xbe7c,	// (0x000b9db9) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xbe7c,	// (0x000b9db9) bg_sp_fs_highlight_list_pane_cp01

0xa6d6,	// (0x000b8613) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa6d6,	// (0x000b8613) sp_fs_action_menu_list_gene_pane_g1

0xe792,	// (0x000bc6cf) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe792,	// (0x000bc6cf) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd7,	// (0x000bdc14) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd7,	// (0x000bdc14) sp_fs_action_menu_list_gene_pane_g

0xa6e5,	// (0x000b8622) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa6e5,	// (0x000b8622) sp_fs_action_menu_list_gene_pane_t1

0xa6fd,	// (0x000b863a) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa6fd,	// (0x000b863a) sp_fs_action_menu_list_gene_pane

0xe79f,	// (0x000bc6dc) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe79f,	// (0x000bc6dc) popup_sp_fs_action_menu_bg_pane

0xa720,	// (0x000b865d) sp_fs_action_menu_list_pane_ParamLimits

0xa720,	// (0x000b865d) sp_fs_action_menu_list_pane

0x7ddb,	// (0x000b5d18) sp_fs_scroll_pane_cp01_ParamLimits

0x7ddb,	// (0x000b5d18) sp_fs_scroll_pane_cp01

0x7e01,	// (0x000b5d3e) list_medium_line_plain_t2_t1

0x7e11,	// (0x000b5d4e) list_medium_line_plain_t2_t2

0x0001,

0xfcdc,	// (0x000bdc19) list_medium_line_plain_t2_t

0x7e21,	// (0x000b5d5e) list_medium_line_plain_t3_t1

0x7e31,	// (0x000b5d6e) list_medium_line_plain_t3_t2

0x7e3f,	// (0x000b5d7c) list_medium_line_plain_t3_t3

0x0002,

0xfce1,	// (0x000bdc1e) list_medium_line_plain_t3_t

0x0c36,	// (0x000aeb73) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0c36,	// (0x000aeb73) list_medium_line_x2_t2_g2_g1

0x0c4e,	// (0x000aeb8b) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0c4e,	// (0x000aeb8b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x000bd168) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x000bd168) list_medium_line_x2_t2_g2_g

0x1ff1,	// (0x000aff2e) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1ff1,	// (0x000aff2e) list_medium_line_x2_t2_g2_t1

0x0c83,	// (0x000aebc0) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0c83,	// (0x000aebc0) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce8,	// (0x000bdc25) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce8,	// (0x000bdc25) list_medium_line_x2_t2_g2_t

0x0c36,	// (0x000aeb73) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0c36,	// (0x000aeb73) list_medium_line_x2_t4_g2_g1

0x7e4d,	// (0x000b5d8a) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7e4d,	// (0x000b5d8a) list_medium_line_x2_t4_g2_g2

0x0001,

0xfced,	// (0x000bdc2a) list_medium_line_x2_t4_g2_g_ParamLimits

0xfced,	// (0x000bdc2a) list_medium_line_x2_t4_g2_g

0x7e5f,	// (0x000b5d9c) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7e5f,	// (0x000b5d9c) list_medium_line_x2_t4_g2_t1

0x7e79,	// (0x000b5db6) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7e79,	// (0x000b5db6) list_medium_line_x2_t4_g2_t2

0x7e8f,	// (0x000b5dcc) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7e8f,	// (0x000b5dcc) list_medium_line_x2_t4_g2_t3

0x0c83,	// (0x000aebc0) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0c83,	// (0x000aebc0) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcf2,	// (0x000bdc2f) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcf2,	// (0x000bdc2f) list_medium_line_x2_t4_g2_t

0x7ea4,	// (0x000b5de1) list_medium_line_t3_right_iconx2_g1

0x7c63,	// (0x000b5ba0) list_medium_line_t3_right_iconx2_g2

0x7eac,	// (0x000b5de9) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcfb,	// (0x000bdc38) list_medium_line_t3_right_iconx2_g

0x7eb6,	// (0x000b5df3) list_medium_line_t3_right_iconx2_t1

0x7ec6,	// (0x000b5e03) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd02,	// (0x000bdc3f) list_medium_line_t3_right_iconx2_t

0x0c36,	// (0x000aeb73) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0c36,	// (0x000aeb73) list_medium_line_x3_t4_g4_g1

0x0c42,	// (0x000aeb7f) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0c42,	// (0x000aeb7f) list_medium_line_x3_t4_g4_g2

0x1fd9,	// (0x000aff16) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1fd9,	// (0x000aff16) list_medium_line_x3_t4_g4_g3

0x7ed4,	// (0x000b5e11) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7ed4,	// (0x000b5e11) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd07,	// (0x000bdc44) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd07,	// (0x000bdc44) list_medium_line_x3_t4_g4_g

0x7ee0,	// (0x000b5e1d) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7ee0,	// (0x000b5e1d) list_medium_line_x3_t4_g4_t1

0x7ef7,	// (0x000b5e34) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7ef7,	// (0x000b5e34) list_medium_line_x3_t4_g4_t2

0x2006,	// (0x000aff43) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2006,	// (0x000aff43) list_medium_line_x3_t4_g4_t3

0x7f10,	// (0x000b5e4d) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f10,	// (0x000b5e4d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd10,	// (0x000bdc4d) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd10,	// (0x000bdc4d) list_medium_line_x3_t4_g4_t

0x7f2d,	// (0x000b5e6a) list_single_dyc_row_text_pane_t1_ParamLimits

0x7f2d,	// (0x000b5e6a) list_single_dyc_row_text_pane_t1

0x7f76,	// (0x000b5eb3) list_single_dyc_row_text_pane_t2_ParamLimits

0x7f76,	// (0x000b5eb3) list_single_dyc_row_text_pane_t2

0xa744,	// (0x000b8681) list_single_dyc_row_text_pane_t3_ParamLimits

0xa744,	// (0x000b8681) list_single_dyc_row_text_pane_t3

0x0005,

0xfd19,	// (0x000bdc56) list_single_dyc_row_text_pane_t_ParamLimits

0xfd19,	// (0x000bdc56) list_single_dyc_row_text_pane_t

0xa768,	// (0x000b86a5) list_single_dyc_row_pane_g1_ParamLimits

0xa768,	// (0x000b86a5) list_single_dyc_row_pane_g1

0xa774,	// (0x000b86b1) list_single_dyc_row_pane_g2_ParamLimits

0xa774,	// (0x000b86b1) list_single_dyc_row_pane_g2

0xa780,	// (0x000b86bd) list_single_dyc_row_pane_g3_ParamLimits

0xa780,	// (0x000b86bd) list_single_dyc_row_pane_g3

0xa78c,	// (0x000b86c9) list_single_dyc_row_pane_g4_ParamLimits

0xa78c,	// (0x000b86c9) list_single_dyc_row_pane_g4

0x0003,

0xfd26,	// (0x000bdc63) list_single_dyc_row_pane_g_ParamLimits

0xfd26,	// (0x000bdc63) list_single_dyc_row_pane_g

0xa798,	// (0x000b86d5) list_single_dyc_row_text_pane_ParamLimits

0xa798,	// (0x000b86d5) list_single_dyc_row_text_pane

0x95ed,	// (0x000b752a) bg_sp_fs_scroll_pane

0xe7ad,	// (0x000bc6ea) thumb_sp_fs_scroll_pane

0x639f,	// (0x000b42dc) list_medium_line_g1_ParamLimits

0x639f,	// (0x000b42dc) list_medium_line_g1

0x80ab,	// (0x000b5fe8) list_medium_line_t1_ParamLimits

0x80ab,	// (0x000b5fe8) list_medium_line_t1

0x0c36,	// (0x000aeb73) list_medium_line_x2_g1_ParamLimits

0x0c36,	// (0x000aeb73) list_medium_line_x2_g1

0x0c42,	// (0x000aeb7f) list_medium_line_x2_g2_ParamLimits

0x0c42,	// (0x000aeb7f) list_medium_line_x2_g2

0x0001,

0xfd2f,	// (0x000bdc6c) list_medium_line_x2_g_ParamLimits

0xfd2f,	// (0x000bdc6c) list_medium_line_x2_g

0xa7b7,	// (0x000b86f4) list_medium_line_x2_t1_ParamLimits

0xa7b7,	// (0x000b86f4) list_medium_line_x2_t1

0x0c36,	// (0x000aeb73) list_medium_line_x3_g1_ParamLimits

0x0c36,	// (0x000aeb73) list_medium_line_x3_g1

0x0c42,	// (0x000aeb7f) list_medium_line_x3_g2_ParamLimits

0x0c42,	// (0x000aeb7f) list_medium_line_x3_g2

0x0001,

0xfd2f,	// (0x000bdc6c) list_medium_line_x3_g_ParamLimits

0xfd2f,	// (0x000bdc6c) list_medium_line_x3_g

0xa7b7,	// (0x000b86f4) list_medium_line_x3_t1_ParamLimits

0xa7b7,	// (0x000b86f4) list_medium_line_x3_t1

0xe7b6,	// (0x000bc6f3) thumb_sp_fs_scroll_pane_g1

0xe7bf,	// (0x000bc6fc) thumb_sp_fs_scroll_pane_g2

0xe7c8,	// (0x000bc705) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd34,	// (0x000bdc71) thumb_sp_fs_scroll_pane_g

0xe7b6,	// (0x000bc6f3) bg_sp_fs_scroll_pane_g1

0xe7bf,	// (0x000bc6fc) bg_sp_fs_scroll_pane_g2

0xe7c8,	// (0x000bc705) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd34,	// (0x000bdc71) bg_sp_fs_scroll_pane_g

0x0c36,	// (0x000aeb73) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0c36,	// (0x000aeb73) list_medium_line_x2_t3_g4_g1

0x0cc0,	// (0x000aebfd) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0cc0,	// (0x000aebfd) list_medium_line_x2_t3_g4_g2

0x0c42,	// (0x000aeb7f) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0c42,	// (0x000aeb7f) list_medium_line_x2_t3_g4_g3

0x0c4e,	// (0x000aeb8b) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0c4e,	// (0x000aeb8b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x000bd1e4) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x000bd1e4) list_medium_line_x2_t3_g4_g

0x80c0,	// (0x000b5ffd) list_medium_line_x2_t3_g4_t1_ParamLimits

0x80c0,	// (0x000b5ffd) list_medium_line_x2_t3_g4_t1

0x80d6,	// (0x000b6013) list_medium_line_x2_t3_g4_t2_ParamLimits

0x80d6,	// (0x000b6013) list_medium_line_x2_t3_g4_t2

0x0c83,	// (0x000aebc0) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0c83,	// (0x000aebc0) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd3b,	// (0x000bdc78) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd3b,	// (0x000bdc78) list_medium_line_x2_t3_g4_t

0x639f,	// (0x000b42dc) list_medium_line_g2_g1_ParamLimits

0x639f,	// (0x000b42dc) list_medium_line_g2_g1

0x63ab,	// (0x000b42e8) list_medium_line_g2_g2_ParamLimits

0x63ab,	// (0x000b42e8) list_medium_line_g2_g2

0x0001,

0xf9e9,	// (0x000bd926) list_medium_line_g2_g_ParamLimits

0xf9e9,	// (0x000bd926) list_medium_line_g2_g

0x80f0,	// (0x000b602d) list_medium_line_g2_t1_ParamLimits

0x80f0,	// (0x000b602d) list_medium_line_g2_t1

0x639f,	// (0x000b42dc) list_medium_line_t3_g2_g1_ParamLimits

0x639f,	// (0x000b42dc) list_medium_line_t3_g2_g1

0x63ab,	// (0x000b42e8) list_medium_line_t3_g2_g2_ParamLimits

0x63ab,	// (0x000b42e8) list_medium_line_t3_g2_g2

0x0001,

0xf9e9,	// (0x000bd926) list_medium_line_t3_g2_g_ParamLimits

0xf9e9,	// (0x000bd926) list_medium_line_t3_g2_g

0x8105,	// (0x000b6042) list_medium_line_t3_g2_t1_ParamLimits

0x8105,	// (0x000b6042) list_medium_line_t3_g2_t1

0x811f,	// (0x000b605c) list_medium_line_t3_g2_t2_ParamLimits

0x811f,	// (0x000b605c) list_medium_line_t3_g2_t2

0x8135,	// (0x000b6072) list_medium_line_t3_g2_t3_ParamLimits

0x8135,	// (0x000b6072) list_medium_line_t3_g2_t3

0x0002,

0xfd42,	// (0x000bdc7f) list_medium_line_t3_g2_t_ParamLimits

0xfd42,	// (0x000bdc7f) list_medium_line_t3_g2_t

0x7c63,	// (0x000b5ba0) list_medium_line_right_icon_g1

0x814f,	// (0x000b608c) list_medium_line_right_icon_t1

0x639f,	// (0x000b42dc) list_medium_line_t2_g1_ParamLimits

0x639f,	// (0x000b42dc) list_medium_line_t2_g1

0x815d,	// (0x000b609a) list_medium_line_t2_t1_ParamLimits

0x815d,	// (0x000b609a) list_medium_line_t2_t1

0x8177,	// (0x000b60b4) list_medium_line_t2_t2_ParamLimits

0x8177,	// (0x000b60b4) list_medium_line_t2_t2

0x0001,

0xfd49,	// (0x000bdc86) list_medium_line_t2_t_ParamLimits

0xfd49,	// (0x000bdc86) list_medium_line_t2_t

0x639f,	// (0x000b42dc) list_medium_line_t3_g1_ParamLimits

0x639f,	// (0x000b42dc) list_medium_line_t3_g1

0x8190,	// (0x000b60cd) list_medium_line_t3_t1_ParamLimits

0x8190,	// (0x000b60cd) list_medium_line_t3_t1

0x81aa,	// (0x000b60e7) list_medium_line_t3_t2_ParamLimits

0x81aa,	// (0x000b60e7) list_medium_line_t3_t2

0x81c0,	// (0x000b60fd) list_medium_line_t3_t3_ParamLimits

0x81c0,	// (0x000b60fd) list_medium_line_t3_t3

0x0002,

0xfd4e,	// (0x000bdc8b) list_medium_line_t3_t_ParamLimits

0xfd4e,	// (0x000bdc8b) list_medium_line_t3_t

0x639f,	// (0x000b42dc) list_medium_line_g3_g1_ParamLimits

0x639f,	// (0x000b42dc) list_medium_line_g3_g1

0x81d5,	// (0x000b6112) list_medium_line_g3_g2_ParamLimits

0x81d5,	// (0x000b6112) list_medium_line_g3_g2

0x63ab,	// (0x000b42e8) list_medium_line_g3_g3_ParamLimits

0x63ab,	// (0x000b42e8) list_medium_line_g3_g3

0x0002,

0xfd55,	// (0x000bdc92) list_medium_line_g3_g_ParamLimits

0xfd55,	// (0x000bdc92) list_medium_line_g3_g

0x81e1,	// (0x000b611e) list_medium_line_g3_t1_ParamLimits

0x81e1,	// (0x000b611e) list_medium_line_g3_t1

0x639f,	// (0x000b42dc) list_medium_line_t2_g3_g1_ParamLimits

0x639f,	// (0x000b42dc) list_medium_line_t2_g3_g1

0x81d5,	// (0x000b6112) list_medium_line_t2_g3_g2_ParamLimits

0x81d5,	// (0x000b6112) list_medium_line_t2_g3_g2

0x63ab,	// (0x000b42e8) list_medium_line_t2_g3_g3_ParamLimits

0x63ab,	// (0x000b42e8) list_medium_line_t2_g3_g3

0x0002,

0xfd55,	// (0x000bdc92) list_medium_line_t2_g3_g_ParamLimits

0xfd55,	// (0x000bdc92) list_medium_line_t2_g3_g

0x81f6,	// (0x000b6133) list_medium_line_t2_g3_t1_ParamLimits

0x81f6,	// (0x000b6133) list_medium_line_t2_g3_t1

0x8210,	// (0x000b614d) list_medium_line_t2_g3_t2_ParamLimits

0x8210,	// (0x000b614d) list_medium_line_t2_g3_t2

0x0001,

0xfd5c,	// (0x000bdc99) list_medium_line_t2_g3_t_ParamLimits

0xfd5c,	// (0x000bdc99) list_medium_line_t2_g3_t

0x639f,	// (0x000b42dc) list_medium_line_t3_g3_g1_ParamLimits

0x639f,	// (0x000b42dc) list_medium_line_t3_g3_g1

0x81d5,	// (0x000b6112) list_medium_line_t3_g3_g2_ParamLimits

0x81d5,	// (0x000b6112) list_medium_line_t3_g3_g2

0x63ab,	// (0x000b42e8) list_medium_line_t3_g3_g3_ParamLimits

0x63ab,	// (0x000b42e8) list_medium_line_t3_g3_g3

0x0002,

0xfd55,	// (0x000bdc92) list_medium_line_t3_g3_g_ParamLimits

0xfd55,	// (0x000bdc92) list_medium_line_t3_g3_g

0x822a,	// (0x000b6167) list_medium_line_t3_g3_t1_ParamLimits

0x822a,	// (0x000b6167) list_medium_line_t3_g3_t1

0x8243,	// (0x000b6180) list_medium_line_t3_g3_t2_ParamLimits

0x8243,	// (0x000b6180) list_medium_line_t3_g3_t2

0x8259,	// (0x000b6196) list_medium_line_t3_g3_t3_ParamLimits

0x8259,	// (0x000b6196) list_medium_line_t3_g3_t3

0x0002,

0xfd61,	// (0x000bdc9e) list_medium_line_t3_g3_t_ParamLimits

0xfd61,	// (0x000bdc9e) list_medium_line_t3_g3_t

0x7ea4,	// (0x000b5de1) list_medium_line_right_iconx2_g1

0x7c63,	// (0x000b5ba0) list_medium_line_right_iconx2_g2

0x0001,

0xfd68,	// (0x000bdca5) list_medium_line_right_iconx2_g

0x8273,	// (0x000b61b0) list_medium_line_right_iconx2_t1

0x7ea4,	// (0x000b5de1) list_medium_line_t2_right_iconx2_g1

0x7c63,	// (0x000b5ba0) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd68,	// (0x000bdca5) list_medium_line_t2_right_iconx2_g

0x8281,	// (0x000b61be) list_medium_line_t2_right_iconx2_t1

0x8291,	// (0x000b61ce) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd6d,	// (0x000bdcaa) list_medium_line_t2_right_iconx2_t

0x82a1,	// (0x000b61de) list_medium_line_x4_t4_t1

0x82af,	// (0x000b61ec) list_medium_line_x4_t4_t2

0x82bf,	// (0x000b61fc) list_medium_line_x4_t4_t3

0x82cf,	// (0x000b620c) list_medium_line_x4_t4_t4

0x0003,

0xfd72,	// (0x000bdcaf) list_medium_line_x4_t4_t

0x8320,	// (0x000b625d) tport_appsw_pane_ParamLimits

0x8320,	// (0x000b625d) tport_appsw_pane

0x8337,	// (0x000b6274) tport_contact_pane_ParamLimits

0x8337,	// (0x000b6274) tport_contact_pane

0x834f,	// (0x000b628c) tport_listscroll_pane_ParamLimits

0x834f,	// (0x000b628c) tport_listscroll_pane

0x8363,	// (0x000b62a0) cell_tport_appsw_pane_ParamLimits

0x8363,	// (0x000b62a0) cell_tport_appsw_pane

0xd7f8,	// (0x000bb735) tport_appsw_pane_g1_ParamLimits

0xd7f8,	// (0x000bb735) tport_appsw_pane_g1

0xe7d1,	// (0x000bc70e) tport_contact_pane_g1

0xe7da,	// (0x000bc717) tport_contact_pane_t1

0xe7e8,	// (0x000bc725) tport_contact_pane_t2

0x0001,

0xfd7b,	// (0x000bdcb8) tport_contact_pane_t

0xe7f6,	// (0x000bc733) list_tport_pane

0xe7ff,	// (0x000bc73c) scroll_pane_cp_030

0x83ad,	// (0x000b62ea) cell_tport_appsw_pane_g1

0x83bd,	// (0x000b62fa) cell_tport_appsw_pane_t1

0x83cb,	// (0x000b6308) grid_highlight_pane_cp019

0x83d3,	// (0x000b6310) list_tport_double_graphic_pane_ParamLimits

0x83d3,	// (0x000b6310) list_tport_double_graphic_pane

0xbe7c,	// (0x000b9db9) list_highlight_pane_cp023_ParamLimits

0xbe7c,	// (0x000b9db9) list_highlight_pane_cp023

0x83ea,	// (0x000b6327) list_tport_double_graphic_pane_g1_ParamLimits

0x83ea,	// (0x000b6327) list_tport_double_graphic_pane_g1

0x83f7,	// (0x000b6334) list_tport_double_graphic_pane_t1_ParamLimits

0x83f7,	// (0x000b6334) list_tport_double_graphic_pane_t1

0x840c,	// (0x000b6349) list_tport_double_graphic_pane_t2_ParamLimits

0x840c,	// (0x000b6349) list_tport_double_graphic_pane_t2

0x0001,

0xfd87,	// (0x000bdcc4) list_tport_double_graphic_pane_t_ParamLimits

0xfd87,	// (0x000bdcc4) list_tport_double_graphic_pane_t

0x95ed,	// (0x000b752a) main_cale_note_pane

0x5ae9,	// (0x000b3a26) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5ae9,	// (0x000b3a26) cell_vitu2_function_top_wide_pane_cp01

0x7660,	// (0x000b559d) wait_bar_pane_cp05_ParamLimits

0xbe7c,	// (0x000b9db9) listscroll_cmail_pane

0xe808,	// (0x000bc745) list_cmail_pane

0x841e,	// (0x000b635b) list_cmail_body_pane

0x8435,	// (0x000b6372) list_single_cmail_header_caption_pane

0xe818,	// (0x000bc755) list_single_cmail_header_detail_pane_ParamLimits

0xe818,	// (0x000bc755) list_single_cmail_header_detail_pane

0xe84a,	// (0x000bc787) list_single_cmail_header_caption_pane_t1

0x8452,	// (0x000b638f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8452,	// (0x000b638f) list_single_cmail_header_detail_pane_g1

0xbe9e,	// (0x000b9ddb) list_single_cmail_header_detail_pane_g2_ParamLimits

0xbe9e,	// (0x000b9ddb) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd8c,	// (0x000bdcc9) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd8c,	// (0x000bdcc9) list_single_cmail_header_detail_pane_g

0xa7cd,	// (0x000b870a) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa7cd,	// (0x000b870a) list_single_cmail_header_detail_pane_t1

0xa82d,	// (0x000b876a) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa82d,	// (0x000b876a) list_single_cmail_header_editor_pane_bg

0xe409,	// (0x000bc346) list_cmail_body_pane_g1

0xe86e,	// (0x000bc7ab) list_cmail_body_pane_t1

0xd818,	// (0x000bb755) list_single_cmail_header_editor_pane_bg_g1

0xad97,	// (0x000b8cd4) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd828,	// (0x000bb765) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd820,	// (0x000bb75d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xda42,	// (0x000bb97f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd848,	// (0x000bb785) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd838,	// (0x000bb775) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd840,	// (0x000bb77d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad77,	// (0x000b8cb4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x846a,	// (0x000b63a7) calenote_gesture_pane_ParamLimits

0x846a,	// (0x000b63a7) calenote_gesture_pane

0x848a,	// (0x000b63c7) calenote_window_pane_ParamLimits

0x848a,	// (0x000b63c7) calenote_window_pane

0xe87c,	// (0x000bc7b9) popup_note_window_cp01

0x84a6,	// (0x000b63e3) calenote_swipe_1_pane_ParamLimits

0x84a6,	// (0x000b63e3) calenote_swipe_1_pane

0x7c03,	// (0x000b5b40) calenote_swipe_2_pane_ParamLimits

0x7c03,	// (0x000b5b40) calenote_swipe_2_pane

0xe623,	// (0x000bc560) calenote_swipe_1_pane_g1_ParamLimits

0xe623,	// (0x000bc560) calenote_swipe_1_pane_g1

0xe630,	// (0x000bc56d) calenote_swipe_1_pane_g2_ParamLimits

0xe630,	// (0x000bc56d) calenote_swipe_1_pane_g2

0x0001,

0xfcac,	// (0x000bdbe9) calenote_swipe_1_pane_g_ParamLimits

0xfcac,	// (0x000bdbe9) calenote_swipe_1_pane_g

0xe88e,	// (0x000bc7cb) calenote_swipe_1_pane_t1_ParamLimits

0xe88e,	// (0x000bc7cb) calenote_swipe_1_pane_t1

0xe623,	// (0x000bc560) calenote_swipe_2_pane_g1_ParamLimits

0xe623,	// (0x000bc560) calenote_swipe_2_pane_g1

0xe8ad,	// (0x000bc7ea) calenote_swipe_2_pane_g2_ParamLimits

0xe8ad,	// (0x000bc7ea) calenote_swipe_2_pane_g2

0x0001,

0xfd98,	// (0x000bdcd5) calenote_swipe_2_pane_g_ParamLimits

0xfd98,	// (0x000bdcd5) calenote_swipe_2_pane_g

0xe8b9,	// (0x000bc7f6) calenote_swipe_2_pane_t1_ParamLimits

0xe8b9,	// (0x000bc7f6) calenote_swipe_2_pane_t1

0x95ed,	// (0x000b752a) main_mup_navstr_pane

0x46d8,	// (0x000b2615) main_mup3_pane_t7_ParamLimits

0x46d8,	// (0x000b2615) main_mup3_pane_t7

0xa222,	// (0x000b815f) main_mp4_pane_g6_ParamLimits

0xa222,	// (0x000b815f) main_mp4_pane_g6

0xa3e2,	// (0x000b831f) main_image3_pane_t4_ParamLimits

0xa3e2,	// (0x000b831f) main_image3_pane_t4

0x84bb,	// (0x000b63f8) popup_navstr_preview_pane_ParamLimits

0x84bb,	// (0x000b63f8) popup_navstr_preview_pane

0x84cb,	// (0x000b6408) scroll_navstr_pane_ParamLimits

0x84cb,	// (0x000b6408) scroll_navstr_pane

0x95ed,	// (0x000b752a) bg_popup_preview_window_pane_cp04

0xe8e0,	// (0x000bc81d) popup_navstr_preview_pane_t1

0x84df,	// (0x000b641c) scroll_navstr_pane_g1_ParamLimits

0x84df,	// (0x000b641c) scroll_navstr_pane_g1

0x84f3,	// (0x000b6430) scroll_navstr_pane_t1_ParamLimits

0x84f3,	// (0x000b6430) scroll_navstr_pane_t1

0xe885,	// (0x000bc7c2) bg_button_pane_cp014

0xe885,	// (0x000bc7c2) bg_button_pane_cp030

0x7ae1,	// (0x000b5a1e) list_double_fisheye_pane_g4_ParamLimits

0x7ae1,	// (0x000b5a1e) list_double_fisheye_pane_g4

0x7aed,	// (0x000b5a2a) list_double_fisheye_pane_g5_ParamLimits

0x7aed,	// (0x000b5a2a) list_double_fisheye_pane_g5

0xb0ba,	// (0x000b8ff7) sp_fs_scroll_pane_cp03

0xe745,	// (0x000bc682) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe751,	// (0x000bc68e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc9,	// (0x000bdc06) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7d22,	// (0x000b5c5f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe810,	// (0x000bc74d) sp_fs_scroll_pane_cp02

0xaa81,	// (0x000b89be) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa81,	// (0x000b89be) popup_sp_fs_calendar_preview_list_single_pane

0x95ed,	// (0x000b752a) main_cam6_pano_pane

0x95f7,	// (0x000b7534) main_mup3_pane_ParamLimits

0x95ed,	// (0x000b752a) main_phacti_pane

0x7531,	// (0x000b546e) bg_button_pane_cp11

0x754b,	// (0x000b5488) main_mobtv_info_pane_g2_ParamLimits

0x754b,	// (0x000b5488) main_mobtv_info_pane_g2

0x0001,

0xfc29,	// (0x000bdb66) main_mobtv_info_pane_g_ParamLimits

0xfc29,	// (0x000bdb66) main_mobtv_info_pane_g

0x7728,	// (0x000b5665) sc_clock_pane_t5_ParamLimits

0x7728,	// (0x000b5665) sc_clock_pane_t5

0x795c,	// (0x000b5899) main_radioblah_pane_g1_ParamLimits

0xe56f,	// (0x000bc4ac) main_radioblah_pane_t3_ParamLimits

0xe56f,	// (0x000bc4ac) main_radioblah_pane_t3

0xe587,	// (0x000bc4c4) main_radioblah_pane_t4_ParamLimits

0xe587,	// (0x000bc4c4) main_radioblah_pane_t4

0x7984,	// (0x000b58c1) main_radioblah_text_pane_ParamLimits

0x7984,	// (0x000b58c1) main_radioblah_text_pane

0x7996,	// (0x000b58d3) main_radioblah_info_pane_g1_ParamLimits

0x7a2f,	// (0x000b596c) main_radioblah_info_pane_t4_ParamLimits

0x7a2f,	// (0x000b596c) main_radioblah_info_pane_t4

0xbe7c,	// (0x000b9db9) main_sp_fs_calendar_pane

0x850a,	// (0x000b6447) main_phacti_pane_g1

0x8512,	// (0x000b644f) phacti_note_pane_ParamLimits

0x8512,	// (0x000b644f) phacti_note_pane

0xe8f7,	// (0x000bc834) phacti_term_pane_ParamLimits

0xe8f7,	// (0x000bc834) phacti_term_pane

0xe90c,	// (0x000bc849) phacti_note_pane_t1_ParamLimits

0xe90c,	// (0x000bc849) phacti_note_pane_t1

0xa844,	// (0x000b8781) phacti_term_pane_g1

0xa84c,	// (0x000b8789) phacti_term_pane_t1_ParamLimits

0xa84c,	// (0x000b8789) phacti_term_pane_t1

0xe923,	// (0x000bc860) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe92b,	// (0x000bc868) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfda2,	// (0x000bdcdf) popup_sp_fs_calendar_preview_list_single_pane_g

0xe933,	// (0x000bc870) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe933,	// (0x000bc870) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe949,	// (0x000bc886) aid_popup_sp_fs_bg_corner_pane

0xce1a,	// (0x000bad57) popup_sp_fs_calendar_preview_bg_pane_g1

0x95ed,	// (0x000b752a) popup_sp_fs_calendar_preview_bg_pane

0xe951,	// (0x000bc88e) popup_sp_fs_calendar_preview_list_pane

0xc9da,	// (0x000ba917) bg_main_sp_fs_cale_pane_ParamLimits

0xc9da,	// (0x000ba917) bg_main_sp_fs_cale_pane

0xa87f,	// (0x000b87bc) listscroll_cale_mrui_pane_ParamLimits

0xa87f,	// (0x000b87bc) listscroll_cale_mrui_pane

0xa894,	// (0x000b87d1) listscroll_sp_fs_schedule_track_pane

0xa89d,	// (0x000b87da) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa89d,	// (0x000b87da) main_sp_fs_ctrlbar_pane_cp01

0xe959,	// (0x000bc896) main_sp_fs_ribbon_pane

0xa8b0,	// (0x000b87ed) popup_sp_fs_cale_preview_window

0x8587,	// (0x000b64c4) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8587,	// (0x000b64c4) list_single_sp_fs_schedule_track_pane

0xbe7c,	// (0x000b9db9) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xbe7c,	// (0x000b9db9) bg_sp_fs_highlight_list_pane_cp03

0x859b,	// (0x000b64d8) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x859b,	// (0x000b64d8) list_single_sp_fs_schedule_track_pane_g1

0x85a7,	// (0x000b64e4) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x85a7,	// (0x000b64e4) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda7,	// (0x000bdce4) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda7,	// (0x000bdce4) list_single_sp_fs_schedule_track_pane_g

0x85b3,	// (0x000b64f0) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x85b3,	// (0x000b64f0) list_single_sp_fs_schedule_track_pane_t1

0x85d5,	// (0x000b6512) sp_fs_schedule_track_pane_ParamLimits

0x85d5,	// (0x000b6512) sp_fs_schedule_track_pane

0xe961,	// (0x000bc89e) sp_fs_schedule_track_pane_g1

0xe969,	// (0x000bc8a6) sp_fs_schedule_track_pane_g2

0xe971,	// (0x000bc8ae) sp_fs_schedule_track_pane_g3

0xe979,	// (0x000bc8b6) sp_fs_schedule_track_pane_g4

0xe981,	// (0x000bc8be) sp_fs_schedule_track_pane_g5

0x0004,

0xfdac,	// (0x000bdce9) sp_fs_schedule_track_pane_g

0xd818,	// (0x000bb755) bg_sp_fs_schedule_viewer_highlight_g1

0xad97,	// (0x000b8cd4) bg_sp_fs_schedule_viewer_highlight_g2

0xd820,	// (0x000bb75d) bg_sp_fs_schedule_viewer_highlight_g3

0xd828,	// (0x000bb765) bg_sp_fs_schedule_viewer_highlight_g4

0xda42,	// (0x000bb97f) bg_sp_fs_schedule_viewer_highlight_g5

0xd838,	// (0x000bb775) bg_sp_fs_schedule_viewer_highlight_g6

0xd840,	// (0x000bb77d) bg_sp_fs_schedule_viewer_highlight_g7

0xd848,	// (0x000bb785) bg_sp_fs_schedule_viewer_highlight_g8

0xad77,	// (0x000b8cb4) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb7,	// (0x000bdcf4) bg_sp_fs_schedule_viewer_highlight_g

0x95ed,	// (0x000b752a) bg_main_sp_fs_ribbon_pane

0x85ea,	// (0x000b6527) main_sp_fs_ribbon_pane_g1

0xe989,	// (0x000bc8c6) main_sp_fs_ribbon_pane_t1

0x85f3,	// (0x000b6530) main_sp_fs_ribbon_pane_t2

0xe998,	// (0x000bc8d5) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdca,	// (0x000bdd07) main_sp_fs_ribbon_pane_t

0xe9a7,	// (0x000bc8e4) main_sp_fs_ribbon_scheduler_pane

0xe9af,	// (0x000bc8ec) bg_main_sp_fs_ribbon_pane_g1

0xe9b8,	// (0x000bc8f5) bg_main_sp_fs_ribbon_pane_g2

0xe9c1,	// (0x000bc8fe) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdd1,	// (0x000bdd0e) bg_main_sp_fs_ribbon_pane_g

0xe9c9,	// (0x000bc906) main_sp_fs_ribbon_scheduler_pane_g1

0xe9d2,	// (0x000bc90f) main_sp_fs_ribbon_scheduler_pane_g2

0xe9db,	// (0x000bc918) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdd8,	// (0x000bdd15) main_sp_fs_ribbon_scheduler_pane_g

0xe9e4,	// (0x000bc921) list_cale_mrui_pane

0x8602,	// (0x000b653f) sp_fs_scroll_pane_cp07_ParamLimits

0x8602,	// (0x000b653f) sp_fs_scroll_pane_cp07

0x861e,	// (0x000b655b) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x861e,	// (0x000b655b) bg_sp_fs_schedule_viewer_highlight

0xe9f1,	// (0x000bc92e) list_single_sp_fs_schedule_track_pane_cp01

0xe9f9,	// (0x000bc936) list_sp_fs_schedule_track_pane

0xea01,	// (0x000bc93e) sp_fs_scroll_pane_cp06_ParamLimits

0xea01,	// (0x000bc93e) sp_fs_scroll_pane_cp06

0xce1a,	// (0x000bad57) bgmain_sp_fs_calendar_pane_g1

0x8630,	// (0x000b656d) list_single_cale_mrui_pane_ParamLimits

0x8630,	// (0x000b656d) list_single_cale_mrui_pane

0xa8c2,	// (0x000b87ff) list_single_cale_mrui_row_pane_ParamLimits

0xa8c2,	// (0x000b87ff) list_single_cale_mrui_row_pane

0xa8cf,	// (0x000b880c) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa8cf,	// (0x000b880c) list_single_cale_mrui_row_pane_g1

0xa907,	// (0x000b8844) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa907,	// (0x000b8844) list_single_cale_mrui_row_pane_t1

0x8653,	// (0x000b6590) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8653,	// (0x000b6590) list_single_cale_mrui_row_pane_t2

0xa919,	// (0x000b8856) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa919,	// (0x000b8856) list_single_cale_mrui_row_pane_t3

0xa948,	// (0x000b8885) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa948,	// (0x000b8885) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde6,	// (0x000bdd23) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde6,	// (0x000bdd23) list_single_cale_mrui_row_pane_t

0x86b9,	// (0x000b65f6) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x86b9,	// (0x000b65f6) list_single_cmail_header_editor_pane_bg_cp01

0x86dd,	// (0x000b661a) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x86dd,	// (0x000b661a) list_single_cmail_header_editor_pane_bg_cp02

0x86fd,	// (0x000b663a) main_radioblah_text_pane_t1_ParamLimits

0x86fd,	// (0x000b663a) main_radioblah_text_pane_t1

0xea20,	// (0x000bc95d) cam6_indi_pane_cp01

0xea28,	// (0x000bc965) cam6_mode_pane_cp01

0xea30,	// (0x000bc96d) cam6_pano_pane

0xea39,	// (0x000bc976) cam6_zoom_pane_cp01

0xea43,	// (0x000bc980) cam6_pano_image_pane

0xea4c,	// (0x000bc989) cam6_pano_pane_g1

0xe409,	// (0x000bc346) cam6_pano_pane_g2

0xea55,	// (0x000bc992) cam6_pano_pane_g3

0xea5e,	// (0x000bc99b) cam6_pano_pane_g4

0xd3fe,	// (0x000bb33b) cam6_pano_pane_g5

0xea67,	// (0x000bc9a4) cam6_pano_pane_g6

0xea6f,	// (0x000bc9ac) cam6_pano_pane_g7

0xea77,	// (0x000bc9b4) cam6_pano_pane_g8

0xea80,	// (0x000bc9bd) cam6_pano_pane_g9

0x0008,

0xfdef,	// (0x000bdd2c) cam6_pano_pane_g

0x95ed,	// (0x000b752a) main_browser_tag_pane

0xe8d8,	// (0x000bc815) grid_navstr_albumart_pane

0xea8b,	// (0x000bc9c8) cell_navstr_albumart_pane_ParamLimits

0xea8b,	// (0x000bc9c8) cell_navstr_albumart_pane

0xeaa7,	// (0x000bc9e4) cell_navstr_albumart_pane_g1

0xc7e7,	// (0x000ba724) cell_navstr_albumart_pane_g2

0xc7f7,	// (0x000ba734) cell_navstr_albumart_pane_g3

0xc7ef,	// (0x000ba72c) cell_navstr_albumart_pane_g4

0x0003,

0xfe02,	// (0x000bdd3f) cell_navstr_albumart_pane_g

0x8718,	// (0x000b6655) bt_list_pane_ParamLimits

0x8718,	// (0x000b6655) bt_list_pane

0x872e,	// (0x000b666b) bt_list_pane_t1

0x873d,	// (0x000b667a) bt_list_pane_t2

0x0001,

0xfe0b,	// (0x000bdd48) bt_list_pane_t

0x95ed,	// (0x000b752a) main_cale_prevew_pane

0x874c,	// (0x000b6689) popup_cale_preview_window_ParamLimits

0x874c,	// (0x000b6689) popup_cale_preview_window

0xbe7c,	// (0x000b9db9) bg_popup_preview_window_pane_cp05_ParamLimits

0xbe7c,	// (0x000b9db9) bg_popup_preview_window_pane_cp05

0xeaaf,	// (0x000bc9ec) list_cale_preview_pane_ParamLimits

0xeaaf,	// (0x000bc9ec) list_cale_preview_pane

0x8769,	// (0x000b66a6) list_double_cale_preview_pane_ParamLimits

0x8769,	// (0x000b66a6) list_double_cale_preview_pane

0x877d,	// (0x000b66ba) list_single_cale_preview_pane_ParamLimits

0x877d,	// (0x000b66ba) list_single_cale_preview_pane

0x8795,	// (0x000b66d2) list_single_cale_preview_pane_g1

0x879d,	// (0x000b66da) list_single_cale_preview_pane_t1_ParamLimits

0x879d,	// (0x000b66da) list_single_cale_preview_pane_t1

0x87b2,	// (0x000b66ef) list_double_cale_preview_pane_g1

0x87ba,	// (0x000b66f7) list_double_cale_preview_pane_t1_ParamLimits

0x87ba,	// (0x000b66f7) list_double_cale_preview_pane_t1

0x87cf,	// (0x000b670c) list_double_cale_preview_pane_t2_ParamLimits

0x87cf,	// (0x000b670c) list_double_cale_preview_pane_t2

0x0001,

0xfe10,	// (0x000bdd4d) list_double_cale_preview_pane_t_ParamLimits

0xfe10,	// (0x000bdd4d) list_double_cale_preview_pane_t

0x95ed,	// (0x000b752a) main_ezdial_pane

0xbe7c,	// (0x000b9db9) main_sp_fs_email_pane_ParamLimits

0x7c8d,	// (0x000b5bca) cmail_ddmenu_btn01_pane_ParamLimits

0x7c8d,	// (0x000b5bca) cmail_ddmenu_btn01_pane

0x7ca0,	// (0x000b5bdd) cmail_ddmenu_btn02_pane_ParamLimits

0x7ca0,	// (0x000b5bdd) cmail_ddmenu_btn02_pane

0x7cc3,	// (0x000b5c00) cmail_ddmenu_btn03_pane_ParamLimits

0x7cc3,	// (0x000b5c00) cmail_ddmenu_btn03_pane

0x7d61,	// (0x000b5c9e) main_sp_fs_ctrlbar_pane_ParamLimits

0x7d85,	// (0x000b5cc2) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x841e,	// (0x000b635b) list_cmail_body_pane_ParamLimits

0xe858,	// (0x000bc795) bg_button_pane_cp12

0xe861,	// (0x000bc79e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe861,	// (0x000bc79e) list_single_cmail_header_detail_pane_g3

0xa809,	// (0x000b8746) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa809,	// (0x000b8746) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd93,	// (0x000bdcd0) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd93,	// (0x000bdcd0) list_single_cmail_header_detail_pane_t

0xa861,	// (0x000b879e) phacti_term_pane_t2_ParamLimits

0xa861,	// (0x000b879e) phacti_term_pane_t2

0x0001,

0xfd9d,	// (0x000bdcda) phacti_term_pane_t_ParamLimits

0xfd9d,	// (0x000bdcda) phacti_term_pane_t

0xeabb,	// (0x000bc9f8) aid_size_list_single_double

0x87e7,	// (0x000b6724) popup_ezdial_listscroll_window

0x8803,	// (0x000b6740) popup_number_entry_window_cp01

0xab25,	// (0x000b8a62) bg_popup_call_pane_cp09

0xeac7,	// (0x000bca04) ezdial_list_pane

0xeacf,	// (0x000bca0c) scroll_pane_cp23

0xc9da,	// (0x000ba917) bg_button_pane_cp028_ParamLimits

0xc9da,	// (0x000ba917) bg_button_pane_cp028

0x8811,	// (0x000b674e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8811,	// (0x000b674e) cmail_ddmenu_btn01_pane_g1

0x8820,	// (0x000b675d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8820,	// (0x000b675d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe15,	// (0x000bdd52) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe15,	// (0x000bdd52) cmail_ddmenu_btn01_pane_g

0xead7,	// (0x000bca14) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xead7,	// (0x000bca14) cmail_ddmenu_btn01_pane_t1

0xc9da,	// (0x000ba917) bg_button_pane_cp029_ParamLimits

0xc9da,	// (0x000ba917) bg_button_pane_cp029

0x8830,	// (0x000b676d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8830,	// (0x000b676d) cmail_ddmenu_btn02_pane_g1

0x884b,	// (0x000b6788) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x884b,	// (0x000b6788) cmail_ddmenu_btn02_pane_t1

0xbe7c,	// (0x000b9db9) bg_button_pane_cp031_ParamLimits

0xbe7c,	// (0x000b9db9) bg_button_pane_cp031

0x8830,	// (0x000b676d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8830,	// (0x000b676d) cmail_ddmenu_btn03_pane_g1

0x884b,	// (0x000b6788) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x884b,	// (0x000b6788) cmail_ddmenu_btn03_pane_t1

0x52b9,	// (0x000b31f6) cell_dialer2_keypad_pane_t1_ParamLimits

0x52d3,	// (0x000b3210) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x52d3,	// (0x000b3210) cell_dialer2_keypad_pane_t1_copy1

0x7344,	// (0x000b5281) ncimui_group_button_pane

0xbe7c,	// (0x000b9db9) main_sp_fs_calendar_pane_ParamLimits

0x8435,	// (0x000b6372) list_single_cmail_header_caption_pane_ParamLimits

0xa876,	// (0x000b87b3) aid_recal_txt_sm_pane

0x95ed,	// (0x000b752a) mian_recal_day_pane

0xa8b0,	// (0x000b87ed) popup_sp_fs_cale_preview_window_ParamLimits

0xeaec,	// (0x000bca29) list_recal_day_pane

0xa995,	// (0x000b88d2) list_single_recal_day_pane_ParamLimits

0xa995,	// (0x000b88d2) list_single_recal_day_pane

0xeb13,	// (0x000bca50) list_single_recal_day_pane_g1_ParamLimits

0xeb13,	// (0x000bca50) list_single_recal_day_pane_g1

0xa9a7,	// (0x000b88e4) list_single_recal_day_pane_g2_ParamLimits

0xa9a7,	// (0x000b88e4) list_single_recal_day_pane_g2

0xa9b3,	// (0x000b88f0) list_single_recal_day_pane_g3_ParamLimits

0xa9b3,	// (0x000b88f0) list_single_recal_day_pane_g3

0x8872,	// (0x000b67af) list_single_recal_day_pane_g4_ParamLimits

0x8872,	// (0x000b67af) list_single_recal_day_pane_g4

0xa9bf,	// (0x000b88fc) list_single_recal_day_pane_g5_ParamLimits

0xa9bf,	// (0x000b88fc) list_single_recal_day_pane_g5

0xa9cb,	// (0x000b8908) list_single_recal_day_pane_g6_ParamLimits

0xa9cb,	// (0x000b8908) list_single_recal_day_pane_g6

0x0004,

0xfe24,	// (0x000bdd61) list_single_recal_day_pane_g_ParamLimits

0xfe24,	// (0x000bdd61) list_single_recal_day_pane_g

0xa9df,	// (0x000b891c) list_single_recal_day_pane_t1

0xa9f1,	// (0x000b892e) list_single_recal_day_pane_t2

0x0001,

0xfe2f,	// (0x000bdd6c) list_single_recal_day_pane_t

0x888a,	// (0x000b67c7) ncimui_query_button_pane_ParamLimits

0x888a,	// (0x000b67c7) ncimui_query_button_pane

0x889a,	// (0x000b67d7) ncimui_query_button_pane_t1_ParamLimits

0x889a,	// (0x000b67d7) ncimui_query_button_pane_t1

0xeb1f,	// (0x000bca5c) ncimui_query_button_pane_t2_ParamLimits

0xeb1f,	// (0x000bca5c) ncimui_query_button_pane_t2

0x0001,

0xfe34,	// (0x000bdd71) ncimui_query_button_pane_t_ParamLimits

0xfe34,	// (0x000bdd71) ncimui_query_button_pane_t

0x88ad,	// (0x000b67ea) query_button_pane_ParamLimits

0x88ad,	// (0x000b67ea) query_button_pane

0x95ed,	// (0x000b752a) bg_button_pane_cp0028

0xeb32,	// (0x000bca6f) query_button_pane_t1

0x3227,	// (0x000b1164) main_tport_pane_ParamLimits

0x82df,	// (0x000b621c) bg_popup_window_pane_cp01_ParamLimits

0x82df,	// (0x000b621c) bg_popup_window_pane_cp01

0x82f8,	// (0x000b6235) heading_pane_cp08_ParamLimits

0x82f8,	// (0x000b6235) heading_pane_cp08

0x830b,	// (0x000b6248) heading_pane_cp07_ParamLimits

0x830b,	// (0x000b6248) heading_pane_cp07

0x83ad,	// (0x000b62ea) cell_tport_appsw_pane_g2

0x0002,

0xfd80,	// (0x000bdcbd) cell_tport_appsw_pane_g

0x9f7e,	// (0x000b7ebb) input_candi_list_open_g1

0xaf5a,	// (0x000b8e97) list_cale_time_pane_g6_ParamLimits

0xaf5a,	// (0x000b8e97) list_cale_time_pane_g6

0x4003,	// (0x000b1f40) aid_size_touch_calib_1_ParamLimits

0x4003,	// (0x000b1f40) aid_size_touch_calib_1

0x4015,	// (0x000b1f52) aid_size_touch_calib_2_ParamLimits

0x4015,	// (0x000b1f52) aid_size_touch_calib_2

0x402d,	// (0x000b1f6a) aid_size_touch_calib_3_ParamLimits

0x402d,	// (0x000b1f6a) aid_size_touch_calib_3

0x404b,	// (0x000b1f88) aid_size_touch_calib_4_ParamLimits

0x404b,	// (0x000b1f88) aid_size_touch_calib_4

0x4063,	// (0x000b1fa0) main_touch_calib_button_group_pane_ParamLimits

0x4063,	// (0x000b1fa0) main_touch_calib_button_group_pane

0x407b,	// (0x000b1fb8) main_touch_calib_pane_g1_ParamLimits

0x408d,	// (0x000b1fca) main_touch_calib_pane_g2_ParamLimits

0x409f,	// (0x000b1fdc) main_touch_calib_pane_g3_ParamLimits

0x40b1,	// (0x000b1fee) main_touch_calib_pane_g4_ParamLimits

0xf736,	// (0x000bd673) main_touch_calib_pane_g_ParamLimits

0x40c3,	// (0x000b2000) main_touch_calib_pane_t1_ParamLimits

0x40dd,	// (0x000b201a) main_touch_calib_pane_t2_ParamLimits

0x40f7,	// (0x000b2034) main_touch_calib_pane_t3_ParamLimits

0x410b,	// (0x000b2048) main_touch_calib_pane_t4_ParamLimits

0x4121,	// (0x000b205e) main_touch_calib_pane_t5_ParamLimits

0xf73f,	// (0x000bd67c) main_touch_calib_pane_t_ParamLimits

0xd141,	// (0x000bb07e) list_single_fp_cale_pane_g3_ParamLimits

0xd141,	// (0x000bb07e) list_single_fp_cale_pane_g3

0x95f7,	// (0x000b7534) bg_button_pane_cp012_ParamLimits

0x95f7,	// (0x000b7534) bg_vkb2_func_pane_cp03_ParamLimits

0x6355,	// (0x000b4292) cell_vitu2_function_top_pane_g1_ParamLimits

0x95f7,	// (0x000b7534) bg_vkb2_func_pane_cp04_ParamLimits

0x72cf,	// (0x000b520c) main_ncimui_button_group_pane_ParamLimits

0x72cf,	// (0x000b520c) main_ncimui_button_group_pane

0x732f,	// (0x000b526c) main_ncimui_pane_t3_ParamLimits

0x732f,	// (0x000b526c) main_ncimui_pane_t3

0xe8ee,	// (0x000bc82b) phacti_button_group_pane

0xeabb,	// (0x000bc9f8) aid_size_list_single_double_ParamLimits

0x87e7,	// (0x000b6724) popup_ezdial_listscroll_window_ParamLimits

0x8803,	// (0x000b6740) popup_number_entry_window_cp01_ParamLimits

0x88c0,	// (0x000b67fd) phacti_button_pane_ParamLimits

0x88c0,	// (0x000b67fd) phacti_button_pane

0x95ed,	// (0x000b752a) bg_button_pane_cp14

0xeb40,	// (0x000bca7d) phacti_button_pane_t1

0x88d1,	// (0x000b680e) main_touch_calib_button_pane_ParamLimits

0x88d1,	// (0x000b680e) main_touch_calib_button_pane

0x9d8f,	// (0x000b7ccc) bg_button_pane_cp18_ParamLimits

0x9d8f,	// (0x000b7ccc) bg_button_pane_cp18

0xeb4e,	// (0x000bca8b) main_touch_calib_button_pane_t1_ParamLimits

0xeb4e,	// (0x000bca8b) main_touch_calib_button_pane_t1

0xeb64,	// (0x000bcaa1) main_touch_calib_button_pane_t2_ParamLimits

0xeb64,	// (0x000bcaa1) main_touch_calib_button_pane_t2

0x0001,

0xfe39,	// (0x000bdd76) main_touch_calib_button_pane_t_ParamLimits

0xfe39,	// (0x000bdd76) main_touch_calib_button_pane_t

0x95ed,	// (0x000b752a) cell_ncimui_button_pane

0x95ed,	// (0x000b752a) bg_button_pane_cp032

0xeb82,	// (0x000bcabf) cell_ncimui_button_pane_t1

0xa3c0,	// (0x000b82fd) image3_infobar_pane_ParamLimits

0xa3c0,	// (0x000b82fd) image3_infobar_pane

0x7754,	// (0x000b5691) fs_bigclock_status_pane_ParamLimits

0x7754,	// (0x000b5691) fs_bigclock_status_pane

0x7761,	// (0x000b569e) main_fs_bigclock_clock_pane_ParamLimits

0x7761,	// (0x000b569e) main_fs_bigclock_clock_pane

0x7793,	// (0x000b56d0) main_fs_bigclock_indi_pane_ParamLimits

0x7793,	// (0x000b56d0) main_fs_bigclock_indi_pane

0x77d3,	// (0x000b5710) main_fs_bigclock_swipe_pane_ParamLimits

0x77d3,	// (0x000b5710) main_fs_bigclock_swipe_pane

0x95ed,	// (0x000b752a) main_fs_clock_dumped_data

0x781f,	// (0x000b575c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x781f,	// (0x000b575c) list_single_fs_bigclock_indicator_pane_g1

0x7838,	// (0x000b5775) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7838,	// (0x000b5775) list_single_fs_bigclock_indicator_pane_g2

0x7852,	// (0x000b578f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7852,	// (0x000b578f) list_single_fs_bigclock_indicator_pane_g3

0x786c,	// (0x000b57a9) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x786c,	// (0x000b57a9) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc5d,	// (0x000bdb9a) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc5d,	// (0x000bdb9a) list_single_fs_bigclock_indicator_pane_g

0x789b,	// (0x000b57d8) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x789b,	// (0x000b57d8) list_single_fs_bigclock_indicator_pane_t1

0x78c3,	// (0x000b5800) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x78c3,	// (0x000b5800) list_single_fs_bigclock_indicator_pane_t2

0x78eb,	// (0x000b5828) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x78eb,	// (0x000b5828) list_single_fs_bigclock_indicator_pane_t3

0x7913,	// (0x000b5850) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7913,	// (0x000b5850) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc68,	// (0x000bdba5) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc68,	// (0x000bdba5) list_single_fs_bigclock_indicator_pane_t

0xeb90,	// (0x000bcacd) image3_infobar_fav_pane_ParamLimits

0xeb90,	// (0x000bcacd) image3_infobar_fav_pane

0xeba0,	// (0x000bcadd) image3_infobar_loc_pane_ParamLimits

0xeba0,	// (0x000bcadd) image3_infobar_loc_pane

0xebb6,	// (0x000bcaf3) image3_infobar_time_pane_ParamLimits

0xebb6,	// (0x000bcaf3) image3_infobar_time_pane

0xce1a,	// (0x000bad57) image3_infobar_time_pane_g1

0xebc6,	// (0x000bcb03) image3_infobar_time_pane_t1

0xce1a,	// (0x000bad57) image3_infobar_loc_pane_g1

0xebd4,	// (0x000bcb11) image3_infobar_loc_pane_g2

0x0001,

0xfe3e,	// (0x000bdd7b) image3_infobar_loc_pane_g

0xebdc,	// (0x000bcb19) image3_infobar_loc_pane_t1

0xce1a,	// (0x000bad57) image3_infobar_fav_pane_g1

0xebea,	// (0x000bcb27) image3_infobar_fav_pane_g2

0x0001,

0xfe43,	// (0x000bdd80) image3_infobar_fav_pane_g

0xebf2,	// (0x000bcb2f) fs_bigclock_status_battery_pane

0xebfb,	// (0x000bcb38) fs_bigclock_status_signal_pane

0xec04,	// (0x000bcb41) fs_bigclock_status_title_pane

0xec0d,	// (0x000bcb4a) fs_bigclock_status_signal_pane_g1

0xec16,	// (0x000bcb53) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe48,	// (0x000bdd85) fs_bigclock_status_signal_pane_g

0xec1e,	// (0x000bcb5b) fs_bigclock_status_battery_pane_g1

0xec27,	// (0x000bcb64) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe4d,	// (0x000bdd8a) fs_bigclock_status_battery_pane_g

0xec2f,	// (0x000bcb6c) fs_bigclock_status_title_pane_t1

0x88e6,	// (0x000b6823) main_fs_bigclock_clock_pane_g1

0x88e6,	// (0x000b6823) main_fs_bigclock_clock_pane_g2

0x88f9,	// (0x000b6836) main_fs_bigclock_clock_pane_g3

0x88f9,	// (0x000b6836) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe52,	// (0x000bdd8f) main_fs_bigclock_clock_pane_g

0x8910,	// (0x000b684d) main_fs_bigclock_clock_pane_t1

0x8926,	// (0x000b6863) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe5b,	// (0x000bdd98) main_fs_bigclock_clock_pane_t

0xec3d,	// (0x000bcb7a) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec3d,	// (0x000bcb7a) list_single_fs_bigclock_indicator_pane

0xec4e,	// (0x000bcb8b) list_single_fs_bigclock_pane_ParamLimits

0xec4e,	// (0x000bcb8b) list_single_fs_bigclock_pane

0xec74,	// (0x000bcbb1) main_fs_bigclock_indicator_pane_t1

0xec83,	// (0x000bcbc0) list_single_fs_bigclock_pane_g1

0xec8b,	// (0x000bcbc8) list_single_fs_bigclock_pane_t1

0xce1a,	// (0x000bad57) main_fs_bigclock_swipe_pane_g1

0xecce,	// (0x000bcc0b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe6c,	// (0x000bdda9) main_fs_bigclock_swipe_pane_g

0xecd6,	// (0x000bcc13) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecd6,	// (0x000bcc13) main_fs_bigclock_swipe_pane_t1

0x2030,	// (0x000aff6d) call_type_pane_ParamLimits

0x95ed,	// (0x000b752a) main_btmg_pane

0xa8fb,	// (0x000b8838) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa8fb,	// (0x000b8838) list_single_cale_mrui_row_pane_g2

0x0002,

0xfddf,	// (0x000bdd1c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfddf,	// (0x000bdd1c) list_single_cale_mrui_row_pane_g

0xa983,	// (0x000b88c0) list_recal_vselct_arw_lo_pane

0xeb0b,	// (0x000bca48) list_recal_vselct_arw_up_pane

0xa98b,	// (0x000b88c8) list_recal_vselct_pane

0x8988,	// (0x000b68c5) btmg_button_pane

0x8992,	// (0x000b68cf) main_btmg_pane_g1

0x95ed,	// (0x000b752a) bg_button_pane_cp044

0xecf3,	// (0x000bcc30) btmg_button_pane_t1

0xc9c6,	// (0x000ba903) aid_listscroll_gen

0xbe7c,	// (0x000b9db9) main_cntbar_detail_pane

0xe808,	// (0x000bc745) list_cmail_folder_pane

0xb0ba,	// (0x000b8ff7) sp_fs_scroll_pane_cp03_ParamLimits

0xaa03,	// (0x000b8940) list_single_fs_dyc_pane_cp01_ParamLimits

0xaa03,	// (0x000b8940) list_single_fs_dyc_pane_cp01

0xed01,	// (0x000bcc3e) aid_size_cmail_indent

0xaa1d,	// (0x000b895a) list_single_dyc_row_pane_cp01

0x89d0,	// (0x000b690d) cntbar_detail_list_pane_ParamLimits

0x89d0,	// (0x000b690d) cntbar_detail_list_pane

0x8a22,	// (0x000b695f) main_cntbar_detail_cont_pane_ParamLimits

0x8a22,	// (0x000b695f) main_cntbar_detail_cont_pane

0xb0ba,	// (0x000b8ff7) scroll_pane_cp032_ParamLimits

0xb0ba,	// (0x000b8ff7) scroll_pane_cp032

0x8a36,	// (0x000b6973) cntbar_detail_list_event_pane_ParamLimits

0x8a36,	// (0x000b6973) cntbar_detail_list_event_pane

0x89e2,	// (0x000b691f) cntbar_detail_list_shct_pane

0xade5,	// (0x000b8d22) aid_list_gen

0xed0a,	// (0x000bcc47) aid_scroll

0xed13,	// (0x000bcc50) aid_size_touch_scroll_bar

0x6a7f,	// (0x000b49bc) aid_list_double

0x6a6d,	// (0x000b49aa) aid_list_single

0x6a6d,	// (0x000b49aa) aid_list_single_lg

0x8a46,	// (0x000b6983) aid_list_z_g_a_sm

0x8a4e,	// (0x000b698b) aid_list_z_g_d

0x8a56,	// (0x000b6993) aid_txt_z_prm

0x8a64,	// (0x000b69a1) aid_txt_z_prm_cp01

0x8a72,	// (0x000b69af) aid_txt_z_sec

0x8a80,	// (0x000b69bd) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8a80,	// (0x000b69bd) main_cntbar_detail_cont_pane_g1

0x8a94,	// (0x000b69d1) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8a94,	// (0x000b69d1) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe71,	// (0x000bddae) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe71,	// (0x000bddae) main_cntbar_detail_cont_pane_g

0xed1c,	// (0x000bcc59) main_cntbar_detail_cont_pane_t1

0xed2a,	// (0x000bcc67) main_cntbar_detail_cont_pane_t2

0xed38,	// (0x000bcc75) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe76,	// (0x000bddb3) main_cntbar_detail_cont_pane_t

0x8aa4,	// (0x000b69e1) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8aa4,	// (0x000b69e1) cell_cntbar_detail_list_shct_pane

0xed46,	// (0x000bcc83) cntbar_detail_list_shct_pane_g1

0xed4f,	// (0x000bcc8c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe7d,	// (0x000bddba) cntbar_detail_list_shct_pane_g

0x8ab6,	// (0x000b69f3) cntbar_detail_list_event_pane_g1_ParamLimits

0x8ab6,	// (0x000b69f3) cntbar_detail_list_event_pane_g1

0x8ac2,	// (0x000b69ff) cntbar_detail_list_event_pane_g2_ParamLimits

0x8ac2,	// (0x000b69ff) cntbar_detail_list_event_pane_g2

0x0005,

0xfe82,	// (0x000bddbf) cntbar_detail_list_event_pane_g_ParamLimits

0xfe82,	// (0x000bddbf) cntbar_detail_list_event_pane_g

0x8b30,	// (0x000b6a6d) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b30,	// (0x000b6a6d) cntbar_detail_list_event_pane_t1

0x8b45,	// (0x000b6a82) cntbar_detail_list_event_pane_t2_ParamLimits

0x8b45,	// (0x000b6a82) cntbar_detail_list_event_pane_t2

0x0002,

0xfe8f,	// (0x000bddcc) cntbar_detail_list_event_pane_t_ParamLimits

0xfe8f,	// (0x000bddcc) cntbar_detail_list_event_pane_t

0xce1a,	// (0x000bad57) cell_cntbar_detail_list_shct_pane_g1

0xb53f,	// (0x000b947c) navi_pane_mv_g3

0xbe7c,	// (0x000b9db9) main_cntbar_detail_pane_ParamLimits

0x95ed,	// (0x000b752a) main_notif_wgt_pane

0xa1b0,	// (0x000b80ed) aid_tch_main_mp4_pane_g4

0xa3b8,	// (0x000b82f5) popup_slider_window_cp02

0xa979,	// (0x000b88b6) list_recal_day_event_pane

0x899c,	// (0x000b68d9) cntbar_detail_btn_pane_ParamLimits

0x899c,	// (0x000b68d9) cntbar_detail_btn_pane

0x89b5,	// (0x000b68f2) cntbar_detail_btn_pane_cp01_ParamLimits

0x89b5,	// (0x000b68f2) cntbar_detail_btn_pane_cp01

0x89e2,	// (0x000b691f) cntbar_detail_list_shct_pane_ParamLimits

0x89f2,	// (0x000b692f) cntbar_detail_pane_g1_ParamLimits

0x89f2,	// (0x000b692f) cntbar_detail_pane_g1

0x8a06,	// (0x000b6943) cntbar_detail_pane_t1_ParamLimits

0x8a06,	// (0x000b6943) cntbar_detail_pane_t1

0x8ace,	// (0x000b6a0b) cntbar_detail_list_event_pane_g3_ParamLimits

0x8ace,	// (0x000b6a0b) cntbar_detail_list_event_pane_g3

0x8ae6,	// (0x000b6a23) cntbar_detail_list_event_pane_g4_ParamLimits

0x8ae6,	// (0x000b6a23) cntbar_detail_list_event_pane_g4

0x8afe,	// (0x000b6a3b) cntbar_detail_list_event_pane_g5_ParamLimits

0x8afe,	// (0x000b6a3b) cntbar_detail_list_event_pane_g5

0x8b16,	// (0x000b6a53) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b16,	// (0x000b6a53) cntbar_detail_list_event_pane_g6

0x8b5a,	// (0x000b6a97) cntbar_detail_list_event_pane_t3_ParamLimits

0x8b5a,	// (0x000b6a97) cntbar_detail_list_event_pane_t3

0x8b6c,	// (0x000b6aa9) popup_notif_wgt_window_ParamLimits

0x8b6c,	// (0x000b6aa9) popup_notif_wgt_window

0x8b85,	// (0x000b6ac2) popup_submenu_window_cp01_ParamLimits

0x8b85,	// (0x000b6ac2) popup_submenu_window_cp01

0xab25,	// (0x000b8a62) bg_popup_window_pane_cp10

0xed58,	// (0x000bcc95) listscroll_notif_wgt_pane

0xed6a,	// (0x000bcca7) list_notif_wgt_window

0xed73,	// (0x000bccb0) scroll_pane_cp033

0x8b99,	// (0x000b6ad6) list_notif_wgt_row_pane_ParamLimits

0x8b99,	// (0x000b6ad6) list_notif_wgt_row_pane

0xed7c,	// (0x000bccb9) aid_size_list_notif_wgt_del

0xed89,	// (0x000bccc6) list_notif_wgt_row_pane_g1

0xed95,	// (0x000bccd2) list_notif_wgt_row_pane_g2

0xeda4,	// (0x000bcce1) list_notif_wgt_row_pane_g3

0x0002,

0xfe96,	// (0x000bddd3) list_notif_wgt_row_pane_g

0xedb1,	// (0x000bccee) list_notif_wgt_row_pane_t1

0xedc7,	// (0x000bcd04) list_notif_wgt_row_pane_t2

0xedd9,	// (0x000bcd16) list_notif_wgt_row_pane_t3

0x0002,

0xfe9d,	// (0x000bddda) list_notif_wgt_row_pane_t

0xda5c,	// (0x000bb999) list_recal_day_event_pane_g1

0xedeb,	// (0x000bcd28) list_recal_day_event_pane_t1

0x95ed,	// (0x000b752a) bg_button_pane_cp045

0x8ba9,	// (0x000b6ae6) cntbar_detail_btn_pane_t1

0xc9da,	// (0x000ba917) main_callh_pane_ParamLimits

0xc9da,	// (0x000ba917) main_callh_pane

0x95ed,	// (0x000b752a) main_coverflow0_pane

0x95ed,	// (0x000b752a) main_wgtman_pane

0x77f4,	// (0x000b5731) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x77f4,	// (0x000b5731) main_fs_bigclock_unlock_btn_pane

0x83a5,	// (0x000b62e2) bg_button_pane_cp16

0x83b5,	// (0x000b62f2) cell_tport_appsw_pane_g3

0x8bb7,	// (0x000b6af4) cf0_flow_pane_ParamLimits

0x8bb7,	// (0x000b6af4) cf0_flow_pane

0xedfa,	// (0x000bcd37) listscroll_cf0_pane

0xee05,	// (0x000bcd42) main_cf0_pane_g1

0x8bcc,	// (0x000b6b09) main_cf0_pane_t1_ParamLimits

0x8bcc,	// (0x000b6b09) main_cf0_pane_t1

0x8be3,	// (0x000b6b20) main_cf0_pane_t2_ParamLimits

0x8be3,	// (0x000b6b20) main_cf0_pane_t2

0x0001,

0xfea9,	// (0x000bdde6) main_cf0_pane_t_ParamLimits

0xfea9,	// (0x000bdde6) main_cf0_pane_t

0xee17,	// (0x000bcd54) scroll_pane_cp11

0x8bfa,	// (0x000b6b37) cf0_flow_pane_g1

0x8c06,	// (0x000b6b43) cf0_flow_pane_g2

0x0001,

0xfeae,	// (0x000bddeb) cf0_flow_pane_g

0x8c12,	// (0x000b6b4f) cf0_flow_pane_t1

0x95ed,	// (0x000b752a) main_call6_pane

0x95ed,	// (0x000b752a) main_calllock_pane

0x8c24,	// (0x000b6b61) call6_btn_grp_pane_ParamLimits

0x8c24,	// (0x000b6b61) call6_btn_grp_pane

0x8c3e,	// (0x000b6b7b) call6_pane_g1_ParamLimits

0x8c3e,	// (0x000b6b7b) call6_pane_g1

0x8c57,	// (0x000b6b94) popup_call6_1st_window_ParamLimits

0x8c57,	// (0x000b6b94) popup_call6_1st_window

0x8c6b,	// (0x000b6ba8) popup_call6_2nd_window_ParamLimits

0x8c6b,	// (0x000b6ba8) popup_call6_2nd_window

0x8c7f,	// (0x000b6bbc) cell_call6_btn_pane_ParamLimits

0x8c7f,	// (0x000b6bbc) cell_call6_btn_pane

0xab25,	// (0x000b8a62) bg_popup_call2_in_pane_cp03

0xee22,	// (0x000bcd5f) popup_call6_1st_window_g1

0xee2a,	// (0x000bcd67) popup_call6_1st_window_g2

0xee32,	// (0x000bcd6f) popup_call6_1st_window_g3

0x0002,

0xfeb3,	// (0x000bddf0) popup_call6_1st_window_g

0xee3a,	// (0x000bcd77) popup_call6_1st_window_t1

0xee49,	// (0x000bcd86) popup_call6_1st_window_t2

0xee59,	// (0x000bcd96) popup_call6_1st_window_t3

0x0002,

0xfeba,	// (0x000bddf7) popup_call6_1st_window_t

0xab25,	// (0x000b8a62) bg_popup_call2_in_pane_cp04

0xee22,	// (0x000bcd5f) popup_call6_2nd_window_g1

0xee2a,	// (0x000bcd67) popup_call6_2nd_window_g2

0xee32,	// (0x000bcd6f) popup_call6_2nd_window_g3

0x0002,

0xfeb3,	// (0x000bddf0) popup_call6_2nd_window_g

0xee3a,	// (0x000bcd77) popup_call6_2nd_window_t1

0xf09d,	// (0x000bcfda) bg_button_pane_cp15

0xaa26,	// (0x000b8963) cell_call6_btn_pane_g1

0xaa2f,	// (0x000b896c) cell_call6_btn_pane_t1

0x8c93,	// (0x000b6bd0) listscroll_wgtman_pane_ParamLimits

0x8c93,	// (0x000b6bd0) listscroll_wgtman_pane

0x8cb4,	// (0x000b6bf1) wgtman_btn_pane_ParamLimits

0x8cb4,	// (0x000b6bf1) wgtman_btn_pane

0xb351,	// (0x000b928e) aid_scroll_copy1

0xee69,	// (0x000bcda6) list_wgtman_pane

0x8cf7,	// (0x000b6c34) wgtman_btn_pane_g1_ParamLimits

0x8cf7,	// (0x000b6c34) wgtman_btn_pane_g1

0x8d23,	// (0x000b6c60) wgtman_btn_pane_t1_ParamLimits

0x8d23,	// (0x000b6c60) wgtman_btn_pane_t1

0xee73,	// (0x000bcdb0) wgtman_btn_pane_t2_ParamLimits

0xee73,	// (0x000bcdb0) wgtman_btn_pane_t2

0x0001,

0xfec1,	// (0x000bddfe) wgtman_btn_pane_t_ParamLimits

0xfec1,	// (0x000bddfe) wgtman_btn_pane_t

0x8d60,	// (0x000b6c9d) listrow_wgtman_pane_ParamLimits

0x8d60,	// (0x000b6c9d) listrow_wgtman_pane

0x8d74,	// (0x000b6cb1) listrow_wgtman_pane_g1

0x8d81,	// (0x000b6cbe) listrow_wgtman_pane_g2

0x0001,

0xfec6,	// (0x000bde03) listrow_wgtman_pane_g

0x8d9f,	// (0x000b6cdc) listrow_wgtman_pane_t1

0x8db7,	// (0x000b6cf4) listrow_wgtman_pane_t2

0x0001,

0xfecb,	// (0x000bde08) listrow_wgtman_pane_t

0x8ddd,	// (0x000b6d1a) wait_bar_pane_cp09

0xee8a,	// (0x000bcdc7) main_calllock_btn_pane

0xee94,	// (0x000bcdd1) main_calllock_pane_g1

0x95ed,	// (0x000b752a) bg_button_pane_cp17

0xeea0,	// (0x000bcddd) main_calllock_btn_pane_g1

0xeea9,	// (0x000bcde6) main_calllock_btn_pane_t1

0x95ed,	// (0x000b752a) main_dialer3_pane

0x95ed,	// (0x000b752a) main_fmrd2_pane

0xce1a,	// (0x000bad57) main_fs_bigclock_unlock_btn_pane_g1

0x8df7,	// (0x000b6d34) main_fs_bigclock_unlock_btn_pane_t1

0x8e05,	// (0x000b6d42) area_fmrd2_info_pane_ParamLimits

0x8e05,	// (0x000b6d42) area_fmrd2_info_pane

0x8e16,	// (0x000b6d53) area_fmrd2_visual_pane_ParamLimits

0x8e16,	// (0x000b6d53) area_fmrd2_visual_pane

0x8e24,	// (0x000b6d61) fmrd2_indi_pane_ParamLimits

0x8e24,	// (0x000b6d61) fmrd2_indi_pane

0x8e31,	// (0x000b6d6e) area_fmrd2_visual_pane_g1

0x8e39,	// (0x000b6d76) area_fmrd2_visual_pane_t1

0x8e49,	// (0x000b6d86) area_fmrd2_visual_pane_t2

0x8e59,	// (0x000b6d96) area_fmrd2_visual_pane_t3

0x0002,

0xfed5,	// (0x000bde12) area_fmrd2_visual_pane_t

0x8e69,	// (0x000b6da6) area_fmrd2_info_pane_g1

0x8e71,	// (0x000b6dae) area_fmrd2_info_pane_t1

0x8e81,	// (0x000b6dbe) area_fmrd2_info_pane_t2

0x8e91,	// (0x000b6dce) area_fmrd2_info_pane_t3

0x8ea1,	// (0x000b6dde) area_fmrd2_info_pane_t4

0x0003,

0xfedc,	// (0x000bde19) area_fmrd2_info_pane_t

0x8eb1,	// (0x000b6dee) fmrd2_indi_pane_t1

0x8ec1,	// (0x000b6dfe) fmrd2_indi_pane_t2

0x8ed1,	// (0x000b6e0e) fmrd2_indi_pane_t3

0x0002,

0xfee5,	// (0x000bde22) fmrd2_indi_pane_t

0x787d,	// (0x000b57ba) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x787d,	// (0x000b57ba) list_single_fs_bigclock_indicator_pane_g5

0x7932,	// (0x000b586f) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7932,	// (0x000b586f) list_single_fs_bigclock_indicator_pane_t5

0x8526,	// (0x000b6463) aid_cell_bcale_month_pane_ParamLimits

0x8526,	// (0x000b6463) aid_cell_bcale_month_pane

0x8544,	// (0x000b6481) bcale_month_pane_ParamLimits

0x8544,	// (0x000b6481) bcale_month_pane

0x8568,	// (0x000b64a5) bcale_preview_pane_ParamLimits

0x8568,	// (0x000b64a5) bcale_preview_pane

0xec8b,	// (0x000bcbc8) list_single_fs_bigclock_pane_t1_ParamLimits

0xecaa,	// (0x000bcbe7) list_single_fs_bigclock_pane_t2_ParamLimits

0xecaa,	// (0x000bcbe7) list_single_fs_bigclock_pane_t2

0x0001,

0xfe67,	// (0x000bdda4) list_single_fs_bigclock_pane_t_ParamLimits

0xfe67,	// (0x000bdda4) list_single_fs_bigclock_pane_t

0x8def,	// (0x000b6d2c) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfed0,	// (0x000bde0d) main_fs_bigclock_unlock_btn_pane_g

0x8ee1,	// (0x000b6e1e) aid_dia3_key_size_ParamLimits

0x8ee1,	// (0x000b6e1e) aid_dia3_key_size

0x8ef5,	// (0x000b6e32) aid_dia3_listrow_size_ParamLimits

0x8ef5,	// (0x000b6e32) aid_dia3_listrow_size

0x8f0f,	// (0x000b6e4c) dia3_keypad_fun_pane_ParamLimits

0x8f0f,	// (0x000b6e4c) dia3_keypad_fun_pane

0x8f2b,	// (0x000b6e68) dia3_keypad_num_pane_ParamLimits

0x8f2b,	// (0x000b6e68) dia3_keypad_num_pane

0x8f47,	// (0x000b6e84) dia3_listscroll_pane_ParamLimits

0x8f47,	// (0x000b6e84) dia3_listscroll_pane

0x8f5d,	// (0x000b6e9a) dia3_numentry_pane_ParamLimits

0x8f5d,	// (0x000b6e9a) dia3_numentry_pane

0xeeb8,	// (0x000bcdf5) dia3_list_pane

0x8f76,	// (0x000b6eb3) scroll_pane_cp12

0x95ed,	// (0x000b752a) bg_dia3_numentry_pane

0x8f81,	// (0x000b6ebe) dia3_numentry_pane_t1

0x8f90,	// (0x000b6ecd) cell_dia3_key_num_pane

0x8f98,	// (0x000b6ed5) cell_dia3_key0_fun_pane_ParamLimits

0x8f98,	// (0x000b6ed5) cell_dia3_key0_fun_pane

0x8fac,	// (0x000b6ee9) cell_dia3_key1_fun_pane_ParamLimits

0x8fac,	// (0x000b6ee9) cell_dia3_key1_fun_pane

0x8fc3,	// (0x000b6f00) dia3_listrow_pane

0xe2c5,	// (0x000bc202) bg_dia3_numentry_pane_g1

0x95ed,	// (0x000b752a) bg_button_pane_cp21

0x8fd5,	// (0x000b6f12) cell_dia3_key_num_pane_t1

0x8fe3,	// (0x000b6f20) cell_dia3_key_num_pane_t2

0x8ff2,	// (0x000b6f2f) cell_dia3_key_num_pane_t3

0x9001,	// (0x000b6f3e) cell_dia3_key_num_pane_t4

0x0003,

0xfeec,	// (0x000bde29) cell_dia3_key_num_pane_t

0x95ed,	// (0x000b752a) bg_button_pane_cp19

0x9010,	// (0x000b6f4d) cell_dia3_key0_fun_pane_g1

0x95ed,	// (0x000b752a) bg_button_pane_cp20

0x9010,	// (0x000b6f4d) cell_dia3_key1_fun_pane_g1

0x9018,	// (0x000b6f55) area_left_week_number_pane

0x9026,	// (0x000b6f63) area_top_day_name_pane

0x9039,	// (0x000b6f76) frame_month_view_pane

0xeec3,	// (0x000bce00) grid_month_view_pane

0x904e,	// (0x000b6f8b) cell_top_day_name_pane_ParamLimits

0x904e,	// (0x000b6f8b) cell_top_day_name_pane

0x907d,	// (0x000b6fba) cell_area_left_week_number_pane_ParamLimits

0x907d,	// (0x000b6fba) cell_area_left_week_number_pane

0x9093,	// (0x000b6fd0) cell_month_view_pane_ParamLimits

0x9093,	// (0x000b6fd0) cell_month_view_pane

0xeed1,	// (0x000bce0e) frm_month_g1

0x90c4,	// (0x000b7001) frm_month_g2

0x90d7,	// (0x000b7014) frm_month_g3

0x90ea,	// (0x000b7027) frm_month_g4

0x90fd,	// (0x000b703a) frm_month_g5

0x9110,	// (0x000b704d) frm_month_g6

0x9125,	// (0x000b7062) frm_month_g7

0xeede,	// (0x000bce1b) frm_month_g8

0x913a,	// (0x000b7077) frm_month_g9

0x914a,	// (0x000b7087) frm_month_g10

0x915a,	// (0x000b7097) frm_month_g11

0x916a,	// (0x000b70a7) frm_month_g12

0x917c,	// (0x000b70b9) frm_month_g13

0x9190,	// (0x000b70cd) frm_month_g14

0x91a4,	// (0x000b70e1) frm_month_g15

0x91b8,	// (0x000b70f5) frm_month_g16

0x000f,

0xfef5,	// (0x000bde32) frm_month_g

0xeeeb,	// (0x000bce28) cell_top_day_name_pane_t1

0x91cc,	// (0x000b7109) cell_area_left_week_number_pane_g1

0x91d8,	// (0x000b7115) cell_area_left_week_number_pane_t1

0xd041,	// (0x000baf7e) cell_month_view_pane_g1

0x91eb,	// (0x000b7128) cell_month_view_pane_t1

0x95ed,	// (0x000b752a) main_fps_pane

0xe70b,	// (0x000bc648) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe70b,	// (0x000bc648) cmail_ddmenu_btn02_pane_cp1

0xe727,	// (0x000bc664) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe727,	// (0x000bc664) cmail_ddmenu_btn02_pane_cp2

0x883f,	// (0x000b677c) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x883f,	// (0x000b677c) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe1a,	// (0x000bdd57) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe1a,	// (0x000bdd57) cmail_ddmenu_btn02_pane_g

0x8860,	// (0x000b679d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8860,	// (0x000b679d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe1f,	// (0x000bdd5c) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe1f,	// (0x000bdd5c) cmail_ddmenu_btn02_pane_t

0x91fe,	// (0x000b713b) fps_text_pane_ParamLimits

0x91fe,	// (0x000b713b) fps_text_pane

0x9215,	// (0x000b7152) main_fps_pane_g1_ParamLimits

0x9215,	// (0x000b7152) main_fps_pane_g1

0x922d,	// (0x000b716a) wait_bar_pane_cp010_ParamLimits

0x922d,	// (0x000b716a) wait_bar_pane_cp010

0x9240,	// (0x000b717d) fps_text_pane_t1_ParamLimits

0x9240,	// (0x000b717d) fps_text_pane_t1

0xd7b5,	// (0x000bb6f2) cam4_image_uncrop_pane_g1

0xd7be,	// (0x000bb6fb) cam4_image_uncrop_pane_g2

0x5801,	// (0x000b373e) cam4_image_uncrop_pane_g3

0x580a,	// (0x000b3747) cam4_image_uncrop_pane_g4

0x0003,

0xf8d7,	// (0x000bd814) cam4_image_uncrop_pane_g

0x8fc3,	// (0x000b6f00) dia3_listrow_pane_ParamLimits

0x95ed,	// (0x000b752a) main_phob2_pane

0x8378,	// (0x000b62b5) cell_tport_appsw_pane_cp02_ParamLimits

0x8378,	// (0x000b62b5) cell_tport_appsw_pane_cp02

0x838c,	// (0x000b62c9) cell_tport_appsw_pane_cp03_ParamLimits

0x838c,	// (0x000b62c9) cell_tport_appsw_pane_cp03

0x95ed,	// (0x000b752a) phob2_contact_card_pane

0x95ed,	// (0x000b752a) phob2_listscroll_pane

0xeefe,	// (0x000bce3b) phob2_list_pane

0xef06,	// (0x000bce43) scroll_pane_cp034

0x9258,	// (0x000b7195) phob2_cc_data_pane_ParamLimits

0x9258,	// (0x000b7195) phob2_cc_data_pane

0x9271,	// (0x000b71ae) phob2_cc_listscroll_pane_ParamLimits

0x9271,	// (0x000b71ae) phob2_cc_listscroll_pane

0x8d60,	// (0x000b6c9d) list_double_large_graphic_phob2_pane_ParamLimits

0x8d60,	// (0x000b6c9d) list_double_large_graphic_phob2_pane

0x9293,	// (0x000b71d0) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9293,	// (0x000b71d0) list_double_large_graphic_phob2_pane_g1

0x92a9,	// (0x000b71e6) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x92a9,	// (0x000b71e6) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff16,	// (0x000bde53) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff16,	// (0x000bde53) list_double_large_graphic_phob2_pane_g

0x92b5,	// (0x000b71f2) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x92b5,	// (0x000b71f2) list_double_large_graphic_phob2_pane_t1

0x92ca,	// (0x000b7207) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x92ca,	// (0x000b7207) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff1b,	// (0x000bde58) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff1b,	// (0x000bde58) list_double_large_graphic_phob2_pane_t

0x95ed,	// (0x000b752a) list_highlight_pane_cp024

0x92dc,	// (0x000b7219) phob2_cc_button_pane

0x92e6,	// (0x000b7223) phob2_cc_data_pane_g1_ParamLimits

0x92e6,	// (0x000b7223) phob2_cc_data_pane_g1

0x92fe,	// (0x000b723b) phob2_cc_data_pane_g2_ParamLimits

0x92fe,	// (0x000b723b) phob2_cc_data_pane_g2

0x0001,

0xff20,	// (0x000bde5d) phob2_cc_data_pane_g_ParamLimits

0xff20,	// (0x000bde5d) phob2_cc_data_pane_g

0x930e,	// (0x000b724b) phob2_cc_data_pane_t1_ParamLimits

0x930e,	// (0x000b724b) phob2_cc_data_pane_t1

0x9330,	// (0x000b726d) phob2_cc_data_pane_t2_ParamLimits

0x9330,	// (0x000b726d) phob2_cc_data_pane_t2

0x9352,	// (0x000b728f) phob2_cc_data_pane_t3_ParamLimits

0x9352,	// (0x000b728f) phob2_cc_data_pane_t3

0x0002,

0xff25,	// (0x000bde62) phob2_cc_data_pane_t_ParamLimits

0xff25,	// (0x000bde62) phob2_cc_data_pane_t

0xef0e,	// (0x000bce4b) phob2_cc_list_pane_ParamLimits

0xef0e,	// (0x000bce4b) phob2_cc_list_pane

0xdaf3,	// (0x000bba30) scroll_pane_cp035_ParamLimits

0xdaf3,	// (0x000bba30) scroll_pane_cp035

0xbe7c,	// (0x000b9db9) bg_button_pane_cp033

0xef1a,	// (0x000bce57) phob2_cc_button_pane_g1

0xef26,	// (0x000bce63) phob2_cc_button_pane_t1

0xef3b,	// (0x000bce78) phob2_cc_button_pane_t2

0x0001,

0xff2c,	// (0x000bde69) phob2_cc_button_pane_t

0x9374,	// (0x000b72b1) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9374,	// (0x000b72b1) list_double_large_graphic_phob2_cc_pane

0x93b2,	// (0x000b72ef) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x93b2,	// (0x000b72ef) list_double_large_graphic_phob2_cc_pane_g1

0x93be,	// (0x000b72fb) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x93be,	// (0x000b72fb) list_double_large_graphic_phob2_cc_pane_g2

0x93ca,	// (0x000b7307) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x93ca,	// (0x000b7307) list_double_large_graphic_phob2_cc_pane_g3

0x93d6,	// (0x000b7313) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x93d6,	// (0x000b7313) list_double_large_graphic_phob2_cc_pane_g4

0x93e2,	// (0x000b731f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x93e2,	// (0x000b731f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff31,	// (0x000bde6e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff31,	// (0x000bde6e) list_double_large_graphic_phob2_cc_pane_g

0x93ee,	// (0x000b732b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x93ee,	// (0x000b732b) list_double_large_graphic_phob2_cc_pane_t1

0x9417,	// (0x000b7354) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9417,	// (0x000b7354) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff3c,	// (0x000bde79) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff3c,	// (0x000bde79) list_double_large_graphic_phob2_cc_pane_t

0xef4d,	// (0x000bce8a) list_highlight_pane_cp025_ParamLimits

0xef4d,	// (0x000bce8a) list_highlight_pane_cp025

0xbe7c,	// (0x000b9db9) bg_button_pane_cp033_ParamLimits

0xef1a,	// (0x000bce57) phob2_cc_button_pane_g1_ParamLimits

0xef26,	// (0x000bce63) phob2_cc_button_pane_t1_ParamLimits

0xef3b,	// (0x000bce78) phob2_cc_button_pane_t2_ParamLimits

0xff2c,	// (0x000bde69) phob2_cc_button_pane_t_ParamLimits

0xfddb,	// (0x000add18) popup_wgtman_window

0xd936,	// (0x000bb873) scroll_pane_cp038

0x8cd9,	// (0x000b6c16) wgtman_btn_pane_cp_01_ParamLimits

0x8cd9,	// (0x000b6c16) wgtman_btn_pane_cp_01

0xef5b,	// (0x000bce98) wgtman_content_pane

0xef64,	// (0x000bcea1) wgtman_heading_pane

0x95ed,	// (0x000b752a) bg_heading_pane_cp02

0xef6d,	// (0x000bceaa) wgtman_heading_pane_g1

0xef75,	// (0x000bceb2) wgtman_heading_pane_t1

0xef83,	// (0x000bcec0) scroll_pane_cp036

0xef8b,	// (0x000bcec8) wgtman_list_pane

0xe769,	// (0x000bc6a6) wgtman_list_pane_t1_ParamLimits

0xe769,	// (0x000bc6a6) wgtman_list_pane_t1

0xa446,	// (0x000b8383) cam4_grid_pane

0x654c,	// (0x000b4489) bg_button_pane_cp015_ParamLimits

0x6560,	// (0x000b449d) bg_button_pane_cp016_ParamLimits

0x6573,	// (0x000b44b0) bg_button_pane_cp017_ParamLimits

0x65cb,	// (0x000b4508) popup_vitu2_query_window_g3_ParamLimits

0x65cb,	// (0x000b4508) popup_vitu2_query_window_g3

0x6688,	// (0x000b45c5) popup_vitu2_query_window_t6_ParamLimits

0x6688,	// (0x000b45c5) popup_vitu2_query_window_t6

0x66b3,	// (0x000b45f0) popup_vitu2_query_window_t7_ParamLimits

0x66b3,	// (0x000b45f0) popup_vitu2_query_window_t7

0xd7b5,	// (0x000bb6f2) cam4_grid_pane_g1

0xd7be,	// (0x000bb6fb) cam4_grid_pane_g2

0xef93,	// (0x000bced0) cam4_grid_pane_g3

0xef9c,	// (0x000bced9) cam4_grid_pane_g4

0x0003,

0xff41,	// (0x000bde7e) cam4_grid_pane_g

0x0d9c,	// (0x000aecd9) aid_placing_vt_slider_lsc_ParamLimits

0x1089,	// (0x000aefc6) vidtel_button_pane_ParamLimits

0x1089,	// (0x000aefc6) vidtel_button_pane

0x95ed,	// (0x000b752a) bg_button_pane_cp034

0xefa7,	// (0x000bcee4) vidtel_button_pane_g1

0xefaf,	// (0x000bceec) vidtel_button_pane_t1

0xda3a,	// (0x000bb977) aid_size_vtel_slider_touch

0xdaf3,	// (0x000bba30) scroll_pane_cp039

0x74ad,	// (0x000b53ea) ncim_query_button_pane_cp01_ParamLimits

0x74cc,	// (0x000b5409) ncimui_query_pane_g1_ParamLimits

0xbe7c,	// (0x000b9db9) input_focus_pane_cp012_ParamLimits

0xe303,	// (0x000bc240) ncim_query_entry_pane_t1_ParamLimits

0xdaf3,	// (0x000bba30) scroll_pane_cp039_ParamLimits

0xb428,	// (0x000b9365) navi_pane_bcale_mc_g1

0xb430,	// (0x000b936d) navi_pane_bcale_mc_t1

0xe75d,	// (0x000bc69a) main_sp_fs_email_pane_g1

0xe783,	// (0x000bc6c0) main_sp_fs_email_pane_g2

0x0001,

0xfcd2,	// (0x000bdc0f) main_sp_fs_email_pane_g

0xea13,	// (0x000bc950) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea13,	// (0x000bc950) list_single_cale_mrui_row_pane_g3

0x8880,	// (0x000b67bd) list_single_recal_day_pane_g5_event_pane

0xa9d7,	// (0x000b8914) list_single_recal_day_pane_g7

0xefc5,	// (0x000bcf02) list_recal_day_event_pane_cp01

0xefce,	// (0x000bcf0b) list_recal_vselct_arw_lo_pane_cp01

0xefd6,	// (0x000bcf13) list_recal_vselct_arw_up_pane_cp01

0xefde,	// (0x000bcf1b) list_recal_vselct_pane_cp01

0xda5c,	// (0x000bb999) list_recal_day_event_pane_cp01_g1

0xbeaa,	// (0x000b9de7) list_recal_day_event_pane_cp01_t1

0xa9df,	// (0x000b891c) list_single_recal_day_pane_t1_ParamLimits

0xa9f1,	// (0x000b892e) list_single_recal_day_pane_t2_ParamLimits

0xfe2f,	// (0x000bdd6c) list_single_recal_day_pane_t_ParamLimits

0x9ca8,	// (0x000b7be5) bg_notes_pane_ParamLimits

0x9d53,	// (0x000b7c90) list_notes_pane_ParamLimits

0x00fd,	// (0x000ae03a) scroll_pane_cp06_ParamLimits

0x9d8f,	// (0x000b7ccc) main_notes_pane_ParamLimits

0xbe7c,	// (0x000b9db9) main_welc_pane

0x9457,	// (0x000b7394) main_welc_body_pane_ParamLimits

0x9457,	// (0x000b7394) main_welc_body_pane

0x9476,	// (0x000b73b3) main_welc_opti_pane_ParamLimits

0x9476,	// (0x000b73b3) main_welc_opti_pane

0x94ce,	// (0x000b740b) main_welc_pane_t1_ParamLimits

0x94ce,	// (0x000b740b) main_welc_pane_t1

0xefe8,	// (0x000bcf25) main_welc_body_row_pane_ParamLimits

0xefe8,	// (0x000bcf25) main_welc_body_row_pane

0xd302,	// (0x000bb23f) main_welc_opti_row_pane_ParamLimits

0xd302,	// (0x000bb23f) main_welc_opti_row_pane

0xefff,	// (0x000bcf3c) main_welc_opti_row_pane_g1

0x9550,	// (0x000b748d) main_welc_opti_row_pane_t1

0xf007,	// (0x000bcf44) main_welc_body_row_pane_t1

0xed62,	// (0x000bcc9f) popup_notif_wgt_heading_pane

0xed7c,	// (0x000bccb9) aid_size_list_notif_wgt_del_ParamLimits

0xed89,	// (0x000bccc6) list_notif_wgt_row_pane_g1_ParamLimits

0xed95,	// (0x000bccd2) list_notif_wgt_row_pane_g2_ParamLimits

0xeda4,	// (0x000bcce1) list_notif_wgt_row_pane_g3_ParamLimits

0xfe96,	// (0x000bddd3) list_notif_wgt_row_pane_g_ParamLimits

0xedb1,	// (0x000bccee) list_notif_wgt_row_pane_t1_ParamLimits

0xedc7,	// (0x000bcd04) list_notif_wgt_row_pane_t2_ParamLimits

0xedd9,	// (0x000bcd16) list_notif_wgt_row_pane_t3_ParamLimits

0xfe9d,	// (0x000bddda) list_notif_wgt_row_pane_t_ParamLimits

0x8d74,	// (0x000b6cb1) listrow_wgtman_pane_g1_ParamLimits

0x8d81,	// (0x000b6cbe) listrow_wgtman_pane_g2_ParamLimits

0xfec6,	// (0x000bde03) listrow_wgtman_pane_g_ParamLimits

0x8d9f,	// (0x000b6cdc) listrow_wgtman_pane_t1_ParamLimits

0x8db7,	// (0x000b6cf4) listrow_wgtman_pane_t2_ParamLimits

0xfecb,	// (0x000bde08) listrow_wgtman_pane_t_ParamLimits

0x8ddd,	// (0x000b6d1a) wait_bar_pane_cp09_ParamLimits

0x95ed,	// (0x000b752a) bg_popup_heading_pane_cp02

0xf016,	// (0x000bcf53) popup_notif_wgt_heading_pane_g1

0xf01e,	// (0x000bcf5b) popup_notif_wgt_heading_pane_t1

0x95ed,	// (0x000b752a) main_vids_pane

0x95ed,	// (0x000b752a) vids_listscroll_pane

0x955f,	// (0x000b749c) scroll_pane_cp040

0x95ed,	// (0x000b752a) vids_list_pane

0x956a,	// (0x000b74a7) vids_list_double_pane_ParamLimits

0x956a,	// (0x000b74a7) vids_list_double_pane

0x957b,	// (0x000b74b8) vids_list_double_pane_g1

0x9584,	// (0x000b74c1) vids_list_double_pane_t1

0x9594,	// (0x000b74d1) vids_list_double_pane_t2

0x0001,

0xff58,	// (0x000bde95) vids_list_double_pane_t

0x95f7,	// (0x000b7534) main_ncimui_pane_ParamLimits

0x72e3,	// (0x000b5220) main_ncimui_pane_g1_ParamLimits

0x72ef,	// (0x000b522c) main_ncimui_pane_g2_ParamLimits

0x72ef,	// (0x000b522c) main_ncimui_pane_g2

0x0001,

0xfbd3,	// (0x000bdb10) main_ncimui_pane_g_ParamLimits

0xfbd3,	// (0x000bdb10) main_ncimui_pane_g

0x9495,	// (0x000b73d2) main_welc_pane_g1_ParamLimits

0x9495,	// (0x000b73d2) main_welc_pane_g1

0x94aa,	// (0x000b73e7) main_welc_pane_g2_ParamLimits

0x94aa,	// (0x000b73e7) main_welc_pane_g2

0x0002,

0xff4a,	// (0x000bde87) main_welc_pane_g_ParamLimits

0xff4a,	// (0x000bde87) main_welc_pane_g

0x9ca8,	// (0x000b7be5) listscroll_mce_pane_ParamLimits

0xb57f,	// (0x000b94bc) wait_bar_pane_cp10

0xc9ce,	// (0x000ba90b) main_cale_day_pane_ParamLimits

0xc9ce,	// (0x000ba90b) main_cale_week_pane_ParamLimits

0x9ca8,	// (0x000b7be5) main_messa_pane_ParamLimits

0x4a6c,	// (0x000b29a9) main_clock2_btn_pane_ParamLimits

0x4a6c,	// (0x000b29a9) main_clock2_btn_pane

0xd1c9,	// (0x000bb106) main_clock2_btn_pane_cp01_ParamLimits

0xd1c9,	// (0x000bb106) main_clock2_btn_pane_cp01

0xe9e4,	// (0x000bc921) list_cale_mrui_pane_ParamLimits

0xee0f,	// (0x000bcd4c) main_cf0_pane_g2

0x0001,

0xfea4,	// (0x000bdde1) main_cf0_pane_g

0x9018,	// (0x000b6f55) area_left_week_number_pane_ParamLimits

0x9026,	// (0x000b6f63) area_top_day_name_pane_ParamLimits

0x9039,	// (0x000b6f76) frame_month_view_pane_ParamLimits

0xeec3,	// (0x000bce00) grid_month_view_pane_ParamLimits

0xeed1,	// (0x000bce0e) frm_month_g1_ParamLimits

0x90c4,	// (0x000b7001) frm_month_g2_ParamLimits

0x90d7,	// (0x000b7014) frm_month_g3_ParamLimits

0x90ea,	// (0x000b7027) frm_month_g4_ParamLimits

0x90fd,	// (0x000b703a) frm_month_g5_ParamLimits

0x9110,	// (0x000b704d) frm_month_g6_ParamLimits

0x9125,	// (0x000b7062) frm_month_g7_ParamLimits

0xeede,	// (0x000bce1b) frm_month_g8_ParamLimits

0x913a,	// (0x000b7077) frm_month_g9_ParamLimits

0x914a,	// (0x000b7087) frm_month_g10_ParamLimits

0x915a,	// (0x000b7097) frm_month_g11_ParamLimits

0x916a,	// (0x000b70a7) frm_month_g12_ParamLimits

0x917c,	// (0x000b70b9) frm_month_g13_ParamLimits

0x9190,	// (0x000b70cd) frm_month_g14_ParamLimits

0x91a4,	// (0x000b70e1) frm_month_g15_ParamLimits

0x91b8,	// (0x000b70f5) frm_month_g16_ParamLimits

0xfef5,	// (0x000bde32) frm_month_g_ParamLimits

0xeeeb,	// (0x000bce28) cell_top_day_name_pane_t1_ParamLimits

0x91cc,	// (0x000b7109) cell_area_left_week_number_pane_g1_ParamLimits

0x91d8,	// (0x000b7115) cell_area_left_week_number_pane_t1_ParamLimits

0xd041,	// (0x000baf7e) cell_month_view_pane_g1_ParamLimits

0x91eb,	// (0x000b7128) cell_month_view_pane_t1_ParamLimits

0x9ca0,	// (0x000b7bdd) main_clock2_btn_pane_g1

0xf02c,	// (0x000bcf69) main_clock2_btn_pane_t1

0xbe7c,	// (0x000b9db9) listscroll_cmail_pane_ParamLimits

0xe75d,	// (0x000bc69a) main_sp_fs_email_pane_g1_ParamLimits

0xe783,	// (0x000bc6c0) main_sp_fs_email_pane_g2_ParamLimits

0xfcd2,	// (0x000bdc0f) main_sp_fs_email_pane_g_ParamLimits

0xeaec,	// (0x000bca29) list_recal_day_pane_ParamLimits

0xeafd,	// (0x000bca3a) mian_recal_day_pane_t1

0x7fec,	// (0x000b5f29) list_single_dyc_row_text_pane_t4_ParamLimits

0x7fec,	// (0x000b5f29) list_single_dyc_row_text_pane_t4

0x8035,	// (0x000b5f72) list_single_dyc_row_text_pane_t5_ParamLimits

0x8035,	// (0x000b5f72) list_single_dyc_row_text_pane_t5

0xa756,	// (0x000b8693) list_single_dyc_row_text_pane_t6_ParamLimits

0xa756,	// (0x000b8693) list_single_dyc_row_text_pane_t6

0x1e96,	// (0x000afdd3) aid_mgn_list_cale_time_pane

0x95f7,	// (0x000b7534) main_gallery2_pane_ParamLimits

0xd1dd,	// (0x000bb11a) main_clock2_pane_cp01_t1

0xd1eb,	// (0x000bb128) main_clock2_pane_cp01_t3

0x0001,

0xf7a9,	// (0x000bd6e6) main_clock2_pane_cp01_t

0x0519,	// (0x000ae456) cale_week_scroll_pane_g16_ParamLimits

0x0519,	// (0x000ae456) cale_week_scroll_pane_g16

0xab25,	// (0x000b8a62) vorec_slider_pane

0xefaf,	// (0x000bceec) vidtel_button_pane_t1_ParamLimits

0x88e6,	// (0x000b6823) main_fs_bigclock_clock_pane_g1_ParamLimits

0x88e6,	// (0x000b6823) main_fs_bigclock_clock_pane_g2_ParamLimits

0x88f9,	// (0x000b6836) main_fs_bigclock_clock_pane_g3_ParamLimits

0x88f9,	// (0x000b6836) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe52,	// (0x000bdd8f) main_fs_bigclock_clock_pane_g_ParamLimits

0x8910,	// (0x000b684d) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8926,	// (0x000b6863) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe5b,	// (0x000bdd98) main_fs_bigclock_clock_pane_t_ParamLimits

0x41e3,	// (0x000b2120) main_mup3_lyrics_pane_ParamLimits

0x41e3,	// (0x000b2120) main_mup3_lyrics_pane

0x95ca,	// (0x000b7507) main_mup3_lyrics_pane_t1_ParamLimits

0x95ca,	// (0x000b7507) main_mup3_lyrics_pane_t1

0xa19a,	// (0x000b80d7) aid_main_mp4_pane_t1_area

0xa1a4,	// (0x000b80e1) aid_main_mp4_pane_t2_area

0xa250,	// (0x000b818d) main_mp4_pane_g7_ParamLimits

0xa250,	// (0x000b818d) main_mp4_pane_g7

0xa25c,	// (0x000b8199) main_mp4_pane_g8_ParamLimits

0xa25c,	// (0x000b8199) main_mp4_pane_g8

0x55c4,	// (0x000b3501) aid_call6_pane_g1_size

0x93a2,	// (0x000b72df) list_double_large_graphic_phob2_other_pane_ParamLimits

0x93a2,	// (0x000b72df) list_double_large_graphic_phob2_other_pane

0x95e5,	// (0x000b7522) list_double_large_graphic_phob2_other_pane_g1

0x95ed,	// (0x000b752a) list_highlight_pane_cp026

0xbe7c,	// (0x000b9db9) main_welc_pane_ParamLimits

0x7cee,	// (0x000b5c2b) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7cee,	// (0x000b5c2b) main_sp_fs_ctrlbar_pane_g3

0x7d08,	// (0x000b5c45) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7d08,	// (0x000b5c45) main_sp_fs_ctrlbar_pane_g4

0x7d3c,	// (0x000b5c79) toolbar2_fixed_button_pane_cp01

0x7d47,	// (0x000b5c84) toolbar2_fixed_button_pane_cp02

0x7d54,	// (0x000b5c91) toolbar2_fixed_button_pane_cp03

0x9440,	// (0x000b737d) list_welc_entry_pane_ParamLimits

0x9440,	// (0x000b737d) list_welc_entry_pane

0x94bf,	// (0x000b73fc) main_welc_pane_g3_ParamLimits

0x94bf,	// (0x000b73fc) main_welc_pane_g3

0x94f0,	// (0x000b742d) main_welc_pane_t2_ParamLimits

0x94f0,	// (0x000b742d) main_welc_pane_t2

0x950b,	// (0x000b7448) main_welc_pane_t3_ParamLimits

0x950b,	// (0x000b7448) main_welc_pane_t3

0x0002,

0xff51,	// (0x000bde8e) main_welc_pane_t_ParamLimits

0xff51,	// (0x000bde8e) main_welc_pane_t

0x9525,	// (0x000b7462) welc_button_pane_ParamLimits

0x9525,	// (0x000b7462) welc_button_pane

0x953c,	// (0x000b7479) welc_service_logo_pane_ParamLimits

0x953c,	// (0x000b7479) welc_service_logo_pane

0xf03a,	// (0x000bcf77) list_single_welc_entry_pane_ParamLimits

0xf03a,	// (0x000bcf77) list_single_welc_entry_pane

0xf04d,	// (0x000bcf8a) list_single_welc_entry_pane_g1

0xf055,	// (0x000bcf92) list_single_welc_entry_pane_t1

0xf063,	// (0x000bcfa0) list_single_welc_entry_pane_t2

0x0001,

0xff5d,	// (0x000bde9a) list_single_welc_entry_pane_t

0x95ed,	// (0x000b752a) bg_button_pane_cp035

0xf071,	// (0x000bcfae) welc_button_pane_t1

0xf07f,	// (0x000bcfbc) welc_service_logo_pane_g1

0xf088,	// (0x000bcfc5) welc_service_logo_pane_g2

0x0001,

0xff62,	// (0x000bde9f) welc_service_logo_pane_g
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
