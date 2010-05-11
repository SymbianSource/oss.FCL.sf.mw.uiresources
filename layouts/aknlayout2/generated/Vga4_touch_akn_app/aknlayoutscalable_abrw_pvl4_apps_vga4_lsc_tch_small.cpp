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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0006e1bd };

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
0xfc2d,	// (0x0006ddea) Screen

0xfc39,	// (0x0006ddf6) application_window

0xfc85,	// (0x0006de42) area_bottom_pane_ParamLimits

0xfc85,	// (0x0006de42) area_bottom_pane

0xfcbe,	// (0x0006de7b) area_top_pane_ParamLimits

0xfcbe,	// (0x0006de7b) area_top_pane

0x9585,	// (0x00077742) call_video_uplink_pane_ParamLimits

0x9585,	// (0x00077742) call_video_uplink_pane

0xfd4c,	// (0x0006df09) main_pane_ParamLimits

0xfd4c,	// (0x0006df09) main_pane

0xc87e,	// (0x0007aa3b) context_pane

0x38e9,	// (0x00071aa6) navi_pane

0x3919,	// (0x00071ad6) popup_cale_events_window_ParamLimits

0x3919,	// (0x00071ad6) popup_cale_events_window

0xc891,	// (0x0007aa4e) popup_mup_playback_window

0x3931,	// (0x00071aee) signal_pane

0xa8d9,	// (0x00078a96) main_browser_pane

0xaa8f,	// (0x00078c4c) main_burst_pane

0x35eb,	// (0x000717a8) main_calc_pane

0xc821,	// (0x0007a9de) main_cale_day_pane

0x039c,	// (0x0006e559) main_cale_month_pane

0xc821,	// (0x0007a9de) main_cale_week_pane

0xaa8f,	// (0x00078c4c) main_call_pane

0x99c4,	// (0x00077b81) main_call_poc_pane

0xaa8f,	// (0x00078c4c) main_camera_pane

0xaa8f,	// (0x00078c4c) main_chi_dic_pane

0xb267,	// (0x00079424) main_clock_pane

0x99c4,	// (0x00077b81) main_fmradio_pane

0xaa8f,	// (0x00078c4c) main_graph_messa_pane

0x99c4,	// (0x00077b81) main_help_pane

0xa8d9,	// (0x00078a96) main_im_pane

0x9c1f,	// (0x00077ddc) main_image_pane_ParamLimits

0x9c1f,	// (0x00077ddc) main_image_pane

0x99c4,	// (0x00077b81) main_location2_pane

0xaa8f,	// (0x00078c4c) main_location_pane

0x9c1f,	// (0x00077ddc) main_messa_pane

0x99c4,	// (0x00077b81) main_mp2_pane

0xaa8f,	// (0x00078c4c) main_mp_pane

0x99c4,	// (0x00077b81) main_msg_pane

0x99c4,	// (0x00077b81) main_mup_eq_pane

0x99c4,	// (0x00077b81) main_mup_pane

0xa8d9,	// (0x00078a96) main_notes_pane

0x99c4,	// (0x00077b81) main_pec_pane

0x99c4,	// (0x00077b81) main_phob_pane

0x99c4,	// (0x00077b81) main_pinb_pane

0x99c4,	// (0x00077b81) main_postcard_pane

0x99c4,	// (0x00077b81) main_qdial_pane

0xaa8f,	// (0x00078c4c) main_skin_pane

0x99c4,	// (0x00077b81) main_smil2_pane

0xaa8f,	// (0x00078c4c) main_smil_pane

0xaa8f,	// (0x00078c4c) main_video_pane

0xaa8f,	// (0x00078c4c) main_video_tele_pane

0x9c1f,	// (0x00077ddc) main_viewer_pane_ParamLimits

0x9c1f,	// (0x00077ddc) main_viewer_pane

0xaa8f,	// (0x00078c4c) main_vorec_pane

0x3641,	// (0x000717fe) popup_blid_sat_info_window_ParamLimits

0x3641,	// (0x000717fe) popup_blid_sat_info_window

0x36a5,	// (0x00071862) popup_dyc_status_message_window_ParamLimits

0x36a5,	// (0x00071862) popup_dyc_status_message_window

0x36bf,	// (0x0007187c) popup_grid_large_graphic_window_ParamLimits

0x36bf,	// (0x0007187c) popup_grid_large_graphic_window

0x3781,	// (0x0007193e) popup_loc_request_window_ParamLimits

0x3781,	// (0x0007193e) popup_loc_request_window

0x38bd,	// (0x00071a7a) popup_wml_address_window_ParamLimits

0x38bd,	// (0x00071a7a) popup_wml_address_window

0x3429,	// (0x000715e6) call_muted_g1

0x30bd,	// (0x0007127a) popup_call_audio_conf_window_ParamLimits

0x30bd,	// (0x0007127a) popup_call_audio_conf_window

0x3439,	// (0x000715f6) popup_call_audio_first_window_ParamLimits

0x3439,	// (0x000715f6) popup_call_audio_first_window

0x34af,	// (0x0007166c) popup_call_audio_in_window_ParamLimits

0x34af,	// (0x0007166c) popup_call_audio_in_window

0x34eb,	// (0x000716a8) popup_call_audio_out_window_ParamLimits

0x34eb,	// (0x000716a8) popup_call_audio_out_window

0x3525,	// (0x000716e2) popup_call_audio_second_window_ParamLimits

0x3525,	// (0x000716e2) popup_call_audio_second_window

0x357b,	// (0x00071738) popup_call_audio_wait_window_ParamLimits

0x357b,	// (0x00071738) popup_call_audio_wait_window

0x35b0,	// (0x0007176d) popup_number_entry_window_ParamLimits

0x35b0,	// (0x0007176d) popup_number_entry_window

0x95b1,	// (0x0007776e) bg_popup_call_pane_cp05_ParamLimits

0x95b1,	// (0x0007776e) bg_popup_call_pane_cp05

0x95d1,	// (0x0007778e) popup_number_entry_window_t1

0x95e4,	// (0x000777a1) popup_number_entry_window_t2

0x95f6,	// (0x000777b3) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0007d287) popup_number_entry_window_t

0x9608,	// (0x000777c5) text_title_cp2

0x961b,	// (0x000777d8) bg_popup_call_pane_cp_ParamLimits

0x961b,	// (0x000777d8) bg_popup_call_pane_cp

0x9629,	// (0x000777e6) call_thumbnail_pane

0x9631,	// (0x000777ee) popup_call_audio_in_window_g1_ParamLimits

0x9631,	// (0x000777ee) popup_call_audio_in_window_g1

0x963d,	// (0x000777fa) popup_call_audio_in_window_g2_ParamLimits

0x963d,	// (0x000777fa) popup_call_audio_in_window_g2

0x9649,	// (0x00077806) popup_call_audio_in_window_g3_ParamLimits

0x9649,	// (0x00077806) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0007d290) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0007d290) popup_call_audio_in_window_g

0x9655,	// (0x00077812) popup_call_audio_in_window_t1_ParamLimits

0x9655,	// (0x00077812) popup_call_audio_in_window_t1

0x9671,	// (0x0007782e) popup_call_audio_in_window_t2_ParamLimits

0x9671,	// (0x0007782e) popup_call_audio_in_window_t2

0x968d,	// (0x0007784a) popup_call_audio_in_window_t3_ParamLimits

0x968d,	// (0x0007784a) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0007d297) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0007d297) popup_call_audio_in_window_t

0x961b,	// (0x000777d8) bg_popup_call_pane_cp01_ParamLimits

0x961b,	// (0x000777d8) bg_popup_call_pane_cp01

0x9629,	// (0x000777e6) call_thumbnail_pane_cp02

0x96a0,	// (0x0007785d) call_type_pane_cp022

0x96a8,	// (0x00077865) popup_call_audio_out_window_g1_ParamLimits

0x96a8,	// (0x00077865) popup_call_audio_out_window_g1

0x96ba,	// (0x00077877) popup_call_audio_out_window_g2_ParamLimits

0x96ba,	// (0x00077877) popup_call_audio_out_window_g2

0x96c6,	// (0x00077883) popup_call_audio_out_window_g3_ParamLimits

0x96c6,	// (0x00077883) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0007d29e) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0007d29e) popup_call_audio_out_window_g

0x96d8,	// (0x00077895) popup_call_audio_out_window_t1_ParamLimits

0x96d8,	// (0x00077895) popup_call_audio_out_window_t1

0x96f0,	// (0x000778ad) popup_call_audio_out_window_t2_ParamLimits

0x96f0,	// (0x000778ad) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0007d2a5) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0007d2a5) popup_call_audio_out_window_t

0x9705,	// (0x000778c2) bg_popup_call_pane_ParamLimits

0x9705,	// (0x000778c2) bg_popup_call_pane

0xff0b,	// (0x0006e0c8) call_thumbnail_pane_cp_ParamLimits

0xff0b,	// (0x0006e0c8) call_thumbnail_pane_cp

0x9789,	// (0x00077946) call_type_pane_cp01_ParamLimits

0x9789,	// (0x00077946) call_type_pane_cp01

0x97cd,	// (0x0007798a) popup_call_audio_first_window_g1_ParamLimits

0x97cd,	// (0x0007798a) popup_call_audio_first_window_g1

0x9819,	// (0x000779d6) popup_call_audio_first_window_g2_ParamLimits

0x9819,	// (0x000779d6) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0007d2aa) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0007d2aa) popup_call_audio_first_window_g

0x985d,	// (0x00077a1a) popup_call_audio_first_window_t1_ParamLimits

0x985d,	// (0x00077a1a) popup_call_audio_first_window_t1

0x9909,	// (0x00077ac6) popup_call_audio_first_window_t4_ParamLimits

0x9909,	// (0x00077ac6) popup_call_audio_first_window_t4

0x9995,	// (0x00077b52) popup_call_audio_first_window_t5_ParamLimits

0x9995,	// (0x00077b52) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0007d2af) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0007d2af) popup_call_audio_first_window_t

0x99c4,	// (0x00077b81) bg_popup_call_pane_cp02

0x99ce,	// (0x00077b8b) call_type_pane_cp023

0x99d6,	// (0x00077b93) popup_call_audio_wait_window_g1

0x99de,	// (0x00077b9b) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0007d2b6) popup_call_audio_wait_window_g

0x99e6,	// (0x00077ba3) popup_call_audio_wait_window_t3

0x99f4,	// (0x00077bb1) bg_popup_call_pane_cp03_ParamLimits

0x99f4,	// (0x00077bb1) bg_popup_call_pane_cp03

0x9a54,	// (0x00077c11) call_thumbnail_pane_cp011_ParamLimits

0x9a54,	// (0x00077c11) call_thumbnail_pane_cp011

0x9a60,	// (0x00077c1d) call_type_pane_cp034_ParamLimits

0x9a60,	// (0x00077c1d) call_type_pane_cp034

0x9a9c,	// (0x00077c59) popup_call_audio_second_window_g1_ParamLimits

0x9a9c,	// (0x00077c59) popup_call_audio_second_window_g1

0x9ad8,	// (0x00077c95) popup_call_audio_second_window_g2_ParamLimits

0x9ad8,	// (0x00077c95) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0007d2bb) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0007d2bb) popup_call_audio_second_window_g

0x9b14,	// (0x00077cd1) popup_call_audio_second_window_t1_ParamLimits

0x9b14,	// (0x00077cd1) popup_call_audio_second_window_t1

0x9b95,	// (0x00077d52) popup_call_audio_second_window_t2_ParamLimits

0x9b95,	// (0x00077d52) popup_call_audio_second_window_t2

0x9bcb,	// (0x00077d88) popup_call_audio_second_window_t3_ParamLimits

0x9bcb,	// (0x00077d88) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0007d2c0) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0007d2c0) popup_call_audio_second_window_t

0x99c4,	// (0x00077b81) bg_popup_call_pane_cp04

0x9c01,	// (0x00077dbe) list_conf_pane

0x9c09,	// (0x00077dc6) popup_call_audio_conf_window_t1

0x9c17,	// (0x00077dd4) call_thumbnail_pane_g1

0x9c1f,	// (0x00077ddc) bg_pinb_pane_ParamLimits

0x9c1f,	// (0x00077ddc) bg_pinb_pane

0x9c2d,	// (0x00077dea) find_pinb_pane

0x9c36,	// (0x00077df3) listscroll_pinb_pane_ParamLimits

0x9c36,	// (0x00077df3) listscroll_pinb_pane

0x9c45,	// (0x00077e02) pinb_bg_pane_g1

0xff2f,	// (0x0006e0ec) pinb_bg_pane_g2

0xff3b,	// (0x0006e0f8) pinb_bg_pane_g3

0xff47,	// (0x0006e104) pinb_bg_pane_g4

0xff53,	// (0x0006e110) pinb_bg_pane_g5

0xff5f,	// (0x0006e11c) pinb_bg_pane_g6

0xff6a,	// (0x0006e127) pinb_bg_pane_g7

0xff75,	// (0x0006e132) pinb_bg_pane_g8

0xff80,	// (0x0006e13d) pinb_bg_pane_g9

0xff8a,	// (0x0006e147) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0007d2c7) pinb_bg_pane_g

0xffa7,	// (0x0006e164) grid_pinb_pane

0xffb2,	// (0x0006e16f) list_pinb_pane

0xffbd,	// (0x0006e17a) scroll_pane_cp01_ParamLimits

0xffbd,	// (0x0006e17a) scroll_pane_cp01

0x9c4f,	// (0x00077e0c) find_pinb_pane_g1_ParamLimits

0x9c4f,	// (0x00077e0c) find_pinb_pane_g1

0x9c67,	// (0x00077e24) find_pinb_pane_t1

0x9c79,	// (0x00077e36) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0007d2e1) find_pinb_pane_t

0x9c8e,	// (0x00077e4b) input_focus_pane_cp01_ParamLimits

0x9c8e,	// (0x00077e4b) input_focus_pane_cp01

0xffcf,	// (0x0006e18c) cell_pinb_pane_ParamLimits

0xffcf,	// (0x0006e18c) cell_pinb_pane

0xfff1,	// (0x0006e1ae) cell_pinb_pane_g1_ParamLimits

0xfff1,	// (0x0006e1ae) cell_pinb_pane_g1

0x0006,	// (0x0006e1c3) cell_pinb_pane_g2_ParamLimits

0x0006,	// (0x0006e1c3) cell_pinb_pane_g2

0x9c9a,	// (0x00077e57) cell_pinb_pane_g3_ParamLimits

0x9c9a,	// (0x00077e57) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0007d2e6) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0007d2e6) cell_pinb_pane_g

0x99c4,	// (0x00077b81) grid_highlight_pane_cp01

0x0012,	// (0x0006e1cf) list_pinb_item_pane_ParamLimits

0x0012,	// (0x0006e1cf) list_pinb_item_pane

0x99c4,	// (0x00077b81) list_highlight_pane_cp02

0x0024,	// (0x0006e1e1) list_pinb_item_pane_g1_ParamLimits

0x0024,	// (0x0006e1e1) list_pinb_item_pane_g1

0x0031,	// (0x0006e1ee) list_pinb_item_pane_g2_ParamLimits

0x0031,	// (0x0006e1ee) list_pinb_item_pane_g2

0x003d,	// (0x0006e1fa) list_pinb_item_pane_g3_ParamLimits

0x003d,	// (0x0006e1fa) list_pinb_item_pane_g3

0x004e,	// (0x0006e20b) list_pinb_item_pane_g4_ParamLimits

0x004e,	// (0x0006e20b) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0007d2ed) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0007d2ed) list_pinb_item_pane_g

0x005a,	// (0x0006e217) list_pinb_item_pane_t1_ParamLimits

0x005a,	// (0x0006e217) list_pinb_item_pane_t1

0x008f,	// (0x0006e24c) calc_display_pane

0x00b7,	// (0x0006e274) calc_paper_pane

0x00da,	// (0x0006e297) grid_calc_pane

0x99c4,	// (0x00077b81) bg_list_pane_cp01

0x0108,	// (0x0006e2c5) clock_g1

0x0110,	// (0x0006e2cd) clock_g2

0x0001,

0xf139,	// (0x0007d2f6) clock_g

0x0118,	// (0x0006e2d5) clock_t1_ParamLimits

0x0118,	// (0x0006e2d5) clock_t1

0x012d,	// (0x0006e2ea) clock_t2_ParamLimits

0x012d,	// (0x0006e2ea) clock_t2

0x013f,	// (0x0006e2fc) clock_t3_ParamLimits

0x013f,	// (0x0006e2fc) clock_t3

0x0151,	// (0x0006e30e) clock_t4_ParamLimits

0x0151,	// (0x0006e30e) clock_t4

0x0163,	// (0x0006e320) clock_t5_ParamLimits

0x0163,	// (0x0006e320) clock_t5

0x0178,	// (0x0006e335) clock_t6_ParamLimits

0x0178,	// (0x0006e335) clock_t6

0x018a,	// (0x0006e347) clock_t7_ParamLimits

0x018a,	// (0x0006e347) clock_t7

0x019c,	// (0x0006e359) clock_t8_ParamLimits

0x019c,	// (0x0006e359) clock_t8

0x01b0,	// (0x0006e36d) clock_t9_ParamLimits

0x01b0,	// (0x0006e36d) clock_t9

0x0008,

0xf13e,	// (0x0007d2fb) clock_t_ParamLimits

0xf13e,	// (0x0007d2fb) clock_t

0xa89b,	// (0x00078a58) popup_clock_analogue_window_cp02

0xa89b,	// (0x00078a58) popup_clock_digital_window_cp01

0xa8a3,	// (0x00078a60) listscroll_help_pane

0x99c4,	// (0x00077b81) phob_pre_status_pane

0xa8ad,	// (0x00078a6a) grid_qdial_pane

0x9c1f,	// (0x00077ddc) listscroll_mce_pane

0x9c1f,	// (0x00077ddc) bg_notes_pane

0xa8b7,	// (0x00078a74) list_notes_pane

0x01c6,	// (0x0006e383) scroll_pane_cp06

0xa8c5,	// (0x00078a82) bg_calc_paper_pane

0x9cb8,	// (0x00077e75) list_calc_pane

0xa8d9,	// (0x00078a96) bg_calc_display_pane

0x01da,	// (0x0006e397) calc_display_pane_t1

0x01ec,	// (0x0006e3a9) calc_display_pane_t2

0x9cd2,	// (0x00077e8f) calc_display_pane_t3

0x0002,

0xf151,	// (0x0007d30e) calc_display_pane_t

0x01fe,	// (0x0006e3bb) cell_calc_pane_ParamLimits

0x01fe,	// (0x0006e3bb) cell_calc_pane

0xa8e5,	// (0x00078aa2) bg_calc_paper_pane_g1

0xa8f1,	// (0x00078aae) bg_calc_paper_pane_g2

0xa8fd,	// (0x00078aba) bg_calc_paper_pane_g3

0xa909,	// (0x00078ac6) bg_calc_paper_pane_g4

0xa915,	// (0x00078ad2) bg_calc_paper_pane_g5

0x023b,	// (0x0006e3f8) bg_calc_paper_pane_g6

0x024e,	// (0x0006e40b) bg_calc_paper_pane_g7

0x0261,	// (0x0006e41e) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0007d315) bg_calc_paper_pane_g

0x0272,	// (0x0006e42f) calc_bg_paper_pane_g9

0x0283,	// (0x0006e440) list_calc_item_pane_ParamLimits

0x0283,	// (0x0006e440) list_calc_item_pane

0xa921,	// (0x00078ade) list_calc_item_pane_g1

0x9ce4,	// (0x00077ea1) list_calc_item_pane_t1_ParamLimits

0x9ce4,	// (0x00077ea1) list_calc_item_pane_t1

0x029b,	// (0x0006e458) list_calc_item_pane_t2_ParamLimits

0x029b,	// (0x0006e458) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0007d326) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0007d326) list_calc_item_pane_t

0xa92e,	// (0x00078aeb) cell_calc_pane_g1

0xa938,	// (0x00078af5) grid_highlight_pane_cp02

0xa95a,	// (0x00078b17) bg_calc_display_pane_g1

0x9cf6,	// (0x00077eb3) bg_calc_display_pane_g2

0xa963,	// (0x00078b20) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0007d330) bg_calc_display_pane_g

0x02cd,	// (0x0006e48a) cell_qdial_pane_ParamLimits

0x02cd,	// (0x0006e48a) cell_qdial_pane

0x02e1,	// (0x0006e49e) cell_qdial_pane_g1_ParamLimits

0x02e1,	// (0x0006e49e) cell_qdial_pane_g1

0x02f7,	// (0x0006e4b4) cell_qdial_pane_g2_ParamLimits

0x02f7,	// (0x0006e4b4) cell_qdial_pane_g2

0xa96c,	// (0x00078b29) cell_qdial_pane_g3_ParamLimits

0xa96c,	// (0x00078b29) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0007d337) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0007d337) cell_qdial_pane_g

0x031e,	// (0x0006e4db) cell_qdial_pane_t1_ParamLimits

0x031e,	// (0x0006e4db) cell_qdial_pane_t1

0x0336,	// (0x0006e4f3) cell_qdial_pane_t2_ParamLimits

0x0336,	// (0x0006e4f3) cell_qdial_pane_t2

0x0349,	// (0x0006e506) cell_qdial_pane_t3_ParamLimits

0x0349,	// (0x0006e506) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0007d340) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0007d340) cell_qdial_pane_t

0x99c4,	// (0x00077b81) grid_highlight_pane_cp04

0xa978,	// (0x00078b35) thumbnail_qdial_pane_ParamLimits

0xa978,	// (0x00078b35) thumbnail_qdial_pane

0xa9d4,	// (0x00078b91) list_help_pane

0xa9dd,	// (0x00078b9a) scroll_pane_cp02

0x035c,	// (0x0006e519) help_list_pane_t1_ParamLimits

0x035c,	// (0x0006e519) help_list_pane_t1

0x9d00,	// (0x00077ebd) bg_notes_pane_g2

0x9d08,	// (0x00077ec5) bg_notes_pane_g3

0x9d10,	// (0x00077ecd) notes_bg_pane_g1

0x9d18,	// (0x00077ed5) notes_bg_pane_g4

0x9d20,	// (0x00077edd) notes_bg_pane_g5

0x9d28,	// (0x00077ee5) notes_bg_pane_g6

0x9d30,	// (0x00077eed) notes_bg_pane_g7

0x9d38,	// (0x00077ef5) notes_bg_pane_g8

0x9d40,	// (0x00077efd) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0007d35e) notes_bg_pane_g

0x037a,	// (0x0006e537) list_notes_text_pane_ParamLimits

0x037a,	// (0x0006e537) list_notes_text_pane

0xa9e6,	// (0x00078ba3) list_notes_text_pane_g1

0x038e,	// (0x0006e54b) list_notes_text_pane_t1

0x039c,	// (0x0006e559) listscroll_cale_week_pane

0x03d2,	// (0x0006e58f) bg_cale_heading_pane

0x03fb,	// (0x0006e5b8) bg_cale_pane_cp01

0x041d,	// (0x0006e5da) cale_week_corner_pane

0x043c,	// (0x0006e5f9) cale_week_day_heading_pane

0x046a,	// (0x0006e627) cale_week_scroll_pane_g1

0x048e,	// (0x0006e64b) cale_week_scroll_pane_g2

0x04a6,	// (0x0006e663) cale_week_scroll_pane_g3

0x04be,	// (0x0006e67b) cale_week_scroll_pane_g4

0x04da,	// (0x0006e697) cale_week_scroll_pane_g5

0x04fa,	// (0x0006e6b7) cale_week_scroll_pane_g6

0x051a,	// (0x0006e6d7) cale_week_scroll_pane_g7

0x053e,	// (0x0006e6fb) cale_week_scroll_pane_g8

0x0562,	// (0x0006e71f) cale_week_scroll_pane_g9

0x057f,	// (0x0006e73c) cale_week_scroll_pane_g10

0x059c,	// (0x0006e759) cale_week_scroll_pane_g11

0x05b9,	// (0x0006e776) cale_week_scroll_pane_g12

0x05d6,	// (0x0006e793) cale_week_scroll_pane_g13

0x05f3,	// (0x0006e7b0) cale_week_scroll_pane_g14

0x061c,	// (0x0006e7d9) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0007d36d) cale_week_scroll_pane_g

0x0669,	// (0x0006e826) cale_week_time_pane

0x068d,	// (0x0006e84a) grid_cale_week_pane

0xaa12,	// (0x00078bcf) scroll_pane_cp08

0x06c4,	// (0x0006e881) cell_cale_week_pane_ParamLimits

0x06c4,	// (0x0006e881) cell_cale_week_pane

0x0754,	// (0x0006e911) cale_week_day_heading_pane_t1

0x079e,	// (0x0006e95b) cale_week_day_heading_pane_t2

0x07ed,	// (0x0006e9aa) cale_week_day_heading_pane_t3

0x083c,	// (0x0006e9f9) cale_week_day_heading_pane_t4

0x088b,	// (0x0006ea48) cale_week_day_heading_pane_t5

0x08de,	// (0x0006ea9b) cale_week_day_heading_pane_t6

0x0935,	// (0x0006eaf2) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0007d38e) cale_week_day_heading_pane_t

0xaa34,	// (0x00078bf1) bg_cale_side_pane

0x097f,	// (0x0006eb3c) cale_week_time_pane_t1

0x09b9,	// (0x0006eb76) cale_week_time_pane_t2

0x09f3,	// (0x0006ebb0) cale_week_time_pane_t3

0x0a2d,	// (0x0006ebea) cale_week_time_pane_t4

0x0a67,	// (0x0006ec24) cale_week_time_pane_t5

0x0aa1,	// (0x0006ec5e) cale_week_time_pane_t6

0x0adb,	// (0x0006ec98) cale_week_time_pane_t7

0x0b15,	// (0x0006ecd2) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0007d39d) cale_week_time_pane_t

0x0b55,	// (0x0006ed12) cell_cale_week_pane_g2

0x0b74,	// (0x0006ed31) cell_cale_week_pane_g3_ParamLimits

0x0b74,	// (0x0006ed31) cell_cale_week_pane_g3

0xaa42,	// (0x00078bff) grid_highlight_pane_cp07

0xaa4a,	// (0x00078c07) listscroll_gms_pane

0xaa54,	// (0x00078c11) grid_gms_pane

0xaa5d,	// (0x00078c1a) listscroll_gms_pane_g1

0xaa65,	// (0x00078c22) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0007d3ae) listscroll_gms_pane_g

0x0b8c,	// (0x0006ed49) scroll_pane_cp010

0x0b97,	// (0x0006ed54) cell_gms_pane_ParamLimits

0x0b97,	// (0x0006ed54) cell_gms_pane

0x0bb1,	// (0x0006ed6e) cell_gms_pane_g1

0xaa6d,	// (0x00078c2a) cell_gms_pane_g2

0xaa75,	// (0x00078c32) cell_gms_pane_g3

0xaa7e,	// (0x00078c3b) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0007d3b3) cell_gms_pane_g

0xaa87,	// (0x00078c44) grid_highlight_pane_cp09

0x33d1,	// (0x0007158e) phob_pre_status_pane_g1

0x33d9,	// (0x00071596) phob_pre_status_pane_g2

0x33e1,	// (0x0007159e) phob_pre_status_pane_g3

0x33e9,	// (0x000715a6) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0007d79e) phob_pre_status_pane_g

0x33f9,	// (0x000715b6) phob_pre_status_pane_t1

0x3409,	// (0x000715c6) phob_pre_status_pane_t2

0x3419,	// (0x000715d6) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0007d7a9) phob_pre_status_pane_t

0xaa8f,	// (0x00078c4c) bg_list_pane_cp05

0x0bc1,	// (0x0006ed7e) grid_vorec_pane

0x0bcd,	// (0x0006ed8a) vorec_t1

0x0bdb,	// (0x0006ed98) vorec_t2

0x0be9,	// (0x0006eda6) vorec_t3

0x0bf7,	// (0x0006edb4) vorec_t4

0x9524,	// (0x000776e1) vorec_t5

0x9532,	// (0x000776ef) vorec_t6

0x0004,

0xf1ff,	// (0x0007d3bc) vorec_t

0x9540,	// (0x000776fd) wait_bar_pane_cp01

0x0c13,	// (0x0006edd0) cell_vorec_pane_ParamLimits

0x0c13,	// (0x0006edd0) cell_vorec_pane

0x9d48,	// (0x00077f05) cell_vorec_pane_g1

0x99c4,	// (0x00077b81) grid_highlight_pane_cp05

0x0c3e,	// (0x0006edfb) cams_zoom_pane

0x0c4d,	// (0x0006ee0a) image_vga_pane

0x0c67,	// (0x0006ee24) main_camera_pane_g1

0x0c79,	// (0x0006ee36) main_camera_pane_g2

0x0c89,	// (0x0006ee46) main_camera_pane_g3

0x0c9d,	// (0x0006ee5a) main_camera_pane_g4

0x0cb1,	// (0x0006ee6e) main_camera_pane_g5

0x0cc5,	// (0x0006ee82) main_camera_pane_g6

0x0cd9,	// (0x0006ee96) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0007d3c7) main_camera_pane_g

0x0ced,	// (0x0006eeaa) main_camera_pane_t1

0x0d03,	// (0x0006eec0) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0007d3d8) main_camera_pane_t

0x0d41,	// (0x0006eefe) cams_zoom_pane_cp_ParamLimits

0x0d41,	// (0x0006eefe) cams_zoom_pane_cp

0x0d69,	// (0x0006ef26) image_cif_pane_ParamLimits

0x0d69,	// (0x0006ef26) image_cif_pane

0x0da4,	// (0x0006ef61) image_subqcif_pane

0x0dae,	// (0x0006ef6b) main_video_pane_g1_ParamLimits

0x0dae,	// (0x0006ef6b) main_video_pane_g1

0x0dd2,	// (0x0006ef8f) main_video_pane_g2_ParamLimits

0x0dd2,	// (0x0006ef8f) main_video_pane_g2

0x0e08,	// (0x0006efc5) main_video_pane_g3_ParamLimits

0x0e08,	// (0x0006efc5) main_video_pane_g3

0x0e36,	// (0x0006eff3) main_video_pane_g4_ParamLimits

0x0e36,	// (0x0006eff3) main_video_pane_g4

0x0e64,	// (0x0006f021) main_video_pane_g5_ParamLimits

0x0e64,	// (0x0006f021) main_video_pane_g5

0xaaa3,	// (0x00078c60) main_video_pane_g6_ParamLimits

0xaaa3,	// (0x00078c60) main_video_pane_g6

0x0006,

0xf220,	// (0x0007d3dd) main_video_pane_g_ParamLimits

0xf220,	// (0x0007d3dd) main_video_pane_g

0x0e8d,	// (0x0006f04a) main_video_pane_t1_ParamLimits

0x0e8d,	// (0x0006f04a) main_video_pane_t1

0xaabd,	// (0x00078c7a) cams_zoom_pane_g1

0xaac6,	// (0x00078c83) cams_zoom_pane_g2

0xaacf,	// (0x00078c8c) cams_zoom_pane_g3

0xaad8,	// (0x00078c95) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0007d3ec) cams_zoom_pane_g

0x0eea,	// (0x0006f0a7) grid_cams_pane

0x0f04,	// (0x0006f0c1) linegrid_cams_pane

0x0f16,	// (0x0006f0d3) cell_cams_pane_ParamLimits

0x0f16,	// (0x0006f0d3) cell_cams_pane

0xaae1,	// (0x00078c9e) cams_burst_image_pane

0xaae9,	// (0x00078ca6) cell_cams_pane_g1

0x99c4,	// (0x00077b81) grid_highlight_pane_cp03

0xa92e,	// (0x00078aeb) mp_bg_pane_g1

0x99c4,	// (0x00077b81) bg_list_pane_cp03

0xc744,	// (0x0007a901) bg_mp_pane

0xc74c,	// (0x0007a909) grid_mp_pane

0xc754,	// (0x0007a911) media_player_g1

0xc75e,	// (0x0007a91b) media_player_t1

0xc76c,	// (0x0007a929) media_player_t2

0xc77a,	// (0x0007a937) media_player_t3

0xc788,	// (0x0007a945) media_player_t4

0xc796,	// (0x0007a953) media_player_t5

0xc7a4,	// (0x0007a961) media_player_t6

0xc7b2,	// (0x0007a96f) media_player_t7

0x0006,

0xf5cb,	// (0x0007d788) media_player_t

0xc7c0,	// (0x0007a97d) wait_bar_pane_cp02

0xf5b0,	// (0x0007d76d) main_usb_pane_t

0x33c8,	// (0x00071585) cell_mp_pane

0xa92e,	// (0x00078aeb) cell_mp_pane_g1

0x99c4,	// (0x00077b81) grid_highlight_pane_cp06

0xaaf1,	// (0x00078cae) grid_skin_colour_pane

0xaaf9,	// (0x00078cb6) list_highlight_pane_cp03

0x102b,	// (0x0006f1e8) skin_g1

0xab01,	// (0x00078cbe) skin_t1

0xab10,	// (0x00078ccd) skin_t2

0x0001,

0xf264,	// (0x0007d421) skin_t

0x1033,	// (0x0006f1f0) cell_skin_colour_pane_ParamLimits

0x1033,	// (0x0006f1f0) cell_skin_colour_pane

0xab1e,	// (0x00078cdb) cell_skin_colour_pane_g1

0x10a6,	// (0x0006f263) call_video_g1_ParamLimits

0x10a6,	// (0x0006f263) call_video_g1

0x10c2,	// (0x0006f27f) call_video_g2_ParamLimits

0x10c2,	// (0x0006f27f) call_video_g2

0x0001,

0xf269,	// (0x0007d426) call_video_g_ParamLimits

0xf269,	// (0x0007d426) call_video_g

0x1107,	// (0x0006f2c4) call_video_uplink_pane_cp1_ParamLimits

0x1107,	// (0x0006f2c4) call_video_uplink_pane_cp1

0xab30,	// (0x00078ced) call_video_uplink_pane_cp2

0x11a8,	// (0x0006f365) video_down_crop_pane_ParamLimits

0x11a8,	// (0x0006f365) video_down_crop_pane

0x1291,	// (0x0006f44e) video_down_pane_ParamLimits

0x1291,	// (0x0006f44e) video_down_pane

0xab38,	// (0x00078cf5) video_down_subqcif_pane_ParamLimits

0xab38,	// (0x00078cf5) video_down_subqcif_pane

0xab52,	// (0x00078d0f) video_down_subqcif_pane_cp_ParamLimits

0xab52,	// (0x00078d0f) video_down_subqcif_pane_cp

0xab7a,	// (0x00078d37) im_reading_pane_ParamLimits

0xab7a,	// (0x00078d37) im_reading_pane

0x139a,	// (0x0006f557) im_writing_pane_ParamLimits

0x139a,	// (0x0006f557) im_writing_pane

0x13b6,	// (0x0006f573) im_reading_pane_t1

0xab94,	// (0x00078d51) list_im_pane

0xaba5,	// (0x00078d62) scroll_pane_cp07

0x13f2,	// (0x0006f5af) im_writing_pane_t1_ParamLimits

0x13f2,	// (0x0006f5af) im_writing_pane_t1

0xabbe,	// (0x00078d7b) im_writing_pane_t2_ParamLimits

0xabbe,	// (0x00078d7b) im_writing_pane_t2

0x0001,

0xf273,	// (0x0007d430) im_writing_pane_t_ParamLimits

0xf273,	// (0x0007d430) im_writing_pane_t

0x99c4,	// (0x00077b81) input_focus_pane_cp04

0x99c4,	// (0x00077b81) input_focus_pane_cp05

0x1407,	// (0x0006f5c4) list_im_single_pane_ParamLimits

0x1407,	// (0x0006f5c4) list_im_single_pane

0x141d,	// (0x0006f5da) list_single_im_pane_t1

0x3388,	// (0x00071545) blid_accuracy_pane

0x3390,	// (0x0007154d) blid_compass_pane

0x339a,	// (0x00071557) main_location_t1

0x33aa,	// (0x00071567) main_location_t2

0x33ba,	// (0x00071577) main_location_t3

0x0002,

0xf5da,	// (0x0007d797) main_location_t

0x99c4,	// (0x00077b81) aid_levels_location

0xa92e,	// (0x00078aeb) blid_accuracy_pane_g1

0xa92e,	// (0x00078aeb) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0007d492) blid_accuracy_pane_g

0xac06,	// (0x00078dc3) wml_content_pane

0xac44,	// (0x00078e01) wml_button_pane_ParamLimits

0xac44,	// (0x00078e01) wml_button_pane

0x142c,	// (0x0006f5e9) wml_list_single_large_pane_ParamLimits

0x142c,	// (0x0006f5e9) wml_list_single_large_pane

0x1442,	// (0x0006f5ff) wml_list_single_medium_pane_ParamLimits

0x1442,	// (0x0006f5ff) wml_list_single_medium_pane

0x1459,	// (0x0006f616) wml_list_single_small_pane_ParamLimits

0x1459,	// (0x0006f616) wml_list_single_small_pane

0xac58,	// (0x00078e15) wml_selection_box_pane_ParamLimits

0xac58,	// (0x00078e15) wml_selection_box_pane

0xac6b,	// (0x00078e28) wml_list_single_pane_t1

0xac7a,	// (0x00078e37) wml_list_single_medium_pane_t1

0xac89,	// (0x00078e46) wml_list_single_large_pane_t1

0xac98,	// (0x00078e55) input_focus_pane_cp02_ParamLimits

0xac98,	// (0x00078e55) input_focus_pane_cp02

0xacab,	// (0x00078e68) wml_selection_box_pane_g1

0xacb4,	// (0x00078e71) wml_selection_box_pane_t1_ParamLimits

0xacb4,	// (0x00078e71) wml_selection_box_pane_t1

0x9c1f,	// (0x00077ddc) bg_wml_button_pane_ParamLimits

0x9c1f,	// (0x00077ddc) bg_wml_button_pane

0xaccc,	// (0x00078e89) wml_button_pane_g1

0xacd4,	// (0x00078e91) wml_button_pane_t1

0xaccc,	// (0x00078e89) wml_button_bg_pane_g1

0xace4,	// (0x00078ea1) wml_button_bg_pane_g2

0xacec,	// (0x00078ea9) wml_button_bg_pane_g3

0xacf4,	// (0x00078eb1) wml_button_bg_pane_g4

0xacfc,	// (0x00078eb9) wml_button_bg_pane_g5

0xad04,	// (0x00078ec1) wml_button_bg_pane_g6

0xad0c,	// (0x00078ec9) wml_button_bg_pane_g7

0xad14,	// (0x00078ed1) wml_button_bg_pane_g8

0xad1c,	// (0x00078ed9) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0007d435) wml_button_bg_pane_g

0x1475,	// (0x0006f632) bg_list_pane_cp02

0xad24,	// (0x00078ee1) mce_header_pane_ParamLimits

0xad24,	// (0x00078ee1) mce_header_pane

0xad3a,	// (0x00078ef7) mce_icon_pane

0xad3a,	// (0x00078ef7) mce_image_pane

0xad43,	// (0x00078f00) mce_text_pane_ParamLimits

0xad43,	// (0x00078f00) mce_text_pane

0x147f,	// (0x0006f63c) scroll_pane_cp03

0xac3c,	// (0x00078df9) scroll_pane_cp04

0xad56,	// (0x00078f13) scroll_pane_cp05_ParamLimits

0xad56,	// (0x00078f13) scroll_pane_cp05

0x1489,	// (0x0006f646) mce_header_field_pane_ParamLimits

0x1489,	// (0x0006f646) mce_header_field_pane

0x14a2,	// (0x0006f65f) mce_header_field_pane_2_ParamLimits

0x14a2,	// (0x0006f65f) mce_header_field_pane_2

0x14b8,	// (0x0006f675) mce_header_field_pane_3

0x14c0,	// (0x0006f67d) list_single_mce_message_pane_ParamLimits

0x14c0,	// (0x0006f67d) list_single_mce_message_pane

0x14d9,	// (0x0006f696) list_single_mce_smart_pane_ParamLimits

0x14d9,	// (0x0006f696) list_single_mce_smart_pane

0xad62,	// (0x00078f1f) input_focus_pane_cp03

0xad6b,	// (0x00078f28) list_header_data_pane

0x14fd,	// (0x0006f6ba) mce_header_field_pane_t1

0x150d,	// (0x0006f6ca) list_single_mce_header_pane_ParamLimits

0x150d,	// (0x0006f6ca) list_single_mce_header_pane

0xad73,	// (0x00078f30) list_single_mce_header_pane_t1

0xad82,	// (0x00078f3f) list_single_mce_message_pane_g1

0xad8a,	// (0x00078f47) list_single_mce_message_pane_t1

0x1547,	// (0x0006f704) bg_cale_heading_pane_cp01_ParamLimits

0x1547,	// (0x0006f704) bg_cale_heading_pane_cp01

0xad98,	// (0x00078f55) bg_cale_pane_cp02_ParamLimits

0xad98,	// (0x00078f55) bg_cale_pane_cp02

0x158e,	// (0x0006f74b) cale_month_corner_pane

0x15ad,	// (0x0006f76a) cale_month_day_heading_pane_ParamLimits

0x15ad,	// (0x0006f76a) cale_month_day_heading_pane

0x160c,	// (0x0006f7c9) cale_month_pane_g1_ParamLimits

0x160c,	// (0x0006f7c9) cale_month_pane_g1

0x1648,	// (0x0006f805) cale_month_pane_g2_ParamLimits

0x1648,	// (0x0006f805) cale_month_pane_g2

0x1684,	// (0x0006f841) cale_month_pane_g3_ParamLimits

0x1684,	// (0x0006f841) cale_month_pane_g3

0x16d8,	// (0x0006f895) cale_month_pane_g4_ParamLimits

0x16d8,	// (0x0006f895) cale_month_pane_g4

0x172c,	// (0x0006f8e9) cale_month_pane_g5_ParamLimits

0x172c,	// (0x0006f8e9) cale_month_pane_g5

0x1788,	// (0x0006f945) cale_month_pane_g6_ParamLimits

0x1788,	// (0x0006f945) cale_month_pane_g6

0x17ec,	// (0x0006f9a9) cale_month_pane_g7_ParamLimits

0x17ec,	// (0x0006f9a9) cale_month_pane_g7

0x1858,	// (0x0006fa15) cale_month_pane_g8_ParamLimits

0x1858,	// (0x0006fa15) cale_month_pane_g8

0x18c4,	// (0x0006fa81) cale_month_pane_g9_ParamLimits

0x18c4,	// (0x0006fa81) cale_month_pane_g9

0x1922,	// (0x0006fadf) cale_month_pane_g10_ParamLimits

0x1922,	// (0x0006fadf) cale_month_pane_g10

0x1974,	// (0x0006fb31) cale_month_pane_g11_ParamLimits

0x1974,	// (0x0006fb31) cale_month_pane_g11

0x19c6,	// (0x0006fb83) cale_month_pane_g12_ParamLimits

0x19c6,	// (0x0006fb83) cale_month_pane_g12

0x1a1e,	// (0x0006fbdb) cale_month_pane_g13_ParamLimits

0x1a1e,	// (0x0006fbdb) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0007d448) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0007d448) cale_month_pane_g

0x1a76,	// (0x0006fc33) cale_month_week_pane

0x1a9a,	// (0x0006fc57) grid_cale_month_pane_ParamLimits

0x1a9a,	// (0x0006fc57) grid_cale_month_pane

0x1af0,	// (0x0006fcad) cale_month_day_heading_pane_t1

0x1b76,	// (0x0006fd33) cale_month_day_heading_pane_t2

0x1c07,	// (0x0006fdc4) cale_month_day_heading_pane_t3

0x1c98,	// (0x0006fe55) cale_month_day_heading_pane_t4

0x1d29,	// (0x0006fee6) cale_month_day_heading_pane_t5

0x1dca,	// (0x0006ff87) cale_month_day_heading_pane_t6

0x1e6f,	// (0x0007002c) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0007d463) cale_month_day_heading_pane_t

0xaa34,	// (0x00078bf1) bg_cale_side_pane_cp01

0x1f18,	// (0x000700d5) cale_month_week_pane_t1

0x1f31,	// (0x000700ee) cale_month_week_pane_t2

0x1f4a,	// (0x00070107) cale_month_week_pane_t3

0x1f63,	// (0x00070120) cale_month_week_pane_t4

0x1f7c,	// (0x00070139) cale_month_week_pane_t5

0x1f95,	// (0x00070152) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0007d472) cale_month_week_pane_t

0x1fb4,	// (0x00070171) cell_cale_month_pane_ParamLimits

0x1fb4,	// (0x00070171) cell_cale_month_pane

0x9d76,	// (0x00077f33) cell_cale_month_pane_g1

0x2108,	// (0x000702c5) cell_cale_month_pane_t1_ParamLimits

0x2108,	// (0x000702c5) cell_cale_month_pane_t1

0xaa42,	// (0x00078bff) grid_highlight_pane_cp08

0xa92e,	// (0x00078aeb) main_smil_g1

0x2128,	// (0x000702e5) smil_status_pane

0xadd7,	// (0x00078f94) smil_text_pane

0xc662,	// (0x0007a81f) bg_popup_call3_rect_pane_g8

0xc66a,	// (0x0007a827) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0007d72b) bg_popup_call3_rect_pane_g

0xc8f8,	// (0x0007aab5) smil_status_volume_pane_g1

0x213b,	// (0x000702f8) smil_status_pane_t1

0x9eaa,	// (0x00078067) volume_smil_pane

0xade1,	// (0x00078f9e) list_smil_text_pane

0x2154,	// (0x00070311) scroll_pane_cp011

0x215f,	// (0x0007031c) smil_text_list_pane_t1_ParamLimits

0x215f,	// (0x0007031c) smil_text_list_pane_t1

0x9d82,	// (0x00077f3f) aid_volume_smil_ParamLimits

0x9d82,	// (0x00077f3f) aid_volume_smil

0xa92e,	// (0x00078aeb) smil_volume_pane_g1

0xa92e,	// (0x00078aeb) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0007d492) smil_volume_pane_g

0x039c,	// (0x0006e559) listscroll_cale_day_pane

0xadeb,	// (0x00078fa8) bg_cale_pane

0xae03,	// (0x00078fc0) list_cale_pane

0xae26,	// (0x00078fe3) scroll_pane_cp09

0xae37,	// (0x00078ff4) cale_bg_pane_g1

0xae3f,	// (0x00078ffc) cale_bg_pane_g2

0xae47,	// (0x00079004) cale_bg_pane_g3

0xae4f,	// (0x0007900c) cale_bg_pane_g4

0xae57,	// (0x00079014) cale_bg_pane_g5

0xae5f,	// (0x0007901c) cale_bg_pane_g6

0xae67,	// (0x00079024) cale_bg_pane_g7

0xae6f,	// (0x0007902c) cale_bg_pane_g8

0xae77,	// (0x00079034) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0007d497) cale_bg_pane_g

0x2198,	// (0x00070355) list_cale_time_pane_ParamLimits

0x2198,	// (0x00070355) list_cale_time_pane

0xae87,	// (0x00079044) list_cale_time_pane_g1_ParamLimits

0xae87,	// (0x00079044) list_cale_time_pane_g1

0xae93,	// (0x00079050) list_cale_time_pane_g2_ParamLimits

0xae93,	// (0x00079050) list_cale_time_pane_g2

0x21ac,	// (0x00070369) list_cale_time_pane_g3_ParamLimits

0x21ac,	// (0x00070369) list_cale_time_pane_g3

0x21ba,	// (0x00070377) list_cale_time_pane_g4_ParamLimits

0x21ba,	// (0x00070377) list_cale_time_pane_g4

0x21c8,	// (0x00070385) list_cale_time_pane_g5_ParamLimits

0x21c8,	// (0x00070385) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0007d4aa) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0007d4aa) list_cale_time_pane_g

0xaead,	// (0x0007906a) list_cale_time_pane_t1_ParamLimits

0xaead,	// (0x0007906a) list_cale_time_pane_t1

0xaed5,	// (0x00079092) list_cale_time_pane_t2_ParamLimits

0xaed5,	// (0x00079092) list_cale_time_pane_t2

0x2567,	// (0x00070724) aid_blid_cardinal_pane

0x25a5,	// (0x00070762) compass_pane_t4

0xaefd,	// (0x000790ba) list_cale_time_pane_t4_ParamLimits

0xaefd,	// (0x000790ba) list_cale_time_pane_t4

0x25b3,	// (0x00070770) compass_pane_t5

0x25c1,	// (0x0007077e) compass_pane_t6

0x25cf,	// (0x0007078c) compass_pane_t7

0xb317,	// (0x000794d4) navi_pane_cc_t1

0xb464,	// (0x00079621) aid_phob_thumbnail_center_pane

0x2d53,	// (0x00070f10) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0007d4b7) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0007d4b7) list_cale_time_pane_t

0x961b,	// (0x000777d8) bg_popup_window_pane_cp02_ParamLimits

0x961b,	// (0x000777d8) bg_popup_window_pane_cp02

0xaf25,	// (0x000790e2) heading_pane_cp01_ParamLimits

0xaf25,	// (0x000790e2) heading_pane_cp01

0xaf31,	// (0x000790ee) loc_req_pane_ParamLimits

0xaf31,	// (0x000790ee) loc_req_pane

0xaf41,	// (0x000790fe) loc_type_pane_ParamLimits

0xaf41,	// (0x000790fe) loc_type_pane

0xaf53,	// (0x00079110) loc_type_pane_t1_ParamLimits

0xaf53,	// (0x00079110) loc_type_pane_t1

0xaf65,	// (0x00079122) loc_type_pane_t2_ParamLimits

0xaf65,	// (0x00079122) loc_type_pane_t2

0xaf77,	// (0x00079134) loc_type_pane_t3_ParamLimits

0xaf77,	// (0x00079134) loc_type_pane_t3

0x0002,

0xf301,	// (0x0007d4be) loc_type_pane_t_ParamLimits

0xf301,	// (0x0007d4be) loc_type_pane_t

0xaf89,	// (0x00079146) list_loc_req_pane

0xaf93,	// (0x00079150) scroll_pane_cp012

0x21d6,	// (0x00070393) list_single_loc_request_popup_menu_pane_ParamLimits

0x21d6,	// (0x00070393) list_single_loc_request_popup_menu_pane

0xaf9e,	// (0x0007915b) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf9e,	// (0x0007915b) list_single_loc_request_popup_menu_pane_g1

0xafaa,	// (0x00079167) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafaa,	// (0x00079167) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0007d4c5) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0007d4c5) list_single_loc_request_popup_menu_pane_g

0xafb6,	// (0x00079173) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafb6,	// (0x00079173) list_single_loc_request_popup_menu_pane_t1

0x9c1f,	// (0x00077ddc) bg_popup_window_pane_cp03_ParamLimits

0x9c1f,	// (0x00077ddc) bg_popup_window_pane_cp03

0xafcc,	// (0x00079189) heading_loc_req_pane_ParamLimits

0xafcc,	// (0x00079189) heading_loc_req_pane

0x21e3,	// (0x000703a0) popup_dyc_status_message_window_g1_ParamLimits

0x21e3,	// (0x000703a0) popup_dyc_status_message_window_g1

0x21f7,	// (0x000703b4) popup_dyc_status_message_window_t1_ParamLimits

0x21f7,	// (0x000703b4) popup_dyc_status_message_window_t1

0x220c,	// (0x000703c9) popup_dyc_status_message_window_t2_ParamLimits

0x220c,	// (0x000703c9) popup_dyc_status_message_window_t2

0x2221,	// (0x000703de) popup_dyc_status_message_window_t3_ParamLimits

0x2221,	// (0x000703de) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0007d4ca) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0007d4ca) popup_dyc_status_message_window_t

0x99c4,	// (0x00077b81) bg_heading_pane_cp01

0xafd8,	// (0x00079195) heading_loc_req_pane_g1

0xafe0,	// (0x0007919d) heading_loc_req_pane_g2

0xafe8,	// (0x000791a5) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0007d4d1) heading_loc_req_pane_g

0xaff0,	// (0x000791ad) heading_loc_req_pane_t1

0xb000,	// (0x000791bd) bg_popup_sub_pane_cp01_ParamLimits

0xb000,	// (0x000791bd) bg_popup_sub_pane_cp01

0xb00e,	// (0x000791cb) popup_cale_events_window_g1_ParamLimits

0xb00e,	// (0x000791cb) popup_cale_events_window_g1

0xb02e,	// (0x000791eb) popup_cale_events_window_g2_ParamLimits

0xb02e,	// (0x000791eb) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0007d505) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0007d505) popup_cale_events_window_g

0xb04e,	// (0x0007920b) popup_cale_events_window_t1_ParamLimits

0xb04e,	// (0x0007920b) popup_cale_events_window_t1

0xb060,	// (0x0007921d) popup_cale_events_window_t2_ParamLimits

0xb060,	// (0x0007921d) popup_cale_events_window_t2

0xb09e,	// (0x0007925b) popup_cale_events_window_t3_ParamLimits

0xb09e,	// (0x0007925b) popup_cale_events_window_t3

0xb0d8,	// (0x00079295) popup_cale_events_window_t4_ParamLimits

0xb0d8,	// (0x00079295) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0007d50a) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0007d50a) popup_cale_events_window_t

0x2326,	// (0x000704e3) call_type_pane

0x2336,	// (0x000704f3) popup_call_status_window_g1

0x234a,	// (0x00070507) popup_call_status_window_g2

0x235e,	// (0x0007051b) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0007d513) popup_call_status_window_g

0xb10e,	// (0x000792cb) call_type_pane_g1

0xb117,	// (0x000792d4) call_type_pane_g2

0x0001,

0xf35d,	// (0x0007d51a) call_type_pane_g

0x99c4,	// (0x00077b81) bg_popup_sub_pane_cp02

0xb120,	// (0x000792dd) listscroll_popup_wml_pane

0xb128,	// (0x000792e5) list_wml_pane

0xb132,	// (0x000792ef) scroll_pane_cp013

0xb13d,	// (0x000792fa) list_single_graphic_popup_wml_pane_ParamLimits

0xb13d,	// (0x000792fa) list_single_graphic_popup_wml_pane

0xa92e,	// (0x00078aeb) list_single_graphic_popup_wml_pane_g1

0xb151,	// (0x0007930e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0007d51f) list_single_graphic_popup_wml_pane_g

0xb159,	// (0x00079316) list_single_graphic_popup_wml_pane_t1

0xb16f,	// (0x0007932c) aid_call_pane

0x9c17,	// (0x00077dd4) popup_clock_analogue_window_g1

0x9c17,	// (0x00077dd4) popup_clock_analogue_window_g2

0x9da4,	// (0x00077f61) popup_clock_analogue_window_g3

0x9da4,	// (0x00077f61) popup_clock_analogue_window_g4

0xa92e,	// (0x00078aeb) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0007d524) popup_clock_analogue_window_g

0x9dac,	// (0x00077f69) popup_clock_analogue_window_t1

0x9dba,	// (0x00077f77) clock_digital_number_pane_ParamLimits

0x9dba,	// (0x00077f77) clock_digital_number_pane

0x9dc6,	// (0x00077f83) clock_digital_number_pane_cp02_ParamLimits

0x9dc6,	// (0x00077f83) clock_digital_number_pane_cp02

0x9dd2,	// (0x00077f8f) clock_digital_number_pane_cp03_ParamLimits

0x9dd2,	// (0x00077f8f) clock_digital_number_pane_cp03

0x9dde,	// (0x00077f9b) clock_digital_number_pane_cp04_ParamLimits

0x9dde,	// (0x00077f9b) clock_digital_number_pane_cp04

0x9dea,	// (0x00077fa7) clock_digital_separator_pane_ParamLimits

0x9dea,	// (0x00077fa7) clock_digital_separator_pane

0x9df6,	// (0x00077fb3) popup_clock_digital_window_t1

0xa92e,	// (0x00078aeb) clock_digital_number_pane_g1

0xa92e,	// (0x00078aeb) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0007d492) clock_digital_number_pane_g

0xa92e,	// (0x00078aeb) clock_digital_separator_pane_g1

0xa92e,	// (0x00078aeb) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0007d492) clock_digital_separator_pane_g

0x99c4,	// (0x00077b81) bg_popup_window_pane_cp04

0xb177,	// (0x00079334) heading_pane_cp03

0xb17f,	// (0x0007933c) listscroll_popup_gms_pane

0xb187,	// (0x00079344) grid_large_graphic_popup_pane

0xb191,	// (0x0007934e) listscroll_popup_gms_pane_g1

0xb199,	// (0x00079356) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0007d52f) listscroll_popup_gms_pane_g

0xac3c,	// (0x00078df9) scroll_pane_cp014

0x236e,	// (0x0007052b) cell_large_graphic_popup_pane_ParamLimits

0x236e,	// (0x0007052b) cell_large_graphic_popup_pane

0x2386,	// (0x00070543) cell_large_graphic_popup_pane_g1_ParamLimits

0x2386,	// (0x00070543) cell_large_graphic_popup_pane_g1

0xb1a1,	// (0x0007935e) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1a1,	// (0x0007935e) cell_large_graphic_popup_pane_g2

0xb1ad,	// (0x0007936a) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1ad,	// (0x0007936a) cell_large_graphic_popup_pane_g3

0xb1ba,	// (0x00079377) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1ba,	// (0x00079377) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0007d534) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0007d534) cell_large_graphic_popup_pane_g

0xb1ca,	// (0x00079387) grid_highlight_pane_cp010

0xa92e,	// (0x00078aeb) bg_popup_call_pane_g1

0xb1d4,	// (0x00079391) list_single_graphic_popup_conf_pane_ParamLimits

0xb1d4,	// (0x00079391) list_single_graphic_popup_conf_pane

0xb1e6,	// (0x000793a3) list_highlight_pane_cp01

0xb1ef,	// (0x000793ac) list_single_graphic_popup_conf_pane_g1

0xb1f7,	// (0x000793b4) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0007d53d) list_single_graphic_popup_conf_pane_g

0xb1ff,	// (0x000793bc) list_single_graphic_popup_conf_pane_t1

0xb20d,	// (0x000793ca) linegrid_cams_pane_g1

0x2392,	// (0x0007054f) linegrid_cams_pane_g2

0xaa75,	// (0x00078c32) linegrid_cams_pane_g3

0xb216,	// (0x000793d3) linegrid_cams_pane_g4

0x239b,	// (0x00070558) linegrid_cams_pane_g5

0x23a4,	// (0x00070561) linegrid_cams_pane_g6

0xaa7e,	// (0x00078c3b) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0007d542) linegrid_cams_pane_g

0xb21f,	// (0x000793dc) popup_clock_analogue_window

0xb21f,	// (0x000793dc) popup_clock_digital_window

0x99c4,	// (0x00077b81) popup_phob_thumbnail_window

0xa92e,	// (0x00078aeb) call_video_uplink_pane_g1

0xb228,	// (0x000793e5) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0007d551) call_video_uplink_pane_g

0xb230,	// (0x000793ed) video_uplink_pane

0xb238,	// (0x000793f5) mce_image_pane_g1

0x23af,	// (0x0007056c) mce_image_pane_g2

0x23b9,	// (0x00070576) mce_image_pane_g3

0x23c3,	// (0x00070580) mce_image_pane_g4

0x23cb,	// (0x00070588) mce_image_pane_g5

0x0004,

0xf399,	// (0x0007d556) mce_image_pane_g

0xb242,	// (0x000793ff) control_top_pane_stacon_cp01_ParamLimits

0xb242,	// (0x000793ff) control_top_pane_stacon_cp01

0xb256,	// (0x00079413) uni_indicator_pane_stacon_cp01_ParamLimits

0xb256,	// (0x00079413) uni_indicator_pane_stacon_cp01

0xb267,	// (0x00079424) bg_popup_sub_pane_cp03

0x23d3,	// (0x00070590) chi_dic_find_pane

0x23db,	// (0x00070598) listscroll_chi_dic_pane

0x23e4,	// (0x000705a1) main_pane_chidic_g1

0x23f7,	// (0x000705b4) chi_dic_find_pane_t1

0xb271,	// (0x0007942e) find_chidic_pane

0xb27a,	// (0x00079437) chi_dic_list_pane_ParamLimits

0xb27a,	// (0x00079437) chi_dic_list_pane

0xb28b,	// (0x00079448) scroll_pane_cp020

0x2405,	// (0x000705c2) find_chidic_pane_t1

0x99c4,	// (0x00077b81) input_focus_pane_cp06

0x0012,	// (0x0006e1cf) list_chi_dic_pane_ParamLimits

0x0012,	// (0x0006e1cf) list_chi_dic_pane

0x2414,	// (0x000705d1) list_chi_dic_pane_t1_ParamLimits

0x2414,	// (0x000705d1) list_chi_dic_pane_t1

0x99c4,	// (0x00077b81) list_highlight_pane_cp020

0xb293,	// (0x00079450) bg_cale_heading_pane_g1

0x2427,	// (0x000705e4) bg_cale_heading_pane_g2

0x242f,	// (0x000705ec) bg_cale_heading_pane_g3

0x2437,	// (0x000705f4) bg_cale_heading_pane_g4

0x2441,	// (0x000705fe) bg_cale_heading_pane_g5

0x244b,	// (0x00070608) bg_cale_heading_pane_g6

0x2453,	// (0x00070610) bg_cale_heading_pane_g7

0x245b,	// (0x00070618) bg_cale_heading_pane_g8

0x2465,	// (0x00070622) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0007d561) bg_cale_heading_pane_g

0xb293,	// (0x00079450) bg_cale_side_pane_g1

0x246f,	// (0x0007062c) bg_cale_side_pane_g2

0x2479,	// (0x00070636) bg_cale_side_pane_g3

0x2483,	// (0x00070640) bg_cale_side_pane_g4

0x248d,	// (0x0007064a) bg_cale_side_pane_g5

0x2497,	// (0x00070654) bg_cale_side_pane_g6

0x24a1,	// (0x0007065e) bg_cale_side_pane_g7

0x24ab,	// (0x00070668) bg_cale_side_pane_g8

0x24b3,	// (0x00070670) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0007d574) bg_cale_side_pane_g

0x24bb,	// (0x00070678) popup_call_status_window_ParamLimits

0x24bb,	// (0x00070678) popup_call_status_window

0xb29b,	// (0x00079458) stacon_top_pane

0xb2a3,	// (0x00079460) status_pane_ParamLimits

0xb2a3,	// (0x00079460) status_pane

0xb2b8,	// (0x00079475) status_small_pane

0xb2c0,	// (0x0007947d) control_pane

0x99c4,	// (0x00077b81) stacon_bottom_pane

0xb2c8,	// (0x00079485) list_single_mce_smart_pane_t1_ParamLimits

0xb2c8,	// (0x00079485) list_single_mce_smart_pane_t1

0xb2db,	// (0x00079498) list_single_mce_smart_pane_t2_ParamLimits

0xb2db,	// (0x00079498) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0007d587) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0007d587) list_single_mce_smart_pane_t

0x2508,	// (0x000706c5) compass_pane

0x2513,	// (0x000706d0) main_location2_pane_t1

0x2527,	// (0x000706e4) main_location2_pane_t2

0x253d,	// (0x000706fa) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0007d58c) main_location2_pane_t

0xb2fa,	// (0x000794b7) compass_pane_g1_ParamLimits

0xb2fa,	// (0x000794b7) compass_pane_g1

0x2587,	// (0x00070744) compass_pane_t1

0x2596,	// (0x00070753) compass_pane_t2

0x0005,

0xf3d8,	// (0x0007d595) compass_pane_t

0x25dd,	// (0x0007079a) text_secondary_cp61

0xb30e,	// (0x000794cb) navi_pane_cams_g5

0xb331,	// (0x000794ee) navi_pane_im_t1

0xb33f,	// (0x000794fc) navi_pane_mp_g1_ParamLimits

0xb33f,	// (0x000794fc) navi_pane_mp_g1

0xb353,	// (0x00079510) navi_pane_mp_g2_ParamLimits

0xb353,	// (0x00079510) navi_pane_mp_g2

0xb35f,	// (0x0007951c) navi_pane_mp_g3_ParamLimits

0xb35f,	// (0x0007951c) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0007d5a9) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0007d5a9) navi_pane_mp_g

0xb36b,	// (0x00079528) navi_pane_mp_t1

0xb379,	// (0x00079536) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0007d5b0) navi_pane_mp_t

0xb3b5,	// (0x00079572) navi_pane_vt_g1

0xb36b,	// (0x00079528) navi_pane_vt_t1

0xb3bd,	// (0x0007957a) navi_slider_pane

0xaa8f,	// (0x00078c4c) zooming_pane

0xb3c5,	// (0x00079582) navi_slider_pane_g1

0x9e13,	// (0x00077fd0) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0007d5b7) navi_slider_pane_g

0xb3e9,	// (0x000795a6) aid_levels_zoom

0xb3f1,	// (0x000795ae) zooming_pane_g1

0xb3f9,	// (0x000795b6) zooming_pane_g2

0xb3f9,	// (0x000795b6) zooming_pane_g3

0x0002,

0xf409,	// (0x0007d5c6) zooming_pane_g

0xb401,	// (0x000795be) level_10_zoom

0xb40a,	// (0x000795c7) level_11_zoom

0xb413,	// (0x000795d0) level_1_zoom

0xb41c,	// (0x000795d9) level_2_zoom

0xb425,	// (0x000795e2) level_3_zoom

0xb42e,	// (0x000795eb) level_4_zoom

0xb437,	// (0x000795f4) level_5_zoom

0xb440,	// (0x000795fd) level_6_zoom

0xb449,	// (0x00079606) level_7_zoom

0xb452,	// (0x0007960f) level_8_zoom

0xb45b,	// (0x00079618) level_9_zoom

0xb46c,	// (0x00079629) popup_phob_thumbnail_window_g1

0xb474,	// (0x00079631) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0007d5cd) popup_phob_thumbnail_window_g

0xc7c8,	// (0x0007a985) level_1_location

0xc7d0,	// (0x0007a98d) level_2_location

0xc7d8,	// (0x0007a995) level_3_location

0xc7e0,	// (0x0007a99d) level_4_location

0xaa8f,	// (0x00078c4c) level_5_location

0x2726,	// (0x000708e3) mce_icon_pane_g1

0x2730,	// (0x000708ed) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0007d5d2) mce_icon_pane_g

0x2738,	// (0x000708f5) main_mup_pane_g1_ParamLimits

0x2738,	// (0x000708f5) main_mup_pane_g1

0x274e,	// (0x0007090b) main_mup_pane_g2_ParamLimits

0x274e,	// (0x0007090b) main_mup_pane_g2

0x2766,	// (0x00070923) main_mup_pane_g3_ParamLimits

0x2766,	// (0x00070923) main_mup_pane_g3

0x277e,	// (0x0007093b) main_mup_pane_g4_ParamLimits

0x277e,	// (0x0007093b) main_mup_pane_g4

0x2796,	// (0x00070953) main_mup_pane_g5_ParamLimits

0x2796,	// (0x00070953) main_mup_pane_g5

0x27b2,	// (0x0007096f) main_mup_pane_g6_ParamLimits

0x27b2,	// (0x0007096f) main_mup_pane_g6

0x27cc,	// (0x00070989) main_mup_pane_g7_ParamLimits

0x27cc,	// (0x00070989) main_mup_pane_g7

0x27ea,	// (0x000709a7) main_mup_pane_g8_ParamLimits

0x27ea,	// (0x000709a7) main_mup_pane_g8

0x2808,	// (0x000709c5) main_mup_pane_g9_ParamLimits

0x2808,	// (0x000709c5) main_mup_pane_g9

0x2824,	// (0x000709e1) main_mup_pane_g10_ParamLimits

0x2824,	// (0x000709e1) main_mup_pane_g10

0x2842,	// (0x000709ff) main_mup_pane_g11_ParamLimits

0x2842,	// (0x000709ff) main_mup_pane_g11

0x285c,	// (0x00070a19) main_mup_pane_g12_ParamLimits

0x285c,	// (0x00070a19) main_mup_pane_g12

0x2872,	// (0x00070a2f) main_mup_pane_g13_ParamLimits

0x2872,	// (0x00070a2f) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0007d5d7) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0007d5d7) main_mup_pane_g

0x2886,	// (0x00070a43) main_mup_pane_t1_ParamLimits

0x2886,	// (0x00070a43) main_mup_pane_t1

0x28a2,	// (0x00070a5f) main_mup_pane_t2_ParamLimits

0x28a2,	// (0x00070a5f) main_mup_pane_t2

0x28ba,	// (0x00070a77) main_mup_pane_t3_ParamLimits

0x28ba,	// (0x00070a77) main_mup_pane_t3

0x28d2,	// (0x00070a8f) main_mup_pane_t4_ParamLimits

0x28d2,	// (0x00070a8f) main_mup_pane_t4

0x28f0,	// (0x00070aad) main_mup_pane_t5_ParamLimits

0x28f0,	// (0x00070aad) main_mup_pane_t5

0x2905,	// (0x00070ac2) main_mup_pane_t6_ParamLimits

0x2905,	// (0x00070ac2) main_mup_pane_t6

0x0005,

0xf435,	// (0x0007d5f2) main_mup_pane_t_ParamLimits

0xf435,	// (0x0007d5f2) main_mup_pane_t

0x2917,	// (0x00070ad4) mup_progress_pane_ParamLimits

0x2917,	// (0x00070ad4) mup_progress_pane

0x2923,	// (0x00070ae0) mup_visualizer_pane_ParamLimits

0x2923,	// (0x00070ae0) mup_visualizer_pane

0x2957,	// (0x00070b14) mup_volume_pane_ParamLimits

0x2957,	// (0x00070b14) mup_volume_pane

0xb47c,	// (0x00079639) mup_visualizer_pane_g1_ParamLimits

0xb47c,	// (0x00079639) mup_visualizer_pane_g1

0xb47c,	// (0x00079639) mup_visualizer_pane_g2_ParamLimits

0xb47c,	// (0x00079639) mup_visualizer_pane_g2

0xb2fa,	// (0x000794b7) mup_visualizer_pane_g3_ParamLimits

0xb2fa,	// (0x000794b7) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0007d5ff) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0007d5ff) mup_visualizer_pane_g

0xa92e,	// (0x00078aeb) mup_volume_pane_g1

0xb492,	// (0x0007964f) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0007d606) mup_volume_pane_g

0xa92e,	// (0x00078aeb) mup_progress_pane_g1

0xb49b,	// (0x00079658) mup_progress_pane_g2

0xb4a4,	// (0x00079661) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0007d60b) mup_progress_pane_g

0x99c4,	// (0x00077b81) bg_popup_window_pane_cp05

0xb4ad,	// (0x0007966a) heading_pane_cp02_ParamLimits

0xb4ad,	// (0x0007966a) heading_pane_cp02

0xb4c9,	// (0x00079686) list_popup_blid_pane

0xb4d1,	// (0x0007968e) list_blid_sat_info_pane_ParamLimits

0xb4d1,	// (0x0007968e) list_blid_sat_info_pane

0xb4e4,	// (0x000796a1) list_blid_sat_info_pane_g1

0xb4ec,	// (0x000796a9) list_blid_sat_info_pane_t1

0x2a81,	// (0x00070c3e) mup_equalizer_pane_ParamLimits

0x2a81,	// (0x00070c3e) mup_equalizer_pane

0x2aa2,	// (0x00070c5f) mup_equalizer_pane_cp1_ParamLimits

0x2aa2,	// (0x00070c5f) mup_equalizer_pane_cp1

0x2ac3,	// (0x00070c80) mup_equalizer_pane_cp2_ParamLimits

0x2ac3,	// (0x00070c80) mup_equalizer_pane_cp2

0x2ae8,	// (0x00070ca5) mup_equalizer_pane_cp3_ParamLimits

0x2ae8,	// (0x00070ca5) mup_equalizer_pane_cp3

0x2b11,	// (0x00070cce) mup_equalizer_pane_cp4_ParamLimits

0x2b11,	// (0x00070cce) mup_equalizer_pane_cp4

0x2b3a,	// (0x00070cf7) mup_equalizer_pane_cp5

0x2b52,	// (0x00070d0f) mup_equalizer_pane_cp6

0x2b6a,	// (0x00070d27) mup_equalizer_pane_cp7

0xc6e2,	// (0x0007a89f) bg_popup_call_poc_act_pane_g9

0xc6ea,	// (0x0007a8a7) bg_popup_call_poc_act_pane_g10

0xc6f2,	// (0x0007a8af) bg_popup_call_poc_act_pane_g11

0x000a,

0x9c1f,	// (0x00077ddc) mup_scale_pane

0xa92e,	// (0x00078aeb) mup_scale_pane_g1

0xb4fa,	// (0x000796b7) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0007d627) mup_scale_pane_g

0xb51e,	// (0x000796db) msg_data_pane

0xb526,	// (0x000796e3) scroll_pane_cp017

0x2b94,	// (0x00070d51) bg_list_pane_cp04_ParamLimits

0x2b94,	// (0x00070d51) bg_list_pane_cp04

0xb52e,	// (0x000796eb) msg_data_pane_g1

0x2bbc,	// (0x00070d79) msg_data_pane_g2

0x2bc6,	// (0x00070d83) msg_data_pane_g3

0x2bd0,	// (0x00070d8d) msg_data_pane_g4

0x2bd8,	// (0x00070d95) msg_data_pane_g5

0x2be0,	// (0x00070d9d) msg_data_pane_g6

0x2be8,	// (0x00070da5) msg_data_pane_g7

0x0006,

0xf479,	// (0x0007d636) msg_data_pane_g

0x2bf0,	// (0x00070dad) msg_text_pane_ParamLimits

0x2bf0,	// (0x00070dad) msg_text_pane

0x2c18,	// (0x00070dd5) qrid_highlight_pane_cp011_ParamLimits

0x2c18,	// (0x00070dd5) qrid_highlight_pane_cp011

0x99c4,	// (0x00077b81) msg_body_pane

0x99c4,	// (0x00077b81) msg_header_pane

0xb53f,	// (0x000796fc) input_focus_pane_cp07

0xb554,	// (0x00079711) msg_header_pane_t1_ParamLimits

0xb554,	// (0x00079711) msg_header_pane_t1

0x9e25,	// (0x00077fe2) msg_header_pane_t2_ParamLimits

0x9e25,	// (0x00077fe2) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0007d64a) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0007d64a) msg_header_pane_t

0xb566,	// (0x00079723) msg_body_pane_g1

0x2c3c,	// (0x00070df9) msg_body_pane_t1_ParamLimits

0x2c3c,	// (0x00070df9) msg_body_pane_t1

0x9e37,	// (0x00077ff4) msg_body_pane_t2_ParamLimits

0x9e37,	// (0x00077ff4) msg_body_pane_t2

0x9e49,	// (0x00078006) msg_body_pane_t3_ParamLimits

0x9e49,	// (0x00078006) msg_body_pane_t3

0x0002,

0xf492,	// (0x0007d64f) msg_body_pane_t_ParamLimits

0xf492,	// (0x0007d64f) msg_body_pane_t

0x2ca7,	// (0x00070e64) main_viewer_pane_g1_ParamLimits

0x2ca7,	// (0x00070e64) main_viewer_pane_g1

0x2cb5,	// (0x00070e72) main_viewer_pane_g2_ParamLimits

0x2cb5,	// (0x00070e72) main_viewer_pane_g2

0x2cc3,	// (0x00070e80) main_viewer_pane_g3_ParamLimits

0x2cc3,	// (0x00070e80) main_viewer_pane_g3

0x2cd2,	// (0x00070e8f) main_viewer_pane_g4_ParamLimits

0x2cd2,	// (0x00070e8f) main_viewer_pane_g4

0x9e73,	// (0x00078030) main_viewer_pane_g5_ParamLimits

0x9e73,	// (0x00078030) main_viewer_pane_g5

0x9e73,	// (0x00078030) main_viewer_pane_g7_ParamLimits

0x9e73,	// (0x00078030) main_viewer_pane_g7

0x9e85,	// (0x00078042) main_viewer_pane_g8_ParamLimits

0x9e85,	// (0x00078042) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0007d65f) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0007d65f) main_viewer_pane_g

0xb56e,	// (0x0007972b) viewer_content_pane_ParamLimits

0xb56e,	// (0x0007972b) viewer_content_pane

0x2d10,	// (0x00070ecd) main_postcard_pane_g1_ParamLimits

0x2d10,	// (0x00070ecd) main_postcard_pane_g1

0x2d26,	// (0x00070ee3) main_postcard_pane_g2_ParamLimits

0x2d26,	// (0x00070ee3) main_postcard_pane_g2

0x2d3c,	// (0x00070ef9) main_postcard_pane_g3_ParamLimits

0x2d3c,	// (0x00070ef9) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0007d670) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0007d670) main_postcard_pane_g

0x2d53,	// (0x00070f10) main_postcard_pane_g4

0xc90b,	// (0x0007aac8) smil_status_volume_pane_g2

0x2d96,	// (0x00070f53) postcard_pane_ParamLimits

0x2d96,	// (0x00070f53) postcard_pane

0xb57c,	// (0x00079739) postcard_pane_g1_ParamLimits

0xb57c,	// (0x00079739) postcard_pane_g1

0x2de6,	// (0x00070fa3) postcard_pane_g2_ParamLimits

0x2de6,	// (0x00070fa3) postcard_pane_g2

0x2df2,	// (0x00070faf) postcard_pane_g3_ParamLimits

0x2df2,	// (0x00070faf) postcard_pane_g3

0xb58a,	// (0x00079747) postcard_pane_g4_ParamLimits

0xb58a,	// (0x00079747) postcard_pane_g4

0x2dfe,	// (0x00070fbb) postcard_pane_g5_ParamLimits

0x2dfe,	// (0x00070fbb) postcard_pane_g5

0x2e13,	// (0x00070fd0) postcard_pane_g6_ParamLimits

0x2e13,	// (0x00070fd0) postcard_pane_g6

0xb57c,	// (0x00079739) postcard_pane_g7_ParamLimits

0xb57c,	// (0x00079739) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0007d67d) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0007d67d) postcard_pane_g

0x2e2b,	// (0x00070fe8) main_mp2_pane_g1_ParamLimits

0x2e2b,	// (0x00070fe8) main_mp2_pane_g1

0x2e39,	// (0x00070ff6) main_mp2_pane_g2_ParamLimits

0x2e39,	// (0x00070ff6) main_mp2_pane_g2

0x2e45,	// (0x00071002) main_mp2_pane_g3_ParamLimits

0x2e45,	// (0x00071002) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0007d68c) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0007d68c) main_mp2_pane_g

0x2e51,	// (0x0007100e) main_mp2_pane_t1_ParamLimits

0x2e51,	// (0x0007100e) main_mp2_pane_t1

0x2e68,	// (0x00071025) main_mp2_pane_t2_ParamLimits

0x2e68,	// (0x00071025) main_mp2_pane_t2

0x2e7a,	// (0x00071037) main_mp2_pane_t3_ParamLimits

0x2e7a,	// (0x00071037) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0007d693) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0007d693) main_mp2_pane_t

0xb598,	// (0x00079755) pec_content_pane_ParamLimits

0xb598,	// (0x00079755) pec_content_pane

0xac3c,	// (0x00078df9) scroll_pane_cp015

0xb5aa,	// (0x00079767) pec_attribute_pane_ParamLimits

0xb5aa,	// (0x00079767) pec_attribute_pane

0x2e8c,	// (0x00071049) pec_content_pane_g1_ParamLimits

0x2e8c,	// (0x00071049) pec_content_pane_g1

0xb5ba,	// (0x00079777) pec_content_pane_t1_ParamLimits

0xb5ba,	// (0x00079777) pec_content_pane_t1

0xb5cc,	// (0x00079789) pec_content_pane_t2_ParamLimits

0xb5cc,	// (0x00079789) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0007d69a) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0007d69a) pec_content_pane_t

0x2e98,	// (0x00071055) list_single_graphic_pane_cp01_ParamLimits

0x2e98,	// (0x00071055) list_single_graphic_pane_cp01

0x9c1f,	// (0x00077ddc) bg_popup_sub_pane_cp04

0xb5de,	// (0x0007979b) popup_mup_playback_window_g1

0xb5ea,	// (0x000797a7) popup_mup_playback_window_t1

0xb5ff,	// (0x000797bc) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0007d69f) popup_mup_playback_window_t

0xb636,	// (0x000797f3) main_image_pane_g1_ParamLimits

0xb636,	// (0x000797f3) main_image_pane_g1

0xb679,	// (0x00079836) scroll_pane_cp018_ParamLimits

0xb679,	// (0x00079836) scroll_pane_cp018

0xb691,	// (0x0007984e) scroll_pane_cp016_ParamLimits

0xb691,	// (0x0007984e) scroll_pane_cp016

0x2f67,	// (0x00071124) smil2_image_pane_ParamLimits

0x2f67,	// (0x00071124) smil2_image_pane

0x2f9d,	// (0x0007115a) smil2_root_pane_ParamLimits

0x2f9d,	// (0x0007115a) smil2_root_pane

0x2fd5,	// (0x00071192) smil2_text_pane_ParamLimits

0x2fd5,	// (0x00071192) smil2_text_pane

0x99c4,	// (0x00077b81) bg_list_pane_cp06

0xb6cd,	// (0x0007988a) grid_radio_pane

0x99c4,	// (0x00077b81) bg_popup_window_pane_cp06

0xb6d7,	// (0x00079894) main_fmradio_pane_t1

0xb177,	// (0x00079334) heading_pane_cp04

0xb6e5,	// (0x000798a2) main_fmradio_pane_t2

0xc6fa,	// (0x0007a8b7) popup_cale_lunar_info_window_g1

0xb6f3,	// (0x000798b0) main_fmradio_pane_t3

0xc702,	// (0x0007a8bf) popup_cale_lunar_info_window_g2

0xb703,	// (0x000798c0) main_fmradio_pane_t4

0x0001,

0xb711,	// (0x000798ce) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0007d77a) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0007d6b4) main_fmradio_pane_t

0xb71f,	// (0x000798dc) wait_bar_pane_cp03

0xb727,	// (0x000798e4) cell_fmradio_pane_ParamLimits

0xb727,	// (0x000798e4) cell_fmradio_pane

0xb57c,	// (0x00079739) cell_fmradio_pane_g1_ParamLimits

0xb57c,	// (0x00079739) cell_fmradio_pane_g1

0x99c4,	// (0x00077b81) grid_highlight_pane_cp011

0xb73c,	// (0x000798f9) poc_content_pane_ParamLimits

0xb73c,	// (0x000798f9) poc_content_pane

0xb74e,	// (0x0007990b) scroll_pane_cp019

0x3065,	// (0x00071222) popup_call_poc_act_window_ParamLimits

0x3065,	// (0x00071222) popup_call_poc_act_window

0x3089,	// (0x00071246) popup_call_poc_inact_window_ParamLimits

0x3089,	// (0x00071246) popup_call_poc_inact_window

0xf594,	// (0x0007d751) bg_popup_call_poc_act_pane_g

0xc672,	// (0x0007a82f) bg_popup_call_poc_inact_pane_g1

0xc67a,	// (0x0007a837) bg_popup_call_poc_inact_pane_g2

0xb756,	// (0x00079913) popup_call_poc_act_window_g2

0xc682,	// (0x0007a83f) bg_popup_call_poc_inact_pane_g3

0xc68a,	// (0x0007a847) bg_popup_call_poc_inact_pane_g4

0xc692,	// (0x0007a84f) bg_popup_call_poc_inact_pane_g5

0xb75e,	// (0x0007991b) popup_call_poc_act_window_t1_ParamLimits

0xb75e,	// (0x0007991b) popup_call_poc_act_window_t1

0xb786,	// (0x00079943) popup_call_poc_act_window_t2_ParamLimits

0xb786,	// (0x00079943) popup_call_poc_act_window_t2

0xb7ae,	// (0x0007996b) popup_call_poc_act_window_t3_ParamLimits

0xb7ae,	// (0x0007996b) popup_call_poc_act_window_t3

0xb7d6,	// (0x00079993) popup_call_poc_act_window_t4_ParamLimits

0xb7d6,	// (0x00079993) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0007d6bf) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0007d6bf) popup_call_poc_act_window_t

0xc69a,	// (0x0007a857) bg_popup_call_poc_inact_pane_g6

0xc6a2,	// (0x0007a85f) bg_popup_call_poc_inact_pane_g7

0xc6aa,	// (0x0007a867) bg_popup_call_poc_inact_pane_g8

0xb7e8,	// (0x000799a5) popup_call_poc_inact_window_g2

0xc6b2,	// (0x0007a86f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0007d73e) bg_popup_call_poc_inact_pane_g

0xb7f0,	// (0x000799ad) popup_call_poc_inact_window_t1_ParamLimits

0xb7f0,	// (0x000799ad) popup_call_poc_inact_window_t1

0xb805,	// (0x000799c2) popup_call_poc_inact_window_t2_ParamLimits

0xb805,	// (0x000799c2) popup_call_poc_inact_window_t2

0xb81a,	// (0x000799d7) popup_call_poc_inact_window_t3_ParamLimits

0xb81a,	// (0x000799d7) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0007d6c8) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0007d6c8) popup_call_poc_inact_window_t

0xc87e,	// (0x0007aa3b) context_pane_ParamLimits

0x3931,	// (0x00071aee) signal_pane_ParamLimits

0xaa8f,	// (0x00078c4c) main_call2_pane

0xc86c,	// (0x0007aa29) popup_phob_thumbnail2_window_ParamLimits

0xc86c,	// (0x0007aa29) popup_phob_thumbnail2_window

0x9e5b,	// (0x00078018) aid_hotspot_pointer_arrow_pane

0x9e63,	// (0x00078020) aid_hotspot_pointer_hand_pane

0x33f1,	// (0x000715ae) phob_pre_status_pane_g5

0x0c3e,	// (0x0006edfb) cams_zoom_pane_ParamLimits

0x0c4d,	// (0x0006ee0a) image_vga_pane_ParamLimits

0x0c67,	// (0x0006ee24) main_camera_pane_g1_ParamLimits

0x0c79,	// (0x0006ee36) main_camera_pane_g2_ParamLimits

0x0c89,	// (0x0006ee46) main_camera_pane_g3_ParamLimits

0x0c9d,	// (0x0006ee5a) main_camera_pane_g4_ParamLimits

0x0cb1,	// (0x0006ee6e) main_camera_pane_g5_ParamLimits

0x0cc5,	// (0x0006ee82) main_camera_pane_g6_ParamLimits

0x0cd9,	// (0x0006ee96) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0007d3c7) main_camera_pane_g_ParamLimits

0x0ced,	// (0x0006eeaa) main_camera_pane_t1_ParamLimits

0x0d03,	// (0x0006eec0) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0007d3d8) main_camera_pane_t_ParamLimits

0x9c1f,	// (0x00077ddc) bg_popup_preview_window_pane_cp01_ParamLimits

0x9c1f,	// (0x00077ddc) bg_popup_preview_window_pane_cp01

0xb82f,	// (0x000799ec) popup_phob_thumbnail2_window_g1_ParamLimits

0xb82f,	// (0x000799ec) popup_phob_thumbnail2_window_g1

0x99c4,	// (0x00077b81) call2_cli_visual_pane

0x30bd,	// (0x0007127a) popup_call2_audio_conf_window_ParamLimits

0x30bd,	// (0x0007127a) popup_call2_audio_conf_window

0x30e5,	// (0x000712a2) popup_call2_audio_first_window_ParamLimits

0x30e5,	// (0x000712a2) popup_call2_audio_first_window

0x317b,	// (0x00071338) popup_call2_audio_in_window_ParamLimits

0x317b,	// (0x00071338) popup_call2_audio_in_window

0x31c7,	// (0x00071384) popup_call2_audio_out_window_ParamLimits

0x31c7,	// (0x00071384) popup_call2_audio_out_window

0x3239,	// (0x000713f6) popup_call2_audio_second_window_ParamLimits

0x3239,	// (0x000713f6) popup_call2_audio_second_window

0x329f,	// (0x0007145c) popup_call2_audio_wait_window_ParamLimits

0x329f,	// (0x0007145c) popup_call2_audio_wait_window

0x99c4,	// (0x00077b81) bg_popup_call2_act_pane_cp03

0x9c01,	// (0x00077dbe) list_conf_pane_cp

0xb83b,	// (0x000799f8) popup_call2_audio_conf_window_t1

0xb849,	// (0x00079a06) list_single_graphic_popup_conf2_pane_ParamLimits

0xb849,	// (0x00079a06) list_single_graphic_popup_conf2_pane

0xb1e6,	// (0x000793a3) list_highlight_pane_cp04

0xb85c,	// (0x00079a19) list_single_graphic_popup_conf2_pane_g1

0xb1f7,	// (0x000793b4) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0007d6cf) list_single_graphic_popup_conf2_pane_g

0xb866,	// (0x00079a23) list_single_graphic_popup_conf2_pane_t1

0xb874,	// (0x00079a31) bg_popup_call2_act_pane_cp01_ParamLimits

0xb874,	// (0x00079a31) bg_popup_call2_act_pane_cp01

0xb8fe,	// (0x00079abb) call_type_pane_cp05_ParamLimits

0xb8fe,	// (0x00079abb) call_type_pane_cp05

0xb952,	// (0x00079b0f) popup_call2_audio_second_window_g1_ParamLimits

0xb952,	// (0x00079b0f) popup_call2_audio_second_window_g1

0xb9a6,	// (0x00079b63) popup_call2_audio_second_window_g2_ParamLimits

0xb9a6,	// (0x00079b63) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0007d6d4) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0007d6d4) popup_call2_audio_second_window_g

0xba0b,	// (0x00079bc8) popup_call2_audio_second_window_t1_ParamLimits

0xba0b,	// (0x00079bc8) popup_call2_audio_second_window_t1

0xbac6,	// (0x00079c83) popup_call2_audio_second_window_t2_ParamLimits

0xbac6,	// (0x00079c83) popup_call2_audio_second_window_t2

0xbb19,	// (0x00079cd6) popup_call2_audio_second_window_t3_ParamLimits

0xbb19,	// (0x00079cd6) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0007d6db) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0007d6db) popup_call2_audio_second_window_t

0x99c4,	// (0x00077b81) bg_popup_call2_in_pane_cp02

0x99ce,	// (0x00077b8b) call_type_pane_cp04

0x99d6,	// (0x00077b93) popup_call2_audio_wait_window_g1

0x99de,	// (0x00077b9b) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0007d2b6) popup_call2_audio_wait_window_g

0x99e6,	// (0x00077ba3) popup_call2_audio_wait_window_t3

0xbc45,	// (0x00079e02) bg_popup_call2_act_pane_ParamLimits

0xbc45,	// (0x00079e02) bg_popup_call2_act_pane

0xbd05,	// (0x00079ec2) call_type_pane_cp03_ParamLimits

0xbd05,	// (0x00079ec2) call_type_pane_cp03

0xbd69,	// (0x00079f26) popup_call2_audio_first_window_g1_ParamLimits

0xbd69,	// (0x00079f26) popup_call2_audio_first_window_g1

0xbdd9,	// (0x00079f96) popup_call2_audio_first_window_g2_ParamLimits

0xbdd9,	// (0x00079f96) popup_call2_audio_first_window_g2

0xb47c,	// (0x00079639) popup_call2_audio_first_window_g3_ParamLimits

0xb47c,	// (0x00079639) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0007d6e4) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0007d6e4) popup_call2_audio_first_window_g

0xbeb7,	// (0x0007a074) popup_call2_audio_first_window_t1_ParamLimits

0xbeb7,	// (0x0007a074) popup_call2_audio_first_window_t1

0xbfba,	// (0x0007a177) popup_call2_audio_first_window_t4_ParamLimits

0xbfba,	// (0x0007a177) popup_call2_audio_first_window_t4

0xc09d,	// (0x0007a25a) popup_call2_audio_first_window_t5_ParamLimits

0xc09d,	// (0x0007a25a) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0007d6ef) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0007d6ef) popup_call2_audio_first_window_t

0x9c17,	// (0x00077dd4) bg_popup_call2_act_pane_g1

0xc70c,	// (0x0007a8c9) popup_cale_lunar_info_window_t1

0xc71a,	// (0x0007a8d7) popup_cale_lunar_info_window_t2

0xc728,	// (0x0007a8e5) popup_cale_lunar_info_window_t3

0x99c4,	// (0x00077b81) bg_popup_call2_bubble_pane

0xc19e,	// (0x0007a35b) bg_popup_call2_in_pane_cp01_ParamLimits

0xc19e,	// (0x0007a35b) bg_popup_call2_in_pane_cp01

0x96a0,	// (0x0007785d) call_type_pane_cp02

0xc1e6,	// (0x0007a3a3) popup_call2_audio_out_window_g1_ParamLimits

0xc1e6,	// (0x0007a3a3) popup_call2_audio_out_window_g1

0xc212,	// (0x0007a3cf) popup_call2_audio_out_window_g2_ParamLimits

0xc212,	// (0x0007a3cf) popup_call2_audio_out_window_g2

0xc23a,	// (0x0007a3f7) popup_call2_audio_out_window_g3_ParamLimits

0xc23a,	// (0x0007a3f7) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0007d6f8) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0007d6f8) popup_call2_audio_out_window_g

0xc275,	// (0x0007a432) popup_call2_audio_out_window_t1_ParamLimits

0xc275,	// (0x0007a432) popup_call2_audio_out_window_t1

0xc2d4,	// (0x0007a491) popup_call2_audio_out_window_t2_ParamLimits

0xc2d4,	// (0x0007a491) popup_call2_audio_out_window_t2

0xc328,	// (0x0007a4e5) popup_call2_audio_out_window_t3_ParamLimits

0xc328,	// (0x0007a4e5) popup_call2_audio_out_window_t3

0xc33e,	// (0x0007a4fb) popup_call2_audio_out_window_t4_ParamLimits

0xc33e,	// (0x0007a4fb) popup_call2_audio_out_window_t4

0xc354,	// (0x0007a511) popup_call2_audio_out_window_t5_ParamLimits

0xc354,	// (0x0007a511) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0007d701) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0007d701) popup_call2_audio_out_window_t

0xc3b8,	// (0x0007a575) bg_popup_call2_in_pane_ParamLimits

0xc3b8,	// (0x0007a575) bg_popup_call2_in_pane

0xc414,	// (0x0007a5d1) popup_call2_audio_in_window_g1_ParamLimits

0xc414,	// (0x0007a5d1) popup_call2_audio_in_window_g1

0xc44c,	// (0x0007a609) popup_call2_audio_in_window_g2_ParamLimits

0xc44c,	// (0x0007a609) popup_call2_audio_in_window_g2

0xc484,	// (0x0007a641) popup_call2_audio_in_window_g3_ParamLimits

0xc484,	// (0x0007a641) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0007d70e) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0007d70e) popup_call2_audio_in_window_g

0xc4dc,	// (0x0007a699) popup_call2_audio_in_window_t1_ParamLimits

0xc4dc,	// (0x0007a699) popup_call2_audio_in_window_t1

0xc55c,	// (0x0007a719) popup_call2_audio_in_window_t2_ParamLimits

0xc55c,	// (0x0007a719) popup_call2_audio_in_window_t2

0xc5dc,	// (0x0007a799) popup_call2_audio_in_window_t3_ParamLimits

0xc5dc,	// (0x0007a799) popup_call2_audio_in_window_t3

0xc5f6,	// (0x0007a7b3) popup_call2_audio_in_window_t4_ParamLimits

0xc5f6,	// (0x0007a7b3) popup_call2_audio_in_window_t4

0xc608,	// (0x0007a7c5) popup_call2_audio_in_window_t5_ParamLimits

0xc608,	// (0x0007a7c5) popup_call2_audio_in_window_t5

0xc61d,	// (0x0007a7da) popup_call2_audio_in_window_t6_ParamLimits

0xc61d,	// (0x0007a7da) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0007d717) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0007d717) popup_call2_audio_in_window_t

0x9c17,	// (0x00077dd4) bg_popup_call2_in_pane_g1

0xc736,	// (0x0007a8f3) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0007d77f) popup_cale_lunar_info_window_t

0x9c1f,	// (0x00077ddc) bg_popup_call2_rect_pane_ParamLimits

0x9c1f,	// (0x00077ddc) bg_popup_call2_rect_pane

0x99c4,	// (0x00077b81) call2_cli_visual_graphic_pane

0x99c4,	// (0x00077b81) call2_cli_visual_text_pane

0x9e9d,	// (0x0007805a) smil_status_volume_pane_g3

0x0002,

0xa92e,	// (0x00078aeb) call2_cli_visual_graphic_pane_g1

0xa92e,	// (0x00078aeb) call2_cli_visual_graphic_pane_g2

0xa92e,	// (0x00078aeb) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0007d724) call2_cli_visual_graphic_pane_g

0xc632,	// (0x0007a7ef) bg_popup_call2_rect_pane_g1

0xa9cc,	// (0x00078b89) bg_popup_call2_rect_pane_g2

0xc63a,	// (0x0007a7f7) bg_popup_call2_rect_pane_g3

0xc642,	// (0x0007a7ff) bg_popup_call2_rect_pane_g4

0xc64a,	// (0x0007a807) bg_popup_call2_rect_pane_g5

0xc652,	// (0x0007a80f) bg_popup_call2_rect_pane_g6

0xc65a,	// (0x0007a817) bg_popup_call2_rect_pane_g7

0xc662,	// (0x0007a81f) bg_popup_call2_rect_pane_g8

0xc66a,	// (0x0007a827) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0007d72b) bg_popup_call2_rect_pane_g

0xc672,	// (0x0007a82f) bg_popup_call2_bubble_pane_g1

0xc67a,	// (0x0007a837) bg_popup_call2_bubble_pane_g2

0xc682,	// (0x0007a83f) bg_popup_call2_bubble_pane_g3

0xc68a,	// (0x0007a847) bg_popup_call2_bubble_pane_g4

0xc692,	// (0x0007a84f) bg_popup_call2_bubble_pane_g5

0xc69a,	// (0x0007a857) bg_popup_call2_bubble_pane_g6

0xc6a2,	// (0x0007a85f) bg_popup_call2_bubble_pane_g7

0xc6aa,	// (0x0007a867) bg_popup_call2_bubble_pane_g8

0xc6b2,	// (0x0007a86f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0007d73e) bg_popup_call2_bubble_pane_g

0x03b8,	// (0x0006e575) aid_cale_week_size_cell_pane

0x0d1d,	// (0x0006eeda) aid_cams_cif_uncrop_pane_ParamLimits

0x0d1d,	// (0x0006eeda) aid_cams_cif_uncrop_pane

0x0ed6,	// (0x0006f093) aid_cams_size_cell_ParamLimits

0x0ed6,	// (0x0006f093) aid_cams_size_cell

0x0eea,	// (0x0006f0a7) grid_cams_pane_ParamLimits

0x0f04,	// (0x0006f0c1) linegrid_cams_pane_ParamLimits

0x10d3,	// (0x0006f290) call_video_pane_t1

0x10ed,	// (0x0006f2aa) call_video_pane_t2

0x0001,

0xf26e,	// (0x0007d42b) call_video_pane_t

0x1521,	// (0x0006f6de) aid_cale_month_size_cell_pane_ParamLimits

0x1521,	// (0x0006f6de) aid_cale_month_size_cell_pane

0xf60b,	// (0x0007d7c8) smil_status_volume_pane_g

0x9eaa,	// (0x00078067) volume_smil_pane_ParamLimits

0x955c,	// (0x00077719) aid_popup2_width_pane

0x0308,	// (0x0006e4c5) cell_qdial_pane_g4_ParamLimits

0x0308,	// (0x0006e4c5) cell_qdial_pane_g4

0x2567,	// (0x00070724) aid_blid_cardinal_pane_ParamLimits

0x2573,	// (0x00070730) aid_blid_destination_pane_ParamLimits

0x2573,	// (0x00070730) aid_blid_destination_pane

0x9c1f,	// (0x00077ddc) bg_popup_call_poc_act_pane_ParamLimits

0x9c1f,	// (0x00077ddc) bg_popup_call_poc_act_pane

0x9c1f,	// (0x00077ddc) bg_popup_call_poc_inact_pane_ParamLimits

0x9c1f,	// (0x00077ddc) bg_popup_call_poc_inact_pane

0xc6ba,	// (0x0007a877) bg_popup_call_poc_act_pane_g1

0xc6c2,	// (0x0007a87f) bg_popup_call_poc_act_pane_g2

0xc6ca,	// (0x0007a887) bg_popup_call_poc_act_pane_g3

0xc68a,	// (0x0007a847) bg_popup_call_poc_act_pane_g4

0xc692,	// (0x0007a84f) bg_popup_call_poc_act_pane_g5

0xc6d2,	// (0x0007a88f) bg_popup_call_poc_act_pane_g6

0xc6a2,	// (0x0007a85f) bg_popup_call_poc_act_pane_g7

0xc6da,	// (0x0007a897) bg_popup_call_poc_act_pane_g8

0x99c4,	// (0x00077b81) main_usb_pane

0xc843,	// (0x0007aa00) popup_cale_lunar_info_window

0x13b6,	// (0x0006f573) im_reading_pane_t1_ParamLimits

0xab94,	// (0x00078d51) list_im_pane_ParamLimits

0xaba5,	// (0x00078d62) scroll_pane_cp07_ParamLimits

0x99c4,	// (0x00077b81) grid_highlight_pane_cp012

0x9c1f,	// (0x00077ddc) mup_scale_pane_ParamLimits

0xb57c,	// (0x00079739) main_usb_pane_g1_ParamLimits

0xb57c,	// (0x00079739) main_usb_pane_g1

0x32fd,	// (0x000714ba) main_usb_pane_g2_ParamLimits

0x32fd,	// (0x000714ba) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0007d768) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0007d768) main_usb_pane_g

0x3313,	// (0x000714d0) main_usb_pane_t1_ParamLimits

0x3313,	// (0x000714d0) main_usb_pane_t1

0x3325,	// (0x000714e2) main_usb_pane_t2_ParamLimits

0x3325,	// (0x000714e2) main_usb_pane_t2

0x3337,	// (0x000714f4) main_usb_pane_t3_ParamLimits

0x3337,	// (0x000714f4) main_usb_pane_t3

0x3349,	// (0x00071506) main_usb_pane_t4_ParamLimits

0x3349,	// (0x00071506) main_usb_pane_t4

0x335e,	// (0x0007151b) main_usb_pane_t5_ParamLimits

0x335e,	// (0x0007151b) main_usb_pane_t5

0x3373,	// (0x00071530) main_usb_pane_t6_ParamLimits

0x3373,	// (0x00071530) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0007d76d) main_usb_pane_t_ParamLimits

0x2508,	// (0x000706c5) aid_text_placing

0x2513,	// (0x000706d0) main_location2_pane_t1_ParamLimits

0x2527,	// (0x000706e4) main_location2_pane_t2_ParamLimits

0x253d,	// (0x000706fa) main_location2_pane_t3_ParamLimits

0x2553,	// (0x00070710) main_location2_pane_t4_ParamLimits

0x2553,	// (0x00070710) main_location2_pane_t4

0xf3cf,	// (0x0007d58c) main_location2_pane_t_ParamLimits

0x9c5b,	// (0x00077e18) find_pinb_pane_g2_ParamLimits

0x9c5b,	// (0x00077e18) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0007d2dc) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0007d2dc) find_pinb_pane_g

0x9c67,	// (0x00077e24) find_pinb_pane_t1_ParamLimits

0x9c79,	// (0x00077e36) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0007d2e1) find_pinb_pane_t_ParamLimits

0x99c4,	// (0x00077b81) main_call3_pane

0x1af0,	// (0x0006fcad) cale_month_day_heading_pane_t1_ParamLimits

0x1b76,	// (0x0006fd33) cale_month_day_heading_pane_t2_ParamLimits

0x1c07,	// (0x0006fdc4) cale_month_day_heading_pane_t3_ParamLimits

0x1c98,	// (0x0006fe55) cale_month_day_heading_pane_t4_ParamLimits

0x1d29,	// (0x0006fee6) cale_month_day_heading_pane_t5_ParamLimits

0x1dca,	// (0x0006ff87) cale_month_day_heading_pane_t6_ParamLimits

0x1e6f,	// (0x0007002c) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0007d463) cale_month_day_heading_pane_t_ParamLimits

0x214b,	// (0x00070308) smil_status_volume_pane

0x2dba,	// (0x00070f77) postcard_address_pane_ParamLimits

0x2dba,	// (0x00070f77) postcard_address_pane

0x2dd0,	// (0x00070f8d) postcard_message_pane_ParamLimits

0x2dd0,	// (0x00070f8d) postcard_message_pane

0x32d9,	// (0x00071496) call2_cli_visual_pane_t1_ParamLimits

0x32d9,	// (0x00071496) call2_cli_visual_pane_t1

0x3b66,	// (0x00071d23) postcard_message_pane_t1_ParamLimits

0x3b66,	// (0x00071d23) postcard_message_pane_t1

0x3b4f,	// (0x00071d0c) postcard_address_pane_t1_ParamLimits

0x3b4f,	// (0x00071d0c) postcard_address_pane_t1

0x3b3b,	// (0x00071cf8) popup_call3_audio_in_window_ParamLimits

0x3b3b,	// (0x00071cf8) popup_call3_audio_in_window

0x39c0,	// (0x00071b7d) bg_popup_call3_in_pane_ParamLimits

0x39c0,	// (0x00071b7d) bg_popup_call3_in_pane

0x3a3c,	// (0x00071bf9) popup_call3_audio_in_window_g1_ParamLimits

0x3a3c,	// (0x00071bf9) popup_call3_audio_in_window_g1

0x3a5c,	// (0x00071c19) popup_call3_audio_in_window_g2_ParamLimits

0x3a5c,	// (0x00071c19) popup_call3_audio_in_window_g2

0x3a7c,	// (0x00071c39) popup_call3_audio_in_window_g3_ParamLimits

0x3a7c,	// (0x00071c39) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0007d7cf) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0007d7cf) popup_call3_audio_in_window_g

0x3aad,	// (0x00071c6a) popup_call3_audio_in_window_t1_ParamLimits

0x3aad,	// (0x00071c6a) popup_call3_audio_in_window_t1

0x3aeb,	// (0x00071ca8) popup_call3_audio_in_window_t2_ParamLimits

0x3aeb,	// (0x00071ca8) popup_call3_audio_in_window_t2

0x3b29,	// (0x00071ce6) popup_call3_audio_in_window_t3_ParamLimits

0x3b29,	// (0x00071ce6) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0007d7d8) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0007d7d8) popup_call3_audio_in_window_t

0xaa8f,	// (0x00078c4c) bg_popup_call3_rect_pane

0xc632,	// (0x0007a7ef) bg_popup_call3_rect_pane_g1

0xa9cc,	// (0x00078b89) bg_popup_call3_rect_pane_g2

0xc63a,	// (0x0007a7f7) bg_popup_call3_rect_pane_g3

0xc642,	// (0x0007a7ff) bg_popup_call3_rect_pane_g4

0xc64a,	// (0x0007a807) bg_popup_call3_rect_pane_g5

0xc652,	// (0x0007a80f) bg_popup_call3_rect_pane_g6

0xc65a,	// (0x0007a817) bg_popup_call3_rect_pane_g7

0x296d,	// (0x00070b2a) mup_visualizer_osc_pane

0xb48a,	// (0x00079647) mup_visualizer_spec_pane

0x39f0,	// (0x00071bad) call3_video_qcif_pane_ParamLimits

0x39f0,	// (0x00071bad) call3_video_qcif_pane

0x3a03,	// (0x00071bc0) call3_video_qcif_uncrop_pane_ParamLimits

0x3a03,	// (0x00071bc0) call3_video_qcif_uncrop_pane

0x3a13,	// (0x00071bd0) call3_video_subqcif_pane_ParamLimits

0x3a13,	// (0x00071bd0) call3_video_subqcif_pane

0x3a29,	// (0x00071be6) call3_video_subqcif_uncrop_pane_ParamLimits

0x3a29,	// (0x00071be6) call3_video_subqcif_uncrop_pane

0x3a9c,	// (0x00071c59) popup_call3_audio_in_window_g4_ParamLimits

0x3a9c,	// (0x00071c59) popup_call3_audio_in_window_g4

0x39af,	// (0x00071b6c) mup_spec_half_pane

0x39b8,	// (0x00071b75) mup_spec_half_pane_cp

0xc8de,	// (0x0007aa9b) mup_osc_middle_pane

0xc8e7,	// (0x0007aaa4) mup_visualizer_osc_pane_g1

0x398f,	// (0x00071b4c) mup_spec_bar_pane_ParamLimits

0x398f,	// (0x00071b4c) mup_spec_bar_pane

0xc8cb,	// (0x0007aa88) mup_spec_bar_pane_g1

0xc8d5,	// (0x0007aa92) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0007d7c3) mup_spec_bar_pane_g

0x03b8,	// (0x0006e575) aid_cale_week_size_cell_pane_ParamLimits

0x03d2,	// (0x0006e58f) bg_cale_heading_pane_ParamLimits

0x03fb,	// (0x0006e5b8) bg_cale_pane_cp01_ParamLimits

0x041d,	// (0x0006e5da) cale_week_corner_pane_ParamLimits

0x043c,	// (0x0006e5f9) cale_week_day_heading_pane_ParamLimits

0x046a,	// (0x0006e627) cale_week_scroll_pane_g1_ParamLimits

0x048e,	// (0x0006e64b) cale_week_scroll_pane_g2_ParamLimits

0x04a6,	// (0x0006e663) cale_week_scroll_pane_g3_ParamLimits

0x04be,	// (0x0006e67b) cale_week_scroll_pane_g4_ParamLimits

0x04da,	// (0x0006e697) cale_week_scroll_pane_g5_ParamLimits

0x04fa,	// (0x0006e6b7) cale_week_scroll_pane_g6_ParamLimits

0x051a,	// (0x0006e6d7) cale_week_scroll_pane_g7_ParamLimits

0x053e,	// (0x0006e6fb) cale_week_scroll_pane_g8_ParamLimits

0x0562,	// (0x0006e71f) cale_week_scroll_pane_g9_ParamLimits

0x057f,	// (0x0006e73c) cale_week_scroll_pane_g10_ParamLimits

0x059c,	// (0x0006e759) cale_week_scroll_pane_g11_ParamLimits

0x05b9,	// (0x0006e776) cale_week_scroll_pane_g12_ParamLimits

0x05d6,	// (0x0006e793) cale_week_scroll_pane_g13_ParamLimits

0x05f3,	// (0x0006e7b0) cale_week_scroll_pane_g14_ParamLimits

0x061c,	// (0x0006e7d9) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0007d36d) cale_week_scroll_pane_g_ParamLimits

0x0669,	// (0x0006e826) cale_week_time_pane_ParamLimits

0x068d,	// (0x0006e84a) grid_cale_week_pane_ParamLimits

0xaa00,	// (0x00078bbd) listscroll_cale_week_pane_t1

0xaa12,	// (0x00078bcf) scroll_pane_cp08_ParamLimits

0x158e,	// (0x0006f74b) cale_month_corner_pane_ParamLimits

0xadc5,	// (0x00078f82) cale_month_pane_t1

0x1a76,	// (0x0006fc33) cale_month_week_pane_ParamLimits

0x2336,	// (0x000704f3) popup_call_status_window_g1_ParamLimits

0x234a,	// (0x00070507) popup_call_status_window_g2_ParamLimits

0x235e,	// (0x0007051b) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0007d513) popup_call_status_window_g_ParamLimits

0xb167,	// (0x00079324) aid_call2_pane

0x2c2e,	// (0x00070deb) msg_header_pane_g1

0x2dba,	// (0x00070f77) postcard_address2_pane_ParamLimits

0x2dba,	// (0x00070f77) postcard_address2_pane

0x2dd0,	// (0x00070f8d) postcard_message2_pane_ParamLimits

0x2dd0,	// (0x00070f8d) postcard_message2_pane

0x393f,	// (0x00071afc) message2_row_pane_ParamLimits

0x393f,	// (0x00071afc) message2_row_pane

0x395c,	// (0x00071b19) address2_row_pane_ParamLimits

0x395c,	// (0x00071b19) address2_row_pane

0xc899,	// (0x0007aa56) postcard_message2_row_pane_g1

0xc8a1,	// (0x0007aa5e) postcard_message2_row_pane_t1

0xc899,	// (0x0007aa56) address2_row_pane_g1

0xc8a1,	// (0x0007aa5e) address2_row_pane_t1

0x0bb9,	// (0x0006ed76) aid_size_cell_vorec

0x99c4,	// (0x00077b81) main_rss_pane

0x396f,	// (0x00071b2c) rss_list_single_pane_ParamLimits

0x396f,	// (0x00071b2c) rss_list_single_pane

0xc8af,	// (0x0007aa6c) rss_list_single_pane_t1

0xc8bd,	// (0x0007aa7a) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0007d7be) rss_list_single_pane_t

0x99c4,	// (0x00077b81) main_camera2_pane

0x99c4,	// (0x00077b81) main_video2_pane

0x3bd5,	// (0x00071d92) cams_zoom_pane_cp2_ParamLimits

0x3bd5,	// (0x00071d92) cams_zoom_pane_cp2

0x3bec,	// (0x00071da9) image2_vga_pane_ParamLimits

0x3bec,	// (0x00071da9) image2_vga_pane

0x3c34,	// (0x00071df1) main_camera2_pane_g1_ParamLimits

0x3c34,	// (0x00071df1) main_camera2_pane_g1

0x3c54,	// (0x00071e11) main_camera2_pane_g2_ParamLimits

0x3c54,	// (0x00071e11) main_camera2_pane_g2

0x3c6b,	// (0x00071e28) main_camera2_pane_g3_ParamLimits

0x3c6b,	// (0x00071e28) main_camera2_pane_g3

0x3c82,	// (0x00071e3f) main_camera2_pane_g4_ParamLimits

0x3c82,	// (0x00071e3f) main_camera2_pane_g4

0x3c99,	// (0x00071e56) main_camera2_pane_g5_ParamLimits

0x3c99,	// (0x00071e56) main_camera2_pane_g5

0x3cb0,	// (0x00071e6d) main_camera2_pane_g6_ParamLimits

0x3cb0,	// (0x00071e6d) main_camera2_pane_g6

0x3cc7,	// (0x00071e84) main_camera2_pane_g7_ParamLimits

0x3cc7,	// (0x00071e84) main_camera2_pane_g7

0x3cde,	// (0x00071e9b) main_camera2_pane_g8_ParamLimits

0x3cde,	// (0x00071e9b) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0007d7df) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0007d7df) main_camera2_pane_g

0x3d0c,	// (0x00071ec9) main_camera2_pane_t1_ParamLimits

0x3d0c,	// (0x00071ec9) main_camera2_pane_t1

0x3d41,	// (0x00071efe) main_camera2_pane_t2_ParamLimits

0x3d41,	// (0x00071efe) main_camera2_pane_t2

0x3d5e,	// (0x00071f1b) main_camera2_pane_t3_ParamLimits

0x3d5e,	// (0x00071f1b) main_camera2_pane_t3

0x3dbc,	// (0x00071f79) main_camera2_pane_t4_ParamLimits

0x3dbc,	// (0x00071f79) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0007d7f2) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0007d7f2) main_camera2_pane_t

0x3e45,	// (0x00072002) cams_zoom_pane_cp4_ParamLimits

0x3e45,	// (0x00072002) cams_zoom_pane_cp4

0x3e5b,	// (0x00072018) image2_cif_pane_ParamLimits

0x3e5b,	// (0x00072018) image2_cif_pane

0x3e86,	// (0x00072043) image2_subqcif_pane_ParamLimits

0x3e86,	// (0x00072043) image2_subqcif_pane

0x3ea1,	// (0x0007205e) main_video2_pane_g1_ParamLimits

0x3ea1,	// (0x0007205e) main_video2_pane_g1

0x3ebb,	// (0x00072078) main_video2_pane_g2_ParamLimits

0x3ebb,	// (0x00072078) main_video2_pane_g2

0x3ed1,	// (0x0007208e) main_video2_pane_g3_ParamLimits

0x3ed1,	// (0x0007208e) main_video2_pane_g3

0x3ee7,	// (0x000720a4) main_video2_pane_g4_ParamLimits

0x3ee7,	// (0x000720a4) main_video2_pane_g4

0x3efd,	// (0x000720ba) main_video2_pane_g5_ParamLimits

0x3efd,	// (0x000720ba) main_video2_pane_g5

0x3f13,	// (0x000720d0) main_video2_pane_g6_ParamLimits

0x3f13,	// (0x000720d0) main_video2_pane_g6

0x0005,

0xf644,	// (0x0007d801) main_video2_pane_g_ParamLimits

0xf644,	// (0x0007d801) main_video2_pane_g

0x3f2d,	// (0x000720ea) main_video2_pane_t1_ParamLimits

0x3f2d,	// (0x000720ea) main_video2_pane_t1

0x3f51,	// (0x0007210e) main_video2_pane_t2_ParamLimits

0x3f51,	// (0x0007210e) main_video2_pane_t2

0x3fa1,	// (0x0007215e) main_video2_pane_t3_ParamLimits

0x3fa1,	// (0x0007215e) main_video2_pane_t3

0x0002,

0xf651,	// (0x0007d80e) main_video2_pane_t_ParamLimits

0xf651,	// (0x0007d80e) main_video2_pane_t

0x3431,	// (0x000715ee) call_muted_g2

0x0001,

0xf5f3,	// (0x0007d7b0) call_muted_g

0x99c4,	// (0x00077b81) main_mup2_pane

0x3fe9,	// (0x000721a6) main_mup2_pane_g1_ParamLimits

0x3fe9,	// (0x000721a6) main_mup2_pane_g1

0x3ff5,	// (0x000721b2) main_mup2_pane_g2_ParamLimits

0x3ff5,	// (0x000721b2) main_mup2_pane_g2

0x9f15,	// (0x000780d2) main_mup_pane_g13_cp1

0x9f1d,	// (0x000780da) mup_volume_pane_cp1

0x4013,	// (0x000721d0) main_mup2_pane_g4_ParamLimits

0x4013,	// (0x000721d0) main_mup2_pane_g4

0x4025,	// (0x000721e2) main_mup2_pane_g5_ParamLimits

0x4025,	// (0x000721e2) main_mup2_pane_g5

0x4037,	// (0x000721f4) main_mup2_pane_g6_ParamLimits

0x4037,	// (0x000721f4) main_mup2_pane_g6

0x4049,	// (0x00072206) main_mup2_pane_g7_ParamLimits

0x4049,	// (0x00072206) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0007d815) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0007d815) main_mup2_pane_g

0x4061,	// (0x0007221e) main_mup2_pane_t1_ParamLimits

0x4061,	// (0x0007221e) main_mup2_pane_t1

0x4077,	// (0x00072234) main_mup2_pane_t2_ParamLimits

0x4077,	// (0x00072234) main_mup2_pane_t2

0x408d,	// (0x0007224a) main_mup2_pane_t3_ParamLimits

0x408d,	// (0x0007224a) main_mup2_pane_t3

0x40a3,	// (0x00072260) main_mup2_pane_t4_ParamLimits

0x40a3,	// (0x00072260) main_mup2_pane_t4

0x40bb,	// (0x00072278) main_mup2_pane_t5_ParamLimits

0x40bb,	// (0x00072278) main_mup2_pane_t5

0x40d3,	// (0x00072290) main_mup2_pane_t6_ParamLimits

0x40d3,	// (0x00072290) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0007d824) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0007d824) main_mup2_pane_t

0x4103,	// (0x000722c0) mup2_visualizer_pane_ParamLimits

0x4103,	// (0x000722c0) mup2_visualizer_pane

0x4131,	// (0x000722ee) mup_progress_pane_cp_ParamLimits

0x4131,	// (0x000722ee) mup_progress_pane_cp

0x9f00,	// (0x000780bd) mup_volume_pane_cp_ParamLimits

0x9f00,	// (0x000780bd) mup_volume_pane_cp

0x4147,	// (0x00072304) mup2_visualizer_pane_g1_ParamLimits

0x4147,	// (0x00072304) mup2_visualizer_pane_g1

0xc91e,	// (0x0007aadb) mup2_visualizer_pane_g2_ParamLimits

0xc91e,	// (0x0007aadb) mup2_visualizer_pane_g2

0x415e,	// (0x0007231b) mup2_visualizer_pane_g3_ParamLimits

0x415e,	// (0x0007231b) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0007d831) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0007d831) mup2_visualizer_pane_g

0xb6c5,	// (0x00079882) aid_size_cell_fmradio

0x35e1,	// (0x0007179e) aid_height_parent_landcape

0xac23,	// (0x00078de0) wml_content_pane_cp

0xac2b,	// (0x00078de8) wml_tabs_pane

0xac34,	// (0x00078df1) popup_wml_miniature_window

0xac3c,	// (0x00078df9) scroll_pane_cp021

0xac50,	// (0x00078e0d) wml_content_pane_comp8

0x99c4,	// (0x00077b81) bg_popup_sub_pane_cp05

0xc93c,	// (0x0007aaf9) popup_wml_miniature_window_g1

0xc944,	// (0x0007ab01) wml_miniature_view_pane

0x416a,	// (0x00072327) aid_size_wml_view

0x4172,	// (0x0007232f) wml_miniature_view_pane_g1

0x417b,	// (0x00072338) wml_miniature_view_pane_g2

0x4184,	// (0x00072341) wml_miniature_view_pane_g3

0x418c,	// (0x00072349) wml_miniature_view_pane_g4

0x4194,	// (0x00072351) wml_miniature_view_pane_g5

0x419c,	// (0x00072359) wml_miniature_view_pane_g6

0x41a4,	// (0x00072361) wml_miniature_view_pane_g7

0x41ac,	// (0x00072369) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0007d838) wml_miniature_view_pane_g

0xc94c,	// (0x0007ab09) background_graphic_ParamLimits

0xc94c,	// (0x0007ab09) background_graphic

0xc958,	// (0x0007ab15) wml_tabs_2_pane

0xc961,	// (0x0007ab1e) wml_tabs_3_pane_ParamLimits

0xc961,	// (0x0007ab1e) wml_tabs_3_pane

0xc973,	// (0x0007ab30) wml_tabs_4_pane_ParamLimits

0xc973,	// (0x0007ab30) wml_tabs_4_pane

0xc989,	// (0x0007ab46) wml_tabs_5_pane_ParamLimits

0xc989,	// (0x0007ab46) wml_tabs_5_pane

0xc9a3,	// (0x0007ab60) wml_tabs_pane_g2_ParamLimits

0xc9a3,	// (0x0007ab60) wml_tabs_pane_g2

0xc9b7,	// (0x0007ab74) wml_tabs_pane_g3_ParamLimits

0xc9b7,	// (0x0007ab74) wml_tabs_pane_g3

0x41b4,	// (0x00072371) wml_tabs_2_active_pane_ParamLimits

0x41b4,	// (0x00072371) wml_tabs_2_active_pane

0x41c8,	// (0x00072385) wml_tabs_2_passive_pane_ParamLimits

0x41c8,	// (0x00072385) wml_tabs_2_passive_pane

0x41dc,	// (0x00072399) wml_tabs_3_active_pane_cp_ParamLimits

0x41dc,	// (0x00072399) wml_tabs_3_active_pane_cp

0x41f1,	// (0x000723ae) wml_tabs_3_passive_pane_ParamLimits

0x41f1,	// (0x000723ae) wml_tabs_3_passive_pane

0x4204,	// (0x000723c1) wml_tabs_3_passive_pane_cp_ParamLimits

0x4204,	// (0x000723c1) wml_tabs_3_passive_pane_cp

0x421b,	// (0x000723d8) tabs_4_active_pane

0x4223,	// (0x000723e0) tabs_4_passive_pane

0x422d,	// (0x000723ea) tabs_4_passive_pane_cp

0x4235,	// (0x000723f2) tabs_4_passive_pane_cp2

0x32f5,	// (0x000714b2) aid_height_text

0x293f,	// (0x00070afc) mup_volume_cont_pane_ParamLimits

0x293f,	// (0x00070afc) mup_volume_cont_pane

0xff95,	// (0x0006e152) aid_size_cell_pinb

0xff9f,	// (0x0006e15c) aid_size_list_pinb

0x411d,	// (0x000722da) mup2_volume_cont_pane_ParamLimits

0x411d,	// (0x000722da) mup2_volume_cont_pane

0x9eec,	// (0x000780a9) mup2_volume_cont_pane_g1_ParamLimits

0x9eec,	// (0x000780a9) mup2_volume_cont_pane_g1

0xfc45,	// (0x0006de02) aid_size_cell_touch_ParamLimits

0xfc45,	// (0x0006de02) aid_size_cell_touch

0xfe85,	// (0x0006e042) touch_pane_ParamLimits

0xfe85,	// (0x0006e042) touch_pane

0x954a,	// (0x00077707) main_rss2_pane

0xc9d4,	// (0x0007ab91) listscroll_rss2_pane

0xc9dd,	// (0x0007ab9a) rss2_navigation_pane

0xc9e5,	// (0x0007aba2) list_rss2_pane

0xb28b,	// (0x00079448) scroll_pane_cp22

0xc9ed,	// (0x0007abaa) rss2_navigation_pane_g1

0xc9f6,	// (0x0007abb3) rss2_navigation_pane_g2

0xc9fe,	// (0x0007abbb) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0007d849) rss2_navigation_pane_g

0xca06,	// (0x0007abc3) rss2_navigation_pane_t1

0x423f,	// (0x000723fc) rss2_list_single_pane_ParamLimits

0x423f,	// (0x000723fc) rss2_list_single_pane

0xca14,	// (0x0007abd1) rss2_list_single_pane_t2

0xca22,	// (0x0007abdf) rss2_list_single_pane_t3_ParamLimits

0xca22,	// (0x0007abdf) rss2_list_single_pane_t3

0xca3f,	// (0x0007abfc) rss2_list_single_pane_t4

0x2133,	// (0x000702f0) smil_status_pane_g1

0x95a3,	// (0x00077760) main_image2_pane_ParamLimits

0x95a3,	// (0x00077760) main_image2_pane

0x3cf5,	// (0x00071eb2) main_camera2_pane_g9_ParamLimits

0x3cf5,	// (0x00071eb2) main_camera2_pane_g9

0x3e11,	// (0x00071fce) main_camera2_pane_t5_ParamLimits

0x3e11,	// (0x00071fce) main_camera2_pane_t5

0x9ec1,	// (0x0007807e) main_camera2_pane_t6_ParamLimits

0x9ec1,	// (0x0007807e) main_camera2_pane_t6

0x4255,	// (0x00072412) main_image2_pane_g1_ParamLimits

0x4255,	// (0x00072412) main_image2_pane_g1

0x300f,	// (0x000711cc) smil2_video_pane_ParamLimits

0x300f,	// (0x000711cc) smil2_video_pane

0xfc7d,	// (0x0006de3a) aid_zoom_text_primary_cp

0x9599,	// (0x00077756) popup_preview_fixed_window

0xab8c,	// (0x00078d49) im_reading_pane_g1

0x3bc7,	// (0x00071d84) cams2_bc_adjust_pane_cp_ParamLimits

0x3bc7,	// (0x00071d84) cams2_bc_adjust_pane_cp

0x3e37,	// (0x00071ff4) cams2_bc_adjust_pane_ParamLimits

0x3e37,	// (0x00071ff4) cams2_bc_adjust_pane

0xcf96,	// (0x0007b153) cams2_bc_adjust_pane_g1

0x9f25,	// (0x000780e2) cams2_slider_pane

0x9f2e,	// (0x000780eb) cams2_slider_pane_g1

0x9f37,	// (0x000780f4) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0007d850) cams2_slider_pane_g

0x008f,	// (0x0006e24c) calc_display_pane_ParamLimits

0x00b7,	// (0x0006e274) calc_paper_pane_ParamLimits

0x00da,	// (0x0006e297) grid_calc_pane_ParamLimits

0x9df6,	// (0x00077fb3) popup_clock_digital_window_t1_ParamLimits

0xb662,	// (0x0007981f) main_image_pane_t1

0x0071,	// (0x0006e22e) aid_size_cell_calc_ParamLimits

0x0071,	// (0x0006e22e) aid_size_cell_calc

0x3627,	// (0x000717e4) popup_blid_sat_info2_window_ParamLimits

0x3627,	// (0x000717e4) popup_blid_sat_info2_window

0xca55,	// (0x0007ac12) aid_size_cell_blid

0xca5d,	// (0x0007ac1a) bg_popup_window_pane_cp07

0xca80,	// (0x0007ac3d) grid_popup_blid_pane

0xca8a,	// (0x0007ac47) heading_pane_cp05_ParamLimits

0xca8a,	// (0x0007ac47) heading_pane_cp05

0xcb54,	// (0x0007ad11) cell_popup_blid_pane_ParamLimits

0xcb54,	// (0x0007ad11) cell_popup_blid_pane

0xcb7e,	// (0x0007ad3b) cell_popup_blid_pane_g1

0xcb86,	// (0x0007ad43) cell_popup_blid_pane_t1

0x40ed,	// (0x000722aa) mup2_indicator_pane_ParamLimits

0x40ed,	// (0x000722aa) mup2_indicator_pane

0xaa8f,	// (0x00078c4c) mup2_visualizer_osc_pane

0xc92a,	// (0x0007aae7) mup2_visualizer_spec_pane_ParamLimits

0xc92a,	// (0x0007aae7) mup2_visualizer_spec_pane

0x426b,	// (0x00072428) mup2_spec_half_pane

0x4274,	// (0x00072431) mup2_spec_half_pane_cp

0x427c,	// (0x00072439) mup2_spec_bar_pane_ParamLimits

0x427c,	// (0x00072439) mup2_spec_bar_pane

0xc8cb,	// (0x0007aa88) mup2_spec_bar_pane_g1

0xc8d5,	// (0x0007aa92) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0007d7c3) mup2_spec_bar_pane_g

0x429c,	// (0x00072459) mup2_osc_middle_pane

0xc8e7,	// (0x0007aaa4) mup2_visualizer_osc_pane_g1

0x95d1,	// (0x0007778e) popup_number_entry_window_t1_ParamLimits

0x95e4,	// (0x000777a1) popup_number_entry_window_t2_ParamLimits

0x95f6,	// (0x000777b3) popup_number_entry_window_t3_ParamLimits

0xfed7,	// (0x0006e094) popup_number_entry_window_t5_ParamLimits

0xfed7,	// (0x0006e094) popup_number_entry_window_t5

0xf0ca,	// (0x0007d287) popup_number_entry_window_t_ParamLimits

0x9608,	// (0x000777c5) text_title_cp2_ParamLimits

0x9e6b,	// (0x00078028) aid_hotspot_pointer_text2_pane

0x9e91,	// (0x0007804e) main_viewer_pane_g9_ParamLimits

0x9e91,	// (0x0007804e) main_viewer_pane_g9

0xadc5,	// (0x00078f82) cale_month_pane_t1_ParamLimits

0xadeb,	// (0x00078fa8) bg_cale_pane_ParamLimits

0xae03,	// (0x00078fc0) list_cale_pane_ParamLimits

0xae14,	// (0x00078fd1) listscroll_cale_day_pane_t1

0xae26,	// (0x00078fe3) scroll_pane_cp09_ParamLimits

0x2975,	// (0x00070b32) main_mup_eq_pane_t1_ParamLimits

0x2975,	// (0x00070b32) main_mup_eq_pane_t1

0x2991,	// (0x00070b4e) main_mup_eq_pane_t2_ParamLimits

0x2991,	// (0x00070b4e) main_mup_eq_pane_t2

0x29ad,	// (0x00070b6a) main_mup_eq_pane_t3_ParamLimits

0x29ad,	// (0x00070b6a) main_mup_eq_pane_t3

0x29cb,	// (0x00070b88) main_mup_eq_pane_t4_ParamLimits

0x29cb,	// (0x00070b88) main_mup_eq_pane_t4

0x29e9,	// (0x00070ba6) main_mup_eq_pane_t5_ParamLimits

0x29e9,	// (0x00070ba6) main_mup_eq_pane_t5

0x2a07,	// (0x00070bc4) main_mup_eq_pane_t6_ParamLimits

0x2a07,	// (0x00070bc4) main_mup_eq_pane_t6

0x2a1d,	// (0x00070bda) main_mup_eq_pane_t7_ParamLimits

0x2a1d,	// (0x00070bda) main_mup_eq_pane_t7

0x2a33,	// (0x00070bf0) main_mup_eq_pane_t8_ParamLimits

0x2a33,	// (0x00070bf0) main_mup_eq_pane_t8

0x2a49,	// (0x00070c06) main_mup_eq_pane_t9_ParamLimits

0x2a49,	// (0x00070c06) main_mup_eq_pane_t9

0x2a65,	// (0x00070c22) main_mup_eq_pane_t10_ParamLimits

0x2a65,	// (0x00070c22) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0007d612) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0007d612) main_mup_eq_pane_t

0x2b3a,	// (0x00070cf7) mup_equalizer_pane_cp5_ParamLimits

0x2b52,	// (0x00070d0f) mup_equalizer_pane_cp6_ParamLimits

0x2b6a,	// (0x00070d27) mup_equalizer_pane_cp7_ParamLimits

0x954a,	// (0x00077707) main_gallery_pane

0xc8f0,	// (0x0007aaad) smil2_volume_pane

0xc8f8,	// (0x0007aab5) smil_status_volume_pane_g1_ParamLimits

0xc90b,	// (0x0007aac8) smil_status_volume_pane_g2_ParamLimits

0x9e9d,	// (0x0007805a) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0007d7c8) smil_status_volume_pane_g_ParamLimits

0xca5d,	// (0x0007ac1a) bg_popup_window_pane_cp07_ParamLimits

0xca6b,	// (0x0007ac28) blid_firmament_pane

0x42a5,	// (0x00072462) aid_size_cell_gallery_ParamLimits

0x42a5,	// (0x00072462) aid_size_cell_gallery

0x42bb,	// (0x00072478) grid_gallery_pane_ParamLimits

0x42bb,	// (0x00072478) grid_gallery_pane

0x42d6,	// (0x00072493) cell_gallery_pane_ParamLimits

0x42d6,	// (0x00072493) cell_gallery_pane

0xcb94,	// (0x0007ad51) bg_cell_gallery_focus_pane_ParamLimits

0xcb94,	// (0x0007ad51) bg_cell_gallery_focus_pane

0xcba6,	// (0x0007ad63) cell_gallery_pane_g1_ParamLimits

0xcba6,	// (0x0007ad63) cell_gallery_pane_g1

0x4321,	// (0x000724de) cell_gallery_pane_g2_ParamLimits

0x4321,	// (0x000724de) cell_gallery_pane_g2

0x432e,	// (0x000724eb) cell_gallery_pane_g3_ParamLimits

0x432e,	// (0x000724eb) cell_gallery_pane_g3

0xcbb2,	// (0x0007ad6f) cell_gallery_pane_g4_ParamLimits

0xcbb2,	// (0x0007ad6f) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0007d876) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0007d876) cell_gallery_pane_g

0xcbbe,	// (0x0007ad7b) bg_cell_gallery_focus_pane_g1

0xcbc6,	// (0x0007ad83) bg_cell_gallery_focus_pane_g2

0xcbce,	// (0x0007ad8b) bg_cell_gallery_focus_pane_g3

0xcbd6,	// (0x0007ad93) bg_cell_gallery_focus_pane_g4

0xcbde,	// (0x0007ad9b) bg_cell_gallery_focus_pane_g5

0xcbe6,	// (0x0007ada3) bg_cell_gallery_focus_pane_g6

0xcbee,	// (0x0007adab) bg_cell_gallery_focus_pane_g7

0xcbf6,	// (0x0007adb3) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0007d87f) bg_cell_gallery_focus_pane_g

0xcbfe,	// (0x0007adbb) aid_firma_cardinal

0xcc12,	// (0x0007adcf) blid_firmament_pane_t1

0xcc29,	// (0x0007ade6) blid_firmament_pane_t2

0xcc40,	// (0x0007adfd) blid_firmament_pane_t3

0xcc57,	// (0x0007ae14) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0007d890) blid_firmament_pane_t

0xcc6e,	// (0x0007ae2b) blid_sat_info_pane

0xcc7e,	// (0x0007ae3b) blid_sat_info_pane_g1

0xcc7e,	// (0x0007ae3b) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0007d899) blid_sat_info_pane_g

0xcc88,	// (0x0007ae45) blid_sat_info_pane_t1

0xcc96,	// (0x0007ae53) smil2_volume_content_pane

0xcc9f,	// (0x0007ae5c) smil2_volume_pane_g1

0xcca7,	// (0x0007ae64) smil2_volume_content_pane_g1

0xccb0,	// (0x0007ae6d) smil2_volume_content_pane_g2

0xccb9,	// (0x0007ae76) smil2_volume_content_pane_g3

0xccc2,	// (0x0007ae7f) smil2_volume_content_pane_g4

0xcccb,	// (0x0007ae88) smil2_volume_content_pane_g5

0xccd4,	// (0x0007ae91) smil2_volume_content_pane_g6

0xccdd,	// (0x0007ae9a) smil2_volume_content_pane_g7

0xcce6,	// (0x0007aea3) smil2_volume_content_pane_g8

0xccef,	// (0x0007aeac) smil2_volume_content_pane_g9

0xccf8,	// (0x0007aeb5) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0007d89e) smil2_volume_content_pane_g

0x0754,	// (0x0006e911) cale_week_day_heading_pane_t1_ParamLimits

0x079e,	// (0x0006e95b) cale_week_day_heading_pane_t2_ParamLimits

0x07ed,	// (0x0006e9aa) cale_week_day_heading_pane_t3_ParamLimits

0x083c,	// (0x0006e9f9) cale_week_day_heading_pane_t4_ParamLimits

0x088b,	// (0x0006ea48) cale_week_day_heading_pane_t5_ParamLimits

0x08de,	// (0x0006ea9b) cale_week_day_heading_pane_t6_ParamLimits

0x0935,	// (0x0006eaf2) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0007d38e) cale_week_day_heading_pane_t_ParamLimits

0xaa34,	// (0x00078bf1) bg_cale_side_pane_ParamLimits

0x097f,	// (0x0006eb3c) cale_week_time_pane_t1_ParamLimits

0x09b9,	// (0x0006eb76) cale_week_time_pane_t2_ParamLimits

0x09f3,	// (0x0006ebb0) cale_week_time_pane_t3_ParamLimits

0x0a2d,	// (0x0006ebea) cale_week_time_pane_t4_ParamLimits

0x0a67,	// (0x0006ec24) cale_week_time_pane_t5_ParamLimits

0x0aa1,	// (0x0006ec5e) cale_week_time_pane_t6_ParamLimits

0x0adb,	// (0x0006ec98) cale_week_time_pane_t7_ParamLimits

0x0b15,	// (0x0006ecd2) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0007d39d) cale_week_time_pane_t_ParamLimits

0x0b55,	// (0x0006ed12) cell_cale_week_pane_g2_ParamLimits

0xaa34,	// (0x00078bf1) bg_cale_side_pane_cp01_ParamLimits

0x1f18,	// (0x000700d5) cale_month_week_pane_t1_ParamLimits

0x1f31,	// (0x000700ee) cale_month_week_pane_t2_ParamLimits

0x1f4a,	// (0x00070107) cale_month_week_pane_t3_ParamLimits

0x1f63,	// (0x00070120) cale_month_week_pane_t4_ParamLimits

0x1f7c,	// (0x00070139) cale_month_week_pane_t5_ParamLimits

0x1f95,	// (0x00070152) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0007d472) cale_month_week_pane_t_ParamLimits

0x9d76,	// (0x00077f33) cell_cale_month_pane_g1_ParamLimits

0x954a,	// (0x00077707) main_cale_event_viewer_pane

0x954a,	// (0x00077707) listscroll_cale_event_viewer_pane

0xcd01,	// (0x0007aebe) list_cale_ev_pane

0xcd09,	// (0x0007aec6) scroll_pane_cp023

0x433b,	// (0x000724f8) field_cale_ev_pane_ParamLimits

0x433b,	// (0x000724f8) field_cale_ev_pane

0xcd15,	// (0x0007aed2) field_cale_ev_content_pane_ParamLimits

0xcd15,	// (0x0007aed2) field_cale_ev_content_pane

0xcd21,	// (0x0007aede) field_cale_ev_pane_g1_ParamLimits

0xcd21,	// (0x0007aede) field_cale_ev_pane_g1

0xcd2d,	// (0x0007aeea) field_cale_ev_pane_g2_ParamLimits

0xcd2d,	// (0x0007aeea) field_cale_ev_pane_g2

0xcd45,	// (0x0007af02) field_cale_ev_pane_g3_ParamLimits

0xcd45,	// (0x0007af02) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0007d8b3) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0007d8b3) field_cale_ev_pane_g

0xcd5d,	// (0x0007af1a) field_cale_ev_pane_t1_ParamLimits

0xcd5d,	// (0x0007af1a) field_cale_ev_pane_t1

0x435f,	// (0x0007251c) field_cale_ev_content_pane_t1_ParamLimits

0x435f,	// (0x0007251c) field_cale_ev_content_pane_t1

0xb536,	// (0x000796f3) bg_button_pane_cp01

0x039c,	// (0x0006e559) listscroll_cale_week_pane_ParamLimits

0x03ae,	// (0x0006e56b) popup_toolbar_window_cp01

0xaa00,	// (0x00078bbd) listscroll_cale_week_pane_t1_ParamLimits

0x039c,	// (0x0006e559) listscroll_cale_day_pane_ParamLimits

0x03ae,	// (0x0006e56b) popup_toolbar_window_cp02

0xae14,	// (0x00078fd1) listscroll_cale_day_pane_t1_ParamLimits

0x039c,	// (0x0006e559) main_cale_month_pane_ParamLimits

0x38a7,	// (0x00071a64) popup_toolbar_window_cp03_ParamLimits

0x38a7,	// (0x00071a64) popup_toolbar_window_cp03

0x2ecd,	// (0x0007108a) main_image_pane_g2_ParamLimits

0x2ecd,	// (0x0007108a) main_image_pane_g2

0x2ede,	// (0x0007109b) main_image_pane_g3_ParamLimits

0x2ede,	// (0x0007109b) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0007d6a4) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0007d6a4) main_image_pane_g

0xb662,	// (0x0007981f) main_image_pane_t1_ParamLimits

0x2eef,	// (0x000710ac) main_image_pane_t2_ParamLimits

0x2eef,	// (0x000710ac) main_image_pane_t2

0x2f01,	// (0x000710be) main_image_pane_t3_ParamLimits

0x2f01,	// (0x000710be) main_image_pane_t3

0x2f29,	// (0x000710e6) main_image_pane_t4_ParamLimits

0x2f29,	// (0x000710e6) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0007d6ab) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0007d6ab) main_image_pane_t

0x2f49,	// (0x00071106) popup_image_details_window_cp01

0x2f53,	// (0x00071110) popup_toobar_trans_pane_cp01_ParamLimits

0x2f53,	// (0x00071110) popup_toobar_trans_pane_cp01

0x371a,	// (0x000718d7) popup_image_details_window_ParamLimits

0x371a,	// (0x000718d7) popup_image_details_window

0xc84f,	// (0x0007aa0c) popup_image_focus_window

0x3b81,	// (0x00071d3e) camera2_autofocus_pane_ParamLimits

0x3b81,	// (0x00071d3e) camera2_autofocus_pane

0x954a,	// (0x00077707) bg_popup_sub_pane_cp06

0xcd74,	// (0x0007af31) popup_image_focus_window_g1

0xcd7c,	// (0x0007af39) popup_image_focus_window_g2

0xcd84,	// (0x0007af41) popup_image_focus_window_g3

0xcd8c,	// (0x0007af49) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0007d8ba) popup_image_focus_window_g

0xcd94,	// (0x0007af51) popup_image_focus_window_t1

0xcda2,	// (0x0007af5f) popup_image_focus_window_t2

0xcdb2,	// (0x0007af6f) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0007d8c3) popup_image_focus_window_t

0xcdc0,	// (0x0007af7d) camera2_autofocus_pane_g1

0x95a3,	// (0x00077760) bg_tb_trans_pane_cp01

0xcdce,	// (0x0007af8b) popup_image_details_window_g1

0xcde1,	// (0x0007af9e) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0007d8d5) popup_image_details_window_g

0xce0a,	// (0x0007afc7) popup_image_details_window_t1

0xce1c,	// (0x0007afd9) popup_image_details_window_t2

0xce35,	// (0x0007aff2) popup_image_details_window_t3

0xce49,	// (0x0007b006) popup_image_details_window_t4

0xce64,	// (0x0007b021) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0007d8dc) popup_image_details_window_t

0xa8c5,	// (0x00078a82) bg_calc_paper_pane_ParamLimits

0x9cae,	// (0x00077e6b) grid_highlight_pane_cp013

0x9cb8,	// (0x00077e75) list_calc_pane_ParamLimits

0x9cca,	// (0x00077e87) scroll_pane_cp024

0xa8d9,	// (0x00078a96) bg_calc_display_pane_ParamLimits

0x01da,	// (0x0006e397) calc_display_pane_t1_ParamLimits

0x01ec,	// (0x0006e3a9) calc_display_pane_t2_ParamLimits

0x9cd2,	// (0x00077e8f) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0007d30e) calc_display_pane_t_ParamLimits

0x02b5,	// (0x0006e472) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0007d32b) cell_calc_pane_g

0x02be,	// (0x0006e47b) cell_calc_pane_t1

0xa938,	// (0x00078af5) grid_highlight_pane_cp02_ParamLimits

0xa94e,	// (0x00078b0b) toolbar_button_pane_cp01_ParamLimits

0xa94e,	// (0x00078b0b) toolbar_button_pane_cp01

0xb6a7,	// (0x00079864) temp_image_control_pane_ParamLimits

0xb6a7,	// (0x00079864) temp_image_control_pane

0x95a3,	// (0x00077760) main_mp3_pane

0xce7e,	// (0x0007b03b) temp_image_control_pane_g1_ParamLimits

0xce7e,	// (0x0007b03b) temp_image_control_pane_g1

0xce8c,	// (0x0007b049) temp_image_control_pane_g2_ParamLimits

0xce8c,	// (0x0007b049) temp_image_control_pane_g2

0xce9e,	// (0x0007b05b) temp_image_control_pane_g3_ParamLimits

0xce9e,	// (0x0007b05b) temp_image_control_pane_g3

0x43b0,	// (0x0007256d) temp_image_control_pane_g4_ParamLimits

0x43b0,	// (0x0007256d) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0007d8e7) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0007d8e7) temp_image_control_pane_g

0xce7e,	// (0x0007b03b) main_mp3_pane_g1

0x43c3,	// (0x00072580) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0007d8f0) main_mp3_pane_g

0xcee1,	// (0x0007b09e) main_mp3_pane_t1

0xaa97,	// (0x00078c54) main_camera_pane_g8_ParamLimits

0xaa97,	// (0x00078c54) main_camera_pane_g8

0x0e7c,	// (0x0006f039) main_video_pane_g7_ParamLimits

0x0e7c,	// (0x0006f039) main_video_pane_g7

0x9eda,	// (0x00078097) main_camera2_pane_t7_ParamLimits

0x9eda,	// (0x00078097) main_camera2_pane_t7

0xabe3,	// (0x00078da0) scroll_pane_cp025_ParamLimits

0xabe3,	// (0x00078da0) scroll_pane_cp025

0xabf7,	// (0x00078db4) scroll_pane_cp026_ParamLimits

0xabf7,	// (0x00078db4) scroll_pane_cp026

0xac06,	// (0x00078dc3) wml_content_pane_ParamLimits

0x954a,	// (0x00077707) main_touch_calib_pane

0x4495,	// (0x00072652) main_touch_calib_pane_g1

0x44a7,	// (0x00072664) main_touch_calib_pane_g2

0x44b9,	// (0x00072676) main_touch_calib_pane_g3

0x44cb,	// (0x00072688) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0007d90e) main_touch_calib_pane_g

0x44dd,	// (0x0007269a) main_touch_calib_pane_t1

0x44f7,	// (0x000726b4) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0007d917) main_touch_calib_pane_t

0xb306,	// (0x000794c3) mup_progress_pane_cp02

0xb325,	// (0x000794e2) navi_pane_g1

0xb387,	// (0x00079544) navi_pane_mp_t3

0x95a3,	// (0x00077760) main_mp3_pane_ParamLimits

0x38e9,	// (0x00071aa6) navi_pane_ParamLimits

0xce7e,	// (0x0007b03b) main_mp3_pane_g1_ParamLimits

0x43c3,	// (0x00072580) main_mp3_pane_g2_ParamLimits

0x43cf,	// (0x0007258c) main_mp3_pane_g3_ParamLimits

0x43cf,	// (0x0007258c) main_mp3_pane_g3

0x43dd,	// (0x0007259a) main_mp3_pane_g4_ParamLimits

0x43dd,	// (0x0007259a) main_mp3_pane_g4

0xceae,	// (0x0007b06b) main_mp3_pane_g5_ParamLimits

0xceae,	// (0x0007b06b) main_mp3_pane_g5

0xcebc,	// (0x0007b079) main_mp3_pane_g6_ParamLimits

0xcebc,	// (0x0007b079) main_mp3_pane_g6

0xcec9,	// (0x0007b086) main_mp3_pane_g7_ParamLimits

0xcec9,	// (0x0007b086) main_mp3_pane_g7

0xced5,	// (0x0007b092) main_mp3_pane_g8_ParamLimits

0xced5,	// (0x0007b092) main_mp3_pane_g8

0xf733,	// (0x0007d8f0) main_mp3_pane_g_ParamLimits

0x43e9,	// (0x000725a6) main_mp3_pane_t2

0x43f7,	// (0x000725b4) main_mp3_pane_t3

0xceef,	// (0x0007b0ac) main_mp3_pane_t4

0xcefd,	// (0x0007b0ba) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0007d901) main_mp3_pane_t

0xcf0b,	// (0x0007b0c8) mup_progress_pane_cp01

0xf0c2,	// (0x0007d27f) aid_zoom_text_secondary2

0xcd01,	// (0x0007aebe) list_cale_ev2_pane

0xcd09,	// (0x0007aec6) scroll_pane_cp023_ParamLimits

0x4551,	// (0x0007270e) field_cale_ev2_pane_ParamLimits

0x4551,	// (0x0007270e) field_cale_ev2_pane

0x4575,	// (0x00072732) field_cale_ev2_pane_g1_ParamLimits

0x4575,	// (0x00072732) field_cale_ev2_pane_g1

0x4581,	// (0x0007273e) field_cale_ev2_pane_g2_ParamLimits

0x4581,	// (0x0007273e) field_cale_ev2_pane_g2

0x4599,	// (0x00072756) field_cale_ev2_pane_g3_ParamLimits

0x4599,	// (0x00072756) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0007d922) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0007d922) field_cale_ev2_pane_g

0x45b1,	// (0x0007276e) field_cale_ev2_pane_t1_ParamLimits

0x45b1,	// (0x0007276e) field_cale_ev2_pane_t1

0x45c8,	// (0x00072785) field_cale_ev2_pane_t2_ParamLimits

0x45c8,	// (0x00072785) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0007d92b) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0007d92b) field_cale_ev2_pane_t

0x2d6a,	// (0x00070f27) main_postcard_pane_g5_ParamLimits

0x2d6a,	// (0x00070f27) main_postcard_pane_g5

0x2d80,	// (0x00070f3d) main_postcard_pane_g6_ParamLimits

0x2d80,	// (0x00070f3d) main_postcard_pane_g6

0x0c28,	// (0x0006ede5) camera2_autofocus_pane_cp_ParamLimits

0x0c28,	// (0x0006ede5) camera2_autofocus_pane_cp

0x95a3,	// (0x00077760) main_mup3_pane

0x45fd,	// (0x000727ba) main_mup3_pane_g1_ParamLimits

0x45fd,	// (0x000727ba) main_mup3_pane_g1

0x461f,	// (0x000727dc) main_mup3_pane_g2_ParamLimits

0x461f,	// (0x000727dc) main_mup3_pane_g2

0x46a0,	// (0x0007285d) main_mup3_pane_g3_ParamLimits

0x46a0,	// (0x0007285d) main_mup3_pane_g3

0x46e8,	// (0x000728a5) main_mup3_pane_g4_ParamLimits

0x46e8,	// (0x000728a5) main_mup3_pane_g4

0x472e,	// (0x000728eb) main_mup3_pane_g5_ParamLimits

0x472e,	// (0x000728eb) main_mup3_pane_g5

0x4776,	// (0x00072933) main_mup3_pane_g6_ParamLimits

0x4776,	// (0x00072933) main_mup3_pane_g6

0xcf13,	// (0x0007b0d0) main_mup3_pane_g7_ParamLimits

0xcf13,	// (0x0007b0d0) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0007d93b) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0007d93b) main_mup3_pane_g

0x47f6,	// (0x000729b3) main_mup3_pane_t1_ParamLimits

0x47f6,	// (0x000729b3) main_mup3_pane_t1

0x4864,	// (0x00072a21) main_mup3_pane_t2_ParamLimits

0x4864,	// (0x00072a21) main_mup3_pane_t2

0x493a,	// (0x00072af7) main_mup3_pane_t4_ParamLimits

0x493a,	// (0x00072af7) main_mup3_pane_t4

0x4998,	// (0x00072b55) main_mup3_pane_t5_ParamLimits

0x4998,	// (0x00072b55) main_mup3_pane_t5

0x4a52,	// (0x00072c0f) main_mup3_pane_t6_ParamLimits

0x4a52,	// (0x00072c0f) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0007d94c) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0007d94c) main_mup3_pane_t

0x4b0a,	// (0x00072cc7) mup3_progress_pane_ParamLimits

0x4b0a,	// (0x00072cc7) mup3_progress_pane

0x4b9c,	// (0x00072d59) popup_mup3_control_window_ParamLimits

0x4b9c,	// (0x00072d59) popup_mup3_control_window

0xcf21,	// (0x0007b0de) popup_mup3_text_window

0x4bd2,	// (0x00072d8f) mup3_progress_pane_t1

0x4bf0,	// (0x00072dad) mup3_progress_pane_t2

0xcf29,	// (0x0007b0e6) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0007d959) mup3_progress_pane_t

0xcf46,	// (0x0007b103) mup_progress_pane_cp03

0x954a,	// (0x00077707) bg_tb_trans_pane_cp04

0x4c0e,	// (0x00072dcb) mup3_volume_pane

0x4c16,	// (0x00072dd3) popup_mup3_control_window_g1

0x4c1f,	// (0x00072ddc) mup3_volume_pane_g1

0x4c28,	// (0x00072de5) mup3_volume_pane_g2

0x4c31,	// (0x00072dee) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0007d960) mup3_volume_pane_g

0x954a,	// (0x00077707) bg_tb_trans_pane_cp03

0xcf56,	// (0x0007b113) popup_mup3_text_window_g1

0xcf5e,	// (0x0007b11b) popup_mup3_text_window_t1

0xa921,	// (0x00078ade) list_calc_item_pane_g1_ParamLimits

0xc9cb,	// (0x0007ab88) mup_volume_pane_cp_g1

0x4511,	// (0x000726ce) main_touch_calib_pane_t3

0x4525,	// (0x000726e2) main_touch_calib_pane_t4

0x453b,	// (0x000726f8) main_touch_calib_pane_t5

0x9554,	// (0x00077711) aid_cell_size_toolbar2

0x955c,	// (0x00077719) aid_popup3_width_pane

0xfc75,	// (0x0006de32) aid_zoom_text_msg_primary

0x0c05,	// (0x0006edc2) vorec_t7

0xa8e5,	// (0x00078aa2) bg_calc_paper_pane_g1_ParamLimits

0xa8f1,	// (0x00078aae) bg_calc_paper_pane_g2_ParamLimits

0xa8fd,	// (0x00078aba) bg_calc_paper_pane_g3_ParamLimits

0xa909,	// (0x00078ac6) bg_calc_paper_pane_g4_ParamLimits

0xa915,	// (0x00078ad2) bg_calc_paper_pane_g5_ParamLimits

0x023b,	// (0x0006e3f8) bg_calc_paper_pane_g6_ParamLimits

0x024e,	// (0x0006e40b) bg_calc_paper_pane_g7_ParamLimits

0x0261,	// (0x0006e41e) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0007d315) bg_calc_paper_pane_g_ParamLimits

0x0272,	// (0x0006e42f) calc_bg_paper_pane_g9_ParamLimits

0x0d8a,	// (0x0006ef47) image_qvga_pane_ParamLimits

0x0d8a,	// (0x0006ef47) image_qvga_pane

0x9c1f,	// (0x00077ddc) bg_popup_sub_pane_cp04_ParamLimits

0xb5de,	// (0x0007979b) popup_mup_playback_window_g1_ParamLimits

0xb5ea,	// (0x000797a7) popup_mup_playback_window_t1_ParamLimits

0xb5ff,	// (0x000797bc) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0007d69f) popup_mup_playback_window_t_ParamLimits

0x4005,	// (0x000721c2) main_mup2_pane_g3_ParamLimits

0x4005,	// (0x000721c2) main_mup2_pane_g3

0x116c,	// (0x0006f329) popup_toolbar_window_cp04

0xb9fa,	// (0x00079bb7) popup_call2_audio_second_window_g3_ParamLimits

0xb9fa,	// (0x00079bb7) popup_call2_audio_second_window_g3

0xbe3d,	// (0x00079ffa) popup_call2_audio_first_window_g4_ParamLimits

0xbe3d,	// (0x00079ffa) popup_call2_audio_first_window_g4

0xc4bc,	// (0x0007a679) popup_call2_audio_in_window_g4_ParamLimits

0xc4bc,	// (0x0007a679) popup_call2_audio_in_window_g4

0x2eaf,	// (0x0007106c) aid_area_sk_bg_cut_ParamLimits

0x2eaf,	// (0x0007106c) aid_area_sk_bg_cut

0xb614,	// (0x000797d1) aid_area_sk_bg_cut_2_ParamLimits

0xb614,	// (0x000797d1) aid_area_sk_bg_cut_2

0x4311,	// (0x000724ce) aid_placing_details_win

0x4319,	// (0x000724d6) aid_placing_details_win_2

0xcdc0,	// (0x0007af7d) camera2_autofocus_pane_g1_ParamLimits

0xfe1e,	// (0x0006dfdb) popup_fixed_preview_cale_window_ParamLimits

0xfe1e,	// (0x0006dfdb) popup_fixed_preview_cale_window

0xb3ce,	// (0x0007958b) navi_slider_pane_g3

0xb3d7,	// (0x00079594) navi_slider_pane_g4

0xb3e0,	// (0x0007959d) navi_slider_pane_g5

0xb3ce,	// (0x0007958b) navi_slider_pane_g6

0x9e1c,	// (0x00077fd9) navi_slider_pane_g7

0xb503,	// (0x000796c0) mup_scale_pane_g3

0xb50c,	// (0x000796c9) mup_scale_pane_g4

0xb515,	// (0x000796d2) mup_scale_pane_g5

0x2b82,	// (0x00070d3f) mup_scale_pane_g6

0x2b8b,	// (0x00070d48) mup_scale_pane_g7

0xb3ce,	// (0x0007958b) cams2_slider_pane_g3

0xca4d,	// (0x0007ac0a) cams2_slider_pane_g4

0x9f40,	// (0x000780fd) cams2_slider_pane_g5

0xb3ce,	// (0x0007958b) cams2_slider_pane_g6

0x9f48,	// (0x00078105) cams2_slider_pane_g7

0xcc7e,	// (0x0007ae3b) camera2_autofocus_pane_cp_g1

0xc821,	// (0x0007a9de) bg_popup_preview_window_pane_cp02_ParamLimits

0xc821,	// (0x0007a9de) bg_popup_preview_window_pane_cp02

0xcf6c,	// (0x0007b129) list_fp_cale_pane_ParamLimits

0xcf6c,	// (0x0007b129) list_fp_cale_pane

0xcf78,	// (0x0007b135) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf78,	// (0x0007b135) popup_fixed_preview_cale_window_t1

0x4c3a,	// (0x00072df7) popup_fixed_preview_cale_window_t2_ParamLimits

0x4c3a,	// (0x00072df7) popup_fixed_preview_cale_window_t2

0x4c4f,	// (0x00072e0c) popup_fixed_preview_cale_window_t3_ParamLimits

0x4c4f,	// (0x00072e0c) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0007d967) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0007d967) popup_fixed_preview_cale_window_t

0x4c64,	// (0x00072e21) list_single_fp_cale_pane_ParamLimits

0x4c64,	// (0x00072e21) list_single_fp_cale_pane

0xcf9e,	// (0x0007b15b) list_single_fp_cale_pane_g1_ParamLimits

0xcf9e,	// (0x0007b15b) list_single_fp_cale_pane_g1

0xcfaa,	// (0x0007b167) list_single_fp_cale_pane_g2_ParamLimits

0xcfaa,	// (0x0007b167) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0007d96e) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0007d96e) list_single_fp_cale_pane_g

0xcfc3,	// (0x0007b180) list_single_fp_cale_pane_t1_ParamLimits

0xcfc3,	// (0x0007b180) list_single_fp_cale_pane_t1

0xcfd5,	// (0x0007b192) list_single_fp_cale_pane_t2_ParamLimits

0xcfd5,	// (0x0007b192) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0007d975) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0007d975) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x954a,	// (0x00077707) main_dialer_pane

0x4c79,	// (0x00072e36) aid_cell_size_keypad

0x4c83,	// (0x00072e40) dialer_ne_pane

0x4c8d,	// (0x00072e4a) grid_dialer_command_1_pane

0x4c95,	// (0x00072e52) grid_dialer_command_2_pane

0x4c9d,	// (0x00072e5a) grid_dialer_keypad_pane

0x4caf,	// (0x00072e6c) bg_popup_call_pane_cp06_ParamLimits

0x4caf,	// (0x00072e6c) bg_popup_call_pane_cp06

0x4cbb,	// (0x00072e78) dialer_ne_clear_pane_ParamLimits

0x4cbb,	// (0x00072e78) dialer_ne_clear_pane

0xd008,	// (0x0007b1c5) dialer_ne_pane_g1

0xd010,	// (0x0007b1cd) dialer_ne_pane_t1_ParamLimits

0xd010,	// (0x0007b1cd) dialer_ne_pane_t1

0x4cc7,	// (0x00072e84) dialer_ne_pane_t2_ParamLimits

0x4cc7,	// (0x00072e84) dialer_ne_pane_t2

0x4cf1,	// (0x00072eae) dialer_ne_pane_t3_ParamLimits

0x4cf1,	// (0x00072eae) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0007d97a) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0007d97a) dialer_ne_pane_t

0x4d21,	// (0x00072ede) dialer_ne_pane_t3_copy1_ParamLimits

0x4d21,	// (0x00072ede) dialer_ne_pane_t3_copy1

0x4d50,	// (0x00072f0d) cell_dialer_keypad_pane_ParamLimits

0x4d50,	// (0x00072f0d) cell_dialer_keypad_pane

0x4d67,	// (0x00072f24) cell_dialer_command_1_pane_ParamLimits

0x4d67,	// (0x00072f24) cell_dialer_command_1_pane

0x4d7d,	// (0x00072f3a) cell_dialer_command_2_pane_ParamLimits

0x4d7d,	// (0x00072f3a) cell_dialer_command_2_pane

0xd022,	// (0x0007b1df) bg_button_pane_cp02_ParamLimits

0xd022,	// (0x0007b1df) bg_button_pane_cp02

0x4d8c,	// (0x00072f49) cell_dialer_keypad_pane_g1_ParamLimits

0x4d8c,	// (0x00072f49) cell_dialer_keypad_pane_g1

0xd022,	// (0x0007b1df) bg_button_pane_cp03_ParamLimits

0xd022,	// (0x0007b1df) bg_button_pane_cp03

0x4da1,	// (0x00072f5e) cell_dialer_command_1_pane_g1_ParamLimits

0x4da1,	// (0x00072f5e) cell_dialer_command_1_pane_g1

0xd02e,	// (0x0007b1eb) bg_button_pane_cp04

0x4db5,	// (0x00072f72) cell_dialer_command_2_pane_g1

0xaa8f,	// (0x00078c4c) bg_button_pane_cp06

0xd036,	// (0x0007b1f3) dialer_ne_clear_pane_g1

0x2654,	// (0x00070811) navi_pane_g2

0x2682,	// (0x0007083f) navi_pane_g3

0x0002,

0xf3e5,	// (0x0007d5a2) navi_pane_g

0x26ad,	// (0x0007086a) navi_pane_mv_g2

0x26d4,	// (0x00070891) navi_pane_mv_g5

0x26dc,	// (0x00070899) navi_pane_mv_t1

0xa8d9,	// (0x00078a96) main_clock2_pane

0x4e00,	// (0x00072fbd) main_clock2_list_pane_ParamLimits

0x4e00,	// (0x00072fbd) main_clock2_list_pane

0x4e38,	// (0x00072ff5) main_clock2_pane_t1_ParamLimits

0x4e38,	// (0x00072ff5) main_clock2_pane_t1

0x4e74,	// (0x00073031) main_clock2_pane_t2_ParamLimits

0x4e74,	// (0x00073031) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0007d986) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0007d986) main_clock2_pane_t

0x4f14,	// (0x000730d1) popup_clock_analogue_window_cp03_ParamLimits

0x4f14,	// (0x000730d1) popup_clock_analogue_window_cp03

0x4f3b,	// (0x000730f8) popup_clock_digital_window_cp02_ParamLimits

0x4f3b,	// (0x000730f8) popup_clock_digital_window_cp02

0x4fb4,	// (0x00073171) main_clock2_list_single_pane_ParamLimits

0x4fb4,	// (0x00073171) main_clock2_list_single_pane

0xaa8f,	// (0x00078c4c) list_highlight_pane_cp05

0xd072,	// (0x0007b22f) main_clock2_list_single_pane_t1

0x116c,	// (0x0006f329) popup_toolbar_window_cp04_ParamLimits

0x4380,	// (0x0007253d) camera2_autofocus_pane_g2_ParamLimits

0x4380,	// (0x0007253d) camera2_autofocus_pane_g2

0x438c,	// (0x00072549) camera2_autofocus_pane_g3_ParamLimits

0x438c,	// (0x00072549) camera2_autofocus_pane_g3

0x4398,	// (0x00072555) camera2_autofocus_pane_g4_ParamLimits

0x4398,	// (0x00072555) camera2_autofocus_pane_g4

0x43a4,	// (0x00072561) camera2_autofocus_pane_g5_ParamLimits

0x43a4,	// (0x00072561) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0007d8ca) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0007d8ca) camera2_autofocus_pane_g

0x45dd,	// (0x0007279a) camera2_autofocus_pane_cp_g2

0x45e5,	// (0x000727a2) camera2_autofocus_pane_cp_g3

0x45ed,	// (0x000727aa) camera2_autofocus_pane_cp_g4

0x45f5,	// (0x000727b2) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0007d930) camera2_autofocus_pane_cp_g

0x4ca7,	// (0x00072e64) popup_dialer_spcha_window

0x954a,	// (0x00077707) bg_popup_sub_pane_cp07

0xd080,	// (0x0007b23d) list_spcha_pane

0xd088,	// (0x0007b245) list_single_spcha_pane_ParamLimits

0xd088,	// (0x0007b245) list_single_spcha_pane

0x954a,	// (0x00077707) list_highlight_pane_cp06

0xd099,	// (0x0007b256) list_single_spcha_pane_t1

0xc266,	// (0x0007a423) popup_call2_audio_out_window_g4_ParamLimits

0xc266,	// (0x0007a423) popup_call2_audio_out_window_g4

0x954a,	// (0x00077707) main_imed2_pane

0xc859,	// (0x0007aa16) popup_imed_adjust2_window

0x3732,	// (0x000718ef) popup_imed_trans_window_ParamLimits

0x3732,	// (0x000718ef) popup_imed_trans_window

0xcab6,	// (0x0007ac73) popup_blid_sat_info2_window_t1

0xcac4,	// (0x0007ac81) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0007d85f) popup_blid_sat_info2_window_t

0x506a,	// (0x00073227) aid_size_cell_colour_35

0x508a,	// (0x00073247) aid_size_cell_colour_112

0x50aa,	// (0x00073267) aid_size_cell_effect

0xc82d,	// (0x0007a9ea) bg_tb_trans_pane_cp02

0xaf25,	// (0x000790e2) heading_imed_pane

0x50ca,	// (0x00073287) listscroll_imed_pane

0xd0a7,	// (0x0007b264) heading_imed_pane_g1

0xd0af,	// (0x0007b26c) heading_imed_pane_t1

0xd0bd,	// (0x0007b27a) grid_imed_colour_35_pane_ParamLimits

0xd0bd,	// (0x0007b27a) grid_imed_colour_35_pane

0x50d6,	// (0x00073293) grid_imed_effect_pane

0xd0d9,	// (0x0007b296) list_imed_aspect_pane

0x50eb,	// (0x000732a8) scroll_pane_cp027_ParamLimits

0x50eb,	// (0x000732a8) scroll_pane_cp027

0x50fc,	// (0x000732b9) cell_imed_effect_pane_ParamLimits

0x50fc,	// (0x000732b9) cell_imed_effect_pane

0xd0e1,	// (0x0007b29e) cell_imed_colour_pane_ParamLimits

0xd0e1,	// (0x0007b29e) cell_imed_colour_pane

0xd12b,	// (0x0007b2e8) cell_imed_colour_pane_g1_ParamLimits

0xd12b,	// (0x0007b2e8) cell_imed_colour_pane_g1

0xd13c,	// (0x0007b2f9) hgihlgiht_grid_pane_cp016_ParamLimits

0xd13c,	// (0x0007b2f9) hgihlgiht_grid_pane_cp016

0x5127,	// (0x000732e4) cell_imed_effect_pane_g1

0x512f,	// (0x000732ec) grid_highlight_pane_cp017

0xd14d,	// (0x0007b30a) list_imed_single_pane_ParamLimits

0xd14d,	// (0x0007b30a) list_imed_single_pane

0x954a,	// (0x00077707) list_highlight_pane_cp07

0xd161,	// (0x0007b31e) list_imed_aspect_pane_comp1_t1

0xc82d,	// (0x0007a9ea) bg_tb_trans_pane_cp05

0xd183,	// (0x0007b340) popup_imed_adjust2_window_g1

0xd1aa,	// (0x0007b367) popup_imed_adjust2_window_t1

0xd1c2,	// (0x0007b37f) slider_imed_adjust_pane

0xd1d6,	// (0x0007b393) slider_imed_adjust_pane_g1

0xd1e6,	// (0x0007b3a3) slider_imed_adjust_pane_g2

0xd1f6,	// (0x0007b3b3) slider_imed_adjust_pane_g3

0xd207,	// (0x0007b3c4) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0007d9a3) slider_imed_adjust_pane_g

0x5138,	// (0x000732f5) aid_size_cell_clipart2

0x5144,	// (0x00073301) grid_imed_clipart_pane

0xd218,	// (0x0007b3d5) scroll_pane_cp031

0x514e,	// (0x0007330b) cell_imed_clipart_pane_ParamLimits

0x514e,	// (0x0007330b) cell_imed_clipart_pane

0x516b,	// (0x00073328) cell_imed_clipart_pane_g1

0x954a,	// (0x00077707) grid_highlight_pane_cp014

0x4e15,	// (0x00072fd2) main_clock2_pane_g1_ParamLimits

0x4e15,	// (0x00072fd2) main_clock2_pane_g1

0x4f5b,	// (0x00073118) aid_call2_pane_cp10

0x4f6d,	// (0x0007312a) aid_call_pane_cp10

0xb2fa,	// (0x000794b7) popup_clock_analogue_window_cp10_g1

0xb2fa,	// (0x000794b7) popup_clock_analogue_window_cp10_g2

0x4f7f,	// (0x0007313c) popup_clock_analogue_window_cp10_g3

0x4f7f,	// (0x0007313c) popup_clock_analogue_window_cp10_g4

0xb2fa,	// (0x000794b7) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0007d991) popup_clock_analogue_window_cp10_g

0x4f95,	// (0x00073152) popup_clock_analogue_window_cp10_t1

0x4fc6,	// (0x00073183) clock_digital_number_pane_cp10_ParamLimits

0x4fc6,	// (0x00073183) clock_digital_number_pane_cp10

0x4fe0,	// (0x0007319d) clock_digital_number_pane_cp11_ParamLimits

0x4fe0,	// (0x0007319d) clock_digital_number_pane_cp11

0x4ffa,	// (0x000731b7) clock_digital_number_pane_cp12_ParamLimits

0x4ffa,	// (0x000731b7) clock_digital_number_pane_cp12

0x5014,	// (0x000731d1) clock_digital_number_pane_cp13_ParamLimits

0x5014,	// (0x000731d1) clock_digital_number_pane_cp13

0x502e,	// (0x000731eb) clock_digital_separator_pane_cp10_ParamLimits

0x502e,	// (0x000731eb) clock_digital_separator_pane_cp10

0x5048,	// (0x00073205) popup_clock_digital_window_cp02_t1_ParamLimits

0x5048,	// (0x00073205) popup_clock_digital_window_cp02_t1

0x9c17,	// (0x00077dd4) clock_digital_number_pane_cp10_g1

0x9c17,	// (0x00077dd4) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0007d9ac) clock_digital_number_pane_cp10_g

0x9c17,	// (0x00077dd4) clock_digital_separator_pane_cp10_g1

0x9c17,	// (0x00077dd4) clock_digital_separator_pane_g2_cp10

0xb395,	// (0x00079552) navi_pane_vded_g4

0xb39e,	// (0x0007955b) navi_pane_vded_g5

0xb3a7,	// (0x00079564) navi_pane_vded_t1

0x954a,	// (0x00077707) main_vded_pane

0x5174,	// (0x00073331) main_vded_pane_g1

0x5180,	// (0x0007333d) main_vded_pane_g2

0x518c,	// (0x00073349) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0007d9b1) main_vded_pane_g

0x5198,	// (0x00073355) main_vded_pane_t1

0x51a6,	// (0x00073363) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0007d9b8) main_vded_pane_t

0x51b4,	// (0x00073371) vded_slider_pane

0x51be,	// (0x0007337b) vded_video_pane

0xd220,	// (0x0007b3dd) vded_video_pane_g1

0x51c8,	// (0x00073385) vded_video_pane_g2

0xcc7e,	// (0x0007ae3b) vded_video_pane_g3

0x0002,

0xf800,	// (0x0007d9bd) vded_video_pane_g

0xd22a,	// (0x0007b3e7) vded_slider_pane_g1

0xc9cb,	// (0x0007ab88) vded_slider_pane_g2

0xd233,	// (0x0007b3f0) vded_slider_pane_g3

0xd23c,	// (0x0007b3f9) vded_slider_pane_g4

0xd245,	// (0x0007b402) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0007d9c4) vded_slider_pane_g

0x4b86,	// (0x00072d43) mup3_rocker_pane_ParamLimits

0x4b86,	// (0x00072d43) mup3_rocker_pane

0x51d1,	// (0x0007338e) mup3_control_keys_pane_g1

0x51d9,	// (0x00073396) mup3_control_keys_pane_g2

0x51e1,	// (0x0007339e) mup3_control_keys_pane_g3

0x51e9,	// (0x000733a6) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0007d9cf) mup3_control_keys_pane_g

0xfe55,	// (0x0006e012) popup_toolbar2_fixed_window_cp01_ParamLimits

0xfe55,	// (0x0006e012) popup_toolbar2_fixed_window_cp01

0x4bbc,	// (0x00072d79) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4bbc,	// (0x00072d79) popup_toolbar2_fixed_window_cp02

0xbb6c,	// (0x00079d29) popup_call2_audio_second_window_t4_ParamLimits

0xbb6c,	// (0x00079d29) popup_call2_audio_second_window_t4

0xc0d3,	// (0x0007a290) popup_call2_audio_first_window_t6_ParamLimits

0xc0d3,	// (0x0007a290) popup_call2_audio_first_window_t6

0xc369,	// (0x0007a526) popup_call2_audio_out_window_t6_ParamLimits

0xc369,	// (0x0007a526) popup_call2_audio_out_window_t6

0x954a,	// (0x00077707) main_vitu_pane

0x51f9,	// (0x000733b6) aid_size_cell_itu_ParamLimits

0x51f9,	// (0x000733b6) aid_size_cell_itu

0x95a3,	// (0x00077760) bg_popup_window_pane_cp08_ParamLimits

0x95a3,	// (0x00077760) bg_popup_window_pane_cp08

0x520f,	// (0x000733cc) field_vitu_entry_pane_ParamLimits

0x520f,	// (0x000733cc) field_vitu_entry_pane

0x5226,	// (0x000733e3) grid_vitu_function_pane_ParamLimits

0x5226,	// (0x000733e3) grid_vitu_function_pane

0x5241,	// (0x000733fe) grid_vitu_itu_pane_ParamLimits

0x5241,	// (0x000733fe) grid_vitu_itu_pane

0x525f,	// (0x0007341c) cell_vitu_itu_pane_ParamLimits

0x525f,	// (0x0007341c) cell_vitu_itu_pane

0x5285,	// (0x00073442) cell_vitu_function_pane_ParamLimits

0x5285,	// (0x00073442) cell_vitu_function_pane

0x95a3,	// (0x00077760) bg_popup_sub_pane_cp08_ParamLimits

0x95a3,	// (0x00077760) bg_popup_sub_pane_cp08

0x52a0,	// (0x0007345d) field_vitu_entry_pane_t1_ParamLimits

0x52a0,	// (0x0007345d) field_vitu_entry_pane_t1

0xd266,	// (0x0007b423) field_vitu_entry_pane_t2_ParamLimits

0xd266,	// (0x0007b423) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0007d9dd) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0007d9dd) field_vitu_entry_pane_t

0xd283,	// (0x0007b440) bg_button_pane_cp05_ParamLimits

0xd283,	// (0x0007b440) bg_button_pane_cp05

0x52c0,	// (0x0007347d) cell_vitu_itu_pane_g1

0x52d8,	// (0x00073495) cell_vitu_itu_pane_t1_ParamLimits

0x52d8,	// (0x00073495) cell_vitu_itu_pane_t1

0x52ea,	// (0x000734a7) cell_vitu_itu_pane_t2_ParamLimits

0x52ea,	// (0x000734a7) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0007d9e2) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0007d9e2) cell_vitu_itu_pane_t

0xd291,	// (0x0007b44e) bg_button_pane_cp07

0x531f,	// (0x000734dc) cell_vitu_function_pane_g1

0x9ca6,	// (0x00077e63) main_calc_pane_g1

0xfc69,	// (0x0006de26) aid_visual_content_pane

0x954a,	// (0x00077707) main_vradio_pane

0x5328,	// (0x000734e5) main_vradio_pane_g1_ParamLimits

0x5328,	// (0x000734e5) main_vradio_pane_g1

0xd29b,	// (0x0007b458) main_vradio_pane_g2_ParamLimits

0xd29b,	// (0x0007b458) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0007d9e9) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0007d9e9) main_vradio_pane_g

0x533f,	// (0x000734fc) main_vradio_pane_t1_ParamLimits

0x533f,	// (0x000734fc) main_vradio_pane_t1

0x5354,	// (0x00073511) main_vradio_pane_t2_ParamLimits

0x5354,	// (0x00073511) main_vradio_pane_t2

0xd2a8,	// (0x0007b465) main_vradio_pane_t3_ParamLimits

0xd2a8,	// (0x0007b465) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0007d9ee) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0007d9ee) main_vradio_pane_t

0x5369,	// (0x00073526) vradio_rocker_control_pane_ParamLimits

0x5369,	// (0x00073526) vradio_rocker_control_pane

0x537b,	// (0x00073538) vradio_station_info_pane_ParamLimits

0x537b,	// (0x00073538) vradio_station_info_pane

0xd2bc,	// (0x0007b479) vradio_frequency_info_pane_ParamLimits

0xd2bc,	// (0x0007b479) vradio_frequency_info_pane

0xcc7e,	// (0x0007ae3b) vradio_station_info_pane_g1

0xd2cb,	// (0x0007b488) vradio_station_info_pane_t1_ParamLimits

0xd2cb,	// (0x0007b488) vradio_station_info_pane_t1

0xd2ed,	// (0x0007b4aa) vradio_station_info_pane_t2_ParamLimits

0xd2ed,	// (0x0007b4aa) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0007d9f5) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0007d9f5) vradio_station_info_pane_t

0xd2ff,	// (0x0007b4bc) vradio_tuning_pane

0xd307,	// (0x0007b4c4) vradio_rocker_control_pane_g1

0xd30f,	// (0x0007b4cc) vradio_rocker_control_pane_g2

0xd317,	// (0x0007b4d4) vradio_rocker_control_pane_g3

0xd31f,	// (0x0007b4dc) vradio_rocker_control_pane_g4

0xd327,	// (0x0007b4e4) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0007d9fa) vradio_rocker_control_pane_g

0x538b,	// (0x00073548) vradio_frequency_info_pane_g1

0xd32f,	// (0x0007b4ec) vradio_frequency_info_pane_t1_ParamLimits

0xd32f,	// (0x0007b4ec) vradio_frequency_info_pane_t1

0x5395,	// (0x00073552) vradio_tuning_pane_g1

0x53a0,	// (0x0007355d) vradio_tuning_pane_t1

0x9570,	// (0x0007772d) area_side_right_pane_ParamLimits

0x9570,	// (0x0007772d) area_side_right_pane

0xc7e8,	// (0x0007a9a5) status_small_pane_g1

0xc7f0,	// (0x0007a9ad) status_small_pane_g2

0xc7f9,	// (0x0007a9b6) status_small_pane_g3

0xc802,	// (0x0007a9bf) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0007d7b5) status_small_pane_g

0xc80b,	// (0x0007a9c8) status_small_pane_t1

0x954a,	// (0x00077707) main_video3_pane

0xd343,	// (0x0007b500) cams_zoom_vslider_pane

0xd34b,	// (0x0007b508) image3_wide_pane_ParamLimits

0xd34b,	// (0x0007b508) image3_wide_pane

0xd365,	// (0x0007b522) image3_wide_small_pane

0xd371,	// (0x0007b52e) main_video3_pane_g1_ParamLimits

0xd371,	// (0x0007b52e) main_video3_pane_g1

0xd38d,	// (0x0007b54a) main_video3_pane_g2_ParamLimits

0xd38d,	// (0x0007b54a) main_video3_pane_g2

0x0001,

0xf848,	// (0x0007da05) main_video3_pane_g_ParamLimits

0xf848,	// (0x0007da05) main_video3_pane_g

0xd3a9,	// (0x0007b566) main_video3_pane_t1_ParamLimits

0xd3a9,	// (0x0007b566) main_video3_pane_t1

0xd3d4,	// (0x0007b591) main_video3_pane_t2_ParamLimits

0xd3d4,	// (0x0007b591) main_video3_pane_t2

0xd401,	// (0x0007b5be) main_video3_pane_t3_ParamLimits

0xd401,	// (0x0007b5be) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0007da0a) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0007da0a) main_video3_pane_t

0xd42e,	// (0x0007b5eb) cams_zoom_vslider_pane_g1

0xd437,	// (0x0007b5f4) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0007da11) cams_zoom_vslider_pane_g

0xd43f,	// (0x0007b5fc) small_slider_vertical_pane

0xcc7e,	// (0x0007ae3b) small_slider_vertical_pane_g1

0xcc7e,	// (0x0007ae3b) small_slider_vertical_pane_g2

0xd447,	// (0x0007b604) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0007da16) small_slider_vertical_pane_g

0x954a,	// (0x00077707) main_hwr_training_pane

0xd450,	// (0x0007b60d) hwr_training_instruct_pane_ParamLimits

0xd450,	// (0x0007b60d) hwr_training_instruct_pane

0x53af,	// (0x0007356c) hwr_training_navi_pane_ParamLimits

0x53af,	// (0x0007356c) hwr_training_navi_pane

0x53ce,	// (0x0007358b) hwr_training_write_pane_ParamLimits

0x53ce,	// (0x0007358b) hwr_training_write_pane

0x954a,	// (0x00077707) bg_frame_shadow_pane

0xd487,	// (0x0007b644) hwr_training_write_pane_g1

0xd48f,	// (0x0007b64c) hwr_training_write_pane_g2

0xd497,	// (0x0007b654) hwr_training_write_pane_g3

0xd49f,	// (0x0007b65c) hwr_training_write_pane_g4

0xd4a7,	// (0x0007b664) hwr_training_write_pane_g5

0xd4af,	// (0x0007b66c) hwr_training_write_pane_g6

0xd4b7,	// (0x0007b674) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0007da1d) hwr_training_write_pane_g

0x9f5d,	// (0x0007811a) hwr_training_navi_pane_g1_ParamLimits

0x9f5d,	// (0x0007811a) hwr_training_navi_pane_g1

0x9f6f,	// (0x0007812c) hwr_training_navi_pane_g2_ParamLimits

0x9f6f,	// (0x0007812c) hwr_training_navi_pane_g2

0x9f81,	// (0x0007813e) hwr_training_navi_pane_g3_ParamLimits

0x9f81,	// (0x0007813e) hwr_training_navi_pane_g3

0x9f91,	// (0x0007814e) hwr_training_navi_pane_g4_ParamLimits

0x9f91,	// (0x0007814e) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0007da2c) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0007da2c) hwr_training_navi_pane_g

0x9f9e,	// (0x0007815b) hwr_training_navi_pane_t1

0x5416,	// (0x000735d3) list_single_hwr_training_instruct_pane_ParamLimits

0x5416,	// (0x000735d3) list_single_hwr_training_instruct_pane

0xd4bf,	// (0x0007b67c) list_single_hwr_training_instruct_pane_t1

0xcbbe,	// (0x0007ad7b) bg_frame_shadow_pane_g1

0xd4ce,	// (0x0007b68b) bg_frame_shadow_pane_g2

0xd4d6,	// (0x0007b693) bg_frame_shadow_pane_g3

0xd4de,	// (0x0007b69b) bg_frame_shadow_pane_g4

0xd4e6,	// (0x0007b6a3) bg_frame_shadow_pane_g5

0xd4ee,	// (0x0007b6ab) bg_frame_shadow_pane_g6

0xd4f6,	// (0x0007b6b3) bg_frame_shadow_pane_g7

0xa9a4,	// (0x00078b61) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0007da37) bg_frame_shadow_pane_g

0x954a,	// (0x00077707) main_video_tele_dialer_pane

0x542b,	// (0x000735e8) aid_size_cell_video_keypad_ParamLimits

0x542b,	// (0x000735e8) aid_size_cell_video_keypad

0x5445,	// (0x00073602) grid_video_dialer_keypad_pane_ParamLimits

0x5445,	// (0x00073602) grid_video_dialer_keypad_pane

0x5491,	// (0x0007364e) video_down_pane_cp_ParamLimits

0x5491,	// (0x0007364e) video_down_pane_cp

0x54c1,	// (0x0007367e) cell_video_dialer_keypad_pane_ParamLimits

0x54c1,	// (0x0007367e) cell_video_dialer_keypad_pane

0xd4fe,	// (0x0007b6bb) bg_button_pane_cp08_ParamLimits

0xd4fe,	// (0x0007b6bb) bg_button_pane_cp08

0x54e5,	// (0x000736a2) cell_video_dialer_keypad_pane_g1_ParamLimits

0x54e5,	// (0x000736a2) cell_video_dialer_keypad_pane_g1

0x4b70,	// (0x00072d2d) mup3_rocker2_pane_ParamLimits

0x4b70,	// (0x00072d2d) mup3_rocker2_pane

0xcc7e,	// (0x0007ae3b) mup3_rocker2_pane_g1

0x35ff,	// (0x000717bc) main_dialer2_pane

0x954a,	// (0x00077707) main_mp4_pane

0x9fb4,	// (0x00078171) main_mp4_pane_g1_ParamLimits

0x9fb4,	// (0x00078171) main_mp4_pane_g1

0x9fb4,	// (0x00078171) main_mp4_pane_g2_ParamLimits

0x9fb4,	// (0x00078171) main_mp4_pane_g2

0x5520,	// (0x000736dd) main_mp4_pane_g3_ParamLimits

0x5520,	// (0x000736dd) main_mp4_pane_g3

0x9fc2,	// (0x0007817f) main_mp4_pane_g4_ParamLimits

0x9fc2,	// (0x0007817f) main_mp4_pane_g4

0x9fea,	// (0x000781a7) main_mp4_pane_g5_ParamLimits

0x9fea,	// (0x000781a7) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0007da57) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0007da57) main_mp4_pane_g

0xa03a,	// (0x000781f7) main_mp4_pane_t1_ParamLimits

0xa03a,	// (0x000781f7) main_mp4_pane_t1

0xa096,	// (0x00078253) main_mp4_pane_t2_ParamLimits

0xa096,	// (0x00078253) main_mp4_pane_t2

0xd50a,	// (0x0007b6c7) main_mp4_pane_t3_ParamLimits

0xd50a,	// (0x0007b6c7) main_mp4_pane_t3

0xa0e8,	// (0x000782a5) main_mp4_pane_t4_ParamLimits

0xa0e8,	// (0x000782a5) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0007da64) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0007da64) main_mp4_pane_t

0xa128,	// (0x000782e5) mp4_progress_pane_ParamLimits

0xa128,	// (0x000782e5) mp4_progress_pane

0xa172,	// (0x0007832f) mp4_rocker_pane_ParamLimits

0xa172,	// (0x0007832f) mp4_rocker_pane

0xd532,	// (0x0007b6ef) mp4_progress_pane_t1

0xd54b,	// (0x0007b708) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0007da6d) mp4_progress_pane_t

0xd564,	// (0x0007b721) mup_progress_pane_cp04

0xd570,	// (0x0007b72d) mp4_rocker_pane_g1

0x556a,	// (0x00073727) aid_cell_size_keypad2_ParamLimits

0x556a,	// (0x00073727) aid_cell_size_keypad2

0x5580,	// (0x0007373d) dialer2_ne_pane_ParamLimits

0x5580,	// (0x0007373d) dialer2_ne_pane

0x5598,	// (0x00073755) grid_dialer2_keypad_pane_ParamLimits

0x5598,	// (0x00073755) grid_dialer2_keypad_pane

0xca5d,	// (0x0007ac1a) bg_popup_call_pane_cp07_ParamLimits

0xca5d,	// (0x0007ac1a) bg_popup_call_pane_cp07

0x55b4,	// (0x00073771) dialer2_ne_pane_t1_ParamLimits

0x55b4,	// (0x00073771) dialer2_ne_pane_t1

0x55ef,	// (0x000737ac) cell_dialer2_keypad_pane_ParamLimits

0x55ef,	// (0x000737ac) cell_dialer2_keypad_pane

0xd58c,	// (0x0007b749) bg_button_pane_pane_cp04_ParamLimits

0xd58c,	// (0x0007b749) bg_button_pane_pane_cp04

0x5613,	// (0x000737d0) cell_dialer2_keypad_pane_g1_ParamLimits

0x5613,	// (0x000737d0) cell_dialer2_keypad_pane_g1

0x1053,	// (0x0006f210) aid_placing_vt_set_content_ParamLimits

0x1053,	// (0x0006f210) aid_placing_vt_set_content

0x1077,	// (0x0006f234) aid_placing_vt_set_title_ParamLimits

0x1077,	// (0x0006f234) aid_placing_vt_set_title

0x954a,	// (0x00077707) main_image3_pane

0x56d9,	// (0x00073896) area_side_right_pane_cp01_ParamLimits

0x56d9,	// (0x00073896) area_side_right_pane_cp01

0x9fb4,	// (0x00078171) main_image3_pane_g1_ParamLimits

0x9fb4,	// (0x00078171) main_image3_pane_g1

0x56f2,	// (0x000738af) main_image3_pane_g2_ParamLimits

0x56f2,	// (0x000738af) main_image3_pane_g2

0x571a,	// (0x000738d7) main_image3_pane_g3_ParamLimits

0x571a,	// (0x000738d7) main_image3_pane_g3

0x5744,	// (0x00073901) main_image3_pane_g4_ParamLimits

0x5744,	// (0x00073901) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0007da7c) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0007da7c) main_image3_pane_g

0x576e,	// (0x0007392b) main_image3_pane_t1_ParamLimits

0x576e,	// (0x0007392b) main_image3_pane_t1

0x57c6,	// (0x00073983) main_image3_pane_t2_ParamLimits

0x57c6,	// (0x00073983) main_image3_pane_t2

0x5818,	// (0x000739d5) main_image3_pane_t3_ParamLimits

0x5818,	// (0x000739d5) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0007da85) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0007da85) main_image3_pane_t

0x95a3,	// (0x00077760) grid_sctrl_middle_pane_cp01_ParamLimits

0x95a3,	// (0x00077760) grid_sctrl_middle_pane_cp01

0x58a0,	// (0x00073a5d) cell_sctrl_middle_pane_cp01_ParamLimits

0x58a0,	// (0x00073a5d) cell_sctrl_middle_pane_cp01

0x58bd,	// (0x00073a7a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x58bd,	// (0x00073a7a) cell_sctrl_middle_pane_cp01_g1

0x954a,	// (0x00077707) main_call4_pane

0x58d2,	// (0x00073a8f) aid_size_button_call4_ParamLimits

0x58d2,	// (0x00073a8f) aid_size_button_call4

0x5905,	// (0x00073ac2) call4_windows_pane_ParamLimits

0x5905,	// (0x00073ac2) call4_windows_pane

0x5927,	// (0x00073ae4) grid_call4_button_pane_ParamLimits

0x5927,	// (0x00073ae4) grid_call4_button_pane

0xd598,	// (0x0007b755) call4_windows_conf_pane

0x5952,	// (0x00073b0f) popup_call4_audio_first_window_ParamLimits

0x5952,	// (0x00073b0f) popup_call4_audio_first_window

0x597e,	// (0x00073b3b) popup_call4_audio_second_window_ParamLimits

0x597e,	// (0x00073b3b) popup_call4_audio_second_window

0xd5d5,	// (0x0007b792) popup_call4_audio_wait_window_ParamLimits

0xd5d5,	// (0x0007b792) popup_call4_audio_wait_window

0x5994,	// (0x00073b51) cell_call4_button_pane_ParamLimits

0x5994,	// (0x00073b51) cell_call4_button_pane

0x59bb,	// (0x00073b78) bg_button_pane_cp09_ParamLimits

0x59bb,	// (0x00073b78) bg_button_pane_cp09

0x59c7,	// (0x00073b84) cell_call4_button_pane_g1_ParamLimits

0x59c7,	// (0x00073b84) cell_call4_button_pane_g1

0x59ed,	// (0x00073baa) cell_call4_button_pane_t1_ParamLimits

0x59ed,	// (0x00073baa) cell_call4_button_pane_t1

0xd61d,	// (0x0007b7da) popup_call4_audio_conf_window_ParamLimits

0xd61d,	// (0x0007b7da) popup_call4_audio_conf_window

0x4bd2,	// (0x00072d8f) mup3_progress_pane_t1_ParamLimits

0x4bf0,	// (0x00072dad) mup3_progress_pane_t2_ParamLimits

0xcf29,	// (0x0007b0e6) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0007d959) mup3_progress_pane_t_ParamLimits

0xcf46,	// (0x0007b103) mup_progress_pane_cp03_ParamLimits

0x51f1,	// (0x000733ae) mup3_control_keys_pane_g4_copy1

0xa156,	// (0x00078313) mp4_rocker2_pane_ParamLimits

0xa156,	// (0x00078313) mp4_rocker2_pane

0xd637,	// (0x0007b7f4) mp4_rocker2_pane_g1

0xd63f,	// (0x0007b7fc) mp4_rocker2_pane_g2

0xa1c8,	// (0x00078385) mp4_rocker2_pane_g3

0xa1d0,	// (0x0007838d) mp4_rocker2_pane_g4

0xa1d8,	// (0x00078395) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0007da8e) mp4_rocker2_pane_g

0x954a,	// (0x00077707) main_camera4_pane

0x954a,	// (0x00077707) main_video4_pane

0x545f,	// (0x0007361c) main_video_tele_dialer_pane_t1_ParamLimits

0x545f,	// (0x0007361c) main_video_tele_dialer_pane_t1

0x5478,	// (0x00073635) main_video_tele_dialer_pane_t2_ParamLimits

0x5478,	// (0x00073635) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0007da48) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0007da48) main_video_tele_dialer_pane_t

0x5a2b,	// (0x00073be8) cam4_autofocus_pane_ParamLimits

0x5a2b,	// (0x00073be8) cam4_autofocus_pane

0x5a41,	// (0x00073bfe) cam4_image_uncrop_pane_ParamLimits

0x5a41,	// (0x00073bfe) cam4_image_uncrop_pane

0x5a5a,	// (0x00073c17) cam4_indicators_pane_ParamLimits

0x5a5a,	// (0x00073c17) cam4_indicators_pane

0x5a89,	// (0x00073c46) main_camera4_pane_g1_ParamLimits

0x5a89,	// (0x00073c46) main_camera4_pane_g1

0x5a9b,	// (0x00073c58) main_camera4_pane_g2_ParamLimits

0x5a9b,	// (0x00073c58) main_camera4_pane_g2

0x5aae,	// (0x00073c6b) main_camera4_pane_g3_ParamLimits

0x5aae,	// (0x00073c6b) main_camera4_pane_g3

0x5ac1,	// (0x00073c7e) main_camera4_pane_g4_ParamLimits

0x5ac1,	// (0x00073c7e) main_camera4_pane_g4

0x5ad4,	// (0x00073c91) main_camera4_pane_g5_ParamLimits

0x5ad4,	// (0x00073c91) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0007da99) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0007da99) main_camera4_pane_g

0x5af8,	// (0x00073cb5) main_camera4_pane_t1_ParamLimits

0x5af8,	// (0x00073cb5) main_camera4_pane_t1

0xa1fe,	// (0x000783bb) bg_tb_trans_pane_cp06

0xa214,	// (0x000783d1) cam4_indicators_pane_g1

0xa225,	// (0x000783e2) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0007dab4) cam4_indicators_pane_g

0xa23d,	// (0x000783fa) cam4_indicators_pane_t1

0x5b5c,	// (0x00073d19) main_video4_pane_g1_ParamLimits

0x5b5c,	// (0x00073d19) main_video4_pane_g1

0x5b6b,	// (0x00073d28) main_video4_pane_g2_ParamLimits

0x5b6b,	// (0x00073d28) main_video4_pane_g2

0x5b7a,	// (0x00073d37) main_video4_pane_g3_ParamLimits

0x5b7a,	// (0x00073d37) main_video4_pane_g3

0x5b89,	// (0x00073d46) main_video4_pane_g4_ParamLimits

0x5b89,	// (0x00073d46) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0007dabb) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0007dabb) main_video4_pane_g

0x5ba7,	// (0x00073d64) vid4_indicators_pane_ParamLimits

0x5ba7,	// (0x00073d64) vid4_indicators_pane

0x5bd5,	// (0x00073d92) video4_image_uncrop_cif_pane_ParamLimits

0x5bd5,	// (0x00073d92) video4_image_uncrop_cif_pane

0x5bef,	// (0x00073dac) video4_image_uncrop_nhd_pane_ParamLimits

0x5bef,	// (0x00073dac) video4_image_uncrop_nhd_pane

0x5a41,	// (0x00073bfe) video4_image_uncrop_vga_pane_ParamLimits

0x5a41,	// (0x00073bfe) video4_image_uncrop_vga_pane

0xa261,	// (0x0007841e) bg_tb_trans_pane_cp07

0xa279,	// (0x00078436) vid4_indicators_pane_g1

0xa28f,	// (0x0007844c) vid4_indicators_pane_g2

0xa2a3,	// (0x00078460) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0007dac6) vid4_indicators_pane_g

0xa2d4,	// (0x00078491) vid4_indicators_pane_t1

0x5c05,	// (0x00073dc2) cam4_autofocus_pane_g1

0x5c0d,	// (0x00073dca) cam4_autofocus_pane_g2

0x5c15,	// (0x00073dd2) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0007dad1) cam4_autofocus_pane_g

0x5c1d,	// (0x00073dda) cam4_autofocus_pane_g3_copy1

0x54a5,	// (0x00073662) video_down_pane_cp_t1

0x54b3,	// (0x00073670) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0007da4d) video_down_pane_cp_t

0x95a3,	// (0x00077760) popup_vitu2_window_ParamLimits

0x95a3,	// (0x00077760) popup_vitu2_window

0x5c25,	// (0x00073de2) aid_size_cell2_itu2_ParamLimits

0x5c25,	// (0x00073de2) aid_size_cell2_itu2

0x5c4b,	// (0x00073e08) aid_size_cell_itu2_ParamLimits

0x5c4b,	// (0x00073e08) aid_size_cell_itu2

0x5cab,	// (0x00073e68) bg_popup_window_pane_cp09_ParamLimits

0x5cab,	// (0x00073e68) bg_popup_window_pane_cp09

0x5cb9,	// (0x00073e76) field_vitu2_entry_pane_ParamLimits

0x5cb9,	// (0x00073e76) field_vitu2_entry_pane

0x5ce1,	// (0x00073e9e) grid_vitu2_function_pane_ParamLimits

0x5ce1,	// (0x00073e9e) grid_vitu2_function_pane

0x5d32,	// (0x00073eef) grid_vitu2_itu_pane_ParamLimits

0x5d32,	// (0x00073eef) grid_vitu2_itu_pane

0x5dc6,	// (0x00073f83) cell_vitu2_itu_pane_ParamLimits

0x5dc6,	// (0x00073f83) cell_vitu2_itu_pane

0x5dec,	// (0x00073fa9) cell_vitu2_function_pane_ParamLimits

0x5dec,	// (0x00073fa9) cell_vitu2_function_pane

0xd647,	// (0x0007b804) bg_popup_call_pane_cp08_ParamLimits

0xd647,	// (0x0007b804) bg_popup_call_pane_cp08

0xd65e,	// (0x0007b81b) field_vitu2_entry_pane_g1

0xd66a,	// (0x0007b827) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0007dad8) field_vitu2_entry_pane_g

0x5e30,	// (0x00073fed) field_vitu2_entry_pane_t1_ParamLimits

0x5e30,	// (0x00073fed) field_vitu2_entry_pane_t1

0xa2eb,	// (0x000784a8) field_vitu2_entry_pane_t2_ParamLimits

0xa2eb,	// (0x000784a8) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0007dadf) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0007dadf) field_vitu2_entry_pane_t

0x5e5f,	// (0x0007401c) bg_button_pane_cp010_ParamLimits

0x5e5f,	// (0x0007401c) bg_button_pane_cp010

0xa308,	// (0x000784c5) cell_vitu2_itu_pane_g1

0x5e7b,	// (0x00074038) cell_vitu2_itu_pane_t1_ParamLimits

0x5e7b,	// (0x00074038) cell_vitu2_itu_pane_t1

0xfb41,	// (0x0006dcfe) cell_vitu2_itu_pane_t2_ParamLimits

0xfb41,	// (0x0006dcfe) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0007dae9) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0007dae9) cell_vitu2_itu_pane_t

0xa261,	// (0x0007841e) bg_button_pane_cp011

0x5ed9,	// (0x00074096) cell_vitu2_function_pane_g1

0x954a,	// (0x00077707) main_myfav_hc_pane

0x5868,	// (0x00073a25) popup_image3_note_pane_ParamLimits

0x5868,	// (0x00073a25) popup_image3_note_pane

0x5884,	// (0x00073a41) popup_image3_tool_bar_pane_ParamLimits

0x5884,	// (0x00073a41) popup_image3_tool_bar_pane

0xfbcf,	// (0x0006dd8c) cell_vitu2_itu_pane_t3_ParamLimits

0xfbcf,	// (0x0006dd8c) cell_vitu2_itu_pane_t3

0x954a,	// (0x00077707) bg_popup_trans_pane

0xd68c,	// (0x0007b849) grid_image3_tool_bar_pane

0xd696,	// (0x0007b853) bg_popup_trans_pane_g1

0xacec,	// (0x00078ea9) bg_popup_trans_pane_g2

0xd69e,	// (0x0007b85b) bg_popup_trans_pane_g3

0xd6a6,	// (0x0007b863) bg_popup_trans_pane_g4

0xd6ae,	// (0x0007b86b) bg_popup_trans_pane_g5

0xd6b6,	// (0x0007b873) bg_popup_trans_pane_g6

0xd6be,	// (0x0007b87b) bg_popup_trans_pane_g7

0xd6c6,	// (0x0007b883) bg_popup_trans_pane_g8

0xaccc,	// (0x00078e89) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0007daf0) bg_popup_trans_pane_g

0xd6ce,	// (0x0007b88b) cell_image3_tool_bar_pane_ParamLimits

0xd6ce,	// (0x0007b88b) cell_image3_tool_bar_pane

0xcc7e,	// (0x0007ae3b) cell_image3_tool_bar_pane_g1

0x954a,	// (0x00077707) bg_popup_trans_pane_cp1

0xd6e4,	// (0x0007b8a1) popup_image3_note_pane_t1

0xd6f2,	// (0x0007b8af) popup_image3_note_pane_t2

0xd700,	// (0x0007b8bd) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0007db03) popup_image3_note_pane_t

0xd710,	// (0x0007b8cd) popup_image3_note_pane_t3_copy1

0x5eed,	// (0x000740aa) bg_myfav_hc_instruction_pane_ParamLimits

0x5eed,	// (0x000740aa) bg_myfav_hc_instruction_pane

0x5f05,	// (0x000740c2) cell_myfav_contact_pane_ParamLimits

0x5f05,	// (0x000740c2) cell_myfav_contact_pane

0x5f21,	// (0x000740de) cell_myfav_contact_pane_cp1_ParamLimits

0x5f21,	// (0x000740de) cell_myfav_contact_pane_cp1

0x5f39,	// (0x000740f6) cell_myfav_contact_pane_cp2_ParamLimits

0x5f39,	// (0x000740f6) cell_myfav_contact_pane_cp2

0x5f51,	// (0x0007410e) cell_myfav_contact_pane_cp3_ParamLimits

0x5f51,	// (0x0007410e) cell_myfav_contact_pane_cp3

0x5f68,	// (0x00074125) cell_myfav_contact_pane_cp4_ParamLimits

0x5f68,	// (0x00074125) cell_myfav_contact_pane_cp4

0x5f80,	// (0x0007413d) cell_myfav_contact_pane_cp5_ParamLimits

0x5f80,	// (0x0007413d) cell_myfav_contact_pane_cp5

0x5f94,	// (0x00074151) cell_myfav_contact_pane_cp6_ParamLimits

0x5f94,	// (0x00074151) cell_myfav_contact_pane_cp6

0x5faa,	// (0x00074167) cell_myfav_contact_pane_cp7_ParamLimits

0x5faa,	// (0x00074167) cell_myfav_contact_pane_cp7

0xd71e,	// (0x0007b8db) listscroll_gen_pane_cp05

0x5fc2,	// (0x0007417f) main_myfav_hc_pane_g1_ParamLimits

0x5fc2,	// (0x0007417f) main_myfav_hc_pane_g1

0x5fdc,	// (0x00074199) main_myfav_hc_pane_g2_ParamLimits

0x5fdc,	// (0x00074199) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0007db0a) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0007db0a) main_myfav_hc_pane_g

0x6010,	// (0x000741cd) main_myfav_hc_pane_t1_ParamLimits

0x6010,	// (0x000741cd) main_myfav_hc_pane_t1

0xd727,	// (0x0007b8e4) main_myfav_hc_pane_t2_ParamLimits

0xd727,	// (0x0007b8e4) main_myfav_hc_pane_t2

0xd739,	// (0x0007b8f6) main_myfav_hc_pane_t3_ParamLimits

0xd739,	// (0x0007b8f6) main_myfav_hc_pane_t3

0x6027,	// (0x000741e4) main_myfav_hc_pane_t4_ParamLimits

0x6027,	// (0x000741e4) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0007db11) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0007db11) main_myfav_hc_pane_t

0xcc7e,	// (0x0007ae3b) bg_myfav_hc_instruction_pane_g1

0xd74b,	// (0x0007b908) cell_myfav_contact_pane_g1_ParamLimits

0xd74b,	// (0x0007b908) cell_myfav_contact_pane_g1

0xd74b,	// (0x0007b908) cell_myfav_contact_pane_g2_ParamLimits

0xd74b,	// (0x0007b908) cell_myfav_contact_pane_g2

0xd757,	// (0x0007b914) cell_myfav_contact_pane_g3_ParamLimits

0xd757,	// (0x0007b914) cell_myfav_contact_pane_g3

0xcf13,	// (0x0007b0d0) cell_myfav_contact_pane_g4_ParamLimits

0xcf13,	// (0x0007b0d0) cell_myfav_contact_pane_g4

0xd764,	// (0x0007b921) cell_myfav_contact_pane_g5_ParamLimits

0xd764,	// (0x0007b921) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0007db1c) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0007db1c) cell_myfav_contact_pane_g

0x5ff6,	// (0x000741b3) main_myfav_hc_pane_g3_ParamLimits

0x5ff6,	// (0x000741b3) main_myfav_hc_pane_g3

0xfdb6,	// (0x0006df73) popup_adpt_find_window

0x6051,	// (0x0007420e) afind_page_pane_ParamLimits

0x6051,	// (0x0007420e) afind_page_pane

0x6066,	// (0x00074223) aid_size_cell_afind_ParamLimits

0x6066,	// (0x00074223) aid_size_cell_afind

0x6084,	// (0x00074241) bg_popup_sub_pane_cp09_ParamLimits

0x6084,	// (0x00074241) bg_popup_sub_pane_cp09

0x6091,	// (0x0007424e) find_pane_cp01_ParamLimits

0x6091,	// (0x0007424e) find_pane_cp01

0xd770,	// (0x0007b92d) grid_afind_control_pane_ParamLimits

0xd770,	// (0x0007b92d) grid_afind_control_pane

0x609e,	// (0x0007425b) grid_afind_pane_ParamLimits

0x609e,	// (0x0007425b) grid_afind_pane

0x60c0,	// (0x0007427d) cell_afind_pane_ParamLimits

0x60c0,	// (0x0007427d) cell_afind_pane

0xcc7e,	// (0x0007ae3b) afind_page_pane_g1

0x6129,	// (0x000742e6) afind_page_pane_g2

0x6132,	// (0x000742ef) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0007db27) afind_page_pane_g

0x613b,	// (0x000742f8) afind_page_pane_t1

0xd784,	// (0x0007b941) cell_afind_grid_control_pane_ParamLimits

0xd784,	// (0x0007b941) cell_afind_grid_control_pane

0xd58c,	// (0x0007b749) bg_button_pane_cp69_ParamLimits

0xd58c,	// (0x0007b749) bg_button_pane_cp69

0x615b,	// (0x00074318) cell_afind_pane_g1_ParamLimits

0x615b,	// (0x00074318) cell_afind_pane_g1

0x6168,	// (0x00074325) cell_afind_pane_t1_ParamLimits

0x6168,	// (0x00074325) cell_afind_pane_t1

0xaae1,	// (0x00078c9e) bg_button_pane_cp72

0xd793,	// (0x0007b950) cell_afind_grid_control_pane_g1

0x30a2,	// (0x0007125f) aid_image_placing_area_ParamLimits

0x30a2,	// (0x0007125f) aid_image_placing_area

0xd24e,	// (0x0007b40b) field_vitu_entry_pane_g1_ParamLimits

0xd24e,	// (0x0007b40b) field_vitu_entry_pane_g1

0xd25a,	// (0x0007b417) field_vitu_entry_pane_g2_ParamLimits

0xd25a,	// (0x0007b417) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0007d9d8) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0007d9d8) field_vitu_entry_pane_g

0x52c0,	// (0x0007347d) cell_vitu_itu_pane_g1_ParamLimits

0x5302,	// (0x000734bf) cell_vitu_itu_pane_t3_ParamLimits

0x5302,	// (0x000734bf) cell_vitu_itu_pane_t3

0xd532,	// (0x0007b6ef) mp4_progress_pane_t1_ParamLimits

0xd54b,	// (0x0007b708) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0007da6d) mp4_progress_pane_t_ParamLimits

0xd564,	// (0x0007b721) mup_progress_pane_cp04_ParamLimits

0x603b,	// (0x000741f8) main_myfav_hc_pane_t5_ParamLimits

0x603b,	// (0x000741f8) main_myfav_hc_pane_t5

0x9568,	// (0x00077725) aid_zoom_text_primary

0xfdb6,	// (0x0006df73) popup_adpt_find_window_ParamLimits

0x95a3,	// (0x00077760) main_cam_set_pane

0x5a73,	// (0x00073c30) cam4_zoom_pane_ParamLimits

0x5a73,	// (0x00073c30) cam4_zoom_pane

0x617a,	// (0x00074337) main_cam_set_pane_g1_ParamLimits

0x617a,	// (0x00074337) main_cam_set_pane_g1

0x6188,	// (0x00074345) main_cam_set_pane_g2_ParamLimits

0x6188,	// (0x00074345) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0007db2e) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0007db2e) main_cam_set_pane_g

0x61a9,	// (0x00074366) main_cam_set_pane_t1_ParamLimits

0x61a9,	// (0x00074366) main_cam_set_pane_t1

0x61c4,	// (0x00074381) main_cset_listscroll_pane_ParamLimits

0x61c4,	// (0x00074381) main_cset_listscroll_pane

0x61e8,	// (0x000743a5) main_cset_slider_pane_ParamLimits

0x61e8,	// (0x000743a5) main_cset_slider_pane

0xd7a4,	// (0x0007b961) main_cset_list_pane_ParamLimits

0xd7a4,	// (0x0007b961) main_cset_list_pane

0xd7b4,	// (0x0007b971) scroll_pane_cp028

0x6212,	// (0x000743cf) aid_area_touch_slider

0x622e,	// (0x000743eb) cset_slider_pane

0x6258,	// (0x00074415) main_cset_slider_pane_g1

0x626d,	// (0x0007442a) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0007db33) main_cset_slider_pane_g

0xd7ed,	// (0x0007b9aa) main_cset_slider_pane_t1

0x632f,	// (0x000744ec) main_cset_slider_pane_t2

0x6349,	// (0x00074506) main_cset_slider_pane_t3

0x6363,	// (0x00074520) main_cset_slider_pane_t4

0x637d,	// (0x0007453a) main_cset_slider_pane_t5

0x639b,	// (0x00074558) main_cset_slider_pane_t6

0x63b0,	// (0x0007456d) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0007db58) main_cset_slider_pane_t

0x64bc,	// (0x00074679) cset_list_set_pane_ParamLimits

0x64bc,	// (0x00074679) cset_list_set_pane

0x64d0,	// (0x0007468d) aid_position_infowindow_above

0x64d8,	// (0x00074695) aid_position_infowindow_below

0x64e0,	// (0x0007469d) cset_list_set_pane_g1_ParamLimits

0x64e0,	// (0x0007469d) cset_list_set_pane_g1

0x64ec,	// (0x000746a9) cset_list_set_pane_g3_ParamLimits

0x64ec,	// (0x000746a9) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0007db77) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0007db77) cset_list_set_pane_g

0x64fb,	// (0x000746b8) cset_list_set_pane_t1_ParamLimits

0x64fb,	// (0x000746b8) cset_list_set_pane_t1

0x95a3,	// (0x00077760) list_highlight_pane_cp021_ParamLimits

0x95a3,	// (0x00077760) list_highlight_pane_cp021

0xb503,	// (0x000796c0) cset_slider_pane_g1

0xb515,	// (0x000796d2) cset_slider_pane_g2

0xb50c,	// (0x000796c9) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0007db7c) cset_slider_pane_g

0xa31a,	// (0x000784d7) aid_area_touch_cam4_zoom

0xa322,	// (0x000784df) cam4_zoom_cont_pane

0xa32a,	// (0x000784e7) cam4_zoom_pane_g1

0xa332,	// (0x000784ef) cam4_zoom_pane_g2

0x6510,	// (0x000746cd) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0007db83) cam4_zoom_pane_g

0xa33a,	// (0x000784f7) cam4_zoom_cont_pane_g1

0xa343,	// (0x00078500) cam4_zoom_cont_pane_g2

0xa34c,	// (0x00078509) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0007db8a) cam4_zoom_cont_pane_g

0x58f0,	// (0x00073aad) call4_image_pane_ParamLimits

0x58f0,	// (0x00073aad) call4_image_pane

0xd598,	// (0x0007b755) call4_windows_conf_pane_ParamLimits

0xd5b3,	// (0x0007b770) popup_call4_audio_in_window_ParamLimits

0xd5b3,	// (0x0007b770) popup_call4_audio_in_window

0x954a,	// (0x00077707) bg_popup_call2_act_pane_cp02

0xd615,	// (0x0007b7d2) call4_list_conf_pane

0xcc7e,	// (0x0007ae3b) call4_image_pane_g1

0xcc7e,	// (0x0007ae3b) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0007d899) call4_image_pane_g

0xd88d,	// (0x0007ba4a) list_single_graphic_popup_conf4_pane_ParamLimits

0xd88d,	// (0x0007ba4a) list_single_graphic_popup_conf4_pane

0x954a,	// (0x00077707) list_highlight_pane_cp022

0xd8a2,	// (0x0007ba5f) list_single_graphic_popup_conf4_pane_g1

0xb1f7,	// (0x000793b4) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0007db91) list_single_graphic_popup_conf4_pane_g

0xd8aa,	// (0x0007ba67) list_single_graphic_popup_conf4_pane_t1

0x118e,	// (0x0006f34b) popup_vtel_slider_window_ParamLimits

0x118e,	// (0x0006f34b) popup_vtel_slider_window

0xd57a,	// (0x0007b737) dialer2_ne_pane_t2_ParamLimits

0xd57a,	// (0x0007b737) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0007da72) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0007da72) dialer2_ne_pane_t

0xca5d,	// (0x0007ac1a) bg_popup_sub_pane_cp010_ParamLimits

0xca5d,	// (0x0007ac1a) bg_popup_sub_pane_cp010

0x6518,	// (0x000746d5) popup_vtel_slider_window_g1_ParamLimits

0x6518,	// (0x000746d5) popup_vtel_slider_window_g1

0x652b,	// (0x000746e8) popup_vtel_slider_window_g2_ParamLimits

0x652b,	// (0x000746e8) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0007db96) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0007db96) popup_vtel_slider_window_g

0x6581,	// (0x0007473e) vtel_slider_pane_ParamLimits

0x6581,	// (0x0007473e) vtel_slider_pane

0x65a3,	// (0x00074760) vtel_slider_pane_g1_ParamLimits

0x65a3,	// (0x00074760) vtel_slider_pane_g1

0x65b7,	// (0x00074774) vtel_slider_pane_g2_ParamLimits

0x65b7,	// (0x00074774) vtel_slider_pane_g2

0x65cf,	// (0x0007478c) vtel_slider_pane_g3_ParamLimits

0x65cf,	// (0x0007478c) vtel_slider_pane_g3

0x65a3,	// (0x00074760) vtel_slider_pane_g4_ParamLimits

0x65a3,	// (0x00074760) vtel_slider_pane_g4

0x65e5,	// (0x000747a2) vtel_slider_pane_g5_ParamLimits

0x65e5,	// (0x000747a2) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0007db9f) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0007db9f) vtel_slider_pane_g

0x95a3,	// (0x00077760) main_gallery2_pane

0x5c77,	// (0x00073e34) aid_size_row_itut2_dropdow_list_ParamLimits

0x5c77,	// (0x00073e34) aid_size_row_itut2_dropdow_list

0x5d09,	// (0x00073ec6) grid_vitu2_function_top_pane_ParamLimits

0x5d09,	// (0x00073ec6) grid_vitu2_function_top_pane

0x5d6d,	// (0x00073f2a) popup_vitu2_dropdown_list_window_ParamLimits

0x5d6d,	// (0x00073f2a) popup_vitu2_dropdown_list_window

0x5d9a,	// (0x00073f57) popup_vitu2_match_list_window

0x6609,	// (0x000747c6) cell_vitu2_function_top_pane_ParamLimits

0x6609,	// (0x000747c6) cell_vitu2_function_top_pane

0x6629,	// (0x000747e6) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6629,	// (0x000747e6) cell_vitu2_function_top_pane_cp01

0x6645,	// (0x00074802) cell_vitu2_function_top_wide_pane_ParamLimits

0x6645,	// (0x00074802) cell_vitu2_function_top_wide_pane

0xa261,	// (0x0007841e) bg_button_pane_cp012

0x6661,	// (0x0007481e) cell_vitu2_function_top_pane_g1

0xa355,	// (0x00078512) bg_button_pane_cp013_ParamLimits

0xa355,	// (0x00078512) bg_button_pane_cp013

0x6675,	// (0x00074832) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6675,	// (0x00074832) cell_vitu2_function_top_wide_pane_g1

0xa261,	// (0x0007841e) bg_popup_sub_pane_cp20

0x668d,	// (0x0007484a) list_vitu2_match_list_pane

0xd696,	// (0x0007b853) bg_popup_sub_pane_cp20_g1

0xd69e,	// (0x0007b85b) bg_popup_sub_pane_cp20_g2

0xacec,	// (0x00078ea9) bg_popup_sub_pane_cp20_g3

0xd6a6,	// (0x0007b863) bg_popup_sub_pane_cp20_g4

0xaccc,	// (0x00078e89) bg_popup_sub_pane_cp20_g5

0xd8c0,	// (0x0007ba7d) bg_popup_sub_pane_cp20_g6

0xd6b6,	// (0x0007b873) bg_popup_sub_pane_cp20_g7

0xd6be,	// (0x0007b87b) bg_popup_sub_pane_cp20_g8

0xd6c6,	// (0x0007b883) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0007dbaa) bg_popup_sub_pane_cp20_g

0xa371,	// (0x0007852e) list_vitu2_match_list_item_pane_ParamLimits

0xa371,	// (0x0007852e) list_vitu2_match_list_item_pane

0xa383,	// (0x00078540) list_vitu2_match_list_item_pane_t1

0x9cae,	// (0x00077e6b) bg_popup_sub_pane_cp21

0xa391,	// (0x0007854e) grid_vitu2_dropdown_list_pane

0x66f5,	// (0x000748b2) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x66f5,	// (0x000748b2) cell_vitu2_dropdown_list_char_pane

0x6718,	// (0x000748d5) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6718,	// (0x000748d5) cell_vitu2_dropdown_list_ctrl_pane

0xd8c8,	// (0x0007ba85) cell_vitu2_dropdown_list_char_pane_g1

0xd8d1,	// (0x0007ba8e) cell_vitu2_dropdown_list_char_pane_g2

0xd8da,	// (0x0007ba97) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0007dbc7) cell_vitu2_dropdown_list_char_pane_g

0x6746,	// (0x00074903) cell_vitu2_dropdown_list_char_pane_t1

0x6754,	// (0x00074911) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6754,	// (0x00074911) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6764,	// (0x00074921) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6764,	// (0x00074921) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6775,	// (0x00074932) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6775,	// (0x00074932) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6785,	// (0x00074942) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6785,	// (0x00074942) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa1fe,	// (0x000783bb) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa1fe,	// (0x000783bb) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0007dbce) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0007dbce) cell_vitu2_dropdown_list_ctrl_pane_g

0x67a1,	// (0x0007495e) aid_size_cell_gallery2_ParamLimits

0x67a1,	// (0x0007495e) aid_size_cell_gallery2

0x67bf,	// (0x0007497c) grid_gallery2_pane_ParamLimits

0x67bf,	// (0x0007497c) grid_gallery2_pane

0x67d9,	// (0x00074996) scroll_pane_cp029_ParamLimits

0x67d9,	// (0x00074996) scroll_pane_cp029

0x67e5,	// (0x000749a2) cell_gallery2_pane_ParamLimits

0x67e5,	// (0x000749a2) cell_gallery2_pane

0xd8e3,	// (0x0007baa0) cell_gallery2_pane_g2

0x6846,	// (0x00074a03) cell_gallery2_pane_g3

0xd8eb,	// (0x0007baa8) cell_gallery2_pane_g4

0xd8f3,	// (0x0007bab0) cell_gallery2_pane_g5

0xaa8f,	// (0x00078c4c) grid_highlight_pane_cp10

0x5d9a,	// (0x00073f57) popup_vitu2_match_list_window_ParamLimits

0x5db1,	// (0x00073f6e) popup_vitu2_query_window_ParamLimits

0x5db1,	// (0x00073f6e) popup_vitu2_query_window

0x9cae,	// (0x00077e6b) bg_vitu2_candi_button_pane

0xd8c8,	// (0x0007ba85) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8d1,	// (0x0007ba8e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8da,	// (0x0007ba97) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x684e,	// (0x00074a0b) bg_button_pane_cp015

0x6862,	// (0x00074a1f) bg_button_pane_cp016

0x6875,	// (0x00074a32) bg_button_pane_cp017

0xc82d,	// (0x0007a9ea) bg_popup_sub_pane_cp22

0xd8fb,	// (0x0007bab8) popup_vitu2_query_window_g1

0x68ba,	// (0x00074a77) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0007dbd9) popup_vitu2_query_window_g

0x68d9,	// (0x00074a96) popup_vitu2_query_window_t1_ParamLimits

0x68d9,	// (0x00074a96) popup_vitu2_query_window_t1

0x690e,	// (0x00074acb) popup_vitu2_query_window_t2_ParamLimits

0x690e,	// (0x00074acb) popup_vitu2_query_window_t2

0x6920,	// (0x00074add) popup_vitu2_query_window_t3_ParamLimits

0x6920,	// (0x00074add) popup_vitu2_query_window_t3

0x6948,	// (0x00074b05) popup_vitu2_query_window_t4_ParamLimits

0x6948,	// (0x00074b05) popup_vitu2_query_window_t4

0x6969,	// (0x00074b26) popup_vitu2_query_window_t5_ParamLimits

0x6969,	// (0x00074b26) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0007dbe0) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0007dbe0) popup_vitu2_query_window_t

0xd79c,	// (0x0007b959) main_cset_text_pane

0x6212,	// (0x000743cf) aid_area_touch_slider_ParamLimits

0x622e,	// (0x000743eb) cset_slider_pane_ParamLimits

0x6258,	// (0x00074415) main_cset_slider_pane_g1_ParamLimits

0x626d,	// (0x0007442a) main_cset_slider_pane_g2_ParamLimits

0xd7bd,	// (0x0007b97a) main_cset_slider_pane_g3_ParamLimits

0xd7bd,	// (0x0007b97a) main_cset_slider_pane_g3

0x6282,	// (0x0007443f) main_cset_slider_pane_g4_ParamLimits

0x6282,	// (0x0007443f) main_cset_slider_pane_g4

0x6291,	// (0x0007444e) main_cset_slider_pane_g5_ParamLimits

0x6291,	// (0x0007444e) main_cset_slider_pane_g5

0x629f,	// (0x0007445c) main_cset_slider_pane_g6_ParamLimits

0x629f,	// (0x0007445c) main_cset_slider_pane_g6

0xf976,	// (0x0007db33) main_cset_slider_pane_g_ParamLimits

0xd7ed,	// (0x0007b9aa) main_cset_slider_pane_t1_ParamLimits

0x632f,	// (0x000744ec) main_cset_slider_pane_t2_ParamLimits

0x6349,	// (0x00074506) main_cset_slider_pane_t3_ParamLimits

0x6363,	// (0x00074520) main_cset_slider_pane_t4_ParamLimits

0x637d,	// (0x0007453a) main_cset_slider_pane_t5_ParamLimits

0x639b,	// (0x00074558) main_cset_slider_pane_t6_ParamLimits

0x63b0,	// (0x0007456d) main_cset_slider_pane_t7_ParamLimits

0x63de,	// (0x0007459b) main_cset_slider_pane_t8_ParamLimits

0x63de,	// (0x0007459b) main_cset_slider_pane_t8

0x6406,	// (0x000745c3) main_cset_slider_pane_t9_ParamLimits

0x6406,	// (0x000745c3) main_cset_slider_pane_t9

0x642e,	// (0x000745eb) main_cset_slider_pane_t10_ParamLimits

0x642e,	// (0x000745eb) main_cset_slider_pane_t10

0x6456,	// (0x00074613) main_cset_slider_pane_t11_ParamLimits

0x6456,	// (0x00074613) main_cset_slider_pane_t11

0x6480,	// (0x0007463d) main_cset_slider_pane_t12_ParamLimits

0x6480,	// (0x0007463d) main_cset_slider_pane_t12

0x649d,	// (0x0007465a) main_cset_slider_pane_t13_ParamLimits

0x649d,	// (0x0007465a) main_cset_slider_pane_t13

0xf99b,	// (0x0007db58) main_cset_slider_pane_t_ParamLimits

0x954a,	// (0x00077707) bg_popup_sub_pane_cp011

0xd907,	// (0x0007bac4) main_cset_text_pane_g1

0xd90f,	// (0x0007bacc) main_cset_text_pane_t1

0xd91d,	// (0x0007bada) main_cset_text_pane_t2

0xd92b,	// (0x0007bae8) main_cset_text_pane_t3

0xd939,	// (0x0007baf6) main_cset_text_pane_t4

0xd947,	// (0x0007bb04) main_cset_text_pane_t5

0xd955,	// (0x0007bb12) main_cset_text_pane_t6

0xd963,	// (0x0007bb20) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0007dbef) main_cset_text_pane_t

0x954a,	// (0x00077707) main_cam4_burst_pane

0x954a,	// (0x00077707) main_cam5_pane

0x6149,	// (0x00074306) bg_button_pane_cp019

0x6152,	// (0x0007430f) bg_button_pane_cp020

0xd7c9,	// (0x0007b986) main_cset_slider_pane_g7_ParamLimits

0xd7c9,	// (0x0007b986) main_cset_slider_pane_g7

0xd7d5,	// (0x0007b992) main_cset_slider_pane_g8_ParamLimits

0xd7d5,	// (0x0007b992) main_cset_slider_pane_g8

0x62b3,	// (0x00074470) main_cset_slider_pane_g9_ParamLimits

0x62b3,	// (0x00074470) main_cset_slider_pane_g9

0x62bf,	// (0x0007447c) main_cset_slider_pane_g10_ParamLimits

0x62bf,	// (0x0007447c) main_cset_slider_pane_g10

0x62cb,	// (0x00074488) main_cset_slider_pane_g11_ParamLimits

0x62cb,	// (0x00074488) main_cset_slider_pane_g11

0x62d7,	// (0x00074494) main_cset_slider_pane_g12_ParamLimits

0x62d7,	// (0x00074494) main_cset_slider_pane_g12

0x62e3,	// (0x000744a0) main_cset_slider_pane_g13_ParamLimits

0x62e3,	// (0x000744a0) main_cset_slider_pane_g13

0x62ef,	// (0x000744ac) main_cset_slider_pane_g14_ParamLimits

0x62ef,	// (0x000744ac) main_cset_slider_pane_g14

0x62fb,	// (0x000744b8) main_cset_slider_pane_g15_ParamLimits

0x62fb,	// (0x000744b8) main_cset_slider_pane_g15

0xd81b,	// (0x0007b9d8) main_cset_slider_pane_t14_ParamLimits

0xd81b,	// (0x0007b9d8) main_cset_slider_pane_t14

0xd854,	// (0x0007ba11) main_cset_slider_pane_t15_ParamLimits

0xd854,	// (0x0007ba11) main_cset_slider_pane_t15

0x69e0,	// (0x00074b9d) aid_cam4_burst_size_cell_ParamLimits

0x69e0,	// (0x00074b9d) aid_cam4_burst_size_cell

0x6a00,	// (0x00074bbd) grid_cam4_burst_pane_ParamLimits

0x6a00,	// (0x00074bbd) grid_cam4_burst_pane

0x6a3a,	// (0x00074bf7) linegrid_cam4_burst_pane_ParamLimits

0x6a3a,	// (0x00074bf7) linegrid_cam4_burst_pane

0xd971,	// (0x0007bb2e) scroll_pane_cp30_ParamLimits

0xd971,	// (0x0007bb2e) scroll_pane_cp30

0x6a5c,	// (0x00074c19) cell_cam4_burst_pane_ParamLimits

0x6a5c,	// (0x00074c19) cell_cam4_burst_pane

0xd97d,	// (0x0007bb3a) linegrid_cam4_burst_pane_g1_ParamLimits

0xd97d,	// (0x0007bb3a) linegrid_cam4_burst_pane_g1

0x6ab1,	// (0x00074c6e) linegrid_cam4_burst_pane_g2_ParamLimits

0x6ab1,	// (0x00074c6e) linegrid_cam4_burst_pane_g2

0xd98a,	// (0x0007bb47) linegrid_cam4_burst_pane_g3_ParamLimits

0xd98a,	// (0x0007bb47) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0007dbfe) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0007dbfe) linegrid_cam4_burst_pane_g

0x6ac2,	// (0x00074c7f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6ac2,	// (0x00074c7f) linegrid_cam4_burst_pane_g3_copy1

0xd997,	// (0x0007bb54) linegrid_cam4_burst_pane_g4_ParamLimits

0xd997,	// (0x0007bb54) linegrid_cam4_burst_pane_g4

0x6ae0,	// (0x00074c9d) linegrid_cam4_burst_pane_g5_ParamLimits

0x6ae0,	// (0x00074c9d) linegrid_cam4_burst_pane_g5

0x6af1,	// (0x00074cae) linegrid_cam4_burst_pane_g6_ParamLimits

0x6af1,	// (0x00074cae) linegrid_cam4_burst_pane_g6

0xd9a4,	// (0x0007bb61) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9a4,	// (0x0007bb61) linegrid_cam4_burst_pane_g7

0x6b08,	// (0x00074cc5) cell_cam4_burst_pane_g1

0xd9bd,	// (0x0007bb7a) main_cam5_pane_t1_ParamLimits

0xd9bd,	// (0x0007bb7a) main_cam5_pane_t1

0xd9cf,	// (0x0007bb8c) main_cam5_pane_t2_ParamLimits

0xd9cf,	// (0x0007bb8c) main_cam5_pane_t2

0xd9e1,	// (0x0007bb9e) main_cam5_pane_t3_ParamLimits

0xd9e1,	// (0x0007bb9e) main_cam5_pane_t3

0xd9f3,	// (0x0007bbb0) main_cam5_pane_t4_ParamLimits

0xd9f3,	// (0x0007bbb0) main_cam5_pane_t4

0xda0b,	// (0x0007bbc8) main_cam5_pane_t5_ParamLimits

0xda0b,	// (0x0007bbc8) main_cam5_pane_t5

0xda1f,	// (0x0007bbdc) main_cam5_pane_t6_ParamLimits

0xda1f,	// (0x0007bbdc) main_cam5_pane_t6

0xda33,	// (0x0007bbf0) main_cam5_pane_t7_ParamLimits

0xda33,	// (0x0007bbf0) main_cam5_pane_t7

0xda45,	// (0x0007bc02) main_cam5_pane_t8_ParamLimits

0xda45,	// (0x0007bc02) main_cam5_pane_t8

0xda63,	// (0x0007bc20) main_cam5_pane_t9_ParamLimits

0xda63,	// (0x0007bc20) main_cam5_pane_t9

0xda75,	// (0x0007bc32) main_cam5_pane_t10_ParamLimits

0xda75,	// (0x0007bc32) main_cam5_pane_t10

0xda87,	// (0x0007bc44) main_cam5_pane_t11_ParamLimits

0xda87,	// (0x0007bc44) main_cam5_pane_t11

0xda9b,	// (0x0007bc58) main_cam5_pane_t12_ParamLimits

0xda9b,	// (0x0007bc58) main_cam5_pane_t12

0xdab2,	// (0x0007bc6f) main_cam5_pane_t13_ParamLimits

0xdab2,	// (0x0007bc6f) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0007dc0a) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0007dc0a) main_cam5_pane_t

0xfe39,	// (0x0006dff6) popup_scut_keymap_window_ParamLimits

0xfe39,	// (0x0006dff6) popup_scut_keymap_window

0x6b1b,	// (0x00074cd8) aid_size_cell_brow_shortcut

0xaa8f,	// (0x00078c4c) bg_popup_window_pane_cp010

0x6b27,	// (0x00074ce4) grid_scut_pane

0x6b33,	// (0x00074cf0) cell_scut_pane_ParamLimits

0x6b33,	// (0x00074cf0) cell_scut_pane

0x6b4c,	// (0x00074d09) cell_scut_pane_g1

0xdad5,	// (0x0007bc92) cell_scut_pane_t1

0xdae4,	// (0x0007bca1) cell_scut_pane_t2

0x6b55,	// (0x00074d12) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0007dc25) cell_scut_pane_t

0x4789,	// (0x00072946) main_mup3_pane_g8_ParamLimits

0x4789,	// (0x00072946) main_mup3_pane_g8

0x5c93,	// (0x00073e50) area_vitu2_query_pane_ParamLimits

0x5c93,	// (0x00073e50) area_vitu2_query_pane

0x6888,	// (0x00074a45) input_focus_pane_cp08

0xdaf3,	// (0x0007bcb0) area_vitu2_query_pane_g1

0x6b63,	// (0x00074d20) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0007dc2c) area_vitu2_query_pane_g

0x6b74,	// (0x00074d31) area_vitu2_query_pane_t1_ParamLimits

0x6b74,	// (0x00074d31) area_vitu2_query_pane_t1

0x6b88,	// (0x00074d45) area_vitu2_query_pane_t2_ParamLimits

0x6b88,	// (0x00074d45) area_vitu2_query_pane_t2

0x6b9c,	// (0x00074d59) area_vitu2_query_pane_t3_ParamLimits

0x6b9c,	// (0x00074d59) area_vitu2_query_pane_t3

0xa399,	// (0x00078556) area_vitu2_query_pane_t4_ParamLimits

0xa399,	// (0x00078556) area_vitu2_query_pane_t4

0xa3c1,	// (0x0007857e) area_vitu2_query_pane_t5_ParamLimits

0xa3c1,	// (0x0007857e) area_vitu2_query_pane_t5

0xa3e9,	// (0x000785a6) area_vitu2_query_pane_t6_ParamLimits

0xa3e9,	// (0x000785a6) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0007dc31) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0007dc31) area_vitu2_query_pane_t

0x6bc4,	// (0x00074d81) bg_button_pane_cp018

0x6bd2,	// (0x00074d8f) bg_button_pane_cp021

0x6bde,	// (0x00074d9b) bg_button_pane_cp022

0x6bef,	// (0x00074dac) input_focus_pane_cp09

0x25ec,	// (0x000707a9) aid_size_touch_mv_arrow_left

0x2615,	// (0x000707d2) aid_size_touch_mv_arrow_right

0x6313,	// (0x000744d0) main_cset_slider_pane_g16_ParamLimits

0x6313,	// (0x000744d0) main_cset_slider_pane_g16

0x6321,	// (0x000744de) main_cset_slider_pane_g17_ParamLimits

0x6321,	// (0x000744de) main_cset_slider_pane_g17

0x6b08,	// (0x00074cc5) cell_cam4_burst_pane_g1_ParamLimits

0x954a,	// (0x00077707) compa_mode_pane

0x653b,	// (0x000746f8) popup_vtel_slider_window_g3_ParamLimits

0x653b,	// (0x000746f8) popup_vtel_slider_window_g3

0x6552,	// (0x0007470f) popup_vtel_slider_window_g4_ParamLimits

0x6552,	// (0x0007470f) popup_vtel_slider_window_g4

0x6569,	// (0x00074726) popup_vtel_slider_window_t1_ParamLimits

0x6569,	// (0x00074726) popup_vtel_slider_window_t1

0x954a,	// (0x00077707) main_cl_pane

0xc859,	// (0x0007aa16) popup_imed_adjust2_window_ParamLimits

0xc82d,	// (0x0007a9ea) bg_tb_trans_pane_cp05_ParamLimits

0xd183,	// (0x0007b340) popup_imed_adjust2_window_g1_ParamLimits

0xd192,	// (0x0007b34f) popup_imed_adjust2_window_g2_ParamLimits

0xd192,	// (0x0007b34f) popup_imed_adjust2_window_g2

0xd19e,	// (0x0007b35b) popup_imed_adjust2_window_g3_ParamLimits

0xd19e,	// (0x0007b35b) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0007d99c) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0007d99c) popup_imed_adjust2_window_g

0xd1aa,	// (0x0007b367) popup_imed_adjust2_window_t1_ParamLimits

0xd1c2,	// (0x0007b37f) slider_imed_adjust_pane_ParamLimits

0xd1d6,	// (0x0007b393) slider_imed_adjust_pane_g1_ParamLimits

0xd1e6,	// (0x0007b3a3) slider_imed_adjust_pane_g2_ParamLimits

0xd1f6,	// (0x0007b3b3) slider_imed_adjust_pane_g3_ParamLimits

0xd207,	// (0x0007b3c4) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0007d9a3) slider_imed_adjust_pane_g_ParamLimits

0x5a13,	// (0x00073bd0) aid_touch_area_cam4_ParamLimits

0x5a13,	// (0x00073bd0) aid_touch_area_cam4

0xa1e0,	// (0x0007839d) battery_pane_cp01

0x5ae5,	// (0x00073ca2) main_camera4_pane_g6_ParamLimits

0x5ae5,	// (0x00073ca2) main_camera4_pane_g6

0x5b0f,	// (0x00073ccc) main_camera4_pane_t2_ParamLimits

0x5b0f,	// (0x00073ccc) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0007daa6) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0007daa6) main_camera4_pane_t

0x5b44,	// (0x00073d01) aid_touch_area_vid4_ParamLimits

0x5b44,	// (0x00073d01) aid_touch_area_vid4

0x5b98,	// (0x00073d55) main_video4_pane_g5_ParamLimits

0x5b98,	// (0x00073d55) main_video4_pane_g5

0x5bbd,	// (0x00073d7a) vid4_progress_pane_ParamLimits

0x5bbd,	// (0x00073d7a) vid4_progress_pane

0xd7e1,	// (0x0007b99e) main_cset_slider_pane_g18_ParamLimits

0xd7e1,	// (0x0007b99e) main_cset_slider_pane_g18

0xd9b1,	// (0x0007bb6e) cell_cam4_burst_pane_g2_ParamLimits

0xd9b1,	// (0x0007bb6e) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0007dc05) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0007dc05) cell_cam4_burst_pane_g

0xa8d9,	// (0x00078a96) bg_cl_pane_ParamLimits

0xa8d9,	// (0x00078a96) bg_cl_pane

0x6c00,	// (0x00074dbd) cl_header_pane_ParamLimits

0x6c00,	// (0x00074dbd) cl_header_pane

0x6c14,	// (0x00074dd1) cl_listscroll_pane_ParamLimits

0x6c14,	// (0x00074dd1) cl_listscroll_pane

0xdaff,	// (0x0007bcbc) bg_cl_pane_g1

0xdb07,	// (0x0007bcc4) bg_cl_pane_g2

0xdb0f,	// (0x0007bccc) bg_cl_pane_g3

0xdb17,	// (0x0007bcd4) bg_cl_pane_g4

0xdb1f,	// (0x0007bcdc) bg_cl_pane_g5

0xdb27,	// (0x0007bce4) bg_cl_pane_g6

0xdb2f,	// (0x0007bcec) bg_cl_pane_g7

0xdb37,	// (0x0007bcf4) bg_cl_pane_g8

0xdb3f,	// (0x0007bcfc) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0007dc40) bg_cl_pane_g

0x6c24,	// (0x00074de1) aid_height_cl_leading_ParamLimits

0x6c24,	// (0x00074de1) aid_height_cl_leading

0x6c30,	// (0x00074ded) aid_height_cl_text_ParamLimits

0x6c30,	// (0x00074ded) aid_height_cl_text

0x95a3,	// (0x00077760) bg_cl_header_pane_ParamLimits

0x95a3,	// (0x00077760) bg_cl_header_pane

0x6c4f,	// (0x00074e0c) cl_header_pane_g1_ParamLimits

0x6c4f,	// (0x00074e0c) cl_header_pane_g1

0x6c65,	// (0x00074e22) cl_header_pane_t1_ParamLimits

0x6c65,	// (0x00074e22) cl_header_pane_t1

0xdb47,	// (0x0007bd04) cl_list_pane

0xd7b4,	// (0x0007b971) hc_scroll_pane_cp01

0xaccc,	// (0x00078e89) bg_cl_header_pane_g1

0xd696,	// (0x0007b853) bg_cl_header_pane_g2

0xacec,	// (0x00078ea9) bg_cl_header_pane_g3

0xd6a6,	// (0x0007b863) bg_cl_header_pane_g4

0xd69e,	// (0x0007b85b) bg_cl_header_pane_g5

0xd8c0,	// (0x0007ba7d) bg_cl_header_pane_g6

0xd6be,	// (0x0007b87b) bg_cl_header_pane_g7

0xd6c6,	// (0x0007b883) bg_cl_header_pane_g8

0xd6b6,	// (0x0007b873) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0007dc53) bg_cl_header_pane_g

0x6c7e,	// (0x00074e3b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6c7e,	// (0x00074e3b) hc_cl_list_double_graphic_heading_pane

0x6c91,	// (0x00074e4e) hc_cl_list_single_graphic_pane_ParamLimits

0x6c91,	// (0x00074e4e) hc_cl_list_single_graphic_pane

0x6ca9,	// (0x00074e66) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6ca9,	// (0x00074e66) hc_cl_list_single_graphic_pane_g1

0x6cb5,	// (0x00074e72) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6cb5,	// (0x00074e72) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0007dc66) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0007dc66) hc_cl_list_single_graphic_pane_g

0x6cc9,	// (0x00074e86) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6cc9,	// (0x00074e86) hc_cl_list_single_graphic_pane_t1

0x6ca9,	// (0x00074e66) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6ca9,	// (0x00074e66) hc_cl_list_double_graphic_heading_pane_g1

0x6cde,	// (0x00074e9b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6cde,	// (0x00074e9b) hc_cl_list_double_graphic_heading_pane_g2

0x6cf2,	// (0x00074eaf) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6cf2,	// (0x00074eaf) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0007dc6b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0007dc6b) hc_cl_list_double_graphic_heading_pane_g

0x6d06,	// (0x00074ec3) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6d06,	// (0x00074ec3) hc_cl_list_double_graphic_heading_pane_t1

0x6d1b,	// (0x00074ed8) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6d1b,	// (0x00074ed8) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0007dc72) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0007dc72) hc_cl_list_double_graphic_heading_pane_t

0x6d30,	// (0x00074eed) vid4_progress_pane_g1

0x6d42,	// (0x00074eff) vid4_progress_pane_g2

0x9e85,	// (0x00078042) vid4_progress_pane_g3

0xa43d,	// (0x000785fa) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0007dc77) vid4_progress_pane_g

0xa45b,	// (0x00078618) vid4_progress_pane_t1

0xa470,	// (0x0007862d) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0007dc82) vid4_progress_pane_t

0xa49b,	// (0x00078658) wait_bar_pane_cp07

0xca6b,	// (0x0007ac28) blid_firmament_pane_ParamLimits

0xcaae,	// (0x0007ac6b) popup_blid_sat_info2_window_g1

0xcad2,	// (0x0007ac8f) popup_blid_sat_info2_window_t3

0xcae0,	// (0x0007ac9d) popup_blid_sat_info2_window_t4

0xcaee,	// (0x0007acab) popup_blid_sat_info2_window_t5

0xcafc,	// (0x0007acb9) popup_blid_sat_info2_window_t6

0xcb0c,	// (0x0007acc9) popup_blid_sat_info2_window_t7

0xcb1a,	// (0x0007acd7) popup_blid_sat_info2_window_t8

0xcb28,	// (0x0007ace5) popup_blid_sat_info2_window_t9

0xcb36,	// (0x0007acf3) popup_blid_sat_info2_window_t10

0xcbfe,	// (0x0007adbb) aid_firma_cardinal_ParamLimits

0xcc12,	// (0x0007adcf) blid_firmament_pane_t1_ParamLimits

0xcc29,	// (0x0007ade6) blid_firmament_pane_t2_ParamLimits

0xcc40,	// (0x0007adfd) blid_firmament_pane_t3_ParamLimits

0xcc57,	// (0x0007ae14) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0007d890) blid_firmament_pane_t_ParamLimits

0xcc6e,	// (0x0007ae2b) blid_sat_info_pane_ParamLimits

0x95a3,	// (0x00077760) main_cam_set_pane_ParamLimits

0x506a,	// (0x00073227) aid_size_cell_colour_35_ParamLimits

0x508a,	// (0x00073247) aid_size_cell_colour_112_ParamLimits

0x50aa,	// (0x00073267) aid_size_cell_effect_ParamLimits

0xc82d,	// (0x0007a9ea) bg_tb_trans_pane_cp02_ParamLimits

0xaf25,	// (0x000790e2) heading_imed_pane_ParamLimits

0x50ca,	// (0x00073287) listscroll_imed_pane_ParamLimits

0xbe4f,	// (0x0007a00c) popup_call2_audio_first_window_g5_ParamLimits

0xbe4f,	// (0x0007a00c) popup_call2_audio_first_window_g5

0x567b,	// (0x00073838) aid_size_touch_image3_arrow_left_ParamLimits

0x567b,	// (0x00073838) aid_size_touch_image3_arrow_left

0x56a7,	// (0x00073864) aid_size_touch_image3_arrow_right_ParamLimits

0x56a7,	// (0x00073864) aid_size_touch_image3_arrow_right

0xa486,	// (0x00078643) vid4_progress_pane_t3

0x53e9,	// (0x000735a6) main_hwr_training_symbol_option_pane_ParamLimits

0x53e9,	// (0x000735a6) main_hwr_training_symbol_option_pane

0xd472,	// (0x0007b62f) popup_hwr_training_preview_window_ParamLimits

0xd472,	// (0x0007b62f) popup_hwr_training_preview_window

0x5409,	// (0x000735c6) hwr_training_navi_pane_g5_ParamLimits

0x5409,	// (0x000735c6) hwr_training_navi_pane_g5

0xd684,	// (0x0007b841) popup_char_count_window

0xa261,	// (0x0007841e) bg_popup_sub_pane_cp20_ParamLimits

0x668d,	// (0x0007484a) list_vitu2_match_list_pane_ParamLimits

0x669c,	// (0x00074859) vitu2_page_scroll_pane_ParamLimits

0x669c,	// (0x00074859) vitu2_page_scroll_pane

0xdb50,	// (0x0007bd0d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb50,	// (0x0007bd0d) list_single_hwr_training_symbol_option_pane

0xdb63,	// (0x0007bd20) list_single_hwr_training_symbol_option_pane_g1

0xdb6b,	// (0x0007bd28) list_single_hwr_training_symbol_option_pane_t1

0xdb79,	// (0x0007bd36) bg_button_pane_cp023

0xdb82,	// (0x0007bd3f) bg_button_pane_cp024

0x6d8c,	// (0x00074f49) vitu2_page_scroll_pane_g1

0x6d94,	// (0x00074f51) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0007dc89) vitu2_page_scroll_pane_g

0x6d9e,	// (0x00074f5b) vitu2_page_scroll_pane_t1

0xdbb5,	// (0x0007bd72) popup_char_count_window_g1

0xdbbe,	// (0x0007bd7b) popup_char_count_window_g2

0xdbc7,	// (0x0007bd84) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0007dc8e) popup_char_count_window_g

0xdbd0,	// (0x0007bd8d) popup_char_count_window_t1

0x954a,	// (0x00077707) main_vded2_pane

0xd16f,	// (0x0007b32c) aid_size_cell_imed_line

0xd179,	// (0x0007b336) grid_imed_line_width_pane

0xa2b6,	// (0x00078473) vid4_indicators_pane_g4

0xdbde,	// (0x0007bd9b) cell_imed_line_width_pane_ParamLimits

0xdbde,	// (0x0007bd9b) cell_imed_line_width_pane

0xdbf4,	// (0x0007bdb1) cell_imed_line_width_pane_g1

0xcf96,	// (0x0007b153) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0007dc95) cell_imed_line_width_pane_g

0x6dad,	// (0x00074f6a) main_vded2_pane_g1_ParamLimits

0x6dad,	// (0x00074f6a) main_vded2_pane_g1

0x6dc8,	// (0x00074f85) main_vded2_pane_g2_ParamLimits

0x6dc8,	// (0x00074f85) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0007dc9a) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0007dc9a) main_vded2_pane_g

0x6dda,	// (0x00074f97) vded2_slider_pane_ParamLimits

0x6dda,	// (0x00074f97) vded2_slider_pane

0x6dea,	// (0x00074fa7) aid_size_touch_vded2_end

0x6df4,	// (0x00074fb1) aid_size_touch_vded2_playhead

0xdbfd,	// (0x0007bdba) aid_size_touch_vded2_start

0xdc05,	// (0x0007bdc2) vded2_slider_bg_pane

0xdc0e,	// (0x0007bdcb) vded2_slider_pane_g1

0xdc17,	// (0x0007bdd4) vded2_slider_pane_g2

0x6dfe,	// (0x00074fbb) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0007dc9f) vded2_slider_pane_g

0xdc1f,	// (0x0007bddc) vded2_slider_bg_pane_g1

0xdc28,	// (0x0007bde5) vded2_slider_bg_pane_g2

0xdc31,	// (0x0007bdee) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0007dca6) vded2_slider_bg_pane_g

0x2ce1,	// (0x00070e9e) aid_postcard_touch_down_pane_ParamLimits

0x2ce1,	// (0x00070e9e) aid_postcard_touch_down_pane

0x2cf9,	// (0x00070eb6) aid_postcard_touch_up_pane_ParamLimits

0x2cf9,	// (0x00070eb6) aid_postcard_touch_up_pane

0x954a,	// (0x00077707) main_blid2_pane

0xc83b,	// (0x0007a9f8) popup_blid2_search_window

0x954a,	// (0x00077707) blid2_gps_pane

0x954a,	// (0x00077707) blid2_navig_pane

0x954a,	// (0x00077707) blid2_search_pane

0x954a,	// (0x00077707) blid2_tripm_pane

0x6e09,	// (0x00074fc6) blid2_search_pane_g1_ParamLimits

0x6e09,	// (0x00074fc6) blid2_search_pane_g1

0x6e1c,	// (0x00074fd9) blid2_search_pane_t1_ParamLimits

0x6e1c,	// (0x00074fd9) blid2_search_pane_t1

0x6e2e,	// (0x00074feb) aid_size_cell_blid2_gps_ParamLimits

0x6e2e,	// (0x00074feb) aid_size_cell_blid2_gps

0x6e46,	// (0x00075003) blid2_gps_pane_g1_ParamLimits

0x6e46,	// (0x00075003) blid2_gps_pane_g1

0x6e5a,	// (0x00075017) grid_blid2_satellite_pane_ParamLimits

0x6e5a,	// (0x00075017) grid_blid2_satellite_pane

0x6e72,	// (0x0007502f) blid2_navig_pane_g1_ParamLimits

0x6e72,	// (0x0007502f) blid2_navig_pane_g1

0x6e7e,	// (0x0007503b) blid2_navig_pane_t1_ParamLimits

0x6e7e,	// (0x0007503b) blid2_navig_pane_t1

0x6e99,	// (0x00075056) blid2_navig_pane_t2_ParamLimits

0x6e99,	// (0x00075056) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0007dcad) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0007dcad) blid2_navig_pane_t

0x6eb4,	// (0x00075071) blid2_navig_ring_pane_ParamLimits

0x6eb4,	// (0x00075071) blid2_navig_ring_pane

0x6ecf,	// (0x0007508c) blid2_speed_pane_ParamLimits

0x6ecf,	// (0x0007508c) blid2_speed_pane

0x6edb,	// (0x00075098) blid2_tripm_pane_g1_ParamLimits

0x6edb,	// (0x00075098) blid2_tripm_pane_g1

0x6ef6,	// (0x000750b3) blid2_tripm_pane_g2_ParamLimits

0x6ef6,	// (0x000750b3) blid2_tripm_pane_g2

0x6f0a,	// (0x000750c7) blid2_tripm_pane_g3_ParamLimits

0x6f0a,	// (0x000750c7) blid2_tripm_pane_g3

0x6f1e,	// (0x000750db) blid2_tripm_pane_g4_ParamLimits

0x6f1e,	// (0x000750db) blid2_tripm_pane_g4

0x6f32,	// (0x000750ef) blid2_tripm_pane_g5_ParamLimits

0x6f32,	// (0x000750ef) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0007dcb2) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0007dcb2) blid2_tripm_pane_g

0x6f58,	// (0x00075115) blid2_tripm_pane_t1_ParamLimits

0x6f58,	// (0x00075115) blid2_tripm_pane_t1

0x6f71,	// (0x0007512e) blid2_tripm_pane_t2_ParamLimits

0x6f71,	// (0x0007512e) blid2_tripm_pane_t2

0x6f8a,	// (0x00075147) blid2_tripm_pane_t3_ParamLimits

0x6f8a,	// (0x00075147) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0007dcbf) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0007dcbf) blid2_tripm_pane_t

0x6fd1,	// (0x0007518e) cell_blid2_satellite_pane_ParamLimits

0x6fd1,	// (0x0007518e) cell_blid2_satellite_pane

0x6fef,	// (0x000751ac) cell_blid2_satellite_pane_g1

0xdc3a,	// (0x0007bdf7) cell_blid2_satellite_pane_t1

0xcc7e,	// (0x0007ae3b) blid2_speed_pane_g1

0xdc48,	// (0x0007be05) blid2_speed_pane_t1

0xdc56,	// (0x0007be13) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0007dcc8) blid2_speed_pane_t

0xcc7e,	// (0x0007ae3b) blid2_navig_ring_pane_g1

0x6ff8,	// (0x000751b5) blid2_navig_ring_pane_g2

0x7000,	// (0x000751bd) blid2_navig_ring_pane_g3

0x7008,	// (0x000751c5) blid2_navig_ring_pane_g4

0x7010,	// (0x000751cd) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0007dccd) blid2_navig_ring_pane_g

0x954a,	// (0x00077707) bg_popup_window_pane_cp011

0xdc64,	// (0x0007be21) popup_blid2_search_window_g1

0xdc6c,	// (0x0007be29) popup_blid2_search_window_t1

0xdc7a,	// (0x0007be37) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0007dcd8) popup_blid2_search_window_t

0xabdb,	// (0x00078d98) main_browser_pane_g1

0xa8d9,	// (0x00078a96) main_browser_pane_ParamLimits

0xa261,	// (0x0007841e) bg_button_pane_cp011_ParamLimits

0x5ed9,	// (0x00074096) cell_vitu2_function_pane_g1_ParamLimits

0xc82d,	// (0x0007a9ea) bg_popup_sub_pane_cp22_ParamLimits

0x6888,	// (0x00074a45) input_focus_pane_cp08_ParamLimits

0x689f,	// (0x00074a5c) popup_vitu2_query_button_pane_ParamLimits

0x689f,	// (0x00074a5c) popup_vitu2_query_button_pane

0x68b0,	// (0x00074a6d) popup_vitu2_query_input_button_pane

0xd8fb,	// (0x0007bab8) popup_vitu2_query_window_g1_ParamLimits

0x68ba,	// (0x00074a77) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0007dbd9) popup_vitu2_query_window_g_ParamLimits

0x954a,	// (0x00077707) bg_button_pane_cp026

0x7018,	// (0x000751d5) popup_vitu2_query_input_button_pane_g1

0x954a,	// (0x00077707) bg_button_pane_cp025

0xdc88,	// (0x0007be45) popup_vitu2_query_button_pane_t1

0x4405,	// (0x000725c2) main_mp3_pane_t6

0x4413,	// (0x000725d0) popup_slider_window_cp01

0xa20c,	// (0x000783c9) cam4_battery_pane

0xa26f,	// (0x0007842c) cam4_battery_pane_cp02

0xa435,	// (0x000785f2) cam4_battery_pane_cp01

0xa435,	// (0x000785f2) cam4_battery_pane_cp03

0xd570,	// (0x0007b72d) cam4_battery_pane_g1

0xcc7e,	// (0x0007ae3b) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0007dcdd) cam4_battery_pane_g

0xcb44,	// (0x0007ad01) popup_blid_sat_info2_window_t11

0x25ec,	// (0x000707a9) aid_size_touch_mv_arrow_left_ParamLimits

0x2615,	// (0x000707d2) aid_size_touch_mv_arrow_right_ParamLimits

0xb325,	// (0x000794e2) navi_pane_g1_ParamLimits

0x2654,	// (0x00070811) navi_pane_g2_ParamLimits

0x2682,	// (0x0007083f) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0007d5a2) navi_pane_g_ParamLimits

0x26dc,	// (0x00070899) navi_pane_mv_t1_ParamLimits

0x50d6,	// (0x00073293) grid_imed_effect_pane_ParamLimits

0x1096,	// (0x0006f253) aid_placing_vt_slider_lsc

0xab26,	// (0x00078ce3) aid_placing_vt_slider_prt

0x95a3,	// (0x00077760) bg_tb_trans_pane_cp01_ParamLimits

0xcdce,	// (0x0007af8b) popup_image_details_window_g1_ParamLimits

0xcde1,	// (0x0007af9e) popup_image_details_window_g2_ParamLimits

0xcdf6,	// (0x0007afb3) popup_image_details_window_g3_ParamLimits

0xcdf6,	// (0x0007afb3) popup_image_details_window_g3

0xf718,	// (0x0007d8d5) popup_image_details_window_g_ParamLimits

0xce0a,	// (0x0007afc7) popup_image_details_window_t1_ParamLimits

0xce1c,	// (0x0007afd9) popup_image_details_window_t2_ParamLimits

0xce35,	// (0x0007aff2) popup_image_details_window_t3_ParamLimits

0xce49,	// (0x0007b006) popup_image_details_window_t4_ParamLimits

0xce64,	// (0x0007b021) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0007d8dc) popup_image_details_window_t_ParamLimits

0x6c3c,	// (0x00074df9) cl_header_name_pane_ParamLimits

0x6c3c,	// (0x00074df9) cl_header_name_pane

0x7020,	// (0x000751dd) cl_header_name_pane_t1_ParamLimits

0x7020,	// (0x000751dd) cl_header_name_pane_t1

0x7041,	// (0x000751fe) cl_header_name_pane_t2_ParamLimits

0x7041,	// (0x000751fe) cl_header_name_pane_t2

0x7083,	// (0x00075240) cl_header_name_pane_t3_ParamLimits

0x7083,	// (0x00075240) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0007dce2) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0007dce2) cl_header_name_pane_t

0x26ad,	// (0x0007086a) navi_pane_mv_g2_ParamLimits

0xd65e,	// (0x0007b81b) field_vitu2_entry_pane_g1_ParamLimits

0xd66a,	// (0x0007b827) field_vitu2_entry_pane_g2_ParamLimits

0xd676,	// (0x0007b833) field_vitu2_entry_pane_g3_ParamLimits

0xd676,	// (0x0007b833) field_vitu2_entry_pane_g3

0xf91b,	// (0x0007dad8) field_vitu2_entry_pane_g_ParamLimits

0xa308,	// (0x000784c5) cell_vitu2_itu_pane_g1_ParamLimits

0x5e6d,	// (0x0007402a) cell_vitu2_itu_pane_g2_ParamLimits

0x5e6d,	// (0x0007402a) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0007dae4) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0007dae4) cell_vitu2_itu_pane_g

0xa261,	// (0x0007841e) bg_vkb2_func_pane_cp05_ParamLimits

0xa261,	// (0x0007841e) bg_vkb2_func_pane_cp05

0xa261,	// (0x0007841e) bg_vkb2_func_pane_cp03

0xa261,	// (0x0007841e) bg_vkb2_func_pane_cp04

0xa261,	// (0x0007841e) bg_vkb2_func_pane_cp10_ParamLimits

0xa261,	// (0x0007841e) bg_vkb2_func_pane_cp10

0x6bde,	// (0x00074d9b) bg_vkb2_func_pane_cp08

0x6bc4,	// (0x00074d81) bg_vkb2_func_pane_cp06

0x6bd2,	// (0x00074d8f) bg_vkb2_func_pane_cp07

0xdb8b,	// (0x0007bd48) bg_vkb2_func_pane_cp11_ParamLimits

0xdb8b,	// (0x0007bd48) bg_vkb2_func_pane_cp11

0xdba0,	// (0x0007bd5d) bg_vkb2_func_pane_cp12_ParamLimits

0xdba0,	// (0x0007bd5d) bg_vkb2_func_pane_cp12

0x954a,	// (0x00077707) bg_vkb2_func_pane_cp09

0xd696,	// (0x0007b853) bg_vkb2_func_pane_g1

0xacec,	// (0x00078ea9) bg_vkb2_func_pane_g2

0xd69e,	// (0x0007b85b) bg_vkb2_func_pane_g3

0xd6a6,	// (0x0007b863) bg_vkb2_func_pane_g4

0xd8c0,	// (0x0007ba7d) bg_vkb2_func_pane_g5

0xd6be,	// (0x0007b87b) bg_vkb2_func_pane_g6

0xd6c6,	// (0x0007b883) bg_vkb2_func_pane_g7

0xd6b6,	// (0x0007b873) bg_vkb2_func_pane_g8

0xaccc,	// (0x00078e89) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0007dce9) bg_vkb2_func_pane_g

0x6f46,	// (0x00075103) blid2_tripm_pane_g6_ParamLimits

0x6f46,	// (0x00075103) blid2_tripm_pane_g6

0xd52a,	// (0x0007b6e7) mp4_progress_pane_g1

0x6fbd,	// (0x0007517a) blid2_tripm_values_pane_ParamLimits

0x6fbd,	// (0x0007517a) blid2_tripm_values_pane

0x70b4,	// (0x00075271) blid2_tripm_values_pane_t1

0x70c2,	// (0x0007527f) blid2_tripm_values_pane_t2

0x70d0,	// (0x0007528d) blid2_tripm_values_pane_t3

0x70de,	// (0x0007529b) blid2_tripm_values_pane_t4

0x70ec,	// (0x000752a9) blid2_tripm_values_pane_t5

0x70fa,	// (0x000752b7) blid2_tripm_values_pane_t6

0x7108,	// (0x000752c5) blid2_tripm_values_pane_t7

0x7116,	// (0x000752d3) blid2_tripm_values_pane_t8

0x7124,	// (0x000752e1) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0007dcfc) blid2_tripm_values_pane_t

0x10d3,	// (0x0006f290) call_video_pane_t1_ParamLimits

0x10ed,	// (0x0006f2aa) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0007d42b) call_video_pane_t_ParamLimits

0x2c2e,	// (0x00070deb) msg_header_pane_g1_ParamLimits

0xb548,	// (0x00079705) msg_header_pane_g2_ParamLimits

0xb548,	// (0x00079705) msg_header_pane_g2

0x0001,

0xf488,	// (0x0007d645) msg_header_pane_g_ParamLimits

0xf488,	// (0x0007d645) msg_header_pane_g

0xa8d9,	// (0x00078a96) main_clock2_pane_ParamLimits

0x4dbd,	// (0x00072f7a) grid_clock2_toolbar_pane_ParamLimits

0x4dbd,	// (0x00072f7a) grid_clock2_toolbar_pane

0x4dbd,	// (0x00072f7a) listscroll_clock2_pane_ParamLimits

0x4dbd,	// (0x00072f7a) listscroll_clock2_pane

0x4eb4,	// (0x00073071) main_clock2_pane_t3_ParamLimits

0x4eb4,	// (0x00073071) main_clock2_pane_t3

0x4ed8,	// (0x00073095) main_clock2_pane_t4_ParamLimits

0x4ed8,	// (0x00073095) main_clock2_pane_t4

0xdc96,	// (0x0007be53) cell_clock2_toolbar_pane

0xdc9e,	// (0x0007be5b) cell_clock2_toolbar_pane_cp01

0xdc9e,	// (0x0007be5b) cell_clock2_toolbar_pane_cp02

0xdca6,	// (0x0007be63) cell_clock2_toolbar_pane_cp03

0xdcae,	// (0x0007be6b) list_clock2_pane

0xb28b,	// (0x00079448) scroll_pane_cp10

0xdcb6,	// (0x0007be73) list_single_clock2_pane_ParamLimits

0xdcb6,	// (0x0007be73) list_single_clock2_pane

0xaa8f,	// (0x00078c4c) list_highlight_pane_cp08

0xdcc3,	// (0x0007be80) list_single_clock2_pane_t1

0xdcd1,	// (0x0007be8e) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0007dd0f) list_single_clock2_pane_t

0x954a,	// (0x00077707) bg_button_pane_cp10

0xdcdf,	// (0x0007be9c) cell_clock2_toolbar_pane_g1

0x2c6d,	// (0x00070e2a) aid_main_viewer_pane_g1_ParamLimits

0x2c6d,	// (0x00070e2a) aid_main_viewer_pane_g1

0x2c7b,	// (0x00070e38) aid_main_viewer_pane_g2_ParamLimits

0x2c7b,	// (0x00070e38) aid_main_viewer_pane_g2

0x2c89,	// (0x00070e46) aid_main_viewer_pane_g3_ParamLimits

0x2c89,	// (0x00070e46) aid_main_viewer_pane_g3

0x2c98,	// (0x00070e55) aid_main_viewer_pane_g4_ParamLimits

0x2c98,	// (0x00070e55) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0007d656) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0007d656) aid_main_viewer_pane_g

0x35eb,	// (0x000717a8) main_calc_pane_ParamLimits

0x35ff,	// (0x000717bc) main_dialer2_pane_ParamLimits

0x954a,	// (0x00077707) main_cam6_pane

0x954a,	// (0x00077707) main_vid6_pane

0x4dc9,	// (0x00072f86) listscroll_gen_pane_cp06_ParamLimits

0x4dc9,	// (0x00072f86) listscroll_gen_pane_cp06

0x4efb,	// (0x000730b8) main_clock2_pane_t5_ParamLimits

0x4efb,	// (0x000730b8) main_clock2_pane_t5

0x4f5b,	// (0x00073118) aid_call2_pane_cp10_ParamLimits

0x4f6d,	// (0x0007312a) aid_call_pane_cp10_ParamLimits

0xb2fa,	// (0x000794b7) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2fa,	// (0x000794b7) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4f7f,	// (0x0007313c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4f7f,	// (0x0007313c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2fa,	// (0x000794b7) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0007d991) popup_clock_analogue_window_cp10_g_ParamLimits

0x4f95,	// (0x00073152) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5628,	// (0x000737e5) cell_dialer2_keypad_pane_g2_ParamLimits

0x5628,	// (0x000737e5) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0007da77) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0007da77) cell_dialer2_keypad_pane_g

0x5644,	// (0x00073801) cell_dialer2_keypad_pane_t1

0x6204,	// (0x000743c1) main_cset_text2_pane_ParamLimits

0x6204,	// (0x000743c1) main_cset_text2_pane

0xdaf3,	// (0x0007bcb0) area_vitu2_query_pane_g1_ParamLimits

0x6b63,	// (0x00074d20) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0007dc2c) area_vitu2_query_pane_g_ParamLimits

0xa411,	// (0x000785ce) area_vitu2_query_pane_t7_ParamLimits

0xa411,	// (0x000785ce) area_vitu2_query_pane_t7

0x6bc4,	// (0x00074d81) bg_button_pane_cp018_ParamLimits

0x6bd2,	// (0x00074d8f) bg_button_pane_cp021_ParamLimits

0x6bde,	// (0x00074d9b) bg_button_pane_cp022_ParamLimits

0x6bde,	// (0x00074d9b) bg_vkb2_func_pane_cp08_ParamLimits

0x6bc4,	// (0x00074d81) bg_vkb2_func_pane_cp06_ParamLimits

0x6bd2,	// (0x00074d8f) bg_vkb2_func_pane_cp07_ParamLimits

0x6bef,	// (0x00074dac) input_focus_pane_cp09_ParamLimits

0xa4d1,	// (0x0007868e) cam6_autofocus_pane_ParamLimits

0xa4d1,	// (0x0007868e) cam6_autofocus_pane

0x7132,	// (0x000752ef) cam6_image_uncrop_pane_ParamLimits

0x7132,	// (0x000752ef) cam6_image_uncrop_pane

0x7141,	// (0x000752fe) cam6_indi_pane_ParamLimits

0x7141,	// (0x000752fe) cam6_indi_pane

0x7157,	// (0x00075314) cam6_mode_pane_ParamLimits

0x7157,	// (0x00075314) cam6_mode_pane

0x7169,	// (0x00075326) cam6_timer_pane_ParamLimits

0x7169,	// (0x00075326) cam6_timer_pane

0x7175,	// (0x00075332) cam6_zoom_pane_ParamLimits

0x7175,	// (0x00075332) cam6_zoom_pane

0x7183,	// (0x00075340) cam6_mode_pane_g1_ParamLimits

0x7183,	// (0x00075340) cam6_mode_pane_g1

0x7193,	// (0x00075350) cam6_mode_pane_g2_ParamLimits

0x7193,	// (0x00075350) cam6_mode_pane_g2

0x71a3,	// (0x00075360) cam6_mode_pane_g3_ParamLimits

0x71a3,	// (0x00075360) cam6_mode_pane_g3

0x71b3,	// (0x00075370) cam6_mode_pane_g4_ParamLimits

0x71b3,	// (0x00075370) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0007dd14) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0007dd14) cam6_mode_pane_g

0xdce7,	// (0x0007bea4) bg_tb_trans_pane_cp08_ParamLimits

0xdce7,	// (0x0007bea4) bg_tb_trans_pane_cp08

0xdcf5,	// (0x0007beb2) cam6_battery_pane_ParamLimits

0xdcf5,	// (0x0007beb2) cam6_battery_pane

0xdd0b,	// (0x0007bec8) cam6_indi_pane_g1_ParamLimits

0xdd0b,	// (0x0007bec8) cam6_indi_pane_g1

0xdd1d,	// (0x0007beda) cam6_indi_pane_g2_ParamLimits

0xdd1d,	// (0x0007beda) cam6_indi_pane_g2

0xdd2f,	// (0x0007beec) cam6_indi_pane_g3_ParamLimits

0xdd2f,	// (0x0007beec) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0007dd1d) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0007dd1d) cam6_indi_pane_g

0xdd41,	// (0x0007befe) cam6_indi_pane_t1_ParamLimits

0xdd41,	// (0x0007befe) cam6_indi_pane_t1

0x5c0d,	// (0x00073dca) cam6_autofocus_pane_g1

0x5c05,	// (0x00073dc2) cam6_autofocus_pane_g2

0x5c1d,	// (0x00073dda) cam6_autofocus_pane_g3

0x5c15,	// (0x00073dd2) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0007dd24) cam6_autofocus_pane_g

0xdd67,	// (0x0007bf24) cam6_timer_pane_g1

0xdd6f,	// (0x0007bf2c) cam6_timer_pane_t1

0xdd7d,	// (0x0007bf3a) cam6_zoom_cont_pane

0xdd85,	// (0x0007bf42) cam6_zoom_pane_g1

0xdd8d,	// (0x0007bf4a) cam6_zoom_pane_g2

0x71c3,	// (0x00075380) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0007dd2d) cam6_zoom_pane_g

0xcc7e,	// (0x0007ae3b) cam6_battery_pane_g1

0xcc7e,	// (0x0007ae3b) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0007d899) cam6_battery_pane_g

0xdd95,	// (0x0007bf52) cam6_zoom_cont_pane_g1

0xdd9e,	// (0x0007bf5b) cam6_zoom_cont_pane_g2

0xdda7,	// (0x0007bf64) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0007dd34) cam6_zoom_cont_pane_g

0x71e0,	// (0x0007539d) cam6_mode_pane_cp_ParamLimits

0x71e0,	// (0x0007539d) cam6_mode_pane_cp

0x71f2,	// (0x000753af) cam6_zoom_pane_cp_ParamLimits

0x71f2,	// (0x000753af) cam6_zoom_pane_cp

0x7200,	// (0x000753bd) vid6_image_uncrop_cif_pane_ParamLimits

0x7200,	// (0x000753bd) vid6_image_uncrop_cif_pane

0x7210,	// (0x000753cd) vid6_image_uncrop_nhd_pane_ParamLimits

0x7210,	// (0x000753cd) vid6_image_uncrop_nhd_pane

0x721f,	// (0x000753dc) vid6_image_uncrop_vga_pane_ParamLimits

0x721f,	// (0x000753dc) vid6_image_uncrop_vga_pane

0x722e,	// (0x000753eb) vid6_image_uncrop_wvga_pane_ParamLimits

0x722e,	// (0x000753eb) vid6_image_uncrop_wvga_pane

0x723d,	// (0x000753fa) vid6_indi_pane_ParamLimits

0x723d,	// (0x000753fa) vid6_indi_pane

0xdce7,	// (0x0007bea4) bg_tb_trans_pane_cp09_ParamLimits

0xdce7,	// (0x0007bea4) bg_tb_trans_pane_cp09

0xddbf,	// (0x0007bf7c) cam6_battery_pane_cp_ParamLimits

0xddbf,	// (0x0007bf7c) cam6_battery_pane_cp

0xddcb,	// (0x0007bf88) vid6_indi_pane_g1_ParamLimits

0xddcb,	// (0x0007bf88) vid6_indi_pane_g1

0xdddd,	// (0x0007bf9a) vid6_indi_pane_g2_ParamLimits

0xdddd,	// (0x0007bf9a) vid6_indi_pane_g2

0xddef,	// (0x0007bfac) vid6_indi_pane_g3_ParamLimits

0xddef,	// (0x0007bfac) vid6_indi_pane_g3

0xde06,	// (0x0007bfc3) vid6_indi_pane_g4_ParamLimits

0xde06,	// (0x0007bfc3) vid6_indi_pane_g4

0xde1d,	// (0x0007bfda) vid6_indi_pane_g5_ParamLimits

0xde1d,	// (0x0007bfda) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0007dd3b) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0007dd3b) vid6_indi_pane_g

0xde37,	// (0x0007bff4) vid6_indi_pane_t1_ParamLimits

0xde37,	// (0x0007bff4) vid6_indi_pane_t1

0xde4d,	// (0x0007c00a) vid6_indi_pane_t2_ParamLimits

0xde4d,	// (0x0007c00a) vid6_indi_pane_t2

0xde75,	// (0x0007c032) vid6_indi_pane_t3_ParamLimits

0xde75,	// (0x0007c032) vid6_indi_pane_t3

0xde9d,	// (0x0007c05a) vid6_indi_pane_t4_ParamLimits

0xde9d,	// (0x0007c05a) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0007dd46) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0007dd46) vid6_indi_pane_t

0xdec1,	// (0x0007c07e) wait_bar_pane_cp08

0x7255,	// (0x00075412) main_cset_text2_pane_t1_ParamLimits

0x7255,	// (0x00075412) main_cset_text2_pane_t1

0x71cb,	// (0x00075388) listscroll_gen_pane_cp06_t1_ParamLimits

0x71cb,	// (0x00075388) listscroll_gen_pane_cp06_t1

0x954a,	// (0x00077707) main_cam6_set_pane

0xa1fe,	// (0x000783bb) bg_tb_trans_pane_cp06_ParamLimits

0xa214,	// (0x000783d1) cam4_indicators_pane_g1_ParamLimits

0xa225,	// (0x000783e2) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0007dab4) cam4_indicators_pane_g_ParamLimits

0xa23d,	// (0x000783fa) cam4_indicators_pane_t1_ParamLimits

0xa261,	// (0x0007841e) bg_tb_trans_pane_cp07_ParamLimits

0xa279,	// (0x00078436) vid4_indicators_pane_g1_ParamLimits

0xa28f,	// (0x0007844c) vid4_indicators_pane_g2_ParamLimits

0xa2a3,	// (0x00078460) vid4_indicators_pane_g3_ParamLimits

0xa2b6,	// (0x00078473) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0007dac6) vid4_indicators_pane_g_ParamLimits

0xa2d4,	// (0x00078491) vid4_indicators_pane_t1_ParamLimits

0x6d30,	// (0x00074eed) vid4_progress_pane_g1_ParamLimits

0x6d42,	// (0x00074eff) vid4_progress_pane_g2_ParamLimits

0x9e85,	// (0x00078042) vid4_progress_pane_g3_ParamLimits

0xa43d,	// (0x000785fa) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0007dc77) vid4_progress_pane_g_ParamLimits

0xa45b,	// (0x00078618) vid4_progress_pane_t1_ParamLimits

0xa470,	// (0x0007862d) vid4_progress_pane_t2_ParamLimits

0xa486,	// (0x00078643) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0007dc82) vid4_progress_pane_t_ParamLimits

0xa49b,	// (0x00078658) wait_bar_pane_cp07_ParamLimits

0x7273,	// (0x00075430) main_cam6_set_pane_g2_ParamLimits

0x7273,	// (0x00075430) main_cam6_set_pane_g2

0x7299,	// (0x00075456) main_cset6_listscroll_pane_ParamLimits

0x7299,	// (0x00075456) main_cset6_listscroll_pane

0x72b7,	// (0x00075474) main_cset6_slider_pane_ParamLimits

0x72b7,	// (0x00075474) main_cset6_slider_pane

0x72cd,	// (0x0007548a) main_cset6_text2_pane_ParamLimits

0x72cd,	// (0x0007548a) main_cset6_text2_pane

0xded0,	// (0x0007c08d) main_cset6_text_pane

0xded8,	// (0x0007c095) main_cset_list_pane_copy1_ParamLimits

0xded8,	// (0x0007c095) main_cset_list_pane_copy1

0xdee8,	// (0x0007c0a5) scroll_pane_cp028_copy1

0x2198,	// (0x00070355) cset_list_set_pane_copy1

0x72db,	// (0x00075498) aid_position_infowindow_above_copy1

0x72e3,	// (0x000754a0) aid_position_infowindow_below_copy1

0x72eb,	// (0x000754a8) cset_list_set_pane_g1_copy1

0x72f3,	// (0x000754b0) cset_list_set_pane_g3_copy1_ParamLimits

0x72f3,	// (0x000754b0) cset_list_set_pane_g3_copy1

0x7302,	// (0x000754bf) cset_list_set_pane_t1_copy1_ParamLimits

0x7302,	// (0x000754bf) cset_list_set_pane_t1_copy1

0x95a3,	// (0x00077760) list_highlight_pane_cp021_copy1_ParamLimits

0x95a3,	// (0x00077760) list_highlight_pane_cp021_copy1

0xdef1,	// (0x0007c0ae) cset6_slider_pane_ParamLimits

0xdef1,	// (0x0007c0ae) cset6_slider_pane

0xdf1d,	// (0x0007c0da) main_cset6_slider_pane_g1_ParamLimits

0xdf1d,	// (0x0007c0da) main_cset6_slider_pane_g1

0x7317,	// (0x000754d4) main_cset6_slider_pane_g2_ParamLimits

0x7317,	// (0x000754d4) main_cset6_slider_pane_g2

0xdf45,	// (0x0007c102) main_cset6_slider_pane_g3_ParamLimits

0xdf45,	// (0x0007c102) main_cset6_slider_pane_g3

0x733f,	// (0x000754fc) main_cset6_slider_pane_g4_ParamLimits

0x733f,	// (0x000754fc) main_cset6_slider_pane_g4

0x734b,	// (0x00075508) main_cset6_slider_pane_g5_ParamLimits

0x734b,	// (0x00075508) main_cset6_slider_pane_g5

0xd7c9,	// (0x0007b986) main_cset6_slider_pane_g7_ParamLimits

0xd7c9,	// (0x0007b986) main_cset6_slider_pane_g7

0xd7d5,	// (0x0007b992) main_cset6_slider_pane_g8_ParamLimits

0xd7d5,	// (0x0007b992) main_cset6_slider_pane_g8

0x62b3,	// (0x00074470) main_cset6_slider_pane_g9_ParamLimits

0x62b3,	// (0x00074470) main_cset6_slider_pane_g9

0x62bf,	// (0x0007447c) main_cset6_slider_pane_g10_ParamLimits

0x62bf,	// (0x0007447c) main_cset6_slider_pane_g10

0x62cb,	// (0x00074488) main_cset6_slider_pane_g11_ParamLimits

0x62cb,	// (0x00074488) main_cset6_slider_pane_g11

0x62d7,	// (0x00074494) main_cset6_slider_pane_g12_ParamLimits

0x62d7,	// (0x00074494) main_cset6_slider_pane_g12

0x62e3,	// (0x000744a0) main_cset6_slider_pane_g13_ParamLimits

0x62e3,	// (0x000744a0) main_cset6_slider_pane_g13

0x62ef,	// (0x000744ac) main_cset6_slider_pane_g14_ParamLimits

0x62ef,	// (0x000744ac) main_cset6_slider_pane_g14

0x7359,	// (0x00075516) main_cset6_slider_pane_g15_ParamLimits

0x7359,	// (0x00075516) main_cset6_slider_pane_g15

0x6313,	// (0x000744d0) main_cset6_slider_pane_g16_ParamLimits

0x6313,	// (0x000744d0) main_cset6_slider_pane_g16

0x6321,	// (0x000744de) main_cset6_slider_pane_g17_ParamLimits

0x6321,	// (0x000744de) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0007dd4f) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0007dd4f) main_cset6_slider_pane_g

0xdf51,	// (0x0007c10e) main_cset6_slider_pane_t1_ParamLimits

0xdf51,	// (0x0007c10e) main_cset6_slider_pane_t1

0x7389,	// (0x00075546) main_cset6_slider_pane_t2_ParamLimits

0x7389,	// (0x00075546) main_cset6_slider_pane_t2

0x73b4,	// (0x00075571) main_cset6_slider_pane_t3_ParamLimits

0x73b4,	// (0x00075571) main_cset6_slider_pane_t3

0x73df,	// (0x0007559c) main_cset6_slider_pane_t4_ParamLimits

0x73df,	// (0x0007559c) main_cset6_slider_pane_t4

0x740a,	// (0x000755c7) main_cset6_slider_pane_t5_ParamLimits

0x740a,	// (0x000755c7) main_cset6_slider_pane_t5

0xdf92,	// (0x0007c14f) main_cset6_slider_pane_t7_ParamLimits

0xdf92,	// (0x0007c14f) main_cset6_slider_pane_t7

0x7437,	// (0x000755f4) main_cset6_slider_pane_t8_ParamLimits

0x7437,	// (0x000755f4) main_cset6_slider_pane_t8

0x745b,	// (0x00075618) main_cset6_slider_pane_t9_ParamLimits

0x745b,	// (0x00075618) main_cset6_slider_pane_t9

0x747f,	// (0x0007563c) main_cset6_slider_pane_t10_ParamLimits

0x747f,	// (0x0007563c) main_cset6_slider_pane_t10

0x74a3,	// (0x00075660) main_cset6_slider_pane_t11_ParamLimits

0x74a3,	// (0x00075660) main_cset6_slider_pane_t11

0xdfc8,	// (0x0007c185) main_cset6_slider_pane_t14_ParamLimits

0xdfc8,	// (0x0007c185) main_cset6_slider_pane_t14

0xe001,	// (0x0007c1be) main_cset6_slider_pane_t15_ParamLimits

0xe001,	// (0x0007c1be) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0007dd74) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0007dd74) main_cset6_slider_pane_t

0xe03a,	// (0x0007c1f7) cset_slider_pane_g1_copy1

0xe043,	// (0x0007c200) cset_slider_pane_g2_copy1

0xe04c,	// (0x0007c209) cset_slider_pane_g3_copy1

0x954a,	// (0x00077707) bg_popup_sub_pane_cp011_copy1

0xe055,	// (0x0007c212) main_cset_text_pane_g1_copy1

0xd90f,	// (0x0007bacc) main_cset_text_pane_t1_copy1

0xd91d,	// (0x0007bada) main_cset_text_pane_t2_copy1

0xd92b,	// (0x0007bae8) main_cset_text_pane_t3_copy1

0xd939,	// (0x0007baf6) main_cset_text_pane_t4_copy1

0xd947,	// (0x0007bb04) main_cset_text_pane_t5_copy1

0xe05d,	// (0x0007c21a) main_cset_text_pane_t6_copy1

0xe06b,	// (0x0007c228) main_cset_text_pane_t7_copy1

0x7255,	// (0x00075412) main_cset_text2_pane_t1_copy1

0x95a3,	// (0x00077760) main_ncimui_pane

0x388d,	// (0x00071a4a) popup_query_ncimui_window_ParamLimits

0x388d,	// (0x00071a4a) popup_query_ncimui_window

0x9f51,	// (0x0007810e) field_cale_ev2_pane_g4_ParamLimits

0x9f51,	// (0x0007810e) field_cale_ev2_pane_g4

0x54fa,	// (0x000736b7) cell_video_dialer_keypad_pane_g2_ParamLimits

0x54fa,	// (0x000736b7) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0007da52) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0007da52) cell_video_dialer_keypad_pane_g

0x5512,	// (0x000736cf) cell_video_dialer_keypad_pane_t1

0x954a,	// (0x00077707) bg_popup_window_pane_cp012

0xb177,	// (0x00079334) heading_pane_cp06

0xe097,	// (0x0007c254) ncim_query_content_pane

0x954a,	// (0x00077707) bg_popup_heading_pane_cp01

0xe09f,	// (0x0007c25c) ncim_heading_pane_t1

0xe0ad,	// (0x0007c26a) ncim_indicator_popup_pane

0xe0bf,	// (0x0007c27c) ncim_query_button_pane

0xe0d5,	// (0x0007c292) ncim_query_content_pane_t1

0xe0e7,	// (0x0007c2a4) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0007ddb8) ncim_query_content_pane_t

0xe121,	// (0x0007c2de) ncim_query_list_pane

0xe133,	// (0x0007c2f0) ncim_query_popup_pane

0xe0ad,	// (0x0007c26a) ncim_indicator_popup_pane_ParamLimits

0x7694,	// (0x00075851) ncim_query_content_pane_g1_ParamLimits

0x7694,	// (0x00075851) ncim_query_content_pane_g1

0xe0d5,	// (0x0007c292) ncim_query_content_pane_t1_ParamLimits

0xe0e7,	// (0x0007c2a4) ncim_query_content_pane_t2_ParamLimits

0x76a0,	// (0x0007585d) ncim_query_content_pane_t3_ParamLimits

0x76a0,	// (0x0007585d) ncim_query_content_pane_t3

0x76c8,	// (0x00075885) ncim_query_content_pane_t4_ParamLimits

0x76c8,	// (0x00075885) ncim_query_content_pane_t4

0x76f0,	// (0x000758ad) ncim_query_content_pane_t5_ParamLimits

0x76f0,	// (0x000758ad) ncim_query_content_pane_t5

0xe0f9,	// (0x0007c2b6) ncim_query_content_pane_t6_ParamLimits

0xe0f9,	// (0x0007c2b6) ncim_query_content_pane_t6

0xfbfb,	// (0x0007ddb8) ncim_query_content_pane_t_ParamLimits

0xe121,	// (0x0007c2de) ncim_query_list_pane_ParamLimits

0xe133,	// (0x0007c2f0) ncim_query_popup_pane_ParamLimits

0xe147,	// (0x0007c304) wait_bar_pane_cp04

0x954a,	// (0x00077707) input_focus_pane_cp011

0xe14f,	// (0x0007c30c) ncim_query_popup_pane_t1

0xe15d,	// (0x0007c31a) ncim_list_query_list_pane_ParamLimits

0xe15d,	// (0x0007c31a) ncim_list_query_list_pane

0x954a,	// (0x00077707) bg_button_pane_cp027

0xe170,	// (0x0007c32d) ncim_query_button_pane_g1

0x954a,	// (0x00077707) list_highlight_pane_cp012

0xe17a,	// (0x0007c337) ncim_list_query_list_pane_g1

0xe182,	// (0x0007c33f) ncim_list_query_list_pane_t1

0xa231,	// (0x000783ee) cam4_indicators_pane_g3_ParamLimits

0xa231,	// (0x000783ee) cam4_indicators_pane_g3

0xa2c2,	// (0x0007847f) vid4_indicators_pane_g5_ParamLimits

0xa2c2,	// (0x0007847f) vid4_indicators_pane_g5

0xa44c,	// (0x00078609) vid4_progress_pane_g5_ParamLimits

0xa44c,	// (0x00078609) vid4_progress_pane_g5

0x7582,	// (0x0007573f) main_ncimui_pane_g1

0x75e8,	// (0x000757a5) ncimui_group_query_pane_ParamLimits

0x75e8,	// (0x000757a5) ncimui_group_query_pane

0x7630,	// (0x000757ed) ncimui_list_pane_ParamLimits

0x7630,	// (0x000757ed) ncimui_list_pane

0x7657,	// (0x00075814) ncimui_text_pane_ParamLimits

0x7657,	// (0x00075814) ncimui_text_pane

0x7718,	// (0x000758d5) ncimui_text_pane_t1_ParamLimits

0x7718,	// (0x000758d5) ncimui_text_pane_t1

0xe190,	// (0x0007c34d) ncimui_list_single_graphic_pane_ParamLimits

0xe190,	// (0x0007c34d) ncimui_list_single_graphic_pane

0x7736,	// (0x000758f3) ncimui_query_pane_ParamLimits

0x7736,	// (0x000758f3) ncimui_query_pane

0x954a,	// (0x00077707) list_highlight_pane_cp013

0xe1a0,	// (0x0007c35d) ncim_list_query_list_pane_t1_copy1

0xe17a,	// (0x0007c337) ncim_list_single_graphic_pane_g1

0xe1ae,	// (0x0007c36b) ncim_query_button_pane_cp01

0xe1ba,	// (0x0007c377) ncim_query_entry_pane_ParamLimits

0xe1ba,	// (0x0007c377) ncim_query_entry_pane

0xe1cd,	// (0x0007c38a) ncimui_query_pane_g1

0xe1d9,	// (0x0007c396) ncimui_query_pane_t1_ParamLimits

0xe1d9,	// (0x0007c396) ncimui_query_pane_t1

0x95a3,	// (0x00077760) input_focus_pane_cp012

0xe1f2,	// (0x0007c3af) ncim_query_entry_pane_t1

0xa8d9,	// (0x00078a96) main_im_pane_ParamLimits

0x95a3,	// (0x00077760) main_mobtv_pane_ParamLimits

0x95a3,	// (0x00077760) main_mobtv_pane

0x7371,	// (0x0007552e) main_cset6_slider_pane_g18_ParamLimits

0x7371,	// (0x0007552e) main_cset6_slider_pane_g18

0x737d,	// (0x0007553a) main_cset6_slider_pane_g19_ParamLimits

0x737d,	// (0x0007553a) main_cset6_slider_pane_g19

0x7749,	// (0x00075906) bg_main_mobtv_pane_ParamLimits

0x7749,	// (0x00075906) bg_main_mobtv_pane

0x7757,	// (0x00075914) main_mobtv_info_pane

0x7762,	// (0x0007591f) main_mobtv_loading_pane_ParamLimits

0x7762,	// (0x0007591f) main_mobtv_loading_pane

0xe204,	// (0x0007c3c1) main_mobtv_pg_channel_list_pane

0xe20e,	// (0x0007c3cb) main_mobtv_pg_hdr_pane

0x776f,	// (0x0007592c) main_mobtv_programe_curr_pane_ParamLimits

0x776f,	// (0x0007592c) main_mobtv_programe_curr_pane

0x777c,	// (0x00075939) main_mobtv_programe_next_pane_ParamLimits

0x777c,	// (0x00075939) main_mobtv_programe_next_pane

0xe217,	// (0x0007c3d4) popup_mobtv_noti_window

0xcc7e,	// (0x0007ae3b) main_tv_pg_hdr_pane_g1

0xe221,	// (0x0007c3de) main_tv_pg_hdr_pane_g2

0xe229,	// (0x0007c3e6) main_tv_pg_hdr_pane_g3

0xe231,	// (0x0007c3ee) main_tv_pg_hdr_pane_g4

0xe239,	// (0x0007c3f6) main_tv_pg_hdr_pane_g5

0xe243,	// (0x0007c400) main_tv_pg_hdr_pane_g6

0xe24d,	// (0x0007c40a) main_tv_pg_hdr_pane_g7

0xe257,	// (0x0007c414) main_tv_pg_hdr_pane_g8

0xe261,	// (0x0007c41e) main_tv_pg_hdr_pane_g9

0xe26b,	// (0x0007c428) main_tv_pg_hdr_pane_g10

0xe275,	// (0x0007c432) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0007ddc5) main_tv_pg_hdr_pane_g

0xe27f,	// (0x0007c43c) main_tv_pg_hdr_pane_t1

0xe28d,	// (0x0007c44a) main_tv_pg_hdr_pane_t2

0xe29b,	// (0x0007c458) main_tv_pg_hdr_pane_t3

0xe2ab,	// (0x0007c468) main_tv_pg_hdr_pane_t4

0xe2bb,	// (0x0007c478) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0007dddc) main_tv_pg_hdr_pane_t

0xe2cb,	// (0x0007c488) single_mobtv_pg_channel_pane_ParamLimits

0xe2cb,	// (0x0007c488) single_mobtv_pg_channel_pane

0xe2fd,	// (0x0007c4ba) single_mobtv_pg_channel_table_pane

0xe306,	// (0x0007c4c3) single_mobtv_pg_channel_thumb_pane

0xe30f,	// (0x0007c4cc) single_tv_pg_channel_pane_g1

0xe318,	// (0x0007c4d5) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0007dde7) single_tv_pg_channel_pane_g

0xceae,	// (0x0007b06b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xceae,	// (0x0007b06b) bg_single_mobtv_pg_channel_thumb_pane

0xe321,	// (0x0007c4de) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe321,	// (0x0007c4de) single_mobtv_pg_channel_thumb_pane_g1

0xe32f,	// (0x0007c4ec) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe32f,	// (0x0007c4ec) single_mobtv_pg_channel_thumb_pane_g2

0xe33b,	// (0x0007c4f8) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe33b,	// (0x0007c4f8) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0007ddec) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0007ddec) single_mobtv_pg_channel_thumb_pane_g

0xe347,	// (0x0007c504) single_mobtv_pg_channel_thumb_pane_t1

0xe355,	// (0x0007c512) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0007ddf3) single_mobtv_pg_channel_thumb_pane_t

0xcc7e,	// (0x0007ae3b) bg_single_mobtv_pg_channel_table_pane_g1

0xcc7e,	// (0x0007ae3b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0007d899) bg_single_mobtv_pg_channel_table_pane_g

0xe363,	// (0x0007c520) single_mobtv_pg_channel_table_pane_t1

0xe371,	// (0x0007c52e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0007ddf8) single_mobtv_pg_channel_table_pane_t

0x7791,	// (0x0007594e) main_mobtv_info_pane_g1_ParamLimits

0x7791,	// (0x0007594e) main_mobtv_info_pane_g1

0x77af,	// (0x0007596c) main_mobtv_info_pane_t1_ParamLimits

0x77af,	// (0x0007596c) main_mobtv_info_pane_t1

0x7827,	// (0x000759e4) main_mobtv_info_pane_t2_ParamLimits

0x7827,	// (0x000759e4) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0007de02) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0007de02) main_mobtv_info_pane_t

0x78b6,	// (0x00075a73) wait_bar_pane_cp05

0x78c8,	// (0x00075a85) main_mobtv_loading_pane_g1_ParamLimits

0x78c8,	// (0x00075a85) main_mobtv_loading_pane_g1

0x78d9,	// (0x00075a96) main_mobtv_loading_pane_g2_ParamLimits

0x78d9,	// (0x00075a96) main_mobtv_loading_pane_g2

0x78e5,	// (0x00075aa2) main_mobtv_loading_pane_g3_ParamLimits

0x78e5,	// (0x00075aa2) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0007de09) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0007de09) main_mobtv_loading_pane_g

0xe37f,	// (0x0007c53c) main_mobtv_loading_pane_t1_ParamLimits

0xe37f,	// (0x0007c53c) main_mobtv_loading_pane_t1

0xe397,	// (0x0007c554) main_mobtv_loading_pane_t2_ParamLimits

0xe397,	// (0x0007c554) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0007de10) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0007de10) main_mobtv_loading_pane_t

0x78f8,	// (0x00075ab5) wait_bar_pane_cp06_ParamLimits

0x78f8,	// (0x00075ab5) wait_bar_pane_cp06

0xe3bb,	// (0x0007c578) main_mobtv_programe_curr_pane_t1

0xe3c9,	// (0x0007c586) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0007de15) main_mobtv_programe_curr_pane_t

0xe3d7,	// (0x0007c594) main_mobtv_programe_next_pane_t1

0xe3e5,	// (0x0007c5a2) main_mobtv_programe_next_pane_t2

0xe3f3,	// (0x0007c5b0) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0007de1a) main_mobtv_programe_next_pane_t

0x954a,	// (0x00077707) bg_popup_mobtv_noti_window_pane

0xe401,	// (0x0007c5be) popup_mobtv_noti_window_g1

0xe409,	// (0x0007c5c6) popup_mobtv_noti_window_t1

0xe417,	// (0x0007c5d4) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0007de21) popup_mobtv_noti_window_t

0xcc7e,	// (0x0007ae3b) bg_popup_mobtv_noti_window_pane_g1

0x954a,	// (0x00077707) sc_clock_pane

0x954a,	// (0x00077707) main_fs_bigclock_pane

0x6fa7,	// (0x00075164) blid2_tripm_pane_t4_ParamLimits

0x6fa7,	// (0x00075164) blid2_tripm_pane_t4

0x7907,	// (0x00075ac4) sc_clock_pane_g1_ParamLimits

0x7907,	// (0x00075ac4) sc_clock_pane_g1

0x7919,	// (0x00075ad6) sc_clock_pane_t1_ParamLimits

0x7919,	// (0x00075ad6) sc_clock_pane_t1

0x793d,	// (0x00075afa) sc_clock_pane_t2_ParamLimits

0x793d,	// (0x00075afa) sc_clock_pane_t2

0x7955,	// (0x00075b12) sc_clock_pane_t3_ParamLimits

0x7955,	// (0x00075b12) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0007de26) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0007de26) sc_clock_pane_t

0x89c3,	// (0x00076b80) main_fs_bigclock_indicator_pane_ParamLimits

0x89c3,	// (0x00076b80) main_fs_bigclock_indicator_pane

0x7a11,	// (0x00075bce) main_fs_bigclock_pane_g1_ParamLimits

0x7a11,	// (0x00075bce) main_fs_bigclock_pane_g1

0x89cf,	// (0x00076b8c) main_fs_bigclock_pane_t1_ParamLimits

0x89cf,	// (0x00076b8c) main_fs_bigclock_pane_t1

0x89e1,	// (0x00076b9e) main_fs_bigclock_pane_t2_ParamLimits

0x89e1,	// (0x00076b9e) main_fs_bigclock_pane_t2

0x89f5,	// (0x00076bb2) main_fs_bigclock_pane_t3_ParamLimits

0x89f5,	// (0x00076bb2) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0007e030) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0007e030) main_fs_bigclock_pane_t

0xec6f,	// (0x0007ce2c) main_fs_bigclock_indicator_pane_g1

0xe0c7,	// (0x0007c284) ncim_query_content_pane_g2_ParamLimits

0xe0c7,	// (0x0007c284) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0007ddb3) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0007ddb3) ncim_query_content_pane_g

0x796c,	// (0x00075b29) sc_clock_pane_t4_ParamLimits

0x796c,	// (0x00075b29) sc_clock_pane_t4

0x95a3,	// (0x00077760) main_radioblah_pane

0xd5e3,	// (0x0007b7a0) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5e3,	// (0x0007b7a0) cell_call4_button_pane_t1_copy1

0x759a,	// (0x00075757) main_ncimui_pane_t1_ParamLimits

0x759a,	// (0x00075757) main_ncimui_pane_t1

0x75b4,	// (0x00075771) main_ncimui_pane_t2_ParamLimits

0x75b4,	// (0x00075771) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0007ddac) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0007ddac) main_ncimui_pane_t

0xe56a,	// (0x0007c727) main_radioblah_anim_pane_ParamLimits

0xe56a,	// (0x0007c727) main_radioblah_anim_pane

0xe57b,	// (0x0007c738) main_radioblah_info_pane_ParamLimits

0xe57b,	// (0x0007c738) main_radioblah_info_pane

0xe58f,	// (0x0007c74c) main_radioblah_pane_t1_ParamLimits

0xe58f,	// (0x0007c74c) main_radioblah_pane_t1

0xe5ab,	// (0x0007c768) main_radioblah_pane_t2_ParamLimits

0xe5ab,	// (0x0007c768) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0007de47) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0007de47) main_radioblah_pane_t

0x7a6e,	// (0x00075c2b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7a6e,	// (0x00075c2b) main_radioblah_rocker_ctrl_pane

0xe5f3,	// (0x0007c7b0) main_radioblah_info_pane_t1_ParamLimits

0xe5f3,	// (0x0007c7b0) main_radioblah_info_pane_t1

0x7ac6,	// (0x00075c83) main_radioblah_info_pane_t2_ParamLimits

0x7ac6,	// (0x00075c83) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0007de50) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0007de50) main_radioblah_info_pane_t

0xcc7e,	// (0x0007ae3b) main_radioblah_rocker_ctrl_pane_g1

0x7b76,	// (0x00075d33) main_radioblah_rocker_ctrl_pane_g2

0x7b7e,	// (0x00075d3b) main_radioblah_rocker_ctrl_pane_g3

0x7b86,	// (0x00075d43) main_radioblah_rocker_ctrl_pane_g4

0x7b8e,	// (0x00075d4b) main_radioblah_rocker_ctrl_pane_g5

0x7b96,	// (0x00075d53) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0007de59) main_radioblah_rocker_ctrl_pane_g

0x7255,	// (0x00075412) main_cset_text2_pane_t1_copy1_ParamLimits

0xa1f4,	// (0x000783b1) cam4_image_uncrop_qvga_pane

0xa257,	// (0x00078414) vid4_image_uncrop_qcif_pane

0xa4d1,	// (0x0007868e) cam6_image_uncrop_qvga_pane_ParamLimits

0xa4d1,	// (0x0007868e) cam6_image_uncrop_qvga_pane

0xddaf,	// (0x0007bf6c) vid6_image_uncrop_qcif_pane_ParamLimits

0xddaf,	// (0x0007bf6c) vid6_image_uncrop_qcif_pane

0x954a,	// (0x00077707) bg_popup_preview_window_pane_cp03

0xe079,	// (0x0007c236) list_cset_text2_pane

0xe081,	// (0x0007c23e) main_cset6_text2_pane_g1

0xe089,	// (0x0007c246) main_cset6_text2_pane_t1

0x7b9e,	// (0x00075d5b) list_cset_text2_pane_t1_ParamLimits

0x7b9e,	// (0x00075d5b) list_cset_text2_pane_t1

0x95a3,	// (0x00077760) main_radioblah_pane_ParamLimits

0x78a2,	// (0x00075a5f) main_mobtv_info_pane_t3_ParamLimits

0x78a2,	// (0x00075a5f) main_mobtv_info_pane_t3

0x7a5c,	// (0x00075c19) main_radioblah_pane_g1

0x7a96,	// (0x00075c53) main_radioblah_info_pane_g1

0x7b1b,	// (0x00075cd8) main_radioblah_info_pane_t3_ParamLimits

0x7b1b,	// (0x00075cd8) main_radioblah_info_pane_t3

0x20b8,	// (0x00070275) highlight_cell_cale_month_pane_ParamLimits

0x20b8,	// (0x00070275) highlight_cell_cale_month_pane

0x954a,	// (0x00077707) main_phob_fisheye_pane

0xcf8a,	// (0x0007b147) scroll_pane_cp0031_ParamLimits

0xcf8a,	// (0x0007b147) scroll_pane_cp0031

0xdec1,	// (0x0007c07e) wait_bar_pane_cp08_ParamLimits

0x2198,	// (0x00070355) cset_list_set_pane_copy1_ParamLimits

0xe62d,	// (0x0007c7ea) highlight_cell_cale_month_pane_g1

0x7bb7,	// (0x00075d74) highlight_cell_cale_month_pane_t1

0xdb47,	// (0x0007bd04) list_gen_pane_cp01

0xd7b4,	// (0x0007b971) scroll_pane_01

0x7bc5,	// (0x00075d82) list_single_double_fisheye_pane

0x7bce,	// (0x00075d8b) list_double_fisheye_pane_g1_ParamLimits

0x7bce,	// (0x00075d8b) list_double_fisheye_pane_g1

0x7bda,	// (0x00075d97) list_double_fisheye_pane_g2_ParamLimits

0x7bda,	// (0x00075d97) list_double_fisheye_pane_g2

0x7bee,	// (0x00075dab) list_double_fisheye_pane_g3_ParamLimits

0x7bee,	// (0x00075dab) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0007de66) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0007de66) list_double_fisheye_pane_g

0x7c17,	// (0x00075dd4) list_double_fisheye_pane_t1_ParamLimits

0x7c17,	// (0x00075dd4) list_double_fisheye_pane_t1

0x7c32,	// (0x00075def) list_double_fisheye_pane_t2_ParamLimits

0x7c32,	// (0x00075def) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0007de71) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0007de71) list_double_fisheye_pane_t

0x954a,	// (0x00077707) main_call5_pane

0x7997,	// (0x00075b54) sc_swipe_pane_ParamLimits

0x7997,	// (0x00075b54) sc_swipe_pane

0x7c67,	// (0x00075e24) call5_image_pane_ParamLimits

0x7c67,	// (0x00075e24) call5_image_pane

0x7c84,	// (0x00075e41) call5_swipe_1_pane_ParamLimits

0x7c84,	// (0x00075e41) call5_swipe_1_pane

0x7c97,	// (0x00075e54) call5_swipe_2_pane_ParamLimits

0x7c97,	// (0x00075e54) call5_swipe_2_pane

0x7cc4,	// (0x00075e81) popup_call5_audio_first_window_ParamLimits

0x7cc4,	// (0x00075e81) popup_call5_audio_first_window

0xceae,	// (0x0007b06b) call5_swipe_1_pane_g1_ParamLimits

0xceae,	// (0x0007b06b) call5_swipe_1_pane_g1

0xe635,	// (0x0007c7f2) call5_swipe_1_pane_g2_ParamLimits

0xe635,	// (0x0007c7f2) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0007de76) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0007de76) call5_swipe_1_pane_g

0xe641,	// (0x0007c7fe) call5_swipe_1_pane_t1_ParamLimits

0xe641,	// (0x0007c7fe) call5_swipe_1_pane_t1

0xceae,	// (0x0007b06b) call5_swipe_2_pane_g1_ParamLimits

0xceae,	// (0x0007b06b) call5_swipe_2_pane_g1

0xe656,	// (0x0007c813) call5_swipe_2_pane_g2_ParamLimits

0xe656,	// (0x0007c813) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0007de7b) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0007de7b) call5_swipe_2_pane_g

0xe662,	// (0x0007c81f) call5_swipe_2_pane_t1_ParamLimits

0xe662,	// (0x0007c81f) call5_swipe_2_pane_t1

0xe677,	// (0x0007c834) sc_swipe_pane_g1_ParamLimits

0xe677,	// (0x0007c834) sc_swipe_pane_g1

0xe684,	// (0x0007c841) sc_swipe_pane_g2_ParamLimits

0xe684,	// (0x0007c841) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0007de80) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0007de80) sc_swipe_pane_g

0xe690,	// (0x0007c84d) sc_swipe_pane_t1_ParamLimits

0xe690,	// (0x0007c84d) sc_swipe_pane_t1

0x954a,	// (0x00077707) main_cmail_launcher_pane

0x7cd9,	// (0x00075e96) aid_size_cell_cmail_l_ParamLimits

0x7cd9,	// (0x00075e96) aid_size_cell_cmail_l

0x7cf3,	// (0x00075eb0) grid_cmail_l_pane_ParamLimits

0x7cf3,	// (0x00075eb0) grid_cmail_l_pane

0x7d0e,	// (0x00075ecb) cell_cmail_l_pane_ParamLimits

0x7d0e,	// (0x00075ecb) cell_cmail_l_pane

0x7d36,	// (0x00075ef3) cell_cmail_l_pane_g1_ParamLimits

0x7d36,	// (0x00075ef3) cell_cmail_l_pane_g1

0x7d42,	// (0x00075eff) cell_cmail_l_pane_t1_ParamLimits

0x7d42,	// (0x00075eff) cell_cmail_l_pane_t1

0xe6a5,	// (0x0007c862) cell_cmail_l_pane_t2_ParamLimits

0xe6a5,	// (0x0007c862) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0007de85) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0007de85) cell_cmail_l_pane_t

0x95a3,	// (0x00077760) grid_highlight_pane_cp018_ParamLimits

0x95a3,	// (0x00077760) grid_highlight_pane_cp018

0xfd1b,	// (0x0006ded8) main2_pane_ParamLimits

0xfd1b,	// (0x0006ded8) main2_pane

0xa984,	// (0x00078b41) popup_sp_fs_action_menu_bg_pane_g1

0xa98c,	// (0x00078b49) popup_sp_fs_action_menu_bg_pane_g2

0xa994,	// (0x00078b51) popup_sp_fs_action_menu_bg_pane_g3

0xa99c,	// (0x00078b59) popup_sp_fs_action_menu_bg_pane_g4

0xa9a4,	// (0x00078b61) popup_sp_fs_action_menu_bg_pane_g5

0xa9ac,	// (0x00078b69) popup_sp_fs_action_menu_bg_pane_g6

0xa9b4,	// (0x00078b71) popup_sp_fs_action_menu_bg_pane_g7

0xa9bc,	// (0x00078b79) popup_sp_fs_action_menu_bg_pane_g8

0xa9c4,	// (0x00078b81) popup_sp_fs_action_menu_bg_pane_g9

0xa9cc,	// (0x00078b89) popup_sp_fs_action_menu_bg_pane_g10

0xa9cc,	// (0x00078b89) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0007d347) popup_sp_fs_action_menu_bg_pane_g

0x9d52,	// (0x00077f0f) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9d52,	// (0x00077f0f) list_medium_line_x2_t3_g3_g1

0x0f38,	// (0x0006f0f5) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0f38,	// (0x0006f0f5) list_medium_line_x2_t3_g3_g2

0x9d5e,	// (0x00077f1b) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9d5e,	// (0x00077f1b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0007d3f5) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0007d3f5) list_medium_line_x2_t3_g3_g

0x0f44,	// (0x0006f101) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0f44,	// (0x0006f101) list_medium_line_x2_t3_g3_t1

0x0f59,	// (0x0006f116) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0f59,	// (0x0006f116) list_medium_line_x2_t3_g3_t2

0x0f6d,	// (0x0006f12a) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0f6d,	// (0x0006f12a) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0007d3fc) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0007d3fc) list_medium_line_x2_t3_g3_t

0x9d52,	// (0x00077f0f) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9d52,	// (0x00077f0f) list_medium_line_x2_t3_g2_g1

0x9d5e,	// (0x00077f1b) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9d5e,	// (0x00077f1b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0007d403) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0007d403) list_medium_line_x2_t3_g2_g

0x0f82,	// (0x0006f13f) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0f82,	// (0x0006f13f) list_medium_line_x2_t3_g2_t1

0x0f98,	// (0x0006f155) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0f98,	// (0x0006f155) list_medium_line_x2_t3_g2_t2

0x0faa,	// (0x0006f167) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0faa,	// (0x0006f167) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0007d408) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0007d408) list_medium_line_x2_t3_g2_t

0x9d52,	// (0x00077f0f) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9d52,	// (0x00077f0f) list_medium_line_x2_t4_g4_g1

0x0fc8,	// (0x0006f185) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0fc8,	// (0x0006f185) list_medium_line_x2_t4_g4_g2

0x0f38,	// (0x0006f0f5) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0f38,	// (0x0006f0f5) list_medium_line_x2_t4_g4_g3

0x9d6a,	// (0x00077f27) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9d6a,	// (0x00077f27) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0007d40f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0007d40f) list_medium_line_x2_t4_g4_g

0x0fd4,	// (0x0006f191) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0fd4,	// (0x0006f191) list_medium_line_x2_t4_g4_t1

0x0fee,	// (0x0006f1ab) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0fee,	// (0x0006f1ab) list_medium_line_x2_t4_g4_t2

0x1004,	// (0x0006f1c1) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1004,	// (0x0006f1c1) list_medium_line_x2_t4_g4_t3

0x1019,	// (0x0006f1d6) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1019,	// (0x0006f1d6) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0007d418) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0007d418) list_medium_line_x2_t4_g4_t

0x9d52,	// (0x00077f0f) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9d52,	// (0x00077f0f) list_medium_line_x2_t2_g4_g1

0x0fc8,	// (0x0006f185) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0fc8,	// (0x0006f185) list_medium_line_x2_t2_g4_g2

0x0f38,	// (0x0006f0f5) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0f38,	// (0x0006f0f5) list_medium_line_x2_t2_g4_g3

0x9d5e,	// (0x00077f1b) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9d5e,	// (0x00077f1b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0007d47f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0007d47f) list_medium_line_x2_t2_g4_g

0x20de,	// (0x0007029b) list_medium_line_x2_t2_g4_t1_ParamLimits

0x20de,	// (0x0007029b) list_medium_line_x2_t2_g4_t1

0x0f6d,	// (0x0006f12a) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0f6d,	// (0x0006f12a) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0007d488) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0007d488) list_medium_line_x2_t2_g4_t

0x9d52,	// (0x00077f0f) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9d52,	// (0x00077f0f) list_medium_line_x2_t2_g3_g1

0x0f38,	// (0x0006f0f5) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0f38,	// (0x0006f0f5) list_medium_line_x2_t2_g3_g2

0x9d5e,	// (0x00077f1b) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9d5e,	// (0x00077f1b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0007d3f5) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0007d3f5) list_medium_line_x2_t2_g3_g

0x20f3,	// (0x000702b0) list_medium_line_x2_t2_g3_t1_ParamLimits

0x20f3,	// (0x000702b0) list_medium_line_x2_t2_g3_t1

0x0f6d,	// (0x0006f12a) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0f6d,	// (0x0006f12a) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0007d48d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0007d48d) list_medium_line_x2_t2_g3_t

0x223d,	// (0x000703fa) main_sp_fs_list_pane_ParamLimits

0x223d,	// (0x000703fa) main_sp_fs_list_pane

0x2249,	// (0x00070406) sp_fs_scroll_pane_ParamLimits

0x2249,	// (0x00070406) sp_fs_scroll_pane

0x2255,	// (0x00070412) list_medium_line_x2_t3_t1

0x2265,	// (0x00070422) list_medium_line_x2_t3_t2

0x2273,	// (0x00070430) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0007d4d8) list_medium_line_x2_t3_t

0x2281,	// (0x0007043e) list_medium_line_x3_t4_t1

0x2291,	// (0x0007044e) list_medium_line_x3_t4_t2

0x229f,	// (0x0007045c) list_medium_line_x3_t4_t3

0x2273,	// (0x00070430) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0007d4df) list_medium_line_x3_t4_t

0x22ad,	// (0x0007046a) list_medium_line_x4_t5_t1

0x22bd,	// (0x0007047a) list_medium_line_x4_t5_t2

0x229f,	// (0x0007045c) list_medium_line_x4_t5_t3

0x22cb,	// (0x00070488) list_medium_line_x4_t5_t4

0x2273,	// (0x00070430) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0007d4e8) list_medium_line_x4_t5_t

0x9d52,	// (0x00077f0f) list_medium_line_t4_g4_g1_ParamLimits

0x9d52,	// (0x00077f0f) list_medium_line_t4_g4_g1

0x9d6a,	// (0x00077f27) list_medium_line_t4_g4_g2_ParamLimits

0x9d6a,	// (0x00077f27) list_medium_line_t4_g4_g2

0x22d9,	// (0x00070496) list_medium_line_t4_g4_g3_ParamLimits

0x22d9,	// (0x00070496) list_medium_line_t4_g4_g3

0x9d5e,	// (0x00077f1b) list_medium_line_t4_g4_g4_ParamLimits

0x9d5e,	// (0x00077f1b) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0007d4f3) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0007d4f3) list_medium_line_t4_g4_g

0x22e5,	// (0x000704a2) list_medium_line_t4_g4_t1_ParamLimits

0x22e5,	// (0x000704a2) list_medium_line_t4_g4_t1

0x22fa,	// (0x000704b7) list_medium_line_t4_g4_t2_ParamLimits

0x22fa,	// (0x000704b7) list_medium_line_t4_g4_t2

0x2310,	// (0x000704cd) list_medium_line_t4_g4_t3_ParamLimits

0x2310,	// (0x000704cd) list_medium_line_t4_g4_t3

0x0f6d,	// (0x0006f12a) list_medium_line_t4_g4_t4_ParamLimits

0x0f6d,	// (0x0006f12a) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0007d4fc) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0007d4fc) list_medium_line_t4_g4_t

0x23ec,	// (0x000705a9) chi_dic_find_pane_g1

0x3613,	// (0x000717d0) main_tport_pane

0x65fb,	// (0x000747b8) list_medium_line_plain_t1

0x66ab,	// (0x00074868) list_medium_line_t2_g2_g1_ParamLimits

0x66ab,	// (0x00074868) list_medium_line_t2_g2_g1

0x66b7,	// (0x00074874) list_medium_line_t2_g2_g2_ParamLimits

0x66b7,	// (0x00074874) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0007dbbd) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0007dbbd) list_medium_line_t2_g2_g

0x66c3,	// (0x00074880) list_medium_line_t2_g2_t1_ParamLimits

0x66c3,	// (0x00074880) list_medium_line_t2_g2_t1

0x66da,	// (0x00074897) list_medium_line_t2_g2_t2_ParamLimits

0x66da,	// (0x00074897) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0007dbc2) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0007dbc2) list_medium_line_t2_g2_t

0xa4af,	// (0x0007866c) aid_sp_fs_list_icon_a_sm

0xa4b7,	// (0x00078674) aid_sp_fs_list_icon_d

0xa4bf,	// (0x0007867c) aid_sp_fs_text_primary

0xa4c8,	// (0x00078685) aid_sp_fs_text_secondary

0x6d54,	// (0x00074f11) list_medium_line

0x6d54,	// (0x00074f11) list_medium_line_g2

0x6d54,	// (0x00074f11) list_medium_line_g3

0x6d54,	// (0x00074f11) list_medium_line_plain

0x6d54,	// (0x00074f11) list_medium_line_plain_t2

0x6d54,	// (0x00074f11) list_medium_line_plain_t3

0x6d54,	// (0x00074f11) list_medium_line_right_icon

0x6d54,	// (0x00074f11) list_medium_line_right_iconx2

0x6d54,	// (0x00074f11) list_medium_line_t2

0x6d54,	// (0x00074f11) list_medium_line_t2_g2

0x6d54,	// (0x00074f11) list_medium_line_t2_g3

0x6d54,	// (0x00074f11) list_medium_line_t2_right_icon

0x6d54,	// (0x00074f11) list_medium_line_t2_right_iconx2

0x6d54,	// (0x00074f11) list_medium_line_t3

0x6d54,	// (0x00074f11) list_medium_line_t3_g2

0x6d54,	// (0x00074f11) list_medium_line_t3_g3

0x6d54,	// (0x00074f11) list_medium_line_t3_right_iconx2

0x6d5d,	// (0x00074f1a) list_medium_line_t4_g4

0x6d66,	// (0x00074f23) list_medium_line_x2

0x6d66,	// (0x00074f23) list_medium_line_x2_t2_g2

0x6d66,	// (0x00074f23) list_medium_line_x2_t2_g3

0x6d66,	// (0x00074f23) list_medium_line_x2_t2_g4

0x6d66,	// (0x00074f23) list_medium_line_x2_t3

0x6d66,	// (0x00074f23) list_medium_line_x2_t3_g2

0x6d66,	// (0x00074f23) list_medium_line_x2_t3_g3

0x6d66,	// (0x00074f23) list_medium_line_x2_t3_g4

0x6d66,	// (0x00074f23) list_medium_line_x2_t4_g2

0x6d66,	// (0x00074f23) list_medium_line_x2_t4_g4

0x6d6f,	// (0x00074f2c) list_medium_line_x3

0x6d6f,	// (0x00074f2c) list_medium_line_x3_t4

0x6d6f,	// (0x00074f2c) list_medium_line_x3_t4_g4

0x6d5d,	// (0x00074f1a) list_medium_line_x4_t4

0x6d5d,	// (0x00074f1a) list_medium_line_x4_t4_g7

0x6d5d,	// (0x00074f1a) list_medium_line_x4_t5

0x6d78,	// (0x00074f35) list_single_fs_dyc_pane_ParamLimits

0x6d78,	// (0x00074f35) list_single_fs_dyc_pane

0x9d52,	// (0x00077f0f) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9d52,	// (0x00077f0f) list_medium_line_x4_t4_g7_g1

0xa4df,	// (0x0007869c) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa4df,	// (0x0007869c) list_medium_line_x4_t4_g7_g2

0x74c9,	// (0x00075686) list_medium_line_x4_t4_g7_g3_ParamLimits

0x74c9,	// (0x00075686) list_medium_line_x4_t4_g7_g3

0x74d8,	// (0x00075695) list_medium_line_x4_t4_g7_g4_ParamLimits

0x74d8,	// (0x00075695) list_medium_line_x4_t4_g7_g4

0x74e4,	// (0x000756a1) list_medium_line_x4_t4_g7_g5_ParamLimits

0x74e4,	// (0x000756a1) list_medium_line_x4_t4_g7_g5

0x74f3,	// (0x000756b0) list_medium_line_x4_t4_g7_g6_ParamLimits

0x74f3,	// (0x000756b0) list_medium_line_x4_t4_g7_g6

0xa4eb,	// (0x000786a8) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa4eb,	// (0x000786a8) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0007dd8d) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0007dd8d) list_medium_line_x4_t4_g7_g

0x7502,	// (0x000756bf) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7502,	// (0x000756bf) list_medium_line_x4_t4_g7_t1

0x7517,	// (0x000756d4) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7517,	// (0x000756d4) list_medium_line_x4_t4_g7_t2

0x752c,	// (0x000756e9) list_medium_line_x4_t4_g7_t3_ParamLimits

0x752c,	// (0x000756e9) list_medium_line_x4_t4_g7_t3

0x7541,	// (0x000756fe) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7541,	// (0x000756fe) list_medium_line_x4_t4_g7_t4

0xa4f7,	// (0x000786b4) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa4f7,	// (0x000786b4) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0007dd9c) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0007dd9c) list_medium_line_x4_t4_g7_t

0x7553,	// (0x00075710) list_single_dyc_row_pane_ParamLimits

0x7553,	// (0x00075710) list_single_dyc_row_pane

0x7c54,	// (0x00075e11) call5_gesture_pane_ParamLimits

0x7c54,	// (0x00075e11) call5_gesture_pane

0x7caa,	// (0x00075e67) call5_windows_pane_ParamLimits

0x7caa,	// (0x00075e67) call5_windows_pane

0x7d58,	// (0x00075f15) call5_swipe_1_pane_cp_ParamLimits

0x7d58,	// (0x00075f15) call5_swipe_1_pane_cp

0x7d64,	// (0x00075f21) call5_swipe_2_pane_cp_ParamLimits

0x7d64,	// (0x00075f21) call5_swipe_2_pane_cp

0xaa8f,	// (0x00078c4c) call5_image_pane_cp

0x7d70,	// (0x00075f2d) popup_call5_audio_first_window_cp_ParamLimits

0x7d70,	// (0x00075f2d) popup_call5_audio_first_window_cp

0xe677,	// (0x0007c834) call5_swipe_1_pane_g1_cp_ParamLimits

0xe677,	// (0x0007c834) call5_swipe_1_pane_g1_cp

0xe6b7,	// (0x0007c874) call5_swipe_1_pane_g2_cp

0xe690,	// (0x0007c84d) call5_swipe_1_pane_t1_cp_ParamLimits

0xe690,	// (0x0007c84d) call5_swipe_1_pane_t1_cp

0xe677,	// (0x0007c834) call5_swipe_2_pane_g1_cp_ParamLimits

0xe677,	// (0x0007c834) call5_swipe_2_pane_g1_cp

0xe6bf,	// (0x0007c87c) call5_swipe_2_pane_g2_cp

0xe6c7,	// (0x0007c884) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6c7,	// (0x0007c884) call5_swipe_2_pane_t1_cp

0x95a3,	// (0x00077760) main_sp_fs_email_pane

0xe6dc,	// (0x0007c899) main_sp_fs_listscroll_pane_te

0xa509,	// (0x000786c6) popup_sp_fs_action_menu_pane_ParamLimits

0xa509,	// (0x000786c6) popup_sp_fs_action_menu_pane

0xcc7e,	// (0x0007ae3b) bg_sp_fs_ctrlbar_pane_g1

0xd233,	// (0x0007b3f0) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd245,	// (0x0007b402) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd23c,	// (0x0007b3f9) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc7e,	// (0x0007ae3b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0007de8a) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca5d,	// (0x0007ac1a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca5d,	// (0x0007ac1a) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6e5,	// (0x0007c8a2) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6e5,	// (0x0007c8a2) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6f1,	// (0x0007c8ae) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6f1,	// (0x0007c8ae) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0007de93) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0007de93) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6fd,	// (0x0007c8ba) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6fd,	// (0x0007c8ba) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7d7e,	// (0x00075f3b) list_medium_line_t2_right_icon_g1

0x7d86,	// (0x00075f43) list_medium_line_t2_right_icon_t1

0x7d96,	// (0x00075f53) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0007de98) list_medium_line_t2_right_icon_t

0xc82d,	// (0x0007a9ea) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc82d,	// (0x0007a9ea) bg_sp_fs_ctrlbar_pane

0x7df5,	// (0x00075fb2) main_sp_fs_ctrlbar_button_pane_cp01

0x7dff,	// (0x00075fbc) main_sp_fs_ctrlbar_ddmenu_pane

0xe2dd,	// (0x0007c49a) main_sp_fs_ctrlbar_pane_g1

0xe74f,	// (0x0007c90c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0007de9d) main_sp_fs_ctrlbar_pane_g

0xe75b,	// (0x0007c918) main_sp_fs_ctrlbar_pane_t1

0x7e09,	// (0x00075fc6) main_sp_fs_ctrlbar_pane

0x7e2d,	// (0x00075fea) main_sp_fs_listscroll_pane_te_cp01

0x7e4d,	// (0x0007600a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e4d,	// (0x0007600a) popup_sp_fs_action_menu_pane_cp01

0x95a3,	// (0x00077760) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x95a3,	// (0x00077760) bg_sp_fs_highlight_list_pane_cp01

0xa54f,	// (0x0007870c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa54f,	// (0x0007870c) sp_fs_action_menu_list_gene_pane_g1

0xe78b,	// (0x0007c948) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe78b,	// (0x0007c948) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0007dea7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0007dea7) sp_fs_action_menu_list_gene_pane_g

0xa55e,	// (0x0007871b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa55e,	// (0x0007871b) sp_fs_action_menu_list_gene_pane_t1

0xa576,	// (0x00078733) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa576,	// (0x00078733) sp_fs_action_menu_list_gene_pane

0xe798,	// (0x0007c955) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe798,	// (0x0007c955) popup_sp_fs_action_menu_bg_pane

0xa599,	// (0x00078756) sp_fs_action_menu_list_pane_ParamLimits

0xa599,	// (0x00078756) sp_fs_action_menu_list_pane

0xe7a6,	// (0x0007c963) sp_fs_scroll_pane_cp01_ParamLimits

0xe7a6,	// (0x0007c963) sp_fs_scroll_pane_cp01

0x7e7d,	// (0x0007603a) list_medium_line_plain_t2_t1

0x7e8d,	// (0x0007604a) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0007deac) list_medium_line_plain_t2_t

0x7e9d,	// (0x0007605a) list_medium_line_plain_t3_t1

0x7ead,	// (0x0007606a) list_medium_line_plain_t3_t2

0x7ebb,	// (0x00076078) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0007deb1) list_medium_line_plain_t3_t

0x9d52,	// (0x00077f0f) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9d52,	// (0x00077f0f) list_medium_line_x2_t2_g2_g1

0x9d5e,	// (0x00077f1b) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9d5e,	// (0x00077f1b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0007d403) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0007d403) list_medium_line_x2_t2_g2_g

0x22e5,	// (0x000704a2) list_medium_line_x2_t2_g2_t1_ParamLimits

0x22e5,	// (0x000704a2) list_medium_line_x2_t2_g2_t1

0x0f6d,	// (0x0006f12a) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0f6d,	// (0x0006f12a) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0007deb8) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0007deb8) list_medium_line_x2_t2_g2_t

0x9d52,	// (0x00077f0f) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9d52,	// (0x00077f0f) list_medium_line_x2_t4_g2_g1

0xa5bd,	// (0x0007877a) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa5bd,	// (0x0007877a) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0007debd) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0007debd) list_medium_line_x2_t4_g2_g

0x7ec9,	// (0x00076086) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7ec9,	// (0x00076086) list_medium_line_x2_t4_g2_t1

0x7ee3,	// (0x000760a0) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7ee3,	// (0x000760a0) list_medium_line_x2_t4_g2_t2

0x7ef9,	// (0x000760b6) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7ef9,	// (0x000760b6) list_medium_line_x2_t4_g2_t3

0x0f6d,	// (0x0006f12a) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0f6d,	// (0x0006f12a) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0007dec2) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0007dec2) list_medium_line_x2_t4_g2_t

0x7f0e,	// (0x000760cb) list_medium_line_t3_right_iconx2_g1

0x7d7e,	// (0x00075f3b) list_medium_line_t3_right_iconx2_g2

0x7f16,	// (0x000760d3) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0007decb) list_medium_line_t3_right_iconx2_g

0x7f20,	// (0x000760dd) list_medium_line_t3_right_iconx2_t1

0x7f30,	// (0x000760ed) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0007ded2) list_medium_line_t3_right_iconx2_t

0x9d52,	// (0x00077f0f) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9d52,	// (0x00077f0f) list_medium_line_x3_t4_g4_g1

0x0f38,	// (0x0006f0f5) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0f38,	// (0x0006f0f5) list_medium_line_x3_t4_g4_g2

0x9d6a,	// (0x00077f27) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9d6a,	// (0x00077f27) list_medium_line_x3_t4_g4_g3

0x7f3e,	// (0x000760fb) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7f3e,	// (0x000760fb) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0007ded7) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0007ded7) list_medium_line_x3_t4_g4_g

0x7f4a,	// (0x00076107) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f4a,	// (0x00076107) list_medium_line_x3_t4_g4_t1

0x7f61,	// (0x0007611e) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f61,	// (0x0007611e) list_medium_line_x3_t4_g4_t2

0x7f7c,	// (0x00076139) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7f7c,	// (0x00076139) list_medium_line_x3_t4_g4_t3

0x7f91,	// (0x0007614e) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f91,	// (0x0007614e) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0007dee0) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0007dee0) list_medium_line_x3_t4_g4_t

0x7fae,	// (0x0007616b) list_single_dyc_row_text_pane_t1_ParamLimits

0x7fae,	// (0x0007616b) list_single_dyc_row_text_pane_t1

0x7ff7,	// (0x000761b4) list_single_dyc_row_text_pane_t2_ParamLimits

0x7ff7,	// (0x000761b4) list_single_dyc_row_text_pane_t2

0xa5cf,	// (0x0007878c) list_single_dyc_row_text_pane_t3_ParamLimits

0xa5cf,	// (0x0007878c) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0007dee9) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0007dee9) list_single_dyc_row_text_pane_t

0xa5f3,	// (0x000787b0) list_single_dyc_row_pane_g1_ParamLimits

0xa5f3,	// (0x000787b0) list_single_dyc_row_pane_g1

0xa5ff,	// (0x000787bc) list_single_dyc_row_pane_g2_ParamLimits

0xa5ff,	// (0x000787bc) list_single_dyc_row_pane_g2

0xa60b,	// (0x000787c8) list_single_dyc_row_pane_g3_ParamLimits

0xa60b,	// (0x000787c8) list_single_dyc_row_pane_g3

0xa617,	// (0x000787d4) list_single_dyc_row_pane_g4_ParamLimits

0xa617,	// (0x000787d4) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0007def6) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0007def6) list_single_dyc_row_pane_g

0xa623,	// (0x000787e0) list_single_dyc_row_text_pane_ParamLimits

0xa623,	// (0x000787e0) list_single_dyc_row_text_pane

0x954a,	// (0x00077707) bg_sp_fs_scroll_pane

0xe7cc,	// (0x0007c989) thumb_sp_fs_scroll_pane

0x66ab,	// (0x00074868) list_medium_line_g1_ParamLimits

0x66ab,	// (0x00074868) list_medium_line_g1

0x812c,	// (0x000762e9) list_medium_line_t1_ParamLimits

0x812c,	// (0x000762e9) list_medium_line_t1

0x9d52,	// (0x00077f0f) list_medium_line_x2_g1_ParamLimits

0x9d52,	// (0x00077f0f) list_medium_line_x2_g1

0x0f38,	// (0x0006f0f5) list_medium_line_x2_g2_ParamLimits

0x0f38,	// (0x0006f0f5) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0007deff) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0007deff) list_medium_line_x2_g

0xa642,	// (0x000787ff) list_medium_line_x2_t1_ParamLimits

0xa642,	// (0x000787ff) list_medium_line_x2_t1

0x9d52,	// (0x00077f0f) list_medium_line_x3_g1_ParamLimits

0x9d52,	// (0x00077f0f) list_medium_line_x3_g1

0x0f38,	// (0x0006f0f5) list_medium_line_x3_g2_ParamLimits

0x0f38,	// (0x0006f0f5) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0007deff) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0007deff) list_medium_line_x3_g

0xa642,	// (0x000787ff) list_medium_line_x3_t1_ParamLimits

0xa642,	// (0x000787ff) list_medium_line_x3_t1

0xe7d5,	// (0x0007c992) thumb_sp_fs_scroll_pane_g1

0xe7de,	// (0x0007c99b) thumb_sp_fs_scroll_pane_g2

0xe7e7,	// (0x0007c9a4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007df04) thumb_sp_fs_scroll_pane_g

0xe7d5,	// (0x0007c992) bg_sp_fs_scroll_pane_g1

0xe7de,	// (0x0007c99b) bg_sp_fs_scroll_pane_g2

0xe7e7,	// (0x0007c9a4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007df04) bg_sp_fs_scroll_pane_g

0x9d52,	// (0x00077f0f) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9d52,	// (0x00077f0f) list_medium_line_x2_t3_g4_g1

0x0fc8,	// (0x0006f185) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0fc8,	// (0x0006f185) list_medium_line_x2_t3_g4_g2

0x0f38,	// (0x0006f0f5) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0f38,	// (0x0006f0f5) list_medium_line_x2_t3_g4_g3

0x9d5e,	// (0x00077f1b) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9d5e,	// (0x00077f1b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0007d47f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0007d47f) list_medium_line_x2_t3_g4_g

0x8141,	// (0x000762fe) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8141,	// (0x000762fe) list_medium_line_x2_t3_g4_t1

0x8157,	// (0x00076314) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8157,	// (0x00076314) list_medium_line_x2_t3_g4_t2

0x0f6d,	// (0x0006f12a) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0f6d,	// (0x0006f12a) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0007df0b) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0007df0b) list_medium_line_x2_t3_g4_t

0x66ab,	// (0x00074868) list_medium_line_g2_g1_ParamLimits

0x66ab,	// (0x00074868) list_medium_line_g2_g1

0x66b7,	// (0x00074874) list_medium_line_g2_g2_ParamLimits

0x66b7,	// (0x00074874) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0007dbbd) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0007dbbd) list_medium_line_g2_g

0x8170,	// (0x0007632d) list_medium_line_g2_t1_ParamLimits

0x8170,	// (0x0007632d) list_medium_line_g2_t1

0x66ab,	// (0x00074868) list_medium_line_t3_g2_g1_ParamLimits

0x66ab,	// (0x00074868) list_medium_line_t3_g2_g1

0x66b7,	// (0x00074874) list_medium_line_t3_g2_g2_ParamLimits

0x66b7,	// (0x00074874) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0007dbbd) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0007dbbd) list_medium_line_t3_g2_g

0x8185,	// (0x00076342) list_medium_line_t3_g2_t1_ParamLimits

0x8185,	// (0x00076342) list_medium_line_t3_g2_t1

0x819f,	// (0x0007635c) list_medium_line_t3_g2_t2_ParamLimits

0x819f,	// (0x0007635c) list_medium_line_t3_g2_t2

0x81b5,	// (0x00076372) list_medium_line_t3_g2_t3_ParamLimits

0x81b5,	// (0x00076372) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0007df12) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0007df12) list_medium_line_t3_g2_t

0x7d7e,	// (0x00075f3b) list_medium_line_right_icon_g1

0x81cc,	// (0x00076389) list_medium_line_right_icon_t1

0x66ab,	// (0x00074868) list_medium_line_t2_g1_ParamLimits

0x66ab,	// (0x00074868) list_medium_line_t2_g1

0x81da,	// (0x00076397) list_medium_line_t2_t1_ParamLimits

0x81da,	// (0x00076397) list_medium_line_t2_t1

0x81f4,	// (0x000763b1) list_medium_line_t2_t2_ParamLimits

0x81f4,	// (0x000763b1) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0007df19) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0007df19) list_medium_line_t2_t

0x66ab,	// (0x00074868) list_medium_line_t3_g1_ParamLimits

0x66ab,	// (0x00074868) list_medium_line_t3_g1

0x820d,	// (0x000763ca) list_medium_line_t3_t1_ParamLimits

0x820d,	// (0x000763ca) list_medium_line_t3_t1

0x8227,	// (0x000763e4) list_medium_line_t3_t2_ParamLimits

0x8227,	// (0x000763e4) list_medium_line_t3_t2

0x823d,	// (0x000763fa) list_medium_line_t3_t3_ParamLimits

0x823d,	// (0x000763fa) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0007df1e) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0007df1e) list_medium_line_t3_t

0x66ab,	// (0x00074868) list_medium_line_g3_g1_ParamLimits

0x66ab,	// (0x00074868) list_medium_line_g3_g1

0x8252,	// (0x0007640f) list_medium_line_g3_g2_ParamLimits

0x8252,	// (0x0007640f) list_medium_line_g3_g2

0x66b7,	// (0x00074874) list_medium_line_g3_g3_ParamLimits

0x66b7,	// (0x00074874) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0007df25) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0007df25) list_medium_line_g3_g

0x825e,	// (0x0007641b) list_medium_line_g3_t1_ParamLimits

0x825e,	// (0x0007641b) list_medium_line_g3_t1

0x66ab,	// (0x00074868) list_medium_line_t2_g3_g1_ParamLimits

0x66ab,	// (0x00074868) list_medium_line_t2_g3_g1

0x8252,	// (0x0007640f) list_medium_line_t2_g3_g2_ParamLimits

0x8252,	// (0x0007640f) list_medium_line_t2_g3_g2

0x66b7,	// (0x00074874) list_medium_line_t2_g3_g3_ParamLimits

0x66b7,	// (0x00074874) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0007df25) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0007df25) list_medium_line_t2_g3_g

0x8273,	// (0x00076430) list_medium_line_t2_g3_t1_ParamLimits

0x8273,	// (0x00076430) list_medium_line_t2_g3_t1

0x828a,	// (0x00076447) list_medium_line_t2_g3_t2_ParamLimits

0x828a,	// (0x00076447) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0007df2c) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0007df2c) list_medium_line_t2_g3_t

0x66ab,	// (0x00074868) list_medium_line_t3_g3_g1_ParamLimits

0x66ab,	// (0x00074868) list_medium_line_t3_g3_g1

0x8252,	// (0x0007640f) list_medium_line_t3_g3_g2_ParamLimits

0x8252,	// (0x0007640f) list_medium_line_t3_g3_g2

0x66b7,	// (0x00074874) list_medium_line_t3_g3_g3_ParamLimits

0x66b7,	// (0x00074874) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0007df25) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0007df25) list_medium_line_t3_g3_g

0x82a3,	// (0x00076460) list_medium_line_t3_g3_t1_ParamLimits

0x82a3,	// (0x00076460) list_medium_line_t3_g3_t1

0x82bc,	// (0x00076479) list_medium_line_t3_g3_t2_ParamLimits

0x82bc,	// (0x00076479) list_medium_line_t3_g3_t2

0x82d2,	// (0x0007648f) list_medium_line_t3_g3_t3_ParamLimits

0x82d2,	// (0x0007648f) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0007df31) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0007df31) list_medium_line_t3_g3_t

0x7f0e,	// (0x000760cb) list_medium_line_right_iconx2_g1

0x7d7e,	// (0x00075f3b) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007df38) list_medium_line_right_iconx2_g

0x82ec,	// (0x000764a9) list_medium_line_right_iconx2_t1

0x7f0e,	// (0x000760cb) list_medium_line_t2_right_iconx2_g1

0x7d7e,	// (0x00075f3b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007df38) list_medium_line_t2_right_iconx2_g

0x82fa,	// (0x000764b7) list_medium_line_t2_right_iconx2_t1

0x830a,	// (0x000764c7) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0007df3d) list_medium_line_t2_right_iconx2_t

0x831c,	// (0x000764d9) list_medium_line_x4_t4_t1

0x832a,	// (0x000764e7) list_medium_line_x4_t4_t2

0x833a,	// (0x000764f7) list_medium_line_x4_t4_t3

0x834a,	// (0x00076507) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0007df42) list_medium_line_x4_t4_t

0x839d,	// (0x0007655a) tport_appsw_pane_ParamLimits

0x839d,	// (0x0007655a) tport_appsw_pane

0x83b5,	// (0x00076572) tport_contact_pane_ParamLimits

0x83b5,	// (0x00076572) tport_contact_pane

0x83cd,	// (0x0007658a) tport_listscroll_pane_ParamLimits

0x83cd,	// (0x0007658a) tport_listscroll_pane

0x83e7,	// (0x000765a4) cell_tport_appsw_pane_ParamLimits

0x83e7,	// (0x000765a4) cell_tport_appsw_pane

0xd676,	// (0x0007b833) tport_appsw_pane_g1_ParamLimits

0xd676,	// (0x0007b833) tport_appsw_pane_g1

0xe7f0,	// (0x0007c9ad) tport_contact_pane_g1

0xe7f9,	// (0x0007c9b6) tport_contact_pane_t1

0xe807,	// (0x0007c9c4) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0007df4b) tport_contact_pane_t

0xe815,	// (0x0007c9d2) list_tport_pane

0xe81e,	// (0x0007c9db) scroll_pane_cp_030

0x8439,	// (0x000765f6) cell_tport_appsw_pane_g1

0x8449,	// (0x00076606) cell_tport_appsw_pane_t1

0x8457,	// (0x00076614) grid_highlight_pane_cp019

0x845f,	// (0x0007661c) list_tport_double_graphic_pane_ParamLimits

0x845f,	// (0x0007661c) list_tport_double_graphic_pane

0x95a3,	// (0x00077760) list_highlight_pane_cp023_ParamLimits

0x95a3,	// (0x00077760) list_highlight_pane_cp023

0x846c,	// (0x00076629) list_tport_double_graphic_pane_g1_ParamLimits

0x846c,	// (0x00076629) list_tport_double_graphic_pane_g1

0x8479,	// (0x00076636) list_tport_double_graphic_pane_t1_ParamLimits

0x8479,	// (0x00076636) list_tport_double_graphic_pane_t1

0x848e,	// (0x0007664b) list_tport_double_graphic_pane_t2_ParamLimits

0x848e,	// (0x0007664b) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0007df57) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0007df57) list_tport_double_graphic_pane_t

0x954a,	// (0x00077707) main_cale_note_pane

0x5e15,	// (0x00073fd2) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5e15,	// (0x00073fd2) cell_vitu2_function_top_wide_pane_cp01

0x78b6,	// (0x00075a73) wait_bar_pane_cp05_ParamLimits

0x95a3,	// (0x00077760) listscroll_cmail_pane

0xe82f,	// (0x0007c9ec) list_cmail_pane

0x84aa,	// (0x00076667) list_cmail_body_pane

0xe846,	// (0x0007ca03) list_single_cmail_header_caption_pane

0x84bd,	// (0x0007667a) list_single_cmail_header_detail_pane_ParamLimits

0x84bd,	// (0x0007667a) list_single_cmail_header_detail_pane

0x84e8,	// (0x000766a5) list_single_cmail_header_caption_pane_t1

0x84f8,	// (0x000766b5) list_single_cmail_header_detail_pane_g1_ParamLimits

0x84f8,	// (0x000766b5) list_single_cmail_header_detail_pane_g1

0xa658,	// (0x00078815) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa658,	// (0x00078815) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0007df5c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0007df5c) list_single_cmail_header_detail_pane_g

0xa664,	// (0x00078821) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa664,	// (0x00078821) list_single_cmail_header_detail_pane_t1

0xa6d0,	// (0x0007888d) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa6d0,	// (0x0007888d) list_single_cmail_header_editor_pane_bg

0xe318,	// (0x0007c4d5) list_cmail_body_pane_g1

0xe877,	// (0x0007ca34) list_cmail_body_pane_t1

0xd696,	// (0x0007b853) list_single_cmail_header_editor_pane_bg_g1

0xacec,	// (0x00078ea9) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6a6,	// (0x0007b863) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd69e,	// (0x0007b85b) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8c0,	// (0x0007ba7d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6c6,	// (0x0007b883) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6b6,	// (0x0007b873) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6be,	// (0x0007b87b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xaccc,	// (0x00078e89) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8510,	// (0x000766cd) calenote_gesture_pane_ParamLimits

0x8510,	// (0x000766cd) calenote_gesture_pane

0x8530,	// (0x000766ed) calenote_window_pane_ParamLimits

0x8530,	// (0x000766ed) calenote_window_pane

0xe885,	// (0x0007ca42) popup_note_window_cp01

0x854c,	// (0x00076709) calenote_swipe_1_pane_ParamLimits

0x854c,	// (0x00076709) calenote_swipe_1_pane

0x7d64,	// (0x00075f21) calenote_swipe_2_pane_ParamLimits

0x7d64,	// (0x00075f21) calenote_swipe_2_pane

0xe677,	// (0x0007c834) calenote_swipe_1_pane_g1_ParamLimits

0xe677,	// (0x0007c834) calenote_swipe_1_pane_g1

0xe684,	// (0x0007c841) calenote_swipe_1_pane_g2_ParamLimits

0xe684,	// (0x0007c841) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0007de80) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0007de80) calenote_swipe_1_pane_g

0xe897,	// (0x0007ca54) calenote_swipe_1_pane_t1_ParamLimits

0xe897,	// (0x0007ca54) calenote_swipe_1_pane_t1

0xe677,	// (0x0007c834) calenote_swipe_2_pane_g1_ParamLimits

0xe677,	// (0x0007c834) calenote_swipe_2_pane_g1

0xe8b6,	// (0x0007ca73) calenote_swipe_2_pane_g2_ParamLimits

0xe8b6,	// (0x0007ca73) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0007df68) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0007df68) calenote_swipe_2_pane_g

0xe8c2,	// (0x0007ca7f) calenote_swipe_2_pane_t1_ParamLimits

0xe8c2,	// (0x0007ca7f) calenote_swipe_2_pane_t1

0x954a,	// (0x00077707) main_mup_navstr_pane

0x4a64,	// (0x00072c21) main_mup3_pane_t7_ParamLimits

0x4a64,	// (0x00072c21) main_mup3_pane_t7

0xa012,	// (0x000781cf) main_mp4_pane_g6_ParamLimits

0xa012,	// (0x000781cf) main_mp4_pane_g6

0xa1b6,	// (0x00078373) main_image3_pane_t4_ParamLimits

0xa1b6,	// (0x00078373) main_image3_pane_t4

0x8561,	// (0x0007671e) popup_navstr_preview_pane_ParamLimits

0x8561,	// (0x0007671e) popup_navstr_preview_pane

0x8571,	// (0x0007672e) scroll_navstr_pane_ParamLimits

0x8571,	// (0x0007672e) scroll_navstr_pane

0x954a,	// (0x00077707) bg_popup_preview_window_pane_cp04

0xe8e9,	// (0x0007caa6) popup_navstr_preview_pane_t1

0x8585,	// (0x00076742) scroll_navstr_pane_g1_ParamLimits

0x8585,	// (0x00076742) scroll_navstr_pane_g1

0x8599,	// (0x00076756) scroll_navstr_pane_t1_ParamLimits

0x8599,	// (0x00076756) scroll_navstr_pane_t1

0xe88e,	// (0x0007ca4b) bg_button_pane_cp014

0xe88e,	// (0x0007ca4b) bg_button_pane_cp030

0x7bfa,	// (0x00075db7) list_double_fisheye_pane_g4_ParamLimits

0x7bfa,	// (0x00075db7) list_double_fisheye_pane_g4

0x7c06,	// (0x00075dc3) list_double_fisheye_pane_g5_ParamLimits

0x7c06,	// (0x00075dc3) list_double_fisheye_pane_g5

0xe837,	// (0x0007c9f4) sp_fs_scroll_pane_cp03

0xe2dd,	// (0x0007c49a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe74f,	// (0x0007c90c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0007de9d) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe75b,	// (0x0007c918) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x84a0,	// (0x0007665d) sp_fs_scroll_pane_cp02

0xa9ef,	// (0x00078bac) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9ef,	// (0x00078bac) popup_sp_fs_calendar_preview_list_single_pane

0x954a,	// (0x00077707) main_cam6_pano_pane

0x95a3,	// (0x00077760) main_mup3_pane_ParamLimits

0x954a,	// (0x00077707) main_phacti_pane

0x7789,	// (0x00075946) bg_button_pane_cp11

0x77a3,	// (0x00075960) main_mobtv_info_pane_g2_ParamLimits

0x77a3,	// (0x00075960) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0007ddfd) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0007ddfd) main_mobtv_info_pane_g

0x797e,	// (0x00075b3b) sc_clock_pane_t5_ParamLimits

0x797e,	// (0x00075b3b) sc_clock_pane_t5

0x7a5c,	// (0x00075c19) main_radioblah_pane_g1_ParamLimits

0xe5c3,	// (0x0007c780) main_radioblah_pane_t3_ParamLimits

0xe5c3,	// (0x0007c780) main_radioblah_pane_t3

0xe5db,	// (0x0007c798) main_radioblah_pane_t4_ParamLimits

0xe5db,	// (0x0007c798) main_radioblah_pane_t4

0x7a84,	// (0x00075c41) main_radioblah_text_pane_ParamLimits

0x7a84,	// (0x00075c41) main_radioblah_text_pane

0x7a96,	// (0x00075c53) main_radioblah_info_pane_g1_ParamLimits

0x7b2f,	// (0x00075cec) main_radioblah_info_pane_t4_ParamLimits

0x7b2f,	// (0x00075cec) main_radioblah_info_pane_t4

0x95a3,	// (0x00077760) main_sp_fs_calendar_pane

0x85b0,	// (0x0007676d) main_phacti_pane_g1

0x85b8,	// (0x00076775) phacti_note_pane_ParamLimits

0x85b8,	// (0x00076775) phacti_note_pane

0xe900,	// (0x0007cabd) phacti_term_pane_ParamLimits

0xe900,	// (0x0007cabd) phacti_term_pane

0xe915,	// (0x0007cad2) phacti_note_pane_t1_ParamLimits

0xe915,	// (0x0007cad2) phacti_note_pane_t1

0xa6e7,	// (0x000788a4) phacti_term_pane_g1

0xa6ef,	// (0x000788ac) phacti_term_pane_t1_ParamLimits

0xa6ef,	// (0x000788ac) phacti_term_pane_t1

0xe92c,	// (0x0007cae9) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe934,	// (0x0007caf1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0007df72) popup_sp_fs_calendar_preview_list_single_pane_g

0xe93c,	// (0x0007caf9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe93c,	// (0x0007caf9) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe952,	// (0x0007cb0f) aid_popup_sp_fs_bg_corner_pane

0xcc7e,	// (0x0007ae3b) popup_sp_fs_calendar_preview_bg_pane_g1

0x954a,	// (0x00077707) popup_sp_fs_calendar_preview_bg_pane

0xe95a,	// (0x0007cb17) popup_sp_fs_calendar_preview_list_pane

0xc82d,	// (0x0007a9ea) bg_main_sp_fs_cale_pane_ParamLimits

0xc82d,	// (0x0007a9ea) bg_main_sp_fs_cale_pane

0xa722,	// (0x000788df) listscroll_cale_mrui_pane_ParamLimits

0xa722,	// (0x000788df) listscroll_cale_mrui_pane

0xa737,	// (0x000788f4) listscroll_sp_fs_schedule_track_pane

0xa740,	// (0x000788fd) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa740,	// (0x000788fd) main_sp_fs_ctrlbar_pane_cp01

0xe962,	// (0x0007cb1f) main_sp_fs_ribbon_pane

0xa753,	// (0x00078910) popup_sp_fs_cale_preview_window

0x8629,	// (0x000767e6) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8629,	// (0x000767e6) list_single_sp_fs_schedule_track_pane

0x95a3,	// (0x00077760) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x95a3,	// (0x00077760) bg_sp_fs_highlight_list_pane_cp03

0x863d,	// (0x000767fa) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x863d,	// (0x000767fa) list_single_sp_fs_schedule_track_pane_g1

0x8649,	// (0x00076806) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8649,	// (0x00076806) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0007df77) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0007df77) list_single_sp_fs_schedule_track_pane_g

0x8655,	// (0x00076812) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8655,	// (0x00076812) list_single_sp_fs_schedule_track_pane_t1

0x8677,	// (0x00076834) sp_fs_schedule_track_pane_ParamLimits

0x8677,	// (0x00076834) sp_fs_schedule_track_pane

0xe96a,	// (0x0007cb27) sp_fs_schedule_track_pane_g1

0xe972,	// (0x0007cb2f) sp_fs_schedule_track_pane_g2

0xe97a,	// (0x0007cb37) sp_fs_schedule_track_pane_g3

0xe982,	// (0x0007cb3f) sp_fs_schedule_track_pane_g4

0xe98a,	// (0x0007cb47) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0007df7c) sp_fs_schedule_track_pane_g

0xd696,	// (0x0007b853) bg_sp_fs_schedule_viewer_highlight_g1

0xacec,	// (0x00078ea9) bg_sp_fs_schedule_viewer_highlight_g2

0xd69e,	// (0x0007b85b) bg_sp_fs_schedule_viewer_highlight_g3

0xd6a6,	// (0x0007b863) bg_sp_fs_schedule_viewer_highlight_g4

0xd8c0,	// (0x0007ba7d) bg_sp_fs_schedule_viewer_highlight_g5

0xd6b6,	// (0x0007b873) bg_sp_fs_schedule_viewer_highlight_g6

0xd6be,	// (0x0007b87b) bg_sp_fs_schedule_viewer_highlight_g7

0xd6c6,	// (0x0007b883) bg_sp_fs_schedule_viewer_highlight_g8

0xaccc,	// (0x00078e89) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0007df87) bg_sp_fs_schedule_viewer_highlight_g

0x954a,	// (0x00077707) bg_main_sp_fs_ribbon_pane

0x868c,	// (0x00076849) main_sp_fs_ribbon_pane_g1

0xe992,	// (0x0007cb4f) main_sp_fs_ribbon_pane_t1

0x8695,	// (0x00076852) main_sp_fs_ribbon_pane_t2

0xe9a1,	// (0x0007cb5e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0007df9a) main_sp_fs_ribbon_pane_t

0xe9b0,	// (0x0007cb6d) main_sp_fs_ribbon_scheduler_pane

0xe9b8,	// (0x0007cb75) bg_main_sp_fs_ribbon_pane_g1

0xe9c1,	// (0x0007cb7e) bg_main_sp_fs_ribbon_pane_g2

0xe9ca,	// (0x0007cb87) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0007dfa1) bg_main_sp_fs_ribbon_pane_g

0xe9d2,	// (0x0007cb8f) main_sp_fs_ribbon_scheduler_pane_g1

0xe9db,	// (0x0007cb98) main_sp_fs_ribbon_scheduler_pane_g2

0xe9e4,	// (0x0007cba1) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0007dfa8) main_sp_fs_ribbon_scheduler_pane_g

0xe9ed,	// (0x0007cbaa) list_cale_mrui_pane

0x86a4,	// (0x00076861) sp_fs_scroll_pane_cp07_ParamLimits

0x86a4,	// (0x00076861) sp_fs_scroll_pane_cp07

0x86c0,	// (0x0007687d) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x86c0,	// (0x0007687d) bg_sp_fs_schedule_viewer_highlight

0xe9fa,	// (0x0007cbb7) list_single_sp_fs_schedule_track_pane_cp01

0xea02,	// (0x0007cbbf) list_sp_fs_schedule_track_pane

0xea0a,	// (0x0007cbc7) sp_fs_scroll_pane_cp06_ParamLimits

0xea0a,	// (0x0007cbc7) sp_fs_scroll_pane_cp06

0xcc7e,	// (0x0007ae3b) bgmain_sp_fs_calendar_pane_g1

0x86d2,	// (0x0007688f) list_single_cale_mrui_pane_ParamLimits

0x86d2,	// (0x0007688f) list_single_cale_mrui_pane

0xa765,	// (0x00078922) list_single_cale_mrui_row_pane_ParamLimits

0xa765,	// (0x00078922) list_single_cale_mrui_row_pane

0xa77b,	// (0x00078938) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa77b,	// (0x00078938) list_single_cale_mrui_row_pane_g1

0xa7b3,	// (0x00078970) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa7b3,	// (0x00078970) list_single_cale_mrui_row_pane_t1

0x86e7,	// (0x000768a4) list_single_cale_mrui_row_pane_t2_ParamLimits

0x86e7,	// (0x000768a4) list_single_cale_mrui_row_pane_t2

0xa7c5,	// (0x00078982) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa7c5,	// (0x00078982) list_single_cale_mrui_row_pane_t3

0xa7f4,	// (0x000789b1) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa7f4,	// (0x000789b1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0007dfb6) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0007dfb6) list_single_cale_mrui_row_pane_t

0x874f,	// (0x0007690c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x874f,	// (0x0007690c) list_single_cmail_header_editor_pane_bg_cp01

0x8775,	// (0x00076932) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8775,	// (0x00076932) list_single_cmail_header_editor_pane_bg_cp02

0x8795,	// (0x00076952) main_radioblah_text_pane_t1_ParamLimits

0x8795,	// (0x00076952) main_radioblah_text_pane_t1

0xea29,	// (0x0007cbe6) cam6_indi_pane_cp01

0xea31,	// (0x0007cbee) cam6_mode_pane_cp01

0xea39,	// (0x0007cbf6) cam6_pano_pane

0xea42,	// (0x0007cbff) cam6_zoom_pane_cp01

0xea4c,	// (0x0007cc09) cam6_pano_image_pane

0xea55,	// (0x0007cc12) cam6_pano_pane_g1

0xe318,	// (0x0007c4d5) cam6_pano_pane_g2

0xea5e,	// (0x0007cc1b) cam6_pano_pane_g3

0xea67,	// (0x0007cc24) cam6_pano_pane_g4

0xd220,	// (0x0007b3dd) cam6_pano_pane_g5

0xea70,	// (0x0007cc2d) cam6_pano_pane_g6

0xea78,	// (0x0007cc35) cam6_pano_pane_g7

0xea80,	// (0x0007cc3d) cam6_pano_pane_g8

0xea89,	// (0x0007cc46) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0007dfbf) cam6_pano_pane_g

0x954a,	// (0x00077707) main_browser_tag_pane

0xe8e1,	// (0x0007ca9e) grid_navstr_albumart_pane

0xea94,	// (0x0007cc51) cell_navstr_albumart_pane_ParamLimits

0xea94,	// (0x0007cc51) cell_navstr_albumart_pane

0xeab3,	// (0x0007cc70) cell_navstr_albumart_pane_g1

0xc63a,	// (0x0007a7f7) cell_navstr_albumart_pane_g2

0xc64a,	// (0x0007a807) cell_navstr_albumart_pane_g3

0xc642,	// (0x0007a7ff) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0007dfd2) cell_navstr_albumart_pane_g

0x87b0,	// (0x0007696d) bt_list_pane_ParamLimits

0x87b0,	// (0x0007696d) bt_list_pane

0x87c6,	// (0x00076983) bt_list_pane_t1

0x87d5,	// (0x00076992) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0007dfdb) bt_list_pane_t

0x954a,	// (0x00077707) main_cale_prevew_pane

0x87e4,	// (0x000769a1) popup_cale_preview_window_ParamLimits

0x87e4,	// (0x000769a1) popup_cale_preview_window

0x95a3,	// (0x00077760) bg_popup_preview_window_pane_cp05_ParamLimits

0x95a3,	// (0x00077760) bg_popup_preview_window_pane_cp05

0xeabb,	// (0x0007cc78) list_cale_preview_pane_ParamLimits

0xeabb,	// (0x0007cc78) list_cale_preview_pane

0x8801,	// (0x000769be) list_double_cale_preview_pane_ParamLimits

0x8801,	// (0x000769be) list_double_cale_preview_pane

0x8815,	// (0x000769d2) list_single_cale_preview_pane_ParamLimits

0x8815,	// (0x000769d2) list_single_cale_preview_pane

0x882d,	// (0x000769ea) list_single_cale_preview_pane_g1

0x8835,	// (0x000769f2) list_single_cale_preview_pane_t1_ParamLimits

0x8835,	// (0x000769f2) list_single_cale_preview_pane_t1

0x884a,	// (0x00076a07) list_double_cale_preview_pane_g1

0x8852,	// (0x00076a0f) list_double_cale_preview_pane_t1_ParamLimits

0x8852,	// (0x00076a0f) list_double_cale_preview_pane_t1

0x8867,	// (0x00076a24) list_double_cale_preview_pane_t2_ParamLimits

0x8867,	// (0x00076a24) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0007dfe0) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0007dfe0) list_double_cale_preview_pane_t

0x954a,	// (0x00077707) main_ezdial_pane

0x95a3,	// (0x00077760) main_sp_fs_email_pane_ParamLimits

0x7da8,	// (0x00075f65) cmail_ddmenu_btn01_pane_ParamLimits

0x7da8,	// (0x00075f65) cmail_ddmenu_btn01_pane

0x7dbb,	// (0x00075f78) cmail_ddmenu_btn02_pane_ParamLimits

0x7dbb,	// (0x00075f78) cmail_ddmenu_btn02_pane

0x7dde,	// (0x00075f9b) cmail_ddmenu_btn03_pane_ParamLimits

0x7dde,	// (0x00075f9b) cmail_ddmenu_btn03_pane

0x7e09,	// (0x00075fc6) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e2d,	// (0x00075fea) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x84aa,	// (0x00076667) list_cmail_body_pane_ParamLimits

0xe861,	// (0x0007ca1e) bg_button_pane_cp12

0xe86a,	// (0x0007ca27) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe86a,	// (0x0007ca27) list_single_cmail_header_detail_pane_g3

0xa6ac,	// (0x00078869) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa6ac,	// (0x00078869) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0007df63) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0007df63) list_single_cmail_header_detail_pane_t

0xa704,	// (0x000788c1) phacti_term_pane_t2_ParamLimits

0xa704,	// (0x000788c1) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0007df6d) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0007df6d) phacti_term_pane_t

0xeac7,	// (0x0007cc84) aid_size_list_single_double

0x887f,	// (0x00076a3c) popup_ezdial_listscroll_window

0x889b,	// (0x00076a58) popup_number_entry_window_cp01

0xaa8f,	// (0x00078c4c) bg_popup_call_pane_cp09

0xead3,	// (0x0007cc90) ezdial_list_pane

0xeadb,	// (0x0007cc98) scroll_pane_cp23

0xc82d,	// (0x0007a9ea) bg_button_pane_cp028_ParamLimits

0xc82d,	// (0x0007a9ea) bg_button_pane_cp028

0x88a9,	// (0x00076a66) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x88a9,	// (0x00076a66) cmail_ddmenu_btn01_pane_g1

0x88b8,	// (0x00076a75) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x88b8,	// (0x00076a75) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0007dfe5) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0007dfe5) cmail_ddmenu_btn01_pane_g

0xeae3,	// (0x0007cca0) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeae3,	// (0x0007cca0) cmail_ddmenu_btn01_pane_t1

0xc82d,	// (0x0007a9ea) bg_button_pane_cp029_ParamLimits

0xc82d,	// (0x0007a9ea) bg_button_pane_cp029

0x88ce,	// (0x00076a8b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x88ce,	// (0x00076a8b) cmail_ddmenu_btn02_pane_g1

0x88e9,	// (0x00076aa6) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x88e9,	// (0x00076aa6) cmail_ddmenu_btn02_pane_t1

0x95a3,	// (0x00077760) bg_button_pane_cp031_ParamLimits

0x95a3,	// (0x00077760) bg_button_pane_cp031

0x88ce,	// (0x00076a8b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x88ce,	// (0x00076a8b) cmail_ddmenu_btn03_pane_g1

0x88e9,	// (0x00076aa6) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x88e9,	// (0x00076aa6) cmail_ddmenu_btn03_pane_t1

0x5644,	// (0x00073801) cell_dialer2_keypad_pane_t1_ParamLimits

0x565e,	// (0x0007381b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x565e,	// (0x0007381b) cell_dialer2_keypad_pane_t1_copy1

0x75e0,	// (0x0007579d) ncimui_group_button_pane

0x95a3,	// (0x00077760) main_sp_fs_calendar_pane_ParamLimits

0xe846,	// (0x0007ca03) list_single_cmail_header_caption_pane_ParamLimits

0xa719,	// (0x000788d6) aid_recal_txt_sm_pane

0x954a,	// (0x00077707) mian_recal_day_pane

0xa753,	// (0x00078910) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf9,	// (0x0007ccb6) list_recal_day_pane

0xa83f,	// (0x000789fc) list_single_recal_day_pane_ParamLimits

0xa83f,	// (0x000789fc) list_single_recal_day_pane

0xeb20,	// (0x0007ccdd) list_single_recal_day_pane_g1_ParamLimits

0xeb20,	// (0x0007ccdd) list_single_recal_day_pane_g1

0xa851,	// (0x00078a0e) list_single_recal_day_pane_g2_ParamLimits

0xa851,	// (0x00078a0e) list_single_recal_day_pane_g2

0xa85d,	// (0x00078a1a) list_single_recal_day_pane_g3_ParamLimits

0xa85d,	// (0x00078a1a) list_single_recal_day_pane_g3

0x8910,	// (0x00076acd) list_single_recal_day_pane_g4_ParamLimits

0x8910,	// (0x00076acd) list_single_recal_day_pane_g4

0xa869,	// (0x00078a26) list_single_recal_day_pane_g5_ParamLimits

0xa869,	// (0x00078a26) list_single_recal_day_pane_g5

0xa875,	// (0x00078a32) list_single_recal_day_pane_g6_ParamLimits

0xa875,	// (0x00078a32) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0007dff4) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0007dff4) list_single_recal_day_pane_g

0xa889,	// (0x00078a46) list_single_recal_day_pane_t1

0xbc0c,	// (0x00079dc9) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0007dfff) list_single_recal_day_pane_t

0x8928,	// (0x00076ae5) ncimui_query_button_pane_ParamLimits

0x8928,	// (0x00076ae5) ncimui_query_button_pane

0x8938,	// (0x00076af5) ncimui_query_button_pane_t1_ParamLimits

0x8938,	// (0x00076af5) ncimui_query_button_pane_t1

0xeb2c,	// (0x0007cce9) ncimui_query_button_pane_t2_ParamLimits

0xeb2c,	// (0x0007cce9) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0007e004) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0007e004) ncimui_query_button_pane_t

0x894b,	// (0x00076b08) query_button_pane_ParamLimits

0x894b,	// (0x00076b08) query_button_pane

0x954a,	// (0x00077707) bg_button_pane_cp0028

0xeb3f,	// (0x0007ccfc) query_button_pane_t1

0x3613,	// (0x000717d0) main_tport_pane_ParamLimits

0x835a,	// (0x00076517) bg_popup_window_pane_cp01_ParamLimits

0x835a,	// (0x00076517) bg_popup_window_pane_cp01

0x8375,	// (0x00076532) heading_pane_cp08_ParamLimits

0x8375,	// (0x00076532) heading_pane_cp08

0x8388,	// (0x00076545) heading_pane_cp07_ParamLimits

0x8388,	// (0x00076545) heading_pane_cp07

0x8439,	// (0x000765f6) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0007df50) cell_tport_appsw_pane_g

0x2bb4,	// (0x00070d71) input_candi_list_open_g1

0xaea0,	// (0x0007905d) list_cale_time_pane_g6_ParamLimits

0xaea0,	// (0x0007905d) list_cale_time_pane_g6

0x441d,	// (0x000725da) aid_size_touch_calib_1_ParamLimits

0x441d,	// (0x000725da) aid_size_touch_calib_1

0x442f,	// (0x000725ec) aid_size_touch_calib_2_ParamLimits

0x442f,	// (0x000725ec) aid_size_touch_calib_2

0x4447,	// (0x00072604) aid_size_touch_calib_3_ParamLimits

0x4447,	// (0x00072604) aid_size_touch_calib_3

0x4465,	// (0x00072622) aid_size_touch_calib_4_ParamLimits

0x4465,	// (0x00072622) aid_size_touch_calib_4

0x447d,	// (0x0007263a) main_touch_calib_button_group_pane_ParamLimits

0x447d,	// (0x0007263a) main_touch_calib_button_group_pane

0x4495,	// (0x00072652) main_touch_calib_pane_g1_ParamLimits

0x44a7,	// (0x00072664) main_touch_calib_pane_g2_ParamLimits

0x44b9,	// (0x00072676) main_touch_calib_pane_g3_ParamLimits

0x44cb,	// (0x00072688) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0007d90e) main_touch_calib_pane_g_ParamLimits

0x44dd,	// (0x0007269a) main_touch_calib_pane_t1_ParamLimits

0x44f7,	// (0x000726b4) main_touch_calib_pane_t2_ParamLimits

0x4511,	// (0x000726ce) main_touch_calib_pane_t3_ParamLimits

0x4525,	// (0x000726e2) main_touch_calib_pane_t4_ParamLimits

0x453b,	// (0x000726f8) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0007d917) main_touch_calib_pane_t_ParamLimits

0xcfb6,	// (0x0007b173) list_single_fp_cale_pane_g3_ParamLimits

0xcfb6,	// (0x0007b173) list_single_fp_cale_pane_g3

0xa261,	// (0x0007841e) bg_button_pane_cp012_ParamLimits

0xa261,	// (0x0007841e) bg_vkb2_func_pane_cp03_ParamLimits

0x6661,	// (0x0007481e) cell_vitu2_function_top_pane_g1_ParamLimits

0xa261,	// (0x0007841e) bg_vkb2_func_pane_cp04_ParamLimits

0x756e,	// (0x0007572b) main_ncimui_button_group_pane_ParamLimits

0x756e,	// (0x0007572b) main_ncimui_button_group_pane

0x75ce,	// (0x0007578b) main_ncimui_pane_t3_ParamLimits

0x75ce,	// (0x0007578b) main_ncimui_pane_t3

0xe8f7,	// (0x0007cab4) phacti_button_group_pane

0xeac7,	// (0x0007cc84) aid_size_list_single_double_ParamLimits

0x887f,	// (0x00076a3c) popup_ezdial_listscroll_window_ParamLimits

0x889b,	// (0x00076a58) popup_number_entry_window_cp01_ParamLimits

0x895e,	// (0x00076b1b) phacti_button_pane_ParamLimits

0x895e,	// (0x00076b1b) phacti_button_pane

0x954a,	// (0x00077707) bg_button_pane_cp14

0xeb4d,	// (0x0007cd0a) phacti_button_pane_t1

0x896f,	// (0x00076b2c) main_touch_calib_button_pane_ParamLimits

0x896f,	// (0x00076b2c) main_touch_calib_button_pane

0xa8d9,	// (0x00078a96) bg_button_pane_cp18_ParamLimits

0xa8d9,	// (0x00078a96) bg_button_pane_cp18

0xeb5b,	// (0x0007cd18) main_touch_calib_button_pane_t1_ParamLimits

0xeb5b,	// (0x0007cd18) main_touch_calib_button_pane_t1

0xeb71,	// (0x0007cd2e) main_touch_calib_button_pane_t2_ParamLimits

0xeb71,	// (0x0007cd2e) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0007e009) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0007e009) main_touch_calib_button_pane_t

0x954a,	// (0x00077707) cell_ncimui_button_pane

0x954a,	// (0x00077707) bg_button_pane_cp032

0xeb8f,	// (0x0007cd4c) cell_ncimui_button_pane_t1

0xa194,	// (0x00078351) image3_infobar_pane_ParamLimits

0xa194,	// (0x00078351) image3_infobar_pane

0x79aa,	// (0x00075b67) fs_bigclock_status_pane_ParamLimits

0x79aa,	// (0x00075b67) fs_bigclock_status_pane

0x79b7,	// (0x00075b74) main_fs_bigclock_clock_pane_ParamLimits

0x79b7,	// (0x00075b74) main_fs_bigclock_clock_pane

0x79e1,	// (0x00075b9e) main_fs_bigclock_indi_pane_ParamLimits

0x79e1,	// (0x00075b9e) main_fs_bigclock_indi_pane

0x7a1f,	// (0x00075bdc) main_fs_bigclock_swipe_pane_ParamLimits

0x7a1f,	// (0x00075bdc) main_fs_bigclock_swipe_pane

0x954a,	// (0x00077707) main_fs_clock_dumped_data

0xe425,	// (0x0007c5e2) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe425,	// (0x0007c5e2) list_single_fs_bigclock_indicator_pane_g1

0xe44f,	// (0x0007c60c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe44f,	// (0x0007c60c) list_single_fs_bigclock_indicator_pane_g2

0xe469,	// (0x0007c626) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe469,	// (0x0007c626) list_single_fs_bigclock_indicator_pane_g3

0xe483,	// (0x0007c640) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe483,	// (0x0007c640) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0007de31) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0007de31) list_single_fs_bigclock_indicator_pane_g

0xe4ae,	// (0x0007c66b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4ae,	// (0x0007c66b) list_single_fs_bigclock_indicator_pane_t1

0xe4d6,	// (0x0007c693) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4d6,	// (0x0007c693) list_single_fs_bigclock_indicator_pane_t2

0xe4fe,	// (0x0007c6bb) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4fe,	// (0x0007c6bb) list_single_fs_bigclock_indicator_pane_t3

0xe526,	// (0x0007c6e3) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe526,	// (0x0007c6e3) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0007de3c) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0007de3c) list_single_fs_bigclock_indicator_pane_t

0xeb9d,	// (0x0007cd5a) image3_infobar_fav_pane_ParamLimits

0xeb9d,	// (0x0007cd5a) image3_infobar_fav_pane

0xebad,	// (0x0007cd6a) image3_infobar_loc_pane_ParamLimits

0xebad,	// (0x0007cd6a) image3_infobar_loc_pane

0xebc3,	// (0x0007cd80) image3_infobar_time_pane_ParamLimits

0xebc3,	// (0x0007cd80) image3_infobar_time_pane

0xcc7e,	// (0x0007ae3b) image3_infobar_time_pane_g1

0xebd3,	// (0x0007cd90) image3_infobar_time_pane_t1

0xcc7e,	// (0x0007ae3b) image3_infobar_loc_pane_g1

0xebe1,	// (0x0007cd9e) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0007e00e) image3_infobar_loc_pane_g

0xebe9,	// (0x0007cda6) image3_infobar_loc_pane_t1

0xcc7e,	// (0x0007ae3b) image3_infobar_fav_pane_g1

0xebf7,	// (0x0007cdb4) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0007e013) image3_infobar_fav_pane_g

0xebff,	// (0x0007cdbc) fs_bigclock_status_battery_pane

0xec08,	// (0x0007cdc5) fs_bigclock_status_signal_pane

0xec11,	// (0x0007cdce) fs_bigclock_status_title_pane

0xec1a,	// (0x0007cdd7) fs_bigclock_status_signal_pane_g1

0xec23,	// (0x0007cde0) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0007e018) fs_bigclock_status_signal_pane_g

0xec2b,	// (0x0007cde8) fs_bigclock_status_battery_pane_g1

0xec34,	// (0x0007cdf1) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0007e01d) fs_bigclock_status_battery_pane_g

0xec3c,	// (0x0007cdf9) fs_bigclock_status_title_pane_t1

0xcc7e,	// (0x0007ae3b) main_fs_bigclock_clock_pane_g1

0xec4a,	// (0x0007ce07) main_fs_bigclock_clock_pane_g2

0xec55,	// (0x0007ce12) main_fs_bigclock_clock_pane_g3

0xec55,	// (0x0007ce12) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0007e022) main_fs_bigclock_clock_pane_g

0xec61,	// (0x0007ce1e) main_fs_bigclock_clock_pane_t1

0x8984,	// (0x00076b41) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0007e02b) main_fs_bigclock_clock_pane_t

0x8993,	// (0x00076b50) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8993,	// (0x00076b50) list_single_fs_bigclock_indicator_pane

0x89a4,	// (0x00076b61) list_single_fs_bigclock_pane_ParamLimits

0x89a4,	// (0x00076b61) list_single_fs_bigclock_pane

0xec78,	// (0x0007ce35) main_fs_bigclock_indicator_pane_t1

0xec87,	// (0x0007ce44) list_single_fs_bigclock_pane_g1

0xec8f,	// (0x0007ce4c) list_single_fs_bigclock_pane_t1

0xcc7e,	// (0x0007ae3b) main_fs_bigclock_swipe_pane_g1

0xecd2,	// (0x0007ce8f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0007e03c) main_fs_bigclock_swipe_pane_g

0xecda,	// (0x0007ce97) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecda,	// (0x0007ce97) main_fs_bigclock_swipe_pane_t1

0x2326,	// (0x000704e3) call_type_pane_ParamLimits

0x954a,	// (0x00077707) main_btmg_pane

0xa7a7,	// (0x00078964) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa7a7,	// (0x00078964) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0007dfaf) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0007dfaf) list_single_cale_mrui_row_pane_g

0xa82d,	// (0x000789ea) list_recal_vselct_arw_lo_pane

0xeb18,	// (0x0007ccd5) list_recal_vselct_arw_up_pane

0xa835,	// (0x000789f2) list_recal_vselct_pane

0x8a07,	// (0x00076bc4) btmg_button_pane

0x8a11,	// (0x00076bce) main_btmg_pane_g1

0x954a,	// (0x00077707) bg_button_pane_cp044

0xecf7,	// (0x0007ceb4) btmg_button_pane_t1

0xc819,	// (0x0007a9d6) aid_listscroll_gen

0x95a3,	// (0x00077760) main_cntbar_detail_pane

0xe827,	// (0x0007c9e4) list_cmail_folder_pane

0xe837,	// (0x0007c9f4) sp_fs_scroll_pane_cp03_ParamLimits

0x8a1b,	// (0x00076bd8) list_single_fs_dyc_pane_cp01_ParamLimits

0x8a1b,	// (0x00076bd8) list_single_fs_dyc_pane_cp01

0xed05,	// (0x0007cec2) aid_size_cmail_indent

0xbc1e,	// (0x00079ddb) list_single_dyc_row_pane_cp01

0x8a66,	// (0x00076c23) cntbar_detail_list_pane_ParamLimits

0x8a66,	// (0x00076c23) cntbar_detail_list_pane

0x8ab8,	// (0x00076c75) main_cntbar_detail_cont_pane_ParamLimits

0x8ab8,	// (0x00076c75) main_cntbar_detail_cont_pane

0x2249,	// (0x00070406) scroll_pane_cp032_ParamLimits

0x2249,	// (0x00070406) scroll_pane_cp032

0x8acc,	// (0x00076c89) cntbar_detail_list_event_pane_ParamLimits

0x8acc,	// (0x00076c89) cntbar_detail_list_event_pane

0x8a78,	// (0x00076c35) cntbar_detail_list_shct_pane

0xad3a,	// (0x00078ef7) aid_list_gen

0xed0e,	// (0x0007cecb) aid_scroll

0xed17,	// (0x0007ced4) aid_size_touch_scroll_bar

0x6d66,	// (0x00074f23) aid_list_double

0xed20,	// (0x0007cedd) aid_list_single

0x6d54,	// (0x00074f11) aid_list_single_lg

0xbc27,	// (0x00079de4) aid_list_z_g_a_sm

0xbc2f,	// (0x00079dec) aid_list_z_g_d

0x8adc,	// (0x00076c99) aid_txt_z_prm

0x8aec,	// (0x00076ca9) aid_txt_z_prm_cp01

0x8afa,	// (0x00076cb7) aid_txt_z_sec

0x8b08,	// (0x00076cc5) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8b08,	// (0x00076cc5) main_cntbar_detail_cont_pane_g1

0x8b1c,	// (0x00076cd9) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8b1c,	// (0x00076cd9) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0007e041) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0007e041) main_cntbar_detail_cont_pane_g

0xed29,	// (0x0007cee6) main_cntbar_detail_cont_pane_t1

0xed37,	// (0x0007cef4) main_cntbar_detail_cont_pane_t2

0xed45,	// (0x0007cf02) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0007e046) main_cntbar_detail_cont_pane_t

0x8b2c,	// (0x00076ce9) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8b2c,	// (0x00076ce9) cell_cntbar_detail_list_shct_pane

0xed53,	// (0x0007cf10) cntbar_detail_list_shct_pane_g1

0xed5c,	// (0x0007cf19) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0007e04d) cntbar_detail_list_shct_pane_g

0x8b3e,	// (0x00076cfb) cntbar_detail_list_event_pane_g1_ParamLimits

0x8b3e,	// (0x00076cfb) cntbar_detail_list_event_pane_g1

0x8b4a,	// (0x00076d07) cntbar_detail_list_event_pane_g2_ParamLimits

0x8b4a,	// (0x00076d07) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0007e052) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0007e052) cntbar_detail_list_event_pane_g

0x8bb8,	// (0x00076d75) cntbar_detail_list_event_pane_t1_ParamLimits

0x8bb8,	// (0x00076d75) cntbar_detail_list_event_pane_t1

0x8bcd,	// (0x00076d8a) cntbar_detail_list_event_pane_t2_ParamLimits

0x8bcd,	// (0x00076d8a) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0007e05f) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0007e05f) cntbar_detail_list_event_pane_t

0xcc7e,	// (0x0007ae3b) cell_cntbar_detail_list_shct_pane_g1

0x26cc,	// (0x00070889) navi_pane_mv_g3

0x95a3,	// (0x00077760) main_cntbar_detail_pane_ParamLimits

0x954a,	// (0x00077707) main_notif_wgt_pane

0x9fac,	// (0x00078169) aid_tch_main_mp4_pane_g4

0xa18a,	// (0x00078347) popup_slider_window_cp02

0xa823,	// (0x000789e0) list_recal_day_event_pane

0x8a36,	// (0x00076bf3) cntbar_detail_btn_pane_ParamLimits

0x8a36,	// (0x00076bf3) cntbar_detail_btn_pane

0x8a4e,	// (0x00076c0b) cntbar_detail_btn_pane_cp01_ParamLimits

0x8a4e,	// (0x00076c0b) cntbar_detail_btn_pane_cp01

0x8a78,	// (0x00076c35) cntbar_detail_list_shct_pane_ParamLimits

0x8a88,	// (0x00076c45) cntbar_detail_pane_g1_ParamLimits

0x8a88,	// (0x00076c45) cntbar_detail_pane_g1

0x8a9c,	// (0x00076c59) cntbar_detail_pane_t1_ParamLimits

0x8a9c,	// (0x00076c59) cntbar_detail_pane_t1

0x8b56,	// (0x00076d13) cntbar_detail_list_event_pane_g3_ParamLimits

0x8b56,	// (0x00076d13) cntbar_detail_list_event_pane_g3

0x8b6e,	// (0x00076d2b) cntbar_detail_list_event_pane_g4_ParamLimits

0x8b6e,	// (0x00076d2b) cntbar_detail_list_event_pane_g4

0x8b86,	// (0x00076d43) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b86,	// (0x00076d43) cntbar_detail_list_event_pane_g5

0x8b9e,	// (0x00076d5b) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b9e,	// (0x00076d5b) cntbar_detail_list_event_pane_g6

0x8be2,	// (0x00076d9f) cntbar_detail_list_event_pane_t3_ParamLimits

0x8be2,	// (0x00076d9f) cntbar_detail_list_event_pane_t3

0x8bf4,	// (0x00076db1) popup_notif_wgt_window_ParamLimits

0x8bf4,	// (0x00076db1) popup_notif_wgt_window

0x8c0d,	// (0x00076dca) popup_submenu_window_cp01_ParamLimits

0x8c0d,	// (0x00076dca) popup_submenu_window_cp01

0xaa8f,	// (0x00078c4c) bg_popup_window_pane_cp10

0xed65,	// (0x0007cf22) listscroll_notif_wgt_pane

0xed77,	// (0x0007cf34) list_notif_wgt_window

0xed80,	// (0x0007cf3d) scroll_pane_cp033

0x8c21,	// (0x00076dde) list_notif_wgt_row_pane_ParamLimits

0x8c21,	// (0x00076dde) list_notif_wgt_row_pane

0xed89,	// (0x0007cf46) aid_size_list_notif_wgt_del

0xed96,	// (0x0007cf53) list_notif_wgt_row_pane_g1

0xeda2,	// (0x0007cf5f) list_notif_wgt_row_pane_g2

0xedb6,	// (0x0007cf73) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0007e066) list_notif_wgt_row_pane_g

0xedc3,	// (0x0007cf80) list_notif_wgt_row_pane_t1

0xedd9,	// (0x0007cf96) list_notif_wgt_row_pane_t2

0xedeb,	// (0x0007cfa8) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0007e06d) list_notif_wgt_row_pane_t

0xd8da,	// (0x0007ba97) list_recal_day_event_pane_g1

0xedfd,	// (0x0007cfba) list_recal_day_event_pane_t1

0x954a,	// (0x00077707) bg_button_pane_cp045

0xee0c,	// (0x0007cfc9) cntbar_detail_btn_pane_t1

0xc82d,	// (0x0007a9ea) main_callh_pane_ParamLimits

0xc82d,	// (0x0007a9ea) main_callh_pane

0x954a,	// (0x00077707) main_coverflow0_pane

0x954a,	// (0x00077707) main_wgtman_pane

0x7a37,	// (0x00075bf4) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7a37,	// (0x00075bf4) main_fs_bigclock_unlock_btn_pane

0x8431,	// (0x000765ee) bg_button_pane_cp16

0x8441,	// (0x000765fe) cell_tport_appsw_pane_g3

0x8c31,	// (0x00076dee) cf0_flow_pane_ParamLimits

0x8c31,	// (0x00076dee) cf0_flow_pane

0xee1a,	// (0x0007cfd7) listscroll_cf0_pane

0xee25,	// (0x0007cfe2) main_cf0_pane_g1

0x8c46,	// (0x00076e03) main_cf0_pane_t1_ParamLimits

0x8c46,	// (0x00076e03) main_cf0_pane_t1

0x8c5d,	// (0x00076e1a) main_cf0_pane_t2_ParamLimits

0x8c5d,	// (0x00076e1a) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0007e079) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0007e079) main_cf0_pane_t

0xee37,	// (0x0007cff4) scroll_pane_cp11

0x8c74,	// (0x00076e31) cf0_flow_pane_g1

0x8c80,	// (0x00076e3d) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0007e07e) cf0_flow_pane_g

0x8c8c,	// (0x00076e49) cf0_flow_pane_t1

0x954a,	// (0x00077707) main_call6_pane

0x954a,	// (0x00077707) main_calllock_pane

0x8c9e,	// (0x00076e5b) call6_btn_grp_pane_ParamLimits

0x8c9e,	// (0x00076e5b) call6_btn_grp_pane

0x8cb8,	// (0x00076e75) call6_pane_g1_ParamLimits

0x8cb8,	// (0x00076e75) call6_pane_g1

0x8cce,	// (0x00076e8b) popup_call6_1st_window_ParamLimits

0x8cce,	// (0x00076e8b) popup_call6_1st_window

0x8cdf,	// (0x00076e9c) popup_call6_2nd_window_ParamLimits

0x8cdf,	// (0x00076e9c) popup_call6_2nd_window

0x8cf0,	// (0x00076ead) cell_call6_btn_pane_ParamLimits

0x8cf0,	// (0x00076ead) cell_call6_btn_pane

0xaa8f,	// (0x00078c4c) bg_popup_call2_in_pane_cp03

0xee42,	// (0x0007cfff) popup_call6_1st_window_g1

0xee4a,	// (0x0007d007) popup_call6_1st_window_g2

0xee52,	// (0x0007d00f) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0007e083) popup_call6_1st_window_g

0xee5a,	// (0x0007d017) popup_call6_1st_window_t1

0xee69,	// (0x0007d026) popup_call6_1st_window_t2

0xee79,	// (0x0007d036) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0007e08a) popup_call6_1st_window_t

0xaa8f,	// (0x00078c4c) bg_popup_call2_in_pane_cp04

0xee42,	// (0x0007cfff) popup_call6_2nd_window_g1

0xee4a,	// (0x0007d007) popup_call6_2nd_window_g2

0xee52,	// (0x0007d00f) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0007e083) popup_call6_2nd_window_g

0xee5a,	// (0x0007d017) popup_call6_2nd_window_t1

0x954a,	// (0x00077707) bg_button_pane_cp15

0xee89,	// (0x0007d046) cell_call6_btn_pane_g1

0xee92,	// (0x0007d04f) cell_call6_btn_pane_t1

0x8d04,	// (0x00076ec1) listscroll_wgtman_pane_ParamLimits

0x8d04,	// (0x00076ec1) listscroll_wgtman_pane

0x8d25,	// (0x00076ee2) wgtman_btn_pane_ParamLimits

0x8d25,	// (0x00076ee2) wgtman_btn_pane

0xb28b,	// (0x00079448) aid_scroll_copy1

0xeea1,	// (0x0007d05e) list_wgtman_pane

0x8d68,	// (0x00076f25) wgtman_btn_pane_g1_ParamLimits

0x8d68,	// (0x00076f25) wgtman_btn_pane_g1

0x8d94,	// (0x00076f51) wgtman_btn_pane_t1_ParamLimits

0x8d94,	// (0x00076f51) wgtman_btn_pane_t1

0xeeab,	// (0x0007d068) wgtman_btn_pane_t2_ParamLimits

0xeeab,	// (0x0007d068) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0007e091) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0007e091) wgtman_btn_pane_t

0x8dd1,	// (0x00076f8e) listrow_wgtman_pane_ParamLimits

0x8dd1,	// (0x00076f8e) listrow_wgtman_pane

0x8de3,	// (0x00076fa0) listrow_wgtman_pane_g1

0x8df0,	// (0x00076fad) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0007e096) listrow_wgtman_pane_g

0x8e0e,	// (0x00076fcb) listrow_wgtman_pane_t1

0x8e26,	// (0x00076fe3) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0007e09b) listrow_wgtman_pane_t

0x8e4c,	// (0x00077009) wait_bar_pane_cp09

0xeec2,	// (0x0007d07f) main_calllock_btn_pane

0xeecc,	// (0x0007d089) main_calllock_pane_g1

0x954a,	// (0x00077707) bg_button_pane_cp17

0xeed8,	// (0x0007d095) main_calllock_btn_pane_g1

0xeee1,	// (0x0007d09e) main_calllock_btn_pane_t1

0x954a,	// (0x00077707) main_dialer3_pane

0x954a,	// (0x00077707) main_fmrd2_pane

0xcc7e,	// (0x0007ae3b) main_fs_bigclock_unlock_btn_pane_g1

0xeef8,	// (0x0007d0b5) main_fs_bigclock_unlock_btn_pane_t1

0x8e5e,	// (0x0007701b) area_fmrd2_info_pane_ParamLimits

0x8e5e,	// (0x0007701b) area_fmrd2_info_pane

0x8e6d,	// (0x0007702a) area_fmrd2_visual_pane_ParamLimits

0x8e6d,	// (0x0007702a) area_fmrd2_visual_pane

0x8e7b,	// (0x00077038) fmrd2_indi_pane_ParamLimits

0x8e7b,	// (0x00077038) fmrd2_indi_pane

0x8e88,	// (0x00077045) area_fmrd2_visual_pane_g1

0x8e90,	// (0x0007704d) area_fmrd2_visual_pane_t1

0x8ea0,	// (0x0007705d) area_fmrd2_visual_pane_t2

0x8eb0,	// (0x0007706d) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0007e0a5) area_fmrd2_visual_pane_t

0x8ec0,	// (0x0007707d) area_fmrd2_info_pane_g1

0x8ec8,	// (0x00077085) area_fmrd2_info_pane_t1

0x8ed8,	// (0x00077095) area_fmrd2_info_pane_t2

0x8ee8,	// (0x000770a5) area_fmrd2_info_pane_t3

0x8ef8,	// (0x000770b5) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0007e0ac) area_fmrd2_info_pane_t

0x8f08,	// (0x000770c5) fmrd2_indi_pane_t1

0x8f18,	// (0x000770d5) fmrd2_indi_pane_t2

0x8f28,	// (0x000770e5) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0007e0b5) fmrd2_indi_pane_t

0xe492,	// (0x0007c64f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe492,	// (0x0007c64f) list_single_fs_bigclock_indicator_pane_g5

0xe542,	// (0x0007c6ff) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe542,	// (0x0007c6ff) list_single_fs_bigclock_indicator_pane_t5

0x85cc,	// (0x00076789) aid_cell_bcale_month_pane_ParamLimits

0x85cc,	// (0x00076789) aid_cell_bcale_month_pane

0x85ea,	// (0x000767a7) bcale_month_pane_ParamLimits

0x85ea,	// (0x000767a7) bcale_month_pane

0x860c,	// (0x000767c9) bcale_preview_pane_ParamLimits

0x860c,	// (0x000767c9) bcale_preview_pane

0xec8f,	// (0x0007ce4c) list_single_fs_bigclock_pane_t1_ParamLimits

0xecae,	// (0x0007ce6b) list_single_fs_bigclock_pane_t2_ParamLimits

0xecae,	// (0x0007ce6b) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0007e037) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0007e037) list_single_fs_bigclock_pane_t

0xeef0,	// (0x0007d0ad) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0007e0a0) main_fs_bigclock_unlock_btn_pane_g

0x8f38,	// (0x000770f5) aid_dia3_key_size_ParamLimits

0x8f38,	// (0x000770f5) aid_dia3_key_size

0x8f47,	// (0x00077104) aid_dia3_listrow_size_ParamLimits

0x8f47,	// (0x00077104) aid_dia3_listrow_size

0x8f5c,	// (0x00077119) dia3_keypad_fun_pane_ParamLimits

0x8f5c,	// (0x00077119) dia3_keypad_fun_pane

0x8f78,	// (0x00077135) dia3_keypad_num_pane_ParamLimits

0x8f78,	// (0x00077135) dia3_keypad_num_pane

0x8f91,	// (0x0007714e) dia3_listscroll_pane_ParamLimits

0x8f91,	// (0x0007714e) dia3_listscroll_pane

0x8fa4,	// (0x00077161) dia3_numentry_pane_ParamLimits

0x8fa4,	// (0x00077161) dia3_numentry_pane

0xef06,	// (0x0007d0c3) dia3_list_pane

0xef11,	// (0x0007d0ce) scroll_pane_cp12

0x954a,	// (0x00077707) bg_dia3_numentry_pane

0x8fb8,	// (0x00077175) dia3_numentry_pane_t1

0x8fc7,	// (0x00077184) cell_dia3_key_num_pane

0x8fcf,	// (0x0007718c) cell_dia3_key0_fun_pane_ParamLimits

0x8fcf,	// (0x0007718c) cell_dia3_key0_fun_pane

0x8fe3,	// (0x000771a0) cell_dia3_key1_fun_pane_ParamLimits

0x8fe3,	// (0x000771a0) cell_dia3_key1_fun_pane

0x8ffb,	// (0x000771b8) dia3_listrow_pane

0xe170,	// (0x0007c32d) bg_dia3_numentry_pane_g1

0x954a,	// (0x00077707) bg_button_pane_cp21

0xef1c,	// (0x0007d0d9) cell_dia3_key_num_pane_t1

0xef2a,	// (0x0007d0e7) cell_dia3_key_num_pane_t2

0xef39,	// (0x0007d0f6) cell_dia3_key_num_pane_t3

0xef48,	// (0x0007d105) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0007e0bc) cell_dia3_key_num_pane_t

0x954a,	// (0x00077707) bg_button_pane_cp19

0x900d,	// (0x000771ca) cell_dia3_key0_fun_pane_g1

0x954a,	// (0x00077707) bg_button_pane_cp20

0x9015,	// (0x000771d2) cell_dia3_key1_fun_pane_g1

0x901d,	// (0x000771da) area_left_week_number_pane

0x902b,	// (0x000771e8) area_top_day_name_pane

0x903e,	// (0x000771fb) frame_month_view_pane

0xef57,	// (0x0007d114) grid_month_view_pane

0x9053,	// (0x00077210) cell_top_day_name_pane_ParamLimits

0x9053,	// (0x00077210) cell_top_day_name_pane

0x9082,	// (0x0007723f) cell_area_left_week_number_pane_ParamLimits

0x9082,	// (0x0007723f) cell_area_left_week_number_pane

0x9096,	// (0x00077253) cell_month_view_pane_ParamLimits

0x9096,	// (0x00077253) cell_month_view_pane

0xef65,	// (0x0007d122) frm_month_g1

0x90c5,	// (0x00077282) frm_month_g2

0x90d8,	// (0x00077295) frm_month_g3

0x90eb,	// (0x000772a8) frm_month_g4

0x90fe,	// (0x000772bb) frm_month_g5

0x9111,	// (0x000772ce) frm_month_g6

0x9124,	// (0x000772e1) frm_month_g7

0xef72,	// (0x0007d12f) frm_month_g8

0x9139,	// (0x000772f6) frm_month_g9

0x9149,	// (0x00077306) frm_month_g10

0x9159,	// (0x00077316) frm_month_g11

0x9169,	// (0x00077326) frm_month_g12

0x917b,	// (0x00077338) frm_month_g13

0x918f,	// (0x0007734c) frm_month_g14

0x91a3,	// (0x00077360) frm_month_g15

0x91b7,	// (0x00077374) frm_month_g16

0x000f,

0xff08,	// (0x0007e0c5) frm_month_g

0xef7f,	// (0x0007d13c) cell_top_day_name_pane_t1

0x91cb,	// (0x00077388) cell_area_left_week_number_pane_g1

0x91d7,	// (0x00077394) cell_area_left_week_number_pane_t1

0xceae,	// (0x0007b06b) cell_month_view_pane_g1

0x91ea,	// (0x000773a7) cell_month_view_pane_t1

0x954a,	// (0x00077707) main_fps_pane

0xe717,	// (0x0007c8d4) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe717,	// (0x0007c8d4) cmail_ddmenu_btn02_pane_cp1

0xe733,	// (0x0007c8f0) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe733,	// (0x0007c8f0) cmail_ddmenu_btn02_pane_cp2

0x88dd,	// (0x00076a9a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x88dd,	// (0x00076a9a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0007dfea) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0007dfea) cmail_ddmenu_btn02_pane_g

0x88fe,	// (0x00076abb) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x88fe,	// (0x00076abb) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0007dfef) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0007dfef) cmail_ddmenu_btn02_pane_t

0x91fd,	// (0x000773ba) fps_text_pane_ParamLimits

0x91fd,	// (0x000773ba) fps_text_pane

0x9214,	// (0x000773d1) main_fps_pane_g1_ParamLimits

0x9214,	// (0x000773d1) main_fps_pane_g1

0x922c,	// (0x000773e9) wait_bar_pane_cp010_ParamLimits

0x922c,	// (0x000773e9) wait_bar_pane_cp010

0x923f,	// (0x000773fc) fps_text_pane_t1_ParamLimits

0x923f,	// (0x000773fc) fps_text_pane_t1

0xe2e9,	// (0x0007c4a6) cam4_image_uncrop_pane_g1

0xe2f2,	// (0x0007c4af) cam4_image_uncrop_pane_g2

0x5b30,	// (0x00073ced) cam4_image_uncrop_pane_g3

0x5b39,	// (0x00073cf6) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0007daab) cam4_image_uncrop_pane_g

0x8ffb,	// (0x000771b8) dia3_listrow_pane_ParamLimits

0x954a,	// (0x00077707) main_phob2_pane

0x8400,	// (0x000765bd) cell_tport_appsw_pane_cp02_ParamLimits

0x8400,	// (0x000765bd) cell_tport_appsw_pane_cp02

0x8414,	// (0x000765d1) cell_tport_appsw_pane_cp03_ParamLimits

0x8414,	// (0x000765d1) cell_tport_appsw_pane_cp03

0x954a,	// (0x00077707) phob2_contact_card_pane

0x954a,	// (0x00077707) phob2_listscroll_pane

0xef92,	// (0x0007d14f) phob2_list_pane

0xef9a,	// (0x0007d157) scroll_pane_cp034

0x9257,	// (0x00077414) phob2_cc_data_pane_ParamLimits

0x9257,	// (0x00077414) phob2_cc_data_pane

0x9278,	// (0x00077435) phob2_cc_listscroll_pane_ParamLimits

0x9278,	// (0x00077435) phob2_cc_listscroll_pane

0x929a,	// (0x00077457) list_double_large_graphic_phob2_pane_ParamLimits

0x929a,	// (0x00077457) list_double_large_graphic_phob2_pane

0x92ae,	// (0x0007746b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x92ae,	// (0x0007746b) list_double_large_graphic_phob2_pane_g1

0x92c4,	// (0x00077481) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x92c4,	// (0x00077481) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0007e0e6) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0007e0e6) list_double_large_graphic_phob2_pane_g

0x92d0,	// (0x0007748d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x92d0,	// (0x0007748d) list_double_large_graphic_phob2_pane_t1

0x92e5,	// (0x000774a2) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x92e5,	// (0x000774a2) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0007e0eb) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0007e0eb) list_double_large_graphic_phob2_pane_t

0x954a,	// (0x00077707) list_highlight_pane_cp024

0x92f7,	// (0x000774b4) phob2_cc_button_pane

0x92ff,	// (0x000774bc) phob2_cc_data_pane_g1_ParamLimits

0x92ff,	// (0x000774bc) phob2_cc_data_pane_g1

0x9315,	// (0x000774d2) phob2_cc_data_pane_g2_ParamLimits

0x9315,	// (0x000774d2) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0007e0f0) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0007e0f0) phob2_cc_data_pane_g

0x9325,	// (0x000774e2) phob2_cc_data_pane_t1_ParamLimits

0x9325,	// (0x000774e2) phob2_cc_data_pane_t1

0x933d,	// (0x000774fa) phob2_cc_data_pane_t2_ParamLimits

0x933d,	// (0x000774fa) phob2_cc_data_pane_t2

0x9357,	// (0x00077514) phob2_cc_data_pane_t3_ParamLimits

0x9357,	// (0x00077514) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0007e0f5) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0007e0f5) phob2_cc_data_pane_t

0xefa2,	// (0x0007d15f) phob2_cc_list_pane_ParamLimits

0xefa2,	// (0x0007d15f) phob2_cc_list_pane

0xd971,	// (0x0007bb2e) scroll_pane_cp035_ParamLimits

0xd971,	// (0x0007bb2e) scroll_pane_cp035

0x95a3,	// (0x00077760) bg_button_pane_cp033

0xefae,	// (0x0007d16b) phob2_cc_button_pane_g1

0xefba,	// (0x0007d177) phob2_cc_button_pane_t1

0xefcf,	// (0x0007d18c) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0007e0fc) phob2_cc_button_pane_t

0x9371,	// (0x0007752e) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9371,	// (0x0007752e) list_double_large_graphic_phob2_cc_pane

0x9385,	// (0x00077542) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9385,	// (0x00077542) list_double_large_graphic_phob2_cc_pane_g1

0x9391,	// (0x0007754e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9391,	// (0x0007754e) list_double_large_graphic_phob2_cc_pane_g2

0x939d,	// (0x0007755a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x939d,	// (0x0007755a) list_double_large_graphic_phob2_cc_pane_g3

0x93a9,	// (0x00077566) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x93a9,	// (0x00077566) list_double_large_graphic_phob2_cc_pane_g4

0x93b5,	// (0x00077572) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x93b5,	// (0x00077572) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0007e101) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0007e101) list_double_large_graphic_phob2_cc_pane_g

0x93c1,	// (0x0007757e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x93c1,	// (0x0007757e) list_double_large_graphic_phob2_cc_pane_t1

0x93ea,	// (0x000775a7) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x93ea,	// (0x000775a7) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0007e10c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0007e10c) list_double_large_graphic_phob2_cc_pane_t

0xefe1,	// (0x0007d19e) list_highlight_pane_cp025_ParamLimits

0xefe1,	// (0x0007d19e) list_highlight_pane_cp025

0x95a3,	// (0x00077760) bg_button_pane_cp033_ParamLimits

0xefae,	// (0x0007d16b) phob2_cc_button_pane_g1_ParamLimits

0xefba,	// (0x0007d177) phob2_cc_button_pane_t1_ParamLimits

0xefcf,	// (0x0007d18c) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0007e0fc) phob2_cc_button_pane_t_ParamLimits

0xfe79,	// (0x0006e036) popup_wgtman_window

0xd7b4,	// (0x0007b971) scroll_pane_cp038

0x8d4a,	// (0x00076f07) wgtman_btn_pane_cp_01_ParamLimits

0x8d4a,	// (0x00076f07) wgtman_btn_pane_cp_01

0xefef,	// (0x0007d1ac) wgtman_content_pane

0xeff8,	// (0x0007d1b5) wgtman_heading_pane

0x954a,	// (0x00077707) bg_heading_pane_cp02

0xf001,	// (0x0007d1be) wgtman_heading_pane_g1

0xf009,	// (0x0007d1c6) wgtman_heading_pane_t1

0xf017,	// (0x0007d1d4) scroll_pane_cp036

0xf01f,	// (0x0007d1dc) wgtman_list_pane

0xf027,	// (0x0007d1e4) wgtman_list_pane_t1_ParamLimits

0xf027,	// (0x0007d1e4) wgtman_list_pane_t1

0xa1e8,	// (0x000783a5) cam4_grid_pane

0x684e,	// (0x00074a0b) bg_button_pane_cp015_ParamLimits

0x6862,	// (0x00074a1f) bg_button_pane_cp016_ParamLimits

0x6875,	// (0x00074a32) bg_button_pane_cp017_ParamLimits

0x68cd,	// (0x00074a8a) popup_vitu2_query_window_g3_ParamLimits

0x68cd,	// (0x00074a8a) popup_vitu2_query_window_g3

0x698a,	// (0x00074b47) popup_vitu2_query_window_t6_ParamLimits

0x698a,	// (0x00074b47) popup_vitu2_query_window_t6

0x69b5,	// (0x00074b72) popup_vitu2_query_window_t7_ParamLimits

0x69b5,	// (0x00074b72) popup_vitu2_query_window_t7

0xe2e9,	// (0x0007c4a6) cam4_grid_pane_g1

0xe2f2,	// (0x0007c4af) cam4_grid_pane_g2

0xf041,	// (0x0007d1fe) cam4_grid_pane_g3

0xf04a,	// (0x0007d207) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0007e111) cam4_grid_pane_g

0x1096,	// (0x0006f253) aid_placing_vt_slider_lsc_ParamLimits

0x1383,	// (0x0006f540) vidtel_button_pane_ParamLimits

0x1383,	// (0x0006f540) vidtel_button_pane

0x954a,	// (0x00077707) bg_button_pane_cp034

0x9413,	// (0x000775d0) vidtel_button_pane_g1

0x941b,	// (0x000775d8) vidtel_button_pane_t1

0xd8b8,	// (0x0007ba75) aid_size_vtel_slider_touch

0xd971,	// (0x0007bb2e) scroll_pane_cp039

0xe1ae,	// (0x0007c36b) ncim_query_button_pane_cp01_ParamLimits

0xe1cd,	// (0x0007c38a) ncimui_query_pane_g1_ParamLimits

0x95a3,	// (0x00077760) input_focus_pane_cp012_ParamLimits

0xe1f2,	// (0x0007c3af) ncim_query_entry_pane_t1_ParamLimits

0xd971,	// (0x0007bb2e) scroll_pane_cp039_ParamLimits

0x263e,	// (0x000707fb) navi_pane_bcale_mc_g1

0x2646,	// (0x00070803) navi_pane_bcale_mc_t1

0xe770,	// (0x0007c92d) main_sp_fs_email_pane_g1

0xe77c,	// (0x0007c939) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0007dea2) main_sp_fs_email_pane_g

0xea1c,	// (0x0007cbd9) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea1c,	// (0x0007cbd9) list_single_cale_mrui_row_pane_g3

0x891e,	// (0x00076adb) list_single_recal_day_pane_g5_event_pane

0xa881,	// (0x00078a3e) list_single_recal_day_pane_g7

0xf055,	// (0x0007d212) list_recal_day_event_pane_cp01

0xf05e,	// (0x0007d21b) list_recal_vselct_arw_lo_pane_cp01

0xf066,	// (0x0007d223) list_recal_vselct_arw_up_pane_cp01

0xf06e,	// (0x0007d22b) list_recal_vselct_pane_cp01

0xd8da,	// (0x0007ba97) list_recal_day_event_pane_cp01_g1

0xbc37,	// (0x00079df4) list_recal_day_event_pane_cp01_t1

0xa889,	// (0x00078a46) list_single_recal_day_pane_t1_ParamLimits

0xbc0c,	// (0x00079dc9) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0007dfff) list_single_recal_day_pane_t_ParamLimits

0x9c1f,	// (0x00077ddc) bg_notes_pane_ParamLimits

0xa8b7,	// (0x00078a74) list_notes_pane_ParamLimits

0x01c6,	// (0x0006e383) scroll_pane_cp06_ParamLimits

0xa8d9,	// (0x00078a96) main_notes_pane_ParamLimits

0x954a,	// (0x00077707) main_welc_pane

0x9431,	// (0x000775ee) main_welc_body_pane_ParamLimits

0x9431,	// (0x000775ee) main_welc_body_pane

0x9450,	// (0x0007760d) main_welc_opti_pane_ParamLimits

0x9450,	// (0x0007760d) main_welc_opti_pane

0x9499,	// (0x00077656) main_welc_pane_t1_ParamLimits

0x9499,	// (0x00077656) main_welc_pane_t1

0x94bb,	// (0x00077678) main_welc_body_row_pane_ParamLimits

0x94bb,	// (0x00077678) main_welc_body_row_pane

0x94cf,	// (0x0007768c) main_welc_opti_row_pane_ParamLimits

0x94cf,	// (0x0007768c) main_welc_opti_row_pane

0xf078,	// (0x0007d235) main_welc_opti_row_pane_g1

0xf080,	// (0x0007d23d) main_welc_opti_row_pane_t1

0xf08f,	// (0x0007d24c) main_welc_body_row_pane_t1

0xed6f,	// (0x0007cf2c) popup_notif_wgt_heading_pane

0xed89,	// (0x0007cf46) aid_size_list_notif_wgt_del_ParamLimits

0xed96,	// (0x0007cf53) list_notif_wgt_row_pane_g1_ParamLimits

0xeda2,	// (0x0007cf5f) list_notif_wgt_row_pane_g2_ParamLimits

0xedb6,	// (0x0007cf73) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0007e066) list_notif_wgt_row_pane_g_ParamLimits

0xedc3,	// (0x0007cf80) list_notif_wgt_row_pane_t1_ParamLimits

0xedd9,	// (0x0007cf96) list_notif_wgt_row_pane_t2_ParamLimits

0xedeb,	// (0x0007cfa8) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0007e06d) list_notif_wgt_row_pane_t_ParamLimits

0x8de3,	// (0x00076fa0) listrow_wgtman_pane_g1_ParamLimits

0x8df0,	// (0x00076fad) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0007e096) listrow_wgtman_pane_g_ParamLimits

0x8e0e,	// (0x00076fcb) listrow_wgtman_pane_t1_ParamLimits

0x8e26,	// (0x00076fe3) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0007e09b) listrow_wgtman_pane_t_ParamLimits

0x8e4c,	// (0x00077009) wait_bar_pane_cp09_ParamLimits

0x954a,	// (0x00077707) bg_popup_heading_pane_cp02

0xf09e,	// (0x0007d25b) popup_notif_wgt_heading_pane_g1

0xf0a6,	// (0x0007d263) popup_notif_wgt_heading_pane_t1

0x954a,	// (0x00077707) main_vids_pane

0x954a,	// (0x00077707) vids_listscroll_pane

0x94df,	// (0x0007769c) scroll_pane_cp040

0x954a,	// (0x00077707) vids_list_pane

0x94ea,	// (0x000776a7) vids_list_double_pane_ParamLimits

0x94ea,	// (0x000776a7) vids_list_double_pane

0x94fb,	// (0x000776b8) vids_list_double_pane_g1

0x9504,	// (0x000776c1) vids_list_double_pane_t1

0x9514,	// (0x000776d1) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0007e11f) vids_list_double_pane_t

0x95a3,	// (0x00077760) main_ncimui_pane_ParamLimits

0x7582,	// (0x0007573f) main_ncimui_pane_g1_ParamLimits

0x758e,	// (0x0007574b) main_ncimui_pane_g2_ParamLimits

0x758e,	// (0x0007574b) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0007dda7) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0007dda7) main_ncimui_pane_g

0x946f,	// (0x0007762c) main_welc_pane_g1_ParamLimits

0x946f,	// (0x0007762c) main_welc_pane_g1

0x9484,	// (0x00077641) main_welc_pane_g2_ParamLimits

0x9484,	// (0x00077641) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0007e11a) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0007e11a) main_welc_pane_g

0x9c1f,	// (0x00077ddc) listscroll_mce_pane_ParamLimits

0x271e,	// (0x000708db) wait_bar_pane_cp10

0xc821,	// (0x0007a9de) main_cale_day_pane_ParamLimits

0xc821,	// (0x0007a9de) main_cale_week_pane_ParamLimits

0x9c1f,	// (0x00077ddc) main_messa_pane_ParamLimits

0x4dee,	// (0x00072fab) main_clock2_btn_pane_ParamLimits

0x4dee,	// (0x00072fab) main_clock2_btn_pane

0xd03e,	// (0x0007b1fb) main_clock2_btn_pane_cp01_ParamLimits

0xd03e,	// (0x0007b1fb) main_clock2_btn_pane_cp01

0xe9ed,	// (0x0007cbaa) list_cale_mrui_pane_ParamLimits

0xee2f,	// (0x0007cfec) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0007e074) main_cf0_pane_g

0x901d,	// (0x000771da) area_left_week_number_pane_ParamLimits

0x902b,	// (0x000771e8) area_top_day_name_pane_ParamLimits

0x903e,	// (0x000771fb) frame_month_view_pane_ParamLimits

0xef57,	// (0x0007d114) grid_month_view_pane_ParamLimits

0xef65,	// (0x0007d122) frm_month_g1_ParamLimits

0x90c5,	// (0x00077282) frm_month_g2_ParamLimits

0x90d8,	// (0x00077295) frm_month_g3_ParamLimits

0x90eb,	// (0x000772a8) frm_month_g4_ParamLimits

0x90fe,	// (0x000772bb) frm_month_g5_ParamLimits

0x9111,	// (0x000772ce) frm_month_g6_ParamLimits

0x9124,	// (0x000772e1) frm_month_g7_ParamLimits

0xef72,	// (0x0007d12f) frm_month_g8_ParamLimits

0x9139,	// (0x000772f6) frm_month_g9_ParamLimits

0x9149,	// (0x00077306) frm_month_g10_ParamLimits

0x9159,	// (0x00077316) frm_month_g11_ParamLimits

0x9169,	// (0x00077326) frm_month_g12_ParamLimits

0x917b,	// (0x00077338) frm_month_g13_ParamLimits

0x918f,	// (0x0007734c) frm_month_g14_ParamLimits

0x91a3,	// (0x00077360) frm_month_g15_ParamLimits

0x91b7,	// (0x00077374) frm_month_g16_ParamLimits

0xff08,	// (0x0007e0c5) frm_month_g_ParamLimits

0xef7f,	// (0x0007d13c) cell_top_day_name_pane_t1_ParamLimits

0x91cb,	// (0x00077388) cell_area_left_week_number_pane_g1_ParamLimits

0x91d7,	// (0x00077394) cell_area_left_week_number_pane_t1_ParamLimits

0xceae,	// (0x0007b06b) cell_month_view_pane_g1_ParamLimits

0x91ea,	// (0x000773a7) cell_month_view_pane_t1_ParamLimits

0x9c17,	// (0x00077dd4) main_clock2_btn_pane_g1

0xf0b4,	// (0x0007d271) main_clock2_btn_pane_t1

0x95a3,	// (0x00077760) listscroll_cmail_pane_ParamLimits

0xe770,	// (0x0007c92d) main_sp_fs_email_pane_g1_ParamLimits

0xe77c,	// (0x0007c939) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0007dea2) main_sp_fs_email_pane_g_ParamLimits

0xeaf9,	// (0x0007ccb6) list_recal_day_pane_ParamLimits

0xeb0a,	// (0x0007ccc7) mian_recal_day_pane_t1

0x806d,	// (0x0007622a) list_single_dyc_row_text_pane_t4_ParamLimits

0x806d,	// (0x0007622a) list_single_dyc_row_text_pane_t4

0x80b6,	// (0x00076273) list_single_dyc_row_text_pane_t5_ParamLimits

0x80b6,	// (0x00076273) list_single_dyc_row_text_pane_t5

0xa5e1,	// (0x0007879e) list_single_dyc_row_text_pane_t6_ParamLimits

0xa5e1,	// (0x0007879e) list_single_dyc_row_text_pane_t6

0xae7f,	// (0x0007903c) aid_mgn_list_cale_time_pane

0x95a3,	// (0x00077760) main_gallery2_pane_ParamLimits

0xd052,	// (0x0007b20f) main_clock2_pane_cp01_t1

0xd062,	// (0x0007b21f) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0007d981) main_clock2_pane_cp01_t

0x0645,	// (0x0006e802) cale_week_scroll_pane_g16_ParamLimits

0x0645,	// (0x0006e802) cale_week_scroll_pane_g16

0xaa8f,	// (0x00078c4c) vorec_slider_pane

0x941b,	// (0x000775d8) vidtel_button_pane_t1_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
