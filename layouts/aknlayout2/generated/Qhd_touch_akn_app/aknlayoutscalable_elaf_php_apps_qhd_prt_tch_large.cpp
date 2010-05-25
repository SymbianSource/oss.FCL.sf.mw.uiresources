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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0006f773 };

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
0x6139,	// (0x000758ac) Screen

0x6145,	// (0x000758b8) application_window

0x61a1,	// (0x00075914) area_bottom_pane_ParamLimits

0x61a1,	// (0x00075914) area_bottom_pane

0x61fa,	// (0x0007596d) area_top_pane_ParamLimits

0x61fa,	// (0x0007596d) area_top_pane

0x625e,	// (0x000759d1) call_video_uplink_pane_ParamLimits

0x625e,	// (0x000759d1) call_video_uplink_pane

0x629d,	// (0x00075a10) main_pane_ParamLimits

0x629d,	// (0x00075a10) main_pane

0x2eeb,	// (0x0007265e) context_pane

0x94a6,	// (0x00078c19) navi_pane

0x94cc,	// (0x00078c3f) popup_cale_events_window_ParamLimits

0x94cc,	// (0x00078c3f) popup_cale_events_window

0x2efe,	// (0x00072671) popup_mup_playback_window

0x94e4,	// (0x00078c57) signal_pane

0x0e5c,	// (0x000705cf) main_browser_pane

0x1021,	// (0x00070794) main_burst_pane

0x9332,	// (0x00078aa5) main_calc_pane

0x2ec3,	// (0x00072636) main_cale_day_pane

0x69da,	// (0x0007614d) main_cale_month_pane

0x2ec3,	// (0x00072636) main_cale_week_pane

0x1021,	// (0x00070794) main_call_pane

0xefa4,	// (0x0007e717) main_call_poc_pane

0x1021,	// (0x00070794) main_camera_pane

0x1021,	// (0x00070794) main_chi_dic_pane

0x17f8,	// (0x00070f6b) main_clock_pane

0xefa4,	// (0x0007e717) main_fmradio_pane

0x1021,	// (0x00070794) main_graph_messa_pane

0xefa4,	// (0x0007e717) main_help_pane

0x0e5c,	// (0x000705cf) main_im_pane

0x0d97,	// (0x0007050a) main_image_pane_ParamLimits

0x0d97,	// (0x0007050a) main_image_pane

0xefa4,	// (0x0007e717) main_location2_pane

0x1021,	// (0x00070794) main_location_pane

0x0d97,	// (0x0007050a) main_messa_pane

0xefa4,	// (0x0007e717) main_mp2_pane

0x1021,	// (0x00070794) main_mp_pane

0xefa4,	// (0x0007e717) main_msg_pane

0xefa4,	// (0x0007e717) main_mup_eq_pane

0xefa4,	// (0x0007e717) main_mup_pane

0x0e5c,	// (0x000705cf) main_notes_pane

0xefa4,	// (0x0007e717) main_pec_pane

0xefa4,	// (0x0007e717) main_phob_pane

0xefa4,	// (0x0007e717) main_pinb_pane

0xefa4,	// (0x0007e717) main_postcard_pane

0xefa4,	// (0x0007e717) main_qdial_pane

0x1021,	// (0x00070794) main_skin_pane

0xefa4,	// (0x0007e717) main_smil2_pane

0x1021,	// (0x00070794) main_smil_pane

0x1021,	// (0x00070794) main_video_pane

0x1021,	// (0x00070794) main_video_tele_pane

0x0d97,	// (0x0007050a) main_viewer_pane_ParamLimits

0x0d97,	// (0x0007050a) main_viewer_pane

0x1021,	// (0x00070794) main_vorec_pane

0x9370,	// (0x00078ae3) popup_blid_sat_info_window_ParamLimits

0x9370,	// (0x00078ae3) popup_blid_sat_info_window

0x9390,	// (0x00078b03) popup_dyc_status_message_window_ParamLimits

0x9390,	// (0x00078b03) popup_dyc_status_message_window

0x93a0,	// (0x00078b13) popup_grid_large_graphic_window_ParamLimits

0x93a0,	// (0x00078b13) popup_grid_large_graphic_window

0x9431,	// (0x00078ba4) popup_loc_request_window_ParamLimits

0x9431,	// (0x00078ba4) popup_loc_request_window

0x947e,	// (0x00078bf1) popup_wml_address_window_ParamLimits

0x947e,	// (0x00078bf1) popup_wml_address_window

0x920a,	// (0x0007897d) call_muted_g1

0x8ecc,	// (0x0007863f) popup_call_audio_conf_window_ParamLimits

0x8ecc,	// (0x0007863f) popup_call_audio_conf_window

0x921a,	// (0x0007898d) popup_call_audio_first_window_ParamLimits

0x921a,	// (0x0007898d) popup_call_audio_first_window

0x925a,	// (0x000789cd) popup_call_audio_in_window_ParamLimits

0x925a,	// (0x000789cd) popup_call_audio_in_window

0x927e,	// (0x000789f1) popup_call_audio_out_window_ParamLimits

0x927e,	// (0x000789f1) popup_call_audio_out_window

0x92a0,	// (0x00078a13) popup_call_audio_second_window_ParamLimits

0x92a0,	// (0x00078a13) popup_call_audio_second_window

0x92d0,	// (0x00078a43) popup_call_audio_wait_window_ParamLimits

0x92d0,	// (0x00078a43) popup_call_audio_wait_window

0x92f1,	// (0x00078a64) popup_number_entry_window_ParamLimits

0x92f1,	// (0x00078a64) popup_number_entry_window

0xeb91,	// (0x0007e304) bg_popup_call_pane_cp05_ParamLimits

0xeb91,	// (0x0007e304) bg_popup_call_pane_cp05

0xebb1,	// (0x0007e324) popup_number_entry_window_t1

0xebc4,	// (0x0007e337) popup_number_entry_window_t2

0xebd6,	// (0x0007e349) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0007e83d) popup_number_entry_window_t

0xebe8,	// (0x0007e35b) text_title_cp2

0xebfb,	// (0x0007e36e) bg_popup_call_pane_cp_ParamLimits

0xebfb,	// (0x0007e36e) bg_popup_call_pane_cp

0xec09,	// (0x0007e37c) call_thumbnail_pane

0xec11,	// (0x0007e384) popup_call_audio_in_window_g1_ParamLimits

0xec11,	// (0x0007e384) popup_call_audio_in_window_g1

0xec1d,	// (0x0007e390) popup_call_audio_in_window_g2_ParamLimits

0xec1d,	// (0x0007e390) popup_call_audio_in_window_g2

0xec29,	// (0x0007e39c) popup_call_audio_in_window_g3_ParamLimits

0xec29,	// (0x0007e39c) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0007e846) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0007e846) popup_call_audio_in_window_g

0xec35,	// (0x0007e3a8) popup_call_audio_in_window_t1_ParamLimits

0xec35,	// (0x0007e3a8) popup_call_audio_in_window_t1

0xec51,	// (0x0007e3c4) popup_call_audio_in_window_t2_ParamLimits

0xec51,	// (0x0007e3c4) popup_call_audio_in_window_t2

0xec6d,	// (0x0007e3e0) popup_call_audio_in_window_t3_ParamLimits

0xec6d,	// (0x0007e3e0) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0007e84d) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0007e84d) popup_call_audio_in_window_t

0xebfb,	// (0x0007e36e) bg_popup_call_pane_cp01_ParamLimits

0xebfb,	// (0x0007e36e) bg_popup_call_pane_cp01

0xec09,	// (0x0007e37c) call_thumbnail_pane_cp02

0xec80,	// (0x0007e3f3) call_type_pane_cp022

0xec88,	// (0x0007e3fb) popup_call_audio_out_window_g1_ParamLimits

0xec88,	// (0x0007e3fb) popup_call_audio_out_window_g1

0xec9a,	// (0x0007e40d) popup_call_audio_out_window_g2_ParamLimits

0xec9a,	// (0x0007e40d) popup_call_audio_out_window_g2

0xeca6,	// (0x0007e419) popup_call_audio_out_window_g3_ParamLimits

0xeca6,	// (0x0007e419) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0007e854) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0007e854) popup_call_audio_out_window_g

0xecb8,	// (0x0007e42b) popup_call_audio_out_window_t1_ParamLimits

0xecb8,	// (0x0007e42b) popup_call_audio_out_window_t1

0xecd0,	// (0x0007e443) popup_call_audio_out_window_t2_ParamLimits

0xecd0,	// (0x0007e443) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0007e85b) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0007e85b) popup_call_audio_out_window_t

0xece5,	// (0x0007e458) bg_popup_call_pane_ParamLimits

0xece5,	// (0x0007e458) bg_popup_call_pane

0x649e,	// (0x00075c11) call_thumbnail_pane_cp_ParamLimits

0x649e,	// (0x00075c11) call_thumbnail_pane_cp

0xed69,	// (0x0007e4dc) call_type_pane_cp01_ParamLimits

0xed69,	// (0x0007e4dc) call_type_pane_cp01

0xedad,	// (0x0007e520) popup_call_audio_first_window_g1_ParamLimits

0xedad,	// (0x0007e520) popup_call_audio_first_window_g1

0xedf9,	// (0x0007e56c) popup_call_audio_first_window_g2_ParamLimits

0xedf9,	// (0x0007e56c) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0007e860) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0007e860) popup_call_audio_first_window_g

0xee3d,	// (0x0007e5b0) popup_call_audio_first_window_t1_ParamLimits

0xee3d,	// (0x0007e5b0) popup_call_audio_first_window_t1

0xeee9,	// (0x0007e65c) popup_call_audio_first_window_t4_ParamLimits

0xeee9,	// (0x0007e65c) popup_call_audio_first_window_t4

0xef75,	// (0x0007e6e8) popup_call_audio_first_window_t5_ParamLimits

0xef75,	// (0x0007e6e8) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0007e865) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0007e865) popup_call_audio_first_window_t

0xefa4,	// (0x0007e717) bg_popup_call_pane_cp02

0xefae,	// (0x0007e721) call_type_pane_cp023

0xefb6,	// (0x0007e729) popup_call_audio_wait_window_g1

0xefbe,	// (0x0007e731) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0007e86c) popup_call_audio_wait_window_g

0xefc6,	// (0x0007e739) popup_call_audio_wait_window_t3

0xefd4,	// (0x0007e747) bg_popup_call_pane_cp03_ParamLimits

0xefd4,	// (0x0007e747) bg_popup_call_pane_cp03

0xf034,	// (0x0007e7a7) call_thumbnail_pane_cp011_ParamLimits

0xf034,	// (0x0007e7a7) call_thumbnail_pane_cp011

0xf040,	// (0x0007e7b3) call_type_pane_cp034_ParamLimits

0xf040,	// (0x0007e7b3) call_type_pane_cp034

0xf07c,	// (0x0007e7ef) popup_call_audio_second_window_g1_ParamLimits

0xf07c,	// (0x0007e7ef) popup_call_audio_second_window_g1

0x0c50,	// (0x000703c3) popup_call_audio_second_window_g2_ParamLimits

0x0c50,	// (0x000703c3) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0007e871) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0007e871) popup_call_audio_second_window_g

0x0c8c,	// (0x000703ff) popup_call_audio_second_window_t1_ParamLimits

0x0c8c,	// (0x000703ff) popup_call_audio_second_window_t1

0x0d0d,	// (0x00070480) popup_call_audio_second_window_t2_ParamLimits

0x0d0d,	// (0x00070480) popup_call_audio_second_window_t2

0x0d43,	// (0x000704b6) popup_call_audio_second_window_t3_ParamLimits

0x0d43,	// (0x000704b6) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0007e876) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0007e876) popup_call_audio_second_window_t

0xefa4,	// (0x0007e717) bg_popup_call_pane_cp04

0x0d79,	// (0x000704ec) list_conf_pane

0x0d81,	// (0x000704f4) popup_call_audio_conf_window_t1

0x0d8f,	// (0x00070502) call_thumbnail_pane_g1

0x0d97,	// (0x0007050a) bg_pinb_pane_ParamLimits

0x0d97,	// (0x0007050a) bg_pinb_pane

0x0da5,	// (0x00070518) find_pinb_pane

0x0dae,	// (0x00070521) listscroll_pinb_pane_ParamLimits

0x0dae,	// (0x00070521) listscroll_pinb_pane

0x0dbd,	// (0x00070530) pinb_bg_pane_g1

0x64c2,	// (0x00075c35) pinb_bg_pane_g2

0x64ce,	// (0x00075c41) pinb_bg_pane_g3

0x64da,	// (0x00075c4d) pinb_bg_pane_g4

0x64e6,	// (0x00075c59) pinb_bg_pane_g5

0x64f2,	// (0x00075c65) pinb_bg_pane_g6

0x64fd,	// (0x00075c70) pinb_bg_pane_g7

0x6508,	// (0x00075c7b) pinb_bg_pane_g8

0x6513,	// (0x00075c86) pinb_bg_pane_g9

0x651d,	// (0x00075c90) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0007e87d) pinb_bg_pane_g

0x653a,	// (0x00075cad) grid_pinb_pane

0x6545,	// (0x00075cb8) list_pinb_pane

0x6550,	// (0x00075cc3) scroll_pane_cp01_ParamLimits

0x6550,	// (0x00075cc3) scroll_pane_cp01

0x0dc7,	// (0x0007053a) find_pinb_pane_g1_ParamLimits

0x0dc7,	// (0x0007053a) find_pinb_pane_g1

0x0ddf,	// (0x00070552) find_pinb_pane_t1

0x0df1,	// (0x00070564) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0007e897) find_pinb_pane_t

0x0e06,	// (0x00070579) input_focus_pane_cp01_ParamLimits

0x0e06,	// (0x00070579) input_focus_pane_cp01

0x6562,	// (0x00075cd5) cell_pinb_pane_ParamLimits

0x6562,	// (0x00075cd5) cell_pinb_pane

0x658a,	// (0x00075cfd) cell_pinb_pane_g1_ParamLimits

0x658a,	// (0x00075cfd) cell_pinb_pane_g1

0x659f,	// (0x00075d12) cell_pinb_pane_g2_ParamLimits

0x659f,	// (0x00075d12) cell_pinb_pane_g2

0x0e12,	// (0x00070585) cell_pinb_pane_g3_ParamLimits

0x0e12,	// (0x00070585) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0007e89c) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0007e89c) cell_pinb_pane_g

0xefa4,	// (0x0007e717) grid_highlight_pane_cp01

0x65ab,	// (0x00075d1e) list_pinb_item_pane_ParamLimits

0x65ab,	// (0x00075d1e) list_pinb_item_pane

0xefa4,	// (0x0007e717) list_highlight_pane_cp02

0x65d1,	// (0x00075d44) list_pinb_item_pane_g1_ParamLimits

0x65d1,	// (0x00075d44) list_pinb_item_pane_g1

0x65de,	// (0x00075d51) list_pinb_item_pane_g2_ParamLimits

0x65de,	// (0x00075d51) list_pinb_item_pane_g2

0x65ea,	// (0x00075d5d) list_pinb_item_pane_g3_ParamLimits

0x65ea,	// (0x00075d5d) list_pinb_item_pane_g3

0x65fb,	// (0x00075d6e) list_pinb_item_pane_g4_ParamLimits

0x65fb,	// (0x00075d6e) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0007e8a3) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0007e8a3) list_pinb_item_pane_g

0x6607,	// (0x00075d7a) list_pinb_item_pane_t1_ParamLimits

0x6607,	// (0x00075d7a) list_pinb_item_pane_t1

0x6638,	// (0x00075dab) calc_display_pane

0x6656,	// (0x00075dc9) calc_paper_pane

0x6672,	// (0x00075de5) grid_calc_pane

0xefa4,	// (0x0007e717) bg_list_pane_cp01

0x669e,	// (0x00075e11) clock_g1

0x66a6,	// (0x00075e19) clock_g2

0x0001,

0xf139,	// (0x0007e8ac) clock_g

0x66b0,	// (0x00075e23) clock_t1_ParamLimits

0x66b0,	// (0x00075e23) clock_t1

0x66c5,	// (0x00075e38) clock_t2_ParamLimits

0x66c5,	// (0x00075e38) clock_t2

0x66d7,	// (0x00075e4a) clock_t3_ParamLimits

0x66d7,	// (0x00075e4a) clock_t3

0x66e9,	// (0x00075e5c) clock_t4_ParamLimits

0x66e9,	// (0x00075e5c) clock_t4

0x66fb,	// (0x00075e6e) clock_t5_ParamLimits

0x66fb,	// (0x00075e6e) clock_t5

0x6710,	// (0x00075e83) clock_t6_ParamLimits

0x6710,	// (0x00075e83) clock_t6

0x6722,	// (0x00075e95) clock_t7_ParamLimits

0x6722,	// (0x00075e95) clock_t7

0x6734,	// (0x00075ea7) clock_t8_ParamLimits

0x6734,	// (0x00075ea7) clock_t8

0x674a,	// (0x00075ebd) clock_t9_ParamLimits

0x674a,	// (0x00075ebd) clock_t9

0x0008,

0xf13e,	// (0x0007e8b1) clock_t_ParamLimits

0xf13e,	// (0x0007e8b1) clock_t

0x0e1e,	// (0x00070591) popup_clock_analogue_window_cp02

0x0e1e,	// (0x00070591) popup_clock_digital_window_cp01

0x0e26,	// (0x00070599) listscroll_help_pane

0xefa4,	// (0x0007e717) phob_pre_status_pane

0x0e30,	// (0x000705a3) grid_qdial_pane

0x0d97,	// (0x0007050a) listscroll_mce_pane

0x0d97,	// (0x0007050a) bg_notes_pane

0x0e3a,	// (0x000705ad) list_notes_pane

0x6760,	// (0x00075ed3) scroll_pane_cp06

0x0e48,	// (0x000705bb) bg_calc_paper_pane

0x676f,	// (0x00075ee2) list_calc_pane

0x0e5c,	// (0x000705cf) bg_calc_display_pane

0x6789,	// (0x00075efc) calc_display_pane_t1

0x679e,	// (0x00075f11) calc_display_pane_t2

0x67b3,	// (0x00075f26) calc_display_pane_t3

0x0002,

0xf151,	// (0x0007e8c4) calc_display_pane_t

0x67c5,	// (0x00075f38) cell_calc_pane_ParamLimits

0x67c5,	// (0x00075f38) cell_calc_pane

0x0e68,	// (0x000705db) bg_calc_paper_pane_g1

0x0e80,	// (0x000705f3) bg_calc_paper_pane_g2

0x0e74,	// (0x000705e7) bg_calc_paper_pane_g3

0x0e98,	// (0x0007060b) bg_calc_paper_pane_g4

0x0e8c,	// (0x000705ff) bg_calc_paper_pane_g5

0x67f2,	// (0x00075f65) bg_calc_paper_pane_g6

0x6803,	// (0x00075f76) bg_calc_paper_pane_g7

0x6814,	// (0x00075f87) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0007e8cb) bg_calc_paper_pane_g

0x6825,	// (0x00075f98) calc_bg_paper_pane_g9

0x6836,	// (0x00075fa9) list_calc_item_pane_ParamLimits

0x6836,	// (0x00075fa9) list_calc_item_pane

0x0ea4,	// (0x00070617) list_calc_item_pane_g1

0x6865,	// (0x00075fd8) list_calc_item_pane_t1_ParamLimits

0x6865,	// (0x00075fd8) list_calc_item_pane_t1

0x6877,	// (0x00075fea) list_calc_item_pane_t2_ParamLimits

0x6877,	// (0x00075fea) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0007e8dc) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0007e8dc) list_calc_item_pane_t

0x0eb1,	// (0x00070624) cell_calc_pane_g1

0x0ebb,	// (0x0007062e) grid_highlight_pane_cp02

0x32d5,	// (0x00072a48) bg_calc_display_pane_g1

0x68a7,	// (0x0007601a) bg_calc_display_pane_g2

0x68b1,	// (0x00076024) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0007e8e6) bg_calc_display_pane_g

0x68ba,	// (0x0007602d) cell_qdial_pane_ParamLimits

0x68ba,	// (0x0007602d) cell_qdial_pane

0x68ce,	// (0x00076041) cell_qdial_pane_g1_ParamLimits

0x68ce,	// (0x00076041) cell_qdial_pane_g1

0x68db,	// (0x0007604e) cell_qdial_pane_g2_ParamLimits

0x68db,	// (0x0007604e) cell_qdial_pane_g2

0x0edd,	// (0x00070650) cell_qdial_pane_g3_ParamLimits

0x0edd,	// (0x00070650) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0007e8ed) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0007e8ed) cell_qdial_pane_g

0x68f9,	// (0x0007606c) cell_qdial_pane_t1_ParamLimits

0x68f9,	// (0x0007606c) cell_qdial_pane_t1

0x6911,	// (0x00076084) cell_qdial_pane_t2_ParamLimits

0x6911,	// (0x00076084) cell_qdial_pane_t2

0x6924,	// (0x00076097) cell_qdial_pane_t3_ParamLimits

0x6924,	// (0x00076097) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0007e8f6) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0007e8f6) cell_qdial_pane_t

0xefa4,	// (0x0007e717) grid_highlight_pane_cp04

0x0ee9,	// (0x0007065c) thumbnail_qdial_pane_ParamLimits

0x0ee9,	// (0x0007065c) thumbnail_qdial_pane

0x0f45,	// (0x000706b8) list_help_pane

0x0f4e,	// (0x000706c1) scroll_pane_cp02

0x6937,	// (0x000760aa) help_list_pane_t1_ParamLimits

0x6937,	// (0x000760aa) help_list_pane_t1

0x696a,	// (0x000760dd) bg_notes_pane_g2

0x6972,	// (0x000760e5) bg_notes_pane_g3

0x697a,	// (0x000760ed) notes_bg_pane_g1

0x6982,	// (0x000760f5) notes_bg_pane_g4

0x698a,	// (0x000760fd) notes_bg_pane_g5

0x6992,	// (0x00076105) notes_bg_pane_g6

0x699a,	// (0x0007610d) notes_bg_pane_g7

0x69a2,	// (0x00076115) notes_bg_pane_g8

0x69aa,	// (0x0007611d) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0007e914) notes_bg_pane_g

0x69b2,	// (0x00076125) list_notes_text_pane_ParamLimits

0x69b2,	// (0x00076125) list_notes_text_pane

0x0f57,	// (0x000706ca) list_notes_text_pane_g1

0x4ef8,	// (0x0007466b) list_notes_text_pane_t1

0x69da,	// (0x0007614d) listscroll_cale_week_pane

0x69ff,	// (0x00076172) bg_cale_heading_pane

0x0f7a,	// (0x000706ed) bg_cale_pane_cp01

0x6a1f,	// (0x00076192) cale_week_corner_pane

0x6a39,	// (0x000761ac) cale_week_day_heading_pane

0x6a59,	// (0x000761cc) cale_week_scroll_pane_g1

0x6a74,	// (0x000761e7) cale_week_scroll_pane_g2

0x6a87,	// (0x000761fa) cale_week_scroll_pane_g3

0x6a9a,	// (0x0007620d) cale_week_scroll_pane_g4

0x6aad,	// (0x00076220) cale_week_scroll_pane_g5

0x6ac0,	// (0x00076233) cale_week_scroll_pane_g6

0x6ad3,	// (0x00076246) cale_week_scroll_pane_g7

0x6ae8,	// (0x0007625b) cale_week_scroll_pane_g8

0x6afd,	// (0x00076270) cale_week_scroll_pane_g9

0x6b10,	// (0x00076283) cale_week_scroll_pane_g10

0x6b23,	// (0x00076296) cale_week_scroll_pane_g11

0x6b36,	// (0x000762a9) cale_week_scroll_pane_g12

0x6b4d,	// (0x000762c0) cale_week_scroll_pane_g13

0x6b68,	// (0x000762db) cale_week_scroll_pane_g14

0x6b83,	// (0x000762f6) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0007e923) cale_week_scroll_pane_g

0x6bb3,	// (0x00076326) cale_week_time_pane

0x6bc8,	// (0x0007633b) grid_cale_week_pane

0x0fa9,	// (0x0007071c) scroll_pane_cp08

0x6be7,	// (0x0007635a) cell_cale_week_pane_ParamLimits

0x6be7,	// (0x0007635a) cell_cale_week_pane

0x6c49,	// (0x000763bc) cale_week_day_heading_pane_t1

0x6c64,	// (0x000763d7) cale_week_day_heading_pane_t2

0x6c7f,	// (0x000763f2) cale_week_day_heading_pane_t3

0x6c9a,	// (0x0007640d) cale_week_day_heading_pane_t4

0x6cb5,	// (0x00076428) cale_week_day_heading_pane_t5

0x6cd0,	// (0x00076443) cale_week_day_heading_pane_t6

0x6ceb,	// (0x0007645e) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0007e944) cale_week_day_heading_pane_t

0x0fc6,	// (0x00070739) bg_cale_side_pane

0x6d06,	// (0x00076479) cale_week_time_pane_t1

0x6d20,	// (0x00076493) cale_week_time_pane_t2

0x6d3a,	// (0x000764ad) cale_week_time_pane_t3

0x6d54,	// (0x000764c7) cale_week_time_pane_t4

0x6d6e,	// (0x000764e1) cale_week_time_pane_t5

0x6d88,	// (0x000764fb) cale_week_time_pane_t6

0x6da6,	// (0x00076519) cale_week_time_pane_t7

0x6dc8,	// (0x0007653b) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0007e953) cale_week_time_pane_t

0x6dec,	// (0x0007655f) cell_cale_week_pane_g2

0x6e10,	// (0x00076583) cell_cale_week_pane_g3_ParamLimits

0x6e10,	// (0x00076583) cell_cale_week_pane_g3

0x0fd4,	// (0x00070747) grid_highlight_pane_cp07

0x0fdc,	// (0x0007074f) listscroll_gms_pane

0x0fe6,	// (0x00070759) grid_gms_pane

0x0fef,	// (0x00070762) listscroll_gms_pane_g1

0x0ff7,	// (0x0007076a) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0007e964) listscroll_gms_pane_g

0x6e28,	// (0x0007659b) scroll_pane_cp010

0x6e33,	// (0x000765a6) cell_gms_pane_ParamLimits

0x6e33,	// (0x000765a6) cell_gms_pane

0x6e46,	// (0x000765b9) cell_gms_pane_g1

0x0fff,	// (0x00070772) cell_gms_pane_g2

0x1007,	// (0x0007077a) cell_gms_pane_g3

0x1010,	// (0x00070783) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0007e969) cell_gms_pane_g

0x1019,	// (0x0007078c) grid_highlight_pane_cp09

0x91b2,	// (0x00078925) phob_pre_status_pane_g1

0x91ba,	// (0x0007892d) phob_pre_status_pane_g2

0x91c2,	// (0x00078935) phob_pre_status_pane_g3

0x91ca,	// (0x0007893d) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0007ed54) phob_pre_status_pane_g

0x91da,	// (0x0007894d) phob_pre_status_pane_t1

0x91ea,	// (0x0007895d) phob_pre_status_pane_t2

0x91fa,	// (0x0007896d) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0007ed5f) phob_pre_status_pane_t

0x1021,	// (0x00070794) bg_list_pane_cp05

0x6e56,	// (0x000765c9) grid_vorec_pane

0x6e60,	// (0x000765d3) vorec_t1

0x6e6e,	// (0x000765e1) vorec_t2

0x6e7c,	// (0x000765ef) vorec_t3

0x6e8a,	// (0x000765fd) vorec_t4

0xe04d,	// (0x0007d7c0) vorec_t5

0xe05b,	// (0x0007d7ce) vorec_t6

0x0004,

0xf1ff,	// (0x0007e972) vorec_t

0xe069,	// (0x0007d7dc) wait_bar_pane_cp01

0x6ea6,	// (0x00076619) cell_vorec_pane_ParamLimits

0x6ea6,	// (0x00076619) cell_vorec_pane

0x6eb9,	// (0x0007662c) cell_vorec_pane_g1

0xefa4,	// (0x0007e717) grid_highlight_pane_cp05

0x6ed3,	// (0x00076646) cams_zoom_pane

0x6edf,	// (0x00076652) image_vga_pane

0x6eee,	// (0x00076661) main_camera_pane_g1

0x6efc,	// (0x0007666f) main_camera_pane_g2

0x6f08,	// (0x0007667b) main_camera_pane_g3

0x6f14,	// (0x00076687) main_camera_pane_g4

0x6f20,	// (0x00076693) main_camera_pane_g5

0x6f2c,	// (0x0007669f) main_camera_pane_g6

0x6f38,	// (0x000766ab) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0007e97d) main_camera_pane_g

0x6f44,	// (0x000766b7) main_camera_pane_t1

0x6f56,	// (0x000766c9) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0007e98e) main_camera_pane_t

0x6f77,	// (0x000766ea) cams_zoom_pane_cp_ParamLimits

0x6f77,	// (0x000766ea) cams_zoom_pane_cp

0x6f9b,	// (0x0007670e) image_cif_pane_ParamLimits

0x6f9b,	// (0x0007670e) image_cif_pane

0x6fb9,	// (0x0007672c) image_subqcif_pane

0x6fc1,	// (0x00076734) main_video_pane_g1_ParamLimits

0x6fc1,	// (0x00076734) main_video_pane_g1

0x6fe1,	// (0x00076754) main_video_pane_g2_ParamLimits

0x6fe1,	// (0x00076754) main_video_pane_g2

0x7011,	// (0x00076784) main_video_pane_g3_ParamLimits

0x7011,	// (0x00076784) main_video_pane_g3

0x703a,	// (0x000767ad) main_video_pane_g4_ParamLimits

0x703a,	// (0x000767ad) main_video_pane_g4

0x7063,	// (0x000767d6) main_video_pane_g5_ParamLimits

0x7063,	// (0x000767d6) main_video_pane_g5

0x1035,	// (0x000707a8) main_video_pane_g6_ParamLimits

0x1035,	// (0x000707a8) main_video_pane_g6

0x0006,

0xf220,	// (0x0007e993) main_video_pane_g_ParamLimits

0xf220,	// (0x0007e993) main_video_pane_g

0x7085,	// (0x000767f8) main_video_pane_t1_ParamLimits

0x7085,	// (0x000767f8) main_video_pane_t1

0x104f,	// (0x000707c2) cams_zoom_pane_g1

0x1058,	// (0x000707cb) cams_zoom_pane_g2

0x1061,	// (0x000707d4) cams_zoom_pane_g3

0x106a,	// (0x000707dd) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0007e9a2) cams_zoom_pane_g

0x70cf,	// (0x00076842) grid_cams_pane

0x70dd,	// (0x00076850) linegrid_cams_pane

0x70eb,	// (0x0007685e) cell_cams_pane_ParamLimits

0x70eb,	// (0x0007685e) cell_cams_pane

0x1073,	// (0x000707e6) cams_burst_image_pane

0x107b,	// (0x000707ee) cell_cams_pane_g1

0xefa4,	// (0x0007e717) grid_highlight_pane_cp03

0x0eb1,	// (0x00070624) mp_bg_pane_g1

0xefa4,	// (0x0007e717) bg_list_pane_cp03

0x2de8,	// (0x0007255b) bg_mp_pane

0x2df0,	// (0x00072563) grid_mp_pane

0x2df8,	// (0x0007256b) media_player_g1

0x2e00,	// (0x00072573) media_player_t1

0x2e0e,	// (0x00072581) media_player_t2

0x2e1c,	// (0x0007258f) media_player_t3

0x2e2a,	// (0x0007259d) media_player_t4

0x2e38,	// (0x000725ab) media_player_t5

0x2e46,	// (0x000725b9) media_player_t6

0x2e54,	// (0x000725c7) media_player_t7

0x0006,

0xf5cb,	// (0x0007ed3e) media_player_t

0x2e62,	// (0x000725d5) wait_bar_pane_cp02

0xf5b0,	// (0x0007ed23) main_usb_pane_t

0x91a9,	// (0x0007891c) cell_mp_pane

0x0eb1,	// (0x00070624) cell_mp_pane_g1

0xefa4,	// (0x0007e717) grid_highlight_pane_cp06

0x1083,	// (0x000707f6) grid_skin_colour_pane

0x108b,	// (0x000707fe) list_highlight_pane_cp03

0x7116,	// (0x00076889) skin_g1

0x1093,	// (0x00070806) skin_t1

0x10a2,	// (0x00070815) skin_t2

0x0001,

0xf264,	// (0x0007e9d7) skin_t

0x7120,	// (0x00076893) cell_skin_colour_pane_ParamLimits

0x7120,	// (0x00076893) cell_skin_colour_pane

0x10b0,	// (0x00070823) cell_skin_colour_pane_g1

0x71a4,	// (0x00076917) call_video_g1_ParamLimits

0x71a4,	// (0x00076917) call_video_g1

0x71b4,	// (0x00076927) call_video_g2_ParamLimits

0x71b4,	// (0x00076927) call_video_g2

0x0001,

0xf269,	// (0x0007e9dc) call_video_g_ParamLimits

0xf269,	// (0x0007e9dc) call_video_g

0x720e,	// (0x00076981) call_video_uplink_pane_cp1_ParamLimits

0x720e,	// (0x00076981) call_video_uplink_pane_cp1

0x10c2,	// (0x00070835) call_video_uplink_pane_cp2

0x72da,	// (0x00076a4d) video_down_crop_pane_ParamLimits

0x72da,	// (0x00076a4d) video_down_crop_pane

0x73d8,	// (0x00076b4b) video_down_pane_ParamLimits

0x73d8,	// (0x00076b4b) video_down_pane

0x10ca,	// (0x0007083d) video_down_subqcif_pane_ParamLimits

0x10ca,	// (0x0007083d) video_down_subqcif_pane

0x10e2,	// (0x00070855) video_down_subqcif_pane_cp_ParamLimits

0x10e2,	// (0x00070855) video_down_subqcif_pane_cp

0x1108,	// (0x0007087b) im_reading_pane_ParamLimits

0x1108,	// (0x0007087b) im_reading_pane

0x74f8,	// (0x00076c6b) im_writing_pane_ParamLimits

0x74f8,	// (0x00076c6b) im_writing_pane

0x7516,	// (0x00076c89) im_reading_pane_t1

0x1122,	// (0x00070895) list_im_pane

0x1133,	// (0x000708a6) scroll_pane_cp07

0x756a,	// (0x00076cdd) im_writing_pane_t1_ParamLimits

0x756a,	// (0x00076cdd) im_writing_pane_t1

0x114c,	// (0x000708bf) im_writing_pane_t2_ParamLimits

0x114c,	// (0x000708bf) im_writing_pane_t2

0x0001,

0xf273,	// (0x0007e9e6) im_writing_pane_t_ParamLimits

0xf273,	// (0x0007e9e6) im_writing_pane_t

0xefa4,	// (0x0007e717) input_focus_pane_cp04

0xefa4,	// (0x0007e717) input_focus_pane_cp05

0x757f,	// (0x00076cf2) list_im_single_pane_ParamLimits

0x757f,	// (0x00076cf2) list_im_single_pane

0x75a3,	// (0x00076d16) list_single_im_pane_t1

0x916d,	// (0x000788e0) blid_accuracy_pane

0x9175,	// (0x000788e8) blid_compass_pane

0x917f,	// (0x000788f2) main_location_t1

0x918d,	// (0x00078900) main_location_t2

0x919b,	// (0x0007890e) main_location_t3

0x0002,

0xf5da,	// (0x0007ed4d) main_location_t

0xefa4,	// (0x0007e717) aid_levels_location

0x0eb1,	// (0x00070624) blid_accuracy_pane_g1

0x0eb1,	// (0x00070624) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0007ea48) blid_accuracy_pane_g

0x1194,	// (0x00070907) wml_content_pane

0x11d2,	// (0x00070945) wml_button_pane_ParamLimits

0x11d2,	// (0x00070945) wml_button_pane

0x75b2,	// (0x00076d25) wml_list_single_large_pane_ParamLimits

0x75b2,	// (0x00076d25) wml_list_single_large_pane

0x75dc,	// (0x00076d4f) wml_list_single_medium_pane_ParamLimits

0x75dc,	// (0x00076d4f) wml_list_single_medium_pane

0x760d,	// (0x00076d80) wml_list_single_small_pane_ParamLimits

0x760d,	// (0x00076d80) wml_list_single_small_pane

0x11e6,	// (0x00070959) wml_selection_box_pane_ParamLimits

0x11e6,	// (0x00070959) wml_selection_box_pane

0x11f9,	// (0x0007096c) wml_list_single_pane_t1

0x1208,	// (0x0007097b) wml_list_single_medium_pane_t1

0x1217,	// (0x0007098a) wml_list_single_large_pane_t1

0x1226,	// (0x00070999) input_focus_pane_cp02_ParamLimits

0x1226,	// (0x00070999) input_focus_pane_cp02

0x1239,	// (0x000709ac) wml_selection_box_pane_g1

0x1242,	// (0x000709b5) wml_selection_box_pane_t1_ParamLimits

0x1242,	// (0x000709b5) wml_selection_box_pane_t1

0x0d97,	// (0x0007050a) bg_wml_button_pane_ParamLimits

0x0d97,	// (0x0007050a) bg_wml_button_pane

0x125a,	// (0x000709cd) wml_button_pane_g1

0x1262,	// (0x000709d5) wml_button_pane_t1

0x125a,	// (0x000709cd) wml_button_bg_pane_g1

0x1272,	// (0x000709e5) wml_button_bg_pane_g2

0x127a,	// (0x000709ed) wml_button_bg_pane_g3

0x1282,	// (0x000709f5) wml_button_bg_pane_g4

0x128a,	// (0x000709fd) wml_button_bg_pane_g5

0x1292,	// (0x00070a05) wml_button_bg_pane_g6

0x129a,	// (0x00070a0d) wml_button_bg_pane_g7

0x12a2,	// (0x00070a15) wml_button_bg_pane_g8

0x12aa,	// (0x00070a1d) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0007e9eb) wml_button_bg_pane_g

0x7647,	// (0x00076dba) bg_list_pane_cp02

0x12b2,	// (0x00070a25) mce_header_pane_ParamLimits

0x12b2,	// (0x00070a25) mce_header_pane

0x12c8,	// (0x00070a3b) mce_icon_pane

0x12c8,	// (0x00070a3b) mce_image_pane

0x12d1,	// (0x00070a44) mce_text_pane_ParamLimits

0x12d1,	// (0x00070a44) mce_text_pane

0x7651,	// (0x00076dc4) scroll_pane_cp03

0x11ca,	// (0x0007093d) scroll_pane_cp04

0x12e4,	// (0x00070a57) scroll_pane_cp05_ParamLimits

0x12e4,	// (0x00070a57) scroll_pane_cp05

0x765b,	// (0x00076dce) mce_header_field_pane_ParamLimits

0x765b,	// (0x00076dce) mce_header_field_pane

0x767b,	// (0x00076dee) mce_header_field_pane_2_ParamLimits

0x767b,	// (0x00076dee) mce_header_field_pane_2

0x7691,	// (0x00076e04) mce_header_field_pane_3

0x7699,	// (0x00076e0c) list_single_mce_message_pane_ParamLimits

0x7699,	// (0x00076e0c) list_single_mce_message_pane

0x76c4,	// (0x00076e37) list_single_mce_smart_pane_ParamLimits

0x76c4,	// (0x00076e37) list_single_mce_smart_pane

0x12f0,	// (0x00070a63) input_focus_pane_cp03

0x12f9,	// (0x00070a6c) list_header_data_pane

0x76fa,	// (0x00076e6d) mce_header_field_pane_t1

0x7708,	// (0x00076e7b) list_single_mce_header_pane_ParamLimits

0x7708,	// (0x00076e7b) list_single_mce_header_pane

0x1301,	// (0x00070a74) list_single_mce_header_pane_t1

0x1310,	// (0x00070a83) list_single_mce_message_pane_g1

0x1318,	// (0x00070a8b) list_single_mce_message_pane_t1

0x775a,	// (0x00076ecd) bg_cale_heading_pane_cp01_ParamLimits

0x775a,	// (0x00076ecd) bg_cale_heading_pane_cp01

0x1326,	// (0x00070a99) bg_cale_pane_cp02_ParamLimits

0x1326,	// (0x00070a99) bg_cale_pane_cp02

0x77a8,	// (0x00076f1b) cale_month_corner_pane

0x77c7,	// (0x00076f3a) cale_month_day_heading_pane_ParamLimits

0x77c7,	// (0x00076f3a) cale_month_day_heading_pane

0x782d,	// (0x00076fa0) cale_month_pane_g1_ParamLimits

0x782d,	// (0x00076fa0) cale_month_pane_g1

0x7870,	// (0x00076fe3) cale_month_pane_g2_ParamLimits

0x7870,	// (0x00076fe3) cale_month_pane_g2

0x78a8,	// (0x0007701b) cale_month_pane_g3_ParamLimits

0x78a8,	// (0x0007701b) cale_month_pane_g3

0x78f4,	// (0x00077067) cale_month_pane_g4_ParamLimits

0x78f4,	// (0x00077067) cale_month_pane_g4

0x7940,	// (0x000770b3) cale_month_pane_g5_ParamLimits

0x7940,	// (0x000770b3) cale_month_pane_g5

0x798c,	// (0x000770ff) cale_month_pane_g6_ParamLimits

0x798c,	// (0x000770ff) cale_month_pane_g6

0x79d8,	// (0x0007714b) cale_month_pane_g7_ParamLimits

0x79d8,	// (0x0007714b) cale_month_pane_g7

0x7a3c,	// (0x000771af) cale_month_pane_g8_ParamLimits

0x7a3c,	// (0x000771af) cale_month_pane_g8

0x7aa0,	// (0x00077213) cale_month_pane_g9_ParamLimits

0x7aa0,	// (0x00077213) cale_month_pane_g9

0x7afe,	// (0x00077271) cale_month_pane_g10_ParamLimits

0x7afe,	// (0x00077271) cale_month_pane_g10

0x7b5a,	// (0x000772cd) cale_month_pane_g11_ParamLimits

0x7b5a,	// (0x000772cd) cale_month_pane_g11

0x7bae,	// (0x00077321) cale_month_pane_g12_ParamLimits

0x7bae,	// (0x00077321) cale_month_pane_g12

0x7c04,	// (0x00077377) cale_month_pane_g13_ParamLimits

0x7c04,	// (0x00077377) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0007e9fe) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0007e9fe) cale_month_pane_g

0x7c5a,	// (0x000773cd) cale_month_week_pane

0x7c7e,	// (0x000773f1) grid_cale_month_pane_ParamLimits

0x7c7e,	// (0x000773f1) grid_cale_month_pane

0x7cd7,	// (0x0007744a) cale_month_day_heading_pane_t1

0x7d5d,	// (0x000774d0) cale_month_day_heading_pane_t2

0x7dd6,	// (0x00077549) cale_month_day_heading_pane_t3

0x7e4f,	// (0x000775c2) cale_month_day_heading_pane_t4

0x7ec8,	// (0x0007763b) cale_month_day_heading_pane_t5

0x7f41,	// (0x000776b4) cale_month_day_heading_pane_t6

0x7fba,	// (0x0007772d) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0007ea19) cale_month_day_heading_pane_t

0x0fc6,	// (0x00070739) bg_cale_side_pane_cp01

0x804b,	// (0x000777be) cale_month_week_pane_t1

0x8064,	// (0x000777d7) cale_month_week_pane_t2

0x807d,	// (0x000777f0) cale_month_week_pane_t3

0x8096,	// (0x00077809) cale_month_week_pane_t4

0x80af,	// (0x00077822) cale_month_week_pane_t5

0x80d0,	// (0x00077843) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0007ea28) cale_month_week_pane_t

0x80f1,	// (0x00077864) cell_cale_month_pane_ParamLimits

0x80f1,	// (0x00077864) cell_cale_month_pane

0x8213,	// (0x00077986) cell_cale_month_pane_g1

0x821f,	// (0x00077992) cell_cale_month_pane_t1_ParamLimits

0x821f,	// (0x00077992) cell_cale_month_pane_t1

0x0fd4,	// (0x00070747) grid_highlight_pane_cp08

0x0eb1,	// (0x00070624) main_smil_g1

0x824b,	// (0x000779be) smil_status_pane

0x1365,	// (0x00070ad8) smil_text_pane

0x2d08,	// (0x0007247b) bg_popup_call3_rect_pane_g8

0x2d10,	// (0x00072483) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0007ece1) bg_popup_call3_rect_pane_g

0x2f78,	// (0x000726eb) smil_status_volume_pane_g1

0x136f,	// (0x00070ae2) smil_status_pane_t1

0x9597,	// (0x00078d0a) volume_smil_pane

0x1386,	// (0x00070af9) list_smil_text_pane

0x825e,	// (0x000779d1) scroll_pane_cp011

0x8269,	// (0x000779dc) smil_text_list_pane_t1_ParamLimits

0x8269,	// (0x000779dc) smil_text_list_pane_t1

0x82e1,	// (0x00077a54) aid_volume_smil_ParamLimits

0x82e1,	// (0x00077a54) aid_volume_smil

0x0eb1,	// (0x00070624) smil_volume_pane_g1

0x0eb1,	// (0x00070624) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0007ea48) smil_volume_pane_g

0x69da,	// (0x0007614d) listscroll_cale_day_pane

0x1390,	// (0x00070b03) bg_cale_pane

0x13a8,	// (0x00070b1b) list_cale_pane

0x13cb,	// (0x00070b3e) scroll_pane_cp09

0x13dc,	// (0x00070b4f) cale_bg_pane_g1

0x13e4,	// (0x00070b57) cale_bg_pane_g2

0x13ec,	// (0x00070b5f) cale_bg_pane_g3

0x13f4,	// (0x00070b67) cale_bg_pane_g4

0x13fc,	// (0x00070b6f) cale_bg_pane_g5

0x1404,	// (0x00070b77) cale_bg_pane_g6

0x140c,	// (0x00070b7f) cale_bg_pane_g7

0x1414,	// (0x00070b87) cale_bg_pane_g8

0x141c,	// (0x00070b8f) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0007ea4d) cale_bg_pane_g

0x830b,	// (0x00077a7e) list_cale_time_pane_ParamLimits

0x830b,	// (0x00077a7e) list_cale_time_pane

0x1424,	// (0x00070b97) list_cale_time_pane_g1_ParamLimits

0x1424,	// (0x00070b97) list_cale_time_pane_g1

0x1430,	// (0x00070ba3) list_cale_time_pane_g2_ParamLimits

0x1430,	// (0x00070ba3) list_cale_time_pane_g2

0x832d,	// (0x00077aa0) list_cale_time_pane_g3_ParamLimits

0x832d,	// (0x00077aa0) list_cale_time_pane_g3

0x833b,	// (0x00077aae) list_cale_time_pane_g4_ParamLimits

0x833b,	// (0x00077aae) list_cale_time_pane_g4

0x8349,	// (0x00077abc) list_cale_time_pane_g5_ParamLimits

0x8349,	// (0x00077abc) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0007ea60) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0007ea60) list_cale_time_pane_g

0x144a,	// (0x00070bbd) list_cale_time_pane_t1_ParamLimits

0x144a,	// (0x00070bbd) list_cale_time_pane_t1

0x1472,	// (0x00070be5) list_cale_time_pane_t2_ParamLimits

0x1472,	// (0x00070be5) list_cale_time_pane_t2

0x8610,	// (0x00077d83) aid_blid_cardinal_pane

0x8652,	// (0x00077dc5) compass_pane_t4

0x149a,	// (0x00070c0d) list_cale_time_pane_t4_ParamLimits

0x149a,	// (0x00070c0d) list_cale_time_pane_t4

0x8660,	// (0x00077dd3) compass_pane_t5

0x8670,	// (0x00077de3) compass_pane_t6

0x867e,	// (0x00077df1) compass_pane_t7

0x194b,	// (0x000710be) navi_pane_cc_t1

0x1b28,	// (0x0007129b) aid_phob_thumbnail_center_pane

0x8c73,	// (0x000783e6) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0007ea6d) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0007ea6d) list_cale_time_pane_t

0xebfb,	// (0x0007e36e) bg_popup_window_pane_cp02_ParamLimits

0xebfb,	// (0x0007e36e) bg_popup_window_pane_cp02

0x14c2,	// (0x00070c35) heading_pane_cp01_ParamLimits

0x14c2,	// (0x00070c35) heading_pane_cp01

0x14ce,	// (0x00070c41) loc_req_pane_ParamLimits

0x14ce,	// (0x00070c41) loc_req_pane

0x14de,	// (0x00070c51) loc_type_pane_ParamLimits

0x14de,	// (0x00070c51) loc_type_pane

0x14f0,	// (0x00070c63) loc_type_pane_t1_ParamLimits

0x14f0,	// (0x00070c63) loc_type_pane_t1

0x1502,	// (0x00070c75) loc_type_pane_t2_ParamLimits

0x1502,	// (0x00070c75) loc_type_pane_t2

0x1514,	// (0x00070c87) loc_type_pane_t3_ParamLimits

0x1514,	// (0x00070c87) loc_type_pane_t3

0x0002,

0xf301,	// (0x0007ea74) loc_type_pane_t_ParamLimits

0xf301,	// (0x0007ea74) loc_type_pane_t

0x1526,	// (0x00070c99) list_loc_req_pane

0x1530,	// (0x00070ca3) scroll_pane_cp012

0x8357,	// (0x00077aca) list_single_loc_request_popup_menu_pane_ParamLimits

0x8357,	// (0x00077aca) list_single_loc_request_popup_menu_pane

0x153b,	// (0x00070cae) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x153b,	// (0x00070cae) list_single_loc_request_popup_menu_pane_g1

0x1547,	// (0x00070cba) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1547,	// (0x00070cba) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0007ea7b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0007ea7b) list_single_loc_request_popup_menu_pane_g

0x1553,	// (0x00070cc6) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1553,	// (0x00070cc6) list_single_loc_request_popup_menu_pane_t1

0x8369,	// (0x00077adc) bg_popup_window_pane_cp03_ParamLimits

0x8369,	// (0x00077adc) bg_popup_window_pane_cp03

0x8377,	// (0x00077aea) heading_loc_req_pane_ParamLimits

0x8377,	// (0x00077aea) heading_loc_req_pane

0x8383,	// (0x00077af6) popup_dyc_status_message_window_g1_ParamLimits

0x8383,	// (0x00077af6) popup_dyc_status_message_window_g1

0x838f,	// (0x00077b02) popup_dyc_status_message_window_t1_ParamLimits

0x838f,	// (0x00077b02) popup_dyc_status_message_window_t1

0x83a1,	// (0x00077b14) popup_dyc_status_message_window_t2_ParamLimits

0x83a1,	// (0x00077b14) popup_dyc_status_message_window_t2

0x83b3,	// (0x00077b26) popup_dyc_status_message_window_t3_ParamLimits

0x83b3,	// (0x00077b26) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0007ea80) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0007ea80) popup_dyc_status_message_window_t

0xefa4,	// (0x0007e717) bg_heading_pane_cp01

0x1569,	// (0x00070cdc) heading_loc_req_pane_g1

0x1571,	// (0x00070ce4) heading_loc_req_pane_g2

0x1579,	// (0x00070cec) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0007ea87) heading_loc_req_pane_g

0x1581,	// (0x00070cf4) heading_loc_req_pane_t1

0x1590,	// (0x00070d03) bg_popup_sub_pane_cp01_ParamLimits

0x1590,	// (0x00070d03) bg_popup_sub_pane_cp01

0x159e,	// (0x00070d11) popup_cale_events_window_g1_ParamLimits

0x159e,	// (0x00070d11) popup_cale_events_window_g1

0x15be,	// (0x00070d31) popup_cale_events_window_g2_ParamLimits

0x15be,	// (0x00070d31) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0007eabb) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0007eabb) popup_cale_events_window_g

0x15de,	// (0x00070d51) popup_cale_events_window_t1_ParamLimits

0x15de,	// (0x00070d51) popup_cale_events_window_t1

0x15f0,	// (0x00070d63) popup_cale_events_window_t2_ParamLimits

0x15f0,	// (0x00070d63) popup_cale_events_window_t2

0x162e,	// (0x00070da1) popup_cale_events_window_t3_ParamLimits

0x162e,	// (0x00070da1) popup_cale_events_window_t3

0x1668,	// (0x00070ddb) popup_cale_events_window_t4_ParamLimits

0x1668,	// (0x00070ddb) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0007eac0) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0007eac0) popup_cale_events_window_t

0x83dd,	// (0x00077b50) call_type_pane

0x1916,	// (0x00071089) popup_call_status_window_g1

0x83e9,	// (0x00077b5c) popup_call_status_window_g2

0x83f5,	// (0x00077b68) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0007eac9) popup_call_status_window_g

0x169e,	// (0x00070e11) call_type_pane_g1

0x16a7,	// (0x00070e1a) call_type_pane_g2

0x0001,

0xf35d,	// (0x0007ead0) call_type_pane_g

0xefa4,	// (0x0007e717) bg_popup_sub_pane_cp02

0x16b0,	// (0x00070e23) listscroll_popup_wml_pane

0x16b8,	// (0x00070e2b) list_wml_pane

0x16c2,	// (0x00070e35) scroll_pane_cp013

0x16cd,	// (0x00070e40) list_single_graphic_popup_wml_pane_ParamLimits

0x16cd,	// (0x00070e40) list_single_graphic_popup_wml_pane

0x0eb1,	// (0x00070624) list_single_graphic_popup_wml_pane_g1

0x16e1,	// (0x00070e54) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0007ead5) list_single_graphic_popup_wml_pane_g

0x16e9,	// (0x00070e5c) list_single_graphic_popup_wml_pane_t1

0x16f7,	// (0x00070e6a) aid_call_pane

0x0d8f,	// (0x00070502) popup_clock_analogue_window_g1

0x0d8f,	// (0x00070502) popup_clock_analogue_window_g2

0x8401,	// (0x00077b74) popup_clock_analogue_window_g3

0x8401,	// (0x00077b74) popup_clock_analogue_window_g4

0x0eb1,	// (0x00070624) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0007eada) popup_clock_analogue_window_g

0x8409,	// (0x00077b7c) popup_clock_analogue_window_t1

0x8417,	// (0x00077b8a) clock_digital_number_pane_ParamLimits

0x8417,	// (0x00077b8a) clock_digital_number_pane

0x8423,	// (0x00077b96) clock_digital_number_pane_cp02_ParamLimits

0x8423,	// (0x00077b96) clock_digital_number_pane_cp02

0x842f,	// (0x00077ba2) clock_digital_number_pane_cp03_ParamLimits

0x842f,	// (0x00077ba2) clock_digital_number_pane_cp03

0x843b,	// (0x00077bae) clock_digital_number_pane_cp04_ParamLimits

0x843b,	// (0x00077bae) clock_digital_number_pane_cp04

0x844b,	// (0x00077bbe) clock_digital_separator_pane_ParamLimits

0x844b,	// (0x00077bbe) clock_digital_separator_pane

0x8457,	// (0x00077bca) popup_clock_digital_window_t1

0x0eb1,	// (0x00070624) clock_digital_number_pane_g1

0x0eb1,	// (0x00070624) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0007ea48) clock_digital_number_pane_g

0x0eb1,	// (0x00070624) clock_digital_separator_pane_g1

0x0eb1,	// (0x00070624) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0007ea48) clock_digital_separator_pane_g

0xefa4,	// (0x0007e717) bg_popup_window_pane_cp04

0x1707,	// (0x00070e7a) heading_pane_cp03

0x170f,	// (0x00070e82) listscroll_popup_gms_pane

0x1717,	// (0x00070e8a) grid_large_graphic_popup_pane

0x1721,	// (0x00070e94) listscroll_popup_gms_pane_g1

0x1729,	// (0x00070e9c) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0007eae5) listscroll_popup_gms_pane_g

0x11ca,	// (0x0007093d) scroll_pane_cp014

0x8474,	// (0x00077be7) cell_large_graphic_popup_pane_ParamLimits

0x8474,	// (0x00077be7) cell_large_graphic_popup_pane

0x848c,	// (0x00077bff) cell_large_graphic_popup_pane_g1_ParamLimits

0x848c,	// (0x00077bff) cell_large_graphic_popup_pane_g1

0x1731,	// (0x00070ea4) cell_large_graphic_popup_pane_g2_ParamLimits

0x1731,	// (0x00070ea4) cell_large_graphic_popup_pane_g2

0x173d,	// (0x00070eb0) cell_large_graphic_popup_pane_g3_ParamLimits

0x173d,	// (0x00070eb0) cell_large_graphic_popup_pane_g3

0x174a,	// (0x00070ebd) cell_large_graphic_popup_pane_g4_ParamLimits

0x174a,	// (0x00070ebd) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0007eaea) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0007eaea) cell_large_graphic_popup_pane_g

0x175a,	// (0x00070ecd) grid_highlight_pane_cp010

0x0eb1,	// (0x00070624) bg_popup_call_pane_g1

0x1764,	// (0x00070ed7) list_single_graphic_popup_conf_pane_ParamLimits

0x1764,	// (0x00070ed7) list_single_graphic_popup_conf_pane

0x1777,	// (0x00070eea) list_highlight_pane_cp01

0x1780,	// (0x00070ef3) list_single_graphic_popup_conf_pane_g1

0x1788,	// (0x00070efb) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0007eaf3) list_single_graphic_popup_conf_pane_g

0x1790,	// (0x00070f03) list_single_graphic_popup_conf_pane_t1

0x179e,	// (0x00070f11) linegrid_cams_pane_g1

0x8498,	// (0x00077c0b) linegrid_cams_pane_g2

0x1007,	// (0x0007077a) linegrid_cams_pane_g3

0x17a7,	// (0x00070f1a) linegrid_cams_pane_g4

0x84a1,	// (0x00077c14) linegrid_cams_pane_g5

0x84aa,	// (0x00077c1d) linegrid_cams_pane_g6

0x1010,	// (0x00070783) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0007eaf8) linegrid_cams_pane_g

0x17b0,	// (0x00070f23) popup_clock_analogue_window

0x17b0,	// (0x00070f23) popup_clock_digital_window

0xefa4,	// (0x0007e717) popup_phob_thumbnail_window

0x0eb1,	// (0x00070624) call_video_uplink_pane_g1

0x17b9,	// (0x00070f2c) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0007eb07) call_video_uplink_pane_g

0x17c1,	// (0x00070f34) video_uplink_pane

0x17c9,	// (0x00070f3c) mce_image_pane_g1

0x84b3,	// (0x00077c26) mce_image_pane_g2

0x84bd,	// (0x00077c30) mce_image_pane_g3

0x84c5,	// (0x00077c38) mce_image_pane_g4

0x84cd,	// (0x00077c40) mce_image_pane_g5

0x0004,

0xf399,	// (0x0007eb0c) mce_image_pane_g

0x17d3,	// (0x00070f46) control_top_pane_stacon_cp01_ParamLimits

0x17d3,	// (0x00070f46) control_top_pane_stacon_cp01

0x17e7,	// (0x00070f5a) uni_indicator_pane_stacon_cp01_ParamLimits

0x17e7,	// (0x00070f5a) uni_indicator_pane_stacon_cp01

0x17f8,	// (0x00070f6b) bg_popup_sub_pane_cp03

0x1802,	// (0x00070f75) chi_dic_find_pane

0x84d5,	// (0x00077c48) listscroll_chi_dic_pane

0x180a,	// (0x00070f7d) main_pane_chidic_g1

0x1812,	// (0x00070f85) chi_dic_find_pane_t1

0x1820,	// (0x00070f93) find_chidic_pane

0x1829,	// (0x00070f9c) chi_dic_list_pane_ParamLimits

0x1829,	// (0x00070f9c) chi_dic_list_pane

0x183a,	// (0x00070fad) scroll_pane_cp020

0x1842,	// (0x00070fb5) find_chidic_pane_t1

0xefa4,	// (0x0007e717) input_focus_pane_cp06

0x84e9,	// (0x00077c5c) list_chi_dic_pane_ParamLimits

0x84e9,	// (0x00077c5c) list_chi_dic_pane

0x8503,	// (0x00077c76) list_chi_dic_pane_t1_ParamLimits

0x8503,	// (0x00077c76) list_chi_dic_pane_t1

0xefa4,	// (0x0007e717) list_highlight_pane_cp020

0x1851,	// (0x00070fc4) bg_cale_heading_pane_g1

0x8516,	// (0x00077c89) bg_cale_heading_pane_g2

0x851e,	// (0x00077c91) bg_cale_heading_pane_g3

0x8526,	// (0x00077c99) bg_cale_heading_pane_g4

0x8530,	// (0x00077ca3) bg_cale_heading_pane_g5

0x853a,	// (0x00077cad) bg_cale_heading_pane_g6

0x8542,	// (0x00077cb5) bg_cale_heading_pane_g7

0x854a,	// (0x00077cbd) bg_cale_heading_pane_g8

0x8554,	// (0x00077cc7) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0007eb17) bg_cale_heading_pane_g

0x1851,	// (0x00070fc4) bg_cale_side_pane_g1

0x855e,	// (0x00077cd1) bg_cale_side_pane_g2

0x8568,	// (0x00077cdb) bg_cale_side_pane_g3

0x8572,	// (0x00077ce5) bg_cale_side_pane_g4

0x857c,	// (0x00077cef) bg_cale_side_pane_g5

0x8586,	// (0x00077cf9) bg_cale_side_pane_g6

0x8590,	// (0x00077d03) bg_cale_side_pane_g7

0x859a,	// (0x00077d0d) bg_cale_side_pane_g8

0x85a2,	// (0x00077d15) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0007eb2a) bg_cale_side_pane_g

0x85aa,	// (0x00077d1d) popup_call_status_window_ParamLimits

0x85aa,	// (0x00077d1d) popup_call_status_window

0x1859,	// (0x00070fcc) stacon_top_pane

0x1861,	// (0x00070fd4) status_pane_ParamLimits

0x1861,	// (0x00070fd4) status_pane

0x1876,	// (0x00070fe9) status_small_pane

0x187e,	// (0x00070ff1) control_pane

0xefa4,	// (0x0007e717) stacon_bottom_pane

0x1886,	// (0x00070ff9) list_single_mce_smart_pane_t1_ParamLimits

0x1886,	// (0x00070ff9) list_single_mce_smart_pane_t1

0x1899,	// (0x0007100c) list_single_mce_smart_pane_t2_ParamLimits

0x1899,	// (0x0007100c) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0007eb3d) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0007eb3d) list_single_mce_smart_pane_t

0x85b6,	// (0x00077d29) compass_pane

0x85c2,	// (0x00077d35) main_location2_pane_t1

0x85d6,	// (0x00077d49) main_location2_pane_t2

0x85ea,	// (0x00077d5d) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0007eb42) main_location2_pane_t

0x18b8,	// (0x0007102b) compass_pane_g1_ParamLimits

0x18b8,	// (0x0007102b) compass_pane_g1

0x8634,	// (0x00077da7) compass_pane_t1

0x8643,	// (0x00077db6) compass_pane_t2

0x0005,

0xf3d8,	// (0x0007eb4b) compass_pane_t

0x868e,	// (0x00077e01) text_secondary_cp61

0x1942,	// (0x000710b5) navi_pane_cams_g5

0x19be,	// (0x00071131) navi_pane_im_t1

0x19cc,	// (0x0007113f) navi_pane_mp_g1_ParamLimits

0x19cc,	// (0x0007113f) navi_pane_mp_g1

0x19e0,	// (0x00071153) navi_pane_mp_g2_ParamLimits

0x19e0,	// (0x00071153) navi_pane_mp_g2

0x19ec,	// (0x0007115f) navi_pane_mp_g3_ParamLimits

0x19ec,	// (0x0007115f) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0007eb5f) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0007eb5f) navi_pane_mp_g

0x19f8,	// (0x0007116b) navi_pane_mp_t1

0x1a06,	// (0x00071179) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0007eb66) navi_pane_mp_t

0x1a71,	// (0x000711e4) navi_pane_vt_g1

0x19f8,	// (0x0007116b) navi_pane_vt_t1

0x1a79,	// (0x000711ec) navi_slider_pane

0x1021,	// (0x00070794) zooming_pane

0x1a89,	// (0x000711fc) navi_slider_pane_g1

0x86c9,	// (0x00077e3c) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0007eb6d) navi_slider_pane_g

0x1aad,	// (0x00071220) aid_levels_zoom

0x1ab5,	// (0x00071228) zooming_pane_g1

0x1abd,	// (0x00071230) zooming_pane_g2

0x1abd,	// (0x00071230) zooming_pane_g3

0x0002,

0xf409,	// (0x0007eb7c) zooming_pane_g

0x1ac5,	// (0x00071238) level_10_zoom

0x1ace,	// (0x00071241) level_11_zoom

0x1ad7,	// (0x0007124a) level_1_zoom

0x1ae0,	// (0x00071253) level_2_zoom

0x1ae9,	// (0x0007125c) level_3_zoom

0x1af2,	// (0x00071265) level_4_zoom

0x1afb,	// (0x0007126e) level_5_zoom

0x1b04,	// (0x00071277) level_6_zoom

0x1b0d,	// (0x00071280) level_7_zoom

0x1b16,	// (0x00071289) level_8_zoom

0x1b1f,	// (0x00071292) level_9_zoom

0x1b30,	// (0x000712a3) popup_phob_thumbnail_window_g1

0x1b38,	// (0x000712ab) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0007eb83) popup_phob_thumbnail_window_g

0x2e6a,	// (0x000725dd) level_1_location

0x2e72,	// (0x000725e5) level_2_location

0x2e7a,	// (0x000725ed) level_3_location

0x2e82,	// (0x000725f5) level_4_location

0x1021,	// (0x00070794) level_5_location

0x86db,	// (0x00077e4e) mce_icon_pane_g1

0x86e3,	// (0x00077e56) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0007eb88) mce_icon_pane_g

0x86eb,	// (0x00077e5e) main_mup_pane_g1_ParamLimits

0x86eb,	// (0x00077e5e) main_mup_pane_g1

0x8703,	// (0x00077e76) main_mup_pane_g2_ParamLimits

0x8703,	// (0x00077e76) main_mup_pane_g2

0x871f,	// (0x00077e92) main_mup_pane_g3_ParamLimits

0x871f,	// (0x00077e92) main_mup_pane_g3

0x873b,	// (0x00077eae) main_mup_pane_g4_ParamLimits

0x873b,	// (0x00077eae) main_mup_pane_g4

0x8757,	// (0x00077eca) main_mup_pane_g5_ParamLimits

0x8757,	// (0x00077eca) main_mup_pane_g5

0x8778,	// (0x00077eeb) main_mup_pane_g6_ParamLimits

0x8778,	// (0x00077eeb) main_mup_pane_g6

0x8794,	// (0x00077f07) main_mup_pane_g7_ParamLimits

0x8794,	// (0x00077f07) main_mup_pane_g7

0x87b0,	// (0x00077f23) main_mup_pane_g8_ParamLimits

0x87b0,	// (0x00077f23) main_mup_pane_g8

0x87d0,	// (0x00077f43) main_mup_pane_g9_ParamLimits

0x87d0,	// (0x00077f43) main_mup_pane_g9

0x87ef,	// (0x00077f62) main_mup_pane_g10_ParamLimits

0x87ef,	// (0x00077f62) main_mup_pane_g10

0x880e,	// (0x00077f81) main_mup_pane_g11_ParamLimits

0x880e,	// (0x00077f81) main_mup_pane_g11

0x8826,	// (0x00077f99) main_mup_pane_g12_ParamLimits

0x8826,	// (0x00077f99) main_mup_pane_g12

0x8834,	// (0x00077fa7) main_mup_pane_g13_ParamLimits

0x8834,	// (0x00077fa7) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0007eb8d) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0007eb8d) main_mup_pane_g

0x884a,	// (0x00077fbd) main_mup_pane_t1_ParamLimits

0x884a,	// (0x00077fbd) main_mup_pane_t1

0x8867,	// (0x00077fda) main_mup_pane_t2_ParamLimits

0x8867,	// (0x00077fda) main_mup_pane_t2

0x8881,	// (0x00077ff4) main_mup_pane_t3_ParamLimits

0x8881,	// (0x00077ff4) main_mup_pane_t3

0x889b,	// (0x0007800e) main_mup_pane_t4_ParamLimits

0x889b,	// (0x0007800e) main_mup_pane_t4

0x88ad,	// (0x00078020) main_mup_pane_t5_ParamLimits

0x88ad,	// (0x00078020) main_mup_pane_t5

0x88bf,	// (0x00078032) main_mup_pane_t6_ParamLimits

0x88bf,	// (0x00078032) main_mup_pane_t6

0x0005,

0xf435,	// (0x0007eba8) main_mup_pane_t_ParamLimits

0xf435,	// (0x0007eba8) main_mup_pane_t

0x88d5,	// (0x00078048) mup_progress_pane_ParamLimits

0x88d5,	// (0x00078048) mup_progress_pane

0x88e1,	// (0x00078054) mup_visualizer_pane_ParamLimits

0x88e1,	// (0x00078054) mup_visualizer_pane

0x891b,	// (0x0007808e) mup_volume_pane_ParamLimits

0x891b,	// (0x0007808e) mup_volume_pane

0x1916,	// (0x00071089) mup_visualizer_pane_g1_ParamLimits

0x1916,	// (0x00071089) mup_visualizer_pane_g1

0x1916,	// (0x00071089) mup_visualizer_pane_g2_ParamLimits

0x1916,	// (0x00071089) mup_visualizer_pane_g2

0x18b8,	// (0x0007102b) mup_visualizer_pane_g3_ParamLimits

0x18b8,	// (0x0007102b) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0007ebb5) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0007ebb5) mup_visualizer_pane_g

0x0eb1,	// (0x00070624) mup_volume_pane_g1

0x1b48,	// (0x000712bb) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0007ebbc) mup_volume_pane_g

0x0eb1,	// (0x00070624) mup_progress_pane_g1

0x1b51,	// (0x000712c4) mup_progress_pane_g2

0x1b5a,	// (0x000712cd) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0007ebc1) mup_progress_pane_g

0xefa4,	// (0x0007e717) bg_popup_window_pane_cp05

0x1b63,	// (0x000712d6) heading_pane_cp02_ParamLimits

0x1b63,	// (0x000712d6) heading_pane_cp02

0x1b7d,	// (0x000712f0) list_popup_blid_pane

0x1b85,	// (0x000712f8) list_blid_sat_info_pane_ParamLimits

0x1b85,	// (0x000712f8) list_blid_sat_info_pane

0x1b98,	// (0x0007130b) list_blid_sat_info_pane_g1

0x1ba0,	// (0x00071313) list_blid_sat_info_pane_t1

0x8a28,	// (0x0007819b) mup_equalizer_pane_ParamLimits

0x8a28,	// (0x0007819b) mup_equalizer_pane

0x8a49,	// (0x000781bc) mup_equalizer_pane_cp1_ParamLimits

0x8a49,	// (0x000781bc) mup_equalizer_pane_cp1

0x8a6a,	// (0x000781dd) mup_equalizer_pane_cp2_ParamLimits

0x8a6a,	// (0x000781dd) mup_equalizer_pane_cp2

0x8a8b,	// (0x000781fe) mup_equalizer_pane_cp3_ParamLimits

0x8a8b,	// (0x000781fe) mup_equalizer_pane_cp3

0x8aac,	// (0x0007821f) mup_equalizer_pane_cp4_ParamLimits

0x8aac,	// (0x0007821f) mup_equalizer_pane_cp4

0x8acd,	// (0x00078240) mup_equalizer_pane_cp5

0x8ae3,	// (0x00078256) mup_equalizer_pane_cp6

0x8afb,	// (0x0007826e) mup_equalizer_pane_cp7

0x2d88,	// (0x000724fb) bg_popup_call_poc_act_pane_g9

0x2d90,	// (0x00072503) bg_popup_call_poc_act_pane_g10

0x2d98,	// (0x0007250b) bg_popup_call_poc_act_pane_g11

0x000a,

0x0d97,	// (0x0007050a) mup_scale_pane

0x0eb1,	// (0x00070624) mup_scale_pane_g1

0x1bae,	// (0x00071321) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0007ebdd) mup_scale_pane_g

0x1bd2,	// (0x00071345) msg_data_pane

0x1bda,	// (0x0007134d) scroll_pane_cp017

0x50ea,	// (0x0007485d) bg_list_pane_cp04_ParamLimits

0x50ea,	// (0x0007485d) bg_list_pane_cp04

0x1be2,	// (0x00071355) msg_data_pane_g1

0x8b25,	// (0x00078298) msg_data_pane_g2

0x8b2f,	// (0x000782a2) msg_data_pane_g3

0x8b37,	// (0x000782aa) msg_data_pane_g4

0x8b3f,	// (0x000782b2) msg_data_pane_g5

0x8b47,	// (0x000782ba) msg_data_pane_g6

0x8b4f,	// (0x000782c2) msg_data_pane_g7

0x0006,

0xf479,	// (0x0007ebec) msg_data_pane_g

0x5110,	// (0x00074883) msg_text_pane_ParamLimits

0x5110,	// (0x00074883) msg_text_pane

0x8b57,	// (0x000782ca) qrid_highlight_pane_cp011_ParamLimits

0x8b57,	// (0x000782ca) qrid_highlight_pane_cp011

0xefa4,	// (0x0007e717) msg_body_pane

0xefa4,	// (0x0007e717) msg_header_pane

0x1bf3,	// (0x00071366) input_focus_pane_cp07

0x5163,	// (0x000748d6) msg_header_pane_t1_ParamLimits

0x5163,	// (0x000748d6) msg_header_pane_t1

0x5175,	// (0x000748e8) msg_header_pane_t2_ParamLimits

0x5175,	// (0x000748e8) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0007ec00) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0007ec00) msg_header_pane_t

0x1c08,	// (0x0007137b) msg_body_pane_g1

0x5187,	// (0x000748fa) msg_body_pane_t1_ParamLimits

0x5187,	// (0x000748fa) msg_body_pane_t1

0x51b8,	// (0x0007492b) msg_body_pane_t2_ParamLimits

0x51b8,	// (0x0007492b) msg_body_pane_t2

0x51ca,	// (0x0007493d) msg_body_pane_t3_ParamLimits

0x51ca,	// (0x0007493d) msg_body_pane_t3

0x0002,

0xf492,	// (0x0007ec05) msg_body_pane_t_ParamLimits

0xf492,	// (0x0007ec05) msg_body_pane_t

0x8bc3,	// (0x00078336) main_viewer_pane_g1_ParamLimits

0x8bc3,	// (0x00078336) main_viewer_pane_g1

0x8bcf,	// (0x00078342) main_viewer_pane_g2_ParamLimits

0x8bcf,	// (0x00078342) main_viewer_pane_g2

0x8bdb,	// (0x0007834e) main_viewer_pane_g3_ParamLimits

0x8bdb,	// (0x0007834e) main_viewer_pane_g3

0x8bec,	// (0x0007835f) main_viewer_pane_g4_ParamLimits

0x8bec,	// (0x0007835f) main_viewer_pane_g4

0x8bfd,	// (0x00078370) main_viewer_pane_g5_ParamLimits

0x8bfd,	// (0x00078370) main_viewer_pane_g5

0x8bfd,	// (0x00078370) main_viewer_pane_g7_ParamLimits

0x8bfd,	// (0x00078370) main_viewer_pane_g7

0x8c0f,	// (0x00078382) main_viewer_pane_g8_ParamLimits

0x8c0f,	// (0x00078382) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0007ec15) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0007ec15) main_viewer_pane_g

0x1c10,	// (0x00071383) viewer_content_pane_ParamLimits

0x1c10,	// (0x00071383) viewer_content_pane

0x8c47,	// (0x000783ba) main_postcard_pane_g1_ParamLimits

0x8c47,	// (0x000783ba) main_postcard_pane_g1

0x8c55,	// (0x000783c8) main_postcard_pane_g2_ParamLimits

0x8c55,	// (0x000783c8) main_postcard_pane_g2

0x8c63,	// (0x000783d6) main_postcard_pane_g3_ParamLimits

0x8c63,	// (0x000783d6) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0007ec26) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0007ec26) main_postcard_pane_g

0x8c73,	// (0x000783e6) main_postcard_pane_g4

0x2f65,	// (0x000726d8) smil_status_volume_pane_g2

0x8c9f,	// (0x00078412) postcard_pane_ParamLimits

0x8c9f,	// (0x00078412) postcard_pane

0x1916,	// (0x00071089) postcard_pane_g1_ParamLimits

0x1916,	// (0x00071089) postcard_pane_g1

0x8cd1,	// (0x00078444) postcard_pane_g2_ParamLimits

0x8cd1,	// (0x00078444) postcard_pane_g2

0x8cdd,	// (0x00078450) postcard_pane_g3_ParamLimits

0x8cdd,	// (0x00078450) postcard_pane_g3

0x1c2c,	// (0x0007139f) postcard_pane_g4_ParamLimits

0x1c2c,	// (0x0007139f) postcard_pane_g4

0x8ce9,	// (0x0007845c) postcard_pane_g5_ParamLimits

0x8ce9,	// (0x0007845c) postcard_pane_g5

0x8cf5,	// (0x00078468) postcard_pane_g6_ParamLimits

0x8cf5,	// (0x00078468) postcard_pane_g6

0x1c1e,	// (0x00071391) postcard_pane_g7_ParamLimits

0x1c1e,	// (0x00071391) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0007ec33) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0007ec33) postcard_pane_g

0x8d01,	// (0x00078474) main_mp2_pane_g1_ParamLimits

0x8d01,	// (0x00078474) main_mp2_pane_g1

0x8d0d,	// (0x00078480) main_mp2_pane_g2_ParamLimits

0x8d0d,	// (0x00078480) main_mp2_pane_g2

0x8d19,	// (0x0007848c) main_mp2_pane_g3_ParamLimits

0x8d19,	// (0x0007848c) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0007ec42) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0007ec42) main_mp2_pane_g

0x8d25,	// (0x00078498) main_mp2_pane_t1_ParamLimits

0x8d25,	// (0x00078498) main_mp2_pane_t1

0x8d3c,	// (0x000784af) main_mp2_pane_t2_ParamLimits

0x8d3c,	// (0x000784af) main_mp2_pane_t2

0x8d50,	// (0x000784c3) main_mp2_pane_t3_ParamLimits

0x8d50,	// (0x000784c3) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0007ec49) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0007ec49) main_mp2_pane_t

0x1c3a,	// (0x000713ad) pec_content_pane_ParamLimits

0x1c3a,	// (0x000713ad) pec_content_pane

0x11ca,	// (0x0007093d) scroll_pane_cp015

0x1c4c,	// (0x000713bf) pec_attribute_pane_ParamLimits

0x1c4c,	// (0x000713bf) pec_attribute_pane

0x8d62,	// (0x000784d5) pec_content_pane_g1_ParamLimits

0x8d62,	// (0x000784d5) pec_content_pane_g1

0x1c5c,	// (0x000713cf) pec_content_pane_t1_ParamLimits

0x1c5c,	// (0x000713cf) pec_content_pane_t1

0x1c6e,	// (0x000713e1) pec_content_pane_t2_ParamLimits

0x1c6e,	// (0x000713e1) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0007ec50) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0007ec50) pec_content_pane_t

0x8d6e,	// (0x000784e1) list_single_graphic_pane_cp01_ParamLimits

0x8d6e,	// (0x000784e1) list_single_graphic_pane_cp01

0x0d97,	// (0x0007050a) bg_popup_sub_pane_cp04

0x1c80,	// (0x000713f3) popup_mup_playback_window_g1

0x1c8c,	// (0x000713ff) popup_mup_playback_window_t1

0x1ca1,	// (0x00071414) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0007ec55) popup_mup_playback_window_t

0x1cd8,	// (0x0007144b) main_image_pane_g1_ParamLimits

0x1cd8,	// (0x0007144b) main_image_pane_g1

0x1d1b,	// (0x0007148e) scroll_pane_cp018_ParamLimits

0x1d1b,	// (0x0007148e) scroll_pane_cp018

0x1d33,	// (0x000714a6) scroll_pane_cp016_ParamLimits

0x1d33,	// (0x000714a6) scroll_pane_cp016

0x8e07,	// (0x0007857a) smil2_image_pane_ParamLimits

0x8e07,	// (0x0007857a) smil2_image_pane

0x8e37,	// (0x000785aa) smil2_root_pane_ParamLimits

0x8e37,	// (0x000785aa) smil2_root_pane

0x8e63,	// (0x000785d6) smil2_text_pane_ParamLimits

0x8e63,	// (0x000785d6) smil2_text_pane

0xefa4,	// (0x0007e717) bg_list_pane_cp06

0x1d6f,	// (0x000714e2) grid_radio_pane

0xefa4,	// (0x0007e717) bg_popup_window_pane_cp06

0x1d77,	// (0x000714ea) main_fmradio_pane_t1

0x1707,	// (0x00070e7a) heading_pane_cp04

0x1d85,	// (0x000714f8) main_fmradio_pane_t2

0x2da0,	// (0x00072513) popup_cale_lunar_info_window_g1

0x1d93,	// (0x00071506) main_fmradio_pane_t3

0x2da8,	// (0x0007251b) popup_cale_lunar_info_window_g2

0x1da1,	// (0x00071514) main_fmradio_pane_t4

0x0001,

0x1daf,	// (0x00071522) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0007ed30) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0007ec6a) main_fmradio_pane_t

0x1dbd,	// (0x00071530) wait_bar_pane_cp03

0x1dc5,	// (0x00071538) cell_fmradio_pane_ParamLimits

0x1dc5,	// (0x00071538) cell_fmradio_pane

0x1c1e,	// (0x00071391) cell_fmradio_pane_g1_ParamLimits

0x1c1e,	// (0x00071391) cell_fmradio_pane_g1

0xefa4,	// (0x0007e717) grid_highlight_pane_cp011

0x1dd8,	// (0x0007154b) poc_content_pane_ParamLimits

0x1dd8,	// (0x0007154b) poc_content_pane

0x1dea,	// (0x0007155d) scroll_pane_cp019

0x8ea3,	// (0x00078616) popup_call_poc_act_window_ParamLimits

0x8ea3,	// (0x00078616) popup_call_poc_act_window

0x8eb0,	// (0x00078623) popup_call_poc_inact_window_ParamLimits

0x8eb0,	// (0x00078623) popup_call_poc_inact_window

0xf594,	// (0x0007ed07) bg_popup_call_poc_act_pane_g

0x2d18,	// (0x0007248b) bg_popup_call_poc_inact_pane_g1

0x2d20,	// (0x00072493) bg_popup_call_poc_inact_pane_g2

0x1df2,	// (0x00071565) popup_call_poc_act_window_g2

0x2d28,	// (0x0007249b) bg_popup_call_poc_inact_pane_g3

0x2d30,	// (0x000724a3) bg_popup_call_poc_inact_pane_g4

0x2d38,	// (0x000724ab) bg_popup_call_poc_inact_pane_g5

0x1dfa,	// (0x0007156d) popup_call_poc_act_window_t1_ParamLimits

0x1dfa,	// (0x0007156d) popup_call_poc_act_window_t1

0x1e22,	// (0x00071595) popup_call_poc_act_window_t2_ParamLimits

0x1e22,	// (0x00071595) popup_call_poc_act_window_t2

0x1e4a,	// (0x000715bd) popup_call_poc_act_window_t3_ParamLimits

0x1e4a,	// (0x000715bd) popup_call_poc_act_window_t3

0x1e72,	// (0x000715e5) popup_call_poc_act_window_t4_ParamLimits

0x1e72,	// (0x000715e5) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0007ec75) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0007ec75) popup_call_poc_act_window_t

0x2d40,	// (0x000724b3) bg_popup_call_poc_inact_pane_g6

0x2d48,	// (0x000724bb) bg_popup_call_poc_inact_pane_g7

0x2d50,	// (0x000724c3) bg_popup_call_poc_inact_pane_g8

0x1e84,	// (0x000715f7) popup_call_poc_inact_window_g2

0x2d58,	// (0x000724cb) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0007ecf4) bg_popup_call_poc_inact_pane_g

0x1e8c,	// (0x000715ff) popup_call_poc_inact_window_t1_ParamLimits

0x1e8c,	// (0x000715ff) popup_call_poc_inact_window_t1

0x1ea1,	// (0x00071614) popup_call_poc_inact_window_t2_ParamLimits

0x1ea1,	// (0x00071614) popup_call_poc_inact_window_t2

0x1eb6,	// (0x00071629) popup_call_poc_inact_window_t3_ParamLimits

0x1eb6,	// (0x00071629) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0007ec7e) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0007ec7e) popup_call_poc_inact_window_t

0x2eeb,	// (0x0007265e) context_pane_ParamLimits

0x94e4,	// (0x00078c57) signal_pane_ParamLimits

0x1021,	// (0x00070794) main_call2_pane

0x9457,	// (0x00078bca) popup_phob_thumbnail2_window_ParamLimits

0x9457,	// (0x00078bca) popup_phob_thumbnail2_window

0x8b71,	// (0x000782e4) aid_hotspot_pointer_arrow_pane

0x8b79,	// (0x000782ec) aid_hotspot_pointer_hand_pane

0x91d2,	// (0x00078945) phob_pre_status_pane_g5

0x6ed3,	// (0x00076646) cams_zoom_pane_ParamLimits

0x6edf,	// (0x00076652) image_vga_pane_ParamLimits

0x6eee,	// (0x00076661) main_camera_pane_g1_ParamLimits

0x6efc,	// (0x0007666f) main_camera_pane_g2_ParamLimits

0x6f08,	// (0x0007667b) main_camera_pane_g3_ParamLimits

0x6f14,	// (0x00076687) main_camera_pane_g4_ParamLimits

0x6f20,	// (0x00076693) main_camera_pane_g5_ParamLimits

0x6f2c,	// (0x0007669f) main_camera_pane_g6_ParamLimits

0x6f38,	// (0x000766ab) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0007e97d) main_camera_pane_g_ParamLimits

0x6f44,	// (0x000766b7) main_camera_pane_t1_ParamLimits

0x6f56,	// (0x000766c9) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0007e98e) main_camera_pane_t_ParamLimits

0x0d97,	// (0x0007050a) bg_popup_preview_window_pane_cp01_ParamLimits

0x0d97,	// (0x0007050a) bg_popup_preview_window_pane_cp01

0x1ecb,	// (0x0007163e) popup_phob_thumbnail2_window_g1_ParamLimits

0x1ecb,	// (0x0007163e) popup_phob_thumbnail2_window_g1

0xefa4,	// (0x0007e717) call2_cli_visual_pane

0x8ecc,	// (0x0007863f) popup_call2_audio_conf_window_ParamLimits

0x8ecc,	// (0x0007863f) popup_call2_audio_conf_window

0x8ee1,	// (0x00078654) popup_call2_audio_first_window_ParamLimits

0x8ee1,	// (0x00078654) popup_call2_audio_first_window

0x8f7f,	// (0x000786f2) popup_call2_audio_in_window_ParamLimits

0x8f7f,	// (0x000786f2) popup_call2_audio_in_window

0x8fc1,	// (0x00078734) popup_call2_audio_out_window_ParamLimits

0x8fc1,	// (0x00078734) popup_call2_audio_out_window

0x9023,	// (0x00078796) popup_call2_audio_second_window_ParamLimits

0x9023,	// (0x00078796) popup_call2_audio_second_window

0x9081,	// (0x000787f4) popup_call2_audio_wait_window_ParamLimits

0x9081,	// (0x000787f4) popup_call2_audio_wait_window

0xefa4,	// (0x0007e717) bg_popup_call2_act_pane_cp03

0x0d79,	// (0x000704ec) list_conf_pane_cp

0x1ed7,	// (0x0007164a) popup_call2_audio_conf_window_t1

0x1764,	// (0x00070ed7) list_single_graphic_popup_conf2_pane_ParamLimits

0x1764,	// (0x00070ed7) list_single_graphic_popup_conf2_pane

0x1777,	// (0x00070eea) list_highlight_pane_cp04

0x1ee5,	// (0x00071658) list_single_graphic_popup_conf2_pane_g1

0x1788,	// (0x00070efb) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0007ec85) list_single_graphic_popup_conf2_pane_g

0x1eef,	// (0x00071662) list_single_graphic_popup_conf2_pane_t1

0x1efd,	// (0x00071670) bg_popup_call2_act_pane_cp01_ParamLimits

0x1efd,	// (0x00071670) bg_popup_call2_act_pane_cp01

0x1f87,	// (0x000716fa) call_type_pane_cp05_ParamLimits

0x1f87,	// (0x000716fa) call_type_pane_cp05

0x1fdb,	// (0x0007174e) popup_call2_audio_second_window_g1_ParamLimits

0x1fdb,	// (0x0007174e) popup_call2_audio_second_window_g1

0x202f,	// (0x000717a2) popup_call2_audio_second_window_g2_ParamLimits

0x202f,	// (0x000717a2) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0007ec8a) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0007ec8a) popup_call2_audio_second_window_g

0x2094,	// (0x00071807) popup_call2_audio_second_window_t1_ParamLimits

0x2094,	// (0x00071807) popup_call2_audio_second_window_t1

0x214f,	// (0x000718c2) popup_call2_audio_second_window_t2_ParamLimits

0x214f,	// (0x000718c2) popup_call2_audio_second_window_t2

0x21a2,	// (0x00071915) popup_call2_audio_second_window_t3_ParamLimits

0x21a2,	// (0x00071915) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0007ec91) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0007ec91) popup_call2_audio_second_window_t

0xefa4,	// (0x0007e717) bg_popup_call2_in_pane_cp02

0xefae,	// (0x0007e721) call_type_pane_cp04

0xefb6,	// (0x0007e729) popup_call2_audio_wait_window_g1

0xefbe,	// (0x0007e731) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0007e86c) popup_call2_audio_wait_window_g

0xefc6,	// (0x0007e739) popup_call2_audio_wait_window_t3

0x2295,	// (0x00071a08) bg_popup_call2_act_pane_ParamLimits

0x2295,	// (0x00071a08) bg_popup_call2_act_pane

0x2355,	// (0x00071ac8) call_type_pane_cp03_ParamLimits

0x2355,	// (0x00071ac8) call_type_pane_cp03

0x23b9,	// (0x00071b2c) popup_call2_audio_first_window_g1_ParamLimits

0x23b9,	// (0x00071b2c) popup_call2_audio_first_window_g1

0x2429,	// (0x00071b9c) popup_call2_audio_first_window_g2_ParamLimits

0x2429,	// (0x00071b9c) popup_call2_audio_first_window_g2

0x1916,	// (0x00071089) popup_call2_audio_first_window_g3_ParamLimits

0x1916,	// (0x00071089) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0007ec9a) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0007ec9a) popup_call2_audio_first_window_g

0x2507,	// (0x00071c7a) popup_call2_audio_first_window_t1_ParamLimits

0x2507,	// (0x00071c7a) popup_call2_audio_first_window_t1

0x2660,	// (0x00071dd3) popup_call2_audio_first_window_t4_ParamLimits

0x2660,	// (0x00071dd3) popup_call2_audio_first_window_t4

0x2743,	// (0x00071eb6) popup_call2_audio_first_window_t5_ParamLimits

0x2743,	// (0x00071eb6) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0007eca5) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0007eca5) popup_call2_audio_first_window_t

0x0d8f,	// (0x00070502) bg_popup_call2_act_pane_g1

0x2db0,	// (0x00072523) popup_cale_lunar_info_window_t1

0x2dbe,	// (0x00072531) popup_cale_lunar_info_window_t2

0x2dcc,	// (0x0007253f) popup_cale_lunar_info_window_t3

0xefa4,	// (0x0007e717) bg_popup_call2_bubble_pane

0x2844,	// (0x00071fb7) bg_popup_call2_in_pane_cp01_ParamLimits

0x2844,	// (0x00071fb7) bg_popup_call2_in_pane_cp01

0xec80,	// (0x0007e3f3) call_type_pane_cp02

0x288c,	// (0x00071fff) popup_call2_audio_out_window_g1_ParamLimits

0x288c,	// (0x00071fff) popup_call2_audio_out_window_g1

0x28b8,	// (0x0007202b) popup_call2_audio_out_window_g2_ParamLimits

0x28b8,	// (0x0007202b) popup_call2_audio_out_window_g2

0x28e0,	// (0x00072053) popup_call2_audio_out_window_g3_ParamLimits

0x28e0,	// (0x00072053) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0007ecae) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0007ecae) popup_call2_audio_out_window_g

0x291b,	// (0x0007208e) popup_call2_audio_out_window_t1_ParamLimits

0x291b,	// (0x0007208e) popup_call2_audio_out_window_t1

0x297a,	// (0x000720ed) popup_call2_audio_out_window_t2_ParamLimits

0x297a,	// (0x000720ed) popup_call2_audio_out_window_t2

0x29ce,	// (0x00072141) popup_call2_audio_out_window_t3_ParamLimits

0x29ce,	// (0x00072141) popup_call2_audio_out_window_t3

0x29e4,	// (0x00072157) popup_call2_audio_out_window_t4_ParamLimits

0x29e4,	// (0x00072157) popup_call2_audio_out_window_t4

0x29fa,	// (0x0007216d) popup_call2_audio_out_window_t5_ParamLimits

0x29fa,	// (0x0007216d) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0007ecb7) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0007ecb7) popup_call2_audio_out_window_t

0x2a5e,	// (0x000721d1) bg_popup_call2_in_pane_ParamLimits

0x2a5e,	// (0x000721d1) bg_popup_call2_in_pane

0x2aba,	// (0x0007222d) popup_call2_audio_in_window_g1_ParamLimits

0x2aba,	// (0x0007222d) popup_call2_audio_in_window_g1

0x2af2,	// (0x00072265) popup_call2_audio_in_window_g2_ParamLimits

0x2af2,	// (0x00072265) popup_call2_audio_in_window_g2

0x2b2a,	// (0x0007229d) popup_call2_audio_in_window_g3_ParamLimits

0x2b2a,	// (0x0007229d) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0007ecc4) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0007ecc4) popup_call2_audio_in_window_g

0x2b82,	// (0x000722f5) popup_call2_audio_in_window_t1_ParamLimits

0x2b82,	// (0x000722f5) popup_call2_audio_in_window_t1

0x2c02,	// (0x00072375) popup_call2_audio_in_window_t2_ParamLimits

0x2c02,	// (0x00072375) popup_call2_audio_in_window_t2

0x2c82,	// (0x000723f5) popup_call2_audio_in_window_t3_ParamLimits

0x2c82,	// (0x000723f5) popup_call2_audio_in_window_t3

0x2c9c,	// (0x0007240f) popup_call2_audio_in_window_t4_ParamLimits

0x2c9c,	// (0x0007240f) popup_call2_audio_in_window_t4

0x2cae,	// (0x00072421) popup_call2_audio_in_window_t5_ParamLimits

0x2cae,	// (0x00072421) popup_call2_audio_in_window_t5

0x2cc3,	// (0x00072436) popup_call2_audio_in_window_t6_ParamLimits

0x2cc3,	// (0x00072436) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0007eccd) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0007eccd) popup_call2_audio_in_window_t

0x0d8f,	// (0x00070502) bg_popup_call2_in_pane_g1

0x2dda,	// (0x0007254d) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0007ed35) popup_cale_lunar_info_window_t

0x0d97,	// (0x0007050a) bg_popup_call2_rect_pane_ParamLimits

0x0d97,	// (0x0007050a) bg_popup_call2_rect_pane

0xefa4,	// (0x0007e717) call2_cli_visual_graphic_pane

0xefa4,	// (0x0007e717) call2_cli_visual_text_pane

0x958a,	// (0x00078cfd) smil_status_volume_pane_g3

0x0002,

0x0eb1,	// (0x00070624) call2_cli_visual_graphic_pane_g1

0x0eb1,	// (0x00070624) call2_cli_visual_graphic_pane_g2

0x0eb1,	// (0x00070624) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0007ecda) call2_cli_visual_graphic_pane_g

0x2cd8,	// (0x0007244b) bg_popup_call2_rect_pane_g1

0x0f3d,	// (0x000706b0) bg_popup_call2_rect_pane_g2

0x2ce0,	// (0x00072453) bg_popup_call2_rect_pane_g3

0x2ce8,	// (0x0007245b) bg_popup_call2_rect_pane_g4

0x2cf0,	// (0x00072463) bg_popup_call2_rect_pane_g5

0x2cf8,	// (0x0007246b) bg_popup_call2_rect_pane_g6

0x2d00,	// (0x00072473) bg_popup_call2_rect_pane_g7

0x2d08,	// (0x0007247b) bg_popup_call2_rect_pane_g8

0x2d10,	// (0x00072483) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0007ece1) bg_popup_call2_rect_pane_g

0x2d18,	// (0x0007248b) bg_popup_call2_bubble_pane_g1

0x2d20,	// (0x00072493) bg_popup_call2_bubble_pane_g2

0x2d28,	// (0x0007249b) bg_popup_call2_bubble_pane_g3

0x2d30,	// (0x000724a3) bg_popup_call2_bubble_pane_g4

0x2d38,	// (0x000724ab) bg_popup_call2_bubble_pane_g5

0x2d40,	// (0x000724b3) bg_popup_call2_bubble_pane_g6

0x2d48,	// (0x000724bb) bg_popup_call2_bubble_pane_g7

0x2d50,	// (0x000724c3) bg_popup_call2_bubble_pane_g8

0x2d58,	// (0x000724cb) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0007ecf4) bg_popup_call2_bubble_pane_g

0x69ea,	// (0x0007615d) aid_cale_week_size_cell_pane

0x6f68,	// (0x000766db) aid_cams_cif_uncrop_pane_ParamLimits

0x6f68,	// (0x000766db) aid_cams_cif_uncrop_pane

0x70c3,	// (0x00076836) aid_cams_size_cell_ParamLimits

0x70c3,	// (0x00076836) aid_cams_size_cell

0x70cf,	// (0x00076842) grid_cams_pane_ParamLimits

0x70dd,	// (0x00076850) linegrid_cams_pane_ParamLimits

0x71cc,	// (0x0007693f) call_video_pane_t1

0x71ed,	// (0x00076960) call_video_pane_t2

0x0001,

0xf26e,	// (0x0007e9e1) call_video_pane_t

0x7734,	// (0x00076ea7) aid_cale_month_size_cell_pane_ParamLimits

0x7734,	// (0x00076ea7) aid_cale_month_size_cell_pane

0xf60b,	// (0x0007ed7e) smil_status_volume_pane_g

0x9597,	// (0x00078d0a) volume_smil_pane_ParamLimits

0x6159,	// (0x000758cc) aid_popup2_width_pane

0x68ec,	// (0x0007605f) cell_qdial_pane_g4_ParamLimits

0x68ec,	// (0x0007605f) cell_qdial_pane_g4

0x8610,	// (0x00077d83) aid_blid_cardinal_pane_ParamLimits

0x8620,	// (0x00077d93) aid_blid_destination_pane_ParamLimits

0x8620,	// (0x00077d93) aid_blid_destination_pane

0x0d97,	// (0x0007050a) bg_popup_call_poc_act_pane_ParamLimits

0x0d97,	// (0x0007050a) bg_popup_call_poc_act_pane

0x0d97,	// (0x0007050a) bg_popup_call_poc_inact_pane_ParamLimits

0x0d97,	// (0x0007050a) bg_popup_call_poc_inact_pane

0x2d60,	// (0x000724d3) bg_popup_call_poc_act_pane_g1

0x2d68,	// (0x000724db) bg_popup_call_poc_act_pane_g2

0x2d70,	// (0x000724e3) bg_popup_call_poc_act_pane_g3

0x2d30,	// (0x000724a3) bg_popup_call_poc_act_pane_g4

0x2d38,	// (0x000724ab) bg_popup_call_poc_act_pane_g5

0x2d78,	// (0x000724eb) bg_popup_call_poc_act_pane_g6

0x2d48,	// (0x000724bb) bg_popup_call_poc_act_pane_g7

0x2d80,	// (0x000724f3) bg_popup_call_poc_act_pane_g8

0xefa4,	// (0x0007e717) main_usb_pane

0x9386,	// (0x00078af9) popup_cale_lunar_info_window

0x7516,	// (0x00076c89) im_reading_pane_t1_ParamLimits

0x1122,	// (0x00070895) list_im_pane_ParamLimits

0x1133,	// (0x000708a6) scroll_pane_cp07_ParamLimits

0xefa4,	// (0x0007e717) grid_highlight_pane_cp012

0x0d97,	// (0x0007050a) mup_scale_pane_ParamLimits

0x1916,	// (0x00071089) main_usb_pane_g1_ParamLimits

0x1916,	// (0x00071089) main_usb_pane_g1

0x90f5,	// (0x00078868) main_usb_pane_g2_ParamLimits

0x90f5,	// (0x00078868) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0007ed1e) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0007ed1e) main_usb_pane_g

0x9101,	// (0x00078874) main_usb_pane_t1_ParamLimits

0x9101,	// (0x00078874) main_usb_pane_t1

0x9113,	// (0x00078886) main_usb_pane_t2_ParamLimits

0x9113,	// (0x00078886) main_usb_pane_t2

0x9125,	// (0x00078898) main_usb_pane_t3_ParamLimits

0x9125,	// (0x00078898) main_usb_pane_t3

0x9137,	// (0x000788aa) main_usb_pane_t4_ParamLimits

0x9137,	// (0x000788aa) main_usb_pane_t4

0x9149,	// (0x000788bc) main_usb_pane_t5_ParamLimits

0x9149,	// (0x000788bc) main_usb_pane_t5

0x915b,	// (0x000788ce) main_usb_pane_t6_ParamLimits

0x915b,	// (0x000788ce) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0007ed23) main_usb_pane_t_ParamLimits

0x85b6,	// (0x00077d29) aid_text_placing

0x85c2,	// (0x00077d35) main_location2_pane_t1_ParamLimits

0x85d6,	// (0x00077d49) main_location2_pane_t2_ParamLimits

0x85ea,	// (0x00077d5d) main_location2_pane_t3_ParamLimits

0x85fe,	// (0x00077d71) main_location2_pane_t4_ParamLimits

0x85fe,	// (0x00077d71) main_location2_pane_t4

0xf3cf,	// (0x0007eb42) main_location2_pane_t_ParamLimits

0x0dd3,	// (0x00070546) find_pinb_pane_g2_ParamLimits

0x0dd3,	// (0x00070546) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0007e892) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0007e892) find_pinb_pane_g

0x0ddf,	// (0x00070552) find_pinb_pane_t1_ParamLimits

0x0df1,	// (0x00070564) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0007e897) find_pinb_pane_t_ParamLimits

0xefa4,	// (0x0007e717) main_call3_pane

0x7cd7,	// (0x0007744a) cale_month_day_heading_pane_t1_ParamLimits

0x7d5d,	// (0x000774d0) cale_month_day_heading_pane_t2_ParamLimits

0x7dd6,	// (0x00077549) cale_month_day_heading_pane_t3_ParamLimits

0x7e4f,	// (0x000775c2) cale_month_day_heading_pane_t4_ParamLimits

0x7ec8,	// (0x0007763b) cale_month_day_heading_pane_t5_ParamLimits

0x7f41,	// (0x000776b4) cale_month_day_heading_pane_t6_ParamLimits

0x7fba,	// (0x0007772d) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0007ea19) cale_month_day_heading_pane_t_ParamLimits

0x137d,	// (0x00070af0) smil_status_volume_pane

0x8cb9,	// (0x0007842c) postcard_address_pane_ParamLimits

0x8cb9,	// (0x0007842c) postcard_address_pane

0x8cc5,	// (0x00078438) postcard_message_pane_ParamLimits

0x8cc5,	// (0x00078438) postcard_message_pane

0x90c0,	// (0x00078833) call2_cli_visual_pane_t1_ParamLimits

0x90c0,	// (0x00078833) call2_cli_visual_pane_t1

0x96ee,	// (0x00078e61) postcard_message_pane_t1_ParamLimits

0x96ee,	// (0x00078e61) postcard_message_pane_t1

0x96d7,	// (0x00078e4a) postcard_address_pane_t1_ParamLimits

0x96d7,	// (0x00078e4a) postcard_address_pane_t1

0x96c8,	// (0x00078e3b) popup_call3_audio_in_window_ParamLimits

0x96c8,	// (0x00078e3b) popup_call3_audio_in_window

0x95ac,	// (0x00078d1f) bg_popup_call3_in_pane_ParamLimits

0x95ac,	// (0x00078d1f) bg_popup_call3_in_pane

0x960e,	// (0x00078d81) popup_call3_audio_in_window_g1_ParamLimits

0x960e,	// (0x00078d81) popup_call3_audio_in_window_g1

0x9626,	// (0x00078d99) popup_call3_audio_in_window_g2_ParamLimits

0x9626,	// (0x00078d99) popup_call3_audio_in_window_g2

0x963e,	// (0x00078db1) popup_call3_audio_in_window_g3_ParamLimits

0x963e,	// (0x00078db1) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0007ed85) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0007ed85) popup_call3_audio_in_window_g

0x9666,	// (0x00078dd9) popup_call3_audio_in_window_t1_ParamLimits

0x9666,	// (0x00078dd9) popup_call3_audio_in_window_t1

0x968e,	// (0x00078e01) popup_call3_audio_in_window_t2_ParamLimits

0x968e,	// (0x00078e01) popup_call3_audio_in_window_t2

0x96b6,	// (0x00078e29) popup_call3_audio_in_window_t3_ParamLimits

0x96b6,	// (0x00078e29) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0007ed8e) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0007ed8e) popup_call3_audio_in_window_t

0x1021,	// (0x00070794) bg_popup_call3_rect_pane

0x2cd8,	// (0x0007244b) bg_popup_call3_rect_pane_g1

0x0f3d,	// (0x000706b0) bg_popup_call3_rect_pane_g2

0x2ce0,	// (0x00072453) bg_popup_call3_rect_pane_g3

0x2ce8,	// (0x0007245b) bg_popup_call3_rect_pane_g4

0x2cf0,	// (0x00072463) bg_popup_call3_rect_pane_g5

0x2cf8,	// (0x0007246b) bg_popup_call3_rect_pane_g6

0x2d00,	// (0x00072473) bg_popup_call3_rect_pane_g7

0x8936,	// (0x000780a9) mup_visualizer_osc_pane

0x1b40,	// (0x000712b3) mup_visualizer_spec_pane

0x95cc,	// (0x00078d3f) call3_video_qcif_pane_ParamLimits

0x95cc,	// (0x00078d3f) call3_video_qcif_pane

0x95de,	// (0x00078d51) call3_video_qcif_uncrop_pane_ParamLimits

0x95de,	// (0x00078d51) call3_video_qcif_uncrop_pane

0x95ec,	// (0x00078d5f) call3_video_subqcif_pane_ParamLimits

0x95ec,	// (0x00078d5f) call3_video_subqcif_pane

0x95fe,	// (0x00078d71) call3_video_subqcif_uncrop_pane_ParamLimits

0x95fe,	// (0x00078d71) call3_video_subqcif_uncrop_pane

0x9656,	// (0x00078dc9) popup_call3_audio_in_window_g4_ParamLimits

0x9656,	// (0x00078dc9) popup_call3_audio_in_window_g4

0x9579,	// (0x00078cec) mup_spec_half_pane

0x9582,	// (0x00078cf5) mup_spec_half_pane_cp

0x2f4b,	// (0x000726be) mup_osc_middle_pane

0x2f54,	// (0x000726c7) mup_visualizer_osc_pane_g1

0x955a,	// (0x00078ccd) mup_spec_bar_pane_ParamLimits

0x955a,	// (0x00078ccd) mup_spec_bar_pane

0x2f38,	// (0x000726ab) mup_spec_bar_pane_g1

0x2f42,	// (0x000726b5) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0007ed79) mup_spec_bar_pane_g

0x69ea,	// (0x0007615d) aid_cale_week_size_cell_pane_ParamLimits

0x69ff,	// (0x00076172) bg_cale_heading_pane_ParamLimits

0x0f7a,	// (0x000706ed) bg_cale_pane_cp01_ParamLimits

0x6a1f,	// (0x00076192) cale_week_corner_pane_ParamLimits

0x6a39,	// (0x000761ac) cale_week_day_heading_pane_ParamLimits

0x6a59,	// (0x000761cc) cale_week_scroll_pane_g1_ParamLimits

0x6a74,	// (0x000761e7) cale_week_scroll_pane_g2_ParamLimits

0x6a87,	// (0x000761fa) cale_week_scroll_pane_g3_ParamLimits

0x6a9a,	// (0x0007620d) cale_week_scroll_pane_g4_ParamLimits

0x6aad,	// (0x00076220) cale_week_scroll_pane_g5_ParamLimits

0x6ac0,	// (0x00076233) cale_week_scroll_pane_g6_ParamLimits

0x6ad3,	// (0x00076246) cale_week_scroll_pane_g7_ParamLimits

0x6ae8,	// (0x0007625b) cale_week_scroll_pane_g8_ParamLimits

0x6afd,	// (0x00076270) cale_week_scroll_pane_g9_ParamLimits

0x6b10,	// (0x00076283) cale_week_scroll_pane_g10_ParamLimits

0x6b23,	// (0x00076296) cale_week_scroll_pane_g11_ParamLimits

0x6b36,	// (0x000762a9) cale_week_scroll_pane_g12_ParamLimits

0x6b4d,	// (0x000762c0) cale_week_scroll_pane_g13_ParamLimits

0x6b68,	// (0x000762db) cale_week_scroll_pane_g14_ParamLimits

0x6b83,	// (0x000762f6) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0007e923) cale_week_scroll_pane_g_ParamLimits

0x6bb3,	// (0x00076326) cale_week_time_pane_ParamLimits

0x6bc8,	// (0x0007633b) grid_cale_week_pane_ParamLimits

0x0f97,	// (0x0007070a) listscroll_cale_week_pane_t1

0x0fa9,	// (0x0007071c) scroll_pane_cp08_ParamLimits

0x77a8,	// (0x00076f1b) cale_month_corner_pane_ParamLimits

0x1353,	// (0x00070ac6) cale_month_pane_t1

0x7c5a,	// (0x000773cd) cale_month_week_pane_ParamLimits

0x1916,	// (0x00071089) popup_call_status_window_g1_ParamLimits

0x83e9,	// (0x00077b5c) popup_call_status_window_g2_ParamLimits

0x83f5,	// (0x00077b68) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0007eac9) popup_call_status_window_g_ParamLimits

0x16ff,	// (0x00070e72) aid_call2_pane

0x5157,	// (0x000748ca) msg_header_pane_g1

0x8cb9,	// (0x0007842c) postcard_address2_pane_ParamLimits

0x8cb9,	// (0x0007842c) postcard_address2_pane

0x8cc5,	// (0x00078438) postcard_message2_pane_ParamLimits

0x8cc5,	// (0x00078438) postcard_message2_pane

0x94f2,	// (0x00078c65) message2_row_pane_ParamLimits

0x94f2,	// (0x00078c65) message2_row_pane

0x950d,	// (0x00078c80) address2_row_pane_ParamLimits

0x950d,	// (0x00078c80) address2_row_pane

0x2f06,	// (0x00072679) postcard_message2_row_pane_g1

0x2f0e,	// (0x00072681) postcard_message2_row_pane_t1

0x2f06,	// (0x00072679) address2_row_pane_g1

0x2f0e,	// (0x00072681) address2_row_pane_t1

0x6e4e,	// (0x000765c1) aid_size_cell_vorec

0xefa4,	// (0x0007e717) main_rss_pane

0x9520,	// (0x00078c93) rss_list_single_pane_ParamLimits

0x9520,	// (0x00078c93) rss_list_single_pane

0x2f1c,	// (0x0007268f) rss_list_single_pane_t1

0x2f2a,	// (0x0007269d) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0007ed74) rss_list_single_pane_t

0xefa4,	// (0x0007e717) main_camera2_pane

0xefa4,	// (0x0007e717) main_video2_pane

0x9752,	// (0x00078ec5) cams_zoom_pane_cp2_ParamLimits

0x9752,	// (0x00078ec5) cams_zoom_pane_cp2

0x975e,	// (0x00078ed1) image2_vga_pane_ParamLimits

0x975e,	// (0x00078ed1) image2_vga_pane

0x976d,	// (0x00078ee0) main_camera2_pane_g1_ParamLimits

0x976d,	// (0x00078ee0) main_camera2_pane_g1

0x9779,	// (0x00078eec) main_camera2_pane_g2_ParamLimits

0x9779,	// (0x00078eec) main_camera2_pane_g2

0x9785,	// (0x00078ef8) main_camera2_pane_g3_ParamLimits

0x9785,	// (0x00078ef8) main_camera2_pane_g3

0x9791,	// (0x00078f04) main_camera2_pane_g4_ParamLimits

0x9791,	// (0x00078f04) main_camera2_pane_g4

0x979d,	// (0x00078f10) main_camera2_pane_g5_ParamLimits

0x979d,	// (0x00078f10) main_camera2_pane_g5

0x97a9,	// (0x00078f1c) main_camera2_pane_g6_ParamLimits

0x97a9,	// (0x00078f1c) main_camera2_pane_g6

0x97b5,	// (0x00078f28) main_camera2_pane_g7_ParamLimits

0x97b5,	// (0x00078f28) main_camera2_pane_g7

0x97c1,	// (0x00078f34) main_camera2_pane_g8_ParamLimits

0x97c1,	// (0x00078f34) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0007ed95) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0007ed95) main_camera2_pane_g

0x97d9,	// (0x00078f4c) main_camera2_pane_t1_ParamLimits

0x97d9,	// (0x00078f4c) main_camera2_pane_t1

0x97eb,	// (0x00078f5e) main_camera2_pane_t2_ParamLimits

0x97eb,	// (0x00078f5e) main_camera2_pane_t2

0x97fd,	// (0x00078f70) main_camera2_pane_t3_ParamLimits

0x97fd,	// (0x00078f70) main_camera2_pane_t3

0x980f,	// (0x00078f82) main_camera2_pane_t4_ParamLimits

0x980f,	// (0x00078f82) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0007eda8) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0007eda8) main_camera2_pane_t

0x9871,	// (0x00078fe4) cams_zoom_pane_cp4_ParamLimits

0x9871,	// (0x00078fe4) cams_zoom_pane_cp4

0x9881,	// (0x00078ff4) image2_cif_pane_ParamLimits

0x9881,	// (0x00078ff4) image2_cif_pane

0x9896,	// (0x00079009) image2_subqcif_pane_ParamLimits

0x9896,	// (0x00079009) image2_subqcif_pane

0x98a5,	// (0x00079018) main_video2_pane_g1_ParamLimits

0x98a5,	// (0x00079018) main_video2_pane_g1

0x98b7,	// (0x0007902a) main_video2_pane_g2_ParamLimits

0x98b7,	// (0x0007902a) main_video2_pane_g2

0x98c7,	// (0x0007903a) main_video2_pane_g3_ParamLimits

0x98c7,	// (0x0007903a) main_video2_pane_g3

0x98d7,	// (0x0007904a) main_video2_pane_g4_ParamLimits

0x98d7,	// (0x0007904a) main_video2_pane_g4

0x98e7,	// (0x0007905a) main_video2_pane_g5_ParamLimits

0x98e7,	// (0x0007905a) main_video2_pane_g5

0x98f7,	// (0x0007906a) main_video2_pane_g6_ParamLimits

0x98f7,	// (0x0007906a) main_video2_pane_g6

0x0005,

0xf644,	// (0x0007edb7) main_video2_pane_g_ParamLimits

0xf644,	// (0x0007edb7) main_video2_pane_g

0x9909,	// (0x0007907c) main_video2_pane_t1_ParamLimits

0x9909,	// (0x0007907c) main_video2_pane_t1

0x9923,	// (0x00079096) main_video2_pane_t2_ParamLimits

0x9923,	// (0x00079096) main_video2_pane_t2

0x9949,	// (0x000790bc) main_video2_pane_t3_ParamLimits

0x9949,	// (0x000790bc) main_video2_pane_t3

0x0002,

0xf651,	// (0x0007edc4) main_video2_pane_t_ParamLimits

0xf651,	// (0x0007edc4) main_video2_pane_t

0x9212,	// (0x00078985) call_muted_g2

0x0001,

0xf5f3,	// (0x0007ed66) call_muted_g

0xefa4,	// (0x0007e717) main_mup2_pane

0x2fb9,	// (0x0007272c) main_mup2_pane_g1_ParamLimits

0x2fb9,	// (0x0007272c) main_mup2_pane_g1

0x996f,	// (0x000790e2) main_mup2_pane_g2_ParamLimits

0x996f,	// (0x000790e2) main_mup2_pane_g2

0x9bf1,	// (0x00079364) main_mup_pane_g13_cp1

0x9bf9,	// (0x0007936c) mup_volume_pane_cp1

0x998f,	// (0x00079102) main_mup2_pane_g4_ParamLimits

0x998f,	// (0x00079102) main_mup2_pane_g4

0x99a4,	// (0x00079117) main_mup2_pane_g5_ParamLimits

0x99a4,	// (0x00079117) main_mup2_pane_g5

0x99b9,	// (0x0007912c) main_mup2_pane_g6_ParamLimits

0x99b9,	// (0x0007912c) main_mup2_pane_g6

0x99ce,	// (0x00079141) main_mup2_pane_g7_ParamLimits

0x99ce,	// (0x00079141) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0007edcb) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0007edcb) main_mup2_pane_g

0x99ea,	// (0x0007915d) main_mup2_pane_t1_ParamLimits

0x99ea,	// (0x0007915d) main_mup2_pane_t1

0x9a01,	// (0x00079174) main_mup2_pane_t2_ParamLimits

0x9a01,	// (0x00079174) main_mup2_pane_t2

0x9a18,	// (0x0007918b) main_mup2_pane_t3_ParamLimits

0x9a18,	// (0x0007918b) main_mup2_pane_t3

0x9a2f,	// (0x000791a2) main_mup2_pane_t4_ParamLimits

0x9a2f,	// (0x000791a2) main_mup2_pane_t4

0x9a49,	// (0x000791bc) main_mup2_pane_t5_ParamLimits

0x9a49,	// (0x000791bc) main_mup2_pane_t5

0x9a63,	// (0x000791d6) main_mup2_pane_t6_ParamLimits

0x9a63,	// (0x000791d6) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0007edda) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0007edda) main_mup2_pane_t

0x9a9b,	// (0x0007920e) mup2_visualizer_pane_ParamLimits

0x9a9b,	// (0x0007920e) mup2_visualizer_pane

0x9ad1,	// (0x00079244) mup_progress_pane_cp_ParamLimits

0x9ad1,	// (0x00079244) mup_progress_pane_cp

0x9bdc,	// (0x0007934f) mup_volume_pane_cp_ParamLimits

0x9bdc,	// (0x0007934f) mup_volume_pane_cp

0x9ae8,	// (0x0007925b) mup2_visualizer_pane_g1_ParamLimits

0x9ae8,	// (0x0007925b) mup2_visualizer_pane_g1

0x2f8b,	// (0x000726fe) mup2_visualizer_pane_g2_ParamLimits

0x2f8b,	// (0x000726fe) mup2_visualizer_pane_g2

0x9afd,	// (0x00079270) mup2_visualizer_pane_g3_ParamLimits

0x9afd,	// (0x00079270) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0007ede7) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0007ede7) mup2_visualizer_pane_g

0x1d67,	// (0x000714da) aid_size_cell_fmradio

0x9328,	// (0x00078a9b) aid_height_parent_landcape

0x11b1,	// (0x00070924) wml_content_pane_cp

0x11b9,	// (0x0007092c) wml_tabs_pane

0x11c2,	// (0x00070935) popup_wml_miniature_window

0x11ca,	// (0x0007093d) scroll_pane_cp021

0x11de,	// (0x00070951) wml_content_pane_comp8

0xefa4,	// (0x0007e717) bg_popup_sub_pane_cp05

0x2fa9,	// (0x0007271c) popup_wml_miniature_window_g1

0x2fb1,	// (0x00072724) wml_miniature_view_pane

0x9b0b,	// (0x0007927e) aid_size_wml_view

0x9b13,	// (0x00079286) wml_miniature_view_pane_g1

0x9b1c,	// (0x0007928f) wml_miniature_view_pane_g2

0x9b25,	// (0x00079298) wml_miniature_view_pane_g3

0x9b2d,	// (0x000792a0) wml_miniature_view_pane_g4

0x9b35,	// (0x000792a8) wml_miniature_view_pane_g5

0x9b3d,	// (0x000792b0) wml_miniature_view_pane_g6

0x9b45,	// (0x000792b8) wml_miniature_view_pane_g7

0x9b4d,	// (0x000792c0) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0007edee) wml_miniature_view_pane_g

0x2fb9,	// (0x0007272c) background_graphic_ParamLimits

0x2fb9,	// (0x0007272c) background_graphic

0x2fc5,	// (0x00072738) wml_tabs_2_pane

0x2fce,	// (0x00072741) wml_tabs_3_pane_ParamLimits

0x2fce,	// (0x00072741) wml_tabs_3_pane

0x2fe0,	// (0x00072753) wml_tabs_4_pane_ParamLimits

0x2fe0,	// (0x00072753) wml_tabs_4_pane

0x2ff6,	// (0x00072769) wml_tabs_5_pane_ParamLimits

0x2ff6,	// (0x00072769) wml_tabs_5_pane

0x3010,	// (0x00072783) wml_tabs_pane_g2_ParamLimits

0x3010,	// (0x00072783) wml_tabs_pane_g2

0x3024,	// (0x00072797) wml_tabs_pane_g3_ParamLimits

0x3024,	// (0x00072797) wml_tabs_pane_g3

0x9b55,	// (0x000792c8) wml_tabs_2_active_pane_ParamLimits

0x9b55,	// (0x000792c8) wml_tabs_2_active_pane

0x9b65,	// (0x000792d8) wml_tabs_2_passive_pane_ParamLimits

0x9b65,	// (0x000792d8) wml_tabs_2_passive_pane

0x9b75,	// (0x000792e8) wml_tabs_3_active_pane_cp_ParamLimits

0x9b75,	// (0x000792e8) wml_tabs_3_active_pane_cp

0x9b86,	// (0x000792f9) wml_tabs_3_passive_pane_ParamLimits

0x9b86,	// (0x000792f9) wml_tabs_3_passive_pane

0x9b97,	// (0x0007930a) wml_tabs_3_passive_pane_cp_ParamLimits

0x9b97,	// (0x0007930a) wml_tabs_3_passive_pane_cp

0x9ba8,	// (0x0007931b) tabs_4_active_pane

0x9bb0,	// (0x00079323) tabs_4_passive_pane

0x9bb8,	// (0x0007932b) tabs_4_passive_pane_cp

0x9bc0,	// (0x00079333) tabs_4_passive_pane_cp2

0x90ed,	// (0x00078860) aid_height_text

0x8903,	// (0x00078076) mup_volume_cont_pane_ParamLimits

0x8903,	// (0x00078076) mup_volume_cont_pane

0x6528,	// (0x00075c9b) aid_size_cell_pinb

0x6532,	// (0x00075ca5) aid_size_list_pinb

0x9aba,	// (0x0007922d) mup2_volume_cont_pane_ParamLimits

0x9aba,	// (0x0007922d) mup2_volume_cont_pane

0x9bc8,	// (0x0007933b) mup2_volume_cont_pane_g1_ParamLimits

0x9bc8,	// (0x0007933b) mup2_volume_cont_pane_g1

0x6165,	// (0x000758d8) aid_size_cell_touch_ParamLimits

0x6165,	// (0x000758d8) aid_size_cell_touch

0x640e,	// (0x00075b81) touch_pane_ParamLimits

0x640e,	// (0x00075b81) touch_pane

0xeb79,	// (0x0007e2ec) main_rss2_pane

0x3041,	// (0x000727b4) listscroll_rss2_pane

0x304a,	// (0x000727bd) rss2_navigation_pane

0x3052,	// (0x000727c5) list_rss2_pane

0x183a,	// (0x00070fad) scroll_pane_cp22

0x305a,	// (0x000727cd) rss2_navigation_pane_g1

0x3063,	// (0x000727d6) rss2_navigation_pane_g2

0x306b,	// (0x000727de) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0007edff) rss2_navigation_pane_g

0x3073,	// (0x000727e6) rss2_navigation_pane_t1

0x9c01,	// (0x00079374) rss2_list_single_pane_ParamLimits

0x9c01,	// (0x00079374) rss2_list_single_pane

0x3081,	// (0x000727f4) rss2_list_single_pane_t2

0x308f,	// (0x00072802) rss2_list_single_pane_t3_ParamLimits

0x308f,	// (0x00072802) rss2_list_single_pane_t3

0x30ac,	// (0x0007281f) rss2_list_single_pane_t4

0x8256,	// (0x000779c9) smil_status_pane_g1

0x2edd,	// (0x00072650) main_image2_pane_ParamLimits

0x2edd,	// (0x00072650) main_image2_pane

0x97cd,	// (0x00078f40) main_camera2_pane_g9_ParamLimits

0x97cd,	// (0x00078f40) main_camera2_pane_g9

0x9821,	// (0x00078f94) main_camera2_pane_t5_ParamLimits

0x9821,	// (0x00078f94) main_camera2_pane_t5

0x9833,	// (0x00078fa6) main_camera2_pane_t6_ParamLimits

0x9833,	// (0x00078fa6) main_camera2_pane_t6

0x9c32,	// (0x000793a5) main_image2_pane_g1_ParamLimits

0x9c32,	// (0x000793a5) main_image2_pane_g1

0x8e8d,	// (0x00078600) smil2_video_pane_ParamLimits

0x8e8d,	// (0x00078600) smil2_video_pane

0x6199,	// (0x0007590c) aid_zoom_text_primary_cp

0x63b7,	// (0x00075b2a) popup_preview_fixed_window

0x111a,	// (0x0007088d) im_reading_pane_g1

0x9717,	// (0x00078e8a) cams2_bc_adjust_pane_cp_ParamLimits

0x9717,	// (0x00078e8a) cams2_bc_adjust_pane_cp

0x9863,	// (0x00078fd6) cams2_bc_adjust_pane_ParamLimits

0x9863,	// (0x00078fd6) cams2_bc_adjust_pane

0x9c3e,	// (0x000793b1) cams2_bc_adjust_pane_g1

0x9c46,	// (0x000793b9) cams2_slider_pane

0x9c4f,	// (0x000793c2) cams2_slider_pane_g1

0x9c58,	// (0x000793cb) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0007ee06) cams2_slider_pane_g

0x6638,	// (0x00075dab) calc_display_pane_ParamLimits

0x6656,	// (0x00075dc9) calc_paper_pane_ParamLimits

0x6672,	// (0x00075de5) grid_calc_pane_ParamLimits

0x8457,	// (0x00077bca) popup_clock_digital_window_t1_ParamLimits

0x1d04,	// (0x00071477) main_image_pane_t1

0x661e,	// (0x00075d91) aid_size_cell_calc_ParamLimits

0x661e,	// (0x00075d91) aid_size_cell_calc

0x9362,	// (0x00078ad5) popup_blid_sat_info2_window_ParamLimits

0x9362,	// (0x00078ad5) popup_blid_sat_info2_window

0x30c2,	// (0x00072835) aid_size_cell_blid

0x30ca,	// (0x0007283d) bg_popup_window_pane_cp07

0x30ed,	// (0x00072860) grid_popup_blid_pane

0x30f7,	// (0x0007286a) heading_pane_cp05_ParamLimits

0x30f7,	// (0x0007286a) heading_pane_cp05

0x31c1,	// (0x00072934) cell_popup_blid_pane_ParamLimits

0x31c1,	// (0x00072934) cell_popup_blid_pane

0x31e5,	// (0x00072958) cell_popup_blid_pane_g1

0x31ed,	// (0x00072960) cell_popup_blid_pane_t1

0x9a80,	// (0x000791f3) mup2_indicator_pane_ParamLimits

0x9a80,	// (0x000791f3) mup2_indicator_pane

0x1021,	// (0x00070794) mup2_visualizer_osc_pane

0x2f97,	// (0x0007270a) mup2_visualizer_spec_pane_ParamLimits

0x2f97,	// (0x0007270a) mup2_visualizer_spec_pane

0x9c72,	// (0x000793e5) mup2_spec_half_pane

0x9c7b,	// (0x000793ee) mup2_spec_half_pane_cp

0x9c85,	// (0x000793f8) mup2_spec_bar_pane_ParamLimits

0x9c85,	// (0x000793f8) mup2_spec_bar_pane

0x2f38,	// (0x000726ab) mup2_spec_bar_pane_g1

0x2f42,	// (0x000726b5) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0007ed79) mup2_spec_bar_pane_g

0x9ca4,	// (0x00079417) mup2_osc_middle_pane

0x2f54,	// (0x000726c7) mup2_visualizer_osc_pane_g1

0xebb1,	// (0x0007e324) popup_number_entry_window_t1_ParamLimits

0xebc4,	// (0x0007e337) popup_number_entry_window_t2_ParamLimits

0xebd6,	// (0x0007e349) popup_number_entry_window_t3_ParamLimits

0x6465,	// (0x00075bd8) popup_number_entry_window_t5_ParamLimits

0x6465,	// (0x00075bd8) popup_number_entry_window_t5

0xf0ca,	// (0x0007e83d) popup_number_entry_window_t_ParamLimits

0xebe8,	// (0x0007e35b) text_title_cp2_ParamLimits

0x8b81,	// (0x000782f4) aid_hotspot_pointer_text2_pane

0x8c1b,	// (0x0007838e) main_viewer_pane_g9_ParamLimits

0x8c1b,	// (0x0007838e) main_viewer_pane_g9

0x1353,	// (0x00070ac6) cale_month_pane_t1_ParamLimits

0x1390,	// (0x00070b03) bg_cale_pane_ParamLimits

0x13a8,	// (0x00070b1b) list_cale_pane_ParamLimits

0x13b9,	// (0x00070b2c) listscroll_cale_day_pane_t1

0x13cb,	// (0x00070b3e) scroll_pane_cp09_ParamLimits

0x893e,	// (0x000780b1) main_mup_eq_pane_t1_ParamLimits

0x893e,	// (0x000780b1) main_mup_eq_pane_t1

0x8958,	// (0x000780cb) main_mup_eq_pane_t2_ParamLimits

0x8958,	// (0x000780cb) main_mup_eq_pane_t2

0x8972,	// (0x000780e5) main_mup_eq_pane_t3_ParamLimits

0x8972,	// (0x000780e5) main_mup_eq_pane_t3

0x898a,	// (0x000780fd) main_mup_eq_pane_t4_ParamLimits

0x898a,	// (0x000780fd) main_mup_eq_pane_t4

0x89a2,	// (0x00078115) main_mup_eq_pane_t5_ParamLimits

0x89a2,	// (0x00078115) main_mup_eq_pane_t5

0x89ba,	// (0x0007812d) main_mup_eq_pane_t6_ParamLimits

0x89ba,	// (0x0007812d) main_mup_eq_pane_t6

0x89ce,	// (0x00078141) main_mup_eq_pane_t7_ParamLimits

0x89ce,	// (0x00078141) main_mup_eq_pane_t7

0x89e2,	// (0x00078155) main_mup_eq_pane_t8_ParamLimits

0x89e2,	// (0x00078155) main_mup_eq_pane_t8

0x89f8,	// (0x0007816b) main_mup_eq_pane_t9_ParamLimits

0x89f8,	// (0x0007816b) main_mup_eq_pane_t9

0x8a10,	// (0x00078183) main_mup_eq_pane_t10_ParamLimits

0x8a10,	// (0x00078183) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0007ebc8) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0007ebc8) main_mup_eq_pane_t

0x8acd,	// (0x00078240) mup_equalizer_pane_cp5_ParamLimits

0x8ae3,	// (0x00078256) mup_equalizer_pane_cp6_ParamLimits

0x8afb,	// (0x0007826e) mup_equalizer_pane_cp7_ParamLimits

0xeb79,	// (0x0007e2ec) main_gallery_pane

0x2f5d,	// (0x000726d0) smil2_volume_pane

0x2f78,	// (0x000726eb) smil_status_volume_pane_g1_ParamLimits

0x2f65,	// (0x000726d8) smil_status_volume_pane_g2_ParamLimits

0x958a,	// (0x00078cfd) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0007ed7e) smil_status_volume_pane_g_ParamLimits

0x30ca,	// (0x0007283d) bg_popup_window_pane_cp07_ParamLimits

0x30d8,	// (0x0007284b) blid_firmament_pane

0x9cad,	// (0x00079420) aid_size_cell_gallery_ParamLimits

0x9cad,	// (0x00079420) aid_size_cell_gallery

0x9cbb,	// (0x0007942e) grid_gallery_pane_ParamLimits

0x9cbb,	// (0x0007942e) grid_gallery_pane

0x9ccb,	// (0x0007943e) cell_gallery_pane_ParamLimits

0x9ccb,	// (0x0007943e) cell_gallery_pane

0x31fb,	// (0x0007296e) bg_cell_gallery_focus_pane_ParamLimits

0x31fb,	// (0x0007296e) bg_cell_gallery_focus_pane

0x320d,	// (0x00072980) cell_gallery_pane_g1_ParamLimits

0x320d,	// (0x00072980) cell_gallery_pane_g1

0x9d19,	// (0x0007948c) cell_gallery_pane_g2_ParamLimits

0x9d19,	// (0x0007948c) cell_gallery_pane_g2

0x9d26,	// (0x00079499) cell_gallery_pane_g3_ParamLimits

0x9d26,	// (0x00079499) cell_gallery_pane_g3

0x3219,	// (0x0007298c) cell_gallery_pane_g4_ParamLimits

0x3219,	// (0x0007298c) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0007ee2c) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0007ee2c) cell_gallery_pane_g

0x3225,	// (0x00072998) bg_cell_gallery_focus_pane_g1

0x322d,	// (0x000729a0) bg_cell_gallery_focus_pane_g2

0x3235,	// (0x000729a8) bg_cell_gallery_focus_pane_g3

0x323d,	// (0x000729b0) bg_cell_gallery_focus_pane_g4

0x3245,	// (0x000729b8) bg_cell_gallery_focus_pane_g5

0x324d,	// (0x000729c0) bg_cell_gallery_focus_pane_g6

0x3255,	// (0x000729c8) bg_cell_gallery_focus_pane_g7

0x325d,	// (0x000729d0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0007ee35) bg_cell_gallery_focus_pane_g

0x3265,	// (0x000729d8) aid_firma_cardinal

0x3279,	// (0x000729ec) blid_firmament_pane_t1

0x3290,	// (0x00072a03) blid_firmament_pane_t2

0x32a7,	// (0x00072a1a) blid_firmament_pane_t3

0x32be,	// (0x00072a31) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0007ee46) blid_firmament_pane_t

0x32de,	// (0x00072a51) blid_sat_info_pane

0x32ee,	// (0x00072a61) blid_sat_info_pane_g1

0x32ee,	// (0x00072a61) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0007ee4f) blid_sat_info_pane_g

0x32f8,	// (0x00072a6b) blid_sat_info_pane_t1

0x3306,	// (0x00072a79) smil2_volume_content_pane

0x330f,	// (0x00072a82) smil2_volume_pane_g1

0x32d5,	// (0x00072a48) smil2_volume_content_pane_g1

0x3317,	// (0x00072a8a) smil2_volume_content_pane_g2

0x3320,	// (0x00072a93) smil2_volume_content_pane_g3

0x3329,	// (0x00072a9c) smil2_volume_content_pane_g4

0x3332,	// (0x00072aa5) smil2_volume_content_pane_g5

0x333b,	// (0x00072aae) smil2_volume_content_pane_g6

0x3344,	// (0x00072ab7) smil2_volume_content_pane_g7

0x334d,	// (0x00072ac0) smil2_volume_content_pane_g8

0x3356,	// (0x00072ac9) smil2_volume_content_pane_g9

0x335f,	// (0x00072ad2) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0007ee54) smil2_volume_content_pane_g

0x6c49,	// (0x000763bc) cale_week_day_heading_pane_t1_ParamLimits

0x6c64,	// (0x000763d7) cale_week_day_heading_pane_t2_ParamLimits

0x6c7f,	// (0x000763f2) cale_week_day_heading_pane_t3_ParamLimits

0x6c9a,	// (0x0007640d) cale_week_day_heading_pane_t4_ParamLimits

0x6cb5,	// (0x00076428) cale_week_day_heading_pane_t5_ParamLimits

0x6cd0,	// (0x00076443) cale_week_day_heading_pane_t6_ParamLimits

0x6ceb,	// (0x0007645e) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0007e944) cale_week_day_heading_pane_t_ParamLimits

0x0fc6,	// (0x00070739) bg_cale_side_pane_ParamLimits

0x6d06,	// (0x00076479) cale_week_time_pane_t1_ParamLimits

0x6d20,	// (0x00076493) cale_week_time_pane_t2_ParamLimits

0x6d3a,	// (0x000764ad) cale_week_time_pane_t3_ParamLimits

0x6d54,	// (0x000764c7) cale_week_time_pane_t4_ParamLimits

0x6d6e,	// (0x000764e1) cale_week_time_pane_t5_ParamLimits

0x6d88,	// (0x000764fb) cale_week_time_pane_t6_ParamLimits

0x6da6,	// (0x00076519) cale_week_time_pane_t7_ParamLimits

0x6dc8,	// (0x0007653b) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0007e953) cale_week_time_pane_t_ParamLimits

0x6dec,	// (0x0007655f) cell_cale_week_pane_g2_ParamLimits

0x0fc6,	// (0x00070739) bg_cale_side_pane_cp01_ParamLimits

0x804b,	// (0x000777be) cale_month_week_pane_t1_ParamLimits

0x8064,	// (0x000777d7) cale_month_week_pane_t2_ParamLimits

0x807d,	// (0x000777f0) cale_month_week_pane_t3_ParamLimits

0x8096,	// (0x00077809) cale_month_week_pane_t4_ParamLimits

0x80af,	// (0x00077822) cale_month_week_pane_t5_ParamLimits

0x80d0,	// (0x00077843) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0007ea28) cale_month_week_pane_t_ParamLimits

0x8213,	// (0x00077986) cell_cale_month_pane_g1_ParamLimits

0xeb79,	// (0x0007e2ec) main_cale_event_viewer_pane

0xeb79,	// (0x0007e2ec) listscroll_cale_event_viewer_pane

0x3368,	// (0x00072adb) list_cale_ev_pane

0x3370,	// (0x00072ae3) scroll_pane_cp023

0x337c,	// (0x00072aef) field_cale_ev_pane_ParamLimits

0x337c,	// (0x00072aef) field_cale_ev_pane

0x339a,	// (0x00072b0d) field_cale_ev_content_pane_ParamLimits

0x339a,	// (0x00072b0d) field_cale_ev_content_pane

0x33a6,	// (0x00072b19) field_cale_ev_pane_g1_ParamLimits

0x33a6,	// (0x00072b19) field_cale_ev_pane_g1

0x33b2,	// (0x00072b25) field_cale_ev_pane_g2_ParamLimits

0x33b2,	// (0x00072b25) field_cale_ev_pane_g2

0x33ca,	// (0x00072b3d) field_cale_ev_pane_g3_ParamLimits

0x33ca,	// (0x00072b3d) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0007ee69) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0007ee69) field_cale_ev_pane_g

0x33e2,	// (0x00072b55) field_cale_ev_pane_t1_ParamLimits

0x33e2,	// (0x00072b55) field_cale_ev_pane_t1

0x33f9,	// (0x00072b6c) field_cale_ev_content_pane_t1_ParamLimits

0x33f9,	// (0x00072b6c) field_cale_ev_content_pane_t1

0x1bea,	// (0x0007135d) bg_button_pane_cp01

0x69da,	// (0x0007614d) listscroll_cale_week_pane_ParamLimits

0x0f71,	// (0x000706e4) popup_toolbar_window_cp01

0x0f97,	// (0x0007070a) listscroll_cale_week_pane_t1_ParamLimits

0x69da,	// (0x0007614d) listscroll_cale_day_pane_ParamLimits

0x0f71,	// (0x000706e4) popup_toolbar_window_cp02

0x13b9,	// (0x00070b2c) listscroll_cale_day_pane_t1_ParamLimits

0x69da,	// (0x0007614d) main_cale_month_pane_ParamLimits

0x9469,	// (0x00078bdc) popup_toolbar_window_cp03_ParamLimits

0x9469,	// (0x00078bdc) popup_toolbar_window_cp03

0x8da3,	// (0x00078516) main_image_pane_g2_ParamLimits

0x8da3,	// (0x00078516) main_image_pane_g2

0x8daf,	// (0x00078522) main_image_pane_g3_ParamLimits

0x8daf,	// (0x00078522) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0007ec5a) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0007ec5a) main_image_pane_g

0x1d04,	// (0x00071477) main_image_pane_t1_ParamLimits

0x8dbb,	// (0x0007852e) main_image_pane_t2_ParamLimits

0x8dbb,	// (0x0007852e) main_image_pane_t2

0x8dcd,	// (0x00078540) main_image_pane_t3_ParamLimits

0x8dcd,	// (0x00078540) main_image_pane_t3

0x8ddf,	// (0x00078552) main_image_pane_t4_ParamLimits

0x8ddf,	// (0x00078552) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0007ec61) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0007ec61) main_image_pane_t

0x8df1,	// (0x00078564) popup_image_details_window_cp01

0x8dfb,	// (0x0007856e) popup_toobar_trans_pane_cp01_ParamLimits

0x8dfb,	// (0x0007856e) popup_toobar_trans_pane_cp01

0x93b9,	// (0x00078b2c) popup_image_details_window_ParamLimits

0x93b9,	// (0x00078b2c) popup_image_details_window

0x93c7,	// (0x00078b3a) popup_image_focus_window

0x9709,	// (0x00078e7c) camera2_autofocus_pane_ParamLimits

0x9709,	// (0x00078e7c) camera2_autofocus_pane

0xeb79,	// (0x0007e2ec) bg_popup_sub_pane_cp06

0x3417,	// (0x00072b8a) popup_image_focus_window_g1

0x341f,	// (0x00072b92) popup_image_focus_window_g2

0x3427,	// (0x00072b9a) popup_image_focus_window_g3

0x342f,	// (0x00072ba2) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0007ee70) popup_image_focus_window_g

0x3437,	// (0x00072baa) popup_image_focus_window_t1

0x3445,	// (0x00072bb8) popup_image_focus_window_t2

0x3455,	// (0x00072bc8) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0007ee79) popup_image_focus_window_t

0x3463,	// (0x00072bd6) camera2_autofocus_pane_g1

0x2edd,	// (0x00072650) bg_tb_trans_pane_cp01

0x3471,	// (0x00072be4) popup_image_details_window_g1

0x3484,	// (0x00072bf7) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0007ee8b) popup_image_details_window_g

0x34ad,	// (0x00072c20) popup_image_details_window_t1

0x34bf,	// (0x00072c32) popup_image_details_window_t2

0x34d8,	// (0x00072c4b) popup_image_details_window_t3

0x34ec,	// (0x00072c5f) popup_image_details_window_t4

0x3507,	// (0x00072c7a) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0007ee92) popup_image_details_window_t

0x0e48,	// (0x000705bb) bg_calc_paper_pane_ParamLimits

0xeb79,	// (0x0007e2ec) grid_highlight_pane_cp013

0x676f,	// (0x00075ee2) list_calc_pane_ParamLimits

0x6781,	// (0x00075ef4) scroll_pane_cp024

0x0e5c,	// (0x000705cf) bg_calc_display_pane_ParamLimits

0x6789,	// (0x00075efc) calc_display_pane_t1_ParamLimits

0x679e,	// (0x00075f11) calc_display_pane_t2_ParamLimits

0x67b3,	// (0x00075f26) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0007e8c4) calc_display_pane_t_ParamLimits

0x688f,	// (0x00076002) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0007e8e1) cell_calc_pane_g

0x6898,	// (0x0007600b) cell_calc_pane_t1

0x0ebb,	// (0x0007062e) grid_highlight_pane_cp02_ParamLimits

0x0ed1,	// (0x00070644) toolbar_button_pane_cp01_ParamLimits

0x0ed1,	// (0x00070644) toolbar_button_pane_cp01

0x1d49,	// (0x000714bc) temp_image_control_pane_ParamLimits

0x1d49,	// (0x000714bc) temp_image_control_pane

0x2edd,	// (0x00072650) main_mp3_pane

0x3521,	// (0x00072c94) temp_image_control_pane_g1_ParamLimits

0x3521,	// (0x00072c94) temp_image_control_pane_g1

0x352f,	// (0x00072ca2) temp_image_control_pane_g2_ParamLimits

0x352f,	// (0x00072ca2) temp_image_control_pane_g2

0x3541,	// (0x00072cb4) temp_image_control_pane_g3_ParamLimits

0x3541,	// (0x00072cb4) temp_image_control_pane_g3

0x9d63,	// (0x000794d6) temp_image_control_pane_g4_ParamLimits

0x9d63,	// (0x000794d6) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0007ee9d) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0007ee9d) temp_image_control_pane_g

0x3521,	// (0x00072c94) main_mp3_pane_g1

0x9d74,	// (0x000794e7) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0007eea6) main_mp3_pane_g

0x3584,	// (0x00072cf7) main_mp3_pane_t1

0x1029,	// (0x0007079c) main_camera_pane_g8_ParamLimits

0x1029,	// (0x0007079c) main_camera_pane_g8

0x7079,	// (0x000767ec) main_video_pane_g7_ParamLimits

0x7079,	// (0x000767ec) main_video_pane_g7

0x9851,	// (0x00078fc4) main_camera2_pane_t7_ParamLimits

0x9851,	// (0x00078fc4) main_camera2_pane_t7

0x1171,	// (0x000708e4) scroll_pane_cp025_ParamLimits

0x1171,	// (0x000708e4) scroll_pane_cp025

0x1185,	// (0x000708f8) scroll_pane_cp026_ParamLimits

0x1185,	// (0x000708f8) scroll_pane_cp026

0x1194,	// (0x00070907) wml_content_pane_ParamLimits

0xeb79,	// (0x0007e2ec) main_touch_calib_pane

0x9e18,	// (0x0007958b) main_touch_calib_pane_g1

0x9e24,	// (0x00079597) main_touch_calib_pane_g2

0x9e30,	// (0x000795a3) main_touch_calib_pane_g3

0x9e3c,	// (0x000795af) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0007eec4) main_touch_calib_pane_g

0x9e48,	// (0x000795bb) main_touch_calib_pane_t1

0x9e61,	// (0x000795d4) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0007eecd) main_touch_calib_pane_t

0x1924,	// (0x00071097) mup_progress_pane_cp02

0x1959,	// (0x000710cc) navi_pane_g1

0x1a14,	// (0x00071187) navi_pane_mp_t3

0x2edd,	// (0x00072650) main_mp3_pane_ParamLimits

0x94a6,	// (0x00078c19) navi_pane_ParamLimits

0x3521,	// (0x00072c94) main_mp3_pane_g1_ParamLimits

0x9d74,	// (0x000794e7) main_mp3_pane_g2_ParamLimits

0x9d80,	// (0x000794f3) main_mp3_pane_g3_ParamLimits

0x9d80,	// (0x000794f3) main_mp3_pane_g3

0x9d8c,	// (0x000794ff) main_mp3_pane_g4_ParamLimits

0x9d8c,	// (0x000794ff) main_mp3_pane_g4

0x3551,	// (0x00072cc4) main_mp3_pane_g5_ParamLimits

0x3551,	// (0x00072cc4) main_mp3_pane_g5

0x355f,	// (0x00072cd2) main_mp3_pane_g6_ParamLimits

0x355f,	// (0x00072cd2) main_mp3_pane_g6

0x356c,	// (0x00072cdf) main_mp3_pane_g7_ParamLimits

0x356c,	// (0x00072cdf) main_mp3_pane_g7

0x3578,	// (0x00072ceb) main_mp3_pane_g8_ParamLimits

0x3578,	// (0x00072ceb) main_mp3_pane_g8

0xf733,	// (0x0007eea6) main_mp3_pane_g_ParamLimits

0x9d98,	// (0x0007950b) main_mp3_pane_t2

0x9da8,	// (0x0007951b) main_mp3_pane_t3

0x3592,	// (0x00072d05) main_mp3_pane_t4

0x35a0,	// (0x00072d13) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0007eeb7) main_mp3_pane_t

0x35ae,	// (0x00072d21) mup_progress_pane_cp01

0x6199,	// (0x0007590c) aid_zoom_text_secondary2

0x3368,	// (0x00072adb) list_cale_ev2_pane

0x3370,	// (0x00072ae3) scroll_pane_cp023_ParamLimits

0x9ebc,	// (0x0007962f) field_cale_ev2_pane_ParamLimits

0x9ebc,	// (0x0007962f) field_cale_ev2_pane

0x9ee5,	// (0x00079658) field_cale_ev2_pane_g1_ParamLimits

0x9ee5,	// (0x00079658) field_cale_ev2_pane_g1

0x9ef1,	// (0x00079664) field_cale_ev2_pane_g2_ParamLimits

0x9ef1,	// (0x00079664) field_cale_ev2_pane_g2

0x9f09,	// (0x0007967c) field_cale_ev2_pane_g3_ParamLimits

0x9f09,	// (0x0007967c) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0007eed8) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0007eed8) field_cale_ev2_pane_g

0x51dc,	// (0x0007494f) field_cale_ev2_pane_t1_ParamLimits

0x51dc,	// (0x0007494f) field_cale_ev2_pane_t1

0x51f3,	// (0x00074966) field_cale_ev2_pane_t2_ParamLimits

0x51f3,	// (0x00074966) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0007eee1) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0007eee1) field_cale_ev2_pane_t

0x8c83,	// (0x000783f6) main_postcard_pane_g5_ParamLimits

0x8c83,	// (0x000783f6) main_postcard_pane_g5

0x8c91,	// (0x00078404) main_postcard_pane_g6_ParamLimits

0x8c91,	// (0x00078404) main_postcard_pane_g6

0x6ec3,	// (0x00076636) camera2_autofocus_pane_cp_ParamLimits

0x6ec3,	// (0x00076636) camera2_autofocus_pane_cp

0x2edd,	// (0x00072650) main_mup3_pane

0x9f2d,	// (0x000796a0) main_mup3_pane_g1_ParamLimits

0x9f2d,	// (0x000796a0) main_mup3_pane_g1

0x9f4e,	// (0x000796c1) main_mup3_pane_g2_ParamLimits

0x9f4e,	// (0x000796c1) main_mup3_pane_g2

0x9fc6,	// (0x00079739) main_mup3_pane_g3_ParamLimits

0x9fc6,	// (0x00079739) main_mup3_pane_g3

0xa009,	// (0x0007977c) main_mup3_pane_g4_ParamLimits

0xa009,	// (0x0007977c) main_mup3_pane_g4

0xa04c,	// (0x000797bf) main_mup3_pane_g5_ParamLimits

0xa04c,	// (0x000797bf) main_mup3_pane_g5

0xa08f,	// (0x00079802) main_mup3_pane_g6_ParamLimits

0xa08f,	// (0x00079802) main_mup3_pane_g6

0x361e,	// (0x00072d91) main_mup3_pane_g7_ParamLimits

0x361e,	// (0x00072d91) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0007eef1) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0007eef1) main_mup3_pane_g

0xa105,	// (0x00079878) main_mup3_pane_t1_ParamLimits

0xa105,	// (0x00079878) main_mup3_pane_t1

0xa174,	// (0x000798e7) main_mup3_pane_t2_ParamLimits

0xa174,	// (0x000798e7) main_mup3_pane_t2

0xa23d,	// (0x000799b0) main_mup3_pane_t4_ParamLimits

0xa23d,	// (0x000799b0) main_mup3_pane_t4

0xa28b,	// (0x000799fe) main_mup3_pane_t5_ParamLimits

0xa28b,	// (0x000799fe) main_mup3_pane_t5

0xa33b,	// (0x00079aae) main_mup3_pane_t6_ParamLimits

0xa33b,	// (0x00079aae) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0007ef02) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0007ef02) main_mup3_pane_t

0xa3e7,	// (0x00079b5a) mup3_progress_pane_ParamLimits

0xa3e7,	// (0x00079b5a) mup3_progress_pane

0xa465,	// (0x00079bd8) popup_mup3_control_window_ParamLimits

0xa465,	// (0x00079bd8) popup_mup3_control_window

0x362c,	// (0x00072d9f) popup_mup3_text_window

0xa47e,	// (0x00079bf1) mup3_progress_pane_t1

0xa49d,	// (0x00079c10) mup3_progress_pane_t2

0x3634,	// (0x00072da7) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0007ef0f) mup3_progress_pane_t

0x3651,	// (0x00072dc4) mup_progress_pane_cp03

0xeb79,	// (0x0007e2ec) bg_tb_trans_pane_cp04

0xa4bc,	// (0x00079c2f) mup3_volume_pane

0xa4c4,	// (0x00079c37) popup_mup3_control_window_g1

0xa4cd,	// (0x00079c40) mup3_volume_pane_g1

0xa4d6,	// (0x00079c49) mup3_volume_pane_g2

0xa4df,	// (0x00079c52) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0007ef16) mup3_volume_pane_g

0xeb79,	// (0x0007e2ec) bg_tb_trans_pane_cp03

0x3661,	// (0x00072dd4) popup_mup3_text_window_g1

0x3669,	// (0x00072ddc) popup_mup3_text_window_t1

0x0ea4,	// (0x00070617) list_calc_item_pane_g1_ParamLimits

0x3038,	// (0x000727ab) mup_volume_pane_cp_g1

0x9e7a,	// (0x000795ed) main_touch_calib_pane_t3

0x9e90,	// (0x00079603) main_touch_calib_pane_t4

0x9ea6,	// (0x00079619) main_touch_calib_pane_t5

0x6151,	// (0x000758c4) aid_cell_size_toolbar2

0x6159,	// (0x000758cc) aid_popup3_width_pane

0x4ee8,	// (0x0007465b) aid_zoom_text_msg_primary

0x6e98,	// (0x0007660b) vorec_t7

0x0e68,	// (0x000705db) bg_calc_paper_pane_g1_ParamLimits

0x0e80,	// (0x000705f3) bg_calc_paper_pane_g2_ParamLimits

0x0e74,	// (0x000705e7) bg_calc_paper_pane_g3_ParamLimits

0x0e98,	// (0x0007060b) bg_calc_paper_pane_g4_ParamLimits

0x0e8c,	// (0x000705ff) bg_calc_paper_pane_g5_ParamLimits

0x67f2,	// (0x00075f65) bg_calc_paper_pane_g6_ParamLimits

0x6803,	// (0x00075f76) bg_calc_paper_pane_g7_ParamLimits

0x6814,	// (0x00075f87) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0007e8cb) bg_calc_paper_pane_g_ParamLimits

0x6825,	// (0x00075f98) calc_bg_paper_pane_g9_ParamLimits

0x6faa,	// (0x0007671d) image_qvga_pane_ParamLimits

0x6faa,	// (0x0007671d) image_qvga_pane

0x0d97,	// (0x0007050a) bg_popup_sub_pane_cp04_ParamLimits

0x1c80,	// (0x000713f3) popup_mup_playback_window_g1_ParamLimits

0x1c8c,	// (0x000713ff) popup_mup_playback_window_t1_ParamLimits

0x1ca1,	// (0x00071414) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0007ec55) popup_mup_playback_window_t_ParamLimits

0x9980,	// (0x000790f3) main_mup2_pane_g3_ParamLimits

0x9980,	// (0x000790f3) main_mup2_pane_g3

0x727a,	// (0x000769ed) popup_toolbar_window_cp04

0x2083,	// (0x000717f6) popup_call2_audio_second_window_g3_ParamLimits

0x2083,	// (0x000717f6) popup_call2_audio_second_window_g3

0x248d,	// (0x00071c00) popup_call2_audio_first_window_g4_ParamLimits

0x248d,	// (0x00071c00) popup_call2_audio_first_window_g4

0x2b62,	// (0x000722d5) popup_call2_audio_in_window_g4_ParamLimits

0x2b62,	// (0x000722d5) popup_call2_audio_in_window_g4

0x8d96,	// (0x00078509) aid_area_sk_bg_cut_ParamLimits

0x8d96,	// (0x00078509) aid_area_sk_bg_cut

0x1cb6,	// (0x00071429) aid_area_sk_bg_cut_2_ParamLimits

0x1cb6,	// (0x00071429) aid_area_sk_bg_cut_2

0x9d09,	// (0x0007947c) aid_placing_details_win

0x9d11,	// (0x00079484) aid_placing_details_win_2

0x3463,	// (0x00072bd6) camera2_autofocus_pane_g1_ParamLimits

0x63a8,	// (0x00075b1b) popup_fixed_preview_cale_window_ParamLimits

0x63a8,	// (0x00075b1b) popup_fixed_preview_cale_window

0x1aa4,	// (0x00071217) navi_slider_pane_g3

0x1a9b,	// (0x0007120e) navi_slider_pane_g4

0x1a92,	// (0x00071205) navi_slider_pane_g5

0x1aa4,	// (0x00071217) navi_slider_pane_g6

0x86d2,	// (0x00077e45) navi_slider_pane_g7

0x1bb7,	// (0x0007132a) mup_scale_pane_g3

0x1bc0,	// (0x00071333) mup_scale_pane_g4

0x1bc9,	// (0x0007133c) mup_scale_pane_g5

0x8b13,	// (0x00078286) mup_scale_pane_g6

0x8b1c,	// (0x0007828f) mup_scale_pane_g7

0x1aa4,	// (0x00071217) cams2_slider_pane_g3

0x30ba,	// (0x0007282d) cams2_slider_pane_g4

0x9c61,	// (0x000793d4) cams2_slider_pane_g5

0x1aa4,	// (0x00071217) cams2_slider_pane_g6

0x9c69,	// (0x000793dc) cams2_slider_pane_g7

0x32ee,	// (0x00072a61) camera2_autofocus_pane_cp_g1

0x2ec3,	// (0x00072636) bg_popup_preview_window_pane_cp02_ParamLimits

0x2ec3,	// (0x00072636) bg_popup_preview_window_pane_cp02

0x3677,	// (0x00072dea) list_fp_cale_pane_ParamLimits

0x3677,	// (0x00072dea) list_fp_cale_pane

0x3683,	// (0x00072df6) popup_fixed_preview_cale_window_t1_ParamLimits

0x3683,	// (0x00072df6) popup_fixed_preview_cale_window_t1

0xa4e8,	// (0x00079c5b) popup_fixed_preview_cale_window_t2_ParamLimits

0xa4e8,	// (0x00079c5b) popup_fixed_preview_cale_window_t2

0xa4fd,	// (0x00079c70) popup_fixed_preview_cale_window_t3_ParamLimits

0xa4fd,	// (0x00079c70) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0007ef1d) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0007ef1d) popup_fixed_preview_cale_window_t

0xa512,	// (0x00079c85) list_single_fp_cale_pane_ParamLimits

0xa512,	// (0x00079c85) list_single_fp_cale_pane

0x36a1,	// (0x00072e14) list_single_fp_cale_pane_g1_ParamLimits

0x36a1,	// (0x00072e14) list_single_fp_cale_pane_g1

0x36ad,	// (0x00072e20) list_single_fp_cale_pane_g2_ParamLimits

0x36ad,	// (0x00072e20) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0007ef24) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0007ef24) list_single_fp_cale_pane_g

0x36c6,	// (0x00072e39) list_single_fp_cale_pane_t1_ParamLimits

0x36c6,	// (0x00072e39) list_single_fp_cale_pane_t1

0x36d8,	// (0x00072e4b) list_single_fp_cale_pane_t2_ParamLimits

0x36d8,	// (0x00072e4b) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0007ef2b) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0007ef2b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xeb79,	// (0x0007e2ec) main_dialer_pane

0xa525,	// (0x00079c98) aid_cell_size_keypad

0xa52f,	// (0x00079ca2) dialer_ne_pane

0xa539,	// (0x00079cac) grid_dialer_command_1_pane

0xa541,	// (0x00079cb4) grid_dialer_command_2_pane

0xa549,	// (0x00079cbc) grid_dialer_keypad_pane

0xa55b,	// (0x00079cce) bg_popup_call_pane_cp06_ParamLimits

0xa55b,	// (0x00079cce) bg_popup_call_pane_cp06

0xa567,	// (0x00079cda) dialer_ne_clear_pane_ParamLimits

0xa567,	// (0x00079cda) dialer_ne_clear_pane

0x370b,	// (0x00072e7e) dialer_ne_pane_g1

0x3713,	// (0x00072e86) dialer_ne_pane_t1_ParamLimits

0x3713,	// (0x00072e86) dialer_ne_pane_t1

0xa573,	// (0x00079ce6) dialer_ne_pane_t2_ParamLimits

0xa573,	// (0x00079ce6) dialer_ne_pane_t2

0xa590,	// (0x00079d03) dialer_ne_pane_t3_ParamLimits

0xa590,	// (0x00079d03) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0007ef30) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0007ef30) dialer_ne_pane_t

0xa5b4,	// (0x00079d27) dialer_ne_pane_t3_copy1_ParamLimits

0xa5b4,	// (0x00079d27) dialer_ne_pane_t3_copy1

0xa5d8,	// (0x00079d4b) cell_dialer_keypad_pane_ParamLimits

0xa5d8,	// (0x00079d4b) cell_dialer_keypad_pane

0xa5ef,	// (0x00079d62) cell_dialer_command_1_pane_ParamLimits

0xa5ef,	// (0x00079d62) cell_dialer_command_1_pane

0xa605,	// (0x00079d78) cell_dialer_command_2_pane_ParamLimits

0xa605,	// (0x00079d78) cell_dialer_command_2_pane

0x3725,	// (0x00072e98) bg_button_pane_cp02_ParamLimits

0x3725,	// (0x00072e98) bg_button_pane_cp02

0xa614,	// (0x00079d87) cell_dialer_keypad_pane_g1_ParamLimits

0xa614,	// (0x00079d87) cell_dialer_keypad_pane_g1

0x3725,	// (0x00072e98) bg_button_pane_cp03_ParamLimits

0x3725,	// (0x00072e98) bg_button_pane_cp03

0xa629,	// (0x00079d9c) cell_dialer_command_1_pane_g1_ParamLimits

0xa629,	// (0x00079d9c) cell_dialer_command_1_pane_g1

0x3731,	// (0x00072ea4) bg_button_pane_cp04

0xa63d,	// (0x00079db0) cell_dialer_command_2_pane_g1

0x1021,	// (0x00070794) bg_button_pane_cp06

0x3739,	// (0x00072eac) dialer_ne_clear_pane_g1

0x1965,	// (0x000710d8) navi_pane_g2

0x1993,	// (0x00071106) navi_pane_g3

0x0002,

0xf3e5,	// (0x0007eb58) navi_pane_g

0x1a22,	// (0x00071195) navi_pane_mv_g2

0x1a49,	// (0x000711bc) navi_pane_mv_g5

0x869d,	// (0x00077e10) navi_pane_mv_t1

0x0e5c,	// (0x000705cf) main_clock2_pane

0xa67d,	// (0x00079df0) main_clock2_list_pane_ParamLimits

0xa67d,	// (0x00079df0) main_clock2_list_pane

0xa6a5,	// (0x00079e18) main_clock2_pane_t1_ParamLimits

0xa6a5,	// (0x00079e18) main_clock2_pane_t1

0xa6c7,	// (0x00079e3a) main_clock2_pane_t2_ParamLimits

0xa6c7,	// (0x00079e3a) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0007ef3c) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0007ef3c) main_clock2_pane_t

0xa722,	// (0x00079e95) popup_clock_analogue_window_cp03_ParamLimits

0xa722,	// (0x00079e95) popup_clock_analogue_window_cp03

0xa740,	// (0x00079eb3) popup_clock_digital_window_cp02_ParamLimits

0xa740,	// (0x00079eb3) popup_clock_digital_window_cp02

0xa7ad,	// (0x00079f20) main_clock2_list_single_pane_ParamLimits

0xa7ad,	// (0x00079f20) main_clock2_list_single_pane

0x1021,	// (0x00070794) list_highlight_pane_cp05

0x3777,	// (0x00072eea) main_clock2_list_single_pane_t1

0x727a,	// (0x000769ed) popup_toolbar_window_cp04_ParamLimits

0x9d33,	// (0x000794a6) camera2_autofocus_pane_g2_ParamLimits

0x9d33,	// (0x000794a6) camera2_autofocus_pane_g2

0x9d3f,	// (0x000794b2) camera2_autofocus_pane_g3_ParamLimits

0x9d3f,	// (0x000794b2) camera2_autofocus_pane_g3

0x9d4b,	// (0x000794be) camera2_autofocus_pane_g4_ParamLimits

0x9d4b,	// (0x000794be) camera2_autofocus_pane_g4

0x9d57,	// (0x000794ca) camera2_autofocus_pane_g5_ParamLimits

0x9d57,	// (0x000794ca) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0007ee80) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0007ee80) camera2_autofocus_pane_g

0x35fe,	// (0x00072d71) camera2_autofocus_pane_cp_g2

0x3606,	// (0x00072d79) camera2_autofocus_pane_cp_g3

0x360e,	// (0x00072d81) camera2_autofocus_pane_cp_g4

0x3616,	// (0x00072d89) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0007eee6) camera2_autofocus_pane_cp_g

0xa553,	// (0x00079cc6) popup_dialer_spcha_window

0xeb79,	// (0x0007e2ec) bg_popup_sub_pane_cp07

0x3785,	// (0x00072ef8) list_spcha_pane

0x378d,	// (0x00072f00) list_single_spcha_pane_ParamLimits

0x378d,	// (0x00072f00) list_single_spcha_pane

0xeb79,	// (0x0007e2ec) list_highlight_pane_cp06

0x379e,	// (0x00072f11) list_single_spcha_pane_t1

0x290c,	// (0x0007207f) popup_call2_audio_out_window_g4_ParamLimits

0x290c,	// (0x0007207f) popup_call2_audio_out_window_g4

0xeb79,	// (0x0007e2ec) main_imed2_pane

0x93cf,	// (0x00078b42) popup_imed_adjust2_window

0x93e2,	// (0x00078b55) popup_imed_trans_window_ParamLimits

0x93e2,	// (0x00078b55) popup_imed_trans_window

0x3123,	// (0x00072896) popup_blid_sat_info2_window_t1

0x3131,	// (0x000728a4) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0007ee15) popup_blid_sat_info2_window_t

0xa856,	// (0x00079fc9) aid_size_cell_colour_35

0xa870,	// (0x00079fe3) aid_size_cell_colour_112

0xa887,	// (0x00079ffa) aid_size_cell_effect

0x2edd,	// (0x00072650) bg_tb_trans_pane_cp02

0x260a,	// (0x00071d7d) heading_imed_pane

0xa8a1,	// (0x0007a014) listscroll_imed_pane

0x37ac,	// (0x00072f1f) heading_imed_pane_g1

0x37b4,	// (0x00072f27) heading_imed_pane_t1

0x37c2,	// (0x00072f35) grid_imed_colour_35_pane_ParamLimits

0x37c2,	// (0x00072f35) grid_imed_colour_35_pane

0xa8ad,	// (0x0007a020) grid_imed_effect_pane

0x37d9,	// (0x00072f4c) list_imed_aspect_pane

0xa8bd,	// (0x0007a030) scroll_pane_cp027_ParamLimits

0xa8bd,	// (0x0007a030) scroll_pane_cp027

0xa8c9,	// (0x0007a03c) cell_imed_effect_pane_ParamLimits

0xa8c9,	// (0x0007a03c) cell_imed_effect_pane

0x37e1,	// (0x00072f54) cell_imed_colour_pane_ParamLimits

0x37e1,	// (0x00072f54) cell_imed_colour_pane

0x3823,	// (0x00072f96) cell_imed_colour_pane_g1_ParamLimits

0x3823,	// (0x00072f96) cell_imed_colour_pane_g1

0x3834,	// (0x00072fa7) hgihlgiht_grid_pane_cp016_ParamLimits

0x3834,	// (0x00072fa7) hgihlgiht_grid_pane_cp016

0xa8e1,	// (0x0007a054) cell_imed_effect_pane_g1

0xa8e9,	// (0x0007a05c) grid_highlight_pane_cp017

0x3845,	// (0x00072fb8) list_imed_single_pane_ParamLimits

0x3845,	// (0x00072fb8) list_imed_single_pane

0xeb79,	// (0x0007e2ec) list_highlight_pane_cp07

0x385a,	// (0x00072fcd) list_imed_aspect_pane_comp1_t1

0x2ecf,	// (0x00072642) bg_tb_trans_pane_cp05

0x387c,	// (0x00072fef) popup_imed_adjust2_window_g1

0x38a3,	// (0x00073016) popup_imed_adjust2_window_t1

0x38bb,	// (0x0007302e) slider_imed_adjust_pane

0x38cf,	// (0x00073042) slider_imed_adjust_pane_g1

0x38df,	// (0x00073052) slider_imed_adjust_pane_g2

0x38ef,	// (0x00073062) slider_imed_adjust_pane_g3

0x3900,	// (0x00073073) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0007ef59) slider_imed_adjust_pane_g

0xa8f2,	// (0x0007a065) aid_size_cell_clipart2

0xa8fe,	// (0x0007a071) grid_imed_clipart_pane

0x3911,	// (0x00073084) scroll_pane_cp031

0xa908,	// (0x0007a07b) cell_imed_clipart_pane_ParamLimits

0xa908,	// (0x0007a07b) cell_imed_clipart_pane

0xa92a,	// (0x0007a09d) cell_imed_clipart_pane_g1

0xeb79,	// (0x0007e2ec) grid_highlight_pane_cp014

0xa689,	// (0x00079dfc) main_clock2_pane_g1_ParamLimits

0xa689,	// (0x00079dfc) main_clock2_pane_g1

0xa758,	// (0x00079ecb) aid_call2_pane_cp10

0xa76a,	// (0x00079edd) aid_call_pane_cp10

0x18b8,	// (0x0007102b) popup_clock_analogue_window_cp10_g1

0x18b8,	// (0x0007102b) popup_clock_analogue_window_cp10_g2

0xa77c,	// (0x00079eef) popup_clock_analogue_window_cp10_g3

0xa77c,	// (0x00079eef) popup_clock_analogue_window_cp10_g4

0x18b8,	// (0x0007102b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0007ef47) popup_clock_analogue_window_cp10_g

0xa78e,	// (0x00079f01) popup_clock_analogue_window_cp10_t1

0xa7bf,	// (0x00079f32) clock_digital_number_pane_cp10_ParamLimits

0xa7bf,	// (0x00079f32) clock_digital_number_pane_cp10

0xa7d7,	// (0x00079f4a) clock_digital_number_pane_cp11_ParamLimits

0xa7d7,	// (0x00079f4a) clock_digital_number_pane_cp11

0xa7ef,	// (0x00079f62) clock_digital_number_pane_cp12_ParamLimits

0xa7ef,	// (0x00079f62) clock_digital_number_pane_cp12

0xa807,	// (0x00079f7a) clock_digital_number_pane_cp13_ParamLimits

0xa807,	// (0x00079f7a) clock_digital_number_pane_cp13

0xa81f,	// (0x00079f92) clock_digital_separator_pane_cp10_ParamLimits

0xa81f,	// (0x00079f92) clock_digital_separator_pane_cp10

0xa837,	// (0x00079faa) popup_clock_digital_window_cp02_t1_ParamLimits

0xa837,	// (0x00079faa) popup_clock_digital_window_cp02_t1

0x0d8f,	// (0x00070502) clock_digital_number_pane_cp10_g1

0x0d8f,	// (0x00070502) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0007ef62) clock_digital_number_pane_cp10_g

0x0d8f,	// (0x00070502) clock_digital_separator_pane_cp10_g1

0x0d8f,	// (0x00070502) clock_digital_separator_pane_g2_cp10

0x1a51,	// (0x000711c4) navi_pane_vded_g4

0x1a5a,	// (0x000711cd) navi_pane_vded_g5

0x1a63,	// (0x000711d6) navi_pane_vded_t1

0xeb79,	// (0x0007e2ec) main_vded_pane

0xa933,	// (0x0007a0a6) main_vded_pane_g1

0xa93f,	// (0x0007a0b2) main_vded_pane_g2

0xa949,	// (0x0007a0bc) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0007ef67) main_vded_pane_g

0xa953,	// (0x0007a0c6) main_vded_pane_t1

0xa961,	// (0x0007a0d4) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0007ef6e) main_vded_pane_t

0xa96f,	// (0x0007a0e2) vded_slider_pane

0xa979,	// (0x0007a0ec) vded_video_pane

0x3919,	// (0x0007308c) vded_video_pane_g1

0xa983,	// (0x0007a0f6) vded_video_pane_g2

0x32ee,	// (0x00072a61) vded_video_pane_g3

0x0002,

0xf800,	// (0x0007ef73) vded_video_pane_g

0x3923,	// (0x00073096) vded_slider_pane_g1

0x3038,	// (0x000727ab) vded_slider_pane_g2

0x392c,	// (0x0007309f) vded_slider_pane_g3

0x3935,	// (0x000730a8) vded_slider_pane_g4

0x393e,	// (0x000730b1) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0007ef7a) vded_slider_pane_g

0xa457,	// (0x00079bca) mup3_rocker_pane_ParamLimits

0xa457,	// (0x00079bca) mup3_rocker_pane

0xa98c,	// (0x0007a0ff) mup3_control_keys_pane_g1

0xa994,	// (0x0007a107) mup3_control_keys_pane_g2

0xa99c,	// (0x0007a10f) mup3_control_keys_pane_g3

0xa9a4,	// (0x0007a117) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0007ef85) mup3_control_keys_pane_g

0x63d0,	// (0x00075b43) popup_toolbar2_fixed_window_cp01_ParamLimits

0x63d0,	// (0x00075b43) popup_toolbar2_fixed_window_cp01

0xa471,	// (0x00079be4) popup_toolbar2_fixed_window_cp02_ParamLimits

0xa471,	// (0x00079be4) popup_toolbar2_fixed_window_cp02

0x21f5,	// (0x00071968) popup_call2_audio_second_window_t4_ParamLimits

0x21f5,	// (0x00071968) popup_call2_audio_second_window_t4

0x2779,	// (0x00071eec) popup_call2_audio_first_window_t6_ParamLimits

0x2779,	// (0x00071eec) popup_call2_audio_first_window_t6

0x2a0f,	// (0x00072182) popup_call2_audio_out_window_t6_ParamLimits

0x2a0f,	// (0x00072182) popup_call2_audio_out_window_t6

0xeb79,	// (0x0007e2ec) main_vitu_pane

0xa9b4,	// (0x0007a127) aid_size_cell_itu_ParamLimits

0xa9b4,	// (0x0007a127) aid_size_cell_itu

0xeb83,	// (0x0007e2f6) bg_popup_window_pane_cp08_ParamLimits

0xeb83,	// (0x0007e2f6) bg_popup_window_pane_cp08

0xa9c2,	// (0x0007a135) field_vitu_entry_pane_ParamLimits

0xa9c2,	// (0x0007a135) field_vitu_entry_pane

0xa9d1,	// (0x0007a144) grid_vitu_function_pane_ParamLimits

0xa9d1,	// (0x0007a144) grid_vitu_function_pane

0xa9e1,	// (0x0007a154) grid_vitu_itu_pane_ParamLimits

0xa9e1,	// (0x0007a154) grid_vitu_itu_pane

0xa9f1,	// (0x0007a164) cell_vitu_itu_pane_ParamLimits

0xa9f1,	// (0x0007a164) cell_vitu_itu_pane

0xaa06,	// (0x0007a179) cell_vitu_function_pane_ParamLimits

0xaa06,	// (0x0007a179) cell_vitu_function_pane

0x2edd,	// (0x00072650) bg_popup_sub_pane_cp08_ParamLimits

0x2edd,	// (0x00072650) bg_popup_sub_pane_cp08

0xaa18,	// (0x0007a18b) field_vitu_entry_pane_t1_ParamLimits

0xaa18,	// (0x0007a18b) field_vitu_entry_pane_t1

0x395f,	// (0x000730d2) field_vitu_entry_pane_t2_ParamLimits

0x395f,	// (0x000730d2) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0007ef93) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0007ef93) field_vitu_entry_pane_t

0x397c,	// (0x000730ef) bg_button_pane_cp05_ParamLimits

0x397c,	// (0x000730ef) bg_button_pane_cp05

0xaa34,	// (0x0007a1a7) cell_vitu_itu_pane_g1

0xaa4c,	// (0x0007a1bf) cell_vitu_itu_pane_t1_ParamLimits

0xaa4c,	// (0x0007a1bf) cell_vitu_itu_pane_t1

0xaa5e,	// (0x0007a1d1) cell_vitu_itu_pane_t2_ParamLimits

0xaa5e,	// (0x0007a1d1) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0007ef98) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0007ef98) cell_vitu_itu_pane_t

0x398a,	// (0x000730fd) bg_button_pane_cp07

0xaa93,	// (0x0007a206) cell_vitu_function_pane_g1

0x6696,	// (0x00075e09) main_calc_pane_g1

0x618d,	// (0x00075900) aid_visual_content_pane

0xeb79,	// (0x0007e2ec) main_vradio_pane

0xaa9c,	// (0x0007a20f) main_vradio_pane_g1_ParamLimits

0xaa9c,	// (0x0007a20f) main_vradio_pane_g1

0x3994,	// (0x00073107) main_vradio_pane_g2_ParamLimits

0x3994,	// (0x00073107) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0007ef9f) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0007ef9f) main_vradio_pane_g

0xaaac,	// (0x0007a21f) main_vradio_pane_t1_ParamLimits

0xaaac,	// (0x0007a21f) main_vradio_pane_t1

0xaabe,	// (0x0007a231) main_vradio_pane_t2_ParamLimits

0xaabe,	// (0x0007a231) main_vradio_pane_t2

0x39a1,	// (0x00073114) main_vradio_pane_t3_ParamLimits

0x39a1,	// (0x00073114) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0007efa4) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0007efa4) main_vradio_pane_t

0xaad0,	// (0x0007a243) vradio_rocker_control_pane_ParamLimits

0xaad0,	// (0x0007a243) vradio_rocker_control_pane

0xaadc,	// (0x0007a24f) vradio_station_info_pane_ParamLimits

0xaadc,	// (0x0007a24f) vradio_station_info_pane

0x39b5,	// (0x00073128) vradio_frequency_info_pane_ParamLimits

0x39b5,	// (0x00073128) vradio_frequency_info_pane

0x32ee,	// (0x00072a61) vradio_station_info_pane_g1

0x39c4,	// (0x00073137) vradio_station_info_pane_t1_ParamLimits

0x39c4,	// (0x00073137) vradio_station_info_pane_t1

0x39e6,	// (0x00073159) vradio_station_info_pane_t2_ParamLimits

0x39e6,	// (0x00073159) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0007efab) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0007efab) vradio_station_info_pane_t

0x39f8,	// (0x0007316b) vradio_tuning_pane

0x3a00,	// (0x00073173) vradio_rocker_control_pane_g1

0x3a08,	// (0x0007317b) vradio_rocker_control_pane_g2

0x3a10,	// (0x00073183) vradio_rocker_control_pane_g3

0x3a18,	// (0x0007318b) vradio_rocker_control_pane_g4

0x3a20,	// (0x00073193) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0007efb0) vradio_rocker_control_pane_g

0xaaeb,	// (0x0007a25e) vradio_frequency_info_pane_g1

0x3a28,	// (0x0007319b) vradio_frequency_info_pane_t1_ParamLimits

0x3a28,	// (0x0007319b) vradio_frequency_info_pane_t1

0xaaf5,	// (0x0007a268) vradio_tuning_pane_g1

0xaafe,	// (0x0007a271) vradio_tuning_pane_t1

0x61d6,	// (0x00075949) area_side_right_pane_ParamLimits

0x61d6,	// (0x00075949) area_side_right_pane

0x2e8a,	// (0x000725fd) status_small_pane_g1

0x2e92,	// (0x00072605) status_small_pane_g2

0x2e9b,	// (0x0007260e) status_small_pane_g3

0x2ea4,	// (0x00072617) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0007ed6b) status_small_pane_g

0x2ead,	// (0x00072620) status_small_pane_t1

0xeb79,	// (0x0007e2ec) main_video3_pane

0x3a3c,	// (0x000731af) cams_zoom_vslider_pane

0x3a44,	// (0x000731b7) image3_wide_pane_ParamLimits

0x3a44,	// (0x000731b7) image3_wide_pane

0x3a5e,	// (0x000731d1) image3_wide_small_pane

0x3a6a,	// (0x000731dd) main_video3_pane_g1_ParamLimits

0x3a6a,	// (0x000731dd) main_video3_pane_g1

0x3a86,	// (0x000731f9) main_video3_pane_g2_ParamLimits

0x3a86,	// (0x000731f9) main_video3_pane_g2

0x0001,

0xf848,	// (0x0007efbb) main_video3_pane_g_ParamLimits

0xf848,	// (0x0007efbb) main_video3_pane_g

0x3aa2,	// (0x00073215) main_video3_pane_t1_ParamLimits

0x3aa2,	// (0x00073215) main_video3_pane_t1

0x3acd,	// (0x00073240) main_video3_pane_t2_ParamLimits

0x3acd,	// (0x00073240) main_video3_pane_t2

0x3af8,	// (0x0007326b) main_video3_pane_t3_ParamLimits

0x3af8,	// (0x0007326b) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0007efc0) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0007efc0) main_video3_pane_t

0x3b25,	// (0x00073298) cams_zoom_vslider_pane_g1

0x3b2e,	// (0x000732a1) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0007efc7) cams_zoom_vslider_pane_g

0x3b36,	// (0x000732a9) small_slider_vertical_pane

0x32ee,	// (0x00072a61) small_slider_vertical_pane_g1

0x32ee,	// (0x00072a61) small_slider_vertical_pane_g2

0x3b3e,	// (0x000732b1) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0007efcc) small_slider_vertical_pane_g

0xeb79,	// (0x0007e2ec) main_hwr_training_pane

0x3b47,	// (0x000732ba) hwr_training_instruct_pane_ParamLimits

0x3b47,	// (0x000732ba) hwr_training_instruct_pane

0xab0d,	// (0x0007a280) hwr_training_navi_pane_ParamLimits

0xab0d,	// (0x0007a280) hwr_training_navi_pane

0xab27,	// (0x0007a29a) hwr_training_write_pane_ParamLimits

0xab27,	// (0x0007a29a) hwr_training_write_pane

0xeb79,	// (0x0007e2ec) bg_frame_shadow_pane

0x3b7e,	// (0x000732f1) hwr_training_write_pane_g1

0x3b86,	// (0x000732f9) hwr_training_write_pane_g2

0x3b8e,	// (0x00073301) hwr_training_write_pane_g3

0x3b96,	// (0x00073309) hwr_training_write_pane_g4

0x3b9e,	// (0x00073311) hwr_training_write_pane_g5

0x3ba6,	// (0x00073319) hwr_training_write_pane_g6

0x3bae,	// (0x00073321) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0007efd3) hwr_training_write_pane_g

0xab5f,	// (0x0007a2d2) hwr_training_navi_pane_g1_ParamLimits

0xab5f,	// (0x0007a2d2) hwr_training_navi_pane_g1

0xab71,	// (0x0007a2e4) hwr_training_navi_pane_g2_ParamLimits

0xab71,	// (0x0007a2e4) hwr_training_navi_pane_g2

0xab83,	// (0x0007a2f6) hwr_training_navi_pane_g3_ParamLimits

0xab83,	// (0x0007a2f6) hwr_training_navi_pane_g3

0xab93,	// (0x0007a306) hwr_training_navi_pane_g4_ParamLimits

0xab93,	// (0x0007a306) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0007efe2) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0007efe2) hwr_training_navi_pane_g

0xabad,	// (0x0007a320) hwr_training_navi_pane_t1

0xabbb,	// (0x0007a32e) list_single_hwr_training_instruct_pane_ParamLimits

0xabbb,	// (0x0007a32e) list_single_hwr_training_instruct_pane

0x3bb6,	// (0x00073329) list_single_hwr_training_instruct_pane_t1

0x3225,	// (0x00072998) bg_frame_shadow_pane_g1

0x3bc5,	// (0x00073338) bg_frame_shadow_pane_g2

0x3bcd,	// (0x00073340) bg_frame_shadow_pane_g3

0x3bd5,	// (0x00073348) bg_frame_shadow_pane_g4

0x3bdd,	// (0x00073350) bg_frame_shadow_pane_g5

0x3be5,	// (0x00073358) bg_frame_shadow_pane_g6

0x3bed,	// (0x00073360) bg_frame_shadow_pane_g7

0x0f15,	// (0x00070688) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0007efed) bg_frame_shadow_pane_g

0xeb79,	// (0x0007e2ec) main_video_tele_dialer_pane

0xabe0,	// (0x0007a353) aid_size_cell_video_keypad_ParamLimits

0xabe0,	// (0x0007a353) aid_size_cell_video_keypad

0xabf0,	// (0x0007a363) grid_video_dialer_keypad_pane_ParamLimits

0xabf0,	// (0x0007a363) grid_video_dialer_keypad_pane

0xac24,	// (0x0007a397) video_down_pane_cp_ParamLimits

0xac24,	// (0x0007a397) video_down_pane_cp

0xac4e,	// (0x0007a3c1) cell_video_dialer_keypad_pane_ParamLimits

0xac4e,	// (0x0007a3c1) cell_video_dialer_keypad_pane

0x3bf5,	// (0x00073368) bg_button_pane_cp08_ParamLimits

0x3bf5,	// (0x00073368) bg_button_pane_cp08

0xac63,	// (0x0007a3d6) cell_video_dialer_keypad_pane_g1_ParamLimits

0xac63,	// (0x0007a3d6) cell_video_dialer_keypad_pane_g1

0xa44b,	// (0x00079bbe) mup3_rocker2_pane_ParamLimits

0xa44b,	// (0x00079bbe) mup3_rocker2_pane

0x32ee,	// (0x00072a61) mup3_rocker2_pane_g1

0x933f,	// (0x00078ab2) main_dialer2_pane

0xeb79,	// (0x0007e2ec) main_mp4_pane

0xaca2,	// (0x0007a415) main_mp4_pane_g1_ParamLimits

0xaca2,	// (0x0007a415) main_mp4_pane_g1

0xacb0,	// (0x0007a423) main_mp4_pane_g2_ParamLimits

0xacb0,	// (0x0007a423) main_mp4_pane_g2

0xacbe,	// (0x0007a431) main_mp4_pane_g3_ParamLimits

0xacbe,	// (0x0007a431) main_mp4_pane_g3

0xad03,	// (0x0007a476) main_mp4_pane_g4_ParamLimits

0xad03,	// (0x0007a476) main_mp4_pane_g4

0xad2b,	// (0x0007a49e) main_mp4_pane_g5_ParamLimits

0xad2b,	// (0x0007a49e) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0007f00d) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0007f00d) main_mp4_pane_g

0xad7b,	// (0x0007a4ee) main_mp4_pane_t1_ParamLimits

0xad7b,	// (0x0007a4ee) main_mp4_pane_t1

0xadd7,	// (0x0007a54a) main_mp4_pane_t2_ParamLimits

0xadd7,	// (0x0007a54a) main_mp4_pane_t2

0x3c01,	// (0x00073374) main_mp4_pane_t3_ParamLimits

0x3c01,	// (0x00073374) main_mp4_pane_t3

0xae29,	// (0x0007a59c) main_mp4_pane_t4_ParamLimits

0xae29,	// (0x0007a59c) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0007f01a) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0007f01a) main_mp4_pane_t

0xae6d,	// (0x0007a5e0) mp4_progress_pane_ParamLimits

0xae6d,	// (0x0007a5e0) mp4_progress_pane

0xaeb7,	// (0x0007a62a) mp4_rocker_pane_ParamLimits

0xaeb7,	// (0x0007a62a) mp4_rocker_pane

0x3c29,	// (0x0007339c) mp4_progress_pane_t1

0x3c42,	// (0x000733b5) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0007f023) mp4_progress_pane_t

0x3c5b,	// (0x000733ce) mup_progress_pane_cp04

0x32ee,	// (0x00072a61) mp4_rocker_pane_g1

0xaed7,	// (0x0007a64a) aid_cell_size_keypad2_ParamLimits

0xaed7,	// (0x0007a64a) aid_cell_size_keypad2

0xaee7,	// (0x0007a65a) dialer2_ne_pane_ParamLimits

0xaee7,	// (0x0007a65a) dialer2_ne_pane

0xaef5,	// (0x0007a668) grid_dialer2_keypad_pane_ParamLimits

0xaef5,	// (0x0007a668) grid_dialer2_keypad_pane

0xe073,	// (0x0007d7e6) bg_popup_call_pane_cp07_ParamLimits

0xe073,	// (0x0007d7e6) bg_popup_call_pane_cp07

0xaf05,	// (0x0007a678) dialer2_ne_pane_t1_ParamLimits

0xaf05,	// (0x0007a678) dialer2_ne_pane_t1

0xaf2a,	// (0x0007a69d) cell_dialer2_keypad_pane_ParamLimits

0xaf2a,	// (0x0007a69d) cell_dialer2_keypad_pane

0x3c79,	// (0x000733ec) bg_button_pane_pane_cp04_ParamLimits

0x3c79,	// (0x000733ec) bg_button_pane_pane_cp04

0xaf3f,	// (0x0007a6b2) cell_dialer2_keypad_pane_g1_ParamLimits

0xaf3f,	// (0x0007a6b2) cell_dialer2_keypad_pane_g1

0x713c,	// (0x000768af) aid_placing_vt_set_content_ParamLimits

0x713c,	// (0x000768af) aid_placing_vt_set_content

0x7168,	// (0x000768db) aid_placing_vt_set_title_ParamLimits

0x7168,	// (0x000768db) aid_placing_vt_set_title

0xeb79,	// (0x0007e2ec) main_image3_pane

0xafd9,	// (0x0007a74c) area_side_right_pane_cp01_ParamLimits

0xafd9,	// (0x0007a74c) area_side_right_pane_cp01

0xe081,	// (0x0007d7f4) main_image3_pane_g1_ParamLimits

0xe081,	// (0x0007d7f4) main_image3_pane_g1

0xb006,	// (0x0007a779) main_image3_pane_g2_ParamLimits

0xb006,	// (0x0007a779) main_image3_pane_g2

0xb01f,	// (0x0007a792) main_image3_pane_g3_ParamLimits

0xb01f,	// (0x0007a792) main_image3_pane_g3

0xb038,	// (0x0007a7ab) main_image3_pane_g4_ParamLimits

0xb038,	// (0x0007a7ab) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0007f032) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0007f032) main_image3_pane_g

0xb051,	// (0x0007a7c4) main_image3_pane_t1_ParamLimits

0xb051,	// (0x0007a7c4) main_image3_pane_t1

0xb076,	// (0x0007a7e9) main_image3_pane_t2_ParamLimits

0xb076,	// (0x0007a7e9) main_image3_pane_t2

0xb095,	// (0x0007a808) main_image3_pane_t3_ParamLimits

0xb095,	// (0x0007a808) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0007f03b) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0007f03b) main_image3_pane_t

0xeb83,	// (0x0007e2f6) grid_sctrl_middle_pane_cp01_ParamLimits

0xeb83,	// (0x0007e2f6) grid_sctrl_middle_pane_cp01

0xb0f6,	// (0x0007a869) cell_sctrl_middle_pane_cp01_ParamLimits

0xb0f6,	// (0x0007a869) cell_sctrl_middle_pane_cp01

0xb107,	// (0x0007a87a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb107,	// (0x0007a87a) cell_sctrl_middle_pane_cp01_g1

0xeb79,	// (0x0007e2ec) main_call4_pane

0xb114,	// (0x0007a887) aid_size_button_call4_ParamLimits

0xb114,	// (0x0007a887) aid_size_button_call4

0xb144,	// (0x0007a8b7) call4_windows_pane_ParamLimits

0xb144,	// (0x0007a8b7) call4_windows_pane

0xb15e,	// (0x0007a8d1) grid_call4_button_pane_ParamLimits

0xb15e,	// (0x0007a8d1) grid_call4_button_pane

0x3c85,	// (0x000733f8) call4_windows_conf_pane

0x3c9c,	// (0x0007340f) popup_call4_audio_first_window_ParamLimits

0x3c9c,	// (0x0007340f) popup_call4_audio_first_window

0x3ce8,	// (0x0007345b) popup_call4_audio_second_window_ParamLimits

0x3ce8,	// (0x0007345b) popup_call4_audio_second_window

0x3cfc,	// (0x0007346f) popup_call4_audio_wait_window_ParamLimits

0x3cfc,	// (0x0007346f) popup_call4_audio_wait_window

0xb182,	// (0x0007a8f5) cell_call4_button_pane_ParamLimits

0xb182,	// (0x0007a8f5) cell_call4_button_pane

0xb1a7,	// (0x0007a91a) bg_button_pane_cp09_ParamLimits

0xb1a7,	// (0x0007a91a) bg_button_pane_cp09

0xb1b3,	// (0x0007a926) cell_call4_button_pane_g1_ParamLimits

0xb1b3,	// (0x0007a926) cell_call4_button_pane_g1

0xb1c0,	// (0x0007a933) cell_call4_button_pane_t1_ParamLimits

0xb1c0,	// (0x0007a933) cell_call4_button_pane_t1

0x3d44,	// (0x000734b7) popup_call4_audio_conf_window_ParamLimits

0x3d44,	// (0x000734b7) popup_call4_audio_conf_window

0xa47e,	// (0x00079bf1) mup3_progress_pane_t1_ParamLimits

0xa49d,	// (0x00079c10) mup3_progress_pane_t2_ParamLimits

0x3634,	// (0x00072da7) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0007ef0f) mup3_progress_pane_t_ParamLimits

0x3651,	// (0x00072dc4) mup_progress_pane_cp03_ParamLimits

0xa9ac,	// (0x0007a11f) mup3_control_keys_pane_g4_copy1

0xae9b,	// (0x0007a60e) mp4_rocker2_pane_ParamLimits

0xae9b,	// (0x0007a60e) mp4_rocker2_pane

0x3d60,	// (0x000734d3) mp4_rocker2_pane_g1

0x3d58,	// (0x000734cb) mp4_rocker2_pane_g2

0xb1d2,	// (0x0007a945) mp4_rocker2_pane_g3

0xb1da,	// (0x0007a94d) mp4_rocker2_pane_g4

0xb1e2,	// (0x0007a955) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0007f044) mp4_rocker2_pane_g

0xeb79,	// (0x0007e2ec) main_camera4_pane

0xeb79,	// (0x0007e2ec) main_video4_pane

0xac00,	// (0x0007a373) main_video_tele_dialer_pane_t1_ParamLimits

0xac00,	// (0x0007a373) main_video_tele_dialer_pane_t1

0xac12,	// (0x0007a385) main_video_tele_dialer_pane_t2_ParamLimits

0xac12,	// (0x0007a385) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0007effe) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0007effe) main_video_tele_dialer_pane_t

0xb202,	// (0x0007a975) cam4_autofocus_pane_ParamLimits

0xb202,	// (0x0007a975) cam4_autofocus_pane

0xb21c,	// (0x0007a98f) cam4_image_uncrop_pane_ParamLimits

0xb21c,	// (0x0007a98f) cam4_image_uncrop_pane

0xb233,	// (0x0007a9a6) cam4_indicators_pane_ParamLimits

0xb233,	// (0x0007a9a6) cam4_indicators_pane

0xb24f,	// (0x0007a9c2) main_camera4_pane_g1_ParamLimits

0xb24f,	// (0x0007a9c2) main_camera4_pane_g1

0xb25b,	// (0x0007a9ce) main_camera4_pane_g2_ParamLimits

0xb25b,	// (0x0007a9ce) main_camera4_pane_g2

0xb25b,	// (0x0007a9ce) main_camera4_pane_g3_ParamLimits

0xb25b,	// (0x0007a9ce) main_camera4_pane_g3

0xb267,	// (0x0007a9da) main_camera4_pane_g4_ParamLimits

0xb267,	// (0x0007a9da) main_camera4_pane_g4

0xb273,	// (0x0007a9e6) main_camera4_pane_g5_ParamLimits

0xb273,	// (0x0007a9e6) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0007f04f) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0007f04f) main_camera4_pane_g

0xb28d,	// (0x0007aa00) main_camera4_pane_t1_ParamLimits

0xb28d,	// (0x0007aa00) main_camera4_pane_t1

0x3551,	// (0x00072cc4) bg_tb_trans_pane_cp06

0xb2dd,	// (0x0007aa50) cam4_indicators_pane_g1

0xb2ee,	// (0x0007aa61) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0007f06a) cam4_indicators_pane_g

0xb30c,	// (0x0007aa7f) cam4_indicators_pane_t1

0xb336,	// (0x0007aaa9) main_video4_pane_g1_ParamLimits

0xb336,	// (0x0007aaa9) main_video4_pane_g1

0xb342,	// (0x0007aab5) main_video4_pane_g2_ParamLimits

0xb342,	// (0x0007aab5) main_video4_pane_g2

0xb34e,	// (0x0007aac1) main_video4_pane_g3_ParamLimits

0xb34e,	// (0x0007aac1) main_video4_pane_g3

0xb35a,	// (0x0007aacd) main_video4_pane_g4_ParamLimits

0xb35a,	// (0x0007aacd) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0007f071) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0007f071) main_video4_pane_g

0xb37a,	// (0x0007aaed) vid4_indicators_pane_ParamLimits

0xb37a,	// (0x0007aaed) vid4_indicators_pane

0xb399,	// (0x0007ab0c) video4_image_uncrop_cif_pane_ParamLimits

0xb399,	// (0x0007ab0c) video4_image_uncrop_cif_pane

0xb3a8,	// (0x0007ab1b) video4_image_uncrop_nhd_pane_ParamLimits

0xb3a8,	// (0x0007ab1b) video4_image_uncrop_nhd_pane

0xb21c,	// (0x0007a98f) video4_image_uncrop_vga_pane_ParamLimits

0xb21c,	// (0x0007a98f) video4_image_uncrop_vga_pane

0x2edd,	// (0x00072650) bg_tb_trans_pane_cp07

0xb3bf,	// (0x0007ab32) vid4_indicators_pane_g1

0xb3d3,	// (0x0007ab46) vid4_indicators_pane_g2

0xb3e7,	// (0x0007ab5a) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0007f07c) vid4_indicators_pane_g

0xb416,	// (0x0007ab89) vid4_indicators_pane_t1

0xb42d,	// (0x0007aba0) cam4_autofocus_pane_g1

0xb435,	// (0x0007aba8) cam4_autofocus_pane_g2

0xb43d,	// (0x0007abb0) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0007f087) cam4_autofocus_pane_g

0xb445,	// (0x0007abb8) cam4_autofocus_pane_g3_copy1

0xac32,	// (0x0007a3a5) video_down_pane_cp_t1

0xac40,	// (0x0007a3b3) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0007f003) video_down_pane_cp_t

0xeb83,	// (0x0007e2f6) popup_vitu2_window_ParamLimits

0xeb83,	// (0x0007e2f6) popup_vitu2_window

0xb44d,	// (0x0007abc0) aid_size_cell2_itu2_ParamLimits

0xb44d,	// (0x0007abc0) aid_size_cell2_itu2

0xb46f,	// (0x0007abe2) aid_size_cell_itu2_ParamLimits

0xb46f,	// (0x0007abe2) aid_size_cell_itu2

0xe073,	// (0x0007d7e6) bg_popup_window_pane_cp09_ParamLimits

0xe073,	// (0x0007d7e6) bg_popup_window_pane_cp09

0xb4b3,	// (0x0007ac26) field_vitu2_entry_pane_ParamLimits

0xb4b3,	// (0x0007ac26) field_vitu2_entry_pane

0xb4d3,	// (0x0007ac46) grid_vitu2_function_pane_ParamLimits

0xb4d3,	// (0x0007ac46) grid_vitu2_function_pane

0xb517,	// (0x0007ac8a) grid_vitu2_itu_pane_ParamLimits

0xb517,	// (0x0007ac8a) grid_vitu2_itu_pane

0xb593,	// (0x0007ad06) cell_vitu2_itu_pane_ParamLimits

0xb593,	// (0x0007ad06) cell_vitu2_itu_pane

0xb5ac,	// (0x0007ad1f) cell_vitu2_function_pane_ParamLimits

0xb5ac,	// (0x0007ad1f) cell_vitu2_function_pane

0x3d68,	// (0x000734db) bg_popup_call_pane_cp08_ParamLimits

0x3d68,	// (0x000734db) bg_popup_call_pane_cp08

0x3d7f,	// (0x000734f2) field_vitu2_entry_pane_g1

0x3d8b,	// (0x000734fe) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0007f08e) field_vitu2_entry_pane_g

0x5208,	// (0x0007497b) field_vitu2_entry_pane_t1_ParamLimits

0x5208,	// (0x0007497b) field_vitu2_entry_pane_t1

0x5238,	// (0x000749ab) field_vitu2_entry_pane_t2_ParamLimits

0x5238,	// (0x000749ab) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0007f095) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0007f095) field_vitu2_entry_pane_t

0xb5ed,	// (0x0007ad60) bg_button_pane_cp010_ParamLimits

0xb5ed,	// (0x0007ad60) bg_button_pane_cp010

0xb5fb,	// (0x0007ad6e) cell_vitu2_itu_pane_g1

0xb61b,	// (0x0007ad8e) cell_vitu2_itu_pane_t1_ParamLimits

0xb61b,	// (0x0007ad8e) cell_vitu2_itu_pane_t1

0x5255,	// (0x000749c8) cell_vitu2_itu_pane_t2_ParamLimits

0x5255,	// (0x000749c8) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0007f09f) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0007f09f) cell_vitu2_itu_pane_t

0x2edd,	// (0x00072650) bg_button_pane_cp011

0xb667,	// (0x0007adda) cell_vitu2_function_pane_g1

0xeb79,	// (0x0007e2ec) main_myfav_hc_pane

0xb0d7,	// (0x0007a84a) popup_image3_note_pane_ParamLimits

0xb0d7,	// (0x0007a84a) popup_image3_note_pane

0xb0e5,	// (0x0007a858) popup_image3_tool_bar_pane_ParamLimits

0xb0e5,	// (0x0007a858) popup_image3_tool_bar_pane

0x52cb,	// (0x00074a3e) cell_vitu2_itu_pane_t3_ParamLimits

0x52cb,	// (0x00074a3e) cell_vitu2_itu_pane_t3

0xeb79,	// (0x0007e2ec) bg_popup_trans_pane

0x3dca,	// (0x0007353d) grid_image3_tool_bar_pane

0x3dd4,	// (0x00073547) bg_popup_trans_pane_g1

0x127a,	// (0x000709ed) bg_popup_trans_pane_g2

0x3ddc,	// (0x0007354f) bg_popup_trans_pane_g3

0x3de4,	// (0x00073557) bg_popup_trans_pane_g4

0x3dec,	// (0x0007355f) bg_popup_trans_pane_g5

0x3df4,	// (0x00073567) bg_popup_trans_pane_g6

0x3dfc,	// (0x0007356f) bg_popup_trans_pane_g7

0x3e04,	// (0x00073577) bg_popup_trans_pane_g8

0x125a,	// (0x000709cd) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0007f0a6) bg_popup_trans_pane_g

0x3e0c,	// (0x0007357f) cell_image3_tool_bar_pane_ParamLimits

0x3e0c,	// (0x0007357f) cell_image3_tool_bar_pane

0x32ee,	// (0x00072a61) cell_image3_tool_bar_pane_g1

0xeb79,	// (0x0007e2ec) bg_popup_trans_pane_cp1

0x3e20,	// (0x00073593) popup_image3_note_pane_t1

0x3e2e,	// (0x000735a1) popup_image3_note_pane_t2

0x3e3c,	// (0x000735af) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0007f0b9) popup_image3_note_pane_t

0x3e4a,	// (0x000735bd) popup_image3_note_pane_t3_copy1

0xb67b,	// (0x0007adee) bg_myfav_hc_instruction_pane_ParamLimits

0xb67b,	// (0x0007adee) bg_myfav_hc_instruction_pane

0xb693,	// (0x0007ae06) cell_myfav_contact_pane_ParamLimits

0xb693,	// (0x0007ae06) cell_myfav_contact_pane

0xb6ad,	// (0x0007ae20) cell_myfav_contact_pane_cp1_ParamLimits

0xb6ad,	// (0x0007ae20) cell_myfav_contact_pane_cp1

0xb6c5,	// (0x0007ae38) cell_myfav_contact_pane_cp2_ParamLimits

0xb6c5,	// (0x0007ae38) cell_myfav_contact_pane_cp2

0xb6dd,	// (0x0007ae50) cell_myfav_contact_pane_cp3_ParamLimits

0xb6dd,	// (0x0007ae50) cell_myfav_contact_pane_cp3

0xb6f4,	// (0x0007ae67) cell_myfav_contact_pane_cp4_ParamLimits

0xb6f4,	// (0x0007ae67) cell_myfav_contact_pane_cp4

0xb70a,	// (0x0007ae7d) cell_myfav_contact_pane_cp5_ParamLimits

0xb70a,	// (0x0007ae7d) cell_myfav_contact_pane_cp5

0xb71e,	// (0x0007ae91) cell_myfav_contact_pane_cp6_ParamLimits

0xb71e,	// (0x0007ae91) cell_myfav_contact_pane_cp6

0xb732,	// (0x0007aea5) cell_myfav_contact_pane_cp7_ParamLimits

0xb732,	// (0x0007aea5) cell_myfav_contact_pane_cp7

0x3e58,	// (0x000735cb) listscroll_gen_pane_cp05

0xb74a,	// (0x0007aebd) main_myfav_hc_pane_g1_ParamLimits

0xb74a,	// (0x0007aebd) main_myfav_hc_pane_g1

0xb760,	// (0x0007aed3) main_myfav_hc_pane_g2_ParamLimits

0xb760,	// (0x0007aed3) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0007f0c0) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0007f0c0) main_myfav_hc_pane_g

0xb78e,	// (0x0007af01) main_myfav_hc_pane_t1_ParamLimits

0xb78e,	// (0x0007af01) main_myfav_hc_pane_t1

0x3e61,	// (0x000735d4) main_myfav_hc_pane_t2_ParamLimits

0x3e61,	// (0x000735d4) main_myfav_hc_pane_t2

0x3e73,	// (0x000735e6) main_myfav_hc_pane_t3_ParamLimits

0x3e73,	// (0x000735e6) main_myfav_hc_pane_t3

0xb7a5,	// (0x0007af18) main_myfav_hc_pane_t4_ParamLimits

0xb7a5,	// (0x0007af18) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0007f0c7) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0007f0c7) main_myfav_hc_pane_t

0x32ee,	// (0x00072a61) bg_myfav_hc_instruction_pane_g1

0x3e85,	// (0x000735f8) cell_myfav_contact_pane_g1_ParamLimits

0x3e85,	// (0x000735f8) cell_myfav_contact_pane_g1

0x3e85,	// (0x000735f8) cell_myfav_contact_pane_g2_ParamLimits

0x3e85,	// (0x000735f8) cell_myfav_contact_pane_g2

0x3e91,	// (0x00073604) cell_myfav_contact_pane_g3_ParamLimits

0x3e91,	// (0x00073604) cell_myfav_contact_pane_g3

0x361e,	// (0x00072d91) cell_myfav_contact_pane_g4_ParamLimits

0x361e,	// (0x00072d91) cell_myfav_contact_pane_g4

0x3e9e,	// (0x00073611) cell_myfav_contact_pane_g5_ParamLimits

0x3e9e,	// (0x00073611) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0007f0d2) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0007f0d2) cell_myfav_contact_pane_g

0xb776,	// (0x0007aee9) main_myfav_hc_pane_g3_ParamLimits

0xb776,	// (0x0007aee9) main_myfav_hc_pane_g3

0x630b,	// (0x00075a7e) popup_adpt_find_window

0xb7cf,	// (0x0007af42) afind_page_pane_ParamLimits

0xb7cf,	// (0x0007af42) afind_page_pane

0xb7dc,	// (0x0007af4f) aid_size_cell_afind_ParamLimits

0xb7dc,	// (0x0007af4f) aid_size_cell_afind

0xb7f6,	// (0x0007af69) bg_popup_sub_pane_cp09_ParamLimits

0xb7f6,	// (0x0007af69) bg_popup_sub_pane_cp09

0xb803,	// (0x0007af76) find_pane_cp01_ParamLimits

0xb803,	// (0x0007af76) find_pane_cp01

0x3eaa,	// (0x0007361d) grid_afind_control_pane_ParamLimits

0x3eaa,	// (0x0007361d) grid_afind_control_pane

0xb810,	// (0x0007af83) grid_afind_pane_ParamLimits

0xb810,	// (0x0007af83) grid_afind_pane

0xb82c,	// (0x0007af9f) cell_afind_pane_ParamLimits

0xb82c,	// (0x0007af9f) cell_afind_pane

0x32ee,	// (0x00072a61) afind_page_pane_g1

0xb874,	// (0x0007afe7) afind_page_pane_g2

0xb87d,	// (0x0007aff0) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0007f0dd) afind_page_pane_g

0xb886,	// (0x0007aff9) afind_page_pane_t1

0x3ebe,	// (0x00073631) cell_afind_grid_control_pane_ParamLimits

0x3ebe,	// (0x00073631) cell_afind_grid_control_pane

0x3c79,	// (0x000733ec) bg_button_pane_cp69_ParamLimits

0x3c79,	// (0x000733ec) bg_button_pane_cp69

0xb8a6,	// (0x0007b019) cell_afind_pane_g1_ParamLimits

0xb8a6,	// (0x0007b019) cell_afind_pane_g1

0xb8b3,	// (0x0007b026) cell_afind_pane_t1_ParamLimits

0xb8b3,	// (0x0007b026) cell_afind_pane_t1

0x1073,	// (0x000707e6) bg_button_pane_cp72

0x3ecd,	// (0x00073640) cell_afind_grid_control_pane_g1

0x8ebd,	// (0x00078630) aid_image_placing_area_ParamLimits

0x8ebd,	// (0x00078630) aid_image_placing_area

0x3947,	// (0x000730ba) field_vitu_entry_pane_g1_ParamLimits

0x3947,	// (0x000730ba) field_vitu_entry_pane_g1

0x3953,	// (0x000730c6) field_vitu_entry_pane_g2_ParamLimits

0x3953,	// (0x000730c6) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0007ef8e) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0007ef8e) field_vitu_entry_pane_g

0xaa34,	// (0x0007a1a7) cell_vitu_itu_pane_g1_ParamLimits

0xaa76,	// (0x0007a1e9) cell_vitu_itu_pane_t3_ParamLimits

0xaa76,	// (0x0007a1e9) cell_vitu_itu_pane_t3

0x3c29,	// (0x0007339c) mp4_progress_pane_t1_ParamLimits

0x3c42,	// (0x000733b5) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0007f023) mp4_progress_pane_t_ParamLimits

0x3c5b,	// (0x000733ce) mup_progress_pane_cp04_ParamLimits

0xb7b9,	// (0x0007af2c) main_myfav_hc_pane_t5_ParamLimits

0xb7b9,	// (0x0007af2c) main_myfav_hc_pane_t5

0x4ef0,	// (0x00074663) aid_zoom_text_primary

0x630b,	// (0x00075a7e) popup_adpt_find_window_ParamLimits

0x2edd,	// (0x00072650) main_cam_set_pane

0xb241,	// (0x0007a9b4) cam4_zoom_pane_ParamLimits

0xb241,	// (0x0007a9b4) cam4_zoom_pane

0xb8c5,	// (0x0007b038) main_cam_set_pane_g1_ParamLimits

0xb8c5,	// (0x0007b038) main_cam_set_pane_g1

0xb8d3,	// (0x0007b046) main_cam_set_pane_g2_ParamLimits

0xb8d3,	// (0x0007b046) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0007f0e4) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0007f0e4) main_cam_set_pane_g

0xb8df,	// (0x0007b052) main_cam_set_pane_t1_ParamLimits

0xb8df,	// (0x0007b052) main_cam_set_pane_t1

0xb8fb,	// (0x0007b06e) main_cset_listscroll_pane_ParamLimits

0xb8fb,	// (0x0007b06e) main_cset_listscroll_pane

0xb926,	// (0x0007b099) main_cset_slider_pane_ParamLimits

0xb926,	// (0x0007b099) main_cset_slider_pane

0x3ede,	// (0x00073651) main_cset_list_pane_ParamLimits

0x3ede,	// (0x00073651) main_cset_list_pane

0x3eee,	// (0x00073661) scroll_pane_cp028

0xb945,	// (0x0007b0b8) aid_area_touch_slider

0xb961,	// (0x0007b0d4) cset_slider_pane

0xb98b,	// (0x0007b0fe) main_cset_slider_pane_g1

0xb9a0,	// (0x0007b113) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0007f0e9) main_cset_slider_pane_g

0x3f27,	// (0x0007369a) main_cset_slider_pane_t1

0xba62,	// (0x0007b1d5) main_cset_slider_pane_t2

0xba7c,	// (0x0007b1ef) main_cset_slider_pane_t3

0xba96,	// (0x0007b209) main_cset_slider_pane_t4

0xbab0,	// (0x0007b223) main_cset_slider_pane_t5

0xbace,	// (0x0007b241) main_cset_slider_pane_t6

0xbae5,	// (0x0007b258) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0007f10e) main_cset_slider_pane_t

0xbbf1,	// (0x0007b364) cset_list_set_pane_ParamLimits

0xbbf1,	// (0x0007b364) cset_list_set_pane

0xbc07,	// (0x0007b37a) aid_position_infowindow_above

0xbc0f,	// (0x0007b382) aid_position_infowindow_below

0xbc17,	// (0x0007b38a) cset_list_set_pane_g1_ParamLimits

0xbc17,	// (0x0007b38a) cset_list_set_pane_g1

0x531d,	// (0x00074a90) cset_list_set_pane_g3_ParamLimits

0x531d,	// (0x00074a90) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0007f12d) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0007f12d) cset_list_set_pane_g

0x532c,	// (0x00074a9f) cset_list_set_pane_t1_ParamLimits

0x532c,	// (0x00074a9f) cset_list_set_pane_t1

0x2edd,	// (0x00072650) list_highlight_pane_cp021_ParamLimits

0x2edd,	// (0x00072650) list_highlight_pane_cp021

0x1bb7,	// (0x0007132a) cset_slider_pane_g1

0x1bc9,	// (0x0007133c) cset_slider_pane_g2

0x1bc0,	// (0x00071333) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0007f132) cset_slider_pane_g

0xbc23,	// (0x0007b396) aid_area_touch_cam4_zoom

0xbc2b,	// (0x0007b39e) cam4_zoom_cont_pane

0xbc33,	// (0x0007b3a6) cam4_zoom_pane_g1

0xbc3b,	// (0x0007b3ae) cam4_zoom_pane_g2

0xbc43,	// (0x0007b3b6) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0007f139) cam4_zoom_pane_g

0x4030,	// (0x000737a3) cam4_zoom_cont_pane_g1

0x4039,	// (0x000737ac) cam4_zoom_cont_pane_g2

0x4042,	// (0x000737b5) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0007f140) cam4_zoom_cont_pane_g

0xb12e,	// (0x0007a8a1) call4_image_pane_ParamLimits

0xb12e,	// (0x0007a8a1) call4_image_pane

0x3c85,	// (0x000733f8) call4_windows_conf_pane_ParamLimits

0x3cc6,	// (0x00073439) popup_call4_audio_in_window_ParamLimits

0x3cc6,	// (0x00073439) popup_call4_audio_in_window

0xeb79,	// (0x0007e2ec) bg_popup_call2_act_pane_cp02

0x3d3c,	// (0x000734af) call4_list_conf_pane

0x32ee,	// (0x00072a61) call4_image_pane_g1

0x32ee,	// (0x00072a61) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0007ee4f) call4_image_pane_g

0x3ff7,	// (0x0007376a) list_single_graphic_popup_conf4_pane_ParamLimits

0x3ff7,	// (0x0007376a) list_single_graphic_popup_conf4_pane

0xeb79,	// (0x0007e2ec) list_highlight_pane_cp022

0x400a,	// (0x0007377d) list_single_graphic_popup_conf4_pane_g1

0x1788,	// (0x00070efb) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0007f147) list_single_graphic_popup_conf4_pane_g

0x4012,	// (0x00073785) list_single_graphic_popup_conf4_pane_t1

0x72cc,	// (0x00076a3f) popup_vtel_slider_window_ParamLimits

0x72cc,	// (0x00076a3f) popup_vtel_slider_window

0x3c67,	// (0x000733da) dialer2_ne_pane_t2_ParamLimits

0x3c67,	// (0x000733da) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0007f028) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0007f028) dialer2_ne_pane_t

0x2edd,	// (0x00072650) bg_popup_sub_pane_cp010_ParamLimits

0x2edd,	// (0x00072650) bg_popup_sub_pane_cp010

0xbc4b,	// (0x0007b3be) popup_vtel_slider_window_g1_ParamLimits

0xbc4b,	// (0x0007b3be) popup_vtel_slider_window_g1

0xbc57,	// (0x0007b3ca) popup_vtel_slider_window_g2_ParamLimits

0xbc57,	// (0x0007b3ca) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0007f14c) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0007f14c) popup_vtel_slider_window_g

0xbc9f,	// (0x0007b412) vtel_slider_pane_ParamLimits

0xbc9f,	// (0x0007b412) vtel_slider_pane

0xbcae,	// (0x0007b421) vtel_slider_pane_g1_ParamLimits

0xbcae,	// (0x0007b421) vtel_slider_pane_g1

0xbcbb,	// (0x0007b42e) vtel_slider_pane_g2_ParamLimits

0xbcbb,	// (0x0007b42e) vtel_slider_pane_g2

0xbcc8,	// (0x0007b43b) vtel_slider_pane_g3_ParamLimits

0xbcc8,	// (0x0007b43b) vtel_slider_pane_g3

0xbcae,	// (0x0007b421) vtel_slider_pane_g4_ParamLimits

0xbcae,	// (0x0007b421) vtel_slider_pane_g4

0xbcd5,	// (0x0007b448) vtel_slider_pane_g5_ParamLimits

0xbcd5,	// (0x0007b448) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0007f155) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0007f155) vtel_slider_pane_g

0x2edd,	// (0x00072650) main_gallery2_pane

0xb495,	// (0x0007ac08) aid_size_row_itut2_dropdow_list_ParamLimits

0xb495,	// (0x0007ac08) aid_size_row_itut2_dropdow_list

0xb4f5,	// (0x0007ac68) grid_vitu2_function_top_pane_ParamLimits

0xb4f5,	// (0x0007ac68) grid_vitu2_function_top_pane

0xb54f,	// (0x0007acc2) popup_vitu2_dropdown_list_window_ParamLimits

0xb54f,	// (0x0007acc2) popup_vitu2_dropdown_list_window

0xb56f,	// (0x0007ace2) popup_vitu2_match_list_window

0xbce2,	// (0x0007b455) cell_vitu2_function_top_pane_ParamLimits

0xbce2,	// (0x0007b455) cell_vitu2_function_top_pane

0xbcfc,	// (0x0007b46f) cell_vitu2_function_top_pane_cp01_ParamLimits

0xbcfc,	// (0x0007b46f) cell_vitu2_function_top_pane_cp01

0xbd18,	// (0x0007b48b) cell_vitu2_function_top_wide_pane_ParamLimits

0xbd18,	// (0x0007b48b) cell_vitu2_function_top_wide_pane

0x2edd,	// (0x00072650) bg_button_pane_cp012

0xbd34,	// (0x0007b4a7) cell_vitu2_function_top_pane_g1

0xbd48,	// (0x0007b4bb) bg_button_pane_cp013_ParamLimits

0xbd48,	// (0x0007b4bb) bg_button_pane_cp013

0xbd64,	// (0x0007b4d7) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xbd64,	// (0x0007b4d7) cell_vitu2_function_top_wide_pane_g1

0xeb83,	// (0x0007e2f6) bg_popup_sub_pane_cp20

0xbd7c,	// (0x0007b4ef) list_vitu2_match_list_pane

0x3dd4,	// (0x00073547) bg_popup_sub_pane_cp20_g1

0x3ddc,	// (0x0007354f) bg_popup_sub_pane_cp20_g2

0x127a,	// (0x000709ed) bg_popup_sub_pane_cp20_g3

0x3de4,	// (0x00073557) bg_popup_sub_pane_cp20_g4

0x125a,	// (0x000709cd) bg_popup_sub_pane_cp20_g5

0x4028,	// (0x0007379b) bg_popup_sub_pane_cp20_g6

0x3df4,	// (0x00073567) bg_popup_sub_pane_cp20_g7

0x3dfc,	// (0x0007356f) bg_popup_sub_pane_cp20_g8

0x3e04,	// (0x00073577) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0007f160) bg_popup_sub_pane_cp20_g

0xbd94,	// (0x0007b507) list_vitu2_match_list_item_pane_ParamLimits

0xbd94,	// (0x0007b507) list_vitu2_match_list_item_pane

0xbda6,	// (0x0007b519) list_vitu2_match_list_item_pane_t1

0xeb79,	// (0x0007e2ec) bg_popup_sub_pane_cp21

0x16b0,	// (0x00070e23) grid_vitu2_dropdown_list_pane

0xbdc0,	// (0x0007b533) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xbdc0,	// (0x0007b533) cell_vitu2_dropdown_list_char_pane

0xbde1,	// (0x0007b554) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xbde1,	// (0x0007b554) cell_vitu2_dropdown_list_ctrl_pane

0xe08f,	// (0x0007d802) cell_vitu2_dropdown_list_char_pane_g1

0xe098,	// (0x0007d80b) cell_vitu2_dropdown_list_char_pane_g2

0xe0a1,	// (0x0007d814) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0007f17d) cell_vitu2_dropdown_list_char_pane_g

0xbe0d,	// (0x0007b580) cell_vitu2_dropdown_list_char_pane_t1

0xbe1b,	// (0x0007b58e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xbe1b,	// (0x0007b58e) cell_vitu2_dropdown_list_ctrl_pane_g1

0xbe2b,	// (0x0007b59e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xbe2b,	// (0x0007b59e) cell_vitu2_dropdown_list_ctrl_pane_g2

0xbe3c,	// (0x0007b5af) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xbe3c,	// (0x0007b5af) cell_vitu2_dropdown_list_ctrl_pane_g3

0xbe4c,	// (0x0007b5bf) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xbe4c,	// (0x0007b5bf) cell_vitu2_dropdown_list_ctrl_pane_g4

0x3551,	// (0x00072cc4) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x3551,	// (0x00072cc4) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0007f184) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0007f184) cell_vitu2_dropdown_list_ctrl_pane_g

0xbe68,	// (0x0007b5db) aid_size_cell_gallery2_ParamLimits

0xbe68,	// (0x0007b5db) aid_size_cell_gallery2

0xbe82,	// (0x0007b5f5) grid_gallery2_pane_ParamLimits

0xbe82,	// (0x0007b5f5) grid_gallery2_pane

0xa8bd,	// (0x0007a030) scroll_pane_cp029_ParamLimits

0xa8bd,	// (0x0007a030) scroll_pane_cp029

0xbe99,	// (0x0007b60c) cell_gallery2_pane_ParamLimits

0xbe99,	// (0x0007b60c) cell_gallery2_pane

0xe0aa,	// (0x0007d81d) cell_gallery2_pane_g2

0x062a,	// (0x0006fd9d) cell_gallery2_pane_g3

0xe0b2,	// (0x0007d825) cell_gallery2_pane_g4

0xe0ba,	// (0x0007d82d) cell_gallery2_pane_g5

0x1021,	// (0x00070794) grid_highlight_pane_cp10

0xb56f,	// (0x0007ace2) popup_vitu2_match_list_window_ParamLimits

0xb583,	// (0x0007acf6) popup_vitu2_query_window_ParamLimits

0xb583,	// (0x0007acf6) popup_vitu2_query_window

0xeb79,	// (0x0007e2ec) bg_vitu2_candi_button_pane

0xe08f,	// (0x0007d802) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe098,	// (0x0007d80b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe0a1,	// (0x0007d814) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x538b,	// (0x00074afe) bg_button_pane_cp015

0xbeeb,	// (0x0007b65e) bg_button_pane_cp016

0xbefe,	// (0x0007b671) bg_button_pane_cp017

0x2ecf,	// (0x00072642) bg_popup_sub_pane_cp22

0xe0c2,	// (0x0007d835) popup_vitu2_query_window_g1

0x53be,	// (0x00074b31) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0007f18f) popup_vitu2_query_window_g

0x53db,	// (0x00074b4e) popup_vitu2_query_window_t1_ParamLimits

0x53db,	// (0x00074b4e) popup_vitu2_query_window_t1

0x540e,	// (0x00074b81) popup_vitu2_query_window_t2_ParamLimits

0x540e,	// (0x00074b81) popup_vitu2_query_window_t2

0x5420,	// (0x00074b93) popup_vitu2_query_window_t3_ParamLimits

0x5420,	// (0x00074b93) popup_vitu2_query_window_t3

0xbf22,	// (0x0007b695) popup_vitu2_query_window_t4_ParamLimits

0xbf22,	// (0x0007b695) popup_vitu2_query_window_t4

0xbf43,	// (0x0007b6b6) popup_vitu2_query_window_t5_ParamLimits

0xbf43,	// (0x0007b6b6) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0007f196) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0007f196) popup_vitu2_query_window_t

0x3ed6,	// (0x00073649) main_cset_text_pane

0xb945,	// (0x0007b0b8) aid_area_touch_slider_ParamLimits

0xb961,	// (0x0007b0d4) cset_slider_pane_ParamLimits

0xb98b,	// (0x0007b0fe) main_cset_slider_pane_g1_ParamLimits

0xb9a0,	// (0x0007b113) main_cset_slider_pane_g2_ParamLimits

0x3ef7,	// (0x0007366a) main_cset_slider_pane_g3_ParamLimits

0x3ef7,	// (0x0007366a) main_cset_slider_pane_g3

0xb9b5,	// (0x0007b128) main_cset_slider_pane_g4_ParamLimits

0xb9b5,	// (0x0007b128) main_cset_slider_pane_g4

0xb9c4,	// (0x0007b137) main_cset_slider_pane_g5_ParamLimits

0xb9c4,	// (0x0007b137) main_cset_slider_pane_g5

0xb9d2,	// (0x0007b145) main_cset_slider_pane_g6_ParamLimits

0xb9d2,	// (0x0007b145) main_cset_slider_pane_g6

0xf976,	// (0x0007f0e9) main_cset_slider_pane_g_ParamLimits

0x3f27,	// (0x0007369a) main_cset_slider_pane_t1_ParamLimits

0xba62,	// (0x0007b1d5) main_cset_slider_pane_t2_ParamLimits

0xba7c,	// (0x0007b1ef) main_cset_slider_pane_t3_ParamLimits

0xba96,	// (0x0007b209) main_cset_slider_pane_t4_ParamLimits

0xbab0,	// (0x0007b223) main_cset_slider_pane_t5_ParamLimits

0xbace,	// (0x0007b241) main_cset_slider_pane_t6_ParamLimits

0xbae5,	// (0x0007b258) main_cset_slider_pane_t7_ParamLimits

0xbb13,	// (0x0007b286) main_cset_slider_pane_t8_ParamLimits

0xbb13,	// (0x0007b286) main_cset_slider_pane_t8

0xbb3b,	// (0x0007b2ae) main_cset_slider_pane_t9_ParamLimits

0xbb3b,	// (0x0007b2ae) main_cset_slider_pane_t9

0xbb63,	// (0x0007b2d6) main_cset_slider_pane_t10_ParamLimits

0xbb63,	// (0x0007b2d6) main_cset_slider_pane_t10

0xbb8b,	// (0x0007b2fe) main_cset_slider_pane_t11_ParamLimits

0xbb8b,	// (0x0007b2fe) main_cset_slider_pane_t11

0xbbb5,	// (0x0007b328) main_cset_slider_pane_t12_ParamLimits

0xbbb5,	// (0x0007b328) main_cset_slider_pane_t12

0xbbd2,	// (0x0007b345) main_cset_slider_pane_t13_ParamLimits

0xbbd2,	// (0x0007b345) main_cset_slider_pane_t13

0xf99b,	// (0x0007f10e) main_cset_slider_pane_t_ParamLimits

0xeb79,	// (0x0007e2ec) bg_popup_sub_pane_cp011

0xe0ce,	// (0x0007d841) main_cset_text_pane_g1

0xe0d6,	// (0x0007d849) main_cset_text_pane_t1

0xe0e4,	// (0x0007d857) main_cset_text_pane_t2

0xe0f2,	// (0x0007d865) main_cset_text_pane_t3

0xe100,	// (0x0007d873) main_cset_text_pane_t4

0xe10e,	// (0x0007d881) main_cset_text_pane_t5

0xe11c,	// (0x0007d88f) main_cset_text_pane_t6

0xe12a,	// (0x0007d89d) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0007f1a5) main_cset_text_pane_t

0xeb79,	// (0x0007e2ec) main_cam4_burst_pane

0xeb79,	// (0x0007e2ec) main_cam5_pane

0xb894,	// (0x0007b007) bg_button_pane_cp019

0xb89d,	// (0x0007b010) bg_button_pane_cp020

0x3f03,	// (0x00073676) main_cset_slider_pane_g7_ParamLimits

0x3f03,	// (0x00073676) main_cset_slider_pane_g7

0x3f0f,	// (0x00073682) main_cset_slider_pane_g8_ParamLimits

0x3f0f,	// (0x00073682) main_cset_slider_pane_g8

0xb9e6,	// (0x0007b159) main_cset_slider_pane_g9_ParamLimits

0xb9e6,	// (0x0007b159) main_cset_slider_pane_g9

0xb9f2,	// (0x0007b165) main_cset_slider_pane_g10_ParamLimits

0xb9f2,	// (0x0007b165) main_cset_slider_pane_g10

0xb9fe,	// (0x0007b171) main_cset_slider_pane_g11_ParamLimits

0xb9fe,	// (0x0007b171) main_cset_slider_pane_g11

0xba0a,	// (0x0007b17d) main_cset_slider_pane_g12_ParamLimits

0xba0a,	// (0x0007b17d) main_cset_slider_pane_g12

0xba16,	// (0x0007b189) main_cset_slider_pane_g13_ParamLimits

0xba16,	// (0x0007b189) main_cset_slider_pane_g13

0xba22,	// (0x0007b195) main_cset_slider_pane_g14_ParamLimits

0xba22,	// (0x0007b195) main_cset_slider_pane_g14

0xba2e,	// (0x0007b1a1) main_cset_slider_pane_g15_ParamLimits

0xba2e,	// (0x0007b1a1) main_cset_slider_pane_g15

0x3f55,	// (0x000736c8) main_cset_slider_pane_t14_ParamLimits

0x3f55,	// (0x000736c8) main_cset_slider_pane_t14

0x3f8e,	// (0x00073701) main_cset_slider_pane_t15_ParamLimits

0x3f8e,	// (0x00073701) main_cset_slider_pane_t15

0xbf64,	// (0x0007b6d7) aid_cam4_burst_size_cell_ParamLimits

0xbf64,	// (0x0007b6d7) aid_cam4_burst_size_cell

0xbf80,	// (0x0007b6f3) grid_cam4_burst_pane_ParamLimits

0xbf80,	// (0x0007b6f3) grid_cam4_burst_pane

0xbfb0,	// (0x0007b723) linegrid_cam4_burst_pane_ParamLimits

0xbfb0,	// (0x0007b723) linegrid_cam4_burst_pane

0xbfd0,	// (0x0007b743) scroll_pane_cp30_ParamLimits

0xbfd0,	// (0x0007b743) scroll_pane_cp30

0xbfdc,	// (0x0007b74f) cell_cam4_burst_pane_ParamLimits

0xbfdc,	// (0x0007b74f) cell_cam4_burst_pane

0xe138,	// (0x0007d8ab) linegrid_cam4_burst_pane_g1_ParamLimits

0xe138,	// (0x0007d8ab) linegrid_cam4_burst_pane_g1

0xc018,	// (0x0007b78b) linegrid_cam4_burst_pane_g2_ParamLimits

0xc018,	// (0x0007b78b) linegrid_cam4_burst_pane_g2

0xe145,	// (0x0007d8b8) linegrid_cam4_burst_pane_g3_ParamLimits

0xe145,	// (0x0007d8b8) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0007f1b4) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0007f1b4) linegrid_cam4_burst_pane_g

0xc029,	// (0x0007b79c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc029,	// (0x0007b79c) linegrid_cam4_burst_pane_g3_copy1

0xe152,	// (0x0007d8c5) linegrid_cam4_burst_pane_g4_ParamLimits

0xe152,	// (0x0007d8c5) linegrid_cam4_burst_pane_g4

0xc043,	// (0x0007b7b6) linegrid_cam4_burst_pane_g5_ParamLimits

0xc043,	// (0x0007b7b6) linegrid_cam4_burst_pane_g5

0xc054,	// (0x0007b7c7) linegrid_cam4_burst_pane_g6_ParamLimits

0xc054,	// (0x0007b7c7) linegrid_cam4_burst_pane_g6

0xe15f,	// (0x0007d8d2) linegrid_cam4_burst_pane_g7_ParamLimits

0xe15f,	// (0x0007d8d2) linegrid_cam4_burst_pane_g7

0xc065,	// (0x0007b7d8) cell_cam4_burst_pane_g1

0xe178,	// (0x0007d8eb) main_cam5_pane_t1_ParamLimits

0xe178,	// (0x0007d8eb) main_cam5_pane_t1

0xe18a,	// (0x0007d8fd) main_cam5_pane_t2_ParamLimits

0xe18a,	// (0x0007d8fd) main_cam5_pane_t2

0xe19c,	// (0x0007d90f) main_cam5_pane_t3_ParamLimits

0xe19c,	// (0x0007d90f) main_cam5_pane_t3

0xe1ae,	// (0x0007d921) main_cam5_pane_t4_ParamLimits

0xe1ae,	// (0x0007d921) main_cam5_pane_t4

0xe1c6,	// (0x0007d939) main_cam5_pane_t5_ParamLimits

0xe1c6,	// (0x0007d939) main_cam5_pane_t5

0xe1da,	// (0x0007d94d) main_cam5_pane_t6_ParamLimits

0xe1da,	// (0x0007d94d) main_cam5_pane_t6

0xe1ee,	// (0x0007d961) main_cam5_pane_t7_ParamLimits

0xe1ee,	// (0x0007d961) main_cam5_pane_t7

0xe200,	// (0x0007d973) main_cam5_pane_t8_ParamLimits

0xe200,	// (0x0007d973) main_cam5_pane_t8

0xe21c,	// (0x0007d98f) main_cam5_pane_t9_ParamLimits

0xe21c,	// (0x0007d98f) main_cam5_pane_t9

0xe22e,	// (0x0007d9a1) main_cam5_pane_t10_ParamLimits

0xe22e,	// (0x0007d9a1) main_cam5_pane_t10

0xe240,	// (0x0007d9b3) main_cam5_pane_t11_ParamLimits

0xe240,	// (0x0007d9b3) main_cam5_pane_t11

0xe252,	// (0x0007d9c5) main_cam5_pane_t12_ParamLimits

0xe252,	// (0x0007d9c5) main_cam5_pane_t12

0xe267,	// (0x0007d9da) main_cam5_pane_t13_ParamLimits

0xe267,	// (0x0007d9da) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0007f1c0) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0007f1c0) main_cam5_pane_t

0x63c1,	// (0x00075b34) popup_scut_keymap_window_ParamLimits

0x63c1,	// (0x00075b34) popup_scut_keymap_window

0xc078,	// (0x0007b7eb) aid_size_cell_brow_shortcut

0x1021,	// (0x00070794) bg_popup_window_pane_cp010

0xc084,	// (0x0007b7f7) grid_scut_pane

0xc090,	// (0x0007b803) cell_scut_pane_ParamLimits

0xc090,	// (0x0007b803) cell_scut_pane

0xc0a7,	// (0x0007b81a) cell_scut_pane_g1

0xe284,	// (0x0007d9f7) cell_scut_pane_t1

0xe293,	// (0x0007da06) cell_scut_pane_t2

0xc0b0,	// (0x0007b823) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0007f1db) cell_scut_pane_t

0xa09d,	// (0x00079810) main_mup3_pane_g8_ParamLimits

0xa09d,	// (0x00079810) main_mup3_pane_g8

0xb4a3,	// (0x0007ac16) area_vitu2_query_pane_ParamLimits

0xb4a3,	// (0x0007ac16) area_vitu2_query_pane

0x539d,	// (0x00074b10) input_focus_pane_cp08

0xe2a2,	// (0x0007da15) area_vitu2_query_pane_g1

0x549e,	// (0x00074c11) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0007f1e2) area_vitu2_query_pane_g

0xc0be,	// (0x0007b831) area_vitu2_query_pane_t1_ParamLimits

0xc0be,	// (0x0007b831) area_vitu2_query_pane_t1

0xc0d2,	// (0x0007b845) area_vitu2_query_pane_t2_ParamLimits

0xc0d2,	// (0x0007b845) area_vitu2_query_pane_t2

0x54af,	// (0x00074c22) area_vitu2_query_pane_t3_ParamLimits

0x54af,	// (0x00074c22) area_vitu2_query_pane_t3

0x54d7,	// (0x00074c4a) area_vitu2_query_pane_t4_ParamLimits

0x54d7,	// (0x00074c4a) area_vitu2_query_pane_t4

0x54ff,	// (0x00074c72) area_vitu2_query_pane_t5_ParamLimits

0x54ff,	// (0x00074c72) area_vitu2_query_pane_t5

0x5527,	// (0x00074c9a) area_vitu2_query_pane_t6_ParamLimits

0x5527,	// (0x00074c9a) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0007f1e7) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0007f1e7) area_vitu2_query_pane_t

0xc0e6,	// (0x0007b859) bg_button_pane_cp018

0xc0f4,	// (0x0007b867) bg_button_pane_cp021

0x5573,	// (0x00074ce6) bg_button_pane_cp022

0x5584,	// (0x00074cf7) input_focus_pane_cp09

0x18c4,	// (0x00071037) aid_size_touch_mv_arrow_left

0x18ed,	// (0x00071060) aid_size_touch_mv_arrow_right

0xba46,	// (0x0007b1b9) main_cset_slider_pane_g16_ParamLimits

0xba46,	// (0x0007b1b9) main_cset_slider_pane_g16

0xba54,	// (0x0007b1c7) main_cset_slider_pane_g17_ParamLimits

0xba54,	// (0x0007b1c7) main_cset_slider_pane_g17

0xc065,	// (0x0007b7d8) cell_cam4_burst_pane_g1_ParamLimits

0xeb79,	// (0x0007e2ec) compa_mode_pane

0xbc63,	// (0x0007b3d6) popup_vtel_slider_window_g3_ParamLimits

0xbc63,	// (0x0007b3d6) popup_vtel_slider_window_g3

0xbc77,	// (0x0007b3ea) popup_vtel_slider_window_g4_ParamLimits

0xbc77,	// (0x0007b3ea) popup_vtel_slider_window_g4

0xbc8b,	// (0x0007b3fe) popup_vtel_slider_window_t1_ParamLimits

0xbc8b,	// (0x0007b3fe) popup_vtel_slider_window_t1

0xeb79,	// (0x0007e2ec) main_cl_pane

0x93cf,	// (0x00078b42) popup_imed_adjust2_window_ParamLimits

0x2ecf,	// (0x00072642) bg_tb_trans_pane_cp05_ParamLimits

0x387c,	// (0x00072fef) popup_imed_adjust2_window_g1_ParamLimits

0x388b,	// (0x00072ffe) popup_imed_adjust2_window_g2_ParamLimits

0x388b,	// (0x00072ffe) popup_imed_adjust2_window_g2

0x3897,	// (0x0007300a) popup_imed_adjust2_window_g3_ParamLimits

0x3897,	// (0x0007300a) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0007ef52) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0007ef52) popup_imed_adjust2_window_g

0x38a3,	// (0x00073016) popup_imed_adjust2_window_t1_ParamLimits

0x38bb,	// (0x0007302e) slider_imed_adjust_pane_ParamLimits

0x38cf,	// (0x00073042) slider_imed_adjust_pane_g1_ParamLimits

0x38df,	// (0x00073052) slider_imed_adjust_pane_g2_ParamLimits

0x38ef,	// (0x00073062) slider_imed_adjust_pane_g3_ParamLimits

0x3900,	// (0x00073073) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0007ef59) slider_imed_adjust_pane_g_ParamLimits

0xb1ea,	// (0x0007a95d) aid_touch_area_cam4_ParamLimits

0xb1ea,	// (0x0007a95d) aid_touch_area_cam4

0xb1fa,	// (0x0007a96d) battery_pane_cp01

0xb281,	// (0x0007a9f4) main_camera4_pane_g6_ParamLimits

0xb281,	// (0x0007a9f4) main_camera4_pane_g6

0xb29f,	// (0x0007aa12) main_camera4_pane_t2_ParamLimits

0xb29f,	// (0x0007aa12) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0007f05c) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0007f05c) main_camera4_pane_t

0xb326,	// (0x0007aa99) aid_touch_area_vid4_ParamLimits

0xb326,	// (0x0007aa99) aid_touch_area_vid4

0xb366,	// (0x0007aad9) main_video4_pane_g5_ParamLimits

0xb366,	// (0x0007aad9) main_video4_pane_g5

0xb38a,	// (0x0007aafd) vid4_progress_pane_ParamLimits

0xb38a,	// (0x0007aafd) vid4_progress_pane

0x3f1b,	// (0x0007368e) main_cset_slider_pane_g18_ParamLimits

0x3f1b,	// (0x0007368e) main_cset_slider_pane_g18

0xe16c,	// (0x0007d8df) cell_cam4_burst_pane_g2_ParamLimits

0xe16c,	// (0x0007d8df) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0007f1bb) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0007f1bb) cell_cam4_burst_pane_g

0xc100,	// (0x0007b873) bg_cl_pane_ParamLimits

0xc100,	// (0x0007b873) bg_cl_pane

0xc10c,	// (0x0007b87f) cl_header_pane_ParamLimits

0xc10c,	// (0x0007b87f) cl_header_pane

0xc118,	// (0x0007b88b) cl_listscroll_pane_ParamLimits

0xc118,	// (0x0007b88b) cl_listscroll_pane

0xe2ae,	// (0x0007da21) bg_cl_pane_g1

0xe2b6,	// (0x0007da29) bg_cl_pane_g2

0xe2be,	// (0x0007da31) bg_cl_pane_g3

0xe2c6,	// (0x0007da39) bg_cl_pane_g4

0xe2ce,	// (0x0007da41) bg_cl_pane_g5

0xe2d6,	// (0x0007da49) bg_cl_pane_g6

0xe2de,	// (0x0007da51) bg_cl_pane_g7

0xe2e6,	// (0x0007da59) bg_cl_pane_g8

0xe2ee,	// (0x0007da61) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0007f1f6) bg_cl_pane_g

0xc124,	// (0x0007b897) aid_height_cl_leading_ParamLimits

0xc124,	// (0x0007b897) aid_height_cl_leading

0xc130,	// (0x0007b8a3) aid_height_cl_text_ParamLimits

0xc130,	// (0x0007b8a3) aid_height_cl_text

0xeb83,	// (0x0007e2f6) bg_cl_header_pane_ParamLimits

0xeb83,	// (0x0007e2f6) bg_cl_header_pane

0xc148,	// (0x0007b8bb) cl_header_pane_g1_ParamLimits

0xc148,	// (0x0007b8bb) cl_header_pane_g1

0xc155,	// (0x0007b8c8) cl_header_pane_t1_ParamLimits

0xc155,	// (0x0007b8c8) cl_header_pane_t1

0xe2f6,	// (0x0007da69) cl_list_pane

0x3eee,	// (0x00073661) hc_scroll_pane_cp01

0x125a,	// (0x000709cd) bg_cl_header_pane_g1

0x3dd4,	// (0x00073547) bg_cl_header_pane_g2

0x127a,	// (0x000709ed) bg_cl_header_pane_g3

0x3de4,	// (0x00073557) bg_cl_header_pane_g4

0x3ddc,	// (0x0007354f) bg_cl_header_pane_g5

0x4028,	// (0x0007379b) bg_cl_header_pane_g6

0x3dfc,	// (0x0007356f) bg_cl_header_pane_g7

0x3e04,	// (0x00073577) bg_cl_header_pane_g8

0x3df4,	// (0x00073567) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0007f209) bg_cl_header_pane_g

0xc167,	// (0x0007b8da) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc167,	// (0x0007b8da) hc_cl_list_double_graphic_heading_pane

0xc178,	// (0x0007b8eb) hc_cl_list_single_graphic_pane_ParamLimits

0xc178,	// (0x0007b8eb) hc_cl_list_single_graphic_pane

0xc191,	// (0x0007b904) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc191,	// (0x0007b904) hc_cl_list_single_graphic_pane_g1

0xc19d,	// (0x0007b910) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc19d,	// (0x0007b910) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0007f21c) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0007f21c) hc_cl_list_single_graphic_pane_g

0xc1b1,	// (0x0007b924) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc1b1,	// (0x0007b924) hc_cl_list_single_graphic_pane_t1

0xc191,	// (0x0007b904) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc191,	// (0x0007b904) hc_cl_list_double_graphic_heading_pane_g1

0xc1c6,	// (0x0007b939) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc1c6,	// (0x0007b939) hc_cl_list_double_graphic_heading_pane_g2

0xc1da,	// (0x0007b94d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc1da,	// (0x0007b94d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0007f221) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0007f221) hc_cl_list_double_graphic_heading_pane_g

0xc1ee,	// (0x0007b961) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc1ee,	// (0x0007b961) hc_cl_list_double_graphic_heading_pane_t1

0xc203,	// (0x0007b976) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc203,	// (0x0007b976) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0007f228) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0007f228) hc_cl_list_double_graphic_heading_pane_t

0xc220,	// (0x0007b993) vid4_progress_pane_g1

0xc230,	// (0x0007b9a3) vid4_progress_pane_g2

0xc240,	// (0x0007b9b3) vid4_progress_pane_g3

0xc252,	// (0x0007b9c5) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0007f22d) vid4_progress_pane_g

0xc26a,	// (0x0007b9dd) vid4_progress_pane_t1

0xc280,	// (0x0007b9f3) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0007f238) vid4_progress_pane_t

0xc2aa,	// (0x0007ba1d) wait_bar_pane_cp07

0x30d8,	// (0x0007284b) blid_firmament_pane_ParamLimits

0x311b,	// (0x0007288e) popup_blid_sat_info2_window_g1

0x313f,	// (0x000728b2) popup_blid_sat_info2_window_t3

0x314d,	// (0x000728c0) popup_blid_sat_info2_window_t4

0x315b,	// (0x000728ce) popup_blid_sat_info2_window_t5

0x3169,	// (0x000728dc) popup_blid_sat_info2_window_t6

0x3179,	// (0x000728ec) popup_blid_sat_info2_window_t7

0x3187,	// (0x000728fa) popup_blid_sat_info2_window_t8

0x3195,	// (0x00072908) popup_blid_sat_info2_window_t9

0x31a3,	// (0x00072916) popup_blid_sat_info2_window_t10

0x3265,	// (0x000729d8) aid_firma_cardinal_ParamLimits

0x3279,	// (0x000729ec) blid_firmament_pane_t1_ParamLimits

0x3290,	// (0x00072a03) blid_firmament_pane_t2_ParamLimits

0x32a7,	// (0x00072a1a) blid_firmament_pane_t3_ParamLimits

0x32be,	// (0x00072a31) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0007ee46) blid_firmament_pane_t_ParamLimits

0x32de,	// (0x00072a51) blid_sat_info_pane_ParamLimits

0x2edd,	// (0x00072650) main_cam_set_pane_ParamLimits

0xa856,	// (0x00079fc9) aid_size_cell_colour_35_ParamLimits

0xa870,	// (0x00079fe3) aid_size_cell_colour_112_ParamLimits

0xa887,	// (0x00079ffa) aid_size_cell_effect_ParamLimits

0x2edd,	// (0x00072650) bg_tb_trans_pane_cp02_ParamLimits

0x260a,	// (0x00071d7d) heading_imed_pane_ParamLimits

0xa8a1,	// (0x0007a014) listscroll_imed_pane_ParamLimits

0x249f,	// (0x00071c12) popup_call2_audio_first_window_g5_ParamLimits

0x249f,	// (0x00071c12) popup_call2_audio_first_window_g5

0xafa7,	// (0x0007a71a) aid_size_touch_image3_arrow_left_ParamLimits

0xafa7,	// (0x0007a71a) aid_size_touch_image3_arrow_left

0xafbd,	// (0x0007a730) aid_size_touch_image3_arrow_right_ParamLimits

0xafbd,	// (0x0007a730) aid_size_touch_image3_arrow_right

0xc295,	// (0x0007ba08) vid4_progress_pane_t3

0xab3f,	// (0x0007a2b2) main_hwr_training_symbol_option_pane_ParamLimits

0xab3f,	// (0x0007a2b2) main_hwr_training_symbol_option_pane

0x3b69,	// (0x000732dc) popup_hwr_training_preview_window_ParamLimits

0x3b69,	// (0x000732dc) popup_hwr_training_preview_window

0xaba0,	// (0x0007a313) hwr_training_navi_pane_g5_ParamLimits

0xaba0,	// (0x0007a313) hwr_training_navi_pane_g5

0x3dc2,	// (0x00073535) popup_char_count_window

0xeb83,	// (0x0007e2f6) bg_popup_sub_pane_cp20_ParamLimits

0xbd7c,	// (0x0007b4ef) list_vitu2_match_list_pane_ParamLimits

0xbd88,	// (0x0007b4fb) vitu2_page_scroll_pane_ParamLimits

0xbd88,	// (0x0007b4fb) vitu2_page_scroll_pane

0xe311,	// (0x0007da84) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe311,	// (0x0007da84) list_single_hwr_training_symbol_option_pane

0xe324,	// (0x0007da97) list_single_hwr_training_symbol_option_pane_g1

0xe32c,	// (0x0007da9f) list_single_hwr_training_symbol_option_pane_t1

0xe33a,	// (0x0007daad) bg_button_pane_cp023

0xe343,	// (0x0007dab6) bg_button_pane_cp024

0xc2e0,	// (0x0007ba53) vitu2_page_scroll_pane_g1

0xc2e8,	// (0x0007ba5b) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0007f23f) vitu2_page_scroll_pane_g

0xc2f0,	// (0x0007ba63) vitu2_page_scroll_pane_t1

0x3038,	// (0x000727ab) popup_char_count_window_g1

0xe376,	// (0x0007dae9) popup_char_count_window_g2

0xe37f,	// (0x0007daf2) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0007f244) popup_char_count_window_g

0xe388,	// (0x0007dafb) popup_char_count_window_t1

0xeb79,	// (0x0007e2ec) main_vded2_pane

0x3868,	// (0x00072fdb) aid_size_cell_imed_line

0x3872,	// (0x00072fe5) grid_imed_line_width_pane

0xb3f8,	// (0x0007ab6b) vid4_indicators_pane_g4

0xe396,	// (0x0007db09) cell_imed_line_width_pane_ParamLimits

0xe396,	// (0x0007db09) cell_imed_line_width_pane

0xe3aa,	// (0x0007db1d) cell_imed_line_width_pane_g1

0xe3b3,	// (0x0007db26) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0007f24b) cell_imed_line_width_pane_g

0xc2ff,	// (0x0007ba72) main_vded2_pane_g1_ParamLimits

0xc2ff,	// (0x0007ba72) main_vded2_pane_g1

0xc30c,	// (0x0007ba7f) main_vded2_pane_g2_ParamLimits

0xc30c,	// (0x0007ba7f) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0007f250) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0007f250) main_vded2_pane_g

0xc31a,	// (0x0007ba8d) vded2_slider_pane_ParamLimits

0xc31a,	// (0x0007ba8d) vded2_slider_pane

0xc327,	// (0x0007ba9a) aid_size_touch_vded2_end

0xc331,	// (0x0007baa4) aid_size_touch_vded2_playhead

0xe3bb,	// (0x0007db2e) aid_size_touch_vded2_start

0xe3c3,	// (0x0007db36) vded2_slider_bg_pane

0xe3cc,	// (0x0007db3f) vded2_slider_pane_g1

0xe3d5,	// (0x0007db48) vded2_slider_pane_g2

0xc339,	// (0x0007baac) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0007f255) vded2_slider_pane_g

0xe3dd,	// (0x0007db50) vded2_slider_bg_pane_g1

0xe3e6,	// (0x0007db59) vded2_slider_bg_pane_g2

0xe3ef,	// (0x0007db62) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0007f25c) vded2_slider_bg_pane_g

0x8c27,	// (0x0007839a) aid_postcard_touch_down_pane_ParamLimits

0x8c27,	// (0x0007839a) aid_postcard_touch_down_pane

0x8c37,	// (0x000783aa) aid_postcard_touch_up_pane_ParamLimits

0x8c37,	// (0x000783aa) aid_postcard_touch_up_pane

0xeb79,	// (0x0007e2ec) main_blid2_pane

0x935a,	// (0x00078acd) popup_blid2_search_window

0xeb79,	// (0x0007e2ec) blid2_gps_pane

0xeb79,	// (0x0007e2ec) blid2_navig_pane

0xeb79,	// (0x0007e2ec) blid2_search_pane

0xeb79,	// (0x0007e2ec) blid2_tripm_pane

0xc342,	// (0x0007bab5) blid2_search_pane_g1_ParamLimits

0xc342,	// (0x0007bab5) blid2_search_pane_g1

0xc352,	// (0x0007bac5) blid2_search_pane_t1_ParamLimits

0xc352,	// (0x0007bac5) blid2_search_pane_t1

0xc364,	// (0x0007bad7) aid_size_cell_blid2_gps_ParamLimits

0xc364,	// (0x0007bad7) aid_size_cell_blid2_gps

0xc374,	// (0x0007bae7) blid2_gps_pane_g1_ParamLimits

0xc374,	// (0x0007bae7) blid2_gps_pane_g1

0xc380,	// (0x0007baf3) grid_blid2_satellite_pane_ParamLimits

0xc380,	// (0x0007baf3) grid_blid2_satellite_pane

0xc390,	// (0x0007bb03) blid2_navig_pane_g1_ParamLimits

0xc390,	// (0x0007bb03) blid2_navig_pane_g1

0xc39c,	// (0x0007bb0f) blid2_navig_pane_t1_ParamLimits

0xc39c,	// (0x0007bb0f) blid2_navig_pane_t1

0xc3ae,	// (0x0007bb21) blid2_navig_pane_t2_ParamLimits

0xc3ae,	// (0x0007bb21) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0007f263) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0007f263) blid2_navig_pane_t

0xc3c0,	// (0x0007bb33) blid2_navig_ring_pane_ParamLimits

0xc3c0,	// (0x0007bb33) blid2_navig_ring_pane

0xc3d0,	// (0x0007bb43) blid2_speed_pane_ParamLimits

0xc3d0,	// (0x0007bb43) blid2_speed_pane

0xc3dc,	// (0x0007bb4f) blid2_tripm_pane_g1_ParamLimits

0xc3dc,	// (0x0007bb4f) blid2_tripm_pane_g1

0xc3ec,	// (0x0007bb5f) blid2_tripm_pane_g2_ParamLimits

0xc3ec,	// (0x0007bb5f) blid2_tripm_pane_g2

0xc3f8,	// (0x0007bb6b) blid2_tripm_pane_g3_ParamLimits

0xc3f8,	// (0x0007bb6b) blid2_tripm_pane_g3

0xc404,	// (0x0007bb77) blid2_tripm_pane_g4_ParamLimits

0xc404,	// (0x0007bb77) blid2_tripm_pane_g4

0xc410,	// (0x0007bb83) blid2_tripm_pane_g5_ParamLimits

0xc410,	// (0x0007bb83) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0007f268) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0007f268) blid2_tripm_pane_g

0xc42c,	// (0x0007bb9f) blid2_tripm_pane_t1_ParamLimits

0xc42c,	// (0x0007bb9f) blid2_tripm_pane_t1

0xc440,	// (0x0007bbb3) blid2_tripm_pane_t2_ParamLimits

0xc440,	// (0x0007bbb3) blid2_tripm_pane_t2

0xc452,	// (0x0007bbc5) blid2_tripm_pane_t3_ParamLimits

0xc452,	// (0x0007bbc5) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0007f275) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0007f275) blid2_tripm_pane_t

0xc484,	// (0x0007bbf7) cell_blid2_satellite_pane_ParamLimits

0xc484,	// (0x0007bbf7) cell_blid2_satellite_pane

0xc49e,	// (0x0007bc11) cell_blid2_satellite_pane_g1

0xe3f8,	// (0x0007db6b) cell_blid2_satellite_pane_t1

0x32ee,	// (0x00072a61) blid2_speed_pane_g1

0xe406,	// (0x0007db79) blid2_speed_pane_t1

0xe414,	// (0x0007db87) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0007f27e) blid2_speed_pane_t

0x32ee,	// (0x00072a61) blid2_navig_ring_pane_g1

0xc4a7,	// (0x0007bc1a) blid2_navig_ring_pane_g2

0xc4af,	// (0x0007bc22) blid2_navig_ring_pane_g3

0xc4b7,	// (0x0007bc2a) blid2_navig_ring_pane_g4

0xc4bf,	// (0x0007bc32) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0007f283) blid2_navig_ring_pane_g

0xeb79,	// (0x0007e2ec) bg_popup_window_pane_cp011

0xe422,	// (0x0007db95) popup_blid2_search_window_g1

0xe42a,	// (0x0007db9d) popup_blid2_search_window_t1

0xe438,	// (0x0007dbab) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0007f28e) popup_blid2_search_window_t

0x1169,	// (0x000708dc) main_browser_pane_g1

0x0e5c,	// (0x000705cf) main_browser_pane_ParamLimits

0x2edd,	// (0x00072650) bg_button_pane_cp011_ParamLimits

0xb667,	// (0x0007adda) cell_vitu2_function_pane_g1_ParamLimits

0x2ecf,	// (0x00072642) bg_popup_sub_pane_cp22_ParamLimits

0x539d,	// (0x00074b10) input_focus_pane_cp08_ParamLimits

0xbf11,	// (0x0007b684) popup_vitu2_query_button_pane_ParamLimits

0xbf11,	// (0x0007b684) popup_vitu2_query_button_pane

0x53b4,	// (0x00074b27) popup_vitu2_query_input_button_pane

0xe0c2,	// (0x0007d835) popup_vitu2_query_window_g1_ParamLimits

0x53be,	// (0x00074b31) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0007f18f) popup_vitu2_query_window_g_ParamLimits

0xeb79,	// (0x0007e2ec) bg_button_pane_cp026

0xc4c7,	// (0x0007bc3a) popup_vitu2_query_input_button_pane_g1

0xeb79,	// (0x0007e2ec) bg_button_pane_cp025

0xe446,	// (0x0007dbb9) popup_vitu2_query_button_pane_t1

0x9db8,	// (0x0007952b) main_mp3_pane_t6

0x9dc8,	// (0x0007953b) popup_slider_window_cp01

0xb2d5,	// (0x0007aa48) cam4_battery_pane

0xb3b5,	// (0x0007ab28) cam4_battery_pane_cp02

0xc218,	// (0x0007b98b) cam4_battery_pane_cp01

0xc218,	// (0x0007b98b) cam4_battery_pane_cp03

0x32ee,	// (0x00072a61) cam4_battery_pane_g1

0xe454,	// (0x0007dbc7) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0007f293) cam4_battery_pane_g

0x31b1,	// (0x00072924) popup_blid_sat_info2_window_t11

0x18c4,	// (0x00071037) aid_size_touch_mv_arrow_left_ParamLimits

0x18ed,	// (0x00071060) aid_size_touch_mv_arrow_right_ParamLimits

0x1959,	// (0x000710cc) navi_pane_g1_ParamLimits

0x1965,	// (0x000710d8) navi_pane_g2_ParamLimits

0x1993,	// (0x00071106) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0007eb58) navi_pane_g_ParamLimits

0x869d,	// (0x00077e10) navi_pane_mv_t1_ParamLimits

0xa8ad,	// (0x0007a020) grid_imed_effect_pane_ParamLimits

0x718c,	// (0x000768ff) aid_placing_vt_slider_lsc

0x10b8,	// (0x0007082b) aid_placing_vt_slider_prt

0x2edd,	// (0x00072650) bg_tb_trans_pane_cp01_ParamLimits

0x3471,	// (0x00072be4) popup_image_details_window_g1_ParamLimits

0x3484,	// (0x00072bf7) popup_image_details_window_g2_ParamLimits

0x3499,	// (0x00072c0c) popup_image_details_window_g3_ParamLimits

0x3499,	// (0x00072c0c) popup_image_details_window_g3

0xf718,	// (0x0007ee8b) popup_image_details_window_g_ParamLimits

0x34ad,	// (0x00072c20) popup_image_details_window_t1_ParamLimits

0x34bf,	// (0x00072c32) popup_image_details_window_t2_ParamLimits

0x34d8,	// (0x00072c4b) popup_image_details_window_t3_ParamLimits

0x34ec,	// (0x00072c5f) popup_image_details_window_t4_ParamLimits

0x3507,	// (0x00072c7a) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0007ee92) popup_image_details_window_t_ParamLimits

0xc13c,	// (0x0007b8af) cl_header_name_pane_ParamLimits

0xc13c,	// (0x0007b8af) cl_header_name_pane

0xc4cf,	// (0x0007bc42) cl_header_name_pane_t1_ParamLimits

0xc4cf,	// (0x0007bc42) cl_header_name_pane_t1

0xc4e6,	// (0x0007bc59) cl_header_name_pane_t2_ParamLimits

0xc4e6,	// (0x0007bc59) cl_header_name_pane_t2

0xc510,	// (0x0007bc83) cl_header_name_pane_t3_ParamLimits

0xc510,	// (0x0007bc83) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0007f298) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0007f298) cl_header_name_pane_t

0x1a22,	// (0x00071195) navi_pane_mv_g2_ParamLimits

0x3d7f,	// (0x000734f2) field_vitu2_entry_pane_g1_ParamLimits

0x3d8b,	// (0x000734fe) field_vitu2_entry_pane_g2_ParamLimits

0x3d97,	// (0x0007350a) field_vitu2_entry_pane_g3_ParamLimits

0x3d97,	// (0x0007350a) field_vitu2_entry_pane_g3

0xf91b,	// (0x0007f08e) field_vitu2_entry_pane_g_ParamLimits

0xb5fb,	// (0x0007ad6e) cell_vitu2_itu_pane_g1_ParamLimits

0xb60d,	// (0x0007ad80) cell_vitu2_itu_pane_g2_ParamLimits

0xb60d,	// (0x0007ad80) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0007f09a) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0007f09a) cell_vitu2_itu_pane_g

0x2edd,	// (0x00072650) bg_vkb2_func_pane_cp05_ParamLimits

0x2edd,	// (0x00072650) bg_vkb2_func_pane_cp05

0x2edd,	// (0x00072650) bg_vkb2_func_pane_cp03

0x2edd,	// (0x00072650) bg_vkb2_func_pane_cp04

0x2edd,	// (0x00072650) bg_vkb2_func_pane_cp10_ParamLimits

0x2edd,	// (0x00072650) bg_vkb2_func_pane_cp10

0x5573,	// (0x00074ce6) bg_vkb2_func_pane_cp08

0xc0e6,	// (0x0007b859) bg_vkb2_func_pane_cp06

0xc0f4,	// (0x0007b867) bg_vkb2_func_pane_cp07

0xe34c,	// (0x0007dabf) bg_vkb2_func_pane_cp11_ParamLimits

0xe34c,	// (0x0007dabf) bg_vkb2_func_pane_cp11

0xe361,	// (0x0007dad4) bg_vkb2_func_pane_cp12_ParamLimits

0xe361,	// (0x0007dad4) bg_vkb2_func_pane_cp12

0xeb79,	// (0x0007e2ec) bg_vkb2_func_pane_cp09

0x3dd4,	// (0x00073547) bg_vkb2_func_pane_g1

0x127a,	// (0x000709ed) bg_vkb2_func_pane_g2

0x3ddc,	// (0x0007354f) bg_vkb2_func_pane_g3

0x3de4,	// (0x00073557) bg_vkb2_func_pane_g4

0x4028,	// (0x0007379b) bg_vkb2_func_pane_g5

0x3dfc,	// (0x0007356f) bg_vkb2_func_pane_g6

0x3e04,	// (0x00073577) bg_vkb2_func_pane_g7

0x3df4,	// (0x00073567) bg_vkb2_func_pane_g8

0x125a,	// (0x000709cd) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0007f29f) bg_vkb2_func_pane_g

0xc41e,	// (0x0007bb91) blid2_tripm_pane_g6_ParamLimits

0xc41e,	// (0x0007bb91) blid2_tripm_pane_g6

0x3c21,	// (0x00073394) mp4_progress_pane_g1

0xc478,	// (0x0007bbeb) blid2_tripm_values_pane_ParamLimits

0xc478,	// (0x0007bbeb) blid2_tripm_values_pane

0xc535,	// (0x0007bca8) blid2_tripm_values_pane_t1

0xc543,	// (0x0007bcb6) blid2_tripm_values_pane_t2

0xc551,	// (0x0007bcc4) blid2_tripm_values_pane_t3

0xc55f,	// (0x0007bcd2) blid2_tripm_values_pane_t4

0xc56d,	// (0x0007bce0) blid2_tripm_values_pane_t5

0xc57b,	// (0x0007bcee) blid2_tripm_values_pane_t6

0xc589,	// (0x0007bcfc) blid2_tripm_values_pane_t7

0xc597,	// (0x0007bd0a) blid2_tripm_values_pane_t8

0xc5a5,	// (0x0007bd18) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0007f2b2) blid2_tripm_values_pane_t

0x71cc,	// (0x0007693f) call_video_pane_t1_ParamLimits

0x71ed,	// (0x00076960) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0007e9e1) call_video_pane_t_ParamLimits

0x5157,	// (0x000748ca) msg_header_pane_g1_ParamLimits

0x1bfc,	// (0x0007136f) msg_header_pane_g2_ParamLimits

0x1bfc,	// (0x0007136f) msg_header_pane_g2

0x0001,

0xf488,	// (0x0007ebfb) msg_header_pane_g_ParamLimits

0xf488,	// (0x0007ebfb) msg_header_pane_g

0x0e5c,	// (0x000705cf) main_clock2_pane_ParamLimits

0xa645,	// (0x00079db8) grid_clock2_toolbar_pane_ParamLimits

0xa645,	// (0x00079db8) grid_clock2_toolbar_pane

0xa645,	// (0x00079db8) listscroll_clock2_pane_ParamLimits

0xa645,	// (0x00079db8) listscroll_clock2_pane

0xa6eb,	// (0x00079e5e) main_clock2_pane_t3_ParamLimits

0xa6eb,	// (0x00079e5e) main_clock2_pane_t3

0xa6fd,	// (0x00079e70) main_clock2_pane_t4_ParamLimits

0xa6fd,	// (0x00079e70) main_clock2_pane_t4

0xe45e,	// (0x0007dbd1) cell_clock2_toolbar_pane

0xe466,	// (0x0007dbd9) cell_clock2_toolbar_pane_cp01

0xe466,	// (0x0007dbd9) cell_clock2_toolbar_pane_cp02

0xe46e,	// (0x0007dbe1) cell_clock2_toolbar_pane_cp03

0xe476,	// (0x0007dbe9) list_clock2_pane

0x183a,	// (0x00070fad) scroll_pane_cp10

0xe47e,	// (0x0007dbf1) list_single_clock2_pane_ParamLimits

0xe47e,	// (0x0007dbf1) list_single_clock2_pane

0x1021,	// (0x00070794) list_highlight_pane_cp08

0xe48b,	// (0x0007dbfe) list_single_clock2_pane_t1

0xe499,	// (0x0007dc0c) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0007f2c5) list_single_clock2_pane_t

0xeb79,	// (0x0007e2ec) bg_button_pane_cp10

0xe4a7,	// (0x0007dc1a) cell_clock2_toolbar_pane_g1

0x8b89,	// (0x000782fc) aid_main_viewer_pane_g1_ParamLimits

0x8b89,	// (0x000782fc) aid_main_viewer_pane_g1

0x8b95,	// (0x00078308) aid_main_viewer_pane_g2_ParamLimits

0x8b95,	// (0x00078308) aid_main_viewer_pane_g2

0x8ba1,	// (0x00078314) aid_main_viewer_pane_g3_ParamLimits

0x8ba1,	// (0x00078314) aid_main_viewer_pane_g3

0x8bb2,	// (0x00078325) aid_main_viewer_pane_g4_ParamLimits

0x8bb2,	// (0x00078325) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0007ec0c) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0007ec0c) aid_main_viewer_pane_g

0x9332,	// (0x00078aa5) main_calc_pane_ParamLimits

0x933f,	// (0x00078ab2) main_dialer2_pane_ParamLimits

0xeb79,	// (0x0007e2ec) main_cam6_pane

0xeb79,	// (0x0007e2ec) main_vid6_pane

0xa651,	// (0x00079dc4) listscroll_gen_pane_cp06_ParamLimits

0xa651,	// (0x00079dc4) listscroll_gen_pane_cp06

0xa70f,	// (0x00079e82) main_clock2_pane_t5_ParamLimits

0xa70f,	// (0x00079e82) main_clock2_pane_t5

0xa758,	// (0x00079ecb) aid_call2_pane_cp10_ParamLimits

0xa76a,	// (0x00079edd) aid_call_pane_cp10_ParamLimits

0x18b8,	// (0x0007102b) popup_clock_analogue_window_cp10_g1_ParamLimits

0x18b8,	// (0x0007102b) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa77c,	// (0x00079eef) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa77c,	// (0x00079eef) popup_clock_analogue_window_cp10_g4_ParamLimits

0x18b8,	// (0x0007102b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0007ef47) popup_clock_analogue_window_cp10_g_ParamLimits

0xa78e,	// (0x00079f01) popup_clock_analogue_window_cp10_t1_ParamLimits

0xaf54,	// (0x0007a6c7) cell_dialer2_keypad_pane_g2_ParamLimits

0xaf54,	// (0x0007a6c7) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0007f02d) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0007f02d) cell_dialer2_keypad_pane_g

0xaf70,	// (0x0007a6e3) cell_dialer2_keypad_pane_t1

0xb932,	// (0x0007b0a5) main_cset_text2_pane_ParamLimits

0xb932,	// (0x0007b0a5) main_cset_text2_pane

0xe2a2,	// (0x0007da15) area_vitu2_query_pane_g1_ParamLimits

0x549e,	// (0x00074c11) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0007f1e2) area_vitu2_query_pane_g_ParamLimits

0x554f,	// (0x00074cc2) area_vitu2_query_pane_t7_ParamLimits

0x554f,	// (0x00074cc2) area_vitu2_query_pane_t7

0xc0e6,	// (0x0007b859) bg_button_pane_cp018_ParamLimits

0xc0f4,	// (0x0007b867) bg_button_pane_cp021_ParamLimits

0x5573,	// (0x00074ce6) bg_button_pane_cp022_ParamLimits

0x5573,	// (0x00074ce6) bg_vkb2_func_pane_cp08_ParamLimits

0xc0e6,	// (0x0007b859) bg_vkb2_func_pane_cp06_ParamLimits

0xc0f4,	// (0x0007b867) bg_vkb2_func_pane_cp07_ParamLimits

0x5584,	// (0x00074cf7) input_focus_pane_cp09_ParamLimits

0xc5b3,	// (0x0007bd26) cam6_autofocus_pane_ParamLimits

0xc5b3,	// (0x0007bd26) cam6_autofocus_pane

0xc5d5,	// (0x0007bd48) cam6_image_uncrop_pane_ParamLimits

0xc5d5,	// (0x0007bd48) cam6_image_uncrop_pane

0xc602,	// (0x0007bd75) cam6_indi_pane_ParamLimits

0xc602,	// (0x0007bd75) cam6_indi_pane

0xc61c,	// (0x0007bd8f) cam6_mode_pane_ParamLimits

0xc61c,	// (0x0007bd8f) cam6_mode_pane

0xc630,	// (0x0007bda3) cam6_timer_pane_ParamLimits

0xc630,	// (0x0007bda3) cam6_timer_pane

0xc63c,	// (0x0007bdaf) cam6_zoom_pane_ParamLimits

0xc63c,	// (0x0007bdaf) cam6_zoom_pane

0xc654,	// (0x0007bdc7) cam6_mode_pane_g1_ParamLimits

0xc654,	// (0x0007bdc7) cam6_mode_pane_g1

0xc660,	// (0x0007bdd3) cam6_mode_pane_g2_ParamLimits

0xc660,	// (0x0007bdd3) cam6_mode_pane_g2

0xc66c,	// (0x0007bddf) cam6_mode_pane_g3_ParamLimits

0xc66c,	// (0x0007bddf) cam6_mode_pane_g3

0xc678,	// (0x0007bdeb) cam6_mode_pane_g4_ParamLimits

0xc678,	// (0x0007bdeb) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0007f2ca) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0007f2ca) cam6_mode_pane_g

0xe073,	// (0x0007d7e6) bg_tb_trans_pane_cp08_ParamLimits

0xe073,	// (0x0007d7e6) bg_tb_trans_pane_cp08

0xe4af,	// (0x0007dc22) cam6_battery_pane_ParamLimits

0xe4af,	// (0x0007dc22) cam6_battery_pane

0xe4c5,	// (0x0007dc38) cam6_indi_pane_g1_ParamLimits

0xe4c5,	// (0x0007dc38) cam6_indi_pane_g1

0xe4d7,	// (0x0007dc4a) cam6_indi_pane_g2_ParamLimits

0xe4d7,	// (0x0007dc4a) cam6_indi_pane_g2

0xe4e9,	// (0x0007dc5c) cam6_indi_pane_g3_ParamLimits

0xe4e9,	// (0x0007dc5c) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0007f2d3) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0007f2d3) cam6_indi_pane_g

0xe4fb,	// (0x0007dc6e) cam6_indi_pane_t1_ParamLimits

0xe4fb,	// (0x0007dc6e) cam6_indi_pane_t1

0xb42d,	// (0x0007aba0) cam6_autofocus_pane_g1

0xb435,	// (0x0007aba8) cam6_autofocus_pane_g2

0xb43d,	// (0x0007abb0) cam6_autofocus_pane_g3

0xb445,	// (0x0007abb8) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0007f2da) cam6_autofocus_pane_g

0xe521,	// (0x0007dc94) cam6_timer_pane_g1

0xe529,	// (0x0007dc9c) cam6_timer_pane_t1

0xe537,	// (0x0007dcaa) cam6_zoom_cont_pane

0xe53f,	// (0x0007dcb2) cam6_zoom_pane_g1

0xe547,	// (0x0007dcba) cam6_zoom_pane_g2

0xc684,	// (0x0007bdf7) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0007f2e3) cam6_zoom_pane_g

0x32ee,	// (0x00072a61) cam6_battery_pane_g1

0x32ee,	// (0x00072a61) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0007ee4f) cam6_battery_pane_g

0xe54f,	// (0x0007dcc2) cam6_zoom_cont_pane_g1

0xe558,	// (0x0007dccb) cam6_zoom_cont_pane_g2

0xe561,	// (0x0007dcd4) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0007f2ea) cam6_zoom_cont_pane_g

0xc6a1,	// (0x0007be14) cam6_mode_pane_cp_ParamLimits

0xc6a1,	// (0x0007be14) cam6_mode_pane_cp

0xc63c,	// (0x0007bdaf) cam6_zoom_pane_cp_ParamLimits

0xc63c,	// (0x0007bdaf) cam6_zoom_pane_cp

0xc6b5,	// (0x0007be28) vid6_image_uncrop_cif_pane_ParamLimits

0xc6b5,	// (0x0007be28) vid6_image_uncrop_cif_pane

0xc6e1,	// (0x0007be54) vid6_image_uncrop_nhd_pane_ParamLimits

0xc6e1,	// (0x0007be54) vid6_image_uncrop_nhd_pane

0xc5d5,	// (0x0007bd48) vid6_image_uncrop_vga_pane_ParamLimits

0xc5d5,	// (0x0007bd48) vid6_image_uncrop_vga_pane

0xc6fe,	// (0x0007be71) vid6_image_uncrop_wvga_pane_ParamLimits

0xc6fe,	// (0x0007be71) vid6_image_uncrop_wvga_pane

0xc71b,	// (0x0007be8e) vid6_indi_pane_ParamLimits

0xc71b,	// (0x0007be8e) vid6_indi_pane

0xe073,	// (0x0007d7e6) bg_tb_trans_pane_cp09_ParamLimits

0xe073,	// (0x0007d7e6) bg_tb_trans_pane_cp09

0xe579,	// (0x0007dcec) cam6_battery_pane_cp_ParamLimits

0xe579,	// (0x0007dcec) cam6_battery_pane_cp

0xe585,	// (0x0007dcf8) vid6_indi_pane_g1_ParamLimits

0xe585,	// (0x0007dcf8) vid6_indi_pane_g1

0xe597,	// (0x0007dd0a) vid6_indi_pane_g2_ParamLimits

0xe597,	// (0x0007dd0a) vid6_indi_pane_g2

0xe5a9,	// (0x0007dd1c) vid6_indi_pane_g3_ParamLimits

0xe5a9,	// (0x0007dd1c) vid6_indi_pane_g3

0xe5be,	// (0x0007dd31) vid6_indi_pane_g4_ParamLimits

0xe5be,	// (0x0007dd31) vid6_indi_pane_g4

0xe5d3,	// (0x0007dd46) vid6_indi_pane_g5_ParamLimits

0xe5d3,	// (0x0007dd46) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0007f2f1) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0007f2f1) vid6_indi_pane_g

0xe5ed,	// (0x0007dd60) vid6_indi_pane_t1_ParamLimits

0xe5ed,	// (0x0007dd60) vid6_indi_pane_t1

0xe603,	// (0x0007dd76) vid6_indi_pane_t2_ParamLimits

0xe603,	// (0x0007dd76) vid6_indi_pane_t2

0xe62b,	// (0x0007dd9e) vid6_indi_pane_t3_ParamLimits

0xe62b,	// (0x0007dd9e) vid6_indi_pane_t3

0xe653,	// (0x0007ddc6) vid6_indi_pane_t4_ParamLimits

0xe653,	// (0x0007ddc6) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0007f2fc) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0007f2fc) vid6_indi_pane_t

0xe677,	// (0x0007ddea) wait_bar_pane_cp08

0xc740,	// (0x0007beb3) main_cset_text2_pane_t1_ParamLimits

0xc740,	// (0x0007beb3) main_cset_text2_pane_t1

0xc68c,	// (0x0007bdff) listscroll_gen_pane_cp06_t1_ParamLimits

0xc68c,	// (0x0007bdff) listscroll_gen_pane_cp06_t1

0xeb79,	// (0x0007e2ec) main_cam6_set_pane

0x3551,	// (0x00072cc4) bg_tb_trans_pane_cp06_ParamLimits

0xb2dd,	// (0x0007aa50) cam4_indicators_pane_g1_ParamLimits

0xb2ee,	// (0x0007aa61) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0007f06a) cam4_indicators_pane_g_ParamLimits

0xb30c,	// (0x0007aa7f) cam4_indicators_pane_t1_ParamLimits

0x2edd,	// (0x00072650) bg_tb_trans_pane_cp07_ParamLimits

0xb3bf,	// (0x0007ab32) vid4_indicators_pane_g1_ParamLimits

0xb3d3,	// (0x0007ab46) vid4_indicators_pane_g2_ParamLimits

0xb3e7,	// (0x0007ab5a) vid4_indicators_pane_g3_ParamLimits

0xb3f8,	// (0x0007ab6b) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0007f07c) vid4_indicators_pane_g_ParamLimits

0xb416,	// (0x0007ab89) vid4_indicators_pane_t1_ParamLimits

0xc220,	// (0x0007b993) vid4_progress_pane_g1_ParamLimits

0xc230,	// (0x0007b9a3) vid4_progress_pane_g2_ParamLimits

0xc240,	// (0x0007b9b3) vid4_progress_pane_g3_ParamLimits

0xc252,	// (0x0007b9c5) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0007f22d) vid4_progress_pane_g_ParamLimits

0xc26a,	// (0x0007b9dd) vid4_progress_pane_t1_ParamLimits

0xc280,	// (0x0007b9f3) vid4_progress_pane_t2_ParamLimits

0xc295,	// (0x0007ba08) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0007f238) vid4_progress_pane_t_ParamLimits

0xc2aa,	// (0x0007ba1d) wait_bar_pane_cp07_ParamLimits

0xc773,	// (0x0007bee6) main_cam6_set_pane_g2_ParamLimits

0xc773,	// (0x0007bee6) main_cam6_set_pane_g2

0xc77f,	// (0x0007bef2) main_cset6_listscroll_pane_ParamLimits

0xc77f,	// (0x0007bef2) main_cset6_listscroll_pane

0xc7aa,	// (0x0007bf1d) main_cset6_slider_pane_ParamLimits

0xc7aa,	// (0x0007bf1d) main_cset6_slider_pane

0xc7b6,	// (0x0007bf29) main_cset6_text2_pane_ParamLimits

0xc7b6,	// (0x0007bf29) main_cset6_text2_pane

0xe686,	// (0x0007ddf9) main_cset6_text_pane

0xe68e,	// (0x0007de01) main_cset_list_pane_copy1_ParamLimits

0xe68e,	// (0x0007de01) main_cset_list_pane_copy1

0xe69e,	// (0x0007de11) scroll_pane_cp028_copy1

0xc7c9,	// (0x0007bf3c) cset_list_set_pane_copy1

0xc7dc,	// (0x0007bf4f) aid_position_infowindow_above_copy1

0xc7e4,	// (0x0007bf57) aid_position_infowindow_below_copy1

0xc7ec,	// (0x0007bf5f) cset_list_set_pane_g1_copy1

0x531d,	// (0x00074a90) cset_list_set_pane_g3_copy1_ParamLimits

0x531d,	// (0x00074a90) cset_list_set_pane_g3_copy1

0x532c,	// (0x00074a9f) cset_list_set_pane_t1_copy1_ParamLimits

0x532c,	// (0x00074a9f) cset_list_set_pane_t1_copy1

0x2edd,	// (0x00072650) list_highlight_pane_cp021_copy1_ParamLimits

0x2edd,	// (0x00072650) list_highlight_pane_cp021_copy1

0xe6a7,	// (0x0007de1a) cset6_slider_pane_ParamLimits

0xe6a7,	// (0x0007de1a) cset6_slider_pane

0xe6d3,	// (0x0007de46) main_cset6_slider_pane_g1_ParamLimits

0xe6d3,	// (0x0007de46) main_cset6_slider_pane_g1

0xc7f4,	// (0x0007bf67) main_cset6_slider_pane_g2_ParamLimits

0xc7f4,	// (0x0007bf67) main_cset6_slider_pane_g2

0xe6fb,	// (0x0007de6e) main_cset6_slider_pane_g3_ParamLimits

0xe6fb,	// (0x0007de6e) main_cset6_slider_pane_g3

0xc81c,	// (0x0007bf8f) main_cset6_slider_pane_g4_ParamLimits

0xc81c,	// (0x0007bf8f) main_cset6_slider_pane_g4

0xc828,	// (0x0007bf9b) main_cset6_slider_pane_g5_ParamLimits

0xc828,	// (0x0007bf9b) main_cset6_slider_pane_g5

0x3f03,	// (0x00073676) main_cset6_slider_pane_g7_ParamLimits

0x3f03,	// (0x00073676) main_cset6_slider_pane_g7

0x3f0f,	// (0x00073682) main_cset6_slider_pane_g8_ParamLimits

0x3f0f,	// (0x00073682) main_cset6_slider_pane_g8

0xc836,	// (0x0007bfa9) main_cset6_slider_pane_g9_ParamLimits

0xc836,	// (0x0007bfa9) main_cset6_slider_pane_g9

0xc842,	// (0x0007bfb5) main_cset6_slider_pane_g10_ParamLimits

0xc842,	// (0x0007bfb5) main_cset6_slider_pane_g10

0xc84e,	// (0x0007bfc1) main_cset6_slider_pane_g11_ParamLimits

0xc84e,	// (0x0007bfc1) main_cset6_slider_pane_g11

0xc85a,	// (0x0007bfcd) main_cset6_slider_pane_g12_ParamLimits

0xc85a,	// (0x0007bfcd) main_cset6_slider_pane_g12

0xc866,	// (0x0007bfd9) main_cset6_slider_pane_g13_ParamLimits

0xc866,	// (0x0007bfd9) main_cset6_slider_pane_g13

0xc872,	// (0x0007bfe5) main_cset6_slider_pane_g14_ParamLimits

0xc872,	// (0x0007bfe5) main_cset6_slider_pane_g14

0xc87e,	// (0x0007bff1) main_cset6_slider_pane_g15_ParamLimits

0xc87e,	// (0x0007bff1) main_cset6_slider_pane_g15

0xc896,	// (0x0007c009) main_cset6_slider_pane_g16_ParamLimits

0xc896,	// (0x0007c009) main_cset6_slider_pane_g16

0xc8a4,	// (0x0007c017) main_cset6_slider_pane_g17_ParamLimits

0xc8a4,	// (0x0007c017) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0007f305) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0007f305) main_cset6_slider_pane_g

0xe707,	// (0x0007de7a) main_cset6_slider_pane_t1_ParamLimits

0xe707,	// (0x0007de7a) main_cset6_slider_pane_t1

0xc8ca,	// (0x0007c03d) main_cset6_slider_pane_t2_ParamLimits

0xc8ca,	// (0x0007c03d) main_cset6_slider_pane_t2

0xc8f5,	// (0x0007c068) main_cset6_slider_pane_t3_ParamLimits

0xc8f5,	// (0x0007c068) main_cset6_slider_pane_t3

0xc920,	// (0x0007c093) main_cset6_slider_pane_t4_ParamLimits

0xc920,	// (0x0007c093) main_cset6_slider_pane_t4

0xc94b,	// (0x0007c0be) main_cset6_slider_pane_t5_ParamLimits

0xc94b,	// (0x0007c0be) main_cset6_slider_pane_t5

0xe748,	// (0x0007debb) main_cset6_slider_pane_t7_ParamLimits

0xe748,	// (0x0007debb) main_cset6_slider_pane_t7

0xc978,	// (0x0007c0eb) main_cset6_slider_pane_t8_ParamLimits

0xc978,	// (0x0007c0eb) main_cset6_slider_pane_t8

0xc99c,	// (0x0007c10f) main_cset6_slider_pane_t9_ParamLimits

0xc99c,	// (0x0007c10f) main_cset6_slider_pane_t9

0xc9c0,	// (0x0007c133) main_cset6_slider_pane_t10_ParamLimits

0xc9c0,	// (0x0007c133) main_cset6_slider_pane_t10

0xc9e4,	// (0x0007c157) main_cset6_slider_pane_t11_ParamLimits

0xc9e4,	// (0x0007c157) main_cset6_slider_pane_t11

0xe77e,	// (0x0007def1) main_cset6_slider_pane_t14_ParamLimits

0xe77e,	// (0x0007def1) main_cset6_slider_pane_t14

0xe7b7,	// (0x0007df2a) main_cset6_slider_pane_t15_ParamLimits

0xe7b7,	// (0x0007df2a) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0007f32a) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0007f32a) main_cset6_slider_pane_t

0x4030,	// (0x000737a3) cset_slider_pane_g1_copy1

0x4039,	// (0x000737ac) cset_slider_pane_g2_copy1

0x4042,	// (0x000737b5) cset_slider_pane_g3_copy1

0xeb79,	// (0x0007e2ec) bg_popup_sub_pane_cp011_copy1

0xe7f0,	// (0x0007df63) main_cset_text_pane_g1_copy1

0xe0d6,	// (0x0007d849) main_cset_text_pane_t1_copy1

0xe0e4,	// (0x0007d857) main_cset_text_pane_t2_copy1

0xe0f2,	// (0x0007d865) main_cset_text_pane_t3_copy1

0xe100,	// (0x0007d873) main_cset_text_pane_t4_copy1

0xe10e,	// (0x0007d881) main_cset_text_pane_t5_copy1

0xe7f8,	// (0x0007df6b) main_cset_text_pane_t6_copy1

0xe806,	// (0x0007df79) main_cset_text_pane_t7_copy1

0xca23,	// (0x0007c196) main_cset_text2_pane_t1_copy1

0x2edd,	// (0x00072650) main_ncimui_pane

0x9390,	// (0x00078b03) popup_query_ncimui_window_ParamLimits

0x9390,	// (0x00078b03) popup_query_ncimui_window

0x9f21,	// (0x00079694) field_cale_ev2_pane_g4_ParamLimits

0x9f21,	// (0x00079694) field_cale_ev2_pane_g4

0xac74,	// (0x0007a3e7) cell_video_dialer_keypad_pane_g2_ParamLimits

0xac74,	// (0x0007a3e7) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0007f008) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0007f008) cell_video_dialer_keypad_pane_g

0xac8c,	// (0x0007a3ff) cell_video_dialer_keypad_pane_t1

0xeb79,	// (0x0007e2ec) bg_popup_window_pane_cp012

0x1707,	// (0x00070e7a) heading_pane_cp06

0xe83e,	// (0x0007dfb1) ncim_query_content_pane

0xeb79,	// (0x0007e2ec) bg_popup_heading_pane_cp01

0xe846,	// (0x0007dfb9) ncim_heading_pane_t1

0xe854,	// (0x0007dfc7) ncim_indicator_popup_pane

0xe866,	// (0x0007dfd9) ncim_query_button_pane

0xe87a,	// (0x0007dfed) ncim_query_content_pane_t1

0xe88c,	// (0x0007dfff) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0007f36e) ncim_query_content_pane_t

0xe8c6,	// (0x0007e039) ncim_query_list_pane

0xe8d8,	// (0x0007e04b) ncim_query_popup_pane

0xe854,	// (0x0007dfc7) ncim_indicator_popup_pane_ParamLimits

0xcb76,	// (0x0007c2e9) ncim_query_content_pane_g1_ParamLimits

0xcb76,	// (0x0007c2e9) ncim_query_content_pane_g1

0xe87a,	// (0x0007dfed) ncim_query_content_pane_t1_ParamLimits

0xe88c,	// (0x0007dfff) ncim_query_content_pane_t2_ParamLimits

0xcb82,	// (0x0007c2f5) ncim_query_content_pane_t3_ParamLimits

0xcb82,	// (0x0007c2f5) ncim_query_content_pane_t3

0xcb9f,	// (0x0007c312) ncim_query_content_pane_t4_ParamLimits

0xcb9f,	// (0x0007c312) ncim_query_content_pane_t4

0xcbbc,	// (0x0007c32f) ncim_query_content_pane_t5_ParamLimits

0xcbbc,	// (0x0007c32f) ncim_query_content_pane_t5

0xe89e,	// (0x0007e011) ncim_query_content_pane_t6_ParamLimits

0xe89e,	// (0x0007e011) ncim_query_content_pane_t6

0xfbfb,	// (0x0007f36e) ncim_query_content_pane_t_ParamLimits

0xe8c6,	// (0x0007e039) ncim_query_list_pane_ParamLimits

0xe8d8,	// (0x0007e04b) ncim_query_popup_pane_ParamLimits

0xe8ec,	// (0x0007e05f) wait_bar_pane_cp04

0xeb79,	// (0x0007e2ec) input_focus_pane_cp011

0xe8f4,	// (0x0007e067) ncim_query_popup_pane_t1

0xe902,	// (0x0007e075) ncim_list_query_list_pane_ParamLimits

0xe902,	// (0x0007e075) ncim_list_query_list_pane

0xeb79,	// (0x0007e2ec) bg_button_pane_cp027

0xe90f,	// (0x0007e082) ncim_query_button_pane_g1

0xeb79,	// (0x0007e2ec) list_highlight_pane_cp012

0xe919,	// (0x0007e08c) ncim_list_query_list_pane_g1

0xe921,	// (0x0007e094) ncim_list_query_list_pane_t1

0xb2fd,	// (0x0007aa70) cam4_indicators_pane_g3_ParamLimits

0xb2fd,	// (0x0007aa70) cam4_indicators_pane_g3

0xb404,	// (0x0007ab77) vid4_indicators_pane_g5_ParamLimits

0xb404,	// (0x0007ab77) vid4_indicators_pane_g5

0xc25e,	// (0x0007b9d1) vid4_progress_pane_g5_ParamLimits

0xc25e,	// (0x0007b9d1) vid4_progress_pane_g5

0xca62,	// (0x0007c1d5) main_ncimui_pane_g1

0xcaca,	// (0x0007c23d) ncimui_group_query_pane_ParamLimits

0xcaca,	// (0x0007c23d) ncimui_group_query_pane

0xcb12,	// (0x0007c285) ncimui_list_pane_ParamLimits

0xcb12,	// (0x0007c285) ncimui_list_pane

0xcb39,	// (0x0007c2ac) ncimui_text_pane_ParamLimits

0xcb39,	// (0x0007c2ac) ncimui_text_pane

0xcbd9,	// (0x0007c34c) ncimui_text_pane_t1_ParamLimits

0xcbd9,	// (0x0007c34c) ncimui_text_pane_t1

0xe92f,	// (0x0007e0a2) ncimui_list_single_graphic_pane_ParamLimits

0xe92f,	// (0x0007e0a2) ncimui_list_single_graphic_pane

0xcbf8,	// (0x0007c36b) ncimui_query_pane_ParamLimits

0xcbf8,	// (0x0007c36b) ncimui_query_pane

0xeb79,	// (0x0007e2ec) list_highlight_pane_cp013

0xe93f,	// (0x0007e0b2) ncim_list_query_list_pane_t1_copy1

0xe919,	// (0x0007e08c) ncim_list_single_graphic_pane_g1

0xcc0b,	// (0x0007c37e) ncim_query_button_pane_cp01

0xcc17,	// (0x0007c38a) ncim_query_entry_pane_ParamLimits

0xcc17,	// (0x0007c38a) ncim_query_entry_pane

0xcc2a,	// (0x0007c39d) ncimui_query_pane_g1

0xcc36,	// (0x0007c3a9) ncimui_query_pane_t1_ParamLimits

0xcc36,	// (0x0007c3a9) ncimui_query_pane_t1

0x2edd,	// (0x00072650) input_focus_pane_cp012

0xe94d,	// (0x0007e0c0) ncim_query_entry_pane_t1

0x0e5c,	// (0x000705cf) main_im_pane_ParamLimits

0x2edd,	// (0x00072650) main_mobtv_pane_ParamLimits

0x2edd,	// (0x00072650) main_mobtv_pane

0xc8b2,	// (0x0007c025) main_cset6_slider_pane_g18_ParamLimits

0xc8b2,	// (0x0007c025) main_cset6_slider_pane_g18

0xc8be,	// (0x0007c031) main_cset6_slider_pane_g19_ParamLimits

0xc8be,	// (0x0007c031) main_cset6_slider_pane_g19

0x3d97,	// (0x0007350a) bg_main_mobtv_pane_ParamLimits

0x3d97,	// (0x0007350a) bg_main_mobtv_pane

0xcc4f,	// (0x0007c3c2) main_mobtv_info_pane

0xcc5a,	// (0x0007c3cd) main_mobtv_loading_pane_ParamLimits

0xcc5a,	// (0x0007c3cd) main_mobtv_loading_pane

0xe95f,	// (0x0007e0d2) main_mobtv_pg_channel_list_pane

0xe969,	// (0x0007e0dc) main_mobtv_pg_hdr_pane

0xcc67,	// (0x0007c3da) main_mobtv_programe_curr_pane_ParamLimits

0xcc67,	// (0x0007c3da) main_mobtv_programe_curr_pane

0xcc74,	// (0x0007c3e7) main_mobtv_programe_next_pane_ParamLimits

0xcc74,	// (0x0007c3e7) main_mobtv_programe_next_pane

0xe972,	// (0x0007e0e5) popup_mobtv_noti_window

0x32ee,	// (0x00072a61) main_tv_pg_hdr_pane_g1

0xe97a,	// (0x0007e0ed) main_tv_pg_hdr_pane_g2

0xe982,	// (0x0007e0f5) main_tv_pg_hdr_pane_g3

0xe98a,	// (0x0007e0fd) main_tv_pg_hdr_pane_g4

0xe992,	// (0x0007e105) main_tv_pg_hdr_pane_g5

0xe99c,	// (0x0007e10f) main_tv_pg_hdr_pane_g6

0xe9a6,	// (0x0007e119) main_tv_pg_hdr_pane_g7

0xe9b0,	// (0x0007e123) main_tv_pg_hdr_pane_g8

0xe9ba,	// (0x0007e12d) main_tv_pg_hdr_pane_g9

0xe9c4,	// (0x0007e137) main_tv_pg_hdr_pane_g10

0xe9ce,	// (0x0007e141) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0007f37b) main_tv_pg_hdr_pane_g

0xe9d8,	// (0x0007e14b) main_tv_pg_hdr_pane_t1

0xe9e6,	// (0x0007e159) main_tv_pg_hdr_pane_t2

0xe9f4,	// (0x0007e167) main_tv_pg_hdr_pane_t3

0xea04,	// (0x0007e177) main_tv_pg_hdr_pane_t4

0xea14,	// (0x0007e187) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0007f392) main_tv_pg_hdr_pane_t

0xea24,	// (0x0007e197) single_mobtv_pg_channel_pane_ParamLimits

0xea24,	// (0x0007e197) single_mobtv_pg_channel_pane

0xea36,	// (0x0007e1a9) single_mobtv_pg_channel_table_pane

0xea3f,	// (0x0007e1b2) single_mobtv_pg_channel_thumb_pane

0xea48,	// (0x0007e1bb) single_tv_pg_channel_pane_g1

0xea51,	// (0x0007e1c4) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0007f39d) single_tv_pg_channel_pane_g

0x3551,	// (0x00072cc4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x3551,	// (0x00072cc4) bg_single_mobtv_pg_channel_thumb_pane

0xea5a,	// (0x0007e1cd) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xea5a,	// (0x0007e1cd) single_mobtv_pg_channel_thumb_pane_g1

0xea68,	// (0x0007e1db) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xea68,	// (0x0007e1db) single_mobtv_pg_channel_thumb_pane_g2

0xea74,	// (0x0007e1e7) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xea74,	// (0x0007e1e7) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0007f3a2) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0007f3a2) single_mobtv_pg_channel_thumb_pane_g

0xea80,	// (0x0007e1f3) single_mobtv_pg_channel_thumb_pane_t1

0xea8e,	// (0x0007e201) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0007f3a9) single_mobtv_pg_channel_thumb_pane_t

0x32ee,	// (0x00072a61) bg_single_mobtv_pg_channel_table_pane_g1

0x32ee,	// (0x00072a61) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0007ee4f) bg_single_mobtv_pg_channel_table_pane_g

0xea9c,	// (0x0007e20f) single_mobtv_pg_channel_table_pane_t1

0xeaaa,	// (0x0007e21d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0007f3ae) single_mobtv_pg_channel_table_pane_t

0xcc89,	// (0x0007c3fc) main_mobtv_info_pane_g1_ParamLimits

0xcc89,	// (0x0007c3fc) main_mobtv_info_pane_g1

0xcca5,	// (0x0007c418) main_mobtv_info_pane_t1_ParamLimits

0xcca5,	// (0x0007c418) main_mobtv_info_pane_t1

0xcd1d,	// (0x0007c490) main_mobtv_info_pane_t2_ParamLimits

0xcd1d,	// (0x0007c490) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0007f3b8) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0007f3b8) main_mobtv_info_pane_t

0xcdac,	// (0x0007c51f) wait_bar_pane_cp05

0xcdbe,	// (0x0007c531) main_mobtv_loading_pane_g1_ParamLimits

0xcdbe,	// (0x0007c531) main_mobtv_loading_pane_g1

0xcdcc,	// (0x0007c53f) main_mobtv_loading_pane_g2_ParamLimits

0xcdcc,	// (0x0007c53f) main_mobtv_loading_pane_g2

0xcdd8,	// (0x0007c54b) main_mobtv_loading_pane_g3_ParamLimits

0xcdd8,	// (0x0007c54b) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0007f3bf) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0007f3bf) main_mobtv_loading_pane_g

0xeab8,	// (0x0007e22b) main_mobtv_loading_pane_t1_ParamLimits

0xeab8,	// (0x0007e22b) main_mobtv_loading_pane_t1

0xead0,	// (0x0007e243) main_mobtv_loading_pane_t2_ParamLimits

0xead0,	// (0x0007e243) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0007f3c6) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0007f3c6) main_mobtv_loading_pane_t

0xcde6,	// (0x0007c559) wait_bar_pane_cp06_ParamLimits

0xcde6,	// (0x0007c559) wait_bar_pane_cp06

0xeaf4,	// (0x0007e267) main_mobtv_programe_curr_pane_t1

0xeb02,	// (0x0007e275) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0007f3cb) main_mobtv_programe_curr_pane_t

0xeb10,	// (0x0007e283) main_mobtv_programe_next_pane_t1

0xeb1e,	// (0x0007e291) main_mobtv_programe_next_pane_t2

0xeb2c,	// (0x0007e29f) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0007f3d0) main_mobtv_programe_next_pane_t

0xeb79,	// (0x0007e2ec) bg_popup_mobtv_noti_window_pane

0xeb3a,	// (0x0007e2ad) popup_mobtv_noti_window_g1

0xeb42,	// (0x0007e2b5) popup_mobtv_noti_window_t1

0xeb50,	// (0x0007e2c3) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0007f3d7) popup_mobtv_noti_window_t

0x32ee,	// (0x00072a61) bg_popup_mobtv_noti_window_pane_g1

0xeb79,	// (0x0007e2ec) sc_clock_pane

0xeb79,	// (0x0007e2ec) main_fs_bigclock_pane

0xc466,	// (0x0007bbd9) blid2_tripm_pane_t4_ParamLimits

0xc466,	// (0x0007bbd9) blid2_tripm_pane_t4

0xcdf2,	// (0x0007c565) sc_clock_pane_g1_ParamLimits

0xcdf2,	// (0x0007c565) sc_clock_pane_g1

0xce00,	// (0x0007c573) sc_clock_pane_t1_ParamLimits

0xce00,	// (0x0007c573) sc_clock_pane_t1

0xce13,	// (0x0007c586) sc_clock_pane_t2_ParamLimits

0xce13,	// (0x0007c586) sc_clock_pane_t2

0xce25,	// (0x0007c598) sc_clock_pane_t3_ParamLimits

0xce25,	// (0x0007c598) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0007f3dc) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0007f3dc) sc_clock_pane_t

0xd757,	// (0x0007ceca) main_fs_bigclock_indicator_pane_ParamLimits

0xd757,	// (0x0007ceca) main_fs_bigclock_indicator_pane

0xcea8,	// (0x0007c61b) main_fs_bigclock_pane_g1_ParamLimits

0xcea8,	// (0x0007c61b) main_fs_bigclock_pane_g1

0xd763,	// (0x0007ced6) main_fs_bigclock_pane_t1_ParamLimits

0xd763,	// (0x0007ced6) main_fs_bigclock_pane_t1

0xd775,	// (0x0007cee8) main_fs_bigclock_pane_t2_ParamLimits

0xd775,	// (0x0007cee8) main_fs_bigclock_pane_t2

0xd789,	// (0x0007cefc) main_fs_bigclock_pane_t3_ParamLimits

0xd789,	// (0x0007cefc) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0007f5e6) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0007f5e6) main_fs_bigclock_pane_t

0x0828,	// (0x0006ff9b) main_fs_bigclock_indicator_pane_g1

0xe86e,	// (0x0007dfe1) ncim_query_content_pane_g2_ParamLimits

0xe86e,	// (0x0007dfe1) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0007f369) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0007f369) ncim_query_content_pane_g

0xce39,	// (0x0007c5ac) sc_clock_pane_t4_ParamLimits

0xce39,	// (0x0007c5ac) sc_clock_pane_t4

0x2edd,	// (0x00072650) main_radioblah_pane

0x3d0a,	// (0x0007347d) cell_call4_button_pane_t1_copy1_ParamLimits

0x3d0a,	// (0x0007347d) cell_call4_button_pane_t1_copy1

0xca7c,	// (0x0007c1ef) main_ncimui_pane_t1_ParamLimits

0xca7c,	// (0x0007c1ef) main_ncimui_pane_t1

0xca96,	// (0x0007c209) main_ncimui_pane_t2_ParamLimits

0xca96,	// (0x0007c209) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0007f362) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0007f362) main_ncimui_pane_t

0x014b,	// (0x0006f8be) main_radioblah_anim_pane_ParamLimits

0x014b,	// (0x0006f8be) main_radioblah_anim_pane

0x015c,	// (0x0006f8cf) main_radioblah_info_pane_ParamLimits

0x015c,	// (0x0006f8cf) main_radioblah_info_pane

0x0170,	// (0x0006f8e3) main_radioblah_pane_t1_ParamLimits

0x0170,	// (0x0006f8e3) main_radioblah_pane_t1

0x018c,	// (0x0006f8ff) main_radioblah_pane_t2_ParamLimits

0x018c,	// (0x0006f8ff) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0007f3fd) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0007f3fd) main_radioblah_pane_t

0xcefe,	// (0x0007c671) main_radioblah_rocker_ctrl_pane_ParamLimits

0xcefe,	// (0x0007c671) main_radioblah_rocker_ctrl_pane

0x01d4,	// (0x0006f947) main_radioblah_info_pane_t1_ParamLimits

0x01d4,	// (0x0006f947) main_radioblah_info_pane_t1

0xcf43,	// (0x0007c6b6) main_radioblah_info_pane_t2_ParamLimits

0xcf43,	// (0x0007c6b6) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0007f406) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0007f406) main_radioblah_info_pane_t

0x32ee,	// (0x00072a61) main_radioblah_rocker_ctrl_pane_g1

0xcff3,	// (0x0007c766) main_radioblah_rocker_ctrl_pane_g2

0xcffb,	// (0x0007c76e) main_radioblah_rocker_ctrl_pane_g3

0xd003,	// (0x0007c776) main_radioblah_rocker_ctrl_pane_g4

0xd00b,	// (0x0007c77e) main_radioblah_rocker_ctrl_pane_g5

0xd013,	// (0x0007c786) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0007f40f) main_radioblah_rocker_ctrl_pane_g

0xca23,	// (0x0007c196) main_cset_text2_pane_t1_copy1_ParamLimits

0xb22b,	// (0x0007a99e) cam4_image_uncrop_qvga_pane

0xb372,	// (0x0007aae5) vid4_image_uncrop_qcif_pane

0xc5f4,	// (0x0007bd67) cam6_image_uncrop_qvga_pane_ParamLimits

0xc5f4,	// (0x0007bd67) cam6_image_uncrop_qvga_pane

0xe569,	// (0x0007dcdc) vid6_image_uncrop_qcif_pane_ParamLimits

0xe569,	// (0x0007dcdc) vid6_image_uncrop_qcif_pane

0xeb79,	// (0x0007e2ec) bg_popup_preview_window_pane_cp03

0xe814,	// (0x0007df87) list_cset_text2_pane

0xe81c,	// (0x0007df8f) main_cset6_text2_pane_g1

0xe824,	// (0x0007df97) main_cset6_text2_pane_t1

0xd01b,	// (0x0007c78e) list_cset_text2_pane_t1_ParamLimits

0xd01b,	// (0x0007c78e) list_cset_text2_pane_t1

0x2edd,	// (0x00072650) main_radioblah_pane_ParamLimits

0xcd98,	// (0x0007c50b) main_mobtv_info_pane_t3_ParamLimits

0xcd98,	// (0x0007c50b) main_mobtv_info_pane_t3

0xceec,	// (0x0007c65f) main_radioblah_pane_g1

0xcf17,	// (0x0007c68a) main_radioblah_info_pane_g1

0xcf98,	// (0x0007c70b) main_radioblah_info_pane_t3_ParamLimits

0xcf98,	// (0x0007c70b) main_radioblah_info_pane_t3

0x81ed,	// (0x00077960) highlight_cell_cale_month_pane_ParamLimits

0x81ed,	// (0x00077960) highlight_cell_cale_month_pane

0xeb79,	// (0x0007e2ec) main_phob_fisheye_pane

0x3695,	// (0x00072e08) scroll_pane_cp0031_ParamLimits

0x3695,	// (0x00072e08) scroll_pane_cp0031

0xe677,	// (0x0007ddea) wait_bar_pane_cp08_ParamLimits

0xc7c9,	// (0x0007bf3c) cset_list_set_pane_copy1_ParamLimits

0x020e,	// (0x0006f981) highlight_cell_cale_month_pane_g1

0xd038,	// (0x0007c7ab) highlight_cell_cale_month_pane_t1

0xe2f6,	// (0x0007da69) list_gen_pane_cp01

0x3eee,	// (0x00073661) scroll_pane_01

0x566f,	// (0x00074de2) list_single_double_fisheye_pane

0x5678,	// (0x00074deb) list_double_fisheye_pane_g1_ParamLimits

0x5678,	// (0x00074deb) list_double_fisheye_pane_g1

0x5684,	// (0x00074df7) list_double_fisheye_pane_g2_ParamLimits

0x5684,	// (0x00074df7) list_double_fisheye_pane_g2

0x5698,	// (0x00074e0b) list_double_fisheye_pane_g3_ParamLimits

0x5698,	// (0x00074e0b) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0007f41c) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0007f41c) list_double_fisheye_pane_g

0x56c1,	// (0x00074e34) list_double_fisheye_pane_t1_ParamLimits

0x56c1,	// (0x00074e34) list_double_fisheye_pane_t1

0x56dc,	// (0x00074e4f) list_double_fisheye_pane_t2_ParamLimits

0x56dc,	// (0x00074e4f) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0007f427) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0007f427) list_double_fisheye_pane_t

0xeb79,	// (0x0007e2ec) main_call5_pane

0xce5f,	// (0x0007c5d2) sc_swipe_pane_ParamLimits

0xce5f,	// (0x0007c5d2) sc_swipe_pane

0xd052,	// (0x0007c7c5) call5_image_pane_ParamLimits

0xd052,	// (0x0007c7c5) call5_image_pane

0xd062,	// (0x0007c7d5) call5_swipe_1_pane_ParamLimits

0xd062,	// (0x0007c7d5) call5_swipe_1_pane

0xd06e,	// (0x0007c7e1) call5_swipe_2_pane_ParamLimits

0xd06e,	// (0x0007c7e1) call5_swipe_2_pane

0xd088,	// (0x0007c7fb) popup_call5_audio_first_window_ParamLimits

0xd088,	// (0x0007c7fb) popup_call5_audio_first_window

0x3551,	// (0x00072cc4) call5_swipe_1_pane_g1_ParamLimits

0x3551,	// (0x00072cc4) call5_swipe_1_pane_g1

0x0216,	// (0x0006f989) call5_swipe_1_pane_g2_ParamLimits

0x0216,	// (0x0006f989) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0007f42c) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0007f42c) call5_swipe_1_pane_g

0x0222,	// (0x0006f995) call5_swipe_1_pane_t1_ParamLimits

0x0222,	// (0x0006f995) call5_swipe_1_pane_t1

0x3551,	// (0x00072cc4) call5_swipe_2_pane_g1_ParamLimits

0x3551,	// (0x00072cc4) call5_swipe_2_pane_g1

0x0237,	// (0x0006f9aa) call5_swipe_2_pane_g2_ParamLimits

0x0237,	// (0x0006f9aa) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0007f431) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0007f431) call5_swipe_2_pane_g

0x0243,	// (0x0006f9b6) call5_swipe_2_pane_t1_ParamLimits

0x0243,	// (0x0006f9b6) call5_swipe_2_pane_t1

0x0258,	// (0x0006f9cb) sc_swipe_pane_g1_ParamLimits

0x0258,	// (0x0006f9cb) sc_swipe_pane_g1

0x0265,	// (0x0006f9d8) sc_swipe_pane_g2_ParamLimits

0x0265,	// (0x0006f9d8) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0007f436) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0007f436) sc_swipe_pane_g

0x0271,	// (0x0006f9e4) sc_swipe_pane_t1_ParamLimits

0x0271,	// (0x0006f9e4) sc_swipe_pane_t1

0xeb79,	// (0x0007e2ec) main_cmail_launcher_pane

0xd096,	// (0x0007c809) aid_size_cell_cmail_l_ParamLimits

0xd096,	// (0x0007c809) aid_size_cell_cmail_l

0xd0a6,	// (0x0007c819) grid_cmail_l_pane_ParamLimits

0xd0a6,	// (0x0007c819) grid_cmail_l_pane

0xd0b6,	// (0x0007c829) cell_cmail_l_pane_ParamLimits

0xd0b6,	// (0x0007c829) cell_cmail_l_pane

0xd0ca,	// (0x0007c83d) cell_cmail_l_pane_g1_ParamLimits

0xd0ca,	// (0x0007c83d) cell_cmail_l_pane_g1

0xd0d6,	// (0x0007c849) cell_cmail_l_pane_t1_ParamLimits

0xd0d6,	// (0x0007c849) cell_cmail_l_pane_t1

0x0286,	// (0x0006f9f9) cell_cmail_l_pane_t2_ParamLimits

0x0286,	// (0x0006f9f9) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0007f43b) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0007f43b) cell_cmail_l_pane_t

0x2edd,	// (0x00072650) grid_highlight_pane_cp018_ParamLimits

0x2edd,	// (0x00072650) grid_highlight_pane_cp018

0x6272,	// (0x000759e5) main2_pane_ParamLimits

0x6272,	// (0x000759e5) main2_pane

0x0ef5,	// (0x00070668) popup_sp_fs_action_menu_bg_pane_g1

0x0efd,	// (0x00070670) popup_sp_fs_action_menu_bg_pane_g2

0x0f05,	// (0x00070678) popup_sp_fs_action_menu_bg_pane_g3

0x0f0d,	// (0x00070680) popup_sp_fs_action_menu_bg_pane_g4

0x0f15,	// (0x00070688) popup_sp_fs_action_menu_bg_pane_g5

0x0f1d,	// (0x00070690) popup_sp_fs_action_menu_bg_pane_g6

0x0f25,	// (0x00070698) popup_sp_fs_action_menu_bg_pane_g7

0x0f2d,	// (0x000706a0) popup_sp_fs_action_menu_bg_pane_g8

0x0f35,	// (0x000706a8) popup_sp_fs_action_menu_bg_pane_g9

0x0f3d,	// (0x000706b0) popup_sp_fs_action_menu_bg_pane_g10

0x0f3d,	// (0x000706b0) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0007e8fd) popup_sp_fs_action_menu_bg_pane_g

0x4f06,	// (0x00074679) list_medium_line_x2_t3_g3_g1_ParamLimits

0x4f06,	// (0x00074679) list_medium_line_x2_t3_g3_g1

0x70fe,	// (0x00076871) list_medium_line_x2_t3_g3_g2_ParamLimits

0x70fe,	// (0x00076871) list_medium_line_x2_t3_g3_g2

0x4f12,	// (0x00074685) list_medium_line_x2_t3_g3_g3_ParamLimits

0x4f12,	// (0x00074685) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0007e9ab) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0007e9ab) list_medium_line_x2_t3_g3_g

0x4f1e,	// (0x00074691) list_medium_line_x2_t3_g3_t1_ParamLimits

0x4f1e,	// (0x00074691) list_medium_line_x2_t3_g3_t1

0x4f33,	// (0x000746a6) list_medium_line_x2_t3_g3_t2_ParamLimits

0x4f33,	// (0x000746a6) list_medium_line_x2_t3_g3_t2

0x4f45,	// (0x000746b8) list_medium_line_x2_t3_g3_t3_ParamLimits

0x4f45,	// (0x000746b8) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0007e9b2) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0007e9b2) list_medium_line_x2_t3_g3_t

0x4f06,	// (0x00074679) list_medium_line_x2_t3_g2_g1_ParamLimits

0x4f06,	// (0x00074679) list_medium_line_x2_t3_g2_g1

0x4f12,	// (0x00074685) list_medium_line_x2_t3_g2_g2_ParamLimits

0x4f12,	// (0x00074685) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0007e9b9) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0007e9b9) list_medium_line_x2_t3_g2_g

0x4f5a,	// (0x000746cd) list_medium_line_x2_t3_g2_t1_ParamLimits

0x4f5a,	// (0x000746cd) list_medium_line_x2_t3_g2_t1

0x4f70,	// (0x000746e3) list_medium_line_x2_t3_g2_t2_ParamLimits

0x4f70,	// (0x000746e3) list_medium_line_x2_t3_g2_t2

0x4f45,	// (0x000746b8) list_medium_line_x2_t3_g2_t3_ParamLimits

0x4f45,	// (0x000746b8) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0007e9be) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0007e9be) list_medium_line_x2_t3_g2_t

0x4f06,	// (0x00074679) list_medium_line_x2_t4_g4_g1_ParamLimits

0x4f06,	// (0x00074679) list_medium_line_x2_t4_g4_g1

0x710a,	// (0x0007687d) list_medium_line_x2_t4_g4_g2_ParamLimits

0x710a,	// (0x0007687d) list_medium_line_x2_t4_g4_g2

0x70fe,	// (0x00076871) list_medium_line_x2_t4_g4_g3_ParamLimits

0x70fe,	// (0x00076871) list_medium_line_x2_t4_g4_g3

0x4f82,	// (0x000746f5) list_medium_line_x2_t4_g4_g4_ParamLimits

0x4f82,	// (0x000746f5) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0007e9c5) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0007e9c5) list_medium_line_x2_t4_g4_g

0x4f8e,	// (0x00074701) list_medium_line_x2_t4_g4_t1_ParamLimits

0x4f8e,	// (0x00074701) list_medium_line_x2_t4_g4_t1

0x4fa8,	// (0x0007471b) list_medium_line_x2_t4_g4_t2_ParamLimits

0x4fa8,	// (0x0007471b) list_medium_line_x2_t4_g4_t2

0x4fbe,	// (0x00074731) list_medium_line_x2_t4_g4_t3_ParamLimits

0x4fbe,	// (0x00074731) list_medium_line_x2_t4_g4_t3

0x4fd3,	// (0x00074746) list_medium_line_x2_t4_g4_t4_ParamLimits

0x4fd3,	// (0x00074746) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0007e9ce) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0007e9ce) list_medium_line_x2_t4_g4_t

0x4f06,	// (0x00074679) list_medium_line_x2_t2_g4_g1_ParamLimits

0x4f06,	// (0x00074679) list_medium_line_x2_t2_g4_g1

0x710a,	// (0x0007687d) list_medium_line_x2_t2_g4_g2_ParamLimits

0x710a,	// (0x0007687d) list_medium_line_x2_t2_g4_g2

0x70fe,	// (0x00076871) list_medium_line_x2_t2_g4_g3_ParamLimits

0x70fe,	// (0x00076871) list_medium_line_x2_t2_g4_g3

0x4f12,	// (0x00074685) list_medium_line_x2_t2_g4_g4_ParamLimits

0x4f12,	// (0x00074685) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0007ea35) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0007ea35) list_medium_line_x2_t2_g4_g

0x4fe5,	// (0x00074758) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4fe5,	// (0x00074758) list_medium_line_x2_t2_g4_t1

0x4f45,	// (0x000746b8) list_medium_line_x2_t2_g4_t2_ParamLimits

0x4f45,	// (0x000746b8) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0007ea3e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0007ea3e) list_medium_line_x2_t2_g4_t

0x4f06,	// (0x00074679) list_medium_line_x2_t2_g3_g1_ParamLimits

0x4f06,	// (0x00074679) list_medium_line_x2_t2_g3_g1

0x70fe,	// (0x00076871) list_medium_line_x2_t2_g3_g2_ParamLimits

0x70fe,	// (0x00076871) list_medium_line_x2_t2_g3_g2

0x4f12,	// (0x00074685) list_medium_line_x2_t2_g3_g3_ParamLimits

0x4f12,	// (0x00074685) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0007e9ab) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0007e9ab) list_medium_line_x2_t2_g3_g

0x4ffa,	// (0x0007476d) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4ffa,	// (0x0007476d) list_medium_line_x2_t2_g3_t1

0x4f45,	// (0x000746b8) list_medium_line_x2_t2_g3_t2_ParamLimits

0x4f45,	// (0x000746b8) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0007ea43) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0007ea43) list_medium_line_x2_t2_g3_t

0x83c5,	// (0x00077b38) main_sp_fs_list_pane_ParamLimits

0x83c5,	// (0x00077b38) main_sp_fs_list_pane

0x83d1,	// (0x00077b44) sp_fs_scroll_pane_ParamLimits

0x83d1,	// (0x00077b44) sp_fs_scroll_pane

0x500f,	// (0x00074782) list_medium_line_x2_t3_t1

0x501f,	// (0x00074792) list_medium_line_x2_t3_t2

0x502d,	// (0x000747a0) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0007ea8e) list_medium_line_x2_t3_t

0x503b,	// (0x000747ae) list_medium_line_x3_t4_t1

0x504b,	// (0x000747be) list_medium_line_x3_t4_t2

0x5059,	// (0x000747cc) list_medium_line_x3_t4_t3

0x502d,	// (0x000747a0) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0007ea95) list_medium_line_x3_t4_t

0x5067,	// (0x000747da) list_medium_line_x4_t5_t1

0x5077,	// (0x000747ea) list_medium_line_x4_t5_t2

0x5059,	// (0x000747cc) list_medium_line_x4_t5_t3

0x5085,	// (0x000747f8) list_medium_line_x4_t5_t4

0x502d,	// (0x000747a0) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0007ea9e) list_medium_line_x4_t5_t

0x4f06,	// (0x00074679) list_medium_line_t4_g4_g1_ParamLimits

0x4f06,	// (0x00074679) list_medium_line_t4_g4_g1

0x5093,	// (0x00074806) list_medium_line_t4_g4_g2_ParamLimits

0x5093,	// (0x00074806) list_medium_line_t4_g4_g2

0x509f,	// (0x00074812) list_medium_line_t4_g4_g3_ParamLimits

0x509f,	// (0x00074812) list_medium_line_t4_g4_g3

0x4f12,	// (0x00074685) list_medium_line_t4_g4_g4_ParamLimits

0x4f12,	// (0x00074685) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0007eaa9) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0007eaa9) list_medium_line_t4_g4_g

0x50ab,	// (0x0007481e) list_medium_line_t4_g4_t1_ParamLimits

0x50ab,	// (0x0007481e) list_medium_line_t4_g4_t1

0x50c0,	// (0x00074833) list_medium_line_t4_g4_t2_ParamLimits

0x50c0,	// (0x00074833) list_medium_line_t4_g4_t2

0x50d5,	// (0x00074848) list_medium_line_t4_g4_t3_ParamLimits

0x50d5,	// (0x00074848) list_medium_line_t4_g4_t3

0x4f45,	// (0x000746b8) list_medium_line_t4_g4_t4_ParamLimits

0x4f45,	// (0x000746b8) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0007eab2) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0007eab2) list_medium_line_t4_g4_t

0x84de,	// (0x00077c51) chi_dic_find_pane_g1

0x934d,	// (0x00078ac0) main_tport_pane

0x5341,	// (0x00074ab4) list_medium_line_plain_t1

0x534f,	// (0x00074ac2) list_medium_line_t2_g2_g1_ParamLimits

0x534f,	// (0x00074ac2) list_medium_line_t2_g2_g1

0xbdb4,	// (0x0007b527) list_medium_line_t2_g2_g2_ParamLimits

0xbdb4,	// (0x0007b527) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0007f173) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0007f173) list_medium_line_t2_g2_g

0x535b,	// (0x00074ace) list_medium_line_t2_g2_t1_ParamLimits

0x535b,	// (0x00074ace) list_medium_line_t2_g2_t1

0x5375,	// (0x00074ae8) list_medium_line_t2_g2_t2_ParamLimits

0x5375,	// (0x00074ae8) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0007f178) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0007f178) list_medium_line_t2_g2_t

0x5595,	// (0x00074d08) aid_sp_fs_list_icon_a_sm

0xc2bd,	// (0x0007ba30) aid_sp_fs_list_icon_d

0xe2ff,	// (0x0007da72) aid_sp_fs_text_primary

0x559d,	// (0x00074d10) aid_sp_fs_text_secondary

0xc2c5,	// (0x0007ba38) list_medium_line

0xc2c5,	// (0x0007ba38) list_medium_line_g2

0xc2c5,	// (0x0007ba38) list_medium_line_g3

0xc2c5,	// (0x0007ba38) list_medium_line_plain

0xc2c5,	// (0x0007ba38) list_medium_line_plain_t2

0xc2c5,	// (0x0007ba38) list_medium_line_plain_t3

0xc2c5,	// (0x0007ba38) list_medium_line_right_icon

0xc2c5,	// (0x0007ba38) list_medium_line_right_iconx2

0xc2c5,	// (0x0007ba38) list_medium_line_t2

0xc2c5,	// (0x0007ba38) list_medium_line_t2_g2

0xc2c5,	// (0x0007ba38) list_medium_line_t2_g3

0xc2c5,	// (0x0007ba38) list_medium_line_t2_right_icon

0xc2c5,	// (0x0007ba38) list_medium_line_t2_right_iconx2

0xc2c5,	// (0x0007ba38) list_medium_line_t3

0xc2c5,	// (0x0007ba38) list_medium_line_t3_g2

0xc2c5,	// (0x0007ba38) list_medium_line_t3_g3

0xc2c5,	// (0x0007ba38) list_medium_line_t3_right_iconx2

0xc2ce,	// (0x0007ba41) list_medium_line_t4_g4

0xe308,	// (0x0007da7b) list_medium_line_x2

0xe308,	// (0x0007da7b) list_medium_line_x2_t2_g2

0xe308,	// (0x0007da7b) list_medium_line_x2_t2_g3

0xe308,	// (0x0007da7b) list_medium_line_x2_t2_g4

0xe308,	// (0x0007da7b) list_medium_line_x2_t3

0xe308,	// (0x0007da7b) list_medium_line_x2_t3_g2

0xe308,	// (0x0007da7b) list_medium_line_x2_t3_g3

0xe308,	// (0x0007da7b) list_medium_line_x2_t3_g4

0xe308,	// (0x0007da7b) list_medium_line_x2_t4_g2

0xe308,	// (0x0007da7b) list_medium_line_x2_t4_g4

0xc2d7,	// (0x0007ba4a) list_medium_line_x3

0xc2d7,	// (0x0007ba4a) list_medium_line_x3_t4

0xc2d7,	// (0x0007ba4a) list_medium_line_x3_t4_g4

0xc2ce,	// (0x0007ba41) list_medium_line_x4_t4

0xc2ce,	// (0x0007ba41) list_medium_line_x4_t4_g7

0xc2ce,	// (0x0007ba41) list_medium_line_x4_t5

0x55a6,	// (0x00074d19) list_single_fs_dyc_pane_ParamLimits

0x55a6,	// (0x00074d19) list_single_fs_dyc_pane

0x4f06,	// (0x00074679) list_medium_line_x4_t4_g7_g1_ParamLimits

0x4f06,	// (0x00074679) list_medium_line_x4_t4_g7_g1

0x55ba,	// (0x00074d2d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x55ba,	// (0x00074d2d) list_medium_line_x4_t4_g7_g2

0xca08,	// (0x0007c17b) list_medium_line_x4_t4_g7_g3_ParamLimits

0xca08,	// (0x0007c17b) list_medium_line_x4_t4_g7_g3

0xca17,	// (0x0007c18a) list_medium_line_x4_t4_g7_g4_ParamLimits

0xca17,	// (0x0007c18a) list_medium_line_x4_t4_g7_g4

0x55c6,	// (0x00074d39) list_medium_line_x4_t4_g7_g5_ParamLimits

0x55c6,	// (0x00074d39) list_medium_line_x4_t4_g7_g5

0x55d5,	// (0x00074d48) list_medium_line_x4_t4_g7_g6_ParamLimits

0x55d5,	// (0x00074d48) list_medium_line_x4_t4_g7_g6

0x55e4,	// (0x00074d57) list_medium_line_x4_t4_g7_g7_ParamLimits

0x55e4,	// (0x00074d57) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0007f343) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0007f343) list_medium_line_x4_t4_g7_g

0x55f0,	// (0x00074d63) list_medium_line_x4_t4_g7_t1_ParamLimits

0x55f0,	// (0x00074d63) list_medium_line_x4_t4_g7_t1

0x5605,	// (0x00074d78) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5605,	// (0x00074d78) list_medium_line_x4_t4_g7_t2

0x561a,	// (0x00074d8d) list_medium_line_x4_t4_g7_t3_ParamLimits

0x561a,	// (0x00074d8d) list_medium_line_x4_t4_g7_t3

0x562f,	// (0x00074da2) list_medium_line_x4_t4_g7_t4_ParamLimits

0x562f,	// (0x00074da2) list_medium_line_x4_t4_g7_t4

0x5641,	// (0x00074db4) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5641,	// (0x00074db4) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0007f352) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0007f352) list_medium_line_x4_t4_g7_t

0x5653,	// (0x00074dc6) list_single_dyc_row_pane_ParamLimits

0x5653,	// (0x00074dc6) list_single_dyc_row_pane

0xd046,	// (0x0007c7b9) call5_gesture_pane_ParamLimits

0xd046,	// (0x0007c7b9) call5_gesture_pane

0xd07a,	// (0x0007c7ed) call5_windows_pane_ParamLimits

0xd07a,	// (0x0007c7ed) call5_windows_pane

0xd0ec,	// (0x0007c85f) call5_swipe_1_pane_cp_ParamLimits

0xd0ec,	// (0x0007c85f) call5_swipe_1_pane_cp

0xd0f8,	// (0x0007c86b) call5_swipe_2_pane_cp_ParamLimits

0xd0f8,	// (0x0007c86b) call5_swipe_2_pane_cp

0x1021,	// (0x00070794) call5_image_pane_cp

0xd104,	// (0x0007c877) popup_call5_audio_first_window_cp_ParamLimits

0xd104,	// (0x0007c877) popup_call5_audio_first_window_cp

0x0258,	// (0x0006f9cb) call5_swipe_1_pane_g1_cp_ParamLimits

0x0258,	// (0x0006f9cb) call5_swipe_1_pane_g1_cp

0x0298,	// (0x0006fa0b) call5_swipe_1_pane_g2_cp

0x0271,	// (0x0006f9e4) call5_swipe_1_pane_t1_cp_ParamLimits

0x0271,	// (0x0006f9e4) call5_swipe_1_pane_t1_cp

0x0258,	// (0x0006f9cb) call5_swipe_2_pane_g1_cp_ParamLimits

0x0258,	// (0x0006f9cb) call5_swipe_2_pane_g1_cp

0x02a0,	// (0x0006fa13) call5_swipe_2_pane_g2_cp

0x02a8,	// (0x0006fa1b) call5_swipe_2_pane_t1_cp_ParamLimits

0x02a8,	// (0x0006fa1b) call5_swipe_2_pane_t1_cp

0x2edd,	// (0x00072650) main_sp_fs_email_pane

0x02bd,	// (0x0006fa30) main_sp_fs_listscroll_pane_te

0xd112,	// (0x0007c885) popup_sp_fs_action_menu_pane_ParamLimits

0xd112,	// (0x0007c885) popup_sp_fs_action_menu_pane

0x32ee,	// (0x00072a61) bg_sp_fs_ctrlbar_pane_g1

0x02c6,	// (0x0006fa39) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x02cf,	// (0x0006fa42) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x02d8,	// (0x0006fa4b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x32ee,	// (0x00072a61) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0007f440) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x30ca,	// (0x0007283d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x30ca,	// (0x0007283d) bg_sp_fs_ctrlbar_ddmenu_pane

0x02e1,	// (0x0006fa54) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x02e1,	// (0x0006fa54) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x02ed,	// (0x0006fa60) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x02ed,	// (0x0006fa60) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0007f449) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0007f449) main_sp_fs_ctrlbar_ddmenu_pane_g

0x02f9,	// (0x0006fa6c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x02f9,	// (0x0006fa6c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd156,	// (0x0007c8c9) list_medium_line_t2_right_icon_g1

0x56fe,	// (0x00074e71) list_medium_line_t2_right_icon_t1

0x570e,	// (0x00074e81) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0007f44e) list_medium_line_t2_right_icon_t

0x2ecf,	// (0x00072642) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2ecf,	// (0x00072642) bg_sp_fs_ctrlbar_pane

0xd1b5,	// (0x0007c928) main_sp_fs_ctrlbar_button_pane_cp01

0xd1bd,	// (0x0007c930) main_sp_fs_ctrlbar_ddmenu_pane

0x034b,	// (0x0006fabe) main_sp_fs_ctrlbar_pane_g1

0x0357,	// (0x0006faca) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0007f453) main_sp_fs_ctrlbar_pane_g

0x0363,	// (0x0006fad6) main_sp_fs_ctrlbar_pane_t1

0xd1c7,	// (0x0007c93a) main_sp_fs_ctrlbar_pane

0xd1dd,	// (0x0007c950) main_sp_fs_listscroll_pane_te_cp01

0x571c,	// (0x00074e8f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x571c,	// (0x00074e8f) popup_sp_fs_action_menu_pane_cp01

0x2edd,	// (0x00072650) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x2edd,	// (0x00072650) bg_sp_fs_highlight_list_pane_cp01

0x5746,	// (0x00074eb9) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5746,	// (0x00074eb9) sp_fs_action_menu_list_gene_pane_g1

0x0393,	// (0x0006fb06) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x0393,	// (0x0006fb06) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0007f45d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0007f45d) sp_fs_action_menu_list_gene_pane_g

0x5755,	// (0x00074ec8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5755,	// (0x00074ec8) sp_fs_action_menu_list_gene_pane_t1

0x576d,	// (0x00074ee0) sp_fs_action_menu_list_gene_pane_ParamLimits

0x576d,	// (0x00074ee0) sp_fs_action_menu_list_gene_pane

0x03a0,	// (0x0006fb13) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x03a0,	// (0x0006fb13) popup_sp_fs_action_menu_bg_pane

0x578e,	// (0x00074f01) sp_fs_action_menu_list_pane_ParamLimits

0x578e,	// (0x00074f01) sp_fs_action_menu_list_pane

0xd1ee,	// (0x0007c961) sp_fs_scroll_pane_cp01_ParamLimits

0xd1ee,	// (0x0007c961) sp_fs_scroll_pane_cp01

0x57b0,	// (0x00074f23) list_medium_line_plain_t2_t1

0x57c0,	// (0x00074f33) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0007f462) list_medium_line_plain_t2_t

0x57ce,	// (0x00074f41) list_medium_line_plain_t3_t1

0x57de,	// (0x00074f51) list_medium_line_plain_t3_t2

0x57ec,	// (0x00074f5f) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0007f467) list_medium_line_plain_t3_t

0x4f06,	// (0x00074679) list_medium_line_x2_t2_g2_g1_ParamLimits

0x4f06,	// (0x00074679) list_medium_line_x2_t2_g2_g1

0x4f12,	// (0x00074685) list_medium_line_x2_t2_g2_g2_ParamLimits

0x4f12,	// (0x00074685) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0007e9b9) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0007e9b9) list_medium_line_x2_t2_g2_g

0x50ab,	// (0x0007481e) list_medium_line_x2_t2_g2_t1_ParamLimits

0x50ab,	// (0x0007481e) list_medium_line_x2_t2_g2_t1

0x4f45,	// (0x000746b8) list_medium_line_x2_t2_g2_t2_ParamLimits

0x4f45,	// (0x000746b8) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0007f46e) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0007f46e) list_medium_line_x2_t2_g2_t

0x4f06,	// (0x00074679) list_medium_line_x2_t4_g2_g1_ParamLimits

0x4f06,	// (0x00074679) list_medium_line_x2_t4_g2_g1

0x57fa,	// (0x00074f6d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x57fa,	// (0x00074f6d) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0007f473) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0007f473) list_medium_line_x2_t4_g2_g

0x580c,	// (0x00074f7f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x580c,	// (0x00074f7f) list_medium_line_x2_t4_g2_t1

0x5826,	// (0x00074f99) list_medium_line_x2_t4_g2_t2_ParamLimits

0x5826,	// (0x00074f99) list_medium_line_x2_t4_g2_t2

0x583c,	// (0x00074faf) list_medium_line_x2_t4_g2_t3_ParamLimits

0x583c,	// (0x00074faf) list_medium_line_x2_t4_g2_t3

0x4f45,	// (0x000746b8) list_medium_line_x2_t4_g2_t4_ParamLimits

0x4f45,	// (0x000746b8) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0007f478) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0007f478) list_medium_line_x2_t4_g2_t

0xd214,	// (0x0007c987) list_medium_line_t3_right_iconx2_g1

0xd156,	// (0x0007c8c9) list_medium_line_t3_right_iconx2_g2

0x5851,	// (0x00074fc4) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0007f481) list_medium_line_t3_right_iconx2_g

0x5859,	// (0x00074fcc) list_medium_line_t3_right_iconx2_t1

0x5869,	// (0x00074fdc) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0007f488) list_medium_line_t3_right_iconx2_t

0x4f06,	// (0x00074679) list_medium_line_x3_t4_g4_g1_ParamLimits

0x4f06,	// (0x00074679) list_medium_line_x3_t4_g4_g1

0x70fe,	// (0x00076871) list_medium_line_x3_t4_g4_g2_ParamLimits

0x70fe,	// (0x00076871) list_medium_line_x3_t4_g4_g2

0x5093,	// (0x00074806) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5093,	// (0x00074806) list_medium_line_x3_t4_g4_g3

0xd21c,	// (0x0007c98f) list_medium_line_x3_t4_g4_g4_ParamLimits

0xd21c,	// (0x0007c98f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0007f48d) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0007f48d) list_medium_line_x3_t4_g4_g

0x5877,	// (0x00074fea) list_medium_line_x3_t4_g4_t1_ParamLimits

0x5877,	// (0x00074fea) list_medium_line_x3_t4_g4_t1

0x588e,	// (0x00075001) list_medium_line_x3_t4_g4_t2_ParamLimits

0x588e,	// (0x00075001) list_medium_line_x3_t4_g4_t2

0x50c0,	// (0x00074833) list_medium_line_x3_t4_g4_t3_ParamLimits

0x50c0,	// (0x00074833) list_medium_line_x3_t4_g4_t3

0x58a3,	// (0x00075016) list_medium_line_x3_t4_g4_t4_ParamLimits

0x58a3,	// (0x00075016) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0007f496) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0007f496) list_medium_line_x3_t4_g4_t

0x58c0,	// (0x00075033) list_single_dyc_row_text_pane_t1_ParamLimits

0x58c0,	// (0x00075033) list_single_dyc_row_text_pane_t1

0x58f7,	// (0x0007506a) list_single_dyc_row_text_pane_t2_ParamLimits

0x58f7,	// (0x0007506a) list_single_dyc_row_text_pane_t2

0x596d,	// (0x000750e0) list_single_dyc_row_text_pane_t3_ParamLimits

0x596d,	// (0x000750e0) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0007f49f) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0007f49f) list_single_dyc_row_text_pane_t

0x5a3e,	// (0x000751b1) list_single_dyc_row_pane_g1_ParamLimits

0x5a3e,	// (0x000751b1) list_single_dyc_row_pane_g1

0x5a4a,	// (0x000751bd) list_single_dyc_row_pane_g2_ParamLimits

0x5a4a,	// (0x000751bd) list_single_dyc_row_pane_g2

0x5a56,	// (0x000751c9) list_single_dyc_row_pane_g3_ParamLimits

0x5a56,	// (0x000751c9) list_single_dyc_row_pane_g3

0x5a62,	// (0x000751d5) list_single_dyc_row_pane_g4_ParamLimits

0x5a62,	// (0x000751d5) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0007f4ac) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0007f4ac) list_single_dyc_row_pane_g

0x5a6e,	// (0x000751e1) list_single_dyc_row_text_pane_ParamLimits

0x5a6e,	// (0x000751e1) list_single_dyc_row_text_pane

0xeb79,	// (0x0007e2ec) bg_sp_fs_scroll_pane

0x03ae,	// (0x0006fb21) thumb_sp_fs_scroll_pane

0x534f,	// (0x00074ac2) list_medium_line_g1_ParamLimits

0x534f,	// (0x00074ac2) list_medium_line_g1

0x5a8d,	// (0x00075200) list_medium_line_t1_ParamLimits

0x5a8d,	// (0x00075200) list_medium_line_t1

0x4f06,	// (0x00074679) list_medium_line_x2_g1_ParamLimits

0x4f06,	// (0x00074679) list_medium_line_x2_g1

0x70fe,	// (0x00076871) list_medium_line_x2_g2_ParamLimits

0x70fe,	// (0x00076871) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0007f4b5) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0007f4b5) list_medium_line_x2_g

0x5aa2,	// (0x00075215) list_medium_line_x2_t1_ParamLimits

0x5aa2,	// (0x00075215) list_medium_line_x2_t1

0x4f06,	// (0x00074679) list_medium_line_x3_g1_ParamLimits

0x4f06,	// (0x00074679) list_medium_line_x3_g1

0x70fe,	// (0x00076871) list_medium_line_x3_g2_ParamLimits

0x70fe,	// (0x00076871) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0007f4b5) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0007f4b5) list_medium_line_x3_g

0x5aa2,	// (0x00075215) list_medium_line_x3_t1_ParamLimits

0x5aa2,	// (0x00075215) list_medium_line_x3_t1

0x03b7,	// (0x0006fb2a) thumb_sp_fs_scroll_pane_g1

0x03c0,	// (0x0006fb33) thumb_sp_fs_scroll_pane_g2

0x03c9,	// (0x0006fb3c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007f4ba) thumb_sp_fs_scroll_pane_g

0x03b7,	// (0x0006fb2a) bg_sp_fs_scroll_pane_g1

0x03c0,	// (0x0006fb33) bg_sp_fs_scroll_pane_g2

0x03c9,	// (0x0006fb3c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007f4ba) bg_sp_fs_scroll_pane_g

0x4f06,	// (0x00074679) list_medium_line_x2_t3_g4_g1_ParamLimits

0x4f06,	// (0x00074679) list_medium_line_x2_t3_g4_g1

0x710a,	// (0x0007687d) list_medium_line_x2_t3_g4_g2_ParamLimits

0x710a,	// (0x0007687d) list_medium_line_x2_t3_g4_g2

0x70fe,	// (0x00076871) list_medium_line_x2_t3_g4_g3_ParamLimits

0x70fe,	// (0x00076871) list_medium_line_x2_t3_g4_g3

0x4f12,	// (0x00074685) list_medium_line_x2_t3_g4_g4_ParamLimits

0x4f12,	// (0x00074685) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0007ea35) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0007ea35) list_medium_line_x2_t3_g4_g

0x5ab8,	// (0x0007522b) list_medium_line_x2_t3_g4_t1_ParamLimits

0x5ab8,	// (0x0007522b) list_medium_line_x2_t3_g4_t1

0x5ace,	// (0x00075241) list_medium_line_x2_t3_g4_t2_ParamLimits

0x5ace,	// (0x00075241) list_medium_line_x2_t3_g4_t2

0x4f45,	// (0x000746b8) list_medium_line_x2_t3_g4_t3_ParamLimits

0x4f45,	// (0x000746b8) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0007f4c1) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0007f4c1) list_medium_line_x2_t3_g4_t

0x534f,	// (0x00074ac2) list_medium_line_g2_g1_ParamLimits

0x534f,	// (0x00074ac2) list_medium_line_g2_g1

0xbdb4,	// (0x0007b527) list_medium_line_g2_g2_ParamLimits

0xbdb4,	// (0x0007b527) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0007f173) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0007f173) list_medium_line_g2_g

0x5ae8,	// (0x0007525b) list_medium_line_g2_t1_ParamLimits

0x5ae8,	// (0x0007525b) list_medium_line_g2_t1

0x534f,	// (0x00074ac2) list_medium_line_t3_g2_g1_ParamLimits

0x534f,	// (0x00074ac2) list_medium_line_t3_g2_g1

0xbdb4,	// (0x0007b527) list_medium_line_t3_g2_g2_ParamLimits

0xbdb4,	// (0x0007b527) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0007f173) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0007f173) list_medium_line_t3_g2_g

0x5afd,	// (0x00075270) list_medium_line_t3_g2_t1_ParamLimits

0x5afd,	// (0x00075270) list_medium_line_t3_g2_t1

0x5b17,	// (0x0007528a) list_medium_line_t3_g2_t2_ParamLimits

0x5b17,	// (0x0007528a) list_medium_line_t3_g2_t2

0x5b2d,	// (0x000752a0) list_medium_line_t3_g2_t3_ParamLimits

0x5b2d,	// (0x000752a0) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0007f4c8) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0007f4c8) list_medium_line_t3_g2_t

0xd156,	// (0x0007c8c9) list_medium_line_right_icon_g1

0x5b43,	// (0x000752b6) list_medium_line_right_icon_t1

0x534f,	// (0x00074ac2) list_medium_line_t2_g1_ParamLimits

0x534f,	// (0x00074ac2) list_medium_line_t2_g1

0x5b51,	// (0x000752c4) list_medium_line_t2_t1_ParamLimits

0x5b51,	// (0x000752c4) list_medium_line_t2_t1

0x5b6b,	// (0x000752de) list_medium_line_t2_t2_ParamLimits

0x5b6b,	// (0x000752de) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0007f4cf) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0007f4cf) list_medium_line_t2_t

0x534f,	// (0x00074ac2) list_medium_line_t3_g1_ParamLimits

0x534f,	// (0x00074ac2) list_medium_line_t3_g1

0x5b80,	// (0x000752f3) list_medium_line_t3_t1_ParamLimits

0x5b80,	// (0x000752f3) list_medium_line_t3_t1

0x5b9a,	// (0x0007530d) list_medium_line_t3_t2_ParamLimits

0x5b9a,	// (0x0007530d) list_medium_line_t3_t2

0x5bb0,	// (0x00075323) list_medium_line_t3_t3_ParamLimits

0x5bb0,	// (0x00075323) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0007f4d4) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0007f4d4) list_medium_line_t3_t

0x534f,	// (0x00074ac2) list_medium_line_g3_g1_ParamLimits

0x534f,	// (0x00074ac2) list_medium_line_g3_g1

0xd228,	// (0x0007c99b) list_medium_line_g3_g2_ParamLimits

0xd228,	// (0x0007c99b) list_medium_line_g3_g2

0xbdb4,	// (0x0007b527) list_medium_line_g3_g3_ParamLimits

0xbdb4,	// (0x0007b527) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0007f4db) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0007f4db) list_medium_line_g3_g

0x5bc5,	// (0x00075338) list_medium_line_g3_t1_ParamLimits

0x5bc5,	// (0x00075338) list_medium_line_g3_t1

0x534f,	// (0x00074ac2) list_medium_line_t2_g3_g1_ParamLimits

0x534f,	// (0x00074ac2) list_medium_line_t2_g3_g1

0xd228,	// (0x0007c99b) list_medium_line_t2_g3_g2_ParamLimits

0xd228,	// (0x0007c99b) list_medium_line_t2_g3_g2

0xbdb4,	// (0x0007b527) list_medium_line_t2_g3_g3_ParamLimits

0xbdb4,	// (0x0007b527) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0007f4db) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0007f4db) list_medium_line_t2_g3_g

0x5bda,	// (0x0007534d) list_medium_line_t2_g3_t1_ParamLimits

0x5bda,	// (0x0007534d) list_medium_line_t2_g3_t1

0x5bf4,	// (0x00075367) list_medium_line_t2_g3_t2_ParamLimits

0x5bf4,	// (0x00075367) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0007f4e2) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0007f4e2) list_medium_line_t2_g3_t

0x534f,	// (0x00074ac2) list_medium_line_t3_g3_g1_ParamLimits

0x534f,	// (0x00074ac2) list_medium_line_t3_g3_g1

0xd228,	// (0x0007c99b) list_medium_line_t3_g3_g2_ParamLimits

0xd228,	// (0x0007c99b) list_medium_line_t3_g3_g2

0xbdb4,	// (0x0007b527) list_medium_line_t3_g3_g3_ParamLimits

0xbdb4,	// (0x0007b527) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0007f4db) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0007f4db) list_medium_line_t3_g3_g

0x5c0a,	// (0x0007537d) list_medium_line_t3_g3_t1_ParamLimits

0x5c0a,	// (0x0007537d) list_medium_line_t3_g3_t1

0x5c23,	// (0x00075396) list_medium_line_t3_g3_t2_ParamLimits

0x5c23,	// (0x00075396) list_medium_line_t3_g3_t2

0x5c39,	// (0x000753ac) list_medium_line_t3_g3_t3_ParamLimits

0x5c39,	// (0x000753ac) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0007f4e7) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0007f4e7) list_medium_line_t3_g3_t

0xd214,	// (0x0007c987) list_medium_line_right_iconx2_g1

0xd156,	// (0x0007c8c9) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007f4ee) list_medium_line_right_iconx2_g

0xd234,	// (0x0007c9a7) list_medium_line_right_iconx2_t1

0xd214,	// (0x0007c987) list_medium_line_t2_right_iconx2_g1

0xd156,	// (0x0007c8c9) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007f4ee) list_medium_line_t2_right_iconx2_g

0x5c4f,	// (0x000753c2) list_medium_line_t2_right_iconx2_t1

0x5c5f,	// (0x000753d2) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0007f4f3) list_medium_line_t2_right_iconx2_t

0x5c6d,	// (0x000753e0) list_medium_line_x4_t4_t1

0x5c7b,	// (0x000753ee) list_medium_line_x4_t4_t2

0x5c8b,	// (0x000753fe) list_medium_line_x4_t4_t3

0x5c9b,	// (0x0007540e) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0007f4f8) list_medium_line_x4_t4_t

0xd26c,	// (0x0007c9df) tport_appsw_pane_ParamLimits

0xd26c,	// (0x0007c9df) tport_appsw_pane

0xd27a,	// (0x0007c9ed) tport_contact_pane_ParamLimits

0xd27a,	// (0x0007c9ed) tport_contact_pane

0xd28a,	// (0x0007c9fd) tport_listscroll_pane_ParamLimits

0xd28a,	// (0x0007c9fd) tport_listscroll_pane

0xd29a,	// (0x0007ca0d) cell_tport_appsw_pane_ParamLimits

0xd29a,	// (0x0007ca0d) cell_tport_appsw_pane

0x361e,	// (0x00072d91) tport_appsw_pane_g1_ParamLimits

0x361e,	// (0x00072d91) tport_appsw_pane_g1

0x03d2,	// (0x0006fb45) tport_contact_pane_g1

0xe8f4,	// (0x0007e067) tport_contact_pane_t1

0x03db,	// (0x0006fb4e) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0007f501) tport_contact_pane_t

0x03e9,	// (0x0006fb5c) list_tport_pane

0x03f2,	// (0x0006fb65) scroll_pane_cp_030

0xd2cd,	// (0x0007ca40) cell_tport_appsw_pane_g1

0xd2dd,	// (0x0007ca50) cell_tport_appsw_pane_t1

0xd2eb,	// (0x0007ca5e) grid_highlight_pane_cp019

0xd2f3,	// (0x0007ca66) list_tport_double_graphic_pane_ParamLimits

0xd2f3,	// (0x0007ca66) list_tport_double_graphic_pane

0x2edd,	// (0x00072650) list_highlight_pane_cp023_ParamLimits

0x2edd,	// (0x00072650) list_highlight_pane_cp023

0xd304,	// (0x0007ca77) list_tport_double_graphic_pane_g1_ParamLimits

0xd304,	// (0x0007ca77) list_tport_double_graphic_pane_g1

0xd311,	// (0x0007ca84) list_tport_double_graphic_pane_t1_ParamLimits

0xd311,	// (0x0007ca84) list_tport_double_graphic_pane_t1

0xd326,	// (0x0007ca99) list_tport_double_graphic_pane_t2_ParamLimits

0xd326,	// (0x0007ca99) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0007f50d) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0007f50d) list_tport_double_graphic_pane_t

0xeb79,	// (0x0007e2ec) main_cale_note_pane

0xb5d3,	// (0x0007ad46) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xb5d3,	// (0x0007ad46) cell_vitu2_function_top_wide_pane_cp01

0xcdac,	// (0x0007c51f) wait_bar_pane_cp05_ParamLimits

0x2edd,	// (0x00072650) listscroll_cmail_pane

0x03fb,	// (0x0006fb6e) list_cmail_pane

0xd338,	// (0x0007caab) list_cmail_body_pane

0xd35f,	// (0x0007cad2) list_single_cmail_header_caption_pane

0xd38a,	// (0x0007cafd) list_single_cmail_header_detail_pane_ParamLimits

0xd38a,	// (0x0007cafd) list_single_cmail_header_detail_pane

0x040b,	// (0x0006fb7e) list_single_cmail_header_caption_pane_t1

0x5cab,	// (0x0007541e) list_single_cmail_header_detail_pane_g1_ParamLimits

0x5cab,	// (0x0007541e) list_single_cmail_header_detail_pane_g1

0xd3c0,	// (0x0007cb33) list_single_cmail_header_detail_pane_g2_ParamLimits

0xd3c0,	// (0x0007cb33) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0007f512) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0007f512) list_single_cmail_header_detail_pane_g

0x5cc1,	// (0x00075434) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5cc1,	// (0x00075434) list_single_cmail_header_detail_pane_t1

0x5d21,	// (0x00075494) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5d21,	// (0x00075494) list_single_cmail_header_editor_pane_bg

0xea51,	// (0x0007e1c4) list_cmail_body_pane_g1

0x042f,	// (0x0006fba2) list_cmail_body_pane_t1

0x3dd4,	// (0x00073547) list_single_cmail_header_editor_pane_bg_g1

0x127a,	// (0x000709ed) list_single_cmail_header_editor_pane_bg_g1_copy1

0x3de4,	// (0x00073557) list_single_cmail_header_editor_pane_bg_g1_copy2

0x3ddc,	// (0x0007354f) list_single_cmail_header_editor_pane_bg_g1_copy3

0x4028,	// (0x0007379b) list_single_cmail_header_editor_pane_bg_g1_copy4

0x3e04,	// (0x00073577) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x3df4,	// (0x00073567) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3dfc,	// (0x0007356f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x125a,	// (0x000709cd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd3cc,	// (0x0007cb3f) calenote_gesture_pane_ParamLimits

0xd3cc,	// (0x0007cb3f) calenote_gesture_pane

0xd3e6,	// (0x0007cb59) calenote_window_pane_ParamLimits

0xd3e6,	// (0x0007cb59) calenote_window_pane

0x043d,	// (0x0006fbb0) popup_note_window_cp01

0xd3fe,	// (0x0007cb71) calenote_swipe_1_pane_ParamLimits

0xd3fe,	// (0x0007cb71) calenote_swipe_1_pane

0xd0f8,	// (0x0007c86b) calenote_swipe_2_pane_ParamLimits

0xd0f8,	// (0x0007c86b) calenote_swipe_2_pane

0x0258,	// (0x0006f9cb) calenote_swipe_1_pane_g1_ParamLimits

0x0258,	// (0x0006f9cb) calenote_swipe_1_pane_g1

0x0265,	// (0x0006f9d8) calenote_swipe_1_pane_g2_ParamLimits

0x0265,	// (0x0006f9d8) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0007f436) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0007f436) calenote_swipe_1_pane_g

0x044f,	// (0x0006fbc2) calenote_swipe_1_pane_t1_ParamLimits

0x044f,	// (0x0006fbc2) calenote_swipe_1_pane_t1

0x0258,	// (0x0006f9cb) calenote_swipe_2_pane_g1_ParamLimits

0x0258,	// (0x0006f9cb) calenote_swipe_2_pane_g1

0x046e,	// (0x0006fbe1) calenote_swipe_2_pane_g2_ParamLimits

0x046e,	// (0x0006fbe1) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0007f51e) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0007f51e) calenote_swipe_2_pane_g

0x047a,	// (0x0006fbed) calenote_swipe_2_pane_t1_ParamLimits

0x047a,	// (0x0006fbed) calenote_swipe_2_pane_t1

0xeb79,	// (0x0007e2ec) main_mup_navstr_pane

0xa34d,	// (0x00079ac0) main_mup3_pane_t7_ParamLimits

0xa34d,	// (0x00079ac0) main_mup3_pane_t7

0xad53,	// (0x0007a4c6) main_mp4_pane_g6_ParamLimits

0xad53,	// (0x0007a4c6) main_mp4_pane_g6

0xb0c5,	// (0x0007a838) main_image3_pane_t4_ParamLimits

0xb0c5,	// (0x0007a838) main_image3_pane_t4

0xd411,	// (0x0007cb84) popup_navstr_preview_pane_ParamLimits

0xd411,	// (0x0007cb84) popup_navstr_preview_pane

0xd41d,	// (0x0007cb90) scroll_navstr_pane_ParamLimits

0xd41d,	// (0x0007cb90) scroll_navstr_pane

0xeb79,	// (0x0007e2ec) bg_popup_preview_window_pane_cp04

0x04a1,	// (0x0006fc14) popup_navstr_preview_pane_t1

0xd429,	// (0x0007cb9c) scroll_navstr_pane_g1_ParamLimits

0xd429,	// (0x0007cb9c) scroll_navstr_pane_g1

0xd436,	// (0x0007cba9) scroll_navstr_pane_t1_ParamLimits

0xd436,	// (0x0007cba9) scroll_navstr_pane_t1

0x0446,	// (0x0006fbb9) bg_button_pane_cp014

0x0446,	// (0x0006fbb9) bg_button_pane_cp030

0x56a4,	// (0x00074e17) list_double_fisheye_pane_g4_ParamLimits

0x56a4,	// (0x00074e17) list_double_fisheye_pane_g4

0x56b0,	// (0x00074e23) list_double_fisheye_pane_g5_ParamLimits

0x56b0,	// (0x00074e23) list_double_fisheye_pane_g5

0x2616,	// (0x00071d89) sp_fs_scroll_pane_cp03

0x034b,	// (0x0006fabe) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x0357,	// (0x0006faca) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0007f453) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x0363,	// (0x0006fad6) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x0403,	// (0x0006fb76) sp_fs_scroll_pane_cp02

0x0f60,	// (0x000706d3) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0f60,	// (0x000706d3) popup_sp_fs_calendar_preview_list_single_pane

0xeb79,	// (0x0007e2ec) main_cam6_pano_pane

0x2edd,	// (0x00072650) main_mup3_pane_ParamLimits

0xeb79,	// (0x0007e2ec) main_phacti_pane

0xcc81,	// (0x0007c3f4) bg_button_pane_cp11

0xcc99,	// (0x0007c40c) main_mobtv_info_pane_g2_ParamLimits

0xcc99,	// (0x0007c40c) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0007f3b3) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0007f3b3) main_mobtv_info_pane_g

0xce4b,	// (0x0007c5be) sc_clock_pane_t5_ParamLimits

0xce4b,	// (0x0007c5be) sc_clock_pane_t5

0xceec,	// (0x0007c65f) main_radioblah_pane_g1_ParamLimits

0x01a4,	// (0x0006f917) main_radioblah_pane_t3_ParamLimits

0x01a4,	// (0x0006f917) main_radioblah_pane_t3

0x01bc,	// (0x0006f92f) main_radioblah_pane_t4_ParamLimits

0x01bc,	// (0x0006f92f) main_radioblah_pane_t4

0xcf0a,	// (0x0007c67d) main_radioblah_text_pane_ParamLimits

0xcf0a,	// (0x0007c67d) main_radioblah_text_pane

0xcf17,	// (0x0007c68a) main_radioblah_info_pane_g1_ParamLimits

0xcfac,	// (0x0007c71f) main_radioblah_info_pane_t4_ParamLimits

0xcfac,	// (0x0007c71f) main_radioblah_info_pane_t4

0x2edd,	// (0x00072650) main_sp_fs_calendar_pane

0xd448,	// (0x0007cbbb) main_phacti_pane_g1

0xd450,	// (0x0007cbc3) phacti_note_pane_ParamLimits

0xd450,	// (0x0007cbc3) phacti_note_pane

0x04b8,	// (0x0006fc2b) phacti_term_pane_ParamLimits

0x04b8,	// (0x0006fc2b) phacti_term_pane

0x04cd,	// (0x0006fc40) phacti_note_pane_t1_ParamLimits

0x04cd,	// (0x0006fc40) phacti_note_pane_t1

0x5d38,	// (0x000754ab) phacti_term_pane_g1

0x5d40,	// (0x000754b3) phacti_term_pane_t1_ParamLimits

0x5d40,	// (0x000754b3) phacti_term_pane_t1

0x04e4,	// (0x0006fc57) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0fff,	// (0x00070772) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0007f528) popup_sp_fs_calendar_preview_list_single_pane_g

0x04ec,	// (0x0006fc5f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x04ec,	// (0x0006fc5f) popup_sp_fs_calendar_preview_list_single_pane_t1

0x0502,	// (0x0006fc75) aid_popup_sp_fs_bg_corner_pane

0x32ee,	// (0x00072a61) popup_sp_fs_calendar_preview_bg_pane_g1

0xeb79,	// (0x0007e2ec) popup_sp_fs_calendar_preview_bg_pane

0x050a,	// (0x0006fc7d) popup_sp_fs_calendar_preview_list_pane

0x2ecf,	// (0x00072642) bg_main_sp_fs_cale_pane_ParamLimits

0x2ecf,	// (0x00072642) bg_main_sp_fs_cale_pane

0x5d6a,	// (0x000754dd) listscroll_cale_mrui_pane_ParamLimits

0x5d6a,	// (0x000754dd) listscroll_cale_mrui_pane

0x5d7f,	// (0x000754f2) listscroll_sp_fs_schedule_track_pane

0x5d88,	// (0x000754fb) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5d88,	// (0x000754fb) main_sp_fs_ctrlbar_pane_cp01

0x0512,	// (0x0006fc85) main_sp_fs_ribbon_pane

0x5d9b,	// (0x0007550e) popup_sp_fs_cale_preview_window

0xd4bc,	// (0x0007cc2f) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd4bc,	// (0x0007cc2f) list_single_sp_fs_schedule_track_pane

0xeb83,	// (0x0007e2f6) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xeb83,	// (0x0007e2f6) bg_sp_fs_highlight_list_pane_cp03

0xd4de,	// (0x0007cc51) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd4de,	// (0x0007cc51) list_single_sp_fs_schedule_track_pane_g1

0xd4ea,	// (0x0007cc5d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd4ea,	// (0x0007cc5d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0007f52d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0007f52d) list_single_sp_fs_schedule_track_pane_g

0xd4f6,	// (0x0007cc69) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd4f6,	// (0x0007cc69) list_single_sp_fs_schedule_track_pane_t1

0xd50e,	// (0x0007cc81) sp_fs_schedule_track_pane_ParamLimits

0xd50e,	// (0x0007cc81) sp_fs_schedule_track_pane

0x051a,	// (0x0006fc8d) sp_fs_schedule_track_pane_g1

0x0522,	// (0x0006fc95) sp_fs_schedule_track_pane_g2

0x052a,	// (0x0006fc9d) sp_fs_schedule_track_pane_g3

0x0532,	// (0x0006fca5) sp_fs_schedule_track_pane_g4

0x053a,	// (0x0006fcad) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0007f532) sp_fs_schedule_track_pane_g

0x3dd4,	// (0x00073547) bg_sp_fs_schedule_viewer_highlight_g1

0x127a,	// (0x000709ed) bg_sp_fs_schedule_viewer_highlight_g2

0x3ddc,	// (0x0007354f) bg_sp_fs_schedule_viewer_highlight_g3

0x3de4,	// (0x00073557) bg_sp_fs_schedule_viewer_highlight_g4

0x4028,	// (0x0007379b) bg_sp_fs_schedule_viewer_highlight_g5

0x3df4,	// (0x00073567) bg_sp_fs_schedule_viewer_highlight_g6

0x3dfc,	// (0x0007356f) bg_sp_fs_schedule_viewer_highlight_g7

0x3e04,	// (0x00073577) bg_sp_fs_schedule_viewer_highlight_g8

0x125a,	// (0x000709cd) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0007f53d) bg_sp_fs_schedule_viewer_highlight_g

0xeb79,	// (0x0007e2ec) bg_main_sp_fs_ribbon_pane

0xd51e,	// (0x0007cc91) main_sp_fs_ribbon_pane_g1

0x0542,	// (0x0006fcb5) main_sp_fs_ribbon_pane_t1

0xd527,	// (0x0007cc9a) main_sp_fs_ribbon_pane_t2

0x0551,	// (0x0006fcc4) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0007f550) main_sp_fs_ribbon_pane_t

0x0560,	// (0x0006fcd3) main_sp_fs_ribbon_scheduler_pane

0x0568,	// (0x0006fcdb) bg_main_sp_fs_ribbon_pane_g1

0x0571,	// (0x0006fce4) bg_main_sp_fs_ribbon_pane_g2

0x057a,	// (0x0006fced) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0007f557) bg_main_sp_fs_ribbon_pane_g

0x0582,	// (0x0006fcf5) main_sp_fs_ribbon_scheduler_pane_g1

0x058b,	// (0x0006fcfe) main_sp_fs_ribbon_scheduler_pane_g2

0x0594,	// (0x0006fd07) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0007f55e) main_sp_fs_ribbon_scheduler_pane_g

0x059d,	// (0x0006fd10) list_cale_mrui_pane

0xd536,	// (0x0007cca9) sp_fs_scroll_pane_cp07_ParamLimits

0xd536,	// (0x0007cca9) sp_fs_scroll_pane_cp07

0xd552,	// (0x0007ccc5) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd552,	// (0x0007ccc5) bg_sp_fs_schedule_viewer_highlight

0x05aa,	// (0x0006fd1d) list_single_sp_fs_schedule_track_pane_cp01

0x05b2,	// (0x0006fd25) list_sp_fs_schedule_track_pane

0x05ba,	// (0x0006fd2d) sp_fs_scroll_pane_cp06_ParamLimits

0x05ba,	// (0x0006fd2d) sp_fs_scroll_pane_cp06

0x32ee,	// (0x00072a61) bgmain_sp_fs_calendar_pane_g1

0x5dad,	// (0x00075520) list_single_cale_mrui_pane_ParamLimits

0x5dad,	// (0x00075520) list_single_cale_mrui_pane

0x5dda,	// (0x0007554d) list_single_cale_mrui_row_pane_ParamLimits

0x5dda,	// (0x0007554d) list_single_cale_mrui_row_pane

0x5de7,	// (0x0007555a) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5de7,	// (0x0007555a) list_single_cale_mrui_row_pane_g1

0x5e1f,	// (0x00075592) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5e1f,	// (0x00075592) list_single_cale_mrui_row_pane_t1

0x5e31,	// (0x000755a4) list_single_cale_mrui_row_pane_t2_ParamLimits

0x5e31,	// (0x000755a4) list_single_cale_mrui_row_pane_t2

0x5e97,	// (0x0007560a) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5e97,	// (0x0007560a) list_single_cale_mrui_row_pane_t3

0x5ec6,	// (0x00075639) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5ec6,	// (0x00075639) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0007f56c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0007f56c) list_single_cale_mrui_row_pane_t

0x5ef5,	// (0x00075668) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x5ef5,	// (0x00075668) list_single_cmail_header_editor_pane_bg_cp01

0x5f15,	// (0x00075688) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x5f15,	// (0x00075688) list_single_cmail_header_editor_pane_bg_cp02

0xd55f,	// (0x0007ccd2) main_radioblah_text_pane_t1_ParamLimits

0xd55f,	// (0x0007ccd2) main_radioblah_text_pane_t1

0x05d9,	// (0x0006fd4c) cam6_indi_pane_cp01

0x05e1,	// (0x0006fd54) cam6_mode_pane_cp01

0x05e9,	// (0x0006fd5c) cam6_pano_pane

0x05f2,	// (0x0006fd65) cam6_zoom_pane_cp01

0x05fa,	// (0x0006fd6d) cam6_pano_image_pane

0x0605,	// (0x0006fd78) cam6_pano_pane_g1

0xea51,	// (0x0007e1c4) cam6_pano_pane_g2

0x060e,	// (0x0006fd81) cam6_pano_pane_g3

0x0617,	// (0x0006fd8a) cam6_pano_pane_g4

0x3919,	// (0x0007308c) cam6_pano_pane_g5

0x0620,	// (0x0006fd93) cam6_pano_pane_g6

0x062a,	// (0x0006fd9d) cam6_pano_pane_g7

0x0632,	// (0x0006fda5) cam6_pano_pane_g8

0x063b,	// (0x0006fdae) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0007f575) cam6_pano_pane_g

0xeb79,	// (0x0007e2ec) main_browser_tag_pane

0x0499,	// (0x0006fc0c) grid_navstr_albumart_pane

0x0646,	// (0x0006fdb9) cell_navstr_albumart_pane_ParamLimits

0x0646,	// (0x0006fdb9) cell_navstr_albumart_pane

0x0666,	// (0x0006fdd9) cell_navstr_albumart_pane_g1

0x2ce0,	// (0x00072453) cell_navstr_albumart_pane_g2

0x2cf0,	// (0x00072463) cell_navstr_albumart_pane_g3

0x2ce8,	// (0x0007245b) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0007f588) cell_navstr_albumart_pane_g

0xd57a,	// (0x0007cced) bt_list_pane_ParamLimits

0xd57a,	// (0x0007cced) bt_list_pane

0xd59a,	// (0x0007cd0d) bt_list_pane_t1

0xd5a9,	// (0x0007cd1c) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0007f591) bt_list_pane_t

0xeb79,	// (0x0007e2ec) main_cale_prevew_pane

0xd5b8,	// (0x0007cd2b) popup_cale_preview_window_ParamLimits

0xd5b8,	// (0x0007cd2b) popup_cale_preview_window

0x2edd,	// (0x00072650) bg_popup_preview_window_pane_cp05_ParamLimits

0x2edd,	// (0x00072650) bg_popup_preview_window_pane_cp05

0x066e,	// (0x0006fde1) list_cale_preview_pane_ParamLimits

0x066e,	// (0x0006fde1) list_cale_preview_pane

0xd5d1,	// (0x0007cd44) list_double_cale_preview_pane_ParamLimits

0xd5d1,	// (0x0007cd44) list_double_cale_preview_pane

0xd5e3,	// (0x0007cd56) list_single_cale_preview_pane_ParamLimits

0xd5e3,	// (0x0007cd56) list_single_cale_preview_pane

0xd5f9,	// (0x0007cd6c) list_single_cale_preview_pane_g1

0xd601,	// (0x0007cd74) list_single_cale_preview_pane_t1_ParamLimits

0xd601,	// (0x0007cd74) list_single_cale_preview_pane_t1

0xd616,	// (0x0007cd89) list_double_cale_preview_pane_g1

0xd61e,	// (0x0007cd91) list_double_cale_preview_pane_t1_ParamLimits

0xd61e,	// (0x0007cd91) list_double_cale_preview_pane_t1

0xd633,	// (0x0007cda6) list_double_cale_preview_pane_t2_ParamLimits

0xd633,	// (0x0007cda6) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0007f596) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0007f596) list_double_cale_preview_pane_t

0xeb79,	// (0x0007e2ec) main_ezdial_pane

0x2edd,	// (0x00072650) main_sp_fs_email_pane_ParamLimits

0xd15e,	// (0x0007c8d1) cmail_ddmenu_btn01_pane_ParamLimits

0xd15e,	// (0x0007c8d1) cmail_ddmenu_btn01_pane

0xd17b,	// (0x0007c8ee) cmail_ddmenu_btn02_pane_ParamLimits

0xd17b,	// (0x0007c8ee) cmail_ddmenu_btn02_pane

0xd199,	// (0x0007c90c) cmail_ddmenu_btn03_pane_ParamLimits

0xd199,	// (0x0007c90c) cmail_ddmenu_btn03_pane

0xd1c7,	// (0x0007c93a) main_sp_fs_ctrlbar_pane_ParamLimits

0xd1dd,	// (0x0007c950) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd338,	// (0x0007caab) list_cmail_body_pane_ParamLimits

0x0419,	// (0x0006fb8c) bg_button_pane_cp12

0x0422,	// (0x0006fb95) list_single_cmail_header_detail_pane_g3_ParamLimits

0x0422,	// (0x0006fb95) list_single_cmail_header_detail_pane_g3

0x5cfd,	// (0x00075470) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5cfd,	// (0x00075470) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0007f519) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0007f519) list_single_cmail_header_detail_pane_t

0x5d55,	// (0x000754c8) phacti_term_pane_t2_ParamLimits

0x5d55,	// (0x000754c8) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0007f523) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0007f523) phacti_term_pane_t

0x067a,	// (0x0006fded) aid_size_list_single_double

0xd64b,	// (0x0007cdbe) popup_ezdial_listscroll_window

0xd66c,	// (0x0007cddf) popup_number_entry_window_cp01

0x1021,	// (0x00070794) bg_popup_call_pane_cp09

0x0686,	// (0x0006fdf9) ezdial_list_pane

0x068e,	// (0x0006fe01) scroll_pane_cp23

0x30ca,	// (0x0007283d) bg_button_pane_cp028_ParamLimits

0x30ca,	// (0x0007283d) bg_button_pane_cp028

0xd67a,	// (0x0007cded) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd67a,	// (0x0007cded) cmail_ddmenu_btn01_pane_g1

0xd68a,	// (0x0007cdfd) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd68a,	// (0x0007cdfd) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0007f59b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0007f59b) cmail_ddmenu_btn01_pane_g

0x0696,	// (0x0006fe09) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x0696,	// (0x0006fe09) cmail_ddmenu_btn01_pane_t1

0x2ecf,	// (0x00072642) bg_button_pane_cp029_ParamLimits

0x2ecf,	// (0x00072642) bg_button_pane_cp029

0xd68a,	// (0x0007cdfd) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd68a,	// (0x0007cdfd) cmail_ddmenu_btn02_pane_g1

0xd6a3,	// (0x0007ce16) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd6a3,	// (0x0007ce16) cmail_ddmenu_btn02_pane_t1

0xeb83,	// (0x0007e2f6) bg_button_pane_cp031_ParamLimits

0xeb83,	// (0x0007e2f6) bg_button_pane_cp031

0xd68a,	// (0x0007cdfd) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd68a,	// (0x0007cdfd) cmail_ddmenu_btn03_pane_g1

0xd6a3,	// (0x0007ce16) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd6a3,	// (0x0007ce16) cmail_ddmenu_btn03_pane_t1

0xaf70,	// (0x0007a6e3) cell_dialer2_keypad_pane_t1_ParamLimits

0xaf8a,	// (0x0007a6fd) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xaf8a,	// (0x0007a6fd) cell_dialer2_keypad_pane_t1_copy1

0xcac2,	// (0x0007c235) ncimui_group_button_pane

0x2edd,	// (0x00072650) main_sp_fs_calendar_pane_ParamLimits

0xd35f,	// (0x0007cad2) list_single_cmail_header_caption_pane_ParamLimits

0xd484,	// (0x0007cbf7) aid_recal_txt_sm_pane

0xeb79,	// (0x0007e2ec) mian_recal_day_pane

0x5d9b,	// (0x0007550e) popup_sp_fs_cale_preview_window_ParamLimits

0x06ab,	// (0x0006fe1e) list_recal_day_pane

0x5f4c,	// (0x000756bf) list_single_recal_day_pane_ParamLimits

0x5f4c,	// (0x000756bf) list_single_recal_day_pane

0x06d2,	// (0x0006fe45) list_single_recal_day_pane_g1_ParamLimits

0x06d2,	// (0x0006fe45) list_single_recal_day_pane_g1

0x5f5e,	// (0x000756d1) list_single_recal_day_pane_g2_ParamLimits

0x5f5e,	// (0x000756d1) list_single_recal_day_pane_g2

0x5f6a,	// (0x000756dd) list_single_recal_day_pane_g3_ParamLimits

0x5f6a,	// (0x000756dd) list_single_recal_day_pane_g3

0x5f76,	// (0x000756e9) list_single_recal_day_pane_g4_ParamLimits

0x5f76,	// (0x000756e9) list_single_recal_day_pane_g4

0x5f84,	// (0x000756f7) list_single_recal_day_pane_g5_ParamLimits

0x5f84,	// (0x000756f7) list_single_recal_day_pane_g5

0x5f9a,	// (0x0007570d) list_single_recal_day_pane_g6_ParamLimits

0x5f9a,	// (0x0007570d) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0007f5aa) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0007f5aa) list_single_recal_day_pane_g

0x5fae,	// (0x00075721) list_single_recal_day_pane_t1

0x5fc0,	// (0x00075733) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0007f5b5) list_single_recal_day_pane_t

0xd6c7,	// (0x0007ce3a) ncimui_query_button_pane_ParamLimits

0xd6c7,	// (0x0007ce3a) ncimui_query_button_pane

0xd6d7,	// (0x0007ce4a) ncimui_query_button_pane_t1_ParamLimits

0xd6d7,	// (0x0007ce4a) ncimui_query_button_pane_t1

0x06de,	// (0x0006fe51) ncimui_query_button_pane_t2_ParamLimits

0x06de,	// (0x0006fe51) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0007f5ba) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0007f5ba) ncimui_query_button_pane_t

0xd6ea,	// (0x0007ce5d) query_button_pane_ParamLimits

0xd6ea,	// (0x0007ce5d) query_button_pane

0xeb79,	// (0x0007e2ec) bg_button_pane_cp0028

0x06f1,	// (0x0006fe64) query_button_pane_t1

0x934d,	// (0x00078ac0) main_tport_pane_ParamLimits

0xd242,	// (0x0007c9b5) bg_popup_window_pane_cp01_ParamLimits

0xd242,	// (0x0007c9b5) bg_popup_window_pane_cp01

0xd250,	// (0x0007c9c3) heading_pane_cp08_ParamLimits

0xd250,	// (0x0007c9c3) heading_pane_cp08

0xd25e,	// (0x0007c9d1) heading_pane_cp07_ParamLimits

0xd25e,	// (0x0007c9d1) heading_pane_cp07

0xd2cd,	// (0x0007ca40) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0007f506) cell_tport_appsw_pane_g

0x5108,	// (0x0007487b) input_candi_list_open_g1

0x143d,	// (0x00070bb0) list_cale_time_pane_g6_ParamLimits

0x143d,	// (0x00070bb0) list_cale_time_pane_g6

0x9dd2,	// (0x00079545) aid_size_touch_calib_1_ParamLimits

0x9dd2,	// (0x00079545) aid_size_touch_calib_1

0x9dde,	// (0x00079551) aid_size_touch_calib_2_ParamLimits

0x9dde,	// (0x00079551) aid_size_touch_calib_2

0x9dec,	// (0x0007955f) aid_size_touch_calib_3_ParamLimits

0x9dec,	// (0x0007955f) aid_size_touch_calib_3

0x9dfc,	// (0x0007956f) aid_size_touch_calib_4_ParamLimits

0x9dfc,	// (0x0007956f) aid_size_touch_calib_4

0x9e0a,	// (0x0007957d) main_touch_calib_button_group_pane_ParamLimits

0x9e0a,	// (0x0007957d) main_touch_calib_button_group_pane

0x9e18,	// (0x0007958b) main_touch_calib_pane_g1_ParamLimits

0x9e24,	// (0x00079597) main_touch_calib_pane_g2_ParamLimits

0x9e30,	// (0x000795a3) main_touch_calib_pane_g3_ParamLimits

0x9e3c,	// (0x000795af) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0007eec4) main_touch_calib_pane_g_ParamLimits

0x9e48,	// (0x000795bb) main_touch_calib_pane_t1_ParamLimits

0x9e61,	// (0x000795d4) main_touch_calib_pane_t2_ParamLimits

0x9e7a,	// (0x000795ed) main_touch_calib_pane_t3_ParamLimits

0x9e90,	// (0x00079603) main_touch_calib_pane_t4_ParamLimits

0x9ea6,	// (0x00079619) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0007eecd) main_touch_calib_pane_t_ParamLimits

0x36b9,	// (0x00072e2c) list_single_fp_cale_pane_g3_ParamLimits

0x36b9,	// (0x00072e2c) list_single_fp_cale_pane_g3

0x2edd,	// (0x00072650) bg_button_pane_cp012_ParamLimits

0x2edd,	// (0x00072650) bg_vkb2_func_pane_cp03_ParamLimits

0xbd34,	// (0x0007b4a7) cell_vitu2_function_top_pane_g1_ParamLimits

0x2edd,	// (0x00072650) bg_vkb2_func_pane_cp04_ParamLimits

0xca4a,	// (0x0007c1bd) main_ncimui_button_group_pane_ParamLimits

0xca4a,	// (0x0007c1bd) main_ncimui_button_group_pane

0xcab0,	// (0x0007c223) main_ncimui_pane_t3_ParamLimits

0xcab0,	// (0x0007c223) main_ncimui_pane_t3

0x04af,	// (0x0006fc22) phacti_button_group_pane

0x067a,	// (0x0006fded) aid_size_list_single_double_ParamLimits

0xd64b,	// (0x0007cdbe) popup_ezdial_listscroll_window_ParamLimits

0xd66c,	// (0x0007cddf) popup_number_entry_window_cp01_ParamLimits

0xd6f7,	// (0x0007ce6a) phacti_button_pane_ParamLimits

0xd6f7,	// (0x0007ce6a) phacti_button_pane

0xeb79,	// (0x0007e2ec) bg_button_pane_cp14

0x06ff,	// (0x0006fe72) phacti_button_pane_t1

0xd708,	// (0x0007ce7b) main_touch_calib_button_pane_ParamLimits

0xd708,	// (0x0007ce7b) main_touch_calib_button_pane

0x0e5c,	// (0x000705cf) bg_button_pane_cp18_ParamLimits

0x0e5c,	// (0x000705cf) bg_button_pane_cp18

0x070d,	// (0x0006fe80) main_touch_calib_button_pane_t1_ParamLimits

0x070d,	// (0x0006fe80) main_touch_calib_button_pane_t1

0x0723,	// (0x0006fe96) main_touch_calib_button_pane_t2_ParamLimits

0x0723,	// (0x0006fe96) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0007f5bf) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0007f5bf) main_touch_calib_button_pane_t

0xeb79,	// (0x0007e2ec) cell_ncimui_button_pane

0xeb79,	// (0x0007e2ec) bg_button_pane_cp032

0x0741,	// (0x0006feb4) cell_ncimui_button_pane_t1

0xafe6,	// (0x0007a759) image3_infobar_pane_ParamLimits

0xafe6,	// (0x0007a759) image3_infobar_pane

0xce6d,	// (0x0007c5e0) fs_bigclock_status_pane_ParamLimits

0xce6d,	// (0x0007c5e0) fs_bigclock_status_pane

0xce7a,	// (0x0007c5ed) main_fs_bigclock_clock_pane_ParamLimits

0xce7a,	// (0x0007c5ed) main_fs_bigclock_clock_pane

0xce8e,	// (0x0007c601) main_fs_bigclock_indi_pane_ParamLimits

0xce8e,	// (0x0007c601) main_fs_bigclock_indi_pane

0xceb6,	// (0x0007c629) main_fs_bigclock_swipe_pane_ParamLimits

0xceb6,	// (0x0007c629) main_fs_bigclock_swipe_pane

0xeb79,	// (0x0007e2ec) main_fs_clock_dumped_data

0xeb5e,	// (0x0007e2d1) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xeb5e,	// (0x0007e2d1) list_single_fs_bigclock_indicator_pane_g1

0x002f,	// (0x0006f7a2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x002f,	// (0x0006f7a2) list_single_fs_bigclock_indicator_pane_g2

0x0049,	// (0x0006f7bc) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x0049,	// (0x0006f7bc) list_single_fs_bigclock_indicator_pane_g3

0x0063,	// (0x0006f7d6) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x0063,	// (0x0006f7d6) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0007f3e7) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0007f3e7) list_single_fs_bigclock_indicator_pane_g

0x008e,	// (0x0006f801) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x008e,	// (0x0006f801) list_single_fs_bigclock_indicator_pane_t1

0x00b6,	// (0x0006f829) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x00b6,	// (0x0006f829) list_single_fs_bigclock_indicator_pane_t2

0x00de,	// (0x0006f851) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x00de,	// (0x0006f851) list_single_fs_bigclock_indicator_pane_t3

0x0106,	// (0x0006f879) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x0106,	// (0x0006f879) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0007f3f2) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0007f3f2) list_single_fs_bigclock_indicator_pane_t

0x074f,	// (0x0006fec2) image3_infobar_fav_pane_ParamLimits

0x074f,	// (0x0006fec2) image3_infobar_fav_pane

0x075f,	// (0x0006fed2) image3_infobar_loc_pane_ParamLimits

0x075f,	// (0x0006fed2) image3_infobar_loc_pane

0x0773,	// (0x0006fee6) image3_infobar_time_pane_ParamLimits

0x0773,	// (0x0006fee6) image3_infobar_time_pane

0x32ee,	// (0x00072a61) image3_infobar_time_pane_g1

0x0783,	// (0x0006fef6) image3_infobar_time_pane_t1

0x32ee,	// (0x00072a61) image3_infobar_loc_pane_g1

0x0791,	// (0x0006ff04) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0007f5c4) image3_infobar_loc_pane_g

0x0799,	// (0x0006ff0c) image3_infobar_loc_pane_t1

0x32ee,	// (0x00072a61) image3_infobar_fav_pane_g1

0x07a7,	// (0x0006ff1a) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0007f5c9) image3_infobar_fav_pane_g

0x07af,	// (0x0006ff22) fs_bigclock_status_battery_pane

0x07b8,	// (0x0006ff2b) fs_bigclock_status_signal_pane

0x07c1,	// (0x0006ff34) fs_bigclock_status_title_pane

0x07ca,	// (0x0006ff3d) fs_bigclock_status_signal_pane_g1

0x07d3,	// (0x0006ff46) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0007f5ce) fs_bigclock_status_signal_pane_g

0x07db,	// (0x0006ff4e) fs_bigclock_status_battery_pane_g1

0x07e4,	// (0x0006ff57) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0007f5d3) fs_bigclock_status_battery_pane_g

0x07ec,	// (0x0006ff5f) fs_bigclock_status_title_pane_t1

0xd718,	// (0x0007ce8b) main_fs_bigclock_clock_pane_g1

0xd718,	// (0x0007ce8b) main_fs_bigclock_clock_pane_g2

0xd725,	// (0x0007ce98) main_fs_bigclock_clock_pane_g3

0xd725,	// (0x0007ce98) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0007f5d8) main_fs_bigclock_clock_pane_g

0xd731,	// (0x0007cea4) main_fs_bigclock_clock_pane_t1

0xd744,	// (0x0007ceb7) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0007f5e1) main_fs_bigclock_clock_pane_t

0x07fa,	// (0x0006ff6d) list_single_fs_bigclock_indicator_pane_ParamLimits

0x07fa,	// (0x0006ff6d) list_single_fs_bigclock_indicator_pane

0x080b,	// (0x0006ff7e) list_single_fs_bigclock_pane_ParamLimits

0x080b,	// (0x0006ff7e) list_single_fs_bigclock_pane

0x0831,	// (0x0006ffa4) main_fs_bigclock_indicator_pane_t1

0x0840,	// (0x0006ffb3) list_single_fs_bigclock_pane_g1

0x0848,	// (0x0006ffbb) list_single_fs_bigclock_pane_t1

0x32ee,	// (0x00072a61) main_fs_bigclock_swipe_pane_g1

0x088b,	// (0x0006fffe) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0007f5f2) main_fs_bigclock_swipe_pane_g

0x0893,	// (0x00070006) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x0893,	// (0x00070006) main_fs_bigclock_swipe_pane_t1

0x83dd,	// (0x00077b50) call_type_pane_ParamLimits

0xeb79,	// (0x0007e2ec) main_btmg_pane

0x5e13,	// (0x00075586) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5e13,	// (0x00075586) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0007f565) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0007f565) list_single_cale_mrui_row_pane_g

0x5f3b,	// (0x000756ae) list_recal_vselct_arw_lo_pane

0x06ca,	// (0x0006fe3d) list_recal_vselct_arw_up_pane

0x5f43,	// (0x000756b6) list_recal_vselct_pane

0xd79b,	// (0x0007cf0e) btmg_button_pane

0xd7a7,	// (0x0007cf1a) main_btmg_pane_g1

0xeb79,	// (0x0007e2ec) bg_button_pane_cp044

0x08b0,	// (0x00070023) btmg_button_pane_t1

0x2ebb,	// (0x0007262e) aid_listscroll_gen

0x2edd,	// (0x00072650) main_cntbar_detail_pane

0x03fb,	// (0x0006fb6e) list_cmail_folder_pane

0x2616,	// (0x00071d89) sp_fs_scroll_pane_cp03_ParamLimits

0x5fd2,	// (0x00075745) list_single_fs_dyc_pane_cp01_ParamLimits

0x5fd2,	// (0x00075745) list_single_fs_dyc_pane_cp01

0x08be,	// (0x00070031) aid_size_cmail_indent

0x5ff7,	// (0x0007576a) list_single_dyc_row_pane_cp01

0xd7cf,	// (0x0007cf42) cntbar_detail_list_pane_ParamLimits

0xd7cf,	// (0x0007cf42) cntbar_detail_list_pane

0xd809,	// (0x0007cf7c) main_cntbar_detail_cont_pane_ParamLimits

0xd809,	// (0x0007cf7c) main_cntbar_detail_cont_pane

0x83d1,	// (0x00077b44) scroll_pane_cp032_ParamLimits

0x83d1,	// (0x00077b44) scroll_pane_cp032

0xd815,	// (0x0007cf88) cntbar_detail_list_event_pane_ParamLimits

0xd815,	// (0x0007cf88) cntbar_detail_list_event_pane

0xd7db,	// (0x0007cf4e) cntbar_detail_list_shct_pane

0x12c8,	// (0x00070a3b) aid_list_gen

0x08c7,	// (0x0007003a) aid_scroll

0x08d0,	// (0x00070043) aid_size_touch_scroll_bar

0xe308,	// (0x0007da7b) aid_list_double

0xd829,	// (0x0007cf9c) aid_list_single

0xc2c5,	// (0x0007ba38) aid_list_single_lg

0x6000,	// (0x00075773) aid_list_z_g_a_sm

0xd832,	// (0x0007cfa5) aid_list_z_g_d

0x6008,	// (0x0007577b) aid_txt_z_prm

0x6016,	// (0x00075789) aid_txt_z_prm_cp01

0x6024,	// (0x00075797) aid_txt_z_sec

0xd83a,	// (0x0007cfad) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd83a,	// (0x0007cfad) main_cntbar_detail_cont_pane_g1

0xd847,	// (0x0007cfba) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd847,	// (0x0007cfba) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0007f5f7) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0007f5f7) main_cntbar_detail_cont_pane_g

0x08d9,	// (0x0007004c) main_cntbar_detail_cont_pane_t1

0x08e7,	// (0x0007005a) main_cntbar_detail_cont_pane_t2

0x08f5,	// (0x00070068) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0007f5fc) main_cntbar_detail_cont_pane_t

0xd853,	// (0x0007cfc6) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd853,	// (0x0007cfc6) cell_cntbar_detail_list_shct_pane

0x0903,	// (0x00070076) cntbar_detail_list_shct_pane_g1

0x090c,	// (0x0007007f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0007f603) cntbar_detail_list_shct_pane_g

0xd867,	// (0x0007cfda) cntbar_detail_list_event_pane_g1_ParamLimits

0xd867,	// (0x0007cfda) cntbar_detail_list_event_pane_g1

0xd873,	// (0x0007cfe6) cntbar_detail_list_event_pane_g2_ParamLimits

0xd873,	// (0x0007cfe6) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0007f608) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0007f608) cntbar_detail_list_event_pane_g

0xd8df,	// (0x0007d052) cntbar_detail_list_event_pane_t1_ParamLimits

0xd8df,	// (0x0007d052) cntbar_detail_list_event_pane_t1

0xd8f4,	// (0x0007d067) cntbar_detail_list_event_pane_t2_ParamLimits

0xd8f4,	// (0x0007d067) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0007f615) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0007f615) cntbar_detail_list_event_pane_t

0x32ee,	// (0x00072a61) cell_cntbar_detail_list_shct_pane_g1

0x1a41,	// (0x000711b4) navi_pane_mv_g3

0x2edd,	// (0x00072650) main_cntbar_detail_pane_ParamLimits

0xeb79,	// (0x0007e2ec) main_notif_wgt_pane

0xac9a,	// (0x0007a40d) aid_tch_main_mp4_pane_g4

0xaecf,	// (0x0007a642) popup_slider_window_cp02

0x5f31,	// (0x000756a4) list_recal_day_event_pane

0xd7af,	// (0x0007cf22) cntbar_detail_btn_pane_ParamLimits

0xd7af,	// (0x0007cf22) cntbar_detail_btn_pane

0xd7bf,	// (0x0007cf32) cntbar_detail_btn_pane_cp01_ParamLimits

0xd7bf,	// (0x0007cf32) cntbar_detail_btn_pane_cp01

0xd7db,	// (0x0007cf4e) cntbar_detail_list_shct_pane_ParamLimits

0xd7e7,	// (0x0007cf5a) cntbar_detail_pane_g1_ParamLimits

0xd7e7,	// (0x0007cf5a) cntbar_detail_pane_g1

0xd7f3,	// (0x0007cf66) cntbar_detail_pane_t1_ParamLimits

0xd7f3,	// (0x0007cf66) cntbar_detail_pane_t1

0xd87f,	// (0x0007cff2) cntbar_detail_list_event_pane_g3_ParamLimits

0xd87f,	// (0x0007cff2) cntbar_detail_list_event_pane_g3

0xd897,	// (0x0007d00a) cntbar_detail_list_event_pane_g4_ParamLimits

0xd897,	// (0x0007d00a) cntbar_detail_list_event_pane_g4

0xd8af,	// (0x0007d022) cntbar_detail_list_event_pane_g5_ParamLimits

0xd8af,	// (0x0007d022) cntbar_detail_list_event_pane_g5

0xd8c7,	// (0x0007d03a) cntbar_detail_list_event_pane_g6_ParamLimits

0xd8c7,	// (0x0007d03a) cntbar_detail_list_event_pane_g6

0xd909,	// (0x0007d07c) cntbar_detail_list_event_pane_t3_ParamLimits

0xd909,	// (0x0007d07c) cntbar_detail_list_event_pane_t3

0xd91b,	// (0x0007d08e) popup_notif_wgt_window_ParamLimits

0xd91b,	// (0x0007d08e) popup_notif_wgt_window

0xd92b,	// (0x0007d09e) popup_submenu_window_cp01_ParamLimits

0xd92b,	// (0x0007d09e) popup_submenu_window_cp01

0x1021,	// (0x00070794) bg_popup_window_pane_cp10

0x0915,	// (0x00070088) listscroll_notif_wgt_pane

0x0927,	// (0x0007009a) list_notif_wgt_window

0x0930,	// (0x000700a3) scroll_pane_cp033

0xd93d,	// (0x0007d0b0) list_notif_wgt_row_pane_ParamLimits

0xd93d,	// (0x0007d0b0) list_notif_wgt_row_pane

0x0939,	// (0x000700ac) aid_size_list_notif_wgt_del

0x0946,	// (0x000700b9) list_notif_wgt_row_pane_g1

0x0952,	// (0x000700c5) list_notif_wgt_row_pane_g2

0x0961,	// (0x000700d4) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0007f61c) list_notif_wgt_row_pane_g

0x096e,	// (0x000700e1) list_notif_wgt_row_pane_t1

0x0984,	// (0x000700f7) list_notif_wgt_row_pane_t2

0x0996,	// (0x00070109) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0007f623) list_notif_wgt_row_pane_t

0xe08f,	// (0x0007d802) list_recal_day_event_pane_g1

0x09a8,	// (0x0007011b) list_recal_day_event_pane_t1

0xeb79,	// (0x0007e2ec) bg_button_pane_cp045

0xd94f,	// (0x0007d0c2) cntbar_detail_btn_pane_t1

0x2ecf,	// (0x00072642) main_callh_pane_ParamLimits

0x2ecf,	// (0x00072642) main_callh_pane

0xeb79,	// (0x0007e2ec) main_coverflow0_pane

0xeb79,	// (0x0007e2ec) main_wgtman_pane

0xcece,	// (0x0007c641) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xcece,	// (0x0007c641) main_fs_bigclock_unlock_btn_pane

0xd2c5,	// (0x0007ca38) bg_button_pane_cp16

0xd2d5,	// (0x0007ca48) cell_tport_appsw_pane_g3

0xd95d,	// (0x0007d0d0) cf0_flow_pane_ParamLimits

0xd95d,	// (0x0007d0d0) cf0_flow_pane

0x09b7,	// (0x0007012a) listscroll_cf0_pane

0x09c2,	// (0x00070135) main_cf0_pane_g1

0xd96c,	// (0x0007d0df) main_cf0_pane_t1_ParamLimits

0xd96c,	// (0x0007d0df) main_cf0_pane_t1

0xd980,	// (0x0007d0f3) main_cf0_pane_t2_ParamLimits

0xd980,	// (0x0007d0f3) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0007f62f) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0007f62f) main_cf0_pane_t

0x09d4,	// (0x00070147) scroll_pane_cp11

0xd994,	// (0x0007d107) cf0_flow_pane_g1

0xd99c,	// (0x0007d10f) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0007f634) cf0_flow_pane_g

0xd9a4,	// (0x0007d117) cf0_flow_pane_t1

0xeb79,	// (0x0007e2ec) main_call6_pane

0xeb79,	// (0x0007e2ec) main_calllock_pane

0xd9b2,	// (0x0007d125) call6_btn_grp_pane_ParamLimits

0xd9b2,	// (0x0007d125) call6_btn_grp_pane

0xd9c1,	// (0x0007d134) call6_pane_g1_ParamLimits

0xd9c1,	// (0x0007d134) call6_pane_g1

0xd9d0,	// (0x0007d143) popup_call6_1st_window_ParamLimits

0xd9d0,	// (0x0007d143) popup_call6_1st_window

0xd9de,	// (0x0007d151) popup_call6_2nd_window_ParamLimits

0xd9de,	// (0x0007d151) popup_call6_2nd_window

0xd9ec,	// (0x0007d15f) cell_call6_btn_pane_ParamLimits

0xd9ec,	// (0x0007d15f) cell_call6_btn_pane

0x1021,	// (0x00070794) bg_popup_call2_in_pane_cp03

0x09df,	// (0x00070152) popup_call6_1st_window_g1

0x09e7,	// (0x0007015a) popup_call6_1st_window_g2

0x09ef,	// (0x00070162) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0007f639) popup_call6_1st_window_g

0x09f7,	// (0x0007016a) popup_call6_1st_window_t1

0x0a06,	// (0x00070179) popup_call6_1st_window_t2

0x0a16,	// (0x00070189) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0007f640) popup_call6_1st_window_t

0x1021,	// (0x00070794) bg_popup_call2_in_pane_cp04

0x09df,	// (0x00070152) popup_call6_2nd_window_g1

0x09e7,	// (0x0007015a) popup_call6_2nd_window_g2

0x09ef,	// (0x00070162) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0007f639) popup_call6_2nd_window_g

0x09f7,	// (0x0007016a) popup_call6_2nd_window_t1

0xeb79,	// (0x0007e2ec) bg_button_pane_cp15

0x0a26,	// (0x00070199) cell_call6_btn_pane_g1

0x0a2f,	// (0x000701a2) cell_call6_btn_pane_t1

0xd9fb,	// (0x0007d16e) listscroll_wgtman_pane_ParamLimits

0xd9fb,	// (0x0007d16e) listscroll_wgtman_pane

0xda17,	// (0x0007d18a) wgtman_btn_pane_ParamLimits

0xda17,	// (0x0007d18a) wgtman_btn_pane

0x183a,	// (0x00070fad) aid_scroll_copy1

0x0a3e,	// (0x000701b1) list_wgtman_pane

0xda4c,	// (0x0007d1bf) wgtman_btn_pane_g1_ParamLimits

0xda4c,	// (0x0007d1bf) wgtman_btn_pane_g1

0xda74,	// (0x0007d1e7) wgtman_btn_pane_t1_ParamLimits

0xda74,	// (0x0007d1e7) wgtman_btn_pane_t1

0x0a48,	// (0x000701bb) wgtman_btn_pane_t2_ParamLimits

0x0a48,	// (0x000701bb) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0007f647) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0007f647) wgtman_btn_pane_t

0xdaab,	// (0x0007d21e) listrow_wgtman_pane_ParamLimits

0xdaab,	// (0x0007d21e) listrow_wgtman_pane

0xdac6,	// (0x0007d239) listrow_wgtman_pane_g1

0xdad3,	// (0x0007d246) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0007f64c) listrow_wgtman_pane_g

0x6032,	// (0x000757a5) listrow_wgtman_pane_t1

0x604a,	// (0x000757bd) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0007f651) listrow_wgtman_pane_t

0x6070,	// (0x000757e3) wait_bar_pane_cp09

0x0a5f,	// (0x000701d2) main_calllock_btn_pane

0x0a69,	// (0x000701dc) main_calllock_pane_g1

0xeb79,	// (0x0007e2ec) bg_button_pane_cp17

0x0a75,	// (0x000701e8) main_calllock_btn_pane_g1

0x0a7e,	// (0x000701f1) main_calllock_btn_pane_t1

0xeb79,	// (0x0007e2ec) main_dialer3_pane

0xeb79,	// (0x0007e2ec) main_fmrd2_pane

0x32ee,	// (0x00072a61) main_fs_bigclock_unlock_btn_pane_g1

0xdaf9,	// (0x0007d26c) main_fs_bigclock_unlock_btn_pane_t1

0xdb07,	// (0x0007d27a) area_fmrd2_info_pane_ParamLimits

0xdb07,	// (0x0007d27a) area_fmrd2_info_pane

0xdb15,	// (0x0007d288) area_fmrd2_visual_pane_ParamLimits

0xdb15,	// (0x0007d288) area_fmrd2_visual_pane

0xdb23,	// (0x0007d296) fmrd2_indi_pane_ParamLimits

0xdb23,	// (0x0007d296) fmrd2_indi_pane

0xdb30,	// (0x0007d2a3) area_fmrd2_visual_pane_g1

0xdb38,	// (0x0007d2ab) area_fmrd2_visual_pane_t1

0xdb48,	// (0x0007d2bb) area_fmrd2_visual_pane_t2

0xdb58,	// (0x0007d2cb) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0007f65b) area_fmrd2_visual_pane_t

0xdb68,	// (0x0007d2db) area_fmrd2_info_pane_g1

0xdb70,	// (0x0007d2e3) area_fmrd2_info_pane_t1

0xdb80,	// (0x0007d2f3) area_fmrd2_info_pane_t2

0xdb90,	// (0x0007d303) area_fmrd2_info_pane_t3

0xdba0,	// (0x0007d313) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0007f662) area_fmrd2_info_pane_t

0xdbae,	// (0x0007d321) fmrd2_indi_pane_t1

0xdbbe,	// (0x0007d331) fmrd2_indi_pane_t2

0xdbce,	// (0x0007d341) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0007f66b) fmrd2_indi_pane_t

0x0072,	// (0x0006f7e5) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x0072,	// (0x0006f7e5) list_single_fs_bigclock_indicator_pane_g5

0x0123,	// (0x0006f896) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x0123,	// (0x0006f896) list_single_fs_bigclock_indicator_pane_t5

0xd466,	// (0x0007cbd9) aid_cell_bcale_month_pane_ParamLimits

0xd466,	// (0x0007cbd9) aid_cell_bcale_month_pane

0xd48d,	// (0x0007cc00) bcale_month_pane_ParamLimits

0xd48d,	// (0x0007cc00) bcale_month_pane

0xd4ab,	// (0x0007cc1e) bcale_preview_pane_ParamLimits

0xd4ab,	// (0x0007cc1e) bcale_preview_pane

0x0848,	// (0x0006ffbb) list_single_fs_bigclock_pane_t1_ParamLimits

0x0867,	// (0x0006ffda) list_single_fs_bigclock_pane_t2_ParamLimits

0x0867,	// (0x0006ffda) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0007f5ed) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0007f5ed) list_single_fs_bigclock_pane_t

0xdaf1,	// (0x0007d264) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0007f656) main_fs_bigclock_unlock_btn_pane_g

0xdbdc,	// (0x0007d34f) aid_dia3_key_size_ParamLimits

0xdbdc,	// (0x0007d34f) aid_dia3_key_size

0xdbe8,	// (0x0007d35b) aid_dia3_listrow_size_ParamLimits

0xdbe8,	// (0x0007d35b) aid_dia3_listrow_size

0xdbf8,	// (0x0007d36b) dia3_keypad_fun_pane_ParamLimits

0xdbf8,	// (0x0007d36b) dia3_keypad_fun_pane

0xdc0a,	// (0x0007d37d) dia3_keypad_num_pane_ParamLimits

0xdc0a,	// (0x0007d37d) dia3_keypad_num_pane

0xdc1c,	// (0x0007d38f) dia3_listscroll_pane_ParamLimits

0xdc1c,	// (0x0007d38f) dia3_listscroll_pane

0xdc2a,	// (0x0007d39d) dia3_numentry_pane_ParamLimits

0xdc2a,	// (0x0007d39d) dia3_numentry_pane

0x0a8d,	// (0x00070200) dia3_list_pane

0x0a98,	// (0x0007020b) scroll_pane_cp12

0xeb79,	// (0x0007e2ec) bg_dia3_numentry_pane

0xdc38,	// (0x0007d3ab) dia3_numentry_pane_t1

0xdc47,	// (0x0007d3ba) cell_dia3_key_num_pane

0xdc4f,	// (0x0007d3c2) cell_dia3_key0_fun_pane_ParamLimits

0xdc4f,	// (0x0007d3c2) cell_dia3_key0_fun_pane

0xdc5c,	// (0x0007d3cf) cell_dia3_key1_fun_pane_ParamLimits

0xdc5c,	// (0x0007d3cf) cell_dia3_key1_fun_pane

0xdc69,	// (0x0007d3dc) dia3_listrow_pane

0xe90f,	// (0x0007e082) bg_dia3_numentry_pane_g1

0xeb79,	// (0x0007e2ec) bg_button_pane_cp21

0x0aa3,	// (0x00070216) cell_dia3_key_num_pane_t1

0x0ab1,	// (0x00070224) cell_dia3_key_num_pane_t2

0x0ac0,	// (0x00070233) cell_dia3_key_num_pane_t3

0x0acf,	// (0x00070242) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0007f672) cell_dia3_key_num_pane_t

0xeb79,	// (0x0007e2ec) bg_button_pane_cp19

0xdc76,	// (0x0007d3e9) cell_dia3_key0_fun_pane_g1

0xeb79,	// (0x0007e2ec) bg_button_pane_cp20

0xdc7e,	// (0x0007d3f1) cell_dia3_key1_fun_pane_g1

0xdc86,	// (0x0007d3f9) area_left_week_number_pane

0xdc99,	// (0x0007d40c) area_top_day_name_pane

0xdca7,	// (0x0007d41a) frame_month_view_pane

0x0ade,	// (0x00070251) grid_month_view_pane

0xdcbc,	// (0x0007d42f) cell_top_day_name_pane_ParamLimits

0xdcbc,	// (0x0007d42f) cell_top_day_name_pane

0xdcd6,	// (0x0007d449) cell_area_left_week_number_pane_ParamLimits

0xdcd6,	// (0x0007d449) cell_area_left_week_number_pane

0xdcf9,	// (0x0007d46c) cell_month_view_pane_ParamLimits

0xdcf9,	// (0x0007d46c) cell_month_view_pane

0x0aec,	// (0x0007025f) frm_month_g1

0xdd25,	// (0x0007d498) frm_month_g2

0xdd36,	// (0x0007d4a9) frm_month_g3

0xdd47,	// (0x0007d4ba) frm_month_g4

0xdd58,	// (0x0007d4cb) frm_month_g5

0xdd6b,	// (0x0007d4de) frm_month_g6

0xdd7e,	// (0x0007d4f1) frm_month_g7

0x0af9,	// (0x0007026c) frm_month_g8

0xdd91,	// (0x0007d504) frm_month_g9

0xdd9e,	// (0x0007d511) frm_month_g10

0xddab,	// (0x0007d51e) frm_month_g11

0xddb8,	// (0x0007d52b) frm_month_g12

0xddc5,	// (0x0007d538) frm_month_g13

0xddd2,	// (0x0007d545) frm_month_g14

0xdde1,	// (0x0007d554) frm_month_g15

0xddf0,	// (0x0007d563) frm_month_g16

0x000f,

0xff08,	// (0x0007f67b) frm_month_g

0x0b06,	// (0x00070279) cell_top_day_name_pane_t1

0xddff,	// (0x0007d572) cell_area_left_week_number_pane_g1

0xde0e,	// (0x0007d581) cell_area_left_week_number_pane_t1

0x3551,	// (0x00072cc4) cell_month_view_pane_g1

0xde24,	// (0x0007d597) cell_month_view_pane_t1

0xeb79,	// (0x0007e2ec) main_fps_pane

0x0313,	// (0x0006fa86) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x0313,	// (0x0006fa86) cmail_ddmenu_btn02_pane_cp1

0x032f,	// (0x0006faa2) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x032f,	// (0x0006faa2) cmail_ddmenu_btn02_pane_cp2

0xd696,	// (0x0007ce09) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd696,	// (0x0007ce09) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0007f5a0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0007f5a0) cmail_ddmenu_btn02_pane_g

0xd6b5,	// (0x0007ce28) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd6b5,	// (0x0007ce28) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0007f5a5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0007f5a5) cmail_ddmenu_btn02_pane_t

0xde3a,	// (0x0007d5ad) fps_text_pane_ParamLimits

0xde3a,	// (0x0007d5ad) fps_text_pane

0xde47,	// (0x0007d5ba) main_fps_pane_g1_ParamLimits

0xde47,	// (0x0007d5ba) main_fps_pane_g1

0xde55,	// (0x0007d5c8) wait_bar_pane_cp010_ParamLimits

0xde55,	// (0x0007d5c8) wait_bar_pane_cp010

0xde61,	// (0x0007d5d4) fps_text_pane_t1_ParamLimits

0xde61,	// (0x0007d5d4) fps_text_pane_t1

0xb2b1,	// (0x0007aa24) cam4_image_uncrop_pane_g1

0xb2ba,	// (0x0007aa2d) cam4_image_uncrop_pane_g2

0xb2c3,	// (0x0007aa36) cam4_image_uncrop_pane_g3

0xb2cc,	// (0x0007aa3f) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0007f061) cam4_image_uncrop_pane_g

0xdc69,	// (0x0007d3dc) dia3_listrow_pane_ParamLimits

0xeb79,	// (0x0007e2ec) main_phob2_pane

0xd2a7,	// (0x0007ca1a) cell_tport_appsw_pane_cp02_ParamLimits

0xd2a7,	// (0x0007ca1a) cell_tport_appsw_pane_cp02

0xd2b6,	// (0x0007ca29) cell_tport_appsw_pane_cp03_ParamLimits

0xd2b6,	// (0x0007ca29) cell_tport_appsw_pane_cp03

0xeb79,	// (0x0007e2ec) phob2_contact_card_pane

0xeb79,	// (0x0007e2ec) phob2_listscroll_pane

0x0b19,	// (0x0007028c) phob2_list_pane

0x0b21,	// (0x00070294) scroll_pane_cp034

0xde7a,	// (0x0007d5ed) phob2_cc_data_pane_ParamLimits

0xde7a,	// (0x0007d5ed) phob2_cc_data_pane

0xde94,	// (0x0007d607) phob2_cc_listscroll_pane_ParamLimits

0xde94,	// (0x0007d607) phob2_cc_listscroll_pane

0xdaab,	// (0x0007d21e) list_double_large_graphic_phob2_pane_ParamLimits

0xdaab,	// (0x0007d21e) list_double_large_graphic_phob2_pane

0xdeae,	// (0x0007d621) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xdeae,	// (0x0007d621) list_double_large_graphic_phob2_pane_g1

0x6082,	// (0x000757f5) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x6082,	// (0x000757f5) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0007f69c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0007f69c) list_double_large_graphic_phob2_pane_g

0x608e,	// (0x00075801) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x608e,	// (0x00075801) list_double_large_graphic_phob2_pane_t1

0x60a3,	// (0x00075816) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x60a3,	// (0x00075816) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0007f6a1) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0007f6a1) list_double_large_graphic_phob2_pane_t

0xeb79,	// (0x0007e2ec) list_highlight_pane_cp024

0xdec4,	// (0x0007d637) phob2_cc_button_pane

0xdecc,	// (0x0007d63f) phob2_cc_data_pane_g1_ParamLimits

0xdecc,	// (0x0007d63f) phob2_cc_data_pane_g1

0xded8,	// (0x0007d64b) phob2_cc_data_pane_g2_ParamLimits

0xded8,	// (0x0007d64b) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0007f6a6) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0007f6a6) phob2_cc_data_pane_g

0xdee4,	// (0x0007d657) phob2_cc_data_pane_t1_ParamLimits

0xdee4,	// (0x0007d657) phob2_cc_data_pane_t1

0xdef6,	// (0x0007d669) phob2_cc_data_pane_t2_ParamLimits

0xdef6,	// (0x0007d669) phob2_cc_data_pane_t2

0xdf08,	// (0x0007d67b) phob2_cc_data_pane_t3_ParamLimits

0xdf08,	// (0x0007d67b) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0007f6ab) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0007f6ab) phob2_cc_data_pane_t

0x0b29,	// (0x0007029c) phob2_cc_list_pane_ParamLimits

0x0b29,	// (0x0007029c) phob2_cc_list_pane

0xe832,	// (0x0007dfa5) scroll_pane_cp035_ParamLimits

0xe832,	// (0x0007dfa5) scroll_pane_cp035

0x2edd,	// (0x00072650) bg_button_pane_cp033

0x0b35,	// (0x000702a8) phob2_cc_button_pane_g1

0x0b41,	// (0x000702b4) phob2_cc_button_pane_t1

0x0b56,	// (0x000702c9) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0007f6b2) phob2_cc_button_pane_t

0xdf1a,	// (0x0007d68d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xdf1a,	// (0x0007d68d) list_double_large_graphic_phob2_cc_pane

0xdf41,	// (0x0007d6b4) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xdf41,	// (0x0007d6b4) list_double_large_graphic_phob2_cc_pane_g1

0xdf52,	// (0x0007d6c5) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xdf52,	// (0x0007d6c5) list_double_large_graphic_phob2_cc_pane_g2

0x60b5,	// (0x00075828) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x60b5,	// (0x00075828) list_double_large_graphic_phob2_cc_pane_g3

0x60c1,	// (0x00075834) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x60c1,	// (0x00075834) list_double_large_graphic_phob2_cc_pane_g4

0x60cd,	// (0x00075840) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x60cd,	// (0x00075840) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0007f6b7) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0007f6b7) list_double_large_graphic_phob2_cc_pane_g

0x60d9,	// (0x0007584c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x60d9,	// (0x0007584c) list_double_large_graphic_phob2_cc_pane_t1

0x6102,	// (0x00075875) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x6102,	// (0x00075875) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0007f6c2) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0007f6c2) list_double_large_graphic_phob2_cc_pane_t

0x0b68,	// (0x000702db) list_highlight_pane_cp025_ParamLimits

0x0b68,	// (0x000702db) list_highlight_pane_cp025

0x2edd,	// (0x00072650) bg_button_pane_cp033_ParamLimits

0x0b35,	// (0x000702a8) phob2_cc_button_pane_g1_ParamLimits

0x0b41,	// (0x000702b4) phob2_cc_button_pane_t1_ParamLimits

0x0b56,	// (0x000702c9) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0007f6b2) phob2_cc_button_pane_t_ParamLimits

0x6402,	// (0x00075b75) popup_wgtman_window

0x3eee,	// (0x00073661) scroll_pane_cp038

0xda34,	// (0x0007d1a7) wgtman_btn_pane_cp_01_ParamLimits

0xda34,	// (0x0007d1a7) wgtman_btn_pane_cp_01

0x0b76,	// (0x000702e9) wgtman_content_pane

0x0b7f,	// (0x000702f2) wgtman_heading_pane

0xeb79,	// (0x0007e2ec) bg_heading_pane_cp02

0x0b88,	// (0x000702fb) wgtman_heading_pane_g1

0x0b90,	// (0x00070303) wgtman_heading_pane_t1

0x0b9e,	// (0x00070311) scroll_pane_cp036

0x0ba6,	// (0x00070319) wgtman_list_pane

0x0bae,	// (0x00070321) wgtman_list_pane_t1_ParamLimits

0x0bae,	// (0x00070321) wgtman_list_pane_t1

0xb210,	// (0x0007a983) cam4_grid_pane

0x538b,	// (0x00074afe) bg_button_pane_cp015_ParamLimits

0xbeeb,	// (0x0007b65e) bg_button_pane_cp016_ParamLimits

0xbefe,	// (0x0007b671) bg_button_pane_cp017_ParamLimits

0x53cf,	// (0x00074b42) popup_vitu2_query_window_g3_ParamLimits

0x53cf,	// (0x00074b42) popup_vitu2_query_window_g3

0x5448,	// (0x00074bbb) popup_vitu2_query_window_t6_ParamLimits

0x5448,	// (0x00074bbb) popup_vitu2_query_window_t6

0x5473,	// (0x00074be6) popup_vitu2_query_window_t7_ParamLimits

0x5473,	// (0x00074be6) popup_vitu2_query_window_t7

0xf0b8,	// (0x0007e82b) cam4_grid_pane_g1

0xf0c1,	// (0x0007e834) cam4_grid_pane_g2

0x0bc8,	// (0x0007033b) cam4_grid_pane_g3

0x0bd1,	// (0x00070344) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0007f6c7) cam4_grid_pane_g

0x718c,	// (0x000768ff) aid_placing_vt_slider_lsc_ParamLimits

0x74d8,	// (0x00076c4b) vidtel_button_pane_ParamLimits

0x74d8,	// (0x00076c4b) vidtel_button_pane

0xeb79,	// (0x0007e2ec) bg_button_pane_cp034

0xdf5e,	// (0x0007d6d1) vidtel_button_pane_g1

0x0bdc,	// (0x0007034f) vidtel_button_pane_t1

0x4020,	// (0x00073793) aid_size_vtel_slider_touch

0xe832,	// (0x0007dfa5) scroll_pane_cp039

0xcc0b,	// (0x0007c37e) ncim_query_button_pane_cp01_ParamLimits

0xcc2a,	// (0x0007c39d) ncimui_query_pane_g1_ParamLimits

0x2edd,	// (0x00072650) input_focus_pane_cp012_ParamLimits

0xe94d,	// (0x0007e0c0) ncim_query_entry_pane_t1_ParamLimits

0xe832,	// (0x0007dfa5) scroll_pane_cp039_ParamLimits

0x192c,	// (0x0007109f) navi_pane_bcale_mc_g1

0x1934,	// (0x000710a7) navi_pane_bcale_mc_t1

0x0378,	// (0x0006faeb) main_sp_fs_email_pane_g1

0x0384,	// (0x0006faf7) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0007f458) main_sp_fs_email_pane_g

0x05cc,	// (0x0006fd3f) list_single_cale_mrui_row_pane_g3_ParamLimits

0x05cc,	// (0x0006fd3f) list_single_cale_mrui_row_pane_g3

0x5f90,	// (0x00075703) list_single_recal_day_pane_g5_event_pane

0x5fa6,	// (0x00075719) list_single_recal_day_pane_g7

0x0bf2,	// (0x00070365) list_recal_day_event_pane_cp01

0x0bfb,	// (0x0007036e) list_recal_vselct_arw_lo_pane_cp01

0x0c03,	// (0x00070376) list_recal_vselct_arw_up_pane_cp01

0x0c0b,	// (0x0007037e) list_recal_vselct_pane_cp01

0xe08f,	// (0x0007d802) list_recal_day_event_pane_cp01_g1

0x612b,	// (0x0007589e) list_recal_day_event_pane_cp01_t1

0x5fae,	// (0x00075721) list_single_recal_day_pane_t1_ParamLimits

0x5fc0,	// (0x00075733) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0007f5b5) list_single_recal_day_pane_t_ParamLimits

0x0d97,	// (0x0007050a) bg_notes_pane_ParamLimits

0x0e3a,	// (0x000705ad) list_notes_pane_ParamLimits

0x6760,	// (0x00075ed3) scroll_pane_cp06_ParamLimits

0x0e5c,	// (0x000705cf) main_notes_pane_ParamLimits

0xeb79,	// (0x0007e2ec) main_welc_pane

0xdf66,	// (0x0007d6d9) main_welc_body_pane_ParamLimits

0xdf66,	// (0x0007d6d9) main_welc_body_pane

0xdf80,	// (0x0007d6f3) main_welc_opti_pane_ParamLimits

0xdf80,	// (0x0007d6f3) main_welc_opti_pane

0xdfb3,	// (0x0007d726) main_welc_pane_t1_ParamLimits

0xdfb3,	// (0x0007d726) main_welc_pane_t1

0xdfcd,	// (0x0007d740) main_welc_body_row_pane_ParamLimits

0xdfcd,	// (0x0007d740) main_welc_body_row_pane

0xeb83,	// (0x0007e2f6) main_welc_opti_row_pane_ParamLimits

0xeb83,	// (0x0007e2f6) main_welc_opti_row_pane

0x0c15,	// (0x00070388) main_welc_opti_row_pane_g1

0xdff2,	// (0x0007d765) main_welc_opti_row_pane_t1

0x0c1d,	// (0x00070390) main_welc_body_row_pane_t1

0x091f,	// (0x00070092) popup_notif_wgt_heading_pane

0x0939,	// (0x000700ac) aid_size_list_notif_wgt_del_ParamLimits

0x0946,	// (0x000700b9) list_notif_wgt_row_pane_g1_ParamLimits

0x0952,	// (0x000700c5) list_notif_wgt_row_pane_g2_ParamLimits

0x0961,	// (0x000700d4) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0007f61c) list_notif_wgt_row_pane_g_ParamLimits

0x096e,	// (0x000700e1) list_notif_wgt_row_pane_t1_ParamLimits

0x0984,	// (0x000700f7) list_notif_wgt_row_pane_t2_ParamLimits

0x0996,	// (0x00070109) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0007f623) list_notif_wgt_row_pane_t_ParamLimits

0xdac6,	// (0x0007d239) listrow_wgtman_pane_g1_ParamLimits

0xdad3,	// (0x0007d246) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0007f64c) listrow_wgtman_pane_g_ParamLimits

0x6032,	// (0x000757a5) listrow_wgtman_pane_t1_ParamLimits

0x604a,	// (0x000757bd) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0007f651) listrow_wgtman_pane_t_ParamLimits

0x6070,	// (0x000757e3) wait_bar_pane_cp09_ParamLimits

0xeb79,	// (0x0007e2ec) bg_popup_heading_pane_cp02

0x0c2c,	// (0x0007039f) popup_notif_wgt_heading_pane_g1

0x0c34,	// (0x000703a7) popup_notif_wgt_heading_pane_t1

0xeb79,	// (0x0007e2ec) main_vids_pane

0xeb79,	// (0x0007e2ec) vids_listscroll_pane

0xe001,	// (0x0007d774) scroll_pane_cp040

0xeb79,	// (0x0007e2ec) vids_list_pane

0xe00c,	// (0x0007d77f) vids_list_double_pane_ParamLimits

0xe00c,	// (0x0007d77f) vids_list_double_pane

0xe026,	// (0x0007d799) vids_list_double_pane_g1

0xe02f,	// (0x0007d7a2) vids_list_double_pane_t1

0xe03f,	// (0x0007d7b2) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0007f6d5) vids_list_double_pane_t

0x2edd,	// (0x00072650) main_ncimui_pane_ParamLimits

0xca62,	// (0x0007c1d5) main_ncimui_pane_g1_ParamLimits

0xca6e,	// (0x0007c1e1) main_ncimui_pane_g2_ParamLimits

0xca6e,	// (0x0007c1e1) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0007f35d) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0007f35d) main_ncimui_pane_g

0xdf99,	// (0x0007d70c) main_welc_pane_g1_ParamLimits

0xdf99,	// (0x0007d70c) main_welc_pane_g1

0xdfa5,	// (0x0007d718) main_welc_pane_g2_ParamLimits

0xdfa5,	// (0x0007d718) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0007f6d0) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0007f6d0) main_welc_pane_g

0x0d97,	// (0x0007050a) listscroll_mce_pane_ParamLimits

0x1a81,	// (0x000711f4) wait_bar_pane_cp10

0x2ec3,	// (0x00072636) main_cale_day_pane_ParamLimits

0x2ec3,	// (0x00072636) main_cale_week_pane_ParamLimits

0x0d97,	// (0x0007050a) main_messa_pane_ParamLimits

0xa671,	// (0x00079de4) main_clock2_btn_pane_ParamLimits

0xa671,	// (0x00079de4) main_clock2_btn_pane

0x3741,	// (0x00072eb4) main_clock2_btn_pane_cp01_ParamLimits

0x3741,	// (0x00072eb4) main_clock2_btn_pane_cp01

0x059d,	// (0x0006fd10) list_cale_mrui_pane_ParamLimits

0x09cc,	// (0x0007013f) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0007f62a) main_cf0_pane_g

0xdc86,	// (0x0007d3f9) area_left_week_number_pane_ParamLimits

0xdc99,	// (0x0007d40c) area_top_day_name_pane_ParamLimits

0xdca7,	// (0x0007d41a) frame_month_view_pane_ParamLimits

0x0ade,	// (0x00070251) grid_month_view_pane_ParamLimits

0x0aec,	// (0x0007025f) frm_month_g1_ParamLimits

0xdd25,	// (0x0007d498) frm_month_g2_ParamLimits

0xdd36,	// (0x0007d4a9) frm_month_g3_ParamLimits

0xdd47,	// (0x0007d4ba) frm_month_g4_ParamLimits

0xdd58,	// (0x0007d4cb) frm_month_g5_ParamLimits

0xdd6b,	// (0x0007d4de) frm_month_g6_ParamLimits

0xdd7e,	// (0x0007d4f1) frm_month_g7_ParamLimits

0x0af9,	// (0x0007026c) frm_month_g8_ParamLimits

0xdd91,	// (0x0007d504) frm_month_g9_ParamLimits

0xdd9e,	// (0x0007d511) frm_month_g10_ParamLimits

0xddab,	// (0x0007d51e) frm_month_g11_ParamLimits

0xddb8,	// (0x0007d52b) frm_month_g12_ParamLimits

0xddc5,	// (0x0007d538) frm_month_g13_ParamLimits

0xddd2,	// (0x0007d545) frm_month_g14_ParamLimits

0xdde1,	// (0x0007d554) frm_month_g15_ParamLimits

0xddf0,	// (0x0007d563) frm_month_g16_ParamLimits

0xff08,	// (0x0007f67b) frm_month_g_ParamLimits

0x0b06,	// (0x00070279) cell_top_day_name_pane_t1_ParamLimits

0xddff,	// (0x0007d572) cell_area_left_week_number_pane_g1_ParamLimits

0xde0e,	// (0x0007d581) cell_area_left_week_number_pane_t1_ParamLimits

0x3551,	// (0x00072cc4) cell_month_view_pane_g1_ParamLimits

0xde24,	// (0x0007d597) cell_month_view_pane_t1_ParamLimits

0x0d8f,	// (0x00070502) main_clock2_btn_pane_g1

0x0c42,	// (0x000703b5) main_clock2_btn_pane_t1

0x2edd,	// (0x00072650) listscroll_cmail_pane_ParamLimits

0x0378,	// (0x0006faeb) main_sp_fs_email_pane_g1_ParamLimits

0x0384,	// (0x0006faf7) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0007f458) main_sp_fs_email_pane_g_ParamLimits

0x06ab,	// (0x0006fe1e) list_recal_day_pane_ParamLimits

0x06bc,	// (0x0006fe2f) mian_recal_day_pane_t1

0x597f,	// (0x000750f2) list_single_dyc_row_text_pane_t4_ParamLimits

0x597f,	// (0x000750f2) list_single_dyc_row_text_pane_t4

0x59b6,	// (0x00075129) list_single_dyc_row_text_pane_t5_ParamLimits

0x59b6,	// (0x00075129) list_single_dyc_row_text_pane_t5

0x5a2c,	// (0x0007519f) list_single_dyc_row_text_pane_t6_ParamLimits

0x5a2c,	// (0x0007519f) list_single_dyc_row_text_pane_t6

0x8303,	// (0x00077a76) aid_mgn_list_cale_time_pane

0x2edd,	// (0x00072650) main_gallery2_pane_ParamLimits

0x3757,	// (0x00072eca) main_clock2_pane_cp01_t1

0x3767,	// (0x00072eda) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0007ef37) main_clock2_pane_cp01_t

0x6b9e,	// (0x00076311) cale_week_scroll_pane_g16_ParamLimits

0x6b9e,	// (0x00076311) cale_week_scroll_pane_g16

0x1021,	// (0x00070794) vorec_slider_pane

0x0bdc,	// (0x0007034f) vidtel_button_pane_t1_ParamLimits

0xd718,	// (0x0007ce8b) main_fs_bigclock_clock_pane_g1_ParamLimits

0xd718,	// (0x0007ce8b) main_fs_bigclock_clock_pane_g2_ParamLimits

0xd725,	// (0x0007ce98) main_fs_bigclock_clock_pane_g3_ParamLimits

0xd725,	// (0x0007ce98) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x0007f5d8) main_fs_bigclock_clock_pane_g_ParamLimits

0xd731,	// (0x0007cea4) main_fs_bigclock_clock_pane_t1_ParamLimits

0xd744,	// (0x0007ceb7) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x0007f5e1) main_fs_bigclock_clock_pane_t_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
