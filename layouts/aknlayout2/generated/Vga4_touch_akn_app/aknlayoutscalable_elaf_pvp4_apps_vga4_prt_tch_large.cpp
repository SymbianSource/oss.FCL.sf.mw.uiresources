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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0007155a };

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
0x3d97,	// (0x000752f1) Screen

0x3da3,	// (0x000752fd) application_window

0x3df7,	// (0x00075351) area_bottom_pane_ParamLimits

0x3df7,	// (0x00075351) area_bottom_pane

0x3e55,	// (0x000753af) area_top_pane_ParamLimits

0x3e55,	// (0x000753af) area_top_pane

0x3eb9,	// (0x00075413) call_video_uplink_pane_ParamLimits

0x3eb9,	// (0x00075413) call_video_uplink_pane

0x3ef8,	// (0x00075452) main_pane_ParamLimits

0x3ef8,	// (0x00075452) main_pane

0x1094,	// (0x000725ee) context_pane

0x6d5b,	// (0x000782b5) navi_pane

0x6d84,	// (0x000782de) popup_cale_events_window_ParamLimits

0x6d84,	// (0x000782de) popup_cale_events_window

0x10a7,	// (0x00072601) popup_mup_playback_window

0x6d9c,	// (0x000782f6) signal_pane

0xe29b,	// (0x0007f7f5) main_browser_pane

0xe439,	// (0x0007f993) main_burst_pane

0x6bcb,	// (0x00078125) main_calc_pane

0x1088,	// (0x000725e2) main_cale_day_pane

0x43be,	// (0x00075918) main_cale_month_pane

0x1088,	// (0x000725e2) main_cale_week_pane

0xe439,	// (0x0007f993) main_call_pane

0xd2b5,	// (0x0007e80f) main_call_poc_pane

0xe439,	// (0x0007f993) main_camera_pane

0xe439,	// (0x0007f993) main_chi_dic_pane

0xebfe,	// (0x00080158) main_clock_pane

0xd2b5,	// (0x0007e80f) main_fmradio_pane

0xe439,	// (0x0007f993) main_graph_messa_pane

0xd2b5,	// (0x0007e80f) main_help_pane

0xe29b,	// (0x0007f7f5) main_im_pane

0xd510,	// (0x0007ea6a) main_image_pane_ParamLimits

0xd510,	// (0x0007ea6a) main_image_pane

0xd2b5,	// (0x0007e80f) main_location2_pane

0xe439,	// (0x0007f993) main_location_pane

0xd510,	// (0x0007ea6a) main_messa_pane

0xd2b5,	// (0x0007e80f) main_mp2_pane

0xe439,	// (0x0007f993) main_mp_pane

0xd2b5,	// (0x0007e80f) main_msg_pane

0xd2b5,	// (0x0007e80f) main_mup_eq_pane

0xd2b5,	// (0x0007e80f) main_mup_pane

0xe29b,	// (0x0007f7f5) main_notes_pane

0xd2b5,	// (0x0007e80f) main_pec_pane

0xd2b5,	// (0x0007e80f) main_phob_pane

0xd2b5,	// (0x0007e80f) main_pinb_pane

0xd2b5,	// (0x0007e80f) main_postcard_pane

0xd2b5,	// (0x0007e80f) main_qdial_pane

0xe439,	// (0x0007f993) main_skin_pane

0xd2b5,	// (0x0007e80f) main_smil2_pane

0xe439,	// (0x0007f993) main_smil_pane

0xe439,	// (0x0007f993) main_video_pane

0xe439,	// (0x0007f993) main_video_tele_pane

0xd510,	// (0x0007ea6a) main_viewer_pane_ParamLimits

0xd510,	// (0x0007ea6a) main_viewer_pane

0xe439,	// (0x0007f993) main_vorec_pane

0x6c0b,	// (0x00078165) popup_blid_sat_info_window_ParamLimits

0x6c0b,	// (0x00078165) popup_blid_sat_info_window

0x6c31,	// (0x0007818b) popup_dyc_status_message_window_ParamLimits

0x6c31,	// (0x0007818b) popup_dyc_status_message_window

0x6c41,	// (0x0007819b) popup_grid_large_graphic_window_ParamLimits

0x6c41,	// (0x0007819b) popup_grid_large_graphic_window

0x6cd6,	// (0x00078230) popup_loc_request_window_ParamLimits

0x6cd6,	// (0x00078230) popup_loc_request_window

0x6d2f,	// (0x00078289) popup_wml_address_window_ParamLimits

0x6d2f,	// (0x00078289) popup_wml_address_window

0x6aa3,	// (0x00077ffd) call_muted_g1

0x6793,	// (0x00077ced) popup_call_audio_conf_window_ParamLimits

0x6793,	// (0x00077ced) popup_call_audio_conf_window

0x6ab3,	// (0x0007800d) popup_call_audio_first_window_ParamLimits

0x6ab3,	// (0x0007800d) popup_call_audio_first_window

0x6af3,	// (0x0007804d) popup_call_audio_in_window_ParamLimits

0x6af3,	// (0x0007804d) popup_call_audio_in_window

0x6b17,	// (0x00078071) popup_call_audio_out_window_ParamLimits

0x6b17,	// (0x00078071) popup_call_audio_out_window

0x6b39,	// (0x00078093) popup_call_audio_second_window_ParamLimits

0x6b39,	// (0x00078093) popup_call_audio_second_window

0x6b69,	// (0x000780c3) popup_call_audio_wait_window_ParamLimits

0x6b69,	// (0x000780c3) popup_call_audio_wait_window

0x6b8a,	// (0x000780e4) popup_number_entry_window_ParamLimits

0x6b8a,	// (0x000780e4) popup_number_entry_window

0xce6d,	// (0x0007e3c7) bg_popup_call_pane_cp05_ParamLimits

0xce6d,	// (0x0007e3c7) bg_popup_call_pane_cp05

0xce8d,	// (0x0007e3e7) popup_number_entry_window_t1

0xcea0,	// (0x0007e3fa) popup_number_entry_window_t2

0xceb2,	// (0x0007e40c) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x0008059a) popup_number_entry_window_t

0xcef9,	// (0x0007e453) text_title_cp2

0xcf0c,	// (0x0007e466) bg_popup_call_pane_cp_ParamLimits

0xcf0c,	// (0x0007e466) bg_popup_call_pane_cp

0xcf1a,	// (0x0007e474) call_thumbnail_pane

0xcf22,	// (0x0007e47c) popup_call_audio_in_window_g1_ParamLimits

0xcf22,	// (0x0007e47c) popup_call_audio_in_window_g1

0xcf2e,	// (0x0007e488) popup_call_audio_in_window_g2_ParamLimits

0xcf2e,	// (0x0007e488) popup_call_audio_in_window_g2

0xcf3a,	// (0x0007e494) popup_call_audio_in_window_g3_ParamLimits

0xcf3a,	// (0x0007e494) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x000805a3) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x000805a3) popup_call_audio_in_window_g

0xcf46,	// (0x0007e4a0) popup_call_audio_in_window_t1_ParamLimits

0xcf46,	// (0x0007e4a0) popup_call_audio_in_window_t1

0xcf62,	// (0x0007e4bc) popup_call_audio_in_window_t2_ParamLimits

0xcf62,	// (0x0007e4bc) popup_call_audio_in_window_t2

0xcf7e,	// (0x0007e4d8) popup_call_audio_in_window_t3_ParamLimits

0xcf7e,	// (0x0007e4d8) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x000805aa) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x000805aa) popup_call_audio_in_window_t

0xcf0c,	// (0x0007e466) bg_popup_call_pane_cp01_ParamLimits

0xcf0c,	// (0x0007e466) bg_popup_call_pane_cp01

0xcf1a,	// (0x0007e474) call_thumbnail_pane_cp02

0xcf91,	// (0x0007e4eb) call_type_pane_cp022

0xcf99,	// (0x0007e4f3) popup_call_audio_out_window_g1_ParamLimits

0xcf99,	// (0x0007e4f3) popup_call_audio_out_window_g1

0xcfab,	// (0x0007e505) popup_call_audio_out_window_g2_ParamLimits

0xcfab,	// (0x0007e505) popup_call_audio_out_window_g2

0xcfb7,	// (0x0007e511) popup_call_audio_out_window_g3_ParamLimits

0xcfb7,	// (0x0007e511) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x000805b1) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x000805b1) popup_call_audio_out_window_g

0xcfc9,	// (0x0007e523) popup_call_audio_out_window_t1_ParamLimits

0xcfc9,	// (0x0007e523) popup_call_audio_out_window_t1

0xcfe1,	// (0x0007e53b) popup_call_audio_out_window_t2_ParamLimits

0xcfe1,	// (0x0007e53b) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x000805b8) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x000805b8) popup_call_audio_out_window_t

0xcff6,	// (0x0007e550) bg_popup_call_pane_ParamLimits

0xcff6,	// (0x0007e550) bg_popup_call_pane

0x40bf,	// (0x00075619) call_thumbnail_pane_cp_ParamLimits

0x40bf,	// (0x00075619) call_thumbnail_pane_cp

0xd07a,	// (0x0007e5d4) call_type_pane_cp01_ParamLimits

0xd07a,	// (0x0007e5d4) call_type_pane_cp01

0xd0be,	// (0x0007e618) popup_call_audio_first_window_g1_ParamLimits

0xd0be,	// (0x0007e618) popup_call_audio_first_window_g1

0xd10a,	// (0x0007e664) popup_call_audio_first_window_g2_ParamLimits

0xd10a,	// (0x0007e664) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x000805bd) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x000805bd) popup_call_audio_first_window_g

0xd14e,	// (0x0007e6a8) popup_call_audio_first_window_t1_ParamLimits

0xd14e,	// (0x0007e6a8) popup_call_audio_first_window_t1

0xd1fa,	// (0x0007e754) popup_call_audio_first_window_t4_ParamLimits

0xd1fa,	// (0x0007e754) popup_call_audio_first_window_t4

0xd286,	// (0x0007e7e0) popup_call_audio_first_window_t5_ParamLimits

0xd286,	// (0x0007e7e0) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x000805c2) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x000805c2) popup_call_audio_first_window_t

0xd2b5,	// (0x0007e80f) bg_popup_call_pane_cp02

0xd2bf,	// (0x0007e819) call_type_pane_cp023

0xd2c7,	// (0x0007e821) popup_call_audio_wait_window_g1

0xd2cf,	// (0x0007e829) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x000805c9) popup_call_audio_wait_window_g

0xd2d7,	// (0x0007e831) popup_call_audio_wait_window_t3

0xd2e5,	// (0x0007e83f) bg_popup_call_pane_cp03_ParamLimits

0xd2e5,	// (0x0007e83f) bg_popup_call_pane_cp03

0xd345,	// (0x0007e89f) call_thumbnail_pane_cp011_ParamLimits

0xd345,	// (0x0007e89f) call_thumbnail_pane_cp011

0xd351,	// (0x0007e8ab) call_type_pane_cp034_ParamLimits

0xd351,	// (0x0007e8ab) call_type_pane_cp034

0xd38d,	// (0x0007e8e7) popup_call_audio_second_window_g1_ParamLimits

0xd38d,	// (0x0007e8e7) popup_call_audio_second_window_g1

0xd3c9,	// (0x0007e923) popup_call_audio_second_window_g2_ParamLimits

0xd3c9,	// (0x0007e923) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x000805ce) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x000805ce) popup_call_audio_second_window_g

0xd405,	// (0x0007e95f) popup_call_audio_second_window_t1_ParamLimits

0xd405,	// (0x0007e95f) popup_call_audio_second_window_t1

0xd486,	// (0x0007e9e0) popup_call_audio_second_window_t2_ParamLimits

0xd486,	// (0x0007e9e0) popup_call_audio_second_window_t2

0xd4bc,	// (0x0007ea16) popup_call_audio_second_window_t3_ParamLimits

0xd4bc,	// (0x0007ea16) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x000805d3) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x000805d3) popup_call_audio_second_window_t

0xd2b5,	// (0x0007e80f) bg_popup_call_pane_cp04

0xd4f2,	// (0x0007ea4c) list_conf_pane

0xd4fa,	// (0x0007ea54) popup_call_audio_conf_window_t1

0xd508,	// (0x0007ea62) call_thumbnail_pane_g1

0xd510,	// (0x0007ea6a) bg_pinb_pane_ParamLimits

0xd510,	// (0x0007ea6a) bg_pinb_pane

0xd51e,	// (0x0007ea78) find_pinb_pane

0xd510,	// (0x0007ea6a) listscroll_pinb_pane_ParamLimits

0xd510,	// (0x0007ea6a) listscroll_pinb_pane

0xd528,	// (0x0007ea82) pinb_bg_pane_g1

0xd528,	// (0x0007ea82) pinb_bg_pane_g2

0xd528,	// (0x0007ea82) pinb_bg_pane_g3

0xd528,	// (0x0007ea82) pinb_bg_pane_g4

0xd528,	// (0x0007ea82) pinb_bg_pane_g5

0xd528,	// (0x0007ea82) pinb_bg_pane_g6

0xd528,	// (0x0007ea82) pinb_bg_pane_g7

0xd528,	// (0x0007ea82) pinb_bg_pane_g8

0xd528,	// (0x0007ea82) pinb_bg_pane_g9

0xd528,	// (0x0007ea82) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x000805da) pinb_bg_pane_g

0xce55,	// (0x0007e3af) grid_pinb_pane

0xce55,	// (0x0007e3af) list_pinb_pane

0xd532,	// (0x0007ea8c) scroll_pane_cp01_ParamLimits

0xd532,	// (0x0007ea8c) scroll_pane_cp01

0xd540,	// (0x0007ea9a) find_pinb_pane_g1_ParamLimits

0xd540,	// (0x0007ea9a) find_pinb_pane_g1

0xd558,	// (0x0007eab2) find_pinb_pane_t1

0xd56a,	// (0x0007eac4) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x000805f4) find_pinb_pane_t

0xd57f,	// (0x0007ead9) input_focus_pane_cp01_ParamLimits

0xd57f,	// (0x0007ead9) input_focus_pane_cp01

0xce5f,	// (0x0007e3b9) cell_pinb_pane_ParamLimits

0xce5f,	// (0x0007e3b9) cell_pinb_pane

0xd58b,	// (0x0007eae5) cell_pinb_pane_g1_ParamLimits

0xd58b,	// (0x0007eae5) cell_pinb_pane_g1

0xd599,	// (0x0007eaf3) cell_pinb_pane_g2_ParamLimits

0xd599,	// (0x0007eaf3) cell_pinb_pane_g2

0xd599,	// (0x0007eaf3) cell_pinb_pane_g3_ParamLimits

0xd599,	// (0x0007eaf3) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x000805f9) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x000805f9) cell_pinb_pane_g

0xd2b5,	// (0x0007e80f) grid_highlight_pane_cp01

0xce5f,	// (0x0007e3b9) list_pinb_item_pane_ParamLimits

0xce5f,	// (0x0007e3b9) list_pinb_item_pane

0xce55,	// (0x0007e3af) list_highlight_pane_cp02

0xd5a7,	// (0x0007eb01) list_pinb_item_pane_g1_ParamLimits

0xd5a7,	// (0x0007eb01) list_pinb_item_pane_g1

0xd599,	// (0x0007eaf3) list_pinb_item_pane_g2_ParamLimits

0xd599,	// (0x0007eaf3) list_pinb_item_pane_g2

0xd58b,	// (0x0007eae5) list_pinb_item_pane_g3_ParamLimits

0xd58b,	// (0x0007eae5) list_pinb_item_pane_g3

0xd599,	// (0x0007eaf3) list_pinb_item_pane_g4_ParamLimits

0xd599,	// (0x0007eaf3) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x00080600) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x00080600) list_pinb_item_pane_g

0xd5b5,	// (0x0007eb0f) list_pinb_item_pane_t1_ParamLimits

0xd5b5,	// (0x0007eb0f) list_pinb_item_pane_t1

0x40fd,	// (0x00075657) calc_display_pane

0x411b,	// (0x00075675) calc_paper_pane

0x4137,	// (0x00075691) grid_calc_pane

0xce55,	// (0x0007e3af) bg_list_pane_cp01

0xe23d,	// (0x0007f797) clock_g1

0xe23d,	// (0x0007f797) clock_g2

0x0001,

0xf0af,	// (0x00080609) clock_g

0xe247,	// (0x0007f7a1) clock_t1_ParamLimits

0xe247,	// (0x0007f7a1) clock_t1

0xe25b,	// (0x0007f7b5) clock_t2_ParamLimits

0xe25b,	// (0x0007f7b5) clock_t2

0xe25b,	// (0x0007f7b5) clock_t3_ParamLimits

0xe25b,	// (0x0007f7b5) clock_t3

0xe25b,	// (0x0007f7b5) clock_t4_ParamLimits

0xe25b,	// (0x0007f7b5) clock_t4

0xe247,	// (0x0007f7a1) clock_t5_ParamLimits

0xe247,	// (0x0007f7a1) clock_t5

0xe25b,	// (0x0007f7b5) clock_t6_ParamLimits

0xe25b,	// (0x0007f7b5) clock_t6

0xe25b,	// (0x0007f7b5) clock_t7_ParamLimits

0xe25b,	// (0x0007f7b5) clock_t7

0xe25b,	// (0x0007f7b5) clock_t8_ParamLimits

0xe25b,	// (0x0007f7b5) clock_t8

0xe25b,	// (0x0007f7b5) clock_t9_ParamLimits

0xe25b,	// (0x0007f7b5) clock_t9

0x0008,

0xf0b4,	// (0x0008060e) clock_t_ParamLimits

0xf0b4,	// (0x0008060e) clock_t

0xce55,	// (0x0007e3af) popup_clock_analogue_window_cp02

0xce55,	// (0x0007e3af) popup_clock_digital_window_cp01

0xd2b5,	// (0x0007e80f) listscroll_help_pane

0xd2b5,	// (0x0007e80f) phob_pre_status_pane

0xe26f,	// (0x0007f7c9) grid_qdial_pane

0xd510,	// (0x0007ea6a) listscroll_mce_pane

0xd510,	// (0x0007ea6a) bg_notes_pane

0xe279,	// (0x0007f7d3) list_notes_pane

0x4163,	// (0x000756bd) scroll_pane_cp06

0xe287,	// (0x0007f7e1) bg_calc_paper_pane

0x4172,	// (0x000756cc) list_calc_pane

0xe29b,	// (0x0007f7f5) bg_calc_display_pane

0x418c,	// (0x000756e6) calc_display_pane_t1

0x41a1,	// (0x000756fb) calc_display_pane_t2

0x41b6,	// (0x00075710) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x00080621) calc_display_pane_t

0x41c8,	// (0x00075722) cell_calc_pane_ParamLimits

0x41c8,	// (0x00075722) cell_calc_pane

0xe2a7,	// (0x0007f801) bg_calc_paper_pane_g1

0xe2b3,	// (0x0007f80d) bg_calc_paper_pane_g2

0xe2bf,	// (0x0007f819) bg_calc_paper_pane_g3

0xe2cb,	// (0x0007f825) bg_calc_paper_pane_g4

0xe2d7,	// (0x0007f831) bg_calc_paper_pane_g5

0x41f7,	// (0x00075751) bg_calc_paper_pane_g6

0x4208,	// (0x00075762) bg_calc_paper_pane_g7

0x4219,	// (0x00075773) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x00080628) bg_calc_paper_pane_g

0x422a,	// (0x00075784) calc_bg_paper_pane_g9

0x423b,	// (0x00075795) list_calc_item_pane_ParamLimits

0x423b,	// (0x00075795) list_calc_item_pane

0xe2e3,	// (0x0007f83d) list_calc_item_pane_g1

0x425c,	// (0x000757b6) list_calc_item_pane_t1_ParamLimits

0x425c,	// (0x000757b6) list_calc_item_pane_t1

0x426e,	// (0x000757c8) list_calc_item_pane_t2_ParamLimits

0x426e,	// (0x000757c8) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x00080639) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x00080639) list_calc_item_pane_t

0xd528,	// (0x0007ea82) cell_calc_pane_g1

0xe2f0,	// (0x0007f84a) grid_highlight_pane_cp02

0xc242,	// (0x0007d79c) bg_calc_display_pane_g1

0x429e,	// (0x000757f8) bg_calc_display_pane_g2

0xc24b,	// (0x0007d7a5) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x00080643) bg_calc_display_pane_g

0x42a8,	// (0x00075802) cell_qdial_pane_ParamLimits

0x42a8,	// (0x00075802) cell_qdial_pane

0x42be,	// (0x00075818) cell_qdial_pane_g1_ParamLimits

0x42be,	// (0x00075818) cell_qdial_pane_g1

0x42cb,	// (0x00075825) cell_qdial_pane_g2_ParamLimits

0x42cb,	// (0x00075825) cell_qdial_pane_g2

0xe312,	// (0x0007f86c) cell_qdial_pane_g3_ParamLimits

0xe312,	// (0x0007f86c) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x0008064a) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x0008064a) cell_qdial_pane_g

0x42e9,	// (0x00075843) cell_qdial_pane_t1_ParamLimits

0x42e9,	// (0x00075843) cell_qdial_pane_t1

0x4301,	// (0x0007585b) cell_qdial_pane_t2_ParamLimits

0x4301,	// (0x0007585b) cell_qdial_pane_t2

0x4314,	// (0x0007586e) cell_qdial_pane_t3_ParamLimits

0x4314,	// (0x0007586e) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x00080653) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x00080653) cell_qdial_pane_t

0xd2b5,	// (0x0007e80f) grid_highlight_pane_cp04

0xe31e,	// (0x0007f878) thumbnail_qdial_pane_ParamLimits

0xe31e,	// (0x0007f878) thumbnail_qdial_pane

0xe37a,	// (0x0007f8d4) list_help_pane

0xe383,	// (0x0007f8dd) scroll_pane_cp02

0x4327,	// (0x00075881) help_list_pane_t1_ParamLimits

0x4327,	// (0x00075881) help_list_pane_t1

0x434e,	// (0x000758a8) bg_notes_pane_g2

0x4356,	// (0x000758b0) bg_notes_pane_g3

0x435e,	// (0x000758b8) notes_bg_pane_g1

0x4366,	// (0x000758c0) notes_bg_pane_g4

0x436e,	// (0x000758c8) notes_bg_pane_g5

0x4376,	// (0x000758d0) notes_bg_pane_g6

0x437e,	// (0x000758d8) notes_bg_pane_g7

0x4386,	// (0x000758e0) notes_bg_pane_g8

0x438e,	// (0x000758e8) notes_bg_pane_g9

0x0006,

0xf117,	// (0x00080671) notes_bg_pane_g

0x4396,	// (0x000758f0) list_notes_text_pane_ParamLimits

0x4396,	// (0x000758f0) list_notes_text_pane

0xe38c,	// (0x0007f8e6) list_notes_text_pane_g1

0x30b6,	// (0x00074610) list_notes_text_pane_t1

0x43be,	// (0x00075918) listscroll_cale_week_pane

0x43ea,	// (0x00075944) bg_cale_heading_pane

0x4413,	// (0x0007596d) bg_cale_pane_cp01

0x4435,	// (0x0007598f) cale_week_corner_pane

0x4454,	// (0x000759ae) cale_week_day_heading_pane

0x4482,	// (0x000759dc) cale_week_scroll_pane_g1

0x44a6,	// (0x00075a00) cale_week_scroll_pane_g2

0x44be,	// (0x00075a18) cale_week_scroll_pane_g3

0x44d6,	// (0x00075a30) cale_week_scroll_pane_g4

0x44ee,	// (0x00075a48) cale_week_scroll_pane_g5

0x4506,	// (0x00075a60) cale_week_scroll_pane_g6

0x4526,	// (0x00075a80) cale_week_scroll_pane_g7

0x4546,	// (0x00075aa0) cale_week_scroll_pane_g8

0x4566,	// (0x00075ac0) cale_week_scroll_pane_g9

0x4583,	// (0x00075add) cale_week_scroll_pane_g10

0x45a0,	// (0x00075afa) cale_week_scroll_pane_g11

0x45bf,	// (0x00075b19) cale_week_scroll_pane_g12

0x45e4,	// (0x00075b3e) cale_week_scroll_pane_g13

0x460d,	// (0x00075b67) cale_week_scroll_pane_g14

0x4636,	// (0x00075b90) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x00080680) cale_week_scroll_pane_g

0x467f,	// (0x00075bd9) cale_week_time_pane

0x469f,	// (0x00075bf9) grid_cale_week_pane

0xe3c1,	// (0x0007f91b) scroll_pane_cp08

0x46d0,	// (0x00075c2a) cell_cale_week_pane_ParamLimits

0x46d0,	// (0x00075c2a) cell_cale_week_pane

0x4760,	// (0x00075cba) cale_week_day_heading_pane_t1

0x4788,	// (0x00075ce2) cale_week_day_heading_pane_t2

0x47b5,	// (0x00075d0f) cale_week_day_heading_pane_t3

0x47e2,	// (0x00075d3c) cale_week_day_heading_pane_t4

0x480f,	// (0x00075d69) cale_week_day_heading_pane_t5

0x483c,	// (0x00075d96) cale_week_day_heading_pane_t6

0x4869,	// (0x00075dc3) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x000806a1) cale_week_day_heading_pane_t

0xe3de,	// (0x0007f938) bg_cale_side_pane

0x4891,	// (0x00075deb) cale_week_time_pane_t1

0x48b5,	// (0x00075e0f) cale_week_time_pane_t2

0x48d9,	// (0x00075e33) cale_week_time_pane_t3

0x48fd,	// (0x00075e57) cale_week_time_pane_t4

0x4921,	// (0x00075e7b) cale_week_time_pane_t5

0x4947,	// (0x00075ea1) cale_week_time_pane_t6

0x496f,	// (0x00075ec9) cale_week_time_pane_t7

0x499b,	// (0x00075ef5) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x000806b0) cale_week_time_pane_t

0x49cb,	// (0x00075f25) cell_cale_week_pane_g2

0x49ef,	// (0x00075f49) cell_cale_week_pane_g3_ParamLimits

0x49ef,	// (0x00075f49) cell_cale_week_pane_g3

0xe3ec,	// (0x0007f946) grid_highlight_pane_cp07

0xe3f4,	// (0x0007f94e) listscroll_gms_pane

0xe3fe,	// (0x0007f958) grid_gms_pane

0xe407,	// (0x0007f961) listscroll_gms_pane_g1

0xe40f,	// (0x0007f969) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x000806c1) listscroll_gms_pane_g

0x4a07,	// (0x00075f61) scroll_pane_cp010

0x4a12,	// (0x00075f6c) cell_gms_pane_ParamLimits

0x4a12,	// (0x00075f6c) cell_gms_pane

0x4a25,	// (0x00075f7f) cell_gms_pane_g1

0xe417,	// (0x0007f971) cell_gms_pane_g2

0xe41f,	// (0x0007f979) cell_gms_pane_g3

0xe428,	// (0x0007f982) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x000806c6) cell_gms_pane_g

0xe431,	// (0x0007f98b) grid_highlight_pane_cp09

0x6a27,	// (0x00077f81) phob_pre_status_pane_g1

0x6a2f,	// (0x00077f89) phob_pre_status_pane_g2

0x6a37,	// (0x00077f91) phob_pre_status_pane_g3

0x6a3f,	// (0x00077f99) phob_pre_status_pane_g4

0x0004,

0xf525,	// (0x00080a7f) phob_pre_status_pane_g

0x6a4f,	// (0x00077fa9) phob_pre_status_pane_t1

0x6a5f,	// (0x00077fb9) phob_pre_status_pane_t2

0x6a6f,	// (0x00077fc9) phob_pre_status_pane_t3

0x0002,

0xf530,	// (0x00080a8a) phob_pre_status_pane_t

0xe439,	// (0x0007f993) bg_list_pane_cp05

0x4a35,	// (0x00075f8f) grid_vorec_pane

0x4a3f,	// (0x00075f99) vorec_t1

0x4a4d,	// (0x00075fa7) vorec_t2

0x4a5b,	// (0x00075fb5) vorec_t3

0x4a69,	// (0x00075fc3) vorec_t4

0xb50b,	// (0x0007ca65) vorec_t5

0xb519,	// (0x0007ca73) vorec_t6

0x0004,

0xf175,	// (0x000806cf) vorec_t

0xb527,	// (0x0007ca81) wait_bar_pane_cp01

0x4a85,	// (0x00075fdf) cell_vorec_pane_ParamLimits

0x4a85,	// (0x00075fdf) cell_vorec_pane

0x4a9a,	// (0x00075ff4) cell_vorec_pane_g1

0xd2b5,	// (0x0007e80f) grid_highlight_pane_cp05

0xce5f,	// (0x0007e3b9) cams_zoom_pane

0xce5f,	// (0x0007e3b9) image_vga_pane

0xd599,	// (0x0007eaf3) main_camera_pane_g1

0xd599,	// (0x0007eaf3) main_camera_pane_g2

0xd599,	// (0x0007eaf3) main_camera_pane_g3

0xd599,	// (0x0007eaf3) main_camera_pane_g4

0xd599,	// (0x0007eaf3) main_camera_pane_g5

0xd599,	// (0x0007eaf3) main_camera_pane_g6

0xd599,	// (0x0007eaf3) main_camera_pane_g7

0x0007,

0xf180,	// (0x000806da) main_camera_pane_g

0xe25b,	// (0x0007f7b5) main_camera_pane_t1

0xe25b,	// (0x0007f7b5) main_camera_pane_t2

0x0001,

0xf191,	// (0x000806eb) main_camera_pane_t

0x4aa4,	// (0x00075ffe) cams_zoom_pane_cp_ParamLimits

0x4aa4,	// (0x00075ffe) cams_zoom_pane_cp

0x4ad2,	// (0x0007602c) image_cif_pane_ParamLimits

0x4ad2,	// (0x0007602c) image_cif_pane

0xce55,	// (0x0007e3af) image_subqcif_pane

0x4ae0,	// (0x0007603a) main_video_pane_g1_ParamLimits

0x4ae0,	// (0x0007603a) main_video_pane_g1

0x4b08,	// (0x00076062) main_video_pane_g2_ParamLimits

0x4b08,	// (0x00076062) main_video_pane_g2

0x4b3b,	// (0x00076095) main_video_pane_g3_ParamLimits

0x4b3b,	// (0x00076095) main_video_pane_g3

0x4b3b,	// (0x00076095) main_video_pane_g4_ParamLimits

0x4b3b,	// (0x00076095) main_video_pane_g4

0x4b69,	// (0x000760c3) main_video_pane_g5_ParamLimits

0x4b69,	// (0x000760c3) main_video_pane_g5

0xe441,	// (0x0007f99b) main_video_pane_g6_ParamLimits

0xe441,	// (0x0007f99b) main_video_pane_g6

0x0006,

0xf196,	// (0x000806f0) main_video_pane_g_ParamLimits

0xf196,	// (0x000806f0) main_video_pane_g

0x4b85,	// (0x000760df) main_video_pane_t1_ParamLimits

0x4b85,	// (0x000760df) main_video_pane_t1

0xe23d,	// (0x0007f797) cams_zoom_pane_g1

0xe23d,	// (0x0007f797) cams_zoom_pane_g2

0xe23d,	// (0x0007f797) cams_zoom_pane_g3

0xe23d,	// (0x0007f797) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x000806ff) cams_zoom_pane_g

0xce5f,	// (0x0007e3b9) grid_cams_pane

0xce5f,	// (0x0007e3b9) linegrid_cams_pane

0x4bbf,	// (0x00076119) cell_cams_pane_ParamLimits

0x4bbf,	// (0x00076119) cell_cams_pane

0xce55,	// (0x0007e3af) cams_burst_image_pane

0xe23d,	// (0x0007f797) cell_cams_pane_g1

0xce55,	// (0x0007e3af) grid_highlight_pane_cp03

0xd528,	// (0x0007ea82) mp_bg_pane_g1

0xce55,	// (0x0007e3af) bg_list_pane_cp03

0xce55,	// (0x0007e3af) bg_mp_pane

0xce55,	// (0x0007e3af) grid_mp_pane

0xe23d,	// (0x0007f797) media_player_g1

0xe993,	// (0x0007feed) media_player_t1

0xe993,	// (0x0007feed) media_player_t2

0xe993,	// (0x0007feed) media_player_t3

0xe993,	// (0x0007feed) media_player_t4

0xe993,	// (0x0007feed) media_player_t5

0xe993,	// (0x0007feed) media_player_t6

0xe993,	// (0x0007feed) media_player_t7

0x0006,

0xf50f,	// (0x00080a69) media_player_t

0xce55,	// (0x0007e3af) wait_bar_pane_cp02

0xf4f4,	// (0x00080a4e) main_usb_pane_t

0xebfe,	// (0x00080158) cell_mp_pane

0xd528,	// (0x0007ea82) cell_mp_pane_g1

0xd2b5,	// (0x0007e80f) grid_highlight_pane_cp06

0xe45b,	// (0x0007f9b5) grid_skin_colour_pane

0xe463,	// (0x0007f9bd) list_highlight_pane_cp03

0x4bd4,	// (0x0007612e) skin_g1

0xe46b,	// (0x0007f9c5) skin_t1

0xe47a,	// (0x0007f9d4) skin_t2

0x0001,

0xf1d3,	// (0x0008072d) skin_t

0x4bde,	// (0x00076138) cell_skin_colour_pane_ParamLimits

0x4bde,	// (0x00076138) cell_skin_colour_pane

0xe488,	// (0x0007f9e2) cell_skin_colour_pane_g1

0x4c5e,	// (0x000761b8) call_video_g1_ParamLimits

0x4c5e,	// (0x000761b8) call_video_g1

0x4c6e,	// (0x000761c8) call_video_g2_ParamLimits

0x4c6e,	// (0x000761c8) call_video_g2

0x0001,

0xf1d8,	// (0x00080732) call_video_g_ParamLimits

0xf1d8,	// (0x00080732) call_video_g

0x4cbe,	// (0x00076218) call_video_uplink_pane_cp1_ParamLimits

0x4cbe,	// (0x00076218) call_video_uplink_pane_cp1

0xe49a,	// (0x0007f9f4) call_video_uplink_pane_cp2

0x4d8c,	// (0x000762e6) video_down_crop_pane_ParamLimits

0x4d8c,	// (0x000762e6) video_down_crop_pane

0x4e7e,	// (0x000763d8) video_down_pane_ParamLimits

0x4e7e,	// (0x000763d8) video_down_pane

0xe4a2,	// (0x0007f9fc) video_down_subqcif_pane_ParamLimits

0xe4a2,	// (0x0007f9fc) video_down_subqcif_pane

0xe4bc,	// (0x0007fa16) video_down_subqcif_pane_cp_ParamLimits

0xe4bc,	// (0x0007fa16) video_down_subqcif_pane_cp

0xe4e4,	// (0x0007fa3e) im_reading_pane_ParamLimits

0xe4e4,	// (0x0007fa3e) im_reading_pane

0x4f9b,	// (0x000764f5) im_writing_pane_ParamLimits

0x4f9b,	// (0x000764f5) im_writing_pane

0x4fb9,	// (0x00076513) im_reading_pane_t1

0xe4fe,	// (0x0007fa58) list_im_pane

0xe50f,	// (0x0007fa69) scroll_pane_cp07

0x4ffb,	// (0x00076555) im_writing_pane_t1_ParamLimits

0x4ffb,	// (0x00076555) im_writing_pane_t1

0xe528,	// (0x0007fa82) im_writing_pane_t2_ParamLimits

0xe528,	// (0x0007fa82) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x0008073c) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x0008073c) im_writing_pane_t

0xd2b5,	// (0x0007e80f) input_focus_pane_cp04

0xd2b5,	// (0x0007e80f) input_focus_pane_cp05

0x500d,	// (0x00076567) list_im_single_pane_ParamLimits

0x500d,	// (0x00076567) list_im_single_pane

0xe545,	// (0x0007fa9f) list_single_im_pane_t1

0xe439,	// (0x0007f993) blid_accuracy_pane

0xe439,	// (0x0007f993) blid_compass_pane

0x1040,	// (0x0007259a) main_location_t1

0x1040,	// (0x0007259a) main_location_t2

0x1040,	// (0x0007259a) main_location_t3

0x0002,

0xf51e,	// (0x00080a78) main_location_t

0xd2b5,	// (0x0007e80f) aid_levels_location

0xd528,	// (0x0007ea82) blid_accuracy_pane_g1

0xd528,	// (0x0007ea82) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x00080790) blid_accuracy_pane_g

0xe57f,	// (0x0007fad9) wml_content_pane

0xe5bd,	// (0x0007fb17) wml_button_pane_ParamLimits

0xe5bd,	// (0x0007fb17) wml_button_pane

0x5026,	// (0x00076580) wml_list_single_large_pane_ParamLimits

0x5026,	// (0x00076580) wml_list_single_large_pane

0x5048,	// (0x000765a2) wml_list_single_medium_pane_ParamLimits

0x5048,	// (0x000765a2) wml_list_single_medium_pane

0x506b,	// (0x000765c5) wml_list_single_small_pane_ParamLimits

0x506b,	// (0x000765c5) wml_list_single_small_pane

0xe5d1,	// (0x0007fb2b) wml_selection_box_pane_ParamLimits

0xe5d1,	// (0x0007fb2b) wml_selection_box_pane

0xe5e4,	// (0x0007fb3e) wml_list_single_pane_t1

0xe5f3,	// (0x0007fb4d) wml_list_single_medium_pane_t1

0xe602,	// (0x0007fb5c) wml_list_single_large_pane_t1

0xe611,	// (0x0007fb6b) input_focus_pane_cp02_ParamLimits

0xe611,	// (0x0007fb6b) input_focus_pane_cp02

0xe624,	// (0x0007fb7e) wml_selection_box_pane_g1

0xe62d,	// (0x0007fb87) wml_selection_box_pane_t1_ParamLimits

0xe62d,	// (0x0007fb87) wml_selection_box_pane_t1

0xd510,	// (0x0007ea6a) bg_wml_button_pane_ParamLimits

0xd510,	// (0x0007ea6a) bg_wml_button_pane

0xe645,	// (0x0007fb9f) wml_button_pane_g1

0xe64d,	// (0x0007fba7) wml_button_pane_t1

0xe645,	// (0x0007fb9f) wml_button_bg_pane_g1

0xe65d,	// (0x0007fbb7) wml_button_bg_pane_g2

0xe665,	// (0x0007fbbf) wml_button_bg_pane_g3

0xe66d,	// (0x0007fbc7) wml_button_bg_pane_g4

0xe675,	// (0x0007fbcf) wml_button_bg_pane_g5

0xe67d,	// (0x0007fbd7) wml_button_bg_pane_g6

0xe685,	// (0x0007fbdf) wml_button_bg_pane_g7

0xe68d,	// (0x0007fbe7) wml_button_bg_pane_g8

0xe695,	// (0x0007fbef) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x00080741) wml_button_bg_pane_g

0x5093,	// (0x000765ed) bg_list_pane_cp02

0xe69d,	// (0x0007fbf7) mce_header_pane_ParamLimits

0xe69d,	// (0x0007fbf7) mce_header_pane

0xe6b3,	// (0x0007fc0d) mce_icon_pane

0xe6b3,	// (0x0007fc0d) mce_image_pane

0xe6bc,	// (0x0007fc16) mce_text_pane_ParamLimits

0xe6bc,	// (0x0007fc16) mce_text_pane

0x509d,	// (0x000765f7) scroll_pane_cp03

0xe5b5,	// (0x0007fb0f) scroll_pane_cp04

0xe6cf,	// (0x0007fc29) scroll_pane_cp05_ParamLimits

0xe6cf,	// (0x0007fc29) scroll_pane_cp05

0x50a7,	// (0x00076601) mce_header_field_pane_ParamLimits

0x50a7,	// (0x00076601) mce_header_field_pane

0x50c9,	// (0x00076623) mce_header_field_pane_2_ParamLimits

0x50c9,	// (0x00076623) mce_header_field_pane_2

0x50df,	// (0x00076639) mce_header_field_pane_3

0x50e7,	// (0x00076641) list_single_mce_message_pane_ParamLimits

0x50e7,	// (0x00076641) list_single_mce_message_pane

0x5106,	// (0x00076660) list_single_mce_smart_pane_ParamLimits

0x5106,	// (0x00076660) list_single_mce_smart_pane

0xe6db,	// (0x0007fc35) input_focus_pane_cp03

0xe6e4,	// (0x0007fc3e) list_header_data_pane

0x5130,	// (0x0007668a) mce_header_field_pane_t1

0x5140,	// (0x0007669a) list_single_mce_header_pane_ParamLimits

0x5140,	// (0x0007669a) list_single_mce_header_pane

0xe6ec,	// (0x0007fc46) list_single_mce_header_pane_t1

0xe6fb,	// (0x0007fc55) list_single_mce_message_pane_g1

0xe703,	// (0x0007fc5d) list_single_mce_message_pane_t1

0x5184,	// (0x000766de) bg_cale_heading_pane_cp01_ParamLimits

0x5184,	// (0x000766de) bg_cale_heading_pane_cp01

0xe711,	// (0x0007fc6b) bg_cale_pane_cp02_ParamLimits

0xe711,	// (0x0007fc6b) bg_cale_pane_cp02

0x51d6,	// (0x00076730) cale_month_corner_pane

0x51f5,	// (0x0007674f) cale_month_day_heading_pane_ParamLimits

0x51f5,	// (0x0007674f) cale_month_day_heading_pane

0x5257,	// (0x000767b1) cale_month_pane_g1_ParamLimits

0x5257,	// (0x000767b1) cale_month_pane_g1

0x529e,	// (0x000767f8) cale_month_pane_g2_ParamLimits

0x529e,	// (0x000767f8) cale_month_pane_g2

0x52d6,	// (0x00076830) cale_month_pane_g3_ParamLimits

0x52d6,	// (0x00076830) cale_month_pane_g3

0x532a,	// (0x00076884) cale_month_pane_g4_ParamLimits

0x532a,	// (0x00076884) cale_month_pane_g4

0x537e,	// (0x000768d8) cale_month_pane_g5_ParamLimits

0x537e,	// (0x000768d8) cale_month_pane_g5

0x53d2,	// (0x0007692c) cale_month_pane_g6_ParamLimits

0x53d2,	// (0x0007692c) cale_month_pane_g6

0x5436,	// (0x00076990) cale_month_pane_g7_ParamLimits

0x5436,	// (0x00076990) cale_month_pane_g7

0x549a,	// (0x000769f4) cale_month_pane_g8_ParamLimits

0x549a,	// (0x000769f4) cale_month_pane_g8

0x54fe,	// (0x00076a58) cale_month_pane_g9_ParamLimits

0x54fe,	// (0x00076a58) cale_month_pane_g9

0x5558,	// (0x00076ab2) cale_month_pane_g10_ParamLimits

0x5558,	// (0x00076ab2) cale_month_pane_g10

0x55aa,	// (0x00076b04) cale_month_pane_g11_ParamLimits

0x55aa,	// (0x00076b04) cale_month_pane_g11

0x55f8,	// (0x00076b52) cale_month_pane_g12_ParamLimits

0x55f8,	// (0x00076b52) cale_month_pane_g12

0x5648,	// (0x00076ba2) cale_month_pane_g13_ParamLimits

0x5648,	// (0x00076ba2) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x00080754) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x00080754) cale_month_pane_g

0x5698,	// (0x00076bf2) cale_month_week_pane

0x56b8,	// (0x00076c12) grid_cale_month_pane_ParamLimits

0x56b8,	// (0x00076c12) grid_cale_month_pane

0x5711,	// (0x00076c6b) cale_month_day_heading_pane_t1

0x5793,	// (0x00076ced) cale_month_day_heading_pane_t2

0x580c,	// (0x00076d66) cale_month_day_heading_pane_t3

0x5885,	// (0x00076ddf) cale_month_day_heading_pane_t4

0x58fe,	// (0x00076e58) cale_month_day_heading_pane_t5

0x597f,	// (0x00076ed9) cale_month_day_heading_pane_t6

0x5a08,	// (0x00076f62) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x0008076f) cale_month_day_heading_pane_t

0xe3de,	// (0x0007f938) bg_cale_side_pane_cp01

0x5a91,	// (0x00076feb) cale_month_week_pane_t1

0x5aaa,	// (0x00077004) cale_month_week_pane_t2

0x5ac3,	// (0x0007701d) cale_month_week_pane_t3

0x5adc,	// (0x00077036) cale_month_week_pane_t4

0x5af5,	// (0x0007704f) cale_month_week_pane_t5

0x5b12,	// (0x0007706c) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x0008077e) cale_month_week_pane_t

0x5b35,	// (0x0007708f) cell_cale_month_pane_ParamLimits

0x5b35,	// (0x0007708f) cell_cale_month_pane

0x5c63,	// (0x000771bd) cell_cale_month_pane_g1

0x5c6f,	// (0x000771c9) cell_cale_month_pane_t1_ParamLimits

0x5c6f,	// (0x000771c9) cell_cale_month_pane_t1

0xe3ec,	// (0x0007f946) grid_highlight_pane_cp08

0xd528,	// (0x0007ea82) main_smil_g1

0x5c9b,	// (0x000771f5) smil_status_pane

0xe750,	// (0x0007fcaa) smil_text_pane

0x0f56,	// (0x000724b0) bg_popup_call3_rect_pane_g8

0x0f5e,	// (0x000724b8) bg_popup_call3_rect_pane_g9

0x0008,

0xf4b2,	// (0x00080a0c) bg_popup_call3_rect_pane_g

0x111c,	// (0x00072676) smil_status_volume_pane_g1

0xe75a,	// (0x0007fcb4) smil_status_pane_t1

0x6de4,	// (0x0007833e) volume_smil_pane

0xe771,	// (0x0007fccb) list_smil_text_pane

0x5cae,	// (0x00077208) scroll_pane_cp011

0x5cb9,	// (0x00077213) smil_text_list_pane_t1_ParamLimits

0x5cb9,	// (0x00077213) smil_text_list_pane_t1

0x5d0d,	// (0x00077267) aid_volume_smil_ParamLimits

0x5d0d,	// (0x00077267) aid_volume_smil

0xd528,	// (0x0007ea82) smil_volume_pane_g1

0xd528,	// (0x0007ea82) smil_volume_pane_g2

0x0001,

0xf236,	// (0x00080790) smil_volume_pane_g

0x43be,	// (0x00075918) listscroll_cale_day_pane

0xe77b,	// (0x0007fcd5) bg_cale_pane

0xe793,	// (0x0007fced) list_cale_pane

0xe7b6,	// (0x0007fd10) scroll_pane_cp09

0xe7c7,	// (0x0007fd21) cale_bg_pane_g1

0xe7cf,	// (0x0007fd29) cale_bg_pane_g2

0xe7d7,	// (0x0007fd31) cale_bg_pane_g3

0xe7df,	// (0x0007fd39) cale_bg_pane_g4

0xe7e7,	// (0x0007fd41) cale_bg_pane_g5

0xe7ef,	// (0x0007fd49) cale_bg_pane_g6

0xe7f7,	// (0x0007fd51) cale_bg_pane_g7

0xe7ff,	// (0x0007fd59) cale_bg_pane_g8

0xe807,	// (0x0007fd61) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x00080795) cale_bg_pane_g

0xe80f,	// (0x0007fd69) list_cale_time_pane_ParamLimits

0xe80f,	// (0x0007fd69) list_cale_time_pane

0xe826,	// (0x0007fd80) list_cale_time_pane_g1_ParamLimits

0xe826,	// (0x0007fd80) list_cale_time_pane_g1

0xe832,	// (0x0007fd8c) list_cale_time_pane_g2_ParamLimits

0xe832,	// (0x0007fd8c) list_cale_time_pane_g2

0x5d37,	// (0x00077291) list_cale_time_pane_g3_ParamLimits

0x5d37,	// (0x00077291) list_cale_time_pane_g3

0x5d45,	// (0x0007729f) list_cale_time_pane_g4_ParamLimits

0x5d45,	// (0x0007729f) list_cale_time_pane_g4

0x5d53,	// (0x000772ad) list_cale_time_pane_g5_ParamLimits

0x5d53,	// (0x000772ad) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x000807a8) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x000807a8) list_cale_time_pane_g

0xe84c,	// (0x0007fda6) list_cale_time_pane_t1_ParamLimits

0xe84c,	// (0x0007fda6) list_cale_time_pane_t1

0xe874,	// (0x0007fdce) list_cale_time_pane_t2_ParamLimits

0xe874,	// (0x0007fdce) list_cale_time_pane_t2

0x6025,	// (0x0007757f) aid_blid_cardinal_pane

0x6067,	// (0x000775c1) compass_pane_t4

0xe89c,	// (0x0007fdf6) list_cale_time_pane_t4_ParamLimits

0xe89c,	// (0x0007fdf6) list_cale_time_pane_t4

0x6075,	// (0x000775cf) compass_pane_t5

0x6085,	// (0x000775df) compass_pane_t6

0x6093,	// (0x000775ed) compass_pane_t7

0xecae,	// (0x00080208) navi_pane_cc_t1

0xedfb,	// (0x00080355) aid_phob_thumbnail_center_pane

0x655c,	// (0x00077ab6) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x000807b5) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x000807b5) list_cale_time_pane_t

0xcf0c,	// (0x0007e466) bg_popup_window_pane_cp02_ParamLimits

0xcf0c,	// (0x0007e466) bg_popup_window_pane_cp02

0xe8c4,	// (0x0007fe1e) heading_pane_cp01_ParamLimits

0xe8c4,	// (0x0007fe1e) heading_pane_cp01

0xe8d0,	// (0x0007fe2a) loc_req_pane_ParamLimits

0xe8d0,	// (0x0007fe2a) loc_req_pane

0xe8e0,	// (0x0007fe3a) loc_type_pane_ParamLimits

0xe8e0,	// (0x0007fe3a) loc_type_pane

0xe8f2,	// (0x0007fe4c) loc_type_pane_t1_ParamLimits

0xe8f2,	// (0x0007fe4c) loc_type_pane_t1

0xe904,	// (0x0007fe5e) loc_type_pane_t2_ParamLimits

0xe904,	// (0x0007fe5e) loc_type_pane_t2

0xe916,	// (0x0007fe70) loc_type_pane_t3_ParamLimits

0xe916,	// (0x0007fe70) loc_type_pane_t3

0x0002,

0xf262,	// (0x000807bc) loc_type_pane_t_ParamLimits

0xf262,	// (0x000807bc) loc_type_pane_t

0xe928,	// (0x0007fe82) list_loc_req_pane

0xe932,	// (0x0007fe8c) scroll_pane_cp012

0x5d61,	// (0x000772bb) list_single_loc_request_popup_menu_pane_ParamLimits

0x5d61,	// (0x000772bb) list_single_loc_request_popup_menu_pane

0xe93d,	// (0x0007fe97) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe93d,	// (0x0007fe97) list_single_loc_request_popup_menu_pane_g1

0xe949,	// (0x0007fea3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe949,	// (0x0007fea3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x000807c3) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x000807c3) list_single_loc_request_popup_menu_pane_g

0xe955,	// (0x0007feaf) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe955,	// (0x0007feaf) list_single_loc_request_popup_menu_pane_t1

0x5d73,	// (0x000772cd) bg_popup_window_pane_cp03_ParamLimits

0x5d73,	// (0x000772cd) bg_popup_window_pane_cp03

0x5d81,	// (0x000772db) heading_loc_req_pane_ParamLimits

0x5d81,	// (0x000772db) heading_loc_req_pane

0x5d8d,	// (0x000772e7) popup_dyc_status_message_window_g1_ParamLimits

0x5d8d,	// (0x000772e7) popup_dyc_status_message_window_g1

0x5d99,	// (0x000772f3) popup_dyc_status_message_window_t1_ParamLimits

0x5d99,	// (0x000772f3) popup_dyc_status_message_window_t1

0x5dab,	// (0x00077305) popup_dyc_status_message_window_t2_ParamLimits

0x5dab,	// (0x00077305) popup_dyc_status_message_window_t2

0x5dbd,	// (0x00077317) popup_dyc_status_message_window_t3_ParamLimits

0x5dbd,	// (0x00077317) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x000807c8) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x000807c8) popup_dyc_status_message_window_t

0xd2b5,	// (0x0007e80f) bg_heading_pane_cp01

0xe96b,	// (0x0007fec5) heading_loc_req_pane_g1

0xe973,	// (0x0007fecd) heading_loc_req_pane_g2

0xe97b,	// (0x0007fed5) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x000807cf) heading_loc_req_pane_g

0xe983,	// (0x0007fedd) heading_loc_req_pane_t1

0xe9a3,	// (0x0007fefd) bg_popup_sub_pane_cp01_ParamLimits

0xe9a3,	// (0x0007fefd) bg_popup_sub_pane_cp01

0xe9b1,	// (0x0007ff0b) popup_cale_events_window_g1_ParamLimits

0xe9b1,	// (0x0007ff0b) popup_cale_events_window_g1

0xe9d1,	// (0x0007ff2b) popup_cale_events_window_g2_ParamLimits

0xe9d1,	// (0x0007ff2b) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x000807f1) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x000807f1) popup_cale_events_window_g

0xe9f1,	// (0x0007ff4b) popup_cale_events_window_t1_ParamLimits

0xe9f1,	// (0x0007ff4b) popup_cale_events_window_t1

0xea03,	// (0x0007ff5d) popup_cale_events_window_t2_ParamLimits

0xea03,	// (0x0007ff5d) popup_cale_events_window_t2

0xea41,	// (0x0007ff9b) popup_cale_events_window_t3_ParamLimits

0xea41,	// (0x0007ff9b) popup_cale_events_window_t3

0xea7b,	// (0x0007ffd5) popup_cale_events_window_t4_ParamLimits

0xea7b,	// (0x0007ffd5) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x000807f6) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x000807f6) popup_cale_events_window_t

0x5de7,	// (0x00077341) call_type_pane

0xefe5,	// (0x0008053f) popup_call_status_window_g1

0x5df3,	// (0x0007734d) popup_call_status_window_g2

0x5dff,	// (0x00077359) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x000807ff) popup_call_status_window_g

0xeab1,	// (0x0008000b) call_type_pane_g1

0xeaba,	// (0x00080014) call_type_pane_g2

0x0001,

0xf2ac,	// (0x00080806) call_type_pane_g

0xd2b5,	// (0x0007e80f) bg_popup_sub_pane_cp02

0xeac3,	// (0x0008001d) listscroll_popup_wml_pane

0xeacb,	// (0x00080025) list_wml_pane

0xead5,	// (0x0008002f) scroll_pane_cp013

0xeae0,	// (0x0008003a) list_single_graphic_popup_wml_pane_ParamLimits

0xeae0,	// (0x0008003a) list_single_graphic_popup_wml_pane

0xd528,	// (0x0007ea82) list_single_graphic_popup_wml_pane_g1

0xeaf4,	// (0x0008004e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x0008080b) list_single_graphic_popup_wml_pane_g

0xeafc,	// (0x00080056) list_single_graphic_popup_wml_pane_t1

0xeb12,	// (0x0008006c) aid_call_pane

0xd508,	// (0x0007ea62) popup_clock_analogue_window_g1

0xd508,	// (0x0007ea62) popup_clock_analogue_window_g2

0x5e0b,	// (0x00077365) popup_clock_analogue_window_g3

0x5e0b,	// (0x00077365) popup_clock_analogue_window_g4

0xd528,	// (0x0007ea82) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x00080810) popup_clock_analogue_window_g

0x5e13,	// (0x0007736d) popup_clock_analogue_window_t1

0x5e21,	// (0x0007737b) clock_digital_number_pane_ParamLimits

0x5e21,	// (0x0007737b) clock_digital_number_pane

0x5e2d,	// (0x00077387) clock_digital_number_pane_cp02_ParamLimits

0x5e2d,	// (0x00077387) clock_digital_number_pane_cp02

0x5e39,	// (0x00077393) clock_digital_number_pane_cp03_ParamLimits

0x5e39,	// (0x00077393) clock_digital_number_pane_cp03

0x5e45,	// (0x0007739f) clock_digital_number_pane_cp04_ParamLimits

0x5e45,	// (0x0007739f) clock_digital_number_pane_cp04

0x5e51,	// (0x000773ab) clock_digital_separator_pane_ParamLimits

0x5e51,	// (0x000773ab) clock_digital_separator_pane

0x5e5d,	// (0x000773b7) popup_clock_digital_window_t1

0xd528,	// (0x0007ea82) clock_digital_number_pane_g1

0xd528,	// (0x0007ea82) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x00080790) clock_digital_number_pane_g

0xd528,	// (0x0007ea82) clock_digital_separator_pane_g1

0xd528,	// (0x0007ea82) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x00080790) clock_digital_separator_pane_g

0xd2b5,	// (0x0007e80f) bg_popup_window_pane_cp04

0xeb1a,	// (0x00080074) heading_pane_cp03

0xe439,	// (0x0007f993) listscroll_popup_gms_pane

0xd2b5,	// (0x0007e80f) grid_large_graphic_popup_pane

0xeb23,	// (0x0008007d) listscroll_popup_gms_pane_g1

0xeb2c,	// (0x00080086) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x0008081b) listscroll_popup_gms_pane_g

0xeb35,	// (0x0008008f) scroll_pane_cp014

0xce5f,	// (0x0007e3b9) cell_large_graphic_popup_pane_ParamLimits

0xce5f,	// (0x0007e3b9) cell_large_graphic_popup_pane

0xd58b,	// (0x0007eae5) cell_large_graphic_popup_pane_g1_ParamLimits

0xd58b,	// (0x0007eae5) cell_large_graphic_popup_pane_g1

0xeb3e,	// (0x00080098) cell_large_graphic_popup_pane_g2_ParamLimits

0xeb3e,	// (0x00080098) cell_large_graphic_popup_pane_g2

0xeb4c,	// (0x000800a6) cell_large_graphic_popup_pane_g3_ParamLimits

0xeb4c,	// (0x000800a6) cell_large_graphic_popup_pane_g3

0xeb5a,	// (0x000800b4) cell_large_graphic_popup_pane_g4_ParamLimits

0xeb5a,	// (0x000800b4) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x00080820) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x00080820) cell_large_graphic_popup_pane_g

0xd2b5,	// (0x0007e80f) grid_highlight_pane_cp010

0xd528,	// (0x0007ea82) bg_popup_call_pane_g1

0xeb6b,	// (0x000800c5) list_single_graphic_popup_conf_pane_ParamLimits

0xeb6b,	// (0x000800c5) list_single_graphic_popup_conf_pane

0xeb7d,	// (0x000800d7) list_highlight_pane_cp01

0xeb86,	// (0x000800e0) list_single_graphic_popup_conf_pane_g1

0xeb8e,	// (0x000800e8) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x00080829) list_single_graphic_popup_conf_pane_g

0xeb96,	// (0x000800f0) list_single_graphic_popup_conf_pane_t1

0xeba4,	// (0x000800fe) linegrid_cams_pane_g1

0x5e7a,	// (0x000773d4) linegrid_cams_pane_g2

0xe41f,	// (0x0007f979) linegrid_cams_pane_g3

0xebad,	// (0x00080107) linegrid_cams_pane_g4

0x5e83,	// (0x000773dd) linegrid_cams_pane_g5

0x5e8c,	// (0x000773e6) linegrid_cams_pane_g6

0xe428,	// (0x0007f982) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x0008082e) linegrid_cams_pane_g

0xebb6,	// (0x00080110) popup_clock_analogue_window

0xebb6,	// (0x00080110) popup_clock_digital_window

0xd2b5,	// (0x0007e80f) popup_phob_thumbnail_window

0xd528,	// (0x0007ea82) call_video_uplink_pane_g1

0xebbf,	// (0x00080119) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x0008083d) call_video_uplink_pane_g

0xebc7,	// (0x00080121) video_uplink_pane

0xebcf,	// (0x00080129) mce_image_pane_g1

0x5e97,	// (0x000773f1) mce_image_pane_g2

0x5ea1,	// (0x000773fb) mce_image_pane_g3

0x5eab,	// (0x00077405) mce_image_pane_g4

0x5eb3,	// (0x0007740d) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x00080842) mce_image_pane_g

0xebd9,	// (0x00080133) control_top_pane_stacon_cp01_ParamLimits

0xebd9,	// (0x00080133) control_top_pane_stacon_cp01

0xebed,	// (0x00080147) uni_indicator_pane_stacon_cp01_ParamLimits

0xebed,	// (0x00080147) uni_indicator_pane_stacon_cp01

0xebfe,	// (0x00080158) bg_popup_sub_pane_cp03

0x5ebb,	// (0x00077415) chi_dic_find_pane

0x5ec3,	// (0x0007741d) listscroll_chi_dic_pane

0x5ecc,	// (0x00077426) main_pane_chidic_g1

0x5edf,	// (0x00077439) chi_dic_find_pane_t1

0xec08,	// (0x00080162) find_chidic_pane

0xec11,	// (0x0008016b) chi_dic_list_pane_ParamLimits

0xec11,	// (0x0008016b) chi_dic_list_pane

0xec22,	// (0x0008017c) scroll_pane_cp020

0x5eed,	// (0x00077447) find_chidic_pane_t1

0xd2b5,	// (0x0007e80f) input_focus_pane_cp06

0x5efc,	// (0x00077456) list_chi_dic_pane_ParamLimits

0x5efc,	// (0x00077456) list_chi_dic_pane

0x5f11,	// (0x0007746b) list_chi_dic_pane_t1_ParamLimits

0x5f11,	// (0x0007746b) list_chi_dic_pane_t1

0xd2b5,	// (0x0007e80f) list_highlight_pane_cp020

0xec2a,	// (0x00080184) bg_cale_heading_pane_g1

0x5f24,	// (0x0007747e) bg_cale_heading_pane_g2

0x5f2c,	// (0x00077486) bg_cale_heading_pane_g3

0x5f34,	// (0x0007748e) bg_cale_heading_pane_g4

0x5f3e,	// (0x00077498) bg_cale_heading_pane_g5

0x5f48,	// (0x000774a2) bg_cale_heading_pane_g6

0x5f50,	// (0x000774aa) bg_cale_heading_pane_g7

0x5f58,	// (0x000774b2) bg_cale_heading_pane_g8

0x5f62,	// (0x000774bc) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x0008084d) bg_cale_heading_pane_g

0xec2a,	// (0x00080184) bg_cale_side_pane_g1

0x5f6c,	// (0x000774c6) bg_cale_side_pane_g2

0x5f76,	// (0x000774d0) bg_cale_side_pane_g3

0x5f80,	// (0x000774da) bg_cale_side_pane_g4

0x5f8a,	// (0x000774e4) bg_cale_side_pane_g5

0x5f94,	// (0x000774ee) bg_cale_side_pane_g6

0x5f9e,	// (0x000774f8) bg_cale_side_pane_g7

0x5fa8,	// (0x00077502) bg_cale_side_pane_g8

0x5fb0,	// (0x0007750a) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x00080860) bg_cale_side_pane_g

0x5fb8,	// (0x00077512) popup_call_status_window_ParamLimits

0x5fb8,	// (0x00077512) popup_call_status_window

0xec32,	// (0x0008018c) stacon_top_pane

0xec3a,	// (0x00080194) status_pane_ParamLimits

0xec3a,	// (0x00080194) status_pane

0xec4f,	// (0x000801a9) status_small_pane

0xec57,	// (0x000801b1) control_pane

0xd2b5,	// (0x0007e80f) stacon_bottom_pane

0xec5f,	// (0x000801b9) list_single_mce_smart_pane_t1_ParamLimits

0xec5f,	// (0x000801b9) list_single_mce_smart_pane_t1

0xec72,	// (0x000801cc) list_single_mce_smart_pane_t2_ParamLimits

0xec72,	// (0x000801cc) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x00080873) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x00080873) list_single_mce_smart_pane_t

0x5fc4,	// (0x0007751e) compass_pane

0x5fcf,	// (0x00077529) main_location2_pane_t1

0x5fe5,	// (0x0007753f) main_location2_pane_t2

0x5ffb,	// (0x00077555) main_location2_pane_t3

0x0003,

0xf31e,	// (0x00080878) main_location2_pane_t

0xec91,	// (0x000801eb) compass_pane_g1_ParamLimits

0xec91,	// (0x000801eb) compass_pane_g1

0x6049,	// (0x000775a3) compass_pane_t1

0x6058,	// (0x000775b2) compass_pane_t2

0x0005,

0xf327,	// (0x00080881) compass_pane_t

0x60a3,	// (0x000775fd) text_secondary_cp61

0xeca5,	// (0x000801ff) navi_pane_cams_g5

0xecc8,	// (0x00080222) navi_pane_im_t1

0xecd6,	// (0x00080230) navi_pane_mp_g1_ParamLimits

0xecd6,	// (0x00080230) navi_pane_mp_g1

0xecea,	// (0x00080244) navi_pane_mp_g2_ParamLimits

0xecea,	// (0x00080244) navi_pane_mp_g2

0xecf6,	// (0x00080250) navi_pane_mp_g3_ParamLimits

0xecf6,	// (0x00080250) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x00080895) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x00080895) navi_pane_mp_g

0xed02,	// (0x0008025c) navi_pane_mp_t1

0xed10,	// (0x0008026a) navi_pane_mp_t2

0x0002,

0xf342,	// (0x0008089c) navi_pane_mp_t

0xed4c,	// (0x000802a6) navi_pane_vt_g1

0xed02,	// (0x0008025c) navi_pane_vt_t1

0xed54,	// (0x000802ae) navi_slider_pane

0xe439,	// (0x0007f993) zooming_pane

0xed5c,	// (0x000802b6) navi_slider_pane_g1

0x61d8,	// (0x00077732) navi_slider_pane_g2

0x0006,

0xf349,	// (0x000808a3) navi_slider_pane_g

0xed80,	// (0x000802da) aid_levels_zoom

0xed88,	// (0x000802e2) zooming_pane_g1

0xed90,	// (0x000802ea) zooming_pane_g2

0xed90,	// (0x000802ea) zooming_pane_g3

0x0002,

0xf358,	// (0x000808b2) zooming_pane_g

0xed98,	// (0x000802f2) level_10_zoom

0xeda1,	// (0x000802fb) level_11_zoom

0xedaa,	// (0x00080304) level_1_zoom

0xedb3,	// (0x0008030d) level_2_zoom

0xedbc,	// (0x00080316) level_3_zoom

0xedc5,	// (0x0008031f) level_4_zoom

0xedce,	// (0x00080328) level_5_zoom

0xedd7,	// (0x00080331) level_6_zoom

0xede0,	// (0x0008033a) level_7_zoom

0xede9,	// (0x00080343) level_8_zoom

0xedf2,	// (0x0008034c) level_9_zoom

0xee03,	// (0x0008035d) popup_phob_thumbnail_window_g1

0xee0b,	// (0x00080365) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x000808b9) popup_phob_thumbnail_window_g

0x6a7f,	// (0x00077fd9) level_1_location

0x6a87,	// (0x00077fe1) level_2_location

0x6a8f,	// (0x00077fe9) level_3_location

0x6a99,	// (0x00077ff3) level_4_location

0xe439,	// (0x0007f993) level_5_location

0x61ea,	// (0x00077744) mce_icon_pane_g1

0x61f2,	// (0x0007774c) mce_icon_pane_g2

0x0001,

0xf364,	// (0x000808be) mce_icon_pane_g

0x61fa,	// (0x00077754) main_mup_pane_g1_ParamLimits

0x61fa,	// (0x00077754) main_mup_pane_g1

0xd5a7,	// (0x0007eb01) main_mup_pane_g2_ParamLimits

0xd5a7,	// (0x0007eb01) main_mup_pane_g2

0xd5a7,	// (0x0007eb01) main_mup_pane_g3_ParamLimits

0xd5a7,	// (0x0007eb01) main_mup_pane_g3

0xd5a7,	// (0x0007eb01) main_mup_pane_g4_ParamLimits

0xd5a7,	// (0x0007eb01) main_mup_pane_g4

0xd5a7,	// (0x0007eb01) main_mup_pane_g5_ParamLimits

0xd5a7,	// (0x0007eb01) main_mup_pane_g5

0xd5a7,	// (0x0007eb01) main_mup_pane_g6_ParamLimits

0xd5a7,	// (0x0007eb01) main_mup_pane_g6

0xd5a7,	// (0x0007eb01) main_mup_pane_g7_ParamLimits

0xd5a7,	// (0x0007eb01) main_mup_pane_g7

0xd5a7,	// (0x0007eb01) main_mup_pane_g8_ParamLimits

0xd5a7,	// (0x0007eb01) main_mup_pane_g8

0xd5a7,	// (0x0007eb01) main_mup_pane_g9_ParamLimits

0xd5a7,	// (0x0007eb01) main_mup_pane_g9

0xd5a7,	// (0x0007eb01) main_mup_pane_g10_ParamLimits

0xd5a7,	// (0x0007eb01) main_mup_pane_g10

0xd5a7,	// (0x0007eb01) main_mup_pane_g11_ParamLimits

0xd5a7,	// (0x0007eb01) main_mup_pane_g11

0xd599,	// (0x0007eaf3) main_mup_pane_g12_ParamLimits

0xd599,	// (0x0007eaf3) main_mup_pane_g12

0xd5a7,	// (0x0007eb01) main_mup_pane_g13_ParamLimits

0xd5a7,	// (0x0007eb01) main_mup_pane_g13

0x000c,

0xf369,	// (0x000808c3) main_mup_pane_g_ParamLimits

0xf369,	// (0x000808c3) main_mup_pane_g

0xd5b5,	// (0x0007eb0f) main_mup_pane_t1_ParamLimits

0xd5b5,	// (0x0007eb0f) main_mup_pane_t1

0xd5b5,	// (0x0007eb0f) main_mup_pane_t2_ParamLimits

0xd5b5,	// (0x0007eb0f) main_mup_pane_t2

0xd5b5,	// (0x0007eb0f) main_mup_pane_t3_ParamLimits

0xd5b5,	// (0x0007eb0f) main_mup_pane_t3

0xe25b,	// (0x0007f7b5) main_mup_pane_t4_ParamLimits

0xe25b,	// (0x0007f7b5) main_mup_pane_t4

0xe25b,	// (0x0007f7b5) main_mup_pane_t5_ParamLimits

0xe25b,	// (0x0007f7b5) main_mup_pane_t5

0xe247,	// (0x0007f7a1) main_mup_pane_t6_ParamLimits

0xe247,	// (0x0007f7a1) main_mup_pane_t6

0x0005,

0xf384,	// (0x000808de) main_mup_pane_t_ParamLimits

0xf384,	// (0x000808de) main_mup_pane_t

0xd532,	// (0x0007ea8c) mup_progress_pane_ParamLimits

0xd532,	// (0x0007ea8c) mup_progress_pane

0x12a2,	// (0x000727fc) mup_visualizer_pane_ParamLimits

0x12a2,	// (0x000727fc) mup_visualizer_pane

0x12a2,	// (0x000727fc) mup_volume_pane_ParamLimits

0x12a2,	// (0x000727fc) mup_volume_pane

0xd599,	// (0x0007eaf3) mup_visualizer_pane_g1_ParamLimits

0xd599,	// (0x0007eaf3) mup_visualizer_pane_g1

0xee13,	// (0x0008036d) mup_visualizer_pane_g2_ParamLimits

0xee13,	// (0x0008036d) mup_visualizer_pane_g2

0xd58b,	// (0x0007eae5) mup_visualizer_pane_g3_ParamLimits

0xd58b,	// (0x0007eae5) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x000808eb) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x000808eb) mup_visualizer_pane_g

0xe23d,	// (0x0007f797) mup_volume_pane_g1

0xe23d,	// (0x0007f797) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x00080609) mup_volume_pane_g

0xe23d,	// (0x0007f797) mup_progress_pane_g1

0xe23d,	// (0x0007f797) mup_progress_pane_g2

0xe23d,	// (0x0007f797) mup_progress_pane_g3

0x0002,

0xf398,	// (0x000808f2) mup_progress_pane_g

0xd2b5,	// (0x0007e80f) bg_popup_window_pane_cp05

0xee2f,	// (0x00080389) heading_pane_cp02_ParamLimits

0xee2f,	// (0x00080389) heading_pane_cp02

0xee4b,	// (0x000803a5) list_popup_blid_pane

0xee53,	// (0x000803ad) list_blid_sat_info_pane_ParamLimits

0xee53,	// (0x000803ad) list_blid_sat_info_pane

0xee66,	// (0x000803c0) list_blid_sat_info_pane_g1

0xee6e,	// (0x000803c8) list_blid_sat_info_pane_t1

0x6309,	// (0x00077863) mup_equalizer_pane_ParamLimits

0x6309,	// (0x00077863) mup_equalizer_pane

0x632a,	// (0x00077884) mup_equalizer_pane_cp1_ParamLimits

0x632a,	// (0x00077884) mup_equalizer_pane_cp1

0x634b,	// (0x000778a5) mup_equalizer_pane_cp2_ParamLimits

0x634b,	// (0x000778a5) mup_equalizer_pane_cp2

0x636c,	// (0x000778c6) mup_equalizer_pane_cp3_ParamLimits

0x636c,	// (0x000778c6) mup_equalizer_pane_cp3

0x6391,	// (0x000778eb) mup_equalizer_pane_cp4_ParamLimits

0x6391,	// (0x000778eb) mup_equalizer_pane_cp4

0x63b6,	// (0x00077910) mup_equalizer_pane_cp5

0x63ce,	// (0x00077928) mup_equalizer_pane_cp6

0x63e6,	// (0x00077940) mup_equalizer_pane_cp7

0x0fd6,	// (0x00072530) bg_popup_call_poc_act_pane_g9

0x0fde,	// (0x00072538) bg_popup_call_poc_act_pane_g10

0x0fe6,	// (0x00072540) bg_popup_call_poc_act_pane_g11

0x000a,

0xd510,	// (0x0007ea6a) mup_scale_pane

0xd528,	// (0x0007ea82) mup_scale_pane_g1

0xee7c,	// (0x000803d6) mup_scale_pane_g2

0x0006,

0xf3b4,	// (0x0008090e) mup_scale_pane_g

0xeea0,	// (0x000803fa) msg_data_pane

0xeea8,	// (0x00080402) scroll_pane_cp017

0x30c4,	// (0x0007461e) bg_list_pane_cp04_ParamLimits

0x30c4,	// (0x0007461e) bg_list_pane_cp04

0xeeb0,	// (0x0008040a) msg_data_pane_g1

0x6410,	// (0x0007796a) msg_data_pane_g2

0x641a,	// (0x00077974) msg_data_pane_g3

0x6424,	// (0x0007797e) msg_data_pane_g4

0x642c,	// (0x00077986) msg_data_pane_g5

0x6434,	// (0x0007798e) msg_data_pane_g6

0x643c,	// (0x00077996) msg_data_pane_g7

0x0006,

0xf3c3,	// (0x0008091d) msg_data_pane_g

0x30ec,	// (0x00074646) msg_text_pane_ParamLimits

0x30ec,	// (0x00074646) msg_text_pane

0x6444,	// (0x0007799e) qrid_highlight_pane_cp011_ParamLimits

0x6444,	// (0x0007799e) qrid_highlight_pane_cp011

0xd2b5,	// (0x0007e80f) msg_body_pane

0xd510,	// (0x0007ea6a) msg_header_pane

0x3122,	// (0x0007467c) input_focus_pane_cp07

0x3145,	// (0x0007469f) msg_header_pane_t1_ParamLimits

0x3145,	// (0x0007469f) msg_header_pane_t1

0x3161,	// (0x000746bb) msg_header_pane_t2_ParamLimits

0x3161,	// (0x000746bb) msg_header_pane_t2

0x0001,

0xf3d7,	// (0x00080931) msg_header_pane_t_ParamLimits

0xf3d7,	// (0x00080931) msg_header_pane_t

0xeed8,	// (0x00080432) msg_body_pane_g1

0x3181,	// (0x000746db) msg_body_pane_t1_ParamLimits

0x3181,	// (0x000746db) msg_body_pane_t1

0x31b2,	// (0x0007470c) msg_body_pane_t2_ParamLimits

0x31b2,	// (0x0007470c) msg_body_pane_t2

0x31c4,	// (0x0007471e) msg_body_pane_t3_ParamLimits

0x31c4,	// (0x0007471e) msg_body_pane_t3

0x0002,

0xf3dc,	// (0x00080936) msg_body_pane_t_ParamLimits

0xf3dc,	// (0x00080936) msg_body_pane_t

0x64ac,	// (0x00077a06) main_viewer_pane_g1_ParamLimits

0x64ac,	// (0x00077a06) main_viewer_pane_g1

0x64b8,	// (0x00077a12) main_viewer_pane_g2_ParamLimits

0x64b8,	// (0x00077a12) main_viewer_pane_g2

0x64c4,	// (0x00077a1e) main_viewer_pane_g3_ParamLimits

0x64c4,	// (0x00077a1e) main_viewer_pane_g3

0x64d5,	// (0x00077a2f) main_viewer_pane_g4_ParamLimits

0x64d5,	// (0x00077a2f) main_viewer_pane_g4

0x64e6,	// (0x00077a40) main_viewer_pane_g5_ParamLimits

0x64e6,	// (0x00077a40) main_viewer_pane_g5

0x64e6,	// (0x00077a40) main_viewer_pane_g7_ParamLimits

0x64e6,	// (0x00077a40) main_viewer_pane_g7

0x64f8,	// (0x00077a52) main_viewer_pane_g8_ParamLimits

0x64f8,	// (0x00077a52) main_viewer_pane_g8

0x0007,

0xf3ec,	// (0x00080946) main_viewer_pane_g_ParamLimits

0xf3ec,	// (0x00080946) main_viewer_pane_g

0xeee0,	// (0x0008043a) viewer_content_pane_ParamLimits

0xeee0,	// (0x0008043a) viewer_content_pane

0x6530,	// (0x00077a8a) main_postcard_pane_g1_ParamLimits

0x6530,	// (0x00077a8a) main_postcard_pane_g1

0x653e,	// (0x00077a98) main_postcard_pane_g2_ParamLimits

0x653e,	// (0x00077a98) main_postcard_pane_g2

0x654c,	// (0x00077aa6) main_postcard_pane_g3_ParamLimits

0x654c,	// (0x00077aa6) main_postcard_pane_g3

0x0005,

0xf3fd,	// (0x00080957) main_postcard_pane_g_ParamLimits

0xf3fd,	// (0x00080957) main_postcard_pane_g

0x655c,	// (0x00077ab6) main_postcard_pane_g4

0x1109,	// (0x00072663) smil_status_volume_pane_g2

0x6588,	// (0x00077ae2) postcard_pane_ParamLimits

0x6588,	// (0x00077ae2) postcard_pane

0xefe5,	// (0x0008053f) postcard_pane_g1_ParamLimits

0xefe5,	// (0x0008053f) postcard_pane_g1

0x65c2,	// (0x00077b1c) postcard_pane_g2_ParamLimits

0x65c2,	// (0x00077b1c) postcard_pane_g2

0x65ce,	// (0x00077b28) postcard_pane_g3_ParamLimits

0x65ce,	// (0x00077b28) postcard_pane_g3

0xeeee,	// (0x00080448) postcard_pane_g4_ParamLimits

0xeeee,	// (0x00080448) postcard_pane_g4

0x65da,	// (0x00077b34) postcard_pane_g5_ParamLimits

0x65da,	// (0x00077b34) postcard_pane_g5

0x65e6,	// (0x00077b40) postcard_pane_g6_ParamLimits

0x65e6,	// (0x00077b40) postcard_pane_g6

0xeefc,	// (0x00080456) postcard_pane_g7_ParamLimits

0xeefc,	// (0x00080456) postcard_pane_g7

0x0006,

0xf40a,	// (0x00080964) postcard_pane_g_ParamLimits

0xf40a,	// (0x00080964) postcard_pane_g

0x65f4,	// (0x00077b4e) main_mp2_pane_g1_ParamLimits

0x65f4,	// (0x00077b4e) main_mp2_pane_g1

0x6602,	// (0x00077b5c) main_mp2_pane_g2_ParamLimits

0x6602,	// (0x00077b5c) main_mp2_pane_g2

0x660e,	// (0x00077b68) main_mp2_pane_g3_ParamLimits

0x660e,	// (0x00077b68) main_mp2_pane_g3

0x0002,

0xf419,	// (0x00080973) main_mp2_pane_g_ParamLimits

0xf419,	// (0x00080973) main_mp2_pane_g

0x661a,	// (0x00077b74) main_mp2_pane_t1_ParamLimits

0x661a,	// (0x00077b74) main_mp2_pane_t1

0x6631,	// (0x00077b8b) main_mp2_pane_t2_ParamLimits

0x6631,	// (0x00077b8b) main_mp2_pane_t2

0x6645,	// (0x00077b9f) main_mp2_pane_t3_ParamLimits

0x6645,	// (0x00077b9f) main_mp2_pane_t3

0x0002,

0xf420,	// (0x0008097a) main_mp2_pane_t_ParamLimits

0xf420,	// (0x0008097a) main_mp2_pane_t

0xd532,	// (0x0007ea8c) pec_content_pane_ParamLimits

0xd532,	// (0x0007ea8c) pec_content_pane

0xce55,	// (0x0007e3af) scroll_pane_cp015

0xee21,	// (0x0008037b) pec_attribute_pane_ParamLimits

0xee21,	// (0x0008037b) pec_attribute_pane

0xd58b,	// (0x0007eae5) pec_content_pane_g1_ParamLimits

0xd58b,	// (0x0007eae5) pec_content_pane_g1

0xef0a,	// (0x00080464) pec_content_pane_t1_ParamLimits

0xef0a,	// (0x00080464) pec_content_pane_t1

0xef1e,	// (0x00080478) pec_content_pane_t2_ParamLimits

0xef1e,	// (0x00080478) pec_content_pane_t2

0x0001,

0xf427,	// (0x00080981) pec_content_pane_t_ParamLimits

0xf427,	// (0x00080981) pec_content_pane_t

0xce5f,	// (0x0007e3b9) list_single_graphic_pane_cp01_ParamLimits

0xce5f,	// (0x0007e3b9) list_single_graphic_pane_cp01

0xd510,	// (0x0007ea6a) bg_popup_sub_pane_cp04

0xef32,	// (0x0008048c) popup_mup_playback_window_g1

0xef3e,	// (0x00080498) popup_mup_playback_window_t1

0xef53,	// (0x000804ad) popup_mup_playback_window_t2

0x0001,

0xf42c,	// (0x00080986) popup_mup_playback_window_t

0xef8a,	// (0x000804e4) main_image_pane_g1_ParamLimits

0xef8a,	// (0x000804e4) main_image_pane_g1

0xefcd,	// (0x00080527) scroll_pane_cp018_ParamLimits

0xefcd,	// (0x00080527) scroll_pane_cp018

0xeff3,	// (0x0008054d) scroll_pane_cp016_ParamLimits

0xeff3,	// (0x0008054d) scroll_pane_cp016

0x66c8,	// (0x00077c22) smil2_image_pane_ParamLimits

0x66c8,	// (0x00077c22) smil2_image_pane

0x66fe,	// (0x00077c58) smil2_root_pane_ParamLimits

0x66fe,	// (0x00077c58) smil2_root_pane

0x672a,	// (0x00077c84) smil2_text_pane_ParamLimits

0x672a,	// (0x00077c84) smil2_text_pane

0xce55,	// (0x0007e3af) bg_list_pane_cp06

0xce55,	// (0x0007e3af) grid_radio_pane

0xd2b5,	// (0x0007e80f) bg_popup_window_pane_cp06

0xe993,	// (0x0007feed) main_fmradio_pane_t1

0x0fee,	// (0x00072548) heading_pane_cp04

0xe993,	// (0x0007feed) main_fmradio_pane_t2

0x0ff6,	// (0x00072550) popup_cale_lunar_info_window_g1

0xe993,	// (0x0007feed) main_fmradio_pane_t3

0x0ffe,	// (0x00072558) popup_cale_lunar_info_window_g2

0xe993,	// (0x0007feed) main_fmradio_pane_t4

0x0001,

0xe993,	// (0x0007feed) main_fmradio_pane_t5

0x0004,

0xf501,	// (0x00080a5b) popup_cale_lunar_info_window_g

0xf28c,	// (0x000807e6) main_fmradio_pane_t

0xce55,	// (0x0007e3af) wait_bar_pane_cp03

0xce5f,	// (0x0007e3b9) cell_fmradio_pane_ParamLimits

0xce5f,	// (0x0007e3b9) cell_fmradio_pane

0xd58b,	// (0x0007eae5) cell_fmradio_pane_g1_ParamLimits

0xd58b,	// (0x0007eae5) cell_fmradio_pane_g1

0xce55,	// (0x0007e3af) grid_highlight_pane_cp011

0x00c1,	// (0x0007161b) poc_content_pane_ParamLimits

0x00c1,	// (0x0007161b) poc_content_pane

0x00d3,	// (0x0007162d) scroll_pane_cp019

0x676a,	// (0x00077cc4) popup_call_poc_act_window_ParamLimits

0x676a,	// (0x00077cc4) popup_call_poc_act_window

0x6777,	// (0x00077cd1) popup_call_poc_inact_window_ParamLimits

0x6777,	// (0x00077cd1) popup_call_poc_inact_window

0xf4d8,	// (0x00080a32) bg_popup_call_poc_act_pane_g

0x0f66,	// (0x000724c0) bg_popup_call_poc_inact_pane_g1

0x0f6e,	// (0x000724c8) bg_popup_call_poc_inact_pane_g2

0x00db,	// (0x00071635) popup_call_poc_act_window_g2

0x0f76,	// (0x000724d0) bg_popup_call_poc_inact_pane_g3

0x0f7e,	// (0x000724d8) bg_popup_call_poc_inact_pane_g4

0x0f86,	// (0x000724e0) bg_popup_call_poc_inact_pane_g5

0x00e3,	// (0x0007163d) popup_call_poc_act_window_t1_ParamLimits

0x00e3,	// (0x0007163d) popup_call_poc_act_window_t1

0x010b,	// (0x00071665) popup_call_poc_act_window_t2_ParamLimits

0x010b,	// (0x00071665) popup_call_poc_act_window_t2

0x0133,	// (0x0007168d) popup_call_poc_act_window_t3_ParamLimits

0x0133,	// (0x0007168d) popup_call_poc_act_window_t3

0x015b,	// (0x000716b5) popup_call_poc_act_window_t4_ParamLimits

0x015b,	// (0x000716b5) popup_call_poc_act_window_t4

0x0003,

0xf441,	// (0x0008099b) popup_call_poc_act_window_t_ParamLimits

0xf441,	// (0x0008099b) popup_call_poc_act_window_t

0x0f8e,	// (0x000724e8) bg_popup_call_poc_inact_pane_g6

0x0f96,	// (0x000724f0) bg_popup_call_poc_inact_pane_g7

0x0f9e,	// (0x000724f8) bg_popup_call_poc_inact_pane_g8

0x016d,	// (0x000716c7) popup_call_poc_inact_window_g2

0x0fa6,	// (0x00072500) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c5,	// (0x00080a1f) bg_popup_call_poc_inact_pane_g

0x0175,	// (0x000716cf) popup_call_poc_inact_window_t1_ParamLimits

0x0175,	// (0x000716cf) popup_call_poc_inact_window_t1

0x018a,	// (0x000716e4) popup_call_poc_inact_window_t2_ParamLimits

0x018a,	// (0x000716e4) popup_call_poc_inact_window_t2

0x019f,	// (0x000716f9) popup_call_poc_inact_window_t3_ParamLimits

0x019f,	// (0x000716f9) popup_call_poc_inact_window_t3

0x0002,

0xf44a,	// (0x000809a4) popup_call_poc_inact_window_t_ParamLimits

0xf44a,	// (0x000809a4) popup_call_poc_inact_window_t

0x1094,	// (0x000725ee) context_pane_ParamLimits

0x6d9c,	// (0x000782f6) signal_pane_ParamLimits

0xe439,	// (0x0007f993) main_call2_pane

0x6d08,	// (0x00078262) popup_phob_thumbnail2_window_ParamLimits

0x6d08,	// (0x00078262) popup_phob_thumbnail2_window

0x645a,	// (0x000779b4) aid_hotspot_pointer_arrow_pane

0x6462,	// (0x000779bc) aid_hotspot_pointer_hand_pane

0x6a47,	// (0x00077fa1) phob_pre_status_pane_g5

0xce5f,	// (0x0007e3b9) cams_zoom_pane_ParamLimits

0xce5f,	// (0x0007e3b9) image_vga_pane_ParamLimits

0xd599,	// (0x0007eaf3) main_camera_pane_g1_ParamLimits

0xd599,	// (0x0007eaf3) main_camera_pane_g2_ParamLimits

0xd599,	// (0x0007eaf3) main_camera_pane_g3_ParamLimits

0xd599,	// (0x0007eaf3) main_camera_pane_g4_ParamLimits

0xd599,	// (0x0007eaf3) main_camera_pane_g5_ParamLimits

0xd599,	// (0x0007eaf3) main_camera_pane_g6_ParamLimits

0xd599,	// (0x0007eaf3) main_camera_pane_g7_ParamLimits

0xf180,	// (0x000806da) main_camera_pane_g_ParamLimits

0xe25b,	// (0x0007f7b5) main_camera_pane_t1_ParamLimits

0xe25b,	// (0x0007f7b5) main_camera_pane_t2_ParamLimits

0xf191,	// (0x000806eb) main_camera_pane_t_ParamLimits

0xd510,	// (0x0007ea6a) bg_popup_preview_window_pane_cp01_ParamLimits

0xd510,	// (0x0007ea6a) bg_popup_preview_window_pane_cp01

0x01b4,	// (0x0007170e) popup_phob_thumbnail2_window_g1_ParamLimits

0x01b4,	// (0x0007170e) popup_phob_thumbnail2_window_g1

0xd2b5,	// (0x0007e80f) call2_cli_visual_pane

0x6793,	// (0x00077ced) popup_call2_audio_conf_window_ParamLimits

0x6793,	// (0x00077ced) popup_call2_audio_conf_window

0x67ac,	// (0x00077d06) popup_call2_audio_first_window_ParamLimits

0x67ac,	// (0x00077d06) popup_call2_audio_first_window

0x684a,	// (0x00077da4) popup_call2_audio_in_window_ParamLimits

0x684a,	// (0x00077da4) popup_call2_audio_in_window

0x688e,	// (0x00077de8) popup_call2_audio_out_window_ParamLimits

0x688e,	// (0x00077de8) popup_call2_audio_out_window

0x68f8,	// (0x00077e52) popup_call2_audio_second_window_ParamLimits

0x68f8,	// (0x00077e52) popup_call2_audio_second_window

0x6956,	// (0x00077eb0) popup_call2_audio_wait_window_ParamLimits

0x6956,	// (0x00077eb0) popup_call2_audio_wait_window

0xd2b5,	// (0x0007e80f) bg_popup_call2_act_pane_cp03

0xd4f2,	// (0x0007ea4c) list_conf_pane_cp

0x01c0,	// (0x0007171a) popup_call2_audio_conf_window_t1

0x01ce,	// (0x00071728) list_single_graphic_popup_conf2_pane_ParamLimits

0x01ce,	// (0x00071728) list_single_graphic_popup_conf2_pane

0xeb7d,	// (0x000800d7) list_highlight_pane_cp04

0x01e1,	// (0x0007173b) list_single_graphic_popup_conf2_pane_g1

0xeb8e,	// (0x000800e8) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf451,	// (0x000809ab) list_single_graphic_popup_conf2_pane_g

0x01eb,	// (0x00071745) list_single_graphic_popup_conf2_pane_t1

0x01f9,	// (0x00071753) bg_popup_call2_act_pane_cp01_ParamLimits

0x01f9,	// (0x00071753) bg_popup_call2_act_pane_cp01

0x0283,	// (0x000717dd) call_type_pane_cp05_ParamLimits

0x0283,	// (0x000717dd) call_type_pane_cp05

0x02d7,	// (0x00071831) popup_call2_audio_second_window_g1_ParamLimits

0x02d7,	// (0x00071831) popup_call2_audio_second_window_g1

0x032b,	// (0x00071885) popup_call2_audio_second_window_g2_ParamLimits

0x032b,	// (0x00071885) popup_call2_audio_second_window_g2

0x0002,

0xf456,	// (0x000809b0) popup_call2_audio_second_window_g_ParamLimits

0xf456,	// (0x000809b0) popup_call2_audio_second_window_g

0x0390,	// (0x000718ea) popup_call2_audio_second_window_t1_ParamLimits

0x0390,	// (0x000718ea) popup_call2_audio_second_window_t1

0x044b,	// (0x000719a5) popup_call2_audio_second_window_t2_ParamLimits

0x044b,	// (0x000719a5) popup_call2_audio_second_window_t2

0x049e,	// (0x000719f8) popup_call2_audio_second_window_t3_ParamLimits

0x049e,	// (0x000719f8) popup_call2_audio_second_window_t3

0x0003,

0xf45d,	// (0x000809b7) popup_call2_audio_second_window_t_ParamLimits

0xf45d,	// (0x000809b7) popup_call2_audio_second_window_t

0xd2b5,	// (0x0007e80f) bg_popup_call2_in_pane_cp02

0xd2bf,	// (0x0007e819) call_type_pane_cp04

0x6995,	// (0x00077eef) popup_call2_audio_wait_window_g1

0x699d,	// (0x00077ef7) popup_call2_audio_wait_window_g2

0x0001,

0xf466,	// (0x000809c0) popup_call2_audio_wait_window_g

0xd2d7,	// (0x0007e831) popup_call2_audio_wait_window_t3

0x0591,	// (0x00071aeb) bg_popup_call2_act_pane_ParamLimits

0x0591,	// (0x00071aeb) bg_popup_call2_act_pane

0x0651,	// (0x00071bab) call_type_pane_cp03_ParamLimits

0x0651,	// (0x00071bab) call_type_pane_cp03

0x06b5,	// (0x00071c0f) popup_call2_audio_first_window_g1_ParamLimits

0x06b5,	// (0x00071c0f) popup_call2_audio_first_window_g1

0x0725,	// (0x00071c7f) popup_call2_audio_first_window_g2_ParamLimits

0x0725,	// (0x00071c7f) popup_call2_audio_first_window_g2

0xefe5,	// (0x0008053f) popup_call2_audio_first_window_g3_ParamLimits

0xefe5,	// (0x0008053f) popup_call2_audio_first_window_g3

0x0004,

0xf46b,	// (0x000809c5) popup_call2_audio_first_window_g_ParamLimits

0xf46b,	// (0x000809c5) popup_call2_audio_first_window_g

0x0803,	// (0x00071d5d) popup_call2_audio_first_window_t1_ParamLimits

0x0803,	// (0x00071d5d) popup_call2_audio_first_window_t1

0x0906,	// (0x00071e60) popup_call2_audio_first_window_t4_ParamLimits

0x0906,	// (0x00071e60) popup_call2_audio_first_window_t4

0x09e9,	// (0x00071f43) popup_call2_audio_first_window_t5_ParamLimits

0x09e9,	// (0x00071f43) popup_call2_audio_first_window_t5

0x0003,

0xf476,	// (0x000809d0) popup_call2_audio_first_window_t_ParamLimits

0xf476,	// (0x000809d0) popup_call2_audio_first_window_t

0xd508,	// (0x0007ea62) bg_popup_call2_act_pane_g1

0x1008,	// (0x00072562) popup_cale_lunar_info_window_t1

0x1016,	// (0x00072570) popup_cale_lunar_info_window_t2

0x1024,	// (0x0007257e) popup_cale_lunar_info_window_t3

0xd2b5,	// (0x0007e80f) bg_popup_call2_bubble_pane

0x0aea,	// (0x00072044) bg_popup_call2_in_pane_cp01_ParamLimits

0x0aea,	// (0x00072044) bg_popup_call2_in_pane_cp01

0xcf91,	// (0x0007e4eb) call_type_pane_cp02

0x69a5,	// (0x00077eff) popup_call2_audio_out_window_g1_ParamLimits

0x69a5,	// (0x00077eff) popup_call2_audio_out_window_g1

0x0b32,	// (0x0007208c) popup_call2_audio_out_window_g2_ParamLimits

0x0b32,	// (0x0007208c) popup_call2_audio_out_window_g2

0x69d1,	// (0x00077f2b) popup_call2_audio_out_window_g3_ParamLimits

0x69d1,	// (0x00077f2b) popup_call2_audio_out_window_g3

0x0003,

0xf47f,	// (0x000809d9) popup_call2_audio_out_window_g_ParamLimits

0xf47f,	// (0x000809d9) popup_call2_audio_out_window_g

0x0b69,	// (0x000720c3) popup_call2_audio_out_window_t1_ParamLimits

0x0b69,	// (0x000720c3) popup_call2_audio_out_window_t1

0x0bc8,	// (0x00072122) popup_call2_audio_out_window_t2_ParamLimits

0x0bc8,	// (0x00072122) popup_call2_audio_out_window_t2

0x0c1c,	// (0x00072176) popup_call2_audio_out_window_t3_ParamLimits

0x0c1c,	// (0x00072176) popup_call2_audio_out_window_t3

0x0c32,	// (0x0007218c) popup_call2_audio_out_window_t4_ParamLimits

0x0c32,	// (0x0007218c) popup_call2_audio_out_window_t4

0x0c48,	// (0x000721a2) popup_call2_audio_out_window_t5_ParamLimits

0x0c48,	// (0x000721a2) popup_call2_audio_out_window_t5

0x0005,

0xf488,	// (0x000809e2) popup_call2_audio_out_window_t_ParamLimits

0xf488,	// (0x000809e2) popup_call2_audio_out_window_t

0x0cac,	// (0x00072206) bg_popup_call2_in_pane_ParamLimits

0x0cac,	// (0x00072206) bg_popup_call2_in_pane

0x0d08,	// (0x00072262) popup_call2_audio_in_window_g1_ParamLimits

0x0d08,	// (0x00072262) popup_call2_audio_in_window_g1

0x0d40,	// (0x0007229a) popup_call2_audio_in_window_g2_ParamLimits

0x0d40,	// (0x0007229a) popup_call2_audio_in_window_g2

0x0d78,	// (0x000722d2) popup_call2_audio_in_window_g3_ParamLimits

0x0d78,	// (0x000722d2) popup_call2_audio_in_window_g3

0x0003,

0xf495,	// (0x000809ef) popup_call2_audio_in_window_g_ParamLimits

0xf495,	// (0x000809ef) popup_call2_audio_in_window_g

0x0dd0,	// (0x0007232a) popup_call2_audio_in_window_t1_ParamLimits

0x0dd0,	// (0x0007232a) popup_call2_audio_in_window_t1

0x0e50,	// (0x000723aa) popup_call2_audio_in_window_t2_ParamLimits

0x0e50,	// (0x000723aa) popup_call2_audio_in_window_t2

0x0ed0,	// (0x0007242a) popup_call2_audio_in_window_t3_ParamLimits

0x0ed0,	// (0x0007242a) popup_call2_audio_in_window_t3

0x0eea,	// (0x00072444) popup_call2_audio_in_window_t4_ParamLimits

0x0eea,	// (0x00072444) popup_call2_audio_in_window_t4

0x0efc,	// (0x00072456) popup_call2_audio_in_window_t5_ParamLimits

0x0efc,	// (0x00072456) popup_call2_audio_in_window_t5

0x0f11,	// (0x0007246b) popup_call2_audio_in_window_t6_ParamLimits

0x0f11,	// (0x0007246b) popup_call2_audio_in_window_t6

0x0005,

0xf49e,	// (0x000809f8) popup_call2_audio_in_window_t_ParamLimits

0xf49e,	// (0x000809f8) popup_call2_audio_in_window_t

0xd508,	// (0x0007ea62) bg_popup_call2_in_pane_g1

0x1032,	// (0x0007258c) popup_cale_lunar_info_window_t4

0x0003,

0xf506,	// (0x00080a60) popup_cale_lunar_info_window_t

0xd510,	// (0x0007ea6a) bg_popup_call2_rect_pane_ParamLimits

0xd510,	// (0x0007ea6a) bg_popup_call2_rect_pane

0xd2b5,	// (0x0007e80f) call2_cli_visual_graphic_pane

0xd2b5,	// (0x0007e80f) call2_cli_visual_text_pane

0x6dd7,	// (0x00078331) smil_status_volume_pane_g3

0x0002,

0xd528,	// (0x0007ea82) call2_cli_visual_graphic_pane_g1

0xd528,	// (0x0007ea82) call2_cli_visual_graphic_pane_g2

0xd528,	// (0x0007ea82) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ab,	// (0x00080a05) call2_cli_visual_graphic_pane_g

0x0f26,	// (0x00072480) bg_popup_call2_rect_pane_g1

0xe372,	// (0x0007f8cc) bg_popup_call2_rect_pane_g2

0x0f2e,	// (0x00072488) bg_popup_call2_rect_pane_g3

0x0f36,	// (0x00072490) bg_popup_call2_rect_pane_g4

0x0f3e,	// (0x00072498) bg_popup_call2_rect_pane_g5

0x0f46,	// (0x000724a0) bg_popup_call2_rect_pane_g6

0x0f4e,	// (0x000724a8) bg_popup_call2_rect_pane_g7

0x0f56,	// (0x000724b0) bg_popup_call2_rect_pane_g8

0x0f5e,	// (0x000724b8) bg_popup_call2_rect_pane_g9

0x0008,

0xf4b2,	// (0x00080a0c) bg_popup_call2_rect_pane_g

0x0f66,	// (0x000724c0) bg_popup_call2_bubble_pane_g1

0x0f6e,	// (0x000724c8) bg_popup_call2_bubble_pane_g2

0x0f76,	// (0x000724d0) bg_popup_call2_bubble_pane_g3

0x0f7e,	// (0x000724d8) bg_popup_call2_bubble_pane_g4

0x0f86,	// (0x000724e0) bg_popup_call2_bubble_pane_g5

0x0f8e,	// (0x000724e8) bg_popup_call2_bubble_pane_g6

0x0f96,	// (0x000724f0) bg_popup_call2_bubble_pane_g7

0x0f9e,	// (0x000724f8) bg_popup_call2_bubble_pane_g8

0x0fa6,	// (0x00072500) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c5,	// (0x00080a1f) bg_popup_call2_bubble_pane_g

0x43d0,	// (0x0007592a) aid_cale_week_size_cell_pane

0xd510,	// (0x0007ea6a) aid_cams_cif_uncrop_pane_ParamLimits

0xd510,	// (0x0007ea6a) aid_cams_cif_uncrop_pane

0xce5f,	// (0x0007e3b9) aid_cams_size_cell_ParamLimits

0xce5f,	// (0x0007e3b9) aid_cams_size_cell

0xce5f,	// (0x0007e3b9) grid_cams_pane_ParamLimits

0xce5f,	// (0x0007e3b9) linegrid_cams_pane_ParamLimits

0x4c84,	// (0x000761de) call_video_pane_t1

0x4ca1,	// (0x000761fb) call_video_pane_t2

0x0001,

0xf1dd,	// (0x00080737) call_video_pane_t

0x515e,	// (0x000766b8) aid_cale_month_size_cell_pane_ParamLimits

0x515e,	// (0x000766b8) aid_cale_month_size_cell_pane

0xf54a,	// (0x00080aa4) smil_status_volume_pane_g

0x6de4,	// (0x0007833e) volume_smil_pane_ParamLimits

0x3db7,	// (0x00075311) aid_popup2_width_pane

0x42dc,	// (0x00075836) cell_qdial_pane_g4_ParamLimits

0x42dc,	// (0x00075836) cell_qdial_pane_g4

0x6025,	// (0x0007757f) aid_blid_cardinal_pane_ParamLimits

0x6035,	// (0x0007758f) aid_blid_destination_pane_ParamLimits

0x6035,	// (0x0007758f) aid_blid_destination_pane

0xd510,	// (0x0007ea6a) bg_popup_call_poc_act_pane_ParamLimits

0xd510,	// (0x0007ea6a) bg_popup_call_poc_act_pane

0xd510,	// (0x0007ea6a) bg_popup_call_poc_inact_pane_ParamLimits

0xd510,	// (0x0007ea6a) bg_popup_call_poc_inact_pane

0x0fae,	// (0x00072508) bg_popup_call_poc_act_pane_g1

0x0fb6,	// (0x00072510) bg_popup_call_poc_act_pane_g2

0x0fbe,	// (0x00072518) bg_popup_call_poc_act_pane_g3

0x0f7e,	// (0x000724d8) bg_popup_call_poc_act_pane_g4

0x0f86,	// (0x000724e0) bg_popup_call_poc_act_pane_g5

0x0fc6,	// (0x00072520) bg_popup_call_poc_act_pane_g6

0x0f96,	// (0x000724f0) bg_popup_call_poc_act_pane_g7

0x0fce,	// (0x00072528) bg_popup_call_poc_act_pane_g8

0xd2b5,	// (0x0007e80f) main_usb_pane

0x6c25,	// (0x0007817f) popup_cale_lunar_info_window

0x4fb9,	// (0x00076513) im_reading_pane_t1_ParamLimits

0xe4fe,	// (0x0007fa58) list_im_pane_ParamLimits

0xe50f,	// (0x0007fa69) scroll_pane_cp07_ParamLimits

0xd2b5,	// (0x0007e80f) grid_highlight_pane_cp012

0xd510,	// (0x0007ea6a) mup_scale_pane_ParamLimits

0xd599,	// (0x0007eaf3) main_usb_pane_g1_ParamLimits

0xd599,	// (0x0007eaf3) main_usb_pane_g1

0xd599,	// (0x0007eaf3) main_usb_pane_g2_ParamLimits

0xd599,	// (0x0007eaf3) main_usb_pane_g2

0x0001,

0xf4ef,	// (0x00080a49) main_usb_pane_g_ParamLimits

0xf4ef,	// (0x00080a49) main_usb_pane_g

0xe25b,	// (0x0007f7b5) main_usb_pane_t1_ParamLimits

0xe25b,	// (0x0007f7b5) main_usb_pane_t1

0xe25b,	// (0x0007f7b5) main_usb_pane_t2_ParamLimits

0xe25b,	// (0x0007f7b5) main_usb_pane_t2

0xe25b,	// (0x0007f7b5) main_usb_pane_t3_ParamLimits

0xe25b,	// (0x0007f7b5) main_usb_pane_t3

0xe25b,	// (0x0007f7b5) main_usb_pane_t4_ParamLimits

0xe25b,	// (0x0007f7b5) main_usb_pane_t4

0xe25b,	// (0x0007f7b5) main_usb_pane_t5_ParamLimits

0xe25b,	// (0x0007f7b5) main_usb_pane_t5

0xe25b,	// (0x0007f7b5) main_usb_pane_t6_ParamLimits

0xe25b,	// (0x0007f7b5) main_usb_pane_t6

0x0005,

0xf4f4,	// (0x00080a4e) main_usb_pane_t_ParamLimits

0x5fc4,	// (0x0007751e) aid_text_placing

0x5fcf,	// (0x00077529) main_location2_pane_t1_ParamLimits

0x5fe5,	// (0x0007753f) main_location2_pane_t2_ParamLimits

0x5ffb,	// (0x00077555) main_location2_pane_t3_ParamLimits

0x6011,	// (0x0007756b) main_location2_pane_t4_ParamLimits

0x6011,	// (0x0007756b) main_location2_pane_t4

0xf31e,	// (0x00080878) main_location2_pane_t_ParamLimits

0xd54c,	// (0x0007eaa6) find_pinb_pane_g2_ParamLimits

0xd54c,	// (0x0007eaa6) find_pinb_pane_g2

0x0001,

0xf095,	// (0x000805ef) find_pinb_pane_g_ParamLimits

0xf095,	// (0x000805ef) find_pinb_pane_g

0xd558,	// (0x0007eab2) find_pinb_pane_t1_ParamLimits

0xd56a,	// (0x0007eac4) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x000805f4) find_pinb_pane_t_ParamLimits

0xd2b5,	// (0x0007e80f) main_call3_pane

0x5711,	// (0x00076c6b) cale_month_day_heading_pane_t1_ParamLimits

0x5793,	// (0x00076ced) cale_month_day_heading_pane_t2_ParamLimits

0x580c,	// (0x00076d66) cale_month_day_heading_pane_t3_ParamLimits

0x5885,	// (0x00076ddf) cale_month_day_heading_pane_t4_ParamLimits

0x58fe,	// (0x00076e58) cale_month_day_heading_pane_t5_ParamLimits

0x597f,	// (0x00076ed9) cale_month_day_heading_pane_t6_ParamLimits

0x5a08,	// (0x00076f62) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x0008076f) cale_month_day_heading_pane_t_ParamLimits

0xe768,	// (0x0007fcc2) smil_status_volume_pane

0x65a6,	// (0x00077b00) postcard_address_pane_ParamLimits

0x65a6,	// (0x00077b00) postcard_address_pane

0x65b4,	// (0x00077b0e) postcard_message_pane_ParamLimits

0x65b4,	// (0x00077b0e) postcard_message_pane

0x69fd,	// (0x00077f57) call2_cli_visual_pane_t1_ParamLimits

0x69fd,	// (0x00077f57) call2_cli_visual_pane_t1

0x1147,	// (0x000726a1) postcard_message_pane_t1_ParamLimits

0x1147,	// (0x000726a1) postcard_message_pane_t1

0x112f,	// (0x00072689) postcard_address_pane_t1_ParamLimits

0x112f,	// (0x00072689) postcard_address_pane_t1

0x6f1b,	// (0x00078475) popup_call3_audio_in_window_ParamLimits

0x6f1b,	// (0x00078475) popup_call3_audio_in_window

0x6df9,	// (0x00078353) bg_popup_call3_in_pane_ParamLimits

0x6df9,	// (0x00078353) bg_popup_call3_in_pane

0x6e61,	// (0x000783bb) popup_call3_audio_in_window_g1_ParamLimits

0x6e61,	// (0x000783bb) popup_call3_audio_in_window_g1

0x6e79,	// (0x000783d3) popup_call3_audio_in_window_g2_ParamLimits

0x6e79,	// (0x000783d3) popup_call3_audio_in_window_g2

0x6e91,	// (0x000783eb) popup_call3_audio_in_window_g3_ParamLimits

0x6e91,	// (0x000783eb) popup_call3_audio_in_window_g3

0x0003,

0xf551,	// (0x00080aab) popup_call3_audio_in_window_g_ParamLimits

0xf551,	// (0x00080aab) popup_call3_audio_in_window_g

0x6eb9,	// (0x00078413) popup_call3_audio_in_window_t1_ParamLimits

0x6eb9,	// (0x00078413) popup_call3_audio_in_window_t1

0x6ee1,	// (0x0007843b) popup_call3_audio_in_window_t2_ParamLimits

0x6ee1,	// (0x0007843b) popup_call3_audio_in_window_t2

0x6f09,	// (0x00078463) popup_call3_audio_in_window_t3_ParamLimits

0x6f09,	// (0x00078463) popup_call3_audio_in_window_t3

0x0002,

0xf55a,	// (0x00080ab4) popup_call3_audio_in_window_t_ParamLimits

0xf55a,	// (0x00080ab4) popup_call3_audio_in_window_t

0xe439,	// (0x0007f993) bg_popup_call3_rect_pane

0x0f26,	// (0x00072480) bg_popup_call3_rect_pane_g1

0xe372,	// (0x0007f8cc) bg_popup_call3_rect_pane_g2

0x0f2e,	// (0x00072488) bg_popup_call3_rect_pane_g3

0x0f36,	// (0x00072490) bg_popup_call3_rect_pane_g4

0x0f3e,	// (0x00072498) bg_popup_call3_rect_pane_g5

0x0f46,	// (0x000724a0) bg_popup_call3_rect_pane_g6

0x0f4e,	// (0x000724a8) bg_popup_call3_rect_pane_g7

0xce55,	// (0x0007e3af) mup_visualizer_osc_pane

0xce55,	// (0x0007e3af) mup_visualizer_spec_pane

0x6e19,	// (0x00078373) call3_video_qcif_pane_ParamLimits

0x6e19,	// (0x00078373) call3_video_qcif_pane

0x6e2b,	// (0x00078385) call3_video_qcif_uncrop_pane_ParamLimits

0x6e2b,	// (0x00078385) call3_video_qcif_uncrop_pane

0x6e3b,	// (0x00078395) call3_video_subqcif_pane_ParamLimits

0x6e3b,	// (0x00078395) call3_video_subqcif_pane

0x6e4f,	// (0x000783a9) call3_video_subqcif_uncrop_pane_ParamLimits

0x6e4f,	// (0x000783a9) call3_video_subqcif_uncrop_pane

0x6ea9,	// (0x00078403) popup_call3_audio_in_window_g4_ParamLimits

0x6ea9,	// (0x00078403) popup_call3_audio_in_window_g4

0xce55,	// (0x0007e3af) mup_spec_half_pane

0xce55,	// (0x0007e3af) mup_spec_half_pane_cp

0xce55,	// (0x0007e3af) mup_osc_middle_pane

0xe23d,	// (0x0007f797) mup_visualizer_osc_pane_g1

0x10e2,	// (0x0007263c) mup_spec_bar_pane_ParamLimits

0x10e2,	// (0x0007263c) mup_spec_bar_pane

0xe23d,	// (0x0007f797) mup_spec_bar_pane_g1

0xe23d,	// (0x0007f797) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x00080609) mup_spec_bar_pane_g

0x43d0,	// (0x0007592a) aid_cale_week_size_cell_pane_ParamLimits

0x43ea,	// (0x00075944) bg_cale_heading_pane_ParamLimits

0x4413,	// (0x0007596d) bg_cale_pane_cp01_ParamLimits

0x4435,	// (0x0007598f) cale_week_corner_pane_ParamLimits

0x4454,	// (0x000759ae) cale_week_day_heading_pane_ParamLimits

0x4482,	// (0x000759dc) cale_week_scroll_pane_g1_ParamLimits

0x44a6,	// (0x00075a00) cale_week_scroll_pane_g2_ParamLimits

0x44be,	// (0x00075a18) cale_week_scroll_pane_g3_ParamLimits

0x44d6,	// (0x00075a30) cale_week_scroll_pane_g4_ParamLimits

0x44ee,	// (0x00075a48) cale_week_scroll_pane_g5_ParamLimits

0x4506,	// (0x00075a60) cale_week_scroll_pane_g6_ParamLimits

0x4526,	// (0x00075a80) cale_week_scroll_pane_g7_ParamLimits

0x4546,	// (0x00075aa0) cale_week_scroll_pane_g8_ParamLimits

0x4566,	// (0x00075ac0) cale_week_scroll_pane_g9_ParamLimits

0x4583,	// (0x00075add) cale_week_scroll_pane_g10_ParamLimits

0x45a0,	// (0x00075afa) cale_week_scroll_pane_g11_ParamLimits

0x45bf,	// (0x00075b19) cale_week_scroll_pane_g12_ParamLimits

0x45e4,	// (0x00075b3e) cale_week_scroll_pane_g13_ParamLimits

0x460d,	// (0x00075b67) cale_week_scroll_pane_g14_ParamLimits

0x4636,	// (0x00075b90) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x00080680) cale_week_scroll_pane_g_ParamLimits

0x467f,	// (0x00075bd9) cale_week_time_pane_ParamLimits

0x469f,	// (0x00075bf9) grid_cale_week_pane_ParamLimits

0xe3af,	// (0x0007f909) listscroll_cale_week_pane_t1

0xe3c1,	// (0x0007f91b) scroll_pane_cp08_ParamLimits

0x51d6,	// (0x00076730) cale_month_corner_pane_ParamLimits

0xe73e,	// (0x0007fc98) cale_month_pane_t1

0x5698,	// (0x00076bf2) cale_month_week_pane_ParamLimits

0xefe5,	// (0x0008053f) popup_call_status_window_g1_ParamLimits

0x5df3,	// (0x0007734d) popup_call_status_window_g2_ParamLimits

0x5dff,	// (0x00077359) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x000807ff) popup_call_status_window_g_ParamLimits

0xeb0a,	// (0x00080064) aid_call2_pane

0x3137,	// (0x00074691) msg_header_pane_g1

0x65a6,	// (0x00077b00) postcard_address2_pane_ParamLimits

0x65a6,	// (0x00077b00) postcard_address2_pane

0x65b4,	// (0x00077b0e) postcard_message2_pane_ParamLimits

0x65b4,	// (0x00077b0e) postcard_message2_pane

0x6daa,	// (0x00078304) message2_row_pane_ParamLimits

0x6daa,	// (0x00078304) message2_row_pane

0x6dc4,	// (0x0007831e) address2_row_pane_ParamLimits

0x6dc4,	// (0x0007831e) address2_row_pane

0x10af,	// (0x00072609) postcard_message2_row_pane_g1

0x10b7,	// (0x00072611) postcard_message2_row_pane_t1

0x10af,	// (0x00072609) address2_row_pane_g1

0x10b7,	// (0x00072611) address2_row_pane_t1

0x4a2d,	// (0x00075f87) aid_size_cell_vorec

0xd2b5,	// (0x0007e80f) main_rss_pane

0x10c5,	// (0x0007261f) rss_list_single_pane_ParamLimits

0x10c5,	// (0x0007261f) rss_list_single_pane

0x10d3,	// (0x0007262d) rss_list_single_pane_t1

0x10d3,	// (0x0007262d) rss_list_single_pane_t2

0x0001,

0xf545,	// (0x00080a9f) rss_list_single_pane_t

0xd2b5,	// (0x0007e80f) main_camera2_pane

0xd2b5,	// (0x0007e80f) main_video2_pane

0xce5f,	// (0x0007e3b9) cams_zoom_pane_cp2_ParamLimits

0xce5f,	// (0x0007e3b9) cams_zoom_pane_cp2

0xce5f,	// (0x0007e3b9) image2_vga_pane_ParamLimits

0xce5f,	// (0x0007e3b9) image2_vga_pane

0xd599,	// (0x0007eaf3) main_camera2_pane_g1_ParamLimits

0xd599,	// (0x0007eaf3) main_camera2_pane_g1

0xd599,	// (0x0007eaf3) main_camera2_pane_g2_ParamLimits

0xd599,	// (0x0007eaf3) main_camera2_pane_g2

0xd599,	// (0x0007eaf3) main_camera2_pane_g3_ParamLimits

0xd599,	// (0x0007eaf3) main_camera2_pane_g3

0xd599,	// (0x0007eaf3) main_camera2_pane_g4_ParamLimits

0xd599,	// (0x0007eaf3) main_camera2_pane_g4

0xd599,	// (0x0007eaf3) main_camera2_pane_g5_ParamLimits

0xd599,	// (0x0007eaf3) main_camera2_pane_g5

0xd599,	// (0x0007eaf3) main_camera2_pane_g6_ParamLimits

0xd599,	// (0x0007eaf3) main_camera2_pane_g6

0xd599,	// (0x0007eaf3) main_camera2_pane_g7_ParamLimits

0xd599,	// (0x0007eaf3) main_camera2_pane_g7

0xd599,	// (0x0007eaf3) main_camera2_pane_g8_ParamLimits

0xd599,	// (0x0007eaf3) main_camera2_pane_g8

0x0008,

0xf561,	// (0x00080abb) main_camera2_pane_g_ParamLimits

0xf561,	// (0x00080abb) main_camera2_pane_g

0xe25b,	// (0x0007f7b5) main_camera2_pane_t1_ParamLimits

0xe25b,	// (0x0007f7b5) main_camera2_pane_t1

0xe25b,	// (0x0007f7b5) main_camera2_pane_t2_ParamLimits

0xe25b,	// (0x0007f7b5) main_camera2_pane_t2

0xe25b,	// (0x0007f7b5) main_camera2_pane_t3_ParamLimits

0xe25b,	// (0x0007f7b5) main_camera2_pane_t3

0xe25b,	// (0x0007f7b5) main_camera2_pane_t4_ParamLimits

0xe25b,	// (0x0007f7b5) main_camera2_pane_t4

0x0006,

0xf574,	// (0x00080ace) main_camera2_pane_t_ParamLimits

0xf574,	// (0x00080ace) main_camera2_pane_t

0xee21,	// (0x0008037b) cams_zoom_pane_cp4_ParamLimits

0xee21,	// (0x0008037b) cams_zoom_pane_cp4

0xd532,	// (0x0007ea8c) image2_cif_pane_ParamLimits

0xd532,	// (0x0007ea8c) image2_cif_pane

0xce5f,	// (0x0007e3b9) image2_subqcif_pane_ParamLimits

0xce5f,	// (0x0007e3b9) image2_subqcif_pane

0xf01e,	// (0x00080578) main_video2_pane_g1_ParamLimits

0xf01e,	// (0x00080578) main_video2_pane_g1

0xf01e,	// (0x00080578) main_video2_pane_g2_ParamLimits

0xf01e,	// (0x00080578) main_video2_pane_g2

0xf01e,	// (0x00080578) main_video2_pane_g3_ParamLimits

0xf01e,	// (0x00080578) main_video2_pane_g3

0xf01e,	// (0x00080578) main_video2_pane_g4_ParamLimits

0xf01e,	// (0x00080578) main_video2_pane_g4

0xf01e,	// (0x00080578) main_video2_pane_g5_ParamLimits

0xf01e,	// (0x00080578) main_video2_pane_g5

0xf01e,	// (0x00080578) main_video2_pane_g6_ParamLimits

0xf01e,	// (0x00080578) main_video2_pane_g6

0x0005,

0xf583,	// (0x00080add) main_video2_pane_g_ParamLimits

0xf583,	// (0x00080add) main_video2_pane_g

0xf02c,	// (0x00080586) main_video2_pane_t1_ParamLimits

0xf02c,	// (0x00080586) main_video2_pane_t1

0xf02c,	// (0x00080586) main_video2_pane_t2_ParamLimits

0xf02c,	// (0x00080586) main_video2_pane_t2

0xf02c,	// (0x00080586) main_video2_pane_t3_ParamLimits

0xf02c,	// (0x00080586) main_video2_pane_t3

0x0002,

0xf590,	// (0x00080aea) main_video2_pane_t_ParamLimits

0xf590,	// (0x00080aea) main_video2_pane_t

0x6aab,	// (0x00078005) call_muted_g2

0x0001,

0xf537,	// (0x00080a91) call_muted_g

0xd2b5,	// (0x0007e80f) main_mup2_pane

0xd5a7,	// (0x0007eb01) main_mup2_pane_g1_ParamLimits

0xd5a7,	// (0x0007eb01) main_mup2_pane_g1

0xd5a7,	// (0x0007eb01) main_mup2_pane_g2_ParamLimits

0xd5a7,	// (0x0007eb01) main_mup2_pane_g2

0xe23d,	// (0x0007f797) main_mup_pane_g13_cp1

0xce55,	// (0x0007e3af) mup_volume_pane_cp1

0xd5a7,	// (0x0007eb01) main_mup2_pane_g4_ParamLimits

0xd5a7,	// (0x0007eb01) main_mup2_pane_g4

0xd5a7,	// (0x0007eb01) main_mup2_pane_g5_ParamLimits

0xd5a7,	// (0x0007eb01) main_mup2_pane_g5

0xd5a7,	// (0x0007eb01) main_mup2_pane_g6_ParamLimits

0xd5a7,	// (0x0007eb01) main_mup2_pane_g6

0xd5a7,	// (0x0007eb01) main_mup2_pane_g7_ParamLimits

0xd5a7,	// (0x0007eb01) main_mup2_pane_g7

0x0006,

0xf597,	// (0x00080af1) main_mup2_pane_g_ParamLimits

0xf597,	// (0x00080af1) main_mup2_pane_g

0xd5b5,	// (0x0007eb0f) main_mup2_pane_t1_ParamLimits

0xd5b5,	// (0x0007eb0f) main_mup2_pane_t1

0xd5b5,	// (0x0007eb0f) main_mup2_pane_t2_ParamLimits

0xd5b5,	// (0x0007eb0f) main_mup2_pane_t2

0xd5b5,	// (0x0007eb0f) main_mup2_pane_t3_ParamLimits

0xd5b5,	// (0x0007eb0f) main_mup2_pane_t3

0xd5b5,	// (0x0007eb0f) main_mup2_pane_t4_ParamLimits

0xd5b5,	// (0x0007eb0f) main_mup2_pane_t4

0xd5b5,	// (0x0007eb0f) main_mup2_pane_t5_ParamLimits

0xd5b5,	// (0x0007eb0f) main_mup2_pane_t5

0xd5b5,	// (0x0007eb0f) main_mup2_pane_t6_ParamLimits

0xd5b5,	// (0x0007eb0f) main_mup2_pane_t6

0x0005,

0xf5a6,	// (0x00080b00) main_mup2_pane_t_ParamLimits

0xf5a6,	// (0x00080b00) main_mup2_pane_t

0x12a2,	// (0x000727fc) mup2_visualizer_pane_ParamLimits

0x12a2,	// (0x000727fc) mup2_visualizer_pane

0x12a2,	// (0x000727fc) mup_progress_pane_cp_ParamLimits

0x12a2,	// (0x000727fc) mup_progress_pane_cp

0x1163,	// (0x000726bd) mup_volume_pane_cp_ParamLimits

0x1163,	// (0x000726bd) mup_volume_pane_cp

0xd58b,	// (0x0007eae5) mup2_visualizer_pane_g1_ParamLimits

0xd58b,	// (0x0007eae5) mup2_visualizer_pane_g1

0xd599,	// (0x0007eaf3) mup2_visualizer_pane_g2_ParamLimits

0xd599,	// (0x0007eaf3) mup2_visualizer_pane_g2

0xd599,	// (0x0007eaf3) mup2_visualizer_pane_g3_ParamLimits

0xd599,	// (0x0007eaf3) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x000805f9) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x000805f9) mup2_visualizer_pane_g

0xce55,	// (0x0007e3af) aid_size_cell_fmradio

0x6bc1,	// (0x0007811b) aid_height_parent_landcape

0xe59c,	// (0x0007faf6) wml_content_pane_cp

0xe5a4,	// (0x0007fafe) wml_tabs_pane

0xe5ad,	// (0x0007fb07) popup_wml_miniature_window

0xe5b5,	// (0x0007fb0f) scroll_pane_cp021

0xe5c9,	// (0x0007fb23) wml_content_pane_comp8

0xd2b5,	// (0x0007e80f) bg_popup_sub_pane_cp05

0x1179,	// (0x000726d3) popup_wml_miniature_window_g1

0x1181,	// (0x000726db) wml_miniature_view_pane

0x6f38,	// (0x00078492) aid_size_wml_view

0x6f40,	// (0x0007849a) wml_miniature_view_pane_g1

0x6f49,	// (0x000784a3) wml_miniature_view_pane_g2

0x6f52,	// (0x000784ac) wml_miniature_view_pane_g3

0x6f5a,	// (0x000784b4) wml_miniature_view_pane_g4

0x6f62,	// (0x000784bc) wml_miniature_view_pane_g5

0x6f6a,	// (0x000784c4) wml_miniature_view_pane_g6

0x6f72,	// (0x000784cc) wml_miniature_view_pane_g7

0x6f7a,	// (0x000784d4) wml_miniature_view_pane_g8

0x0007,

0xf5b3,	// (0x00080b0d) wml_miniature_view_pane_g

0x1189,	// (0x000726e3) background_graphic_ParamLimits

0x1189,	// (0x000726e3) background_graphic

0x1195,	// (0x000726ef) wml_tabs_2_pane

0x119e,	// (0x000726f8) wml_tabs_3_pane_ParamLimits

0x119e,	// (0x000726f8) wml_tabs_3_pane

0x11b0,	// (0x0007270a) wml_tabs_4_pane_ParamLimits

0x11b0,	// (0x0007270a) wml_tabs_4_pane

0x11c6,	// (0x00072720) wml_tabs_5_pane_ParamLimits

0x11c6,	// (0x00072720) wml_tabs_5_pane

0x11e0,	// (0x0007273a) wml_tabs_pane_g2_ParamLimits

0x11e0,	// (0x0007273a) wml_tabs_pane_g2

0x11f5,	// (0x0007274f) wml_tabs_pane_g3_ParamLimits

0x11f5,	// (0x0007274f) wml_tabs_pane_g3

0x120a,	// (0x00072764) wml_tabs_2_active_pane_ParamLimits

0x120a,	// (0x00072764) wml_tabs_2_active_pane

0x120a,	// (0x00072764) wml_tabs_2_passive_pane_ParamLimits

0x120a,	// (0x00072764) wml_tabs_2_passive_pane

0x6f82,	// (0x000784dc) wml_tabs_3_active_pane_cp_ParamLimits

0x6f82,	// (0x000784dc) wml_tabs_3_active_pane_cp

0x6f95,	// (0x000784ef) wml_tabs_3_passive_pane_ParamLimits

0x6f95,	// (0x000784ef) wml_tabs_3_passive_pane

0x6fa6,	// (0x00078500) wml_tabs_3_passive_pane_cp_ParamLimits

0x6fa6,	// (0x00078500) wml_tabs_3_passive_pane_cp

0x6fbb,	// (0x00078515) tabs_4_active_pane

0x6fc3,	// (0x0007851d) tabs_4_passive_pane

0x6fcb,	// (0x00078525) tabs_4_passive_pane_cp

0x6fd3,	// (0x0007852d) tabs_4_passive_pane_cp2

0x6a1f,	// (0x00077f79) aid_height_text

0x12a2,	// (0x000727fc) mup_volume_cont_pane_ParamLimits

0x12a2,	// (0x000727fc) mup_volume_cont_pane

0xce55,	// (0x0007e3af) aid_size_cell_pinb

0xce55,	// (0x0007e3af) aid_size_list_pinb

0x12a2,	// (0x000727fc) mup2_volume_cont_pane_ParamLimits

0x12a2,	// (0x000727fc) mup2_volume_cont_pane

0x6fdd,	// (0x00078537) mup2_volume_cont_pane_g1_ParamLimits

0x6fdd,	// (0x00078537) mup2_volume_cont_pane_g1

0x3dc3,	// (0x0007531d) aid_size_cell_touch_ParamLimits

0x3dc3,	// (0x0007531d) aid_size_cell_touch

0x4068,	// (0x000755c2) touch_pane_ParamLimits

0x4068,	// (0x000755c2) touch_pane

0xce55,	// (0x0007e3af) main_rss2_pane

0x1221,	// (0x0007277b) listscroll_rss2_pane

0x122a,	// (0x00072784) rss2_navigation_pane

0x1232,	// (0x0007278c) list_rss2_pane

0xec22,	// (0x0008017c) scroll_pane_cp22

0x123a,	// (0x00072794) rss2_navigation_pane_g1

0x1243,	// (0x0007279d) rss2_navigation_pane_g2

0x124b,	// (0x000727a5) rss2_navigation_pane_g3

0x0002,

0xf5c4,	// (0x00080b1e) rss2_navigation_pane_g

0x1253,	// (0x000727ad) rss2_navigation_pane_t1

0x6ff3,	// (0x0007854d) rss2_list_single_pane_ParamLimits

0x6ff3,	// (0x0007854d) rss2_list_single_pane

0x1261,	// (0x000727bb) rss2_list_single_pane_t2

0x126f,	// (0x000727c9) rss2_list_single_pane_t3_ParamLimits

0x126f,	// (0x000727c9) rss2_list_single_pane_t3

0x128c,	// (0x000727e6) rss2_list_single_pane_t4

0x5ca6,	// (0x00077200) smil_status_pane_g1

0xd532,	// (0x0007ea8c) main_image2_pane_ParamLimits

0xd532,	// (0x0007ea8c) main_image2_pane

0xd599,	// (0x0007eaf3) main_camera2_pane_g9_ParamLimits

0xd599,	// (0x0007eaf3) main_camera2_pane_g9

0xe25b,	// (0x0007f7b5) main_camera2_pane_t5_ParamLimits

0xe25b,	// (0x0007f7b5) main_camera2_pane_t5

0x1b79,	// (0x000730d3) main_camera2_pane_t6_ParamLimits

0x1b79,	// (0x000730d3) main_camera2_pane_t6

0x7016,	// (0x00078570) main_image2_pane_g1_ParamLimits

0x7016,	// (0x00078570) main_image2_pane_g1

0x6754,	// (0x00077cae) smil2_video_pane_ParamLimits

0x6754,	// (0x00077cae) smil2_video_pane

0x30ae,	// (0x00074608) aid_zoom_text_primary_cp

0x4011,	// (0x0007556b) popup_preview_fixed_window

0xe4f6,	// (0x0007fa50) im_reading_pane_g1

0x6f2a,	// (0x00078484) cams2_bc_adjust_pane_cp_ParamLimits

0x6f2a,	// (0x00078484) cams2_bc_adjust_pane_cp

0xce5f,	// (0x0007e3b9) cams2_bc_adjust_pane_ParamLimits

0xce5f,	// (0x0007e3b9) cams2_bc_adjust_pane

0xe23d,	// (0x0007f797) cams2_bc_adjust_pane_g1

0xce55,	// (0x0007e3af) cams2_slider_pane

0xe23d,	// (0x0007f797) cams2_slider_pane_g1

0xe23d,	// (0x0007f797) cams2_slider_pane_g2

0x0006,

0xf5cb,	// (0x00080b25) cams2_slider_pane_g

0x40fd,	// (0x00075657) calc_display_pane_ParamLimits

0x411b,	// (0x00075675) calc_paper_pane_ParamLimits

0x4137,	// (0x00075691) grid_calc_pane_ParamLimits

0x5e5d,	// (0x000773b7) popup_clock_digital_window_t1_ParamLimits

0xefb6,	// (0x00080510) main_image_pane_t1

0x40e3,	// (0x0007563d) aid_size_cell_calc_ParamLimits

0x40e3,	// (0x0007563d) aid_size_cell_calc

0x6bfb,	// (0x00078155) popup_blid_sat_info2_window_ParamLimits

0x6bfb,	// (0x00078155) popup_blid_sat_info2_window

0x129a,	// (0x000727f4) aid_size_cell_blid

0x12a2,	// (0x000727fc) bg_popup_window_pane_cp07

0x12c5,	// (0x0007281f) grid_popup_blid_pane

0x12cf,	// (0x00072829) heading_pane_cp05_ParamLimits

0x12cf,	// (0x00072829) heading_pane_cp05

0x1399,	// (0x000728f3) cell_popup_blid_pane_ParamLimits

0x1399,	// (0x000728f3) cell_popup_blid_pane

0x13c3,	// (0x0007291d) cell_popup_blid_pane_g1

0x13cb,	// (0x00072925) cell_popup_blid_pane_t1

0x12a2,	// (0x000727fc) mup2_indicator_pane_ParamLimits

0x12a2,	// (0x000727fc) mup2_indicator_pane

0xce55,	// (0x0007e3af) mup2_visualizer_osc_pane

0x1163,	// (0x000726bd) mup2_visualizer_spec_pane_ParamLimits

0x1163,	// (0x000726bd) mup2_visualizer_spec_pane

0xce55,	// (0x0007e3af) mup2_spec_half_pane

0xce55,	// (0x0007e3af) mup2_spec_half_pane_cp

0x13d9,	// (0x00072933) mup2_spec_bar_pane_ParamLimits

0x13d9,	// (0x00072933) mup2_spec_bar_pane

0xe23d,	// (0x0007f797) mup2_spec_bar_pane_g1

0x13f8,	// (0x00072952) mup2_spec_bar_pane_g2

0x0001,

0xf5f1,	// (0x00080b4b) mup2_spec_bar_pane_g

0xce55,	// (0x0007e3af) mup2_osc_middle_pane

0xe23d,	// (0x0007f797) mup2_visualizer_osc_pane_g1

0xce8d,	// (0x0007e3e7) popup_number_entry_window_t1_ParamLimits

0xcea0,	// (0x0007e3fa) popup_number_entry_window_t2_ParamLimits

0xceb2,	// (0x0007e40c) popup_number_entry_window_t3_ParamLimits

0xcec4,	// (0x0007e41e) popup_number_entry_window_t5_ParamLimits

0xcec4,	// (0x0007e41e) popup_number_entry_window_t5

0xf040,	// (0x0008059a) popup_number_entry_window_t_ParamLimits

0xcef9,	// (0x0007e453) text_title_cp2_ParamLimits

0x646a,	// (0x000779c4) aid_hotspot_pointer_text2_pane

0x6504,	// (0x00077a5e) main_viewer_pane_g9_ParamLimits

0x6504,	// (0x00077a5e) main_viewer_pane_g9

0xe73e,	// (0x0007fc98) cale_month_pane_t1_ParamLimits

0xe77b,	// (0x0007fcd5) bg_cale_pane_ParamLimits

0xe793,	// (0x0007fced) list_cale_pane_ParamLimits

0xe7a4,	// (0x0007fcfe) listscroll_cale_day_pane_t1

0xe7b6,	// (0x0007fd10) scroll_pane_cp09_ParamLimits

0x620d,	// (0x00077767) main_mup_eq_pane_t1_ParamLimits

0x620d,	// (0x00077767) main_mup_eq_pane_t1

0x6229,	// (0x00077783) main_mup_eq_pane_t2_ParamLimits

0x6229,	// (0x00077783) main_mup_eq_pane_t2

0x6245,	// (0x0007779f) main_mup_eq_pane_t3_ParamLimits

0x6245,	// (0x0007779f) main_mup_eq_pane_t3

0x625f,	// (0x000777b9) main_mup_eq_pane_t4_ParamLimits

0x625f,	// (0x000777b9) main_mup_eq_pane_t4

0x6279,	// (0x000777d3) main_mup_eq_pane_t5_ParamLimits

0x6279,	// (0x000777d3) main_mup_eq_pane_t5

0x6293,	// (0x000777ed) main_mup_eq_pane_t6_ParamLimits

0x6293,	// (0x000777ed) main_mup_eq_pane_t6

0x62a9,	// (0x00077803) main_mup_eq_pane_t7_ParamLimits

0x62a9,	// (0x00077803) main_mup_eq_pane_t7

0x62bf,	// (0x00077819) main_mup_eq_pane_t8_ParamLimits

0x62bf,	// (0x00077819) main_mup_eq_pane_t8

0x62d5,	// (0x0007782f) main_mup_eq_pane_t9_ParamLimits

0x62d5,	// (0x0007782f) main_mup_eq_pane_t9

0x62f1,	// (0x0007784b) main_mup_eq_pane_t10_ParamLimits

0x62f1,	// (0x0007784b) main_mup_eq_pane_t10

0x0009,

0xf39f,	// (0x000808f9) main_mup_eq_pane_t_ParamLimits

0xf39f,	// (0x000808f9) main_mup_eq_pane_t

0x63b6,	// (0x00077910) mup_equalizer_pane_cp5_ParamLimits

0x63ce,	// (0x00077928) mup_equalizer_pane_cp6_ParamLimits

0x63e6,	// (0x00077940) mup_equalizer_pane_cp7_ParamLimits

0xce55,	// (0x0007e3af) main_gallery_pane

0x1101,	// (0x0007265b) smil2_volume_pane

0x111c,	// (0x00072676) smil_status_volume_pane_g1_ParamLimits

0x1109,	// (0x00072663) smil_status_volume_pane_g2_ParamLimits

0x6dd7,	// (0x00078331) smil_status_volume_pane_g3_ParamLimits

0xf54a,	// (0x00080aa4) smil_status_volume_pane_g_ParamLimits

0x12a2,	// (0x000727fc) bg_popup_window_pane_cp07_ParamLimits

0x12b0,	// (0x0007280a) blid_firmament_pane

0xce5f,	// (0x0007e3b9) aid_size_cell_gallery_ParamLimits

0xce5f,	// (0x0007e3b9) aid_size_cell_gallery

0xce5f,	// (0x0007e3b9) grid_gallery_pane_ParamLimits

0xce5f,	// (0x0007e3b9) grid_gallery_pane

0xee21,	// (0x0008037b) cell_gallery_pane_ParamLimits

0xee21,	// (0x0008037b) cell_gallery_pane

0xd532,	// (0x0007ea8c) bg_cell_gallery_focus_pane_ParamLimits

0xd532,	// (0x0007ea8c) bg_cell_gallery_focus_pane

0xd58b,	// (0x0007eae5) cell_gallery_pane_g1_ParamLimits

0xd58b,	// (0x0007eae5) cell_gallery_pane_g1

0xd58b,	// (0x0007eae5) cell_gallery_pane_g2_ParamLimits

0xd58b,	// (0x0007eae5) cell_gallery_pane_g2

0xd58b,	// (0x0007eae5) cell_gallery_pane_g3_ParamLimits

0xd58b,	// (0x0007eae5) cell_gallery_pane_g3

0xd599,	// (0x0007eaf3) cell_gallery_pane_g4_ParamLimits

0xd599,	// (0x0007eaf3) cell_gallery_pane_g4

0x0003,

0xf5f6,	// (0x00080b50) cell_gallery_pane_g_ParamLimits

0xf5f6,	// (0x00080b50) cell_gallery_pane_g

0x1402,	// (0x0007295c) bg_cell_gallery_focus_pane_g1

0x140a,	// (0x00072964) bg_cell_gallery_focus_pane_g2

0x1412,	// (0x0007296c) bg_cell_gallery_focus_pane_g3

0x141a,	// (0x00072974) bg_cell_gallery_focus_pane_g4

0x1422,	// (0x0007297c) bg_cell_gallery_focus_pane_g5

0x142a,	// (0x00072984) bg_cell_gallery_focus_pane_g6

0x1432,	// (0x0007298c) bg_cell_gallery_focus_pane_g7

0x143a,	// (0x00072994) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5ff,	// (0x00080b59) bg_cell_gallery_focus_pane_g

0x1442,	// (0x0007299c) aid_firma_cardinal

0x1456,	// (0x000729b0) blid_firmament_pane_t1

0x146d,	// (0x000729c7) blid_firmament_pane_t2

0x1484,	// (0x000729de) blid_firmament_pane_t3

0x149b,	// (0x000729f5) blid_firmament_pane_t4

0x0003,

0xf610,	// (0x00080b6a) blid_firmament_pane_t

0x14b2,	// (0x00072a0c) blid_sat_info_pane

0xe23d,	// (0x0007f797) blid_sat_info_pane_g1

0xe23d,	// (0x0007f797) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x00080609) blid_sat_info_pane_g

0x14c2,	// (0x00072a1c) blid_sat_info_pane_t1

0x14d0,	// (0x00072a2a) smil2_volume_content_pane

0x14d9,	// (0x00072a33) smil2_volume_pane_g1

0xf009,	// (0x00080563) smil2_volume_content_pane_g1

0x14e1,	// (0x00072a3b) smil2_volume_content_pane_g2

0x14ea,	// (0x00072a44) smil2_volume_content_pane_g3

0x14f3,	// (0x00072a4d) smil2_volume_content_pane_g4

0x14fc,	// (0x00072a56) smil2_volume_content_pane_g5

0x1505,	// (0x00072a5f) smil2_volume_content_pane_g6

0x150e,	// (0x00072a68) smil2_volume_content_pane_g7

0x1517,	// (0x00072a71) smil2_volume_content_pane_g8

0x1520,	// (0x00072a7a) smil2_volume_content_pane_g9

0x1529,	// (0x00072a83) smil2_volume_content_pane_g10

0x0009,

0xf619,	// (0x00080b73) smil2_volume_content_pane_g

0x4760,	// (0x00075cba) cale_week_day_heading_pane_t1_ParamLimits

0x4788,	// (0x00075ce2) cale_week_day_heading_pane_t2_ParamLimits

0x47b5,	// (0x00075d0f) cale_week_day_heading_pane_t3_ParamLimits

0x47e2,	// (0x00075d3c) cale_week_day_heading_pane_t4_ParamLimits

0x480f,	// (0x00075d69) cale_week_day_heading_pane_t5_ParamLimits

0x483c,	// (0x00075d96) cale_week_day_heading_pane_t6_ParamLimits

0x4869,	// (0x00075dc3) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x000806a1) cale_week_day_heading_pane_t_ParamLimits

0xe3de,	// (0x0007f938) bg_cale_side_pane_ParamLimits

0x4891,	// (0x00075deb) cale_week_time_pane_t1_ParamLimits

0x48b5,	// (0x00075e0f) cale_week_time_pane_t2_ParamLimits

0x48d9,	// (0x00075e33) cale_week_time_pane_t3_ParamLimits

0x48fd,	// (0x00075e57) cale_week_time_pane_t4_ParamLimits

0x4921,	// (0x00075e7b) cale_week_time_pane_t5_ParamLimits

0x4947,	// (0x00075ea1) cale_week_time_pane_t6_ParamLimits

0x496f,	// (0x00075ec9) cale_week_time_pane_t7_ParamLimits

0x499b,	// (0x00075ef5) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x000806b0) cale_week_time_pane_t_ParamLimits

0x49cb,	// (0x00075f25) cell_cale_week_pane_g2_ParamLimits

0xe3de,	// (0x0007f938) bg_cale_side_pane_cp01_ParamLimits

0x5a91,	// (0x00076feb) cale_month_week_pane_t1_ParamLimits

0x5aaa,	// (0x00077004) cale_month_week_pane_t2_ParamLimits

0x5ac3,	// (0x0007701d) cale_month_week_pane_t3_ParamLimits

0x5adc,	// (0x00077036) cale_month_week_pane_t4_ParamLimits

0x5af5,	// (0x0007704f) cale_month_week_pane_t5_ParamLimits

0x5b12,	// (0x0007706c) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x0008077e) cale_month_week_pane_t_ParamLimits

0x5c63,	// (0x000771bd) cell_cale_month_pane_g1_ParamLimits

0xce55,	// (0x0007e3af) main_cale_event_viewer_pane

0xce55,	// (0x0007e3af) listscroll_cale_event_viewer_pane

0x1532,	// (0x00072a8c) list_cale_ev_pane

0x153a,	// (0x00072a94) scroll_pane_cp023

0x7022,	// (0x0007857c) field_cale_ev_pane_ParamLimits

0x7022,	// (0x0007857c) field_cale_ev_pane

0x1546,	// (0x00072aa0) field_cale_ev_content_pane_ParamLimits

0x1546,	// (0x00072aa0) field_cale_ev_content_pane

0x1552,	// (0x00072aac) field_cale_ev_pane_g1_ParamLimits

0x1552,	// (0x00072aac) field_cale_ev_pane_g1

0x155e,	// (0x00072ab8) field_cale_ev_pane_g2_ParamLimits

0x155e,	// (0x00072ab8) field_cale_ev_pane_g2

0x1576,	// (0x00072ad0) field_cale_ev_pane_g3_ParamLimits

0x1576,	// (0x00072ad0) field_cale_ev_pane_g3

0x0002,

0xf62e,	// (0x00080b88) field_cale_ev_pane_g_ParamLimits

0xf62e,	// (0x00080b88) field_cale_ev_pane_g

0x158e,	// (0x00072ae8) field_cale_ev_pane_t1_ParamLimits

0x158e,	// (0x00072ae8) field_cale_ev_pane_t1

0x7046,	// (0x000785a0) field_cale_ev_content_pane_t1_ParamLimits

0x7046,	// (0x000785a0) field_cale_ev_content_pane_t1

0xeeb8,	// (0x00080412) bg_button_pane_cp01

0x43be,	// (0x00075918) listscroll_cale_week_pane_ParamLimits

0xe3a6,	// (0x0007f900) popup_toolbar_window_cp01

0xe3af,	// (0x0007f909) listscroll_cale_week_pane_t1_ParamLimits

0x43be,	// (0x00075918) listscroll_cale_day_pane_ParamLimits

0xe3a6,	// (0x0007f900) popup_toolbar_window_cp02

0xe7a4,	// (0x0007fcfe) listscroll_cale_day_pane_t1_ParamLimits

0x43be,	// (0x00075918) main_cale_month_pane_ParamLimits

0x6d1a,	// (0x00078274) popup_toolbar_window_cp03_ParamLimits

0x6d1a,	// (0x00078274) popup_toolbar_window_cp03

0x6664,	// (0x00077bbe) main_image_pane_g2_ParamLimits

0x6664,	// (0x00077bbe) main_image_pane_g2

0x6670,	// (0x00077bca) main_image_pane_g3_ParamLimits

0x6670,	// (0x00077bca) main_image_pane_g3

0x0002,

0xf431,	// (0x0008098b) main_image_pane_g_ParamLimits

0xf431,	// (0x0008098b) main_image_pane_g

0xefb6,	// (0x00080510) main_image_pane_t1_ParamLimits

0x667c,	// (0x00077bd6) main_image_pane_t2_ParamLimits

0x667c,	// (0x00077bd6) main_image_pane_t2

0x668e,	// (0x00077be8) main_image_pane_t3_ParamLimits

0x668e,	// (0x00077be8) main_image_pane_t3

0x66a0,	// (0x00077bfa) main_image_pane_t4_ParamLimits

0x66a0,	// (0x00077bfa) main_image_pane_t4

0x0003,

0xf438,	// (0x00080992) main_image_pane_t_ParamLimits

0xf438,	// (0x00080992) main_image_pane_t

0x66b2,	// (0x00077c0c) popup_image_details_window_cp01

0x66bc,	// (0x00077c16) popup_toobar_trans_pane_cp01_ParamLimits

0x66bc,	// (0x00077c16) popup_toobar_trans_pane_cp01

0x6c5c,	// (0x000781b6) popup_image_details_window_ParamLimits

0x6c5c,	// (0x000781b6) popup_image_details_window

0x6c6a,	// (0x000781c4) popup_image_focus_window

0xce5f,	// (0x0007e3b9) camera2_autofocus_pane_ParamLimits

0xce5f,	// (0x0007e3b9) camera2_autofocus_pane

0xce55,	// (0x0007e3af) bg_popup_sub_pane_cp06

0x15a5,	// (0x00072aff) popup_image_focus_window_g1

0x15ad,	// (0x00072b07) popup_image_focus_window_g2

0x15b5,	// (0x00072b0f) popup_image_focus_window_g3

0x15bd,	// (0x00072b17) popup_image_focus_window_g4

0x0003,

0xf635,	// (0x00080b8f) popup_image_focus_window_g

0x15c5,	// (0x00072b1f) popup_image_focus_window_t1

0x15d3,	// (0x00072b2d) popup_image_focus_window_t2

0x15e3,	// (0x00072b3d) popup_image_focus_window_t3

0x0002,

0xf63e,	// (0x00080b98) popup_image_focus_window_t

0xd58b,	// (0x0007eae5) camera2_autofocus_pane_g1

0xd532,	// (0x0007ea8c) bg_tb_trans_pane_cp01

0x15f1,	// (0x00072b4b) popup_image_details_window_g1

0x1604,	// (0x00072b5e) popup_image_details_window_g2

0x0002,

0xf650,	// (0x00080baa) popup_image_details_window_g

0x162d,	// (0x00072b87) popup_image_details_window_t1

0x163f,	// (0x00072b99) popup_image_details_window_t2

0x1658,	// (0x00072bb2) popup_image_details_window_t3

0x166c,	// (0x00072bc6) popup_image_details_window_t4

0x1687,	// (0x00072be1) popup_image_details_window_t5

0x0004,

0xf657,	// (0x00080bb1) popup_image_details_window_t

0xe287,	// (0x0007f7e1) bg_calc_paper_pane_ParamLimits

0xce55,	// (0x0007e3af) grid_highlight_pane_cp013

0x4172,	// (0x000756cc) list_calc_pane_ParamLimits

0x4184,	// (0x000756de) scroll_pane_cp024

0xe29b,	// (0x0007f7f5) bg_calc_display_pane_ParamLimits

0x418c,	// (0x000756e6) calc_display_pane_t1_ParamLimits

0x41a1,	// (0x000756fb) calc_display_pane_t2_ParamLimits

0x41b6,	// (0x00075710) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x00080621) calc_display_pane_t_ParamLimits

0x4286,	// (0x000757e0) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x0008063e) cell_calc_pane_g

0x428f,	// (0x000757e9) cell_calc_pane_t1

0xe2f0,	// (0x0007f84a) grid_highlight_pane_cp02_ParamLimits

0xe306,	// (0x0007f860) toolbar_button_pane_cp01_ParamLimits

0xe306,	// (0x0007f860) toolbar_button_pane_cp01

0x00a3,	// (0x000715fd) temp_image_control_pane_ParamLimits

0x00a3,	// (0x000715fd) temp_image_control_pane

0xd532,	// (0x0007ea8c) main_mp3_pane

0x16a1,	// (0x00072bfb) temp_image_control_pane_g1_ParamLimits

0x16a1,	// (0x00072bfb) temp_image_control_pane_g1

0x16af,	// (0x00072c09) temp_image_control_pane_g2_ParamLimits

0x16af,	// (0x00072c09) temp_image_control_pane_g2

0x16c1,	// (0x00072c1b) temp_image_control_pane_g3_ParamLimits

0x16c1,	// (0x00072c1b) temp_image_control_pane_g3

0x7061,	// (0x000785bb) temp_image_control_pane_g4_ParamLimits

0x7061,	// (0x000785bb) temp_image_control_pane_g4

0x0003,

0xf662,	// (0x00080bbc) temp_image_control_pane_g_ParamLimits

0xf662,	// (0x00080bbc) temp_image_control_pane_g

0x16a1,	// (0x00072bfb) main_mp3_pane_g1

0x7072,	// (0x000785cc) main_mp3_pane_g2

0x0007,

0xf66b,	// (0x00080bc5) main_mp3_pane_g

0x16f6,	// (0x00072c50) main_mp3_pane_t1

0xd599,	// (0x0007eaf3) main_camera_pane_g8_ParamLimits

0xd599,	// (0x0007eaf3) main_camera_pane_g8

0x4b77,	// (0x000760d1) main_video_pane_g7_ParamLimits

0x4b77,	// (0x000760d1) main_video_pane_g7

0xe25b,	// (0x0007f7b5) main_camera2_pane_t7_ParamLimits

0xe25b,	// (0x0007f7b5) main_camera2_pane_t7

0xe55c,	// (0x0007fab6) scroll_pane_cp025_ParamLimits

0xe55c,	// (0x0007fab6) scroll_pane_cp025

0xe570,	// (0x0007faca) scroll_pane_cp026_ParamLimits

0xe570,	// (0x0007faca) scroll_pane_cp026

0xe57f,	// (0x0007fad9) wml_content_pane_ParamLimits

0xce55,	// (0x0007e3af) main_touch_calib_pane

0x7116,	// (0x00078670) main_touch_calib_pane_g1

0x7122,	// (0x0007867c) main_touch_calib_pane_g2

0x712e,	// (0x00078688) main_touch_calib_pane_g3

0x713a,	// (0x00078694) main_touch_calib_pane_g4

0x0003,

0xf689,	// (0x00080be3) main_touch_calib_pane_g

0x7146,	// (0x000786a0) main_touch_calib_pane_t1

0x715d,	// (0x000786b7) main_touch_calib_pane_t2

0x0004,

0xf692,	// (0x00080bec) main_touch_calib_pane_t

0xec9d,	// (0x000801f7) mup_progress_pane_cp02

0xecbc,	// (0x00080216) navi_pane_g1

0xed1e,	// (0x00080278) navi_pane_mp_t3

0xd532,	// (0x0007ea8c) main_mp3_pane_ParamLimits

0x6d5b,	// (0x000782b5) navi_pane_ParamLimits

0x16a1,	// (0x00072bfb) main_mp3_pane_g1_ParamLimits

0x7072,	// (0x000785cc) main_mp3_pane_g2_ParamLimits

0x707e,	// (0x000785d8) main_mp3_pane_g3_ParamLimits

0x707e,	// (0x000785d8) main_mp3_pane_g3

0x708a,	// (0x000785e4) main_mp3_pane_g4_ParamLimits

0x708a,	// (0x000785e4) main_mp3_pane_g4

0xd58b,	// (0x0007eae5) main_mp3_pane_g5_ParamLimits

0xd58b,	// (0x0007eae5) main_mp3_pane_g5

0x16d1,	// (0x00072c2b) main_mp3_pane_g6_ParamLimits

0x16d1,	// (0x00072c2b) main_mp3_pane_g6

0x16de,	// (0x00072c38) main_mp3_pane_g7_ParamLimits

0x16de,	// (0x00072c38) main_mp3_pane_g7

0x16ea,	// (0x00072c44) main_mp3_pane_g8_ParamLimits

0x16ea,	// (0x00072c44) main_mp3_pane_g8

0xf66b,	// (0x00080bc5) main_mp3_pane_g_ParamLimits

0x7096,	// (0x000785f0) main_mp3_pane_t2

0x70a6,	// (0x00078600) main_mp3_pane_t3

0x1704,	// (0x00072c5e) main_mp3_pane_t4

0x1712,	// (0x00072c6c) main_mp3_pane_t5

0x0005,

0xf67c,	// (0x00080bd6) main_mp3_pane_t

0x1720,	// (0x00072c7a) mup_progress_pane_cp01

0x30ae,	// (0x00074608) aid_zoom_text_secondary2

0x1532,	// (0x00072a8c) list_cale_ev2_pane

0x153a,	// (0x00072a94) scroll_pane_cp023_ParamLimits

0x71b8,	// (0x00078712) field_cale_ev2_pane_ParamLimits

0x71b8,	// (0x00078712) field_cale_ev2_pane

0x71d3,	// (0x0007872d) field_cale_ev2_pane_g1_ParamLimits

0x71d3,	// (0x0007872d) field_cale_ev2_pane_g1

0x71df,	// (0x00078739) field_cale_ev2_pane_g2_ParamLimits

0x71df,	// (0x00078739) field_cale_ev2_pane_g2

0x71f7,	// (0x00078751) field_cale_ev2_pane_g3_ParamLimits

0x71f7,	// (0x00078751) field_cale_ev2_pane_g3

0x0003,

0xf69d,	// (0x00080bf7) field_cale_ev2_pane_g_ParamLimits

0xf69d,	// (0x00080bf7) field_cale_ev2_pane_g

0x31d6,	// (0x00074730) field_cale_ev2_pane_t1_ParamLimits

0x31d6,	// (0x00074730) field_cale_ev2_pane_t1

0x31ed,	// (0x00074747) field_cale_ev2_pane_t2_ParamLimits

0x31ed,	// (0x00074747) field_cale_ev2_pane_t2

0x0001,

0xf6a6,	// (0x00080c00) field_cale_ev2_pane_t_ParamLimits

0xf6a6,	// (0x00080c00) field_cale_ev2_pane_t

0x656c,	// (0x00077ac6) main_postcard_pane_g5_ParamLimits

0x656c,	// (0x00077ac6) main_postcard_pane_g5

0x657a,	// (0x00077ad4) main_postcard_pane_g6_ParamLimits

0x657a,	// (0x00077ad4) main_postcard_pane_g6

0xce5f,	// (0x0007e3b9) camera2_autofocus_pane_cp_ParamLimits

0xce5f,	// (0x0007e3b9) camera2_autofocus_pane_cp

0xd532,	// (0x0007ea8c) main_mup3_pane

0x725e,	// (0x000787b8) main_mup3_pane_g1_ParamLimits

0x725e,	// (0x000787b8) main_mup3_pane_g1

0x727f,	// (0x000787d9) main_mup3_pane_g2_ParamLimits

0x727f,	// (0x000787d9) main_mup3_pane_g2

0x72f3,	// (0x0007884d) main_mup3_pane_g3_ParamLimits

0x72f3,	// (0x0007884d) main_mup3_pane_g3

0x7358,	// (0x000788b2) main_mup3_pane_g4_ParamLimits

0x7358,	// (0x000788b2) main_mup3_pane_g4

0x73bd,	// (0x00078917) main_mup3_pane_g5_ParamLimits

0x73bd,	// (0x00078917) main_mup3_pane_g5

0x7422,	// (0x0007897c) main_mup3_pane_g6_ParamLimits

0x7422,	// (0x0007897c) main_mup3_pane_g6

0xd599,	// (0x0007eaf3) main_mup3_pane_g7_ParamLimits

0xd599,	// (0x0007eaf3) main_mup3_pane_g7

0x0007,

0xf6b6,	// (0x00080c10) main_mup3_pane_g_ParamLimits

0xf6b6,	// (0x00080c10) main_mup3_pane_g

0x749c,	// (0x000789f6) main_mup3_pane_t1_ParamLimits

0x749c,	// (0x000789f6) main_mup3_pane_t1

0x7501,	// (0x00078a5b) main_mup3_pane_t2_ParamLimits

0x7501,	// (0x00078a5b) main_mup3_pane_t2

0x75ca,	// (0x00078b24) main_mup3_pane_t4_ParamLimits

0x75ca,	// (0x00078b24) main_mup3_pane_t4

0x761e,	// (0x00078b78) main_mup3_pane_t5_ParamLimits

0x761e,	// (0x00078b78) main_mup3_pane_t5

0x76da,	// (0x00078c34) main_mup3_pane_t6_ParamLimits

0x76da,	// (0x00078c34) main_mup3_pane_t6

0x0005,

0xf6c7,	// (0x00080c21) main_mup3_pane_t_ParamLimits

0xf6c7,	// (0x00080c21) main_mup3_pane_t

0x7784,	// (0x00078cde) mup3_progress_pane_ParamLimits

0x7784,	// (0x00078cde) mup3_progress_pane

0x7802,	// (0x00078d5c) popup_mup3_control_window_ParamLimits

0x7802,	// (0x00078d5c) popup_mup3_control_window

0x1734,	// (0x00072c8e) popup_mup3_text_window

0x781f,	// (0x00078d79) mup3_progress_pane_t1

0x783d,	// (0x00078d97) mup3_progress_pane_t2

0x173c,	// (0x00072c96) mup3_progress_pane_t3

0x0002,

0xf6d4,	// (0x00080c2e) mup3_progress_pane_t

0x1759,	// (0x00072cb3) mup_progress_pane_cp03

0xce55,	// (0x0007e3af) bg_tb_trans_pane_cp04

0x785b,	// (0x00078db5) mup3_volume_pane

0x7863,	// (0x00078dbd) popup_mup3_control_window_g1

0xc254,	// (0x0007d7ae) mup3_volume_pane_g1

0xc25d,	// (0x0007d7b7) mup3_volume_pane_g2

0xc266,	// (0x0007d7c0) mup3_volume_pane_g3

0x0002,

0xf6db,	// (0x00080c35) mup3_volume_pane_g

0xce55,	// (0x0007e3af) bg_tb_trans_pane_cp03

0x1769,	// (0x00072cc3) popup_mup3_text_window_g1

0x1771,	// (0x00072ccb) popup_mup3_text_window_t1

0xe2e3,	// (0x0007f83d) list_calc_item_pane_g1_ParamLimits

0x1218,	// (0x00072772) mup_volume_pane_cp_g1

0x7176,	// (0x000786d0) main_touch_calib_pane_t3

0x718c,	// (0x000786e6) main_touch_calib_pane_t4

0x71a2,	// (0x000786fc) main_touch_calib_pane_t5

0x3daf,	// (0x00075309) aid_cell_size_toolbar2

0x3db7,	// (0x00075311) aid_popup3_width_pane

0x309e,	// (0x000745f8) aid_zoom_text_msg_primary

0x4a77,	// (0x00075fd1) vorec_t7

0xe2a7,	// (0x0007f801) bg_calc_paper_pane_g1_ParamLimits

0xe2b3,	// (0x0007f80d) bg_calc_paper_pane_g2_ParamLimits

0xe2bf,	// (0x0007f819) bg_calc_paper_pane_g3_ParamLimits

0xe2cb,	// (0x0007f825) bg_calc_paper_pane_g4_ParamLimits

0xe2d7,	// (0x0007f831) bg_calc_paper_pane_g5_ParamLimits

0x41f7,	// (0x00075751) bg_calc_paper_pane_g6_ParamLimits

0x4208,	// (0x00075762) bg_calc_paper_pane_g7_ParamLimits

0x4219,	// (0x00075773) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x00080628) bg_calc_paper_pane_g_ParamLimits

0x422a,	// (0x00075784) calc_bg_paper_pane_g9_ParamLimits

0xce5f,	// (0x0007e3b9) image_qvga_pane_ParamLimits

0xce5f,	// (0x0007e3b9) image_qvga_pane

0xd510,	// (0x0007ea6a) bg_popup_sub_pane_cp04_ParamLimits

0xef32,	// (0x0008048c) popup_mup_playback_window_g1_ParamLimits

0xef3e,	// (0x00080498) popup_mup_playback_window_t1_ParamLimits

0xef53,	// (0x000804ad) popup_mup_playback_window_t2_ParamLimits

0xf42c,	// (0x00080986) popup_mup_playback_window_t_ParamLimits

0xd58b,	// (0x0007eae5) main_mup2_pane_g3_ParamLimits

0xd58b,	// (0x0007eae5) main_mup2_pane_g3

0x4d2a,	// (0x00076284) popup_toolbar_window_cp04

0x037f,	// (0x000718d9) popup_call2_audio_second_window_g3_ParamLimits

0x037f,	// (0x000718d9) popup_call2_audio_second_window_g3

0x0789,	// (0x00071ce3) popup_call2_audio_first_window_g4_ParamLimits

0x0789,	// (0x00071ce3) popup_call2_audio_first_window_g4

0x0db0,	// (0x0007230a) popup_call2_audio_in_window_g4_ParamLimits

0x0db0,	// (0x0007230a) popup_call2_audio_in_window_g4

0x6657,	// (0x00077bb1) aid_area_sk_bg_cut_ParamLimits

0x6657,	// (0x00077bb1) aid_area_sk_bg_cut

0xef68,	// (0x000804c2) aid_area_sk_bg_cut_2_ParamLimits

0xef68,	// (0x000804c2) aid_area_sk_bg_cut_2

0xce55,	// (0x0007e3af) aid_placing_details_win

0xce55,	// (0x0007e3af) aid_placing_details_win_2

0xd58b,	// (0x0007eae5) camera2_autofocus_pane_g1_ParamLimits

0x4002,	// (0x0007555c) popup_fixed_preview_cale_window_ParamLimits

0x4002,	// (0x0007555c) popup_fixed_preview_cale_window

0xed77,	// (0x000802d1) navi_slider_pane_g3

0xed65,	// (0x000802bf) navi_slider_pane_g4

0xed6e,	// (0x000802c8) navi_slider_pane_g5

0xed77,	// (0x000802d1) navi_slider_pane_g6

0x61e1,	// (0x0007773b) navi_slider_pane_g7

0xee85,	// (0x000803df) mup_scale_pane_g3

0xee8e,	// (0x000803e8) mup_scale_pane_g4

0xee97,	// (0x000803f1) mup_scale_pane_g5

0x63fe,	// (0x00077958) mup_scale_pane_g6

0x6407,	// (0x00077961) mup_scale_pane_g7

0xe23d,	// (0x0007f797) cams2_slider_pane_g3

0xe23d,	// (0x0007f797) cams2_slider_pane_g4

0xe23d,	// (0x0007f797) cams2_slider_pane_g5

0xe23d,	// (0x0007f797) cams2_slider_pane_g6

0xe23d,	// (0x0007f797) cams2_slider_pane_g7

0xe23d,	// (0x0007f797) camera2_autofocus_pane_cp_g1

0x1088,	// (0x000725e2) bg_popup_preview_window_pane_cp02_ParamLimits

0x1088,	// (0x000725e2) bg_popup_preview_window_pane_cp02

0x177f,	// (0x00072cd9) list_fp_cale_pane_ParamLimits

0x177f,	// (0x00072cd9) list_fp_cale_pane

0x178b,	// (0x00072ce5) popup_fixed_preview_cale_window_t1_ParamLimits

0x178b,	// (0x00072ce5) popup_fixed_preview_cale_window_t1

0x786c,	// (0x00078dc6) popup_fixed_preview_cale_window_t2_ParamLimits

0x786c,	// (0x00078dc6) popup_fixed_preview_cale_window_t2

0x7881,	// (0x00078ddb) popup_fixed_preview_cale_window_t3_ParamLimits

0x7881,	// (0x00078ddb) popup_fixed_preview_cale_window_t3

0x0002,

0xf6e2,	// (0x00080c3c) popup_fixed_preview_cale_window_t_ParamLimits

0xf6e2,	// (0x00080c3c) popup_fixed_preview_cale_window_t

0x7896,	// (0x00078df0) list_single_fp_cale_pane_ParamLimits

0x7896,	// (0x00078df0) list_single_fp_cale_pane

0x17a9,	// (0x00072d03) list_single_fp_cale_pane_g1_ParamLimits

0x17a9,	// (0x00072d03) list_single_fp_cale_pane_g1

0x17b5,	// (0x00072d0f) list_single_fp_cale_pane_g2_ParamLimits

0x17b5,	// (0x00072d0f) list_single_fp_cale_pane_g2

0x0002,

0xf6e9,	// (0x00080c43) list_single_fp_cale_pane_g_ParamLimits

0xf6e9,	// (0x00080c43) list_single_fp_cale_pane_g

0x17ce,	// (0x00072d28) list_single_fp_cale_pane_t1_ParamLimits

0x17ce,	// (0x00072d28) list_single_fp_cale_pane_t1

0x17e0,	// (0x00072d3a) list_single_fp_cale_pane_t2_ParamLimits

0x17e0,	// (0x00072d3a) list_single_fp_cale_pane_t2

0x0001,

0xf6f0,	// (0x00080c4a) list_single_fp_cale_pane_t_ParamLimits

0xf6f0,	// (0x00080c4a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xce55,	// (0x0007e3af) main_dialer_pane

0xce55,	// (0x0007e3af) aid_cell_size_keypad

0xce55,	// (0x0007e3af) dialer_ne_pane

0xce55,	// (0x0007e3af) grid_dialer_command_1_pane

0xce55,	// (0x0007e3af) grid_dialer_command_2_pane

0xce55,	// (0x0007e3af) grid_dialer_keypad_pane

0x12a2,	// (0x000727fc) bg_popup_call_pane_cp06_ParamLimits

0x12a2,	// (0x000727fc) bg_popup_call_pane_cp06

0x12a2,	// (0x000727fc) dialer_ne_clear_pane_ParamLimits

0x12a2,	// (0x000727fc) dialer_ne_clear_pane

0xe23d,	// (0x0007f797) dialer_ne_pane_g1

0xe25b,	// (0x0007f7b5) dialer_ne_pane_t1_ParamLimits

0xe25b,	// (0x0007f7b5) dialer_ne_pane_t1

0x1a34,	// (0x00072f8e) dialer_ne_pane_t2_ParamLimits

0x1a34,	// (0x00072f8e) dialer_ne_pane_t2

0x78a6,	// (0x00078e00) dialer_ne_pane_t3_ParamLimits

0x78a6,	// (0x00078e00) dialer_ne_pane_t3

0x0002,

0xf6f5,	// (0x00080c4f) dialer_ne_pane_t_ParamLimits

0xf6f5,	// (0x00080c4f) dialer_ne_pane_t

0x78a6,	// (0x00078e00) dialer_ne_pane_t3_copy1_ParamLimits

0x78a6,	// (0x00078e00) dialer_ne_pane_t3_copy1

0x1813,	// (0x00072d6d) cell_dialer_keypad_pane_ParamLimits

0x1813,	// (0x00072d6d) cell_dialer_keypad_pane

0xd532,	// (0x0007ea8c) cell_dialer_command_1_pane_ParamLimits

0xd532,	// (0x0007ea8c) cell_dialer_command_1_pane

0x182a,	// (0x00072d84) cell_dialer_command_2_pane_ParamLimits

0x182a,	// (0x00072d84) cell_dialer_command_2_pane

0xd532,	// (0x0007ea8c) bg_button_pane_cp02_ParamLimits

0xd532,	// (0x0007ea8c) bg_button_pane_cp02

0xd58b,	// (0x0007eae5) cell_dialer_keypad_pane_g1_ParamLimits

0xd58b,	// (0x0007eae5) cell_dialer_keypad_pane_g1

0xd532,	// (0x0007ea8c) bg_button_pane_cp03_ParamLimits

0xd532,	// (0x0007ea8c) bg_button_pane_cp03

0xd58b,	// (0x0007eae5) cell_dialer_command_1_pane_g1_ParamLimits

0xd58b,	// (0x0007eae5) cell_dialer_command_1_pane_g1

0xce55,	// (0x0007e3af) bg_button_pane_cp04

0xe23d,	// (0x0007f797) cell_dialer_command_2_pane_g1

0xce55,	// (0x0007e3af) bg_button_pane_cp06

0xe23d,	// (0x0007f797) dialer_ne_clear_pane_g1

0x611c,	// (0x00077676) navi_pane_g2

0x614a,	// (0x000776a4) navi_pane_g3

0x0002,

0xf334,	// (0x0008088e) navi_pane_g

0x6175,	// (0x000776cf) navi_pane_mv_g2

0x619c,	// (0x000776f6) navi_pane_mv_g5

0x61a4,	// (0x000776fe) navi_pane_mv_t1

0xe29b,	// (0x0007f7f5) main_clock2_pane

0xce5f,	// (0x0007e3b9) main_clock2_list_pane_ParamLimits

0xce5f,	// (0x0007e3b9) main_clock2_list_pane

0x791b,	// (0x00078e75) main_clock2_pane_t1_ParamLimits

0x791b,	// (0x00078e75) main_clock2_pane_t1

0x7949,	// (0x00078ea3) main_clock2_pane_t2_ParamLimits

0x7949,	// (0x00078ea3) main_clock2_pane_t2

0x0004,

0xf701,	// (0x00080c5b) main_clock2_pane_t_ParamLimits

0xf701,	// (0x00080c5b) main_clock2_pane_t

0x79ae,	// (0x00078f08) popup_clock_analogue_window_cp03_ParamLimits

0x79ae,	// (0x00078f08) popup_clock_analogue_window_cp03

0x79cc,	// (0x00078f26) popup_clock_digital_window_cp02_ParamLimits

0x79cc,	// (0x00078f26) popup_clock_digital_window_cp02

0x7a41,	// (0x00078f9b) main_clock2_list_single_pane_ParamLimits

0x7a41,	// (0x00078f9b) main_clock2_list_single_pane

0xe439,	// (0x0007f993) list_highlight_pane_cp05

0x186b,	// (0x00072dc5) main_clock2_list_single_pane_t1

0x4d2a,	// (0x00076284) popup_toolbar_window_cp04_ParamLimits

0xd599,	// (0x0007eaf3) camera2_autofocus_pane_g2_ParamLimits

0xd599,	// (0x0007eaf3) camera2_autofocus_pane_g2

0xd599,	// (0x0007eaf3) camera2_autofocus_pane_g3_ParamLimits

0xd599,	// (0x0007eaf3) camera2_autofocus_pane_g3

0xd599,	// (0x0007eaf3) camera2_autofocus_pane_g4_ParamLimits

0xd599,	// (0x0007eaf3) camera2_autofocus_pane_g4

0xd599,	// (0x0007eaf3) camera2_autofocus_pane_g5_ParamLimits

0xd599,	// (0x0007eaf3) camera2_autofocus_pane_g5

0x0004,

0xf645,	// (0x00080b9f) camera2_autofocus_pane_g_ParamLimits

0xf645,	// (0x00080b9f) camera2_autofocus_pane_g

0x721b,	// (0x00078775) camera2_autofocus_pane_cp_g2

0x7223,	// (0x0007877d) camera2_autofocus_pane_cp_g3

0x722b,	// (0x00078785) camera2_autofocus_pane_cp_g4

0x7233,	// (0x0007878d) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ab,	// (0x00080c05) camera2_autofocus_pane_cp_g

0xce55,	// (0x0007e3af) popup_dialer_spcha_window

0xce55,	// (0x0007e3af) bg_popup_sub_pane_cp07

0xce55,	// (0x0007e3af) list_spcha_pane

0x1879,	// (0x00072dd3) list_single_spcha_pane_ParamLimits

0x1879,	// (0x00072dd3) list_single_spcha_pane

0xce55,	// (0x0007e3af) list_highlight_pane_cp06

0xe993,	// (0x0007feed) list_single_spcha_pane_t1

0x0b5a,	// (0x000720b4) popup_call2_audio_out_window_g4_ParamLimits

0x0b5a,	// (0x000720b4) popup_call2_audio_out_window_g4

0xce55,	// (0x0007e3af) main_imed2_pane

0x6c74,	// (0x000781ce) popup_imed_adjust2_window

0x6c87,	// (0x000781e1) popup_imed_trans_window_ParamLimits

0x6c87,	// (0x000781e1) popup_imed_trans_window

0x12fb,	// (0x00072855) popup_blid_sat_info2_window_t1

0x1309,	// (0x00072863) popup_blid_sat_info2_window_t2

0x000a,

0xf5da,	// (0x00080b34) popup_blid_sat_info2_window_t

0x7af8,	// (0x00079052) aid_size_cell_colour_35

0x7b12,	// (0x0007906c) aid_size_cell_colour_112

0x7b29,	// (0x00079083) aid_size_cell_effect

0xd532,	// (0x0007ea8c) bg_tb_trans_pane_cp02

0xf012,	// (0x0008056c) heading_imed_pane

0x7b43,	// (0x0007909d) listscroll_imed_pane

0x188b,	// (0x00072de5) heading_imed_pane_g1

0x1893,	// (0x00072ded) heading_imed_pane_t1

0x18a1,	// (0x00072dfb) grid_imed_colour_35_pane_ParamLimits

0x18a1,	// (0x00072dfb) grid_imed_colour_35_pane

0x7b4f,	// (0x000790a9) grid_imed_effect_pane

0x18bd,	// (0x00072e17) list_imed_aspect_pane

0x7b5f,	// (0x000790b9) scroll_pane_cp027_ParamLimits

0x7b5f,	// (0x000790b9) scroll_pane_cp027

0x7b6b,	// (0x000790c5) cell_imed_effect_pane_ParamLimits

0x7b6b,	// (0x000790c5) cell_imed_effect_pane

0x18c5,	// (0x00072e1f) cell_imed_colour_pane_ParamLimits

0x18c5,	// (0x00072e1f) cell_imed_colour_pane

0x190f,	// (0x00072e69) cell_imed_colour_pane_g1_ParamLimits

0x190f,	// (0x00072e69) cell_imed_colour_pane_g1

0x1920,	// (0x00072e7a) hgihlgiht_grid_pane_cp016_ParamLimits

0x1920,	// (0x00072e7a) hgihlgiht_grid_pane_cp016

0x7b87,	// (0x000790e1) cell_imed_effect_pane_g1

0x7b8f,	// (0x000790e9) grid_highlight_pane_cp017

0x1931,	// (0x00072e8b) list_imed_single_pane_ParamLimits

0x1931,	// (0x00072e8b) list_imed_single_pane

0xce55,	// (0x0007e3af) list_highlight_pane_cp07

0x1945,	// (0x00072e9f) list_imed_aspect_pane_comp1_t1

0xee21,	// (0x0008037b) bg_tb_trans_pane_cp05

0x1967,	// (0x00072ec1) popup_imed_adjust2_window_g1

0x198e,	// (0x00072ee8) popup_imed_adjust2_window_t1

0x19a6,	// (0x00072f00) slider_imed_adjust_pane

0x19ba,	// (0x00072f14) slider_imed_adjust_pane_g1

0x19ca,	// (0x00072f24) slider_imed_adjust_pane_g2

0x19da,	// (0x00072f34) slider_imed_adjust_pane_g3

0x19eb,	// (0x00072f45) slider_imed_adjust_pane_g4

0x0003,

0xf71e,	// (0x00080c78) slider_imed_adjust_pane_g

0x7b98,	// (0x000790f2) aid_size_cell_clipart2

0x19fc,	// (0x00072f56) grid_imed_clipart_pane

0xeea8,	// (0x00080402) scroll_pane_cp031

0x7ba4,	// (0x000790fe) cell_imed_clipart_pane_ParamLimits

0x7ba4,	// (0x000790fe) cell_imed_clipart_pane

0x7bc2,	// (0x0007911c) cell_imed_clipart_pane_g1

0xce55,	// (0x0007e3af) grid_highlight_pane_cp014

0x78fd,	// (0x00078e57) main_clock2_pane_g1_ParamLimits

0x78fd,	// (0x00078e57) main_clock2_pane_g1

0x79e8,	// (0x00078f42) aid_call2_pane_cp10

0x79fa,	// (0x00078f54) aid_call_pane_cp10

0xec91,	// (0x000801eb) popup_clock_analogue_window_cp10_g1

0xec91,	// (0x000801eb) popup_clock_analogue_window_cp10_g2

0x7a0c,	// (0x00078f66) popup_clock_analogue_window_cp10_g3

0x7a0c,	// (0x00078f66) popup_clock_analogue_window_cp10_g4

0xec91,	// (0x000801eb) popup_clock_analogue_window_cp10_g5

0x0004,

0xf70c,	// (0x00080c66) popup_clock_analogue_window_cp10_g

0x7a22,	// (0x00078f7c) popup_clock_analogue_window_cp10_t1

0x7a53,	// (0x00078fad) clock_digital_number_pane_cp10_ParamLimits

0x7a53,	// (0x00078fad) clock_digital_number_pane_cp10

0x7a6d,	// (0x00078fc7) clock_digital_number_pane_cp11_ParamLimits

0x7a6d,	// (0x00078fc7) clock_digital_number_pane_cp11

0x7a87,	// (0x00078fe1) clock_digital_number_pane_cp12_ParamLimits

0x7a87,	// (0x00078fe1) clock_digital_number_pane_cp12

0x7aa1,	// (0x00078ffb) clock_digital_number_pane_cp13_ParamLimits

0x7aa1,	// (0x00078ffb) clock_digital_number_pane_cp13

0x7abd,	// (0x00079017) clock_digital_separator_pane_cp10_ParamLimits

0x7abd,	// (0x00079017) clock_digital_separator_pane_cp10

0x7ad7,	// (0x00079031) popup_clock_digital_window_cp02_t1_ParamLimits

0x7ad7,	// (0x00079031) popup_clock_digital_window_cp02_t1

0xd508,	// (0x0007ea62) clock_digital_number_pane_cp10_g1

0xd508,	// (0x0007ea62) clock_digital_number_pane_cp10_g2

0x0001,

0xf727,	// (0x00080c81) clock_digital_number_pane_cp10_g

0xd508,	// (0x0007ea62) clock_digital_separator_pane_cp10_g1

0xd508,	// (0x0007ea62) clock_digital_separator_pane_g2_cp10

0xed2c,	// (0x00080286) navi_pane_vded_g4

0xed35,	// (0x0008028f) navi_pane_vded_g5

0xed3e,	// (0x00080298) navi_pane_vded_t1

0xce55,	// (0x0007e3af) main_vded_pane

0x7bcb,	// (0x00079125) main_vded_pane_g1

0x7bd7,	// (0x00079131) main_vded_pane_g2

0x7be1,	// (0x0007913b) main_vded_pane_g3

0x0002,

0xf72c,	// (0x00080c86) main_vded_pane_g

0x7beb,	// (0x00079145) main_vded_pane_t1

0x7bf9,	// (0x00079153) main_vded_pane_t2

0x0001,

0xf733,	// (0x00080c8d) main_vded_pane_t

0x7c07,	// (0x00079161) vded_slider_pane

0x7c11,	// (0x0007916b) vded_video_pane

0x1a06,	// (0x00072f60) vded_video_pane_g1

0x7c1d,	// (0x00079177) vded_video_pane_g2

0xe23d,	// (0x0007f797) vded_video_pane_g3

0x0002,

0xf738,	// (0x00080c92) vded_video_pane_g

0x1a10,	// (0x00072f6a) vded_slider_pane_g1

0x1218,	// (0x00072772) vded_slider_pane_g2

0x1a19,	// (0x00072f73) vded_slider_pane_g3

0x1a22,	// (0x00072f7c) vded_slider_pane_g4

0x1a2b,	// (0x00072f85) vded_slider_pane_g5

0x0004,

0xf73f,	// (0x00080c99) vded_slider_pane_g

0x77f6,	// (0x00078d50) mup3_rocker_pane_ParamLimits

0x77f6,	// (0x00078d50) mup3_rocker_pane

0x7c26,	// (0x00079180) mup3_control_keys_pane_g1

0x7c2e,	// (0x00079188) mup3_control_keys_pane_g2

0x7c36,	// (0x00079190) mup3_control_keys_pane_g3

0x7c3e,	// (0x00079198) mup3_control_keys_pane_g4

0x0003,

0xf74a,	// (0x00080ca4) mup3_control_keys_pane_g

0x402a,	// (0x00075584) popup_toolbar2_fixed_window_cp01_ParamLimits

0x402a,	// (0x00075584) popup_toolbar2_fixed_window_cp01

0x7812,	// (0x00078d6c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7812,	// (0x00078d6c) popup_toolbar2_fixed_window_cp02

0x04f1,	// (0x00071a4b) popup_call2_audio_second_window_t4_ParamLimits

0x04f1,	// (0x00071a4b) popup_call2_audio_second_window_t4

0x0a1f,	// (0x00071f79) popup_call2_audio_first_window_t6_ParamLimits

0x0a1f,	// (0x00071f79) popup_call2_audio_first_window_t6

0x0c5d,	// (0x000721b7) popup_call2_audio_out_window_t6_ParamLimits

0x0c5d,	// (0x000721b7) popup_call2_audio_out_window_t6

0xce55,	// (0x0007e3af) main_vitu_pane

0xce5f,	// (0x0007e3b9) aid_size_cell_itu_ParamLimits

0xce5f,	// (0x0007e3b9) aid_size_cell_itu

0xce5f,	// (0x0007e3b9) bg_popup_window_pane_cp08_ParamLimits

0xce5f,	// (0x0007e3b9) bg_popup_window_pane_cp08

0xce5f,	// (0x0007e3b9) field_vitu_entry_pane_ParamLimits

0xce5f,	// (0x0007e3b9) field_vitu_entry_pane

0xce5f,	// (0x0007e3b9) grid_vitu_function_pane_ParamLimits

0xce5f,	// (0x0007e3b9) grid_vitu_function_pane

0xce5f,	// (0x0007e3b9) grid_vitu_itu_pane_ParamLimits

0xce5f,	// (0x0007e3b9) grid_vitu_itu_pane

0xce5f,	// (0x0007e3b9) cell_vitu_itu_pane_ParamLimits

0xce5f,	// (0x0007e3b9) cell_vitu_itu_pane

0xce5f,	// (0x0007e3b9) cell_vitu_function_pane_ParamLimits

0xce5f,	// (0x0007e3b9) cell_vitu_function_pane

0xd532,	// (0x0007ea8c) bg_popup_sub_pane_cp08_ParamLimits

0xd532,	// (0x0007ea8c) bg_popup_sub_pane_cp08

0xe247,	// (0x0007f7a1) field_vitu_entry_pane_t1_ParamLimits

0xe247,	// (0x0007f7a1) field_vitu_entry_pane_t1

0x1a34,	// (0x00072f8e) field_vitu_entry_pane_t2_ParamLimits

0x1a34,	// (0x00072f8e) field_vitu_entry_pane_t2

0x0001,

0xf753,	// (0x00080cad) field_vitu_entry_pane_t_ParamLimits

0xf753,	// (0x00080cad) field_vitu_entry_pane_t

0x12a2,	// (0x000727fc) bg_button_pane_cp05_ParamLimits

0x12a2,	// (0x000727fc) bg_button_pane_cp05

0x1a51,	// (0x00072fab) cell_vitu_itu_pane_g1

0xf02c,	// (0x00080586) cell_vitu_itu_pane_t1_ParamLimits

0xf02c,	// (0x00080586) cell_vitu_itu_pane_t1

0xf02c,	// (0x00080586) cell_vitu_itu_pane_t2_ParamLimits

0xf02c,	// (0x00080586) cell_vitu_itu_pane_t2

0x0002,

0xf758,	// (0x00080cb2) cell_vitu_itu_pane_t_ParamLimits

0xf758,	// (0x00080cb2) cell_vitu_itu_pane_t

0xce55,	// (0x0007e3af) bg_button_pane_cp07

0xe23d,	// (0x0007f797) cell_vitu_function_pane_g1

0x415b,	// (0x000756b5) main_calc_pane_g1

0x3deb,	// (0x00075345) aid_visual_content_pane

0xce55,	// (0x0007e3af) main_vradio_pane

0xd599,	// (0x0007eaf3) main_vradio_pane_g1_ParamLimits

0xd599,	// (0x0007eaf3) main_vradio_pane_g1

0xd599,	// (0x0007eaf3) main_vradio_pane_g2_ParamLimits

0xd599,	// (0x0007eaf3) main_vradio_pane_g2

0x0001,

0xf4ef,	// (0x00080a49) main_vradio_pane_g_ParamLimits

0xf4ef,	// (0x00080a49) main_vradio_pane_g

0xe25b,	// (0x0007f7b5) main_vradio_pane_t1_ParamLimits

0xe25b,	// (0x0007f7b5) main_vradio_pane_t1

0xe25b,	// (0x0007f7b5) main_vradio_pane_t2_ParamLimits

0xe25b,	// (0x0007f7b5) main_vradio_pane_t2

0xe25b,	// (0x0007f7b5) main_vradio_pane_t3_ParamLimits

0xe25b,	// (0x0007f7b5) main_vradio_pane_t3

0x0002,

0xf75f,	// (0x00080cb9) main_vradio_pane_t_ParamLimits

0xf75f,	// (0x00080cb9) main_vradio_pane_t

0xce5f,	// (0x0007e3b9) vradio_rocker_control_pane_ParamLimits

0xce5f,	// (0x0007e3b9) vradio_rocker_control_pane

0xce5f,	// (0x0007e3b9) vradio_station_info_pane_ParamLimits

0xce5f,	// (0x0007e3b9) vradio_station_info_pane

0xd532,	// (0x0007ea8c) vradio_frequency_info_pane_ParamLimits

0xd532,	// (0x0007ea8c) vradio_frequency_info_pane

0xe23d,	// (0x0007f797) vradio_station_info_pane_g1

0xf02c,	// (0x00080586) vradio_station_info_pane_t1_ParamLimits

0xf02c,	// (0x00080586) vradio_station_info_pane_t1

0xe25b,	// (0x0007f7b5) vradio_station_info_pane_t2_ParamLimits

0xe25b,	// (0x0007f7b5) vradio_station_info_pane_t2

0x0001,

0xf766,	// (0x00080cc0) vradio_station_info_pane_t_ParamLimits

0xf766,	// (0x00080cc0) vradio_station_info_pane_t

0xce55,	// (0x0007e3af) vradio_tuning_pane

0x7c4e,	// (0x000791a8) vradio_rocker_control_pane_g1

0x1a6d,	// (0x00072fc7) vradio_rocker_control_pane_g2

0x7c56,	// (0x000791b0) vradio_rocker_control_pane_g3

0x7c5e,	// (0x000791b8) vradio_rocker_control_pane_g4

0x7c68,	// (0x000791c2) vradio_rocker_control_pane_g5

0x0004,

0xf76b,	// (0x00080cc5) vradio_rocker_control_pane_g

0xe23d,	// (0x0007f797) vradio_frequency_info_pane_g1

0xe247,	// (0x0007f7a1) vradio_frequency_info_pane_t1_ParamLimits

0xe247,	// (0x0007f7a1) vradio_frequency_info_pane_t1

0x7c70,	// (0x000791ca) vradio_tuning_pane_g1

0x7c7d,	// (0x000791d7) vradio_tuning_pane_t1

0x3e2c,	// (0x00075386) area_side_right_pane_ParamLimits

0x3e2c,	// (0x00075386) area_side_right_pane

0x104f,	// (0x000725a9) status_small_pane_g1

0x1057,	// (0x000725b1) status_small_pane_g2

0x1060,	// (0x000725ba) status_small_pane_g3

0x1069,	// (0x000725c3) status_small_pane_g4

0x0003,

0xf53c,	// (0x00080a96) status_small_pane_g

0x1072,	// (0x000725cc) status_small_pane_t1

0xce55,	// (0x0007e3af) main_video3_pane

0xce55,	// (0x0007e3af) cams_zoom_vslider_pane

0x1a75,	// (0x00072fcf) image3_wide_pane_ParamLimits

0x1a75,	// (0x00072fcf) image3_wide_pane

0xce55,	// (0x0007e3af) image3_wide_small_pane

0x1a8f,	// (0x00072fe9) main_video3_pane_g1_ParamLimits

0x1a8f,	// (0x00072fe9) main_video3_pane_g1

0x1a8f,	// (0x00072fe9) main_video3_pane_g2_ParamLimits

0x1a8f,	// (0x00072fe9) main_video3_pane_g2

0x0001,

0xf776,	// (0x00080cd0) main_video3_pane_g_ParamLimits

0xf776,	// (0x00080cd0) main_video3_pane_g

0x1aad,	// (0x00073007) main_video3_pane_t1_ParamLimits

0x1aad,	// (0x00073007) main_video3_pane_t1

0x1aad,	// (0x00073007) main_video3_pane_t2_ParamLimits

0x1aad,	// (0x00073007) main_video3_pane_t2

0x1aad,	// (0x00073007) main_video3_pane_t3_ParamLimits

0x1aad,	// (0x00073007) main_video3_pane_t3

0x0002,

0xf77b,	// (0x00080cd5) main_video3_pane_t_ParamLimits

0xf77b,	// (0x00080cd5) main_video3_pane_t

0xe23d,	// (0x0007f797) cams_zoom_vslider_pane_g1

0xe23d,	// (0x0007f797) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x00080609) cams_zoom_vslider_pane_g

0xce55,	// (0x0007e3af) small_slider_vertical_pane

0xe23d,	// (0x0007f797) small_slider_vertical_pane_g1

0xe23d,	// (0x0007f797) small_slider_vertical_pane_g2

0x1ad4,	// (0x0007302e) small_slider_vertical_pane_g3

0x0002,

0xf782,	// (0x00080cdc) small_slider_vertical_pane_g

0xce55,	// (0x0007e3af) main_hwr_training_pane

0x1add,	// (0x00073037) hwr_training_instruct_pane_ParamLimits

0x1add,	// (0x00073037) hwr_training_instruct_pane

0x7c8c,	// (0x000791e6) hwr_training_navi_pane_ParamLimits

0x7c8c,	// (0x000791e6) hwr_training_navi_pane

0x7ca6,	// (0x00079200) hwr_training_write_pane_ParamLimits

0x7ca6,	// (0x00079200) hwr_training_write_pane

0xce55,	// (0x0007e3af) bg_frame_shadow_pane

0x1b14,	// (0x0007306e) hwr_training_write_pane_g1

0x1b1c,	// (0x00073076) hwr_training_write_pane_g2

0x1b24,	// (0x0007307e) hwr_training_write_pane_g3

0x1b2c,	// (0x00073086) hwr_training_write_pane_g4

0x1b34,	// (0x0007308e) hwr_training_write_pane_g5

0x1b3c,	// (0x00073096) hwr_training_write_pane_g6

0x1b44,	// (0x0007309e) hwr_training_write_pane_g7

0x0006,

0xf789,	// (0x00080ce3) hwr_training_write_pane_g

0x7cde,	// (0x00079238) hwr_training_navi_pane_g1_ParamLimits

0x7cde,	// (0x00079238) hwr_training_navi_pane_g1

0x7cf0,	// (0x0007924a) hwr_training_navi_pane_g2_ParamLimits

0x7cf0,	// (0x0007924a) hwr_training_navi_pane_g2

0x7d02,	// (0x0007925c) hwr_training_navi_pane_g3_ParamLimits

0x7d02,	// (0x0007925c) hwr_training_navi_pane_g3

0x7d12,	// (0x0007926c) hwr_training_navi_pane_g4_ParamLimits

0x7d12,	// (0x0007926c) hwr_training_navi_pane_g4

0x0004,

0xf798,	// (0x00080cf2) hwr_training_navi_pane_g_ParamLimits

0xf798,	// (0x00080cf2) hwr_training_navi_pane_g

0x7d2c,	// (0x00079286) hwr_training_navi_pane_t1

0x7d3a,	// (0x00079294) list_single_hwr_training_instruct_pane_ParamLimits

0x7d3a,	// (0x00079294) list_single_hwr_training_instruct_pane

0x1b4c,	// (0x000730a6) list_single_hwr_training_instruct_pane_t1

0x1402,	// (0x0007295c) bg_frame_shadow_pane_g1

0x1b5b,	// (0x000730b5) bg_frame_shadow_pane_g2

0x1b63,	// (0x000730bd) bg_frame_shadow_pane_g3

0x1b8d,	// (0x000730e7) bg_frame_shadow_pane_g4

0x1b95,	// (0x000730ef) bg_frame_shadow_pane_g5

0x1b9d,	// (0x000730f7) bg_frame_shadow_pane_g6

0x1ba5,	// (0x000730ff) bg_frame_shadow_pane_g7

0xe34a,	// (0x0007f8a4) bg_frame_shadow_pane_g8

0x0007,

0xf7a3,	// (0x00080cfd) bg_frame_shadow_pane_g

0xce55,	// (0x0007e3af) main_video_tele_dialer_pane

0x7d53,	// (0x000792ad) aid_size_cell_video_keypad_ParamLimits

0x7d53,	// (0x000792ad) aid_size_cell_video_keypad

0x7d63,	// (0x000792bd) grid_video_dialer_keypad_pane_ParamLimits

0x7d63,	// (0x000792bd) grid_video_dialer_keypad_pane

0x7d95,	// (0x000792ef) video_down_pane_cp_ParamLimits

0x7d95,	// (0x000792ef) video_down_pane_cp

0x7dbf,	// (0x00079319) cell_video_dialer_keypad_pane_ParamLimits

0x7dbf,	// (0x00079319) cell_video_dialer_keypad_pane

0x1bad,	// (0x00073107) bg_button_pane_cp08_ParamLimits

0x1bad,	// (0x00073107) bg_button_pane_cp08

0x7dd6,	// (0x00079330) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7dd6,	// (0x00079330) cell_video_dialer_keypad_pane_g1

0x77ea,	// (0x00078d44) mup3_rocker2_pane_ParamLimits

0x77ea,	// (0x00078d44) mup3_rocker2_pane

0xe23d,	// (0x0007f797) mup3_rocker2_pane_g1

0x6bd8,	// (0x00078132) main_dialer2_pane

0xce55,	// (0x0007e3af) main_mp4_pane

0x7e2f,	// (0x00079389) main_mp4_pane_g1_ParamLimits

0x7e2f,	// (0x00079389) main_mp4_pane_g1

0x7e51,	// (0x000793ab) main_mp4_pane_g2_ParamLimits

0x7e51,	// (0x000793ab) main_mp4_pane_g2

0x7e6f,	// (0x000793c9) main_mp4_pane_g3_ParamLimits

0x7e6f,	// (0x000793c9) main_mp4_pane_g3

0x7eaa,	// (0x00079404) main_mp4_pane_g4_ParamLimits

0x7eaa,	// (0x00079404) main_mp4_pane_g4

0x7ed2,	// (0x0007942c) main_mp4_pane_g5_ParamLimits

0x7ed2,	// (0x0007942c) main_mp4_pane_g5

0x0007,

0xf7c3,	// (0x00080d1d) main_mp4_pane_g_ParamLimits

0xf7c3,	// (0x00080d1d) main_mp4_pane_g

0x7f3a,	// (0x00079494) main_mp4_pane_t1_ParamLimits

0x7f3a,	// (0x00079494) main_mp4_pane_t1

0x7f9c,	// (0x000794f6) main_mp4_pane_t2_ParamLimits

0x7f9c,	// (0x000794f6) main_mp4_pane_t2

0x8000,	// (0x0007955a) main_mp4_pane_t3_ParamLimits

0x8000,	// (0x0007955a) main_mp4_pane_t3

0x805e,	// (0x000795b8) main_mp4_pane_t4_ParamLimits

0x805e,	// (0x000795b8) main_mp4_pane_t4

0x0003,

0xf7d4,	// (0x00080d2e) main_mp4_pane_t_ParamLimits

0xf7d4,	// (0x00080d2e) main_mp4_pane_t

0x80bc,	// (0x00079616) mp4_progress_pane_ParamLimits

0x80bc,	// (0x00079616) mp4_progress_pane

0x80f0,	// (0x0007964a) mp4_rocker_pane_ParamLimits

0x80f0,	// (0x0007964a) mp4_rocker_pane

0x1bc1,	// (0x0007311b) mp4_progress_pane_t1

0x1be3,	// (0x0007313d) mp4_progress_pane_t2

0x0001,

0xf7dd,	// (0x00080d37) mp4_progress_pane_t

0x1c05,	// (0x0007315f) mup_progress_pane_cp04

0xe23d,	// (0x0007f797) mp4_rocker_pane_g1

0xce5f,	// (0x0007e3b9) aid_cell_size_keypad2_ParamLimits

0xce5f,	// (0x0007e3b9) aid_cell_size_keypad2

0xce5f,	// (0x0007e3b9) dialer2_ne_pane_ParamLimits

0xce5f,	// (0x0007e3b9) dialer2_ne_pane

0xce5f,	// (0x0007e3b9) grid_dialer2_keypad_pane_ParamLimits

0xce5f,	// (0x0007e3b9) grid_dialer2_keypad_pane

0x1b6b,	// (0x000730c5) bg_popup_call_pane_cp07_ParamLimits

0x1b6b,	// (0x000730c5) bg_popup_call_pane_cp07

0x8106,	// (0x00079660) dialer2_ne_pane_t1_ParamLimits

0x8106,	// (0x00079660) dialer2_ne_pane_t1

0x1813,	// (0x00072d6d) cell_dialer2_keypad_pane_ParamLimits

0x1813,	// (0x00072d6d) cell_dialer2_keypad_pane

0x12a2,	// (0x000727fc) bg_button_pane_pane_cp04_ParamLimits

0x12a2,	// (0x000727fc) bg_button_pane_pane_cp04

0xd58b,	// (0x0007eae5) cell_dialer2_keypad_pane_g1_ParamLimits

0xd58b,	// (0x0007eae5) cell_dialer2_keypad_pane_g1

0x4bfc,	// (0x00076156) aid_placing_vt_set_content_ParamLimits

0x4bfc,	// (0x00076156) aid_placing_vt_set_content

0x4c24,	// (0x0007617e) aid_placing_vt_set_title_ParamLimits

0x4c24,	// (0x0007617e) aid_placing_vt_set_title

0xce55,	// (0x0007e3af) main_image3_pane

0x815d,	// (0x000796b7) area_side_right_pane_cp01_ParamLimits

0x815d,	// (0x000796b7) area_side_right_pane_cp01

0xd5a7,	// (0x0007eb01) main_image3_pane_g1_ParamLimits

0xd5a7,	// (0x0007eb01) main_image3_pane_g1

0x818c,	// (0x000796e6) main_image3_pane_g2_ParamLimits

0x818c,	// (0x000796e6) main_image3_pane_g2

0x81a5,	// (0x000796ff) main_image3_pane_g3_ParamLimits

0x81a5,	// (0x000796ff) main_image3_pane_g3

0x81be,	// (0x00079718) main_image3_pane_g4_ParamLimits

0x81be,	// (0x00079718) main_image3_pane_g4

0x0003,

0xf7ec,	// (0x00080d46) main_image3_pane_g_ParamLimits

0xf7ec,	// (0x00080d46) main_image3_pane_g

0x81d7,	// (0x00079731) main_image3_pane_t1_ParamLimits

0x81d7,	// (0x00079731) main_image3_pane_t1

0x81fc,	// (0x00079756) main_image3_pane_t2_ParamLimits

0x81fc,	// (0x00079756) main_image3_pane_t2

0x821b,	// (0x00079775) main_image3_pane_t3_ParamLimits

0x821b,	// (0x00079775) main_image3_pane_t3

0x0003,

0xf7f5,	// (0x00080d4f) main_image3_pane_t_ParamLimits

0xf7f5,	// (0x00080d4f) main_image3_pane_t

0xce5f,	// (0x0007e3b9) grid_sctrl_middle_pane_cp01_ParamLimits

0xce5f,	// (0x0007e3b9) grid_sctrl_middle_pane_cp01

0x827c,	// (0x000797d6) cell_sctrl_middle_pane_cp01_ParamLimits

0x827c,	// (0x000797d6) cell_sctrl_middle_pane_cp01

0x828d,	// (0x000797e7) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x828d,	// (0x000797e7) cell_sctrl_middle_pane_cp01_g1

0xce55,	// (0x0007e3af) main_call4_pane

0x829a,	// (0x000797f4) aid_size_button_call4_ParamLimits

0x829a,	// (0x000797f4) aid_size_button_call4

0x82d0,	// (0x0007982a) call4_windows_pane_ParamLimits

0x82d0,	// (0x0007982a) call4_windows_pane

0x82e5,	// (0x0007983f) grid_call4_button_pane_ParamLimits

0x82e5,	// (0x0007983f) grid_call4_button_pane

0x8315,	// (0x0007986f) call4_windows_conf_pane

0x832e,	// (0x00079888) popup_call4_audio_first_window_ParamLimits

0x832e,	// (0x00079888) popup_call4_audio_first_window

0x837e,	// (0x000798d8) popup_call4_audio_second_window_ParamLimits

0x837e,	// (0x000798d8) popup_call4_audio_second_window

0x8397,	// (0x000798f1) popup_call4_audio_wait_window_ParamLimits

0x8397,	// (0x000798f1) popup_call4_audio_wait_window

0x83a5,	// (0x000798ff) cell_call4_button_pane_ParamLimits

0x83a5,	// (0x000798ff) cell_call4_button_pane

0x83c8,	// (0x00079922) bg_button_pane_cp09_ParamLimits

0x83c8,	// (0x00079922) bg_button_pane_cp09

0x83d4,	// (0x0007992e) cell_call4_button_pane_g1_ParamLimits

0x83d4,	// (0x0007992e) cell_call4_button_pane_g1

0x83e1,	// (0x0007993b) cell_call4_button_pane_t1_ParamLimits

0x83e1,	// (0x0007993b) cell_call4_button_pane_t1

0x1c4e,	// (0x000731a8) popup_call4_audio_conf_window_ParamLimits

0x1c4e,	// (0x000731a8) popup_call4_audio_conf_window

0x781f,	// (0x00078d79) mup3_progress_pane_t1_ParamLimits

0x783d,	// (0x00078d97) mup3_progress_pane_t2_ParamLimits

0x173c,	// (0x00072c96) mup3_progress_pane_t3_ParamLimits

0xf6d4,	// (0x00080c2e) mup3_progress_pane_t_ParamLimits

0x1759,	// (0x00072cb3) mup_progress_pane_cp03_ParamLimits

0x7c46,	// (0x000791a0) mup3_control_keys_pane_g4_copy1

0x80f0,	// (0x0007964a) mp4_rocker2_pane_ParamLimits

0x80f0,	// (0x0007964a) mp4_rocker2_pane

0x8425,	// (0x0007997f) mp4_rocker2_pane_g1

0x8425,	// (0x0007997f) mp4_rocker2_pane_g2

0x8425,	// (0x0007997f) mp4_rocker2_pane_g3

0x8425,	// (0x0007997f) mp4_rocker2_pane_g4

0x8425,	// (0x0007997f) mp4_rocker2_pane_g5

0x0004,

0xf7fe,	// (0x00080d58) mp4_rocker2_pane_g

0xce55,	// (0x0007e3af) main_camera4_pane

0xce55,	// (0x0007e3af) main_video4_pane

0x7d71,	// (0x000792cb) main_video_tele_dialer_pane_t1_ParamLimits

0x7d71,	// (0x000792cb) main_video_tele_dialer_pane_t1

0x7d83,	// (0x000792dd) main_video_tele_dialer_pane_t2_ParamLimits

0x7d83,	// (0x000792dd) main_video_tele_dialer_pane_t2

0x0001,

0xf7b4,	// (0x00080d0e) main_video_tele_dialer_pane_t_ParamLimits

0xf7b4,	// (0x00080d0e) main_video_tele_dialer_pane_t

0x8445,	// (0x0007999f) cam4_autofocus_pane_ParamLimits

0x8445,	// (0x0007999f) cam4_autofocus_pane

0x845d,	// (0x000799b7) cam4_image_uncrop_pane_ParamLimits

0x845d,	// (0x000799b7) cam4_image_uncrop_pane

0x8476,	// (0x000799d0) cam4_indicators_pane_ParamLimits

0x8476,	// (0x000799d0) cam4_indicators_pane

0x8492,	// (0x000799ec) main_camera4_pane_g1_ParamLimits

0x8492,	// (0x000799ec) main_camera4_pane_g1

0x849e,	// (0x000799f8) main_camera4_pane_g2_ParamLimits

0x849e,	// (0x000799f8) main_camera4_pane_g2

0x849e,	// (0x000799f8) main_camera4_pane_g3_ParamLimits

0x849e,	// (0x000799f8) main_camera4_pane_g3

0x84aa,	// (0x00079a04) main_camera4_pane_g4_ParamLimits

0x84aa,	// (0x00079a04) main_camera4_pane_g4

0x84b6,	// (0x00079a10) main_camera4_pane_g5_ParamLimits

0x84b6,	// (0x00079a10) main_camera4_pane_g5

0x0005,

0xf809,	// (0x00080d63) main_camera4_pane_g_ParamLimits

0xf809,	// (0x00080d63) main_camera4_pane_g

0x84d0,	// (0x00079a2a) main_camera4_pane_t1_ParamLimits

0x84d0,	// (0x00079a2a) main_camera4_pane_t1

0xd58b,	// (0x0007eae5) bg_tb_trans_pane_cp06

0x8522,	// (0x00079a7c) cam4_indicators_pane_g1

0x8533,	// (0x00079a8d) cam4_indicators_pane_g2

0x0002,

0xf824,	// (0x00080d7e) cam4_indicators_pane_g

0x854b,	// (0x00079aa5) cam4_indicators_pane_t1

0x8575,	// (0x00079acf) main_video4_pane_g1_ParamLimits

0x8575,	// (0x00079acf) main_video4_pane_g1

0x8581,	// (0x00079adb) main_video4_pane_g2_ParamLimits

0x8581,	// (0x00079adb) main_video4_pane_g2

0x858d,	// (0x00079ae7) main_video4_pane_g3_ParamLimits

0x858d,	// (0x00079ae7) main_video4_pane_g3

0x8599,	// (0x00079af3) main_video4_pane_g4_ParamLimits

0x8599,	// (0x00079af3) main_video4_pane_g4

0x0004,

0xf82b,	// (0x00080d85) main_video4_pane_g_ParamLimits

0xf82b,	// (0x00080d85) main_video4_pane_g

0x85bb,	// (0x00079b15) vid4_indicators_pane_ParamLimits

0x85bb,	// (0x00079b15) vid4_indicators_pane

0x85da,	// (0x00079b34) video4_image_uncrop_cif_pane_ParamLimits

0x85da,	// (0x00079b34) video4_image_uncrop_cif_pane

0x85e9,	// (0x00079b43) video4_image_uncrop_nhd_pane_ParamLimits

0x85e9,	// (0x00079b43) video4_image_uncrop_nhd_pane

0x845d,	// (0x000799b7) video4_image_uncrop_vga_pane_ParamLimits

0x845d,	// (0x000799b7) video4_image_uncrop_vga_pane

0xd532,	// (0x0007ea8c) bg_tb_trans_pane_cp07

0x8602,	// (0x00079b5c) vid4_indicators_pane_g1

0x8618,	// (0x00079b72) vid4_indicators_pane_g2

0x862c,	// (0x00079b86) vid4_indicators_pane_g3

0x0004,

0xf836,	// (0x00080d90) vid4_indicators_pane_g

0x865d,	// (0x00079bb7) vid4_indicators_pane_t1

0x8674,	// (0x00079bce) cam4_autofocus_pane_g1

0x867c,	// (0x00079bd6) cam4_autofocus_pane_g2

0x8684,	// (0x00079bde) cam4_autofocus_pane_g3

0x0002,

0xf841,	// (0x00080d9b) cam4_autofocus_pane_g

0x868c,	// (0x00079be6) cam4_autofocus_pane_g3_copy1

0x7da3,	// (0x000792fd) video_down_pane_cp_t1

0x7db1,	// (0x0007930b) video_down_pane_cp_t2

0x0001,

0xf7b9,	// (0x00080d13) video_down_pane_cp_t

0xce5f,	// (0x0007e3b9) popup_vitu2_window_ParamLimits

0xce5f,	// (0x0007e3b9) popup_vitu2_window

0x8694,	// (0x00079bee) aid_size_cell2_itu2_ParamLimits

0x8694,	// (0x00079bee) aid_size_cell2_itu2

0x86b6,	// (0x00079c10) aid_size_cell_itu2_ParamLimits

0x86b6,	// (0x00079c10) aid_size_cell_itu2

0x1b6b,	// (0x000730c5) bg_popup_window_pane_cp09_ParamLimits

0x1b6b,	// (0x000730c5) bg_popup_window_pane_cp09

0x86fa,	// (0x00079c54) field_vitu2_entry_pane_ParamLimits

0x86fa,	// (0x00079c54) field_vitu2_entry_pane

0x871a,	// (0x00079c74) grid_vitu2_function_pane_ParamLimits

0x871a,	// (0x00079c74) grid_vitu2_function_pane

0x875e,	// (0x00079cb8) grid_vitu2_itu_pane_ParamLimits

0x875e,	// (0x00079cb8) grid_vitu2_itu_pane

0x87d4,	// (0x00079d2e) cell_vitu2_itu_pane_ParamLimits

0x87d4,	// (0x00079d2e) cell_vitu2_itu_pane

0x87ef,	// (0x00079d49) cell_vitu2_function_pane_ParamLimits

0x87ef,	// (0x00079d49) cell_vitu2_function_pane

0x1c68,	// (0x000731c2) bg_popup_call_pane_cp08_ParamLimits

0x1c68,	// (0x000731c2) bg_popup_call_pane_cp08

0x1c7f,	// (0x000731d9) field_vitu2_entry_pane_g1

0x1c8b,	// (0x000731e5) field_vitu2_entry_pane_g2

0x0002,

0xf848,	// (0x00080da2) field_vitu2_entry_pane_g

0x3202,	// (0x0007475c) field_vitu2_entry_pane_t1_ParamLimits

0x3202,	// (0x0007475c) field_vitu2_entry_pane_t1

0x3231,	// (0x0007478b) field_vitu2_entry_pane_t2_ParamLimits

0x3231,	// (0x0007478b) field_vitu2_entry_pane_t2

0x0001,

0xf84f,	// (0x00080da9) field_vitu2_entry_pane_t_ParamLimits

0xf84f,	// (0x00080da9) field_vitu2_entry_pane_t

0x6f2a,	// (0x00078484) bg_button_pane_cp010_ParamLimits

0x6f2a,	// (0x00078484) bg_button_pane_cp010

0x8833,	// (0x00079d8d) cell_vitu2_itu_pane_g1

0x8859,	// (0x00079db3) cell_vitu2_itu_pane_t1_ParamLimits

0x8859,	// (0x00079db3) cell_vitu2_itu_pane_t1

0x324e,	// (0x000747a8) cell_vitu2_itu_pane_t2_ParamLimits

0x324e,	// (0x000747a8) cell_vitu2_itu_pane_t2

0x0002,

0xf859,	// (0x00080db3) cell_vitu2_itu_pane_t_ParamLimits

0xf859,	// (0x00080db3) cell_vitu2_itu_pane_t

0xd532,	// (0x0007ea8c) bg_button_pane_cp011

0x88a5,	// (0x00079dff) cell_vitu2_function_pane_g1

0xce55,	// (0x0007e3af) main_myfav_hc_pane

0x825d,	// (0x000797b7) popup_image3_note_pane_ParamLimits

0x825d,	// (0x000797b7) popup_image3_note_pane

0x826b,	// (0x000797c5) popup_image3_tool_bar_pane_ParamLimits

0x826b,	// (0x000797c5) popup_image3_tool_bar_pane

0x32c4,	// (0x0007481e) cell_vitu2_itu_pane_t3_ParamLimits

0x32c4,	// (0x0007481e) cell_vitu2_itu_pane_t3

0xce55,	// (0x0007e3af) bg_popup_trans_pane

0x1cbc,	// (0x00073216) grid_image3_tool_bar_pane

0x1cc6,	// (0x00073220) bg_popup_trans_pane_g1

0xe665,	// (0x0007fbbf) bg_popup_trans_pane_g2

0x1cce,	// (0x00073228) bg_popup_trans_pane_g3

0x1cd6,	// (0x00073230) bg_popup_trans_pane_g4

0x1cde,	// (0x00073238) bg_popup_trans_pane_g5

0x1ce6,	// (0x00073240) bg_popup_trans_pane_g6

0x1cee,	// (0x00073248) bg_popup_trans_pane_g7

0x1cf6,	// (0x00073250) bg_popup_trans_pane_g8

0xe645,	// (0x0007fb9f) bg_popup_trans_pane_g9

0x0008,

0xf860,	// (0x00080dba) bg_popup_trans_pane_g

0x1cfe,	// (0x00073258) cell_image3_tool_bar_pane_ParamLimits

0x1cfe,	// (0x00073258) cell_image3_tool_bar_pane

0xe23d,	// (0x0007f797) cell_image3_tool_bar_pane_g1

0xce55,	// (0x0007e3af) bg_popup_trans_pane_cp1

0x1d14,	// (0x0007326e) popup_image3_note_pane_t1

0x1d22,	// (0x0007327c) popup_image3_note_pane_t2

0x1d30,	// (0x0007328a) popup_image3_note_pane_t3

0x0002,

0xf873,	// (0x00080dcd) popup_image3_note_pane_t

0x1d40,	// (0x0007329a) popup_image3_note_pane_t3_copy1

0x88b9,	// (0x00079e13) bg_myfav_hc_instruction_pane_ParamLimits

0x88b9,	// (0x00079e13) bg_myfav_hc_instruction_pane

0x88d1,	// (0x00079e2b) cell_myfav_contact_pane_ParamLimits

0x88d1,	// (0x00079e2b) cell_myfav_contact_pane

0x88eb,	// (0x00079e45) cell_myfav_contact_pane_cp1_ParamLimits

0x88eb,	// (0x00079e45) cell_myfav_contact_pane_cp1

0x8903,	// (0x00079e5d) cell_myfav_contact_pane_cp2_ParamLimits

0x8903,	// (0x00079e5d) cell_myfav_contact_pane_cp2

0x891b,	// (0x00079e75) cell_myfav_contact_pane_cp3_ParamLimits

0x891b,	// (0x00079e75) cell_myfav_contact_pane_cp3

0x8932,	// (0x00079e8c) cell_myfav_contact_pane_cp4_ParamLimits

0x8932,	// (0x00079e8c) cell_myfav_contact_pane_cp4

0x8948,	// (0x00079ea2) cell_myfav_contact_pane_cp5_ParamLimits

0x8948,	// (0x00079ea2) cell_myfav_contact_pane_cp5

0x895c,	// (0x00079eb6) cell_myfav_contact_pane_cp6_ParamLimits

0x895c,	// (0x00079eb6) cell_myfav_contact_pane_cp6

0x8970,	// (0x00079eca) cell_myfav_contact_pane_cp7_ParamLimits

0x8970,	// (0x00079eca) cell_myfav_contact_pane_cp7

0x1d4e,	// (0x000732a8) listscroll_gen_pane_cp05

0x8988,	// (0x00079ee2) main_myfav_hc_pane_g1_ParamLimits

0x8988,	// (0x00079ee2) main_myfav_hc_pane_g1

0x89a2,	// (0x00079efc) main_myfav_hc_pane_g2_ParamLimits

0x89a2,	// (0x00079efc) main_myfav_hc_pane_g2

0x0002,

0xf87a,	// (0x00080dd4) main_myfav_hc_pane_g_ParamLimits

0xf87a,	// (0x00080dd4) main_myfav_hc_pane_g

0x89d4,	// (0x00079f2e) main_myfav_hc_pane_t1_ParamLimits

0x89d4,	// (0x00079f2e) main_myfav_hc_pane_t1

0x1d57,	// (0x000732b1) main_myfav_hc_pane_t2_ParamLimits

0x1d57,	// (0x000732b1) main_myfav_hc_pane_t2

0x1d69,	// (0x000732c3) main_myfav_hc_pane_t3_ParamLimits

0x1d69,	// (0x000732c3) main_myfav_hc_pane_t3

0x89eb,	// (0x00079f45) main_myfav_hc_pane_t4_ParamLimits

0x89eb,	// (0x00079f45) main_myfav_hc_pane_t4

0x0004,

0xf881,	// (0x00080ddb) main_myfav_hc_pane_t_ParamLimits

0xf881,	// (0x00080ddb) main_myfav_hc_pane_t

0xe23d,	// (0x0007f797) bg_myfav_hc_instruction_pane_g1

0x1d7b,	// (0x000732d5) cell_myfav_contact_pane_g1_ParamLimits

0x1d7b,	// (0x000732d5) cell_myfav_contact_pane_g1

0x1d7b,	// (0x000732d5) cell_myfav_contact_pane_g2_ParamLimits

0x1d7b,	// (0x000732d5) cell_myfav_contact_pane_g2

0x1d87,	// (0x000732e1) cell_myfav_contact_pane_g3_ParamLimits

0x1d87,	// (0x000732e1) cell_myfav_contact_pane_g3

0xd599,	// (0x0007eaf3) cell_myfav_contact_pane_g4_ParamLimits

0xd599,	// (0x0007eaf3) cell_myfav_contact_pane_g4

0x1d94,	// (0x000732ee) cell_myfav_contact_pane_g5_ParamLimits

0x1d94,	// (0x000732ee) cell_myfav_contact_pane_g5

0x0004,

0xf88c,	// (0x00080de6) cell_myfav_contact_pane_g_ParamLimits

0xf88c,	// (0x00080de6) cell_myfav_contact_pane_g

0x89bc,	// (0x00079f16) main_myfav_hc_pane_g3_ParamLimits

0x89bc,	// (0x00079f16) main_myfav_hc_pane_g3

0x3f66,	// (0x000754c0) popup_adpt_find_window

0x8a15,	// (0x00079f6f) afind_page_pane_ParamLimits

0x8a15,	// (0x00079f6f) afind_page_pane

0x8a22,	// (0x00079f7c) aid_size_cell_afind_ParamLimits

0x8a22,	// (0x00079f7c) aid_size_cell_afind

0x8a3c,	// (0x00079f96) bg_popup_sub_pane_cp09_ParamLimits

0x8a3c,	// (0x00079f96) bg_popup_sub_pane_cp09

0x8a4d,	// (0x00079fa7) find_pane_cp01_ParamLimits

0x8a4d,	// (0x00079fa7) find_pane_cp01

0x1da0,	// (0x000732fa) grid_afind_control_pane_ParamLimits

0x1da0,	// (0x000732fa) grid_afind_control_pane

0x8a60,	// (0x00079fba) grid_afind_pane_ParamLimits

0x8a60,	// (0x00079fba) grid_afind_pane

0x8a7c,	// (0x00079fd6) cell_afind_pane_ParamLimits

0x8a7c,	// (0x00079fd6) cell_afind_pane

0xe23d,	// (0x0007f797) afind_page_pane_g1

0x8ac4,	// (0x0007a01e) afind_page_pane_g2

0x8acc,	// (0x0007a026) afind_page_pane_g3

0x0002,

0xf897,	// (0x00080df1) afind_page_pane_g

0x8ad4,	// (0x0007a02e) afind_page_pane_t1

0x1dc6,	// (0x00073320) cell_afind_grid_control_pane_ParamLimits

0x1dc6,	// (0x00073320) cell_afind_grid_control_pane

0x1dd5,	// (0x0007332f) bg_button_pane_cp69_ParamLimits

0x1dd5,	// (0x0007332f) bg_button_pane_cp69

0x8ae2,	// (0x0007a03c) cell_afind_pane_g1_ParamLimits

0x8ae2,	// (0x0007a03c) cell_afind_pane_g1

0x8aef,	// (0x0007a049) cell_afind_pane_t1_ParamLimits

0x8aef,	// (0x0007a049) cell_afind_pane_t1

0x1de1,	// (0x0007333b) bg_button_pane_cp72

0x1de9,	// (0x00073343) cell_afind_grid_control_pane_g1

0x6784,	// (0x00077cde) aid_image_placing_area_ParamLimits

0x6784,	// (0x00077cde) aid_image_placing_area

0xd58b,	// (0x0007eae5) field_vitu_entry_pane_g1_ParamLimits

0xd58b,	// (0x0007eae5) field_vitu_entry_pane_g1

0xd58b,	// (0x0007eae5) field_vitu_entry_pane_g2_ParamLimits

0xd58b,	// (0x0007eae5) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x00080716) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x00080716) field_vitu_entry_pane_g

0x1a51,	// (0x00072fab) cell_vitu_itu_pane_g1_ParamLimits

0x1a34,	// (0x00072f8e) cell_vitu_itu_pane_t3_ParamLimits

0x1a34,	// (0x00072f8e) cell_vitu_itu_pane_t3

0x1bc1,	// (0x0007311b) mp4_progress_pane_t1_ParamLimits

0x1be3,	// (0x0007313d) mp4_progress_pane_t2_ParamLimits

0xf7dd,	// (0x00080d37) mp4_progress_pane_t_ParamLimits

0x1c05,	// (0x0007315f) mup_progress_pane_cp04_ParamLimits

0x89ff,	// (0x00079f59) main_myfav_hc_pane_t5_ParamLimits

0x89ff,	// (0x00079f59) main_myfav_hc_pane_t5

0x30a6,	// (0x00074600) aid_zoom_text_primary

0x3f66,	// (0x000754c0) popup_adpt_find_window_ParamLimits

0xd532,	// (0x0007ea8c) main_cam_set_pane

0x8484,	// (0x000799de) cam4_zoom_pane_ParamLimits

0x8484,	// (0x000799de) cam4_zoom_pane

0x8b01,	// (0x0007a05b) main_cam_set_pane_g1_ParamLimits

0x8b01,	// (0x0007a05b) main_cam_set_pane_g1

0x8b0f,	// (0x0007a069) main_cam_set_pane_g2_ParamLimits

0x8b0f,	// (0x0007a069) main_cam_set_pane_g2

0x0001,

0xf89e,	// (0x00080df8) main_cam_set_pane_g_ParamLimits

0xf89e,	// (0x00080df8) main_cam_set_pane_g

0x8b1b,	// (0x0007a075) main_cam_set_pane_t1_ParamLimits

0x8b1b,	// (0x0007a075) main_cam_set_pane_t1

0x8b37,	// (0x0007a091) main_cset_listscroll_pane_ParamLimits

0x8b37,	// (0x0007a091) main_cset_listscroll_pane

0x8b6b,	// (0x0007a0c5) main_cset_slider_pane_ParamLimits

0x8b6b,	// (0x0007a0c5) main_cset_slider_pane

0x1dfa,	// (0x00073354) main_cset_list_pane_ParamLimits

0x1dfa,	// (0x00073354) main_cset_list_pane

0x1e0a,	// (0x00073364) scroll_pane_cp028

0x8b8c,	// (0x0007a0e6) aid_area_touch_slider

0x8ba8,	// (0x0007a102) cset_slider_pane

0x8bcb,	// (0x0007a125) main_cset_slider_pane_g1

0x8be0,	// (0x0007a13a) main_cset_slider_pane_g2

0x0011,

0xf8a3,	// (0x00080dfd) main_cset_slider_pane_g

0x1e43,	// (0x0007339d) main_cset_slider_pane_t1

0x8c9c,	// (0x0007a1f6) main_cset_slider_pane_t2

0x8cb6,	// (0x0007a210) main_cset_slider_pane_t3

0x8cd0,	// (0x0007a22a) main_cset_slider_pane_t4

0x8cea,	// (0x0007a244) main_cset_slider_pane_t5

0x8d04,	// (0x0007a25e) main_cset_slider_pane_t6

0x8d19,	// (0x0007a273) main_cset_slider_pane_t7

0x000e,

0xf8c8,	// (0x00080e22) main_cset_slider_pane_t

0x8e1d,	// (0x0007a377) cset_list_set_pane_ParamLimits

0x8e1d,	// (0x0007a377) cset_list_set_pane

0x1edd,	// (0x00073437) aid_position_infowindow_above

0x1ee5,	// (0x0007343f) aid_position_infowindow_below

0x8e2e,	// (0x0007a388) cset_list_set_pane_g1_ParamLimits

0x8e2e,	// (0x0007a388) cset_list_set_pane_g1

0x3316,	// (0x00074870) cset_list_set_pane_g3_ParamLimits

0x3316,	// (0x00074870) cset_list_set_pane_g3

0x0001,

0xf8e7,	// (0x00080e41) cset_list_set_pane_g_ParamLimits

0xf8e7,	// (0x00080e41) cset_list_set_pane_g

0x3325,	// (0x0007487f) cset_list_set_pane_t1_ParamLimits

0x3325,	// (0x0007487f) cset_list_set_pane_t1

0xd532,	// (0x0007ea8c) list_highlight_pane_cp021_ParamLimits

0xd532,	// (0x0007ea8c) list_highlight_pane_cp021

0xee85,	// (0x000803df) cset_slider_pane_g1

0xee97,	// (0x000803f1) cset_slider_pane_g2

0xee8e,	// (0x000803e8) cset_slider_pane_g3

0x0002,

0xf8ec,	// (0x00080e46) cset_slider_pane_g

0x2240,	// (0x0007379a) aid_area_touch_cam4_zoom

0x8e3a,	// (0x0007a394) cam4_zoom_cont_pane

0x8e42,	// (0x0007a39c) cam4_zoom_pane_g1

0x8e4a,	// (0x0007a3a4) cam4_zoom_pane_g2

0x8e52,	// (0x0007a3ac) cam4_zoom_pane_g3

0x0002,

0xf8f3,	// (0x00080e4d) cam4_zoom_pane_g

0x8e5a,	// (0x0007a3b4) cam4_zoom_cont_pane_g1

0x8e63,	// (0x0007a3bd) cam4_zoom_cont_pane_g2

0x8e6c,	// (0x0007a3c6) cam4_zoom_cont_pane_g3

0x0002,

0xf8fa,	// (0x00080e54) cam4_zoom_cont_pane_g

0x82b4,	// (0x0007980e) call4_image_pane_ParamLimits

0x82b4,	// (0x0007980e) call4_image_pane

0x8315,	// (0x0007986f) call4_windows_conf_pane_ParamLimits

0x835c,	// (0x000798b6) popup_call4_audio_in_window_ParamLimits

0x835c,	// (0x000798b6) popup_call4_audio_in_window

0xce55,	// (0x0007e3af) bg_popup_call2_act_pane_cp02

0x1c46,	// (0x000731a0) call4_list_conf_pane

0xe23d,	// (0x0007f797) call4_image_pane_g1

0xe23d,	// (0x0007f797) call4_image_pane_g2

0x0001,

0xf0af,	// (0x00080609) call4_image_pane_g

0x1eed,	// (0x00073447) list_single_graphic_popup_conf4_pane_ParamLimits

0x1eed,	// (0x00073447) list_single_graphic_popup_conf4_pane

0xce55,	// (0x0007e3af) list_highlight_pane_cp022

0x1f02,	// (0x0007345c) list_single_graphic_popup_conf4_pane_g1

0xeb8e,	// (0x000800e8) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf901,	// (0x00080e5b) list_single_graphic_popup_conf4_pane_g

0x1f0a,	// (0x00073464) list_single_graphic_popup_conf4_pane_t1

0x4d7e,	// (0x000762d8) popup_vtel_slider_window_ParamLimits

0x4d7e,	// (0x000762d8) popup_vtel_slider_window

0x1c18,	// (0x00073172) dialer2_ne_pane_t2_ParamLimits

0x1c18,	// (0x00073172) dialer2_ne_pane_t2

0x0001,

0xf7e2,	// (0x00080d3c) dialer2_ne_pane_t_ParamLimits

0xf7e2,	// (0x00080d3c) dialer2_ne_pane_t

0xd532,	// (0x0007ea8c) bg_popup_sub_pane_cp010_ParamLimits

0xd532,	// (0x0007ea8c) bg_popup_sub_pane_cp010

0x8e75,	// (0x0007a3cf) popup_vtel_slider_window_g1_ParamLimits

0x8e75,	// (0x0007a3cf) popup_vtel_slider_window_g1

0x8e81,	// (0x0007a3db) popup_vtel_slider_window_g2_ParamLimits

0x8e81,	// (0x0007a3db) popup_vtel_slider_window_g2

0x0003,

0xf906,	// (0x00080e60) popup_vtel_slider_window_g_ParamLimits

0xf906,	// (0x00080e60) popup_vtel_slider_window_g

0x8ec9,	// (0x0007a423) vtel_slider_pane_ParamLimits

0x8ec9,	// (0x0007a423) vtel_slider_pane

0x8ed8,	// (0x0007a432) vtel_slider_pane_g1_ParamLimits

0x8ed8,	// (0x0007a432) vtel_slider_pane_g1

0x8ee5,	// (0x0007a43f) vtel_slider_pane_g2_ParamLimits

0x8ee5,	// (0x0007a43f) vtel_slider_pane_g2

0x8ef2,	// (0x0007a44c) vtel_slider_pane_g3_ParamLimits

0x8ef2,	// (0x0007a44c) vtel_slider_pane_g3

0x8ed8,	// (0x0007a432) vtel_slider_pane_g4_ParamLimits

0x8ed8,	// (0x0007a432) vtel_slider_pane_g4

0x8eff,	// (0x0007a459) vtel_slider_pane_g5_ParamLimits

0x8eff,	// (0x0007a459) vtel_slider_pane_g5

0x0004,

0xf90f,	// (0x00080e69) vtel_slider_pane_g_ParamLimits

0xf90f,	// (0x00080e69) vtel_slider_pane_g

0xd532,	// (0x0007ea8c) main_gallery2_pane

0x86dc,	// (0x00079c36) aid_size_row_itut2_dropdow_list_ParamLimits

0x86dc,	// (0x00079c36) aid_size_row_itut2_dropdow_list

0x873c,	// (0x00079c96) grid_vitu2_function_top_pane_ParamLimits

0x873c,	// (0x00079c96) grid_vitu2_function_top_pane

0x8792,	// (0x00079cec) popup_vitu2_dropdown_list_window_ParamLimits

0x8792,	// (0x00079cec) popup_vitu2_dropdown_list_window

0x87b0,	// (0x00079d0a) popup_vitu2_match_list_window

0x8f0c,	// (0x0007a466) cell_vitu2_function_top_pane_ParamLimits

0x8f0c,	// (0x0007a466) cell_vitu2_function_top_pane

0x8f26,	// (0x0007a480) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8f26,	// (0x0007a480) cell_vitu2_function_top_pane_cp01

0x8f42,	// (0x0007a49c) cell_vitu2_function_top_wide_pane_ParamLimits

0x8f42,	// (0x0007a49c) cell_vitu2_function_top_wide_pane

0xd532,	// (0x0007ea8c) bg_button_pane_cp012

0x8f60,	// (0x0007a4ba) cell_vitu2_function_top_pane_g1

0x8f74,	// (0x0007a4ce) bg_button_pane_cp013_ParamLimits

0x8f74,	// (0x0007a4ce) bg_button_pane_cp013

0x8f90,	// (0x0007a4ea) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8f90,	// (0x0007a4ea) cell_vitu2_function_top_wide_pane_g1

0xce5f,	// (0x0007e3b9) bg_popup_sub_pane_cp20

0x8fa8,	// (0x0007a502) list_vitu2_match_list_pane

0x1cc6,	// (0x00073220) bg_popup_sub_pane_cp20_g1

0x1cce,	// (0x00073228) bg_popup_sub_pane_cp20_g2

0xe665,	// (0x0007fbbf) bg_popup_sub_pane_cp20_g3

0x1cd6,	// (0x00073230) bg_popup_sub_pane_cp20_g4

0xe645,	// (0x0007fb9f) bg_popup_sub_pane_cp20_g5

0x1f20,	// (0x0007347a) bg_popup_sub_pane_cp20_g6

0x1ce6,	// (0x00073240) bg_popup_sub_pane_cp20_g7

0x1cee,	// (0x00073248) bg_popup_sub_pane_cp20_g8

0x1cf6,	// (0x00073250) bg_popup_sub_pane_cp20_g9

0x0008,

0xf91a,	// (0x00080e74) bg_popup_sub_pane_cp20_g

0x8fc0,	// (0x0007a51a) list_vitu2_match_list_item_pane_ParamLimits

0x8fc0,	// (0x0007a51a) list_vitu2_match_list_item_pane

0x8fd2,	// (0x0007a52c) list_vitu2_match_list_item_pane_t1

0xce55,	// (0x0007e3af) bg_popup_sub_pane_cp21

0xe439,	// (0x0007f993) grid_vitu2_dropdown_list_pane

0x8fe0,	// (0x0007a53a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8fe0,	// (0x0007a53a) cell_vitu2_dropdown_list_char_pane

0x9004,	// (0x0007a55e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9004,	// (0x0007a55e) cell_vitu2_dropdown_list_ctrl_pane

0x1f3a,	// (0x00073494) cell_vitu2_dropdown_list_char_pane_g1

0x1f31,	// (0x0007348b) cell_vitu2_dropdown_list_char_pane_g2

0x1f28,	// (0x00073482) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf92d,	// (0x00080e87) cell_vitu2_dropdown_list_char_pane_g

0x902e,	// (0x0007a588) cell_vitu2_dropdown_list_char_pane_t1

0x903c,	// (0x0007a596) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x903c,	// (0x0007a596) cell_vitu2_dropdown_list_ctrl_pane_g1

0x904c,	// (0x0007a5a6) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x904c,	// (0x0007a5a6) cell_vitu2_dropdown_list_ctrl_pane_g2

0x905d,	// (0x0007a5b7) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x905d,	// (0x0007a5b7) cell_vitu2_dropdown_list_ctrl_pane_g3

0x906d,	// (0x0007a5c7) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x906d,	// (0x0007a5c7) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd58b,	// (0x0007eae5) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd58b,	// (0x0007eae5) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf934,	// (0x00080e8e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf934,	// (0x00080e8e) cell_vitu2_dropdown_list_ctrl_pane_g

0x9086,	// (0x0007a5e0) aid_size_cell_gallery2_ParamLimits

0x9086,	// (0x0007a5e0) aid_size_cell_gallery2

0x90a0,	// (0x0007a5fa) grid_gallery2_pane_ParamLimits

0x90a0,	// (0x0007a5fa) grid_gallery2_pane

0x90b7,	// (0x0007a611) scroll_pane_cp029_ParamLimits

0x90b7,	// (0x0007a611) scroll_pane_cp029

0x90c7,	// (0x0007a621) cell_gallery2_pane_ParamLimits

0x90c7,	// (0x0007a621) cell_gallery2_pane

0x1f43,	// (0x0007349d) cell_gallery2_pane_g2

0x911e,	// (0x0007a678) cell_gallery2_pane_g3

0x1f4b,	// (0x000734a5) cell_gallery2_pane_g4

0x1f53,	// (0x000734ad) cell_gallery2_pane_g5

0xe439,	// (0x0007f993) grid_highlight_pane_cp10

0x87b0,	// (0x00079d0a) popup_vitu2_match_list_window_ParamLimits

0x87c4,	// (0x00079d1e) popup_vitu2_query_window_ParamLimits

0x87c4,	// (0x00079d1e) popup_vitu2_query_window

0xce55,	// (0x0007e3af) bg_vitu2_candi_button_pane

0x1f3a,	// (0x00073494) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1f31,	// (0x0007348b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1f28,	// (0x00073482) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x333a,	// (0x00074894) bg_button_pane_cp015

0x9126,	// (0x0007a680) bg_button_pane_cp016

0x9132,	// (0x0007a68c) bg_button_pane_cp017

0xee21,	// (0x0008037b) bg_popup_sub_pane_cp22

0x1f5b,	// (0x000734b5) popup_vitu2_query_window_g1

0x914d,	// (0x0007a6a7) popup_vitu2_query_window_g2

0x0002,

0xf93f,	// (0x00080e99) popup_vitu2_query_window_g

0x3375,	// (0x000748cf) popup_vitu2_query_window_t1_ParamLimits

0x3375,	// (0x000748cf) popup_vitu2_query_window_t1

0x33a8,	// (0x00074902) popup_vitu2_query_window_t2_ParamLimits

0x33a8,	// (0x00074902) popup_vitu2_query_window_t2

0x33ba,	// (0x00074914) popup_vitu2_query_window_t3_ParamLimits

0x33ba,	// (0x00074914) popup_vitu2_query_window_t3

0x9171,	// (0x0007a6cb) popup_vitu2_query_window_t4_ParamLimits

0x9171,	// (0x0007a6cb) popup_vitu2_query_window_t4

0x9185,	// (0x0007a6df) popup_vitu2_query_window_t5_ParamLimits

0x9185,	// (0x0007a6df) popup_vitu2_query_window_t5

0x0006,

0xf946,	// (0x00080ea0) popup_vitu2_query_window_t_ParamLimits

0xf946,	// (0x00080ea0) popup_vitu2_query_window_t

0x1df2,	// (0x0007334c) main_cset_text_pane

0x8b8c,	// (0x0007a0e6) aid_area_touch_slider_ParamLimits

0x8ba8,	// (0x0007a102) cset_slider_pane_ParamLimits

0x8bcb,	// (0x0007a125) main_cset_slider_pane_g1_ParamLimits

0x8be0,	// (0x0007a13a) main_cset_slider_pane_g2_ParamLimits

0x1e13,	// (0x0007336d) main_cset_slider_pane_g3_ParamLimits

0x1e13,	// (0x0007336d) main_cset_slider_pane_g3

0x8bf5,	// (0x0007a14f) main_cset_slider_pane_g4_ParamLimits

0x8bf5,	// (0x0007a14f) main_cset_slider_pane_g4

0x8c04,	// (0x0007a15e) main_cset_slider_pane_g5_ParamLimits

0x8c04,	// (0x0007a15e) main_cset_slider_pane_g5

0x8c10,	// (0x0007a16a) main_cset_slider_pane_g6_ParamLimits

0x8c10,	// (0x0007a16a) main_cset_slider_pane_g6

0xf8a3,	// (0x00080dfd) main_cset_slider_pane_g_ParamLimits

0x1e43,	// (0x0007339d) main_cset_slider_pane_t1_ParamLimits

0x8c9c,	// (0x0007a1f6) main_cset_slider_pane_t2_ParamLimits

0x8cb6,	// (0x0007a210) main_cset_slider_pane_t3_ParamLimits

0x8cd0,	// (0x0007a22a) main_cset_slider_pane_t4_ParamLimits

0x8cea,	// (0x0007a244) main_cset_slider_pane_t5_ParamLimits

0x8d04,	// (0x0007a25e) main_cset_slider_pane_t6_ParamLimits

0x8d19,	// (0x0007a273) main_cset_slider_pane_t7_ParamLimits

0x8d43,	// (0x0007a29d) main_cset_slider_pane_t8_ParamLimits

0x8d43,	// (0x0007a29d) main_cset_slider_pane_t8

0x8d6b,	// (0x0007a2c5) main_cset_slider_pane_t9_ParamLimits

0x8d6b,	// (0x0007a2c5) main_cset_slider_pane_t9

0x8d93,	// (0x0007a2ed) main_cset_slider_pane_t10_ParamLimits

0x8d93,	// (0x0007a2ed) main_cset_slider_pane_t10

0x8dbb,	// (0x0007a315) main_cset_slider_pane_t11_ParamLimits

0x8dbb,	// (0x0007a315) main_cset_slider_pane_t11

0x8de3,	// (0x0007a33d) main_cset_slider_pane_t12_ParamLimits

0x8de3,	// (0x0007a33d) main_cset_slider_pane_t12

0x8e00,	// (0x0007a35a) main_cset_slider_pane_t13_ParamLimits

0x8e00,	// (0x0007a35a) main_cset_slider_pane_t13

0xf8c8,	// (0x00080e22) main_cset_slider_pane_t_ParamLimits

0xce55,	// (0x0007e3af) bg_popup_sub_pane_cp011

0x1f67,	// (0x000734c1) main_cset_text_pane_g1

0x1f6f,	// (0x000734c9) main_cset_text_pane_t1

0x1f7d,	// (0x000734d7) main_cset_text_pane_t2

0x1f8b,	// (0x000734e5) main_cset_text_pane_t3

0x1f99,	// (0x000734f3) main_cset_text_pane_t4

0x1fa7,	// (0x00073501) main_cset_text_pane_t5

0x1fb5,	// (0x0007350f) main_cset_text_pane_t6

0x1fc3,	// (0x0007351d) main_cset_text_pane_t7

0x0006,

0xf955,	// (0x00080eaf) main_cset_text_pane_t

0xce55,	// (0x0007e3af) main_cam4_burst_pane

0xce55,	// (0x0007e3af) main_cam5_pane

0x1db4,	// (0x0007330e) bg_button_pane_cp019

0x1dbd,	// (0x00073317) bg_button_pane_cp020

0x1e1f,	// (0x00073379) main_cset_slider_pane_g7_ParamLimits

0x1e1f,	// (0x00073379) main_cset_slider_pane_g7

0x1e2b,	// (0x00073385) main_cset_slider_pane_g8_ParamLimits

0x1e2b,	// (0x00073385) main_cset_slider_pane_g8

0x8c24,	// (0x0007a17e) main_cset_slider_pane_g9_ParamLimits

0x8c24,	// (0x0007a17e) main_cset_slider_pane_g9

0x8c30,	// (0x0007a18a) main_cset_slider_pane_g10_ParamLimits

0x8c30,	// (0x0007a18a) main_cset_slider_pane_g10

0x8c3c,	// (0x0007a196) main_cset_slider_pane_g11_ParamLimits

0x8c3c,	// (0x0007a196) main_cset_slider_pane_g11

0x8c48,	// (0x0007a1a2) main_cset_slider_pane_g12_ParamLimits

0x8c48,	// (0x0007a1a2) main_cset_slider_pane_g12

0x8c54,	// (0x0007a1ae) main_cset_slider_pane_g13_ParamLimits

0x8c54,	// (0x0007a1ae) main_cset_slider_pane_g13

0x8c60,	// (0x0007a1ba) main_cset_slider_pane_g14_ParamLimits

0x8c60,	// (0x0007a1ba) main_cset_slider_pane_g14

0x8c6c,	// (0x0007a1c6) main_cset_slider_pane_g15_ParamLimits

0x8c6c,	// (0x0007a1c6) main_cset_slider_pane_g15

0x1e6b,	// (0x000733c5) main_cset_slider_pane_t14_ParamLimits

0x1e6b,	// (0x000733c5) main_cset_slider_pane_t14

0x1ea4,	// (0x000733fe) main_cset_slider_pane_t15_ParamLimits

0x1ea4,	// (0x000733fe) main_cset_slider_pane_t15

0x9199,	// (0x0007a6f3) aid_cam4_burst_size_cell_ParamLimits

0x9199,	// (0x0007a6f3) aid_cam4_burst_size_cell

0x91b5,	// (0x0007a70f) grid_cam4_burst_pane_ParamLimits

0x91b5,	// (0x0007a70f) grid_cam4_burst_pane

0x91e7,	// (0x0007a741) linegrid_cam4_burst_pane_ParamLimits

0x91e7,	// (0x0007a741) linegrid_cam4_burst_pane

0x9205,	// (0x0007a75f) scroll_pane_cp30_ParamLimits

0x9205,	// (0x0007a75f) scroll_pane_cp30

0x9211,	// (0x0007a76b) cell_cam4_burst_pane_ParamLimits

0x9211,	// (0x0007a76b) cell_cam4_burst_pane

0x1fd1,	// (0x0007352b) linegrid_cam4_burst_pane_g1_ParamLimits

0x1fd1,	// (0x0007352b) linegrid_cam4_burst_pane_g1

0x9251,	// (0x0007a7ab) linegrid_cam4_burst_pane_g2_ParamLimits

0x9251,	// (0x0007a7ab) linegrid_cam4_burst_pane_g2

0x1fde,	// (0x00073538) linegrid_cam4_burst_pane_g3_ParamLimits

0x1fde,	// (0x00073538) linegrid_cam4_burst_pane_g3

0x0002,

0xf964,	// (0x00080ebe) linegrid_cam4_burst_pane_g_ParamLimits

0xf964,	// (0x00080ebe) linegrid_cam4_burst_pane_g

0x9262,	// (0x0007a7bc) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9262,	// (0x0007a7bc) linegrid_cam4_burst_pane_g3_copy1

0x1feb,	// (0x00073545) linegrid_cam4_burst_pane_g4_ParamLimits

0x1feb,	// (0x00073545) linegrid_cam4_burst_pane_g4

0x927c,	// (0x0007a7d6) linegrid_cam4_burst_pane_g5_ParamLimits

0x927c,	// (0x0007a7d6) linegrid_cam4_burst_pane_g5

0x928d,	// (0x0007a7e7) linegrid_cam4_burst_pane_g6_ParamLimits

0x928d,	// (0x0007a7e7) linegrid_cam4_burst_pane_g6

0x1ff8,	// (0x00073552) linegrid_cam4_burst_pane_g7_ParamLimits

0x1ff8,	// (0x00073552) linegrid_cam4_burst_pane_g7

0x92a4,	// (0x0007a7fe) cell_cam4_burst_pane_g1

0x2011,	// (0x0007356b) main_cam5_pane_t1_ParamLimits

0x2011,	// (0x0007356b) main_cam5_pane_t1

0x2023,	// (0x0007357d) main_cam5_pane_t2_ParamLimits

0x2023,	// (0x0007357d) main_cam5_pane_t2

0x2035,	// (0x0007358f) main_cam5_pane_t3_ParamLimits

0x2035,	// (0x0007358f) main_cam5_pane_t3

0x2047,	// (0x000735a1) main_cam5_pane_t4_ParamLimits

0x2047,	// (0x000735a1) main_cam5_pane_t4

0x205f,	// (0x000735b9) main_cam5_pane_t5_ParamLimits

0x205f,	// (0x000735b9) main_cam5_pane_t5

0x2073,	// (0x000735cd) main_cam5_pane_t6_ParamLimits

0x2073,	// (0x000735cd) main_cam5_pane_t6

0x2087,	// (0x000735e1) main_cam5_pane_t7_ParamLimits

0x2087,	// (0x000735e1) main_cam5_pane_t7

0x2099,	// (0x000735f3) main_cam5_pane_t8_ParamLimits

0x2099,	// (0x000735f3) main_cam5_pane_t8

0x20b7,	// (0x00073611) main_cam5_pane_t9_ParamLimits

0x20b7,	// (0x00073611) main_cam5_pane_t9

0x20c9,	// (0x00073623) main_cam5_pane_t10_ParamLimits

0x20c9,	// (0x00073623) main_cam5_pane_t10

0x20db,	// (0x00073635) main_cam5_pane_t11_ParamLimits

0x20db,	// (0x00073635) main_cam5_pane_t11

0x20ef,	// (0x00073649) main_cam5_pane_t12_ParamLimits

0x20ef,	// (0x00073649) main_cam5_pane_t12

0x2106,	// (0x00073660) main_cam5_pane_t13_ParamLimits

0x2106,	// (0x00073660) main_cam5_pane_t13

0x000c,

0xf970,	// (0x00080eca) main_cam5_pane_t_ParamLimits

0xf970,	// (0x00080eca) main_cam5_pane_t

0x401b,	// (0x00075575) popup_scut_keymap_window_ParamLimits

0x401b,	// (0x00075575) popup_scut_keymap_window

0x92b7,	// (0x0007a811) aid_size_cell_brow_shortcut

0xe439,	// (0x0007f993) bg_popup_window_pane_cp010

0x92c3,	// (0x0007a81d) grid_scut_pane

0x92cf,	// (0x0007a829) cell_scut_pane_ParamLimits

0x92cf,	// (0x0007a829) cell_scut_pane

0x92ea,	// (0x0007a844) cell_scut_pane_g1

0x2129,	// (0x00073683) cell_scut_pane_t1

0x2138,	// (0x00073692) cell_scut_pane_t2

0x92f3,	// (0x0007a84d) cell_scut_pane_t3

0x0002,

0xf98b,	// (0x00080ee5) cell_scut_pane_t

0x7430,	// (0x0007898a) main_mup3_pane_g8_ParamLimits

0x7430,	// (0x0007898a) main_mup3_pane_g8

0x86ea,	// (0x00079c44) area_vitu2_query_pane_ParamLimits

0x86ea,	// (0x00079c44) area_vitu2_query_pane

0x334f,	// (0x000748a9) input_focus_pane_cp08

0x2147,	// (0x000736a1) area_vitu2_query_pane_g1

0x3438,	// (0x00074992) area_vitu2_query_pane_g2

0x0001,

0xf992,	// (0x00080eec) area_vitu2_query_pane_g

0x9301,	// (0x0007a85b) area_vitu2_query_pane_t1_ParamLimits

0x9301,	// (0x0007a85b) area_vitu2_query_pane_t1

0x9315,	// (0x0007a86f) area_vitu2_query_pane_t2_ParamLimits

0x9315,	// (0x0007a86f) area_vitu2_query_pane_t2

0x3449,	// (0x000749a3) area_vitu2_query_pane_t3_ParamLimits

0x3449,	// (0x000749a3) area_vitu2_query_pane_t3

0x3471,	// (0x000749cb) area_vitu2_query_pane_t4_ParamLimits

0x3471,	// (0x000749cb) area_vitu2_query_pane_t4

0x3499,	// (0x000749f3) area_vitu2_query_pane_t5_ParamLimits

0x3499,	// (0x000749f3) area_vitu2_query_pane_t5

0x34c1,	// (0x00074a1b) area_vitu2_query_pane_t6_ParamLimits

0x34c1,	// (0x00074a1b) area_vitu2_query_pane_t6

0x0006,

0xf997,	// (0x00080ef1) area_vitu2_query_pane_t_ParamLimits

0xf997,	// (0x00080ef1) area_vitu2_query_pane_t

0x9126,	// (0x0007a680) bg_button_pane_cp018

0x9329,	// (0x0007a883) bg_button_pane_cp021

0x350d,	// (0x00074a67) bg_button_pane_cp022

0x3530,	// (0x00074a8a) input_focus_pane_cp09

0x60b2,	// (0x0007760c) aid_size_touch_mv_arrow_left

0x60dd,	// (0x00077637) aid_size_touch_mv_arrow_right

0x8c84,	// (0x0007a1de) main_cset_slider_pane_g16_ParamLimits

0x8c84,	// (0x0007a1de) main_cset_slider_pane_g16

0x8c90,	// (0x0007a1ea) main_cset_slider_pane_g17_ParamLimits

0x8c90,	// (0x0007a1ea) main_cset_slider_pane_g17

0x92a4,	// (0x0007a7fe) cell_cam4_burst_pane_g1_ParamLimits

0xce55,	// (0x0007e3af) compa_mode_pane

0x8e8d,	// (0x0007a3e7) popup_vtel_slider_window_g3_ParamLimits

0x8e8d,	// (0x0007a3e7) popup_vtel_slider_window_g3

0x8ea1,	// (0x0007a3fb) popup_vtel_slider_window_g4_ParamLimits

0x8ea1,	// (0x0007a3fb) popup_vtel_slider_window_g4

0x8eb5,	// (0x0007a40f) popup_vtel_slider_window_t1_ParamLimits

0x8eb5,	// (0x0007a40f) popup_vtel_slider_window_t1

0xce55,	// (0x0007e3af) main_cl_pane

0x6c74,	// (0x000781ce) popup_imed_adjust2_window_ParamLimits

0xee21,	// (0x0008037b) bg_tb_trans_pane_cp05_ParamLimits

0x1967,	// (0x00072ec1) popup_imed_adjust2_window_g1_ParamLimits

0x1976,	// (0x00072ed0) popup_imed_adjust2_window_g2_ParamLimits

0x1976,	// (0x00072ed0) popup_imed_adjust2_window_g2

0x1982,	// (0x00072edc) popup_imed_adjust2_window_g3_ParamLimits

0x1982,	// (0x00072edc) popup_imed_adjust2_window_g3

0x0002,

0xf717,	// (0x00080c71) popup_imed_adjust2_window_g_ParamLimits

0xf717,	// (0x00080c71) popup_imed_adjust2_window_g

0x198e,	// (0x00072ee8) popup_imed_adjust2_window_t1_ParamLimits

0x19a6,	// (0x00072f00) slider_imed_adjust_pane_ParamLimits

0x19ba,	// (0x00072f14) slider_imed_adjust_pane_g1_ParamLimits

0x19ca,	// (0x00072f24) slider_imed_adjust_pane_g2_ParamLimits

0x19da,	// (0x00072f34) slider_imed_adjust_pane_g3_ParamLimits

0x19eb,	// (0x00072f45) slider_imed_adjust_pane_g4_ParamLimits

0xf71e,	// (0x00080c78) slider_imed_adjust_pane_g_ParamLimits

0x842d,	// (0x00079987) aid_touch_area_cam4_ParamLimits

0x842d,	// (0x00079987) aid_touch_area_cam4

0x843d,	// (0x00079997) battery_pane_cp01

0x84c4,	// (0x00079a1e) main_camera4_pane_g6_ParamLimits

0x84c4,	// (0x00079a1e) main_camera4_pane_g6

0x84e2,	// (0x00079a3c) main_camera4_pane_t2_ParamLimits

0x84e2,	// (0x00079a3c) main_camera4_pane_t2

0x0001,

0xf816,	// (0x00080d70) main_camera4_pane_t_ParamLimits

0xf816,	// (0x00080d70) main_camera4_pane_t

0x8565,	// (0x00079abf) aid_touch_area_vid4_ParamLimits

0x8565,	// (0x00079abf) aid_touch_area_vid4

0x85a5,	// (0x00079aff) main_video4_pane_g5_ParamLimits

0x85a5,	// (0x00079aff) main_video4_pane_g5

0x85cb,	// (0x00079b25) vid4_progress_pane_ParamLimits

0x85cb,	// (0x00079b25) vid4_progress_pane

0x1e37,	// (0x00073391) main_cset_slider_pane_g18_ParamLimits

0x1e37,	// (0x00073391) main_cset_slider_pane_g18

0x2005,	// (0x0007355f) cell_cam4_burst_pane_g2_ParamLimits

0x2005,	// (0x0007355f) cell_cam4_burst_pane_g2

0x0001,

0xf96b,	// (0x00080ec5) cell_cam4_burst_pane_g_ParamLimits

0xf96b,	// (0x00080ec5) cell_cam4_burst_pane_g

0x9335,	// (0x0007a88f) bg_cl_pane_ParamLimits

0x9335,	// (0x0007a88f) bg_cl_pane

0x9341,	// (0x0007a89b) cl_header_pane_ParamLimits

0x9341,	// (0x0007a89b) cl_header_pane

0x934d,	// (0x0007a8a7) cl_listscroll_pane_ParamLimits

0x934d,	// (0x0007a8a7) cl_listscroll_pane

0x21ef,	// (0x00073749) bg_cl_pane_g1

0x21f7,	// (0x00073751) bg_cl_pane_g2

0x21ff,	// (0x00073759) bg_cl_pane_g3

0x2207,	// (0x00073761) bg_cl_pane_g4

0x220f,	// (0x00073769) bg_cl_pane_g5

0x2217,	// (0x00073771) bg_cl_pane_g6

0x221f,	// (0x00073779) bg_cl_pane_g7

0x2227,	// (0x00073781) bg_cl_pane_g8

0x222f,	// (0x00073789) bg_cl_pane_g9

0x0008,

0xf9a6,	// (0x00080f00) bg_cl_pane_g

0x9359,	// (0x0007a8b3) aid_height_cl_leading_ParamLimits

0x9359,	// (0x0007a8b3) aid_height_cl_leading

0x9365,	// (0x0007a8bf) aid_height_cl_text_ParamLimits

0x9365,	// (0x0007a8bf) aid_height_cl_text

0xce5f,	// (0x0007e3b9) bg_cl_header_pane_ParamLimits

0xce5f,	// (0x0007e3b9) bg_cl_header_pane

0x937d,	// (0x0007a8d7) cl_header_pane_g1_ParamLimits

0x937d,	// (0x0007a8d7) cl_header_pane_g1

0x938a,	// (0x0007a8e4) cl_header_pane_t1_ParamLimits

0x938a,	// (0x0007a8e4) cl_header_pane_t1

0x2237,	// (0x00073791) cl_list_pane

0x1e0a,	// (0x00073364) hc_scroll_pane_cp01

0xe645,	// (0x0007fb9f) bg_cl_header_pane_g1

0x1cc6,	// (0x00073220) bg_cl_header_pane_g2

0xe665,	// (0x0007fbbf) bg_cl_header_pane_g3

0x1cd6,	// (0x00073230) bg_cl_header_pane_g4

0x1cce,	// (0x00073228) bg_cl_header_pane_g5

0x1f20,	// (0x0007347a) bg_cl_header_pane_g6

0x1cee,	// (0x00073248) bg_cl_header_pane_g7

0x1cf6,	// (0x00073250) bg_cl_header_pane_g8

0x1ce6,	// (0x00073240) bg_cl_header_pane_g9

0x0008,

0xf9b9,	// (0x00080f13) bg_cl_header_pane_g

0x939c,	// (0x0007a8f6) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x939c,	// (0x0007a8f6) hc_cl_list_double_graphic_heading_pane

0x93ac,	// (0x0007a906) hc_cl_list_single_graphic_pane_ParamLimits

0x93ac,	// (0x0007a906) hc_cl_list_single_graphic_pane

0x93be,	// (0x0007a918) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x93be,	// (0x0007a918) hc_cl_list_single_graphic_pane_g1

0x93ca,	// (0x0007a924) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x93ca,	// (0x0007a924) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9cc,	// (0x00080f26) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9cc,	// (0x00080f26) hc_cl_list_single_graphic_pane_g

0x93de,	// (0x0007a938) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x93de,	// (0x0007a938) hc_cl_list_single_graphic_pane_t1

0x93be,	// (0x0007a918) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x93be,	// (0x0007a918) hc_cl_list_double_graphic_heading_pane_g1

0x93f3,	// (0x0007a94d) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x93f3,	// (0x0007a94d) hc_cl_list_double_graphic_heading_pane_g2

0x9407,	// (0x0007a961) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9407,	// (0x0007a961) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9d1,	// (0x00080f2b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9d1,	// (0x00080f2b) hc_cl_list_double_graphic_heading_pane_g

0x941b,	// (0x0007a975) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x941b,	// (0x0007a975) hc_cl_list_double_graphic_heading_pane_t1

0x9430,	// (0x0007a98a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9430,	// (0x0007a98a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9d8,	// (0x00080f32) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9d8,	// (0x00080f32) hc_cl_list_double_graphic_heading_pane_t

0x944d,	// (0x0007a9a7) vid4_progress_pane_g1

0x945d,	// (0x0007a9b7) vid4_progress_pane_g2

0x946d,	// (0x0007a9c7) vid4_progress_pane_g3

0x947f,	// (0x0007a9d9) vid4_progress_pane_g4

0x0004,

0xf9dd,	// (0x00080f37) vid4_progress_pane_g

0x949d,	// (0x0007a9f7) vid4_progress_pane_t1

0x94b7,	// (0x0007aa11) vid4_progress_pane_t2

0x0002,

0xf9e8,	// (0x00080f42) vid4_progress_pane_t

0x94e5,	// (0x0007aa3f) wait_bar_pane_cp07

0x12b0,	// (0x0007280a) blid_firmament_pane_ParamLimits

0x12f3,	// (0x0007284d) popup_blid_sat_info2_window_g1

0x1317,	// (0x00072871) popup_blid_sat_info2_window_t3

0x1325,	// (0x0007287f) popup_blid_sat_info2_window_t4

0x1333,	// (0x0007288d) popup_blid_sat_info2_window_t5

0x1341,	// (0x0007289b) popup_blid_sat_info2_window_t6

0x1351,	// (0x000728ab) popup_blid_sat_info2_window_t7

0x135f,	// (0x000728b9) popup_blid_sat_info2_window_t8

0x136d,	// (0x000728c7) popup_blid_sat_info2_window_t9

0x137b,	// (0x000728d5) popup_blid_sat_info2_window_t10

0x1442,	// (0x0007299c) aid_firma_cardinal_ParamLimits

0x1456,	// (0x000729b0) blid_firmament_pane_t1_ParamLimits

0x146d,	// (0x000729c7) blid_firmament_pane_t2_ParamLimits

0x1484,	// (0x000729de) blid_firmament_pane_t3_ParamLimits

0x149b,	// (0x000729f5) blid_firmament_pane_t4_ParamLimits

0xf610,	// (0x00080b6a) blid_firmament_pane_t_ParamLimits

0x14b2,	// (0x00072a0c) blid_sat_info_pane_ParamLimits

0xd532,	// (0x0007ea8c) main_cam_set_pane_ParamLimits

0x7af8,	// (0x00079052) aid_size_cell_colour_35_ParamLimits

0x7b12,	// (0x0007906c) aid_size_cell_colour_112_ParamLimits

0x7b29,	// (0x00079083) aid_size_cell_effect_ParamLimits

0xd532,	// (0x0007ea8c) bg_tb_trans_pane_cp02_ParamLimits

0xf012,	// (0x0008056c) heading_imed_pane_ParamLimits

0x7b43,	// (0x0007909d) listscroll_imed_pane_ParamLimits

0x079b,	// (0x00071cf5) popup_call2_audio_first_window_g5_ParamLimits

0x079b,	// (0x00071cf5) popup_call2_audio_first_window_g5

0x812b,	// (0x00079685) aid_size_touch_image3_arrow_left_ParamLimits

0x812b,	// (0x00079685) aid_size_touch_image3_arrow_left

0x8141,	// (0x0007969b) aid_size_touch_image3_arrow_right_ParamLimits

0x8141,	// (0x0007969b) aid_size_touch_image3_arrow_right

0x94d0,	// (0x0007aa2a) vid4_progress_pane_t3

0x7cbe,	// (0x00079218) main_hwr_training_symbol_option_pane_ParamLimits

0x7cbe,	// (0x00079218) main_hwr_training_symbol_option_pane

0x1aff,	// (0x00073059) popup_hwr_training_preview_window_ParamLimits

0x1aff,	// (0x00073059) popup_hwr_training_preview_window

0x7d1f,	// (0x00079279) hwr_training_navi_pane_g5_ParamLimits

0x7d1f,	// (0x00079279) hwr_training_navi_pane_g5

0x1cb4,	// (0x0007320e) popup_char_count_window

0xce5f,	// (0x0007e3b9) bg_popup_sub_pane_cp20_ParamLimits

0x8fa8,	// (0x0007a502) list_vitu2_match_list_pane_ParamLimits

0x8fb4,	// (0x0007a50e) vitu2_page_scroll_pane_ParamLimits

0x8fb4,	// (0x0007a50e) vitu2_page_scroll_pane

0xc278,	// (0x0007d7d2) list_single_hwr_training_symbol_option_pane_ParamLimits

0xc278,	// (0x0007d7d2) list_single_hwr_training_symbol_option_pane

0xc28b,	// (0x0007d7e5) list_single_hwr_training_symbol_option_pane_g1

0xc293,	// (0x0007d7ed) list_single_hwr_training_symbol_option_pane_t1

0xc2a1,	// (0x0007d7fb) bg_button_pane_cp023

0xc2aa,	// (0x0007d804) bg_button_pane_cp024

0xc2dd,	// (0x0007d837) vitu2_page_scroll_pane_g1

0xc2e5,	// (0x0007d83f) vitu2_page_scroll_pane_g2

0x0001,

0xf9ef,	// (0x00080f49) vitu2_page_scroll_pane_g

0xc2ed,	// (0x0007d847) vitu2_page_scroll_pane_t1

0xc242,	// (0x0007d79c) popup_char_count_window_g1

0xc2fc,	// (0x0007d856) popup_char_count_window_g2

0xc24b,	// (0x0007d7a5) popup_char_count_window_g3

0x0002,

0xf9f4,	// (0x00080f4e) popup_char_count_window_g

0xc305,	// (0x0007d85f) popup_char_count_window_t1

0xce55,	// (0x0007e3af) main_vded2_pane

0x1953,	// (0x00072ead) aid_size_cell_imed_line

0x195d,	// (0x00072eb7) grid_imed_line_width_pane

0x863f,	// (0x00079b99) vid4_indicators_pane_g4

0xc313,	// (0x0007d86d) cell_imed_line_width_pane_ParamLimits

0xc313,	// (0x0007d86d) cell_imed_line_width_pane

0xc329,	// (0x0007d883) cell_imed_line_width_pane_g1

0xc332,	// (0x0007d88c) cell_imed_line_width_pane_g2

0x0001,

0xf9fb,	// (0x00080f55) cell_imed_line_width_pane_g

0x9500,	// (0x0007aa5a) main_vded2_pane_g1_ParamLimits

0x9500,	// (0x0007aa5a) main_vded2_pane_g1

0x950f,	// (0x0007aa69) main_vded2_pane_g2_ParamLimits

0x950f,	// (0x0007aa69) main_vded2_pane_g2

0x0001,

0xfa00,	// (0x00080f5a) main_vded2_pane_g_ParamLimits

0xfa00,	// (0x00080f5a) main_vded2_pane_g

0x951d,	// (0x0007aa77) vded2_slider_pane_ParamLimits

0x951d,	// (0x0007aa77) vded2_slider_pane

0x952a,	// (0x0007aa84) aid_size_touch_vded2_end

0x9534,	// (0x0007aa8e) aid_size_touch_vded2_playhead

0xc33a,	// (0x0007d894) aid_size_touch_vded2_start

0xc342,	// (0x0007d89c) vded2_slider_bg_pane

0xc34b,	// (0x0007d8a5) vded2_slider_pane_g1

0xc354,	// (0x0007d8ae) vded2_slider_pane_g2

0x953c,	// (0x0007aa96) vded2_slider_pane_g3

0x0002,

0xfa05,	// (0x00080f5f) vded2_slider_pane_g

0xc254,	// (0x0007d7ae) vded2_slider_bg_pane_g1

0xc25d,	// (0x0007d7b7) vded2_slider_bg_pane_g2

0xc266,	// (0x0007d7c0) vded2_slider_bg_pane_g3

0x0002,

0xf6db,	// (0x00080c35) vded2_slider_bg_pane_g

0x6510,	// (0x00077a6a) aid_postcard_touch_down_pane_ParamLimits

0x6510,	// (0x00077a6a) aid_postcard_touch_down_pane

0x6520,	// (0x00077a7a) aid_postcard_touch_up_pane_ParamLimits

0x6520,	// (0x00077a7a) aid_postcard_touch_up_pane

0xce55,	// (0x0007e3af) main_blid2_pane

0x6bf3,	// (0x0007814d) popup_blid2_search_window

0xce55,	// (0x0007e3af) blid2_gps_pane

0xce55,	// (0x0007e3af) blid2_navig_pane

0xce55,	// (0x0007e3af) blid2_search_pane

0xce55,	// (0x0007e3af) blid2_tripm_pane

0x9545,	// (0x0007aa9f) blid2_search_pane_g1_ParamLimits

0x9545,	// (0x0007aa9f) blid2_search_pane_g1

0x9551,	// (0x0007aaab) blid2_search_pane_t1_ParamLimits

0x9551,	// (0x0007aaab) blid2_search_pane_t1

0x9563,	// (0x0007aabd) aid_size_cell_blid2_gps_ParamLimits

0x9563,	// (0x0007aabd) aid_size_cell_blid2_gps

0x9573,	// (0x0007aacd) blid2_gps_pane_g1_ParamLimits

0x9573,	// (0x0007aacd) blid2_gps_pane_g1

0x957f,	// (0x0007aad9) grid_blid2_satellite_pane_ParamLimits

0x957f,	// (0x0007aad9) grid_blid2_satellite_pane

0x958d,	// (0x0007aae7) blid2_navig_pane_g1_ParamLimits

0x958d,	// (0x0007aae7) blid2_navig_pane_g1

0x9599,	// (0x0007aaf3) blid2_navig_pane_t1_ParamLimits

0x9599,	// (0x0007aaf3) blid2_navig_pane_t1

0x95ab,	// (0x0007ab05) blid2_navig_pane_t2_ParamLimits

0x95ab,	// (0x0007ab05) blid2_navig_pane_t2

0x0001,

0xfa0c,	// (0x00080f66) blid2_navig_pane_t_ParamLimits

0xfa0c,	// (0x00080f66) blid2_navig_pane_t

0x95bd,	// (0x0007ab17) blid2_navig_ring_pane_ParamLimits

0x95bd,	// (0x0007ab17) blid2_navig_ring_pane

0x95cd,	// (0x0007ab27) blid2_speed_pane_ParamLimits

0x95cd,	// (0x0007ab27) blid2_speed_pane

0x95d9,	// (0x0007ab33) blid2_tripm_pane_g1_ParamLimits

0x95d9,	// (0x0007ab33) blid2_tripm_pane_g1

0x95e9,	// (0x0007ab43) blid2_tripm_pane_g2_ParamLimits

0x95e9,	// (0x0007ab43) blid2_tripm_pane_g2

0x95f5,	// (0x0007ab4f) blid2_tripm_pane_g3_ParamLimits

0x95f5,	// (0x0007ab4f) blid2_tripm_pane_g3

0x9601,	// (0x0007ab5b) blid2_tripm_pane_g4_ParamLimits

0x9601,	// (0x0007ab5b) blid2_tripm_pane_g4

0x960d,	// (0x0007ab67) blid2_tripm_pane_g5_ParamLimits

0x960d,	// (0x0007ab67) blid2_tripm_pane_g5

0x0005,

0xfa11,	// (0x00080f6b) blid2_tripm_pane_g_ParamLimits

0xfa11,	// (0x00080f6b) blid2_tripm_pane_g

0x9629,	// (0x0007ab83) blid2_tripm_pane_t1_ParamLimits

0x9629,	// (0x0007ab83) blid2_tripm_pane_t1

0x963b,	// (0x0007ab95) blid2_tripm_pane_t2_ParamLimits

0x963b,	// (0x0007ab95) blid2_tripm_pane_t2

0x964d,	// (0x0007aba7) blid2_tripm_pane_t3_ParamLimits

0x964d,	// (0x0007aba7) blid2_tripm_pane_t3

0x0003,

0xfa1e,	// (0x00080f78) blid2_tripm_pane_t_ParamLimits

0xfa1e,	// (0x00080f78) blid2_tripm_pane_t

0x967f,	// (0x0007abd9) cell_blid2_satellite_pane_ParamLimits

0x967f,	// (0x0007abd9) cell_blid2_satellite_pane

0x969d,	// (0x0007abf7) cell_blid2_satellite_pane_g1

0xc35c,	// (0x0007d8b6) cell_blid2_satellite_pane_t1

0xe23d,	// (0x0007f797) blid2_speed_pane_g1

0xc36a,	// (0x0007d8c4) blid2_speed_pane_t1

0xc378,	// (0x0007d8d2) blid2_speed_pane_t2

0x0001,

0xfa27,	// (0x00080f81) blid2_speed_pane_t

0xe23d,	// (0x0007f797) blid2_navig_ring_pane_g1

0x96a6,	// (0x0007ac00) blid2_navig_ring_pane_g2

0x96ae,	// (0x0007ac08) blid2_navig_ring_pane_g3

0x96b6,	// (0x0007ac10) blid2_navig_ring_pane_g4

0x96be,	// (0x0007ac18) blid2_navig_ring_pane_g5

0x0004,

0xfa2c,	// (0x00080f86) blid2_navig_ring_pane_g

0xce55,	// (0x0007e3af) bg_popup_window_pane_cp011

0xc386,	// (0x0007d8e0) popup_blid2_search_window_g1

0xc38e,	// (0x0007d8e8) popup_blid2_search_window_t1

0xc39c,	// (0x0007d8f6) popup_blid2_search_window_t2

0x0001,

0xfa37,	// (0x00080f91) popup_blid2_search_window_t

0xe554,	// (0x0007faae) main_browser_pane_g1

0xe29b,	// (0x0007f7f5) main_browser_pane_ParamLimits

0xd532,	// (0x0007ea8c) bg_button_pane_cp011_ParamLimits

0x88a5,	// (0x00079dff) cell_vitu2_function_pane_g1_ParamLimits

0xee21,	// (0x0008037b) bg_popup_sub_pane_cp22_ParamLimits

0x334f,	// (0x000748a9) input_focus_pane_cp08_ParamLimits

0x913e,	// (0x0007a698) popup_vitu2_query_button_pane_ParamLimits

0x913e,	// (0x0007a698) popup_vitu2_query_button_pane

0x336b,	// (0x000748c5) popup_vitu2_query_input_button_pane

0x1f5b,	// (0x000734b5) popup_vitu2_query_window_g1_ParamLimits

0x914d,	// (0x0007a6a7) popup_vitu2_query_window_g2_ParamLimits

0xf93f,	// (0x00080e99) popup_vitu2_query_window_g_ParamLimits

0xce55,	// (0x0007e3af) bg_button_pane_cp026

0x96c6,	// (0x0007ac20) popup_vitu2_query_input_button_pane_g1

0xce55,	// (0x0007e3af) bg_button_pane_cp025

0xc3aa,	// (0x0007d904) popup_vitu2_query_button_pane_t1

0x70b6,	// (0x00078610) main_mp3_pane_t6

0x70c6,	// (0x00078620) popup_slider_window_cp01

0x851a,	// (0x00079a74) cam4_battery_pane

0x85f8,	// (0x00079b52) cam4_battery_pane_cp02

0x9445,	// (0x0007a99f) cam4_battery_pane_cp01

0x9445,	// (0x0007a99f) cam4_battery_pane_cp03

0xe23d,	// (0x0007f797) cam4_battery_pane_g1

0xc3b8,	// (0x0007d912) cam4_battery_pane_g2

0x0001,

0xfa3c,	// (0x00080f96) cam4_battery_pane_g

0x1389,	// (0x000728e3) popup_blid_sat_info2_window_t11

0x60b2,	// (0x0007760c) aid_size_touch_mv_arrow_left_ParamLimits

0x60dd,	// (0x00077637) aid_size_touch_mv_arrow_right_ParamLimits

0xecbc,	// (0x00080216) navi_pane_g1_ParamLimits

0x611c,	// (0x00077676) navi_pane_g2_ParamLimits

0x614a,	// (0x000776a4) navi_pane_g3_ParamLimits

0xf334,	// (0x0008088e) navi_pane_g_ParamLimits

0x61a4,	// (0x000776fe) navi_pane_mv_t1_ParamLimits

0x7b4f,	// (0x000790a9) grid_imed_effect_pane_ParamLimits

0x4c46,	// (0x000761a0) aid_placing_vt_slider_lsc

0xe490,	// (0x0007f9ea) aid_placing_vt_slider_prt

0xd532,	// (0x0007ea8c) bg_tb_trans_pane_cp01_ParamLimits

0x15f1,	// (0x00072b4b) popup_image_details_window_g1_ParamLimits

0x1604,	// (0x00072b5e) popup_image_details_window_g2_ParamLimits

0x1619,	// (0x00072b73) popup_image_details_window_g3_ParamLimits

0x1619,	// (0x00072b73) popup_image_details_window_g3

0xf650,	// (0x00080baa) popup_image_details_window_g_ParamLimits

0x162d,	// (0x00072b87) popup_image_details_window_t1_ParamLimits

0x163f,	// (0x00072b99) popup_image_details_window_t2_ParamLimits

0x1658,	// (0x00072bb2) popup_image_details_window_t3_ParamLimits

0x166c,	// (0x00072bc6) popup_image_details_window_t4_ParamLimits

0x1687,	// (0x00072be1) popup_image_details_window_t5_ParamLimits

0xf657,	// (0x00080bb1) popup_image_details_window_t_ParamLimits

0x9371,	// (0x0007a8cb) cl_header_name_pane_ParamLimits

0x9371,	// (0x0007a8cb) cl_header_name_pane

0x96ce,	// (0x0007ac28) cl_header_name_pane_t1_ParamLimits

0x96ce,	// (0x0007ac28) cl_header_name_pane_t1

0x96e5,	// (0x0007ac3f) cl_header_name_pane_t2_ParamLimits

0x96e5,	// (0x0007ac3f) cl_header_name_pane_t2

0x970f,	// (0x0007ac69) cl_header_name_pane_t3_ParamLimits

0x970f,	// (0x0007ac69) cl_header_name_pane_t3

0x0002,

0xfa41,	// (0x00080f9b) cl_header_name_pane_t_ParamLimits

0xfa41,	// (0x00080f9b) cl_header_name_pane_t

0x6175,	// (0x000776cf) navi_pane_mv_g2_ParamLimits

0x1c7f,	// (0x000731d9) field_vitu2_entry_pane_g1_ParamLimits

0x1c8b,	// (0x000731e5) field_vitu2_entry_pane_g2_ParamLimits

0xf01e,	// (0x00080578) field_vitu2_entry_pane_g3_ParamLimits

0xf01e,	// (0x00080578) field_vitu2_entry_pane_g3

0xf848,	// (0x00080da2) field_vitu2_entry_pane_g_ParamLimits

0x8833,	// (0x00079d8d) cell_vitu2_itu_pane_g1_ParamLimits

0x884b,	// (0x00079da5) cell_vitu2_itu_pane_g2_ParamLimits

0x884b,	// (0x00079da5) cell_vitu2_itu_pane_g2

0x0001,

0xf854,	// (0x00080dae) cell_vitu2_itu_pane_g_ParamLimits

0xf854,	// (0x00080dae) cell_vitu2_itu_pane_g

0xd532,	// (0x0007ea8c) bg_vkb2_func_pane_cp05_ParamLimits

0xd532,	// (0x0007ea8c) bg_vkb2_func_pane_cp05

0xd532,	// (0x0007ea8c) bg_vkb2_func_pane_cp03

0xd532,	// (0x0007ea8c) bg_vkb2_func_pane_cp04

0xd532,	// (0x0007ea8c) bg_vkb2_func_pane_cp10_ParamLimits

0xd532,	// (0x0007ea8c) bg_vkb2_func_pane_cp10

0x351e,	// (0x00074a78) bg_vkb2_func_pane_cp08

0x9126,	// (0x0007a680) bg_vkb2_func_pane_cp06

0x9329,	// (0x0007a883) bg_vkb2_func_pane_cp07

0xc2b3,	// (0x0007d80d) bg_vkb2_func_pane_cp11_ParamLimits

0xc2b3,	// (0x0007d80d) bg_vkb2_func_pane_cp11

0xc2c8,	// (0x0007d822) bg_vkb2_func_pane_cp12_ParamLimits

0xc2c8,	// (0x0007d822) bg_vkb2_func_pane_cp12

0xce55,	// (0x0007e3af) bg_vkb2_func_pane_cp09

0x1cc6,	// (0x00073220) bg_vkb2_func_pane_g1

0xe665,	// (0x0007fbbf) bg_vkb2_func_pane_g2

0x1cce,	// (0x00073228) bg_vkb2_func_pane_g3

0x1cd6,	// (0x00073230) bg_vkb2_func_pane_g4

0x1f20,	// (0x0007347a) bg_vkb2_func_pane_g5

0x1cee,	// (0x00073248) bg_vkb2_func_pane_g6

0x1cf6,	// (0x00073250) bg_vkb2_func_pane_g7

0x1ce6,	// (0x00073240) bg_vkb2_func_pane_g8

0xe645,	// (0x0007fb9f) bg_vkb2_func_pane_g9

0x0008,

0xfa48,	// (0x00080fa2) bg_vkb2_func_pane_g

0x961b,	// (0x0007ab75) blid2_tripm_pane_g6_ParamLimits

0x961b,	// (0x0007ab75) blid2_tripm_pane_g6

0x1bb9,	// (0x00073113) mp4_progress_pane_g1

0x9673,	// (0x0007abcd) blid2_tripm_values_pane_ParamLimits

0x9673,	// (0x0007abcd) blid2_tripm_values_pane

0x9734,	// (0x0007ac8e) blid2_tripm_values_pane_t1

0x9742,	// (0x0007ac9c) blid2_tripm_values_pane_t2

0xc3c2,	// (0x0007d91c) blid2_tripm_values_pane_t3

0x9750,	// (0x0007acaa) blid2_tripm_values_pane_t4

0x975e,	// (0x0007acb8) blid2_tripm_values_pane_t5

0x976c,	// (0x0007acc6) blid2_tripm_values_pane_t6

0xc3d0,	// (0x0007d92a) blid2_tripm_values_pane_t7

0x977a,	// (0x0007acd4) blid2_tripm_values_pane_t8

0x9788,	// (0x0007ace2) blid2_tripm_values_pane_t9

0x0008,

0xfa5b,	// (0x00080fb5) blid2_tripm_values_pane_t

0x4c84,	// (0x000761de) call_video_pane_t1_ParamLimits

0x4ca1,	// (0x000761fb) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x00080737) call_video_pane_t_ParamLimits

0x3137,	// (0x00074691) msg_header_pane_g1_ParamLimits

0xeecc,	// (0x00080426) msg_header_pane_g2_ParamLimits

0xeecc,	// (0x00080426) msg_header_pane_g2

0x0001,

0xf3d2,	// (0x0008092c) msg_header_pane_g_ParamLimits

0xf3d2,	// (0x0008092c) msg_header_pane_g

0xe29b,	// (0x0007f7f5) main_clock2_pane_ParamLimits

0x78c8,	// (0x00078e22) grid_clock2_toolbar_pane_ParamLimits

0x78c8,	// (0x00078e22) grid_clock2_toolbar_pane

0x78c8,	// (0x00078e22) listscroll_clock2_pane_ParamLimits

0x78c8,	// (0x00078e22) listscroll_clock2_pane

0x7977,	// (0x00078ed1) main_clock2_pane_t3_ParamLimits

0x7977,	// (0x00078ed1) main_clock2_pane_t3

0x7989,	// (0x00078ee3) main_clock2_pane_t4_ParamLimits

0x7989,	// (0x00078ee3) main_clock2_pane_t4

0xc3de,	// (0x0007d938) cell_clock2_toolbar_pane

0xc3e6,	// (0x0007d940) cell_clock2_toolbar_pane_cp01

0xc3e6,	// (0x0007d940) cell_clock2_toolbar_pane_cp02

0xc3ee,	// (0x0007d948) cell_clock2_toolbar_pane_cp03

0xc3f6,	// (0x0007d950) list_clock2_pane

0xec22,	// (0x0008017c) scroll_pane_cp10

0xc3fe,	// (0x0007d958) list_single_clock2_pane_ParamLimits

0xc3fe,	// (0x0007d958) list_single_clock2_pane

0xe439,	// (0x0007f993) list_highlight_pane_cp08

0xc40b,	// (0x0007d965) list_single_clock2_pane_t1

0xc419,	// (0x0007d973) list_single_clock2_pane_t2

0x0001,

0xfa6e,	// (0x00080fc8) list_single_clock2_pane_t

0xce55,	// (0x0007e3af) bg_button_pane_cp10

0xc427,	// (0x0007d981) cell_clock2_toolbar_pane_g1

0x6472,	// (0x000779cc) aid_main_viewer_pane_g1_ParamLimits

0x6472,	// (0x000779cc) aid_main_viewer_pane_g1

0x647e,	// (0x000779d8) aid_main_viewer_pane_g2_ParamLimits

0x647e,	// (0x000779d8) aid_main_viewer_pane_g2

0x648a,	// (0x000779e4) aid_main_viewer_pane_g3_ParamLimits

0x648a,	// (0x000779e4) aid_main_viewer_pane_g3

0x649b,	// (0x000779f5) aid_main_viewer_pane_g4_ParamLimits

0x649b,	// (0x000779f5) aid_main_viewer_pane_g4

0x0003,

0xf3e3,	// (0x0008093d) aid_main_viewer_pane_g_ParamLimits

0xf3e3,	// (0x0008093d) aid_main_viewer_pane_g

0x6bcb,	// (0x00078125) main_calc_pane_ParamLimits

0x6bd8,	// (0x00078132) main_dialer2_pane_ParamLimits

0xce55,	// (0x0007e3af) main_cam6_pane

0xce55,	// (0x0007e3af) main_vid6_pane

0x78d4,	// (0x00078e2e) listscroll_gen_pane_cp06_ParamLimits

0x78d4,	// (0x00078e2e) listscroll_gen_pane_cp06

0x799b,	// (0x00078ef5) main_clock2_pane_t5_ParamLimits

0x799b,	// (0x00078ef5) main_clock2_pane_t5

0x79e8,	// (0x00078f42) aid_call2_pane_cp10_ParamLimits

0x79fa,	// (0x00078f54) aid_call_pane_cp10_ParamLimits

0xec91,	// (0x000801eb) popup_clock_analogue_window_cp10_g1_ParamLimits

0xec91,	// (0x000801eb) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7a0c,	// (0x00078f66) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7a0c,	// (0x00078f66) popup_clock_analogue_window_cp10_g4_ParamLimits

0xec91,	// (0x000801eb) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf70c,	// (0x00080c66) popup_clock_analogue_window_cp10_g_ParamLimits

0x7a22,	// (0x00078f7c) popup_clock_analogue_window_cp10_t1_ParamLimits

0x1c2a,	// (0x00073184) cell_dialer2_keypad_pane_g2_ParamLimits

0x1c2a,	// (0x00073184) cell_dialer2_keypad_pane_g2

0x0001,

0xf7e7,	// (0x00080d41) cell_dialer2_keypad_pane_g_ParamLimits

0xf7e7,	// (0x00080d41) cell_dialer2_keypad_pane_g

0xe247,	// (0x0007f7a1) cell_dialer2_keypad_pane_t1

0x8b79,	// (0x0007a0d3) main_cset_text2_pane_ParamLimits

0x8b79,	// (0x0007a0d3) main_cset_text2_pane

0x2147,	// (0x000736a1) area_vitu2_query_pane_g1_ParamLimits

0x3438,	// (0x00074992) area_vitu2_query_pane_g2_ParamLimits

0xf992,	// (0x00080eec) area_vitu2_query_pane_g_ParamLimits

0x34e9,	// (0x00074a43) area_vitu2_query_pane_t7_ParamLimits

0x34e9,	// (0x00074a43) area_vitu2_query_pane_t7

0x9126,	// (0x0007a680) bg_button_pane_cp018_ParamLimits

0x9329,	// (0x0007a883) bg_button_pane_cp021_ParamLimits

0x350d,	// (0x00074a67) bg_button_pane_cp022_ParamLimits

0x351e,	// (0x00074a78) bg_vkb2_func_pane_cp08_ParamLimits

0x9126,	// (0x0007a680) bg_vkb2_func_pane_cp06_ParamLimits

0x9329,	// (0x0007a883) bg_vkb2_func_pane_cp07_ParamLimits

0x3530,	// (0x00074a8a) input_focus_pane_cp09_ParamLimits

0x9796,	// (0x0007acf0) cam6_autofocus_pane_ParamLimits

0x9796,	// (0x0007acf0) cam6_autofocus_pane

0x97b8,	// (0x0007ad12) cam6_image_uncrop_pane_ParamLimits

0x97b8,	// (0x0007ad12) cam6_image_uncrop_pane

0x97ee,	// (0x0007ad48) cam6_indi_pane_ParamLimits

0x97ee,	// (0x0007ad48) cam6_indi_pane

0x9808,	// (0x0007ad62) cam6_mode_pane_ParamLimits

0x9808,	// (0x0007ad62) cam6_mode_pane

0x981c,	// (0x0007ad76) cam6_timer_pane_ParamLimits

0x981c,	// (0x0007ad76) cam6_timer_pane

0x9830,	// (0x0007ad8a) cam6_zoom_pane_ParamLimits

0x9830,	// (0x0007ad8a) cam6_zoom_pane

0x984c,	// (0x0007ada6) cam6_mode_pane_g1_ParamLimits

0x984c,	// (0x0007ada6) cam6_mode_pane_g1

0x9858,	// (0x0007adb2) cam6_mode_pane_g2_ParamLimits

0x9858,	// (0x0007adb2) cam6_mode_pane_g2

0x9864,	// (0x0007adbe) cam6_mode_pane_g3_ParamLimits

0x9864,	// (0x0007adbe) cam6_mode_pane_g3

0x9870,	// (0x0007adca) cam6_mode_pane_g4_ParamLimits

0x9870,	// (0x0007adca) cam6_mode_pane_g4

0x0003,

0xfa73,	// (0x00080fcd) cam6_mode_pane_g_ParamLimits

0xfa73,	// (0x00080fcd) cam6_mode_pane_g

0x1b6b,	// (0x000730c5) bg_tb_trans_pane_cp08_ParamLimits

0x1b6b,	// (0x000730c5) bg_tb_trans_pane_cp08

0xc42f,	// (0x0007d989) cam6_battery_pane_ParamLimits

0xc42f,	// (0x0007d989) cam6_battery_pane

0xc445,	// (0x0007d99f) cam6_indi_pane_g1_ParamLimits

0xc445,	// (0x0007d99f) cam6_indi_pane_g1

0xc457,	// (0x0007d9b1) cam6_indi_pane_g2_ParamLimits

0xc457,	// (0x0007d9b1) cam6_indi_pane_g2

0xc469,	// (0x0007d9c3) cam6_indi_pane_g3_ParamLimits

0xc469,	// (0x0007d9c3) cam6_indi_pane_g3

0x0002,

0xfa7c,	// (0x00080fd6) cam6_indi_pane_g_ParamLimits

0xfa7c,	// (0x00080fd6) cam6_indi_pane_g

0xc47b,	// (0x0007d9d5) cam6_indi_pane_t1_ParamLimits

0xc47b,	// (0x0007d9d5) cam6_indi_pane_t1

0x8674,	// (0x00079bce) cam6_autofocus_pane_g1

0x867c,	// (0x00079bd6) cam6_autofocus_pane_g2

0x8684,	// (0x00079bde) cam6_autofocus_pane_g3

0x868c,	// (0x00079be6) cam6_autofocus_pane_g4

0x0003,

0xfa83,	// (0x00080fdd) cam6_autofocus_pane_g

0xc4a1,	// (0x0007d9fb) cam6_timer_pane_g1

0xc4a9,	// (0x0007da03) cam6_timer_pane_t1

0xc4b7,	// (0x0007da11) cam6_zoom_cont_pane

0xc4bf,	// (0x0007da19) cam6_zoom_pane_g1

0xc4c8,	// (0x0007da22) cam6_zoom_pane_g2

0x987c,	// (0x0007add6) cam6_zoom_pane_g3

0x0002,

0xfa8c,	// (0x00080fe6) cam6_zoom_pane_g

0xe23d,	// (0x0007f797) cam6_battery_pane_g1

0xe23d,	// (0x0007f797) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x00080609) cam6_battery_pane_g

0xc4bf,	// (0x0007da19) cam6_zoom_cont_pane_g1

0xc4c8,	// (0x0007da22) cam6_zoom_cont_pane_g2

0xc4d1,	// (0x0007da2b) cam6_zoom_cont_pane_g3

0x0002,

0xfa93,	// (0x00080fed) cam6_zoom_cont_pane_g

0x989a,	// (0x0007adf4) cam6_mode_pane_cp_ParamLimits

0x989a,	// (0x0007adf4) cam6_mode_pane_cp

0x98ae,	// (0x0007ae08) cam6_zoom_pane_cp_ParamLimits

0x98ae,	// (0x0007ae08) cam6_zoom_pane_cp

0x98ca,	// (0x0007ae24) vid6_image_uncrop_cif_pane_ParamLimits

0x98ca,	// (0x0007ae24) vid6_image_uncrop_cif_pane

0x98f6,	// (0x0007ae50) vid6_image_uncrop_nhd_pane_ParamLimits

0x98f6,	// (0x0007ae50) vid6_image_uncrop_nhd_pane

0x9915,	// (0x0007ae6f) vid6_image_uncrop_vga_pane_ParamLimits

0x9915,	// (0x0007ae6f) vid6_image_uncrop_vga_pane

0x9934,	// (0x0007ae8e) vid6_image_uncrop_wvga_pane_ParamLimits

0x9934,	// (0x0007ae8e) vid6_image_uncrop_wvga_pane

0x9953,	// (0x0007aead) vid6_indi_pane_ParamLimits

0x9953,	// (0x0007aead) vid6_indi_pane

0x1b6b,	// (0x000730c5) bg_tb_trans_pane_cp09_ParamLimits

0x1b6b,	// (0x000730c5) bg_tb_trans_pane_cp09

0xc4e9,	// (0x0007da43) cam6_battery_pane_cp_ParamLimits

0xc4e9,	// (0x0007da43) cam6_battery_pane_cp

0xc4f5,	// (0x0007da4f) vid6_indi_pane_g1_ParamLimits

0xc4f5,	// (0x0007da4f) vid6_indi_pane_g1

0xc507,	// (0x0007da61) vid6_indi_pane_g2_ParamLimits

0xc507,	// (0x0007da61) vid6_indi_pane_g2

0xc519,	// (0x0007da73) vid6_indi_pane_g3_ParamLimits

0xc519,	// (0x0007da73) vid6_indi_pane_g3

0xc530,	// (0x0007da8a) vid6_indi_pane_g4_ParamLimits

0xc530,	// (0x0007da8a) vid6_indi_pane_g4

0xc547,	// (0x0007daa1) vid6_indi_pane_g5_ParamLimits

0xc547,	// (0x0007daa1) vid6_indi_pane_g5

0x0004,

0xfa9a,	// (0x00080ff4) vid6_indi_pane_g_ParamLimits

0xfa9a,	// (0x00080ff4) vid6_indi_pane_g

0xc561,	// (0x0007dabb) vid6_indi_pane_t1_ParamLimits

0xc561,	// (0x0007dabb) vid6_indi_pane_t1

0xc577,	// (0x0007dad1) vid6_indi_pane_t2_ParamLimits

0xc577,	// (0x0007dad1) vid6_indi_pane_t2

0xc59f,	// (0x0007daf9) vid6_indi_pane_t3_ParamLimits

0xc59f,	// (0x0007daf9) vid6_indi_pane_t3

0xc5c7,	// (0x0007db21) vid6_indi_pane_t4_ParamLimits

0xc5c7,	// (0x0007db21) vid6_indi_pane_t4

0x0003,

0xfaa5,	// (0x00080fff) vid6_indi_pane_t_ParamLimits

0xfaa5,	// (0x00080fff) vid6_indi_pane_t

0xc5eb,	// (0x0007db45) wait_bar_pane_cp08

0x9978,	// (0x0007aed2) main_cset_text2_pane_t1_ParamLimits

0x9978,	// (0x0007aed2) main_cset_text2_pane_t1

0x9885,	// (0x0007addf) listscroll_gen_pane_cp06_t1_ParamLimits

0x9885,	// (0x0007addf) listscroll_gen_pane_cp06_t1

0xce55,	// (0x0007e3af) main_cam6_set_pane

0xd58b,	// (0x0007eae5) bg_tb_trans_pane_cp06_ParamLimits

0x8522,	// (0x00079a7c) cam4_indicators_pane_g1_ParamLimits

0x8533,	// (0x00079a8d) cam4_indicators_pane_g2_ParamLimits

0xf824,	// (0x00080d7e) cam4_indicators_pane_g_ParamLimits

0x854b,	// (0x00079aa5) cam4_indicators_pane_t1_ParamLimits

0xd532,	// (0x0007ea8c) bg_tb_trans_pane_cp07_ParamLimits

0x8602,	// (0x00079b5c) vid4_indicators_pane_g1_ParamLimits

0x8618,	// (0x00079b72) vid4_indicators_pane_g2_ParamLimits

0x862c,	// (0x00079b86) vid4_indicators_pane_g3_ParamLimits

0x863f,	// (0x00079b99) vid4_indicators_pane_g4_ParamLimits

0xf836,	// (0x00080d90) vid4_indicators_pane_g_ParamLimits

0x865d,	// (0x00079bb7) vid4_indicators_pane_t1_ParamLimits

0x944d,	// (0x0007a9a7) vid4_progress_pane_g1_ParamLimits

0x945d,	// (0x0007a9b7) vid4_progress_pane_g2_ParamLimits

0x946d,	// (0x0007a9c7) vid4_progress_pane_g3_ParamLimits

0x947f,	// (0x0007a9d9) vid4_progress_pane_g4_ParamLimits

0xf9dd,	// (0x00080f37) vid4_progress_pane_g_ParamLimits

0x949d,	// (0x0007a9f7) vid4_progress_pane_t1_ParamLimits

0x94b7,	// (0x0007aa11) vid4_progress_pane_t2_ParamLimits

0x94d0,	// (0x0007aa2a) vid4_progress_pane_t3_ParamLimits

0xf9e8,	// (0x00080f42) vid4_progress_pane_t_ParamLimits

0x94e5,	// (0x0007aa3f) wait_bar_pane_cp07_ParamLimits

0x999f,	// (0x0007aef9) main_cam6_set_pane_g2_ParamLimits

0x999f,	// (0x0007aef9) main_cam6_set_pane_g2

0x99ab,	// (0x0007af05) main_cset6_listscroll_pane_ParamLimits

0x99ab,	// (0x0007af05) main_cset6_listscroll_pane

0x99d8,	// (0x0007af32) main_cset6_slider_pane_ParamLimits

0x99d8,	// (0x0007af32) main_cset6_slider_pane

0x99e4,	// (0x0007af3e) main_cset6_text2_pane_ParamLimits

0x99e4,	// (0x0007af3e) main_cset6_text2_pane

0xc5fa,	// (0x0007db54) main_cset6_text_pane

0xc602,	// (0x0007db5c) main_cset_list_pane_copy1_ParamLimits

0xc602,	// (0x0007db5c) main_cset_list_pane_copy1

0xc612,	// (0x0007db6c) scroll_pane_cp028_copy1

0x99f7,	// (0x0007af51) cset_list_set_pane_copy1

0x9a07,	// (0x0007af61) aid_position_infowindow_above_copy1

0x9a0f,	// (0x0007af69) aid_position_infowindow_below_copy1

0x9a17,	// (0x0007af71) cset_list_set_pane_g1_copy1

0x3566,	// (0x00074ac0) cset_list_set_pane_g3_copy1_ParamLimits

0x3566,	// (0x00074ac0) cset_list_set_pane_g3_copy1

0x3575,	// (0x00074acf) cset_list_set_pane_t1_copy1_ParamLimits

0x3575,	// (0x00074acf) cset_list_set_pane_t1_copy1

0xd532,	// (0x0007ea8c) list_highlight_pane_cp021_copy1_ParamLimits

0xd532,	// (0x0007ea8c) list_highlight_pane_cp021_copy1

0xc61b,	// (0x0007db75) cset6_slider_pane_ParamLimits

0xc61b,	// (0x0007db75) cset6_slider_pane

0xc647,	// (0x0007dba1) main_cset6_slider_pane_g1_ParamLimits

0xc647,	// (0x0007dba1) main_cset6_slider_pane_g1

0x9a1f,	// (0x0007af79) main_cset6_slider_pane_g2_ParamLimits

0x9a1f,	// (0x0007af79) main_cset6_slider_pane_g2

0xc66f,	// (0x0007dbc9) main_cset6_slider_pane_g3_ParamLimits

0xc66f,	// (0x0007dbc9) main_cset6_slider_pane_g3

0x9a47,	// (0x0007afa1) main_cset6_slider_pane_g4_ParamLimits

0x9a47,	// (0x0007afa1) main_cset6_slider_pane_g4

0x9a53,	// (0x0007afad) main_cset6_slider_pane_g5_ParamLimits

0x9a53,	// (0x0007afad) main_cset6_slider_pane_g5

0x1e1f,	// (0x00073379) main_cset6_slider_pane_g7_ParamLimits

0x1e1f,	// (0x00073379) main_cset6_slider_pane_g7

0x1e2b,	// (0x00073385) main_cset6_slider_pane_g8_ParamLimits

0x1e2b,	// (0x00073385) main_cset6_slider_pane_g8

0x9a5f,	// (0x0007afb9) main_cset6_slider_pane_g9_ParamLimits

0x9a5f,	// (0x0007afb9) main_cset6_slider_pane_g9

0x9a6b,	// (0x0007afc5) main_cset6_slider_pane_g10_ParamLimits

0x9a6b,	// (0x0007afc5) main_cset6_slider_pane_g10

0x9a77,	// (0x0007afd1) main_cset6_slider_pane_g11_ParamLimits

0x9a77,	// (0x0007afd1) main_cset6_slider_pane_g11

0x9a83,	// (0x0007afdd) main_cset6_slider_pane_g12_ParamLimits

0x9a83,	// (0x0007afdd) main_cset6_slider_pane_g12

0x9a8f,	// (0x0007afe9) main_cset6_slider_pane_g13_ParamLimits

0x9a8f,	// (0x0007afe9) main_cset6_slider_pane_g13

0x9a9b,	// (0x0007aff5) main_cset6_slider_pane_g14_ParamLimits

0x9a9b,	// (0x0007aff5) main_cset6_slider_pane_g14

0x9aa7,	// (0x0007b001) main_cset6_slider_pane_g15_ParamLimits

0x9aa7,	// (0x0007b001) main_cset6_slider_pane_g15

0x9abf,	// (0x0007b019) main_cset6_slider_pane_g16_ParamLimits

0x9abf,	// (0x0007b019) main_cset6_slider_pane_g16

0x9acb,	// (0x0007b025) main_cset6_slider_pane_g17_ParamLimits

0x9acb,	// (0x0007b025) main_cset6_slider_pane_g17

0x0011,

0xfaae,	// (0x00081008) main_cset6_slider_pane_g_ParamLimits

0xfaae,	// (0x00081008) main_cset6_slider_pane_g

0xc67b,	// (0x0007dbd5) main_cset6_slider_pane_t1_ParamLimits

0xc67b,	// (0x0007dbd5) main_cset6_slider_pane_t1

0x9aef,	// (0x0007b049) main_cset6_slider_pane_t2_ParamLimits

0x9aef,	// (0x0007b049) main_cset6_slider_pane_t2

0x9b1a,	// (0x0007b074) main_cset6_slider_pane_t3_ParamLimits

0x9b1a,	// (0x0007b074) main_cset6_slider_pane_t3

0x9b45,	// (0x0007b09f) main_cset6_slider_pane_t4_ParamLimits

0x9b45,	// (0x0007b09f) main_cset6_slider_pane_t4

0x9b70,	// (0x0007b0ca) main_cset6_slider_pane_t5_ParamLimits

0x9b70,	// (0x0007b0ca) main_cset6_slider_pane_t5

0xc6bc,	// (0x0007dc16) main_cset6_slider_pane_t7_ParamLimits

0xc6bc,	// (0x0007dc16) main_cset6_slider_pane_t7

0x9b9b,	// (0x0007b0f5) main_cset6_slider_pane_t8_ParamLimits

0x9b9b,	// (0x0007b0f5) main_cset6_slider_pane_t8

0x9bbf,	// (0x0007b119) main_cset6_slider_pane_t9_ParamLimits

0x9bbf,	// (0x0007b119) main_cset6_slider_pane_t9

0x9be3,	// (0x0007b13d) main_cset6_slider_pane_t10_ParamLimits

0x9be3,	// (0x0007b13d) main_cset6_slider_pane_t10

0x9c07,	// (0x0007b161) main_cset6_slider_pane_t11_ParamLimits

0x9c07,	// (0x0007b161) main_cset6_slider_pane_t11

0xc6f2,	// (0x0007dc4c) main_cset6_slider_pane_t14_ParamLimits

0xc6f2,	// (0x0007dc4c) main_cset6_slider_pane_t14

0xc72b,	// (0x0007dc85) main_cset6_slider_pane_t15_ParamLimits

0xc72b,	// (0x0007dc85) main_cset6_slider_pane_t15

0x000b,

0xfad3,	// (0x0008102d) main_cset6_slider_pane_t_ParamLimits

0xfad3,	// (0x0008102d) main_cset6_slider_pane_t

0xc764,	// (0x0007dcbe) cset_slider_pane_g1_copy1

0xc76d,	// (0x0007dcc7) cset_slider_pane_g2_copy1

0xc776,	// (0x0007dcd0) cset_slider_pane_g3_copy1

0xce55,	// (0x0007e3af) bg_popup_sub_pane_cp011_copy1

0xc788,	// (0x0007dce2) main_cset_text_pane_g1_copy1

0x1f6f,	// (0x000734c9) main_cset_text_pane_t1_copy1

0x1f7d,	// (0x000734d7) main_cset_text_pane_t2_copy1

0x1f8b,	// (0x000734e5) main_cset_text_pane_t3_copy1

0x1f99,	// (0x000734f3) main_cset_text_pane_t4_copy1

0x1fa7,	// (0x00073501) main_cset_text_pane_t5_copy1

0xc790,	// (0x0007dcea) main_cset_text_pane_t6_copy1

0xc79e,	// (0x0007dcf8) main_cset_text_pane_t7_copy1

0x9c2b,	// (0x0007b185) main_cset_text2_pane_t1_copy1

0xd532,	// (0x0007ea8c) main_ncimui_pane

0x6c31,	// (0x0007818b) popup_query_ncimui_window_ParamLimits

0x6c31,	// (0x0007818b) popup_query_ncimui_window

0x720f,	// (0x00078769) field_cale_ev2_pane_g4_ParamLimits

0x720f,	// (0x00078769) field_cale_ev2_pane_g4

0x7deb,	// (0x00079345) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7deb,	// (0x00079345) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7be,	// (0x00080d18) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7be,	// (0x00080d18) cell_video_dialer_keypad_pane_g

0x7e03,	// (0x0007935d) cell_video_dialer_keypad_pane_t1

0xce55,	// (0x0007e3af) bg_popup_window_pane_cp012

0x0fee,	// (0x00072548) heading_pane_cp06

0xc7d6,	// (0x0007dd30) ncim_query_content_pane

0xce55,	// (0x0007e3af) bg_popup_heading_pane_cp01

0xc7de,	// (0x0007dd38) ncim_heading_pane_t1

0xc7ec,	// (0x0007dd46) ncim_indicator_popup_pane

0xc7fe,	// (0x0007dd58) ncim_query_button_pane

0xc814,	// (0x0007dd6e) ncim_query_content_pane_t1

0xc826,	// (0x0007dd80) ncim_query_content_pane_t2

0x0005,

0xfb17,	// (0x00081071) ncim_query_content_pane_t

0xc860,	// (0x0007ddba) ncim_query_list_pane

0xc872,	// (0x0007ddcc) ncim_query_popup_pane

0xc7ec,	// (0x0007dd46) ncim_indicator_popup_pane_ParamLimits

0x9d87,	// (0x0007b2e1) ncim_query_content_pane_g1_ParamLimits

0x9d87,	// (0x0007b2e1) ncim_query_content_pane_g1

0xc814,	// (0x0007dd6e) ncim_query_content_pane_t1_ParamLimits

0xc826,	// (0x0007dd80) ncim_query_content_pane_t2_ParamLimits

0x9d93,	// (0x0007b2ed) ncim_query_content_pane_t3_ParamLimits

0x9d93,	// (0x0007b2ed) ncim_query_content_pane_t3

0x9db0,	// (0x0007b30a) ncim_query_content_pane_t4_ParamLimits

0x9db0,	// (0x0007b30a) ncim_query_content_pane_t4

0x9dcd,	// (0x0007b327) ncim_query_content_pane_t5_ParamLimits

0x9dcd,	// (0x0007b327) ncim_query_content_pane_t5

0xc838,	// (0x0007dd92) ncim_query_content_pane_t6_ParamLimits

0xc838,	// (0x0007dd92) ncim_query_content_pane_t6

0xfb17,	// (0x00081071) ncim_query_content_pane_t_ParamLimits

0xc860,	// (0x0007ddba) ncim_query_list_pane_ParamLimits

0xc872,	// (0x0007ddcc) ncim_query_popup_pane_ParamLimits

0xc886,	// (0x0007dde0) wait_bar_pane_cp04

0xce55,	// (0x0007e3af) input_focus_pane_cp011

0xc88e,	// (0x0007dde8) ncim_query_popup_pane_t1

0xc89c,	// (0x0007ddf6) ncim_list_query_list_pane_ParamLimits

0xc89c,	// (0x0007ddf6) ncim_list_query_list_pane

0xce55,	// (0x0007e3af) bg_button_pane_cp027

0xc8af,	// (0x0007de09) ncim_query_button_pane_g1

0xce55,	// (0x0007e3af) list_highlight_pane_cp012

0xc8b9,	// (0x0007de13) ncim_list_query_list_pane_g1

0xc8c1,	// (0x0007de1b) ncim_list_query_list_pane_t1

0x853f,	// (0x00079a99) cam4_indicators_pane_g3_ParamLimits

0x853f,	// (0x00079a99) cam4_indicators_pane_g3

0x864b,	// (0x00079ba5) vid4_indicators_pane_g5_ParamLimits

0x864b,	// (0x00079ba5) vid4_indicators_pane_g5

0x948e,	// (0x0007a9e8) vid4_progress_pane_g5_ParamLimits

0x948e,	// (0x0007a9e8) vid4_progress_pane_g5

0x9c5d,	// (0x0007b1b7) main_ncimui_pane_g1

0x9cc9,	// (0x0007b223) ncimui_group_query_pane_ParamLimits

0x9cc9,	// (0x0007b223) ncimui_group_query_pane

0x9d23,	// (0x0007b27d) ncimui_list_pane_ParamLimits

0x9d23,	// (0x0007b27d) ncimui_list_pane

0x9d4a,	// (0x0007b2a4) ncimui_text_pane_ParamLimits

0x9d4a,	// (0x0007b2a4) ncimui_text_pane

0x9dea,	// (0x0007b344) ncimui_text_pane_t1_ParamLimits

0x9dea,	// (0x0007b344) ncimui_text_pane_t1

0xc8cf,	// (0x0007de29) ncimui_list_single_graphic_pane_ParamLimits

0xc8cf,	// (0x0007de29) ncimui_list_single_graphic_pane

0x9e09,	// (0x0007b363) ncimui_query_pane_ParamLimits

0x9e09,	// (0x0007b363) ncimui_query_pane

0xce55,	// (0x0007e3af) list_highlight_pane_cp013

0xc8df,	// (0x0007de39) ncim_list_query_list_pane_t1_copy1

0xc8b9,	// (0x0007de13) ncim_list_single_graphic_pane_g1

0x9e1c,	// (0x0007b376) ncim_query_button_pane_cp01

0x9e28,	// (0x0007b382) ncim_query_entry_pane_ParamLimits

0x9e28,	// (0x0007b382) ncim_query_entry_pane

0x9e3b,	// (0x0007b395) ncimui_query_pane_g1

0x9e47,	// (0x0007b3a1) ncimui_query_pane_t1_ParamLimits

0x9e47,	// (0x0007b3a1) ncimui_query_pane_t1

0xd532,	// (0x0007ea8c) input_focus_pane_cp012

0xc8ed,	// (0x0007de47) ncim_query_entry_pane_t1

0xe29b,	// (0x0007f7f5) main_im_pane_ParamLimits

0xd532,	// (0x0007ea8c) main_mobtv_pane_ParamLimits

0xd532,	// (0x0007ea8c) main_mobtv_pane

0x9ad7,	// (0x0007b031) main_cset6_slider_pane_g18_ParamLimits

0x9ad7,	// (0x0007b031) main_cset6_slider_pane_g18

0x9ae3,	// (0x0007b03d) main_cset6_slider_pane_g19_ParamLimits

0x9ae3,	// (0x0007b03d) main_cset6_slider_pane_g19

0xf01e,	// (0x00080578) bg_main_mobtv_pane_ParamLimits

0xf01e,	// (0x00080578) bg_main_mobtv_pane

0x9e60,	// (0x0007b3ba) main_mobtv_info_pane

0x9e6b,	// (0x0007b3c5) main_mobtv_loading_pane_ParamLimits

0x9e6b,	// (0x0007b3c5) main_mobtv_loading_pane

0xc8ff,	// (0x0007de59) main_mobtv_pg_channel_list_pane

0xc909,	// (0x0007de63) main_mobtv_pg_hdr_pane

0x9e78,	// (0x0007b3d2) main_mobtv_programe_curr_pane_ParamLimits

0x9e78,	// (0x0007b3d2) main_mobtv_programe_curr_pane

0x9e85,	// (0x0007b3df) main_mobtv_programe_next_pane_ParamLimits

0x9e85,	// (0x0007b3df) main_mobtv_programe_next_pane

0xc912,	// (0x0007de6c) popup_mobtv_noti_window

0xe23d,	// (0x0007f797) main_tv_pg_hdr_pane_g1

0xc91c,	// (0x0007de76) main_tv_pg_hdr_pane_g2

0xc924,	// (0x0007de7e) main_tv_pg_hdr_pane_g3

0xc92c,	// (0x0007de86) main_tv_pg_hdr_pane_g4

0xc934,	// (0x0007de8e) main_tv_pg_hdr_pane_g5

0xc93e,	// (0x0007de98) main_tv_pg_hdr_pane_g6

0xc948,	// (0x0007dea2) main_tv_pg_hdr_pane_g7

0xc952,	// (0x0007deac) main_tv_pg_hdr_pane_g8

0xc95c,	// (0x0007deb6) main_tv_pg_hdr_pane_g9

0xc966,	// (0x0007dec0) main_tv_pg_hdr_pane_g10

0xc970,	// (0x0007deca) main_tv_pg_hdr_pane_g11

0x000a,

0xfb24,	// (0x0008107e) main_tv_pg_hdr_pane_g

0xc97a,	// (0x0007ded4) main_tv_pg_hdr_pane_t1

0xc988,	// (0x0007dee2) main_tv_pg_hdr_pane_t2

0xc996,	// (0x0007def0) main_tv_pg_hdr_pane_t3

0xc9a6,	// (0x0007df00) main_tv_pg_hdr_pane_t4

0xc9b6,	// (0x0007df10) main_tv_pg_hdr_pane_t5

0x0004,

0xfb3b,	// (0x00081095) main_tv_pg_hdr_pane_t

0xc9c6,	// (0x0007df20) single_mobtv_pg_channel_pane_ParamLimits

0xc9c6,	// (0x0007df20) single_mobtv_pg_channel_pane

0xc9d8,	// (0x0007df32) single_mobtv_pg_channel_table_pane

0xc9e1,	// (0x0007df3b) single_mobtv_pg_channel_thumb_pane

0xc9ea,	// (0x0007df44) single_tv_pg_channel_pane_g1

0xc9f3,	// (0x0007df4d) single_tv_pg_channel_pane_g2

0x0001,

0xfb46,	// (0x000810a0) single_tv_pg_channel_pane_g

0xd58b,	// (0x0007eae5) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd58b,	// (0x0007eae5) bg_single_mobtv_pg_channel_thumb_pane

0xc9fc,	// (0x0007df56) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc9fc,	// (0x0007df56) single_mobtv_pg_channel_thumb_pane_g1

0xca0a,	// (0x0007df64) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xca0a,	// (0x0007df64) single_mobtv_pg_channel_thumb_pane_g2

0xca16,	// (0x0007df70) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xca16,	// (0x0007df70) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb4b,	// (0x000810a5) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb4b,	// (0x000810a5) single_mobtv_pg_channel_thumb_pane_g

0xca22,	// (0x0007df7c) single_mobtv_pg_channel_thumb_pane_t1

0xca30,	// (0x0007df8a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb52,	// (0x000810ac) single_mobtv_pg_channel_thumb_pane_t

0xe23d,	// (0x0007f797) bg_single_mobtv_pg_channel_table_pane_g1

0xe23d,	// (0x0007f797) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x00080609) bg_single_mobtv_pg_channel_table_pane_g

0xca3e,	// (0x0007df98) single_mobtv_pg_channel_table_pane_t1

0xca4c,	// (0x0007dfa6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb57,	// (0x000810b1) single_mobtv_pg_channel_table_pane_t

0x9e9a,	// (0x0007b3f4) main_mobtv_info_pane_g1_ParamLimits

0x9e9a,	// (0x0007b3f4) main_mobtv_info_pane_g1

0x9eb6,	// (0x0007b410) main_mobtv_info_pane_t1_ParamLimits

0x9eb6,	// (0x0007b410) main_mobtv_info_pane_t1

0x9f2e,	// (0x0007b488) main_mobtv_info_pane_t2_ParamLimits

0x9f2e,	// (0x0007b488) main_mobtv_info_pane_t2

0x0002,

0xfb61,	// (0x000810bb) main_mobtv_info_pane_t_ParamLimits

0xfb61,	// (0x000810bb) main_mobtv_info_pane_t

0x9fbf,	// (0x0007b519) wait_bar_pane_cp05

0x9fd1,	// (0x0007b52b) main_mobtv_loading_pane_g1_ParamLimits

0x9fd1,	// (0x0007b52b) main_mobtv_loading_pane_g1

0x9fdd,	// (0x0007b537) main_mobtv_loading_pane_g2_ParamLimits

0x9fdd,	// (0x0007b537) main_mobtv_loading_pane_g2

0x9fe9,	// (0x0007b543) main_mobtv_loading_pane_g3_ParamLimits

0x9fe9,	// (0x0007b543) main_mobtv_loading_pane_g3

0x0002,

0xfb68,	// (0x000810c2) main_mobtv_loading_pane_g_ParamLimits

0xfb68,	// (0x000810c2) main_mobtv_loading_pane_g

0xca5a,	// (0x0007dfb4) main_mobtv_loading_pane_t1_ParamLimits

0xca5a,	// (0x0007dfb4) main_mobtv_loading_pane_t1

0xca72,	// (0x0007dfcc) main_mobtv_loading_pane_t2_ParamLimits

0xca72,	// (0x0007dfcc) main_mobtv_loading_pane_t2

0x0001,

0xfb6f,	// (0x000810c9) main_mobtv_loading_pane_t_ParamLimits

0xfb6f,	// (0x000810c9) main_mobtv_loading_pane_t

0x9ff7,	// (0x0007b551) wait_bar_pane_cp06_ParamLimits

0x9ff7,	// (0x0007b551) wait_bar_pane_cp06

0xca96,	// (0x0007dff0) main_mobtv_programe_curr_pane_t1

0xcaa4,	// (0x0007dffe) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb74,	// (0x000810ce) main_mobtv_programe_curr_pane_t

0xcab2,	// (0x0007e00c) main_mobtv_programe_next_pane_t1

0xcac0,	// (0x0007e01a) main_mobtv_programe_next_pane_t2

0xcace,	// (0x0007e028) main_mobtv_programe_next_pane_t3

0x0002,

0xfb79,	// (0x000810d3) main_mobtv_programe_next_pane_t

0xce55,	// (0x0007e3af) bg_popup_mobtv_noti_window_pane

0xcadc,	// (0x0007e036) popup_mobtv_noti_window_g1

0xcae4,	// (0x0007e03e) popup_mobtv_noti_window_t1

0xcaf2,	// (0x0007e04c) popup_mobtv_noti_window_t2

0x0001,

0xfb80,	// (0x000810da) popup_mobtv_noti_window_t

0xe23d,	// (0x0007f797) bg_popup_mobtv_noti_window_pane_g1

0xce55,	// (0x0007e3af) sc_clock_pane

0xce55,	// (0x0007e3af) main_fs_bigclock_pane

0x9661,	// (0x0007abbb) blid2_tripm_pane_t4_ParamLimits

0x9661,	// (0x0007abbb) blid2_tripm_pane_t4

0xd599,	// (0x0007eaf3) sc_clock_pane_g1_ParamLimits

0xd599,	// (0x0007eaf3) sc_clock_pane_g1

0xe25b,	// (0x0007f7b5) sc_clock_pane_t1_ParamLimits

0xe25b,	// (0x0007f7b5) sc_clock_pane_t1

0xe25b,	// (0x0007f7b5) sc_clock_pane_t2_ParamLimits

0xe25b,	// (0x0007f7b5) sc_clock_pane_t2

0xe25b,	// (0x0007f7b5) sc_clock_pane_t3_ParamLimits

0xe25b,	// (0x0007f7b5) sc_clock_pane_t3

0x0004,

0xfb85,	// (0x000810df) sc_clock_pane_t_ParamLimits

0xfb85,	// (0x000810df) sc_clock_pane_t

0xa956,	// (0x0007beb0) main_fs_bigclock_indicator_pane_ParamLimits

0xa956,	// (0x0007beb0) main_fs_bigclock_indicator_pane

0xa04c,	// (0x0007b5a6) main_fs_bigclock_pane_g1_ParamLimits

0xa04c,	// (0x0007b5a6) main_fs_bigclock_pane_g1

0xa962,	// (0x0007bebc) main_fs_bigclock_pane_t1_ParamLimits

0xa962,	// (0x0007bebc) main_fs_bigclock_pane_t1

0xa974,	// (0x0007bece) main_fs_bigclock_pane_t2_ParamLimits

0xa974,	// (0x0007bece) main_fs_bigclock_pane_t2

0xa988,	// (0x0007bee2) main_fs_bigclock_pane_t3_ParamLimits

0xa988,	// (0x0007bee2) main_fs_bigclock_pane_t3

0x0002,

0xfd1b,	// (0x00081275) main_fs_bigclock_pane_t_ParamLimits

0xfd1b,	// (0x00081275) main_fs_bigclock_pane_t

0xd95f,	// (0x0007eeb9) main_fs_bigclock_indicator_pane_g1

0xc806,	// (0x0007dd60) ncim_query_content_pane_g2_ParamLimits

0xc806,	// (0x0007dd60) ncim_query_content_pane_g2

0x0001,

0xfb12,	// (0x0008106c) ncim_query_content_pane_g_ParamLimits

0xfb12,	// (0x0008106c) ncim_query_content_pane_g

0xe25b,	// (0x0007f7b5) sc_clock_pane_t4_ParamLimits

0xe25b,	// (0x0007f7b5) sc_clock_pane_t4

0xd532,	// (0x0007ea8c) main_radioblah_pane

0x83f3,	// (0x0007994d) cell_call4_button_pane_t1_copy1_ParamLimits

0x83f3,	// (0x0007994d) cell_call4_button_pane_t1_copy1

0x9c79,	// (0x0007b1d3) main_ncimui_pane_t1_ParamLimits

0x9c79,	// (0x0007b1d3) main_ncimui_pane_t1

0x9c93,	// (0x0007b1ed) main_ncimui_pane_t2_ParamLimits

0x9c93,	// (0x0007b1ed) main_ncimui_pane_t2

0x0002,

0xfb0b,	// (0x00081065) main_ncimui_pane_t_ParamLimits

0xfb0b,	// (0x00081065) main_ncimui_pane_t

0xee21,	// (0x0008037b) main_radioblah_anim_pane_ParamLimits

0xee21,	// (0x0008037b) main_radioblah_anim_pane

0xee21,	// (0x0008037b) main_radioblah_info_pane_ParamLimits

0xee21,	// (0x0008037b) main_radioblah_info_pane

0xf02c,	// (0x00080586) main_radioblah_pane_t1_ParamLimits

0xf02c,	// (0x00080586) main_radioblah_pane_t1

0xf02c,	// (0x00080586) main_radioblah_pane_t2_ParamLimits

0xf02c,	// (0x00080586) main_radioblah_pane_t2

0x0003,

0xfba6,	// (0x00081100) main_radioblah_pane_t_ParamLimits

0xfba6,	// (0x00081100) main_radioblah_pane_t

0xce5f,	// (0x0007e3b9) main_radioblah_rocker_ctrl_pane_ParamLimits

0xce5f,	// (0x0007e3b9) main_radioblah_rocker_ctrl_pane

0x1b79,	// (0x000730d3) main_radioblah_info_pane_t1_ParamLimits

0x1b79,	// (0x000730d3) main_radioblah_info_pane_t1

0xcb30,	// (0x0007e08a) main_radioblah_info_pane_t2_ParamLimits

0xcb30,	// (0x0007e08a) main_radioblah_info_pane_t2

0x0003,

0xfbaf,	// (0x00081109) main_radioblah_info_pane_t_ParamLimits

0xfbaf,	// (0x00081109) main_radioblah_info_pane_t

0xe23d,	// (0x0007f797) main_radioblah_rocker_ctrl_pane_g1

0xe23d,	// (0x0007f797) main_radioblah_rocker_ctrl_pane_g2

0xe23d,	// (0x0007f797) main_radioblah_rocker_ctrl_pane_g3

0xe23d,	// (0x0007f797) main_radioblah_rocker_ctrl_pane_g4

0xe23d,	// (0x0007f797) main_radioblah_rocker_ctrl_pane_g5

0xe23d,	// (0x0007f797) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbb8,	// (0x00081112) main_radioblah_rocker_ctrl_pane_g

0x9c2b,	// (0x0007b185) main_cset_text2_pane_t1_copy1_ParamLimits

0x846c,	// (0x000799c6) cam4_image_uncrop_qvga_pane

0x85b1,	// (0x00079b0b) vid4_image_uncrop_qcif_pane

0x97e0,	// (0x0007ad3a) cam6_image_uncrop_qvga_pane_ParamLimits

0x97e0,	// (0x0007ad3a) cam6_image_uncrop_qvga_pane

0xc4d9,	// (0x0007da33) vid6_image_uncrop_qcif_pane_ParamLimits

0xc4d9,	// (0x0007da33) vid6_image_uncrop_qcif_pane

0xce55,	// (0x0007e3af) bg_popup_preview_window_pane_cp03

0xc7ac,	// (0x0007dd06) list_cset_text2_pane

0xc7b4,	// (0x0007dd0e) main_cset6_text2_pane_g1

0xc7bc,	// (0x0007dd16) main_cset6_text2_pane_t1

0xa1d9,	// (0x0007b733) list_cset_text2_pane_t1_ParamLimits

0xa1d9,	// (0x0007b733) list_cset_text2_pane_t1

0xd532,	// (0x0007ea8c) main_radioblah_pane_ParamLimits

0x9fab,	// (0x0007b505) main_mobtv_info_pane_t3_ParamLimits

0x9fab,	// (0x0007b505) main_mobtv_info_pane_t3

0xf01e,	// (0x00080578) main_radioblah_pane_g1

0xcb00,	// (0x0007e05a) main_radioblah_info_pane_g1

0xe25b,	// (0x0007f7b5) main_radioblah_info_pane_t3_ParamLimits

0xe25b,	// (0x0007f7b5) main_radioblah_info_pane_t3

0x5c3d,	// (0x00077197) highlight_cell_cale_month_pane_ParamLimits

0x5c3d,	// (0x00077197) highlight_cell_cale_month_pane

0xce55,	// (0x0007e3af) main_phob_fisheye_pane

0x179d,	// (0x00072cf7) scroll_pane_cp0031_ParamLimits

0x179d,	// (0x00072cf7) scroll_pane_cp0031

0xc5eb,	// (0x0007db45) wait_bar_pane_cp08_ParamLimits

0x99f7,	// (0x0007af51) cset_list_set_pane_copy1_ParamLimits

0xcb7f,	// (0x0007e0d9) highlight_cell_cale_month_pane_g1

0xa1f0,	// (0x0007b74a) highlight_cell_cale_month_pane_t1

0x2237,	// (0x00073791) list_gen_pane_cp01

0x1e0a,	// (0x00073364) scroll_pane_01

0xa1fe,	// (0x0007b758) list_single_double_fisheye_pane

0x35a7,	// (0x00074b01) list_double_fisheye_pane_g1_ParamLimits

0x35a7,	// (0x00074b01) list_double_fisheye_pane_g1

0x35b3,	// (0x00074b0d) list_double_fisheye_pane_g2_ParamLimits

0x35b3,	// (0x00074b0d) list_double_fisheye_pane_g2

0xa207,	// (0x0007b761) list_double_fisheye_pane_g3_ParamLimits

0xa207,	// (0x0007b761) list_double_fisheye_pane_g3

0x0004,

0xfbc5,	// (0x0008111f) list_double_fisheye_pane_g_ParamLimits

0xfbc5,	// (0x0008111f) list_double_fisheye_pane_g

0x35e4,	// (0x00074b3e) list_double_fisheye_pane_t1_ParamLimits

0x35e4,	// (0x00074b3e) list_double_fisheye_pane_t1

0x35ff,	// (0x00074b59) list_double_fisheye_pane_t2_ParamLimits

0x35ff,	// (0x00074b59) list_double_fisheye_pane_t2

0x0001,

0xfbd0,	// (0x0008112a) list_double_fisheye_pane_t_ParamLimits

0xfbd0,	// (0x0008112a) list_double_fisheye_pane_t

0xce55,	// (0x0007e3af) main_call5_pane

0xce5f,	// (0x0007e3b9) sc_swipe_pane_ParamLimits

0xce5f,	// (0x0007e3b9) sc_swipe_pane

0xa21f,	// (0x0007b779) call5_image_pane_ParamLimits

0xa21f,	// (0x0007b779) call5_image_pane

0xa231,	// (0x0007b78b) call5_swipe_1_pane_ParamLimits

0xa231,	// (0x0007b78b) call5_swipe_1_pane

0xa23d,	// (0x0007b797) call5_swipe_2_pane_ParamLimits

0xa23d,	// (0x0007b797) call5_swipe_2_pane

0xa257,	// (0x0007b7b1) popup_call5_audio_first_window_ParamLimits

0xa257,	// (0x0007b7b1) popup_call5_audio_first_window

0xd58b,	// (0x0007eae5) call5_swipe_1_pane_g1_ParamLimits

0xd58b,	// (0x0007eae5) call5_swipe_1_pane_g1

0xcb87,	// (0x0007e0e1) call5_swipe_1_pane_g2_ParamLimits

0xcb87,	// (0x0007e0e1) call5_swipe_1_pane_g2

0x0001,

0xfbd5,	// (0x0008112f) call5_swipe_1_pane_g_ParamLimits

0xfbd5,	// (0x0008112f) call5_swipe_1_pane_g

0xcb93,	// (0x0007e0ed) call5_swipe_1_pane_t1_ParamLimits

0xcb93,	// (0x0007e0ed) call5_swipe_1_pane_t1

0xd58b,	// (0x0007eae5) call5_swipe_2_pane_g1_ParamLimits

0xd58b,	// (0x0007eae5) call5_swipe_2_pane_g1

0xcba8,	// (0x0007e102) call5_swipe_2_pane_g2_ParamLimits

0xcba8,	// (0x0007e102) call5_swipe_2_pane_g2

0x0001,

0xfbda,	// (0x00081134) call5_swipe_2_pane_g_ParamLimits

0xfbda,	// (0x00081134) call5_swipe_2_pane_g

0xcbb4,	// (0x0007e10e) call5_swipe_2_pane_t1_ParamLimits

0xcbb4,	// (0x0007e10e) call5_swipe_2_pane_t1

0xd58b,	// (0x0007eae5) sc_swipe_pane_g1_ParamLimits

0xd58b,	// (0x0007eae5) sc_swipe_pane_g1

0xd599,	// (0x0007eaf3) sc_swipe_pane_g2_ParamLimits

0xd599,	// (0x0007eaf3) sc_swipe_pane_g2

0x0001,

0xfbdf,	// (0x00081139) sc_swipe_pane_g_ParamLimits

0xfbdf,	// (0x00081139) sc_swipe_pane_g

0xe247,	// (0x0007f7a1) sc_swipe_pane_t1_ParamLimits

0xe247,	// (0x0007f7a1) sc_swipe_pane_t1

0xce55,	// (0x0007e3af) main_cmail_launcher_pane

0xa267,	// (0x0007b7c1) aid_size_cell_cmail_l_ParamLimits

0xa267,	// (0x0007b7c1) aid_size_cell_cmail_l

0xa275,	// (0x0007b7cf) grid_cmail_l_pane_ParamLimits

0xa275,	// (0x0007b7cf) grid_cmail_l_pane

0xa283,	// (0x0007b7dd) cell_cmail_l_pane_ParamLimits

0xa283,	// (0x0007b7dd) cell_cmail_l_pane

0xa29e,	// (0x0007b7f8) cell_cmail_l_pane_g1_ParamLimits

0xa29e,	// (0x0007b7f8) cell_cmail_l_pane_g1

0xa2aa,	// (0x0007b804) cell_cmail_l_pane_t1_ParamLimits

0xa2aa,	// (0x0007b804) cell_cmail_l_pane_t1

0xa2c0,	// (0x0007b81a) cell_cmail_l_pane_t2_ParamLimits

0xa2c0,	// (0x0007b81a) cell_cmail_l_pane_t2

0x0001,

0xfbe4,	// (0x0008113e) cell_cmail_l_pane_t_ParamLimits

0xfbe4,	// (0x0008113e) cell_cmail_l_pane_t

0xd532,	// (0x0007ea8c) grid_highlight_pane_cp018_ParamLimits

0xd532,	// (0x0007ea8c) grid_highlight_pane_cp018

0x3ecd,	// (0x00075427) main2_pane_ParamLimits

0x3ecd,	// (0x00075427) main2_pane

0xe32a,	// (0x0007f884) popup_sp_fs_action_menu_bg_pane_g1

0xe332,	// (0x0007f88c) popup_sp_fs_action_menu_bg_pane_g2

0xe33a,	// (0x0007f894) popup_sp_fs_action_menu_bg_pane_g3

0xe342,	// (0x0007f89c) popup_sp_fs_action_menu_bg_pane_g4

0xe34a,	// (0x0007f8a4) popup_sp_fs_action_menu_bg_pane_g5

0xe352,	// (0x0007f8ac) popup_sp_fs_action_menu_bg_pane_g6

0xe35a,	// (0x0007f8b4) popup_sp_fs_action_menu_bg_pane_g7

0xe362,	// (0x0007f8bc) popup_sp_fs_action_menu_bg_pane_g8

0xe36a,	// (0x0007f8c4) popup_sp_fs_action_menu_bg_pane_g9

0xe372,	// (0x0007f8cc) popup_sp_fs_action_menu_bg_pane_g10

0xe372,	// (0x0007f8cc) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x0008065a) popup_sp_fs_action_menu_bg_pane_g

0xd58b,	// (0x0007eae5) list_medium_line_x2_t3_g3_g1_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t3_g3_g1

0xd58b,	// (0x0007eae5) list_medium_line_x2_t3_g3_g2_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t3_g3_g2

0xd58b,	// (0x0007eae5) list_medium_line_x2_t3_g3_g3_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x00080708) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x00080708) list_medium_line_x2_t3_g3_g

0xe247,	// (0x0007f7a1) list_medium_line_x2_t3_g3_t1_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t3_g3_t1

0xe247,	// (0x0007f7a1) list_medium_line_x2_t3_g3_t2_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t3_g3_t2

0xe247,	// (0x0007f7a1) list_medium_line_x2_t3_g3_t3_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x0008070f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x0008070f) list_medium_line_x2_t3_g3_t

0xd58b,	// (0x0007eae5) list_medium_line_x2_t3_g2_g1_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t3_g2_g1

0xd58b,	// (0x0007eae5) list_medium_line_x2_t3_g2_g2_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x00080716) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x00080716) list_medium_line_x2_t3_g2_g

0xe247,	// (0x0007f7a1) list_medium_line_x2_t3_g2_t1_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t3_g2_t1

0xe247,	// (0x0007f7a1) list_medium_line_x2_t3_g2_t2_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t3_g2_t2

0xe247,	// (0x0007f7a1) list_medium_line_x2_t3_g2_t3_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x0008070f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x0008070f) list_medium_line_x2_t3_g2_t

0xd58b,	// (0x0007eae5) list_medium_line_x2_t4_g4_g1_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t4_g4_g1

0xd58b,	// (0x0007eae5) list_medium_line_x2_t4_g4_g2_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t4_g4_g2

0xd58b,	// (0x0007eae5) list_medium_line_x2_t4_g4_g3_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t4_g4_g3

0xd58b,	// (0x0007eae5) list_medium_line_x2_t4_g4_g4_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x0008071b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x0008071b) list_medium_line_x2_t4_g4_g

0xe247,	// (0x0007f7a1) list_medium_line_x2_t4_g4_t1_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t4_g4_t1

0xe247,	// (0x0007f7a1) list_medium_line_x2_t4_g4_t2_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t4_g4_t2

0xe247,	// (0x0007f7a1) list_medium_line_x2_t4_g4_t3_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t4_g4_t3

0xe247,	// (0x0007f7a1) list_medium_line_x2_t4_g4_t4_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x00080724) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x00080724) list_medium_line_x2_t4_g4_t

0xd58b,	// (0x0007eae5) list_medium_line_x2_t2_g4_g1_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t2_g4_g1

0xd58b,	// (0x0007eae5) list_medium_line_x2_t2_g4_g2_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t2_g4_g2

0xd58b,	// (0x0007eae5) list_medium_line_x2_t2_g4_g3_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t2_g4_g3

0xd58b,	// (0x0007eae5) list_medium_line_x2_t2_g4_g4_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x0008071b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x0008071b) list_medium_line_x2_t2_g4_g

0xe247,	// (0x0007f7a1) list_medium_line_x2_t2_g4_t1_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t2_g4_t1

0xe247,	// (0x0007f7a1) list_medium_line_x2_t2_g4_t2_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t2_g4_t2

0x0001,

0xf231,	// (0x0008078b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf231,	// (0x0008078b) list_medium_line_x2_t2_g4_t

0xd58b,	// (0x0007eae5) list_medium_line_x2_t2_g3_g1_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t2_g3_g1

0xd58b,	// (0x0007eae5) list_medium_line_x2_t2_g3_g2_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t2_g3_g2

0xd58b,	// (0x0007eae5) list_medium_line_x2_t2_g3_g3_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x00080708) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x00080708) list_medium_line_x2_t2_g3_g

0xe247,	// (0x0007f7a1) list_medium_line_x2_t2_g3_t1_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t2_g3_t1

0xe247,	// (0x0007f7a1) list_medium_line_x2_t2_g3_t2_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t2_g3_t2

0x0001,

0xf231,	// (0x0008078b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf231,	// (0x0008078b) list_medium_line_x2_t2_g3_t

0x5dcf,	// (0x00077329) main_sp_fs_list_pane_ParamLimits

0x5dcf,	// (0x00077329) main_sp_fs_list_pane

0x5ddb,	// (0x00077335) sp_fs_scroll_pane_ParamLimits

0x5ddb,	// (0x00077335) sp_fs_scroll_pane

0xe993,	// (0x0007feed) list_medium_line_x2_t3_t1

0xe993,	// (0x0007feed) list_medium_line_x2_t3_t2

0xe993,	// (0x0007feed) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x000807d6) list_medium_line_x2_t3_t

0xe993,	// (0x0007feed) list_medium_line_x3_t4_t1

0xe993,	// (0x0007feed) list_medium_line_x3_t4_t2

0xe993,	// (0x0007feed) list_medium_line_x3_t4_t3

0xe993,	// (0x0007feed) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x000807dd) list_medium_line_x3_t4_t

0xe993,	// (0x0007feed) list_medium_line_x4_t5_t1

0xe993,	// (0x0007feed) list_medium_line_x4_t5_t2

0xe993,	// (0x0007feed) list_medium_line_x4_t5_t3

0xe993,	// (0x0007feed) list_medium_line_x4_t5_t4

0xe993,	// (0x0007feed) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x000807e6) list_medium_line_x4_t5_t

0xd58b,	// (0x0007eae5) list_medium_line_t4_g4_g1_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_t4_g4_g1

0xd58b,	// (0x0007eae5) list_medium_line_t4_g4_g2_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_t4_g4_g2

0xd58b,	// (0x0007eae5) list_medium_line_t4_g4_g3_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_t4_g4_g3

0xd58b,	// (0x0007eae5) list_medium_line_t4_g4_g4_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x0008071b) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x0008071b) list_medium_line_t4_g4_g

0xe247,	// (0x0007f7a1) list_medium_line_t4_g4_t1_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_t4_g4_t1

0xe247,	// (0x0007f7a1) list_medium_line_t4_g4_t2_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_t4_g4_t2

0xe247,	// (0x0007f7a1) list_medium_line_t4_g4_t3_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_t4_g4_t3

0xe247,	// (0x0007f7a1) list_medium_line_t4_g4_t4_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x00080724) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x00080724) list_medium_line_t4_g4_t

0x5ed4,	// (0x0007742e) chi_dic_find_pane_g1

0x6be6,	// (0x00078140) main_tport_pane

0xe993,	// (0x0007feed) list_medium_line_plain_t1

0xd58b,	// (0x0007eae5) list_medium_line_t2_g2_g1_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_t2_g2_g1

0xd58b,	// (0x0007eae5) list_medium_line_t2_g2_g2_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x00080716) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x00080716) list_medium_line_t2_g2_g

0xe247,	// (0x0007f7a1) list_medium_line_t2_g2_t1_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_t2_g2_t1

0xe247,	// (0x0007f7a1) list_medium_line_t2_g2_t2_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_t2_g2_t2

0x0001,

0xf231,	// (0x0008078b) list_medium_line_t2_g2_t_ParamLimits

0xf231,	// (0x0008078b) list_medium_line_t2_g2_t

0x3541,	// (0x00074a9b) aid_sp_fs_list_icon_a_sm

0x94f8,	// (0x0007aa52) aid_sp_fs_list_icon_d

0xc26f,	// (0x0007d7c9) aid_sp_fs_text_primary

0x3549,	// (0x00074aa3) aid_sp_fs_text_secondary

0xce55,	// (0x0007e3af) list_medium_line

0xce55,	// (0x0007e3af) list_medium_line_g2

0xce55,	// (0x0007e3af) list_medium_line_g3

0xce55,	// (0x0007e3af) list_medium_line_plain

0xce55,	// (0x0007e3af) list_medium_line_plain_t2

0xce55,	// (0x0007e3af) list_medium_line_plain_t3

0xce55,	// (0x0007e3af) list_medium_line_right_icon

0xce55,	// (0x0007e3af) list_medium_line_right_iconx2

0xce55,	// (0x0007e3af) list_medium_line_t2

0xce55,	// (0x0007e3af) list_medium_line_t2_g2

0xce55,	// (0x0007e3af) list_medium_line_t2_g3

0xce55,	// (0x0007e3af) list_medium_line_t2_right_icon

0xce55,	// (0x0007e3af) list_medium_line_t2_right_iconx2

0xce55,	// (0x0007e3af) list_medium_line_t3

0xce55,	// (0x0007e3af) list_medium_line_t3_g2

0xce55,	// (0x0007e3af) list_medium_line_t3_g3

0xce55,	// (0x0007e3af) list_medium_line_t3_right_iconx2

0xce55,	// (0x0007e3af) list_medium_line_t4_g4

0xce55,	// (0x0007e3af) list_medium_line_x2

0xce55,	// (0x0007e3af) list_medium_line_x2_t2_g2

0xce55,	// (0x0007e3af) list_medium_line_x2_t2_g3

0xce55,	// (0x0007e3af) list_medium_line_x2_t2_g4

0xce55,	// (0x0007e3af) list_medium_line_x2_t3

0xce55,	// (0x0007e3af) list_medium_line_x2_t3_g2

0xce55,	// (0x0007e3af) list_medium_line_x2_t3_g3

0xce55,	// (0x0007e3af) list_medium_line_x2_t3_g4

0xce55,	// (0x0007e3af) list_medium_line_x2_t4_g2

0xce55,	// (0x0007e3af) list_medium_line_x2_t4_g4

0xce55,	// (0x0007e3af) list_medium_line_x3

0xce55,	// (0x0007e3af) list_medium_line_x3_t4

0xce55,	// (0x0007e3af) list_medium_line_x3_t4_g4

0xce55,	// (0x0007e3af) list_medium_line_x4_t4

0xce55,	// (0x0007e3af) list_medium_line_x4_t4_g7

0xce55,	// (0x0007e3af) list_medium_line_x4_t5

0x3552,	// (0x00074aac) list_single_fs_dyc_pane_ParamLimits

0x3552,	// (0x00074aac) list_single_fs_dyc_pane

0xd58b,	// (0x0007eae5) list_medium_line_x4_t4_g7_g1_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x4_t4_g7_g1

0xd58b,	// (0x0007eae5) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x4_t4_g7_g2

0xd58b,	// (0x0007eae5) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x4_t4_g7_g3

0xd58b,	// (0x0007eae5) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x4_t4_g7_g4

0xd58b,	// (0x0007eae5) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x4_t4_g7_g5

0xd58b,	// (0x0007eae5) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x4_t4_g7_g6

0xd599,	// (0x0007eaf3) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd599,	// (0x0007eaf3) list_medium_line_x4_t4_g7_g7

0x0006,

0xfaec,	// (0x00081046) list_medium_line_x4_t4_g7_g_ParamLimits

0xfaec,	// (0x00081046) list_medium_line_x4_t4_g7_g

0xe247,	// (0x0007f7a1) list_medium_line_x4_t4_g7_t1_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x4_t4_g7_t1

0xe247,	// (0x0007f7a1) list_medium_line_x4_t4_g7_t2_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x4_t4_g7_t2

0xe247,	// (0x0007f7a1) list_medium_line_x4_t4_g7_t3_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x4_t4_g7_t3

0xe25b,	// (0x0007f7b5) list_medium_line_x4_t4_g7_t4_ParamLimits

0xe25b,	// (0x0007f7b5) list_medium_line_x4_t4_g7_t4

0xe25b,	// (0x0007f7b5) list_medium_line_x4_t4_g7_t5_ParamLimits

0xe25b,	// (0x0007f7b5) list_medium_line_x4_t4_g7_t5

0x0004,

0xfafb,	// (0x00081055) list_medium_line_x4_t4_g7_t_ParamLimits

0xfafb,	// (0x00081055) list_medium_line_x4_t4_g7_t

0x358a,	// (0x00074ae4) list_single_dyc_row_pane_ParamLimits

0x358a,	// (0x00074ae4) list_single_dyc_row_pane

0xa213,	// (0x0007b76d) call5_gesture_pane_ParamLimits

0xa213,	// (0x0007b76d) call5_gesture_pane

0xa249,	// (0x0007b7a3) call5_windows_pane_ParamLimits

0xa249,	// (0x0007b7a3) call5_windows_pane

0xa2dd,	// (0x0007b837) call5_swipe_1_pane_cp_ParamLimits

0xa2dd,	// (0x0007b837) call5_swipe_1_pane_cp

0xa2e9,	// (0x0007b843) call5_swipe_2_pane_cp_ParamLimits

0xa2e9,	// (0x0007b843) call5_swipe_2_pane_cp

0xe439,	// (0x0007f993) call5_image_pane_cp

0xa2f5,	// (0x0007b84f) popup_call5_audio_first_window_cp_ParamLimits

0xa2f5,	// (0x0007b84f) popup_call5_audio_first_window_cp

0xcbc9,	// (0x0007e123) call5_swipe_1_pane_g1_cp_ParamLimits

0xcbc9,	// (0x0007e123) call5_swipe_1_pane_g1_cp

0xcbd6,	// (0x0007e130) call5_swipe_1_pane_g2_cp

0xcbde,	// (0x0007e138) call5_swipe_1_pane_t1_cp_ParamLimits

0xcbde,	// (0x0007e138) call5_swipe_1_pane_t1_cp

0xcbc9,	// (0x0007e123) call5_swipe_2_pane_g1_cp_ParamLimits

0xcbc9,	// (0x0007e123) call5_swipe_2_pane_g1_cp

0xcbf3,	// (0x0007e14d) call5_swipe_2_pane_g2_cp

0xcbfb,	// (0x0007e155) call5_swipe_2_pane_t1_cp_ParamLimits

0xcbfb,	// (0x0007e155) call5_swipe_2_pane_t1_cp

0xd532,	// (0x0007ea8c) main_sp_fs_email_pane

0x2240,	// (0x0007379a) main_sp_fs_listscroll_pane_te

0xa303,	// (0x0007b85d) popup_sp_fs_action_menu_pane_ParamLimits

0xa303,	// (0x0007b85d) popup_sp_fs_action_menu_pane

0xe23d,	// (0x0007f797) bg_sp_fs_ctrlbar_pane_g1

0xcc10,	// (0x0007e16a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xcc19,	// (0x0007e173) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcc22,	// (0x0007e17c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe23d,	// (0x0007f797) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbe9,	// (0x00081143) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x12a2,	// (0x000727fc) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x12a2,	// (0x000727fc) bg_sp_fs_ctrlbar_ddmenu_pane

0xcc2b,	// (0x0007e185) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xcc2b,	// (0x0007e185) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xcc37,	// (0x0007e191) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xcc37,	// (0x0007e191) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbf2,	// (0x0008114c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbf2,	// (0x0008114c) main_sp_fs_ctrlbar_ddmenu_pane_g

0xcc43,	// (0x0007e19d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xcc43,	// (0x0007e19d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe23d,	// (0x0007f797) list_medium_line_t2_right_icon_g1

0xe993,	// (0x0007feed) list_medium_line_t2_right_icon_t1

0xe993,	// (0x0007feed) list_medium_line_t2_right_icon_t2

0x0001,

0xfbf7,	// (0x00081151) list_medium_line_t2_right_icon_t

0xee21,	// (0x0008037b) bg_sp_fs_ctrlbar_pane_ParamLimits

0xee21,	// (0x0008037b) bg_sp_fs_ctrlbar_pane

0xa3a2,	// (0x0007b8fc) main_sp_fs_ctrlbar_button_pane_cp01

0xa3aa,	// (0x0007b904) main_sp_fs_ctrlbar_ddmenu_pane

0xcc97,	// (0x0007e1f1) main_sp_fs_ctrlbar_pane_g1

0xcca3,	// (0x0007e1fd) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbfc,	// (0x00081156) main_sp_fs_ctrlbar_pane_g

0xa3e8,	// (0x0007b942) main_sp_fs_ctrlbar_pane_t1

0xa425,	// (0x0007b97f) main_sp_fs_ctrlbar_pane

0xa43f,	// (0x0007b999) main_sp_fs_listscroll_pane_te_cp01

0x3621,	// (0x00074b7b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x3621,	// (0x00074b7b) popup_sp_fs_action_menu_pane_cp01

0xd532,	// (0x0007ea8c) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xd532,	// (0x0007ea8c) bg_sp_fs_highlight_list_pane_cp01

0x3641,	// (0x00074b9b) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x3641,	// (0x00074b9b) sp_fs_action_menu_list_gene_pane_g1

0xccca,	// (0x0007e224) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xccca,	// (0x0007e224) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc0a,	// (0x00081164) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc0a,	// (0x00081164) sp_fs_action_menu_list_gene_pane_g

0x3650,	// (0x00074baa) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x3650,	// (0x00074baa) sp_fs_action_menu_list_gene_pane_t1

0x3668,	// (0x00074bc2) sp_fs_action_menu_list_gene_pane_ParamLimits

0x3668,	// (0x00074bc2) sp_fs_action_menu_list_gene_pane

0xccd7,	// (0x0007e231) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xccd7,	// (0x0007e231) popup_sp_fs_action_menu_bg_pane

0x368b,	// (0x00074be5) sp_fs_action_menu_list_pane_ParamLimits

0x368b,	// (0x00074be5) sp_fs_action_menu_list_pane

0x36af,	// (0x00074c09) sp_fs_scroll_pane_cp01_ParamLimits

0x36af,	// (0x00074c09) sp_fs_scroll_pane_cp01

0xe993,	// (0x0007feed) list_medium_line_plain_t2_t1

0xe993,	// (0x0007feed) list_medium_line_plain_t2_t2

0x0001,

0xfbf7,	// (0x00081151) list_medium_line_plain_t2_t

0xe993,	// (0x0007feed) list_medium_line_plain_t3_t1

0xe993,	// (0x0007feed) list_medium_line_plain_t3_t2

0xe993,	// (0x0007feed) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x000807d6) list_medium_line_plain_t3_t

0xd58b,	// (0x0007eae5) list_medium_line_x2_t2_g2_g1_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t2_g2_g1

0xd58b,	// (0x0007eae5) list_medium_line_x2_t2_g2_g2_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x00080716) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x00080716) list_medium_line_x2_t2_g2_g

0xe247,	// (0x0007f7a1) list_medium_line_x2_t2_g2_t1_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t2_g2_t1

0xe247,	// (0x0007f7a1) list_medium_line_x2_t2_g2_t2_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t2_g2_t2

0x0001,

0xf231,	// (0x0008078b) list_medium_line_x2_t2_g2_t_ParamLimits

0xf231,	// (0x0008078b) list_medium_line_x2_t2_g2_t

0xd58b,	// (0x0007eae5) list_medium_line_x2_t4_g2_g1_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t4_g2_g1

0xd58b,	// (0x0007eae5) list_medium_line_x2_t4_g2_g2_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x00080716) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x00080716) list_medium_line_x2_t4_g2_g

0xe247,	// (0x0007f7a1) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t4_g2_t1

0xe247,	// (0x0007f7a1) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t4_g2_t2

0xe247,	// (0x0007f7a1) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t4_g2_t3

0xe247,	// (0x0007f7a1) list_medium_line_x2_t4_g2_t4_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x00080724) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x00080724) list_medium_line_x2_t4_g2_t

0xe23d,	// (0x0007f797) list_medium_line_t3_right_iconx2_g1

0xe23d,	// (0x0007f797) list_medium_line_t3_right_iconx2_g2

0xe23d,	// (0x0007f797) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf398,	// (0x000808f2) list_medium_line_t3_right_iconx2_g

0xe993,	// (0x0007feed) list_medium_line_t3_right_iconx2_t1

0xe993,	// (0x0007feed) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbf7,	// (0x00081151) list_medium_line_t3_right_iconx2_t

0xd58b,	// (0x0007eae5) list_medium_line_x3_t4_g4_g1_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x3_t4_g4_g1

0xd58b,	// (0x0007eae5) list_medium_line_x3_t4_g4_g2_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x3_t4_g4_g2

0xd58b,	// (0x0007eae5) list_medium_line_x3_t4_g4_g3_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x3_t4_g4_g3

0xd58b,	// (0x0007eae5) list_medium_line_x3_t4_g4_g4_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x0008071b) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x0008071b) list_medium_line_x3_t4_g4_g

0xe247,	// (0x0007f7a1) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x3_t4_g4_t1

0xe247,	// (0x0007f7a1) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x3_t4_g4_t2

0xe247,	// (0x0007f7a1) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x3_t4_g4_t3

0xe247,	// (0x0007f7a1) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x00080724) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x00080724) list_medium_line_x3_t4_g4_t

0x36d5,	// (0x00074c2f) list_single_dyc_row_text_pane_t1_ParamLimits

0x36d5,	// (0x00074c2f) list_single_dyc_row_text_pane_t1

0x3718,	// (0x00074c72) list_single_dyc_row_text_pane_t2_ParamLimits

0x3718,	// (0x00074c72) list_single_dyc_row_text_pane_t2

0x378e,	// (0x00074ce8) list_single_dyc_row_text_pane_t3_ParamLimits

0x378e,	// (0x00074ce8) list_single_dyc_row_text_pane_t3

0x0005,

0xfc0f,	// (0x00081169) list_single_dyc_row_text_pane_t_ParamLimits

0xfc0f,	// (0x00081169) list_single_dyc_row_text_pane_t

0x386d,	// (0x00074dc7) list_single_dyc_row_pane_g1_ParamLimits

0x386d,	// (0x00074dc7) list_single_dyc_row_pane_g1

0x3879,	// (0x00074dd3) list_single_dyc_row_pane_g2_ParamLimits

0x3879,	// (0x00074dd3) list_single_dyc_row_pane_g2

0x3885,	// (0x00074ddf) list_single_dyc_row_pane_g3_ParamLimits

0x3885,	// (0x00074ddf) list_single_dyc_row_pane_g3

0x3891,	// (0x00074deb) list_single_dyc_row_pane_g4_ParamLimits

0x3891,	// (0x00074deb) list_single_dyc_row_pane_g4

0x0003,

0xfc1c,	// (0x00081176) list_single_dyc_row_pane_g_ParamLimits

0xfc1c,	// (0x00081176) list_single_dyc_row_pane_g

0x389d,	// (0x00074df7) list_single_dyc_row_text_pane_ParamLimits

0x389d,	// (0x00074df7) list_single_dyc_row_text_pane

0xce55,	// (0x0007e3af) bg_sp_fs_scroll_pane

0xcce5,	// (0x0007e23f) thumb_sp_fs_scroll_pane

0xd58b,	// (0x0007eae5) list_medium_line_g1_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_g1

0xe247,	// (0x0007f7a1) list_medium_line_t1_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_t1

0xd58b,	// (0x0007eae5) list_medium_line_x2_g1_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_g1

0xd58b,	// (0x0007eae5) list_medium_line_x2_g2_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x00080716) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x00080716) list_medium_line_x2_g

0xe247,	// (0x0007f7a1) list_medium_line_x2_t1_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t1

0xd58b,	// (0x0007eae5) list_medium_line_x3_g1_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x3_g1

0xccee,	// (0x0007e248) list_medium_line_x3_g2_ParamLimits

0xccee,	// (0x0007e248) list_medium_line_x3_g2

0x0001,

0xfc25,	// (0x0008117f) list_medium_line_x3_g_ParamLimits

0xfc25,	// (0x0008117f) list_medium_line_x3_g

0xccfc,	// (0x0007e256) list_medium_line_x3_t1_ParamLimits

0xccfc,	// (0x0007e256) list_medium_line_x3_t1

0xcd10,	// (0x0007e26a) thumb_sp_fs_scroll_pane_g1

0xcd19,	// (0x0007e273) thumb_sp_fs_scroll_pane_g2

0xcd22,	// (0x0007e27c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc2a,	// (0x00081184) thumb_sp_fs_scroll_pane_g

0xcd10,	// (0x0007e26a) bg_sp_fs_scroll_pane_g1

0xcd19,	// (0x0007e273) bg_sp_fs_scroll_pane_g2

0xcd22,	// (0x0007e27c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc2a,	// (0x00081184) bg_sp_fs_scroll_pane_g

0xd58b,	// (0x0007eae5) list_medium_line_x2_t3_g4_g1_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t3_g4_g1

0xd58b,	// (0x0007eae5) list_medium_line_x2_t3_g4_g2_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t3_g4_g2

0xd58b,	// (0x0007eae5) list_medium_line_x2_t3_g4_g3_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t3_g4_g3

0xd58b,	// (0x0007eae5) list_medium_line_x2_t3_g4_g4_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x0008071b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x0008071b) list_medium_line_x2_t3_g4_g

0xe247,	// (0x0007f7a1) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t3_g4_t1

0xe247,	// (0x0007f7a1) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t3_g4_t2

0xe247,	// (0x0007f7a1) list_medium_line_x2_t3_g4_t3_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x0008070f) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x0008070f) list_medium_line_x2_t3_g4_t

0xd58b,	// (0x0007eae5) list_medium_line_g2_g1_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_g2_g1

0xd58b,	// (0x0007eae5) list_medium_line_g2_g2_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x00080716) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x00080716) list_medium_line_g2_g

0xe247,	// (0x0007f7a1) list_medium_line_g2_t1_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_g2_t1

0xd58b,	// (0x0007eae5) list_medium_line_t3_g2_g1_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_t3_g2_g1

0xd58b,	// (0x0007eae5) list_medium_line_t3_g2_g2_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x00080716) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x00080716) list_medium_line_t3_g2_g

0xe247,	// (0x0007f7a1) list_medium_line_t3_g2_t1_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_t3_g2_t1

0xe247,	// (0x0007f7a1) list_medium_line_t3_g2_t2_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_t3_g2_t2

0xe247,	// (0x0007f7a1) list_medium_line_t3_g2_t3_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x0008070f) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x0008070f) list_medium_line_t3_g2_t

0xe23d,	// (0x0007f797) list_medium_line_right_icon_g1

0xe993,	// (0x0007feed) list_medium_line_right_icon_t1

0xd58b,	// (0x0007eae5) list_medium_line_t2_g1_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_t2_g1

0xe247,	// (0x0007f7a1) list_medium_line_t2_t1_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_t2_t1

0xe247,	// (0x0007f7a1) list_medium_line_t2_t2_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_t2_t2

0x0001,

0xf231,	// (0x0008078b) list_medium_line_t2_t_ParamLimits

0xf231,	// (0x0008078b) list_medium_line_t2_t

0xd58b,	// (0x0007eae5) list_medium_line_t3_g1_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_t3_g1

0xe247,	// (0x0007f7a1) list_medium_line_t3_t1_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_t3_t1

0xe247,	// (0x0007f7a1) list_medium_line_t3_t2_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_t3_t2

0xe247,	// (0x0007f7a1) list_medium_line_t3_t3_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x0008070f) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x0008070f) list_medium_line_t3_t

0xd58b,	// (0x0007eae5) list_medium_line_g3_g1_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_g3_g1

0xd58b,	// (0x0007eae5) list_medium_line_g3_g2_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_g3_g2

0xd58b,	// (0x0007eae5) list_medium_line_g3_g3_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x00080708) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x00080708) list_medium_line_g3_g

0xe247,	// (0x0007f7a1) list_medium_line_g3_t1_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_g3_t1

0xd58b,	// (0x0007eae5) list_medium_line_t2_g3_g1_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_t2_g3_g1

0xd58b,	// (0x0007eae5) list_medium_line_t2_g3_g2_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_t2_g3_g2

0xd58b,	// (0x0007eae5) list_medium_line_t2_g3_g3_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x00080708) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x00080708) list_medium_line_t2_g3_g

0xe247,	// (0x0007f7a1) list_medium_line_t2_g3_t1_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_t2_g3_t1

0xe247,	// (0x0007f7a1) list_medium_line_t2_g3_t2_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_t2_g3_t2

0x0001,

0xf231,	// (0x0008078b) list_medium_line_t2_g3_t_ParamLimits

0xf231,	// (0x0008078b) list_medium_line_t2_g3_t

0xd58b,	// (0x0007eae5) list_medium_line_t3_g3_g1_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_t3_g3_g1

0xd58b,	// (0x0007eae5) list_medium_line_t3_g3_g2_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_t3_g3_g2

0xd58b,	// (0x0007eae5) list_medium_line_t3_g3_g3_ParamLimits

0xd58b,	// (0x0007eae5) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x00080708) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x00080708) list_medium_line_t3_g3_g

0xe247,	// (0x0007f7a1) list_medium_line_t3_g3_t1_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_t3_g3_t1

0xe247,	// (0x0007f7a1) list_medium_line_t3_g3_t2_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_t3_g3_t2

0xe247,	// (0x0007f7a1) list_medium_line_t3_g3_t3_ParamLimits

0xe247,	// (0x0007f7a1) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x0008070f) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x0008070f) list_medium_line_t3_g3_t

0xe23d,	// (0x0007f797) list_medium_line_right_iconx2_g1

0xe23d,	// (0x0007f797) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x00080609) list_medium_line_right_iconx2_g

0xe993,	// (0x0007feed) list_medium_line_right_iconx2_t1

0xe23d,	// (0x0007f797) list_medium_line_t2_right_iconx2_g1

0xe23d,	// (0x0007f797) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x00080609) list_medium_line_t2_right_iconx2_g

0xe993,	// (0x0007feed) list_medium_line_t2_right_iconx2_t1

0xe993,	// (0x0007feed) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbf7,	// (0x00081151) list_medium_line_t2_right_iconx2_t

0xe993,	// (0x0007feed) list_medium_line_x4_t4_t1

0xe993,	// (0x0007feed) list_medium_line_x4_t4_t2

0xe993,	// (0x0007feed) list_medium_line_x4_t4_t3

0xe993,	// (0x0007feed) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x000807dd) list_medium_line_x4_t4_t

0xa484,	// (0x0007b9de) tport_appsw_pane_ParamLimits

0xa484,	// (0x0007b9de) tport_appsw_pane

0xa492,	// (0x0007b9ec) tport_contact_pane_ParamLimits

0xa492,	// (0x0007b9ec) tport_contact_pane

0xa4a2,	// (0x0007b9fc) tport_listscroll_pane_ParamLimits

0xa4a2,	// (0x0007b9fc) tport_listscroll_pane

0xa4b2,	// (0x0007ba0c) cell_tport_appsw_pane_ParamLimits

0xa4b2,	// (0x0007ba0c) cell_tport_appsw_pane

0xd599,	// (0x0007eaf3) tport_appsw_pane_g1_ParamLimits

0xd599,	// (0x0007eaf3) tport_appsw_pane_g1

0xa4df,	// (0x0007ba39) tport_contact_pane_g1

0xa4e8,	// (0x0007ba42) tport_contact_pane_t1

0xa4f6,	// (0x0007ba50) tport_contact_pane_t2

0x0001,

0xfc31,	// (0x0008118b) tport_contact_pane_t

0xcd2b,	// (0x0007e285) list_tport_pane

0xcd34,	// (0x0007e28e) scroll_pane_cp_030

0xa50c,	// (0x0007ba66) cell_tport_appsw_pane_g1

0xa51c,	// (0x0007ba76) cell_tport_appsw_pane_t1

0xa52a,	// (0x0007ba84) grid_highlight_pane_cp019

0xa532,	// (0x0007ba8c) list_tport_double_graphic_pane_ParamLimits

0xa532,	// (0x0007ba8c) list_tport_double_graphic_pane

0xd532,	// (0x0007ea8c) list_highlight_pane_cp023_ParamLimits

0xd532,	// (0x0007ea8c) list_highlight_pane_cp023

0xa53f,	// (0x0007ba99) list_tport_double_graphic_pane_g1_ParamLimits

0xa53f,	// (0x0007ba99) list_tport_double_graphic_pane_g1

0xa54c,	// (0x0007baa6) list_tport_double_graphic_pane_t1_ParamLimits

0xa54c,	// (0x0007baa6) list_tport_double_graphic_pane_t1

0xa561,	// (0x0007babb) list_tport_double_graphic_pane_t2_ParamLimits

0xa561,	// (0x0007babb) list_tport_double_graphic_pane_t2

0x0001,

0xfc3d,	// (0x00081197) list_tport_double_graphic_pane_t_ParamLimits

0xfc3d,	// (0x00081197) list_tport_double_graphic_pane_t

0xce55,	// (0x0007e3af) main_cale_note_pane

0x8818,	// (0x00079d72) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8818,	// (0x00079d72) cell_vitu2_function_top_wide_pane_cp01

0x9fbf,	// (0x0007b519) wait_bar_pane_cp05_ParamLimits

0xd532,	// (0x0007ea8c) listscroll_cmail_pane

0xcd45,	// (0x0007e29f) list_cmail_pane

0xa573,	// (0x0007bacd) list_cmail_body_pane

0xa58d,	// (0x0007bae7) list_single_cmail_header_caption_pane

0xa5ad,	// (0x0007bb07) list_single_cmail_header_detail_pane_ParamLimits

0xa5ad,	// (0x0007bb07) list_single_cmail_header_detail_pane

0xcd68,	// (0x0007e2c2) list_single_cmail_header_caption_pane_t1

0x38bc,	// (0x00074e16) list_single_cmail_header_detail_pane_g1_ParamLimits

0x38bc,	// (0x00074e16) list_single_cmail_header_detail_pane_g1

0xa5e3,	// (0x0007bb3d) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa5e3,	// (0x0007bb3d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc42,	// (0x0008119c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc42,	// (0x0008119c) list_single_cmail_header_detail_pane_g

0x38d4,	// (0x00074e2e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x38d4,	// (0x00074e2e) list_single_cmail_header_detail_pane_t1

0x3934,	// (0x00074e8e) list_single_cmail_header_editor_pane_bg_ParamLimits

0x3934,	// (0x00074e8e) list_single_cmail_header_editor_pane_bg

0xc9f3,	// (0x0007df4d) list_cmail_body_pane_g1

0xcd8c,	// (0x0007e2e6) list_cmail_body_pane_t1

0x1cc6,	// (0x00073220) list_single_cmail_header_editor_pane_bg_g1

0xe665,	// (0x0007fbbf) list_single_cmail_header_editor_pane_bg_g1_copy1

0x1cd6,	// (0x00073230) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1cce,	// (0x00073228) list_single_cmail_header_editor_pane_bg_g1_copy3

0x1f20,	// (0x0007347a) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1cf6,	// (0x00073250) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x1ce6,	// (0x00073240) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1cee,	// (0x00073248) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe645,	// (0x0007fb9f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa5ef,	// (0x0007bb49) calenote_gesture_pane_ParamLimits

0xa5ef,	// (0x0007bb49) calenote_gesture_pane

0xa609,	// (0x0007bb63) calenote_window_pane_ParamLimits

0xa609,	// (0x0007bb63) calenote_window_pane

0xcd9a,	// (0x0007e2f4) popup_note_window_cp01

0xa621,	// (0x0007bb7b) calenote_swipe_1_pane_ParamLimits

0xa621,	// (0x0007bb7b) calenote_swipe_1_pane

0xa2e9,	// (0x0007b843) calenote_swipe_2_pane_ParamLimits

0xa2e9,	// (0x0007b843) calenote_swipe_2_pane

0xcbc9,	// (0x0007e123) calenote_swipe_1_pane_g1_ParamLimits

0xcbc9,	// (0x0007e123) calenote_swipe_1_pane_g1

0xcdac,	// (0x0007e306) calenote_swipe_1_pane_g2_ParamLimits

0xcdac,	// (0x0007e306) calenote_swipe_1_pane_g2

0x0001,

0xfc4e,	// (0x000811a8) calenote_swipe_1_pane_g_ParamLimits

0xfc4e,	// (0x000811a8) calenote_swipe_1_pane_g

0xcdb8,	// (0x0007e312) calenote_swipe_1_pane_t1_ParamLimits

0xcdb8,	// (0x0007e312) calenote_swipe_1_pane_t1

0xcbc9,	// (0x0007e123) calenote_swipe_2_pane_g1_ParamLimits

0xcbc9,	// (0x0007e123) calenote_swipe_2_pane_g1

0xcdd7,	// (0x0007e331) calenote_swipe_2_pane_g2_ParamLimits

0xcdd7,	// (0x0007e331) calenote_swipe_2_pane_g2

0x0001,

0xfc53,	// (0x000811ad) calenote_swipe_2_pane_g_ParamLimits

0xfc53,	// (0x000811ad) calenote_swipe_2_pane_g

0xcde3,	// (0x0007e33d) calenote_swipe_2_pane_t1_ParamLimits

0xcde3,	// (0x0007e33d) calenote_swipe_2_pane_t1

0xce55,	// (0x0007e3af) main_mup_navstr_pane

0x76ec,	// (0x00078c46) main_mup3_pane_t7_ParamLimits

0x76ec,	// (0x00078c46) main_mup3_pane_t7

0x7efa,	// (0x00079454) main_mp4_pane_g6_ParamLimits

0x7efa,	// (0x00079454) main_mp4_pane_g6

0x824b,	// (0x000797a5) main_image3_pane_t4_ParamLimits

0x824b,	// (0x000797a5) main_image3_pane_t4

0xa634,	// (0x0007bb8e) popup_navstr_preview_pane_ParamLimits

0xa634,	// (0x0007bb8e) popup_navstr_preview_pane

0xa640,	// (0x0007bb9a) scroll_navstr_pane_ParamLimits

0xa640,	// (0x0007bb9a) scroll_navstr_pane

0xce55,	// (0x0007e3af) bg_popup_preview_window_pane_cp04

0xce0a,	// (0x0007e364) popup_navstr_preview_pane_t1

0xa64c,	// (0x0007bba6) scroll_navstr_pane_g1_ParamLimits

0xa64c,	// (0x0007bba6) scroll_navstr_pane_g1

0xa659,	// (0x0007bbb3) scroll_navstr_pane_t1_ParamLimits

0xa659,	// (0x0007bbb3) scroll_navstr_pane_t1

0xcda3,	// (0x0007e2fd) bg_button_pane_cp014

0xcda3,	// (0x0007e2fd) bg_button_pane_cp030

0x35c7,	// (0x00074b21) list_double_fisheye_pane_g4_ParamLimits

0x35c7,	// (0x00074b21) list_double_fisheye_pane_g4

0x35d3,	// (0x00074b2d) list_double_fisheye_pane_g5_ParamLimits

0x35d3,	// (0x00074b2d) list_double_fisheye_pane_g5

0xcd5c,	// (0x0007e2b6) sp_fs_scroll_pane_cp03

0xcc97,	// (0x0007e1f1) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xcca3,	// (0x0007e1fd) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbfc,	// (0x00081156) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xa3e8,	// (0x0007b942) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcd54,	// (0x0007e2ae) sp_fs_scroll_pane_cp02

0xe395,	// (0x0007f8ef) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe395,	// (0x0007f8ef) popup_sp_fs_calendar_preview_list_single_pane

0xce55,	// (0x0007e3af) main_cam6_pano_pane

0xd532,	// (0x0007ea8c) main_mup3_pane_ParamLimits

0xce55,	// (0x0007e3af) main_phacti_pane

0x9e92,	// (0x0007b3ec) bg_button_pane_cp11

0x9eaa,	// (0x0007b404) main_mobtv_info_pane_g2_ParamLimits

0x9eaa,	// (0x0007b404) main_mobtv_info_pane_g2

0x0001,

0xfb5c,	// (0x000810b6) main_mobtv_info_pane_g_ParamLimits

0xfb5c,	// (0x000810b6) main_mobtv_info_pane_g

0xe25b,	// (0x0007f7b5) sc_clock_pane_t5_ParamLimits

0xe25b,	// (0x0007f7b5) sc_clock_pane_t5

0xf01e,	// (0x00080578) main_radioblah_pane_g1_ParamLimits

0xf02c,	// (0x00080586) main_radioblah_pane_t3_ParamLimits

0xf02c,	// (0x00080586) main_radioblah_pane_t3

0xf02c,	// (0x00080586) main_radioblah_pane_t4_ParamLimits

0xf02c,	// (0x00080586) main_radioblah_pane_t4

0xce5f,	// (0x0007e3b9) main_radioblah_text_pane_ParamLimits

0xce5f,	// (0x0007e3b9) main_radioblah_text_pane

0xcb00,	// (0x0007e05a) main_radioblah_info_pane_g1_ParamLimits

0xcb44,	// (0x0007e09e) main_radioblah_info_pane_t4_ParamLimits

0xcb44,	// (0x0007e09e) main_radioblah_info_pane_t4

0xd532,	// (0x0007ea8c) main_sp_fs_calendar_pane

0xa66b,	// (0x0007bbc5) main_phacti_pane_g1

0xa673,	// (0x0007bbcd) phacti_note_pane_ParamLimits

0xa673,	// (0x0007bbcd) phacti_note_pane

0xce21,	// (0x0007e37b) phacti_term_pane_ParamLimits

0xce21,	// (0x0007e37b) phacti_term_pane

0xce36,	// (0x0007e390) phacti_note_pane_t1_ParamLimits

0xce36,	// (0x0007e390) phacti_note_pane_t1

0x394b,	// (0x00074ea5) phacti_term_pane_g1

0x3953,	// (0x00074ead) phacti_term_pane_t1_ParamLimits

0x3953,	// (0x00074ead) phacti_term_pane_t1

0xce4d,	// (0x0007e3a7) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd5c9,	// (0x0007eb23) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc5d,	// (0x000811b7) popup_sp_fs_calendar_preview_list_single_pane_g

0xd5d1,	// (0x0007eb2b) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xd5d1,	// (0x0007eb2b) popup_sp_fs_calendar_preview_list_single_pane_t1

0xd615,	// (0x0007eb6f) aid_popup_sp_fs_bg_corner_pane

0xe23d,	// (0x0007f797) popup_sp_fs_calendar_preview_bg_pane_g1

0xce55,	// (0x0007e3af) popup_sp_fs_calendar_preview_bg_pane

0xd61d,	// (0x0007eb77) popup_sp_fs_calendar_preview_list_pane

0xee21,	// (0x0008037b) bg_main_sp_fs_cale_pane_ParamLimits

0xee21,	// (0x0008037b) bg_main_sp_fs_cale_pane

0x3986,	// (0x00074ee0) listscroll_cale_mrui_pane_ParamLimits

0x3986,	// (0x00074ee0) listscroll_cale_mrui_pane

0x399b,	// (0x00074ef5) listscroll_sp_fs_schedule_track_pane

0x39a4,	// (0x00074efe) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x39a4,	// (0x00074efe) main_sp_fs_ctrlbar_pane_cp01

0xd625,	// (0x0007eb7f) main_sp_fs_ribbon_pane

0x39b7,	// (0x00074f11) popup_sp_fs_cale_preview_window

0xa6d6,	// (0x0007bc30) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa6d6,	// (0x0007bc30) list_single_sp_fs_schedule_track_pane

0xce5f,	// (0x0007e3b9) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xce5f,	// (0x0007e3b9) bg_sp_fs_highlight_list_pane_cp03

0xa6ed,	// (0x0007bc47) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa6ed,	// (0x0007bc47) list_single_sp_fs_schedule_track_pane_g1

0xa6f9,	// (0x0007bc53) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa6f9,	// (0x0007bc53) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc62,	// (0x000811bc) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc62,	// (0x000811bc) list_single_sp_fs_schedule_track_pane_g

0xa705,	// (0x0007bc5f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa705,	// (0x0007bc5f) list_single_sp_fs_schedule_track_pane_t1

0xa723,	// (0x0007bc7d) sp_fs_schedule_track_pane_ParamLimits

0xa723,	// (0x0007bc7d) sp_fs_schedule_track_pane

0xd62d,	// (0x0007eb87) sp_fs_schedule_track_pane_g1

0xd635,	// (0x0007eb8f) sp_fs_schedule_track_pane_g2

0xd63d,	// (0x0007eb97) sp_fs_schedule_track_pane_g3

0xd645,	// (0x0007eb9f) sp_fs_schedule_track_pane_g4

0xd64d,	// (0x0007eba7) sp_fs_schedule_track_pane_g5

0x0004,

0xfc67,	// (0x000811c1) sp_fs_schedule_track_pane_g

0x1cc6,	// (0x00073220) bg_sp_fs_schedule_viewer_highlight_g1

0xe665,	// (0x0007fbbf) bg_sp_fs_schedule_viewer_highlight_g2

0x1cce,	// (0x00073228) bg_sp_fs_schedule_viewer_highlight_g3

0x1cd6,	// (0x00073230) bg_sp_fs_schedule_viewer_highlight_g4

0x1f20,	// (0x0007347a) bg_sp_fs_schedule_viewer_highlight_g5

0x1ce6,	// (0x00073240) bg_sp_fs_schedule_viewer_highlight_g6

0x1cee,	// (0x00073248) bg_sp_fs_schedule_viewer_highlight_g7

0x1cf6,	// (0x00073250) bg_sp_fs_schedule_viewer_highlight_g8

0xe645,	// (0x0007fb9f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc72,	// (0x000811cc) bg_sp_fs_schedule_viewer_highlight_g

0xce55,	// (0x0007e3af) bg_main_sp_fs_ribbon_pane

0xa735,	// (0x0007bc8f) main_sp_fs_ribbon_pane_g1

0xd655,	// (0x0007ebaf) main_sp_fs_ribbon_pane_t1

0xa73e,	// (0x0007bc98) main_sp_fs_ribbon_pane_t2

0xd664,	// (0x0007ebbe) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc85,	// (0x000811df) main_sp_fs_ribbon_pane_t

0xd673,	// (0x0007ebcd) main_sp_fs_ribbon_scheduler_pane

0xd67b,	// (0x0007ebd5) bg_main_sp_fs_ribbon_pane_g1

0xd684,	// (0x0007ebde) bg_main_sp_fs_ribbon_pane_g2

0xd68d,	// (0x0007ebe7) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc8c,	// (0x000811e6) bg_main_sp_fs_ribbon_pane_g

0xd695,	// (0x0007ebef) main_sp_fs_ribbon_scheduler_pane_g1

0xd69e,	// (0x0007ebf8) main_sp_fs_ribbon_scheduler_pane_g2

0xd6a7,	// (0x0007ec01) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc93,	// (0x000811ed) main_sp_fs_ribbon_scheduler_pane_g

0xd6b0,	// (0x0007ec0a) list_cale_mrui_pane

0xa74d,	// (0x0007bca7) sp_fs_scroll_pane_cp07_ParamLimits

0xa74d,	// (0x0007bca7) sp_fs_scroll_pane_cp07

0xa769,	// (0x0007bcc3) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa769,	// (0x0007bcc3) bg_sp_fs_schedule_viewer_highlight

0xd6bd,	// (0x0007ec17) list_single_sp_fs_schedule_track_pane_cp01

0xd6c5,	// (0x0007ec1f) list_sp_fs_schedule_track_pane

0xd6cd,	// (0x0007ec27) sp_fs_scroll_pane_cp06_ParamLimits

0xd6cd,	// (0x0007ec27) sp_fs_scroll_pane_cp06

0xe23d,	// (0x0007f797) bgmain_sp_fs_calendar_pane_g1

0x39c9,	// (0x00074f23) list_single_cale_mrui_pane_ParamLimits

0x39c9,	// (0x00074f23) list_single_cale_mrui_pane

0x39ec,	// (0x00074f46) list_single_cale_mrui_row_pane_ParamLimits

0x39ec,	// (0x00074f46) list_single_cale_mrui_row_pane

0x39f9,	// (0x00074f53) list_single_cale_mrui_row_pane_g1_ParamLimits

0x39f9,	// (0x00074f53) list_single_cale_mrui_row_pane_g1

0x3a31,	// (0x00074f8b) list_single_cale_mrui_row_pane_t1_ParamLimits

0x3a31,	// (0x00074f8b) list_single_cale_mrui_row_pane_t1

0x3a43,	// (0x00074f9d) list_single_cale_mrui_row_pane_t2_ParamLimits

0x3a43,	// (0x00074f9d) list_single_cale_mrui_row_pane_t2

0x3aa9,	// (0x00075003) list_single_cale_mrui_row_pane_t3_ParamLimits

0x3aa9,	// (0x00075003) list_single_cale_mrui_row_pane_t3

0x3ad8,	// (0x00075032) list_single_cale_mrui_row_pane_t4_ParamLimits

0x3ad8,	// (0x00075032) list_single_cale_mrui_row_pane_t4

0x0003,

0xfca1,	// (0x000811fb) list_single_cale_mrui_row_pane_t_ParamLimits

0xfca1,	// (0x000811fb) list_single_cale_mrui_row_pane_t

0x3b09,	// (0x00075063) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x3b09,	// (0x00075063) list_single_cmail_header_editor_pane_bg_cp01

0x3b33,	// (0x0007508d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x3b33,	// (0x0007508d) list_single_cmail_header_editor_pane_bg_cp02

0xd6ec,	// (0x0007ec46) main_radioblah_text_pane_t1_ParamLimits

0xd6ec,	// (0x0007ec46) main_radioblah_text_pane_t1

0xd706,	// (0x0007ec60) cam6_indi_pane_cp01

0xd70e,	// (0x0007ec68) cam6_mode_pane_cp01

0xd716,	// (0x0007ec70) cam6_pano_pane

0xd71f,	// (0x0007ec79) cam6_zoom_pane_cp01

0xd729,	// (0x0007ec83) cam6_pano_image_pane

0xd732,	// (0x0007ec8c) cam6_pano_pane_g1

0xc9f3,	// (0x0007df4d) cam6_pano_pane_g2

0xd73b,	// (0x0007ec95) cam6_pano_pane_g3

0xd744,	// (0x0007ec9e) cam6_pano_pane_g4

0x1a06,	// (0x00072f60) cam6_pano_pane_g5

0xd74d,	// (0x0007eca7) cam6_pano_pane_g6

0xd755,	// (0x0007ecaf) cam6_pano_pane_g7

0xd75d,	// (0x0007ecb7) cam6_pano_pane_g8

0xd766,	// (0x0007ecc0) cam6_pano_pane_g9

0x0008,

0xfcaa,	// (0x00081204) cam6_pano_pane_g

0xce55,	// (0x0007e3af) main_browser_tag_pane

0xce02,	// (0x0007e35c) grid_navstr_albumart_pane

0xd771,	// (0x0007eccb) cell_navstr_albumart_pane_ParamLimits

0xd771,	// (0x0007eccb) cell_navstr_albumart_pane

0xd78d,	// (0x0007ece7) cell_navstr_albumart_pane_g1

0x0f2e,	// (0x00072488) cell_navstr_albumart_pane_g2

0x0f3e,	// (0x00072498) cell_navstr_albumart_pane_g3

0x0f36,	// (0x00072490) cell_navstr_albumart_pane_g4

0x0003,

0xfcbd,	// (0x00081217) cell_navstr_albumart_pane_g

0xa776,	// (0x0007bcd0) bt_list_pane_ParamLimits

0xa776,	// (0x0007bcd0) bt_list_pane

0xa78f,	// (0x0007bce9) bt_list_pane_t1

0xa79e,	// (0x0007bcf8) bt_list_pane_t2

0x0001,

0xfcc6,	// (0x00081220) bt_list_pane_t

0xce55,	// (0x0007e3af) main_cale_prevew_pane

0xa7ad,	// (0x0007bd07) popup_cale_preview_window_ParamLimits

0xa7ad,	// (0x0007bd07) popup_cale_preview_window

0xd532,	// (0x0007ea8c) bg_popup_preview_window_pane_cp05_ParamLimits

0xd532,	// (0x0007ea8c) bg_popup_preview_window_pane_cp05

0xd795,	// (0x0007ecef) list_cale_preview_pane_ParamLimits

0xd795,	// (0x0007ecef) list_cale_preview_pane

0xa7ca,	// (0x0007bd24) list_double_cale_preview_pane_ParamLimits

0xa7ca,	// (0x0007bd24) list_double_cale_preview_pane

0xa7de,	// (0x0007bd38) list_single_cale_preview_pane_ParamLimits

0xa7de,	// (0x0007bd38) list_single_cale_preview_pane

0xa7f6,	// (0x0007bd50) list_single_cale_preview_pane_g1

0xa7fe,	// (0x0007bd58) list_single_cale_preview_pane_t1_ParamLimits

0xa7fe,	// (0x0007bd58) list_single_cale_preview_pane_t1

0xa813,	// (0x0007bd6d) list_double_cale_preview_pane_g1

0xa81b,	// (0x0007bd75) list_double_cale_preview_pane_t1_ParamLimits

0xa81b,	// (0x0007bd75) list_double_cale_preview_pane_t1

0xa830,	// (0x0007bd8a) list_double_cale_preview_pane_t2_ParamLimits

0xa830,	// (0x0007bd8a) list_double_cale_preview_pane_t2

0x0001,

0xfccb,	// (0x00081225) list_double_cale_preview_pane_t_ParamLimits

0xfccb,	// (0x00081225) list_double_cale_preview_pane_t

0xce55,	// (0x0007e3af) main_ezdial_pane

0xd532,	// (0x0007ea8c) main_sp_fs_email_pane_ParamLimits

0xa349,	// (0x0007b8a3) cmail_ddmenu_btn01_pane_ParamLimits

0xa349,	// (0x0007b8a3) cmail_ddmenu_btn01_pane

0xa366,	// (0x0007b8c0) cmail_ddmenu_btn02_pane_ParamLimits

0xa366,	// (0x0007b8c0) cmail_ddmenu_btn02_pane

0xa384,	// (0x0007b8de) cmail_ddmenu_btn03_pane_ParamLimits

0xa384,	// (0x0007b8de) cmail_ddmenu_btn03_pane

0xa425,	// (0x0007b97f) main_sp_fs_ctrlbar_pane_ParamLimits

0xa43f,	// (0x0007b999) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa573,	// (0x0007bacd) list_cmail_body_pane_ParamLimits

0xcd76,	// (0x0007e2d0) bg_button_pane_cp12

0xcd7f,	// (0x0007e2d9) list_single_cmail_header_detail_pane_g3_ParamLimits

0xcd7f,	// (0x0007e2d9) list_single_cmail_header_detail_pane_g3

0x3910,	// (0x00074e6a) list_single_cmail_header_detail_pane_t2_ParamLimits

0x3910,	// (0x00074e6a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc49,	// (0x000811a3) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc49,	// (0x000811a3) list_single_cmail_header_detail_pane_t

0x3968,	// (0x00074ec2) phacti_term_pane_t2_ParamLimits

0x3968,	// (0x00074ec2) phacti_term_pane_t2

0x0001,

0xfc58,	// (0x000811b2) phacti_term_pane_t_ParamLimits

0xfc58,	// (0x000811b2) phacti_term_pane_t

0xd7a1,	// (0x0007ecfb) aid_size_list_single_double

0xa848,	// (0x0007bda2) popup_ezdial_listscroll_window

0xd7ad,	// (0x0007ed07) popup_number_entry_window_cp01

0xe439,	// (0x0007f993) bg_popup_call_pane_cp09

0xd7ba,	// (0x0007ed14) ezdial_list_pane

0xd7c2,	// (0x0007ed1c) scroll_pane_cp23

0x12a2,	// (0x000727fc) bg_button_pane_cp028_ParamLimits

0x12a2,	// (0x000727fc) bg_button_pane_cp028

0xa864,	// (0x0007bdbe) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa864,	// (0x0007bdbe) cmail_ddmenu_btn01_pane_g1

0xa876,	// (0x0007bdd0) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa876,	// (0x0007bdd0) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcd0,	// (0x0008122a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcd0,	// (0x0008122a) cmail_ddmenu_btn01_pane_g

0xd7ca,	// (0x0007ed24) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd7ca,	// (0x0007ed24) cmail_ddmenu_btn01_pane_t1

0xee21,	// (0x0008037b) bg_button_pane_cp029_ParamLimits

0xee21,	// (0x0008037b) bg_button_pane_cp029

0xa882,	// (0x0007bddc) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa882,	// (0x0007bddc) cmail_ddmenu_btn02_pane_g1

0xa89a,	// (0x0007bdf4) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa89a,	// (0x0007bdf4) cmail_ddmenu_btn02_pane_t1

0xce5f,	// (0x0007e3b9) bg_button_pane_cp031_ParamLimits

0xce5f,	// (0x0007e3b9) bg_button_pane_cp031

0xa882,	// (0x0007bddc) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa882,	// (0x0007bddc) cmail_ddmenu_btn03_pane_g1

0xa89a,	// (0x0007bdf4) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa89a,	// (0x0007bdf4) cmail_ddmenu_btn03_pane_t1

0xe247,	// (0x0007f7a1) cell_dialer2_keypad_pane_t1_ParamLimits

0x1a34,	// (0x00072f8e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x1a34,	// (0x00072f8e) cell_dialer2_keypad_pane_t1_copy1

0x9cbf,	// (0x0007b219) ncimui_group_button_pane

0xd532,	// (0x0007ea8c) main_sp_fs_calendar_pane_ParamLimits

0xa58d,	// (0x0007bae7) list_single_cmail_header_caption_pane_ParamLimits

0x397d,	// (0x00074ed7) aid_recal_txt_sm_pane

0xce55,	// (0x0007e3af) mian_recal_day_pane

0x39b7,	// (0x00074f11) popup_sp_fs_cale_preview_window_ParamLimits

0xd7e0,	// (0x0007ed3a) list_recal_day_pane

0x3b6d,	// (0x000750c7) list_single_recal_day_pane_ParamLimits

0x3b6d,	// (0x000750c7) list_single_recal_day_pane

0xd807,	// (0x0007ed61) list_single_recal_day_pane_g1_ParamLimits

0xd807,	// (0x0007ed61) list_single_recal_day_pane_g1

0x3b7f,	// (0x000750d9) list_single_recal_day_pane_g2_ParamLimits

0x3b7f,	// (0x000750d9) list_single_recal_day_pane_g2

0x3b8b,	// (0x000750e5) list_single_recal_day_pane_g3_ParamLimits

0x3b8b,	// (0x000750e5) list_single_recal_day_pane_g3

0x3b97,	// (0x000750f1) list_single_recal_day_pane_g4_ParamLimits

0x3b97,	// (0x000750f1) list_single_recal_day_pane_g4

0x3ba5,	// (0x000750ff) list_single_recal_day_pane_g5_ParamLimits

0x3ba5,	// (0x000750ff) list_single_recal_day_pane_g5

0x3bbb,	// (0x00075115) list_single_recal_day_pane_g6_ParamLimits

0x3bbb,	// (0x00075115) list_single_recal_day_pane_g6

0x0004,

0xfcdf,	// (0x00081239) list_single_recal_day_pane_g_ParamLimits

0xfcdf,	// (0x00081239) list_single_recal_day_pane_g

0x3bcf,	// (0x00075129) list_single_recal_day_pane_t1

0x3be1,	// (0x0007513b) list_single_recal_day_pane_t2

0x0001,

0xfcea,	// (0x00081244) list_single_recal_day_pane_t

0xa8be,	// (0x0007be18) ncimui_query_button_pane_ParamLimits

0xa8be,	// (0x0007be18) ncimui_query_button_pane

0xa8ce,	// (0x0007be28) ncimui_query_button_pane_t1_ParamLimits

0xa8ce,	// (0x0007be28) ncimui_query_button_pane_t1

0xd813,	// (0x0007ed6d) ncimui_query_button_pane_t2_ParamLimits

0xd813,	// (0x0007ed6d) ncimui_query_button_pane_t2

0x0001,

0xfcef,	// (0x00081249) ncimui_query_button_pane_t_ParamLimits

0xfcef,	// (0x00081249) ncimui_query_button_pane_t

0xa8e1,	// (0x0007be3b) query_button_pane_ParamLimits

0xa8e1,	// (0x0007be3b) query_button_pane

0xce55,	// (0x0007e3af) bg_button_pane_cp0028

0xd826,	// (0x0007ed80) query_button_pane_t1

0x6be6,	// (0x00078140) main_tport_pane_ParamLimits

0xa45a,	// (0x0007b9b4) bg_popup_window_pane_cp01_ParamLimits

0xa45a,	// (0x0007b9b4) bg_popup_window_pane_cp01

0xa468,	// (0x0007b9c2) heading_pane_cp08_ParamLimits

0xa468,	// (0x0007b9c2) heading_pane_cp08

0xa476,	// (0x0007b9d0) heading_pane_cp07_ParamLimits

0xa476,	// (0x0007b9d0) heading_pane_cp07

0xa50c,	// (0x0007ba66) cell_tport_appsw_pane_g2

0x0002,

0xfc36,	// (0x00081190) cell_tport_appsw_pane_g

0x30e4,	// (0x0007463e) input_candi_list_open_g1

0xe83f,	// (0x0007fd99) list_cale_time_pane_g6_ParamLimits

0xe83f,	// (0x0007fd99) list_cale_time_pane_g6

0x70d0,	// (0x0007862a) aid_size_touch_calib_1_ParamLimits

0x70d0,	// (0x0007862a) aid_size_touch_calib_1

0x70dc,	// (0x00078636) aid_size_touch_calib_2_ParamLimits

0x70dc,	// (0x00078636) aid_size_touch_calib_2

0x70ea,	// (0x00078644) aid_size_touch_calib_3_ParamLimits

0x70ea,	// (0x00078644) aid_size_touch_calib_3

0x70fa,	// (0x00078654) aid_size_touch_calib_4_ParamLimits

0x70fa,	// (0x00078654) aid_size_touch_calib_4

0x7108,	// (0x00078662) main_touch_calib_button_group_pane_ParamLimits

0x7108,	// (0x00078662) main_touch_calib_button_group_pane

0x7116,	// (0x00078670) main_touch_calib_pane_g1_ParamLimits

0x7122,	// (0x0007867c) main_touch_calib_pane_g2_ParamLimits

0x712e,	// (0x00078688) main_touch_calib_pane_g3_ParamLimits

0x713a,	// (0x00078694) main_touch_calib_pane_g4_ParamLimits

0xf689,	// (0x00080be3) main_touch_calib_pane_g_ParamLimits

0x7146,	// (0x000786a0) main_touch_calib_pane_t1_ParamLimits

0x715d,	// (0x000786b7) main_touch_calib_pane_t2_ParamLimits

0x7176,	// (0x000786d0) main_touch_calib_pane_t3_ParamLimits

0x718c,	// (0x000786e6) main_touch_calib_pane_t4_ParamLimits

0x71a2,	// (0x000786fc) main_touch_calib_pane_t5_ParamLimits

0xf692,	// (0x00080bec) main_touch_calib_pane_t_ParamLimits

0x17c1,	// (0x00072d1b) list_single_fp_cale_pane_g3_ParamLimits

0x17c1,	// (0x00072d1b) list_single_fp_cale_pane_g3

0xd532,	// (0x0007ea8c) bg_button_pane_cp012_ParamLimits

0xd532,	// (0x0007ea8c) bg_vkb2_func_pane_cp03_ParamLimits

0x8f60,	// (0x0007a4ba) cell_vitu2_function_top_pane_g1_ParamLimits

0xd532,	// (0x0007ea8c) bg_vkb2_func_pane_cp04_ParamLimits

0x9c45,	// (0x0007b19f) main_ncimui_button_group_pane_ParamLimits

0x9c45,	// (0x0007b19f) main_ncimui_button_group_pane

0x9cad,	// (0x0007b207) main_ncimui_pane_t3_ParamLimits

0x9cad,	// (0x0007b207) main_ncimui_pane_t3

0xce18,	// (0x0007e372) phacti_button_group_pane

0xd7a1,	// (0x0007ecfb) aid_size_list_single_double_ParamLimits

0xa848,	// (0x0007bda2) popup_ezdial_listscroll_window_ParamLimits

0xd7ad,	// (0x0007ed07) popup_number_entry_window_cp01_ParamLimits

0xa8ee,	// (0x0007be48) phacti_button_pane_ParamLimits

0xa8ee,	// (0x0007be48) phacti_button_pane

0xce55,	// (0x0007e3af) bg_button_pane_cp14

0xd834,	// (0x0007ed8e) phacti_button_pane_t1

0xa8ff,	// (0x0007be59) main_touch_calib_button_pane_ParamLimits

0xa8ff,	// (0x0007be59) main_touch_calib_button_pane

0xe29b,	// (0x0007f7f5) bg_button_pane_cp18_ParamLimits

0xe29b,	// (0x0007f7f5) bg_button_pane_cp18

0xd842,	// (0x0007ed9c) main_touch_calib_button_pane_t1_ParamLimits

0xd842,	// (0x0007ed9c) main_touch_calib_button_pane_t1

0xd858,	// (0x0007edb2) main_touch_calib_button_pane_t2_ParamLimits

0xd858,	// (0x0007edb2) main_touch_calib_button_pane_t2

0x0001,

0xfcf4,	// (0x0008124e) main_touch_calib_button_pane_t_ParamLimits

0xfcf4,	// (0x0008124e) main_touch_calib_button_pane_t

0xce55,	// (0x0007e3af) cell_ncimui_button_pane

0xce55,	// (0x0007e3af) bg_button_pane_cp032

0xd876,	// (0x0007edd0) cell_ncimui_button_pane_t1

0x816a,	// (0x000796c4) image3_infobar_pane_ParamLimits

0x816a,	// (0x000796c4) image3_infobar_pane

0xa003,	// (0x0007b55d) fs_bigclock_status_pane_ParamLimits

0xa003,	// (0x0007b55d) fs_bigclock_status_pane

0xa010,	// (0x0007b56a) main_fs_bigclock_clock_pane_ParamLimits

0xa010,	// (0x0007b56a) main_fs_bigclock_clock_pane

0xa02c,	// (0x0007b586) main_fs_bigclock_indi_pane_ParamLimits

0xa02c,	// (0x0007b586) main_fs_bigclock_indi_pane

0xa05a,	// (0x0007b5b4) main_fs_bigclock_swipe_pane_ParamLimits

0xa05a,	// (0x0007b5b4) main_fs_bigclock_swipe_pane

0xce55,	// (0x0007e3af) main_fs_clock_dumped_data

0xa094,	// (0x0007b5ee) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xa094,	// (0x0007b5ee) list_single_fs_bigclock_indicator_pane_g1

0xa0b3,	// (0x0007b60d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xa0b3,	// (0x0007b60d) list_single_fs_bigclock_indicator_pane_g2

0xa0cd,	// (0x0007b627) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xa0cd,	// (0x0007b627) list_single_fs_bigclock_indicator_pane_g3

0xa0e9,	// (0x0007b643) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xa0e9,	// (0x0007b643) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb90,	// (0x000810ea) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb90,	// (0x000810ea) list_single_fs_bigclock_indicator_pane_g

0xa118,	// (0x0007b672) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xa118,	// (0x0007b672) list_single_fs_bigclock_indicator_pane_t1

0xa140,	// (0x0007b69a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xa140,	// (0x0007b69a) list_single_fs_bigclock_indicator_pane_t2

0xa168,	// (0x0007b6c2) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xa168,	// (0x0007b6c2) list_single_fs_bigclock_indicator_pane_t3

0xa190,	// (0x0007b6ea) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xa190,	// (0x0007b6ea) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb9b,	// (0x000810f5) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb9b,	// (0x000810f5) list_single_fs_bigclock_indicator_pane_t

0xd884,	// (0x0007edde) image3_infobar_fav_pane_ParamLimits

0xd884,	// (0x0007edde) image3_infobar_fav_pane

0xd894,	// (0x0007edee) image3_infobar_loc_pane_ParamLimits

0xd894,	// (0x0007edee) image3_infobar_loc_pane

0xd8aa,	// (0x0007ee04) image3_infobar_time_pane_ParamLimits

0xd8aa,	// (0x0007ee04) image3_infobar_time_pane

0xe23d,	// (0x0007f797) image3_infobar_time_pane_g1

0xd8ba,	// (0x0007ee14) image3_infobar_time_pane_t1

0xe23d,	// (0x0007f797) image3_infobar_loc_pane_g1

0xd8c8,	// (0x0007ee22) image3_infobar_loc_pane_g2

0x0001,

0xfcf9,	// (0x00081253) image3_infobar_loc_pane_g

0xd8d0,	// (0x0007ee2a) image3_infobar_loc_pane_t1

0xe23d,	// (0x0007f797) image3_infobar_fav_pane_g1

0xd8de,	// (0x0007ee38) image3_infobar_fav_pane_g2

0x0001,

0xfcfe,	// (0x00081258) image3_infobar_fav_pane_g

0xd8e6,	// (0x0007ee40) fs_bigclock_status_battery_pane

0xd8ef,	// (0x0007ee49) fs_bigclock_status_signal_pane

0xd8f8,	// (0x0007ee52) fs_bigclock_status_title_pane

0xd901,	// (0x0007ee5b) fs_bigclock_status_signal_pane_g1

0xd90a,	// (0x0007ee64) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd03,	// (0x0008125d) fs_bigclock_status_signal_pane_g

0xd912,	// (0x0007ee6c) fs_bigclock_status_battery_pane_g1

0xd91b,	// (0x0007ee75) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd08,	// (0x00081262) fs_bigclock_status_battery_pane_g

0xd923,	// (0x0007ee7d) fs_bigclock_status_title_pane_t1

0xa90f,	// (0x0007be69) main_fs_bigclock_clock_pane_g1

0xa90f,	// (0x0007be69) main_fs_bigclock_clock_pane_g2

0xa91e,	// (0x0007be78) main_fs_bigclock_clock_pane_g3

0xa91e,	// (0x0007be78) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd0d,	// (0x00081267) main_fs_bigclock_clock_pane_g

0xa92e,	// (0x0007be88) main_fs_bigclock_clock_pane_t1

0xa943,	// (0x0007be9d) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd16,	// (0x00081270) main_fs_bigclock_clock_pane_t

0xd931,	// (0x0007ee8b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd931,	// (0x0007ee8b) list_single_fs_bigclock_indicator_pane

0xd942,	// (0x0007ee9c) list_single_fs_bigclock_pane_ParamLimits

0xd942,	// (0x0007ee9c) list_single_fs_bigclock_pane

0xd968,	// (0x0007eec2) main_fs_bigclock_indicator_pane_t1

0xd977,	// (0x0007eed1) list_single_fs_bigclock_pane_g1

0xd97f,	// (0x0007eed9) list_single_fs_bigclock_pane_t1

0xe23d,	// (0x0007f797) main_fs_bigclock_swipe_pane_g1

0xd9c2,	// (0x0007ef1c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd27,	// (0x00081281) main_fs_bigclock_swipe_pane_g

0xd9ca,	// (0x0007ef24) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd9ca,	// (0x0007ef24) main_fs_bigclock_swipe_pane_t1

0x5de7,	// (0x00077341) call_type_pane_ParamLimits

0xce55,	// (0x0007e3af) main_btmg_pane

0x3a25,	// (0x00074f7f) list_single_cale_mrui_row_pane_g2_ParamLimits

0x3a25,	// (0x00074f7f) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc9a,	// (0x000811f4) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc9a,	// (0x000811f4) list_single_cale_mrui_row_pane_g

0x3b5b,	// (0x000750b5) list_recal_vselct_arw_lo_pane

0xd7ff,	// (0x0007ed59) list_recal_vselct_arw_up_pane

0x3b63,	// (0x000750bd) list_recal_vselct_pane

0xa99a,	// (0x0007bef4) btmg_button_pane

0xa9a6,	// (0x0007bf00) main_btmg_pane_g1

0xce55,	// (0x0007e3af) bg_button_pane_cp044

0xd9e7,	// (0x0007ef41) btmg_button_pane_t1

0x1080,	// (0x000725da) aid_listscroll_gen

0xd532,	// (0x0007ea8c) main_cntbar_detail_pane

0xcd3d,	// (0x0007e297) list_cmail_folder_pane

0xcd5c,	// (0x0007e2b6) sp_fs_scroll_pane_cp03_ParamLimits

0x3bf3,	// (0x0007514d) list_single_fs_dyc_pane_cp01_ParamLimits

0x3bf3,	// (0x0007514d) list_single_fs_dyc_pane_cp01

0xd9f5,	// (0x0007ef4f) aid_size_cmail_indent

0x3c10,	// (0x0007516a) list_single_dyc_row_pane_cp01

0xa9ce,	// (0x0007bf28) cntbar_detail_list_pane_ParamLimits

0xa9ce,	// (0x0007bf28) cntbar_detail_list_pane

0xaa0e,	// (0x0007bf68) main_cntbar_detail_cont_pane_ParamLimits

0xaa0e,	// (0x0007bf68) main_cntbar_detail_cont_pane

0x5ddb,	// (0x00077335) scroll_pane_cp032_ParamLimits

0x5ddb,	// (0x00077335) scroll_pane_cp032

0xaa1a,	// (0x0007bf74) cntbar_detail_list_event_pane_ParamLimits

0xaa1a,	// (0x0007bf74) cntbar_detail_list_event_pane

0xa9dc,	// (0x0007bf36) cntbar_detail_list_shct_pane

0xe6b3,	// (0x0007fc0d) aid_list_gen

0xd9fe,	// (0x0007ef58) aid_scroll

0xda07,	// (0x0007ef61) aid_size_touch_scroll_bar

0xaa2a,	// (0x0007bf84) aid_list_double

0xaa33,	// (0x0007bf8d) aid_list_single

0xaa33,	// (0x0007bf8d) aid_list_single_lg

0x3c19,	// (0x00075173) aid_list_z_g_a_sm

0xaa3c,	// (0x0007bf96) aid_list_z_g_d

0x3c21,	// (0x0007517b) aid_txt_z_prm

0x3c2f,	// (0x00075189) aid_txt_z_prm_cp01

0x3c3d,	// (0x00075197) aid_txt_z_sec

0xaa44,	// (0x0007bf9e) main_cntbar_detail_cont_pane_g1_ParamLimits

0xaa44,	// (0x0007bf9e) main_cntbar_detail_cont_pane_g1

0xaa51,	// (0x0007bfab) main_cntbar_detail_cont_pane_g2_ParamLimits

0xaa51,	// (0x0007bfab) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd2c,	// (0x00081286) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd2c,	// (0x00081286) main_cntbar_detail_cont_pane_g

0xda10,	// (0x0007ef6a) main_cntbar_detail_cont_pane_t1

0xda1e,	// (0x0007ef78) main_cntbar_detail_cont_pane_t2

0xda2c,	// (0x0007ef86) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd31,	// (0x0008128b) main_cntbar_detail_cont_pane_t

0xaa5d,	// (0x0007bfb7) cell_cntbar_detail_list_shct_pane_ParamLimits

0xaa5d,	// (0x0007bfb7) cell_cntbar_detail_list_shct_pane

0xda3a,	// (0x0007ef94) cntbar_detail_list_shct_pane_g1

0xda43,	// (0x0007ef9d) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd38,	// (0x00081292) cntbar_detail_list_shct_pane_g

0xaa71,	// (0x0007bfcb) cntbar_detail_list_event_pane_g1_ParamLimits

0xaa71,	// (0x0007bfcb) cntbar_detail_list_event_pane_g1

0xaa7d,	// (0x0007bfd7) cntbar_detail_list_event_pane_g2_ParamLimits

0xaa7d,	// (0x0007bfd7) cntbar_detail_list_event_pane_g2

0x0005,

0xfd3d,	// (0x00081297) cntbar_detail_list_event_pane_g_ParamLimits

0xfd3d,	// (0x00081297) cntbar_detail_list_event_pane_g

0xaaeb,	// (0x0007c045) cntbar_detail_list_event_pane_t1_ParamLimits

0xaaeb,	// (0x0007c045) cntbar_detail_list_event_pane_t1

0xab00,	// (0x0007c05a) cntbar_detail_list_event_pane_t2_ParamLimits

0xab00,	// (0x0007c05a) cntbar_detail_list_event_pane_t2

0x0002,

0xfd4a,	// (0x000812a4) cntbar_detail_list_event_pane_t_ParamLimits

0xfd4a,	// (0x000812a4) cntbar_detail_list_event_pane_t

0xe23d,	// (0x0007f797) cell_cntbar_detail_list_shct_pane_g1

0x6194,	// (0x000776ee) navi_pane_mv_g3

0xd532,	// (0x0007ea8c) main_cntbar_detail_pane_ParamLimits

0xce55,	// (0x0007e3af) main_notif_wgt_pane

0x7e27,	// (0x00079381) aid_tch_main_mp4_pane_g4

0x80fc,	// (0x00079656) popup_slider_window_cp02

0x3b51,	// (0x000750ab) list_recal_day_event_pane

0xa9ae,	// (0x0007bf08) cntbar_detail_btn_pane_ParamLimits

0xa9ae,	// (0x0007bf08) cntbar_detail_btn_pane

0xa9be,	// (0x0007bf18) cntbar_detail_btn_pane_cp01_ParamLimits

0xa9be,	// (0x0007bf18) cntbar_detail_btn_pane_cp01

0xa9dc,	// (0x0007bf36) cntbar_detail_list_shct_pane_ParamLimits

0xa9e8,	// (0x0007bf42) cntbar_detail_pane_g1_ParamLimits

0xa9e8,	// (0x0007bf42) cntbar_detail_pane_g1

0xa9f8,	// (0x0007bf52) cntbar_detail_pane_t1_ParamLimits

0xa9f8,	// (0x0007bf52) cntbar_detail_pane_t1

0xaa89,	// (0x0007bfe3) cntbar_detail_list_event_pane_g3_ParamLimits

0xaa89,	// (0x0007bfe3) cntbar_detail_list_event_pane_g3

0xaaa1,	// (0x0007bffb) cntbar_detail_list_event_pane_g4_ParamLimits

0xaaa1,	// (0x0007bffb) cntbar_detail_list_event_pane_g4

0xaab9,	// (0x0007c013) cntbar_detail_list_event_pane_g5_ParamLimits

0xaab9,	// (0x0007c013) cntbar_detail_list_event_pane_g5

0xaad1,	// (0x0007c02b) cntbar_detail_list_event_pane_g6_ParamLimits

0xaad1,	// (0x0007c02b) cntbar_detail_list_event_pane_g6

0xab15,	// (0x0007c06f) cntbar_detail_list_event_pane_t3_ParamLimits

0xab15,	// (0x0007c06f) cntbar_detail_list_event_pane_t3

0xab27,	// (0x0007c081) popup_notif_wgt_window_ParamLimits

0xab27,	// (0x0007c081) popup_notif_wgt_window

0xab37,	// (0x0007c091) popup_submenu_window_cp01_ParamLimits

0xab37,	// (0x0007c091) popup_submenu_window_cp01

0xe439,	// (0x0007f993) bg_popup_window_pane_cp10

0xda4c,	// (0x0007efa6) listscroll_notif_wgt_pane

0xda5e,	// (0x0007efb8) list_notif_wgt_window

0xda67,	// (0x0007efc1) scroll_pane_cp033

0xab47,	// (0x0007c0a1) list_notif_wgt_row_pane_ParamLimits

0xab47,	// (0x0007c0a1) list_notif_wgt_row_pane

0xda70,	// (0x0007efca) aid_size_list_notif_wgt_del

0xda7d,	// (0x0007efd7) list_notif_wgt_row_pane_g1

0xda89,	// (0x0007efe3) list_notif_wgt_row_pane_g2

0xda98,	// (0x0007eff2) list_notif_wgt_row_pane_g3

0x0002,

0xfd51,	// (0x000812ab) list_notif_wgt_row_pane_g

0xdaa5,	// (0x0007efff) list_notif_wgt_row_pane_t1

0xdabb,	// (0x0007f015) list_notif_wgt_row_pane_t2

0xdacd,	// (0x0007f027) list_notif_wgt_row_pane_t3

0x0002,

0xfd58,	// (0x000812b2) list_notif_wgt_row_pane_t

0x1f3a,	// (0x00073494) list_recal_day_event_pane_g1

0xdadf,	// (0x0007f039) list_recal_day_event_pane_t1

0xce55,	// (0x0007e3af) bg_button_pane_cp045

0xab5b,	// (0x0007c0b5) cntbar_detail_btn_pane_t1

0xee21,	// (0x0008037b) main_callh_pane_ParamLimits

0xee21,	// (0x0008037b) main_callh_pane

0xce55,	// (0x0007e3af) main_coverflow0_pane

0xce55,	// (0x0007e3af) main_wgtman_pane

0xa072,	// (0x0007b5cc) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa072,	// (0x0007b5cc) main_fs_bigclock_unlock_btn_pane

0xa504,	// (0x0007ba5e) bg_button_pane_cp16

0xa514,	// (0x0007ba6e) cell_tport_appsw_pane_g3

0xab69,	// (0x0007c0c3) cf0_flow_pane_ParamLimits

0xab69,	// (0x0007c0c3) cf0_flow_pane

0xdaee,	// (0x0007f048) listscroll_cf0_pane

0xdaf9,	// (0x0007f053) main_cf0_pane_g1

0xab78,	// (0x0007c0d2) main_cf0_pane_t1_ParamLimits

0xab78,	// (0x0007c0d2) main_cf0_pane_t1

0xab8c,	// (0x0007c0e6) main_cf0_pane_t2_ParamLimits

0xab8c,	// (0x0007c0e6) main_cf0_pane_t2

0x0001,

0xfd64,	// (0x000812be) main_cf0_pane_t_ParamLimits

0xfd64,	// (0x000812be) main_cf0_pane_t

0xdb0b,	// (0x0007f065) scroll_pane_cp11

0xaba0,	// (0x0007c0fa) cf0_flow_pane_g1

0xaba8,	// (0x0007c102) cf0_flow_pane_g2

0x0001,

0xfd69,	// (0x000812c3) cf0_flow_pane_g

0xabb0,	// (0x0007c10a) cf0_flow_pane_t1

0xce55,	// (0x0007e3af) main_call6_pane

0xce55,	// (0x0007e3af) main_calllock_pane

0xabbe,	// (0x0007c118) call6_btn_grp_pane_ParamLimits

0xabbe,	// (0x0007c118) call6_btn_grp_pane

0xabcb,	// (0x0007c125) call6_pane_g1_ParamLimits

0xabcb,	// (0x0007c125) call6_pane_g1

0xabdb,	// (0x0007c135) popup_call6_1st_window_ParamLimits

0xabdb,	// (0x0007c135) popup_call6_1st_window

0xabeb,	// (0x0007c145) popup_call6_2nd_window_ParamLimits

0xabeb,	// (0x0007c145) popup_call6_2nd_window

0xabfb,	// (0x0007c155) cell_call6_btn_pane_ParamLimits

0xabfb,	// (0x0007c155) cell_call6_btn_pane

0xe439,	// (0x0007f993) bg_popup_call2_in_pane_cp03

0xdb16,	// (0x0007f070) popup_call6_1st_window_g1

0xdb1e,	// (0x0007f078) popup_call6_1st_window_g2

0xdb26,	// (0x0007f080) popup_call6_1st_window_g3

0x0002,

0xfd6e,	// (0x000812c8) popup_call6_1st_window_g

0xdb2e,	// (0x0007f088) popup_call6_1st_window_t1

0xdb3d,	// (0x0007f097) popup_call6_1st_window_t2

0xdb4d,	// (0x0007f0a7) popup_call6_1st_window_t3

0x0002,

0xfd75,	// (0x000812cf) popup_call6_1st_window_t

0xe439,	// (0x0007f993) bg_popup_call2_in_pane_cp04

0xdb5d,	// (0x0007f0b7) popup_call6_2nd_window_g1

0xdb65,	// (0x0007f0bf) popup_call6_2nd_window_g2

0xdb6d,	// (0x0007f0c7) popup_call6_2nd_window_g3

0x0002,

0xfd7c,	// (0x000812d6) popup_call6_2nd_window_g

0xdb75,	// (0x0007f0cf) popup_call6_2nd_window_t1

0xce55,	// (0x0007e3af) bg_button_pane_cp15

0xdbaf,	// (0x0007f109) cell_call6_btn_pane_g1

0xe180,	// (0x0007f6da) cell_call6_btn_pane_t1

0xac0c,	// (0x0007c166) listscroll_wgtman_pane_ParamLimits

0xac0c,	// (0x0007c166) listscroll_wgtman_pane

0xac28,	// (0x0007c182) wgtman_btn_pane_ParamLimits

0xac28,	// (0x0007c182) wgtman_btn_pane

0xec22,	// (0x0008017c) aid_scroll_copy1

0xdb84,	// (0x0007f0de) list_wgtman_pane

0xac5d,	// (0x0007c1b7) wgtman_btn_pane_g1_ParamLimits

0xac5d,	// (0x0007c1b7) wgtman_btn_pane_g1

0xac85,	// (0x0007c1df) wgtman_btn_pane_t1_ParamLimits

0xac85,	// (0x0007c1df) wgtman_btn_pane_t1

0xdb8e,	// (0x0007f0e8) wgtman_btn_pane_t2_ParamLimits

0xdb8e,	// (0x0007f0e8) wgtman_btn_pane_t2

0x0001,

0xfd83,	// (0x000812dd) wgtman_btn_pane_t_ParamLimits

0xfd83,	// (0x000812dd) wgtman_btn_pane_t

0xacbc,	// (0x0007c216) listrow_wgtman_pane_ParamLimits

0xacbc,	// (0x0007c216) listrow_wgtman_pane

0xacd3,	// (0x0007c22d) listrow_wgtman_pane_g1

0xace0,	// (0x0007c23a) listrow_wgtman_pane_g2

0x0001,

0xfd88,	// (0x000812e2) listrow_wgtman_pane_g

0x3c4b,	// (0x000751a5) listrow_wgtman_pane_t1

0x3c63,	// (0x000751bd) listrow_wgtman_pane_t2

0x0001,

0xfd8d,	// (0x000812e7) listrow_wgtman_pane_t

0x3c89,	// (0x000751e3) wait_bar_pane_cp09

0xdba5,	// (0x0007f0ff) main_calllock_btn_pane

0xdbb8,	// (0x0007f112) main_calllock_pane_g1

0xce55,	// (0x0007e3af) bg_button_pane_cp17

0xdbaf,	// (0x0007f109) main_calllock_btn_pane_g1

0xdbc4,	// (0x0007f11e) main_calllock_btn_pane_t1

0xce55,	// (0x0007e3af) main_dialer3_pane

0xce55,	// (0x0007e3af) main_fmrd2_pane

0xe23d,	// (0x0007f797) main_fs_bigclock_unlock_btn_pane_g1

0xad06,	// (0x0007c260) main_fs_bigclock_unlock_btn_pane_t1

0xad14,	// (0x0007c26e) area_fmrd2_info_pane_ParamLimits

0xad14,	// (0x0007c26e) area_fmrd2_info_pane

0xad20,	// (0x0007c27a) area_fmrd2_visual_pane_ParamLimits

0xad20,	// (0x0007c27a) area_fmrd2_visual_pane

0xad2e,	// (0x0007c288) fmrd2_indi_pane_ParamLimits

0xad2e,	// (0x0007c288) fmrd2_indi_pane

0xad3b,	// (0x0007c295) area_fmrd2_visual_pane_g1

0xad43,	// (0x0007c29d) area_fmrd2_visual_pane_t1

0xad53,	// (0x0007c2ad) area_fmrd2_visual_pane_t2

0xad63,	// (0x0007c2bd) area_fmrd2_visual_pane_t3

0x0002,

0xfd97,	// (0x000812f1) area_fmrd2_visual_pane_t

0xad73,	// (0x0007c2cd) area_fmrd2_info_pane_g1

0xad7b,	// (0x0007c2d5) area_fmrd2_info_pane_t1

0xad8b,	// (0x0007c2e5) area_fmrd2_info_pane_t2

0xad9b,	// (0x0007c2f5) area_fmrd2_info_pane_t3

0xadab,	// (0x0007c305) area_fmrd2_info_pane_t4

0x0003,

0xfd9e,	// (0x000812f8) area_fmrd2_info_pane_t

0xadbb,	// (0x0007c315) fmrd2_indi_pane_t1

0xadcb,	// (0x0007c325) fmrd2_indi_pane_t2

0xaddb,	// (0x0007c335) fmrd2_indi_pane_t3

0x0002,

0xfda7,	// (0x00081301) fmrd2_indi_pane_t

0xa0fa,	// (0x0007b654) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xa0fa,	// (0x0007b654) list_single_fs_bigclock_indicator_pane_g5

0xa1af,	// (0x0007b709) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xa1af,	// (0x0007b709) list_single_fs_bigclock_indicator_pane_t5

0xa689,	// (0x0007bbe3) aid_cell_bcale_month_pane_ParamLimits

0xa689,	// (0x0007bbe3) aid_cell_bcale_month_pane

0xa6a7,	// (0x0007bc01) bcale_month_pane_ParamLimits

0xa6a7,	// (0x0007bc01) bcale_month_pane

0xa6c5,	// (0x0007bc1f) bcale_preview_pane_ParamLimits

0xa6c5,	// (0x0007bc1f) bcale_preview_pane

0xd97f,	// (0x0007eed9) list_single_fs_bigclock_pane_t1_ParamLimits

0xd99e,	// (0x0007eef8) list_single_fs_bigclock_pane_t2_ParamLimits

0xd99e,	// (0x0007eef8) list_single_fs_bigclock_pane_t2

0x0001,

0xfd22,	// (0x0008127c) list_single_fs_bigclock_pane_t_ParamLimits

0xfd22,	// (0x0008127c) list_single_fs_bigclock_pane_t

0xacfe,	// (0x0007c258) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd92,	// (0x000812ec) main_fs_bigclock_unlock_btn_pane_g

0xadeb,	// (0x0007c345) aid_dia3_key_size_ParamLimits

0xadeb,	// (0x0007c345) aid_dia3_key_size

0xadf7,	// (0x0007c351) aid_dia3_listrow_size_ParamLimits

0xadf7,	// (0x0007c351) aid_dia3_listrow_size

0xae07,	// (0x0007c361) dia3_keypad_fun_pane_ParamLimits

0xae07,	// (0x0007c361) dia3_keypad_fun_pane

0xae17,	// (0x0007c371) dia3_keypad_num_pane_ParamLimits

0xae17,	// (0x0007c371) dia3_keypad_num_pane

0xae27,	// (0x0007c381) dia3_listscroll_pane_ParamLimits

0xae27,	// (0x0007c381) dia3_listscroll_pane

0xae35,	// (0x0007c38f) dia3_numentry_pane_ParamLimits

0xae35,	// (0x0007c38f) dia3_numentry_pane

0xdbd3,	// (0x0007f12d) dia3_list_pane

0xae43,	// (0x0007c39d) scroll_pane_cp12

0xce55,	// (0x0007e3af) bg_dia3_numentry_pane

0xae4e,	// (0x0007c3a8) dia3_numentry_pane_t1

0xae5d,	// (0x0007c3b7) cell_dia3_key_num_pane

0xae65,	// (0x0007c3bf) cell_dia3_key0_fun_pane_ParamLimits

0xae65,	// (0x0007c3bf) cell_dia3_key0_fun_pane

0xae72,	// (0x0007c3cc) cell_dia3_key1_fun_pane_ParamLimits

0xae72,	// (0x0007c3cc) cell_dia3_key1_fun_pane

0xae7f,	// (0x0007c3d9) dia3_listrow_pane

0xc8af,	// (0x0007de09) bg_dia3_numentry_pane_g1

0xce55,	// (0x0007e3af) bg_button_pane_cp21

0xae8c,	// (0x0007c3e6) cell_dia3_key_num_pane_t1

0xae9a,	// (0x0007c3f4) cell_dia3_key_num_pane_t2

0xaea9,	// (0x0007c403) cell_dia3_key_num_pane_t3

0xaeb8,	// (0x0007c412) cell_dia3_key_num_pane_t4

0x0003,

0xfdae,	// (0x00081308) cell_dia3_key_num_pane_t

0xce55,	// (0x0007e3af) bg_button_pane_cp19

0xaec7,	// (0x0007c421) cell_dia3_key0_fun_pane_g1

0xce55,	// (0x0007e3af) bg_button_pane_cp20

0xaecf,	// (0x0007c429) cell_dia3_key1_fun_pane_g1

0xaed7,	// (0x0007c431) area_left_week_number_pane

0xaeea,	// (0x0007c444) area_top_day_name_pane

0xaef8,	// (0x0007c452) frame_month_view_pane

0xdbde,	// (0x0007f138) grid_month_view_pane

0xaf0d,	// (0x0007c467) cell_top_day_name_pane_ParamLimits

0xaf0d,	// (0x0007c467) cell_top_day_name_pane

0xaf29,	// (0x0007c483) cell_area_left_week_number_pane_ParamLimits

0xaf29,	// (0x0007c483) cell_area_left_week_number_pane

0xaf4a,	// (0x0007c4a4) cell_month_view_pane_ParamLimits

0xaf4a,	// (0x0007c4a4) cell_month_view_pane

0xdbec,	// (0x0007f146) frm_month_g1

0xaf76,	// (0x0007c4d0) frm_month_g2

0xaf87,	// (0x0007c4e1) frm_month_g3

0xaf98,	// (0x0007c4f2) frm_month_g4

0xafa9,	// (0x0007c503) frm_month_g5

0xafba,	// (0x0007c514) frm_month_g6

0xafcd,	// (0x0007c527) frm_month_g7

0xdbf9,	// (0x0007f153) frm_month_g8

0xafe0,	// (0x0007c53a) frm_month_g9

0xafed,	// (0x0007c547) frm_month_g10

0xaffa,	// (0x0007c554) frm_month_g11

0xb007,	// (0x0007c561) frm_month_g12

0xb014,	// (0x0007c56e) frm_month_g13

0xb023,	// (0x0007c57d) frm_month_g14

0xb032,	// (0x0007c58c) frm_month_g15

0xb041,	// (0x0007c59b) frm_month_g16

0x000f,

0xfdb7,	// (0x00081311) frm_month_g

0xdc06,	// (0x0007f160) cell_top_day_name_pane_t1

0xb050,	// (0x0007c5aa) cell_area_left_week_number_pane_g1

0xb05f,	// (0x0007c5b9) cell_area_left_week_number_pane_t1

0xd58b,	// (0x0007eae5) cell_month_view_pane_g1

0xb075,	// (0x0007c5cf) cell_month_view_pane_t1

0xce55,	// (0x0007e3af) main_fps_pane

0xcc5d,	// (0x0007e1b7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xcc5d,	// (0x0007e1b7) cmail_ddmenu_btn02_pane_cp1

0xcc79,	// (0x0007e1d3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xcc79,	// (0x0007e1d3) cmail_ddmenu_btn02_pane_cp2

0xa88e,	// (0x0007bde8) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa88e,	// (0x0007bde8) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcd5,	// (0x0008122f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcd5,	// (0x0008122f) cmail_ddmenu_btn02_pane_g

0xa8ac,	// (0x0007be06) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa8ac,	// (0x0007be06) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcda,	// (0x00081234) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcda,	// (0x00081234) cmail_ddmenu_btn02_pane_t

0xb08b,	// (0x0007c5e5) fps_text_pane_ParamLimits

0xb08b,	// (0x0007c5e5) fps_text_pane

0xb098,	// (0x0007c5f2) main_fps_pane_g1_ParamLimits

0xb098,	// (0x0007c5f2) main_fps_pane_g1

0xb0a4,	// (0x0007c5fe) wait_bar_pane_cp010_ParamLimits

0xb0a4,	// (0x0007c5fe) wait_bar_pane_cp010

0xb0b0,	// (0x0007c60a) fps_text_pane_t1_ParamLimits

0xb0b0,	// (0x0007c60a) fps_text_pane_t1

0x84f4,	// (0x00079a4e) cam4_image_uncrop_pane_g1

0x84fd,	// (0x00079a57) cam4_image_uncrop_pane_g2

0x8506,	// (0x00079a60) cam4_image_uncrop_pane_g3

0x850f,	// (0x00079a69) cam4_image_uncrop_pane_g4

0x0003,

0xf81b,	// (0x00080d75) cam4_image_uncrop_pane_g

0xae7f,	// (0x0007c3d9) dia3_listrow_pane_ParamLimits

0xce55,	// (0x0007e3af) main_phob2_pane

0xa4c1,	// (0x0007ba1b) cell_tport_appsw_pane_cp02_ParamLimits

0xa4c1,	// (0x0007ba1b) cell_tport_appsw_pane_cp02

0xa4d0,	// (0x0007ba2a) cell_tport_appsw_pane_cp03_ParamLimits

0xa4d0,	// (0x0007ba2a) cell_tport_appsw_pane_cp03

0xce55,	// (0x0007e3af) phob2_contact_card_pane

0xce55,	// (0x0007e3af) phob2_listscroll_pane

0xdc19,	// (0x0007f173) phob2_list_pane

0xdc21,	// (0x0007f17b) scroll_pane_cp034

0xb0c9,	// (0x0007c623) phob2_cc_data_pane_ParamLimits

0xb0c9,	// (0x0007c623) phob2_cc_data_pane

0xb0e0,	// (0x0007c63a) phob2_cc_listscroll_pane_ParamLimits

0xb0e0,	// (0x0007c63a) phob2_cc_listscroll_pane

0xb0fc,	// (0x0007c656) list_double_large_graphic_phob2_pane_ParamLimits

0xb0fc,	// (0x0007c656) list_double_large_graphic_phob2_pane

0xb110,	// (0x0007c66a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb110,	// (0x0007c66a) list_double_large_graphic_phob2_pane_g1

0x3c9b,	// (0x000751f5) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x3c9b,	// (0x000751f5) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdd8,	// (0x00081332) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdd8,	// (0x00081332) list_double_large_graphic_phob2_pane_g

0x3cb3,	// (0x0007520d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x3cb3,	// (0x0007520d) list_double_large_graphic_phob2_pane_t1

0x3cc8,	// (0x00075222) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x3cc8,	// (0x00075222) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfde1,	// (0x0008133b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfde1,	// (0x0008133b) list_double_large_graphic_phob2_pane_t

0xce55,	// (0x0007e3af) list_highlight_pane_cp024

0xb12b,	// (0x0007c685) phob2_cc_button_pane

0xb135,	// (0x0007c68f) phob2_cc_data_pane_g1_ParamLimits

0xb135,	// (0x0007c68f) phob2_cc_data_pane_g1

0xb148,	// (0x0007c6a2) phob2_cc_data_pane_g2_ParamLimits

0xb148,	// (0x0007c6a2) phob2_cc_data_pane_g2

0x0001,

0xfde6,	// (0x00081340) phob2_cc_data_pane_g_ParamLimits

0xfde6,	// (0x00081340) phob2_cc_data_pane_g

0xb15c,	// (0x0007c6b6) phob2_cc_data_pane_t1_ParamLimits

0xb15c,	// (0x0007c6b6) phob2_cc_data_pane_t1

0xb17d,	// (0x0007c6d7) phob2_cc_data_pane_t2_ParamLimits

0xb17d,	// (0x0007c6d7) phob2_cc_data_pane_t2

0xb19e,	// (0x0007c6f8) phob2_cc_data_pane_t3_ParamLimits

0xb19e,	// (0x0007c6f8) phob2_cc_data_pane_t3

0x0002,

0xfdeb,	// (0x00081345) phob2_cc_data_pane_t_ParamLimits

0xfdeb,	// (0x00081345) phob2_cc_data_pane_t

0xdc29,	// (0x0007f183) phob2_cc_list_pane_ParamLimits

0xdc29,	// (0x0007f183) phob2_cc_list_pane

0xc7ca,	// (0x0007dd24) scroll_pane_cp035_ParamLimits

0xc7ca,	// (0x0007dd24) scroll_pane_cp035

0xd532,	// (0x0007ea8c) bg_button_pane_cp033

0xb1bf,	// (0x0007c719) phob2_cc_button_pane_g1

0xb1cb,	// (0x0007c725) phob2_cc_button_pane_t1

0xb1e0,	// (0x0007c73a) phob2_cc_button_pane_t2

0x0001,

0xfdf2,	// (0x0008134c) phob2_cc_button_pane_t

0xb1f2,	// (0x0007c74c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb1f2,	// (0x0007c74c) list_double_large_graphic_phob2_cc_pane

0xb23f,	// (0x0007c799) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb23f,	// (0x0007c799) list_double_large_graphic_phob2_cc_pane_g1

0x3cdd,	// (0x00075237) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x3cdd,	// (0x00075237) list_double_large_graphic_phob2_cc_pane_g2

0x3cec,	// (0x00075246) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x3cec,	// (0x00075246) list_double_large_graphic_phob2_cc_pane_g3

0x3cfb,	// (0x00075255) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x3cfb,	// (0x00075255) list_double_large_graphic_phob2_cc_pane_g4

0x3d0c,	// (0x00075266) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x3d0c,	// (0x00075266) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdf7,	// (0x00081351) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdf7,	// (0x00081351) list_double_large_graphic_phob2_cc_pane_g

0x3d1b,	// (0x00075275) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x3d1b,	// (0x00075275) list_double_large_graphic_phob2_cc_pane_t1

0x3d44,	// (0x0007529e) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x3d44,	// (0x0007529e) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe02,	// (0x0008135c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe02,	// (0x0008135c) list_double_large_graphic_phob2_cc_pane_t

0xdc35,	// (0x0007f18f) list_highlight_pane_cp025_ParamLimits

0xdc35,	// (0x0007f18f) list_highlight_pane_cp025

0xd532,	// (0x0007ea8c) bg_button_pane_cp033_ParamLimits

0xb1bf,	// (0x0007c719) phob2_cc_button_pane_g1_ParamLimits

0xb1cb,	// (0x0007c725) phob2_cc_button_pane_t1_ParamLimits

0xb1e0,	// (0x0007c73a) phob2_cc_button_pane_t2_ParamLimits

0xfdf2,	// (0x0008134c) phob2_cc_button_pane_t_ParamLimits

0x405c,	// (0x000755b6) popup_wgtman_window

0x1e0a,	// (0x00073364) scroll_pane_cp038

0xac45,	// (0x0007c19f) wgtman_btn_pane_cp_01_ParamLimits

0xac45,	// (0x0007c19f) wgtman_btn_pane_cp_01

0xdc43,	// (0x0007f19d) wgtman_content_pane

0xdc4c,	// (0x0007f1a6) wgtman_heading_pane

0xce55,	// (0x0007e3af) bg_heading_pane_cp02

0xdc55,	// (0x0007f1af) wgtman_heading_pane_g1

0xdc5d,	// (0x0007f1b7) wgtman_heading_pane_t1

0xdc6b,	// (0x0007f1c5) scroll_pane_cp036

0xdc73,	// (0x0007f1cd) wgtman_list_pane

0xd5e7,	// (0x0007eb41) wgtman_list_pane_t1_ParamLimits

0xd5e7,	// (0x0007eb41) wgtman_list_pane_t1

0x8451,	// (0x000799ab) cam4_grid_pane

0x333a,	// (0x00074894) bg_button_pane_cp015_ParamLimits

0x9126,	// (0x0007a680) bg_button_pane_cp016_ParamLimits

0x9132,	// (0x0007a68c) bg_button_pane_cp017_ParamLimits

0x9165,	// (0x0007a6bf) popup_vitu2_query_window_g3_ParamLimits

0x9165,	// (0x0007a6bf) popup_vitu2_query_window_g3

0x33e2,	// (0x0007493c) popup_vitu2_query_window_t6_ParamLimits

0x33e2,	// (0x0007493c) popup_vitu2_query_window_t6

0x340d,	// (0x00074967) popup_vitu2_query_window_t7_ParamLimits

0x340d,	// (0x00074967) popup_vitu2_query_window_t7

0xd601,	// (0x0007eb5b) cam4_grid_pane_g1

0xd60a,	// (0x0007eb64) cam4_grid_pane_g2

0xdc7b,	// (0x0007f1d5) cam4_grid_pane_g3

0xdc84,	// (0x0007f1de) cam4_grid_pane_g4

0x0003,

0xfe07,	// (0x00081361) cam4_grid_pane_g

0x4c46,	// (0x000761a0) aid_placing_vt_slider_lsc_ParamLimits

0x4f79,	// (0x000764d3) vidtel_button_pane_ParamLimits

0x4f79,	// (0x000764d3) vidtel_button_pane

0xce55,	// (0x0007e3af) bg_button_pane_cp034

0xdc8f,	// (0x0007f1e9) vidtel_button_pane_g1

0xdc97,	// (0x0007f1f1) vidtel_button_pane_t1

0x1f18,	// (0x00073472) aid_size_vtel_slider_touch

0xc7ca,	// (0x0007dd24) scroll_pane_cp039

0x9e1c,	// (0x0007b376) ncim_query_button_pane_cp01_ParamLimits

0x9e3b,	// (0x0007b395) ncimui_query_pane_g1_ParamLimits

0xd532,	// (0x0007ea8c) input_focus_pane_cp012_ParamLimits

0xc8ed,	// (0x0007de47) ncim_query_entry_pane_t1_ParamLimits

0xc7ca,	// (0x0007dd24) scroll_pane_cp039_ParamLimits

0x6106,	// (0x00077660) navi_pane_bcale_mc_g1

0x610e,	// (0x00077668) navi_pane_bcale_mc_t1

0xccaf,	// (0x0007e209) main_sp_fs_email_pane_g1

0xccbb,	// (0x0007e215) main_sp_fs_email_pane_g2

0x0001,

0xfc05,	// (0x0008115f) main_sp_fs_email_pane_g

0xd6df,	// (0x0007ec39) list_single_cale_mrui_row_pane_g3_ParamLimits

0xd6df,	// (0x0007ec39) list_single_cale_mrui_row_pane_g3

0x3bb1,	// (0x0007510b) list_single_recal_day_pane_g5_event_pane

0x3bc7,	// (0x00075121) list_single_recal_day_pane_g7

0xdcad,	// (0x0007f207) list_recal_day_event_pane_cp01

0xdcb6,	// (0x0007f210) list_recal_vselct_arw_lo_pane_cp01

0xdcbe,	// (0x0007f218) list_recal_vselct_arw_up_pane_cp01

0xdcc6,	// (0x0007f220) list_recal_vselct_pane_cp01

0x1f3a,	// (0x00073494) list_recal_day_event_pane_cp01_g1

0x3d6d,	// (0x000752c7) list_recal_day_event_pane_cp01_t1

0x3bcf,	// (0x00075129) list_single_recal_day_pane_t1_ParamLimits

0x3be1,	// (0x0007513b) list_single_recal_day_pane_t2_ParamLimits

0xfcea,	// (0x00081244) list_single_recal_day_pane_t_ParamLimits

0xd510,	// (0x0007ea6a) bg_notes_pane_ParamLimits

0xe279,	// (0x0007f7d3) list_notes_pane_ParamLimits

0x4163,	// (0x000756bd) scroll_pane_cp06_ParamLimits

0xe29b,	// (0x0007f7f5) main_notes_pane_ParamLimits

0xd532,	// (0x0007ea8c) main_welc_pane

0xb272,	// (0x0007c7cc) main_welc_body_pane_ParamLimits

0xb272,	// (0x0007c7cc) main_welc_body_pane

0xb28d,	// (0x0007c7e7) main_welc_opti_pane_ParamLimits

0xb28d,	// (0x0007c7e7) main_welc_opti_pane

0xb2f4,	// (0x0007c84e) main_welc_pane_t1_ParamLimits

0xb2f4,	// (0x0007c84e) main_welc_pane_t1

0xb49a,	// (0x0007c9f4) main_welc_body_row_pane_ParamLimits

0xb49a,	// (0x0007c9f4) main_welc_body_row_pane

0xce5f,	// (0x0007e3b9) main_welc_opti_row_pane_ParamLimits

0xce5f,	// (0x0007e3b9) main_welc_opti_row_pane

0xdce0,	// (0x0007f23a) main_welc_opti_row_pane_g1

0xb4b4,	// (0x0007ca0e) main_welc_opti_row_pane_t1

0xdce8,	// (0x0007f242) main_welc_body_row_pane_t1

0xda56,	// (0x0007efb0) popup_notif_wgt_heading_pane

0xda70,	// (0x0007efca) aid_size_list_notif_wgt_del_ParamLimits

0xda7d,	// (0x0007efd7) list_notif_wgt_row_pane_g1_ParamLimits

0xda89,	// (0x0007efe3) list_notif_wgt_row_pane_g2_ParamLimits

0xda98,	// (0x0007eff2) list_notif_wgt_row_pane_g3_ParamLimits

0xfd51,	// (0x000812ab) list_notif_wgt_row_pane_g_ParamLimits

0xdaa5,	// (0x0007efff) list_notif_wgt_row_pane_t1_ParamLimits

0xdabb,	// (0x0007f015) list_notif_wgt_row_pane_t2_ParamLimits

0xdacd,	// (0x0007f027) list_notif_wgt_row_pane_t3_ParamLimits

0xfd58,	// (0x000812b2) list_notif_wgt_row_pane_t_ParamLimits

0xacd3,	// (0x0007c22d) listrow_wgtman_pane_g1_ParamLimits

0xace0,	// (0x0007c23a) listrow_wgtman_pane_g2_ParamLimits

0xfd88,	// (0x000812e2) listrow_wgtman_pane_g_ParamLimits

0x3c4b,	// (0x000751a5) listrow_wgtman_pane_t1_ParamLimits

0x3c63,	// (0x000751bd) listrow_wgtman_pane_t2_ParamLimits

0xfd8d,	// (0x000812e7) listrow_wgtman_pane_t_ParamLimits

0x3c89,	// (0x000751e3) wait_bar_pane_cp09_ParamLimits

0xce55,	// (0x0007e3af) bg_popup_heading_pane_cp02

0xdcf7,	// (0x0007f251) popup_notif_wgt_heading_pane_g1

0xdcff,	// (0x0007f259) popup_notif_wgt_heading_pane_t1

0xce55,	// (0x0007e3af) main_vids_pane

0xce55,	// (0x0007e3af) vids_listscroll_pane

0xb4c3,	// (0x0007ca1d) scroll_pane_cp040

0xce55,	// (0x0007e3af) vids_list_pane

0xb4ce,	// (0x0007ca28) vids_list_double_pane_ParamLimits

0xb4ce,	// (0x0007ca28) vids_list_double_pane

0xb4e2,	// (0x0007ca3c) vids_list_double_pane_g1

0xb4eb,	// (0x0007ca45) vids_list_double_pane_t1

0xb4fb,	// (0x0007ca55) vids_list_double_pane_t2

0x0001,

0xfe26,	// (0x00081380) vids_list_double_pane_t

0xd532,	// (0x0007ea8c) main_ncimui_pane_ParamLimits

0x9c5d,	// (0x0007b1b7) main_ncimui_pane_g1_ParamLimits

0x9c6b,	// (0x0007b1c5) main_ncimui_pane_g2_ParamLimits

0x9c6b,	// (0x0007b1c5) main_ncimui_pane_g2

0x0001,

0xfb06,	// (0x00081060) main_ncimui_pane_g_ParamLimits

0xfb06,	// (0x00081060) main_ncimui_pane_g

0xb2a8,	// (0x0007c802) main_welc_pane_g1_ParamLimits

0xb2a8,	// (0x0007c802) main_welc_pane_g1

0xb2b4,	// (0x0007c80e) main_welc_pane_g2_ParamLimits

0xb2b4,	// (0x0007c80e) main_welc_pane_g2

0x0003,

0xfe10,	// (0x0008136a) main_welc_pane_g_ParamLimits

0xfe10,	// (0x0008136a) main_welc_pane_g

0xd510,	// (0x0007ea6a) listscroll_mce_pane_ParamLimits

0x61d0,	// (0x0007772a) wait_bar_pane_cp10

0x1088,	// (0x000725e2) main_cale_day_pane_ParamLimits

0x1088,	// (0x000725e2) main_cale_week_pane_ParamLimits

0xd510,	// (0x0007ea6a) main_messa_pane_ParamLimits

0x78f1,	// (0x00078e4b) main_clock2_btn_pane_ParamLimits

0x78f1,	// (0x00078e4b) main_clock2_btn_pane

0x183b,	// (0x00072d95) main_clock2_btn_pane_cp01_ParamLimits

0x183b,	// (0x00072d95) main_clock2_btn_pane_cp01

0xd6b0,	// (0x0007ec0a) list_cale_mrui_pane_ParamLimits

0xdb03,	// (0x0007f05d) main_cf0_pane_g2

0x0001,

0xfd5f,	// (0x000812b9) main_cf0_pane_g

0xaed7,	// (0x0007c431) area_left_week_number_pane_ParamLimits

0xaeea,	// (0x0007c444) area_top_day_name_pane_ParamLimits

0xaef8,	// (0x0007c452) frame_month_view_pane_ParamLimits

0xdbde,	// (0x0007f138) grid_month_view_pane_ParamLimits

0xdbec,	// (0x0007f146) frm_month_g1_ParamLimits

0xaf76,	// (0x0007c4d0) frm_month_g2_ParamLimits

0xaf87,	// (0x0007c4e1) frm_month_g3_ParamLimits

0xaf98,	// (0x0007c4f2) frm_month_g4_ParamLimits

0xafa9,	// (0x0007c503) frm_month_g5_ParamLimits

0xafba,	// (0x0007c514) frm_month_g6_ParamLimits

0xafcd,	// (0x0007c527) frm_month_g7_ParamLimits

0xdbf9,	// (0x0007f153) frm_month_g8_ParamLimits

0xafe0,	// (0x0007c53a) frm_month_g9_ParamLimits

0xafed,	// (0x0007c547) frm_month_g10_ParamLimits

0xaffa,	// (0x0007c554) frm_month_g11_ParamLimits

0xb007,	// (0x0007c561) frm_month_g12_ParamLimits

0xb014,	// (0x0007c56e) frm_month_g13_ParamLimits

0xb023,	// (0x0007c57d) frm_month_g14_ParamLimits

0xb032,	// (0x0007c58c) frm_month_g15_ParamLimits

0xb041,	// (0x0007c59b) frm_month_g16_ParamLimits

0xfdb7,	// (0x00081311) frm_month_g_ParamLimits

0xdc06,	// (0x0007f160) cell_top_day_name_pane_t1_ParamLimits

0xb050,	// (0x0007c5aa) cell_area_left_week_number_pane_g1_ParamLimits

0xb05f,	// (0x0007c5b9) cell_area_left_week_number_pane_t1_ParamLimits

0xd58b,	// (0x0007eae5) cell_month_view_pane_g1_ParamLimits

0xb075,	// (0x0007c5cf) cell_month_view_pane_t1_ParamLimits

0xd508,	// (0x0007ea62) main_clock2_btn_pane_g1

0xdd0d,	// (0x0007f267) main_clock2_btn_pane_t1

0xd532,	// (0x0007ea8c) listscroll_cmail_pane_ParamLimits

0xccaf,	// (0x0007e209) main_sp_fs_email_pane_g1_ParamLimits

0xccbb,	// (0x0007e215) main_sp_fs_email_pane_g2_ParamLimits

0xfc05,	// (0x0008115f) main_sp_fs_email_pane_g_ParamLimits

0xd7e0,	// (0x0007ed3a) list_recal_day_pane_ParamLimits

0xd7f1,	// (0x0007ed4b) mian_recal_day_pane_t1

0x37a0,	// (0x00074cfa) list_single_dyc_row_text_pane_t4_ParamLimits

0x37a0,	// (0x00074cfa) list_single_dyc_row_text_pane_t4

0x37e5,	// (0x00074d3f) list_single_dyc_row_text_pane_t5_ParamLimits

0x37e5,	// (0x00074d3f) list_single_dyc_row_text_pane_t5

0x385b,	// (0x00074db5) list_single_dyc_row_text_pane_t6_ParamLimits

0x385b,	// (0x00074db5) list_single_dyc_row_text_pane_t6

0x5d2f,	// (0x00077289) aid_mgn_list_cale_time_pane

0xd532,	// (0x0007ea8c) main_gallery2_pane_ParamLimits

0x184f,	// (0x00072da9) main_clock2_pane_cp01_t1

0x185d,	// (0x00072db7) main_clock2_pane_cp01_t3

0x0001,

0xf6fc,	// (0x00080c56) main_clock2_pane_cp01_t

0x465f,	// (0x00075bb9) cale_week_scroll_pane_g16_ParamLimits

0x465f,	// (0x00075bb9) cale_week_scroll_pane_g16

0xe439,	// (0x0007f993) vorec_slider_pane

0xdc97,	// (0x0007f1f1) vidtel_button_pane_t1_ParamLimits

0xa90f,	// (0x0007be69) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa90f,	// (0x0007be69) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa91e,	// (0x0007be78) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa91e,	// (0x0007be78) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd0d,	// (0x00081267) main_fs_bigclock_clock_pane_g_ParamLimits

0xa92e,	// (0x0007be88) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa943,	// (0x0007be9d) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd16,	// (0x00081270) main_fs_bigclock_clock_pane_t_ParamLimits

0x723b,	// (0x00078795) main_mup3_lyrics_pane_ParamLimits

0x723b,	// (0x00078795) main_mup3_lyrics_pane

0xb530,	// (0x0007ca8a) main_mup3_lyrics_pane_t1_ParamLimits

0xb530,	// (0x0007ca8a) main_mup3_lyrics_pane_t1

0x7e11,	// (0x0007936b) aid_main_mp4_pane_t1_area

0x7e1b,	// (0x00079375) aid_main_mp4_pane_t2_area

0x7f22,	// (0x0007947c) main_mp4_pane_g7_ParamLimits

0x7f22,	// (0x0007947c) main_mp4_pane_g7

0x7f2e,	// (0x00079488) main_mp4_pane_g8_ParamLimits

0x7f2e,	// (0x00079488) main_mp4_pane_g8

0x8309,	// (0x00079863) aid_call6_pane_g1_size

0xb21e,	// (0x0007c778) list_double_large_graphic_phob2_other_pane_ParamLimits

0xb21e,	// (0x0007c778) list_double_large_graphic_phob2_other_pane

0xb557,	// (0x0007cab1) list_double_large_graphic_phob2_other_pane_g1

0xce55,	// (0x0007e3af) list_highlight_pane_cp026

0xd532,	// (0x0007ea8c) main_welc_pane_ParamLimits

0xa3b4,	// (0x0007b90e) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xa3b4,	// (0x0007b90e) main_sp_fs_ctrlbar_pane_g3

0xa3ce,	// (0x0007b928) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xa3ce,	// (0x0007b928) main_sp_fs_ctrlbar_pane_g4

0xa400,	// (0x0007b95a) toolbar2_fixed_button_pane_cp01

0xa40b,	// (0x0007b965) toolbar2_fixed_button_pane_cp02

0xa418,	// (0x0007b972) toolbar2_fixed_button_pane_cp03

0xb262,	// (0x0007c7bc) list_welc_entry_pane_ParamLimits

0xb262,	// (0x0007c7bc) list_welc_entry_pane

0xb2c2,	// (0x0007c81c) main_welc_pane_g3_ParamLimits

0xb2c2,	// (0x0007c81c) main_welc_pane_g3

0xb312,	// (0x0007c86c) main_welc_pane_t2_ParamLimits

0xb312,	// (0x0007c86c) main_welc_pane_t2

0xb326,	// (0x0007c880) main_welc_pane_t3_ParamLimits

0xb326,	// (0x0007c880) main_welc_pane_t3

0x0005,

0xfe19,	// (0x00081373) main_welc_pane_t_ParamLimits

0xfe19,	// (0x00081373) main_welc_pane_t

0xb422,	// (0x0007c97c) welc_button_pane_ParamLimits

0xb422,	// (0x0007c97c) welc_button_pane

0xb48c,	// (0x0007c9e6) welc_service_logo_pane_ParamLimits

0xb48c,	// (0x0007c9e6) welc_service_logo_pane

0xb55f,	// (0x0007cab9) list_single_welc_entry_pane_ParamLimits

0xb55f,	// (0x0007cab9) list_single_welc_entry_pane

0xb570,	// (0x0007caca) list_single_welc_entry_pane_g1

0xb578,	// (0x0007cad2) list_single_welc_entry_pane_t1

0xb586,	// (0x0007cae0) list_single_welc_entry_pane_t2

0x0001,

0xfe2b,	// (0x00081385) list_single_welc_entry_pane_t

0xce55,	// (0x0007e3af) bg_button_pane_cp035

0xdd1b,	// (0x0007f275) welc_button_pane_t1

0xb594,	// (0x0007caee) welc_service_logo_pane_g1

0xb59d,	// (0x0007caf7) welc_service_logo_pane_g2

0x0001,

0xfe30,	// (0x0008138a) welc_service_logo_pane_g

0xce55,	// (0x0007e3af) main_int_radio_pane

0xc77f,	// (0x0007dcd9) list_single_fs_dyc_pane_g1

0x3ca7,	// (0x00075201) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x3ca7,	// (0x00075201) list_double_large_graphic_phob2_pane_g3

0xb11d,	// (0x0007c677) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xb11d,	// (0x0007c677) list_double_large_graphic_phob2_pane_g4

0xb5a6,	// (0x0007cb00) main_int_radio1_pane_ParamLimits

0xb5a6,	// (0x0007cb00) main_int_radio1_pane

0xdd29,	// (0x0007f283) find_pane_cp02

0xb5bc,	// (0x0007cb16) input_focus_pane_cp12_ParamLimits

0xb5bc,	// (0x0007cb16) input_focus_pane_cp12

0xb5c8,	// (0x0007cb22) input_focus_pane_cp13_ParamLimits

0xb5c8,	// (0x0007cb22) input_focus_pane_cp13

0xb5e0,	// (0x0007cb3a) input_focus_pane_cp14_ParamLimits

0xb5e0,	// (0x0007cb3a) input_focus_pane_cp14

0xdd32,	// (0x0007f28c) int_radio1_listscroll_pane

0xb5f8,	// (0x0007cb52) main_int_radio1_pane_g1_ParamLimits

0xb5f8,	// (0x0007cb52) main_int_radio1_pane_g1

0xb604,	// (0x0007cb5e) main_int_radio1_pane_t1_ParamLimits

0xb604,	// (0x0007cb5e) main_int_radio1_pane_t1

0xb616,	// (0x0007cb70) main_int_radio1_pane_t2_ParamLimits

0xb616,	// (0x0007cb70) main_int_radio1_pane_t2

0xb62a,	// (0x0007cb84) main_int_radio1_pane_t3_ParamLimits

0xb62a,	// (0x0007cb84) main_int_radio1_pane_t3

0xb63e,	// (0x0007cb98) main_int_radio1_pane_t4_ParamLimits

0xb63e,	// (0x0007cb98) main_int_radio1_pane_t4

0xdd3c,	// (0x0007f296) main_int_radio1_pane_t5_ParamLimits

0xdd3c,	// (0x0007f296) main_int_radio1_pane_t5

0xb655,	// (0x0007cbaf) main_int_radio1_pane_t6_ParamLimits

0xb655,	// (0x0007cbaf) main_int_radio1_pane_t6

0xb667,	// (0x0007cbc1) main_int_radio1_pane_t7_ParamLimits

0xb667,	// (0x0007cbc1) main_int_radio1_pane_t7

0xb679,	// (0x0007cbd3) main_int_radio1_pane_t8_ParamLimits

0xb679,	// (0x0007cbd3) main_int_radio1_pane_t8

0xb68b,	// (0x0007cbe5) main_int_radio1_pane_t9_ParamLimits

0xb68b,	// (0x0007cbe5) main_int_radio1_pane_t9

0xb69d,	// (0x0007cbf7) main_int_radio1_pane_t10_ParamLimits

0xb69d,	// (0x0007cbf7) main_int_radio1_pane_t10

0xb6ce,	// (0x0007cc28) main_int_radio1_pane_t11_ParamLimits

0xb6ce,	// (0x0007cc28) main_int_radio1_pane_t11

0xb6ff,	// (0x0007cc59) main_int_radio1_pane_t12_ParamLimits

0xb6ff,	// (0x0007cc59) main_int_radio1_pane_t12

0x000b,

0xfe35,	// (0x0008138f) main_int_radio1_pane_t_ParamLimits

0xfe35,	// (0x0008138f) main_int_radio1_pane_t

0xdc19,	// (0x0007f173) int_radio_list_pane

0xdc21,	// (0x0007f17b) scroll_pane_cp037

0xdd4e,	// (0x0007f2a8) list_double_large_graphic_int_radio_pane_ParamLimits

0xdd4e,	// (0x0007f2a8) list_double_large_graphic_int_radio_pane

0xdd62,	// (0x0007f2bc) list_double_large_graphic_int_radio_pane_g1

0x3d7b,	// (0x000752d5) list_double_large_graphic_int_radio_pane_t1

0x3d89,	// (0x000752e3) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe4e,	// (0x000813a8) list_double_large_graphic_int_radio_pane_t

0xce55,	// (0x0007e3af) list_highlight_pane_cp027

0xdcd0,	// (0x0007f22a) main_button_pane_4

0xb2ce,	// (0x0007c828) main_welc_pane_g4_ParamLimits

0xb2ce,	// (0x0007c828) main_welc_pane_g4

0xb338,	// (0x0007c892) main_welc_pane_t4_ParamLimits

0xb338,	// (0x0007c892) main_welc_pane_t4

0xb34a,	// (0x0007c8a4) main_welc_pane_t5_ParamLimits

0xb34a,	// (0x0007c8a4) main_welc_pane_t5

0xb37c,	// (0x0007c8d6) main_welc_pane_t6_ParamLimits

0xb37c,	// (0x0007c8d6) main_welc_pane_t6

0xb430,	// (0x0007c98a) welc_button_pane_2_ParamLimits

0xb430,	// (0x0007c98a) welc_button_pane_2

0xb44e,	// (0x0007c9a8) welc_button_pane_3_ParamLimits

0xb44e,	// (0x0007c9a8) welc_button_pane_3

0xdcd8,	// (0x0007f232) welc_button_pane_4

0xb46e,	// (0x0007c9c8) welc_button_pane_5_ParamLimits

0xb46e,	// (0x0007c9c8) welc_button_pane_5

0x3deb,	// (0x00075345) main_popup_welc_pane

0xdd83,	// (0x0007f2dd) main_welc_sk_g3

0xdd8d,	// (0x0007f2e7) main_welc_sk_g4

0xdd97,	// (0x0007f2f1) main_welc_sk_t3

0xdda7,	// (0x0007f301) main_welc_sk_t4

0xddb7,	// (0x0007f311) popup_welc_pane_t4

0xddc5,	// (0x0007f31f) popup_welc_pane_t5

0xddd3,	// (0x0007f32d) popup_welc_pane_t6

0xce55,	// (0x0007e3af) main_acti_pane

0xce55,	// (0x0007e3af) main_sso_pane

0xb716,	// (0x0007cc70) sso_body_pane_ParamLimits

0xb716,	// (0x0007cc70) sso_body_pane

0xb725,	// (0x0007cc7f) sso_logo_pane_ParamLimits

0xb725,	// (0x0007cc7f) sso_logo_pane

0xb754,	// (0x0007ccae) sso_sk_pane_ParamLimits

0xb754,	// (0x0007ccae) sso_sk_pane

0xde15,	// (0x0007f36f) main_sso_logo_pane_g1

0xb761,	// (0x0007ccbb) sso_sk_pane_t1_ParamLimits

0xb761,	// (0x0007ccbb) sso_sk_pane_t1

0xb775,	// (0x0007cccf) sso_sk_pane_t2_ParamLimits

0xb775,	// (0x0007cccf) sso_sk_pane_t2

0x0001,

0xfe53,	// (0x000813ad) sso_sk_pane_t_ParamLimits

0xfe53,	// (0x000813ad) sso_sk_pane_t

0xde20,	// (0x0007f37a) aid_sso_gap

0xde29,	// (0x0007f383) aid_sso_txt1

0xde33,	// (0x0007f38d) aid_sso_txt2

0xde3d,	// (0x0007f397) aid_sso_txt3

0x0002,

0xfe58,	// (0x000813b2) aid_sso_txt

0xde47,	// (0x0007f3a1) aid_sso_widget

0xb7d2,	// (0x0007cd2c) sso_btn_pane_ParamLimits

0xb7d2,	// (0x0007cd2c) sso_btn_pane

0xb846,	// (0x0007cda0) sso_option_pane_ParamLimits

0xb846,	// (0x0007cda0) sso_option_pane

0xb8f8,	// (0x0007ce52) sso_query_pane_ParamLimits

0xb8f8,	// (0x0007ce52) sso_query_pane

0xb948,	// (0x0007cea2) sso_query_pane_cp01_ParamLimits

0xb948,	// (0x0007cea2) sso_query_pane_cp01

0xb9a0,	// (0x0007cefa) sso_t_hdr_pane_ParamLimits

0xb9a0,	// (0x0007cefa) sso_t_hdr_pane

0xb9c4,	// (0x0007cf1e) sso_t_nml_pane_ParamLimits

0xb9c4,	// (0x0007cf1e) sso_t_nml_pane

0xde51,	// (0x0007f3ab) sso_t_sub_pane

0xb732,	// (0x0007cc8c) sso_popup_window_ParamLimits

0xb732,	// (0x0007cc8c) sso_popup_window

0xb787,	// (0x0007cce1) sso_apps_pane_ParamLimits

0xb787,	// (0x0007cce1) sso_apps_pane

0xb7aa,	// (0x0007cd04) sso_body_pane_g1

0xb7b2,	// (0x0007cd0c) sso_body_pane_t1

0xb7c2,	// (0x0007cd1c) sso_body_pane_t2

0x0001,

0xfe5f,	// (0x000813b9) sso_body_pane_t

0xb816,	// (0x0007cd70) sso_btn_pane_cp01_ParamLimits

0xb816,	// (0x0007cd70) sso_btn_pane_cp01

0xb8ca,	// (0x0007ce24) sso_prog_pane_ParamLimits

0xb8ca,	// (0x0007ce24) sso_prog_pane

0xba14,	// (0x0007cf6e) sso_t_hdr_pane_t1_ParamLimits

0xba14,	// (0x0007cf6e) sso_t_hdr_pane_t1

0xde66,	// (0x0007f3c0) input_focus_pane_cp10_ParamLimits

0xde66,	// (0x0007f3c0) input_focus_pane_cp10

0xde7a,	// (0x0007f3d4) sso_query_pane_t1_ParamLimits

0xde7a,	// (0x0007f3d4) sso_query_pane_t1

0xde8d,	// (0x0007f3e7) sso_query_pane_t2_ParamLimits

0xde8d,	// (0x0007f3e7) sso_query_pane_t2

0xdea7,	// (0x0007f401) sso_query_pane_t3_ParamLimits

0xdea7,	// (0x0007f401) sso_query_pane_t3

0xded1,	// (0x0007f42b) sso_query_pane_t4_ParamLimits

0xded1,	// (0x0007f42b) sso_query_pane_t4

0x0003,

0xfe64,	// (0x000813be) sso_query_pane_t_ParamLimits

0xfe64,	// (0x000813be) sso_query_pane_t

0xdd7a,	// (0x0007f2d4) bg_button_pane_cp22

0xdd6b,	// (0x0007f2c5) sso_btn_pane_t1

0xba2d,	// (0x0007cf87) sso_t_nml_pane_t1_ParamLimits

0xba2d,	// (0x0007cf87) sso_t_nml_pane_t1

0xdef5,	// (0x0007f44f) sso_option_row_pane_ParamLimits

0xdef5,	// (0x0007f44f) sso_option_row_pane

0xdf02,	// (0x0007f45c) sso_t_sub_pane_t1_ParamLimits

0xdf02,	// (0x0007f45c) sso_t_sub_pane_t1

0xd532,	// (0x0007ea8c) bg_popup_window_pane_cp11_ParamLimits

0xd532,	// (0x0007ea8c) bg_popup_window_pane_cp11

0xdf1f,	// (0x0007f479) popup_sk_window_cp01_ParamLimits

0xdf1f,	// (0x0007f479) popup_sk_window_cp01

0xdf2c,	// (0x0007f486) sso_popup_body_pane_ParamLimits

0xdf2c,	// (0x0007f486) sso_popup_body_pane

0xdf39,	// (0x0007f493) scroll_pane_cp21_ParamLimits

0xdf39,	// (0x0007f493) scroll_pane_cp21

0xdf46,	// (0x0007f4a0) sso_popup_body_t_pane_ParamLimits

0xdf46,	// (0x0007f4a0) sso_popup_body_t_pane

0xdf53,	// (0x0007f4ad) sso_popup_body_t_hdr_pane_ParamLimits

0xdf53,	// (0x0007f4ad) sso_popup_body_t_hdr_pane

0xba4a,	// (0x0007cfa4) sso_popup_body_t_nml_pane_ParamLimits

0xba4a,	// (0x0007cfa4) sso_popup_body_t_nml_pane

0xba68,	// (0x0007cfc2) sso_popup_body_t_sub_pane_ParamLimits

0xba68,	// (0x0007cfc2) sso_popup_body_t_sub_pane

0xdf65,	// (0x0007f4bf) sso_popup_body_t_hdr_pane_t1

0xba8b,	// (0x0007cfe5) sso_popup_body_t_nml_pane_t1_ParamLimits

0xba8b,	// (0x0007cfe5) sso_popup_body_t_nml_pane_t1

0xdf75,	// (0x0007f4cf) sso_popup_body_t_sub_pane_t1_ParamLimits

0xdf75,	// (0x0007f4cf) sso_popup_body_t_sub_pane_t1

0xe23d,	// (0x0007f797) sso_prog_pane_g1

0xbad5,	// (0x0007d02f) sso_apps_pane_comp1_ParamLimits

0xbad5,	// (0x0007d02f) sso_apps_pane_comp1

0xdf9a,	// (0x0007f4f4) sso_apps_pane_comp1_g1

0xdfa2,	// (0x0007f4fc) sso_apps_pane_comp1_t1

0xdfbe,	// (0x0007f518) sso_option_row_pane_g1

0xdfc6,	// (0x0007f520) sso_option_row_pane_t1

0xcd45,	// (0x0007e29f) list_cmail_pane_ParamLimits

0xce55,	// (0x0007e3af) main_call7_pane

0xb250,	// (0x0007c7aa) bg_welc_area_ParamLimits

0xb250,	// (0x0007c7aa) bg_welc_area

0xb3b2,	// (0x0007c90c) sso_t_hdr_pane_a_t1_ParamLimits

0xb3b2,	// (0x0007c90c) sso_t_hdr_pane_a_t1

0xb3c6,	// (0x0007c920) sso_t_nml_pane_a_t1_ParamLimits

0xb3c6,	// (0x0007c920) sso_t_nml_pane_a_t1

0xb3f0,	// (0x0007c94a) sso_t_sub_pane_a_t1_ParamLimits

0xb3f0,	// (0x0007c94a) sso_t_sub_pane_a_t1

0xb47e,	// (0x0007c9d8) welc_button_pane_cp01_ParamLimits

0xb47e,	// (0x0007c9d8) welc_button_pane_cp01

0xdd6b,	// (0x0007f2c5) sso_btn_pane_t1_copy1

0xdd7a,	// (0x0007f2d4) welc_button_pane_2_comp1

0xdde3,	// (0x0007f33d) sso_t_hdr_pane_p_t1

0xddf3,	// (0x0007f34d) sso_t_nml_pane_p_t1

0xde03,	// (0x0007f35d) sso_t_sub_pane_p_t1

0xce55,	// (0x0007e3af) main_att_pane

0xce55,	// (0x0007e3af) main_vod_pane

0xde51,	// (0x0007f3ab) sso_t_sub_pane_ParamLimits

0xdfb0,	// (0x0007f50a) input_focus_pane_cp10_t1

0xdfc6,	// (0x0007f520) sso_option_row_pane_t1_ParamLimits

0xbaea,	// (0x0007d044) main_att_body_pane_ParamLimits

0xbaea,	// (0x0007d044) main_att_body_pane

0xbafe,	// (0x0007d058) att_btn_emg_pane_ParamLimits

0xbafe,	// (0x0007d058) att_btn_emg_pane

0xbb16,	// (0x0007d070) att_btn_pane_ParamLimits

0xbb16,	// (0x0007d070) att_btn_pane

0xbb82,	// (0x0007d0dc) att_btn_pane_cp01_ParamLimits

0xbb82,	// (0x0007d0dc) att_btn_pane_cp01

0xbb9c,	// (0x0007d0f6) att_li_srv_pane_ParamLimits

0xbb9c,	// (0x0007d0f6) att_li_srv_pane

0xbbae,	// (0x0007d108) att_opt_pane_ParamLimits

0xbbae,	// (0x0007d108) att_opt_pane

0xbbf2,	// (0x0007d14c) att_query_pane_ParamLimits

0xbbf2,	// (0x0007d14c) att_query_pane

0xbc62,	// (0x0007d1bc) att_query_pane_cp01_ParamLimits

0xbc62,	// (0x0007d1bc) att_query_pane_cp01

0xbca6,	// (0x0007d200) att_t_hdr_pane_ParamLimits

0xbca6,	// (0x0007d200) att_t_hdr_pane

0xbd0e,	// (0x0007d268) att_t_nml_pane_ParamLimits

0xbd0e,	// (0x0007d268) att_t_nml_pane

0xbd80,	// (0x0007d2da) att_t_nml_pane_cp01_ParamLimits

0xbd80,	// (0x0007d2da) att_t_nml_pane_cp01

0xbda4,	// (0x0007d2fe) att_t_nmlb_pane_ParamLimits

0xbda4,	// (0x0007d2fe) att_t_nmlb_pane

0xbe08,	// (0x0007d362) att_term_pane_ParamLimits

0xbe08,	// (0x0007d362) att_term_pane

0xbe4c,	// (0x0007d3a6) main_att_body_pane_g1_ParamLimits

0xbe4c,	// (0x0007d3a6) main_att_body_pane_g1

0xdfdf,	// (0x0007f539) att_t_hdr_pane_t1_ParamLimits

0xdfdf,	// (0x0007f539) att_t_hdr_pane_t1

0xdff8,	// (0x0007f552) att_t_nml_pane_t1_ParamLimits

0xdff8,	// (0x0007f552) att_t_nml_pane_t1

0xe01d,	// (0x0007f577) att_btn_pane_t1

0xdd7a,	// (0x0007f2d4) bg_button_pane_cp23

0xbe78,	// (0x0007d3d2) att_li_srv_row_pane_ParamLimits

0xbe78,	// (0x0007d3d2) att_li_srv_row_pane

0xe02d,	// (0x0007f587) att_t_nmlb_pane_t1_ParamLimits

0xe02d,	// (0x0007f587) att_t_nmlb_pane_t1

0xe04b,	// (0x0007f5a5) att_query_pane_t1

0xe05a,	// (0x0007f5b4) att_query_pane_t2

0xe069,	// (0x0007f5c3) att_query_pane_t3

0x0002,

0xfe6d,	// (0x000813c7) att_query_pane_t

0xe078,	// (0x0007f5d2) input_focus_pane_cp11

0xe081,	// (0x0007f5db) att_term_pane_t1_ParamLimits

0xe081,	// (0x0007f5db) att_term_pane_t1

0xce55,	// (0x0007e3af) att_opt_row_pane

0xdfbe,	// (0x0007f518) att_opt_row_pane_g1

0xe09e,	// (0x0007f5f8) att_opt_row_pane_t1_ParamLimits

0xe09e,	// (0x0007f5f8) att_opt_row_pane_t1

0xbe88,	// (0x0007d3e2) att_li_srv_row_pane_g1

0xbe90,	// (0x0007d3ea) att_li_srv_row_pane_t1_ParamLimits

0xbe90,	// (0x0007d3ea) att_li_srv_row_pane_t1

0xbea5,	// (0x0007d3ff) att_li_srv_row_pane_t2_ParamLimits

0xbea5,	// (0x0007d3ff) att_li_srv_row_pane_t2

0x0001,

0xfe74,	// (0x000813ce) att_li_srv_row_pane_t_ParamLimits

0xfe74,	// (0x000813ce) att_li_srv_row_pane_t

0xe0b7,	// (0x0007f611) att_btn_close_pane_g1

0xce55,	// (0x0007e3af) bg_button_pane_cp24

0x6bd8,	// (0x00078132) main_vod_body_pane_ParamLimits

0x6bd8,	// (0x00078132) main_vod_body_pane

0xbeba,	// (0x0007d414) main_vod_body_pane_g1_ParamLimits

0xbeba,	// (0x0007d414) main_vod_body_pane_g1

0xbeea,	// (0x0007d444) scroll_pane_cp24_ParamLimits

0xbeea,	// (0x0007d444) scroll_pane_cp24

0xbf32,	// (0x0007d48c) vod_btn_pane_ParamLimits

0xbf32,	// (0x0007d48c) vod_btn_pane

0xbf70,	// (0x0007d4ca) vod_det_pane_ParamLimits

0xbf70,	// (0x0007d4ca) vod_det_pane

0xbf9c,	// (0x0007d4f6) vod_logo_g1_ParamLimits

0xbf9c,	// (0x0007d4f6) vod_logo_g1

0xbfe6,	// (0x0007d540) vod_opt_pane_ParamLimits

0xbfe6,	// (0x0007d540) vod_opt_pane

0xc016,	// (0x0007d570) vod_opt_pane_cp01_ParamLimits

0xc016,	// (0x0007d570) vod_opt_pane_cp01

0xc03e,	// (0x0007d598) vod_query_pane_ParamLimits

0xc03e,	// (0x0007d598) vod_query_pane

0xc066,	// (0x0007d5c0) vod_query_pane_cp01_ParamLimits

0xc066,	// (0x0007d5c0) vod_query_pane_cp01

0xc072,	// (0x0007d5cc) vod_t_nml_pane_ParamLimits

0xc072,	// (0x0007d5cc) vod_t_nml_pane

0xc120,	// (0x0007d67a) vod_t_nml_pane_cp01_ParamLimits

0xc120,	// (0x0007d67a) vod_t_nml_pane_cp01

0xc158,	// (0x0007d6b2) vod_t_sub_pane_ParamLimits

0xc158,	// (0x0007d6b2) vod_t_sub_pane

0xc184,	// (0x0007d6de) vod_t_sub_pane_cp01_ParamLimits

0xc184,	// (0x0007d6de) vod_t_sub_pane_cp01

0xe078,	// (0x0007f5d2) vod_query_field_pane

0xe0bf,	// (0x0007f619) vod_query_pane_t1

0xdd7a,	// (0x0007f2d4) bg_button_pane_cp25

0xe0ce,	// (0x0007f628) sso_btn_pane_t1_copy2

0xc1ac,	// (0x0007d706) vod_t_nml_pane_t1_ParamLimits

0xc1ac,	// (0x0007d706) vod_t_nml_pane_t1

0xe0dd,	// (0x0007f637) vod_opt_row_pane_ParamLimits

0xe0dd,	// (0x0007f637) vod_opt_row_pane

0xe0ef,	// (0x0007f649) vod_t_sub_pane_t1_ParamLimits

0xe0ef,	// (0x0007f649) vod_t_sub_pane_t1

0xe108,	// (0x0007f662) vod_det_cell_pane_ParamLimits

0xe108,	// (0x0007f662) vod_det_cell_pane

0xce55,	// (0x0007e3af) input_focus_pane_cp15

0xe119,	// (0x0007f673) vod_query_field_pane_t1

0xe127,	// (0x0007f681) vod_opt_row_pane_g1_ParamLimits

0xe127,	// (0x0007f681) vod_opt_row_pane_g1

0xe133,	// (0x0007f68d) vod_opt_row_pane_t1_ParamLimits

0xe133,	// (0x0007f68d) vod_opt_row_pane_t1

0xe152,	// (0x0007f6ac) vod_det_cell_field_pane

0xe15b,	// (0x0007f6b5) vod_det_cell_pane_g1

0xe163,	// (0x0007f6bd) vod_det_cell_pane_t1

0xce55,	// (0x0007e3af) input_focus_pane_cp16

0xe172,	// (0x0007f6cc) vod_det_cell_field_pane_t1

0xabbe,	// (0x0007c118) call7_btn_grp_pane_ParamLimits

0xabbe,	// (0x0007c118) call7_btn_grp_pane

0xce5f,	// (0x0007e3b9) call7_bubble_pane_ParamLimits

0xce5f,	// (0x0007e3b9) call7_bubble_pane

0xabfb,	// (0x0007c155) cell_call7_btn_pane_ParamLimits

0xabfb,	// (0x0007c155) cell_call7_btn_pane

0xc1e7,	// (0x0007d741) call7_pane_g1_ParamLimits

0xc1e7,	// (0x0007d741) call7_pane_g1

0xc1f6,	// (0x0007d750) call7_windows_conf_pane_ParamLimits

0xc1f6,	// (0x0007d750) call7_windows_conf_pane

0xc218,	// (0x0007d772) popup_call7_1st_window_ParamLimits

0xc218,	// (0x0007d772) popup_call7_1st_window

0xc226,	// (0x0007d780) popup_call7_2nd_window_ParamLimits

0xc226,	// (0x0007d780) popup_call7_2nd_window

0xc234,	// (0x0007d78e) popup_call7_3rd_window_ParamLimits

0xc234,	// (0x0007d78e) popup_call7_3rd_window

0xce55,	// (0x0007e3af) bg_button_pane_cp26

0xdbaf,	// (0x0007f109) cell_call7_btn_pane_g1

0xe180,	// (0x0007f6da) cell_call7_btn_pane_t1

0xce55,	// (0x0007e3af) bg_popup_window_pane_cp12

0xe18f,	// (0x0007f6e9) popup_call7_1st_window_g1

0xe197,	// (0x0007f6f1) popup_call7_1st_window_g2

0xe19f,	// (0x0007f6f9) popup_call7_1st_window_g3

0x0002,

0xfe79,	// (0x000813d3) popup_call7_1st_window_g

0xe1a7,	// (0x0007f701) popup_call7_1st_window_t1

0xe1b6,	// (0x0007f710) popup_call7_1st_window_t2

0xe1c6,	// (0x0007f720) popup_call7_1st_window_t3

0x0002,

0xfe80,	// (0x000813da) popup_call7_1st_window_t

0xce55,	// (0x0007e3af) bg_popup_window_pane_cp13

0xe1d6,	// (0x0007f730) popup_call7_2nd_window_g1

0xe1de,	// (0x0007f738) popup_call7_2nd_window_g2

0xe1e6,	// (0x0007f740) popup_call7_2nd_window_g3

0x0002,

0xfe87,	// (0x000813e1) popup_call7_2nd_window_g

0xe1a7,	// (0x0007f701) popup_call7_2nd_window_t1

0xce55,	// (0x0007e3af) bg_popup_window_pane_cp14

0xe1ee,	// (0x0007f748) call7_list_conf_pane

0xe1f6,	// (0x0007f750) call7_list_conf_row_pane_ParamLimits

0xe1f6,	// (0x0007f750) call7_list_conf_row_pane

0xe209,	// (0x0007f763) call7_list_conf_row_pane_g1

0xe211,	// (0x0007f76b) call7_list_conf_row_pane_g2

0x0001,

0xfe8e,	// (0x000813e8) call7_list_conf_row_pane_g

0xe219,	// (0x0007f773) call7_list_conf_row_pane_t1

0xce55,	// (0x0007e3af) list_highlight_pane_cp22

0xb89a,	// (0x0007cdf4) sso_option_pane_cp01_ParamLimits

0xb89a,	// (0x0007cdf4) sso_option_pane_cp01

0xd510,	// (0x0007ea6a) msg_header_pane_ParamLimits

0xeeb8,	// (0x00080412) bg_button_pane_cp01_ParamLimits

0x3122,	// (0x0007467c) input_focus_pane_cp07_ParamLimits

0xa450,	// (0x0007b9aa) popup_email_progress_window

0xe23d,	// (0x0007f797) popup_email_progress_window_g1

0xe227,	// (0x0007f781) popup_email_progress_window_g2

0x0001,

0xfe93,	// (0x000813ed) popup_email_progress_window_g

0xe22f,	// (0x0007f789) popup_email_progress_window_t1
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
