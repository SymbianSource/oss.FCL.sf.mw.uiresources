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

#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00042c76 };

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
0x5fd3,	// (0x00048c49) Screen

0x5fdd,	// (0x00048c53) application_window

0x602f,	// (0x00048ca5) area_bottom_pane_ParamLimits

0x602f,	// (0x00048ca5) area_bottom_pane

0x606b,	// (0x00048ce1) area_top_pane_ParamLimits

0x606b,	// (0x00048ce1) area_top_pane

0x60c7,	// (0x00048d3d) call_video_uplink_pane_ParamLimits

0x60c7,	// (0x00048d3d) call_video_uplink_pane

0x6102,	// (0x00048d78) main_pane_ParamLimits

0x6102,	// (0x00048d78) main_pane

0x247f,	// (0x000450f5) context_pane

0x8bd4,	// (0x0004b84a) navi_pane

0x8bee,	// (0x0004b864) popup_cale_events_window_ParamLimits

0x8bee,	// (0x0004b864) popup_cale_events_window

0x2492,	// (0x00045108) popup_mup_playback_window

0x8c05,	// (0x0004b87b) signal_pane

0xdf3a,	// (0x00050bb0) main_browser_pane

0xe107,	// (0x00050d7d) main_burst_pane

0x622b,	// (0x00048ea1) main_calc_pane

0x2469,	// (0x000450df) main_cale_day_pane

0x6673,	// (0x000492e9) main_cale_month_pane

0x2469,	// (0x000450df) main_cale_week_pane

0xe107,	// (0x00050d7d) main_call_pane

0xdbef,	// (0x00050865) main_call_poc_pane

0xe107,	// (0x00050d7d) main_camera_pane

0xe107,	// (0x00050d7d) main_chi_dic_pane

0xe8e5,	// (0x0005155b) main_clock_pane

0xdbef,	// (0x00050865) main_fmradio_pane

0xe107,	// (0x00050d7d) main_graph_messa_pane

0xdbef,	// (0x00050865) main_help_pane

0xdf3a,	// (0x00050bb0) main_im_pane

0xde4a,	// (0x00050ac0) main_image_pane_ParamLimits

0xde4a,	// (0x00050ac0) main_image_pane

0xdbef,	// (0x00050865) main_location2_pane

0xe107,	// (0x00050d7d) main_location_pane

0xde4a,	// (0x00050ac0) main_messa_pane

0xdbef,	// (0x00050865) main_mp2_pane

0xe107,	// (0x00050d7d) main_mp_pane

0xdbef,	// (0x00050865) main_msg_pane

0xdbef,	// (0x00050865) main_mup_eq_pane

0xdbef,	// (0x00050865) main_mup_pane

0xdf3a,	// (0x00050bb0) main_notes_pane

0xdbef,	// (0x00050865) main_pec_pane

0xdbef,	// (0x00050865) main_phob_pane

0xdbef,	// (0x00050865) main_pinb_pane

0xdbef,	// (0x00050865) main_postcard_pane

0xdbef,	// (0x00050865) main_qdial_pane

0xe107,	// (0x00050d7d) main_skin_pane

0xdbef,	// (0x00050865) main_smil2_pane

0xe107,	// (0x00050d7d) main_smil_pane

0xe107,	// (0x00050d7d) main_video_pane

0xe107,	// (0x00050d7d) main_video_tele_pane

0xde4a,	// (0x00050ac0) main_viewer_pane_ParamLimits

0xde4a,	// (0x00050ac0) main_viewer_pane

0xe107,	// (0x00050d7d) main_vorec_pane

0x8ad2,	// (0x0004b748) popup_blid_sat_info_window_ParamLimits

0x8ad2,	// (0x0004b748) popup_blid_sat_info_window

0x8aee,	// (0x0004b764) popup_dyc_status_message_window_ParamLimits

0x8aee,	// (0x0004b764) popup_dyc_status_message_window

0x8afa,	// (0x0004b770) popup_grid_large_graphic_window_ParamLimits

0x8afa,	// (0x0004b770) popup_grid_large_graphic_window

0x8b6b,	// (0x0004b7e1) popup_loc_request_window_ParamLimits

0x8b6b,	// (0x0004b7e1) popup_loc_request_window

0x8bae,	// (0x0004b824) popup_wml_address_window_ParamLimits

0x8bae,	// (0x0004b824) popup_wml_address_window

0x898e,	// (0x0004b604) call_muted_g1

0x899e,	// (0x0004b614) popup_call_audio_conf_window_ParamLimits

0x899e,	// (0x0004b614) popup_call_audio_conf_window

0x89b1,	// (0x0004b627) popup_call_audio_first_window_ParamLimits

0x89b1,	// (0x0004b627) popup_call_audio_first_window

0x89e5,	// (0x0004b65b) popup_call_audio_in_window_ParamLimits

0x89e5,	// (0x0004b65b) popup_call_audio_in_window

0x8a01,	// (0x0004b677) popup_call_audio_out_window_ParamLimits

0x8a01,	// (0x0004b677) popup_call_audio_out_window

0x8a1d,	// (0x0004b693) popup_call_audio_second_window_ParamLimits

0x8a1d,	// (0x0004b693) popup_call_audio_second_window

0x8a45,	// (0x0004b6bb) popup_call_audio_wait_window_ParamLimits

0x8a45,	// (0x0004b6bb) popup_call_audio_wait_window

0x8a64,	// (0x0004b6da) popup_number_entry_window_ParamLimits

0x8a64,	// (0x0004b6da) popup_number_entry_window

0xd7de,	// (0x00050454) bg_popup_call_pane_cp05_ParamLimits

0xd7de,	// (0x00050454) bg_popup_call_pane_cp05

0xd7fe,	// (0x00050474) popup_number_entry_window_t1

0xd811,	// (0x00050487) popup_number_entry_window_t2

0xd823,	// (0x00050499) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x00051cfb) popup_number_entry_window_t

0xd835,	// (0x000504ab) text_title_cp2

0xd848,	// (0x000504be) bg_popup_call_pane_cp_ParamLimits

0xd848,	// (0x000504be) bg_popup_call_pane_cp

0xd856,	// (0x000504cc) call_thumbnail_pane

0xd85e,	// (0x000504d4) popup_call_audio_in_window_g1_ParamLimits

0xd85e,	// (0x000504d4) popup_call_audio_in_window_g1

0xd86a,	// (0x000504e0) popup_call_audio_in_window_g2_ParamLimits

0xd86a,	// (0x000504e0) popup_call_audio_in_window_g2

0xd876,	// (0x000504ec) popup_call_audio_in_window_g3_ParamLimits

0xd876,	// (0x000504ec) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x00051d04) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x00051d04) popup_call_audio_in_window_g

0xd882,	// (0x000504f8) popup_call_audio_in_window_t1_ParamLimits

0xd882,	// (0x000504f8) popup_call_audio_in_window_t1

0xd89d,	// (0x00050513) popup_call_audio_in_window_t2_ParamLimits

0xd89d,	// (0x00050513) popup_call_audio_in_window_t2

0xd8b8,	// (0x0005052e) popup_call_audio_in_window_t3_ParamLimits

0xd8b8,	// (0x0005052e) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x00051d0b) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x00051d0b) popup_call_audio_in_window_t

0xd848,	// (0x000504be) bg_popup_call_pane_cp01_ParamLimits

0xd848,	// (0x000504be) bg_popup_call_pane_cp01

0xd856,	// (0x000504cc) call_thumbnail_pane_cp02

0xd8cb,	// (0x00050541) call_type_pane_cp022

0xd8d3,	// (0x00050549) popup_call_audio_out_window_g1_ParamLimits

0xd8d3,	// (0x00050549) popup_call_audio_out_window_g1

0xd8e5,	// (0x0005055b) popup_call_audio_out_window_g2_ParamLimits

0xd8e5,	// (0x0005055b) popup_call_audio_out_window_g2

0xd8f1,	// (0x00050567) popup_call_audio_out_window_g3_ParamLimits

0xd8f1,	// (0x00050567) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x00051d12) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x00051d12) popup_call_audio_out_window_g

0xd903,	// (0x00050579) popup_call_audio_out_window_t1_ParamLimits

0xd903,	// (0x00050579) popup_call_audio_out_window_t1

0xd91b,	// (0x00050591) popup_call_audio_out_window_t2_ParamLimits

0xd91b,	// (0x00050591) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x00051d19) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x00051d19) popup_call_audio_out_window_t

0xd930,	// (0x000505a6) bg_popup_call_pane_ParamLimits

0xd930,	// (0x000505a6) bg_popup_call_pane

0x62cd,	// (0x00048f43) call_thumbnail_pane_cp_ParamLimits

0x62cd,	// (0x00048f43) call_thumbnail_pane_cp

0xd9b4,	// (0x0005062a) call_type_pane_cp01_ParamLimits

0xd9b4,	// (0x0005062a) call_type_pane_cp01

0xd9f8,	// (0x0005066e) popup_call_audio_first_window_g1_ParamLimits

0xd9f8,	// (0x0005066e) popup_call_audio_first_window_g1

0xda44,	// (0x000506ba) popup_call_audio_first_window_g2_ParamLimits

0xda44,	// (0x000506ba) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x00051d1e) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x00051d1e) popup_call_audio_first_window_g

0xda88,	// (0x000506fe) popup_call_audio_first_window_t1_ParamLimits

0xda88,	// (0x000506fe) popup_call_audio_first_window_t1

0xdb34,	// (0x000507aa) popup_call_audio_first_window_t4_ParamLimits

0xdb34,	// (0x000507aa) popup_call_audio_first_window_t4

0xdbc0,	// (0x00050836) popup_call_audio_first_window_t5_ParamLimits

0xdbc0,	// (0x00050836) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x00051d23) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x00051d23) popup_call_audio_first_window_t

0xdbef,	// (0x00050865) bg_popup_call_pane_cp02

0xdbf9,	// (0x0005086f) call_type_pane_cp023

0xdc01,	// (0x00050877) popup_call_audio_wait_window_g1

0xdc09,	// (0x0005087f) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x00051d2a) popup_call_audio_wait_window_g

0xdc11,	// (0x00050887) popup_call_audio_wait_window_t3

0xdc1f,	// (0x00050895) bg_popup_call_pane_cp03_ParamLimits

0xdc1f,	// (0x00050895) bg_popup_call_pane_cp03

0xdc7f,	// (0x000508f5) call_thumbnail_pane_cp011_ParamLimits

0xdc7f,	// (0x000508f5) call_thumbnail_pane_cp011

0xdc8b,	// (0x00050901) call_type_pane_cp034_ParamLimits

0xdc8b,	// (0x00050901) call_type_pane_cp034

0xdcc7,	// (0x0005093d) popup_call_audio_second_window_g1_ParamLimits

0xdcc7,	// (0x0005093d) popup_call_audio_second_window_g1

0xdd03,	// (0x00050979) popup_call_audio_second_window_g2_ParamLimits

0xdd03,	// (0x00050979) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x00051d2f) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x00051d2f) popup_call_audio_second_window_g

0xdd3f,	// (0x000509b5) popup_call_audio_second_window_t1_ParamLimits

0xdd3f,	// (0x000509b5) popup_call_audio_second_window_t1

0xddc0,	// (0x00050a36) popup_call_audio_second_window_t2_ParamLimits

0xddc0,	// (0x00050a36) popup_call_audio_second_window_t2

0xddf6,	// (0x00050a6c) popup_call_audio_second_window_t3_ParamLimits

0xddf6,	// (0x00050a6c) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x00051d34) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x00051d34) popup_call_audio_second_window_t

0xdbef,	// (0x00050865) bg_popup_call_pane_cp04

0xde2c,	// (0x00050aa2) list_conf_pane

0xde34,	// (0x00050aaa) popup_call_audio_conf_window_t1

0xde42,	// (0x00050ab8) call_thumbnail_pane_g1

0xde4a,	// (0x00050ac0) bg_pinb_pane_ParamLimits

0xde4a,	// (0x00050ac0) bg_pinb_pane

0xde58,	// (0x00050ace) find_pinb_pane

0xde4a,	// (0x00050ac0) listscroll_pinb_pane_ParamLimits

0xde4a,	// (0x00050ac0) listscroll_pinb_pane

0xde62,	// (0x00050ad8) pinb_bg_pane_g1

0xde62,	// (0x00050ad8) pinb_bg_pane_g2

0xde62,	// (0x00050ad8) pinb_bg_pane_g3

0xde62,	// (0x00050ad8) pinb_bg_pane_g4

0xde62,	// (0x00050ad8) pinb_bg_pane_g5

0xde62,	// (0x00050ad8) pinb_bg_pane_g6

0xde62,	// (0x00050ad8) pinb_bg_pane_g7

0xde62,	// (0x00050ad8) pinb_bg_pane_g8

0xde62,	// (0x00050ad8) pinb_bg_pane_g9

0xde62,	// (0x00050ad8) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x00051d3b) pinb_bg_pane_g

0x62fc,	// (0x00048f72) grid_pinb_pane

0xd7d4,	// (0x0005044a) list_pinb_pane

0xde6c,	// (0x00050ae2) scroll_pane_cp01_ParamLimits

0xde6c,	// (0x00050ae2) scroll_pane_cp01

0xde79,	// (0x00050aef) find_pinb_pane_g1_ParamLimits

0xde79,	// (0x00050aef) find_pinb_pane_g1

0xde91,	// (0x00050b07) find_pinb_pane_t1

0xdea3,	// (0x00050b19) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x00051d55) find_pinb_pane_t

0xdeb8,	// (0x00050b2e) input_focus_pane_cp01_ParamLimits

0xdeb8,	// (0x00050b2e) input_focus_pane_cp01

0x6306,	// (0x00048f7c) cell_pinb_pane_ParamLimits

0x6306,	// (0x00048f7c) cell_pinb_pane

0xdec4,	// (0x00050b3a) cell_pinb_pane_g1_ParamLimits

0xdec4,	// (0x00050b3a) cell_pinb_pane_g1

0xded2,	// (0x00050b48) cell_pinb_pane_g2_ParamLimits

0xded2,	// (0x00050b48) cell_pinb_pane_g2

0xded2,	// (0x00050b48) cell_pinb_pane_g3_ParamLimits

0xded2,	// (0x00050b48) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x00051d5a) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x00051d5a) cell_pinb_pane_g

0xdbef,	// (0x00050865) grid_highlight_pane_cp01

0xd7d4,	// (0x0005044a) list_pinb_item_pane_ParamLimits

0xd7d4,	// (0x0005044a) list_pinb_item_pane

0xd7d4,	// (0x0005044a) list_highlight_pane_cp02

0xdee0,	// (0x00050b56) list_pinb_item_pane_g1_ParamLimits

0xdee0,	// (0x00050b56) list_pinb_item_pane_g1

0xded2,	// (0x00050b48) list_pinb_item_pane_g2_ParamLimits

0xded2,	// (0x00050b48) list_pinb_item_pane_g2

0xdec4,	// (0x00050b3a) list_pinb_item_pane_g3_ParamLimits

0xdec4,	// (0x00050b3a) list_pinb_item_pane_g3

0xded2,	// (0x00050b48) list_pinb_item_pane_g4_ParamLimits

0xded2,	// (0x00050b48) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x00051d61) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x00051d61) list_pinb_item_pane_g

0xdeee,	// (0x00050b64) list_pinb_item_pane_t1_ParamLimits

0xdeee,	// (0x00050b64) list_pinb_item_pane_t1

0x632a,	// (0x00048fa0) calc_display_pane

0x6342,	// (0x00048fb8) calc_paper_pane

0x635e,	// (0x00048fd4) grid_calc_pane

0xdbef,	// (0x00050865) bg_list_pane_cp01

0x637e,	// (0x00048ff4) clock_g1

0x6386,	// (0x00048ffc) clock_g2

0x0001,

0xf0f4,	// (0x00051d6a) clock_g

0x638e,	// (0x00049004) clock_t1_ParamLimits

0x638e,	// (0x00049004) clock_t1

0x63a3,	// (0x00049019) clock_t2_ParamLimits

0x63a3,	// (0x00049019) clock_t2

0x63b5,	// (0x0004902b) clock_t3_ParamLimits

0x63b5,	// (0x0004902b) clock_t3

0x63c7,	// (0x0004903d) clock_t4_ParamLimits

0x63c7,	// (0x0004903d) clock_t4

0x63d9,	// (0x0004904f) clock_t5_ParamLimits

0x63d9,	// (0x0004904f) clock_t5

0x63ee,	// (0x00049064) clock_t6_ParamLimits

0x63ee,	// (0x00049064) clock_t6

0x6400,	// (0x00049076) clock_t7_ParamLimits

0x6400,	// (0x00049076) clock_t7

0x6412,	// (0x00049088) clock_t8_ParamLimits

0x6412,	// (0x00049088) clock_t8

0x6424,	// (0x0004909a) clock_t9_ParamLimits

0x6424,	// (0x0004909a) clock_t9

0x0008,

0xf0f9,	// (0x00051d6f) clock_t_ParamLimits

0xf0f9,	// (0x00051d6f) clock_t

0xdf02,	// (0x00050b78) popup_clock_analogue_window_cp02

0xdf02,	// (0x00050b78) popup_clock_digital_window_cp01

0xdbef,	// (0x00050865) listscroll_help_pane

0xdbef,	// (0x00050865) phob_pre_status_pane

0xdf0a,	// (0x00050b80) grid_qdial_pane

0xde4a,	// (0x00050ac0) listscroll_mce_pane

0xde4a,	// (0x00050ac0) bg_notes_pane

0xdf14,	// (0x00050b8a) list_notes_pane

0x6436,	// (0x000490ac) scroll_pane_cp06

0xdf22,	// (0x00050b98) bg_calc_paper_pane

0x6443,	// (0x000490b9) list_calc_pane

0xdf3a,	// (0x00050bb0) bg_calc_display_pane

0x645d,	// (0x000490d3) calc_display_pane_t1

0x6472,	// (0x000490e8) calc_display_pane_t2

0x6487,	// (0x000490fd) calc_display_pane_t3

0x0002,

0xf10c,	// (0x00051d82) calc_display_pane_t

0x6499,	// (0x0004910f) cell_calc_pane_ParamLimits

0x6499,	// (0x0004910f) cell_calc_pane

0xdf46,	// (0x00050bbc) bg_calc_paper_pane_g1

0xdf52,	// (0x00050bc8) bg_calc_paper_pane_g2

0xdf5e,	// (0x00050bd4) bg_calc_paper_pane_g3

0xdf6a,	// (0x00050be0) bg_calc_paper_pane_g4

0xdf76,	// (0x00050bec) bg_calc_paper_pane_g5

0x64c0,	// (0x00049136) bg_calc_paper_pane_g6

0x64cf,	// (0x00049145) bg_calc_paper_pane_g7

0x64de,	// (0x00049154) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x00051d89) bg_calc_paper_pane_g

0x64ed,	// (0x00049163) calc_bg_paper_pane_g9

0x64fc,	// (0x00049172) list_calc_item_pane_ParamLimits

0x64fc,	// (0x00049172) list_calc_item_pane

0xdf82,	// (0x00050bf8) list_calc_item_pane_g1

0x6515,	// (0x0004918b) list_calc_item_pane_t1_ParamLimits

0x6515,	// (0x0004918b) list_calc_item_pane_t1

0x6527,	// (0x0004919d) list_calc_item_pane_t2_ParamLimits

0x6527,	// (0x0004919d) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x00051d9a) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x00051d9a) list_calc_item_pane_t

0xde62,	// (0x00050ad8) cell_calc_pane_g1

0xdf8f,	// (0x00050c05) grid_highlight_pane_cp02

0xdfb1,	// (0x00050c27) bg_calc_display_pane_g1

0x6555,	// (0x000491cb) bg_calc_display_pane_g2

0xdfba,	// (0x00050c30) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x00051da4) bg_calc_display_pane_g

0x655f,	// (0x000491d5) cell_qdial_pane_ParamLimits

0x655f,	// (0x000491d5) cell_qdial_pane

0x6571,	// (0x000491e7) cell_qdial_pane_g1_ParamLimits

0x6571,	// (0x000491e7) cell_qdial_pane_g1

0x657e,	// (0x000491f4) cell_qdial_pane_g2_ParamLimits

0x657e,	// (0x000491f4) cell_qdial_pane_g2

0xdfc3,	// (0x00050c39) cell_qdial_pane_g3_ParamLimits

0xdfc3,	// (0x00050c39) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x00051dab) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x00051dab) cell_qdial_pane_g

0x659c,	// (0x00049212) cell_qdial_pane_t1_ParamLimits

0x659c,	// (0x00049212) cell_qdial_pane_t1

0x65b4,	// (0x0004922a) cell_qdial_pane_t2_ParamLimits

0x65b4,	// (0x0004922a) cell_qdial_pane_t2

0x65c7,	// (0x0004923d) cell_qdial_pane_t3_ParamLimits

0x65c7,	// (0x0004923d) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x00051db4) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x00051db4) cell_qdial_pane_t

0xdbef,	// (0x00050865) grid_highlight_pane_cp04

0xdfcf,	// (0x00050c45) thumbnail_qdial_pane_ParamLimits

0xdfcf,	// (0x00050c45) thumbnail_qdial_pane

0xe02b,	// (0x00050ca1) list_help_pane

0xe035,	// (0x00050cab) scroll_pane_cp02

0x65da,	// (0x00049250) help_list_pane_t1_ParamLimits

0x65da,	// (0x00049250) help_list_pane_t1

0x65f9,	// (0x0004926f) bg_notes_pane_g2

0x6601,	// (0x00049277) bg_notes_pane_g3

0x6609,	// (0x0004927f) notes_bg_pane_g1

0x6611,	// (0x00049287) notes_bg_pane_g4

0x6619,	// (0x0004928f) notes_bg_pane_g5

0x6621,	// (0x00049297) notes_bg_pane_g6

0x6629,	// (0x0004929f) notes_bg_pane_g7

0x6631,	// (0x000492a7) notes_bg_pane_g8

0x6639,	// (0x000492af) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x00051dd2) notes_bg_pane_g

0x6641,	// (0x000492b7) list_notes_text_pane_ParamLimits

0x6641,	// (0x000492b7) list_notes_text_pane

0xe03e,	// (0x00050cb4) list_notes_text_pane_g1

0x6665,	// (0x000492db) list_notes_text_pane_t1

0x6673,	// (0x000492e9) listscroll_cale_week_pane

0x6698,	// (0x0004930e) bg_cale_heading_pane

0xe061,	// (0x00050cd7) bg_cale_pane_cp01

0x66b0,	// (0x00049326) cale_week_corner_pane

0x66ca,	// (0x00049340) cale_week_day_heading_pane

0x66e2,	// (0x00049358) cale_week_scroll_pane_g1

0x66f5,	// (0x0004936b) cale_week_scroll_pane_g2

0x6708,	// (0x0004937e) cale_week_scroll_pane_g3

0x671b,	// (0x00049391) cale_week_scroll_pane_g4

0x672e,	// (0x000493a4) cale_week_scroll_pane_g5

0x6741,	// (0x000493b7) cale_week_scroll_pane_g6

0x6754,	// (0x000493ca) cale_week_scroll_pane_g7

0x6767,	// (0x000493dd) cale_week_scroll_pane_g8

0x677a,	// (0x000493f0) cale_week_scroll_pane_g9

0x678d,	// (0x00049403) cale_week_scroll_pane_g10

0x67a0,	// (0x00049416) cale_week_scroll_pane_g11

0x67b3,	// (0x00049429) cale_week_scroll_pane_g12

0x67c6,	// (0x0004943c) cale_week_scroll_pane_g13

0x67d9,	// (0x0004944f) cale_week_scroll_pane_g14

0x67ec,	// (0x00049462) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x00051de1) cale_week_scroll_pane_g

0x6812,	// (0x00049488) cale_week_time_pane

0x6825,	// (0x0004949b) grid_cale_week_pane

0xe090,	// (0x00050d06) scroll_pane_cp08

0x683a,	// (0x000494b0) cell_cale_week_pane_ParamLimits

0x683a,	// (0x000494b0) cell_cale_week_pane

0x6888,	// (0x000494fe) cale_week_day_heading_pane_t1

0x68c3,	// (0x00049539) cale_week_day_heading_pane_t2

0x68fe,	// (0x00049574) cale_week_day_heading_pane_t3

0x6939,	// (0x000495af) cale_week_day_heading_pane_t4

0x6974,	// (0x000495ea) cale_week_day_heading_pane_t5

0x69af,	// (0x00049625) cale_week_day_heading_pane_t6

0x69ea,	// (0x00049660) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x00051e02) cale_week_day_heading_pane_t

0xe0ad,	// (0x00050d23) bg_cale_side_pane

0x6a25,	// (0x0004969b) cale_week_time_pane_t1

0x6a5f,	// (0x000496d5) cale_week_time_pane_t2

0x6a99,	// (0x0004970f) cale_week_time_pane_t3

0x6ad3,	// (0x00049749) cale_week_time_pane_t4

0x6b0d,	// (0x00049783) cale_week_time_pane_t5

0x6b47,	// (0x000497bd) cale_week_time_pane_t6

0x6b81,	// (0x000497f7) cale_week_time_pane_t7

0x6bbb,	// (0x00049831) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x00051e11) cale_week_time_pane_t

0x6bf5,	// (0x0004986b) cell_cale_week_pane_g2

0x6c19,	// (0x0004988f) cell_cale_week_pane_g3_ParamLimits

0x6c19,	// (0x0004988f) cell_cale_week_pane_g3

0xe0bb,	// (0x00050d31) grid_highlight_pane_cp07

0xe0c3,	// (0x00050d39) listscroll_gms_pane

0xe0cd,	// (0x00050d43) grid_gms_pane

0xe0d6,	// (0x00050d4c) listscroll_gms_pane_g1

0xe0de,	// (0x00050d54) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x00051e22) listscroll_gms_pane_g

0x6c31,	// (0x000498a7) scroll_pane_cp010

0x6c3a,	// (0x000498b0) cell_gms_pane_ParamLimits

0x6c3a,	// (0x000498b0) cell_gms_pane

0x6c4b,	// (0x000498c1) cell_gms_pane_g1

0xe0e6,	// (0x00050d5c) cell_gms_pane_g2

0xe03e,	// (0x00050cb4) cell_gms_pane_g3

0xe0ee,	// (0x00050d64) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x00051e27) cell_gms_pane_g

0xe0f7,	// (0x00050d6d) grid_highlight_pane_cp09

0x893c,	// (0x0004b5b2) phob_pre_status_pane_g1

0x8944,	// (0x0004b5ba) phob_pre_status_pane_g2

0x894c,	// (0x0004b5c2) phob_pre_status_pane_g3

0x8954,	// (0x0004b5ca) phob_pre_status_pane_g4

0x0004,

0xf59f,	// (0x00052215) phob_pre_status_pane_g

0x8964,	// (0x0004b5da) phob_pre_status_pane_t1

0x8972,	// (0x0004b5e8) phob_pre_status_pane_t2

0x8980,	// (0x0004b5f6) phob_pre_status_pane_t3

0x0002,

0xf5aa,	// (0x00052220) phob_pre_status_pane_t

0xe107,	// (0x00050d7d) bg_list_pane_cp05

0x6c53,	// (0x000498c9) grid_vorec_pane

0xe10f,	// (0x00050d85) vorec_t1

0xe11d,	// (0x00050d93) vorec_t2

0xe12b,	// (0x00050da1) vorec_t3

0x6c5b,	// (0x000498d1) vorec_t4

0xd7b0,	// (0x00050426) vorec_t5

0xd7be,	// (0x00050434) vorec_t6

0x0004,

0xf1ba,	// (0x00051e30) vorec_t

0xd7cc,	// (0x00050442) wait_bar_pane_cp01

0x132e,	// (0x00043fa4) cell_vorec_pane_ParamLimits

0x132e,	// (0x00043fa4) cell_vorec_pane

0x6c69,	// (0x000498df) cell_vorec_pane_g1

0xdbef,	// (0x00050865) grid_highlight_pane_cp05

0xe147,	// (0x00050dbd) cams_zoom_pane

0x6c73,	// (0x000498e9) image_vga_pane

0xded2,	// (0x00050b48) main_camera_pane_g1

0xded2,	// (0x00050b48) main_camera_pane_g2

0xded2,	// (0x00050b48) main_camera_pane_g3

0xded2,	// (0x00050b48) main_camera_pane_g4

0xded2,	// (0x00050b48) main_camera_pane_g5

0xded2,	// (0x00050b48) main_camera_pane_g6

0xded2,	// (0x00050b48) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x00051e3b) main_camera_pane_g

0xe155,	// (0x00050dcb) main_camera_pane_t1

0xe155,	// (0x00050dcb) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x00051e4c) main_camera_pane_t

0x6c92,	// (0x00049908) cams_zoom_pane_cp_ParamLimits

0x6c92,	// (0x00049908) cams_zoom_pane_cp

0x6cb6,	// (0x0004992c) image_cif_pane_ParamLimits

0x6cb6,	// (0x0004992c) image_cif_pane

0x6cc3,	// (0x00049939) image_subqcif_pane

0x6ccb,	// (0x00049941) main_video_pane_g1_ParamLimits

0x6ccb,	// (0x00049941) main_video_pane_g1

0x6ceb,	// (0x00049961) main_video_pane_g2_ParamLimits

0x6ceb,	// (0x00049961) main_video_pane_g2

0x6d19,	// (0x0004998f) main_video_pane_g3_ParamLimits

0x6d19,	// (0x0004998f) main_video_pane_g3

0x6d42,	// (0x000499b8) main_video_pane_g4_ParamLimits

0x6d42,	// (0x000499b8) main_video_pane_g4

0x6d6b,	// (0x000499e1) main_video_pane_g5_ParamLimits

0x6d6b,	// (0x000499e1) main_video_pane_g5

0xe169,	// (0x00050ddf) main_video_pane_g6_ParamLimits

0xe169,	// (0x00050ddf) main_video_pane_g6

0x0006,

0xf1db,	// (0x00051e51) main_video_pane_g_ParamLimits

0xf1db,	// (0x00051e51) main_video_pane_g

0x6d8d,	// (0x00049a03) main_video_pane_t1_ParamLimits

0x6d8d,	// (0x00049a03) main_video_pane_t1

0xe183,	// (0x00050df9) cams_zoom_pane_g1

0xe183,	// (0x00050df9) cams_zoom_pane_g2

0xe183,	// (0x00050df9) cams_zoom_pane_g3

0xe183,	// (0x00050df9) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x00051e60) cams_zoom_pane_g

0x6dd7,	// (0x00049a4d) grid_cams_pane

0x6de3,	// (0x00049a59) linegrid_cams_pane

0x6def,	// (0x00049a65) cell_cams_pane_ParamLimits

0x6def,	// (0x00049a65) cell_cams_pane

0xe18d,	// (0x00050e03) cams_burst_image_pane

0xe195,	// (0x00050e0b) cell_cams_pane_g1

0xdbef,	// (0x00050865) grid_highlight_pane_cp03

0xde62,	// (0x00050ad8) mp_bg_pane_g1

0xdbef,	// (0x00050865) bg_list_pane_cp03

0x238e,	// (0x00045004) bg_mp_pane

0x2396,	// (0x0004500c) grid_mp_pane

0x239e,	// (0x00045014) media_player_g1

0x23a6,	// (0x0004501c) media_player_t1

0x23b4,	// (0x0004502a) media_player_t2

0x23c2,	// (0x00045038) media_player_t3

0x23d0,	// (0x00045046) media_player_t4

0x23de,	// (0x00045054) media_player_t5

0x23ec,	// (0x00045062) media_player_t6

0x23fa,	// (0x00045070) media_player_t7

0x0006,

0xf589,	// (0x000521ff) media_player_t

0x2408,	// (0x0004507e) wait_bar_pane_cp02

0xf56e,	// (0x000521e4) main_usb_pane_t

0x8933,	// (0x0004b5a9) cell_mp_pane

0xde62,	// (0x00050ad8) cell_mp_pane_g1

0xdbef,	// (0x00050865) grid_highlight_pane_cp06

0xe19d,	// (0x00050e13) grid_skin_colour_pane

0xe1a5,	// (0x00050e1b) list_highlight_pane_cp03

0x6e02,	// (0x00049a78) skin_g1

0xe1ad,	// (0x00050e23) skin_t1

0xe1bc,	// (0x00050e32) skin_t2

0x0001,

0xf218,	// (0x00051e8e) skin_t

0x6e0a,	// (0x00049a80) cell_skin_colour_pane_ParamLimits

0x6e0a,	// (0x00049a80) cell_skin_colour_pane

0xe1ca,	// (0x00050e40) cell_skin_colour_pane_g1

0x6e80,	// (0x00049af6) call_video_g1_ParamLimits

0x6e80,	// (0x00049af6) call_video_g1

0x6e8c,	// (0x00049b02) call_video_g2_ParamLimits

0x6e8c,	// (0x00049b02) call_video_g2

0x0001,

0xf21d,	// (0x00051e93) call_video_g_ParamLimits

0xf21d,	// (0x00051e93) call_video_g

0x6edc,	// (0x00049b52) call_video_uplink_pane_cp1_ParamLimits

0x6edc,	// (0x00049b52) call_video_uplink_pane_cp1

0xe1dc,	// (0x00050e52) call_video_uplink_pane_cp2

0x6f98,	// (0x00049c0e) video_down_crop_pane_ParamLimits

0x6f98,	// (0x00049c0e) video_down_crop_pane

0x7062,	// (0x00049cd8) video_down_pane_ParamLimits

0x7062,	// (0x00049cd8) video_down_pane

0xe1e4,	// (0x00050e5a) video_down_subqcif_pane_ParamLimits

0xe1e4,	// (0x00050e5a) video_down_subqcif_pane

0xe1fc,	// (0x00050e72) video_down_subqcif_pane_cp_ParamLimits

0xe1fc,	// (0x00050e72) video_down_subqcif_pane_cp

0xe220,	// (0x00050e96) im_reading_pane_ParamLimits

0xe220,	// (0x00050e96) im_reading_pane

0x712e,	// (0x00049da4) im_writing_pane_ParamLimits

0x712e,	// (0x00049da4) im_writing_pane

0x7144,	// (0x00049dba) im_reading_pane_t1

0xe23a,	// (0x00050eb0) list_im_pane

0xe24b,	// (0x00050ec1) scroll_pane_cp07

0x717c,	// (0x00049df2) im_writing_pane_t1_ParamLimits

0x717c,	// (0x00049df2) im_writing_pane_t1

0xe264,	// (0x00050eda) im_writing_pane_t2_ParamLimits

0xe264,	// (0x00050eda) im_writing_pane_t2

0x0001,

0xf227,	// (0x00051e9d) im_writing_pane_t_ParamLimits

0xf227,	// (0x00051e9d) im_writing_pane_t

0xdbef,	// (0x00050865) input_focus_pane_cp04

0xdbef,	// (0x00050865) input_focus_pane_cp05

0x7191,	// (0x00049e07) list_im_single_pane_ParamLimits

0x7191,	// (0x00049e07) list_im_single_pane

0xe281,	// (0x00050ef7) list_single_im_pane_t1

0x88f9,	// (0x0004b56f) blid_accuracy_pane

0x8901,	// (0x0004b577) blid_compass_pane

0x8909,	// (0x0004b57f) main_location_t1

0x8917,	// (0x0004b58d) main_location_t2

0x8925,	// (0x0004b59b) main_location_t3

0x0002,

0xf598,	// (0x0005220e) main_location_t

0xdbef,	// (0x00050865) aid_levels_location

0xde62,	// (0x00050ad8) blid_accuracy_pane_g1

0xde62,	// (0x00050ad8) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x00051ef1) blid_accuracy_pane_g

0xe2bb,	// (0x00050f31) wml_content_pane

0xe2f9,	// (0x00050f6f) wml_button_pane_ParamLimits

0xe2f9,	// (0x00050f6f) wml_button_pane

0x71a9,	// (0x00049e1f) wml_list_single_large_pane_ParamLimits

0x71a9,	// (0x00049e1f) wml_list_single_large_pane

0x71c0,	// (0x00049e36) wml_list_single_medium_pane_ParamLimits

0x71c0,	// (0x00049e36) wml_list_single_medium_pane

0x71d8,	// (0x00049e4e) wml_list_single_small_pane_ParamLimits

0x71d8,	// (0x00049e4e) wml_list_single_small_pane

0xe30d,	// (0x00050f83) wml_selection_box_pane_ParamLimits

0xe30d,	// (0x00050f83) wml_selection_box_pane

0xe320,	// (0x00050f96) wml_list_single_pane_t1

0xe32f,	// (0x00050fa5) wml_list_single_medium_pane_t1

0xe33e,	// (0x00050fb4) wml_list_single_large_pane_t1

0xe34d,	// (0x00050fc3) input_focus_pane_cp02_ParamLimits

0xe34d,	// (0x00050fc3) input_focus_pane_cp02

0xe360,	// (0x00050fd6) wml_selection_box_pane_g1

0xe369,	// (0x00050fdf) wml_selection_box_pane_t1_ParamLimits

0xe369,	// (0x00050fdf) wml_selection_box_pane_t1

0xde4a,	// (0x00050ac0) bg_wml_button_pane_ParamLimits

0xde4a,	// (0x00050ac0) bg_wml_button_pane

0xe381,	// (0x00050ff7) wml_button_pane_g1

0xe389,	// (0x00050fff) wml_button_pane_t1

0xe381,	// (0x00050ff7) wml_button_bg_pane_g1

0xe399,	// (0x0005100f) wml_button_bg_pane_g2

0xe3a1,	// (0x00051017) wml_button_bg_pane_g3

0xe3a9,	// (0x0005101f) wml_button_bg_pane_g4

0xe3b1,	// (0x00051027) wml_button_bg_pane_g5

0xe3b9,	// (0x0005102f) wml_button_bg_pane_g6

0xe3c1,	// (0x00051037) wml_button_bg_pane_g7

0xe3c9,	// (0x0005103f) wml_button_bg_pane_g8

0xe3d1,	// (0x00051047) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x00051ea2) wml_button_bg_pane_g

0x71f3,	// (0x00049e69) bg_list_pane_cp02

0xe3d9,	// (0x0005104f) mce_header_pane_ParamLimits

0xe3d9,	// (0x0005104f) mce_header_pane

0xe3ed,	// (0x00051063) mce_icon_pane

0xe3ed,	// (0x00051063) mce_image_pane

0xe3f6,	// (0x0005106c) mce_text_pane_ParamLimits

0xe3f6,	// (0x0005106c) mce_text_pane

0x71fc,	// (0x00049e72) scroll_pane_cp03

0x71fc,	// (0x00049e72) scroll_pane_cp04

0xe40a,	// (0x00051080) scroll_pane_cp05_ParamLimits

0xe40a,	// (0x00051080) scroll_pane_cp05

0x7204,	// (0x00049e7a) mce_header_field_pane_ParamLimits

0x7204,	// (0x00049e7a) mce_header_field_pane

0x7224,	// (0x00049e9a) mce_header_field_pane_2_ParamLimits

0x7224,	// (0x00049e9a) mce_header_field_pane_2

0x723a,	// (0x00049eb0) mce_header_field_pane_3

0x7242,	// (0x00049eb8) list_single_mce_message_pane_ParamLimits

0x7242,	// (0x00049eb8) list_single_mce_message_pane

0x7259,	// (0x00049ecf) list_single_mce_smart_pane_ParamLimits

0x7259,	// (0x00049ecf) list_single_mce_smart_pane

0xe416,	// (0x0005108c) input_focus_pane_cp03

0xe41f,	// (0x00051095) list_header_data_pane

0x727b,	// (0x00049ef1) mce_header_field_pane_t1

0x7289,	// (0x00049eff) list_single_mce_header_pane_ParamLimits

0x7289,	// (0x00049eff) list_single_mce_header_pane

0xe427,	// (0x0005109d) list_single_mce_header_pane_t1

0xe436,	// (0x000510ac) list_single_mce_message_pane_g1

0xe43f,	// (0x000510b5) list_single_mce_message_pane_t1

0x72c7,	// (0x00049f3d) bg_cale_heading_pane_cp01_ParamLimits

0x72c7,	// (0x00049f3d) bg_cale_heading_pane_cp01

0xe44e,	// (0x000510c4) bg_cale_pane_cp02_ParamLimits

0xe44e,	// (0x000510c4) bg_cale_pane_cp02

0x72f6,	// (0x00049f6c) cale_month_corner_pane

0x7310,	// (0x00049f86) cale_month_day_heading_pane_ParamLimits

0x7310,	// (0x00049f86) cale_month_day_heading_pane

0x733f,	// (0x00049fb5) cale_month_pane_g1_ParamLimits

0x733f,	// (0x00049fb5) cale_month_pane_g1

0x7363,	// (0x00049fd9) cale_month_pane_g2_ParamLimits

0x7363,	// (0x00049fd9) cale_month_pane_g2

0x7382,	// (0x00049ff8) cale_month_pane_g3_ParamLimits

0x7382,	// (0x00049ff8) cale_month_pane_g3

0x73be,	// (0x0004a034) cale_month_pane_g4_ParamLimits

0x73be,	// (0x0004a034) cale_month_pane_g4

0x73fa,	// (0x0004a070) cale_month_pane_g5_ParamLimits

0x73fa,	// (0x0004a070) cale_month_pane_g5

0x7436,	// (0x0004a0ac) cale_month_pane_g6_ParamLimits

0x7436,	// (0x0004a0ac) cale_month_pane_g6

0x7472,	// (0x0004a0e8) cale_month_pane_g7_ParamLimits

0x7472,	// (0x0004a0e8) cale_month_pane_g7

0x74ae,	// (0x0004a124) cale_month_pane_g8_ParamLimits

0x74ae,	// (0x0004a124) cale_month_pane_g8

0x74ea,	// (0x0004a160) cale_month_pane_g9_ParamLimits

0x74ea,	// (0x0004a160) cale_month_pane_g9

0x7524,	// (0x0004a19a) cale_month_pane_g10_ParamLimits

0x7524,	// (0x0004a19a) cale_month_pane_g10

0x755e,	// (0x0004a1d4) cale_month_pane_g11_ParamLimits

0x755e,	// (0x0004a1d4) cale_month_pane_g11

0x7598,	// (0x0004a20e) cale_month_pane_g12_ParamLimits

0x7598,	// (0x0004a20e) cale_month_pane_g12

0x75d2,	// (0x0004a248) cale_month_pane_g13_ParamLimits

0x75d2,	// (0x0004a248) cale_month_pane_g13

0x000c,

0xf23f,	// (0x00051eb5) cale_month_pane_g_ParamLimits

0xf23f,	// (0x00051eb5) cale_month_pane_g

0x760c,	// (0x0004a282) cale_month_week_pane

0x761f,	// (0x0004a295) grid_cale_month_pane_ParamLimits

0x761f,	// (0x0004a295) grid_cale_month_pane

0x7645,	// (0x0004a2bb) cale_month_day_heading_pane_t1

0x76cb,	// (0x0004a341) cale_month_day_heading_pane_t2

0x775c,	// (0x0004a3d2) cale_month_day_heading_pane_t3

0x77ed,	// (0x0004a463) cale_month_day_heading_pane_t4

0x787e,	// (0x0004a4f4) cale_month_day_heading_pane_t5

0x790f,	// (0x0004a585) cale_month_day_heading_pane_t6

0x79a0,	// (0x0004a616) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x00051ed0) cale_month_day_heading_pane_t

0xe0ad,	// (0x00050d23) bg_cale_side_pane_cp01

0x7a31,	// (0x0004a6a7) cale_month_week_pane_t1

0x7a6a,	// (0x0004a6e0) cale_month_week_pane_t2

0x7aa3,	// (0x0004a719) cale_month_week_pane_t3

0x7adc,	// (0x0004a752) cale_month_week_pane_t4

0x7b15,	// (0x0004a78b) cale_month_week_pane_t5

0x7b4e,	// (0x0004a7c4) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x00051edf) cale_month_week_pane_t

0x7b87,	// (0x0004a7fd) cell_cale_month_pane_ParamLimits

0x7b87,	// (0x0004a7fd) cell_cale_month_pane

0x7c75,	// (0x0004a8eb) cell_cale_month_pane_g1

0x7c81,	// (0x0004a8f7) cell_cale_month_pane_t1_ParamLimits

0x7c81,	// (0x0004a8f7) cell_cale_month_pane_t1

0xe0bb,	// (0x00050d31) grid_highlight_pane_cp08

0xde62,	// (0x00050ad8) main_smil_g1

0x7ca1,	// (0x0004a917) smil_status_pane

0xe48d,	// (0x00051103) smil_text_pane

0x2256,	// (0x00044ecc) bg_popup_call3_rect_pane_g8

0x225e,	// (0x00044ed4) bg_popup_call3_rect_pane_g9

0x0008,

0xf519,	// (0x0005218f) bg_popup_call3_rect_pane_g

0x24f1,	// (0x00045167) smil_status_volume_pane_g1

0x7cb2,	// (0x0004a928) smil_status_pane_t1

0x8c67,	// (0x0004b8dd) volume_smil_pane

0xe497,	// (0x0005110d) list_smil_text_pane

0x7cc9,	// (0x0004a93f) scroll_pane_cp011

0x7cd2,	// (0x0004a948) smil_text_list_pane_t1_ParamLimits

0x7cd2,	// (0x0004a948) smil_text_list_pane_t1

0x7d11,	// (0x0004a987) aid_volume_smil_ParamLimits

0x7d11,	// (0x0004a987) aid_volume_smil

0xde62,	// (0x00050ad8) smil_volume_pane_g1

0xde62,	// (0x00050ad8) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x00051ef1) smil_volume_pane_g

0x6673,	// (0x000492e9) listscroll_cale_day_pane

0xe4a1,	// (0x00051117) bg_cale_pane

0xe4b9,	// (0x0005112f) list_cale_pane

0xe4dc,	// (0x00051152) scroll_pane_cp09

0xe4ed,	// (0x00051163) cale_bg_pane_g1

0xe4f5,	// (0x0005116b) cale_bg_pane_g2

0xe4fd,	// (0x00051173) cale_bg_pane_g3

0xe505,	// (0x0005117b) cale_bg_pane_g4

0xe50d,	// (0x00051183) cale_bg_pane_g5

0xe515,	// (0x0005118b) cale_bg_pane_g6

0xe51d,	// (0x00051193) cale_bg_pane_g7

0xe525,	// (0x0005119b) cale_bg_pane_g8

0xe52d,	// (0x000511a3) cale_bg_pane_g9

0x0008,

0xf280,	// (0x00051ef6) cale_bg_pane_g

0x7d3b,	// (0x0004a9b1) list_cale_time_pane_ParamLimits

0x7d3b,	// (0x0004a9b1) list_cale_time_pane

0xe535,	// (0x000511ab) list_cale_time_pane_g1_ParamLimits

0xe535,	// (0x000511ab) list_cale_time_pane_g1

0xe541,	// (0x000511b7) list_cale_time_pane_g2_ParamLimits

0xe541,	// (0x000511b7) list_cale_time_pane_g2

0x7d4f,	// (0x0004a9c5) list_cale_time_pane_g3_ParamLimits

0x7d4f,	// (0x0004a9c5) list_cale_time_pane_g3

0x7d5b,	// (0x0004a9d1) list_cale_time_pane_g4_ParamLimits

0x7d5b,	// (0x0004a9d1) list_cale_time_pane_g4

0x7d67,	// (0x0004a9dd) list_cale_time_pane_g5_ParamLimits

0x7d67,	// (0x0004a9dd) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x00051f09) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x00051f09) list_cale_time_pane_g

0xe55b,	// (0x000511d1) list_cale_time_pane_t1_ParamLimits

0xe55b,	// (0x000511d1) list_cale_time_pane_t1

0xe583,	// (0x000511f9) list_cale_time_pane_t2_ParamLimits

0xe583,	// (0x000511f9) list_cale_time_pane_t2

0x8024,	// (0x0004ac9a) aid_blid_cardinal_pane

0x8062,	// (0x0004acd8) compass_pane_t4

0xe5ab,	// (0x00051221) list_cale_time_pane_t4_ParamLimits

0xe5ab,	// (0x00051221) list_cale_time_pane_t4

0x8070,	// (0x0004ace6) compass_pane_t5

0x807e,	// (0x0004acf4) compass_pane_t6

0x808c,	// (0x0004ad02) compass_pane_t7

0xea0a,	// (0x00051680) navi_pane_cc_t1

0xebaf,	// (0x00051825) aid_phob_thumbnail_center_pane

0x84a6,	// (0x0004b11c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x00051f16) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x00051f16) list_cale_time_pane_t

0xd848,	// (0x000504be) bg_popup_window_pane_cp02_ParamLimits

0xd848,	// (0x000504be) bg_popup_window_pane_cp02

0xe5d3,	// (0x00051249) heading_pane_cp01_ParamLimits

0xe5d3,	// (0x00051249) heading_pane_cp01

0xe5df,	// (0x00051255) loc_req_pane_ParamLimits

0xe5df,	// (0x00051255) loc_req_pane

0xe5ef,	// (0x00051265) loc_type_pane_ParamLimits

0xe5ef,	// (0x00051265) loc_type_pane

0xe601,	// (0x00051277) loc_type_pane_t1_ParamLimits

0xe601,	// (0x00051277) loc_type_pane_t1

0xe613,	// (0x00051289) loc_type_pane_t2_ParamLimits

0xe613,	// (0x00051289) loc_type_pane_t2

0xe625,	// (0x0005129b) loc_type_pane_t3_ParamLimits

0xe625,	// (0x0005129b) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x00051f1d) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x00051f1d) loc_type_pane_t

0xe637,	// (0x000512ad) list_loc_req_pane

0xe641,	// (0x000512b7) scroll_pane_cp012

0x7d73,	// (0x0004a9e9) list_single_loc_request_popup_menu_pane_ParamLimits

0x7d73,	// (0x0004a9e9) list_single_loc_request_popup_menu_pane

0xe64a,	// (0x000512c0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe64a,	// (0x000512c0) list_single_loc_request_popup_menu_pane_g1

0xe656,	// (0x000512cc) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe656,	// (0x000512cc) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x00051f24) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x00051f24) list_single_loc_request_popup_menu_pane_g

0xe662,	// (0x000512d8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe662,	// (0x000512d8) list_single_loc_request_popup_menu_pane_t1

0x7d85,	// (0x0004a9fb) bg_popup_window_pane_cp03_ParamLimits

0x7d85,	// (0x0004a9fb) bg_popup_window_pane_cp03

0x7d93,	// (0x0004aa09) heading_loc_req_pane_ParamLimits

0x7d93,	// (0x0004aa09) heading_loc_req_pane

0x7d9f,	// (0x0004aa15) popup_dyc_status_message_window_g1_ParamLimits

0x7d9f,	// (0x0004aa15) popup_dyc_status_message_window_g1

0x7dab,	// (0x0004aa21) popup_dyc_status_message_window_t1_ParamLimits

0x7dab,	// (0x0004aa21) popup_dyc_status_message_window_t1

0x7dbd,	// (0x0004aa33) popup_dyc_status_message_window_t2_ParamLimits

0x7dbd,	// (0x0004aa33) popup_dyc_status_message_window_t2

0x7dcf,	// (0x0004aa45) popup_dyc_status_message_window_t3_ParamLimits

0x7dcf,	// (0x0004aa45) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x00051f29) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x00051f29) popup_dyc_status_message_window_t

0xdbef,	// (0x00050865) bg_heading_pane_cp01

0xe678,	// (0x000512ee) heading_loc_req_pane_g1

0xe680,	// (0x000512f6) heading_loc_req_pane_g2

0xe688,	// (0x000512fe) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x00051f30) heading_loc_req_pane_g

0xe690,	// (0x00051306) heading_loc_req_pane_t1

0xe69f,	// (0x00051315) bg_popup_sub_pane_cp01_ParamLimits

0xe69f,	// (0x00051315) bg_popup_sub_pane_cp01

0xe6ad,	// (0x00051323) popup_cale_events_window_g1_ParamLimits

0xe6ad,	// (0x00051323) popup_cale_events_window_g1

0xe6cd,	// (0x00051343) popup_cale_events_window_g2_ParamLimits

0xe6cd,	// (0x00051343) popup_cale_events_window_g2

0x0001,

0xf2ee,	// (0x00051f64) popup_cale_events_window_g_ParamLimits

0xf2ee,	// (0x00051f64) popup_cale_events_window_g

0xe6ed,	// (0x00051363) popup_cale_events_window_t1_ParamLimits

0xe6ed,	// (0x00051363) popup_cale_events_window_t1

0xe6ff,	// (0x00051375) popup_cale_events_window_t2_ParamLimits

0xe6ff,	// (0x00051375) popup_cale_events_window_t2

0xe73d,	// (0x000513b3) popup_cale_events_window_t3_ParamLimits

0xe73d,	// (0x000513b3) popup_cale_events_window_t3

0xe777,	// (0x000513ed) popup_cale_events_window_t4_ParamLimits

0xe777,	// (0x000513ed) popup_cale_events_window_t4

0x0003,

0xf2f3,	// (0x00051f69) popup_cale_events_window_t_ParamLimits

0xf2f3,	// (0x00051f69) popup_cale_events_window_t

0x7dfb,	// (0x0004aa71) call_type_pane

0x1a23,	// (0x00044699) popup_call_status_window_g1

0x7e07,	// (0x0004aa7d) popup_call_status_window_g2

0x7e13,	// (0x0004aa89) popup_call_status_window_g3

0x0002,

0xf2fc,	// (0x00051f72) popup_call_status_window_g

0xe7ad,	// (0x00051423) call_type_pane_g1

0xe7b6,	// (0x0005142c) call_type_pane_g2

0x0001,

0xf303,	// (0x00051f79) call_type_pane_g

0xdbef,	// (0x00050865) bg_popup_sub_pane_cp02

0xe7bf,	// (0x00051435) listscroll_popup_wml_pane

0xe7c7,	// (0x0005143d) list_wml_pane

0xe7d1,	// (0x00051447) scroll_pane_cp013

0x7e1f,	// (0x0004aa95) list_single_graphic_popup_wml_pane_ParamLimits

0x7e1f,	// (0x0004aa95) list_single_graphic_popup_wml_pane

0xde62,	// (0x00050ad8) list_single_graphic_popup_wml_pane_g1

0xe7da,	// (0x00051450) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf308,	// (0x00051f7e) list_single_graphic_popup_wml_pane_g

0xe7e2,	// (0x00051458) list_single_graphic_popup_wml_pane_t1

0xe7f8,	// (0x0005146e) aid_call_pane

0xde42,	// (0x00050ab8) popup_clock_analogue_window_g1

0xde42,	// (0x00050ab8) popup_clock_analogue_window_g2

0x7e33,	// (0x0004aaa9) popup_clock_analogue_window_g3

0x7e33,	// (0x0004aaa9) popup_clock_analogue_window_g4

0xde62,	// (0x00050ad8) popup_clock_analogue_window_g5

0x0004,

0xf30d,	// (0x00051f83) popup_clock_analogue_window_g

0x7e3b,	// (0x0004aab1) popup_clock_analogue_window_t1

0x7e49,	// (0x0004aabf) clock_digital_number_pane_ParamLimits

0x7e49,	// (0x0004aabf) clock_digital_number_pane

0x7e55,	// (0x0004aacb) clock_digital_number_pane_cp02_ParamLimits

0x7e55,	// (0x0004aacb) clock_digital_number_pane_cp02

0x7e61,	// (0x0004aad7) clock_digital_number_pane_cp03_ParamLimits

0x7e61,	// (0x0004aad7) clock_digital_number_pane_cp03

0x7e6d,	// (0x0004aae3) clock_digital_number_pane_cp04_ParamLimits

0x7e6d,	// (0x0004aae3) clock_digital_number_pane_cp04

0x7e79,	// (0x0004aaef) clock_digital_separator_pane_ParamLimits

0x7e79,	// (0x0004aaef) clock_digital_separator_pane

0x7e85,	// (0x0004aafb) popup_clock_digital_window_t1

0xde62,	// (0x00050ad8) clock_digital_number_pane_g1

0xde62,	// (0x00050ad8) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x00051ef1) clock_digital_number_pane_g

0xde62,	// (0x00050ad8) clock_digital_separator_pane_g1

0xde62,	// (0x00050ad8) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x00051ef1) clock_digital_separator_pane_g

0xdbef,	// (0x00050865) bg_popup_window_pane_cp04

0xe800,	// (0x00051476) heading_pane_cp03

0xe808,	// (0x0005147e) listscroll_popup_gms_pane

0xe810,	// (0x00051486) grid_large_graphic_popup_pane

0xe81a,	// (0x00051490) listscroll_popup_gms_pane_g1

0xe822,	// (0x00051498) listscroll_popup_gms_pane_g2

0x0001,

0xf318,	// (0x00051f8e) listscroll_popup_gms_pane_g

0xe2f1,	// (0x00050f67) scroll_pane_cp014

0x7ea2,	// (0x0004ab18) cell_large_graphic_popup_pane_ParamLimits

0x7ea2,	// (0x0004ab18) cell_large_graphic_popup_pane

0x7eb9,	// (0x0004ab2f) cell_large_graphic_popup_pane_g1_ParamLimits

0x7eb9,	// (0x0004ab2f) cell_large_graphic_popup_pane_g1

0xe82a,	// (0x000514a0) cell_large_graphic_popup_pane_g2_ParamLimits

0xe82a,	// (0x000514a0) cell_large_graphic_popup_pane_g2

0xe836,	// (0x000514ac) cell_large_graphic_popup_pane_g3_ParamLimits

0xe836,	// (0x000514ac) cell_large_graphic_popup_pane_g3

0xe843,	// (0x000514b9) cell_large_graphic_popup_pane_g4_ParamLimits

0xe843,	// (0x000514b9) cell_large_graphic_popup_pane_g4

0x0003,

0xf31d,	// (0x00051f93) cell_large_graphic_popup_pane_g_ParamLimits

0xf31d,	// (0x00051f93) cell_large_graphic_popup_pane_g

0xe853,	// (0x000514c9) grid_highlight_pane_cp010

0xde62,	// (0x00050ad8) bg_popup_call_pane_g1

0xe85d,	// (0x000514d3) list_single_graphic_popup_conf_pane_ParamLimits

0xe85d,	// (0x000514d3) list_single_graphic_popup_conf_pane

0xe870,	// (0x000514e6) list_highlight_pane_cp01

0xe879,	// (0x000514ef) list_single_graphic_popup_conf_pane_g1

0xe881,	// (0x000514f7) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf326,	// (0x00051f9c) list_single_graphic_popup_conf_pane_g

0xe889,	// (0x000514ff) list_single_graphic_popup_conf_pane_t1

0xe897,	// (0x0005150d) linegrid_cams_pane_g1

0x7ec5,	// (0x0004ab3b) linegrid_cams_pane_g2

0xe03e,	// (0x00050cb4) linegrid_cams_pane_g3

0xe8a0,	// (0x00051516) linegrid_cams_pane_g4

0x7ece,	// (0x0004ab44) linegrid_cams_pane_g5

0x7ed7,	// (0x0004ab4d) linegrid_cams_pane_g6

0xe0ee,	// (0x00050d64) linegrid_cams_pane_g7

0x0006,

0xf32b,	// (0x00051fa1) linegrid_cams_pane_g

0xe8a9,	// (0x0005151f) popup_clock_analogue_window

0xe8a9,	// (0x0005151f) popup_clock_digital_window

0xdbef,	// (0x00050865) popup_phob_thumbnail_window

0xde62,	// (0x00050ad8) call_video_uplink_pane_g1

0xe8b2,	// (0x00051528) call_video_uplink_pane_g2

0x0001,

0xf33a,	// (0x00051fb0) call_video_uplink_pane_g

0xe0bb,	// (0x00050d31) video_uplink_pane

0xe8ba,	// (0x00051530) mce_image_pane_g1

0x7ee0,	// (0x0004ab56) mce_image_pane_g2

0x7ee8,	// (0x0004ab5e) mce_image_pane_g3

0x7ef0,	// (0x0004ab66) mce_image_pane_g4

0x7ef8,	// (0x0004ab6e) mce_image_pane_g5

0x0004,

0xf33f,	// (0x00051fb5) mce_image_pane_g

0xe8c4,	// (0x0005153a) control_top_pane_stacon_cp01_ParamLimits

0xe8c4,	// (0x0005153a) control_top_pane_stacon_cp01

0xe8d4,	// (0x0005154a) uni_indicator_pane_stacon_cp01_ParamLimits

0xe8d4,	// (0x0005154a) uni_indicator_pane_stacon_cp01

0xe8e5,	// (0x0005155b) bg_popup_sub_pane_cp03

0xe8ef,	// (0x00051565) chi_dic_find_pane

0x7f00,	// (0x0004ab76) listscroll_chi_dic_pane

0xe8f7,	// (0x0005156d) main_pane_chidic_g1

0xe8ff,	// (0x00051575) chi_dic_find_pane_t1

0xe90d,	// (0x00051583) find_chidic_pane

0xe916,	// (0x0005158c) chi_dic_list_pane_ParamLimits

0xe916,	// (0x0005158c) chi_dic_list_pane

0xe927,	// (0x0005159d) scroll_pane_cp020

0xe92f,	// (0x000515a5) find_chidic_pane_t1

0xdbef,	// (0x00050865) input_focus_pane_cp06

0x7f12,	// (0x0004ab88) list_chi_dic_pane_ParamLimits

0x7f12,	// (0x0004ab88) list_chi_dic_pane

0x7f25,	// (0x0004ab9b) list_chi_dic_pane_t1_ParamLimits

0x7f25,	// (0x0004ab9b) list_chi_dic_pane_t1

0xdbef,	// (0x00050865) list_highlight_pane_cp020

0xe93e,	// (0x000515b4) bg_cale_heading_pane_g1

0x7f38,	// (0x0004abae) bg_cale_heading_pane_g2

0x7f40,	// (0x0004abb6) bg_cale_heading_pane_g3

0x7f48,	// (0x0004abbe) bg_cale_heading_pane_g4

0x7f50,	// (0x0004abc6) bg_cale_heading_pane_g5

0x7f58,	// (0x0004abce) bg_cale_heading_pane_g6

0x7f60,	// (0x0004abd6) bg_cale_heading_pane_g7

0x7f68,	// (0x0004abde) bg_cale_heading_pane_g8

0x7f70,	// (0x0004abe6) bg_cale_heading_pane_g9

0x0008,

0xf34a,	// (0x00051fc0) bg_cale_heading_pane_g

0xe93e,	// (0x000515b4) bg_cale_side_pane_g1

0x7f78,	// (0x0004abee) bg_cale_side_pane_g2

0x7f80,	// (0x0004abf6) bg_cale_side_pane_g3

0x7f88,	// (0x0004abfe) bg_cale_side_pane_g4

0x7f90,	// (0x0004ac06) bg_cale_side_pane_g5

0x7f98,	// (0x0004ac0e) bg_cale_side_pane_g6

0x7fa0,	// (0x0004ac16) bg_cale_side_pane_g7

0x7fa8,	// (0x0004ac1e) bg_cale_side_pane_g8

0x7fb0,	// (0x0004ac26) bg_cale_side_pane_g9

0x0008,

0xf35d,	// (0x00051fd3) bg_cale_side_pane_g

0x7fb8,	// (0x0004ac2e) popup_call_status_window_ParamLimits

0x7fb8,	// (0x0004ac2e) popup_call_status_window

0xe946,	// (0x000515bc) stacon_top_pane

0xe94e,	// (0x000515c4) status_pane_ParamLimits

0xe94e,	// (0x000515c4) status_pane

0xe968,	// (0x000515de) status_small_pane

0xe970,	// (0x000515e6) control_pane

0xdbef,	// (0x00050865) stacon_bottom_pane

0xe978,	// (0x000515ee) list_single_mce_smart_pane_t1_ParamLimits

0xe978,	// (0x000515ee) list_single_mce_smart_pane_t1

0xe98b,	// (0x00051601) list_single_mce_smart_pane_t2_ParamLimits

0xe98b,	// (0x00051601) list_single_mce_smart_pane_t2

0x0001,

0xf370,	// (0x00051fe6) list_single_mce_smart_pane_t_ParamLimits

0xf370,	// (0x00051fe6) list_single_mce_smart_pane_t

0x7fc7,	// (0x0004ac3d) compass_pane

0x7fd0,	// (0x0004ac46) main_location2_pane_t1

0x7fe6,	// (0x0004ac5c) main_location2_pane_t2

0x7ffc,	// (0x0004ac72) main_location2_pane_t3

0x0003,

0xf375,	// (0x00051feb) main_location2_pane_t

0xe9b3,	// (0x00051629) compass_pane_g1_ParamLimits

0xe9b3,	// (0x00051629) compass_pane_g1

0x8044,	// (0x0004acba) compass_pane_t1

0x8053,	// (0x0004acc9) compass_pane_t2

0x0005,

0xf37e,	// (0x00051ff4) compass_pane_t

0x809a,	// (0x0004ad10) text_secondary_cp61

0xea01,	// (0x00051677) navi_pane_cams_g5

0xea4d,	// (0x000516c3) navi_pane_im_t1

0xea5b,	// (0x000516d1) navi_pane_mp_g1_ParamLimits

0xea5b,	// (0x000516d1) navi_pane_mp_g1

0xea6f,	// (0x000516e5) navi_pane_mp_g2_ParamLimits

0xea6f,	// (0x000516e5) navi_pane_mp_g2

0xea7b,	// (0x000516f1) navi_pane_mp_g3_ParamLimits

0xea7b,	// (0x000516f1) navi_pane_mp_g3

0x0002,

0xf392,	// (0x00052008) navi_pane_mp_g_ParamLimits

0xf392,	// (0x00052008) navi_pane_mp_g

0xea87,	// (0x000516fd) navi_pane_mp_t1

0xea95,	// (0x0005170b) navi_pane_mp_t2

0x0002,

0xf399,	// (0x0005200f) navi_pane_mp_t

0xeb00,	// (0x00051776) navi_pane_vt_g1

0xea87,	// (0x000516fd) navi_pane_vt_t1

0xeb08,	// (0x0005177e) navi_slider_pane

0xe107,	// (0x00050d7d) zooming_pane

0xeb10,	// (0x00051786) navi_slider_pane_g1

0x811c,	// (0x0004ad92) navi_slider_pane_g2

0x0006,

0xf3a0,	// (0x00052016) navi_slider_pane_g

0xeb34,	// (0x000517aa) aid_levels_zoom

0xeb3c,	// (0x000517b2) zooming_pane_g1

0xeb44,	// (0x000517ba) zooming_pane_g2

0xeb44,	// (0x000517ba) zooming_pane_g3

0x0002,

0xf3af,	// (0x00052025) zooming_pane_g

0xeb4c,	// (0x000517c2) level_10_zoom

0xeb55,	// (0x000517cb) level_11_zoom

0xeb5e,	// (0x000517d4) level_1_zoom

0xeb67,	// (0x000517dd) level_2_zoom

0xeb70,	// (0x000517e6) level_3_zoom

0xeb79,	// (0x000517ef) level_4_zoom

0xeb82,	// (0x000517f8) level_5_zoom

0xeb8b,	// (0x00051801) level_6_zoom

0xeb94,	// (0x0005180a) level_7_zoom

0xeb9d,	// (0x00051813) level_8_zoom

0xeba6,	// (0x0005181c) level_9_zoom

0xebb7,	// (0x0005182d) popup_phob_thumbnail_window_g1

0xebbf,	// (0x00051835) popup_phob_thumbnail_window_g2

0x0001,

0xf3b6,	// (0x0005202c) popup_phob_thumbnail_window_g

0x2410,	// (0x00045086) level_1_location

0x2418,	// (0x0004508e) level_2_location

0x2420,	// (0x00045096) level_3_location

0x2428,	// (0x0004509e) level_4_location

0xe107,	// (0x00050d7d) level_5_location

0x812e,	// (0x0004ada4) mce_icon_pane_g1

0x8136,	// (0x0004adac) mce_icon_pane_g2

0x0001,

0xf3bb,	// (0x00052031) mce_icon_pane_g

0x813e,	// (0x0004adb4) main_mup_pane_g1_ParamLimits

0x813e,	// (0x0004adb4) main_mup_pane_g1

0xdee0,	// (0x00050b56) main_mup_pane_g2_ParamLimits

0xdee0,	// (0x00050b56) main_mup_pane_g2

0xdee0,	// (0x00050b56) main_mup_pane_g3_ParamLimits

0xdee0,	// (0x00050b56) main_mup_pane_g3

0xdee0,	// (0x00050b56) main_mup_pane_g4_ParamLimits

0xdee0,	// (0x00050b56) main_mup_pane_g4

0xdee0,	// (0x00050b56) main_mup_pane_g5_ParamLimits

0xdee0,	// (0x00050b56) main_mup_pane_g5

0xdee0,	// (0x00050b56) main_mup_pane_g6_ParamLimits

0xdee0,	// (0x00050b56) main_mup_pane_g6

0xdee0,	// (0x00050b56) main_mup_pane_g7_ParamLimits

0xdee0,	// (0x00050b56) main_mup_pane_g7

0xdee0,	// (0x00050b56) main_mup_pane_g8_ParamLimits

0xdee0,	// (0x00050b56) main_mup_pane_g8

0xdee0,	// (0x00050b56) main_mup_pane_g9_ParamLimits

0xdee0,	// (0x00050b56) main_mup_pane_g9

0xdee0,	// (0x00050b56) main_mup_pane_g10_ParamLimits

0xdee0,	// (0x00050b56) main_mup_pane_g10

0xdee0,	// (0x00050b56) main_mup_pane_g11_ParamLimits

0xdee0,	// (0x00050b56) main_mup_pane_g11

0xded2,	// (0x00050b48) main_mup_pane_g12_ParamLimits

0xded2,	// (0x00050b48) main_mup_pane_g12

0xdee0,	// (0x00050b56) main_mup_pane_g13_ParamLimits

0xdee0,	// (0x00050b56) main_mup_pane_g13

0x000c,

0xf3c0,	// (0x00052036) main_mup_pane_g_ParamLimits

0xf3c0,	// (0x00052036) main_mup_pane_g

0xdeee,	// (0x00050b64) main_mup_pane_t1_ParamLimits

0xdeee,	// (0x00050b64) main_mup_pane_t1

0xdeee,	// (0x00050b64) main_mup_pane_t2_ParamLimits

0xdeee,	// (0x00050b64) main_mup_pane_t2

0xdeee,	// (0x00050b64) main_mup_pane_t3_ParamLimits

0xdeee,	// (0x00050b64) main_mup_pane_t3

0xe155,	// (0x00050dcb) main_mup_pane_t4_ParamLimits

0xe155,	// (0x00050dcb) main_mup_pane_t4

0xe155,	// (0x00050dcb) main_mup_pane_t5_ParamLimits

0xe155,	// (0x00050dcb) main_mup_pane_t5

0xebc7,	// (0x0005183d) main_mup_pane_t6_ParamLimits

0xebc7,	// (0x0005183d) main_mup_pane_t6

0x0005,

0xf3db,	// (0x00052051) main_mup_pane_t_ParamLimits

0xf3db,	// (0x00052051) main_mup_pane_t

0xebdb,	// (0x00051851) mup_progress_pane_ParamLimits

0xebdb,	// (0x00051851) mup_progress_pane

0x2512,	// (0x00045188) mup_visualizer_pane_ParamLimits

0x2512,	// (0x00045188) mup_visualizer_pane

0x2512,	// (0x00045188) mup_volume_pane_ParamLimits

0x2512,	// (0x00045188) mup_volume_pane

0xded2,	// (0x00050b48) mup_visualizer_pane_g1_ParamLimits

0xded2,	// (0x00050b48) mup_visualizer_pane_g1

0xebe9,	// (0x0005185f) mup_visualizer_pane_g2_ParamLimits

0xebe9,	// (0x0005185f) mup_visualizer_pane_g2

0xdec4,	// (0x00050b3a) mup_visualizer_pane_g3_ParamLimits

0xdec4,	// (0x00050b3a) mup_visualizer_pane_g3

0x0002,

0xf3e8,	// (0x0005205e) mup_visualizer_pane_g_ParamLimits

0xf3e8,	// (0x0005205e) mup_visualizer_pane_g

0xe183,	// (0x00050df9) mup_volume_pane_g1

0xe183,	// (0x00050df9) mup_volume_pane_g2

0x0001,

0xf3ef,	// (0x00052065) mup_volume_pane_g

0xe183,	// (0x00050df9) mup_progress_pane_g1

0xe183,	// (0x00050df9) mup_progress_pane_g2

0xe183,	// (0x00050df9) mup_progress_pane_g3

0x0002,

0xf3f4,	// (0x0005206a) mup_progress_pane_g

0xdbef,	// (0x00050865) bg_popup_window_pane_cp05

0xebf7,	// (0x0005186d) heading_pane_cp02_ParamLimits

0xebf7,	// (0x0005186d) heading_pane_cp02

0xec11,	// (0x00051887) list_popup_blid_pane

0xec19,	// (0x0005188f) list_blid_sat_info_pane_ParamLimits

0xec19,	// (0x0005188f) list_blid_sat_info_pane

0xec2c,	// (0x000518a2) list_blid_sat_info_pane_g1

0xec34,	// (0x000518aa) list_blid_sat_info_pane_t1

0x8221,	// (0x0004ae97) mup_equalizer_pane_ParamLimits

0x8221,	// (0x0004ae97) mup_equalizer_pane

0x823a,	// (0x0004aeb0) mup_equalizer_pane_cp1_ParamLimits

0x823a,	// (0x0004aeb0) mup_equalizer_pane_cp1

0x8253,	// (0x0004aec9) mup_equalizer_pane_cp2_ParamLimits

0x8253,	// (0x0004aec9) mup_equalizer_pane_cp2

0x826c,	// (0x0004aee2) mup_equalizer_pane_cp3_ParamLimits

0x826c,	// (0x0004aee2) mup_equalizer_pane_cp3

0x8285,	// (0x0004aefb) mup_equalizer_pane_cp4_ParamLimits

0x8285,	// (0x0004aefb) mup_equalizer_pane_cp4

0x829e,	// (0x0004af14) mup_equalizer_pane_cp5

0x82b0,	// (0x0004af26) mup_equalizer_pane_cp6

0x82c2,	// (0x0004af38) mup_equalizer_pane_cp7

0x22ee,	// (0x00044f64) bg_popup_call_poc_act_pane_g9

0x22f6,	// (0x00044f6c) bg_popup_call_poc_act_pane_g10

0x22fe,	// (0x00044f74) bg_popup_call_poc_act_pane_g11

0x000a,

0xde4a,	// (0x00050ac0) mup_scale_pane

0xde62,	// (0x00050ad8) mup_scale_pane_g1

0xec42,	// (0x000518b8) mup_scale_pane_g2

0x0006,

0xf410,	// (0x00052086) mup_scale_pane_g

0xec66,	// (0x000518dc) msg_data_pane

0xec6e,	// (0x000518e4) scroll_pane_cp017

0x82e6,	// (0x0004af5c) bg_list_pane_cp04_ParamLimits

0x82e6,	// (0x0004af5c) bg_list_pane_cp04

0xec76,	// (0x000518ec) msg_data_pane_g1

0x7ee0,	// (0x0004ab56) msg_data_pane_g2

0x7ee8,	// (0x0004ab5e) msg_data_pane_g3

0x8306,	// (0x0004af7c) msg_data_pane_g4

0x7ef8,	// (0x0004ab6e) msg_data_pane_g5

0x812e,	// (0x0004ada4) msg_data_pane_g6

0x830e,	// (0x0004af84) msg_data_pane_g7

0x0006,

0xf41f,	// (0x00052095) msg_data_pane_g

0x8316,	// (0x0004af8c) msg_text_pane_ParamLimits

0x8316,	// (0x0004af8c) msg_text_pane

0x8342,	// (0x0004afb8) qrid_highlight_pane_cp011_ParamLimits

0x8342,	// (0x0004afb8) qrid_highlight_pane_cp011

0xdbef,	// (0x00050865) msg_body_pane

0xdbef,	// (0x00050865) msg_header_pane

0xec87,	// (0x000518fd) input_focus_pane_cp07

0x8364,	// (0x0004afda) msg_header_pane_t1_ParamLimits

0x8364,	// (0x0004afda) msg_header_pane_t1

0x837a,	// (0x0004aff0) msg_header_pane_t2_ParamLimits

0x837a,	// (0x0004aff0) msg_header_pane_t2

0x0001,

0xf433,	// (0x000520a9) msg_header_pane_t_ParamLimits

0xf433,	// (0x000520a9) msg_header_pane_t

0xec9c,	// (0x00051912) msg_body_pane_g1

0x8391,	// (0x0004b007) msg_body_pane_t1_ParamLimits

0x8391,	// (0x0004b007) msg_body_pane_t1

0x12bc,	// (0x00043f32) msg_body_pane_t2_ParamLimits

0x12bc,	// (0x00043f32) msg_body_pane_t2

0x12ce,	// (0x00043f44) msg_body_pane_t3_ParamLimits

0x12ce,	// (0x00043f44) msg_body_pane_t3

0x0002,

0xf438,	// (0x000520ae) msg_body_pane_t_ParamLimits

0xf438,	// (0x000520ae) msg_body_pane_t

0x840a,	// (0x0004b080) main_viewer_pane_g1_ParamLimits

0x840a,	// (0x0004b080) main_viewer_pane_g1

0x8416,	// (0x0004b08c) main_viewer_pane_g2_ParamLimits

0x8416,	// (0x0004b08c) main_viewer_pane_g2

0x8422,	// (0x0004b098) main_viewer_pane_g3_ParamLimits

0x8422,	// (0x0004b098) main_viewer_pane_g3

0x8431,	// (0x0004b0a7) main_viewer_pane_g4_ParamLimits

0x8431,	// (0x0004b0a7) main_viewer_pane_g4

0x8440,	// (0x0004b0b6) main_viewer_pane_g5_ParamLimits

0x8440,	// (0x0004b0b6) main_viewer_pane_g5

0x8440,	// (0x0004b0b6) main_viewer_pane_g7_ParamLimits

0x8440,	// (0x0004b0b6) main_viewer_pane_g7

0x8452,	// (0x0004b0c8) main_viewer_pane_g8_ParamLimits

0x8452,	// (0x0004b0c8) main_viewer_pane_g8

0x0007,

0xf448,	// (0x000520be) main_viewer_pane_g_ParamLimits

0xf448,	// (0x000520be) main_viewer_pane_g

0xeca4,	// (0x0005191a) viewer_content_pane_ParamLimits

0xeca4,	// (0x0005191a) viewer_content_pane

0x8482,	// (0x0004b0f8) main_postcard_pane_g1_ParamLimits

0x8482,	// (0x0004b0f8) main_postcard_pane_g1

0x848e,	// (0x0004b104) main_postcard_pane_g2_ParamLimits

0x848e,	// (0x0004b104) main_postcard_pane_g2

0x849a,	// (0x0004b110) main_postcard_pane_g3_ParamLimits

0x849a,	// (0x0004b110) main_postcard_pane_g3

0x0005,

0xf459,	// (0x000520cf) main_postcard_pane_g_ParamLimits

0xf459,	// (0x000520cf) main_postcard_pane_g

0x84a6,	// (0x0004b11c) main_postcard_pane_g4

0x24de,	// (0x00045154) smil_status_volume_pane_g2

0x84ca,	// (0x0004b140) postcard_pane_ParamLimits

0x84ca,	// (0x0004b140) postcard_pane

0x1a23,	// (0x00044699) postcard_pane_g1_ParamLimits

0x1a23,	// (0x00044699) postcard_pane_g1

0x84fa,	// (0x0004b170) postcard_pane_g2_ParamLimits

0x84fa,	// (0x0004b170) postcard_pane_g2

0x8506,	// (0x0004b17c) postcard_pane_g3_ParamLimits

0x8506,	// (0x0004b17c) postcard_pane_g3

0xecb2,	// (0x00051928) postcard_pane_g4_ParamLimits

0xecb2,	// (0x00051928) postcard_pane_g4

0x8512,	// (0x0004b188) postcard_pane_g5_ParamLimits

0x8512,	// (0x0004b188) postcard_pane_g5

0x851e,	// (0x0004b194) postcard_pane_g6_ParamLimits

0x851e,	// (0x0004b194) postcard_pane_g6

0xecc0,	// (0x00051936) postcard_pane_g7_ParamLimits

0xecc0,	// (0x00051936) postcard_pane_g7

0x0006,

0xf466,	// (0x000520dc) postcard_pane_g_ParamLimits

0xf466,	// (0x000520dc) postcard_pane_g

0x852a,	// (0x0004b1a0) main_mp2_pane_g1_ParamLimits

0x852a,	// (0x0004b1a0) main_mp2_pane_g1

0x8536,	// (0x0004b1ac) main_mp2_pane_g2_ParamLimits

0x8536,	// (0x0004b1ac) main_mp2_pane_g2

0x8542,	// (0x0004b1b8) main_mp2_pane_g3_ParamLimits

0x8542,	// (0x0004b1b8) main_mp2_pane_g3

0x0002,

0xf475,	// (0x000520eb) main_mp2_pane_g_ParamLimits

0xf475,	// (0x000520eb) main_mp2_pane_g

0x854e,	// (0x0004b1c4) main_mp2_pane_t1_ParamLimits

0x854e,	// (0x0004b1c4) main_mp2_pane_t1

0x8563,	// (0x0004b1d9) main_mp2_pane_t2_ParamLimits

0x8563,	// (0x0004b1d9) main_mp2_pane_t2

0x8575,	// (0x0004b1eb) main_mp2_pane_t3_ParamLimits

0x8575,	// (0x0004b1eb) main_mp2_pane_t3

0x0002,

0xf47c,	// (0x000520f2) main_mp2_pane_t_ParamLimits

0xf47c,	// (0x000520f2) main_mp2_pane_t

0xecce,	// (0x00051944) pec_content_pane_ParamLimits

0xecce,	// (0x00051944) pec_content_pane

0xe2f1,	// (0x00050f67) scroll_pane_cp015

0xece0,	// (0x00051956) pec_attribute_pane_ParamLimits

0xece0,	// (0x00051956) pec_attribute_pane

0x8587,	// (0x0004b1fd) pec_content_pane_g1_ParamLimits

0x8587,	// (0x0004b1fd) pec_content_pane_g1

0xecf0,	// (0x00051966) pec_content_pane_t1_ParamLimits

0xecf0,	// (0x00051966) pec_content_pane_t1

0xed02,	// (0x00051978) pec_content_pane_t2_ParamLimits

0xed02,	// (0x00051978) pec_content_pane_t2

0x0001,

0xf483,	// (0x000520f9) pec_content_pane_t_ParamLimits

0xf483,	// (0x000520f9) pec_content_pane_t

0x8593,	// (0x0004b209) list_single_graphic_pane_cp01_ParamLimits

0x8593,	// (0x0004b209) list_single_graphic_pane_cp01

0xde4a,	// (0x00050ac0) bg_popup_sub_pane_cp04

0xed14,	// (0x0005198a) popup_mup_playback_window_g1

0xed20,	// (0x00051996) popup_mup_playback_window_t1

0xed35,	// (0x000519ab) popup_mup_playback_window_t2

0x0001,

0xf488,	// (0x000520fe) popup_mup_playback_window_t

0xed6c,	// (0x000519e2) main_image_pane_g1_ParamLimits

0xed6c,	// (0x000519e2) main_image_pane_g1

0xedaf,	// (0x00051a25) scroll_pane_cp018_ParamLimits

0xedaf,	// (0x00051a25) scroll_pane_cp018

0xedc7,	// (0x00051a3d) scroll_pane_cp016_ParamLimits

0xedc7,	// (0x00051a3d) scroll_pane_cp016

0x8618,	// (0x0004b28e) smil2_image_pane_ParamLimits

0x8618,	// (0x0004b28e) smil2_image_pane

0x8640,	// (0x0004b2b6) smil2_root_pane_ParamLimits

0x8640,	// (0x0004b2b6) smil2_root_pane

0x866c,	// (0x0004b2e2) smil2_text_pane_ParamLimits

0x866c,	// (0x0004b2e2) smil2_text_pane

0xdbef,	// (0x00050865) bg_list_pane_cp06

0xedfb,	// (0x00051a71) grid_radio_pane

0xdbef,	// (0x00050865) bg_popup_window_pane_cp06

0x12e0,	// (0x00043f56) main_fmradio_pane_t1

0xe800,	// (0x00051476) heading_pane_cp04

0x12ee,	// (0x00043f64) main_fmradio_pane_t2

0x2346,	// (0x00044fbc) popup_cale_lunar_info_window_g1

0x12fc,	// (0x00043f72) main_fmradio_pane_t3

0x234e,	// (0x00044fc4) popup_cale_lunar_info_window_g2

0x130a,	// (0x00043f80) main_fmradio_pane_t4

0x0001,

0x1318,	// (0x00043f8e) main_fmradio_pane_t5

0x0004,

0xf57b,	// (0x000521f1) popup_cale_lunar_info_window_g

0xf49d,	// (0x00052113) main_fmradio_pane_t

0x1326,	// (0x00043f9c) wait_bar_pane_cp03

0x132e,	// (0x00043fa4) cell_fmradio_pane_ParamLimits

0x132e,	// (0x00043fa4) cell_fmradio_pane

0xecc0,	// (0x00051936) cell_fmradio_pane_g1_ParamLimits

0xecc0,	// (0x00051936) cell_fmradio_pane_g1

0xdbef,	// (0x00050865) grid_highlight_pane_cp011

0x1341,	// (0x00043fb7) poc_content_pane_ParamLimits

0x1341,	// (0x00043fb7) poc_content_pane

0x1354,	// (0x00043fca) scroll_pane_cp019

0x86a0,	// (0x0004b316) popup_call_poc_act_window_ParamLimits

0x86a0,	// (0x0004b316) popup_call_poc_act_window

0x86ad,	// (0x0004b323) popup_call_poc_inact_window_ParamLimits

0x86ad,	// (0x0004b323) popup_call_poc_inact_window

0xf53f,	// (0x000521b5) bg_popup_call_poc_act_pane_g

0x2306,	// (0x00044f7c) bg_popup_call_poc_inact_pane_g1

0x230e,	// (0x00044f84) bg_popup_call_poc_inact_pane_g2

0x135c,	// (0x00043fd2) popup_call_poc_act_window_g2

0x2316,	// (0x00044f8c) bg_popup_call_poc_inact_pane_g3

0x22c6,	// (0x00044f3c) bg_popup_call_poc_inact_pane_g4

0x231e,	// (0x00044f94) bg_popup_call_poc_inact_pane_g5

0x1364,	// (0x00043fda) popup_call_poc_act_window_t1_ParamLimits

0x1364,	// (0x00043fda) popup_call_poc_act_window_t1

0x138c,	// (0x00044002) popup_call_poc_act_window_t2_ParamLimits

0x138c,	// (0x00044002) popup_call_poc_act_window_t2

0x13b4,	// (0x0004402a) popup_call_poc_act_window_t3_ParamLimits

0x13b4,	// (0x0004402a) popup_call_poc_act_window_t3

0x13dc,	// (0x00044052) popup_call_poc_act_window_t4_ParamLimits

0x13dc,	// (0x00044052) popup_call_poc_act_window_t4

0x0003,

0xf4a8,	// (0x0005211e) popup_call_poc_act_window_t_ParamLimits

0xf4a8,	// (0x0005211e) popup_call_poc_act_window_t

0x2326,	// (0x00044f9c) bg_popup_call_poc_inact_pane_g6

0x232e,	// (0x00044fa4) bg_popup_call_poc_inact_pane_g7

0x2336,	// (0x00044fac) bg_popup_call_poc_inact_pane_g8

0x13ee,	// (0x00044064) popup_call_poc_inact_window_g2

0x233e,	// (0x00044fb4) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf556,	// (0x000521cc) bg_popup_call_poc_inact_pane_g

0x13f6,	// (0x0004406c) popup_call_poc_inact_window_t1_ParamLimits

0x13f6,	// (0x0004406c) popup_call_poc_inact_window_t1

0x140b,	// (0x00044081) popup_call_poc_inact_window_t2_ParamLimits

0x140b,	// (0x00044081) popup_call_poc_inact_window_t2

0x1420,	// (0x00044096) popup_call_poc_inact_window_t3_ParamLimits

0x1420,	// (0x00044096) popup_call_poc_inact_window_t3

0x0002,

0xf4b1,	// (0x00052127) popup_call_poc_inact_window_t_ParamLimits

0xf4b1,	// (0x00052127) popup_call_poc_inact_window_t

0x247f,	// (0x000450f5) context_pane_ParamLimits

0x8c05,	// (0x0004b87b) signal_pane_ParamLimits

0xe107,	// (0x00050d7d) main_call2_pane

0x8b87,	// (0x0004b7fd) popup_phob_thumbnail2_window_ParamLimits

0x8b87,	// (0x0004b7fd) popup_phob_thumbnail2_window

0x83bc,	// (0x0004b032) aid_hotspot_pointer_arrow_pane

0x83c4,	// (0x0004b03a) aid_hotspot_pointer_hand_pane

0x895c,	// (0x0004b5d2) phob_pre_status_pane_g5

0xe147,	// (0x00050dbd) cams_zoom_pane_ParamLimits

0x6c73,	// (0x000498e9) image_vga_pane_ParamLimits

0xded2,	// (0x00050b48) main_camera_pane_g1_ParamLimits

0xded2,	// (0x00050b48) main_camera_pane_g2_ParamLimits

0xded2,	// (0x00050b48) main_camera_pane_g3_ParamLimits

0xded2,	// (0x00050b48) main_camera_pane_g4_ParamLimits

0xded2,	// (0x00050b48) main_camera_pane_g5_ParamLimits

0xded2,	// (0x00050b48) main_camera_pane_g6_ParamLimits

0xded2,	// (0x00050b48) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x00051e3b) main_camera_pane_g_ParamLimits

0xe155,	// (0x00050dcb) main_camera_pane_t1_ParamLimits

0xe155,	// (0x00050dcb) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x00051e4c) main_camera_pane_t_ParamLimits

0xde4a,	// (0x00050ac0) bg_popup_preview_window_pane_cp01_ParamLimits

0xde4a,	// (0x00050ac0) bg_popup_preview_window_pane_cp01

0x1435,	// (0x000440ab) popup_phob_thumbnail2_window_g1_ParamLimits

0x1435,	// (0x000440ab) popup_phob_thumbnail2_window_g1

0xdbef,	// (0x00050865) call2_cli_visual_pane

0x86c9,	// (0x0004b33f) popup_call2_audio_conf_window_ParamLimits

0x86c9,	// (0x0004b33f) popup_call2_audio_conf_window

0x86dc,	// (0x0004b352) popup_call2_audio_first_window_ParamLimits

0x86dc,	// (0x0004b352) popup_call2_audio_first_window

0x8758,	// (0x0004b3ce) popup_call2_audio_in_window_ParamLimits

0x8758,	// (0x0004b3ce) popup_call2_audio_in_window

0x8788,	// (0x0004b3fe) popup_call2_audio_out_window_ParamLimits

0x8788,	// (0x0004b3fe) popup_call2_audio_out_window

0x87d4,	// (0x0004b44a) popup_call2_audio_second_window_ParamLimits

0x87d4,	// (0x0004b44a) popup_call2_audio_second_window

0x8820,	// (0x0004b496) popup_call2_audio_wait_window_ParamLimits

0x8820,	// (0x0004b496) popup_call2_audio_wait_window

0xdbef,	// (0x00050865) bg_popup_call2_act_pane_cp03

0x1441,	// (0x000440b7) list_conf_pane_cp

0x1449,	// (0x000440bf) popup_call2_audio_conf_window_t1

0xe85d,	// (0x000514d3) list_single_graphic_popup_conf2_pane_ParamLimits

0xe85d,	// (0x000514d3) list_single_graphic_popup_conf2_pane

0xe870,	// (0x000514e6) list_highlight_pane_cp04

0x1457,	// (0x000440cd) list_single_graphic_popup_conf2_pane_g1

0xe881,	// (0x000514f7) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4b8,	// (0x0005212e) list_single_graphic_popup_conf2_pane_g

0x145f,	// (0x000440d5) list_single_graphic_popup_conf2_pane_t1

0x146d,	// (0x000440e3) bg_popup_call2_act_pane_cp01_ParamLimits

0x146d,	// (0x000440e3) bg_popup_call2_act_pane_cp01

0x14f7,	// (0x0004416d) call_type_pane_cp05_ParamLimits

0x14f7,	// (0x0004416d) call_type_pane_cp05

0x154b,	// (0x000441c1) popup_call2_audio_second_window_g1_ParamLimits

0x154b,	// (0x000441c1) popup_call2_audio_second_window_g1

0x159f,	// (0x00044215) popup_call2_audio_second_window_g2_ParamLimits

0x159f,	// (0x00044215) popup_call2_audio_second_window_g2

0x0002,

0xf4bd,	// (0x00052133) popup_call2_audio_second_window_g_ParamLimits

0xf4bd,	// (0x00052133) popup_call2_audio_second_window_g

0x1604,	// (0x0004427a) popup_call2_audio_second_window_t1_ParamLimits

0x1604,	// (0x0004427a) popup_call2_audio_second_window_t1

0x16bf,	// (0x00044335) popup_call2_audio_second_window_t2_ParamLimits

0x16bf,	// (0x00044335) popup_call2_audio_second_window_t2

0x1712,	// (0x00044388) popup_call2_audio_second_window_t3_ParamLimits

0x1712,	// (0x00044388) popup_call2_audio_second_window_t3

0x0003,

0xf4c4,	// (0x0005213a) popup_call2_audio_second_window_t_ParamLimits

0xf4c4,	// (0x0005213a) popup_call2_audio_second_window_t

0xdbef,	// (0x00050865) bg_popup_call2_in_pane_cp02

0x1805,	// (0x0004447b) call_type_pane_cp04

0x180d,	// (0x00044483) popup_call2_audio_wait_window_g1

0x1815,	// (0x0004448b) popup_call2_audio_wait_window_g2

0x0001,

0xf4cd,	// (0x00052143) popup_call2_audio_wait_window_g

0x181d,	// (0x00044493) popup_call2_audio_wait_window_t3

0x182b,	// (0x000444a1) bg_popup_call2_act_pane_ParamLimits

0x182b,	// (0x000444a1) bg_popup_call2_act_pane

0x18eb,	// (0x00044561) call_type_pane_cp03_ParamLimits

0x18eb,	// (0x00044561) call_type_pane_cp03

0x194f,	// (0x000445c5) popup_call2_audio_first_window_g1_ParamLimits

0x194f,	// (0x000445c5) popup_call2_audio_first_window_g1

0x19bf,	// (0x00044635) popup_call2_audio_first_window_g2_ParamLimits

0x19bf,	// (0x00044635) popup_call2_audio_first_window_g2

0x1a23,	// (0x00044699) popup_call2_audio_first_window_g3_ParamLimits

0x1a23,	// (0x00044699) popup_call2_audio_first_window_g3

0x0004,

0xf4d2,	// (0x00052148) popup_call2_audio_first_window_g_ParamLimits

0xf4d2,	// (0x00052148) popup_call2_audio_first_window_g

0x1aab,	// (0x00044721) popup_call2_audio_first_window_t1_ParamLimits

0x1aab,	// (0x00044721) popup_call2_audio_first_window_t1

0x1bae,	// (0x00044824) popup_call2_audio_first_window_t4_ParamLimits

0x1bae,	// (0x00044824) popup_call2_audio_first_window_t4

0x1c91,	// (0x00044907) popup_call2_audio_first_window_t5_ParamLimits

0x1c91,	// (0x00044907) popup_call2_audio_first_window_t5

0x0003,

0xf4dd,	// (0x00052153) popup_call2_audio_first_window_t_ParamLimits

0xf4dd,	// (0x00052153) popup_call2_audio_first_window_t

0xde42,	// (0x00050ab8) bg_popup_call2_act_pane_g1

0x2356,	// (0x00044fcc) popup_cale_lunar_info_window_t1

0x2364,	// (0x00044fda) popup_cale_lunar_info_window_t2

0x2372,	// (0x00044fe8) popup_cale_lunar_info_window_t3

0xdbef,	// (0x00050865) bg_popup_call2_bubble_pane

0x1d92,	// (0x00044a08) bg_popup_call2_in_pane_cp01_ParamLimits

0x1d92,	// (0x00044a08) bg_popup_call2_in_pane_cp01

0x1805,	// (0x0004447b) call_type_pane_cp02

0x1dda,	// (0x00044a50) popup_call2_audio_out_window_g1_ParamLimits

0x1dda,	// (0x00044a50) popup_call2_audio_out_window_g1

0x1e06,	// (0x00044a7c) popup_call2_audio_out_window_g2_ParamLimits

0x1e06,	// (0x00044a7c) popup_call2_audio_out_window_g2

0x1e2e,	// (0x00044aa4) popup_call2_audio_out_window_g3_ParamLimits

0x1e2e,	// (0x00044aa4) popup_call2_audio_out_window_g3

0x0003,

0xf4e6,	// (0x0005215c) popup_call2_audio_out_window_g_ParamLimits

0xf4e6,	// (0x0005215c) popup_call2_audio_out_window_g

0x1e69,	// (0x00044adf) popup_call2_audio_out_window_t1_ParamLimits

0x1e69,	// (0x00044adf) popup_call2_audio_out_window_t1

0x1ec8,	// (0x00044b3e) popup_call2_audio_out_window_t2_ParamLimits

0x1ec8,	// (0x00044b3e) popup_call2_audio_out_window_t2

0x1f1c,	// (0x00044b92) popup_call2_audio_out_window_t3_ParamLimits

0x1f1c,	// (0x00044b92) popup_call2_audio_out_window_t3

0x1f32,	// (0x00044ba8) popup_call2_audio_out_window_t4_ParamLimits

0x1f32,	// (0x00044ba8) popup_call2_audio_out_window_t4

0x1f48,	// (0x00044bbe) popup_call2_audio_out_window_t5_ParamLimits

0x1f48,	// (0x00044bbe) popup_call2_audio_out_window_t5

0x0005,

0xf4ef,	// (0x00052165) popup_call2_audio_out_window_t_ParamLimits

0xf4ef,	// (0x00052165) popup_call2_audio_out_window_t

0x1fac,	// (0x00044c22) bg_popup_call2_in_pane_ParamLimits

0x1fac,	// (0x00044c22) bg_popup_call2_in_pane

0x2008,	// (0x00044c7e) popup_call2_audio_in_window_g1_ParamLimits

0x2008,	// (0x00044c7e) popup_call2_audio_in_window_g1

0x2040,	// (0x00044cb6) popup_call2_audio_in_window_g2_ParamLimits

0x2040,	// (0x00044cb6) popup_call2_audio_in_window_g2

0x2078,	// (0x00044cee) popup_call2_audio_in_window_g3_ParamLimits

0x2078,	// (0x00044cee) popup_call2_audio_in_window_g3

0x0003,

0xf4fc,	// (0x00052172) popup_call2_audio_in_window_g_ParamLimits

0xf4fc,	// (0x00052172) popup_call2_audio_in_window_g

0x20d0,	// (0x00044d46) popup_call2_audio_in_window_t1_ParamLimits

0x20d0,	// (0x00044d46) popup_call2_audio_in_window_t1

0x2150,	// (0x00044dc6) popup_call2_audio_in_window_t2_ParamLimits

0x2150,	// (0x00044dc6) popup_call2_audio_in_window_t2

0x21d0,	// (0x00044e46) popup_call2_audio_in_window_t3_ParamLimits

0x21d0,	// (0x00044e46) popup_call2_audio_in_window_t3

0x21ea,	// (0x00044e60) popup_call2_audio_in_window_t4_ParamLimits

0x21ea,	// (0x00044e60) popup_call2_audio_in_window_t4

0x21fc,	// (0x00044e72) popup_call2_audio_in_window_t5_ParamLimits

0x21fc,	// (0x00044e72) popup_call2_audio_in_window_t5

0x2211,	// (0x00044e87) popup_call2_audio_in_window_t6_ParamLimits

0x2211,	// (0x00044e87) popup_call2_audio_in_window_t6

0x0005,

0xf505,	// (0x0005217b) popup_call2_audio_in_window_t_ParamLimits

0xf505,	// (0x0005217b) popup_call2_audio_in_window_t

0xde42,	// (0x00050ab8) bg_popup_call2_in_pane_g1

0x2380,	// (0x00044ff6) popup_cale_lunar_info_window_t4

0x0003,

0xf580,	// (0x000521f6) popup_cale_lunar_info_window_t

0xde4a,	// (0x00050ac0) bg_popup_call2_rect_pane_ParamLimits

0xde4a,	// (0x00050ac0) bg_popup_call2_rect_pane

0xdbef,	// (0x00050865) call2_cli_visual_graphic_pane

0xdbef,	// (0x00050865) call2_cli_visual_text_pane

0x8c5a,	// (0x0004b8d0) smil_status_volume_pane_g3

0x0002,

0xde62,	// (0x00050ad8) call2_cli_visual_graphic_pane_g1

0xde62,	// (0x00050ad8) call2_cli_visual_graphic_pane_g2

0xde62,	// (0x00050ad8) call2_cli_visual_graphic_pane_g3

0x0002,

0xf512,	// (0x00052188) call2_cli_visual_graphic_pane_g

0x2226,	// (0x00044e9c) bg_popup_call2_rect_pane_g1

0xe023,	// (0x00050c99) bg_popup_call2_rect_pane_g2

0x222e,	// (0x00044ea4) bg_popup_call2_rect_pane_g3

0x2236,	// (0x00044eac) bg_popup_call2_rect_pane_g4

0x223e,	// (0x00044eb4) bg_popup_call2_rect_pane_g5

0x2246,	// (0x00044ebc) bg_popup_call2_rect_pane_g6

0x224e,	// (0x00044ec4) bg_popup_call2_rect_pane_g7

0x2256,	// (0x00044ecc) bg_popup_call2_rect_pane_g8

0x225e,	// (0x00044ed4) bg_popup_call2_rect_pane_g9

0x0008,

0xf519,	// (0x0005218f) bg_popup_call2_rect_pane_g

0x2266,	// (0x00044edc) bg_popup_call2_bubble_pane_g1

0x226e,	// (0x00044ee4) bg_popup_call2_bubble_pane_g2

0x2276,	// (0x00044eec) bg_popup_call2_bubble_pane_g3

0x227e,	// (0x00044ef4) bg_popup_call2_bubble_pane_g4

0x2286,	// (0x00044efc) bg_popup_call2_bubble_pane_g5

0x228e,	// (0x00044f04) bg_popup_call2_bubble_pane_g6

0x2296,	// (0x00044f0c) bg_popup_call2_bubble_pane_g7

0x229e,	// (0x00044f14) bg_popup_call2_bubble_pane_g8

0x22a6,	// (0x00044f1c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf52c,	// (0x000521a2) bg_popup_call2_bubble_pane_g

0x6683,	// (0x000492f9) aid_cale_week_size_cell_pane

0x6c80,	// (0x000498f6) aid_cams_cif_uncrop_pane_ParamLimits

0x6c80,	// (0x000498f6) aid_cams_cif_uncrop_pane

0x6dcb,	// (0x00049a41) aid_cams_size_cell_ParamLimits

0x6dcb,	// (0x00049a41) aid_cams_size_cell

0x6dd7,	// (0x00049a4d) grid_cams_pane_ParamLimits

0x6de3,	// (0x00049a59) linegrid_cams_pane_ParamLimits

0x6ea2,	// (0x00049b18) call_video_pane_t1

0x6ebf,	// (0x00049b35) call_video_pane_t2

0x0001,

0xf222,	// (0x00051e98) call_video_pane_t

0x72a1,	// (0x00049f17) aid_cale_month_size_cell_pane_ParamLimits

0x72a1,	// (0x00049f17) aid_cale_month_size_cell_pane

0xf5c4,	// (0x0005223a) smil_status_volume_pane_g

0x8c67,	// (0x0004b8dd) volume_smil_pane_ParamLimits

0x5fef,	// (0x00048c65) aid_popup2_width_pane

0x658f,	// (0x00049205) cell_qdial_pane_g4_ParamLimits

0x658f,	// (0x00049205) cell_qdial_pane_g4

0x8024,	// (0x0004ac9a) aid_blid_cardinal_pane_ParamLimits

0x8030,	// (0x0004aca6) aid_blid_destination_pane_ParamLimits

0x8030,	// (0x0004aca6) aid_blid_destination_pane

0xde4a,	// (0x00050ac0) bg_popup_call_poc_act_pane_ParamLimits

0xde4a,	// (0x00050ac0) bg_popup_call_poc_act_pane

0xde4a,	// (0x00050ac0) bg_popup_call_poc_inact_pane_ParamLimits

0xde4a,	// (0x00050ac0) bg_popup_call_poc_inact_pane

0x22ae,	// (0x00044f24) bg_popup_call_poc_act_pane_g1

0x22b6,	// (0x00044f2c) bg_popup_call_poc_act_pane_g2

0x22be,	// (0x00044f34) bg_popup_call_poc_act_pane_g3

0x22c6,	// (0x00044f3c) bg_popup_call_poc_act_pane_g4

0x22ce,	// (0x00044f44) bg_popup_call_poc_act_pane_g5

0x22d6,	// (0x00044f4c) bg_popup_call_poc_act_pane_g6

0x22de,	// (0x00044f54) bg_popup_call_poc_act_pane_g7

0x22e6,	// (0x00044f5c) bg_popup_call_poc_act_pane_g8

0xdbef,	// (0x00050865) main_usb_pane

0x8ae6,	// (0x0004b75c) popup_cale_lunar_info_window

0x7144,	// (0x00049dba) im_reading_pane_t1_ParamLimits

0xe23a,	// (0x00050eb0) list_im_pane_ParamLimits

0xe24b,	// (0x00050ec1) scroll_pane_cp07_ParamLimits

0xdbef,	// (0x00050865) grid_highlight_pane_cp012

0xde4a,	// (0x00050ac0) mup_scale_pane_ParamLimits

0x1a23,	// (0x00044699) main_usb_pane_g1_ParamLimits

0x1a23,	// (0x00044699) main_usb_pane_g1

0x8881,	// (0x0004b4f7) main_usb_pane_g2_ParamLimits

0x8881,	// (0x0004b4f7) main_usb_pane_g2

0x0001,

0xf569,	// (0x000521df) main_usb_pane_g_ParamLimits

0xf569,	// (0x000521df) main_usb_pane_g

0x888d,	// (0x0004b503) main_usb_pane_t1_ParamLimits

0x888d,	// (0x0004b503) main_usb_pane_t1

0x889f,	// (0x0004b515) main_usb_pane_t2_ParamLimits

0x889f,	// (0x0004b515) main_usb_pane_t2

0x88b1,	// (0x0004b527) main_usb_pane_t3_ParamLimits

0x88b1,	// (0x0004b527) main_usb_pane_t3

0x88c3,	// (0x0004b539) main_usb_pane_t4_ParamLimits

0x88c3,	// (0x0004b539) main_usb_pane_t4

0x88d5,	// (0x0004b54b) main_usb_pane_t5_ParamLimits

0x88d5,	// (0x0004b54b) main_usb_pane_t5

0x88e7,	// (0x0004b55d) main_usb_pane_t6_ParamLimits

0x88e7,	// (0x0004b55d) main_usb_pane_t6

0x0005,

0xf56e,	// (0x000521e4) main_usb_pane_t_ParamLimits

0xe9aa,	// (0x00051620) aid_text_placing

0x7fd0,	// (0x0004ac46) main_location2_pane_t1_ParamLimits

0x7fe6,	// (0x0004ac5c) main_location2_pane_t2_ParamLimits

0x7ffc,	// (0x0004ac72) main_location2_pane_t3_ParamLimits

0x8012,	// (0x0004ac88) main_location2_pane_t4_ParamLimits

0x8012,	// (0x0004ac88) main_location2_pane_t4

0xf375,	// (0x00051feb) main_location2_pane_t_ParamLimits

0xde85,	// (0x00050afb) find_pinb_pane_g2_ParamLimits

0xde85,	// (0x00050afb) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x00051d50) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x00051d50) find_pinb_pane_g

0xde91,	// (0x00050b07) find_pinb_pane_t1_ParamLimits

0xdea3,	// (0x00050b19) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x00051d55) find_pinb_pane_t_ParamLimits

0xdbef,	// (0x00050865) main_call3_pane

0x7645,	// (0x0004a2bb) cale_month_day_heading_pane_t1_ParamLimits

0x76cb,	// (0x0004a341) cale_month_day_heading_pane_t2_ParamLimits

0x775c,	// (0x0004a3d2) cale_month_day_heading_pane_t3_ParamLimits

0x77ed,	// (0x0004a463) cale_month_day_heading_pane_t4_ParamLimits

0x787e,	// (0x0004a4f4) cale_month_day_heading_pane_t5_ParamLimits

0x790f,	// (0x0004a585) cale_month_day_heading_pane_t6_ParamLimits

0x79a0,	// (0x0004a616) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x00051ed0) cale_month_day_heading_pane_t_ParamLimits

0x7cc0,	// (0x0004a936) smil_status_volume_pane

0x84e2,	// (0x0004b158) postcard_address_pane_ParamLimits

0x84e2,	// (0x0004b158) postcard_address_pane

0x84ee,	// (0x0004b164) postcard_message_pane_ParamLimits

0x84ee,	// (0x0004b164) postcard_message_pane

0x885d,	// (0x0004b4d3) call2_cli_visual_pane_t1_ParamLimits

0x885d,	// (0x0004b4d3) call2_cli_visual_pane_t1

0x8db8,	// (0x0004ba2e) postcard_message_pane_t1_ParamLimits

0x8db8,	// (0x0004ba2e) postcard_message_pane_t1

0x8da1,	// (0x0004ba17) postcard_address_pane_t1_ParamLimits

0x8da1,	// (0x0004ba17) postcard_address_pane_t1

0x8d94,	// (0x0004ba0a) popup_call3_audio_in_window_ParamLimits

0x8d94,	// (0x0004ba0a) popup_call3_audio_in_window

0x8c7c,	// (0x0004b8f2) bg_popup_call3_in_pane_ParamLimits

0x8c7c,	// (0x0004b8f2) bg_popup_call3_in_pane

0x8cda,	// (0x0004b950) popup_call3_audio_in_window_g1_ParamLimits

0x8cda,	// (0x0004b950) popup_call3_audio_in_window_g1

0x8cf2,	// (0x0004b968) popup_call3_audio_in_window_g2_ParamLimits

0x8cf2,	// (0x0004b968) popup_call3_audio_in_window_g2

0x8d0a,	// (0x0004b980) popup_call3_audio_in_window_g3_ParamLimits

0x8d0a,	// (0x0004b980) popup_call3_audio_in_window_g3

0x0003,

0xf5cb,	// (0x00052241) popup_call3_audio_in_window_g_ParamLimits

0xf5cb,	// (0x00052241) popup_call3_audio_in_window_g

0x8d32,	// (0x0004b9a8) popup_call3_audio_in_window_t1_ParamLimits

0x8d32,	// (0x0004b9a8) popup_call3_audio_in_window_t1

0x8d5a,	// (0x0004b9d0) popup_call3_audio_in_window_t2_ParamLimits

0x8d5a,	// (0x0004b9d0) popup_call3_audio_in_window_t2

0x8d82,	// (0x0004b9f8) popup_call3_audio_in_window_t3_ParamLimits

0x8d82,	// (0x0004b9f8) popup_call3_audio_in_window_t3

0x0002,

0xf5d4,	// (0x0005224a) popup_call3_audio_in_window_t_ParamLimits

0xf5d4,	// (0x0005224a) popup_call3_audio_in_window_t

0xe107,	// (0x00050d7d) bg_popup_call3_rect_pane

0x2226,	// (0x00044e9c) bg_popup_call3_rect_pane_g1

0xe023,	// (0x00050c99) bg_popup_call3_rect_pane_g2

0x222e,	// (0x00044ea4) bg_popup_call3_rect_pane_g3

0x2236,	// (0x00044eac) bg_popup_call3_rect_pane_g4

0x223e,	// (0x00044eb4) bg_popup_call3_rect_pane_g5

0x2246,	// (0x00044ebc) bg_popup_call3_rect_pane_g6

0x224e,	// (0x00044ec4) bg_popup_call3_rect_pane_g7

0xd7d4,	// (0x0005044a) mup_visualizer_osc_pane

0xd7d4,	// (0x0005044a) mup_visualizer_spec_pane

0x8c9c,	// (0x0004b912) call3_video_qcif_pane_ParamLimits

0x8c9c,	// (0x0004b912) call3_video_qcif_pane

0x8cac,	// (0x0004b922) call3_video_qcif_uncrop_pane_ParamLimits

0x8cac,	// (0x0004b922) call3_video_qcif_uncrop_pane

0x8cb8,	// (0x0004b92e) call3_video_subqcif_pane_ParamLimits

0x8cb8,	// (0x0004b92e) call3_video_subqcif_pane

0x8cca,	// (0x0004b940) call3_video_subqcif_uncrop_pane_ParamLimits

0x8cca,	// (0x0004b940) call3_video_subqcif_uncrop_pane

0x8d22,	// (0x0004b998) popup_call3_audio_in_window_g4_ParamLimits

0x8d22,	// (0x0004b998) popup_call3_audio_in_window_g4

0xd7d4,	// (0x0005044a) mup_spec_half_pane

0xd7d4,	// (0x0005044a) mup_spec_half_pane_cp

0xd7d4,	// (0x0005044a) mup_osc_middle_pane

0xe183,	// (0x00050df9) mup_visualizer_osc_pane_g1

0x24cc,	// (0x00045142) mup_spec_bar_pane_ParamLimits

0x24cc,	// (0x00045142) mup_spec_bar_pane

0xe183,	// (0x00050df9) mup_spec_bar_pane_g1

0xe183,	// (0x00050df9) mup_spec_bar_pane_g2

0x0001,

0xf3ef,	// (0x00052065) mup_spec_bar_pane_g

0x6683,	// (0x000492f9) aid_cale_week_size_cell_pane_ParamLimits

0x6698,	// (0x0004930e) bg_cale_heading_pane_ParamLimits

0xe061,	// (0x00050cd7) bg_cale_pane_cp01_ParamLimits

0x66b0,	// (0x00049326) cale_week_corner_pane_ParamLimits

0x66ca,	// (0x00049340) cale_week_day_heading_pane_ParamLimits

0x66e2,	// (0x00049358) cale_week_scroll_pane_g1_ParamLimits

0x66f5,	// (0x0004936b) cale_week_scroll_pane_g2_ParamLimits

0x6708,	// (0x0004937e) cale_week_scroll_pane_g3_ParamLimits

0x671b,	// (0x00049391) cale_week_scroll_pane_g4_ParamLimits

0x672e,	// (0x000493a4) cale_week_scroll_pane_g5_ParamLimits

0x6741,	// (0x000493b7) cale_week_scroll_pane_g6_ParamLimits

0x6754,	// (0x000493ca) cale_week_scroll_pane_g7_ParamLimits

0x6767,	// (0x000493dd) cale_week_scroll_pane_g8_ParamLimits

0x677a,	// (0x000493f0) cale_week_scroll_pane_g9_ParamLimits

0x678d,	// (0x00049403) cale_week_scroll_pane_g10_ParamLimits

0x67a0,	// (0x00049416) cale_week_scroll_pane_g11_ParamLimits

0x67b3,	// (0x00049429) cale_week_scroll_pane_g12_ParamLimits

0x67c6,	// (0x0004943c) cale_week_scroll_pane_g13_ParamLimits

0x67d9,	// (0x0004944f) cale_week_scroll_pane_g14_ParamLimits

0x67ec,	// (0x00049462) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x00051de1) cale_week_scroll_pane_g_ParamLimits

0x6812,	// (0x00049488) cale_week_time_pane_ParamLimits

0x6825,	// (0x0004949b) grid_cale_week_pane_ParamLimits

0xe07e,	// (0x00050cf4) listscroll_cale_week_pane_t1

0xe090,	// (0x00050d06) scroll_pane_cp08_ParamLimits

0x72f6,	// (0x00049f6c) cale_month_corner_pane_ParamLimits

0xe47b,	// (0x000510f1) cale_month_pane_t1

0x760c,	// (0x0004a282) cale_month_week_pane_ParamLimits

0x1a23,	// (0x00044699) popup_call_status_window_g1_ParamLimits

0x7e07,	// (0x0004aa7d) popup_call_status_window_g2_ParamLimits

0x7e13,	// (0x0004aa89) popup_call_status_window_g3_ParamLimits

0xf2fc,	// (0x00051f72) popup_call_status_window_g_ParamLimits

0xe7f0,	// (0x00051466) aid_call2_pane

0x8358,	// (0x0004afce) msg_header_pane_g1

0x84e2,	// (0x0004b158) postcard_address2_pane_ParamLimits

0x84e2,	// (0x0004b158) postcard_address2_pane

0x84ee,	// (0x0004b164) postcard_message2_pane_ParamLimits

0x84ee,	// (0x0004b164) postcard_message2_pane

0x8c11,	// (0x0004b887) message2_row_pane_ParamLimits

0x8c11,	// (0x0004b887) message2_row_pane

0x8c29,	// (0x0004b89f) address2_row_pane_ParamLimits

0x8c29,	// (0x0004b89f) address2_row_pane

0x249a,	// (0x00045110) postcard_message2_row_pane_g1

0x24a2,	// (0x00045118) postcard_message2_row_pane_t1

0x249a,	// (0x00045110) address2_row_pane_g1

0x24a2,	// (0x00045118) address2_row_pane_t1

0xe0ff,	// (0x00050d75) aid_size_cell_vorec

0xdbef,	// (0x00050865) main_rss_pane

0x8c3c,	// (0x0004b8b2) rss_list_single_pane_ParamLimits

0x8c3c,	// (0x0004b8b2) rss_list_single_pane

0x24b0,	// (0x00045126) rss_list_single_pane_t1

0x24be,	// (0x00045134) rss_list_single_pane_t2

0x0001,

0xf5bf,	// (0x00052235) rss_list_single_pane_t

0xdbef,	// (0x00050865) main_camera2_pane

0xdbef,	// (0x00050865) main_video2_pane

0x622b,	// (0x00048ea1) cams_zoom_pane_cp2_ParamLimits

0x622b,	// (0x00048ea1) cams_zoom_pane_cp2

0x622b,	// (0x00048ea1) image2_vga_pane_ParamLimits

0x622b,	// (0x00048ea1) image2_vga_pane

0x8e09,	// (0x0004ba7f) main_camera2_pane_g1_ParamLimits

0x8e09,	// (0x0004ba7f) main_camera2_pane_g1

0x8e09,	// (0x0004ba7f) main_camera2_pane_g2_ParamLimits

0x8e09,	// (0x0004ba7f) main_camera2_pane_g2

0x8e09,	// (0x0004ba7f) main_camera2_pane_g3_ParamLimits

0x8e09,	// (0x0004ba7f) main_camera2_pane_g3

0x8e09,	// (0x0004ba7f) main_camera2_pane_g4_ParamLimits

0x8e09,	// (0x0004ba7f) main_camera2_pane_g4

0x8e09,	// (0x0004ba7f) main_camera2_pane_g5_ParamLimits

0x8e09,	// (0x0004ba7f) main_camera2_pane_g5

0x8e09,	// (0x0004ba7f) main_camera2_pane_g6_ParamLimits

0x8e09,	// (0x0004ba7f) main_camera2_pane_g6

0x8e09,	// (0x0004ba7f) main_camera2_pane_g7_ParamLimits

0x8e09,	// (0x0004ba7f) main_camera2_pane_g7

0x8e09,	// (0x0004ba7f) main_camera2_pane_g8_ParamLimits

0x8e09,	// (0x0004ba7f) main_camera2_pane_g8

0x0008,

0xf5db,	// (0x00052251) main_camera2_pane_g_ParamLimits

0xf5db,	// (0x00052251) main_camera2_pane_g

0x8e17,	// (0x0004ba8d) main_camera2_pane_t1_ParamLimits

0x8e17,	// (0x0004ba8d) main_camera2_pane_t1

0x8e17,	// (0x0004ba8d) main_camera2_pane_t2_ParamLimits

0x8e17,	// (0x0004ba8d) main_camera2_pane_t2

0x8e17,	// (0x0004ba8d) main_camera2_pane_t3_ParamLimits

0x8e17,	// (0x0004ba8d) main_camera2_pane_t3

0x8e17,	// (0x0004ba8d) main_camera2_pane_t4_ParamLimits

0x8e17,	// (0x0004ba8d) main_camera2_pane_t4

0x0006,

0xf5ee,	// (0x00052264) main_camera2_pane_t_ParamLimits

0xf5ee,	// (0x00052264) main_camera2_pane_t

0x8e3f,	// (0x0004bab5) cams_zoom_pane_cp4_ParamLimits

0x8e3f,	// (0x0004bab5) cams_zoom_pane_cp4

0x8a95,	// (0x0004b70b) image2_cif_pane_ParamLimits

0x8a95,	// (0x0004b70b) image2_cif_pane

0x622b,	// (0x00048ea1) image2_subqcif_pane_ParamLimits

0x622b,	// (0x00048ea1) image2_subqcif_pane

0x8e4d,	// (0x0004bac3) main_video2_pane_g1_ParamLimits

0x8e4d,	// (0x0004bac3) main_video2_pane_g1

0x8e4d,	// (0x0004bac3) main_video2_pane_g2_ParamLimits

0x8e4d,	// (0x0004bac3) main_video2_pane_g2

0x8e4d,	// (0x0004bac3) main_video2_pane_g3_ParamLimits

0x8e4d,	// (0x0004bac3) main_video2_pane_g3

0x8e4d,	// (0x0004bac3) main_video2_pane_g4_ParamLimits

0x8e4d,	// (0x0004bac3) main_video2_pane_g4

0x8e4d,	// (0x0004bac3) main_video2_pane_g5_ParamLimits

0x8e4d,	// (0x0004bac3) main_video2_pane_g5

0x8e4d,	// (0x0004bac3) main_video2_pane_g6_ParamLimits

0x8e4d,	// (0x0004bac3) main_video2_pane_g6

0x0005,

0xf5fd,	// (0x00052273) main_video2_pane_g_ParamLimits

0xf5fd,	// (0x00052273) main_video2_pane_g

0x8e5b,	// (0x0004bad1) main_video2_pane_t1_ParamLimits

0x8e5b,	// (0x0004bad1) main_video2_pane_t1

0x8e5b,	// (0x0004bad1) main_video2_pane_t2_ParamLimits

0x8e5b,	// (0x0004bad1) main_video2_pane_t2

0x8e5b,	// (0x0004bad1) main_video2_pane_t3_ParamLimits

0x8e5b,	// (0x0004bad1) main_video2_pane_t3

0x0002,

0xf60a,	// (0x00052280) main_video2_pane_t_ParamLimits

0xf60a,	// (0x00052280) main_video2_pane_t

0x8996,	// (0x0004b60c) call_muted_g2

0x0001,

0xf5b1,	// (0x00052227) call_muted_g

0xdbef,	// (0x00050865) main_mup2_pane

0xdee0,	// (0x00050b56) main_mup2_pane_g1_ParamLimits

0xdee0,	// (0x00050b56) main_mup2_pane_g1

0xdee0,	// (0x00050b56) main_mup2_pane_g2_ParamLimits

0xdee0,	// (0x00050b56) main_mup2_pane_g2

0x3801,	// (0x00046477) main_mup_pane_g13_cp1

0x6241,	// (0x00048eb7) mup_volume_pane_cp1

0xdee0,	// (0x00050b56) main_mup2_pane_g4_ParamLimits

0xdee0,	// (0x00050b56) main_mup2_pane_g4

0xdee0,	// (0x00050b56) main_mup2_pane_g5_ParamLimits

0xdee0,	// (0x00050b56) main_mup2_pane_g5

0xdee0,	// (0x00050b56) main_mup2_pane_g6_ParamLimits

0xdee0,	// (0x00050b56) main_mup2_pane_g6

0xdee0,	// (0x00050b56) main_mup2_pane_g7_ParamLimits

0xdee0,	// (0x00050b56) main_mup2_pane_g7

0x0006,

0xf611,	// (0x00052287) main_mup2_pane_g_ParamLimits

0xf611,	// (0x00052287) main_mup2_pane_g

0xdeee,	// (0x00050b64) main_mup2_pane_t1_ParamLimits

0xdeee,	// (0x00050b64) main_mup2_pane_t1

0xdeee,	// (0x00050b64) main_mup2_pane_t2_ParamLimits

0xdeee,	// (0x00050b64) main_mup2_pane_t2

0xdeee,	// (0x00050b64) main_mup2_pane_t3_ParamLimits

0xdeee,	// (0x00050b64) main_mup2_pane_t3

0xdeee,	// (0x00050b64) main_mup2_pane_t4_ParamLimits

0xdeee,	// (0x00050b64) main_mup2_pane_t4

0xdeee,	// (0x00050b64) main_mup2_pane_t5_ParamLimits

0xdeee,	// (0x00050b64) main_mup2_pane_t5

0xdeee,	// (0x00050b64) main_mup2_pane_t6_ParamLimits

0xdeee,	// (0x00050b64) main_mup2_pane_t6

0x0005,

0xf620,	// (0x00052296) main_mup2_pane_t_ParamLimits

0xf620,	// (0x00052296) main_mup2_pane_t

0x2512,	// (0x00045188) mup2_visualizer_pane_ParamLimits

0x2512,	// (0x00045188) mup2_visualizer_pane

0x2512,	// (0x00045188) mup_progress_pane_cp_ParamLimits

0x2512,	// (0x00045188) mup_progress_pane_cp

0x8f42,	// (0x0004bbb8) mup_volume_pane_cp_ParamLimits

0x8f42,	// (0x0004bbb8) mup_volume_pane_cp

0xdec4,	// (0x00050b3a) mup2_visualizer_pane_g1_ParamLimits

0xdec4,	// (0x00050b3a) mup2_visualizer_pane_g1

0xded2,	// (0x00050b48) mup2_visualizer_pane_g2_ParamLimits

0xded2,	// (0x00050b48) mup2_visualizer_pane_g2

0xded2,	// (0x00050b48) mup2_visualizer_pane_g3_ParamLimits

0xded2,	// (0x00050b48) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x00051d5a) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x00051d5a) mup2_visualizer_pane_g

0xe0ff,	// (0x00050d75) aid_size_cell_fmradio

0x8a8b,	// (0x0004b701) aid_height_parent_landcape

0xe2d8,	// (0x00050f4e) wml_content_pane_cp

0xe2e0,	// (0x00050f56) wml_tabs_pane

0xe2e9,	// (0x00050f5f) popup_wml_miniature_window

0xe2f1,	// (0x00050f67) scroll_pane_cp021

0xe305,	// (0x00050f7b) wml_content_pane_comp8

0xdbef,	// (0x00050865) bg_popup_sub_pane_cp05

0x2536,	// (0x000451ac) popup_wml_miniature_window_g1

0x253e,	// (0x000451b4) wml_miniature_view_pane

0x8e6f,	// (0x0004bae5) aid_size_wml_view

0x8e77,	// (0x0004baed) wml_miniature_view_pane_g1

0x8e80,	// (0x0004baf6) wml_miniature_view_pane_g2

0x8e89,	// (0x0004baff) wml_miniature_view_pane_g3

0x8e91,	// (0x0004bb07) wml_miniature_view_pane_g4

0x8e99,	// (0x0004bb0f) wml_miniature_view_pane_g5

0x8ea1,	// (0x0004bb17) wml_miniature_view_pane_g6

0x8ea9,	// (0x0004bb1f) wml_miniature_view_pane_g7

0x8eb1,	// (0x0004bb27) wml_miniature_view_pane_g8

0x0007,

0xf62d,	// (0x000522a3) wml_miniature_view_pane_g

0x2546,	// (0x000451bc) background_graphic_ParamLimits

0x2546,	// (0x000451bc) background_graphic

0x2552,	// (0x000451c8) wml_tabs_2_pane

0x255b,	// (0x000451d1) wml_tabs_3_pane_ParamLimits

0x255b,	// (0x000451d1) wml_tabs_3_pane

0x256d,	// (0x000451e3) wml_tabs_4_pane_ParamLimits

0x256d,	// (0x000451e3) wml_tabs_4_pane

0x2583,	// (0x000451f9) wml_tabs_5_pane_ParamLimits

0x2583,	// (0x000451f9) wml_tabs_5_pane

0x259d,	// (0x00045213) wml_tabs_pane_g2_ParamLimits

0x259d,	// (0x00045213) wml_tabs_pane_g2

0x25b1,	// (0x00045227) wml_tabs_pane_g3_ParamLimits

0x25b1,	// (0x00045227) wml_tabs_pane_g3

0x8eb9,	// (0x0004bb2f) wml_tabs_2_active_pane_ParamLimits

0x8eb9,	// (0x0004bb2f) wml_tabs_2_active_pane

0x8ec9,	// (0x0004bb3f) wml_tabs_2_passive_pane_ParamLimits

0x8ec9,	// (0x0004bb3f) wml_tabs_2_passive_pane

0x8ed9,	// (0x0004bb4f) wml_tabs_3_active_pane_cp_ParamLimits

0x8ed9,	// (0x0004bb4f) wml_tabs_3_active_pane_cp

0x8eea,	// (0x0004bb60) wml_tabs_3_passive_pane_ParamLimits

0x8eea,	// (0x0004bb60) wml_tabs_3_passive_pane

0x8efb,	// (0x0004bb71) wml_tabs_3_passive_pane_cp_ParamLimits

0x8efb,	// (0x0004bb71) wml_tabs_3_passive_pane_cp

0x8f0c,	// (0x0004bb82) tabs_4_active_pane

0x8f14,	// (0x0004bb8a) tabs_4_passive_pane

0x8f1c,	// (0x0004bb92) tabs_4_passive_pane_cp

0x8f24,	// (0x0004bb9a) tabs_4_passive_pane_cp2

0x8879,	// (0x0004b4ef) aid_height_text

0x2512,	// (0x00045188) mup_volume_cont_pane_ParamLimits

0x2512,	// (0x00045188) mup_volume_cont_pane

0x62f1,	// (0x00048f67) aid_size_cell_pinb

0xd7d4,	// (0x0005044a) aid_size_list_pinb

0x2512,	// (0x00045188) mup2_volume_cont_pane_ParamLimits

0x2512,	// (0x00045188) mup2_volume_cont_pane

0x8f2c,	// (0x0004bba2) mup2_volume_cont_pane_g1_ParamLimits

0x8f2c,	// (0x0004bba2) mup2_volume_cont_pane_g1

0x5ff7,	// (0x00048c6d) aid_size_cell_touch_ParamLimits

0x5ff7,	// (0x00048c6d) aid_size_cell_touch

0x624b,	// (0x00048ec1) touch_pane_ParamLimits

0x624b,	// (0x00048ec1) touch_pane

0x6241,	// (0x00048eb7) main_rss2_pane

0x25ce,	// (0x00045244) listscroll_rss2_pane

0x25d7,	// (0x0004524d) rss2_navigation_pane

0x25df,	// (0x00045255) list_rss2_pane

0xe927,	// (0x0005159d) scroll_pane_cp22

0x25e7,	// (0x0004525d) rss2_navigation_pane_g1

0x25f0,	// (0x00045266) rss2_navigation_pane_g2

0x25f8,	// (0x0004526e) rss2_navigation_pane_g3

0x0002,

0xf63e,	// (0x000522b4) rss2_navigation_pane_g

0x2600,	// (0x00045276) rss2_navigation_pane_t1

0x8f58,	// (0x0004bbce) rss2_list_single_pane_ParamLimits

0x8f58,	// (0x0004bbce) rss2_list_single_pane

0x260e,	// (0x00045284) rss2_list_single_pane_t2

0x261c,	// (0x00045292) rss2_list_single_pane_t3_ParamLimits

0x261c,	// (0x00045292) rss2_list_single_pane_t3

0x2639,	// (0x000452af) rss2_list_single_pane_t4

0x7caa,	// (0x0004a920) smil_status_pane_g1

0x8a95,	// (0x0004b70b) main_image2_pane_ParamLimits

0x8a95,	// (0x0004b70b) main_image2_pane

0x8e09,	// (0x0004ba7f) main_camera2_pane_g9_ParamLimits

0x8e09,	// (0x0004ba7f) main_camera2_pane_g9

0x8e17,	// (0x0004ba8d) main_camera2_pane_t5_ParamLimits

0x8e17,	// (0x0004ba8d) main_camera2_pane_t5

0x8e2b,	// (0x0004baa1) main_camera2_pane_t6_ParamLimits

0x8e2b,	// (0x0004baa1) main_camera2_pane_t6

0x8f6f,	// (0x0004bbe5) main_image2_pane_g1_ParamLimits

0x8f6f,	// (0x0004bbe5) main_image2_pane_g1

0x868e,	// (0x0004b304) smil2_video_pane_ParamLimits

0x868e,	// (0x0004b304) smil2_video_pane

0x5f03,	// (0x00048b79) aid_zoom_text_primary_cp

0x61e2,	// (0x00048e58) popup_preview_fixed_window

0xe232,	// (0x00050ea8) im_reading_pane_g1

0x8dd3,	// (0x0004ba49) cams2_bc_adjust_pane_cp_ParamLimits

0x8dd3,	// (0x0004ba49) cams2_bc_adjust_pane_cp

0x622b,	// (0x00048ea1) cams2_bc_adjust_pane_ParamLimits

0x622b,	// (0x00048ea1) cams2_bc_adjust_pane

0x3801,	// (0x00046477) cams2_bc_adjust_pane_g1

0x6241,	// (0x00048eb7) cams2_slider_pane

0x3801,	// (0x00046477) cams2_slider_pane_g1

0x3801,	// (0x00046477) cams2_slider_pane_g2

0x0006,

0xf645,	// (0x000522bb) cams2_slider_pane_g

0x632a,	// (0x00048fa0) calc_display_pane_ParamLimits

0x6342,	// (0x00048fb8) calc_paper_pane_ParamLimits

0x635e,	// (0x00048fd4) grid_calc_pane_ParamLimits

0x7e85,	// (0x0004aafb) popup_clock_digital_window_t1_ParamLimits

0xed98,	// (0x00051a0e) main_image_pane_t1

0x6310,	// (0x00048f86) aid_size_cell_calc_ParamLimits

0x6310,	// (0x00048f86) aid_size_cell_calc

0x8ac6,	// (0x0004b73c) popup_blid_sat_info2_window_ParamLimits

0x8ac6,	// (0x0004b73c) popup_blid_sat_info2_window

0x2647,	// (0x000452bd) aid_size_cell_blid

0x2512,	// (0x00045188) bg_popup_window_pane_cp07

0x2664,	// (0x000452da) grid_popup_blid_pane

0x266c,	// (0x000452e2) heading_pane_cp05_ParamLimits

0x266c,	// (0x000452e2) heading_pane_cp05

0x2734,	// (0x000453aa) cell_popup_blid_pane_ParamLimits

0x2734,	// (0x000453aa) cell_popup_blid_pane

0x2754,	// (0x000453ca) cell_popup_blid_pane_g1

0x275c,	// (0x000453d2) cell_popup_blid_pane_t1

0x2512,	// (0x00045188) mup2_indicator_pane_ParamLimits

0x2512,	// (0x00045188) mup2_indicator_pane

0xd7d4,	// (0x0005044a) mup2_visualizer_osc_pane

0x2520,	// (0x00045196) mup2_visualizer_spec_pane_ParamLimits

0x2520,	// (0x00045196) mup2_visualizer_spec_pane

0xd7d4,	// (0x0005044a) mup2_spec_half_pane

0xd7d4,	// (0x0005044a) mup2_spec_half_pane_cp

0xd7d4,	// (0x0005044a) mup2_spec_bar_pane_ParamLimits

0xd7d4,	// (0x0005044a) mup2_spec_bar_pane

0xe183,	// (0x00050df9) mup2_spec_bar_pane_g1

0x276a,	// (0x000453e0) mup2_spec_bar_pane_g2

0x0001,

0xf66b,	// (0x000522e1) mup2_spec_bar_pane_g

0xd7d4,	// (0x0005044a) mup2_osc_middle_pane

0xe183,	// (0x00050df9) mup2_visualizer_osc_pane_g1

0xd7fe,	// (0x00050474) popup_number_entry_window_t1_ParamLimits

0xd811,	// (0x00050487) popup_number_entry_window_t2_ParamLimits

0xd823,	// (0x00050499) popup_number_entry_window_t3_ParamLimits

0x6298,	// (0x00048f0e) popup_number_entry_window_t5_ParamLimits

0x6298,	// (0x00048f0e) popup_number_entry_window_t5

0xf085,	// (0x00051cfb) popup_number_entry_window_t_ParamLimits

0xd835,	// (0x000504ab) text_title_cp2_ParamLimits

0x83cc,	// (0x0004b042) aid_hotspot_pointer_text2_pane

0x845e,	// (0x0004b0d4) main_viewer_pane_g9_ParamLimits

0x845e,	// (0x0004b0d4) main_viewer_pane_g9

0xe47b,	// (0x000510f1) cale_month_pane_t1_ParamLimits

0xe4a1,	// (0x00051117) bg_cale_pane_ParamLimits

0xe4b9,	// (0x0005112f) list_cale_pane_ParamLimits

0xe4ca,	// (0x00051140) listscroll_cale_day_pane_t1

0xe4dc,	// (0x00051152) scroll_pane_cp09_ParamLimits

0x8151,	// (0x0004adc7) main_mup_eq_pane_t1_ParamLimits

0x8151,	// (0x0004adc7) main_mup_eq_pane_t1

0x8167,	// (0x0004addd) main_mup_eq_pane_t2_ParamLimits

0x8167,	// (0x0004addd) main_mup_eq_pane_t2

0x817d,	// (0x0004adf3) main_mup_eq_pane_t3_ParamLimits

0x817d,	// (0x0004adf3) main_mup_eq_pane_t3

0x8193,	// (0x0004ae09) main_mup_eq_pane_t4_ParamLimits

0x8193,	// (0x0004ae09) main_mup_eq_pane_t4

0x81a9,	// (0x0004ae1f) main_mup_eq_pane_t5_ParamLimits

0x81a9,	// (0x0004ae1f) main_mup_eq_pane_t5

0x81bf,	// (0x0004ae35) main_mup_eq_pane_t6_ParamLimits

0x81bf,	// (0x0004ae35) main_mup_eq_pane_t6

0x81d1,	// (0x0004ae47) main_mup_eq_pane_t7_ParamLimits

0x81d1,	// (0x0004ae47) main_mup_eq_pane_t7

0x81e3,	// (0x0004ae59) main_mup_eq_pane_t8_ParamLimits

0x81e3,	// (0x0004ae59) main_mup_eq_pane_t8

0x81f5,	// (0x0004ae6b) main_mup_eq_pane_t9_ParamLimits

0x81f5,	// (0x0004ae6b) main_mup_eq_pane_t9

0x820b,	// (0x0004ae81) main_mup_eq_pane_t10_ParamLimits

0x820b,	// (0x0004ae81) main_mup_eq_pane_t10

0x0009,

0xf3fb,	// (0x00052071) main_mup_eq_pane_t_ParamLimits

0xf3fb,	// (0x00052071) main_mup_eq_pane_t

0x829e,	// (0x0004af14) mup_equalizer_pane_cp5_ParamLimits

0x82b0,	// (0x0004af26) mup_equalizer_pane_cp6_ParamLimits

0x82c2,	// (0x0004af38) mup_equalizer_pane_cp7_ParamLimits

0x6241,	// (0x00048eb7) main_gallery_pane

0x24d6,	// (0x0004514c) smil2_volume_pane

0x24f1,	// (0x00045167) smil_status_volume_pane_g1_ParamLimits

0x24de,	// (0x00045154) smil_status_volume_pane_g2_ParamLimits

0x8c5a,	// (0x0004b8d0) smil_status_volume_pane_g3_ParamLimits

0xf5c4,	// (0x0005223a) smil_status_volume_pane_g_ParamLimits

0x2512,	// (0x00045188) bg_popup_window_pane_cp07_ParamLimits

0x264f,	// (0x000452c5) blid_firmament_pane

0xe147,	// (0x00050dbd) aid_size_cell_gallery_ParamLimits

0xe147,	// (0x00050dbd) aid_size_cell_gallery

0x8f7b,	// (0x0004bbf1) grid_gallery_pane_ParamLimits

0x8f7b,	// (0x0004bbf1) grid_gallery_pane

0x8f8a,	// (0x0004bc00) cell_gallery_pane_ParamLimits

0x8f8a,	// (0x0004bc00) cell_gallery_pane

0xebdb,	// (0x00051851) bg_cell_gallery_focus_pane_ParamLimits

0xebdb,	// (0x00051851) bg_cell_gallery_focus_pane

0xdec4,	// (0x00050b3a) cell_gallery_pane_g1_ParamLimits

0xdec4,	// (0x00050b3a) cell_gallery_pane_g1

0xdec4,	// (0x00050b3a) cell_gallery_pane_g2_ParamLimits

0xdec4,	// (0x00050b3a) cell_gallery_pane_g2

0xdec4,	// (0x00050b3a) cell_gallery_pane_g3_ParamLimits

0xdec4,	// (0x00050b3a) cell_gallery_pane_g3

0xded2,	// (0x00050b48) cell_gallery_pane_g4_ParamLimits

0xded2,	// (0x00050b48) cell_gallery_pane_g4

0x0003,

0xf670,	// (0x000522e6) cell_gallery_pane_g_ParamLimits

0xf670,	// (0x000522e6) cell_gallery_pane_g

0x2774,	// (0x000453ea) bg_cell_gallery_focus_pane_g1

0x277c,	// (0x000453f2) bg_cell_gallery_focus_pane_g2

0x2784,	// (0x000453fa) bg_cell_gallery_focus_pane_g3

0x278c,	// (0x00045402) bg_cell_gallery_focus_pane_g4

0x2794,	// (0x0004540a) bg_cell_gallery_focus_pane_g5

0x279c,	// (0x00045412) bg_cell_gallery_focus_pane_g6

0x27a4,	// (0x0004541a) bg_cell_gallery_focus_pane_g7

0x27ac,	// (0x00045422) bg_cell_gallery_focus_pane_g8

0x0007,

0xf679,	// (0x000522ef) bg_cell_gallery_focus_pane_g

0x27b4,	// (0x0004542a) aid_firma_cardinal

0x27c8,	// (0x0004543e) blid_firmament_pane_t1

0x27df,	// (0x00045455) blid_firmament_pane_t2

0x27f6,	// (0x0004546c) blid_firmament_pane_t3

0x280d,	// (0x00045483) blid_firmament_pane_t4

0x0003,

0xf68a,	// (0x00052300) blid_firmament_pane_t

0x2824,	// (0x0004549a) blid_sat_info_pane

0xe183,	// (0x00050df9) blid_sat_info_pane_g1

0xe183,	// (0x00050df9) blid_sat_info_pane_g2

0x0001,

0xf3ef,	// (0x00052065) blid_sat_info_pane_g

0x2834,	// (0x000454aa) blid_sat_info_pane_t1

0x2842,	// (0x000454b8) smil2_volume_content_pane

0x284b,	// (0x000454c1) smil2_volume_pane_g1

0x2853,	// (0x000454c9) smil2_volume_content_pane_g1

0x285c,	// (0x000454d2) smil2_volume_content_pane_g2

0x2865,	// (0x000454db) smil2_volume_content_pane_g3

0x286e,	// (0x000454e4) smil2_volume_content_pane_g4

0x2877,	// (0x000454ed) smil2_volume_content_pane_g5

0x2880,	// (0x000454f6) smil2_volume_content_pane_g6

0x2889,	// (0x000454ff) smil2_volume_content_pane_g7

0x2892,	// (0x00045508) smil2_volume_content_pane_g8

0x289b,	// (0x00045511) smil2_volume_content_pane_g9

0x28a4,	// (0x0004551a) smil2_volume_content_pane_g10

0x0009,

0xf693,	// (0x00052309) smil2_volume_content_pane_g

0x6888,	// (0x000494fe) cale_week_day_heading_pane_t1_ParamLimits

0x68c3,	// (0x00049539) cale_week_day_heading_pane_t2_ParamLimits

0x68fe,	// (0x00049574) cale_week_day_heading_pane_t3_ParamLimits

0x6939,	// (0x000495af) cale_week_day_heading_pane_t4_ParamLimits

0x6974,	// (0x000495ea) cale_week_day_heading_pane_t5_ParamLimits

0x69af,	// (0x00049625) cale_week_day_heading_pane_t6_ParamLimits

0x69ea,	// (0x00049660) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x00051e02) cale_week_day_heading_pane_t_ParamLimits

0xe0ad,	// (0x00050d23) bg_cale_side_pane_ParamLimits

0x6a25,	// (0x0004969b) cale_week_time_pane_t1_ParamLimits

0x6a5f,	// (0x000496d5) cale_week_time_pane_t2_ParamLimits

0x6a99,	// (0x0004970f) cale_week_time_pane_t3_ParamLimits

0x6ad3,	// (0x00049749) cale_week_time_pane_t4_ParamLimits

0x6b0d,	// (0x00049783) cale_week_time_pane_t5_ParamLimits

0x6b47,	// (0x000497bd) cale_week_time_pane_t6_ParamLimits

0x6b81,	// (0x000497f7) cale_week_time_pane_t7_ParamLimits

0x6bbb,	// (0x00049831) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x00051e11) cale_week_time_pane_t_ParamLimits

0x6bf5,	// (0x0004986b) cell_cale_week_pane_g2_ParamLimits

0xe0ad,	// (0x00050d23) bg_cale_side_pane_cp01_ParamLimits

0x7a31,	// (0x0004a6a7) cale_month_week_pane_t1_ParamLimits

0x7a6a,	// (0x0004a6e0) cale_month_week_pane_t2_ParamLimits

0x7aa3,	// (0x0004a719) cale_month_week_pane_t3_ParamLimits

0x7adc,	// (0x0004a752) cale_month_week_pane_t4_ParamLimits

0x7b15,	// (0x0004a78b) cale_month_week_pane_t5_ParamLimits

0x7b4e,	// (0x0004a7c4) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x00051edf) cale_month_week_pane_t_ParamLimits

0x7c75,	// (0x0004a8eb) cell_cale_month_pane_g1_ParamLimits

0x6241,	// (0x00048eb7) main_cale_event_viewer_pane

0xd7d4,	// (0x0005044a) listscroll_cale_event_viewer_pane

0x28ad,	// (0x00045523) list_cale_ev_pane

0x28b5,	// (0x0004552b) scroll_pane_cp023

0x8fa6,	// (0x0004bc1c) field_cale_ev_pane_ParamLimits

0x8fa6,	// (0x0004bc1c) field_cale_ev_pane

0x28c1,	// (0x00045537) field_cale_ev_content_pane_ParamLimits

0x28c1,	// (0x00045537) field_cale_ev_content_pane

0x28cd,	// (0x00045543) field_cale_ev_pane_g1_ParamLimits

0x28cd,	// (0x00045543) field_cale_ev_pane_g1

0x28d9,	// (0x0004554f) field_cale_ev_pane_g2_ParamLimits

0x28d9,	// (0x0004554f) field_cale_ev_pane_g2

0x28f1,	// (0x00045567) field_cale_ev_pane_g3_ParamLimits

0x28f1,	// (0x00045567) field_cale_ev_pane_g3

0x0002,

0xf6a8,	// (0x0005231e) field_cale_ev_pane_g_ParamLimits

0xf6a8,	// (0x0005231e) field_cale_ev_pane_g

0x2909,	// (0x0004557f) field_cale_ev_pane_t1_ParamLimits

0x2909,	// (0x0004557f) field_cale_ev_pane_t1

0x8fc0,	// (0x0004bc36) field_cale_ev_content_pane_t1_ParamLimits

0x8fc0,	// (0x0004bc36) field_cale_ev_content_pane_t1

0xec7e,	// (0x000518f4) bg_button_pane_cp01

0x6673,	// (0x000492e9) listscroll_cale_week_pane_ParamLimits

0xe058,	// (0x00050cce) popup_toolbar_window_cp01

0xe07e,	// (0x00050cf4) listscroll_cale_week_pane_t1_ParamLimits

0x6673,	// (0x000492e9) listscroll_cale_day_pane_ParamLimits

0xe058,	// (0x00050cce) popup_toolbar_window_cp02

0xe4ca,	// (0x00051140) listscroll_cale_day_pane_t1_ParamLimits

0x6673,	// (0x000492e9) main_cale_month_pane_ParamLimits

0x8b99,	// (0x0004b80f) popup_toolbar_window_cp03_ParamLimits

0x8b99,	// (0x0004b80f) popup_toolbar_window_cp03

0x85b6,	// (0x0004b22c) main_image_pane_g2_ParamLimits

0x85b6,	// (0x0004b22c) main_image_pane_g2

0x85c2,	// (0x0004b238) main_image_pane_g3_ParamLimits

0x85c2,	// (0x0004b238) main_image_pane_g3

0x0002,

0xf48d,	// (0x00052103) main_image_pane_g_ParamLimits

0xf48d,	// (0x00052103) main_image_pane_g

0xed98,	// (0x00051a0e) main_image_pane_t1_ParamLimits

0x85ce,	// (0x0004b244) main_image_pane_t2_ParamLimits

0x85ce,	// (0x0004b244) main_image_pane_t2

0x85e0,	// (0x0004b256) main_image_pane_t3_ParamLimits

0x85e0,	// (0x0004b256) main_image_pane_t3

0x85f2,	// (0x0004b268) main_image_pane_t4_ParamLimits

0x85f2,	// (0x0004b268) main_image_pane_t4

0x0003,

0xf494,	// (0x0005210a) main_image_pane_t_ParamLimits

0xf494,	// (0x0005210a) main_image_pane_t

0x8604,	// (0x0004b27a) popup_image_details_window_cp01

0x860c,	// (0x0004b282) popup_toobar_trans_pane_cp01_ParamLimits

0x860c,	// (0x0004b282) popup_toobar_trans_pane_cp01

0x8b0d,	// (0x0004b783) popup_image_details_window_ParamLimits

0x8b0d,	// (0x0004b783) popup_image_details_window

0x8b19,	// (0x0004b78f) popup_image_focus_window

0x622b,	// (0x00048ea1) camera2_autofocus_pane_ParamLimits

0x622b,	// (0x00048ea1) camera2_autofocus_pane

0xd7d4,	// (0x0005044a) bg_popup_sub_pane_cp06

0x2920,	// (0x00045596) popup_image_focus_window_g1

0x2928,	// (0x0004559e) popup_image_focus_window_g2

0x2930,	// (0x000455a6) popup_image_focus_window_g3

0x2938,	// (0x000455ae) popup_image_focus_window_g4

0x0003,

0xf6af,	// (0x00052325) popup_image_focus_window_g

0x2940,	// (0x000455b6) popup_image_focus_window_t1

0x294e,	// (0x000455c4) popup_image_focus_window_t2

0x295d,	// (0x000455d3) popup_image_focus_window_t3

0x0002,

0xf6b8,	// (0x0005232e) popup_image_focus_window_t

0xdec4,	// (0x00050b3a) camera2_autofocus_pane_g1

0xebdb,	// (0x00051851) bg_tb_trans_pane_cp01

0x296b,	// (0x000455e1) popup_image_details_window_g1

0x297e,	// (0x000455f4) popup_image_details_window_g2

0x0002,

0xf6ca,	// (0x00052340) popup_image_details_window_g

0x29a7,	// (0x0004561d) popup_image_details_window_t1

0x29b9,	// (0x0004562f) popup_image_details_window_t2

0x29d2,	// (0x00045648) popup_image_details_window_t3

0x29e6,	// (0x0004565c) popup_image_details_window_t4

0x2a01,	// (0x00045677) popup_image_details_window_t5

0x0004,

0xf6d1,	// (0x00052347) popup_image_details_window_t

0xdf22,	// (0x00050b98) bg_calc_paper_pane_ParamLimits

0x6241,	// (0x00048eb7) grid_highlight_pane_cp013

0x6443,	// (0x000490b9) list_calc_pane_ParamLimits

0x6455,	// (0x000490cb) scroll_pane_cp024

0xdf3a,	// (0x00050bb0) bg_calc_display_pane_ParamLimits

0x645d,	// (0x000490d3) calc_display_pane_t1_ParamLimits

0x6472,	// (0x000490e8) calc_display_pane_t2_ParamLimits

0x6487,	// (0x000490fd) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x00051d82) calc_display_pane_t_ParamLimits

0x653d,	// (0x000491b3) cell_calc_pane_g2

0x0001,

0xf129,	// (0x00051d9f) cell_calc_pane_g

0x6546,	// (0x000491bc) cell_calc_pane_t1

0xdf8f,	// (0x00050c05) grid_highlight_pane_cp02_ParamLimits

0xdfa5,	// (0x00050c1b) toolbar_button_pane_cp01_ParamLimits

0xdfa5,	// (0x00050c1b) toolbar_button_pane_cp01

0xeddd,	// (0x00051a53) temp_image_control_pane_ParamLimits

0xeddd,	// (0x00051a53) temp_image_control_pane

0x8a95,	// (0x0004b70b) main_mp3_pane

0x2a1b,	// (0x00045691) temp_image_control_pane_g1_ParamLimits

0x2a1b,	// (0x00045691) temp_image_control_pane_g1

0x2a29,	// (0x0004569f) temp_image_control_pane_g2_ParamLimits

0x2a29,	// (0x0004569f) temp_image_control_pane_g2

0x2a3b,	// (0x000456b1) temp_image_control_pane_g3_ParamLimits

0x2a3b,	// (0x000456b1) temp_image_control_pane_g3

0x8fda,	// (0x0004bc50) temp_image_control_pane_g4_ParamLimits

0x8fda,	// (0x0004bc50) temp_image_control_pane_g4

0x0003,

0xf6dc,	// (0x00052352) temp_image_control_pane_g_ParamLimits

0xf6dc,	// (0x00052352) temp_image_control_pane_g

0x2a1b,	// (0x00045691) main_mp3_pane_g1

0x8feb,	// (0x0004bc61) main_mp3_pane_g2

0x0007,

0xf6e5,	// (0x0005235b) main_mp3_pane_g

0x2a70,	// (0x000456e6) main_mp3_pane_t1

0xded2,	// (0x00050b48) main_camera_pane_g8_ParamLimits

0xded2,	// (0x00050b48) main_camera_pane_g8

0x6d81,	// (0x000499f7) main_video_pane_g7_ParamLimits

0x6d81,	// (0x000499f7) main_video_pane_g7

0x8e17,	// (0x0004ba8d) main_camera2_pane_t7_ParamLimits

0x8e17,	// (0x0004ba8d) main_camera2_pane_t7

0xe298,	// (0x00050f0e) scroll_pane_cp025_ParamLimits

0xe298,	// (0x00050f0e) scroll_pane_cp025

0xe2ac,	// (0x00050f22) scroll_pane_cp026_ParamLimits

0xe2ac,	// (0x00050f22) scroll_pane_cp026

0xe2bb,	// (0x00050f31) wml_content_pane_ParamLimits

0x6241,	// (0x00048eb7) main_touch_calib_pane

0x9083,	// (0x0004bcf9) main_touch_calib_pane_g1

0x908f,	// (0x0004bd05) main_touch_calib_pane_g2

0x909b,	// (0x0004bd11) main_touch_calib_pane_g3

0x90a7,	// (0x0004bd1d) main_touch_calib_pane_g4

0x0003,

0xf703,	// (0x00052379) main_touch_calib_pane_g

0x90b3,	// (0x0004bd29) main_touch_calib_pane_t1

0x90c8,	// (0x0004bd3e) main_touch_calib_pane_t2

0x0004,

0xf70c,	// (0x00052382) main_touch_calib_pane_t

0xe9e3,	// (0x00051659) mup_progress_pane_cp02

0xea18,	// (0x0005168e) navi_pane_g1

0xeaa3,	// (0x00051719) navi_pane_mp_t3

0x8a95,	// (0x0004b70b) main_mp3_pane_ParamLimits

0x8bd4,	// (0x0004b84a) navi_pane_ParamLimits

0x2a1b,	// (0x00045691) main_mp3_pane_g1_ParamLimits

0x8feb,	// (0x0004bc61) main_mp3_pane_g2_ParamLimits

0x8ff7,	// (0x0004bc6d) main_mp3_pane_g3_ParamLimits

0x8ff7,	// (0x0004bc6d) main_mp3_pane_g3

0x9003,	// (0x0004bc79) main_mp3_pane_g4_ParamLimits

0x9003,	// (0x0004bc79) main_mp3_pane_g4

0xdec4,	// (0x00050b3a) main_mp3_pane_g5_ParamLimits

0xdec4,	// (0x00050b3a) main_mp3_pane_g5

0x2a4b,	// (0x000456c1) main_mp3_pane_g6_ParamLimits

0x2a4b,	// (0x000456c1) main_mp3_pane_g6

0x2a58,	// (0x000456ce) main_mp3_pane_g7_ParamLimits

0x2a58,	// (0x000456ce) main_mp3_pane_g7

0x2a64,	// (0x000456da) main_mp3_pane_g8_ParamLimits

0x2a64,	// (0x000456da) main_mp3_pane_g8

0xf6e5,	// (0x0005235b) main_mp3_pane_g_ParamLimits

0x900f,	// (0x0004bc85) main_mp3_pane_t2

0x901d,	// (0x0004bc93) main_mp3_pane_t3

0x2a7e,	// (0x000456f4) main_mp3_pane_t4

0x2a8c,	// (0x00045702) main_mp3_pane_t5

0x0005,

0xf6f6,	// (0x0005236c) main_mp3_pane_t

0x2a9a,	// (0x00045710) mup_progress_pane_cp01

0x5f03,	// (0x00048b79) aid_zoom_text_secondary2

0x28ad,	// (0x00045523) list_cale_ev2_pane

0x28b5,	// (0x0004552b) scroll_pane_cp023_ParamLimits

0x9113,	// (0x0004bd89) field_cale_ev2_pane_ParamLimits

0x9113,	// (0x0004bd89) field_cale_ev2_pane

0x2aa2,	// (0x00045718) field_cale_ev2_pane_g1_ParamLimits

0x2aa2,	// (0x00045718) field_cale_ev2_pane_g1

0x2aae,	// (0x00045724) field_cale_ev2_pane_g2_ParamLimits

0x2aae,	// (0x00045724) field_cale_ev2_pane_g2

0x2ac6,	// (0x0004573c) field_cale_ev2_pane_g3_ParamLimits

0x2ac6,	// (0x0004573c) field_cale_ev2_pane_g3

0x0003,

0xf717,	// (0x0005238d) field_cale_ev2_pane_g_ParamLimits

0xf717,	// (0x0005238d) field_cale_ev2_pane_g

0x2aea,	// (0x00045760) field_cale_ev2_pane_t1_ParamLimits

0x2aea,	// (0x00045760) field_cale_ev2_pane_t1

0x2b01,	// (0x00045777) field_cale_ev2_pane_t2_ParamLimits

0x2b01,	// (0x00045777) field_cale_ev2_pane_t2

0x0001,

0xf720,	// (0x00052396) field_cale_ev2_pane_t_ParamLimits

0xf720,	// (0x00052396) field_cale_ev2_pane_t

0x84b2,	// (0x0004b128) main_postcard_pane_g5_ParamLimits

0x84b2,	// (0x0004b128) main_postcard_pane_g5

0x84be,	// (0x0004b134) main_postcard_pane_g6_ParamLimits

0x84be,	// (0x0004b134) main_postcard_pane_g6

0xe147,	// (0x00050dbd) camera2_autofocus_pane_cp_ParamLimits

0xe147,	// (0x00050dbd) camera2_autofocus_pane_cp

0x8a95,	// (0x0004b70b) main_mup3_pane

0x9162,	// (0x0004bdd8) main_mup3_pane_g1_ParamLimits

0x9162,	// (0x0004bdd8) main_mup3_pane_g1

0x9183,	// (0x0004bdf9) main_mup3_pane_g2_ParamLimits

0x9183,	// (0x0004bdf9) main_mup3_pane_g2

0x91f0,	// (0x0004be66) main_mup3_pane_g3_ParamLimits

0x91f0,	// (0x0004be66) main_mup3_pane_g3

0x922b,	// (0x0004bea1) main_mup3_pane_g4_ParamLimits

0x922b,	// (0x0004bea1) main_mup3_pane_g4

0x9266,	// (0x0004bedc) main_mup3_pane_g5_ParamLimits

0x9266,	// (0x0004bedc) main_mup3_pane_g5

0x92a1,	// (0x0004bf17) main_mup3_pane_g6_ParamLimits

0x92a1,	// (0x0004bf17) main_mup3_pane_g6

0xded2,	// (0x00050b48) main_mup3_pane_g7_ParamLimits

0xded2,	// (0x00050b48) main_mup3_pane_g7

0x0007,

0xf730,	// (0x000523a6) main_mup3_pane_g_ParamLimits

0xf730,	// (0x000523a6) main_mup3_pane_g

0x930f,	// (0x0004bf85) main_mup3_pane_t1_ParamLimits

0x930f,	// (0x0004bf85) main_mup3_pane_t1

0x9370,	// (0x0004bfe6) main_mup3_pane_t2_ParamLimits

0x9370,	// (0x0004bfe6) main_mup3_pane_t2

0x942b,	// (0x0004c0a1) main_mup3_pane_t4_ParamLimits

0x942b,	// (0x0004c0a1) main_mup3_pane_t4

0x9471,	// (0x0004c0e7) main_mup3_pane_t5_ParamLimits

0x9471,	// (0x0004c0e7) main_mup3_pane_t5

0x9515,	// (0x0004c18b) main_mup3_pane_t6_ParamLimits

0x9515,	// (0x0004c18b) main_mup3_pane_t6

0x0005,

0xf741,	// (0x000523b7) main_mup3_pane_t_ParamLimits

0xf741,	// (0x000523b7) main_mup3_pane_t

0x95bd,	// (0x0004c233) mup3_progress_pane_ParamLimits

0x95bd,	// (0x0004c233) mup3_progress_pane

0x9621,	// (0x0004c297) popup_mup3_control_window_ParamLimits

0x9621,	// (0x0004c297) popup_mup3_control_window

0x2b16,	// (0x0004578c) popup_mup3_text_window

0x963a,	// (0x0004c2b0) mup3_progress_pane_t1

0x9658,	// (0x0004c2ce) mup3_progress_pane_t2

0x2b1e,	// (0x00045794) mup3_progress_pane_t3

0x0002,

0xf74e,	// (0x000523c4) mup3_progress_pane_t

0x2b3b,	// (0x000457b1) mup_progress_pane_cp03

0xd7d4,	// (0x0005044a) bg_tb_trans_pane_cp04

0x9676,	// (0x0004c2ec) mup3_volume_pane

0x967e,	// (0x0004c2f4) popup_mup3_control_window_g1

0x9687,	// (0x0004c2fd) mup3_volume_pane_g1

0x9690,	// (0x0004c306) mup3_volume_pane_g2

0x9699,	// (0x0004c30f) mup3_volume_pane_g3

0x0002,

0xf755,	// (0x000523cb) mup3_volume_pane_g

0xd7d4,	// (0x0005044a) bg_tb_trans_pane_cp03

0x2b4b,	// (0x000457c1) popup_mup3_text_window_g1

0x2b53,	// (0x000457c9) popup_mup3_text_window_t1

0xdf82,	// (0x00050bf8) list_calc_item_pane_g1_ParamLimits

0x25c5,	// (0x0004523b) mup_volume_pane_cp_g1

0x90dd,	// (0x0004bd53) main_touch_calib_pane_t3

0x90ef,	// (0x0004bd65) main_touch_calib_pane_t4

0x9101,	// (0x0004bd77) main_touch_calib_pane_t5

0x5fe7,	// (0x00048c5d) aid_cell_size_toolbar2

0x5fef,	// (0x00048c65) aid_popup3_width_pane

0x5efb,	// (0x00048b71) aid_zoom_text_msg_primary

0xe139,	// (0x00050daf) vorec_t7

0xdf46,	// (0x00050bbc) bg_calc_paper_pane_g1_ParamLimits

0xdf52,	// (0x00050bc8) bg_calc_paper_pane_g2_ParamLimits

0xdf5e,	// (0x00050bd4) bg_calc_paper_pane_g3_ParamLimits

0xdf6a,	// (0x00050be0) bg_calc_paper_pane_g4_ParamLimits

0xdf76,	// (0x00050bec) bg_calc_paper_pane_g5_ParamLimits

0x64c0,	// (0x00049136) bg_calc_paper_pane_g6_ParamLimits

0x64cf,	// (0x00049145) bg_calc_paper_pane_g7_ParamLimits

0x64de,	// (0x00049154) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x00051d89) bg_calc_paper_pane_g_ParamLimits

0x64ed,	// (0x00049163) calc_bg_paper_pane_g9_ParamLimits

0x6c73,	// (0x000498e9) image_qvga_pane_ParamLimits

0x6c73,	// (0x000498e9) image_qvga_pane

0xde4a,	// (0x00050ac0) bg_popup_sub_pane_cp04_ParamLimits

0xed14,	// (0x0005198a) popup_mup_playback_window_g1_ParamLimits

0xed20,	// (0x00051996) popup_mup_playback_window_t1_ParamLimits

0xed35,	// (0x000519ab) popup_mup_playback_window_t2_ParamLimits

0xf488,	// (0x000520fe) popup_mup_playback_window_t_ParamLimits

0xdec4,	// (0x00050b3a) main_mup2_pane_g3_ParamLimits

0xdec4,	// (0x00050b3a) main_mup2_pane_g3

0x6f46,	// (0x00049bbc) popup_toolbar_window_cp04

0x15f3,	// (0x00044269) popup_call2_audio_second_window_g3_ParamLimits

0x15f3,	// (0x00044269) popup_call2_audio_second_window_g3

0x1a31,	// (0x000446a7) popup_call2_audio_first_window_g4_ParamLimits

0x1a31,	// (0x000446a7) popup_call2_audio_first_window_g4

0x20b0,	// (0x00044d26) popup_call2_audio_in_window_g4_ParamLimits

0x20b0,	// (0x00044d26) popup_call2_audio_in_window_g4

0x85a9,	// (0x0004b21f) aid_area_sk_bg_cut_ParamLimits

0x85a9,	// (0x0004b21f) aid_area_sk_bg_cut

0xed4a,	// (0x000519c0) aid_area_sk_bg_cut_2_ParamLimits

0xed4a,	// (0x000519c0) aid_area_sk_bg_cut_2

0xd7d4,	// (0x0005044a) aid_placing_details_win

0xd7d4,	// (0x0005044a) aid_placing_details_win_2

0xdec4,	// (0x00050b3a) camera2_autofocus_pane_g1_ParamLimits

0x61d5,	// (0x00048e4b) popup_fixed_preview_cale_window_ParamLimits

0x61d5,	// (0x00048e4b) popup_fixed_preview_cale_window

0xeb19,	// (0x0005178f) navi_slider_pane_g3

0xeb22,	// (0x00051798) navi_slider_pane_g4

0xeb2b,	// (0x000517a1) navi_slider_pane_g5

0xeb19,	// (0x0005178f) navi_slider_pane_g6

0x8125,	// (0x0004ad9b) navi_slider_pane_g7

0xec4b,	// (0x000518c1) mup_scale_pane_g3

0xec54,	// (0x000518ca) mup_scale_pane_g4

0xec5d,	// (0x000518d3) mup_scale_pane_g5

0x82d4,	// (0x0004af4a) mup_scale_pane_g6

0x82dd,	// (0x0004af53) mup_scale_pane_g7

0x3801,	// (0x00046477) cams2_slider_pane_g3

0x3801,	// (0x00046477) cams2_slider_pane_g4

0x3801,	// (0x00046477) cams2_slider_pane_g5

0x3801,	// (0x00046477) cams2_slider_pane_g6

0x3801,	// (0x00046477) cams2_slider_pane_g7

0xe183,	// (0x00050df9) camera2_autofocus_pane_cp_g1

0x2469,	// (0x000450df) bg_popup_preview_window_pane_cp02_ParamLimits

0x2469,	// (0x000450df) bg_popup_preview_window_pane_cp02

0x2b61,	// (0x000457d7) list_fp_cale_pane_ParamLimits

0x2b61,	// (0x000457d7) list_fp_cale_pane

0x2b6d,	// (0x000457e3) popup_fixed_preview_cale_window_t1_ParamLimits

0x2b6d,	// (0x000457e3) popup_fixed_preview_cale_window_t1

0x96a2,	// (0x0004c318) popup_fixed_preview_cale_window_t2_ParamLimits

0x96a2,	// (0x0004c318) popup_fixed_preview_cale_window_t2

0x96b7,	// (0x0004c32d) popup_fixed_preview_cale_window_t3_ParamLimits

0x96b7,	// (0x0004c32d) popup_fixed_preview_cale_window_t3

0x0002,

0xf75c,	// (0x000523d2) popup_fixed_preview_cale_window_t_ParamLimits

0xf75c,	// (0x000523d2) popup_fixed_preview_cale_window_t

0x96cc,	// (0x0004c342) list_single_fp_cale_pane_ParamLimits

0x96cc,	// (0x0004c342) list_single_fp_cale_pane

0x2b8b,	// (0x00045801) list_single_fp_cale_pane_g1_ParamLimits

0x2b8b,	// (0x00045801) list_single_fp_cale_pane_g1

0x2b97,	// (0x0004580d) list_single_fp_cale_pane_g2_ParamLimits

0x2b97,	// (0x0004580d) list_single_fp_cale_pane_g2

0x0002,

0xf763,	// (0x000523d9) list_single_fp_cale_pane_g_ParamLimits

0xf763,	// (0x000523d9) list_single_fp_cale_pane_g

0x2bb0,	// (0x00045826) list_single_fp_cale_pane_t1_ParamLimits

0x2bb0,	// (0x00045826) list_single_fp_cale_pane_t1

0x2bc2,	// (0x00045838) list_single_fp_cale_pane_t2_ParamLimits

0x2bc2,	// (0x00045838) list_single_fp_cale_pane_t2

0x0001,

0xf76a,	// (0x000523e0) list_single_fp_cale_pane_t_ParamLimits

0xf76a,	// (0x000523e0) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6241,	// (0x00048eb7) main_dialer_pane

0x96dc,	// (0x0004c352) aid_cell_size_keypad

0xd7d4,	// (0x0005044a) dialer_ne_pane

0xd7d4,	// (0x0005044a) grid_dialer_command_1_pane

0xd7d4,	// (0x0005044a) grid_dialer_command_2_pane

0xd7d4,	// (0x0005044a) grid_dialer_keypad_pane

0x2512,	// (0x00045188) bg_popup_call_pane_cp06_ParamLimits

0x2512,	// (0x00045188) bg_popup_call_pane_cp06

0x2512,	// (0x00045188) dialer_ne_clear_pane_ParamLimits

0x2512,	// (0x00045188) dialer_ne_clear_pane

0xe183,	// (0x00050df9) dialer_ne_pane_g1

0xe155,	// (0x00050dcb) dialer_ne_pane_t1_ParamLimits

0xe155,	// (0x00050dcb) dialer_ne_pane_t1

0x2dce,	// (0x00045a44) dialer_ne_pane_t2_ParamLimits

0x2dce,	// (0x00045a44) dialer_ne_pane_t2

0x96e6,	// (0x0004c35c) dialer_ne_pane_t3_ParamLimits

0x96e6,	// (0x0004c35c) dialer_ne_pane_t3

0x0002,

0xf76f,	// (0x000523e5) dialer_ne_pane_t_ParamLimits

0xf76f,	// (0x000523e5) dialer_ne_pane_t

0x96e6,	// (0x0004c35c) dialer_ne_pane_t3_copy1_ParamLimits

0x96e6,	// (0x0004c35c) dialer_ne_pane_t3_copy1

0x9708,	// (0x0004c37e) cell_dialer_keypad_pane_ParamLimits

0x9708,	// (0x0004c37e) cell_dialer_keypad_pane

0x9710,	// (0x0004c386) cell_dialer_command_1_pane_ParamLimits

0x9710,	// (0x0004c386) cell_dialer_command_1_pane

0x9708,	// (0x0004c37e) cell_dialer_command_2_pane_ParamLimits

0x9708,	// (0x0004c37e) cell_dialer_command_2_pane

0xebdb,	// (0x00051851) bg_button_pane_cp02_ParamLimits

0xebdb,	// (0x00051851) bg_button_pane_cp02

0xdec4,	// (0x00050b3a) cell_dialer_keypad_pane_g1_ParamLimits

0xdec4,	// (0x00050b3a) cell_dialer_keypad_pane_g1

0xebdb,	// (0x00051851) bg_button_pane_cp03_ParamLimits

0xebdb,	// (0x00051851) bg_button_pane_cp03

0xdec4,	// (0x00050b3a) cell_dialer_command_1_pane_g1_ParamLimits

0xdec4,	// (0x00050b3a) cell_dialer_command_1_pane_g1

0xd7d4,	// (0x0005044a) bg_button_pane_cp04

0xe183,	// (0x00050df9) cell_dialer_command_2_pane_g1

0xd7d4,	// (0x0005044a) bg_button_pane_cp06

0xe183,	// (0x00050df9) dialer_ne_clear_pane_g1

0xea24,	// (0x0005169a) navi_pane_g2

0x80cd,	// (0x0004ad43) navi_pane_g3

0x0002,

0xf38b,	// (0x00052001) navi_pane_g

0xeab1,	// (0x00051727) navi_pane_mv_g2

0xead8,	// (0x0005174e) navi_pane_mv_g5

0x80ea,	// (0x0004ad60) navi_pane_mv_t1

0xdf3a,	// (0x00050bb0) main_clock2_pane

0x9755,	// (0x0004c3cb) main_clock2_list_pane_ParamLimits

0x9755,	// (0x0004c3cb) main_clock2_list_pane

0x977b,	// (0x0004c3f1) main_clock2_pane_t1_ParamLimits

0x977b,	// (0x0004c3f1) main_clock2_pane_t1

0x979b,	// (0x0004c411) main_clock2_pane_t2_ParamLimits

0x979b,	// (0x0004c411) main_clock2_pane_t2

0x0004,

0xf77b,	// (0x000523f1) main_clock2_pane_t_ParamLimits

0xf77b,	// (0x000523f1) main_clock2_pane_t

0x97f4,	// (0x0004c46a) popup_clock_analogue_window_cp03_ParamLimits

0x97f4,	// (0x0004c46a) popup_clock_analogue_window_cp03

0x9812,	// (0x0004c488) popup_clock_digital_window_cp02_ParamLimits

0x9812,	// (0x0004c488) popup_clock_digital_window_cp02

0x987f,	// (0x0004c4f5) main_clock2_list_single_pane_ParamLimits

0x987f,	// (0x0004c4f5) main_clock2_list_single_pane

0xe107,	// (0x00050d7d) list_highlight_pane_cp05

0x2c25,	// (0x0004589b) main_clock2_list_single_pane_t1

0x6f46,	// (0x00049bbc) popup_toolbar_window_cp04_ParamLimits

0xded2,	// (0x00050b48) camera2_autofocus_pane_g2_ParamLimits

0xded2,	// (0x00050b48) camera2_autofocus_pane_g2

0xded2,	// (0x00050b48) camera2_autofocus_pane_g3_ParamLimits

0xded2,	// (0x00050b48) camera2_autofocus_pane_g3

0xded2,	// (0x00050b48) camera2_autofocus_pane_g4_ParamLimits

0xded2,	// (0x00050b48) camera2_autofocus_pane_g4

0xded2,	// (0x00050b48) camera2_autofocus_pane_g5_ParamLimits

0xded2,	// (0x00050b48) camera2_autofocus_pane_g5

0x0004,

0xf6bf,	// (0x00052335) camera2_autofocus_pane_g_ParamLimits

0xf6bf,	// (0x00052335) camera2_autofocus_pane_g

0x9129,	// (0x0004bd9f) camera2_autofocus_pane_cp_g2

0x9131,	// (0x0004bda7) camera2_autofocus_pane_cp_g3

0x9139,	// (0x0004bdaf) camera2_autofocus_pane_cp_g4

0x9141,	// (0x0004bdb7) camera2_autofocus_pane_cp_g5

0x0004,

0xf725,	// (0x0005239b) camera2_autofocus_pane_cp_g

0xd7d4,	// (0x0005044a) popup_dialer_spcha_window

0xd7d4,	// (0x0005044a) bg_popup_sub_pane_cp07

0xd7d4,	// (0x0005044a) list_spcha_pane

0xd7d4,	// (0x0005044a) list_single_spcha_pane_ParamLimits

0xd7d4,	// (0x0005044a) list_single_spcha_pane

0xd7d4,	// (0x0005044a) list_highlight_pane_cp06

0x2c33,	// (0x000458a9) list_single_spcha_pane_t1

0x1e5a,	// (0x00044ad0) popup_call2_audio_out_window_g4_ParamLimits

0x1e5a,	// (0x00044ad0) popup_call2_audio_out_window_g4

0x6241,	// (0x00048eb7) main_imed2_pane

0x8b21,	// (0x0004b797) popup_imed_adjust2_window

0x8b32,	// (0x0004b7a8) popup_imed_trans_window_ParamLimits

0x8b32,	// (0x0004b7a8) popup_imed_trans_window

0x2698,	// (0x0004530e) popup_blid_sat_info2_window_t1

0x26a6,	// (0x0004531c) popup_blid_sat_info2_window_t2

0x000a,

0xf654,	// (0x000522ca) popup_blid_sat_info2_window_t

0x9929,	// (0x0004c59f) aid_size_cell_colour_35

0x9940,	// (0x0004c5b6) aid_size_cell_colour_112

0x9957,	// (0x0004c5cd) aid_size_cell_effect

0xebdb,	// (0x00051851) bg_tb_trans_pane_cp02

0xee11,	// (0x00051a87) heading_imed_pane

0x9971,	// (0x0004c5e7) listscroll_imed_pane

0x2c43,	// (0x000458b9) heading_imed_pane_g1

0x2c4b,	// (0x000458c1) heading_imed_pane_t1

0x2c59,	// (0x000458cf) grid_imed_colour_35_pane_ParamLimits

0x2c59,	// (0x000458cf) grid_imed_colour_35_pane

0x997d,	// (0x0004c5f3) grid_imed_effect_pane

0x2c6c,	// (0x000458e2) list_imed_aspect_pane

0x9989,	// (0x0004c5ff) scroll_pane_cp027_ParamLimits

0x9989,	// (0x0004c5ff) scroll_pane_cp027

0x9995,	// (0x0004c60b) cell_imed_effect_pane_ParamLimits

0x9995,	// (0x0004c60b) cell_imed_effect_pane

0x2c74,	// (0x000458ea) cell_imed_colour_pane_ParamLimits

0x2c74,	// (0x000458ea) cell_imed_colour_pane

0x2cae,	// (0x00045924) cell_imed_colour_pane_g1_ParamLimits

0x2cae,	// (0x00045924) cell_imed_colour_pane_g1

0x2cbf,	// (0x00045935) hgihlgiht_grid_pane_cp016_ParamLimits

0x2cbf,	// (0x00045935) hgihlgiht_grid_pane_cp016

0x99ab,	// (0x0004c621) cell_imed_effect_pane_g1

0x99b3,	// (0x0004c629) grid_highlight_pane_cp017

0x2cd0,	// (0x00045946) list_imed_single_pane_ParamLimits

0x2cd0,	// (0x00045946) list_imed_single_pane

0xd7d4,	// (0x0005044a) list_highlight_pane_cp07

0x2ce3,	// (0x00045959) list_imed_aspect_pane_comp1_t1

0xee03,	// (0x00051a79) bg_tb_trans_pane_cp05

0x2d03,	// (0x00045979) popup_imed_adjust2_window_g1

0x2d2a,	// (0x000459a0) popup_imed_adjust2_window_t1

0x2d42,	// (0x000459b8) slider_imed_adjust_pane

0x2d56,	// (0x000459cc) slider_imed_adjust_pane_g1

0x2d66,	// (0x000459dc) slider_imed_adjust_pane_g2

0x2d76,	// (0x000459ec) slider_imed_adjust_pane_g3

0x2d87,	// (0x000459fd) slider_imed_adjust_pane_g4

0x0003,

0xf798,	// (0x0005240e) slider_imed_adjust_pane_g

0x99bc,	// (0x0004c632) aid_size_cell_clipart2

0x99c8,	// (0x0004c63e) grid_imed_clipart_pane

0x2d98,	// (0x00045a0e) scroll_pane_cp031

0x99d2,	// (0x0004c648) cell_imed_clipart_pane_ParamLimits

0x99d2,	// (0x0004c648) cell_imed_clipart_pane

0x99e9,	// (0x0004c65f) cell_imed_clipart_pane_g1

0xd7d4,	// (0x0005044a) grid_highlight_pane_cp014

0x9761,	// (0x0004c3d7) main_clock2_pane_g1_ParamLimits

0x9761,	// (0x0004c3d7) main_clock2_pane_g1

0x982a,	// (0x0004c4a0) aid_call2_pane_cp10

0x983c,	// (0x0004c4b2) aid_call_pane_cp10

0xe9b3,	// (0x00051629) popup_clock_analogue_window_cp10_g1

0xe9b3,	// (0x00051629) popup_clock_analogue_window_cp10_g2

0x984e,	// (0x0004c4c4) popup_clock_analogue_window_cp10_g3

0x984e,	// (0x0004c4c4) popup_clock_analogue_window_cp10_g4

0xe9b3,	// (0x00051629) popup_clock_analogue_window_cp10_g5

0x0004,

0xf786,	// (0x000523fc) popup_clock_analogue_window_cp10_g

0x9860,	// (0x0004c4d6) popup_clock_analogue_window_cp10_t1

0x9891,	// (0x0004c507) clock_digital_number_pane_cp10_ParamLimits

0x9891,	// (0x0004c507) clock_digital_number_pane_cp10

0x98a9,	// (0x0004c51f) clock_digital_number_pane_cp11_ParamLimits

0x98a9,	// (0x0004c51f) clock_digital_number_pane_cp11

0x98c1,	// (0x0004c537) clock_digital_number_pane_cp12_ParamLimits

0x98c1,	// (0x0004c537) clock_digital_number_pane_cp12

0x98d9,	// (0x0004c54f) clock_digital_number_pane_cp13_ParamLimits

0x98d9,	// (0x0004c54f) clock_digital_number_pane_cp13

0x98f1,	// (0x0004c567) clock_digital_separator_pane_cp10_ParamLimits

0x98f1,	// (0x0004c567) clock_digital_separator_pane_cp10

0x9909,	// (0x0004c57f) popup_clock_digital_window_cp02_t1_ParamLimits

0x9909,	// (0x0004c57f) popup_clock_digital_window_cp02_t1

0xde42,	// (0x00050ab8) clock_digital_number_pane_cp10_g1

0xde42,	// (0x00050ab8) clock_digital_number_pane_cp10_g2

0x0001,

0xf7a1,	// (0x00052417) clock_digital_number_pane_cp10_g

0xde42,	// (0x00050ab8) clock_digital_separator_pane_cp10_g1

0xde42,	// (0x00050ab8) clock_digital_separator_pane_g2_cp10

0xeae0,	// (0x00051756) navi_pane_vded_g4

0xeae9,	// (0x0005175f) navi_pane_vded_g5

0xeaf2,	// (0x00051768) navi_pane_vded_t1

0x6241,	// (0x00048eb7) main_vded_pane

0x99f2,	// (0x0004c668) main_vded_pane_g1

0x99fa,	// (0x0004c670) main_vded_pane_g2

0x9a02,	// (0x0004c678) main_vded_pane_g3

0x0002,

0xf7a6,	// (0x0005241c) main_vded_pane_g

0x9a0a,	// (0x0004c680) main_vded_pane_t1

0x9a18,	// (0x0004c68e) main_vded_pane_t2

0x0001,

0xf7ad,	// (0x00052423) main_vded_pane_t

0x9a26,	// (0x0004c69c) vded_slider_pane

0x9a2e,	// (0x0004c6a4) vded_video_pane

0x2da0,	// (0x00045a16) vded_video_pane_g1

0x9a36,	// (0x0004c6ac) vded_video_pane_g2

0xe183,	// (0x00050df9) vded_video_pane_g3

0x0002,

0xf7b2,	// (0x00052428) vded_video_pane_g

0x2daa,	// (0x00045a20) vded_slider_pane_g1

0x25c5,	// (0x0004523b) vded_slider_pane_g2

0x2db3,	// (0x00045a29) vded_slider_pane_g3

0x2dbc,	// (0x00045a32) vded_slider_pane_g4

0x2dc5,	// (0x00045a3b) vded_slider_pane_g5

0x0004,

0xf7b9,	// (0x0005242f) vded_slider_pane_g

0x9615,	// (0x0004c28b) mup3_rocker_pane_ParamLimits

0x9615,	// (0x0004c28b) mup3_rocker_pane

0x9a3f,	// (0x0004c6b5) mup3_control_keys_pane_g1

0x9a47,	// (0x0004c6bd) mup3_control_keys_pane_g2

0x9a4f,	// (0x0004c6c5) mup3_control_keys_pane_g3

0x9a57,	// (0x0004c6cd) mup3_control_keys_pane_g4

0x0003,

0xf7c4,	// (0x0005243a) mup3_control_keys_pane_g

0x61f9,	// (0x00048e6f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x61f9,	// (0x00048e6f) popup_toolbar2_fixed_window_cp01

0x962d,	// (0x0004c2a3) popup_toolbar2_fixed_window_cp02_ParamLimits

0x962d,	// (0x0004c2a3) popup_toolbar2_fixed_window_cp02

0x1765,	// (0x000443db) popup_call2_audio_second_window_t4_ParamLimits

0x1765,	// (0x000443db) popup_call2_audio_second_window_t4

0x1cc7,	// (0x0004493d) popup_call2_audio_first_window_t6_ParamLimits

0x1cc7,	// (0x0004493d) popup_call2_audio_first_window_t6

0x1f5d,	// (0x00044bd3) popup_call2_audio_out_window_t6_ParamLimits

0x1f5d,	// (0x00044bd3) popup_call2_audio_out_window_t6

0x6241,	// (0x00048eb7) main_vitu_pane

0xe147,	// (0x00050dbd) aid_size_cell_itu_ParamLimits

0xe147,	// (0x00050dbd) aid_size_cell_itu

0xe147,	// (0x00050dbd) bg_popup_window_pane_cp08_ParamLimits

0xe147,	// (0x00050dbd) bg_popup_window_pane_cp08

0xe147,	// (0x00050dbd) field_vitu_entry_pane_ParamLimits

0xe147,	// (0x00050dbd) field_vitu_entry_pane

0xe147,	// (0x00050dbd) grid_vitu_function_pane_ParamLimits

0xe147,	// (0x00050dbd) grid_vitu_function_pane

0xe147,	// (0x00050dbd) grid_vitu_itu_pane_ParamLimits

0xe147,	// (0x00050dbd) grid_vitu_itu_pane

0x9a67,	// (0x0004c6dd) cell_vitu_itu_pane_ParamLimits

0x9a67,	// (0x0004c6dd) cell_vitu_itu_pane

0xe147,	// (0x00050dbd) cell_vitu_function_pane_ParamLimits

0xe147,	// (0x00050dbd) cell_vitu_function_pane

0xebdb,	// (0x00051851) bg_popup_sub_pane_cp08_ParamLimits

0xebdb,	// (0x00051851) bg_popup_sub_pane_cp08

0xebc7,	// (0x0005183d) field_vitu_entry_pane_t1_ParamLimits

0xebc7,	// (0x0005183d) field_vitu_entry_pane_t1

0x2dce,	// (0x00045a44) field_vitu_entry_pane_t2_ParamLimits

0x2dce,	// (0x00045a44) field_vitu_entry_pane_t2

0x0001,

0xf7d2,	// (0x00052448) field_vitu_entry_pane_t_ParamLimits

0xf7d2,	// (0x00052448) field_vitu_entry_pane_t

0x2512,	// (0x00045188) bg_button_pane_cp05_ParamLimits

0x2512,	// (0x00045188) bg_button_pane_cp05

0x2deb,	// (0x00045a61) cell_vitu_itu_pane_g1

0xee1d,	// (0x00051a93) cell_vitu_itu_pane_t1_ParamLimits

0xee1d,	// (0x00051a93) cell_vitu_itu_pane_t1

0xee1d,	// (0x00051a93) cell_vitu_itu_pane_t2_ParamLimits

0xee1d,	// (0x00051a93) cell_vitu_itu_pane_t2

0x0002,

0xf7d7,	// (0x0005244d) cell_vitu_itu_pane_t_ParamLimits

0xf7d7,	// (0x0005244d) cell_vitu_itu_pane_t

0xd7d4,	// (0x0005044a) bg_button_pane_cp07

0xe183,	// (0x00050df9) cell_vitu_function_pane_g1

0x6376,	// (0x00048fec) main_calc_pane_g1

0x601f,	// (0x00048c95) aid_visual_content_pane

0x6241,	// (0x00048eb7) main_vradio_pane

0xded2,	// (0x00050b48) main_vradio_pane_g1_ParamLimits

0xded2,	// (0x00050b48) main_vradio_pane_g1

0xded2,	// (0x00050b48) main_vradio_pane_g2_ParamLimits

0xded2,	// (0x00050b48) main_vradio_pane_g2

0x0001,

0xf7de,	// (0x00052454) main_vradio_pane_g_ParamLimits

0xf7de,	// (0x00052454) main_vradio_pane_g

0xe155,	// (0x00050dcb) main_vradio_pane_t1_ParamLimits

0xe155,	// (0x00050dcb) main_vradio_pane_t1

0xe155,	// (0x00050dcb) main_vradio_pane_t2_ParamLimits

0xe155,	// (0x00050dcb) main_vradio_pane_t2

0xe155,	// (0x00050dcb) main_vradio_pane_t3_ParamLimits

0xe155,	// (0x00050dcb) main_vradio_pane_t3

0x0002,

0xf7e3,	// (0x00052459) main_vradio_pane_t_ParamLimits

0xf7e3,	// (0x00052459) main_vradio_pane_t

0xe147,	// (0x00050dbd) vradio_rocker_control_pane_ParamLimits

0xe147,	// (0x00050dbd) vradio_rocker_control_pane

0xe147,	// (0x00050dbd) vradio_station_info_pane_ParamLimits

0xe147,	// (0x00050dbd) vradio_station_info_pane

0xebdb,	// (0x00051851) vradio_frequency_info_pane_ParamLimits

0xebdb,	// (0x00051851) vradio_frequency_info_pane

0xe183,	// (0x00050df9) vradio_station_info_pane_g1

0xee1d,	// (0x00051a93) vradio_station_info_pane_t1_ParamLimits

0xee1d,	// (0x00051a93) vradio_station_info_pane_t1

0xe155,	// (0x00050dcb) vradio_station_info_pane_t2_ParamLimits

0xe155,	// (0x00050dcb) vradio_station_info_pane_t2

0x0001,

0xf7ea,	// (0x00052460) vradio_station_info_pane_t_ParamLimits

0xf7ea,	// (0x00052460) vradio_station_info_pane_t

0xd7d4,	// (0x0005044a) vradio_tuning_pane

0x9a75,	// (0x0004c6eb) vradio_rocker_control_pane_g1

0x2e07,	// (0x00045a7d) vradio_rocker_control_pane_g2

0x9a7d,	// (0x0004c6f3) vradio_rocker_control_pane_g3

0x9a85,	// (0x0004c6fb) vradio_rocker_control_pane_g4

0x9a8d,	// (0x0004c703) vradio_rocker_control_pane_g5

0x0004,

0xf7ef,	// (0x00052465) vradio_rocker_control_pane_g

0xe183,	// (0x00050df9) vradio_frequency_info_pane_g1

0xebc7,	// (0x0005183d) vradio_frequency_info_pane_t1_ParamLimits

0xebc7,	// (0x0005183d) vradio_frequency_info_pane_t1

0x9a95,	// (0x0004c70b) vradio_tuning_pane_g1

0x9a9e,	// (0x0004c714) vradio_tuning_pane_t1

0x605e,	// (0x00048cd4) area_side_right_pane_ParamLimits

0x605e,	// (0x00048cd4) area_side_right_pane

0x2430,	// (0x000450a6) status_small_pane_g1

0x2438,	// (0x000450ae) status_small_pane_g2

0x2441,	// (0x000450b7) status_small_pane_g3

0x244a,	// (0x000450c0) status_small_pane_g4

0x0003,

0xf5b6,	// (0x0005222c) status_small_pane_g

0x2453,	// (0x000450c9) status_small_pane_t1

0x6241,	// (0x00048eb7) main_video3_pane

0x2e0f,	// (0x00045a85) cams_zoom_vslider_pane

0x2e17,	// (0x00045a8d) image3_wide_pane_ParamLimits

0x2e17,	// (0x00045a8d) image3_wide_pane

0x2e31,	// (0x00045aa7) image3_wide_small_pane

0x2e3b,	// (0x00045ab1) main_video3_pane_g1_ParamLimits

0x2e3b,	// (0x00045ab1) main_video3_pane_g1

0x2e57,	// (0x00045acd) main_video3_pane_g2_ParamLimits

0x2e57,	// (0x00045acd) main_video3_pane_g2

0x0001,

0xf7fa,	// (0x00052470) main_video3_pane_g_ParamLimits

0xf7fa,	// (0x00052470) main_video3_pane_g

0x2e73,	// (0x00045ae9) main_video3_pane_t1_ParamLimits

0x2e73,	// (0x00045ae9) main_video3_pane_t1

0x2e9e,	// (0x00045b14) main_video3_pane_t2_ParamLimits

0x2e9e,	// (0x00045b14) main_video3_pane_t2

0x2ec9,	// (0x00045b3f) main_video3_pane_t3_ParamLimits

0x2ec9,	// (0x00045b3f) main_video3_pane_t3

0x0002,

0xf7ff,	// (0x00052475) main_video3_pane_t_ParamLimits

0xf7ff,	// (0x00052475) main_video3_pane_t

0x2ef4,	// (0x00045b6a) cams_zoom_vslider_pane_g1

0x2efd,	// (0x00045b73) cams_zoom_vslider_pane_g2

0x0001,

0xf806,	// (0x0005247c) cams_zoom_vslider_pane_g

0x2f05,	// (0x00045b7b) small_slider_vertical_pane

0xe183,	// (0x00050df9) small_slider_vertical_pane_g1

0xe183,	// (0x00050df9) small_slider_vertical_pane_g2

0x2f0d,	// (0x00045b83) small_slider_vertical_pane_g3

0x0002,

0xf80b,	// (0x00052481) small_slider_vertical_pane_g

0x6241,	// (0x00048eb7) main_hwr_training_pane

0x2f16,	// (0x00045b8c) hwr_training_instruct_pane_ParamLimits

0x2f16,	// (0x00045b8c) hwr_training_instruct_pane

0x9aad,	// (0x0004c723) hwr_training_navi_pane_ParamLimits

0x9aad,	// (0x0004c723) hwr_training_navi_pane

0x9ac1,	// (0x0004c737) hwr_training_write_pane_ParamLimits

0x9ac1,	// (0x0004c737) hwr_training_write_pane

0xd7d4,	// (0x0005044a) bg_frame_shadow_pane

0x2f45,	// (0x00045bbb) hwr_training_write_pane_g1

0x2f4d,	// (0x00045bc3) hwr_training_write_pane_g2

0x2f55,	// (0x00045bcb) hwr_training_write_pane_g3

0x2f5d,	// (0x00045bd3) hwr_training_write_pane_g4

0x2f65,	// (0x00045bdb) hwr_training_write_pane_g5

0x2f6d,	// (0x00045be3) hwr_training_write_pane_g6

0x2f75,	// (0x00045beb) hwr_training_write_pane_g7

0x0006,

0xf812,	// (0x00052488) hwr_training_write_pane_g

0x9aef,	// (0x0004c765) hwr_training_navi_pane_g1_ParamLimits

0x9aef,	// (0x0004c765) hwr_training_navi_pane_g1

0x9b01,	// (0x0004c777) hwr_training_navi_pane_g2_ParamLimits

0x9b01,	// (0x0004c777) hwr_training_navi_pane_g2

0x9b13,	// (0x0004c789) hwr_training_navi_pane_g3_ParamLimits

0x9b13,	// (0x0004c789) hwr_training_navi_pane_g3

0x9b23,	// (0x0004c799) hwr_training_navi_pane_g4_ParamLimits

0x9b23,	// (0x0004c799) hwr_training_navi_pane_g4

0x0004,

0xf821,	// (0x00052497) hwr_training_navi_pane_g_ParamLimits

0xf821,	// (0x00052497) hwr_training_navi_pane_g

0x9b3d,	// (0x0004c7b3) hwr_training_navi_pane_t1

0x9b4b,	// (0x0004c7c1) list_single_hwr_training_instruct_pane_ParamLimits

0x9b4b,	// (0x0004c7c1) list_single_hwr_training_instruct_pane

0x2f7d,	// (0x00045bf3) list_single_hwr_training_instruct_pane_t1

0x2774,	// (0x000453ea) bg_frame_shadow_pane_g1

0x2f8c,	// (0x00045c02) bg_frame_shadow_pane_g2

0x2f94,	// (0x00045c0a) bg_frame_shadow_pane_g3

0x2f9c,	// (0x00045c12) bg_frame_shadow_pane_g4

0x2fa4,	// (0x00045c1a) bg_frame_shadow_pane_g5

0x2fac,	// (0x00045c22) bg_frame_shadow_pane_g6

0x2fb4,	// (0x00045c2a) bg_frame_shadow_pane_g7

0xdffb,	// (0x00050c71) bg_frame_shadow_pane_g8

0x0007,

0xf82c,	// (0x000524a2) bg_frame_shadow_pane_g

0x6241,	// (0x00048eb7) main_video_tele_dialer_pane

0x9b63,	// (0x0004c7d9) aid_size_cell_video_keypad_ParamLimits

0x9b63,	// (0x0004c7d9) aid_size_cell_video_keypad

0x9b73,	// (0x0004c7e9) grid_video_dialer_keypad_pane_ParamLimits

0x9b73,	// (0x0004c7e9) grid_video_dialer_keypad_pane

0x9ba3,	// (0x0004c819) video_down_pane_cp_ParamLimits

0x9ba3,	// (0x0004c819) video_down_pane_cp

0x9bcb,	// (0x0004c841) cell_video_dialer_keypad_pane_ParamLimits

0x9bcb,	// (0x0004c841) cell_video_dialer_keypad_pane

0x2fbc,	// (0x00045c32) bg_button_pane_cp08_ParamLimits

0x2fbc,	// (0x00045c32) bg_button_pane_cp08

0x9be0,	// (0x0004c856) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9be0,	// (0x0004c856) cell_video_dialer_keypad_pane_g1

0x9609,	// (0x0004c27f) mup3_rocker2_pane_ParamLimits

0x9609,	// (0x0004c27f) mup3_rocker2_pane

0xe183,	// (0x00050df9) mup3_rocker2_pane_g1

0x8aa3,	// (0x0004b719) main_dialer2_pane

0x6241,	// (0x00048eb7) main_mp4_pane

0x9c35,	// (0x0004c8ab) main_mp4_pane_g1_ParamLimits

0x9c35,	// (0x0004c8ab) main_mp4_pane_g1

0x9c43,	// (0x0004c8b9) main_mp4_pane_g2_ParamLimits

0x9c43,	// (0x0004c8b9) main_mp4_pane_g2

0x9c51,	// (0x0004c8c7) main_mp4_pane_g3_ParamLimits

0x9c51,	// (0x0004c8c7) main_mp4_pane_g3

0x9c86,	// (0x0004c8fc) main_mp4_pane_g4_ParamLimits

0x9c86,	// (0x0004c8fc) main_mp4_pane_g4

0x9cb4,	// (0x0004c92a) main_mp4_pane_g5_ParamLimits

0x9cb4,	// (0x0004c92a) main_mp4_pane_g5

0x0007,

0xf84c,	// (0x000524c2) main_mp4_pane_g_ParamLimits

0xf84c,	// (0x000524c2) main_mp4_pane_g

0x9d28,	// (0x0004c99e) main_mp4_pane_t1_ParamLimits

0x9d28,	// (0x0004c99e) main_mp4_pane_t1

0x9d80,	// (0x0004c9f6) main_mp4_pane_t2_ParamLimits

0x9d80,	// (0x0004c9f6) main_mp4_pane_t2

0x2fc8,	// (0x00045c3e) main_mp4_pane_t3_ParamLimits

0x2fc8,	// (0x00045c3e) main_mp4_pane_t3

0x9dd2,	// (0x0004ca48) main_mp4_pane_t4_ParamLimits

0x9dd2,	// (0x0004ca48) main_mp4_pane_t4

0x0003,

0xf85d,	// (0x000524d3) main_mp4_pane_t_ParamLimits

0xf85d,	// (0x000524d3) main_mp4_pane_t

0x9e12,	// (0x0004ca88) mp4_progress_pane_ParamLimits

0x9e12,	// (0x0004ca88) mp4_progress_pane

0x9e56,	// (0x0004cacc) mp4_rocker_pane_ParamLimits

0x9e56,	// (0x0004cacc) mp4_rocker_pane

0x2ff6,	// (0x00045c6c) mp4_progress_pane_t1

0x300d,	// (0x00045c83) mp4_progress_pane_t2

0x0001,

0xf866,	// (0x000524dc) mp4_progress_pane_t

0x3024,	// (0x00045c9a) mup_progress_pane_cp04

0x3801,	// (0x00046477) mp4_rocker_pane_g1

0x622b,	// (0x00048ea1) aid_cell_size_keypad2_ParamLimits

0x622b,	// (0x00048ea1) aid_cell_size_keypad2

0x9e74,	// (0x0004caea) dialer2_ne_pane_ParamLimits

0x9e74,	// (0x0004caea) dialer2_ne_pane

0x622b,	// (0x00048ea1) grid_dialer2_keypad_pane_ParamLimits

0x622b,	// (0x00048ea1) grid_dialer2_keypad_pane

0x2504,	// (0x0004517a) bg_popup_call_pane_cp07_ParamLimits

0x2504,	// (0x0004517a) bg_popup_call_pane_cp07

0xebc7,	// (0x0005183d) dialer2_ne_pane_t1_ParamLimits

0xebc7,	// (0x0005183d) dialer2_ne_pane_t1

0x9e83,	// (0x0004caf9) cell_dialer2_keypad_pane_ParamLimits

0x9e83,	// (0x0004caf9) cell_dialer2_keypad_pane

0x3030,	// (0x00045ca6) bg_button_pane_pane_cp04_ParamLimits

0x3030,	// (0x00045ca6) bg_button_pane_pane_cp04

0xdec4,	// (0x00050b3a) cell_dialer2_keypad_pane_g1_ParamLimits

0xdec4,	// (0x00050b3a) cell_dialer2_keypad_pane_g1

0x6e22,	// (0x00049a98) aid_placing_vt_set_content_ParamLimits

0x6e22,	// (0x00049a98) aid_placing_vt_set_content

0x6e48,	// (0x00049abe) aid_placing_vt_set_title_ParamLimits

0x6e48,	// (0x00049abe) aid_placing_vt_set_title

0x6241,	// (0x00048eb7) main_image3_pane

0x9eb7,	// (0x0004cb2d) area_side_right_pane_cp01_ParamLimits

0x9eb7,	// (0x0004cb2d) area_side_right_pane_cp01

0x9ee4,	// (0x0004cb5a) main_image3_pane_g1_ParamLimits

0x9ee4,	// (0x0004cb5a) main_image3_pane_g1

0x9ef2,	// (0x0004cb68) main_image3_pane_g2_ParamLimits

0x9ef2,	// (0x0004cb68) main_image3_pane_g2

0x9f09,	// (0x0004cb7f) main_image3_pane_g3_ParamLimits

0x9f09,	// (0x0004cb7f) main_image3_pane_g3

0x9f20,	// (0x0004cb96) main_image3_pane_g4_ParamLimits

0x9f20,	// (0x0004cb96) main_image3_pane_g4

0x0003,

0xf875,	// (0x000524eb) main_image3_pane_g_ParamLimits

0xf875,	// (0x000524eb) main_image3_pane_g

0x9f37,	// (0x0004cbad) main_image3_pane_t1_ParamLimits

0x9f37,	// (0x0004cbad) main_image3_pane_t1

0x9f5c,	// (0x0004cbd2) main_image3_pane_t2_ParamLimits

0x9f5c,	// (0x0004cbd2) main_image3_pane_t2

0x9f7b,	// (0x0004cbf1) main_image3_pane_t3_ParamLimits

0x9f7b,	// (0x0004cbf1) main_image3_pane_t3

0x0003,

0xf87e,	// (0x000524f4) main_image3_pane_t_ParamLimits

0xf87e,	// (0x000524f4) main_image3_pane_t

0xe147,	// (0x00050dbd) grid_sctrl_middle_pane_cp01_ParamLimits

0xe147,	// (0x00050dbd) grid_sctrl_middle_pane_cp01

0x9fd6,	// (0x0004cc4c) cell_sctrl_middle_pane_cp01_ParamLimits

0x9fd6,	// (0x0004cc4c) cell_sctrl_middle_pane_cp01

0x9fe7,	// (0x0004cc5d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9fe7,	// (0x0004cc5d) cell_sctrl_middle_pane_cp01_g1

0x6241,	// (0x00048eb7) main_call4_pane

0x9ff4,	// (0x0004cc6a) aid_size_button_call4_ParamLimits

0x9ff4,	// (0x0004cc6a) aid_size_button_call4

0xa01e,	// (0x0004cc94) call4_windows_pane_ParamLimits

0xa01e,	// (0x0004cc94) call4_windows_pane

0xa032,	// (0x0004cca8) grid_call4_button_pane_ParamLimits

0xa032,	// (0x0004cca8) grid_call4_button_pane

0x3064,	// (0x00045cda) call4_windows_conf_pane

0x3077,	// (0x00045ced) popup_call4_audio_first_window_ParamLimits

0x3077,	// (0x00045ced) popup_call4_audio_first_window

0x30b7,	// (0x00045d2d) popup_call4_audio_second_window_ParamLimits

0x30b7,	// (0x00045d2d) popup_call4_audio_second_window

0x30c9,	// (0x00045d3f) popup_call4_audio_wait_window_ParamLimits

0x30c9,	// (0x00045d3f) popup_call4_audio_wait_window

0xa054,	// (0x0004ccca) cell_call4_button_pane_ParamLimits

0xa054,	// (0x0004ccca) cell_call4_button_pane

0xdfa5,	// (0x00050c1b) bg_button_pane_cp09_ParamLimits

0xdfa5,	// (0x00050c1b) bg_button_pane_cp09

0xa077,	// (0x0004cced) cell_call4_button_pane_g1_ParamLimits

0xa077,	// (0x0004cced) cell_call4_button_pane_g1

0xa084,	// (0x0004ccfa) cell_call4_button_pane_t1_ParamLimits

0xa084,	// (0x0004ccfa) cell_call4_button_pane_t1

0x30dd,	// (0x00045d53) popup_call4_audio_conf_window_ParamLimits

0x30dd,	// (0x00045d53) popup_call4_audio_conf_window

0x963a,	// (0x0004c2b0) mup3_progress_pane_t1_ParamLimits

0x9658,	// (0x0004c2ce) mup3_progress_pane_t2_ParamLimits

0x2b1e,	// (0x00045794) mup3_progress_pane_t3_ParamLimits

0xf74e,	// (0x000523c4) mup3_progress_pane_t_ParamLimits

0x2b3b,	// (0x000457b1) mup_progress_pane_cp03_ParamLimits

0x9a5f,	// (0x0004c6d5) mup3_control_keys_pane_g4_copy1

0x9e40,	// (0x0004cab6) mp4_rocker2_pane_ParamLimits

0x9e40,	// (0x0004cab6) mp4_rocker2_pane

0x30f9,	// (0x00045d6f) mp4_rocker2_pane_g1

0x30f1,	// (0x00045d67) mp4_rocker2_pane_g2

0xa0c8,	// (0x0004cd3e) mp4_rocker2_pane_g3

0xa0d0,	// (0x0004cd46) mp4_rocker2_pane_g4

0xa0d8,	// (0x0004cd4e) mp4_rocker2_pane_g5

0x0004,

0xf887,	// (0x000524fd) mp4_rocker2_pane_g

0x6241,	// (0x00048eb7) main_camera4_pane

0x6241,	// (0x00048eb7) main_video4_pane

0x9b7f,	// (0x0004c7f5) main_video_tele_dialer_pane_t1_ParamLimits

0x9b7f,	// (0x0004c7f5) main_video_tele_dialer_pane_t1

0x9b91,	// (0x0004c807) main_video_tele_dialer_pane_t2_ParamLimits

0x9b91,	// (0x0004c807) main_video_tele_dialer_pane_t2

0x0001,

0xf83d,	// (0x000524b3) main_video_tele_dialer_pane_t_ParamLimits

0xf83d,	// (0x000524b3) main_video_tele_dialer_pane_t

0xa0f6,	// (0x0004cd6c) cam4_autofocus_pane_ParamLimits

0xa0f6,	// (0x0004cd6c) cam4_autofocus_pane

0xa10c,	// (0x0004cd82) cam4_image_uncrop_pane_ParamLimits

0xa10c,	// (0x0004cd82) cam4_image_uncrop_pane

0xa121,	// (0x0004cd97) cam4_indicators_pane_ParamLimits

0xa121,	// (0x0004cd97) cam4_indicators_pane

0xa13b,	// (0x0004cdb1) main_camera4_pane_g1_ParamLimits

0xa13b,	// (0x0004cdb1) main_camera4_pane_g1

0xa147,	// (0x0004cdbd) main_camera4_pane_g2_ParamLimits

0xa147,	// (0x0004cdbd) main_camera4_pane_g2

0xa147,	// (0x0004cdbd) main_camera4_pane_g3_ParamLimits

0xa147,	// (0x0004cdbd) main_camera4_pane_g3

0xa153,	// (0x0004cdc9) main_camera4_pane_g4_ParamLimits

0xa153,	// (0x0004cdc9) main_camera4_pane_g4

0xa15f,	// (0x0004cdd5) main_camera4_pane_g5_ParamLimits

0xa15f,	// (0x0004cdd5) main_camera4_pane_g5

0x0005,

0xf892,	// (0x00052508) main_camera4_pane_g_ParamLimits

0xf892,	// (0x00052508) main_camera4_pane_g

0xa179,	// (0x0004cdef) main_camera4_pane_t1_ParamLimits

0xa179,	// (0x0004cdef) main_camera4_pane_t1

0xa1c1,	// (0x0004ce37) bg_tb_trans_pane_cp06

0xa1d7,	// (0x0004ce4d) cam4_indicators_pane_g1

0xa1e7,	// (0x0004ce5d) cam4_indicators_pane_g2

0x0002,

0xf8ad,	// (0x00052523) cam4_indicators_pane_g

0xa207,	// (0x0004ce7d) cam4_indicators_pane_t1

0xa22f,	// (0x0004cea5) main_video4_pane_g1_ParamLimits

0xa22f,	// (0x0004cea5) main_video4_pane_g1

0xa147,	// (0x0004cdbd) main_video4_pane_g2_ParamLimits

0xa147,	// (0x0004cdbd) main_video4_pane_g2

0xa147,	// (0x0004cdbd) main_video4_pane_g3_ParamLimits

0xa147,	// (0x0004cdbd) main_video4_pane_g3

0xa153,	// (0x0004cdc9) main_video4_pane_g4_ParamLimits

0xa153,	// (0x0004cdc9) main_video4_pane_g4

0x0004,

0xf8b4,	// (0x0005252a) main_video4_pane_g_ParamLimits

0xf8b4,	// (0x0005252a) main_video4_pane_g

0xa243,	// (0x0004ceb9) vid4_indicators_pane_ParamLimits

0xa243,	// (0x0004ceb9) vid4_indicators_pane

0xa261,	// (0x0004ced7) video4_image_uncrop_cif_pane_ParamLimits

0xa261,	// (0x0004ced7) video4_image_uncrop_cif_pane

0xa26e,	// (0x0004cee4) video4_image_uncrop_nhd_pane_ParamLimits

0xa26e,	// (0x0004cee4) video4_image_uncrop_nhd_pane

0xa10c,	// (0x0004cd82) video4_image_uncrop_vga_pane_ParamLimits

0xa10c,	// (0x0004cd82) video4_image_uncrop_vga_pane

0x8a95,	// (0x0004b70b) bg_tb_trans_pane_cp07

0xa1d7,	// (0x0004ce4d) vid4_indicators_pane_g1

0xa27b,	// (0x0004cef1) vid4_indicators_pane_g2

0xa28b,	// (0x0004cf01) vid4_indicators_pane_g3

0x0004,

0xf8bf,	// (0x00052535) vid4_indicators_pane_g

0xa2b8,	// (0x0004cf2e) vid4_indicators_pane_t1

0xa2d2,	// (0x0004cf48) cam4_autofocus_pane_g1

0xa2da,	// (0x0004cf50) cam4_autofocus_pane_g2

0xa2e2,	// (0x0004cf58) cam4_autofocus_pane_g3

0x0002,

0xf8ca,	// (0x00052540) cam4_autofocus_pane_g

0xa2ea,	// (0x0004cf60) cam4_autofocus_pane_g3_copy1

0x9baf,	// (0x0004c825) video_down_pane_cp_t1

0x9bbd,	// (0x0004c833) video_down_pane_cp_t2

0x0001,

0xf842,	// (0x000524b8) video_down_pane_cp_t

0x622b,	// (0x00048ea1) popup_vitu2_window_ParamLimits

0x622b,	// (0x00048ea1) popup_vitu2_window

0xa2f2,	// (0x0004cf68) aid_size_cell2_itu2_ParamLimits

0xa2f2,	// (0x0004cf68) aid_size_cell2_itu2

0xa314,	// (0x0004cf8a) aid_size_cell_itu2_ParamLimits

0xa314,	// (0x0004cf8a) aid_size_cell_itu2

0xa352,	// (0x0004cfc8) bg_popup_window_pane_cp09_ParamLimits

0xa352,	// (0x0004cfc8) bg_popup_window_pane_cp09

0xa360,	// (0x0004cfd6) field_vitu2_entry_pane_ParamLimits

0xa360,	// (0x0004cfd6) field_vitu2_entry_pane

0xa376,	// (0x0004cfec) grid_vitu2_function_pane_ParamLimits

0xa376,	// (0x0004cfec) grid_vitu2_function_pane

0xa3a8,	// (0x0004d01e) grid_vitu2_itu_pane_ParamLimits

0xa3a8,	// (0x0004d01e) grid_vitu2_itu_pane

0xa402,	// (0x0004d078) cell_vitu2_itu_pane_ParamLimits

0xa402,	// (0x0004d078) cell_vitu2_itu_pane

0xa41a,	// (0x0004d090) cell_vitu2_function_pane_ParamLimits

0xa41a,	// (0x0004d090) cell_vitu2_function_pane

0x3101,	// (0x00045d77) bg_popup_call_pane_cp08_ParamLimits

0x3101,	// (0x00045d77) bg_popup_call_pane_cp08

0x3118,	// (0x00045d8e) field_vitu2_entry_pane_g1

0x3124,	// (0x00045d9a) field_vitu2_entry_pane_g2

0x0002,

0xf8d1,	// (0x00052547) field_vitu2_entry_pane_g

0xa459,	// (0x0004d0cf) field_vitu2_entry_pane_t1_ParamLimits

0xa459,	// (0x0004d0cf) field_vitu2_entry_pane_t1

0x3130,	// (0x00045da6) field_vitu2_entry_pane_t2_ParamLimits

0x3130,	// (0x00045da6) field_vitu2_entry_pane_t2

0x0001,

0xf8d8,	// (0x0005254e) field_vitu2_entry_pane_t_ParamLimits

0xf8d8,	// (0x0005254e) field_vitu2_entry_pane_t

0xa488,	// (0x0004d0fe) bg_button_pane_cp010_ParamLimits

0xa488,	// (0x0004d0fe) bg_button_pane_cp010

0xa496,	// (0x0004d10c) cell_vitu2_itu_pane_g1

0xa4b6,	// (0x0004d12c) cell_vitu2_itu_pane_t1_ParamLimits

0xa4b6,	// (0x0004d12c) cell_vitu2_itu_pane_t1

0x5f0b,	// (0x00048b81) cell_vitu2_itu_pane_t2_ParamLimits

0x5f0b,	// (0x00048b81) cell_vitu2_itu_pane_t2

0x0002,

0xf8e2,	// (0x00052558) cell_vitu2_itu_pane_t_ParamLimits

0xf8e2,	// (0x00052558) cell_vitu2_itu_pane_t

0x8a95,	// (0x0004b70b) bg_button_pane_cp011

0xa502,	// (0x0004d178) cell_vitu2_function_pane_g1

0x6241,	// (0x00048eb7) main_myfav_hc_pane

0x9fbb,	// (0x0004cc31) popup_image3_note_pane_ParamLimits

0x9fbb,	// (0x0004cc31) popup_image3_note_pane

0x9fc7,	// (0x0004cc3d) popup_image3_tool_bar_pane_ParamLimits

0x9fc7,	// (0x0004cc3d) popup_image3_tool_bar_pane

0x5f81,	// (0x00048bf7) cell_vitu2_itu_pane_t3_ParamLimits

0x5f81,	// (0x00048bf7) cell_vitu2_itu_pane_t3

0xd7d4,	// (0x0005044a) bg_popup_trans_pane

0x3155,	// (0x00045dcb) grid_image3_tool_bar_pane

0x315f,	// (0x00045dd5) bg_popup_trans_pane_g1

0xe3a1,	// (0x00051017) bg_popup_trans_pane_g2

0x3167,	// (0x00045ddd) bg_popup_trans_pane_g3

0x316f,	// (0x00045de5) bg_popup_trans_pane_g4

0x3177,	// (0x00045ded) bg_popup_trans_pane_g5

0x317f,	// (0x00045df5) bg_popup_trans_pane_g6

0x3187,	// (0x00045dfd) bg_popup_trans_pane_g7

0x318f,	// (0x00045e05) bg_popup_trans_pane_g8

0xe381,	// (0x00050ff7) bg_popup_trans_pane_g9

0x0008,

0xf8e9,	// (0x0005255f) bg_popup_trans_pane_g

0x3197,	// (0x00045e0d) cell_image3_tool_bar_pane_ParamLimits

0x3197,	// (0x00045e0d) cell_image3_tool_bar_pane

0xe183,	// (0x00050df9) cell_image3_tool_bar_pane_g1

0xd7d4,	// (0x0005044a) bg_popup_trans_pane_cp1

0x31ab,	// (0x00045e21) popup_image3_note_pane_t1

0x31b9,	// (0x00045e2f) popup_image3_note_pane_t2

0x31c7,	// (0x00045e3d) popup_image3_note_pane_t3

0x0002,

0xf8fc,	// (0x00052572) popup_image3_note_pane_t

0x31d5,	// (0x00045e4b) popup_image3_note_pane_t3_copy1

0xa516,	// (0x0004d18c) bg_myfav_hc_instruction_pane_ParamLimits

0xa516,	// (0x0004d18c) bg_myfav_hc_instruction_pane

0xa528,	// (0x0004d19e) cell_myfav_contact_pane_ParamLimits

0xa528,	// (0x0004d19e) cell_myfav_contact_pane

0xa542,	// (0x0004d1b8) cell_myfav_contact_pane_cp1_ParamLimits

0xa542,	// (0x0004d1b8) cell_myfav_contact_pane_cp1

0xa558,	// (0x0004d1ce) cell_myfav_contact_pane_cp2_ParamLimits

0xa558,	// (0x0004d1ce) cell_myfav_contact_pane_cp2

0xa56e,	// (0x0004d1e4) cell_myfav_contact_pane_cp3_ParamLimits

0xa56e,	// (0x0004d1e4) cell_myfav_contact_pane_cp3

0xa583,	// (0x0004d1f9) cell_myfav_contact_pane_cp4_ParamLimits

0xa583,	// (0x0004d1f9) cell_myfav_contact_pane_cp4

0xa597,	// (0x0004d20d) cell_myfav_contact_pane_cp5_ParamLimits

0xa597,	// (0x0004d20d) cell_myfav_contact_pane_cp5

0xa5ab,	// (0x0004d221) cell_myfav_contact_pane_cp6_ParamLimits

0xa5ab,	// (0x0004d221) cell_myfav_contact_pane_cp6

0xa5bf,	// (0x0004d235) cell_myfav_contact_pane_cp7_ParamLimits

0xa5bf,	// (0x0004d235) cell_myfav_contact_pane_cp7

0x31e3,	// (0x00045e59) listscroll_gen_pane_cp05

0xa5d7,	// (0x0004d24d) main_myfav_hc_pane_g1_ParamLimits

0xa5d7,	// (0x0004d24d) main_myfav_hc_pane_g1

0xa5ed,	// (0x0004d263) main_myfav_hc_pane_g2_ParamLimits

0xa5ed,	// (0x0004d263) main_myfav_hc_pane_g2

0x0002,

0xf903,	// (0x00052579) main_myfav_hc_pane_g_ParamLimits

0xf903,	// (0x00052579) main_myfav_hc_pane_g

0xa617,	// (0x0004d28d) main_myfav_hc_pane_t1_ParamLimits

0xa617,	// (0x0004d28d) main_myfav_hc_pane_t1

0x31ec,	// (0x00045e62) main_myfav_hc_pane_t2_ParamLimits

0x31ec,	// (0x00045e62) main_myfav_hc_pane_t2

0x31fe,	// (0x00045e74) main_myfav_hc_pane_t3_ParamLimits

0x31fe,	// (0x00045e74) main_myfav_hc_pane_t3

0xa62c,	// (0x0004d2a2) main_myfav_hc_pane_t4_ParamLimits

0xa62c,	// (0x0004d2a2) main_myfav_hc_pane_t4

0x0004,

0xf90a,	// (0x00052580) main_myfav_hc_pane_t_ParamLimits

0xf90a,	// (0x00052580) main_myfav_hc_pane_t

0xe183,	// (0x00050df9) bg_myfav_hc_instruction_pane_g1

0x3210,	// (0x00045e86) cell_myfav_contact_pane_g1_ParamLimits

0x3210,	// (0x00045e86) cell_myfav_contact_pane_g1

0x3210,	// (0x00045e86) cell_myfav_contact_pane_g2_ParamLimits

0x3210,	// (0x00045e86) cell_myfav_contact_pane_g2

0x321c,	// (0x00045e92) cell_myfav_contact_pane_g3_ParamLimits

0x321c,	// (0x00045e92) cell_myfav_contact_pane_g3

0xded2,	// (0x00050b48) cell_myfav_contact_pane_g4_ParamLimits

0xded2,	// (0x00050b48) cell_myfav_contact_pane_g4

0x3229,	// (0x00045e9f) cell_myfav_contact_pane_g5_ParamLimits

0x3229,	// (0x00045e9f) cell_myfav_contact_pane_g5

0x0004,

0xf915,	// (0x0005258b) cell_myfav_contact_pane_g_ParamLimits

0xf915,	// (0x0005258b) cell_myfav_contact_pane_g

0xa603,	// (0x0004d279) main_myfav_hc_pane_g3_ParamLimits

0xa603,	// (0x0004d279) main_myfav_hc_pane_g3

0x616f,	// (0x00048de5) popup_adpt_find_window

0xa650,	// (0x0004d2c6) afind_page_pane_ParamLimits

0xa650,	// (0x0004d2c6) afind_page_pane

0xa65d,	// (0x0004d2d3) aid_size_cell_afind_ParamLimits

0xa65d,	// (0x0004d2d3) aid_size_cell_afind

0xa677,	// (0x0004d2ed) bg_popup_sub_pane_cp09_ParamLimits

0xa677,	// (0x0004d2ed) bg_popup_sub_pane_cp09

0xa684,	// (0x0004d2fa) find_pane_cp01_ParamLimits

0xa684,	// (0x0004d2fa) find_pane_cp01

0x3235,	// (0x00045eab) grid_afind_control_pane_ParamLimits

0x3235,	// (0x00045eab) grid_afind_control_pane

0xa691,	// (0x0004d307) grid_afind_pane_ParamLimits

0xa691,	// (0x0004d307) grid_afind_pane

0xa6a7,	// (0x0004d31d) cell_afind_pane_ParamLimits

0xa6a7,	// (0x0004d31d) cell_afind_pane

0xe183,	// (0x00050df9) afind_page_pane_g1

0xa6dd,	// (0x0004d353) afind_page_pane_g2

0xa6e6,	// (0x0004d35c) afind_page_pane_g3

0x0002,

0xf920,	// (0x00052596) afind_page_pane_g

0xa6ef,	// (0x0004d365) afind_page_pane_t1

0x3249,	// (0x00045ebf) cell_afind_grid_control_pane_ParamLimits

0x3249,	// (0x00045ebf) cell_afind_grid_control_pane

0x3258,	// (0x00045ece) bg_button_pane_cp69_ParamLimits

0x3258,	// (0x00045ece) bg_button_pane_cp69

0xa70f,	// (0x0004d385) cell_afind_pane_g1_ParamLimits

0xa70f,	// (0x0004d385) cell_afind_pane_g1

0xa71c,	// (0x0004d392) cell_afind_pane_t1_ParamLimits

0xa71c,	// (0x0004d392) cell_afind_pane_t1

0xe18d,	// (0x00050e03) bg_button_pane_cp72

0x3264,	// (0x00045eda) cell_afind_grid_control_pane_g1

0x86ba,	// (0x0004b330) aid_image_placing_area_ParamLimits

0x86ba,	// (0x0004b330) aid_image_placing_area

0xdec4,	// (0x00050b3a) field_vitu_entry_pane_g1_ParamLimits

0xdec4,	// (0x00050b3a) field_vitu_entry_pane_g1

0xdec4,	// (0x00050b3a) field_vitu_entry_pane_g2_ParamLimits

0xdec4,	// (0x00050b3a) field_vitu_entry_pane_g2

0x0001,

0xf7cd,	// (0x00052443) field_vitu_entry_pane_g_ParamLimits

0xf7cd,	// (0x00052443) field_vitu_entry_pane_g

0x2deb,	// (0x00045a61) cell_vitu_itu_pane_g1_ParamLimits

0x2dce,	// (0x00045a44) cell_vitu_itu_pane_t3_ParamLimits

0x2dce,	// (0x00045a44) cell_vitu_itu_pane_t3

0x2ff6,	// (0x00045c6c) mp4_progress_pane_t1_ParamLimits

0x300d,	// (0x00045c83) mp4_progress_pane_t2_ParamLimits

0xf866,	// (0x000524dc) mp4_progress_pane_t_ParamLimits

0x3024,	// (0x00045c9a) mup_progress_pane_cp04_ParamLimits

0xa63e,	// (0x0004d2b4) main_myfav_hc_pane_t5_ParamLimits

0xa63e,	// (0x0004d2b4) main_myfav_hc_pane_t5

0x6027,	// (0x00048c9d) aid_zoom_text_primary

0x616f,	// (0x00048de5) popup_adpt_find_window_ParamLimits

0x8a95,	// (0x0004b70b) main_cam_set_pane

0xa12f,	// (0x0004cda5) cam4_zoom_pane_ParamLimits

0xa12f,	// (0x0004cda5) cam4_zoom_pane

0xa72e,	// (0x0004d3a4) main_cam_set_pane_g1_ParamLimits

0xa72e,	// (0x0004d3a4) main_cam_set_pane_g1

0xa73c,	// (0x0004d3b2) main_cam_set_pane_g2_ParamLimits

0xa73c,	// (0x0004d3b2) main_cam_set_pane_g2

0x0001,

0xf927,	// (0x0005259d) main_cam_set_pane_g_ParamLimits

0xf927,	// (0x0005259d) main_cam_set_pane_g

0xa748,	// (0x0004d3be) main_cam_set_pane_t1_ParamLimits

0xa748,	// (0x0004d3be) main_cam_set_pane_t1

0xa75a,	// (0x0004d3d0) main_cset_listscroll_pane_ParamLimits

0xa75a,	// (0x0004d3d0) main_cset_listscroll_pane

0xa788,	// (0x0004d3fe) main_cset_slider_pane_ParamLimits

0xa788,	// (0x0004d3fe) main_cset_slider_pane

0x3275,	// (0x00045eeb) main_cset_list_pane_ParamLimits

0x3275,	// (0x00045eeb) main_cset_list_pane

0x3285,	// (0x00045efb) scroll_pane_cp028

0xa7a7,	// (0x0004d41d) aid_area_touch_slider

0xa7c3,	// (0x0004d439) cset_slider_pane

0xa7e6,	// (0x0004d45c) main_cset_slider_pane_g1

0xa7fb,	// (0x0004d471) main_cset_slider_pane_g2

0x0011,

0xf92c,	// (0x000525a2) main_cset_slider_pane_g

0x32be,	// (0x00045f34) main_cset_slider_pane_t1

0xa8b7,	// (0x0004d52d) main_cset_slider_pane_t2

0xa8d1,	// (0x0004d547) main_cset_slider_pane_t3

0xa8eb,	// (0x0004d561) main_cset_slider_pane_t4

0xa905,	// (0x0004d57b) main_cset_slider_pane_t5

0xa91f,	// (0x0004d595) main_cset_slider_pane_t6

0xa934,	// (0x0004d5aa) main_cset_slider_pane_t7

0x000e,

0xf951,	// (0x000525c7) main_cset_slider_pane_t

0xaa38,	// (0x0004d6ae) cset_list_set_pane_ParamLimits

0xaa38,	// (0x0004d6ae) cset_list_set_pane

0x3358,	// (0x00045fce) aid_position_infowindow_above

0x3360,	// (0x00045fd6) aid_position_infowindow_below

0xaa48,	// (0x0004d6be) cset_list_set_pane_g1_ParamLimits

0xaa48,	// (0x0004d6be) cset_list_set_pane_g1

0xaa54,	// (0x0004d6ca) cset_list_set_pane_g3_ParamLimits

0xaa54,	// (0x0004d6ca) cset_list_set_pane_g3

0x0001,

0xf970,	// (0x000525e6) cset_list_set_pane_g_ParamLimits

0xf970,	// (0x000525e6) cset_list_set_pane_g

0xaa63,	// (0x0004d6d9) cset_list_set_pane_t1_ParamLimits

0xaa63,	// (0x0004d6d9) cset_list_set_pane_t1

0xebdb,	// (0x00051851) list_highlight_pane_cp021_ParamLimits

0xebdb,	// (0x00051851) list_highlight_pane_cp021

0xec4b,	// (0x000518c1) cset_slider_pane_g1

0xec5d,	// (0x000518d3) cset_slider_pane_g2

0xec54,	// (0x000518ca) cset_slider_pane_g3

0x0002,

0xf975,	// (0x000525eb) cset_slider_pane_g

0xaa78,	// (0x0004d6ee) aid_area_touch_cam4_zoom

0xaa80,	// (0x0004d6f6) cam4_zoom_cont_pane

0xaa88,	// (0x0004d6fe) cam4_zoom_pane_g1

0xaa90,	// (0x0004d706) cam4_zoom_pane_g2

0xaa98,	// (0x0004d70e) cam4_zoom_pane_g3

0x0002,

0xf97c,	// (0x000525f2) cam4_zoom_pane_g

0xaaa0,	// (0x0004d716) cam4_zoom_cont_pane_g1

0xaaa9,	// (0x0004d71f) cam4_zoom_cont_pane_g2

0xaab2,	// (0x0004d728) cam4_zoom_cont_pane_g3

0x0002,

0xf983,	// (0x000525f9) cam4_zoom_cont_pane_g

0xa00e,	// (0x0004cc84) call4_image_pane_ParamLimits

0xa00e,	// (0x0004cc84) call4_image_pane

0x3064,	// (0x00045cda) call4_windows_conf_pane_ParamLimits

0x3097,	// (0x00045d0d) popup_call4_audio_in_window_ParamLimits

0x3097,	// (0x00045d0d) popup_call4_audio_in_window

0xd7d4,	// (0x0005044a) bg_popup_call2_act_pane_cp02

0x30d5,	// (0x00045d4b) call4_list_conf_pane

0xe183,	// (0x00050df9) call4_image_pane_g1

0xe183,	// (0x00050df9) call4_image_pane_g2

0x0001,

0xf3ef,	// (0x00052065) call4_image_pane_g

0x3383,	// (0x00045ff9) list_single_graphic_popup_conf4_pane_ParamLimits

0x3383,	// (0x00045ff9) list_single_graphic_popup_conf4_pane

0xd7d4,	// (0x0005044a) list_highlight_pane_cp022

0x3390,	// (0x00046006) list_single_graphic_popup_conf4_pane_g1

0xe881,	// (0x000514f7) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf98a,	// (0x00052600) list_single_graphic_popup_conf4_pane_g

0x3398,	// (0x0004600e) list_single_graphic_popup_conf4_pane_t1

0x6f8c,	// (0x00049c02) popup_vtel_slider_window_ParamLimits

0x6f8c,	// (0x00049c02) popup_vtel_slider_window

0xe155,	// (0x00050dcb) dialer2_ne_pane_t2_ParamLimits

0xe155,	// (0x00050dcb) dialer2_ne_pane_t2

0x0001,

0xf86b,	// (0x000524e1) dialer2_ne_pane_t_ParamLimits

0xf86b,	// (0x000524e1) dialer2_ne_pane_t

0xebdb,	// (0x00051851) bg_popup_sub_pane_cp010_ParamLimits

0xebdb,	// (0x00051851) bg_popup_sub_pane_cp010

0xaabb,	// (0x0004d731) popup_vtel_slider_window_g1_ParamLimits

0xaabb,	// (0x0004d731) popup_vtel_slider_window_g1

0xaac7,	// (0x0004d73d) popup_vtel_slider_window_g2_ParamLimits

0xaac7,	// (0x0004d73d) popup_vtel_slider_window_g2

0x0003,

0xf98f,	// (0x00052605) popup_vtel_slider_window_g_ParamLimits

0xf98f,	// (0x00052605) popup_vtel_slider_window_g

0xab0d,	// (0x0004d783) vtel_slider_pane_ParamLimits

0xab0d,	// (0x0004d783) vtel_slider_pane

0xab1c,	// (0x0004d792) vtel_slider_pane_g1_ParamLimits

0xab1c,	// (0x0004d792) vtel_slider_pane_g1

0xab29,	// (0x0004d79f) vtel_slider_pane_g2_ParamLimits

0xab29,	// (0x0004d79f) vtel_slider_pane_g2

0xab36,	// (0x0004d7ac) vtel_slider_pane_g3_ParamLimits

0xab36,	// (0x0004d7ac) vtel_slider_pane_g3

0xab1c,	// (0x0004d792) vtel_slider_pane_g4_ParamLimits

0xab1c,	// (0x0004d792) vtel_slider_pane_g4

0xab43,	// (0x0004d7b9) vtel_slider_pane_g5_ParamLimits

0xab43,	// (0x0004d7b9) vtel_slider_pane_g5

0x0004,

0xf998,	// (0x0005260e) vtel_slider_pane_g_ParamLimits

0xf998,	// (0x0005260e) vtel_slider_pane_g

0x8a95,	// (0x0004b70b) main_gallery2_pane

0xa33a,	// (0x0004cfb0) aid_size_row_itut2_dropdow_list_ParamLimits

0xa33a,	// (0x0004cfb0) aid_size_row_itut2_dropdow_list

0xa38e,	// (0x0004d004) grid_vitu2_function_top_pane_ParamLimits

0xa38e,	// (0x0004d004) grid_vitu2_function_top_pane

0xa3cc,	// (0x0004d042) popup_vitu2_dropdown_list_window_ParamLimits

0xa3cc,	// (0x0004d042) popup_vitu2_dropdown_list_window

0xa3e6,	// (0x0004d05c) popup_vitu2_match_list_window

0xab50,	// (0x0004d7c6) cell_vitu2_function_top_pane_ParamLimits

0xab50,	// (0x0004d7c6) cell_vitu2_function_top_pane

0xab68,	// (0x0004d7de) cell_vitu2_function_top_pane_cp01_ParamLimits

0xab68,	// (0x0004d7de) cell_vitu2_function_top_pane_cp01

0xab84,	// (0x0004d7fa) cell_vitu2_function_top_wide_pane_ParamLimits

0xab84,	// (0x0004d7fa) cell_vitu2_function_top_wide_pane

0x8a95,	// (0x0004b70b) bg_button_pane_cp012

0xaba1,	// (0x0004d817) cell_vitu2_function_top_pane_g1

0xabb5,	// (0x0004d82b) bg_button_pane_cp013_ParamLimits

0xabb5,	// (0x0004d82b) bg_button_pane_cp013

0xabd1,	// (0x0004d847) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xabd1,	// (0x0004d847) cell_vitu2_function_top_wide_pane_g1

0x622b,	// (0x00048ea1) bg_popup_sub_pane_cp20

0xabe9,	// (0x0004d85f) list_vitu2_match_list_pane

0x315f,	// (0x00045dd5) bg_popup_sub_pane_cp20_g1

0x3167,	// (0x00045ddd) bg_popup_sub_pane_cp20_g2

0xe3a1,	// (0x00051017) bg_popup_sub_pane_cp20_g3

0x316f,	// (0x00045de5) bg_popup_sub_pane_cp20_g4

0xe381,	// (0x00050ff7) bg_popup_sub_pane_cp20_g5

0x33ae,	// (0x00046024) bg_popup_sub_pane_cp20_g6

0x317f,	// (0x00045df5) bg_popup_sub_pane_cp20_g7

0x3187,	// (0x00045dfd) bg_popup_sub_pane_cp20_g8

0x318f,	// (0x00045e05) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9a3,	// (0x00052619) bg_popup_sub_pane_cp20_g

0xac01,	// (0x0004d877) list_vitu2_match_list_item_pane_ParamLimits

0xac01,	// (0x0004d877) list_vitu2_match_list_item_pane

0xac13,	// (0x0004d889) list_vitu2_match_list_item_pane_t1

0x6241,	// (0x00048eb7) bg_popup_sub_pane_cp21

0xac21,	// (0x0004d897) grid_vitu2_dropdown_list_pane

0xac29,	// (0x0004d89f) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xac29,	// (0x0004d89f) cell_vitu2_dropdown_list_char_pane

0xac4a,	// (0x0004d8c0) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xac4a,	// (0x0004d8c0) cell_vitu2_dropdown_list_ctrl_pane

0x33d5,	// (0x0004604b) cell_vitu2_dropdown_list_char_pane_g1

0x33cc,	// (0x00046042) cell_vitu2_dropdown_list_char_pane_g2

0x33c3,	// (0x00046039) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9c0,	// (0x00052636) cell_vitu2_dropdown_list_char_pane_g

0xac74,	// (0x0004d8ea) cell_vitu2_dropdown_list_char_pane_t1

0xac82,	// (0x0004d8f8) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xac82,	// (0x0004d8f8) cell_vitu2_dropdown_list_ctrl_pane_g1

0xac92,	// (0x0004d908) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xac92,	// (0x0004d908) cell_vitu2_dropdown_list_ctrl_pane_g2

0xaca3,	// (0x0004d919) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xaca3,	// (0x0004d919) cell_vitu2_dropdown_list_ctrl_pane_g3

0xacb3,	// (0x0004d929) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xacb3,	// (0x0004d929) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa1c1,	// (0x0004ce37) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa1c1,	// (0x0004ce37) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9c7,	// (0x0005263d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9c7,	// (0x0005263d) cell_vitu2_dropdown_list_ctrl_pane_g

0xaccc,	// (0x0004d942) aid_size_cell_gallery2_ParamLimits

0xaccc,	// (0x0004d942) aid_size_cell_gallery2

0xace6,	// (0x0004d95c) grid_gallery2_pane_ParamLimits

0xace6,	// (0x0004d95c) grid_gallery2_pane

0x9989,	// (0x0004c5ff) scroll_pane_cp029_ParamLimits

0x9989,	// (0x0004c5ff) scroll_pane_cp029

0xacf7,	// (0x0004d96d) cell_gallery2_pane_ParamLimits

0xacf7,	// (0x0004d96d) cell_gallery2_pane

0x33de,	// (0x00046054) cell_gallery2_pane_g2

0xad44,	// (0x0004d9ba) cell_gallery2_pane_g3

0x33e6,	// (0x0004605c) cell_gallery2_pane_g4

0x33ee,	// (0x00046064) cell_gallery2_pane_g5

0xe107,	// (0x00050d7d) grid_highlight_pane_cp10

0xa3e6,	// (0x0004d05c) popup_vitu2_match_list_window_ParamLimits

0xa3f6,	// (0x0004d06c) popup_vitu2_query_window_ParamLimits

0xa3f6,	// (0x0004d06c) popup_vitu2_query_window

0x6241,	// (0x00048eb7) bg_vitu2_candi_button_pane

0x33d5,	// (0x0004604b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x33cc,	// (0x00046042) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x33c3,	// (0x00046039) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xad4c,	// (0x0004d9c2) bg_button_pane_cp015

0xad5c,	// (0x0004d9d2) bg_button_pane_cp016

0xad6f,	// (0x0004d9e5) bg_button_pane_cp017

0xee03,	// (0x00051a79) bg_popup_sub_pane_cp22

0x33f6,	// (0x0004606c) popup_vitu2_query_window_g1

0xadb2,	// (0x0004da28) popup_vitu2_query_window_g2

0x0002,

0xf9d2,	// (0x00052648) popup_vitu2_query_window_g

0xadcd,	// (0x0004da43) popup_vitu2_query_window_t1_ParamLimits

0xadcd,	// (0x0004da43) popup_vitu2_query_window_t1

0xae00,	// (0x0004da76) popup_vitu2_query_window_t2_ParamLimits

0xae00,	// (0x0004da76) popup_vitu2_query_window_t2

0xae12,	// (0x0004da88) popup_vitu2_query_window_t3_ParamLimits

0xae12,	// (0x0004da88) popup_vitu2_query_window_t3

0xae3a,	// (0x0004dab0) popup_vitu2_query_window_t4_ParamLimits

0xae3a,	// (0x0004dab0) popup_vitu2_query_window_t4

0xae57,	// (0x0004dacd) popup_vitu2_query_window_t5_ParamLimits

0xae57,	// (0x0004dacd) popup_vitu2_query_window_t5

0x0006,

0xf9d9,	// (0x0005264f) popup_vitu2_query_window_t_ParamLimits

0xf9d9,	// (0x0005264f) popup_vitu2_query_window_t

0x326d,	// (0x00045ee3) main_cset_text_pane

0xa7a7,	// (0x0004d41d) aid_area_touch_slider_ParamLimits

0xa7c3,	// (0x0004d439) cset_slider_pane_ParamLimits

0xa7e6,	// (0x0004d45c) main_cset_slider_pane_g1_ParamLimits

0xa7fb,	// (0x0004d471) main_cset_slider_pane_g2_ParamLimits

0x328e,	// (0x00045f04) main_cset_slider_pane_g3_ParamLimits

0x328e,	// (0x00045f04) main_cset_slider_pane_g3

0xa810,	// (0x0004d486) main_cset_slider_pane_g4_ParamLimits

0xa810,	// (0x0004d486) main_cset_slider_pane_g4

0xa81f,	// (0x0004d495) main_cset_slider_pane_g5_ParamLimits

0xa81f,	// (0x0004d495) main_cset_slider_pane_g5

0xa82b,	// (0x0004d4a1) main_cset_slider_pane_g6_ParamLimits

0xa82b,	// (0x0004d4a1) main_cset_slider_pane_g6

0xf92c,	// (0x000525a2) main_cset_slider_pane_g_ParamLimits

0x32be,	// (0x00045f34) main_cset_slider_pane_t1_ParamLimits

0xa8b7,	// (0x0004d52d) main_cset_slider_pane_t2_ParamLimits

0xa8d1,	// (0x0004d547) main_cset_slider_pane_t3_ParamLimits

0xa8eb,	// (0x0004d561) main_cset_slider_pane_t4_ParamLimits

0xa905,	// (0x0004d57b) main_cset_slider_pane_t5_ParamLimits

0xa91f,	// (0x0004d595) main_cset_slider_pane_t6_ParamLimits

0xa934,	// (0x0004d5aa) main_cset_slider_pane_t7_ParamLimits

0xa95e,	// (0x0004d5d4) main_cset_slider_pane_t8_ParamLimits

0xa95e,	// (0x0004d5d4) main_cset_slider_pane_t8

0xa986,	// (0x0004d5fc) main_cset_slider_pane_t9_ParamLimits

0xa986,	// (0x0004d5fc) main_cset_slider_pane_t9

0xa9ae,	// (0x0004d624) main_cset_slider_pane_t10_ParamLimits

0xa9ae,	// (0x0004d624) main_cset_slider_pane_t10

0xa9d6,	// (0x0004d64c) main_cset_slider_pane_t11_ParamLimits

0xa9d6,	// (0x0004d64c) main_cset_slider_pane_t11

0xa9fe,	// (0x0004d674) main_cset_slider_pane_t12_ParamLimits

0xa9fe,	// (0x0004d674) main_cset_slider_pane_t12

0xaa1b,	// (0x0004d691) main_cset_slider_pane_t13_ParamLimits

0xaa1b,	// (0x0004d691) main_cset_slider_pane_t13

0xf951,	// (0x000525c7) main_cset_slider_pane_t_ParamLimits

0xd7d4,	// (0x0005044a) bg_popup_sub_pane_cp011

0x3402,	// (0x00046078) main_cset_text_pane_g1

0x340a,	// (0x00046080) main_cset_text_pane_t1

0x3418,	// (0x0004608e) main_cset_text_pane_t2

0x3426,	// (0x0004609c) main_cset_text_pane_t3

0x3434,	// (0x000460aa) main_cset_text_pane_t4

0x3442,	// (0x000460b8) main_cset_text_pane_t5

0x3450,	// (0x000460c6) main_cset_text_pane_t6

0x345e,	// (0x000460d4) main_cset_text_pane_t7

0x0006,

0xf9e8,	// (0x0005265e) main_cset_text_pane_t

0x6241,	// (0x00048eb7) main_cam4_burst_pane

0x6241,	// (0x00048eb7) main_cam5_pane

0xa6fd,	// (0x0004d373) bg_button_pane_cp019

0xa706,	// (0x0004d37c) bg_button_pane_cp020

0x329a,	// (0x00045f10) main_cset_slider_pane_g7_ParamLimits

0x329a,	// (0x00045f10) main_cset_slider_pane_g7

0x32a6,	// (0x00045f1c) main_cset_slider_pane_g8_ParamLimits

0x32a6,	// (0x00045f1c) main_cset_slider_pane_g8

0xa83f,	// (0x0004d4b5) main_cset_slider_pane_g9_ParamLimits

0xa83f,	// (0x0004d4b5) main_cset_slider_pane_g9

0xa84b,	// (0x0004d4c1) main_cset_slider_pane_g10_ParamLimits

0xa84b,	// (0x0004d4c1) main_cset_slider_pane_g10

0xa857,	// (0x0004d4cd) main_cset_slider_pane_g11_ParamLimits

0xa857,	// (0x0004d4cd) main_cset_slider_pane_g11

0xa863,	// (0x0004d4d9) main_cset_slider_pane_g12_ParamLimits

0xa863,	// (0x0004d4d9) main_cset_slider_pane_g12

0xa86f,	// (0x0004d4e5) main_cset_slider_pane_g13_ParamLimits

0xa86f,	// (0x0004d4e5) main_cset_slider_pane_g13

0xa87b,	// (0x0004d4f1) main_cset_slider_pane_g14_ParamLimits

0xa87b,	// (0x0004d4f1) main_cset_slider_pane_g14

0xa887,	// (0x0004d4fd) main_cset_slider_pane_g15_ParamLimits

0xa887,	// (0x0004d4fd) main_cset_slider_pane_g15

0x32e6,	// (0x00045f5c) main_cset_slider_pane_t14_ParamLimits

0x32e6,	// (0x00045f5c) main_cset_slider_pane_t14

0x331f,	// (0x00045f95) main_cset_slider_pane_t15_ParamLimits

0x331f,	// (0x00045f95) main_cset_slider_pane_t15

0xaeca,	// (0x0004db40) aid_cam4_burst_size_cell_ParamLimits

0xaeca,	// (0x0004db40) aid_cam4_burst_size_cell

0xaee6,	// (0x0004db5c) grid_cam4_burst_pane_ParamLimits

0xaee6,	// (0x0004db5c) grid_cam4_burst_pane

0xaf08,	// (0x0004db7e) linegrid_cam4_burst_pane_ParamLimits

0xaf08,	// (0x0004db7e) linegrid_cam4_burst_pane

0xaf26,	// (0x0004db9c) scroll_pane_cp30_ParamLimits

0xaf26,	// (0x0004db9c) scroll_pane_cp30

0xaf32,	// (0x0004dba8) cell_cam4_burst_pane_ParamLimits

0xaf32,	// (0x0004dba8) cell_cam4_burst_pane

0x346c,	// (0x000460e2) linegrid_cam4_burst_pane_g1_ParamLimits

0x346c,	// (0x000460e2) linegrid_cam4_burst_pane_g1

0xaf6a,	// (0x0004dbe0) linegrid_cam4_burst_pane_g2_ParamLimits

0xaf6a,	// (0x0004dbe0) linegrid_cam4_burst_pane_g2

0x3479,	// (0x000460ef) linegrid_cam4_burst_pane_g3_ParamLimits

0x3479,	// (0x000460ef) linegrid_cam4_burst_pane_g3

0x0002,

0xf9f7,	// (0x0005266d) linegrid_cam4_burst_pane_g_ParamLimits

0xf9f7,	// (0x0005266d) linegrid_cam4_burst_pane_g

0xaf7b,	// (0x0004dbf1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xaf7b,	// (0x0004dbf1) linegrid_cam4_burst_pane_g3_copy1

0x3486,	// (0x000460fc) linegrid_cam4_burst_pane_g4_ParamLimits

0x3486,	// (0x000460fc) linegrid_cam4_burst_pane_g4

0xaf95,	// (0x0004dc0b) linegrid_cam4_burst_pane_g5_ParamLimits

0xaf95,	// (0x0004dc0b) linegrid_cam4_burst_pane_g5

0xafa6,	// (0x0004dc1c) linegrid_cam4_burst_pane_g6_ParamLimits

0xafa6,	// (0x0004dc1c) linegrid_cam4_burst_pane_g6

0x3493,	// (0x00046109) linegrid_cam4_burst_pane_g7_ParamLimits

0x3493,	// (0x00046109) linegrid_cam4_burst_pane_g7

0xafb7,	// (0x0004dc2d) cell_cam4_burst_pane_g1

0x34ac,	// (0x00046122) main_cam5_pane_t1_ParamLimits

0x34ac,	// (0x00046122) main_cam5_pane_t1

0x34be,	// (0x00046134) main_cam5_pane_t2_ParamLimits

0x34be,	// (0x00046134) main_cam5_pane_t2

0x34d0,	// (0x00046146) main_cam5_pane_t3_ParamLimits

0x34d0,	// (0x00046146) main_cam5_pane_t3

0x34e2,	// (0x00046158) main_cam5_pane_t4_ParamLimits

0x34e2,	// (0x00046158) main_cam5_pane_t4

0x34f8,	// (0x0004616e) main_cam5_pane_t5_ParamLimits

0x34f8,	// (0x0004616e) main_cam5_pane_t5

0x350a,	// (0x00046180) main_cam5_pane_t6_ParamLimits

0x350a,	// (0x00046180) main_cam5_pane_t6

0x351c,	// (0x00046192) main_cam5_pane_t7_ParamLimits

0x351c,	// (0x00046192) main_cam5_pane_t7

0x352e,	// (0x000461a4) main_cam5_pane_t8_ParamLimits

0x352e,	// (0x000461a4) main_cam5_pane_t8

0x354a,	// (0x000461c0) main_cam5_pane_t9_ParamLimits

0x354a,	// (0x000461c0) main_cam5_pane_t9

0x355c,	// (0x000461d2) main_cam5_pane_t10_ParamLimits

0x355c,	// (0x000461d2) main_cam5_pane_t10

0x356e,	// (0x000461e4) main_cam5_pane_t11_ParamLimits

0x356e,	// (0x000461e4) main_cam5_pane_t11

0x3580,	// (0x000461f6) main_cam5_pane_t12_ParamLimits

0x3580,	// (0x000461f6) main_cam5_pane_t12

0x3595,	// (0x0004620b) main_cam5_pane_t13_ParamLimits

0x3595,	// (0x0004620b) main_cam5_pane_t13

0x000c,

0xfa03,	// (0x00052679) main_cam5_pane_t_ParamLimits

0xfa03,	// (0x00052679) main_cam5_pane_t

0x61ea,	// (0x00048e60) popup_scut_keymap_window_ParamLimits

0x61ea,	// (0x00048e60) popup_scut_keymap_window

0xafca,	// (0x0004dc40) aid_size_cell_brow_shortcut

0xe107,	// (0x00050d7d) bg_popup_window_pane_cp010

0xafd6,	// (0x0004dc4c) grid_scut_pane

0xafe0,	// (0x0004dc56) cell_scut_pane_ParamLimits

0xafe0,	// (0x0004dc56) cell_scut_pane

0xaff5,	// (0x0004dc6b) cell_scut_pane_g1

0x35b2,	// (0x00046228) cell_scut_pane_t1

0x35c1,	// (0x00046237) cell_scut_pane_t2

0xaffe,	// (0x0004dc74) cell_scut_pane_t3

0x0002,

0xfa1e,	// (0x00052694) cell_scut_pane_t

0x92ad,	// (0x0004bf23) main_mup3_pane_g8_ParamLimits

0x92ad,	// (0x0004bf23) main_mup3_pane_g8

0xa346,	// (0x0004cfbc) area_vitu2_query_pane_ParamLimits

0xa346,	// (0x0004cfbc) area_vitu2_query_pane

0xad82,	// (0x0004d9f8) input_focus_pane_cp08

0x35d0,	// (0x00046246) area_vitu2_query_pane_g1

0xb00c,	// (0x0004dc82) area_vitu2_query_pane_g2

0x0001,

0xfa25,	// (0x0005269b) area_vitu2_query_pane_g

0xb01b,	// (0x0004dc91) area_vitu2_query_pane_t1_ParamLimits

0xb01b,	// (0x0004dc91) area_vitu2_query_pane_t1

0xb02d,	// (0x0004dca3) area_vitu2_query_pane_t2_ParamLimits

0xb02d,	// (0x0004dca3) area_vitu2_query_pane_t2

0xb03f,	// (0x0004dcb5) area_vitu2_query_pane_t3_ParamLimits

0xb03f,	// (0x0004dcb5) area_vitu2_query_pane_t3

0x35dc,	// (0x00046252) area_vitu2_query_pane_t4_ParamLimits

0x35dc,	// (0x00046252) area_vitu2_query_pane_t4

0x3604,	// (0x0004627a) area_vitu2_query_pane_t5_ParamLimits

0x3604,	// (0x0004627a) area_vitu2_query_pane_t5

0x362c,	// (0x000462a2) area_vitu2_query_pane_t6_ParamLimits

0x362c,	// (0x000462a2) area_vitu2_query_pane_t6

0x0006,

0xfa2a,	// (0x000526a0) area_vitu2_query_pane_t_ParamLimits

0xfa2a,	// (0x000526a0) area_vitu2_query_pane_t

0xb067,	// (0x0004dcdd) bg_button_pane_cp018

0xb074,	// (0x0004dcea) bg_button_pane_cp021

0xb080,	// (0x0004dcf6) bg_button_pane_cp022

0xb08f,	// (0x0004dd05) input_focus_pane_cp09

0x80a9,	// (0x0004ad1f) aid_size_touch_mv_arrow_left

0xe9bf,	// (0x00051635) aid_size_touch_mv_arrow_right

0xa89f,	// (0x0004d515) main_cset_slider_pane_g16_ParamLimits

0xa89f,	// (0x0004d515) main_cset_slider_pane_g16

0xa8ab,	// (0x0004d521) main_cset_slider_pane_g17_ParamLimits

0xa8ab,	// (0x0004d521) main_cset_slider_pane_g17

0xafb7,	// (0x0004dc2d) cell_cam4_burst_pane_g1_ParamLimits

0xd7d4,	// (0x0005044a) compa_mode_pane

0xaad3,	// (0x0004d749) popup_vtel_slider_window_g3_ParamLimits

0xaad3,	// (0x0004d749) popup_vtel_slider_window_g3

0xaae7,	// (0x0004d75d) popup_vtel_slider_window_g4_ParamLimits

0xaae7,	// (0x0004d75d) popup_vtel_slider_window_g4

0xaafb,	// (0x0004d771) popup_vtel_slider_window_t1_ParamLimits

0xaafb,	// (0x0004d771) popup_vtel_slider_window_t1

0x6241,	// (0x00048eb7) main_cl_pane

0x8b21,	// (0x0004b797) popup_imed_adjust2_window_ParamLimits

0xee03,	// (0x00051a79) bg_tb_trans_pane_cp05_ParamLimits

0x2d03,	// (0x00045979) popup_imed_adjust2_window_g1_ParamLimits

0x2d12,	// (0x00045988) popup_imed_adjust2_window_g2_ParamLimits

0x2d12,	// (0x00045988) popup_imed_adjust2_window_g2

0x2d1e,	// (0x00045994) popup_imed_adjust2_window_g3_ParamLimits

0x2d1e,	// (0x00045994) popup_imed_adjust2_window_g3

0x0002,

0xf791,	// (0x00052407) popup_imed_adjust2_window_g_ParamLimits

0xf791,	// (0x00052407) popup_imed_adjust2_window_g

0x2d2a,	// (0x000459a0) popup_imed_adjust2_window_t1_ParamLimits

0x2d42,	// (0x000459b8) slider_imed_adjust_pane_ParamLimits

0x2d56,	// (0x000459cc) slider_imed_adjust_pane_g1_ParamLimits

0x2d66,	// (0x000459dc) slider_imed_adjust_pane_g2_ParamLimits

0x2d76,	// (0x000459ec) slider_imed_adjust_pane_g3_ParamLimits

0x2d87,	// (0x000459fd) slider_imed_adjust_pane_g4_ParamLimits

0xf798,	// (0x0005240e) slider_imed_adjust_pane_g_ParamLimits

0xa0e0,	// (0x0004cd56) aid_touch_area_cam4_ParamLimits

0xa0e0,	// (0x0004cd56) aid_touch_area_cam4

0xa0ee,	// (0x0004cd64) battery_pane_cp01

0xa16d,	// (0x0004cde3) main_camera4_pane_g6_ParamLimits

0xa16d,	// (0x0004cde3) main_camera4_pane_g6

0xa18b,	// (0x0004ce01) main_camera4_pane_t2_ParamLimits

0xa18b,	// (0x0004ce01) main_camera4_pane_t2

0x0001,

0xf89f,	// (0x00052515) main_camera4_pane_t_ParamLimits

0xf89f,	// (0x00052515) main_camera4_pane_t

0xa221,	// (0x0004ce97) aid_touch_area_vid4_ParamLimits

0xa221,	// (0x0004ce97) aid_touch_area_vid4

0xa16d,	// (0x0004cde3) main_video4_pane_g5_ParamLimits

0xa16d,	// (0x0004cde3) main_video4_pane_g5

0xa251,	// (0x0004cec7) vid4_progress_pane_ParamLimits

0xa251,	// (0x0004cec7) vid4_progress_pane

0x32b2,	// (0x00045f28) main_cset_slider_pane_g18_ParamLimits

0x32b2,	// (0x00045f28) main_cset_slider_pane_g18

0x34a0,	// (0x00046116) cell_cam4_burst_pane_g2_ParamLimits

0x34a0,	// (0x00046116) cell_cam4_burst_pane_g2

0x0001,

0xf9fe,	// (0x00052674) cell_cam4_burst_pane_g_ParamLimits

0xf9fe,	// (0x00052674) cell_cam4_burst_pane_g

0xb09e,	// (0x0004dd14) bg_cl_pane_ParamLimits

0xb09e,	// (0x0004dd14) bg_cl_pane

0xb0aa,	// (0x0004dd20) cl_header_pane_ParamLimits

0xb0aa,	// (0x0004dd20) cl_header_pane

0xb0b6,	// (0x0004dd2c) cl_listscroll_pane_ParamLimits

0xb0b6,	// (0x0004dd2c) cl_listscroll_pane

0x3678,	// (0x000462ee) bg_cl_pane_g1

0x3680,	// (0x000462f6) bg_cl_pane_g2

0x3688,	// (0x000462fe) bg_cl_pane_g3

0x3690,	// (0x00046306) bg_cl_pane_g4

0x3698,	// (0x0004630e) bg_cl_pane_g5

0x36a0,	// (0x00046316) bg_cl_pane_g6

0x36a8,	// (0x0004631e) bg_cl_pane_g7

0x36b0,	// (0x00046326) bg_cl_pane_g8

0x36b8,	// (0x0004632e) bg_cl_pane_g9

0x0008,

0xfa39,	// (0x000526af) bg_cl_pane_g

0xb0c2,	// (0x0004dd38) aid_height_cl_leading_ParamLimits

0xb0c2,	// (0x0004dd38) aid_height_cl_leading

0xb0ce,	// (0x0004dd44) aid_height_cl_text_ParamLimits

0xb0ce,	// (0x0004dd44) aid_height_cl_text

0xe147,	// (0x00050dbd) bg_cl_header_pane_ParamLimits

0xe147,	// (0x00050dbd) bg_cl_header_pane

0xb0e6,	// (0x0004dd5c) cl_header_pane_g1_ParamLimits

0xb0e6,	// (0x0004dd5c) cl_header_pane_g1

0xb0f3,	// (0x0004dd69) cl_header_pane_t1_ParamLimits

0xb0f3,	// (0x0004dd69) cl_header_pane_t1

0x36c0,	// (0x00046336) cl_list_pane

0x36c9,	// (0x0004633f) hc_scroll_pane_cp01

0xe381,	// (0x00050ff7) bg_cl_header_pane_g1

0x315f,	// (0x00045dd5) bg_cl_header_pane_g2

0xe3a1,	// (0x00051017) bg_cl_header_pane_g3

0x316f,	// (0x00045de5) bg_cl_header_pane_g4

0x3167,	// (0x00045ddd) bg_cl_header_pane_g5

0x33ae,	// (0x00046024) bg_cl_header_pane_g6

0x3187,	// (0x00045dfd) bg_cl_header_pane_g7

0x318f,	// (0x00045e05) bg_cl_header_pane_g8

0x317f,	// (0x00045df5) bg_cl_header_pane_g9

0x0008,

0xfa4c,	// (0x000526c2) bg_cl_header_pane_g

0xb105,	// (0x0004dd7b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb105,	// (0x0004dd7b) hc_cl_list_double_graphic_heading_pane

0xb115,	// (0x0004dd8b) hc_cl_list_single_graphic_pane_ParamLimits

0xb115,	// (0x0004dd8b) hc_cl_list_single_graphic_pane

0xb127,	// (0x0004dd9d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb127,	// (0x0004dd9d) hc_cl_list_single_graphic_pane_g1

0xb133,	// (0x0004dda9) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb133,	// (0x0004dda9) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa5f,	// (0x000526d5) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa5f,	// (0x000526d5) hc_cl_list_single_graphic_pane_g

0xb147,	// (0x0004ddbd) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb147,	// (0x0004ddbd) hc_cl_list_single_graphic_pane_t1

0xb127,	// (0x0004dd9d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb127,	// (0x0004dd9d) hc_cl_list_double_graphic_heading_pane_g1

0xb15c,	// (0x0004ddd2) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb15c,	// (0x0004ddd2) hc_cl_list_double_graphic_heading_pane_g2

0xb170,	// (0x0004dde6) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb170,	// (0x0004dde6) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa64,	// (0x000526da) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa64,	// (0x000526da) hc_cl_list_double_graphic_heading_pane_g

0xb184,	// (0x0004ddfa) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb184,	// (0x0004ddfa) hc_cl_list_double_graphic_heading_pane_t1

0xb199,	// (0x0004de0f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb199,	// (0x0004de0f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa6b,	// (0x000526e1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa6b,	// (0x000526e1) hc_cl_list_double_graphic_heading_pane_t

0xb1ae,	// (0x0004de24) vid4_progress_pane_g1

0xb1bd,	// (0x0004de33) vid4_progress_pane_g2

0xb1cc,	// (0x0004de42) vid4_progress_pane_g3

0xb1db,	// (0x0004de51) vid4_progress_pane_g4

0x0004,

0xfa70,	// (0x000526e6) vid4_progress_pane_g

0xb1f3,	// (0x0004de69) vid4_progress_pane_t1

0xb209,	// (0x0004de7f) vid4_progress_pane_t2

0x0002,

0xfa7b,	// (0x000526f1) vid4_progress_pane_t

0xb233,	// (0x0004dea9) wait_bar_pane_cp07

0x264f,	// (0x000452c5) blid_firmament_pane_ParamLimits

0x2690,	// (0x00045306) popup_blid_sat_info2_window_g1

0x26b4,	// (0x0004532a) popup_blid_sat_info2_window_t3

0x26c2,	// (0x00045338) popup_blid_sat_info2_window_t4

0x26d0,	// (0x00045346) popup_blid_sat_info2_window_t5

0x26de,	// (0x00045354) popup_blid_sat_info2_window_t6

0x26ee,	// (0x00045364) popup_blid_sat_info2_window_t7

0x26fc,	// (0x00045372) popup_blid_sat_info2_window_t8

0x270a,	// (0x00045380) popup_blid_sat_info2_window_t9

0x2718,	// (0x0004538e) popup_blid_sat_info2_window_t10

0x27b4,	// (0x0004542a) aid_firma_cardinal_ParamLimits

0x27c8,	// (0x0004543e) blid_firmament_pane_t1_ParamLimits

0x27df,	// (0x00045455) blid_firmament_pane_t2_ParamLimits

0x27f6,	// (0x0004546c) blid_firmament_pane_t3_ParamLimits

0x280d,	// (0x00045483) blid_firmament_pane_t4_ParamLimits

0xf68a,	// (0x00052300) blid_firmament_pane_t_ParamLimits

0x2824,	// (0x0004549a) blid_sat_info_pane_ParamLimits

0x8a95,	// (0x0004b70b) main_cam_set_pane_ParamLimits

0x9929,	// (0x0004c59f) aid_size_cell_colour_35_ParamLimits

0x9940,	// (0x0004c5b6) aid_size_cell_colour_112_ParamLimits

0x9957,	// (0x0004c5cd) aid_size_cell_effect_ParamLimits

0xebdb,	// (0x00051851) bg_tb_trans_pane_cp02_ParamLimits

0xee11,	// (0x00051a87) heading_imed_pane_ParamLimits

0x9971,	// (0x0004c5e7) listscroll_imed_pane_ParamLimits

0x1a43,	// (0x000446b9) popup_call2_audio_first_window_g5_ParamLimits

0x1a43,	// (0x000446b9) popup_call2_audio_first_window_g5

0x9e8f,	// (0x0004cb05) aid_size_touch_image3_arrow_left_ParamLimits

0x9e8f,	// (0x0004cb05) aid_size_touch_image3_arrow_left

0x9ea3,	// (0x0004cb19) aid_size_touch_image3_arrow_right_ParamLimits

0x9ea3,	// (0x0004cb19) aid_size_touch_image3_arrow_right

0xb21e,	// (0x0004de94) vid4_progress_pane_t3

0x9ad5,	// (0x0004c74b) main_hwr_training_symbol_option_pane_ParamLimits

0x9ad5,	// (0x0004c74b) main_hwr_training_symbol_option_pane

0x2f30,	// (0x00045ba6) popup_hwr_training_preview_window_ParamLimits

0x2f30,	// (0x00045ba6) popup_hwr_training_preview_window

0x9b30,	// (0x0004c7a6) hwr_training_navi_pane_g5_ParamLimits

0x9b30,	// (0x0004c7a6) hwr_training_navi_pane_g5

0x314d,	// (0x00045dc3) popup_char_count_window

0x622b,	// (0x00048ea1) bg_popup_sub_pane_cp20_ParamLimits

0xabe9,	// (0x0004d85f) list_vitu2_match_list_pane_ParamLimits

0xabf5,	// (0x0004d86b) vitu2_page_scroll_pane_ParamLimits

0xabf5,	// (0x0004d86b) vitu2_page_scroll_pane

0x36fd,	// (0x00046373) list_single_hwr_training_symbol_option_pane_ParamLimits

0x36fd,	// (0x00046373) list_single_hwr_training_symbol_option_pane

0x3710,	// (0x00046386) list_single_hwr_training_symbol_option_pane_g1

0x3718,	// (0x0004638e) list_single_hwr_training_symbol_option_pane_t1

0x3726,	// (0x0004639c) bg_button_pane_cp023

0x372f,	// (0x000463a5) bg_button_pane_cp024

0xb260,	// (0x0004ded6) vitu2_page_scroll_pane_g1

0xb268,	// (0x0004dede) vitu2_page_scroll_pane_g2

0x0001,

0xfa82,	// (0x000526f8) vitu2_page_scroll_pane_g

0xb270,	// (0x0004dee6) vitu2_page_scroll_pane_t1

0x2853,	// (0x000454c9) popup_char_count_window_g1

0x3762,	// (0x000463d8) popup_char_count_window_g2

0x376b,	// (0x000463e1) popup_char_count_window_g3

0x0002,

0xfa87,	// (0x000526fd) popup_char_count_window_g

0x3774,	// (0x000463ea) popup_char_count_window_t1

0x6241,	// (0x00048eb7) main_vded2_pane

0x2cf1,	// (0x00045967) aid_size_cell_imed_line

0x2cfb,	// (0x00045971) grid_imed_line_width_pane

0xa29c,	// (0x0004cf12) vid4_indicators_pane_g4

0x3782,	// (0x000463f8) cell_imed_line_width_pane_ParamLimits

0x3782,	// (0x000463f8) cell_imed_line_width_pane

0x3794,	// (0x0004640a) cell_imed_line_width_pane_g1

0x379d,	// (0x00046413) cell_imed_line_width_pane_g2

0x0001,

0xfa8e,	// (0x00052704) cell_imed_line_width_pane_g

0xb27f,	// (0x0004def5) main_vded2_pane_g1_ParamLimits

0xb27f,	// (0x0004def5) main_vded2_pane_g1

0xb28c,	// (0x0004df02) main_vded2_pane_g2_ParamLimits

0xb28c,	// (0x0004df02) main_vded2_pane_g2

0x0001,

0xfa93,	// (0x00052709) main_vded2_pane_g_ParamLimits

0xfa93,	// (0x00052709) main_vded2_pane_g

0xb298,	// (0x0004df0e) vded2_slider_pane_ParamLimits

0xb298,	// (0x0004df0e) vded2_slider_pane

0xb2a5,	// (0x0004df1b) aid_size_touch_vded2_end

0xb2ad,	// (0x0004df23) aid_size_touch_vded2_playhead

0xb2b5,	// (0x0004df2b) aid_size_touch_vded2_start

0xb2bd,	// (0x0004df33) vded2_slider_bg_pane

0xb2c6,	// (0x0004df3c) vded2_slider_pane_g1

0xb2cf,	// (0x0004df45) vded2_slider_pane_g2

0xb2d7,	// (0x0004df4d) vded2_slider_pane_g3

0x0002,

0xfa98,	// (0x0005270e) vded2_slider_pane_g

0xb2e0,	// (0x0004df56) vded2_slider_bg_pane_g1

0xb2e9,	// (0x0004df5f) vded2_slider_bg_pane_g2

0xb2f2,	// (0x0004df68) vded2_slider_bg_pane_g3

0x0002,

0xfa9f,	// (0x00052715) vded2_slider_bg_pane_g

0x846a,	// (0x0004b0e0) aid_postcard_touch_down_pane_ParamLimits

0x846a,	// (0x0004b0e0) aid_postcard_touch_down_pane

0x8476,	// (0x0004b0ec) aid_postcard_touch_up_pane_ParamLimits

0x8476,	// (0x0004b0ec) aid_postcard_touch_up_pane

0x6241,	// (0x00048eb7) main_blid2_pane

0x8abe,	// (0x0004b734) popup_blid2_search_window

0xd7d4,	// (0x0005044a) blid2_gps_pane

0xd7d4,	// (0x0005044a) blid2_navig_pane

0xd7d4,	// (0x0005044a) blid2_search_pane

0xd7d4,	// (0x0005044a) blid2_tripm_pane

0xb2fb,	// (0x0004df71) blid2_search_pane_g1_ParamLimits

0xb2fb,	// (0x0004df71) blid2_search_pane_g1

0xb307,	// (0x0004df7d) blid2_search_pane_t1_ParamLimits

0xb307,	// (0x0004df7d) blid2_search_pane_t1

0xb319,	// (0x0004df8f) aid_size_cell_blid2_gps_ParamLimits

0xb319,	// (0x0004df8f) aid_size_cell_blid2_gps

0xb329,	// (0x0004df9f) blid2_gps_pane_g1_ParamLimits

0xb329,	// (0x0004df9f) blid2_gps_pane_g1

0xb335,	// (0x0004dfab) grid_blid2_satellite_pane_ParamLimits

0xb335,	// (0x0004dfab) grid_blid2_satellite_pane

0xb341,	// (0x0004dfb7) blid2_navig_pane_g1_ParamLimits

0xb341,	// (0x0004dfb7) blid2_navig_pane_g1

0xb34d,	// (0x0004dfc3) blid2_navig_pane_t1_ParamLimits

0xb34d,	// (0x0004dfc3) blid2_navig_pane_t1

0xb35f,	// (0x0004dfd5) blid2_navig_pane_t2_ParamLimits

0xb35f,	// (0x0004dfd5) blid2_navig_pane_t2

0x0001,

0xfaa6,	// (0x0005271c) blid2_navig_pane_t_ParamLimits

0xfaa6,	// (0x0005271c) blid2_navig_pane_t

0xb371,	// (0x0004dfe7) blid2_navig_ring_pane_ParamLimits

0xb371,	// (0x0004dfe7) blid2_navig_ring_pane

0xb37d,	// (0x0004dff3) blid2_speed_pane_ParamLimits

0xb37d,	// (0x0004dff3) blid2_speed_pane

0xb389,	// (0x0004dfff) blid2_tripm_pane_g1_ParamLimits

0xb389,	// (0x0004dfff) blid2_tripm_pane_g1

0xb395,	// (0x0004e00b) blid2_tripm_pane_g2_ParamLimits

0xb395,	// (0x0004e00b) blid2_tripm_pane_g2

0xb3a1,	// (0x0004e017) blid2_tripm_pane_g3_ParamLimits

0xb3a1,	// (0x0004e017) blid2_tripm_pane_g3

0xb3ad,	// (0x0004e023) blid2_tripm_pane_g4_ParamLimits

0xb3ad,	// (0x0004e023) blid2_tripm_pane_g4

0xb3b9,	// (0x0004e02f) blid2_tripm_pane_g5_ParamLimits

0xb3b9,	// (0x0004e02f) blid2_tripm_pane_g5

0x0005,

0xfaab,	// (0x00052721) blid2_tripm_pane_g_ParamLimits

0xfaab,	// (0x00052721) blid2_tripm_pane_g

0xb3d1,	// (0x0004e047) blid2_tripm_pane_t1_ParamLimits

0xb3d1,	// (0x0004e047) blid2_tripm_pane_t1

0xb3e3,	// (0x0004e059) blid2_tripm_pane_t2_ParamLimits

0xb3e3,	// (0x0004e059) blid2_tripm_pane_t2

0xb3f5,	// (0x0004e06b) blid2_tripm_pane_t3_ParamLimits

0xb3f5,	// (0x0004e06b) blid2_tripm_pane_t3

0x0003,

0xfab8,	// (0x0005272e) blid2_tripm_pane_t_ParamLimits

0xfab8,	// (0x0005272e) blid2_tripm_pane_t

0xb425,	// (0x0004e09b) cell_blid2_satellite_pane_ParamLimits

0xb425,	// (0x0004e09b) cell_blid2_satellite_pane

0xb43d,	// (0x0004e0b3) cell_blid2_satellite_pane_g1

0x37a5,	// (0x0004641b) cell_blid2_satellite_pane_t1

0xe183,	// (0x00050df9) blid2_speed_pane_g1

0x37b3,	// (0x00046429) blid2_speed_pane_t1

0x37c1,	// (0x00046437) blid2_speed_pane_t2

0x0001,

0xfac1,	// (0x00052737) blid2_speed_pane_t

0xe183,	// (0x00050df9) blid2_navig_ring_pane_g1

0xb446,	// (0x0004e0bc) blid2_navig_ring_pane_g2

0xb44e,	// (0x0004e0c4) blid2_navig_ring_pane_g3

0xb456,	// (0x0004e0cc) blid2_navig_ring_pane_g4

0xb45e,	// (0x0004e0d4) blid2_navig_ring_pane_g5

0x0004,

0xfac6,	// (0x0005273c) blid2_navig_ring_pane_g

0xd7d4,	// (0x0005044a) bg_popup_window_pane_cp011

0x37cf,	// (0x00046445) popup_blid2_search_window_g1

0x37d7,	// (0x0004644d) popup_blid2_search_window_t1

0x37e5,	// (0x0004645b) popup_blid2_search_window_t2

0x0001,

0xfad1,	// (0x00052747) popup_blid2_search_window_t

0xe290,	// (0x00050f06) main_browser_pane_g1

0xdf3a,	// (0x00050bb0) main_browser_pane_ParamLimits

0x8a95,	// (0x0004b70b) bg_button_pane_cp011_ParamLimits

0xa502,	// (0x0004d178) cell_vitu2_function_pane_g1_ParamLimits

0xee03,	// (0x00051a79) bg_popup_sub_pane_cp22_ParamLimits

0xad82,	// (0x0004d9f8) input_focus_pane_cp08_ParamLimits

0xad99,	// (0x0004da0f) popup_vitu2_query_button_pane_ParamLimits

0xad99,	// (0x0004da0f) popup_vitu2_query_button_pane

0xadaa,	// (0x0004da20) popup_vitu2_query_input_button_pane

0x33f6,	// (0x0004606c) popup_vitu2_query_window_g1_ParamLimits

0xadb2,	// (0x0004da28) popup_vitu2_query_window_g2_ParamLimits

0xf9d2,	// (0x00052648) popup_vitu2_query_window_g_ParamLimits

0xd7d4,	// (0x0005044a) bg_button_pane_cp026

0xb466,	// (0x0004e0dc) popup_vitu2_query_input_button_pane_g1

0xd7d4,	// (0x0005044a) bg_button_pane_cp025

0x37f3,	// (0x00046469) popup_vitu2_query_button_pane_t1

0x902b,	// (0x0004bca1) main_mp3_pane_t6

0x9039,	// (0x0004bcaf) popup_slider_window_cp01

0xa1cf,	// (0x0004ce45) cam4_battery_pane

0xa1cf,	// (0x0004ce45) cam4_battery_pane_cp02

0xa1cf,	// (0x0004ce45) cam4_battery_pane_cp01

0xa1cf,	// (0x0004ce45) cam4_battery_pane_cp03

0x3801,	// (0x00046477) cam4_battery_pane_g1

0xe183,	// (0x00050df9) cam4_battery_pane_g2

0x0001,

0xfad6,	// (0x0005274c) cam4_battery_pane_g

0x2726,	// (0x0004539c) popup_blid_sat_info2_window_t11

0x80a9,	// (0x0004ad1f) aid_size_touch_mv_arrow_left_ParamLimits

0xe9bf,	// (0x00051635) aid_size_touch_mv_arrow_right_ParamLimits

0xea18,	// (0x0005168e) navi_pane_g1_ParamLimits

0xea24,	// (0x0005169a) navi_pane_g2_ParamLimits

0x80cd,	// (0x0004ad43) navi_pane_g3_ParamLimits

0xf38b,	// (0x00052001) navi_pane_g_ParamLimits

0x80ea,	// (0x0004ad60) navi_pane_mv_t1_ParamLimits

0x997d,	// (0x0004c5f3) grid_imed_effect_pane_ParamLimits

0x6e68,	// (0x00049ade) aid_placing_vt_slider_lsc

0xe1d2,	// (0x00050e48) aid_placing_vt_slider_prt

0xebdb,	// (0x00051851) bg_tb_trans_pane_cp01_ParamLimits

0x296b,	// (0x000455e1) popup_image_details_window_g1_ParamLimits

0x297e,	// (0x000455f4) popup_image_details_window_g2_ParamLimits

0x2993,	// (0x00045609) popup_image_details_window_g3_ParamLimits

0x2993,	// (0x00045609) popup_image_details_window_g3

0xf6ca,	// (0x00052340) popup_image_details_window_g_ParamLimits

0x29a7,	// (0x0004561d) popup_image_details_window_t1_ParamLimits

0x29b9,	// (0x0004562f) popup_image_details_window_t2_ParamLimits

0x29d2,	// (0x00045648) popup_image_details_window_t3_ParamLimits

0x29e6,	// (0x0004565c) popup_image_details_window_t4_ParamLimits

0x2a01,	// (0x00045677) popup_image_details_window_t5_ParamLimits

0xf6d1,	// (0x00052347) popup_image_details_window_t_ParamLimits

0xb0da,	// (0x0004dd50) cl_header_name_pane_ParamLimits

0xb0da,	// (0x0004dd50) cl_header_name_pane

0xb46e,	// (0x0004e0e4) cl_header_name_pane_t1_ParamLimits

0xb46e,	// (0x0004e0e4) cl_header_name_pane_t1

0xb485,	// (0x0004e0fb) cl_header_name_pane_t2_ParamLimits

0xb485,	// (0x0004e0fb) cl_header_name_pane_t2

0xb4af,	// (0x0004e125) cl_header_name_pane_t3_ParamLimits

0xb4af,	// (0x0004e125) cl_header_name_pane_t3

0x0002,

0xfadb,	// (0x00052751) cl_header_name_pane_t_ParamLimits

0xfadb,	// (0x00052751) cl_header_name_pane_t

0xeab1,	// (0x00051727) navi_pane_mv_g2_ParamLimits

0x3118,	// (0x00045d8e) field_vitu2_entry_pane_g1_ParamLimits

0x3124,	// (0x00045d9a) field_vitu2_entry_pane_g2_ParamLimits

0xee31,	// (0x00051aa7) field_vitu2_entry_pane_g3_ParamLimits

0xee31,	// (0x00051aa7) field_vitu2_entry_pane_g3

0xf8d1,	// (0x00052547) field_vitu2_entry_pane_g_ParamLimits

0xa496,	// (0x0004d10c) cell_vitu2_itu_pane_g1_ParamLimits

0xa4a8,	// (0x0004d11e) cell_vitu2_itu_pane_g2_ParamLimits

0xa4a8,	// (0x0004d11e) cell_vitu2_itu_pane_g2

0x0001,

0xf8dd,	// (0x00052553) cell_vitu2_itu_pane_g_ParamLimits

0xf8dd,	// (0x00052553) cell_vitu2_itu_pane_g

0x8a95,	// (0x0004b70b) bg_vkb2_func_pane_cp05_ParamLimits

0x8a95,	// (0x0004b70b) bg_vkb2_func_pane_cp05

0x8a95,	// (0x0004b70b) bg_vkb2_func_pane_cp03

0x8a95,	// (0x0004b70b) bg_vkb2_func_pane_cp04

0x8a95,	// (0x0004b70b) bg_vkb2_func_pane_cp10_ParamLimits

0x8a95,	// (0x0004b70b) bg_vkb2_func_pane_cp10

0xb080,	// (0x0004dcf6) bg_vkb2_func_pane_cp08

0xb067,	// (0x0004dcdd) bg_vkb2_func_pane_cp06

0xb074,	// (0x0004dcea) bg_vkb2_func_pane_cp07

0x3738,	// (0x000463ae) bg_vkb2_func_pane_cp11_ParamLimits

0x3738,	// (0x000463ae) bg_vkb2_func_pane_cp11

0x374d,	// (0x000463c3) bg_vkb2_func_pane_cp12_ParamLimits

0x374d,	// (0x000463c3) bg_vkb2_func_pane_cp12

0xd7d4,	// (0x0005044a) bg_vkb2_func_pane_cp09

0x315f,	// (0x00045dd5) bg_vkb2_func_pane_g1

0xe3a1,	// (0x00051017) bg_vkb2_func_pane_g2

0x3167,	// (0x00045ddd) bg_vkb2_func_pane_g3

0x316f,	// (0x00045de5) bg_vkb2_func_pane_g4

0x33ae,	// (0x00046024) bg_vkb2_func_pane_g5

0x3187,	// (0x00045dfd) bg_vkb2_func_pane_g6

0x318f,	// (0x00045e05) bg_vkb2_func_pane_g7

0x317f,	// (0x00045df5) bg_vkb2_func_pane_g8

0xe381,	// (0x00050ff7) bg_vkb2_func_pane_g9

0x0008,

0xfae2,	// (0x00052758) bg_vkb2_func_pane_g

0xb3c5,	// (0x0004e03b) blid2_tripm_pane_g6_ParamLimits

0xb3c5,	// (0x0004e03b) blid2_tripm_pane_g6

0x2fee,	// (0x00045c64) mp4_progress_pane_g1

0xb419,	// (0x0004e08f) blid2_tripm_values_pane_ParamLimits

0xb419,	// (0x0004e08f) blid2_tripm_values_pane

0xb4d4,	// (0x0004e14a) blid2_tripm_values_pane_t1

0xb4e2,	// (0x0004e158) blid2_tripm_values_pane_t2

0xb4f0,	// (0x0004e166) blid2_tripm_values_pane_t3

0xb4fe,	// (0x0004e174) blid2_tripm_values_pane_t4

0xb50c,	// (0x0004e182) blid2_tripm_values_pane_t5

0xb51a,	// (0x0004e190) blid2_tripm_values_pane_t6

0xb528,	// (0x0004e19e) blid2_tripm_values_pane_t7

0xb536,	// (0x0004e1ac) blid2_tripm_values_pane_t8

0xb544,	// (0x0004e1ba) blid2_tripm_values_pane_t9

0x0008,

0xfaf5,	// (0x0005276b) blid2_tripm_values_pane_t

0x6ea2,	// (0x00049b18) call_video_pane_t1_ParamLimits

0x6ebf,	// (0x00049b35) call_video_pane_t2_ParamLimits

0xf222,	// (0x00051e98) call_video_pane_t_ParamLimits

0x8358,	// (0x0004afce) msg_header_pane_g1_ParamLimits

0xec90,	// (0x00051906) msg_header_pane_g2_ParamLimits

0xec90,	// (0x00051906) msg_header_pane_g2

0x0001,

0xf42e,	// (0x000520a4) msg_header_pane_g_ParamLimits

0xf42e,	// (0x000520a4) msg_header_pane_g

0xdf3a,	// (0x00050bb0) main_clock2_pane_ParamLimits

0x9721,	// (0x0004c397) grid_clock2_toolbar_pane_ParamLimits

0x9721,	// (0x0004c397) grid_clock2_toolbar_pane

0x9721,	// (0x0004c397) listscroll_clock2_pane_ParamLimits

0x9721,	// (0x0004c397) listscroll_clock2_pane

0x97bd,	// (0x0004c433) main_clock2_pane_t3_ParamLimits

0x97bd,	// (0x0004c433) main_clock2_pane_t3

0x97cf,	// (0x0004c445) main_clock2_pane_t4_ParamLimits

0x97cf,	// (0x0004c445) main_clock2_pane_t4

0x380b,	// (0x00046481) cell_clock2_toolbar_pane

0x3813,	// (0x00046489) cell_clock2_toolbar_pane_cp01

0x3813,	// (0x00046489) cell_clock2_toolbar_pane_cp02

0x381b,	// (0x00046491) cell_clock2_toolbar_pane_cp03

0x3823,	// (0x00046499) list_clock2_pane

0x382b,	// (0x000464a1) scroll_pane_cp10

0x3833,	// (0x000464a9) list_single_clock2_pane_ParamLimits

0x3833,	// (0x000464a9) list_single_clock2_pane

0xe107,	// (0x00050d7d) list_highlight_pane_cp08

0x3840,	// (0x000464b6) list_single_clock2_pane_t1

0x384e,	// (0x000464c4) list_single_clock2_pane_t2

0x0001,

0xfb08,	// (0x0005277e) list_single_clock2_pane_t

0xd7d4,	// (0x0005044a) bg_button_pane_cp10

0x385c,	// (0x000464d2) cell_clock2_toolbar_pane_g1

0x83d4,	// (0x0004b04a) aid_main_viewer_pane_g1_ParamLimits

0x83d4,	// (0x0004b04a) aid_main_viewer_pane_g1

0x83e0,	// (0x0004b056) aid_main_viewer_pane_g2_ParamLimits

0x83e0,	// (0x0004b056) aid_main_viewer_pane_g2

0x83ec,	// (0x0004b062) aid_main_viewer_pane_g3_ParamLimits

0x83ec,	// (0x0004b062) aid_main_viewer_pane_g3

0x83fb,	// (0x0004b071) aid_main_viewer_pane_g4_ParamLimits

0x83fb,	// (0x0004b071) aid_main_viewer_pane_g4

0x0003,

0xf43f,	// (0x000520b5) aid_main_viewer_pane_g_ParamLimits

0xf43f,	// (0x000520b5) aid_main_viewer_pane_g

0x622b,	// (0x00048ea1) main_calc_pane_ParamLimits

0x8aa3,	// (0x0004b719) main_dialer2_pane_ParamLimits

0x6241,	// (0x00048eb7) main_cam6_pane

0x6241,	// (0x00048eb7) main_vid6_pane

0x972d,	// (0x0004c3a3) listscroll_gen_pane_cp06_ParamLimits

0x972d,	// (0x0004c3a3) listscroll_gen_pane_cp06

0x97e1,	// (0x0004c457) main_clock2_pane_t5_ParamLimits

0x97e1,	// (0x0004c457) main_clock2_pane_t5

0x982a,	// (0x0004c4a0) aid_call2_pane_cp10_ParamLimits

0x983c,	// (0x0004c4b2) aid_call_pane_cp10_ParamLimits

0xe9b3,	// (0x00051629) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe9b3,	// (0x00051629) popup_clock_analogue_window_cp10_g2_ParamLimits

0x984e,	// (0x0004c4c4) popup_clock_analogue_window_cp10_g3_ParamLimits

0x984e,	// (0x0004c4c4) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe9b3,	// (0x00051629) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf786,	// (0x000523fc) popup_clock_analogue_window_cp10_g_ParamLimits

0x9860,	// (0x0004c4d6) popup_clock_analogue_window_cp10_t1_ParamLimits

0x3046,	// (0x00045cbc) cell_dialer2_keypad_pane_g2_ParamLimits

0x3046,	// (0x00045cbc) cell_dialer2_keypad_pane_g2

0x0001,

0xf870,	// (0x000524e6) cell_dialer2_keypad_pane_g_ParamLimits

0xf870,	// (0x000524e6) cell_dialer2_keypad_pane_g

0xebc7,	// (0x0005183d) cell_dialer2_keypad_pane_t1

0xa794,	// (0x0004d40a) main_cset_text2_pane_ParamLimits

0xa794,	// (0x0004d40a) main_cset_text2_pane

0x35d0,	// (0x00046246) area_vitu2_query_pane_g1_ParamLimits

0xb00c,	// (0x0004dc82) area_vitu2_query_pane_g2_ParamLimits

0xfa25,	// (0x0005269b) area_vitu2_query_pane_g_ParamLimits

0x3654,	// (0x000462ca) area_vitu2_query_pane_t7_ParamLimits

0x3654,	// (0x000462ca) area_vitu2_query_pane_t7

0xb067,	// (0x0004dcdd) bg_button_pane_cp018_ParamLimits

0xb074,	// (0x0004dcea) bg_button_pane_cp021_ParamLimits

0xb080,	// (0x0004dcf6) bg_button_pane_cp022_ParamLimits

0xb080,	// (0x0004dcf6) bg_vkb2_func_pane_cp08_ParamLimits

0xb067,	// (0x0004dcdd) bg_vkb2_func_pane_cp06_ParamLimits

0xb074,	// (0x0004dcea) bg_vkb2_func_pane_cp07_ParamLimits

0xb08f,	// (0x0004dd05) input_focus_pane_cp09_ParamLimits

0xb552,	// (0x0004e1c8) cam6_autofocus_pane_ParamLimits

0xb552,	// (0x0004e1c8) cam6_autofocus_pane

0xb56e,	// (0x0004e1e4) cam6_image_uncrop_pane_ParamLimits

0xb56e,	// (0x0004e1e4) cam6_image_uncrop_pane

0xb591,	// (0x0004e207) cam6_indi_pane_ParamLimits

0xb591,	// (0x0004e207) cam6_indi_pane

0xb5ab,	// (0x0004e221) cam6_mode_pane_ParamLimits

0xb5ab,	// (0x0004e221) cam6_mode_pane

0xb5bf,	// (0x0004e235) cam6_timer_pane_ParamLimits

0xb5bf,	// (0x0004e235) cam6_timer_pane

0xb5cb,	// (0x0004e241) cam6_zoom_pane_ParamLimits

0xb5cb,	// (0x0004e241) cam6_zoom_pane

0xb5e1,	// (0x0004e257) cam6_mode_pane_g1_ParamLimits

0xb5e1,	// (0x0004e257) cam6_mode_pane_g1

0xb5ed,	// (0x0004e263) cam6_mode_pane_g2_ParamLimits

0xb5ed,	// (0x0004e263) cam6_mode_pane_g2

0xb5f9,	// (0x0004e26f) cam6_mode_pane_g3_ParamLimits

0xb5f9,	// (0x0004e26f) cam6_mode_pane_g3

0xb605,	// (0x0004e27b) cam6_mode_pane_g4_ParamLimits

0xb605,	// (0x0004e27b) cam6_mode_pane_g4

0x0003,

0xfb0d,	// (0x00052783) cam6_mode_pane_g_ParamLimits

0xfb0d,	// (0x00052783) cam6_mode_pane_g

0x2504,	// (0x0004517a) bg_tb_trans_pane_cp08_ParamLimits

0x2504,	// (0x0004517a) bg_tb_trans_pane_cp08

0x3864,	// (0x000464da) cam6_battery_pane_ParamLimits

0x3864,	// (0x000464da) cam6_battery_pane

0x387a,	// (0x000464f0) cam6_indi_pane_g1_ParamLimits

0x387a,	// (0x000464f0) cam6_indi_pane_g1

0x388c,	// (0x00046502) cam6_indi_pane_g2_ParamLimits

0x388c,	// (0x00046502) cam6_indi_pane_g2

0x389e,	// (0x00046514) cam6_indi_pane_g3_ParamLimits

0x389e,	// (0x00046514) cam6_indi_pane_g3

0x0002,

0xfb16,	// (0x0005278c) cam6_indi_pane_g_ParamLimits

0xfb16,	// (0x0005278c) cam6_indi_pane_g

0x38b0,	// (0x00046526) cam6_indi_pane_t1_ParamLimits

0x38b0,	// (0x00046526) cam6_indi_pane_t1

0xa2da,	// (0x0004cf50) cam6_autofocus_pane_g1

0xa2d2,	// (0x0004cf48) cam6_autofocus_pane_g2

0xa2ea,	// (0x0004cf60) cam6_autofocus_pane_g3

0xa2e2,	// (0x0004cf58) cam6_autofocus_pane_g4

0x0003,

0xfb1d,	// (0x00052793) cam6_autofocus_pane_g

0x38d6,	// (0x0004654c) cam6_timer_pane_g1

0x38de,	// (0x00046554) cam6_timer_pane_t1

0x38ec,	// (0x00046562) cam6_zoom_cont_pane

0x38f4,	// (0x0004656a) cam6_zoom_pane_g1

0x38fc,	// (0x00046572) cam6_zoom_pane_g2

0xb611,	// (0x0004e287) cam6_zoom_pane_g3

0x0002,

0xfb26,	// (0x0005279c) cam6_zoom_pane_g

0xe183,	// (0x00050df9) cam6_battery_pane_g1

0xe183,	// (0x00050df9) cam6_battery_pane_g2

0x0001,

0xf3ef,	// (0x00052065) cam6_battery_pane_g

0x3904,	// (0x0004657a) cam6_zoom_cont_pane_g1

0x390d,	// (0x00046583) cam6_zoom_cont_pane_g2

0x3916,	// (0x0004658c) cam6_zoom_cont_pane_g3

0x0002,

0xfb2d,	// (0x000527a3) cam6_zoom_cont_pane_g

0xb62e,	// (0x0004e2a4) cam6_mode_pane_cp_ParamLimits

0xb62e,	// (0x0004e2a4) cam6_mode_pane_cp

0xb642,	// (0x0004e2b8) cam6_zoom_pane_cp_ParamLimits

0xb642,	// (0x0004e2b8) cam6_zoom_pane_cp

0xb658,	// (0x0004e2ce) vid6_image_uncrop_cif_pane_ParamLimits

0xb658,	// (0x0004e2ce) vid6_image_uncrop_cif_pane

0xb67a,	// (0x0004e2f0) vid6_image_uncrop_nhd_pane_ParamLimits

0xb67a,	// (0x0004e2f0) vid6_image_uncrop_nhd_pane

0xb691,	// (0x0004e307) vid6_image_uncrop_vga_pane_ParamLimits

0xb691,	// (0x0004e307) vid6_image_uncrop_vga_pane

0xb6a8,	// (0x0004e31e) vid6_image_uncrop_wvga_pane_ParamLimits

0xb6a8,	// (0x0004e31e) vid6_image_uncrop_wvga_pane

0xb6bf,	// (0x0004e335) vid6_indi_pane_ParamLimits

0xb6bf,	// (0x0004e335) vid6_indi_pane

0x2504,	// (0x0004517a) bg_tb_trans_pane_cp09_ParamLimits

0x2504,	// (0x0004517a) bg_tb_trans_pane_cp09

0x392a,	// (0x000465a0) cam6_battery_pane_cp_ParamLimits

0x392a,	// (0x000465a0) cam6_battery_pane_cp

0x3936,	// (0x000465ac) vid6_indi_pane_g1_ParamLimits

0x3936,	// (0x000465ac) vid6_indi_pane_g1

0x3948,	// (0x000465be) vid6_indi_pane_g2_ParamLimits

0x3948,	// (0x000465be) vid6_indi_pane_g2

0x395a,	// (0x000465d0) vid6_indi_pane_g3_ParamLimits

0x395a,	// (0x000465d0) vid6_indi_pane_g3

0x396f,	// (0x000465e5) vid6_indi_pane_g4_ParamLimits

0x396f,	// (0x000465e5) vid6_indi_pane_g4

0x3984,	// (0x000465fa) vid6_indi_pane_g5_ParamLimits

0x3984,	// (0x000465fa) vid6_indi_pane_g5

0x0004,

0xfb34,	// (0x000527aa) vid6_indi_pane_g_ParamLimits

0xfb34,	// (0x000527aa) vid6_indi_pane_g

0x399e,	// (0x00046614) vid6_indi_pane_t1_ParamLimits

0x399e,	// (0x00046614) vid6_indi_pane_t1

0x39b4,	// (0x0004662a) vid6_indi_pane_t2_ParamLimits

0x39b4,	// (0x0004662a) vid6_indi_pane_t2

0x39dc,	// (0x00046652) vid6_indi_pane_t3_ParamLimits

0x39dc,	// (0x00046652) vid6_indi_pane_t3

0x3a04,	// (0x0004667a) vid6_indi_pane_t4_ParamLimits

0x3a04,	// (0x0004667a) vid6_indi_pane_t4

0x0003,

0xfb3f,	// (0x000527b5) vid6_indi_pane_t_ParamLimits

0xfb3f,	// (0x000527b5) vid6_indi_pane_t

0x3a28,	// (0x0004669e) wait_bar_pane_cp08

0xb6df,	// (0x0004e355) main_cset_text2_pane_t1_ParamLimits

0xb6df,	// (0x0004e355) main_cset_text2_pane_t1

0xb619,	// (0x0004e28f) listscroll_gen_pane_cp06_t1_ParamLimits

0xb619,	// (0x0004e28f) listscroll_gen_pane_cp06_t1

0x6241,	// (0x00048eb7) main_cam6_set_pane

0xa1c1,	// (0x0004ce37) bg_tb_trans_pane_cp06_ParamLimits

0xa1d7,	// (0x0004ce4d) cam4_indicators_pane_g1_ParamLimits

0xa1e7,	// (0x0004ce5d) cam4_indicators_pane_g2_ParamLimits

0xf8ad,	// (0x00052523) cam4_indicators_pane_g_ParamLimits

0xa207,	// (0x0004ce7d) cam4_indicators_pane_t1_ParamLimits

0x8a95,	// (0x0004b70b) bg_tb_trans_pane_cp07_ParamLimits

0xa1d7,	// (0x0004ce4d) vid4_indicators_pane_g1_ParamLimits

0xa27b,	// (0x0004cef1) vid4_indicators_pane_g2_ParamLimits

0xa28b,	// (0x0004cf01) vid4_indicators_pane_g3_ParamLimits

0xa29c,	// (0x0004cf12) vid4_indicators_pane_g4_ParamLimits

0xf8bf,	// (0x00052535) vid4_indicators_pane_g_ParamLimits

0xa2b8,	// (0x0004cf2e) vid4_indicators_pane_t1_ParamLimits

0xb1ae,	// (0x0004de24) vid4_progress_pane_g1_ParamLimits

0xb1bd,	// (0x0004de33) vid4_progress_pane_g2_ParamLimits

0xb1cc,	// (0x0004de42) vid4_progress_pane_g3_ParamLimits

0xb1db,	// (0x0004de51) vid4_progress_pane_g4_ParamLimits

0xfa70,	// (0x000526e6) vid4_progress_pane_g_ParamLimits

0xb1f3,	// (0x0004de69) vid4_progress_pane_t1_ParamLimits

0xb209,	// (0x0004de7f) vid4_progress_pane_t2_ParamLimits

0xb21e,	// (0x0004de94) vid4_progress_pane_t3_ParamLimits

0xfa7b,	// (0x000526f1) vid4_progress_pane_t_ParamLimits

0xb233,	// (0x0004dea9) wait_bar_pane_cp07_ParamLimits

0xb6fb,	// (0x0004e371) main_cam6_set_pane_g2_ParamLimits

0xb6fb,	// (0x0004e371) main_cam6_set_pane_g2

0xb707,	// (0x0004e37d) main_cset6_listscroll_pane_ParamLimits

0xb707,	// (0x0004e37d) main_cset6_listscroll_pane

0xb730,	// (0x0004e3a6) main_cset6_slider_pane_ParamLimits

0xb730,	// (0x0004e3a6) main_cset6_slider_pane

0xb73c,	// (0x0004e3b2) main_cset6_text2_pane_ParamLimits

0xb73c,	// (0x0004e3b2) main_cset6_text2_pane

0x3a38,	// (0x000466ae) main_cset6_text_pane

0x3275,	// (0x00045eeb) main_cset_list_pane_copy1_ParamLimits

0x3275,	// (0x00045eeb) main_cset_list_pane_copy1

0x3285,	// (0x00045efb) scroll_pane_cp028_copy1

0xb74f,	// (0x0004e3c5) cset_list_set_pane_copy1

0x3358,	// (0x00045fce) aid_position_infowindow_above_copy1

0x3360,	// (0x00045fd6) aid_position_infowindow_below_copy1

0xb75e,	// (0x0004e3d4) cset_list_set_pane_g1_copy1

0xb766,	// (0x0004e3dc) cset_list_set_pane_g3_copy1_ParamLimits

0xb766,	// (0x0004e3dc) cset_list_set_pane_g3_copy1

0xb775,	// (0x0004e3eb) cset_list_set_pane_t1_copy1_ParamLimits

0xb775,	// (0x0004e3eb) cset_list_set_pane_t1_copy1

0xebdb,	// (0x00051851) list_highlight_pane_cp021_copy1_ParamLimits

0xebdb,	// (0x00051851) list_highlight_pane_cp021_copy1

0x3a40,	// (0x000466b6) cset6_slider_pane_ParamLimits

0x3a40,	// (0x000466b6) cset6_slider_pane

0x3a6c,	// (0x000466e2) main_cset6_slider_pane_g1_ParamLimits

0x3a6c,	// (0x000466e2) main_cset6_slider_pane_g1

0xb78a,	// (0x0004e400) main_cset6_slider_pane_g2_ParamLimits

0xb78a,	// (0x0004e400) main_cset6_slider_pane_g2

0x329a,	// (0x00045f10) main_cset6_slider_pane_g3_ParamLimits

0x329a,	// (0x00045f10) main_cset6_slider_pane_g3

0xb7b2,	// (0x0004e428) main_cset6_slider_pane_g4_ParamLimits

0xb7b2,	// (0x0004e428) main_cset6_slider_pane_g4

0xb7be,	// (0x0004e434) main_cset6_slider_pane_g5_ParamLimits

0xb7be,	// (0x0004e434) main_cset6_slider_pane_g5

0x329a,	// (0x00045f10) main_cset6_slider_pane_g7_ParamLimits

0x329a,	// (0x00045f10) main_cset6_slider_pane_g7

0x32a6,	// (0x00045f1c) main_cset6_slider_pane_g8_ParamLimits

0x32a6,	// (0x00045f1c) main_cset6_slider_pane_g8

0xb7ca,	// (0x0004e440) main_cset6_slider_pane_g9_ParamLimits

0xb7ca,	// (0x0004e440) main_cset6_slider_pane_g9

0xb7d6,	// (0x0004e44c) main_cset6_slider_pane_g10_ParamLimits

0xb7d6,	// (0x0004e44c) main_cset6_slider_pane_g10

0xb7b2,	// (0x0004e428) main_cset6_slider_pane_g11_ParamLimits

0xb7b2,	// (0x0004e428) main_cset6_slider_pane_g11

0xb7e2,	// (0x0004e458) main_cset6_slider_pane_g12_ParamLimits

0xb7e2,	// (0x0004e458) main_cset6_slider_pane_g12

0xb7ee,	// (0x0004e464) main_cset6_slider_pane_g13_ParamLimits

0xb7ee,	// (0x0004e464) main_cset6_slider_pane_g13

0xb7fa,	// (0x0004e470) main_cset6_slider_pane_g14_ParamLimits

0xb7fa,	// (0x0004e470) main_cset6_slider_pane_g14

0xb806,	// (0x0004e47c) main_cset6_slider_pane_g15_ParamLimits

0xb806,	// (0x0004e47c) main_cset6_slider_pane_g15

0xb7be,	// (0x0004e434) main_cset6_slider_pane_g16_ParamLimits

0xb7be,	// (0x0004e434) main_cset6_slider_pane_g16

0xb81e,	// (0x0004e494) main_cset6_slider_pane_g17_ParamLimits

0xb81e,	// (0x0004e494) main_cset6_slider_pane_g17

0x0011,

0xfb48,	// (0x000527be) main_cset6_slider_pane_g_ParamLimits

0xfb48,	// (0x000527be) main_cset6_slider_pane_g

0x3a94,	// (0x0004670a) main_cset6_slider_pane_t1_ParamLimits

0x3a94,	// (0x0004670a) main_cset6_slider_pane_t1

0xb82a,	// (0x0004e4a0) main_cset6_slider_pane_t2_ParamLimits

0xb82a,	// (0x0004e4a0) main_cset6_slider_pane_t2

0x3ad5,	// (0x0004674b) main_cset6_slider_pane_t3_ParamLimits

0x3ad5,	// (0x0004674b) main_cset6_slider_pane_t3

0xb855,	// (0x0004e4cb) main_cset6_slider_pane_t4_ParamLimits

0xb855,	// (0x0004e4cb) main_cset6_slider_pane_t4

0x3b00,	// (0x00046776) main_cset6_slider_pane_t5_ParamLimits

0x3b00,	// (0x00046776) main_cset6_slider_pane_t5

0x3b2b,	// (0x000467a1) main_cset6_slider_pane_t7_ParamLimits

0x3b2b,	// (0x000467a1) main_cset6_slider_pane_t7

0xb880,	// (0x0004e4f6) main_cset6_slider_pane_t8_ParamLimits

0xb880,	// (0x0004e4f6) main_cset6_slider_pane_t8

0xb8a4,	// (0x0004e51a) main_cset6_slider_pane_t9_ParamLimits

0xb8a4,	// (0x0004e51a) main_cset6_slider_pane_t9

0xb8c8,	// (0x0004e53e) main_cset6_slider_pane_t10_ParamLimits

0xb8c8,	// (0x0004e53e) main_cset6_slider_pane_t10

0xb8ec,	// (0x0004e562) main_cset6_slider_pane_t11_ParamLimits

0xb8ec,	// (0x0004e562) main_cset6_slider_pane_t11

0x3b61,	// (0x000467d7) main_cset6_slider_pane_t14_ParamLimits

0x3b61,	// (0x000467d7) main_cset6_slider_pane_t14

0x3b9a,	// (0x00046810) main_cset6_slider_pane_t15_ParamLimits

0x3b9a,	// (0x00046810) main_cset6_slider_pane_t15

0x000b,

0xfb6d,	// (0x000527e3) main_cset6_slider_pane_t_ParamLimits

0xfb6d,	// (0x000527e3) main_cset6_slider_pane_t

0x3368,	// (0x00045fde) cset_slider_pane_g1_copy1

0x3371,	// (0x00045fe7) cset_slider_pane_g2_copy1

0x337a,	// (0x00045ff0) cset_slider_pane_g3_copy1

0xd7d4,	// (0x0005044a) bg_popup_sub_pane_cp011_copy1

0x3402,	// (0x00046078) main_cset_text_pane_g1_copy1

0x340a,	// (0x00046080) main_cset_text_pane_t1_copy1

0x3418,	// (0x0004608e) main_cset_text_pane_t2_copy1

0x3426,	// (0x0004609c) main_cset_text_pane_t3_copy1

0x3434,	// (0x000460aa) main_cset_text_pane_t4_copy1

0x3442,	// (0x000460b8) main_cset_text_pane_t5_copy1

0x3450,	// (0x000460c6) main_cset_text_pane_t6_copy1

0x345e,	// (0x000460d4) main_cset_text_pane_t7_copy1

0xb92d,	// (0x0004e5a3) main_cset_text2_pane_t1_copy1

0x8a95,	// (0x0004b70b) main_ncimui_pane

0x8aee,	// (0x0004b764) popup_query_ncimui_window_ParamLimits

0x8aee,	// (0x0004b764) popup_query_ncimui_window

0x2ade,	// (0x00045754) field_cale_ev2_pane_g4_ParamLimits

0x2ade,	// (0x00045754) field_cale_ev2_pane_g4

0x9bf1,	// (0x0004c867) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9bf1,	// (0x0004c867) cell_video_dialer_keypad_pane_g2

0x0001,

0xf847,	// (0x000524bd) cell_video_dialer_keypad_pane_g_ParamLimits

0xf847,	// (0x000524bd) cell_video_dialer_keypad_pane_g

0x9c09,	// (0x0004c87f) cell_video_dialer_keypad_pane_t1

0xd7d4,	// (0x0005044a) bg_popup_window_pane_cp012

0xe800,	// (0x00051476) heading_pane_cp06

0x3c23,	// (0x00046899) ncim_query_content_pane

0xd7d4,	// (0x0005044a) bg_popup_heading_pane_cp01

0x3c2b,	// (0x000468a1) ncim_heading_pane_t1

0x3c39,	// (0x000468af) ncim_indicator_popup_pane

0x3c4b,	// (0x000468c1) ncim_query_button_pane

0x3c5f,	// (0x000468d5) ncim_query_content_pane_t1

0x3c71,	// (0x000468e7) ncim_query_content_pane_t2

0x0005,

0xfbb1,	// (0x00052827) ncim_query_content_pane_t

0x3cab,	// (0x00046921) ncim_query_list_pane

0x3cbd,	// (0x00046933) ncim_query_popup_pane

0x3c39,	// (0x000468af) ncim_indicator_popup_pane_ParamLimits

0xba6e,	// (0x0004e6e4) ncim_query_content_pane_g1_ParamLimits

0xba6e,	// (0x0004e6e4) ncim_query_content_pane_g1

0x3c5f,	// (0x000468d5) ncim_query_content_pane_t1_ParamLimits

0x3c71,	// (0x000468e7) ncim_query_content_pane_t2_ParamLimits

0xba7a,	// (0x0004e6f0) ncim_query_content_pane_t3_ParamLimits

0xba7a,	// (0x0004e6f0) ncim_query_content_pane_t3

0xba97,	// (0x0004e70d) ncim_query_content_pane_t4_ParamLimits

0xba97,	// (0x0004e70d) ncim_query_content_pane_t4

0xbab4,	// (0x0004e72a) ncim_query_content_pane_t5_ParamLimits

0xbab4,	// (0x0004e72a) ncim_query_content_pane_t5

0x3c83,	// (0x000468f9) ncim_query_content_pane_t6_ParamLimits

0x3c83,	// (0x000468f9) ncim_query_content_pane_t6

0xfbb1,	// (0x00052827) ncim_query_content_pane_t_ParamLimits

0x3cab,	// (0x00046921) ncim_query_list_pane_ParamLimits

0x3cbd,	// (0x00046933) ncim_query_popup_pane_ParamLimits

0x3cd1,	// (0x00046947) wait_bar_pane_cp04

0xd7d4,	// (0x0005044a) input_focus_pane_cp011

0x3cd9,	// (0x0004694f) ncim_query_popup_pane_t1

0x3ce7,	// (0x0004695d) ncim_list_query_list_pane_ParamLimits

0x3ce7,	// (0x0004695d) ncim_list_query_list_pane

0xd7d4,	// (0x0005044a) bg_button_pane_cp027

0x3cfa,	// (0x00046970) ncim_query_button_pane_g1

0xd7d4,	// (0x0005044a) list_highlight_pane_cp012

0x3d04,	// (0x0004697a) ncim_list_query_list_pane_g1

0x3d0c,	// (0x00046982) ncim_list_query_list_pane_t1

0xa1f7,	// (0x0004ce6d) cam4_indicators_pane_g3_ParamLimits

0xa1f7,	// (0x0004ce6d) cam4_indicators_pane_g3

0xa2a8,	// (0x0004cf1e) vid4_indicators_pane_g5_ParamLimits

0xa2a8,	// (0x0004cf1e) vid4_indicators_pane_g5

0xb1e7,	// (0x0004de5d) vid4_progress_pane_g5_ParamLimits

0xb1e7,	// (0x0004de5d) vid4_progress_pane_g5

0xb95e,	// (0x0004e5d4) main_ncimui_pane_g1

0xb9c4,	// (0x0004e63a) ncimui_group_query_pane_ParamLimits

0xb9c4,	// (0x0004e63a) ncimui_group_query_pane

0xba0c,	// (0x0004e682) ncimui_list_pane_ParamLimits

0xba0c,	// (0x0004e682) ncimui_list_pane

0xba31,	// (0x0004e6a7) ncimui_text_pane_ParamLimits

0xba31,	// (0x0004e6a7) ncimui_text_pane

0xbad1,	// (0x0004e747) ncimui_text_pane_t1_ParamLimits

0xbad1,	// (0x0004e747) ncimui_text_pane_t1

0x3d23,	// (0x00046999) ncimui_list_single_graphic_pane_ParamLimits

0x3d23,	// (0x00046999) ncimui_list_single_graphic_pane

0xbaef,	// (0x0004e765) ncimui_query_pane_ParamLimits

0xbaef,	// (0x0004e765) ncimui_query_pane

0xd7d4,	// (0x0005044a) list_highlight_pane_cp013

0x3d33,	// (0x000469a9) ncim_list_query_list_pane_t1_copy1

0x3d41,	// (0x000469b7) ncim_list_single_graphic_pane_g1

0x3d49,	// (0x000469bf) ncim_query_button_pane_cp01

0x3d55,	// (0x000469cb) ncim_query_entry_pane_ParamLimits

0x3d55,	// (0x000469cb) ncim_query_entry_pane

0x3d68,	// (0x000469de) ncimui_query_pane_g1

0x3d74,	// (0x000469ea) ncimui_query_pane_t1_ParamLimits

0x3d74,	// (0x000469ea) ncimui_query_pane_t1

0xebdb,	// (0x00051851) input_focus_pane_cp012

0x3d8d,	// (0x00046a03) ncim_query_entry_pane_t1

0xdf3a,	// (0x00050bb0) main_im_pane_ParamLimits

0x8a95,	// (0x0004b70b) main_mobtv_pane_ParamLimits

0x8a95,	// (0x0004b70b) main_mobtv_pane

0xb7ca,	// (0x0004e440) main_cset6_slider_pane_g18_ParamLimits

0xb7ca,	// (0x0004e440) main_cset6_slider_pane_g18

0xb7ee,	// (0x0004e464) main_cset6_slider_pane_g19_ParamLimits

0xb7ee,	// (0x0004e464) main_cset6_slider_pane_g19

0xee31,	// (0x00051aa7) bg_main_mobtv_pane_ParamLimits

0xee31,	// (0x00051aa7) bg_main_mobtv_pane

0xbaff,	// (0x0004e775) main_mobtv_info_pane

0xbb08,	// (0x0004e77e) main_mobtv_loading_pane_ParamLimits

0xbb08,	// (0x0004e77e) main_mobtv_loading_pane

0x3d9f,	// (0x00046a15) main_mobtv_pg_channel_list_pane

0x3da9,	// (0x00046a1f) main_mobtv_pg_hdr_pane

0xbb15,	// (0x0004e78b) main_mobtv_programe_curr_pane_ParamLimits

0xbb15,	// (0x0004e78b) main_mobtv_programe_curr_pane

0xbb22,	// (0x0004e798) main_mobtv_programe_next_pane_ParamLimits

0xbb22,	// (0x0004e798) main_mobtv_programe_next_pane

0x3db2,	// (0x00046a28) popup_mobtv_noti_window

0xe183,	// (0x00050df9) main_tv_pg_hdr_pane_g1

0x3dba,	// (0x00046a30) main_tv_pg_hdr_pane_g2

0x3dc2,	// (0x00046a38) main_tv_pg_hdr_pane_g3

0x3dca,	// (0x00046a40) main_tv_pg_hdr_pane_g4

0x3dd2,	// (0x00046a48) main_tv_pg_hdr_pane_g5

0x3dda,	// (0x00046a50) main_tv_pg_hdr_pane_g6

0x3de2,	// (0x00046a58) main_tv_pg_hdr_pane_g7

0x3dea,	// (0x00046a60) main_tv_pg_hdr_pane_g8

0x3df2,	// (0x00046a68) main_tv_pg_hdr_pane_g9

0x3dfa,	// (0x00046a70) main_tv_pg_hdr_pane_g10

0x3e04,	// (0x00046a7a) main_tv_pg_hdr_pane_g11

0x000a,

0xfbbe,	// (0x00052834) main_tv_pg_hdr_pane_g

0x3e0e,	// (0x00046a84) main_tv_pg_hdr_pane_t1

0x3e1c,	// (0x00046a92) main_tv_pg_hdr_pane_t2

0x3e2a,	// (0x00046aa0) main_tv_pg_hdr_pane_t3

0x3e38,	// (0x00046aae) main_tv_pg_hdr_pane_t4

0x3e46,	// (0x00046abc) main_tv_pg_hdr_pane_t5

0x0004,

0xfbd5,	// (0x0005284b) main_tv_pg_hdr_pane_t

0x3e54,	// (0x00046aca) single_mobtv_pg_channel_pane_ParamLimits

0x3e54,	// (0x00046aca) single_mobtv_pg_channel_pane

0x3e66,	// (0x00046adc) single_mobtv_pg_channel_table_pane

0x3e6f,	// (0x00046ae5) single_mobtv_pg_channel_thumb_pane

0x3e78,	// (0x00046aee) single_tv_pg_channel_pane_g1

0x3e81,	// (0x00046af7) single_tv_pg_channel_pane_g2

0x0001,

0xfbe0,	// (0x00052856) single_tv_pg_channel_pane_g

0xdec4,	// (0x00050b3a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xdec4,	// (0x00050b3a) bg_single_mobtv_pg_channel_thumb_pane

0x3e8a,	// (0x00046b00) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x3e8a,	// (0x00046b00) single_mobtv_pg_channel_thumb_pane_g1

0x3e98,	// (0x00046b0e) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x3e98,	// (0x00046b0e) single_mobtv_pg_channel_thumb_pane_g2

0x3ea4,	// (0x00046b1a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x3ea4,	// (0x00046b1a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbe5,	// (0x0005285b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbe5,	// (0x0005285b) single_mobtv_pg_channel_thumb_pane_g

0x3eb0,	// (0x00046b26) single_mobtv_pg_channel_thumb_pane_t1

0x3ebe,	// (0x00046b34) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbec,	// (0x00052862) single_mobtv_pg_channel_thumb_pane_t

0xe183,	// (0x00050df9) bg_single_mobtv_pg_channel_table_pane_g1

0xe183,	// (0x00050df9) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3ef,	// (0x00052065) bg_single_mobtv_pg_channel_table_pane_g

0x3ecc,	// (0x00046b42) single_mobtv_pg_channel_table_pane_t1

0x3eda,	// (0x00046b50) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbf1,	// (0x00052867) single_mobtv_pg_channel_table_pane_t

0xbb37,	// (0x0004e7ad) main_mobtv_info_pane_g1_ParamLimits

0xbb37,	// (0x0004e7ad) main_mobtv_info_pane_g1

0xbb53,	// (0x0004e7c9) main_mobtv_info_pane_t1_ParamLimits

0xbb53,	// (0x0004e7c9) main_mobtv_info_pane_t1

0xbbb9,	// (0x0004e82f) main_mobtv_info_pane_t2_ParamLimits

0xbbb9,	// (0x0004e82f) main_mobtv_info_pane_t2

0x0002,

0xfbfb,	// (0x00052871) main_mobtv_info_pane_t_ParamLimits

0xfbfb,	// (0x00052871) main_mobtv_info_pane_t

0xbc3c,	// (0x0004e8b2) wait_bar_pane_cp05

0xbc4c,	// (0x0004e8c2) main_mobtv_loading_pane_g1_ParamLimits

0xbc4c,	// (0x0004e8c2) main_mobtv_loading_pane_g1

0xbc58,	// (0x0004e8ce) main_mobtv_loading_pane_g2_ParamLimits

0xbc58,	// (0x0004e8ce) main_mobtv_loading_pane_g2

0xbc64,	// (0x0004e8da) main_mobtv_loading_pane_g3_ParamLimits

0xbc64,	// (0x0004e8da) main_mobtv_loading_pane_g3

0x0002,

0xfc02,	// (0x00052878) main_mobtv_loading_pane_g_ParamLimits

0xfc02,	// (0x00052878) main_mobtv_loading_pane_g

0x3ee8,	// (0x00046b5e) main_mobtv_loading_pane_t1_ParamLimits

0x3ee8,	// (0x00046b5e) main_mobtv_loading_pane_t1

0x3f00,	// (0x00046b76) main_mobtv_loading_pane_t2_ParamLimits

0x3f00,	// (0x00046b76) main_mobtv_loading_pane_t2

0x0001,

0xfc09,	// (0x0005287f) main_mobtv_loading_pane_t_ParamLimits

0xfc09,	// (0x0005287f) main_mobtv_loading_pane_t

0xbc70,	// (0x0004e8e6) wait_bar_pane_cp06_ParamLimits

0xbc70,	// (0x0004e8e6) wait_bar_pane_cp06

0x3f24,	// (0x00046b9a) main_mobtv_programe_curr_pane_t1

0x3f32,	// (0x00046ba8) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc0e,	// (0x00052884) main_mobtv_programe_curr_pane_t

0x3f40,	// (0x00046bb6) main_mobtv_programe_next_pane_t1

0x3f4e,	// (0x00046bc4) main_mobtv_programe_next_pane_t2

0x3f5c,	// (0x00046bd2) main_mobtv_programe_next_pane_t3

0x0002,

0xfc13,	// (0x00052889) main_mobtv_programe_next_pane_t

0xd7d4,	// (0x0005044a) bg_popup_mobtv_noti_window_pane

0x3f6a,	// (0x00046be0) popup_mobtv_noti_window_g1

0x3f72,	// (0x00046be8) popup_mobtv_noti_window_t1

0x3f80,	// (0x00046bf6) popup_mobtv_noti_window_t2

0x0001,

0xfc1a,	// (0x00052890) popup_mobtv_noti_window_t

0xe183,	// (0x00050df9) bg_popup_mobtv_noti_window_pane_g1

0x6241,	// (0x00048eb7) sc_clock_pane

0x6241,	// (0x00048eb7) main_fs_bigclock_pane

0xb407,	// (0x0004e07d) blid2_tripm_pane_t4_ParamLimits

0xb407,	// (0x0004e07d) blid2_tripm_pane_t4

0xbc7c,	// (0x0004e8f2) sc_clock_pane_g1_ParamLimits

0xbc7c,	// (0x0004e8f2) sc_clock_pane_g1

0xbc8a,	// (0x0004e900) sc_clock_pane_t1_ParamLimits

0xbc8a,	// (0x0004e900) sc_clock_pane_t1

0xbc9d,	// (0x0004e913) sc_clock_pane_t2_ParamLimits

0xbc9d,	// (0x0004e913) sc_clock_pane_t2

0xbcaf,	// (0x0004e925) sc_clock_pane_t3_ParamLimits

0xbcaf,	// (0x0004e925) sc_clock_pane_t3

0x0004,

0xfc1f,	// (0x00052895) sc_clock_pane_t_ParamLimits

0xfc1f,	// (0x00052895) sc_clock_pane_t

0xc8b9,	// (0x0004f52f) main_fs_bigclock_indicator_pane_ParamLimits

0xc8b9,	// (0x0004f52f) main_fs_bigclock_indicator_pane

0xbd2a,	// (0x0004e9a0) main_fs_bigclock_pane_g1_ParamLimits

0xbd2a,	// (0x0004e9a0) main_fs_bigclock_pane_g1

0xc8c5,	// (0x0004f53b) main_fs_bigclock_pane_t1_ParamLimits

0xc8c5,	// (0x0004f53b) main_fs_bigclock_pane_t1

0xc8d7,	// (0x0004f54d) main_fs_bigclock_pane_t2_ParamLimits

0xc8d7,	// (0x0004f54d) main_fs_bigclock_pane_t2

0xc8e9,	// (0x0004f55f) main_fs_bigclock_pane_t3_ParamLimits

0xc8e9,	// (0x0004f55f) main_fs_bigclock_pane_t3

0x0002,

0xfde8,	// (0x00052a5e) main_fs_bigclock_pane_t_ParamLimits

0xfde8,	// (0x00052a5e) main_fs_bigclock_pane_t

0xc8fb,	// (0x0004f571) main_fs_bigclock_indicator_pane_g1

0x3c53,	// (0x000468c9) ncim_query_content_pane_g2_ParamLimits

0x3c53,	// (0x000468c9) ncim_query_content_pane_g2

0x0001,

0xfbac,	// (0x00052822) ncim_query_content_pane_g_ParamLimits

0xfbac,	// (0x00052822) ncim_query_content_pane_g

0xbcc1,	// (0x0004e937) sc_clock_pane_t4_ParamLimits

0xbcc1,	// (0x0004e937) sc_clock_pane_t4

0x8a95,	// (0x0004b70b) main_radioblah_pane

0xa096,	// (0x0004cd0c) cell_call4_button_pane_t1_copy1_ParamLimits

0xa096,	// (0x0004cd0c) cell_call4_button_pane_t1_copy1

0xb976,	// (0x0004e5ec) main_ncimui_pane_t1_ParamLimits

0xb976,	// (0x0004e5ec) main_ncimui_pane_t1

0xb990,	// (0x0004e606) main_ncimui_pane_t2_ParamLimits

0xb990,	// (0x0004e606) main_ncimui_pane_t2

0x0002,

0xfba5,	// (0x0005281b) main_ncimui_pane_t_ParamLimits

0xfba5,	// (0x0005281b) main_ncimui_pane_t

0x40c1,	// (0x00046d37) main_radioblah_anim_pane_ParamLimits

0x40c1,	// (0x00046d37) main_radioblah_anim_pane

0x40d2,	// (0x00046d48) main_radioblah_info_pane_ParamLimits

0x40d2,	// (0x00046d48) main_radioblah_info_pane

0x40e6,	// (0x00046d5c) main_radioblah_pane_t1_ParamLimits

0x40e6,	// (0x00046d5c) main_radioblah_pane_t1

0x4102,	// (0x00046d78) main_radioblah_pane_t2_ParamLimits

0x4102,	// (0x00046d78) main_radioblah_pane_t2

0x0003,

0xfc40,	// (0x000528b6) main_radioblah_pane_t_ParamLimits

0xfc40,	// (0x000528b6) main_radioblah_pane_t

0xbd72,	// (0x0004e9e8) main_radioblah_rocker_ctrl_pane_ParamLimits

0xbd72,	// (0x0004e9e8) main_radioblah_rocker_ctrl_pane

0x414a,	// (0x00046dc0) main_radioblah_info_pane_t1_ParamLimits

0x414a,	// (0x00046dc0) main_radioblah_info_pane_t1

0xbdb7,	// (0x0004ea2d) main_radioblah_info_pane_t2_ParamLimits

0xbdb7,	// (0x0004ea2d) main_radioblah_info_pane_t2

0x0003,

0xfc49,	// (0x000528bf) main_radioblah_info_pane_t_ParamLimits

0xfc49,	// (0x000528bf) main_radioblah_info_pane_t

0xe183,	// (0x00050df9) main_radioblah_rocker_ctrl_pane_g1

0xbe5f,	// (0x0004ead5) main_radioblah_rocker_ctrl_pane_g2

0xbe67,	// (0x0004eadd) main_radioblah_rocker_ctrl_pane_g3

0xbe6f,	// (0x0004eae5) main_radioblah_rocker_ctrl_pane_g4

0xbe77,	// (0x0004eaed) main_radioblah_rocker_ctrl_pane_g5

0xbe7f,	// (0x0004eaf5) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc52,	// (0x000528c8) main_radioblah_rocker_ctrl_pane_g

0xb92d,	// (0x0004e5a3) main_cset_text2_pane_t1_copy1_ParamLimits

0xa119,	// (0x0004cd8f) cam4_image_uncrop_qvga_pane

0xa23b,	// (0x0004ceb1) vid4_image_uncrop_qcif_pane

0xb585,	// (0x0004e1fb) cam6_image_uncrop_qvga_pane_ParamLimits

0xb585,	// (0x0004e1fb) cam6_image_uncrop_qvga_pane

0x391e,	// (0x00046594) vid6_image_uncrop_qcif_pane_ParamLimits

0x391e,	// (0x00046594) vid6_image_uncrop_qcif_pane

0xd7d4,	// (0x0005044a) bg_popup_preview_window_pane_cp03

0x3bf9,	// (0x0004686f) list_cset_text2_pane

0x3c01,	// (0x00046877) main_cset6_text2_pane_g1

0x3c09,	// (0x0004687f) main_cset6_text2_pane_t1

0x4a60,	// (0x000476d6) list_cset_text2_pane_t1_ParamLimits

0x4a60,	// (0x000476d6) list_cset_text2_pane_t1

0x8a95,	// (0x0004b70b) main_radioblah_pane_ParamLimits

0xbc2a,	// (0x0004e8a0) main_mobtv_info_pane_t3_ParamLimits

0xbc2a,	// (0x0004e8a0) main_mobtv_info_pane_t3

0xbd60,	// (0x0004e9d6) main_radioblah_pane_g1

0xbd8b,	// (0x0004ea01) main_radioblah_info_pane_g1

0xbe06,	// (0x0004ea7c) main_radioblah_info_pane_t3_ParamLimits

0xbe06,	// (0x0004ea7c) main_radioblah_info_pane_t3

0x7c4f,	// (0x0004a8c5) highlight_cell_cale_month_pane_ParamLimits

0x7c4f,	// (0x0004a8c5) highlight_cell_cale_month_pane

0x6241,	// (0x00048eb7) main_phob_fisheye_pane

0x2b7f,	// (0x000457f5) scroll_pane_cp0031_ParamLimits

0x2b7f,	// (0x000457f5) scroll_pane_cp0031

0x3a28,	// (0x0004669e) wait_bar_pane_cp08_ParamLimits

0xb74f,	// (0x0004e3c5) cset_list_set_pane_copy1_ParamLimits

0x4184,	// (0x00046dfa) highlight_cell_cale_month_pane_g1

0xbe87,	// (0x0004eafd) highlight_cell_cale_month_pane_t1

0x418c,	// (0x00046e02) list_gen_pane_cp01

0x3285,	// (0x00045efb) scroll_pane_01

0xee51,	// (0x00051ac7) list_single_double_fisheye_pane

0x4195,	// (0x00046e0b) list_double_fisheye_pane_g1_ParamLimits

0x4195,	// (0x00046e0b) list_double_fisheye_pane_g1

0x41a1,	// (0x00046e17) list_double_fisheye_pane_g2_ParamLimits

0x41a1,	// (0x00046e17) list_double_fisheye_pane_g2

0xee5a,	// (0x00051ad0) list_double_fisheye_pane_g3_ParamLimits

0xee5a,	// (0x00051ad0) list_double_fisheye_pane_g3

0x0004,

0xfc5f,	// (0x000528d5) list_double_fisheye_pane_g_ParamLimits

0xfc5f,	// (0x000528d5) list_double_fisheye_pane_g

0x41d2,	// (0x00046e48) list_double_fisheye_pane_t1_ParamLimits

0x41d2,	// (0x00046e48) list_double_fisheye_pane_t1

0x41ed,	// (0x00046e63) list_double_fisheye_pane_t2_ParamLimits

0x41ed,	// (0x00046e63) list_double_fisheye_pane_t2

0x0001,

0xfc6a,	// (0x000528e0) list_double_fisheye_pane_t_ParamLimits

0xfc6a,	// (0x000528e0) list_double_fisheye_pane_t

0x6241,	// (0x00048eb7) main_call5_pane

0xbce7,	// (0x0004e95d) sc_swipe_pane_ParamLimits

0xbce7,	// (0x0004e95d) sc_swipe_pane

0xbea1,	// (0x0004eb17) call5_image_pane_ParamLimits

0xbea1,	// (0x0004eb17) call5_image_pane

0xbead,	// (0x0004eb23) call5_swipe_1_pane_ParamLimits

0xbead,	// (0x0004eb23) call5_swipe_1_pane

0xbeb9,	// (0x0004eb2f) call5_swipe_2_pane_ParamLimits

0xbeb9,	// (0x0004eb2f) call5_swipe_2_pane

0xbed1,	// (0x0004eb47) popup_call5_audio_first_window_ParamLimits

0xbed1,	// (0x0004eb47) popup_call5_audio_first_window

0xdec4,	// (0x00050b3a) call5_swipe_1_pane_g1_ParamLimits

0xdec4,	// (0x00050b3a) call5_swipe_1_pane_g1

0x420f,	// (0x00046e85) call5_swipe_1_pane_g2_ParamLimits

0x420f,	// (0x00046e85) call5_swipe_1_pane_g2

0x0001,

0xfc6f,	// (0x000528e5) call5_swipe_1_pane_g_ParamLimits

0xfc6f,	// (0x000528e5) call5_swipe_1_pane_g

0x421b,	// (0x00046e91) call5_swipe_1_pane_t1_ParamLimits

0x421b,	// (0x00046e91) call5_swipe_1_pane_t1

0xdec4,	// (0x00050b3a) call5_swipe_2_pane_g1_ParamLimits

0xdec4,	// (0x00050b3a) call5_swipe_2_pane_g1

0x4230,	// (0x00046ea6) call5_swipe_2_pane_g2_ParamLimits

0x4230,	// (0x00046ea6) call5_swipe_2_pane_g2

0x0001,

0xfc74,	// (0x000528ea) call5_swipe_2_pane_g_ParamLimits

0xfc74,	// (0x000528ea) call5_swipe_2_pane_g

0x423c,	// (0x00046eb2) call5_swipe_2_pane_t1_ParamLimits

0x423c,	// (0x00046eb2) call5_swipe_2_pane_t1

0x4251,	// (0x00046ec7) sc_swipe_pane_g1_ParamLimits

0x4251,	// (0x00046ec7) sc_swipe_pane_g1

0x425e,	// (0x00046ed4) sc_swipe_pane_g2_ParamLimits

0x425e,	// (0x00046ed4) sc_swipe_pane_g2

0x0001,

0xfc79,	// (0x000528ef) sc_swipe_pane_g_ParamLimits

0xfc79,	// (0x000528ef) sc_swipe_pane_g

0x426a,	// (0x00046ee0) sc_swipe_pane_t1_ParamLimits

0x426a,	// (0x00046ee0) sc_swipe_pane_t1

0x6241,	// (0x00048eb7) main_cmail_launcher_pane

0xbedd,	// (0x0004eb53) aid_size_cell_cmail_l_ParamLimits

0xbedd,	// (0x0004eb53) aid_size_cell_cmail_l

0xbeed,	// (0x0004eb63) grid_cmail_l_pane_ParamLimits

0xbeed,	// (0x0004eb63) grid_cmail_l_pane

0xbef9,	// (0x0004eb6f) cell_cmail_l_pane_ParamLimits

0xbef9,	// (0x0004eb6f) cell_cmail_l_pane

0xbf0b,	// (0x0004eb81) cell_cmail_l_pane_g1_ParamLimits

0xbf0b,	// (0x0004eb81) cell_cmail_l_pane_g1

0xbf1b,	// (0x0004eb91) cell_cmail_l_pane_t1_ParamLimits

0xbf1b,	// (0x0004eb91) cell_cmail_l_pane_t1

0xbf31,	// (0x0004eba7) cell_cmail_l_pane_t2_ParamLimits

0xbf31,	// (0x0004eba7) cell_cmail_l_pane_t2

0x0001,

0xfc7e,	// (0x000528f4) cell_cmail_l_pane_t_ParamLimits

0xfc7e,	// (0x000528f4) cell_cmail_l_pane_t

0xebdb,	// (0x00051851) grid_highlight_pane_cp018_ParamLimits

0xebdb,	// (0x00051851) grid_highlight_pane_cp018

0x60db,	// (0x00048d51) main2_pane_ParamLimits

0x60db,	// (0x00048d51) main2_pane

0xdfdb,	// (0x00050c51) popup_sp_fs_action_menu_bg_pane_g1

0xdfe3,	// (0x00050c59) popup_sp_fs_action_menu_bg_pane_g2

0xdfeb,	// (0x00050c61) popup_sp_fs_action_menu_bg_pane_g3

0xdff3,	// (0x00050c69) popup_sp_fs_action_menu_bg_pane_g4

0xdffb,	// (0x00050c71) popup_sp_fs_action_menu_bg_pane_g5

0xe003,	// (0x00050c79) popup_sp_fs_action_menu_bg_pane_g6

0xe00b,	// (0x00050c81) popup_sp_fs_action_menu_bg_pane_g7

0xe013,	// (0x00050c89) popup_sp_fs_action_menu_bg_pane_g8

0xe01b,	// (0x00050c91) popup_sp_fs_action_menu_bg_pane_g9

0xe023,	// (0x00050c99) popup_sp_fs_action_menu_bg_pane_g10

0xe023,	// (0x00050c99) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x00051dbb) popup_sp_fs_action_menu_bg_pane_g

0x11c3,	// (0x00043e39) list_medium_line_x2_t3_g3_g1_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_x2_t3_g3_g1

0x11cf,	// (0x00043e45) list_medium_line_x2_t3_g3_g2_ParamLimits

0x11cf,	// (0x00043e45) list_medium_line_x2_t3_g3_g2

0x11c3,	// (0x00043e39) list_medium_line_x2_t3_g3_g3_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x00051e69) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x00051e69) list_medium_line_x2_t3_g3_g

0x11db,	// (0x00043e51) list_medium_line_x2_t3_g3_t1_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_x2_t3_g3_t1

0x11db,	// (0x00043e51) list_medium_line_x2_t3_g3_t2_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_x2_t3_g3_t2

0x11ee,	// (0x00043e64) list_medium_line_x2_t3_g3_t3_ParamLimits

0x11ee,	// (0x00043e64) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x00051e70) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x00051e70) list_medium_line_x2_t3_g3_t

0x11c3,	// (0x00043e39) list_medium_line_x2_t3_g2_g1_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_x2_t3_g2_g1

0x11c3,	// (0x00043e39) list_medium_line_x2_t3_g2_g2_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x00051e77) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x00051e77) list_medium_line_x2_t3_g2_g

0x11db,	// (0x00043e51) list_medium_line_x2_t3_g2_t1_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_x2_t3_g2_t1

0x11db,	// (0x00043e51) list_medium_line_x2_t3_g2_t2_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_x2_t3_g2_t2

0x11ee,	// (0x00043e64) list_medium_line_x2_t3_g2_t3_ParamLimits

0x11ee,	// (0x00043e64) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x00051e70) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x00051e70) list_medium_line_x2_t3_g2_t

0x11c3,	// (0x00043e39) list_medium_line_x2_t4_g4_g1_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_x2_t4_g4_g1

0x11cf,	// (0x00043e45) list_medium_line_x2_t4_g4_g2_ParamLimits

0x11cf,	// (0x00043e45) list_medium_line_x2_t4_g4_g2

0x11cf,	// (0x00043e45) list_medium_line_x2_t4_g4_g3_ParamLimits

0x11cf,	// (0x00043e45) list_medium_line_x2_t4_g4_g3

0x11c3,	// (0x00043e39) list_medium_line_x2_t4_g4_g4_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x00051e7c) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x00051e7c) list_medium_line_x2_t4_g4_g

0x11db,	// (0x00043e51) list_medium_line_x2_t4_g4_t1_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_x2_t4_g4_t1

0x11db,	// (0x00043e51) list_medium_line_x2_t4_g4_t2_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_x2_t4_g4_t2

0x11db,	// (0x00043e51) list_medium_line_x2_t4_g4_t3_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_x2_t4_g4_t3

0x11ee,	// (0x00043e64) list_medium_line_x2_t4_g4_t4_ParamLimits

0x11ee,	// (0x00043e64) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x00051e85) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x00051e85) list_medium_line_x2_t4_g4_t

0x11c3,	// (0x00043e39) list_medium_line_x2_t2_g4_g1_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_x2_t2_g4_g1

0x11cf,	// (0x00043e45) list_medium_line_x2_t2_g4_g2_ParamLimits

0x11cf,	// (0x00043e45) list_medium_line_x2_t2_g4_g2

0x11cf,	// (0x00043e45) list_medium_line_x2_t2_g4_g3_ParamLimits

0x11cf,	// (0x00043e45) list_medium_line_x2_t2_g4_g3

0x11c3,	// (0x00043e39) list_medium_line_x2_t2_g4_g4_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x00051e7c) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x00051e7c) list_medium_line_x2_t2_g4_g

0x11db,	// (0x00043e51) list_medium_line_x2_t2_g4_t1_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_x2_t2_g4_t1

0x11ee,	// (0x00043e64) list_medium_line_x2_t2_g4_t2_ParamLimits

0x11ee,	// (0x00043e64) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x00051eec) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x00051eec) list_medium_line_x2_t2_g4_t

0x11c3,	// (0x00043e39) list_medium_line_x2_t2_g3_g1_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_x2_t2_g3_g1

0x11cf,	// (0x00043e45) list_medium_line_x2_t2_g3_g2_ParamLimits

0x11cf,	// (0x00043e45) list_medium_line_x2_t2_g3_g2

0x11c3,	// (0x00043e39) list_medium_line_x2_t2_g3_g3_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x00051e69) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x00051e69) list_medium_line_x2_t2_g3_g

0x11db,	// (0x00043e51) list_medium_line_x2_t2_g3_t1_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_x2_t2_g3_t1

0x11ee,	// (0x00043e64) list_medium_line_x2_t2_g3_t2_ParamLimits

0x11ee,	// (0x00043e64) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x00051eec) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x00051eec) list_medium_line_x2_t2_g3_t

0x7de1,	// (0x0004aa57) main_sp_fs_list_pane_ParamLimits

0x7de1,	// (0x0004aa57) main_sp_fs_list_pane

0x7dee,	// (0x0004aa64) sp_fs_scroll_pane_ParamLimits

0x7dee,	// (0x0004aa64) sp_fs_scroll_pane

0x122f,	// (0x00043ea5) list_medium_line_x2_t3_t1

0x122f,	// (0x00043ea5) list_medium_line_x2_t3_t2

0x123e,	// (0x00043eb4) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x00051f37) list_medium_line_x2_t3_t

0x122f,	// (0x00043ea5) list_medium_line_x3_t4_t1

0x122f,	// (0x00043ea5) list_medium_line_x3_t4_t2

0x122f,	// (0x00043ea5) list_medium_line_x3_t4_t3

0x122f,	// (0x00043ea5) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x00051f3e) list_medium_line_x3_t4_t

0x122f,	// (0x00043ea5) list_medium_line_x4_t5_t1

0x122f,	// (0x00043ea5) list_medium_line_x4_t5_t2

0x122f,	// (0x00043ea5) list_medium_line_x4_t5_t3

0x122f,	// (0x00043ea5) list_medium_line_x4_t5_t4

0x122f,	// (0x00043ea5) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x00051f47) list_medium_line_x4_t5_t

0x11c3,	// (0x00043e39) list_medium_line_t4_g4_g1_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_t4_g4_g1

0x11c3,	// (0x00043e39) list_medium_line_t4_g4_g2_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_t4_g4_g2

0x11c3,	// (0x00043e39) list_medium_line_t4_g4_g3_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_t4_g4_g3

0x11c3,	// (0x00043e39) list_medium_line_t4_g4_g4_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_t4_g4_g4

0x0003,

0xf2dc,	// (0x00051f52) list_medium_line_t4_g4_g_ParamLimits

0xf2dc,	// (0x00051f52) list_medium_line_t4_g4_g

0x11db,	// (0x00043e51) list_medium_line_t4_g4_t1_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_t4_g4_t1

0x11db,	// (0x00043e51) list_medium_line_t4_g4_t2_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_t4_g4_t2

0x11db,	// (0x00043e51) list_medium_line_t4_g4_t3_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_t4_g4_t3

0x11db,	// (0x00043e51) list_medium_line_t4_g4_t4_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_t4_g4_t4

0x0003,

0xf2e5,	// (0x00051f5b) list_medium_line_t4_g4_t_ParamLimits

0xf2e5,	// (0x00051f5b) list_medium_line_t4_g4_t

0x7f09,	// (0x0004ab7f) chi_dic_find_pane_g1

0x8ab1,	// (0x0004b727) main_tport_pane

0x122f,	// (0x00043ea5) list_medium_line_plain_t1

0x11c3,	// (0x00043e39) list_medium_line_t2_g2_g1_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_t2_g2_g1

0x33b6,	// (0x0004602c) list_medium_line_t2_g2_g2_ParamLimits

0x33b6,	// (0x0004602c) list_medium_line_t2_g2_g2

0x0001,

0xf9b6,	// (0x0005262c) list_medium_line_t2_g2_g_ParamLimits

0xf9b6,	// (0x0005262c) list_medium_line_t2_g2_g

0x11db,	// (0x00043e51) list_medium_line_t2_g2_t1_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_t2_g2_t1

0x11db,	// (0x00043e51) list_medium_line_t2_g2_t2_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_t2_g2_t2

0x0001,

0xf9bb,	// (0x00052631) list_medium_line_t2_g2_t_ParamLimits

0xf9bb,	// (0x00052631) list_medium_line_t2_g2_t

0x36d2,	// (0x00046348) aid_sp_fs_list_icon_a_sm

0x36da,	// (0x00046350) aid_sp_fs_list_icon_d

0x36e2,	// (0x00046358) aid_sp_fs_text_primary

0x36eb,	// (0x00046361) aid_sp_fs_text_secondary

0xb243,	// (0x0004deb9) list_medium_line

0xb243,	// (0x0004deb9) list_medium_line_g2

0xb243,	// (0x0004deb9) list_medium_line_g3

0xb243,	// (0x0004deb9) list_medium_line_plain

0xb243,	// (0x0004deb9) list_medium_line_plain_t2

0xb243,	// (0x0004deb9) list_medium_line_plain_t3

0xb243,	// (0x0004deb9) list_medium_line_right_icon

0xb243,	// (0x0004deb9) list_medium_line_right_iconx2

0xb243,	// (0x0004deb9) list_medium_line_t2

0xb243,	// (0x0004deb9) list_medium_line_t2_g2

0xb243,	// (0x0004deb9) list_medium_line_t2_g3

0xb243,	// (0x0004deb9) list_medium_line_t2_right_icon

0xb243,	// (0x0004deb9) list_medium_line_t2_right_iconx2

0xb243,	// (0x0004deb9) list_medium_line_t3

0xb243,	// (0x0004deb9) list_medium_line_t3_g2

0xb243,	// (0x0004deb9) list_medium_line_t3_g3

0xb243,	// (0x0004deb9) list_medium_line_t3_right_iconx2

0xee3f,	// (0x00051ab5) list_medium_line_t4_g4

0x36f4,	// (0x0004636a) list_medium_line_x2

0x36f4,	// (0x0004636a) list_medium_line_x2_t2_g2

0x36f4,	// (0x0004636a) list_medium_line_x2_t2_g3

0x36f4,	// (0x0004636a) list_medium_line_x2_t2_g4

0x36f4,	// (0x0004636a) list_medium_line_x2_t3

0x36f4,	// (0x0004636a) list_medium_line_x2_t3_g2

0x36f4,	// (0x0004636a) list_medium_line_x2_t3_g3

0x36f4,	// (0x0004636a) list_medium_line_x2_t3_g4

0x36f4,	// (0x0004636a) list_medium_line_x2_t4_g2

0x36f4,	// (0x0004636a) list_medium_line_x2_t4_g4

0xee48,	// (0x00051abe) list_medium_line_x3

0xee48,	// (0x00051abe) list_medium_line_x3_t4

0xee48,	// (0x00051abe) list_medium_line_x3_t4_g4

0xee3f,	// (0x00051ab5) list_medium_line_x4_t4

0xee3f,	// (0x00051ab5) list_medium_line_x4_t4_g7

0xee3f,	// (0x00051ab5) list_medium_line_x4_t5

0xb24c,	// (0x0004dec2) list_single_fs_dyc_pane_ParamLimits

0xb24c,	// (0x0004dec2) list_single_fs_dyc_pane

0x11c3,	// (0x00043e39) list_medium_line_x4_t4_g7_g1_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_x4_t4_g7_g1

0xdec4,	// (0x00050b3a) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdec4,	// (0x00050b3a) list_medium_line_x4_t4_g7_g2

0x11cf,	// (0x00043e45) list_medium_line_x4_t4_g7_g3_ParamLimits

0x11cf,	// (0x00043e45) list_medium_line_x4_t4_g7_g3

0xdec4,	// (0x00050b3a) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdec4,	// (0x00050b3a) list_medium_line_x4_t4_g7_g4

0xdec4,	// (0x00050b3a) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdec4,	// (0x00050b3a) list_medium_line_x4_t4_g7_g5

0xdec4,	// (0x00050b3a) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdec4,	// (0x00050b3a) list_medium_line_x4_t4_g7_g6

0xded2,	// (0x00050b48) list_medium_line_x4_t4_g7_g7_ParamLimits

0xded2,	// (0x00050b48) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb86,	// (0x000527fc) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb86,	// (0x000527fc) list_medium_line_x4_t4_g7_g

0x11db,	// (0x00043e51) list_medium_line_x4_t4_g7_t1_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_x4_t4_g7_t1

0x11db,	// (0x00043e51) list_medium_line_x4_t4_g7_t2_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_x4_t4_g7_t2

0x11db,	// (0x00043e51) list_medium_line_x4_t4_g7_t3_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_x4_t4_g7_t3

0x3bd3,	// (0x00046849) list_medium_line_x4_t4_g7_t4_ParamLimits

0x3bd3,	// (0x00046849) list_medium_line_x4_t4_g7_t4

0x3be6,	// (0x0004685c) list_medium_line_x4_t4_g7_t5_ParamLimits

0x3be6,	// (0x0004685c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb95,	// (0x0005280b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb95,	// (0x0005280b) list_medium_line_x4_t4_g7_t

0xb910,	// (0x0004e586) list_single_dyc_row_pane_ParamLimits

0xb910,	// (0x0004e586) list_single_dyc_row_pane

0xbe95,	// (0x0004eb0b) call5_gesture_pane_ParamLimits

0xbe95,	// (0x0004eb0b) call5_gesture_pane

0xbec5,	// (0x0004eb3b) call5_windows_pane_ParamLimits

0xbec5,	// (0x0004eb3b) call5_windows_pane

0xbf49,	// (0x0004ebbf) call5_swipe_1_pane_cp_ParamLimits

0xbf49,	// (0x0004ebbf) call5_swipe_1_pane_cp

0xbf55,	// (0x0004ebcb) call5_swipe_2_pane_cp_ParamLimits

0xbf55,	// (0x0004ebcb) call5_swipe_2_pane_cp

0xe107,	// (0x00050d7d) call5_image_pane_cp

0xbf61,	// (0x0004ebd7) popup_call5_audio_first_window_cp_ParamLimits

0xbf61,	// (0x0004ebd7) popup_call5_audio_first_window_cp

0x4251,	// (0x00046ec7) call5_swipe_1_pane_g1_cp_ParamLimits

0x4251,	// (0x00046ec7) call5_swipe_1_pane_g1_cp

0x427f,	// (0x00046ef5) call5_swipe_1_pane_g2_cp

0x426a,	// (0x00046ee0) call5_swipe_1_pane_t1_cp_ParamLimits

0x426a,	// (0x00046ee0) call5_swipe_1_pane_t1_cp

0x4251,	// (0x00046ec7) call5_swipe_2_pane_g1_cp_ParamLimits

0x4251,	// (0x00046ec7) call5_swipe_2_pane_g1_cp

0x4287,	// (0x00046efd) call5_swipe_2_pane_g2_cp

0x428f,	// (0x00046f05) call5_swipe_2_pane_t1_cp_ParamLimits

0x428f,	// (0x00046f05) call5_swipe_2_pane_t1_cp

0xebdb,	// (0x00051851) main_sp_fs_email_pane

0x42a4,	// (0x00046f1a) main_sp_fs_listscroll_pane_te

0xbf6d,	// (0x0004ebe3) popup_sp_fs_action_menu_pane_ParamLimits

0xbf6d,	// (0x0004ebe3) popup_sp_fs_action_menu_pane

0xe183,	// (0x00050df9) bg_sp_fs_ctrlbar_pane_g1

0x2db3,	// (0x00045a29) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x2dc5,	// (0x00045a3b) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2dbc,	// (0x00045a32) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe183,	// (0x00050df9) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc83,	// (0x000528f9) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2512,	// (0x00045188) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2512,	// (0x00045188) bg_sp_fs_ctrlbar_ddmenu_pane

0x42ad,	// (0x00046f23) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x42ad,	// (0x00046f23) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x42b9,	// (0x00046f2f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x42b9,	// (0x00046f2f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc8c,	// (0x00052902) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc8c,	// (0x00052902) main_sp_fs_ctrlbar_ddmenu_pane_g

0x42c5,	// (0x00046f3b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x42c5,	// (0x00046f3b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe023,	// (0x00050c99) list_medium_line_t2_right_icon_g1

0x122f,	// (0x00043ea5) list_medium_line_t2_right_icon_t1

0x122f,	// (0x00043ea5) list_medium_line_t2_right_icon_t2

0x0001,

0xfc91,	// (0x00052907) list_medium_line_t2_right_icon_t

0xee03,	// (0x00051a79) bg_sp_fs_ctrlbar_pane_ParamLimits

0xee03,	// (0x00051a79) bg_sp_fs_ctrlbar_pane

0xbff4,	// (0x0004ec6a) main_sp_fs_ctrlbar_button_pane_cp01

0xbffc,	// (0x0004ec72) main_sp_fs_ctrlbar_ddmenu_pane

0x4317,	// (0x00046f8d) main_sp_fs_ctrlbar_pane_g1

0x4323,	// (0x00046f99) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc96,	// (0x0005290c) main_sp_fs_ctrlbar_pane_g

0xc036,	// (0x0004ecac) main_sp_fs_ctrlbar_pane_t1

0xc07e,	// (0x0004ecf4) main_sp_fs_ctrlbar_pane

0xc092,	// (0x0004ed08) main_sp_fs_listscroll_pane_te_cp01

0xc0a3,	// (0x0004ed19) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc0a3,	// (0x0004ed19) popup_sp_fs_action_menu_pane_cp01

0xebdb,	// (0x00051851) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xebdb,	// (0x00051851) bg_sp_fs_highlight_list_pane_cp01

0xc0c3,	// (0x0004ed39) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc0c3,	// (0x0004ed39) sp_fs_action_menu_list_gene_pane_g1

0x434a,	// (0x00046fc0) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x434a,	// (0x00046fc0) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfca4,	// (0x0005291a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfca4,	// (0x0005291a) sp_fs_action_menu_list_gene_pane_g

0xc0d2,	// (0x0004ed48) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xc0d2,	// (0x0004ed48) sp_fs_action_menu_list_gene_pane_t1

0xc0ea,	// (0x0004ed60) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc0ea,	// (0x0004ed60) sp_fs_action_menu_list_gene_pane

0x4357,	// (0x00046fcd) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x4357,	// (0x00046fcd) popup_sp_fs_action_menu_bg_pane

0xc107,	// (0x0004ed7d) sp_fs_action_menu_list_pane_ParamLimits

0xc107,	// (0x0004ed7d) sp_fs_action_menu_list_pane

0x4365,	// (0x00046fdb) sp_fs_scroll_pane_cp01_ParamLimits

0x4365,	// (0x00046fdb) sp_fs_scroll_pane_cp01

0x122f,	// (0x00043ea5) list_medium_line_plain_t2_t1

0x122f,	// (0x00043ea5) list_medium_line_plain_t2_t2

0x0001,

0xfc91,	// (0x00052907) list_medium_line_plain_t2_t

0x122f,	// (0x00043ea5) list_medium_line_plain_t3_t1

0x122f,	// (0x00043ea5) list_medium_line_plain_t3_t2

0x122f,	// (0x00043ea5) list_medium_line_plain_t3_t3

0x0002,

0xfca9,	// (0x0005291f) list_medium_line_plain_t3_t

0x11c3,	// (0x00043e39) list_medium_line_x2_t2_g2_g1_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_x2_t2_g2_g1

0x11c3,	// (0x00043e39) list_medium_line_x2_t2_g2_g2_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x00051e77) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x00051e77) list_medium_line_x2_t2_g2_g

0x11db,	// (0x00043e51) list_medium_line_x2_t2_g2_t1_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_x2_t2_g2_t1

0x11ee,	// (0x00043e64) list_medium_line_x2_t2_g2_t2_ParamLimits

0x11ee,	// (0x00043e64) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x00051eec) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x00051eec) list_medium_line_x2_t2_g2_t

0x11c3,	// (0x00043e39) list_medium_line_x2_t4_g2_g1_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_x2_t4_g2_g1

0x438b,	// (0x00047001) list_medium_line_x2_t4_g2_g2_ParamLimits

0x438b,	// (0x00047001) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcb0,	// (0x00052926) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcb0,	// (0x00052926) list_medium_line_x2_t4_g2_g

0x11db,	// (0x00043e51) list_medium_line_x2_t4_g2_t1_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_x2_t4_g2_t1

0x11db,	// (0x00043e51) list_medium_line_x2_t4_g2_t2_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_x2_t4_g2_t2

0x11db,	// (0x00043e51) list_medium_line_x2_t4_g2_t3_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_x2_t4_g2_t3

0x11ee,	// (0x00043e64) list_medium_line_x2_t4_g2_t4_ParamLimits

0x11ee,	// (0x00043e64) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x00051e85) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x00051e85) list_medium_line_x2_t4_g2_t

0xe023,	// (0x00050c99) list_medium_line_t3_right_iconx2_g1

0xe183,	// (0x00050df9) list_medium_line_t3_right_iconx2_g2

0x439c,	// (0x00047012) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcb5,	// (0x0005292b) list_medium_line_t3_right_iconx2_g

0x122f,	// (0x00043ea5) list_medium_line_t3_right_iconx2_t1

0x122f,	// (0x00043ea5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc91,	// (0x00052907) list_medium_line_t3_right_iconx2_t

0x11c3,	// (0x00043e39) list_medium_line_x3_t4_g4_g1_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_x3_t4_g4_g1

0x11cf,	// (0x00043e45) list_medium_line_x3_t4_g4_g2_ParamLimits

0x11cf,	// (0x00043e45) list_medium_line_x3_t4_g4_g2

0x11c3,	// (0x00043e39) list_medium_line_x3_t4_g4_g3_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_x3_t4_g4_g3

0x11cf,	// (0x00043e45) list_medium_line_x3_t4_g4_g4_ParamLimits

0x11cf,	// (0x00043e45) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcbc,	// (0x00052932) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcbc,	// (0x00052932) list_medium_line_x3_t4_g4_g

0x11db,	// (0x00043e51) list_medium_line_x3_t4_g4_t1_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_x3_t4_g4_t1

0x11db,	// (0x00043e51) list_medium_line_x3_t4_g4_t2_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_x3_t4_g4_t2

0x11db,	// (0x00043e51) list_medium_line_x3_t4_g4_t3_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_x3_t4_g4_t3

0x43a5,	// (0x0004701b) list_medium_line_x3_t4_g4_t4_ParamLimits

0x43a5,	// (0x0004701b) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcc5,	// (0x0005293b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcc5,	// (0x0005293b) list_medium_line_x3_t4_g4_t

0xc125,	// (0x0004ed9b) list_single_dyc_row_text_pane_t1_ParamLimits

0xc125,	// (0x0004ed9b) list_single_dyc_row_text_pane_t1

0xc15c,	// (0x0004edd2) list_single_dyc_row_text_pane_t2_ParamLimits

0xc15c,	// (0x0004edd2) list_single_dyc_row_text_pane_t2

0x43c2,	// (0x00047038) list_single_dyc_row_text_pane_t3_ParamLimits

0x43c2,	// (0x00047038) list_single_dyc_row_text_pane_t3

0x0005,

0xfcce,	// (0x00052944) list_single_dyc_row_text_pane_t_ParamLimits

0xfcce,	// (0x00052944) list_single_dyc_row_text_pane_t

0x43e6,	// (0x0004705c) list_single_dyc_row_pane_g1_ParamLimits

0x43e6,	// (0x0004705c) list_single_dyc_row_pane_g1

0x43f2,	// (0x00047068) list_single_dyc_row_pane_g2_ParamLimits

0x43f2,	// (0x00047068) list_single_dyc_row_pane_g2

0x43fe,	// (0x00047074) list_single_dyc_row_pane_g3_ParamLimits

0x43fe,	// (0x00047074) list_single_dyc_row_pane_g3

0x440a,	// (0x00047080) list_single_dyc_row_pane_g4_ParamLimits

0x440a,	// (0x00047080) list_single_dyc_row_pane_g4

0x0003,

0xfcdb,	// (0x00052951) list_single_dyc_row_pane_g_ParamLimits

0xfcdb,	// (0x00052951) list_single_dyc_row_pane_g

0x4416,	// (0x0004708c) list_single_dyc_row_text_pane_ParamLimits

0x4416,	// (0x0004708c) list_single_dyc_row_text_pane

0xd7d4,	// (0x0005044a) bg_sp_fs_scroll_pane

0x4435,	// (0x000470ab) thumb_sp_fs_scroll_pane

0x11c3,	// (0x00043e39) list_medium_line_g1_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_g1

0x11db,	// (0x00043e51) list_medium_line_t1_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_t1

0x11c3,	// (0x00043e39) list_medium_line_x2_g1_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_x2_g1

0x33b6,	// (0x0004602c) list_medium_line_x2_g2_ParamLimits

0x33b6,	// (0x0004602c) list_medium_line_x2_g2

0x0001,

0xf9b6,	// (0x0005262c) list_medium_line_x2_g_ParamLimits

0xf9b6,	// (0x0005262c) list_medium_line_x2_g

0xebc7,	// (0x0005183d) list_medium_line_x2_t1_ParamLimits

0xebc7,	// (0x0005183d) list_medium_line_x2_t1

0x11c3,	// (0x00043e39) list_medium_line_x3_g1_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_x3_g1

0x443e,	// (0x000470b4) list_medium_line_x3_g2_ParamLimits

0x443e,	// (0x000470b4) list_medium_line_x3_g2

0x0001,

0xfce4,	// (0x0005295a) list_medium_line_x3_g_ParamLimits

0xfce4,	// (0x0005295a) list_medium_line_x3_g

0x444b,	// (0x000470c1) list_medium_line_x3_t1_ParamLimits

0x444b,	// (0x000470c1) list_medium_line_x3_t1

0x445f,	// (0x000470d5) thumb_sp_fs_scroll_pane_g1

0x4468,	// (0x000470de) thumb_sp_fs_scroll_pane_g2

0x4471,	// (0x000470e7) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfce9,	// (0x0005295f) thumb_sp_fs_scroll_pane_g

0x445f,	// (0x000470d5) bg_sp_fs_scroll_pane_g1

0x4468,	// (0x000470de) bg_sp_fs_scroll_pane_g2

0x4471,	// (0x000470e7) bg_sp_fs_scroll_pane_g3

0x0002,

0xfce9,	// (0x0005295f) bg_sp_fs_scroll_pane_g

0x11c3,	// (0x00043e39) list_medium_line_x2_t3_g4_g1_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_x2_t3_g4_g1

0x11cf,	// (0x00043e45) list_medium_line_x2_t3_g4_g2_ParamLimits

0x11cf,	// (0x00043e45) list_medium_line_x2_t3_g4_g2

0x11cf,	// (0x00043e45) list_medium_line_x2_t3_g4_g3_ParamLimits

0x11cf,	// (0x00043e45) list_medium_line_x2_t3_g4_g3

0x11c3,	// (0x00043e39) list_medium_line_x2_t3_g4_g4_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x00051e7c) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x00051e7c) list_medium_line_x2_t3_g4_g

0x11db,	// (0x00043e51) list_medium_line_x2_t3_g4_t1_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_x2_t3_g4_t1

0x11db,	// (0x00043e51) list_medium_line_x2_t3_g4_t2_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_x2_t3_g4_t2

0x11ee,	// (0x00043e64) list_medium_line_x2_t3_g4_t3_ParamLimits

0x11ee,	// (0x00043e64) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x00051e70) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x00051e70) list_medium_line_x2_t3_g4_t

0x11c3,	// (0x00043e39) list_medium_line_g2_g1_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_g2_g1

0x33b6,	// (0x0004602c) list_medium_line_g2_g2_ParamLimits

0x33b6,	// (0x0004602c) list_medium_line_g2_g2

0x0001,

0xf9b6,	// (0x0005262c) list_medium_line_g2_g_ParamLimits

0xf9b6,	// (0x0005262c) list_medium_line_g2_g

0x11db,	// (0x00043e51) list_medium_line_g2_t1_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_g2_t1

0x11c3,	// (0x00043e39) list_medium_line_t3_g2_g1_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_t3_g2_g1

0x33b6,	// (0x0004602c) list_medium_line_t3_g2_g2_ParamLimits

0x33b6,	// (0x0004602c) list_medium_line_t3_g2_g2

0x0001,

0xf9b6,	// (0x0005262c) list_medium_line_t3_g2_g_ParamLimits

0xf9b6,	// (0x0005262c) list_medium_line_t3_g2_g

0x11db,	// (0x00043e51) list_medium_line_t3_g2_t1_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_t3_g2_t1

0x11db,	// (0x00043e51) list_medium_line_t3_g2_t2_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_t3_g2_t2

0x11db,	// (0x00043e51) list_medium_line_t3_g2_t3_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_t3_g2_t3

0x0002,

0xfcf0,	// (0x00052966) list_medium_line_t3_g2_t_ParamLimits

0xfcf0,	// (0x00052966) list_medium_line_t3_g2_t

0x3368,	// (0x00045fde) list_medium_line_right_icon_g1

0x122f,	// (0x00043ea5) list_medium_line_right_icon_t1

0x11c3,	// (0x00043e39) list_medium_line_t2_g1_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_t2_g1

0x11db,	// (0x00043e51) list_medium_line_t2_t1_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_t2_t1

0x11db,	// (0x00043e51) list_medium_line_t2_t2_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_t2_t2

0x0001,

0xf9bb,	// (0x00052631) list_medium_line_t2_t_ParamLimits

0xf9bb,	// (0x00052631) list_medium_line_t2_t

0x11c3,	// (0x00043e39) list_medium_line_t3_g1_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_t3_g1

0x11db,	// (0x00043e51) list_medium_line_t3_t1_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_t3_t1

0x11db,	// (0x00043e51) list_medium_line_t3_t2_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_t3_t2

0x11db,	// (0x00043e51) list_medium_line_t3_t3_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_t3_t3

0x0002,

0xfcf0,	// (0x00052966) list_medium_line_t3_t_ParamLimits

0xfcf0,	// (0x00052966) list_medium_line_t3_t

0x11c3,	// (0x00043e39) list_medium_line_g3_g1_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_g3_g1

0x11cf,	// (0x00043e45) list_medium_line_g3_g2_ParamLimits

0x11cf,	// (0x00043e45) list_medium_line_g3_g2

0x11cf,	// (0x00043e45) list_medium_line_g3_g3_ParamLimits

0x11cf,	// (0x00043e45) list_medium_line_g3_g3

0x0002,

0xfcf7,	// (0x0005296d) list_medium_line_g3_g_ParamLimits

0xfcf7,	// (0x0005296d) list_medium_line_g3_g

0x11db,	// (0x00043e51) list_medium_line_g3_t1_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_g3_t1

0x11c3,	// (0x00043e39) list_medium_line_t2_g3_g1_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_t2_g3_g1

0x11cf,	// (0x00043e45) list_medium_line_t2_g3_g2_ParamLimits

0x11cf,	// (0x00043e45) list_medium_line_t2_g3_g2

0x11cf,	// (0x00043e45) list_medium_line_t2_g3_g3_ParamLimits

0x11cf,	// (0x00043e45) list_medium_line_t2_g3_g3

0x0002,

0xfcf7,	// (0x0005296d) list_medium_line_t2_g3_g_ParamLimits

0xfcf7,	// (0x0005296d) list_medium_line_t2_g3_g

0x11db,	// (0x00043e51) list_medium_line_t2_g3_t1_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_t2_g3_t1

0x11db,	// (0x00043e51) list_medium_line_t2_g3_t2_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_t2_g3_t2

0x0001,

0xf9bb,	// (0x00052631) list_medium_line_t2_g3_t_ParamLimits

0xf9bb,	// (0x00052631) list_medium_line_t2_g3_t

0x11c3,	// (0x00043e39) list_medium_line_t3_g3_g1_ParamLimits

0x11c3,	// (0x00043e39) list_medium_line_t3_g3_g1

0x11cf,	// (0x00043e45) list_medium_line_t3_g3_g2_ParamLimits

0x11cf,	// (0x00043e45) list_medium_line_t3_g3_g2

0x11cf,	// (0x00043e45) list_medium_line_t3_g3_g3_ParamLimits

0x11cf,	// (0x00043e45) list_medium_line_t3_g3_g3

0x0002,

0xfcf7,	// (0x0005296d) list_medium_line_t3_g3_g_ParamLimits

0xfcf7,	// (0x0005296d) list_medium_line_t3_g3_g

0x11db,	// (0x00043e51) list_medium_line_t3_g3_t1_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_t3_g3_t1

0x11db,	// (0x00043e51) list_medium_line_t3_g3_t2_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_t3_g3_t2

0x11db,	// (0x00043e51) list_medium_line_t3_g3_t3_ParamLimits

0x11db,	// (0x00043e51) list_medium_line_t3_g3_t3

0x0002,

0xfcf0,	// (0x00052966) list_medium_line_t3_g3_t_ParamLimits

0xfcf0,	// (0x00052966) list_medium_line_t3_g3_t

0xe023,	// (0x00050c99) list_medium_line_right_iconx2_g1

0xe023,	// (0x00050c99) list_medium_line_right_iconx2_g2

0x0001,

0xfcfe,	// (0x00052974) list_medium_line_right_iconx2_g

0x447a,	// (0x000470f0) list_medium_line_right_iconx2_t1

0xe023,	// (0x00050c99) list_medium_line_t2_right_iconx2_g1

0xe023,	// (0x00050c99) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcfe,	// (0x00052974) list_medium_line_t2_right_iconx2_g

0x122f,	// (0x00043ea5) list_medium_line_t2_right_iconx2_t1

0x122f,	// (0x00043ea5) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc91,	// (0x00052907) list_medium_line_t2_right_iconx2_t

0x122f,	// (0x00043ea5) list_medium_line_x4_t4_t1

0x122f,	// (0x00043ea5) list_medium_line_x4_t4_t2

0x122f,	// (0x00043ea5) list_medium_line_x4_t4_t3

0x122f,	// (0x00043ea5) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x00051f3e) list_medium_line_x4_t4_t

0xc298,	// (0x0004ef0e) tport_appsw_pane_ParamLimits

0xc298,	// (0x0004ef0e) tport_appsw_pane

0xc2a4,	// (0x0004ef1a) tport_contact_pane_ParamLimits

0xc2a4,	// (0x0004ef1a) tport_contact_pane

0xc2b2,	// (0x0004ef28) tport_listscroll_pane_ParamLimits

0xc2b2,	// (0x0004ef28) tport_listscroll_pane

0xc2c0,	// (0x0004ef36) cell_tport_appsw_pane_ParamLimits

0xc2c0,	// (0x0004ef36) cell_tport_appsw_pane

0xded2,	// (0x00050b48) tport_appsw_pane_g1_ParamLimits

0xded2,	// (0x00050b48) tport_appsw_pane_g1

0x4489,	// (0x000470ff) tport_contact_pane_g1

0x4492,	// (0x00047108) tport_contact_pane_t1

0x44a0,	// (0x00047116) tport_contact_pane_t2

0x0001,

0xfd03,	// (0x00052979) tport_contact_pane_t

0x44ae,	// (0x00047124) list_tport_pane

0xe035,	// (0x00050cab) scroll_pane_cp_030

0x44bf,	// (0x00047135) cell_tport_appsw_pane_g1

0x44cf,	// (0x00047145) cell_tport_appsw_pane_t1

0x44dd,	// (0x00047153) grid_highlight_pane_cp019

0xc2e7,	// (0x0004ef5d) list_tport_double_graphic_pane_ParamLimits

0xc2e7,	// (0x0004ef5d) list_tport_double_graphic_pane

0xebdb,	// (0x00051851) list_highlight_pane_cp023_ParamLimits

0xebdb,	// (0x00051851) list_highlight_pane_cp023

0xc2f4,	// (0x0004ef6a) list_tport_double_graphic_pane_g1_ParamLimits

0xc2f4,	// (0x0004ef6a) list_tport_double_graphic_pane_g1

0xc301,	// (0x0004ef77) list_tport_double_graphic_pane_t1_ParamLimits

0xc301,	// (0x0004ef77) list_tport_double_graphic_pane_t1

0xc316,	// (0x0004ef8c) list_tport_double_graphic_pane_t2_ParamLimits

0xc316,	// (0x0004ef8c) list_tport_double_graphic_pane_t2

0x0001,

0xfd0f,	// (0x00052985) list_tport_double_graphic_pane_t_ParamLimits

0xfd0f,	// (0x00052985) list_tport_double_graphic_pane_t

0xd7d4,	// (0x0005044a) main_cale_note_pane

0xa43f,	// (0x0004d0b5) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa43f,	// (0x0004d0b5) cell_vitu2_function_top_wide_pane_cp01

0xbc3c,	// (0x0004e8b2) wait_bar_pane_cp05_ParamLimits

0xebdb,	// (0x00051851) listscroll_cmail_pane

0x44e5,	// (0x0004715b) list_cmail_pane

0xc328,	// (0x0004ef9e) list_cmail_body_pane

0xc328,	// (0x0004ef9e) list_single_cmail_header_caption_pane

0xc341,	// (0x0004efb7) list_single_cmail_header_detail_pane_ParamLimits

0xc341,	// (0x0004efb7) list_single_cmail_header_detail_pane

0x4501,	// (0x00047177) list_single_cmail_header_caption_pane_t1

0xc36c,	// (0x0004efe2) list_single_cmail_header_detail_pane_g1_ParamLimits

0xc36c,	// (0x0004efe2) list_single_cmail_header_detail_pane_g1

0x450f,	// (0x00047185) list_single_cmail_header_detail_pane_g2_ParamLimits

0x450f,	// (0x00047185) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd14,	// (0x0005298a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd14,	// (0x0005298a) list_single_cmail_header_detail_pane_g

0xc382,	// (0x0004eff8) list_single_cmail_header_detail_pane_t1_ParamLimits

0xc382,	// (0x0004eff8) list_single_cmail_header_detail_pane_t1

0x454c,	// (0x000471c2) list_single_cmail_header_editor_pane_bg_ParamLimits

0x454c,	// (0x000471c2) list_single_cmail_header_editor_pane_bg

0x4563,	// (0x000471d9) list_cmail_body_pane_g1

0x456c,	// (0x000471e2) list_cmail_body_pane_t1

0x315f,	// (0x00045dd5) list_single_cmail_header_editor_pane_bg_g1

0xe3a1,	// (0x00051017) list_single_cmail_header_editor_pane_bg_g1_copy1

0x316f,	// (0x00045de5) list_single_cmail_header_editor_pane_bg_g1_copy2

0x3167,	// (0x00045ddd) list_single_cmail_header_editor_pane_bg_g1_copy3

0x33ae,	// (0x00046024) list_single_cmail_header_editor_pane_bg_g1_copy4

0x318f,	// (0x00045e05) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x317f,	// (0x00045df5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3187,	// (0x00045dfd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe381,	// (0x00050ff7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc3be,	// (0x0004f034) calenote_gesture_pane_ParamLimits

0xc3be,	// (0x0004f034) calenote_gesture_pane

0xc3d6,	// (0x0004f04c) calenote_window_pane_ParamLimits

0xc3d6,	// (0x0004f04c) calenote_window_pane

0x457a,	// (0x000471f0) popup_note_window_cp01

0xc3ee,	// (0x0004f064) calenote_swipe_1_pane_ParamLimits

0xc3ee,	// (0x0004f064) calenote_swipe_1_pane

0xbf55,	// (0x0004ebcb) calenote_swipe_2_pane_ParamLimits

0xbf55,	// (0x0004ebcb) calenote_swipe_2_pane

0x4251,	// (0x00046ec7) calenote_swipe_1_pane_g1_ParamLimits

0x4251,	// (0x00046ec7) calenote_swipe_1_pane_g1

0x425e,	// (0x00046ed4) calenote_swipe_1_pane_g2_ParamLimits

0x425e,	// (0x00046ed4) calenote_swipe_1_pane_g2

0x0001,

0xfc79,	// (0x000528ef) calenote_swipe_1_pane_g_ParamLimits

0xfc79,	// (0x000528ef) calenote_swipe_1_pane_g

0x458c,	// (0x00047202) calenote_swipe_1_pane_t1_ParamLimits

0x458c,	// (0x00047202) calenote_swipe_1_pane_t1

0x4251,	// (0x00046ec7) calenote_swipe_2_pane_g1_ParamLimits

0x4251,	// (0x00046ec7) calenote_swipe_2_pane_g1

0x45ab,	// (0x00047221) calenote_swipe_2_pane_g2_ParamLimits

0x45ab,	// (0x00047221) calenote_swipe_2_pane_g2

0x0001,

0xfd20,	// (0x00052996) calenote_swipe_2_pane_g_ParamLimits

0xfd20,	// (0x00052996) calenote_swipe_2_pane_g

0x45b7,	// (0x0004722d) calenote_swipe_2_pane_t1_ParamLimits

0x45b7,	// (0x0004722d) calenote_swipe_2_pane_t1

0xd7d4,	// (0x0005044a) main_mup_navstr_pane

0x9527,	// (0x0004c19d) main_mup3_pane_t7_ParamLimits

0x9527,	// (0x0004c19d) main_mup3_pane_t7

0x9ce2,	// (0x0004c958) main_mp4_pane_g6_ParamLimits

0x9ce2,	// (0x0004c958) main_mp4_pane_g6

0x9fa9,	// (0x0004cc1f) main_image3_pane_t4_ParamLimits

0x9fa9,	// (0x0004cc1f) main_image3_pane_t4

0xc401,	// (0x0004f077) popup_navstr_preview_pane_ParamLimits

0xc401,	// (0x0004f077) popup_navstr_preview_pane

0xc40d,	// (0x0004f083) scroll_navstr_pane_ParamLimits

0xc40d,	// (0x0004f083) scroll_navstr_pane

0xd7d4,	// (0x0005044a) bg_popup_preview_window_pane_cp04

0x45de,	// (0x00047254) popup_navstr_preview_pane_t1

0xc419,	// (0x0004f08f) scroll_navstr_pane_g1_ParamLimits

0xc419,	// (0x0004f08f) scroll_navstr_pane_g1

0xc426,	// (0x0004f09c) scroll_navstr_pane_t1_ParamLimits

0xc426,	// (0x0004f09c) scroll_navstr_pane_t1

0x4583,	// (0x000471f9) bg_button_pane_cp014

0x4583,	// (0x000471f9) bg_button_pane_cp030

0x41b5,	// (0x00046e2b) list_double_fisheye_pane_g4_ParamLimits

0x41b5,	// (0x00046e2b) list_double_fisheye_pane_g4

0x41c1,	// (0x00046e37) list_double_fisheye_pane_g5_ParamLimits

0x41c1,	// (0x00046e37) list_double_fisheye_pane_g5

0x44f5,	// (0x0004716b) sp_fs_scroll_pane_cp03

0x4317,	// (0x00046f8d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x4323,	// (0x00046f99) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc96,	// (0x0005290c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc036,	// (0x0004ecac) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x44ed,	// (0x00047163) sp_fs_scroll_pane_cp02

0xe047,	// (0x00050cbd) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe047,	// (0x00050cbd) popup_sp_fs_calendar_preview_list_single_pane

0xd7d4,	// (0x0005044a) main_cam6_pano_pane

0x8a95,	// (0x0004b70b) main_mup3_pane_ParamLimits

0xd7d4,	// (0x0005044a) main_phacti_pane

0xbb2f,	// (0x0004e7a5) bg_button_pane_cp11

0xbb47,	// (0x0004e7bd) main_mobtv_info_pane_g2_ParamLimits

0xbb47,	// (0x0004e7bd) main_mobtv_info_pane_g2

0x0001,

0xfbf6,	// (0x0005286c) main_mobtv_info_pane_g_ParamLimits

0xfbf6,	// (0x0005286c) main_mobtv_info_pane_g

0xbcd3,	// (0x0004e949) sc_clock_pane_t5_ParamLimits

0xbcd3,	// (0x0004e949) sc_clock_pane_t5

0xbd60,	// (0x0004e9d6) main_radioblah_pane_g1_ParamLimits

0x411a,	// (0x00046d90) main_radioblah_pane_t3_ParamLimits

0x411a,	// (0x00046d90) main_radioblah_pane_t3

0x4132,	// (0x00046da8) main_radioblah_pane_t4_ParamLimits

0x4132,	// (0x00046da8) main_radioblah_pane_t4

0xbd7e,	// (0x0004e9f4) main_radioblah_text_pane_ParamLimits

0xbd7e,	// (0x0004e9f4) main_radioblah_text_pane

0xbd8b,	// (0x0004ea01) main_radioblah_info_pane_g1_ParamLimits

0xbe18,	// (0x0004ea8e) main_radioblah_info_pane_t4_ParamLimits

0xbe18,	// (0x0004ea8e) main_radioblah_info_pane_t4

0xebdb,	// (0x00051851) main_sp_fs_calendar_pane

0xc438,	// (0x0004f0ae) main_phacti_pane_g1

0xc440,	// (0x0004f0b6) phacti_note_pane_ParamLimits

0xc440,	// (0x0004f0b6) phacti_note_pane

0x45f5,	// (0x0004726b) phacti_term_pane_ParamLimits

0x45f5,	// (0x0004726b) phacti_term_pane

0x460a,	// (0x00047280) phacti_note_pane_t1_ParamLimits

0x460a,	// (0x00047280) phacti_note_pane_t1

0x4621,	// (0x00047297) phacti_term_pane_g1

0x4629,	// (0x0004729f) phacti_term_pane_t1_ParamLimits

0x4629,	// (0x0004729f) phacti_term_pane_t1

0x4653,	// (0x000472c9) popup_sp_fs_calendar_preview_list_single_pane_g1

0x465b,	// (0x000472d1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd2a,	// (0x000529a0) popup_sp_fs_calendar_preview_list_single_pane_g

0x4663,	// (0x000472d9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x4663,	// (0x000472d9) popup_sp_fs_calendar_preview_list_single_pane_t1

0x4679,	// (0x000472ef) aid_popup_sp_fs_bg_corner_pane

0xe183,	// (0x00050df9) popup_sp_fs_calendar_preview_bg_pane_g1

0xd7d4,	// (0x0005044a) popup_sp_fs_calendar_preview_bg_pane

0x4681,	// (0x000472f7) popup_sp_fs_calendar_preview_list_pane

0xee03,	// (0x00051a79) bg_main_sp_fs_cale_pane_ParamLimits

0xee03,	// (0x00051a79) bg_main_sp_fs_cale_pane

0x4692,	// (0x00047308) listscroll_cale_mrui_pane_ParamLimits

0x4692,	// (0x00047308) listscroll_cale_mrui_pane

0x46a7,	// (0x0004731d) listscroll_sp_fs_schedule_track_pane

0x46b0,	// (0x00047326) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x46b0,	// (0x00047326) main_sp_fs_ctrlbar_pane_cp01

0x46c3,	// (0x00047339) main_sp_fs_ribbon_pane

0x46cb,	// (0x00047341) popup_sp_fs_cale_preview_window

0xc497,	// (0x0004f10d) list_single_sp_fs_schedule_track_pane_ParamLimits

0xc497,	// (0x0004f10d) list_single_sp_fs_schedule_track_pane

0xe147,	// (0x00050dbd) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe147,	// (0x00050dbd) bg_sp_fs_highlight_list_pane_cp03

0xc4ad,	// (0x0004f123) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc4ad,	// (0x0004f123) list_single_sp_fs_schedule_track_pane_g1

0xc4b9,	// (0x0004f12f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc4b9,	// (0x0004f12f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd2f,	// (0x000529a5) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd2f,	// (0x000529a5) list_single_sp_fs_schedule_track_pane_g

0xc4c5,	// (0x0004f13b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc4c5,	// (0x0004f13b) list_single_sp_fs_schedule_track_pane_t1

0xc4dd,	// (0x0004f153) sp_fs_schedule_track_pane_ParamLimits

0xc4dd,	// (0x0004f153) sp_fs_schedule_track_pane

0x46da,	// (0x00047350) sp_fs_schedule_track_pane_g1

0x46e2,	// (0x00047358) sp_fs_schedule_track_pane_g2

0x46ea,	// (0x00047360) sp_fs_schedule_track_pane_g3

0x46f2,	// (0x00047368) sp_fs_schedule_track_pane_g4

0x46fa,	// (0x00047370) sp_fs_schedule_track_pane_g5

0x0004,

0xfd34,	// (0x000529aa) sp_fs_schedule_track_pane_g

0x315f,	// (0x00045dd5) bg_sp_fs_schedule_viewer_highlight_g1

0xe3a1,	// (0x00051017) bg_sp_fs_schedule_viewer_highlight_g2

0x3167,	// (0x00045ddd) bg_sp_fs_schedule_viewer_highlight_g3

0x316f,	// (0x00045de5) bg_sp_fs_schedule_viewer_highlight_g4

0x33ae,	// (0x00046024) bg_sp_fs_schedule_viewer_highlight_g5

0x317f,	// (0x00045df5) bg_sp_fs_schedule_viewer_highlight_g6

0x3187,	// (0x00045dfd) bg_sp_fs_schedule_viewer_highlight_g7

0x318f,	// (0x00045e05) bg_sp_fs_schedule_viewer_highlight_g8

0xe381,	// (0x00050ff7) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd3f,	// (0x000529b5) bg_sp_fs_schedule_viewer_highlight_g

0xd7d4,	// (0x0005044a) bg_main_sp_fs_ribbon_pane

0xa1a6,	// (0x0004ce1c) main_sp_fs_ribbon_pane_g1

0x4702,	// (0x00047378) main_sp_fs_ribbon_pane_t1

0xc4ed,	// (0x0004f163) main_sp_fs_ribbon_pane_t2

0x4711,	// (0x00047387) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd52,	// (0x000529c8) main_sp_fs_ribbon_pane_t

0x4720,	// (0x00047396) main_sp_fs_ribbon_scheduler_pane

0x4728,	// (0x0004739e) bg_main_sp_fs_ribbon_pane_g1

0x4731,	// (0x000473a7) bg_main_sp_fs_ribbon_pane_g2

0x473a,	// (0x000473b0) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd59,	// (0x000529cf) bg_main_sp_fs_ribbon_pane_g

0x4742,	// (0x000473b8) main_sp_fs_ribbon_scheduler_pane_g1

0x474b,	// (0x000473c1) main_sp_fs_ribbon_scheduler_pane_g2

0x4754,	// (0x000473ca) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd60,	// (0x000529d6) main_sp_fs_ribbon_scheduler_pane_g

0x475d,	// (0x000473d3) list_cale_mrui_pane

0xc4fc,	// (0x0004f172) sp_fs_scroll_pane_cp07_ParamLimits

0xc4fc,	// (0x0004f172) sp_fs_scroll_pane_cp07

0xc514,	// (0x0004f18a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc514,	// (0x0004f18a) bg_sp_fs_schedule_viewer_highlight

0x476a,	// (0x000473e0) list_single_sp_fs_schedule_track_pane_cp01

0x4772,	// (0x000473e8) list_sp_fs_schedule_track_pane

0x477a,	// (0x000473f0) sp_fs_scroll_pane_cp06_ParamLimits

0x477a,	// (0x000473f0) sp_fs_scroll_pane_cp06

0xe183,	// (0x00050df9) bgmain_sp_fs_calendar_pane_g1

0xc521,	// (0x0004f197) list_single_cale_mrui_pane_ParamLimits

0xc521,	// (0x0004f197) list_single_cale_mrui_pane

0x478c,	// (0x00047402) list_single_cale_mrui_row_pane_ParamLimits

0x478c,	// (0x00047402) list_single_cale_mrui_row_pane

0xc543,	// (0x0004f1b9) list_single_cale_mrui_row_pane_g1_ParamLimits

0xc543,	// (0x0004f1b9) list_single_cale_mrui_row_pane_g1

0xc57b,	// (0x0004f1f1) list_single_cale_mrui_row_pane_t1_ParamLimits

0xc57b,	// (0x0004f1f1) list_single_cale_mrui_row_pane_t1

0xc58d,	// (0x0004f203) list_single_cale_mrui_row_pane_t2_ParamLimits

0xc58d,	// (0x0004f203) list_single_cale_mrui_row_pane_t2

0xc5f3,	// (0x0004f269) list_single_cale_mrui_row_pane_t3_ParamLimits

0xc5f3,	// (0x0004f269) list_single_cale_mrui_row_pane_t3

0xc622,	// (0x0004f298) list_single_cale_mrui_row_pane_t4_ParamLimits

0xc622,	// (0x0004f298) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd6e,	// (0x000529e4) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd6e,	// (0x000529e4) list_single_cale_mrui_row_pane_t

0xc651,	// (0x0004f2c7) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xc651,	// (0x0004f2c7) list_single_cmail_header_editor_pane_bg_cp01

0xc675,	// (0x0004f2eb) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xc675,	// (0x0004f2eb) list_single_cmail_header_editor_pane_bg_cp02

0xc693,	// (0x0004f309) main_radioblah_text_pane_t1_ParamLimits

0xc693,	// (0x0004f309) main_radioblah_text_pane_t1

0x47af,	// (0x00047425) cam6_indi_pane_cp01

0x47b7,	// (0x0004742d) cam6_mode_pane_cp01

0x47bf,	// (0x00047435) cam6_pano_pane

0x47c8,	// (0x0004743e) cam6_zoom_pane_cp01

0x47d0,	// (0x00047446) cam6_pano_image_pane

0x47d9,	// (0x0004744f) cam6_pano_pane_g1

0x3e81,	// (0x00046af7) cam6_pano_pane_g2

0x47e2,	// (0x00047458) cam6_pano_pane_g3

0x47eb,	// (0x00047461) cam6_pano_pane_g4

0x2da0,	// (0x00045a16) cam6_pano_pane_g5

0x47f4,	// (0x0004746a) cam6_pano_pane_g6

0x47fc,	// (0x00047472) cam6_pano_pane_g7

0x4804,	// (0x0004747a) cam6_pano_pane_g8

0x480d,	// (0x00047483) cam6_pano_pane_g9

0x0008,

0xfd77,	// (0x000529ed) cam6_pano_pane_g

0xd7d4,	// (0x0005044a) main_browser_tag_pane

0x45d6,	// (0x0004724c) grid_navstr_albumart_pane

0x4816,	// (0x0004748c) cell_navstr_albumart_pane_ParamLimits

0x4816,	// (0x0004748c) cell_navstr_albumart_pane

0xec76,	// (0x000518ec) cell_navstr_albumart_pane_g1

0x222e,	// (0x00044ea4) cell_navstr_albumart_pane_g2

0x223e,	// (0x00044eb4) cell_navstr_albumart_pane_g3

0x2236,	// (0x00044eac) cell_navstr_albumart_pane_g4

0x0003,

0xfd8a,	// (0x00052a00) cell_navstr_albumart_pane_g

0xc6ac,	// (0x0004f322) bt_list_pane_ParamLimits

0xc6ac,	// (0x0004f322) bt_list_pane

0xc6c1,	// (0x0004f337) bt_list_pane_t1

0xc6d0,	// (0x0004f346) bt_list_pane_t2

0x0001,

0xfd93,	// (0x00052a09) bt_list_pane_t

0xd7d4,	// (0x0005044a) main_cale_prevew_pane

0xc6df,	// (0x0004f355) popup_cale_preview_window_ParamLimits

0xc6df,	// (0x0004f355) popup_cale_preview_window

0xebdb,	// (0x00051851) bg_popup_preview_window_pane_cp05_ParamLimits

0xebdb,	// (0x00051851) bg_popup_preview_window_pane_cp05

0x482d,	// (0x000474a3) list_cale_preview_pane_ParamLimits

0x482d,	// (0x000474a3) list_cale_preview_pane

0xc6f4,	// (0x0004f36a) list_double_cale_preview_pane_ParamLimits

0xc6f4,	// (0x0004f36a) list_double_cale_preview_pane

0xc705,	// (0x0004f37b) list_single_cale_preview_pane_ParamLimits

0xc705,	// (0x0004f37b) list_single_cale_preview_pane

0xc719,	// (0x0004f38f) list_single_cale_preview_pane_g1

0xc721,	// (0x0004f397) list_single_cale_preview_pane_t1_ParamLimits

0xc721,	// (0x0004f397) list_single_cale_preview_pane_t1

0x4839,	// (0x000474af) list_double_cale_preview_pane_g1

0x4841,	// (0x000474b7) list_double_cale_preview_pane_t1_ParamLimits

0x4841,	// (0x000474b7) list_double_cale_preview_pane_t1

0xc736,	// (0x0004f3ac) list_double_cale_preview_pane_t2_ParamLimits

0xc736,	// (0x0004f3ac) list_double_cale_preview_pane_t2

0x0001,

0xfd98,	// (0x00052a0e) list_double_cale_preview_pane_t_ParamLimits

0xfd98,	// (0x00052a0e) list_double_cale_preview_pane_t

0xd7d4,	// (0x0005044a) main_ezdial_pane

0xebdb,	// (0x00051851) main_sp_fs_email_pane_ParamLimits

0xbf9f,	// (0x0004ec15) cmail_ddmenu_btn01_pane_ParamLimits

0xbf9f,	// (0x0004ec15) cmail_ddmenu_btn01_pane

0xbfbc,	// (0x0004ec32) cmail_ddmenu_btn02_pane_ParamLimits

0xbfbc,	// (0x0004ec32) cmail_ddmenu_btn02_pane

0xbfda,	// (0x0004ec50) cmail_ddmenu_btn03_pane_ParamLimits

0xbfda,	// (0x0004ec50) cmail_ddmenu_btn03_pane

0xc07e,	// (0x0004ecf4) main_sp_fs_ctrlbar_pane_ParamLimits

0xc092,	// (0x0004ed08) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc328,	// (0x0004ef9e) list_cmail_body_pane_ParamLimits

0xec7e,	// (0x000518f4) bg_button_pane_cp12

0x451b,	// (0x00047191) list_single_cmail_header_detail_pane_g3_ParamLimits

0x451b,	// (0x00047191) list_single_cmail_header_detail_pane_g3

0x4528,	// (0x0004719e) list_single_cmail_header_detail_pane_t2_ParamLimits

0x4528,	// (0x0004719e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd1b,	// (0x00052991) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd1b,	// (0x00052991) list_single_cmail_header_detail_pane_t

0x463e,	// (0x000472b4) phacti_term_pane_t2_ParamLimits

0x463e,	// (0x000472b4) phacti_term_pane_t2

0x0001,

0xfd25,	// (0x0005299b) phacti_term_pane_t_ParamLimits

0xfd25,	// (0x0005299b) phacti_term_pane_t

0x4856,	// (0x000474cc) aid_size_list_single_double

0xc74e,	// (0x0004f3c4) popup_ezdial_listscroll_window

0xc767,	// (0x0004f3dd) popup_number_entry_window_cp01

0xe107,	// (0x00050d7d) bg_popup_call_pane_cp09

0x4862,	// (0x000474d8) ezdial_list_pane

0x486a,	// (0x000474e0) scroll_pane_cp23

0x2512,	// (0x00045188) bg_button_pane_cp028_ParamLimits

0x2512,	// (0x00045188) bg_button_pane_cp028

0xc773,	// (0x0004f3e9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xc773,	// (0x0004f3e9) cmail_ddmenu_btn01_pane_g1

0xc783,	// (0x0004f3f9) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xc783,	// (0x0004f3f9) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd9d,	// (0x00052a13) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd9d,	// (0x00052a13) cmail_ddmenu_btn01_pane_g

0x4872,	// (0x000474e8) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x4872,	// (0x000474e8) cmail_ddmenu_btn01_pane_t1

0xee03,	// (0x00051a79) bg_button_pane_cp029_ParamLimits

0xee03,	// (0x00051a79) bg_button_pane_cp029

0xc783,	// (0x0004f3f9) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xc783,	// (0x0004f3f9) cmail_ddmenu_btn02_pane_g1

0xc79b,	// (0x0004f411) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xc79b,	// (0x0004f411) cmail_ddmenu_btn02_pane_t1

0xe147,	// (0x00050dbd) bg_button_pane_cp031_ParamLimits

0xe147,	// (0x00050dbd) bg_button_pane_cp031

0xc783,	// (0x0004f3f9) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xc783,	// (0x0004f3f9) cmail_ddmenu_btn03_pane_g1

0xc79b,	// (0x0004f411) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xc79b,	// (0x0004f411) cmail_ddmenu_btn03_pane_t1

0xebc7,	// (0x0005183d) cell_dialer2_keypad_pane_t1_ParamLimits

0x2dce,	// (0x00045a44) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x2dce,	// (0x00045a44) cell_dialer2_keypad_pane_t1_copy1

0xb9bc,	// (0x0004e632) ncimui_group_button_pane

0xebdb,	// (0x00051851) main_sp_fs_calendar_pane_ParamLimits

0xc328,	// (0x0004ef9e) list_single_cmail_header_caption_pane_ParamLimits

0x4689,	// (0x000472ff) aid_recal_txt_sm_pane

0xd7d4,	// (0x0005044a) mian_recal_day_pane

0x46cb,	// (0x00047341) popup_sp_fs_cale_preview_window_ParamLimits

0x4887,	// (0x000474fd) list_recal_day_pane

0x48c9,	// (0x0004753f) list_single_recal_day_pane_ParamLimits

0x48c9,	// (0x0004753f) list_single_recal_day_pane

0x48db,	// (0x00047551) list_single_recal_day_pane_g1_ParamLimits

0x48db,	// (0x00047551) list_single_recal_day_pane_g1

0x48e7,	// (0x0004755d) list_single_recal_day_pane_g2_ParamLimits

0x48e7,	// (0x0004755d) list_single_recal_day_pane_g2

0x48f3,	// (0x00047569) list_single_recal_day_pane_g3_ParamLimits

0x48f3,	// (0x00047569) list_single_recal_day_pane_g3

0xc7bf,	// (0x0004f435) list_single_recal_day_pane_g4_ParamLimits

0xc7bf,	// (0x0004f435) list_single_recal_day_pane_g4

0x48ff,	// (0x00047575) list_single_recal_day_pane_g5_ParamLimits

0x48ff,	// (0x00047575) list_single_recal_day_pane_g5

0xc7d3,	// (0x0004f449) list_single_recal_day_pane_g6_ParamLimits

0xc7d3,	// (0x0004f449) list_single_recal_day_pane_g6

0x0004,

0xfdac,	// (0x00052a22) list_single_recal_day_pane_g_ParamLimits

0xfdac,	// (0x00052a22) list_single_recal_day_pane_g

0x4913,	// (0x00047589) list_single_recal_day_pane_t1

0xc7e2,	// (0x0004f458) list_single_recal_day_pane_t2

0x0001,

0xfdb7,	// (0x00052a2d) list_single_recal_day_pane_t

0xc7f7,	// (0x0004f46d) ncimui_query_button_pane_ParamLimits

0xc7f7,	// (0x0004f46d) ncimui_query_button_pane

0xc807,	// (0x0004f47d) ncimui_query_button_pane_t1_ParamLimits

0xc807,	// (0x0004f47d) ncimui_query_button_pane_t1

0x4925,	// (0x0004759b) ncimui_query_button_pane_t2_ParamLimits

0x4925,	// (0x0004759b) ncimui_query_button_pane_t2

0x0001,

0xfdbc,	// (0x00052a32) ncimui_query_button_pane_t_ParamLimits

0xfdbc,	// (0x00052a32) ncimui_query_button_pane_t

0xc81a,	// (0x0004f490) query_button_pane_ParamLimits

0xc81a,	// (0x0004f490) query_button_pane

0xd7d4,	// (0x0005044a) bg_button_pane_cp0028

0x4938,	// (0x000475ae) query_button_pane_t1

0x8ab1,	// (0x0004b727) main_tport_pane_ParamLimits

0xc274,	// (0x0004eeea) bg_popup_window_pane_cp01_ParamLimits

0xc274,	// (0x0004eeea) bg_popup_window_pane_cp01

0xc280,	// (0x0004eef6) heading_pane_cp08_ParamLimits

0xc280,	// (0x0004eef6) heading_pane_cp08

0xc28c,	// (0x0004ef02) heading_pane_cp07_ParamLimits

0xc28c,	// (0x0004ef02) heading_pane_cp07

0x44bf,	// (0x00047135) cell_tport_appsw_pane_g2

0x0002,

0xfd08,	// (0x0005297e) cell_tport_appsw_pane_g

0x82fe,	// (0x0004af74) input_candi_list_open_g1

0xe54e,	// (0x000511c4) list_cale_time_pane_g6_ParamLimits

0xe54e,	// (0x000511c4) list_cale_time_pane_g6

0x9041,	// (0x0004bcb7) aid_size_touch_calib_1_ParamLimits

0x9041,	// (0x0004bcb7) aid_size_touch_calib_1

0x904d,	// (0x0004bcc3) aid_size_touch_calib_2_ParamLimits

0x904d,	// (0x0004bcc3) aid_size_touch_calib_2

0x9059,	// (0x0004bccf) aid_size_touch_calib_3_ParamLimits

0x9059,	// (0x0004bccf) aid_size_touch_calib_3

0x9067,	// (0x0004bcdd) aid_size_touch_calib_4_ParamLimits

0x9067,	// (0x0004bcdd) aid_size_touch_calib_4

0x9075,	// (0x0004bceb) main_touch_calib_button_group_pane_ParamLimits

0x9075,	// (0x0004bceb) main_touch_calib_button_group_pane

0x9083,	// (0x0004bcf9) main_touch_calib_pane_g1_ParamLimits

0x908f,	// (0x0004bd05) main_touch_calib_pane_g2_ParamLimits

0x909b,	// (0x0004bd11) main_touch_calib_pane_g3_ParamLimits

0x90a7,	// (0x0004bd1d) main_touch_calib_pane_g4_ParamLimits

0xf703,	// (0x00052379) main_touch_calib_pane_g_ParamLimits

0x90b3,	// (0x0004bd29) main_touch_calib_pane_t1_ParamLimits

0x90c8,	// (0x0004bd3e) main_touch_calib_pane_t2_ParamLimits

0x90dd,	// (0x0004bd53) main_touch_calib_pane_t3_ParamLimits

0x90ef,	// (0x0004bd65) main_touch_calib_pane_t4_ParamLimits

0x9101,	// (0x0004bd77) main_touch_calib_pane_t5_ParamLimits

0xf70c,	// (0x00052382) main_touch_calib_pane_t_ParamLimits

0x2ba3,	// (0x00045819) list_single_fp_cale_pane_g3_ParamLimits

0x2ba3,	// (0x00045819) list_single_fp_cale_pane_g3

0x8a95,	// (0x0004b70b) bg_button_pane_cp012_ParamLimits

0x8a95,	// (0x0004b70b) bg_vkb2_func_pane_cp03_ParamLimits

0xaba1,	// (0x0004d817) cell_vitu2_function_top_pane_g1_ParamLimits

0x8a95,	// (0x0004b70b) bg_vkb2_func_pane_cp04_ParamLimits

0xb948,	// (0x0004e5be) main_ncimui_button_group_pane_ParamLimits

0xb948,	// (0x0004e5be) main_ncimui_button_group_pane

0xb9aa,	// (0x0004e620) main_ncimui_pane_t3_ParamLimits

0xb9aa,	// (0x0004e620) main_ncimui_pane_t3

0x45ec,	// (0x00047262) phacti_button_group_pane

0x4856,	// (0x000474cc) aid_size_list_single_double_ParamLimits

0xc74e,	// (0x0004f3c4) popup_ezdial_listscroll_window_ParamLimits

0xc767,	// (0x0004f3dd) popup_number_entry_window_cp01_ParamLimits

0xc827,	// (0x0004f49d) phacti_button_pane_ParamLimits

0xc827,	// (0x0004f49d) phacti_button_pane

0xd7d4,	// (0x0005044a) bg_button_pane_cp14

0x4946,	// (0x000475bc) phacti_button_pane_t1

0xc836,	// (0x0004f4ac) main_touch_calib_button_pane_ParamLimits

0xc836,	// (0x0004f4ac) main_touch_calib_button_pane

0xdf3a,	// (0x00050bb0) bg_button_pane_cp18_ParamLimits

0xdf3a,	// (0x00050bb0) bg_button_pane_cp18

0xc847,	// (0x0004f4bd) main_touch_calib_button_pane_t1_ParamLimits

0xc847,	// (0x0004f4bd) main_touch_calib_button_pane_t1

0xc85d,	// (0x0004f4d3) main_touch_calib_button_pane_t2_ParamLimits

0xc85d,	// (0x0004f4d3) main_touch_calib_button_pane_t2

0x0001,

0xfdc1,	// (0x00052a37) main_touch_calib_button_pane_t_ParamLimits

0xfdc1,	// (0x00052a37) main_touch_calib_button_pane_t

0xd7d4,	// (0x0005044a) cell_ncimui_button_pane

0xd7d4,	// (0x0005044a) bg_button_pane_cp032

0x4954,	// (0x000475ca) cell_ncimui_button_pane_t1

0x9ec4,	// (0x0004cb3a) image3_infobar_pane_ParamLimits

0x9ec4,	// (0x0004cb3a) image3_infobar_pane

0xbcf3,	// (0x0004e969) fs_bigclock_status_pane_ParamLimits

0xbcf3,	// (0x0004e969) fs_bigclock_status_pane

0xbd00,	// (0x0004e976) main_fs_bigclock_clock_pane_ParamLimits

0xbd00,	// (0x0004e976) main_fs_bigclock_clock_pane

0xbd18,	// (0x0004e98e) main_fs_bigclock_indi_pane_ParamLimits

0xbd18,	// (0x0004e98e) main_fs_bigclock_indi_pane

0xbd38,	// (0x0004e9ae) main_fs_bigclock_swipe_pane_ParamLimits

0xbd38,	// (0x0004e9ae) main_fs_bigclock_swipe_pane

0xd7d4,	// (0x0005044a) main_fs_clock_dumped_data

0x3f8e,	// (0x00046c04) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3f8e,	// (0x00046c04) list_single_fs_bigclock_indicator_pane_g1

0x3fa8,	// (0x00046c1e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x3fa8,	// (0x00046c1e) list_single_fs_bigclock_indicator_pane_g2

0x3fc2,	// (0x00046c38) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3fc2,	// (0x00046c38) list_single_fs_bigclock_indicator_pane_g3

0x3fdc,	// (0x00046c52) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3fdc,	// (0x00046c52) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc2a,	// (0x000528a0) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc2a,	// (0x000528a0) list_single_fs_bigclock_indicator_pane_g

0x4005,	// (0x00046c7b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x4005,	// (0x00046c7b) list_single_fs_bigclock_indicator_pane_t1

0x402d,	// (0x00046ca3) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x402d,	// (0x00046ca3) list_single_fs_bigclock_indicator_pane_t2

0x4055,	// (0x00046ccb) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x4055,	// (0x00046ccb) list_single_fs_bigclock_indicator_pane_t3

0x407d,	// (0x00046cf3) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x407d,	// (0x00046cf3) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc35,	// (0x000528ab) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc35,	// (0x000528ab) list_single_fs_bigclock_indicator_pane_t

0x4962,	// (0x000475d8) image3_infobar_fav_pane_ParamLimits

0x4962,	// (0x000475d8) image3_infobar_fav_pane

0x4972,	// (0x000475e8) image3_infobar_loc_pane_ParamLimits

0x4972,	// (0x000475e8) image3_infobar_loc_pane

0x4986,	// (0x000475fc) image3_infobar_time_pane_ParamLimits

0x4986,	// (0x000475fc) image3_infobar_time_pane

0xe183,	// (0x00050df9) image3_infobar_time_pane_g1

0x4996,	// (0x0004760c) image3_infobar_time_pane_t1

0xe183,	// (0x00050df9) image3_infobar_loc_pane_g1

0x49a4,	// (0x0004761a) image3_infobar_loc_pane_g2

0x0001,

0xfdc6,	// (0x00052a3c) image3_infobar_loc_pane_g

0x49ac,	// (0x00047622) image3_infobar_loc_pane_t1

0xe183,	// (0x00050df9) image3_infobar_fav_pane_g1

0x49ba,	// (0x00047630) image3_infobar_fav_pane_g2

0x0001,

0xfdcb,	// (0x00052a41) image3_infobar_fav_pane_g

0x49c2,	// (0x00047638) fs_bigclock_status_battery_pane

0x49cb,	// (0x00047641) fs_bigclock_status_signal_pane

0x49d4,	// (0x0004764a) fs_bigclock_status_title_pane

0x49dd,	// (0x00047653) fs_bigclock_status_signal_pane_g1

0x49e6,	// (0x0004765c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdd0,	// (0x00052a46) fs_bigclock_status_signal_pane_g

0x49ee,	// (0x00047664) fs_bigclock_status_battery_pane_g1

0x49f7,	// (0x0004766d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdd5,	// (0x00052a4b) fs_bigclock_status_battery_pane_g

0x49ff,	// (0x00047675) fs_bigclock_status_title_pane_t1

0xded2,	// (0x00050b48) main_fs_bigclock_clock_pane_g1

0xc87b,	// (0x0004f4f1) main_fs_bigclock_clock_pane_g2

0xc888,	// (0x0004f4fe) main_fs_bigclock_clock_pane_g3

0xc888,	// (0x0004f4fe) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdda,	// (0x00052a50) main_fs_bigclock_clock_pane_g

0xc894,	// (0x0004f50a) main_fs_bigclock_clock_pane_t1

0xc8a6,	// (0x0004f51c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfde3,	// (0x00052a59) main_fs_bigclock_clock_pane_t

0x4a0d,	// (0x00047683) list_single_fs_bigclock_indicator_pane_ParamLimits

0x4a0d,	// (0x00047683) list_single_fs_bigclock_indicator_pane

0x4a1e,	// (0x00047694) list_single_fs_bigclock_pane_ParamLimits

0x4a1e,	// (0x00047694) list_single_fs_bigclock_pane

0xc904,	// (0x0004f57a) main_fs_bigclock_indicator_pane_t1

0xc913,	// (0x0004f589) list_single_fs_bigclock_pane_g1

0xc91b,	// (0x0004f591) list_single_fs_bigclock_pane_t1

0xe183,	// (0x00050df9) main_fs_bigclock_swipe_pane_g1

0xc95b,	// (0x0004f5d1) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdf4,	// (0x00052a6a) main_fs_bigclock_swipe_pane_g

0xc963,	// (0x0004f5d9) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xc963,	// (0x0004f5d9) main_fs_bigclock_swipe_pane_t1

0x7dfb,	// (0x0004aa71) call_type_pane_ParamLimits

0xd7d4,	// (0x0005044a) main_btmg_pane

0xc56f,	// (0x0004f1e5) list_single_cale_mrui_row_pane_g2_ParamLimits

0xc56f,	// (0x0004f1e5) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd67,	// (0x000529dd) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd67,	// (0x000529dd) list_single_cale_mrui_row_pane_g

0x48b0,	// (0x00047526) list_recal_vselct_arw_lo_pane

0x48b8,	// (0x0004752e) list_recal_vselct_arw_up_pane

0x48c0,	// (0x00047536) list_recal_vselct_pane

0xc980,	// (0x0004f5f6) btmg_button_pane

0xc988,	// (0x0004f5fe) main_btmg_pane_g1

0xd7d4,	// (0x0005044a) bg_button_pane_cp044

0xc990,	// (0x0004f606) btmg_button_pane_t1

0x2461,	// (0x000450d7) aid_listscroll_gen

0xebdb,	// (0x00051851) main_cntbar_detail_pane

0x44e5,	// (0x0004715b) list_cmail_folder_pane

0x44f5,	// (0x0004716b) sp_fs_scroll_pane_cp03_ParamLimits

0xc328,	// (0x0004ef9e) list_single_fs_dyc_pane_cp01_ParamLimits

0xc328,	// (0x0004ef9e) list_single_fs_dyc_pane_cp01

0xc99e,	// (0x0004f614) aid_size_cmail_indent

0x4a3b,	// (0x000476b1) list_single_dyc_row_pane_cp01

0xc9c1,	// (0x0004f637) cntbar_detail_list_pane_ParamLimits

0xc9c1,	// (0x0004f637) cntbar_detail_list_pane

0xc9f7,	// (0x0004f66d) main_cntbar_detail_cont_pane_ParamLimits

0xc9f7,	// (0x0004f66d) main_cntbar_detail_cont_pane

0xca03,	// (0x0004f679) scroll_pane_cp032_ParamLimits

0xca03,	// (0x0004f679) scroll_pane_cp032

0xca0f,	// (0x0004f685) cntbar_detail_list_event_pane_ParamLimits

0xca0f,	// (0x0004f685) cntbar_detail_list_event_pane

0xc9cd,	// (0x0004f643) cntbar_detail_list_shct_pane

0xca1f,	// (0x0004f695) aid_list_gen

0xe035,	// (0x00050cab) aid_scroll

0x36c9,	// (0x0004633f) aid_size_touch_scroll_bar

0x36f4,	// (0x0004636a) aid_list_double

0xb243,	// (0x0004deb9) aid_list_single

0xb243,	// (0x0004deb9) aid_list_single_lg

0xca28,	// (0x0004f69e) aid_list_z_g_a_sm

0xca30,	// (0x0004f6a6) aid_list_z_g_d

0xca38,	// (0x0004f6ae) aid_txt_z_prm

0x4a44,	// (0x000476ba) aid_txt_z_prm_cp01

0x4a52,	// (0x000476c8) aid_txt_z_sec

0xca46,	// (0x0004f6bc) main_cntbar_detail_cont_pane_g1_ParamLimits

0xca46,	// (0x0004f6bc) main_cntbar_detail_cont_pane_g1

0xca53,	// (0x0004f6c9) main_cntbar_detail_cont_pane_g2_ParamLimits

0xca53,	// (0x0004f6c9) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdf9,	// (0x00052a6f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdf9,	// (0x00052a6f) main_cntbar_detail_cont_pane_g

0xca5f,	// (0x0004f6d5) main_cntbar_detail_cont_pane_t1

0xca6d,	// (0x0004f6e3) main_cntbar_detail_cont_pane_t2

0xca7b,	// (0x0004f6f1) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdfe,	// (0x00052a74) main_cntbar_detail_cont_pane_t

0xca89,	// (0x0004f6ff) cell_cntbar_detail_list_shct_pane_ParamLimits

0xca89,	// (0x0004f6ff) cell_cntbar_detail_list_shct_pane

0xca9b,	// (0x0004f711) cntbar_detail_list_shct_pane_g1

0xcaa4,	// (0x0004f71a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe05,	// (0x00052a7b) cntbar_detail_list_shct_pane_g

0xcaad,	// (0x0004f723) cntbar_detail_list_event_pane_g1_ParamLimits

0xcaad,	// (0x0004f723) cntbar_detail_list_event_pane_g1

0xcab9,	// (0x0004f72f) cntbar_detail_list_event_pane_g2_ParamLimits

0xcab9,	// (0x0004f72f) cntbar_detail_list_event_pane_g2

0x0005,

0xfe0a,	// (0x00052a80) cntbar_detail_list_event_pane_g_ParamLimits

0xfe0a,	// (0x00052a80) cntbar_detail_list_event_pane_g

0xcb25,	// (0x0004f79b) cntbar_detail_list_event_pane_t1_ParamLimits

0xcb25,	// (0x0004f79b) cntbar_detail_list_event_pane_t1

0xcb3a,	// (0x0004f7b0) cntbar_detail_list_event_pane_t2_ParamLimits

0xcb3a,	// (0x0004f7b0) cntbar_detail_list_event_pane_t2

0x0002,

0xfe17,	// (0x00052a8d) cntbar_detail_list_event_pane_t_ParamLimits

0xfe17,	// (0x00052a8d) cntbar_detail_list_event_pane_t

0xe183,	// (0x00050df9) cell_cntbar_detail_list_shct_pane_g1

0xead0,	// (0x00051746) navi_pane_mv_g3

0xebdb,	// (0x00051851) main_cntbar_detail_pane_ParamLimits

0xd7d4,	// (0x0005044a) main_notif_wgt_pane

0x9c2d,	// (0x0004c8a3) aid_tch_main_mp4_pane_g4

0x9e6c,	// (0x0004cae2) popup_slider_window_cp02

0x48a6,	// (0x0004751c) list_recal_day_event_pane

0xc9a7,	// (0x0004f61d) cntbar_detail_btn_pane_ParamLimits

0xc9a7,	// (0x0004f61d) cntbar_detail_btn_pane

0xc9b3,	// (0x0004f629) cntbar_detail_btn_pane_cp01_ParamLimits

0xc9b3,	// (0x0004f629) cntbar_detail_btn_pane_cp01

0xc9cd,	// (0x0004f643) cntbar_detail_list_shct_pane_ParamLimits

0xc9d9,	// (0x0004f64f) cntbar_detail_pane_g1_ParamLimits

0xc9d9,	// (0x0004f64f) cntbar_detail_pane_g1

0xc9e5,	// (0x0004f65b) cntbar_detail_pane_t1_ParamLimits

0xc9e5,	// (0x0004f65b) cntbar_detail_pane_t1

0xcac5,	// (0x0004f73b) cntbar_detail_list_event_pane_g3_ParamLimits

0xcac5,	// (0x0004f73b) cntbar_detail_list_event_pane_g3

0xcadd,	// (0x0004f753) cntbar_detail_list_event_pane_g4_ParamLimits

0xcadd,	// (0x0004f753) cntbar_detail_list_event_pane_g4

0xcaf5,	// (0x0004f76b) cntbar_detail_list_event_pane_g5_ParamLimits

0xcaf5,	// (0x0004f76b) cntbar_detail_list_event_pane_g5

0xcb0d,	// (0x0004f783) cntbar_detail_list_event_pane_g6_ParamLimits

0xcb0d,	// (0x0004f783) cntbar_detail_list_event_pane_g6

0xcb4f,	// (0x0004f7c5) cntbar_detail_list_event_pane_t3_ParamLimits

0xcb4f,	// (0x0004f7c5) cntbar_detail_list_event_pane_t3

0xcb61,	// (0x0004f7d7) popup_notif_wgt_window_ParamLimits

0xcb61,	// (0x0004f7d7) popup_notif_wgt_window

0xcb6f,	// (0x0004f7e5) popup_submenu_window_cp01_ParamLimits

0xcb6f,	// (0x0004f7e5) popup_submenu_window_cp01

0xe107,	// (0x00050d7d) bg_popup_window_pane_cp10

0xcb7b,	// (0x0004f7f1) listscroll_notif_wgt_pane

0xcb8c,	// (0x0004f802) list_notif_wgt_window

0xcb95,	// (0x0004f80b) scroll_pane_cp033

0xcb9e,	// (0x0004f814) list_notif_wgt_row_pane_ParamLimits

0xcb9e,	// (0x0004f814) list_notif_wgt_row_pane

0xcbb0,	// (0x0004f826) aid_size_list_notif_wgt_del

0xcbbd,	// (0x0004f833) list_notif_wgt_row_pane_g1

0xcbc9,	// (0x0004f83f) list_notif_wgt_row_pane_g2

0xcbdd,	// (0x0004f853) list_notif_wgt_row_pane_g3

0x0002,

0xfe1e,	// (0x00052a94) list_notif_wgt_row_pane_g

0xcbea,	// (0x0004f860) list_notif_wgt_row_pane_t1

0xcc00,	// (0x0004f876) list_notif_wgt_row_pane_t2

0xcc12,	// (0x0004f888) list_notif_wgt_row_pane_t3

0x0002,

0xfe25,	// (0x00052a9b) list_notif_wgt_row_pane_t

0x33c3,	// (0x00046039) list_recal_day_event_pane_g1

0xcc24,	// (0x0004f89a) list_recal_day_event_pane_t1

0xd7d4,	// (0x0005044a) bg_button_pane_cp045

0xcc33,	// (0x0004f8a9) cntbar_detail_btn_pane_t1

0xee03,	// (0x00051a79) main_callh_pane_ParamLimits

0xee03,	// (0x00051a79) main_callh_pane

0xd7d4,	// (0x0005044a) main_coverflow0_pane

0xd7d4,	// (0x0005044a) main_wgtman_pane

0xbd4a,	// (0x0004e9c0) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xbd4a,	// (0x0004e9c0) main_fs_bigclock_unlock_btn_pane

0x44b7,	// (0x0004712d) bg_button_pane_cp16

0x44c7,	// (0x0004713d) cell_tport_appsw_pane_g3

0xcc41,	// (0x0004f8b7) cf0_flow_pane_ParamLimits

0xcc41,	// (0x0004f8b7) cf0_flow_pane

0xcc50,	// (0x0004f8c6) listscroll_cf0_pane

0xcc59,	// (0x0004f8cf) main_cf0_pane_g1

0xcc6b,	// (0x0004f8e1) main_cf0_pane_t1_ParamLimits

0xcc6b,	// (0x0004f8e1) main_cf0_pane_t1

0xcc7d,	// (0x0004f8f3) main_cf0_pane_t2_ParamLimits

0xcc7d,	// (0x0004f8f3) main_cf0_pane_t2

0x0001,

0xfe31,	// (0x00052aa7) main_cf0_pane_t_ParamLimits

0xfe31,	// (0x00052aa7) main_cf0_pane_t

0xcc8f,	// (0x0004f905) scroll_pane_cp11

0xcc98,	// (0x0004f90e) cf0_flow_pane_g1

0xcca0,	// (0x0004f916) cf0_flow_pane_g2

0x0001,

0xfe36,	// (0x00052aac) cf0_flow_pane_g

0xcca8,	// (0x0004f91e) cf0_flow_pane_t1

0xd7d4,	// (0x0005044a) main_call6_pane

0xd7d4,	// (0x0005044a) main_calllock_pane

0xccb6,	// (0x0004f92c) call6_btn_grp_pane_ParamLimits

0xccb6,	// (0x0004f92c) call6_btn_grp_pane

0xccc3,	// (0x0004f939) call6_pane_g1_ParamLimits

0xccc3,	// (0x0004f939) call6_pane_g1

0xccd0,	// (0x0004f946) popup_call6_1st_window_ParamLimits

0xccd0,	// (0x0004f946) popup_call6_1st_window

0xccdc,	// (0x0004f952) popup_call6_2nd_window_ParamLimits

0xccdc,	// (0x0004f952) popup_call6_2nd_window

0xcce8,	// (0x0004f95e) cell_call6_btn_pane_ParamLimits

0xcce8,	// (0x0004f95e) cell_call6_btn_pane

0xe107,	// (0x00050d7d) bg_popup_call2_in_pane_cp03

0xccf7,	// (0x0004f96d) popup_call6_1st_window_g1

0xccff,	// (0x0004f975) popup_call6_1st_window_g2

0xcd07,	// (0x0004f97d) popup_call6_1st_window_g3

0x0002,

0xfe3b,	// (0x00052ab1) popup_call6_1st_window_g

0xcd0f,	// (0x0004f985) popup_call6_1st_window_t1

0xcd1e,	// (0x0004f994) popup_call6_1st_window_t2

0xcd2c,	// (0x0004f9a2) popup_call6_1st_window_t3

0x0002,

0xfe42,	// (0x00052ab8) popup_call6_1st_window_t

0xe107,	// (0x00050d7d) bg_popup_call2_in_pane_cp04

0xcd3a,	// (0x0004f9b0) popup_call6_2nd_window_g1

0xcd42,	// (0x0004f9b8) popup_call6_2nd_window_g2

0xcd4a,	// (0x0004f9c0) popup_call6_2nd_window_g3

0x0002,

0xfe49,	// (0x00052abf) popup_call6_2nd_window_g

0xcd52,	// (0x0004f9c8) popup_call6_2nd_window_t1

0x6241,	// (0x00048eb7) bg_button_pane_cp15

0xcd61,	// (0x0004f9d7) cell_call6_btn_pane_g1

0xcd6a,	// (0x0004f9e0) cell_call6_btn_pane_t1

0xcd79,	// (0x0004f9ef) listscroll_wgtman_pane_ParamLimits

0xcd79,	// (0x0004f9ef) listscroll_wgtman_pane

0xcd95,	// (0x0004fa0b) wgtman_btn_pane_ParamLimits

0xcd95,	// (0x0004fa0b) wgtman_btn_pane

0xe927,	// (0x0005159d) aid_scroll_copy1

0xcdc8,	// (0x0004fa3e) list_wgtman_pane

0xcdd2,	// (0x0004fa48) wgtman_btn_pane_g1_ParamLimits

0xcdd2,	// (0x0004fa48) wgtman_btn_pane_g1

0xcdfa,	// (0x0004fa70) wgtman_btn_pane_t1_ParamLimits

0xcdfa,	// (0x0004fa70) wgtman_btn_pane_t1

0xce31,	// (0x0004faa7) wgtman_btn_pane_t2_ParamLimits

0xce31,	// (0x0004faa7) wgtman_btn_pane_t2

0x0001,

0xfe50,	// (0x00052ac6) wgtman_btn_pane_t_ParamLimits

0xfe50,	// (0x00052ac6) wgtman_btn_pane_t

0xce48,	// (0x0004fabe) listrow_wgtman_pane_ParamLimits

0xce48,	// (0x0004fabe) listrow_wgtman_pane

0xce59,	// (0x0004facf) listrow_wgtman_pane_g1

0xce66,	// (0x0004fadc) listrow_wgtman_pane_g2

0x0001,

0xfe55,	// (0x00052acb) listrow_wgtman_pane_g

0xce7e,	// (0x0004faf4) listrow_wgtman_pane_t1

0xce96,	// (0x0004fb0c) listrow_wgtman_pane_t2

0x0001,

0xfe5a,	// (0x00052ad0) listrow_wgtman_pane_t

0xcebc,	// (0x0004fb32) wait_bar_pane_cp09

0xcece,	// (0x0004fb44) main_calllock_btn_pane

0xced6,	// (0x0004fb4c) main_calllock_pane_g1

0xd7d4,	// (0x0005044a) bg_button_pane_cp17

0xcedf,	// (0x0004fb55) main_calllock_btn_pane_g1

0xcee8,	// (0x0004fb5e) main_calllock_btn_pane_t1

0xd7d4,	// (0x0005044a) main_dialer3_pane

0xd7d4,	// (0x0005044a) main_fmrd2_pane

0xe183,	// (0x00050df9) main_fs_bigclock_unlock_btn_pane_g1

0xceff,	// (0x0004fb75) main_fs_bigclock_unlock_btn_pane_t1

0xcf0d,	// (0x0004fb83) area_fmrd2_info_pane_ParamLimits

0xcf0d,	// (0x0004fb83) area_fmrd2_info_pane

0xcf19,	// (0x0004fb8f) area_fmrd2_visual_pane_ParamLimits

0xcf19,	// (0x0004fb8f) area_fmrd2_visual_pane

0xcf27,	// (0x0004fb9d) fmrd2_indi_pane_ParamLimits

0xcf27,	// (0x0004fb9d) fmrd2_indi_pane

0xcf34,	// (0x0004fbaa) area_fmrd2_visual_pane_g1

0xcf3c,	// (0x0004fbb2) area_fmrd2_visual_pane_t1

0xcf4a,	// (0x0004fbc0) area_fmrd2_visual_pane_t2

0xcf58,	// (0x0004fbce) area_fmrd2_visual_pane_t3

0x0002,

0xfe64,	// (0x00052ada) area_fmrd2_visual_pane_t

0xcf66,	// (0x0004fbdc) area_fmrd2_info_pane_g1

0xcf6e,	// (0x0004fbe4) area_fmrd2_info_pane_t1

0xcf7c,	// (0x0004fbf2) area_fmrd2_info_pane_t2

0xcf8a,	// (0x0004fc00) area_fmrd2_info_pane_t3

0xcf98,	// (0x0004fc0e) area_fmrd2_info_pane_t4

0x0003,

0xfe6b,	// (0x00052ae1) area_fmrd2_info_pane_t

0xcfa6,	// (0x0004fc1c) fmrd2_indi_pane_t1

0xcfb4,	// (0x0004fc2a) fmrd2_indi_pane_t2

0xcfc2,	// (0x0004fc38) fmrd2_indi_pane_t3

0x0002,

0xfe74,	// (0x00052aea) fmrd2_indi_pane_t

0x3feb,	// (0x00046c61) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3feb,	// (0x00046c61) list_single_fs_bigclock_indicator_pane_g5

0x4099,	// (0x00046d0f) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x4099,	// (0x00046d0f) list_single_fs_bigclock_indicator_pane_t5

0xc454,	// (0x0004f0ca) aid_cell_bcale_month_pane_ParamLimits

0xc454,	// (0x0004f0ca) aid_cell_bcale_month_pane

0xc472,	// (0x0004f0e8) bcale_month_pane_ParamLimits

0xc472,	// (0x0004f0e8) bcale_month_pane

0xc488,	// (0x0004f0fe) bcale_preview_pane_ParamLimits

0xc488,	// (0x0004f0fe) bcale_preview_pane

0xc91b,	// (0x0004f591) list_single_fs_bigclock_pane_t1_ParamLimits

0xc937,	// (0x0004f5ad) list_single_fs_bigclock_pane_t2_ParamLimits

0xc937,	// (0x0004f5ad) list_single_fs_bigclock_pane_t2

0x0001,

0xfdef,	// (0x00052a65) list_single_fs_bigclock_pane_t_ParamLimits

0xfdef,	// (0x00052a65) list_single_fs_bigclock_pane_t

0xcef7,	// (0x0004fb6d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe5f,	// (0x00052ad5) main_fs_bigclock_unlock_btn_pane_g

0xcfd0,	// (0x0004fc46) aid_dia3_key_size_ParamLimits

0xcfd0,	// (0x0004fc46) aid_dia3_key_size

0xcfdc,	// (0x0004fc52) aid_dia3_listrow_size_ParamLimits

0xcfdc,	// (0x0004fc52) aid_dia3_listrow_size

0xcfea,	// (0x0004fc60) dia3_keypad_fun_pane_ParamLimits

0xcfea,	// (0x0004fc60) dia3_keypad_fun_pane

0xcff6,	// (0x0004fc6c) dia3_keypad_num_pane_ParamLimits

0xcff6,	// (0x0004fc6c) dia3_keypad_num_pane

0xd002,	// (0x0004fc78) dia3_listscroll_pane_ParamLimits

0xd002,	// (0x0004fc78) dia3_listscroll_pane

0xd00e,	// (0x0004fc84) dia3_numentry_pane_ParamLimits

0xd00e,	// (0x0004fc84) dia3_numentry_pane

0xd01a,	// (0x0004fc90) dia3_list_pane

0xd023,	// (0x0004fc99) scroll_pane_cp12

0xd7d4,	// (0x0005044a) bg_dia3_numentry_pane

0xd02c,	// (0x0004fca2) dia3_numentry_pane_t1

0xd03b,	// (0x0004fcb1) cell_dia3_key_num_pane

0xd043,	// (0x0004fcb9) cell_dia3_key0_fun_pane_ParamLimits

0xd043,	// (0x0004fcb9) cell_dia3_key0_fun_pane

0xd050,	// (0x0004fcc6) cell_dia3_key1_fun_pane_ParamLimits

0xd050,	// (0x0004fcc6) cell_dia3_key1_fun_pane

0xd05d,	// (0x0004fcd3) dia3_listrow_pane

0x3cfa,	// (0x00046970) bg_dia3_numentry_pane_g1

0xd7d4,	// (0x0005044a) bg_button_pane_cp21

0xd06a,	// (0x0004fce0) cell_dia3_key_num_pane_t1

0xd078,	// (0x0004fcee) cell_dia3_key_num_pane_t2

0xd087,	// (0x0004fcfd) cell_dia3_key_num_pane_t3

0xd096,	// (0x0004fd0c) cell_dia3_key_num_pane_t4

0x0003,

0xfe7b,	// (0x00052af1) cell_dia3_key_num_pane_t

0xd7d4,	// (0x0005044a) bg_button_pane_cp19

0xd0a5,	// (0x0004fd1b) cell_dia3_key0_fun_pane_g1

0xd7d4,	// (0x0005044a) bg_button_pane_cp20

0xd0ad,	// (0x0004fd23) cell_dia3_key1_fun_pane_g1

0xd0b5,	// (0x0004fd2b) area_left_week_number_pane

0xd0c6,	// (0x0004fd3c) area_top_day_name_pane

0xd0d2,	// (0x0004fd48) frame_month_view_pane

0xd0e3,	// (0x0004fd59) grid_month_view_pane

0xd0f1,	// (0x0004fd67) cell_top_day_name_pane_ParamLimits

0xd0f1,	// (0x0004fd67) cell_top_day_name_pane

0xd107,	// (0x0004fd7d) cell_area_left_week_number_pane_ParamLimits

0xd107,	// (0x0004fd7d) cell_area_left_week_number_pane

0xd126,	// (0x0004fd9c) cell_month_view_pane_ParamLimits

0xd126,	// (0x0004fd9c) cell_month_view_pane

0xd14c,	// (0x0004fdc2) frm_month_g1

0xd159,	// (0x0004fdcf) frm_month_g2

0xd168,	// (0x0004fdde) frm_month_g3

0xd177,	// (0x0004fded) frm_month_g4

0xd186,	// (0x0004fdfc) frm_month_g5

0xd195,	// (0x0004fe0b) frm_month_g6

0xd1a4,	// (0x0004fe1a) frm_month_g7

0xd1b3,	// (0x0004fe29) frm_month_g8

0xd1c0,	// (0x0004fe36) frm_month_g9

0xd1cd,	// (0x0004fe43) frm_month_g10

0xd1da,	// (0x0004fe50) frm_month_g11

0xd1e7,	// (0x0004fe5d) frm_month_g12

0xd1f4,	// (0x0004fe6a) frm_month_g13

0xd201,	// (0x0004fe77) frm_month_g14

0xd20e,	// (0x0004fe84) frm_month_g15

0xd21b,	// (0x0004fe91) frm_month_g16

0x000f,

0xfe84,	// (0x00052afa) frm_month_g

0xd228,	// (0x0004fe9e) cell_top_day_name_pane_t1

0xd23b,	// (0x0004feb1) cell_area_left_week_number_pane_g1

0xd24a,	// (0x0004fec0) cell_area_left_week_number_pane_t1

0xdec4,	// (0x00050b3a) cell_month_view_pane_g1

0xd260,	// (0x0004fed6) cell_month_view_pane_t1

0xd7d4,	// (0x0005044a) main_fps_pane

0x42df,	// (0x00046f55) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x42df,	// (0x00046f55) cmail_ddmenu_btn02_pane_cp1

0x42fb,	// (0x00046f71) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x42fb,	// (0x00046f71) cmail_ddmenu_btn02_pane_cp2

0xc78f,	// (0x0004f405) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xc78f,	// (0x0004f405) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfda2,	// (0x00052a18) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfda2,	// (0x00052a18) cmail_ddmenu_btn02_pane_g

0xc7ad,	// (0x0004f423) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xc7ad,	// (0x0004f423) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfda7,	// (0x00052a1d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfda7,	// (0x00052a1d) cmail_ddmenu_btn02_pane_t

0xd276,	// (0x0004feec) fps_text_pane_ParamLimits

0xd276,	// (0x0004feec) fps_text_pane

0xd283,	// (0x0004fef9) main_fps_pane_g1_ParamLimits

0xd283,	// (0x0004fef9) main_fps_pane_g1

0xd28f,	// (0x0004ff05) wait_bar_pane_cp010_ParamLimits

0xd28f,	// (0x0004ff05) wait_bar_pane_cp010

0xd29b,	// (0x0004ff11) fps_text_pane_t1_ParamLimits

0xd29b,	// (0x0004ff11) fps_text_pane_t1

0xa19d,	// (0x0004ce13) cam4_image_uncrop_pane_g1

0xa1a6,	// (0x0004ce1c) cam4_image_uncrop_pane_g2

0xa1af,	// (0x0004ce25) cam4_image_uncrop_pane_g3

0xa1b8,	// (0x0004ce2e) cam4_image_uncrop_pane_g4

0x0003,

0xf8a4,	// (0x0005251a) cam4_image_uncrop_pane_g

0xd05d,	// (0x0004fcd3) dia3_listrow_pane_ParamLimits

0xd7d4,	// (0x0005044a) main_phob2_pane

0xc2cd,	// (0x0004ef43) cell_tport_appsw_pane_cp02_ParamLimits

0xc2cd,	// (0x0004ef43) cell_tport_appsw_pane_cp02

0xc2da,	// (0x0004ef50) cell_tport_appsw_pane_cp03_ParamLimits

0xc2da,	// (0x0004ef50) cell_tport_appsw_pane_cp03

0xd7d4,	// (0x0005044a) phob2_contact_card_pane

0xd7d4,	// (0x0005044a) phob2_listscroll_pane

0xd2b4,	// (0x0004ff2a) phob2_list_pane

0xd2bc,	// (0x0004ff32) scroll_pane_cp034

0xd2c4,	// (0x0004ff3a) phob2_cc_data_pane_ParamLimits

0xd2c4,	// (0x0004ff3a) phob2_cc_data_pane

0xd2dc,	// (0x0004ff52) phob2_cc_listscroll_pane_ParamLimits

0xd2dc,	// (0x0004ff52) phob2_cc_listscroll_pane

0xd2f4,	// (0x0004ff6a) list_double_large_graphic_phob2_pane_ParamLimits

0xd2f4,	// (0x0004ff6a) list_double_large_graphic_phob2_pane

0xd306,	// (0x0004ff7c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd306,	// (0x0004ff7c) list_double_large_graphic_phob2_pane_g1

0xd313,	// (0x0004ff89) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd313,	// (0x0004ff89) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfea5,	// (0x00052b1b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfea5,	// (0x00052b1b) list_double_large_graphic_phob2_pane_g

0xd337,	// (0x0004ffad) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd337,	// (0x0004ffad) list_double_large_graphic_phob2_pane_t1

0xd34c,	// (0x0004ffc2) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd34c,	// (0x0004ffc2) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfeae,	// (0x00052b24) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfeae,	// (0x00052b24) list_double_large_graphic_phob2_pane_t

0xd7d4,	// (0x0005044a) list_highlight_pane_cp024

0xd361,	// (0x0004ffd7) phob2_cc_button_pane

0xd369,	// (0x0004ffdf) phob2_cc_data_pane_g1_ParamLimits

0xd369,	// (0x0004ffdf) phob2_cc_data_pane_g1

0xd378,	// (0x0004ffee) phob2_cc_data_pane_g2_ParamLimits

0xd378,	// (0x0004ffee) phob2_cc_data_pane_g2

0x0001,

0xfeb3,	// (0x00052b29) phob2_cc_data_pane_g_ParamLimits

0xfeb3,	// (0x00052b29) phob2_cc_data_pane_g

0xd387,	// (0x0004fffd) phob2_cc_data_pane_t1_ParamLimits

0xd387,	// (0x0004fffd) phob2_cc_data_pane_t1

0xd39c,	// (0x00050012) phob2_cc_data_pane_t2_ParamLimits

0xd39c,	// (0x00050012) phob2_cc_data_pane_t2

0xd3b1,	// (0x00050027) phob2_cc_data_pane_t3_ParamLimits

0xd3b1,	// (0x00050027) phob2_cc_data_pane_t3

0x0002,

0xfeb8,	// (0x00052b2e) phob2_cc_data_pane_t_ParamLimits

0xfeb8,	// (0x00052b2e) phob2_cc_data_pane_t

0xd3c6,	// (0x0005003c) phob2_cc_list_pane_ParamLimits

0xd3c6,	// (0x0005003c) phob2_cc_list_pane

0x3c17,	// (0x0004688d) scroll_pane_cp035_ParamLimits

0x3c17,	// (0x0004688d) scroll_pane_cp035

0xebdb,	// (0x00051851) bg_button_pane_cp033

0xd3d2,	// (0x00050048) phob2_cc_button_pane_g1

0xd3de,	// (0x00050054) phob2_cc_button_pane_t1

0xd3f3,	// (0x00050069) phob2_cc_button_pane_t2

0x0001,

0xfebf,	// (0x00052b35) phob2_cc_button_pane_t

0xd405,	// (0x0005007b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd405,	// (0x0005007b) list_double_large_graphic_phob2_cc_pane

0xd44b,	// (0x000500c1) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd44b,	// (0x000500c1) list_double_large_graphic_phob2_cc_pane_g1

0xd45c,	// (0x000500d2) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd45c,	// (0x000500d2) list_double_large_graphic_phob2_cc_pane_g2

0xd46b,	// (0x000500e1) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd46b,	// (0x000500e1) list_double_large_graphic_phob2_cc_pane_g3

0xd47a,	// (0x000500f0) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd47a,	// (0x000500f0) list_double_large_graphic_phob2_cc_pane_g4

0xd48b,	// (0x00050101) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd48b,	// (0x00050101) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfec4,	// (0x00052b3a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfec4,	// (0x00052b3a) list_double_large_graphic_phob2_cc_pane_g

0xd49a,	// (0x00050110) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd49a,	// (0x00050110) list_double_large_graphic_phob2_cc_pane_t1

0xd4c3,	// (0x00050139) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd4c3,	// (0x00050139) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfecf,	// (0x00052b45) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfecf,	// (0x00052b45) list_double_large_graphic_phob2_cc_pane_t

0xd4ec,	// (0x00050162) list_highlight_pane_cp025_ParamLimits

0xd4ec,	// (0x00050162) list_highlight_pane_cp025

0xebdb,	// (0x00051851) bg_button_pane_cp033_ParamLimits

0xd3d2,	// (0x00050048) phob2_cc_button_pane_g1_ParamLimits

0xd3de,	// (0x00050054) phob2_cc_button_pane_t1_ParamLimits

0xd3f3,	// (0x00050069) phob2_cc_button_pane_t2_ParamLimits

0xfebf,	// (0x00052b35) phob2_cc_button_pane_t_ParamLimits

0x6239,	// (0x00048eaf) popup_wgtman_window

0x3d1a,	// (0x00046990) scroll_pane_cp038

0xcdb0,	// (0x0004fa26) wgtman_btn_pane_cp_01_ParamLimits

0xcdb0,	// (0x0004fa26) wgtman_btn_pane_cp_01

0xd4fa,	// (0x00050170) wgtman_content_pane

0xd503,	// (0x00050179) wgtman_heading_pane

0xd7d4,	// (0x0005044a) bg_heading_pane_cp02

0xd50c,	// (0x00050182) wgtman_heading_pane_g1

0xd514,	// (0x0005018a) wgtman_heading_pane_t1

0xd522,	// (0x00050198) scroll_pane_cp036

0xd52a,	// (0x000501a0) wgtman_list_pane

0x4a60,	// (0x000476d6) wgtman_list_pane_t1_ParamLimits

0x4a60,	// (0x000476d6) wgtman_list_pane_t1

0xa102,	// (0x0004cd78) cam4_grid_pane

0xad4c,	// (0x0004d9c2) bg_button_pane_cp015_ParamLimits

0xad5c,	// (0x0004d9d2) bg_button_pane_cp016_ParamLimits

0xad6f,	// (0x0004d9e5) bg_button_pane_cp017_ParamLimits

0xadc1,	// (0x0004da37) popup_vitu2_query_window_g3_ParamLimits

0xadc1,	// (0x0004da37) popup_vitu2_query_window_g3

0xae74,	// (0x0004daea) popup_vitu2_query_window_t6_ParamLimits

0xae74,	// (0x0004daea) popup_vitu2_query_window_t6

0xae9f,	// (0x0004db15) popup_vitu2_query_window_t7_ParamLimits

0xae9f,	// (0x0004db15) popup_vitu2_query_window_t7

0xd532,	// (0x000501a8) cam4_grid_pane_g1

0xd53b,	// (0x000501b1) cam4_grid_pane_g2

0xd544,	// (0x000501ba) cam4_grid_pane_g3

0xd54d,	// (0x000501c3) cam4_grid_pane_g4

0x0003,

0xfed4,	// (0x00052b4a) cam4_grid_pane_g

0x6e68,	// (0x00049ade) aid_placing_vt_slider_lsc_ParamLimits

0x7112,	// (0x00049d88) vidtel_button_pane_ParamLimits

0x7112,	// (0x00049d88) vidtel_button_pane

0xd7d4,	// (0x0005044a) bg_button_pane_cp034

0xd556,	// (0x000501cc) vidtel_button_pane_g1

0xd55e,	// (0x000501d4) vidtel_button_pane_t1

0x33a6,	// (0x0004601c) aid_size_vtel_slider_touch

0x3c17,	// (0x0004688d) scroll_pane_cp039

0x3d49,	// (0x000469bf) ncim_query_button_pane_cp01_ParamLimits

0x3d68,	// (0x000469de) ncimui_query_pane_g1_ParamLimits

0xebdb,	// (0x00051851) input_focus_pane_cp012_ParamLimits

0x3d8d,	// (0x00046a03) ncim_query_entry_pane_t1_ParamLimits

0x3c17,	// (0x0004688d) scroll_pane_cp039_ParamLimits

0xe9eb,	// (0x00051661) navi_pane_bcale_mc_g1

0xe9f3,	// (0x00051669) navi_pane_bcale_mc_t1

0x432f,	// (0x00046fa5) main_sp_fs_email_pane_g1

0x433b,	// (0x00046fb1) main_sp_fs_email_pane_g2

0x0001,

0xfc9f,	// (0x00052915) main_sp_fs_email_pane_g

0x47a2,	// (0x00047418) list_single_cale_mrui_row_pane_g3_ParamLimits

0x47a2,	// (0x00047418) list_single_cale_mrui_row_pane_g3

0xc7cb,	// (0x0004f441) list_single_recal_day_pane_g5_event_pane

0x490b,	// (0x00047581) list_single_recal_day_pane_g7

0xd574,	// (0x000501ea) list_recal_day_event_pane_cp01

0xd57d,	// (0x000501f3) list_recal_vselct_arw_lo_pane_cp01

0xd585,	// (0x000501fb) list_recal_vselct_arw_up_pane_cp01

0xd58d,	// (0x00050203) list_recal_vselct_pane_cp01

0x33c3,	// (0x00046039) list_recal_day_event_pane_cp01_g1

0x4a77,	// (0x000476ed) list_recal_day_event_pane_cp01_t1

0x4913,	// (0x00047589) list_single_recal_day_pane_t1_ParamLimits

0xc7e2,	// (0x0004f458) list_single_recal_day_pane_t2_ParamLimits

0xfdb7,	// (0x00052a2d) list_single_recal_day_pane_t_ParamLimits

0xde4a,	// (0x00050ac0) bg_notes_pane_ParamLimits

0xdf14,	// (0x00050b8a) list_notes_pane_ParamLimits

0x6436,	// (0x000490ac) scroll_pane_cp06_ParamLimits

0xdf3a,	// (0x00050bb0) main_notes_pane_ParamLimits

0xebdb,	// (0x00051851) main_welc_pane

0xd5ac,	// (0x00050222) main_welc_body_pane_ParamLimits

0xd5ac,	// (0x00050222) main_welc_body_pane

0xd5c5,	// (0x0005023b) main_welc_opti_pane_ParamLimits

0xd5c5,	// (0x0005023b) main_welc_opti_pane

0xd61a,	// (0x00050290) main_welc_pane_t1_ParamLimits

0xd61a,	// (0x00050290) main_welc_pane_t1

0xd71e,	// (0x00050394) main_welc_body_row_pane_ParamLimits

0xd71e,	// (0x00050394) main_welc_body_row_pane

0xe147,	// (0x00050dbd) main_welc_opti_row_pane_ParamLimits

0xe147,	// (0x00050dbd) main_welc_opti_row_pane

0xd733,	// (0x000503a9) main_welc_opti_row_pane_g1

0xd73b,	// (0x000503b1) main_welc_opti_row_pane_t1

0xd74a,	// (0x000503c0) main_welc_body_row_pane_t1

0xcb84,	// (0x0004f7fa) popup_notif_wgt_heading_pane

0xcbb0,	// (0x0004f826) aid_size_list_notif_wgt_del_ParamLimits

0xcbbd,	// (0x0004f833) list_notif_wgt_row_pane_g1_ParamLimits

0xcbc9,	// (0x0004f83f) list_notif_wgt_row_pane_g2_ParamLimits

0xcbdd,	// (0x0004f853) list_notif_wgt_row_pane_g3_ParamLimits

0xfe1e,	// (0x00052a94) list_notif_wgt_row_pane_g_ParamLimits

0xcbea,	// (0x0004f860) list_notif_wgt_row_pane_t1_ParamLimits

0xcc00,	// (0x0004f876) list_notif_wgt_row_pane_t2_ParamLimits

0xcc12,	// (0x0004f888) list_notif_wgt_row_pane_t3_ParamLimits

0xfe25,	// (0x00052a9b) list_notif_wgt_row_pane_t_ParamLimits

0xce59,	// (0x0004facf) listrow_wgtman_pane_g1_ParamLimits

0xce66,	// (0x0004fadc) listrow_wgtman_pane_g2_ParamLimits

0xfe55,	// (0x00052acb) listrow_wgtman_pane_g_ParamLimits

0xce7e,	// (0x0004faf4) listrow_wgtman_pane_t1_ParamLimits

0xce96,	// (0x0004fb0c) listrow_wgtman_pane_t2_ParamLimits

0xfe5a,	// (0x00052ad0) listrow_wgtman_pane_t_ParamLimits

0xcebc,	// (0x0004fb32) wait_bar_pane_cp09_ParamLimits

0xd7d4,	// (0x0005044a) bg_popup_heading_pane_cp02

0xd759,	// (0x000503cf) popup_notif_wgt_heading_pane_g1

0xd761,	// (0x000503d7) popup_notif_wgt_heading_pane_t1

0x2475,	// (0x000450eb) main_vids_pane

0xd7d4,	// (0x0005044a) vids_listscroll_pane

0xd76f,	// (0x000503e5) scroll_pane_cp040

0xd7d4,	// (0x0005044a) vids_list_pane

0xd778,	// (0x000503ee) vids_list_double_pane_ParamLimits

0xd778,	// (0x000503ee) vids_list_double_pane

0xd789,	// (0x000503ff) vids_list_double_pane_g1

0xd792,	// (0x00050408) vids_list_double_pane_t1

0xd7a2,	// (0x00050418) vids_list_double_pane_t2

0x0001,

0xfef3,	// (0x00052b69) vids_list_double_pane_t

0x8a95,	// (0x0004b70b) main_ncimui_pane_ParamLimits

0xb95e,	// (0x0004e5d4) main_ncimui_pane_g1_ParamLimits

0xb96a,	// (0x0004e5e0) main_ncimui_pane_g2_ParamLimits

0xb96a,	// (0x0004e5e0) main_ncimui_pane_g2

0x0001,

0xfba0,	// (0x00052816) main_ncimui_pane_g_ParamLimits

0xfba0,	// (0x00052816) main_ncimui_pane_g

0xd5da,	// (0x00050250) main_welc_pane_g1_ParamLimits

0xd5da,	// (0x00050250) main_welc_pane_g1

0xd5e6,	// (0x0005025c) main_welc_pane_g2_ParamLimits

0xd5e6,	// (0x0005025c) main_welc_pane_g2

0x0003,

0xfedd,	// (0x00052b53) main_welc_pane_g_ParamLimits

0xfedd,	// (0x00052b53) main_welc_pane_g

0xde4a,	// (0x00050ac0) listscroll_mce_pane_ParamLimits

0x8114,	// (0x0004ad8a) wait_bar_pane_cp10

0x2469,	// (0x000450df) main_cale_day_pane_ParamLimits

0x2469,	// (0x000450df) main_cale_week_pane_ParamLimits

0xde4a,	// (0x00050ac0) main_messa_pane_ParamLimits

0x9749,	// (0x0004c3bf) main_clock2_btn_pane_ParamLimits

0x9749,	// (0x0004c3bf) main_clock2_btn_pane

0x2bf5,	// (0x0004586b) main_clock2_btn_pane_cp01_ParamLimits

0x2bf5,	// (0x0004586b) main_clock2_btn_pane_cp01

0x475d,	// (0x000473d3) list_cale_mrui_pane_ParamLimits

0xcc63,	// (0x0004f8d9) main_cf0_pane_g2

0x0001,

0xfe2c,	// (0x00052aa2) main_cf0_pane_g

0xd0b5,	// (0x0004fd2b) area_left_week_number_pane_ParamLimits

0xd0c6,	// (0x0004fd3c) area_top_day_name_pane_ParamLimits

0xd0d2,	// (0x0004fd48) frame_month_view_pane_ParamLimits

0xd0e3,	// (0x0004fd59) grid_month_view_pane_ParamLimits

0xd14c,	// (0x0004fdc2) frm_month_g1_ParamLimits

0xd159,	// (0x0004fdcf) frm_month_g2_ParamLimits

0xd168,	// (0x0004fdde) frm_month_g3_ParamLimits

0xd177,	// (0x0004fded) frm_month_g4_ParamLimits

0xd186,	// (0x0004fdfc) frm_month_g5_ParamLimits

0xd195,	// (0x0004fe0b) frm_month_g6_ParamLimits

0xd1a4,	// (0x0004fe1a) frm_month_g7_ParamLimits

0xd1b3,	// (0x0004fe29) frm_month_g8_ParamLimits

0xd1c0,	// (0x0004fe36) frm_month_g9_ParamLimits

0xd1cd,	// (0x0004fe43) frm_month_g10_ParamLimits

0xd1da,	// (0x0004fe50) frm_month_g11_ParamLimits

0xd1e7,	// (0x0004fe5d) frm_month_g12_ParamLimits

0xd1f4,	// (0x0004fe6a) frm_month_g13_ParamLimits

0xd201,	// (0x0004fe77) frm_month_g14_ParamLimits

0xd20e,	// (0x0004fe84) frm_month_g15_ParamLimits

0xd21b,	// (0x0004fe91) frm_month_g16_ParamLimits

0xfe84,	// (0x00052afa) frm_month_g_ParamLimits

0xd228,	// (0x0004fe9e) cell_top_day_name_pane_t1_ParamLimits

0xd23b,	// (0x0004feb1) cell_area_left_week_number_pane_g1_ParamLimits

0xd24a,	// (0x0004fec0) cell_area_left_week_number_pane_t1_ParamLimits

0xdec4,	// (0x00050b3a) cell_month_view_pane_g1_ParamLimits

0xd260,	// (0x0004fed6) cell_month_view_pane_t1_ParamLimits

0xde42,	// (0x00050ab8) main_clock2_btn_pane_g1

0xee66,	// (0x00051adc) main_clock2_btn_pane_t1

0xebdb,	// (0x00051851) listscroll_cmail_pane_ParamLimits

0x432f,	// (0x00046fa5) main_sp_fs_email_pane_g1_ParamLimits

0x433b,	// (0x00046fb1) main_sp_fs_email_pane_g2_ParamLimits

0xfc9f,	// (0x00052915) main_sp_fs_email_pane_g_ParamLimits

0x4887,	// (0x000474fd) list_recal_day_pane_ParamLimits

0x4898,	// (0x0004750e) mian_recal_day_pane_t1

0xc1cd,	// (0x0004ee43) list_single_dyc_row_text_pane_t4_ParamLimits

0xc1cd,	// (0x0004ee43) list_single_dyc_row_text_pane_t4

0xc204,	// (0x0004ee7a) list_single_dyc_row_text_pane_t5_ParamLimits

0xc204,	// (0x0004ee7a) list_single_dyc_row_text_pane_t5

0x43d4,	// (0x0004704a) list_single_dyc_row_text_pane_t6_ParamLimits

0x43d4,	// (0x0004704a) list_single_dyc_row_text_pane_t6

0x7d33,	// (0x0004a9a9) aid_mgn_list_cale_time_pane

0x8a95,	// (0x0004b70b) main_gallery2_pane_ParamLimits

0x2c09,	// (0x0004587f) main_clock2_pane_cp01_t1

0x2c17,	// (0x0004588d) main_clock2_pane_cp01_t3

0x0001,

0xf776,	// (0x000523ec) main_clock2_pane_cp01_t

0x67ff,	// (0x00049475) cale_week_scroll_pane_g16_ParamLimits

0x67ff,	// (0x00049475) cale_week_scroll_pane_g16

0xe107,	// (0x00050d7d) vorec_slider_pane

0xd55e,	// (0x000501d4) vidtel_button_pane_t1_ParamLimits

0xded2,	// (0x00050b48) main_fs_bigclock_clock_pane_g1_ParamLimits

0xc87b,	// (0x0004f4f1) main_fs_bigclock_clock_pane_g2_ParamLimits

0xc888,	// (0x0004f4fe) main_fs_bigclock_clock_pane_g3_ParamLimits

0xc888,	// (0x0004f4fe) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdda,	// (0x00052a50) main_fs_bigclock_clock_pane_g_ParamLimits

0xc894,	// (0x0004f50a) main_fs_bigclock_clock_pane_t1_ParamLimits

0xc8a6,	// (0x0004f51c) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfde3,	// (0x00052a59) main_fs_bigclock_clock_pane_t_ParamLimits

0x9149,	// (0x0004bdbf) main_mup3_lyrics_pane_ParamLimits

0x9149,	// (0x0004bdbf) main_mup3_lyrics_pane

0xee74,	// (0x00051aea) main_mup3_lyrics_pane_t1_ParamLimits

0xee74,	// (0x00051aea) main_mup3_lyrics_pane_t1

0x9c17,	// (0x0004c88d) aid_main_mp4_pane_t1_area

0x9c21,	// (0x0004c897) aid_main_mp4_pane_t2_area

0x9d10,	// (0x0004c986) main_mp4_pane_g7_ParamLimits

0x9d10,	// (0x0004c986) main_mp4_pane_g7

0x9d1c,	// (0x0004c992) main_mp4_pane_g8_ParamLimits

0x9d1c,	// (0x0004c992) main_mp4_pane_g8

0xa04c,	// (0x0004ccc2) aid_call6_pane_g1_size

0xd42f,	// (0x000500a5) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd42f,	// (0x000500a5) list_double_large_graphic_phob2_other_pane

0xe93e,	// (0x000515b4) list_double_large_graphic_phob2_other_pane_g1

0xd7d4,	// (0x0005044a) list_highlight_pane_cp026

0xebdb,	// (0x00051851) main_welc_pane_ParamLimits

0xc006,	// (0x0004ec7c) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xc006,	// (0x0004ec7c) main_sp_fs_ctrlbar_pane_g3

0xc01e,	// (0x0004ec94) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xc01e,	// (0x0004ec94) main_sp_fs_ctrlbar_pane_g4

0xc05e,	// (0x0004ecd4) toolbar2_fixed_button_pane_cp01

0xc068,	// (0x0004ecde) toolbar2_fixed_button_pane_cp02

0xc073,	// (0x0004ece9) toolbar2_fixed_button_pane_cp03

0xd597,	// (0x0005020d) list_welc_entry_pane_ParamLimits

0xd597,	// (0x0005020d) list_welc_entry_pane

0xd5f2,	// (0x00050268) main_welc_pane_g3_ParamLimits

0xd5f2,	// (0x00050268) main_welc_pane_g3

0xd632,	// (0x000502a8) main_welc_pane_t2_ParamLimits

0xd632,	// (0x000502a8) main_welc_pane_t2

0xd644,	// (0x000502ba) main_welc_pane_t3_ParamLimits

0xd644,	// (0x000502ba) main_welc_pane_t3

0x0005,

0xfee6,	// (0x00052b5c) main_welc_pane_t_ParamLimits

0xfee6,	// (0x00052b5c) main_welc_pane_t

0xd6cc,	// (0x00050342) welc_button_pane_ParamLimits

0xd6cc,	// (0x00050342) welc_button_pane

0xd712,	// (0x00050388) welc_service_logo_pane_ParamLimits

0xd712,	// (0x00050388) welc_service_logo_pane

0xee92,	// (0x00051b08) list_single_welc_entry_pane_ParamLimits

0xee92,	// (0x00051b08) list_single_welc_entry_pane

0xeea3,	// (0x00051b19) list_single_welc_entry_pane_g1

0xeeab,	// (0x00051b21) list_single_welc_entry_pane_t1

0xeeb9,	// (0x00051b2f) list_single_welc_entry_pane_t2

0x0001,

0xfef8,	// (0x00052b6e) list_single_welc_entry_pane_t

0xd7d4,	// (0x0005044a) bg_button_pane_cp035

0xeec7,	// (0x00051b3d) welc_button_pane_t1

0xeed5,	// (0x00051b4b) welc_service_logo_pane_g1

0xeede,	// (0x00051b54) welc_service_logo_pane_g2

0x0001,

0xfefd,	// (0x00052b73) welc_service_logo_pane_g

0x6241,	// (0x00048eb7) main_int_radio_pane

0xdfba,	// (0x00050c30) list_single_fs_dyc_pane_g1

0xd31f,	// (0x0004ff95) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xd31f,	// (0x0004ff95) list_double_large_graphic_phob2_pane_g3

0xd32b,	// (0x0004ffa1) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xd32b,	// (0x0004ffa1) list_double_large_graphic_phob2_pane_g4

0xeee7,	// (0x00051b5d) main_int_radio1_pane_ParamLimits

0xeee7,	// (0x00051b5d) main_int_radio1_pane

0xeefd,	// (0x00051b73) find_pane_cp02

0xef06,	// (0x00051b7c) input_focus_pane_cp12_ParamLimits

0xef06,	// (0x00051b7c) input_focus_pane_cp12

0xef12,	// (0x00051b88) input_focus_pane_cp13_ParamLimits

0xef12,	// (0x00051b88) input_focus_pane_cp13

0xef2a,	// (0x00051ba0) input_focus_pane_cp14_ParamLimits

0xef2a,	// (0x00051ba0) input_focus_pane_cp14

0xef42,	// (0x00051bb8) int_radio1_listscroll_pane

0xef4c,	// (0x00051bc2) main_int_radio1_pane_g1_ParamLimits

0xef4c,	// (0x00051bc2) main_int_radio1_pane_g1

0xef58,	// (0x00051bce) main_int_radio1_pane_t1_ParamLimits

0xef58,	// (0x00051bce) main_int_radio1_pane_t1

0xef6a,	// (0x00051be0) main_int_radio1_pane_t2_ParamLimits

0xef6a,	// (0x00051be0) main_int_radio1_pane_t2

0xef7c,	// (0x00051bf2) main_int_radio1_pane_t3_ParamLimits

0xef7c,	// (0x00051bf2) main_int_radio1_pane_t3

0xef8e,	// (0x00051c04) main_int_radio1_pane_t4_ParamLimits

0xef8e,	// (0x00051c04) main_int_radio1_pane_t4

0xefa5,	// (0x00051c1b) main_int_radio1_pane_t5_ParamLimits

0xefa5,	// (0x00051c1b) main_int_radio1_pane_t5

0xefb7,	// (0x00051c2d) main_int_radio1_pane_t6_ParamLimits

0xefb7,	// (0x00051c2d) main_int_radio1_pane_t6

0xefc9,	// (0x00051c3f) main_int_radio1_pane_t7_ParamLimits

0xefc9,	// (0x00051c3f) main_int_radio1_pane_t7

0xefdb,	// (0x00051c51) main_int_radio1_pane_t8_ParamLimits

0xefdb,	// (0x00051c51) main_int_radio1_pane_t8

0xefed,	// (0x00051c63) main_int_radio1_pane_t9_ParamLimits

0xefed,	// (0x00051c63) main_int_radio1_pane_t9

0xefff,	// (0x00051c75) main_int_radio1_pane_t10_ParamLimits

0xefff,	// (0x00051c75) main_int_radio1_pane_t10

0xf02e,	// (0x00051ca4) main_int_radio1_pane_t11_ParamLimits

0xf02e,	// (0x00051ca4) main_int_radio1_pane_t11

0xf05d,	// (0x00051cd3) main_int_radio1_pane_t12_ParamLimits

0xf05d,	// (0x00051cd3) main_int_radio1_pane_t12

0x000b,

0xff02,	// (0x00052b78) main_int_radio1_pane_t_ParamLimits

0xff02,	// (0x00052b78) main_int_radio1_pane_t

0xf074,	// (0x00051cea) int_radio_list_pane

0xd2bc,	// (0x0004ff32) scroll_pane_cp037

0xce48,	// (0x0004fabe) list_double_large_graphic_int_radio_pane_ParamLimits

0xce48,	// (0x0004fabe) list_double_large_graphic_int_radio_pane

0xf07c,	// (0x00051cf2) list_double_large_graphic_int_radio_pane_g1

0x4a85,	// (0x000476fb) list_double_large_graphic_int_radio_pane_t1

0x4a93,	// (0x00047709) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xff1b,	// (0x00052b91) list_double_large_graphic_int_radio_pane_t

0xd7d4,	// (0x0005044a) list_highlight_pane_cp027

0xd5a4,	// (0x0005021a) main_button_pane_4

0xd5fe,	// (0x00050274) main_welc_pane_g4_ParamLimits

0xd5fe,	// (0x00050274) main_welc_pane_g4

0xd656,	// (0x000502cc) main_welc_pane_t4_ParamLimits

0xd656,	// (0x000502cc) main_welc_pane_t4

0xd668,	// (0x000502de) main_welc_pane_t5_ParamLimits

0xd668,	// (0x000502de) main_welc_pane_t5

0xd69a,	// (0x00050310) main_welc_pane_t6_ParamLimits

0xd69a,	// (0x00050310) main_welc_pane_t6

0xd6d8,	// (0x0005034e) welc_button_pane_2_ParamLimits

0xd6d8,	// (0x0005034e) welc_button_pane_2

0xd6ec,	// (0x00050362) welc_button_pane_3_ParamLimits

0xd6ec,	// (0x00050362) welc_button_pane_3

0xd5a4,	// (0x0005021a) welc_button_pane_4

0xd704,	// (0x0005037a) welc_button_pane_5_ParamLimits

0xd704,	// (0x0005037a) welc_button_pane_5

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance
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
	0, // AknLayoutScalable_Apps::Tcell_pinb_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tlist_pinb_item_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmup_spec_bar_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmup2_spec_bar_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tcell_dialer_keypad_pane_ParamLimits_sig*,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVRC,
	0, // AknLayoutScalable_Apps::Tcell_dialer_command_2_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tlist_single_spcha_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmain_popup_welc_pane_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_g3_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_g4_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_t3_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_t4_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t4_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t5_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t6_sig*,
	};

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Small
