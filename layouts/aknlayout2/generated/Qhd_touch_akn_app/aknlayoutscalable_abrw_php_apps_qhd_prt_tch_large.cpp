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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0009416f };

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
0x0f30,	// (0x0009509f) Screen

0x0f3c,	// (0x000950ab) application_window

0x0f98,	// (0x00095107) area_bottom_pane_ParamLimits

0x0f98,	// (0x00095107) area_bottom_pane

0x0ff1,	// (0x00095160) area_top_pane_ParamLimits

0x0ff1,	// (0x00095160) area_top_pane

0x1055,	// (0x000951c4) call_video_uplink_pane_ParamLimits

0x1055,	// (0x000951c4) call_video_uplink_pane

0x1094,	// (0x00095203) main_pane_ParamLimits

0x1094,	// (0x00095203) main_pane

0xc74d,	// (0x000a08bc) context_pane

0x46c5,	// (0x00098834) navi_pane

0x46eb,	// (0x0009885a) popup_cale_events_window_ParamLimits

0x46eb,	// (0x0009885a) popup_cale_events_window

0xc760,	// (0x000a08cf) popup_mup_playback_window

0x4703,	// (0x00098872) signal_pane

0xa1e5,	// (0x0009e354) main_browser_pane

0xae0b,	// (0x0009ef7a) main_burst_pane

0x4543,	// (0x000986b2) main_calc_pane

0xc733,	// (0x000a08a2) main_cale_day_pane

0x17f7,	// (0x00095966) main_cale_month_pane

0xc733,	// (0x000a08a2) main_cale_week_pane

0xae0b,	// (0x0009ef7a) main_call_pane

0x9ec5,	// (0x0009e034) main_call_poc_pane

0xae0b,	// (0x0009ef7a) main_camera_pane

0xae0b,	// (0x0009ef7a) main_chi_dic_pane

0xab88,	// (0x0009ecf7) main_clock_pane

0x9ec5,	// (0x0009e034) main_fmradio_pane

0xae0b,	// (0x0009ef7a) main_graph_messa_pane

0x9ec5,	// (0x0009e034) main_help_pane

0xa1e5,	// (0x0009e354) main_im_pane

0xa120,	// (0x0009e28f) main_image_pane_ParamLimits

0xa120,	// (0x0009e28f) main_image_pane

0x9ec5,	// (0x0009e034) main_location2_pane

0xae0b,	// (0x0009ef7a) main_location_pane

0xa120,	// (0x0009e28f) main_messa_pane

0x9ec5,	// (0x0009e034) main_mp2_pane

0xae0b,	// (0x0009ef7a) main_mp_pane

0x9ec5,	// (0x0009e034) main_msg_pane

0x9ec5,	// (0x0009e034) main_mup_eq_pane

0x9ec5,	// (0x0009e034) main_mup_pane

0xa1e5,	// (0x0009e354) main_notes_pane

0x9ec5,	// (0x0009e034) main_pec_pane

0x9ec5,	// (0x0009e034) main_phob_pane

0x9ec5,	// (0x0009e034) main_pinb_pane

0x9ec5,	// (0x0009e034) main_postcard_pane

0x9ec5,	// (0x0009e034) main_qdial_pane

0xae0b,	// (0x0009ef7a) main_skin_pane

0x9ec5,	// (0x0009e034) main_smil2_pane

0xae0b,	// (0x0009ef7a) main_smil_pane

0xae0b,	// (0x0009ef7a) main_video_pane

0xae0b,	// (0x0009ef7a) main_video_tele_pane

0xa120,	// (0x0009e28f) main_viewer_pane_ParamLimits

0xa120,	// (0x0009e28f) main_viewer_pane

0xae0b,	// (0x0009ef7a) main_vorec_pane

0x458f,	// (0x000986fe) popup_blid_sat_info_window_ParamLimits

0x458f,	// (0x000986fe) popup_blid_sat_info_window

0x45af,	// (0x0009871e) popup_dyc_status_message_window_ParamLimits

0x45af,	// (0x0009871e) popup_dyc_status_message_window

0x45bf,	// (0x0009872e) popup_grid_large_graphic_window_ParamLimits

0x45bf,	// (0x0009872e) popup_grid_large_graphic_window

0x4650,	// (0x000987bf) popup_loc_request_window_ParamLimits

0x4650,	// (0x000987bf) popup_loc_request_window

0x469d,	// (0x0009880c) popup_wml_address_window_ParamLimits

0x469d,	// (0x0009880c) popup_wml_address_window

0x441b,	// (0x0009858a) call_muted_g1

0x40dd,	// (0x0009824c) popup_call_audio_conf_window_ParamLimits

0x40dd,	// (0x0009824c) popup_call_audio_conf_window

0x442b,	// (0x0009859a) popup_call_audio_first_window_ParamLimits

0x442b,	// (0x0009859a) popup_call_audio_first_window

0x446b,	// (0x000985da) popup_call_audio_in_window_ParamLimits

0x446b,	// (0x000985da) popup_call_audio_in_window

0x448f,	// (0x000985fe) popup_call_audio_out_window_ParamLimits

0x448f,	// (0x000985fe) popup_call_audio_out_window

0x44b1,	// (0x00098620) popup_call_audio_second_window_ParamLimits

0x44b1,	// (0x00098620) popup_call_audio_second_window

0x44e1,	// (0x00098650) popup_call_audio_wait_window_ParamLimits

0x44e1,	// (0x00098650) popup_call_audio_wait_window

0x4502,	// (0x00098671) popup_number_entry_window_ParamLimits

0x4502,	// (0x00098671) popup_number_entry_window

0xeca8,	// (0x000a2e17) bg_popup_call_pane_cp05_ParamLimits

0xeca8,	// (0x000a2e17) bg_popup_call_pane_cp05

0xecc8,	// (0x000a2e37) popup_number_entry_window_t1

0xecdb,	// (0x000a2e4a) popup_number_entry_window_t2

0xeced,	// (0x000a2e5c) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x000a323c) popup_number_entry_window_t

0xecff,	// (0x000a2e6e) text_title_cp2

0xed12,	// (0x000a2e81) bg_popup_call_pane_cp_ParamLimits

0xed12,	// (0x000a2e81) bg_popup_call_pane_cp

0xed20,	// (0x000a2e8f) call_thumbnail_pane

0xed28,	// (0x000a2e97) popup_call_audio_in_window_g1_ParamLimits

0xed28,	// (0x000a2e97) popup_call_audio_in_window_g1

0xed34,	// (0x000a2ea3) popup_call_audio_in_window_g2_ParamLimits

0xed34,	// (0x000a2ea3) popup_call_audio_in_window_g2

0xed40,	// (0x000a2eaf) popup_call_audio_in_window_g3_ParamLimits

0xed40,	// (0x000a2eaf) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x000a3245) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x000a3245) popup_call_audio_in_window_g

0xed4c,	// (0x000a2ebb) popup_call_audio_in_window_t1_ParamLimits

0xed4c,	// (0x000a2ebb) popup_call_audio_in_window_t1

0xed68,	// (0x000a2ed7) popup_call_audio_in_window_t2_ParamLimits

0xed68,	// (0x000a2ed7) popup_call_audio_in_window_t2

0xed84,	// (0x000a2ef3) popup_call_audio_in_window_t3_ParamLimits

0xed84,	// (0x000a2ef3) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x000a324c) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x000a324c) popup_call_audio_in_window_t

0xed12,	// (0x000a2e81) bg_popup_call_pane_cp01_ParamLimits

0xed12,	// (0x000a2e81) bg_popup_call_pane_cp01

0xed20,	// (0x000a2e8f) call_thumbnail_pane_cp02

0xed97,	// (0x000a2f06) call_type_pane_cp022

0xed9f,	// (0x000a2f0e) popup_call_audio_out_window_g1_ParamLimits

0xed9f,	// (0x000a2f0e) popup_call_audio_out_window_g1

0xeed9,	// (0x000a3048) popup_call_audio_out_window_g2_ParamLimits

0xeed9,	// (0x000a3048) popup_call_audio_out_window_g2

0xeee5,	// (0x000a3054) popup_call_audio_out_window_g3_ParamLimits

0xeee5,	// (0x000a3054) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x000a3253) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x000a3253) popup_call_audio_out_window_g

0xeef7,	// (0x000a3066) popup_call_audio_out_window_t1_ParamLimits

0xeef7,	// (0x000a3066) popup_call_audio_out_window_t1

0xef0f,	// (0x000a307e) popup_call_audio_out_window_t2_ParamLimits

0xef0f,	// (0x000a307e) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x000a325a) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x000a325a) popup_call_audio_out_window_t

0xef24,	// (0x000a3093) bg_popup_call_pane_ParamLimits

0xef24,	// (0x000a3093) bg_popup_call_pane

0x12ad,	// (0x0009541c) call_thumbnail_pane_cp_ParamLimits

0x12ad,	// (0x0009541c) call_thumbnail_pane_cp

0xefa8,	// (0x000a3117) call_type_pane_cp01_ParamLimits

0xefa8,	// (0x000a3117) call_type_pane_cp01

0xefec,	// (0x000a315b) popup_call_audio_first_window_g1_ParamLimits

0xefec,	// (0x000a315b) popup_call_audio_first_window_g1

0x9d1a,	// (0x0009de89) popup_call_audio_first_window_g2_ParamLimits

0x9d1a,	// (0x0009de89) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x000a325f) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x000a325f) popup_call_audio_first_window_g

0x9d5e,	// (0x0009decd) popup_call_audio_first_window_t1_ParamLimits

0x9d5e,	// (0x0009decd) popup_call_audio_first_window_t1

0x9e0a,	// (0x0009df79) popup_call_audio_first_window_t4_ParamLimits

0x9e0a,	// (0x0009df79) popup_call_audio_first_window_t4

0x9e96,	// (0x0009e005) popup_call_audio_first_window_t5_ParamLimits

0x9e96,	// (0x0009e005) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x000a3264) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x000a3264) popup_call_audio_first_window_t

0x9ec5,	// (0x0009e034) bg_popup_call_pane_cp02

0x9ecf,	// (0x0009e03e) call_type_pane_cp023

0x9ed7,	// (0x0009e046) popup_call_audio_wait_window_g1

0x9edf,	// (0x0009e04e) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x000a326b) popup_call_audio_wait_window_g

0x9ee7,	// (0x0009e056) popup_call_audio_wait_window_t3

0x9ef5,	// (0x0009e064) bg_popup_call_pane_cp03_ParamLimits

0x9ef5,	// (0x0009e064) bg_popup_call_pane_cp03

0x9f55,	// (0x0009e0c4) call_thumbnail_pane_cp011_ParamLimits

0x9f55,	// (0x0009e0c4) call_thumbnail_pane_cp011

0x9f61,	// (0x0009e0d0) call_type_pane_cp034_ParamLimits

0x9f61,	// (0x0009e0d0) call_type_pane_cp034

0x9f9d,	// (0x0009e10c) popup_call_audio_second_window_g1_ParamLimits

0x9f9d,	// (0x0009e10c) popup_call_audio_second_window_g1

0x9fd9,	// (0x0009e148) popup_call_audio_second_window_g2_ParamLimits

0x9fd9,	// (0x0009e148) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x000a3270) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x000a3270) popup_call_audio_second_window_g

0xa015,	// (0x0009e184) popup_call_audio_second_window_t1_ParamLimits

0xa015,	// (0x0009e184) popup_call_audio_second_window_t1

0xa096,	// (0x0009e205) popup_call_audio_second_window_t2_ParamLimits

0xa096,	// (0x0009e205) popup_call_audio_second_window_t2

0xa0cc,	// (0x0009e23b) popup_call_audio_second_window_t3_ParamLimits

0xa0cc,	// (0x0009e23b) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x000a3275) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x000a3275) popup_call_audio_second_window_t

0x9ec5,	// (0x0009e034) bg_popup_call_pane_cp04

0xa102,	// (0x0009e271) list_conf_pane

0xa10a,	// (0x0009e279) popup_call_audio_conf_window_t1

0xa118,	// (0x0009e287) call_thumbnail_pane_g1

0xa120,	// (0x0009e28f) bg_pinb_pane_ParamLimits

0xa120,	// (0x0009e28f) bg_pinb_pane

0xa12e,	// (0x0009e29d) find_pinb_pane

0xa137,	// (0x0009e2a6) listscroll_pinb_pane_ParamLimits

0xa137,	// (0x0009e2a6) listscroll_pinb_pane

0xa146,	// (0x0009e2b5) pinb_bg_pane_g1

0x12d1,	// (0x00095440) pinb_bg_pane_g2

0x12dd,	// (0x0009544c) pinb_bg_pane_g3

0x12e9,	// (0x00095458) pinb_bg_pane_g4

0x12f5,	// (0x00095464) pinb_bg_pane_g5

0x1301,	// (0x00095470) pinb_bg_pane_g6

0x130c,	// (0x0009547b) pinb_bg_pane_g7

0x1317,	// (0x00095486) pinb_bg_pane_g8

0x1322,	// (0x00095491) pinb_bg_pane_g9

0x132c,	// (0x0009549b) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x000a327c) pinb_bg_pane_g

0x1349,	// (0x000954b8) grid_pinb_pane

0x1354,	// (0x000954c3) list_pinb_pane

0x135f,	// (0x000954ce) scroll_pane_cp01_ParamLimits

0x135f,	// (0x000954ce) scroll_pane_cp01

0xa150,	// (0x0009e2bf) find_pinb_pane_g1_ParamLimits

0xa150,	// (0x0009e2bf) find_pinb_pane_g1

0xa168,	// (0x0009e2d7) find_pinb_pane_t1

0xa17a,	// (0x0009e2e9) find_pinb_pane_t2

0x0001,

0xf127,	// (0x000a3296) find_pinb_pane_t

0xa18f,	// (0x0009e2fe) input_focus_pane_cp01_ParamLimits

0xa18f,	// (0x0009e2fe) input_focus_pane_cp01

0x1371,	// (0x000954e0) cell_pinb_pane_ParamLimits

0x1371,	// (0x000954e0) cell_pinb_pane

0x1399,	// (0x00095508) cell_pinb_pane_g1_ParamLimits

0x1399,	// (0x00095508) cell_pinb_pane_g1

0x13ae,	// (0x0009551d) cell_pinb_pane_g2_ParamLimits

0x13ae,	// (0x0009551d) cell_pinb_pane_g2

0xa19b,	// (0x0009e30a) cell_pinb_pane_g3_ParamLimits

0xa19b,	// (0x0009e30a) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x000a329b) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x000a329b) cell_pinb_pane_g

0x9ec5,	// (0x0009e034) grid_highlight_pane_cp01

0x13ba,	// (0x00095529) list_pinb_item_pane_ParamLimits

0x13ba,	// (0x00095529) list_pinb_item_pane

0x9ec5,	// (0x0009e034) list_highlight_pane_cp02

0x13e0,	// (0x0009554f) list_pinb_item_pane_g1_ParamLimits

0x13e0,	// (0x0009554f) list_pinb_item_pane_g1

0x13ed,	// (0x0009555c) list_pinb_item_pane_g2_ParamLimits

0x13ed,	// (0x0009555c) list_pinb_item_pane_g2

0x13f9,	// (0x00095568) list_pinb_item_pane_g3_ParamLimits

0x13f9,	// (0x00095568) list_pinb_item_pane_g3

0x140a,	// (0x00095579) list_pinb_item_pane_g4_ParamLimits

0x140a,	// (0x00095579) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x000a32a2) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x000a32a2) list_pinb_item_pane_g

0x1416,	// (0x00095585) list_pinb_item_pane_t1_ParamLimits

0x1416,	// (0x00095585) list_pinb_item_pane_t1

0x1447,	// (0x000955b6) calc_display_pane

0x1465,	// (0x000955d4) calc_paper_pane

0x1481,	// (0x000955f0) grid_calc_pane

0x9ec5,	// (0x0009e034) bg_list_pane_cp01

0x14ad,	// (0x0009561c) clock_g1

0x14b5,	// (0x00095624) clock_g2

0x0001,

0xf13c,	// (0x000a32ab) clock_g

0x14bf,	// (0x0009562e) clock_t1_ParamLimits

0x14bf,	// (0x0009562e) clock_t1

0x14d4,	// (0x00095643) clock_t2_ParamLimits

0x14d4,	// (0x00095643) clock_t2

0x14e6,	// (0x00095655) clock_t3_ParamLimits

0x14e6,	// (0x00095655) clock_t3

0x14f8,	// (0x00095667) clock_t4_ParamLimits

0x14f8,	// (0x00095667) clock_t4

0x150a,	// (0x00095679) clock_t5_ParamLimits

0x150a,	// (0x00095679) clock_t5

0x151f,	// (0x0009568e) clock_t6_ParamLimits

0x151f,	// (0x0009568e) clock_t6

0x1531,	// (0x000956a0) clock_t7_ParamLimits

0x1531,	// (0x000956a0) clock_t7

0x1543,	// (0x000956b2) clock_t8_ParamLimits

0x1543,	// (0x000956b2) clock_t8

0x1559,	// (0x000956c8) clock_t9_ParamLimits

0x1559,	// (0x000956c8) clock_t9

0x0008,

0xf141,	// (0x000a32b0) clock_t_ParamLimits

0xf141,	// (0x000a32b0) clock_t

0xa1a7,	// (0x0009e316) popup_clock_analogue_window_cp02

0xa1a7,	// (0x0009e316) popup_clock_digital_window_cp01

0xa1af,	// (0x0009e31e) listscroll_help_pane

0x9ec5,	// (0x0009e034) phob_pre_status_pane

0xa1b9,	// (0x0009e328) grid_qdial_pane

0xa120,	// (0x0009e28f) listscroll_mce_pane

0xa120,	// (0x0009e28f) bg_notes_pane

0xa1c3,	// (0x0009e332) list_notes_pane

0x156f,	// (0x000956de) scroll_pane_cp06

0xa1d1,	// (0x0009e340) bg_calc_paper_pane

0x157e,	// (0x000956ed) list_calc_pane

0xa1e5,	// (0x0009e354) bg_calc_display_pane

0x1598,	// (0x00095707) calc_display_pane_t1

0x15ad,	// (0x0009571c) calc_display_pane_t2

0x15c2,	// (0x00095731) calc_display_pane_t3

0x0002,

0xf154,	// (0x000a32c3) calc_display_pane_t

0x15d4,	// (0x00095743) cell_calc_pane_ParamLimits

0x15d4,	// (0x00095743) cell_calc_pane

0xa1f1,	// (0x0009e360) bg_calc_paper_pane_g1

0xa1fd,	// (0x0009e36c) bg_calc_paper_pane_g2

0xa209,	// (0x0009e378) bg_calc_paper_pane_g3

0xa215,	// (0x0009e384) bg_calc_paper_pane_g4

0xa221,	// (0x0009e390) bg_calc_paper_pane_g5

0x1601,	// (0x00095770) bg_calc_paper_pane_g6

0x1612,	// (0x00095781) bg_calc_paper_pane_g7

0x1623,	// (0x00095792) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x000a32ca) bg_calc_paper_pane_g

0x1634,	// (0x000957a3) calc_bg_paper_pane_g9

0x1645,	// (0x000957b4) list_calc_item_pane_ParamLimits

0x1645,	// (0x000957b4) list_calc_item_pane

0xa22d,	// (0x0009e39c) list_calc_item_pane_g1

0x1674,	// (0x000957e3) list_calc_item_pane_t1_ParamLimits

0x1674,	// (0x000957e3) list_calc_item_pane_t1

0x1686,	// (0x000957f5) list_calc_item_pane_t2_ParamLimits

0x1686,	// (0x000957f5) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x000a32db) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x000a32db) list_calc_item_pane_t

0xa23a,	// (0x0009e3a9) cell_calc_pane_g1

0xa244,	// (0x0009e3b3) grid_highlight_pane_cp02

0x16b6,	// (0x00095825) bg_calc_display_pane_g1

0x16bf,	// (0x0009582e) bg_calc_display_pane_g2

0xc6d1,	// (0x000a0840) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x000a32e5) bg_calc_display_pane_g

0x16c9,	// (0x00095838) cell_qdial_pane_ParamLimits

0x16c9,	// (0x00095838) cell_qdial_pane

0x16dd,	// (0x0009584c) cell_qdial_pane_g1_ParamLimits

0x16dd,	// (0x0009584c) cell_qdial_pane_g1

0x16ea,	// (0x00095859) cell_qdial_pane_g2_ParamLimits

0x16ea,	// (0x00095859) cell_qdial_pane_g2

0xa266,	// (0x0009e3d5) cell_qdial_pane_g3_ParamLimits

0xa266,	// (0x0009e3d5) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x000a32ec) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x000a32ec) cell_qdial_pane_g

0x1708,	// (0x00095877) cell_qdial_pane_t1_ParamLimits

0x1708,	// (0x00095877) cell_qdial_pane_t1

0x1720,	// (0x0009588f) cell_qdial_pane_t2_ParamLimits

0x1720,	// (0x0009588f) cell_qdial_pane_t2

0x1733,	// (0x000958a2) cell_qdial_pane_t3_ParamLimits

0x1733,	// (0x000958a2) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x000a32f5) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x000a32f5) cell_qdial_pane_t

0x9ec5,	// (0x0009e034) grid_highlight_pane_cp04

0xa272,	// (0x0009e3e1) thumbnail_qdial_pane_ParamLimits

0xa272,	// (0x0009e3e1) thumbnail_qdial_pane

0xa2ce,	// (0x0009e43d) list_help_pane

0xa2d7,	// (0x0009e446) scroll_pane_cp02

0x1746,	// (0x000958b5) help_list_pane_t1_ParamLimits

0x1746,	// (0x000958b5) help_list_pane_t1

0x1779,	// (0x000958e8) bg_notes_pane_g2

0x1781,	// (0x000958f0) bg_notes_pane_g3

0x1789,	// (0x000958f8) notes_bg_pane_g1

0x1791,	// (0x00095900) notes_bg_pane_g4

0x1799,	// (0x00095908) notes_bg_pane_g5

0x17a1,	// (0x00095910) notes_bg_pane_g6

0x17a9,	// (0x00095918) notes_bg_pane_g7

0x17b1,	// (0x00095920) notes_bg_pane_g8

0x17b9,	// (0x00095928) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x000a3313) notes_bg_pane_g

0x17c1,	// (0x00095930) list_notes_text_pane_ParamLimits

0x17c1,	// (0x00095930) list_notes_text_pane

0xa2e0,	// (0x0009e44f) list_notes_text_pane_g1

0x17e9,	// (0x00095958) list_notes_text_pane_t1

0x17f7,	// (0x00095966) listscroll_cale_week_pane

0x181c,	// (0x0009598b) bg_cale_heading_pane

0xa303,	// (0x0009e472) bg_cale_pane_cp01

0x183e,	// (0x000959ad) cale_week_corner_pane

0x1858,	// (0x000959c7) cale_week_day_heading_pane

0x187a,	// (0x000959e9) cale_week_scroll_pane_g1

0x1897,	// (0x00095a06) cale_week_scroll_pane_g2

0x18aa,	// (0x00095a19) cale_week_scroll_pane_g3

0x18bd,	// (0x00095a2c) cale_week_scroll_pane_g4

0x18d0,	// (0x00095a3f) cale_week_scroll_pane_g5

0x18e3,	// (0x00095a52) cale_week_scroll_pane_g6

0x18f6,	// (0x00095a65) cale_week_scroll_pane_g7

0x1909,	// (0x00095a78) cale_week_scroll_pane_g8

0x191e,	// (0x00095a8d) cale_week_scroll_pane_g9

0x1931,	// (0x00095aa0) cale_week_scroll_pane_g10

0x1944,	// (0x00095ab3) cale_week_scroll_pane_g11

0x1957,	// (0x00095ac6) cale_week_scroll_pane_g12

0x196e,	// (0x00095add) cale_week_scroll_pane_g13

0x1989,	// (0x00095af8) cale_week_scroll_pane_g14

0x19a4,	// (0x00095b13) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x000a3322) cale_week_scroll_pane_g

0x19bf,	// (0x00095b2e) cale_week_time_pane

0x19d4,	// (0x00095b43) grid_cale_week_pane

0xa333,	// (0x0009e4a2) scroll_pane_cp08

0x19f3,	// (0x00095b62) cell_cale_week_pane_ParamLimits

0x19f3,	// (0x00095b62) cell_cale_week_pane

0x1a55,	// (0x00095bc4) cale_week_day_heading_pane_t1

0x1a90,	// (0x00095bff) cale_week_day_heading_pane_t2

0x1acb,	// (0x00095c3a) cale_week_day_heading_pane_t3

0x1b06,	// (0x00095c75) cale_week_day_heading_pane_t4

0x1b41,	// (0x00095cb0) cale_week_day_heading_pane_t5

0x1b7c,	// (0x00095ceb) cale_week_day_heading_pane_t6

0x1bb7,	// (0x00095d26) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x000a3341) cale_week_day_heading_pane_t

0xa350,	// (0x0009e4bf) bg_cale_side_pane

0x1bf2,	// (0x00095d61) cale_week_time_pane_t1

0x1c0c,	// (0x00095d7b) cale_week_time_pane_t2

0x1c26,	// (0x00095d95) cale_week_time_pane_t3

0x1c40,	// (0x00095daf) cale_week_time_pane_t4

0x1c5a,	// (0x00095dc9) cale_week_time_pane_t5

0x1c74,	// (0x00095de3) cale_week_time_pane_t6

0x1c94,	// (0x00095e03) cale_week_time_pane_t7

0x1cb6,	// (0x00095e25) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x000a3350) cale_week_time_pane_t

0x1cda,	// (0x00095e49) cell_cale_week_pane_g2

0x1ced,	// (0x00095e5c) cell_cale_week_pane_g3_ParamLimits

0x1ced,	// (0x00095e5c) cell_cale_week_pane_g3

0xa35e,	// (0x0009e4cd) grid_highlight_pane_cp07

0xa366,	// (0x0009e4d5) listscroll_gms_pane

0xa370,	// (0x0009e4df) grid_gms_pane

0xa379,	// (0x0009e4e8) listscroll_gms_pane_g1

0xa381,	// (0x0009e4f0) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x000a3361) listscroll_gms_pane_g

0x1d05,	// (0x00095e74) scroll_pane_cp010

0x1d10,	// (0x00095e7f) cell_gms_pane_ParamLimits

0x1d10,	// (0x00095e7f) cell_gms_pane

0x1d23,	// (0x00095e92) cell_gms_pane_g1

0xa389,	// (0x0009e4f8) cell_gms_pane_g2

0xa391,	// (0x0009e500) cell_gms_pane_g3

0xa39a,	// (0x0009e509) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x000a3366) cell_gms_pane_g

0xa3a3,	// (0x0009e512) grid_highlight_pane_cp09

0x43c3,	// (0x00098532) phob_pre_status_pane_g1

0x43cb,	// (0x0009853a) phob_pre_status_pane_g2

0x43d3,	// (0x00098542) phob_pre_status_pane_g3

0x43db,	// (0x0009854a) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x000a3755) phob_pre_status_pane_g

0x43eb,	// (0x0009855a) phob_pre_status_pane_t1

0x43fb,	// (0x0009856a) phob_pre_status_pane_t2

0x440b,	// (0x0009857a) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x000a3760) phob_pre_status_pane_t

0x9ec5,	// (0x0009e034) bg_list_pane_cp05

0x1d33,	// (0x00095ea2) grid_vorec_pane

0x1d3d,	// (0x00095eac) vorec_t1

0x1d4b,	// (0x00095eba) vorec_t2

0x1d59,	// (0x00095ec8) vorec_t3

0x1d67,	// (0x00095ed6) vorec_t4

0x1d75,	// (0x00095ee4) vorec_t5

0x1d83,	// (0x00095ef2) vorec_t6

0x0006,

0xf200,	// (0x000a336f) vorec_t

0x1d9f,	// (0x00095f0e) wait_bar_pane_cp01

0x1da7,	// (0x00095f16) cell_vorec_pane_ParamLimits

0x1da7,	// (0x00095f16) cell_vorec_pane

0x1dba,	// (0x00095f29) cell_vorec_pane_g1

0x9ec5,	// (0x0009e034) grid_highlight_pane_cp05

0x1dd4,	// (0x00095f43) cams_zoom_pane

0x1de0,	// (0x00095f4f) image_vga_pane

0x1def,	// (0x00095f5e) main_camera_pane_g1

0x1dfd,	// (0x00095f6c) main_camera_pane_g2

0x1e09,	// (0x00095f78) main_camera_pane_g3

0x1e15,	// (0x00095f84) main_camera_pane_g4

0x1e21,	// (0x00095f90) main_camera_pane_g5

0x1e2d,	// (0x00095f9c) main_camera_pane_g6

0x1e39,	// (0x00095fa8) main_camera_pane_g7

0x0007,

0xf20f,	// (0x000a337e) main_camera_pane_g

0x1e45,	// (0x00095fb4) main_camera_pane_t1

0x1e57,	// (0x00095fc6) main_camera_pane_t2

0x0001,

0xf220,	// (0x000a338f) main_camera_pane_t

0x1e78,	// (0x00095fe7) cams_zoom_pane_cp_ParamLimits

0x1e78,	// (0x00095fe7) cams_zoom_pane_cp

0x1e9c,	// (0x0009600b) image_cif_pane_ParamLimits

0x1e9c,	// (0x0009600b) image_cif_pane

0x1eba,	// (0x00096029) image_subqcif_pane

0x1ec2,	// (0x00096031) main_video_pane_g1_ParamLimits

0x1ec2,	// (0x00096031) main_video_pane_g1

0x1ee2,	// (0x00096051) main_video_pane_g2_ParamLimits

0x1ee2,	// (0x00096051) main_video_pane_g2

0x1f12,	// (0x00096081) main_video_pane_g3_ParamLimits

0x1f12,	// (0x00096081) main_video_pane_g3

0x1f3b,	// (0x000960aa) main_video_pane_g4_ParamLimits

0x1f3b,	// (0x000960aa) main_video_pane_g4

0x1f64,	// (0x000960d3) main_video_pane_g5_ParamLimits

0x1f64,	// (0x000960d3) main_video_pane_g5

0xa3b7,	// (0x0009e526) main_video_pane_g6_ParamLimits

0xa3b7,	// (0x0009e526) main_video_pane_g6

0x0006,

0xf225,	// (0x000a3394) main_video_pane_g_ParamLimits

0xf225,	// (0x000a3394) main_video_pane_g

0x1f86,	// (0x000960f5) main_video_pane_t1_ParamLimits

0x1f86,	// (0x000960f5) main_video_pane_t1

0xa3d1,	// (0x0009e540) cams_zoom_pane_g1

0xa3da,	// (0x0009e549) cams_zoom_pane_g2

0xa3e3,	// (0x0009e552) cams_zoom_pane_g3

0xa3ec,	// (0x0009e55b) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x000a33a3) cams_zoom_pane_g

0x1fd0,	// (0x0009613f) grid_cams_pane

0x1fde,	// (0x0009614d) linegrid_cams_pane

0x1fec,	// (0x0009615b) cell_cams_pane_ParamLimits

0x1fec,	// (0x0009615b) cell_cams_pane

0xa3f5,	// (0x0009e564) cams_burst_image_pane

0xa3fd,	// (0x0009e56c) cell_cams_pane_g1

0x9ec5,	// (0x0009e034) grid_highlight_pane_cp03

0xa23a,	// (0x0009e3a9) mp_bg_pane_g1

0x9ec5,	// (0x0009e034) bg_list_pane_cp03

0xc64f,	// (0x000a07be) bg_mp_pane

0xc657,	// (0x000a07c6) grid_mp_pane

0xc65f,	// (0x000a07ce) media_player_g1

0xc667,	// (0x000a07d6) media_player_t1

0xc675,	// (0x000a07e4) media_player_t2

0xc683,	// (0x000a07f2) media_player_t3

0xc691,	// (0x000a0800) media_player_t4

0xc69f,	// (0x000a080e) media_player_t5

0xc6ad,	// (0x000a081c) media_player_t6

0xc6bb,	// (0x000a082a) media_player_t7

0x0006,

0xf5d0,	// (0x000a373f) media_player_t

0xc6c9,	// (0x000a0838) wait_bar_pane_cp02

0xf5b5,	// (0x000a3724) main_usb_pane_t

0x43ba,	// (0x00098529) cell_mp_pane

0xa23a,	// (0x0009e3a9) cell_mp_pane_g1

0x9ec5,	// (0x0009e034) grid_highlight_pane_cp06

0xa405,	// (0x0009e574) grid_skin_colour_pane

0xa40d,	// (0x0009e57c) list_highlight_pane_cp03

0x210c,	// (0x0009627b) skin_g1

0xa415,	// (0x0009e584) skin_t1

0xa424,	// (0x0009e593) skin_t2

0x0001,

0xf269,	// (0x000a33d8) skin_t

0x2116,	// (0x00096285) cell_skin_colour_pane_ParamLimits

0x2116,	// (0x00096285) cell_skin_colour_pane

0xa432,	// (0x0009e5a1) cell_skin_colour_pane_g1

0x219a,	// (0x00096309) call_video_g1_ParamLimits

0x219a,	// (0x00096309) call_video_g1

0x21aa,	// (0x00096319) call_video_g2_ParamLimits

0x21aa,	// (0x00096319) call_video_g2

0x0001,

0xf26e,	// (0x000a33dd) call_video_g_ParamLimits

0xf26e,	// (0x000a33dd) call_video_g

0x2204,	// (0x00096373) call_video_uplink_pane_cp1_ParamLimits

0x2204,	// (0x00096373) call_video_uplink_pane_cp1

0xa444,	// (0x0009e5b3) call_video_uplink_pane_cp2

0x22d0,	// (0x0009643f) video_down_crop_pane_ParamLimits

0x22d0,	// (0x0009643f) video_down_crop_pane

0x23ce,	// (0x0009653d) video_down_pane_ParamLimits

0x23ce,	// (0x0009653d) video_down_pane

0xa44c,	// (0x0009e5bb) video_down_subqcif_pane_ParamLimits

0xa44c,	// (0x0009e5bb) video_down_subqcif_pane

0xa464,	// (0x0009e5d3) video_down_subqcif_pane_cp_ParamLimits

0xa464,	// (0x0009e5d3) video_down_subqcif_pane_cp

0xa48a,	// (0x0009e5f9) im_reading_pane_ParamLimits

0xa48a,	// (0x0009e5f9) im_reading_pane

0x24f0,	// (0x0009665f) im_writing_pane_ParamLimits

0x24f0,	// (0x0009665f) im_writing_pane

0x250e,	// (0x0009667d) im_reading_pane_t1

0xa4a4,	// (0x0009e613) list_im_pane

0xa4b5,	// (0x0009e624) scroll_pane_cp07

0x2562,	// (0x000966d1) im_writing_pane_t1_ParamLimits

0x2562,	// (0x000966d1) im_writing_pane_t1

0xa4ce,	// (0x0009e63d) im_writing_pane_t2_ParamLimits

0xa4ce,	// (0x0009e63d) im_writing_pane_t2

0x0001,

0xf278,	// (0x000a33e7) im_writing_pane_t_ParamLimits

0xf278,	// (0x000a33e7) im_writing_pane_t

0x9ec5,	// (0x0009e034) input_focus_pane_cp04

0x9ec5,	// (0x0009e034) input_focus_pane_cp05

0x2577,	// (0x000966e6) list_im_single_pane_ParamLimits

0x2577,	// (0x000966e6) list_im_single_pane

0x259b,	// (0x0009670a) list_single_im_pane_t1

0x437e,	// (0x000984ed) blid_accuracy_pane

0x4386,	// (0x000984f5) blid_compass_pane

0x4390,	// (0x000984ff) main_location_t1

0x439e,	// (0x0009850d) main_location_t2

0x43ac,	// (0x0009851b) main_location_t3

0x0002,

0xf5df,	// (0x000a374e) main_location_t

0x9ec5,	// (0x0009e034) aid_levels_location

0xa23a,	// (0x0009e3a9) blid_accuracy_pane_g1

0xa23a,	// (0x0009e3a9) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x000a3449) blid_accuracy_pane_g

0xa516,	// (0x0009e685) wml_content_pane

0xa554,	// (0x0009e6c3) wml_button_pane_ParamLimits

0xa554,	// (0x0009e6c3) wml_button_pane

0x25aa,	// (0x00096719) wml_list_single_large_pane_ParamLimits

0x25aa,	// (0x00096719) wml_list_single_large_pane

0x25d4,	// (0x00096743) wml_list_single_medium_pane_ParamLimits

0x25d4,	// (0x00096743) wml_list_single_medium_pane

0x2605,	// (0x00096774) wml_list_single_small_pane_ParamLimits

0x2605,	// (0x00096774) wml_list_single_small_pane

0xa568,	// (0x0009e6d7) wml_selection_box_pane_ParamLimits

0xa568,	// (0x0009e6d7) wml_selection_box_pane

0xa57b,	// (0x0009e6ea) wml_list_single_pane_t1

0xa58a,	// (0x0009e6f9) wml_list_single_medium_pane_t1

0xa599,	// (0x0009e708) wml_list_single_large_pane_t1

0xa5a8,	// (0x0009e717) input_focus_pane_cp02_ParamLimits

0xa5a8,	// (0x0009e717) input_focus_pane_cp02

0xa5bb,	// (0x0009e72a) wml_selection_box_pane_g1

0xa5c4,	// (0x0009e733) wml_selection_box_pane_t1_ParamLimits

0xa5c4,	// (0x0009e733) wml_selection_box_pane_t1

0xa120,	// (0x0009e28f) bg_wml_button_pane_ParamLimits

0xa120,	// (0x0009e28f) bg_wml_button_pane

0xa5dc,	// (0x0009e74b) wml_button_pane_g1

0xa5e4,	// (0x0009e753) wml_button_pane_t1

0xa5dc,	// (0x0009e74b) wml_button_bg_pane_g1

0xa5f4,	// (0x0009e763) wml_button_bg_pane_g2

0xa5fc,	// (0x0009e76b) wml_button_bg_pane_g3

0xa604,	// (0x0009e773) wml_button_bg_pane_g4

0xa60c,	// (0x0009e77b) wml_button_bg_pane_g5

0xa614,	// (0x0009e783) wml_button_bg_pane_g6

0xa61c,	// (0x0009e78b) wml_button_bg_pane_g7

0xa624,	// (0x0009e793) wml_button_bg_pane_g8

0xa62c,	// (0x0009e79b) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x000a33ec) wml_button_bg_pane_g

0x263f,	// (0x000967ae) bg_list_pane_cp02

0xa634,	// (0x0009e7a3) mce_header_pane_ParamLimits

0xa634,	// (0x0009e7a3) mce_header_pane

0xa64a,	// (0x0009e7b9) mce_icon_pane

0xa64a,	// (0x0009e7b9) mce_image_pane

0xa653,	// (0x0009e7c2) mce_text_pane_ParamLimits

0xa653,	// (0x0009e7c2) mce_text_pane

0x2649,	// (0x000967b8) scroll_pane_cp03

0xa54c,	// (0x0009e6bb) scroll_pane_cp04

0xa666,	// (0x0009e7d5) scroll_pane_cp05_ParamLimits

0xa666,	// (0x0009e7d5) scroll_pane_cp05

0x2653,	// (0x000967c2) mce_header_field_pane_ParamLimits

0x2653,	// (0x000967c2) mce_header_field_pane

0x2673,	// (0x000967e2) mce_header_field_pane_2_ParamLimits

0x2673,	// (0x000967e2) mce_header_field_pane_2

0x2689,	// (0x000967f8) mce_header_field_pane_3

0x2691,	// (0x00096800) list_single_mce_message_pane_ParamLimits

0x2691,	// (0x00096800) list_single_mce_message_pane

0x26bc,	// (0x0009682b) list_single_mce_smart_pane_ParamLimits

0x26bc,	// (0x0009682b) list_single_mce_smart_pane

0xa672,	// (0x0009e7e1) input_focus_pane_cp03

0xa67b,	// (0x0009e7ea) list_header_data_pane

0x26f2,	// (0x00096861) mce_header_field_pane_t1

0x2700,	// (0x0009686f) list_single_mce_header_pane_ParamLimits

0x2700,	// (0x0009686f) list_single_mce_header_pane

0xa683,	// (0x0009e7f2) list_single_mce_header_pane_t1

0xa692,	// (0x0009e801) list_single_mce_message_pane_g1

0xa69a,	// (0x0009e809) list_single_mce_message_pane_t1

0x2752,	// (0x000968c1) bg_cale_heading_pane_cp01_ParamLimits

0x2752,	// (0x000968c1) bg_cale_heading_pane_cp01

0xa6a8,	// (0x0009e817) bg_cale_pane_cp02_ParamLimits

0xa6a8,	// (0x0009e817) bg_cale_pane_cp02

0x2795,	// (0x00096904) cale_month_corner_pane

0x27af,	// (0x0009691e) cale_month_day_heading_pane_ParamLimits

0x27af,	// (0x0009691e) cale_month_day_heading_pane

0x280a,	// (0x00096979) cale_month_pane_g1_ParamLimits

0x280a,	// (0x00096979) cale_month_pane_g1

0x2842,	// (0x000969b1) cale_month_pane_g2_ParamLimits

0x2842,	// (0x000969b1) cale_month_pane_g2

0x286b,	// (0x000969da) cale_month_pane_g3_ParamLimits

0x286b,	// (0x000969da) cale_month_pane_g3

0x28b7,	// (0x00096a26) cale_month_pane_g4_ParamLimits

0x28b7,	// (0x00096a26) cale_month_pane_g4

0x2903,	// (0x00096a72) cale_month_pane_g5_ParamLimits

0x2903,	// (0x00096a72) cale_month_pane_g5

0x294f,	// (0x00096abe) cale_month_pane_g6_ParamLimits

0x294f,	// (0x00096abe) cale_month_pane_g6

0x299b,	// (0x00096b0a) cale_month_pane_g7_ParamLimits

0x299b,	// (0x00096b0a) cale_month_pane_g7

0x29ff,	// (0x00096b6e) cale_month_pane_g8_ParamLimits

0x29ff,	// (0x00096b6e) cale_month_pane_g8

0x2a63,	// (0x00096bd2) cale_month_pane_g9_ParamLimits

0x2a63,	// (0x00096bd2) cale_month_pane_g9

0x2ac1,	// (0x00096c30) cale_month_pane_g10_ParamLimits

0x2ac1,	// (0x00096c30) cale_month_pane_g10

0x2b1d,	// (0x00096c8c) cale_month_pane_g11_ParamLimits

0x2b1d,	// (0x00096c8c) cale_month_pane_g11

0x2b71,	// (0x00096ce0) cale_month_pane_g12_ParamLimits

0x2b71,	// (0x00096ce0) cale_month_pane_g12

0x2bc7,	// (0x00096d36) cale_month_pane_g13_ParamLimits

0x2bc7,	// (0x00096d36) cale_month_pane_g13

0x000c,

0xf290,	// (0x000a33ff) cale_month_pane_g_ParamLimits

0xf290,	// (0x000a33ff) cale_month_pane_g

0x2c1d,	// (0x00096d8c) cale_month_week_pane

0x2c32,	// (0x00096da1) grid_cale_month_pane_ParamLimits

0x2c32,	// (0x00096da1) grid_cale_month_pane

0x2c80,	// (0x00096def) cale_month_day_heading_pane_t1

0x2d06,	// (0x00096e75) cale_month_day_heading_pane_t2

0x2d97,	// (0x00096f06) cale_month_day_heading_pane_t3

0x2e28,	// (0x00096f97) cale_month_day_heading_pane_t4

0x2eb9,	// (0x00097028) cale_month_day_heading_pane_t5

0x2f4a,	// (0x000970b9) cale_month_day_heading_pane_t6

0x2fdb,	// (0x0009714a) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x000a341a) cale_month_day_heading_pane_t

0xa350,	// (0x0009e4bf) bg_cale_side_pane_cp01

0x3084,	// (0x000971f3) cale_month_week_pane_t1

0x309d,	// (0x0009720c) cale_month_week_pane_t2

0x30b6,	// (0x00097225) cale_month_week_pane_t3

0x30cf,	// (0x0009723e) cale_month_week_pane_t4

0x30e8,	// (0x00097257) cale_month_week_pane_t5

0x3109,	// (0x00097278) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x000a3429) cale_month_week_pane_t

0x312a,	// (0x00097299) cell_cale_month_pane_ParamLimits

0x312a,	// (0x00097299) cell_cale_month_pane

0x3276,	// (0x000973e5) cell_cale_month_pane_g1

0x3282,	// (0x000973f1) cell_cale_month_pane_t1_ParamLimits

0x3282,	// (0x000973f1) cell_cale_month_pane_t1

0xa35e,	// (0x0009e4cd) grid_highlight_pane_cp08

0xa23a,	// (0x0009e3a9) main_smil_g1

0x32a2,	// (0x00097411) smil_status_pane

0xa6e7,	// (0x0009e856) smil_text_pane

0xc56f,	// (0x000a06de) bg_popup_call3_rect_pane_g8

0xc577,	// (0x000a06e6) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x000a36e2) bg_popup_call3_rect_pane_g

0xc7c7,	// (0x000a0936) smil_status_volume_pane_g1

0xa6f1,	// (0x0009e860) smil_status_pane_t1

0x47b6,	// (0x00098925) volume_smil_pane

0xa708,	// (0x0009e877) list_smil_text_pane

0x32b5,	// (0x00097424) scroll_pane_cp011

0x32c0,	// (0x0009742f) smil_text_list_pane_t1_ParamLimits

0x32c0,	// (0x0009742f) smil_text_list_pane_t1

0x3338,	// (0x000974a7) aid_volume_smil_ParamLimits

0x3338,	// (0x000974a7) aid_volume_smil

0xa23a,	// (0x0009e3a9) smil_volume_pane_g1

0xa23a,	// (0x0009e3a9) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x000a3449) smil_volume_pane_g

0x17f7,	// (0x00095966) listscroll_cale_day_pane

0xa712,	// (0x0009e881) bg_cale_pane

0xa72a,	// (0x0009e899) list_cale_pane

0xa74d,	// (0x0009e8bc) scroll_pane_cp09

0xa75e,	// (0x0009e8cd) cale_bg_pane_g1

0xa766,	// (0x0009e8d5) cale_bg_pane_g2

0xa76e,	// (0x0009e8dd) cale_bg_pane_g3

0xa776,	// (0x0009e8e5) cale_bg_pane_g4

0xa77e,	// (0x0009e8ed) cale_bg_pane_g5

0xa786,	// (0x0009e8f5) cale_bg_pane_g6

0xa78e,	// (0x0009e8fd) cale_bg_pane_g7

0xa796,	// (0x0009e905) cale_bg_pane_g8

0xa79e,	// (0x0009e90d) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x000a344e) cale_bg_pane_g

0x3362,	// (0x000974d1) list_cale_time_pane_ParamLimits

0x3362,	// (0x000974d1) list_cale_time_pane

0xa7a6,	// (0x0009e915) list_cale_time_pane_g1_ParamLimits

0xa7a6,	// (0x0009e915) list_cale_time_pane_g1

0xa7b2,	// (0x0009e921) list_cale_time_pane_g2_ParamLimits

0xa7b2,	// (0x0009e921) list_cale_time_pane_g2

0x3384,	// (0x000974f3) list_cale_time_pane_g3_ParamLimits

0x3384,	// (0x000974f3) list_cale_time_pane_g3

0x3392,	// (0x00097501) list_cale_time_pane_g4_ParamLimits

0x3392,	// (0x00097501) list_cale_time_pane_g4

0x33a0,	// (0x0009750f) list_cale_time_pane_g5_ParamLimits

0x33a0,	// (0x0009750f) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x000a3461) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x000a3461) list_cale_time_pane_g

0xa7cc,	// (0x0009e93b) list_cale_time_pane_t1_ParamLimits

0xa7cc,	// (0x0009e93b) list_cale_time_pane_t1

0xa7f4,	// (0x0009e963) list_cale_time_pane_t2_ParamLimits

0xa7f4,	// (0x0009e963) list_cale_time_pane_t2

0x3742,	// (0x000978b1) aid_blid_cardinal_pane

0x3784,	// (0x000978f3) compass_pane_t4

0xa81c,	// (0x0009e98b) list_cale_time_pane_t4_ParamLimits

0xa81c,	// (0x0009e98b) list_cale_time_pane_t4

0x3792,	// (0x00097901) compass_pane_t5

0x37a2,	// (0x00097911) compass_pane_t6

0x37b0,	// (0x0009791f) compass_pane_t7

0xaccd,	// (0x0009ee3c) navi_pane_cc_t1

0xaeb2,	// (0x0009f021) aid_phob_thumbnail_center_pane

0x3e84,	// (0x00097ff3) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x000a346e) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x000a346e) list_cale_time_pane_t

0xed12,	// (0x000a2e81) bg_popup_window_pane_cp02_ParamLimits

0xed12,	// (0x000a2e81) bg_popup_window_pane_cp02

0xa844,	// (0x0009e9b3) heading_pane_cp01_ParamLimits

0xa844,	// (0x0009e9b3) heading_pane_cp01

0xa850,	// (0x0009e9bf) loc_req_pane_ParamLimits

0xa850,	// (0x0009e9bf) loc_req_pane

0xa860,	// (0x0009e9cf) loc_type_pane_ParamLimits

0xa860,	// (0x0009e9cf) loc_type_pane

0xa872,	// (0x0009e9e1) loc_type_pane_t1_ParamLimits

0xa872,	// (0x0009e9e1) loc_type_pane_t1

0xa884,	// (0x0009e9f3) loc_type_pane_t2_ParamLimits

0xa884,	// (0x0009e9f3) loc_type_pane_t2

0xa896,	// (0x0009ea05) loc_type_pane_t3_ParamLimits

0xa896,	// (0x0009ea05) loc_type_pane_t3

0x0002,

0xf306,	// (0x000a3475) loc_type_pane_t_ParamLimits

0xf306,	// (0x000a3475) loc_type_pane_t

0xa8a8,	// (0x0009ea17) list_loc_req_pane

0xa8b2,	// (0x0009ea21) scroll_pane_cp012

0x33ae,	// (0x0009751d) list_single_loc_request_popup_menu_pane_ParamLimits

0x33ae,	// (0x0009751d) list_single_loc_request_popup_menu_pane

0xa8bd,	// (0x0009ea2c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa8bd,	// (0x0009ea2c) list_single_loc_request_popup_menu_pane_g1

0xa8c9,	// (0x0009ea38) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa8c9,	// (0x0009ea38) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x000a347c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x000a347c) list_single_loc_request_popup_menu_pane_g

0xa8d5,	// (0x0009ea44) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa8d5,	// (0x0009ea44) list_single_loc_request_popup_menu_pane_t1

0x33c0,	// (0x0009752f) bg_popup_window_pane_cp03_ParamLimits

0x33c0,	// (0x0009752f) bg_popup_window_pane_cp03

0x33ce,	// (0x0009753d) heading_loc_req_pane_ParamLimits

0x33ce,	// (0x0009753d) heading_loc_req_pane

0x33da,	// (0x00097549) popup_dyc_status_message_window_g1_ParamLimits

0x33da,	// (0x00097549) popup_dyc_status_message_window_g1

0x33e6,	// (0x00097555) popup_dyc_status_message_window_t1_ParamLimits

0x33e6,	// (0x00097555) popup_dyc_status_message_window_t1

0x33f8,	// (0x00097567) popup_dyc_status_message_window_t2_ParamLimits

0x33f8,	// (0x00097567) popup_dyc_status_message_window_t2

0x340a,	// (0x00097579) popup_dyc_status_message_window_t3_ParamLimits

0x340a,	// (0x00097579) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x000a3481) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x000a3481) popup_dyc_status_message_window_t

0x9ec5,	// (0x0009e034) bg_heading_pane_cp01

0xa8eb,	// (0x0009ea5a) heading_loc_req_pane_g1

0xa8f3,	// (0x0009ea62) heading_loc_req_pane_g2

0xa8fb,	// (0x0009ea6a) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x000a3488) heading_loc_req_pane_g

0xa903,	// (0x0009ea72) heading_loc_req_pane_t1

0xa912,	// (0x0009ea81) bg_popup_sub_pane_cp01_ParamLimits

0xa912,	// (0x0009ea81) bg_popup_sub_pane_cp01

0xa920,	// (0x0009ea8f) popup_cale_events_window_g1_ParamLimits

0xa920,	// (0x0009ea8f) popup_cale_events_window_g1

0xa940,	// (0x0009eaaf) popup_cale_events_window_g2_ParamLimits

0xa940,	// (0x0009eaaf) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x000a34bc) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x000a34bc) popup_cale_events_window_g

0xa960,	// (0x0009eacf) popup_cale_events_window_t1_ParamLimits

0xa960,	// (0x0009eacf) popup_cale_events_window_t1

0xa972,	// (0x0009eae1) popup_cale_events_window_t2_ParamLimits

0xa972,	// (0x0009eae1) popup_cale_events_window_t2

0xa9b0,	// (0x0009eb1f) popup_cale_events_window_t3_ParamLimits

0xa9b0,	// (0x0009eb1f) popup_cale_events_window_t3

0xa9ea,	// (0x0009eb59) popup_cale_events_window_t4_ParamLimits

0xa9ea,	// (0x0009eb59) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x000a34c1) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x000a34c1) popup_cale_events_window_t

0x350f,	// (0x0009767e) call_type_pane

0xaa20,	// (0x0009eb8f) popup_call_status_window_g1

0x351b,	// (0x0009768a) popup_call_status_window_g2

0x3527,	// (0x00097696) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x000a34ca) popup_call_status_window_g

0xaa2e,	// (0x0009eb9d) call_type_pane_g1

0xaa37,	// (0x0009eba6) call_type_pane_g2

0x0001,

0xf362,	// (0x000a34d1) call_type_pane_g

0x9ec5,	// (0x0009e034) bg_popup_sub_pane_cp02

0xaa40,	// (0x0009ebaf) listscroll_popup_wml_pane

0xaa48,	// (0x0009ebb7) list_wml_pane

0xaa52,	// (0x0009ebc1) scroll_pane_cp013

0xaa5d,	// (0x0009ebcc) list_single_graphic_popup_wml_pane_ParamLimits

0xaa5d,	// (0x0009ebcc) list_single_graphic_popup_wml_pane

0xa23a,	// (0x0009e3a9) list_single_graphic_popup_wml_pane_g1

0xaa71,	// (0x0009ebe0) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x000a34d6) list_single_graphic_popup_wml_pane_g

0xaa79,	// (0x0009ebe8) list_single_graphic_popup_wml_pane_t1

0xaa8f,	// (0x0009ebfe) aid_call_pane

0xa118,	// (0x0009e287) popup_clock_analogue_window_g1

0xa118,	// (0x0009e287) popup_clock_analogue_window_g2

0x3533,	// (0x000976a2) popup_clock_analogue_window_g3

0x3533,	// (0x000976a2) popup_clock_analogue_window_g4

0xa23a,	// (0x0009e3a9) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x000a34db) popup_clock_analogue_window_g

0x353b,	// (0x000976aa) popup_clock_analogue_window_t1

0x3549,	// (0x000976b8) clock_digital_number_pane_ParamLimits

0x3549,	// (0x000976b8) clock_digital_number_pane

0x3555,	// (0x000976c4) clock_digital_number_pane_cp02_ParamLimits

0x3555,	// (0x000976c4) clock_digital_number_pane_cp02

0x3561,	// (0x000976d0) clock_digital_number_pane_cp03_ParamLimits

0x3561,	// (0x000976d0) clock_digital_number_pane_cp03

0x356d,	// (0x000976dc) clock_digital_number_pane_cp04_ParamLimits

0x356d,	// (0x000976dc) clock_digital_number_pane_cp04

0x357d,	// (0x000976ec) clock_digital_separator_pane_ParamLimits

0x357d,	// (0x000976ec) clock_digital_separator_pane

0x3589,	// (0x000976f8) popup_clock_digital_window_t1

0xa23a,	// (0x0009e3a9) clock_digital_number_pane_g1

0xa23a,	// (0x0009e3a9) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x000a3449) clock_digital_number_pane_g

0xa23a,	// (0x0009e3a9) clock_digital_separator_pane_g1

0xa23a,	// (0x0009e3a9) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x000a3449) clock_digital_separator_pane_g

0x9ec5,	// (0x0009e034) bg_popup_window_pane_cp04

0xaa97,	// (0x0009ec06) heading_pane_cp03

0xaa9f,	// (0x0009ec0e) listscroll_popup_gms_pane

0xaaa7,	// (0x0009ec16) grid_large_graphic_popup_pane

0xaab1,	// (0x0009ec20) listscroll_popup_gms_pane_g1

0xaab9,	// (0x0009ec28) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x000a34e6) listscroll_popup_gms_pane_g

0xa54c,	// (0x0009e6bb) scroll_pane_cp014

0x35a6,	// (0x00097715) cell_large_graphic_popup_pane_ParamLimits

0x35a6,	// (0x00097715) cell_large_graphic_popup_pane

0x35be,	// (0x0009772d) cell_large_graphic_popup_pane_g1_ParamLimits

0x35be,	// (0x0009772d) cell_large_graphic_popup_pane_g1

0xaac1,	// (0x0009ec30) cell_large_graphic_popup_pane_g2_ParamLimits

0xaac1,	// (0x0009ec30) cell_large_graphic_popup_pane_g2

0xaacd,	// (0x0009ec3c) cell_large_graphic_popup_pane_g3_ParamLimits

0xaacd,	// (0x0009ec3c) cell_large_graphic_popup_pane_g3

0xaada,	// (0x0009ec49) cell_large_graphic_popup_pane_g4_ParamLimits

0xaada,	// (0x0009ec49) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x000a34eb) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x000a34eb) cell_large_graphic_popup_pane_g

0xaaea,	// (0x0009ec59) grid_highlight_pane_cp010

0xa23a,	// (0x0009e3a9) bg_popup_call_pane_g1

0xaaf4,	// (0x0009ec63) list_single_graphic_popup_conf_pane_ParamLimits

0xaaf4,	// (0x0009ec63) list_single_graphic_popup_conf_pane

0xab07,	// (0x0009ec76) list_highlight_pane_cp01

0xab10,	// (0x0009ec7f) list_single_graphic_popup_conf_pane_g1

0xab18,	// (0x0009ec87) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x000a34f4) list_single_graphic_popup_conf_pane_g

0xab20,	// (0x0009ec8f) list_single_graphic_popup_conf_pane_t1

0xab2e,	// (0x0009ec9d) linegrid_cams_pane_g1

0x35ca,	// (0x00097739) linegrid_cams_pane_g2

0xa391,	// (0x0009e500) linegrid_cams_pane_g3

0xab37,	// (0x0009eca6) linegrid_cams_pane_g4

0x35d3,	// (0x00097742) linegrid_cams_pane_g5

0x35dc,	// (0x0009774b) linegrid_cams_pane_g6

0xa39a,	// (0x0009e509) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x000a34f9) linegrid_cams_pane_g

0xab40,	// (0x0009ecaf) popup_clock_analogue_window

0xab40,	// (0x0009ecaf) popup_clock_digital_window

0x9ec5,	// (0x0009e034) popup_phob_thumbnail_window

0xa23a,	// (0x0009e3a9) call_video_uplink_pane_g1

0xab49,	// (0x0009ecb8) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x000a3508) call_video_uplink_pane_g

0xab51,	// (0x0009ecc0) video_uplink_pane

0xab59,	// (0x0009ecc8) mce_image_pane_g1

0x35e5,	// (0x00097754) mce_image_pane_g2

0x35ef,	// (0x0009775e) mce_image_pane_g3

0x35f7,	// (0x00097766) mce_image_pane_g4

0x35ff,	// (0x0009776e) mce_image_pane_g5

0x0004,

0xf39e,	// (0x000a350d) mce_image_pane_g

0xab63,	// (0x0009ecd2) control_top_pane_stacon_cp01_ParamLimits

0xab63,	// (0x0009ecd2) control_top_pane_stacon_cp01

0xab77,	// (0x0009ece6) uni_indicator_pane_stacon_cp01_ParamLimits

0xab77,	// (0x0009ece6) uni_indicator_pane_stacon_cp01

0xab88,	// (0x0009ecf7) bg_popup_sub_pane_cp03

0xab92,	// (0x0009ed01) chi_dic_find_pane

0x3607,	// (0x00097776) listscroll_chi_dic_pane

0xab9a,	// (0x0009ed09) main_pane_chidic_g1

0xaba2,	// (0x0009ed11) chi_dic_find_pane_t1

0xabb0,	// (0x0009ed1f) find_chidic_pane

0xabb9,	// (0x0009ed28) chi_dic_list_pane_ParamLimits

0xabb9,	// (0x0009ed28) chi_dic_list_pane

0xabca,	// (0x0009ed39) scroll_pane_cp020

0xabd2,	// (0x0009ed41) find_chidic_pane_t1

0x9ec5,	// (0x0009e034) input_focus_pane_cp06

0x361b,	// (0x0009778a) list_chi_dic_pane_ParamLimits

0x361b,	// (0x0009778a) list_chi_dic_pane

0x3635,	// (0x000977a4) list_chi_dic_pane_t1_ParamLimits

0x3635,	// (0x000977a4) list_chi_dic_pane_t1

0x9ec5,	// (0x0009e034) list_highlight_pane_cp020

0xabe1,	// (0x0009ed50) bg_cale_heading_pane_g1

0x3648,	// (0x000977b7) bg_cale_heading_pane_g2

0x3650,	// (0x000977bf) bg_cale_heading_pane_g3

0x3658,	// (0x000977c7) bg_cale_heading_pane_g4

0x3662,	// (0x000977d1) bg_cale_heading_pane_g5

0x366c,	// (0x000977db) bg_cale_heading_pane_g6

0x3674,	// (0x000977e3) bg_cale_heading_pane_g7

0x367c,	// (0x000977eb) bg_cale_heading_pane_g8

0x3686,	// (0x000977f5) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x000a3518) bg_cale_heading_pane_g

0xabe1,	// (0x0009ed50) bg_cale_side_pane_g1

0x3690,	// (0x000977ff) bg_cale_side_pane_g2

0x369a,	// (0x00097809) bg_cale_side_pane_g3

0x36a4,	// (0x00097813) bg_cale_side_pane_g4

0x36ae,	// (0x0009781d) bg_cale_side_pane_g5

0x36b8,	// (0x00097827) bg_cale_side_pane_g6

0x36c2,	// (0x00097831) bg_cale_side_pane_g7

0x36cc,	// (0x0009783b) bg_cale_side_pane_g8

0x36d4,	// (0x00097843) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x000a352b) bg_cale_side_pane_g

0x36dc,	// (0x0009784b) popup_call_status_window_ParamLimits

0x36dc,	// (0x0009784b) popup_call_status_window

0xabe9,	// (0x0009ed58) stacon_top_pane

0xabf1,	// (0x0009ed60) status_pane_ParamLimits

0xabf1,	// (0x0009ed60) status_pane

0xac06,	// (0x0009ed75) status_small_pane

0xac0e,	// (0x0009ed7d) control_pane

0x9ec5,	// (0x0009e034) stacon_bottom_pane

0xac16,	// (0x0009ed85) list_single_mce_smart_pane_t1_ParamLimits

0xac16,	// (0x0009ed85) list_single_mce_smart_pane_t1

0xac29,	// (0x0009ed98) list_single_mce_smart_pane_t2_ParamLimits

0xac29,	// (0x0009ed98) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x000a353e) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x000a353e) list_single_mce_smart_pane_t

0x36e8,	// (0x00097857) compass_pane

0x36f4,	// (0x00097863) main_location2_pane_t1

0x3708,	// (0x00097877) main_location2_pane_t2

0x371c,	// (0x0009788b) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x000a3543) main_location2_pane_t

0xac48,	// (0x0009edb7) compass_pane_g1_ParamLimits

0xac48,	// (0x0009edb7) compass_pane_g1

0x3766,	// (0x000978d5) compass_pane_t1

0x3775,	// (0x000978e4) compass_pane_t2

0x0005,

0xf3dd,	// (0x000a354c) compass_pane_t

0x37c0,	// (0x0009792f) text_secondary_cp61

0xacc4,	// (0x0009ee33) navi_pane_cams_g5

0xad40,	// (0x0009eeaf) navi_pane_im_t1

0xad4e,	// (0x0009eebd) navi_pane_mp_g1_ParamLimits

0xad4e,	// (0x0009eebd) navi_pane_mp_g1

0xad62,	// (0x0009eed1) navi_pane_mp_g2_ParamLimits

0xad62,	// (0x0009eed1) navi_pane_mp_g2

0xad6e,	// (0x0009eedd) navi_pane_mp_g3_ParamLimits

0xad6e,	// (0x0009eedd) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x000a3560) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x000a3560) navi_pane_mp_g

0xad7a,	// (0x0009eee9) navi_pane_mp_t1

0xad88,	// (0x0009eef7) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x000a3567) navi_pane_mp_t

0xadf3,	// (0x0009ef62) navi_pane_vt_g1

0xad7a,	// (0x0009eee9) navi_pane_vt_t1

0xadfb,	// (0x0009ef6a) navi_slider_pane

0xae0b,	// (0x0009ef7a) zooming_pane

0xae13,	// (0x0009ef82) navi_slider_pane_g1

0x37fb,	// (0x0009796a) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x000a356e) navi_slider_pane_g

0xae37,	// (0x0009efa6) aid_levels_zoom

0xae3f,	// (0x0009efae) zooming_pane_g1

0xae47,	// (0x0009efb6) zooming_pane_g2

0xae47,	// (0x0009efb6) zooming_pane_g3

0x0002,

0xf40e,	// (0x000a357d) zooming_pane_g

0xae4f,	// (0x0009efbe) level_10_zoom

0xae58,	// (0x0009efc7) level_11_zoom

0xae61,	// (0x0009efd0) level_1_zoom

0xae6a,	// (0x0009efd9) level_2_zoom

0xae73,	// (0x0009efe2) level_3_zoom

0xae7c,	// (0x0009efeb) level_4_zoom

0xae85,	// (0x0009eff4) level_5_zoom

0xae8e,	// (0x0009effd) level_6_zoom

0xae97,	// (0x0009f006) level_7_zoom

0xaea0,	// (0x0009f00f) level_8_zoom

0xaea9,	// (0x0009f018) level_9_zoom

0xaeba,	// (0x0009f029) popup_phob_thumbnail_window_g1

0xaec2,	// (0x0009f031) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x000a3584) popup_phob_thumbnail_window_g

0xc6da,	// (0x000a0849) level_1_location

0xc6e2,	// (0x000a0851) level_2_location

0xc6ea,	// (0x000a0859) level_3_location

0xc6f2,	// (0x000a0861) level_4_location

0xae0b,	// (0x0009ef7a) level_5_location

0x380d,	// (0x0009797c) mce_icon_pane_g1

0x3815,	// (0x00097984) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x000a3589) mce_icon_pane_g

0x381d,	// (0x0009798c) main_mup_pane_g1_ParamLimits

0x381d,	// (0x0009798c) main_mup_pane_g1

0x3835,	// (0x000979a4) main_mup_pane_g2_ParamLimits

0x3835,	// (0x000979a4) main_mup_pane_g2

0x3851,	// (0x000979c0) main_mup_pane_g3_ParamLimits

0x3851,	// (0x000979c0) main_mup_pane_g3

0x386d,	// (0x000979dc) main_mup_pane_g4_ParamLimits

0x386d,	// (0x000979dc) main_mup_pane_g4

0x3889,	// (0x000979f8) main_mup_pane_g5_ParamLimits

0x3889,	// (0x000979f8) main_mup_pane_g5

0x38aa,	// (0x00097a19) main_mup_pane_g6_ParamLimits

0x38aa,	// (0x00097a19) main_mup_pane_g6

0x38c6,	// (0x00097a35) main_mup_pane_g7_ParamLimits

0x38c6,	// (0x00097a35) main_mup_pane_g7

0x38e2,	// (0x00097a51) main_mup_pane_g8_ParamLimits

0x38e2,	// (0x00097a51) main_mup_pane_g8

0x3902,	// (0x00097a71) main_mup_pane_g9_ParamLimits

0x3902,	// (0x00097a71) main_mup_pane_g9

0x3921,	// (0x00097a90) main_mup_pane_g10_ParamLimits

0x3921,	// (0x00097a90) main_mup_pane_g10

0x3940,	// (0x00097aaf) main_mup_pane_g11_ParamLimits

0x3940,	// (0x00097aaf) main_mup_pane_g11

0x3958,	// (0x00097ac7) main_mup_pane_g12_ParamLimits

0x3958,	// (0x00097ac7) main_mup_pane_g12

0x3966,	// (0x00097ad5) main_mup_pane_g13_ParamLimits

0x3966,	// (0x00097ad5) main_mup_pane_g13

0x000c,

0xf41f,	// (0x000a358e) main_mup_pane_g_ParamLimits

0xf41f,	// (0x000a358e) main_mup_pane_g

0x397c,	// (0x00097aeb) main_mup_pane_t1_ParamLimits

0x397c,	// (0x00097aeb) main_mup_pane_t1

0x3999,	// (0x00097b08) main_mup_pane_t2_ParamLimits

0x3999,	// (0x00097b08) main_mup_pane_t2

0x39b3,	// (0x00097b22) main_mup_pane_t3_ParamLimits

0x39b3,	// (0x00097b22) main_mup_pane_t3

0x39cd,	// (0x00097b3c) main_mup_pane_t4_ParamLimits

0x39cd,	// (0x00097b3c) main_mup_pane_t4

0x39df,	// (0x00097b4e) main_mup_pane_t5_ParamLimits

0x39df,	// (0x00097b4e) main_mup_pane_t5

0x39f1,	// (0x00097b60) main_mup_pane_t6_ParamLimits

0x39f1,	// (0x00097b60) main_mup_pane_t6

0x0005,

0xf43a,	// (0x000a35a9) main_mup_pane_t_ParamLimits

0xf43a,	// (0x000a35a9) main_mup_pane_t

0x3a07,	// (0x00097b76) mup_progress_pane_ParamLimits

0x3a07,	// (0x00097b76) mup_progress_pane

0x3a13,	// (0x00097b82) mup_visualizer_pane_ParamLimits

0x3a13,	// (0x00097b82) mup_visualizer_pane

0x3a4d,	// (0x00097bbc) mup_volume_pane_ParamLimits

0x3a4d,	// (0x00097bbc) mup_volume_pane

0xaa20,	// (0x0009eb8f) mup_visualizer_pane_g1_ParamLimits

0xaa20,	// (0x0009eb8f) mup_visualizer_pane_g1

0xaa20,	// (0x0009eb8f) mup_visualizer_pane_g2_ParamLimits

0xaa20,	// (0x0009eb8f) mup_visualizer_pane_g2

0xac48,	// (0x0009edb7) mup_visualizer_pane_g3_ParamLimits

0xac48,	// (0x0009edb7) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x000a35b6) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x000a35b6) mup_visualizer_pane_g

0xa23a,	// (0x0009e3a9) mup_volume_pane_g1

0xaed2,	// (0x0009f041) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x000a35bd) mup_volume_pane_g

0xa23a,	// (0x0009e3a9) mup_progress_pane_g1

0xaedb,	// (0x0009f04a) mup_progress_pane_g2

0xaee4,	// (0x0009f053) mup_progress_pane_g3

0x0002,

0xf453,	// (0x000a35c2) mup_progress_pane_g

0x9ec5,	// (0x0009e034) bg_popup_window_pane_cp05

0xaeed,	// (0x0009f05c) heading_pane_cp02_ParamLimits

0xaeed,	// (0x0009f05c) heading_pane_cp02

0xaf07,	// (0x0009f076) list_popup_blid_pane

0xaf0f,	// (0x0009f07e) list_blid_sat_info_pane_ParamLimits

0xaf0f,	// (0x0009f07e) list_blid_sat_info_pane

0xaf22,	// (0x0009f091) list_blid_sat_info_pane_g1

0xaf2a,	// (0x0009f099) list_blid_sat_info_pane_t1

0x3b5a,	// (0x00097cc9) mup_equalizer_pane_ParamLimits

0x3b5a,	// (0x00097cc9) mup_equalizer_pane

0x3b7b,	// (0x00097cea) mup_equalizer_pane_cp1_ParamLimits

0x3b7b,	// (0x00097cea) mup_equalizer_pane_cp1

0x3b9c,	// (0x00097d0b) mup_equalizer_pane_cp2_ParamLimits

0x3b9c,	// (0x00097d0b) mup_equalizer_pane_cp2

0x3bbd,	// (0x00097d2c) mup_equalizer_pane_cp3_ParamLimits

0x3bbd,	// (0x00097d2c) mup_equalizer_pane_cp3

0x3bde,	// (0x00097d4d) mup_equalizer_pane_cp4_ParamLimits

0x3bde,	// (0x00097d4d) mup_equalizer_pane_cp4

0x3bff,	// (0x00097d6e) mup_equalizer_pane_cp5

0x3c15,	// (0x00097d84) mup_equalizer_pane_cp6

0x3c2d,	// (0x00097d9c) mup_equalizer_pane_cp7

0xc5ef,	// (0x000a075e) bg_popup_call_poc_act_pane_g9

0xc5f7,	// (0x000a0766) bg_popup_call_poc_act_pane_g10

0xc5ff,	// (0x000a076e) bg_popup_call_poc_act_pane_g11

0x000a,

0xa120,	// (0x0009e28f) mup_scale_pane

0xa23a,	// (0x0009e3a9) mup_scale_pane_g1

0xaf38,	// (0x0009f0a7) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x000a35de) mup_scale_pane_g

0xaf5c,	// (0x0009f0cb) msg_data_pane

0xaf64,	// (0x0009f0d3) scroll_pane_cp017

0x3c57,	// (0x00097dc6) bg_list_pane_cp04_ParamLimits

0x3c57,	// (0x00097dc6) bg_list_pane_cp04

0xaf6c,	// (0x0009f0db) msg_data_pane_g1

0x3c7d,	// (0x00097dec) msg_data_pane_g2

0x3c87,	// (0x00097df6) msg_data_pane_g3

0x3c8f,	// (0x00097dfe) msg_data_pane_g4

0x3c97,	// (0x00097e06) msg_data_pane_g5

0x3c9f,	// (0x00097e0e) msg_data_pane_g6

0x3ca7,	// (0x00097e16) msg_data_pane_g7

0x0006,

0xf47e,	// (0x000a35ed) msg_data_pane_g

0x3caf,	// (0x00097e1e) msg_text_pane_ParamLimits

0x3caf,	// (0x00097e1e) msg_text_pane

0x3ce6,	// (0x00097e55) qrid_highlight_pane_cp011_ParamLimits

0x3ce6,	// (0x00097e55) qrid_highlight_pane_cp011

0x9ec5,	// (0x0009e034) msg_body_pane

0x9ec5,	// (0x0009e034) msg_header_pane

0xaf74,	// (0x0009f0e3) input_focus_pane_cp07

0x3d15,	// (0x00097e84) msg_header_pane_t1_ParamLimits

0x3d15,	// (0x00097e84) msg_header_pane_t1

0x3d27,	// (0x00097e96) msg_header_pane_t2_ParamLimits

0x3d27,	// (0x00097e96) msg_header_pane_t2

0x0001,

0xf492,	// (0x000a3601) msg_header_pane_t_ParamLimits

0xf492,	// (0x000a3601) msg_header_pane_t

0xaf89,	// (0x0009f0f8) msg_body_pane_g1

0x3d39,	// (0x00097ea8) msg_body_pane_t1_ParamLimits

0x3d39,	// (0x00097ea8) msg_body_pane_t1

0x3d6a,	// (0x00097ed9) msg_body_pane_t2_ParamLimits

0x3d6a,	// (0x00097ed9) msg_body_pane_t2

0x3d7c,	// (0x00097eeb) msg_body_pane_t3_ParamLimits

0x3d7c,	// (0x00097eeb) msg_body_pane_t3

0x0002,

0xf497,	// (0x000a3606) msg_body_pane_t_ParamLimits

0xf497,	// (0x000a3606) msg_body_pane_t

0x3de0,	// (0x00097f4f) main_viewer_pane_g1_ParamLimits

0x3de0,	// (0x00097f4f) main_viewer_pane_g1

0x3dec,	// (0x00097f5b) main_viewer_pane_g2_ParamLimits

0x3dec,	// (0x00097f5b) main_viewer_pane_g2

0x3df8,	// (0x00097f67) main_viewer_pane_g3_ParamLimits

0x3df8,	// (0x00097f67) main_viewer_pane_g3

0x3e09,	// (0x00097f78) main_viewer_pane_g4_ParamLimits

0x3e09,	// (0x00097f78) main_viewer_pane_g4

0x3e1a,	// (0x00097f89) main_viewer_pane_g5_ParamLimits

0x3e1a,	// (0x00097f89) main_viewer_pane_g5

0x3e1a,	// (0x00097f89) main_viewer_pane_g7_ParamLimits

0x3e1a,	// (0x00097f89) main_viewer_pane_g7

0xa8bd,	// (0x0009ea2c) main_viewer_pane_g8_ParamLimits

0xa8bd,	// (0x0009ea2c) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x000a3616) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x000a3616) main_viewer_pane_g

0xaf91,	// (0x0009f100) viewer_content_pane_ParamLimits

0xaf91,	// (0x0009f100) viewer_content_pane

0x3e58,	// (0x00097fc7) main_postcard_pane_g1_ParamLimits

0x3e58,	// (0x00097fc7) main_postcard_pane_g1

0x3e66,	// (0x00097fd5) main_postcard_pane_g2_ParamLimits

0x3e66,	// (0x00097fd5) main_postcard_pane_g2

0x3e74,	// (0x00097fe3) main_postcard_pane_g3_ParamLimits

0x3e74,	// (0x00097fe3) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x000a3627) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x000a3627) main_postcard_pane_g

0x3e84,	// (0x00097ff3) main_postcard_pane_g4

0xc7da,	// (0x000a0949) smil_status_volume_pane_g2

0x3eb0,	// (0x0009801f) postcard_pane_ParamLimits

0x3eb0,	// (0x0009801f) postcard_pane

0xaa20,	// (0x0009eb8f) postcard_pane_g1_ParamLimits

0xaa20,	// (0x0009eb8f) postcard_pane_g1

0x3ee2,	// (0x00098051) postcard_pane_g2_ParamLimits

0x3ee2,	// (0x00098051) postcard_pane_g2

0x3eee,	// (0x0009805d) postcard_pane_g3_ParamLimits

0x3eee,	// (0x0009805d) postcard_pane_g3

0xaf9f,	// (0x0009f10e) postcard_pane_g4_ParamLimits

0xaf9f,	// (0x0009f10e) postcard_pane_g4

0x3efa,	// (0x00098069) postcard_pane_g5_ParamLimits

0x3efa,	// (0x00098069) postcard_pane_g5

0x3f06,	// (0x00098075) postcard_pane_g6_ParamLimits

0x3f06,	// (0x00098075) postcard_pane_g6

0xafad,	// (0x0009f11c) postcard_pane_g7_ParamLimits

0xafad,	// (0x0009f11c) postcard_pane_g7

0x0006,

0xf4c5,	// (0x000a3634) postcard_pane_g_ParamLimits

0xf4c5,	// (0x000a3634) postcard_pane_g

0x3f12,	// (0x00098081) main_mp2_pane_g1_ParamLimits

0x3f12,	// (0x00098081) main_mp2_pane_g1

0x3f1e,	// (0x0009808d) main_mp2_pane_g2_ParamLimits

0x3f1e,	// (0x0009808d) main_mp2_pane_g2

0x3f2a,	// (0x00098099) main_mp2_pane_g3_ParamLimits

0x3f2a,	// (0x00098099) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x000a3643) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x000a3643) main_mp2_pane_g

0x3f36,	// (0x000980a5) main_mp2_pane_t1_ParamLimits

0x3f36,	// (0x000980a5) main_mp2_pane_t1

0x3f4d,	// (0x000980bc) main_mp2_pane_t2_ParamLimits

0x3f4d,	// (0x000980bc) main_mp2_pane_t2

0x3f61,	// (0x000980d0) main_mp2_pane_t3_ParamLimits

0x3f61,	// (0x000980d0) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x000a364a) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x000a364a) main_mp2_pane_t

0xafbb,	// (0x0009f12a) pec_content_pane_ParamLimits

0xafbb,	// (0x0009f12a) pec_content_pane

0xa54c,	// (0x0009e6bb) scroll_pane_cp015

0xafcd,	// (0x0009f13c) pec_attribute_pane_ParamLimits

0xafcd,	// (0x0009f13c) pec_attribute_pane

0x3f73,	// (0x000980e2) pec_content_pane_g1_ParamLimits

0x3f73,	// (0x000980e2) pec_content_pane_g1

0xafdd,	// (0x0009f14c) pec_content_pane_t1_ParamLimits

0xafdd,	// (0x0009f14c) pec_content_pane_t1

0xafef,	// (0x0009f15e) pec_content_pane_t2_ParamLimits

0xafef,	// (0x0009f15e) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x000a3651) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x000a3651) pec_content_pane_t

0x3f7f,	// (0x000980ee) list_single_graphic_pane_cp01_ParamLimits

0x3f7f,	// (0x000980ee) list_single_graphic_pane_cp01

0xa120,	// (0x0009e28f) bg_popup_sub_pane_cp04

0xb001,	// (0x0009f170) popup_mup_playback_window_g1

0xb00d,	// (0x0009f17c) popup_mup_playback_window_t1

0xb022,	// (0x0009f191) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x000a3656) popup_mup_playback_window_t

0xb059,	// (0x0009f1c8) main_image_pane_g1_ParamLimits

0xb059,	// (0x0009f1c8) main_image_pane_g1

0xb09c,	// (0x0009f20b) scroll_pane_cp018_ParamLimits

0xb09c,	// (0x0009f20b) scroll_pane_cp018

0xb0b4,	// (0x0009f223) scroll_pane_cp016_ParamLimits

0xb0b4,	// (0x0009f223) scroll_pane_cp016

0x4018,	// (0x00098187) smil2_image_pane_ParamLimits

0x4018,	// (0x00098187) smil2_image_pane

0x4048,	// (0x000981b7) smil2_root_pane_ParamLimits

0x4048,	// (0x000981b7) smil2_root_pane

0x4074,	// (0x000981e3) smil2_text_pane_ParamLimits

0x4074,	// (0x000981e3) smil2_text_pane

0x9ec5,	// (0x0009e034) bg_list_pane_cp06

0xb0f0,	// (0x0009f25f) grid_radio_pane

0x9ec5,	// (0x0009e034) bg_popup_window_pane_cp06

0xb0f8,	// (0x0009f267) main_fmradio_pane_t1

0xaa97,	// (0x0009ec06) heading_pane_cp04

0xb106,	// (0x0009f275) main_fmradio_pane_t2

0xc607,	// (0x000a0776) popup_cale_lunar_info_window_g1

0xb114,	// (0x0009f283) main_fmradio_pane_t3

0xc60f,	// (0x000a077e) popup_cale_lunar_info_window_g2

0xb122,	// (0x0009f291) main_fmradio_pane_t4

0x0001,

0xb130,	// (0x0009f29f) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x000a3731) popup_cale_lunar_info_window_g

0xf4fc,	// (0x000a366b) main_fmradio_pane_t

0xb13e,	// (0x0009f2ad) wait_bar_pane_cp03

0xb146,	// (0x0009f2b5) cell_fmradio_pane_ParamLimits

0xb146,	// (0x0009f2b5) cell_fmradio_pane

0xafad,	// (0x0009f11c) cell_fmradio_pane_g1_ParamLimits

0xafad,	// (0x0009f11c) cell_fmradio_pane_g1

0x9ec5,	// (0x0009e034) grid_highlight_pane_cp011

0xb159,	// (0x0009f2c8) poc_content_pane_ParamLimits

0xb159,	// (0x0009f2c8) poc_content_pane

0xb16b,	// (0x0009f2da) scroll_pane_cp019

0x40b4,	// (0x00098223) popup_call_poc_act_window_ParamLimits

0x40b4,	// (0x00098223) popup_call_poc_act_window

0x40c1,	// (0x00098230) popup_call_poc_inact_window_ParamLimits

0x40c1,	// (0x00098230) popup_call_poc_inact_window

0xf599,	// (0x000a3708) bg_popup_call_poc_act_pane_g

0xc57f,	// (0x000a06ee) bg_popup_call_poc_inact_pane_g1

0xc587,	// (0x000a06f6) bg_popup_call_poc_inact_pane_g2

0xb173,	// (0x0009f2e2) popup_call_poc_act_window_g2

0xc58f,	// (0x000a06fe) bg_popup_call_poc_inact_pane_g3

0xc597,	// (0x000a0706) bg_popup_call_poc_inact_pane_g4

0xc59f,	// (0x000a070e) bg_popup_call_poc_inact_pane_g5

0xb17b,	// (0x0009f2ea) popup_call_poc_act_window_t1_ParamLimits

0xb17b,	// (0x0009f2ea) popup_call_poc_act_window_t1

0xb1a3,	// (0x0009f312) popup_call_poc_act_window_t2_ParamLimits

0xb1a3,	// (0x0009f312) popup_call_poc_act_window_t2

0xb1cb,	// (0x0009f33a) popup_call_poc_act_window_t3_ParamLimits

0xb1cb,	// (0x0009f33a) popup_call_poc_act_window_t3

0xb1f3,	// (0x0009f362) popup_call_poc_act_window_t4_ParamLimits

0xb1f3,	// (0x0009f362) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x000a3676) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x000a3676) popup_call_poc_act_window_t

0xc5a7,	// (0x000a0716) bg_popup_call_poc_inact_pane_g6

0xc5af,	// (0x000a071e) bg_popup_call_poc_inact_pane_g7

0xc5b7,	// (0x000a0726) bg_popup_call_poc_inact_pane_g8

0xb205,	// (0x0009f374) popup_call_poc_inact_window_g2

0xc5bf,	// (0x000a072e) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x000a36f5) bg_popup_call_poc_inact_pane_g

0xb20d,	// (0x0009f37c) popup_call_poc_inact_window_t1_ParamLimits

0xb20d,	// (0x0009f37c) popup_call_poc_inact_window_t1

0xb222,	// (0x0009f391) popup_call_poc_inact_window_t2_ParamLimits

0xb222,	// (0x0009f391) popup_call_poc_inact_window_t2

0xb237,	// (0x0009f3a6) popup_call_poc_inact_window_t3_ParamLimits

0xb237,	// (0x0009f3a6) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x000a367f) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x000a367f) popup_call_poc_inact_window_t

0xc74d,	// (0x000a08bc) context_pane_ParamLimits

0x4703,	// (0x00098872) signal_pane_ParamLimits

0xae0b,	// (0x0009ef7a) main_call2_pane

0x4676,	// (0x000987e5) popup_phob_thumbnail2_window_ParamLimits

0x4676,	// (0x000987e5) popup_phob_thumbnail2_window

0x3d8e,	// (0x00097efd) aid_hotspot_pointer_arrow_pane

0x3d96,	// (0x00097f05) aid_hotspot_pointer_hand_pane

0x43e3,	// (0x00098552) phob_pre_status_pane_g5

0x1dd4,	// (0x00095f43) cams_zoom_pane_ParamLimits

0x1de0,	// (0x00095f4f) image_vga_pane_ParamLimits

0x1def,	// (0x00095f5e) main_camera_pane_g1_ParamLimits

0x1dfd,	// (0x00095f6c) main_camera_pane_g2_ParamLimits

0x1e09,	// (0x00095f78) main_camera_pane_g3_ParamLimits

0x1e15,	// (0x00095f84) main_camera_pane_g4_ParamLimits

0x1e21,	// (0x00095f90) main_camera_pane_g5_ParamLimits

0x1e2d,	// (0x00095f9c) main_camera_pane_g6_ParamLimits

0x1e39,	// (0x00095fa8) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x000a337e) main_camera_pane_g_ParamLimits

0x1e45,	// (0x00095fb4) main_camera_pane_t1_ParamLimits

0x1e57,	// (0x00095fc6) main_camera_pane_t2_ParamLimits

0xf220,	// (0x000a338f) main_camera_pane_t_ParamLimits

0xa120,	// (0x0009e28f) bg_popup_preview_window_pane_cp01_ParamLimits

0xa120,	// (0x0009e28f) bg_popup_preview_window_pane_cp01

0xb24c,	// (0x0009f3bb) popup_phob_thumbnail2_window_g1_ParamLimits

0xb24c,	// (0x0009f3bb) popup_phob_thumbnail2_window_g1

0x9ec5,	// (0x0009e034) call2_cli_visual_pane

0x40dd,	// (0x0009824c) popup_call2_audio_conf_window_ParamLimits

0x40dd,	// (0x0009824c) popup_call2_audio_conf_window

0x40f2,	// (0x00098261) popup_call2_audio_first_window_ParamLimits

0x40f2,	// (0x00098261) popup_call2_audio_first_window

0x4190,	// (0x000982ff) popup_call2_audio_in_window_ParamLimits

0x4190,	// (0x000982ff) popup_call2_audio_in_window

0x41d2,	// (0x00098341) popup_call2_audio_out_window_ParamLimits

0x41d2,	// (0x00098341) popup_call2_audio_out_window

0x4234,	// (0x000983a3) popup_call2_audio_second_window_ParamLimits

0x4234,	// (0x000983a3) popup_call2_audio_second_window

0x4292,	// (0x00098401) popup_call2_audio_wait_window_ParamLimits

0x4292,	// (0x00098401) popup_call2_audio_wait_window

0x9ec5,	// (0x0009e034) bg_popup_call2_act_pane_cp03

0xa102,	// (0x0009e271) list_conf_pane_cp

0xb258,	// (0x0009f3c7) popup_call2_audio_conf_window_t1

0xaaf4,	// (0x0009ec63) list_single_graphic_popup_conf2_pane_ParamLimits

0xaaf4,	// (0x0009ec63) list_single_graphic_popup_conf2_pane

0xab07,	// (0x0009ec76) list_highlight_pane_cp04

0xb266,	// (0x0009f3d5) list_single_graphic_popup_conf2_pane_g1

0xab18,	// (0x0009ec87) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x000a3686) list_single_graphic_popup_conf2_pane_g

0xb270,	// (0x0009f3df) list_single_graphic_popup_conf2_pane_t1

0xb27e,	// (0x0009f3ed) bg_popup_call2_act_pane_cp01_ParamLimits

0xb27e,	// (0x0009f3ed) bg_popup_call2_act_pane_cp01

0xb308,	// (0x0009f477) call_type_pane_cp05_ParamLimits

0xb308,	// (0x0009f477) call_type_pane_cp05

0xb35c,	// (0x0009f4cb) popup_call2_audio_second_window_g1_ParamLimits

0xb35c,	// (0x0009f4cb) popup_call2_audio_second_window_g1

0xb3b0,	// (0x0009f51f) popup_call2_audio_second_window_g2_ParamLimits

0xb3b0,	// (0x0009f51f) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x000a368b) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x000a368b) popup_call2_audio_second_window_g

0xb415,	// (0x0009f584) popup_call2_audio_second_window_t1_ParamLimits

0xb415,	// (0x0009f584) popup_call2_audio_second_window_t1

0xb4d0,	// (0x0009f63f) popup_call2_audio_second_window_t2_ParamLimits

0xb4d0,	// (0x0009f63f) popup_call2_audio_second_window_t2

0xb53d,	// (0x0009f6ac) popup_call2_audio_second_window_t3_ParamLimits

0xb53d,	// (0x0009f6ac) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x000a3692) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x000a3692) popup_call2_audio_second_window_t

0x9ec5,	// (0x0009e034) bg_popup_call2_in_pane_cp02

0x9ecf,	// (0x0009e03e) call_type_pane_cp04

0x9ed7,	// (0x0009e046) popup_call2_audio_wait_window_g1

0x9edf,	// (0x0009e04e) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x000a326b) popup_call2_audio_wait_window_g

0x9ee7,	// (0x0009e056) popup_call2_audio_wait_window_t3

0xbb52,	// (0x0009fcc1) bg_popup_call2_act_pane_ParamLimits

0xbb52,	// (0x0009fcc1) bg_popup_call2_act_pane

0xbc12,	// (0x0009fd81) call_type_pane_cp03_ParamLimits

0xbc12,	// (0x0009fd81) call_type_pane_cp03

0xbc76,	// (0x0009fde5) popup_call2_audio_first_window_g1_ParamLimits

0xbc76,	// (0x0009fde5) popup_call2_audio_first_window_g1

0xbce6,	// (0x0009fe55) popup_call2_audio_first_window_g2_ParamLimits

0xbce6,	// (0x0009fe55) popup_call2_audio_first_window_g2

0xaa20,	// (0x0009eb8f) popup_call2_audio_first_window_g3_ParamLimits

0xaa20,	// (0x0009eb8f) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x000a369b) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x000a369b) popup_call2_audio_first_window_g

0xbdc4,	// (0x0009ff33) popup_call2_audio_first_window_t1_ParamLimits

0xbdc4,	// (0x0009ff33) popup_call2_audio_first_window_t1

0xbec7,	// (0x000a0036) popup_call2_audio_first_window_t4_ParamLimits

0xbec7,	// (0x000a0036) popup_call2_audio_first_window_t4

0xbfaa,	// (0x000a0119) popup_call2_audio_first_window_t5_ParamLimits

0xbfaa,	// (0x000a0119) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x000a36a6) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x000a36a6) popup_call2_audio_first_window_t

0xa118,	// (0x0009e287) bg_popup_call2_act_pane_g1

0xc617,	// (0x000a0786) popup_cale_lunar_info_window_t1

0xc625,	// (0x000a0794) popup_cale_lunar_info_window_t2

0xc633,	// (0x000a07a2) popup_cale_lunar_info_window_t3

0x9ec5,	// (0x0009e034) bg_popup_call2_bubble_pane

0xc0ab,	// (0x000a021a) bg_popup_call2_in_pane_cp01_ParamLimits

0xc0ab,	// (0x000a021a) bg_popup_call2_in_pane_cp01

0xed97,	// (0x000a2f06) call_type_pane_cp02

0xc0f3,	// (0x000a0262) popup_call2_audio_out_window_g1_ParamLimits

0xc0f3,	// (0x000a0262) popup_call2_audio_out_window_g1

0xc11f,	// (0x000a028e) popup_call2_audio_out_window_g2_ParamLimits

0xc11f,	// (0x000a028e) popup_call2_audio_out_window_g2

0xc147,	// (0x000a02b6) popup_call2_audio_out_window_g3_ParamLimits

0xc147,	// (0x000a02b6) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x000a36af) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x000a36af) popup_call2_audio_out_window_g

0xc182,	// (0x000a02f1) popup_call2_audio_out_window_t1_ParamLimits

0xc182,	// (0x000a02f1) popup_call2_audio_out_window_t1

0xc1e1,	// (0x000a0350) popup_call2_audio_out_window_t2_ParamLimits

0xc1e1,	// (0x000a0350) popup_call2_audio_out_window_t2

0xc235,	// (0x000a03a4) popup_call2_audio_out_window_t3_ParamLimits

0xc235,	// (0x000a03a4) popup_call2_audio_out_window_t3

0xc24b,	// (0x000a03ba) popup_call2_audio_out_window_t4_ParamLimits

0xc24b,	// (0x000a03ba) popup_call2_audio_out_window_t4

0xc261,	// (0x000a03d0) popup_call2_audio_out_window_t5_ParamLimits

0xc261,	// (0x000a03d0) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x000a36b8) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x000a36b8) popup_call2_audio_out_window_t

0xc2c5,	// (0x000a0434) bg_popup_call2_in_pane_ParamLimits

0xc2c5,	// (0x000a0434) bg_popup_call2_in_pane

0xc321,	// (0x000a0490) popup_call2_audio_in_window_g1_ParamLimits

0xc321,	// (0x000a0490) popup_call2_audio_in_window_g1

0xc359,	// (0x000a04c8) popup_call2_audio_in_window_g2_ParamLimits

0xc359,	// (0x000a04c8) popup_call2_audio_in_window_g2

0xc391,	// (0x000a0500) popup_call2_audio_in_window_g3_ParamLimits

0xc391,	// (0x000a0500) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x000a36c5) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x000a36c5) popup_call2_audio_in_window_g

0xc3e9,	// (0x000a0558) popup_call2_audio_in_window_t1_ParamLimits

0xc3e9,	// (0x000a0558) popup_call2_audio_in_window_t1

0xc469,	// (0x000a05d8) popup_call2_audio_in_window_t2_ParamLimits

0xc469,	// (0x000a05d8) popup_call2_audio_in_window_t2

0xc4e9,	// (0x000a0658) popup_call2_audio_in_window_t3_ParamLimits

0xc4e9,	// (0x000a0658) popup_call2_audio_in_window_t3

0xc503,	// (0x000a0672) popup_call2_audio_in_window_t4_ParamLimits

0xc503,	// (0x000a0672) popup_call2_audio_in_window_t4

0xc515,	// (0x000a0684) popup_call2_audio_in_window_t5_ParamLimits

0xc515,	// (0x000a0684) popup_call2_audio_in_window_t5

0xc52a,	// (0x000a0699) popup_call2_audio_in_window_t6_ParamLimits

0xc52a,	// (0x000a0699) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x000a36ce) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x000a36ce) popup_call2_audio_in_window_t

0xa118,	// (0x0009e287) bg_popup_call2_in_pane_g1

0xc641,	// (0x000a07b0) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x000a3736) popup_cale_lunar_info_window_t

0xa120,	// (0x0009e28f) bg_popup_call2_rect_pane_ParamLimits

0xa120,	// (0x0009e28f) bg_popup_call2_rect_pane

0x9ec5,	// (0x0009e034) call2_cli_visual_graphic_pane

0x9ec5,	// (0x0009e034) call2_cli_visual_text_pane

0x47a9,	// (0x00098918) smil_status_volume_pane_g3

0x0002,

0xa23a,	// (0x0009e3a9) call2_cli_visual_graphic_pane_g1

0xa23a,	// (0x0009e3a9) call2_cli_visual_graphic_pane_g2

0xa23a,	// (0x0009e3a9) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x000a36db) call2_cli_visual_graphic_pane_g

0xc53f,	// (0x000a06ae) bg_popup_call2_rect_pane_g1

0xa2c6,	// (0x0009e435) bg_popup_call2_rect_pane_g2

0xc547,	// (0x000a06b6) bg_popup_call2_rect_pane_g3

0xc54f,	// (0x000a06be) bg_popup_call2_rect_pane_g4

0xc557,	// (0x000a06c6) bg_popup_call2_rect_pane_g5

0xc55f,	// (0x000a06ce) bg_popup_call2_rect_pane_g6

0xc567,	// (0x000a06d6) bg_popup_call2_rect_pane_g7

0xc56f,	// (0x000a06de) bg_popup_call2_rect_pane_g8

0xc577,	// (0x000a06e6) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x000a36e2) bg_popup_call2_rect_pane_g

0xc57f,	// (0x000a06ee) bg_popup_call2_bubble_pane_g1

0xc587,	// (0x000a06f6) bg_popup_call2_bubble_pane_g2

0xc58f,	// (0x000a06fe) bg_popup_call2_bubble_pane_g3

0xc597,	// (0x000a0706) bg_popup_call2_bubble_pane_g4

0xc59f,	// (0x000a070e) bg_popup_call2_bubble_pane_g5

0xc5a7,	// (0x000a0716) bg_popup_call2_bubble_pane_g6

0xc5af,	// (0x000a071e) bg_popup_call2_bubble_pane_g7

0xc5b7,	// (0x000a0726) bg_popup_call2_bubble_pane_g8

0xc5bf,	// (0x000a072e) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x000a36f5) bg_popup_call2_bubble_pane_g

0x1807,	// (0x00095976) aid_cale_week_size_cell_pane

0x1e69,	// (0x00095fd8) aid_cams_cif_uncrop_pane_ParamLimits

0x1e69,	// (0x00095fd8) aid_cams_cif_uncrop_pane

0x1fc4,	// (0x00096133) aid_cams_size_cell_ParamLimits

0x1fc4,	// (0x00096133) aid_cams_size_cell

0x1fd0,	// (0x0009613f) grid_cams_pane_ParamLimits

0x1fde,	// (0x0009614d) linegrid_cams_pane_ParamLimits

0x21c2,	// (0x00096331) call_video_pane_t1

0x21e3,	// (0x00096352) call_video_pane_t2

0x0001,

0xf273,	// (0x000a33e2) call_video_pane_t

0x272c,	// (0x0009689b) aid_cale_month_size_cell_pane_ParamLimits

0x272c,	// (0x0009689b) aid_cale_month_size_cell_pane

0xf610,	// (0x000a377f) smil_status_volume_pane_g

0x47b6,	// (0x00098925) volume_smil_pane_ParamLimits

0x0f50,	// (0x000950bf) aid_popup2_width_pane

0x16fb,	// (0x0009586a) cell_qdial_pane_g4_ParamLimits

0x16fb,	// (0x0009586a) cell_qdial_pane_g4

0x3742,	// (0x000978b1) aid_blid_cardinal_pane_ParamLimits

0x3752,	// (0x000978c1) aid_blid_destination_pane_ParamLimits

0x3752,	// (0x000978c1) aid_blid_destination_pane

0xa120,	// (0x0009e28f) bg_popup_call_poc_act_pane_ParamLimits

0xa120,	// (0x0009e28f) bg_popup_call_poc_act_pane

0xa120,	// (0x0009e28f) bg_popup_call_poc_inact_pane_ParamLimits

0xa120,	// (0x0009e28f) bg_popup_call_poc_inact_pane

0xc5c7,	// (0x000a0736) bg_popup_call_poc_act_pane_g1

0xc5cf,	// (0x000a073e) bg_popup_call_poc_act_pane_g2

0xc5d7,	// (0x000a0746) bg_popup_call_poc_act_pane_g3

0xc597,	// (0x000a0706) bg_popup_call_poc_act_pane_g4

0xc59f,	// (0x000a070e) bg_popup_call_poc_act_pane_g5

0xc5df,	// (0x000a074e) bg_popup_call_poc_act_pane_g6

0xc5af,	// (0x000a071e) bg_popup_call_poc_act_pane_g7

0xc5e7,	// (0x000a0756) bg_popup_call_poc_act_pane_g8

0x9ec5,	// (0x0009e034) main_usb_pane

0x45a5,	// (0x00098714) popup_cale_lunar_info_window

0x250e,	// (0x0009667d) im_reading_pane_t1_ParamLimits

0xa4a4,	// (0x0009e613) list_im_pane_ParamLimits

0xa4b5,	// (0x0009e624) scroll_pane_cp07_ParamLimits

0x9ec5,	// (0x0009e034) grid_highlight_pane_cp012

0xa120,	// (0x0009e28f) mup_scale_pane_ParamLimits

0xaa20,	// (0x0009eb8f) main_usb_pane_g1_ParamLimits

0xaa20,	// (0x0009eb8f) main_usb_pane_g1

0x4306,	// (0x00098475) main_usb_pane_g2_ParamLimits

0x4306,	// (0x00098475) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x000a371f) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x000a371f) main_usb_pane_g

0x4312,	// (0x00098481) main_usb_pane_t1_ParamLimits

0x4312,	// (0x00098481) main_usb_pane_t1

0x4324,	// (0x00098493) main_usb_pane_t2_ParamLimits

0x4324,	// (0x00098493) main_usb_pane_t2

0x4336,	// (0x000984a5) main_usb_pane_t3_ParamLimits

0x4336,	// (0x000984a5) main_usb_pane_t3

0x4348,	// (0x000984b7) main_usb_pane_t4_ParamLimits

0x4348,	// (0x000984b7) main_usb_pane_t4

0x435a,	// (0x000984c9) main_usb_pane_t5_ParamLimits

0x435a,	// (0x000984c9) main_usb_pane_t5

0x436c,	// (0x000984db) main_usb_pane_t6_ParamLimits

0x436c,	// (0x000984db) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x000a3724) main_usb_pane_t_ParamLimits

0x36e8,	// (0x00097857) aid_text_placing

0x36f4,	// (0x00097863) main_location2_pane_t1_ParamLimits

0x3708,	// (0x00097877) main_location2_pane_t2_ParamLimits

0x371c,	// (0x0009788b) main_location2_pane_t3_ParamLimits

0x3730,	// (0x0009789f) main_location2_pane_t4_ParamLimits

0x3730,	// (0x0009789f) main_location2_pane_t4

0xf3d4,	// (0x000a3543) main_location2_pane_t_ParamLimits

0xa15c,	// (0x0009e2cb) find_pinb_pane_g2_ParamLimits

0xa15c,	// (0x0009e2cb) find_pinb_pane_g2

0x0001,

0xf122,	// (0x000a3291) find_pinb_pane_g_ParamLimits

0xf122,	// (0x000a3291) find_pinb_pane_g

0xa168,	// (0x0009e2d7) find_pinb_pane_t1_ParamLimits

0xa17a,	// (0x0009e2e9) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x000a3296) find_pinb_pane_t_ParamLimits

0x9ec5,	// (0x0009e034) main_call3_pane

0x2c80,	// (0x00096def) cale_month_day_heading_pane_t1_ParamLimits

0x2d06,	// (0x00096e75) cale_month_day_heading_pane_t2_ParamLimits

0x2d97,	// (0x00096f06) cale_month_day_heading_pane_t3_ParamLimits

0x2e28,	// (0x00096f97) cale_month_day_heading_pane_t4_ParamLimits

0x2eb9,	// (0x00097028) cale_month_day_heading_pane_t5_ParamLimits

0x2f4a,	// (0x000970b9) cale_month_day_heading_pane_t6_ParamLimits

0x2fdb,	// (0x0009714a) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x000a341a) cale_month_day_heading_pane_t_ParamLimits

0xa6ff,	// (0x0009e86e) smil_status_volume_pane

0x3eca,	// (0x00098039) postcard_address_pane_ParamLimits

0x3eca,	// (0x00098039) postcard_address_pane

0x3ed6,	// (0x00098045) postcard_message_pane_ParamLimits

0x3ed6,	// (0x00098045) postcard_message_pane

0x42d1,	// (0x00098440) call2_cli_visual_pane_t1_ParamLimits

0x42d1,	// (0x00098440) call2_cli_visual_pane_t1

0x490d,	// (0x00098a7c) postcard_message_pane_t1_ParamLimits

0x490d,	// (0x00098a7c) postcard_message_pane_t1

0x48f6,	// (0x00098a65) postcard_address_pane_t1_ParamLimits

0x48f6,	// (0x00098a65) postcard_address_pane_t1

0x48e7,	// (0x00098a56) popup_call3_audio_in_window_ParamLimits

0x48e7,	// (0x00098a56) popup_call3_audio_in_window

0x47cb,	// (0x0009893a) bg_popup_call3_in_pane_ParamLimits

0x47cb,	// (0x0009893a) bg_popup_call3_in_pane

0x482d,	// (0x0009899c) popup_call3_audio_in_window_g1_ParamLimits

0x482d,	// (0x0009899c) popup_call3_audio_in_window_g1

0x4845,	// (0x000989b4) popup_call3_audio_in_window_g2_ParamLimits

0x4845,	// (0x000989b4) popup_call3_audio_in_window_g2

0x485d,	// (0x000989cc) popup_call3_audio_in_window_g3_ParamLimits

0x485d,	// (0x000989cc) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x000a3786) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x000a3786) popup_call3_audio_in_window_g

0x4885,	// (0x000989f4) popup_call3_audio_in_window_t1_ParamLimits

0x4885,	// (0x000989f4) popup_call3_audio_in_window_t1

0x48ad,	// (0x00098a1c) popup_call3_audio_in_window_t2_ParamLimits

0x48ad,	// (0x00098a1c) popup_call3_audio_in_window_t2

0x48d5,	// (0x00098a44) popup_call3_audio_in_window_t3_ParamLimits

0x48d5,	// (0x00098a44) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x000a378f) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x000a378f) popup_call3_audio_in_window_t

0xae0b,	// (0x0009ef7a) bg_popup_call3_rect_pane

0xc53f,	// (0x000a06ae) bg_popup_call3_rect_pane_g1

0xa2c6,	// (0x0009e435) bg_popup_call3_rect_pane_g2

0xc547,	// (0x000a06b6) bg_popup_call3_rect_pane_g3

0xc54f,	// (0x000a06be) bg_popup_call3_rect_pane_g4

0xc557,	// (0x000a06c6) bg_popup_call3_rect_pane_g5

0xc55f,	// (0x000a06ce) bg_popup_call3_rect_pane_g6

0xc567,	// (0x000a06d6) bg_popup_call3_rect_pane_g7

0x3a68,	// (0x00097bd7) mup_visualizer_osc_pane

0xaeca,	// (0x0009f039) mup_visualizer_spec_pane

0x47eb,	// (0x0009895a) call3_video_qcif_pane_ParamLimits

0x47eb,	// (0x0009895a) call3_video_qcif_pane

0x47fd,	// (0x0009896c) call3_video_qcif_uncrop_pane_ParamLimits

0x47fd,	// (0x0009896c) call3_video_qcif_uncrop_pane

0x480b,	// (0x0009897a) call3_video_subqcif_pane_ParamLimits

0x480b,	// (0x0009897a) call3_video_subqcif_pane

0x481d,	// (0x0009898c) call3_video_subqcif_uncrop_pane_ParamLimits

0x481d,	// (0x0009898c) call3_video_subqcif_uncrop_pane

0x4875,	// (0x000989e4) popup_call3_audio_in_window_g4_ParamLimits

0x4875,	// (0x000989e4) popup_call3_audio_in_window_g4

0x4798,	// (0x00098907) mup_spec_half_pane

0x47a1,	// (0x00098910) mup_spec_half_pane_cp

0xc7ad,	// (0x000a091c) mup_osc_middle_pane

0xc7b6,	// (0x000a0925) mup_visualizer_osc_pane_g1

0x4779,	// (0x000988e8) mup_spec_bar_pane_ParamLimits

0x4779,	// (0x000988e8) mup_spec_bar_pane

0xc79a,	// (0x000a0909) mup_spec_bar_pane_g1

0xc7a4,	// (0x000a0913) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x000a377a) mup_spec_bar_pane_g

0x1807,	// (0x00095976) aid_cale_week_size_cell_pane_ParamLimits

0x181c,	// (0x0009598b) bg_cale_heading_pane_ParamLimits

0xa303,	// (0x0009e472) bg_cale_pane_cp01_ParamLimits

0x183e,	// (0x000959ad) cale_week_corner_pane_ParamLimits

0x1858,	// (0x000959c7) cale_week_day_heading_pane_ParamLimits

0x187a,	// (0x000959e9) cale_week_scroll_pane_g1_ParamLimits

0x1897,	// (0x00095a06) cale_week_scroll_pane_g2_ParamLimits

0x18aa,	// (0x00095a19) cale_week_scroll_pane_g3_ParamLimits

0x18bd,	// (0x00095a2c) cale_week_scroll_pane_g4_ParamLimits

0x18d0,	// (0x00095a3f) cale_week_scroll_pane_g5_ParamLimits

0x18e3,	// (0x00095a52) cale_week_scroll_pane_g6_ParamLimits

0x18f6,	// (0x00095a65) cale_week_scroll_pane_g7_ParamLimits

0x1909,	// (0x00095a78) cale_week_scroll_pane_g8_ParamLimits

0x191e,	// (0x00095a8d) cale_week_scroll_pane_g9_ParamLimits

0x1931,	// (0x00095aa0) cale_week_scroll_pane_g10_ParamLimits

0x1944,	// (0x00095ab3) cale_week_scroll_pane_g11_ParamLimits

0x1957,	// (0x00095ac6) cale_week_scroll_pane_g12_ParamLimits

0x196e,	// (0x00095add) cale_week_scroll_pane_g13_ParamLimits

0x1989,	// (0x00095af8) cale_week_scroll_pane_g14_ParamLimits

0x19a4,	// (0x00095b13) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x000a3322) cale_week_scroll_pane_g_ParamLimits

0x19bf,	// (0x00095b2e) cale_week_time_pane_ParamLimits

0x19d4,	// (0x00095b43) grid_cale_week_pane_ParamLimits

0xa321,	// (0x0009e490) listscroll_cale_week_pane_t1

0xa333,	// (0x0009e4a2) scroll_pane_cp08_ParamLimits

0x2795,	// (0x00096904) cale_month_corner_pane_ParamLimits

0xa6d5,	// (0x0009e844) cale_month_pane_t1

0x2c1d,	// (0x00096d8c) cale_month_week_pane_ParamLimits

0xaa20,	// (0x0009eb8f) popup_call_status_window_g1_ParamLimits

0x351b,	// (0x0009768a) popup_call_status_window_g2_ParamLimits

0x3527,	// (0x00097696) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x000a34ca) popup_call_status_window_g_ParamLimits

0xaa87,	// (0x0009ebf6) aid_call2_pane

0x3d09,	// (0x00097e78) msg_header_pane_g1

0x3eca,	// (0x00098039) postcard_address2_pane_ParamLimits

0x3eca,	// (0x00098039) postcard_address2_pane

0x3ed6,	// (0x00098045) postcard_message2_pane_ParamLimits

0x3ed6,	// (0x00098045) postcard_message2_pane

0x4711,	// (0x00098880) message2_row_pane_ParamLimits

0x4711,	// (0x00098880) message2_row_pane

0x472c,	// (0x0009889b) address2_row_pane_ParamLimits

0x472c,	// (0x0009889b) address2_row_pane

0xc768,	// (0x000a08d7) postcard_message2_row_pane_g1

0xc770,	// (0x000a08df) postcard_message2_row_pane_t1

0xc768,	// (0x000a08d7) address2_row_pane_g1

0xc770,	// (0x000a08df) address2_row_pane_t1

0x1d2b,	// (0x00095e9a) aid_size_cell_vorec

0x9ec5,	// (0x0009e034) main_rss_pane

0x473f,	// (0x000988ae) rss_list_single_pane_ParamLimits

0x473f,	// (0x000988ae) rss_list_single_pane

0xc77e,	// (0x000a08ed) rss_list_single_pane_t1

0xc78c,	// (0x000a08fb) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x000a3775) rss_list_single_pane_t

0x9ec5,	// (0x0009e034) main_camera2_pane

0x9ec5,	// (0x0009e034) main_video2_pane

0x4971,	// (0x00098ae0) cams_zoom_pane_cp2_ParamLimits

0x4971,	// (0x00098ae0) cams_zoom_pane_cp2

0x497d,	// (0x00098aec) image2_vga_pane_ParamLimits

0x497d,	// (0x00098aec) image2_vga_pane

0x498c,	// (0x00098afb) main_camera2_pane_g1_ParamLimits

0x498c,	// (0x00098afb) main_camera2_pane_g1

0x4998,	// (0x00098b07) main_camera2_pane_g2_ParamLimits

0x4998,	// (0x00098b07) main_camera2_pane_g2

0x49a4,	// (0x00098b13) main_camera2_pane_g3_ParamLimits

0x49a4,	// (0x00098b13) main_camera2_pane_g3

0x49b0,	// (0x00098b1f) main_camera2_pane_g4_ParamLimits

0x49b0,	// (0x00098b1f) main_camera2_pane_g4

0x49bc,	// (0x00098b2b) main_camera2_pane_g5_ParamLimits

0x49bc,	// (0x00098b2b) main_camera2_pane_g5

0x49c8,	// (0x00098b37) main_camera2_pane_g6_ParamLimits

0x49c8,	// (0x00098b37) main_camera2_pane_g6

0x49d4,	// (0x00098b43) main_camera2_pane_g7_ParamLimits

0x49d4,	// (0x00098b43) main_camera2_pane_g7

0x49e0,	// (0x00098b4f) main_camera2_pane_g8_ParamLimits

0x49e0,	// (0x00098b4f) main_camera2_pane_g8

0x0008,

0xf627,	// (0x000a3796) main_camera2_pane_g_ParamLimits

0xf627,	// (0x000a3796) main_camera2_pane_g

0x49f8,	// (0x00098b67) main_camera2_pane_t1_ParamLimits

0x49f8,	// (0x00098b67) main_camera2_pane_t1

0x4a0a,	// (0x00098b79) main_camera2_pane_t2_ParamLimits

0x4a0a,	// (0x00098b79) main_camera2_pane_t2

0x4a1c,	// (0x00098b8b) main_camera2_pane_t3_ParamLimits

0x4a1c,	// (0x00098b8b) main_camera2_pane_t3

0x4a2e,	// (0x00098b9d) main_camera2_pane_t4_ParamLimits

0x4a2e,	// (0x00098b9d) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x000a37a9) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x000a37a9) main_camera2_pane_t

0x4a90,	// (0x00098bff) cams_zoom_pane_cp4_ParamLimits

0x4a90,	// (0x00098bff) cams_zoom_pane_cp4

0x4aa0,	// (0x00098c0f) image2_cif_pane_ParamLimits

0x4aa0,	// (0x00098c0f) image2_cif_pane

0x4ab5,	// (0x00098c24) image2_subqcif_pane_ParamLimits

0x4ab5,	// (0x00098c24) image2_subqcif_pane

0x4ac4,	// (0x00098c33) main_video2_pane_g1_ParamLimits

0x4ac4,	// (0x00098c33) main_video2_pane_g1

0x4ad6,	// (0x00098c45) main_video2_pane_g2_ParamLimits

0x4ad6,	// (0x00098c45) main_video2_pane_g2

0x4ae6,	// (0x00098c55) main_video2_pane_g3_ParamLimits

0x4ae6,	// (0x00098c55) main_video2_pane_g3

0x4af6,	// (0x00098c65) main_video2_pane_g4_ParamLimits

0x4af6,	// (0x00098c65) main_video2_pane_g4

0x4b06,	// (0x00098c75) main_video2_pane_g5_ParamLimits

0x4b06,	// (0x00098c75) main_video2_pane_g5

0x4b16,	// (0x00098c85) main_video2_pane_g6_ParamLimits

0x4b16,	// (0x00098c85) main_video2_pane_g6

0x0005,

0xf649,	// (0x000a37b8) main_video2_pane_g_ParamLimits

0xf649,	// (0x000a37b8) main_video2_pane_g

0x4b28,	// (0x00098c97) main_video2_pane_t1_ParamLimits

0x4b28,	// (0x00098c97) main_video2_pane_t1

0x4b42,	// (0x00098cb1) main_video2_pane_t2_ParamLimits

0x4b42,	// (0x00098cb1) main_video2_pane_t2

0x4b68,	// (0x00098cd7) main_video2_pane_t3_ParamLimits

0x4b68,	// (0x00098cd7) main_video2_pane_t3

0x0002,

0xf656,	// (0x000a37c5) main_video2_pane_t_ParamLimits

0xf656,	// (0x000a37c5) main_video2_pane_t

0x4423,	// (0x00098592) call_muted_g2

0x0001,

0xf5f8,	// (0x000a3767) call_muted_g

0x9ec5,	// (0x0009e034) main_mup2_pane

0xc7ed,	// (0x000a095c) main_mup2_pane_g1_ParamLimits

0xc7ed,	// (0x000a095c) main_mup2_pane_g1

0x4b8e,	// (0x00098cfd) main_mup2_pane_g2_ParamLimits

0x4b8e,	// (0x00098cfd) main_mup2_pane_g2

0x4e10,	// (0x00098f7f) main_mup_pane_g13_cp1

0x4e18,	// (0x00098f87) mup_volume_pane_cp1

0x4bae,	// (0x00098d1d) main_mup2_pane_g4_ParamLimits

0x4bae,	// (0x00098d1d) main_mup2_pane_g4

0x4bc3,	// (0x00098d32) main_mup2_pane_g5_ParamLimits

0x4bc3,	// (0x00098d32) main_mup2_pane_g5

0x4bd8,	// (0x00098d47) main_mup2_pane_g6_ParamLimits

0x4bd8,	// (0x00098d47) main_mup2_pane_g6

0x4bed,	// (0x00098d5c) main_mup2_pane_g7_ParamLimits

0x4bed,	// (0x00098d5c) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x000a37cc) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x000a37cc) main_mup2_pane_g

0x4c09,	// (0x00098d78) main_mup2_pane_t1_ParamLimits

0x4c09,	// (0x00098d78) main_mup2_pane_t1

0x4c20,	// (0x00098d8f) main_mup2_pane_t2_ParamLimits

0x4c20,	// (0x00098d8f) main_mup2_pane_t2

0x4c37,	// (0x00098da6) main_mup2_pane_t3_ParamLimits

0x4c37,	// (0x00098da6) main_mup2_pane_t3

0x4c4e,	// (0x00098dbd) main_mup2_pane_t4_ParamLimits

0x4c4e,	// (0x00098dbd) main_mup2_pane_t4

0x4c68,	// (0x00098dd7) main_mup2_pane_t5_ParamLimits

0x4c68,	// (0x00098dd7) main_mup2_pane_t5

0x4c82,	// (0x00098df1) main_mup2_pane_t6_ParamLimits

0x4c82,	// (0x00098df1) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x000a37db) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x000a37db) main_mup2_pane_t

0x4cba,	// (0x00098e29) mup2_visualizer_pane_ParamLimits

0x4cba,	// (0x00098e29) mup2_visualizer_pane

0x4cf0,	// (0x00098e5f) mup_progress_pane_cp_ParamLimits

0x4cf0,	// (0x00098e5f) mup_progress_pane_cp

0x4dfb,	// (0x00098f6a) mup_volume_pane_cp_ParamLimits

0x4dfb,	// (0x00098f6a) mup_volume_pane_cp

0x4d07,	// (0x00098e76) mup2_visualizer_pane_g1_ParamLimits

0x4d07,	// (0x00098e76) mup2_visualizer_pane_g1

0xc7f9,	// (0x000a0968) mup2_visualizer_pane_g2_ParamLimits

0xc7f9,	// (0x000a0968) mup2_visualizer_pane_g2

0x4d1c,	// (0x00098e8b) mup2_visualizer_pane_g3_ParamLimits

0x4d1c,	// (0x00098e8b) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x000a37e8) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x000a37e8) mup2_visualizer_pane_g

0xb0e8,	// (0x0009f257) aid_size_cell_fmradio

0x4539,	// (0x000986a8) aid_height_parent_landcape

0xa533,	// (0x0009e6a2) wml_content_pane_cp

0xa53b,	// (0x0009e6aa) wml_tabs_pane

0xa544,	// (0x0009e6b3) popup_wml_miniature_window

0xa54c,	// (0x0009e6bb) scroll_pane_cp021

0xa560,	// (0x0009e6cf) wml_content_pane_comp8

0x9ec5,	// (0x0009e034) bg_popup_sub_pane_cp05

0xc817,	// (0x000a0986) popup_wml_miniature_window_g1

0xc81f,	// (0x000a098e) wml_miniature_view_pane

0x4d2a,	// (0x00098e99) aid_size_wml_view

0x4d32,	// (0x00098ea1) wml_miniature_view_pane_g1

0x4d3b,	// (0x00098eaa) wml_miniature_view_pane_g2

0x4d44,	// (0x00098eb3) wml_miniature_view_pane_g3

0x4d4c,	// (0x00098ebb) wml_miniature_view_pane_g4

0x4d54,	// (0x00098ec3) wml_miniature_view_pane_g5

0x4d5c,	// (0x00098ecb) wml_miniature_view_pane_g6

0x4d64,	// (0x00098ed3) wml_miniature_view_pane_g7

0x4d6c,	// (0x00098edb) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x000a37ef) wml_miniature_view_pane_g

0xc7ed,	// (0x000a095c) background_graphic_ParamLimits

0xc7ed,	// (0x000a095c) background_graphic

0xc827,	// (0x000a0996) wml_tabs_2_pane

0xc830,	// (0x000a099f) wml_tabs_3_pane_ParamLimits

0xc830,	// (0x000a099f) wml_tabs_3_pane

0xc842,	// (0x000a09b1) wml_tabs_4_pane_ParamLimits

0xc842,	// (0x000a09b1) wml_tabs_4_pane

0xc858,	// (0x000a09c7) wml_tabs_5_pane_ParamLimits

0xc858,	// (0x000a09c7) wml_tabs_5_pane

0xc872,	// (0x000a09e1) wml_tabs_pane_g2_ParamLimits

0xc872,	// (0x000a09e1) wml_tabs_pane_g2

0xc886,	// (0x000a09f5) wml_tabs_pane_g3_ParamLimits

0xc886,	// (0x000a09f5) wml_tabs_pane_g3

0x4d74,	// (0x00098ee3) wml_tabs_2_active_pane_ParamLimits

0x4d74,	// (0x00098ee3) wml_tabs_2_active_pane

0x4d84,	// (0x00098ef3) wml_tabs_2_passive_pane_ParamLimits

0x4d84,	// (0x00098ef3) wml_tabs_2_passive_pane

0x4d94,	// (0x00098f03) wml_tabs_3_active_pane_cp_ParamLimits

0x4d94,	// (0x00098f03) wml_tabs_3_active_pane_cp

0x4da5,	// (0x00098f14) wml_tabs_3_passive_pane_ParamLimits

0x4da5,	// (0x00098f14) wml_tabs_3_passive_pane

0x4db6,	// (0x00098f25) wml_tabs_3_passive_pane_cp_ParamLimits

0x4db6,	// (0x00098f25) wml_tabs_3_passive_pane_cp

0x4dc7,	// (0x00098f36) tabs_4_active_pane

0x4dcf,	// (0x00098f3e) tabs_4_passive_pane

0x4dd7,	// (0x00098f46) tabs_4_passive_pane_cp

0x4ddf,	// (0x00098f4e) tabs_4_passive_pane_cp2

0x42fe,	// (0x0009846d) aid_height_text

0x3a35,	// (0x00097ba4) mup_volume_cont_pane_ParamLimits

0x3a35,	// (0x00097ba4) mup_volume_cont_pane

0x1337,	// (0x000954a6) aid_size_cell_pinb

0x1341,	// (0x000954b0) aid_size_list_pinb

0x4cd9,	// (0x00098e48) mup2_volume_cont_pane_ParamLimits

0x4cd9,	// (0x00098e48) mup2_volume_cont_pane

0x4de7,	// (0x00098f56) mup2_volume_cont_pane_g1_ParamLimits

0x4de7,	// (0x00098f56) mup2_volume_cont_pane_g1

0x0f5c,	// (0x000950cb) aid_size_cell_touch_ParamLimits

0x0f5c,	// (0x000950cb) aid_size_cell_touch

0x121d,	// (0x0009538c) touch_pane_ParamLimits

0x121d,	// (0x0009538c) touch_pane

0x1213,	// (0x00095382) main_rss2_pane

0xc8a3,	// (0x000a0a12) listscroll_rss2_pane

0xc8ac,	// (0x000a0a1b) rss2_navigation_pane

0xc8b4,	// (0x000a0a23) list_rss2_pane

0xabca,	// (0x0009ed39) scroll_pane_cp22

0xc8bc,	// (0x000a0a2b) rss2_navigation_pane_g1

0xc8c5,	// (0x000a0a34) rss2_navigation_pane_g2

0xc8cd,	// (0x000a0a3c) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x000a3800) rss2_navigation_pane_g

0xc8d5,	// (0x000a0a44) rss2_navigation_pane_t1

0x4e20,	// (0x00098f8f) rss2_list_single_pane_ParamLimits

0x4e20,	// (0x00098f8f) rss2_list_single_pane

0xc8e3,	// (0x000a0a52) rss2_list_single_pane_t2

0xc8f1,	// (0x000a0a60) rss2_list_single_pane_t3_ParamLimits

0xc8f1,	// (0x000a0a60) rss2_list_single_pane_t3

0xc90e,	// (0x000a0a7d) rss2_list_single_pane_t4

0x32ad,	// (0x0009741c) smil_status_pane_g1

0x4550,	// (0x000986bf) main_image2_pane_ParamLimits

0x4550,	// (0x000986bf) main_image2_pane

0x49ec,	// (0x00098b5b) main_camera2_pane_g9_ParamLimits

0x49ec,	// (0x00098b5b) main_camera2_pane_g9

0x4a40,	// (0x00098baf) main_camera2_pane_t5_ParamLimits

0x4a40,	// (0x00098baf) main_camera2_pane_t5

0x4a52,	// (0x00098bc1) main_camera2_pane_t6_ParamLimits

0x4a52,	// (0x00098bc1) main_camera2_pane_t6

0x4e51,	// (0x00098fc0) main_image2_pane_g1_ParamLimits

0x4e51,	// (0x00098fc0) main_image2_pane_g1

0x409e,	// (0x0009820d) smil2_video_pane_ParamLimits

0x409e,	// (0x0009820d) smil2_video_pane

0x0f90,	// (0x000950ff) aid_zoom_text_primary_cp

0x11ae,	// (0x0009531d) popup_preview_fixed_window

0xa49c,	// (0x0009e60b) im_reading_pane_g1

0x4936,	// (0x00098aa5) cams2_bc_adjust_pane_cp_ParamLimits

0x4936,	// (0x00098aa5) cams2_bc_adjust_pane_cp

0x4a82,	// (0x00098bf1) cams2_bc_adjust_pane_ParamLimits

0x4a82,	// (0x00098bf1) cams2_bc_adjust_pane

0xdacf,	// (0x000a1c3e) cams2_bc_adjust_pane_g1

0x4e5d,	// (0x00098fcc) cams2_slider_pane

0x4e66,	// (0x00098fd5) cams2_slider_pane_g1

0x4e6f,	// (0x00098fde) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x000a3807) cams2_slider_pane_g

0x1447,	// (0x000955b6) calc_display_pane_ParamLimits

0x1465,	// (0x000955d4) calc_paper_pane_ParamLimits

0x1481,	// (0x000955f0) grid_calc_pane_ParamLimits

0x3589,	// (0x000976f8) popup_clock_digital_window_t1_ParamLimits

0xb085,	// (0x0009f1f4) main_image_pane_t1

0x142d,	// (0x0009559c) aid_size_cell_calc_ParamLimits

0x142d,	// (0x0009559c) aid_size_cell_calc

0x4581,	// (0x000986f0) popup_blid_sat_info2_window_ParamLimits

0x4581,	// (0x000986f0) popup_blid_sat_info2_window

0xc924,	// (0x000a0a93) aid_size_cell_blid

0xc92c,	// (0x000a0a9b) bg_popup_window_pane_cp07

0xc94f,	// (0x000a0abe) grid_popup_blid_pane

0xc959,	// (0x000a0ac8) heading_pane_cp05_ParamLimits

0xc959,	// (0x000a0ac8) heading_pane_cp05

0xca23,	// (0x000a0b92) cell_popup_blid_pane_ParamLimits

0xca23,	// (0x000a0b92) cell_popup_blid_pane

0xca47,	// (0x000a0bb6) cell_popup_blid_pane_g1

0xca4f,	// (0x000a0bbe) cell_popup_blid_pane_t1

0x4c9f,	// (0x00098e0e) mup2_indicator_pane_ParamLimits

0x4c9f,	// (0x00098e0e) mup2_indicator_pane

0xae0b,	// (0x0009ef7a) mup2_visualizer_osc_pane

0xc805,	// (0x000a0974) mup2_visualizer_spec_pane_ParamLimits

0xc805,	// (0x000a0974) mup2_visualizer_spec_pane

0x4e89,	// (0x00098ff8) mup2_spec_half_pane

0x4e92,	// (0x00099001) mup2_spec_half_pane_cp

0x4e9c,	// (0x0009900b) mup2_spec_bar_pane_ParamLimits

0x4e9c,	// (0x0009900b) mup2_spec_bar_pane

0xc79a,	// (0x000a0909) mup2_spec_bar_pane_g1

0xc7a4,	// (0x000a0913) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x000a377a) mup2_spec_bar_pane_g

0x4ebb,	// (0x0009902a) mup2_osc_middle_pane

0xc7b6,	// (0x000a0925) mup2_visualizer_osc_pane_g1

0xecc8,	// (0x000a2e37) popup_number_entry_window_t1_ParamLimits

0xecdb,	// (0x000a2e4a) popup_number_entry_window_t2_ParamLimits

0xeced,	// (0x000a2e5c) popup_number_entry_window_t3_ParamLimits

0x1274,	// (0x000953e3) popup_number_entry_window_t5_ParamLimits

0x1274,	// (0x000953e3) popup_number_entry_window_t5

0xf0cd,	// (0x000a323c) popup_number_entry_window_t_ParamLimits

0xecff,	// (0x000a2e6e) text_title_cp2_ParamLimits

0x3d9e,	// (0x00097f0d) aid_hotspot_pointer_text2_pane

0x3e2c,	// (0x00097f9b) main_viewer_pane_g9_ParamLimits

0x3e2c,	// (0x00097f9b) main_viewer_pane_g9

0xa6d5,	// (0x0009e844) cale_month_pane_t1_ParamLimits

0xa712,	// (0x0009e881) bg_cale_pane_ParamLimits

0xa72a,	// (0x0009e899) list_cale_pane_ParamLimits

0xa73b,	// (0x0009e8aa) listscroll_cale_day_pane_t1

0xa74d,	// (0x0009e8bc) scroll_pane_cp09_ParamLimits

0x3a70,	// (0x00097bdf) main_mup_eq_pane_t1_ParamLimits

0x3a70,	// (0x00097bdf) main_mup_eq_pane_t1

0x3a8a,	// (0x00097bf9) main_mup_eq_pane_t2_ParamLimits

0x3a8a,	// (0x00097bf9) main_mup_eq_pane_t2

0x3aa4,	// (0x00097c13) main_mup_eq_pane_t3_ParamLimits

0x3aa4,	// (0x00097c13) main_mup_eq_pane_t3

0x3abc,	// (0x00097c2b) main_mup_eq_pane_t4_ParamLimits

0x3abc,	// (0x00097c2b) main_mup_eq_pane_t4

0x3ad4,	// (0x00097c43) main_mup_eq_pane_t5_ParamLimits

0x3ad4,	// (0x00097c43) main_mup_eq_pane_t5

0x3aec,	// (0x00097c5b) main_mup_eq_pane_t6_ParamLimits

0x3aec,	// (0x00097c5b) main_mup_eq_pane_t6

0x3b00,	// (0x00097c6f) main_mup_eq_pane_t7_ParamLimits

0x3b00,	// (0x00097c6f) main_mup_eq_pane_t7

0x3b14,	// (0x00097c83) main_mup_eq_pane_t8_ParamLimits

0x3b14,	// (0x00097c83) main_mup_eq_pane_t8

0x3b2a,	// (0x00097c99) main_mup_eq_pane_t9_ParamLimits

0x3b2a,	// (0x00097c99) main_mup_eq_pane_t9

0x3b42,	// (0x00097cb1) main_mup_eq_pane_t10_ParamLimits

0x3b42,	// (0x00097cb1) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x000a35c9) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x000a35c9) main_mup_eq_pane_t

0x3bff,	// (0x00097d6e) mup_equalizer_pane_cp5_ParamLimits

0x3c15,	// (0x00097d84) mup_equalizer_pane_cp6_ParamLimits

0x3c2d,	// (0x00097d9c) mup_equalizer_pane_cp7_ParamLimits

0x1213,	// (0x00095382) main_gallery_pane

0xc7bf,	// (0x000a092e) smil2_volume_pane

0xc7c7,	// (0x000a0936) smil_status_volume_pane_g1_ParamLimits

0xc7da,	// (0x000a0949) smil_status_volume_pane_g2_ParamLimits

0x47a9,	// (0x00098918) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x000a377f) smil_status_volume_pane_g_ParamLimits

0xc92c,	// (0x000a0a9b) bg_popup_window_pane_cp07_ParamLimits

0xc93a,	// (0x000a0aa9) blid_firmament_pane

0x4ec4,	// (0x00099033) aid_size_cell_gallery_ParamLimits

0x4ec4,	// (0x00099033) aid_size_cell_gallery

0x4ed2,	// (0x00099041) grid_gallery_pane_ParamLimits

0x4ed2,	// (0x00099041) grid_gallery_pane

0x4ee2,	// (0x00099051) cell_gallery_pane_ParamLimits

0x4ee2,	// (0x00099051) cell_gallery_pane

0xca5d,	// (0x000a0bcc) bg_cell_gallery_focus_pane_ParamLimits

0xca5d,	// (0x000a0bcc) bg_cell_gallery_focus_pane

0xca6f,	// (0x000a0bde) cell_gallery_pane_g1_ParamLimits

0xca6f,	// (0x000a0bde) cell_gallery_pane_g1

0x4f30,	// (0x0009909f) cell_gallery_pane_g2_ParamLimits

0x4f30,	// (0x0009909f) cell_gallery_pane_g2

0x4f3d,	// (0x000990ac) cell_gallery_pane_g3_ParamLimits

0x4f3d,	// (0x000990ac) cell_gallery_pane_g3

0xca7b,	// (0x000a0bea) cell_gallery_pane_g4_ParamLimits

0xca7b,	// (0x000a0bea) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x000a382d) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x000a382d) cell_gallery_pane_g

0xca87,	// (0x000a0bf6) bg_cell_gallery_focus_pane_g1

0xca8f,	// (0x000a0bfe) bg_cell_gallery_focus_pane_g2

0xca97,	// (0x000a0c06) bg_cell_gallery_focus_pane_g3

0xca9f,	// (0x000a0c0e) bg_cell_gallery_focus_pane_g4

0xcaa7,	// (0x000a0c16) bg_cell_gallery_focus_pane_g5

0xcaaf,	// (0x000a0c1e) bg_cell_gallery_focus_pane_g6

0xcab7,	// (0x000a0c26) bg_cell_gallery_focus_pane_g7

0xcabf,	// (0x000a0c2e) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x000a3836) bg_cell_gallery_focus_pane_g

0xcac7,	// (0x000a0c36) aid_firma_cardinal

0xcadb,	// (0x000a0c4a) blid_firmament_pane_t1

0xcaf2,	// (0x000a0c61) blid_firmament_pane_t2

0xcb09,	// (0x000a0c78) blid_firmament_pane_t3

0xcb20,	// (0x000a0c8f) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x000a3847) blid_firmament_pane_t

0xcb37,	// (0x000a0ca6) blid_sat_info_pane

0xcb47,	// (0x000a0cb6) blid_sat_info_pane_g1

0xcb47,	// (0x000a0cb6) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x000a3850) blid_sat_info_pane_g

0xcb51,	// (0x000a0cc0) blid_sat_info_pane_t1

0xcb5f,	// (0x000a0cce) smil2_volume_content_pane

0xcb68,	// (0x000a0cd7) smil2_volume_pane_g1

0xc6d1,	// (0x000a0840) smil2_volume_content_pane_g1

0xcb70,	// (0x000a0cdf) smil2_volume_content_pane_g2

0xcb79,	// (0x000a0ce8) smil2_volume_content_pane_g3

0xcb82,	// (0x000a0cf1) smil2_volume_content_pane_g4

0xcb8b,	// (0x000a0cfa) smil2_volume_content_pane_g5

0xcb94,	// (0x000a0d03) smil2_volume_content_pane_g6

0xcb9d,	// (0x000a0d0c) smil2_volume_content_pane_g7

0xcba6,	// (0x000a0d15) smil2_volume_content_pane_g8

0xcbaf,	// (0x000a0d1e) smil2_volume_content_pane_g9

0xcbb8,	// (0x000a0d27) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x000a3855) smil2_volume_content_pane_g

0x1a55,	// (0x00095bc4) cale_week_day_heading_pane_t1_ParamLimits

0x1a90,	// (0x00095bff) cale_week_day_heading_pane_t2_ParamLimits

0x1acb,	// (0x00095c3a) cale_week_day_heading_pane_t3_ParamLimits

0x1b06,	// (0x00095c75) cale_week_day_heading_pane_t4_ParamLimits

0x1b41,	// (0x00095cb0) cale_week_day_heading_pane_t5_ParamLimits

0x1b7c,	// (0x00095ceb) cale_week_day_heading_pane_t6_ParamLimits

0x1bb7,	// (0x00095d26) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x000a3341) cale_week_day_heading_pane_t_ParamLimits

0xa350,	// (0x0009e4bf) bg_cale_side_pane_ParamLimits

0x1bf2,	// (0x00095d61) cale_week_time_pane_t1_ParamLimits

0x1c0c,	// (0x00095d7b) cale_week_time_pane_t2_ParamLimits

0x1c26,	// (0x00095d95) cale_week_time_pane_t3_ParamLimits

0x1c40,	// (0x00095daf) cale_week_time_pane_t4_ParamLimits

0x1c5a,	// (0x00095dc9) cale_week_time_pane_t5_ParamLimits

0x1c74,	// (0x00095de3) cale_week_time_pane_t6_ParamLimits

0x1c94,	// (0x00095e03) cale_week_time_pane_t7_ParamLimits

0x1cb6,	// (0x00095e25) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x000a3350) cale_week_time_pane_t_ParamLimits

0x1cda,	// (0x00095e49) cell_cale_week_pane_g2_ParamLimits

0xa350,	// (0x0009e4bf) bg_cale_side_pane_cp01_ParamLimits

0x3084,	// (0x000971f3) cale_month_week_pane_t1_ParamLimits

0x309d,	// (0x0009720c) cale_month_week_pane_t2_ParamLimits

0x30b6,	// (0x00097225) cale_month_week_pane_t3_ParamLimits

0x30cf,	// (0x0009723e) cale_month_week_pane_t4_ParamLimits

0x30e8,	// (0x00097257) cale_month_week_pane_t5_ParamLimits

0x3109,	// (0x00097278) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x000a3429) cale_month_week_pane_t_ParamLimits

0x3276,	// (0x000973e5) cell_cale_month_pane_g1_ParamLimits

0x1213,	// (0x00095382) main_cale_event_viewer_pane

0xec9e,	// (0x000a2e0d) listscroll_cale_event_viewer_pane

0xcbc1,	// (0x000a0d30) list_cale_ev_pane

0xcbc9,	// (0x000a0d38) scroll_pane_cp023

0xcbd5,	// (0x000a0d44) field_cale_ev_pane_ParamLimits

0xcbd5,	// (0x000a0d44) field_cale_ev_pane

0xcbf3,	// (0x000a0d62) field_cale_ev_content_pane_ParamLimits

0xcbf3,	// (0x000a0d62) field_cale_ev_content_pane

0xcbff,	// (0x000a0d6e) field_cale_ev_pane_g1_ParamLimits

0xcbff,	// (0x000a0d6e) field_cale_ev_pane_g1

0xcc0b,	// (0x000a0d7a) field_cale_ev_pane_g2_ParamLimits

0xcc0b,	// (0x000a0d7a) field_cale_ev_pane_g2

0xcc23,	// (0x000a0d92) field_cale_ev_pane_g3_ParamLimits

0xcc23,	// (0x000a0d92) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x000a386a) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x000a386a) field_cale_ev_pane_g

0xcc3b,	// (0x000a0daa) field_cale_ev_pane_t1_ParamLimits

0xcc3b,	// (0x000a0daa) field_cale_ev_pane_t1

0xcc52,	// (0x000a0dc1) field_cale_ev_content_pane_t1_ParamLimits

0xcc52,	// (0x000a0dc1) field_cale_ev_content_pane_t1

0x3d00,	// (0x00097e6f) bg_button_pane_cp01

0x17f7,	// (0x00095966) listscroll_cale_week_pane_ParamLimits

0xa2fa,	// (0x0009e469) popup_toolbar_window_cp01

0xa321,	// (0x0009e490) listscroll_cale_week_pane_t1_ParamLimits

0x17f7,	// (0x00095966) listscroll_cale_day_pane_ParamLimits

0xa2fa,	// (0x0009e469) popup_toolbar_window_cp02

0xa73b,	// (0x0009e8aa) listscroll_cale_day_pane_t1_ParamLimits

0x17f7,	// (0x00095966) main_cale_month_pane_ParamLimits

0x4688,	// (0x000987f7) popup_toolbar_window_cp03_ParamLimits

0x4688,	// (0x000987f7) popup_toolbar_window_cp03

0x3fb4,	// (0x00098123) main_image_pane_g2_ParamLimits

0x3fb4,	// (0x00098123) main_image_pane_g2

0x3fc0,	// (0x0009812f) main_image_pane_g3_ParamLimits

0x3fc0,	// (0x0009812f) main_image_pane_g3

0x0002,

0xf4ec,	// (0x000a365b) main_image_pane_g_ParamLimits

0xf4ec,	// (0x000a365b) main_image_pane_g

0xb085,	// (0x0009f1f4) main_image_pane_t1_ParamLimits

0x3fcc,	// (0x0009813b) main_image_pane_t2_ParamLimits

0x3fcc,	// (0x0009813b) main_image_pane_t2

0x3fde,	// (0x0009814d) main_image_pane_t3_ParamLimits

0x3fde,	// (0x0009814d) main_image_pane_t3

0x3ff0,	// (0x0009815f) main_image_pane_t4_ParamLimits

0x3ff0,	// (0x0009815f) main_image_pane_t4

0x0003,

0xf4f3,	// (0x000a3662) main_image_pane_t_ParamLimits

0xf4f3,	// (0x000a3662) main_image_pane_t

0x4002,	// (0x00098171) popup_image_details_window_cp01

0x400c,	// (0x0009817b) popup_toobar_trans_pane_cp01_ParamLimits

0x400c,	// (0x0009817b) popup_toobar_trans_pane_cp01

0x45d8,	// (0x00098747) popup_image_details_window_ParamLimits

0x45d8,	// (0x00098747) popup_image_details_window

0x45e6,	// (0x00098755) popup_image_focus_window

0x4928,	// (0x00098a97) camera2_autofocus_pane_ParamLimits

0x4928,	// (0x00098a97) camera2_autofocus_pane

0xec9e,	// (0x000a2e0d) bg_popup_sub_pane_cp06

0xcc70,	// (0x000a0ddf) popup_image_focus_window_g1

0xcc78,	// (0x000a0de7) popup_image_focus_window_g2

0xcc80,	// (0x000a0def) popup_image_focus_window_g3

0xcc88,	// (0x000a0df7) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x000a3871) popup_image_focus_window_g

0xcc90,	// (0x000a0dff) popup_image_focus_window_t1

0xcc9e,	// (0x000a0e0d) popup_image_focus_window_t2

0xccae,	// (0x000a0e1d) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x000a387a) popup_image_focus_window_t

0xccbc,	// (0x000a0e2b) camera2_autofocus_pane_g1

0xb523,	// (0x0009f692) bg_tb_trans_pane_cp01

0xccca,	// (0x000a0e39) popup_image_details_window_g1

0xccdd,	// (0x000a0e4c) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x000a388c) popup_image_details_window_g

0xcd06,	// (0x000a0e75) popup_image_details_window_t1

0xcd18,	// (0x000a0e87) popup_image_details_window_t2

0xcd31,	// (0x000a0ea0) popup_image_details_window_t3

0xcd45,	// (0x000a0eb4) popup_image_details_window_t4

0xcd60,	// (0x000a0ecf) popup_image_details_window_t5

0x0004,

0xf724,	// (0x000a3893) popup_image_details_window_t

0xa1d1,	// (0x0009e340) bg_calc_paper_pane_ParamLimits

0x1213,	// (0x00095382) grid_highlight_pane_cp013

0x157e,	// (0x000956ed) list_calc_pane_ParamLimits

0x1590,	// (0x000956ff) scroll_pane_cp024

0xa1e5,	// (0x0009e354) bg_calc_display_pane_ParamLimits

0x1598,	// (0x00095707) calc_display_pane_t1_ParamLimits

0x15ad,	// (0x0009571c) calc_display_pane_t2_ParamLimits

0x15c2,	// (0x00095731) calc_display_pane_t3_ParamLimits

0xf154,	// (0x000a32c3) calc_display_pane_t_ParamLimits

0x169e,	// (0x0009580d) cell_calc_pane_g2

0x0001,

0xf171,	// (0x000a32e0) cell_calc_pane_g

0x16a7,	// (0x00095816) cell_calc_pane_t1

0xa244,	// (0x0009e3b3) grid_highlight_pane_cp02_ParamLimits

0xa25a,	// (0x0009e3c9) toolbar_button_pane_cp01_ParamLimits

0xa25a,	// (0x0009e3c9) toolbar_button_pane_cp01

0xb0ca,	// (0x0009f239) temp_image_control_pane_ParamLimits

0xb0ca,	// (0x0009f239) temp_image_control_pane

0x4550,	// (0x000986bf) main_mp3_pane

0xcd7a,	// (0x000a0ee9) temp_image_control_pane_g1_ParamLimits

0xcd7a,	// (0x000a0ee9) temp_image_control_pane_g1

0xcd88,	// (0x000a0ef7) temp_image_control_pane_g2_ParamLimits

0xcd88,	// (0x000a0ef7) temp_image_control_pane_g2

0xcd9a,	// (0x000a0f09) temp_image_control_pane_g3_ParamLimits

0xcd9a,	// (0x000a0f09) temp_image_control_pane_g3

0x4f7a,	// (0x000990e9) temp_image_control_pane_g4_ParamLimits

0x4f7a,	// (0x000990e9) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x000a389e) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x000a389e) temp_image_control_pane_g

0xcd7a,	// (0x000a0ee9) main_mp3_pane_g1

0x4f8b,	// (0x000990fa) main_mp3_pane_g2

0x0007,

0xf738,	// (0x000a38a7) main_mp3_pane_g

0xcddd,	// (0x000a0f4c) main_mp3_pane_t1

0xa3ab,	// (0x0009e51a) main_camera_pane_g8_ParamLimits

0xa3ab,	// (0x0009e51a) main_camera_pane_g8

0x1f7a,	// (0x000960e9) main_video_pane_g7_ParamLimits

0x1f7a,	// (0x000960e9) main_video_pane_g7

0x4a70,	// (0x00098bdf) main_camera2_pane_t7_ParamLimits

0x4a70,	// (0x00098bdf) main_camera2_pane_t7

0xa4f3,	// (0x0009e662) scroll_pane_cp025_ParamLimits

0xa4f3,	// (0x0009e662) scroll_pane_cp025

0xa507,	// (0x0009e676) scroll_pane_cp026_ParamLimits

0xa507,	// (0x0009e676) scroll_pane_cp026

0xa516,	// (0x0009e685) wml_content_pane_ParamLimits

0x1213,	// (0x00095382) main_touch_calib_pane

0x502f,	// (0x0009919e) main_touch_calib_pane_g1

0x503b,	// (0x000991aa) main_touch_calib_pane_g2

0x5047,	// (0x000991b6) main_touch_calib_pane_g3

0x5053,	// (0x000991c2) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x000a38c5) main_touch_calib_pane_g

0x505f,	// (0x000991ce) main_touch_calib_pane_t1

0x5078,	// (0x000991e7) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x000a38ce) main_touch_calib_pane_t

0xaca6,	// (0x0009ee15) mup_progress_pane_cp02

0xacdb,	// (0x0009ee4a) navi_pane_g1

0xad96,	// (0x0009ef05) navi_pane_mp_t3

0x4550,	// (0x000986bf) main_mp3_pane_ParamLimits

0x46c5,	// (0x00098834) navi_pane_ParamLimits

0xcd7a,	// (0x000a0ee9) main_mp3_pane_g1_ParamLimits

0x4f8b,	// (0x000990fa) main_mp3_pane_g2_ParamLimits

0x4f97,	// (0x00099106) main_mp3_pane_g3_ParamLimits

0x4f97,	// (0x00099106) main_mp3_pane_g3

0x4fa3,	// (0x00099112) main_mp3_pane_g4_ParamLimits

0x4fa3,	// (0x00099112) main_mp3_pane_g4

0xcdaa,	// (0x000a0f19) main_mp3_pane_g5_ParamLimits

0xcdaa,	// (0x000a0f19) main_mp3_pane_g5

0xcdb8,	// (0x000a0f27) main_mp3_pane_g6_ParamLimits

0xcdb8,	// (0x000a0f27) main_mp3_pane_g6

0xcdc5,	// (0x000a0f34) main_mp3_pane_g7_ParamLimits

0xcdc5,	// (0x000a0f34) main_mp3_pane_g7

0xcdd1,	// (0x000a0f40) main_mp3_pane_g8_ParamLimits

0xcdd1,	// (0x000a0f40) main_mp3_pane_g8

0xf738,	// (0x000a38a7) main_mp3_pane_g_ParamLimits

0x4faf,	// (0x0009911e) main_mp3_pane_t2

0x4fbf,	// (0x0009912e) main_mp3_pane_t3

0xcdeb,	// (0x000a0f5a) main_mp3_pane_t4

0xcdf9,	// (0x000a0f68) main_mp3_pane_t5

0x0005,

0xf749,	// (0x000a38b8) main_mp3_pane_t

0xce07,	// (0x000a0f76) mup_progress_pane_cp01

0x0f90,	// (0x000950ff) aid_zoom_text_secondary2

0xcbc1,	// (0x000a0d30) list_cale_ev2_pane

0xcbc9,	// (0x000a0d38) scroll_pane_cp023_ParamLimits

0x50d3,	// (0x00099242) field_cale_ev2_pane_ParamLimits

0x50d3,	// (0x00099242) field_cale_ev2_pane

0x50fc,	// (0x0009926b) field_cale_ev2_pane_g1_ParamLimits

0x50fc,	// (0x0009926b) field_cale_ev2_pane_g1

0x5108,	// (0x00099277) field_cale_ev2_pane_g2_ParamLimits

0x5108,	// (0x00099277) field_cale_ev2_pane_g2

0x5120,	// (0x0009928f) field_cale_ev2_pane_g3_ParamLimits

0x5120,	// (0x0009928f) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x000a38d9) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x000a38d9) field_cale_ev2_pane_g

0xce1b,	// (0x000a0f8a) field_cale_ev2_pane_t1_ParamLimits

0xce1b,	// (0x000a0f8a) field_cale_ev2_pane_t1

0xce32,	// (0x000a0fa1) field_cale_ev2_pane_t2_ParamLimits

0xce32,	// (0x000a0fa1) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x000a38e2) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x000a38e2) field_cale_ev2_pane_t

0x3e94,	// (0x00098003) main_postcard_pane_g5_ParamLimits

0x3e94,	// (0x00098003) main_postcard_pane_g5

0x3ea2,	// (0x00098011) main_postcard_pane_g6_ParamLimits

0x3ea2,	// (0x00098011) main_postcard_pane_g6

0x1dc4,	// (0x00095f33) camera2_autofocus_pane_cp_ParamLimits

0x1dc4,	// (0x00095f33) camera2_autofocus_pane_cp

0x4550,	// (0x000986bf) main_mup3_pane

0x5138,	// (0x000992a7) main_mup3_pane_g1_ParamLimits

0x5138,	// (0x000992a7) main_mup3_pane_g1

0x5159,	// (0x000992c8) main_mup3_pane_g2_ParamLimits

0x5159,	// (0x000992c8) main_mup3_pane_g2

0x51d1,	// (0x00099340) main_mup3_pane_g3_ParamLimits

0x51d1,	// (0x00099340) main_mup3_pane_g3

0x5214,	// (0x00099383) main_mup3_pane_g4_ParamLimits

0x5214,	// (0x00099383) main_mup3_pane_g4

0x5257,	// (0x000993c6) main_mup3_pane_g5_ParamLimits

0x5257,	// (0x000993c6) main_mup3_pane_g5

0x529a,	// (0x00099409) main_mup3_pane_g6_ParamLimits

0x529a,	// (0x00099409) main_mup3_pane_g6

0xce67,	// (0x000a0fd6) main_mup3_pane_g7_ParamLimits

0xce67,	// (0x000a0fd6) main_mup3_pane_g7

0x0007,

0xf783,	// (0x000a38f2) main_mup3_pane_g_ParamLimits

0xf783,	// (0x000a38f2) main_mup3_pane_g

0x5310,	// (0x0009947f) main_mup3_pane_t1_ParamLimits

0x5310,	// (0x0009947f) main_mup3_pane_t1

0x537f,	// (0x000994ee) main_mup3_pane_t2_ParamLimits

0x537f,	// (0x000994ee) main_mup3_pane_t2

0x5448,	// (0x000995b7) main_mup3_pane_t4_ParamLimits

0x5448,	// (0x000995b7) main_mup3_pane_t4

0x5496,	// (0x00099605) main_mup3_pane_t5_ParamLimits

0x5496,	// (0x00099605) main_mup3_pane_t5

0x5546,	// (0x000996b5) main_mup3_pane_t6_ParamLimits

0x5546,	// (0x000996b5) main_mup3_pane_t6

0x0005,

0xf794,	// (0x000a3903) main_mup3_pane_t_ParamLimits

0xf794,	// (0x000a3903) main_mup3_pane_t

0x55f2,	// (0x00099761) mup3_progress_pane_ParamLimits

0x55f2,	// (0x00099761) mup3_progress_pane

0x5670,	// (0x000997df) popup_mup3_control_window_ParamLimits

0x5670,	// (0x000997df) popup_mup3_control_window

0xce75,	// (0x000a0fe4) popup_mup3_text_window

0x5689,	// (0x000997f8) mup3_progress_pane_t1

0x56a8,	// (0x00099817) mup3_progress_pane_t2

0xce7d,	// (0x000a0fec) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x000a3910) mup3_progress_pane_t

0xce9a,	// (0x000a1009) mup_progress_pane_cp03

0xec9e,	// (0x000a2e0d) bg_tb_trans_pane_cp04

0x56c7,	// (0x00099836) mup3_volume_pane

0x56cf,	// (0x0009983e) popup_mup3_control_window_g1

0x56d8,	// (0x00099847) mup3_volume_pane_g1

0x56e1,	// (0x00099850) mup3_volume_pane_g2

0x56ea,	// (0x00099859) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x000a3917) mup3_volume_pane_g

0xec9e,	// (0x000a2e0d) bg_tb_trans_pane_cp03

0xceaa,	// (0x000a1019) popup_mup3_text_window_g1

0xceb2,	// (0x000a1021) popup_mup3_text_window_t1

0xa22d,	// (0x0009e39c) list_calc_item_pane_g1_ParamLimits

0xc89a,	// (0x000a0a09) mup_volume_pane_cp_g1

0x5091,	// (0x00099200) main_touch_calib_pane_t3

0x50a7,	// (0x00099216) main_touch_calib_pane_t4

0x50bd,	// (0x0009922c) main_touch_calib_pane_t5

0x0f48,	// (0x000950b7) aid_cell_size_toolbar2

0x0f50,	// (0x000950bf) aid_popup3_width_pane

0x0e5d,	// (0x00094fcc) aid_zoom_text_msg_primary

0x1d91,	// (0x00095f00) vorec_t7

0xa1f1,	// (0x0009e360) bg_calc_paper_pane_g1_ParamLimits

0xa1fd,	// (0x0009e36c) bg_calc_paper_pane_g2_ParamLimits

0xa209,	// (0x0009e378) bg_calc_paper_pane_g3_ParamLimits

0xa215,	// (0x0009e384) bg_calc_paper_pane_g4_ParamLimits

0xa221,	// (0x0009e390) bg_calc_paper_pane_g5_ParamLimits

0x1601,	// (0x00095770) bg_calc_paper_pane_g6_ParamLimits

0x1612,	// (0x00095781) bg_calc_paper_pane_g7_ParamLimits

0x1623,	// (0x00095792) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x000a32ca) bg_calc_paper_pane_g_ParamLimits

0x1634,	// (0x000957a3) calc_bg_paper_pane_g9_ParamLimits

0x1eab,	// (0x0009601a) image_qvga_pane_ParamLimits

0x1eab,	// (0x0009601a) image_qvga_pane

0xa120,	// (0x0009e28f) bg_popup_sub_pane_cp04_ParamLimits

0xb001,	// (0x0009f170) popup_mup_playback_window_g1_ParamLimits

0xb00d,	// (0x0009f17c) popup_mup_playback_window_t1_ParamLimits

0xb022,	// (0x0009f191) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x000a3656) popup_mup_playback_window_t_ParamLimits

0x4b9f,	// (0x00098d0e) main_mup2_pane_g3_ParamLimits

0x4b9f,	// (0x00098d0e) main_mup2_pane_g3

0x2270,	// (0x000963df) popup_toolbar_window_cp04

0xb404,	// (0x0009f573) popup_call2_audio_second_window_g3_ParamLimits

0xb404,	// (0x0009f573) popup_call2_audio_second_window_g3

0xbd4a,	// (0x0009feb9) popup_call2_audio_first_window_g4_ParamLimits

0xbd4a,	// (0x0009feb9) popup_call2_audio_first_window_g4

0xc3c9,	// (0x000a0538) popup_call2_audio_in_window_g4_ParamLimits

0xc3c9,	// (0x000a0538) popup_call2_audio_in_window_g4

0x3fa7,	// (0x00098116) aid_area_sk_bg_cut_ParamLimits

0x3fa7,	// (0x00098116) aid_area_sk_bg_cut

0xb037,	// (0x0009f1a6) aid_area_sk_bg_cut_2_ParamLimits

0xb037,	// (0x0009f1a6) aid_area_sk_bg_cut_2

0x4f20,	// (0x0009908f) aid_placing_details_win

0x4f28,	// (0x00099097) aid_placing_details_win_2

0xccbc,	// (0x000a0e2b) camera2_autofocus_pane_g1_ParamLimits

0x119f,	// (0x0009530e) popup_fixed_preview_cale_window_ParamLimits

0x119f,	// (0x0009530e) popup_fixed_preview_cale_window

0xae1c,	// (0x0009ef8b) navi_slider_pane_g3

0xae25,	// (0x0009ef94) navi_slider_pane_g4

0xae2e,	// (0x0009ef9d) navi_slider_pane_g5

0xae1c,	// (0x0009ef8b) navi_slider_pane_g6

0x3804,	// (0x00097973) navi_slider_pane_g7

0xaf41,	// (0x0009f0b0) mup_scale_pane_g3

0xaf4a,	// (0x0009f0b9) mup_scale_pane_g4

0xaf53,	// (0x0009f0c2) mup_scale_pane_g5

0x3c45,	// (0x00097db4) mup_scale_pane_g6

0x3c4e,	// (0x00097dbd) mup_scale_pane_g7

0xae1c,	// (0x0009ef8b) cams2_slider_pane_g3

0xc91c,	// (0x000a0a8b) cams2_slider_pane_g4

0x4e78,	// (0x00098fe7) cams2_slider_pane_g5

0xae1c,	// (0x0009ef8b) cams2_slider_pane_g6

0x4e80,	// (0x00098fef) cams2_slider_pane_g7

0xcb47,	// (0x000a0cb6) camera2_autofocus_pane_cp_g1

0xc733,	// (0x000a08a2) bg_popup_preview_window_pane_cp02_ParamLimits

0xc733,	// (0x000a08a2) bg_popup_preview_window_pane_cp02

0xcec0,	// (0x000a102f) list_fp_cale_pane_ParamLimits

0xcec0,	// (0x000a102f) list_fp_cale_pane

0xcecc,	// (0x000a103b) popup_fixed_preview_cale_window_t1_ParamLimits

0xcecc,	// (0x000a103b) popup_fixed_preview_cale_window_t1

0x56f3,	// (0x00099862) popup_fixed_preview_cale_window_t2_ParamLimits

0x56f3,	// (0x00099862) popup_fixed_preview_cale_window_t2

0x5708,	// (0x00099877) popup_fixed_preview_cale_window_t3_ParamLimits

0x5708,	// (0x00099877) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x000a391e) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x000a391e) popup_fixed_preview_cale_window_t

0x571d,	// (0x0009988c) list_single_fp_cale_pane_ParamLimits

0x571d,	// (0x0009988c) list_single_fp_cale_pane

0xceea,	// (0x000a1059) list_single_fp_cale_pane_g1_ParamLimits

0xceea,	// (0x000a1059) list_single_fp_cale_pane_g1

0xcef6,	// (0x000a1065) list_single_fp_cale_pane_g2_ParamLimits

0xcef6,	// (0x000a1065) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x000a3925) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x000a3925) list_single_fp_cale_pane_g

0xcf0f,	// (0x000a107e) list_single_fp_cale_pane_t1_ParamLimits

0xcf0f,	// (0x000a107e) list_single_fp_cale_pane_t1

0xcf21,	// (0x000a1090) list_single_fp_cale_pane_t2_ParamLimits

0xcf21,	// (0x000a1090) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x000a392c) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x000a392c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1213,	// (0x00095382) main_dialer_pane

0x5730,	// (0x0009989f) aid_cell_size_keypad

0x573a,	// (0x000998a9) dialer_ne_pane

0x5744,	// (0x000998b3) grid_dialer_command_1_pane

0x574c,	// (0x000998bb) grid_dialer_command_2_pane

0x5754,	// (0x000998c3) grid_dialer_keypad_pane

0x5766,	// (0x000998d5) bg_popup_call_pane_cp06_ParamLimits

0x5766,	// (0x000998d5) bg_popup_call_pane_cp06

0x5772,	// (0x000998e1) dialer_ne_clear_pane_ParamLimits

0x5772,	// (0x000998e1) dialer_ne_clear_pane

0xcf54,	// (0x000a10c3) dialer_ne_pane_g1

0xcf5c,	// (0x000a10cb) dialer_ne_pane_t1_ParamLimits

0xcf5c,	// (0x000a10cb) dialer_ne_pane_t1

0x577e,	// (0x000998ed) dialer_ne_pane_t2_ParamLimits

0x577e,	// (0x000998ed) dialer_ne_pane_t2

0x579b,	// (0x0009990a) dialer_ne_pane_t3_ParamLimits

0x579b,	// (0x0009990a) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x000a3931) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x000a3931) dialer_ne_pane_t

0x57bf,	// (0x0009992e) dialer_ne_pane_t3_copy1_ParamLimits

0x57bf,	// (0x0009992e) dialer_ne_pane_t3_copy1

0x57e3,	// (0x00099952) cell_dialer_keypad_pane_ParamLimits

0x57e3,	// (0x00099952) cell_dialer_keypad_pane

0x57fa,	// (0x00099969) cell_dialer_command_1_pane_ParamLimits

0x57fa,	// (0x00099969) cell_dialer_command_1_pane

0x5810,	// (0x0009997f) cell_dialer_command_2_pane_ParamLimits

0x5810,	// (0x0009997f) cell_dialer_command_2_pane

0xcf6e,	// (0x000a10dd) bg_button_pane_cp02_ParamLimits

0xcf6e,	// (0x000a10dd) bg_button_pane_cp02

0x581f,	// (0x0009998e) cell_dialer_keypad_pane_g1_ParamLimits

0x581f,	// (0x0009998e) cell_dialer_keypad_pane_g1

0xcf6e,	// (0x000a10dd) bg_button_pane_cp03_ParamLimits

0xcf6e,	// (0x000a10dd) bg_button_pane_cp03

0x5834,	// (0x000999a3) cell_dialer_command_1_pane_g1_ParamLimits

0x5834,	// (0x000999a3) cell_dialer_command_1_pane_g1

0xcf7a,	// (0x000a10e9) bg_button_pane_cp04

0x5848,	// (0x000999b7) cell_dialer_command_2_pane_g1

0xae0b,	// (0x0009ef7a) bg_button_pane_cp06

0xcf82,	// (0x000a10f1) dialer_ne_clear_pane_g1

0xace7,	// (0x0009ee56) navi_pane_g2

0xad15,	// (0x0009ee84) navi_pane_g3

0x0002,

0xf3ea,	// (0x000a3559) navi_pane_g

0xada4,	// (0x0009ef13) navi_pane_mv_g2

0xadcb,	// (0x0009ef3a) navi_pane_mv_g5

0x37cf,	// (0x0009793e) navi_pane_mv_t1

0xa1e5,	// (0x0009e354) main_clock2_pane

0x5886,	// (0x000999f5) main_clock2_list_pane_ParamLimits

0x5886,	// (0x000999f5) main_clock2_list_pane

0x58ae,	// (0x00099a1d) main_clock2_pane_t1_ParamLimits

0x58ae,	// (0x00099a1d) main_clock2_pane_t1

0x58d0,	// (0x00099a3f) main_clock2_pane_t2_ParamLimits

0x58d0,	// (0x00099a3f) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000a3938) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000a3938) main_clock2_pane_t

0x592b,	// (0x00099a9a) popup_clock_analogue_window_cp03_ParamLimits

0x592b,	// (0x00099a9a) popup_clock_analogue_window_cp03

0x5949,	// (0x00099ab8) popup_clock_digital_window_cp02_ParamLimits

0x5949,	// (0x00099ab8) popup_clock_digital_window_cp02

0x59b6,	// (0x00099b25) main_clock2_list_single_pane_ParamLimits

0x59b6,	// (0x00099b25) main_clock2_list_single_pane

0xae0b,	// (0x0009ef7a) list_highlight_pane_cp05

0xcfa0,	// (0x000a110f) main_clock2_list_single_pane_t1

0x2270,	// (0x000963df) popup_toolbar_window_cp04_ParamLimits

0x4f4a,	// (0x000990b9) camera2_autofocus_pane_g2_ParamLimits

0x4f4a,	// (0x000990b9) camera2_autofocus_pane_g2

0x4f56,	// (0x000990c5) camera2_autofocus_pane_g3_ParamLimits

0x4f56,	// (0x000990c5) camera2_autofocus_pane_g3

0x4f62,	// (0x000990d1) camera2_autofocus_pane_g4_ParamLimits

0x4f62,	// (0x000990d1) camera2_autofocus_pane_g4

0x4f6e,	// (0x000990dd) camera2_autofocus_pane_g5_ParamLimits

0x4f6e,	// (0x000990dd) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x000a3881) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x000a3881) camera2_autofocus_pane_g

0xce47,	// (0x000a0fb6) camera2_autofocus_pane_cp_g2

0xce4f,	// (0x000a0fbe) camera2_autofocus_pane_cp_g3

0xce57,	// (0x000a0fc6) camera2_autofocus_pane_cp_g4

0xce5f,	// (0x000a0fce) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x000a38e7) camera2_autofocus_pane_cp_g

0x575e,	// (0x000998cd) popup_dialer_spcha_window

0xec9e,	// (0x000a2e0d) bg_popup_sub_pane_cp07

0xcfae,	// (0x000a111d) list_spcha_pane

0xcfb6,	// (0x000a1125) list_single_spcha_pane_ParamLimits

0xcfb6,	// (0x000a1125) list_single_spcha_pane

0xec9e,	// (0x000a2e0d) list_highlight_pane_cp06

0xcfc7,	// (0x000a1136) list_single_spcha_pane_t1

0xc173,	// (0x000a02e2) popup_call2_audio_out_window_g4_ParamLimits

0xc173,	// (0x000a02e2) popup_call2_audio_out_window_g4

0x1213,	// (0x00095382) main_imed2_pane

0x45ee,	// (0x0009875d) popup_imed_adjust2_window

0x4601,	// (0x00098770) popup_imed_trans_window_ParamLimits

0x4601,	// (0x00098770) popup_imed_trans_window

0xc985,	// (0x000a0af4) popup_blid_sat_info2_window_t1

0xc993,	// (0x000a0b02) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x000a3816) popup_blid_sat_info2_window_t

0x5a60,	// (0x00099bcf) aid_size_cell_colour_35

0x5a7a,	// (0x00099be9) aid_size_cell_colour_112

0x5a91,	// (0x00099c00) aid_size_cell_effect

0xb523,	// (0x0009f692) bg_tb_trans_pane_cp02

0xb531,	// (0x0009f6a0) heading_imed_pane

0x5aab,	// (0x00099c1a) listscroll_imed_pane

0xcfd5,	// (0x000a1144) heading_imed_pane_g1

0xcfdd,	// (0x000a114c) heading_imed_pane_t1

0xcfeb,	// (0x000a115a) grid_imed_colour_35_pane_ParamLimits

0xcfeb,	// (0x000a115a) grid_imed_colour_35_pane

0x5ab7,	// (0x00099c26) grid_imed_effect_pane

0xd002,	// (0x000a1171) list_imed_aspect_pane

0x5ac7,	// (0x00099c36) scroll_pane_cp027_ParamLimits

0x5ac7,	// (0x00099c36) scroll_pane_cp027

0x5ad3,	// (0x00099c42) cell_imed_effect_pane_ParamLimits

0x5ad3,	// (0x00099c42) cell_imed_effect_pane

0xd00a,	// (0x000a1179) cell_imed_colour_pane_ParamLimits

0xd00a,	// (0x000a1179) cell_imed_colour_pane

0xd04c,	// (0x000a11bb) cell_imed_colour_pane_g1_ParamLimits

0xd04c,	// (0x000a11bb) cell_imed_colour_pane_g1

0xd05d,	// (0x000a11cc) hgihlgiht_grid_pane_cp016_ParamLimits

0xd05d,	// (0x000a11cc) hgihlgiht_grid_pane_cp016

0x5aeb,	// (0x00099c5a) cell_imed_effect_pane_g1

0x5af3,	// (0x00099c62) grid_highlight_pane_cp017

0xd06e,	// (0x000a11dd) list_imed_single_pane_ParamLimits

0xd06e,	// (0x000a11dd) list_imed_single_pane

0xec9e,	// (0x000a2e0d) list_highlight_pane_cp07

0xd083,	// (0x000a11f2) list_imed_aspect_pane_comp1_t1

0xc73f,	// (0x000a08ae) bg_tb_trans_pane_cp05

0xd0a5,	// (0x000a1214) popup_imed_adjust2_window_g1

0xd0cc,	// (0x000a123b) popup_imed_adjust2_window_t1

0xd0e4,	// (0x000a1253) slider_imed_adjust_pane

0xd0f8,	// (0x000a1267) slider_imed_adjust_pane_g1

0xd108,	// (0x000a1277) slider_imed_adjust_pane_g2

0xd118,	// (0x000a1287) slider_imed_adjust_pane_g3

0xd129,	// (0x000a1298) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000a3955) slider_imed_adjust_pane_g

0x5afc,	// (0x00099c6b) aid_size_cell_clipart2

0x5b08,	// (0x00099c77) grid_imed_clipart_pane

0xd13a,	// (0x000a12a9) scroll_pane_cp031

0x5b12,	// (0x00099c81) cell_imed_clipart_pane_ParamLimits

0x5b12,	// (0x00099c81) cell_imed_clipart_pane

0x5b34,	// (0x00099ca3) cell_imed_clipart_pane_g1

0xec9e,	// (0x000a2e0d) grid_highlight_pane_cp014

0x5892,	// (0x00099a01) main_clock2_pane_g1_ParamLimits

0x5892,	// (0x00099a01) main_clock2_pane_g1

0x5961,	// (0x00099ad0) aid_call2_pane_cp10

0x5973,	// (0x00099ae2) aid_call_pane_cp10

0xac48,	// (0x0009edb7) popup_clock_analogue_window_cp10_g1

0xac48,	// (0x0009edb7) popup_clock_analogue_window_cp10_g2

0x5985,	// (0x00099af4) popup_clock_analogue_window_cp10_g3

0x5985,	// (0x00099af4) popup_clock_analogue_window_cp10_g4

0xac48,	// (0x0009edb7) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000a3943) popup_clock_analogue_window_cp10_g

0x5997,	// (0x00099b06) popup_clock_analogue_window_cp10_t1

0x59c8,	// (0x00099b37) clock_digital_number_pane_cp10_ParamLimits

0x59c8,	// (0x00099b37) clock_digital_number_pane_cp10

0x59e0,	// (0x00099b4f) clock_digital_number_pane_cp11_ParamLimits

0x59e0,	// (0x00099b4f) clock_digital_number_pane_cp11

0x59f8,	// (0x00099b67) clock_digital_number_pane_cp12_ParamLimits

0x59f8,	// (0x00099b67) clock_digital_number_pane_cp12

0x5a10,	// (0x00099b7f) clock_digital_number_pane_cp13_ParamLimits

0x5a10,	// (0x00099b7f) clock_digital_number_pane_cp13

0x5a28,	// (0x00099b97) clock_digital_separator_pane_cp10_ParamLimits

0x5a28,	// (0x00099b97) clock_digital_separator_pane_cp10

0x5a40,	// (0x00099baf) popup_clock_digital_window_cp02_t1_ParamLimits

0x5a40,	// (0x00099baf) popup_clock_digital_window_cp02_t1

0xa118,	// (0x0009e287) clock_digital_number_pane_cp10_g1

0xa118,	// (0x0009e287) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000a395e) clock_digital_number_pane_cp10_g

0xa118,	// (0x0009e287) clock_digital_separator_pane_cp10_g1

0xa118,	// (0x0009e287) clock_digital_separator_pane_g2_cp10

0xadd3,	// (0x0009ef42) navi_pane_vded_g4

0xaddc,	// (0x0009ef4b) navi_pane_vded_g5

0xade5,	// (0x0009ef54) navi_pane_vded_t1

0x1213,	// (0x00095382) main_vded_pane

0x5b3d,	// (0x00099cac) main_vded_pane_g1

0x5b49,	// (0x00099cb8) main_vded_pane_g2

0x5b53,	// (0x00099cc2) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000a3963) main_vded_pane_g

0x5b5d,	// (0x00099ccc) main_vded_pane_t1

0x5b6b,	// (0x00099cda) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000a396a) main_vded_pane_t

0x5b79,	// (0x00099ce8) vded_slider_pane

0x5b83,	// (0x00099cf2) vded_video_pane

0xd142,	// (0x000a12b1) vded_video_pane_g1

0x5b8d,	// (0x00099cfc) vded_video_pane_g2

0xcb47,	// (0x000a0cb6) vded_video_pane_g3

0x0002,

0xf800,	// (0x000a396f) vded_video_pane_g

0xd14c,	// (0x000a12bb) vded_slider_pane_g1

0xc89a,	// (0x000a0a09) vded_slider_pane_g2

0xd155,	// (0x000a12c4) vded_slider_pane_g3

0xd15e,	// (0x000a12cd) vded_slider_pane_g4

0xd167,	// (0x000a12d6) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000a3976) vded_slider_pane_g

0x5662,	// (0x000997d1) mup3_rocker_pane_ParamLimits

0x5662,	// (0x000997d1) mup3_rocker_pane

0x5b96,	// (0x00099d05) mup3_control_keys_pane_g1

0x5b9e,	// (0x00099d0d) mup3_control_keys_pane_g2

0x5ba6,	// (0x00099d15) mup3_control_keys_pane_g3

0x5bae,	// (0x00099d1d) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000a3981) mup3_control_keys_pane_g

0x11c7,	// (0x00095336) popup_toolbar2_fixed_window_cp01_ParamLimits

0x11c7,	// (0x00095336) popup_toolbar2_fixed_window_cp01

0x567c,	// (0x000997eb) popup_toolbar2_fixed_window_cp02_ParamLimits

0x567c,	// (0x000997eb) popup_toolbar2_fixed_window_cp02

0xb590,	// (0x0009f6ff) popup_call2_audio_second_window_t4_ParamLimits

0xb590,	// (0x0009f6ff) popup_call2_audio_second_window_t4

0xbfe0,	// (0x000a014f) popup_call2_audio_first_window_t6_ParamLimits

0xbfe0,	// (0x000a014f) popup_call2_audio_first_window_t6

0xc276,	// (0x000a03e5) popup_call2_audio_out_window_t6_ParamLimits

0xc276,	// (0x000a03e5) popup_call2_audio_out_window_t6

0x1213,	// (0x00095382) main_vitu_pane

0x5bbe,	// (0x00099d2d) aid_size_cell_itu_ParamLimits

0x5bbe,	// (0x00099d2d) aid_size_cell_itu

0xedb1,	// (0x000a2f20) bg_popup_window_pane_cp08_ParamLimits

0xedb1,	// (0x000a2f20) bg_popup_window_pane_cp08

0x5bcc,	// (0x00099d3b) field_vitu_entry_pane_ParamLimits

0x5bcc,	// (0x00099d3b) field_vitu_entry_pane

0x5bdb,	// (0x00099d4a) grid_vitu_function_pane_ParamLimits

0x5bdb,	// (0x00099d4a) grid_vitu_function_pane

0x5beb,	// (0x00099d5a) grid_vitu_itu_pane_ParamLimits

0x5beb,	// (0x00099d5a) grid_vitu_itu_pane

0x5bfb,	// (0x00099d6a) cell_vitu_itu_pane_ParamLimits

0x5bfb,	// (0x00099d6a) cell_vitu_itu_pane

0x5c10,	// (0x00099d7f) cell_vitu_function_pane_ParamLimits

0x5c10,	// (0x00099d7f) cell_vitu_function_pane

0xb523,	// (0x0009f692) bg_popup_sub_pane_cp08_ParamLimits

0xb523,	// (0x0009f692) bg_popup_sub_pane_cp08

0x5c22,	// (0x00099d91) field_vitu_entry_pane_t1_ParamLimits

0x5c22,	// (0x00099d91) field_vitu_entry_pane_t1

0xd188,	// (0x000a12f7) field_vitu_entry_pane_t2_ParamLimits

0xd188,	// (0x000a12f7) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000a398f) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000a398f) field_vitu_entry_pane_t

0xd1a5,	// (0x000a1314) bg_button_pane_cp05_ParamLimits

0xd1a5,	// (0x000a1314) bg_button_pane_cp05

0x5c3e,	// (0x00099dad) cell_vitu_itu_pane_g1

0x5c56,	// (0x00099dc5) cell_vitu_itu_pane_t1_ParamLimits

0x5c56,	// (0x00099dc5) cell_vitu_itu_pane_t1

0x5c68,	// (0x00099dd7) cell_vitu_itu_pane_t2_ParamLimits

0x5c68,	// (0x00099dd7) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000a3994) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000a3994) cell_vitu_itu_pane_t

0xd1b3,	// (0x000a1322) bg_button_pane_cp07

0x5c9d,	// (0x00099e0c) cell_vitu_function_pane_g1

0x14a5,	// (0x00095614) main_calc_pane_g1

0x0f84,	// (0x000950f3) aid_visual_content_pane

0x1213,	// (0x00095382) main_vradio_pane

0x5ca6,	// (0x00099e15) main_vradio_pane_g1_ParamLimits

0x5ca6,	// (0x00099e15) main_vradio_pane_g1

0xd1bd,	// (0x000a132c) main_vradio_pane_g2_ParamLimits

0xd1bd,	// (0x000a132c) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000a399b) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000a399b) main_vradio_pane_g

0x5cb6,	// (0x00099e25) main_vradio_pane_t1_ParamLimits

0x5cb6,	// (0x00099e25) main_vradio_pane_t1

0x5cc8,	// (0x00099e37) main_vradio_pane_t2_ParamLimits

0x5cc8,	// (0x00099e37) main_vradio_pane_t2

0xd1ca,	// (0x000a1339) main_vradio_pane_t3_ParamLimits

0xd1ca,	// (0x000a1339) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000a39a0) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000a39a0) main_vradio_pane_t

0x5cda,	// (0x00099e49) vradio_rocker_control_pane_ParamLimits

0x5cda,	// (0x00099e49) vradio_rocker_control_pane

0x5ce6,	// (0x00099e55) vradio_station_info_pane_ParamLimits

0x5ce6,	// (0x00099e55) vradio_station_info_pane

0xd1de,	// (0x000a134d) vradio_frequency_info_pane_ParamLimits

0xd1de,	// (0x000a134d) vradio_frequency_info_pane

0xcb47,	// (0x000a0cb6) vradio_station_info_pane_g1

0xd1ed,	// (0x000a135c) vradio_station_info_pane_t1_ParamLimits

0xd1ed,	// (0x000a135c) vradio_station_info_pane_t1

0xd20f,	// (0x000a137e) vradio_station_info_pane_t2_ParamLimits

0xd20f,	// (0x000a137e) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000a39a7) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000a39a7) vradio_station_info_pane_t

0xd221,	// (0x000a1390) vradio_tuning_pane

0xd229,	// (0x000a1398) vradio_rocker_control_pane_g1

0xd231,	// (0x000a13a0) vradio_rocker_control_pane_g2

0xd239,	// (0x000a13a8) vradio_rocker_control_pane_g3

0xd241,	// (0x000a13b0) vradio_rocker_control_pane_g4

0xd249,	// (0x000a13b8) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000a39ac) vradio_rocker_control_pane_g

0x5cf5,	// (0x00099e64) vradio_frequency_info_pane_g1

0xd251,	// (0x000a13c0) vradio_frequency_info_pane_t1_ParamLimits

0xd251,	// (0x000a13c0) vradio_frequency_info_pane_t1

0x5cff,	// (0x00099e6e) vradio_tuning_pane_g1

0x5d08,	// (0x00099e77) vradio_tuning_pane_t1

0x0fcd,	// (0x0009513c) area_side_right_pane_ParamLimits

0x0fcd,	// (0x0009513c) area_side_right_pane

0xc6fa,	// (0x000a0869) status_small_pane_g1

0xc702,	// (0x000a0871) status_small_pane_g2

0xc70b,	// (0x000a087a) status_small_pane_g3

0xc714,	// (0x000a0883) status_small_pane_g4

0x0003,

0xf5fd,	// (0x000a376c) status_small_pane_g

0xc71d,	// (0x000a088c) status_small_pane_t1

0x1213,	// (0x00095382) main_video3_pane

0xd265,	// (0x000a13d4) cams_zoom_vslider_pane

0xd26d,	// (0x000a13dc) image3_wide_pane_ParamLimits

0xd26d,	// (0x000a13dc) image3_wide_pane

0xd287,	// (0x000a13f6) image3_wide_small_pane

0xd293,	// (0x000a1402) main_video3_pane_g1_ParamLimits

0xd293,	// (0x000a1402) main_video3_pane_g1

0xd2af,	// (0x000a141e) main_video3_pane_g2_ParamLimits

0xd2af,	// (0x000a141e) main_video3_pane_g2

0x0001,

0xf848,	// (0x000a39b7) main_video3_pane_g_ParamLimits

0xf848,	// (0x000a39b7) main_video3_pane_g

0xd2cb,	// (0x000a143a) main_video3_pane_t1_ParamLimits

0xd2cb,	// (0x000a143a) main_video3_pane_t1

0xd2f6,	// (0x000a1465) main_video3_pane_t2_ParamLimits

0xd2f6,	// (0x000a1465) main_video3_pane_t2

0xd321,	// (0x000a1490) main_video3_pane_t3_ParamLimits

0xd321,	// (0x000a1490) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000a39bc) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000a39bc) main_video3_pane_t

0xd34e,	// (0x000a14bd) cams_zoom_vslider_pane_g1

0xd357,	// (0x000a14c6) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000a39c3) cams_zoom_vslider_pane_g

0xd35f,	// (0x000a14ce) small_slider_vertical_pane

0xcb47,	// (0x000a0cb6) small_slider_vertical_pane_g1

0xcb47,	// (0x000a0cb6) small_slider_vertical_pane_g2

0xd367,	// (0x000a14d6) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000a39c8) small_slider_vertical_pane_g

0x1213,	// (0x00095382) main_hwr_training_pane

0xd370,	// (0x000a14df) hwr_training_instruct_pane_ParamLimits

0xd370,	// (0x000a14df) hwr_training_instruct_pane

0x5d17,	// (0x00099e86) hwr_training_navi_pane_ParamLimits

0x5d17,	// (0x00099e86) hwr_training_navi_pane

0x5d31,	// (0x00099ea0) hwr_training_write_pane_ParamLimits

0x5d31,	// (0x00099ea0) hwr_training_write_pane

0xec9e,	// (0x000a2e0d) bg_frame_shadow_pane

0xd3a7,	// (0x000a1516) hwr_training_write_pane_g1

0xd3af,	// (0x000a151e) hwr_training_write_pane_g2

0xd3b7,	// (0x000a1526) hwr_training_write_pane_g3

0xd3bf,	// (0x000a152e) hwr_training_write_pane_g4

0xd3c7,	// (0x000a1536) hwr_training_write_pane_g5

0xd3cf,	// (0x000a153e) hwr_training_write_pane_g6

0xd3d7,	// (0x000a1546) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000a39cf) hwr_training_write_pane_g

0x5d69,	// (0x00099ed8) hwr_training_navi_pane_g1_ParamLimits

0x5d69,	// (0x00099ed8) hwr_training_navi_pane_g1

0x5d7b,	// (0x00099eea) hwr_training_navi_pane_g2_ParamLimits

0x5d7b,	// (0x00099eea) hwr_training_navi_pane_g2

0x5d8d,	// (0x00099efc) hwr_training_navi_pane_g3_ParamLimits

0x5d8d,	// (0x00099efc) hwr_training_navi_pane_g3

0x5d9d,	// (0x00099f0c) hwr_training_navi_pane_g4_ParamLimits

0x5d9d,	// (0x00099f0c) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000a39de) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000a39de) hwr_training_navi_pane_g

0x5db7,	// (0x00099f26) hwr_training_navi_pane_t1

0x5dc5,	// (0x00099f34) list_single_hwr_training_instruct_pane_ParamLimits

0x5dc5,	// (0x00099f34) list_single_hwr_training_instruct_pane

0xd3df,	// (0x000a154e) list_single_hwr_training_instruct_pane_t1

0xca87,	// (0x000a0bf6) bg_frame_shadow_pane_g1

0xd3ee,	// (0x000a155d) bg_frame_shadow_pane_g2

0xd3f6,	// (0x000a1565) bg_frame_shadow_pane_g3

0xd3fe,	// (0x000a156d) bg_frame_shadow_pane_g4

0xd406,	// (0x000a1575) bg_frame_shadow_pane_g5

0xd40e,	// (0x000a157d) bg_frame_shadow_pane_g6

0xd416,	// (0x000a1585) bg_frame_shadow_pane_g7

0xa29e,	// (0x0009e40d) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000a39e9) bg_frame_shadow_pane_g

0x1213,	// (0x00095382) main_video_tele_dialer_pane

0x5dea,	// (0x00099f59) aid_size_cell_video_keypad_ParamLimits

0x5dea,	// (0x00099f59) aid_size_cell_video_keypad

0x5dfa,	// (0x00099f69) grid_video_dialer_keypad_pane_ParamLimits

0x5dfa,	// (0x00099f69) grid_video_dialer_keypad_pane

0x5e2e,	// (0x00099f9d) video_down_pane_cp_ParamLimits

0x5e2e,	// (0x00099f9d) video_down_pane_cp

0x5e58,	// (0x00099fc7) cell_video_dialer_keypad_pane_ParamLimits

0x5e58,	// (0x00099fc7) cell_video_dialer_keypad_pane

0xd41e,	// (0x000a158d) bg_button_pane_cp08_ParamLimits

0xd41e,	// (0x000a158d) bg_button_pane_cp08

0x5e6d,	// (0x00099fdc) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5e6d,	// (0x00099fdc) cell_video_dialer_keypad_pane_g1

0x5656,	// (0x000997c5) mup3_rocker2_pane_ParamLimits

0x5656,	// (0x000997c5) mup3_rocker2_pane

0xcb47,	// (0x000a0cb6) mup3_rocker2_pane_g1

0x455e,	// (0x000986cd) main_dialer2_pane

0x1213,	// (0x00095382) main_mp4_pane

0x5eac,	// (0x0009a01b) main_mp4_pane_g1_ParamLimits

0x5eac,	// (0x0009a01b) main_mp4_pane_g1

0x5eba,	// (0x0009a029) main_mp4_pane_g2_ParamLimits

0x5eba,	// (0x0009a029) main_mp4_pane_g2

0x5ec8,	// (0x0009a037) main_mp4_pane_g3_ParamLimits

0x5ec8,	// (0x0009a037) main_mp4_pane_g3

0x5f0d,	// (0x0009a07c) main_mp4_pane_g4_ParamLimits

0x5f0d,	// (0x0009a07c) main_mp4_pane_g4

0x5f35,	// (0x0009a0a4) main_mp4_pane_g5_ParamLimits

0x5f35,	// (0x0009a0a4) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000a3a09) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000a3a09) main_mp4_pane_g

0x5f85,	// (0x0009a0f4) main_mp4_pane_t1_ParamLimits

0x5f85,	// (0x0009a0f4) main_mp4_pane_t1

0x5fe1,	// (0x0009a150) main_mp4_pane_t2_ParamLimits

0x5fe1,	// (0x0009a150) main_mp4_pane_t2

0xd42a,	// (0x000a1599) main_mp4_pane_t3_ParamLimits

0xd42a,	// (0x000a1599) main_mp4_pane_t3

0x6033,	// (0x0009a1a2) main_mp4_pane_t4_ParamLimits

0x6033,	// (0x0009a1a2) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000a3a16) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000a3a16) main_mp4_pane_t

0x6077,	// (0x0009a1e6) mp4_progress_pane_ParamLimits

0x6077,	// (0x0009a1e6) mp4_progress_pane

0x60c1,	// (0x0009a230) mp4_rocker_pane_ParamLimits

0x60c1,	// (0x0009a230) mp4_rocker_pane

0xd452,	// (0x000a15c1) mp4_progress_pane_t1

0xd46b,	// (0x000a15da) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000a3a1f) mp4_progress_pane_t

0xd484,	// (0x000a15f3) mup_progress_pane_cp04

0xdad7,	// (0x000a1c46) mp4_rocker_pane_g1

0x60e1,	// (0x0009a250) aid_cell_size_keypad2_ParamLimits

0x60e1,	// (0x0009a250) aid_cell_size_keypad2

0x60f1,	// (0x0009a260) dialer2_ne_pane_ParamLimits

0x60f1,	// (0x0009a260) dialer2_ne_pane

0x60ff,	// (0x0009a26e) grid_dialer2_keypad_pane_ParamLimits

0x60ff,	// (0x0009a26e) grid_dialer2_keypad_pane

0xdd04,	// (0x000a1e73) bg_popup_call_pane_cp07_ParamLimits

0xdd04,	// (0x000a1e73) bg_popup_call_pane_cp07

0x610f,	// (0x0009a27e) dialer2_ne_pane_t1_ParamLimits

0x610f,	// (0x0009a27e) dialer2_ne_pane_t1

0x6134,	// (0x0009a2a3) cell_dialer2_keypad_pane_ParamLimits

0x6134,	// (0x0009a2a3) cell_dialer2_keypad_pane

0xd4a2,	// (0x000a1611) bg_button_pane_pane_cp04_ParamLimits

0xd4a2,	// (0x000a1611) bg_button_pane_pane_cp04

0x6149,	// (0x0009a2b8) cell_dialer2_keypad_pane_g1_ParamLimits

0x6149,	// (0x0009a2b8) cell_dialer2_keypad_pane_g1

0x2132,	// (0x000962a1) aid_placing_vt_set_content_ParamLimits

0x2132,	// (0x000962a1) aid_placing_vt_set_content

0x215e,	// (0x000962cd) aid_placing_vt_set_title_ParamLimits

0x215e,	// (0x000962cd) aid_placing_vt_set_title

0x1213,	// (0x00095382) main_image3_pane

0x61e3,	// (0x0009a352) area_side_right_pane_cp01_ParamLimits

0x61e3,	// (0x0009a352) area_side_right_pane_cp01

0x6210,	// (0x0009a37f) main_image3_pane_g1_ParamLimits

0x6210,	// (0x0009a37f) main_image3_pane_g1

0x621e,	// (0x0009a38d) main_image3_pane_g2_ParamLimits

0x621e,	// (0x0009a38d) main_image3_pane_g2

0x6237,	// (0x0009a3a6) main_image3_pane_g3_ParamLimits

0x6237,	// (0x0009a3a6) main_image3_pane_g3

0x6250,	// (0x0009a3bf) main_image3_pane_g4_ParamLimits

0x6250,	// (0x0009a3bf) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000a3a2e) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000a3a2e) main_image3_pane_g

0x6269,	// (0x0009a3d8) main_image3_pane_t1_ParamLimits

0x6269,	// (0x0009a3d8) main_image3_pane_t1

0x628e,	// (0x0009a3fd) main_image3_pane_t2_ParamLimits

0x628e,	// (0x0009a3fd) main_image3_pane_t2

0x62ad,	// (0x0009a41c) main_image3_pane_t3_ParamLimits

0x62ad,	// (0x0009a41c) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000a3a37) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000a3a37) main_image3_pane_t

0xedb1,	// (0x000a2f20) grid_sctrl_middle_pane_cp01_ParamLimits

0xedb1,	// (0x000a2f20) grid_sctrl_middle_pane_cp01

0x630e,	// (0x0009a47d) cell_sctrl_middle_pane_cp01_ParamLimits

0x630e,	// (0x0009a47d) cell_sctrl_middle_pane_cp01

0x631f,	// (0x0009a48e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x631f,	// (0x0009a48e) cell_sctrl_middle_pane_cp01_g1

0x1213,	// (0x00095382) main_call4_pane

0x632c,	// (0x0009a49b) aid_size_button_call4_ParamLimits

0x632c,	// (0x0009a49b) aid_size_button_call4

0x635c,	// (0x0009a4cb) call4_windows_pane_ParamLimits

0x635c,	// (0x0009a4cb) call4_windows_pane

0x6376,	// (0x0009a4e5) grid_call4_button_pane_ParamLimits

0x6376,	// (0x0009a4e5) grid_call4_button_pane

0xd4ae,	// (0x000a161d) call4_windows_conf_pane

0xd4c5,	// (0x000a1634) popup_call4_audio_first_window_ParamLimits

0xd4c5,	// (0x000a1634) popup_call4_audio_first_window

0xd511,	// (0x000a1680) popup_call4_audio_second_window_ParamLimits

0xd511,	// (0x000a1680) popup_call4_audio_second_window

0xd525,	// (0x000a1694) popup_call4_audio_wait_window_ParamLimits

0xd525,	// (0x000a1694) popup_call4_audio_wait_window

0x639a,	// (0x0009a509) cell_call4_button_pane_ParamLimits

0x639a,	// (0x0009a509) cell_call4_button_pane

0x63bf,	// (0x0009a52e) bg_button_pane_cp09_ParamLimits

0x63bf,	// (0x0009a52e) bg_button_pane_cp09

0x63cb,	// (0x0009a53a) cell_call4_button_pane_g1_ParamLimits

0x63cb,	// (0x0009a53a) cell_call4_button_pane_g1

0x63d8,	// (0x0009a547) cell_call4_button_pane_t1_ParamLimits

0x63d8,	// (0x0009a547) cell_call4_button_pane_t1

0xd56d,	// (0x000a16dc) popup_call4_audio_conf_window_ParamLimits

0xd56d,	// (0x000a16dc) popup_call4_audio_conf_window

0x5689,	// (0x000997f8) mup3_progress_pane_t1_ParamLimits

0x56a8,	// (0x00099817) mup3_progress_pane_t2_ParamLimits

0xce7d,	// (0x000a0fec) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x000a3910) mup3_progress_pane_t_ParamLimits

0xce9a,	// (0x000a1009) mup_progress_pane_cp03_ParamLimits

0x5bb6,	// (0x00099d25) mup3_control_keys_pane_g4_copy1

0x60a5,	// (0x0009a214) mp4_rocker2_pane_ParamLimits

0x60a5,	// (0x0009a214) mp4_rocker2_pane

0xd581,	// (0x000a16f0) mp4_rocker2_pane_g1

0xd589,	// (0x000a16f8) mp4_rocker2_pane_g2

0x63ea,	// (0x0009a559) mp4_rocker2_pane_g3

0x63f2,	// (0x0009a561) mp4_rocker2_pane_g4

0x63fa,	// (0x0009a569) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000a3a40) mp4_rocker2_pane_g

0x1213,	// (0x00095382) main_camera4_pane

0x1213,	// (0x00095382) main_video4_pane

0x5e0a,	// (0x00099f79) main_video_tele_dialer_pane_t1_ParamLimits

0x5e0a,	// (0x00099f79) main_video_tele_dialer_pane_t1

0x5e1c,	// (0x00099f8b) main_video_tele_dialer_pane_t2_ParamLimits

0x5e1c,	// (0x00099f8b) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000a39fa) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000a39fa) main_video_tele_dialer_pane_t

0x641a,	// (0x0009a589) cam4_autofocus_pane_ParamLimits

0x641a,	// (0x0009a589) cam4_autofocus_pane

0x6434,	// (0x0009a5a3) cam4_image_uncrop_pane_ParamLimits

0x6434,	// (0x0009a5a3) cam4_image_uncrop_pane

0x644b,	// (0x0009a5ba) cam4_indicators_pane_ParamLimits

0x644b,	// (0x0009a5ba) cam4_indicators_pane

0x6467,	// (0x0009a5d6) main_camera4_pane_g1_ParamLimits

0x6467,	// (0x0009a5d6) main_camera4_pane_g1

0x6473,	// (0x0009a5e2) main_camera4_pane_g2_ParamLimits

0x6473,	// (0x0009a5e2) main_camera4_pane_g2

0x6473,	// (0x0009a5e2) main_camera4_pane_g3_ParamLimits

0x6473,	// (0x0009a5e2) main_camera4_pane_g3

0x647f,	// (0x0009a5ee) main_camera4_pane_g4_ParamLimits

0x647f,	// (0x0009a5ee) main_camera4_pane_g4

0x648b,	// (0x0009a5fa) main_camera4_pane_g5_ParamLimits

0x648b,	// (0x0009a5fa) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000a3a4b) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000a3a4b) main_camera4_pane_g

0x64a5,	// (0x0009a614) main_camera4_pane_t1_ParamLimits

0x64a5,	// (0x0009a614) main_camera4_pane_t1

0x64ed,	// (0x0009a65c) bg_tb_trans_pane_cp06

0x6503,	// (0x0009a672) cam4_indicators_pane_g1

0x6514,	// (0x0009a683) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000a3a66) cam4_indicators_pane_g

0x6532,	// (0x0009a6a1) cam4_indicators_pane_t1

0x655c,	// (0x0009a6cb) main_video4_pane_g1_ParamLimits

0x655c,	// (0x0009a6cb) main_video4_pane_g1

0x6568,	// (0x0009a6d7) main_video4_pane_g2_ParamLimits

0x6568,	// (0x0009a6d7) main_video4_pane_g2

0x6574,	// (0x0009a6e3) main_video4_pane_g3_ParamLimits

0x6574,	// (0x0009a6e3) main_video4_pane_g3

0x6580,	// (0x0009a6ef) main_video4_pane_g4_ParamLimits

0x6580,	// (0x0009a6ef) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000a3a6d) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000a3a6d) main_video4_pane_g

0x65a0,	// (0x0009a70f) vid4_indicators_pane_ParamLimits

0x65a0,	// (0x0009a70f) vid4_indicators_pane

0x65bf,	// (0x0009a72e) video4_image_uncrop_cif_pane_ParamLimits

0x65bf,	// (0x0009a72e) video4_image_uncrop_cif_pane

0x65ce,	// (0x0009a73d) video4_image_uncrop_nhd_pane_ParamLimits

0x65ce,	// (0x0009a73d) video4_image_uncrop_nhd_pane

0x6434,	// (0x0009a5a3) video4_image_uncrop_vga_pane_ParamLimits

0x6434,	// (0x0009a5a3) video4_image_uncrop_vga_pane

0x4550,	// (0x000986bf) bg_tb_trans_pane_cp07

0x65e5,	// (0x0009a754) vid4_indicators_pane_g1

0x65f9,	// (0x0009a768) vid4_indicators_pane_g2

0x660d,	// (0x0009a77c) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000a3a78) vid4_indicators_pane_g

0x663c,	// (0x0009a7ab) vid4_indicators_pane_t1

0x6653,	// (0x0009a7c2) cam4_autofocus_pane_g1

0x665b,	// (0x0009a7ca) cam4_autofocus_pane_g2

0x6663,	// (0x0009a7d2) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000a3a83) cam4_autofocus_pane_g

0x666b,	// (0x0009a7da) cam4_autofocus_pane_g3_copy1

0x5e3c,	// (0x00099fab) video_down_pane_cp_t1

0x5e4a,	// (0x00099fb9) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000a39ff) video_down_pane_cp_t

0x11f9,	// (0x00095368) popup_vitu2_window_ParamLimits

0x11f9,	// (0x00095368) popup_vitu2_window

0x6673,	// (0x0009a7e2) aid_size_cell2_itu2_ParamLimits

0x6673,	// (0x0009a7e2) aid_size_cell2_itu2

0x6695,	// (0x0009a804) aid_size_cell_itu2_ParamLimits

0x6695,	// (0x0009a804) aid_size_cell_itu2

0x66d9,	// (0x0009a848) bg_popup_window_pane_cp09_ParamLimits

0x66d9,	// (0x0009a848) bg_popup_window_pane_cp09

0x66e7,	// (0x0009a856) field_vitu2_entry_pane_ParamLimits

0x66e7,	// (0x0009a856) field_vitu2_entry_pane

0x6707,	// (0x0009a876) grid_vitu2_function_pane_ParamLimits

0x6707,	// (0x0009a876) grid_vitu2_function_pane

0x674b,	// (0x0009a8ba) grid_vitu2_itu_pane_ParamLimits

0x674b,	// (0x0009a8ba) grid_vitu2_itu_pane

0x67c3,	// (0x0009a932) cell_vitu2_itu_pane_ParamLimits

0x67c3,	// (0x0009a932) cell_vitu2_itu_pane

0x67d8,	// (0x0009a947) cell_vitu2_function_pane_ParamLimits

0x67d8,	// (0x0009a947) cell_vitu2_function_pane

0xd591,	// (0x000a1700) bg_popup_call_pane_cp08_ParamLimits

0xd591,	// (0x000a1700) bg_popup_call_pane_cp08

0xd5aa,	// (0x000a1719) field_vitu2_entry_pane_g1

0xd5b6,	// (0x000a1725) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000a3a8a) field_vitu2_entry_pane_g

0x6817,	// (0x0009a986) field_vitu2_entry_pane_t1_ParamLimits

0x6817,	// (0x0009a986) field_vitu2_entry_pane_t1

0xd5d0,	// (0x000a173f) field_vitu2_entry_pane_t2_ParamLimits

0xd5d0,	// (0x000a173f) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000a3a91) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000a3a91) field_vitu2_entry_pane_t

0x6847,	// (0x0009a9b6) bg_button_pane_cp010_ParamLimits

0x6847,	// (0x0009a9b6) bg_button_pane_cp010

0x6855,	// (0x0009a9c4) cell_vitu2_itu_pane_g1

0x687e,	// (0x0009a9ed) cell_vitu2_itu_pane_t1_ParamLimits

0x687e,	// (0x0009a9ed) cell_vitu2_itu_pane_t1

0x0e6d,	// (0x00094fdc) cell_vitu2_itu_pane_t2_ParamLimits

0x0e6d,	// (0x00094fdc) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000a3a9b) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000a3a9b) cell_vitu2_itu_pane_t

0x4550,	// (0x000986bf) bg_button_pane_cp011

0x68ca,	// (0x0009aa39) cell_vitu2_function_pane_g1

0x1213,	// (0x00095382) main_myfav_hc_pane

0x62ef,	// (0x0009a45e) popup_image3_note_pane_ParamLimits

0x62ef,	// (0x0009a45e) popup_image3_note_pane

0x62fd,	// (0x0009a46c) popup_image3_tool_bar_pane_ParamLimits

0x62fd,	// (0x0009a46c) popup_image3_tool_bar_pane

0x0ee3,	// (0x00095052) cell_vitu2_itu_pane_t3_ParamLimits

0x0ee3,	// (0x00095052) cell_vitu2_itu_pane_t3

0xec9e,	// (0x000a2e0d) bg_popup_trans_pane

0xd5f5,	// (0x000a1764) grid_image3_tool_bar_pane

0xd5ff,	// (0x000a176e) bg_popup_trans_pane_g1

0xa5fc,	// (0x0009e76b) bg_popup_trans_pane_g2

0xd607,	// (0x000a1776) bg_popup_trans_pane_g3

0xd60f,	// (0x000a177e) bg_popup_trans_pane_g4

0xd617,	// (0x000a1786) bg_popup_trans_pane_g5

0xd61f,	// (0x000a178e) bg_popup_trans_pane_g6

0xd627,	// (0x000a1796) bg_popup_trans_pane_g7

0xd62f,	// (0x000a179e) bg_popup_trans_pane_g8

0xa5dc,	// (0x0009e74b) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000a3aa2) bg_popup_trans_pane_g

0xd637,	// (0x000a17a6) cell_image3_tool_bar_pane_ParamLimits

0xd637,	// (0x000a17a6) cell_image3_tool_bar_pane

0xcb47,	// (0x000a0cb6) cell_image3_tool_bar_pane_g1

0xec9e,	// (0x000a2e0d) bg_popup_trans_pane_cp1

0xd65d,	// (0x000a17cc) popup_image3_note_pane_t1

0xd66b,	// (0x000a17da) popup_image3_note_pane_t2

0xd679,	// (0x000a17e8) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000a3ab5) popup_image3_note_pane_t

0xd687,	// (0x000a17f6) popup_image3_note_pane_t3_copy1

0x68de,	// (0x0009aa4d) bg_myfav_hc_instruction_pane_ParamLimits

0x68de,	// (0x0009aa4d) bg_myfav_hc_instruction_pane

0x68f6,	// (0x0009aa65) cell_myfav_contact_pane_ParamLimits

0x68f6,	// (0x0009aa65) cell_myfav_contact_pane

0x6910,	// (0x0009aa7f) cell_myfav_contact_pane_cp1_ParamLimits

0x6910,	// (0x0009aa7f) cell_myfav_contact_pane_cp1

0x6928,	// (0x0009aa97) cell_myfav_contact_pane_cp2_ParamLimits

0x6928,	// (0x0009aa97) cell_myfav_contact_pane_cp2

0x6940,	// (0x0009aaaf) cell_myfav_contact_pane_cp3_ParamLimits

0x6940,	// (0x0009aaaf) cell_myfav_contact_pane_cp3

0x6957,	// (0x0009aac6) cell_myfav_contact_pane_cp4_ParamLimits

0x6957,	// (0x0009aac6) cell_myfav_contact_pane_cp4

0x696d,	// (0x0009aadc) cell_myfav_contact_pane_cp5_ParamLimits

0x696d,	// (0x0009aadc) cell_myfav_contact_pane_cp5

0x6981,	// (0x0009aaf0) cell_myfav_contact_pane_cp6_ParamLimits

0x6981,	// (0x0009aaf0) cell_myfav_contact_pane_cp6

0x6995,	// (0x0009ab04) cell_myfav_contact_pane_cp7_ParamLimits

0x6995,	// (0x0009ab04) cell_myfav_contact_pane_cp7

0xd695,	// (0x000a1804) listscroll_gen_pane_cp05

0x69ad,	// (0x0009ab1c) main_myfav_hc_pane_g1_ParamLimits

0x69ad,	// (0x0009ab1c) main_myfav_hc_pane_g1

0x69c3,	// (0x0009ab32) main_myfav_hc_pane_g2_ParamLimits

0x69c3,	// (0x0009ab32) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000a3abc) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000a3abc) main_myfav_hc_pane_g

0x69f1,	// (0x0009ab60) main_myfav_hc_pane_t1_ParamLimits

0x69f1,	// (0x0009ab60) main_myfav_hc_pane_t1

0xd69e,	// (0x000a180d) main_myfav_hc_pane_t2_ParamLimits

0xd69e,	// (0x000a180d) main_myfav_hc_pane_t2

0xd6b0,	// (0x000a181f) main_myfav_hc_pane_t3_ParamLimits

0xd6b0,	// (0x000a181f) main_myfav_hc_pane_t3

0x6a08,	// (0x0009ab77) main_myfav_hc_pane_t4_ParamLimits

0x6a08,	// (0x0009ab77) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000a3ac3) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000a3ac3) main_myfav_hc_pane_t

0xcb47,	// (0x000a0cb6) bg_myfav_hc_instruction_pane_g1

0xd6c2,	// (0x000a1831) cell_myfav_contact_pane_g1_ParamLimits

0xd6c2,	// (0x000a1831) cell_myfav_contact_pane_g1

0xd6c2,	// (0x000a1831) cell_myfav_contact_pane_g2_ParamLimits

0xd6c2,	// (0x000a1831) cell_myfav_contact_pane_g2

0xd6ce,	// (0x000a183d) cell_myfav_contact_pane_g3_ParamLimits

0xd6ce,	// (0x000a183d) cell_myfav_contact_pane_g3

0xce67,	// (0x000a0fd6) cell_myfav_contact_pane_g4_ParamLimits

0xce67,	// (0x000a0fd6) cell_myfav_contact_pane_g4

0xd6db,	// (0x000a184a) cell_myfav_contact_pane_g5_ParamLimits

0xd6db,	// (0x000a184a) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000a3ace) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000a3ace) cell_myfav_contact_pane_g

0x69d9,	// (0x0009ab48) main_myfav_hc_pane_g3_ParamLimits

0x69d9,	// (0x0009ab48) main_myfav_hc_pane_g3

0x1102,	// (0x00095271) popup_adpt_find_window

0x6a32,	// (0x0009aba1) afind_page_pane_ParamLimits

0x6a32,	// (0x0009aba1) afind_page_pane

0x6a3f,	// (0x0009abae) aid_size_cell_afind_ParamLimits

0x6a3f,	// (0x0009abae) aid_size_cell_afind

0x6a59,	// (0x0009abc8) bg_popup_sub_pane_cp09_ParamLimits

0x6a59,	// (0x0009abc8) bg_popup_sub_pane_cp09

0x6a66,	// (0x0009abd5) find_pane_cp01_ParamLimits

0x6a66,	// (0x0009abd5) find_pane_cp01

0xd6e7,	// (0x000a1856) grid_afind_control_pane_ParamLimits

0xd6e7,	// (0x000a1856) grid_afind_control_pane

0x6a73,	// (0x0009abe2) grid_afind_pane_ParamLimits

0x6a73,	// (0x0009abe2) grid_afind_pane

0x6a8f,	// (0x0009abfe) cell_afind_pane_ParamLimits

0x6a8f,	// (0x0009abfe) cell_afind_pane

0xcb47,	// (0x000a0cb6) afind_page_pane_g1

0x6ad7,	// (0x0009ac46) afind_page_pane_g2

0x6ae0,	// (0x0009ac4f) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000a3ad9) afind_page_pane_g

0x6ae9,	// (0x0009ac58) afind_page_pane_t1

0xd6fb,	// (0x000a186a) cell_afind_grid_control_pane_ParamLimits

0xd6fb,	// (0x000a186a) cell_afind_grid_control_pane

0xd4a2,	// (0x000a1611) bg_button_pane_cp69_ParamLimits

0xd4a2,	// (0x000a1611) bg_button_pane_cp69

0x6b09,	// (0x0009ac78) cell_afind_pane_g1_ParamLimits

0x6b09,	// (0x0009ac78) cell_afind_pane_g1

0x6b16,	// (0x0009ac85) cell_afind_pane_t1_ParamLimits

0x6b16,	// (0x0009ac85) cell_afind_pane_t1

0xa3f5,	// (0x0009e564) bg_button_pane_cp72

0xd70a,	// (0x000a1879) cell_afind_grid_control_pane_g1

0x40ce,	// (0x0009823d) aid_image_placing_area_ParamLimits

0x40ce,	// (0x0009823d) aid_image_placing_area

0xd170,	// (0x000a12df) field_vitu_entry_pane_g1_ParamLimits

0xd170,	// (0x000a12df) field_vitu_entry_pane_g1

0xd17c,	// (0x000a12eb) field_vitu_entry_pane_g2_ParamLimits

0xd17c,	// (0x000a12eb) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000a398a) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000a398a) field_vitu_entry_pane_g

0x5c3e,	// (0x00099dad) cell_vitu_itu_pane_g1_ParamLimits

0x5c80,	// (0x00099def) cell_vitu_itu_pane_t3_ParamLimits

0x5c80,	// (0x00099def) cell_vitu_itu_pane_t3

0xd452,	// (0x000a15c1) mp4_progress_pane_t1_ParamLimits

0xd46b,	// (0x000a15da) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000a3a1f) mp4_progress_pane_t_ParamLimits

0xd484,	// (0x000a15f3) mup_progress_pane_cp04_ParamLimits

0x6a1c,	// (0x0009ab8b) main_myfav_hc_pane_t5_ParamLimits

0x6a1c,	// (0x0009ab8b) main_myfav_hc_pane_t5

0x0e65,	// (0x00094fd4) aid_zoom_text_primary

0x1102,	// (0x00095271) popup_adpt_find_window_ParamLimits

0x4550,	// (0x000986bf) main_cam_set_pane

0x6459,	// (0x0009a5c8) cam4_zoom_pane_ParamLimits

0x6459,	// (0x0009a5c8) cam4_zoom_pane

0x6b28,	// (0x0009ac97) main_cam_set_pane_g1_ParamLimits

0x6b28,	// (0x0009ac97) main_cam_set_pane_g1

0x6b36,	// (0x0009aca5) main_cam_set_pane_g2_ParamLimits

0x6b36,	// (0x0009aca5) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000a3ae0) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000a3ae0) main_cam_set_pane_g

0x6b42,	// (0x0009acb1) main_cam_set_pane_t1_ParamLimits

0x6b42,	// (0x0009acb1) main_cam_set_pane_t1

0x6b5e,	// (0x0009accd) main_cset_listscroll_pane_ParamLimits

0x6b5e,	// (0x0009accd) main_cset_listscroll_pane

0x6b89,	// (0x0009acf8) main_cset_slider_pane_ParamLimits

0x6b89,	// (0x0009acf8) main_cset_slider_pane

0xd71b,	// (0x000a188a) main_cset_list_pane_ParamLimits

0xd71b,	// (0x000a188a) main_cset_list_pane

0xd72b,	// (0x000a189a) scroll_pane_cp028

0x6ba8,	// (0x0009ad17) aid_area_touch_slider

0x6bc4,	// (0x0009ad33) cset_slider_pane

0x6bee,	// (0x0009ad5d) main_cset_slider_pane_g1

0x6c03,	// (0x0009ad72) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000a3ae5) main_cset_slider_pane_g

0xd764,	// (0x000a18d3) main_cset_slider_pane_t1

0x6cc5,	// (0x0009ae34) main_cset_slider_pane_t2

0x6cdf,	// (0x0009ae4e) main_cset_slider_pane_t3

0x6cf9,	// (0x0009ae68) main_cset_slider_pane_t4

0x6d13,	// (0x0009ae82) main_cset_slider_pane_t5

0x6d31,	// (0x0009aea0) main_cset_slider_pane_t6

0x6d48,	// (0x0009aeb7) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000a3b0a) main_cset_slider_pane_t

0x6e54,	// (0x0009afc3) cset_list_set_pane_ParamLimits

0x6e54,	// (0x0009afc3) cset_list_set_pane

0x6e6a,	// (0x0009afd9) aid_position_infowindow_above

0x6e72,	// (0x0009afe1) aid_position_infowindow_below

0xf038,	// (0x000a31a7) cset_list_set_pane_g1_ParamLimits

0xf038,	// (0x000a31a7) cset_list_set_pane_g1

0xd804,	// (0x000a1973) cset_list_set_pane_g3_ParamLimits

0xd804,	// (0x000a1973) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000a3b29) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000a3b29) cset_list_set_pane_g

0xd813,	// (0x000a1982) cset_list_set_pane_t1_ParamLimits

0xd813,	// (0x000a1982) cset_list_set_pane_t1

0xb523,	// (0x0009f692) list_highlight_pane_cp021_ParamLimits

0xb523,	// (0x0009f692) list_highlight_pane_cp021

0xaf41,	// (0x0009f0b0) cset_slider_pane_g1

0xaf53,	// (0x0009f0c2) cset_slider_pane_g2

0xaf4a,	// (0x0009f0b9) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000a3b2e) cset_slider_pane_g

0x6e7a,	// (0x0009afe9) aid_area_touch_cam4_zoom

0x6e82,	// (0x0009aff1) cam4_zoom_cont_pane

0x6e8a,	// (0x0009aff9) cam4_zoom_pane_g1

0x6e92,	// (0x0009b001) cam4_zoom_pane_g2

0x6e9a,	// (0x0009b009) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000a3b35) cam4_zoom_pane_g

0x6ea2,	// (0x0009b011) cam4_zoom_cont_pane_g1

0x6eab,	// (0x0009b01a) cam4_zoom_cont_pane_g2

0x6eb4,	// (0x0009b023) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000a3b3c) cam4_zoom_cont_pane_g

0x6346,	// (0x0009a4b5) call4_image_pane_ParamLimits

0x6346,	// (0x0009a4b5) call4_image_pane

0xd4ae,	// (0x000a161d) call4_windows_conf_pane_ParamLimits

0xd4ef,	// (0x000a165e) popup_call4_audio_in_window_ParamLimits

0xd4ef,	// (0x000a165e) popup_call4_audio_in_window

0xec9e,	// (0x000a2e0d) bg_popup_call2_act_pane_cp02

0xd565,	// (0x000a16d4) call4_list_conf_pane

0xcb47,	// (0x000a0cb6) call4_image_pane_g1

0xcb47,	// (0x000a0cb6) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x000a3850) call4_image_pane_g

0xd828,	// (0x000a1997) list_single_graphic_popup_conf4_pane_ParamLimits

0xd828,	// (0x000a1997) list_single_graphic_popup_conf4_pane

0xec9e,	// (0x000a2e0d) list_highlight_pane_cp022

0xd83b,	// (0x000a19aa) list_single_graphic_popup_conf4_pane_g1

0xab18,	// (0x0009ec87) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000a3b43) list_single_graphic_popup_conf4_pane_g

0xd843,	// (0x000a19b2) list_single_graphic_popup_conf4_pane_t1

0x22c2,	// (0x00096431) popup_vtel_slider_window_ParamLimits

0x22c2,	// (0x00096431) popup_vtel_slider_window

0xd490,	// (0x000a15ff) dialer2_ne_pane_t2_ParamLimits

0xd490,	// (0x000a15ff) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000a3a24) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000a3a24) dialer2_ne_pane_t

0xb523,	// (0x0009f692) bg_popup_sub_pane_cp010_ParamLimits

0xb523,	// (0x0009f692) bg_popup_sub_pane_cp010

0x6ebd,	// (0x0009b02c) popup_vtel_slider_window_g1_ParamLimits

0x6ebd,	// (0x0009b02c) popup_vtel_slider_window_g1

0x6ec9,	// (0x0009b038) popup_vtel_slider_window_g2_ParamLimits

0x6ec9,	// (0x0009b038) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000a3b48) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000a3b48) popup_vtel_slider_window_g

0x6f11,	// (0x0009b080) vtel_slider_pane_ParamLimits

0x6f11,	// (0x0009b080) vtel_slider_pane

0x6f20,	// (0x0009b08f) vtel_slider_pane_g1_ParamLimits

0x6f20,	// (0x0009b08f) vtel_slider_pane_g1

0x6f2d,	// (0x0009b09c) vtel_slider_pane_g2_ParamLimits

0x6f2d,	// (0x0009b09c) vtel_slider_pane_g2

0x6f3a,	// (0x0009b0a9) vtel_slider_pane_g3_ParamLimits

0x6f3a,	// (0x0009b0a9) vtel_slider_pane_g3

0x6f20,	// (0x0009b08f) vtel_slider_pane_g4_ParamLimits

0x6f20,	// (0x0009b08f) vtel_slider_pane_g4

0x6f47,	// (0x0009b0b6) vtel_slider_pane_g5_ParamLimits

0x6f47,	// (0x0009b0b6) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000a3b51) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000a3b51) vtel_slider_pane_g

0x4550,	// (0x000986bf) main_gallery2_pane

0x66bb,	// (0x0009a82a) aid_size_row_itut2_dropdow_list_ParamLimits

0x66bb,	// (0x0009a82a) aid_size_row_itut2_dropdow_list

0x6729,	// (0x0009a898) grid_vitu2_function_top_pane_ParamLimits

0x6729,	// (0x0009a898) grid_vitu2_function_top_pane

0x677f,	// (0x0009a8ee) popup_vitu2_dropdown_list_window_ParamLimits

0x677f,	// (0x0009a8ee) popup_vitu2_dropdown_list_window

0x679f,	// (0x0009a90e) popup_vitu2_match_list_window

0x6f62,	// (0x0009b0d1) cell_vitu2_function_top_pane_ParamLimits

0x6f62,	// (0x0009b0d1) cell_vitu2_function_top_pane

0x6f82,	// (0x0009b0f1) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6f82,	// (0x0009b0f1) cell_vitu2_function_top_pane_cp01

0x6fa0,	// (0x0009b10f) cell_vitu2_function_top_wide_pane_ParamLimits

0x6fa0,	// (0x0009b10f) cell_vitu2_function_top_wide_pane

0x4550,	// (0x000986bf) bg_button_pane_cp012

0x6fbe,	// (0x0009b12d) cell_vitu2_function_top_pane_g1

0x6fd2,	// (0x0009b141) bg_button_pane_cp013_ParamLimits

0x6fd2,	// (0x0009b141) bg_button_pane_cp013

0x6fee,	// (0x0009b15d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6fee,	// (0x0009b15d) cell_vitu2_function_top_wide_pane_g1

0x11f9,	// (0x00095368) bg_popup_sub_pane_cp20

0x7006,	// (0x0009b175) list_vitu2_match_list_pane

0xd5ff,	// (0x000a176e) bg_popup_sub_pane_cp20_g1

0xd607,	// (0x000a1776) bg_popup_sub_pane_cp20_g2

0xa5fc,	// (0x0009e76b) bg_popup_sub_pane_cp20_g3

0xd60f,	// (0x000a177e) bg_popup_sub_pane_cp20_g4

0xa5dc,	// (0x0009e74b) bg_popup_sub_pane_cp20_g5

0xd859,	// (0x000a19c8) bg_popup_sub_pane_cp20_g6

0xd61f,	// (0x000a178e) bg_popup_sub_pane_cp20_g7

0xd627,	// (0x000a1796) bg_popup_sub_pane_cp20_g8

0xd62f,	// (0x000a179e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000a3b5c) bg_popup_sub_pane_cp20_g

0x701e,	// (0x0009b18d) list_vitu2_match_list_item_pane_ParamLimits

0x701e,	// (0x0009b18d) list_vitu2_match_list_item_pane

0x7030,	// (0x0009b19f) list_vitu2_match_list_item_pane_t1

0x1213,	// (0x00095382) bg_popup_sub_pane_cp21

0x7082,	// (0x0009b1f1) grid_vitu2_dropdown_list_pane

0x708a,	// (0x0009b1f9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x708a,	// (0x0009b1f9) cell_vitu2_dropdown_list_char_pane

0x70ab,	// (0x0009b21a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x70ab,	// (0x0009b21a) cell_vitu2_dropdown_list_ctrl_pane

0xd861,	// (0x000a19d0) cell_vitu2_dropdown_list_char_pane_g1

0xd86a,	// (0x000a19d9) cell_vitu2_dropdown_list_char_pane_g2

0xd873,	// (0x000a19e2) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000a3b79) cell_vitu2_dropdown_list_char_pane_g

0x70d7,	// (0x0009b246) cell_vitu2_dropdown_list_char_pane_t1

0x70e5,	// (0x0009b254) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x70e5,	// (0x0009b254) cell_vitu2_dropdown_list_ctrl_pane_g1

0x70f2,	// (0x0009b261) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x70f2,	// (0x0009b261) cell_vitu2_dropdown_list_ctrl_pane_g2

0x70ff,	// (0x0009b26e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x70ff,	// (0x0009b26e) cell_vitu2_dropdown_list_ctrl_pane_g3

0x710c,	// (0x0009b27b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x710c,	// (0x0009b27b) cell_vitu2_dropdown_list_ctrl_pane_g4

0x64ed,	// (0x0009a65c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x64ed,	// (0x0009a65c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000a3b80) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000a3b80) cell_vitu2_dropdown_list_ctrl_pane_g

0x7128,	// (0x0009b297) aid_size_cell_gallery2_ParamLimits

0x7128,	// (0x0009b297) aid_size_cell_gallery2

0x7142,	// (0x0009b2b1) grid_gallery2_pane_ParamLimits

0x7142,	// (0x0009b2b1) grid_gallery2_pane

0x5ac7,	// (0x00099c36) scroll_pane_cp029_ParamLimits

0x5ac7,	// (0x00099c36) scroll_pane_cp029

0x7159,	// (0x0009b2c8) cell_gallery2_pane_ParamLimits

0x7159,	// (0x0009b2c8) cell_gallery2_pane

0xd897,	// (0x000a1a06) cell_gallery2_pane_g2

0xea68,	// (0x000a2bd7) cell_gallery2_pane_g3

0xd89f,	// (0x000a1a0e) cell_gallery2_pane_g4

0xd8a7,	// (0x000a1a16) cell_gallery2_pane_g5

0xae0b,	// (0x0009ef7a) grid_highlight_pane_cp10

0x679f,	// (0x0009a90e) popup_vitu2_match_list_window_ParamLimits

0x67b3,	// (0x0009a922) popup_vitu2_query_window_ParamLimits

0x67b3,	// (0x0009a922) popup_vitu2_query_window

0x1213,	// (0x00095382) bg_vitu2_candi_button_pane

0xd861,	// (0x000a19d0) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd86a,	// (0x000a19d9) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd873,	// (0x000a19e2) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x71aa,	// (0x0009b319) bg_button_pane_cp015

0x71bc,	// (0x0009b32b) bg_button_pane_cp016

0x71cf,	// (0x0009b33e) bg_button_pane_cp017

0xc73f,	// (0x000a08ae) bg_popup_sub_pane_cp22

0xd8af,	// (0x000a1a1e) popup_vitu2_query_window_g1

0x7214,	// (0x0009b383) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000a3b8b) popup_vitu2_query_window_g

0x7231,	// (0x0009b3a0) popup_vitu2_query_window_t1_ParamLimits

0x7231,	// (0x0009b3a0) popup_vitu2_query_window_t1

0x7264,	// (0x0009b3d3) popup_vitu2_query_window_t2_ParamLimits

0x7264,	// (0x0009b3d3) popup_vitu2_query_window_t2

0x7276,	// (0x0009b3e5) popup_vitu2_query_window_t3_ParamLimits

0x7276,	// (0x0009b3e5) popup_vitu2_query_window_t3

0x729e,	// (0x0009b40d) popup_vitu2_query_window_t4_ParamLimits

0x729e,	// (0x0009b40d) popup_vitu2_query_window_t4

0x72bf,	// (0x0009b42e) popup_vitu2_query_window_t5_ParamLimits

0x72bf,	// (0x0009b42e) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000a3b92) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000a3b92) popup_vitu2_query_window_t

0xd713,	// (0x000a1882) main_cset_text_pane

0x6ba8,	// (0x0009ad17) aid_area_touch_slider_ParamLimits

0x6bc4,	// (0x0009ad33) cset_slider_pane_ParamLimits

0x6bee,	// (0x0009ad5d) main_cset_slider_pane_g1_ParamLimits

0x6c03,	// (0x0009ad72) main_cset_slider_pane_g2_ParamLimits

0xd734,	// (0x000a18a3) main_cset_slider_pane_g3_ParamLimits

0xd734,	// (0x000a18a3) main_cset_slider_pane_g3

0x6c18,	// (0x0009ad87) main_cset_slider_pane_g4_ParamLimits

0x6c18,	// (0x0009ad87) main_cset_slider_pane_g4

0x6c27,	// (0x0009ad96) main_cset_slider_pane_g5_ParamLimits

0x6c27,	// (0x0009ad96) main_cset_slider_pane_g5

0x6c35,	// (0x0009ada4) main_cset_slider_pane_g6_ParamLimits

0x6c35,	// (0x0009ada4) main_cset_slider_pane_g6

0xf976,	// (0x000a3ae5) main_cset_slider_pane_g_ParamLimits

0xd764,	// (0x000a18d3) main_cset_slider_pane_t1_ParamLimits

0x6cc5,	// (0x0009ae34) main_cset_slider_pane_t2_ParamLimits

0x6cdf,	// (0x0009ae4e) main_cset_slider_pane_t3_ParamLimits

0x6cf9,	// (0x0009ae68) main_cset_slider_pane_t4_ParamLimits

0x6d13,	// (0x0009ae82) main_cset_slider_pane_t5_ParamLimits

0x6d31,	// (0x0009aea0) main_cset_slider_pane_t6_ParamLimits

0x6d48,	// (0x0009aeb7) main_cset_slider_pane_t7_ParamLimits

0x6d76,	// (0x0009aee5) main_cset_slider_pane_t8_ParamLimits

0x6d76,	// (0x0009aee5) main_cset_slider_pane_t8

0x6d9e,	// (0x0009af0d) main_cset_slider_pane_t9_ParamLimits

0x6d9e,	// (0x0009af0d) main_cset_slider_pane_t9

0x6dc6,	// (0x0009af35) main_cset_slider_pane_t10_ParamLimits

0x6dc6,	// (0x0009af35) main_cset_slider_pane_t10

0x6dee,	// (0x0009af5d) main_cset_slider_pane_t11_ParamLimits

0x6dee,	// (0x0009af5d) main_cset_slider_pane_t11

0x6e18,	// (0x0009af87) main_cset_slider_pane_t12_ParamLimits

0x6e18,	// (0x0009af87) main_cset_slider_pane_t12

0x6e35,	// (0x0009afa4) main_cset_slider_pane_t13_ParamLimits

0x6e35,	// (0x0009afa4) main_cset_slider_pane_t13

0xf99b,	// (0x000a3b0a) main_cset_slider_pane_t_ParamLimits

0xec9e,	// (0x000a2e0d) bg_popup_sub_pane_cp011

0xd8bb,	// (0x000a1a2a) main_cset_text_pane_g1

0xd8c3,	// (0x000a1a32) main_cset_text_pane_t1

0xd8d1,	// (0x000a1a40) main_cset_text_pane_t2

0xd8df,	// (0x000a1a4e) main_cset_text_pane_t3

0xd8ed,	// (0x000a1a5c) main_cset_text_pane_t4

0xd8fb,	// (0x000a1a6a) main_cset_text_pane_t5

0xd909,	// (0x000a1a78) main_cset_text_pane_t6

0xd917,	// (0x000a1a86) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000a3ba1) main_cset_text_pane_t

0x1213,	// (0x00095382) main_cam4_burst_pane

0x1213,	// (0x00095382) main_cam5_pane

0x6af7,	// (0x0009ac66) bg_button_pane_cp019

0x6b00,	// (0x0009ac6f) bg_button_pane_cp020

0xd740,	// (0x000a18af) main_cset_slider_pane_g7_ParamLimits

0xd740,	// (0x000a18af) main_cset_slider_pane_g7

0xd74c,	// (0x000a18bb) main_cset_slider_pane_g8_ParamLimits

0xd74c,	// (0x000a18bb) main_cset_slider_pane_g8

0x6c49,	// (0x0009adb8) main_cset_slider_pane_g9_ParamLimits

0x6c49,	// (0x0009adb8) main_cset_slider_pane_g9

0x6c55,	// (0x0009adc4) main_cset_slider_pane_g10_ParamLimits

0x6c55,	// (0x0009adc4) main_cset_slider_pane_g10

0x6c61,	// (0x0009add0) main_cset_slider_pane_g11_ParamLimits

0x6c61,	// (0x0009add0) main_cset_slider_pane_g11

0x6c6d,	// (0x0009addc) main_cset_slider_pane_g12_ParamLimits

0x6c6d,	// (0x0009addc) main_cset_slider_pane_g12

0x6c79,	// (0x0009ade8) main_cset_slider_pane_g13_ParamLimits

0x6c79,	// (0x0009ade8) main_cset_slider_pane_g13

0x6c85,	// (0x0009adf4) main_cset_slider_pane_g14_ParamLimits

0x6c85,	// (0x0009adf4) main_cset_slider_pane_g14

0x6c91,	// (0x0009ae00) main_cset_slider_pane_g15_ParamLimits

0x6c91,	// (0x0009ae00) main_cset_slider_pane_g15

0xd792,	// (0x000a1901) main_cset_slider_pane_t14_ParamLimits

0xd792,	// (0x000a1901) main_cset_slider_pane_t14

0xd7cb,	// (0x000a193a) main_cset_slider_pane_t15_ParamLimits

0xd7cb,	// (0x000a193a) main_cset_slider_pane_t15

0x7336,	// (0x0009b4a5) aid_cam4_burst_size_cell_ParamLimits

0x7336,	// (0x0009b4a5) aid_cam4_burst_size_cell

0x7352,	// (0x0009b4c1) grid_cam4_burst_pane_ParamLimits

0x7352,	// (0x0009b4c1) grid_cam4_burst_pane

0x7382,	// (0x0009b4f1) linegrid_cam4_burst_pane_ParamLimits

0x7382,	// (0x0009b4f1) linegrid_cam4_burst_pane

0x73a2,	// (0x0009b511) scroll_pane_cp30_ParamLimits

0x73a2,	// (0x0009b511) scroll_pane_cp30

0x73ae,	// (0x0009b51d) cell_cam4_burst_pane_ParamLimits

0x73ae,	// (0x0009b51d) cell_cam4_burst_pane

0xd925,	// (0x000a1a94) linegrid_cam4_burst_pane_g1_ParamLimits

0xd925,	// (0x000a1a94) linegrid_cam4_burst_pane_g1

0x73ea,	// (0x0009b559) linegrid_cam4_burst_pane_g2_ParamLimits

0x73ea,	// (0x0009b559) linegrid_cam4_burst_pane_g2

0xd932,	// (0x000a1aa1) linegrid_cam4_burst_pane_g3_ParamLimits

0xd932,	// (0x000a1aa1) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000a3bb0) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000a3bb0) linegrid_cam4_burst_pane_g

0x73fb,	// (0x0009b56a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x73fb,	// (0x0009b56a) linegrid_cam4_burst_pane_g3_copy1

0xd93f,	// (0x000a1aae) linegrid_cam4_burst_pane_g4_ParamLimits

0xd93f,	// (0x000a1aae) linegrid_cam4_burst_pane_g4

0x7415,	// (0x0009b584) linegrid_cam4_burst_pane_g5_ParamLimits

0x7415,	// (0x0009b584) linegrid_cam4_burst_pane_g5

0x7426,	// (0x0009b595) linegrid_cam4_burst_pane_g6_ParamLimits

0x7426,	// (0x0009b595) linegrid_cam4_burst_pane_g6

0xd94c,	// (0x000a1abb) linegrid_cam4_burst_pane_g7_ParamLimits

0xd94c,	// (0x000a1abb) linegrid_cam4_burst_pane_g7

0x7437,	// (0x0009b5a6) cell_cam4_burst_pane_g1

0xd965,	// (0x000a1ad4) main_cam5_pane_t1_ParamLimits

0xd965,	// (0x000a1ad4) main_cam5_pane_t1

0xd977,	// (0x000a1ae6) main_cam5_pane_t2_ParamLimits

0xd977,	// (0x000a1ae6) main_cam5_pane_t2

0xd989,	// (0x000a1af8) main_cam5_pane_t3_ParamLimits

0xd989,	// (0x000a1af8) main_cam5_pane_t3

0xd99b,	// (0x000a1b0a) main_cam5_pane_t4_ParamLimits

0xd99b,	// (0x000a1b0a) main_cam5_pane_t4

0xd9b3,	// (0x000a1b22) main_cam5_pane_t5_ParamLimits

0xd9b3,	// (0x000a1b22) main_cam5_pane_t5

0xd9c7,	// (0x000a1b36) main_cam5_pane_t6_ParamLimits

0xd9c7,	// (0x000a1b36) main_cam5_pane_t6

0xd9db,	// (0x000a1b4a) main_cam5_pane_t7_ParamLimits

0xd9db,	// (0x000a1b4a) main_cam5_pane_t7

0xd9ed,	// (0x000a1b5c) main_cam5_pane_t8_ParamLimits

0xd9ed,	// (0x000a1b5c) main_cam5_pane_t8

0xda09,	// (0x000a1b78) main_cam5_pane_t9_ParamLimits

0xda09,	// (0x000a1b78) main_cam5_pane_t9

0xda1b,	// (0x000a1b8a) main_cam5_pane_t10_ParamLimits

0xda1b,	// (0x000a1b8a) main_cam5_pane_t10

0xda2d,	// (0x000a1b9c) main_cam5_pane_t11_ParamLimits

0xda2d,	// (0x000a1b9c) main_cam5_pane_t11

0xda3f,	// (0x000a1bae) main_cam5_pane_t12_ParamLimits

0xda3f,	// (0x000a1bae) main_cam5_pane_t12

0xda54,	// (0x000a1bc3) main_cam5_pane_t13_ParamLimits

0xda54,	// (0x000a1bc3) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000a3bbc) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000a3bbc) main_cam5_pane_t

0x11b8,	// (0x00095327) popup_scut_keymap_window_ParamLimits

0x11b8,	// (0x00095327) popup_scut_keymap_window

0x744a,	// (0x0009b5b9) aid_size_cell_brow_shortcut

0xae0b,	// (0x0009ef7a) bg_popup_window_pane_cp010

0x7456,	// (0x0009b5c5) grid_scut_pane

0x7462,	// (0x0009b5d1) cell_scut_pane_ParamLimits

0x7462,	// (0x0009b5d1) cell_scut_pane

0x7479,	// (0x0009b5e8) cell_scut_pane_g1

0xda71,	// (0x000a1be0) cell_scut_pane_t1

0xda80,	// (0x000a1bef) cell_scut_pane_t2

0x7482,	// (0x0009b5f1) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000a3bd7) cell_scut_pane_t

0x52a8,	// (0x00099417) main_mup3_pane_g8_ParamLimits

0x52a8,	// (0x00099417) main_mup3_pane_g8

0x66c9,	// (0x0009a838) area_vitu2_query_pane_ParamLimits

0x66c9,	// (0x0009a838) area_vitu2_query_pane

0x71e2,	// (0x0009b351) input_focus_pane_cp08

0xda8f,	// (0x000a1bfe) area_vitu2_query_pane_g1

0x7490,	// (0x0009b5ff) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000a3bde) area_vitu2_query_pane_g

0x74a1,	// (0x0009b610) area_vitu2_query_pane_t1_ParamLimits

0x74a1,	// (0x0009b610) area_vitu2_query_pane_t1

0x74b5,	// (0x0009b624) area_vitu2_query_pane_t2_ParamLimits

0x74b5,	// (0x0009b624) area_vitu2_query_pane_t2

0x74c9,	// (0x0009b638) area_vitu2_query_pane_t3_ParamLimits

0x74c9,	// (0x0009b638) area_vitu2_query_pane_t3

0xda9b,	// (0x000a1c0a) area_vitu2_query_pane_t4_ParamLimits

0xda9b,	// (0x000a1c0a) area_vitu2_query_pane_t4

0xdae1,	// (0x000a1c50) area_vitu2_query_pane_t5_ParamLimits

0xdae1,	// (0x000a1c50) area_vitu2_query_pane_t5

0xdb09,	// (0x000a1c78) area_vitu2_query_pane_t6_ParamLimits

0xdb09,	// (0x000a1c78) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000a3be3) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000a3be3) area_vitu2_query_pane_t

0x74f1,	// (0x0009b660) bg_button_pane_cp018

0x74ff,	// (0x0009b66e) bg_button_pane_cp021

0x750b,	// (0x0009b67a) bg_button_pane_cp022

0x751c,	// (0x0009b68b) input_focus_pane_cp09

0xac54,	// (0x0009edc3) aid_size_touch_mv_arrow_left

0xac7d,	// (0x0009edec) aid_size_touch_mv_arrow_right

0x6ca9,	// (0x0009ae18) main_cset_slider_pane_g16_ParamLimits

0x6ca9,	// (0x0009ae18) main_cset_slider_pane_g16

0x6cb7,	// (0x0009ae26) main_cset_slider_pane_g17_ParamLimits

0x6cb7,	// (0x0009ae26) main_cset_slider_pane_g17

0x7437,	// (0x0009b5a6) cell_cam4_burst_pane_g1_ParamLimits

0xec9e,	// (0x000a2e0d) compa_mode_pane

0x6ed5,	// (0x0009b044) popup_vtel_slider_window_g3_ParamLimits

0x6ed5,	// (0x0009b044) popup_vtel_slider_window_g3

0x6ee9,	// (0x0009b058) popup_vtel_slider_window_g4_ParamLimits

0x6ee9,	// (0x0009b058) popup_vtel_slider_window_g4

0x6efd,	// (0x0009b06c) popup_vtel_slider_window_t1_ParamLimits

0x6efd,	// (0x0009b06c) popup_vtel_slider_window_t1

0x1213,	// (0x00095382) main_cl_pane

0x45ee,	// (0x0009875d) popup_imed_adjust2_window_ParamLimits

0xc73f,	// (0x000a08ae) bg_tb_trans_pane_cp05_ParamLimits

0xd0a5,	// (0x000a1214) popup_imed_adjust2_window_g1_ParamLimits

0xd0b4,	// (0x000a1223) popup_imed_adjust2_window_g2_ParamLimits

0xd0b4,	// (0x000a1223) popup_imed_adjust2_window_g2

0xd0c0,	// (0x000a122f) popup_imed_adjust2_window_g3_ParamLimits

0xd0c0,	// (0x000a122f) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000a394e) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000a394e) popup_imed_adjust2_window_g

0xd0cc,	// (0x000a123b) popup_imed_adjust2_window_t1_ParamLimits

0xd0e4,	// (0x000a1253) slider_imed_adjust_pane_ParamLimits

0xd0f8,	// (0x000a1267) slider_imed_adjust_pane_g1_ParamLimits

0xd108,	// (0x000a1277) slider_imed_adjust_pane_g2_ParamLimits

0xd118,	// (0x000a1287) slider_imed_adjust_pane_g3_ParamLimits

0xd129,	// (0x000a1298) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000a3955) slider_imed_adjust_pane_g_ParamLimits

0x6402,	// (0x0009a571) aid_touch_area_cam4_ParamLimits

0x6402,	// (0x0009a571) aid_touch_area_cam4

0x6412,	// (0x0009a581) battery_pane_cp01

0x6499,	// (0x0009a608) main_camera4_pane_g6_ParamLimits

0x6499,	// (0x0009a608) main_camera4_pane_g6

0x64b7,	// (0x0009a626) main_camera4_pane_t2_ParamLimits

0x64b7,	// (0x0009a626) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000a3a58) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000a3a58) main_camera4_pane_t

0x654c,	// (0x0009a6bb) aid_touch_area_vid4_ParamLimits

0x654c,	// (0x0009a6bb) aid_touch_area_vid4

0x658c,	// (0x0009a6fb) main_video4_pane_g5_ParamLimits

0x658c,	// (0x0009a6fb) main_video4_pane_g5

0x65b0,	// (0x0009a71f) vid4_progress_pane_ParamLimits

0x65b0,	// (0x0009a71f) vid4_progress_pane

0xd758,	// (0x000a18c7) main_cset_slider_pane_g18_ParamLimits

0xd758,	// (0x000a18c7) main_cset_slider_pane_g18

0xd959,	// (0x000a1ac8) cell_cam4_burst_pane_g2_ParamLimits

0xd959,	// (0x000a1ac8) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000a3bb7) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000a3bb7) cell_cam4_burst_pane_g

0x752d,	// (0x0009b69c) bg_cl_pane_ParamLimits

0x752d,	// (0x0009b69c) bg_cl_pane

0x7539,	// (0x0009b6a8) cl_header_pane_ParamLimits

0x7539,	// (0x0009b6a8) cl_header_pane

0x7545,	// (0x0009b6b4) cl_listscroll_pane_ParamLimits

0x7545,	// (0x0009b6b4) cl_listscroll_pane

0xdb55,	// (0x000a1cc4) bg_cl_pane_g1

0xdb5d,	// (0x000a1ccc) bg_cl_pane_g2

0xdb65,	// (0x000a1cd4) bg_cl_pane_g3

0xdb6d,	// (0x000a1cdc) bg_cl_pane_g4

0xdb75,	// (0x000a1ce4) bg_cl_pane_g5

0xdb7d,	// (0x000a1cec) bg_cl_pane_g6

0xdb85,	// (0x000a1cf4) bg_cl_pane_g7

0xdb8d,	// (0x000a1cfc) bg_cl_pane_g8

0xdb95,	// (0x000a1d04) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000a3bf2) bg_cl_pane_g

0x7551,	// (0x0009b6c0) aid_height_cl_leading_ParamLimits

0x7551,	// (0x0009b6c0) aid_height_cl_leading

0x755d,	// (0x0009b6cc) aid_height_cl_text_ParamLimits

0x755d,	// (0x0009b6cc) aid_height_cl_text

0xedb1,	// (0x000a2f20) bg_cl_header_pane_ParamLimits

0xedb1,	// (0x000a2f20) bg_cl_header_pane

0x7575,	// (0x0009b6e4) cl_header_pane_g1_ParamLimits

0x7575,	// (0x0009b6e4) cl_header_pane_g1

0x7582,	// (0x0009b6f1) cl_header_pane_t1_ParamLimits

0x7582,	// (0x0009b6f1) cl_header_pane_t1

0xdb9d,	// (0x000a1d0c) cl_list_pane

0xd72b,	// (0x000a189a) hc_scroll_pane_cp01

0xa5dc,	// (0x0009e74b) bg_cl_header_pane_g1

0xd5ff,	// (0x000a176e) bg_cl_header_pane_g2

0xa5fc,	// (0x0009e76b) bg_cl_header_pane_g3

0xd60f,	// (0x000a177e) bg_cl_header_pane_g4

0xd607,	// (0x000a1776) bg_cl_header_pane_g5

0xd859,	// (0x000a19c8) bg_cl_header_pane_g6

0xd627,	// (0x000a1796) bg_cl_header_pane_g7

0xd62f,	// (0x000a179e) bg_cl_header_pane_g8

0xd61f,	// (0x000a178e) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000a3c05) bg_cl_header_pane_g

0x7594,	// (0x0009b703) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7594,	// (0x0009b703) hc_cl_list_double_graphic_heading_pane

0x75a5,	// (0x0009b714) hc_cl_list_single_graphic_pane_ParamLimits

0x75a5,	// (0x0009b714) hc_cl_list_single_graphic_pane

0x75be,	// (0x0009b72d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x75be,	// (0x0009b72d) hc_cl_list_single_graphic_pane_g1

0x75ca,	// (0x0009b739) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x75ca,	// (0x0009b739) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000a3c18) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000a3c18) hc_cl_list_single_graphic_pane_g

0x75de,	// (0x0009b74d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x75de,	// (0x0009b74d) hc_cl_list_single_graphic_pane_t1

0x75be,	// (0x0009b72d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x75be,	// (0x0009b72d) hc_cl_list_double_graphic_heading_pane_g1

0x75f3,	// (0x0009b762) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x75f3,	// (0x0009b762) hc_cl_list_double_graphic_heading_pane_g2

0x7607,	// (0x0009b776) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7607,	// (0x0009b776) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000a3c1d) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000a3c1d) hc_cl_list_double_graphic_heading_pane_g

0x761b,	// (0x0009b78a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x761b,	// (0x0009b78a) hc_cl_list_double_graphic_heading_pane_t1

0x7630,	// (0x0009b79f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7630,	// (0x0009b79f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000a3c24) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000a3c24) hc_cl_list_double_graphic_heading_pane_t

0x764d,	// (0x0009b7bc) vid4_progress_pane_g1

0x765f,	// (0x0009b7ce) vid4_progress_pane_g2

0xa8bd,	// (0x0009ea2c) vid4_progress_pane_g3

0x766f,	// (0x0009b7de) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000a3c29) vid4_progress_pane_g

0x768d,	// (0x0009b7fc) vid4_progress_pane_t1

0x76a2,	// (0x0009b811) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000a3c34) vid4_progress_pane_t

0x76cd,	// (0x0009b83c) wait_bar_pane_cp07

0xc93a,	// (0x000a0aa9) blid_firmament_pane_ParamLimits

0xc97d,	// (0x000a0aec) popup_blid_sat_info2_window_g1

0xc9a1,	// (0x000a0b10) popup_blid_sat_info2_window_t3

0xc9af,	// (0x000a0b1e) popup_blid_sat_info2_window_t4

0xc9bd,	// (0x000a0b2c) popup_blid_sat_info2_window_t5

0xc9cb,	// (0x000a0b3a) popup_blid_sat_info2_window_t6

0xc9db,	// (0x000a0b4a) popup_blid_sat_info2_window_t7

0xc9e9,	// (0x000a0b58) popup_blid_sat_info2_window_t8

0xc9f7,	// (0x000a0b66) popup_blid_sat_info2_window_t9

0xca05,	// (0x000a0b74) popup_blid_sat_info2_window_t10

0xcac7,	// (0x000a0c36) aid_firma_cardinal_ParamLimits

0xcadb,	// (0x000a0c4a) blid_firmament_pane_t1_ParamLimits

0xcaf2,	// (0x000a0c61) blid_firmament_pane_t2_ParamLimits

0xcb09,	// (0x000a0c78) blid_firmament_pane_t3_ParamLimits

0xcb20,	// (0x000a0c8f) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x000a3847) blid_firmament_pane_t_ParamLimits

0xcb37,	// (0x000a0ca6) blid_sat_info_pane_ParamLimits

0x4550,	// (0x000986bf) main_cam_set_pane_ParamLimits

0x5a60,	// (0x00099bcf) aid_size_cell_colour_35_ParamLimits

0x5a7a,	// (0x00099be9) aid_size_cell_colour_112_ParamLimits

0x5a91,	// (0x00099c00) aid_size_cell_effect_ParamLimits

0xb523,	// (0x0009f692) bg_tb_trans_pane_cp02_ParamLimits

0xb531,	// (0x0009f6a0) heading_imed_pane_ParamLimits

0x5aab,	// (0x00099c1a) listscroll_imed_pane_ParamLimits

0xbd5c,	// (0x0009fecb) popup_call2_audio_first_window_g5_ParamLimits

0xbd5c,	// (0x0009fecb) popup_call2_audio_first_window_g5

0x61b1,	// (0x0009a320) aid_size_touch_image3_arrow_left_ParamLimits

0x61b1,	// (0x0009a320) aid_size_touch_image3_arrow_left

0x61c7,	// (0x0009a336) aid_size_touch_image3_arrow_right_ParamLimits

0x61c7,	// (0x0009a336) aid_size_touch_image3_arrow_right

0x76b8,	// (0x0009b827) vid4_progress_pane_t3

0x5d49,	// (0x00099eb8) main_hwr_training_symbol_option_pane_ParamLimits

0x5d49,	// (0x00099eb8) main_hwr_training_symbol_option_pane

0xd392,	// (0x000a1501) popup_hwr_training_preview_window_ParamLimits

0xd392,	// (0x000a1501) popup_hwr_training_preview_window

0x5daa,	// (0x00099f19) hwr_training_navi_pane_g5_ParamLimits

0x5daa,	// (0x00099f19) hwr_training_navi_pane_g5

0xd5ed,	// (0x000a175c) popup_char_count_window

0x11f9,	// (0x00095368) bg_popup_sub_pane_cp20_ParamLimits

0x7006,	// (0x0009b175) list_vitu2_match_list_pane_ParamLimits

0x7012,	// (0x0009b181) vitu2_page_scroll_pane_ParamLimits

0x7012,	// (0x0009b181) vitu2_page_scroll_pane

0xdbc0,	// (0x000a1d2f) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbc0,	// (0x000a1d2f) list_single_hwr_training_symbol_option_pane

0xdbd3,	// (0x000a1d42) list_single_hwr_training_symbol_option_pane_g1

0xdbdb,	// (0x000a1d4a) list_single_hwr_training_symbol_option_pane_t1

0xdbe9,	// (0x000a1d58) bg_button_pane_cp023

0xdbf2,	// (0x000a1d61) bg_button_pane_cp024

0x770e,	// (0x0009b87d) vitu2_page_scroll_pane_g1

0x7716,	// (0x0009b885) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000a3c3b) vitu2_page_scroll_pane_g

0x771e,	// (0x0009b88d) vitu2_page_scroll_pane_t1

0xdc25,	// (0x000a1d94) popup_char_count_window_g1

0xdc2e,	// (0x000a1d9d) popup_char_count_window_g2

0xdc37,	// (0x000a1da6) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000a3c40) popup_char_count_window_g

0xdc40,	// (0x000a1daf) popup_char_count_window_t1

0x1213,	// (0x00095382) main_vded2_pane

0xd091,	// (0x000a1200) aid_size_cell_imed_line

0xd09b,	// (0x000a120a) grid_imed_line_width_pane

0x661e,	// (0x0009a78d) vid4_indicators_pane_g4

0xdc4e,	// (0x000a1dbd) cell_imed_line_width_pane_ParamLimits

0xdc4e,	// (0x000a1dbd) cell_imed_line_width_pane

0xdc62,	// (0x000a1dd1) cell_imed_line_width_pane_g1

0xdacf,	// (0x000a1c3e) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000a3c47) cell_imed_line_width_pane_g

0x772d,	// (0x0009b89c) main_vded2_pane_g1_ParamLimits

0x772d,	// (0x0009b89c) main_vded2_pane_g1

0x773a,	// (0x0009b8a9) main_vded2_pane_g2_ParamLimits

0x773a,	// (0x0009b8a9) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000a3c4c) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000a3c4c) main_vded2_pane_g

0x7748,	// (0x0009b8b7) vded2_slider_pane_ParamLimits

0x7748,	// (0x0009b8b7) vded2_slider_pane

0x7755,	// (0x0009b8c4) aid_size_touch_vded2_end

0x775f,	// (0x0009b8ce) aid_size_touch_vded2_playhead

0xdc6b,	// (0x000a1dda) aid_size_touch_vded2_start

0xdc73,	// (0x000a1de2) vded2_slider_bg_pane

0xdc7c,	// (0x000a1deb) vded2_slider_pane_g1

0xdc85,	// (0x000a1df4) vded2_slider_pane_g2

0x7767,	// (0x0009b8d6) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000a3c51) vded2_slider_pane_g

0xdc8d,	// (0x000a1dfc) vded2_slider_bg_pane_g1

0xdc96,	// (0x000a1e05) vded2_slider_bg_pane_g2

0xdc9f,	// (0x000a1e0e) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x000a3c58) vded2_slider_bg_pane_g

0x3e38,	// (0x00097fa7) aid_postcard_touch_down_pane_ParamLimits

0x3e38,	// (0x00097fa7) aid_postcard_touch_down_pane

0x3e48,	// (0x00097fb7) aid_postcard_touch_up_pane_ParamLimits

0x3e48,	// (0x00097fb7) aid_postcard_touch_up_pane

0x1213,	// (0x00095382) main_blid2_pane

0x4579,	// (0x000986e8) popup_blid2_search_window

0xec9e,	// (0x000a2e0d) blid2_gps_pane

0xec9e,	// (0x000a2e0d) blid2_navig_pane

0xec9e,	// (0x000a2e0d) blid2_search_pane

0xec9e,	// (0x000a2e0d) blid2_tripm_pane

0x7770,	// (0x0009b8df) blid2_search_pane_g1_ParamLimits

0x7770,	// (0x0009b8df) blid2_search_pane_g1

0x7780,	// (0x0009b8ef) blid2_search_pane_t1_ParamLimits

0x7780,	// (0x0009b8ef) blid2_search_pane_t1

0x7792,	// (0x0009b901) aid_size_cell_blid2_gps_ParamLimits

0x7792,	// (0x0009b901) aid_size_cell_blid2_gps

0x77a2,	// (0x0009b911) blid2_gps_pane_g1_ParamLimits

0x77a2,	// (0x0009b911) blid2_gps_pane_g1

0x77ae,	// (0x0009b91d) grid_blid2_satellite_pane_ParamLimits

0x77ae,	// (0x0009b91d) grid_blid2_satellite_pane

0x77be,	// (0x0009b92d) blid2_navig_pane_g1_ParamLimits

0x77be,	// (0x0009b92d) blid2_navig_pane_g1

0x77ca,	// (0x0009b939) blid2_navig_pane_t1_ParamLimits

0x77ca,	// (0x0009b939) blid2_navig_pane_t1

0x77dc,	// (0x0009b94b) blid2_navig_pane_t2_ParamLimits

0x77dc,	// (0x0009b94b) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x000a3c5f) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x000a3c5f) blid2_navig_pane_t

0x77ee,	// (0x0009b95d) blid2_navig_ring_pane_ParamLimits

0x77ee,	// (0x0009b95d) blid2_navig_ring_pane

0x77fe,	// (0x0009b96d) blid2_speed_pane_ParamLimits

0x77fe,	// (0x0009b96d) blid2_speed_pane

0x780a,	// (0x0009b979) blid2_tripm_pane_g1_ParamLimits

0x780a,	// (0x0009b979) blid2_tripm_pane_g1

0x781a,	// (0x0009b989) blid2_tripm_pane_g2_ParamLimits

0x781a,	// (0x0009b989) blid2_tripm_pane_g2

0x7826,	// (0x0009b995) blid2_tripm_pane_g3_ParamLimits

0x7826,	// (0x0009b995) blid2_tripm_pane_g3

0x7832,	// (0x0009b9a1) blid2_tripm_pane_g4_ParamLimits

0x7832,	// (0x0009b9a1) blid2_tripm_pane_g4

0x783e,	// (0x0009b9ad) blid2_tripm_pane_g5_ParamLimits

0x783e,	// (0x0009b9ad) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x000a3c64) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x000a3c64) blid2_tripm_pane_g

0x785a,	// (0x0009b9c9) blid2_tripm_pane_t1_ParamLimits

0x785a,	// (0x0009b9c9) blid2_tripm_pane_t1

0x786e,	// (0x0009b9dd) blid2_tripm_pane_t2_ParamLimits

0x786e,	// (0x0009b9dd) blid2_tripm_pane_t2

0x7880,	// (0x0009b9ef) blid2_tripm_pane_t3_ParamLimits

0x7880,	// (0x0009b9ef) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x000a3c71) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x000a3c71) blid2_tripm_pane_t

0x78b2,	// (0x0009ba21) cell_blid2_satellite_pane_ParamLimits

0x78b2,	// (0x0009ba21) cell_blid2_satellite_pane

0x78cc,	// (0x0009ba3b) cell_blid2_satellite_pane_g1

0xdca8,	// (0x000a1e17) cell_blid2_satellite_pane_t1

0xcb47,	// (0x000a0cb6) blid2_speed_pane_g1

0xdcb6,	// (0x000a1e25) blid2_speed_pane_t1

0xdcc4,	// (0x000a1e33) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x000a3c7a) blid2_speed_pane_t

0xcb47,	// (0x000a0cb6) blid2_navig_ring_pane_g1

0x78d5,	// (0x0009ba44) blid2_navig_ring_pane_g2

0x78dd,	// (0x0009ba4c) blid2_navig_ring_pane_g3

0x78e5,	// (0x0009ba54) blid2_navig_ring_pane_g4

0x78ed,	// (0x0009ba5c) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x000a3c7f) blid2_navig_ring_pane_g

0xec9e,	// (0x000a2e0d) bg_popup_window_pane_cp011

0xdcd2,	// (0x000a1e41) popup_blid2_search_window_g1

0xdcda,	// (0x000a1e49) popup_blid2_search_window_t1

0xdce8,	// (0x000a1e57) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x000a3c8a) popup_blid2_search_window_t

0xa4eb,	// (0x0009e65a) main_browser_pane_g1

0xa1e5,	// (0x0009e354) main_browser_pane_ParamLimits

0x4550,	// (0x000986bf) bg_button_pane_cp011_ParamLimits

0x68ca,	// (0x0009aa39) cell_vitu2_function_pane_g1_ParamLimits

0xc73f,	// (0x000a08ae) bg_popup_sub_pane_cp22_ParamLimits

0x71e2,	// (0x0009b351) input_focus_pane_cp08_ParamLimits

0x71f9,	// (0x0009b368) popup_vitu2_query_button_pane_ParamLimits

0x71f9,	// (0x0009b368) popup_vitu2_query_button_pane

0x720a,	// (0x0009b379) popup_vitu2_query_input_button_pane

0xd8af,	// (0x000a1a1e) popup_vitu2_query_window_g1_ParamLimits

0x7214,	// (0x0009b383) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000a3b8b) popup_vitu2_query_window_g_ParamLimits

0xec9e,	// (0x000a2e0d) bg_button_pane_cp026

0x78f5,	// (0x0009ba64) popup_vitu2_query_input_button_pane_g1

0xec9e,	// (0x000a2e0d) bg_button_pane_cp025

0xdcf6,	// (0x000a1e65) popup_vitu2_query_button_pane_t1

0x4fcf,	// (0x0009913e) main_mp3_pane_t6

0x4fdf,	// (0x0009914e) popup_slider_window_cp01

0x64fb,	// (0x0009a66a) cam4_battery_pane

0x65db,	// (0x0009a74a) cam4_battery_pane_cp02

0x7645,	// (0x0009b7b4) cam4_battery_pane_cp01

0x7645,	// (0x0009b7b4) cam4_battery_pane_cp03

0xdad7,	// (0x000a1c46) cam4_battery_pane_g1

0xcb47,	// (0x000a0cb6) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x000a3c8f) cam4_battery_pane_g

0xca13,	// (0x000a0b82) popup_blid_sat_info2_window_t11

0xac54,	// (0x0009edc3) aid_size_touch_mv_arrow_left_ParamLimits

0xac7d,	// (0x0009edec) aid_size_touch_mv_arrow_right_ParamLimits

0xacdb,	// (0x0009ee4a) navi_pane_g1_ParamLimits

0xace7,	// (0x0009ee56) navi_pane_g2_ParamLimits

0xad15,	// (0x0009ee84) navi_pane_g3_ParamLimits

0xf3ea,	// (0x000a3559) navi_pane_g_ParamLimits

0x37cf,	// (0x0009793e) navi_pane_mv_t1_ParamLimits

0x5ab7,	// (0x00099c26) grid_imed_effect_pane_ParamLimits

0x2182,	// (0x000962f1) aid_placing_vt_slider_lsc

0xa43a,	// (0x0009e5a9) aid_placing_vt_slider_prt

0xb523,	// (0x0009f692) bg_tb_trans_pane_cp01_ParamLimits

0xccca,	// (0x000a0e39) popup_image_details_window_g1_ParamLimits

0xccdd,	// (0x000a0e4c) popup_image_details_window_g2_ParamLimits

0xccf2,	// (0x000a0e61) popup_image_details_window_g3_ParamLimits

0xccf2,	// (0x000a0e61) popup_image_details_window_g3

0xf71d,	// (0x000a388c) popup_image_details_window_g_ParamLimits

0xcd06,	// (0x000a0e75) popup_image_details_window_t1_ParamLimits

0xcd18,	// (0x000a0e87) popup_image_details_window_t2_ParamLimits

0xcd31,	// (0x000a0ea0) popup_image_details_window_t3_ParamLimits

0xcd45,	// (0x000a0eb4) popup_image_details_window_t4_ParamLimits

0xcd60,	// (0x000a0ecf) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x000a3893) popup_image_details_window_t_ParamLimits

0x7569,	// (0x0009b6d8) cl_header_name_pane_ParamLimits

0x7569,	// (0x0009b6d8) cl_header_name_pane

0x78fd,	// (0x0009ba6c) cl_header_name_pane_t1_ParamLimits

0x78fd,	// (0x0009ba6c) cl_header_name_pane_t1

0x7914,	// (0x0009ba83) cl_header_name_pane_t2_ParamLimits

0x7914,	// (0x0009ba83) cl_header_name_pane_t2

0x793e,	// (0x0009baad) cl_header_name_pane_t3_ParamLimits

0x793e,	// (0x0009baad) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x000a3c94) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x000a3c94) cl_header_name_pane_t

0xada4,	// (0x0009ef13) navi_pane_mv_g2_ParamLimits

0xd5aa,	// (0x000a1719) field_vitu2_entry_pane_g1_ParamLimits

0xd5b6,	// (0x000a1725) field_vitu2_entry_pane_g2_ParamLimits

0xd5c2,	// (0x000a1731) field_vitu2_entry_pane_g3_ParamLimits

0xd5c2,	// (0x000a1731) field_vitu2_entry_pane_g3

0xf91b,	// (0x000a3a8a) field_vitu2_entry_pane_g_ParamLimits

0x6855,	// (0x0009a9c4) cell_vitu2_itu_pane_g1_ParamLimits

0x6865,	// (0x0009a9d4) cell_vitu2_itu_pane_g2_ParamLimits

0x6865,	// (0x0009a9d4) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000a3a96) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000a3a96) cell_vitu2_itu_pane_g

0x4550,	// (0x000986bf) bg_vkb2_func_pane_cp05_ParamLimits

0x4550,	// (0x000986bf) bg_vkb2_func_pane_cp05

0x4550,	// (0x000986bf) bg_vkb2_func_pane_cp03

0x4550,	// (0x000986bf) bg_vkb2_func_pane_cp04

0x4550,	// (0x000986bf) bg_vkb2_func_pane_cp10_ParamLimits

0x4550,	// (0x000986bf) bg_vkb2_func_pane_cp10

0x750b,	// (0x0009b67a) bg_vkb2_func_pane_cp08

0x74f1,	// (0x0009b660) bg_vkb2_func_pane_cp06

0x74ff,	// (0x0009b66e) bg_vkb2_func_pane_cp07

0xdbfb,	// (0x000a1d6a) bg_vkb2_func_pane_cp11_ParamLimits

0xdbfb,	// (0x000a1d6a) bg_vkb2_func_pane_cp11

0xdc10,	// (0x000a1d7f) bg_vkb2_func_pane_cp12_ParamLimits

0xdc10,	// (0x000a1d7f) bg_vkb2_func_pane_cp12

0xec9e,	// (0x000a2e0d) bg_vkb2_func_pane_cp09

0xd5ff,	// (0x000a176e) bg_vkb2_func_pane_g1

0xa5fc,	// (0x0009e76b) bg_vkb2_func_pane_g2

0xd607,	// (0x000a1776) bg_vkb2_func_pane_g3

0xd60f,	// (0x000a177e) bg_vkb2_func_pane_g4

0xd859,	// (0x000a19c8) bg_vkb2_func_pane_g5

0xd627,	// (0x000a1796) bg_vkb2_func_pane_g6

0xd62f,	// (0x000a179e) bg_vkb2_func_pane_g7

0xd61f,	// (0x000a178e) bg_vkb2_func_pane_g8

0xa5dc,	// (0x0009e74b) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x000a3c9b) bg_vkb2_func_pane_g

0x784c,	// (0x0009b9bb) blid2_tripm_pane_g6_ParamLimits

0x784c,	// (0x0009b9bb) blid2_tripm_pane_g6

0xd44a,	// (0x000a15b9) mp4_progress_pane_g1

0x78a6,	// (0x0009ba15) blid2_tripm_values_pane_ParamLimits

0x78a6,	// (0x0009ba15) blid2_tripm_values_pane

0x7963,	// (0x0009bad2) blid2_tripm_values_pane_t1

0x7971,	// (0x0009bae0) blid2_tripm_values_pane_t2

0x797f,	// (0x0009baee) blid2_tripm_values_pane_t3

0x798d,	// (0x0009bafc) blid2_tripm_values_pane_t4

0x799b,	// (0x0009bb0a) blid2_tripm_values_pane_t5

0x79a9,	// (0x0009bb18) blid2_tripm_values_pane_t6

0x79b7,	// (0x0009bb26) blid2_tripm_values_pane_t7

0x79c5,	// (0x0009bb34) blid2_tripm_values_pane_t8

0x79d3,	// (0x0009bb42) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x000a3cae) blid2_tripm_values_pane_t

0x21c2,	// (0x00096331) call_video_pane_t1_ParamLimits

0x21e3,	// (0x00096352) call_video_pane_t2_ParamLimits

0xf273,	// (0x000a33e2) call_video_pane_t_ParamLimits

0x3d09,	// (0x00097e78) msg_header_pane_g1_ParamLimits

0xaf7d,	// (0x0009f0ec) msg_header_pane_g2_ParamLimits

0xaf7d,	// (0x0009f0ec) msg_header_pane_g2

0x0001,

0xf48d,	// (0x000a35fc) msg_header_pane_g_ParamLimits

0xf48d,	// (0x000a35fc) msg_header_pane_g

0xa1e5,	// (0x0009e354) main_clock2_pane_ParamLimits

0x5850,	// (0x000999bf) grid_clock2_toolbar_pane_ParamLimits

0x5850,	// (0x000999bf) grid_clock2_toolbar_pane

0x5850,	// (0x000999bf) listscroll_clock2_pane_ParamLimits

0x5850,	// (0x000999bf) listscroll_clock2_pane

0x58f4,	// (0x00099a63) main_clock2_pane_t3_ParamLimits

0x58f4,	// (0x00099a63) main_clock2_pane_t3

0x5906,	// (0x00099a75) main_clock2_pane_t4_ParamLimits

0x5906,	// (0x00099a75) main_clock2_pane_t4

0xdd12,	// (0x000a1e81) cell_clock2_toolbar_pane

0xdd1a,	// (0x000a1e89) cell_clock2_toolbar_pane_cp01

0xdd1a,	// (0x000a1e89) cell_clock2_toolbar_pane_cp02

0xdd22,	// (0x000a1e91) cell_clock2_toolbar_pane_cp03

0xdd2a,	// (0x000a1e99) list_clock2_pane

0xabca,	// (0x0009ed39) scroll_pane_cp10

0xdd32,	// (0x000a1ea1) list_single_clock2_pane_ParamLimits

0xdd32,	// (0x000a1ea1) list_single_clock2_pane

0xae0b,	// (0x0009ef7a) list_highlight_pane_cp08

0xdd3f,	// (0x000a1eae) list_single_clock2_pane_t1

0xdd4d,	// (0x000a1ebc) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000a3cc1) list_single_clock2_pane_t

0xec9e,	// (0x000a2e0d) bg_button_pane_cp10

0xdd5b,	// (0x000a1eca) cell_clock2_toolbar_pane_g1

0x3da6,	// (0x00097f15) aid_main_viewer_pane_g1_ParamLimits

0x3da6,	// (0x00097f15) aid_main_viewer_pane_g1

0x3db2,	// (0x00097f21) aid_main_viewer_pane_g2_ParamLimits

0x3db2,	// (0x00097f21) aid_main_viewer_pane_g2

0x3dbe,	// (0x00097f2d) aid_main_viewer_pane_g3_ParamLimits

0x3dbe,	// (0x00097f2d) aid_main_viewer_pane_g3

0x3dcf,	// (0x00097f3e) aid_main_viewer_pane_g4_ParamLimits

0x3dcf,	// (0x00097f3e) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x000a360d) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x000a360d) aid_main_viewer_pane_g

0x4543,	// (0x000986b2) main_calc_pane_ParamLimits

0x455e,	// (0x000986cd) main_dialer2_pane_ParamLimits

0x1213,	// (0x00095382) main_cam6_pane

0x1213,	// (0x00095382) main_vid6_pane

0x585c,	// (0x000999cb) listscroll_gen_pane_cp06_ParamLimits

0x585c,	// (0x000999cb) listscroll_gen_pane_cp06

0x5918,	// (0x00099a87) main_clock2_pane_t5_ParamLimits

0x5918,	// (0x00099a87) main_clock2_pane_t5

0x5961,	// (0x00099ad0) aid_call2_pane_cp10_ParamLimits

0x5973,	// (0x00099ae2) aid_call_pane_cp10_ParamLimits

0xac48,	// (0x0009edb7) popup_clock_analogue_window_cp10_g1_ParamLimits

0xac48,	// (0x0009edb7) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5985,	// (0x00099af4) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5985,	// (0x00099af4) popup_clock_analogue_window_cp10_g4_ParamLimits

0xac48,	// (0x0009edb7) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000a3943) popup_clock_analogue_window_cp10_g_ParamLimits

0x5997,	// (0x00099b06) popup_clock_analogue_window_cp10_t1_ParamLimits

0x615e,	// (0x0009a2cd) cell_dialer2_keypad_pane_g2_ParamLimits

0x615e,	// (0x0009a2cd) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000a3a29) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000a3a29) cell_dialer2_keypad_pane_g

0x617a,	// (0x0009a2e9) cell_dialer2_keypad_pane_t1

0x6b95,	// (0x0009ad04) main_cset_text2_pane_ParamLimits

0x6b95,	// (0x0009ad04) main_cset_text2_pane

0xda8f,	// (0x000a1bfe) area_vitu2_query_pane_g1_ParamLimits

0x7490,	// (0x0009b5ff) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000a3bde) area_vitu2_query_pane_g_ParamLimits

0xdb31,	// (0x000a1ca0) area_vitu2_query_pane_t7_ParamLimits

0xdb31,	// (0x000a1ca0) area_vitu2_query_pane_t7

0x74f1,	// (0x0009b660) bg_button_pane_cp018_ParamLimits

0x74ff,	// (0x0009b66e) bg_button_pane_cp021_ParamLimits

0x750b,	// (0x0009b67a) bg_button_pane_cp022_ParamLimits

0x750b,	// (0x0009b67a) bg_vkb2_func_pane_cp08_ParamLimits

0x74f1,	// (0x0009b660) bg_vkb2_func_pane_cp06_ParamLimits

0x74ff,	// (0x0009b66e) bg_vkb2_func_pane_cp07_ParamLimits

0x751c,	// (0x0009b68b) input_focus_pane_cp09_ParamLimits

0x79e1,	// (0x0009bb50) cam6_autofocus_pane_ParamLimits

0x79e1,	// (0x0009bb50) cam6_autofocus_pane

0x7a03,	// (0x0009bb72) cam6_image_uncrop_pane_ParamLimits

0x7a03,	// (0x0009bb72) cam6_image_uncrop_pane

0x7a30,	// (0x0009bb9f) cam6_indi_pane_ParamLimits

0x7a30,	// (0x0009bb9f) cam6_indi_pane

0x7a4a,	// (0x0009bbb9) cam6_mode_pane_ParamLimits

0x7a4a,	// (0x0009bbb9) cam6_mode_pane

0x7a5e,	// (0x0009bbcd) cam6_timer_pane_ParamLimits

0x7a5e,	// (0x0009bbcd) cam6_timer_pane

0x7a6a,	// (0x0009bbd9) cam6_zoom_pane_ParamLimits

0x7a6a,	// (0x0009bbd9) cam6_zoom_pane

0x7a82,	// (0x0009bbf1) cam6_mode_pane_g1_ParamLimits

0x7a82,	// (0x0009bbf1) cam6_mode_pane_g1

0x7a8e,	// (0x0009bbfd) cam6_mode_pane_g2_ParamLimits

0x7a8e,	// (0x0009bbfd) cam6_mode_pane_g2

0x7a9a,	// (0x0009bc09) cam6_mode_pane_g3_ParamLimits

0x7a9a,	// (0x0009bc09) cam6_mode_pane_g3

0x7aa6,	// (0x0009bc15) cam6_mode_pane_g4_ParamLimits

0x7aa6,	// (0x0009bc15) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000a3cc6) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000a3cc6) cam6_mode_pane_g

0xdd04,	// (0x000a1e73) bg_tb_trans_pane_cp08_ParamLimits

0xdd04,	// (0x000a1e73) bg_tb_trans_pane_cp08

0xdd63,	// (0x000a1ed2) cam6_battery_pane_ParamLimits

0xdd63,	// (0x000a1ed2) cam6_battery_pane

0xdd79,	// (0x000a1ee8) cam6_indi_pane_g1_ParamLimits

0xdd79,	// (0x000a1ee8) cam6_indi_pane_g1

0xdd8b,	// (0x000a1efa) cam6_indi_pane_g2_ParamLimits

0xdd8b,	// (0x000a1efa) cam6_indi_pane_g2

0xdd9d,	// (0x000a1f0c) cam6_indi_pane_g3_ParamLimits

0xdd9d,	// (0x000a1f0c) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000a3ccf) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000a3ccf) cam6_indi_pane_g

0xddaf,	// (0x000a1f1e) cam6_indi_pane_t1_ParamLimits

0xddaf,	// (0x000a1f1e) cam6_indi_pane_t1

0x665b,	// (0x0009a7ca) cam6_autofocus_pane_g1

0x6653,	// (0x0009a7c2) cam6_autofocus_pane_g2

0x666b,	// (0x0009a7da) cam6_autofocus_pane_g3

0x6663,	// (0x0009a7d2) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000a3cd6) cam6_autofocus_pane_g

0xddd5,	// (0x000a1f44) cam6_timer_pane_g1

0xdddd,	// (0x000a1f4c) cam6_timer_pane_t1

0xddeb,	// (0x000a1f5a) cam6_zoom_cont_pane

0xddf3,	// (0x000a1f62) cam6_zoom_pane_g1

0xddfb,	// (0x000a1f6a) cam6_zoom_pane_g2

0x7ab2,	// (0x0009bc21) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000a3cdf) cam6_zoom_pane_g

0xcb47,	// (0x000a0cb6) cam6_battery_pane_g1

0xcb47,	// (0x000a0cb6) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x000a3850) cam6_battery_pane_g

0xde03,	// (0x000a1f72) cam6_zoom_cont_pane_g1

0xde0c,	// (0x000a1f7b) cam6_zoom_cont_pane_g2

0xde15,	// (0x000a1f84) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000a3ce6) cam6_zoom_cont_pane_g

0x7acf,	// (0x0009bc3e) cam6_mode_pane_cp_ParamLimits

0x7acf,	// (0x0009bc3e) cam6_mode_pane_cp

0x7ae3,	// (0x0009bc52) cam6_zoom_pane_cp_ParamLimits

0x7ae3,	// (0x0009bc52) cam6_zoom_pane_cp

0x7afb,	// (0x0009bc6a) vid6_image_uncrop_cif_pane_ParamLimits

0x7afb,	// (0x0009bc6a) vid6_image_uncrop_cif_pane

0x7b27,	// (0x0009bc96) vid6_image_uncrop_nhd_pane_ParamLimits

0x7b27,	// (0x0009bc96) vid6_image_uncrop_nhd_pane

0x7b44,	// (0x0009bcb3) vid6_image_uncrop_vga_pane_ParamLimits

0x7b44,	// (0x0009bcb3) vid6_image_uncrop_vga_pane

0x7b63,	// (0x0009bcd2) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b63,	// (0x0009bcd2) vid6_image_uncrop_wvga_pane

0x7b80,	// (0x0009bcef) vid6_indi_pane_ParamLimits

0x7b80,	// (0x0009bcef) vid6_indi_pane

0xdd04,	// (0x000a1e73) bg_tb_trans_pane_cp09_ParamLimits

0xdd04,	// (0x000a1e73) bg_tb_trans_pane_cp09

0xde2d,	// (0x000a1f9c) cam6_battery_pane_cp_ParamLimits

0xde2d,	// (0x000a1f9c) cam6_battery_pane_cp

0xde39,	// (0x000a1fa8) vid6_indi_pane_g1_ParamLimits

0xde39,	// (0x000a1fa8) vid6_indi_pane_g1

0xde4b,	// (0x000a1fba) vid6_indi_pane_g2_ParamLimits

0xde4b,	// (0x000a1fba) vid6_indi_pane_g2

0xde5d,	// (0x000a1fcc) vid6_indi_pane_g3_ParamLimits

0xde5d,	// (0x000a1fcc) vid6_indi_pane_g3

0xde72,	// (0x000a1fe1) vid6_indi_pane_g4_ParamLimits

0xde72,	// (0x000a1fe1) vid6_indi_pane_g4

0xde87,	// (0x000a1ff6) vid6_indi_pane_g5_ParamLimits

0xde87,	// (0x000a1ff6) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000a3ced) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000a3ced) vid6_indi_pane_g

0xdea1,	// (0x000a2010) vid6_indi_pane_t1_ParamLimits

0xdea1,	// (0x000a2010) vid6_indi_pane_t1

0xdeb7,	// (0x000a2026) vid6_indi_pane_t2_ParamLimits

0xdeb7,	// (0x000a2026) vid6_indi_pane_t2

0xdedf,	// (0x000a204e) vid6_indi_pane_t3_ParamLimits

0xdedf,	// (0x000a204e) vid6_indi_pane_t3

0xdf07,	// (0x000a2076) vid6_indi_pane_t4_ParamLimits

0xdf07,	// (0x000a2076) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000a3cf8) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000a3cf8) vid6_indi_pane_t

0xdf2b,	// (0x000a209a) wait_bar_pane_cp08

0x7ba5,	// (0x0009bd14) main_cset_text2_pane_t1_ParamLimits

0x7ba5,	// (0x0009bd14) main_cset_text2_pane_t1

0x7aba,	// (0x0009bc29) listscroll_gen_pane_cp06_t1_ParamLimits

0x7aba,	// (0x0009bc29) listscroll_gen_pane_cp06_t1

0x1213,	// (0x00095382) main_cam6_set_pane

0x64ed,	// (0x0009a65c) bg_tb_trans_pane_cp06_ParamLimits

0x6503,	// (0x0009a672) cam4_indicators_pane_g1_ParamLimits

0x6514,	// (0x0009a683) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000a3a66) cam4_indicators_pane_g_ParamLimits

0x6532,	// (0x0009a6a1) cam4_indicators_pane_t1_ParamLimits

0x4550,	// (0x000986bf) bg_tb_trans_pane_cp07_ParamLimits

0x65e5,	// (0x0009a754) vid4_indicators_pane_g1_ParamLimits

0x65f9,	// (0x0009a768) vid4_indicators_pane_g2_ParamLimits

0x660d,	// (0x0009a77c) vid4_indicators_pane_g3_ParamLimits

0x661e,	// (0x0009a78d) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000a3a78) vid4_indicators_pane_g_ParamLimits

0x663c,	// (0x0009a7ab) vid4_indicators_pane_t1_ParamLimits

0x764d,	// (0x0009b7bc) vid4_progress_pane_g1_ParamLimits

0x765f,	// (0x0009b7ce) vid4_progress_pane_g2_ParamLimits

0xa8bd,	// (0x0009ea2c) vid4_progress_pane_g3_ParamLimits

0x766f,	// (0x0009b7de) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000a3c29) vid4_progress_pane_g_ParamLimits

0x768d,	// (0x0009b7fc) vid4_progress_pane_t1_ParamLimits

0x76a2,	// (0x0009b811) vid4_progress_pane_t2_ParamLimits

0x76b8,	// (0x0009b827) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000a3c34) vid4_progress_pane_t_ParamLimits

0x76cd,	// (0x0009b83c) wait_bar_pane_cp07_ParamLimits

0x7bd8,	// (0x0009bd47) main_cam6_set_pane_g2_ParamLimits

0x7bd8,	// (0x0009bd47) main_cam6_set_pane_g2

0x7be4,	// (0x0009bd53) main_cset6_listscroll_pane_ParamLimits

0x7be4,	// (0x0009bd53) main_cset6_listscroll_pane

0x7c0f,	// (0x0009bd7e) main_cset6_slider_pane_ParamLimits

0x7c0f,	// (0x0009bd7e) main_cset6_slider_pane

0x7c1b,	// (0x0009bd8a) main_cset6_text2_pane_ParamLimits

0x7c1b,	// (0x0009bd8a) main_cset6_text2_pane

0xdf3a,	// (0x000a20a9) main_cset6_text_pane

0xdf42,	// (0x000a20b1) main_cset_list_pane_copy1_ParamLimits

0xdf42,	// (0x000a20b1) main_cset_list_pane_copy1

0xdf52,	// (0x000a20c1) scroll_pane_cp028_copy1

0x7c2e,	// (0x0009bd9d) cset_list_set_pane_copy1

0x7c41,	// (0x0009bdb0) aid_position_infowindow_above_copy1

0x7c49,	// (0x0009bdb8) aid_position_infowindow_below_copy1

0x7c51,	// (0x0009bdc0) cset_list_set_pane_g1_copy1

0xd804,	// (0x000a1973) cset_list_set_pane_g3_copy1_ParamLimits

0xd804,	// (0x000a1973) cset_list_set_pane_g3_copy1

0xd813,	// (0x000a1982) cset_list_set_pane_t1_copy1_ParamLimits

0xd813,	// (0x000a1982) cset_list_set_pane_t1_copy1

0xb523,	// (0x0009f692) list_highlight_pane_cp021_copy1_ParamLimits

0xb523,	// (0x0009f692) list_highlight_pane_cp021_copy1

0xdf5b,	// (0x000a20ca) cset6_slider_pane_ParamLimits

0xdf5b,	// (0x000a20ca) cset6_slider_pane

0xdf87,	// (0x000a20f6) main_cset6_slider_pane_g1_ParamLimits

0xdf87,	// (0x000a20f6) main_cset6_slider_pane_g1

0x7c59,	// (0x0009bdc8) main_cset6_slider_pane_g2_ParamLimits

0x7c59,	// (0x0009bdc8) main_cset6_slider_pane_g2

0xdfaf,	// (0x000a211e) main_cset6_slider_pane_g3_ParamLimits

0xdfaf,	// (0x000a211e) main_cset6_slider_pane_g3

0x7c81,	// (0x0009bdf0) main_cset6_slider_pane_g4_ParamLimits

0x7c81,	// (0x0009bdf0) main_cset6_slider_pane_g4

0x7c8d,	// (0x0009bdfc) main_cset6_slider_pane_g5_ParamLimits

0x7c8d,	// (0x0009bdfc) main_cset6_slider_pane_g5

0xd740,	// (0x000a18af) main_cset6_slider_pane_g7_ParamLimits

0xd740,	// (0x000a18af) main_cset6_slider_pane_g7

0xd74c,	// (0x000a18bb) main_cset6_slider_pane_g8_ParamLimits

0xd74c,	// (0x000a18bb) main_cset6_slider_pane_g8

0x7c9b,	// (0x0009be0a) main_cset6_slider_pane_g9_ParamLimits

0x7c9b,	// (0x0009be0a) main_cset6_slider_pane_g9

0x7ca7,	// (0x0009be16) main_cset6_slider_pane_g10_ParamLimits

0x7ca7,	// (0x0009be16) main_cset6_slider_pane_g10

0x7cb3,	// (0x0009be22) main_cset6_slider_pane_g11_ParamLimits

0x7cb3,	// (0x0009be22) main_cset6_slider_pane_g11

0x7cbf,	// (0x0009be2e) main_cset6_slider_pane_g12_ParamLimits

0x7cbf,	// (0x0009be2e) main_cset6_slider_pane_g12

0x7ccb,	// (0x0009be3a) main_cset6_slider_pane_g13_ParamLimits

0x7ccb,	// (0x0009be3a) main_cset6_slider_pane_g13

0x7cd7,	// (0x0009be46) main_cset6_slider_pane_g14_ParamLimits

0x7cd7,	// (0x0009be46) main_cset6_slider_pane_g14

0x7ce3,	// (0x0009be52) main_cset6_slider_pane_g15_ParamLimits

0x7ce3,	// (0x0009be52) main_cset6_slider_pane_g15

0x7cfb,	// (0x0009be6a) main_cset6_slider_pane_g16_ParamLimits

0x7cfb,	// (0x0009be6a) main_cset6_slider_pane_g16

0x7d09,	// (0x0009be78) main_cset6_slider_pane_g17_ParamLimits

0x7d09,	// (0x0009be78) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000a3d01) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000a3d01) main_cset6_slider_pane_g

0xdfbb,	// (0x000a212a) main_cset6_slider_pane_t1_ParamLimits

0xdfbb,	// (0x000a212a) main_cset6_slider_pane_t1

0x7d2f,	// (0x0009be9e) main_cset6_slider_pane_t2_ParamLimits

0x7d2f,	// (0x0009be9e) main_cset6_slider_pane_t2

0x7d5a,	// (0x0009bec9) main_cset6_slider_pane_t3_ParamLimits

0x7d5a,	// (0x0009bec9) main_cset6_slider_pane_t3

0x7d85,	// (0x0009bef4) main_cset6_slider_pane_t4_ParamLimits

0x7d85,	// (0x0009bef4) main_cset6_slider_pane_t4

0x7db0,	// (0x0009bf1f) main_cset6_slider_pane_t5_ParamLimits

0x7db0,	// (0x0009bf1f) main_cset6_slider_pane_t5

0xdffc,	// (0x000a216b) main_cset6_slider_pane_t7_ParamLimits

0xdffc,	// (0x000a216b) main_cset6_slider_pane_t7

0x7ddd,	// (0x0009bf4c) main_cset6_slider_pane_t8_ParamLimits

0x7ddd,	// (0x0009bf4c) main_cset6_slider_pane_t8

0x7e01,	// (0x0009bf70) main_cset6_slider_pane_t9_ParamLimits

0x7e01,	// (0x0009bf70) main_cset6_slider_pane_t9

0x7e25,	// (0x0009bf94) main_cset6_slider_pane_t10_ParamLimits

0x7e25,	// (0x0009bf94) main_cset6_slider_pane_t10

0x7e49,	// (0x0009bfb8) main_cset6_slider_pane_t11_ParamLimits

0x7e49,	// (0x0009bfb8) main_cset6_slider_pane_t11

0xe032,	// (0x000a21a1) main_cset6_slider_pane_t14_ParamLimits

0xe032,	// (0x000a21a1) main_cset6_slider_pane_t14

0xe06b,	// (0x000a21da) main_cset6_slider_pane_t15_ParamLimits

0xe06b,	// (0x000a21da) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000a3d26) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000a3d26) main_cset6_slider_pane_t

0xd87c,	// (0x000a19eb) cset_slider_pane_g1_copy1

0xd885,	// (0x000a19f4) cset_slider_pane_g2_copy1

0xd88e,	// (0x000a19fd) cset_slider_pane_g3_copy1

0xec9e,	// (0x000a2e0d) bg_popup_sub_pane_cp011_copy1

0xe0a4,	// (0x000a2213) main_cset_text_pane_g1_copy1

0xd8c3,	// (0x000a1a32) main_cset_text_pane_t1_copy1

0xd8d1,	// (0x000a1a40) main_cset_text_pane_t2_copy1

0xd8df,	// (0x000a1a4e) main_cset_text_pane_t3_copy1

0xd8ed,	// (0x000a1a5c) main_cset_text_pane_t4_copy1

0xd8fb,	// (0x000a1a6a) main_cset_text_pane_t5_copy1

0xe0ac,	// (0x000a221b) main_cset_text_pane_t6_copy1

0xd917,	// (0x000a1a86) main_cset_text_pane_t7_copy1

0x7f3e,	// (0x0009c0ad) main_cset_text2_pane_t1_copy1

0x4550,	// (0x000986bf) main_ncimui_pane

0x45af,	// (0x0009871e) popup_query_ncimui_window_ParamLimits

0x45af,	// (0x0009871e) popup_query_ncimui_window

0xce0f,	// (0x000a0f7e) field_cale_ev2_pane_g4_ParamLimits

0xce0f,	// (0x000a0f7e) field_cale_ev2_pane_g4

0x5e7e,	// (0x00099fed) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5e7e,	// (0x00099fed) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000a3a04) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000a3a04) cell_video_dialer_keypad_pane_g

0x5e96,	// (0x0009a005) cell_video_dialer_keypad_pane_t1

0xec9e,	// (0x000a2e0d) bg_popup_window_pane_cp012

0xaa97,	// (0x0009ec06) heading_pane_cp06

0xe0d8,	// (0x000a2247) ncim_query_content_pane

0xec9e,	// (0x000a2e0d) bg_popup_heading_pane_cp01

0xe0e0,	// (0x000a224f) ncim_heading_pane_t1

0xe0ee,	// (0x000a225d) ncim_indicator_popup_pane

0xe100,	// (0x000a226f) ncim_query_button_pane

0xe114,	// (0x000a2283) ncim_query_content_pane_t1

0xe126,	// (0x000a2295) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x000a3d6a) ncim_query_content_pane_t

0xe160,	// (0x000a22cf) ncim_query_list_pane

0xe172,	// (0x000a22e1) ncim_query_popup_pane

0xe0ee,	// (0x000a225d) ncim_indicator_popup_pane_ParamLimits

0x8091,	// (0x0009c200) ncim_query_content_pane_g1_ParamLimits

0x8091,	// (0x0009c200) ncim_query_content_pane_g1

0xe114,	// (0x000a2283) ncim_query_content_pane_t1_ParamLimits

0xe126,	// (0x000a2295) ncim_query_content_pane_t2_ParamLimits

0x809d,	// (0x0009c20c) ncim_query_content_pane_t3_ParamLimits

0x809d,	// (0x0009c20c) ncim_query_content_pane_t3

0x80ba,	// (0x0009c229) ncim_query_content_pane_t4_ParamLimits

0x80ba,	// (0x0009c229) ncim_query_content_pane_t4

0x80d7,	// (0x0009c246) ncim_query_content_pane_t5_ParamLimits

0x80d7,	// (0x0009c246) ncim_query_content_pane_t5

0xe138,	// (0x000a22a7) ncim_query_content_pane_t6_ParamLimits

0xe138,	// (0x000a22a7) ncim_query_content_pane_t6

0xfbfb,	// (0x000a3d6a) ncim_query_content_pane_t_ParamLimits

0xe160,	// (0x000a22cf) ncim_query_list_pane_ParamLimits

0xe172,	// (0x000a22e1) ncim_query_popup_pane_ParamLimits

0xe186,	// (0x000a22f5) wait_bar_pane_cp04

0xec9e,	// (0x000a2e0d) input_focus_pane_cp011

0xe18e,	// (0x000a22fd) ncim_query_popup_pane_t1

0xe19c,	// (0x000a230b) ncim_list_query_list_pane_ParamLimits

0xe19c,	// (0x000a230b) ncim_list_query_list_pane

0xec9e,	// (0x000a2e0d) bg_button_pane_cp027

0xe1a9,	// (0x000a2318) ncim_query_button_pane_g1

0xec9e,	// (0x000a2e0d) list_highlight_pane_cp012

0xe1b3,	// (0x000a2322) ncim_list_query_list_pane_g1

0xe1bb,	// (0x000a232a) ncim_list_query_list_pane_t1

0x6523,	// (0x0009a692) cam4_indicators_pane_g3_ParamLimits

0x6523,	// (0x0009a692) cam4_indicators_pane_g3

0x662a,	// (0x0009a799) vid4_indicators_pane_g5_ParamLimits

0x662a,	// (0x0009a799) vid4_indicators_pane_g5

0x767e,	// (0x0009b7ed) vid4_progress_pane_g5_ParamLimits

0x767e,	// (0x0009b7ed) vid4_progress_pane_g5

0x7f7d,	// (0x0009c0ec) main_ncimui_pane_g1

0x7fe5,	// (0x0009c154) ncimui_group_query_pane_ParamLimits

0x7fe5,	// (0x0009c154) ncimui_group_query_pane

0x802d,	// (0x0009c19c) ncimui_list_pane_ParamLimits

0x802d,	// (0x0009c19c) ncimui_list_pane

0x8054,	// (0x0009c1c3) ncimui_text_pane_ParamLimits

0x8054,	// (0x0009c1c3) ncimui_text_pane

0x80f4,	// (0x0009c263) ncimui_text_pane_t1_ParamLimits

0x80f4,	// (0x0009c263) ncimui_text_pane_t1

0xe1c9,	// (0x000a2338) ncimui_list_single_graphic_pane_ParamLimits

0xe1c9,	// (0x000a2338) ncimui_list_single_graphic_pane

0x8113,	// (0x0009c282) ncimui_query_pane_ParamLimits

0x8113,	// (0x0009c282) ncimui_query_pane

0xec9e,	// (0x000a2e0d) list_highlight_pane_cp013

0xe1d9,	// (0x000a2348) ncim_list_query_list_pane_t1_copy1

0xe1b3,	// (0x000a2322) ncim_list_single_graphic_pane_g1

0xe1e7,	// (0x000a2356) ncim_query_button_pane_cp01

0xe1f3,	// (0x000a2362) ncim_query_entry_pane_ParamLimits

0xe1f3,	// (0x000a2362) ncim_query_entry_pane

0xe206,	// (0x000a2375) ncimui_query_pane_g1

0xe212,	// (0x000a2381) ncimui_query_pane_t1_ParamLimits

0xe212,	// (0x000a2381) ncimui_query_pane_t1

0xb523,	// (0x0009f692) input_focus_pane_cp012

0xe22b,	// (0x000a239a) ncim_query_entry_pane_t1

0xa1e5,	// (0x0009e354) main_im_pane_ParamLimits

0x4550,	// (0x000986bf) main_mobtv_pane_ParamLimits

0x4550,	// (0x000986bf) main_mobtv_pane

0x7d17,	// (0x0009be86) main_cset6_slider_pane_g18_ParamLimits

0x7d17,	// (0x0009be86) main_cset6_slider_pane_g18

0x7d23,	// (0x0009be92) main_cset6_slider_pane_g19_ParamLimits

0x7d23,	// (0x0009be92) main_cset6_slider_pane_g19

0xd5c2,	// (0x000a1731) bg_main_mobtv_pane_ParamLimits

0xd5c2,	// (0x000a1731) bg_main_mobtv_pane

0x8126,	// (0x0009c295) main_mobtv_info_pane

0x8131,	// (0x0009c2a0) main_mobtv_loading_pane_ParamLimits

0x8131,	// (0x0009c2a0) main_mobtv_loading_pane

0xe23d,	// (0x000a23ac) main_mobtv_pg_channel_list_pane

0xe247,	// (0x000a23b6) main_mobtv_pg_hdr_pane

0x813e,	// (0x0009c2ad) main_mobtv_programe_curr_pane_ParamLimits

0x813e,	// (0x0009c2ad) main_mobtv_programe_curr_pane

0x814b,	// (0x0009c2ba) main_mobtv_programe_next_pane_ParamLimits

0x814b,	// (0x0009c2ba) main_mobtv_programe_next_pane

0xe250,	// (0x000a23bf) popup_mobtv_noti_window

0xcb47,	// (0x000a0cb6) main_tv_pg_hdr_pane_g1

0xe258,	// (0x000a23c7) main_tv_pg_hdr_pane_g2

0xe260,	// (0x000a23cf) main_tv_pg_hdr_pane_g3

0xe268,	// (0x000a23d7) main_tv_pg_hdr_pane_g4

0xe270,	// (0x000a23df) main_tv_pg_hdr_pane_g5

0xe27a,	// (0x000a23e9) main_tv_pg_hdr_pane_g6

0xe284,	// (0x000a23f3) main_tv_pg_hdr_pane_g7

0xe28e,	// (0x000a23fd) main_tv_pg_hdr_pane_g8

0xe298,	// (0x000a2407) main_tv_pg_hdr_pane_g9

0xe2a2,	// (0x000a2411) main_tv_pg_hdr_pane_g10

0xe2ac,	// (0x000a241b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x000a3d77) main_tv_pg_hdr_pane_g

0xe2b6,	// (0x000a2425) main_tv_pg_hdr_pane_t1

0xe2c4,	// (0x000a2433) main_tv_pg_hdr_pane_t2

0xe2d2,	// (0x000a2441) main_tv_pg_hdr_pane_t3

0xe2e2,	// (0x000a2451) main_tv_pg_hdr_pane_t4

0xe2f2,	// (0x000a2461) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x000a3d8e) main_tv_pg_hdr_pane_t

0xe302,	// (0x000a2471) single_mobtv_pg_channel_pane_ParamLimits

0xe302,	// (0x000a2471) single_mobtv_pg_channel_pane

0xe314,	// (0x000a2483) single_mobtv_pg_channel_table_pane

0xe31d,	// (0x000a248c) single_mobtv_pg_channel_thumb_pane

0xe326,	// (0x000a2495) single_tv_pg_channel_pane_g1

0xe32f,	// (0x000a249e) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x000a3d99) single_tv_pg_channel_pane_g

0xcdaa,	// (0x000a0f19) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcdaa,	// (0x000a0f19) bg_single_mobtv_pg_channel_thumb_pane

0xe338,	// (0x000a24a7) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe338,	// (0x000a24a7) single_mobtv_pg_channel_thumb_pane_g1

0xe346,	// (0x000a24b5) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe346,	// (0x000a24b5) single_mobtv_pg_channel_thumb_pane_g2

0xe352,	// (0x000a24c1) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe352,	// (0x000a24c1) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x000a3d9e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x000a3d9e) single_mobtv_pg_channel_thumb_pane_g

0xe35e,	// (0x000a24cd) single_mobtv_pg_channel_thumb_pane_t1

0xe36c,	// (0x000a24db) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x000a3da5) single_mobtv_pg_channel_thumb_pane_t

0xcb47,	// (0x000a0cb6) bg_single_mobtv_pg_channel_table_pane_g1

0xcb47,	// (0x000a0cb6) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x000a3850) bg_single_mobtv_pg_channel_table_pane_g

0xe37a,	// (0x000a24e9) single_mobtv_pg_channel_table_pane_t1

0xe388,	// (0x000a24f7) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x000a3daa) single_mobtv_pg_channel_table_pane_t

0x8160,	// (0x0009c2cf) main_mobtv_info_pane_g1_ParamLimits

0x8160,	// (0x0009c2cf) main_mobtv_info_pane_g1

0x817c,	// (0x0009c2eb) main_mobtv_info_pane_t1_ParamLimits

0x817c,	// (0x0009c2eb) main_mobtv_info_pane_t1

0x81f4,	// (0x0009c363) main_mobtv_info_pane_t2_ParamLimits

0x81f4,	// (0x0009c363) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000a3db4) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000a3db4) main_mobtv_info_pane_t

0x8283,	// (0x0009c3f2) wait_bar_pane_cp05

0x8295,	// (0x0009c404) main_mobtv_loading_pane_g1_ParamLimits

0x8295,	// (0x0009c404) main_mobtv_loading_pane_g1

0x82a3,	// (0x0009c412) main_mobtv_loading_pane_g2_ParamLimits

0x82a3,	// (0x0009c412) main_mobtv_loading_pane_g2

0x82af,	// (0x0009c41e) main_mobtv_loading_pane_g3_ParamLimits

0x82af,	// (0x0009c41e) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000a3dbb) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000a3dbb) main_mobtv_loading_pane_g

0xe396,	// (0x000a2505) main_mobtv_loading_pane_t1_ParamLimits

0xe396,	// (0x000a2505) main_mobtv_loading_pane_t1

0xe3ae,	// (0x000a251d) main_mobtv_loading_pane_t2_ParamLimits

0xe3ae,	// (0x000a251d) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000a3dc2) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000a3dc2) main_mobtv_loading_pane_t

0x82bd,	// (0x0009c42c) wait_bar_pane_cp06_ParamLimits

0x82bd,	// (0x0009c42c) wait_bar_pane_cp06

0xe3d2,	// (0x000a2541) main_mobtv_programe_curr_pane_t1

0xe3e0,	// (0x000a254f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000a3dc7) main_mobtv_programe_curr_pane_t

0xe3ee,	// (0x000a255d) main_mobtv_programe_next_pane_t1

0xe3fc,	// (0x000a256b) main_mobtv_programe_next_pane_t2

0xe40a,	// (0x000a2579) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000a3dcc) main_mobtv_programe_next_pane_t

0xec9e,	// (0x000a2e0d) bg_popup_mobtv_noti_window_pane

0xe418,	// (0x000a2587) popup_mobtv_noti_window_g1

0xe420,	// (0x000a258f) popup_mobtv_noti_window_t1

0xe42e,	// (0x000a259d) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000a3dd3) popup_mobtv_noti_window_t

0xcb47,	// (0x000a0cb6) bg_popup_mobtv_noti_window_pane_g1

0x1213,	// (0x00095382) sc_clock_pane

0x1213,	// (0x00095382) main_fs_bigclock_pane

0x7894,	// (0x0009ba03) blid2_tripm_pane_t4_ParamLimits

0x7894,	// (0x0009ba03) blid2_tripm_pane_t4

0x82c9,	// (0x0009c438) sc_clock_pane_g1_ParamLimits

0x82c9,	// (0x0009c438) sc_clock_pane_g1

0x82d7,	// (0x0009c446) sc_clock_pane_t1_ParamLimits

0x82d7,	// (0x0009c446) sc_clock_pane_t1

0x82ea,	// (0x0009c459) sc_clock_pane_t2_ParamLimits

0x82ea,	// (0x0009c459) sc_clock_pane_t2

0x82fc,	// (0x0009c46b) sc_clock_pane_t3_ParamLimits

0x82fc,	// (0x0009c46b) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000a3dd8) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000a3dd8) sc_clock_pane_t

0x92d5,	// (0x0009d444) main_fs_bigclock_indicator_pane_ParamLimits

0x92d5,	// (0x0009d444) main_fs_bigclock_indicator_pane

0x8397,	// (0x0009c506) main_fs_bigclock_pane_g1_ParamLimits

0x8397,	// (0x0009c506) main_fs_bigclock_pane_g1

0x92e1,	// (0x0009d450) main_fs_bigclock_pane_t1_ParamLimits

0x92e1,	// (0x0009d450) main_fs_bigclock_pane_t1

0x92f3,	// (0x0009d462) main_fs_bigclock_pane_t2_ParamLimits

0x92f3,	// (0x0009d462) main_fs_bigclock_pane_t2

0x9307,	// (0x0009d476) main_fs_bigclock_pane_t3_ParamLimits

0x9307,	// (0x0009d476) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x000a3fdd) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x000a3fdd) main_fs_bigclock_pane_t

0xb706,	// (0x0009f875) main_fs_bigclock_indicator_pane_g1

0xe108,	// (0x000a2277) ncim_query_content_pane_g2_ParamLimits

0xe108,	// (0x000a2277) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x000a3d65) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x000a3d65) ncim_query_content_pane_g

0x8310,	// (0x0009c47f) sc_clock_pane_t4_ParamLimits

0x8310,	// (0x0009c47f) sc_clock_pane_t4

0x4550,	// (0x000986bf) main_radioblah_pane

0xd533,	// (0x000a16a2) cell_call4_button_pane_t1_copy1_ParamLimits

0xd533,	// (0x000a16a2) cell_call4_button_pane_t1_copy1

0x7f97,	// (0x0009c106) main_ncimui_pane_t1_ParamLimits

0x7f97,	// (0x0009c106) main_ncimui_pane_t1

0x7fb1,	// (0x0009c120) main_ncimui_pane_t2_ParamLimits

0x7fb1,	// (0x0009c120) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x000a3d5e) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x000a3d5e) main_ncimui_pane_t

0xe568,	// (0x000a26d7) main_radioblah_anim_pane_ParamLimits

0xe568,	// (0x000a26d7) main_radioblah_anim_pane

0xe579,	// (0x000a26e8) main_radioblah_info_pane_ParamLimits

0xe579,	// (0x000a26e8) main_radioblah_info_pane

0xe58d,	// (0x000a26fc) main_radioblah_pane_t1_ParamLimits

0xe58d,	// (0x000a26fc) main_radioblah_pane_t1

0xe5a9,	// (0x000a2718) main_radioblah_pane_t2_ParamLimits

0xe5a9,	// (0x000a2718) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000a3df9) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000a3df9) main_radioblah_pane_t

0x83e9,	// (0x0009c558) main_radioblah_rocker_ctrl_pane_ParamLimits

0x83e9,	// (0x0009c558) main_radioblah_rocker_ctrl_pane

0xe5f1,	// (0x000a2760) main_radioblah_info_pane_t1_ParamLimits

0xe5f1,	// (0x000a2760) main_radioblah_info_pane_t1

0x842e,	// (0x0009c59d) main_radioblah_info_pane_t2_ParamLimits

0x842e,	// (0x0009c59d) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000a3e02) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000a3e02) main_radioblah_info_pane_t

0xcb47,	// (0x000a0cb6) main_radioblah_rocker_ctrl_pane_g1

0x84de,	// (0x0009c64d) main_radioblah_rocker_ctrl_pane_g2

0x84e6,	// (0x0009c655) main_radioblah_rocker_ctrl_pane_g3

0x84ee,	// (0x0009c65d) main_radioblah_rocker_ctrl_pane_g4

0x84f6,	// (0x0009c665) main_radioblah_rocker_ctrl_pane_g5

0x84fe,	// (0x0009c66d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000a3e0b) main_radioblah_rocker_ctrl_pane_g

0x7f3e,	// (0x0009c0ad) main_cset_text2_pane_t1_copy1_ParamLimits

0x6443,	// (0x0009a5b2) cam4_image_uncrop_qvga_pane

0x6598,	// (0x0009a707) vid4_image_uncrop_qcif_pane

0x7a22,	// (0x0009bb91) cam6_image_uncrop_qvga_pane_ParamLimits

0x7a22,	// (0x0009bb91) cam6_image_uncrop_qvga_pane

0xde1d,	// (0x000a1f8c) vid6_image_uncrop_qcif_pane_ParamLimits

0xde1d,	// (0x000a1f8c) vid6_image_uncrop_qcif_pane

0xec9e,	// (0x000a2e0d) bg_popup_preview_window_pane_cp03

0xe0ba,	// (0x000a2229) list_cset_text2_pane

0xe0c2,	// (0x000a2231) main_cset6_text2_pane_g1

0xe0ca,	// (0x000a2239) main_cset6_text2_pane_t1

0x8506,	// (0x0009c675) list_cset_text2_pane_t1_ParamLimits

0x8506,	// (0x0009c675) list_cset_text2_pane_t1

0x4550,	// (0x000986bf) main_radioblah_pane_ParamLimits

0x826f,	// (0x0009c3de) main_mobtv_info_pane_t3_ParamLimits

0x826f,	// (0x0009c3de) main_mobtv_info_pane_t3

0x83d7,	// (0x0009c546) main_radioblah_pane_g1

0x8402,	// (0x0009c571) main_radioblah_info_pane_g1

0x8483,	// (0x0009c5f2) main_radioblah_info_pane_t3_ParamLimits

0x8483,	// (0x0009c5f2) main_radioblah_info_pane_t3

0x3226,	// (0x00097395) highlight_cell_cale_month_pane_ParamLimits

0x3226,	// (0x00097395) highlight_cell_cale_month_pane

0x1213,	// (0x00095382) main_phob_fisheye_pane

0xcede,	// (0x000a104d) scroll_pane_cp0031_ParamLimits

0xcede,	// (0x000a104d) scroll_pane_cp0031

0xdf2b,	// (0x000a209a) wait_bar_pane_cp08_ParamLimits

0x7c2e,	// (0x0009bd9d) cset_list_set_pane_copy1_ParamLimits

0xe62b,	// (0x000a279a) highlight_cell_cale_month_pane_g1

0x8523,	// (0x0009c692) highlight_cell_cale_month_pane_t1

0xdb9d,	// (0x000a1d0c) list_gen_pane_cp01

0xd72b,	// (0x000a189a) scroll_pane_01

0x8531,	// (0x0009c6a0) list_single_double_fisheye_pane

0x853a,	// (0x0009c6a9) list_double_fisheye_pane_g1_ParamLimits

0x853a,	// (0x0009c6a9) list_double_fisheye_pane_g1

0x8546,	// (0x0009c6b5) list_double_fisheye_pane_g2_ParamLimits

0x8546,	// (0x0009c6b5) list_double_fisheye_pane_g2

0x855a,	// (0x0009c6c9) list_double_fisheye_pane_g3_ParamLimits

0x855a,	// (0x0009c6c9) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000a3e18) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000a3e18) list_double_fisheye_pane_g

0x8583,	// (0x0009c6f2) list_double_fisheye_pane_t1_ParamLimits

0x8583,	// (0x0009c6f2) list_double_fisheye_pane_t1

0x859e,	// (0x0009c70d) list_double_fisheye_pane_t2_ParamLimits

0x859e,	// (0x0009c70d) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000a3e23) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000a3e23) list_double_fisheye_pane_t

0x1213,	// (0x00095382) main_call5_pane

0x8336,	// (0x0009c4a5) sc_swipe_pane_ParamLimits

0x8336,	// (0x0009c4a5) sc_swipe_pane

0x85cc,	// (0x0009c73b) call5_image_pane_ParamLimits

0x85cc,	// (0x0009c73b) call5_image_pane

0x85dc,	// (0x0009c74b) call5_swipe_1_pane_ParamLimits

0x85dc,	// (0x0009c74b) call5_swipe_1_pane

0x85e8,	// (0x0009c757) call5_swipe_2_pane_ParamLimits

0x85e8,	// (0x0009c757) call5_swipe_2_pane

0x8602,	// (0x0009c771) popup_call5_audio_first_window_ParamLimits

0x8602,	// (0x0009c771) popup_call5_audio_first_window

0xcdaa,	// (0x000a0f19) call5_swipe_1_pane_g1_ParamLimits

0xcdaa,	// (0x000a0f19) call5_swipe_1_pane_g1

0xe633,	// (0x000a27a2) call5_swipe_1_pane_g2_ParamLimits

0xe633,	// (0x000a27a2) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000a3e28) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000a3e28) call5_swipe_1_pane_g

0xe63f,	// (0x000a27ae) call5_swipe_1_pane_t1_ParamLimits

0xe63f,	// (0x000a27ae) call5_swipe_1_pane_t1

0xcdaa,	// (0x000a0f19) call5_swipe_2_pane_g1_ParamLimits

0xcdaa,	// (0x000a0f19) call5_swipe_2_pane_g1

0xe654,	// (0x000a27c3) call5_swipe_2_pane_g2_ParamLimits

0xe654,	// (0x000a27c3) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000a3e2d) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000a3e2d) call5_swipe_2_pane_g

0xe660,	// (0x000a27cf) call5_swipe_2_pane_t1_ParamLimits

0xe660,	// (0x000a27cf) call5_swipe_2_pane_t1

0xe675,	// (0x000a27e4) sc_swipe_pane_g1_ParamLimits

0xe675,	// (0x000a27e4) sc_swipe_pane_g1

0xe682,	// (0x000a27f1) sc_swipe_pane_g2_ParamLimits

0xe682,	// (0x000a27f1) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000a3e32) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000a3e32) sc_swipe_pane_g

0xe68e,	// (0x000a27fd) sc_swipe_pane_t1_ParamLimits

0xe68e,	// (0x000a27fd) sc_swipe_pane_t1

0x1213,	// (0x00095382) main_cmail_launcher_pane

0x8610,	// (0x0009c77f) aid_size_cell_cmail_l_ParamLimits

0x8610,	// (0x0009c77f) aid_size_cell_cmail_l

0x8620,	// (0x0009c78f) grid_cmail_l_pane_ParamLimits

0x8620,	// (0x0009c78f) grid_cmail_l_pane

0x8630,	// (0x0009c79f) cell_cmail_l_pane_ParamLimits

0x8630,	// (0x0009c79f) cell_cmail_l_pane

0x8644,	// (0x0009c7b3) cell_cmail_l_pane_g1_ParamLimits

0x8644,	// (0x0009c7b3) cell_cmail_l_pane_g1

0x8650,	// (0x0009c7bf) cell_cmail_l_pane_t1_ParamLimits

0x8650,	// (0x0009c7bf) cell_cmail_l_pane_t1

0xe6a3,	// (0x000a2812) cell_cmail_l_pane_t2_ParamLimits

0xe6a3,	// (0x000a2812) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000a3e37) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000a3e37) cell_cmail_l_pane_t

0xb523,	// (0x0009f692) grid_highlight_pane_cp018_ParamLimits

0xb523,	// (0x0009f692) grid_highlight_pane_cp018

0x1069,	// (0x000951d8) main2_pane_ParamLimits

0x1069,	// (0x000951d8) main2_pane

0xa27e,	// (0x0009e3ed) popup_sp_fs_action_menu_bg_pane_g1

0xa286,	// (0x0009e3f5) popup_sp_fs_action_menu_bg_pane_g2

0xa28e,	// (0x0009e3fd) popup_sp_fs_action_menu_bg_pane_g3

0xa296,	// (0x0009e405) popup_sp_fs_action_menu_bg_pane_g4

0xa29e,	// (0x0009e40d) popup_sp_fs_action_menu_bg_pane_g5

0xa2a6,	// (0x0009e415) popup_sp_fs_action_menu_bg_pane_g6

0xa2ae,	// (0x0009e41d) popup_sp_fs_action_menu_bg_pane_g7

0xa2b6,	// (0x0009e425) popup_sp_fs_action_menu_bg_pane_g8

0xa2be,	// (0x0009e42d) popup_sp_fs_action_menu_bg_pane_g9

0xa2c6,	// (0x0009e435) popup_sp_fs_action_menu_bg_pane_g10

0xa2c6,	// (0x0009e435) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x000a32fc) popup_sp_fs_action_menu_bg_pane_g

0x1fff,	// (0x0009616e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1fff,	// (0x0009616e) list_medium_line_x2_t3_g3_g1

0x200b,	// (0x0009617a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x200b,	// (0x0009617a) list_medium_line_x2_t3_g3_g2

0x2017,	// (0x00096186) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2017,	// (0x00096186) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x000a33ac) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x000a33ac) list_medium_line_x2_t3_g3_g

0x2023,	// (0x00096192) list_medium_line_x2_t3_g3_t1_ParamLimits

0x2023,	// (0x00096192) list_medium_line_x2_t3_g3_t1

0x2038,	// (0x000961a7) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2038,	// (0x000961a7) list_medium_line_x2_t3_g3_t2

0x204a,	// (0x000961b9) list_medium_line_x2_t3_g3_t3_ParamLimits

0x204a,	// (0x000961b9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x000a33b3) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x000a33b3) list_medium_line_x2_t3_g3_t

0x1fff,	// (0x0009616e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1fff,	// (0x0009616e) list_medium_line_x2_t3_g2_g1

0x2017,	// (0x00096186) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2017,	// (0x00096186) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x000a33ba) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x000a33ba) list_medium_line_x2_t3_g2_g

0x205f,	// (0x000961ce) list_medium_line_x2_t3_g2_t1_ParamLimits

0x205f,	// (0x000961ce) list_medium_line_x2_t3_g2_t1

0x2075,	// (0x000961e4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x2075,	// (0x000961e4) list_medium_line_x2_t3_g2_t2

0x2087,	// (0x000961f6) list_medium_line_x2_t3_g2_t3_ParamLimits

0x2087,	// (0x000961f6) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x000a33bf) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x000a33bf) list_medium_line_x2_t3_g2_t

0x1fff,	// (0x0009616e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1fff,	// (0x0009616e) list_medium_line_x2_t4_g4_g1

0x20a4,	// (0x00096213) list_medium_line_x2_t4_g4_g2_ParamLimits

0x20a4,	// (0x00096213) list_medium_line_x2_t4_g4_g2

0x200b,	// (0x0009617a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x200b,	// (0x0009617a) list_medium_line_x2_t4_g4_g3

0x20b0,	// (0x0009621f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x20b0,	// (0x0009621f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x000a33c6) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x000a33c6) list_medium_line_x2_t4_g4_g

0x20bc,	// (0x0009622b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x20bc,	// (0x0009622b) list_medium_line_x2_t4_g4_t1

0x20d3,	// (0x00096242) list_medium_line_x2_t4_g4_t2_ParamLimits

0x20d3,	// (0x00096242) list_medium_line_x2_t4_g4_t2

0x20e8,	// (0x00096257) list_medium_line_x2_t4_g4_t3_ParamLimits

0x20e8,	// (0x00096257) list_medium_line_x2_t4_g4_t3

0x20fa,	// (0x00096269) list_medium_line_x2_t4_g4_t4_ParamLimits

0x20fa,	// (0x00096269) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x000a33cf) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x000a33cf) list_medium_line_x2_t4_g4_t

0x1fff,	// (0x0009616e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1fff,	// (0x0009616e) list_medium_line_x2_t2_g4_g1

0x20a4,	// (0x00096213) list_medium_line_x2_t2_g4_g2_ParamLimits

0x20a4,	// (0x00096213) list_medium_line_x2_t2_g4_g2

0x200b,	// (0x0009617a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x200b,	// (0x0009617a) list_medium_line_x2_t2_g4_g3

0x2017,	// (0x00096186) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2017,	// (0x00096186) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x000a3436) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x000a3436) list_medium_line_x2_t2_g4_g

0x324c,	// (0x000973bb) list_medium_line_x2_t2_g4_t1_ParamLimits

0x324c,	// (0x000973bb) list_medium_line_x2_t2_g4_t1

0x204a,	// (0x000961b9) list_medium_line_x2_t2_g4_t2_ParamLimits

0x204a,	// (0x000961b9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x000a343f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x000a343f) list_medium_line_x2_t2_g4_t

0x1fff,	// (0x0009616e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1fff,	// (0x0009616e) list_medium_line_x2_t2_g3_g1

0x200b,	// (0x0009617a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x200b,	// (0x0009617a) list_medium_line_x2_t2_g3_g2

0x2017,	// (0x00096186) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2017,	// (0x00096186) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x000a33ac) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x000a33ac) list_medium_line_x2_t2_g3_g

0x3261,	// (0x000973d0) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3261,	// (0x000973d0) list_medium_line_x2_t2_g3_t1

0x204a,	// (0x000961b9) list_medium_line_x2_t2_g3_t2_ParamLimits

0x204a,	// (0x000961b9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x000a3444) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x000a3444) list_medium_line_x2_t2_g3_t

0x341c,	// (0x0009758b) main_sp_fs_list_pane_ParamLimits

0x341c,	// (0x0009758b) main_sp_fs_list_pane

0x3428,	// (0x00097597) sp_fs_scroll_pane_ParamLimits

0x3428,	// (0x00097597) sp_fs_scroll_pane

0x3434,	// (0x000975a3) list_medium_line_x2_t3_t1

0x3444,	// (0x000975b3) list_medium_line_x2_t3_t2

0x3452,	// (0x000975c1) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x000a348f) list_medium_line_x2_t3_t

0x3460,	// (0x000975cf) list_medium_line_x3_t4_t1

0x3470,	// (0x000975df) list_medium_line_x3_t4_t2

0x347e,	// (0x000975ed) list_medium_line_x3_t4_t3

0x3452,	// (0x000975c1) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x000a3496) list_medium_line_x3_t4_t

0x348c,	// (0x000975fb) list_medium_line_x4_t5_t1

0x349c,	// (0x0009760b) list_medium_line_x4_t5_t2

0x347e,	// (0x000975ed) list_medium_line_x4_t5_t3

0x34aa,	// (0x00097619) list_medium_line_x4_t5_t4

0x3452,	// (0x000975c1) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x000a349f) list_medium_line_x4_t5_t

0x1fff,	// (0x0009616e) list_medium_line_t4_g4_g1_ParamLimits

0x1fff,	// (0x0009616e) list_medium_line_t4_g4_g1

0x34b8,	// (0x00097627) list_medium_line_t4_g4_g2_ParamLimits

0x34b8,	// (0x00097627) list_medium_line_t4_g4_g2

0x34c4,	// (0x00097633) list_medium_line_t4_g4_g3_ParamLimits

0x34c4,	// (0x00097633) list_medium_line_t4_g4_g3

0x2017,	// (0x00096186) list_medium_line_t4_g4_g4_ParamLimits

0x2017,	// (0x00096186) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x000a34aa) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x000a34aa) list_medium_line_t4_g4_g

0x34d0,	// (0x0009763f) list_medium_line_t4_g4_t1_ParamLimits

0x34d0,	// (0x0009763f) list_medium_line_t4_g4_t1

0x34e5,	// (0x00097654) list_medium_line_t4_g4_t2_ParamLimits

0x34e5,	// (0x00097654) list_medium_line_t4_g4_t2

0x34fa,	// (0x00097669) list_medium_line_t4_g4_t3_ParamLimits

0x34fa,	// (0x00097669) list_medium_line_t4_g4_t3

0x204a,	// (0x000961b9) list_medium_line_t4_g4_t4_ParamLimits

0x204a,	// (0x000961b9) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x000a34b3) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x000a34b3) list_medium_line_t4_g4_t

0x3610,	// (0x0009777f) chi_dic_find_pane_g1

0x456c,	// (0x000986db) main_tport_pane

0x6f54,	// (0x0009b0c3) list_medium_line_plain_t1

0x703e,	// (0x0009b1ad) list_medium_line_t2_g2_g1_ParamLimits

0x703e,	// (0x0009b1ad) list_medium_line_t2_g2_g1

0x704a,	// (0x0009b1b9) list_medium_line_t2_g2_g2_ParamLimits

0x704a,	// (0x0009b1b9) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000a3b6f) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000a3b6f) list_medium_line_t2_g2_g

0x7056,	// (0x0009b1c5) list_medium_line_t2_g2_t1_ParamLimits

0x7056,	// (0x0009b1c5) list_medium_line_t2_g2_t1

0x706d,	// (0x0009b1dc) list_medium_line_t2_g2_t2_ParamLimits

0x706d,	// (0x0009b1dc) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000a3b74) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000a3b74) list_medium_line_t2_g2_t

0xdba6,	// (0x000a1d15) aid_sp_fs_list_icon_a_sm

0xf044,	// (0x000a31b3) aid_sp_fs_list_icon_d

0xdbae,	// (0x000a1d1d) aid_sp_fs_text_primary

0xdbb7,	// (0x000a1d26) aid_sp_fs_text_secondary

0x76df,	// (0x0009b84e) list_medium_line

0x76df,	// (0x0009b84e) list_medium_line_g2

0x76df,	// (0x0009b84e) list_medium_line_g3

0x76df,	// (0x0009b84e) list_medium_line_plain

0x76df,	// (0x0009b84e) list_medium_line_plain_t2

0x76df,	// (0x0009b84e) list_medium_line_plain_t3

0x76df,	// (0x0009b84e) list_medium_line_right_icon

0x76df,	// (0x0009b84e) list_medium_line_right_iconx2

0x76df,	// (0x0009b84e) list_medium_line_t2

0x76df,	// (0x0009b84e) list_medium_line_t2_g2

0x76df,	// (0x0009b84e) list_medium_line_t2_g3

0x76df,	// (0x0009b84e) list_medium_line_t2_right_icon

0x76df,	// (0x0009b84e) list_medium_line_t2_right_iconx2

0x76df,	// (0x0009b84e) list_medium_line_t3

0x76df,	// (0x0009b84e) list_medium_line_t3_g2

0x76df,	// (0x0009b84e) list_medium_line_t3_g3

0x76df,	// (0x0009b84e) list_medium_line_t3_right_iconx2

0x76e8,	// (0x0009b857) list_medium_line_t4_g4

0xf04c,	// (0x000a31bb) list_medium_line_x2

0xf04c,	// (0x000a31bb) list_medium_line_x2_t2_g2

0xf04c,	// (0x000a31bb) list_medium_line_x2_t2_g3

0xf04c,	// (0x000a31bb) list_medium_line_x2_t2_g4

0xf04c,	// (0x000a31bb) list_medium_line_x2_t3

0xf04c,	// (0x000a31bb) list_medium_line_x2_t3_g2

0xf04c,	// (0x000a31bb) list_medium_line_x2_t3_g3

0xf04c,	// (0x000a31bb) list_medium_line_x2_t3_g4

0xf04c,	// (0x000a31bb) list_medium_line_x2_t4_g2

0xf04c,	// (0x000a31bb) list_medium_line_x2_t4_g4

0x76f1,	// (0x0009b860) list_medium_line_x3

0x76f1,	// (0x0009b860) list_medium_line_x3_t4

0x76f1,	// (0x0009b860) list_medium_line_x3_t4_g4

0x76e8,	// (0x0009b857) list_medium_line_x4_t4

0x76e8,	// (0x0009b857) list_medium_line_x4_t4_g7

0x76e8,	// (0x0009b857) list_medium_line_x4_t5

0x76fa,	// (0x0009b869) list_single_fs_dyc_pane_ParamLimits

0x76fa,	// (0x0009b869) list_single_fs_dyc_pane

0x1fff,	// (0x0009616e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1fff,	// (0x0009616e) list_medium_line_x4_t4_g7_g1

0x7e6d,	// (0x0009bfdc) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7e6d,	// (0x0009bfdc) list_medium_line_x4_t4_g7_g2

0x7e79,	// (0x0009bfe8) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7e79,	// (0x0009bfe8) list_medium_line_x4_t4_g7_g3

0x7e88,	// (0x0009bff7) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7e88,	// (0x0009bff7) list_medium_line_x4_t4_g7_g4

0x7e94,	// (0x0009c003) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7e94,	// (0x0009c003) list_medium_line_x4_t4_g7_g5

0x7ea3,	// (0x0009c012) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7ea3,	// (0x0009c012) list_medium_line_x4_t4_g7_g6

0x7eb2,	// (0x0009c021) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7eb2,	// (0x0009c021) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000a3d3f) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000a3d3f) list_medium_line_x4_t4_g7_g

0x7ebe,	// (0x0009c02d) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7ebe,	// (0x0009c02d) list_medium_line_x4_t4_g7_t1

0x7ed3,	// (0x0009c042) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7ed3,	// (0x0009c042) list_medium_line_x4_t4_g7_t2

0x7ee8,	// (0x0009c057) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7ee8,	// (0x0009c057) list_medium_line_x4_t4_g7_t3

0x7efd,	// (0x0009c06c) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7efd,	// (0x0009c06c) list_medium_line_x4_t4_g7_t4

0x7f0f,	// (0x0009c07e) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7f0f,	// (0x0009c07e) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000a3d4e) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000a3d4e) list_medium_line_x4_t4_g7_t

0x7f21,	// (0x0009c090) list_single_dyc_row_pane_ParamLimits

0x7f21,	// (0x0009c090) list_single_dyc_row_pane

0x85c0,	// (0x0009c72f) call5_gesture_pane_ParamLimits

0x85c0,	// (0x0009c72f) call5_gesture_pane

0x85f4,	// (0x0009c763) call5_windows_pane_ParamLimits

0x85f4,	// (0x0009c763) call5_windows_pane

0x8666,	// (0x0009c7d5) call5_swipe_1_pane_cp_ParamLimits

0x8666,	// (0x0009c7d5) call5_swipe_1_pane_cp

0x8672,	// (0x0009c7e1) call5_swipe_2_pane_cp_ParamLimits

0x8672,	// (0x0009c7e1) call5_swipe_2_pane_cp

0xae0b,	// (0x0009ef7a) call5_image_pane_cp

0x867e,	// (0x0009c7ed) popup_call5_audio_first_window_cp_ParamLimits

0x867e,	// (0x0009c7ed) popup_call5_audio_first_window_cp

0xe675,	// (0x000a27e4) call5_swipe_1_pane_g1_cp_ParamLimits

0xe675,	// (0x000a27e4) call5_swipe_1_pane_g1_cp

0xe6b5,	// (0x000a2824) call5_swipe_1_pane_g2_cp

0xe68e,	// (0x000a27fd) call5_swipe_1_pane_t1_cp_ParamLimits

0xe68e,	// (0x000a27fd) call5_swipe_1_pane_t1_cp

0xe675,	// (0x000a27e4) call5_swipe_2_pane_g1_cp_ParamLimits

0xe675,	// (0x000a27e4) call5_swipe_2_pane_g1_cp

0xe6bd,	// (0x000a282c) call5_swipe_2_pane_g2_cp

0xe6c5,	// (0x000a2834) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6c5,	// (0x000a2834) call5_swipe_2_pane_t1_cp

0xb523,	// (0x0009f692) main_sp_fs_email_pane

0xe6da,	// (0x000a2849) main_sp_fs_listscroll_pane_te

0x868c,	// (0x0009c7fb) popup_sp_fs_action_menu_pane_ParamLimits

0x868c,	// (0x0009c7fb) popup_sp_fs_action_menu_pane

0xcb47,	// (0x000a0cb6) bg_sp_fs_ctrlbar_pane_g1

0xd155,	// (0x000a12c4) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd167,	// (0x000a12d6) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd15e,	// (0x000a12cd) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcb47,	// (0x000a0cb6) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000a3e3c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc92c,	// (0x000a0a9b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc92c,	// (0x000a0a9b) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6e3,	// (0x000a2852) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6e3,	// (0x000a2852) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6ef,	// (0x000a285e) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6ef,	// (0x000a285e) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000a3e45) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000a3e45) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6fb,	// (0x000a286a) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6fb,	// (0x000a286a) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x86d0,	// (0x0009c83f) list_medium_line_t2_right_icon_g1

0x86d8,	// (0x0009c847) list_medium_line_t2_right_icon_t1

0x86e8,	// (0x0009c857) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000a3e4a) list_medium_line_t2_right_icon_t

0xc73f,	// (0x000a08ae) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc73f,	// (0x000a08ae) bg_sp_fs_ctrlbar_pane

0x874d,	// (0x0009c8bc) main_sp_fs_ctrlbar_button_pane_cp01

0x8755,	// (0x0009c8c4) main_sp_fs_ctrlbar_ddmenu_pane

0xe74d,	// (0x000a28bc) main_sp_fs_ctrlbar_pane_g1

0xe759,	// (0x000a28c8) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000a3e4f) main_sp_fs_ctrlbar_pane_g

0xe765,	// (0x000a28d4) main_sp_fs_ctrlbar_pane_t1

0x875f,	// (0x0009c8ce) main_sp_fs_ctrlbar_pane

0x8775,	// (0x0009c8e4) main_sp_fs_listscroll_pane_te_cp01

0x8786,	// (0x0009c8f5) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8786,	// (0x0009c8f5) popup_sp_fs_action_menu_pane_cp01

0xb523,	// (0x0009f692) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb523,	// (0x0009f692) bg_sp_fs_highlight_list_pane_cp01

0xe795,	// (0x000a2904) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe795,	// (0x000a2904) sp_fs_action_menu_list_gene_pane_g1

0xe7a4,	// (0x000a2913) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7a4,	// (0x000a2913) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000a3e59) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000a3e59) sp_fs_action_menu_list_gene_pane_g

0xe7b1,	// (0x000a2920) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe7b1,	// (0x000a2920) sp_fs_action_menu_list_gene_pane_t1

0xe7c9,	// (0x000a2938) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe7c9,	// (0x000a2938) sp_fs_action_menu_list_gene_pane

0xe7ea,	// (0x000a2959) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7ea,	// (0x000a2959) popup_sp_fs_action_menu_bg_pane

0xe7f8,	// (0x000a2967) sp_fs_action_menu_list_pane_ParamLimits

0xe7f8,	// (0x000a2967) sp_fs_action_menu_list_pane

0x87b0,	// (0x0009c91f) sp_fs_scroll_pane_cp01_ParamLimits

0x87b0,	// (0x0009c91f) sp_fs_scroll_pane_cp01

0x87d6,	// (0x0009c945) list_medium_line_plain_t2_t1

0x87e6,	// (0x0009c955) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000a3e5e) list_medium_line_plain_t2_t

0x87f4,	// (0x0009c963) list_medium_line_plain_t3_t1

0x8804,	// (0x0009c973) list_medium_line_plain_t3_t2

0x8812,	// (0x0009c981) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000a3e63) list_medium_line_plain_t3_t

0x1fff,	// (0x0009616e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1fff,	// (0x0009616e) list_medium_line_x2_t2_g2_g1

0x2017,	// (0x00096186) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2017,	// (0x00096186) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x000a33ba) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x000a33ba) list_medium_line_x2_t2_g2_g

0x34d0,	// (0x0009763f) list_medium_line_x2_t2_g2_t1_ParamLimits

0x34d0,	// (0x0009763f) list_medium_line_x2_t2_g2_t1

0x204a,	// (0x000961b9) list_medium_line_x2_t2_g2_t2_ParamLimits

0x204a,	// (0x000961b9) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000a3e6a) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000a3e6a) list_medium_line_x2_t2_g2_t

0x1fff,	// (0x0009616e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1fff,	// (0x0009616e) list_medium_line_x2_t4_g2_g1

0x8820,	// (0x0009c98f) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8820,	// (0x0009c98f) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000a3e6f) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000a3e6f) list_medium_line_x2_t4_g2_g

0x8832,	// (0x0009c9a1) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8832,	// (0x0009c9a1) list_medium_line_x2_t4_g2_t1

0x884c,	// (0x0009c9bb) list_medium_line_x2_t4_g2_t2_ParamLimits

0x884c,	// (0x0009c9bb) list_medium_line_x2_t4_g2_t2

0x8861,	// (0x0009c9d0) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8861,	// (0x0009c9d0) list_medium_line_x2_t4_g2_t3

0x204a,	// (0x000961b9) list_medium_line_x2_t4_g2_t4_ParamLimits

0x204a,	// (0x000961b9) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000a3e74) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000a3e74) list_medium_line_x2_t4_g2_t

0x8876,	// (0x0009c9e5) list_medium_line_t3_right_iconx2_g1

0x86d0,	// (0x0009c83f) list_medium_line_t3_right_iconx2_g2

0x887e,	// (0x0009c9ed) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000a3e7d) list_medium_line_t3_right_iconx2_g

0x8886,	// (0x0009c9f5) list_medium_line_t3_right_iconx2_t1

0x8896,	// (0x0009ca05) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000a3e84) list_medium_line_t3_right_iconx2_t

0x1fff,	// (0x0009616e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1fff,	// (0x0009616e) list_medium_line_x3_t4_g4_g1

0x200b,	// (0x0009617a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x200b,	// (0x0009617a) list_medium_line_x3_t4_g4_g2

0x34b8,	// (0x00097627) list_medium_line_x3_t4_g4_g3_ParamLimits

0x34b8,	// (0x00097627) list_medium_line_x3_t4_g4_g3

0x88a4,	// (0x0009ca13) list_medium_line_x3_t4_g4_g4_ParamLimits

0x88a4,	// (0x0009ca13) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000a3e89) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000a3e89) list_medium_line_x3_t4_g4_g

0x88b0,	// (0x0009ca1f) list_medium_line_x3_t4_g4_t1_ParamLimits

0x88b0,	// (0x0009ca1f) list_medium_line_x3_t4_g4_t1

0x88c7,	// (0x0009ca36) list_medium_line_x3_t4_g4_t2_ParamLimits

0x88c7,	// (0x0009ca36) list_medium_line_x3_t4_g4_t2

0x34e5,	// (0x00097654) list_medium_line_x3_t4_g4_t3_ParamLimits

0x34e5,	// (0x00097654) list_medium_line_x3_t4_g4_t3

0x88dc,	// (0x0009ca4b) list_medium_line_x3_t4_g4_t4_ParamLimits

0x88dc,	// (0x0009ca4b) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000a3e92) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000a3e92) list_medium_line_x3_t4_g4_t

0x88f9,	// (0x0009ca68) list_single_dyc_row_text_pane_t1_ParamLimits

0x88f9,	// (0x0009ca68) list_single_dyc_row_text_pane_t1

0x8930,	// (0x0009ca9f) list_single_dyc_row_text_pane_t2_ParamLimits

0x8930,	// (0x0009ca9f) list_single_dyc_row_text_pane_t2

0xe81a,	// (0x000a2989) list_single_dyc_row_text_pane_t3_ParamLimits

0xe81a,	// (0x000a2989) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000a3e9b) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000a3e9b) list_single_dyc_row_text_pane_t

0xe83e,	// (0x000a29ad) list_single_dyc_row_pane_g1_ParamLimits

0xe83e,	// (0x000a29ad) list_single_dyc_row_pane_g1

0xe84a,	// (0x000a29b9) list_single_dyc_row_pane_g2_ParamLimits

0xe84a,	// (0x000a29b9) list_single_dyc_row_pane_g2

0xe856,	// (0x000a29c5) list_single_dyc_row_pane_g3_ParamLimits

0xe856,	// (0x000a29c5) list_single_dyc_row_pane_g3

0xe862,	// (0x000a29d1) list_single_dyc_row_pane_g4_ParamLimits

0xe862,	// (0x000a29d1) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000a3ea8) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000a3ea8) list_single_dyc_row_pane_g

0xe86e,	// (0x000a29dd) list_single_dyc_row_text_pane_ParamLimits

0xe86e,	// (0x000a29dd) list_single_dyc_row_text_pane

0xec9e,	// (0x000a2e0d) bg_sp_fs_scroll_pane

0xe88d,	// (0x000a29fc) thumb_sp_fs_scroll_pane

0x703e,	// (0x0009b1ad) list_medium_line_g1_ParamLimits

0x703e,	// (0x0009b1ad) list_medium_line_g1

0x8a53,	// (0x0009cbc2) list_medium_line_t1_ParamLimits

0x8a53,	// (0x0009cbc2) list_medium_line_t1

0x1fff,	// (0x0009616e) list_medium_line_x2_g1_ParamLimits

0x1fff,	// (0x0009616e) list_medium_line_x2_g1

0x200b,	// (0x0009617a) list_medium_line_x2_g2_ParamLimits

0x200b,	// (0x0009617a) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000a3eb1) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000a3eb1) list_medium_line_x2_g

0xe896,	// (0x000a2a05) list_medium_line_x2_t1_ParamLimits

0xe896,	// (0x000a2a05) list_medium_line_x2_t1

0x1fff,	// (0x0009616e) list_medium_line_x3_g1_ParamLimits

0x1fff,	// (0x0009616e) list_medium_line_x3_g1

0x200b,	// (0x0009617a) list_medium_line_x3_g2_ParamLimits

0x200b,	// (0x0009617a) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000a3eb1) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000a3eb1) list_medium_line_x3_g

0xe896,	// (0x000a2a05) list_medium_line_x3_t1_ParamLimits

0xe896,	// (0x000a2a05) list_medium_line_x3_t1

0xe8ac,	// (0x000a2a1b) thumb_sp_fs_scroll_pane_g1

0xe8b5,	// (0x000a2a24) thumb_sp_fs_scroll_pane_g2

0xe8be,	// (0x000a2a2d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000a3eb6) thumb_sp_fs_scroll_pane_g

0xe8ac,	// (0x000a2a1b) bg_sp_fs_scroll_pane_g1

0xe8b5,	// (0x000a2a24) bg_sp_fs_scroll_pane_g2

0xe8be,	// (0x000a2a2d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000a3eb6) bg_sp_fs_scroll_pane_g

0x1fff,	// (0x0009616e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1fff,	// (0x0009616e) list_medium_line_x2_t3_g4_g1

0x20a4,	// (0x00096213) list_medium_line_x2_t3_g4_g2_ParamLimits

0x20a4,	// (0x00096213) list_medium_line_x2_t3_g4_g2

0x200b,	// (0x0009617a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x200b,	// (0x0009617a) list_medium_line_x2_t3_g4_g3

0x2017,	// (0x00096186) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2017,	// (0x00096186) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x000a3436) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x000a3436) list_medium_line_x2_t3_g4_g

0x8a68,	// (0x0009cbd7) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a68,	// (0x0009cbd7) list_medium_line_x2_t3_g4_t1

0x8a7e,	// (0x0009cbed) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a7e,	// (0x0009cbed) list_medium_line_x2_t3_g4_t2

0x204a,	// (0x000961b9) list_medium_line_x2_t3_g4_t3_ParamLimits

0x204a,	// (0x000961b9) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000a3ebd) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000a3ebd) list_medium_line_x2_t3_g4_t

0x703e,	// (0x0009b1ad) list_medium_line_g2_g1_ParamLimits

0x703e,	// (0x0009b1ad) list_medium_line_g2_g1

0x704a,	// (0x0009b1b9) list_medium_line_g2_g2_ParamLimits

0x704a,	// (0x0009b1b9) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000a3b6f) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000a3b6f) list_medium_line_g2_g

0x8a98,	// (0x0009cc07) list_medium_line_g2_t1_ParamLimits

0x8a98,	// (0x0009cc07) list_medium_line_g2_t1

0x703e,	// (0x0009b1ad) list_medium_line_t3_g2_g1_ParamLimits

0x703e,	// (0x0009b1ad) list_medium_line_t3_g2_g1

0x704a,	// (0x0009b1b9) list_medium_line_t3_g2_g2_ParamLimits

0x704a,	// (0x0009b1b9) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000a3b6f) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000a3b6f) list_medium_line_t3_g2_g

0x8aad,	// (0x0009cc1c) list_medium_line_t3_g2_t1_ParamLimits

0x8aad,	// (0x0009cc1c) list_medium_line_t3_g2_t1

0x8ac4,	// (0x0009cc33) list_medium_line_t3_g2_t2_ParamLimits

0x8ac4,	// (0x0009cc33) list_medium_line_t3_g2_t2

0x8ad9,	// (0x0009cc48) list_medium_line_t3_g2_t3_ParamLimits

0x8ad9,	// (0x0009cc48) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000a3ec4) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000a3ec4) list_medium_line_t3_g2_t

0x86d0,	// (0x0009c83f) list_medium_line_right_icon_g1

0x8aee,	// (0x0009cc5d) list_medium_line_right_icon_t1

0x703e,	// (0x0009b1ad) list_medium_line_t2_g1_ParamLimits

0x703e,	// (0x0009b1ad) list_medium_line_t2_g1

0x8afc,	// (0x0009cc6b) list_medium_line_t2_t1_ParamLimits

0x8afc,	// (0x0009cc6b) list_medium_line_t2_t1

0x8b16,	// (0x0009cc85) list_medium_line_t2_t2_ParamLimits

0x8b16,	// (0x0009cc85) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000a3ecb) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000a3ecb) list_medium_line_t2_t

0x703e,	// (0x0009b1ad) list_medium_line_t3_g1_ParamLimits

0x703e,	// (0x0009b1ad) list_medium_line_t3_g1

0x8b2b,	// (0x0009cc9a) list_medium_line_t3_t1_ParamLimits

0x8b2b,	// (0x0009cc9a) list_medium_line_t3_t1

0x8b45,	// (0x0009ccb4) list_medium_line_t3_t2_ParamLimits

0x8b45,	// (0x0009ccb4) list_medium_line_t3_t2

0x8b5a,	// (0x0009ccc9) list_medium_line_t3_t3_ParamLimits

0x8b5a,	// (0x0009ccc9) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000a3ed0) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000a3ed0) list_medium_line_t3_t

0x703e,	// (0x0009b1ad) list_medium_line_g3_g1_ParamLimits

0x703e,	// (0x0009b1ad) list_medium_line_g3_g1

0x8b6f,	// (0x0009ccde) list_medium_line_g3_g2_ParamLimits

0x8b6f,	// (0x0009ccde) list_medium_line_g3_g2

0x704a,	// (0x0009b1b9) list_medium_line_g3_g3_ParamLimits

0x704a,	// (0x0009b1b9) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000a3ed7) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000a3ed7) list_medium_line_g3_g

0x8b7b,	// (0x0009ccea) list_medium_line_g3_t1_ParamLimits

0x8b7b,	// (0x0009ccea) list_medium_line_g3_t1

0x703e,	// (0x0009b1ad) list_medium_line_t2_g3_g1_ParamLimits

0x703e,	// (0x0009b1ad) list_medium_line_t2_g3_g1

0x8b6f,	// (0x0009ccde) list_medium_line_t2_g3_g2_ParamLimits

0x8b6f,	// (0x0009ccde) list_medium_line_t2_g3_g2

0x704a,	// (0x0009b1b9) list_medium_line_t2_g3_g3_ParamLimits

0x704a,	// (0x0009b1b9) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000a3ed7) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000a3ed7) list_medium_line_t2_g3_g

0x8b90,	// (0x0009ccff) list_medium_line_t2_g3_t1_ParamLimits

0x8b90,	// (0x0009ccff) list_medium_line_t2_g3_t1

0x8ba7,	// (0x0009cd16) list_medium_line_t2_g3_t2_ParamLimits

0x8ba7,	// (0x0009cd16) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000a3ede) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000a3ede) list_medium_line_t2_g3_t

0x703e,	// (0x0009b1ad) list_medium_line_t3_g3_g1_ParamLimits

0x703e,	// (0x0009b1ad) list_medium_line_t3_g3_g1

0x8b6f,	// (0x0009ccde) list_medium_line_t3_g3_g2_ParamLimits

0x8b6f,	// (0x0009ccde) list_medium_line_t3_g3_g2

0x704a,	// (0x0009b1b9) list_medium_line_t3_g3_g3_ParamLimits

0x704a,	// (0x0009b1b9) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000a3ed7) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000a3ed7) list_medium_line_t3_g3_g

0x8bbc,	// (0x0009cd2b) list_medium_line_t3_g3_t1_ParamLimits

0x8bbc,	// (0x0009cd2b) list_medium_line_t3_g3_t1

0x8bd5,	// (0x0009cd44) list_medium_line_t3_g3_t2_ParamLimits

0x8bd5,	// (0x0009cd44) list_medium_line_t3_g3_t2

0x8beb,	// (0x0009cd5a) list_medium_line_t3_g3_t3_ParamLimits

0x8beb,	// (0x0009cd5a) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000a3ee3) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000a3ee3) list_medium_line_t3_g3_t

0x8876,	// (0x0009c9e5) list_medium_line_right_iconx2_g1

0x86d0,	// (0x0009c83f) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000a3eea) list_medium_line_right_iconx2_g

0x8c01,	// (0x0009cd70) list_medium_line_right_iconx2_t1

0x8876,	// (0x0009c9e5) list_medium_line_t2_right_iconx2_g1

0x86d0,	// (0x0009c83f) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000a3eea) list_medium_line_t2_right_iconx2_g

0x8c0f,	// (0x0009cd7e) list_medium_line_t2_right_iconx2_t1

0x8c1f,	// (0x0009cd8e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000a3eef) list_medium_line_t2_right_iconx2_t

0x8c2d,	// (0x0009cd9c) list_medium_line_x4_t4_t1

0x8c3b,	// (0x0009cdaa) list_medium_line_x4_t4_t2

0x8c4b,	// (0x0009cdba) list_medium_line_x4_t4_t3

0x8c5b,	// (0x0009cdca) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000a3ef4) list_medium_line_x4_t4_t

0x8c95,	// (0x0009ce04) tport_appsw_pane_ParamLimits

0x8c95,	// (0x0009ce04) tport_appsw_pane

0x8ca3,	// (0x0009ce12) tport_contact_pane_ParamLimits

0x8ca3,	// (0x0009ce12) tport_contact_pane

0x8cb3,	// (0x0009ce22) tport_listscroll_pane_ParamLimits

0x8cb3,	// (0x0009ce22) tport_listscroll_pane

0x8cc3,	// (0x0009ce32) cell_tport_appsw_pane_ParamLimits

0x8cc3,	// (0x0009ce32) cell_tport_appsw_pane

0xce67,	// (0x000a0fd6) tport_appsw_pane_g1_ParamLimits

0xce67,	// (0x000a0fd6) tport_appsw_pane_g1

0xe8c7,	// (0x000a2a36) tport_contact_pane_g1

0xe18e,	// (0x000a22fd) tport_contact_pane_t1

0xe8d0,	// (0x000a2a3f) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000a3efd) tport_contact_pane_t

0xe8de,	// (0x000a2a4d) list_tport_pane

0xe8e7,	// (0x000a2a56) scroll_pane_cp_030

0x8cf6,	// (0x0009ce65) cell_tport_appsw_pane_g1

0x8d06,	// (0x0009ce75) cell_tport_appsw_pane_t1

0x8d14,	// (0x0009ce83) grid_highlight_pane_cp019

0x8d1c,	// (0x0009ce8b) list_tport_double_graphic_pane_ParamLimits

0x8d1c,	// (0x0009ce8b) list_tport_double_graphic_pane

0xb523,	// (0x0009f692) list_highlight_pane_cp023_ParamLimits

0xb523,	// (0x0009f692) list_highlight_pane_cp023

0x8d2d,	// (0x0009ce9c) list_tport_double_graphic_pane_g1_ParamLimits

0x8d2d,	// (0x0009ce9c) list_tport_double_graphic_pane_g1

0x8d3a,	// (0x0009cea9) list_tport_double_graphic_pane_t1_ParamLimits

0x8d3a,	// (0x0009cea9) list_tport_double_graphic_pane_t1

0x8d4f,	// (0x0009cebe) list_tport_double_graphic_pane_t2_ParamLimits

0x8d4f,	// (0x0009cebe) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000a3f09) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000a3f09) list_tport_double_graphic_pane_t

0xec9e,	// (0x000a2e0d) main_cale_note_pane

0x67fd,	// (0x0009a96c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x67fd,	// (0x0009a96c) cell_vitu2_function_top_wide_pane_cp01

0x8283,	// (0x0009c3f2) wait_bar_pane_cp05_ParamLimits

0xb523,	// (0x0009f692) listscroll_cmail_pane

0xe8f0,	// (0x000a2a5f) list_cmail_pane

0x8d61,	// (0x0009ced0) list_cmail_body_pane

0x8d81,	// (0x0009cef0) list_single_cmail_header_caption_pane

0x8dad,	// (0x0009cf1c) list_single_cmail_header_detail_pane_ParamLimits

0x8dad,	// (0x0009cf1c) list_single_cmail_header_detail_pane

0xe900,	// (0x000a2a6f) list_single_cmail_header_caption_pane_t1

0x8dec,	// (0x0009cf5b) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8dec,	// (0x0009cf5b) list_single_cmail_header_detail_pane_g1

0xf055,	// (0x000a31c4) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf055,	// (0x000a31c4) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000a3f0e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000a3f0e) list_single_cmail_header_detail_pane_g

0x8e02,	// (0x0009cf71) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8e02,	// (0x0009cf71) list_single_cmail_header_detail_pane_t1

0x8e3e,	// (0x0009cfad) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8e3e,	// (0x0009cfad) list_single_cmail_header_editor_pane_bg

0xe32f,	// (0x000a249e) list_cmail_body_pane_g1

0xe93f,	// (0x000a2aae) list_cmail_body_pane_t1

0xd5ff,	// (0x000a176e) list_single_cmail_header_editor_pane_bg_g1

0xa5fc,	// (0x0009e76b) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd60f,	// (0x000a177e) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd607,	// (0x000a1776) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd859,	// (0x000a19c8) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd62f,	// (0x000a179e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd61f,	// (0x000a178e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd627,	// (0x000a1796) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa5dc,	// (0x0009e74b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8e55,	// (0x0009cfc4) calenote_gesture_pane_ParamLimits

0x8e55,	// (0x0009cfc4) calenote_gesture_pane

0x8e6f,	// (0x0009cfde) calenote_window_pane_ParamLimits

0x8e6f,	// (0x0009cfde) calenote_window_pane

0xe94d,	// (0x000a2abc) popup_note_window_cp01

0x8e87,	// (0x0009cff6) calenote_swipe_1_pane_ParamLimits

0x8e87,	// (0x0009cff6) calenote_swipe_1_pane

0x8672,	// (0x0009c7e1) calenote_swipe_2_pane_ParamLimits

0x8672,	// (0x0009c7e1) calenote_swipe_2_pane

0xe675,	// (0x000a27e4) calenote_swipe_1_pane_g1_ParamLimits

0xe675,	// (0x000a27e4) calenote_swipe_1_pane_g1

0xe682,	// (0x000a27f1) calenote_swipe_1_pane_g2_ParamLimits

0xe682,	// (0x000a27f1) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000a3e32) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000a3e32) calenote_swipe_1_pane_g

0xe95f,	// (0x000a2ace) calenote_swipe_1_pane_t1_ParamLimits

0xe95f,	// (0x000a2ace) calenote_swipe_1_pane_t1

0xe675,	// (0x000a27e4) calenote_swipe_2_pane_g1_ParamLimits

0xe675,	// (0x000a27e4) calenote_swipe_2_pane_g1

0xe97e,	// (0x000a2aed) calenote_swipe_2_pane_g2_ParamLimits

0xe97e,	// (0x000a2aed) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000a3f1a) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000a3f1a) calenote_swipe_2_pane_g

0xe98a,	// (0x000a2af9) calenote_swipe_2_pane_t1_ParamLimits

0xe98a,	// (0x000a2af9) calenote_swipe_2_pane_t1

0xec9e,	// (0x000a2e0d) main_mup_navstr_pane

0x5558,	// (0x000996c7) main_mup3_pane_t7_ParamLimits

0x5558,	// (0x000996c7) main_mup3_pane_t7

0x5f5d,	// (0x0009a0cc) main_mp4_pane_g6_ParamLimits

0x5f5d,	// (0x0009a0cc) main_mp4_pane_g6

0x62dd,	// (0x0009a44c) main_image3_pane_t4_ParamLimits

0x62dd,	// (0x0009a44c) main_image3_pane_t4

0x8e9a,	// (0x0009d009) popup_navstr_preview_pane_ParamLimits

0x8e9a,	// (0x0009d009) popup_navstr_preview_pane

0x8ea6,	// (0x0009d015) scroll_navstr_pane_ParamLimits

0x8ea6,	// (0x0009d015) scroll_navstr_pane

0xec9e,	// (0x000a2e0d) bg_popup_preview_window_pane_cp04

0xe9b1,	// (0x000a2b20) popup_navstr_preview_pane_t1

0x8eb2,	// (0x0009d021) scroll_navstr_pane_g1_ParamLimits

0x8eb2,	// (0x0009d021) scroll_navstr_pane_g1

0x8ebf,	// (0x0009d02e) scroll_navstr_pane_t1_ParamLimits

0x8ebf,	// (0x0009d02e) scroll_navstr_pane_t1

0xe956,	// (0x000a2ac5) bg_button_pane_cp014

0xe956,	// (0x000a2ac5) bg_button_pane_cp030

0x8566,	// (0x0009c6d5) list_double_fisheye_pane_g4_ParamLimits

0x8566,	// (0x0009c6d5) list_double_fisheye_pane_g4

0x8572,	// (0x0009c6e1) list_double_fisheye_pane_g5_ParamLimits

0x8572,	// (0x0009c6e1) list_double_fisheye_pane_g5

0xb630,	// (0x0009f79f) sp_fs_scroll_pane_cp03

0xe74d,	// (0x000a28bc) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe759,	// (0x000a28c8) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000a3e4f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe765,	// (0x000a28d4) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe8f8,	// (0x000a2a67) sp_fs_scroll_pane_cp02

0xa2e9,	// (0x0009e458) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa2e9,	// (0x0009e458) popup_sp_fs_calendar_preview_list_single_pane

0xec9e,	// (0x000a2e0d) main_cam6_pano_pane

0x4550,	// (0x000986bf) main_mup3_pane_ParamLimits

0xec9e,	// (0x000a2e0d) main_phacti_pane

0x8158,	// (0x0009c2c7) bg_button_pane_cp11

0x8170,	// (0x0009c2df) main_mobtv_info_pane_g2_ParamLimits

0x8170,	// (0x0009c2df) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x000a3daf) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x000a3daf) main_mobtv_info_pane_g

0x8322,	// (0x0009c491) sc_clock_pane_t5_ParamLimits

0x8322,	// (0x0009c491) sc_clock_pane_t5

0x83d7,	// (0x0009c546) main_radioblah_pane_g1_ParamLimits

0xe5c1,	// (0x000a2730) main_radioblah_pane_t3_ParamLimits

0xe5c1,	// (0x000a2730) main_radioblah_pane_t3

0xe5d9,	// (0x000a2748) main_radioblah_pane_t4_ParamLimits

0xe5d9,	// (0x000a2748) main_radioblah_pane_t4

0x83f5,	// (0x0009c564) main_radioblah_text_pane_ParamLimits

0x83f5,	// (0x0009c564) main_radioblah_text_pane

0x8402,	// (0x0009c571) main_radioblah_info_pane_g1_ParamLimits

0x8497,	// (0x0009c606) main_radioblah_info_pane_t4_ParamLimits

0x8497,	// (0x0009c606) main_radioblah_info_pane_t4

0xb523,	// (0x0009f692) main_sp_fs_calendar_pane

0x8ed1,	// (0x0009d040) main_phacti_pane_g1

0x8ed9,	// (0x0009d048) phacti_note_pane_ParamLimits

0x8ed9,	// (0x0009d048) phacti_note_pane

0xe9c8,	// (0x000a2b37) phacti_term_pane_ParamLimits

0xe9c8,	// (0x000a2b37) phacti_term_pane

0xe9dd,	// (0x000a2b4c) phacti_note_pane_t1_ParamLimits

0xe9dd,	// (0x000a2b4c) phacti_note_pane_t1

0xe9f4,	// (0x000a2b63) phacti_term_pane_g1

0xe9fc,	// (0x000a2b6b) phacti_term_pane_t1_ParamLimits

0xe9fc,	// (0x000a2b6b) phacti_term_pane_t1

0xea26,	// (0x000a2b95) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa3fd,	// (0x0009e56c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000a3f24) popup_sp_fs_calendar_preview_list_single_pane_g

0xea2e,	// (0x000a2b9d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xea2e,	// (0x000a2b9d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xea43,	// (0x000a2bb2) aid_popup_sp_fs_bg_corner_pane

0xcb47,	// (0x000a0cb6) popup_sp_fs_calendar_preview_bg_pane_g1

0xec9e,	// (0x000a2e0d) popup_sp_fs_calendar_preview_bg_pane

0xea4b,	// (0x000a2bba) popup_sp_fs_calendar_preview_list_pane

0xc73f,	// (0x000a08ae) bg_main_sp_fs_cale_pane_ParamLimits

0xc73f,	// (0x000a08ae) bg_main_sp_fs_cale_pane

0xea53,	// (0x000a2bc2) listscroll_cale_mrui_pane_ParamLimits

0xea53,	// (0x000a2bc2) listscroll_cale_mrui_pane

0xd695,	// (0x000a1804) listscroll_sp_fs_schedule_track_pane

0xea70,	// (0x000a2bdf) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xea70,	// (0x000a2bdf) main_sp_fs_ctrlbar_pane_cp01

0xea83,	// (0x000a2bf2) main_sp_fs_ribbon_pane

0xea8b,	// (0x000a2bfa) popup_sp_fs_cale_preview_window

0x8f3c,	// (0x0009d0ab) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8f3c,	// (0x0009d0ab) list_single_sp_fs_schedule_track_pane

0xedb1,	// (0x000a2f20) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xedb1,	// (0x000a2f20) bg_sp_fs_highlight_list_pane_cp03

0x8f5f,	// (0x0009d0ce) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8f5f,	// (0x0009d0ce) list_single_sp_fs_schedule_track_pane_g1

0x8f6b,	// (0x0009d0da) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8f6b,	// (0x0009d0da) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000a3f29) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000a3f29) list_single_sp_fs_schedule_track_pane_g

0x8f77,	// (0x0009d0e6) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8f77,	// (0x0009d0e6) list_single_sp_fs_schedule_track_pane_t1

0x8f8f,	// (0x0009d0fe) sp_fs_schedule_track_pane_ParamLimits

0x8f8f,	// (0x0009d0fe) sp_fs_schedule_track_pane

0xea9d,	// (0x000a2c0c) sp_fs_schedule_track_pane_g1

0xeaa5,	// (0x000a2c14) sp_fs_schedule_track_pane_g2

0xeaad,	// (0x000a2c1c) sp_fs_schedule_track_pane_g3

0xeab5,	// (0x000a2c24) sp_fs_schedule_track_pane_g4

0xeabd,	// (0x000a2c2c) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000a3f2e) sp_fs_schedule_track_pane_g

0xd5ff,	// (0x000a176e) bg_sp_fs_schedule_viewer_highlight_g1

0xa5fc,	// (0x0009e76b) bg_sp_fs_schedule_viewer_highlight_g2

0xd607,	// (0x000a1776) bg_sp_fs_schedule_viewer_highlight_g3

0xd60f,	// (0x000a177e) bg_sp_fs_schedule_viewer_highlight_g4

0xd859,	// (0x000a19c8) bg_sp_fs_schedule_viewer_highlight_g5

0xd61f,	// (0x000a178e) bg_sp_fs_schedule_viewer_highlight_g6

0xd627,	// (0x000a1796) bg_sp_fs_schedule_viewer_highlight_g7

0xd62f,	// (0x000a179e) bg_sp_fs_schedule_viewer_highlight_g8

0xa5dc,	// (0x0009e74b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000a3f39) bg_sp_fs_schedule_viewer_highlight_g

0xec9e,	// (0x000a2e0d) bg_main_sp_fs_ribbon_pane

0x8f9f,	// (0x0009d10e) main_sp_fs_ribbon_pane_g1

0xeac5,	// (0x000a2c34) main_sp_fs_ribbon_pane_t1

0x8fa8,	// (0x0009d117) main_sp_fs_ribbon_pane_t2

0xead4,	// (0x000a2c43) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000a3f4c) main_sp_fs_ribbon_pane_t

0xeae3,	// (0x000a2c52) main_sp_fs_ribbon_scheduler_pane

0xeaeb,	// (0x000a2c5a) bg_main_sp_fs_ribbon_pane_g1

0xeaf4,	// (0x000a2c63) bg_main_sp_fs_ribbon_pane_g2

0xeafd,	// (0x000a2c6c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000a3f53) bg_main_sp_fs_ribbon_pane_g

0xeb05,	// (0x000a2c74) main_sp_fs_ribbon_scheduler_pane_g1

0xeb0e,	// (0x000a2c7d) main_sp_fs_ribbon_scheduler_pane_g2

0xeb17,	// (0x000a2c86) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000a3f5a) main_sp_fs_ribbon_scheduler_pane_g

0xeb20,	// (0x000a2c8f) list_cale_mrui_pane

0x8fb7,	// (0x0009d126) sp_fs_scroll_pane_cp07_ParamLimits

0x8fb7,	// (0x0009d126) sp_fs_scroll_pane_cp07

0x8fd3,	// (0x0009d142) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8fd3,	// (0x0009d142) bg_sp_fs_schedule_viewer_highlight

0xeb2d,	// (0x000a2c9c) list_single_sp_fs_schedule_track_pane_cp01

0xeb35,	// (0x000a2ca4) list_sp_fs_schedule_track_pane

0xeb3d,	// (0x000a2cac) sp_fs_scroll_pane_cp06_ParamLimits

0xeb3d,	// (0x000a2cac) sp_fs_scroll_pane_cp06

0xcb47,	// (0x000a0cb6) bgmain_sp_fs_calendar_pane_g1

0x8fe0,	// (0x0009d14f) list_single_cale_mrui_pane_ParamLimits

0x8fe0,	// (0x0009d14f) list_single_cale_mrui_pane

0xeb4f,	// (0x000a2cbe) list_single_cale_mrui_row_pane_ParamLimits

0xeb4f,	// (0x000a2cbe) list_single_cale_mrui_row_pane

0xeb5c,	// (0x000a2ccb) list_single_cale_mrui_row_pane_g1_ParamLimits

0xeb5c,	// (0x000a2ccb) list_single_cale_mrui_row_pane_g1

0xeba1,	// (0x000a2d10) list_single_cale_mrui_row_pane_t1_ParamLimits

0xeba1,	// (0x000a2d10) list_single_cale_mrui_row_pane_t1

0x900d,	// (0x0009d17c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x900d,	// (0x0009d17c) list_single_cale_mrui_row_pane_t2

0xebb3,	// (0x000a2d22) list_single_cale_mrui_row_pane_t3_ParamLimits

0xebb3,	// (0x000a2d22) list_single_cale_mrui_row_pane_t3

0xebe2,	// (0x000a2d51) list_single_cale_mrui_row_pane_t4_ParamLimits

0xebe2,	// (0x000a2d51) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000a3f68) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000a3f68) list_single_cale_mrui_row_pane_t

0x9073,	// (0x0009d1e2) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9073,	// (0x0009d1e2) list_single_cmail_header_editor_pane_bg_cp01

0x9093,	// (0x0009d202) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9093,	// (0x0009d202) list_single_cmail_header_editor_pane_bg_cp02

0x90af,	// (0x0009d21e) main_radioblah_text_pane_t1_ParamLimits

0x90af,	// (0x0009d21e) main_radioblah_text_pane_t1

0xec11,	// (0x000a2d80) cam6_indi_pane_cp01

0xec19,	// (0x000a2d88) cam6_mode_pane_cp01

0xec21,	// (0x000a2d90) cam6_pano_pane

0xec2a,	// (0x000a2d99) cam6_zoom_pane_cp01

0xec32,	// (0x000a2da1) cam6_pano_image_pane

0xec3d,	// (0x000a2dac) cam6_pano_pane_g1

0xe32f,	// (0x000a249e) cam6_pano_pane_g2

0xec46,	// (0x000a2db5) cam6_pano_pane_g3

0xec4f,	// (0x000a2dbe) cam6_pano_pane_g4

0xd142,	// (0x000a12b1) cam6_pano_pane_g5

0xec58,	// (0x000a2dc7) cam6_pano_pane_g6

0xea68,	// (0x000a2bd7) cam6_pano_pane_g7

0xec62,	// (0x000a2dd1) cam6_pano_pane_g8

0xec6b,	// (0x000a2dda) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000a3f71) cam6_pano_pane_g

0xec9e,	// (0x000a2e0d) main_browser_tag_pane

0xe9a9,	// (0x000a2b18) grid_navstr_albumart_pane

0xec76,	// (0x000a2de5) cell_navstr_albumart_pane_ParamLimits

0xec76,	// (0x000a2de5) cell_navstr_albumart_pane

0xec96,	// (0x000a2e05) cell_navstr_albumart_pane_g1

0xc547,	// (0x000a06b6) cell_navstr_albumart_pane_g2

0xc557,	// (0x000a06c6) cell_navstr_albumart_pane_g3

0xc54f,	// (0x000a06be) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000a3f84) cell_navstr_albumart_pane_g

0x90ca,	// (0x0009d239) bt_list_pane_ParamLimits

0x90ca,	// (0x0009d239) bt_list_pane

0x90ea,	// (0x0009d259) bt_list_pane_t1

0x90f9,	// (0x0009d268) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000a3f8d) bt_list_pane_t

0xec9e,	// (0x000a2e0d) main_cale_prevew_pane

0x9108,	// (0x0009d277) popup_cale_preview_window_ParamLimits

0x9108,	// (0x0009d277) popup_cale_preview_window

0xb523,	// (0x0009f692) bg_popup_preview_window_pane_cp05_ParamLimits

0xb523,	// (0x0009f692) bg_popup_preview_window_pane_cp05

0xedbf,	// (0x000a2f2e) list_cale_preview_pane_ParamLimits

0xedbf,	// (0x000a2f2e) list_cale_preview_pane

0x9121,	// (0x0009d290) list_double_cale_preview_pane_ParamLimits

0x9121,	// (0x0009d290) list_double_cale_preview_pane

0x9133,	// (0x0009d2a2) list_single_cale_preview_pane_ParamLimits

0x9133,	// (0x0009d2a2) list_single_cale_preview_pane

0x9149,	// (0x0009d2b8) list_single_cale_preview_pane_g1

0x9151,	// (0x0009d2c0) list_single_cale_preview_pane_t1_ParamLimits

0x9151,	// (0x0009d2c0) list_single_cale_preview_pane_t1

0x9166,	// (0x0009d2d5) list_double_cale_preview_pane_g1

0x916e,	// (0x0009d2dd) list_double_cale_preview_pane_t1_ParamLimits

0x916e,	// (0x0009d2dd) list_double_cale_preview_pane_t1

0x9183,	// (0x0009d2f2) list_double_cale_preview_pane_t2_ParamLimits

0x9183,	// (0x0009d2f2) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000a3f92) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000a3f92) list_double_cale_preview_pane_t

0xec9e,	// (0x000a2e0d) main_ezdial_pane

0xb523,	// (0x0009f692) main_sp_fs_email_pane_ParamLimits

0x86f6,	// (0x0009c865) cmail_ddmenu_btn01_pane_ParamLimits

0x86f6,	// (0x0009c865) cmail_ddmenu_btn01_pane

0x8713,	// (0x0009c882) cmail_ddmenu_btn02_pane_ParamLimits

0x8713,	// (0x0009c882) cmail_ddmenu_btn02_pane

0x8731,	// (0x0009c8a0) cmail_ddmenu_btn03_pane_ParamLimits

0x8731,	// (0x0009c8a0) cmail_ddmenu_btn03_pane

0x875f,	// (0x0009c8ce) main_sp_fs_ctrlbar_pane_ParamLimits

0x8775,	// (0x0009c8e4) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d61,	// (0x0009ced0) list_cmail_body_pane_ParamLimits

0x8de3,	// (0x0009cf52) bg_button_pane_cp12

0xe90e,	// (0x000a2a7d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe90e,	// (0x000a2a7d) list_single_cmail_header_detail_pane_g3

0xe91b,	// (0x000a2a8a) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe91b,	// (0x000a2a8a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000a3f15) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000a3f15) list_single_cmail_header_detail_pane_t

0xea11,	// (0x000a2b80) phacti_term_pane_t2_ParamLimits

0xea11,	// (0x000a2b80) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000a3f1f) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000a3f1f) phacti_term_pane_t

0xedcb,	// (0x000a2f3a) aid_size_list_single_double

0x919b,	// (0x0009d30a) popup_ezdial_listscroll_window

0x91bc,	// (0x0009d32b) popup_number_entry_window_cp01

0xae0b,	// (0x0009ef7a) bg_popup_call_pane_cp09

0xedd7,	// (0x000a2f46) ezdial_list_pane

0xeddf,	// (0x000a2f4e) scroll_pane_cp23

0xc92c,	// (0x000a0a9b) bg_button_pane_cp028_ParamLimits

0xc92c,	// (0x000a0a9b) bg_button_pane_cp028

0x91ca,	// (0x0009d339) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x91ca,	// (0x0009d339) cmail_ddmenu_btn01_pane_g1

0x91da,	// (0x0009d349) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x91da,	// (0x0009d349) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000a3f97) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000a3f97) cmail_ddmenu_btn01_pane_g

0xede7,	// (0x000a2f56) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xede7,	// (0x000a2f56) cmail_ddmenu_btn01_pane_t1

0xc73f,	// (0x000a08ae) bg_button_pane_cp029_ParamLimits

0xc73f,	// (0x000a08ae) bg_button_pane_cp029

0x91e6,	// (0x0009d355) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x91e6,	// (0x0009d355) cmail_ddmenu_btn02_pane_g1

0x91fe,	// (0x0009d36d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x91fe,	// (0x0009d36d) cmail_ddmenu_btn02_pane_t1

0xedb1,	// (0x000a2f20) bg_button_pane_cp031_ParamLimits

0xedb1,	// (0x000a2f20) bg_button_pane_cp031

0x91e6,	// (0x0009d355) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x91e6,	// (0x0009d355) cmail_ddmenu_btn03_pane_g1

0x91fe,	// (0x0009d36d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x91fe,	// (0x0009d36d) cmail_ddmenu_btn03_pane_t1

0x617a,	// (0x0009a2e9) cell_dialer2_keypad_pane_t1_ParamLimits

0x6194,	// (0x0009a303) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6194,	// (0x0009a303) cell_dialer2_keypad_pane_t1_copy1

0x7fdd,	// (0x0009c14c) ncimui_group_button_pane

0xb523,	// (0x0009f692) main_sp_fs_calendar_pane_ParamLimits

0x8d81,	// (0x0009cef0) list_single_cmail_header_caption_pane_ParamLimits

0xf061,	// (0x000a31d0) aid_recal_txt_sm_pane

0xec9e,	// (0x000a2e0d) mian_recal_day_pane

0xea8b,	// (0x000a2bfa) popup_sp_fs_cale_preview_window_ParamLimits

0xedfd,	// (0x000a2f6c) list_recal_day_pane

0xee40,	// (0x000a2faf) list_single_recal_day_pane_ParamLimits

0xee40,	// (0x000a2faf) list_single_recal_day_pane

0xee52,	// (0x000a2fc1) list_single_recal_day_pane_g1_ParamLimits

0xee52,	// (0x000a2fc1) list_single_recal_day_pane_g1

0xee5e,	// (0x000a2fcd) list_single_recal_day_pane_g2_ParamLimits

0xee5e,	// (0x000a2fcd) list_single_recal_day_pane_g2

0xee6e,	// (0x000a2fdd) list_single_recal_day_pane_g3_ParamLimits

0xee6e,	// (0x000a2fdd) list_single_recal_day_pane_g3

0x9222,	// (0x0009d391) list_single_recal_day_pane_g4_ParamLimits

0x9222,	// (0x0009d391) list_single_recal_day_pane_g4

0xee7a,	// (0x000a2fe9) list_single_recal_day_pane_g5_ParamLimits

0xee7a,	// (0x000a2fe9) list_single_recal_day_pane_g5

0xee8a,	// (0x000a2ff9) list_single_recal_day_pane_g6_ParamLimits

0xee8a,	// (0x000a2ff9) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000a3fa6) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000a3fa6) list_single_recal_day_pane_g

0xee9e,	// (0x000a300d) list_single_recal_day_pane_t1

0xeeb0,	// (0x000a301f) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x000a3fb1) list_single_recal_day_pane_t

0x9242,	// (0x0009d3b1) ncimui_query_button_pane_ParamLimits

0x9242,	// (0x0009d3b1) ncimui_query_button_pane

0x9252,	// (0x0009d3c1) ncimui_query_button_pane_t1_ParamLimits

0x9252,	// (0x0009d3c1) ncimui_query_button_pane_t1

0xf06a,	// (0x000a31d9) ncimui_query_button_pane_t2_ParamLimits

0xf06a,	// (0x000a31d9) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000a3fb6) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000a3fb6) ncimui_query_button_pane_t

0x9265,	// (0x0009d3d4) query_button_pane_ParamLimits

0x9265,	// (0x0009d3d4) query_button_pane

0xec9e,	// (0x000a2e0d) bg_button_pane_cp0028

0xf07d,	// (0x000a31ec) query_button_pane_t1

0x456c,	// (0x000986db) main_tport_pane_ParamLimits

0x8c6b,	// (0x0009cdda) bg_popup_window_pane_cp01_ParamLimits

0x8c6b,	// (0x0009cdda) bg_popup_window_pane_cp01

0x8c79,	// (0x0009cde8) heading_pane_cp08_ParamLimits

0x8c79,	// (0x0009cde8) heading_pane_cp08

0x8c87,	// (0x0009cdf6) heading_pane_cp07_ParamLimits

0x8c87,	// (0x0009cdf6) heading_pane_cp07

0x8cf6,	// (0x0009ce65) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000a3f02) cell_tport_appsw_pane_g

0x3c75,	// (0x00097de4) input_candi_list_open_g1

0xa7bf,	// (0x0009e92e) list_cale_time_pane_g6_ParamLimits

0xa7bf,	// (0x0009e92e) list_cale_time_pane_g6

0x4fe9,	// (0x00099158) aid_size_touch_calib_1_ParamLimits

0x4fe9,	// (0x00099158) aid_size_touch_calib_1

0x4ff5,	// (0x00099164) aid_size_touch_calib_2_ParamLimits

0x4ff5,	// (0x00099164) aid_size_touch_calib_2

0x5003,	// (0x00099172) aid_size_touch_calib_3_ParamLimits

0x5003,	// (0x00099172) aid_size_touch_calib_3

0x5013,	// (0x00099182) aid_size_touch_calib_4_ParamLimits

0x5013,	// (0x00099182) aid_size_touch_calib_4

0x5021,	// (0x00099190) main_touch_calib_button_group_pane_ParamLimits

0x5021,	// (0x00099190) main_touch_calib_button_group_pane

0x502f,	// (0x0009919e) main_touch_calib_pane_g1_ParamLimits

0x503b,	// (0x000991aa) main_touch_calib_pane_g2_ParamLimits

0x5047,	// (0x000991b6) main_touch_calib_pane_g3_ParamLimits

0x5053,	// (0x000991c2) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x000a38c5) main_touch_calib_pane_g_ParamLimits

0x505f,	// (0x000991ce) main_touch_calib_pane_t1_ParamLimits

0x5078,	// (0x000991e7) main_touch_calib_pane_t2_ParamLimits

0x5091,	// (0x00099200) main_touch_calib_pane_t3_ParamLimits

0x50a7,	// (0x00099216) main_touch_calib_pane_t4_ParamLimits

0x50bd,	// (0x0009922c) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x000a38ce) main_touch_calib_pane_t_ParamLimits

0xcf02,	// (0x000a1071) list_single_fp_cale_pane_g3_ParamLimits

0xcf02,	// (0x000a1071) list_single_fp_cale_pane_g3

0x4550,	// (0x000986bf) bg_button_pane_cp012_ParamLimits

0x4550,	// (0x000986bf) bg_vkb2_func_pane_cp03_ParamLimits

0x6fbe,	// (0x0009b12d) cell_vitu2_function_top_pane_g1_ParamLimits

0x4550,	// (0x000986bf) bg_vkb2_func_pane_cp04_ParamLimits

0x7f65,	// (0x0009c0d4) main_ncimui_button_group_pane_ParamLimits

0x7f65,	// (0x0009c0d4) main_ncimui_button_group_pane

0x7fcb,	// (0x0009c13a) main_ncimui_pane_t3_ParamLimits

0x7fcb,	// (0x0009c13a) main_ncimui_pane_t3

0xe9bf,	// (0x000a2b2e) phacti_button_group_pane

0xedcb,	// (0x000a2f3a) aid_size_list_single_double_ParamLimits

0x919b,	// (0x0009d30a) popup_ezdial_listscroll_window_ParamLimits

0x91bc,	// (0x0009d32b) popup_number_entry_window_cp01_ParamLimits

0x9272,	// (0x0009d3e1) phacti_button_pane_ParamLimits

0x9272,	// (0x0009d3e1) phacti_button_pane

0xec9e,	// (0x000a2e0d) bg_button_pane_cp14

0xf08b,	// (0x000a31fa) phacti_button_pane_t1

0x9283,	// (0x0009d3f2) main_touch_calib_button_pane_ParamLimits

0x9283,	// (0x0009d3f2) main_touch_calib_button_pane

0xa1e5,	// (0x0009e354) bg_button_pane_cp18_ParamLimits

0xa1e5,	// (0x0009e354) bg_button_pane_cp18

0xf099,	// (0x000a3208) main_touch_calib_button_pane_t1_ParamLimits

0xf099,	// (0x000a3208) main_touch_calib_button_pane_t1

0xf0af,	// (0x000a321e) main_touch_calib_button_pane_t2_ParamLimits

0xf0af,	// (0x000a321e) main_touch_calib_button_pane_t2

0x0001,

0x0d42,	// (0x00094eb1) main_touch_calib_button_pane_t_ParamLimits

0x0d42,	// (0x00094eb1) main_touch_calib_button_pane_t

0xec9e,	// (0x000a2e0d) cell_ncimui_button_pane

0xec9e,	// (0x000a2e0d) bg_button_pane_cp032

0xb63c,	// (0x0009f7ab) cell_ncimui_button_pane_t1

0x61f0,	// (0x0009a35f) image3_infobar_pane_ParamLimits

0x61f0,	// (0x0009a35f) image3_infobar_pane

0x8344,	// (0x0009c4b3) fs_bigclock_status_pane_ParamLimits

0x8344,	// (0x0009c4b3) fs_bigclock_status_pane

0x8351,	// (0x0009c4c0) main_fs_bigclock_clock_pane_ParamLimits

0x8351,	// (0x0009c4c0) main_fs_bigclock_clock_pane

0x8375,	// (0x0009c4e4) main_fs_bigclock_indi_pane_ParamLimits

0x8375,	// (0x0009c4e4) main_fs_bigclock_indi_pane

0x83a5,	// (0x0009c514) main_fs_bigclock_swipe_pane_ParamLimits

0x83a5,	// (0x0009c514) main_fs_bigclock_swipe_pane

0xec9e,	// (0x000a2e0d) main_fs_clock_dumped_data

0xe43c,	// (0x000a25ab) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe43c,	// (0x000a25ab) list_single_fs_bigclock_indicator_pane_g1

0xe456,	// (0x000a25c5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe456,	// (0x000a25c5) list_single_fs_bigclock_indicator_pane_g2

0xe470,	// (0x000a25df) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe470,	// (0x000a25df) list_single_fs_bigclock_indicator_pane_g3

0xe48a,	// (0x000a25f9) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe48a,	// (0x000a25f9) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000a3de3) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000a3de3) list_single_fs_bigclock_indicator_pane_g

0xe4b3,	// (0x000a2622) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4b3,	// (0x000a2622) list_single_fs_bigclock_indicator_pane_t1

0xe4db,	// (0x000a264a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4db,	// (0x000a264a) list_single_fs_bigclock_indicator_pane_t2

0xe503,	// (0x000a2672) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe503,	// (0x000a2672) list_single_fs_bigclock_indicator_pane_t3

0xe52b,	// (0x000a269a) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe52b,	// (0x000a269a) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000a3dee) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000a3dee) list_single_fs_bigclock_indicator_pane_t

0xb64a,	// (0x0009f7b9) image3_infobar_fav_pane_ParamLimits

0xb64a,	// (0x0009f7b9) image3_infobar_fav_pane

0xb65a,	// (0x0009f7c9) image3_infobar_loc_pane_ParamLimits

0xb65a,	// (0x0009f7c9) image3_infobar_loc_pane

0xb66e,	// (0x0009f7dd) image3_infobar_time_pane_ParamLimits

0xb66e,	// (0x0009f7dd) image3_infobar_time_pane

0xcb47,	// (0x000a0cb6) image3_infobar_time_pane_g1

0xb67e,	// (0x0009f7ed) image3_infobar_time_pane_t1

0xcb47,	// (0x000a0cb6) image3_infobar_loc_pane_g1

0xb68c,	// (0x0009f7fb) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x000a3fbb) image3_infobar_loc_pane_g

0xb694,	// (0x0009f803) image3_infobar_loc_pane_t1

0xcb47,	// (0x000a0cb6) image3_infobar_fav_pane_g1

0xb6a2,	// (0x0009f811) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x000a3fc0) image3_infobar_fav_pane_g

0xb6aa,	// (0x0009f819) fs_bigclock_status_battery_pane

0xb6b3,	// (0x0009f822) fs_bigclock_status_signal_pane

0xb6bc,	// (0x0009f82b) fs_bigclock_status_title_pane

0xb6c5,	// (0x0009f834) fs_bigclock_status_signal_pane_g1

0xb6ce,	// (0x0009f83d) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x000a3fc5) fs_bigclock_status_signal_pane_g

0xb6d6,	// (0x0009f845) fs_bigclock_status_battery_pane_g1

0xb6df,	// (0x0009f84e) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x000a3fca) fs_bigclock_status_battery_pane_g

0xb6e7,	// (0x0009f856) fs_bigclock_status_title_pane_t1

0xcb47,	// (0x000a0cb6) main_fs_bigclock_clock_pane_g1

0x9293,	// (0x0009d402) main_fs_bigclock_clock_pane_g2

0x9293,	// (0x0009d402) main_fs_bigclock_clock_pane_g3

0x9293,	// (0x0009d402) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x000a3fcf) main_fs_bigclock_clock_pane_g

0x929b,	// (0x0009d40a) main_fs_bigclock_clock_pane_t1

0x92a9,	// (0x0009d418) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x000a3fd8) main_fs_bigclock_clock_pane_t

0xb6f5,	// (0x0009f864) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb6f5,	// (0x0009f864) list_single_fs_bigclock_indicator_pane

0x92b8,	// (0x0009d427) list_single_fs_bigclock_pane_ParamLimits

0x92b8,	// (0x0009d427) list_single_fs_bigclock_pane

0xb70f,	// (0x0009f87e) main_fs_bigclock_indicator_pane_t1

0xb71e,	// (0x0009f88d) list_single_fs_bigclock_pane_g1

0xb726,	// (0x0009f895) list_single_fs_bigclock_pane_t1

0xcb47,	// (0x000a0cb6) main_fs_bigclock_swipe_pane_g1

0xb769,	// (0x0009f8d8) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x000a3fe9) main_fs_bigclock_swipe_pane_g

0xb771,	// (0x0009f8e0) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xb771,	// (0x0009f8e0) main_fs_bigclock_swipe_pane_t1

0x350f,	// (0x0009767e) call_type_pane_ParamLimits

0xec9e,	// (0x000a2e0d) main_btmg_pane

0xeb88,	// (0x000a2cf7) list_single_cale_mrui_row_pane_g2_ParamLimits

0xeb88,	// (0x000a2cf7) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000a3f61) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000a3f61) list_single_cale_mrui_row_pane_g

0xee26,	// (0x000a2f95) list_recal_vselct_arw_lo_pane

0xee2e,	// (0x000a2f9d) list_recal_vselct_arw_up_pane

0xee36,	// (0x000a2fa5) list_recal_vselct_pane

0x9319,	// (0x0009d488) btmg_button_pane

0x9325,	// (0x0009d494) main_btmg_pane_g1

0xec9e,	// (0x000a2e0d) bg_button_pane_cp044

0xb78e,	// (0x0009f8fd) btmg_button_pane_t1

0xc72b,	// (0x000a089a) aid_listscroll_gen

0xb523,	// (0x0009f692) main_cntbar_detail_pane

0xe8f0,	// (0x000a2a5f) list_cmail_folder_pane

0xb630,	// (0x0009f79f) sp_fs_scroll_pane_cp03_ParamLimits

0x932d,	// (0x0009d49c) list_single_fs_dyc_pane_cp01_ParamLimits

0x932d,	// (0x0009d49c) list_single_fs_dyc_pane_cp01

0xb79c,	// (0x0009f90b) aid_size_cmail_indent

0xeec2,	// (0x000a3031) list_single_dyc_row_pane_cp01

0x9378,	// (0x0009d4e7) cntbar_detail_list_pane_ParamLimits

0x9378,	// (0x0009d4e7) cntbar_detail_list_pane

0x93b2,	// (0x0009d521) main_cntbar_detail_cont_pane_ParamLimits

0x93b2,	// (0x0009d521) main_cntbar_detail_cont_pane

0x3428,	// (0x00097597) scroll_pane_cp032_ParamLimits

0x3428,	// (0x00097597) scroll_pane_cp032

0x93be,	// (0x0009d52d) cntbar_detail_list_event_pane_ParamLimits

0x93be,	// (0x0009d52d) cntbar_detail_list_event_pane

0x9384,	// (0x0009d4f3) cntbar_detail_list_shct_pane

0xa64a,	// (0x0009e7b9) aid_list_gen

0xb7a5,	// (0x0009f914) aid_scroll

0xb7ae,	// (0x0009f91d) aid_size_touch_scroll_bar

0xf04c,	// (0x000a31bb) aid_list_double

0x93d2,	// (0x0009d541) aid_list_single

0x76df,	// (0x0009b84e) aid_list_single_lg

0x93db,	// (0x0009d54a) aid_list_z_g_a_sm

0x93e3,	// (0x0009d552) aid_list_z_g_d

0x93eb,	// (0x0009d55a) aid_txt_z_prm

0x93f9,	// (0x0009d568) aid_txt_z_prm_cp01

0x9407,	// (0x0009d576) aid_txt_z_sec

0x9415,	// (0x0009d584) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9415,	// (0x0009d584) main_cntbar_detail_cont_pane_g1

0x9422,	// (0x0009d591) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9422,	// (0x0009d591) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x000a3fee) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x000a3fee) main_cntbar_detail_cont_pane_g

0xb7b7,	// (0x0009f926) main_cntbar_detail_cont_pane_t1

0xb7c5,	// (0x0009f934) main_cntbar_detail_cont_pane_t2

0xb7d3,	// (0x0009f942) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x000a3ff3) main_cntbar_detail_cont_pane_t

0x942e,	// (0x0009d59d) cell_cntbar_detail_list_shct_pane_ParamLimits

0x942e,	// (0x0009d59d) cell_cntbar_detail_list_shct_pane

0xb7e1,	// (0x0009f950) cntbar_detail_list_shct_pane_g1

0xb7ea,	// (0x0009f959) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x000a3ffa) cntbar_detail_list_shct_pane_g

0x9442,	// (0x0009d5b1) cntbar_detail_list_event_pane_g1_ParamLimits

0x9442,	// (0x0009d5b1) cntbar_detail_list_event_pane_g1

0x944e,	// (0x0009d5bd) cntbar_detail_list_event_pane_g2_ParamLimits

0x944e,	// (0x0009d5bd) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x000a3fff) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x000a3fff) cntbar_detail_list_event_pane_g

0x94ba,	// (0x0009d629) cntbar_detail_list_event_pane_t1_ParamLimits

0x94ba,	// (0x0009d629) cntbar_detail_list_event_pane_t1

0x94cf,	// (0x0009d63e) cntbar_detail_list_event_pane_t2_ParamLimits

0x94cf,	// (0x0009d63e) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x000a400c) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x000a400c) cntbar_detail_list_event_pane_t

0xcb47,	// (0x000a0cb6) cell_cntbar_detail_list_shct_pane_g1

0xadc3,	// (0x0009ef32) navi_pane_mv_g3

0xb523,	// (0x0009f692) main_cntbar_detail_pane_ParamLimits

0xec9e,	// (0x000a2e0d) main_notif_wgt_pane

0x5ea4,	// (0x0009a013) aid_tch_main_mp4_pane_g4

0x60d9,	// (0x0009a248) popup_slider_window_cp02

0xee1c,	// (0x000a2f8b) list_recal_day_event_pane

0x9358,	// (0x0009d4c7) cntbar_detail_btn_pane_ParamLimits

0x9358,	// (0x0009d4c7) cntbar_detail_btn_pane

0x9368,	// (0x0009d4d7) cntbar_detail_btn_pane_cp01_ParamLimits

0x9368,	// (0x0009d4d7) cntbar_detail_btn_pane_cp01

0x9384,	// (0x0009d4f3) cntbar_detail_list_shct_pane_ParamLimits

0x9390,	// (0x0009d4ff) cntbar_detail_pane_g1_ParamLimits

0x9390,	// (0x0009d4ff) cntbar_detail_pane_g1

0x939c,	// (0x0009d50b) cntbar_detail_pane_t1_ParamLimits

0x939c,	// (0x0009d50b) cntbar_detail_pane_t1

0x945a,	// (0x0009d5c9) cntbar_detail_list_event_pane_g3_ParamLimits

0x945a,	// (0x0009d5c9) cntbar_detail_list_event_pane_g3

0x9472,	// (0x0009d5e1) cntbar_detail_list_event_pane_g4_ParamLimits

0x9472,	// (0x0009d5e1) cntbar_detail_list_event_pane_g4

0x948a,	// (0x0009d5f9) cntbar_detail_list_event_pane_g5_ParamLimits

0x948a,	// (0x0009d5f9) cntbar_detail_list_event_pane_g5

0x94a2,	// (0x0009d611) cntbar_detail_list_event_pane_g6_ParamLimits

0x94a2,	// (0x0009d611) cntbar_detail_list_event_pane_g6

0x94e4,	// (0x0009d653) cntbar_detail_list_event_pane_t3_ParamLimits

0x94e4,	// (0x0009d653) cntbar_detail_list_event_pane_t3

0x94f6,	// (0x0009d665) popup_notif_wgt_window_ParamLimits

0x94f6,	// (0x0009d665) popup_notif_wgt_window

0x9506,	// (0x0009d675) popup_submenu_window_cp01_ParamLimits

0x9506,	// (0x0009d675) popup_submenu_window_cp01

0xae0b,	// (0x0009ef7a) bg_popup_window_pane_cp10

0xb7f3,	// (0x0009f962) listscroll_notif_wgt_pane

0xb805,	// (0x0009f974) list_notif_wgt_window

0xb80e,	// (0x0009f97d) scroll_pane_cp033

0x9518,	// (0x0009d687) list_notif_wgt_row_pane_ParamLimits

0x9518,	// (0x0009d687) list_notif_wgt_row_pane

0xb817,	// (0x0009f986) aid_size_list_notif_wgt_del

0xb824,	// (0x0009f993) list_notif_wgt_row_pane_g1

0xb830,	// (0x0009f99f) list_notif_wgt_row_pane_g2

0xb83c,	// (0x0009f9ab) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x000a4013) list_notif_wgt_row_pane_g

0xb849,	// (0x0009f9b8) list_notif_wgt_row_pane_t1

0xb85e,	// (0x0009f9cd) list_notif_wgt_row_pane_t2

0xb870,	// (0x0009f9df) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x000a401a) list_notif_wgt_row_pane_t

0xd873,	// (0x000a19e2) list_recal_day_event_pane_g1

0xb882,	// (0x0009f9f1) list_recal_day_event_pane_t1

0xec9e,	// (0x000a2e0d) bg_button_pane_cp045

0x952a,	// (0x0009d699) cntbar_detail_btn_pane_t1

0xc73f,	// (0x000a08ae) main_callh_pane_ParamLimits

0xc73f,	// (0x000a08ae) main_callh_pane

0xec9e,	// (0x000a2e0d) main_coverflow0_pane

0xec9e,	// (0x000a2e0d) main_wgtman_pane

0x83bd,	// (0x0009c52c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x83bd,	// (0x0009c52c) main_fs_bigclock_unlock_btn_pane

0x8cee,	// (0x0009ce5d) bg_button_pane_cp16

0x8cfe,	// (0x0009ce6d) cell_tport_appsw_pane_g3

0x9538,	// (0x0009d6a7) cf0_flow_pane_ParamLimits

0x9538,	// (0x0009d6a7) cf0_flow_pane

0xb891,	// (0x0009fa00) listscroll_cf0_pane

0xb89c,	// (0x0009fa0b) main_cf0_pane_g1

0x9547,	// (0x0009d6b6) main_cf0_pane_t1_ParamLimits

0x9547,	// (0x0009d6b6) main_cf0_pane_t1

0x955b,	// (0x0009d6ca) main_cf0_pane_t2_ParamLimits

0x955b,	// (0x0009d6ca) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x000a4026) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x000a4026) main_cf0_pane_t

0xb8ae,	// (0x0009fa1d) scroll_pane_cp11

0x956f,	// (0x0009d6de) cf0_flow_pane_g1

0x9577,	// (0x0009d6e6) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x000a402b) cf0_flow_pane_g

0x957f,	// (0x0009d6ee) cf0_flow_pane_t1

0xec9e,	// (0x000a2e0d) main_call6_pane

0xec9e,	// (0x000a2e0d) main_calllock_pane

0x958d,	// (0x0009d6fc) call6_btn_grp_pane_ParamLimits

0x958d,	// (0x0009d6fc) call6_btn_grp_pane

0x959c,	// (0x0009d70b) call6_pane_g1_ParamLimits

0x959c,	// (0x0009d70b) call6_pane_g1

0x95ab,	// (0x0009d71a) popup_call6_1st_window_ParamLimits

0x95ab,	// (0x0009d71a) popup_call6_1st_window

0x95b9,	// (0x0009d728) popup_call6_2nd_window_ParamLimits

0x95b9,	// (0x0009d728) popup_call6_2nd_window

0x95c7,	// (0x0009d736) cell_call6_btn_pane_ParamLimits

0x95c7,	// (0x0009d736) cell_call6_btn_pane

0xae0b,	// (0x0009ef7a) bg_popup_call2_in_pane_cp03

0xb8b9,	// (0x0009fa28) popup_call6_1st_window_g1

0xb8c1,	// (0x0009fa30) popup_call6_1st_window_g2

0xb8c9,	// (0x0009fa38) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x000a4030) popup_call6_1st_window_g

0xb8d1,	// (0x0009fa40) popup_call6_1st_window_t1

0xb8e0,	// (0x0009fa4f) popup_call6_1st_window_t2

0xb8f0,	// (0x0009fa5f) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x000a4037) popup_call6_1st_window_t

0xae0b,	// (0x0009ef7a) bg_popup_call2_in_pane_cp04

0xb8b9,	// (0x0009fa28) popup_call6_2nd_window_g1

0xb8c1,	// (0x0009fa30) popup_call6_2nd_window_g2

0xb8c9,	// (0x0009fa38) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x000a4030) popup_call6_2nd_window_g

0xb8d1,	// (0x0009fa40) popup_call6_2nd_window_t1

0xec9e,	// (0x000a2e0d) bg_button_pane_cp15

0xb900,	// (0x0009fa6f) cell_call6_btn_pane_g1

0xb909,	// (0x0009fa78) cell_call6_btn_pane_t1

0x95d6,	// (0x0009d745) listscroll_wgtman_pane_ParamLimits

0x95d6,	// (0x0009d745) listscroll_wgtman_pane

0x95f2,	// (0x0009d761) wgtman_btn_pane_ParamLimits

0x95f2,	// (0x0009d761) wgtman_btn_pane

0xabca,	// (0x0009ed39) aid_scroll_copy1

0xb918,	// (0x0009fa87) list_wgtman_pane

0x9627,	// (0x0009d796) wgtman_btn_pane_g1_ParamLimits

0x9627,	// (0x0009d796) wgtman_btn_pane_g1

0x964f,	// (0x0009d7be) wgtman_btn_pane_t1_ParamLimits

0x964f,	// (0x0009d7be) wgtman_btn_pane_t1

0xb922,	// (0x0009fa91) wgtman_btn_pane_t2_ParamLimits

0xb922,	// (0x0009fa91) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x000a403e) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x000a403e) wgtman_btn_pane_t

0x9686,	// (0x0009d7f5) listrow_wgtman_pane_ParamLimits

0x9686,	// (0x0009d7f5) listrow_wgtman_pane

0x96a1,	// (0x0009d810) listrow_wgtman_pane_g1

0x96ae,	// (0x0009d81d) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x000a4043) listrow_wgtman_pane_g

0x96cc,	// (0x0009d83b) listrow_wgtman_pane_t1

0x96e4,	// (0x0009d853) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x000a4048) listrow_wgtman_pane_t

0x970a,	// (0x0009d879) wait_bar_pane_cp09

0xb939,	// (0x0009faa8) main_calllock_btn_pane

0xb943,	// (0x0009fab2) main_calllock_pane_g1

0xec9e,	// (0x000a2e0d) bg_button_pane_cp17

0xb94f,	// (0x0009fabe) main_calllock_btn_pane_g1

0xb958,	// (0x0009fac7) main_calllock_btn_pane_t1

0xec9e,	// (0x000a2e0d) main_dialer3_pane

0xec9e,	// (0x000a2e0d) main_fmrd2_pane

0xcb47,	// (0x000a0cb6) main_fs_bigclock_unlock_btn_pane_g1

0xb96f,	// (0x0009fade) main_fs_bigclock_unlock_btn_pane_t1

0x971c,	// (0x0009d88b) area_fmrd2_info_pane_ParamLimits

0x971c,	// (0x0009d88b) area_fmrd2_info_pane

0x972a,	// (0x0009d899) area_fmrd2_visual_pane_ParamLimits

0x972a,	// (0x0009d899) area_fmrd2_visual_pane

0x9738,	// (0x0009d8a7) fmrd2_indi_pane_ParamLimits

0x9738,	// (0x0009d8a7) fmrd2_indi_pane

0x9745,	// (0x0009d8b4) area_fmrd2_visual_pane_g1

0x974d,	// (0x0009d8bc) area_fmrd2_visual_pane_t1

0x975d,	// (0x0009d8cc) area_fmrd2_visual_pane_t2

0x976d,	// (0x0009d8dc) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x000a4052) area_fmrd2_visual_pane_t

0x977d,	// (0x0009d8ec) area_fmrd2_info_pane_g1

0x9785,	// (0x0009d8f4) area_fmrd2_info_pane_t1

0x9795,	// (0x0009d904) area_fmrd2_info_pane_t2

0x97a5,	// (0x0009d914) area_fmrd2_info_pane_t3

0x97b5,	// (0x0009d924) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x000a4059) area_fmrd2_info_pane_t

0x97c3,	// (0x0009d932) fmrd2_indi_pane_t1

0x97d3,	// (0x0009d942) fmrd2_indi_pane_t2

0x97e3,	// (0x0009d952) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x000a4062) fmrd2_indi_pane_t

0xe499,	// (0x000a2608) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe499,	// (0x000a2608) list_single_fs_bigclock_indicator_pane_g5

0xe540,	// (0x000a26af) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe540,	// (0x000a26af) list_single_fs_bigclock_indicator_pane_t5

0x8eef,	// (0x0009d05e) aid_cell_bcale_month_pane_ParamLimits

0x8eef,	// (0x0009d05e) aid_cell_bcale_month_pane

0x8f0d,	// (0x0009d07c) bcale_month_pane_ParamLimits

0x8f0d,	// (0x0009d07c) bcale_month_pane

0x8f2b,	// (0x0009d09a) bcale_preview_pane_ParamLimits

0x8f2b,	// (0x0009d09a) bcale_preview_pane

0xb726,	// (0x0009f895) list_single_fs_bigclock_pane_t1_ParamLimits

0xb745,	// (0x0009f8b4) list_single_fs_bigclock_pane_t2_ParamLimits

0xb745,	// (0x0009f8b4) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x000a3fe4) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x000a3fe4) list_single_fs_bigclock_pane_t

0xb967,	// (0x0009fad6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x000a404d) main_fs_bigclock_unlock_btn_pane_g

0x97f1,	// (0x0009d960) aid_dia3_key_size_ParamLimits

0x97f1,	// (0x0009d960) aid_dia3_key_size

0x97fd,	// (0x0009d96c) aid_dia3_listrow_size_ParamLimits

0x97fd,	// (0x0009d96c) aid_dia3_listrow_size

0x980d,	// (0x0009d97c) dia3_keypad_fun_pane_ParamLimits

0x980d,	// (0x0009d97c) dia3_keypad_fun_pane

0x981f,	// (0x0009d98e) dia3_keypad_num_pane_ParamLimits

0x981f,	// (0x0009d98e) dia3_keypad_num_pane

0x9831,	// (0x0009d9a0) dia3_listscroll_pane_ParamLimits

0x9831,	// (0x0009d9a0) dia3_listscroll_pane

0x983f,	// (0x0009d9ae) dia3_numentry_pane_ParamLimits

0x983f,	// (0x0009d9ae) dia3_numentry_pane

0xb97d,	// (0x0009faec) dia3_list_pane

0xb988,	// (0x0009faf7) scroll_pane_cp12

0xec9e,	// (0x000a2e0d) bg_dia3_numentry_pane

0x984d,	// (0x0009d9bc) dia3_numentry_pane_t1

0x985c,	// (0x0009d9cb) cell_dia3_key_num_pane

0x9864,	// (0x0009d9d3) cell_dia3_key0_fun_pane_ParamLimits

0x9864,	// (0x0009d9d3) cell_dia3_key0_fun_pane

0x9871,	// (0x0009d9e0) cell_dia3_key1_fun_pane_ParamLimits

0x9871,	// (0x0009d9e0) cell_dia3_key1_fun_pane

0x987e,	// (0x0009d9ed) dia3_listrow_pane

0xe1a9,	// (0x000a2318) bg_dia3_numentry_pane_g1

0xec9e,	// (0x000a2e0d) bg_button_pane_cp21

0xb993,	// (0x0009fb02) cell_dia3_key_num_pane_t1

0xb9a1,	// (0x0009fb10) cell_dia3_key_num_pane_t2

0xb9b0,	// (0x0009fb1f) cell_dia3_key_num_pane_t3

0xb9bf,	// (0x0009fb2e) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x000a4069) cell_dia3_key_num_pane_t

0xec9e,	// (0x000a2e0d) bg_button_pane_cp19

0x988b,	// (0x0009d9fa) cell_dia3_key0_fun_pane_g1

0xec9e,	// (0x000a2e0d) bg_button_pane_cp20

0x9893,	// (0x0009da02) cell_dia3_key1_fun_pane_g1

0x989b,	// (0x0009da0a) area_left_week_number_pane

0x98ae,	// (0x0009da1d) area_top_day_name_pane

0x98bc,	// (0x0009da2b) frame_month_view_pane

0xb9ce,	// (0x0009fb3d) grid_month_view_pane

0x98d1,	// (0x0009da40) cell_top_day_name_pane_ParamLimits

0x98d1,	// (0x0009da40) cell_top_day_name_pane

0x98eb,	// (0x0009da5a) cell_area_left_week_number_pane_ParamLimits

0x98eb,	// (0x0009da5a) cell_area_left_week_number_pane

0x990e,	// (0x0009da7d) cell_month_view_pane_ParamLimits

0x990e,	// (0x0009da7d) cell_month_view_pane

0xb9dc,	// (0x0009fb4b) frm_month_g1

0x993a,	// (0x0009daa9) frm_month_g2

0x994b,	// (0x0009daba) frm_month_g3

0x995c,	// (0x0009dacb) frm_month_g4

0x996d,	// (0x0009dadc) frm_month_g5

0x9980,	// (0x0009daef) frm_month_g6

0x9993,	// (0x0009db02) frm_month_g7

0xb9e9,	// (0x0009fb58) frm_month_g8

0x99a6,	// (0x0009db15) frm_month_g9

0x99b3,	// (0x0009db22) frm_month_g10

0x99c0,	// (0x0009db2f) frm_month_g11

0x99cd,	// (0x0009db3c) frm_month_g12

0x99da,	// (0x0009db49) frm_month_g13

0x99e7,	// (0x0009db56) frm_month_g14

0x99f6,	// (0x0009db65) frm_month_g15

0x9a05,	// (0x0009db74) frm_month_g16

0x000f,

0xff03,	// (0x000a4072) frm_month_g

0xb9f6,	// (0x0009fb65) cell_top_day_name_pane_t1

0x9a14,	// (0x0009db83) cell_area_left_week_number_pane_g1

0x9a23,	// (0x0009db92) cell_area_left_week_number_pane_t1

0xcdaa,	// (0x000a0f19) cell_month_view_pane_g1

0x9a39,	// (0x0009dba8) cell_month_view_pane_t1

0xec9e,	// (0x000a2e0d) main_fps_pane

0xe715,	// (0x000a2884) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe715,	// (0x000a2884) cmail_ddmenu_btn02_pane_cp1

0xe731,	// (0x000a28a0) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe731,	// (0x000a28a0) cmail_ddmenu_btn02_pane_cp2

0x91f2,	// (0x0009d361) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x91f2,	// (0x0009d361) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000a3f9c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000a3f9c) cmail_ddmenu_btn02_pane_g

0x9210,	// (0x0009d37f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9210,	// (0x0009d37f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000a3fa1) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000a3fa1) cmail_ddmenu_btn02_pane_t

0x9a4f,	// (0x0009dbbe) fps_text_pane_ParamLimits

0x9a4f,	// (0x0009dbbe) fps_text_pane

0x9a5c,	// (0x0009dbcb) main_fps_pane_g1_ParamLimits

0x9a5c,	// (0x0009dbcb) main_fps_pane_g1

0x9a6a,	// (0x0009dbd9) wait_bar_pane_cp010_ParamLimits

0x9a6a,	// (0x0009dbd9) wait_bar_pane_cp010

0x9a76,	// (0x0009dbe5) fps_text_pane_t1_ParamLimits

0x9a76,	// (0x0009dbe5) fps_text_pane_t1

0x64c9,	// (0x0009a638) cam4_image_uncrop_pane_g1

0x64d2,	// (0x0009a641) cam4_image_uncrop_pane_g2

0x64db,	// (0x0009a64a) cam4_image_uncrop_pane_g3

0x64e4,	// (0x0009a653) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000a3a5d) cam4_image_uncrop_pane_g

0x987e,	// (0x0009d9ed) dia3_listrow_pane_ParamLimits

0xec9e,	// (0x000a2e0d) main_phob2_pane

0x8cd0,	// (0x0009ce3f) cell_tport_appsw_pane_cp02_ParamLimits

0x8cd0,	// (0x0009ce3f) cell_tport_appsw_pane_cp02

0x8cdf,	// (0x0009ce4e) cell_tport_appsw_pane_cp03_ParamLimits

0x8cdf,	// (0x0009ce4e) cell_tport_appsw_pane_cp03

0xec9e,	// (0x000a2e0d) phob2_contact_card_pane

0xec9e,	// (0x000a2e0d) phob2_listscroll_pane

0xba09,	// (0x0009fb78) phob2_list_pane

0xba11,	// (0x0009fb80) scroll_pane_cp034

0x9a8f,	// (0x0009dbfe) phob2_cc_data_pane_ParamLimits

0x9a8f,	// (0x0009dbfe) phob2_cc_data_pane

0x9aa9,	// (0x0009dc18) phob2_cc_listscroll_pane_ParamLimits

0x9aa9,	// (0x0009dc18) phob2_cc_listscroll_pane

0x9ac3,	// (0x0009dc32) list_double_large_graphic_phob2_pane_ParamLimits

0x9ac3,	// (0x0009dc32) list_double_large_graphic_phob2_pane

0x9ae1,	// (0x0009dc50) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9ae1,	// (0x0009dc50) list_double_large_graphic_phob2_pane_g1

0x9af7,	// (0x0009dc66) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9af7,	// (0x0009dc66) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x000a4093) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x000a4093) list_double_large_graphic_phob2_pane_g

0x9b03,	// (0x0009dc72) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9b03,	// (0x0009dc72) list_double_large_graphic_phob2_pane_t1

0x9b18,	// (0x0009dc87) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9b18,	// (0x0009dc87) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x000a4098) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x000a4098) list_double_large_graphic_phob2_pane_t

0xec9e,	// (0x000a2e0d) list_highlight_pane_cp024

0x9b2a,	// (0x0009dc99) phob2_cc_button_pane

0x9b32,	// (0x0009dca1) phob2_cc_data_pane_g1_ParamLimits

0x9b32,	// (0x0009dca1) phob2_cc_data_pane_g1

0x9b3e,	// (0x0009dcad) phob2_cc_data_pane_g2_ParamLimits

0x9b3e,	// (0x0009dcad) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x000a409d) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x000a409d) phob2_cc_data_pane_g

0x9b4a,	// (0x0009dcb9) phob2_cc_data_pane_t1_ParamLimits

0x9b4a,	// (0x0009dcb9) phob2_cc_data_pane_t1

0x9b5c,	// (0x0009dccb) phob2_cc_data_pane_t2_ParamLimits

0x9b5c,	// (0x0009dccb) phob2_cc_data_pane_t2

0x9b6e,	// (0x0009dcdd) phob2_cc_data_pane_t3_ParamLimits

0x9b6e,	// (0x0009dcdd) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x000a40a2) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x000a40a2) phob2_cc_data_pane_t

0xba19,	// (0x0009fb88) phob2_cc_list_pane_ParamLimits

0xba19,	// (0x0009fb88) phob2_cc_list_pane

0xdac3,	// (0x000a1c32) scroll_pane_cp035_ParamLimits

0xdac3,	// (0x000a1c32) scroll_pane_cp035

0xb523,	// (0x0009f692) bg_button_pane_cp033

0xba25,	// (0x0009fb94) phob2_cc_button_pane_g1

0xba31,	// (0x0009fba0) phob2_cc_button_pane_t1

0xba46,	// (0x0009fbb5) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x000a40a9) phob2_cc_button_pane_t

0x9b80,	// (0x0009dcef) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9b80,	// (0x0009dcef) list_double_large_graphic_phob2_cc_pane

0x9ba7,	// (0x0009dd16) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9ba7,	// (0x0009dd16) list_double_large_graphic_phob2_cc_pane_g1

0x9bb8,	// (0x0009dd27) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9bb8,	// (0x0009dd27) list_double_large_graphic_phob2_cc_pane_g2

0x9bc4,	// (0x0009dd33) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9bc4,	// (0x0009dd33) list_double_large_graphic_phob2_cc_pane_g3

0x9bd0,	// (0x0009dd3f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9bd0,	// (0x0009dd3f) list_double_large_graphic_phob2_cc_pane_g4

0x9bdc,	// (0x0009dd4b) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9bdc,	// (0x0009dd4b) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x000a40ae) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x000a40ae) list_double_large_graphic_phob2_cc_pane_g

0x9be8,	// (0x0009dd57) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9be8,	// (0x0009dd57) list_double_large_graphic_phob2_cc_pane_t1

0x9c11,	// (0x0009dd80) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9c11,	// (0x0009dd80) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x000a40b9) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x000a40b9) list_double_large_graphic_phob2_cc_pane_t

0xba58,	// (0x0009fbc7) list_highlight_pane_cp025_ParamLimits

0xba58,	// (0x0009fbc7) list_highlight_pane_cp025

0xb523,	// (0x0009f692) bg_button_pane_cp033_ParamLimits

0xba25,	// (0x0009fb94) phob2_cc_button_pane_g1_ParamLimits

0xba31,	// (0x0009fba0) phob2_cc_button_pane_t1_ParamLimits

0xba46,	// (0x0009fbb5) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x000a40a9) phob2_cc_button_pane_t_ParamLimits

0x1207,	// (0x00095376) popup_wgtman_window

0xd72b,	// (0x000a189a) scroll_pane_cp038

0x960f,	// (0x0009d77e) wgtman_btn_pane_cp_01_ParamLimits

0x960f,	// (0x0009d77e) wgtman_btn_pane_cp_01

0xba66,	// (0x0009fbd5) wgtman_content_pane

0xba6f,	// (0x0009fbde) wgtman_heading_pane

0xec9e,	// (0x000a2e0d) bg_heading_pane_cp02

0xba78,	// (0x0009fbe7) wgtman_heading_pane_g1

0xba80,	// (0x0009fbef) wgtman_heading_pane_t1

0xba8e,	// (0x0009fbfd) scroll_pane_cp036

0xba96,	// (0x0009fc05) wgtman_list_pane

0xba9e,	// (0x0009fc0d) wgtman_list_pane_t1_ParamLimits

0xba9e,	// (0x0009fc0d) wgtman_list_pane_t1

0x6428,	// (0x0009a597) cam4_grid_pane

0x71aa,	// (0x0009b319) bg_button_pane_cp015_ParamLimits

0x71bc,	// (0x0009b32b) bg_button_pane_cp016_ParamLimits

0x71cf,	// (0x0009b33e) bg_button_pane_cp017_ParamLimits

0x7225,	// (0x0009b394) popup_vitu2_query_window_g3_ParamLimits

0x7225,	// (0x0009b394) popup_vitu2_query_window_g3

0x72e0,	// (0x0009b44f) popup_vitu2_query_window_t6_ParamLimits

0x72e0,	// (0x0009b44f) popup_vitu2_query_window_t6

0x730b,	// (0x0009b47a) popup_vitu2_query_window_t7_ParamLimits

0x730b,	// (0x0009b47a) popup_vitu2_query_window_t7

0xd64b,	// (0x000a17ba) cam4_grid_pane_g1

0xd654,	// (0x000a17c3) cam4_grid_pane_g2

0xbab8,	// (0x0009fc27) cam4_grid_pane_g3

0xbac1,	// (0x0009fc30) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x000a40be) cam4_grid_pane_g

0x2182,	// (0x000962f1) aid_placing_vt_slider_lsc_ParamLimits

0x24ce,	// (0x0009663d) vidtel_button_pane_ParamLimits

0x24ce,	// (0x0009663d) vidtel_button_pane

0xbacc,	// (0x0009fc3b) bg_button_pane_cp034

0x9c3a,	// (0x0009dda9) vidtel_button_pane_g1

0xbad6,	// (0x0009fc45) vidtel_button_pane_t1

0xd851,	// (0x000a19c0) aid_size_vtel_slider_touch

0xdac3,	// (0x000a1c32) scroll_pane_cp039

0xe1e7,	// (0x000a2356) ncim_query_button_pane_cp01_ParamLimits

0xe206,	// (0x000a2375) ncimui_query_pane_g1_ParamLimits

0xb523,	// (0x0009f692) input_focus_pane_cp012_ParamLimits

0xe22b,	// (0x000a239a) ncim_query_entry_pane_t1_ParamLimits

0xdac3,	// (0x000a1c32) scroll_pane_cp039_ParamLimits

0xacae,	// (0x0009ee1d) navi_pane_bcale_mc_g1

0xacb6,	// (0x0009ee25) navi_pane_bcale_mc_t1

0xe77a,	// (0x000a28e9) main_sp_fs_email_pane_g1

0xe786,	// (0x000a28f5) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000a3e54) main_sp_fs_email_pane_g

0xeb94,	// (0x000a2d03) list_single_cale_mrui_row_pane_g3_ParamLimits

0xeb94,	// (0x000a2d03) list_single_cale_mrui_row_pane_g3

0x9238,	// (0x0009d3a7) list_single_recal_day_pane_g5_event_pane

0xee96,	// (0x000a3005) list_single_recal_day_pane_g7

0xbae4,	// (0x0009fc53) list_recal_day_event_pane_cp01

0xbaed,	// (0x0009fc5c) list_recal_vselct_arw_lo_pane_cp01

0xbaf5,	// (0x0009fc64) list_recal_vselct_arw_up_pane_cp01

0xbafd,	// (0x0009fc6c) list_recal_vselct_pane_cp01

0xd873,	// (0x000a19e2) list_recal_day_event_pane_cp01_g1

0xeecb,	// (0x000a303a) list_recal_day_event_pane_cp01_t1

0xee9e,	// (0x000a300d) list_single_recal_day_pane_t1_ParamLimits

0xeeb0,	// (0x000a301f) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x000a3fb1) list_single_recal_day_pane_t_ParamLimits

0xa120,	// (0x0009e28f) bg_notes_pane_ParamLimits

0xa1c3,	// (0x0009e332) list_notes_pane_ParamLimits

0x156f,	// (0x000956de) scroll_pane_cp06_ParamLimits

0xa1e5,	// (0x0009e354) main_notes_pane_ParamLimits

0xec9e,	// (0x000a2e0d) main_welc_pane

0x9c42,	// (0x0009ddb1) main_welc_body_pane_ParamLimits

0x9c42,	// (0x0009ddb1) main_welc_body_pane

0x9c5c,	// (0x0009ddcb) main_welc_opti_pane_ParamLimits

0x9c5c,	// (0x0009ddcb) main_welc_opti_pane

0x9c8f,	// (0x0009ddfe) main_welc_pane_t1_ParamLimits

0x9c8f,	// (0x0009ddfe) main_welc_pane_t1

0x9ca9,	// (0x0009de18) main_welc_body_row_pane_ParamLimits

0x9ca9,	// (0x0009de18) main_welc_body_row_pane

0xedb1,	// (0x000a2f20) main_welc_opti_row_pane_ParamLimits

0xedb1,	// (0x000a2f20) main_welc_opti_row_pane

0xbb07,	// (0x0009fc76) main_welc_opti_row_pane_g1

0xbb0f,	// (0x0009fc7e) main_welc_opti_row_pane_t1

0xbb1f,	// (0x0009fc8e) main_welc_body_row_pane_t1

0xb7fd,	// (0x0009f96c) popup_notif_wgt_heading_pane

0xb817,	// (0x0009f986) aid_size_list_notif_wgt_del_ParamLimits

0xb824,	// (0x0009f993) list_notif_wgt_row_pane_g1_ParamLimits

0xb830,	// (0x0009f99f) list_notif_wgt_row_pane_g2_ParamLimits

0xb83c,	// (0x0009f9ab) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x000a4013) list_notif_wgt_row_pane_g_ParamLimits

0xb849,	// (0x0009f9b8) list_notif_wgt_row_pane_t1_ParamLimits

0xb85e,	// (0x0009f9cd) list_notif_wgt_row_pane_t2_ParamLimits

0xb870,	// (0x0009f9df) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x000a401a) list_notif_wgt_row_pane_t_ParamLimits

0x96a1,	// (0x0009d810) listrow_wgtman_pane_g1_ParamLimits

0x96ae,	// (0x0009d81d) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x000a4043) listrow_wgtman_pane_g_ParamLimits

0x96cc,	// (0x0009d83b) listrow_wgtman_pane_t1_ParamLimits

0x96e4,	// (0x0009d853) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x000a4048) listrow_wgtman_pane_t_ParamLimits

0x970a,	// (0x0009d879) wait_bar_pane_cp09_ParamLimits

0xec9e,	// (0x000a2e0d) bg_popup_heading_pane_cp02

0xbb2e,	// (0x0009fc9d) popup_notif_wgt_heading_pane_g1

0xbb36,	// (0x0009fca5) popup_notif_wgt_heading_pane_t1

0xec9e,	// (0x000a2e0d) main_vids_pane

0xec9e,	// (0x000a2e0d) vids_listscroll_pane

0x9cce,	// (0x0009de3d) scroll_pane_cp040

0xec9e,	// (0x000a2e0d) vids_list_pane

0x9cd9,	// (0x0009de48) vids_list_double_pane_ParamLimits

0x9cd9,	// (0x0009de48) vids_list_double_pane

0x9cf3,	// (0x0009de62) vids_list_double_pane_g1

0x9cfc,	// (0x0009de6b) vids_list_double_pane_t1

0x9d0c,	// (0x0009de7b) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x000a40cc) vids_list_double_pane_t

0x4550,	// (0x000986bf) main_ncimui_pane_ParamLimits

0x7f7d,	// (0x0009c0ec) main_ncimui_pane_g1_ParamLimits

0x7f89,	// (0x0009c0f8) main_ncimui_pane_g2_ParamLimits

0x7f89,	// (0x0009c0f8) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x000a3d59) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x000a3d59) main_ncimui_pane_g

0x9c75,	// (0x0009dde4) main_welc_pane_g1_ParamLimits

0x9c75,	// (0x0009dde4) main_welc_pane_g1

0x9c81,	// (0x0009ddf0) main_welc_pane_g2_ParamLimits

0x9c81,	// (0x0009ddf0) main_welc_pane_g2

0x0001,

0xff58,	// (0x000a40c7) main_welc_pane_g_ParamLimits

0xff58,	// (0x000a40c7) main_welc_pane_g

0xa120,	// (0x0009e28f) listscroll_mce_pane_ParamLimits

0xae03,	// (0x0009ef72) wait_bar_pane_cp10

0xc733,	// (0x000a08a2) main_cale_day_pane_ParamLimits

0xc733,	// (0x000a08a2) main_cale_week_pane_ParamLimits

0xa120,	// (0x0009e28f) main_messa_pane_ParamLimits

0x587a,	// (0x000999e9) main_clock2_btn_pane_ParamLimits

0x587a,	// (0x000999e9) main_clock2_btn_pane

0xcf8a,	// (0x000a10f9) main_clock2_btn_pane_cp01_ParamLimits

0xcf8a,	// (0x000a10f9) main_clock2_btn_pane_cp01

0xeb20,	// (0x000a2c8f) list_cale_mrui_pane_ParamLimits

0xb8a6,	// (0x0009fa15) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x000a4021) main_cf0_pane_g

0x989b,	// (0x0009da0a) area_left_week_number_pane_ParamLimits

0x98ae,	// (0x0009da1d) area_top_day_name_pane_ParamLimits

0x98bc,	// (0x0009da2b) frame_month_view_pane_ParamLimits

0xb9ce,	// (0x0009fb3d) grid_month_view_pane_ParamLimits

0xb9dc,	// (0x0009fb4b) frm_month_g1_ParamLimits

0x993a,	// (0x0009daa9) frm_month_g2_ParamLimits

0x994b,	// (0x0009daba) frm_month_g3_ParamLimits

0x995c,	// (0x0009dacb) frm_month_g4_ParamLimits

0x996d,	// (0x0009dadc) frm_month_g5_ParamLimits

0x9980,	// (0x0009daef) frm_month_g6_ParamLimits

0x9993,	// (0x0009db02) frm_month_g7_ParamLimits

0xb9e9,	// (0x0009fb58) frm_month_g8_ParamLimits

0x99a6,	// (0x0009db15) frm_month_g9_ParamLimits

0x99b3,	// (0x0009db22) frm_month_g10_ParamLimits

0x99c0,	// (0x0009db2f) frm_month_g11_ParamLimits

0x99cd,	// (0x0009db3c) frm_month_g12_ParamLimits

0x99da,	// (0x0009db49) frm_month_g13_ParamLimits

0x99e7,	// (0x0009db56) frm_month_g14_ParamLimits

0x99f6,	// (0x0009db65) frm_month_g15_ParamLimits

0x9a05,	// (0x0009db74) frm_month_g16_ParamLimits

0xff03,	// (0x000a4072) frm_month_g_ParamLimits

0xb9f6,	// (0x0009fb65) cell_top_day_name_pane_t1_ParamLimits

0x9a14,	// (0x0009db83) cell_area_left_week_number_pane_g1_ParamLimits

0x9a23,	// (0x0009db92) cell_area_left_week_number_pane_t1_ParamLimits

0xcdaa,	// (0x000a0f19) cell_month_view_pane_g1_ParamLimits

0x9a39,	// (0x0009dba8) cell_month_view_pane_t1_ParamLimits

0xa118,	// (0x0009e287) main_clock2_btn_pane_g1

0xbb44,	// (0x0009fcb3) main_clock2_btn_pane_t1

0xb523,	// (0x0009f692) listscroll_cmail_pane_ParamLimits

0xe77a,	// (0x000a28e9) main_sp_fs_email_pane_g1_ParamLimits

0xe786,	// (0x000a28f5) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000a3e54) main_sp_fs_email_pane_g_ParamLimits

0xedfd,	// (0x000a2f6c) list_recal_day_pane_ParamLimits

0xee0e,	// (0x000a2f7d) mian_recal_day_pane_t1

0x89a6,	// (0x0009cb15) list_single_dyc_row_text_pane_t4_ParamLimits

0x89a6,	// (0x0009cb15) list_single_dyc_row_text_pane_t4

0x89dd,	// (0x0009cb4c) list_single_dyc_row_text_pane_t5_ParamLimits

0x89dd,	// (0x0009cb4c) list_single_dyc_row_text_pane_t5

0xe82c,	// (0x000a299b) list_single_dyc_row_text_pane_t6_ParamLimits

0xe82c,	// (0x000a299b) list_single_dyc_row_text_pane_t6

0x335a,	// (0x000974c9) aid_mgn_list_cale_time_pane

0x4550,	// (0x000986bf) main_gallery2_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
