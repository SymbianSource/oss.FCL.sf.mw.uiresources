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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0003e9f9 };

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
0x1dc5,	// (0x000407be) Screen

0x1dd1,	// (0x000407ca) application_window

0x1e2d,	// (0x00040826) area_bottom_pane_ParamLimits

0x1e2d,	// (0x00040826) area_bottom_pane

0x1e8b,	// (0x00040884) area_top_pane_ParamLimits

0x1e8b,	// (0x00040884) area_top_pane

0x1eef,	// (0x000408e8) call_video_uplink_pane_ParamLimits

0x1eef,	// (0x000408e8) call_video_uplink_pane

0x1f2e,	// (0x00040927) main_pane_ParamLimits

0x1f2e,	// (0x00040927) main_pane

0xca03,	// (0x0004b3fc) context_pane

0x5305,	// (0x00043cfe) navi_pane

0x532d,	// (0x00043d26) popup_cale_events_window_ParamLimits

0x532d,	// (0x00043d26) popup_cale_events_window

0xca16,	// (0x0004b40f) popup_mup_playback_window

0x5345,	// (0x00043d3e) signal_pane

0xa9a9,	// (0x000493a2) main_browser_pane

0xab68,	// (0x00049561) main_burst_pane

0x5175,	// (0x00043b6e) main_calc_pane

0xc9e9,	// (0x0004b3e2) main_cale_day_pane

0x260b,	// (0x00041004) main_cale_month_pane

0xc9e9,	// (0x0004b3e2) main_cale_week_pane

0xab68,	// (0x00049561) main_call_pane

0xa689,	// (0x00049082) main_call_poc_pane

0xab68,	// (0x00049561) main_camera_pane

0xab68,	// (0x00049561) main_chi_dic_pane

0xb343,	// (0x00049d3c) main_clock_pane

0xa689,	// (0x00049082) main_fmradio_pane

0xab68,	// (0x00049561) main_graph_messa_pane

0xa689,	// (0x00049082) main_help_pane

0xa9a9,	// (0x000493a2) main_im_pane

0xa8e4,	// (0x000492dd) main_image_pane_ParamLimits

0xa8e4,	// (0x000492dd) main_image_pane

0xa689,	// (0x00049082) main_location2_pane

0xab68,	// (0x00049561) main_location_pane

0xa8e4,	// (0x000492dd) main_messa_pane

0xa689,	// (0x00049082) main_mp2_pane

0xab68,	// (0x00049561) main_mp_pane

0xa689,	// (0x00049082) main_msg_pane

0xa689,	// (0x00049082) main_mup_eq_pane

0xa689,	// (0x00049082) main_mup_pane

0xa9a9,	// (0x000493a2) main_notes_pane

0xa689,	// (0x00049082) main_pec_pane

0xa689,	// (0x00049082) main_phob_pane

0xa689,	// (0x00049082) main_pinb_pane

0xa689,	// (0x00049082) main_postcard_pane

0xa689,	// (0x00049082) main_qdial_pane

0xab68,	// (0x00049561) main_skin_pane

0xa689,	// (0x00049082) main_smil2_pane

0xab68,	// (0x00049561) main_smil_pane

0xab68,	// (0x00049561) main_video_pane

0xab68,	// (0x00049561) main_video_tele_pane

0xa8e4,	// (0x000492dd) main_viewer_pane_ParamLimits

0xa8e4,	// (0x000492dd) main_viewer_pane

0xab68,	// (0x00049561) main_vorec_pane

0x51b5,	// (0x00043bae) popup_blid_sat_info_window_ParamLimits

0x51b5,	// (0x00043bae) popup_blid_sat_info_window

0x51db,	// (0x00043bd4) popup_dyc_status_message_window_ParamLimits

0x51db,	// (0x00043bd4) popup_dyc_status_message_window

0x51eb,	// (0x00043be4) popup_grid_large_graphic_window_ParamLimits

0x51eb,	// (0x00043be4) popup_grid_large_graphic_window

0x5280,	// (0x00043c79) popup_loc_request_window_ParamLimits

0x5280,	// (0x00043c79) popup_loc_request_window

0x52d9,	// (0x00043cd2) popup_wml_address_window_ParamLimits

0x52d9,	// (0x00043cd2) popup_wml_address_window

0x504d,	// (0x00043a46) call_muted_g1

0x4d0c,	// (0x00043705) popup_call_audio_conf_window_ParamLimits

0x4d0c,	// (0x00043705) popup_call_audio_conf_window

0x505d,	// (0x00043a56) popup_call_audio_first_window_ParamLimits

0x505d,	// (0x00043a56) popup_call_audio_first_window

0x509d,	// (0x00043a96) popup_call_audio_in_window_ParamLimits

0x509d,	// (0x00043a96) popup_call_audio_in_window

0x50c1,	// (0x00043aba) popup_call_audio_out_window_ParamLimits

0x50c1,	// (0x00043aba) popup_call_audio_out_window

0x50e3,	// (0x00043adc) popup_call_audio_second_window_ParamLimits

0x50e3,	// (0x00043adc) popup_call_audio_second_window

0x5113,	// (0x00043b0c) popup_call_audio_wait_window_ParamLimits

0x5113,	// (0x00043b0c) popup_call_audio_wait_window

0x5134,	// (0x00043b2d) popup_number_entry_window_ParamLimits

0x5134,	// (0x00043b2d) popup_number_entry_window

0xa241,	// (0x00048c3a) bg_popup_call_pane_cp05_ParamLimits

0xa241,	// (0x00048c3a) bg_popup_call_pane_cp05

0xa261,	// (0x00048c5a) popup_number_entry_window_t1

0xa274,	// (0x00048c6d) popup_number_entry_window_t2

0xa286,	// (0x00048c7f) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0004daa8) popup_number_entry_window_t

0xa2cd,	// (0x00048cc6) text_title_cp2

0xa2e0,	// (0x00048cd9) bg_popup_call_pane_cp_ParamLimits

0xa2e0,	// (0x00048cd9) bg_popup_call_pane_cp

0xa2ee,	// (0x00048ce7) call_thumbnail_pane

0xa2f6,	// (0x00048cef) popup_call_audio_in_window_g1_ParamLimits

0xa2f6,	// (0x00048cef) popup_call_audio_in_window_g1

0xa302,	// (0x00048cfb) popup_call_audio_in_window_g2_ParamLimits

0xa302,	// (0x00048cfb) popup_call_audio_in_window_g2

0xa30e,	// (0x00048d07) popup_call_audio_in_window_g3_ParamLimits

0xa30e,	// (0x00048d07) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0004dab1) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0004dab1) popup_call_audio_in_window_g

0xa31a,	// (0x00048d13) popup_call_audio_in_window_t1_ParamLimits

0xa31a,	// (0x00048d13) popup_call_audio_in_window_t1

0xa336,	// (0x00048d2f) popup_call_audio_in_window_t2_ParamLimits

0xa336,	// (0x00048d2f) popup_call_audio_in_window_t2

0xa352,	// (0x00048d4b) popup_call_audio_in_window_t3_ParamLimits

0xa352,	// (0x00048d4b) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0004dab8) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0004dab8) popup_call_audio_in_window_t

0xa2e0,	// (0x00048cd9) bg_popup_call_pane_cp01_ParamLimits

0xa2e0,	// (0x00048cd9) bg_popup_call_pane_cp01

0xa2ee,	// (0x00048ce7) call_thumbnail_pane_cp02

0xa365,	// (0x00048d5e) call_type_pane_cp022

0xa36d,	// (0x00048d66) popup_call_audio_out_window_g1_ParamLimits

0xa36d,	// (0x00048d66) popup_call_audio_out_window_g1

0xa37f,	// (0x00048d78) popup_call_audio_out_window_g2_ParamLimits

0xa37f,	// (0x00048d78) popup_call_audio_out_window_g2

0xa38b,	// (0x00048d84) popup_call_audio_out_window_g3_ParamLimits

0xa38b,	// (0x00048d84) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0004dabf) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0004dabf) popup_call_audio_out_window_g

0xa39d,	// (0x00048d96) popup_call_audio_out_window_t1_ParamLimits

0xa39d,	// (0x00048d96) popup_call_audio_out_window_t1

0xa3b5,	// (0x00048dae) popup_call_audio_out_window_t2_ParamLimits

0xa3b5,	// (0x00048dae) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0004dac6) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0004dac6) popup_call_audio_out_window_t

0xa3ca,	// (0x00048dc3) bg_popup_call_pane_ParamLimits

0xa3ca,	// (0x00048dc3) bg_popup_call_pane

0x20f9,	// (0x00040af2) call_thumbnail_pane_cp_ParamLimits

0x20f9,	// (0x00040af2) call_thumbnail_pane_cp

0xa44e,	// (0x00048e47) call_type_pane_cp01_ParamLimits

0xa44e,	// (0x00048e47) call_type_pane_cp01

0xa492,	// (0x00048e8b) popup_call_audio_first_window_g1_ParamLimits

0xa492,	// (0x00048e8b) popup_call_audio_first_window_g1

0xa4de,	// (0x00048ed7) popup_call_audio_first_window_g2_ParamLimits

0xa4de,	// (0x00048ed7) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0004dacb) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0004dacb) popup_call_audio_first_window_g

0xa522,	// (0x00048f1b) popup_call_audio_first_window_t1_ParamLimits

0xa522,	// (0x00048f1b) popup_call_audio_first_window_t1

0xa5ce,	// (0x00048fc7) popup_call_audio_first_window_t4_ParamLimits

0xa5ce,	// (0x00048fc7) popup_call_audio_first_window_t4

0xa65a,	// (0x00049053) popup_call_audio_first_window_t5_ParamLimits

0xa65a,	// (0x00049053) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0004dad0) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0004dad0) popup_call_audio_first_window_t

0xa689,	// (0x00049082) bg_popup_call_pane_cp02

0xa693,	// (0x0004908c) call_type_pane_cp023

0xa69b,	// (0x00049094) popup_call_audio_wait_window_g1

0xa6a3,	// (0x0004909c) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0004dad7) popup_call_audio_wait_window_g

0xa6ab,	// (0x000490a4) popup_call_audio_wait_window_t3

0xa6b9,	// (0x000490b2) bg_popup_call_pane_cp03_ParamLimits

0xa6b9,	// (0x000490b2) bg_popup_call_pane_cp03

0xa719,	// (0x00049112) call_thumbnail_pane_cp011_ParamLimits

0xa719,	// (0x00049112) call_thumbnail_pane_cp011

0xa725,	// (0x0004911e) call_type_pane_cp034_ParamLimits

0xa725,	// (0x0004911e) call_type_pane_cp034

0xa761,	// (0x0004915a) popup_call_audio_second_window_g1_ParamLimits

0xa761,	// (0x0004915a) popup_call_audio_second_window_g1

0xa79d,	// (0x00049196) popup_call_audio_second_window_g2_ParamLimits

0xa79d,	// (0x00049196) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0004dadc) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0004dadc) popup_call_audio_second_window_g

0xa7d9,	// (0x000491d2) popup_call_audio_second_window_t1_ParamLimits

0xa7d9,	// (0x000491d2) popup_call_audio_second_window_t1

0xa85a,	// (0x00049253) popup_call_audio_second_window_t2_ParamLimits

0xa85a,	// (0x00049253) popup_call_audio_second_window_t2

0xa890,	// (0x00049289) popup_call_audio_second_window_t3_ParamLimits

0xa890,	// (0x00049289) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0004dae1) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0004dae1) popup_call_audio_second_window_t

0xa689,	// (0x00049082) bg_popup_call_pane_cp04

0xa8c6,	// (0x000492bf) list_conf_pane

0xa8ce,	// (0x000492c7) popup_call_audio_conf_window_t1

0xa8dc,	// (0x000492d5) call_thumbnail_pane_g1

0xa8e4,	// (0x000492dd) bg_pinb_pane_ParamLimits

0xa8e4,	// (0x000492dd) bg_pinb_pane

0xa8f2,	// (0x000492eb) find_pinb_pane

0xa8fb,	// (0x000492f4) listscroll_pinb_pane_ParamLimits

0xa8fb,	// (0x000492f4) listscroll_pinb_pane

0xa90a,	// (0x00049303) pinb_bg_pane_g1

0x211d,	// (0x00040b16) pinb_bg_pane_g2

0x2129,	// (0x00040b22) pinb_bg_pane_g3

0x2135,	// (0x00040b2e) pinb_bg_pane_g4

0x2141,	// (0x00040b3a) pinb_bg_pane_g5

0x214d,	// (0x00040b46) pinb_bg_pane_g6

0x2158,	// (0x00040b51) pinb_bg_pane_g7

0x2163,	// (0x00040b5c) pinb_bg_pane_g8

0x216e,	// (0x00040b67) pinb_bg_pane_g9

0x2178,	// (0x00040b71) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0004dae8) pinb_bg_pane_g

0x2195,	// (0x00040b8e) grid_pinb_pane

0x21a0,	// (0x00040b99) list_pinb_pane

0x21ab,	// (0x00040ba4) scroll_pane_cp01_ParamLimits

0x21ab,	// (0x00040ba4) scroll_pane_cp01

0xa914,	// (0x0004930d) find_pinb_pane_g1_ParamLimits

0xa914,	// (0x0004930d) find_pinb_pane_g1

0xa92c,	// (0x00049325) find_pinb_pane_t1

0xa93e,	// (0x00049337) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0004db02) find_pinb_pane_t

0xa953,	// (0x0004934c) input_focus_pane_cp01_ParamLimits

0xa953,	// (0x0004934c) input_focus_pane_cp01

0x21bd,	// (0x00040bb6) cell_pinb_pane_ParamLimits

0x21bd,	// (0x00040bb6) cell_pinb_pane

0x21e2,	// (0x00040bdb) cell_pinb_pane_g1_ParamLimits

0x21e2,	// (0x00040bdb) cell_pinb_pane_g1

0x21f7,	// (0x00040bf0) cell_pinb_pane_g2_ParamLimits

0x21f7,	// (0x00040bf0) cell_pinb_pane_g2

0xa95f,	// (0x00049358) cell_pinb_pane_g3_ParamLimits

0xa95f,	// (0x00049358) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0004db07) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0004db07) cell_pinb_pane_g

0xa689,	// (0x00049082) grid_highlight_pane_cp01

0x2203,	// (0x00040bfc) list_pinb_item_pane_ParamLimits

0x2203,	// (0x00040bfc) list_pinb_item_pane

0xa689,	// (0x00049082) list_highlight_pane_cp02

0x2221,	// (0x00040c1a) list_pinb_item_pane_g1_ParamLimits

0x2221,	// (0x00040c1a) list_pinb_item_pane_g1

0x222e,	// (0x00040c27) list_pinb_item_pane_g2_ParamLimits

0x222e,	// (0x00040c27) list_pinb_item_pane_g2

0x223a,	// (0x00040c33) list_pinb_item_pane_g3_ParamLimits

0x223a,	// (0x00040c33) list_pinb_item_pane_g3

0x224b,	// (0x00040c44) list_pinb_item_pane_g4_ParamLimits

0x224b,	// (0x00040c44) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0004db0e) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0004db0e) list_pinb_item_pane_g

0x2257,	// (0x00040c50) list_pinb_item_pane_t1_ParamLimits

0x2257,	// (0x00040c50) list_pinb_item_pane_t1

0x2288,	// (0x00040c81) calc_display_pane

0x22a6,	// (0x00040c9f) calc_paper_pane

0x22c2,	// (0x00040cbb) grid_calc_pane

0xa689,	// (0x00049082) bg_list_pane_cp01

0x22ee,	// (0x00040ce7) clock_g1

0x22f6,	// (0x00040cef) clock_g2

0x0001,

0xf11e,	// (0x0004db17) clock_g

0x2300,	// (0x00040cf9) clock_t1_ParamLimits

0x2300,	// (0x00040cf9) clock_t1

0x2315,	// (0x00040d0e) clock_t2_ParamLimits

0x2315,	// (0x00040d0e) clock_t2

0x2327,	// (0x00040d20) clock_t3_ParamLimits

0x2327,	// (0x00040d20) clock_t3

0x2339,	// (0x00040d32) clock_t4_ParamLimits

0x2339,	// (0x00040d32) clock_t4

0x234b,	// (0x00040d44) clock_t5_ParamLimits

0x234b,	// (0x00040d44) clock_t5

0x2360,	// (0x00040d59) clock_t6_ParamLimits

0x2360,	// (0x00040d59) clock_t6

0x2372,	// (0x00040d6b) clock_t7_ParamLimits

0x2372,	// (0x00040d6b) clock_t7

0x2384,	// (0x00040d7d) clock_t8_ParamLimits

0x2384,	// (0x00040d7d) clock_t8

0x239a,	// (0x00040d93) clock_t9_ParamLimits

0x239a,	// (0x00040d93) clock_t9

0x0008,

0xf123,	// (0x0004db1c) clock_t_ParamLimits

0xf123,	// (0x0004db1c) clock_t

0xa96b,	// (0x00049364) popup_clock_analogue_window_cp02

0xa96b,	// (0x00049364) popup_clock_digital_window_cp01

0xa973,	// (0x0004936c) listscroll_help_pane

0xa689,	// (0x00049082) phob_pre_status_pane

0xa97d,	// (0x00049376) grid_qdial_pane

0xa8e4,	// (0x000492dd) listscroll_mce_pane

0xa8e4,	// (0x000492dd) bg_notes_pane

0xa987,	// (0x00049380) list_notes_pane

0x23b0,	// (0x00040da9) scroll_pane_cp06

0xa995,	// (0x0004938e) bg_calc_paper_pane

0x23bf,	// (0x00040db8) list_calc_pane

0xa9a9,	// (0x000493a2) bg_calc_display_pane

0x23d9,	// (0x00040dd2) calc_display_pane_t1

0x23ee,	// (0x00040de7) calc_display_pane_t2

0x2403,	// (0x00040dfc) calc_display_pane_t3

0x0002,

0xf136,	// (0x0004db2f) calc_display_pane_t

0x2415,	// (0x00040e0e) cell_calc_pane_ParamLimits

0x2415,	// (0x00040e0e) cell_calc_pane

0xa9b5,	// (0x000493ae) bg_calc_paper_pane_g1

0xa9c1,	// (0x000493ba) bg_calc_paper_pane_g2

0xa9cd,	// (0x000493c6) bg_calc_paper_pane_g3

0xa9d9,	// (0x000493d2) bg_calc_paper_pane_g4

0xa9e5,	// (0x000493de) bg_calc_paper_pane_g5

0x2444,	// (0x00040e3d) bg_calc_paper_pane_g6

0x2455,	// (0x00040e4e) bg_calc_paper_pane_g7

0x2466,	// (0x00040e5f) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0004db36) bg_calc_paper_pane_g

0x2477,	// (0x00040e70) calc_bg_paper_pane_g9

0x2488,	// (0x00040e81) list_calc_item_pane_ParamLimits

0x2488,	// (0x00040e81) list_calc_item_pane

0xa9f1,	// (0x000493ea) list_calc_item_pane_g1

0x24a9,	// (0x00040ea2) list_calc_item_pane_t1_ParamLimits

0x24a9,	// (0x00040ea2) list_calc_item_pane_t1

0x24bb,	// (0x00040eb4) list_calc_item_pane_t2_ParamLimits

0x24bb,	// (0x00040eb4) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0004db47) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0004db47) list_calc_item_pane_t

0xa9fe,	// (0x000493f7) cell_calc_pane_g1

0xaa08,	// (0x00049401) grid_highlight_pane_cp02

0xd6f6,	// (0x0004c0ef) bg_calc_display_pane_g1

0x24eb,	// (0x00040ee4) bg_calc_display_pane_g2

0xd6ff,	// (0x0004c0f8) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0004db51) bg_calc_display_pane_g

0x24f5,	// (0x00040eee) cell_qdial_pane_ParamLimits

0x24f5,	// (0x00040eee) cell_qdial_pane

0x250b,	// (0x00040f04) cell_qdial_pane_g1_ParamLimits

0x250b,	// (0x00040f04) cell_qdial_pane_g1

0x2518,	// (0x00040f11) cell_qdial_pane_g2_ParamLimits

0x2518,	// (0x00040f11) cell_qdial_pane_g2

0xaa2a,	// (0x00049423) cell_qdial_pane_g3_ParamLimits

0xaa2a,	// (0x00049423) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0004db58) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0004db58) cell_qdial_pane_g

0x2536,	// (0x00040f2f) cell_qdial_pane_t1_ParamLimits

0x2536,	// (0x00040f2f) cell_qdial_pane_t1

0x254e,	// (0x00040f47) cell_qdial_pane_t2_ParamLimits

0x254e,	// (0x00040f47) cell_qdial_pane_t2

0x2561,	// (0x00040f5a) cell_qdial_pane_t3_ParamLimits

0x2561,	// (0x00040f5a) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0004db61) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0004db61) cell_qdial_pane_t

0xa689,	// (0x00049082) grid_highlight_pane_cp04

0xaa36,	// (0x0004942f) thumbnail_qdial_pane_ParamLimits

0xaa36,	// (0x0004942f) thumbnail_qdial_pane

0xaa92,	// (0x0004948b) list_help_pane

0xaa9b,	// (0x00049494) scroll_pane_cp02

0x2574,	// (0x00040f6d) help_list_pane_t1_ParamLimits

0x2574,	// (0x00040f6d) help_list_pane_t1

0x259b,	// (0x00040f94) bg_notes_pane_g2

0x25a3,	// (0x00040f9c) bg_notes_pane_g3

0x25ab,	// (0x00040fa4) notes_bg_pane_g1

0x25b3,	// (0x00040fac) notes_bg_pane_g4

0x25bb,	// (0x00040fb4) notes_bg_pane_g5

0x25c3,	// (0x00040fbc) notes_bg_pane_g6

0x25cb,	// (0x00040fc4) notes_bg_pane_g7

0x25d3,	// (0x00040fcc) notes_bg_pane_g8

0x25db,	// (0x00040fd4) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0004db7f) notes_bg_pane_g

0x25e3,	// (0x00040fdc) list_notes_text_pane_ParamLimits

0x25e3,	// (0x00040fdc) list_notes_text_pane

0xaaa4,	// (0x0004949d) list_notes_text_pane_g1

0x0a6b,	// (0x0003f464) list_notes_text_pane_t1

0x260b,	// (0x00041004) listscroll_cale_week_pane

0x2637,	// (0x00041030) bg_cale_heading_pane

0x2660,	// (0x00041059) bg_cale_pane_cp01

0x2682,	// (0x0004107b) cale_week_corner_pane

0x26a1,	// (0x0004109a) cale_week_day_heading_pane

0x26cf,	// (0x000410c8) cale_week_scroll_pane_g1

0x26f3,	// (0x000410ec) cale_week_scroll_pane_g2

0x270b,	// (0x00041104) cale_week_scroll_pane_g3

0x2723,	// (0x0004111c) cale_week_scroll_pane_g4

0x273b,	// (0x00041134) cale_week_scroll_pane_g5

0x2753,	// (0x0004114c) cale_week_scroll_pane_g6

0x2773,	// (0x0004116c) cale_week_scroll_pane_g7

0x2793,	// (0x0004118c) cale_week_scroll_pane_g8

0x27b3,	// (0x000411ac) cale_week_scroll_pane_g9

0x27d0,	// (0x000411c9) cale_week_scroll_pane_g10

0x27ed,	// (0x000411e6) cale_week_scroll_pane_g11

0x280c,	// (0x00041205) cale_week_scroll_pane_g12

0x2831,	// (0x0004122a) cale_week_scroll_pane_g13

0x285a,	// (0x00041253) cale_week_scroll_pane_g14

0x2883,	// (0x0004127c) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0004db8e) cale_week_scroll_pane_g

0x28cc,	// (0x000412c5) cale_week_time_pane

0x28ec,	// (0x000412e5) grid_cale_week_pane

0xaad9,	// (0x000494d2) scroll_pane_cp08

0x291d,	// (0x00041316) cell_cale_week_pane_ParamLimits

0x291d,	// (0x00041316) cell_cale_week_pane

0x29ad,	// (0x000413a6) cale_week_day_heading_pane_t1

0x29d5,	// (0x000413ce) cale_week_day_heading_pane_t2

0x2a02,	// (0x000413fb) cale_week_day_heading_pane_t3

0x2a2f,	// (0x00041428) cale_week_day_heading_pane_t4

0x2a5c,	// (0x00041455) cale_week_day_heading_pane_t5

0x2a89,	// (0x00041482) cale_week_day_heading_pane_t6

0x2ab6,	// (0x000414af) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0004dbaf) cale_week_day_heading_pane_t

0xaaf6,	// (0x000494ef) bg_cale_side_pane

0x2ade,	// (0x000414d7) cale_week_time_pane_t1

0x2b02,	// (0x000414fb) cale_week_time_pane_t2

0x2b26,	// (0x0004151f) cale_week_time_pane_t3

0x2b4a,	// (0x00041543) cale_week_time_pane_t4

0x2b6e,	// (0x00041567) cale_week_time_pane_t5

0x2b94,	// (0x0004158d) cale_week_time_pane_t6

0x2bbc,	// (0x000415b5) cale_week_time_pane_t7

0x2be8,	// (0x000415e1) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0004dbbe) cale_week_time_pane_t

0x2c18,	// (0x00041611) cell_cale_week_pane_g2

0x2c3c,	// (0x00041635) cell_cale_week_pane_g3_ParamLimits

0x2c3c,	// (0x00041635) cell_cale_week_pane_g3

0xab1b,	// (0x00049514) grid_highlight_pane_cp07

0xab23,	// (0x0004951c) listscroll_gms_pane

0xab2d,	// (0x00049526) grid_gms_pane

0xab36,	// (0x0004952f) listscroll_gms_pane_g1

0xab3e,	// (0x00049537) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0004dbcf) listscroll_gms_pane_g

0x2c54,	// (0x0004164d) scroll_pane_cp010

0x2c5f,	// (0x00041658) cell_gms_pane_ParamLimits

0x2c5f,	// (0x00041658) cell_gms_pane

0x2c72,	// (0x0004166b) cell_gms_pane_g1

0xab46,	// (0x0004953f) cell_gms_pane_g2

0xab4e,	// (0x00049547) cell_gms_pane_g3

0xab57,	// (0x00049550) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0004dbd4) cell_gms_pane_g

0xab60,	// (0x00049559) grid_highlight_pane_cp09

0x4ff5,	// (0x000439ee) phob_pre_status_pane_g1

0x4ffd,	// (0x000439f6) phob_pre_status_pane_g2

0x5005,	// (0x000439fe) phob_pre_status_pane_g3

0x500d,	// (0x00043a06) phob_pre_status_pane_g4

0x0004,

0xf5c6,	// (0x0004dfbf) phob_pre_status_pane_g

0x501d,	// (0x00043a16) phob_pre_status_pane_t1

0x502d,	// (0x00043a26) phob_pre_status_pane_t2

0x503d,	// (0x00043a36) phob_pre_status_pane_t3

0x0002,

0xf5d1,	// (0x0004dfca) phob_pre_status_pane_t

0xab68,	// (0x00049561) bg_list_pane_cp05

0x2c82,	// (0x0004167b) grid_vorec_pane

0x2c8c,	// (0x00041685) vorec_t1

0x2c9a,	// (0x00041693) vorec_t2

0x2ca8,	// (0x000416a1) vorec_t3

0x2cb6,	// (0x000416af) vorec_t4

0xa1e2,	// (0x00048bdb) vorec_t5

0xa1f0,	// (0x00048be9) vorec_t6

0x0004,

0xf1e4,	// (0x0004dbdd) vorec_t

0xa1fe,	// (0x00048bf7) wait_bar_pane_cp01

0x2cd2,	// (0x000416cb) cell_vorec_pane_ParamLimits

0x2cd2,	// (0x000416cb) cell_vorec_pane

0x2ce7,	// (0x000416e0) cell_vorec_pane_g1

0xa689,	// (0x00049082) grid_highlight_pane_cp05

0x2cff,	// (0x000416f8) cams_zoom_pane

0x2d0b,	// (0x00041704) image_vga_pane

0x2d1a,	// (0x00041713) main_camera_pane_g1

0x2d28,	// (0x00041721) main_camera_pane_g2

0x2d34,	// (0x0004172d) main_camera_pane_g3

0x2d42,	// (0x0004173b) main_camera_pane_g4

0x2d50,	// (0x00041749) main_camera_pane_g5

0x2d5e,	// (0x00041757) main_camera_pane_g6

0x2d6c,	// (0x00041765) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0004dbe8) main_camera_pane_g

0x2d7a,	// (0x00041773) main_camera_pane_t1

0x2d8c,	// (0x00041785) main_camera_pane_t2

0x0001,

0xf200,	// (0x0004dbf9) main_camera_pane_t

0x2daf,	// (0x000417a8) cams_zoom_pane_cp_ParamLimits

0x2daf,	// (0x000417a8) cams_zoom_pane_cp

0x2dd3,	// (0x000417cc) image_cif_pane_ParamLimits

0x2dd3,	// (0x000417cc) image_cif_pane

0x2df1,	// (0x000417ea) image_subqcif_pane

0x2dfb,	// (0x000417f4) main_video_pane_g1_ParamLimits

0x2dfb,	// (0x000417f4) main_video_pane_g1

0x2e1b,	// (0x00041814) main_video_pane_g2_ParamLimits

0x2e1b,	// (0x00041814) main_video_pane_g2

0x2e4b,	// (0x00041844) main_video_pane_g3_ParamLimits

0x2e4b,	// (0x00041844) main_video_pane_g3

0x2e74,	// (0x0004186d) main_video_pane_g4_ParamLimits

0x2e74,	// (0x0004186d) main_video_pane_g4

0x2e9d,	// (0x00041896) main_video_pane_g5_ParamLimits

0x2e9d,	// (0x00041896) main_video_pane_g5

0xab7c,	// (0x00049575) main_video_pane_g6_ParamLimits

0xab7c,	// (0x00049575) main_video_pane_g6

0x0006,

0xf205,	// (0x0004dbfe) main_video_pane_g_ParamLimits

0xf205,	// (0x0004dbfe) main_video_pane_g

0x2ebf,	// (0x000418b8) main_video_pane_t1_ParamLimits

0x2ebf,	// (0x000418b8) main_video_pane_t1

0xab96,	// (0x0004958f) cams_zoom_pane_g1

0xab9f,	// (0x00049598) cams_zoom_pane_g2

0xaba8,	// (0x000495a1) cams_zoom_pane_g3

0xabb1,	// (0x000495aa) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0004dc0d) cams_zoom_pane_g

0x2f09,	// (0x00041902) grid_cams_pane

0x2f17,	// (0x00041910) linegrid_cams_pane

0x2f23,	// (0x0004191c) cell_cams_pane_ParamLimits

0x2f23,	// (0x0004191c) cell_cams_pane

0xabba,	// (0x000495b3) cams_burst_image_pane

0xabc2,	// (0x000495bb) cell_cams_pane_g1

0xa689,	// (0x00049082) grid_highlight_pane_cp03

0xa9fe,	// (0x000493f7) mp_bg_pane_g1

0xa689,	// (0x00049082) bg_list_pane_cp03

0xc90c,	// (0x0004b305) bg_mp_pane

0xc914,	// (0x0004b30d) grid_mp_pane

0xc91c,	// (0x0004b315) media_player_g1

0xc926,	// (0x0004b31f) media_player_t1

0xc934,	// (0x0004b32d) media_player_t2

0xc942,	// (0x0004b33b) media_player_t3

0xc950,	// (0x0004b349) media_player_t4

0xc95e,	// (0x0004b357) media_player_t5

0xc96c,	// (0x0004b365) media_player_t6

0xc97a,	// (0x0004b373) media_player_t7

0x0006,

0xf5b0,	// (0x0004dfa9) media_player_t

0xc988,	// (0x0004b381) wait_bar_pane_cp02

0xf595,	// (0x0004df8e) main_usb_pane_t

0x4fec,	// (0x000439e5) cell_mp_pane

0xa9fe,	// (0x000493f7) cell_mp_pane_g1

0xa689,	// (0x00049082) grid_highlight_pane_cp06

0xabca,	// (0x000495c3) grid_skin_colour_pane

0xabd2,	// (0x000495cb) list_highlight_pane_cp03

0x2f38,	// (0x00041931) skin_g1

0xabda,	// (0x000495d3) skin_t1

0xabe9,	// (0x000495e2) skin_t2

0x0001,

0xf249,	// (0x0004dc42) skin_t

0x2f42,	// (0x0004193b) cell_skin_colour_pane_ParamLimits

0x2f42,	// (0x0004193b) cell_skin_colour_pane

0xabf7,	// (0x000495f0) cell_skin_colour_pane_g1

0x2fc2,	// (0x000419bb) call_video_g1_ParamLimits

0x2fc2,	// (0x000419bb) call_video_g1

0x2fd2,	// (0x000419cb) call_video_g2_ParamLimits

0x2fd2,	// (0x000419cb) call_video_g2

0x0001,

0xf24e,	// (0x0004dc47) call_video_g_ParamLimits

0xf24e,	// (0x0004dc47) call_video_g

0x3022,	// (0x00041a1b) call_video_uplink_pane_cp1_ParamLimits

0x3022,	// (0x00041a1b) call_video_uplink_pane_cp1

0xac09,	// (0x00049602) call_video_uplink_pane_cp2

0x30f0,	// (0x00041ae9) video_down_crop_pane_ParamLimits

0x30f0,	// (0x00041ae9) video_down_crop_pane

0x31e2,	// (0x00041bdb) video_down_pane_ParamLimits

0x31e2,	// (0x00041bdb) video_down_pane

0xac11,	// (0x0004960a) video_down_subqcif_pane_ParamLimits

0xac11,	// (0x0004960a) video_down_subqcif_pane

0xac2b,	// (0x00049624) video_down_subqcif_pane_cp_ParamLimits

0xac2b,	// (0x00049624) video_down_subqcif_pane_cp

0xac53,	// (0x0004964c) im_reading_pane_ParamLimits

0xac53,	// (0x0004964c) im_reading_pane

0x32ff,	// (0x00041cf8) im_writing_pane_ParamLimits

0x32ff,	// (0x00041cf8) im_writing_pane

0x331d,	// (0x00041d16) im_reading_pane_t1

0xac6d,	// (0x00049666) list_im_pane

0xac7e,	// (0x00049677) scroll_pane_cp07

0x335f,	// (0x00041d58) im_writing_pane_t1_ParamLimits

0x335f,	// (0x00041d58) im_writing_pane_t1

0xac97,	// (0x00049690) im_writing_pane_t2_ParamLimits

0xac97,	// (0x00049690) im_writing_pane_t2

0x0001,

0xf258,	// (0x0004dc51) im_writing_pane_t_ParamLimits

0xf258,	// (0x0004dc51) im_writing_pane_t

0xa689,	// (0x00049082) input_focus_pane_cp04

0xa689,	// (0x00049082) input_focus_pane_cp05

0x3371,	// (0x00041d6a) list_im_single_pane_ParamLimits

0x3371,	// (0x00041d6a) list_im_single_pane

0x338a,	// (0x00041d83) list_single_im_pane_t1

0x4fb0,	// (0x000439a9) blid_accuracy_pane

0x4fb8,	// (0x000439b1) blid_compass_pane

0x4fc2,	// (0x000439bb) main_location_t1

0x4fd0,	// (0x000439c9) main_location_t2

0x4fde,	// (0x000439d7) main_location_t3

0x0002,

0xf5bf,	// (0x0004dfb8) main_location_t

0xa689,	// (0x00049082) aid_levels_location

0xa9fe,	// (0x000493f7) blid_accuracy_pane_g1

0xa9fe,	// (0x000493f7) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0004dcb3) blid_accuracy_pane_g

0xacdf,	// (0x000496d8) wml_content_pane

0xad1d,	// (0x00049716) wml_button_pane_ParamLimits

0xad1d,	// (0x00049716) wml_button_pane

0x3399,	// (0x00041d92) wml_list_single_large_pane_ParamLimits

0x3399,	// (0x00041d92) wml_list_single_large_pane

0x33bb,	// (0x00041db4) wml_list_single_medium_pane_ParamLimits

0x33bb,	// (0x00041db4) wml_list_single_medium_pane

0x33de,	// (0x00041dd7) wml_list_single_small_pane_ParamLimits

0x33de,	// (0x00041dd7) wml_list_single_small_pane

0xad31,	// (0x0004972a) wml_selection_box_pane_ParamLimits

0xad31,	// (0x0004972a) wml_selection_box_pane

0xad44,	// (0x0004973d) wml_list_single_pane_t1

0xad53,	// (0x0004974c) wml_list_single_medium_pane_t1

0xad62,	// (0x0004975b) wml_list_single_large_pane_t1

0xad71,	// (0x0004976a) input_focus_pane_cp02_ParamLimits

0xad71,	// (0x0004976a) input_focus_pane_cp02

0xad84,	// (0x0004977d) wml_selection_box_pane_g1

0xad8d,	// (0x00049786) wml_selection_box_pane_t1_ParamLimits

0xad8d,	// (0x00049786) wml_selection_box_pane_t1

0xa8e4,	// (0x000492dd) bg_wml_button_pane_ParamLimits

0xa8e4,	// (0x000492dd) bg_wml_button_pane

0xada5,	// (0x0004979e) wml_button_pane_g1

0xadad,	// (0x000497a6) wml_button_pane_t1

0xada5,	// (0x0004979e) wml_button_bg_pane_g1

0xadbd,	// (0x000497b6) wml_button_bg_pane_g2

0xadc5,	// (0x000497be) wml_button_bg_pane_g3

0xadcd,	// (0x000497c6) wml_button_bg_pane_g4

0xadd5,	// (0x000497ce) wml_button_bg_pane_g5

0xaddd,	// (0x000497d6) wml_button_bg_pane_g6

0xade5,	// (0x000497de) wml_button_bg_pane_g7

0xaded,	// (0x000497e6) wml_button_bg_pane_g8

0xadf5,	// (0x000497ee) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0004dc56) wml_button_bg_pane_g

0x3406,	// (0x00041dff) bg_list_pane_cp02

0xadfd,	// (0x000497f6) mce_header_pane_ParamLimits

0xadfd,	// (0x000497f6) mce_header_pane

0xae13,	// (0x0004980c) mce_icon_pane

0xae13,	// (0x0004980c) mce_image_pane

0xae1c,	// (0x00049815) mce_text_pane_ParamLimits

0xae1c,	// (0x00049815) mce_text_pane

0x3410,	// (0x00041e09) scroll_pane_cp03

0xad15,	// (0x0004970e) scroll_pane_cp04

0xae2f,	// (0x00049828) scroll_pane_cp05_ParamLimits

0xae2f,	// (0x00049828) scroll_pane_cp05

0x341a,	// (0x00041e13) mce_header_field_pane_ParamLimits

0x341a,	// (0x00041e13) mce_header_field_pane

0x343c,	// (0x00041e35) mce_header_field_pane_2_ParamLimits

0x343c,	// (0x00041e35) mce_header_field_pane_2

0x3452,	// (0x00041e4b) mce_header_field_pane_3

0x345a,	// (0x00041e53) list_single_mce_message_pane_ParamLimits

0x345a,	// (0x00041e53) list_single_mce_message_pane

0x3479,	// (0x00041e72) list_single_mce_smart_pane_ParamLimits

0x3479,	// (0x00041e72) list_single_mce_smart_pane

0xae3b,	// (0x00049834) input_focus_pane_cp03

0xae44,	// (0x0004983d) list_header_data_pane

0x34a3,	// (0x00041e9c) mce_header_field_pane_t1

0x34b3,	// (0x00041eac) list_single_mce_header_pane_ParamLimits

0x34b3,	// (0x00041eac) list_single_mce_header_pane

0xae4c,	// (0x00049845) list_single_mce_header_pane_t1

0xae5b,	// (0x00049854) list_single_mce_message_pane_g1

0xae63,	// (0x0004985c) list_single_mce_message_pane_t1

0x34f7,	// (0x00041ef0) bg_cale_heading_pane_cp01_ParamLimits

0x34f7,	// (0x00041ef0) bg_cale_heading_pane_cp01

0xae71,	// (0x0004986a) bg_cale_pane_cp02_ParamLimits

0xae71,	// (0x0004986a) bg_cale_pane_cp02

0x3549,	// (0x00041f42) cale_month_corner_pane

0x3568,	// (0x00041f61) cale_month_day_heading_pane_ParamLimits

0x3568,	// (0x00041f61) cale_month_day_heading_pane

0x35ca,	// (0x00041fc3) cale_month_pane_g1_ParamLimits

0x35ca,	// (0x00041fc3) cale_month_pane_g1

0x3611,	// (0x0004200a) cale_month_pane_g2_ParamLimits

0x3611,	// (0x0004200a) cale_month_pane_g2

0x3649,	// (0x00042042) cale_month_pane_g3_ParamLimits

0x3649,	// (0x00042042) cale_month_pane_g3

0x369d,	// (0x00042096) cale_month_pane_g4_ParamLimits

0x369d,	// (0x00042096) cale_month_pane_g4

0x36f1,	// (0x000420ea) cale_month_pane_g5_ParamLimits

0x36f1,	// (0x000420ea) cale_month_pane_g5

0x3745,	// (0x0004213e) cale_month_pane_g6_ParamLimits

0x3745,	// (0x0004213e) cale_month_pane_g6

0x37a9,	// (0x000421a2) cale_month_pane_g7_ParamLimits

0x37a9,	// (0x000421a2) cale_month_pane_g7

0x380d,	// (0x00042206) cale_month_pane_g8_ParamLimits

0x380d,	// (0x00042206) cale_month_pane_g8

0x3871,	// (0x0004226a) cale_month_pane_g9_ParamLimits

0x3871,	// (0x0004226a) cale_month_pane_g9

0x38cb,	// (0x000422c4) cale_month_pane_g10_ParamLimits

0x38cb,	// (0x000422c4) cale_month_pane_g10

0x391d,	// (0x00042316) cale_month_pane_g11_ParamLimits

0x391d,	// (0x00042316) cale_month_pane_g11

0x396b,	// (0x00042364) cale_month_pane_g12_ParamLimits

0x396b,	// (0x00042364) cale_month_pane_g12

0x39bb,	// (0x000423b4) cale_month_pane_g13_ParamLimits

0x39bb,	// (0x000423b4) cale_month_pane_g13

0x000c,

0xf270,	// (0x0004dc69) cale_month_pane_g_ParamLimits

0xf270,	// (0x0004dc69) cale_month_pane_g

0x3a0b,	// (0x00042404) cale_month_week_pane

0x3a2b,	// (0x00042424) grid_cale_month_pane_ParamLimits

0x3a2b,	// (0x00042424) grid_cale_month_pane

0x3a84,	// (0x0004247d) cale_month_day_heading_pane_t1

0x3b06,	// (0x000424ff) cale_month_day_heading_pane_t2

0x3b7f,	// (0x00042578) cale_month_day_heading_pane_t3

0x3bf8,	// (0x000425f1) cale_month_day_heading_pane_t4

0x3c71,	// (0x0004266a) cale_month_day_heading_pane_t5

0x3cf2,	// (0x000426eb) cale_month_day_heading_pane_t6

0x3d7b,	// (0x00042774) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0004dc84) cale_month_day_heading_pane_t

0xaaf6,	// (0x000494ef) bg_cale_side_pane_cp01

0x3e04,	// (0x000427fd) cale_month_week_pane_t1

0x3e1d,	// (0x00042816) cale_month_week_pane_t2

0x3e36,	// (0x0004282f) cale_month_week_pane_t3

0x3e4f,	// (0x00042848) cale_month_week_pane_t4

0x3e68,	// (0x00042861) cale_month_week_pane_t5

0x3e85,	// (0x0004287e) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0004dc93) cale_month_week_pane_t

0x3ea8,	// (0x000428a1) cell_cale_month_pane_ParamLimits

0x3ea8,	// (0x000428a1) cell_cale_month_pane

0x3fd6,	// (0x000429cf) cell_cale_month_pane_g1

0x3fe2,	// (0x000429db) cell_cale_month_pane_t1_ParamLimits

0x3fe2,	// (0x000429db) cell_cale_month_pane_t1

0xab1b,	// (0x00049514) grid_highlight_pane_cp08

0xa9fe,	// (0x000493f7) main_smil_g1

0x400e,	// (0x00042a07) smil_status_pane

0xaeb0,	// (0x000498a9) smil_text_pane

0xc82a,	// (0x0004b223) bg_popup_call3_rect_pane_g8

0xc832,	// (0x0004b22b) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0004df4c) bg_popup_call3_rect_pane_g

0xca90,	// (0x0004b489) smil_status_volume_pane_g1

0xaeba,	// (0x000498b3) smil_status_pane_t1

0x53d7,	// (0x00043dd0) volume_smil_pane

0xaed1,	// (0x000498ca) list_smil_text_pane

0x4021,	// (0x00042a1a) scroll_pane_cp011

0x402c,	// (0x00042a25) smil_text_list_pane_t1_ParamLimits

0x402c,	// (0x00042a25) smil_text_list_pane_t1

0x4080,	// (0x00042a79) aid_volume_smil_ParamLimits

0x4080,	// (0x00042a79) aid_volume_smil

0xa9fe,	// (0x000493f7) smil_volume_pane_g1

0xa9fe,	// (0x000493f7) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0004dcb3) smil_volume_pane_g

0x260b,	// (0x00041004) listscroll_cale_day_pane

0xaedb,	// (0x000498d4) bg_cale_pane

0xaef3,	// (0x000498ec) list_cale_pane

0xaf16,	// (0x0004990f) scroll_pane_cp09

0xaf27,	// (0x00049920) cale_bg_pane_g1

0xaf2f,	// (0x00049928) cale_bg_pane_g2

0xaf37,	// (0x00049930) cale_bg_pane_g3

0xaf3f,	// (0x00049938) cale_bg_pane_g4

0xaf47,	// (0x00049940) cale_bg_pane_g5

0xaf4f,	// (0x00049948) cale_bg_pane_g6

0xaf57,	// (0x00049950) cale_bg_pane_g7

0xaf5f,	// (0x00049958) cale_bg_pane_g8

0xaf67,	// (0x00049960) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0004dcb8) cale_bg_pane_g

0x40aa,	// (0x00042aa3) list_cale_time_pane_ParamLimits

0x40aa,	// (0x00042aa3) list_cale_time_pane

0xaf6f,	// (0x00049968) list_cale_time_pane_g1_ParamLimits

0xaf6f,	// (0x00049968) list_cale_time_pane_g1

0xaf7b,	// (0x00049974) list_cale_time_pane_g2_ParamLimits

0xaf7b,	// (0x00049974) list_cale_time_pane_g2

0x40c1,	// (0x00042aba) list_cale_time_pane_g3_ParamLimits

0x40c1,	// (0x00042aba) list_cale_time_pane_g3

0x40cf,	// (0x00042ac8) list_cale_time_pane_g4_ParamLimits

0x40cf,	// (0x00042ac8) list_cale_time_pane_g4

0x40dd,	// (0x00042ad6) list_cale_time_pane_g5_ParamLimits

0x40dd,	// (0x00042ad6) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0004dccb) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0004dccb) list_cale_time_pane_g

0xaf95,	// (0x0004998e) list_cale_time_pane_t1_ParamLimits

0xaf95,	// (0x0004998e) list_cale_time_pane_t1

0xafbd,	// (0x000499b6) list_cale_time_pane_t2_ParamLimits

0xafbd,	// (0x000499b6) list_cale_time_pane_t2

0x43c0,	// (0x00042db9) aid_blid_cardinal_pane

0x4402,	// (0x00042dfb) compass_pane_t4

0xafe5,	// (0x000499de) list_cale_time_pane_t4_ParamLimits

0xafe5,	// (0x000499de) list_cale_time_pane_t4

0x4410,	// (0x00042e09) compass_pane_t5

0x4420,	// (0x00042e19) compass_pane_t6

0x442e,	// (0x00042e27) compass_pane_t7

0xb480,	// (0x00049e79) navi_pane_cc_t1

0xb65f,	// (0x0004a058) aid_phob_thumbnail_center_pane

0x4aac,	// (0x000434a5) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0004dcd8) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0004dcd8) list_cale_time_pane_t

0xa2e0,	// (0x00048cd9) bg_popup_window_pane_cp02_ParamLimits

0xa2e0,	// (0x00048cd9) bg_popup_window_pane_cp02

0xb00d,	// (0x00049a06) heading_pane_cp01_ParamLimits

0xb00d,	// (0x00049a06) heading_pane_cp01

0xb019,	// (0x00049a12) loc_req_pane_ParamLimits

0xb019,	// (0x00049a12) loc_req_pane

0xb029,	// (0x00049a22) loc_type_pane_ParamLimits

0xb029,	// (0x00049a22) loc_type_pane

0xb03b,	// (0x00049a34) loc_type_pane_t1_ParamLimits

0xb03b,	// (0x00049a34) loc_type_pane_t1

0xb04d,	// (0x00049a46) loc_type_pane_t2_ParamLimits

0xb04d,	// (0x00049a46) loc_type_pane_t2

0xb05f,	// (0x00049a58) loc_type_pane_t3_ParamLimits

0xb05f,	// (0x00049a58) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0004dcdf) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0004dcdf) loc_type_pane_t

0xb071,	// (0x00049a6a) list_loc_req_pane

0xb07b,	// (0x00049a74) scroll_pane_cp012

0x40eb,	// (0x00042ae4) list_single_loc_request_popup_menu_pane_ParamLimits

0x40eb,	// (0x00042ae4) list_single_loc_request_popup_menu_pane

0xb086,	// (0x00049a7f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb086,	// (0x00049a7f) list_single_loc_request_popup_menu_pane_g1

0xb092,	// (0x00049a8b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb092,	// (0x00049a8b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0004dce6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0004dce6) list_single_loc_request_popup_menu_pane_g

0xb09e,	// (0x00049a97) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb09e,	// (0x00049a97) list_single_loc_request_popup_menu_pane_t1

0x40fd,	// (0x00042af6) bg_popup_window_pane_cp03_ParamLimits

0x40fd,	// (0x00042af6) bg_popup_window_pane_cp03

0x410b,	// (0x00042b04) heading_loc_req_pane_ParamLimits

0x410b,	// (0x00042b04) heading_loc_req_pane

0x4117,	// (0x00042b10) popup_dyc_status_message_window_g1_ParamLimits

0x4117,	// (0x00042b10) popup_dyc_status_message_window_g1

0x4123,	// (0x00042b1c) popup_dyc_status_message_window_t1_ParamLimits

0x4123,	// (0x00042b1c) popup_dyc_status_message_window_t1

0x4135,	// (0x00042b2e) popup_dyc_status_message_window_t2_ParamLimits

0x4135,	// (0x00042b2e) popup_dyc_status_message_window_t2

0x4147,	// (0x00042b40) popup_dyc_status_message_window_t3_ParamLimits

0x4147,	// (0x00042b40) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0004dceb) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0004dceb) popup_dyc_status_message_window_t

0xa689,	// (0x00049082) bg_heading_pane_cp01

0xb0b4,	// (0x00049aad) heading_loc_req_pane_g1

0xb0bc,	// (0x00049ab5) heading_loc_req_pane_g2

0xb0c4,	// (0x00049abd) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0004dcf2) heading_loc_req_pane_g

0xb0cc,	// (0x00049ac5) heading_loc_req_pane_t1

0xb0dc,	// (0x00049ad5) bg_popup_sub_pane_cp01_ParamLimits

0xb0dc,	// (0x00049ad5) bg_popup_sub_pane_cp01

0xb0ea,	// (0x00049ae3) popup_cale_events_window_g1_ParamLimits

0xb0ea,	// (0x00049ae3) popup_cale_events_window_g1

0xb10a,	// (0x00049b03) popup_cale_events_window_g2_ParamLimits

0xb10a,	// (0x00049b03) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0004dd26) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0004dd26) popup_cale_events_window_g

0xb12a,	// (0x00049b23) popup_cale_events_window_t1_ParamLimits

0xb12a,	// (0x00049b23) popup_cale_events_window_t1

0xb13c,	// (0x00049b35) popup_cale_events_window_t2_ParamLimits

0xb13c,	// (0x00049b35) popup_cale_events_window_t2

0xb17a,	// (0x00049b73) popup_cale_events_window_t3_ParamLimits

0xb17a,	// (0x00049b73) popup_cale_events_window_t3

0xb1b4,	// (0x00049bad) popup_cale_events_window_t4_ParamLimits

0xb1b4,	// (0x00049bad) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0004dd2b) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0004dd2b) popup_cale_events_window_t

0x4171,	// (0x00042b6a) call_type_pane

0xb422,	// (0x00049e1b) popup_call_status_window_g1

0x417d,	// (0x00042b76) popup_call_status_window_g2

0x4189,	// (0x00042b82) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0004dd34) popup_call_status_window_g

0xb1ea,	// (0x00049be3) call_type_pane_g1

0xb1f3,	// (0x00049bec) call_type_pane_g2

0x0001,

0xf342,	// (0x0004dd3b) call_type_pane_g

0xa689,	// (0x00049082) bg_popup_sub_pane_cp02

0xb1fc,	// (0x00049bf5) listscroll_popup_wml_pane

0xb204,	// (0x00049bfd) list_wml_pane

0xb20e,	// (0x00049c07) scroll_pane_cp013

0xb219,	// (0x00049c12) list_single_graphic_popup_wml_pane_ParamLimits

0xb219,	// (0x00049c12) list_single_graphic_popup_wml_pane

0xa9fe,	// (0x000493f7) list_single_graphic_popup_wml_pane_g1

0xb22d,	// (0x00049c26) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0004dd40) list_single_graphic_popup_wml_pane_g

0xb235,	// (0x00049c2e) list_single_graphic_popup_wml_pane_t1

0xb24b,	// (0x00049c44) aid_call_pane

0xa8dc,	// (0x000492d5) popup_clock_analogue_window_g1

0xa8dc,	// (0x000492d5) popup_clock_analogue_window_g2

0x4195,	// (0x00042b8e) popup_clock_analogue_window_g3

0x4195,	// (0x00042b8e) popup_clock_analogue_window_g4

0xa9fe,	// (0x000493f7) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0004dd45) popup_clock_analogue_window_g

0x419d,	// (0x00042b96) popup_clock_analogue_window_t1

0x41ab,	// (0x00042ba4) clock_digital_number_pane_ParamLimits

0x41ab,	// (0x00042ba4) clock_digital_number_pane

0x41b7,	// (0x00042bb0) clock_digital_number_pane_cp02_ParamLimits

0x41b7,	// (0x00042bb0) clock_digital_number_pane_cp02

0x41c3,	// (0x00042bbc) clock_digital_number_pane_cp03_ParamLimits

0x41c3,	// (0x00042bbc) clock_digital_number_pane_cp03

0x41cf,	// (0x00042bc8) clock_digital_number_pane_cp04_ParamLimits

0x41cf,	// (0x00042bc8) clock_digital_number_pane_cp04

0x41db,	// (0x00042bd4) clock_digital_separator_pane_ParamLimits

0x41db,	// (0x00042bd4) clock_digital_separator_pane

0x41e7,	// (0x00042be0) popup_clock_digital_window_t1

0xa9fe,	// (0x000493f7) clock_digital_number_pane_g1

0xa9fe,	// (0x000493f7) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0004dcb3) clock_digital_number_pane_g

0xa9fe,	// (0x000493f7) clock_digital_separator_pane_g1

0xa9fe,	// (0x000493f7) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0004dcb3) clock_digital_separator_pane_g

0xa689,	// (0x00049082) bg_popup_window_pane_cp04

0xb253,	// (0x00049c4c) heading_pane_cp03

0xb25b,	// (0x00049c54) listscroll_popup_gms_pane

0xb263,	// (0x00049c5c) grid_large_graphic_popup_pane

0xb26d,	// (0x00049c66) listscroll_popup_gms_pane_g1

0xb275,	// (0x00049c6e) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0004dd50) listscroll_popup_gms_pane_g

0xad15,	// (0x0004970e) scroll_pane_cp014

0x4204,	// (0x00042bfd) cell_large_graphic_popup_pane_ParamLimits

0x4204,	// (0x00042bfd) cell_large_graphic_popup_pane

0x421e,	// (0x00042c17) cell_large_graphic_popup_pane_g1_ParamLimits

0x421e,	// (0x00042c17) cell_large_graphic_popup_pane_g1

0xb27d,	// (0x00049c76) cell_large_graphic_popup_pane_g2_ParamLimits

0xb27d,	// (0x00049c76) cell_large_graphic_popup_pane_g2

0xb289,	// (0x00049c82) cell_large_graphic_popup_pane_g3_ParamLimits

0xb289,	// (0x00049c82) cell_large_graphic_popup_pane_g3

0xb296,	// (0x00049c8f) cell_large_graphic_popup_pane_g4_ParamLimits

0xb296,	// (0x00049c8f) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0004dd55) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0004dd55) cell_large_graphic_popup_pane_g

0xb2a6,	// (0x00049c9f) grid_highlight_pane_cp010

0xa9fe,	// (0x000493f7) bg_popup_call_pane_g1

0xb2b0,	// (0x00049ca9) list_single_graphic_popup_conf_pane_ParamLimits

0xb2b0,	// (0x00049ca9) list_single_graphic_popup_conf_pane

0xb2c2,	// (0x00049cbb) list_highlight_pane_cp01

0xb2cb,	// (0x00049cc4) list_single_graphic_popup_conf_pane_g1

0xb2d3,	// (0x00049ccc) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0004dd5e) list_single_graphic_popup_conf_pane_g

0xb2db,	// (0x00049cd4) list_single_graphic_popup_conf_pane_t1

0xb2e9,	// (0x00049ce2) linegrid_cams_pane_g1

0x422a,	// (0x00042c23) linegrid_cams_pane_g2

0xab4e,	// (0x00049547) linegrid_cams_pane_g3

0xb2f2,	// (0x00049ceb) linegrid_cams_pane_g4

0x4233,	// (0x00042c2c) linegrid_cams_pane_g5

0x423c,	// (0x00042c35) linegrid_cams_pane_g6

0xab57,	// (0x00049550) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0004dd63) linegrid_cams_pane_g

0xb2fb,	// (0x00049cf4) popup_clock_analogue_window

0xb2fb,	// (0x00049cf4) popup_clock_digital_window

0xa689,	// (0x00049082) popup_phob_thumbnail_window

0xa9fe,	// (0x000493f7) call_video_uplink_pane_g1

0xb304,	// (0x00049cfd) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0004dd72) call_video_uplink_pane_g

0xb30c,	// (0x00049d05) video_uplink_pane

0xb314,	// (0x00049d0d) mce_image_pane_g1

0x4247,	// (0x00042c40) mce_image_pane_g2

0x4251,	// (0x00042c4a) mce_image_pane_g3

0x425b,	// (0x00042c54) mce_image_pane_g4

0x4263,	// (0x00042c5c) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0004dd77) mce_image_pane_g

0xb31e,	// (0x00049d17) control_top_pane_stacon_cp01_ParamLimits

0xb31e,	// (0x00049d17) control_top_pane_stacon_cp01

0xb332,	// (0x00049d2b) uni_indicator_pane_stacon_cp01_ParamLimits

0xb332,	// (0x00049d2b) uni_indicator_pane_stacon_cp01

0xb343,	// (0x00049d3c) bg_popup_sub_pane_cp03

0x426b,	// (0x00042c64) chi_dic_find_pane

0x4273,	// (0x00042c6c) listscroll_chi_dic_pane

0x427c,	// (0x00042c75) main_pane_chidic_g1

0x428f,	// (0x00042c88) chi_dic_find_pane_t1

0xb34d,	// (0x00049d46) find_chidic_pane

0xb356,	// (0x00049d4f) chi_dic_list_pane_ParamLimits

0xb356,	// (0x00049d4f) chi_dic_list_pane

0xb367,	// (0x00049d60) scroll_pane_cp020

0x429d,	// (0x00042c96) find_chidic_pane_t1

0xa689,	// (0x00049082) input_focus_pane_cp06

0xb36f,	// (0x00049d68) list_chi_dic_pane_ParamLimits

0xb36f,	// (0x00049d68) list_chi_dic_pane

0x42ac,	// (0x00042ca5) list_chi_dic_pane_t1_ParamLimits

0x42ac,	// (0x00042ca5) list_chi_dic_pane_t1

0xa689,	// (0x00049082) list_highlight_pane_cp020

0xb384,	// (0x00049d7d) bg_cale_heading_pane_g1

0x42bf,	// (0x00042cb8) bg_cale_heading_pane_g2

0x42c7,	// (0x00042cc0) bg_cale_heading_pane_g3

0x42cf,	// (0x00042cc8) bg_cale_heading_pane_g4

0x42d9,	// (0x00042cd2) bg_cale_heading_pane_g5

0x42e3,	// (0x00042cdc) bg_cale_heading_pane_g6

0x42eb,	// (0x00042ce4) bg_cale_heading_pane_g7

0x42f3,	// (0x00042cec) bg_cale_heading_pane_g8

0x42fd,	// (0x00042cf6) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0004dd82) bg_cale_heading_pane_g

0xb384,	// (0x00049d7d) bg_cale_side_pane_g1

0x4307,	// (0x00042d00) bg_cale_side_pane_g2

0x4311,	// (0x00042d0a) bg_cale_side_pane_g3

0x431b,	// (0x00042d14) bg_cale_side_pane_g4

0x4325,	// (0x00042d1e) bg_cale_side_pane_g5

0x432f,	// (0x00042d28) bg_cale_side_pane_g6

0x4339,	// (0x00042d32) bg_cale_side_pane_g7

0x4343,	// (0x00042d3c) bg_cale_side_pane_g8

0x434b,	// (0x00042d44) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0004dd95) bg_cale_side_pane_g

0x4353,	// (0x00042d4c) popup_call_status_window_ParamLimits

0x4353,	// (0x00042d4c) popup_call_status_window

0xb38c,	// (0x00049d85) stacon_top_pane

0xb394,	// (0x00049d8d) status_pane_ParamLimits

0xb394,	// (0x00049d8d) status_pane

0xb3a9,	// (0x00049da2) status_small_pane

0xb3b1,	// (0x00049daa) control_pane

0xa689,	// (0x00049082) stacon_bottom_pane

0xb3b9,	// (0x00049db2) list_single_mce_smart_pane_t1_ParamLimits

0xb3b9,	// (0x00049db2) list_single_mce_smart_pane_t1

0xb3cc,	// (0x00049dc5) list_single_mce_smart_pane_t2_ParamLimits

0xb3cc,	// (0x00049dc5) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0004dda8) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0004dda8) list_single_mce_smart_pane_t

0x435f,	// (0x00042d58) compass_pane

0x436a,	// (0x00042d63) main_location2_pane_t1

0x4380,	// (0x00042d79) main_location2_pane_t2

0x4396,	// (0x00042d8f) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0004ddad) main_location2_pane_t

0xb3eb,	// (0x00049de4) compass_pane_g1_ParamLimits

0xb3eb,	// (0x00049de4) compass_pane_g1

0x43e4,	// (0x00042ddd) compass_pane_t1

0x43f3,	// (0x00042dec) compass_pane_t2

0x0005,

0xf3bd,	// (0x0004ddb6) compass_pane_t

0x443e,	// (0x00042e37) text_secondary_cp61

0xb477,	// (0x00049e70) navi_pane_cams_g5

0xb4f3,	// (0x00049eec) navi_pane_im_t1

0xb501,	// (0x00049efa) navi_pane_mp_g1_ParamLimits

0xb501,	// (0x00049efa) navi_pane_mp_g1

0xb515,	// (0x00049f0e) navi_pane_mp_g2_ParamLimits

0xb515,	// (0x00049f0e) navi_pane_mp_g2

0xb521,	// (0x00049f1a) navi_pane_mp_g3_ParamLimits

0xb521,	// (0x00049f1a) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0004ddca) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0004ddca) navi_pane_mp_g

0xb52d,	// (0x00049f26) navi_pane_mp_t1

0xb53b,	// (0x00049f34) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0004ddd1) navi_pane_mp_t

0xb5a8,	// (0x00049fa1) navi_pane_vt_g1

0xb52d,	// (0x00049f26) navi_pane_vt_t1

0xb5b0,	// (0x00049fa9) navi_slider_pane

0xab68,	// (0x00049561) zooming_pane

0xb5c0,	// (0x00049fb9) navi_slider_pane_g1

0x4479,	// (0x00042e72) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0004ddd8) navi_slider_pane_g

0xb5e4,	// (0x00049fdd) aid_levels_zoom

0xb5ec,	// (0x00049fe5) zooming_pane_g1

0xb5f4,	// (0x00049fed) zooming_pane_g2

0xb5f4,	// (0x00049fed) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0004dde7) zooming_pane_g

0xb5fc,	// (0x00049ff5) level_10_zoom

0xb605,	// (0x00049ffe) level_11_zoom

0xb60e,	// (0x0004a007) level_1_zoom

0xb617,	// (0x0004a010) level_2_zoom

0xb620,	// (0x0004a019) level_3_zoom

0xb629,	// (0x0004a022) level_4_zoom

0xb632,	// (0x0004a02b) level_5_zoom

0xb63b,	// (0x0004a034) level_6_zoom

0xb644,	// (0x0004a03d) level_7_zoom

0xb64d,	// (0x0004a046) level_8_zoom

0xb656,	// (0x0004a04f) level_9_zoom

0xb667,	// (0x0004a060) popup_phob_thumbnail_window_g1

0xb66f,	// (0x0004a068) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0004ddee) popup_phob_thumbnail_window_g

0xc990,	// (0x0004b389) level_1_location

0xc998,	// (0x0004b391) level_2_location

0xc9a0,	// (0x0004b399) level_3_location

0xc9a8,	// (0x0004b3a1) level_4_location

0xab68,	// (0x00049561) level_5_location

0x448b,	// (0x00042e84) mce_icon_pane_g1

0x4493,	// (0x00042e8c) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0004ddf3) mce_icon_pane_g

0x449b,	// (0x00042e94) main_mup_pane_g1_ParamLimits

0x449b,	// (0x00042e94) main_mup_pane_g1

0x44b3,	// (0x00042eac) main_mup_pane_g2_ParamLimits

0x44b3,	// (0x00042eac) main_mup_pane_g2

0x44cf,	// (0x00042ec8) main_mup_pane_g3_ParamLimits

0x44cf,	// (0x00042ec8) main_mup_pane_g3

0x44eb,	// (0x00042ee4) main_mup_pane_g4_ParamLimits

0x44eb,	// (0x00042ee4) main_mup_pane_g4

0x44ff,	// (0x00042ef8) main_mup_pane_g5_ParamLimits

0x44ff,	// (0x00042ef8) main_mup_pane_g5

0x4520,	// (0x00042f19) main_mup_pane_g6_ParamLimits

0x4520,	// (0x00042f19) main_mup_pane_g6

0x4540,	// (0x00042f39) main_mup_pane_g7_ParamLimits

0x4540,	// (0x00042f39) main_mup_pane_g7

0x4564,	// (0x00042f5d) main_mup_pane_g8_ParamLimits

0x4564,	// (0x00042f5d) main_mup_pane_g8

0x4588,	// (0x00042f81) main_mup_pane_g9_ParamLimits

0x4588,	// (0x00042f81) main_mup_pane_g9

0x45ab,	// (0x00042fa4) main_mup_pane_g10_ParamLimits

0x45ab,	// (0x00042fa4) main_mup_pane_g10

0x45ce,	// (0x00042fc7) main_mup_pane_g11_ParamLimits

0x45ce,	// (0x00042fc7) main_mup_pane_g11

0x45ee,	// (0x00042fe7) main_mup_pane_g12_ParamLimits

0x45ee,	// (0x00042fe7) main_mup_pane_g12

0x45fc,	// (0x00042ff5) main_mup_pane_g13_ParamLimits

0x45fc,	// (0x00042ff5) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0004ddf8) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0004ddf8) main_mup_pane_g

0x4612,	// (0x0004300b) main_mup_pane_t1_ParamLimits

0x4612,	// (0x0004300b) main_mup_pane_t1

0x4631,	// (0x0004302a) main_mup_pane_t2_ParamLimits

0x4631,	// (0x0004302a) main_mup_pane_t2

0x464b,	// (0x00043044) main_mup_pane_t3_ParamLimits

0x464b,	// (0x00043044) main_mup_pane_t3

0x4665,	// (0x0004305e) main_mup_pane_t4_ParamLimits

0x4665,	// (0x0004305e) main_mup_pane_t4

0x4677,	// (0x00043070) main_mup_pane_t5_ParamLimits

0x4677,	// (0x00043070) main_mup_pane_t5

0x4689,	// (0x00043082) main_mup_pane_t6_ParamLimits

0x4689,	// (0x00043082) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0004de13) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0004de13) main_mup_pane_t

0x469f,	// (0x00043098) mup_progress_pane_ParamLimits

0x469f,	// (0x00043098) mup_progress_pane

0x46ab,	// (0x000430a4) mup_visualizer_pane_ParamLimits

0x46ab,	// (0x000430a4) mup_visualizer_pane

0x46e9,	// (0x000430e2) mup_volume_pane_ParamLimits

0x46e9,	// (0x000430e2) mup_volume_pane

0xb422,	// (0x00049e1b) mup_visualizer_pane_g1_ParamLimits

0xb422,	// (0x00049e1b) mup_visualizer_pane_g1

0xb422,	// (0x00049e1b) mup_visualizer_pane_g2_ParamLimits

0xb422,	// (0x00049e1b) mup_visualizer_pane_g2

0xb3eb,	// (0x00049de4) mup_visualizer_pane_g3_ParamLimits

0xb3eb,	// (0x00049de4) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0004de20) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0004de20) mup_visualizer_pane_g

0xa9fe,	// (0x000493f7) mup_volume_pane_g1

0xb67f,	// (0x0004a078) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0004de27) mup_volume_pane_g

0xa9fe,	// (0x000493f7) mup_progress_pane_g1

0xb688,	// (0x0004a081) mup_progress_pane_g2

0xb691,	// (0x0004a08a) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0004de2c) mup_progress_pane_g

0xa689,	// (0x00049082) bg_popup_window_pane_cp05

0xb69a,	// (0x0004a093) heading_pane_cp02_ParamLimits

0xb69a,	// (0x0004a093) heading_pane_cp02

0xb6b6,	// (0x0004a0af) list_popup_blid_pane

0xb6be,	// (0x0004a0b7) list_blid_sat_info_pane_ParamLimits

0xb6be,	// (0x0004a0b7) list_blid_sat_info_pane

0xb6d1,	// (0x0004a0ca) list_blid_sat_info_pane_g1

0xb6d9,	// (0x0004a0d2) list_blid_sat_info_pane_t1

0x4808,	// (0x00043201) mup_equalizer_pane_ParamLimits

0x4808,	// (0x00043201) mup_equalizer_pane

0x4829,	// (0x00043222) mup_equalizer_pane_cp1_ParamLimits

0x4829,	// (0x00043222) mup_equalizer_pane_cp1

0x484a,	// (0x00043243) mup_equalizer_pane_cp2_ParamLimits

0x484a,	// (0x00043243) mup_equalizer_pane_cp2

0x486b,	// (0x00043264) mup_equalizer_pane_cp3_ParamLimits

0x486b,	// (0x00043264) mup_equalizer_pane_cp3

0x4890,	// (0x00043289) mup_equalizer_pane_cp4_ParamLimits

0x4890,	// (0x00043289) mup_equalizer_pane_cp4

0x48b5,	// (0x000432ae) mup_equalizer_pane_cp5

0x48cd,	// (0x000432c6) mup_equalizer_pane_cp6

0x48e5,	// (0x000432de) mup_equalizer_pane_cp7

0xc8aa,	// (0x0004b2a3) bg_popup_call_poc_act_pane_g9

0xc8b2,	// (0x0004b2ab) bg_popup_call_poc_act_pane_g10

0xc8ba,	// (0x0004b2b3) bg_popup_call_poc_act_pane_g11

0x000a,

0xa8e4,	// (0x000492dd) mup_scale_pane

0xa9fe,	// (0x000493f7) mup_scale_pane_g1

0xb6e7,	// (0x0004a0e0) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0004de48) mup_scale_pane_g

0xb70b,	// (0x0004a104) msg_data_pane

0xb713,	// (0x0004a10c) scroll_pane_cp017

0x490f,	// (0x00043308) bg_list_pane_cp04_ParamLimits

0x490f,	// (0x00043308) bg_list_pane_cp04

0xb71b,	// (0x0004a114) msg_data_pane_g1

0x492f,	// (0x00043328) msg_data_pane_g2

0x4939,	// (0x00043332) msg_data_pane_g3

0x4943,	// (0x0004333c) msg_data_pane_g4

0x494b,	// (0x00043344) msg_data_pane_g5

0x4953,	// (0x0004334c) msg_data_pane_g6

0x495b,	// (0x00043354) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0004de57) msg_data_pane_g

0x4963,	// (0x0004335c) msg_text_pane_ParamLimits

0x4963,	// (0x0004335c) msg_text_pane

0x4994,	// (0x0004338d) qrid_highlight_pane_cp011_ParamLimits

0x4994,	// (0x0004338d) qrid_highlight_pane_cp011

0xa689,	// (0x00049082) msg_body_pane

0xa689,	// (0x00049082) msg_header_pane

0xb72c,	// (0x0004a125) input_focus_pane_cp07

0xb741,	// (0x0004a13a) msg_header_pane_t1_ParamLimits

0xb741,	// (0x0004a13a) msg_header_pane_t1

0x0ca1,	// (0x0003f69a) msg_header_pane_t2_ParamLimits

0x0ca1,	// (0x0003f69a) msg_header_pane_t2

0x0001,

0xf472,	// (0x0004de6b) msg_header_pane_t_ParamLimits

0xf472,	// (0x0004de6b) msg_header_pane_t

0xb753,	// (0x0004a14c) msg_body_pane_g1

0x0cb3,	// (0x0003f6ac) msg_body_pane_t1_ParamLimits

0x0cb3,	// (0x0003f6ac) msg_body_pane_t1

0x0ce4,	// (0x0003f6dd) msg_body_pane_t2_ParamLimits

0x0ce4,	// (0x0003f6dd) msg_body_pane_t2

0x0cf6,	// (0x0003f6ef) msg_body_pane_t3_ParamLimits

0x0cf6,	// (0x0003f6ef) msg_body_pane_t3

0x0002,

0xf477,	// (0x0004de70) msg_body_pane_t_ParamLimits

0xf477,	// (0x0004de70) msg_body_pane_t

0x49fc,	// (0x000433f5) main_viewer_pane_g1_ParamLimits

0x49fc,	// (0x000433f5) main_viewer_pane_g1

0x4a08,	// (0x00043401) main_viewer_pane_g2_ParamLimits

0x4a08,	// (0x00043401) main_viewer_pane_g2

0x4a14,	// (0x0004340d) main_viewer_pane_g3_ParamLimits

0x4a14,	// (0x0004340d) main_viewer_pane_g3

0x4a25,	// (0x0004341e) main_viewer_pane_g4_ParamLimits

0x4a25,	// (0x0004341e) main_viewer_pane_g4

0x4a36,	// (0x0004342f) main_viewer_pane_g5_ParamLimits

0x4a36,	// (0x0004342f) main_viewer_pane_g5

0x4a36,	// (0x0004342f) main_viewer_pane_g7_ParamLimits

0x4a36,	// (0x0004342f) main_viewer_pane_g7

0x4a48,	// (0x00043441) main_viewer_pane_g8_ParamLimits

0x4a48,	// (0x00043441) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0004de80) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0004de80) main_viewer_pane_g

0xb75b,	// (0x0004a154) viewer_content_pane_ParamLimits

0xb75b,	// (0x0004a154) viewer_content_pane

0x4a80,	// (0x00043479) main_postcard_pane_g1_ParamLimits

0x4a80,	// (0x00043479) main_postcard_pane_g1

0x4a8e,	// (0x00043487) main_postcard_pane_g2_ParamLimits

0x4a8e,	// (0x00043487) main_postcard_pane_g2

0x4a9c,	// (0x00043495) main_postcard_pane_g3_ParamLimits

0x4a9c,	// (0x00043495) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0004de91) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0004de91) main_postcard_pane_g

0x4aac,	// (0x000434a5) main_postcard_pane_g4

0xcaa3,	// (0x0004b49c) smil_status_volume_pane_g2

0x4ad8,	// (0x000434d1) postcard_pane_ParamLimits

0x4ad8,	// (0x000434d1) postcard_pane

0xb422,	// (0x00049e1b) postcard_pane_g1_ParamLimits

0xb422,	// (0x00049e1b) postcard_pane_g1

0x4b12,	// (0x0004350b) postcard_pane_g2_ParamLimits

0x4b12,	// (0x0004350b) postcard_pane_g2

0x4b1e,	// (0x00043517) postcard_pane_g3_ParamLimits

0x4b1e,	// (0x00043517) postcard_pane_g3

0xb769,	// (0x0004a162) postcard_pane_g4_ParamLimits

0xb769,	// (0x0004a162) postcard_pane_g4

0x4b2a,	// (0x00043523) postcard_pane_g5_ParamLimits

0x4b2a,	// (0x00043523) postcard_pane_g5

0x4b36,	// (0x0004352f) postcard_pane_g6_ParamLimits

0x4b36,	// (0x0004352f) postcard_pane_g6

0xb777,	// (0x0004a170) postcard_pane_g7_ParamLimits

0xb777,	// (0x0004a170) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0004de9e) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0004de9e) postcard_pane_g

0x4b44,	// (0x0004353d) main_mp2_pane_g1_ParamLimits

0x4b44,	// (0x0004353d) main_mp2_pane_g1

0x4b52,	// (0x0004354b) main_mp2_pane_g2_ParamLimits

0x4b52,	// (0x0004354b) main_mp2_pane_g2

0x4b5e,	// (0x00043557) main_mp2_pane_g3_ParamLimits

0x4b5e,	// (0x00043557) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0004dead) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0004dead) main_mp2_pane_g

0x4b6a,	// (0x00043563) main_mp2_pane_t1_ParamLimits

0x4b6a,	// (0x00043563) main_mp2_pane_t1

0x4b81,	// (0x0004357a) main_mp2_pane_t2_ParamLimits

0x4b81,	// (0x0004357a) main_mp2_pane_t2

0x4b95,	// (0x0004358e) main_mp2_pane_t3_ParamLimits

0x4b95,	// (0x0004358e) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0004deb4) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0004deb4) main_mp2_pane_t

0xb785,	// (0x0004a17e) pec_content_pane_ParamLimits

0xb785,	// (0x0004a17e) pec_content_pane

0xad15,	// (0x0004970e) scroll_pane_cp015

0xb797,	// (0x0004a190) pec_attribute_pane_ParamLimits

0xb797,	// (0x0004a190) pec_attribute_pane

0x4ba7,	// (0x000435a0) pec_content_pane_g1_ParamLimits

0x4ba7,	// (0x000435a0) pec_content_pane_g1

0xb7a7,	// (0x0004a1a0) pec_content_pane_t1_ParamLimits

0xb7a7,	// (0x0004a1a0) pec_content_pane_t1

0xb7b9,	// (0x0004a1b2) pec_content_pane_t2_ParamLimits

0xb7b9,	// (0x0004a1b2) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0004debb) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0004debb) pec_content_pane_t

0x4bb3,	// (0x000435ac) list_single_graphic_pane_cp01_ParamLimits

0x4bb3,	// (0x000435ac) list_single_graphic_pane_cp01

0xa8e4,	// (0x000492dd) bg_popup_sub_pane_cp04

0xb7cb,	// (0x0004a1c4) popup_mup_playback_window_g1

0xb7d7,	// (0x0004a1d0) popup_mup_playback_window_t1

0xb7ec,	// (0x0004a1e5) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0004dec0) popup_mup_playback_window_t

0xb823,	// (0x0004a21c) main_image_pane_g1_ParamLimits

0xb823,	// (0x0004a21c) main_image_pane_g1

0xb866,	// (0x0004a25f) scroll_pane_cp018_ParamLimits

0xb866,	// (0x0004a25f) scroll_pane_cp018

0xb87e,	// (0x0004a277) scroll_pane_cp016_ParamLimits

0xb87e,	// (0x0004a277) scroll_pane_cp016

0x4c41,	// (0x0004363a) smil2_image_pane_ParamLimits

0x4c41,	// (0x0004363a) smil2_image_pane

0x4c77,	// (0x00043670) smil2_root_pane_ParamLimits

0x4c77,	// (0x00043670) smil2_root_pane

0x4ca3,	// (0x0004369c) smil2_text_pane_ParamLimits

0x4ca3,	// (0x0004369c) smil2_text_pane

0xa689,	// (0x00049082) bg_list_pane_cp06

0xb8ba,	// (0x0004a2b3) grid_radio_pane

0xa689,	// (0x00049082) bg_popup_window_pane_cp06

0xb8c4,	// (0x0004a2bd) main_fmradio_pane_t1

0xb253,	// (0x00049c4c) heading_pane_cp04

0xb8d2,	// (0x0004a2cb) main_fmradio_pane_t2

0xc8c2,	// (0x0004b2bb) popup_cale_lunar_info_window_g1

0xb8e0,	// (0x0004a2d9) main_fmradio_pane_t3

0xc8ca,	// (0x0004b2c3) popup_cale_lunar_info_window_g2

0xb8f0,	// (0x0004a2e9) main_fmradio_pane_t4

0x0001,

0xb8fe,	// (0x0004a2f7) main_fmradio_pane_t5

0x0004,

0xf5a2,	// (0x0004df9b) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0004ded5) main_fmradio_pane_t

0xb90c,	// (0x0004a305) wait_bar_pane_cp03

0xb914,	// (0x0004a30d) cell_fmradio_pane_ParamLimits

0xb914,	// (0x0004a30d) cell_fmradio_pane

0xb777,	// (0x0004a170) cell_fmradio_pane_g1_ParamLimits

0xb777,	// (0x0004a170) cell_fmradio_pane_g1

0xa689,	// (0x00049082) grid_highlight_pane_cp011

0xb929,	// (0x0004a322) poc_content_pane_ParamLimits

0xb929,	// (0x0004a322) poc_content_pane

0xb93b,	// (0x0004a334) scroll_pane_cp019

0x4ce3,	// (0x000436dc) popup_call_poc_act_window_ParamLimits

0x4ce3,	// (0x000436dc) popup_call_poc_act_window

0x4cf0,	// (0x000436e9) popup_call_poc_inact_window_ParamLimits

0x4cf0,	// (0x000436e9) popup_call_poc_inact_window

0xf579,	// (0x0004df72) bg_popup_call_poc_act_pane_g

0xc83a,	// (0x0004b233) bg_popup_call_poc_inact_pane_g1

0xc842,	// (0x0004b23b) bg_popup_call_poc_inact_pane_g2

0xb943,	// (0x0004a33c) popup_call_poc_act_window_g2

0xc84a,	// (0x0004b243) bg_popup_call_poc_inact_pane_g3

0xc852,	// (0x0004b24b) bg_popup_call_poc_inact_pane_g4

0xc85a,	// (0x0004b253) bg_popup_call_poc_inact_pane_g5

0xb94b,	// (0x0004a344) popup_call_poc_act_window_t1_ParamLimits

0xb94b,	// (0x0004a344) popup_call_poc_act_window_t1

0xb973,	// (0x0004a36c) popup_call_poc_act_window_t2_ParamLimits

0xb973,	// (0x0004a36c) popup_call_poc_act_window_t2

0xb99b,	// (0x0004a394) popup_call_poc_act_window_t3_ParamLimits

0xb99b,	// (0x0004a394) popup_call_poc_act_window_t3

0xb9c3,	// (0x0004a3bc) popup_call_poc_act_window_t4_ParamLimits

0xb9c3,	// (0x0004a3bc) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0004dee0) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0004dee0) popup_call_poc_act_window_t

0xc862,	// (0x0004b25b) bg_popup_call_poc_inact_pane_g6

0xc86a,	// (0x0004b263) bg_popup_call_poc_inact_pane_g7

0xc872,	// (0x0004b26b) bg_popup_call_poc_inact_pane_g8

0xb9d5,	// (0x0004a3ce) popup_call_poc_inact_window_g2

0xc87a,	// (0x0004b273) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf566,	// (0x0004df5f) bg_popup_call_poc_inact_pane_g

0xb9dd,	// (0x0004a3d6) popup_call_poc_inact_window_t1_ParamLimits

0xb9dd,	// (0x0004a3d6) popup_call_poc_inact_window_t1

0xb9f2,	// (0x0004a3eb) popup_call_poc_inact_window_t2_ParamLimits

0xb9f2,	// (0x0004a3eb) popup_call_poc_inact_window_t2

0xba07,	// (0x0004a400) popup_call_poc_inact_window_t3_ParamLimits

0xba07,	// (0x0004a400) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0004dee9) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0004dee9) popup_call_poc_inact_window_t

0xca03,	// (0x0004b3fc) context_pane_ParamLimits

0x5345,	// (0x00043d3e) signal_pane_ParamLimits

0xab68,	// (0x00049561) main_call2_pane

0x52b2,	// (0x00043cab) popup_phob_thumbnail2_window_ParamLimits

0x52b2,	// (0x00043cab) popup_phob_thumbnail2_window

0x49aa,	// (0x000433a3) aid_hotspot_pointer_arrow_pane

0x49b2,	// (0x000433ab) aid_hotspot_pointer_hand_pane

0x5015,	// (0x00043a0e) phob_pre_status_pane_g5

0x2cff,	// (0x000416f8) cams_zoom_pane_ParamLimits

0x2d0b,	// (0x00041704) image_vga_pane_ParamLimits

0x2d1a,	// (0x00041713) main_camera_pane_g1_ParamLimits

0x2d28,	// (0x00041721) main_camera_pane_g2_ParamLimits

0x2d34,	// (0x0004172d) main_camera_pane_g3_ParamLimits

0x2d42,	// (0x0004173b) main_camera_pane_g4_ParamLimits

0x2d50,	// (0x00041749) main_camera_pane_g5_ParamLimits

0x2d5e,	// (0x00041757) main_camera_pane_g6_ParamLimits

0x2d6c,	// (0x00041765) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0004dbe8) main_camera_pane_g_ParamLimits

0x2d7a,	// (0x00041773) main_camera_pane_t1_ParamLimits

0x2d8c,	// (0x00041785) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0004dbf9) main_camera_pane_t_ParamLimits

0xa8e4,	// (0x000492dd) bg_popup_preview_window_pane_cp01_ParamLimits

0xa8e4,	// (0x000492dd) bg_popup_preview_window_pane_cp01

0xba1c,	// (0x0004a415) popup_phob_thumbnail2_window_g1_ParamLimits

0xba1c,	// (0x0004a415) popup_phob_thumbnail2_window_g1

0xa689,	// (0x00049082) call2_cli_visual_pane

0x4d0c,	// (0x00043705) popup_call2_audio_conf_window_ParamLimits

0x4d0c,	// (0x00043705) popup_call2_audio_conf_window

0x4d25,	// (0x0004371e) popup_call2_audio_first_window_ParamLimits

0x4d25,	// (0x0004371e) popup_call2_audio_first_window

0x4dc3,	// (0x000437bc) popup_call2_audio_in_window_ParamLimits

0x4dc3,	// (0x000437bc) popup_call2_audio_in_window

0x4e07,	// (0x00043800) popup_call2_audio_out_window_ParamLimits

0x4e07,	// (0x00043800) popup_call2_audio_out_window

0x4e71,	// (0x0004386a) popup_call2_audio_second_window_ParamLimits

0x4e71,	// (0x0004386a) popup_call2_audio_second_window

0x4ecf,	// (0x000438c8) popup_call2_audio_wait_window_ParamLimits

0x4ecf,	// (0x000438c8) popup_call2_audio_wait_window

0xa689,	// (0x00049082) bg_popup_call2_act_pane_cp03

0xa8c6,	// (0x000492bf) list_conf_pane_cp

0xba28,	// (0x0004a421) popup_call2_audio_conf_window_t1

0xba36,	// (0x0004a42f) list_single_graphic_popup_conf2_pane_ParamLimits

0xba36,	// (0x0004a42f) list_single_graphic_popup_conf2_pane

0xb2c2,	// (0x00049cbb) list_highlight_pane_cp04

0xba49,	// (0x0004a442) list_single_graphic_popup_conf2_pane_g1

0xb2d3,	// (0x00049ccc) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0004def0) list_single_graphic_popup_conf2_pane_g

0xba53,	// (0x0004a44c) list_single_graphic_popup_conf2_pane_t1

0xba61,	// (0x0004a45a) bg_popup_call2_act_pane_cp01_ParamLimits

0xba61,	// (0x0004a45a) bg_popup_call2_act_pane_cp01

0xbaeb,	// (0x0004a4e4) call_type_pane_cp05_ParamLimits

0xbaeb,	// (0x0004a4e4) call_type_pane_cp05

0xbb3f,	// (0x0004a538) popup_call2_audio_second_window_g1_ParamLimits

0xbb3f,	// (0x0004a538) popup_call2_audio_second_window_g1

0xbb93,	// (0x0004a58c) popup_call2_audio_second_window_g2_ParamLimits

0xbb93,	// (0x0004a58c) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0004def5) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0004def5) popup_call2_audio_second_window_g

0xbbf8,	// (0x0004a5f1) popup_call2_audio_second_window_t1_ParamLimits

0xbbf8,	// (0x0004a5f1) popup_call2_audio_second_window_t1

0xbccd,	// (0x0004a6c6) popup_call2_audio_second_window_t2_ParamLimits

0xbccd,	// (0x0004a6c6) popup_call2_audio_second_window_t2

0xbd20,	// (0x0004a719) popup_call2_audio_second_window_t3_ParamLimits

0xbd20,	// (0x0004a719) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0004defc) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0004defc) popup_call2_audio_second_window_t

0xa689,	// (0x00049082) bg_popup_call2_in_pane_cp02

0xa693,	// (0x0004908c) call_type_pane_cp04

0xa69b,	// (0x00049094) popup_call2_audio_wait_window_g1

0xa6a3,	// (0x0004909c) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0004dad7) popup_call2_audio_wait_window_g

0xa6ab,	// (0x000490a4) popup_call2_audio_wait_window_t3

0xbe13,	// (0x0004a80c) bg_popup_call2_act_pane_ParamLimits

0xbe13,	// (0x0004a80c) bg_popup_call2_act_pane

0xbed3,	// (0x0004a8cc) call_type_pane_cp03_ParamLimits

0xbed3,	// (0x0004a8cc) call_type_pane_cp03

0xbf37,	// (0x0004a930) popup_call2_audio_first_window_g1_ParamLimits

0xbf37,	// (0x0004a930) popup_call2_audio_first_window_g1

0xbfa7,	// (0x0004a9a0) popup_call2_audio_first_window_g2_ParamLimits

0xbfa7,	// (0x0004a9a0) popup_call2_audio_first_window_g2

0xb422,	// (0x00049e1b) popup_call2_audio_first_window_g3_ParamLimits

0xb422,	// (0x00049e1b) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0004df05) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0004df05) popup_call2_audio_first_window_g

0xc085,	// (0x0004aa7e) popup_call2_audio_first_window_t1_ParamLimits

0xc085,	// (0x0004aa7e) popup_call2_audio_first_window_t1

0xc188,	// (0x0004ab81) popup_call2_audio_first_window_t4_ParamLimits

0xc188,	// (0x0004ab81) popup_call2_audio_first_window_t4

0xc26b,	// (0x0004ac64) popup_call2_audio_first_window_t5_ParamLimits

0xc26b,	// (0x0004ac64) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0004df10) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0004df10) popup_call2_audio_first_window_t

0xa8dc,	// (0x000492d5) bg_popup_call2_act_pane_g1

0xc8d4,	// (0x0004b2cd) popup_cale_lunar_info_window_t1

0xc8e2,	// (0x0004b2db) popup_cale_lunar_info_window_t2

0xc8f0,	// (0x0004b2e9) popup_cale_lunar_info_window_t3

0xa689,	// (0x00049082) bg_popup_call2_bubble_pane

0xc36c,	// (0x0004ad65) bg_popup_call2_in_pane_cp01_ParamLimits

0xc36c,	// (0x0004ad65) bg_popup_call2_in_pane_cp01

0xa365,	// (0x00048d5e) call_type_pane_cp02

0xc3b4,	// (0x0004adad) popup_call2_audio_out_window_g1_ParamLimits

0xc3b4,	// (0x0004adad) popup_call2_audio_out_window_g1

0xc3e0,	// (0x0004add9) popup_call2_audio_out_window_g2_ParamLimits

0xc3e0,	// (0x0004add9) popup_call2_audio_out_window_g2

0xc408,	// (0x0004ae01) popup_call2_audio_out_window_g3_ParamLimits

0xc408,	// (0x0004ae01) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0004df19) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0004df19) popup_call2_audio_out_window_g

0xc443,	// (0x0004ae3c) popup_call2_audio_out_window_t1_ParamLimits

0xc443,	// (0x0004ae3c) popup_call2_audio_out_window_t1

0xc4a2,	// (0x0004ae9b) popup_call2_audio_out_window_t2_ParamLimits

0xc4a2,	// (0x0004ae9b) popup_call2_audio_out_window_t2

0xc4f6,	// (0x0004aeef) popup_call2_audio_out_window_t3_ParamLimits

0xc4f6,	// (0x0004aeef) popup_call2_audio_out_window_t3

0xc50c,	// (0x0004af05) popup_call2_audio_out_window_t4_ParamLimits

0xc50c,	// (0x0004af05) popup_call2_audio_out_window_t4

0xc522,	// (0x0004af1b) popup_call2_audio_out_window_t5_ParamLimits

0xc522,	// (0x0004af1b) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0004df22) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0004df22) popup_call2_audio_out_window_t

0xc586,	// (0x0004af7f) bg_popup_call2_in_pane_ParamLimits

0xc586,	// (0x0004af7f) bg_popup_call2_in_pane

0xc5e2,	// (0x0004afdb) popup_call2_audio_in_window_g1_ParamLimits

0xc5e2,	// (0x0004afdb) popup_call2_audio_in_window_g1

0xc61a,	// (0x0004b013) popup_call2_audio_in_window_g2_ParamLimits

0xc61a,	// (0x0004b013) popup_call2_audio_in_window_g2

0xc652,	// (0x0004b04b) popup_call2_audio_in_window_g3_ParamLimits

0xc652,	// (0x0004b04b) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0004df2f) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0004df2f) popup_call2_audio_in_window_g

0xc6aa,	// (0x0004b0a3) popup_call2_audio_in_window_t1_ParamLimits

0xc6aa,	// (0x0004b0a3) popup_call2_audio_in_window_t1

0xc72a,	// (0x0004b123) popup_call2_audio_in_window_t2_ParamLimits

0xc72a,	// (0x0004b123) popup_call2_audio_in_window_t2

0xc7aa,	// (0x0004b1a3) popup_call2_audio_in_window_t3_ParamLimits

0xc7aa,	// (0x0004b1a3) popup_call2_audio_in_window_t3

0xc7c4,	// (0x0004b1bd) popup_call2_audio_in_window_t4_ParamLimits

0xc7c4,	// (0x0004b1bd) popup_call2_audio_in_window_t4

0xc7d6,	// (0x0004b1cf) popup_call2_audio_in_window_t5_ParamLimits

0xc7d6,	// (0x0004b1cf) popup_call2_audio_in_window_t5

0xc7e8,	// (0x0004b1e1) popup_call2_audio_in_window_t6_ParamLimits

0xc7e8,	// (0x0004b1e1) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0004df38) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0004df38) popup_call2_audio_in_window_t

0xa8dc,	// (0x000492d5) bg_popup_call2_in_pane_g1

0xc8fe,	// (0x0004b2f7) popup_cale_lunar_info_window_t4

0x0003,

0xf5a7,	// (0x0004dfa0) popup_cale_lunar_info_window_t

0xa8e4,	// (0x000492dd) bg_popup_call2_rect_pane_ParamLimits

0xa8e4,	// (0x000492dd) bg_popup_call2_rect_pane

0xa689,	// (0x00049082) call2_cli_visual_graphic_pane

0xa689,	// (0x00049082) call2_cli_visual_text_pane

0x53ca,	// (0x00043dc3) smil_status_volume_pane_g3

0x0002,

0xa9fe,	// (0x000493f7) call2_cli_visual_graphic_pane_g1

0xa9fe,	// (0x000493f7) call2_cli_visual_graphic_pane_g2

0xa9fe,	// (0x000493f7) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0004df45) call2_cli_visual_graphic_pane_g

0xc7fa,	// (0x0004b1f3) bg_popup_call2_rect_pane_g1

0xaa8a,	// (0x00049483) bg_popup_call2_rect_pane_g2

0xc802,	// (0x0004b1fb) bg_popup_call2_rect_pane_g3

0xc80a,	// (0x0004b203) bg_popup_call2_rect_pane_g4

0xc812,	// (0x0004b20b) bg_popup_call2_rect_pane_g5

0xc81a,	// (0x0004b213) bg_popup_call2_rect_pane_g6

0xc822,	// (0x0004b21b) bg_popup_call2_rect_pane_g7

0xc82a,	// (0x0004b223) bg_popup_call2_rect_pane_g8

0xc832,	// (0x0004b22b) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0004df4c) bg_popup_call2_rect_pane_g

0xc83a,	// (0x0004b233) bg_popup_call2_bubble_pane_g1

0xc842,	// (0x0004b23b) bg_popup_call2_bubble_pane_g2

0xc84a,	// (0x0004b243) bg_popup_call2_bubble_pane_g3

0xc852,	// (0x0004b24b) bg_popup_call2_bubble_pane_g4

0xc85a,	// (0x0004b253) bg_popup_call2_bubble_pane_g5

0xc862,	// (0x0004b25b) bg_popup_call2_bubble_pane_g6

0xc86a,	// (0x0004b263) bg_popup_call2_bubble_pane_g7

0xc872,	// (0x0004b26b) bg_popup_call2_bubble_pane_g8

0xc87a,	// (0x0004b273) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0004df5f) bg_popup_call2_bubble_pane_g

0x261d,	// (0x00041016) aid_cale_week_size_cell_pane

0x2da0,	// (0x00041799) aid_cams_cif_uncrop_pane_ParamLimits

0x2da0,	// (0x00041799) aid_cams_cif_uncrop_pane

0x2efd,	// (0x000418f6) aid_cams_size_cell_ParamLimits

0x2efd,	// (0x000418f6) aid_cams_size_cell

0x2f09,	// (0x00041902) grid_cams_pane_ParamLimits

0x2f17,	// (0x00041910) linegrid_cams_pane_ParamLimits

0x2fe8,	// (0x000419e1) call_video_pane_t1

0x3005,	// (0x000419fe) call_video_pane_t2

0x0001,

0xf253,	// (0x0004dc4c) call_video_pane_t

0x34d1,	// (0x00041eca) aid_cale_month_size_cell_pane_ParamLimits

0x34d1,	// (0x00041eca) aid_cale_month_size_cell_pane

0xf5f0,	// (0x0004dfe9) smil_status_volume_pane_g

0x53d7,	// (0x00043dd0) volume_smil_pane_ParamLimits

0x1de5,	// (0x000407de) aid_popup2_width_pane

0x2529,	// (0x00040f22) cell_qdial_pane_g4_ParamLimits

0x2529,	// (0x00040f22) cell_qdial_pane_g4

0x43c0,	// (0x00042db9) aid_blid_cardinal_pane_ParamLimits

0x43d0,	// (0x00042dc9) aid_blid_destination_pane_ParamLimits

0x43d0,	// (0x00042dc9) aid_blid_destination_pane

0xa8e4,	// (0x000492dd) bg_popup_call_poc_act_pane_ParamLimits

0xa8e4,	// (0x000492dd) bg_popup_call_poc_act_pane

0xa8e4,	// (0x000492dd) bg_popup_call_poc_inact_pane_ParamLimits

0xa8e4,	// (0x000492dd) bg_popup_call_poc_inact_pane

0xc882,	// (0x0004b27b) bg_popup_call_poc_act_pane_g1

0xc88a,	// (0x0004b283) bg_popup_call_poc_act_pane_g2

0xc892,	// (0x0004b28b) bg_popup_call_poc_act_pane_g3

0xc852,	// (0x0004b24b) bg_popup_call_poc_act_pane_g4

0xc85a,	// (0x0004b253) bg_popup_call_poc_act_pane_g5

0xc89a,	// (0x0004b293) bg_popup_call_poc_act_pane_g6

0xc86a,	// (0x0004b263) bg_popup_call_poc_act_pane_g7

0xc8a2,	// (0x0004b29b) bg_popup_call_poc_act_pane_g8

0xa689,	// (0x00049082) main_usb_pane

0x51cf,	// (0x00043bc8) popup_cale_lunar_info_window

0x331d,	// (0x00041d16) im_reading_pane_t1_ParamLimits

0xac6d,	// (0x00049666) list_im_pane_ParamLimits

0xac7e,	// (0x00049677) scroll_pane_cp07_ParamLimits

0xa689,	// (0x00049082) grid_highlight_pane_cp012

0xa8e4,	// (0x000492dd) mup_scale_pane_ParamLimits

0xb422,	// (0x00049e1b) main_usb_pane_g1_ParamLimits

0xb422,	// (0x00049e1b) main_usb_pane_g1

0x4f38,	// (0x00043931) main_usb_pane_g2_ParamLimits

0x4f38,	// (0x00043931) main_usb_pane_g2

0x0001,

0xf590,	// (0x0004df89) main_usb_pane_g_ParamLimits

0xf590,	// (0x0004df89) main_usb_pane_g

0x4f44,	// (0x0004393d) main_usb_pane_t1_ParamLimits

0x4f44,	// (0x0004393d) main_usb_pane_t1

0x4f56,	// (0x0004394f) main_usb_pane_t2_ParamLimits

0x4f56,	// (0x0004394f) main_usb_pane_t2

0x4f68,	// (0x00043961) main_usb_pane_t3_ParamLimits

0x4f68,	// (0x00043961) main_usb_pane_t3

0x4f7a,	// (0x00043973) main_usb_pane_t4_ParamLimits

0x4f7a,	// (0x00043973) main_usb_pane_t4

0x4f8c,	// (0x00043985) main_usb_pane_t5_ParamLimits

0x4f8c,	// (0x00043985) main_usb_pane_t5

0x4f9e,	// (0x00043997) main_usb_pane_t6_ParamLimits

0x4f9e,	// (0x00043997) main_usb_pane_t6

0x0005,

0xf595,	// (0x0004df8e) main_usb_pane_t_ParamLimits

0x435f,	// (0x00042d58) aid_text_placing

0x436a,	// (0x00042d63) main_location2_pane_t1_ParamLimits

0x4380,	// (0x00042d79) main_location2_pane_t2_ParamLimits

0x4396,	// (0x00042d8f) main_location2_pane_t3_ParamLimits

0x43ac,	// (0x00042da5) main_location2_pane_t4_ParamLimits

0x43ac,	// (0x00042da5) main_location2_pane_t4

0xf3b4,	// (0x0004ddad) main_location2_pane_t_ParamLimits

0xa920,	// (0x00049319) find_pinb_pane_g2_ParamLimits

0xa920,	// (0x00049319) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0004dafd) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0004dafd) find_pinb_pane_g

0xa92c,	// (0x00049325) find_pinb_pane_t1_ParamLimits

0xa93e,	// (0x00049337) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0004db02) find_pinb_pane_t_ParamLimits

0xa689,	// (0x00049082) main_call3_pane

0x3a84,	// (0x0004247d) cale_month_day_heading_pane_t1_ParamLimits

0x3b06,	// (0x000424ff) cale_month_day_heading_pane_t2_ParamLimits

0x3b7f,	// (0x00042578) cale_month_day_heading_pane_t3_ParamLimits

0x3bf8,	// (0x000425f1) cale_month_day_heading_pane_t4_ParamLimits

0x3c71,	// (0x0004266a) cale_month_day_heading_pane_t5_ParamLimits

0x3cf2,	// (0x000426eb) cale_month_day_heading_pane_t6_ParamLimits

0x3d7b,	// (0x00042774) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0004dc84) cale_month_day_heading_pane_t_ParamLimits

0xaec8,	// (0x000498c1) smil_status_volume_pane

0x4af6,	// (0x000434ef) postcard_address_pane_ParamLimits

0x4af6,	// (0x000434ef) postcard_address_pane

0x4b04,	// (0x000434fd) postcard_message_pane_ParamLimits

0x4b04,	// (0x000434fd) postcard_message_pane

0x4f0e,	// (0x00043907) call2_cli_visual_pane_t1_ParamLimits

0x4f0e,	// (0x00043907) call2_cli_visual_pane_t1

0x551d,	// (0x00043f16) postcard_message_pane_t1_ParamLimits

0x551d,	// (0x00043f16) postcard_message_pane_t1

0xcab6,	// (0x0004b4af) postcard_address_pane_t1_ParamLimits

0xcab6,	// (0x0004b4af) postcard_address_pane_t1

0x550e,	// (0x00043f07) popup_call3_audio_in_window_ParamLimits

0x550e,	// (0x00043f07) popup_call3_audio_in_window

0x53ec,	// (0x00043de5) bg_popup_call3_in_pane_ParamLimits

0x53ec,	// (0x00043de5) bg_popup_call3_in_pane

0x5454,	// (0x00043e4d) popup_call3_audio_in_window_g1_ParamLimits

0x5454,	// (0x00043e4d) popup_call3_audio_in_window_g1

0x546c,	// (0x00043e65) popup_call3_audio_in_window_g2_ParamLimits

0x546c,	// (0x00043e65) popup_call3_audio_in_window_g2

0x5484,	// (0x00043e7d) popup_call3_audio_in_window_g3_ParamLimits

0x5484,	// (0x00043e7d) popup_call3_audio_in_window_g3

0x0003,

0xf5f7,	// (0x0004dff0) popup_call3_audio_in_window_g_ParamLimits

0xf5f7,	// (0x0004dff0) popup_call3_audio_in_window_g

0x54ac,	// (0x00043ea5) popup_call3_audio_in_window_t1_ParamLimits

0x54ac,	// (0x00043ea5) popup_call3_audio_in_window_t1

0x54d4,	// (0x00043ecd) popup_call3_audio_in_window_t2_ParamLimits

0x54d4,	// (0x00043ecd) popup_call3_audio_in_window_t2

0x54fc,	// (0x00043ef5) popup_call3_audio_in_window_t3_ParamLimits

0x54fc,	// (0x00043ef5) popup_call3_audio_in_window_t3

0x0002,

0xf600,	// (0x0004dff9) popup_call3_audio_in_window_t_ParamLimits

0xf600,	// (0x0004dff9) popup_call3_audio_in_window_t

0xab68,	// (0x00049561) bg_popup_call3_rect_pane

0xc7fa,	// (0x0004b1f3) bg_popup_call3_rect_pane_g1

0xaa8a,	// (0x00049483) bg_popup_call3_rect_pane_g2

0xc802,	// (0x0004b1fb) bg_popup_call3_rect_pane_g3

0xc80a,	// (0x0004b203) bg_popup_call3_rect_pane_g4

0xc812,	// (0x0004b20b) bg_popup_call3_rect_pane_g5

0xc81a,	// (0x0004b213) bg_popup_call3_rect_pane_g6

0xc822,	// (0x0004b21b) bg_popup_call3_rect_pane_g7

0x4704,	// (0x000430fd) mup_visualizer_osc_pane

0xb677,	// (0x0004a070) mup_visualizer_spec_pane

0x540c,	// (0x00043e05) call3_video_qcif_pane_ParamLimits

0x540c,	// (0x00043e05) call3_video_qcif_pane

0x541e,	// (0x00043e17) call3_video_qcif_uncrop_pane_ParamLimits

0x541e,	// (0x00043e17) call3_video_qcif_uncrop_pane

0x542e,	// (0x00043e27) call3_video_subqcif_pane_ParamLimits

0x542e,	// (0x00043e27) call3_video_subqcif_pane

0x5442,	// (0x00043e3b) call3_video_subqcif_uncrop_pane_ParamLimits

0x5442,	// (0x00043e3b) call3_video_subqcif_uncrop_pane

0x549c,	// (0x00043e95) popup_call3_audio_in_window_g4_ParamLimits

0x549c,	// (0x00043e95) popup_call3_audio_in_window_g4

0x53b9,	// (0x00043db2) mup_spec_half_pane

0x53c2,	// (0x00043dbb) mup_spec_half_pane_cp

0xca76,	// (0x0004b46f) mup_osc_middle_pane

0xca7f,	// (0x0004b478) mup_visualizer_osc_pane_g1

0x5399,	// (0x00043d92) mup_spec_bar_pane_ParamLimits

0x5399,	// (0x00043d92) mup_spec_bar_pane

0xca63,	// (0x0004b45c) mup_spec_bar_pane_g1

0xca6d,	// (0x0004b466) mup_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0004dfe4) mup_spec_bar_pane_g

0x261d,	// (0x00041016) aid_cale_week_size_cell_pane_ParamLimits

0x2637,	// (0x00041030) bg_cale_heading_pane_ParamLimits

0x2660,	// (0x00041059) bg_cale_pane_cp01_ParamLimits

0x2682,	// (0x0004107b) cale_week_corner_pane_ParamLimits

0x26a1,	// (0x0004109a) cale_week_day_heading_pane_ParamLimits

0x26cf,	// (0x000410c8) cale_week_scroll_pane_g1_ParamLimits

0x26f3,	// (0x000410ec) cale_week_scroll_pane_g2_ParamLimits

0x270b,	// (0x00041104) cale_week_scroll_pane_g3_ParamLimits

0x2723,	// (0x0004111c) cale_week_scroll_pane_g4_ParamLimits

0x273b,	// (0x00041134) cale_week_scroll_pane_g5_ParamLimits

0x2753,	// (0x0004114c) cale_week_scroll_pane_g6_ParamLimits

0x2773,	// (0x0004116c) cale_week_scroll_pane_g7_ParamLimits

0x2793,	// (0x0004118c) cale_week_scroll_pane_g8_ParamLimits

0x27b3,	// (0x000411ac) cale_week_scroll_pane_g9_ParamLimits

0x27d0,	// (0x000411c9) cale_week_scroll_pane_g10_ParamLimits

0x27ed,	// (0x000411e6) cale_week_scroll_pane_g11_ParamLimits

0x280c,	// (0x00041205) cale_week_scroll_pane_g12_ParamLimits

0x2831,	// (0x0004122a) cale_week_scroll_pane_g13_ParamLimits

0x285a,	// (0x00041253) cale_week_scroll_pane_g14_ParamLimits

0x2883,	// (0x0004127c) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0004db8e) cale_week_scroll_pane_g_ParamLimits

0x28cc,	// (0x000412c5) cale_week_time_pane_ParamLimits

0x28ec,	// (0x000412e5) grid_cale_week_pane_ParamLimits

0xaac7,	// (0x000494c0) listscroll_cale_week_pane_t1

0xaad9,	// (0x000494d2) scroll_pane_cp08_ParamLimits

0x3549,	// (0x00041f42) cale_month_corner_pane_ParamLimits

0xae9e,	// (0x00049897) cale_month_pane_t1

0x3a0b,	// (0x00042404) cale_month_week_pane_ParamLimits

0xb422,	// (0x00049e1b) popup_call_status_window_g1_ParamLimits

0x417d,	// (0x00042b76) popup_call_status_window_g2_ParamLimits

0x4189,	// (0x00042b82) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0004dd34) popup_call_status_window_g_ParamLimits

0xb243,	// (0x00049c3c) aid_call2_pane

0x0c93,	// (0x0003f68c) msg_header_pane_g1

0x4af6,	// (0x000434ef) postcard_address2_pane_ParamLimits

0x4af6,	// (0x000434ef) postcard_address2_pane

0x4b04,	// (0x000434fd) postcard_message2_pane_ParamLimits

0x4b04,	// (0x000434fd) postcard_message2_pane

0x5353,	// (0x00043d4c) message2_row_pane_ParamLimits

0x5353,	// (0x00043d4c) message2_row_pane

0xca1e,	// (0x0004b417) address2_row_pane_ParamLimits

0xca1e,	// (0x0004b417) address2_row_pane

0xca31,	// (0x0004b42a) postcard_message2_row_pane_g1

0xca39,	// (0x0004b432) postcard_message2_row_pane_t1

0xca31,	// (0x0004b42a) address2_row_pane_g1

0xca39,	// (0x0004b432) address2_row_pane_t1

0x2c7a,	// (0x00041673) aid_size_cell_vorec

0xa689,	// (0x00049082) main_rss_pane

0x536d,	// (0x00043d66) rss_list_single_pane_ParamLimits

0x536d,	// (0x00043d66) rss_list_single_pane

0xca47,	// (0x0004b440) rss_list_single_pane_t1

0xca55,	// (0x0004b44e) rss_list_single_pane_t2

0x0001,

0xf5e6,	// (0x0004dfdf) rss_list_single_pane_t

0xa689,	// (0x00049082) main_camera2_pane

0xa689,	// (0x00049082) main_video2_pane

0x5581,	// (0x00043f7a) cams_zoom_pane_cp2_ParamLimits

0x5581,	// (0x00043f7a) cams_zoom_pane_cp2

0x558d,	// (0x00043f86) image2_vga_pane_ParamLimits

0x558d,	// (0x00043f86) image2_vga_pane

0x559c,	// (0x00043f95) main_camera2_pane_g1_ParamLimits

0x559c,	// (0x00043f95) main_camera2_pane_g1

0x55a8,	// (0x00043fa1) main_camera2_pane_g2_ParamLimits

0x55a8,	// (0x00043fa1) main_camera2_pane_g2

0x55b4,	// (0x00043fad) main_camera2_pane_g3_ParamLimits

0x55b4,	// (0x00043fad) main_camera2_pane_g3

0x55c0,	// (0x00043fb9) main_camera2_pane_g4_ParamLimits

0x55c0,	// (0x00043fb9) main_camera2_pane_g4

0x55cc,	// (0x00043fc5) main_camera2_pane_g5_ParamLimits

0x55cc,	// (0x00043fc5) main_camera2_pane_g5

0x55d8,	// (0x00043fd1) main_camera2_pane_g6_ParamLimits

0x55d8,	// (0x00043fd1) main_camera2_pane_g6

0x55e4,	// (0x00043fdd) main_camera2_pane_g7_ParamLimits

0x55e4,	// (0x00043fdd) main_camera2_pane_g7

0x55f0,	// (0x00043fe9) main_camera2_pane_g8_ParamLimits

0x55f0,	// (0x00043fe9) main_camera2_pane_g8

0x0008,

0xf607,	// (0x0004e000) main_camera2_pane_g_ParamLimits

0xf607,	// (0x0004e000) main_camera2_pane_g

0x5608,	// (0x00044001) main_camera2_pane_t1_ParamLimits

0x5608,	// (0x00044001) main_camera2_pane_t1

0x561a,	// (0x00044013) main_camera2_pane_t2_ParamLimits

0x561a,	// (0x00044013) main_camera2_pane_t2

0x562c,	// (0x00044025) main_camera2_pane_t3_ParamLimits

0x562c,	// (0x00044025) main_camera2_pane_t3

0x563e,	// (0x00044037) main_camera2_pane_t4_ParamLimits

0x563e,	// (0x00044037) main_camera2_pane_t4

0x0006,

0xf61a,	// (0x0004e013) main_camera2_pane_t_ParamLimits

0xf61a,	// (0x0004e013) main_camera2_pane_t

0x569b,	// (0x00044094) cams_zoom_pane_cp4_ParamLimits

0x569b,	// (0x00044094) cams_zoom_pane_cp4

0x56ab,	// (0x000440a4) image2_cif_pane_ParamLimits

0x56ab,	// (0x000440a4) image2_cif_pane

0x56c0,	// (0x000440b9) image2_subqcif_pane_ParamLimits

0x56c0,	// (0x000440b9) image2_subqcif_pane

0x56cf,	// (0x000440c8) main_video2_pane_g1_ParamLimits

0x56cf,	// (0x000440c8) main_video2_pane_g1

0x56e1,	// (0x000440da) main_video2_pane_g2_ParamLimits

0x56e1,	// (0x000440da) main_video2_pane_g2

0x56f1,	// (0x000440ea) main_video2_pane_g3_ParamLimits

0x56f1,	// (0x000440ea) main_video2_pane_g3

0x5701,	// (0x000440fa) main_video2_pane_g4_ParamLimits

0x5701,	// (0x000440fa) main_video2_pane_g4

0x5711,	// (0x0004410a) main_video2_pane_g5_ParamLimits

0x5711,	// (0x0004410a) main_video2_pane_g5

0x5721,	// (0x0004411a) main_video2_pane_g6_ParamLimits

0x5721,	// (0x0004411a) main_video2_pane_g6

0x0005,

0xf629,	// (0x0004e022) main_video2_pane_g_ParamLimits

0xf629,	// (0x0004e022) main_video2_pane_g

0x5733,	// (0x0004412c) main_video2_pane_t1_ParamLimits

0x5733,	// (0x0004412c) main_video2_pane_t1

0x574d,	// (0x00044146) main_video2_pane_t2_ParamLimits

0x574d,	// (0x00044146) main_video2_pane_t2

0x5773,	// (0x0004416c) main_video2_pane_t3_ParamLimits

0x5773,	// (0x0004416c) main_video2_pane_t3

0x0002,

0xf636,	// (0x0004e02f) main_video2_pane_t_ParamLimits

0xf636,	// (0x0004e02f) main_video2_pane_t

0x5055,	// (0x00043a4e) call_muted_g2

0x0001,

0xf5d8,	// (0x0004dfd1) call_muted_g

0xa689,	// (0x00049082) main_mup2_pane

0xcacd,	// (0x0004b4c6) main_mup2_pane_g1_ParamLimits

0xcacd,	// (0x0004b4c6) main_mup2_pane_g1

0x5799,	// (0x00044192) main_mup2_pane_g2_ParamLimits

0x5799,	// (0x00044192) main_mup2_pane_g2

0x5a2b,	// (0x00044424) main_mup_pane_g13_cp1

0x5a33,	// (0x0004442c) mup_volume_pane_cp1

0x57bb,	// (0x000441b4) main_mup2_pane_g4_ParamLimits

0x57bb,	// (0x000441b4) main_mup2_pane_g4

0x57d0,	// (0x000441c9) main_mup2_pane_g5_ParamLimits

0x57d0,	// (0x000441c9) main_mup2_pane_g5

0x57e5,	// (0x000441de) main_mup2_pane_g6_ParamLimits

0x57e5,	// (0x000441de) main_mup2_pane_g6

0x57fa,	// (0x000441f3) main_mup2_pane_g7_ParamLimits

0x57fa,	// (0x000441f3) main_mup2_pane_g7

0x0006,

0xf63d,	// (0x0004e036) main_mup2_pane_g_ParamLimits

0xf63d,	// (0x0004e036) main_mup2_pane_g

0x5816,	// (0x0004420f) main_mup2_pane_t1_ParamLimits

0x5816,	// (0x0004420f) main_mup2_pane_t1

0x582d,	// (0x00044226) main_mup2_pane_t2_ParamLimits

0x582d,	// (0x00044226) main_mup2_pane_t2

0x5844,	// (0x0004423d) main_mup2_pane_t3_ParamLimits

0x5844,	// (0x0004423d) main_mup2_pane_t3

0x585b,	// (0x00044254) main_mup2_pane_t4_ParamLimits

0x585b,	// (0x00044254) main_mup2_pane_t4

0x5875,	// (0x0004426e) main_mup2_pane_t5_ParamLimits

0x5875,	// (0x0004426e) main_mup2_pane_t5

0x588f,	// (0x00044288) main_mup2_pane_t6_ParamLimits

0x588f,	// (0x00044288) main_mup2_pane_t6

0x0005,

0xf64c,	// (0x0004e045) main_mup2_pane_t_ParamLimits

0xf64c,	// (0x0004e045) main_mup2_pane_t

0x58c7,	// (0x000442c0) mup2_visualizer_pane_ParamLimits

0x58c7,	// (0x000442c0) mup2_visualizer_pane

0x58fd,	// (0x000442f6) mup_progress_pane_cp_ParamLimits

0x58fd,	// (0x000442f6) mup_progress_pane_cp

0x5a16,	// (0x0004440f) mup_volume_pane_cp_ParamLimits

0x5a16,	// (0x0004440f) mup_volume_pane_cp

0x5916,	// (0x0004430f) mup2_visualizer_pane_g1_ParamLimits

0x5916,	// (0x0004430f) mup2_visualizer_pane_g1

0xcad9,	// (0x0004b4d2) mup2_visualizer_pane_g2_ParamLimits

0xcad9,	// (0x0004b4d2) mup2_visualizer_pane_g2

0x592b,	// (0x00044324) mup2_visualizer_pane_g3_ParamLimits

0x592b,	// (0x00044324) mup2_visualizer_pane_g3

0x0002,

0xf659,	// (0x0004e052) mup2_visualizer_pane_g_ParamLimits

0xf659,	// (0x0004e052) mup2_visualizer_pane_g

0xb8b2,	// (0x0004a2ab) aid_size_cell_fmradio

0x516b,	// (0x00043b64) aid_height_parent_landcape

0xacfc,	// (0x000496f5) wml_content_pane_cp

0xad04,	// (0x000496fd) wml_tabs_pane

0xad0d,	// (0x00049706) popup_wml_miniature_window

0xad15,	// (0x0004970e) scroll_pane_cp021

0xad29,	// (0x00049722) wml_content_pane_comp8

0xa689,	// (0x00049082) bg_popup_sub_pane_cp05

0xcaf7,	// (0x0004b4f0) popup_wml_miniature_window_g1

0xcaff,	// (0x0004b4f8) wml_miniature_view_pane

0x5939,	// (0x00044332) aid_size_wml_view

0x5941,	// (0x0004433a) wml_miniature_view_pane_g1

0x594a,	// (0x00044343) wml_miniature_view_pane_g2

0x5953,	// (0x0004434c) wml_miniature_view_pane_g3

0x595b,	// (0x00044354) wml_miniature_view_pane_g4

0x5963,	// (0x0004435c) wml_miniature_view_pane_g5

0x596b,	// (0x00044364) wml_miniature_view_pane_g6

0x5973,	// (0x0004436c) wml_miniature_view_pane_g7

0x597b,	// (0x00044374) wml_miniature_view_pane_g8

0x0007,

0xf660,	// (0x0004e059) wml_miniature_view_pane_g

0xcacd,	// (0x0004b4c6) background_graphic_ParamLimits

0xcacd,	// (0x0004b4c6) background_graphic

0xcb07,	// (0x0004b500) wml_tabs_2_pane

0xcb10,	// (0x0004b509) wml_tabs_3_pane_ParamLimits

0xcb10,	// (0x0004b509) wml_tabs_3_pane

0xcb22,	// (0x0004b51b) wml_tabs_4_pane_ParamLimits

0xcb22,	// (0x0004b51b) wml_tabs_4_pane

0xcb38,	// (0x0004b531) wml_tabs_5_pane_ParamLimits

0xcb38,	// (0x0004b531) wml_tabs_5_pane

0xcb52,	// (0x0004b54b) wml_tabs_pane_g2_ParamLimits

0xcb52,	// (0x0004b54b) wml_tabs_pane_g2

0xcb66,	// (0x0004b55f) wml_tabs_pane_g3_ParamLimits

0xcb66,	// (0x0004b55f) wml_tabs_pane_g3

0x5983,	// (0x0004437c) wml_tabs_2_active_pane_ParamLimits

0x5983,	// (0x0004437c) wml_tabs_2_active_pane

0x5995,	// (0x0004438e) wml_tabs_2_passive_pane_ParamLimits

0x5995,	// (0x0004438e) wml_tabs_2_passive_pane

0x59a7,	// (0x000443a0) wml_tabs_3_active_pane_cp_ParamLimits

0x59a7,	// (0x000443a0) wml_tabs_3_active_pane_cp

0x59ba,	// (0x000443b3) wml_tabs_3_passive_pane_ParamLimits

0x59ba,	// (0x000443b3) wml_tabs_3_passive_pane

0x59cb,	// (0x000443c4) wml_tabs_3_passive_pane_cp_ParamLimits

0x59cb,	// (0x000443c4) wml_tabs_3_passive_pane_cp

0x59e0,	// (0x000443d9) tabs_4_active_pane

0x59e8,	// (0x000443e1) tabs_4_passive_pane

0x59f0,	// (0x000443e9) tabs_4_passive_pane_cp

0x59f8,	// (0x000443f1) tabs_4_passive_pane_cp2

0x4f30,	// (0x00043929) aid_height_text

0x46cd,	// (0x000430c6) mup_volume_cont_pane_ParamLimits

0x46cd,	// (0x000430c6) mup_volume_cont_pane

0x2183,	// (0x00040b7c) aid_size_cell_pinb

0x218d,	// (0x00040b86) aid_size_list_pinb

0x58e6,	// (0x000442df) mup2_volume_cont_pane_ParamLimits

0x58e6,	// (0x000442df) mup2_volume_cont_pane

0x5a02,	// (0x000443fb) mup2_volume_cont_pane_g1_ParamLimits

0x5a02,	// (0x000443fb) mup2_volume_cont_pane_g1

0x1df1,	// (0x000407ea) aid_size_cell_touch_ParamLimits

0x1df1,	// (0x000407ea) aid_size_cell_touch

0x20a2,	// (0x00040a9b) touch_pane_ParamLimits

0x20a2,	// (0x00040a9b) touch_pane

0xa237,	// (0x00048c30) main_rss2_pane

0xcb83,	// (0x0004b57c) listscroll_rss2_pane

0xcb8c,	// (0x0004b585) rss2_navigation_pane

0xcb94,	// (0x0004b58d) list_rss2_pane

0xb367,	// (0x00049d60) scroll_pane_cp22

0xcb9c,	// (0x0004b595) rss2_navigation_pane_g1

0xcba5,	// (0x0004b59e) rss2_navigation_pane_g2

0xcbad,	// (0x0004b5a6) rss2_navigation_pane_g3

0x0002,

0xf671,	// (0x0004e06a) rss2_navigation_pane_g

0xcbb5,	// (0x0004b5ae) rss2_navigation_pane_t1

0x5a3b,	// (0x00044434) rss2_list_single_pane_ParamLimits

0x5a3b,	// (0x00044434) rss2_list_single_pane

0xcbc3,	// (0x0004b5bc) rss2_list_single_pane_t2

0xcbd1,	// (0x0004b5ca) rss2_list_single_pane_t3_ParamLimits

0xcbd1,	// (0x0004b5ca) rss2_list_single_pane_t3

0xcbee,	// (0x0004b5e7) rss2_list_single_pane_t4

0x4019,	// (0x00042a12) smil_status_pane_g1

0xbcb3,	// (0x0004a6ac) main_image2_pane_ParamLimits

0xbcb3,	// (0x0004a6ac) main_image2_pane

0x55fc,	// (0x00043ff5) main_camera2_pane_g9_ParamLimits

0x55fc,	// (0x00043ff5) main_camera2_pane_g9

0x5650,	// (0x00044049) main_camera2_pane_t5_ParamLimits

0x5650,	// (0x00044049) main_camera2_pane_t5

0x5662,	// (0x0004405b) main_camera2_pane_t6_ParamLimits

0x5662,	// (0x0004405b) main_camera2_pane_t6

0x5a5e,	// (0x00044457) main_image2_pane_g1_ParamLimits

0x5a5e,	// (0x00044457) main_image2_pane_g1

0x4ccd,	// (0x000436c6) smil2_video_pane_ParamLimits

0x4ccd,	// (0x000436c6) smil2_video_pane

0x0a63,	// (0x0003f45c) aid_zoom_text_primary_cp

0x204b,	// (0x00040a44) popup_preview_fixed_window

0xac65,	// (0x0004965e) im_reading_pane_g1

0x5546,	// (0x00043f3f) cams2_bc_adjust_pane_cp_ParamLimits

0x5546,	// (0x00043f3f) cams2_bc_adjust_pane_cp

0x568d,	// (0x00044086) cams2_bc_adjust_pane_ParamLimits

0x568d,	// (0x00044086) cams2_bc_adjust_pane

0x5a6a,	// (0x00044463) cams2_bc_adjust_pane_g1

0x5a72,	// (0x0004446b) cams2_slider_pane

0x5a7b,	// (0x00044474) cams2_slider_pane_g1

0x5a84,	// (0x0004447d) cams2_slider_pane_g2

0x0006,

0xf678,	// (0x0004e071) cams2_slider_pane_g

0x2288,	// (0x00040c81) calc_display_pane_ParamLimits

0x22a6,	// (0x00040c9f) calc_paper_pane_ParamLimits

0x22c2,	// (0x00040cbb) grid_calc_pane_ParamLimits

0x41e7,	// (0x00042be0) popup_clock_digital_window_t1_ParamLimits

0xb84f,	// (0x0004a248) main_image_pane_t1

0x226e,	// (0x00040c67) aid_size_cell_calc_ParamLimits

0x226e,	// (0x00040c67) aid_size_cell_calc

0x51a5,	// (0x00043b9e) popup_blid_sat_info2_window_ParamLimits

0x51a5,	// (0x00043b9e) popup_blid_sat_info2_window

0xcc04,	// (0x0004b5fd) aid_size_cell_blid

0xcc0c,	// (0x0004b605) bg_popup_window_pane_cp07

0xcc2f,	// (0x0004b628) grid_popup_blid_pane

0xcc39,	// (0x0004b632) heading_pane_cp05_ParamLimits

0xcc39,	// (0x0004b632) heading_pane_cp05

0xcd03,	// (0x0004b6fc) cell_popup_blid_pane_ParamLimits

0xcd03,	// (0x0004b6fc) cell_popup_blid_pane

0xcd2d,	// (0x0004b726) cell_popup_blid_pane_g1

0xcd35,	// (0x0004b72e) cell_popup_blid_pane_t1

0x58ac,	// (0x000442a5) mup2_indicator_pane_ParamLimits

0x58ac,	// (0x000442a5) mup2_indicator_pane

0xab68,	// (0x00049561) mup2_visualizer_osc_pane

0xcae5,	// (0x0004b4de) mup2_visualizer_spec_pane_ParamLimits

0xcae5,	// (0x0004b4de) mup2_visualizer_spec_pane

0x5a9e,	// (0x00044497) mup2_spec_half_pane

0x5aa7,	// (0x000444a0) mup2_spec_half_pane_cp

0x5ab1,	// (0x000444aa) mup2_spec_bar_pane_ParamLimits

0x5ab1,	// (0x000444aa) mup2_spec_bar_pane

0xca63,	// (0x0004b45c) mup2_spec_bar_pane_g1

0xca6d,	// (0x0004b466) mup2_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0004dfe4) mup2_spec_bar_pane_g

0x5ad0,	// (0x000444c9) mup2_osc_middle_pane

0xca7f,	// (0x0004b478) mup2_visualizer_osc_pane_g1

0xa261,	// (0x00048c5a) popup_number_entry_window_t1_ParamLimits

0xa274,	// (0x00048c6d) popup_number_entry_window_t2_ParamLimits

0xa286,	// (0x00048c7f) popup_number_entry_window_t3_ParamLimits

0xa298,	// (0x00048c91) popup_number_entry_window_t5_ParamLimits

0xa298,	// (0x00048c91) popup_number_entry_window_t5

0xf0af,	// (0x0004daa8) popup_number_entry_window_t_ParamLimits

0xa2cd,	// (0x00048cc6) text_title_cp2_ParamLimits

0x49ba,	// (0x000433b3) aid_hotspot_pointer_text2_pane

0x4a54,	// (0x0004344d) main_viewer_pane_g9_ParamLimits

0x4a54,	// (0x0004344d) main_viewer_pane_g9

0xae9e,	// (0x00049897) cale_month_pane_t1_ParamLimits

0xaedb,	// (0x000498d4) bg_cale_pane_ParamLimits

0xaef3,	// (0x000498ec) list_cale_pane_ParamLimits

0xaf04,	// (0x000498fd) listscroll_cale_day_pane_t1

0xaf16,	// (0x0004990f) scroll_pane_cp09_ParamLimits

0x470c,	// (0x00043105) main_mup_eq_pane_t1_ParamLimits

0x470c,	// (0x00043105) main_mup_eq_pane_t1

0x4728,	// (0x00043121) main_mup_eq_pane_t2_ParamLimits

0x4728,	// (0x00043121) main_mup_eq_pane_t2

0x4744,	// (0x0004313d) main_mup_eq_pane_t3_ParamLimits

0x4744,	// (0x0004313d) main_mup_eq_pane_t3

0x475e,	// (0x00043157) main_mup_eq_pane_t4_ParamLimits

0x475e,	// (0x00043157) main_mup_eq_pane_t4

0x4778,	// (0x00043171) main_mup_eq_pane_t5_ParamLimits

0x4778,	// (0x00043171) main_mup_eq_pane_t5

0x4792,	// (0x0004318b) main_mup_eq_pane_t6_ParamLimits

0x4792,	// (0x0004318b) main_mup_eq_pane_t6

0x47a8,	// (0x000431a1) main_mup_eq_pane_t7_ParamLimits

0x47a8,	// (0x000431a1) main_mup_eq_pane_t7

0x47be,	// (0x000431b7) main_mup_eq_pane_t8_ParamLimits

0x47be,	// (0x000431b7) main_mup_eq_pane_t8

0x47d4,	// (0x000431cd) main_mup_eq_pane_t9_ParamLimits

0x47d4,	// (0x000431cd) main_mup_eq_pane_t9

0x47f0,	// (0x000431e9) main_mup_eq_pane_t10_ParamLimits

0x47f0,	// (0x000431e9) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0004de33) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0004de33) main_mup_eq_pane_t

0x48b5,	// (0x000432ae) mup_equalizer_pane_cp5_ParamLimits

0x48cd,	// (0x000432c6) mup_equalizer_pane_cp6_ParamLimits

0x48e5,	// (0x000432de) mup_equalizer_pane_cp7_ParamLimits

0xa237,	// (0x00048c30) main_gallery_pane

0xca88,	// (0x0004b481) smil2_volume_pane

0xca90,	// (0x0004b489) smil_status_volume_pane_g1_ParamLimits

0xcaa3,	// (0x0004b49c) smil_status_volume_pane_g2_ParamLimits

0x53ca,	// (0x00043dc3) smil_status_volume_pane_g3_ParamLimits

0xf5f0,	// (0x0004dfe9) smil_status_volume_pane_g_ParamLimits

0xcc0c,	// (0x0004b605) bg_popup_window_pane_cp07_ParamLimits

0xcc1a,	// (0x0004b613) blid_firmament_pane

0x5ad9,	// (0x000444d2) aid_size_cell_gallery_ParamLimits

0x5ad9,	// (0x000444d2) aid_size_cell_gallery

0x5ae7,	// (0x000444e0) grid_gallery_pane_ParamLimits

0x5ae7,	// (0x000444e0) grid_gallery_pane

0x5af7,	// (0x000444f0) cell_gallery_pane_ParamLimits

0x5af7,	// (0x000444f0) cell_gallery_pane

0xcd43,	// (0x0004b73c) bg_cell_gallery_focus_pane_ParamLimits

0xcd43,	// (0x0004b73c) bg_cell_gallery_focus_pane

0xcd55,	// (0x0004b74e) cell_gallery_pane_g1_ParamLimits

0xcd55,	// (0x0004b74e) cell_gallery_pane_g1

0x5b42,	// (0x0004453b) cell_gallery_pane_g2_ParamLimits

0x5b42,	// (0x0004453b) cell_gallery_pane_g2

0x5b4f,	// (0x00044548) cell_gallery_pane_g3_ParamLimits

0x5b4f,	// (0x00044548) cell_gallery_pane_g3

0xcd61,	// (0x0004b75a) cell_gallery_pane_g4_ParamLimits

0xcd61,	// (0x0004b75a) cell_gallery_pane_g4

0x0003,

0xf69e,	// (0x0004e097) cell_gallery_pane_g_ParamLimits

0xf69e,	// (0x0004e097) cell_gallery_pane_g

0xcd6d,	// (0x0004b766) bg_cell_gallery_focus_pane_g1

0xcd75,	// (0x0004b76e) bg_cell_gallery_focus_pane_g2

0xcd7d,	// (0x0004b776) bg_cell_gallery_focus_pane_g3

0xcd85,	// (0x0004b77e) bg_cell_gallery_focus_pane_g4

0xcd8d,	// (0x0004b786) bg_cell_gallery_focus_pane_g5

0xcd95,	// (0x0004b78e) bg_cell_gallery_focus_pane_g6

0xcd9d,	// (0x0004b796) bg_cell_gallery_focus_pane_g7

0xcda5,	// (0x0004b79e) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6a7,	// (0x0004e0a0) bg_cell_gallery_focus_pane_g

0xcdad,	// (0x0004b7a6) aid_firma_cardinal

0xcdc1,	// (0x0004b7ba) blid_firmament_pane_t1

0xcdd8,	// (0x0004b7d1) blid_firmament_pane_t2

0xcdef,	// (0x0004b7e8) blid_firmament_pane_t3

0xce06,	// (0x0004b7ff) blid_firmament_pane_t4

0x0003,

0xf6b8,	// (0x0004e0b1) blid_firmament_pane_t

0xce31,	// (0x0004b82a) blid_sat_info_pane

0xce41,	// (0x0004b83a) blid_sat_info_pane_g1

0xce41,	// (0x0004b83a) blid_sat_info_pane_g2

0x0001,

0xf6c1,	// (0x0004e0ba) blid_sat_info_pane_g

0xce4b,	// (0x0004b844) blid_sat_info_pane_t1

0xce59,	// (0x0004b852) smil2_volume_content_pane

0xce62,	// (0x0004b85b) smil2_volume_pane_g1

0xab04,	// (0x000494fd) smil2_volume_content_pane_g1

0xce6a,	// (0x0004b863) smil2_volume_content_pane_g2

0xce73,	// (0x0004b86c) smil2_volume_content_pane_g3

0xce7c,	// (0x0004b875) smil2_volume_content_pane_g4

0xce85,	// (0x0004b87e) smil2_volume_content_pane_g5

0xce8e,	// (0x0004b887) smil2_volume_content_pane_g6

0xce97,	// (0x0004b890) smil2_volume_content_pane_g7

0xcea0,	// (0x0004b899) smil2_volume_content_pane_g8

0xcea9,	// (0x0004b8a2) smil2_volume_content_pane_g9

0xceb2,	// (0x0004b8ab) smil2_volume_content_pane_g10

0x0009,

0xf6c6,	// (0x0004e0bf) smil2_volume_content_pane_g

0x29ad,	// (0x000413a6) cale_week_day_heading_pane_t1_ParamLimits

0x29d5,	// (0x000413ce) cale_week_day_heading_pane_t2_ParamLimits

0x2a02,	// (0x000413fb) cale_week_day_heading_pane_t3_ParamLimits

0x2a2f,	// (0x00041428) cale_week_day_heading_pane_t4_ParamLimits

0x2a5c,	// (0x00041455) cale_week_day_heading_pane_t5_ParamLimits

0x2a89,	// (0x00041482) cale_week_day_heading_pane_t6_ParamLimits

0x2ab6,	// (0x000414af) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0004dbaf) cale_week_day_heading_pane_t_ParamLimits

0xaaf6,	// (0x000494ef) bg_cale_side_pane_ParamLimits

0x2ade,	// (0x000414d7) cale_week_time_pane_t1_ParamLimits

0x2b02,	// (0x000414fb) cale_week_time_pane_t2_ParamLimits

0x2b26,	// (0x0004151f) cale_week_time_pane_t3_ParamLimits

0x2b4a,	// (0x00041543) cale_week_time_pane_t4_ParamLimits

0x2b6e,	// (0x00041567) cale_week_time_pane_t5_ParamLimits

0x2b94,	// (0x0004158d) cale_week_time_pane_t6_ParamLimits

0x2bbc,	// (0x000415b5) cale_week_time_pane_t7_ParamLimits

0x2be8,	// (0x000415e1) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0004dbbe) cale_week_time_pane_t_ParamLimits

0x2c18,	// (0x00041611) cell_cale_week_pane_g2_ParamLimits

0xaaf6,	// (0x000494ef) bg_cale_side_pane_cp01_ParamLimits

0x3e04,	// (0x000427fd) cale_month_week_pane_t1_ParamLimits

0x3e1d,	// (0x00042816) cale_month_week_pane_t2_ParamLimits

0x3e36,	// (0x0004282f) cale_month_week_pane_t3_ParamLimits

0x3e4f,	// (0x00042848) cale_month_week_pane_t4_ParamLimits

0x3e68,	// (0x00042861) cale_month_week_pane_t5_ParamLimits

0x3e85,	// (0x0004287e) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0004dc93) cale_month_week_pane_t_ParamLimits

0x3fd6,	// (0x000429cf) cell_cale_month_pane_g1_ParamLimits

0xa237,	// (0x00048c30) main_cale_event_viewer_pane

0xa237,	// (0x00048c30) listscroll_cale_event_viewer_pane

0xcebb,	// (0x0004b8b4) list_cale_ev_pane

0xcec3,	// (0x0004b8bc) scroll_pane_cp023

0x5b5c,	// (0x00044555) field_cale_ev_pane_ParamLimits

0x5b5c,	// (0x00044555) field_cale_ev_pane

0xcecf,	// (0x0004b8c8) field_cale_ev_content_pane_ParamLimits

0xcecf,	// (0x0004b8c8) field_cale_ev_content_pane

0xcedb,	// (0x0004b8d4) field_cale_ev_pane_g1_ParamLimits

0xcedb,	// (0x0004b8d4) field_cale_ev_pane_g1

0xcee7,	// (0x0004b8e0) field_cale_ev_pane_g2_ParamLimits

0xcee7,	// (0x0004b8e0) field_cale_ev_pane_g2

0xceff,	// (0x0004b8f8) field_cale_ev_pane_g3_ParamLimits

0xceff,	// (0x0004b8f8) field_cale_ev_pane_g3

0x0002,

0xf6db,	// (0x0004e0d4) field_cale_ev_pane_g_ParamLimits

0xf6db,	// (0x0004e0d4) field_cale_ev_pane_g

0xcf17,	// (0x0004b910) field_cale_ev_pane_t1_ParamLimits

0xcf17,	// (0x0004b910) field_cale_ev_pane_t1

0x5b80,	// (0x00044579) field_cale_ev_content_pane_t1_ParamLimits

0x5b80,	// (0x00044579) field_cale_ev_content_pane_t1

0xb723,	// (0x0004a11c) bg_button_pane_cp01

0x260b,	// (0x00041004) listscroll_cale_week_pane_ParamLimits

0xaabe,	// (0x000494b7) popup_toolbar_window_cp01

0xaac7,	// (0x000494c0) listscroll_cale_week_pane_t1_ParamLimits

0x260b,	// (0x00041004) listscroll_cale_day_pane_ParamLimits

0xaabe,	// (0x000494b7) popup_toolbar_window_cp02

0xaf04,	// (0x000498fd) listscroll_cale_day_pane_t1_ParamLimits

0x260b,	// (0x00041004) main_cale_month_pane_ParamLimits

0x52c4,	// (0x00043cbd) popup_toolbar_window_cp03_ParamLimits

0x52c4,	// (0x00043cbd) popup_toolbar_window_cp03

0x4bdd,	// (0x000435d6) main_image_pane_g2_ParamLimits

0x4bdd,	// (0x000435d6) main_image_pane_g2

0x4be9,	// (0x000435e2) main_image_pane_g3_ParamLimits

0x4be9,	// (0x000435e2) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0004dec5) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0004dec5) main_image_pane_g

0xb84f,	// (0x0004a248) main_image_pane_t1_ParamLimits

0x4bf5,	// (0x000435ee) main_image_pane_t2_ParamLimits

0x4bf5,	// (0x000435ee) main_image_pane_t2

0x4c07,	// (0x00043600) main_image_pane_t3_ParamLimits

0x4c07,	// (0x00043600) main_image_pane_t3

0x4c19,	// (0x00043612) main_image_pane_t4_ParamLimits

0x4c19,	// (0x00043612) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0004decc) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0004decc) main_image_pane_t

0x4c2b,	// (0x00043624) popup_image_details_window_cp01

0x4c35,	// (0x0004362e) popup_toobar_trans_pane_cp01_ParamLimits

0x4c35,	// (0x0004362e) popup_toobar_trans_pane_cp01

0x5206,	// (0x00043bff) popup_image_details_window_ParamLimits

0x5206,	// (0x00043bff) popup_image_details_window

0x5214,	// (0x00043c0d) popup_image_focus_window

0x5538,	// (0x00043f31) camera2_autofocus_pane_ParamLimits

0x5538,	// (0x00043f31) camera2_autofocus_pane

0xa237,	// (0x00048c30) bg_popup_sub_pane_cp06

0xcf2e,	// (0x0004b927) popup_image_focus_window_g1

0xcf36,	// (0x0004b92f) popup_image_focus_window_g2

0xcf3e,	// (0x0004b937) popup_image_focus_window_g3

0xcf46,	// (0x0004b93f) popup_image_focus_window_g4

0x0003,

0xf6e2,	// (0x0004e0db) popup_image_focus_window_g

0xcf4e,	// (0x0004b947) popup_image_focus_window_t1

0xcf5c,	// (0x0004b955) popup_image_focus_window_t2

0xcf6c,	// (0x0004b965) popup_image_focus_window_t3

0x0002,

0xf6eb,	// (0x0004e0e4) popup_image_focus_window_t

0xcf7a,	// (0x0004b973) camera2_autofocus_pane_g1

0xbcb3,	// (0x0004a6ac) bg_tb_trans_pane_cp01

0xcf88,	// (0x0004b981) popup_image_details_window_g1

0xcf9b,	// (0x0004b994) popup_image_details_window_g2

0x0002,

0xf6fd,	// (0x0004e0f6) popup_image_details_window_g

0xcfc4,	// (0x0004b9bd) popup_image_details_window_t1

0xcfd6,	// (0x0004b9cf) popup_image_details_window_t2

0xcfef,	// (0x0004b9e8) popup_image_details_window_t3

0xd003,	// (0x0004b9fc) popup_image_details_window_t4

0xd01e,	// (0x0004ba17) popup_image_details_window_t5

0x0004,

0xf704,	// (0x0004e0fd) popup_image_details_window_t

0xa995,	// (0x0004938e) bg_calc_paper_pane_ParamLimits

0xa237,	// (0x00048c30) grid_highlight_pane_cp013

0x23bf,	// (0x00040db8) list_calc_pane_ParamLimits

0x23d1,	// (0x00040dca) scroll_pane_cp024

0xa9a9,	// (0x000493a2) bg_calc_display_pane_ParamLimits

0x23d9,	// (0x00040dd2) calc_display_pane_t1_ParamLimits

0x23ee,	// (0x00040de7) calc_display_pane_t2_ParamLimits

0x2403,	// (0x00040dfc) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0004db2f) calc_display_pane_t_ParamLimits

0x24d3,	// (0x00040ecc) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0004db4c) cell_calc_pane_g

0x24dc,	// (0x00040ed5) cell_calc_pane_t1

0xaa08,	// (0x00049401) grid_highlight_pane_cp02_ParamLimits

0xaa1e,	// (0x00049417) toolbar_button_pane_cp01_ParamLimits

0xaa1e,	// (0x00049417) toolbar_button_pane_cp01

0xb894,	// (0x0004a28d) temp_image_control_pane_ParamLimits

0xb894,	// (0x0004a28d) temp_image_control_pane

0xbcb3,	// (0x0004a6ac) main_mp3_pane

0xd038,	// (0x0004ba31) temp_image_control_pane_g1_ParamLimits

0xd038,	// (0x0004ba31) temp_image_control_pane_g1

0xd046,	// (0x0004ba3f) temp_image_control_pane_g2_ParamLimits

0xd046,	// (0x0004ba3f) temp_image_control_pane_g2

0xd058,	// (0x0004ba51) temp_image_control_pane_g3_ParamLimits

0xd058,	// (0x0004ba51) temp_image_control_pane_g3

0x5bcb,	// (0x000445c4) temp_image_control_pane_g4_ParamLimits

0x5bcb,	// (0x000445c4) temp_image_control_pane_g4

0x0003,

0xf70f,	// (0x0004e108) temp_image_control_pane_g_ParamLimits

0xf70f,	// (0x0004e108) temp_image_control_pane_g

0xd038,	// (0x0004ba31) main_mp3_pane_g1

0x5bdc,	// (0x000445d5) main_mp3_pane_g2

0x0007,

0xf718,	// (0x0004e111) main_mp3_pane_g

0xd09b,	// (0x0004ba94) main_mp3_pane_t1

0xab70,	// (0x00049569) main_camera_pane_g8_ParamLimits

0xab70,	// (0x00049569) main_camera_pane_g8

0x2eb3,	// (0x000418ac) main_video_pane_g7_ParamLimits

0x2eb3,	// (0x000418ac) main_video_pane_g7

0x567b,	// (0x00044074) main_camera2_pane_t7_ParamLimits

0x567b,	// (0x00044074) main_camera2_pane_t7

0xacbc,	// (0x000496b5) scroll_pane_cp025_ParamLimits

0xacbc,	// (0x000496b5) scroll_pane_cp025

0xacd0,	// (0x000496c9) scroll_pane_cp026_ParamLimits

0xacd0,	// (0x000496c9) scroll_pane_cp026

0xacdf,	// (0x000496d8) wml_content_pane_ParamLimits

0xa237,	// (0x00048c30) main_touch_calib_pane

0x5c80,	// (0x00044679) main_touch_calib_pane_g1

0x5c8c,	// (0x00044685) main_touch_calib_pane_g2

0x5c98,	// (0x00044691) main_touch_calib_pane_g3

0x5ca4,	// (0x0004469d) main_touch_calib_pane_g4

0x0003,

0xf736,	// (0x0004e12f) main_touch_calib_pane_g

0x5cb0,	// (0x000446a9) main_touch_calib_pane_t1

0x5cc7,	// (0x000446c0) main_touch_calib_pane_t2

0x0004,

0xf73f,	// (0x0004e138) main_touch_calib_pane_t

0xb459,	// (0x00049e52) mup_progress_pane_cp02

0xb48e,	// (0x00049e87) navi_pane_g1

0xb549,	// (0x00049f42) navi_pane_mp_t3

0xbcb3,	// (0x0004a6ac) main_mp3_pane_ParamLimits

0x5305,	// (0x00043cfe) navi_pane_ParamLimits

0xd038,	// (0x0004ba31) main_mp3_pane_g1_ParamLimits

0x5bdc,	// (0x000445d5) main_mp3_pane_g2_ParamLimits

0x5be8,	// (0x000445e1) main_mp3_pane_g3_ParamLimits

0x5be8,	// (0x000445e1) main_mp3_pane_g3

0x5bf4,	// (0x000445ed) main_mp3_pane_g4_ParamLimits

0x5bf4,	// (0x000445ed) main_mp3_pane_g4

0xd068,	// (0x0004ba61) main_mp3_pane_g5_ParamLimits

0xd068,	// (0x0004ba61) main_mp3_pane_g5

0xd076,	// (0x0004ba6f) main_mp3_pane_g6_ParamLimits

0xd076,	// (0x0004ba6f) main_mp3_pane_g6

0xd083,	// (0x0004ba7c) main_mp3_pane_g7_ParamLimits

0xd083,	// (0x0004ba7c) main_mp3_pane_g7

0xd08f,	// (0x0004ba88) main_mp3_pane_g8_ParamLimits

0xd08f,	// (0x0004ba88) main_mp3_pane_g8

0xf718,	// (0x0004e111) main_mp3_pane_g_ParamLimits

0x5c00,	// (0x000445f9) main_mp3_pane_t2

0x5c10,	// (0x00044609) main_mp3_pane_t3

0xd0a9,	// (0x0004baa2) main_mp3_pane_t4

0xd0b7,	// (0x0004bab0) main_mp3_pane_t5

0x0005,

0xf729,	// (0x0004e122) main_mp3_pane_t

0xd0c5,	// (0x0004babe) mup_progress_pane_cp01

0x0a63,	// (0x0003f45c) aid_zoom_text_secondary2

0xcebb,	// (0x0004b8b4) list_cale_ev2_pane

0xcec3,	// (0x0004b8bc) scroll_pane_cp023_ParamLimits

0x5d22,	// (0x0004471b) field_cale_ev2_pane_ParamLimits

0x5d22,	// (0x0004471b) field_cale_ev2_pane

0x0d08,	// (0x0003f701) field_cale_ev2_pane_g1_ParamLimits

0x0d08,	// (0x0003f701) field_cale_ev2_pane_g1

0x0d14,	// (0x0003f70d) field_cale_ev2_pane_g2_ParamLimits

0x0d14,	// (0x0003f70d) field_cale_ev2_pane_g2

0x0d2c,	// (0x0003f725) field_cale_ev2_pane_g3_ParamLimits

0x0d2c,	// (0x0003f725) field_cale_ev2_pane_g3

0x0003,

0xf74a,	// (0x0004e143) field_cale_ev2_pane_g_ParamLimits

0xf74a,	// (0x0004e143) field_cale_ev2_pane_g

0x0d50,	// (0x0003f749) field_cale_ev2_pane_t1_ParamLimits

0x0d50,	// (0x0003f749) field_cale_ev2_pane_t1

0x0d67,	// (0x0003f760) field_cale_ev2_pane_t2_ParamLimits

0x0d67,	// (0x0003f760) field_cale_ev2_pane_t2

0x0001,

0xf753,	// (0x0004e14c) field_cale_ev2_pane_t_ParamLimits

0xf753,	// (0x0004e14c) field_cale_ev2_pane_t

0x4abc,	// (0x000434b5) main_postcard_pane_g5_ParamLimits

0x4abc,	// (0x000434b5) main_postcard_pane_g5

0x4aca,	// (0x000434c3) main_postcard_pane_g6_ParamLimits

0x4aca,	// (0x000434c3) main_postcard_pane_g6

0x2cf1,	// (0x000416ea) camera2_autofocus_pane_cp_ParamLimits

0x2cf1,	// (0x000416ea) camera2_autofocus_pane_cp

0xbcb3,	// (0x0004a6ac) main_mup3_pane

0x5d80,	// (0x00044779) main_mup3_pane_g1_ParamLimits

0x5d80,	// (0x00044779) main_mup3_pane_g1

0x5da1,	// (0x0004479a) main_mup3_pane_g2_ParamLimits

0x5da1,	// (0x0004479a) main_mup3_pane_g2

0x5e15,	// (0x0004480e) main_mup3_pane_g3_ParamLimits

0x5e15,	// (0x0004480e) main_mup3_pane_g3

0x5e7a,	// (0x00044873) main_mup3_pane_g4_ParamLimits

0x5e7a,	// (0x00044873) main_mup3_pane_g4

0x5edf,	// (0x000448d8) main_mup3_pane_g5_ParamLimits

0x5edf,	// (0x000448d8) main_mup3_pane_g5

0x5f44,	// (0x0004493d) main_mup3_pane_g6_ParamLimits

0x5f44,	// (0x0004493d) main_mup3_pane_g6

0xd0cd,	// (0x0004bac6) main_mup3_pane_g7_ParamLimits

0xd0cd,	// (0x0004bac6) main_mup3_pane_g7

0x0007,

0xf763,	// (0x0004e15c) main_mup3_pane_g_ParamLimits

0xf763,	// (0x0004e15c) main_mup3_pane_g

0x5fba,	// (0x000449b3) main_mup3_pane_t1_ParamLimits

0x5fba,	// (0x000449b3) main_mup3_pane_t1

0x6025,	// (0x00044a1e) main_mup3_pane_t2_ParamLimits

0x6025,	// (0x00044a1e) main_mup3_pane_t2

0x60ea,	// (0x00044ae3) main_mup3_pane_t4_ParamLimits

0x60ea,	// (0x00044ae3) main_mup3_pane_t4

0x613e,	// (0x00044b37) main_mup3_pane_t5_ParamLimits

0x613e,	// (0x00044b37) main_mup3_pane_t5

0x61ee,	// (0x00044be7) main_mup3_pane_t6_ParamLimits

0x61ee,	// (0x00044be7) main_mup3_pane_t6

0x0005,

0xf774,	// (0x0004e16d) main_mup3_pane_t_ParamLimits

0xf774,	// (0x0004e16d) main_mup3_pane_t

0x6298,	// (0x00044c91) mup3_progress_pane_ParamLimits

0x6298,	// (0x00044c91) mup3_progress_pane

0x6316,	// (0x00044d0f) popup_mup3_control_window_ParamLimits

0x6316,	// (0x00044d0f) popup_mup3_control_window

0xd0db,	// (0x0004bad4) popup_mup3_text_window

0x6333,	// (0x00044d2c) mup3_progress_pane_t1

0x6352,	// (0x00044d4b) mup3_progress_pane_t2

0xd0e3,	// (0x0004badc) mup3_progress_pane_t3

0x0002,

0xf781,	// (0x0004e17a) mup3_progress_pane_t

0xd100,	// (0x0004baf9) mup_progress_pane_cp03

0xa237,	// (0x00048c30) bg_tb_trans_pane_cp04

0x6371,	// (0x00044d6a) mup3_volume_pane

0x6379,	// (0x00044d72) popup_mup3_control_window_g1

0xd708,	// (0x0004c101) mup3_volume_pane_g1

0xd711,	// (0x0004c10a) mup3_volume_pane_g2

0xd71a,	// (0x0004c113) mup3_volume_pane_g3

0x0002,

0xf788,	// (0x0004e181) mup3_volume_pane_g

0xa237,	// (0x00048c30) bg_tb_trans_pane_cp03

0xd110,	// (0x0004bb09) popup_mup3_text_window_g1

0xd118,	// (0x0004bb11) popup_mup3_text_window_t1

0xa9f1,	// (0x000493ea) list_calc_item_pane_g1_ParamLimits

0xcb7a,	// (0x0004b573) mup_volume_pane_cp_g1

0x5ce0,	// (0x000446d9) main_touch_calib_pane_t3

0x5cf6,	// (0x000446ef) main_touch_calib_pane_t4

0x5d0c,	// (0x00044705) main_touch_calib_pane_t5

0x1ddd,	// (0x000407d6) aid_cell_size_toolbar2

0x1de5,	// (0x000407de) aid_popup3_width_pane

0x0a5b,	// (0x0003f454) aid_zoom_text_msg_primary

0x2cc4,	// (0x000416bd) vorec_t7

0xa9b5,	// (0x000493ae) bg_calc_paper_pane_g1_ParamLimits

0xa9c1,	// (0x000493ba) bg_calc_paper_pane_g2_ParamLimits

0xa9cd,	// (0x000493c6) bg_calc_paper_pane_g3_ParamLimits

0xa9d9,	// (0x000493d2) bg_calc_paper_pane_g4_ParamLimits

0xa9e5,	// (0x000493de) bg_calc_paper_pane_g5_ParamLimits

0x2444,	// (0x00040e3d) bg_calc_paper_pane_g6_ParamLimits

0x2455,	// (0x00040e4e) bg_calc_paper_pane_g7_ParamLimits

0x2466,	// (0x00040e5f) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0004db36) bg_calc_paper_pane_g_ParamLimits

0x2477,	// (0x00040e70) calc_bg_paper_pane_g9_ParamLimits

0x2de2,	// (0x000417db) image_qvga_pane_ParamLimits

0x2de2,	// (0x000417db) image_qvga_pane

0xa8e4,	// (0x000492dd) bg_popup_sub_pane_cp04_ParamLimits

0xb7cb,	// (0x0004a1c4) popup_mup_playback_window_g1_ParamLimits

0xb7d7,	// (0x0004a1d0) popup_mup_playback_window_t1_ParamLimits

0xb7ec,	// (0x0004a1e5) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0004dec0) popup_mup_playback_window_t_ParamLimits

0x57aa,	// (0x000441a3) main_mup2_pane_g3_ParamLimits

0x57aa,	// (0x000441a3) main_mup2_pane_g3

0x308e,	// (0x00041a87) popup_toolbar_window_cp04

0xbbe7,	// (0x0004a5e0) popup_call2_audio_second_window_g3_ParamLimits

0xbbe7,	// (0x0004a5e0) popup_call2_audio_second_window_g3

0xc00b,	// (0x0004aa04) popup_call2_audio_first_window_g4_ParamLimits

0xc00b,	// (0x0004aa04) popup_call2_audio_first_window_g4

0xc68a,	// (0x0004b083) popup_call2_audio_in_window_g4_ParamLimits

0xc68a,	// (0x0004b083) popup_call2_audio_in_window_g4

0x4bd0,	// (0x000435c9) aid_area_sk_bg_cut_ParamLimits

0x4bd0,	// (0x000435c9) aid_area_sk_bg_cut

0xb801,	// (0x0004a1fa) aid_area_sk_bg_cut_2_ParamLimits

0xb801,	// (0x0004a1fa) aid_area_sk_bg_cut_2

0x5b32,	// (0x0004452b) aid_placing_details_win

0x5b3a,	// (0x00044533) aid_placing_details_win_2

0xcf7a,	// (0x0004b973) camera2_autofocus_pane_g1_ParamLimits

0x203c,	// (0x00040a35) popup_fixed_preview_cale_window_ParamLimits

0x203c,	// (0x00040a35) popup_fixed_preview_cale_window

0xb5c9,	// (0x00049fc2) navi_slider_pane_g3

0xb5d2,	// (0x00049fcb) navi_slider_pane_g4

0xb5db,	// (0x00049fd4) navi_slider_pane_g5

0xb5c9,	// (0x00049fc2) navi_slider_pane_g6

0x4482,	// (0x00042e7b) navi_slider_pane_g7

0xb6f0,	// (0x0004a0e9) mup_scale_pane_g3

0xb6f9,	// (0x0004a0f2) mup_scale_pane_g4

0xb702,	// (0x0004a0fb) mup_scale_pane_g5

0x48fd,	// (0x000432f6) mup_scale_pane_g6

0x4906,	// (0x000432ff) mup_scale_pane_g7

0xb5c9,	// (0x00049fc2) cams2_slider_pane_g3

0xcbfc,	// (0x0004b5f5) cams2_slider_pane_g4

0x5a8d,	// (0x00044486) cams2_slider_pane_g5

0xb5c9,	// (0x00049fc2) cams2_slider_pane_g6

0x5a95,	// (0x0004448e) cams2_slider_pane_g7

0xce41,	// (0x0004b83a) camera2_autofocus_pane_cp_g1

0xc9e9,	// (0x0004b3e2) bg_popup_preview_window_pane_cp02_ParamLimits

0xc9e9,	// (0x0004b3e2) bg_popup_preview_window_pane_cp02

0xd126,	// (0x0004bb1f) list_fp_cale_pane_ParamLimits

0xd126,	// (0x0004bb1f) list_fp_cale_pane

0xd132,	// (0x0004bb2b) popup_fixed_preview_cale_window_t1_ParamLimits

0xd132,	// (0x0004bb2b) popup_fixed_preview_cale_window_t1

0x6382,	// (0x00044d7b) popup_fixed_preview_cale_window_t2_ParamLimits

0x6382,	// (0x00044d7b) popup_fixed_preview_cale_window_t2

0x6397,	// (0x00044d90) popup_fixed_preview_cale_window_t3_ParamLimits

0x6397,	// (0x00044d90) popup_fixed_preview_cale_window_t3

0x0002,

0xf78f,	// (0x0004e188) popup_fixed_preview_cale_window_t_ParamLimits

0xf78f,	// (0x0004e188) popup_fixed_preview_cale_window_t

0x63ac,	// (0x00044da5) list_single_fp_cale_pane_ParamLimits

0x63ac,	// (0x00044da5) list_single_fp_cale_pane

0xd150,	// (0x0004bb49) list_single_fp_cale_pane_g1_ParamLimits

0xd150,	// (0x0004bb49) list_single_fp_cale_pane_g1

0xd15c,	// (0x0004bb55) list_single_fp_cale_pane_g2_ParamLimits

0xd15c,	// (0x0004bb55) list_single_fp_cale_pane_g2

0x0002,

0xf796,	// (0x0004e18f) list_single_fp_cale_pane_g_ParamLimits

0xf796,	// (0x0004e18f) list_single_fp_cale_pane_g

0xd175,	// (0x0004bb6e) list_single_fp_cale_pane_t1_ParamLimits

0xd175,	// (0x0004bb6e) list_single_fp_cale_pane_t1

0xd187,	// (0x0004bb80) list_single_fp_cale_pane_t2_ParamLimits

0xd187,	// (0x0004bb80) list_single_fp_cale_pane_t2

0x0001,

0xf79d,	// (0x0004e196) list_single_fp_cale_pane_t_ParamLimits

0xf79d,	// (0x0004e196) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa237,	// (0x00048c30) main_dialer_pane

0x63bc,	// (0x00044db5) aid_cell_size_keypad

0x63c6,	// (0x00044dbf) dialer_ne_pane

0x63d0,	// (0x00044dc9) grid_dialer_command_1_pane

0x63d8,	// (0x00044dd1) grid_dialer_command_2_pane

0x63e0,	// (0x00044dd9) grid_dialer_keypad_pane

0x63f4,	// (0x00044ded) bg_popup_call_pane_cp06_ParamLimits

0x63f4,	// (0x00044ded) bg_popup_call_pane_cp06

0x6400,	// (0x00044df9) dialer_ne_clear_pane_ParamLimits

0x6400,	// (0x00044df9) dialer_ne_clear_pane

0xd1ba,	// (0x0004bbb3) dialer_ne_pane_g1

0xd1c2,	// (0x0004bbbb) dialer_ne_pane_t1_ParamLimits

0xd1c2,	// (0x0004bbbb) dialer_ne_pane_t1

0x640c,	// (0x00044e05) dialer_ne_pane_t2_ParamLimits

0x640c,	// (0x00044e05) dialer_ne_pane_t2

0x6429,	// (0x00044e22) dialer_ne_pane_t3_ParamLimits

0x6429,	// (0x00044e22) dialer_ne_pane_t3

0x0002,

0xf7a2,	// (0x0004e19b) dialer_ne_pane_t_ParamLimits

0xf7a2,	// (0x0004e19b) dialer_ne_pane_t

0x644d,	// (0x00044e46) dialer_ne_pane_t3_copy1_ParamLimits

0x644d,	// (0x00044e46) dialer_ne_pane_t3_copy1

0x6471,	// (0x00044e6a) cell_dialer_keypad_pane_ParamLimits

0x6471,	// (0x00044e6a) cell_dialer_keypad_pane

0x6488,	// (0x00044e81) cell_dialer_command_1_pane_ParamLimits

0x6488,	// (0x00044e81) cell_dialer_command_1_pane

0x649e,	// (0x00044e97) cell_dialer_command_2_pane_ParamLimits

0x649e,	// (0x00044e97) cell_dialer_command_2_pane

0xd1d4,	// (0x0004bbcd) bg_button_pane_cp02_ParamLimits

0xd1d4,	// (0x0004bbcd) bg_button_pane_cp02

0x64ad,	// (0x00044ea6) cell_dialer_keypad_pane_g1_ParamLimits

0x64ad,	// (0x00044ea6) cell_dialer_keypad_pane_g1

0xd1d4,	// (0x0004bbcd) bg_button_pane_cp03_ParamLimits

0xd1d4,	// (0x0004bbcd) bg_button_pane_cp03

0x64c2,	// (0x00044ebb) cell_dialer_command_1_pane_g1_ParamLimits

0x64c2,	// (0x00044ebb) cell_dialer_command_1_pane_g1

0xd1e0,	// (0x0004bbd9) bg_button_pane_cp04

0x64d6,	// (0x00044ecf) cell_dialer_command_2_pane_g1

0xab68,	// (0x00049561) bg_button_pane_cp06

0xd1e8,	// (0x0004bbe1) dialer_ne_clear_pane_g1

0xb49a,	// (0x00049e93) navi_pane_g2

0xb4c8,	// (0x00049ec1) navi_pane_g3

0x0002,

0xf3ca,	// (0x0004ddc3) navi_pane_g

0xb557,	// (0x00049f50) navi_pane_mv_g2

0xb580,	// (0x00049f79) navi_pane_mv_g5

0x444d,	// (0x00042e46) navi_pane_mv_t1

0xa9a9,	// (0x000493a2) main_clock2_pane

0xd6e8,	// (0x0004c0e1) main_clock2_list_pane_ParamLimits

0xd6e8,	// (0x0004c0e1) main_clock2_list_pane

0x6531,	// (0x00044f2a) main_clock2_pane_t1_ParamLimits

0x6531,	// (0x00044f2a) main_clock2_pane_t1

0x655f,	// (0x00044f58) main_clock2_pane_t2_ParamLimits

0x655f,	// (0x00044f58) main_clock2_pane_t2

0x0004,

0xf7ae,	// (0x0004e1a7) main_clock2_pane_t_ParamLimits

0xf7ae,	// (0x0004e1a7) main_clock2_pane_t

0x65c4,	// (0x00044fbd) popup_clock_analogue_window_cp03_ParamLimits

0x65c4,	// (0x00044fbd) popup_clock_analogue_window_cp03

0x65e2,	// (0x00044fdb) popup_clock_digital_window_cp02_ParamLimits

0x65e2,	// (0x00044fdb) popup_clock_digital_window_cp02

0x6657,	// (0x00045050) main_clock2_list_single_pane_ParamLimits

0x6657,	// (0x00045050) main_clock2_list_single_pane

0xab68,	// (0x00049561) list_highlight_pane_cp05

0xd220,	// (0x0004bc19) main_clock2_list_single_pane_t1

0x308e,	// (0x00041a87) popup_toolbar_window_cp04_ParamLimits

0x5b9b,	// (0x00044594) camera2_autofocus_pane_g2_ParamLimits

0x5b9b,	// (0x00044594) camera2_autofocus_pane_g2

0x5ba7,	// (0x000445a0) camera2_autofocus_pane_g3_ParamLimits

0x5ba7,	// (0x000445a0) camera2_autofocus_pane_g3

0x5bb3,	// (0x000445ac) camera2_autofocus_pane_g4_ParamLimits

0x5bb3,	// (0x000445ac) camera2_autofocus_pane_g4

0x5bbf,	// (0x000445b8) camera2_autofocus_pane_g5_ParamLimits

0x5bbf,	// (0x000445b8) camera2_autofocus_pane_g5

0x0004,

0xf6f2,	// (0x0004e0eb) camera2_autofocus_pane_g_ParamLimits

0xf6f2,	// (0x0004e0eb) camera2_autofocus_pane_g

0x5d3d,	// (0x00044736) camera2_autofocus_pane_cp_g2

0x5d45,	// (0x0004473e) camera2_autofocus_pane_cp_g3

0x5d4d,	// (0x00044746) camera2_autofocus_pane_cp_g4

0x5d55,	// (0x0004474e) camera2_autofocus_pane_cp_g5

0x0004,

0xf758,	// (0x0004e151) camera2_autofocus_pane_cp_g

0x63ec,	// (0x00044de5) popup_dialer_spcha_window

0xa237,	// (0x00048c30) bg_popup_sub_pane_cp07

0xd22e,	// (0x0004bc27) list_spcha_pane

0xd236,	// (0x0004bc2f) list_single_spcha_pane_ParamLimits

0xd236,	// (0x0004bc2f) list_single_spcha_pane

0xa237,	// (0x00048c30) list_highlight_pane_cp06

0xd247,	// (0x0004bc40) list_single_spcha_pane_t1

0xc434,	// (0x0004ae2d) popup_call2_audio_out_window_g4_ParamLimits

0xc434,	// (0x0004ae2d) popup_call2_audio_out_window_g4

0xa237,	// (0x00048c30) main_imed2_pane

0x521e,	// (0x00043c17) popup_imed_adjust2_window

0x5231,	// (0x00043c2a) popup_imed_trans_window_ParamLimits

0x5231,	// (0x00043c2a) popup_imed_trans_window

0xcc65,	// (0x0004b65e) popup_blid_sat_info2_window_t1

0xcc73,	// (0x0004b66c) popup_blid_sat_info2_window_t2

0x000a,

0xf687,	// (0x0004e080) popup_blid_sat_info2_window_t

0x670e,	// (0x00045107) aid_size_cell_colour_35

0x6728,	// (0x00045121) aid_size_cell_colour_112

0x673f,	// (0x00045138) aid_size_cell_effect

0xbcb3,	// (0x0004a6ac) bg_tb_trans_pane_cp02

0xbcc1,	// (0x0004a6ba) heading_imed_pane

0x6759,	// (0x00045152) listscroll_imed_pane

0xd255,	// (0x0004bc4e) heading_imed_pane_g1

0xd25d,	// (0x0004bc56) heading_imed_pane_t1

0xd26b,	// (0x0004bc64) grid_imed_colour_35_pane_ParamLimits

0xd26b,	// (0x0004bc64) grid_imed_colour_35_pane

0x6765,	// (0x0004515e) grid_imed_effect_pane

0xd287,	// (0x0004bc80) list_imed_aspect_pane

0x6775,	// (0x0004516e) scroll_pane_cp027_ParamLimits

0x6775,	// (0x0004516e) scroll_pane_cp027

0x6781,	// (0x0004517a) cell_imed_effect_pane_ParamLimits

0x6781,	// (0x0004517a) cell_imed_effect_pane

0xd28f,	// (0x0004bc88) cell_imed_colour_pane_ParamLimits

0xd28f,	// (0x0004bc88) cell_imed_colour_pane

0xd2d9,	// (0x0004bcd2) cell_imed_colour_pane_g1_ParamLimits

0xd2d9,	// (0x0004bcd2) cell_imed_colour_pane_g1

0xd2ea,	// (0x0004bce3) hgihlgiht_grid_pane_cp016_ParamLimits

0xd2ea,	// (0x0004bce3) hgihlgiht_grid_pane_cp016

0x679d,	// (0x00045196) cell_imed_effect_pane_g1

0x67a5,	// (0x0004519e) grid_highlight_pane_cp017

0xd2fb,	// (0x0004bcf4) list_imed_single_pane_ParamLimits

0xd2fb,	// (0x0004bcf4) list_imed_single_pane

0xa237,	// (0x00048c30) list_highlight_pane_cp07

0xd30f,	// (0x0004bd08) list_imed_aspect_pane_comp1_t1

0xc9f5,	// (0x0004b3ee) bg_tb_trans_pane_cp05

0xd331,	// (0x0004bd2a) popup_imed_adjust2_window_g1

0xd358,	// (0x0004bd51) popup_imed_adjust2_window_t1

0xd370,	// (0x0004bd69) slider_imed_adjust_pane

0xd384,	// (0x0004bd7d) slider_imed_adjust_pane_g1

0xd394,	// (0x0004bd8d) slider_imed_adjust_pane_g2

0xd3a4,	// (0x0004bd9d) slider_imed_adjust_pane_g3

0xd3b5,	// (0x0004bdae) slider_imed_adjust_pane_g4

0x0003,

0xf7cb,	// (0x0004e1c4) slider_imed_adjust_pane_g

0x67ae,	// (0x000451a7) aid_size_cell_clipart2

0xd3c6,	// (0x0004bdbf) grid_imed_clipart_pane

0xd3d0,	// (0x0004bdc9) scroll_pane_cp031

0x67ba,	// (0x000451b3) cell_imed_clipart_pane_ParamLimits

0x67ba,	// (0x000451b3) cell_imed_clipart_pane

0x67d8,	// (0x000451d1) cell_imed_clipart_pane_g1

0xa237,	// (0x00048c30) grid_highlight_pane_cp014

0x6513,	// (0x00044f0c) main_clock2_pane_g1_ParamLimits

0x6513,	// (0x00044f0c) main_clock2_pane_g1

0x65fe,	// (0x00044ff7) aid_call2_pane_cp10

0x6610,	// (0x00045009) aid_call_pane_cp10

0xb3eb,	// (0x00049de4) popup_clock_analogue_window_cp10_g1

0xb3eb,	// (0x00049de4) popup_clock_analogue_window_cp10_g2

0x6622,	// (0x0004501b) popup_clock_analogue_window_cp10_g3

0x6622,	// (0x0004501b) popup_clock_analogue_window_cp10_g4

0xb3eb,	// (0x00049de4) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7b9,	// (0x0004e1b2) popup_clock_analogue_window_cp10_g

0x6638,	// (0x00045031) popup_clock_analogue_window_cp10_t1

0x6669,	// (0x00045062) clock_digital_number_pane_cp10_ParamLimits

0x6669,	// (0x00045062) clock_digital_number_pane_cp10

0x6683,	// (0x0004507c) clock_digital_number_pane_cp11_ParamLimits

0x6683,	// (0x0004507c) clock_digital_number_pane_cp11

0x669d,	// (0x00045096) clock_digital_number_pane_cp12_ParamLimits

0x669d,	// (0x00045096) clock_digital_number_pane_cp12

0x66b7,	// (0x000450b0) clock_digital_number_pane_cp13_ParamLimits

0x66b7,	// (0x000450b0) clock_digital_number_pane_cp13

0x66d3,	// (0x000450cc) clock_digital_separator_pane_cp10_ParamLimits

0x66d3,	// (0x000450cc) clock_digital_separator_pane_cp10

0x66ed,	// (0x000450e6) popup_clock_digital_window_cp02_t1_ParamLimits

0x66ed,	// (0x000450e6) popup_clock_digital_window_cp02_t1

0xa8dc,	// (0x000492d5) clock_digital_number_pane_cp10_g1

0xa8dc,	// (0x000492d5) clock_digital_number_pane_cp10_g2

0x0001,

0xf7d4,	// (0x0004e1cd) clock_digital_number_pane_cp10_g

0xa8dc,	// (0x000492d5) clock_digital_separator_pane_cp10_g1

0xa8dc,	// (0x000492d5) clock_digital_separator_pane_g2_cp10

0xb588,	// (0x00049f81) navi_pane_vded_g4

0xb591,	// (0x00049f8a) navi_pane_vded_g5

0xb59a,	// (0x00049f93) navi_pane_vded_t1

0xa237,	// (0x00048c30) main_vded_pane

0x67e1,	// (0x000451da) main_vded_pane_g1

0x67ed,	// (0x000451e6) main_vded_pane_g2

0x67f7,	// (0x000451f0) main_vded_pane_g3

0x0002,

0xf7d9,	// (0x0004e1d2) main_vded_pane_g

0x6801,	// (0x000451fa) main_vded_pane_t1

0x680f,	// (0x00045208) main_vded_pane_t2

0x0001,

0xf7e0,	// (0x0004e1d9) main_vded_pane_t

0x681d,	// (0x00045216) vded_slider_pane

0x6827,	// (0x00045220) vded_video_pane

0xd3d8,	// (0x0004bdd1) vded_video_pane_g1

0x6833,	// (0x0004522c) vded_video_pane_g2

0xce41,	// (0x0004b83a) vded_video_pane_g3

0x0002,

0xf7e5,	// (0x0004e1de) vded_video_pane_g

0xd3e2,	// (0x0004bddb) vded_slider_pane_g1

0xcb7a,	// (0x0004b573) vded_slider_pane_g2

0xd3eb,	// (0x0004bde4) vded_slider_pane_g3

0xd3f4,	// (0x0004bded) vded_slider_pane_g4

0xd3fd,	// (0x0004bdf6) vded_slider_pane_g5

0x0004,

0xf7ec,	// (0x0004e1e5) vded_slider_pane_g

0x630a,	// (0x00044d03) mup3_rocker_pane_ParamLimits

0x630a,	// (0x00044d03) mup3_rocker_pane

0x683c,	// (0x00045235) mup3_control_keys_pane_g1

0x6844,	// (0x0004523d) mup3_control_keys_pane_g2

0x684c,	// (0x00045245) mup3_control_keys_pane_g3

0x6854,	// (0x0004524d) mup3_control_keys_pane_g4

0x0003,

0xf7f7,	// (0x0004e1f0) mup3_control_keys_pane_g

0x2064,	// (0x00040a5d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2064,	// (0x00040a5d) popup_toolbar2_fixed_window_cp01

0x6326,	// (0x00044d1f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6326,	// (0x00044d1f) popup_toolbar2_fixed_window_cp02

0xbd73,	// (0x0004a76c) popup_call2_audio_second_window_t4_ParamLimits

0xbd73,	// (0x0004a76c) popup_call2_audio_second_window_t4

0xc2a1,	// (0x0004ac9a) popup_call2_audio_first_window_t6_ParamLimits

0xc2a1,	// (0x0004ac9a) popup_call2_audio_first_window_t6

0xc537,	// (0x0004af30) popup_call2_audio_out_window_t6_ParamLimits

0xc537,	// (0x0004af30) popup_call2_audio_out_window_t6

0xa237,	// (0x00048c30) main_vitu_pane

0x6864,	// (0x0004525d) aid_size_cell_itu_ParamLimits

0x6864,	// (0x0004525d) aid_size_cell_itu

0xd6e8,	// (0x0004c0e1) bg_popup_window_pane_cp08_ParamLimits

0xd6e8,	// (0x0004c0e1) bg_popup_window_pane_cp08

0x6872,	// (0x0004526b) field_vitu_entry_pane_ParamLimits

0x6872,	// (0x0004526b) field_vitu_entry_pane

0x6881,	// (0x0004527a) grid_vitu_function_pane_ParamLimits

0x6881,	// (0x0004527a) grid_vitu_function_pane

0x6891,	// (0x0004528a) grid_vitu_itu_pane_ParamLimits

0x6891,	// (0x0004528a) grid_vitu_itu_pane

0x68a1,	// (0x0004529a) cell_vitu_itu_pane_ParamLimits

0x68a1,	// (0x0004529a) cell_vitu_itu_pane

0x68b8,	// (0x000452b1) cell_vitu_function_pane_ParamLimits

0x68b8,	// (0x000452b1) cell_vitu_function_pane

0xbcb3,	// (0x0004a6ac) bg_popup_sub_pane_cp08_ParamLimits

0xbcb3,	// (0x0004a6ac) bg_popup_sub_pane_cp08

0x68cc,	// (0x000452c5) field_vitu_entry_pane_t1_ParamLimits

0x68cc,	// (0x000452c5) field_vitu_entry_pane_t1

0xd41e,	// (0x0004be17) field_vitu_entry_pane_t2_ParamLimits

0xd41e,	// (0x0004be17) field_vitu_entry_pane_t2

0x0001,

0xf805,	// (0x0004e1fe) field_vitu_entry_pane_t_ParamLimits

0xf805,	// (0x0004e1fe) field_vitu_entry_pane_t

0xd43b,	// (0x0004be34) bg_button_pane_cp05_ParamLimits

0xd43b,	// (0x0004be34) bg_button_pane_cp05

0x68e6,	// (0x000452df) cell_vitu_itu_pane_g1

0x68fe,	// (0x000452f7) cell_vitu_itu_pane_t1_ParamLimits

0x68fe,	// (0x000452f7) cell_vitu_itu_pane_t1

0x6910,	// (0x00045309) cell_vitu_itu_pane_t2_ParamLimits

0x6910,	// (0x00045309) cell_vitu_itu_pane_t2

0x0002,

0xf80a,	// (0x0004e203) cell_vitu_itu_pane_t_ParamLimits

0xf80a,	// (0x0004e203) cell_vitu_itu_pane_t

0xd449,	// (0x0004be42) bg_button_pane_cp07

0x6953,	// (0x0004534c) cell_vitu_function_pane_g1

0x22e6,	// (0x00040cdf) main_calc_pane_g1

0x1e19,	// (0x00040812) aid_visual_content_pane

0xa237,	// (0x00048c30) main_vradio_pane

0x695c,	// (0x00045355) main_vradio_pane_g1_ParamLimits

0x695c,	// (0x00045355) main_vradio_pane_g1

0xd453,	// (0x0004be4c) main_vradio_pane_g2_ParamLimits

0xd453,	// (0x0004be4c) main_vradio_pane_g2

0x0001,

0xf811,	// (0x0004e20a) main_vradio_pane_g_ParamLimits

0xf811,	// (0x0004e20a) main_vradio_pane_g

0x696a,	// (0x00045363) main_vradio_pane_t1_ParamLimits

0x696a,	// (0x00045363) main_vradio_pane_t1

0x697c,	// (0x00045375) main_vradio_pane_t2_ParamLimits

0x697c,	// (0x00045375) main_vradio_pane_t2

0xd460,	// (0x0004be59) main_vradio_pane_t3_ParamLimits

0xd460,	// (0x0004be59) main_vradio_pane_t3

0x0002,

0xf816,	// (0x0004e20f) main_vradio_pane_t_ParamLimits

0xf816,	// (0x0004e20f) main_vradio_pane_t

0x698e,	// (0x00045387) vradio_rocker_control_pane_ParamLimits

0x698e,	// (0x00045387) vradio_rocker_control_pane

0x699a,	// (0x00045393) vradio_station_info_pane_ParamLimits

0x699a,	// (0x00045393) vradio_station_info_pane

0xd474,	// (0x0004be6d) vradio_frequency_info_pane_ParamLimits

0xd474,	// (0x0004be6d) vradio_frequency_info_pane

0xce41,	// (0x0004b83a) vradio_station_info_pane_g1

0xd483,	// (0x0004be7c) vradio_station_info_pane_t1_ParamLimits

0xd483,	// (0x0004be7c) vradio_station_info_pane_t1

0xd4a5,	// (0x0004be9e) vradio_station_info_pane_t2_ParamLimits

0xd4a5,	// (0x0004be9e) vradio_station_info_pane_t2

0x0001,

0xf81d,	// (0x0004e216) vradio_station_info_pane_t_ParamLimits

0xf81d,	// (0x0004e216) vradio_station_info_pane_t

0xd4b7,	// (0x0004beb0) vradio_tuning_pane

0xd4bf,	// (0x0004beb8) vradio_rocker_control_pane_g1

0xd4c7,	// (0x0004bec0) vradio_rocker_control_pane_g2

0xd4cf,	// (0x0004bec8) vradio_rocker_control_pane_g3

0xd4d7,	// (0x0004bed0) vradio_rocker_control_pane_g4

0xd4df,	// (0x0004bed8) vradio_rocker_control_pane_g5

0x0004,

0xf822,	// (0x0004e21b) vradio_rocker_control_pane_g

0x69a7,	// (0x000453a0) vradio_frequency_info_pane_g1

0xd4e7,	// (0x0004bee0) vradio_frequency_info_pane_t1_ParamLimits

0xd4e7,	// (0x0004bee0) vradio_frequency_info_pane_t1

0x69b1,	// (0x000453aa) vradio_tuning_pane_g1

0x69bc,	// (0x000453b5) vradio_tuning_pane_t1

0x1e62,	// (0x0004085b) area_side_right_pane_ParamLimits

0x1e62,	// (0x0004085b) area_side_right_pane

0xc9b0,	// (0x0004b3a9) status_small_pane_g1

0xc9b8,	// (0x0004b3b1) status_small_pane_g2

0xc9c1,	// (0x0004b3ba) status_small_pane_g3

0xc9ca,	// (0x0004b3c3) status_small_pane_g4

0x0003,

0xf5dd,	// (0x0004dfd6) status_small_pane_g

0xc9d3,	// (0x0004b3cc) status_small_pane_t1

0xa237,	// (0x00048c30) main_video3_pane

0xd4fb,	// (0x0004bef4) cams_zoom_vslider_pane

0xd503,	// (0x0004befc) image3_wide_pane_ParamLimits

0xd503,	// (0x0004befc) image3_wide_pane

0xd51d,	// (0x0004bf16) image3_wide_small_pane

0xd529,	// (0x0004bf22) main_video3_pane_g1_ParamLimits

0xd529,	// (0x0004bf22) main_video3_pane_g1

0xd545,	// (0x0004bf3e) main_video3_pane_g2_ParamLimits

0xd545,	// (0x0004bf3e) main_video3_pane_g2

0x0001,

0xf82d,	// (0x0004e226) main_video3_pane_g_ParamLimits

0xf82d,	// (0x0004e226) main_video3_pane_g

0xd561,	// (0x0004bf5a) main_video3_pane_t1_ParamLimits

0xd561,	// (0x0004bf5a) main_video3_pane_t1

0xd58c,	// (0x0004bf85) main_video3_pane_t2_ParamLimits

0xd58c,	// (0x0004bf85) main_video3_pane_t2

0xd5b9,	// (0x0004bfb2) main_video3_pane_t3_ParamLimits

0xd5b9,	// (0x0004bfb2) main_video3_pane_t3

0x0002,

0xf832,	// (0x0004e22b) main_video3_pane_t_ParamLimits

0xf832,	// (0x0004e22b) main_video3_pane_t

0xd5e6,	// (0x0004bfdf) cams_zoom_vslider_pane_g1

0xd5ef,	// (0x0004bfe8) cams_zoom_vslider_pane_g2

0x0001,

0xf839,	// (0x0004e232) cams_zoom_vslider_pane_g

0xd5f7,	// (0x0004bff0) small_slider_vertical_pane

0xce41,	// (0x0004b83a) small_slider_vertical_pane_g1

0xce41,	// (0x0004b83a) small_slider_vertical_pane_g2

0xd5ff,	// (0x0004bff8) small_slider_vertical_pane_g3

0x0002,

0xf83e,	// (0x0004e237) small_slider_vertical_pane_g

0xa237,	// (0x00048c30) main_hwr_training_pane

0xd608,	// (0x0004c001) hwr_training_instruct_pane_ParamLimits

0xd608,	// (0x0004c001) hwr_training_instruct_pane

0x69cb,	// (0x000453c4) hwr_training_navi_pane_ParamLimits

0x69cb,	// (0x000453c4) hwr_training_navi_pane

0x69e5,	// (0x000453de) hwr_training_write_pane_ParamLimits

0x69e5,	// (0x000453de) hwr_training_write_pane

0xa237,	// (0x00048c30) bg_frame_shadow_pane

0xd63f,	// (0x0004c038) hwr_training_write_pane_g1

0xd647,	// (0x0004c040) hwr_training_write_pane_g2

0xd64f,	// (0x0004c048) hwr_training_write_pane_g3

0xd657,	// (0x0004c050) hwr_training_write_pane_g4

0xd65f,	// (0x0004c058) hwr_training_write_pane_g5

0xd667,	// (0x0004c060) hwr_training_write_pane_g6

0xd66f,	// (0x0004c068) hwr_training_write_pane_g7

0x0006,

0xf845,	// (0x0004e23e) hwr_training_write_pane_g

0x6a1d,	// (0x00045416) hwr_training_navi_pane_g1_ParamLimits

0x6a1d,	// (0x00045416) hwr_training_navi_pane_g1

0x6a2f,	// (0x00045428) hwr_training_navi_pane_g2_ParamLimits

0x6a2f,	// (0x00045428) hwr_training_navi_pane_g2

0x6a41,	// (0x0004543a) hwr_training_navi_pane_g3_ParamLimits

0x6a41,	// (0x0004543a) hwr_training_navi_pane_g3

0x6a51,	// (0x0004544a) hwr_training_navi_pane_g4_ParamLimits

0x6a51,	// (0x0004544a) hwr_training_navi_pane_g4

0x0004,

0xf854,	// (0x0004e24d) hwr_training_navi_pane_g_ParamLimits

0xf854,	// (0x0004e24d) hwr_training_navi_pane_g

0x6a6b,	// (0x00045464) hwr_training_navi_pane_t1

0x6a79,	// (0x00045472) list_single_hwr_training_instruct_pane_ParamLimits

0x6a79,	// (0x00045472) list_single_hwr_training_instruct_pane

0xd677,	// (0x0004c070) list_single_hwr_training_instruct_pane_t1

0xcd6d,	// (0x0004b766) bg_frame_shadow_pane_g1

0xd686,	// (0x0004c07f) bg_frame_shadow_pane_g2

0xd68e,	// (0x0004c087) bg_frame_shadow_pane_g3

0xd696,	// (0x0004c08f) bg_frame_shadow_pane_g4

0xd69e,	// (0x0004c097) bg_frame_shadow_pane_g5

0xd6a6,	// (0x0004c09f) bg_frame_shadow_pane_g6

0xd6ae,	// (0x0004c0a7) bg_frame_shadow_pane_g7

0xaa62,	// (0x0004945b) bg_frame_shadow_pane_g8

0x0007,

0xf85f,	// (0x0004e258) bg_frame_shadow_pane_g

0xa237,	// (0x00048c30) main_video_tele_dialer_pane

0x6a92,	// (0x0004548b) aid_size_cell_video_keypad_ParamLimits

0x6a92,	// (0x0004548b) aid_size_cell_video_keypad

0x6aa2,	// (0x0004549b) grid_video_dialer_keypad_pane_ParamLimits

0x6aa2,	// (0x0004549b) grid_video_dialer_keypad_pane

0x6ad4,	// (0x000454cd) video_down_pane_cp_ParamLimits

0x6ad4,	// (0x000454cd) video_down_pane_cp

0x6afe,	// (0x000454f7) cell_video_dialer_keypad_pane_ParamLimits

0x6afe,	// (0x000454f7) cell_video_dialer_keypad_pane

0xd6b6,	// (0x0004c0af) bg_button_pane_cp08_ParamLimits

0xd6b6,	// (0x0004c0af) bg_button_pane_cp08

0x6b15,	// (0x0004550e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6b15,	// (0x0004550e) cell_video_dialer_keypad_pane_g1

0x62fe,	// (0x00044cf7) mup3_rocker2_pane_ParamLimits

0x62fe,	// (0x00044cf7) mup3_rocker2_pane

0xce41,	// (0x0004b83a) mup3_rocker2_pane_g1

0x5182,	// (0x00043b7b) main_dialer2_pane

0xa237,	// (0x00048c30) main_mp4_pane

0x6b6e,	// (0x00045567) main_mp4_pane_g1_ParamLimits

0x6b6e,	// (0x00045567) main_mp4_pane_g1

0x6b7c,	// (0x00045575) main_mp4_pane_g2_ParamLimits

0x6b7c,	// (0x00045575) main_mp4_pane_g2

0x6b8a,	// (0x00045583) main_mp4_pane_g3_ParamLimits

0x6b8a,	// (0x00045583) main_mp4_pane_g3

0x6bdd,	// (0x000455d6) main_mp4_pane_g4_ParamLimits

0x6bdd,	// (0x000455d6) main_mp4_pane_g4

0x6c0b,	// (0x00045604) main_mp4_pane_g5_ParamLimits

0x6c0b,	// (0x00045604) main_mp4_pane_g5

0x0007,

0xf87f,	// (0x0004e278) main_mp4_pane_g_ParamLimits

0xf87f,	// (0x0004e278) main_mp4_pane_g

0x6c7f,	// (0x00045678) main_mp4_pane_t1_ParamLimits

0x6c7f,	// (0x00045678) main_mp4_pane_t1

0x6cdb,	// (0x000456d4) main_mp4_pane_t2_ParamLimits

0x6cdb,	// (0x000456d4) main_mp4_pane_t2

0xd6c2,	// (0x0004c0bb) main_mp4_pane_t3_ParamLimits

0xd6c2,	// (0x0004c0bb) main_mp4_pane_t3

0x6d2d,	// (0x00045726) main_mp4_pane_t4_ParamLimits

0x6d2d,	// (0x00045726) main_mp4_pane_t4

0x0003,

0xf890,	// (0x0004e289) main_mp4_pane_t_ParamLimits

0xf890,	// (0x0004e289) main_mp4_pane_t

0x6d6d,	// (0x00045766) mp4_progress_pane_ParamLimits

0x6d6d,	// (0x00045766) mp4_progress_pane

0x6db7,	// (0x000457b0) mp4_rocker_pane_ParamLimits

0x6db7,	// (0x000457b0) mp4_rocker_pane

0xd72b,	// (0x0004c124) mp4_progress_pane_t1

0xd744,	// (0x0004c13d) mp4_progress_pane_t2

0x0001,

0xf899,	// (0x0004e292) mp4_progress_pane_t

0xd75d,	// (0x0004c156) mup_progress_pane_cp04

0xce41,	// (0x0004b83a) mp4_rocker_pane_g1

0x6dd7,	// (0x000457d0) aid_cell_size_keypad2_ParamLimits

0x6dd7,	// (0x000457d0) aid_cell_size_keypad2

0x6de7,	// (0x000457e0) dialer2_ne_pane_ParamLimits

0x6de7,	// (0x000457e0) dialer2_ne_pane

0x6df3,	// (0x000457ec) grid_dialer2_keypad_pane_ParamLimits

0x6df3,	// (0x000457ec) grid_dialer2_keypad_pane

0xd770,	// (0x0004c169) bg_popup_call_pane_cp07_ParamLimits

0xd770,	// (0x0004c169) bg_popup_call_pane_cp07

0x6e01,	// (0x000457fa) dialer2_ne_pane_t1_ParamLimits

0x6e01,	// (0x000457fa) dialer2_ne_pane_t1

0x6e26,	// (0x0004581f) cell_dialer2_keypad_pane_ParamLimits

0x6e26,	// (0x0004581f) cell_dialer2_keypad_pane

0xd790,	// (0x0004c189) bg_button_pane_pane_cp04_ParamLimits

0xd790,	// (0x0004c189) bg_button_pane_pane_cp04

0x6e3d,	// (0x00045836) cell_dialer2_keypad_pane_g1_ParamLimits

0x6e3d,	// (0x00045836) cell_dialer2_keypad_pane_g1

0x2f60,	// (0x00041959) aid_placing_vt_set_content_ParamLimits

0x2f60,	// (0x00041959) aid_placing_vt_set_content

0x2f88,	// (0x00041981) aid_placing_vt_set_title_ParamLimits

0x2f88,	// (0x00041981) aid_placing_vt_set_title

0xa237,	// (0x00048c30) main_image3_pane

0x6ed7,	// (0x000458d0) area_side_right_pane_cp01_ParamLimits

0x6ed7,	// (0x000458d0) area_side_right_pane_cp01

0xab0d,	// (0x00049506) main_image3_pane_g1_ParamLimits

0xab0d,	// (0x00049506) main_image3_pane_g1

0x6f06,	// (0x000458ff) main_image3_pane_g2_ParamLimits

0x6f06,	// (0x000458ff) main_image3_pane_g2

0x6f1f,	// (0x00045918) main_image3_pane_g3_ParamLimits

0x6f1f,	// (0x00045918) main_image3_pane_g3

0x6f38,	// (0x00045931) main_image3_pane_g4_ParamLimits

0x6f38,	// (0x00045931) main_image3_pane_g4

0x0003,

0xf8a8,	// (0x0004e2a1) main_image3_pane_g_ParamLimits

0xf8a8,	// (0x0004e2a1) main_image3_pane_g

0x6f51,	// (0x0004594a) main_image3_pane_t1_ParamLimits

0x6f51,	// (0x0004594a) main_image3_pane_t1

0x6f76,	// (0x0004596f) main_image3_pane_t2_ParamLimits

0x6f76,	// (0x0004596f) main_image3_pane_t2

0x6f95,	// (0x0004598e) main_image3_pane_t3_ParamLimits

0x6f95,	// (0x0004598e) main_image3_pane_t3

0x0003,

0xf8b1,	// (0x0004e2aa) main_image3_pane_t_ParamLimits

0xf8b1,	// (0x0004e2aa) main_image3_pane_t

0xd6e8,	// (0x0004c0e1) grid_sctrl_middle_pane_cp01_ParamLimits

0xd6e8,	// (0x0004c0e1) grid_sctrl_middle_pane_cp01

0x6ff6,	// (0x000459ef) cell_sctrl_middle_pane_cp01_ParamLimits

0x6ff6,	// (0x000459ef) cell_sctrl_middle_pane_cp01

0x7007,	// (0x00045a00) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7007,	// (0x00045a00) cell_sctrl_middle_pane_cp01_g1

0xa237,	// (0x00048c30) main_call4_pane

0x7014,	// (0x00045a0d) aid_size_button_call4_ParamLimits

0x7014,	// (0x00045a0d) aid_size_button_call4

0x704a,	// (0x00045a43) call4_windows_pane_ParamLimits

0x704a,	// (0x00045a43) call4_windows_pane

0x705f,	// (0x00045a58) grid_call4_button_pane_ParamLimits

0x705f,	// (0x00045a58) grid_call4_button_pane

0x708f,	// (0x00045a88) call4_windows_conf_pane

0x70aa,	// (0x00045aa3) popup_call4_audio_first_window_ParamLimits

0x70aa,	// (0x00045aa3) popup_call4_audio_first_window

0x70fc,	// (0x00045af5) popup_call4_audio_second_window_ParamLimits

0x70fc,	// (0x00045af5) popup_call4_audio_second_window

0x7115,	// (0x00045b0e) popup_call4_audio_wait_window_ParamLimits

0x7115,	// (0x00045b0e) popup_call4_audio_wait_window

0x7123,	// (0x00045b1c) cell_call4_button_pane_ParamLimits

0x7123,	// (0x00045b1c) cell_call4_button_pane

0x7146,	// (0x00045b3f) bg_button_pane_cp09_ParamLimits

0x7146,	// (0x00045b3f) bg_button_pane_cp09

0x7152,	// (0x00045b4b) cell_call4_button_pane_g1_ParamLimits

0x7152,	// (0x00045b4b) cell_call4_button_pane_g1

0x715f,	// (0x00045b58) cell_call4_button_pane_t1_ParamLimits

0x715f,	// (0x00045b58) cell_call4_button_pane_t1

0xd7a4,	// (0x0004c19d) popup_call4_audio_conf_window_ParamLimits

0xd7a4,	// (0x0004c19d) popup_call4_audio_conf_window

0x6333,	// (0x00044d2c) mup3_progress_pane_t1_ParamLimits

0x6352,	// (0x00044d4b) mup3_progress_pane_t2_ParamLimits

0xd0e3,	// (0x0004badc) mup3_progress_pane_t3_ParamLimits

0xf781,	// (0x0004e17a) mup3_progress_pane_t_ParamLimits

0xd100,	// (0x0004baf9) mup_progress_pane_cp03_ParamLimits

0x685c,	// (0x00045255) mup3_control_keys_pane_g4_copy1

0x6d9b,	// (0x00045794) mp4_rocker2_pane_ParamLimits

0x6d9b,	// (0x00045794) mp4_rocker2_pane

0xd7be,	// (0x0004c1b7) mp4_rocker2_pane_g1

0xd7c6,	// (0x0004c1bf) mp4_rocker2_pane_g2

0x71a3,	// (0x00045b9c) mp4_rocker2_pane_g3

0x71ab,	// (0x00045ba4) mp4_rocker2_pane_g4

0x71b3,	// (0x00045bac) mp4_rocker2_pane_g5

0x0004,

0xf8ba,	// (0x0004e2b3) mp4_rocker2_pane_g

0xa237,	// (0x00048c30) main_camera4_pane

0xa237,	// (0x00048c30) main_video4_pane

0x6ab0,	// (0x000454a9) main_video_tele_dialer_pane_t1_ParamLimits

0x6ab0,	// (0x000454a9) main_video_tele_dialer_pane_t1

0x6ac2,	// (0x000454bb) main_video_tele_dialer_pane_t2_ParamLimits

0x6ac2,	// (0x000454bb) main_video_tele_dialer_pane_t2

0x0001,

0xf870,	// (0x0004e269) main_video_tele_dialer_pane_t_ParamLimits

0xf870,	// (0x0004e269) main_video_tele_dialer_pane_t

0x71d3,	// (0x00045bcc) cam4_autofocus_pane_ParamLimits

0x71d3,	// (0x00045bcc) cam4_autofocus_pane

0x71eb,	// (0x00045be4) cam4_image_uncrop_pane_ParamLimits

0x71eb,	// (0x00045be4) cam4_image_uncrop_pane

0x7204,	// (0x00045bfd) cam4_indicators_pane_ParamLimits

0x7204,	// (0x00045bfd) cam4_indicators_pane

0x7220,	// (0x00045c19) main_camera4_pane_g1_ParamLimits

0x7220,	// (0x00045c19) main_camera4_pane_g1

0x722c,	// (0x00045c25) main_camera4_pane_g2_ParamLimits

0x722c,	// (0x00045c25) main_camera4_pane_g2

0x722c,	// (0x00045c25) main_camera4_pane_g3_ParamLimits

0x722c,	// (0x00045c25) main_camera4_pane_g3

0x7238,	// (0x00045c31) main_camera4_pane_g4_ParamLimits

0x7238,	// (0x00045c31) main_camera4_pane_g4

0x7244,	// (0x00045c3d) main_camera4_pane_g5_ParamLimits

0x7244,	// (0x00045c3d) main_camera4_pane_g5

0x0005,

0xf8c5,	// (0x0004e2be) main_camera4_pane_g_ParamLimits

0xf8c5,	// (0x0004e2be) main_camera4_pane_g

0x725e,	// (0x00045c57) main_camera4_pane_t1_ParamLimits

0x725e,	// (0x00045c57) main_camera4_pane_t1

0xd068,	// (0x0004ba61) bg_tb_trans_pane_cp06

0x72b0,	// (0x00045ca9) cam4_indicators_pane_g1

0x72c1,	// (0x00045cba) cam4_indicators_pane_g2

0x0002,

0xf8e0,	// (0x0004e2d9) cam4_indicators_pane_g

0x72d9,	// (0x00045cd2) cam4_indicators_pane_t1

0x7303,	// (0x00045cfc) main_video4_pane_g1_ParamLimits

0x7303,	// (0x00045cfc) main_video4_pane_g1

0x730f,	// (0x00045d08) main_video4_pane_g2_ParamLimits

0x730f,	// (0x00045d08) main_video4_pane_g2

0x731b,	// (0x00045d14) main_video4_pane_g3_ParamLimits

0x731b,	// (0x00045d14) main_video4_pane_g3

0x7327,	// (0x00045d20) main_video4_pane_g4_ParamLimits

0x7327,	// (0x00045d20) main_video4_pane_g4

0x0004,

0xf8e7,	// (0x0004e2e0) main_video4_pane_g_ParamLimits

0xf8e7,	// (0x0004e2e0) main_video4_pane_g

0x7349,	// (0x00045d42) vid4_indicators_pane_ParamLimits

0x7349,	// (0x00045d42) vid4_indicators_pane

0x7368,	// (0x00045d61) video4_image_uncrop_cif_pane_ParamLimits

0x7368,	// (0x00045d61) video4_image_uncrop_cif_pane

0x7377,	// (0x00045d70) video4_image_uncrop_nhd_pane_ParamLimits

0x7377,	// (0x00045d70) video4_image_uncrop_nhd_pane

0x71eb,	// (0x00045be4) video4_image_uncrop_vga_pane_ParamLimits

0x71eb,	// (0x00045be4) video4_image_uncrop_vga_pane

0xbcb3,	// (0x0004a6ac) bg_tb_trans_pane_cp07

0x7390,	// (0x00045d89) vid4_indicators_pane_g1

0x73a6,	// (0x00045d9f) vid4_indicators_pane_g2

0x73ba,	// (0x00045db3) vid4_indicators_pane_g3

0x0004,

0xf8f2,	// (0x0004e2eb) vid4_indicators_pane_g

0x73eb,	// (0x00045de4) vid4_indicators_pane_t1

0x7402,	// (0x00045dfb) cam4_autofocus_pane_g1

0x740a,	// (0x00045e03) cam4_autofocus_pane_g2

0x7412,	// (0x00045e0b) cam4_autofocus_pane_g3

0x0002,

0xf8fd,	// (0x0004e2f6) cam4_autofocus_pane_g

0x741a,	// (0x00045e13) cam4_autofocus_pane_g3_copy1

0x6ae2,	// (0x000454db) video_down_pane_cp_t1

0x6af0,	// (0x000454e9) video_down_pane_cp_t2

0x0001,

0xf875,	// (0x0004e26e) video_down_pane_cp_t

0xd6e8,	// (0x0004c0e1) popup_vitu2_window_ParamLimits

0xd6e8,	// (0x0004c0e1) popup_vitu2_window

0x7422,	// (0x00045e1b) aid_size_cell2_itu2_ParamLimits

0x7422,	// (0x00045e1b) aid_size_cell2_itu2

0x7444,	// (0x00045e3d) aid_size_cell_itu2_ParamLimits

0x7444,	// (0x00045e3d) aid_size_cell_itu2

0xd770,	// (0x0004c169) bg_popup_window_pane_cp09_ParamLimits

0xd770,	// (0x0004c169) bg_popup_window_pane_cp09

0x748a,	// (0x00045e83) field_vitu2_entry_pane_ParamLimits

0x748a,	// (0x00045e83) field_vitu2_entry_pane

0x74aa,	// (0x00045ea3) grid_vitu2_function_pane_ParamLimits

0x74aa,	// (0x00045ea3) grid_vitu2_function_pane

0x74ee,	// (0x00045ee7) grid_vitu2_itu_pane_ParamLimits

0x74ee,	// (0x00045ee7) grid_vitu2_itu_pane

0x7566,	// (0x00045f5f) cell_vitu2_itu_pane_ParamLimits

0x7566,	// (0x00045f5f) cell_vitu2_itu_pane

0x7581,	// (0x00045f7a) cell_vitu2_function_pane_ParamLimits

0x7581,	// (0x00045f7a) cell_vitu2_function_pane

0xd7ce,	// (0x0004c1c7) bg_popup_call_pane_cp08_ParamLimits

0xd7ce,	// (0x0004c1c7) bg_popup_call_pane_cp08

0xd7e5,	// (0x0004c1de) field_vitu2_entry_pane_g1

0xd7f1,	// (0x0004c1ea) field_vitu2_entry_pane_g2

0x0002,

0xf904,	// (0x0004e2fd) field_vitu2_entry_pane_g

0x0d7c,	// (0x0003f775) field_vitu2_entry_pane_t1_ParamLimits

0x0d7c,	// (0x0003f775) field_vitu2_entry_pane_t1

0x0dac,	// (0x0003f7a5) field_vitu2_entry_pane_t2_ParamLimits

0x0dac,	// (0x0003f7a5) field_vitu2_entry_pane_t2

0x0001,

0xf90b,	// (0x0004e304) field_vitu2_entry_pane_t_ParamLimits

0xf90b,	// (0x0004e304) field_vitu2_entry_pane_t

0x75c5,	// (0x00045fbe) bg_button_pane_cp010_ParamLimits

0x75c5,	// (0x00045fbe) bg_button_pane_cp010

0x75d3,	// (0x00045fcc) cell_vitu2_itu_pane_g1

0x75f3,	// (0x00045fec) cell_vitu2_itu_pane_t1_ParamLimits

0x75f3,	// (0x00045fec) cell_vitu2_itu_pane_t1

0x0dc9,	// (0x0003f7c2) cell_vitu2_itu_pane_t2_ParamLimits

0x0dc9,	// (0x0003f7c2) cell_vitu2_itu_pane_t2

0x0002,

0xf915,	// (0x0004e30e) cell_vitu2_itu_pane_t_ParamLimits

0xf915,	// (0x0004e30e) cell_vitu2_itu_pane_t

0xbcb3,	// (0x0004a6ac) bg_button_pane_cp011

0x763f,	// (0x00046038) cell_vitu2_function_pane_g1

0xa237,	// (0x00048c30) main_myfav_hc_pane

0x6fd7,	// (0x000459d0) popup_image3_note_pane_ParamLimits

0x6fd7,	// (0x000459d0) popup_image3_note_pane

0x6fe5,	// (0x000459de) popup_image3_tool_bar_pane_ParamLimits

0x6fe5,	// (0x000459de) popup_image3_tool_bar_pane

0x0e3f,	// (0x0003f838) cell_vitu2_itu_pane_t3_ParamLimits

0x0e3f,	// (0x0003f838) cell_vitu2_itu_pane_t3

0xa237,	// (0x00048c30) bg_popup_trans_pane

0xd813,	// (0x0004c20c) grid_image3_tool_bar_pane

0xd81d,	// (0x0004c216) bg_popup_trans_pane_g1

0xadc5,	// (0x000497be) bg_popup_trans_pane_g2

0xd825,	// (0x0004c21e) bg_popup_trans_pane_g3

0xd82d,	// (0x0004c226) bg_popup_trans_pane_g4

0xd835,	// (0x0004c22e) bg_popup_trans_pane_g5

0xd83d,	// (0x0004c236) bg_popup_trans_pane_g6

0xd845,	// (0x0004c23e) bg_popup_trans_pane_g7

0xd84d,	// (0x0004c246) bg_popup_trans_pane_g8

0xada5,	// (0x0004979e) bg_popup_trans_pane_g9

0x0008,

0xf91c,	// (0x0004e315) bg_popup_trans_pane_g

0xd855,	// (0x0004c24e) cell_image3_tool_bar_pane_ParamLimits

0xd855,	// (0x0004c24e) cell_image3_tool_bar_pane

0xce41,	// (0x0004b83a) cell_image3_tool_bar_pane_g1

0xa237,	// (0x00048c30) bg_popup_trans_pane_cp1

0xd86b,	// (0x0004c264) popup_image3_note_pane_t1

0xd879,	// (0x0004c272) popup_image3_note_pane_t2

0xd887,	// (0x0004c280) popup_image3_note_pane_t3

0x0002,

0xf92f,	// (0x0004e328) popup_image3_note_pane_t

0xd897,	// (0x0004c290) popup_image3_note_pane_t3_copy1

0x7653,	// (0x0004604c) bg_myfav_hc_instruction_pane_ParamLimits

0x7653,	// (0x0004604c) bg_myfav_hc_instruction_pane

0x766b,	// (0x00046064) cell_myfav_contact_pane_ParamLimits

0x766b,	// (0x00046064) cell_myfav_contact_pane

0x7685,	// (0x0004607e) cell_myfav_contact_pane_cp1_ParamLimits

0x7685,	// (0x0004607e) cell_myfav_contact_pane_cp1

0x769d,	// (0x00046096) cell_myfav_contact_pane_cp2_ParamLimits

0x769d,	// (0x00046096) cell_myfav_contact_pane_cp2

0x76b5,	// (0x000460ae) cell_myfav_contact_pane_cp3_ParamLimits

0x76b5,	// (0x000460ae) cell_myfav_contact_pane_cp3

0x76cc,	// (0x000460c5) cell_myfav_contact_pane_cp4_ParamLimits

0x76cc,	// (0x000460c5) cell_myfav_contact_pane_cp4

0x76e2,	// (0x000460db) cell_myfav_contact_pane_cp5_ParamLimits

0x76e2,	// (0x000460db) cell_myfav_contact_pane_cp5

0x76f6,	// (0x000460ef) cell_myfav_contact_pane_cp6_ParamLimits

0x76f6,	// (0x000460ef) cell_myfav_contact_pane_cp6

0x770a,	// (0x00046103) cell_myfav_contact_pane_cp7_ParamLimits

0x770a,	// (0x00046103) cell_myfav_contact_pane_cp7

0xd8a5,	// (0x0004c29e) listscroll_gen_pane_cp05

0x7722,	// (0x0004611b) main_myfav_hc_pane_g1_ParamLimits

0x7722,	// (0x0004611b) main_myfav_hc_pane_g1

0x773c,	// (0x00046135) main_myfav_hc_pane_g2_ParamLimits

0x773c,	// (0x00046135) main_myfav_hc_pane_g2

0x0002,

0xf936,	// (0x0004e32f) main_myfav_hc_pane_g_ParamLimits

0xf936,	// (0x0004e32f) main_myfav_hc_pane_g

0x776e,	// (0x00046167) main_myfav_hc_pane_t1_ParamLimits

0x776e,	// (0x00046167) main_myfav_hc_pane_t1

0xd8ae,	// (0x0004c2a7) main_myfav_hc_pane_t2_ParamLimits

0xd8ae,	// (0x0004c2a7) main_myfav_hc_pane_t2

0xd8c0,	// (0x0004c2b9) main_myfav_hc_pane_t3_ParamLimits

0xd8c0,	// (0x0004c2b9) main_myfav_hc_pane_t3

0x7785,	// (0x0004617e) main_myfav_hc_pane_t4_ParamLimits

0x7785,	// (0x0004617e) main_myfav_hc_pane_t4

0x0004,

0xf93d,	// (0x0004e336) main_myfav_hc_pane_t_ParamLimits

0xf93d,	// (0x0004e336) main_myfav_hc_pane_t

0xce41,	// (0x0004b83a) bg_myfav_hc_instruction_pane_g1

0xd8d2,	// (0x0004c2cb) cell_myfav_contact_pane_g1_ParamLimits

0xd8d2,	// (0x0004c2cb) cell_myfav_contact_pane_g1

0xd8d2,	// (0x0004c2cb) cell_myfav_contact_pane_g2_ParamLimits

0xd8d2,	// (0x0004c2cb) cell_myfav_contact_pane_g2

0xd8de,	// (0x0004c2d7) cell_myfav_contact_pane_g3_ParamLimits

0xd8de,	// (0x0004c2d7) cell_myfav_contact_pane_g3

0xd0cd,	// (0x0004bac6) cell_myfav_contact_pane_g4_ParamLimits

0xd0cd,	// (0x0004bac6) cell_myfav_contact_pane_g4

0xd8eb,	// (0x0004c2e4) cell_myfav_contact_pane_g5_ParamLimits

0xd8eb,	// (0x0004c2e4) cell_myfav_contact_pane_g5

0x0004,

0xf948,	// (0x0004e341) cell_myfav_contact_pane_g_ParamLimits

0xf948,	// (0x0004e341) cell_myfav_contact_pane_g

0x7756,	// (0x0004614f) main_myfav_hc_pane_g3_ParamLimits

0x7756,	// (0x0004614f) main_myfav_hc_pane_g3

0x1f9e,	// (0x00040997) popup_adpt_find_window

0x77af,	// (0x000461a8) afind_page_pane_ParamLimits

0x77af,	// (0x000461a8) afind_page_pane

0x77bc,	// (0x000461b5) aid_size_cell_afind_ParamLimits

0x77bc,	// (0x000461b5) aid_size_cell_afind

0x77d6,	// (0x000461cf) bg_popup_sub_pane_cp09_ParamLimits

0x77d6,	// (0x000461cf) bg_popup_sub_pane_cp09

0x77e3,	// (0x000461dc) find_pane_cp01_ParamLimits

0x77e3,	// (0x000461dc) find_pane_cp01

0xd8f7,	// (0x0004c2f0) grid_afind_control_pane_ParamLimits

0xd8f7,	// (0x0004c2f0) grid_afind_control_pane

0x77f0,	// (0x000461e9) grid_afind_pane_ParamLimits

0x77f0,	// (0x000461e9) grid_afind_pane

0x780c,	// (0x00046205) cell_afind_pane_ParamLimits

0x780c,	// (0x00046205) cell_afind_pane

0xce41,	// (0x0004b83a) afind_page_pane_g1

0x7858,	// (0x00046251) afind_page_pane_g2

0x7861,	// (0x0004625a) afind_page_pane_g3

0x0002,

0xf953,	// (0x0004e34c) afind_page_pane_g

0x786a,	// (0x00046263) afind_page_pane_t1

0xd90b,	// (0x0004c304) cell_afind_grid_control_pane_ParamLimits

0xd90b,	// (0x0004c304) cell_afind_grid_control_pane

0xd790,	// (0x0004c189) bg_button_pane_cp69_ParamLimits

0xd790,	// (0x0004c189) bg_button_pane_cp69

0x788a,	// (0x00046283) cell_afind_pane_g1_ParamLimits

0x788a,	// (0x00046283) cell_afind_pane_g1

0x7897,	// (0x00046290) cell_afind_pane_t1_ParamLimits

0x7897,	// (0x00046290) cell_afind_pane_t1

0xabba,	// (0x000495b3) bg_button_pane_cp72

0xd91a,	// (0x0004c313) cell_afind_grid_control_pane_g1

0x4cfd,	// (0x000436f6) aid_image_placing_area_ParamLimits

0x4cfd,	// (0x000436f6) aid_image_placing_area

0xd406,	// (0x0004bdff) field_vitu_entry_pane_g1_ParamLimits

0xd406,	// (0x0004bdff) field_vitu_entry_pane_g1

0xd412,	// (0x0004be0b) field_vitu_entry_pane_g2_ParamLimits

0xd412,	// (0x0004be0b) field_vitu_entry_pane_g2

0x0001,

0xf800,	// (0x0004e1f9) field_vitu_entry_pane_g_ParamLimits

0xf800,	// (0x0004e1f9) field_vitu_entry_pane_g

0x68e6,	// (0x000452df) cell_vitu_itu_pane_g1_ParamLimits

0x6936,	// (0x0004532f) cell_vitu_itu_pane_t3_ParamLimits

0x6936,	// (0x0004532f) cell_vitu_itu_pane_t3

0xd72b,	// (0x0004c124) mp4_progress_pane_t1_ParamLimits

0xd744,	// (0x0004c13d) mp4_progress_pane_t2_ParamLimits

0xf899,	// (0x0004e292) mp4_progress_pane_t_ParamLimits

0xd75d,	// (0x0004c156) mup_progress_pane_cp04_ParamLimits

0x7799,	// (0x00046192) main_myfav_hc_pane_t5_ParamLimits

0x7799,	// (0x00046192) main_myfav_hc_pane_t5

0x1e25,	// (0x0004081e) aid_zoom_text_primary

0x1f9e,	// (0x00040997) popup_adpt_find_window_ParamLimits

0xbcb3,	// (0x0004a6ac) main_cam_set_pane

0x7212,	// (0x00045c0b) cam4_zoom_pane_ParamLimits

0x7212,	// (0x00045c0b) cam4_zoom_pane

0x78a9,	// (0x000462a2) main_cam_set_pane_g1_ParamLimits

0x78a9,	// (0x000462a2) main_cam_set_pane_g1

0x78b7,	// (0x000462b0) main_cam_set_pane_g2_ParamLimits

0x78b7,	// (0x000462b0) main_cam_set_pane_g2

0x0001,

0xf95a,	// (0x0004e353) main_cam_set_pane_g_ParamLimits

0xf95a,	// (0x0004e353) main_cam_set_pane_g

0x78c3,	// (0x000462bc) main_cam_set_pane_t1_ParamLimits

0x78c3,	// (0x000462bc) main_cam_set_pane_t1

0x78df,	// (0x000462d8) main_cset_listscroll_pane_ParamLimits

0x78df,	// (0x000462d8) main_cset_listscroll_pane

0x790e,	// (0x00046307) main_cset_slider_pane_ParamLimits

0x790e,	// (0x00046307) main_cset_slider_pane

0xd92b,	// (0x0004c324) main_cset_list_pane_ParamLimits

0xd92b,	// (0x0004c324) main_cset_list_pane

0xd93b,	// (0x0004c334) scroll_pane_cp028

0x792f,	// (0x00046328) aid_area_touch_slider

0x794b,	// (0x00046344) cset_slider_pane

0x7975,	// (0x0004636e) main_cset_slider_pane_g1

0x798a,	// (0x00046383) main_cset_slider_pane_g2

0x0011,

0xf95f,	// (0x0004e358) main_cset_slider_pane_g

0xd974,	// (0x0004c36d) main_cset_slider_pane_t1

0x7a46,	// (0x0004643f) main_cset_slider_pane_t2

0x7a60,	// (0x00046459) main_cset_slider_pane_t3

0x7a7a,	// (0x00046473) main_cset_slider_pane_t4

0x7a94,	// (0x0004648d) main_cset_slider_pane_t5

0x7aae,	// (0x000464a7) main_cset_slider_pane_t6

0x7ac3,	// (0x000464bc) main_cset_slider_pane_t7

0x000e,

0xf984,	// (0x0004e37d) main_cset_slider_pane_t

0x7bc7,	// (0x000465c0) cset_list_set_pane_ParamLimits

0x7bc7,	// (0x000465c0) cset_list_set_pane

0x7bd8,	// (0x000465d1) aid_position_infowindow_above

0x7be0,	// (0x000465d9) aid_position_infowindow_below

0x0e91,	// (0x0003f88a) cset_list_set_pane_g1_ParamLimits

0x0e91,	// (0x0003f88a) cset_list_set_pane_g1

0x0e9d,	// (0x0003f896) cset_list_set_pane_g3_ParamLimits

0x0e9d,	// (0x0003f896) cset_list_set_pane_g3

0x0001,

0xf9a3,	// (0x0004e39c) cset_list_set_pane_g_ParamLimits

0xf9a3,	// (0x0004e39c) cset_list_set_pane_g

0x0eac,	// (0x0003f8a5) cset_list_set_pane_t1_ParamLimits

0x0eac,	// (0x0003f8a5) cset_list_set_pane_t1

0xbcb3,	// (0x0004a6ac) list_highlight_pane_cp021_ParamLimits

0xbcb3,	// (0x0004a6ac) list_highlight_pane_cp021

0xb6f0,	// (0x0004a0e9) cset_slider_pane_g1

0xb702,	// (0x0004a0fb) cset_slider_pane_g2

0xb6f9,	// (0x0004a0f2) cset_slider_pane_g3

0x0002,

0xf9a8,	// (0x0004e3a1) cset_slider_pane_g

0xda14,	// (0x0004c40d) aid_area_touch_cam4_zoom

0x7be8,	// (0x000465e1) cam4_zoom_cont_pane

0x7bf0,	// (0x000465e9) cam4_zoom_pane_g1

0x7bf8,	// (0x000465f1) cam4_zoom_pane_g2

0x7c00,	// (0x000465f9) cam4_zoom_pane_g3

0x0002,

0xf9af,	// (0x0004e3a8) cam4_zoom_pane_g

0x7c09,	// (0x00046602) cam4_zoom_cont_pane_g1

0x7c12,	// (0x0004660b) cam4_zoom_cont_pane_g2

0x7c1b,	// (0x00046614) cam4_zoom_cont_pane_g3

0x0002,

0xf9b6,	// (0x0004e3af) cam4_zoom_cont_pane_g

0x702e,	// (0x00045a27) call4_image_pane_ParamLimits

0x702e,	// (0x00045a27) call4_image_pane

0x708f,	// (0x00045a88) call4_windows_conf_pane_ParamLimits

0x70da,	// (0x00045ad3) popup_call4_audio_in_window_ParamLimits

0x70da,	// (0x00045ad3) popup_call4_audio_in_window

0xa237,	// (0x00048c30) bg_popup_call2_act_pane_cp02

0xd79c,	// (0x0004c195) call4_list_conf_pane

0xce41,	// (0x0004b83a) call4_image_pane_g1

0xce41,	// (0x0004b83a) call4_image_pane_g2

0x0001,

0xf6c1,	// (0x0004e0ba) call4_image_pane_g

0xda1d,	// (0x0004c416) list_single_graphic_popup_conf4_pane_ParamLimits

0xda1d,	// (0x0004c416) list_single_graphic_popup_conf4_pane

0xa237,	// (0x00048c30) list_highlight_pane_cp022

0xda32,	// (0x0004c42b) list_single_graphic_popup_conf4_pane_g1

0xb2d3,	// (0x00049ccc) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9bd,	// (0x0004e3b6) list_single_graphic_popup_conf4_pane_g

0xda3a,	// (0x0004c433) list_single_graphic_popup_conf4_pane_t1

0x30e2,	// (0x00041adb) popup_vtel_slider_window_ParamLimits

0x30e2,	// (0x00041adb) popup_vtel_slider_window

0xd77e,	// (0x0004c177) dialer2_ne_pane_t2_ParamLimits

0xd77e,	// (0x0004c177) dialer2_ne_pane_t2

0x0001,

0xf89e,	// (0x0004e297) dialer2_ne_pane_t_ParamLimits

0xf89e,	// (0x0004e297) dialer2_ne_pane_t

0xbcb3,	// (0x0004a6ac) bg_popup_sub_pane_cp010_ParamLimits

0xbcb3,	// (0x0004a6ac) bg_popup_sub_pane_cp010

0x7c24,	// (0x0004661d) popup_vtel_slider_window_g1_ParamLimits

0x7c24,	// (0x0004661d) popup_vtel_slider_window_g1

0x7c30,	// (0x00046629) popup_vtel_slider_window_g2_ParamLimits

0x7c30,	// (0x00046629) popup_vtel_slider_window_g2

0x0003,

0xf9c2,	// (0x0004e3bb) popup_vtel_slider_window_g_ParamLimits

0xf9c2,	// (0x0004e3bb) popup_vtel_slider_window_g

0x7c78,	// (0x00046671) vtel_slider_pane_ParamLimits

0x7c78,	// (0x00046671) vtel_slider_pane

0x7c87,	// (0x00046680) vtel_slider_pane_g1_ParamLimits

0x7c87,	// (0x00046680) vtel_slider_pane_g1

0x7c94,	// (0x0004668d) vtel_slider_pane_g2_ParamLimits

0x7c94,	// (0x0004668d) vtel_slider_pane_g2

0x7ca1,	// (0x0004669a) vtel_slider_pane_g3_ParamLimits

0x7ca1,	// (0x0004669a) vtel_slider_pane_g3

0x7c87,	// (0x00046680) vtel_slider_pane_g4_ParamLimits

0x7c87,	// (0x00046680) vtel_slider_pane_g4

0x7cae,	// (0x000466a7) vtel_slider_pane_g5_ParamLimits

0x7cae,	// (0x000466a7) vtel_slider_pane_g5

0x0004,

0xf9cb,	// (0x0004e3c4) vtel_slider_pane_g_ParamLimits

0xf9cb,	// (0x0004e3c4) vtel_slider_pane_g

0xbcb3,	// (0x0004a6ac) main_gallery2_pane

0x746a,	// (0x00045e63) aid_size_row_itut2_dropdow_list_ParamLimits

0x746a,	// (0x00045e63) aid_size_row_itut2_dropdow_list

0x74cc,	// (0x00045ec5) grid_vitu2_function_top_pane_ParamLimits

0x74cc,	// (0x00045ec5) grid_vitu2_function_top_pane

0x7522,	// (0x00045f1b) popup_vitu2_dropdown_list_window_ParamLimits

0x7522,	// (0x00045f1b) popup_vitu2_dropdown_list_window

0x7542,	// (0x00045f3b) popup_vitu2_match_list_window

0x7cbb,	// (0x000466b4) cell_vitu2_function_top_pane_ParamLimits

0x7cbb,	// (0x000466b4) cell_vitu2_function_top_pane

0x7cdf,	// (0x000466d8) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7cdf,	// (0x000466d8) cell_vitu2_function_top_pane_cp01

0x7cfb,	// (0x000466f4) cell_vitu2_function_top_wide_pane_ParamLimits

0x7cfb,	// (0x000466f4) cell_vitu2_function_top_wide_pane

0xbcb3,	// (0x0004a6ac) bg_button_pane_cp012

0x7d17,	// (0x00046710) cell_vitu2_function_top_pane_g1

0x7d2b,	// (0x00046724) bg_button_pane_cp013_ParamLimits

0x7d2b,	// (0x00046724) bg_button_pane_cp013

0x7d47,	// (0x00046740) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7d47,	// (0x00046740) cell_vitu2_function_top_wide_pane_g1

0xd6e8,	// (0x0004c0e1) bg_popup_sub_pane_cp20

0x7d5f,	// (0x00046758) list_vitu2_match_list_pane

0xd81d,	// (0x0004c216) bg_popup_sub_pane_cp20_g1

0xd825,	// (0x0004c21e) bg_popup_sub_pane_cp20_g2

0xadc5,	// (0x000497be) bg_popup_sub_pane_cp20_g3

0xd82d,	// (0x0004c226) bg_popup_sub_pane_cp20_g4

0xada5,	// (0x0004979e) bg_popup_sub_pane_cp20_g5

0xda50,	// (0x0004c449) bg_popup_sub_pane_cp20_g6

0xd83d,	// (0x0004c236) bg_popup_sub_pane_cp20_g7

0xd845,	// (0x0004c23e) bg_popup_sub_pane_cp20_g8

0xd84d,	// (0x0004c246) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9d6,	// (0x0004e3cf) bg_popup_sub_pane_cp20_g

0x7d77,	// (0x00046770) list_vitu2_match_list_item_pane_ParamLimits

0x7d77,	// (0x00046770) list_vitu2_match_list_item_pane

0x7d89,	// (0x00046782) list_vitu2_match_list_item_pane_t1

0xa237,	// (0x00048c30) bg_popup_sub_pane_cp21

0xb1fc,	// (0x00049bf5) grid_vitu2_dropdown_list_pane

0x7d97,	// (0x00046790) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7d97,	// (0x00046790) cell_vitu2_dropdown_list_char_pane

0x7dbc,	// (0x000467b5) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7dbc,	// (0x000467b5) cell_vitu2_dropdown_list_ctrl_pane

0xda58,	// (0x0004c451) cell_vitu2_dropdown_list_char_pane_g1

0xda61,	// (0x0004c45a) cell_vitu2_dropdown_list_char_pane_g2

0xda6a,	// (0x0004c463) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f3,	// (0x0004e3ec) cell_vitu2_dropdown_list_char_pane_g

0x7dea,	// (0x000467e3) cell_vitu2_dropdown_list_char_pane_t1

0x7df8,	// (0x000467f1) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7df8,	// (0x000467f1) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7e08,	// (0x00046801) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7e08,	// (0x00046801) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7e19,	// (0x00046812) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7e19,	// (0x00046812) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7e29,	// (0x00046822) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7e29,	// (0x00046822) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd068,	// (0x0004ba61) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd068,	// (0x0004ba61) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9fa,	// (0x0004e3f3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9fa,	// (0x0004e3f3) cell_vitu2_dropdown_list_ctrl_pane_g

0x7e42,	// (0x0004683b) aid_size_cell_gallery2_ParamLimits

0x7e42,	// (0x0004683b) aid_size_cell_gallery2

0x7e5c,	// (0x00046855) grid_gallery2_pane_ParamLimits

0x7e5c,	// (0x00046855) grid_gallery2_pane

0x7e73,	// (0x0004686c) scroll_pane_cp029_ParamLimits

0x7e73,	// (0x0004686c) scroll_pane_cp029

0x7e83,	// (0x0004687c) cell_gallery2_pane_ParamLimits

0x7e83,	// (0x0004687c) cell_gallery2_pane

0xda73,	// (0x0004c46c) cell_gallery2_pane_g2

0x7eda,	// (0x000468d3) cell_gallery2_pane_g3

0xda7b,	// (0x0004c474) cell_gallery2_pane_g4

0xda83,	// (0x0004c47c) cell_gallery2_pane_g5

0xab68,	// (0x00049561) grid_highlight_pane_cp10

0x7542,	// (0x00045f3b) popup_vitu2_match_list_window_ParamLimits

0x7556,	// (0x00045f4f) popup_vitu2_query_window_ParamLimits

0x7556,	// (0x00045f4f) popup_vitu2_query_window

0xa237,	// (0x00048c30) bg_vitu2_candi_button_pane

0xda58,	// (0x0004c451) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xda61,	// (0x0004c45a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xda6a,	// (0x0004c463) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0f17,	// (0x0003f910) bg_button_pane_cp015

0x7ee2,	// (0x000468db) bg_button_pane_cp016

0x7ef5,	// (0x000468ee) bg_button_pane_cp017

0xc9f5,	// (0x0004b3ee) bg_popup_sub_pane_cp22

0xda8b,	// (0x0004c484) popup_vitu2_query_window_g1

0x0f4a,	// (0x0003f943) popup_vitu2_query_window_g2

0x0002,

0xfa05,	// (0x0004e3fe) popup_vitu2_query_window_g

0x0f67,	// (0x0003f960) popup_vitu2_query_window_t1_ParamLimits

0x0f67,	// (0x0003f960) popup_vitu2_query_window_t1

0x0f9a,	// (0x0003f993) popup_vitu2_query_window_t2_ParamLimits

0x0f9a,	// (0x0003f993) popup_vitu2_query_window_t2

0x0fac,	// (0x0003f9a5) popup_vitu2_query_window_t3_ParamLimits

0x0fac,	// (0x0003f9a5) popup_vitu2_query_window_t3

0x7f19,	// (0x00046912) popup_vitu2_query_window_t4_ParamLimits

0x7f19,	// (0x00046912) popup_vitu2_query_window_t4

0x7f3c,	// (0x00046935) popup_vitu2_query_window_t5_ParamLimits

0x7f3c,	// (0x00046935) popup_vitu2_query_window_t5

0x0006,

0xfa0c,	// (0x0004e405) popup_vitu2_query_window_t_ParamLimits

0xfa0c,	// (0x0004e405) popup_vitu2_query_window_t

0xd923,	// (0x0004c31c) main_cset_text_pane

0x792f,	// (0x00046328) aid_area_touch_slider_ParamLimits

0x794b,	// (0x00046344) cset_slider_pane_ParamLimits

0x7975,	// (0x0004636e) main_cset_slider_pane_g1_ParamLimits

0x798a,	// (0x00046383) main_cset_slider_pane_g2_ParamLimits

0xd944,	// (0x0004c33d) main_cset_slider_pane_g3_ParamLimits

0xd944,	// (0x0004c33d) main_cset_slider_pane_g3

0x799f,	// (0x00046398) main_cset_slider_pane_g4_ParamLimits

0x799f,	// (0x00046398) main_cset_slider_pane_g4

0x79ae,	// (0x000463a7) main_cset_slider_pane_g5_ParamLimits

0x79ae,	// (0x000463a7) main_cset_slider_pane_g5

0x79ba,	// (0x000463b3) main_cset_slider_pane_g6_ParamLimits

0x79ba,	// (0x000463b3) main_cset_slider_pane_g6

0xf95f,	// (0x0004e358) main_cset_slider_pane_g_ParamLimits

0xd974,	// (0x0004c36d) main_cset_slider_pane_t1_ParamLimits

0x7a46,	// (0x0004643f) main_cset_slider_pane_t2_ParamLimits

0x7a60,	// (0x00046459) main_cset_slider_pane_t3_ParamLimits

0x7a7a,	// (0x00046473) main_cset_slider_pane_t4_ParamLimits

0x7a94,	// (0x0004648d) main_cset_slider_pane_t5_ParamLimits

0x7aae,	// (0x000464a7) main_cset_slider_pane_t6_ParamLimits

0x7ac3,	// (0x000464bc) main_cset_slider_pane_t7_ParamLimits

0x7aed,	// (0x000464e6) main_cset_slider_pane_t8_ParamLimits

0x7aed,	// (0x000464e6) main_cset_slider_pane_t8

0x7b15,	// (0x0004650e) main_cset_slider_pane_t9_ParamLimits

0x7b15,	// (0x0004650e) main_cset_slider_pane_t9

0x7b3d,	// (0x00046536) main_cset_slider_pane_t10_ParamLimits

0x7b3d,	// (0x00046536) main_cset_slider_pane_t10

0x7b65,	// (0x0004655e) main_cset_slider_pane_t11_ParamLimits

0x7b65,	// (0x0004655e) main_cset_slider_pane_t11

0x7b8d,	// (0x00046586) main_cset_slider_pane_t12_ParamLimits

0x7b8d,	// (0x00046586) main_cset_slider_pane_t12

0x7baa,	// (0x000465a3) main_cset_slider_pane_t13_ParamLimits

0x7baa,	// (0x000465a3) main_cset_slider_pane_t13

0xf984,	// (0x0004e37d) main_cset_slider_pane_t_ParamLimits

0xa237,	// (0x00048c30) bg_popup_sub_pane_cp011

0xda97,	// (0x0004c490) main_cset_text_pane_g1

0xda9f,	// (0x0004c498) main_cset_text_pane_t1

0xdaad,	// (0x0004c4a6) main_cset_text_pane_t2

0xdabb,	// (0x0004c4b4) main_cset_text_pane_t3

0xdac9,	// (0x0004c4c2) main_cset_text_pane_t4

0xdad7,	// (0x0004c4d0) main_cset_text_pane_t5

0xdae5,	// (0x0004c4de) main_cset_text_pane_t6

0xdaf3,	// (0x0004c4ec) main_cset_text_pane_t7

0x0006,

0xfa1b,	// (0x0004e414) main_cset_text_pane_t

0xa237,	// (0x00048c30) main_cam4_burst_pane

0xa237,	// (0x00048c30) main_cam5_pane

0x7878,	// (0x00046271) bg_button_pane_cp019

0x7881,	// (0x0004627a) bg_button_pane_cp020

0xd950,	// (0x0004c349) main_cset_slider_pane_g7_ParamLimits

0xd950,	// (0x0004c349) main_cset_slider_pane_g7

0xd95c,	// (0x0004c355) main_cset_slider_pane_g8_ParamLimits

0xd95c,	// (0x0004c355) main_cset_slider_pane_g8

0x79ce,	// (0x000463c7) main_cset_slider_pane_g9_ParamLimits

0x79ce,	// (0x000463c7) main_cset_slider_pane_g9

0x79da,	// (0x000463d3) main_cset_slider_pane_g10_ParamLimits

0x79da,	// (0x000463d3) main_cset_slider_pane_g10

0x79e6,	// (0x000463df) main_cset_slider_pane_g11_ParamLimits

0x79e6,	// (0x000463df) main_cset_slider_pane_g11

0x79f2,	// (0x000463eb) main_cset_slider_pane_g12_ParamLimits

0x79f2,	// (0x000463eb) main_cset_slider_pane_g12

0x79fe,	// (0x000463f7) main_cset_slider_pane_g13_ParamLimits

0x79fe,	// (0x000463f7) main_cset_slider_pane_g13

0x7a0a,	// (0x00046403) main_cset_slider_pane_g14_ParamLimits

0x7a0a,	// (0x00046403) main_cset_slider_pane_g14

0x7a16,	// (0x0004640f) main_cset_slider_pane_g15_ParamLimits

0x7a16,	// (0x0004640f) main_cset_slider_pane_g15

0xd9a2,	// (0x0004c39b) main_cset_slider_pane_t14_ParamLimits

0xd9a2,	// (0x0004c39b) main_cset_slider_pane_t14

0xd9db,	// (0x0004c3d4) main_cset_slider_pane_t15_ParamLimits

0xd9db,	// (0x0004c3d4) main_cset_slider_pane_t15

0x7f5f,	// (0x00046958) aid_cam4_burst_size_cell_ParamLimits

0x7f5f,	// (0x00046958) aid_cam4_burst_size_cell

0x7f7b,	// (0x00046974) grid_cam4_burst_pane_ParamLimits

0x7f7b,	// (0x00046974) grid_cam4_burst_pane

0x7fad,	// (0x000469a6) linegrid_cam4_burst_pane_ParamLimits

0x7fad,	// (0x000469a6) linegrid_cam4_burst_pane

0x7fcb,	// (0x000469c4) scroll_pane_cp30_ParamLimits

0x7fcb,	// (0x000469c4) scroll_pane_cp30

0x7fd7,	// (0x000469d0) cell_cam4_burst_pane_ParamLimits

0x7fd7,	// (0x000469d0) cell_cam4_burst_pane

0xdb01,	// (0x0004c4fa) linegrid_cam4_burst_pane_g1_ParamLimits

0xdb01,	// (0x0004c4fa) linegrid_cam4_burst_pane_g1

0x8017,	// (0x00046a10) linegrid_cam4_burst_pane_g2_ParamLimits

0x8017,	// (0x00046a10) linegrid_cam4_burst_pane_g2

0xdb0e,	// (0x0004c507) linegrid_cam4_burst_pane_g3_ParamLimits

0xdb0e,	// (0x0004c507) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2a,	// (0x0004e423) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2a,	// (0x0004e423) linegrid_cam4_burst_pane_g

0x8028,	// (0x00046a21) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8028,	// (0x00046a21) linegrid_cam4_burst_pane_g3_copy1

0xdb1b,	// (0x0004c514) linegrid_cam4_burst_pane_g4_ParamLimits

0xdb1b,	// (0x0004c514) linegrid_cam4_burst_pane_g4

0x8042,	// (0x00046a3b) linegrid_cam4_burst_pane_g5_ParamLimits

0x8042,	// (0x00046a3b) linegrid_cam4_burst_pane_g5

0x8053,	// (0x00046a4c) linegrid_cam4_burst_pane_g6_ParamLimits

0x8053,	// (0x00046a4c) linegrid_cam4_burst_pane_g6

0xdb28,	// (0x0004c521) linegrid_cam4_burst_pane_g7_ParamLimits

0xdb28,	// (0x0004c521) linegrid_cam4_burst_pane_g7

0x806a,	// (0x00046a63) cell_cam4_burst_pane_g1

0xdb41,	// (0x0004c53a) main_cam5_pane_t1_ParamLimits

0xdb41,	// (0x0004c53a) main_cam5_pane_t1

0xdb53,	// (0x0004c54c) main_cam5_pane_t2_ParamLimits

0xdb53,	// (0x0004c54c) main_cam5_pane_t2

0xdb65,	// (0x0004c55e) main_cam5_pane_t3_ParamLimits

0xdb65,	// (0x0004c55e) main_cam5_pane_t3

0xdb77,	// (0x0004c570) main_cam5_pane_t4_ParamLimits

0xdb77,	// (0x0004c570) main_cam5_pane_t4

0xdb8f,	// (0x0004c588) main_cam5_pane_t5_ParamLimits

0xdb8f,	// (0x0004c588) main_cam5_pane_t5

0xdba3,	// (0x0004c59c) main_cam5_pane_t6_ParamLimits

0xdba3,	// (0x0004c59c) main_cam5_pane_t6

0xdbb7,	// (0x0004c5b0) main_cam5_pane_t7_ParamLimits

0xdbb7,	// (0x0004c5b0) main_cam5_pane_t7

0xdbc9,	// (0x0004c5c2) main_cam5_pane_t8_ParamLimits

0xdbc9,	// (0x0004c5c2) main_cam5_pane_t8

0xdbe7,	// (0x0004c5e0) main_cam5_pane_t9_ParamLimits

0xdbe7,	// (0x0004c5e0) main_cam5_pane_t9

0xdbf9,	// (0x0004c5f2) main_cam5_pane_t10_ParamLimits

0xdbf9,	// (0x0004c5f2) main_cam5_pane_t10

0xdc0b,	// (0x0004c604) main_cam5_pane_t11_ParamLimits

0xdc0b,	// (0x0004c604) main_cam5_pane_t11

0xdc1f,	// (0x0004c618) main_cam5_pane_t12_ParamLimits

0xdc1f,	// (0x0004c618) main_cam5_pane_t12

0xdc36,	// (0x0004c62f) main_cam5_pane_t13_ParamLimits

0xdc36,	// (0x0004c62f) main_cam5_pane_t13

0x000c,

0xfa36,	// (0x0004e42f) main_cam5_pane_t_ParamLimits

0xfa36,	// (0x0004e42f) main_cam5_pane_t

0x2055,	// (0x00040a4e) popup_scut_keymap_window_ParamLimits

0x2055,	// (0x00040a4e) popup_scut_keymap_window

0x807d,	// (0x00046a76) aid_size_cell_brow_shortcut

0xab68,	// (0x00049561) bg_popup_window_pane_cp010

0x8089,	// (0x00046a82) grid_scut_pane

0x8095,	// (0x00046a8e) cell_scut_pane_ParamLimits

0x8095,	// (0x00046a8e) cell_scut_pane

0x80b0,	// (0x00046aa9) cell_scut_pane_g1

0xdc59,	// (0x0004c652) cell_scut_pane_t1

0xdc68,	// (0x0004c661) cell_scut_pane_t2

0x80b9,	// (0x00046ab2) cell_scut_pane_t3

0x0002,

0xfa51,	// (0x0004e44a) cell_scut_pane_t

0x5f52,	// (0x0004494b) main_mup3_pane_g8_ParamLimits

0x5f52,	// (0x0004494b) main_mup3_pane_g8

0x747a,	// (0x00045e73) area_vitu2_query_pane_ParamLimits

0x747a,	// (0x00045e73) area_vitu2_query_pane

0x0f29,	// (0x0003f922) input_focus_pane_cp08

0xdc77,	// (0x0004c670) area_vitu2_query_pane_g1

0x102a,	// (0x0003fa23) area_vitu2_query_pane_g2

0x0001,

0xfa58,	// (0x0004e451) area_vitu2_query_pane_g

0x80c7,	// (0x00046ac0) area_vitu2_query_pane_t1_ParamLimits

0x80c7,	// (0x00046ac0) area_vitu2_query_pane_t1

0x80db,	// (0x00046ad4) area_vitu2_query_pane_t2_ParamLimits

0x80db,	// (0x00046ad4) area_vitu2_query_pane_t2

0x103b,	// (0x0003fa34) area_vitu2_query_pane_t3_ParamLimits

0x103b,	// (0x0003fa34) area_vitu2_query_pane_t3

0x1063,	// (0x0003fa5c) area_vitu2_query_pane_t4_ParamLimits

0x1063,	// (0x0003fa5c) area_vitu2_query_pane_t4

0x108b,	// (0x0003fa84) area_vitu2_query_pane_t5_ParamLimits

0x108b,	// (0x0003fa84) area_vitu2_query_pane_t5

0x10b3,	// (0x0003faac) area_vitu2_query_pane_t6_ParamLimits

0x10b3,	// (0x0003faac) area_vitu2_query_pane_t6

0x0006,

0xfa5d,	// (0x0004e456) area_vitu2_query_pane_t_ParamLimits

0xfa5d,	// (0x0004e456) area_vitu2_query_pane_t

0x80ef,	// (0x00046ae8) bg_button_pane_cp018

0x80fd,	// (0x00046af6) bg_button_pane_cp021

0x10ff,	// (0x0003faf8) bg_button_pane_cp022

0x1110,	// (0x0003fb09) input_focus_pane_cp09

0xb3f7,	// (0x00049df0) aid_size_touch_mv_arrow_left

0xb430,	// (0x00049e29) aid_size_touch_mv_arrow_right

0x7a2e,	// (0x00046427) main_cset_slider_pane_g16_ParamLimits

0x7a2e,	// (0x00046427) main_cset_slider_pane_g16

0x7a3a,	// (0x00046433) main_cset_slider_pane_g17_ParamLimits

0x7a3a,	// (0x00046433) main_cset_slider_pane_g17

0x806a,	// (0x00046a63) cell_cam4_burst_pane_g1_ParamLimits

0xa237,	// (0x00048c30) compa_mode_pane

0x7c3c,	// (0x00046635) popup_vtel_slider_window_g3_ParamLimits

0x7c3c,	// (0x00046635) popup_vtel_slider_window_g3

0x7c50,	// (0x00046649) popup_vtel_slider_window_g4_ParamLimits

0x7c50,	// (0x00046649) popup_vtel_slider_window_g4

0x7c64,	// (0x0004665d) popup_vtel_slider_window_t1_ParamLimits

0x7c64,	// (0x0004665d) popup_vtel_slider_window_t1

0xa237,	// (0x00048c30) main_cl_pane

0x521e,	// (0x00043c17) popup_imed_adjust2_window_ParamLimits

0xc9f5,	// (0x0004b3ee) bg_tb_trans_pane_cp05_ParamLimits

0xd331,	// (0x0004bd2a) popup_imed_adjust2_window_g1_ParamLimits

0xd340,	// (0x0004bd39) popup_imed_adjust2_window_g2_ParamLimits

0xd340,	// (0x0004bd39) popup_imed_adjust2_window_g2

0xd34c,	// (0x0004bd45) popup_imed_adjust2_window_g3_ParamLimits

0xd34c,	// (0x0004bd45) popup_imed_adjust2_window_g3

0x0002,

0xf7c4,	// (0x0004e1bd) popup_imed_adjust2_window_g_ParamLimits

0xf7c4,	// (0x0004e1bd) popup_imed_adjust2_window_g

0xd358,	// (0x0004bd51) popup_imed_adjust2_window_t1_ParamLimits

0xd370,	// (0x0004bd69) slider_imed_adjust_pane_ParamLimits

0xd384,	// (0x0004bd7d) slider_imed_adjust_pane_g1_ParamLimits

0xd394,	// (0x0004bd8d) slider_imed_adjust_pane_g2_ParamLimits

0xd3a4,	// (0x0004bd9d) slider_imed_adjust_pane_g3_ParamLimits

0xd3b5,	// (0x0004bdae) slider_imed_adjust_pane_g4_ParamLimits

0xf7cb,	// (0x0004e1c4) slider_imed_adjust_pane_g_ParamLimits

0x71bb,	// (0x00045bb4) aid_touch_area_cam4_ParamLimits

0x71bb,	// (0x00045bb4) aid_touch_area_cam4

0x71cb,	// (0x00045bc4) battery_pane_cp01

0x7252,	// (0x00045c4b) main_camera4_pane_g6_ParamLimits

0x7252,	// (0x00045c4b) main_camera4_pane_g6

0x7270,	// (0x00045c69) main_camera4_pane_t2_ParamLimits

0x7270,	// (0x00045c69) main_camera4_pane_t2

0x0001,

0xf8d2,	// (0x0004e2cb) main_camera4_pane_t_ParamLimits

0xf8d2,	// (0x0004e2cb) main_camera4_pane_t

0x72f3,	// (0x00045cec) aid_touch_area_vid4_ParamLimits

0x72f3,	// (0x00045cec) aid_touch_area_vid4

0x7333,	// (0x00045d2c) main_video4_pane_g5_ParamLimits

0x7333,	// (0x00045d2c) main_video4_pane_g5

0x7359,	// (0x00045d52) vid4_progress_pane_ParamLimits

0x7359,	// (0x00045d52) vid4_progress_pane

0xd968,	// (0x0004c361) main_cset_slider_pane_g18_ParamLimits

0xd968,	// (0x0004c361) main_cset_slider_pane_g18

0xdb35,	// (0x0004c52e) cell_cam4_burst_pane_g2_ParamLimits

0xdb35,	// (0x0004c52e) cell_cam4_burst_pane_g2

0x0001,

0xfa31,	// (0x0004e42a) cell_cam4_burst_pane_g_ParamLimits

0xfa31,	// (0x0004e42a) cell_cam4_burst_pane_g

0x8109,	// (0x00046b02) bg_cl_pane_ParamLimits

0x8109,	// (0x00046b02) bg_cl_pane

0x8115,	// (0x00046b0e) cl_header_pane_ParamLimits

0x8115,	// (0x00046b0e) cl_header_pane

0x8121,	// (0x00046b1a) cl_listscroll_pane_ParamLimits

0x8121,	// (0x00046b1a) cl_listscroll_pane

0xdc83,	// (0x0004c67c) bg_cl_pane_g1

0xdc8b,	// (0x0004c684) bg_cl_pane_g2

0xdc93,	// (0x0004c68c) bg_cl_pane_g3

0xdc9b,	// (0x0004c694) bg_cl_pane_g4

0xdca3,	// (0x0004c69c) bg_cl_pane_g5

0xdcab,	// (0x0004c6a4) bg_cl_pane_g6

0xdcb3,	// (0x0004c6ac) bg_cl_pane_g7

0xdcbb,	// (0x0004c6b4) bg_cl_pane_g8

0xdcc3,	// (0x0004c6bc) bg_cl_pane_g9

0x0008,

0xfa6c,	// (0x0004e465) bg_cl_pane_g

0x812d,	// (0x00046b26) aid_height_cl_leading_ParamLimits

0x812d,	// (0x00046b26) aid_height_cl_leading

0x8139,	// (0x00046b32) aid_height_cl_text_ParamLimits

0x8139,	// (0x00046b32) aid_height_cl_text

0xd6e8,	// (0x0004c0e1) bg_cl_header_pane_ParamLimits

0xd6e8,	// (0x0004c0e1) bg_cl_header_pane

0x8151,	// (0x00046b4a) cl_header_pane_g1_ParamLimits

0x8151,	// (0x00046b4a) cl_header_pane_g1

0x815e,	// (0x00046b57) cl_header_pane_t1_ParamLimits

0x815e,	// (0x00046b57) cl_header_pane_t1

0xdccb,	// (0x0004c6c4) cl_list_pane

0xd93b,	// (0x0004c334) hc_scroll_pane_cp01

0xada5,	// (0x0004979e) bg_cl_header_pane_g1

0xd81d,	// (0x0004c216) bg_cl_header_pane_g2

0xadc5,	// (0x000497be) bg_cl_header_pane_g3

0xd82d,	// (0x0004c226) bg_cl_header_pane_g4

0xd825,	// (0x0004c21e) bg_cl_header_pane_g5

0xda50,	// (0x0004c449) bg_cl_header_pane_g6

0xd845,	// (0x0004c23e) bg_cl_header_pane_g7

0xd84d,	// (0x0004c246) bg_cl_header_pane_g8

0xd83d,	// (0x0004c236) bg_cl_header_pane_g9

0x0008,

0xfa7f,	// (0x0004e478) bg_cl_header_pane_g

0x8170,	// (0x00046b69) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8170,	// (0x00046b69) hc_cl_list_double_graphic_heading_pane

0x8180,	// (0x00046b79) hc_cl_list_single_graphic_pane_ParamLimits

0x8180,	// (0x00046b79) hc_cl_list_single_graphic_pane

0x8192,	// (0x00046b8b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8192,	// (0x00046b8b) hc_cl_list_single_graphic_pane_g1

0x819e,	// (0x00046b97) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x819e,	// (0x00046b97) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa92,	// (0x0004e48b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa92,	// (0x0004e48b) hc_cl_list_single_graphic_pane_g

0x81b2,	// (0x00046bab) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x81b2,	// (0x00046bab) hc_cl_list_single_graphic_pane_t1

0x8192,	// (0x00046b8b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8192,	// (0x00046b8b) hc_cl_list_double_graphic_heading_pane_g1

0x81c7,	// (0x00046bc0) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x81c7,	// (0x00046bc0) hc_cl_list_double_graphic_heading_pane_g2

0x81db,	// (0x00046bd4) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x81db,	// (0x00046bd4) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa97,	// (0x0004e490) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa97,	// (0x0004e490) hc_cl_list_double_graphic_heading_pane_g

0x81ef,	// (0x00046be8) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x81ef,	// (0x00046be8) hc_cl_list_double_graphic_heading_pane_t1

0x8204,	// (0x00046bfd) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8204,	// (0x00046bfd) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa9e,	// (0x0004e497) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa9e,	// (0x0004e497) hc_cl_list_double_graphic_heading_pane_t

0x8221,	// (0x00046c1a) vid4_progress_pane_g1

0x8231,	// (0x00046c2a) vid4_progress_pane_g2

0x8241,	// (0x00046c3a) vid4_progress_pane_g3

0x72c1,	// (0x00045cba) vid4_progress_pane_g4

0x0004,

0xfaa3,	// (0x0004e49c) vid4_progress_pane_g

0x8253,	// (0x00046c4c) vid4_progress_pane_t1

0x8269,	// (0x00046c62) vid4_progress_pane_t2

0x0002,

0xfaae,	// (0x0004e4a7) vid4_progress_pane_t

0x8293,	// (0x00046c8c) wait_bar_pane_cp07

0xcc1a,	// (0x0004b613) blid_firmament_pane_ParamLimits

0xcc5d,	// (0x0004b656) popup_blid_sat_info2_window_g1

0xcc81,	// (0x0004b67a) popup_blid_sat_info2_window_t3

0xcc8f,	// (0x0004b688) popup_blid_sat_info2_window_t4

0xcc9d,	// (0x0004b696) popup_blid_sat_info2_window_t5

0xccab,	// (0x0004b6a4) popup_blid_sat_info2_window_t6

0xccbb,	// (0x0004b6b4) popup_blid_sat_info2_window_t7

0xccc9,	// (0x0004b6c2) popup_blid_sat_info2_window_t8

0xccd7,	// (0x0004b6d0) popup_blid_sat_info2_window_t9

0xcce5,	// (0x0004b6de) popup_blid_sat_info2_window_t10

0xcdad,	// (0x0004b7a6) aid_firma_cardinal_ParamLimits

0xcdc1,	// (0x0004b7ba) blid_firmament_pane_t1_ParamLimits

0xcdd8,	// (0x0004b7d1) blid_firmament_pane_t2_ParamLimits

0xcdef,	// (0x0004b7e8) blid_firmament_pane_t3_ParamLimits

0xce06,	// (0x0004b7ff) blid_firmament_pane_t4_ParamLimits

0xf6b8,	// (0x0004e0b1) blid_firmament_pane_t_ParamLimits

0xce31,	// (0x0004b82a) blid_sat_info_pane_ParamLimits

0xbcb3,	// (0x0004a6ac) main_cam_set_pane_ParamLimits

0x670e,	// (0x00045107) aid_size_cell_colour_35_ParamLimits

0x6728,	// (0x00045121) aid_size_cell_colour_112_ParamLimits

0x673f,	// (0x00045138) aid_size_cell_effect_ParamLimits

0xbcb3,	// (0x0004a6ac) bg_tb_trans_pane_cp02_ParamLimits

0xbcc1,	// (0x0004a6ba) heading_imed_pane_ParamLimits

0x6759,	// (0x00045152) listscroll_imed_pane_ParamLimits

0xc01d,	// (0x0004aa16) popup_call2_audio_first_window_g5_ParamLimits

0xc01d,	// (0x0004aa16) popup_call2_audio_first_window_g5

0x6ea5,	// (0x0004589e) aid_size_touch_image3_arrow_left_ParamLimits

0x6ea5,	// (0x0004589e) aid_size_touch_image3_arrow_left

0x6ebb,	// (0x000458b4) aid_size_touch_image3_arrow_right_ParamLimits

0x6ebb,	// (0x000458b4) aid_size_touch_image3_arrow_right

0x827e,	// (0x00046c77) vid4_progress_pane_t3

0x69fd,	// (0x000453f6) main_hwr_training_symbol_option_pane_ParamLimits

0x69fd,	// (0x000453f6) main_hwr_training_symbol_option_pane

0xd62a,	// (0x0004c023) popup_hwr_training_preview_window_ParamLimits

0xd62a,	// (0x0004c023) popup_hwr_training_preview_window

0x6a5e,	// (0x00045457) hwr_training_navi_pane_g5_ParamLimits

0x6a5e,	// (0x00045457) hwr_training_navi_pane_g5

0xd80b,	// (0x0004c204) popup_char_count_window

0xd6e8,	// (0x0004c0e1) bg_popup_sub_pane_cp20_ParamLimits

0x7d5f,	// (0x00046758) list_vitu2_match_list_pane_ParamLimits

0x7d6b,	// (0x00046764) vitu2_page_scroll_pane_ParamLimits

0x7d6b,	// (0x00046764) vitu2_page_scroll_pane

0xdcd4,	// (0x0004c6cd) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdcd4,	// (0x0004c6cd) list_single_hwr_training_symbol_option_pane

0xdce7,	// (0x0004c6e0) list_single_hwr_training_symbol_option_pane_g1

0xdcef,	// (0x0004c6e8) list_single_hwr_training_symbol_option_pane_t1

0xdcfd,	// (0x0004c6f6) bg_button_pane_cp023

0xdd06,	// (0x0004c6ff) bg_button_pane_cp024

0x82ca,	// (0x00046cc3) vitu2_page_scroll_pane_g1

0x82d2,	// (0x00046ccb) vitu2_page_scroll_pane_g2

0x0001,

0xfab5,	// (0x0004e4ae) vitu2_page_scroll_pane_g

0x82dc,	// (0x00046cd5) vitu2_page_scroll_pane_t1

0xd6f6,	// (0x0004c0ef) popup_char_count_window_g1

0xdd39,	// (0x0004c732) popup_char_count_window_g2

0xd6ff,	// (0x0004c0f8) popup_char_count_window_g3

0x0002,

0xfaba,	// (0x0004e4b3) popup_char_count_window_g

0xdd42,	// (0x0004c73b) popup_char_count_window_t1

0xa237,	// (0x00048c30) main_vded2_pane

0xd31d,	// (0x0004bd16) aid_size_cell_imed_line

0xd327,	// (0x0004bd20) grid_imed_line_width_pane

0x73cd,	// (0x00045dc6) vid4_indicators_pane_g4

0xdd50,	// (0x0004c749) cell_imed_line_width_pane_ParamLimits

0xdd50,	// (0x0004c749) cell_imed_line_width_pane

0xdd66,	// (0x0004c75f) cell_imed_line_width_pane_g1

0xce1d,	// (0x0004b816) cell_imed_line_width_pane_g2

0x0001,

0xfac1,	// (0x0004e4ba) cell_imed_line_width_pane_g

0x82eb,	// (0x00046ce4) main_vded2_pane_g1_ParamLimits

0x82eb,	// (0x00046ce4) main_vded2_pane_g1

0x82fa,	// (0x00046cf3) main_vded2_pane_g2_ParamLimits

0x82fa,	// (0x00046cf3) main_vded2_pane_g2

0x0001,

0xfac6,	// (0x0004e4bf) main_vded2_pane_g_ParamLimits

0xfac6,	// (0x0004e4bf) main_vded2_pane_g

0x8308,	// (0x00046d01) vded2_slider_pane_ParamLimits

0x8308,	// (0x00046d01) vded2_slider_pane

0x8315,	// (0x00046d0e) aid_size_touch_vded2_end

0x831f,	// (0x00046d18) aid_size_touch_vded2_playhead

0xdd6f,	// (0x0004c768) aid_size_touch_vded2_start

0xdd77,	// (0x0004c770) vded2_slider_bg_pane

0xdd80,	// (0x0004c779) vded2_slider_pane_g1

0xdd89,	// (0x0004c782) vded2_slider_pane_g2

0x8327,	// (0x00046d20) vded2_slider_pane_g3

0x0002,

0xfacb,	// (0x0004e4c4) vded2_slider_pane_g

0xd708,	// (0x0004c101) vded2_slider_bg_pane_g1

0xd711,	// (0x0004c10a) vded2_slider_bg_pane_g2

0xd71a,	// (0x0004c113) vded2_slider_bg_pane_g3

0x0002,

0xf788,	// (0x0004e181) vded2_slider_bg_pane_g

0x4a60,	// (0x00043459) aid_postcard_touch_down_pane_ParamLimits

0x4a60,	// (0x00043459) aid_postcard_touch_down_pane

0x4a70,	// (0x00043469) aid_postcard_touch_up_pane_ParamLimits

0x4a70,	// (0x00043469) aid_postcard_touch_up_pane

0xa237,	// (0x00048c30) main_blid2_pane

0x519d,	// (0x00043b96) popup_blid2_search_window

0xa237,	// (0x00048c30) blid2_gps_pane

0xa237,	// (0x00048c30) blid2_navig_pane

0xa237,	// (0x00048c30) blid2_search_pane

0xa237,	// (0x00048c30) blid2_tripm_pane

0x8330,	// (0x00046d29) blid2_search_pane_g1_ParamLimits

0x8330,	// (0x00046d29) blid2_search_pane_g1

0x833c,	// (0x00046d35) blid2_search_pane_t1_ParamLimits

0x833c,	// (0x00046d35) blid2_search_pane_t1

0x834e,	// (0x00046d47) aid_size_cell_blid2_gps_ParamLimits

0x834e,	// (0x00046d47) aid_size_cell_blid2_gps

0x835e,	// (0x00046d57) blid2_gps_pane_g1_ParamLimits

0x835e,	// (0x00046d57) blid2_gps_pane_g1

0x836a,	// (0x00046d63) grid_blid2_satellite_pane_ParamLimits

0x836a,	// (0x00046d63) grid_blid2_satellite_pane

0x8378,	// (0x00046d71) blid2_navig_pane_g1_ParamLimits

0x8378,	// (0x00046d71) blid2_navig_pane_g1

0x8384,	// (0x00046d7d) blid2_navig_pane_t1_ParamLimits

0x8384,	// (0x00046d7d) blid2_navig_pane_t1

0x8396,	// (0x00046d8f) blid2_navig_pane_t2_ParamLimits

0x8396,	// (0x00046d8f) blid2_navig_pane_t2

0x0001,

0xfad2,	// (0x0004e4cb) blid2_navig_pane_t_ParamLimits

0xfad2,	// (0x0004e4cb) blid2_navig_pane_t

0x83a8,	// (0x00046da1) blid2_navig_ring_pane_ParamLimits

0x83a8,	// (0x00046da1) blid2_navig_ring_pane

0x83b8,	// (0x00046db1) blid2_speed_pane_ParamLimits

0x83b8,	// (0x00046db1) blid2_speed_pane

0x83c4,	// (0x00046dbd) blid2_tripm_pane_g1_ParamLimits

0x83c4,	// (0x00046dbd) blid2_tripm_pane_g1

0x83d4,	// (0x00046dcd) blid2_tripm_pane_g2_ParamLimits

0x83d4,	// (0x00046dcd) blid2_tripm_pane_g2

0x83e0,	// (0x00046dd9) blid2_tripm_pane_g3_ParamLimits

0x83e0,	// (0x00046dd9) blid2_tripm_pane_g3

0x83ec,	// (0x00046de5) blid2_tripm_pane_g4_ParamLimits

0x83ec,	// (0x00046de5) blid2_tripm_pane_g4

0x83f8,	// (0x00046df1) blid2_tripm_pane_g5_ParamLimits

0x83f8,	// (0x00046df1) blid2_tripm_pane_g5

0x0005,

0xfad7,	// (0x0004e4d0) blid2_tripm_pane_g_ParamLimits

0xfad7,	// (0x0004e4d0) blid2_tripm_pane_g

0x8414,	// (0x00046e0d) blid2_tripm_pane_t1_ParamLimits

0x8414,	// (0x00046e0d) blid2_tripm_pane_t1

0x8426,	// (0x00046e1f) blid2_tripm_pane_t2_ParamLimits

0x8426,	// (0x00046e1f) blid2_tripm_pane_t2

0x8438,	// (0x00046e31) blid2_tripm_pane_t3_ParamLimits

0x8438,	// (0x00046e31) blid2_tripm_pane_t3

0x0003,

0xfae4,	// (0x0004e4dd) blid2_tripm_pane_t_ParamLimits

0xfae4,	// (0x0004e4dd) blid2_tripm_pane_t

0x846a,	// (0x00046e63) cell_blid2_satellite_pane_ParamLimits

0x846a,	// (0x00046e63) cell_blid2_satellite_pane

0x8488,	// (0x00046e81) cell_blid2_satellite_pane_g1

0xdd91,	// (0x0004c78a) cell_blid2_satellite_pane_t1

0xce41,	// (0x0004b83a) blid2_speed_pane_g1

0xdd9f,	// (0x0004c798) blid2_speed_pane_t1

0xddad,	// (0x0004c7a6) blid2_speed_pane_t2

0x0001,

0xfaed,	// (0x0004e4e6) blid2_speed_pane_t

0xce41,	// (0x0004b83a) blid2_navig_ring_pane_g1

0x8491,	// (0x00046e8a) blid2_navig_ring_pane_g2

0x8499,	// (0x00046e92) blid2_navig_ring_pane_g3

0x84a1,	// (0x00046e9a) blid2_navig_ring_pane_g4

0x84a9,	// (0x00046ea2) blid2_navig_ring_pane_g5

0x0004,

0xfaf2,	// (0x0004e4eb) blid2_navig_ring_pane_g

0xa237,	// (0x00048c30) bg_popup_window_pane_cp011

0xddbb,	// (0x0004c7b4) popup_blid2_search_window_g1

0xddc3,	// (0x0004c7bc) popup_blid2_search_window_t1

0xddd1,	// (0x0004c7ca) popup_blid2_search_window_t2

0x0001,

0xfafd,	// (0x0004e4f6) popup_blid2_search_window_t

0xacb4,	// (0x000496ad) main_browser_pane_g1

0xa9a9,	// (0x000493a2) main_browser_pane_ParamLimits

0xbcb3,	// (0x0004a6ac) bg_button_pane_cp011_ParamLimits

0x763f,	// (0x00046038) cell_vitu2_function_pane_g1_ParamLimits

0xc9f5,	// (0x0004b3ee) bg_popup_sub_pane_cp22_ParamLimits

0x0f29,	// (0x0003f922) input_focus_pane_cp08_ParamLimits

0x7f08,	// (0x00046901) popup_vitu2_query_button_pane_ParamLimits

0x7f08,	// (0x00046901) popup_vitu2_query_button_pane

0x0f40,	// (0x0003f939) popup_vitu2_query_input_button_pane

0xda8b,	// (0x0004c484) popup_vitu2_query_window_g1_ParamLimits

0x0f4a,	// (0x0003f943) popup_vitu2_query_window_g2_ParamLimits

0xfa05,	// (0x0004e3fe) popup_vitu2_query_window_g_ParamLimits

0xa237,	// (0x00048c30) bg_button_pane_cp026

0x84b1,	// (0x00046eaa) popup_vitu2_query_input_button_pane_g1

0xa237,	// (0x00048c30) bg_button_pane_cp025

0xdddf,	// (0x0004c7d8) popup_vitu2_query_button_pane_t1

0x5c20,	// (0x00044619) main_mp3_pane_t6

0x5c30,	// (0x00044629) popup_slider_window_cp01

0x72a8,	// (0x00045ca1) cam4_battery_pane

0x7386,	// (0x00045d7f) cam4_battery_pane_cp02

0x8219,	// (0x00046c12) cam4_battery_pane_cp01

0x8219,	// (0x00046c12) cam4_battery_pane_cp03

0xce41,	// (0x0004b83a) cam4_battery_pane_g1

0xdded,	// (0x0004c7e6) cam4_battery_pane_g2

0x0001,

0xfb02,	// (0x0004e4fb) cam4_battery_pane_g

0xccf3,	// (0x0004b6ec) popup_blid_sat_info2_window_t11

0xb3f7,	// (0x00049df0) aid_size_touch_mv_arrow_left_ParamLimits

0xb430,	// (0x00049e29) aid_size_touch_mv_arrow_right_ParamLimits

0xb48e,	// (0x00049e87) navi_pane_g1_ParamLimits

0xb49a,	// (0x00049e93) navi_pane_g2_ParamLimits

0xb4c8,	// (0x00049ec1) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0004ddc3) navi_pane_g_ParamLimits

0x444d,	// (0x00042e46) navi_pane_mv_t1_ParamLimits

0x6765,	// (0x0004515e) grid_imed_effect_pane_ParamLimits

0x2faa,	// (0x000419a3) aid_placing_vt_slider_lsc

0xabff,	// (0x000495f8) aid_placing_vt_slider_prt

0xbcb3,	// (0x0004a6ac) bg_tb_trans_pane_cp01_ParamLimits

0xcf88,	// (0x0004b981) popup_image_details_window_g1_ParamLimits

0xcf9b,	// (0x0004b994) popup_image_details_window_g2_ParamLimits

0xcfb0,	// (0x0004b9a9) popup_image_details_window_g3_ParamLimits

0xcfb0,	// (0x0004b9a9) popup_image_details_window_g3

0xf6fd,	// (0x0004e0f6) popup_image_details_window_g_ParamLimits

0xcfc4,	// (0x0004b9bd) popup_image_details_window_t1_ParamLimits

0xcfd6,	// (0x0004b9cf) popup_image_details_window_t2_ParamLimits

0xcfef,	// (0x0004b9e8) popup_image_details_window_t3_ParamLimits

0xd003,	// (0x0004b9fc) popup_image_details_window_t4_ParamLimits

0xd01e,	// (0x0004ba17) popup_image_details_window_t5_ParamLimits

0xf704,	// (0x0004e0fd) popup_image_details_window_t_ParamLimits

0x8145,	// (0x00046b3e) cl_header_name_pane_ParamLimits

0x8145,	// (0x00046b3e) cl_header_name_pane

0x84b9,	// (0x00046eb2) cl_header_name_pane_t1_ParamLimits

0x84b9,	// (0x00046eb2) cl_header_name_pane_t1

0x84d0,	// (0x00046ec9) cl_header_name_pane_t2_ParamLimits

0x84d0,	// (0x00046ec9) cl_header_name_pane_t2

0x84fa,	// (0x00046ef3) cl_header_name_pane_t3_ParamLimits

0x84fa,	// (0x00046ef3) cl_header_name_pane_t3

0x0002,

0xfb07,	// (0x0004e500) cl_header_name_pane_t_ParamLimits

0xfb07,	// (0x0004e500) cl_header_name_pane_t

0xb557,	// (0x00049f50) navi_pane_mv_g2_ParamLimits

0xd7e5,	// (0x0004c1de) field_vitu2_entry_pane_g1_ParamLimits

0xd7f1,	// (0x0004c1ea) field_vitu2_entry_pane_g2_ParamLimits

0xd7fd,	// (0x0004c1f6) field_vitu2_entry_pane_g3_ParamLimits

0xd7fd,	// (0x0004c1f6) field_vitu2_entry_pane_g3

0xf904,	// (0x0004e2fd) field_vitu2_entry_pane_g_ParamLimits

0x75d3,	// (0x00045fcc) cell_vitu2_itu_pane_g1_ParamLimits

0x75e5,	// (0x00045fde) cell_vitu2_itu_pane_g2_ParamLimits

0x75e5,	// (0x00045fde) cell_vitu2_itu_pane_g2

0x0001,

0xf910,	// (0x0004e309) cell_vitu2_itu_pane_g_ParamLimits

0xf910,	// (0x0004e309) cell_vitu2_itu_pane_g

0xbcb3,	// (0x0004a6ac) bg_vkb2_func_pane_cp05_ParamLimits

0xbcb3,	// (0x0004a6ac) bg_vkb2_func_pane_cp05

0xbcb3,	// (0x0004a6ac) bg_vkb2_func_pane_cp03

0xbcb3,	// (0x0004a6ac) bg_vkb2_func_pane_cp04

0xbcb3,	// (0x0004a6ac) bg_vkb2_func_pane_cp10_ParamLimits

0xbcb3,	// (0x0004a6ac) bg_vkb2_func_pane_cp10

0x10ff,	// (0x0003faf8) bg_vkb2_func_pane_cp08

0x80ef,	// (0x00046ae8) bg_vkb2_func_pane_cp06

0x80fd,	// (0x00046af6) bg_vkb2_func_pane_cp07

0xdd0f,	// (0x0004c708) bg_vkb2_func_pane_cp11_ParamLimits

0xdd0f,	// (0x0004c708) bg_vkb2_func_pane_cp11

0xdd24,	// (0x0004c71d) bg_vkb2_func_pane_cp12_ParamLimits

0xdd24,	// (0x0004c71d) bg_vkb2_func_pane_cp12

0xa237,	// (0x00048c30) bg_vkb2_func_pane_cp09

0xd81d,	// (0x0004c216) bg_vkb2_func_pane_g1

0xadc5,	// (0x000497be) bg_vkb2_func_pane_g2

0xd825,	// (0x0004c21e) bg_vkb2_func_pane_g3

0xd82d,	// (0x0004c226) bg_vkb2_func_pane_g4

0xda50,	// (0x0004c449) bg_vkb2_func_pane_g5

0xd845,	// (0x0004c23e) bg_vkb2_func_pane_g6

0xd84d,	// (0x0004c246) bg_vkb2_func_pane_g7

0xd83d,	// (0x0004c236) bg_vkb2_func_pane_g8

0xada5,	// (0x0004979e) bg_vkb2_func_pane_g9

0x0008,

0xfb0e,	// (0x0004e507) bg_vkb2_func_pane_g

0x8406,	// (0x00046dff) blid2_tripm_pane_g6_ParamLimits

0x8406,	// (0x00046dff) blid2_tripm_pane_g6

0xd723,	// (0x0004c11c) mp4_progress_pane_g1

0x845e,	// (0x00046e57) blid2_tripm_values_pane_ParamLimits

0x845e,	// (0x00046e57) blid2_tripm_values_pane

0x851f,	// (0x00046f18) blid2_tripm_values_pane_t1

0x852d,	// (0x00046f26) blid2_tripm_values_pane_t2

0x853b,	// (0x00046f34) blid2_tripm_values_pane_t3

0x8549,	// (0x00046f42) blid2_tripm_values_pane_t4

0x8557,	// (0x00046f50) blid2_tripm_values_pane_t5

0x8565,	// (0x00046f5e) blid2_tripm_values_pane_t6

0x8573,	// (0x00046f6c) blid2_tripm_values_pane_t7

0x8581,	// (0x00046f7a) blid2_tripm_values_pane_t8

0x858f,	// (0x00046f88) blid2_tripm_values_pane_t9

0x0008,

0xfb21,	// (0x0004e51a) blid2_tripm_values_pane_t

0x2fe8,	// (0x000419e1) call_video_pane_t1_ParamLimits

0x3005,	// (0x000419fe) call_video_pane_t2_ParamLimits

0xf253,	// (0x0004dc4c) call_video_pane_t_ParamLimits

0x0c93,	// (0x0003f68c) msg_header_pane_g1_ParamLimits

0xb735,	// (0x0004a12e) msg_header_pane_g2_ParamLimits

0xb735,	// (0x0004a12e) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0004de66) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0004de66) msg_header_pane_g

0xa9a9,	// (0x000493a2) main_clock2_pane_ParamLimits

0x64de,	// (0x00044ed7) grid_clock2_toolbar_pane_ParamLimits

0x64de,	// (0x00044ed7) grid_clock2_toolbar_pane

0x64de,	// (0x00044ed7) listscroll_clock2_pane_ParamLimits

0x64de,	// (0x00044ed7) listscroll_clock2_pane

0x658d,	// (0x00044f86) main_clock2_pane_t3_ParamLimits

0x658d,	// (0x00044f86) main_clock2_pane_t3

0x659f,	// (0x00044f98) main_clock2_pane_t4_ParamLimits

0x659f,	// (0x00044f98) main_clock2_pane_t4

0xddf7,	// (0x0004c7f0) cell_clock2_toolbar_pane

0xddff,	// (0x0004c7f8) cell_clock2_toolbar_pane_cp01

0xddff,	// (0x0004c7f8) cell_clock2_toolbar_pane_cp02

0xde07,	// (0x0004c800) cell_clock2_toolbar_pane_cp03

0xde0f,	// (0x0004c808) list_clock2_pane

0xb367,	// (0x00049d60) scroll_pane_cp10

0xde17,	// (0x0004c810) list_single_clock2_pane_ParamLimits

0xde17,	// (0x0004c810) list_single_clock2_pane

0xab68,	// (0x00049561) list_highlight_pane_cp08

0xde24,	// (0x0004c81d) list_single_clock2_pane_t1

0xde32,	// (0x0004c82b) list_single_clock2_pane_t2

0x0001,

0xfb34,	// (0x0004e52d) list_single_clock2_pane_t

0xa237,	// (0x00048c30) bg_button_pane_cp10

0xde40,	// (0x0004c839) cell_clock2_toolbar_pane_g1

0x49c2,	// (0x000433bb) aid_main_viewer_pane_g1_ParamLimits

0x49c2,	// (0x000433bb) aid_main_viewer_pane_g1

0x49ce,	// (0x000433c7) aid_main_viewer_pane_g2_ParamLimits

0x49ce,	// (0x000433c7) aid_main_viewer_pane_g2

0x49da,	// (0x000433d3) aid_main_viewer_pane_g3_ParamLimits

0x49da,	// (0x000433d3) aid_main_viewer_pane_g3

0x49eb,	// (0x000433e4) aid_main_viewer_pane_g4_ParamLimits

0x49eb,	// (0x000433e4) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0004de77) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0004de77) aid_main_viewer_pane_g

0x5175,	// (0x00043b6e) main_calc_pane_ParamLimits

0x5182,	// (0x00043b7b) main_dialer2_pane_ParamLimits

0xa237,	// (0x00048c30) main_cam6_pane

0xa237,	// (0x00048c30) main_vid6_pane

0x64ea,	// (0x00044ee3) listscroll_gen_pane_cp06_ParamLimits

0x64ea,	// (0x00044ee3) listscroll_gen_pane_cp06

0x65b1,	// (0x00044faa) main_clock2_pane_t5_ParamLimits

0x65b1,	// (0x00044faa) main_clock2_pane_t5

0x65fe,	// (0x00044ff7) aid_call2_pane_cp10_ParamLimits

0x6610,	// (0x00045009) aid_call_pane_cp10_ParamLimits

0xb3eb,	// (0x00049de4) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb3eb,	// (0x00049de4) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6622,	// (0x0004501b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6622,	// (0x0004501b) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb3eb,	// (0x00049de4) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7b9,	// (0x0004e1b2) popup_clock_analogue_window_cp10_g_ParamLimits

0x6638,	// (0x00045031) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6e52,	// (0x0004584b) cell_dialer2_keypad_pane_g2_ParamLimits

0x6e52,	// (0x0004584b) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a3,	// (0x0004e29c) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a3,	// (0x0004e29c) cell_dialer2_keypad_pane_g

0x6e6e,	// (0x00045867) cell_dialer2_keypad_pane_t1

0x791c,	// (0x00046315) main_cset_text2_pane_ParamLimits

0x791c,	// (0x00046315) main_cset_text2_pane

0xdc77,	// (0x0004c670) area_vitu2_query_pane_g1_ParamLimits

0x102a,	// (0x0003fa23) area_vitu2_query_pane_g2_ParamLimits

0xfa58,	// (0x0004e451) area_vitu2_query_pane_g_ParamLimits

0x10db,	// (0x0003fad4) area_vitu2_query_pane_t7_ParamLimits

0x10db,	// (0x0003fad4) area_vitu2_query_pane_t7

0x80ef,	// (0x00046ae8) bg_button_pane_cp018_ParamLimits

0x80fd,	// (0x00046af6) bg_button_pane_cp021_ParamLimits

0x10ff,	// (0x0003faf8) bg_button_pane_cp022_ParamLimits

0x10ff,	// (0x0003faf8) bg_vkb2_func_pane_cp08_ParamLimits

0x80ef,	// (0x00046ae8) bg_vkb2_func_pane_cp06_ParamLimits

0x80fd,	// (0x00046af6) bg_vkb2_func_pane_cp07_ParamLimits

0x1110,	// (0x0003fb09) input_focus_pane_cp09_ParamLimits

0x859d,	// (0x00046f96) cam6_autofocus_pane_ParamLimits

0x859d,	// (0x00046f96) cam6_autofocus_pane

0x85bf,	// (0x00046fb8) cam6_image_uncrop_pane_ParamLimits

0x85bf,	// (0x00046fb8) cam6_image_uncrop_pane

0x85ec,	// (0x00046fe5) cam6_indi_pane_ParamLimits

0x85ec,	// (0x00046fe5) cam6_indi_pane

0x8606,	// (0x00046fff) cam6_mode_pane_ParamLimits

0x8606,	// (0x00046fff) cam6_mode_pane

0x861a,	// (0x00047013) cam6_timer_pane_ParamLimits

0x861a,	// (0x00047013) cam6_timer_pane

0x8626,	// (0x0004701f) cam6_zoom_pane_ParamLimits

0x8626,	// (0x0004701f) cam6_zoom_pane

0x8642,	// (0x0004703b) cam6_mode_pane_g1_ParamLimits

0x8642,	// (0x0004703b) cam6_mode_pane_g1

0x864e,	// (0x00047047) cam6_mode_pane_g2_ParamLimits

0x864e,	// (0x00047047) cam6_mode_pane_g2

0x865a,	// (0x00047053) cam6_mode_pane_g3_ParamLimits

0x865a,	// (0x00047053) cam6_mode_pane_g3

0x8666,	// (0x0004705f) cam6_mode_pane_g4_ParamLimits

0x8666,	// (0x0004705f) cam6_mode_pane_g4

0x0003,

0xfb39,	// (0x0004e532) cam6_mode_pane_g_ParamLimits

0xfb39,	// (0x0004e532) cam6_mode_pane_g

0xd770,	// (0x0004c169) bg_tb_trans_pane_cp08_ParamLimits

0xd770,	// (0x0004c169) bg_tb_trans_pane_cp08

0xde48,	// (0x0004c841) cam6_battery_pane_ParamLimits

0xde48,	// (0x0004c841) cam6_battery_pane

0xde5e,	// (0x0004c857) cam6_indi_pane_g1_ParamLimits

0xde5e,	// (0x0004c857) cam6_indi_pane_g1

0xde70,	// (0x0004c869) cam6_indi_pane_g2_ParamLimits

0xde70,	// (0x0004c869) cam6_indi_pane_g2

0xde82,	// (0x0004c87b) cam6_indi_pane_g3_ParamLimits

0xde82,	// (0x0004c87b) cam6_indi_pane_g3

0x0002,

0xfb42,	// (0x0004e53b) cam6_indi_pane_g_ParamLimits

0xfb42,	// (0x0004e53b) cam6_indi_pane_g

0xde94,	// (0x0004c88d) cam6_indi_pane_t1_ParamLimits

0xde94,	// (0x0004c88d) cam6_indi_pane_t1

0x7402,	// (0x00045dfb) cam6_autofocus_pane_g1

0x740a,	// (0x00045e03) cam6_autofocus_pane_g2

0x7412,	// (0x00045e0b) cam6_autofocus_pane_g3

0x741a,	// (0x00045e13) cam6_autofocus_pane_g4

0x0003,

0xfb49,	// (0x0004e542) cam6_autofocus_pane_g

0xdec6,	// (0x0004c8bf) cam6_timer_pane_g1

0xdece,	// (0x0004c8c7) cam6_timer_pane_t1

0xdedc,	// (0x0004c8d5) cam6_zoom_cont_pane

0xdee4,	// (0x0004c8dd) cam6_zoom_pane_g1

0xdeec,	// (0x0004c8e5) cam6_zoom_pane_g2

0x8672,	// (0x0004706b) cam6_zoom_pane_g3

0x0002,

0xfb52,	// (0x0004e54b) cam6_zoom_pane_g

0xce41,	// (0x0004b83a) cam6_battery_pane_g1

0xce41,	// (0x0004b83a) cam6_battery_pane_g2

0x0001,

0xf6c1,	// (0x0004e0ba) cam6_battery_pane_g

0xdef4,	// (0x0004c8ed) cam6_zoom_cont_pane_g1

0xdefd,	// (0x0004c8f6) cam6_zoom_cont_pane_g2

0xdf06,	// (0x0004c8ff) cam6_zoom_cont_pane_g3

0x0002,

0xfb59,	// (0x0004e552) cam6_zoom_cont_pane_g

0x868f,	// (0x00047088) cam6_mode_pane_cp_ParamLimits

0x868f,	// (0x00047088) cam6_mode_pane_cp

0x8626,	// (0x0004701f) cam6_zoom_pane_cp_ParamLimits

0x8626,	// (0x0004701f) cam6_zoom_pane_cp

0x86a3,	// (0x0004709c) vid6_image_uncrop_cif_pane_ParamLimits

0x86a3,	// (0x0004709c) vid6_image_uncrop_cif_pane

0x86cf,	// (0x000470c8) vid6_image_uncrop_nhd_pane_ParamLimits

0x86cf,	// (0x000470c8) vid6_image_uncrop_nhd_pane

0x85bf,	// (0x00046fb8) vid6_image_uncrop_vga_pane_ParamLimits

0x85bf,	// (0x00046fb8) vid6_image_uncrop_vga_pane

0x86ee,	// (0x000470e7) vid6_image_uncrop_wvga_pane_ParamLimits

0x86ee,	// (0x000470e7) vid6_image_uncrop_wvga_pane

0x870d,	// (0x00047106) vid6_indi_pane_ParamLimits

0x870d,	// (0x00047106) vid6_indi_pane

0xd770,	// (0x0004c169) bg_tb_trans_pane_cp09_ParamLimits

0xd770,	// (0x0004c169) bg_tb_trans_pane_cp09

0xdf1e,	// (0x0004c917) cam6_battery_pane_cp_ParamLimits

0xdf1e,	// (0x0004c917) cam6_battery_pane_cp

0xdf2a,	// (0x0004c923) vid6_indi_pane_g1_ParamLimits

0xdf2a,	// (0x0004c923) vid6_indi_pane_g1

0xdf3c,	// (0x0004c935) vid6_indi_pane_g2_ParamLimits

0xdf3c,	// (0x0004c935) vid6_indi_pane_g2

0xdf4e,	// (0x0004c947) vid6_indi_pane_g3_ParamLimits

0xdf4e,	// (0x0004c947) vid6_indi_pane_g3

0xdf65,	// (0x0004c95e) vid6_indi_pane_g4_ParamLimits

0xdf65,	// (0x0004c95e) vid6_indi_pane_g4

0xdf7c,	// (0x0004c975) vid6_indi_pane_g5_ParamLimits

0xdf7c,	// (0x0004c975) vid6_indi_pane_g5

0x0004,

0xfb60,	// (0x0004e559) vid6_indi_pane_g_ParamLimits

0xfb60,	// (0x0004e559) vid6_indi_pane_g

0xdf96,	// (0x0004c98f) vid6_indi_pane_t1_ParamLimits

0xdf96,	// (0x0004c98f) vid6_indi_pane_t1

0xdfac,	// (0x0004c9a5) vid6_indi_pane_t2_ParamLimits

0xdfac,	// (0x0004c9a5) vid6_indi_pane_t2

0xdfd4,	// (0x0004c9cd) vid6_indi_pane_t3_ParamLimits

0xdfd4,	// (0x0004c9cd) vid6_indi_pane_t3

0xdffc,	// (0x0004c9f5) vid6_indi_pane_t4_ParamLimits

0xdffc,	// (0x0004c9f5) vid6_indi_pane_t4

0x0003,

0xfb6b,	// (0x0004e564) vid6_indi_pane_t_ParamLimits

0xfb6b,	// (0x0004e564) vid6_indi_pane_t

0xe020,	// (0x0004ca19) wait_bar_pane_cp08

0x8732,	// (0x0004712b) main_cset_text2_pane_t1_ParamLimits

0x8732,	// (0x0004712b) main_cset_text2_pane_t1

0x867a,	// (0x00047073) listscroll_gen_pane_cp06_t1_ParamLimits

0x867a,	// (0x00047073) listscroll_gen_pane_cp06_t1

0xa237,	// (0x00048c30) main_cam6_set_pane

0xd068,	// (0x0004ba61) bg_tb_trans_pane_cp06_ParamLimits

0x72b0,	// (0x00045ca9) cam4_indicators_pane_g1_ParamLimits

0x72c1,	// (0x00045cba) cam4_indicators_pane_g2_ParamLimits

0xf8e0,	// (0x0004e2d9) cam4_indicators_pane_g_ParamLimits

0x72d9,	// (0x00045cd2) cam4_indicators_pane_t1_ParamLimits

0xbcb3,	// (0x0004a6ac) bg_tb_trans_pane_cp07_ParamLimits

0x7390,	// (0x00045d89) vid4_indicators_pane_g1_ParamLimits

0x73a6,	// (0x00045d9f) vid4_indicators_pane_g2_ParamLimits

0x73ba,	// (0x00045db3) vid4_indicators_pane_g3_ParamLimits

0x73cd,	// (0x00045dc6) vid4_indicators_pane_g4_ParamLimits

0xf8f2,	// (0x0004e2eb) vid4_indicators_pane_g_ParamLimits

0x73eb,	// (0x00045de4) vid4_indicators_pane_t1_ParamLimits

0x8221,	// (0x00046c1a) vid4_progress_pane_g1_ParamLimits

0x8231,	// (0x00046c2a) vid4_progress_pane_g2_ParamLimits

0x8241,	// (0x00046c3a) vid4_progress_pane_g3_ParamLimits

0x72c1,	// (0x00045cba) vid4_progress_pane_g4_ParamLimits

0xfaa3,	// (0x0004e49c) vid4_progress_pane_g_ParamLimits

0x8253,	// (0x00046c4c) vid4_progress_pane_t1_ParamLimits

0x8269,	// (0x00046c62) vid4_progress_pane_t2_ParamLimits

0x827e,	// (0x00046c77) vid4_progress_pane_t3_ParamLimits

0xfaae,	// (0x0004e4a7) vid4_progress_pane_t_ParamLimits

0x8293,	// (0x00046c8c) wait_bar_pane_cp07_ParamLimits

0x8759,	// (0x00047152) main_cam6_set_pane_g2_ParamLimits

0x8759,	// (0x00047152) main_cam6_set_pane_g2

0x8765,	// (0x0004715e) main_cset6_listscroll_pane_ParamLimits

0x8765,	// (0x0004715e) main_cset6_listscroll_pane

0x8792,	// (0x0004718b) main_cset6_slider_pane_ParamLimits

0x8792,	// (0x0004718b) main_cset6_slider_pane

0x879e,	// (0x00047197) main_cset6_text2_pane_ParamLimits

0x879e,	// (0x00047197) main_cset6_text2_pane

0xe02f,	// (0x0004ca28) main_cset6_text_pane

0xe037,	// (0x0004ca30) main_cset_list_pane_copy1_ParamLimits

0xe037,	// (0x0004ca30) main_cset_list_pane_copy1

0xe047,	// (0x0004ca40) scroll_pane_cp028_copy1

0x87b1,	// (0x000471aa) cset_list_set_pane_copy1

0x87c1,	// (0x000471ba) aid_position_infowindow_above_copy1

0x87c9,	// (0x000471c2) aid_position_infowindow_below_copy1

0x114e,	// (0x0003fb47) cset_list_set_pane_g1_copy1

0x1156,	// (0x0003fb4f) cset_list_set_pane_g3_copy1_ParamLimits

0x1156,	// (0x0003fb4f) cset_list_set_pane_g3_copy1

0x1165,	// (0x0003fb5e) cset_list_set_pane_t1_copy1_ParamLimits

0x1165,	// (0x0003fb5e) cset_list_set_pane_t1_copy1

0xbcb3,	// (0x0004a6ac) list_highlight_pane_cp021_copy1_ParamLimits

0xbcb3,	// (0x0004a6ac) list_highlight_pane_cp021_copy1

0xe050,	// (0x0004ca49) cset6_slider_pane_ParamLimits

0xe050,	// (0x0004ca49) cset6_slider_pane

0xe07c,	// (0x0004ca75) main_cset6_slider_pane_g1_ParamLimits

0xe07c,	// (0x0004ca75) main_cset6_slider_pane_g1

0x87d1,	// (0x000471ca) main_cset6_slider_pane_g2_ParamLimits

0x87d1,	// (0x000471ca) main_cset6_slider_pane_g2

0xe0a4,	// (0x0004ca9d) main_cset6_slider_pane_g3_ParamLimits

0xe0a4,	// (0x0004ca9d) main_cset6_slider_pane_g3

0x87f9,	// (0x000471f2) main_cset6_slider_pane_g4_ParamLimits

0x87f9,	// (0x000471f2) main_cset6_slider_pane_g4

0x8805,	// (0x000471fe) main_cset6_slider_pane_g5_ParamLimits

0x8805,	// (0x000471fe) main_cset6_slider_pane_g5

0xd950,	// (0x0004c349) main_cset6_slider_pane_g7_ParamLimits

0xd950,	// (0x0004c349) main_cset6_slider_pane_g7

0xd95c,	// (0x0004c355) main_cset6_slider_pane_g8_ParamLimits

0xd95c,	// (0x0004c355) main_cset6_slider_pane_g8

0x8811,	// (0x0004720a) main_cset6_slider_pane_g9_ParamLimits

0x8811,	// (0x0004720a) main_cset6_slider_pane_g9

0x881d,	// (0x00047216) main_cset6_slider_pane_g10_ParamLimits

0x881d,	// (0x00047216) main_cset6_slider_pane_g10

0x8829,	// (0x00047222) main_cset6_slider_pane_g11_ParamLimits

0x8829,	// (0x00047222) main_cset6_slider_pane_g11

0x8835,	// (0x0004722e) main_cset6_slider_pane_g12_ParamLimits

0x8835,	// (0x0004722e) main_cset6_slider_pane_g12

0x8841,	// (0x0004723a) main_cset6_slider_pane_g13_ParamLimits

0x8841,	// (0x0004723a) main_cset6_slider_pane_g13

0x884d,	// (0x00047246) main_cset6_slider_pane_g14_ParamLimits

0x884d,	// (0x00047246) main_cset6_slider_pane_g14

0x8859,	// (0x00047252) main_cset6_slider_pane_g15_ParamLimits

0x8859,	// (0x00047252) main_cset6_slider_pane_g15

0x8871,	// (0x0004726a) main_cset6_slider_pane_g16_ParamLimits

0x8871,	// (0x0004726a) main_cset6_slider_pane_g16

0x887d,	// (0x00047276) main_cset6_slider_pane_g17_ParamLimits

0x887d,	// (0x00047276) main_cset6_slider_pane_g17

0x0011,

0xfb74,	// (0x0004e56d) main_cset6_slider_pane_g_ParamLimits

0xfb74,	// (0x0004e56d) main_cset6_slider_pane_g

0xe0b0,	// (0x0004caa9) main_cset6_slider_pane_t1_ParamLimits

0xe0b0,	// (0x0004caa9) main_cset6_slider_pane_t1

0x88a1,	// (0x0004729a) main_cset6_slider_pane_t2_ParamLimits

0x88a1,	// (0x0004729a) main_cset6_slider_pane_t2

0x88cc,	// (0x000472c5) main_cset6_slider_pane_t3_ParamLimits

0x88cc,	// (0x000472c5) main_cset6_slider_pane_t3

0x88f7,	// (0x000472f0) main_cset6_slider_pane_t4_ParamLimits

0x88f7,	// (0x000472f0) main_cset6_slider_pane_t4

0x8922,	// (0x0004731b) main_cset6_slider_pane_t5_ParamLimits

0x8922,	// (0x0004731b) main_cset6_slider_pane_t5

0xe0f1,	// (0x0004caea) main_cset6_slider_pane_t7_ParamLimits

0xe0f1,	// (0x0004caea) main_cset6_slider_pane_t7

0x894d,	// (0x00047346) main_cset6_slider_pane_t8_ParamLimits

0x894d,	// (0x00047346) main_cset6_slider_pane_t8

0x8971,	// (0x0004736a) main_cset6_slider_pane_t9_ParamLimits

0x8971,	// (0x0004736a) main_cset6_slider_pane_t9

0x8995,	// (0x0004738e) main_cset6_slider_pane_t10_ParamLimits

0x8995,	// (0x0004738e) main_cset6_slider_pane_t10

0x89b9,	// (0x000473b2) main_cset6_slider_pane_t11_ParamLimits

0x89b9,	// (0x000473b2) main_cset6_slider_pane_t11

0xe127,	// (0x0004cb20) main_cset6_slider_pane_t14_ParamLimits

0xe127,	// (0x0004cb20) main_cset6_slider_pane_t14

0xe160,	// (0x0004cb59) main_cset6_slider_pane_t15_ParamLimits

0xe160,	// (0x0004cb59) main_cset6_slider_pane_t15

0x000b,

0xfb99,	// (0x0004e592) main_cset6_slider_pane_t_ParamLimits

0xfb99,	// (0x0004e592) main_cset6_slider_pane_t

0xe199,	// (0x0004cb92) cset_slider_pane_g1_copy1

0xe1a2,	// (0x0004cb9b) cset_slider_pane_g2_copy1

0xe1ab,	// (0x0004cba4) cset_slider_pane_g3_copy1

0xa237,	// (0x00048c30) bg_popup_sub_pane_cp011_copy1

0xe1b4,	// (0x0004cbad) main_cset_text_pane_g1_copy1

0xda9f,	// (0x0004c498) main_cset_text_pane_t1_copy1

0xdaad,	// (0x0004c4a6) main_cset_text_pane_t2_copy1

0xdabb,	// (0x0004c4b4) main_cset_text_pane_t3_copy1

0xdac9,	// (0x0004c4c2) main_cset_text_pane_t4_copy1

0xdad7,	// (0x0004c4d0) main_cset_text_pane_t5_copy1

0xe1bc,	// (0x0004cbb5) main_cset_text_pane_t6_copy1

0xe1ca,	// (0x0004cbc3) main_cset_text_pane_t7_copy1

0x89dd,	// (0x000473d6) main_cset_text2_pane_t1_copy1

0xbcb3,	// (0x0004a6ac) main_ncimui_pane

0x51db,	// (0x00043bd4) popup_query_ncimui_window_ParamLimits

0x51db,	// (0x00043bd4) popup_query_ncimui_window

0x0d44,	// (0x0003f73d) field_cale_ev2_pane_g4_ParamLimits

0x0d44,	// (0x0003f73d) field_cale_ev2_pane_g4

0x6b2a,	// (0x00045523) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6b2a,	// (0x00045523) cell_video_dialer_keypad_pane_g2

0x0001,

0xf87a,	// (0x0004e273) cell_video_dialer_keypad_pane_g_ParamLimits

0xf87a,	// (0x0004e273) cell_video_dialer_keypad_pane_g

0x6b42,	// (0x0004553b) cell_video_dialer_keypad_pane_t1

0xa237,	// (0x00048c30) bg_popup_window_pane_cp012

0xb253,	// (0x00049c4c) heading_pane_cp06

0xe1f6,	// (0x0004cbef) ncim_query_content_pane

0xa237,	// (0x00048c30) bg_popup_heading_pane_cp01

0xe1fe,	// (0x0004cbf7) ncim_heading_pane_t1

0xe20c,	// (0x0004cc05) ncim_indicator_popup_pane

0xe21e,	// (0x0004cc17) ncim_query_button_pane

0xe234,	// (0x0004cc2d) ncim_query_content_pane_t1

0xe246,	// (0x0004cc3f) ncim_query_content_pane_t2

0x0005,

0xfbdd,	// (0x0004e5d6) ncim_query_content_pane_t

0xe280,	// (0x0004cc79) ncim_query_list_pane

0xe292,	// (0x0004cc8b) ncim_query_popup_pane

0xe20c,	// (0x0004cc05) ncim_indicator_popup_pane_ParamLimits

0x8b39,	// (0x00047532) ncim_query_content_pane_g1_ParamLimits

0x8b39,	// (0x00047532) ncim_query_content_pane_g1

0xe234,	// (0x0004cc2d) ncim_query_content_pane_t1_ParamLimits

0xe246,	// (0x0004cc3f) ncim_query_content_pane_t2_ParamLimits

0x8b45,	// (0x0004753e) ncim_query_content_pane_t3_ParamLimits

0x8b45,	// (0x0004753e) ncim_query_content_pane_t3

0x8b62,	// (0x0004755b) ncim_query_content_pane_t4_ParamLimits

0x8b62,	// (0x0004755b) ncim_query_content_pane_t4

0x8b7f,	// (0x00047578) ncim_query_content_pane_t5_ParamLimits

0x8b7f,	// (0x00047578) ncim_query_content_pane_t5

0xe258,	// (0x0004cc51) ncim_query_content_pane_t6_ParamLimits

0xe258,	// (0x0004cc51) ncim_query_content_pane_t6

0xfbdd,	// (0x0004e5d6) ncim_query_content_pane_t_ParamLimits

0xe280,	// (0x0004cc79) ncim_query_list_pane_ParamLimits

0xe292,	// (0x0004cc8b) ncim_query_popup_pane_ParamLimits

0xe2a6,	// (0x0004cc9f) wait_bar_pane_cp04

0xa237,	// (0x00048c30) input_focus_pane_cp011

0xe2ae,	// (0x0004cca7) ncim_query_popup_pane_t1

0xe2bc,	// (0x0004ccb5) ncim_list_query_list_pane_ParamLimits

0xe2bc,	// (0x0004ccb5) ncim_list_query_list_pane

0xa237,	// (0x00048c30) bg_button_pane_cp027

0xe2cf,	// (0x0004ccc8) ncim_query_button_pane_g1

0xa237,	// (0x00048c30) list_highlight_pane_cp012

0xe2d9,	// (0x0004ccd2) ncim_list_query_list_pane_g1

0xe2e1,	// (0x0004ccda) ncim_list_query_list_pane_t1

0x72cd,	// (0x00045cc6) cam4_indicators_pane_g3_ParamLimits

0x72cd,	// (0x00045cc6) cam4_indicators_pane_g3

0x73d9,	// (0x00045dd2) vid4_indicators_pane_g5_ParamLimits

0x73d9,	// (0x00045dd2) vid4_indicators_pane_g5

0x72cd,	// (0x00045cc6) vid4_progress_pane_g5_ParamLimits

0x72cd,	// (0x00045cc6) vid4_progress_pane_g5

0x8a0f,	// (0x00047408) main_ncimui_pane_g1

0x8a7b,	// (0x00047474) ncimui_group_query_pane_ParamLimits

0x8a7b,	// (0x00047474) ncimui_group_query_pane

0x8ad5,	// (0x000474ce) ncimui_list_pane_ParamLimits

0x8ad5,	// (0x000474ce) ncimui_list_pane

0x8afc,	// (0x000474f5) ncimui_text_pane_ParamLimits

0x8afc,	// (0x000474f5) ncimui_text_pane

0x8b9c,	// (0x00047595) ncimui_text_pane_t1_ParamLimits

0x8b9c,	// (0x00047595) ncimui_text_pane_t1

0xe2ef,	// (0x0004cce8) ncimui_list_single_graphic_pane_ParamLimits

0xe2ef,	// (0x0004cce8) ncimui_list_single_graphic_pane

0x8bbb,	// (0x000475b4) ncimui_query_pane_ParamLimits

0x8bbb,	// (0x000475b4) ncimui_query_pane

0xa237,	// (0x00048c30) list_highlight_pane_cp013

0xe2ff,	// (0x0004ccf8) ncim_list_query_list_pane_t1_copy1

0xe2d9,	// (0x0004ccd2) ncim_list_single_graphic_pane_g1

0x8bce,	// (0x000475c7) ncim_query_button_pane_cp01

0x8bda,	// (0x000475d3) ncim_query_entry_pane_ParamLimits

0x8bda,	// (0x000475d3) ncim_query_entry_pane

0x8bed,	// (0x000475e6) ncimui_query_pane_g1

0x8bf9,	// (0x000475f2) ncimui_query_pane_t1_ParamLimits

0x8bf9,	// (0x000475f2) ncimui_query_pane_t1

0xbcb3,	// (0x0004a6ac) input_focus_pane_cp012

0xe30d,	// (0x0004cd06) ncim_query_entry_pane_t1

0xa9a9,	// (0x000493a2) main_im_pane_ParamLimits

0xbcb3,	// (0x0004a6ac) main_mobtv_pane_ParamLimits

0xbcb3,	// (0x0004a6ac) main_mobtv_pane

0x8889,	// (0x00047282) main_cset6_slider_pane_g18_ParamLimits

0x8889,	// (0x00047282) main_cset6_slider_pane_g18

0x8895,	// (0x0004728e) main_cset6_slider_pane_g19_ParamLimits

0x8895,	// (0x0004728e) main_cset6_slider_pane_g19

0xd7fd,	// (0x0004c1f6) bg_main_mobtv_pane_ParamLimits

0xd7fd,	// (0x0004c1f6) bg_main_mobtv_pane

0x8c12,	// (0x0004760b) main_mobtv_info_pane

0x8c1d,	// (0x00047616) main_mobtv_loading_pane_ParamLimits

0x8c1d,	// (0x00047616) main_mobtv_loading_pane

0xe31f,	// (0x0004cd18) main_mobtv_pg_channel_list_pane

0xe329,	// (0x0004cd22) main_mobtv_pg_hdr_pane

0x8c2a,	// (0x00047623) main_mobtv_programe_curr_pane_ParamLimits

0x8c2a,	// (0x00047623) main_mobtv_programe_curr_pane

0x8c37,	// (0x00047630) main_mobtv_programe_next_pane_ParamLimits

0x8c37,	// (0x00047630) main_mobtv_programe_next_pane

0xe332,	// (0x0004cd2b) popup_mobtv_noti_window

0xce41,	// (0x0004b83a) main_tv_pg_hdr_pane_g1

0xe33c,	// (0x0004cd35) main_tv_pg_hdr_pane_g2

0xe344,	// (0x0004cd3d) main_tv_pg_hdr_pane_g3

0xe34c,	// (0x0004cd45) main_tv_pg_hdr_pane_g4

0xe354,	// (0x0004cd4d) main_tv_pg_hdr_pane_g5

0xe35e,	// (0x0004cd57) main_tv_pg_hdr_pane_g6

0xe368,	// (0x0004cd61) main_tv_pg_hdr_pane_g7

0xe372,	// (0x0004cd6b) main_tv_pg_hdr_pane_g8

0xe37c,	// (0x0004cd75) main_tv_pg_hdr_pane_g9

0xe386,	// (0x0004cd7f) main_tv_pg_hdr_pane_g10

0xe390,	// (0x0004cd89) main_tv_pg_hdr_pane_g11

0x000a,

0xfbea,	// (0x0004e5e3) main_tv_pg_hdr_pane_g

0xe39a,	// (0x0004cd93) main_tv_pg_hdr_pane_t1

0xe3a8,	// (0x0004cda1) main_tv_pg_hdr_pane_t2

0xe3b6,	// (0x0004cdaf) main_tv_pg_hdr_pane_t3

0xe3c6,	// (0x0004cdbf) main_tv_pg_hdr_pane_t4

0xe3d6,	// (0x0004cdcf) main_tv_pg_hdr_pane_t5

0x0004,

0xfc01,	// (0x0004e5fa) main_tv_pg_hdr_pane_t

0xe3e6,	// (0x0004cddf) single_mobtv_pg_channel_pane_ParamLimits

0xe3e6,	// (0x0004cddf) single_mobtv_pg_channel_pane

0xe3f8,	// (0x0004cdf1) single_mobtv_pg_channel_table_pane

0xe401,	// (0x0004cdfa) single_mobtv_pg_channel_thumb_pane

0xe40a,	// (0x0004ce03) single_tv_pg_channel_pane_g1

0xe413,	// (0x0004ce0c) single_tv_pg_channel_pane_g2

0x0001,

0xfc0c,	// (0x0004e605) single_tv_pg_channel_pane_g

0xd068,	// (0x0004ba61) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd068,	// (0x0004ba61) bg_single_mobtv_pg_channel_thumb_pane

0xe41c,	// (0x0004ce15) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe41c,	// (0x0004ce15) single_mobtv_pg_channel_thumb_pane_g1

0xe42a,	// (0x0004ce23) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe42a,	// (0x0004ce23) single_mobtv_pg_channel_thumb_pane_g2

0xe436,	// (0x0004ce2f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe436,	// (0x0004ce2f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc11,	// (0x0004e60a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc11,	// (0x0004e60a) single_mobtv_pg_channel_thumb_pane_g

0xe442,	// (0x0004ce3b) single_mobtv_pg_channel_thumb_pane_t1

0xe450,	// (0x0004ce49) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc18,	// (0x0004e611) single_mobtv_pg_channel_thumb_pane_t

0xce41,	// (0x0004b83a) bg_single_mobtv_pg_channel_table_pane_g1

0xce41,	// (0x0004b83a) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6c1,	// (0x0004e0ba) bg_single_mobtv_pg_channel_table_pane_g

0xe45e,	// (0x0004ce57) single_mobtv_pg_channel_table_pane_t1

0xe46c,	// (0x0004ce65) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc1d,	// (0x0004e616) single_mobtv_pg_channel_table_pane_t

0x8c4c,	// (0x00047645) main_mobtv_info_pane_g1_ParamLimits

0x8c4c,	// (0x00047645) main_mobtv_info_pane_g1

0x8c68,	// (0x00047661) main_mobtv_info_pane_t1_ParamLimits

0x8c68,	// (0x00047661) main_mobtv_info_pane_t1

0x8ce0,	// (0x000476d9) main_mobtv_info_pane_t2_ParamLimits

0x8ce0,	// (0x000476d9) main_mobtv_info_pane_t2

0x0002,

0xfc27,	// (0x0004e620) main_mobtv_info_pane_t_ParamLimits

0xfc27,	// (0x0004e620) main_mobtv_info_pane_t

0x8d71,	// (0x0004776a) wait_bar_pane_cp05

0x8d83,	// (0x0004777c) main_mobtv_loading_pane_g1_ParamLimits

0x8d83,	// (0x0004777c) main_mobtv_loading_pane_g1

0x8d8f,	// (0x00047788) main_mobtv_loading_pane_g2_ParamLimits

0x8d8f,	// (0x00047788) main_mobtv_loading_pane_g2

0x8d9b,	// (0x00047794) main_mobtv_loading_pane_g3_ParamLimits

0x8d9b,	// (0x00047794) main_mobtv_loading_pane_g3

0x0002,

0xfc2e,	// (0x0004e627) main_mobtv_loading_pane_g_ParamLimits

0xfc2e,	// (0x0004e627) main_mobtv_loading_pane_g

0xe47a,	// (0x0004ce73) main_mobtv_loading_pane_t1_ParamLimits

0xe47a,	// (0x0004ce73) main_mobtv_loading_pane_t1

0xe492,	// (0x0004ce8b) main_mobtv_loading_pane_t2_ParamLimits

0xe492,	// (0x0004ce8b) main_mobtv_loading_pane_t2

0x0001,

0xfc35,	// (0x0004e62e) main_mobtv_loading_pane_t_ParamLimits

0xfc35,	// (0x0004e62e) main_mobtv_loading_pane_t

0x8da9,	// (0x000477a2) wait_bar_pane_cp06_ParamLimits

0x8da9,	// (0x000477a2) wait_bar_pane_cp06

0xe4b6,	// (0x0004ceaf) main_mobtv_programe_curr_pane_t1

0xe4c4,	// (0x0004cebd) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc3a,	// (0x0004e633) main_mobtv_programe_curr_pane_t

0xe4d2,	// (0x0004cecb) main_mobtv_programe_next_pane_t1

0xe4e0,	// (0x0004ced9) main_mobtv_programe_next_pane_t2

0xe4ee,	// (0x0004cee7) main_mobtv_programe_next_pane_t3

0x0002,

0xfc3f,	// (0x0004e638) main_mobtv_programe_next_pane_t

0xa237,	// (0x00048c30) bg_popup_mobtv_noti_window_pane

0xe4fc,	// (0x0004cef5) popup_mobtv_noti_window_g1

0xe504,	// (0x0004cefd) popup_mobtv_noti_window_t1

0xe512,	// (0x0004cf0b) popup_mobtv_noti_window_t2

0x0001,

0xfc46,	// (0x0004e63f) popup_mobtv_noti_window_t

0xce41,	// (0x0004b83a) bg_popup_mobtv_noti_window_pane_g1

0xa237,	// (0x00048c30) sc_clock_pane

0xa237,	// (0x00048c30) main_fs_bigclock_pane

0x844c,	// (0x00046e45) blid2_tripm_pane_t4_ParamLimits

0x844c,	// (0x00046e45) blid2_tripm_pane_t4

0x8db5,	// (0x000477ae) sc_clock_pane_g1_ParamLimits

0x8db5,	// (0x000477ae) sc_clock_pane_g1

0x8dc3,	// (0x000477bc) sc_clock_pane_t1_ParamLimits

0x8dc3,	// (0x000477bc) sc_clock_pane_t1

0x8dd8,	// (0x000477d1) sc_clock_pane_t2_ParamLimits

0x8dd8,	// (0x000477d1) sc_clock_pane_t2

0x8dea,	// (0x000477e3) sc_clock_pane_t3_ParamLimits

0x8dea,	// (0x000477e3) sc_clock_pane_t3

0x0004,

0xfc4b,	// (0x0004e644) sc_clock_pane_t_ParamLimits

0xfc4b,	// (0x0004e644) sc_clock_pane_t

0x9807,	// (0x00048200) main_fs_bigclock_indicator_pane_ParamLimits

0x9807,	// (0x00048200) main_fs_bigclock_indicator_pane

0x8e79,	// (0x00047872) main_fs_bigclock_pane_g1_ParamLimits

0x8e79,	// (0x00047872) main_fs_bigclock_pane_g1

0x9813,	// (0x0004820c) main_fs_bigclock_pane_t1_ParamLimits

0x9813,	// (0x0004820c) main_fs_bigclock_pane_t1

0x9825,	// (0x0004821e) main_fs_bigclock_pane_t2_ParamLimits

0x9825,	// (0x0004821e) main_fs_bigclock_pane_t2

0x9839,	// (0x00048232) main_fs_bigclock_pane_t3_ParamLimits

0x9839,	// (0x00048232) main_fs_bigclock_pane_t3

0x0002,

0xfe59,	// (0x0004e852) main_fs_bigclock_pane_t_ParamLimits

0xfe59,	// (0x0004e852) main_fs_bigclock_pane_t

0xec72,	// (0x0004d66b) main_fs_bigclock_indicator_pane_g1

0xe226,	// (0x0004cc1f) ncim_query_content_pane_g2_ParamLimits

0xe226,	// (0x0004cc1f) ncim_query_content_pane_g2

0x0001,

0xfbd8,	// (0x0004e5d1) ncim_query_content_pane_g_ParamLimits

0xfbd8,	// (0x0004e5d1) ncim_query_content_pane_g

0x8dfc,	// (0x000477f5) sc_clock_pane_t4_ParamLimits

0x8dfc,	// (0x000477f5) sc_clock_pane_t4

0xbcb3,	// (0x0004a6ac) main_radioblah_pane

0x7171,	// (0x00045b6a) cell_call4_button_pane_t1_copy1_ParamLimits

0x7171,	// (0x00045b6a) cell_call4_button_pane_t1_copy1

0x8a2b,	// (0x00047424) main_ncimui_pane_t1_ParamLimits

0x8a2b,	// (0x00047424) main_ncimui_pane_t1

0x8a45,	// (0x0004743e) main_ncimui_pane_t2_ParamLimits

0x8a45,	// (0x0004743e) main_ncimui_pane_t2

0x0002,

0xfbd1,	// (0x0004e5ca) main_ncimui_pane_t_ParamLimits

0xfbd1,	// (0x0004e5ca) main_ncimui_pane_t

0xe520,	// (0x0004cf19) main_radioblah_anim_pane_ParamLimits

0xe520,	// (0x0004cf19) main_radioblah_anim_pane

0xe531,	// (0x0004cf2a) main_radioblah_info_pane_ParamLimits

0xe531,	// (0x0004cf2a) main_radioblah_info_pane

0xe545,	// (0x0004cf3e) main_radioblah_pane_t1_ParamLimits

0xe545,	// (0x0004cf3e) main_radioblah_pane_t1

0xe561,	// (0x0004cf5a) main_radioblah_pane_t2_ParamLimits

0xe561,	// (0x0004cf5a) main_radioblah_pane_t2

0x0003,

0xfc6c,	// (0x0004e665) main_radioblah_pane_t_ParamLimits

0xfc6c,	// (0x0004e665) main_radioblah_pane_t

0x9018,	// (0x00047a11) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9018,	// (0x00047a11) main_radioblah_rocker_ctrl_pane

0xe5a9,	// (0x0004cfa2) main_radioblah_info_pane_t1_ParamLimits

0xe5a9,	// (0x0004cfa2) main_radioblah_info_pane_t1

0x9061,	// (0x00047a5a) main_radioblah_info_pane_t2_ParamLimits

0x9061,	// (0x00047a5a) main_radioblah_info_pane_t2

0x0003,

0xfc75,	// (0x0004e66e) main_radioblah_info_pane_t_ParamLimits

0xfc75,	// (0x0004e66e) main_radioblah_info_pane_t

0xce41,	// (0x0004b83a) main_radioblah_rocker_ctrl_pane_g1

0x9111,	// (0x00047b0a) main_radioblah_rocker_ctrl_pane_g2

0x9119,	// (0x00047b12) main_radioblah_rocker_ctrl_pane_g3

0x9121,	// (0x00047b1a) main_radioblah_rocker_ctrl_pane_g4

0x9129,	// (0x00047b22) main_radioblah_rocker_ctrl_pane_g5

0x9131,	// (0x00047b2a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc7e,	// (0x0004e677) main_radioblah_rocker_ctrl_pane_g

0x89dd,	// (0x000473d6) main_cset_text2_pane_t1_copy1_ParamLimits

0x71fa,	// (0x00045bf3) cam4_image_uncrop_qvga_pane

0x733f,	// (0x00045d38) vid4_image_uncrop_qcif_pane

0x85de,	// (0x00046fd7) cam6_image_uncrop_qvga_pane_ParamLimits

0x85de,	// (0x00046fd7) cam6_image_uncrop_qvga_pane

0xdf0e,	// (0x0004c907) vid6_image_uncrop_qcif_pane_ParamLimits

0xdf0e,	// (0x0004c907) vid6_image_uncrop_qcif_pane

0xa237,	// (0x00048c30) bg_popup_preview_window_pane_cp03

0xe1d8,	// (0x0004cbd1) list_cset_text2_pane

0xe1e0,	// (0x0004cbd9) main_cset6_text2_pane_g1

0xe1e8,	// (0x0004cbe1) main_cset6_text2_pane_t1

0x9139,	// (0x00047b32) list_cset_text2_pane_t1_ParamLimits

0x9139,	// (0x00047b32) list_cset_text2_pane_t1

0xbcb3,	// (0x0004a6ac) main_radioblah_pane_ParamLimits

0x8d5d,	// (0x00047756) main_mobtv_info_pane_t3_ParamLimits

0x8d5d,	// (0x00047756) main_mobtv_info_pane_t3

0x9006,	// (0x000479ff) main_radioblah_pane_g1

0x9031,	// (0x00047a2a) main_radioblah_info_pane_g1

0x90b6,	// (0x00047aaf) main_radioblah_info_pane_t3_ParamLimits

0x90b6,	// (0x00047aaf) main_radioblah_info_pane_t3

0x3fb0,	// (0x000429a9) highlight_cell_cale_month_pane_ParamLimits

0x3fb0,	// (0x000429a9) highlight_cell_cale_month_pane

0xa237,	// (0x00048c30) main_phob_fisheye_pane

0xd144,	// (0x0004bb3d) scroll_pane_cp0031_ParamLimits

0xd144,	// (0x0004bb3d) scroll_pane_cp0031

0xe020,	// (0x0004ca19) wait_bar_pane_cp08_ParamLimits

0x87b1,	// (0x000471aa) cset_list_set_pane_copy1_ParamLimits

0xe5e3,	// (0x0004cfdc) highlight_cell_cale_month_pane_g1

0x9150,	// (0x00047b49) highlight_cell_cale_month_pane_t1

0xdccb,	// (0x0004c6c4) list_gen_pane_cp01

0xd93b,	// (0x0004c334) scroll_pane_01

0x1250,	// (0x0003fc49) list_single_double_fisheye_pane

0x1259,	// (0x0003fc52) list_double_fisheye_pane_g1_ParamLimits

0x1259,	// (0x0003fc52) list_double_fisheye_pane_g1

0x1265,	// (0x0003fc5e) list_double_fisheye_pane_g2_ParamLimits

0x1265,	// (0x0003fc5e) list_double_fisheye_pane_g2

0x1279,	// (0x0003fc72) list_double_fisheye_pane_g3_ParamLimits

0x1279,	// (0x0003fc72) list_double_fisheye_pane_g3

0x0004,

0xfc8b,	// (0x0004e684) list_double_fisheye_pane_g_ParamLimits

0xfc8b,	// (0x0004e684) list_double_fisheye_pane_g

0x12a2,	// (0x0003fc9b) list_double_fisheye_pane_t1_ParamLimits

0x12a2,	// (0x0003fc9b) list_double_fisheye_pane_t1

0x12bd,	// (0x0003fcb6) list_double_fisheye_pane_t2_ParamLimits

0x12bd,	// (0x0003fcb6) list_double_fisheye_pane_t2

0x0001,

0xfc96,	// (0x0004e68f) list_double_fisheye_pane_t_ParamLimits

0xfc96,	// (0x0004e68f) list_double_fisheye_pane_t

0xa237,	// (0x00048c30) main_call5_pane

0x8e22,	// (0x0004781b) sc_swipe_pane_ParamLimits

0x8e22,	// (0x0004781b) sc_swipe_pane

0x916a,	// (0x00047b63) call5_image_pane_ParamLimits

0x916a,	// (0x00047b63) call5_image_pane

0x917c,	// (0x00047b75) call5_swipe_1_pane_ParamLimits

0x917c,	// (0x00047b75) call5_swipe_1_pane

0x9188,	// (0x00047b81) call5_swipe_2_pane_ParamLimits

0x9188,	// (0x00047b81) call5_swipe_2_pane

0x91a2,	// (0x00047b9b) popup_call5_audio_first_window_ParamLimits

0x91a2,	// (0x00047b9b) popup_call5_audio_first_window

0xd068,	// (0x0004ba61) call5_swipe_1_pane_g1_ParamLimits

0xd068,	// (0x0004ba61) call5_swipe_1_pane_g1

0xe5eb,	// (0x0004cfe4) call5_swipe_1_pane_g2_ParamLimits

0xe5eb,	// (0x0004cfe4) call5_swipe_1_pane_g2

0x0001,

0xfc9b,	// (0x0004e694) call5_swipe_1_pane_g_ParamLimits

0xfc9b,	// (0x0004e694) call5_swipe_1_pane_g

0xe5f7,	// (0x0004cff0) call5_swipe_1_pane_t1_ParamLimits

0xe5f7,	// (0x0004cff0) call5_swipe_1_pane_t1

0xd068,	// (0x0004ba61) call5_swipe_2_pane_g1_ParamLimits

0xd068,	// (0x0004ba61) call5_swipe_2_pane_g1

0xe60c,	// (0x0004d005) call5_swipe_2_pane_g2_ParamLimits

0xe60c,	// (0x0004d005) call5_swipe_2_pane_g2

0x0001,

0xfca0,	// (0x0004e699) call5_swipe_2_pane_g_ParamLimits

0xfca0,	// (0x0004e699) call5_swipe_2_pane_g

0xe618,	// (0x0004d011) call5_swipe_2_pane_t1_ParamLimits

0xe618,	// (0x0004d011) call5_swipe_2_pane_t1

0xe62d,	// (0x0004d026) sc_swipe_pane_g1_ParamLimits

0xe62d,	// (0x0004d026) sc_swipe_pane_g1

0xe63a,	// (0x0004d033) sc_swipe_pane_g2_ParamLimits

0xe63a,	// (0x0004d033) sc_swipe_pane_g2

0x0001,

0xfca5,	// (0x0004e69e) sc_swipe_pane_g_ParamLimits

0xfca5,	// (0x0004e69e) sc_swipe_pane_g

0xe646,	// (0x0004d03f) sc_swipe_pane_t1_ParamLimits

0xe646,	// (0x0004d03f) sc_swipe_pane_t1

0xa237,	// (0x00048c30) main_cmail_launcher_pane

0x91b2,	// (0x00047bab) aid_size_cell_cmail_l_ParamLimits

0x91b2,	// (0x00047bab) aid_size_cell_cmail_l

0x91c0,	// (0x00047bb9) grid_cmail_l_pane_ParamLimits

0x91c0,	// (0x00047bb9) grid_cmail_l_pane

0x91d0,	// (0x00047bc9) cell_cmail_l_pane_ParamLimits

0x91d0,	// (0x00047bc9) cell_cmail_l_pane

0xe65b,	// (0x0004d054) cell_cmail_l_pane_g1_ParamLimits

0xe65b,	// (0x0004d054) cell_cmail_l_pane_g1

0xe667,	// (0x0004d060) cell_cmail_l_pane_t1_ParamLimits

0xe667,	// (0x0004d060) cell_cmail_l_pane_t1

0xe67d,	// (0x0004d076) cell_cmail_l_pane_t2_ParamLimits

0xe67d,	// (0x0004d076) cell_cmail_l_pane_t2

0x0001,

0xfcaa,	// (0x0004e6a3) cell_cmail_l_pane_t_ParamLimits

0xfcaa,	// (0x0004e6a3) cell_cmail_l_pane_t

0xbcb3,	// (0x0004a6ac) grid_highlight_pane_cp018_ParamLimits

0xbcb3,	// (0x0004a6ac) grid_highlight_pane_cp018

0x1f03,	// (0x000408fc) main2_pane_ParamLimits

0x1f03,	// (0x000408fc) main2_pane

0xaa42,	// (0x0004943b) popup_sp_fs_action_menu_bg_pane_g1

0xaa4a,	// (0x00049443) popup_sp_fs_action_menu_bg_pane_g2

0xaa52,	// (0x0004944b) popup_sp_fs_action_menu_bg_pane_g3

0xaa5a,	// (0x00049453) popup_sp_fs_action_menu_bg_pane_g4

0xaa62,	// (0x0004945b) popup_sp_fs_action_menu_bg_pane_g5

0xaa6a,	// (0x00049463) popup_sp_fs_action_menu_bg_pane_g6

0xaa72,	// (0x0004946b) popup_sp_fs_action_menu_bg_pane_g7

0xaa7a,	// (0x00049473) popup_sp_fs_action_menu_bg_pane_g8

0xaa82,	// (0x0004947b) popup_sp_fs_action_menu_bg_pane_g9

0xaa8a,	// (0x00049483) popup_sp_fs_action_menu_bg_pane_g10

0xaa8a,	// (0x00049483) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0004db68) popup_sp_fs_action_menu_bg_pane_g

0x0a79,	// (0x0003f472) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0a79,	// (0x0003f472) list_medium_line_x2_t3_g3_g1

0x0a85,	// (0x0003f47e) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0a85,	// (0x0003f47e) list_medium_line_x2_t3_g3_g2

0x0a91,	// (0x0003f48a) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0a91,	// (0x0003f48a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0004dc16) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0004dc16) list_medium_line_x2_t3_g3_g

0x0a9d,	// (0x0003f496) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0a9d,	// (0x0003f496) list_medium_line_x2_t3_g3_t1

0x0ab2,	// (0x0003f4ab) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0ab2,	// (0x0003f4ab) list_medium_line_x2_t3_g3_t2

0x0ac6,	// (0x0003f4bf) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0ac6,	// (0x0003f4bf) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0004dc1d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0004dc1d) list_medium_line_x2_t3_g3_t

0x0a79,	// (0x0003f472) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0a79,	// (0x0003f472) list_medium_line_x2_t3_g2_g1

0x0a91,	// (0x0003f48a) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0a91,	// (0x0003f48a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0004dc24) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0004dc24) list_medium_line_x2_t3_g2_g

0x0adb,	// (0x0003f4d4) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0adb,	// (0x0003f4d4) list_medium_line_x2_t3_g2_t1

0x0af1,	// (0x0003f4ea) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0af1,	// (0x0003f4ea) list_medium_line_x2_t3_g2_t2

0x0b03,	// (0x0003f4fc) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0b03,	// (0x0003f4fc) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0004dc29) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0004dc29) list_medium_line_x2_t3_g2_t

0x0a79,	// (0x0003f472) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0a79,	// (0x0003f472) list_medium_line_x2_t4_g4_g1

0x0b21,	// (0x0003f51a) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0b21,	// (0x0003f51a) list_medium_line_x2_t4_g4_g2

0x0a85,	// (0x0003f47e) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0a85,	// (0x0003f47e) list_medium_line_x2_t4_g4_g3

0x0b2d,	// (0x0003f526) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0b2d,	// (0x0003f526) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0004dc30) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0004dc30) list_medium_line_x2_t4_g4_g

0x0b39,	// (0x0003f532) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0b39,	// (0x0003f532) list_medium_line_x2_t4_g4_t1

0x0b53,	// (0x0003f54c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0b53,	// (0x0003f54c) list_medium_line_x2_t4_g4_t2

0x0b69,	// (0x0003f562) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0b69,	// (0x0003f562) list_medium_line_x2_t4_g4_t3

0x0b7e,	// (0x0003f577) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0b7e,	// (0x0003f577) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0004dc39) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0004dc39) list_medium_line_x2_t4_g4_t

0x0a79,	// (0x0003f472) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0a79,	// (0x0003f472) list_medium_line_x2_t2_g4_g1

0x0b21,	// (0x0003f51a) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0b21,	// (0x0003f51a) list_medium_line_x2_t2_g4_g2

0x0a85,	// (0x0003f47e) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0a85,	// (0x0003f47e) list_medium_line_x2_t2_g4_g3

0x0a91,	// (0x0003f48a) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0a91,	// (0x0003f48a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0004dca0) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0004dca0) list_medium_line_x2_t2_g4_g

0x0b90,	// (0x0003f589) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0b90,	// (0x0003f589) list_medium_line_x2_t2_g4_t1

0x0ac6,	// (0x0003f4bf) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0ac6,	// (0x0003f4bf) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0004dca9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0004dca9) list_medium_line_x2_t2_g4_t

0x0a79,	// (0x0003f472) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0a79,	// (0x0003f472) list_medium_line_x2_t2_g3_g1

0x0a85,	// (0x0003f47e) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0a85,	// (0x0003f47e) list_medium_line_x2_t2_g3_g2

0x0a91,	// (0x0003f48a) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0a91,	// (0x0003f48a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0004dc16) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0004dc16) list_medium_line_x2_t2_g3_g

0x0ba5,	// (0x0003f59e) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0ba5,	// (0x0003f59e) list_medium_line_x2_t2_g3_t1

0x0ac6,	// (0x0003f4bf) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0ac6,	// (0x0003f4bf) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0004dcae) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0004dcae) list_medium_line_x2_t2_g3_t

0x4159,	// (0x00042b52) main_sp_fs_list_pane_ParamLimits

0x4159,	// (0x00042b52) main_sp_fs_list_pane

0x4165,	// (0x00042b5e) sp_fs_scroll_pane_ParamLimits

0x4165,	// (0x00042b5e) sp_fs_scroll_pane

0x0bba,	// (0x0003f5b3) list_medium_line_x2_t3_t1

0x0bca,	// (0x0003f5c3) list_medium_line_x2_t3_t2

0x0bd8,	// (0x0003f5d1) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0004dcf9) list_medium_line_x2_t3_t

0x0be6,	// (0x0003f5df) list_medium_line_x3_t4_t1

0x0bf6,	// (0x0003f5ef) list_medium_line_x3_t4_t2

0x0c04,	// (0x0003f5fd) list_medium_line_x3_t4_t3

0x0bd8,	// (0x0003f5d1) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0004dd00) list_medium_line_x3_t4_t

0x0c12,	// (0x0003f60b) list_medium_line_x4_t5_t1

0x0c22,	// (0x0003f61b) list_medium_line_x4_t5_t2

0x0c04,	// (0x0003f5fd) list_medium_line_x4_t5_t3

0x0c30,	// (0x0003f629) list_medium_line_x4_t5_t4

0x0bd8,	// (0x0003f5d1) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0004dd09) list_medium_line_x4_t5_t

0x0a79,	// (0x0003f472) list_medium_line_t4_g4_g1_ParamLimits

0x0a79,	// (0x0003f472) list_medium_line_t4_g4_g1

0x0b2d,	// (0x0003f526) list_medium_line_t4_g4_g2_ParamLimits

0x0b2d,	// (0x0003f526) list_medium_line_t4_g4_g2

0x0c3e,	// (0x0003f637) list_medium_line_t4_g4_g3_ParamLimits

0x0c3e,	// (0x0003f637) list_medium_line_t4_g4_g3

0x0a91,	// (0x0003f48a) list_medium_line_t4_g4_g4_ParamLimits

0x0a91,	// (0x0003f48a) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0004dd14) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0004dd14) list_medium_line_t4_g4_g

0x0c4a,	// (0x0003f643) list_medium_line_t4_g4_t1_ParamLimits

0x0c4a,	// (0x0003f643) list_medium_line_t4_g4_t1

0x0c5f,	// (0x0003f658) list_medium_line_t4_g4_t2_ParamLimits

0x0c5f,	// (0x0003f658) list_medium_line_t4_g4_t2

0x0c75,	// (0x0003f66e) list_medium_line_t4_g4_t3_ParamLimits

0x0c75,	// (0x0003f66e) list_medium_line_t4_g4_t3

0x0ac6,	// (0x0003f4bf) list_medium_line_t4_g4_t4_ParamLimits

0x0ac6,	// (0x0003f4bf) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0004dd1d) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0004dd1d) list_medium_line_t4_g4_t

0x4284,	// (0x00042c7d) chi_dic_find_pane_g1

0x5190,	// (0x00043b89) main_tport_pane

0x0ec1,	// (0x0003f8ba) list_medium_line_plain_t1

0x0ecf,	// (0x0003f8c8) list_medium_line_t2_g2_g1_ParamLimits

0x0ecf,	// (0x0003f8c8) list_medium_line_t2_g2_g1

0x0edb,	// (0x0003f8d4) list_medium_line_t2_g2_g2_ParamLimits

0x0edb,	// (0x0003f8d4) list_medium_line_t2_g2_g2

0x0001,

0xf9e9,	// (0x0004e3e2) list_medium_line_t2_g2_g_ParamLimits

0xf9e9,	// (0x0004e3e2) list_medium_line_t2_g2_g

0x0ee7,	// (0x0003f8e0) list_medium_line_t2_g2_t1_ParamLimits

0x0ee7,	// (0x0003f8e0) list_medium_line_t2_g2_t1

0x0f01,	// (0x0003f8fa) list_medium_line_t2_g2_t2_ParamLimits

0x0f01,	// (0x0003f8fa) list_medium_line_t2_g2_t2

0x0001,

0xf9ee,	// (0x0004e3e7) list_medium_line_t2_g2_t_ParamLimits

0xf9ee,	// (0x0004e3e7) list_medium_line_t2_g2_t

0x1121,	// (0x0003fb1a) aid_sp_fs_list_icon_a_sm

0x1129,	// (0x0003fb22) aid_sp_fs_list_icon_d

0x1131,	// (0x0003fb2a) aid_sp_fs_text_primary

0xe69a,	// (0x0004d093) aid_sp_fs_text_secondary

0x82a6,	// (0x00046c9f) list_medium_line

0x82a6,	// (0x00046c9f) list_medium_line_g2

0x82a6,	// (0x00046c9f) list_medium_line_g3

0x82a6,	// (0x00046c9f) list_medium_line_plain

0x82a6,	// (0x00046c9f) list_medium_line_plain_t2

0x82a6,	// (0x00046c9f) list_medium_line_plain_t3

0x82a6,	// (0x00046c9f) list_medium_line_right_icon

0x82a6,	// (0x00046c9f) list_medium_line_right_iconx2

0x82a6,	// (0x00046c9f) list_medium_line_t2

0x82a6,	// (0x00046c9f) list_medium_line_t2_g2

0x82a6,	// (0x00046c9f) list_medium_line_t2_g3

0x82a6,	// (0x00046c9f) list_medium_line_t2_right_icon

0x82a6,	// (0x00046c9f) list_medium_line_t2_right_iconx2

0x82a6,	// (0x00046c9f) list_medium_line_t3

0x82a6,	// (0x00046c9f) list_medium_line_t3_g2

0x82a6,	// (0x00046c9f) list_medium_line_t3_g3

0x82a6,	// (0x00046c9f) list_medium_line_t3_right_iconx2

0x82af,	// (0x00046ca8) list_medium_line_t4_g4

0x82b8,	// (0x00046cb1) list_medium_line_x2

0x82b8,	// (0x00046cb1) list_medium_line_x2_t2_g2

0x82b8,	// (0x00046cb1) list_medium_line_x2_t2_g3

0x82b8,	// (0x00046cb1) list_medium_line_x2_t2_g4

0x82b8,	// (0x00046cb1) list_medium_line_x2_t3

0x82b8,	// (0x00046cb1) list_medium_line_x2_t3_g2

0x82b8,	// (0x00046cb1) list_medium_line_x2_t3_g3

0x82b8,	// (0x00046cb1) list_medium_line_x2_t3_g4

0x82b8,	// (0x00046cb1) list_medium_line_x2_t4_g2

0x82b8,	// (0x00046cb1) list_medium_line_x2_t4_g4

0x82c1,	// (0x00046cba) list_medium_line_x3

0x82c1,	// (0x00046cba) list_medium_line_x3_t4

0x82c1,	// (0x00046cba) list_medium_line_x3_t4_g4

0x82af,	// (0x00046ca8) list_medium_line_x4_t4

0x82af,	// (0x00046ca8) list_medium_line_x4_t4_g7

0x82af,	// (0x00046ca8) list_medium_line_x4_t5

0x113a,	// (0x0003fb33) list_single_fs_dyc_pane_ParamLimits

0x113a,	// (0x0003fb33) list_single_fs_dyc_pane

0x0a79,	// (0x0003f472) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0a79,	// (0x0003f472) list_medium_line_x4_t4_g7_g1

0x117a,	// (0x0003fb73) list_medium_line_x4_t4_g7_g2_ParamLimits

0x117a,	// (0x0003fb73) list_medium_line_x4_t4_g7_g2

0x1186,	// (0x0003fb7f) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1186,	// (0x0003fb7f) list_medium_line_x4_t4_g7_g3

0x1195,	// (0x0003fb8e) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1195,	// (0x0003fb8e) list_medium_line_x4_t4_g7_g4

0x11a1,	// (0x0003fb9a) list_medium_line_x4_t4_g7_g5_ParamLimits

0x11a1,	// (0x0003fb9a) list_medium_line_x4_t4_g7_g5

0x11b0,	// (0x0003fba9) list_medium_line_x4_t4_g7_g6_ParamLimits

0x11b0,	// (0x0003fba9) list_medium_line_x4_t4_g7_g6

0x11bf,	// (0x0003fbb8) list_medium_line_x4_t4_g7_g7_ParamLimits

0x11bf,	// (0x0003fbb8) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb2,	// (0x0004e5ab) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb2,	// (0x0004e5ab) list_medium_line_x4_t4_g7_g

0x11cb,	// (0x0003fbc4) list_medium_line_x4_t4_g7_t1_ParamLimits

0x11cb,	// (0x0003fbc4) list_medium_line_x4_t4_g7_t1

0x11e0,	// (0x0003fbd9) list_medium_line_x4_t4_g7_t2_ParamLimits

0x11e0,	// (0x0003fbd9) list_medium_line_x4_t4_g7_t2

0x11f5,	// (0x0003fbee) list_medium_line_x4_t4_g7_t3_ParamLimits

0x11f5,	// (0x0003fbee) list_medium_line_x4_t4_g7_t3

0x120a,	// (0x0003fc03) list_medium_line_x4_t4_g7_t4_ParamLimits

0x120a,	// (0x0003fc03) list_medium_line_x4_t4_g7_t4

0x121c,	// (0x0003fc15) list_medium_line_x4_t4_g7_t5_ParamLimits

0x121c,	// (0x0003fc15) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc1,	// (0x0004e5ba) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc1,	// (0x0004e5ba) list_medium_line_x4_t4_g7_t

0x122e,	// (0x0003fc27) list_single_dyc_row_pane_ParamLimits

0x122e,	// (0x0003fc27) list_single_dyc_row_pane

0x915e,	// (0x00047b57) call5_gesture_pane_ParamLimits

0x915e,	// (0x00047b57) call5_gesture_pane

0x9194,	// (0x00047b8d) call5_windows_pane_ParamLimits

0x9194,	// (0x00047b8d) call5_windows_pane

0x91e5,	// (0x00047bde) call5_swipe_1_pane_cp_ParamLimits

0x91e5,	// (0x00047bde) call5_swipe_1_pane_cp

0x91f1,	// (0x00047bea) call5_swipe_2_pane_cp_ParamLimits

0x91f1,	// (0x00047bea) call5_swipe_2_pane_cp

0xab68,	// (0x00049561) call5_image_pane_cp

0x91fd,	// (0x00047bf6) popup_call5_audio_first_window_cp_ParamLimits

0x91fd,	// (0x00047bf6) popup_call5_audio_first_window_cp

0xe62d,	// (0x0004d026) call5_swipe_1_pane_g1_cp_ParamLimits

0xe62d,	// (0x0004d026) call5_swipe_1_pane_g1_cp

0xe6a3,	// (0x0004d09c) call5_swipe_1_pane_g2_cp

0xe646,	// (0x0004d03f) call5_swipe_1_pane_t1_cp_ParamLimits

0xe646,	// (0x0004d03f) call5_swipe_1_pane_t1_cp

0xe62d,	// (0x0004d026) call5_swipe_2_pane_g1_cp_ParamLimits

0xe62d,	// (0x0004d026) call5_swipe_2_pane_g1_cp

0xe6ab,	// (0x0004d0a4) call5_swipe_2_pane_g2_cp

0xe6b3,	// (0x0004d0ac) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6b3,	// (0x0004d0ac) call5_swipe_2_pane_t1_cp

0xbcb3,	// (0x0004a6ac) main_sp_fs_email_pane

0xda14,	// (0x0004c40d) main_sp_fs_listscroll_pane_te

0x920b,	// (0x00047c04) popup_sp_fs_action_menu_pane_ParamLimits

0x920b,	// (0x00047c04) popup_sp_fs_action_menu_pane

0xce41,	// (0x0004b83a) bg_sp_fs_ctrlbar_pane_g1

0xe6c8,	// (0x0004d0c1) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6d1,	// (0x0004d0ca) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6da,	// (0x0004d0d3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xce41,	// (0x0004b83a) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcaf,	// (0x0004e6a8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcc0c,	// (0x0004b605) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcc0c,	// (0x0004b605) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6e3,	// (0x0004d0dc) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6e3,	// (0x0004d0dc) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6ef,	// (0x0004d0e8) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6ef,	// (0x0004d0e8) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcb8,	// (0x0004e6b1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcb8,	// (0x0004e6b1) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6fb,	// (0x0004d0f4) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6fb,	// (0x0004d0f4) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x12df,	// (0x0003fcd8) list_medium_line_t2_right_icon_g1

0x12e7,	// (0x0003fce0) list_medium_line_t2_right_icon_t1

0x12f7,	// (0x0003fcf0) list_medium_line_t2_right_icon_t2

0x0001,

0xfcbd,	// (0x0004e6b6) list_medium_line_t2_right_icon_t

0xc9f5,	// (0x0004b3ee) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc9f5,	// (0x0004b3ee) bg_sp_fs_ctrlbar_pane

0x92aa,	// (0x00047ca3) main_sp_fs_ctrlbar_button_pane_cp01

0x92b2,	// (0x00047cab) main_sp_fs_ctrlbar_ddmenu_pane

0xe74f,	// (0x0004d148) main_sp_fs_ctrlbar_pane_g1

0xe75b,	// (0x0004d154) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcc2,	// (0x0004e6bb) main_sp_fs_ctrlbar_pane_g

0x92f0,	// (0x00047ce9) main_sp_fs_ctrlbar_pane_t1

0x932d,	// (0x00047d26) main_sp_fs_ctrlbar_pane

0x9347,	// (0x00047d40) main_sp_fs_listscroll_pane_te_cp01

0x1305,	// (0x0003fcfe) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1305,	// (0x0003fcfe) popup_sp_fs_action_menu_pane_cp01

0xbcb3,	// (0x0004a6ac) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xbcb3,	// (0x0004a6ac) bg_sp_fs_highlight_list_pane_cp01

0x132f,	// (0x0003fd28) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x132f,	// (0x0003fd28) sp_fs_action_menu_list_gene_pane_g1

0xe782,	// (0x0004d17b) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe782,	// (0x0004d17b) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd0,	// (0x0004e6c9) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd0,	// (0x0004e6c9) sp_fs_action_menu_list_gene_pane_g

0x133e,	// (0x0003fd37) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x133e,	// (0x0003fd37) sp_fs_action_menu_list_gene_pane_t1

0x1356,	// (0x0003fd4f) sp_fs_action_menu_list_gene_pane_ParamLimits

0x1356,	// (0x0003fd4f) sp_fs_action_menu_list_gene_pane

0xe78f,	// (0x0004d188) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe78f,	// (0x0004d188) popup_sp_fs_action_menu_bg_pane

0x1379,	// (0x0003fd72) sp_fs_action_menu_list_pane_ParamLimits

0x1379,	// (0x0003fd72) sp_fs_action_menu_list_pane

0x139d,	// (0x0003fd96) sp_fs_scroll_pane_cp01_ParamLimits

0x139d,	// (0x0003fd96) sp_fs_scroll_pane_cp01

0x13c3,	// (0x0003fdbc) list_medium_line_plain_t2_t1

0x13d3,	// (0x0003fdcc) list_medium_line_plain_t2_t2

0x0001,

0xfcd5,	// (0x0004e6ce) list_medium_line_plain_t2_t

0x13e1,	// (0x0003fdda) list_medium_line_plain_t3_t1

0x13f1,	// (0x0003fdea) list_medium_line_plain_t3_t2

0x13ff,	// (0x0003fdf8) list_medium_line_plain_t3_t3

0x0002,

0xfcda,	// (0x0004e6d3) list_medium_line_plain_t3_t

0x0a79,	// (0x0003f472) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0a79,	// (0x0003f472) list_medium_line_x2_t2_g2_g1

0x0a91,	// (0x0003f48a) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0a91,	// (0x0003f48a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0004dc24) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0004dc24) list_medium_line_x2_t2_g2_g

0x0c4a,	// (0x0003f643) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0c4a,	// (0x0003f643) list_medium_line_x2_t2_g2_t1

0x0ac6,	// (0x0003f4bf) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0ac6,	// (0x0003f4bf) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce1,	// (0x0004e6da) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce1,	// (0x0004e6da) list_medium_line_x2_t2_g2_t

0x0a79,	// (0x0003f472) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0a79,	// (0x0003f472) list_medium_line_x2_t4_g2_g1

0x140d,	// (0x0003fe06) list_medium_line_x2_t4_g2_g2_ParamLimits

0x140d,	// (0x0003fe06) list_medium_line_x2_t4_g2_g2

0x0001,

0xfce6,	// (0x0004e6df) list_medium_line_x2_t4_g2_g_ParamLimits

0xfce6,	// (0x0004e6df) list_medium_line_x2_t4_g2_g

0x141f,	// (0x0003fe18) list_medium_line_x2_t4_g2_t1_ParamLimits

0x141f,	// (0x0003fe18) list_medium_line_x2_t4_g2_t1

0x1439,	// (0x0003fe32) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1439,	// (0x0003fe32) list_medium_line_x2_t4_g2_t2

0x144f,	// (0x0003fe48) list_medium_line_x2_t4_g2_t3_ParamLimits

0x144f,	// (0x0003fe48) list_medium_line_x2_t4_g2_t3

0x0ac6,	// (0x0003f4bf) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0ac6,	// (0x0003f4bf) list_medium_line_x2_t4_g2_t4

0x0003,

0xfceb,	// (0x0004e6e4) list_medium_line_x2_t4_g2_t_ParamLimits

0xfceb,	// (0x0004e6e4) list_medium_line_x2_t4_g2_t

0x1464,	// (0x0003fe5d) list_medium_line_t3_right_iconx2_g1

0x12df,	// (0x0003fcd8) list_medium_line_t3_right_iconx2_g2

0x146c,	// (0x0003fe65) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcf4,	// (0x0004e6ed) list_medium_line_t3_right_iconx2_g

0x1476,	// (0x0003fe6f) list_medium_line_t3_right_iconx2_t1

0x1486,	// (0x0003fe7f) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcfb,	// (0x0004e6f4) list_medium_line_t3_right_iconx2_t

0x0a79,	// (0x0003f472) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0a79,	// (0x0003f472) list_medium_line_x3_t4_g4_g1

0x0a85,	// (0x0003f47e) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0a85,	// (0x0003f47e) list_medium_line_x3_t4_g4_g2

0x0b2d,	// (0x0003f526) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0b2d,	// (0x0003f526) list_medium_line_x3_t4_g4_g3

0x1494,	// (0x0003fe8d) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1494,	// (0x0003fe8d) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd00,	// (0x0004e6f9) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd00,	// (0x0004e6f9) list_medium_line_x3_t4_g4_g

0x14a0,	// (0x0003fe99) list_medium_line_x3_t4_g4_t1_ParamLimits

0x14a0,	// (0x0003fe99) list_medium_line_x3_t4_g4_t1

0x14b7,	// (0x0003feb0) list_medium_line_x3_t4_g4_t2_ParamLimits

0x14b7,	// (0x0003feb0) list_medium_line_x3_t4_g4_t2

0x14cc,	// (0x0003fec5) list_medium_line_x3_t4_g4_t3_ParamLimits

0x14cc,	// (0x0003fec5) list_medium_line_x3_t4_g4_t3

0x14e1,	// (0x0003feda) list_medium_line_x3_t4_g4_t4_ParamLimits

0x14e1,	// (0x0003feda) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd09,	// (0x0004e702) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd09,	// (0x0004e702) list_medium_line_x3_t4_g4_t

0x14fe,	// (0x0003fef7) list_single_dyc_row_text_pane_t1_ParamLimits

0x14fe,	// (0x0003fef7) list_single_dyc_row_text_pane_t1

0x153b,	// (0x0003ff34) list_single_dyc_row_text_pane_t2_ParamLimits

0x153b,	// (0x0003ff34) list_single_dyc_row_text_pane_t2

0x15b1,	// (0x0003ffaa) list_single_dyc_row_text_pane_t3_ParamLimits

0x15b1,	// (0x0003ffaa) list_single_dyc_row_text_pane_t3

0x0005,

0xfd12,	// (0x0004e70b) list_single_dyc_row_text_pane_t_ParamLimits

0xfd12,	// (0x0004e70b) list_single_dyc_row_text_pane_t

0x1688,	// (0x00040081) list_single_dyc_row_pane_g1_ParamLimits

0x1688,	// (0x00040081) list_single_dyc_row_pane_g1

0x1694,	// (0x0004008d) list_single_dyc_row_pane_g2_ParamLimits

0x1694,	// (0x0004008d) list_single_dyc_row_pane_g2

0x16a0,	// (0x00040099) list_single_dyc_row_pane_g3_ParamLimits

0x16a0,	// (0x00040099) list_single_dyc_row_pane_g3

0x16ac,	// (0x000400a5) list_single_dyc_row_pane_g4_ParamLimits

0x16ac,	// (0x000400a5) list_single_dyc_row_pane_g4

0x0003,

0xfd1f,	// (0x0004e718) list_single_dyc_row_pane_g_ParamLimits

0xfd1f,	// (0x0004e718) list_single_dyc_row_pane_g

0x16b8,	// (0x000400b1) list_single_dyc_row_text_pane_ParamLimits

0x16b8,	// (0x000400b1) list_single_dyc_row_text_pane

0xa237,	// (0x00048c30) bg_sp_fs_scroll_pane

0xe79d,	// (0x0004d196) thumb_sp_fs_scroll_pane

0x0ecf,	// (0x0003f8c8) list_medium_line_g1_ParamLimits

0x0ecf,	// (0x0003f8c8) list_medium_line_g1

0x16d7,	// (0x000400d0) list_medium_line_t1_ParamLimits

0x16d7,	// (0x000400d0) list_medium_line_t1

0x0a79,	// (0x0003f472) list_medium_line_x2_g1_ParamLimits

0x0a79,	// (0x0003f472) list_medium_line_x2_g1

0x0a85,	// (0x0003f47e) list_medium_line_x2_g2_ParamLimits

0x0a85,	// (0x0003f47e) list_medium_line_x2_g2

0x0001,

0xfd28,	// (0x0004e721) list_medium_line_x2_g_ParamLimits

0xfd28,	// (0x0004e721) list_medium_line_x2_g

0x16ec,	// (0x000400e5) list_medium_line_x2_t1_ParamLimits

0x16ec,	// (0x000400e5) list_medium_line_x2_t1

0x0a79,	// (0x0003f472) list_medium_line_x3_g1_ParamLimits

0x0a79,	// (0x0003f472) list_medium_line_x3_g1

0x0a85,	// (0x0003f47e) list_medium_line_x3_g2_ParamLimits

0x0a85,	// (0x0003f47e) list_medium_line_x3_g2

0x0001,

0xfd28,	// (0x0004e721) list_medium_line_x3_g_ParamLimits

0xfd28,	// (0x0004e721) list_medium_line_x3_g

0x16ec,	// (0x000400e5) list_medium_line_x3_t1_ParamLimits

0x16ec,	// (0x000400e5) list_medium_line_x3_t1

0xe7a6,	// (0x0004d19f) thumb_sp_fs_scroll_pane_g1

0xe7af,	// (0x0004d1a8) thumb_sp_fs_scroll_pane_g2

0xe7b8,	// (0x0004d1b1) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd2d,	// (0x0004e726) thumb_sp_fs_scroll_pane_g

0xe7a6,	// (0x0004d19f) bg_sp_fs_scroll_pane_g1

0xe7af,	// (0x0004d1a8) bg_sp_fs_scroll_pane_g2

0xe7b8,	// (0x0004d1b1) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd2d,	// (0x0004e726) bg_sp_fs_scroll_pane_g

0x0a79,	// (0x0003f472) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0a79,	// (0x0003f472) list_medium_line_x2_t3_g4_g1

0x0b21,	// (0x0003f51a) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0b21,	// (0x0003f51a) list_medium_line_x2_t3_g4_g2

0x0a85,	// (0x0003f47e) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0a85,	// (0x0003f47e) list_medium_line_x2_t3_g4_g3

0x0a91,	// (0x0003f48a) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0a91,	// (0x0003f48a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0004dca0) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0004dca0) list_medium_line_x2_t3_g4_g

0x1702,	// (0x000400fb) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1702,	// (0x000400fb) list_medium_line_x2_t3_g4_t1

0x1718,	// (0x00040111) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1718,	// (0x00040111) list_medium_line_x2_t3_g4_t2

0x0ac6,	// (0x0003f4bf) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0ac6,	// (0x0003f4bf) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd34,	// (0x0004e72d) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd34,	// (0x0004e72d) list_medium_line_x2_t3_g4_t

0x0ecf,	// (0x0003f8c8) list_medium_line_g2_g1_ParamLimits

0x0ecf,	// (0x0003f8c8) list_medium_line_g2_g1

0x0edb,	// (0x0003f8d4) list_medium_line_g2_g2_ParamLimits

0x0edb,	// (0x0003f8d4) list_medium_line_g2_g2

0x0001,

0xf9e9,	// (0x0004e3e2) list_medium_line_g2_g_ParamLimits

0xf9e9,	// (0x0004e3e2) list_medium_line_g2_g

0x1732,	// (0x0004012b) list_medium_line_g2_t1_ParamLimits

0x1732,	// (0x0004012b) list_medium_line_g2_t1

0x0ecf,	// (0x0003f8c8) list_medium_line_t3_g2_g1_ParamLimits

0x0ecf,	// (0x0003f8c8) list_medium_line_t3_g2_g1

0x0edb,	// (0x0003f8d4) list_medium_line_t3_g2_g2_ParamLimits

0x0edb,	// (0x0003f8d4) list_medium_line_t3_g2_g2

0x0001,

0xf9e9,	// (0x0004e3e2) list_medium_line_t3_g2_g_ParamLimits

0xf9e9,	// (0x0004e3e2) list_medium_line_t3_g2_g

0x1747,	// (0x00040140) list_medium_line_t3_g2_t1_ParamLimits

0x1747,	// (0x00040140) list_medium_line_t3_g2_t1

0x1761,	// (0x0004015a) list_medium_line_t3_g2_t2_ParamLimits

0x1761,	// (0x0004015a) list_medium_line_t3_g2_t2

0x1777,	// (0x00040170) list_medium_line_t3_g2_t3_ParamLimits

0x1777,	// (0x00040170) list_medium_line_t3_g2_t3

0x0002,

0xfd3b,	// (0x0004e734) list_medium_line_t3_g2_t_ParamLimits

0xfd3b,	// (0x0004e734) list_medium_line_t3_g2_t

0x12df,	// (0x0003fcd8) list_medium_line_right_icon_g1

0x1791,	// (0x0004018a) list_medium_line_right_icon_t1

0x0ecf,	// (0x0003f8c8) list_medium_line_t2_g1_ParamLimits

0x0ecf,	// (0x0003f8c8) list_medium_line_t2_g1

0x179f,	// (0x00040198) list_medium_line_t2_t1_ParamLimits

0x179f,	// (0x00040198) list_medium_line_t2_t1

0x17b9,	// (0x000401b2) list_medium_line_t2_t2_ParamLimits

0x17b9,	// (0x000401b2) list_medium_line_t2_t2

0x0001,

0xfd42,	// (0x0004e73b) list_medium_line_t2_t_ParamLimits

0xfd42,	// (0x0004e73b) list_medium_line_t2_t

0x0ecf,	// (0x0003f8c8) list_medium_line_t3_g1_ParamLimits

0x0ecf,	// (0x0003f8c8) list_medium_line_t3_g1

0x17ce,	// (0x000401c7) list_medium_line_t3_t1_ParamLimits

0x17ce,	// (0x000401c7) list_medium_line_t3_t1

0x17e8,	// (0x000401e1) list_medium_line_t3_t2_ParamLimits

0x17e8,	// (0x000401e1) list_medium_line_t3_t2

0x17fe,	// (0x000401f7) list_medium_line_t3_t3_ParamLimits

0x17fe,	// (0x000401f7) list_medium_line_t3_t3

0x0002,

0xfd47,	// (0x0004e740) list_medium_line_t3_t_ParamLimits

0xfd47,	// (0x0004e740) list_medium_line_t3_t

0x0ecf,	// (0x0003f8c8) list_medium_line_g3_g1_ParamLimits

0x0ecf,	// (0x0003f8c8) list_medium_line_g3_g1

0x1813,	// (0x0004020c) list_medium_line_g3_g2_ParamLimits

0x1813,	// (0x0004020c) list_medium_line_g3_g2

0x0edb,	// (0x0003f8d4) list_medium_line_g3_g3_ParamLimits

0x0edb,	// (0x0003f8d4) list_medium_line_g3_g3

0x0002,

0xfd4e,	// (0x0004e747) list_medium_line_g3_g_ParamLimits

0xfd4e,	// (0x0004e747) list_medium_line_g3_g

0x181f,	// (0x00040218) list_medium_line_g3_t1_ParamLimits

0x181f,	// (0x00040218) list_medium_line_g3_t1

0x0ecf,	// (0x0003f8c8) list_medium_line_t2_g3_g1_ParamLimits

0x0ecf,	// (0x0003f8c8) list_medium_line_t2_g3_g1

0x1813,	// (0x0004020c) list_medium_line_t2_g3_g2_ParamLimits

0x1813,	// (0x0004020c) list_medium_line_t2_g3_g2

0x0edb,	// (0x0003f8d4) list_medium_line_t2_g3_g3_ParamLimits

0x0edb,	// (0x0003f8d4) list_medium_line_t2_g3_g3

0x0002,

0xfd4e,	// (0x0004e747) list_medium_line_t2_g3_g_ParamLimits

0xfd4e,	// (0x0004e747) list_medium_line_t2_g3_g

0x1834,	// (0x0004022d) list_medium_line_t2_g3_t1_ParamLimits

0x1834,	// (0x0004022d) list_medium_line_t2_g3_t1

0x184e,	// (0x00040247) list_medium_line_t2_g3_t2_ParamLimits

0x184e,	// (0x00040247) list_medium_line_t2_g3_t2

0x0001,

0xfd55,	// (0x0004e74e) list_medium_line_t2_g3_t_ParamLimits

0xfd55,	// (0x0004e74e) list_medium_line_t2_g3_t

0x0ecf,	// (0x0003f8c8) list_medium_line_t3_g3_g1_ParamLimits

0x0ecf,	// (0x0003f8c8) list_medium_line_t3_g3_g1

0x1813,	// (0x0004020c) list_medium_line_t3_g3_g2_ParamLimits

0x1813,	// (0x0004020c) list_medium_line_t3_g3_g2

0x0edb,	// (0x0003f8d4) list_medium_line_t3_g3_g3_ParamLimits

0x0edb,	// (0x0003f8d4) list_medium_line_t3_g3_g3

0x0002,

0xfd4e,	// (0x0004e747) list_medium_line_t3_g3_g_ParamLimits

0xfd4e,	// (0x0004e747) list_medium_line_t3_g3_g

0x1864,	// (0x0004025d) list_medium_line_t3_g3_t1_ParamLimits

0x1864,	// (0x0004025d) list_medium_line_t3_g3_t1

0x187d,	// (0x00040276) list_medium_line_t3_g3_t2_ParamLimits

0x187d,	// (0x00040276) list_medium_line_t3_g3_t2

0x1893,	// (0x0004028c) list_medium_line_t3_g3_t3_ParamLimits

0x1893,	// (0x0004028c) list_medium_line_t3_g3_t3

0x0002,

0xfd5a,	// (0x0004e753) list_medium_line_t3_g3_t_ParamLimits

0xfd5a,	// (0x0004e753) list_medium_line_t3_g3_t

0x1464,	// (0x0003fe5d) list_medium_line_right_iconx2_g1

0x12df,	// (0x0003fcd8) list_medium_line_right_iconx2_g2

0x0001,

0xfd61,	// (0x0004e75a) list_medium_line_right_iconx2_g

0x18ad,	// (0x000402a6) list_medium_line_right_iconx2_t1

0x1464,	// (0x0003fe5d) list_medium_line_t2_right_iconx2_g1

0x12df,	// (0x0003fcd8) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd61,	// (0x0004e75a) list_medium_line_t2_right_iconx2_g

0x18bb,	// (0x000402b4) list_medium_line_t2_right_iconx2_t1

0x18cb,	// (0x000402c4) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd66,	// (0x0004e75f) list_medium_line_t2_right_iconx2_t

0x18d9,	// (0x000402d2) list_medium_line_x4_t4_t1

0x18e7,	// (0x000402e0) list_medium_line_x4_t4_t2

0x18f7,	// (0x000402f0) list_medium_line_x4_t4_t3

0x1907,	// (0x00040300) list_medium_line_x4_t4_t4

0x0003,

0xfd6b,	// (0x0004e764) list_medium_line_x4_t4_t

0x9382,	// (0x00047d7b) tport_appsw_pane_ParamLimits

0x9382,	// (0x00047d7b) tport_appsw_pane

0x9390,	// (0x00047d89) tport_contact_pane_ParamLimits

0x9390,	// (0x00047d89) tport_contact_pane

0x93a0,	// (0x00047d99) tport_listscroll_pane_ParamLimits

0x93a0,	// (0x00047d99) tport_listscroll_pane

0x93af,	// (0x00047da8) cell_tport_appsw_pane_ParamLimits

0x93af,	// (0x00047da8) cell_tport_appsw_pane

0xd0cd,	// (0x0004bac6) tport_appsw_pane_g1_ParamLimits

0xd0cd,	// (0x0004bac6) tport_appsw_pane_g1

0xe7c1,	// (0x0004d1ba) tport_contact_pane_g1

0xe7ca,	// (0x0004d1c3) tport_contact_pane_t1

0xe7d8,	// (0x0004d1d1) tport_contact_pane_t2

0x0001,

0xfd74,	// (0x0004e76d) tport_contact_pane_t

0xe7e6,	// (0x0004d1df) list_tport_pane

0xe7ef,	// (0x0004d1e8) scroll_pane_cp_030

0x93e4,	// (0x00047ddd) cell_tport_appsw_pane_g1

0x93f4,	// (0x00047ded) cell_tport_appsw_pane_t1

0x9402,	// (0x00047dfb) grid_highlight_pane_cp019

0x940a,	// (0x00047e03) list_tport_double_graphic_pane_ParamLimits

0x940a,	// (0x00047e03) list_tport_double_graphic_pane

0xbcb3,	// (0x0004a6ac) list_highlight_pane_cp023_ParamLimits

0xbcb3,	// (0x0004a6ac) list_highlight_pane_cp023

0x9427,	// (0x00047e20) list_tport_double_graphic_pane_g1_ParamLimits

0x9427,	// (0x00047e20) list_tport_double_graphic_pane_g1

0x9434,	// (0x00047e2d) list_tport_double_graphic_pane_t1_ParamLimits

0x9434,	// (0x00047e2d) list_tport_double_graphic_pane_t1

0x9449,	// (0x00047e42) list_tport_double_graphic_pane_t2_ParamLimits

0x9449,	// (0x00047e42) list_tport_double_graphic_pane_t2

0x0001,

0xfd80,	// (0x0004e779) list_tport_double_graphic_pane_t_ParamLimits

0xfd80,	// (0x0004e779) list_tport_double_graphic_pane_t

0xa237,	// (0x00048c30) main_cale_note_pane

0x75aa,	// (0x00045fa3) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x75aa,	// (0x00045fa3) cell_vitu2_function_top_wide_pane_cp01

0x8d71,	// (0x0004776a) wait_bar_pane_cp05_ParamLimits

0xbcb3,	// (0x0004a6ac) listscroll_cmail_pane

0xe7f8,	// (0x0004d1f1) list_cmail_pane

0x945b,	// (0x00047e54) list_cmail_body_pane

0x9475,	// (0x00047e6e) list_single_cmail_header_caption_pane

0xe808,	// (0x0004d201) list_single_cmail_header_detail_pane_ParamLimits

0xe808,	// (0x0004d201) list_single_cmail_header_detail_pane

0xe83a,	// (0x0004d233) list_single_cmail_header_caption_pane_t1

0x1917,	// (0x00040310) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1917,	// (0x00040310) list_single_cmail_header_detail_pane_g1

0x192f,	// (0x00040328) list_single_cmail_header_detail_pane_g2_ParamLimits

0x192f,	// (0x00040328) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd85,	// (0x0004e77e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd85,	// (0x0004e77e) list_single_cmail_header_detail_pane_g

0x193b,	// (0x00040334) list_single_cmail_header_detail_pane_t1_ParamLimits

0x193b,	// (0x00040334) list_single_cmail_header_detail_pane_t1

0x199b,	// (0x00040394) list_single_cmail_header_editor_pane_bg_ParamLimits

0x199b,	// (0x00040394) list_single_cmail_header_editor_pane_bg

0xe413,	// (0x0004ce0c) list_cmail_body_pane_g1

0xe85e,	// (0x0004d257) list_cmail_body_pane_t1

0xd81d,	// (0x0004c216) list_single_cmail_header_editor_pane_bg_g1

0xadc5,	// (0x000497be) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd82d,	// (0x0004c226) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd825,	// (0x0004c21e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xda50,	// (0x0004c449) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd84d,	// (0x0004c246) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd83d,	// (0x0004c236) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd845,	// (0x0004c23e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xada5,	// (0x0004979e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9495,	// (0x00047e8e) calenote_gesture_pane_ParamLimits

0x9495,	// (0x00047e8e) calenote_gesture_pane

0x94af,	// (0x00047ea8) calenote_window_pane_ParamLimits

0x94af,	// (0x00047ea8) calenote_window_pane

0xe86c,	// (0x0004d265) popup_note_window_cp01

0x94c7,	// (0x00047ec0) calenote_swipe_1_pane_ParamLimits

0x94c7,	// (0x00047ec0) calenote_swipe_1_pane

0x91f1,	// (0x00047bea) calenote_swipe_2_pane_ParamLimits

0x91f1,	// (0x00047bea) calenote_swipe_2_pane

0xe62d,	// (0x0004d026) calenote_swipe_1_pane_g1_ParamLimits

0xe62d,	// (0x0004d026) calenote_swipe_1_pane_g1

0xe63a,	// (0x0004d033) calenote_swipe_1_pane_g2_ParamLimits

0xe63a,	// (0x0004d033) calenote_swipe_1_pane_g2

0x0001,

0xfca5,	// (0x0004e69e) calenote_swipe_1_pane_g_ParamLimits

0xfca5,	// (0x0004e69e) calenote_swipe_1_pane_g

0xe87e,	// (0x0004d277) calenote_swipe_1_pane_t1_ParamLimits

0xe87e,	// (0x0004d277) calenote_swipe_1_pane_t1

0xe62d,	// (0x0004d026) calenote_swipe_2_pane_g1_ParamLimits

0xe62d,	// (0x0004d026) calenote_swipe_2_pane_g1

0xe89d,	// (0x0004d296) calenote_swipe_2_pane_g2_ParamLimits

0xe89d,	// (0x0004d296) calenote_swipe_2_pane_g2

0x0001,

0xfd91,	// (0x0004e78a) calenote_swipe_2_pane_g_ParamLimits

0xfd91,	// (0x0004e78a) calenote_swipe_2_pane_g

0xe8a9,	// (0x0004d2a2) calenote_swipe_2_pane_t1_ParamLimits

0xe8a9,	// (0x0004d2a2) calenote_swipe_2_pane_t1

0xa237,	// (0x00048c30) main_mup_navstr_pane

0x6200,	// (0x00044bf9) main_mup3_pane_t7_ParamLimits

0x6200,	// (0x00044bf9) main_mup3_pane_t7

0x6c39,	// (0x00045632) main_mp4_pane_g6_ParamLimits

0x6c39,	// (0x00045632) main_mp4_pane_g6

0x6fc5,	// (0x000459be) main_image3_pane_t4_ParamLimits

0x6fc5,	// (0x000459be) main_image3_pane_t4

0x94da,	// (0x00047ed3) popup_navstr_preview_pane_ParamLimits

0x94da,	// (0x00047ed3) popup_navstr_preview_pane

0x94e6,	// (0x00047edf) scroll_navstr_pane_ParamLimits

0x94e6,	// (0x00047edf) scroll_navstr_pane

0xa237,	// (0x00048c30) bg_popup_preview_window_pane_cp04

0xe8d0,	// (0x0004d2c9) popup_navstr_preview_pane_t1

0x94f2,	// (0x00047eeb) scroll_navstr_pane_g1_ParamLimits

0x94f2,	// (0x00047eeb) scroll_navstr_pane_g1

0x94ff,	// (0x00047ef8) scroll_navstr_pane_t1_ParamLimits

0x94ff,	// (0x00047ef8) scroll_navstr_pane_t1

0xe875,	// (0x0004d26e) bg_button_pane_cp014

0xe875,	// (0x0004d26e) bg_button_pane_cp030

0x1285,	// (0x0003fc7e) list_double_fisheye_pane_g4_ParamLimits

0x1285,	// (0x0003fc7e) list_double_fisheye_pane_g4

0x1291,	// (0x0003fc8a) list_double_fisheye_pane_g5_ParamLimits

0x1291,	// (0x0003fc8a) list_double_fisheye_pane_g5

0xce25,	// (0x0004b81e) sp_fs_scroll_pane_cp03

0xe74f,	// (0x0004d148) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe75b,	// (0x0004d154) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc2,	// (0x0004e6bb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x92f0,	// (0x00047ce9) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe800,	// (0x0004d1f9) sp_fs_scroll_pane_cp02

0xaaad,	// (0x000494a6) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaaad,	// (0x000494a6) popup_sp_fs_calendar_preview_list_single_pane

0xa237,	// (0x00048c30) main_cam6_pano_pane

0xbcb3,	// (0x0004a6ac) main_mup3_pane_ParamLimits

0xa237,	// (0x00048c30) main_phacti_pane

0x8c44,	// (0x0004763d) bg_button_pane_cp11

0x8c5c,	// (0x00047655) main_mobtv_info_pane_g2_ParamLimits

0x8c5c,	// (0x00047655) main_mobtv_info_pane_g2

0x0001,

0xfc22,	// (0x0004e61b) main_mobtv_info_pane_g_ParamLimits

0xfc22,	// (0x0004e61b) main_mobtv_info_pane_g

0x8e0e,	// (0x00047807) sc_clock_pane_t5_ParamLimits

0x8e0e,	// (0x00047807) sc_clock_pane_t5

0x9006,	// (0x000479ff) main_radioblah_pane_g1_ParamLimits

0xe579,	// (0x0004cf72) main_radioblah_pane_t3_ParamLimits

0xe579,	// (0x0004cf72) main_radioblah_pane_t3

0xe591,	// (0x0004cf8a) main_radioblah_pane_t4_ParamLimits

0xe591,	// (0x0004cf8a) main_radioblah_pane_t4

0x9024,	// (0x00047a1d) main_radioblah_text_pane_ParamLimits

0x9024,	// (0x00047a1d) main_radioblah_text_pane

0x9031,	// (0x00047a2a) main_radioblah_info_pane_g1_ParamLimits

0x90ca,	// (0x00047ac3) main_radioblah_info_pane_t4_ParamLimits

0x90ca,	// (0x00047ac3) main_radioblah_info_pane_t4

0xbcb3,	// (0x0004a6ac) main_sp_fs_calendar_pane

0x9511,	// (0x00047f0a) main_phacti_pane_g1

0x9519,	// (0x00047f12) phacti_note_pane_ParamLimits

0x9519,	// (0x00047f12) phacti_note_pane

0xe8e7,	// (0x0004d2e0) phacti_term_pane_ParamLimits

0xe8e7,	// (0x0004d2e0) phacti_term_pane

0xe8fc,	// (0x0004d2f5) phacti_note_pane_t1_ParamLimits

0xe8fc,	// (0x0004d2f5) phacti_note_pane_t1

0x19b2,	// (0x000403ab) phacti_term_pane_g1

0x19ba,	// (0x000403b3) phacti_term_pane_t1_ParamLimits

0x19ba,	// (0x000403b3) phacti_term_pane_t1

0xe913,	// (0x0004d30c) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe91b,	// (0x0004d314) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd9b,	// (0x0004e794) popup_sp_fs_calendar_preview_list_single_pane_g

0xe923,	// (0x0004d31c) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe923,	// (0x0004d31c) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe939,	// (0x0004d332) aid_popup_sp_fs_bg_corner_pane

0xce41,	// (0x0004b83a) popup_sp_fs_calendar_preview_bg_pane_g1

0xa237,	// (0x00048c30) popup_sp_fs_calendar_preview_bg_pane

0xe941,	// (0x0004d33a) popup_sp_fs_calendar_preview_list_pane

0xc9f5,	// (0x0004b3ee) bg_main_sp_fs_cale_pane_ParamLimits

0xc9f5,	// (0x0004b3ee) bg_main_sp_fs_cale_pane

0x19ed,	// (0x000403e6) listscroll_cale_mrui_pane_ParamLimits

0x19ed,	// (0x000403e6) listscroll_cale_mrui_pane

0x1a02,	// (0x000403fb) listscroll_sp_fs_schedule_track_pane

0x1a0b,	// (0x00040404) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1a0b,	// (0x00040404) main_sp_fs_ctrlbar_pane_cp01

0xe949,	// (0x0004d342) main_sp_fs_ribbon_pane

0x1a1e,	// (0x00040417) popup_sp_fs_cale_preview_window

0xeb30,	// (0x0004d529) list_single_sp_fs_schedule_track_pane_ParamLimits

0xeb30,	// (0x0004d529) list_single_sp_fs_schedule_track_pane

0xd6e8,	// (0x0004c0e1) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd6e8,	// (0x0004c0e1) bg_sp_fs_highlight_list_pane_cp03

0x957c,	// (0x00047f75) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x957c,	// (0x00047f75) list_single_sp_fs_schedule_track_pane_g1

0x9588,	// (0x00047f81) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9588,	// (0x00047f81) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda0,	// (0x0004e799) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda0,	// (0x0004e799) list_single_sp_fs_schedule_track_pane_g

0x9594,	// (0x00047f8d) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9594,	// (0x00047f8d) list_single_sp_fs_schedule_track_pane_t1

0x95b2,	// (0x00047fab) sp_fs_schedule_track_pane_ParamLimits

0x95b2,	// (0x00047fab) sp_fs_schedule_track_pane

0xe951,	// (0x0004d34a) sp_fs_schedule_track_pane_g1

0xe959,	// (0x0004d352) sp_fs_schedule_track_pane_g2

0xe961,	// (0x0004d35a) sp_fs_schedule_track_pane_g3

0xe969,	// (0x0004d362) sp_fs_schedule_track_pane_g4

0xe971,	// (0x0004d36a) sp_fs_schedule_track_pane_g5

0x0004,

0xfda5,	// (0x0004e79e) sp_fs_schedule_track_pane_g

0xd81d,	// (0x0004c216) bg_sp_fs_schedule_viewer_highlight_g1

0xadc5,	// (0x000497be) bg_sp_fs_schedule_viewer_highlight_g2

0xd825,	// (0x0004c21e) bg_sp_fs_schedule_viewer_highlight_g3

0xd82d,	// (0x0004c226) bg_sp_fs_schedule_viewer_highlight_g4

0xda50,	// (0x0004c449) bg_sp_fs_schedule_viewer_highlight_g5

0xd83d,	// (0x0004c236) bg_sp_fs_schedule_viewer_highlight_g6

0xd845,	// (0x0004c23e) bg_sp_fs_schedule_viewer_highlight_g7

0xd84d,	// (0x0004c246) bg_sp_fs_schedule_viewer_highlight_g8

0xada5,	// (0x0004979e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb0,	// (0x0004e7a9) bg_sp_fs_schedule_viewer_highlight_g

0xa237,	// (0x00048c30) bg_main_sp_fs_ribbon_pane

0x95c4,	// (0x00047fbd) main_sp_fs_ribbon_pane_g1

0xe979,	// (0x0004d372) main_sp_fs_ribbon_pane_t1

0x95cd,	// (0x00047fc6) main_sp_fs_ribbon_pane_t2

0xe988,	// (0x0004d381) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdc3,	// (0x0004e7bc) main_sp_fs_ribbon_pane_t

0xe997,	// (0x0004d390) main_sp_fs_ribbon_scheduler_pane

0xe99f,	// (0x0004d398) bg_main_sp_fs_ribbon_pane_g1

0xe9a8,	// (0x0004d3a1) bg_main_sp_fs_ribbon_pane_g2

0xe9b1,	// (0x0004d3aa) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdca,	// (0x0004e7c3) bg_main_sp_fs_ribbon_pane_g

0xe9b9,	// (0x0004d3b2) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c2,	// (0x0004d3bb) main_sp_fs_ribbon_scheduler_pane_g2

0xe9cb,	// (0x0004d3c4) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdd1,	// (0x0004e7ca) main_sp_fs_ribbon_scheduler_pane_g

0xe9d4,	// (0x0004d3cd) list_cale_mrui_pane

0x95dc,	// (0x00047fd5) sp_fs_scroll_pane_cp07_ParamLimits

0x95dc,	// (0x00047fd5) sp_fs_scroll_pane_cp07

0x95f8,	// (0x00047ff1) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x95f8,	// (0x00047ff1) bg_sp_fs_schedule_viewer_highlight

0xe9e1,	// (0x0004d3da) list_single_sp_fs_schedule_track_pane_cp01

0xe9e9,	// (0x0004d3e2) list_sp_fs_schedule_track_pane

0xe9f1,	// (0x0004d3ea) sp_fs_scroll_pane_cp06_ParamLimits

0xe9f1,	// (0x0004d3ea) sp_fs_scroll_pane_cp06

0xce41,	// (0x0004b83a) bgmain_sp_fs_calendar_pane_g1

0x1a30,	// (0x00040429) list_single_cale_mrui_pane_ParamLimits

0x1a30,	// (0x00040429) list_single_cale_mrui_pane

0x1a56,	// (0x0004044f) list_single_cale_mrui_row_pane_ParamLimits

0x1a56,	// (0x0004044f) list_single_cale_mrui_row_pane

0x1a63,	// (0x0004045c) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1a63,	// (0x0004045c) list_single_cale_mrui_row_pane_g1

0x1a9b,	// (0x00040494) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1a9b,	// (0x00040494) list_single_cale_mrui_row_pane_t1

0x1aad,	// (0x000404a6) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1aad,	// (0x000404a6) list_single_cale_mrui_row_pane_t2

0x1b13,	// (0x0004050c) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1b13,	// (0x0004050c) list_single_cale_mrui_row_pane_t3

0x1b42,	// (0x0004053b) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1b42,	// (0x0004053b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfddf,	// (0x0004e7d8) list_single_cale_mrui_row_pane_t_ParamLimits

0xfddf,	// (0x0004e7d8) list_single_cale_mrui_row_pane_t

0x1b71,	// (0x0004056a) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1b71,	// (0x0004056a) list_single_cmail_header_editor_pane_bg_cp01

0x1b93,	// (0x0004058c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1b93,	// (0x0004058c) list_single_cmail_header_editor_pane_bg_cp02

0x9605,	// (0x00047ffe) main_radioblah_text_pane_t1_ParamLimits

0x9605,	// (0x00047ffe) main_radioblah_text_pane_t1

0xea10,	// (0x0004d409) cam6_indi_pane_cp01

0xea18,	// (0x0004d411) cam6_mode_pane_cp01

0xea20,	// (0x0004d419) cam6_pano_pane

0xea29,	// (0x0004d422) cam6_zoom_pane_cp01

0xea33,	// (0x0004d42c) cam6_pano_image_pane

0xea3c,	// (0x0004d435) cam6_pano_pane_g1

0xe413,	// (0x0004ce0c) cam6_pano_pane_g2

0xea45,	// (0x0004d43e) cam6_pano_pane_g3

0xea4e,	// (0x0004d447) cam6_pano_pane_g4

0xd3d8,	// (0x0004bdd1) cam6_pano_pane_g5

0xea57,	// (0x0004d450) cam6_pano_pane_g6

0xea5f,	// (0x0004d458) cam6_pano_pane_g7

0xea67,	// (0x0004d460) cam6_pano_pane_g8

0xea70,	// (0x0004d469) cam6_pano_pane_g9

0x0008,

0xfde8,	// (0x0004e7e1) cam6_pano_pane_g

0xa237,	// (0x00048c30) main_browser_tag_pane

0xe8c8,	// (0x0004d2c1) grid_navstr_albumart_pane

0xea7b,	// (0x0004d474) cell_navstr_albumart_pane_ParamLimits

0xea7b,	// (0x0004d474) cell_navstr_albumart_pane

0xea97,	// (0x0004d490) cell_navstr_albumart_pane_g1

0xc802,	// (0x0004b1fb) cell_navstr_albumart_pane_g2

0xc812,	// (0x0004b20b) cell_navstr_albumart_pane_g3

0xc80a,	// (0x0004b203) cell_navstr_albumart_pane_g4

0x0003,

0xfdfb,	// (0x0004e7f4) cell_navstr_albumart_pane_g

0x961f,	// (0x00048018) bt_list_pane_ParamLimits

0x961f,	// (0x00048018) bt_list_pane

0x9638,	// (0x00048031) bt_list_pane_t1

0x9647,	// (0x00048040) bt_list_pane_t2

0x0001,

0xfe04,	// (0x0004e7fd) bt_list_pane_t

0xa237,	// (0x00048c30) main_cale_prevew_pane

0x9656,	// (0x0004804f) popup_cale_preview_window_ParamLimits

0x9656,	// (0x0004804f) popup_cale_preview_window

0xbcb3,	// (0x0004a6ac) bg_popup_preview_window_pane_cp05_ParamLimits

0xbcb3,	// (0x0004a6ac) bg_popup_preview_window_pane_cp05

0xea9f,	// (0x0004d498) list_cale_preview_pane_ParamLimits

0xea9f,	// (0x0004d498) list_cale_preview_pane

0x9673,	// (0x0004806c) list_double_cale_preview_pane_ParamLimits

0x9673,	// (0x0004806c) list_double_cale_preview_pane

0x9687,	// (0x00048080) list_single_cale_preview_pane_ParamLimits

0x9687,	// (0x00048080) list_single_cale_preview_pane

0x969f,	// (0x00048098) list_single_cale_preview_pane_g1

0x96a7,	// (0x000480a0) list_single_cale_preview_pane_t1_ParamLimits

0x96a7,	// (0x000480a0) list_single_cale_preview_pane_t1

0x96bc,	// (0x000480b5) list_double_cale_preview_pane_g1

0x96c4,	// (0x000480bd) list_double_cale_preview_pane_t1_ParamLimits

0x96c4,	// (0x000480bd) list_double_cale_preview_pane_t1

0x96d9,	// (0x000480d2) list_double_cale_preview_pane_t2_ParamLimits

0x96d9,	// (0x000480d2) list_double_cale_preview_pane_t2

0x0001,

0xfe09,	// (0x0004e802) list_double_cale_preview_pane_t_ParamLimits

0xfe09,	// (0x0004e802) list_double_cale_preview_pane_t

0xa237,	// (0x00048c30) main_ezdial_pane

0xbcb3,	// (0x0004a6ac) main_sp_fs_email_pane_ParamLimits

0x9251,	// (0x00047c4a) cmail_ddmenu_btn01_pane_ParamLimits

0x9251,	// (0x00047c4a) cmail_ddmenu_btn01_pane

0x926e,	// (0x00047c67) cmail_ddmenu_btn02_pane_ParamLimits

0x926e,	// (0x00047c67) cmail_ddmenu_btn02_pane

0x928c,	// (0x00047c85) cmail_ddmenu_btn03_pane_ParamLimits

0x928c,	// (0x00047c85) cmail_ddmenu_btn03_pane

0x932d,	// (0x00047d26) main_sp_fs_ctrlbar_pane_ParamLimits

0x9347,	// (0x00047d40) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x945b,	// (0x00047e54) list_cmail_body_pane_ParamLimits

0xe848,	// (0x0004d241) bg_button_pane_cp12

0xe851,	// (0x0004d24a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe851,	// (0x0004d24a) list_single_cmail_header_detail_pane_g3

0x1977,	// (0x00040370) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1977,	// (0x00040370) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd8c,	// (0x0004e785) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd8c,	// (0x0004e785) list_single_cmail_header_detail_pane_t

0x19cf,	// (0x000403c8) phacti_term_pane_t2_ParamLimits

0x19cf,	// (0x000403c8) phacti_term_pane_t2

0x0001,

0xfd96,	// (0x0004e78f) phacti_term_pane_t_ParamLimits

0xfd96,	// (0x0004e78f) phacti_term_pane_t

0xeaab,	// (0x0004d4a4) aid_size_list_single_double

0x96f1,	// (0x000480ea) popup_ezdial_listscroll_window

0x9713,	// (0x0004810c) popup_number_entry_window_cp01

0xab68,	// (0x00049561) bg_popup_call_pane_cp09

0xeab7,	// (0x0004d4b0) ezdial_list_pane

0xeabf,	// (0x0004d4b8) scroll_pane_cp23

0xcc0c,	// (0x0004b605) bg_button_pane_cp028_ParamLimits

0xcc0c,	// (0x0004b605) bg_button_pane_cp028

0x9721,	// (0x0004811a) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9721,	// (0x0004811a) cmail_ddmenu_btn01_pane_g1

0x9733,	// (0x0004812c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9733,	// (0x0004812c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe0e,	// (0x0004e807) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe0e,	// (0x0004e807) cmail_ddmenu_btn01_pane_g

0xeac7,	// (0x0004d4c0) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeac7,	// (0x0004d4c0) cmail_ddmenu_btn01_pane_t1

0xc9f5,	// (0x0004b3ee) bg_button_pane_cp029_ParamLimits

0xc9f5,	// (0x0004b3ee) bg_button_pane_cp029

0x9733,	// (0x0004812c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9733,	// (0x0004812c) cmail_ddmenu_btn02_pane_g1

0x974b,	// (0x00048144) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x974b,	// (0x00048144) cmail_ddmenu_btn02_pane_t1

0xd6e8,	// (0x0004c0e1) bg_button_pane_cp031_ParamLimits

0xd6e8,	// (0x0004c0e1) bg_button_pane_cp031

0x9733,	// (0x0004812c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9733,	// (0x0004812c) cmail_ddmenu_btn03_pane_g1

0x974b,	// (0x00048144) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x974b,	// (0x00048144) cmail_ddmenu_btn03_pane_t1

0x6e6e,	// (0x00045867) cell_dialer2_keypad_pane_t1_ParamLimits

0x6e88,	// (0x00045881) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6e88,	// (0x00045881) cell_dialer2_keypad_pane_t1_copy1

0x8a71,	// (0x0004746a) ncimui_group_button_pane

0xbcb3,	// (0x0004a6ac) main_sp_fs_calendar_pane_ParamLimits

0x9475,	// (0x00047e6e) list_single_cmail_header_caption_pane_ParamLimits

0x19e4,	// (0x000403dd) aid_recal_txt_sm_pane

0xa237,	// (0x00048c30) mian_recal_day_pane

0x1a1e,	// (0x00040417) popup_sp_fs_cale_preview_window_ParamLimits

0xeadc,	// (0x0004d4d5) list_recal_day_pane

0x1bcb,	// (0x000405c4) list_single_recal_day_pane_ParamLimits

0x1bcb,	// (0x000405c4) list_single_recal_day_pane

0xeb03,	// (0x0004d4fc) list_single_recal_day_pane_g1_ParamLimits

0xeb03,	// (0x0004d4fc) list_single_recal_day_pane_g1

0x1bdd,	// (0x000405d6) list_single_recal_day_pane_g2_ParamLimits

0x1bdd,	// (0x000405d6) list_single_recal_day_pane_g2

0x1be9,	// (0x000405e2) list_single_recal_day_pane_g3_ParamLimits

0x1be9,	// (0x000405e2) list_single_recal_day_pane_g3

0x1bf5,	// (0x000405ee) list_single_recal_day_pane_g4_ParamLimits

0x1bf5,	// (0x000405ee) list_single_recal_day_pane_g4

0x1c03,	// (0x000405fc) list_single_recal_day_pane_g5_ParamLimits

0x1c03,	// (0x000405fc) list_single_recal_day_pane_g5

0x1c19,	// (0x00040612) list_single_recal_day_pane_g6_ParamLimits

0x1c19,	// (0x00040612) list_single_recal_day_pane_g6

0x0004,

0xfe1d,	// (0x0004e816) list_single_recal_day_pane_g_ParamLimits

0xfe1d,	// (0x0004e816) list_single_recal_day_pane_g

0x1c2d,	// (0x00040626) list_single_recal_day_pane_t1

0x1c3f,	// (0x00040638) list_single_recal_day_pane_t2

0x0001,

0xfe28,	// (0x0004e821) list_single_recal_day_pane_t

0x976f,	// (0x00048168) ncimui_query_button_pane_ParamLimits

0x976f,	// (0x00048168) ncimui_query_button_pane

0x977f,	// (0x00048178) ncimui_query_button_pane_t1_ParamLimits

0x977f,	// (0x00048178) ncimui_query_button_pane_t1

0xeb0f,	// (0x0004d508) ncimui_query_button_pane_t2_ParamLimits

0xeb0f,	// (0x0004d508) ncimui_query_button_pane_t2

0x0001,

0xfe2d,	// (0x0004e826) ncimui_query_button_pane_t_ParamLimits

0xfe2d,	// (0x0004e826) ncimui_query_button_pane_t

0x9792,	// (0x0004818b) query_button_pane_ParamLimits

0x9792,	// (0x0004818b) query_button_pane

0xa237,	// (0x00048c30) bg_button_pane_cp0028

0xeb22,	// (0x0004d51b) query_button_pane_t1

0x5190,	// (0x00043b89) main_tport_pane_ParamLimits

0x9358,	// (0x00047d51) bg_popup_window_pane_cp01_ParamLimits

0x9358,	// (0x00047d51) bg_popup_window_pane_cp01

0x9366,	// (0x00047d5f) heading_pane_cp08_ParamLimits

0x9366,	// (0x00047d5f) heading_pane_cp08

0x9374,	// (0x00047d6d) heading_pane_cp07_ParamLimits

0x9374,	// (0x00047d6d) heading_pane_cp07

0x93e4,	// (0x00047ddd) cell_tport_appsw_pane_g2

0x0002,

0xfd79,	// (0x0004e772) cell_tport_appsw_pane_g

0x0c8b,	// (0x0003f684) input_candi_list_open_g1

0xaf88,	// (0x00049981) list_cale_time_pane_g6_ParamLimits

0xaf88,	// (0x00049981) list_cale_time_pane_g6

0x5c3a,	// (0x00044633) aid_size_touch_calib_1_ParamLimits

0x5c3a,	// (0x00044633) aid_size_touch_calib_1

0x5c46,	// (0x0004463f) aid_size_touch_calib_2_ParamLimits

0x5c46,	// (0x0004463f) aid_size_touch_calib_2

0x5c54,	// (0x0004464d) aid_size_touch_calib_3_ParamLimits

0x5c54,	// (0x0004464d) aid_size_touch_calib_3

0x5c64,	// (0x0004465d) aid_size_touch_calib_4_ParamLimits

0x5c64,	// (0x0004465d) aid_size_touch_calib_4

0x5c72,	// (0x0004466b) main_touch_calib_button_group_pane_ParamLimits

0x5c72,	// (0x0004466b) main_touch_calib_button_group_pane

0x5c80,	// (0x00044679) main_touch_calib_pane_g1_ParamLimits

0x5c8c,	// (0x00044685) main_touch_calib_pane_g2_ParamLimits

0x5c98,	// (0x00044691) main_touch_calib_pane_g3_ParamLimits

0x5ca4,	// (0x0004469d) main_touch_calib_pane_g4_ParamLimits

0xf736,	// (0x0004e12f) main_touch_calib_pane_g_ParamLimits

0x5cb0,	// (0x000446a9) main_touch_calib_pane_t1_ParamLimits

0x5cc7,	// (0x000446c0) main_touch_calib_pane_t2_ParamLimits

0x5ce0,	// (0x000446d9) main_touch_calib_pane_t3_ParamLimits

0x5cf6,	// (0x000446ef) main_touch_calib_pane_t4_ParamLimits

0x5d0c,	// (0x00044705) main_touch_calib_pane_t5_ParamLimits

0xf73f,	// (0x0004e138) main_touch_calib_pane_t_ParamLimits

0xd168,	// (0x0004bb61) list_single_fp_cale_pane_g3_ParamLimits

0xd168,	// (0x0004bb61) list_single_fp_cale_pane_g3

0xbcb3,	// (0x0004a6ac) bg_button_pane_cp012_ParamLimits

0xbcb3,	// (0x0004a6ac) bg_vkb2_func_pane_cp03_ParamLimits

0x7d17,	// (0x00046710) cell_vitu2_function_top_pane_g1_ParamLimits

0xbcb3,	// (0x0004a6ac) bg_vkb2_func_pane_cp04_ParamLimits

0x89f7,	// (0x000473f0) main_ncimui_button_group_pane_ParamLimits

0x89f7,	// (0x000473f0) main_ncimui_button_group_pane

0x8a5f,	// (0x00047458) main_ncimui_pane_t3_ParamLimits

0x8a5f,	// (0x00047458) main_ncimui_pane_t3

0xe8de,	// (0x0004d2d7) phacti_button_group_pane

0xeaab,	// (0x0004d4a4) aid_size_list_single_double_ParamLimits

0x96f1,	// (0x000480ea) popup_ezdial_listscroll_window_ParamLimits

0x9713,	// (0x0004810c) popup_number_entry_window_cp01_ParamLimits

0x979f,	// (0x00048198) phacti_button_pane_ParamLimits

0x979f,	// (0x00048198) phacti_button_pane

0xa237,	// (0x00048c30) bg_button_pane_cp14

0xeb47,	// (0x0004d540) phacti_button_pane_t1

0x97b0,	// (0x000481a9) main_touch_calib_button_pane_ParamLimits

0x97b0,	// (0x000481a9) main_touch_calib_button_pane

0xa9a9,	// (0x000493a2) bg_button_pane_cp18_ParamLimits

0xa9a9,	// (0x000493a2) bg_button_pane_cp18

0xeb55,	// (0x0004d54e) main_touch_calib_button_pane_t1_ParamLimits

0xeb55,	// (0x0004d54e) main_touch_calib_button_pane_t1

0xeb6b,	// (0x0004d564) main_touch_calib_button_pane_t2_ParamLimits

0xeb6b,	// (0x0004d564) main_touch_calib_button_pane_t2

0x0001,

0xfe32,	// (0x0004e82b) main_touch_calib_button_pane_t_ParamLimits

0xfe32,	// (0x0004e82b) main_touch_calib_button_pane_t

0xa237,	// (0x00048c30) cell_ncimui_button_pane

0xa237,	// (0x00048c30) bg_button_pane_cp032

0xeb89,	// (0x0004d582) cell_ncimui_button_pane_t1

0x6ee4,	// (0x000458dd) image3_infobar_pane_ParamLimits

0x6ee4,	// (0x000458dd) image3_infobar_pane

0x8e30,	// (0x00047829) fs_bigclock_status_pane_ParamLimits

0x8e30,	// (0x00047829) fs_bigclock_status_pane

0x8e3d,	// (0x00047836) main_fs_bigclock_clock_pane_ParamLimits

0x8e3d,	// (0x00047836) main_fs_bigclock_clock_pane

0x8e59,	// (0x00047852) main_fs_bigclock_indi_pane_ParamLimits

0x8e59,	// (0x00047852) main_fs_bigclock_indi_pane

0x8e87,	// (0x00047880) main_fs_bigclock_swipe_pane_ParamLimits

0x8e87,	// (0x00047880) main_fs_bigclock_swipe_pane

0xa237,	// (0x00048c30) main_fs_clock_dumped_data

0x8ec1,	// (0x000478ba) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x8ec1,	// (0x000478ba) list_single_fs_bigclock_indicator_pane_g1

0x8ee0,	// (0x000478d9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x8ee0,	// (0x000478d9) list_single_fs_bigclock_indicator_pane_g2

0x8efa,	// (0x000478f3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x8efa,	// (0x000478f3) list_single_fs_bigclock_indicator_pane_g3

0x8f16,	// (0x0004790f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x8f16,	// (0x0004790f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc56,	// (0x0004e64f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc56,	// (0x0004e64f) list_single_fs_bigclock_indicator_pane_g

0x8f45,	// (0x0004793e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x8f45,	// (0x0004793e) list_single_fs_bigclock_indicator_pane_t1

0x8f6d,	// (0x00047966) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x8f6d,	// (0x00047966) list_single_fs_bigclock_indicator_pane_t2

0x8f95,	// (0x0004798e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x8f95,	// (0x0004798e) list_single_fs_bigclock_indicator_pane_t3

0x8fbd,	// (0x000479b6) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x8fbd,	// (0x000479b6) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc61,	// (0x0004e65a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc61,	// (0x0004e65a) list_single_fs_bigclock_indicator_pane_t

0xeb97,	// (0x0004d590) image3_infobar_fav_pane_ParamLimits

0xeb97,	// (0x0004d590) image3_infobar_fav_pane

0xeba7,	// (0x0004d5a0) image3_infobar_loc_pane_ParamLimits

0xeba7,	// (0x0004d5a0) image3_infobar_loc_pane

0xebbd,	// (0x0004d5b6) image3_infobar_time_pane_ParamLimits

0xebbd,	// (0x0004d5b6) image3_infobar_time_pane

0xce41,	// (0x0004b83a) image3_infobar_time_pane_g1

0xebcd,	// (0x0004d5c6) image3_infobar_time_pane_t1

0xce41,	// (0x0004b83a) image3_infobar_loc_pane_g1

0xebdb,	// (0x0004d5d4) image3_infobar_loc_pane_g2

0x0001,

0xfe37,	// (0x0004e830) image3_infobar_loc_pane_g

0xebe3,	// (0x0004d5dc) image3_infobar_loc_pane_t1

0xce41,	// (0x0004b83a) image3_infobar_fav_pane_g1

0xebf1,	// (0x0004d5ea) image3_infobar_fav_pane_g2

0x0001,

0xfe3c,	// (0x0004e835) image3_infobar_fav_pane_g

0xebf9,	// (0x0004d5f2) fs_bigclock_status_battery_pane

0xec02,	// (0x0004d5fb) fs_bigclock_status_signal_pane

0xec0b,	// (0x0004d604) fs_bigclock_status_title_pane

0xec14,	// (0x0004d60d) fs_bigclock_status_signal_pane_g1

0xec1d,	// (0x0004d616) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe41,	// (0x0004e83a) fs_bigclock_status_signal_pane_g

0xec25,	// (0x0004d61e) fs_bigclock_status_battery_pane_g1

0xec2e,	// (0x0004d627) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe46,	// (0x0004e83f) fs_bigclock_status_battery_pane_g

0xec36,	// (0x0004d62f) fs_bigclock_status_title_pane_t1

0x97c0,	// (0x000481b9) main_fs_bigclock_clock_pane_g1

0x97c0,	// (0x000481b9) main_fs_bigclock_clock_pane_g2

0x97cf,	// (0x000481c8) main_fs_bigclock_clock_pane_g3

0x97cf,	// (0x000481c8) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe4b,	// (0x0004e844) main_fs_bigclock_clock_pane_g

0x97df,	// (0x000481d8) main_fs_bigclock_clock_pane_t1

0x97f4,	// (0x000481ed) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe54,	// (0x0004e84d) main_fs_bigclock_clock_pane_t

0xec44,	// (0x0004d63d) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec44,	// (0x0004d63d) list_single_fs_bigclock_indicator_pane

0xec55,	// (0x0004d64e) list_single_fs_bigclock_pane_ParamLimits

0xec55,	// (0x0004d64e) list_single_fs_bigclock_pane

0xec7b,	// (0x0004d674) main_fs_bigclock_indicator_pane_t1

0xec8a,	// (0x0004d683) list_single_fs_bigclock_pane_g1

0xec92,	// (0x0004d68b) list_single_fs_bigclock_pane_t1

0xce41,	// (0x0004b83a) main_fs_bigclock_swipe_pane_g1

0xecd5,	// (0x0004d6ce) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe65,	// (0x0004e85e) main_fs_bigclock_swipe_pane_g

0xecdd,	// (0x0004d6d6) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecdd,	// (0x0004d6d6) main_fs_bigclock_swipe_pane_t1

0x4171,	// (0x00042b6a) call_type_pane_ParamLimits

0xa237,	// (0x00048c30) main_btmg_pane

0x1a8f,	// (0x00040488) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1a8f,	// (0x00040488) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdd8,	// (0x0004e7d1) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdd8,	// (0x0004e7d1) list_single_cale_mrui_row_pane_g

0x1bb9,	// (0x000405b2) list_recal_vselct_arw_lo_pane

0xeafb,	// (0x0004d4f4) list_recal_vselct_arw_up_pane

0x1bc1,	// (0x000405ba) list_recal_vselct_pane

0x984b,	// (0x00048244) btmg_button_pane

0x9857,	// (0x00048250) main_btmg_pane_g1

0xa237,	// (0x00048c30) bg_button_pane_cp044

0xecfa,	// (0x0004d6f3) btmg_button_pane_t1

0xc9e1,	// (0x0004b3da) aid_listscroll_gen

0xbcb3,	// (0x0004a6ac) main_cntbar_detail_pane

0xe7f8,	// (0x0004d1f1) list_cmail_folder_pane

0xce25,	// (0x0004b81e) sp_fs_scroll_pane_cp03_ParamLimits

0x1c51,	// (0x0004064a) list_single_fs_dyc_pane_cp01_ParamLimits

0x1c51,	// (0x0004064a) list_single_fs_dyc_pane_cp01

0xed08,	// (0x0004d701) aid_size_cmail_indent

0x1c6f,	// (0x00040668) list_single_dyc_row_pane_cp01

0x987f,	// (0x00048278) cntbar_detail_list_pane_ParamLimits

0x987f,	// (0x00048278) cntbar_detail_list_pane

0x98bf,	// (0x000482b8) main_cntbar_detail_cont_pane_ParamLimits

0x98bf,	// (0x000482b8) main_cntbar_detail_cont_pane

0x4165,	// (0x00042b5e) scroll_pane_cp032_ParamLimits

0x4165,	// (0x00042b5e) scroll_pane_cp032

0x98cb,	// (0x000482c4) cntbar_detail_list_event_pane_ParamLimits

0x98cb,	// (0x000482c4) cntbar_detail_list_event_pane

0x988d,	// (0x00048286) cntbar_detail_list_shct_pane

0xae13,	// (0x0004980c) aid_list_gen

0xed11,	// (0x0004d70a) aid_scroll

0xed1a,	// (0x0004d713) aid_size_touch_scroll_bar

0x82b8,	// (0x00046cb1) aid_list_double

0x82a6,	// (0x00046c9f) aid_list_single

0x82a6,	// (0x00046c9f) aid_list_single_lg

0x1c78,	// (0x00040671) aid_list_z_g_a_sm

0x1c80,	// (0x00040679) aid_list_z_g_d

0x1c88,	// (0x00040681) aid_txt_z_prm

0x1c96,	// (0x0004068f) aid_txt_z_prm_cp01

0x1ca4,	// (0x0004069d) aid_txt_z_sec

0x98db,	// (0x000482d4) main_cntbar_detail_cont_pane_g1_ParamLimits

0x98db,	// (0x000482d4) main_cntbar_detail_cont_pane_g1

0x98e8,	// (0x000482e1) main_cntbar_detail_cont_pane_g2_ParamLimits

0x98e8,	// (0x000482e1) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe6a,	// (0x0004e863) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe6a,	// (0x0004e863) main_cntbar_detail_cont_pane_g

0xed23,	// (0x0004d71c) main_cntbar_detail_cont_pane_t1

0xed31,	// (0x0004d72a) main_cntbar_detail_cont_pane_t2

0xed3f,	// (0x0004d738) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe6f,	// (0x0004e868) main_cntbar_detail_cont_pane_t

0x98f4,	// (0x000482ed) cell_cntbar_detail_list_shct_pane_ParamLimits

0x98f4,	// (0x000482ed) cell_cntbar_detail_list_shct_pane

0xed4d,	// (0x0004d746) cntbar_detail_list_shct_pane_g1

0xed56,	// (0x0004d74f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe76,	// (0x0004e86f) cntbar_detail_list_shct_pane_g

0x9908,	// (0x00048301) cntbar_detail_list_event_pane_g1_ParamLimits

0x9908,	// (0x00048301) cntbar_detail_list_event_pane_g1

0x9914,	// (0x0004830d) cntbar_detail_list_event_pane_g2_ParamLimits

0x9914,	// (0x0004830d) cntbar_detail_list_event_pane_g2

0x0005,

0xfe7b,	// (0x0004e874) cntbar_detail_list_event_pane_g_ParamLimits

0xfe7b,	// (0x0004e874) cntbar_detail_list_event_pane_g

0x9982,	// (0x0004837b) cntbar_detail_list_event_pane_t1_ParamLimits

0x9982,	// (0x0004837b) cntbar_detail_list_event_pane_t1

0x9997,	// (0x00048390) cntbar_detail_list_event_pane_t2_ParamLimits

0x9997,	// (0x00048390) cntbar_detail_list_event_pane_t2

0x0002,

0xfe88,	// (0x0004e881) cntbar_detail_list_event_pane_t_ParamLimits

0xfe88,	// (0x0004e881) cntbar_detail_list_event_pane_t

0xce41,	// (0x0004b83a) cell_cntbar_detail_list_shct_pane_g1

0xb578,	// (0x00049f71) navi_pane_mv_g3

0xbcb3,	// (0x0004a6ac) main_cntbar_detail_pane_ParamLimits

0xa237,	// (0x00048c30) main_notif_wgt_pane

0x6b66,	// (0x0004555f) aid_tch_main_mp4_pane_g4

0x6dcf,	// (0x000457c8) popup_slider_window_cp02

0x1baf,	// (0x000405a8) list_recal_day_event_pane

0x985f,	// (0x00048258) cntbar_detail_btn_pane_ParamLimits

0x985f,	// (0x00048258) cntbar_detail_btn_pane

0x986f,	// (0x00048268) cntbar_detail_btn_pane_cp01_ParamLimits

0x986f,	// (0x00048268) cntbar_detail_btn_pane_cp01

0x988d,	// (0x00048286) cntbar_detail_list_shct_pane_ParamLimits

0x9899,	// (0x00048292) cntbar_detail_pane_g1_ParamLimits

0x9899,	// (0x00048292) cntbar_detail_pane_g1

0x98a9,	// (0x000482a2) cntbar_detail_pane_t1_ParamLimits

0x98a9,	// (0x000482a2) cntbar_detail_pane_t1

0x9920,	// (0x00048319) cntbar_detail_list_event_pane_g3_ParamLimits

0x9920,	// (0x00048319) cntbar_detail_list_event_pane_g3

0x9938,	// (0x00048331) cntbar_detail_list_event_pane_g4_ParamLimits

0x9938,	// (0x00048331) cntbar_detail_list_event_pane_g4

0x9950,	// (0x00048349) cntbar_detail_list_event_pane_g5_ParamLimits

0x9950,	// (0x00048349) cntbar_detail_list_event_pane_g5

0x9968,	// (0x00048361) cntbar_detail_list_event_pane_g6_ParamLimits

0x9968,	// (0x00048361) cntbar_detail_list_event_pane_g6

0x99ac,	// (0x000483a5) cntbar_detail_list_event_pane_t3_ParamLimits

0x99ac,	// (0x000483a5) cntbar_detail_list_event_pane_t3

0x99be,	// (0x000483b7) popup_notif_wgt_window_ParamLimits

0x99be,	// (0x000483b7) popup_notif_wgt_window

0x99ce,	// (0x000483c7) popup_submenu_window_cp01_ParamLimits

0x99ce,	// (0x000483c7) popup_submenu_window_cp01

0xab68,	// (0x00049561) bg_popup_window_pane_cp10

0xed5f,	// (0x0004d758) listscroll_notif_wgt_pane

0xed71,	// (0x0004d76a) list_notif_wgt_window

0xed7a,	// (0x0004d773) scroll_pane_cp033

0x99de,	// (0x000483d7) list_notif_wgt_row_pane_ParamLimits

0x99de,	// (0x000483d7) list_notif_wgt_row_pane

0xed83,	// (0x0004d77c) aid_size_list_notif_wgt_del

0xed90,	// (0x0004d789) list_notif_wgt_row_pane_g1

0xed9c,	// (0x0004d795) list_notif_wgt_row_pane_g2

0xedab,	// (0x0004d7a4) list_notif_wgt_row_pane_g3

0x0002,

0xfe8f,	// (0x0004e888) list_notif_wgt_row_pane_g

0xedb8,	// (0x0004d7b1) list_notif_wgt_row_pane_t1

0xedce,	// (0x0004d7c7) list_notif_wgt_row_pane_t2

0xede0,	// (0x0004d7d9) list_notif_wgt_row_pane_t3

0x0002,

0xfe96,	// (0x0004e88f) list_notif_wgt_row_pane_t

0xda58,	// (0x0004c451) list_recal_day_event_pane_g1

0xedf2,	// (0x0004d7eb) list_recal_day_event_pane_t1

0xa237,	// (0x00048c30) bg_button_pane_cp045

0x99f2,	// (0x000483eb) cntbar_detail_btn_pane_t1

0xc9f5,	// (0x0004b3ee) main_callh_pane_ParamLimits

0xc9f5,	// (0x0004b3ee) main_callh_pane

0xa237,	// (0x00048c30) main_coverflow0_pane

0xa237,	// (0x00048c30) main_wgtman_pane

0x8e9f,	// (0x00047898) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8e9f,	// (0x00047898) main_fs_bigclock_unlock_btn_pane

0x93dc,	// (0x00047dd5) bg_button_pane_cp16

0x93ec,	// (0x00047de5) cell_tport_appsw_pane_g3

0x9a00,	// (0x000483f9) cf0_flow_pane_ParamLimits

0x9a00,	// (0x000483f9) cf0_flow_pane

0xee01,	// (0x0004d7fa) listscroll_cf0_pane

0xee0c,	// (0x0004d805) main_cf0_pane_g1

0x9a0f,	// (0x00048408) main_cf0_pane_t1_ParamLimits

0x9a0f,	// (0x00048408) main_cf0_pane_t1

0x9a23,	// (0x0004841c) main_cf0_pane_t2_ParamLimits

0x9a23,	// (0x0004841c) main_cf0_pane_t2

0x0001,

0xfea2,	// (0x0004e89b) main_cf0_pane_t_ParamLimits

0xfea2,	// (0x0004e89b) main_cf0_pane_t

0xee1e,	// (0x0004d817) scroll_pane_cp11

0x9a37,	// (0x00048430) cf0_flow_pane_g1

0x9a3f,	// (0x00048438) cf0_flow_pane_g2

0x0001,

0xfea7,	// (0x0004e8a0) cf0_flow_pane_g

0x9a47,	// (0x00048440) cf0_flow_pane_t1

0xa237,	// (0x00048c30) main_call6_pane

0xa237,	// (0x00048c30) main_calllock_pane

0x9a55,	// (0x0004844e) call6_btn_grp_pane_ParamLimits

0x9a55,	// (0x0004844e) call6_btn_grp_pane

0x9a62,	// (0x0004845b) call6_pane_g1_ParamLimits

0x9a62,	// (0x0004845b) call6_pane_g1

0x9a72,	// (0x0004846b) popup_call6_1st_window_ParamLimits

0x9a72,	// (0x0004846b) popup_call6_1st_window

0x9a82,	// (0x0004847b) popup_call6_2nd_window_ParamLimits

0x9a82,	// (0x0004847b) popup_call6_2nd_window

0x9a92,	// (0x0004848b) cell_call6_btn_pane_ParamLimits

0x9a92,	// (0x0004848b) cell_call6_btn_pane

0xab68,	// (0x00049561) bg_popup_call2_in_pane_cp03

0xee29,	// (0x0004d822) popup_call6_1st_window_g1

0xee31,	// (0x0004d82a) popup_call6_1st_window_g2

0xee39,	// (0x0004d832) popup_call6_1st_window_g3

0x0002,

0xfeac,	// (0x0004e8a5) popup_call6_1st_window_g

0xee41,	// (0x0004d83a) popup_call6_1st_window_t1

0xee50,	// (0x0004d849) popup_call6_1st_window_t2

0xee60,	// (0x0004d859) popup_call6_1st_window_t3

0x0002,

0xfeb3,	// (0x0004e8ac) popup_call6_1st_window_t

0xab68,	// (0x00049561) bg_popup_call2_in_pane_cp04

0xee29,	// (0x0004d822) popup_call6_2nd_window_g1

0xee31,	// (0x0004d82a) popup_call6_2nd_window_g2

0xee39,	// (0x0004d832) popup_call6_2nd_window_g3

0x0002,

0xfeac,	// (0x0004e8a5) popup_call6_2nd_window_g

0xee41,	// (0x0004d83a) popup_call6_2nd_window_t1

0xa237,	// (0x00048c30) bg_button_pane_cp15

0xee70,	// (0x0004d869) cell_call6_btn_pane_g1

0x9aa3,	// (0x0004849c) cell_call6_btn_pane_t1

0x9ab2,	// (0x000484ab) listscroll_wgtman_pane_ParamLimits

0x9ab2,	// (0x000484ab) listscroll_wgtman_pane

0x9ace,	// (0x000484c7) wgtman_btn_pane_ParamLimits

0x9ace,	// (0x000484c7) wgtman_btn_pane

0xb367,	// (0x00049d60) aid_scroll_copy1

0xee79,	// (0x0004d872) list_wgtman_pane

0x9b03,	// (0x000484fc) wgtman_btn_pane_g1_ParamLimits

0x9b03,	// (0x000484fc) wgtman_btn_pane_g1

0x9b2b,	// (0x00048524) wgtman_btn_pane_t1_ParamLimits

0x9b2b,	// (0x00048524) wgtman_btn_pane_t1

0xee83,	// (0x0004d87c) wgtman_btn_pane_t2_ParamLimits

0xee83,	// (0x0004d87c) wgtman_btn_pane_t2

0x0001,

0xfeba,	// (0x0004e8b3) wgtman_btn_pane_t_ParamLimits

0xfeba,	// (0x0004e8b3) wgtman_btn_pane_t

0x9b62,	// (0x0004855b) listrow_wgtman_pane_ParamLimits

0x9b62,	// (0x0004855b) listrow_wgtman_pane

0x9b77,	// (0x00048570) listrow_wgtman_pane_g1

0x9b84,	// (0x0004857d) listrow_wgtman_pane_g2

0x0001,

0xfebf,	// (0x0004e8b8) listrow_wgtman_pane_g

0x1cb2,	// (0x000406ab) listrow_wgtman_pane_t1

0x1cca,	// (0x000406c3) listrow_wgtman_pane_t2

0x0001,

0xfec4,	// (0x0004e8bd) listrow_wgtman_pane_t

0x1cf0,	// (0x000406e9) wait_bar_pane_cp09

0xee9a,	// (0x0004d893) main_calllock_btn_pane

0xeea4,	// (0x0004d89d) main_calllock_pane_g1

0xa237,	// (0x00048c30) bg_button_pane_cp17

0xee70,	// (0x0004d869) main_calllock_btn_pane_g1

0xeeb0,	// (0x0004d8a9) main_calllock_btn_pane_t1

0xa237,	// (0x00048c30) main_dialer3_pane

0xa237,	// (0x00048c30) main_fmrd2_pane

0xce41,	// (0x0004b83a) main_fs_bigclock_unlock_btn_pane_g1

0x9baa,	// (0x000485a3) main_fs_bigclock_unlock_btn_pane_t1

0x9bb8,	// (0x000485b1) area_fmrd2_info_pane_ParamLimits

0x9bb8,	// (0x000485b1) area_fmrd2_info_pane

0x9bc4,	// (0x000485bd) area_fmrd2_visual_pane_ParamLimits

0x9bc4,	// (0x000485bd) area_fmrd2_visual_pane

0x9bd2,	// (0x000485cb) fmrd2_indi_pane_ParamLimits

0x9bd2,	// (0x000485cb) fmrd2_indi_pane

0x9bdf,	// (0x000485d8) area_fmrd2_visual_pane_g1

0x9be7,	// (0x000485e0) area_fmrd2_visual_pane_t1

0x9bf7,	// (0x000485f0) area_fmrd2_visual_pane_t2

0x9c07,	// (0x00048600) area_fmrd2_visual_pane_t3

0x0002,

0xfece,	// (0x0004e8c7) area_fmrd2_visual_pane_t

0x9c17,	// (0x00048610) area_fmrd2_info_pane_g1

0x9c1f,	// (0x00048618) area_fmrd2_info_pane_t1

0x9c2f,	// (0x00048628) area_fmrd2_info_pane_t2

0x9c3f,	// (0x00048638) area_fmrd2_info_pane_t3

0x9c4f,	// (0x00048648) area_fmrd2_info_pane_t4

0x0003,

0xfed5,	// (0x0004e8ce) area_fmrd2_info_pane_t

0x9c5f,	// (0x00048658) fmrd2_indi_pane_t1

0x9c6f,	// (0x00048668) fmrd2_indi_pane_t2

0x9c7f,	// (0x00048678) fmrd2_indi_pane_t3

0x0002,

0xfede,	// (0x0004e8d7) fmrd2_indi_pane_t

0x8f27,	// (0x00047920) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8f27,	// (0x00047920) list_single_fs_bigclock_indicator_pane_g5

0x8fdc,	// (0x000479d5) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x8fdc,	// (0x000479d5) list_single_fs_bigclock_indicator_pane_t5

0x952f,	// (0x00047f28) aid_cell_bcale_month_pane_ParamLimits

0x952f,	// (0x00047f28) aid_cell_bcale_month_pane

0x954d,	// (0x00047f46) bcale_month_pane_ParamLimits

0x954d,	// (0x00047f46) bcale_month_pane

0x956b,	// (0x00047f64) bcale_preview_pane_ParamLimits

0x956b,	// (0x00047f64) bcale_preview_pane

0xec92,	// (0x0004d68b) list_single_fs_bigclock_pane_t1_ParamLimits

0xecb1,	// (0x0004d6aa) list_single_fs_bigclock_pane_t2_ParamLimits

0xecb1,	// (0x0004d6aa) list_single_fs_bigclock_pane_t2

0x0001,

0xfe60,	// (0x0004e859) list_single_fs_bigclock_pane_t_ParamLimits

0xfe60,	// (0x0004e859) list_single_fs_bigclock_pane_t

0x9ba2,	// (0x0004859b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfec9,	// (0x0004e8c2) main_fs_bigclock_unlock_btn_pane_g

0x9c8f,	// (0x00048688) aid_dia3_key_size_ParamLimits

0x9c8f,	// (0x00048688) aid_dia3_key_size

0x9c9b,	// (0x00048694) aid_dia3_listrow_size_ParamLimits

0x9c9b,	// (0x00048694) aid_dia3_listrow_size

0x9cab,	// (0x000486a4) dia3_keypad_fun_pane_ParamLimits

0x9cab,	// (0x000486a4) dia3_keypad_fun_pane

0x9cbb,	// (0x000486b4) dia3_keypad_num_pane_ParamLimits

0x9cbb,	// (0x000486b4) dia3_keypad_num_pane

0x9ccb,	// (0x000486c4) dia3_listscroll_pane_ParamLimits

0x9ccb,	// (0x000486c4) dia3_listscroll_pane

0x9cd9,	// (0x000486d2) dia3_numentry_pane_ParamLimits

0x9cd9,	// (0x000486d2) dia3_numentry_pane

0xeebf,	// (0x0004d8b8) dia3_list_pane

0x9ce7,	// (0x000486e0) scroll_pane_cp12

0xa237,	// (0x00048c30) bg_dia3_numentry_pane

0x9cf2,	// (0x000486eb) dia3_numentry_pane_t1

0x9d01,	// (0x000486fa) cell_dia3_key_num_pane

0x9d09,	// (0x00048702) cell_dia3_key0_fun_pane_ParamLimits

0x9d09,	// (0x00048702) cell_dia3_key0_fun_pane

0x9d16,	// (0x0004870f) cell_dia3_key1_fun_pane_ParamLimits

0x9d16,	// (0x0004870f) cell_dia3_key1_fun_pane

0x9d23,	// (0x0004871c) dia3_listrow_pane

0xe2cf,	// (0x0004ccc8) bg_dia3_numentry_pane_g1

0xa237,	// (0x00048c30) bg_button_pane_cp21

0x9d30,	// (0x00048729) cell_dia3_key_num_pane_t1

0x9d3e,	// (0x00048737) cell_dia3_key_num_pane_t2

0x9d4d,	// (0x00048746) cell_dia3_key_num_pane_t3

0x9d5c,	// (0x00048755) cell_dia3_key_num_pane_t4

0x0003,

0xfee5,	// (0x0004e8de) cell_dia3_key_num_pane_t

0xa237,	// (0x00048c30) bg_button_pane_cp19

0x9d6b,	// (0x00048764) cell_dia3_key0_fun_pane_g1

0xa237,	// (0x00048c30) bg_button_pane_cp20

0x9d73,	// (0x0004876c) cell_dia3_key1_fun_pane_g1

0x9d7b,	// (0x00048774) area_left_week_number_pane

0x9d8e,	// (0x00048787) area_top_day_name_pane

0x9d9c,	// (0x00048795) frame_month_view_pane

0xeeca,	// (0x0004d8c3) grid_month_view_pane

0x9db1,	// (0x000487aa) cell_top_day_name_pane_ParamLimits

0x9db1,	// (0x000487aa) cell_top_day_name_pane

0x9dcd,	// (0x000487c6) cell_area_left_week_number_pane_ParamLimits

0x9dcd,	// (0x000487c6) cell_area_left_week_number_pane

0x9dee,	// (0x000487e7) cell_month_view_pane_ParamLimits

0x9dee,	// (0x000487e7) cell_month_view_pane

0xeed8,	// (0x0004d8d1) frm_month_g1

0x9e1a,	// (0x00048813) frm_month_g2

0x9e2b,	// (0x00048824) frm_month_g3

0x9e3c,	// (0x00048835) frm_month_g4

0x9e4d,	// (0x00048846) frm_month_g5

0x9e5e,	// (0x00048857) frm_month_g6

0x9e71,	// (0x0004886a) frm_month_g7

0xeee5,	// (0x0004d8de) frm_month_g8

0x9e84,	// (0x0004887d) frm_month_g9

0x9e91,	// (0x0004888a) frm_month_g10

0x9e9e,	// (0x00048897) frm_month_g11

0x9eab,	// (0x000488a4) frm_month_g12

0x9eb8,	// (0x000488b1) frm_month_g13

0x9ec7,	// (0x000488c0) frm_month_g14

0x9ed6,	// (0x000488cf) frm_month_g15

0x9ee5,	// (0x000488de) frm_month_g16

0x000f,

0xfeee,	// (0x0004e8e7) frm_month_g

0xeef2,	// (0x0004d8eb) cell_top_day_name_pane_t1

0x9ef4,	// (0x000488ed) cell_area_left_week_number_pane_g1

0x9f03,	// (0x000488fc) cell_area_left_week_number_pane_t1

0xd068,	// (0x0004ba61) cell_month_view_pane_g1

0x9f19,	// (0x00048912) cell_month_view_pane_t1

0xa237,	// (0x00048c30) main_fps_pane

0xe715,	// (0x0004d10e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe715,	// (0x0004d10e) cmail_ddmenu_btn02_pane_cp1

0xe731,	// (0x0004d12a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe731,	// (0x0004d12a) cmail_ddmenu_btn02_pane_cp2

0x973f,	// (0x00048138) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x973f,	// (0x00048138) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe13,	// (0x0004e80c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe13,	// (0x0004e80c) cmail_ddmenu_btn02_pane_g

0x975d,	// (0x00048156) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x975d,	// (0x00048156) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe18,	// (0x0004e811) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe18,	// (0x0004e811) cmail_ddmenu_btn02_pane_t

0x9f2f,	// (0x00048928) fps_text_pane_ParamLimits

0x9f2f,	// (0x00048928) fps_text_pane

0x9f3c,	// (0x00048935) main_fps_pane_g1_ParamLimits

0x9f3c,	// (0x00048935) main_fps_pane_g1

0x9f48,	// (0x00048941) wait_bar_pane_cp010_ParamLimits

0x9f48,	// (0x00048941) wait_bar_pane_cp010

0x9f54,	// (0x0004894d) fps_text_pane_t1_ParamLimits

0x9f54,	// (0x0004894d) fps_text_pane_t1

0x7282,	// (0x00045c7b) cam4_image_uncrop_pane_g1

0x728b,	// (0x00045c84) cam4_image_uncrop_pane_g2

0x7294,	// (0x00045c8d) cam4_image_uncrop_pane_g3

0x729d,	// (0x00045c96) cam4_image_uncrop_pane_g4

0x0003,

0xf8d7,	// (0x0004e2d0) cam4_image_uncrop_pane_g

0x9d23,	// (0x0004871c) dia3_listrow_pane_ParamLimits

0xa237,	// (0x00048c30) main_phob2_pane

0x93be,	// (0x00047db7) cell_tport_appsw_pane_cp02_ParamLimits

0x93be,	// (0x00047db7) cell_tport_appsw_pane_cp02

0x93cd,	// (0x00047dc6) cell_tport_appsw_pane_cp03_ParamLimits

0x93cd,	// (0x00047dc6) cell_tport_appsw_pane_cp03

0xa237,	// (0x00048c30) phob2_contact_card_pane

0xa237,	// (0x00048c30) phob2_listscroll_pane

0xef05,	// (0x0004d8fe) phob2_list_pane

0xef0d,	// (0x0004d906) scroll_pane_cp034

0x9f6d,	// (0x00048966) phob2_cc_data_pane_ParamLimits

0x9f6d,	// (0x00048966) phob2_cc_data_pane

0x9f84,	// (0x0004897d) phob2_cc_listscroll_pane_ParamLimits

0x9f84,	// (0x0004897d) phob2_cc_listscroll_pane

0x9fa0,	// (0x00048999) list_double_large_graphic_phob2_pane_ParamLimits

0x9fa0,	// (0x00048999) list_double_large_graphic_phob2_pane

0x9fb8,	// (0x000489b1) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9fb8,	// (0x000489b1) list_double_large_graphic_phob2_pane_g1

0x1d02,	// (0x000406fb) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1d02,	// (0x000406fb) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff0f,	// (0x0004e908) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff0f,	// (0x0004e908) list_double_large_graphic_phob2_pane_g

0x1d0e,	// (0x00040707) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1d0e,	// (0x00040707) list_double_large_graphic_phob2_pane_t1

0x1d23,	// (0x0004071c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1d23,	// (0x0004071c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff14,	// (0x0004e90d) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff14,	// (0x0004e90d) list_double_large_graphic_phob2_pane_t

0xa237,	// (0x00048c30) list_highlight_pane_cp024

0x9fce,	// (0x000489c7) phob2_cc_button_pane

0x9fd6,	// (0x000489cf) phob2_cc_data_pane_g1_ParamLimits

0x9fd6,	// (0x000489cf) phob2_cc_data_pane_g1

0x9fea,	// (0x000489e3) phob2_cc_data_pane_g2_ParamLimits

0x9fea,	// (0x000489e3) phob2_cc_data_pane_g2

0x0001,

0xff19,	// (0x0004e912) phob2_cc_data_pane_g_ParamLimits

0xff19,	// (0x0004e912) phob2_cc_data_pane_g

0x9ff9,	// (0x000489f2) phob2_cc_data_pane_t1_ParamLimits

0x9ff9,	// (0x000489f2) phob2_cc_data_pane_t1

0xa012,	// (0x00048a0b) phob2_cc_data_pane_t2_ParamLimits

0xa012,	// (0x00048a0b) phob2_cc_data_pane_t2

0xa02b,	// (0x00048a24) phob2_cc_data_pane_t3_ParamLimits

0xa02b,	// (0x00048a24) phob2_cc_data_pane_t3

0x0002,

0xff1e,	// (0x0004e917) phob2_cc_data_pane_t_ParamLimits

0xff1e,	// (0x0004e917) phob2_cc_data_pane_t

0xef15,	// (0x0004d90e) phob2_cc_list_pane_ParamLimits

0xef15,	// (0x0004d90e) phob2_cc_list_pane

0xdeba,	// (0x0004c8b3) scroll_pane_cp035_ParamLimits

0xdeba,	// (0x0004c8b3) scroll_pane_cp035

0xbcb3,	// (0x0004a6ac) bg_button_pane_cp033

0xef21,	// (0x0004d91a) phob2_cc_button_pane_g1

0xef2d,	// (0x0004d926) phob2_cc_button_pane_t1

0xef42,	// (0x0004d93b) phob2_cc_button_pane_t2

0x0001,

0xff25,	// (0x0004e91e) phob2_cc_button_pane_t

0xa044,	// (0x00048a3d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa044,	// (0x00048a3d) list_double_large_graphic_phob2_cc_pane

0xa093,	// (0x00048a8c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa093,	// (0x00048a8c) list_double_large_graphic_phob2_cc_pane_g1

0x1d35,	// (0x0004072e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1d35,	// (0x0004072e) list_double_large_graphic_phob2_cc_pane_g2

0x1d41,	// (0x0004073a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1d41,	// (0x0004073a) list_double_large_graphic_phob2_cc_pane_g3

0x1d4d,	// (0x00040746) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1d4d,	// (0x00040746) list_double_large_graphic_phob2_cc_pane_g4

0x1d59,	// (0x00040752) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1d59,	// (0x00040752) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff2a,	// (0x0004e923) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff2a,	// (0x0004e923) list_double_large_graphic_phob2_cc_pane_g

0x1d65,	// (0x0004075e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1d65,	// (0x0004075e) list_double_large_graphic_phob2_cc_pane_t1

0x1d8e,	// (0x00040787) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1d8e,	// (0x00040787) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff35,	// (0x0004e92e) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff35,	// (0x0004e92e) list_double_large_graphic_phob2_cc_pane_t

0xef54,	// (0x0004d94d) list_highlight_pane_cp025_ParamLimits

0xef54,	// (0x0004d94d) list_highlight_pane_cp025

0xbcb3,	// (0x0004a6ac) bg_button_pane_cp033_ParamLimits

0xef21,	// (0x0004d91a) phob2_cc_button_pane_g1_ParamLimits

0xef2d,	// (0x0004d926) phob2_cc_button_pane_t1_ParamLimits

0xef42,	// (0x0004d93b) phob2_cc_button_pane_t2_ParamLimits

0xff25,	// (0x0004e91e) phob2_cc_button_pane_t_ParamLimits

0x2096,	// (0x00040a8f) popup_wgtman_window

0xd93b,	// (0x0004c334) scroll_pane_cp038

0x9aeb,	// (0x000484e4) wgtman_btn_pane_cp_01_ParamLimits

0x9aeb,	// (0x000484e4) wgtman_btn_pane_cp_01

0xef62,	// (0x0004d95b) wgtman_content_pane

0xef99,	// (0x0004d992) wgtman_heading_pane

0xa237,	// (0x00048c30) bg_heading_pane_cp02

0xefa2,	// (0x0004d99b) wgtman_heading_pane_g1

0xefaa,	// (0x0004d9a3) wgtman_heading_pane_t1

0xefb8,	// (0x0004d9b1) scroll_pane_cp036

0xefc0,	// (0x0004d9b9) wgtman_list_pane

0xef6b,	// (0x0004d964) wgtman_list_pane_t1_ParamLimits

0xef6b,	// (0x0004d964) wgtman_list_pane_t1

0x71df,	// (0x00045bd8) cam4_grid_pane

0x0f17,	// (0x0003f910) bg_button_pane_cp015_ParamLimits

0x7ee2,	// (0x000468db) bg_button_pane_cp016_ParamLimits

0x7ef5,	// (0x000468ee) bg_button_pane_cp017_ParamLimits

0x0f5b,	// (0x0003f954) popup_vitu2_query_window_g3_ParamLimits

0x0f5b,	// (0x0003f954) popup_vitu2_query_window_g3

0x0fd4,	// (0x0003f9cd) popup_vitu2_query_window_t6_ParamLimits

0x0fd4,	// (0x0003f9cd) popup_vitu2_query_window_t6

0x0fff,	// (0x0003f9f8) popup_vitu2_query_window_t7_ParamLimits

0x0fff,	// (0x0003f9f8) popup_vitu2_query_window_t7

0xef85,	// (0x0004d97e) cam4_grid_pane_g1

0xef8e,	// (0x0004d987) cam4_grid_pane_g2

0xefc8,	// (0x0004d9c1) cam4_grid_pane_g3

0xefd1,	// (0x0004d9ca) cam4_grid_pane_g4

0x0003,

0xff3a,	// (0x0004e933) cam4_grid_pane_g

0x2faa,	// (0x000419a3) aid_placing_vt_slider_lsc_ParamLimits

0x32dd,	// (0x00041cd6) vidtel_button_pane_ParamLimits

0x32dd,	// (0x00041cd6) vidtel_button_pane

0xa237,	// (0x00048c30) bg_button_pane_cp034

0xefdc,	// (0x0004d9d5) vidtel_button_pane_g1

0xefe4,	// (0x0004d9dd) vidtel_button_pane_t1

0xda48,	// (0x0004c441) aid_size_vtel_slider_touch

0xdeba,	// (0x0004c8b3) scroll_pane_cp039

0x8bce,	// (0x000475c7) ncim_query_button_pane_cp01_ParamLimits

0x8bed,	// (0x000475e6) ncimui_query_pane_g1_ParamLimits

0xbcb3,	// (0x0004a6ac) input_focus_pane_cp012_ParamLimits

0xe30d,	// (0x0004cd06) ncim_query_entry_pane_t1_ParamLimits

0xdeba,	// (0x0004c8b3) scroll_pane_cp039_ParamLimits

0xb461,	// (0x00049e5a) navi_pane_bcale_mc_g1

0xb469,	// (0x00049e62) navi_pane_bcale_mc_t1

0xe767,	// (0x0004d160) main_sp_fs_email_pane_g1

0xe773,	// (0x0004d16c) main_sp_fs_email_pane_g2

0x0001,

0xfccb,	// (0x0004e6c4) main_sp_fs_email_pane_g

0xea03,	// (0x0004d3fc) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea03,	// (0x0004d3fc) list_single_cale_mrui_row_pane_g3

0x1c0f,	// (0x00040608) list_single_recal_day_pane_g5_event_pane

0x1c25,	// (0x0004061e) list_single_recal_day_pane_g7

0xeffa,	// (0x0004d9f3) list_recal_day_event_pane_cp01

0xf003,	// (0x0004d9fc) list_recal_vselct_arw_lo_pane_cp01

0xf00b,	// (0x0004da04) list_recal_vselct_arw_up_pane_cp01

0xf013,	// (0x0004da0c) list_recal_vselct_pane_cp01

0xda58,	// (0x0004c451) list_recal_day_event_pane_cp01_g1

0x1db7,	// (0x000407b0) list_recal_day_event_pane_cp01_t1

0x1c2d,	// (0x00040626) list_single_recal_day_pane_t1_ParamLimits

0x1c3f,	// (0x00040638) list_single_recal_day_pane_t2_ParamLimits

0xfe28,	// (0x0004e821) list_single_recal_day_pane_t_ParamLimits

0xa8e4,	// (0x000492dd) bg_notes_pane_ParamLimits

0xa987,	// (0x00049380) list_notes_pane_ParamLimits

0x23b0,	// (0x00040da9) scroll_pane_cp06_ParamLimits

0xa9a9,	// (0x000493a2) main_notes_pane_ParamLimits

0xbcb3,	// (0x0004a6ac) main_welc_pane

0xa0b3,	// (0x00048aac) main_welc_body_pane_ParamLimits

0xa0b3,	// (0x00048aac) main_welc_body_pane

0xa0ce,	// (0x00048ac7) main_welc_opti_pane_ParamLimits

0xa0ce,	// (0x00048ac7) main_welc_opti_pane

0xa10f,	// (0x00048b08) main_welc_pane_t1_ParamLimits

0xa10f,	// (0x00048b08) main_welc_pane_t1

0xa171,	// (0x00048b6a) main_welc_body_row_pane_ParamLimits

0xa171,	// (0x00048b6a) main_welc_body_row_pane

0xd6e8,	// (0x0004c0e1) main_welc_opti_row_pane_ParamLimits

0xd6e8,	// (0x0004c0e1) main_welc_opti_row_pane

0xf01d,	// (0x0004da16) main_welc_opti_row_pane_g1

0xa18b,	// (0x00048b84) main_welc_opti_row_pane_t1

0xf025,	// (0x0004da1e) main_welc_body_row_pane_t1

0xed69,	// (0x0004d762) popup_notif_wgt_heading_pane

0xed83,	// (0x0004d77c) aid_size_list_notif_wgt_del_ParamLimits

0xed90,	// (0x0004d789) list_notif_wgt_row_pane_g1_ParamLimits

0xed9c,	// (0x0004d795) list_notif_wgt_row_pane_g2_ParamLimits

0xedab,	// (0x0004d7a4) list_notif_wgt_row_pane_g3_ParamLimits

0xfe8f,	// (0x0004e888) list_notif_wgt_row_pane_g_ParamLimits

0xedb8,	// (0x0004d7b1) list_notif_wgt_row_pane_t1_ParamLimits

0xedce,	// (0x0004d7c7) list_notif_wgt_row_pane_t2_ParamLimits

0xede0,	// (0x0004d7d9) list_notif_wgt_row_pane_t3_ParamLimits

0xfe96,	// (0x0004e88f) list_notif_wgt_row_pane_t_ParamLimits

0x9b77,	// (0x00048570) listrow_wgtman_pane_g1_ParamLimits

0x9b84,	// (0x0004857d) listrow_wgtman_pane_g2_ParamLimits

0xfebf,	// (0x0004e8b8) listrow_wgtman_pane_g_ParamLimits

0x1cb2,	// (0x000406ab) listrow_wgtman_pane_t1_ParamLimits

0x1cca,	// (0x000406c3) listrow_wgtman_pane_t2_ParamLimits

0xfec4,	// (0x0004e8bd) listrow_wgtman_pane_t_ParamLimits

0x1cf0,	// (0x000406e9) wait_bar_pane_cp09_ParamLimits

0xa237,	// (0x00048c30) bg_popup_heading_pane_cp02

0xf034,	// (0x0004da2d) popup_notif_wgt_heading_pane_g1

0xf03c,	// (0x0004da35) popup_notif_wgt_heading_pane_t1

0xa237,	// (0x00048c30) main_vids_pane

0xa237,	// (0x00048c30) vids_listscroll_pane

0xa19a,	// (0x00048b93) scroll_pane_cp040

0xa237,	// (0x00048c30) vids_list_pane

0xa1a5,	// (0x00048b9e) vids_list_double_pane_ParamLimits

0xa1a5,	// (0x00048b9e) vids_list_double_pane

0xa1b9,	// (0x00048bb2) vids_list_double_pane_g1

0xa1c2,	// (0x00048bbb) vids_list_double_pane_t1

0xa1d2,	// (0x00048bcb) vids_list_double_pane_t2

0x0001,

0xff51,	// (0x0004e94a) vids_list_double_pane_t

0xbcb3,	// (0x0004a6ac) main_ncimui_pane_ParamLimits

0x8a0f,	// (0x00047408) main_ncimui_pane_g1_ParamLimits

0x8a1d,	// (0x00047416) main_ncimui_pane_g2_ParamLimits

0x8a1d,	// (0x00047416) main_ncimui_pane_g2

0x0001,

0xfbcc,	// (0x0004e5c5) main_ncimui_pane_g_ParamLimits

0xfbcc,	// (0x0004e5c5) main_ncimui_pane_g

0xa0e9,	// (0x00048ae2) main_welc_pane_g1_ParamLimits

0xa0e9,	// (0x00048ae2) main_welc_pane_g1

0xa0f5,	// (0x00048aee) main_welc_pane_g2_ParamLimits

0xa0f5,	// (0x00048aee) main_welc_pane_g2

0x0002,

0xff43,	// (0x0004e93c) main_welc_pane_g_ParamLimits

0xff43,	// (0x0004e93c) main_welc_pane_g

0xa8e4,	// (0x000492dd) listscroll_mce_pane_ParamLimits

0xb5b8,	// (0x00049fb1) wait_bar_pane_cp10

0xc9e9,	// (0x0004b3e2) main_cale_day_pane_ParamLimits

0xc9e9,	// (0x0004b3e2) main_cale_week_pane_ParamLimits

0xa8e4,	// (0x000492dd) main_messa_pane_ParamLimits

0x6507,	// (0x00044f00) main_clock2_btn_pane_ParamLimits

0x6507,	// (0x00044f00) main_clock2_btn_pane

0xd1f0,	// (0x0004bbe9) main_clock2_btn_pane_cp01_ParamLimits

0xd1f0,	// (0x0004bbe9) main_clock2_btn_pane_cp01

0xe9d4,	// (0x0004d3cd) list_cale_mrui_pane_ParamLimits

0xee16,	// (0x0004d80f) main_cf0_pane_g2

0x0001,

0xfe9d,	// (0x0004e896) main_cf0_pane_g

0x9d7b,	// (0x00048774) area_left_week_number_pane_ParamLimits

0x9d8e,	// (0x00048787) area_top_day_name_pane_ParamLimits

0x9d9c,	// (0x00048795) frame_month_view_pane_ParamLimits

0xeeca,	// (0x0004d8c3) grid_month_view_pane_ParamLimits

0xeed8,	// (0x0004d8d1) frm_month_g1_ParamLimits

0x9e1a,	// (0x00048813) frm_month_g2_ParamLimits

0x9e2b,	// (0x00048824) frm_month_g3_ParamLimits

0x9e3c,	// (0x00048835) frm_month_g4_ParamLimits

0x9e4d,	// (0x00048846) frm_month_g5_ParamLimits

0x9e5e,	// (0x00048857) frm_month_g6_ParamLimits

0x9e71,	// (0x0004886a) frm_month_g7_ParamLimits

0xeee5,	// (0x0004d8de) frm_month_g8_ParamLimits

0x9e84,	// (0x0004887d) frm_month_g9_ParamLimits

0x9e91,	// (0x0004888a) frm_month_g10_ParamLimits

0x9e9e,	// (0x00048897) frm_month_g11_ParamLimits

0x9eab,	// (0x000488a4) frm_month_g12_ParamLimits

0x9eb8,	// (0x000488b1) frm_month_g13_ParamLimits

0x9ec7,	// (0x000488c0) frm_month_g14_ParamLimits

0x9ed6,	// (0x000488cf) frm_month_g15_ParamLimits

0x9ee5,	// (0x000488de) frm_month_g16_ParamLimits

0xfeee,	// (0x0004e8e7) frm_month_g_ParamLimits

0xeef2,	// (0x0004d8eb) cell_top_day_name_pane_t1_ParamLimits

0x9ef4,	// (0x000488ed) cell_area_left_week_number_pane_g1_ParamLimits

0x9f03,	// (0x000488fc) cell_area_left_week_number_pane_t1_ParamLimits

0xd068,	// (0x0004ba61) cell_month_view_pane_g1_ParamLimits

0x9f19,	// (0x00048912) cell_month_view_pane_t1_ParamLimits

0xa8dc,	// (0x000492d5) main_clock2_btn_pane_g1

0xf04a,	// (0x0004da43) main_clock2_btn_pane_t1

0xbcb3,	// (0x0004a6ac) listscroll_cmail_pane_ParamLimits

0xe767,	// (0x0004d160) main_sp_fs_email_pane_g1_ParamLimits

0xe773,	// (0x0004d16c) main_sp_fs_email_pane_g2_ParamLimits

0xfccb,	// (0x0004e6c4) main_sp_fs_email_pane_g_ParamLimits

0xeadc,	// (0x0004d4d5) list_recal_day_pane_ParamLimits

0xeaed,	// (0x0004d4e6) mian_recal_day_pane_t1

0x15c3,	// (0x0003ffbc) list_single_dyc_row_text_pane_t4_ParamLimits

0x15c3,	// (0x0003ffbc) list_single_dyc_row_text_pane_t4

0x1600,	// (0x0003fff9) list_single_dyc_row_text_pane_t5_ParamLimits

0x1600,	// (0x0003fff9) list_single_dyc_row_text_pane_t5

0x1676,	// (0x0004006f) list_single_dyc_row_text_pane_t6_ParamLimits

0x1676,	// (0x0004006f) list_single_dyc_row_text_pane_t6

0x40a2,	// (0x00042a9b) aid_mgn_list_cale_time_pane

0xbcb3,	// (0x0004a6ac) main_gallery2_pane_ParamLimits

0xd204,	// (0x0004bbfd) main_clock2_pane_cp01_t1

0xd212,	// (0x0004bc0b) main_clock2_pane_cp01_t3

0x0001,

0xf7a9,	// (0x0004e1a2) main_clock2_pane_cp01_t

0x28ac,	// (0x000412a5) cale_week_scroll_pane_g16_ParamLimits

0x28ac,	// (0x000412a5) cale_week_scroll_pane_g16

0xab68,	// (0x00049561) vorec_slider_pane

0xefe4,	// (0x0004d9dd) vidtel_button_pane_t1_ParamLimits

0x97c0,	// (0x000481b9) main_fs_bigclock_clock_pane_g1_ParamLimits

0x97c0,	// (0x000481b9) main_fs_bigclock_clock_pane_g2_ParamLimits

0x97cf,	// (0x000481c8) main_fs_bigclock_clock_pane_g3_ParamLimits

0x97cf,	// (0x000481c8) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe4b,	// (0x0004e844) main_fs_bigclock_clock_pane_g_ParamLimits

0x97df,	// (0x000481d8) main_fs_bigclock_clock_pane_t1_ParamLimits

0x97f4,	// (0x000481ed) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe54,	// (0x0004e84d) main_fs_bigclock_clock_pane_t_ParamLimits

0x5d5d,	// (0x00044756) main_mup3_lyrics_pane_ParamLimits

0x5d5d,	// (0x00044756) main_mup3_lyrics_pane

0xa208,	// (0x00048c01) main_mup3_lyrics_pane_t1_ParamLimits

0xa208,	// (0x00048c01) main_mup3_lyrics_pane_t1

0x6b50,	// (0x00045549) aid_main_mp4_pane_t1_area

0x6b5a,	// (0x00045553) aid_main_mp4_pane_t2_area

0x6c67,	// (0x00045660) main_mp4_pane_g7_ParamLimits

0x6c67,	// (0x00045660) main_mp4_pane_g7

0x6c73,	// (0x0004566c) main_mp4_pane_g8_ParamLimits

0x6c73,	// (0x0004566c) main_mp4_pane_g8

0x7083,	// (0x00045a7c) aid_call6_pane_g1_size

0xa072,	// (0x00048a6b) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa072,	// (0x00048a6b) list_double_large_graphic_phob2_other_pane

0xa22f,	// (0x00048c28) list_double_large_graphic_phob2_other_pane_g1

0xa237,	// (0x00048c30) list_highlight_pane_cp026

0xbcb3,	// (0x0004a6ac) main_welc_pane_ParamLimits

0x92bc,	// (0x00047cb5) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x92bc,	// (0x00047cb5) main_sp_fs_ctrlbar_pane_g3

0x92d6,	// (0x00047ccf) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x92d6,	// (0x00047ccf) main_sp_fs_ctrlbar_pane_g4

0x9308,	// (0x00047d01) toolbar2_fixed_button_pane_cp01

0x9313,	// (0x00047d0c) toolbar2_fixed_button_pane_cp02

0x9320,	// (0x00047d19) toolbar2_fixed_button_pane_cp03

0xa0a4,	// (0x00048a9d) list_welc_entry_pane_ParamLimits

0xa0a4,	// (0x00048a9d) list_welc_entry_pane

0xa103,	// (0x00048afc) main_welc_pane_g3_ParamLimits

0xa103,	// (0x00048afc) main_welc_pane_g3

0xa12d,	// (0x00048b26) main_welc_pane_t2_ParamLimits

0xa12d,	// (0x00048b26) main_welc_pane_t2

0xa141,	// (0x00048b3a) main_welc_pane_t3_ParamLimits

0xa141,	// (0x00048b3a) main_welc_pane_t3

0x0002,

0xff4a,	// (0x0004e943) main_welc_pane_t_ParamLimits

0xff4a,	// (0x0004e943) main_welc_pane_t

0xa155,	// (0x00048b4e) welc_button_pane_ParamLimits

0xa155,	// (0x00048b4e) welc_button_pane

0xa163,	// (0x00048b5c) welc_service_logo_pane_ParamLimits

0xa163,	// (0x00048b5c) welc_service_logo_pane

0xf058,	// (0x0004da51) list_single_welc_entry_pane_ParamLimits

0xf058,	// (0x0004da51) list_single_welc_entry_pane

0xf06b,	// (0x0004da64) list_single_welc_entry_pane_g1

0xf073,	// (0x0004da6c) list_single_welc_entry_pane_t1

0xf081,	// (0x0004da7a) list_single_welc_entry_pane_t2

0x0001,

0x0a51,	// (0x0003f44a) list_single_welc_entry_pane_t

0xa237,	// (0x00048c30) bg_button_pane_cp035

0xf08f,	// (0x0004da88) welc_button_pane_t1

0xf09d,	// (0x0004da96) welc_service_logo_pane_g1

0xf0a6,	// (0x0004da9f) welc_service_logo_pane_g2

0x0001,

0x0a56,	// (0x0003f44f) welc_service_logo_pane_g
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
