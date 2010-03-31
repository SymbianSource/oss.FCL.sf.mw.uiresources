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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0006dbea };

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
0xfce0,	// (0x0006d8ca) Screen

0xfcec,	// (0x0006d8d6) application_window

0xfd38,	// (0x0006d922) area_bottom_pane_ParamLimits

0xfd38,	// (0x0006d922) area_bottom_pane

0xfd71,	// (0x0006d95b) area_top_pane_ParamLimits

0xfd71,	// (0x0006d95b) area_top_pane

0x95f0,	// (0x000771da) call_video_uplink_pane_ParamLimits

0x95f0,	// (0x000771da) call_video_uplink_pane

0xfdff,	// (0x0006d9e9) main_pane_ParamLimits

0xfdff,	// (0x0006d9e9) main_pane

0xc8a9,	// (0x0007a493) context_pane

0x3977,	// (0x00071561) navi_pane

0x39a7,	// (0x00071591) popup_cale_events_window_ParamLimits

0x39a7,	// (0x00071591) popup_cale_events_window

0xc8bc,	// (0x0007a4a6) popup_mup_playback_window

0x39bf,	// (0x000715a9) signal_pane

0xa8bb,	// (0x000784a5) main_browser_pane

0xb3bd,	// (0x00078fa7) main_burst_pane

0x3679,	// (0x00071263) main_calc_pane

0xc84c,	// (0x0007a436) main_cale_day_pane

0x044f,	// (0x0006e039) main_cale_month_pane

0xc84c,	// (0x0007a436) main_cale_week_pane

0xb3bd,	// (0x00078fa7) main_call_pane

0x9a2f,	// (0x00077619) main_call_poc_pane

0xb3bd,	// (0x00078fa7) main_camera_pane

0xb3bd,	// (0x00078fa7) main_chi_dic_pane

0xb25f,	// (0x00078e49) main_clock_pane

0x9a2f,	// (0x00077619) main_fmradio_pane

0xb3bd,	// (0x00078fa7) main_graph_messa_pane

0x9a2f,	// (0x00077619) main_help_pane

0xa8bb,	// (0x000784a5) main_im_pane

0x9c8a,	// (0x00077874) main_image_pane_ParamLimits

0x9c8a,	// (0x00077874) main_image_pane

0x9a2f,	// (0x00077619) main_location2_pane

0xb3bd,	// (0x00078fa7) main_location_pane

0x9c8a,	// (0x00077874) main_messa_pane

0x9a2f,	// (0x00077619) main_mp2_pane

0xb3bd,	// (0x00078fa7) main_mp_pane

0x9a2f,	// (0x00077619) main_msg_pane

0x9a2f,	// (0x00077619) main_mup_eq_pane

0x9a2f,	// (0x00077619) main_mup_pane

0xa8bb,	// (0x000784a5) main_notes_pane

0x9a2f,	// (0x00077619) main_pec_pane

0x9a2f,	// (0x00077619) main_phob_pane

0x9a2f,	// (0x00077619) main_pinb_pane

0x9a2f,	// (0x00077619) main_postcard_pane

0x9a2f,	// (0x00077619) main_qdial_pane

0xb3bd,	// (0x00078fa7) main_skin_pane

0x9a2f,	// (0x00077619) main_smil2_pane

0xb3bd,	// (0x00078fa7) main_smil_pane

0xb3bd,	// (0x00078fa7) main_video_pane

0xb3bd,	// (0x00078fa7) main_video_tele_pane

0x9c8a,	// (0x00077874) main_viewer_pane_ParamLimits

0x9c8a,	// (0x00077874) main_viewer_pane

0xb3bd,	// (0x00078fa7) main_vorec_pane

0x36cf,	// (0x000712b9) popup_blid_sat_info_window_ParamLimits

0x36cf,	// (0x000712b9) popup_blid_sat_info_window

0x3733,	// (0x0007131d) popup_dyc_status_message_window_ParamLimits

0x3733,	// (0x0007131d) popup_dyc_status_message_window

0x374d,	// (0x00071337) popup_grid_large_graphic_window_ParamLimits

0x374d,	// (0x00071337) popup_grid_large_graphic_window

0x380f,	// (0x000713f9) popup_loc_request_window_ParamLimits

0x380f,	// (0x000713f9) popup_loc_request_window

0x394b,	// (0x00071535) popup_wml_address_window_ParamLimits

0x394b,	// (0x00071535) popup_wml_address_window

0x34b7,	// (0x000710a1) call_muted_g1

0x314b,	// (0x00070d35) popup_call_audio_conf_window_ParamLimits

0x314b,	// (0x00070d35) popup_call_audio_conf_window

0x34c7,	// (0x000710b1) popup_call_audio_first_window_ParamLimits

0x34c7,	// (0x000710b1) popup_call_audio_first_window

0x353d,	// (0x00071127) popup_call_audio_in_window_ParamLimits

0x353d,	// (0x00071127) popup_call_audio_in_window

0x3579,	// (0x00071163) popup_call_audio_out_window_ParamLimits

0x3579,	// (0x00071163) popup_call_audio_out_window

0x35b3,	// (0x0007119d) popup_call_audio_second_window_ParamLimits

0x35b3,	// (0x0007119d) popup_call_audio_second_window

0x3609,	// (0x000711f3) popup_call_audio_wait_window_ParamLimits

0x3609,	// (0x000711f3) popup_call_audio_wait_window

0x363e,	// (0x00071228) popup_number_entry_window_ParamLimits

0x363e,	// (0x00071228) popup_number_entry_window

0x961c,	// (0x00077206) bg_popup_call_pane_cp05_ParamLimits

0x961c,	// (0x00077206) bg_popup_call_pane_cp05

0x963c,	// (0x00077226) popup_number_entry_window_t1

0x964f,	// (0x00077239) popup_number_entry_window_t2

0x9661,	// (0x0007724b) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0007ccb7) popup_number_entry_window_t

0x9673,	// (0x0007725d) text_title_cp2

0x9686,	// (0x00077270) bg_popup_call_pane_cp_ParamLimits

0x9686,	// (0x00077270) bg_popup_call_pane_cp

0x9694,	// (0x0007727e) call_thumbnail_pane

0x969c,	// (0x00077286) popup_call_audio_in_window_g1_ParamLimits

0x969c,	// (0x00077286) popup_call_audio_in_window_g1

0x96a8,	// (0x00077292) popup_call_audio_in_window_g2_ParamLimits

0x96a8,	// (0x00077292) popup_call_audio_in_window_g2

0x96b4,	// (0x0007729e) popup_call_audio_in_window_g3_ParamLimits

0x96b4,	// (0x0007729e) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0007ccc0) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0007ccc0) popup_call_audio_in_window_g

0x96c0,	// (0x000772aa) popup_call_audio_in_window_t1_ParamLimits

0x96c0,	// (0x000772aa) popup_call_audio_in_window_t1

0x96dc,	// (0x000772c6) popup_call_audio_in_window_t2_ParamLimits

0x96dc,	// (0x000772c6) popup_call_audio_in_window_t2

0x96f8,	// (0x000772e2) popup_call_audio_in_window_t3_ParamLimits

0x96f8,	// (0x000772e2) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0007ccc7) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0007ccc7) popup_call_audio_in_window_t

0x9686,	// (0x00077270) bg_popup_call_pane_cp01_ParamLimits

0x9686,	// (0x00077270) bg_popup_call_pane_cp01

0x9694,	// (0x0007727e) call_thumbnail_pane_cp02

0x970b,	// (0x000772f5) call_type_pane_cp022

0x9713,	// (0x000772fd) popup_call_audio_out_window_g1_ParamLimits

0x9713,	// (0x000772fd) popup_call_audio_out_window_g1

0x9725,	// (0x0007730f) popup_call_audio_out_window_g2_ParamLimits

0x9725,	// (0x0007730f) popup_call_audio_out_window_g2

0x9731,	// (0x0007731b) popup_call_audio_out_window_g3_ParamLimits

0x9731,	// (0x0007731b) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0007ccce) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0007ccce) popup_call_audio_out_window_g

0x9743,	// (0x0007732d) popup_call_audio_out_window_t1_ParamLimits

0x9743,	// (0x0007732d) popup_call_audio_out_window_t1

0x975b,	// (0x00077345) popup_call_audio_out_window_t2_ParamLimits

0x975b,	// (0x00077345) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0007ccd5) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0007ccd5) popup_call_audio_out_window_t

0x9770,	// (0x0007735a) bg_popup_call_pane_ParamLimits

0x9770,	// (0x0007735a) bg_popup_call_pane

0xffbe,	// (0x0006dba8) call_thumbnail_pane_cp_ParamLimits

0xffbe,	// (0x0006dba8) call_thumbnail_pane_cp

0x97f4,	// (0x000773de) call_type_pane_cp01_ParamLimits

0x97f4,	// (0x000773de) call_type_pane_cp01

0x9838,	// (0x00077422) popup_call_audio_first_window_g1_ParamLimits

0x9838,	// (0x00077422) popup_call_audio_first_window_g1

0x9884,	// (0x0007746e) popup_call_audio_first_window_g2_ParamLimits

0x9884,	// (0x0007746e) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0007ccda) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0007ccda) popup_call_audio_first_window_g

0x98c8,	// (0x000774b2) popup_call_audio_first_window_t1_ParamLimits

0x98c8,	// (0x000774b2) popup_call_audio_first_window_t1

0x9974,	// (0x0007755e) popup_call_audio_first_window_t4_ParamLimits

0x9974,	// (0x0007755e) popup_call_audio_first_window_t4

0x9a00,	// (0x000775ea) popup_call_audio_first_window_t5_ParamLimits

0x9a00,	// (0x000775ea) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0007ccdf) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0007ccdf) popup_call_audio_first_window_t

0x9a2f,	// (0x00077619) bg_popup_call_pane_cp02

0x9a39,	// (0x00077623) call_type_pane_cp023

0x9a41,	// (0x0007762b) popup_call_audio_wait_window_g1

0x9a49,	// (0x00077633) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0007cce6) popup_call_audio_wait_window_g

0x9a51,	// (0x0007763b) popup_call_audio_wait_window_t3

0x9a5f,	// (0x00077649) bg_popup_call_pane_cp03_ParamLimits

0x9a5f,	// (0x00077649) bg_popup_call_pane_cp03

0x9abf,	// (0x000776a9) call_thumbnail_pane_cp011_ParamLimits

0x9abf,	// (0x000776a9) call_thumbnail_pane_cp011

0x9acb,	// (0x000776b5) call_type_pane_cp034_ParamLimits

0x9acb,	// (0x000776b5) call_type_pane_cp034

0x9b07,	// (0x000776f1) popup_call_audio_second_window_g1_ParamLimits

0x9b07,	// (0x000776f1) popup_call_audio_second_window_g1

0x9b43,	// (0x0007772d) popup_call_audio_second_window_g2_ParamLimits

0x9b43,	// (0x0007772d) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0007cceb) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0007cceb) popup_call_audio_second_window_g

0x9b7f,	// (0x00077769) popup_call_audio_second_window_t1_ParamLimits

0x9b7f,	// (0x00077769) popup_call_audio_second_window_t1

0x9c00,	// (0x000777ea) popup_call_audio_second_window_t2_ParamLimits

0x9c00,	// (0x000777ea) popup_call_audio_second_window_t2

0x9c36,	// (0x00077820) popup_call_audio_second_window_t3_ParamLimits

0x9c36,	// (0x00077820) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0007ccf0) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0007ccf0) popup_call_audio_second_window_t

0x9a2f,	// (0x00077619) bg_popup_call_pane_cp04

0x9c6c,	// (0x00077856) list_conf_pane

0x9c74,	// (0x0007785e) popup_call_audio_conf_window_t1

0x9c82,	// (0x0007786c) call_thumbnail_pane_g1

0x9c8a,	// (0x00077874) bg_pinb_pane_ParamLimits

0x9c8a,	// (0x00077874) bg_pinb_pane

0x9c98,	// (0x00077882) find_pinb_pane

0x9ca1,	// (0x0007788b) listscroll_pinb_pane_ParamLimits

0x9ca1,	// (0x0007788b) listscroll_pinb_pane

0x9cb0,	// (0x0007789a) pinb_bg_pane_g1

0xffe2,	// (0x0006dbcc) pinb_bg_pane_g2

0xffee,	// (0x0006dbd8) pinb_bg_pane_g3

0xfffa,	// (0x0006dbe4) pinb_bg_pane_g4

0x0006,	// (0x0006dbf0) pinb_bg_pane_g5

0x0012,	// (0x0006dbfc) pinb_bg_pane_g6

0x001d,	// (0x0006dc07) pinb_bg_pane_g7

0x0028,	// (0x0006dc12) pinb_bg_pane_g8

0x0033,	// (0x0006dc1d) pinb_bg_pane_g9

0x003d,	// (0x0006dc27) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0007ccf7) pinb_bg_pane_g

0x005a,	// (0x0006dc44) grid_pinb_pane

0x0065,	// (0x0006dc4f) list_pinb_pane

0x0070,	// (0x0006dc5a) scroll_pane_cp01_ParamLimits

0x0070,	// (0x0006dc5a) scroll_pane_cp01

0x9cba,	// (0x000778a4) find_pinb_pane_g1_ParamLimits

0x9cba,	// (0x000778a4) find_pinb_pane_g1

0x9cd2,	// (0x000778bc) find_pinb_pane_t1

0xa850,	// (0x0007843a) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0007cd11) find_pinb_pane_t

0xa865,	// (0x0007844f) input_focus_pane_cp01_ParamLimits

0xa865,	// (0x0007844f) input_focus_pane_cp01

0x0082,	// (0x0006dc6c) cell_pinb_pane_ParamLimits

0x0082,	// (0x0006dc6c) cell_pinb_pane

0x00a4,	// (0x0006dc8e) cell_pinb_pane_g1_ParamLimits

0x00a4,	// (0x0006dc8e) cell_pinb_pane_g1

0x00b9,	// (0x0006dca3) cell_pinb_pane_g2_ParamLimits

0x00b9,	// (0x0006dca3) cell_pinb_pane_g2

0xa871,	// (0x0007845b) cell_pinb_pane_g3_ParamLimits

0xa871,	// (0x0007845b) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0007cd16) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0007cd16) cell_pinb_pane_g

0x9a2f,	// (0x00077619) grid_highlight_pane_cp01

0x00c5,	// (0x0006dcaf) list_pinb_item_pane_ParamLimits

0x00c5,	// (0x0006dcaf) list_pinb_item_pane

0x9a2f,	// (0x00077619) list_highlight_pane_cp02

0x00d7,	// (0x0006dcc1) list_pinb_item_pane_g1_ParamLimits

0x00d7,	// (0x0006dcc1) list_pinb_item_pane_g1

0x00e4,	// (0x0006dcce) list_pinb_item_pane_g2_ParamLimits

0x00e4,	// (0x0006dcce) list_pinb_item_pane_g2

0x00f0,	// (0x0006dcda) list_pinb_item_pane_g3_ParamLimits

0x00f0,	// (0x0006dcda) list_pinb_item_pane_g3

0x0101,	// (0x0006dceb) list_pinb_item_pane_g4_ParamLimits

0x0101,	// (0x0006dceb) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0007cd1d) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0007cd1d) list_pinb_item_pane_g

0x010d,	// (0x0006dcf7) list_pinb_item_pane_t1_ParamLimits

0x010d,	// (0x0006dcf7) list_pinb_item_pane_t1

0x0142,	// (0x0006dd2c) calc_display_pane

0x016a,	// (0x0006dd54) calc_paper_pane

0x018d,	// (0x0006dd77) grid_calc_pane

0x9a2f,	// (0x00077619) bg_list_pane_cp01

0x01bb,	// (0x0006dda5) clock_g1

0x01c3,	// (0x0006ddad) clock_g2

0x0001,

0xf13c,	// (0x0007cd26) clock_g

0x01cb,	// (0x0006ddb5) clock_t1_ParamLimits

0x01cb,	// (0x0006ddb5) clock_t1

0x01e0,	// (0x0006ddca) clock_t2_ParamLimits

0x01e0,	// (0x0006ddca) clock_t2

0x01f2,	// (0x0006dddc) clock_t3_ParamLimits

0x01f2,	// (0x0006dddc) clock_t3

0x0204,	// (0x0006ddee) clock_t4_ParamLimits

0x0204,	// (0x0006ddee) clock_t4

0x0216,	// (0x0006de00) clock_t5_ParamLimits

0x0216,	// (0x0006de00) clock_t5

0x022b,	// (0x0006de15) clock_t6_ParamLimits

0x022b,	// (0x0006de15) clock_t6

0x023d,	// (0x0006de27) clock_t7_ParamLimits

0x023d,	// (0x0006de27) clock_t7

0x024f,	// (0x0006de39) clock_t8_ParamLimits

0x024f,	// (0x0006de39) clock_t8

0x0263,	// (0x0006de4d) clock_t9_ParamLimits

0x0263,	// (0x0006de4d) clock_t9

0x0008,

0xf141,	// (0x0007cd2b) clock_t_ParamLimits

0xf141,	// (0x0007cd2b) clock_t

0xa87d,	// (0x00078467) popup_clock_analogue_window_cp02

0xa87d,	// (0x00078467) popup_clock_digital_window_cp01

0xa885,	// (0x0007846f) listscroll_help_pane

0x9a2f,	// (0x00077619) phob_pre_status_pane

0xa88f,	// (0x00078479) grid_qdial_pane

0x9c8a,	// (0x00077874) listscroll_mce_pane

0x9c8a,	// (0x00077874) bg_notes_pane

0xa899,	// (0x00078483) list_notes_pane

0x0279,	// (0x0006de63) scroll_pane_cp06

0xa8a7,	// (0x00078491) bg_calc_paper_pane

0x9cf6,	// (0x000778e0) list_calc_pane

0xa8bb,	// (0x000784a5) bg_calc_display_pane

0x028d,	// (0x0006de77) calc_display_pane_t1

0x029f,	// (0x0006de89) calc_display_pane_t2

0x9d10,	// (0x000778fa) calc_display_pane_t3

0x0002,

0xf154,	// (0x0007cd3e) calc_display_pane_t

0x02b1,	// (0x0006de9b) cell_calc_pane_ParamLimits

0x02b1,	// (0x0006de9b) cell_calc_pane

0xa8c7,	// (0x000784b1) bg_calc_paper_pane_g1

0xa8d3,	// (0x000784bd) bg_calc_paper_pane_g2

0xa8df,	// (0x000784c9) bg_calc_paper_pane_g3

0xa8eb,	// (0x000784d5) bg_calc_paper_pane_g4

0xa8f7,	// (0x000784e1) bg_calc_paper_pane_g5

0x02ee,	// (0x0006ded8) bg_calc_paper_pane_g6

0x0301,	// (0x0006deeb) bg_calc_paper_pane_g7

0x0314,	// (0x0006defe) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0007cd45) bg_calc_paper_pane_g

0x0325,	// (0x0006df0f) calc_bg_paper_pane_g9

0x0336,	// (0x0006df20) list_calc_item_pane_ParamLimits

0x0336,	// (0x0006df20) list_calc_item_pane

0xa903,	// (0x000784ed) list_calc_item_pane_g1

0x9d22,	// (0x0007790c) list_calc_item_pane_t1_ParamLimits

0x9d22,	// (0x0007790c) list_calc_item_pane_t1

0x034e,	// (0x0006df38) list_calc_item_pane_t2_ParamLimits

0x034e,	// (0x0006df38) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0007cd56) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0007cd56) list_calc_item_pane_t

0xa910,	// (0x000784fa) cell_calc_pane_g1

0xa91a,	// (0x00078504) grid_highlight_pane_cp02

0xa93c,	// (0x00078526) bg_calc_display_pane_g1

0x9d34,	// (0x0007791e) bg_calc_display_pane_g2

0xa945,	// (0x0007852f) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0007cd60) bg_calc_display_pane_g

0x0380,	// (0x0006df6a) cell_qdial_pane_ParamLimits

0x0380,	// (0x0006df6a) cell_qdial_pane

0x0394,	// (0x0006df7e) cell_qdial_pane_g1_ParamLimits

0x0394,	// (0x0006df7e) cell_qdial_pane_g1

0x03aa,	// (0x0006df94) cell_qdial_pane_g2_ParamLimits

0x03aa,	// (0x0006df94) cell_qdial_pane_g2

0xa94e,	// (0x00078538) cell_qdial_pane_g3_ParamLimits

0xa94e,	// (0x00078538) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0007cd67) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0007cd67) cell_qdial_pane_g

0x03d1,	// (0x0006dfbb) cell_qdial_pane_t1_ParamLimits

0x03d1,	// (0x0006dfbb) cell_qdial_pane_t1

0x03e9,	// (0x0006dfd3) cell_qdial_pane_t2_ParamLimits

0x03e9,	// (0x0006dfd3) cell_qdial_pane_t2

0x03fc,	// (0x0006dfe6) cell_qdial_pane_t3_ParamLimits

0x03fc,	// (0x0006dfe6) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0007cd70) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0007cd70) cell_qdial_pane_t

0x9a2f,	// (0x00077619) grid_highlight_pane_cp04

0xa95a,	// (0x00078544) thumbnail_qdial_pane_ParamLimits

0xa95a,	// (0x00078544) thumbnail_qdial_pane

0xa9b6,	// (0x000785a0) list_help_pane

0xa9bf,	// (0x000785a9) scroll_pane_cp02

0x040f,	// (0x0006dff9) help_list_pane_t1_ParamLimits

0x040f,	// (0x0006dff9) help_list_pane_t1

0x9d3e,	// (0x00077928) bg_notes_pane_g2

0x9d46,	// (0x00077930) bg_notes_pane_g3

0x9d4e,	// (0x00077938) notes_bg_pane_g1

0x9d56,	// (0x00077940) notes_bg_pane_g4

0x9d5e,	// (0x00077948) notes_bg_pane_g5

0x9d66,	// (0x00077950) notes_bg_pane_g6

0x9d6e,	// (0x00077958) notes_bg_pane_g7

0x9d76,	// (0x00077960) notes_bg_pane_g8

0x9d7e,	// (0x00077968) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0007cd8e) notes_bg_pane_g

0x042d,	// (0x0006e017) list_notes_text_pane_ParamLimits

0x042d,	// (0x0006e017) list_notes_text_pane

0xa9c8,	// (0x000785b2) list_notes_text_pane_g1

0x0441,	// (0x0006e02b) list_notes_text_pane_t1

0x044f,	// (0x0006e039) listscroll_cale_week_pane

0x0485,	// (0x0006e06f) bg_cale_heading_pane

0xa9e2,	// (0x000785cc) bg_cale_pane_cp01

0x04ae,	// (0x0006e098) cale_week_corner_pane

0x04cd,	// (0x0006e0b7) cale_week_day_heading_pane

0x04fb,	// (0x0006e0e5) cale_week_scroll_pane_g1

0x051f,	// (0x0006e109) cale_week_scroll_pane_g2

0x0537,	// (0x0006e121) cale_week_scroll_pane_g3

0x054f,	// (0x0006e139) cale_week_scroll_pane_g4

0x056b,	// (0x0006e155) cale_week_scroll_pane_g5

0x058b,	// (0x0006e175) cale_week_scroll_pane_g6

0x05ab,	// (0x0006e195) cale_week_scroll_pane_g7

0x05cf,	// (0x0006e1b9) cale_week_scroll_pane_g8

0x05f3,	// (0x0006e1dd) cale_week_scroll_pane_g9

0x0610,	// (0x0006e1fa) cale_week_scroll_pane_g10

0x062d,	// (0x0006e217) cale_week_scroll_pane_g11

0x064a,	// (0x0006e234) cale_week_scroll_pane_g12

0x0667,	// (0x0006e251) cale_week_scroll_pane_g13

0x0684,	// (0x0006e26e) cale_week_scroll_pane_g14

0x06ad,	// (0x0006e297) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0007cd9d) cale_week_scroll_pane_g

0x06d6,	// (0x0006e2c0) cale_week_time_pane

0x06fa,	// (0x0006e2e4) grid_cale_week_pane

0xaa12,	// (0x000785fc) scroll_pane_cp08

0x0731,	// (0x0006e31b) cell_cale_week_pane_ParamLimits

0x0731,	// (0x0006e31b) cell_cale_week_pane

0x07c1,	// (0x0006e3ab) cale_week_day_heading_pane_t1

0x080b,	// (0x0006e3f5) cale_week_day_heading_pane_t2

0x085a,	// (0x0006e444) cale_week_day_heading_pane_t3

0x08a9,	// (0x0006e493) cale_week_day_heading_pane_t4

0x08f8,	// (0x0006e4e2) cale_week_day_heading_pane_t5

0x094b,	// (0x0006e535) cale_week_day_heading_pane_t6

0x09a2,	// (0x0006e58c) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0007cdbc) cale_week_day_heading_pane_t

0xaa34,	// (0x0007861e) bg_cale_side_pane

0x09ec,	// (0x0006e5d6) cale_week_time_pane_t1

0x0a26,	// (0x0006e610) cale_week_time_pane_t2

0x0a60,	// (0x0006e64a) cale_week_time_pane_t3

0x0a9a,	// (0x0006e684) cale_week_time_pane_t4

0x0ad4,	// (0x0006e6be) cale_week_time_pane_t5

0x0b0e,	// (0x0006e6f8) cale_week_time_pane_t6

0x0b48,	// (0x0006e732) cale_week_time_pane_t7

0x0b82,	// (0x0006e76c) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0007cdcb) cale_week_time_pane_t

0x0bc2,	// (0x0006e7ac) cell_cale_week_pane_g2

0x0be1,	// (0x0006e7cb) cell_cale_week_pane_g3_ParamLimits

0x0be1,	// (0x0006e7cb) cell_cale_week_pane_g3

0xaa42,	// (0x0007862c) grid_highlight_pane_cp07

0xaa4a,	// (0x00078634) listscroll_gms_pane

0xaa54,	// (0x0007863e) grid_gms_pane

0xaa5d,	// (0x00078647) listscroll_gms_pane_g1

0xaa65,	// (0x0007864f) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0007cddc) listscroll_gms_pane_g

0x0bf9,	// (0x0006e7e3) scroll_pane_cp010

0x0c04,	// (0x0006e7ee) cell_gms_pane_ParamLimits

0x0c04,	// (0x0006e7ee) cell_gms_pane

0x0c1e,	// (0x0006e808) cell_gms_pane_g1

0xaa6d,	// (0x00078657) cell_gms_pane_g2

0xaa75,	// (0x0007865f) cell_gms_pane_g3

0xaa7e,	// (0x00078668) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0007cde1) cell_gms_pane_g

0xaa87,	// (0x00078671) grid_highlight_pane_cp09

0x345f,	// (0x00071049) phob_pre_status_pane_g1

0x3467,	// (0x00071051) phob_pre_status_pane_g2

0x346f,	// (0x00071059) phob_pre_status_pane_g3

0x3477,	// (0x00071061) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x0007d1d0) phob_pre_status_pane_g

0x3487,	// (0x00071071) phob_pre_status_pane_t1

0x3497,	// (0x00071081) phob_pre_status_pane_t2

0x34a7,	// (0x00071091) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x0007d1db) phob_pre_status_pane_t

0x9a2f,	// (0x00077619) bg_list_pane_cp05

0x0c2e,	// (0x0006e818) grid_vorec_pane

0x0c3a,	// (0x0006e824) vorec_t1

0x0c48,	// (0x0006e832) vorec_t2

0x0c56,	// (0x0006e840) vorec_t3

0x0c64,	// (0x0006e84e) vorec_t4

0x0c72,	// (0x0006e85c) vorec_t5

0x9d86,	// (0x00077970) vorec_t6

0x0006,

0xf200,	// (0x0007cdea) vorec_t

0x0c8e,	// (0x0006e878) wait_bar_pane_cp01

0x0c96,	// (0x0006e880) cell_vorec_pane_ParamLimits

0x0c96,	// (0x0006e880) cell_vorec_pane

0x9d94,	// (0x0007797e) cell_vorec_pane_g1

0x9a2f,	// (0x00077619) grid_highlight_pane_cp05

0x0cc1,	// (0x0006e8ab) cams_zoom_pane

0x0cd0,	// (0x0006e8ba) image_vga_pane

0x0cea,	// (0x0006e8d4) main_camera_pane_g1

0x0cfc,	// (0x0006e8e6) main_camera_pane_g2

0x0d0c,	// (0x0006e8f6) main_camera_pane_g3

0x0d20,	// (0x0006e90a) main_camera_pane_g4

0x0d34,	// (0x0006e91e) main_camera_pane_g5

0x0d48,	// (0x0006e932) main_camera_pane_g6

0x0d5c,	// (0x0006e946) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0007cdf9) main_camera_pane_g

0x0d70,	// (0x0006e95a) main_camera_pane_t1

0x0d86,	// (0x0006e970) main_camera_pane_t2

0x0001,

0xf220,	// (0x0007ce0a) main_camera_pane_t

0x0dc4,	// (0x0006e9ae) cams_zoom_pane_cp_ParamLimits

0x0dc4,	// (0x0006e9ae) cams_zoom_pane_cp

0x0dec,	// (0x0006e9d6) image_cif_pane_ParamLimits

0x0dec,	// (0x0006e9d6) image_cif_pane

0x0e27,	// (0x0006ea11) image_subqcif_pane

0x0e31,	// (0x0006ea1b) main_video_pane_g1_ParamLimits

0x0e31,	// (0x0006ea1b) main_video_pane_g1

0x0e55,	// (0x0006ea3f) main_video_pane_g2_ParamLimits

0x0e55,	// (0x0006ea3f) main_video_pane_g2

0x0e8b,	// (0x0006ea75) main_video_pane_g3_ParamLimits

0x0e8b,	// (0x0006ea75) main_video_pane_g3

0x0eb9,	// (0x0006eaa3) main_video_pane_g4_ParamLimits

0x0eb9,	// (0x0006eaa3) main_video_pane_g4

0x0ee7,	// (0x0006ead1) main_video_pane_g5_ParamLimits

0x0ee7,	// (0x0006ead1) main_video_pane_g5

0xaa9b,	// (0x00078685) main_video_pane_g6_ParamLimits

0xaa9b,	// (0x00078685) main_video_pane_g6

0x0006,

0xf225,	// (0x0007ce0f) main_video_pane_g_ParamLimits

0xf225,	// (0x0007ce0f) main_video_pane_g

0x0f10,	// (0x0006eafa) main_video_pane_t1_ParamLimits

0x0f10,	// (0x0006eafa) main_video_pane_t1

0xaab5,	// (0x0007869f) cams_zoom_pane_g1

0xaabe,	// (0x000786a8) cams_zoom_pane_g2

0xaac7,	// (0x000786b1) cams_zoom_pane_g3

0xaad0,	// (0x000786ba) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0007ce1e) cams_zoom_pane_g

0x0f6d,	// (0x0006eb57) grid_cams_pane

0x0f87,	// (0x0006eb71) linegrid_cams_pane

0x0f99,	// (0x0006eb83) cell_cams_pane_ParamLimits

0x0f99,	// (0x0006eb83) cell_cams_pane

0xaad9,	// (0x000786c3) cams_burst_image_pane

0xaae1,	// (0x000786cb) cell_cams_pane_g1

0x9a2f,	// (0x00077619) grid_highlight_pane_cp03

0xa910,	// (0x000784fa) mp_bg_pane_g1

0x9a2f,	// (0x00077619) bg_list_pane_cp03

0xc76f,	// (0x0007a359) bg_mp_pane

0xc777,	// (0x0007a361) grid_mp_pane

0xc77f,	// (0x0007a369) media_player_g1

0xc789,	// (0x0007a373) media_player_t1

0xc797,	// (0x0007a381) media_player_t2

0xc7a5,	// (0x0007a38f) media_player_t3

0xc7b3,	// (0x0007a39d) media_player_t4

0xc7c1,	// (0x0007a3ab) media_player_t5

0xc7cf,	// (0x0007a3b9) media_player_t6

0xc7dd,	// (0x0007a3c7) media_player_t7

0x0006,

0xf5d0,	// (0x0007d1ba) media_player_t

0xc7eb,	// (0x0007a3d5) wait_bar_pane_cp02

0xf5b5,	// (0x0007d19f) main_usb_pane_t

0x3456,	// (0x00071040) cell_mp_pane

0xa910,	// (0x000784fa) cell_mp_pane_g1

0x9a2f,	// (0x00077619) grid_highlight_pane_cp06

0xaae9,	// (0x000786d3) grid_skin_colour_pane

0xaaf1,	// (0x000786db) list_highlight_pane_cp03

0x10ae,	// (0x0006ec98) skin_g1

0xaaf9,	// (0x000786e3) skin_t1

0xab08,	// (0x000786f2) skin_t2

0x0001,

0xf269,	// (0x0007ce53) skin_t

0x10b6,	// (0x0006eca0) cell_skin_colour_pane_ParamLimits

0x10b6,	// (0x0006eca0) cell_skin_colour_pane

0xab16,	// (0x00078700) cell_skin_colour_pane_g1

0x1129,	// (0x0006ed13) call_video_g1_ParamLimits

0x1129,	// (0x0006ed13) call_video_g1

0x1145,	// (0x0006ed2f) call_video_g2_ParamLimits

0x1145,	// (0x0006ed2f) call_video_g2

0x0001,

0xf26e,	// (0x0007ce58) call_video_g_ParamLimits

0xf26e,	// (0x0007ce58) call_video_g

0x118a,	// (0x0006ed74) call_video_uplink_pane_cp1_ParamLimits

0x118a,	// (0x0006ed74) call_video_uplink_pane_cp1

0xab28,	// (0x00078712) call_video_uplink_pane_cp2

0x122b,	// (0x0006ee15) video_down_crop_pane_ParamLimits

0x122b,	// (0x0006ee15) video_down_crop_pane

0x1314,	// (0x0006eefe) video_down_pane_ParamLimits

0x1314,	// (0x0006eefe) video_down_pane

0xab30,	// (0x0007871a) video_down_subqcif_pane_ParamLimits

0xab30,	// (0x0007871a) video_down_subqcif_pane

0xab4a,	// (0x00078734) video_down_subqcif_pane_cp_ParamLimits

0xab4a,	// (0x00078734) video_down_subqcif_pane_cp

0xab72,	// (0x0007875c) im_reading_pane_ParamLimits

0xab72,	// (0x0007875c) im_reading_pane

0x141d,	// (0x0006f007) im_writing_pane_ParamLimits

0x141d,	// (0x0006f007) im_writing_pane

0x1439,	// (0x0006f023) im_reading_pane_t1

0xab8c,	// (0x00078776) list_im_pane

0xab9d,	// (0x00078787) scroll_pane_cp07

0x1475,	// (0x0006f05f) im_writing_pane_t1_ParamLimits

0x1475,	// (0x0006f05f) im_writing_pane_t1

0xabb6,	// (0x000787a0) im_writing_pane_t2_ParamLimits

0xabb6,	// (0x000787a0) im_writing_pane_t2

0x0001,

0xf278,	// (0x0007ce62) im_writing_pane_t_ParamLimits

0xf278,	// (0x0007ce62) im_writing_pane_t

0x9a2f,	// (0x00077619) input_focus_pane_cp04

0x9a2f,	// (0x00077619) input_focus_pane_cp05

0x148a,	// (0x0006f074) list_im_single_pane_ParamLimits

0x148a,	// (0x0006f074) list_im_single_pane

0x14a0,	// (0x0006f08a) list_single_im_pane_t1

0x3416,	// (0x00071000) blid_accuracy_pane

0x341e,	// (0x00071008) blid_compass_pane

0x3428,	// (0x00071012) main_location_t1

0x3438,	// (0x00071022) main_location_t2

0x3448,	// (0x00071032) main_location_t3

0x0002,

0xf5df,	// (0x0007d1c9) main_location_t

0x9a2f,	// (0x00077619) aid_levels_location

0xa910,	// (0x000784fa) blid_accuracy_pane_g1

0xa910,	// (0x000784fa) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0007cec4) blid_accuracy_pane_g

0xabfe,	// (0x000787e8) wml_content_pane

0xac3c,	// (0x00078826) wml_button_pane_ParamLimits

0xac3c,	// (0x00078826) wml_button_pane

0x14af,	// (0x0006f099) wml_list_single_large_pane_ParamLimits

0x14af,	// (0x0006f099) wml_list_single_large_pane

0x14c5,	// (0x0006f0af) wml_list_single_medium_pane_ParamLimits

0x14c5,	// (0x0006f0af) wml_list_single_medium_pane

0x14dc,	// (0x0006f0c6) wml_list_single_small_pane_ParamLimits

0x14dc,	// (0x0006f0c6) wml_list_single_small_pane

0xac50,	// (0x0007883a) wml_selection_box_pane_ParamLimits

0xac50,	// (0x0007883a) wml_selection_box_pane

0xac63,	// (0x0007884d) wml_list_single_pane_t1

0xac72,	// (0x0007885c) wml_list_single_medium_pane_t1

0xac81,	// (0x0007886b) wml_list_single_large_pane_t1

0xac90,	// (0x0007887a) input_focus_pane_cp02_ParamLimits

0xac90,	// (0x0007887a) input_focus_pane_cp02

0xaca3,	// (0x0007888d) wml_selection_box_pane_g1

0xacac,	// (0x00078896) wml_selection_box_pane_t1_ParamLimits

0xacac,	// (0x00078896) wml_selection_box_pane_t1

0x9c8a,	// (0x00077874) bg_wml_button_pane_ParamLimits

0x9c8a,	// (0x00077874) bg_wml_button_pane

0xacc4,	// (0x000788ae) wml_button_pane_g1

0xaccc,	// (0x000788b6) wml_button_pane_t1

0xacc4,	// (0x000788ae) wml_button_bg_pane_g1

0xacdc,	// (0x000788c6) wml_button_bg_pane_g2

0xace4,	// (0x000788ce) wml_button_bg_pane_g3

0xacec,	// (0x000788d6) wml_button_bg_pane_g4

0xacf4,	// (0x000788de) wml_button_bg_pane_g5

0xacfc,	// (0x000788e6) wml_button_bg_pane_g6

0xad04,	// (0x000788ee) wml_button_bg_pane_g7

0xad0c,	// (0x000788f6) wml_button_bg_pane_g8

0xad14,	// (0x000788fe) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0007ce67) wml_button_bg_pane_g

0x14f8,	// (0x0006f0e2) bg_list_pane_cp02

0xad1c,	// (0x00078906) mce_header_pane_ParamLimits

0xad1c,	// (0x00078906) mce_header_pane

0xad32,	// (0x0007891c) mce_icon_pane

0xad32,	// (0x0007891c) mce_image_pane

0xad3b,	// (0x00078925) mce_text_pane_ParamLimits

0xad3b,	// (0x00078925) mce_text_pane

0x1502,	// (0x0006f0ec) scroll_pane_cp03

0xac34,	// (0x0007881e) scroll_pane_cp04

0xad4e,	// (0x00078938) scroll_pane_cp05_ParamLimits

0xad4e,	// (0x00078938) scroll_pane_cp05

0x150c,	// (0x0006f0f6) mce_header_field_pane_ParamLimits

0x150c,	// (0x0006f0f6) mce_header_field_pane

0x1525,	// (0x0006f10f) mce_header_field_pane_2_ParamLimits

0x1525,	// (0x0006f10f) mce_header_field_pane_2

0x153b,	// (0x0006f125) mce_header_field_pane_3

0x1543,	// (0x0006f12d) list_single_mce_message_pane_ParamLimits

0x1543,	// (0x0006f12d) list_single_mce_message_pane

0x155c,	// (0x0006f146) list_single_mce_smart_pane_ParamLimits

0x155c,	// (0x0006f146) list_single_mce_smart_pane

0xad5a,	// (0x00078944) input_focus_pane_cp03

0xad63,	// (0x0007894d) list_header_data_pane

0x1580,	// (0x0006f16a) mce_header_field_pane_t1

0x1590,	// (0x0006f17a) list_single_mce_header_pane_ParamLimits

0x1590,	// (0x0006f17a) list_single_mce_header_pane

0xad6b,	// (0x00078955) list_single_mce_header_pane_t1

0xad7a,	// (0x00078964) list_single_mce_message_pane_g1

0xad82,	// (0x0007896c) list_single_mce_message_pane_t1

0x15ca,	// (0x0006f1b4) bg_cale_heading_pane_cp01_ParamLimits

0x15ca,	// (0x0006f1b4) bg_cale_heading_pane_cp01

0xad90,	// (0x0007897a) bg_cale_pane_cp02_ParamLimits

0xad90,	// (0x0007897a) bg_cale_pane_cp02

0x1611,	// (0x0006f1fb) cale_month_corner_pane

0x1630,	// (0x0006f21a) cale_month_day_heading_pane_ParamLimits

0x1630,	// (0x0006f21a) cale_month_day_heading_pane

0x168f,	// (0x0006f279) cale_month_pane_g1_ParamLimits

0x168f,	// (0x0006f279) cale_month_pane_g1

0x16cb,	// (0x0006f2b5) cale_month_pane_g2_ParamLimits

0x16cb,	// (0x0006f2b5) cale_month_pane_g2

0x1707,	// (0x0006f2f1) cale_month_pane_g3_ParamLimits

0x1707,	// (0x0006f2f1) cale_month_pane_g3

0x175b,	// (0x0006f345) cale_month_pane_g4_ParamLimits

0x175b,	// (0x0006f345) cale_month_pane_g4

0x17af,	// (0x0006f399) cale_month_pane_g5_ParamLimits

0x17af,	// (0x0006f399) cale_month_pane_g5

0x180b,	// (0x0006f3f5) cale_month_pane_g6_ParamLimits

0x180b,	// (0x0006f3f5) cale_month_pane_g6

0x186f,	// (0x0006f459) cale_month_pane_g7_ParamLimits

0x186f,	// (0x0006f459) cale_month_pane_g7

0x18db,	// (0x0006f4c5) cale_month_pane_g8_ParamLimits

0x18db,	// (0x0006f4c5) cale_month_pane_g8

0x1947,	// (0x0006f531) cale_month_pane_g9_ParamLimits

0x1947,	// (0x0006f531) cale_month_pane_g9

0x19a5,	// (0x0006f58f) cale_month_pane_g10_ParamLimits

0x19a5,	// (0x0006f58f) cale_month_pane_g10

0x19f7,	// (0x0006f5e1) cale_month_pane_g11_ParamLimits

0x19f7,	// (0x0006f5e1) cale_month_pane_g11

0x1a49,	// (0x0006f633) cale_month_pane_g12_ParamLimits

0x1a49,	// (0x0006f633) cale_month_pane_g12

0x1aa1,	// (0x0006f68b) cale_month_pane_g13_ParamLimits

0x1aa1,	// (0x0006f68b) cale_month_pane_g13

0x000c,

0xf290,	// (0x0007ce7a) cale_month_pane_g_ParamLimits

0xf290,	// (0x0007ce7a) cale_month_pane_g

0x1af9,	// (0x0006f6e3) cale_month_week_pane

0x1b1d,	// (0x0006f707) grid_cale_month_pane_ParamLimits

0x1b1d,	// (0x0006f707) grid_cale_month_pane

0x1b73,	// (0x0006f75d) cale_month_day_heading_pane_t1

0x1bf9,	// (0x0006f7e3) cale_month_day_heading_pane_t2

0x1c8a,	// (0x0006f874) cale_month_day_heading_pane_t3

0x1d1b,	// (0x0006f905) cale_month_day_heading_pane_t4

0x1dac,	// (0x0006f996) cale_month_day_heading_pane_t5

0x1e4d,	// (0x0006fa37) cale_month_day_heading_pane_t6

0x1ef2,	// (0x0006fadc) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0007ce95) cale_month_day_heading_pane_t

0xaa34,	// (0x0007861e) bg_cale_side_pane_cp01

0x1f9b,	// (0x0006fb85) cale_month_week_pane_t1

0x1fb4,	// (0x0006fb9e) cale_month_week_pane_t2

0x1fcd,	// (0x0006fbb7) cale_month_week_pane_t3

0x1fe6,	// (0x0006fbd0) cale_month_week_pane_t4

0x1fff,	// (0x0006fbe9) cale_month_week_pane_t5

0x2018,	// (0x0006fc02) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0007cea4) cale_month_week_pane_t

0x2037,	// (0x0006fc21) cell_cale_month_pane_ParamLimits

0x2037,	// (0x0006fc21) cell_cale_month_pane

0x9dc2,	// (0x000779ac) cell_cale_month_pane_g1

0x218b,	// (0x0006fd75) cell_cale_month_pane_t1_ParamLimits

0x218b,	// (0x0006fd75) cell_cale_month_pane_t1

0xaa42,	// (0x0007862c) grid_highlight_pane_cp08

0xa910,	// (0x000784fa) main_smil_g1

0x21ab,	// (0x0006fd95) smil_status_pane

0xadcf,	// (0x000789b9) smil_text_pane

0xc68d,	// (0x0007a277) bg_popup_call3_rect_pane_g8

0xc695,	// (0x0007a27f) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x0007d15d) bg_popup_call3_rect_pane_g

0xc923,	// (0x0007a50d) smil_status_volume_pane_g1

0x21be,	// (0x0006fda8) smil_status_pane_t1

0x9ef6,	// (0x00077ae0) volume_smil_pane

0xadd9,	// (0x000789c3) list_smil_text_pane

0x21d7,	// (0x0006fdc1) scroll_pane_cp011

0x21e2,	// (0x0006fdcc) smil_text_list_pane_t1_ParamLimits

0x21e2,	// (0x0006fdcc) smil_text_list_pane_t1

0x9dce,	// (0x000779b8) aid_volume_smil_ParamLimits

0x9dce,	// (0x000779b8) aid_volume_smil

0xa910,	// (0x000784fa) smil_volume_pane_g1

0xa910,	// (0x000784fa) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0007cec4) smil_volume_pane_g

0x044f,	// (0x0006e039) listscroll_cale_day_pane

0xade3,	// (0x000789cd) bg_cale_pane

0xadfb,	// (0x000789e5) list_cale_pane

0xae1e,	// (0x00078a08) scroll_pane_cp09

0xae2f,	// (0x00078a19) cale_bg_pane_g1

0xae37,	// (0x00078a21) cale_bg_pane_g2

0xae3f,	// (0x00078a29) cale_bg_pane_g3

0xae47,	// (0x00078a31) cale_bg_pane_g4

0xae4f,	// (0x00078a39) cale_bg_pane_g5

0xae57,	// (0x00078a41) cale_bg_pane_g6

0xae5f,	// (0x00078a49) cale_bg_pane_g7

0xae67,	// (0x00078a51) cale_bg_pane_g8

0xae6f,	// (0x00078a59) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0007cec9) cale_bg_pane_g

0x221b,	// (0x0006fe05) list_cale_time_pane_ParamLimits

0x221b,	// (0x0006fe05) list_cale_time_pane

0xae7f,	// (0x00078a69) list_cale_time_pane_g1_ParamLimits

0xae7f,	// (0x00078a69) list_cale_time_pane_g1

0xae8b,	// (0x00078a75) list_cale_time_pane_g2_ParamLimits

0xae8b,	// (0x00078a75) list_cale_time_pane_g2

0x222f,	// (0x0006fe19) list_cale_time_pane_g3_ParamLimits

0x222f,	// (0x0006fe19) list_cale_time_pane_g3

0x223d,	// (0x0006fe27) list_cale_time_pane_g4_ParamLimits

0x223d,	// (0x0006fe27) list_cale_time_pane_g4

0x224b,	// (0x0006fe35) list_cale_time_pane_g5_ParamLimits

0x224b,	// (0x0006fe35) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0007cedc) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0007cedc) list_cale_time_pane_g

0xaea5,	// (0x00078a8f) list_cale_time_pane_t1_ParamLimits

0xaea5,	// (0x00078a8f) list_cale_time_pane_t1

0xaecd,	// (0x00078ab7) list_cale_time_pane_t2_ParamLimits

0xaecd,	// (0x00078ab7) list_cale_time_pane_t2

0x25ea,	// (0x000701d4) aid_blid_cardinal_pane

0x2628,	// (0x00070212) compass_pane_t4

0xaef5,	// (0x00078adf) list_cale_time_pane_t4_ParamLimits

0xaef5,	// (0x00078adf) list_cale_time_pane_t4

0x2636,	// (0x00070220) compass_pane_t5

0x2644,	// (0x0007022e) compass_pane_t6

0x2652,	// (0x0007023c) compass_pane_t7

0xb30f,	// (0x00078ef9) navi_pane_cc_t1

0xb464,	// (0x0007904e) aid_phob_thumbnail_center_pane

0x2de1,	// (0x000709cb) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0007cee9) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0007cee9) list_cale_time_pane_t

0x9686,	// (0x00077270) bg_popup_window_pane_cp02_ParamLimits

0x9686,	// (0x00077270) bg_popup_window_pane_cp02

0xaf1d,	// (0x00078b07) heading_pane_cp01_ParamLimits

0xaf1d,	// (0x00078b07) heading_pane_cp01

0xaf29,	// (0x00078b13) loc_req_pane_ParamLimits

0xaf29,	// (0x00078b13) loc_req_pane

0xaf39,	// (0x00078b23) loc_type_pane_ParamLimits

0xaf39,	// (0x00078b23) loc_type_pane

0xaf4b,	// (0x00078b35) loc_type_pane_t1_ParamLimits

0xaf4b,	// (0x00078b35) loc_type_pane_t1

0xaf5d,	// (0x00078b47) loc_type_pane_t2_ParamLimits

0xaf5d,	// (0x00078b47) loc_type_pane_t2

0xaf6f,	// (0x00078b59) loc_type_pane_t3_ParamLimits

0xaf6f,	// (0x00078b59) loc_type_pane_t3

0x0002,

0xf306,	// (0x0007cef0) loc_type_pane_t_ParamLimits

0xf306,	// (0x0007cef0) loc_type_pane_t

0xaf81,	// (0x00078b6b) list_loc_req_pane

0xaf8b,	// (0x00078b75) scroll_pane_cp012

0x2259,	// (0x0006fe43) list_single_loc_request_popup_menu_pane_ParamLimits

0x2259,	// (0x0006fe43) list_single_loc_request_popup_menu_pane

0xaf96,	// (0x00078b80) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf96,	// (0x00078b80) list_single_loc_request_popup_menu_pane_g1

0xafa2,	// (0x00078b8c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafa2,	// (0x00078b8c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0007cef7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0007cef7) list_single_loc_request_popup_menu_pane_g

0xafae,	// (0x00078b98) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafae,	// (0x00078b98) list_single_loc_request_popup_menu_pane_t1

0x9c8a,	// (0x00077874) bg_popup_window_pane_cp03_ParamLimits

0x9c8a,	// (0x00077874) bg_popup_window_pane_cp03

0xafc4,	// (0x00078bae) heading_loc_req_pane_ParamLimits

0xafc4,	// (0x00078bae) heading_loc_req_pane

0x2266,	// (0x0006fe50) popup_dyc_status_message_window_g1_ParamLimits

0x2266,	// (0x0006fe50) popup_dyc_status_message_window_g1

0x227a,	// (0x0006fe64) popup_dyc_status_message_window_t1_ParamLimits

0x227a,	// (0x0006fe64) popup_dyc_status_message_window_t1

0x228f,	// (0x0006fe79) popup_dyc_status_message_window_t2_ParamLimits

0x228f,	// (0x0006fe79) popup_dyc_status_message_window_t2

0x22a4,	// (0x0006fe8e) popup_dyc_status_message_window_t3_ParamLimits

0x22a4,	// (0x0006fe8e) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0007cefc) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0007cefc) popup_dyc_status_message_window_t

0x9a2f,	// (0x00077619) bg_heading_pane_cp01

0xafd0,	// (0x00078bba) heading_loc_req_pane_g1

0xafd8,	// (0x00078bc2) heading_loc_req_pane_g2

0xafe0,	// (0x00078bca) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0007cf03) heading_loc_req_pane_g

0xafe8,	// (0x00078bd2) heading_loc_req_pane_t1

0xaff8,	// (0x00078be2) bg_popup_sub_pane_cp01_ParamLimits

0xaff8,	// (0x00078be2) bg_popup_sub_pane_cp01

0xb006,	// (0x00078bf0) popup_cale_events_window_g1_ParamLimits

0xb006,	// (0x00078bf0) popup_cale_events_window_g1

0xb026,	// (0x00078c10) popup_cale_events_window_g2_ParamLimits

0xb026,	// (0x00078c10) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0007cf37) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0007cf37) popup_cale_events_window_g

0xb046,	// (0x00078c30) popup_cale_events_window_t1_ParamLimits

0xb046,	// (0x00078c30) popup_cale_events_window_t1

0xb058,	// (0x00078c42) popup_cale_events_window_t2_ParamLimits

0xb058,	// (0x00078c42) popup_cale_events_window_t2

0xb096,	// (0x00078c80) popup_cale_events_window_t3_ParamLimits

0xb096,	// (0x00078c80) popup_cale_events_window_t3

0xb0d0,	// (0x00078cba) popup_cale_events_window_t4_ParamLimits

0xb0d0,	// (0x00078cba) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0007cf3c) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0007cf3c) popup_cale_events_window_t

0x23a9,	// (0x0006ff93) call_type_pane

0x23b9,	// (0x0006ffa3) popup_call_status_window_g1

0x23cd,	// (0x0006ffb7) popup_call_status_window_g2

0x23e1,	// (0x0006ffcb) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0007cf45) popup_call_status_window_g

0xb106,	// (0x00078cf0) call_type_pane_g1

0xb10f,	// (0x00078cf9) call_type_pane_g2

0x0001,

0xf362,	// (0x0007cf4c) call_type_pane_g

0x9a2f,	// (0x00077619) bg_popup_sub_pane_cp02

0xb118,	// (0x00078d02) listscroll_popup_wml_pane

0xb120,	// (0x00078d0a) list_wml_pane

0xb12a,	// (0x00078d14) scroll_pane_cp013

0xb135,	// (0x00078d1f) list_single_graphic_popup_wml_pane_ParamLimits

0xb135,	// (0x00078d1f) list_single_graphic_popup_wml_pane

0xa910,	// (0x000784fa) list_single_graphic_popup_wml_pane_g1

0xb149,	// (0x00078d33) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0007cf51) list_single_graphic_popup_wml_pane_g

0xb151,	// (0x00078d3b) list_single_graphic_popup_wml_pane_t1

0xb167,	// (0x00078d51) aid_call_pane

0x9c82,	// (0x0007786c) popup_clock_analogue_window_g1

0x9c82,	// (0x0007786c) popup_clock_analogue_window_g2

0x9df0,	// (0x000779da) popup_clock_analogue_window_g3

0x9df0,	// (0x000779da) popup_clock_analogue_window_g4

0xa910,	// (0x000784fa) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0007cf56) popup_clock_analogue_window_g

0x9df8,	// (0x000779e2) popup_clock_analogue_window_t1

0x9e06,	// (0x000779f0) clock_digital_number_pane_ParamLimits

0x9e06,	// (0x000779f0) clock_digital_number_pane

0x9e12,	// (0x000779fc) clock_digital_number_pane_cp02_ParamLimits

0x9e12,	// (0x000779fc) clock_digital_number_pane_cp02

0x9e1e,	// (0x00077a08) clock_digital_number_pane_cp03_ParamLimits

0x9e1e,	// (0x00077a08) clock_digital_number_pane_cp03

0x9e2a,	// (0x00077a14) clock_digital_number_pane_cp04_ParamLimits

0x9e2a,	// (0x00077a14) clock_digital_number_pane_cp04

0x9e36,	// (0x00077a20) clock_digital_separator_pane_ParamLimits

0x9e36,	// (0x00077a20) clock_digital_separator_pane

0x9e42,	// (0x00077a2c) popup_clock_digital_window_t1

0xa910,	// (0x000784fa) clock_digital_number_pane_g1

0xa910,	// (0x000784fa) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0007cec4) clock_digital_number_pane_g

0xa910,	// (0x000784fa) clock_digital_separator_pane_g1

0xa910,	// (0x000784fa) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0007cec4) clock_digital_separator_pane_g

0x9a2f,	// (0x00077619) bg_popup_window_pane_cp04

0xb16f,	// (0x00078d59) heading_pane_cp03

0xb177,	// (0x00078d61) listscroll_popup_gms_pane

0xb17f,	// (0x00078d69) grid_large_graphic_popup_pane

0xb189,	// (0x00078d73) listscroll_popup_gms_pane_g1

0xb191,	// (0x00078d7b) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0007cf61) listscroll_popup_gms_pane_g

0xac34,	// (0x0007881e) scroll_pane_cp014

0x23f1,	// (0x0006ffdb) cell_large_graphic_popup_pane_ParamLimits

0x23f1,	// (0x0006ffdb) cell_large_graphic_popup_pane

0x2409,	// (0x0006fff3) cell_large_graphic_popup_pane_g1_ParamLimits

0x2409,	// (0x0006fff3) cell_large_graphic_popup_pane_g1

0xb199,	// (0x00078d83) cell_large_graphic_popup_pane_g2_ParamLimits

0xb199,	// (0x00078d83) cell_large_graphic_popup_pane_g2

0xb1a5,	// (0x00078d8f) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1a5,	// (0x00078d8f) cell_large_graphic_popup_pane_g3

0xb1b2,	// (0x00078d9c) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1b2,	// (0x00078d9c) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0007cf66) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0007cf66) cell_large_graphic_popup_pane_g

0xb1c2,	// (0x00078dac) grid_highlight_pane_cp010

0xa910,	// (0x000784fa) bg_popup_call_pane_g1

0xb1cc,	// (0x00078db6) list_single_graphic_popup_conf_pane_ParamLimits

0xb1cc,	// (0x00078db6) list_single_graphic_popup_conf_pane

0xb1de,	// (0x00078dc8) list_highlight_pane_cp01

0xb1e7,	// (0x00078dd1) list_single_graphic_popup_conf_pane_g1

0xb1ef,	// (0x00078dd9) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x0007cf6f) list_single_graphic_popup_conf_pane_g

0xb1f7,	// (0x00078de1) list_single_graphic_popup_conf_pane_t1

0xb205,	// (0x00078def) linegrid_cams_pane_g1

0x2415,	// (0x0006ffff) linegrid_cams_pane_g2

0xaa75,	// (0x0007865f) linegrid_cams_pane_g3

0xb20e,	// (0x00078df8) linegrid_cams_pane_g4

0x241e,	// (0x00070008) linegrid_cams_pane_g5

0x2427,	// (0x00070011) linegrid_cams_pane_g6

0xaa7e,	// (0x00078668) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0007cf74) linegrid_cams_pane_g

0xb217,	// (0x00078e01) popup_clock_analogue_window

0xb217,	// (0x00078e01) popup_clock_digital_window

0x9a2f,	// (0x00077619) popup_phob_thumbnail_window

0xa910,	// (0x000784fa) call_video_uplink_pane_g1

0xb220,	// (0x00078e0a) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x0007cf83) call_video_uplink_pane_g

0xb228,	// (0x00078e12) video_uplink_pane

0xb230,	// (0x00078e1a) mce_image_pane_g1

0x2432,	// (0x0007001c) mce_image_pane_g2

0x243c,	// (0x00070026) mce_image_pane_g3

0x2446,	// (0x00070030) mce_image_pane_g4

0x244e,	// (0x00070038) mce_image_pane_g5

0x0004,

0xf39e,	// (0x0007cf88) mce_image_pane_g

0xb23a,	// (0x00078e24) control_top_pane_stacon_cp01_ParamLimits

0xb23a,	// (0x00078e24) control_top_pane_stacon_cp01

0xb24e,	// (0x00078e38) uni_indicator_pane_stacon_cp01_ParamLimits

0xb24e,	// (0x00078e38) uni_indicator_pane_stacon_cp01

0xb25f,	// (0x00078e49) bg_popup_sub_pane_cp03

0x2456,	// (0x00070040) chi_dic_find_pane

0x245e,	// (0x00070048) listscroll_chi_dic_pane

0x2467,	// (0x00070051) main_pane_chidic_g1

0x247a,	// (0x00070064) chi_dic_find_pane_t1

0xb269,	// (0x00078e53) find_chidic_pane

0xb272,	// (0x00078e5c) chi_dic_list_pane_ParamLimits

0xb272,	// (0x00078e5c) chi_dic_list_pane

0xb283,	// (0x00078e6d) scroll_pane_cp020

0x2488,	// (0x00070072) find_chidic_pane_t1

0x9a2f,	// (0x00077619) input_focus_pane_cp06

0x00c5,	// (0x0006dcaf) list_chi_dic_pane_ParamLimits

0x00c5,	// (0x0006dcaf) list_chi_dic_pane

0x2497,	// (0x00070081) list_chi_dic_pane_t1_ParamLimits

0x2497,	// (0x00070081) list_chi_dic_pane_t1

0x9a2f,	// (0x00077619) list_highlight_pane_cp020

0xb28b,	// (0x00078e75) bg_cale_heading_pane_g1

0x24aa,	// (0x00070094) bg_cale_heading_pane_g2

0x24b2,	// (0x0007009c) bg_cale_heading_pane_g3

0x24ba,	// (0x000700a4) bg_cale_heading_pane_g4

0x24c4,	// (0x000700ae) bg_cale_heading_pane_g5

0x24ce,	// (0x000700b8) bg_cale_heading_pane_g6

0x24d6,	// (0x000700c0) bg_cale_heading_pane_g7

0x24de,	// (0x000700c8) bg_cale_heading_pane_g8

0x24e8,	// (0x000700d2) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0007cf93) bg_cale_heading_pane_g

0xb28b,	// (0x00078e75) bg_cale_side_pane_g1

0x24f2,	// (0x000700dc) bg_cale_side_pane_g2

0x24fc,	// (0x000700e6) bg_cale_side_pane_g3

0x2506,	// (0x000700f0) bg_cale_side_pane_g4

0x2510,	// (0x000700fa) bg_cale_side_pane_g5

0x251a,	// (0x00070104) bg_cale_side_pane_g6

0x2524,	// (0x0007010e) bg_cale_side_pane_g7

0x252e,	// (0x00070118) bg_cale_side_pane_g8

0x2536,	// (0x00070120) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x0007cfa6) bg_cale_side_pane_g

0x253e,	// (0x00070128) popup_call_status_window_ParamLimits

0x253e,	// (0x00070128) popup_call_status_window

0xb293,	// (0x00078e7d) stacon_top_pane

0xb29b,	// (0x00078e85) status_pane_ParamLimits

0xb29b,	// (0x00078e85) status_pane

0xb2b0,	// (0x00078e9a) status_small_pane

0xb2b8,	// (0x00078ea2) control_pane

0x9a2f,	// (0x00077619) stacon_bottom_pane

0xb2c0,	// (0x00078eaa) list_single_mce_smart_pane_t1_ParamLimits

0xb2c0,	// (0x00078eaa) list_single_mce_smart_pane_t1

0xb2d3,	// (0x00078ebd) list_single_mce_smart_pane_t2_ParamLimits

0xb2d3,	// (0x00078ebd) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x0007cfb9) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x0007cfb9) list_single_mce_smart_pane_t

0x258b,	// (0x00070175) compass_pane

0x2596,	// (0x00070180) main_location2_pane_t1

0x25aa,	// (0x00070194) main_location2_pane_t2

0x25c0,	// (0x000701aa) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x0007cfbe) main_location2_pane_t

0xb2f2,	// (0x00078edc) compass_pane_g1_ParamLimits

0xb2f2,	// (0x00078edc) compass_pane_g1

0x260a,	// (0x000701f4) compass_pane_t1

0x2619,	// (0x00070203) compass_pane_t2

0x0005,

0xf3dd,	// (0x0007cfc7) compass_pane_t

0x2660,	// (0x0007024a) text_secondary_cp61

0xb306,	// (0x00078ef0) navi_pane_cams_g5

0xb329,	// (0x00078f13) navi_pane_im_t1

0xb337,	// (0x00078f21) navi_pane_mp_g1_ParamLimits

0xb337,	// (0x00078f21) navi_pane_mp_g1

0xb34b,	// (0x00078f35) navi_pane_mp_g2_ParamLimits

0xb34b,	// (0x00078f35) navi_pane_mp_g2

0xb357,	// (0x00078f41) navi_pane_mp_g3_ParamLimits

0xb357,	// (0x00078f41) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x0007cfdb) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x0007cfdb) navi_pane_mp_g

0xb363,	// (0x00078f4d) navi_pane_mp_t1

0xb371,	// (0x00078f5b) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0007cfe2) navi_pane_mp_t

0xb3ad,	// (0x00078f97) navi_pane_vt_g1

0xb363,	// (0x00078f4d) navi_pane_vt_t1

0xb3b5,	// (0x00078f9f) navi_slider_pane

0xb3bd,	// (0x00078fa7) zooming_pane

0xb3c5,	// (0x00078faf) navi_slider_pane_g1

0x9e5f,	// (0x00077a49) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x0007cfe9) navi_slider_pane_g

0xb3e9,	// (0x00078fd3) aid_levels_zoom

0xb3f1,	// (0x00078fdb) zooming_pane_g1

0xb3f9,	// (0x00078fe3) zooming_pane_g2

0xb3f9,	// (0x00078fe3) zooming_pane_g3

0x0002,

0xf40e,	// (0x0007cff8) zooming_pane_g

0xb401,	// (0x00078feb) level_10_zoom

0xb40a,	// (0x00078ff4) level_11_zoom

0xb413,	// (0x00078ffd) level_1_zoom

0xb41c,	// (0x00079006) level_2_zoom

0xb425,	// (0x0007900f) level_3_zoom

0xb42e,	// (0x00079018) level_4_zoom

0xb437,	// (0x00079021) level_5_zoom

0xb440,	// (0x0007902a) level_6_zoom

0xb449,	// (0x00079033) level_7_zoom

0xb452,	// (0x0007903c) level_8_zoom

0xb45b,	// (0x00079045) level_9_zoom

0xb46c,	// (0x00079056) popup_phob_thumbnail_window_g1

0xb474,	// (0x0007905e) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0007cfff) popup_phob_thumbnail_window_g

0xc7f3,	// (0x0007a3dd) level_1_location

0xc7fb,	// (0x0007a3e5) level_2_location

0xc803,	// (0x0007a3ed) level_3_location

0xc80b,	// (0x0007a3f5) level_4_location

0xb3bd,	// (0x00078fa7) level_5_location

0x27a9,	// (0x00070393) mce_icon_pane_g1

0x27b3,	// (0x0007039d) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0007d004) mce_icon_pane_g

0x27bb,	// (0x000703a5) main_mup_pane_g1_ParamLimits

0x27bb,	// (0x000703a5) main_mup_pane_g1

0x27d1,	// (0x000703bb) main_mup_pane_g2_ParamLimits

0x27d1,	// (0x000703bb) main_mup_pane_g2

0x27e9,	// (0x000703d3) main_mup_pane_g3_ParamLimits

0x27e9,	// (0x000703d3) main_mup_pane_g3

0x2801,	// (0x000703eb) main_mup_pane_g4_ParamLimits

0x2801,	// (0x000703eb) main_mup_pane_g4

0x2819,	// (0x00070403) main_mup_pane_g5_ParamLimits

0x2819,	// (0x00070403) main_mup_pane_g5

0x2835,	// (0x0007041f) main_mup_pane_g6_ParamLimits

0x2835,	// (0x0007041f) main_mup_pane_g6

0x284f,	// (0x00070439) main_mup_pane_g7_ParamLimits

0x284f,	// (0x00070439) main_mup_pane_g7

0x286d,	// (0x00070457) main_mup_pane_g8_ParamLimits

0x286d,	// (0x00070457) main_mup_pane_g8

0x288b,	// (0x00070475) main_mup_pane_g9_ParamLimits

0x288b,	// (0x00070475) main_mup_pane_g9

0x28a7,	// (0x00070491) main_mup_pane_g10_ParamLimits

0x28a7,	// (0x00070491) main_mup_pane_g10

0x28c5,	// (0x000704af) main_mup_pane_g11_ParamLimits

0x28c5,	// (0x000704af) main_mup_pane_g11

0x28df,	// (0x000704c9) main_mup_pane_g12_ParamLimits

0x28df,	// (0x000704c9) main_mup_pane_g12

0x28f5,	// (0x000704df) main_mup_pane_g13_ParamLimits

0x28f5,	// (0x000704df) main_mup_pane_g13

0x000c,

0xf41f,	// (0x0007d009) main_mup_pane_g_ParamLimits

0xf41f,	// (0x0007d009) main_mup_pane_g

0x2909,	// (0x000704f3) main_mup_pane_t1_ParamLimits

0x2909,	// (0x000704f3) main_mup_pane_t1

0x2925,	// (0x0007050f) main_mup_pane_t2_ParamLimits

0x2925,	// (0x0007050f) main_mup_pane_t2

0x293d,	// (0x00070527) main_mup_pane_t3_ParamLimits

0x293d,	// (0x00070527) main_mup_pane_t3

0x2955,	// (0x0007053f) main_mup_pane_t4_ParamLimits

0x2955,	// (0x0007053f) main_mup_pane_t4

0x2973,	// (0x0007055d) main_mup_pane_t5_ParamLimits

0x2973,	// (0x0007055d) main_mup_pane_t5

0x2988,	// (0x00070572) main_mup_pane_t6_ParamLimits

0x2988,	// (0x00070572) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0007d024) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0007d024) main_mup_pane_t

0x299a,	// (0x00070584) mup_progress_pane_ParamLimits

0x299a,	// (0x00070584) mup_progress_pane

0x29a6,	// (0x00070590) mup_visualizer_pane_ParamLimits

0x29a6,	// (0x00070590) mup_visualizer_pane

0x29da,	// (0x000705c4) mup_volume_pane_ParamLimits

0x29da,	// (0x000705c4) mup_volume_pane

0xb47c,	// (0x00079066) mup_visualizer_pane_g1_ParamLimits

0xb47c,	// (0x00079066) mup_visualizer_pane_g1

0xb47c,	// (0x00079066) mup_visualizer_pane_g2_ParamLimits

0xb47c,	// (0x00079066) mup_visualizer_pane_g2

0xb2f2,	// (0x00078edc) mup_visualizer_pane_g3_ParamLimits

0xb2f2,	// (0x00078edc) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0007d031) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0007d031) mup_visualizer_pane_g

0xa910,	// (0x000784fa) mup_volume_pane_g1

0xb492,	// (0x0007907c) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x0007d038) mup_volume_pane_g

0xa910,	// (0x000784fa) mup_progress_pane_g1

0xb49b,	// (0x00079085) mup_progress_pane_g2

0xb4a4,	// (0x0007908e) mup_progress_pane_g3

0x0002,

0xf453,	// (0x0007d03d) mup_progress_pane_g

0x9a2f,	// (0x00077619) bg_popup_window_pane_cp05

0xb4ad,	// (0x00079097) heading_pane_cp02_ParamLimits

0xb4ad,	// (0x00079097) heading_pane_cp02

0xb4c9,	// (0x000790b3) list_popup_blid_pane

0xb4d1,	// (0x000790bb) list_blid_sat_info_pane_ParamLimits

0xb4d1,	// (0x000790bb) list_blid_sat_info_pane

0xb4e4,	// (0x000790ce) list_blid_sat_info_pane_g1

0xb4ec,	// (0x000790d6) list_blid_sat_info_pane_t1

0x2b04,	// (0x000706ee) mup_equalizer_pane_ParamLimits

0x2b04,	// (0x000706ee) mup_equalizer_pane

0x2b25,	// (0x0007070f) mup_equalizer_pane_cp1_ParamLimits

0x2b25,	// (0x0007070f) mup_equalizer_pane_cp1

0x2b46,	// (0x00070730) mup_equalizer_pane_cp2_ParamLimits

0x2b46,	// (0x00070730) mup_equalizer_pane_cp2

0x2b6b,	// (0x00070755) mup_equalizer_pane_cp3_ParamLimits

0x2b6b,	// (0x00070755) mup_equalizer_pane_cp3

0x2b94,	// (0x0007077e) mup_equalizer_pane_cp4_ParamLimits

0x2b94,	// (0x0007077e) mup_equalizer_pane_cp4

0x2bbd,	// (0x000707a7) mup_equalizer_pane_cp5

0x2bd5,	// (0x000707bf) mup_equalizer_pane_cp6

0x2bed,	// (0x000707d7) mup_equalizer_pane_cp7

0xc70d,	// (0x0007a2f7) bg_popup_call_poc_act_pane_g9

0xc715,	// (0x0007a2ff) bg_popup_call_poc_act_pane_g10

0xc71d,	// (0x0007a307) bg_popup_call_poc_act_pane_g11

0x000a,

0x9c8a,	// (0x00077874) mup_scale_pane

0xa910,	// (0x000784fa) mup_scale_pane_g1

0xb4fa,	// (0x000790e4) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x0007d059) mup_scale_pane_g

0xb51e,	// (0x00079108) msg_data_pane

0xb526,	// (0x00079110) scroll_pane_cp017

0x2c17,	// (0x00070801) bg_list_pane_cp04_ParamLimits

0x2c17,	// (0x00070801) bg_list_pane_cp04

0xb52e,	// (0x00079118) msg_data_pane_g1

0x2c3f,	// (0x00070829) msg_data_pane_g2

0x2c49,	// (0x00070833) msg_data_pane_g3

0x2c53,	// (0x0007083d) msg_data_pane_g4

0x2c5b,	// (0x00070845) msg_data_pane_g5

0x2c63,	// (0x0007084d) msg_data_pane_g6

0x2c6b,	// (0x00070855) msg_data_pane_g7

0x0006,

0xf47e,	// (0x0007d068) msg_data_pane_g

0x2c73,	// (0x0007085d) msg_text_pane_ParamLimits

0x2c73,	// (0x0007085d) msg_text_pane

0x2c9b,	// (0x00070885) qrid_highlight_pane_cp011_ParamLimits

0x2c9b,	// (0x00070885) qrid_highlight_pane_cp011

0x9a2f,	// (0x00077619) msg_body_pane

0x9a2f,	// (0x00077619) msg_header_pane

0xb536,	// (0x00079120) input_focus_pane_cp07

0xb54b,	// (0x00079135) msg_header_pane_t1_ParamLimits

0xb54b,	// (0x00079135) msg_header_pane_t1

0x9e71,	// (0x00077a5b) msg_header_pane_t2_ParamLimits

0x9e71,	// (0x00077a5b) msg_header_pane_t2

0x0001,

0xf492,	// (0x0007d07c) msg_header_pane_t_ParamLimits

0xf492,	// (0x0007d07c) msg_header_pane_t

0xb55d,	// (0x00079147) msg_body_pane_g1

0x2cca,	// (0x000708b4) msg_body_pane_t1_ParamLimits

0x2cca,	// (0x000708b4) msg_body_pane_t1

0x9e83,	// (0x00077a6d) msg_body_pane_t2_ParamLimits

0x9e83,	// (0x00077a6d) msg_body_pane_t2

0x9e95,	// (0x00077a7f) msg_body_pane_t3_ParamLimits

0x9e95,	// (0x00077a7f) msg_body_pane_t3

0x0002,

0xf497,	// (0x0007d081) msg_body_pane_t_ParamLimits

0xf497,	// (0x0007d081) msg_body_pane_t

0x2d35,	// (0x0007091f) main_viewer_pane_g1_ParamLimits

0x2d35,	// (0x0007091f) main_viewer_pane_g1

0x2d43,	// (0x0007092d) main_viewer_pane_g2_ParamLimits

0x2d43,	// (0x0007092d) main_viewer_pane_g2

0x2d51,	// (0x0007093b) main_viewer_pane_g3_ParamLimits

0x2d51,	// (0x0007093b) main_viewer_pane_g3

0x2d60,	// (0x0007094a) main_viewer_pane_g4_ParamLimits

0x2d60,	// (0x0007094a) main_viewer_pane_g4

0x9ebf,	// (0x00077aa9) main_viewer_pane_g5_ParamLimits

0x9ebf,	// (0x00077aa9) main_viewer_pane_g5

0x9ebf,	// (0x00077aa9) main_viewer_pane_g7_ParamLimits

0x9ebf,	// (0x00077aa9) main_viewer_pane_g7

0x9ed1,	// (0x00077abb) main_viewer_pane_g8_ParamLimits

0x9ed1,	// (0x00077abb) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0007d091) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0007d091) main_viewer_pane_g

0xb565,	// (0x0007914f) viewer_content_pane_ParamLimits

0xb565,	// (0x0007914f) viewer_content_pane

0x2d9e,	// (0x00070988) main_postcard_pane_g1_ParamLimits

0x2d9e,	// (0x00070988) main_postcard_pane_g1

0x2db4,	// (0x0007099e) main_postcard_pane_g2_ParamLimits

0x2db4,	// (0x0007099e) main_postcard_pane_g2

0x2dca,	// (0x000709b4) main_postcard_pane_g3_ParamLimits

0x2dca,	// (0x000709b4) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0007d0a2) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0007d0a2) main_postcard_pane_g

0x2de1,	// (0x000709cb) main_postcard_pane_g4

0xc936,	// (0x0007a520) smil_status_volume_pane_g2

0x2e24,	// (0x00070a0e) postcard_pane_ParamLimits

0x2e24,	// (0x00070a0e) postcard_pane

0xb573,	// (0x0007915d) postcard_pane_g1_ParamLimits

0xb573,	// (0x0007915d) postcard_pane_g1

0x2e74,	// (0x00070a5e) postcard_pane_g2_ParamLimits

0x2e74,	// (0x00070a5e) postcard_pane_g2

0x2e80,	// (0x00070a6a) postcard_pane_g3_ParamLimits

0x2e80,	// (0x00070a6a) postcard_pane_g3

0xb581,	// (0x0007916b) postcard_pane_g4_ParamLimits

0xb581,	// (0x0007916b) postcard_pane_g4

0x2e8c,	// (0x00070a76) postcard_pane_g5_ParamLimits

0x2e8c,	// (0x00070a76) postcard_pane_g5

0x2ea1,	// (0x00070a8b) postcard_pane_g6_ParamLimits

0x2ea1,	// (0x00070a8b) postcard_pane_g6

0xb573,	// (0x0007915d) postcard_pane_g7_ParamLimits

0xb573,	// (0x0007915d) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0007d0af) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0007d0af) postcard_pane_g

0x2eb9,	// (0x00070aa3) main_mp2_pane_g1_ParamLimits

0x2eb9,	// (0x00070aa3) main_mp2_pane_g1

0x2ec7,	// (0x00070ab1) main_mp2_pane_g2_ParamLimits

0x2ec7,	// (0x00070ab1) main_mp2_pane_g2

0x2ed3,	// (0x00070abd) main_mp2_pane_g3_ParamLimits

0x2ed3,	// (0x00070abd) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x0007d0be) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x0007d0be) main_mp2_pane_g

0x2edf,	// (0x00070ac9) main_mp2_pane_t1_ParamLimits

0x2edf,	// (0x00070ac9) main_mp2_pane_t1

0x2ef6,	// (0x00070ae0) main_mp2_pane_t2_ParamLimits

0x2ef6,	// (0x00070ae0) main_mp2_pane_t2

0x2f08,	// (0x00070af2) main_mp2_pane_t3_ParamLimits

0x2f08,	// (0x00070af2) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x0007d0c5) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x0007d0c5) main_mp2_pane_t

0xb58f,	// (0x00079179) pec_content_pane_ParamLimits

0xb58f,	// (0x00079179) pec_content_pane

0xac34,	// (0x0007881e) scroll_pane_cp015

0xb5a1,	// (0x0007918b) pec_attribute_pane_ParamLimits

0xb5a1,	// (0x0007918b) pec_attribute_pane

0x2f1a,	// (0x00070b04) pec_content_pane_g1_ParamLimits

0x2f1a,	// (0x00070b04) pec_content_pane_g1

0xb5b1,	// (0x0007919b) pec_content_pane_t1_ParamLimits

0xb5b1,	// (0x0007919b) pec_content_pane_t1

0xb5c3,	// (0x000791ad) pec_content_pane_t2_ParamLimits

0xb5c3,	// (0x000791ad) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x0007d0cc) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x0007d0cc) pec_content_pane_t

0x2f26,	// (0x00070b10) list_single_graphic_pane_cp01_ParamLimits

0x2f26,	// (0x00070b10) list_single_graphic_pane_cp01

0x9c8a,	// (0x00077874) bg_popup_sub_pane_cp04

0xb5d5,	// (0x000791bf) popup_mup_playback_window_g1

0xb5e1,	// (0x000791cb) popup_mup_playback_window_t1

0xb5f6,	// (0x000791e0) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x0007d0d1) popup_mup_playback_window_t

0xb62d,	// (0x00079217) main_image_pane_g1_ParamLimits

0xb62d,	// (0x00079217) main_image_pane_g1

0xb670,	// (0x0007925a) scroll_pane_cp018_ParamLimits

0xb670,	// (0x0007925a) scroll_pane_cp018

0xb688,	// (0x00079272) scroll_pane_cp016_ParamLimits

0xb688,	// (0x00079272) scroll_pane_cp016

0x2ff5,	// (0x00070bdf) smil2_image_pane_ParamLimits

0x2ff5,	// (0x00070bdf) smil2_image_pane

0x302b,	// (0x00070c15) smil2_root_pane_ParamLimits

0x302b,	// (0x00070c15) smil2_root_pane

0x3063,	// (0x00070c4d) smil2_text_pane_ParamLimits

0x3063,	// (0x00070c4d) smil2_text_pane

0x9a2f,	// (0x00077619) bg_list_pane_cp06

0xb6c4,	// (0x000792ae) grid_radio_pane

0x9a2f,	// (0x00077619) bg_popup_window_pane_cp06

0xb6ce,	// (0x000792b8) main_fmradio_pane_t1

0xb16f,	// (0x00078d59) heading_pane_cp04

0xb6dc,	// (0x000792c6) main_fmradio_pane_t2

0xc725,	// (0x0007a30f) popup_cale_lunar_info_window_g1

0xb6ea,	// (0x000792d4) main_fmradio_pane_t3

0xc72d,	// (0x0007a317) popup_cale_lunar_info_window_g2

0xb6fa,	// (0x000792e4) main_fmradio_pane_t4

0x0001,

0xb708,	// (0x000792f2) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x0007d1ac) popup_cale_lunar_info_window_g

0xf4fc,	// (0x0007d0e6) main_fmradio_pane_t

0xb716,	// (0x00079300) wait_bar_pane_cp03

0xb71e,	// (0x00079308) cell_fmradio_pane_ParamLimits

0xb71e,	// (0x00079308) cell_fmradio_pane

0xb573,	// (0x0007915d) cell_fmradio_pane_g1_ParamLimits

0xb573,	// (0x0007915d) cell_fmradio_pane_g1

0x9a2f,	// (0x00077619) grid_highlight_pane_cp011

0xb733,	// (0x0007931d) poc_content_pane_ParamLimits

0xb733,	// (0x0007931d) poc_content_pane

0xb745,	// (0x0007932f) scroll_pane_cp019

0x30f3,	// (0x00070cdd) popup_call_poc_act_window_ParamLimits

0x30f3,	// (0x00070cdd) popup_call_poc_act_window

0x3117,	// (0x00070d01) popup_call_poc_inact_window_ParamLimits

0x3117,	// (0x00070d01) popup_call_poc_inact_window

0xf599,	// (0x0007d183) bg_popup_call_poc_act_pane_g

0xc69d,	// (0x0007a287) bg_popup_call_poc_inact_pane_g1

0xc6a5,	// (0x0007a28f) bg_popup_call_poc_inact_pane_g2

0xb74d,	// (0x00079337) popup_call_poc_act_window_g2

0xc6ad,	// (0x0007a297) bg_popup_call_poc_inact_pane_g3

0xc6b5,	// (0x0007a29f) bg_popup_call_poc_inact_pane_g4

0xc6bd,	// (0x0007a2a7) bg_popup_call_poc_inact_pane_g5

0xb755,	// (0x0007933f) popup_call_poc_act_window_t1_ParamLimits

0xb755,	// (0x0007933f) popup_call_poc_act_window_t1

0xb77d,	// (0x00079367) popup_call_poc_act_window_t2_ParamLimits

0xb77d,	// (0x00079367) popup_call_poc_act_window_t2

0xb7a5,	// (0x0007938f) popup_call_poc_act_window_t3_ParamLimits

0xb7a5,	// (0x0007938f) popup_call_poc_act_window_t3

0xb7cd,	// (0x000793b7) popup_call_poc_act_window_t4_ParamLimits

0xb7cd,	// (0x000793b7) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0007d0f1) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0007d0f1) popup_call_poc_act_window_t

0xc6c5,	// (0x0007a2af) bg_popup_call_poc_inact_pane_g6

0xc6cd,	// (0x0007a2b7) bg_popup_call_poc_inact_pane_g7

0xc6d5,	// (0x0007a2bf) bg_popup_call_poc_inact_pane_g8

0xb7df,	// (0x000793c9) popup_call_poc_inact_window_g2

0xc6dd,	// (0x0007a2c7) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x0007d170) bg_popup_call_poc_inact_pane_g

0xb7e7,	// (0x000793d1) popup_call_poc_inact_window_t1_ParamLimits

0xb7e7,	// (0x000793d1) popup_call_poc_inact_window_t1

0xb7fc,	// (0x000793e6) popup_call_poc_inact_window_t2_ParamLimits

0xb7fc,	// (0x000793e6) popup_call_poc_inact_window_t2

0xb811,	// (0x000793fb) popup_call_poc_inact_window_t3_ParamLimits

0xb811,	// (0x000793fb) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x0007d0fa) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x0007d0fa) popup_call_poc_inact_window_t

0xc8a9,	// (0x0007a493) context_pane_ParamLimits

0x39bf,	// (0x000715a9) signal_pane_ParamLimits

0xb3bd,	// (0x00078fa7) main_call2_pane

0xc897,	// (0x0007a481) popup_phob_thumbnail2_window_ParamLimits

0xc897,	// (0x0007a481) popup_phob_thumbnail2_window

0x9ea7,	// (0x00077a91) aid_hotspot_pointer_arrow_pane

0x9eaf,	// (0x00077a99) aid_hotspot_pointer_hand_pane

0x347f,	// (0x00071069) phob_pre_status_pane_g5

0x0cc1,	// (0x0006e8ab) cams_zoom_pane_ParamLimits

0x0cd0,	// (0x0006e8ba) image_vga_pane_ParamLimits

0x0cea,	// (0x0006e8d4) main_camera_pane_g1_ParamLimits

0x0cfc,	// (0x0006e8e6) main_camera_pane_g2_ParamLimits

0x0d0c,	// (0x0006e8f6) main_camera_pane_g3_ParamLimits

0x0d20,	// (0x0006e90a) main_camera_pane_g4_ParamLimits

0x0d34,	// (0x0006e91e) main_camera_pane_g5_ParamLimits

0x0d48,	// (0x0006e932) main_camera_pane_g6_ParamLimits

0x0d5c,	// (0x0006e946) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0007cdf9) main_camera_pane_g_ParamLimits

0x0d70,	// (0x0006e95a) main_camera_pane_t1_ParamLimits

0x0d86,	// (0x0006e970) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0007ce0a) main_camera_pane_t_ParamLimits

0x9c8a,	// (0x00077874) bg_popup_preview_window_pane_cp01_ParamLimits

0x9c8a,	// (0x00077874) bg_popup_preview_window_pane_cp01

0xb826,	// (0x00079410) popup_phob_thumbnail2_window_g1_ParamLimits

0xb826,	// (0x00079410) popup_phob_thumbnail2_window_g1

0x9a2f,	// (0x00077619) call2_cli_visual_pane

0x314b,	// (0x00070d35) popup_call2_audio_conf_window_ParamLimits

0x314b,	// (0x00070d35) popup_call2_audio_conf_window

0x3173,	// (0x00070d5d) popup_call2_audio_first_window_ParamLimits

0x3173,	// (0x00070d5d) popup_call2_audio_first_window

0x3209,	// (0x00070df3) popup_call2_audio_in_window_ParamLimits

0x3209,	// (0x00070df3) popup_call2_audio_in_window

0x3255,	// (0x00070e3f) popup_call2_audio_out_window_ParamLimits

0x3255,	// (0x00070e3f) popup_call2_audio_out_window

0x32c7,	// (0x00070eb1) popup_call2_audio_second_window_ParamLimits

0x32c7,	// (0x00070eb1) popup_call2_audio_second_window

0x332d,	// (0x00070f17) popup_call2_audio_wait_window_ParamLimits

0x332d,	// (0x00070f17) popup_call2_audio_wait_window

0x9a2f,	// (0x00077619) bg_popup_call2_act_pane_cp03

0x9c6c,	// (0x00077856) list_conf_pane_cp

0xb832,	// (0x0007941c) popup_call2_audio_conf_window_t1

0xb840,	// (0x0007942a) list_single_graphic_popup_conf2_pane_ParamLimits

0xb840,	// (0x0007942a) list_single_graphic_popup_conf2_pane

0xb1de,	// (0x00078dc8) list_highlight_pane_cp04

0xb853,	// (0x0007943d) list_single_graphic_popup_conf2_pane_g1

0xb1ef,	// (0x00078dd9) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0007d101) list_single_graphic_popup_conf2_pane_g

0xb85d,	// (0x00079447) list_single_graphic_popup_conf2_pane_t1

0xb86b,	// (0x00079455) bg_popup_call2_act_pane_cp01_ParamLimits

0xb86b,	// (0x00079455) bg_popup_call2_act_pane_cp01

0xb8f5,	// (0x000794df) call_type_pane_cp05_ParamLimits

0xb8f5,	// (0x000794df) call_type_pane_cp05

0xb949,	// (0x00079533) popup_call2_audio_second_window_g1_ParamLimits

0xb949,	// (0x00079533) popup_call2_audio_second_window_g1

0xb99d,	// (0x00079587) popup_call2_audio_second_window_g2_ParamLimits

0xb99d,	// (0x00079587) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x0007d106) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x0007d106) popup_call2_audio_second_window_g

0xba02,	// (0x000795ec) popup_call2_audio_second_window_t1_ParamLimits

0xba02,	// (0x000795ec) popup_call2_audio_second_window_t1

0xbb2a,	// (0x00079714) popup_call2_audio_second_window_t2_ParamLimits

0xbb2a,	// (0x00079714) popup_call2_audio_second_window_t2

0xbb7d,	// (0x00079767) popup_call2_audio_second_window_t3_ParamLimits

0xbb7d,	// (0x00079767) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x0007d10d) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x0007d10d) popup_call2_audio_second_window_t

0x9a2f,	// (0x00077619) bg_popup_call2_in_pane_cp02

0x9a39,	// (0x00077623) call_type_pane_cp04

0x9a41,	// (0x0007762b) popup_call2_audio_wait_window_g1

0x9a49,	// (0x00077633) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0007cce6) popup_call2_audio_wait_window_g

0x9a51,	// (0x0007763b) popup_call2_audio_wait_window_t3

0xbc70,	// (0x0007985a) bg_popup_call2_act_pane_ParamLimits

0xbc70,	// (0x0007985a) bg_popup_call2_act_pane

0xbd30,	// (0x0007991a) call_type_pane_cp03_ParamLimits

0xbd30,	// (0x0007991a) call_type_pane_cp03

0xbd94,	// (0x0007997e) popup_call2_audio_first_window_g1_ParamLimits

0xbd94,	// (0x0007997e) popup_call2_audio_first_window_g1

0xbe04,	// (0x000799ee) popup_call2_audio_first_window_g2_ParamLimits

0xbe04,	// (0x000799ee) popup_call2_audio_first_window_g2

0xb47c,	// (0x00079066) popup_call2_audio_first_window_g3_ParamLimits

0xb47c,	// (0x00079066) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x0007d116) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x0007d116) popup_call2_audio_first_window_g

0xbee2,	// (0x00079acc) popup_call2_audio_first_window_t1_ParamLimits

0xbee2,	// (0x00079acc) popup_call2_audio_first_window_t1

0xbfe5,	// (0x00079bcf) popup_call2_audio_first_window_t4_ParamLimits

0xbfe5,	// (0x00079bcf) popup_call2_audio_first_window_t4

0xc0c8,	// (0x00079cb2) popup_call2_audio_first_window_t5_ParamLimits

0xc0c8,	// (0x00079cb2) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0007d121) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0007d121) popup_call2_audio_first_window_t

0x9c82,	// (0x0007786c) bg_popup_call2_act_pane_g1

0xc737,	// (0x0007a321) popup_cale_lunar_info_window_t1

0xc745,	// (0x0007a32f) popup_cale_lunar_info_window_t2

0xc753,	// (0x0007a33d) popup_cale_lunar_info_window_t3

0x9a2f,	// (0x00077619) bg_popup_call2_bubble_pane

0xc1c9,	// (0x00079db3) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1c9,	// (0x00079db3) bg_popup_call2_in_pane_cp01

0x970b,	// (0x000772f5) call_type_pane_cp02

0xc211,	// (0x00079dfb) popup_call2_audio_out_window_g1_ParamLimits

0xc211,	// (0x00079dfb) popup_call2_audio_out_window_g1

0xc23d,	// (0x00079e27) popup_call2_audio_out_window_g2_ParamLimits

0xc23d,	// (0x00079e27) popup_call2_audio_out_window_g2

0xc265,	// (0x00079e4f) popup_call2_audio_out_window_g3_ParamLimits

0xc265,	// (0x00079e4f) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x0007d12a) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x0007d12a) popup_call2_audio_out_window_g

0xc2a0,	// (0x00079e8a) popup_call2_audio_out_window_t1_ParamLimits

0xc2a0,	// (0x00079e8a) popup_call2_audio_out_window_t1

0xc2ff,	// (0x00079ee9) popup_call2_audio_out_window_t2_ParamLimits

0xc2ff,	// (0x00079ee9) popup_call2_audio_out_window_t2

0xc353,	// (0x00079f3d) popup_call2_audio_out_window_t3_ParamLimits

0xc353,	// (0x00079f3d) popup_call2_audio_out_window_t3

0xc369,	// (0x00079f53) popup_call2_audio_out_window_t4_ParamLimits

0xc369,	// (0x00079f53) popup_call2_audio_out_window_t4

0xc37f,	// (0x00079f69) popup_call2_audio_out_window_t5_ParamLimits

0xc37f,	// (0x00079f69) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x0007d133) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x0007d133) popup_call2_audio_out_window_t

0xc3e3,	// (0x00079fcd) bg_popup_call2_in_pane_ParamLimits

0xc3e3,	// (0x00079fcd) bg_popup_call2_in_pane

0xc43f,	// (0x0007a029) popup_call2_audio_in_window_g1_ParamLimits

0xc43f,	// (0x0007a029) popup_call2_audio_in_window_g1

0xc477,	// (0x0007a061) popup_call2_audio_in_window_g2_ParamLimits

0xc477,	// (0x0007a061) popup_call2_audio_in_window_g2

0xc4af,	// (0x0007a099) popup_call2_audio_in_window_g3_ParamLimits

0xc4af,	// (0x0007a099) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x0007d140) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x0007d140) popup_call2_audio_in_window_g

0xc507,	// (0x0007a0f1) popup_call2_audio_in_window_t1_ParamLimits

0xc507,	// (0x0007a0f1) popup_call2_audio_in_window_t1

0xc587,	// (0x0007a171) popup_call2_audio_in_window_t2_ParamLimits

0xc587,	// (0x0007a171) popup_call2_audio_in_window_t2

0xc607,	// (0x0007a1f1) popup_call2_audio_in_window_t3_ParamLimits

0xc607,	// (0x0007a1f1) popup_call2_audio_in_window_t3

0xc621,	// (0x0007a20b) popup_call2_audio_in_window_t4_ParamLimits

0xc621,	// (0x0007a20b) popup_call2_audio_in_window_t4

0xc633,	// (0x0007a21d) popup_call2_audio_in_window_t5_ParamLimits

0xc633,	// (0x0007a21d) popup_call2_audio_in_window_t5

0xc648,	// (0x0007a232) popup_call2_audio_in_window_t6_ParamLimits

0xc648,	// (0x0007a232) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x0007d149) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x0007d149) popup_call2_audio_in_window_t

0x9c82,	// (0x0007786c) bg_popup_call2_in_pane_g1

0xc761,	// (0x0007a34b) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x0007d1b1) popup_cale_lunar_info_window_t

0x9c8a,	// (0x00077874) bg_popup_call2_rect_pane_ParamLimits

0x9c8a,	// (0x00077874) bg_popup_call2_rect_pane

0x9a2f,	// (0x00077619) call2_cli_visual_graphic_pane

0x9a2f,	// (0x00077619) call2_cli_visual_text_pane

0x9ee9,	// (0x00077ad3) smil_status_volume_pane_g3

0x0002,

0xa910,	// (0x000784fa) call2_cli_visual_graphic_pane_g1

0xa910,	// (0x000784fa) call2_cli_visual_graphic_pane_g2

0xa910,	// (0x000784fa) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x0007d156) call2_cli_visual_graphic_pane_g

0xc65d,	// (0x0007a247) bg_popup_call2_rect_pane_g1

0xa9ae,	// (0x00078598) bg_popup_call2_rect_pane_g2

0xc665,	// (0x0007a24f) bg_popup_call2_rect_pane_g3

0xc66d,	// (0x0007a257) bg_popup_call2_rect_pane_g4

0xc675,	// (0x0007a25f) bg_popup_call2_rect_pane_g5

0xc67d,	// (0x0007a267) bg_popup_call2_rect_pane_g6

0xc685,	// (0x0007a26f) bg_popup_call2_rect_pane_g7

0xc68d,	// (0x0007a277) bg_popup_call2_rect_pane_g8

0xc695,	// (0x0007a27f) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x0007d15d) bg_popup_call2_rect_pane_g

0xc69d,	// (0x0007a287) bg_popup_call2_bubble_pane_g1

0xc6a5,	// (0x0007a28f) bg_popup_call2_bubble_pane_g2

0xc6ad,	// (0x0007a297) bg_popup_call2_bubble_pane_g3

0xc6b5,	// (0x0007a29f) bg_popup_call2_bubble_pane_g4

0xc6bd,	// (0x0007a2a7) bg_popup_call2_bubble_pane_g5

0xc6c5,	// (0x0007a2af) bg_popup_call2_bubble_pane_g6

0xc6cd,	// (0x0007a2b7) bg_popup_call2_bubble_pane_g7

0xc6d5,	// (0x0007a2bf) bg_popup_call2_bubble_pane_g8

0xc6dd,	// (0x0007a2c7) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x0007d170) bg_popup_call2_bubble_pane_g

0x046b,	// (0x0006e055) aid_cale_week_size_cell_pane

0x0da0,	// (0x0006e98a) aid_cams_cif_uncrop_pane_ParamLimits

0x0da0,	// (0x0006e98a) aid_cams_cif_uncrop_pane

0x0f59,	// (0x0006eb43) aid_cams_size_cell_ParamLimits

0x0f59,	// (0x0006eb43) aid_cams_size_cell

0x0f6d,	// (0x0006eb57) grid_cams_pane_ParamLimits

0x0f87,	// (0x0006eb71) linegrid_cams_pane_ParamLimits

0x1156,	// (0x0006ed40) call_video_pane_t1

0x1170,	// (0x0006ed5a) call_video_pane_t2

0x0001,

0xf273,	// (0x0007ce5d) call_video_pane_t

0x15a4,	// (0x0006f18e) aid_cale_month_size_cell_pane_ParamLimits

0x15a4,	// (0x0006f18e) aid_cale_month_size_cell_pane

0xf610,	// (0x0007d1fa) smil_status_volume_pane_g

0x9ef6,	// (0x00077ae0) volume_smil_pane_ParamLimits

0x95c7,	// (0x000771b1) aid_popup2_width_pane

0x03bb,	// (0x0006dfa5) cell_qdial_pane_g4_ParamLimits

0x03bb,	// (0x0006dfa5) cell_qdial_pane_g4

0x25ea,	// (0x000701d4) aid_blid_cardinal_pane_ParamLimits

0x25f6,	// (0x000701e0) aid_blid_destination_pane_ParamLimits

0x25f6,	// (0x000701e0) aid_blid_destination_pane

0x9c8a,	// (0x00077874) bg_popup_call_poc_act_pane_ParamLimits

0x9c8a,	// (0x00077874) bg_popup_call_poc_act_pane

0x9c8a,	// (0x00077874) bg_popup_call_poc_inact_pane_ParamLimits

0x9c8a,	// (0x00077874) bg_popup_call_poc_inact_pane

0xc6e5,	// (0x0007a2cf) bg_popup_call_poc_act_pane_g1

0xc6ed,	// (0x0007a2d7) bg_popup_call_poc_act_pane_g2

0xc6f5,	// (0x0007a2df) bg_popup_call_poc_act_pane_g3

0xc6b5,	// (0x0007a29f) bg_popup_call_poc_act_pane_g4

0xc6bd,	// (0x0007a2a7) bg_popup_call_poc_act_pane_g5

0xc6fd,	// (0x0007a2e7) bg_popup_call_poc_act_pane_g6

0xc6cd,	// (0x0007a2b7) bg_popup_call_poc_act_pane_g7

0xc705,	// (0x0007a2ef) bg_popup_call_poc_act_pane_g8

0x9a2f,	// (0x00077619) main_usb_pane

0xc86e,	// (0x0007a458) popup_cale_lunar_info_window

0x1439,	// (0x0006f023) im_reading_pane_t1_ParamLimits

0xab8c,	// (0x00078776) list_im_pane_ParamLimits

0xab9d,	// (0x00078787) scroll_pane_cp07_ParamLimits

0x9a2f,	// (0x00077619) grid_highlight_pane_cp012

0x9c8a,	// (0x00077874) mup_scale_pane_ParamLimits

0xb573,	// (0x0007915d) main_usb_pane_g1_ParamLimits

0xb573,	// (0x0007915d) main_usb_pane_g1

0x338b,	// (0x00070f75) main_usb_pane_g2_ParamLimits

0x338b,	// (0x00070f75) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x0007d19a) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x0007d19a) main_usb_pane_g

0x33a1,	// (0x00070f8b) main_usb_pane_t1_ParamLimits

0x33a1,	// (0x00070f8b) main_usb_pane_t1

0x33b3,	// (0x00070f9d) main_usb_pane_t2_ParamLimits

0x33b3,	// (0x00070f9d) main_usb_pane_t2

0x33c5,	// (0x00070faf) main_usb_pane_t3_ParamLimits

0x33c5,	// (0x00070faf) main_usb_pane_t3

0x33d7,	// (0x00070fc1) main_usb_pane_t4_ParamLimits

0x33d7,	// (0x00070fc1) main_usb_pane_t4

0x33ec,	// (0x00070fd6) main_usb_pane_t5_ParamLimits

0x33ec,	// (0x00070fd6) main_usb_pane_t5

0x3401,	// (0x00070feb) main_usb_pane_t6_ParamLimits

0x3401,	// (0x00070feb) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x0007d19f) main_usb_pane_t_ParamLimits

0x258b,	// (0x00070175) aid_text_placing

0x2596,	// (0x00070180) main_location2_pane_t1_ParamLimits

0x25aa,	// (0x00070194) main_location2_pane_t2_ParamLimits

0x25c0,	// (0x000701aa) main_location2_pane_t3_ParamLimits

0x25d6,	// (0x000701c0) main_location2_pane_t4_ParamLimits

0x25d6,	// (0x000701c0) main_location2_pane_t4

0xf3d4,	// (0x0007cfbe) main_location2_pane_t_ParamLimits

0x9cc6,	// (0x000778b0) find_pinb_pane_g2_ParamLimits

0x9cc6,	// (0x000778b0) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0007cd0c) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0007cd0c) find_pinb_pane_g

0x9cd2,	// (0x000778bc) find_pinb_pane_t1_ParamLimits

0xa850,	// (0x0007843a) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0007cd11) find_pinb_pane_t_ParamLimits

0x9a2f,	// (0x00077619) main_call3_pane

0x1b73,	// (0x0006f75d) cale_month_day_heading_pane_t1_ParamLimits

0x1bf9,	// (0x0006f7e3) cale_month_day_heading_pane_t2_ParamLimits

0x1c8a,	// (0x0006f874) cale_month_day_heading_pane_t3_ParamLimits

0x1d1b,	// (0x0006f905) cale_month_day_heading_pane_t4_ParamLimits

0x1dac,	// (0x0006f996) cale_month_day_heading_pane_t5_ParamLimits

0x1e4d,	// (0x0006fa37) cale_month_day_heading_pane_t6_ParamLimits

0x1ef2,	// (0x0006fadc) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0007ce95) cale_month_day_heading_pane_t_ParamLimits

0x21ce,	// (0x0006fdb8) smil_status_volume_pane

0x2e48,	// (0x00070a32) postcard_address_pane_ParamLimits

0x2e48,	// (0x00070a32) postcard_address_pane

0x2e5e,	// (0x00070a48) postcard_message_pane_ParamLimits

0x2e5e,	// (0x00070a48) postcard_message_pane

0x3367,	// (0x00070f51) call2_cli_visual_pane_t1_ParamLimits

0x3367,	// (0x00070f51) call2_cli_visual_pane_t1

0x3bf4,	// (0x000717de) postcard_message_pane_t1_ParamLimits

0x3bf4,	// (0x000717de) postcard_message_pane_t1

0x3bdd,	// (0x000717c7) postcard_address_pane_t1_ParamLimits

0x3bdd,	// (0x000717c7) postcard_address_pane_t1

0x3bc9,	// (0x000717b3) popup_call3_audio_in_window_ParamLimits

0x3bc9,	// (0x000717b3) popup_call3_audio_in_window

0x3a4e,	// (0x00071638) bg_popup_call3_in_pane_ParamLimits

0x3a4e,	// (0x00071638) bg_popup_call3_in_pane

0x3aca,	// (0x000716b4) popup_call3_audio_in_window_g1_ParamLimits

0x3aca,	// (0x000716b4) popup_call3_audio_in_window_g1

0x3aea,	// (0x000716d4) popup_call3_audio_in_window_g2_ParamLimits

0x3aea,	// (0x000716d4) popup_call3_audio_in_window_g2

0x3b0a,	// (0x000716f4) popup_call3_audio_in_window_g3_ParamLimits

0x3b0a,	// (0x000716f4) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0007d201) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0007d201) popup_call3_audio_in_window_g

0x3b3b,	// (0x00071725) popup_call3_audio_in_window_t1_ParamLimits

0x3b3b,	// (0x00071725) popup_call3_audio_in_window_t1

0x3b79,	// (0x00071763) popup_call3_audio_in_window_t2_ParamLimits

0x3b79,	// (0x00071763) popup_call3_audio_in_window_t2

0x3bb7,	// (0x000717a1) popup_call3_audio_in_window_t3_ParamLimits

0x3bb7,	// (0x000717a1) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x0007d20a) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x0007d20a) popup_call3_audio_in_window_t

0xb3bd,	// (0x00078fa7) bg_popup_call3_rect_pane

0xc65d,	// (0x0007a247) bg_popup_call3_rect_pane_g1

0xa9ae,	// (0x00078598) bg_popup_call3_rect_pane_g2

0xc665,	// (0x0007a24f) bg_popup_call3_rect_pane_g3

0xc66d,	// (0x0007a257) bg_popup_call3_rect_pane_g4

0xc675,	// (0x0007a25f) bg_popup_call3_rect_pane_g5

0xc67d,	// (0x0007a267) bg_popup_call3_rect_pane_g6

0xc685,	// (0x0007a26f) bg_popup_call3_rect_pane_g7

0x29f0,	// (0x000705da) mup_visualizer_osc_pane

0xb48a,	// (0x00079074) mup_visualizer_spec_pane

0x3a7e,	// (0x00071668) call3_video_qcif_pane_ParamLimits

0x3a7e,	// (0x00071668) call3_video_qcif_pane

0x3a91,	// (0x0007167b) call3_video_qcif_uncrop_pane_ParamLimits

0x3a91,	// (0x0007167b) call3_video_qcif_uncrop_pane

0x3aa1,	// (0x0007168b) call3_video_subqcif_pane_ParamLimits

0x3aa1,	// (0x0007168b) call3_video_subqcif_pane

0x3ab7,	// (0x000716a1) call3_video_subqcif_uncrop_pane_ParamLimits

0x3ab7,	// (0x000716a1) call3_video_subqcif_uncrop_pane

0x3b2a,	// (0x00071714) popup_call3_audio_in_window_g4_ParamLimits

0x3b2a,	// (0x00071714) popup_call3_audio_in_window_g4

0x3a3d,	// (0x00071627) mup_spec_half_pane

0x3a46,	// (0x00071630) mup_spec_half_pane_cp

0xc909,	// (0x0007a4f3) mup_osc_middle_pane

0xc912,	// (0x0007a4fc) mup_visualizer_osc_pane_g1

0x3a1d,	// (0x00071607) mup_spec_bar_pane_ParamLimits

0x3a1d,	// (0x00071607) mup_spec_bar_pane

0xc8f6,	// (0x0007a4e0) mup_spec_bar_pane_g1

0xc900,	// (0x0007a4ea) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0007d1f5) mup_spec_bar_pane_g

0x046b,	// (0x0006e055) aid_cale_week_size_cell_pane_ParamLimits

0x0485,	// (0x0006e06f) bg_cale_heading_pane_ParamLimits

0xa9e2,	// (0x000785cc) bg_cale_pane_cp01_ParamLimits

0x04ae,	// (0x0006e098) cale_week_corner_pane_ParamLimits

0x04cd,	// (0x0006e0b7) cale_week_day_heading_pane_ParamLimits

0x04fb,	// (0x0006e0e5) cale_week_scroll_pane_g1_ParamLimits

0x051f,	// (0x0006e109) cale_week_scroll_pane_g2_ParamLimits

0x0537,	// (0x0006e121) cale_week_scroll_pane_g3_ParamLimits

0x054f,	// (0x0006e139) cale_week_scroll_pane_g4_ParamLimits

0x056b,	// (0x0006e155) cale_week_scroll_pane_g5_ParamLimits

0x058b,	// (0x0006e175) cale_week_scroll_pane_g6_ParamLimits

0x05ab,	// (0x0006e195) cale_week_scroll_pane_g7_ParamLimits

0x05cf,	// (0x0006e1b9) cale_week_scroll_pane_g8_ParamLimits

0x05f3,	// (0x0006e1dd) cale_week_scroll_pane_g9_ParamLimits

0x0610,	// (0x0006e1fa) cale_week_scroll_pane_g10_ParamLimits

0x062d,	// (0x0006e217) cale_week_scroll_pane_g11_ParamLimits

0x064a,	// (0x0006e234) cale_week_scroll_pane_g12_ParamLimits

0x0667,	// (0x0006e251) cale_week_scroll_pane_g13_ParamLimits

0x0684,	// (0x0006e26e) cale_week_scroll_pane_g14_ParamLimits

0x06ad,	// (0x0006e297) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0007cd9d) cale_week_scroll_pane_g_ParamLimits

0x06d6,	// (0x0006e2c0) cale_week_time_pane_ParamLimits

0x06fa,	// (0x0006e2e4) grid_cale_week_pane_ParamLimits

0xaa00,	// (0x000785ea) listscroll_cale_week_pane_t1

0xaa12,	// (0x000785fc) scroll_pane_cp08_ParamLimits

0x1611,	// (0x0006f1fb) cale_month_corner_pane_ParamLimits

0xadbd,	// (0x000789a7) cale_month_pane_t1

0x1af9,	// (0x0006f6e3) cale_month_week_pane_ParamLimits

0x23b9,	// (0x0006ffa3) popup_call_status_window_g1_ParamLimits

0x23cd,	// (0x0006ffb7) popup_call_status_window_g2_ParamLimits

0x23e1,	// (0x0006ffcb) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0007cf45) popup_call_status_window_g_ParamLimits

0xb15f,	// (0x00078d49) aid_call2_pane

0x2cbc,	// (0x000708a6) msg_header_pane_g1

0x2e48,	// (0x00070a32) postcard_address2_pane_ParamLimits

0x2e48,	// (0x00070a32) postcard_address2_pane

0x2e5e,	// (0x00070a48) postcard_message2_pane_ParamLimits

0x2e5e,	// (0x00070a48) postcard_message2_pane

0x39cd,	// (0x000715b7) message2_row_pane_ParamLimits

0x39cd,	// (0x000715b7) message2_row_pane

0x39ea,	// (0x000715d4) address2_row_pane_ParamLimits

0x39ea,	// (0x000715d4) address2_row_pane

0xc8c4,	// (0x0007a4ae) postcard_message2_row_pane_g1

0xc8cc,	// (0x0007a4b6) postcard_message2_row_pane_t1

0xc8c4,	// (0x0007a4ae) address2_row_pane_g1

0xc8cc,	// (0x0007a4b6) address2_row_pane_t1

0x0c26,	// (0x0006e810) aid_size_cell_vorec

0x9a2f,	// (0x00077619) main_rss_pane

0x39fd,	// (0x000715e7) rss_list_single_pane_ParamLimits

0x39fd,	// (0x000715e7) rss_list_single_pane

0xc8da,	// (0x0007a4c4) rss_list_single_pane_t1

0xc8e8,	// (0x0007a4d2) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x0007d1f0) rss_list_single_pane_t

0x9a2f,	// (0x00077619) main_camera2_pane

0x9a2f,	// (0x00077619) main_video2_pane

0x3c63,	// (0x0007184d) cams_zoom_pane_cp2_ParamLimits

0x3c63,	// (0x0007184d) cams_zoom_pane_cp2

0x3c7a,	// (0x00071864) image2_vga_pane_ParamLimits

0x3c7a,	// (0x00071864) image2_vga_pane

0x3cc2,	// (0x000718ac) main_camera2_pane_g1_ParamLimits

0x3cc2,	// (0x000718ac) main_camera2_pane_g1

0x3ce2,	// (0x000718cc) main_camera2_pane_g2_ParamLimits

0x3ce2,	// (0x000718cc) main_camera2_pane_g2

0x3cf9,	// (0x000718e3) main_camera2_pane_g3_ParamLimits

0x3cf9,	// (0x000718e3) main_camera2_pane_g3

0x3d10,	// (0x000718fa) main_camera2_pane_g4_ParamLimits

0x3d10,	// (0x000718fa) main_camera2_pane_g4

0x3d27,	// (0x00071911) main_camera2_pane_g5_ParamLimits

0x3d27,	// (0x00071911) main_camera2_pane_g5

0x3d3e,	// (0x00071928) main_camera2_pane_g6_ParamLimits

0x3d3e,	// (0x00071928) main_camera2_pane_g6

0x3d55,	// (0x0007193f) main_camera2_pane_g7_ParamLimits

0x3d55,	// (0x0007193f) main_camera2_pane_g7

0x3d6c,	// (0x00071956) main_camera2_pane_g8_ParamLimits

0x3d6c,	// (0x00071956) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0007d211) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0007d211) main_camera2_pane_g

0x3d9a,	// (0x00071984) main_camera2_pane_t1_ParamLimits

0x3d9a,	// (0x00071984) main_camera2_pane_t1

0x3dcf,	// (0x000719b9) main_camera2_pane_t2_ParamLimits

0x3dcf,	// (0x000719b9) main_camera2_pane_t2

0x3dec,	// (0x000719d6) main_camera2_pane_t3_ParamLimits

0x3dec,	// (0x000719d6) main_camera2_pane_t3

0x3e4a,	// (0x00071a34) main_camera2_pane_t4_ParamLimits

0x3e4a,	// (0x00071a34) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0007d224) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0007d224) main_camera2_pane_t

0x3ed3,	// (0x00071abd) cams_zoom_pane_cp4_ParamLimits

0x3ed3,	// (0x00071abd) cams_zoom_pane_cp4

0x3ee9,	// (0x00071ad3) image2_cif_pane_ParamLimits

0x3ee9,	// (0x00071ad3) image2_cif_pane

0x3f14,	// (0x00071afe) image2_subqcif_pane_ParamLimits

0x3f14,	// (0x00071afe) image2_subqcif_pane

0x3f2f,	// (0x00071b19) main_video2_pane_g1_ParamLimits

0x3f2f,	// (0x00071b19) main_video2_pane_g1

0x3f49,	// (0x00071b33) main_video2_pane_g2_ParamLimits

0x3f49,	// (0x00071b33) main_video2_pane_g2

0x3f5f,	// (0x00071b49) main_video2_pane_g3_ParamLimits

0x3f5f,	// (0x00071b49) main_video2_pane_g3

0x3f75,	// (0x00071b5f) main_video2_pane_g4_ParamLimits

0x3f75,	// (0x00071b5f) main_video2_pane_g4

0x3f8b,	// (0x00071b75) main_video2_pane_g5_ParamLimits

0x3f8b,	// (0x00071b75) main_video2_pane_g5

0x3fa1,	// (0x00071b8b) main_video2_pane_g6_ParamLimits

0x3fa1,	// (0x00071b8b) main_video2_pane_g6

0x0005,

0xf649,	// (0x0007d233) main_video2_pane_g_ParamLimits

0xf649,	// (0x0007d233) main_video2_pane_g

0x3fbb,	// (0x00071ba5) main_video2_pane_t1_ParamLimits

0x3fbb,	// (0x00071ba5) main_video2_pane_t1

0x3fdf,	// (0x00071bc9) main_video2_pane_t2_ParamLimits

0x3fdf,	// (0x00071bc9) main_video2_pane_t2

0x402f,	// (0x00071c19) main_video2_pane_t3_ParamLimits

0x402f,	// (0x00071c19) main_video2_pane_t3

0x0002,

0xf656,	// (0x0007d240) main_video2_pane_t_ParamLimits

0xf656,	// (0x0007d240) main_video2_pane_t

0x34bf,	// (0x000710a9) call_muted_g2

0x0001,

0xf5f8,	// (0x0007d1e2) call_muted_g

0x9a2f,	// (0x00077619) main_mup2_pane

0x4077,	// (0x00071c61) main_mup2_pane_g1_ParamLimits

0x4077,	// (0x00071c61) main_mup2_pane_g1

0x4083,	// (0x00071c6d) main_mup2_pane_g2_ParamLimits

0x4083,	// (0x00071c6d) main_mup2_pane_g2

0x9f61,	// (0x00077b4b) main_mup_pane_g13_cp1

0x9f69,	// (0x00077b53) mup_volume_pane_cp1

0x40a1,	// (0x00071c8b) main_mup2_pane_g4_ParamLimits

0x40a1,	// (0x00071c8b) main_mup2_pane_g4

0x40b3,	// (0x00071c9d) main_mup2_pane_g5_ParamLimits

0x40b3,	// (0x00071c9d) main_mup2_pane_g5

0x40c5,	// (0x00071caf) main_mup2_pane_g6_ParamLimits

0x40c5,	// (0x00071caf) main_mup2_pane_g6

0x40d7,	// (0x00071cc1) main_mup2_pane_g7_ParamLimits

0x40d7,	// (0x00071cc1) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x0007d247) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x0007d247) main_mup2_pane_g

0x40ef,	// (0x00071cd9) main_mup2_pane_t1_ParamLimits

0x40ef,	// (0x00071cd9) main_mup2_pane_t1

0x4105,	// (0x00071cef) main_mup2_pane_t2_ParamLimits

0x4105,	// (0x00071cef) main_mup2_pane_t2

0x411b,	// (0x00071d05) main_mup2_pane_t3_ParamLimits

0x411b,	// (0x00071d05) main_mup2_pane_t3

0x4131,	// (0x00071d1b) main_mup2_pane_t4_ParamLimits

0x4131,	// (0x00071d1b) main_mup2_pane_t4

0x4149,	// (0x00071d33) main_mup2_pane_t5_ParamLimits

0x4149,	// (0x00071d33) main_mup2_pane_t5

0x4161,	// (0x00071d4b) main_mup2_pane_t6_ParamLimits

0x4161,	// (0x00071d4b) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x0007d256) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x0007d256) main_mup2_pane_t

0x4191,	// (0x00071d7b) mup2_visualizer_pane_ParamLimits

0x4191,	// (0x00071d7b) mup2_visualizer_pane

0x41bf,	// (0x00071da9) mup_progress_pane_cp_ParamLimits

0x41bf,	// (0x00071da9) mup_progress_pane_cp

0x9f4c,	// (0x00077b36) mup_volume_pane_cp_ParamLimits

0x9f4c,	// (0x00077b36) mup_volume_pane_cp

0x41d5,	// (0x00071dbf) mup2_visualizer_pane_g1_ParamLimits

0x41d5,	// (0x00071dbf) mup2_visualizer_pane_g1

0xc949,	// (0x0007a533) mup2_visualizer_pane_g2_ParamLimits

0xc949,	// (0x0007a533) mup2_visualizer_pane_g2

0x41ec,	// (0x00071dd6) mup2_visualizer_pane_g3_ParamLimits

0x41ec,	// (0x00071dd6) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x0007d263) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x0007d263) mup2_visualizer_pane_g

0xb6bc,	// (0x000792a6) aid_size_cell_fmradio

0x366f,	// (0x00071259) aid_height_parent_landcape

0xac1b,	// (0x00078805) wml_content_pane_cp

0xac23,	// (0x0007880d) wml_tabs_pane

0xac2c,	// (0x00078816) popup_wml_miniature_window

0xac34,	// (0x0007881e) scroll_pane_cp021

0xac48,	// (0x00078832) wml_content_pane_comp8

0x9a2f,	// (0x00077619) bg_popup_sub_pane_cp05

0xc967,	// (0x0007a551) popup_wml_miniature_window_g1

0xc96f,	// (0x0007a559) wml_miniature_view_pane

0x41f8,	// (0x00071de2) aid_size_wml_view

0x4200,	// (0x00071dea) wml_miniature_view_pane_g1

0x4209,	// (0x00071df3) wml_miniature_view_pane_g2

0x4212,	// (0x00071dfc) wml_miniature_view_pane_g3

0x421a,	// (0x00071e04) wml_miniature_view_pane_g4

0x4222,	// (0x00071e0c) wml_miniature_view_pane_g5

0x422a,	// (0x00071e14) wml_miniature_view_pane_g6

0x4232,	// (0x00071e1c) wml_miniature_view_pane_g7

0x423a,	// (0x00071e24) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x0007d26a) wml_miniature_view_pane_g

0xc977,	// (0x0007a561) background_graphic_ParamLimits

0xc977,	// (0x0007a561) background_graphic

0xc983,	// (0x0007a56d) wml_tabs_2_pane

0xc98c,	// (0x0007a576) wml_tabs_3_pane_ParamLimits

0xc98c,	// (0x0007a576) wml_tabs_3_pane

0xc99e,	// (0x0007a588) wml_tabs_4_pane_ParamLimits

0xc99e,	// (0x0007a588) wml_tabs_4_pane

0xc9b4,	// (0x0007a59e) wml_tabs_5_pane_ParamLimits

0xc9b4,	// (0x0007a59e) wml_tabs_5_pane

0xc9ce,	// (0x0007a5b8) wml_tabs_pane_g2_ParamLimits

0xc9ce,	// (0x0007a5b8) wml_tabs_pane_g2

0xc9e2,	// (0x0007a5cc) wml_tabs_pane_g3_ParamLimits

0xc9e2,	// (0x0007a5cc) wml_tabs_pane_g3

0x4242,	// (0x00071e2c) wml_tabs_2_active_pane_ParamLimits

0x4242,	// (0x00071e2c) wml_tabs_2_active_pane

0x4256,	// (0x00071e40) wml_tabs_2_passive_pane_ParamLimits

0x4256,	// (0x00071e40) wml_tabs_2_passive_pane

0x426a,	// (0x00071e54) wml_tabs_3_active_pane_cp_ParamLimits

0x426a,	// (0x00071e54) wml_tabs_3_active_pane_cp

0x427f,	// (0x00071e69) wml_tabs_3_passive_pane_ParamLimits

0x427f,	// (0x00071e69) wml_tabs_3_passive_pane

0x4292,	// (0x00071e7c) wml_tabs_3_passive_pane_cp_ParamLimits

0x4292,	// (0x00071e7c) wml_tabs_3_passive_pane_cp

0x42a9,	// (0x00071e93) tabs_4_active_pane

0x42b1,	// (0x00071e9b) tabs_4_passive_pane

0x42bb,	// (0x00071ea5) tabs_4_passive_pane_cp

0x42c3,	// (0x00071ead) tabs_4_passive_pane_cp2

0x3383,	// (0x00070f6d) aid_height_text

0x29c2,	// (0x000705ac) mup_volume_cont_pane_ParamLimits

0x29c2,	// (0x000705ac) mup_volume_cont_pane

0x0048,	// (0x0006dc32) aid_size_cell_pinb

0x0052,	// (0x0006dc3c) aid_size_list_pinb

0x41ab,	// (0x00071d95) mup2_volume_cont_pane_ParamLimits

0x41ab,	// (0x00071d95) mup2_volume_cont_pane

0x9f38,	// (0x00077b22) mup2_volume_cont_pane_g1_ParamLimits

0x9f38,	// (0x00077b22) mup2_volume_cont_pane_g1

0xfcf8,	// (0x0006d8e2) aid_size_cell_touch_ParamLimits

0xfcf8,	// (0x0006d8e2) aid_size_cell_touch

0xff38,	// (0x0006db22) touch_pane_ParamLimits

0xff38,	// (0x0006db22) touch_pane

0x95b5,	// (0x0007719f) main_rss2_pane

0xc9ff,	// (0x0007a5e9) listscroll_rss2_pane

0xca08,	// (0x0007a5f2) rss2_navigation_pane

0xca10,	// (0x0007a5fa) list_rss2_pane

0xb283,	// (0x00078e6d) scroll_pane_cp22

0xca18,	// (0x0007a602) rss2_navigation_pane_g1

0xca21,	// (0x0007a60b) rss2_navigation_pane_g2

0xca29,	// (0x0007a613) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x0007d27b) rss2_navigation_pane_g

0xca31,	// (0x0007a61b) rss2_navigation_pane_t1

0x42cd,	// (0x00071eb7) rss2_list_single_pane_ParamLimits

0x42cd,	// (0x00071eb7) rss2_list_single_pane

0xca3f,	// (0x0007a629) rss2_list_single_pane_t2

0xca4d,	// (0x0007a637) rss2_list_single_pane_t3_ParamLimits

0xca4d,	// (0x0007a637) rss2_list_single_pane_t3

0xca6a,	// (0x0007a654) rss2_list_single_pane_t4

0x21b6,	// (0x0006fda0) smil_status_pane_g1

0x960e,	// (0x000771f8) main_image2_pane_ParamLimits

0x960e,	// (0x000771f8) main_image2_pane

0x3d83,	// (0x0007196d) main_camera2_pane_g9_ParamLimits

0x3d83,	// (0x0007196d) main_camera2_pane_g9

0x3e9f,	// (0x00071a89) main_camera2_pane_t5_ParamLimits

0x3e9f,	// (0x00071a89) main_camera2_pane_t5

0x9f0d,	// (0x00077af7) main_camera2_pane_t6_ParamLimits

0x9f0d,	// (0x00077af7) main_camera2_pane_t6

0x42e3,	// (0x00071ecd) main_image2_pane_g1_ParamLimits

0x42e3,	// (0x00071ecd) main_image2_pane_g1

0x309d,	// (0x00070c87) smil2_video_pane_ParamLimits

0x309d,	// (0x00070c87) smil2_video_pane

0xfd30,	// (0x0006d91a) aid_zoom_text_primary_cp

0x9604,	// (0x000771ee) popup_preview_fixed_window

0xab84,	// (0x0007876e) im_reading_pane_g1

0x3c55,	// (0x0007183f) cams2_bc_adjust_pane_cp_ParamLimits

0x3c55,	// (0x0007183f) cams2_bc_adjust_pane_cp

0x3ec5,	// (0x00071aaf) cams2_bc_adjust_pane_ParamLimits

0x3ec5,	// (0x00071aaf) cams2_bc_adjust_pane

0xcdcd,	// (0x0007a9b7) cams2_bc_adjust_pane_g1

0x9f71,	// (0x00077b5b) cams2_slider_pane

0x9f7a,	// (0x00077b64) cams2_slider_pane_g1

0x9f83,	// (0x00077b6d) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x0007d282) cams2_slider_pane_g

0x0142,	// (0x0006dd2c) calc_display_pane_ParamLimits

0x016a,	// (0x0006dd54) calc_paper_pane_ParamLimits

0x018d,	// (0x0006dd77) grid_calc_pane_ParamLimits

0x9e42,	// (0x00077a2c) popup_clock_digital_window_t1_ParamLimits

0xb659,	// (0x00079243) main_image_pane_t1

0x0124,	// (0x0006dd0e) aid_size_cell_calc_ParamLimits

0x0124,	// (0x0006dd0e) aid_size_cell_calc

0x36b5,	// (0x0007129f) popup_blid_sat_info2_window_ParamLimits

0x36b5,	// (0x0007129f) popup_blid_sat_info2_window

0xca80,	// (0x0007a66a) aid_size_cell_blid

0xca88,	// (0x0007a672) bg_popup_window_pane_cp07

0xcaab,	// (0x0007a695) grid_popup_blid_pane

0xcab5,	// (0x0007a69f) heading_pane_cp05_ParamLimits

0xcab5,	// (0x0007a69f) heading_pane_cp05

0xcb7f,	// (0x0007a769) cell_popup_blid_pane_ParamLimits

0xcb7f,	// (0x0007a769) cell_popup_blid_pane

0xcba9,	// (0x0007a793) cell_popup_blid_pane_g1

0xcbb1,	// (0x0007a79b) cell_popup_blid_pane_t1

0x417b,	// (0x00071d65) mup2_indicator_pane_ParamLimits

0x417b,	// (0x00071d65) mup2_indicator_pane

0xb3bd,	// (0x00078fa7) mup2_visualizer_osc_pane

0xc955,	// (0x0007a53f) mup2_visualizer_spec_pane_ParamLimits

0xc955,	// (0x0007a53f) mup2_visualizer_spec_pane

0x42f9,	// (0x00071ee3) mup2_spec_half_pane

0x4302,	// (0x00071eec) mup2_spec_half_pane_cp

0x430a,	// (0x00071ef4) mup2_spec_bar_pane_ParamLimits

0x430a,	// (0x00071ef4) mup2_spec_bar_pane

0xc8f6,	// (0x0007a4e0) mup2_spec_bar_pane_g1

0xc900,	// (0x0007a4ea) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0007d1f5) mup2_spec_bar_pane_g

0x432a,	// (0x00071f14) mup2_osc_middle_pane

0xc912,	// (0x0007a4fc) mup2_visualizer_osc_pane_g1

0x963c,	// (0x00077226) popup_number_entry_window_t1_ParamLimits

0x964f,	// (0x00077239) popup_number_entry_window_t2_ParamLimits

0x9661,	// (0x0007724b) popup_number_entry_window_t3_ParamLimits

0xff8a,	// (0x0006db74) popup_number_entry_window_t5_ParamLimits

0xff8a,	// (0x0006db74) popup_number_entry_window_t5

0xf0cd,	// (0x0007ccb7) popup_number_entry_window_t_ParamLimits

0x9673,	// (0x0007725d) text_title_cp2_ParamLimits

0x9eb7,	// (0x00077aa1) aid_hotspot_pointer_text2_pane

0x9edd,	// (0x00077ac7) main_viewer_pane_g9_ParamLimits

0x9edd,	// (0x00077ac7) main_viewer_pane_g9

0xadbd,	// (0x000789a7) cale_month_pane_t1_ParamLimits

0xade3,	// (0x000789cd) bg_cale_pane_ParamLimits

0xadfb,	// (0x000789e5) list_cale_pane_ParamLimits

0xae0c,	// (0x000789f6) listscroll_cale_day_pane_t1

0xae1e,	// (0x00078a08) scroll_pane_cp09_ParamLimits

0x29f8,	// (0x000705e2) main_mup_eq_pane_t1_ParamLimits

0x29f8,	// (0x000705e2) main_mup_eq_pane_t1

0x2a14,	// (0x000705fe) main_mup_eq_pane_t2_ParamLimits

0x2a14,	// (0x000705fe) main_mup_eq_pane_t2

0x2a30,	// (0x0007061a) main_mup_eq_pane_t3_ParamLimits

0x2a30,	// (0x0007061a) main_mup_eq_pane_t3

0x2a4e,	// (0x00070638) main_mup_eq_pane_t4_ParamLimits

0x2a4e,	// (0x00070638) main_mup_eq_pane_t4

0x2a6c,	// (0x00070656) main_mup_eq_pane_t5_ParamLimits

0x2a6c,	// (0x00070656) main_mup_eq_pane_t5

0x2a8a,	// (0x00070674) main_mup_eq_pane_t6_ParamLimits

0x2a8a,	// (0x00070674) main_mup_eq_pane_t6

0x2aa0,	// (0x0007068a) main_mup_eq_pane_t7_ParamLimits

0x2aa0,	// (0x0007068a) main_mup_eq_pane_t7

0x2ab6,	// (0x000706a0) main_mup_eq_pane_t8_ParamLimits

0x2ab6,	// (0x000706a0) main_mup_eq_pane_t8

0x2acc,	// (0x000706b6) main_mup_eq_pane_t9_ParamLimits

0x2acc,	// (0x000706b6) main_mup_eq_pane_t9

0x2ae8,	// (0x000706d2) main_mup_eq_pane_t10_ParamLimits

0x2ae8,	// (0x000706d2) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0007d044) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0007d044) main_mup_eq_pane_t

0x2bbd,	// (0x000707a7) mup_equalizer_pane_cp5_ParamLimits

0x2bd5,	// (0x000707bf) mup_equalizer_pane_cp6_ParamLimits

0x2bed,	// (0x000707d7) mup_equalizer_pane_cp7_ParamLimits

0x95b5,	// (0x0007719f) main_gallery_pane

0xc91b,	// (0x0007a505) smil2_volume_pane

0xc923,	// (0x0007a50d) smil_status_volume_pane_g1_ParamLimits

0xc936,	// (0x0007a520) smil_status_volume_pane_g2_ParamLimits

0x9ee9,	// (0x00077ad3) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x0007d1fa) smil_status_volume_pane_g_ParamLimits

0xca88,	// (0x0007a672) bg_popup_window_pane_cp07_ParamLimits

0xca96,	// (0x0007a680) blid_firmament_pane

0x4333,	// (0x00071f1d) aid_size_cell_gallery_ParamLimits

0x4333,	// (0x00071f1d) aid_size_cell_gallery

0x4349,	// (0x00071f33) grid_gallery_pane_ParamLimits

0x4349,	// (0x00071f33) grid_gallery_pane

0x4364,	// (0x00071f4e) cell_gallery_pane_ParamLimits

0x4364,	// (0x00071f4e) cell_gallery_pane

0xcbbf,	// (0x0007a7a9) bg_cell_gallery_focus_pane_ParamLimits

0xcbbf,	// (0x0007a7a9) bg_cell_gallery_focus_pane

0xcbd1,	// (0x0007a7bb) cell_gallery_pane_g1_ParamLimits

0xcbd1,	// (0x0007a7bb) cell_gallery_pane_g1

0x43af,	// (0x00071f99) cell_gallery_pane_g2_ParamLimits

0x43af,	// (0x00071f99) cell_gallery_pane_g2

0x43bc,	// (0x00071fa6) cell_gallery_pane_g3_ParamLimits

0x43bc,	// (0x00071fa6) cell_gallery_pane_g3

0xcbdd,	// (0x0007a7c7) cell_gallery_pane_g4_ParamLimits

0xcbdd,	// (0x0007a7c7) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x0007d2a8) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x0007d2a8) cell_gallery_pane_g

0xcbe9,	// (0x0007a7d3) bg_cell_gallery_focus_pane_g1

0xcbf1,	// (0x0007a7db) bg_cell_gallery_focus_pane_g2

0xcbf9,	// (0x0007a7e3) bg_cell_gallery_focus_pane_g3

0xcc01,	// (0x0007a7eb) bg_cell_gallery_focus_pane_g4

0xcc09,	// (0x0007a7f3) bg_cell_gallery_focus_pane_g5

0xcc11,	// (0x0007a7fb) bg_cell_gallery_focus_pane_g6

0xcc19,	// (0x0007a803) bg_cell_gallery_focus_pane_g7

0xcc21,	// (0x0007a80b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x0007d2b1) bg_cell_gallery_focus_pane_g

0xcc29,	// (0x0007a813) aid_firma_cardinal

0xcc3d,	// (0x0007a827) blid_firmament_pane_t1

0xcc54,	// (0x0007a83e) blid_firmament_pane_t2

0xcc6b,	// (0x0007a855) blid_firmament_pane_t3

0xcc82,	// (0x0007a86c) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x0007d2c2) blid_firmament_pane_t

0xcc99,	// (0x0007a883) blid_sat_info_pane

0xcca9,	// (0x0007a893) blid_sat_info_pane_g1

0xcca9,	// (0x0007a893) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x0007d2cb) blid_sat_info_pane_g

0xccb3,	// (0x0007a89d) blid_sat_info_pane_t1

0xccc1,	// (0x0007a8ab) smil2_volume_content_pane

0xccca,	// (0x0007a8b4) smil2_volume_pane_g1

0xccd2,	// (0x0007a8bc) smil2_volume_content_pane_g1

0xccdb,	// (0x0007a8c5) smil2_volume_content_pane_g2

0xcce4,	// (0x0007a8ce) smil2_volume_content_pane_g3

0xcced,	// (0x0007a8d7) smil2_volume_content_pane_g4

0xccf6,	// (0x0007a8e0) smil2_volume_content_pane_g5

0xccff,	// (0x0007a8e9) smil2_volume_content_pane_g6

0xcd08,	// (0x0007a8f2) smil2_volume_content_pane_g7

0xcd11,	// (0x0007a8fb) smil2_volume_content_pane_g8

0xcd1a,	// (0x0007a904) smil2_volume_content_pane_g9

0xcd23,	// (0x0007a90d) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x0007d2d0) smil2_volume_content_pane_g

0x07c1,	// (0x0006e3ab) cale_week_day_heading_pane_t1_ParamLimits

0x080b,	// (0x0006e3f5) cale_week_day_heading_pane_t2_ParamLimits

0x085a,	// (0x0006e444) cale_week_day_heading_pane_t3_ParamLimits

0x08a9,	// (0x0006e493) cale_week_day_heading_pane_t4_ParamLimits

0x08f8,	// (0x0006e4e2) cale_week_day_heading_pane_t5_ParamLimits

0x094b,	// (0x0006e535) cale_week_day_heading_pane_t6_ParamLimits

0x09a2,	// (0x0006e58c) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0007cdbc) cale_week_day_heading_pane_t_ParamLimits

0xaa34,	// (0x0007861e) bg_cale_side_pane_ParamLimits

0x09ec,	// (0x0006e5d6) cale_week_time_pane_t1_ParamLimits

0x0a26,	// (0x0006e610) cale_week_time_pane_t2_ParamLimits

0x0a60,	// (0x0006e64a) cale_week_time_pane_t3_ParamLimits

0x0a9a,	// (0x0006e684) cale_week_time_pane_t4_ParamLimits

0x0ad4,	// (0x0006e6be) cale_week_time_pane_t5_ParamLimits

0x0b0e,	// (0x0006e6f8) cale_week_time_pane_t6_ParamLimits

0x0b48,	// (0x0006e732) cale_week_time_pane_t7_ParamLimits

0x0b82,	// (0x0006e76c) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0007cdcb) cale_week_time_pane_t_ParamLimits

0x0bc2,	// (0x0006e7ac) cell_cale_week_pane_g2_ParamLimits

0xaa34,	// (0x0007861e) bg_cale_side_pane_cp01_ParamLimits

0x1f9b,	// (0x0006fb85) cale_month_week_pane_t1_ParamLimits

0x1fb4,	// (0x0006fb9e) cale_month_week_pane_t2_ParamLimits

0x1fcd,	// (0x0006fbb7) cale_month_week_pane_t3_ParamLimits

0x1fe6,	// (0x0006fbd0) cale_month_week_pane_t4_ParamLimits

0x1fff,	// (0x0006fbe9) cale_month_week_pane_t5_ParamLimits

0x2018,	// (0x0006fc02) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0007cea4) cale_month_week_pane_t_ParamLimits

0x9dc2,	// (0x000779ac) cell_cale_month_pane_g1_ParamLimits

0x95b5,	// (0x0007719f) main_cale_event_viewer_pane

0x95b5,	// (0x0007719f) listscroll_cale_event_viewer_pane

0xcd2c,	// (0x0007a916) list_cale_ev_pane

0xcd34,	// (0x0007a91e) scroll_pane_cp023

0x43c9,	// (0x00071fb3) field_cale_ev_pane_ParamLimits

0x43c9,	// (0x00071fb3) field_cale_ev_pane

0xcd40,	// (0x0007a92a) field_cale_ev_content_pane_ParamLimits

0xcd40,	// (0x0007a92a) field_cale_ev_content_pane

0xcd4c,	// (0x0007a936) field_cale_ev_pane_g1_ParamLimits

0xcd4c,	// (0x0007a936) field_cale_ev_pane_g1

0xcd58,	// (0x0007a942) field_cale_ev_pane_g2_ParamLimits

0xcd58,	// (0x0007a942) field_cale_ev_pane_g2

0xcd70,	// (0x0007a95a) field_cale_ev_pane_g3_ParamLimits

0xcd70,	// (0x0007a95a) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x0007d2e5) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x0007d2e5) field_cale_ev_pane_g

0xcd88,	// (0x0007a972) field_cale_ev_pane_t1_ParamLimits

0xcd88,	// (0x0007a972) field_cale_ev_pane_t1

0x43ed,	// (0x00071fd7) field_cale_ev_content_pane_t1_ParamLimits

0x43ed,	// (0x00071fd7) field_cale_ev_content_pane_t1

0x2cb1,	// (0x0007089b) bg_button_pane_cp01

0x044f,	// (0x0006e039) listscroll_cale_week_pane_ParamLimits

0x0461,	// (0x0006e04b) popup_toolbar_window_cp01

0xaa00,	// (0x000785ea) listscroll_cale_week_pane_t1_ParamLimits

0x044f,	// (0x0006e039) listscroll_cale_day_pane_ParamLimits

0x0461,	// (0x0006e04b) popup_toolbar_window_cp02

0xae0c,	// (0x000789f6) listscroll_cale_day_pane_t1_ParamLimits

0x044f,	// (0x0006e039) main_cale_month_pane_ParamLimits

0x3935,	// (0x0007151f) popup_toolbar_window_cp03_ParamLimits

0x3935,	// (0x0007151f) popup_toolbar_window_cp03

0x2f5b,	// (0x00070b45) main_image_pane_g2_ParamLimits

0x2f5b,	// (0x00070b45) main_image_pane_g2

0x2f6c,	// (0x00070b56) main_image_pane_g3_ParamLimits

0x2f6c,	// (0x00070b56) main_image_pane_g3

0x0002,

0xf4ec,	// (0x0007d0d6) main_image_pane_g_ParamLimits

0xf4ec,	// (0x0007d0d6) main_image_pane_g

0xb659,	// (0x00079243) main_image_pane_t1_ParamLimits

0x2f7d,	// (0x00070b67) main_image_pane_t2_ParamLimits

0x2f7d,	// (0x00070b67) main_image_pane_t2

0x2f8f,	// (0x00070b79) main_image_pane_t3_ParamLimits

0x2f8f,	// (0x00070b79) main_image_pane_t3

0x2fb7,	// (0x00070ba1) main_image_pane_t4_ParamLimits

0x2fb7,	// (0x00070ba1) main_image_pane_t4

0x0003,

0xf4f3,	// (0x0007d0dd) main_image_pane_t_ParamLimits

0xf4f3,	// (0x0007d0dd) main_image_pane_t

0x2fd7,	// (0x00070bc1) popup_image_details_window_cp01

0x2fe1,	// (0x00070bcb) popup_toobar_trans_pane_cp01_ParamLimits

0x2fe1,	// (0x00070bcb) popup_toobar_trans_pane_cp01

0x37a8,	// (0x00071392) popup_image_details_window_ParamLimits

0x37a8,	// (0x00071392) popup_image_details_window

0xc87a,	// (0x0007a464) popup_image_focus_window

0x3c0f,	// (0x000717f9) camera2_autofocus_pane_ParamLimits

0x3c0f,	// (0x000717f9) camera2_autofocus_pane

0x95b5,	// (0x0007719f) bg_popup_sub_pane_cp06

0xcd9f,	// (0x0007a989) popup_image_focus_window_g1

0xcda7,	// (0x0007a991) popup_image_focus_window_g2

0xcdaf,	// (0x0007a999) popup_image_focus_window_g3

0xcdb7,	// (0x0007a9a1) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x0007d2ec) popup_image_focus_window_g

0xcdbf,	// (0x0007a9a9) popup_image_focus_window_t1

0xcdd5,	// (0x0007a9bf) popup_image_focus_window_t2

0xcde5,	// (0x0007a9cf) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x0007d2f5) popup_image_focus_window_t

0xcdf3,	// (0x0007a9dd) camera2_autofocus_pane_g1

0x960e,	// (0x000771f8) bg_tb_trans_pane_cp01

0xce01,	// (0x0007a9eb) popup_image_details_window_g1

0xce14,	// (0x0007a9fe) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x0007d307) popup_image_details_window_g

0xce3d,	// (0x0007aa27) popup_image_details_window_t1

0xce4f,	// (0x0007aa39) popup_image_details_window_t2

0xce68,	// (0x0007aa52) popup_image_details_window_t3

0xce7c,	// (0x0007aa66) popup_image_details_window_t4

0xce97,	// (0x0007aa81) popup_image_details_window_t5

0x0004,

0xf724,	// (0x0007d30e) popup_image_details_window_t

0xa8a7,	// (0x00078491) bg_calc_paper_pane_ParamLimits

0x9cec,	// (0x000778d6) grid_highlight_pane_cp013

0x9cf6,	// (0x000778e0) list_calc_pane_ParamLimits

0x9d08,	// (0x000778f2) scroll_pane_cp024

0xa8bb,	// (0x000784a5) bg_calc_display_pane_ParamLimits

0x028d,	// (0x0006de77) calc_display_pane_t1_ParamLimits

0x029f,	// (0x0006de89) calc_display_pane_t2_ParamLimits

0x9d10,	// (0x000778fa) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0007cd3e) calc_display_pane_t_ParamLimits

0x0368,	// (0x0006df52) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0007cd5b) cell_calc_pane_g

0x0371,	// (0x0006df5b) cell_calc_pane_t1

0xa91a,	// (0x00078504) grid_highlight_pane_cp02_ParamLimits

0xa930,	// (0x0007851a) toolbar_button_pane_cp01_ParamLimits

0xa930,	// (0x0007851a) toolbar_button_pane_cp01

0xb69e,	// (0x00079288) temp_image_control_pane_ParamLimits

0xb69e,	// (0x00079288) temp_image_control_pane

0x960e,	// (0x000771f8) main_mp3_pane

0xceb1,	// (0x0007aa9b) temp_image_control_pane_g1_ParamLimits

0xceb1,	// (0x0007aa9b) temp_image_control_pane_g1

0xcebf,	// (0x0007aaa9) temp_image_control_pane_g2_ParamLimits

0xcebf,	// (0x0007aaa9) temp_image_control_pane_g2

0xced1,	// (0x0007aabb) temp_image_control_pane_g3_ParamLimits

0xced1,	// (0x0007aabb) temp_image_control_pane_g3

0x443e,	// (0x00072028) temp_image_control_pane_g4_ParamLimits

0x443e,	// (0x00072028) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x0007d319) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x0007d319) temp_image_control_pane_g

0xceb1,	// (0x0007aa9b) main_mp3_pane_g1

0x4451,	// (0x0007203b) main_mp3_pane_g2

0x0007,

0xf738,	// (0x0007d322) main_mp3_pane_g

0xcf14,	// (0x0007aafe) main_mp3_pane_t1

0xaa8f,	// (0x00078679) main_camera_pane_g8_ParamLimits

0xaa8f,	// (0x00078679) main_camera_pane_g8

0x0eff,	// (0x0006eae9) main_video_pane_g7_ParamLimits

0x0eff,	// (0x0006eae9) main_video_pane_g7

0x9f26,	// (0x00077b10) main_camera2_pane_t7_ParamLimits

0x9f26,	// (0x00077b10) main_camera2_pane_t7

0xabdb,	// (0x000787c5) scroll_pane_cp025_ParamLimits

0xabdb,	// (0x000787c5) scroll_pane_cp025

0xabef,	// (0x000787d9) scroll_pane_cp026_ParamLimits

0xabef,	// (0x000787d9) scroll_pane_cp026

0xabfe,	// (0x000787e8) wml_content_pane_ParamLimits

0x95b5,	// (0x0007719f) main_touch_calib_pane

0x4523,	// (0x0007210d) main_touch_calib_pane_g1

0x4535,	// (0x0007211f) main_touch_calib_pane_g2

0x4547,	// (0x00072131) main_touch_calib_pane_g3

0x4559,	// (0x00072143) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x0007d340) main_touch_calib_pane_g

0x456b,	// (0x00072155) main_touch_calib_pane_t1

0x4585,	// (0x0007216f) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x0007d349) main_touch_calib_pane_t

0xb2fe,	// (0x00078ee8) mup_progress_pane_cp02

0xb31d,	// (0x00078f07) navi_pane_g1

0xb37f,	// (0x00078f69) navi_pane_mp_t3

0x960e,	// (0x000771f8) main_mp3_pane_ParamLimits

0x3977,	// (0x00071561) navi_pane_ParamLimits

0xceb1,	// (0x0007aa9b) main_mp3_pane_g1_ParamLimits

0x4451,	// (0x0007203b) main_mp3_pane_g2_ParamLimits

0x445d,	// (0x00072047) main_mp3_pane_g3_ParamLimits

0x445d,	// (0x00072047) main_mp3_pane_g3

0x446b,	// (0x00072055) main_mp3_pane_g4_ParamLimits

0x446b,	// (0x00072055) main_mp3_pane_g4

0xcee1,	// (0x0007aacb) main_mp3_pane_g5_ParamLimits

0xcee1,	// (0x0007aacb) main_mp3_pane_g5

0xceef,	// (0x0007aad9) main_mp3_pane_g6_ParamLimits

0xceef,	// (0x0007aad9) main_mp3_pane_g6

0xcefc,	// (0x0007aae6) main_mp3_pane_g7_ParamLimits

0xcefc,	// (0x0007aae6) main_mp3_pane_g7

0xcf08,	// (0x0007aaf2) main_mp3_pane_g8_ParamLimits

0xcf08,	// (0x0007aaf2) main_mp3_pane_g8

0xf738,	// (0x0007d322) main_mp3_pane_g_ParamLimits

0x4477,	// (0x00072061) main_mp3_pane_t2

0x4485,	// (0x0007206f) main_mp3_pane_t3

0xcf22,	// (0x0007ab0c) main_mp3_pane_t4

0xcf30,	// (0x0007ab1a) main_mp3_pane_t5

0x0005,

0xf749,	// (0x0007d333) main_mp3_pane_t

0xcf3e,	// (0x0007ab28) mup_progress_pane_cp01

0xf0c5,	// (0x0007ccaf) aid_zoom_text_secondary2

0xcd2c,	// (0x0007a916) list_cale_ev2_pane

0xcd34,	// (0x0007a91e) scroll_pane_cp023_ParamLimits

0x45df,	// (0x000721c9) field_cale_ev2_pane_ParamLimits

0x45df,	// (0x000721c9) field_cale_ev2_pane

0x4603,	// (0x000721ed) field_cale_ev2_pane_g1_ParamLimits

0x4603,	// (0x000721ed) field_cale_ev2_pane_g1

0x460f,	// (0x000721f9) field_cale_ev2_pane_g2_ParamLimits

0x460f,	// (0x000721f9) field_cale_ev2_pane_g2

0x4627,	// (0x00072211) field_cale_ev2_pane_g3_ParamLimits

0x4627,	// (0x00072211) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x0007d354) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x0007d354) field_cale_ev2_pane_g

0x463f,	// (0x00072229) field_cale_ev2_pane_t1_ParamLimits

0x463f,	// (0x00072229) field_cale_ev2_pane_t1

0x4656,	// (0x00072240) field_cale_ev2_pane_t2_ParamLimits

0x4656,	// (0x00072240) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x0007d35d) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x0007d35d) field_cale_ev2_pane_t

0x2df8,	// (0x000709e2) main_postcard_pane_g5_ParamLimits

0x2df8,	// (0x000709e2) main_postcard_pane_g5

0x2e0e,	// (0x000709f8) main_postcard_pane_g6_ParamLimits

0x2e0e,	// (0x000709f8) main_postcard_pane_g6

0x0cab,	// (0x0006e895) camera2_autofocus_pane_cp_ParamLimits

0x0cab,	// (0x0006e895) camera2_autofocus_pane_cp

0x960e,	// (0x000771f8) main_mup3_pane

0x468b,	// (0x00072275) main_mup3_pane_g1_ParamLimits

0x468b,	// (0x00072275) main_mup3_pane_g1

0x46ad,	// (0x00072297) main_mup3_pane_g2_ParamLimits

0x46ad,	// (0x00072297) main_mup3_pane_g2

0x4730,	// (0x0007231a) main_mup3_pane_g3_ParamLimits

0x4730,	// (0x0007231a) main_mup3_pane_g3

0x4778,	// (0x00072362) main_mup3_pane_g4_ParamLimits

0x4778,	// (0x00072362) main_mup3_pane_g4

0x47be,	// (0x000723a8) main_mup3_pane_g5_ParamLimits

0x47be,	// (0x000723a8) main_mup3_pane_g5

0x4806,	// (0x000723f0) main_mup3_pane_g6_ParamLimits

0x4806,	// (0x000723f0) main_mup3_pane_g6

0xcf46,	// (0x0007ab30) main_mup3_pane_g7_ParamLimits

0xcf46,	// (0x0007ab30) main_mup3_pane_g7

0x0007,

0xf783,	// (0x0007d36d) main_mup3_pane_g_ParamLimits

0xf783,	// (0x0007d36d) main_mup3_pane_g

0x4886,	// (0x00072470) main_mup3_pane_t1_ParamLimits

0x4886,	// (0x00072470) main_mup3_pane_t1

0x48f4,	// (0x000724de) main_mup3_pane_t2_ParamLimits

0x48f4,	// (0x000724de) main_mup3_pane_t2

0x49ca,	// (0x000725b4) main_mup3_pane_t4_ParamLimits

0x49ca,	// (0x000725b4) main_mup3_pane_t4

0x4a28,	// (0x00072612) main_mup3_pane_t5_ParamLimits

0x4a28,	// (0x00072612) main_mup3_pane_t5

0x4ae2,	// (0x000726cc) main_mup3_pane_t6_ParamLimits

0x4ae2,	// (0x000726cc) main_mup3_pane_t6

0x0005,

0xf794,	// (0x0007d37e) main_mup3_pane_t_ParamLimits

0xf794,	// (0x0007d37e) main_mup3_pane_t

0x4b9a,	// (0x00072784) mup3_progress_pane_ParamLimits

0x4b9a,	// (0x00072784) mup3_progress_pane

0x4c2c,	// (0x00072816) popup_mup3_control_window_ParamLimits

0x4c2c,	// (0x00072816) popup_mup3_control_window

0xcf54,	// (0x0007ab3e) popup_mup3_text_window

0x4c62,	// (0x0007284c) mup3_progress_pane_t1

0x4c80,	// (0x0007286a) mup3_progress_pane_t2

0xcf5c,	// (0x0007ab46) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x0007d38b) mup3_progress_pane_t

0xcf79,	// (0x0007ab63) mup_progress_pane_cp03

0x95b5,	// (0x0007719f) bg_tb_trans_pane_cp04

0x4c9e,	// (0x00072888) mup3_volume_pane

0x4ca6,	// (0x00072890) popup_mup3_control_window_g1

0x4caf,	// (0x00072899) mup3_volume_pane_g1

0x4cb8,	// (0x000728a2) mup3_volume_pane_g2

0x4cc1,	// (0x000728ab) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x0007d392) mup3_volume_pane_g

0x95b5,	// (0x0007719f) bg_tb_trans_pane_cp03

0xcf89,	// (0x0007ab73) popup_mup3_text_window_g1

0xcf91,	// (0x0007ab7b) popup_mup3_text_window_t1

0xa903,	// (0x000784ed) list_calc_item_pane_g1_ParamLimits

0xc9f6,	// (0x0007a5e0) mup_volume_pane_cp_g1

0x459f,	// (0x00072189) main_touch_calib_pane_t3

0x45b3,	// (0x0007219d) main_touch_calib_pane_t4

0x45c9,	// (0x000721b3) main_touch_calib_pane_t5

0x95bf,	// (0x000771a9) aid_cell_size_toolbar2

0x95c7,	// (0x000771b1) aid_popup3_width_pane

0xfd28,	// (0x0006d912) aid_zoom_text_msg_primary

0x0c80,	// (0x0006e86a) vorec_t7

0xa8c7,	// (0x000784b1) bg_calc_paper_pane_g1_ParamLimits

0xa8d3,	// (0x000784bd) bg_calc_paper_pane_g2_ParamLimits

0xa8df,	// (0x000784c9) bg_calc_paper_pane_g3_ParamLimits

0xa8eb,	// (0x000784d5) bg_calc_paper_pane_g4_ParamLimits

0xa8f7,	// (0x000784e1) bg_calc_paper_pane_g5_ParamLimits

0x02ee,	// (0x0006ded8) bg_calc_paper_pane_g6_ParamLimits

0x0301,	// (0x0006deeb) bg_calc_paper_pane_g7_ParamLimits

0x0314,	// (0x0006defe) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0007cd45) bg_calc_paper_pane_g_ParamLimits

0x0325,	// (0x0006df0f) calc_bg_paper_pane_g9_ParamLimits

0x0e0d,	// (0x0006e9f7) image_qvga_pane_ParamLimits

0x0e0d,	// (0x0006e9f7) image_qvga_pane

0x9c8a,	// (0x00077874) bg_popup_sub_pane_cp04_ParamLimits

0xb5d5,	// (0x000791bf) popup_mup_playback_window_g1_ParamLimits

0xb5e1,	// (0x000791cb) popup_mup_playback_window_t1_ParamLimits

0xb5f6,	// (0x000791e0) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x0007d0d1) popup_mup_playback_window_t_ParamLimits

0x4093,	// (0x00071c7d) main_mup2_pane_g3_ParamLimits

0x4093,	// (0x00071c7d) main_mup2_pane_g3

0x11ef,	// (0x0006edd9) popup_toolbar_window_cp04

0xb9f1,	// (0x000795db) popup_call2_audio_second_window_g3_ParamLimits

0xb9f1,	// (0x000795db) popup_call2_audio_second_window_g3

0xbe68,	// (0x00079a52) popup_call2_audio_first_window_g4_ParamLimits

0xbe68,	// (0x00079a52) popup_call2_audio_first_window_g4

0xc4e7,	// (0x0007a0d1) popup_call2_audio_in_window_g4_ParamLimits

0xc4e7,	// (0x0007a0d1) popup_call2_audio_in_window_g4

0x2f3d,	// (0x00070b27) aid_area_sk_bg_cut_ParamLimits

0x2f3d,	// (0x00070b27) aid_area_sk_bg_cut

0xb60b,	// (0x000791f5) aid_area_sk_bg_cut_2_ParamLimits

0xb60b,	// (0x000791f5) aid_area_sk_bg_cut_2

0x439f,	// (0x00071f89) aid_placing_details_win

0x43a7,	// (0x00071f91) aid_placing_details_win_2

0xcdf3,	// (0x0007a9dd) camera2_autofocus_pane_g1_ParamLimits

0xfed1,	// (0x0006dabb) popup_fixed_preview_cale_window_ParamLimits

0xfed1,	// (0x0006dabb) popup_fixed_preview_cale_window

0xb3ce,	// (0x00078fb8) navi_slider_pane_g3

0xb3d7,	// (0x00078fc1) navi_slider_pane_g4

0xb3e0,	// (0x00078fca) navi_slider_pane_g5

0xb3ce,	// (0x00078fb8) navi_slider_pane_g6

0x9e68,	// (0x00077a52) navi_slider_pane_g7

0xb503,	// (0x000790ed) mup_scale_pane_g3

0xb50c,	// (0x000790f6) mup_scale_pane_g4

0xb515,	// (0x000790ff) mup_scale_pane_g5

0x2c05,	// (0x000707ef) mup_scale_pane_g6

0x2c0e,	// (0x000707f8) mup_scale_pane_g7

0xb3ce,	// (0x00078fb8) cams2_slider_pane_g3

0xca78,	// (0x0007a662) cams2_slider_pane_g4

0x9f8c,	// (0x00077b76) cams2_slider_pane_g5

0xb3ce,	// (0x00078fb8) cams2_slider_pane_g6

0x9f94,	// (0x00077b7e) cams2_slider_pane_g7

0xcca9,	// (0x0007a893) camera2_autofocus_pane_cp_g1

0xc84c,	// (0x0007a436) bg_popup_preview_window_pane_cp02_ParamLimits

0xc84c,	// (0x0007a436) bg_popup_preview_window_pane_cp02

0xcf9f,	// (0x0007ab89) list_fp_cale_pane_ParamLimits

0xcf9f,	// (0x0007ab89) list_fp_cale_pane

0xcfab,	// (0x0007ab95) popup_fixed_preview_cale_window_t1_ParamLimits

0xcfab,	// (0x0007ab95) popup_fixed_preview_cale_window_t1

0x4cca,	// (0x000728b4) popup_fixed_preview_cale_window_t2_ParamLimits

0x4cca,	// (0x000728b4) popup_fixed_preview_cale_window_t2

0x4cdf,	// (0x000728c9) popup_fixed_preview_cale_window_t3_ParamLimits

0x4cdf,	// (0x000728c9) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x0007d399) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x0007d399) popup_fixed_preview_cale_window_t

0x4cf4,	// (0x000728de) list_single_fp_cale_pane_ParamLimits

0x4cf4,	// (0x000728de) list_single_fp_cale_pane

0xcfc9,	// (0x0007abb3) list_single_fp_cale_pane_g1_ParamLimits

0xcfc9,	// (0x0007abb3) list_single_fp_cale_pane_g1

0xcfd5,	// (0x0007abbf) list_single_fp_cale_pane_g2_ParamLimits

0xcfd5,	// (0x0007abbf) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x0007d3a0) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x0007d3a0) list_single_fp_cale_pane_g

0xcfee,	// (0x0007abd8) list_single_fp_cale_pane_t1_ParamLimits

0xcfee,	// (0x0007abd8) list_single_fp_cale_pane_t1

0xd000,	// (0x0007abea) list_single_fp_cale_pane_t2_ParamLimits

0xd000,	// (0x0007abea) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x0007d3a7) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x0007d3a7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x95b5,	// (0x0007719f) main_dialer_pane

0x4d09,	// (0x000728f3) aid_cell_size_keypad

0x4d13,	// (0x000728fd) dialer_ne_pane

0x4d1d,	// (0x00072907) grid_dialer_command_1_pane

0x4d25,	// (0x0007290f) grid_dialer_command_2_pane

0x4d2d,	// (0x00072917) grid_dialer_keypad_pane

0x4d3f,	// (0x00072929) bg_popup_call_pane_cp06_ParamLimits

0x4d3f,	// (0x00072929) bg_popup_call_pane_cp06

0x4d4b,	// (0x00072935) dialer_ne_clear_pane_ParamLimits

0x4d4b,	// (0x00072935) dialer_ne_clear_pane

0xd033,	// (0x0007ac1d) dialer_ne_pane_g1

0xd03b,	// (0x0007ac25) dialer_ne_pane_t1_ParamLimits

0xd03b,	// (0x0007ac25) dialer_ne_pane_t1

0x4d57,	// (0x00072941) dialer_ne_pane_t2_ParamLimits

0x4d57,	// (0x00072941) dialer_ne_pane_t2

0x4d81,	// (0x0007296b) dialer_ne_pane_t3_ParamLimits

0x4d81,	// (0x0007296b) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x0007d3ac) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x0007d3ac) dialer_ne_pane_t

0x4db1,	// (0x0007299b) dialer_ne_pane_t3_copy1_ParamLimits

0x4db1,	// (0x0007299b) dialer_ne_pane_t3_copy1

0x4de0,	// (0x000729ca) cell_dialer_keypad_pane_ParamLimits

0x4de0,	// (0x000729ca) cell_dialer_keypad_pane

0x4df7,	// (0x000729e1) cell_dialer_command_1_pane_ParamLimits

0x4df7,	// (0x000729e1) cell_dialer_command_1_pane

0x4e0d,	// (0x000729f7) cell_dialer_command_2_pane_ParamLimits

0x4e0d,	// (0x000729f7) cell_dialer_command_2_pane

0xd04d,	// (0x0007ac37) bg_button_pane_cp02_ParamLimits

0xd04d,	// (0x0007ac37) bg_button_pane_cp02

0x4e1c,	// (0x00072a06) cell_dialer_keypad_pane_g1_ParamLimits

0x4e1c,	// (0x00072a06) cell_dialer_keypad_pane_g1

0xd04d,	// (0x0007ac37) bg_button_pane_cp03_ParamLimits

0xd04d,	// (0x0007ac37) bg_button_pane_cp03

0x4e31,	// (0x00072a1b) cell_dialer_command_1_pane_g1_ParamLimits

0x4e31,	// (0x00072a1b) cell_dialer_command_1_pane_g1

0xd059,	// (0x0007ac43) bg_button_pane_cp04

0x4e45,	// (0x00072a2f) cell_dialer_command_2_pane_g1

0xb3bd,	// (0x00078fa7) bg_button_pane_cp06

0xd061,	// (0x0007ac4b) dialer_ne_clear_pane_g1

0x26d7,	// (0x000702c1) navi_pane_g2

0x2705,	// (0x000702ef) navi_pane_g3

0x0002,

0xf3ea,	// (0x0007cfd4) navi_pane_g

0x2730,	// (0x0007031a) navi_pane_mv_g2

0x2757,	// (0x00070341) navi_pane_mv_g5

0x275f,	// (0x00070349) navi_pane_mv_t1

0xa8bb,	// (0x000784a5) main_clock2_pane

0x4e90,	// (0x00072a7a) main_clock2_list_pane_ParamLimits

0x4e90,	// (0x00072a7a) main_clock2_list_pane

0x4ec8,	// (0x00072ab2) main_clock2_pane_t1_ParamLimits

0x4ec8,	// (0x00072ab2) main_clock2_pane_t1

0x4f04,	// (0x00072aee) main_clock2_pane_t2_ParamLimits

0x4f04,	// (0x00072aee) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0007d3b3) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0007d3b3) main_clock2_pane_t

0x4fa4,	// (0x00072b8e) popup_clock_analogue_window_cp03_ParamLimits

0x4fa4,	// (0x00072b8e) popup_clock_analogue_window_cp03

0x4fcb,	// (0x00072bb5) popup_clock_digital_window_cp02_ParamLimits

0x4fcb,	// (0x00072bb5) popup_clock_digital_window_cp02

0x5044,	// (0x00072c2e) main_clock2_list_single_pane_ParamLimits

0x5044,	// (0x00072c2e) main_clock2_list_single_pane

0xb3bd,	// (0x00078fa7) list_highlight_pane_cp05

0xd07d,	// (0x0007ac67) main_clock2_list_single_pane_t1

0x11ef,	// (0x0006edd9) popup_toolbar_window_cp04_ParamLimits

0x440e,	// (0x00071ff8) camera2_autofocus_pane_g2_ParamLimits

0x440e,	// (0x00071ff8) camera2_autofocus_pane_g2

0x441a,	// (0x00072004) camera2_autofocus_pane_g3_ParamLimits

0x441a,	// (0x00072004) camera2_autofocus_pane_g3

0x4426,	// (0x00072010) camera2_autofocus_pane_g4_ParamLimits

0x4426,	// (0x00072010) camera2_autofocus_pane_g4

0x4432,	// (0x0007201c) camera2_autofocus_pane_g5_ParamLimits

0x4432,	// (0x0007201c) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x0007d2fc) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x0007d2fc) camera2_autofocus_pane_g

0x466b,	// (0x00072255) camera2_autofocus_pane_cp_g2

0x4673,	// (0x0007225d) camera2_autofocus_pane_cp_g3

0x467b,	// (0x00072265) camera2_autofocus_pane_cp_g4

0x4683,	// (0x0007226d) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x0007d362) camera2_autofocus_pane_cp_g

0x4d37,	// (0x00072921) popup_dialer_spcha_window

0x95b5,	// (0x0007719f) bg_popup_sub_pane_cp07

0xd08b,	// (0x0007ac75) list_spcha_pane

0xd093,	// (0x0007ac7d) list_single_spcha_pane_ParamLimits

0xd093,	// (0x0007ac7d) list_single_spcha_pane

0x95b5,	// (0x0007719f) list_highlight_pane_cp06

0xd0a4,	// (0x0007ac8e) list_single_spcha_pane_t1

0xc291,	// (0x00079e7b) popup_call2_audio_out_window_g4_ParamLimits

0xc291,	// (0x00079e7b) popup_call2_audio_out_window_g4

0x95b5,	// (0x0007719f) main_imed2_pane

0xc884,	// (0x0007a46e) popup_imed_adjust2_window

0x37c0,	// (0x000713aa) popup_imed_trans_window_ParamLimits

0x37c0,	// (0x000713aa) popup_imed_trans_window

0xcae1,	// (0x0007a6cb) popup_blid_sat_info2_window_t1

0xcaef,	// (0x0007a6d9) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x0007d291) popup_blid_sat_info2_window_t

0x50fa,	// (0x00072ce4) aid_size_cell_colour_35

0x511a,	// (0x00072d04) aid_size_cell_colour_112

0x513a,	// (0x00072d24) aid_size_cell_effect

0xc858,	// (0x0007a442) bg_tb_trans_pane_cp02

0xaf1d,	// (0x00078b07) heading_imed_pane

0x515a,	// (0x00072d44) listscroll_imed_pane

0xd0b2,	// (0x0007ac9c) heading_imed_pane_g1

0xd0ba,	// (0x0007aca4) heading_imed_pane_t1

0xd0c8,	// (0x0007acb2) grid_imed_colour_35_pane_ParamLimits

0xd0c8,	// (0x0007acb2) grid_imed_colour_35_pane

0x5166,	// (0x00072d50) grid_imed_effect_pane

0xd0e4,	// (0x0007acce) list_imed_aspect_pane

0x517b,	// (0x00072d65) scroll_pane_cp027_ParamLimits

0x517b,	// (0x00072d65) scroll_pane_cp027

0x518c,	// (0x00072d76) cell_imed_effect_pane_ParamLimits

0x518c,	// (0x00072d76) cell_imed_effect_pane

0xd0ec,	// (0x0007acd6) cell_imed_colour_pane_ParamLimits

0xd0ec,	// (0x0007acd6) cell_imed_colour_pane

0xd136,	// (0x0007ad20) cell_imed_colour_pane_g1_ParamLimits

0xd136,	// (0x0007ad20) cell_imed_colour_pane_g1

0xd147,	// (0x0007ad31) hgihlgiht_grid_pane_cp016_ParamLimits

0xd147,	// (0x0007ad31) hgihlgiht_grid_pane_cp016

0x51b7,	// (0x00072da1) cell_imed_effect_pane_g1

0x51bf,	// (0x00072da9) grid_highlight_pane_cp017

0xd158,	// (0x0007ad42) list_imed_single_pane_ParamLimits

0xd158,	// (0x0007ad42) list_imed_single_pane

0x95b5,	// (0x0007719f) list_highlight_pane_cp07

0xd16c,	// (0x0007ad56) list_imed_aspect_pane_comp1_t1

0xc858,	// (0x0007a442) bg_tb_trans_pane_cp05

0xd18e,	// (0x0007ad78) popup_imed_adjust2_window_g1

0xd1b5,	// (0x0007ad9f) popup_imed_adjust2_window_t1

0xd1cd,	// (0x0007adb7) slider_imed_adjust_pane

0xd1e1,	// (0x0007adcb) slider_imed_adjust_pane_g1

0xd1f1,	// (0x0007addb) slider_imed_adjust_pane_g2

0xd201,	// (0x0007adeb) slider_imed_adjust_pane_g3

0xd212,	// (0x0007adfc) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0007d3d0) slider_imed_adjust_pane_g

0x51c8,	// (0x00072db2) aid_size_cell_clipart2

0x51d4,	// (0x00072dbe) grid_imed_clipart_pane

0xd223,	// (0x0007ae0d) scroll_pane_cp031

0x51de,	// (0x00072dc8) cell_imed_clipart_pane_ParamLimits

0x51de,	// (0x00072dc8) cell_imed_clipart_pane

0x51fb,	// (0x00072de5) cell_imed_clipart_pane_g1

0x95b5,	// (0x0007719f) grid_highlight_pane_cp014

0x4ea5,	// (0x00072a8f) main_clock2_pane_g1_ParamLimits

0x4ea5,	// (0x00072a8f) main_clock2_pane_g1

0x4feb,	// (0x00072bd5) aid_call2_pane_cp10

0x4ffd,	// (0x00072be7) aid_call_pane_cp10

0xb2f2,	// (0x00078edc) popup_clock_analogue_window_cp10_g1

0xb2f2,	// (0x00078edc) popup_clock_analogue_window_cp10_g2

0x500f,	// (0x00072bf9) popup_clock_analogue_window_cp10_g3

0x500f,	// (0x00072bf9) popup_clock_analogue_window_cp10_g4

0xb2f2,	// (0x00078edc) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0007d3be) popup_clock_analogue_window_cp10_g

0x5025,	// (0x00072c0f) popup_clock_analogue_window_cp10_t1

0x5056,	// (0x00072c40) clock_digital_number_pane_cp10_ParamLimits

0x5056,	// (0x00072c40) clock_digital_number_pane_cp10

0x5070,	// (0x00072c5a) clock_digital_number_pane_cp11_ParamLimits

0x5070,	// (0x00072c5a) clock_digital_number_pane_cp11

0x508a,	// (0x00072c74) clock_digital_number_pane_cp12_ParamLimits

0x508a,	// (0x00072c74) clock_digital_number_pane_cp12

0x50a4,	// (0x00072c8e) clock_digital_number_pane_cp13_ParamLimits

0x50a4,	// (0x00072c8e) clock_digital_number_pane_cp13

0x50be,	// (0x00072ca8) clock_digital_separator_pane_cp10_ParamLimits

0x50be,	// (0x00072ca8) clock_digital_separator_pane_cp10

0x50d8,	// (0x00072cc2) popup_clock_digital_window_cp02_t1_ParamLimits

0x50d8,	// (0x00072cc2) popup_clock_digital_window_cp02_t1

0x9c82,	// (0x0007786c) clock_digital_number_pane_cp10_g1

0x9c82,	// (0x0007786c) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0007d3d9) clock_digital_number_pane_cp10_g

0x9c82,	// (0x0007786c) clock_digital_separator_pane_cp10_g1

0x9c82,	// (0x0007786c) clock_digital_separator_pane_g2_cp10

0xb38d,	// (0x00078f77) navi_pane_vded_g4

0xb396,	// (0x00078f80) navi_pane_vded_g5

0xb39f,	// (0x00078f89) navi_pane_vded_t1

0x95b5,	// (0x0007719f) main_vded_pane

0x5204,	// (0x00072dee) main_vded_pane_g1

0x5210,	// (0x00072dfa) main_vded_pane_g2

0x521c,	// (0x00072e06) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0007d3de) main_vded_pane_g

0x5228,	// (0x00072e12) main_vded_pane_t1

0x5236,	// (0x00072e20) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0007d3e5) main_vded_pane_t

0x5244,	// (0x00072e2e) vded_slider_pane

0x524e,	// (0x00072e38) vded_video_pane

0xd22b,	// (0x0007ae15) vded_video_pane_g1

0x5258,	// (0x00072e42) vded_video_pane_g2

0xcca9,	// (0x0007a893) vded_video_pane_g3

0x0002,

0xf800,	// (0x0007d3ea) vded_video_pane_g

0xd235,	// (0x0007ae1f) vded_slider_pane_g1

0xc9f6,	// (0x0007a5e0) vded_slider_pane_g2

0xd23e,	// (0x0007ae28) vded_slider_pane_g3

0xd247,	// (0x0007ae31) vded_slider_pane_g4

0xd250,	// (0x0007ae3a) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0007d3f1) vded_slider_pane_g

0x4c16,	// (0x00072800) mup3_rocker_pane_ParamLimits

0x4c16,	// (0x00072800) mup3_rocker_pane

0x5261,	// (0x00072e4b) mup3_control_keys_pane_g1

0x5269,	// (0x00072e53) mup3_control_keys_pane_g2

0x5271,	// (0x00072e5b) mup3_control_keys_pane_g3

0x5279,	// (0x00072e63) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0007d3fc) mup3_control_keys_pane_g

0xff08,	// (0x0006daf2) popup_toolbar2_fixed_window_cp01_ParamLimits

0xff08,	// (0x0006daf2) popup_toolbar2_fixed_window_cp01

0x4c4c,	// (0x00072836) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4c4c,	// (0x00072836) popup_toolbar2_fixed_window_cp02

0xbbd0,	// (0x000797ba) popup_call2_audio_second_window_t4_ParamLimits

0xbbd0,	// (0x000797ba) popup_call2_audio_second_window_t4

0xc0fe,	// (0x00079ce8) popup_call2_audio_first_window_t6_ParamLimits

0xc0fe,	// (0x00079ce8) popup_call2_audio_first_window_t6

0xc394,	// (0x00079f7e) popup_call2_audio_out_window_t6_ParamLimits

0xc394,	// (0x00079f7e) popup_call2_audio_out_window_t6

0x95b5,	// (0x0007719f) main_vitu_pane

0x5289,	// (0x00072e73) aid_size_cell_itu_ParamLimits

0x5289,	// (0x00072e73) aid_size_cell_itu

0x960e,	// (0x000771f8) bg_popup_window_pane_cp08_ParamLimits

0x960e,	// (0x000771f8) bg_popup_window_pane_cp08

0x529f,	// (0x00072e89) field_vitu_entry_pane_ParamLimits

0x529f,	// (0x00072e89) field_vitu_entry_pane

0x52b6,	// (0x00072ea0) grid_vitu_function_pane_ParamLimits

0x52b6,	// (0x00072ea0) grid_vitu_function_pane

0x52d1,	// (0x00072ebb) grid_vitu_itu_pane_ParamLimits

0x52d1,	// (0x00072ebb) grid_vitu_itu_pane

0x52ef,	// (0x00072ed9) cell_vitu_itu_pane_ParamLimits

0x52ef,	// (0x00072ed9) cell_vitu_itu_pane

0x5315,	// (0x00072eff) cell_vitu_function_pane_ParamLimits

0x5315,	// (0x00072eff) cell_vitu_function_pane

0x960e,	// (0x000771f8) bg_popup_sub_pane_cp08_ParamLimits

0x960e,	// (0x000771f8) bg_popup_sub_pane_cp08

0x5330,	// (0x00072f1a) field_vitu_entry_pane_t1_ParamLimits

0x5330,	// (0x00072f1a) field_vitu_entry_pane_t1

0xd271,	// (0x0007ae5b) field_vitu_entry_pane_t2_ParamLimits

0xd271,	// (0x0007ae5b) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0007d40a) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0007d40a) field_vitu_entry_pane_t

0xd28e,	// (0x0007ae78) bg_button_pane_cp05_ParamLimits

0xd28e,	// (0x0007ae78) bg_button_pane_cp05

0x5350,	// (0x00072f3a) cell_vitu_itu_pane_g1

0x5368,	// (0x00072f52) cell_vitu_itu_pane_t1_ParamLimits

0x5368,	// (0x00072f52) cell_vitu_itu_pane_t1

0x537a,	// (0x00072f64) cell_vitu_itu_pane_t2_ParamLimits

0x537a,	// (0x00072f64) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0007d40f) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0007d40f) cell_vitu_itu_pane_t

0xd29c,	// (0x0007ae86) bg_button_pane_cp07

0x53af,	// (0x00072f99) cell_vitu_function_pane_g1

0x9ce4,	// (0x000778ce) main_calc_pane_g1

0xfd1c,	// (0x0006d906) aid_visual_content_pane

0x95b5,	// (0x0007719f) main_vradio_pane

0x53b8,	// (0x00072fa2) main_vradio_pane_g1_ParamLimits

0x53b8,	// (0x00072fa2) main_vradio_pane_g1

0xd2a6,	// (0x0007ae90) main_vradio_pane_g2_ParamLimits

0xd2a6,	// (0x0007ae90) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0007d416) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0007d416) main_vradio_pane_g

0x53cf,	// (0x00072fb9) main_vradio_pane_t1_ParamLimits

0x53cf,	// (0x00072fb9) main_vradio_pane_t1

0x53e4,	// (0x00072fce) main_vradio_pane_t2_ParamLimits

0x53e4,	// (0x00072fce) main_vradio_pane_t2

0xd2b3,	// (0x0007ae9d) main_vradio_pane_t3_ParamLimits

0xd2b3,	// (0x0007ae9d) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0007d41b) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0007d41b) main_vradio_pane_t

0x53f9,	// (0x00072fe3) vradio_rocker_control_pane_ParamLimits

0x53f9,	// (0x00072fe3) vradio_rocker_control_pane

0x540b,	// (0x00072ff5) vradio_station_info_pane_ParamLimits

0x540b,	// (0x00072ff5) vradio_station_info_pane

0xd2c7,	// (0x0007aeb1) vradio_frequency_info_pane_ParamLimits

0xd2c7,	// (0x0007aeb1) vradio_frequency_info_pane

0xcca9,	// (0x0007a893) vradio_station_info_pane_g1

0xd2d6,	// (0x0007aec0) vradio_station_info_pane_t1_ParamLimits

0xd2d6,	// (0x0007aec0) vradio_station_info_pane_t1

0xd2f8,	// (0x0007aee2) vradio_station_info_pane_t2_ParamLimits

0xd2f8,	// (0x0007aee2) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0007d422) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0007d422) vradio_station_info_pane_t

0xd30a,	// (0x0007aef4) vradio_tuning_pane

0xd312,	// (0x0007aefc) vradio_rocker_control_pane_g1

0xd31a,	// (0x0007af04) vradio_rocker_control_pane_g2

0xd322,	// (0x0007af0c) vradio_rocker_control_pane_g3

0xd32a,	// (0x0007af14) vradio_rocker_control_pane_g4

0xd332,	// (0x0007af1c) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0007d427) vradio_rocker_control_pane_g

0x541b,	// (0x00073005) vradio_frequency_info_pane_g1

0xd33a,	// (0x0007af24) vradio_frequency_info_pane_t1_ParamLimits

0xd33a,	// (0x0007af24) vradio_frequency_info_pane_t1

0x5425,	// (0x0007300f) vradio_tuning_pane_g1

0x5430,	// (0x0007301a) vradio_tuning_pane_t1

0x95db,	// (0x000771c5) area_side_right_pane_ParamLimits

0x95db,	// (0x000771c5) area_side_right_pane

0xc813,	// (0x0007a3fd) status_small_pane_g1

0xc81b,	// (0x0007a405) status_small_pane_g2

0xc824,	// (0x0007a40e) status_small_pane_g3

0xc82d,	// (0x0007a417) status_small_pane_g4

0x0003,

0xf5fd,	// (0x0007d1e7) status_small_pane_g

0xc836,	// (0x0007a420) status_small_pane_t1

0x95b5,	// (0x0007719f) main_video3_pane

0xd34e,	// (0x0007af38) cams_zoom_vslider_pane

0xd356,	// (0x0007af40) image3_wide_pane_ParamLimits

0xd356,	// (0x0007af40) image3_wide_pane

0xd370,	// (0x0007af5a) image3_wide_small_pane

0xd37c,	// (0x0007af66) main_video3_pane_g1_ParamLimits

0xd37c,	// (0x0007af66) main_video3_pane_g1

0xd398,	// (0x0007af82) main_video3_pane_g2_ParamLimits

0xd398,	// (0x0007af82) main_video3_pane_g2

0x0001,

0xf848,	// (0x0007d432) main_video3_pane_g_ParamLimits

0xf848,	// (0x0007d432) main_video3_pane_g

0xd3b4,	// (0x0007af9e) main_video3_pane_t1_ParamLimits

0xd3b4,	// (0x0007af9e) main_video3_pane_t1

0xd3df,	// (0x0007afc9) main_video3_pane_t2_ParamLimits

0xd3df,	// (0x0007afc9) main_video3_pane_t2

0xd40c,	// (0x0007aff6) main_video3_pane_t3_ParamLimits

0xd40c,	// (0x0007aff6) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0007d437) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0007d437) main_video3_pane_t

0xd439,	// (0x0007b023) cams_zoom_vslider_pane_g1

0xd442,	// (0x0007b02c) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0007d43e) cams_zoom_vslider_pane_g

0xd44a,	// (0x0007b034) small_slider_vertical_pane

0xcca9,	// (0x0007a893) small_slider_vertical_pane_g1

0xcca9,	// (0x0007a893) small_slider_vertical_pane_g2

0xd452,	// (0x0007b03c) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0007d443) small_slider_vertical_pane_g

0x95b5,	// (0x0007719f) main_hwr_training_pane

0xd45b,	// (0x0007b045) hwr_training_instruct_pane_ParamLimits

0xd45b,	// (0x0007b045) hwr_training_instruct_pane

0x543f,	// (0x00073029) hwr_training_navi_pane_ParamLimits

0x543f,	// (0x00073029) hwr_training_navi_pane

0x545e,	// (0x00073048) hwr_training_write_pane_ParamLimits

0x545e,	// (0x00073048) hwr_training_write_pane

0x95b5,	// (0x0007719f) bg_frame_shadow_pane

0xd492,	// (0x0007b07c) hwr_training_write_pane_g1

0xd49a,	// (0x0007b084) hwr_training_write_pane_g2

0xd4a2,	// (0x0007b08c) hwr_training_write_pane_g3

0xd4aa,	// (0x0007b094) hwr_training_write_pane_g4

0xd4b2,	// (0x0007b09c) hwr_training_write_pane_g5

0xd4ba,	// (0x0007b0a4) hwr_training_write_pane_g6

0xd4c2,	// (0x0007b0ac) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0007d44a) hwr_training_write_pane_g

0x9fa9,	// (0x00077b93) hwr_training_navi_pane_g1_ParamLimits

0x9fa9,	// (0x00077b93) hwr_training_navi_pane_g1

0x9fbb,	// (0x00077ba5) hwr_training_navi_pane_g2_ParamLimits

0x9fbb,	// (0x00077ba5) hwr_training_navi_pane_g2

0x9fcd,	// (0x00077bb7) hwr_training_navi_pane_g3_ParamLimits

0x9fcd,	// (0x00077bb7) hwr_training_navi_pane_g3

0x9fdd,	// (0x00077bc7) hwr_training_navi_pane_g4_ParamLimits

0x9fdd,	// (0x00077bc7) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0007d459) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0007d459) hwr_training_navi_pane_g

0x9fea,	// (0x00077bd4) hwr_training_navi_pane_t1

0x54a6,	// (0x00073090) list_single_hwr_training_instruct_pane_ParamLimits

0x54a6,	// (0x00073090) list_single_hwr_training_instruct_pane

0xd4ca,	// (0x0007b0b4) list_single_hwr_training_instruct_pane_t1

0xcbe9,	// (0x0007a7d3) bg_frame_shadow_pane_g1

0xd4d9,	// (0x0007b0c3) bg_frame_shadow_pane_g2

0xd4e1,	// (0x0007b0cb) bg_frame_shadow_pane_g3

0xd4e9,	// (0x0007b0d3) bg_frame_shadow_pane_g4

0xd4f1,	// (0x0007b0db) bg_frame_shadow_pane_g5

0xd4f9,	// (0x0007b0e3) bg_frame_shadow_pane_g6

0xd501,	// (0x0007b0eb) bg_frame_shadow_pane_g7

0xa986,	// (0x00078570) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0007d464) bg_frame_shadow_pane_g

0x95b5,	// (0x0007719f) main_video_tele_dialer_pane

0x54bb,	// (0x000730a5) aid_size_cell_video_keypad_ParamLimits

0x54bb,	// (0x000730a5) aid_size_cell_video_keypad

0x54d5,	// (0x000730bf) grid_video_dialer_keypad_pane_ParamLimits

0x54d5,	// (0x000730bf) grid_video_dialer_keypad_pane

0x5521,	// (0x0007310b) video_down_pane_cp_ParamLimits

0x5521,	// (0x0007310b) video_down_pane_cp

0x5551,	// (0x0007313b) cell_video_dialer_keypad_pane_ParamLimits

0x5551,	// (0x0007313b) cell_video_dialer_keypad_pane

0xd509,	// (0x0007b0f3) bg_button_pane_cp08_ParamLimits

0xd509,	// (0x0007b0f3) bg_button_pane_cp08

0x5575,	// (0x0007315f) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5575,	// (0x0007315f) cell_video_dialer_keypad_pane_g1

0x4c00,	// (0x000727ea) mup3_rocker2_pane_ParamLimits

0x4c00,	// (0x000727ea) mup3_rocker2_pane

0xcca9,	// (0x0007a893) mup3_rocker2_pane_g1

0x368d,	// (0x00071277) main_dialer2_pane

0x95b5,	// (0x0007719f) main_mp4_pane

0xa000,	// (0x00077bea) main_mp4_pane_g1_ParamLimits

0xa000,	// (0x00077bea) main_mp4_pane_g1

0xa000,	// (0x00077bea) main_mp4_pane_g2_ParamLimits

0xa000,	// (0x00077bea) main_mp4_pane_g2

0x55b0,	// (0x0007319a) main_mp4_pane_g3_ParamLimits

0x55b0,	// (0x0007319a) main_mp4_pane_g3

0xa00e,	// (0x00077bf8) main_mp4_pane_g4_ParamLimits

0xa00e,	// (0x00077bf8) main_mp4_pane_g4

0xa036,	// (0x00077c20) main_mp4_pane_g5_ParamLimits

0xa036,	// (0x00077c20) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0007d484) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0007d484) main_mp4_pane_g

0xa086,	// (0x00077c70) main_mp4_pane_t1_ParamLimits

0xa086,	// (0x00077c70) main_mp4_pane_t1

0xa0e2,	// (0x00077ccc) main_mp4_pane_t2_ParamLimits

0xa0e2,	// (0x00077ccc) main_mp4_pane_t2

0xd515,	// (0x0007b0ff) main_mp4_pane_t3_ParamLimits

0xd515,	// (0x0007b0ff) main_mp4_pane_t3

0xa134,	// (0x00077d1e) main_mp4_pane_t4_ParamLimits

0xa134,	// (0x00077d1e) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0007d491) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0007d491) main_mp4_pane_t

0xa174,	// (0x00077d5e) mp4_progress_pane_ParamLimits

0xa174,	// (0x00077d5e) mp4_progress_pane

0xa1be,	// (0x00077da8) mp4_rocker_pane_ParamLimits

0xa1be,	// (0x00077da8) mp4_rocker_pane

0xd53d,	// (0x0007b127) mp4_progress_pane_t1

0xd556,	// (0x0007b140) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0007d49a) mp4_progress_pane_t

0xd56f,	// (0x0007b159) mup_progress_pane_cp04

0xd57b,	// (0x0007b165) mp4_rocker_pane_g1

0x55fa,	// (0x000731e4) aid_cell_size_keypad2_ParamLimits

0x55fa,	// (0x000731e4) aid_cell_size_keypad2

0x5610,	// (0x000731fa) dialer2_ne_pane_ParamLimits

0x5610,	// (0x000731fa) dialer2_ne_pane

0x5628,	// (0x00073212) grid_dialer2_keypad_pane_ParamLimits

0x5628,	// (0x00073212) grid_dialer2_keypad_pane

0xca88,	// (0x0007a672) bg_popup_call_pane_cp07_ParamLimits

0xca88,	// (0x0007a672) bg_popup_call_pane_cp07

0x5644,	// (0x0007322e) dialer2_ne_pane_t1_ParamLimits

0x5644,	// (0x0007322e) dialer2_ne_pane_t1

0x567f,	// (0x00073269) cell_dialer2_keypad_pane_ParamLimits

0x567f,	// (0x00073269) cell_dialer2_keypad_pane

0xd597,	// (0x0007b181) bg_button_pane_pane_cp04_ParamLimits

0xd597,	// (0x0007b181) bg_button_pane_pane_cp04

0x56a3,	// (0x0007328d) cell_dialer2_keypad_pane_g1_ParamLimits

0x56a3,	// (0x0007328d) cell_dialer2_keypad_pane_g1

0x10d6,	// (0x0006ecc0) aid_placing_vt_set_content_ParamLimits

0x10d6,	// (0x0006ecc0) aid_placing_vt_set_content

0x10fa,	// (0x0006ece4) aid_placing_vt_set_title_ParamLimits

0x10fa,	// (0x0006ece4) aid_placing_vt_set_title

0x95b5,	// (0x0007719f) main_image3_pane

0x5769,	// (0x00073353) area_side_right_pane_cp01_ParamLimits

0x5769,	// (0x00073353) area_side_right_pane_cp01

0xa000,	// (0x00077bea) main_image3_pane_g1_ParamLimits

0xa000,	// (0x00077bea) main_image3_pane_g1

0x5782,	// (0x0007336c) main_image3_pane_g2_ParamLimits

0x5782,	// (0x0007336c) main_image3_pane_g2

0x57aa,	// (0x00073394) main_image3_pane_g3_ParamLimits

0x57aa,	// (0x00073394) main_image3_pane_g3

0x57d4,	// (0x000733be) main_image3_pane_g4_ParamLimits

0x57d4,	// (0x000733be) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0007d4a9) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0007d4a9) main_image3_pane_g

0x57fe,	// (0x000733e8) main_image3_pane_t1_ParamLimits

0x57fe,	// (0x000733e8) main_image3_pane_t1

0x5856,	// (0x00073440) main_image3_pane_t2_ParamLimits

0x5856,	// (0x00073440) main_image3_pane_t2

0x58a8,	// (0x00073492) main_image3_pane_t3_ParamLimits

0x58a8,	// (0x00073492) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0007d4b2) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0007d4b2) main_image3_pane_t

0x960e,	// (0x000771f8) grid_sctrl_middle_pane_cp01_ParamLimits

0x960e,	// (0x000771f8) grid_sctrl_middle_pane_cp01

0x5930,	// (0x0007351a) cell_sctrl_middle_pane_cp01_ParamLimits

0x5930,	// (0x0007351a) cell_sctrl_middle_pane_cp01

0x594d,	// (0x00073537) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x594d,	// (0x00073537) cell_sctrl_middle_pane_cp01_g1

0x95b5,	// (0x0007719f) main_call4_pane

0x5962,	// (0x0007354c) aid_size_button_call4_ParamLimits

0x5962,	// (0x0007354c) aid_size_button_call4

0x5995,	// (0x0007357f) call4_windows_pane_ParamLimits

0x5995,	// (0x0007357f) call4_windows_pane

0x59b7,	// (0x000735a1) grid_call4_button_pane_ParamLimits

0x59b7,	// (0x000735a1) grid_call4_button_pane

0xd5a3,	// (0x0007b18d) call4_windows_conf_pane

0x59e2,	// (0x000735cc) popup_call4_audio_first_window_ParamLimits

0x59e2,	// (0x000735cc) popup_call4_audio_first_window

0x5a0e,	// (0x000735f8) popup_call4_audio_second_window_ParamLimits

0x5a0e,	// (0x000735f8) popup_call4_audio_second_window

0xd5e0,	// (0x0007b1ca) popup_call4_audio_wait_window_ParamLimits

0xd5e0,	// (0x0007b1ca) popup_call4_audio_wait_window

0x5a24,	// (0x0007360e) cell_call4_button_pane_ParamLimits

0x5a24,	// (0x0007360e) cell_call4_button_pane

0x5a4b,	// (0x00073635) bg_button_pane_cp09_ParamLimits

0x5a4b,	// (0x00073635) bg_button_pane_cp09

0x5a57,	// (0x00073641) cell_call4_button_pane_g1_ParamLimits

0x5a57,	// (0x00073641) cell_call4_button_pane_g1

0x5a7d,	// (0x00073667) cell_call4_button_pane_t1_ParamLimits

0x5a7d,	// (0x00073667) cell_call4_button_pane_t1

0xd628,	// (0x0007b212) popup_call4_audio_conf_window_ParamLimits

0xd628,	// (0x0007b212) popup_call4_audio_conf_window

0x4c62,	// (0x0007284c) mup3_progress_pane_t1_ParamLimits

0x4c80,	// (0x0007286a) mup3_progress_pane_t2_ParamLimits

0xcf5c,	// (0x0007ab46) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x0007d38b) mup3_progress_pane_t_ParamLimits

0xcf79,	// (0x0007ab63) mup_progress_pane_cp03_ParamLimits

0x5281,	// (0x00072e6b) mup3_control_keys_pane_g4_copy1

0xa1a2,	// (0x00077d8c) mp4_rocker2_pane_ParamLimits

0xa1a2,	// (0x00077d8c) mp4_rocker2_pane

0xd642,	// (0x0007b22c) mp4_rocker2_pane_g1

0xd64a,	// (0x0007b234) mp4_rocker2_pane_g2

0xa214,	// (0x00077dfe) mp4_rocker2_pane_g3

0xa21c,	// (0x00077e06) mp4_rocker2_pane_g4

0xa224,	// (0x00077e0e) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0007d4bb) mp4_rocker2_pane_g

0x95b5,	// (0x0007719f) main_camera4_pane

0x95b5,	// (0x0007719f) main_video4_pane

0x54ef,	// (0x000730d9) main_video_tele_dialer_pane_t1_ParamLimits

0x54ef,	// (0x000730d9) main_video_tele_dialer_pane_t1

0x5508,	// (0x000730f2) main_video_tele_dialer_pane_t2_ParamLimits

0x5508,	// (0x000730f2) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0007d475) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0007d475) main_video_tele_dialer_pane_t

0x5abb,	// (0x000736a5) cam4_autofocus_pane_ParamLimits

0x5abb,	// (0x000736a5) cam4_autofocus_pane

0x5ad1,	// (0x000736bb) cam4_image_uncrop_pane_ParamLimits

0x5ad1,	// (0x000736bb) cam4_image_uncrop_pane

0x5aea,	// (0x000736d4) cam4_indicators_pane_ParamLimits

0x5aea,	// (0x000736d4) cam4_indicators_pane

0x5b19,	// (0x00073703) main_camera4_pane_g1_ParamLimits

0x5b19,	// (0x00073703) main_camera4_pane_g1

0x5b2b,	// (0x00073715) main_camera4_pane_g2_ParamLimits

0x5b2b,	// (0x00073715) main_camera4_pane_g2

0x5b3e,	// (0x00073728) main_camera4_pane_g3_ParamLimits

0x5b3e,	// (0x00073728) main_camera4_pane_g3

0x5b51,	// (0x0007373b) main_camera4_pane_g4_ParamLimits

0x5b51,	// (0x0007373b) main_camera4_pane_g4

0x5b64,	// (0x0007374e) main_camera4_pane_g5_ParamLimits

0x5b64,	// (0x0007374e) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0007d4c6) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0007d4c6) main_camera4_pane_g

0x5b88,	// (0x00073772) main_camera4_pane_t1_ParamLimits

0x5b88,	// (0x00073772) main_camera4_pane_t1

0xa24a,	// (0x00077e34) bg_tb_trans_pane_cp06

0xa260,	// (0x00077e4a) cam4_indicators_pane_g1

0xa271,	// (0x00077e5b) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0007d4e1) cam4_indicators_pane_g

0xa289,	// (0x00077e73) cam4_indicators_pane_t1

0x5bec,	// (0x000737d6) main_video4_pane_g1_ParamLimits

0x5bec,	// (0x000737d6) main_video4_pane_g1

0x5bfb,	// (0x000737e5) main_video4_pane_g2_ParamLimits

0x5bfb,	// (0x000737e5) main_video4_pane_g2

0x5c0a,	// (0x000737f4) main_video4_pane_g3_ParamLimits

0x5c0a,	// (0x000737f4) main_video4_pane_g3

0x5c19,	// (0x00073803) main_video4_pane_g4_ParamLimits

0x5c19,	// (0x00073803) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0007d4e8) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0007d4e8) main_video4_pane_g

0x5c37,	// (0x00073821) vid4_indicators_pane_ParamLimits

0x5c37,	// (0x00073821) vid4_indicators_pane

0x5c65,	// (0x0007384f) video4_image_uncrop_cif_pane_ParamLimits

0x5c65,	// (0x0007384f) video4_image_uncrop_cif_pane

0x5c7f,	// (0x00073869) video4_image_uncrop_nhd_pane_ParamLimits

0x5c7f,	// (0x00073869) video4_image_uncrop_nhd_pane

0x5ad1,	// (0x000736bb) video4_image_uncrop_vga_pane_ParamLimits

0x5ad1,	// (0x000736bb) video4_image_uncrop_vga_pane

0xa2ad,	// (0x00077e97) bg_tb_trans_pane_cp07

0xa2c5,	// (0x00077eaf) vid4_indicators_pane_g1

0xa2db,	// (0x00077ec5) vid4_indicators_pane_g2

0xa2ef,	// (0x00077ed9) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0007d4f3) vid4_indicators_pane_g

0xa320,	// (0x00077f0a) vid4_indicators_pane_t1

0x5c95,	// (0x0007387f) cam4_autofocus_pane_g1

0x5c9d,	// (0x00073887) cam4_autofocus_pane_g2

0x5ca5,	// (0x0007388f) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0007d4fe) cam4_autofocus_pane_g

0x5cad,	// (0x00073897) cam4_autofocus_pane_g3_copy1

0x5535,	// (0x0007311f) video_down_pane_cp_t1

0x5543,	// (0x0007312d) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0007d47a) video_down_pane_cp_t

0x960e,	// (0x000771f8) popup_vitu2_window_ParamLimits

0x960e,	// (0x000771f8) popup_vitu2_window

0x5cb5,	// (0x0007389f) aid_size_cell2_itu2_ParamLimits

0x5cb5,	// (0x0007389f) aid_size_cell2_itu2

0x5cdb,	// (0x000738c5) aid_size_cell_itu2_ParamLimits

0x5cdb,	// (0x000738c5) aid_size_cell_itu2

0x5d3b,	// (0x00073925) bg_popup_window_pane_cp09_ParamLimits

0x5d3b,	// (0x00073925) bg_popup_window_pane_cp09

0x5d49,	// (0x00073933) field_vitu2_entry_pane_ParamLimits

0x5d49,	// (0x00073933) field_vitu2_entry_pane

0x5d71,	// (0x0007395b) grid_vitu2_function_pane_ParamLimits

0x5d71,	// (0x0007395b) grid_vitu2_function_pane

0x5dc2,	// (0x000739ac) grid_vitu2_itu_pane_ParamLimits

0x5dc2,	// (0x000739ac) grid_vitu2_itu_pane

0x5e51,	// (0x00073a3b) cell_vitu2_itu_pane_ParamLimits

0x5e51,	// (0x00073a3b) cell_vitu2_itu_pane

0x5e77,	// (0x00073a61) cell_vitu2_function_pane_ParamLimits

0x5e77,	// (0x00073a61) cell_vitu2_function_pane

0xd652,	// (0x0007b23c) bg_popup_call_pane_cp08_ParamLimits

0xd652,	// (0x0007b23c) bg_popup_call_pane_cp08

0xd66b,	// (0x0007b255) field_vitu2_entry_pane_g1

0xd677,	// (0x0007b261) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0007d505) field_vitu2_entry_pane_g

0x5ebb,	// (0x00073aa5) field_vitu2_entry_pane_t1_ParamLimits

0x5ebb,	// (0x00073aa5) field_vitu2_entry_pane_t1

0xa337,	// (0x00077f21) field_vitu2_entry_pane_t2_ParamLimits

0xa337,	// (0x00077f21) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0007d50c) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0007d50c) field_vitu2_entry_pane_t

0x5eea,	// (0x00073ad4) bg_button_pane_cp010_ParamLimits

0x5eea,	// (0x00073ad4) bg_button_pane_cp010

0x5ef8,	// (0x00073ae2) cell_vitu2_itu_pane_g1

0x5f23,	// (0x00073b0d) cell_vitu2_itu_pane_t1_ParamLimits

0x5f23,	// (0x00073b0d) cell_vitu2_itu_pane_t1

0xfbf4,	// (0x0006d7de) cell_vitu2_itu_pane_t2_ParamLimits

0xfbf4,	// (0x0006d7de) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0007d516) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0007d516) cell_vitu2_itu_pane_t

0xa2ad,	// (0x00077e97) bg_button_pane_cp011

0x5f81,	// (0x00073b6b) cell_vitu2_function_pane_g1

0x95b5,	// (0x0007719f) main_myfav_hc_pane

0x58f8,	// (0x000734e2) popup_image3_note_pane_ParamLimits

0x58f8,	// (0x000734e2) popup_image3_note_pane

0x5914,	// (0x000734fe) popup_image3_tool_bar_pane_ParamLimits

0x5914,	// (0x000734fe) popup_image3_tool_bar_pane

0xfc82,	// (0x0006d86c) cell_vitu2_itu_pane_t3_ParamLimits

0xfc82,	// (0x0006d86c) cell_vitu2_itu_pane_t3

0x95b5,	// (0x0007719f) bg_popup_trans_pane

0xd699,	// (0x0007b283) grid_image3_tool_bar_pane

0xd6a3,	// (0x0007b28d) bg_popup_trans_pane_g1

0xace4,	// (0x000788ce) bg_popup_trans_pane_g2

0xd6ab,	// (0x0007b295) bg_popup_trans_pane_g3

0xd6b3,	// (0x0007b29d) bg_popup_trans_pane_g4

0xd6bb,	// (0x0007b2a5) bg_popup_trans_pane_g5

0xd6c3,	// (0x0007b2ad) bg_popup_trans_pane_g6

0xd6cb,	// (0x0007b2b5) bg_popup_trans_pane_g7

0xd6d3,	// (0x0007b2bd) bg_popup_trans_pane_g8

0xacc4,	// (0x000788ae) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0007d51d) bg_popup_trans_pane_g

0xd6db,	// (0x0007b2c5) cell_image3_tool_bar_pane_ParamLimits

0xd6db,	// (0x0007b2c5) cell_image3_tool_bar_pane

0xcca9,	// (0x0007a893) cell_image3_tool_bar_pane_g1

0x95b5,	// (0x0007719f) bg_popup_trans_pane_cp1

0xd6f1,	// (0x0007b2db) popup_image3_note_pane_t1

0xd6ff,	// (0x0007b2e9) popup_image3_note_pane_t2

0xd70d,	// (0x0007b2f7) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0007d530) popup_image3_note_pane_t

0xd71d,	// (0x0007b307) popup_image3_note_pane_t3_copy1

0x5f95,	// (0x00073b7f) bg_myfav_hc_instruction_pane_ParamLimits

0x5f95,	// (0x00073b7f) bg_myfav_hc_instruction_pane

0x5fad,	// (0x00073b97) cell_myfav_contact_pane_ParamLimits

0x5fad,	// (0x00073b97) cell_myfav_contact_pane

0x5fc9,	// (0x00073bb3) cell_myfav_contact_pane_cp1_ParamLimits

0x5fc9,	// (0x00073bb3) cell_myfav_contact_pane_cp1

0x5fe1,	// (0x00073bcb) cell_myfav_contact_pane_cp2_ParamLimits

0x5fe1,	// (0x00073bcb) cell_myfav_contact_pane_cp2

0x5ff9,	// (0x00073be3) cell_myfav_contact_pane_cp3_ParamLimits

0x5ff9,	// (0x00073be3) cell_myfav_contact_pane_cp3

0x6010,	// (0x00073bfa) cell_myfav_contact_pane_cp4_ParamLimits

0x6010,	// (0x00073bfa) cell_myfav_contact_pane_cp4

0x6028,	// (0x00073c12) cell_myfav_contact_pane_cp5_ParamLimits

0x6028,	// (0x00073c12) cell_myfav_contact_pane_cp5

0x603c,	// (0x00073c26) cell_myfav_contact_pane_cp6_ParamLimits

0x603c,	// (0x00073c26) cell_myfav_contact_pane_cp6

0x6052,	// (0x00073c3c) cell_myfav_contact_pane_cp7_ParamLimits

0x6052,	// (0x00073c3c) cell_myfav_contact_pane_cp7

0xd72b,	// (0x0007b315) listscroll_gen_pane_cp05

0x606a,	// (0x00073c54) main_myfav_hc_pane_g1_ParamLimits

0x606a,	// (0x00073c54) main_myfav_hc_pane_g1

0x6084,	// (0x00073c6e) main_myfav_hc_pane_g2_ParamLimits

0x6084,	// (0x00073c6e) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0007d537) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0007d537) main_myfav_hc_pane_g

0x60b8,	// (0x00073ca2) main_myfav_hc_pane_t1_ParamLimits

0x60b8,	// (0x00073ca2) main_myfav_hc_pane_t1

0xd734,	// (0x0007b31e) main_myfav_hc_pane_t2_ParamLimits

0xd734,	// (0x0007b31e) main_myfav_hc_pane_t2

0xd746,	// (0x0007b330) main_myfav_hc_pane_t3_ParamLimits

0xd746,	// (0x0007b330) main_myfav_hc_pane_t3

0x60cf,	// (0x00073cb9) main_myfav_hc_pane_t4_ParamLimits

0x60cf,	// (0x00073cb9) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0007d53e) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0007d53e) main_myfav_hc_pane_t

0xcca9,	// (0x0007a893) bg_myfav_hc_instruction_pane_g1

0xd758,	// (0x0007b342) cell_myfav_contact_pane_g1_ParamLimits

0xd758,	// (0x0007b342) cell_myfav_contact_pane_g1

0xd758,	// (0x0007b342) cell_myfav_contact_pane_g2_ParamLimits

0xd758,	// (0x0007b342) cell_myfav_contact_pane_g2

0xd764,	// (0x0007b34e) cell_myfav_contact_pane_g3_ParamLimits

0xd764,	// (0x0007b34e) cell_myfav_contact_pane_g3

0xcf46,	// (0x0007ab30) cell_myfav_contact_pane_g4_ParamLimits

0xcf46,	// (0x0007ab30) cell_myfav_contact_pane_g4

0xd771,	// (0x0007b35b) cell_myfav_contact_pane_g5_ParamLimits

0xd771,	// (0x0007b35b) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0007d549) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0007d549) cell_myfav_contact_pane_g

0x609e,	// (0x00073c88) main_myfav_hc_pane_g3_ParamLimits

0x609e,	// (0x00073c88) main_myfav_hc_pane_g3

0xfe69,	// (0x0006da53) popup_adpt_find_window

0x60f9,	// (0x00073ce3) afind_page_pane_ParamLimits

0x60f9,	// (0x00073ce3) afind_page_pane

0x610e,	// (0x00073cf8) aid_size_cell_afind_ParamLimits

0x610e,	// (0x00073cf8) aid_size_cell_afind

0x612c,	// (0x00073d16) bg_popup_sub_pane_cp09_ParamLimits

0x612c,	// (0x00073d16) bg_popup_sub_pane_cp09

0x6139,	// (0x00073d23) find_pane_cp01_ParamLimits

0x6139,	// (0x00073d23) find_pane_cp01

0xd77d,	// (0x0007b367) grid_afind_control_pane_ParamLimits

0xd77d,	// (0x0007b367) grid_afind_control_pane

0x6146,	// (0x00073d30) grid_afind_pane_ParamLimits

0x6146,	// (0x00073d30) grid_afind_pane

0x6168,	// (0x00073d52) cell_afind_pane_ParamLimits

0x6168,	// (0x00073d52) cell_afind_pane

0xcca9,	// (0x0007a893) afind_page_pane_g1

0x61cf,	// (0x00073db9) afind_page_pane_g2

0x61d8,	// (0x00073dc2) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0007d554) afind_page_pane_g

0x61e1,	// (0x00073dcb) afind_page_pane_t1

0xd791,	// (0x0007b37b) cell_afind_grid_control_pane_ParamLimits

0xd791,	// (0x0007b37b) cell_afind_grid_control_pane

0xd597,	// (0x0007b181) bg_button_pane_cp69_ParamLimits

0xd597,	// (0x0007b181) bg_button_pane_cp69

0x6201,	// (0x00073deb) cell_afind_pane_g1_ParamLimits

0x6201,	// (0x00073deb) cell_afind_pane_g1

0x620e,	// (0x00073df8) cell_afind_pane_t1_ParamLimits

0x620e,	// (0x00073df8) cell_afind_pane_t1

0xaad9,	// (0x000786c3) bg_button_pane_cp72

0xd7a0,	// (0x0007b38a) cell_afind_grid_control_pane_g1

0x3130,	// (0x00070d1a) aid_image_placing_area_ParamLimits

0x3130,	// (0x00070d1a) aid_image_placing_area

0xd259,	// (0x0007ae43) field_vitu_entry_pane_g1_ParamLimits

0xd259,	// (0x0007ae43) field_vitu_entry_pane_g1

0xd265,	// (0x0007ae4f) field_vitu_entry_pane_g2_ParamLimits

0xd265,	// (0x0007ae4f) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0007d405) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0007d405) field_vitu_entry_pane_g

0x5350,	// (0x00072f3a) cell_vitu_itu_pane_g1_ParamLimits

0x5392,	// (0x00072f7c) cell_vitu_itu_pane_t3_ParamLimits

0x5392,	// (0x00072f7c) cell_vitu_itu_pane_t3

0xd53d,	// (0x0007b127) mp4_progress_pane_t1_ParamLimits

0xd556,	// (0x0007b140) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0007d49a) mp4_progress_pane_t_ParamLimits

0xd56f,	// (0x0007b159) mup_progress_pane_cp04_ParamLimits

0x60e3,	// (0x00073ccd) main_myfav_hc_pane_t5_ParamLimits

0x60e3,	// (0x00073ccd) main_myfav_hc_pane_t5

0x95d3,	// (0x000771bd) aid_zoom_text_primary

0xfe69,	// (0x0006da53) popup_adpt_find_window_ParamLimits

0x960e,	// (0x000771f8) main_cam_set_pane

0x5b03,	// (0x000736ed) cam4_zoom_pane_ParamLimits

0x5b03,	// (0x000736ed) cam4_zoom_pane

0x6220,	// (0x00073e0a) main_cam_set_pane_g1_ParamLimits

0x6220,	// (0x00073e0a) main_cam_set_pane_g1

0x622e,	// (0x00073e18) main_cam_set_pane_g2_ParamLimits

0x622e,	// (0x00073e18) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0007d55b) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0007d55b) main_cam_set_pane_g

0x624f,	// (0x00073e39) main_cam_set_pane_t1_ParamLimits

0x624f,	// (0x00073e39) main_cam_set_pane_t1

0x626a,	// (0x00073e54) main_cset_listscroll_pane_ParamLimits

0x626a,	// (0x00073e54) main_cset_listscroll_pane

0x628e,	// (0x00073e78) main_cset_slider_pane_ParamLimits

0x628e,	// (0x00073e78) main_cset_slider_pane

0xd7b1,	// (0x0007b39b) main_cset_list_pane_ParamLimits

0xd7b1,	// (0x0007b39b) main_cset_list_pane

0xd7c1,	// (0x0007b3ab) scroll_pane_cp028

0x62b8,	// (0x00073ea2) aid_area_touch_slider

0x62d4,	// (0x00073ebe) cset_slider_pane

0x62fe,	// (0x00073ee8) main_cset_slider_pane_g1

0x6313,	// (0x00073efd) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0007d560) main_cset_slider_pane_g

0xd7fa,	// (0x0007b3e4) main_cset_slider_pane_t1

0x63d5,	// (0x00073fbf) main_cset_slider_pane_t2

0x63ef,	// (0x00073fd9) main_cset_slider_pane_t3

0x6409,	// (0x00073ff3) main_cset_slider_pane_t4

0x6423,	// (0x0007400d) main_cset_slider_pane_t5

0x6441,	// (0x0007402b) main_cset_slider_pane_t6

0x6456,	// (0x00074040) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0007d585) main_cset_slider_pane_t

0x6562,	// (0x0007414c) cset_list_set_pane_ParamLimits

0x6562,	// (0x0007414c) cset_list_set_pane

0x6576,	// (0x00074160) aid_position_infowindow_above

0x657e,	// (0x00074168) aid_position_infowindow_below

0x6586,	// (0x00074170) cset_list_set_pane_g1_ParamLimits

0x6586,	// (0x00074170) cset_list_set_pane_g1

0x6592,	// (0x0007417c) cset_list_set_pane_g3_ParamLimits

0x6592,	// (0x0007417c) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0007d5a4) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0007d5a4) cset_list_set_pane_g

0x65a1,	// (0x0007418b) cset_list_set_pane_t1_ParamLimits

0x65a1,	// (0x0007418b) cset_list_set_pane_t1

0x960e,	// (0x000771f8) list_highlight_pane_cp021_ParamLimits

0x960e,	// (0x000771f8) list_highlight_pane_cp021

0xb503,	// (0x000790ed) cset_slider_pane_g1

0xb515,	// (0x000790ff) cset_slider_pane_g2

0xb50c,	// (0x000790f6) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0007d5a9) cset_slider_pane_g

0xa354,	// (0x00077f3e) aid_area_touch_cam4_zoom

0xa35c,	// (0x00077f46) cam4_zoom_cont_pane

0xa364,	// (0x00077f4e) cam4_zoom_pane_g1

0xa36c,	// (0x00077f56) cam4_zoom_pane_g2

0x65b6,	// (0x000741a0) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0007d5b0) cam4_zoom_pane_g

0xa374,	// (0x00077f5e) cam4_zoom_cont_pane_g1

0xa37d,	// (0x00077f67) cam4_zoom_cont_pane_g2

0xa386,	// (0x00077f70) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0007d5b7) cam4_zoom_cont_pane_g

0x5980,	// (0x0007356a) call4_image_pane_ParamLimits

0x5980,	// (0x0007356a) call4_image_pane

0xd5a3,	// (0x0007b18d) call4_windows_conf_pane_ParamLimits

0xd5be,	// (0x0007b1a8) popup_call4_audio_in_window_ParamLimits

0xd5be,	// (0x0007b1a8) popup_call4_audio_in_window

0x95b5,	// (0x0007719f) bg_popup_call2_act_pane_cp02

0xd620,	// (0x0007b20a) call4_list_conf_pane

0xcca9,	// (0x0007a893) call4_image_pane_g1

0xcca9,	// (0x0007a893) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x0007d2cb) call4_image_pane_g

0xd89a,	// (0x0007b484) list_single_graphic_popup_conf4_pane_ParamLimits

0xd89a,	// (0x0007b484) list_single_graphic_popup_conf4_pane

0x95b5,	// (0x0007719f) list_highlight_pane_cp022

0xd8af,	// (0x0007b499) list_single_graphic_popup_conf4_pane_g1

0xb1ef,	// (0x00078dd9) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0007d5be) list_single_graphic_popup_conf4_pane_g

0xd8b7,	// (0x0007b4a1) list_single_graphic_popup_conf4_pane_t1

0x1211,	// (0x0006edfb) popup_vtel_slider_window_ParamLimits

0x1211,	// (0x0006edfb) popup_vtel_slider_window

0xd585,	// (0x0007b16f) dialer2_ne_pane_t2_ParamLimits

0xd585,	// (0x0007b16f) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0007d49f) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0007d49f) dialer2_ne_pane_t

0xca88,	// (0x0007a672) bg_popup_sub_pane_cp010_ParamLimits

0xca88,	// (0x0007a672) bg_popup_sub_pane_cp010

0x65be,	// (0x000741a8) popup_vtel_slider_window_g1_ParamLimits

0x65be,	// (0x000741a8) popup_vtel_slider_window_g1

0x65d1,	// (0x000741bb) popup_vtel_slider_window_g2_ParamLimits

0x65d1,	// (0x000741bb) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0007d5c3) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0007d5c3) popup_vtel_slider_window_g

0x6627,	// (0x00074211) vtel_slider_pane_ParamLimits

0x6627,	// (0x00074211) vtel_slider_pane

0x6649,	// (0x00074233) vtel_slider_pane_g1_ParamLimits

0x6649,	// (0x00074233) vtel_slider_pane_g1

0x665d,	// (0x00074247) vtel_slider_pane_g2_ParamLimits

0x665d,	// (0x00074247) vtel_slider_pane_g2

0x6675,	// (0x0007425f) vtel_slider_pane_g3_ParamLimits

0x6675,	// (0x0007425f) vtel_slider_pane_g3

0x6649,	// (0x00074233) vtel_slider_pane_g4_ParamLimits

0x6649,	// (0x00074233) vtel_slider_pane_g4

0x668b,	// (0x00074275) vtel_slider_pane_g5_ParamLimits

0x668b,	// (0x00074275) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0007d5cc) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0007d5cc) vtel_slider_pane_g

0x960e,	// (0x000771f8) main_gallery2_pane

0x5d07,	// (0x000738f1) aid_size_row_itut2_dropdow_list_ParamLimits

0x5d07,	// (0x000738f1) aid_size_row_itut2_dropdow_list

0x5d99,	// (0x00073983) grid_vitu2_function_top_pane_ParamLimits

0x5d99,	// (0x00073983) grid_vitu2_function_top_pane

0x5df8,	// (0x000739e2) popup_vitu2_dropdown_list_window_ParamLimits

0x5df8,	// (0x000739e2) popup_vitu2_dropdown_list_window

0x5e25,	// (0x00073a0f) popup_vitu2_match_list_window

0x66af,	// (0x00074299) cell_vitu2_function_top_pane_ParamLimits

0x66af,	// (0x00074299) cell_vitu2_function_top_pane

0x66cf,	// (0x000742b9) cell_vitu2_function_top_pane_cp01_ParamLimits

0x66cf,	// (0x000742b9) cell_vitu2_function_top_pane_cp01

0x66ed,	// (0x000742d7) cell_vitu2_function_top_wide_pane_ParamLimits

0x66ed,	// (0x000742d7) cell_vitu2_function_top_wide_pane

0xa2ad,	// (0x00077e97) bg_button_pane_cp012

0x670b,	// (0x000742f5) cell_vitu2_function_top_pane_g1

0xa38f,	// (0x00077f79) bg_button_pane_cp013_ParamLimits

0xa38f,	// (0x00077f79) bg_button_pane_cp013

0x671f,	// (0x00074309) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x671f,	// (0x00074309) cell_vitu2_function_top_wide_pane_g1

0xa2ad,	// (0x00077e97) bg_popup_sub_pane_cp20

0x6737,	// (0x00074321) list_vitu2_match_list_pane

0xd6a3,	// (0x0007b28d) bg_popup_sub_pane_cp20_g1

0xd6ab,	// (0x0007b295) bg_popup_sub_pane_cp20_g2

0xace4,	// (0x000788ce) bg_popup_sub_pane_cp20_g3

0xd6b3,	// (0x0007b29d) bg_popup_sub_pane_cp20_g4

0xacc4,	// (0x000788ae) bg_popup_sub_pane_cp20_g5

0xd8cd,	// (0x0007b4b7) bg_popup_sub_pane_cp20_g6

0xd6c3,	// (0x0007b2ad) bg_popup_sub_pane_cp20_g7

0xd6cb,	// (0x0007b2b5) bg_popup_sub_pane_cp20_g8

0xd6d3,	// (0x0007b2bd) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0007d5d7) bg_popup_sub_pane_cp20_g

0xa3ab,	// (0x00077f95) list_vitu2_match_list_item_pane_ParamLimits

0xa3ab,	// (0x00077f95) list_vitu2_match_list_item_pane

0xa3bd,	// (0x00077fa7) list_vitu2_match_list_item_pane_t1

0x9cec,	// (0x000778d6) bg_popup_sub_pane_cp21

0xa3cb,	// (0x00077fb5) grid_vitu2_dropdown_list_pane

0x679f,	// (0x00074389) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x679f,	// (0x00074389) cell_vitu2_dropdown_list_char_pane

0x67c2,	// (0x000743ac) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x67c2,	// (0x000743ac) cell_vitu2_dropdown_list_ctrl_pane

0xd8d5,	// (0x0007b4bf) cell_vitu2_dropdown_list_char_pane_g1

0xd8de,	// (0x0007b4c8) cell_vitu2_dropdown_list_char_pane_g2

0xd8e7,	// (0x0007b4d1) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0007d5f4) cell_vitu2_dropdown_list_char_pane_g

0x67f0,	// (0x000743da) cell_vitu2_dropdown_list_char_pane_t1

0x67fe,	// (0x000743e8) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x67fe,	// (0x000743e8) cell_vitu2_dropdown_list_ctrl_pane_g1

0x680e,	// (0x000743f8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x680e,	// (0x000743f8) cell_vitu2_dropdown_list_ctrl_pane_g2

0x681f,	// (0x00074409) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x681f,	// (0x00074409) cell_vitu2_dropdown_list_ctrl_pane_g3

0x682f,	// (0x00074419) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x682f,	// (0x00074419) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa24a,	// (0x00077e34) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa24a,	// (0x00077e34) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0007d5fb) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0007d5fb) cell_vitu2_dropdown_list_ctrl_pane_g

0x684b,	// (0x00074435) aid_size_cell_gallery2_ParamLimits

0x684b,	// (0x00074435) aid_size_cell_gallery2

0x6869,	// (0x00074453) grid_gallery2_pane_ParamLimits

0x6869,	// (0x00074453) grid_gallery2_pane

0x6883,	// (0x0007446d) scroll_pane_cp029_ParamLimits

0x6883,	// (0x0007446d) scroll_pane_cp029

0x688f,	// (0x00074479) cell_gallery2_pane_ParamLimits

0x688f,	// (0x00074479) cell_gallery2_pane

0xd8f0,	// (0x0007b4da) cell_gallery2_pane_g2

0x68f0,	// (0x000744da) cell_gallery2_pane_g3

0xd8f8,	// (0x0007b4e2) cell_gallery2_pane_g4

0xd900,	// (0x0007b4ea) cell_gallery2_pane_g5

0xb3bd,	// (0x00078fa7) grid_highlight_pane_cp10

0x5e25,	// (0x00073a0f) popup_vitu2_match_list_window_ParamLimits

0x5e3c,	// (0x00073a26) popup_vitu2_query_window_ParamLimits

0x5e3c,	// (0x00073a26) popup_vitu2_query_window

0x9cec,	// (0x000778d6) bg_vitu2_candi_button_pane

0xd8d5,	// (0x0007b4bf) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8de,	// (0x0007b4c8) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8e7,	// (0x0007b4d1) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x68f8,	// (0x000744e2) bg_button_pane_cp015

0x690c,	// (0x000744f6) bg_button_pane_cp016

0x691f,	// (0x00074509) bg_button_pane_cp017

0xc858,	// (0x0007a442) bg_popup_sub_pane_cp22

0xd908,	// (0x0007b4f2) popup_vitu2_query_window_g1

0x6964,	// (0x0007454e) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0007d606) popup_vitu2_query_window_g

0x6983,	// (0x0007456d) popup_vitu2_query_window_t1_ParamLimits

0x6983,	// (0x0007456d) popup_vitu2_query_window_t1

0x69b8,	// (0x000745a2) popup_vitu2_query_window_t2_ParamLimits

0x69b8,	// (0x000745a2) popup_vitu2_query_window_t2

0x69ca,	// (0x000745b4) popup_vitu2_query_window_t3_ParamLimits

0x69ca,	// (0x000745b4) popup_vitu2_query_window_t3

0x69f2,	// (0x000745dc) popup_vitu2_query_window_t4_ParamLimits

0x69f2,	// (0x000745dc) popup_vitu2_query_window_t4

0x6a13,	// (0x000745fd) popup_vitu2_query_window_t5_ParamLimits

0x6a13,	// (0x000745fd) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0007d60d) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0007d60d) popup_vitu2_query_window_t

0xd7a9,	// (0x0007b393) main_cset_text_pane

0x62b8,	// (0x00073ea2) aid_area_touch_slider_ParamLimits

0x62d4,	// (0x00073ebe) cset_slider_pane_ParamLimits

0x62fe,	// (0x00073ee8) main_cset_slider_pane_g1_ParamLimits

0x6313,	// (0x00073efd) main_cset_slider_pane_g2_ParamLimits

0xd7ca,	// (0x0007b3b4) main_cset_slider_pane_g3_ParamLimits

0xd7ca,	// (0x0007b3b4) main_cset_slider_pane_g3

0x6328,	// (0x00073f12) main_cset_slider_pane_g4_ParamLimits

0x6328,	// (0x00073f12) main_cset_slider_pane_g4

0x6337,	// (0x00073f21) main_cset_slider_pane_g5_ParamLimits

0x6337,	// (0x00073f21) main_cset_slider_pane_g5

0x6345,	// (0x00073f2f) main_cset_slider_pane_g6_ParamLimits

0x6345,	// (0x00073f2f) main_cset_slider_pane_g6

0xf976,	// (0x0007d560) main_cset_slider_pane_g_ParamLimits

0xd7fa,	// (0x0007b3e4) main_cset_slider_pane_t1_ParamLimits

0x63d5,	// (0x00073fbf) main_cset_slider_pane_t2_ParamLimits

0x63ef,	// (0x00073fd9) main_cset_slider_pane_t3_ParamLimits

0x6409,	// (0x00073ff3) main_cset_slider_pane_t4_ParamLimits

0x6423,	// (0x0007400d) main_cset_slider_pane_t5_ParamLimits

0x6441,	// (0x0007402b) main_cset_slider_pane_t6_ParamLimits

0x6456,	// (0x00074040) main_cset_slider_pane_t7_ParamLimits

0x6484,	// (0x0007406e) main_cset_slider_pane_t8_ParamLimits

0x6484,	// (0x0007406e) main_cset_slider_pane_t8

0x64ac,	// (0x00074096) main_cset_slider_pane_t9_ParamLimits

0x64ac,	// (0x00074096) main_cset_slider_pane_t9

0x64d4,	// (0x000740be) main_cset_slider_pane_t10_ParamLimits

0x64d4,	// (0x000740be) main_cset_slider_pane_t10

0x64fc,	// (0x000740e6) main_cset_slider_pane_t11_ParamLimits

0x64fc,	// (0x000740e6) main_cset_slider_pane_t11

0x6526,	// (0x00074110) main_cset_slider_pane_t12_ParamLimits

0x6526,	// (0x00074110) main_cset_slider_pane_t12

0x6543,	// (0x0007412d) main_cset_slider_pane_t13_ParamLimits

0x6543,	// (0x0007412d) main_cset_slider_pane_t13

0xf99b,	// (0x0007d585) main_cset_slider_pane_t_ParamLimits

0x95b5,	// (0x0007719f) bg_popup_sub_pane_cp011

0xd914,	// (0x0007b4fe) main_cset_text_pane_g1

0xd91c,	// (0x0007b506) main_cset_text_pane_t1

0xd92a,	// (0x0007b514) main_cset_text_pane_t2

0xd938,	// (0x0007b522) main_cset_text_pane_t3

0xd946,	// (0x0007b530) main_cset_text_pane_t4

0xd954,	// (0x0007b53e) main_cset_text_pane_t5

0xd962,	// (0x0007b54c) main_cset_text_pane_t6

0xd970,	// (0x0007b55a) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0007d61c) main_cset_text_pane_t

0x95b5,	// (0x0007719f) main_cam4_burst_pane

0x95b5,	// (0x0007719f) main_cam5_pane

0x61ef,	// (0x00073dd9) bg_button_pane_cp019

0x61f8,	// (0x00073de2) bg_button_pane_cp020

0xd7d6,	// (0x0007b3c0) main_cset_slider_pane_g7_ParamLimits

0xd7d6,	// (0x0007b3c0) main_cset_slider_pane_g7

0xd7e2,	// (0x0007b3cc) main_cset_slider_pane_g8_ParamLimits

0xd7e2,	// (0x0007b3cc) main_cset_slider_pane_g8

0x6359,	// (0x00073f43) main_cset_slider_pane_g9_ParamLimits

0x6359,	// (0x00073f43) main_cset_slider_pane_g9

0x6365,	// (0x00073f4f) main_cset_slider_pane_g10_ParamLimits

0x6365,	// (0x00073f4f) main_cset_slider_pane_g10

0x6371,	// (0x00073f5b) main_cset_slider_pane_g11_ParamLimits

0x6371,	// (0x00073f5b) main_cset_slider_pane_g11

0x637d,	// (0x00073f67) main_cset_slider_pane_g12_ParamLimits

0x637d,	// (0x00073f67) main_cset_slider_pane_g12

0x6389,	// (0x00073f73) main_cset_slider_pane_g13_ParamLimits

0x6389,	// (0x00073f73) main_cset_slider_pane_g13

0x6395,	// (0x00073f7f) main_cset_slider_pane_g14_ParamLimits

0x6395,	// (0x00073f7f) main_cset_slider_pane_g14

0x63a1,	// (0x00073f8b) main_cset_slider_pane_g15_ParamLimits

0x63a1,	// (0x00073f8b) main_cset_slider_pane_g15

0xd828,	// (0x0007b412) main_cset_slider_pane_t14_ParamLimits

0xd828,	// (0x0007b412) main_cset_slider_pane_t14

0xd861,	// (0x0007b44b) main_cset_slider_pane_t15_ParamLimits

0xd861,	// (0x0007b44b) main_cset_slider_pane_t15

0x6a8a,	// (0x00074674) aid_cam4_burst_size_cell_ParamLimits

0x6a8a,	// (0x00074674) aid_cam4_burst_size_cell

0x6aaa,	// (0x00074694) grid_cam4_burst_pane_ParamLimits

0x6aaa,	// (0x00074694) grid_cam4_burst_pane

0x6ae4,	// (0x000746ce) linegrid_cam4_burst_pane_ParamLimits

0x6ae4,	// (0x000746ce) linegrid_cam4_burst_pane

0xd97e,	// (0x0007b568) scroll_pane_cp30_ParamLimits

0xd97e,	// (0x0007b568) scroll_pane_cp30

0x6b06,	// (0x000746f0) cell_cam4_burst_pane_ParamLimits

0x6b06,	// (0x000746f0) cell_cam4_burst_pane

0xd98a,	// (0x0007b574) linegrid_cam4_burst_pane_g1_ParamLimits

0xd98a,	// (0x0007b574) linegrid_cam4_burst_pane_g1

0x6b5b,	// (0x00074745) linegrid_cam4_burst_pane_g2_ParamLimits

0x6b5b,	// (0x00074745) linegrid_cam4_burst_pane_g2

0xd997,	// (0x0007b581) linegrid_cam4_burst_pane_g3_ParamLimits

0xd997,	// (0x0007b581) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0007d62b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0007d62b) linegrid_cam4_burst_pane_g

0x6b6c,	// (0x00074756) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6b6c,	// (0x00074756) linegrid_cam4_burst_pane_g3_copy1

0xd9a4,	// (0x0007b58e) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9a4,	// (0x0007b58e) linegrid_cam4_burst_pane_g4

0x6b8a,	// (0x00074774) linegrid_cam4_burst_pane_g5_ParamLimits

0x6b8a,	// (0x00074774) linegrid_cam4_burst_pane_g5

0x6b9b,	// (0x00074785) linegrid_cam4_burst_pane_g6_ParamLimits

0x6b9b,	// (0x00074785) linegrid_cam4_burst_pane_g6

0xd9b1,	// (0x0007b59b) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9b1,	// (0x0007b59b) linegrid_cam4_burst_pane_g7

0x6bb2,	// (0x0007479c) cell_cam4_burst_pane_g1

0xd9ca,	// (0x0007b5b4) main_cam5_pane_t1_ParamLimits

0xd9ca,	// (0x0007b5b4) main_cam5_pane_t1

0xd9dc,	// (0x0007b5c6) main_cam5_pane_t2_ParamLimits

0xd9dc,	// (0x0007b5c6) main_cam5_pane_t2

0xd9ee,	// (0x0007b5d8) main_cam5_pane_t3_ParamLimits

0xd9ee,	// (0x0007b5d8) main_cam5_pane_t3

0xda00,	// (0x0007b5ea) main_cam5_pane_t4_ParamLimits

0xda00,	// (0x0007b5ea) main_cam5_pane_t4

0xda18,	// (0x0007b602) main_cam5_pane_t5_ParamLimits

0xda18,	// (0x0007b602) main_cam5_pane_t5

0xda2c,	// (0x0007b616) main_cam5_pane_t6_ParamLimits

0xda2c,	// (0x0007b616) main_cam5_pane_t6

0xda40,	// (0x0007b62a) main_cam5_pane_t7_ParamLimits

0xda40,	// (0x0007b62a) main_cam5_pane_t7

0xda52,	// (0x0007b63c) main_cam5_pane_t8_ParamLimits

0xda52,	// (0x0007b63c) main_cam5_pane_t8

0xda70,	// (0x0007b65a) main_cam5_pane_t9_ParamLimits

0xda70,	// (0x0007b65a) main_cam5_pane_t9

0xda82,	// (0x0007b66c) main_cam5_pane_t10_ParamLimits

0xda82,	// (0x0007b66c) main_cam5_pane_t10

0xda94,	// (0x0007b67e) main_cam5_pane_t11_ParamLimits

0xda94,	// (0x0007b67e) main_cam5_pane_t11

0xdaa8,	// (0x0007b692) main_cam5_pane_t12_ParamLimits

0xdaa8,	// (0x0007b692) main_cam5_pane_t12

0xdabf,	// (0x0007b6a9) main_cam5_pane_t13_ParamLimits

0xdabf,	// (0x0007b6a9) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0007d637) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0007d637) main_cam5_pane_t

0xfeec,	// (0x0006dad6) popup_scut_keymap_window_ParamLimits

0xfeec,	// (0x0006dad6) popup_scut_keymap_window

0x6bc5,	// (0x000747af) aid_size_cell_brow_shortcut

0xb3bd,	// (0x00078fa7) bg_popup_window_pane_cp010

0x6bd1,	// (0x000747bb) grid_scut_pane

0x6bdd,	// (0x000747c7) cell_scut_pane_ParamLimits

0x6bdd,	// (0x000747c7) cell_scut_pane

0x6bf6,	// (0x000747e0) cell_scut_pane_g1

0xdae2,	// (0x0007b6cc) cell_scut_pane_t1

0xdaf1,	// (0x0007b6db) cell_scut_pane_t2

0x6bff,	// (0x000747e9) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0007d652) cell_scut_pane_t

0x4819,	// (0x00072403) main_mup3_pane_g8_ParamLimits

0x4819,	// (0x00072403) main_mup3_pane_g8

0x5d23,	// (0x0007390d) area_vitu2_query_pane_ParamLimits

0x5d23,	// (0x0007390d) area_vitu2_query_pane

0x6932,	// (0x0007451c) input_focus_pane_cp08

0xdb00,	// (0x0007b6ea) area_vitu2_query_pane_g1

0x6c0d,	// (0x000747f7) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0007d659) area_vitu2_query_pane_g

0x6c1e,	// (0x00074808) area_vitu2_query_pane_t1_ParamLimits

0x6c1e,	// (0x00074808) area_vitu2_query_pane_t1

0x6c32,	// (0x0007481c) area_vitu2_query_pane_t2_ParamLimits

0x6c32,	// (0x0007481c) area_vitu2_query_pane_t2

0x6c46,	// (0x00074830) area_vitu2_query_pane_t3_ParamLimits

0x6c46,	// (0x00074830) area_vitu2_query_pane_t3

0xa3d3,	// (0x00077fbd) area_vitu2_query_pane_t4_ParamLimits

0xa3d3,	// (0x00077fbd) area_vitu2_query_pane_t4

0xa3fb,	// (0x00077fe5) area_vitu2_query_pane_t5_ParamLimits

0xa3fb,	// (0x00077fe5) area_vitu2_query_pane_t5

0xa423,	// (0x0007800d) area_vitu2_query_pane_t6_ParamLimits

0xa423,	// (0x0007800d) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0007d65e) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0007d65e) area_vitu2_query_pane_t

0x6c6e,	// (0x00074858) bg_button_pane_cp018

0x6c7c,	// (0x00074866) bg_button_pane_cp021

0x6c88,	// (0x00074872) bg_button_pane_cp022

0x6c99,	// (0x00074883) input_focus_pane_cp09

0x266f,	// (0x00070259) aid_size_touch_mv_arrow_left

0x2698,	// (0x00070282) aid_size_touch_mv_arrow_right

0x63b9,	// (0x00073fa3) main_cset_slider_pane_g16_ParamLimits

0x63b9,	// (0x00073fa3) main_cset_slider_pane_g16

0x63c7,	// (0x00073fb1) main_cset_slider_pane_g17_ParamLimits

0x63c7,	// (0x00073fb1) main_cset_slider_pane_g17

0x6bb2,	// (0x0007479c) cell_cam4_burst_pane_g1_ParamLimits

0x95b5,	// (0x0007719f) compa_mode_pane

0x65e1,	// (0x000741cb) popup_vtel_slider_window_g3_ParamLimits

0x65e1,	// (0x000741cb) popup_vtel_slider_window_g3

0x65f8,	// (0x000741e2) popup_vtel_slider_window_g4_ParamLimits

0x65f8,	// (0x000741e2) popup_vtel_slider_window_g4

0x660f,	// (0x000741f9) popup_vtel_slider_window_t1_ParamLimits

0x660f,	// (0x000741f9) popup_vtel_slider_window_t1

0x95b5,	// (0x0007719f) main_cl_pane

0xc884,	// (0x0007a46e) popup_imed_adjust2_window_ParamLimits

0xc858,	// (0x0007a442) bg_tb_trans_pane_cp05_ParamLimits

0xd18e,	// (0x0007ad78) popup_imed_adjust2_window_g1_ParamLimits

0xd19d,	// (0x0007ad87) popup_imed_adjust2_window_g2_ParamLimits

0xd19d,	// (0x0007ad87) popup_imed_adjust2_window_g2

0xd1a9,	// (0x0007ad93) popup_imed_adjust2_window_g3_ParamLimits

0xd1a9,	// (0x0007ad93) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0007d3c9) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0007d3c9) popup_imed_adjust2_window_g

0xd1b5,	// (0x0007ad9f) popup_imed_adjust2_window_t1_ParamLimits

0xd1cd,	// (0x0007adb7) slider_imed_adjust_pane_ParamLimits

0xd1e1,	// (0x0007adcb) slider_imed_adjust_pane_g1_ParamLimits

0xd1f1,	// (0x0007addb) slider_imed_adjust_pane_g2_ParamLimits

0xd201,	// (0x0007adeb) slider_imed_adjust_pane_g3_ParamLimits

0xd212,	// (0x0007adfc) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0007d3d0) slider_imed_adjust_pane_g_ParamLimits

0x5aa3,	// (0x0007368d) aid_touch_area_cam4_ParamLimits

0x5aa3,	// (0x0007368d) aid_touch_area_cam4

0xa22c,	// (0x00077e16) battery_pane_cp01

0x5b75,	// (0x0007375f) main_camera4_pane_g6_ParamLimits

0x5b75,	// (0x0007375f) main_camera4_pane_g6

0x5b9f,	// (0x00073789) main_camera4_pane_t2_ParamLimits

0x5b9f,	// (0x00073789) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0007d4d3) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0007d4d3) main_camera4_pane_t

0x5bd4,	// (0x000737be) aid_touch_area_vid4_ParamLimits

0x5bd4,	// (0x000737be) aid_touch_area_vid4

0x5c28,	// (0x00073812) main_video4_pane_g5_ParamLimits

0x5c28,	// (0x00073812) main_video4_pane_g5

0x5c4d,	// (0x00073837) vid4_progress_pane_ParamLimits

0x5c4d,	// (0x00073837) vid4_progress_pane

0xd7ee,	// (0x0007b3d8) main_cset_slider_pane_g18_ParamLimits

0xd7ee,	// (0x0007b3d8) main_cset_slider_pane_g18

0xd9be,	// (0x0007b5a8) cell_cam4_burst_pane_g2_ParamLimits

0xd9be,	// (0x0007b5a8) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0007d632) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0007d632) cell_cam4_burst_pane_g

0xa8bb,	// (0x000784a5) bg_cl_pane_ParamLimits

0xa8bb,	// (0x000784a5) bg_cl_pane

0x6caa,	// (0x00074894) cl_header_pane_ParamLimits

0x6caa,	// (0x00074894) cl_header_pane

0x6cbe,	// (0x000748a8) cl_listscroll_pane_ParamLimits

0x6cbe,	// (0x000748a8) cl_listscroll_pane

0xdb0c,	// (0x0007b6f6) bg_cl_pane_g1

0xdb14,	// (0x0007b6fe) bg_cl_pane_g2

0xdb1c,	// (0x0007b706) bg_cl_pane_g3

0xdb24,	// (0x0007b70e) bg_cl_pane_g4

0xdb2c,	// (0x0007b716) bg_cl_pane_g5

0xdb34,	// (0x0007b71e) bg_cl_pane_g6

0xdb3c,	// (0x0007b726) bg_cl_pane_g7

0xdb44,	// (0x0007b72e) bg_cl_pane_g8

0xdb4c,	// (0x0007b736) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0007d66d) bg_cl_pane_g

0x6cce,	// (0x000748b8) aid_height_cl_leading_ParamLimits

0x6cce,	// (0x000748b8) aid_height_cl_leading

0x6cda,	// (0x000748c4) aid_height_cl_text_ParamLimits

0x6cda,	// (0x000748c4) aid_height_cl_text

0x960e,	// (0x000771f8) bg_cl_header_pane_ParamLimits

0x960e,	// (0x000771f8) bg_cl_header_pane

0x6cf9,	// (0x000748e3) cl_header_pane_g1_ParamLimits

0x6cf9,	// (0x000748e3) cl_header_pane_g1

0x6d0f,	// (0x000748f9) cl_header_pane_t1_ParamLimits

0x6d0f,	// (0x000748f9) cl_header_pane_t1

0xdb54,	// (0x0007b73e) cl_list_pane

0xd7c1,	// (0x0007b3ab) hc_scroll_pane_cp01

0xacc4,	// (0x000788ae) bg_cl_header_pane_g1

0xd6a3,	// (0x0007b28d) bg_cl_header_pane_g2

0xace4,	// (0x000788ce) bg_cl_header_pane_g3

0xd6b3,	// (0x0007b29d) bg_cl_header_pane_g4

0xd6ab,	// (0x0007b295) bg_cl_header_pane_g5

0xd8cd,	// (0x0007b4b7) bg_cl_header_pane_g6

0xd6cb,	// (0x0007b2b5) bg_cl_header_pane_g7

0xd6d3,	// (0x0007b2bd) bg_cl_header_pane_g8

0xd6c3,	// (0x0007b2ad) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0007d680) bg_cl_header_pane_g

0x6d28,	// (0x00074912) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6d28,	// (0x00074912) hc_cl_list_double_graphic_heading_pane

0x6d3b,	// (0x00074925) hc_cl_list_single_graphic_pane_ParamLimits

0x6d3b,	// (0x00074925) hc_cl_list_single_graphic_pane

0x6d53,	// (0x0007493d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6d53,	// (0x0007493d) hc_cl_list_single_graphic_pane_g1

0x6d5f,	// (0x00074949) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6d5f,	// (0x00074949) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0007d693) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0007d693) hc_cl_list_single_graphic_pane_g

0x6d73,	// (0x0007495d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6d73,	// (0x0007495d) hc_cl_list_single_graphic_pane_t1

0x6d53,	// (0x0007493d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6d53,	// (0x0007493d) hc_cl_list_double_graphic_heading_pane_g1

0x6d88,	// (0x00074972) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6d88,	// (0x00074972) hc_cl_list_double_graphic_heading_pane_g2

0x6d9c,	// (0x00074986) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6d9c,	// (0x00074986) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0007d698) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0007d698) hc_cl_list_double_graphic_heading_pane_g

0x6db0,	// (0x0007499a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6db0,	// (0x0007499a) hc_cl_list_double_graphic_heading_pane_t1

0x6dc5,	// (0x000749af) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6dc5,	// (0x000749af) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0007d69f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0007d69f) hc_cl_list_double_graphic_heading_pane_t

0x6dda,	// (0x000749c4) vid4_progress_pane_g1

0x6dec,	// (0x000749d6) vid4_progress_pane_g2

0x9ed1,	// (0x00077abb) vid4_progress_pane_g3

0xa477,	// (0x00078061) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0007d6a4) vid4_progress_pane_g

0xa495,	// (0x0007807f) vid4_progress_pane_t1

0xa4aa,	// (0x00078094) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0007d6af) vid4_progress_pane_t

0xa4d5,	// (0x000780bf) wait_bar_pane_cp07

0xca96,	// (0x0007a680) blid_firmament_pane_ParamLimits

0xcad9,	// (0x0007a6c3) popup_blid_sat_info2_window_g1

0xcafd,	// (0x0007a6e7) popup_blid_sat_info2_window_t3

0xcb0b,	// (0x0007a6f5) popup_blid_sat_info2_window_t4

0xcb19,	// (0x0007a703) popup_blid_sat_info2_window_t5

0xcb27,	// (0x0007a711) popup_blid_sat_info2_window_t6

0xcb37,	// (0x0007a721) popup_blid_sat_info2_window_t7

0xcb45,	// (0x0007a72f) popup_blid_sat_info2_window_t8

0xcb53,	// (0x0007a73d) popup_blid_sat_info2_window_t9

0xcb61,	// (0x0007a74b) popup_blid_sat_info2_window_t10

0xcc29,	// (0x0007a813) aid_firma_cardinal_ParamLimits

0xcc3d,	// (0x0007a827) blid_firmament_pane_t1_ParamLimits

0xcc54,	// (0x0007a83e) blid_firmament_pane_t2_ParamLimits

0xcc6b,	// (0x0007a855) blid_firmament_pane_t3_ParamLimits

0xcc82,	// (0x0007a86c) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x0007d2c2) blid_firmament_pane_t_ParamLimits

0xcc99,	// (0x0007a883) blid_sat_info_pane_ParamLimits

0x960e,	// (0x000771f8) main_cam_set_pane_ParamLimits

0x50fa,	// (0x00072ce4) aid_size_cell_colour_35_ParamLimits

0x511a,	// (0x00072d04) aid_size_cell_colour_112_ParamLimits

0x513a,	// (0x00072d24) aid_size_cell_effect_ParamLimits

0xc858,	// (0x0007a442) bg_tb_trans_pane_cp02_ParamLimits

0xaf1d,	// (0x00078b07) heading_imed_pane_ParamLimits

0x515a,	// (0x00072d44) listscroll_imed_pane_ParamLimits

0xbe7a,	// (0x00079a64) popup_call2_audio_first_window_g5_ParamLimits

0xbe7a,	// (0x00079a64) popup_call2_audio_first_window_g5

0x570b,	// (0x000732f5) aid_size_touch_image3_arrow_left_ParamLimits

0x570b,	// (0x000732f5) aid_size_touch_image3_arrow_left

0x5737,	// (0x00073321) aid_size_touch_image3_arrow_right_ParamLimits

0x5737,	// (0x00073321) aid_size_touch_image3_arrow_right

0xa4c0,	// (0x000780aa) vid4_progress_pane_t3

0x5479,	// (0x00073063) main_hwr_training_symbol_option_pane_ParamLimits

0x5479,	// (0x00073063) main_hwr_training_symbol_option_pane

0xd47d,	// (0x0007b067) popup_hwr_training_preview_window_ParamLimits

0xd47d,	// (0x0007b067) popup_hwr_training_preview_window

0x5499,	// (0x00073083) hwr_training_navi_pane_g5_ParamLimits

0x5499,	// (0x00073083) hwr_training_navi_pane_g5

0xd691,	// (0x0007b27b) popup_char_count_window

0xa2ad,	// (0x00077e97) bg_popup_sub_pane_cp20_ParamLimits

0x6737,	// (0x00074321) list_vitu2_match_list_pane_ParamLimits

0x6746,	// (0x00074330) vitu2_page_scroll_pane_ParamLimits

0x6746,	// (0x00074330) vitu2_page_scroll_pane

0xdb5d,	// (0x0007b747) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb5d,	// (0x0007b747) list_single_hwr_training_symbol_option_pane

0xdb70,	// (0x0007b75a) list_single_hwr_training_symbol_option_pane_g1

0xdb78,	// (0x0007b762) list_single_hwr_training_symbol_option_pane_t1

0xdb86,	// (0x0007b770) bg_button_pane_cp023

0xdb8f,	// (0x0007b779) bg_button_pane_cp024

0x6e36,	// (0x00074a20) vitu2_page_scroll_pane_g1

0x6e3e,	// (0x00074a28) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0007d6b6) vitu2_page_scroll_pane_g

0x6e48,	// (0x00074a32) vitu2_page_scroll_pane_t1

0xc9f6,	// (0x0007a5e0) popup_char_count_window_g1

0xdbc2,	// (0x0007b7ac) popup_char_count_window_g2

0xdbcb,	// (0x0007b7b5) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0007d6bb) popup_char_count_window_g

0xdbd4,	// (0x0007b7be) popup_char_count_window_t1

0x95b5,	// (0x0007719f) main_vded2_pane

0xd17a,	// (0x0007ad64) aid_size_cell_imed_line

0xd184,	// (0x0007ad6e) grid_imed_line_width_pane

0xa302,	// (0x00077eec) vid4_indicators_pane_g4

0xdbe2,	// (0x0007b7cc) cell_imed_line_width_pane_ParamLimits

0xdbe2,	// (0x0007b7cc) cell_imed_line_width_pane

0xdbf8,	// (0x0007b7e2) cell_imed_line_width_pane_g1

0xcdcd,	// (0x0007a9b7) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0007d6c2) cell_imed_line_width_pane_g

0x6e57,	// (0x00074a41) main_vded2_pane_g1_ParamLimits

0x6e57,	// (0x00074a41) main_vded2_pane_g1

0x6e72,	// (0x00074a5c) main_vded2_pane_g2_ParamLimits

0x6e72,	// (0x00074a5c) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0007d6c7) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0007d6c7) main_vded2_pane_g

0x6e84,	// (0x00074a6e) vded2_slider_pane_ParamLimits

0x6e84,	// (0x00074a6e) vded2_slider_pane

0x6e94,	// (0x00074a7e) aid_size_touch_vded2_end

0x6e9e,	// (0x00074a88) aid_size_touch_vded2_playhead

0xdc01,	// (0x0007b7eb) aid_size_touch_vded2_start

0xdc09,	// (0x0007b7f3) vded2_slider_bg_pane

0xdc12,	// (0x0007b7fc) vded2_slider_pane_g1

0xdc1b,	// (0x0007b805) vded2_slider_pane_g2

0x6ea8,	// (0x00074a92) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0007d6cc) vded2_slider_pane_g

0xdc23,	// (0x0007b80d) vded2_slider_bg_pane_g1

0xdc2c,	// (0x0007b816) vded2_slider_bg_pane_g2

0xdc35,	// (0x0007b81f) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0007d6d3) vded2_slider_bg_pane_g

0x2d6f,	// (0x00070959) aid_postcard_touch_down_pane_ParamLimits

0x2d6f,	// (0x00070959) aid_postcard_touch_down_pane

0x2d87,	// (0x00070971) aid_postcard_touch_up_pane_ParamLimits

0x2d87,	// (0x00070971) aid_postcard_touch_up_pane

0x95b5,	// (0x0007719f) main_blid2_pane

0xc866,	// (0x0007a450) popup_blid2_search_window

0x95b5,	// (0x0007719f) blid2_gps_pane

0x95b5,	// (0x0007719f) blid2_navig_pane

0x95b5,	// (0x0007719f) blid2_search_pane

0x95b5,	// (0x0007719f) blid2_tripm_pane

0x6eb3,	// (0x00074a9d) blid2_search_pane_g1_ParamLimits

0x6eb3,	// (0x00074a9d) blid2_search_pane_g1

0x6ec6,	// (0x00074ab0) blid2_search_pane_t1_ParamLimits

0x6ec6,	// (0x00074ab0) blid2_search_pane_t1

0x6ed8,	// (0x00074ac2) aid_size_cell_blid2_gps_ParamLimits

0x6ed8,	// (0x00074ac2) aid_size_cell_blid2_gps

0x6ef0,	// (0x00074ada) blid2_gps_pane_g1_ParamLimits

0x6ef0,	// (0x00074ada) blid2_gps_pane_g1

0x6f04,	// (0x00074aee) grid_blid2_satellite_pane_ParamLimits

0x6f04,	// (0x00074aee) grid_blid2_satellite_pane

0x6f1c,	// (0x00074b06) blid2_navig_pane_g1_ParamLimits

0x6f1c,	// (0x00074b06) blid2_navig_pane_g1

0x6f28,	// (0x00074b12) blid2_navig_pane_t1_ParamLimits

0x6f28,	// (0x00074b12) blid2_navig_pane_t1

0x6f43,	// (0x00074b2d) blid2_navig_pane_t2_ParamLimits

0x6f43,	// (0x00074b2d) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0007d6da) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0007d6da) blid2_navig_pane_t

0x6f5e,	// (0x00074b48) blid2_navig_ring_pane_ParamLimits

0x6f5e,	// (0x00074b48) blid2_navig_ring_pane

0x6f79,	// (0x00074b63) blid2_speed_pane_ParamLimits

0x6f79,	// (0x00074b63) blid2_speed_pane

0x6f85,	// (0x00074b6f) blid2_tripm_pane_g1_ParamLimits

0x6f85,	// (0x00074b6f) blid2_tripm_pane_g1

0x6fa0,	// (0x00074b8a) blid2_tripm_pane_g2_ParamLimits

0x6fa0,	// (0x00074b8a) blid2_tripm_pane_g2

0x6fb4,	// (0x00074b9e) blid2_tripm_pane_g3_ParamLimits

0x6fb4,	// (0x00074b9e) blid2_tripm_pane_g3

0x6fc8,	// (0x00074bb2) blid2_tripm_pane_g4_ParamLimits

0x6fc8,	// (0x00074bb2) blid2_tripm_pane_g4

0x6fdc,	// (0x00074bc6) blid2_tripm_pane_g5_ParamLimits

0x6fdc,	// (0x00074bc6) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0007d6df) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0007d6df) blid2_tripm_pane_g

0x7002,	// (0x00074bec) blid2_tripm_pane_t1_ParamLimits

0x7002,	// (0x00074bec) blid2_tripm_pane_t1

0x701b,	// (0x00074c05) blid2_tripm_pane_t2_ParamLimits

0x701b,	// (0x00074c05) blid2_tripm_pane_t2

0x7034,	// (0x00074c1e) blid2_tripm_pane_t3_ParamLimits

0x7034,	// (0x00074c1e) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0007d6ec) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0007d6ec) blid2_tripm_pane_t

0x707b,	// (0x00074c65) cell_blid2_satellite_pane_ParamLimits

0x707b,	// (0x00074c65) cell_blid2_satellite_pane

0x7099,	// (0x00074c83) cell_blid2_satellite_pane_g1

0xdc3e,	// (0x0007b828) cell_blid2_satellite_pane_t1

0xcca9,	// (0x0007a893) blid2_speed_pane_g1

0xdc4c,	// (0x0007b836) blid2_speed_pane_t1

0xdc5a,	// (0x0007b844) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0007d6f5) blid2_speed_pane_t

0xcca9,	// (0x0007a893) blid2_navig_ring_pane_g1

0x70a2,	// (0x00074c8c) blid2_navig_ring_pane_g2

0x70aa,	// (0x00074c94) blid2_navig_ring_pane_g3

0x70b2,	// (0x00074c9c) blid2_navig_ring_pane_g4

0x70ba,	// (0x00074ca4) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0007d6fa) blid2_navig_ring_pane_g

0x95b5,	// (0x0007719f) bg_popup_window_pane_cp011

0xdc68,	// (0x0007b852) popup_blid2_search_window_g1

0xdc70,	// (0x0007b85a) popup_blid2_search_window_t1

0xdc7e,	// (0x0007b868) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0007d705) popup_blid2_search_window_t

0xabd3,	// (0x000787bd) main_browser_pane_g1

0xa8bb,	// (0x000784a5) main_browser_pane_ParamLimits

0xa2ad,	// (0x00077e97) bg_button_pane_cp011_ParamLimits

0x5f81,	// (0x00073b6b) cell_vitu2_function_pane_g1_ParamLimits

0xc858,	// (0x0007a442) bg_popup_sub_pane_cp22_ParamLimits

0x6932,	// (0x0007451c) input_focus_pane_cp08_ParamLimits

0x6949,	// (0x00074533) popup_vitu2_query_button_pane_ParamLimits

0x6949,	// (0x00074533) popup_vitu2_query_button_pane

0x695a,	// (0x00074544) popup_vitu2_query_input_button_pane

0xd908,	// (0x0007b4f2) popup_vitu2_query_window_g1_ParamLimits

0x6964,	// (0x0007454e) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0007d606) popup_vitu2_query_window_g_ParamLimits

0x95b5,	// (0x0007719f) bg_button_pane_cp026

0x70c2,	// (0x00074cac) popup_vitu2_query_input_button_pane_g1

0x95b5,	// (0x0007719f) bg_button_pane_cp025

0xdc8c,	// (0x0007b876) popup_vitu2_query_button_pane_t1

0x4493,	// (0x0007207d) main_mp3_pane_t6

0x44a1,	// (0x0007208b) popup_slider_window_cp01

0xa258,	// (0x00077e42) cam4_battery_pane

0xa2bb,	// (0x00077ea5) cam4_battery_pane_cp02

0xa46f,	// (0x00078059) cam4_battery_pane_cp01

0xa46f,	// (0x00078059) cam4_battery_pane_cp03

0xd57b,	// (0x0007b165) cam4_battery_pane_g1

0xcca9,	// (0x0007a893) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0007d70a) cam4_battery_pane_g

0xcb6f,	// (0x0007a759) popup_blid_sat_info2_window_t11

0x266f,	// (0x00070259) aid_size_touch_mv_arrow_left_ParamLimits

0x2698,	// (0x00070282) aid_size_touch_mv_arrow_right_ParamLimits

0xb31d,	// (0x00078f07) navi_pane_g1_ParamLimits

0x26d7,	// (0x000702c1) navi_pane_g2_ParamLimits

0x2705,	// (0x000702ef) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0007cfd4) navi_pane_g_ParamLimits

0x275f,	// (0x00070349) navi_pane_mv_t1_ParamLimits

0x5166,	// (0x00072d50) grid_imed_effect_pane_ParamLimits

0x1119,	// (0x0006ed03) aid_placing_vt_slider_lsc

0xab1e,	// (0x00078708) aid_placing_vt_slider_prt

0x960e,	// (0x000771f8) bg_tb_trans_pane_cp01_ParamLimits

0xce01,	// (0x0007a9eb) popup_image_details_window_g1_ParamLimits

0xce14,	// (0x0007a9fe) popup_image_details_window_g2_ParamLimits

0xce29,	// (0x0007aa13) popup_image_details_window_g3_ParamLimits

0xce29,	// (0x0007aa13) popup_image_details_window_g3

0xf71d,	// (0x0007d307) popup_image_details_window_g_ParamLimits

0xce3d,	// (0x0007aa27) popup_image_details_window_t1_ParamLimits

0xce4f,	// (0x0007aa39) popup_image_details_window_t2_ParamLimits

0xce68,	// (0x0007aa52) popup_image_details_window_t3_ParamLimits

0xce7c,	// (0x0007aa66) popup_image_details_window_t4_ParamLimits

0xce97,	// (0x0007aa81) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x0007d30e) popup_image_details_window_t_ParamLimits

0x6ce6,	// (0x000748d0) cl_header_name_pane_ParamLimits

0x6ce6,	// (0x000748d0) cl_header_name_pane

0x70ca,	// (0x00074cb4) cl_header_name_pane_t1_ParamLimits

0x70ca,	// (0x00074cb4) cl_header_name_pane_t1

0x70eb,	// (0x00074cd5) cl_header_name_pane_t2_ParamLimits

0x70eb,	// (0x00074cd5) cl_header_name_pane_t2

0x712d,	// (0x00074d17) cl_header_name_pane_t3_ParamLimits

0x712d,	// (0x00074d17) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0007d70f) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0007d70f) cl_header_name_pane_t

0x2730,	// (0x0007031a) navi_pane_mv_g2_ParamLimits

0xd66b,	// (0x0007b255) field_vitu2_entry_pane_g1_ParamLimits

0xd677,	// (0x0007b261) field_vitu2_entry_pane_g2_ParamLimits

0xd683,	// (0x0007b26d) field_vitu2_entry_pane_g3_ParamLimits

0xd683,	// (0x0007b26d) field_vitu2_entry_pane_g3

0xf91b,	// (0x0007d505) field_vitu2_entry_pane_g_ParamLimits

0x5ef8,	// (0x00073ae2) cell_vitu2_itu_pane_g1_ParamLimits

0x5f08,	// (0x00073af2) cell_vitu2_itu_pane_g2_ParamLimits

0x5f08,	// (0x00073af2) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0007d511) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0007d511) cell_vitu2_itu_pane_g

0xa2ad,	// (0x00077e97) bg_vkb2_func_pane_cp05_ParamLimits

0xa2ad,	// (0x00077e97) bg_vkb2_func_pane_cp05

0xa2ad,	// (0x00077e97) bg_vkb2_func_pane_cp03

0xa2ad,	// (0x00077e97) bg_vkb2_func_pane_cp04

0xa2ad,	// (0x00077e97) bg_vkb2_func_pane_cp10_ParamLimits

0xa2ad,	// (0x00077e97) bg_vkb2_func_pane_cp10

0x6c88,	// (0x00074872) bg_vkb2_func_pane_cp08

0x6c6e,	// (0x00074858) bg_vkb2_func_pane_cp06

0x6c7c,	// (0x00074866) bg_vkb2_func_pane_cp07

0xdb98,	// (0x0007b782) bg_vkb2_func_pane_cp11_ParamLimits

0xdb98,	// (0x0007b782) bg_vkb2_func_pane_cp11

0xdbad,	// (0x0007b797) bg_vkb2_func_pane_cp12_ParamLimits

0xdbad,	// (0x0007b797) bg_vkb2_func_pane_cp12

0x95b5,	// (0x0007719f) bg_vkb2_func_pane_cp09

0xd6a3,	// (0x0007b28d) bg_vkb2_func_pane_g1

0xace4,	// (0x000788ce) bg_vkb2_func_pane_g2

0xd6ab,	// (0x0007b295) bg_vkb2_func_pane_g3

0xd6b3,	// (0x0007b29d) bg_vkb2_func_pane_g4

0xd8cd,	// (0x0007b4b7) bg_vkb2_func_pane_g5

0xd6cb,	// (0x0007b2b5) bg_vkb2_func_pane_g6

0xd6d3,	// (0x0007b2bd) bg_vkb2_func_pane_g7

0xd6c3,	// (0x0007b2ad) bg_vkb2_func_pane_g8

0xacc4,	// (0x000788ae) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0007d716) bg_vkb2_func_pane_g

0x6ff0,	// (0x00074bda) blid2_tripm_pane_g6_ParamLimits

0x6ff0,	// (0x00074bda) blid2_tripm_pane_g6

0xd535,	// (0x0007b11f) mp4_progress_pane_g1

0x7067,	// (0x00074c51) blid2_tripm_values_pane_ParamLimits

0x7067,	// (0x00074c51) blid2_tripm_values_pane

0x715e,	// (0x00074d48) blid2_tripm_values_pane_t1

0x716c,	// (0x00074d56) blid2_tripm_values_pane_t2

0x717a,	// (0x00074d64) blid2_tripm_values_pane_t3

0x7188,	// (0x00074d72) blid2_tripm_values_pane_t4

0x7196,	// (0x00074d80) blid2_tripm_values_pane_t5

0x71a4,	// (0x00074d8e) blid2_tripm_values_pane_t6

0x71b2,	// (0x00074d9c) blid2_tripm_values_pane_t7

0x71c0,	// (0x00074daa) blid2_tripm_values_pane_t8

0x71ce,	// (0x00074db8) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0007d729) blid2_tripm_values_pane_t

0x1156,	// (0x0006ed40) call_video_pane_t1_ParamLimits

0x1170,	// (0x0006ed5a) call_video_pane_t2_ParamLimits

0xf273,	// (0x0007ce5d) call_video_pane_t_ParamLimits

0x2cbc,	// (0x000708a6) msg_header_pane_g1_ParamLimits

0xb53f,	// (0x00079129) msg_header_pane_g2_ParamLimits

0xb53f,	// (0x00079129) msg_header_pane_g2

0x0001,

0xf48d,	// (0x0007d077) msg_header_pane_g_ParamLimits

0xf48d,	// (0x0007d077) msg_header_pane_g

0xa8bb,	// (0x000784a5) main_clock2_pane_ParamLimits

0x4e4d,	// (0x00072a37) grid_clock2_toolbar_pane_ParamLimits

0x4e4d,	// (0x00072a37) grid_clock2_toolbar_pane

0x4e4d,	// (0x00072a37) listscroll_clock2_pane_ParamLimits

0x4e4d,	// (0x00072a37) listscroll_clock2_pane

0x4f44,	// (0x00072b2e) main_clock2_pane_t3_ParamLimits

0x4f44,	// (0x00072b2e) main_clock2_pane_t3

0x4f68,	// (0x00072b52) main_clock2_pane_t4_ParamLimits

0x4f68,	// (0x00072b52) main_clock2_pane_t4

0xdc9a,	// (0x0007b884) cell_clock2_toolbar_pane

0xdca2,	// (0x0007b88c) cell_clock2_toolbar_pane_cp01

0xdca2,	// (0x0007b88c) cell_clock2_toolbar_pane_cp02

0xdcaa,	// (0x0007b894) cell_clock2_toolbar_pane_cp03

0xdcb2,	// (0x0007b89c) list_clock2_pane

0xb283,	// (0x00078e6d) scroll_pane_cp10

0xdcba,	// (0x0007b8a4) list_single_clock2_pane_ParamLimits

0xdcba,	// (0x0007b8a4) list_single_clock2_pane

0xb3bd,	// (0x00078fa7) list_highlight_pane_cp08

0xdcc7,	// (0x0007b8b1) list_single_clock2_pane_t1

0xdcd5,	// (0x0007b8bf) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0007d73c) list_single_clock2_pane_t

0x95b5,	// (0x0007719f) bg_button_pane_cp10

0xdce3,	// (0x0007b8cd) cell_clock2_toolbar_pane_g1

0x2cfb,	// (0x000708e5) aid_main_viewer_pane_g1_ParamLimits

0x2cfb,	// (0x000708e5) aid_main_viewer_pane_g1

0x2d09,	// (0x000708f3) aid_main_viewer_pane_g2_ParamLimits

0x2d09,	// (0x000708f3) aid_main_viewer_pane_g2

0x2d17,	// (0x00070901) aid_main_viewer_pane_g3_ParamLimits

0x2d17,	// (0x00070901) aid_main_viewer_pane_g3

0x2d26,	// (0x00070910) aid_main_viewer_pane_g4_ParamLimits

0x2d26,	// (0x00070910) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x0007d088) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0007d088) aid_main_viewer_pane_g

0x3679,	// (0x00071263) main_calc_pane_ParamLimits

0x368d,	// (0x00071277) main_dialer2_pane_ParamLimits

0x95b5,	// (0x0007719f) main_cam6_pane

0x95b5,	// (0x0007719f) main_vid6_pane

0x4e59,	// (0x00072a43) listscroll_gen_pane_cp06_ParamLimits

0x4e59,	// (0x00072a43) listscroll_gen_pane_cp06

0x4f8b,	// (0x00072b75) main_clock2_pane_t5_ParamLimits

0x4f8b,	// (0x00072b75) main_clock2_pane_t5

0x4feb,	// (0x00072bd5) aid_call2_pane_cp10_ParamLimits

0x4ffd,	// (0x00072be7) aid_call_pane_cp10_ParamLimits

0xb2f2,	// (0x00078edc) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2f2,	// (0x00078edc) popup_clock_analogue_window_cp10_g2_ParamLimits

0x500f,	// (0x00072bf9) popup_clock_analogue_window_cp10_g3_ParamLimits

0x500f,	// (0x00072bf9) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2f2,	// (0x00078edc) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0007d3be) popup_clock_analogue_window_cp10_g_ParamLimits

0x5025,	// (0x00072c0f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x56b8,	// (0x000732a2) cell_dialer2_keypad_pane_g2_ParamLimits

0x56b8,	// (0x000732a2) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0007d4a4) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0007d4a4) cell_dialer2_keypad_pane_g

0x56d4,	// (0x000732be) cell_dialer2_keypad_pane_t1

0x62aa,	// (0x00073e94) main_cset_text2_pane_ParamLimits

0x62aa,	// (0x00073e94) main_cset_text2_pane

0xdb00,	// (0x0007b6ea) area_vitu2_query_pane_g1_ParamLimits

0x6c0d,	// (0x000747f7) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0007d659) area_vitu2_query_pane_g_ParamLimits

0xa44b,	// (0x00078035) area_vitu2_query_pane_t7_ParamLimits

0xa44b,	// (0x00078035) area_vitu2_query_pane_t7

0x6c6e,	// (0x00074858) bg_button_pane_cp018_ParamLimits

0x6c7c,	// (0x00074866) bg_button_pane_cp021_ParamLimits

0x6c88,	// (0x00074872) bg_button_pane_cp022_ParamLimits

0x6c88,	// (0x00074872) bg_vkb2_func_pane_cp08_ParamLimits

0x6c6e,	// (0x00074858) bg_vkb2_func_pane_cp06_ParamLimits

0x6c7c,	// (0x00074866) bg_vkb2_func_pane_cp07_ParamLimits

0x6c99,	// (0x00074883) input_focus_pane_cp09_ParamLimits

0xa50b,	// (0x000780f5) cam6_autofocus_pane_ParamLimits

0xa50b,	// (0x000780f5) cam6_autofocus_pane

0x71dc,	// (0x00074dc6) cam6_image_uncrop_pane_ParamLimits

0x71dc,	// (0x00074dc6) cam6_image_uncrop_pane

0x71eb,	// (0x00074dd5) cam6_indi_pane_ParamLimits

0x71eb,	// (0x00074dd5) cam6_indi_pane

0x7201,	// (0x00074deb) cam6_mode_pane_ParamLimits

0x7201,	// (0x00074deb) cam6_mode_pane

0x7213,	// (0x00074dfd) cam6_timer_pane_ParamLimits

0x7213,	// (0x00074dfd) cam6_timer_pane

0x721f,	// (0x00074e09) cam6_zoom_pane_ParamLimits

0x721f,	// (0x00074e09) cam6_zoom_pane

0x722d,	// (0x00074e17) cam6_mode_pane_g1_ParamLimits

0x722d,	// (0x00074e17) cam6_mode_pane_g1

0x723d,	// (0x00074e27) cam6_mode_pane_g2_ParamLimits

0x723d,	// (0x00074e27) cam6_mode_pane_g2

0x724d,	// (0x00074e37) cam6_mode_pane_g3_ParamLimits

0x724d,	// (0x00074e37) cam6_mode_pane_g3

0x725d,	// (0x00074e47) cam6_mode_pane_g4_ParamLimits

0x725d,	// (0x00074e47) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0007d741) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0007d741) cam6_mode_pane_g

0xdceb,	// (0x0007b8d5) bg_tb_trans_pane_cp08_ParamLimits

0xdceb,	// (0x0007b8d5) bg_tb_trans_pane_cp08

0xdcf9,	// (0x0007b8e3) cam6_battery_pane_ParamLimits

0xdcf9,	// (0x0007b8e3) cam6_battery_pane

0xdd0f,	// (0x0007b8f9) cam6_indi_pane_g1_ParamLimits

0xdd0f,	// (0x0007b8f9) cam6_indi_pane_g1

0xdd21,	// (0x0007b90b) cam6_indi_pane_g2_ParamLimits

0xdd21,	// (0x0007b90b) cam6_indi_pane_g2

0xdd33,	// (0x0007b91d) cam6_indi_pane_g3_ParamLimits

0xdd33,	// (0x0007b91d) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0007d74a) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0007d74a) cam6_indi_pane_g

0xdd45,	// (0x0007b92f) cam6_indi_pane_t1_ParamLimits

0xdd45,	// (0x0007b92f) cam6_indi_pane_t1

0x5c9d,	// (0x00073887) cam6_autofocus_pane_g1

0x5c95,	// (0x0007387f) cam6_autofocus_pane_g2

0x5cad,	// (0x00073897) cam6_autofocus_pane_g3

0x5ca5,	// (0x0007388f) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0007d751) cam6_autofocus_pane_g

0xdd6b,	// (0x0007b955) cam6_timer_pane_g1

0xdd73,	// (0x0007b95d) cam6_timer_pane_t1

0xdd81,	// (0x0007b96b) cam6_zoom_cont_pane

0xdd89,	// (0x0007b973) cam6_zoom_pane_g1

0xdd91,	// (0x0007b97b) cam6_zoom_pane_g2

0x726d,	// (0x00074e57) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0007d75a) cam6_zoom_pane_g

0xcca9,	// (0x0007a893) cam6_battery_pane_g1

0xcca9,	// (0x0007a893) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x0007d2cb) cam6_battery_pane_g

0xdd99,	// (0x0007b983) cam6_zoom_cont_pane_g1

0xdda2,	// (0x0007b98c) cam6_zoom_cont_pane_g2

0xddab,	// (0x0007b995) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0007d761) cam6_zoom_cont_pane_g

0x728a,	// (0x00074e74) cam6_mode_pane_cp_ParamLimits

0x728a,	// (0x00074e74) cam6_mode_pane_cp

0x729c,	// (0x00074e86) cam6_zoom_pane_cp_ParamLimits

0x729c,	// (0x00074e86) cam6_zoom_pane_cp

0x72aa,	// (0x00074e94) vid6_image_uncrop_cif_pane_ParamLimits

0x72aa,	// (0x00074e94) vid6_image_uncrop_cif_pane

0x72ba,	// (0x00074ea4) vid6_image_uncrop_nhd_pane_ParamLimits

0x72ba,	// (0x00074ea4) vid6_image_uncrop_nhd_pane

0x72c9,	// (0x00074eb3) vid6_image_uncrop_vga_pane_ParamLimits

0x72c9,	// (0x00074eb3) vid6_image_uncrop_vga_pane

0x72d8,	// (0x00074ec2) vid6_image_uncrop_wvga_pane_ParamLimits

0x72d8,	// (0x00074ec2) vid6_image_uncrop_wvga_pane

0x72e7,	// (0x00074ed1) vid6_indi_pane_ParamLimits

0x72e7,	// (0x00074ed1) vid6_indi_pane

0xdceb,	// (0x0007b8d5) bg_tb_trans_pane_cp09_ParamLimits

0xdceb,	// (0x0007b8d5) bg_tb_trans_pane_cp09

0xddc3,	// (0x0007b9ad) cam6_battery_pane_cp_ParamLimits

0xddc3,	// (0x0007b9ad) cam6_battery_pane_cp

0xddcf,	// (0x0007b9b9) vid6_indi_pane_g1_ParamLimits

0xddcf,	// (0x0007b9b9) vid6_indi_pane_g1

0xdde1,	// (0x0007b9cb) vid6_indi_pane_g2_ParamLimits

0xdde1,	// (0x0007b9cb) vid6_indi_pane_g2

0xddf3,	// (0x0007b9dd) vid6_indi_pane_g3_ParamLimits

0xddf3,	// (0x0007b9dd) vid6_indi_pane_g3

0xde0a,	// (0x0007b9f4) vid6_indi_pane_g4_ParamLimits

0xde0a,	// (0x0007b9f4) vid6_indi_pane_g4

0xde21,	// (0x0007ba0b) vid6_indi_pane_g5_ParamLimits

0xde21,	// (0x0007ba0b) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0007d768) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0007d768) vid6_indi_pane_g

0xde3b,	// (0x0007ba25) vid6_indi_pane_t1_ParamLimits

0xde3b,	// (0x0007ba25) vid6_indi_pane_t1

0xde51,	// (0x0007ba3b) vid6_indi_pane_t2_ParamLimits

0xde51,	// (0x0007ba3b) vid6_indi_pane_t2

0xde79,	// (0x0007ba63) vid6_indi_pane_t3_ParamLimits

0xde79,	// (0x0007ba63) vid6_indi_pane_t3

0xdea1,	// (0x0007ba8b) vid6_indi_pane_t4_ParamLimits

0xdea1,	// (0x0007ba8b) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0007d773) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0007d773) vid6_indi_pane_t

0xdec5,	// (0x0007baaf) wait_bar_pane_cp08

0x72ff,	// (0x00074ee9) main_cset_text2_pane_t1_ParamLimits

0x72ff,	// (0x00074ee9) main_cset_text2_pane_t1

0x7275,	// (0x00074e5f) listscroll_gen_pane_cp06_t1_ParamLimits

0x7275,	// (0x00074e5f) listscroll_gen_pane_cp06_t1

0x95b5,	// (0x0007719f) main_cam6_set_pane

0xa24a,	// (0x00077e34) bg_tb_trans_pane_cp06_ParamLimits

0xa260,	// (0x00077e4a) cam4_indicators_pane_g1_ParamLimits

0xa271,	// (0x00077e5b) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0007d4e1) cam4_indicators_pane_g_ParamLimits

0xa289,	// (0x00077e73) cam4_indicators_pane_t1_ParamLimits

0xa2ad,	// (0x00077e97) bg_tb_trans_pane_cp07_ParamLimits

0xa2c5,	// (0x00077eaf) vid4_indicators_pane_g1_ParamLimits

0xa2db,	// (0x00077ec5) vid4_indicators_pane_g2_ParamLimits

0xa2ef,	// (0x00077ed9) vid4_indicators_pane_g3_ParamLimits

0xa302,	// (0x00077eec) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0007d4f3) vid4_indicators_pane_g_ParamLimits

0xa320,	// (0x00077f0a) vid4_indicators_pane_t1_ParamLimits

0x6dda,	// (0x000749c4) vid4_progress_pane_g1_ParamLimits

0x6dec,	// (0x000749d6) vid4_progress_pane_g2_ParamLimits

0x9ed1,	// (0x00077abb) vid4_progress_pane_g3_ParamLimits

0xa477,	// (0x00078061) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0007d6a4) vid4_progress_pane_g_ParamLimits

0xa495,	// (0x0007807f) vid4_progress_pane_t1_ParamLimits

0xa4aa,	// (0x00078094) vid4_progress_pane_t2_ParamLimits

0xa4c0,	// (0x000780aa) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0007d6af) vid4_progress_pane_t_ParamLimits

0xa4d5,	// (0x000780bf) wait_bar_pane_cp07_ParamLimits

0x731d,	// (0x00074f07) main_cam6_set_pane_g2_ParamLimits

0x731d,	// (0x00074f07) main_cam6_set_pane_g2

0x7343,	// (0x00074f2d) main_cset6_listscroll_pane_ParamLimits

0x7343,	// (0x00074f2d) main_cset6_listscroll_pane

0x7361,	// (0x00074f4b) main_cset6_slider_pane_ParamLimits

0x7361,	// (0x00074f4b) main_cset6_slider_pane

0x7377,	// (0x00074f61) main_cset6_text2_pane_ParamLimits

0x7377,	// (0x00074f61) main_cset6_text2_pane

0xded4,	// (0x0007babe) main_cset6_text_pane

0xdedc,	// (0x0007bac6) main_cset_list_pane_copy1_ParamLimits

0xdedc,	// (0x0007bac6) main_cset_list_pane_copy1

0xdeec,	// (0x0007bad6) scroll_pane_cp028_copy1

0x221b,	// (0x0006fe05) cset_list_set_pane_copy1

0x7385,	// (0x00074f6f) aid_position_infowindow_above_copy1

0x738d,	// (0x00074f77) aid_position_infowindow_below_copy1

0x7395,	// (0x00074f7f) cset_list_set_pane_g1_copy1

0x739d,	// (0x00074f87) cset_list_set_pane_g3_copy1_ParamLimits

0x739d,	// (0x00074f87) cset_list_set_pane_g3_copy1

0x73ac,	// (0x00074f96) cset_list_set_pane_t1_copy1_ParamLimits

0x73ac,	// (0x00074f96) cset_list_set_pane_t1_copy1

0x960e,	// (0x000771f8) list_highlight_pane_cp021_copy1_ParamLimits

0x960e,	// (0x000771f8) list_highlight_pane_cp021_copy1

0xdef5,	// (0x0007badf) cset6_slider_pane_ParamLimits

0xdef5,	// (0x0007badf) cset6_slider_pane

0xdf21,	// (0x0007bb0b) main_cset6_slider_pane_g1_ParamLimits

0xdf21,	// (0x0007bb0b) main_cset6_slider_pane_g1

0x73c1,	// (0x00074fab) main_cset6_slider_pane_g2_ParamLimits

0x73c1,	// (0x00074fab) main_cset6_slider_pane_g2

0xdf49,	// (0x0007bb33) main_cset6_slider_pane_g3_ParamLimits

0xdf49,	// (0x0007bb33) main_cset6_slider_pane_g3

0x73e9,	// (0x00074fd3) main_cset6_slider_pane_g4_ParamLimits

0x73e9,	// (0x00074fd3) main_cset6_slider_pane_g4

0x73f5,	// (0x00074fdf) main_cset6_slider_pane_g5_ParamLimits

0x73f5,	// (0x00074fdf) main_cset6_slider_pane_g5

0xd7d6,	// (0x0007b3c0) main_cset6_slider_pane_g7_ParamLimits

0xd7d6,	// (0x0007b3c0) main_cset6_slider_pane_g7

0xd7e2,	// (0x0007b3cc) main_cset6_slider_pane_g8_ParamLimits

0xd7e2,	// (0x0007b3cc) main_cset6_slider_pane_g8

0x6359,	// (0x00073f43) main_cset6_slider_pane_g9_ParamLimits

0x6359,	// (0x00073f43) main_cset6_slider_pane_g9

0x6365,	// (0x00073f4f) main_cset6_slider_pane_g10_ParamLimits

0x6365,	// (0x00073f4f) main_cset6_slider_pane_g10

0x6371,	// (0x00073f5b) main_cset6_slider_pane_g11_ParamLimits

0x6371,	// (0x00073f5b) main_cset6_slider_pane_g11

0x637d,	// (0x00073f67) main_cset6_slider_pane_g12_ParamLimits

0x637d,	// (0x00073f67) main_cset6_slider_pane_g12

0x6389,	// (0x00073f73) main_cset6_slider_pane_g13_ParamLimits

0x6389,	// (0x00073f73) main_cset6_slider_pane_g13

0x6395,	// (0x00073f7f) main_cset6_slider_pane_g14_ParamLimits

0x6395,	// (0x00073f7f) main_cset6_slider_pane_g14

0x7403,	// (0x00074fed) main_cset6_slider_pane_g15_ParamLimits

0x7403,	// (0x00074fed) main_cset6_slider_pane_g15

0x63b9,	// (0x00073fa3) main_cset6_slider_pane_g16_ParamLimits

0x63b9,	// (0x00073fa3) main_cset6_slider_pane_g16

0x63c7,	// (0x00073fb1) main_cset6_slider_pane_g17_ParamLimits

0x63c7,	// (0x00073fb1) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0007d77c) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0007d77c) main_cset6_slider_pane_g

0xdf55,	// (0x0007bb3f) main_cset6_slider_pane_t1_ParamLimits

0xdf55,	// (0x0007bb3f) main_cset6_slider_pane_t1

0x7433,	// (0x0007501d) main_cset6_slider_pane_t2_ParamLimits

0x7433,	// (0x0007501d) main_cset6_slider_pane_t2

0x745e,	// (0x00075048) main_cset6_slider_pane_t3_ParamLimits

0x745e,	// (0x00075048) main_cset6_slider_pane_t3

0x7489,	// (0x00075073) main_cset6_slider_pane_t4_ParamLimits

0x7489,	// (0x00075073) main_cset6_slider_pane_t4

0x74b4,	// (0x0007509e) main_cset6_slider_pane_t5_ParamLimits

0x74b4,	// (0x0007509e) main_cset6_slider_pane_t5

0xdf96,	// (0x0007bb80) main_cset6_slider_pane_t7_ParamLimits

0xdf96,	// (0x0007bb80) main_cset6_slider_pane_t7

0x74e1,	// (0x000750cb) main_cset6_slider_pane_t8_ParamLimits

0x74e1,	// (0x000750cb) main_cset6_slider_pane_t8

0x7505,	// (0x000750ef) main_cset6_slider_pane_t9_ParamLimits

0x7505,	// (0x000750ef) main_cset6_slider_pane_t9

0x7529,	// (0x00075113) main_cset6_slider_pane_t10_ParamLimits

0x7529,	// (0x00075113) main_cset6_slider_pane_t10

0x754d,	// (0x00075137) main_cset6_slider_pane_t11_ParamLimits

0x754d,	// (0x00075137) main_cset6_slider_pane_t11

0xdfcc,	// (0x0007bbb6) main_cset6_slider_pane_t14_ParamLimits

0xdfcc,	// (0x0007bbb6) main_cset6_slider_pane_t14

0xe005,	// (0x0007bbef) main_cset6_slider_pane_t15_ParamLimits

0xe005,	// (0x0007bbef) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0007d7a1) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0007d7a1) main_cset6_slider_pane_t

0xe03e,	// (0x0007bc28) cset_slider_pane_g1_copy1

0xe047,	// (0x0007bc31) cset_slider_pane_g2_copy1

0xe050,	// (0x0007bc3a) cset_slider_pane_g3_copy1

0x95b5,	// (0x0007719f) bg_popup_sub_pane_cp011_copy1

0xe059,	// (0x0007bc43) main_cset_text_pane_g1_copy1

0xd91c,	// (0x0007b506) main_cset_text_pane_t1_copy1

0xd92a,	// (0x0007b514) main_cset_text_pane_t2_copy1

0xd938,	// (0x0007b522) main_cset_text_pane_t3_copy1

0xd946,	// (0x0007b530) main_cset_text_pane_t4_copy1

0xd954,	// (0x0007b53e) main_cset_text_pane_t5_copy1

0xe061,	// (0x0007bc4b) main_cset_text_pane_t6_copy1

0xe083,	// (0x0007bc6d) main_cset_text_pane_t7_copy1

0x72ff,	// (0x00074ee9) main_cset_text2_pane_t1_copy1

0x960e,	// (0x000771f8) main_ncimui_pane

0x391b,	// (0x00071505) popup_query_ncimui_window_ParamLimits

0x391b,	// (0x00071505) popup_query_ncimui_window

0x9f9d,	// (0x00077b87) field_cale_ev2_pane_g4_ParamLimits

0x9f9d,	// (0x00077b87) field_cale_ev2_pane_g4

0x558a,	// (0x00073174) cell_video_dialer_keypad_pane_g2_ParamLimits

0x558a,	// (0x00073174) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0007d47f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0007d47f) cell_video_dialer_keypad_pane_g

0x55a2,	// (0x0007318c) cell_video_dialer_keypad_pane_t1

0x95b5,	// (0x0007719f) bg_popup_window_pane_cp012

0xb16f,	// (0x00078d59) heading_pane_cp06

0xe0af,	// (0x0007bc99) ncim_query_content_pane

0x95b5,	// (0x0007719f) bg_popup_heading_pane_cp01

0xe0b7,	// (0x0007bca1) ncim_heading_pane_t1

0xe0c5,	// (0x0007bcaf) ncim_indicator_popup_pane

0xe0d7,	// (0x0007bcc1) ncim_query_button_pane

0xe0ed,	// (0x0007bcd7) ncim_query_content_pane_t1

0xe0ff,	// (0x0007bce9) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0007d7e5) ncim_query_content_pane_t

0xe139,	// (0x0007bd23) ncim_query_list_pane

0xe14b,	// (0x0007bd35) ncim_query_popup_pane

0xe0c5,	// (0x0007bcaf) ncim_indicator_popup_pane_ParamLimits

0x773e,	// (0x00075328) ncim_query_content_pane_g1_ParamLimits

0x773e,	// (0x00075328) ncim_query_content_pane_g1

0xe0ed,	// (0x0007bcd7) ncim_query_content_pane_t1_ParamLimits

0xe0ff,	// (0x0007bce9) ncim_query_content_pane_t2_ParamLimits

0x774a,	// (0x00075334) ncim_query_content_pane_t3_ParamLimits

0x774a,	// (0x00075334) ncim_query_content_pane_t3

0x7772,	// (0x0007535c) ncim_query_content_pane_t4_ParamLimits

0x7772,	// (0x0007535c) ncim_query_content_pane_t4

0x779a,	// (0x00075384) ncim_query_content_pane_t5_ParamLimits

0x779a,	// (0x00075384) ncim_query_content_pane_t5

0xe111,	// (0x0007bcfb) ncim_query_content_pane_t6_ParamLimits

0xe111,	// (0x0007bcfb) ncim_query_content_pane_t6

0xfbfb,	// (0x0007d7e5) ncim_query_content_pane_t_ParamLimits

0xe139,	// (0x0007bd23) ncim_query_list_pane_ParamLimits

0xe14b,	// (0x0007bd35) ncim_query_popup_pane_ParamLimits

0xe15f,	// (0x0007bd49) wait_bar_pane_cp04

0x95b5,	// (0x0007719f) input_focus_pane_cp011

0xe167,	// (0x0007bd51) ncim_query_popup_pane_t1

0xe175,	// (0x0007bd5f) ncim_list_query_list_pane_ParamLimits

0xe175,	// (0x0007bd5f) ncim_list_query_list_pane

0x95b5,	// (0x0007719f) bg_button_pane_cp027

0xe188,	// (0x0007bd72) ncim_query_button_pane_g1

0x95b5,	// (0x0007719f) list_highlight_pane_cp012

0xe192,	// (0x0007bd7c) ncim_list_query_list_pane_g1

0xe19a,	// (0x0007bd84) ncim_list_query_list_pane_t1

0xa27d,	// (0x00077e67) cam4_indicators_pane_g3_ParamLimits

0xa27d,	// (0x00077e67) cam4_indicators_pane_g3

0xa30e,	// (0x00077ef8) vid4_indicators_pane_g5_ParamLimits

0xa30e,	// (0x00077ef8) vid4_indicators_pane_g5

0xa486,	// (0x00078070) vid4_progress_pane_g5_ParamLimits

0xa486,	// (0x00078070) vid4_progress_pane_g5

0x762c,	// (0x00075216) main_ncimui_pane_g1

0x7692,	// (0x0007527c) ncimui_group_query_pane_ParamLimits

0x7692,	// (0x0007527c) ncimui_group_query_pane

0x76da,	// (0x000752c4) ncimui_list_pane_ParamLimits

0x76da,	// (0x000752c4) ncimui_list_pane

0x7701,	// (0x000752eb) ncimui_text_pane_ParamLimits

0x7701,	// (0x000752eb) ncimui_text_pane

0x77c2,	// (0x000753ac) ncimui_text_pane_t1_ParamLimits

0x77c2,	// (0x000753ac) ncimui_text_pane_t1

0xe1a8,	// (0x0007bd92) ncimui_list_single_graphic_pane_ParamLimits

0xe1a8,	// (0x0007bd92) ncimui_list_single_graphic_pane

0x77e0,	// (0x000753ca) ncimui_query_pane_ParamLimits

0x77e0,	// (0x000753ca) ncimui_query_pane

0x95b5,	// (0x0007719f) list_highlight_pane_cp013

0xe1b8,	// (0x0007bda2) ncim_list_query_list_pane_t1_copy1

0xe192,	// (0x0007bd7c) ncim_list_single_graphic_pane_g1

0xe1c6,	// (0x0007bdb0) ncim_query_button_pane_cp01

0xe1d2,	// (0x0007bdbc) ncim_query_entry_pane_ParamLimits

0xe1d2,	// (0x0007bdbc) ncim_query_entry_pane

0xe1e5,	// (0x0007bdcf) ncimui_query_pane_g1

0xe1f1,	// (0x0007bddb) ncimui_query_pane_t1_ParamLimits

0xe1f1,	// (0x0007bddb) ncimui_query_pane_t1

0x960e,	// (0x000771f8) input_focus_pane_cp012

0xe20a,	// (0x0007bdf4) ncim_query_entry_pane_t1

0xa8bb,	// (0x000784a5) main_im_pane_ParamLimits

0x960e,	// (0x000771f8) main_mobtv_pane_ParamLimits

0x960e,	// (0x000771f8) main_mobtv_pane

0x741b,	// (0x00075005) main_cset6_slider_pane_g18_ParamLimits

0x741b,	// (0x00075005) main_cset6_slider_pane_g18

0x7427,	// (0x00075011) main_cset6_slider_pane_g19_ParamLimits

0x7427,	// (0x00075011) main_cset6_slider_pane_g19

0x77f3,	// (0x000753dd) bg_main_mobtv_pane_ParamLimits

0x77f3,	// (0x000753dd) bg_main_mobtv_pane

0x7801,	// (0x000753eb) main_mobtv_info_pane

0x780c,	// (0x000753f6) main_mobtv_loading_pane_ParamLimits

0x780c,	// (0x000753f6) main_mobtv_loading_pane

0xe21c,	// (0x0007be06) main_mobtv_pg_channel_list_pane

0xe226,	// (0x0007be10) main_mobtv_pg_hdr_pane

0x7819,	// (0x00075403) main_mobtv_programe_curr_pane_ParamLimits

0x7819,	// (0x00075403) main_mobtv_programe_curr_pane

0x7826,	// (0x00075410) main_mobtv_programe_next_pane_ParamLimits

0x7826,	// (0x00075410) main_mobtv_programe_next_pane

0xe22f,	// (0x0007be19) popup_mobtv_noti_window

0xcca9,	// (0x0007a893) main_tv_pg_hdr_pane_g1

0xe239,	// (0x0007be23) main_tv_pg_hdr_pane_g2

0xe241,	// (0x0007be2b) main_tv_pg_hdr_pane_g3

0xe249,	// (0x0007be33) main_tv_pg_hdr_pane_g4

0xe251,	// (0x0007be3b) main_tv_pg_hdr_pane_g5

0xe25b,	// (0x0007be45) main_tv_pg_hdr_pane_g6

0xe265,	// (0x0007be4f) main_tv_pg_hdr_pane_g7

0xe26f,	// (0x0007be59) main_tv_pg_hdr_pane_g8

0xe279,	// (0x0007be63) main_tv_pg_hdr_pane_g9

0xe283,	// (0x0007be6d) main_tv_pg_hdr_pane_g10

0xe28d,	// (0x0007be77) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0007d7f2) main_tv_pg_hdr_pane_g

0xe297,	// (0x0007be81) main_tv_pg_hdr_pane_t1

0xe2a5,	// (0x0007be8f) main_tv_pg_hdr_pane_t2

0xe2b3,	// (0x0007be9d) main_tv_pg_hdr_pane_t3

0xe2c3,	// (0x0007bead) main_tv_pg_hdr_pane_t4

0xe2d3,	// (0x0007bebd) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0007d809) main_tv_pg_hdr_pane_t

0xe2e3,	// (0x0007becd) single_mobtv_pg_channel_pane_ParamLimits

0xe2e3,	// (0x0007becd) single_mobtv_pg_channel_pane

0xe2f5,	// (0x0007bedf) single_mobtv_pg_channel_table_pane

0xe2fe,	// (0x0007bee8) single_mobtv_pg_channel_thumb_pane

0xe307,	// (0x0007bef1) single_tv_pg_channel_pane_g1

0xe310,	// (0x0007befa) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0007d814) single_tv_pg_channel_pane_g

0xcee1,	// (0x0007aacb) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcee1,	// (0x0007aacb) bg_single_mobtv_pg_channel_thumb_pane

0xe319,	// (0x0007bf03) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe319,	// (0x0007bf03) single_mobtv_pg_channel_thumb_pane_g1

0xe327,	// (0x0007bf11) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe327,	// (0x0007bf11) single_mobtv_pg_channel_thumb_pane_g2

0xe333,	// (0x0007bf1d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe333,	// (0x0007bf1d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0007d819) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0007d819) single_mobtv_pg_channel_thumb_pane_g

0xe33f,	// (0x0007bf29) single_mobtv_pg_channel_thumb_pane_t1

0xe34d,	// (0x0007bf37) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0007d820) single_mobtv_pg_channel_thumb_pane_t

0xcca9,	// (0x0007a893) bg_single_mobtv_pg_channel_table_pane_g1

0xcca9,	// (0x0007a893) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x0007d2cb) bg_single_mobtv_pg_channel_table_pane_g

0xe35b,	// (0x0007bf45) single_mobtv_pg_channel_table_pane_t1

0xe369,	// (0x0007bf53) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0007d825) single_mobtv_pg_channel_table_pane_t

0x783b,	// (0x00075425) main_mobtv_info_pane_g1_ParamLimits

0x783b,	// (0x00075425) main_mobtv_info_pane_g1

0x7859,	// (0x00075443) main_mobtv_info_pane_t1_ParamLimits

0x7859,	// (0x00075443) main_mobtv_info_pane_t1

0x78d1,	// (0x000754bb) main_mobtv_info_pane_t2_ParamLimits

0x78d1,	// (0x000754bb) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0007d82f) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0007d82f) main_mobtv_info_pane_t

0x7960,	// (0x0007554a) wait_bar_pane_cp05

0x7972,	// (0x0007555c) main_mobtv_loading_pane_g1_ParamLimits

0x7972,	// (0x0007555c) main_mobtv_loading_pane_g1

0x7983,	// (0x0007556d) main_mobtv_loading_pane_g2_ParamLimits

0x7983,	// (0x0007556d) main_mobtv_loading_pane_g2

0x798f,	// (0x00075579) main_mobtv_loading_pane_g3_ParamLimits

0x798f,	// (0x00075579) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0007d836) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0007d836) main_mobtv_loading_pane_g

0xe377,	// (0x0007bf61) main_mobtv_loading_pane_t1_ParamLimits

0xe377,	// (0x0007bf61) main_mobtv_loading_pane_t1

0xe38f,	// (0x0007bf79) main_mobtv_loading_pane_t2_ParamLimits

0xe38f,	// (0x0007bf79) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0007d83d) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0007d83d) main_mobtv_loading_pane_t

0x79a2,	// (0x0007558c) wait_bar_pane_cp06_ParamLimits

0x79a2,	// (0x0007558c) wait_bar_pane_cp06

0xe3b3,	// (0x0007bf9d) main_mobtv_programe_curr_pane_t1

0xe3c1,	// (0x0007bfab) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0007d842) main_mobtv_programe_curr_pane_t

0xe3cf,	// (0x0007bfb9) main_mobtv_programe_next_pane_t1

0xe3dd,	// (0x0007bfc7) main_mobtv_programe_next_pane_t2

0xe3eb,	// (0x0007bfd5) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0007d847) main_mobtv_programe_next_pane_t

0x95b5,	// (0x0007719f) bg_popup_mobtv_noti_window_pane

0xe3f9,	// (0x0007bfe3) popup_mobtv_noti_window_g1

0xe401,	// (0x0007bfeb) popup_mobtv_noti_window_t1

0xe40f,	// (0x0007bff9) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0007d84e) popup_mobtv_noti_window_t

0xcca9,	// (0x0007a893) bg_popup_mobtv_noti_window_pane_g1

0x95b5,	// (0x0007719f) sc_clock_pane

0x95b5,	// (0x0007719f) main_fs_bigclock_pane

0x7051,	// (0x00074c3b) blid2_tripm_pane_t4_ParamLimits

0x7051,	// (0x00074c3b) blid2_tripm_pane_t4

0x79b1,	// (0x0007559b) sc_clock_pane_g1_ParamLimits

0x79b1,	// (0x0007559b) sc_clock_pane_g1

0x79c3,	// (0x000755ad) sc_clock_pane_t1_ParamLimits

0x79c3,	// (0x000755ad) sc_clock_pane_t1

0x79e7,	// (0x000755d1) sc_clock_pane_t2_ParamLimits

0x79e7,	// (0x000755d1) sc_clock_pane_t2

0x79ff,	// (0x000755e9) sc_clock_pane_t3_ParamLimits

0x79ff,	// (0x000755e9) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0007d853) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0007d853) sc_clock_pane_t

0x8a7a,	// (0x00076664) main_fs_bigclock_indicator_pane_ParamLimits

0x8a7a,	// (0x00076664) main_fs_bigclock_indicator_pane

0xceb1,	// (0x0007aa9b) main_fs_bigclock_pane_g1_ParamLimits

0xceb1,	// (0x0007aa9b) main_fs_bigclock_pane_g1

0x8a86,	// (0x00076670) main_fs_bigclock_pane_t1_ParamLimits

0x8a86,	// (0x00076670) main_fs_bigclock_pane_t1

0x8a98,	// (0x00076682) main_fs_bigclock_pane_t2_ParamLimits

0x8a98,	// (0x00076682) main_fs_bigclock_pane_t2

0x8aac,	// (0x00076696) main_fs_bigclock_pane_t3_ParamLimits

0x8aac,	// (0x00076696) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0007da5d) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0007da5d) main_fs_bigclock_pane_t

0xec63,	// (0x0007c84d) main_fs_bigclock_indicator_pane_g1

0xe0df,	// (0x0007bcc9) ncim_query_content_pane_g2_ParamLimits

0xe0df,	// (0x0007bcc9) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0007d7e0) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0007d7e0) ncim_query_content_pane_g

0x7a16,	// (0x00075600) sc_clock_pane_t4_ParamLimits

0x7a16,	// (0x00075600) sc_clock_pane_t4

0x960e,	// (0x000771f8) main_radioblah_pane

0xd5ee,	// (0x0007b1d8) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5ee,	// (0x0007b1d8) cell_call4_button_pane_t1_copy1

0x7644,	// (0x0007522e) main_ncimui_pane_t1_ParamLimits

0x7644,	// (0x0007522e) main_ncimui_pane_t1

0x765e,	// (0x00075248) main_ncimui_pane_t2_ParamLimits

0x765e,	// (0x00075248) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0007d7d9) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0007d7d9) main_ncimui_pane_t

0xe55b,	// (0x0007c145) main_radioblah_anim_pane_ParamLimits

0xe55b,	// (0x0007c145) main_radioblah_anim_pane

0xe56c,	// (0x0007c156) main_radioblah_info_pane_ParamLimits

0xe56c,	// (0x0007c156) main_radioblah_info_pane

0xe580,	// (0x0007c16a) main_radioblah_pane_t1_ParamLimits

0xe580,	// (0x0007c16a) main_radioblah_pane_t1

0xe59c,	// (0x0007c186) main_radioblah_pane_t2_ParamLimits

0xe59c,	// (0x0007c186) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0007d874) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0007d874) main_radioblah_pane_t

0x7ac6,	// (0x000756b0) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7ac6,	// (0x000756b0) main_radioblah_rocker_ctrl_pane

0xe5e4,	// (0x0007c1ce) main_radioblah_info_pane_t1_ParamLimits

0xe5e4,	// (0x0007c1ce) main_radioblah_info_pane_t1

0x7b1e,	// (0x00075708) main_radioblah_info_pane_t2_ParamLimits

0x7b1e,	// (0x00075708) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0007d87d) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0007d87d) main_radioblah_info_pane_t

0xcca9,	// (0x0007a893) main_radioblah_rocker_ctrl_pane_g1

0x7bce,	// (0x000757b8) main_radioblah_rocker_ctrl_pane_g2

0x7bd6,	// (0x000757c0) main_radioblah_rocker_ctrl_pane_g3

0x7bde,	// (0x000757c8) main_radioblah_rocker_ctrl_pane_g4

0x7be6,	// (0x000757d0) main_radioblah_rocker_ctrl_pane_g5

0x7bee,	// (0x000757d8) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0007d886) main_radioblah_rocker_ctrl_pane_g

0x72ff,	// (0x00074ee9) main_cset_text2_pane_t1_copy1_ParamLimits

0xa240,	// (0x00077e2a) cam4_image_uncrop_qvga_pane

0xa2a3,	// (0x00077e8d) vid4_image_uncrop_qcif_pane

0xa50b,	// (0x000780f5) cam6_image_uncrop_qvga_pane_ParamLimits

0xa50b,	// (0x000780f5) cam6_image_uncrop_qvga_pane

0xddb3,	// (0x0007b99d) vid6_image_uncrop_qcif_pane_ParamLimits

0xddb3,	// (0x0007b99d) vid6_image_uncrop_qcif_pane

0x95b5,	// (0x0007719f) bg_popup_preview_window_pane_cp03

0xe091,	// (0x0007bc7b) list_cset_text2_pane

0xe099,	// (0x0007bc83) main_cset6_text2_pane_g1

0xe0a1,	// (0x0007bc8b) main_cset6_text2_pane_t1

0x7bf6,	// (0x000757e0) list_cset_text2_pane_t1_ParamLimits

0x7bf6,	// (0x000757e0) list_cset_text2_pane_t1

0x960e,	// (0x000771f8) main_radioblah_pane_ParamLimits

0x794c,	// (0x00075536) main_mobtv_info_pane_t3_ParamLimits

0x794c,	// (0x00075536) main_mobtv_info_pane_t3

0x7ab4,	// (0x0007569e) main_radioblah_pane_g1

0x7aee,	// (0x000756d8) main_radioblah_info_pane_g1

0x7b73,	// (0x0007575d) main_radioblah_info_pane_t3_ParamLimits

0x7b73,	// (0x0007575d) main_radioblah_info_pane_t3

0x213b,	// (0x0006fd25) highlight_cell_cale_month_pane_ParamLimits

0x213b,	// (0x0006fd25) highlight_cell_cale_month_pane

0x95b5,	// (0x0007719f) main_phob_fisheye_pane

0xcfbd,	// (0x0007aba7) scroll_pane_cp0031_ParamLimits

0xcfbd,	// (0x0007aba7) scroll_pane_cp0031

0xdec5,	// (0x0007baaf) wait_bar_pane_cp08_ParamLimits

0x221b,	// (0x0006fe05) cset_list_set_pane_copy1_ParamLimits

0xe61e,	// (0x0007c208) highlight_cell_cale_month_pane_g1

0x7c0f,	// (0x000757f9) highlight_cell_cale_month_pane_t1

0xdb54,	// (0x0007b73e) list_gen_pane_cp01

0xd7c1,	// (0x0007b3ab) scroll_pane_01

0x7c1d,	// (0x00075807) list_single_double_fisheye_pane

0x7c26,	// (0x00075810) list_double_fisheye_pane_g1_ParamLimits

0x7c26,	// (0x00075810) list_double_fisheye_pane_g1

0x7c32,	// (0x0007581c) list_double_fisheye_pane_g2_ParamLimits

0x7c32,	// (0x0007581c) list_double_fisheye_pane_g2

0x7c46,	// (0x00075830) list_double_fisheye_pane_g3_ParamLimits

0x7c46,	// (0x00075830) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0007d893) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0007d893) list_double_fisheye_pane_g

0x7c6f,	// (0x00075859) list_double_fisheye_pane_t1_ParamLimits

0x7c6f,	// (0x00075859) list_double_fisheye_pane_t1

0x7c8a,	// (0x00075874) list_double_fisheye_pane_t2_ParamLimits

0x7c8a,	// (0x00075874) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0007d89e) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0007d89e) list_double_fisheye_pane_t

0x95b5,	// (0x0007719f) main_call5_pane

0x7a41,	// (0x0007562b) sc_swipe_pane_ParamLimits

0x7a41,	// (0x0007562b) sc_swipe_pane

0x7cbf,	// (0x000758a9) call5_image_pane_ParamLimits

0x7cbf,	// (0x000758a9) call5_image_pane

0x7cdc,	// (0x000758c6) call5_swipe_1_pane_ParamLimits

0x7cdc,	// (0x000758c6) call5_swipe_1_pane

0x7cef,	// (0x000758d9) call5_swipe_2_pane_ParamLimits

0x7cef,	// (0x000758d9) call5_swipe_2_pane

0x7d1c,	// (0x00075906) popup_call5_audio_first_window_ParamLimits

0x7d1c,	// (0x00075906) popup_call5_audio_first_window

0xcee1,	// (0x0007aacb) call5_swipe_1_pane_g1_ParamLimits

0xcee1,	// (0x0007aacb) call5_swipe_1_pane_g1

0xe626,	// (0x0007c210) call5_swipe_1_pane_g2_ParamLimits

0xe626,	// (0x0007c210) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0007d8a3) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0007d8a3) call5_swipe_1_pane_g

0xe632,	// (0x0007c21c) call5_swipe_1_pane_t1_ParamLimits

0xe632,	// (0x0007c21c) call5_swipe_1_pane_t1

0xcee1,	// (0x0007aacb) call5_swipe_2_pane_g1_ParamLimits

0xcee1,	// (0x0007aacb) call5_swipe_2_pane_g1

0xe647,	// (0x0007c231) call5_swipe_2_pane_g2_ParamLimits

0xe647,	// (0x0007c231) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0007d8a8) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0007d8a8) call5_swipe_2_pane_g

0xe653,	// (0x0007c23d) call5_swipe_2_pane_t1_ParamLimits

0xe653,	// (0x0007c23d) call5_swipe_2_pane_t1

0xe668,	// (0x0007c252) sc_swipe_pane_g1_ParamLimits

0xe668,	// (0x0007c252) sc_swipe_pane_g1

0xe675,	// (0x0007c25f) sc_swipe_pane_g2_ParamLimits

0xe675,	// (0x0007c25f) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0007d8ad) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0007d8ad) sc_swipe_pane_g

0xe681,	// (0x0007c26b) sc_swipe_pane_t1_ParamLimits

0xe681,	// (0x0007c26b) sc_swipe_pane_t1

0x95b5,	// (0x0007719f) main_cmail_launcher_pane

0x7d31,	// (0x0007591b) aid_size_cell_cmail_l_ParamLimits

0x7d31,	// (0x0007591b) aid_size_cell_cmail_l

0x7d4b,	// (0x00075935) grid_cmail_l_pane_ParamLimits

0x7d4b,	// (0x00075935) grid_cmail_l_pane

0x7d66,	// (0x00075950) cell_cmail_l_pane_ParamLimits

0x7d66,	// (0x00075950) cell_cmail_l_pane

0x7d8e,	// (0x00075978) cell_cmail_l_pane_g1_ParamLimits

0x7d8e,	// (0x00075978) cell_cmail_l_pane_g1

0x7d9a,	// (0x00075984) cell_cmail_l_pane_t1_ParamLimits

0x7d9a,	// (0x00075984) cell_cmail_l_pane_t1

0xe696,	// (0x0007c280) cell_cmail_l_pane_t2_ParamLimits

0xe696,	// (0x0007c280) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0007d8b2) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0007d8b2) cell_cmail_l_pane_t

0x960e,	// (0x000771f8) grid_highlight_pane_cp018_ParamLimits

0x960e,	// (0x000771f8) grid_highlight_pane_cp018

0xfdce,	// (0x0006d9b8) main2_pane_ParamLimits

0xfdce,	// (0x0006d9b8) main2_pane

0xa966,	// (0x00078550) popup_sp_fs_action_menu_bg_pane_g1

0xa96e,	// (0x00078558) popup_sp_fs_action_menu_bg_pane_g2

0xa976,	// (0x00078560) popup_sp_fs_action_menu_bg_pane_g3

0xa97e,	// (0x00078568) popup_sp_fs_action_menu_bg_pane_g4

0xa986,	// (0x00078570) popup_sp_fs_action_menu_bg_pane_g5

0xa98e,	// (0x00078578) popup_sp_fs_action_menu_bg_pane_g6

0xa996,	// (0x00078580) popup_sp_fs_action_menu_bg_pane_g7

0xa99e,	// (0x00078588) popup_sp_fs_action_menu_bg_pane_g8

0xa9a6,	// (0x00078590) popup_sp_fs_action_menu_bg_pane_g9

0xa9ae,	// (0x00078598) popup_sp_fs_action_menu_bg_pane_g10

0xa9ae,	// (0x00078598) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0007cd77) popup_sp_fs_action_menu_bg_pane_g

0x9d9e,	// (0x00077988) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9d9e,	// (0x00077988) list_medium_line_x2_t3_g3_g1

0x0fbb,	// (0x0006eba5) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0fbb,	// (0x0006eba5) list_medium_line_x2_t3_g3_g2

0x9daa,	// (0x00077994) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9daa,	// (0x00077994) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0007ce27) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0007ce27) list_medium_line_x2_t3_g3_g

0x0fc7,	// (0x0006ebb1) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0fc7,	// (0x0006ebb1) list_medium_line_x2_t3_g3_t1

0x0fdc,	// (0x0006ebc6) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0fdc,	// (0x0006ebc6) list_medium_line_x2_t3_g3_t2

0x0ff0,	// (0x0006ebda) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0ff0,	// (0x0006ebda) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0007ce2e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0007ce2e) list_medium_line_x2_t3_g3_t

0x9d9e,	// (0x00077988) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9d9e,	// (0x00077988) list_medium_line_x2_t3_g2_g1

0x9daa,	// (0x00077994) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9daa,	// (0x00077994) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0007ce35) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0007ce35) list_medium_line_x2_t3_g2_g

0x1005,	// (0x0006ebef) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1005,	// (0x0006ebef) list_medium_line_x2_t3_g2_t1

0x101b,	// (0x0006ec05) list_medium_line_x2_t3_g2_t2_ParamLimits

0x101b,	// (0x0006ec05) list_medium_line_x2_t3_g2_t2

0x102d,	// (0x0006ec17) list_medium_line_x2_t3_g2_t3_ParamLimits

0x102d,	// (0x0006ec17) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0007ce3a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0007ce3a) list_medium_line_x2_t3_g2_t

0x9d9e,	// (0x00077988) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9d9e,	// (0x00077988) list_medium_line_x2_t4_g4_g1

0x104b,	// (0x0006ec35) list_medium_line_x2_t4_g4_g2_ParamLimits

0x104b,	// (0x0006ec35) list_medium_line_x2_t4_g4_g2

0x0fbb,	// (0x0006eba5) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0fbb,	// (0x0006eba5) list_medium_line_x2_t4_g4_g3

0x9db6,	// (0x000779a0) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9db6,	// (0x000779a0) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0007ce41) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0007ce41) list_medium_line_x2_t4_g4_g

0x1057,	// (0x0006ec41) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1057,	// (0x0006ec41) list_medium_line_x2_t4_g4_t1

0x1071,	// (0x0006ec5b) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1071,	// (0x0006ec5b) list_medium_line_x2_t4_g4_t2

0x1087,	// (0x0006ec71) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1087,	// (0x0006ec71) list_medium_line_x2_t4_g4_t3

0x109c,	// (0x0006ec86) list_medium_line_x2_t4_g4_t4_ParamLimits

0x109c,	// (0x0006ec86) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0007ce4a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0007ce4a) list_medium_line_x2_t4_g4_t

0x9d9e,	// (0x00077988) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9d9e,	// (0x00077988) list_medium_line_x2_t2_g4_g1

0x104b,	// (0x0006ec35) list_medium_line_x2_t2_g4_g2_ParamLimits

0x104b,	// (0x0006ec35) list_medium_line_x2_t2_g4_g2

0x0fbb,	// (0x0006eba5) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0fbb,	// (0x0006eba5) list_medium_line_x2_t2_g4_g3

0x9daa,	// (0x00077994) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9daa,	// (0x00077994) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0007ceb1) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0007ceb1) list_medium_line_x2_t2_g4_g

0x2161,	// (0x0006fd4b) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2161,	// (0x0006fd4b) list_medium_line_x2_t2_g4_t1

0x0ff0,	// (0x0006ebda) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0ff0,	// (0x0006ebda) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0007ceba) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0007ceba) list_medium_line_x2_t2_g4_t

0x9d9e,	// (0x00077988) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9d9e,	// (0x00077988) list_medium_line_x2_t2_g3_g1

0x0fbb,	// (0x0006eba5) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0fbb,	// (0x0006eba5) list_medium_line_x2_t2_g3_g2

0x9daa,	// (0x00077994) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9daa,	// (0x00077994) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0007ce27) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0007ce27) list_medium_line_x2_t2_g3_g

0x2176,	// (0x0006fd60) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2176,	// (0x0006fd60) list_medium_line_x2_t2_g3_t1

0x0ff0,	// (0x0006ebda) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0ff0,	// (0x0006ebda) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0007cebf) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0007cebf) list_medium_line_x2_t2_g3_t

0x22c0,	// (0x0006feaa) main_sp_fs_list_pane_ParamLimits

0x22c0,	// (0x0006feaa) main_sp_fs_list_pane

0x22cc,	// (0x0006feb6) sp_fs_scroll_pane_ParamLimits

0x22cc,	// (0x0006feb6) sp_fs_scroll_pane

0x22d8,	// (0x0006fec2) list_medium_line_x2_t3_t1

0x22e8,	// (0x0006fed2) list_medium_line_x2_t3_t2

0x22f6,	// (0x0006fee0) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0007cf0a) list_medium_line_x2_t3_t

0x2304,	// (0x0006feee) list_medium_line_x3_t4_t1

0x2314,	// (0x0006fefe) list_medium_line_x3_t4_t2

0x2322,	// (0x0006ff0c) list_medium_line_x3_t4_t3

0x22f6,	// (0x0006fee0) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0007cf11) list_medium_line_x3_t4_t

0x2330,	// (0x0006ff1a) list_medium_line_x4_t5_t1

0x2340,	// (0x0006ff2a) list_medium_line_x4_t5_t2

0x2322,	// (0x0006ff0c) list_medium_line_x4_t5_t3

0x234e,	// (0x0006ff38) list_medium_line_x4_t5_t4

0x22f6,	// (0x0006fee0) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0007cf1a) list_medium_line_x4_t5_t

0x9d9e,	// (0x00077988) list_medium_line_t4_g4_g1_ParamLimits

0x9d9e,	// (0x00077988) list_medium_line_t4_g4_g1

0x9db6,	// (0x000779a0) list_medium_line_t4_g4_g2_ParamLimits

0x9db6,	// (0x000779a0) list_medium_line_t4_g4_g2

0x235c,	// (0x0006ff46) list_medium_line_t4_g4_g3_ParamLimits

0x235c,	// (0x0006ff46) list_medium_line_t4_g4_g3

0x9daa,	// (0x00077994) list_medium_line_t4_g4_g4_ParamLimits

0x9daa,	// (0x00077994) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0007cf25) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0007cf25) list_medium_line_t4_g4_g

0x2368,	// (0x0006ff52) list_medium_line_t4_g4_t1_ParamLimits

0x2368,	// (0x0006ff52) list_medium_line_t4_g4_t1

0x237d,	// (0x0006ff67) list_medium_line_t4_g4_t2_ParamLimits

0x237d,	// (0x0006ff67) list_medium_line_t4_g4_t2

0x2393,	// (0x0006ff7d) list_medium_line_t4_g4_t3_ParamLimits

0x2393,	// (0x0006ff7d) list_medium_line_t4_g4_t3

0x0ff0,	// (0x0006ebda) list_medium_line_t4_g4_t4_ParamLimits

0x0ff0,	// (0x0006ebda) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0007cf2e) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0007cf2e) list_medium_line_t4_g4_t

0x246f,	// (0x00070059) chi_dic_find_pane_g1

0x36a1,	// (0x0007128b) main_tport_pane

0x66a1,	// (0x0007428b) list_medium_line_plain_t1

0x6755,	// (0x0007433f) list_medium_line_t2_g2_g1_ParamLimits

0x6755,	// (0x0007433f) list_medium_line_t2_g2_g1

0x6761,	// (0x0007434b) list_medium_line_t2_g2_g2_ParamLimits

0x6761,	// (0x0007434b) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0007d5ea) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0007d5ea) list_medium_line_t2_g2_g

0x676d,	// (0x00074357) list_medium_line_t2_g2_t1_ParamLimits

0x676d,	// (0x00074357) list_medium_line_t2_g2_t1

0x6784,	// (0x0007436e) list_medium_line_t2_g2_t2_ParamLimits

0x6784,	// (0x0007436e) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0007d5ef) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0007d5ef) list_medium_line_t2_g2_t

0xa4e9,	// (0x000780d3) aid_sp_fs_list_icon_a_sm

0xa4f1,	// (0x000780db) aid_sp_fs_list_icon_d

0xa4f9,	// (0x000780e3) aid_sp_fs_text_primary

0xa502,	// (0x000780ec) aid_sp_fs_text_secondary

0x6dfe,	// (0x000749e8) list_medium_line

0x6dfe,	// (0x000749e8) list_medium_line_g2

0x6dfe,	// (0x000749e8) list_medium_line_g3

0x6dfe,	// (0x000749e8) list_medium_line_plain

0x6dfe,	// (0x000749e8) list_medium_line_plain_t2

0x6dfe,	// (0x000749e8) list_medium_line_plain_t3

0x6dfe,	// (0x000749e8) list_medium_line_right_icon

0x6dfe,	// (0x000749e8) list_medium_line_right_iconx2

0x6dfe,	// (0x000749e8) list_medium_line_t2

0x6dfe,	// (0x000749e8) list_medium_line_t2_g2

0x6dfe,	// (0x000749e8) list_medium_line_t2_g3

0x6dfe,	// (0x000749e8) list_medium_line_t2_right_icon

0x6dfe,	// (0x000749e8) list_medium_line_t2_right_iconx2

0x6dfe,	// (0x000749e8) list_medium_line_t3

0x6dfe,	// (0x000749e8) list_medium_line_t3_g2

0x6dfe,	// (0x000749e8) list_medium_line_t3_g3

0x6dfe,	// (0x000749e8) list_medium_line_t3_right_iconx2

0x6e07,	// (0x000749f1) list_medium_line_t4_g4

0x6e10,	// (0x000749fa) list_medium_line_x2

0x6e10,	// (0x000749fa) list_medium_line_x2_t2_g2

0x6e10,	// (0x000749fa) list_medium_line_x2_t2_g3

0x6e10,	// (0x000749fa) list_medium_line_x2_t2_g4

0x6e10,	// (0x000749fa) list_medium_line_x2_t3

0x6e10,	// (0x000749fa) list_medium_line_x2_t3_g2

0x6e10,	// (0x000749fa) list_medium_line_x2_t3_g3

0x6e10,	// (0x000749fa) list_medium_line_x2_t3_g4

0x6e10,	// (0x000749fa) list_medium_line_x2_t4_g2

0x6e10,	// (0x000749fa) list_medium_line_x2_t4_g4

0x6e19,	// (0x00074a03) list_medium_line_x3

0x6e19,	// (0x00074a03) list_medium_line_x3_t4

0x6e19,	// (0x00074a03) list_medium_line_x3_t4_g4

0x6e07,	// (0x000749f1) list_medium_line_x4_t4

0x6e07,	// (0x000749f1) list_medium_line_x4_t4_g7

0x6e07,	// (0x000749f1) list_medium_line_x4_t5

0x6e22,	// (0x00074a0c) list_single_fs_dyc_pane_ParamLimits

0x6e22,	// (0x00074a0c) list_single_fs_dyc_pane

0x9d9e,	// (0x00077988) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9d9e,	// (0x00077988) list_medium_line_x4_t4_g7_g1

0xa519,	// (0x00078103) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa519,	// (0x00078103) list_medium_line_x4_t4_g7_g2

0x7573,	// (0x0007515d) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7573,	// (0x0007515d) list_medium_line_x4_t4_g7_g3

0x7582,	// (0x0007516c) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7582,	// (0x0007516c) list_medium_line_x4_t4_g7_g4

0x758e,	// (0x00075178) list_medium_line_x4_t4_g7_g5_ParamLimits

0x758e,	// (0x00075178) list_medium_line_x4_t4_g7_g5

0x759d,	// (0x00075187) list_medium_line_x4_t4_g7_g6_ParamLimits

0x759d,	// (0x00075187) list_medium_line_x4_t4_g7_g6

0xa525,	// (0x0007810f) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa525,	// (0x0007810f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0007d7ba) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0007d7ba) list_medium_line_x4_t4_g7_g

0x75ac,	// (0x00075196) list_medium_line_x4_t4_g7_t1_ParamLimits

0x75ac,	// (0x00075196) list_medium_line_x4_t4_g7_t1

0x75c1,	// (0x000751ab) list_medium_line_x4_t4_g7_t2_ParamLimits

0x75c1,	// (0x000751ab) list_medium_line_x4_t4_g7_t2

0x75d6,	// (0x000751c0) list_medium_line_x4_t4_g7_t3_ParamLimits

0x75d6,	// (0x000751c0) list_medium_line_x4_t4_g7_t3

0x75eb,	// (0x000751d5) list_medium_line_x4_t4_g7_t4_ParamLimits

0x75eb,	// (0x000751d5) list_medium_line_x4_t4_g7_t4

0xa531,	// (0x0007811b) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa531,	// (0x0007811b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0007d7c9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0007d7c9) list_medium_line_x4_t4_g7_t

0x75fd,	// (0x000751e7) list_single_dyc_row_pane_ParamLimits

0x75fd,	// (0x000751e7) list_single_dyc_row_pane

0x7cac,	// (0x00075896) call5_gesture_pane_ParamLimits

0x7cac,	// (0x00075896) call5_gesture_pane

0x7d02,	// (0x000758ec) call5_windows_pane_ParamLimits

0x7d02,	// (0x000758ec) call5_windows_pane

0x7db0,	// (0x0007599a) call5_swipe_1_pane_cp_ParamLimits

0x7db0,	// (0x0007599a) call5_swipe_1_pane_cp

0x7dbc,	// (0x000759a6) call5_swipe_2_pane_cp_ParamLimits

0x7dbc,	// (0x000759a6) call5_swipe_2_pane_cp

0xb3bd,	// (0x00078fa7) call5_image_pane_cp

0x7dc8,	// (0x000759b2) popup_call5_audio_first_window_cp_ParamLimits

0x7dc8,	// (0x000759b2) popup_call5_audio_first_window_cp

0xe668,	// (0x0007c252) call5_swipe_1_pane_g1_cp_ParamLimits

0xe668,	// (0x0007c252) call5_swipe_1_pane_g1_cp

0xe6a8,	// (0x0007c292) call5_swipe_1_pane_g2_cp

0xe681,	// (0x0007c26b) call5_swipe_1_pane_t1_cp_ParamLimits

0xe681,	// (0x0007c26b) call5_swipe_1_pane_t1_cp

0xe668,	// (0x0007c252) call5_swipe_2_pane_g1_cp_ParamLimits

0xe668,	// (0x0007c252) call5_swipe_2_pane_g1_cp

0xe6b0,	// (0x0007c29a) call5_swipe_2_pane_g2_cp

0xe6b8,	// (0x0007c2a2) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6b8,	// (0x0007c2a2) call5_swipe_2_pane_t1_cp

0x960e,	// (0x000771f8) main_sp_fs_email_pane

0xe6cd,	// (0x0007c2b7) main_sp_fs_listscroll_pane_te

0xa543,	// (0x0007812d) popup_sp_fs_action_menu_pane_ParamLimits

0xa543,	// (0x0007812d) popup_sp_fs_action_menu_pane

0xcca9,	// (0x0007a893) bg_sp_fs_ctrlbar_pane_g1

0xd23e,	// (0x0007ae28) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd250,	// (0x0007ae3a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd247,	// (0x0007ae31) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcca9,	// (0x0007a893) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0007d8b7) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca88,	// (0x0007a672) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca88,	// (0x0007a672) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6d6,	// (0x0007c2c0) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6d6,	// (0x0007c2c0) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6e2,	// (0x0007c2cc) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6e2,	// (0x0007c2cc) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0007d8c0) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0007d8c0) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6ee,	// (0x0007c2d8) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6ee,	// (0x0007c2d8) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7dd6,	// (0x000759c0) list_medium_line_t2_right_icon_g1

0x7dde,	// (0x000759c8) list_medium_line_t2_right_icon_t1

0x7dee,	// (0x000759d8) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0007d8c5) list_medium_line_t2_right_icon_t

0xc858,	// (0x0007a442) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc858,	// (0x0007a442) bg_sp_fs_ctrlbar_pane

0x7e4d,	// (0x00075a37) main_sp_fs_ctrlbar_button_pane_cp01

0x7e57,	// (0x00075a41) main_sp_fs_ctrlbar_ddmenu_pane

0xe740,	// (0x0007c32a) main_sp_fs_ctrlbar_pane_g1

0xe74c,	// (0x0007c336) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0007d8ca) main_sp_fs_ctrlbar_pane_g

0xe758,	// (0x0007c342) main_sp_fs_ctrlbar_pane_t1

0x7e61,	// (0x00075a4b) main_sp_fs_ctrlbar_pane

0x7e85,	// (0x00075a6f) main_sp_fs_listscroll_pane_te_cp01

0x7ea5,	// (0x00075a8f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7ea5,	// (0x00075a8f) popup_sp_fs_action_menu_pane_cp01

0x960e,	// (0x000771f8) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x960e,	// (0x000771f8) bg_sp_fs_highlight_list_pane_cp01

0xa589,	// (0x00078173) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa589,	// (0x00078173) sp_fs_action_menu_list_gene_pane_g1

0xe788,	// (0x0007c372) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe788,	// (0x0007c372) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0007d8d4) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0007d8d4) sp_fs_action_menu_list_gene_pane_g

0xa598,	// (0x00078182) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa598,	// (0x00078182) sp_fs_action_menu_list_gene_pane_t1

0xa5b0,	// (0x0007819a) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa5b0,	// (0x0007819a) sp_fs_action_menu_list_gene_pane

0xe795,	// (0x0007c37f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe795,	// (0x0007c37f) popup_sp_fs_action_menu_bg_pane

0xa5d3,	// (0x000781bd) sp_fs_action_menu_list_pane_ParamLimits

0xa5d3,	// (0x000781bd) sp_fs_action_menu_list_pane

0xe7a3,	// (0x0007c38d) sp_fs_scroll_pane_cp01_ParamLimits

0xe7a3,	// (0x0007c38d) sp_fs_scroll_pane_cp01

0x7ed5,	// (0x00075abf) list_medium_line_plain_t2_t1

0x7ee5,	// (0x00075acf) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0007d8d9) list_medium_line_plain_t2_t

0x7ef5,	// (0x00075adf) list_medium_line_plain_t3_t1

0x7f05,	// (0x00075aef) list_medium_line_plain_t3_t2

0x7f13,	// (0x00075afd) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0007d8de) list_medium_line_plain_t3_t

0x9d9e,	// (0x00077988) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9d9e,	// (0x00077988) list_medium_line_x2_t2_g2_g1

0x9daa,	// (0x00077994) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9daa,	// (0x00077994) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0007ce35) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0007ce35) list_medium_line_x2_t2_g2_g

0x2368,	// (0x0006ff52) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2368,	// (0x0006ff52) list_medium_line_x2_t2_g2_t1

0x0ff0,	// (0x0006ebda) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0ff0,	// (0x0006ebda) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0007d8e5) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0007d8e5) list_medium_line_x2_t2_g2_t

0x9d9e,	// (0x00077988) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9d9e,	// (0x00077988) list_medium_line_x2_t4_g2_g1

0xa5f7,	// (0x000781e1) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa5f7,	// (0x000781e1) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0007d8ea) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0007d8ea) list_medium_line_x2_t4_g2_g

0x7f21,	// (0x00075b0b) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7f21,	// (0x00075b0b) list_medium_line_x2_t4_g2_t1

0x7f3b,	// (0x00075b25) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7f3b,	// (0x00075b25) list_medium_line_x2_t4_g2_t2

0x7f51,	// (0x00075b3b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f51,	// (0x00075b3b) list_medium_line_x2_t4_g2_t3

0x0ff0,	// (0x0006ebda) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0ff0,	// (0x0006ebda) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0007d8ef) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0007d8ef) list_medium_line_x2_t4_g2_t

0x7f66,	// (0x00075b50) list_medium_line_t3_right_iconx2_g1

0x7dd6,	// (0x000759c0) list_medium_line_t3_right_iconx2_g2

0x7f6e,	// (0x00075b58) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0007d8f8) list_medium_line_t3_right_iconx2_g

0x7f78,	// (0x00075b62) list_medium_line_t3_right_iconx2_t1

0x7f88,	// (0x00075b72) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0007d8ff) list_medium_line_t3_right_iconx2_t

0x9d9e,	// (0x00077988) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9d9e,	// (0x00077988) list_medium_line_x3_t4_g4_g1

0x0fbb,	// (0x0006eba5) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0fbb,	// (0x0006eba5) list_medium_line_x3_t4_g4_g2

0x9db6,	// (0x000779a0) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9db6,	// (0x000779a0) list_medium_line_x3_t4_g4_g3

0x7f96,	// (0x00075b80) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7f96,	// (0x00075b80) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0007d904) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0007d904) list_medium_line_x3_t4_g4_g

0x7fa2,	// (0x00075b8c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7fa2,	// (0x00075b8c) list_medium_line_x3_t4_g4_t1

0x7fb9,	// (0x00075ba3) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7fb9,	// (0x00075ba3) list_medium_line_x3_t4_g4_t2

0x7fd4,	// (0x00075bbe) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7fd4,	// (0x00075bbe) list_medium_line_x3_t4_g4_t3

0x7fe9,	// (0x00075bd3) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7fe9,	// (0x00075bd3) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0007d90d) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0007d90d) list_medium_line_x3_t4_g4_t

0x8006,	// (0x00075bf0) list_single_dyc_row_text_pane_t1_ParamLimits

0x8006,	// (0x00075bf0) list_single_dyc_row_text_pane_t1

0x804f,	// (0x00075c39) list_single_dyc_row_text_pane_t2_ParamLimits

0x804f,	// (0x00075c39) list_single_dyc_row_text_pane_t2

0xa609,	// (0x000781f3) list_single_dyc_row_text_pane_t3_ParamLimits

0xa609,	// (0x000781f3) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0007d916) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0007d916) list_single_dyc_row_text_pane_t

0xa62d,	// (0x00078217) list_single_dyc_row_pane_g1_ParamLimits

0xa62d,	// (0x00078217) list_single_dyc_row_pane_g1

0xa639,	// (0x00078223) list_single_dyc_row_pane_g2_ParamLimits

0xa639,	// (0x00078223) list_single_dyc_row_pane_g2

0xa645,	// (0x0007822f) list_single_dyc_row_pane_g3_ParamLimits

0xa645,	// (0x0007822f) list_single_dyc_row_pane_g3

0xa651,	// (0x0007823b) list_single_dyc_row_pane_g4_ParamLimits

0xa651,	// (0x0007823b) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0007d923) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0007d923) list_single_dyc_row_pane_g

0xa65d,	// (0x00078247) list_single_dyc_row_text_pane_ParamLimits

0xa65d,	// (0x00078247) list_single_dyc_row_text_pane

0x95b5,	// (0x0007719f) bg_sp_fs_scroll_pane

0xe7c9,	// (0x0007c3b3) thumb_sp_fs_scroll_pane

0x6755,	// (0x0007433f) list_medium_line_g1_ParamLimits

0x6755,	// (0x0007433f) list_medium_line_g1

0x8184,	// (0x00075d6e) list_medium_line_t1_ParamLimits

0x8184,	// (0x00075d6e) list_medium_line_t1

0x9d9e,	// (0x00077988) list_medium_line_x2_g1_ParamLimits

0x9d9e,	// (0x00077988) list_medium_line_x2_g1

0x0fbb,	// (0x0006eba5) list_medium_line_x2_g2_ParamLimits

0x0fbb,	// (0x0006eba5) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0007d92c) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0007d92c) list_medium_line_x2_g

0xa67c,	// (0x00078266) list_medium_line_x2_t1_ParamLimits

0xa67c,	// (0x00078266) list_medium_line_x2_t1

0x9d9e,	// (0x00077988) list_medium_line_x3_g1_ParamLimits

0x9d9e,	// (0x00077988) list_medium_line_x3_g1

0x0fbb,	// (0x0006eba5) list_medium_line_x3_g2_ParamLimits

0x0fbb,	// (0x0006eba5) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0007d92c) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0007d92c) list_medium_line_x3_g

0xa67c,	// (0x00078266) list_medium_line_x3_t1_ParamLimits

0xa67c,	// (0x00078266) list_medium_line_x3_t1

0xe7d2,	// (0x0007c3bc) thumb_sp_fs_scroll_pane_g1

0xe7db,	// (0x0007c3c5) thumb_sp_fs_scroll_pane_g2

0xe7e4,	// (0x0007c3ce) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007d931) thumb_sp_fs_scroll_pane_g

0xe7d2,	// (0x0007c3bc) bg_sp_fs_scroll_pane_g1

0xe7db,	// (0x0007c3c5) bg_sp_fs_scroll_pane_g2

0xe7e4,	// (0x0007c3ce) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007d931) bg_sp_fs_scroll_pane_g

0x9d9e,	// (0x00077988) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9d9e,	// (0x00077988) list_medium_line_x2_t3_g4_g1

0x104b,	// (0x0006ec35) list_medium_line_x2_t3_g4_g2_ParamLimits

0x104b,	// (0x0006ec35) list_medium_line_x2_t3_g4_g2

0x0fbb,	// (0x0006eba5) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0fbb,	// (0x0006eba5) list_medium_line_x2_t3_g4_g3

0x9daa,	// (0x00077994) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9daa,	// (0x00077994) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0007ceb1) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0007ceb1) list_medium_line_x2_t3_g4_g

0x8199,	// (0x00075d83) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8199,	// (0x00075d83) list_medium_line_x2_t3_g4_t1

0x81af,	// (0x00075d99) list_medium_line_x2_t3_g4_t2_ParamLimits

0x81af,	// (0x00075d99) list_medium_line_x2_t3_g4_t2

0x0ff0,	// (0x0006ebda) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0ff0,	// (0x0006ebda) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0007d938) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0007d938) list_medium_line_x2_t3_g4_t

0x6755,	// (0x0007433f) list_medium_line_g2_g1_ParamLimits

0x6755,	// (0x0007433f) list_medium_line_g2_g1

0x6761,	// (0x0007434b) list_medium_line_g2_g2_ParamLimits

0x6761,	// (0x0007434b) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0007d5ea) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0007d5ea) list_medium_line_g2_g

0x81c8,	// (0x00075db2) list_medium_line_g2_t1_ParamLimits

0x81c8,	// (0x00075db2) list_medium_line_g2_t1

0x6755,	// (0x0007433f) list_medium_line_t3_g2_g1_ParamLimits

0x6755,	// (0x0007433f) list_medium_line_t3_g2_g1

0x6761,	// (0x0007434b) list_medium_line_t3_g2_g2_ParamLimits

0x6761,	// (0x0007434b) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0007d5ea) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0007d5ea) list_medium_line_t3_g2_g

0x81dd,	// (0x00075dc7) list_medium_line_t3_g2_t1_ParamLimits

0x81dd,	// (0x00075dc7) list_medium_line_t3_g2_t1

0x81f7,	// (0x00075de1) list_medium_line_t3_g2_t2_ParamLimits

0x81f7,	// (0x00075de1) list_medium_line_t3_g2_t2

0x820d,	// (0x00075df7) list_medium_line_t3_g2_t3_ParamLimits

0x820d,	// (0x00075df7) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0007d93f) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0007d93f) list_medium_line_t3_g2_t

0x7dd6,	// (0x000759c0) list_medium_line_right_icon_g1

0x8224,	// (0x00075e0e) list_medium_line_right_icon_t1

0x6755,	// (0x0007433f) list_medium_line_t2_g1_ParamLimits

0x6755,	// (0x0007433f) list_medium_line_t2_g1

0x8232,	// (0x00075e1c) list_medium_line_t2_t1_ParamLimits

0x8232,	// (0x00075e1c) list_medium_line_t2_t1

0x824c,	// (0x00075e36) list_medium_line_t2_t2_ParamLimits

0x824c,	// (0x00075e36) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0007d946) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0007d946) list_medium_line_t2_t

0x6755,	// (0x0007433f) list_medium_line_t3_g1_ParamLimits

0x6755,	// (0x0007433f) list_medium_line_t3_g1

0x8265,	// (0x00075e4f) list_medium_line_t3_t1_ParamLimits

0x8265,	// (0x00075e4f) list_medium_line_t3_t1

0x827f,	// (0x00075e69) list_medium_line_t3_t2_ParamLimits

0x827f,	// (0x00075e69) list_medium_line_t3_t2

0x8295,	// (0x00075e7f) list_medium_line_t3_t3_ParamLimits

0x8295,	// (0x00075e7f) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0007d94b) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0007d94b) list_medium_line_t3_t

0x6755,	// (0x0007433f) list_medium_line_g3_g1_ParamLimits

0x6755,	// (0x0007433f) list_medium_line_g3_g1

0x82aa,	// (0x00075e94) list_medium_line_g3_g2_ParamLimits

0x82aa,	// (0x00075e94) list_medium_line_g3_g2

0x6761,	// (0x0007434b) list_medium_line_g3_g3_ParamLimits

0x6761,	// (0x0007434b) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0007d952) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0007d952) list_medium_line_g3_g

0x82b6,	// (0x00075ea0) list_medium_line_g3_t1_ParamLimits

0x82b6,	// (0x00075ea0) list_medium_line_g3_t1

0x6755,	// (0x0007433f) list_medium_line_t2_g3_g1_ParamLimits

0x6755,	// (0x0007433f) list_medium_line_t2_g3_g1

0x82aa,	// (0x00075e94) list_medium_line_t2_g3_g2_ParamLimits

0x82aa,	// (0x00075e94) list_medium_line_t2_g3_g2

0x6761,	// (0x0007434b) list_medium_line_t2_g3_g3_ParamLimits

0x6761,	// (0x0007434b) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0007d952) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0007d952) list_medium_line_t2_g3_g

0x82cb,	// (0x00075eb5) list_medium_line_t2_g3_t1_ParamLimits

0x82cb,	// (0x00075eb5) list_medium_line_t2_g3_t1

0x82e2,	// (0x00075ecc) list_medium_line_t2_g3_t2_ParamLimits

0x82e2,	// (0x00075ecc) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0007d959) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0007d959) list_medium_line_t2_g3_t

0x6755,	// (0x0007433f) list_medium_line_t3_g3_g1_ParamLimits

0x6755,	// (0x0007433f) list_medium_line_t3_g3_g1

0x82aa,	// (0x00075e94) list_medium_line_t3_g3_g2_ParamLimits

0x82aa,	// (0x00075e94) list_medium_line_t3_g3_g2

0x6761,	// (0x0007434b) list_medium_line_t3_g3_g3_ParamLimits

0x6761,	// (0x0007434b) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0007d952) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0007d952) list_medium_line_t3_g3_g

0x82fb,	// (0x00075ee5) list_medium_line_t3_g3_t1_ParamLimits

0x82fb,	// (0x00075ee5) list_medium_line_t3_g3_t1

0x8314,	// (0x00075efe) list_medium_line_t3_g3_t2_ParamLimits

0x8314,	// (0x00075efe) list_medium_line_t3_g3_t2

0x832a,	// (0x00075f14) list_medium_line_t3_g3_t3_ParamLimits

0x832a,	// (0x00075f14) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0007d95e) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0007d95e) list_medium_line_t3_g3_t

0x7f66,	// (0x00075b50) list_medium_line_right_iconx2_g1

0x7dd6,	// (0x000759c0) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007d965) list_medium_line_right_iconx2_g

0x8344,	// (0x00075f2e) list_medium_line_right_iconx2_t1

0x7f66,	// (0x00075b50) list_medium_line_t2_right_iconx2_g1

0x7dd6,	// (0x000759c0) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007d965) list_medium_line_t2_right_iconx2_g

0x8352,	// (0x00075f3c) list_medium_line_t2_right_iconx2_t1

0x8362,	// (0x00075f4c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0007d96a) list_medium_line_t2_right_iconx2_t

0x8374,	// (0x00075f5e) list_medium_line_x4_t4_t1

0x8382,	// (0x00075f6c) list_medium_line_x4_t4_t2

0x8392,	// (0x00075f7c) list_medium_line_x4_t4_t3

0x83a2,	// (0x00075f8c) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0007d96f) list_medium_line_x4_t4_t

0x83f5,	// (0x00075fdf) tport_appsw_pane_ParamLimits

0x83f5,	// (0x00075fdf) tport_appsw_pane

0x840d,	// (0x00075ff7) tport_contact_pane_ParamLimits

0x840d,	// (0x00075ff7) tport_contact_pane

0x8425,	// (0x0007600f) tport_listscroll_pane_ParamLimits

0x8425,	// (0x0007600f) tport_listscroll_pane

0x843f,	// (0x00076029) cell_tport_appsw_pane_ParamLimits

0x843f,	// (0x00076029) cell_tport_appsw_pane

0xd683,	// (0x0007b26d) tport_appsw_pane_g1_ParamLimits

0xd683,	// (0x0007b26d) tport_appsw_pane_g1

0xe7ed,	// (0x0007c3d7) tport_contact_pane_g1

0xe7f6,	// (0x0007c3e0) tport_contact_pane_t1

0xe804,	// (0x0007c3ee) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0007d978) tport_contact_pane_t

0xe812,	// (0x0007c3fc) list_tport_pane

0xe81b,	// (0x0007c405) scroll_pane_cp_030

0x8491,	// (0x0007607b) cell_tport_appsw_pane_g1

0x84a1,	// (0x0007608b) cell_tport_appsw_pane_t1

0x84af,	// (0x00076099) grid_highlight_pane_cp019

0x84b7,	// (0x000760a1) list_tport_double_graphic_pane_ParamLimits

0x84b7,	// (0x000760a1) list_tport_double_graphic_pane

0x960e,	// (0x000771f8) list_highlight_pane_cp023_ParamLimits

0x960e,	// (0x000771f8) list_highlight_pane_cp023

0x84c4,	// (0x000760ae) list_tport_double_graphic_pane_g1_ParamLimits

0x84c4,	// (0x000760ae) list_tport_double_graphic_pane_g1

0x84d1,	// (0x000760bb) list_tport_double_graphic_pane_t1_ParamLimits

0x84d1,	// (0x000760bb) list_tport_double_graphic_pane_t1

0x84e6,	// (0x000760d0) list_tport_double_graphic_pane_t2_ParamLimits

0x84e6,	// (0x000760d0) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0007d984) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0007d984) list_tport_double_graphic_pane_t

0x95b5,	// (0x0007719f) main_cale_note_pane

0x5ea0,	// (0x00073a8a) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5ea0,	// (0x00073a8a) cell_vitu2_function_top_wide_pane_cp01

0x7960,	// (0x0007554a) wait_bar_pane_cp05_ParamLimits

0x960e,	// (0x000771f8) listscroll_cmail_pane

0xe82c,	// (0x0007c416) list_cmail_pane

0x8502,	// (0x000760ec) list_cmail_body_pane

0xe843,	// (0x0007c42d) list_single_cmail_header_caption_pane

0x8515,	// (0x000760ff) list_single_cmail_header_detail_pane_ParamLimits

0x8515,	// (0x000760ff) list_single_cmail_header_detail_pane

0x8540,	// (0x0007612a) list_single_cmail_header_caption_pane_t1

0x855b,	// (0x00076145) list_single_cmail_header_detail_pane_g1_ParamLimits

0x855b,	// (0x00076145) list_single_cmail_header_detail_pane_g1

0xa692,	// (0x0007827c) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa692,	// (0x0007827c) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0007d989) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0007d989) list_single_cmail_header_detail_pane_g

0x8573,	// (0x0007615d) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8573,	// (0x0007615d) list_single_cmail_header_detail_pane_t1

0x85bd,	// (0x000761a7) list_single_cmail_header_editor_pane_bg_ParamLimits

0x85bd,	// (0x000761a7) list_single_cmail_header_editor_pane_bg

0xe310,	// (0x0007befa) list_cmail_body_pane_g1

0xe86b,	// (0x0007c455) list_cmail_body_pane_t1

0xd6a3,	// (0x0007b28d) list_single_cmail_header_editor_pane_bg_g1

0xace4,	// (0x000788ce) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6b3,	// (0x0007b29d) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6ab,	// (0x0007b295) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8cd,	// (0x0007b4b7) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6d3,	// (0x0007b2bd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6c3,	// (0x0007b2ad) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6cb,	// (0x0007b2b5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacc4,	// (0x000788ae) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x85d6,	// (0x000761c0) calenote_gesture_pane_ParamLimits

0x85d6,	// (0x000761c0) calenote_gesture_pane

0x85f6,	// (0x000761e0) calenote_window_pane_ParamLimits

0x85f6,	// (0x000761e0) calenote_window_pane

0xe879,	// (0x0007c463) popup_note_window_cp01

0x8612,	// (0x000761fc) calenote_swipe_1_pane_ParamLimits

0x8612,	// (0x000761fc) calenote_swipe_1_pane

0x7dbc,	// (0x000759a6) calenote_swipe_2_pane_ParamLimits

0x7dbc,	// (0x000759a6) calenote_swipe_2_pane

0xe668,	// (0x0007c252) calenote_swipe_1_pane_g1_ParamLimits

0xe668,	// (0x0007c252) calenote_swipe_1_pane_g1

0xe675,	// (0x0007c25f) calenote_swipe_1_pane_g2_ParamLimits

0xe675,	// (0x0007c25f) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0007d8ad) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0007d8ad) calenote_swipe_1_pane_g

0xe88b,	// (0x0007c475) calenote_swipe_1_pane_t1_ParamLimits

0xe88b,	// (0x0007c475) calenote_swipe_1_pane_t1

0xe668,	// (0x0007c252) calenote_swipe_2_pane_g1_ParamLimits

0xe668,	// (0x0007c252) calenote_swipe_2_pane_g1

0xe8aa,	// (0x0007c494) calenote_swipe_2_pane_g2_ParamLimits

0xe8aa,	// (0x0007c494) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0007d995) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0007d995) calenote_swipe_2_pane_g

0xe8b6,	// (0x0007c4a0) calenote_swipe_2_pane_t1_ParamLimits

0xe8b6,	// (0x0007c4a0) calenote_swipe_2_pane_t1

0x95b5,	// (0x0007719f) main_mup_navstr_pane

0x4af4,	// (0x000726de) main_mup3_pane_t7_ParamLimits

0x4af4,	// (0x000726de) main_mup3_pane_t7

0xa05e,	// (0x00077c48) main_mp4_pane_g6_ParamLimits

0xa05e,	// (0x00077c48) main_mp4_pane_g6

0xa202,	// (0x00077dec) main_image3_pane_t4_ParamLimits

0xa202,	// (0x00077dec) main_image3_pane_t4

0x8627,	// (0x00076211) popup_navstr_preview_pane_ParamLimits

0x8627,	// (0x00076211) popup_navstr_preview_pane

0x8637,	// (0x00076221) scroll_navstr_pane_ParamLimits

0x8637,	// (0x00076221) scroll_navstr_pane

0x95b5,	// (0x0007719f) bg_popup_preview_window_pane_cp04

0xe8dd,	// (0x0007c4c7) popup_navstr_preview_pane_t1

0x864b,	// (0x00076235) scroll_navstr_pane_g1_ParamLimits

0x864b,	// (0x00076235) scroll_navstr_pane_g1

0x865f,	// (0x00076249) scroll_navstr_pane_t1_ParamLimits

0x865f,	// (0x00076249) scroll_navstr_pane_t1

0xe882,	// (0x0007c46c) bg_button_pane_cp014

0xe882,	// (0x0007c46c) bg_button_pane_cp030

0x7c52,	// (0x0007583c) list_double_fisheye_pane_g4_ParamLimits

0x7c52,	// (0x0007583c) list_double_fisheye_pane_g4

0x7c5e,	// (0x00075848) list_double_fisheye_pane_g5_ParamLimits

0x7c5e,	// (0x00075848) list_double_fisheye_pane_g5

0xe834,	// (0x0007c41e) sp_fs_scroll_pane_cp03

0xe740,	// (0x0007c32a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe74c,	// (0x0007c336) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0007d8ca) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe758,	// (0x0007c342) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x84f8,	// (0x000760e2) sp_fs_scroll_pane_cp02

0xa9d1,	// (0x000785bb) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9d1,	// (0x000785bb) popup_sp_fs_calendar_preview_list_single_pane

0x95b5,	// (0x0007719f) main_cam6_pano_pane

0x960e,	// (0x000771f8) main_mup3_pane_ParamLimits

0x95b5,	// (0x0007719f) main_phacti_pane

0x7833,	// (0x0007541d) bg_button_pane_cp11

0x784d,	// (0x00075437) main_mobtv_info_pane_g2_ParamLimits

0x784d,	// (0x00075437) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0007d82a) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0007d82a) main_mobtv_info_pane_g

0x7a28,	// (0x00075612) sc_clock_pane_t5_ParamLimits

0x7a28,	// (0x00075612) sc_clock_pane_t5

0x7ab4,	// (0x0007569e) main_radioblah_pane_g1_ParamLimits

0xe5b4,	// (0x0007c19e) main_radioblah_pane_t3_ParamLimits

0xe5b4,	// (0x0007c19e) main_radioblah_pane_t3

0xe5cc,	// (0x0007c1b6) main_radioblah_pane_t4_ParamLimits

0xe5cc,	// (0x0007c1b6) main_radioblah_pane_t4

0x7adc,	// (0x000756c6) main_radioblah_text_pane_ParamLimits

0x7adc,	// (0x000756c6) main_radioblah_text_pane

0x7aee,	// (0x000756d8) main_radioblah_info_pane_g1_ParamLimits

0x7b87,	// (0x00075771) main_radioblah_info_pane_t4_ParamLimits

0x7b87,	// (0x00075771) main_radioblah_info_pane_t4

0x960e,	// (0x000771f8) main_sp_fs_calendar_pane

0x8676,	// (0x00076260) main_phacti_pane_g1

0x867e,	// (0x00076268) phacti_note_pane_ParamLimits

0x867e,	// (0x00076268) phacti_note_pane

0xe8f4,	// (0x0007c4de) phacti_term_pane_ParamLimits

0xe8f4,	// (0x0007c4de) phacti_term_pane

0xe909,	// (0x0007c4f3) phacti_note_pane_t1_ParamLimits

0xe909,	// (0x0007c4f3) phacti_note_pane_t1

0xa6c2,	// (0x000782ac) phacti_term_pane_g1

0xa6ca,	// (0x000782b4) phacti_term_pane_t1_ParamLimits

0xa6ca,	// (0x000782b4) phacti_term_pane_t1

0xe920,	// (0x0007c50a) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe928,	// (0x0007c512) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0007d99f) popup_sp_fs_calendar_preview_list_single_pane_g

0xe930,	// (0x0007c51a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe930,	// (0x0007c51a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe946,	// (0x0007c530) aid_popup_sp_fs_bg_corner_pane

0xcca9,	// (0x0007a893) popup_sp_fs_calendar_preview_bg_pane_g1

0x95b5,	// (0x0007719f) popup_sp_fs_calendar_preview_bg_pane

0xe94e,	// (0x0007c538) popup_sp_fs_calendar_preview_list_pane

0xc858,	// (0x0007a442) bg_main_sp_fs_cale_pane_ParamLimits

0xc858,	// (0x0007a442) bg_main_sp_fs_cale_pane

0xa6fd,	// (0x000782e7) listscroll_cale_mrui_pane_ParamLimits

0xa6fd,	// (0x000782e7) listscroll_cale_mrui_pane

0xa712,	// (0x000782fc) listscroll_sp_fs_schedule_track_pane

0xa71b,	// (0x00078305) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa71b,	// (0x00078305) main_sp_fs_ctrlbar_pane_cp01

0xe956,	// (0x0007c540) main_sp_fs_ribbon_pane

0xa72e,	// (0x00078318) popup_sp_fs_cale_preview_window

0x86ef,	// (0x000762d9) list_single_sp_fs_schedule_track_pane_ParamLimits

0x86ef,	// (0x000762d9) list_single_sp_fs_schedule_track_pane

0x960e,	// (0x000771f8) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x960e,	// (0x000771f8) bg_sp_fs_highlight_list_pane_cp03

0x8703,	// (0x000762ed) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8703,	// (0x000762ed) list_single_sp_fs_schedule_track_pane_g1

0x870f,	// (0x000762f9) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x870f,	// (0x000762f9) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0007d9a4) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0007d9a4) list_single_sp_fs_schedule_track_pane_g

0x871b,	// (0x00076305) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x871b,	// (0x00076305) list_single_sp_fs_schedule_track_pane_t1

0x873d,	// (0x00076327) sp_fs_schedule_track_pane_ParamLimits

0x873d,	// (0x00076327) sp_fs_schedule_track_pane

0xe95e,	// (0x0007c548) sp_fs_schedule_track_pane_g1

0xe966,	// (0x0007c550) sp_fs_schedule_track_pane_g2

0xe96e,	// (0x0007c558) sp_fs_schedule_track_pane_g3

0xe976,	// (0x0007c560) sp_fs_schedule_track_pane_g4

0xe97e,	// (0x0007c568) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0007d9a9) sp_fs_schedule_track_pane_g

0xd6a3,	// (0x0007b28d) bg_sp_fs_schedule_viewer_highlight_g1

0xace4,	// (0x000788ce) bg_sp_fs_schedule_viewer_highlight_g2

0xd6ab,	// (0x0007b295) bg_sp_fs_schedule_viewer_highlight_g3

0xd6b3,	// (0x0007b29d) bg_sp_fs_schedule_viewer_highlight_g4

0xd8cd,	// (0x0007b4b7) bg_sp_fs_schedule_viewer_highlight_g5

0xd6c3,	// (0x0007b2ad) bg_sp_fs_schedule_viewer_highlight_g6

0xd6cb,	// (0x0007b2b5) bg_sp_fs_schedule_viewer_highlight_g7

0xd6d3,	// (0x0007b2bd) bg_sp_fs_schedule_viewer_highlight_g8

0xacc4,	// (0x000788ae) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0007d9b4) bg_sp_fs_schedule_viewer_highlight_g

0x95b5,	// (0x0007719f) bg_main_sp_fs_ribbon_pane

0x8752,	// (0x0007633c) main_sp_fs_ribbon_pane_g1

0xe986,	// (0x0007c570) main_sp_fs_ribbon_pane_t1

0x875b,	// (0x00076345) main_sp_fs_ribbon_pane_t2

0xe995,	// (0x0007c57f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0007d9c7) main_sp_fs_ribbon_pane_t

0xe9a4,	// (0x0007c58e) main_sp_fs_ribbon_scheduler_pane

0xe9ac,	// (0x0007c596) bg_main_sp_fs_ribbon_pane_g1

0xe9b5,	// (0x0007c59f) bg_main_sp_fs_ribbon_pane_g2

0xe9be,	// (0x0007c5a8) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0007d9ce) bg_main_sp_fs_ribbon_pane_g

0xe9c6,	// (0x0007c5b0) main_sp_fs_ribbon_scheduler_pane_g1

0xe9cf,	// (0x0007c5b9) main_sp_fs_ribbon_scheduler_pane_g2

0xe9d8,	// (0x0007c5c2) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0007d9d5) main_sp_fs_ribbon_scheduler_pane_g

0xe9e1,	// (0x0007c5cb) list_cale_mrui_pane

0x876a,	// (0x00076354) sp_fs_scroll_pane_cp07_ParamLimits

0x876a,	// (0x00076354) sp_fs_scroll_pane_cp07

0x8786,	// (0x00076370) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8786,	// (0x00076370) bg_sp_fs_schedule_viewer_highlight

0xe9ee,	// (0x0007c5d8) list_single_sp_fs_schedule_track_pane_cp01

0xe9f6,	// (0x0007c5e0) list_sp_fs_schedule_track_pane

0xe9fe,	// (0x0007c5e8) sp_fs_scroll_pane_cp06_ParamLimits

0xe9fe,	// (0x0007c5e8) sp_fs_scroll_pane_cp06

0xcca9,	// (0x0007a893) bgmain_sp_fs_calendar_pane_g1

0x8798,	// (0x00076382) list_single_cale_mrui_pane_ParamLimits

0x8798,	// (0x00076382) list_single_cale_mrui_pane

0xa740,	// (0x0007832a) list_single_cale_mrui_row_pane_ParamLimits

0xa740,	// (0x0007832a) list_single_cale_mrui_row_pane

0xa756,	// (0x00078340) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa756,	// (0x00078340) list_single_cale_mrui_row_pane_g1

0xa78e,	// (0x00078378) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa78e,	// (0x00078378) list_single_cale_mrui_row_pane_t1

0x87ad,	// (0x00076397) list_single_cale_mrui_row_pane_t2_ParamLimits

0x87ad,	// (0x00076397) list_single_cale_mrui_row_pane_t2

0xa7a0,	// (0x0007838a) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa7a0,	// (0x0007838a) list_single_cale_mrui_row_pane_t3

0xa7cf,	// (0x000783b9) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa7cf,	// (0x000783b9) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0007d9e3) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0007d9e3) list_single_cale_mrui_row_pane_t

0x8815,	// (0x000763ff) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8815,	// (0x000763ff) list_single_cmail_header_editor_pane_bg_cp01

0x883b,	// (0x00076425) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x883b,	// (0x00076425) list_single_cmail_header_editor_pane_bg_cp02

0x885b,	// (0x00076445) main_radioblah_text_pane_t1_ParamLimits

0x885b,	// (0x00076445) main_radioblah_text_pane_t1

0xea1d,	// (0x0007c607) cam6_indi_pane_cp01

0xea25,	// (0x0007c60f) cam6_mode_pane_cp01

0xea2d,	// (0x0007c617) cam6_pano_pane

0xea36,	// (0x0007c620) cam6_zoom_pane_cp01

0xea40,	// (0x0007c62a) cam6_pano_image_pane

0xea49,	// (0x0007c633) cam6_pano_pane_g1

0xe310,	// (0x0007befa) cam6_pano_pane_g2

0xea52,	// (0x0007c63c) cam6_pano_pane_g3

0xea5b,	// (0x0007c645) cam6_pano_pane_g4

0xd22b,	// (0x0007ae15) cam6_pano_pane_g5

0xea64,	// (0x0007c64e) cam6_pano_pane_g6

0xea6c,	// (0x0007c656) cam6_pano_pane_g7

0xea74,	// (0x0007c65e) cam6_pano_pane_g8

0xea7d,	// (0x0007c667) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0007d9ec) cam6_pano_pane_g

0x95b5,	// (0x0007719f) main_browser_tag_pane

0xe8d5,	// (0x0007c4bf) grid_navstr_albumart_pane

0xea88,	// (0x0007c672) cell_navstr_albumart_pane_ParamLimits

0xea88,	// (0x0007c672) cell_navstr_albumart_pane

0xeaa7,	// (0x0007c691) cell_navstr_albumart_pane_g1

0xc665,	// (0x0007a24f) cell_navstr_albumart_pane_g2

0xc675,	// (0x0007a25f) cell_navstr_albumart_pane_g3

0xc66d,	// (0x0007a257) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0007d9ff) cell_navstr_albumart_pane_g

0x8876,	// (0x00076460) bt_list_pane_ParamLimits

0x8876,	// (0x00076460) bt_list_pane

0x888c,	// (0x00076476) bt_list_pane_t1

0x889b,	// (0x00076485) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0007da08) bt_list_pane_t

0x95b5,	// (0x0007719f) main_cale_prevew_pane

0x88aa,	// (0x00076494) popup_cale_preview_window_ParamLimits

0x88aa,	// (0x00076494) popup_cale_preview_window

0x960e,	// (0x000771f8) bg_popup_preview_window_pane_cp05_ParamLimits

0x960e,	// (0x000771f8) bg_popup_preview_window_pane_cp05

0xeaaf,	// (0x0007c699) list_cale_preview_pane_ParamLimits

0xeaaf,	// (0x0007c699) list_cale_preview_pane

0x88c7,	// (0x000764b1) list_double_cale_preview_pane_ParamLimits

0x88c7,	// (0x000764b1) list_double_cale_preview_pane

0x88db,	// (0x000764c5) list_single_cale_preview_pane_ParamLimits

0x88db,	// (0x000764c5) list_single_cale_preview_pane

0x88f3,	// (0x000764dd) list_single_cale_preview_pane_g1

0x88fb,	// (0x000764e5) list_single_cale_preview_pane_t1_ParamLimits

0x88fb,	// (0x000764e5) list_single_cale_preview_pane_t1

0x8910,	// (0x000764fa) list_double_cale_preview_pane_g1

0x8918,	// (0x00076502) list_double_cale_preview_pane_t1_ParamLimits

0x8918,	// (0x00076502) list_double_cale_preview_pane_t1

0x892d,	// (0x00076517) list_double_cale_preview_pane_t2_ParamLimits

0x892d,	// (0x00076517) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0007da0d) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0007da0d) list_double_cale_preview_pane_t

0x95b5,	// (0x0007719f) main_ezdial_pane

0x960e,	// (0x000771f8) main_sp_fs_email_pane_ParamLimits

0x7e00,	// (0x000759ea) cmail_ddmenu_btn01_pane_ParamLimits

0x7e00,	// (0x000759ea) cmail_ddmenu_btn01_pane

0x7e13,	// (0x000759fd) cmail_ddmenu_btn02_pane_ParamLimits

0x7e13,	// (0x000759fd) cmail_ddmenu_btn02_pane

0x7e36,	// (0x00075a20) cmail_ddmenu_btn03_pane_ParamLimits

0x7e36,	// (0x00075a20) cmail_ddmenu_btn03_pane

0x7e61,	// (0x00075a4b) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e85,	// (0x00075a6f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8502,	// (0x000760ec) list_cmail_body_pane_ParamLimits

0x8550,	// (0x0007613a) bg_button_pane_cp12

0xe85e,	// (0x0007c448) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe85e,	// (0x0007c448) list_single_cmail_header_detail_pane_g3

0xa69e,	// (0x00078288) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa69e,	// (0x00078288) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0007d990) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0007d990) list_single_cmail_header_detail_pane_t

0xa6df,	// (0x000782c9) phacti_term_pane_t2_ParamLimits

0xa6df,	// (0x000782c9) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0007d99a) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0007d99a) phacti_term_pane_t

0xeabb,	// (0x0007c6a5) aid_size_list_single_double

0x8945,	// (0x0007652f) popup_ezdial_listscroll_window

0x8961,	// (0x0007654b) popup_number_entry_window_cp01

0xb3bd,	// (0x00078fa7) bg_popup_call_pane_cp09

0xeac7,	// (0x0007c6b1) ezdial_list_pane

0xeacf,	// (0x0007c6b9) scroll_pane_cp23

0xc858,	// (0x0007a442) bg_button_pane_cp028_ParamLimits

0xc858,	// (0x0007a442) bg_button_pane_cp028

0x896f,	// (0x00076559) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x896f,	// (0x00076559) cmail_ddmenu_btn01_pane_g1

0x897e,	// (0x00076568) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x897e,	// (0x00076568) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0007da12) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0007da12) cmail_ddmenu_btn01_pane_g

0xead7,	// (0x0007c6c1) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xead7,	// (0x0007c6c1) cmail_ddmenu_btn01_pane_t1

0xc858,	// (0x0007a442) bg_button_pane_cp029_ParamLimits

0xc858,	// (0x0007a442) bg_button_pane_cp029

0x8994,	// (0x0007657e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8994,	// (0x0007657e) cmail_ddmenu_btn02_pane_g1

0x89af,	// (0x00076599) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x89af,	// (0x00076599) cmail_ddmenu_btn02_pane_t1

0x960e,	// (0x000771f8) bg_button_pane_cp031_ParamLimits

0x960e,	// (0x000771f8) bg_button_pane_cp031

0x8994,	// (0x0007657e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8994,	// (0x0007657e) cmail_ddmenu_btn03_pane_g1

0x89af,	// (0x00076599) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x89af,	// (0x00076599) cmail_ddmenu_btn03_pane_t1

0x56d4,	// (0x000732be) cell_dialer2_keypad_pane_t1_ParamLimits

0x56ee,	// (0x000732d8) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x56ee,	// (0x000732d8) cell_dialer2_keypad_pane_t1_copy1

0x768a,	// (0x00075274) ncimui_group_button_pane

0x960e,	// (0x000771f8) main_sp_fs_calendar_pane_ParamLimits

0xe843,	// (0x0007c42d) list_single_cmail_header_caption_pane_ParamLimits

0xa6f4,	// (0x000782de) aid_recal_txt_sm_pane

0x95b5,	// (0x0007719f) mian_recal_day_pane

0xa72e,	// (0x00078318) popup_sp_fs_cale_preview_window_ParamLimits

0xeaed,	// (0x0007c6d7) list_recal_day_pane

0xa81a,	// (0x00078404) list_single_recal_day_pane_ParamLimits

0xa81a,	// (0x00078404) list_single_recal_day_pane

0xeb14,	// (0x0007c6fe) list_single_recal_day_pane_g1_ParamLimits

0xeb14,	// (0x0007c6fe) list_single_recal_day_pane_g1

0xa82c,	// (0x00078416) list_single_recal_day_pane_g2_ParamLimits

0xa82c,	// (0x00078416) list_single_recal_day_pane_g2

0xa838,	// (0x00078422) list_single_recal_day_pane_g3_ParamLimits

0xa838,	// (0x00078422) list_single_recal_day_pane_g3

0x89d6,	// (0x000765c0) list_single_recal_day_pane_g4_ParamLimits

0x89d6,	// (0x000765c0) list_single_recal_day_pane_g4

0xa844,	// (0x0007842e) list_single_recal_day_pane_g5_ParamLimits

0xa844,	// (0x0007842e) list_single_recal_day_pane_g5

0xbabd,	// (0x000796a7) list_single_recal_day_pane_g6_ParamLimits

0xbabd,	// (0x000796a7) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0007da21) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0007da21) list_single_recal_day_pane_g

0xbad1,	// (0x000796bb) list_single_recal_day_pane_t1

0xbae3,	// (0x000796cd) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0007da2c) list_single_recal_day_pane_t

0x89ee,	// (0x000765d8) ncimui_query_button_pane_ParamLimits

0x89ee,	// (0x000765d8) ncimui_query_button_pane

0x89fe,	// (0x000765e8) ncimui_query_button_pane_t1_ParamLimits

0x89fe,	// (0x000765e8) ncimui_query_button_pane_t1

0xeb20,	// (0x0007c70a) ncimui_query_button_pane_t2_ParamLimits

0xeb20,	// (0x0007c70a) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0007da31) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0007da31) ncimui_query_button_pane_t

0x8a11,	// (0x000765fb) query_button_pane_ParamLimits

0x8a11,	// (0x000765fb) query_button_pane

0x95b5,	// (0x0007719f) bg_button_pane_cp0028

0xeb33,	// (0x0007c71d) query_button_pane_t1

0x36a1,	// (0x0007128b) main_tport_pane_ParamLimits

0x83b2,	// (0x00075f9c) bg_popup_window_pane_cp01_ParamLimits

0x83b2,	// (0x00075f9c) bg_popup_window_pane_cp01

0x83cd,	// (0x00075fb7) heading_pane_cp08_ParamLimits

0x83cd,	// (0x00075fb7) heading_pane_cp08

0x83e0,	// (0x00075fca) heading_pane_cp07_ParamLimits

0x83e0,	// (0x00075fca) heading_pane_cp07

0x8491,	// (0x0007607b) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0007d97d) cell_tport_appsw_pane_g

0x2c37,	// (0x00070821) input_candi_list_open_g1

0xae98,	// (0x00078a82) list_cale_time_pane_g6_ParamLimits

0xae98,	// (0x00078a82) list_cale_time_pane_g6

0x44ab,	// (0x00072095) aid_size_touch_calib_1_ParamLimits

0x44ab,	// (0x00072095) aid_size_touch_calib_1

0x44bd,	// (0x000720a7) aid_size_touch_calib_2_ParamLimits

0x44bd,	// (0x000720a7) aid_size_touch_calib_2

0x44d5,	// (0x000720bf) aid_size_touch_calib_3_ParamLimits

0x44d5,	// (0x000720bf) aid_size_touch_calib_3

0x44f3,	// (0x000720dd) aid_size_touch_calib_4_ParamLimits

0x44f3,	// (0x000720dd) aid_size_touch_calib_4

0x450b,	// (0x000720f5) main_touch_calib_button_group_pane_ParamLimits

0x450b,	// (0x000720f5) main_touch_calib_button_group_pane

0x4523,	// (0x0007210d) main_touch_calib_pane_g1_ParamLimits

0x4535,	// (0x0007211f) main_touch_calib_pane_g2_ParamLimits

0x4547,	// (0x00072131) main_touch_calib_pane_g3_ParamLimits

0x4559,	// (0x00072143) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x0007d340) main_touch_calib_pane_g_ParamLimits

0x456b,	// (0x00072155) main_touch_calib_pane_t1_ParamLimits

0x4585,	// (0x0007216f) main_touch_calib_pane_t2_ParamLimits

0x459f,	// (0x00072189) main_touch_calib_pane_t3_ParamLimits

0x45b3,	// (0x0007219d) main_touch_calib_pane_t4_ParamLimits

0x45c9,	// (0x000721b3) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x0007d349) main_touch_calib_pane_t_ParamLimits

0xcfe1,	// (0x0007abcb) list_single_fp_cale_pane_g3_ParamLimits

0xcfe1,	// (0x0007abcb) list_single_fp_cale_pane_g3

0xa2ad,	// (0x00077e97) bg_button_pane_cp012_ParamLimits

0xa2ad,	// (0x00077e97) bg_vkb2_func_pane_cp03_ParamLimits

0x670b,	// (0x000742f5) cell_vitu2_function_top_pane_g1_ParamLimits

0xa2ad,	// (0x00077e97) bg_vkb2_func_pane_cp04_ParamLimits

0x7618,	// (0x00075202) main_ncimui_button_group_pane_ParamLimits

0x7618,	// (0x00075202) main_ncimui_button_group_pane

0x7678,	// (0x00075262) main_ncimui_pane_t3_ParamLimits

0x7678,	// (0x00075262) main_ncimui_pane_t3

0xe8eb,	// (0x0007c4d5) phacti_button_group_pane

0xeabb,	// (0x0007c6a5) aid_size_list_single_double_ParamLimits

0x8945,	// (0x0007652f) popup_ezdial_listscroll_window_ParamLimits

0x8961,	// (0x0007654b) popup_number_entry_window_cp01_ParamLimits

0x8a24,	// (0x0007660e) phacti_button_pane_ParamLimits

0x8a24,	// (0x0007660e) phacti_button_pane

0x95b5,	// (0x0007719f) bg_button_pane_cp14

0xeb41,	// (0x0007c72b) phacti_button_pane_t1

0x8a35,	// (0x0007661f) main_touch_calib_button_pane_ParamLimits

0x8a35,	// (0x0007661f) main_touch_calib_button_pane

0xa8bb,	// (0x000784a5) bg_button_pane_cp18_ParamLimits

0xa8bb,	// (0x000784a5) bg_button_pane_cp18

0xeb4f,	// (0x0007c739) main_touch_calib_button_pane_t1_ParamLimits

0xeb4f,	// (0x0007c739) main_touch_calib_button_pane_t1

0xeb65,	// (0x0007c74f) main_touch_calib_button_pane_t2_ParamLimits

0xeb65,	// (0x0007c74f) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0007da36) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0007da36) main_touch_calib_button_pane_t

0x95b5,	// (0x0007719f) cell_ncimui_button_pane

0x95b5,	// (0x0007719f) bg_button_pane_cp032

0xeb83,	// (0x0007c76d) cell_ncimui_button_pane_t1

0xa1e0,	// (0x00077dca) image3_infobar_pane_ParamLimits

0xa1e0,	// (0x00077dca) image3_infobar_pane

0x7a54,	// (0x0007563e) fs_bigclock_status_pane_ParamLimits

0x7a54,	// (0x0007563e) fs_bigclock_status_pane

0x7a61,	// (0x0007564b) main_fs_bigclock_clock_pane_ParamLimits

0x7a61,	// (0x0007564b) main_fs_bigclock_clock_pane

0x7a75,	// (0x0007565f) main_fs_bigclock_indi_pane_ParamLimits

0x7a75,	// (0x0007565f) main_fs_bigclock_indi_pane

0x7a90,	// (0x0007567a) main_fs_bigclock_swipe_pane_ParamLimits

0x7a90,	// (0x0007567a) main_fs_bigclock_swipe_pane

0x95b5,	// (0x0007719f) main_fs_clock_dumped_data

0xe41d,	// (0x0007c007) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe41d,	// (0x0007c007) list_single_fs_bigclock_indicator_pane_g1

0xe447,	// (0x0007c031) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe447,	// (0x0007c031) list_single_fs_bigclock_indicator_pane_g2

0xe461,	// (0x0007c04b) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe461,	// (0x0007c04b) list_single_fs_bigclock_indicator_pane_g3

0xe47b,	// (0x0007c065) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe47b,	// (0x0007c065) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0007d85e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0007d85e) list_single_fs_bigclock_indicator_pane_g

0xe4a6,	// (0x0007c090) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4a6,	// (0x0007c090) list_single_fs_bigclock_indicator_pane_t1

0xe4ce,	// (0x0007c0b8) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4ce,	// (0x0007c0b8) list_single_fs_bigclock_indicator_pane_t2

0xe4f6,	// (0x0007c0e0) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4f6,	// (0x0007c0e0) list_single_fs_bigclock_indicator_pane_t3

0xe51e,	// (0x0007c108) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe51e,	// (0x0007c108) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0007d869) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0007d869) list_single_fs_bigclock_indicator_pane_t

0xeb91,	// (0x0007c77b) image3_infobar_fav_pane_ParamLimits

0xeb91,	// (0x0007c77b) image3_infobar_fav_pane

0xeba1,	// (0x0007c78b) image3_infobar_loc_pane_ParamLimits

0xeba1,	// (0x0007c78b) image3_infobar_loc_pane

0xebb7,	// (0x0007c7a1) image3_infobar_time_pane_ParamLimits

0xebb7,	// (0x0007c7a1) image3_infobar_time_pane

0xcca9,	// (0x0007a893) image3_infobar_time_pane_g1

0xebc7,	// (0x0007c7b1) image3_infobar_time_pane_t1

0xcca9,	// (0x0007a893) image3_infobar_loc_pane_g1

0xebd5,	// (0x0007c7bf) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0007da3b) image3_infobar_loc_pane_g

0xebdd,	// (0x0007c7c7) image3_infobar_loc_pane_t1

0xcca9,	// (0x0007a893) image3_infobar_fav_pane_g1

0xebeb,	// (0x0007c7d5) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0007da40) image3_infobar_fav_pane_g

0xebf3,	// (0x0007c7dd) fs_bigclock_status_battery_pane

0xebfc,	// (0x0007c7e6) fs_bigclock_status_signal_pane

0xec05,	// (0x0007c7ef) fs_bigclock_status_title_pane

0xec0e,	// (0x0007c7f8) fs_bigclock_status_signal_pane_g1

0xec17,	// (0x0007c801) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0007da45) fs_bigclock_status_signal_pane_g

0xec1f,	// (0x0007c809) fs_bigclock_status_battery_pane_g1

0xec28,	// (0x0007c812) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0007da4a) fs_bigclock_status_battery_pane_g

0xec30,	// (0x0007c81a) fs_bigclock_status_title_pane_t1

0xcca9,	// (0x0007a893) main_fs_bigclock_clock_pane_g1

0xec3e,	// (0x0007c828) main_fs_bigclock_clock_pane_g2

0xec3e,	// (0x0007c828) main_fs_bigclock_clock_pane_g3

0xec3e,	// (0x0007c828) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0007da4f) main_fs_bigclock_clock_pane_g

0xec46,	// (0x0007c830) main_fs_bigclock_clock_pane_t1

0xec54,	// (0x0007c83e) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0007da58) main_fs_bigclock_clock_pane_t

0x8a4a,	// (0x00076634) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8a4a,	// (0x00076634) list_single_fs_bigclock_indicator_pane

0x8a5b,	// (0x00076645) list_single_fs_bigclock_pane_ParamLimits

0x8a5b,	// (0x00076645) list_single_fs_bigclock_pane

0xec6c,	// (0x0007c856) main_fs_bigclock_indicator_pane_t1

0xec7b,	// (0x0007c865) list_single_fs_bigclock_pane_g1

0xec83,	// (0x0007c86d) list_single_fs_bigclock_pane_t1

0xcca9,	// (0x0007a893) main_fs_bigclock_swipe_pane_g1

0xecc6,	// (0x0007c8b0) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0007da69) main_fs_bigclock_swipe_pane_g

0xecce,	// (0x0007c8b8) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecce,	// (0x0007c8b8) main_fs_bigclock_swipe_pane_t1

0x23a9,	// (0x0006ff93) call_type_pane_ParamLimits

0x95b5,	// (0x0007719f) main_btmg_pane

0xa782,	// (0x0007836c) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa782,	// (0x0007836c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0007d9dc) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0007d9dc) list_single_cale_mrui_row_pane_g

0xa808,	// (0x000783f2) list_recal_vselct_arw_lo_pane

0xeb0c,	// (0x0007c6f6) list_recal_vselct_arw_up_pane

0xa810,	// (0x000783fa) list_recal_vselct_pane

0x8abe,	// (0x000766a8) btmg_button_pane

0x8ac8,	// (0x000766b2) main_btmg_pane_g1

0x95b5,	// (0x0007719f) bg_button_pane_cp044

0xeceb,	// (0x0007c8d5) btmg_button_pane_t1

0xc844,	// (0x0007a42e) aid_listscroll_gen

0x960e,	// (0x000771f8) main_cntbar_detail_pane

0xe824,	// (0x0007c40e) list_cmail_folder_pane

0xe834,	// (0x0007c41e) sp_fs_scroll_pane_cp03_ParamLimits

0x8ad2,	// (0x000766bc) list_single_fs_dyc_pane_cp01_ParamLimits

0x8ad2,	// (0x000766bc) list_single_fs_dyc_pane_cp01

0xecf9,	// (0x0007c8e3) aid_size_cmail_indent

0xbaf5,	// (0x000796df) list_single_dyc_row_pane_cp01

0x8b1d,	// (0x00076707) cntbar_detail_list_pane_ParamLimits

0x8b1d,	// (0x00076707) cntbar_detail_list_pane

0x8b6f,	// (0x00076759) main_cntbar_detail_cont_pane_ParamLimits

0x8b6f,	// (0x00076759) main_cntbar_detail_cont_pane

0x22cc,	// (0x0006feb6) scroll_pane_cp032_ParamLimits

0x22cc,	// (0x0006feb6) scroll_pane_cp032

0x8b83,	// (0x0007676d) cntbar_detail_list_event_pane_ParamLimits

0x8b83,	// (0x0007676d) cntbar_detail_list_event_pane

0x8b2f,	// (0x00076719) cntbar_detail_list_shct_pane

0xad32,	// (0x0007891c) aid_list_gen

0xed02,	// (0x0007c8ec) aid_scroll

0xed0b,	// (0x0007c8f5) aid_size_touch_scroll_bar

0x6e10,	// (0x000749fa) aid_list_double

0xed14,	// (0x0007c8fe) aid_list_single

0x6dfe,	// (0x000749e8) aid_list_single_lg

0xbafe,	// (0x000796e8) aid_list_z_g_a_sm

0xbb06,	// (0x000796f0) aid_list_z_g_d

0xbb0e,	// (0x000796f8) aid_txt_z_prm

0x8b93,	// (0x0007677d) aid_txt_z_prm_cp01

0x8ba1,	// (0x0007678b) aid_txt_z_sec

0x8baf,	// (0x00076799) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8baf,	// (0x00076799) main_cntbar_detail_cont_pane_g1

0x8bc3,	// (0x000767ad) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8bc3,	// (0x000767ad) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0007da6e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0007da6e) main_cntbar_detail_cont_pane_g

0xed1d,	// (0x0007c907) main_cntbar_detail_cont_pane_t1

0xed2b,	// (0x0007c915) main_cntbar_detail_cont_pane_t2

0xed39,	// (0x0007c923) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0007da73) main_cntbar_detail_cont_pane_t

0x8bd3,	// (0x000767bd) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8bd3,	// (0x000767bd) cell_cntbar_detail_list_shct_pane

0xed47,	// (0x0007c931) cntbar_detail_list_shct_pane_g1

0xed50,	// (0x0007c93a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0007da7a) cntbar_detail_list_shct_pane_g

0x8be5,	// (0x000767cf) cntbar_detail_list_event_pane_g1_ParamLimits

0x8be5,	// (0x000767cf) cntbar_detail_list_event_pane_g1

0x8bf1,	// (0x000767db) cntbar_detail_list_event_pane_g2_ParamLimits

0x8bf1,	// (0x000767db) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0007da7f) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0007da7f) cntbar_detail_list_event_pane_g

0x8c5f,	// (0x00076849) cntbar_detail_list_event_pane_t1_ParamLimits

0x8c5f,	// (0x00076849) cntbar_detail_list_event_pane_t1

0x8c74,	// (0x0007685e) cntbar_detail_list_event_pane_t2_ParamLimits

0x8c74,	// (0x0007685e) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0007da8c) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0007da8c) cntbar_detail_list_event_pane_t

0xcca9,	// (0x0007a893) cell_cntbar_detail_list_shct_pane_g1

0x274f,	// (0x00070339) navi_pane_mv_g3

0x960e,	// (0x000771f8) main_cntbar_detail_pane_ParamLimits

0x95b5,	// (0x0007719f) main_notif_wgt_pane

0x9ff8,	// (0x00077be2) aid_tch_main_mp4_pane_g4

0xa1d6,	// (0x00077dc0) popup_slider_window_cp02

0xa7fe,	// (0x000783e8) list_recal_day_event_pane

0x8aed,	// (0x000766d7) cntbar_detail_btn_pane_ParamLimits

0x8aed,	// (0x000766d7) cntbar_detail_btn_pane

0x8b05,	// (0x000766ef) cntbar_detail_btn_pane_cp01_ParamLimits

0x8b05,	// (0x000766ef) cntbar_detail_btn_pane_cp01

0x8b2f,	// (0x00076719) cntbar_detail_list_shct_pane_ParamLimits

0x8b3f,	// (0x00076729) cntbar_detail_pane_g1_ParamLimits

0x8b3f,	// (0x00076729) cntbar_detail_pane_g1

0x8b53,	// (0x0007673d) cntbar_detail_pane_t1_ParamLimits

0x8b53,	// (0x0007673d) cntbar_detail_pane_t1

0x8bfd,	// (0x000767e7) cntbar_detail_list_event_pane_g3_ParamLimits

0x8bfd,	// (0x000767e7) cntbar_detail_list_event_pane_g3

0x8c15,	// (0x000767ff) cntbar_detail_list_event_pane_g4_ParamLimits

0x8c15,	// (0x000767ff) cntbar_detail_list_event_pane_g4

0x8c2d,	// (0x00076817) cntbar_detail_list_event_pane_g5_ParamLimits

0x8c2d,	// (0x00076817) cntbar_detail_list_event_pane_g5

0x8c45,	// (0x0007682f) cntbar_detail_list_event_pane_g6_ParamLimits

0x8c45,	// (0x0007682f) cntbar_detail_list_event_pane_g6

0x8c89,	// (0x00076873) cntbar_detail_list_event_pane_t3_ParamLimits

0x8c89,	// (0x00076873) cntbar_detail_list_event_pane_t3

0x8c9b,	// (0x00076885) popup_notif_wgt_window_ParamLimits

0x8c9b,	// (0x00076885) popup_notif_wgt_window

0x8cb4,	// (0x0007689e) popup_submenu_window_cp01_ParamLimits

0x8cb4,	// (0x0007689e) popup_submenu_window_cp01

0xb3bd,	// (0x00078fa7) bg_popup_window_pane_cp10

0xed59,	// (0x0007c943) listscroll_notif_wgt_pane

0xed6b,	// (0x0007c955) list_notif_wgt_window

0xed74,	// (0x0007c95e) scroll_pane_cp033

0x8cc8,	// (0x000768b2) list_notif_wgt_row_pane_ParamLimits

0x8cc8,	// (0x000768b2) list_notif_wgt_row_pane

0xed7d,	// (0x0007c967) aid_size_list_notif_wgt_del

0xed8a,	// (0x0007c974) list_notif_wgt_row_pane_g1

0xed96,	// (0x0007c980) list_notif_wgt_row_pane_g2

0xeda2,	// (0x0007c98c) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0007da93) list_notif_wgt_row_pane_g

0xedaf,	// (0x0007c999) list_notif_wgt_row_pane_t1

0xedc4,	// (0x0007c9ae) list_notif_wgt_row_pane_t2

0xedd6,	// (0x0007c9c0) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0007da9a) list_notif_wgt_row_pane_t

0xd8e7,	// (0x0007b4d1) list_recal_day_event_pane_g1

0xede8,	// (0x0007c9d2) list_recal_day_event_pane_t1

0x95b5,	// (0x0007719f) bg_button_pane_cp045

0xedf7,	// (0x0007c9e1) cntbar_detail_btn_pane_t1

0xc858,	// (0x0007a442) main_callh_pane_ParamLimits

0xc858,	// (0x0007a442) main_callh_pane

0x95b5,	// (0x0007719f) main_coverflow0_pane

0x95b5,	// (0x0007719f) main_wgtman_pane

0x7a9e,	// (0x00075688) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7a9e,	// (0x00075688) main_fs_bigclock_unlock_btn_pane

0x8489,	// (0x00076073) bg_button_pane_cp16

0x8499,	// (0x00076083) cell_tport_appsw_pane_g3

0x8cd8,	// (0x000768c2) cf0_flow_pane_ParamLimits

0x8cd8,	// (0x000768c2) cf0_flow_pane

0xee05,	// (0x0007c9ef) listscroll_cf0_pane

0xee10,	// (0x0007c9fa) main_cf0_pane_g1

0x8ced,	// (0x000768d7) main_cf0_pane_t1_ParamLimits

0x8ced,	// (0x000768d7) main_cf0_pane_t1

0x8d04,	// (0x000768ee) main_cf0_pane_t2_ParamLimits

0x8d04,	// (0x000768ee) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0007daa6) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0007daa6) main_cf0_pane_t

0xee22,	// (0x0007ca0c) scroll_pane_cp11

0x8d1b,	// (0x00076905) cf0_flow_pane_g1

0x8d27,	// (0x00076911) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0007daab) cf0_flow_pane_g

0x8d33,	// (0x0007691d) cf0_flow_pane_t1

0x95b5,	// (0x0007719f) main_call6_pane

0x95b5,	// (0x0007719f) main_calllock_pane

0x8d45,	// (0x0007692f) call6_btn_grp_pane_ParamLimits

0x8d45,	// (0x0007692f) call6_btn_grp_pane

0x8d5f,	// (0x00076949) call6_pane_g1_ParamLimits

0x8d5f,	// (0x00076949) call6_pane_g1

0x8d75,	// (0x0007695f) popup_call6_1st_window_ParamLimits

0x8d75,	// (0x0007695f) popup_call6_1st_window

0x8d86,	// (0x00076970) popup_call6_2nd_window_ParamLimits

0x8d86,	// (0x00076970) popup_call6_2nd_window

0x8d97,	// (0x00076981) cell_call6_btn_pane_ParamLimits

0x8d97,	// (0x00076981) cell_call6_btn_pane

0xb3bd,	// (0x00078fa7) bg_popup_call2_in_pane_cp03

0xee2d,	// (0x0007ca17) popup_call6_1st_window_g1

0xee35,	// (0x0007ca1f) popup_call6_1st_window_g2

0xee3d,	// (0x0007ca27) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0007dab0) popup_call6_1st_window_g

0xee45,	// (0x0007ca2f) popup_call6_1st_window_t1

0xee54,	// (0x0007ca3e) popup_call6_1st_window_t2

0xee64,	// (0x0007ca4e) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0007dab7) popup_call6_1st_window_t

0xb3bd,	// (0x00078fa7) bg_popup_call2_in_pane_cp04

0xee2d,	// (0x0007ca17) popup_call6_2nd_window_g1

0xee35,	// (0x0007ca1f) popup_call6_2nd_window_g2

0xee3d,	// (0x0007ca27) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0007dab0) popup_call6_2nd_window_g

0xee45,	// (0x0007ca2f) popup_call6_2nd_window_t1

0x95b5,	// (0x0007719f) bg_button_pane_cp15

0xee74,	// (0x0007ca5e) cell_call6_btn_pane_g1

0xee7d,	// (0x0007ca67) cell_call6_btn_pane_t1

0x8dab,	// (0x00076995) listscroll_wgtman_pane_ParamLimits

0x8dab,	// (0x00076995) listscroll_wgtman_pane

0x8dcc,	// (0x000769b6) wgtman_btn_pane_ParamLimits

0x8dcc,	// (0x000769b6) wgtman_btn_pane

0xb283,	// (0x00078e6d) aid_scroll_copy1

0xee8c,	// (0x0007ca76) list_wgtman_pane

0x8e0f,	// (0x000769f9) wgtman_btn_pane_g1_ParamLimits

0x8e0f,	// (0x000769f9) wgtman_btn_pane_g1

0x8e3b,	// (0x00076a25) wgtman_btn_pane_t1_ParamLimits

0x8e3b,	// (0x00076a25) wgtman_btn_pane_t1

0xee96,	// (0x0007ca80) wgtman_btn_pane_t2_ParamLimits

0xee96,	// (0x0007ca80) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0007dabe) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0007dabe) wgtman_btn_pane_t

0x8e78,	// (0x00076a62) listrow_wgtman_pane_ParamLimits

0x8e78,	// (0x00076a62) listrow_wgtman_pane

0x8e8a,	// (0x00076a74) listrow_wgtman_pane_g1

0x8e97,	// (0x00076a81) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0007dac3) listrow_wgtman_pane_g

0x8eb5,	// (0x00076a9f) listrow_wgtman_pane_t1

0x8ecd,	// (0x00076ab7) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0007dac8) listrow_wgtman_pane_t

0x8ef3,	// (0x00076add) wait_bar_pane_cp09

0xeead,	// (0x0007ca97) main_calllock_btn_pane

0xeeb7,	// (0x0007caa1) main_calllock_pane_g1

0x95b5,	// (0x0007719f) bg_button_pane_cp17

0xeec3,	// (0x0007caad) main_calllock_btn_pane_g1

0xeecc,	// (0x0007cab6) main_calllock_btn_pane_t1

0x95b5,	// (0x0007719f) main_dialer3_pane

0x95b5,	// (0x0007719f) main_fmrd2_pane

0xcca9,	// (0x0007a893) main_fs_bigclock_unlock_btn_pane_g1

0xeee3,	// (0x0007cacd) main_fs_bigclock_unlock_btn_pane_t1

0x8f05,	// (0x00076aef) area_fmrd2_info_pane_ParamLimits

0x8f05,	// (0x00076aef) area_fmrd2_info_pane

0x8f14,	// (0x00076afe) area_fmrd2_visual_pane_ParamLimits

0x8f14,	// (0x00076afe) area_fmrd2_visual_pane

0x8f22,	// (0x00076b0c) fmrd2_indi_pane_ParamLimits

0x8f22,	// (0x00076b0c) fmrd2_indi_pane

0x8f2f,	// (0x00076b19) area_fmrd2_visual_pane_g1

0x8f37,	// (0x00076b21) area_fmrd2_visual_pane_t1

0x8f47,	// (0x00076b31) area_fmrd2_visual_pane_t2

0x8f57,	// (0x00076b41) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0007dad2) area_fmrd2_visual_pane_t

0x8f67,	// (0x00076b51) area_fmrd2_info_pane_g1

0x8f6f,	// (0x00076b59) area_fmrd2_info_pane_t1

0x8f7f,	// (0x00076b69) area_fmrd2_info_pane_t2

0x8f8f,	// (0x00076b79) area_fmrd2_info_pane_t3

0x8f9f,	// (0x00076b89) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0007dad9) area_fmrd2_info_pane_t

0x8faf,	// (0x00076b99) fmrd2_indi_pane_t1

0x8fbf,	// (0x00076ba9) fmrd2_indi_pane_t2

0x8fcf,	// (0x00076bb9) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0007dae2) fmrd2_indi_pane_t

0xe48a,	// (0x0007c074) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe48a,	// (0x0007c074) list_single_fs_bigclock_indicator_pane_g5

0xe533,	// (0x0007c11d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe533,	// (0x0007c11d) list_single_fs_bigclock_indicator_pane_t5

0x8692,	// (0x0007627c) aid_cell_bcale_month_pane_ParamLimits

0x8692,	// (0x0007627c) aid_cell_bcale_month_pane

0x86b0,	// (0x0007629a) bcale_month_pane_ParamLimits

0x86b0,	// (0x0007629a) bcale_month_pane

0x86d2,	// (0x000762bc) bcale_preview_pane_ParamLimits

0x86d2,	// (0x000762bc) bcale_preview_pane

0xec83,	// (0x0007c86d) list_single_fs_bigclock_pane_t1_ParamLimits

0xeca2,	// (0x0007c88c) list_single_fs_bigclock_pane_t2_ParamLimits

0xeca2,	// (0x0007c88c) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0007da64) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0007da64) list_single_fs_bigclock_pane_t

0xeedb,	// (0x0007cac5) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0007dacd) main_fs_bigclock_unlock_btn_pane_g

0x8fdf,	// (0x00076bc9) aid_dia3_key_size_ParamLimits

0x8fdf,	// (0x00076bc9) aid_dia3_key_size

0x8fee,	// (0x00076bd8) aid_dia3_listrow_size_ParamLimits

0x8fee,	// (0x00076bd8) aid_dia3_listrow_size

0x9003,	// (0x00076bed) dia3_keypad_fun_pane_ParamLimits

0x9003,	// (0x00076bed) dia3_keypad_fun_pane

0x901f,	// (0x00076c09) dia3_keypad_num_pane_ParamLimits

0x901f,	// (0x00076c09) dia3_keypad_num_pane

0x9038,	// (0x00076c22) dia3_listscroll_pane_ParamLimits

0x9038,	// (0x00076c22) dia3_listscroll_pane

0x904b,	// (0x00076c35) dia3_numentry_pane_ParamLimits

0x904b,	// (0x00076c35) dia3_numentry_pane

0xeef1,	// (0x0007cadb) dia3_list_pane

0xeefc,	// (0x0007cae6) scroll_pane_cp12

0x95b5,	// (0x0007719f) bg_dia3_numentry_pane

0x905f,	// (0x00076c49) dia3_numentry_pane_t1

0x906e,	// (0x00076c58) cell_dia3_key_num_pane

0x9076,	// (0x00076c60) cell_dia3_key0_fun_pane_ParamLimits

0x9076,	// (0x00076c60) cell_dia3_key0_fun_pane

0x908a,	// (0x00076c74) cell_dia3_key1_fun_pane_ParamLimits

0x908a,	// (0x00076c74) cell_dia3_key1_fun_pane

0x90a2,	// (0x00076c8c) dia3_listrow_pane

0xe188,	// (0x0007bd72) bg_dia3_numentry_pane_g1

0x95b5,	// (0x0007719f) bg_button_pane_cp21

0xef07,	// (0x0007caf1) cell_dia3_key_num_pane_t1

0xef15,	// (0x0007caff) cell_dia3_key_num_pane_t2

0xef24,	// (0x0007cb0e) cell_dia3_key_num_pane_t3

0xef33,	// (0x0007cb1d) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0007dae9) cell_dia3_key_num_pane_t

0x95b5,	// (0x0007719f) bg_button_pane_cp19

0x90b4,	// (0x00076c9e) cell_dia3_key0_fun_pane_g1

0x95b5,	// (0x0007719f) bg_button_pane_cp20

0x90bc,	// (0x00076ca6) cell_dia3_key1_fun_pane_g1

0x90c4,	// (0x00076cae) area_left_week_number_pane

0x90d2,	// (0x00076cbc) area_top_day_name_pane

0x90e5,	// (0x00076ccf) frame_month_view_pane

0xef42,	// (0x0007cb2c) grid_month_view_pane

0x90fa,	// (0x00076ce4) cell_top_day_name_pane_ParamLimits

0x90fa,	// (0x00076ce4) cell_top_day_name_pane

0x9129,	// (0x00076d13) cell_area_left_week_number_pane_ParamLimits

0x9129,	// (0x00076d13) cell_area_left_week_number_pane

0x913d,	// (0x00076d27) cell_month_view_pane_ParamLimits

0x913d,	// (0x00076d27) cell_month_view_pane

0xef50,	// (0x0007cb3a) frm_month_g1

0x916c,	// (0x00076d56) frm_month_g2

0x917f,	// (0x00076d69) frm_month_g3

0x9192,	// (0x00076d7c) frm_month_g4

0x91a5,	// (0x00076d8f) frm_month_g5

0x91b8,	// (0x00076da2) frm_month_g6

0x91cb,	// (0x00076db5) frm_month_g7

0xef5d,	// (0x0007cb47) frm_month_g8

0x91e0,	// (0x00076dca) frm_month_g9

0x91f0,	// (0x00076dda) frm_month_g10

0x9200,	// (0x00076dea) frm_month_g11

0x9210,	// (0x00076dfa) frm_month_g12

0x9222,	// (0x00076e0c) frm_month_g13

0x9236,	// (0x00076e20) frm_month_g14

0x924a,	// (0x00076e34) frm_month_g15

0x925e,	// (0x00076e48) frm_month_g16

0x000f,

0xff08,	// (0x0007daf2) frm_month_g

0xef6a,	// (0x0007cb54) cell_top_day_name_pane_t1

0x9272,	// (0x00076e5c) cell_area_left_week_number_pane_g1

0x927e,	// (0x00076e68) cell_area_left_week_number_pane_t1

0xcee1,	// (0x0007aacb) cell_month_view_pane_g1

0x9291,	// (0x00076e7b) cell_month_view_pane_t1

0x95b5,	// (0x0007719f) main_fps_pane

0xe708,	// (0x0007c2f2) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe708,	// (0x0007c2f2) cmail_ddmenu_btn02_pane_cp1

0xe724,	// (0x0007c30e) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe724,	// (0x0007c30e) cmail_ddmenu_btn02_pane_cp2

0x89a3,	// (0x0007658d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x89a3,	// (0x0007658d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0007da17) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0007da17) cmail_ddmenu_btn02_pane_g

0x89c4,	// (0x000765ae) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x89c4,	// (0x000765ae) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0007da1c) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0007da1c) cmail_ddmenu_btn02_pane_t

0x92a4,	// (0x00076e8e) fps_text_pane_ParamLimits

0x92a4,	// (0x00076e8e) fps_text_pane

0x92bb,	// (0x00076ea5) main_fps_pane_g1_ParamLimits

0x92bb,	// (0x00076ea5) main_fps_pane_g1

0x92d3,	// (0x00076ebd) wait_bar_pane_cp010_ParamLimits

0x92d3,	// (0x00076ebd) wait_bar_pane_cp010

0x92e6,	// (0x00076ed0) fps_text_pane_t1_ParamLimits

0x92e6,	// (0x00076ed0) fps_text_pane_t1

0xe06f,	// (0x0007bc59) cam4_image_uncrop_pane_g1

0xe078,	// (0x0007bc62) cam4_image_uncrop_pane_g2

0x5bc0,	// (0x000737aa) cam4_image_uncrop_pane_g3

0x5bc9,	// (0x000737b3) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0007d4d8) cam4_image_uncrop_pane_g

0x90a2,	// (0x00076c8c) dia3_listrow_pane_ParamLimits

0x95b5,	// (0x0007719f) main_phob2_pane

0x8458,	// (0x00076042) cell_tport_appsw_pane_cp02_ParamLimits

0x8458,	// (0x00076042) cell_tport_appsw_pane_cp02

0x846c,	// (0x00076056) cell_tport_appsw_pane_cp03_ParamLimits

0x846c,	// (0x00076056) cell_tport_appsw_pane_cp03

0x95b5,	// (0x0007719f) phob2_contact_card_pane

0x95b5,	// (0x0007719f) phob2_listscroll_pane

0xef7d,	// (0x0007cb67) phob2_list_pane

0xef85,	// (0x0007cb6f) scroll_pane_cp034

0x92fe,	// (0x00076ee8) phob2_cc_data_pane_ParamLimits

0x92fe,	// (0x00076ee8) phob2_cc_data_pane

0x931f,	// (0x00076f09) phob2_cc_listscroll_pane_ParamLimits

0x931f,	// (0x00076f09) phob2_cc_listscroll_pane

0x9341,	// (0x00076f2b) list_double_large_graphic_phob2_pane_ParamLimits

0x9341,	// (0x00076f2b) list_double_large_graphic_phob2_pane

0x9355,	// (0x00076f3f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9355,	// (0x00076f3f) list_double_large_graphic_phob2_pane_g1

0x936b,	// (0x00076f55) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x936b,	// (0x00076f55) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0007db13) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0007db13) list_double_large_graphic_phob2_pane_g

0x9377,	// (0x00076f61) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9377,	// (0x00076f61) list_double_large_graphic_phob2_pane_t1

0x938c,	// (0x00076f76) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x938c,	// (0x00076f76) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0007db18) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0007db18) list_double_large_graphic_phob2_pane_t

0x95b5,	// (0x0007719f) list_highlight_pane_cp024

0x939e,	// (0x00076f88) phob2_cc_button_pane

0x93a6,	// (0x00076f90) phob2_cc_data_pane_g1_ParamLimits

0x93a6,	// (0x00076f90) phob2_cc_data_pane_g1

0x93bc,	// (0x00076fa6) phob2_cc_data_pane_g2_ParamLimits

0x93bc,	// (0x00076fa6) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0007db1d) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0007db1d) phob2_cc_data_pane_g

0x93cc,	// (0x00076fb6) phob2_cc_data_pane_t1_ParamLimits

0x93cc,	// (0x00076fb6) phob2_cc_data_pane_t1

0x93e4,	// (0x00076fce) phob2_cc_data_pane_t2_ParamLimits

0x93e4,	// (0x00076fce) phob2_cc_data_pane_t2

0x93fe,	// (0x00076fe8) phob2_cc_data_pane_t3_ParamLimits

0x93fe,	// (0x00076fe8) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0007db22) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0007db22) phob2_cc_data_pane_t

0xef8d,	// (0x0007cb77) phob2_cc_list_pane_ParamLimits

0xef8d,	// (0x0007cb77) phob2_cc_list_pane

0xd97e,	// (0x0007b568) scroll_pane_cp035_ParamLimits

0xd97e,	// (0x0007b568) scroll_pane_cp035

0x960e,	// (0x000771f8) bg_button_pane_cp033

0xef99,	// (0x0007cb83) phob2_cc_button_pane_g1

0xefa5,	// (0x0007cb8f) phob2_cc_button_pane_t1

0xefba,	// (0x0007cba4) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0007db29) phob2_cc_button_pane_t

0x9418,	// (0x00077002) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9418,	// (0x00077002) list_double_large_graphic_phob2_cc_pane

0x942c,	// (0x00077016) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x942c,	// (0x00077016) list_double_large_graphic_phob2_cc_pane_g1

0x9438,	// (0x00077022) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9438,	// (0x00077022) list_double_large_graphic_phob2_cc_pane_g2

0x9444,	// (0x0007702e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9444,	// (0x0007702e) list_double_large_graphic_phob2_cc_pane_g3

0x9450,	// (0x0007703a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9450,	// (0x0007703a) list_double_large_graphic_phob2_cc_pane_g4

0x945c,	// (0x00077046) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x945c,	// (0x00077046) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0007db2e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0007db2e) list_double_large_graphic_phob2_cc_pane_g

0x9468,	// (0x00077052) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9468,	// (0x00077052) list_double_large_graphic_phob2_cc_pane_t1

0x9491,	// (0x0007707b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9491,	// (0x0007707b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0007db39) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0007db39) list_double_large_graphic_phob2_cc_pane_t

0xefcc,	// (0x0007cbb6) list_highlight_pane_cp025_ParamLimits

0xefcc,	// (0x0007cbb6) list_highlight_pane_cp025

0x960e,	// (0x000771f8) bg_button_pane_cp033_ParamLimits

0xef99,	// (0x0007cb83) phob2_cc_button_pane_g1_ParamLimits

0xefa5,	// (0x0007cb8f) phob2_cc_button_pane_t1_ParamLimits

0xefba,	// (0x0007cba4) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0007db29) phob2_cc_button_pane_t_ParamLimits

0xff2c,	// (0x0006db16) popup_wgtman_window

0xd7c1,	// (0x0007b3ab) scroll_pane_cp038

0x8df1,	// (0x000769db) wgtman_btn_pane_cp_01_ParamLimits

0x8df1,	// (0x000769db) wgtman_btn_pane_cp_01

0xefda,	// (0x0007cbc4) wgtman_content_pane

0xefe3,	// (0x0007cbcd) wgtman_heading_pane

0x95b5,	// (0x0007719f) bg_heading_pane_cp02

0xefec,	// (0x0007cbd6) wgtman_heading_pane_g1

0xeff4,	// (0x0007cbde) wgtman_heading_pane_t1

0xf002,	// (0x0007cbec) scroll_pane_cp036

0xf00a,	// (0x0007cbf4) wgtman_list_pane

0xf012,	// (0x0007cbfc) wgtman_list_pane_t1_ParamLimits

0xf012,	// (0x0007cbfc) wgtman_list_pane_t1

0xa234,	// (0x00077e1e) cam4_grid_pane

0x68f8,	// (0x000744e2) bg_button_pane_cp015_ParamLimits

0x690c,	// (0x000744f6) bg_button_pane_cp016_ParamLimits

0x691f,	// (0x00074509) bg_button_pane_cp017_ParamLimits

0x6977,	// (0x00074561) popup_vitu2_query_window_g3_ParamLimits

0x6977,	// (0x00074561) popup_vitu2_query_window_g3

0x6a34,	// (0x0007461e) popup_vitu2_query_window_t6_ParamLimits

0x6a34,	// (0x0007461e) popup_vitu2_query_window_t6

0x6a5f,	// (0x00074649) popup_vitu2_query_window_t7_ParamLimits

0x6a5f,	// (0x00074649) popup_vitu2_query_window_t7

0xe06f,	// (0x0007bc59) cam4_grid_pane_g1

0xe078,	// (0x0007bc62) cam4_grid_pane_g2

0xf02c,	// (0x0007cc16) cam4_grid_pane_g3

0xf035,	// (0x0007cc1f) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0007db3e) cam4_grid_pane_g

0x1119,	// (0x0006ed03) aid_placing_vt_slider_lsc_ParamLimits

0x1406,	// (0x0006eff0) vidtel_button_pane_ParamLimits

0x1406,	// (0x0006eff0) vidtel_button_pane

0xf040,	// (0x0007cc2a) bg_button_pane_cp034

0x94ba,	// (0x000770a4) vidtel_button_pane_g1

0xf04a,	// (0x0007cc34) vidtel_button_pane_t1

0xd8c5,	// (0x0007b4af) aid_size_vtel_slider_touch

0xd97e,	// (0x0007b568) scroll_pane_cp039

0xe1c6,	// (0x0007bdb0) ncim_query_button_pane_cp01_ParamLimits

0xe1e5,	// (0x0007bdcf) ncimui_query_pane_g1_ParamLimits

0x960e,	// (0x000771f8) input_focus_pane_cp012_ParamLimits

0xe20a,	// (0x0007bdf4) ncim_query_entry_pane_t1_ParamLimits

0xd97e,	// (0x0007b568) scroll_pane_cp039_ParamLimits

0x26c1,	// (0x000702ab) navi_pane_bcale_mc_g1

0x26c9,	// (0x000702b3) navi_pane_bcale_mc_t1

0xe76d,	// (0x0007c357) main_sp_fs_email_pane_g1

0xe779,	// (0x0007c363) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0007d8cf) main_sp_fs_email_pane_g

0xea10,	// (0x0007c5fa) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea10,	// (0x0007c5fa) list_single_cale_mrui_row_pane_g3

0x89e4,	// (0x000765ce) list_single_recal_day_pane_g5_event_pane

0xbac9,	// (0x000796b3) list_single_recal_day_pane_g7

0xf058,	// (0x0007cc42) list_recal_day_event_pane_cp01

0xf061,	// (0x0007cc4b) list_recal_vselct_arw_lo_pane_cp01

0xf069,	// (0x0007cc53) list_recal_vselct_arw_up_pane_cp01

0xf071,	// (0x0007cc5b) list_recal_vselct_pane_cp01

0xd8e7,	// (0x0007b4d1) list_recal_day_event_pane_cp01_g1

0xbb1c,	// (0x00079706) list_recal_day_event_pane_cp01_t1

0xbad1,	// (0x000796bb) list_single_recal_day_pane_t1_ParamLimits

0xbae3,	// (0x000796cd) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0007da2c) list_single_recal_day_pane_t_ParamLimits

0x9c8a,	// (0x00077874) bg_notes_pane_ParamLimits

0xa899,	// (0x00078483) list_notes_pane_ParamLimits

0x0279,	// (0x0006de63) scroll_pane_cp06_ParamLimits

0xa8bb,	// (0x000784a5) main_notes_pane_ParamLimits

0x95b5,	// (0x0007719f) main_welc_pane

0x94c2,	// (0x000770ac) main_welc_body_pane_ParamLimits

0x94c2,	// (0x000770ac) main_welc_body_pane

0x94e1,	// (0x000770cb) main_welc_opti_pane_ParamLimits

0x94e1,	// (0x000770cb) main_welc_opti_pane

0x952a,	// (0x00077114) main_welc_pane_t1_ParamLimits

0x952a,	// (0x00077114) main_welc_pane_t1

0x954c,	// (0x00077136) main_welc_body_row_pane_ParamLimits

0x954c,	// (0x00077136) main_welc_body_row_pane

0x9560,	// (0x0007714a) main_welc_opti_row_pane_ParamLimits

0x9560,	// (0x0007714a) main_welc_opti_row_pane

0xf07b,	// (0x0007cc65) main_welc_opti_row_pane_g1

0xf083,	// (0x0007cc6d) main_welc_opti_row_pane_t1

0xf092,	// (0x0007cc7c) main_welc_body_row_pane_t1

0xed63,	// (0x0007c94d) popup_notif_wgt_heading_pane

0xed7d,	// (0x0007c967) aid_size_list_notif_wgt_del_ParamLimits

0xed8a,	// (0x0007c974) list_notif_wgt_row_pane_g1_ParamLimits

0xed96,	// (0x0007c980) list_notif_wgt_row_pane_g2_ParamLimits

0xeda2,	// (0x0007c98c) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0007da93) list_notif_wgt_row_pane_g_ParamLimits

0xedaf,	// (0x0007c999) list_notif_wgt_row_pane_t1_ParamLimits

0xedc4,	// (0x0007c9ae) list_notif_wgt_row_pane_t2_ParamLimits

0xedd6,	// (0x0007c9c0) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0007da9a) list_notif_wgt_row_pane_t_ParamLimits

0x8e8a,	// (0x00076a74) listrow_wgtman_pane_g1_ParamLimits

0x8e97,	// (0x00076a81) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0007dac3) listrow_wgtman_pane_g_ParamLimits

0x8eb5,	// (0x00076a9f) listrow_wgtman_pane_t1_ParamLimits

0x8ecd,	// (0x00076ab7) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0007dac8) listrow_wgtman_pane_t_ParamLimits

0x8ef3,	// (0x00076add) wait_bar_pane_cp09_ParamLimits

0x95b5,	// (0x0007719f) bg_popup_heading_pane_cp02

0xf0a1,	// (0x0007cc8b) popup_notif_wgt_heading_pane_g1

0xf0a9,	// (0x0007cc93) popup_notif_wgt_heading_pane_t1

0x95b5,	// (0x0007719f) main_vids_pane

0x95b5,	// (0x0007719f) vids_listscroll_pane

0x9570,	// (0x0007715a) scroll_pane_cp040

0x95b5,	// (0x0007719f) vids_list_pane

0x957b,	// (0x00077165) vids_list_double_pane_ParamLimits

0x957b,	// (0x00077165) vids_list_double_pane

0x958c,	// (0x00077176) vids_list_double_pane_g1

0x9595,	// (0x0007717f) vids_list_double_pane_t1

0x95a5,	// (0x0007718f) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0007db4c) vids_list_double_pane_t

0x960e,	// (0x000771f8) main_ncimui_pane_ParamLimits

0x762c,	// (0x00075216) main_ncimui_pane_g1_ParamLimits

0x7638,	// (0x00075222) main_ncimui_pane_g2_ParamLimits

0x7638,	// (0x00075222) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0007d7d4) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0007d7d4) main_ncimui_pane_g

0x9500,	// (0x000770ea) main_welc_pane_g1_ParamLimits

0x9500,	// (0x000770ea) main_welc_pane_g1

0x9515,	// (0x000770ff) main_welc_pane_g2_ParamLimits

0x9515,	// (0x000770ff) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0007db47) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0007db47) main_welc_pane_g

0x9c8a,	// (0x00077874) listscroll_mce_pane_ParamLimits

0x27a1,	// (0x0007038b) wait_bar_pane_cp10

0xc84c,	// (0x0007a436) main_cale_day_pane_ParamLimits

0xc84c,	// (0x0007a436) main_cale_week_pane_ParamLimits

0x9c8a,	// (0x00077874) main_messa_pane_ParamLimits

0x4e7e,	// (0x00072a68) main_clock2_btn_pane_ParamLimits

0x4e7e,	// (0x00072a68) main_clock2_btn_pane

0xd069,	// (0x0007ac53) main_clock2_btn_pane_cp01_ParamLimits

0xd069,	// (0x0007ac53) main_clock2_btn_pane_cp01

0xe9e1,	// (0x0007c5cb) list_cale_mrui_pane_ParamLimits

0xee1a,	// (0x0007ca04) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0007daa1) main_cf0_pane_g

0x90c4,	// (0x00076cae) area_left_week_number_pane_ParamLimits

0x90d2,	// (0x00076cbc) area_top_day_name_pane_ParamLimits

0x90e5,	// (0x00076ccf) frame_month_view_pane_ParamLimits

0xef42,	// (0x0007cb2c) grid_month_view_pane_ParamLimits

0xef50,	// (0x0007cb3a) frm_month_g1_ParamLimits

0x916c,	// (0x00076d56) frm_month_g2_ParamLimits

0x917f,	// (0x00076d69) frm_month_g3_ParamLimits

0x9192,	// (0x00076d7c) frm_month_g4_ParamLimits

0x91a5,	// (0x00076d8f) frm_month_g5_ParamLimits

0x91b8,	// (0x00076da2) frm_month_g6_ParamLimits

0x91cb,	// (0x00076db5) frm_month_g7_ParamLimits

0xef5d,	// (0x0007cb47) frm_month_g8_ParamLimits

0x91e0,	// (0x00076dca) frm_month_g9_ParamLimits

0x91f0,	// (0x00076dda) frm_month_g10_ParamLimits

0x9200,	// (0x00076dea) frm_month_g11_ParamLimits

0x9210,	// (0x00076dfa) frm_month_g12_ParamLimits

0x9222,	// (0x00076e0c) frm_month_g13_ParamLimits

0x9236,	// (0x00076e20) frm_month_g14_ParamLimits

0x924a,	// (0x00076e34) frm_month_g15_ParamLimits

0x925e,	// (0x00076e48) frm_month_g16_ParamLimits

0xff08,	// (0x0007daf2) frm_month_g_ParamLimits

0xef6a,	// (0x0007cb54) cell_top_day_name_pane_t1_ParamLimits

0x9272,	// (0x00076e5c) cell_area_left_week_number_pane_g1_ParamLimits

0x927e,	// (0x00076e68) cell_area_left_week_number_pane_t1_ParamLimits

0xcee1,	// (0x0007aacb) cell_month_view_pane_g1_ParamLimits

0x9291,	// (0x00076e7b) cell_month_view_pane_t1_ParamLimits

0x9c82,	// (0x0007786c) main_clock2_btn_pane_g1

0xf0b7,	// (0x0007cca1) main_clock2_btn_pane_t1

0x960e,	// (0x000771f8) listscroll_cmail_pane_ParamLimits

0xe76d,	// (0x0007c357) main_sp_fs_email_pane_g1_ParamLimits

0xe779,	// (0x0007c363) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0007d8cf) main_sp_fs_email_pane_g_ParamLimits

0xeaed,	// (0x0007c6d7) list_recal_day_pane_ParamLimits

0xeafe,	// (0x0007c6e8) mian_recal_day_pane_t1

0x80c5,	// (0x00075caf) list_single_dyc_row_text_pane_t4_ParamLimits

0x80c5,	// (0x00075caf) list_single_dyc_row_text_pane_t4

0x810e,	// (0x00075cf8) list_single_dyc_row_text_pane_t5_ParamLimits

0x810e,	// (0x00075cf8) list_single_dyc_row_text_pane_t5

0xa61b,	// (0x00078205) list_single_dyc_row_text_pane_t6_ParamLimits

0xa61b,	// (0x00078205) list_single_dyc_row_text_pane_t6

0xae77,	// (0x00078a61) aid_mgn_list_cale_time_pane

0x960e,	// (0x000771f8) main_gallery2_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
