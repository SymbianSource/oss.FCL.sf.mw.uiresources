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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0001c67f };

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
0x40b3,	// (0x00020732) Screen

0x40bf,	// (0x0002073e) application_window

0x40cb,	// (0x0002074a) area_bottom_pane_ParamLimits

0x40cb,	// (0x0002074a) area_bottom_pane

0x2747,	// (0x0001edc6) area_top_pane_ParamLimits

0x2747,	// (0x0001edc6) area_top_pane

0x27ab,	// (0x0001ee2a) call_video_uplink_pane_ParamLimits

0x27ab,	// (0x0001ee2a) call_video_uplink_pane

0x27ea,	// (0x0001ee69) main_pane_ParamLimits

0x27ea,	// (0x0001ee69) main_pane

0xdc97,	// (0x0002a316) context_pane

0x6e67,	// (0x000234e6) navi_pane

0x6e8d,	// (0x0002350c) popup_cale_events_window_ParamLimits

0x6e8d,	// (0x0002350c) popup_cale_events_window

0xdcaa,	// (0x0002a329) popup_mup_playback_window

0x6ea5,	// (0x00023524) signal_pane

0xbbdf,	// (0x0002825e) main_browser_pane

0xbda4,	// (0x00028423) main_burst_pane

0x2da8,	// (0x0001f427) main_calc_pane

0xdc7d,	// (0x0002a2fc) main_cale_day_pane

0x44e4,	// (0x00020b63) main_cale_month_pane

0xdc7d,	// (0x0002a2fc) main_cale_week_pane

0xbda4,	// (0x00028423) main_call_pane

0xb8b1,	// (0x00027f30) main_call_poc_pane

0xbda4,	// (0x00028423) main_camera_pane

0xbda4,	// (0x00028423) main_chi_dic_pane

0xc57b,	// (0x00028bfa) main_clock_pane

0xb8b1,	// (0x00027f30) main_fmradio_pane

0xbda4,	// (0x00028423) main_graph_messa_pane

0xb8b1,	// (0x00027f30) main_help_pane

0xbbdf,	// (0x0002825e) main_im_pane

0xbb0c,	// (0x0002818b) main_image_pane_ParamLimits

0xbb0c,	// (0x0002818b) main_image_pane

0xb8b1,	// (0x00027f30) main_location2_pane

0xbda4,	// (0x00028423) main_location_pane

0xbb0c,	// (0x0002818b) main_messa_pane

0xb8b1,	// (0x00027f30) main_mp2_pane

0xbda4,	// (0x00028423) main_mp_pane

0xb8b1,	// (0x00027f30) main_msg_pane

0xb8b1,	// (0x00027f30) main_mup_eq_pane

0xb8b1,	// (0x00027f30) main_mup_pane

0xbbdf,	// (0x0002825e) main_notes_pane

0xb8b1,	// (0x00027f30) main_pec_pane

0xb8b1,	// (0x00027f30) main_phob_pane

0xb8b1,	// (0x00027f30) main_pinb_pane

0xb8b1,	// (0x00027f30) main_postcard_pane

0xb8b1,	// (0x00027f30) main_qdial_pane

0xbda4,	// (0x00028423) main_skin_pane

0xb8b1,	// (0x00027f30) main_smil2_pane

0xbda4,	// (0x00028423) main_smil_pane

0xbda4,	// (0x00028423) main_video_pane

0xbda4,	// (0x00028423) main_video_tele_pane

0xbb0c,	// (0x0002818b) main_viewer_pane_ParamLimits

0xbb0c,	// (0x0002818b) main_viewer_pane

0xbda4,	// (0x00028423) main_vorec_pane

0x2df4,	// (0x0001f473) popup_blid_sat_info_window_ParamLimits

0x2df4,	// (0x0001f473) popup_blid_sat_info_window

0x2e14,	// (0x0001f493) popup_dyc_status_message_window_ParamLimits

0x2e14,	// (0x0001f493) popup_dyc_status_message_window

0x2e24,	// (0x0001f4a3) popup_grid_large_graphic_window_ParamLimits

0x2e24,	// (0x0001f4a3) popup_grid_large_graphic_window

0x2eb5,	// (0x0001f534) popup_loc_request_window_ParamLimits

0x2eb5,	// (0x0001f534) popup_loc_request_window

0x2f02,	// (0x0001f581) popup_wml_address_window_ParamLimits

0x2f02,	// (0x0001f581) popup_wml_address_window

0x6d49,	// (0x000233c8) call_muted_g1

0x6a0b,	// (0x0002308a) popup_call_audio_conf_window_ParamLimits

0x6a0b,	// (0x0002308a) popup_call_audio_conf_window

0x6d59,	// (0x000233d8) popup_call_audio_first_window_ParamLimits

0x6d59,	// (0x000233d8) popup_call_audio_first_window

0x6d99,	// (0x00023418) popup_call_audio_in_window_ParamLimits

0x6d99,	// (0x00023418) popup_call_audio_in_window

0x6dbd,	// (0x0002343c) popup_call_audio_out_window_ParamLimits

0x6dbd,	// (0x0002343c) popup_call_audio_out_window

0x6ddf,	// (0x0002345e) popup_call_audio_second_window_ParamLimits

0x6ddf,	// (0x0002345e) popup_call_audio_second_window

0x6e0f,	// (0x0002348e) popup_call_audio_wait_window_ParamLimits

0x6e0f,	// (0x0002348e) popup_call_audio_wait_window

0x6e30,	// (0x000234af) popup_number_entry_window_ParamLimits

0x6e30,	// (0x000234af) popup_number_entry_window

0xb49e,	// (0x00027b1d) bg_popup_call_pane_cp05_ParamLimits

0xb49e,	// (0x00027b1d) bg_popup_call_pane_cp05

0xb4be,	// (0x00027b3d) popup_number_entry_window_t1

0xb4d1,	// (0x00027b50) popup_number_entry_window_t2

0xb4e3,	// (0x00027b62) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0002b749) popup_number_entry_window_t

0xb4f5,	// (0x00027b74) text_title_cp2

0xb508,	// (0x00027b87) bg_popup_call_pane_cp_ParamLimits

0xb508,	// (0x00027b87) bg_popup_call_pane_cp

0xb516,	// (0x00027b95) call_thumbnail_pane

0xb51e,	// (0x00027b9d) popup_call_audio_in_window_g1_ParamLimits

0xb51e,	// (0x00027b9d) popup_call_audio_in_window_g1

0xb52a,	// (0x00027ba9) popup_call_audio_in_window_g2_ParamLimits

0xb52a,	// (0x00027ba9) popup_call_audio_in_window_g2

0xb536,	// (0x00027bb5) popup_call_audio_in_window_g3_ParamLimits

0xb536,	// (0x00027bb5) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0002b752) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0002b752) popup_call_audio_in_window_g

0xb542,	// (0x00027bc1) popup_call_audio_in_window_t1_ParamLimits

0xb542,	// (0x00027bc1) popup_call_audio_in_window_t1

0xb55e,	// (0x00027bdd) popup_call_audio_in_window_t2_ParamLimits

0xb55e,	// (0x00027bdd) popup_call_audio_in_window_t2

0xb57a,	// (0x00027bf9) popup_call_audio_in_window_t3_ParamLimits

0xb57a,	// (0x00027bf9) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0002b759) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0002b759) popup_call_audio_in_window_t

0xb508,	// (0x00027b87) bg_popup_call_pane_cp01_ParamLimits

0xb508,	// (0x00027b87) bg_popup_call_pane_cp01

0xb516,	// (0x00027b95) call_thumbnail_pane_cp02

0xb58d,	// (0x00027c0c) call_type_pane_cp022

0xb595,	// (0x00027c14) popup_call_audio_out_window_g1_ParamLimits

0xb595,	// (0x00027c14) popup_call_audio_out_window_g1

0xb5a7,	// (0x00027c26) popup_call_audio_out_window_g2_ParamLimits

0xb5a7,	// (0x00027c26) popup_call_audio_out_window_g2

0xb5b3,	// (0x00027c32) popup_call_audio_out_window_g3_ParamLimits

0xb5b3,	// (0x00027c32) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0002b760) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0002b760) popup_call_audio_out_window_g

0xb5c5,	// (0x00027c44) popup_call_audio_out_window_t1_ParamLimits

0xb5c5,	// (0x00027c44) popup_call_audio_out_window_t1

0xb5dd,	// (0x00027c5c) popup_call_audio_out_window_t2_ParamLimits

0xb5dd,	// (0x00027c5c) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0002b767) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0002b767) popup_call_audio_out_window_t

0xb5f2,	// (0x00027c71) bg_popup_call_pane_ParamLimits

0xb5f2,	// (0x00027c71) bg_popup_call_pane

0x4145,	// (0x000207c4) call_thumbnail_pane_cp_ParamLimits

0x4145,	// (0x000207c4) call_thumbnail_pane_cp

0xb676,	// (0x00027cf5) call_type_pane_cp01_ParamLimits

0xb676,	// (0x00027cf5) call_type_pane_cp01

0xb6ba,	// (0x00027d39) popup_call_audio_first_window_g1_ParamLimits

0xb6ba,	// (0x00027d39) popup_call_audio_first_window_g1

0xb706,	// (0x00027d85) popup_call_audio_first_window_g2_ParamLimits

0xb706,	// (0x00027d85) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0002b76c) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0002b76c) popup_call_audio_first_window_g

0xb74a,	// (0x00027dc9) popup_call_audio_first_window_t1_ParamLimits

0xb74a,	// (0x00027dc9) popup_call_audio_first_window_t1

0xb7f6,	// (0x00027e75) popup_call_audio_first_window_t4_ParamLimits

0xb7f6,	// (0x00027e75) popup_call_audio_first_window_t4

0xb882,	// (0x00027f01) popup_call_audio_first_window_t5_ParamLimits

0xb882,	// (0x00027f01) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0002b771) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0002b771) popup_call_audio_first_window_t

0xb8b1,	// (0x00027f30) bg_popup_call_pane_cp02

0xb8bb,	// (0x00027f3a) call_type_pane_cp023

0xb8c3,	// (0x00027f42) popup_call_audio_wait_window_g1

0xb8cb,	// (0x00027f4a) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0002b778) popup_call_audio_wait_window_g

0xb8d3,	// (0x00027f52) popup_call_audio_wait_window_t3

0xb8e1,	// (0x00027f60) bg_popup_call_pane_cp03_ParamLimits

0xb8e1,	// (0x00027f60) bg_popup_call_pane_cp03

0xb941,	// (0x00027fc0) call_thumbnail_pane_cp011_ParamLimits

0xb941,	// (0x00027fc0) call_thumbnail_pane_cp011

0xb94d,	// (0x00027fcc) call_type_pane_cp034_ParamLimits

0xb94d,	// (0x00027fcc) call_type_pane_cp034

0xb989,	// (0x00028008) popup_call_audio_second_window_g1_ParamLimits

0xb989,	// (0x00028008) popup_call_audio_second_window_g1

0xb9c5,	// (0x00028044) popup_call_audio_second_window_g2_ParamLimits

0xb9c5,	// (0x00028044) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0002b77d) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0002b77d) popup_call_audio_second_window_g

0xba01,	// (0x00028080) popup_call_audio_second_window_t1_ParamLimits

0xba01,	// (0x00028080) popup_call_audio_second_window_t1

0xba82,	// (0x00028101) popup_call_audio_second_window_t2_ParamLimits

0xba82,	// (0x00028101) popup_call_audio_second_window_t2

0xbab8,	// (0x00028137) popup_call_audio_second_window_t3_ParamLimits

0xbab8,	// (0x00028137) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0002b782) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0002b782) popup_call_audio_second_window_t

0xb8b1,	// (0x00027f30) bg_popup_call_pane_cp04

0xbaee,	// (0x0002816d) list_conf_pane

0xbaf6,	// (0x00028175) popup_call_audio_conf_window_t1

0xbb04,	// (0x00028183) call_thumbnail_pane_g1

0xbb0c,	// (0x0002818b) bg_pinb_pane_ParamLimits

0xbb0c,	// (0x0002818b) bg_pinb_pane

0xbb1a,	// (0x00028199) find_pinb_pane

0xbb23,	// (0x000281a2) listscroll_pinb_pane_ParamLimits

0xbb23,	// (0x000281a2) listscroll_pinb_pane

0xbb32,	// (0x000281b1) pinb_bg_pane_g1

0x4169,	// (0x000207e8) pinb_bg_pane_g2

0x4175,	// (0x000207f4) pinb_bg_pane_g3

0x4181,	// (0x00020800) pinb_bg_pane_g4

0x418d,	// (0x0002080c) pinb_bg_pane_g5

0x4199,	// (0x00020818) pinb_bg_pane_g6

0x41a4,	// (0x00020823) pinb_bg_pane_g7

0x41af,	// (0x0002082e) pinb_bg_pane_g8

0x41ba,	// (0x00020839) pinb_bg_pane_g9

0x41c4,	// (0x00020843) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0002b789) pinb_bg_pane_g

0x41e1,	// (0x00020860) grid_pinb_pane

0x41ec,	// (0x0002086b) list_pinb_pane

0x41f7,	// (0x00020876) scroll_pane_cp01_ParamLimits

0x41f7,	// (0x00020876) scroll_pane_cp01

0xbb3c,	// (0x000281bb) find_pinb_pane_g1_ParamLimits

0xbb3c,	// (0x000281bb) find_pinb_pane_g1

0xbb54,	// (0x000281d3) find_pinb_pane_t1

0xbb66,	// (0x000281e5) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0002b7a3) find_pinb_pane_t

0xbb7b,	// (0x000281fa) input_focus_pane_cp01_ParamLimits

0xbb7b,	// (0x000281fa) input_focus_pane_cp01

0x4209,	// (0x00020888) cell_pinb_pane_ParamLimits

0x4209,	// (0x00020888) cell_pinb_pane

0x4231,	// (0x000208b0) cell_pinb_pane_g1_ParamLimits

0x4231,	// (0x000208b0) cell_pinb_pane_g1

0x4246,	// (0x000208c5) cell_pinb_pane_g2_ParamLimits

0x4246,	// (0x000208c5) cell_pinb_pane_g2

0xbb87,	// (0x00028206) cell_pinb_pane_g3_ParamLimits

0xbb87,	// (0x00028206) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0002b7a8) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0002b7a8) cell_pinb_pane_g

0xb8b1,	// (0x00027f30) grid_highlight_pane_cp01

0x4252,	// (0x000208d1) list_pinb_item_pane_ParamLimits

0x4252,	// (0x000208d1) list_pinb_item_pane

0xb8b1,	// (0x00027f30) list_highlight_pane_cp02

0x4278,	// (0x000208f7) list_pinb_item_pane_g1_ParamLimits

0x4278,	// (0x000208f7) list_pinb_item_pane_g1

0x4285,	// (0x00020904) list_pinb_item_pane_g2_ParamLimits

0x4285,	// (0x00020904) list_pinb_item_pane_g2

0x4291,	// (0x00020910) list_pinb_item_pane_g3_ParamLimits

0x4291,	// (0x00020910) list_pinb_item_pane_g3

0x42a2,	// (0x00020921) list_pinb_item_pane_g4_ParamLimits

0x42a2,	// (0x00020921) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0002b7af) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0002b7af) list_pinb_item_pane_g

0x42ae,	// (0x0002092d) list_pinb_item_pane_t1_ParamLimits

0x42ae,	// (0x0002092d) list_pinb_item_pane_t1

0x29d8,	// (0x0001f057) calc_display_pane

0x29f6,	// (0x0001f075) calc_paper_pane

0x2a12,	// (0x0001f091) grid_calc_pane

0xb8b1,	// (0x00027f30) bg_list_pane_cp01

0x42c5,	// (0x00020944) clock_g1

0x42cd,	// (0x0002094c) clock_g2

0x0001,

0xf139,	// (0x0002b7b8) clock_g

0x42d7,	// (0x00020956) clock_t1_ParamLimits

0x42d7,	// (0x00020956) clock_t1

0x42ec,	// (0x0002096b) clock_t2_ParamLimits

0x42ec,	// (0x0002096b) clock_t2

0x42fe,	// (0x0002097d) clock_t3_ParamLimits

0x42fe,	// (0x0002097d) clock_t3

0x4310,	// (0x0002098f) clock_t4_ParamLimits

0x4310,	// (0x0002098f) clock_t4

0x4322,	// (0x000209a1) clock_t5_ParamLimits

0x4322,	// (0x000209a1) clock_t5

0x4337,	// (0x000209b6) clock_t6_ParamLimits

0x4337,	// (0x000209b6) clock_t6

0x4349,	// (0x000209c8) clock_t7_ParamLimits

0x4349,	// (0x000209c8) clock_t7

0x435b,	// (0x000209da) clock_t8_ParamLimits

0x435b,	// (0x000209da) clock_t8

0x4371,	// (0x000209f0) clock_t9_ParamLimits

0x4371,	// (0x000209f0) clock_t9

0x0008,

0xf13e,	// (0x0002b7bd) clock_t_ParamLimits

0xf13e,	// (0x0002b7bd) clock_t

0xbb93,	// (0x00028212) popup_clock_analogue_window_cp02

0xbb93,	// (0x00028212) popup_clock_digital_window_cp01

0xbb9b,	// (0x0002821a) listscroll_help_pane

0xb8b1,	// (0x00027f30) phob_pre_status_pane

0xbbb3,	// (0x00028232) grid_qdial_pane

0xbb0c,	// (0x0002818b) listscroll_mce_pane

0xbb0c,	// (0x0002818b) bg_notes_pane

0xbbbd,	// (0x0002823c) list_notes_pane

0x4387,	// (0x00020a06) scroll_pane_cp06

0xbbcb,	// (0x0002824a) bg_calc_paper_pane

0x2a3e,	// (0x0001f0bd) list_calc_pane

0xbbdf,	// (0x0002825e) bg_calc_display_pane

0x2a58,	// (0x0001f0d7) calc_display_pane_t1

0x2a6d,	// (0x0001f0ec) calc_display_pane_t2

0x2a82,	// (0x0001f101) calc_display_pane_t3

0x0002,

0xf151,	// (0x0002b7d0) calc_display_pane_t

0x2a94,	// (0x0001f113) cell_calc_pane_ParamLimits

0x2a94,	// (0x0001f113) cell_calc_pane

0xbbeb,	// (0x0002826a) bg_calc_paper_pane_g1

0xbbf7,	// (0x00028276) bg_calc_paper_pane_g2

0xbc03,	// (0x00028282) bg_calc_paper_pane_g3

0xbc0f,	// (0x0002828e) bg_calc_paper_pane_g4

0xbc1b,	// (0x0002829a) bg_calc_paper_pane_g5

0x4396,	// (0x00020a15) bg_calc_paper_pane_g6

0x43a7,	// (0x00020a26) bg_calc_paper_pane_g7

0x43b8,	// (0x00020a37) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0002b7d7) bg_calc_paper_pane_g

0x43c9,	// (0x00020a48) calc_bg_paper_pane_g9

0x43da,	// (0x00020a59) list_calc_item_pane_ParamLimits

0x43da,	// (0x00020a59) list_calc_item_pane

0xbc27,	// (0x000282a6) list_calc_item_pane_g1

0x2ac1,	// (0x0001f140) list_calc_item_pane_t1_ParamLimits

0x2ac1,	// (0x0001f140) list_calc_item_pane_t1

0x2ad3,	// (0x0001f152) list_calc_item_pane_t2_ParamLimits

0x2ad3,	// (0x0001f152) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0002b7e8) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0002b7e8) list_calc_item_pane_t

0xbc34,	// (0x000282b3) cell_calc_pane_g1

0xbc3e,	// (0x000282bd) grid_highlight_pane_cp02

0x4409,	// (0x00020a88) bg_calc_display_pane_g1

0x2b03,	// (0x0001f182) bg_calc_display_pane_g2

0xde66,	// (0x0002a4e5) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0002b7f2) bg_calc_display_pane_g

0x2b0d,	// (0x0001f18c) cell_qdial_pane_ParamLimits

0x2b0d,	// (0x0001f18c) cell_qdial_pane

0x4412,	// (0x00020a91) cell_qdial_pane_g1_ParamLimits

0x4412,	// (0x00020a91) cell_qdial_pane_g1

0x441f,	// (0x00020a9e) cell_qdial_pane_g2_ParamLimits

0x441f,	// (0x00020a9e) cell_qdial_pane_g2

0xbc60,	// (0x000282df) cell_qdial_pane_g3_ParamLimits

0xbc60,	// (0x000282df) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0002b7f9) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0002b7f9) cell_qdial_pane_g

0x443d,	// (0x00020abc) cell_qdial_pane_t1_ParamLimits

0x443d,	// (0x00020abc) cell_qdial_pane_t1

0x4455,	// (0x00020ad4) cell_qdial_pane_t2_ParamLimits

0x4455,	// (0x00020ad4) cell_qdial_pane_t2

0x4468,	// (0x00020ae7) cell_qdial_pane_t3_ParamLimits

0x4468,	// (0x00020ae7) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0002b802) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0002b802) cell_qdial_pane_t

0xb8b1,	// (0x00027f30) grid_highlight_pane_cp04

0xbc6c,	// (0x000282eb) thumbnail_qdial_pane_ParamLimits

0xbc6c,	// (0x000282eb) thumbnail_qdial_pane

0xbcc8,	// (0x00028347) list_help_pane

0xbcd1,	// (0x00028350) scroll_pane_cp02

0x447b,	// (0x00020afa) help_list_pane_t1_ParamLimits

0x447b,	// (0x00020afa) help_list_pane_t1

0x2b21,	// (0x0001f1a0) bg_notes_pane_g2

0x2b29,	// (0x0001f1a8) bg_notes_pane_g3

0x2b31,	// (0x0001f1b0) notes_bg_pane_g1

0x2b39,	// (0x0001f1b8) notes_bg_pane_g4

0x2b41,	// (0x0001f1c0) notes_bg_pane_g5

0x2b49,	// (0x0001f1c8) notes_bg_pane_g6

0x2b51,	// (0x0001f1d0) notes_bg_pane_g7

0x2b59,	// (0x0001f1d8) notes_bg_pane_g8

0x2b61,	// (0x0001f1e0) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0002b820) notes_bg_pane_g

0x44ae,	// (0x00020b2d) list_notes_text_pane_ParamLimits

0x44ae,	// (0x00020b2d) list_notes_text_pane

0xbcda,	// (0x00028359) list_notes_text_pane_g1

0x44d6,	// (0x00020b55) list_notes_text_pane_t1

0x44e4,	// (0x00020b63) listscroll_cale_week_pane

0x4509,	// (0x00020b88) bg_cale_heading_pane

0xbcfd,	// (0x0002837c) bg_cale_pane_cp01

0x4529,	// (0x00020ba8) cale_week_corner_pane

0x4543,	// (0x00020bc2) cale_week_day_heading_pane

0x4563,	// (0x00020be2) cale_week_scroll_pane_g1

0x457e,	// (0x00020bfd) cale_week_scroll_pane_g2

0x4591,	// (0x00020c10) cale_week_scroll_pane_g3

0x45a4,	// (0x00020c23) cale_week_scroll_pane_g4

0x45b7,	// (0x00020c36) cale_week_scroll_pane_g5

0x45ca,	// (0x00020c49) cale_week_scroll_pane_g6

0x45dd,	// (0x00020c5c) cale_week_scroll_pane_g7

0x45f2,	// (0x00020c71) cale_week_scroll_pane_g8

0x4607,	// (0x00020c86) cale_week_scroll_pane_g9

0x461a,	// (0x00020c99) cale_week_scroll_pane_g10

0x462d,	// (0x00020cac) cale_week_scroll_pane_g11

0x4640,	// (0x00020cbf) cale_week_scroll_pane_g12

0x4657,	// (0x00020cd6) cale_week_scroll_pane_g13

0x4672,	// (0x00020cf1) cale_week_scroll_pane_g14

0x468d,	// (0x00020d0c) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0002b82f) cale_week_scroll_pane_g

0x46bd,	// (0x00020d3c) cale_week_time_pane

0x46d2,	// (0x00020d51) grid_cale_week_pane

0xbd2c,	// (0x000283ab) scroll_pane_cp08

0x46f1,	// (0x00020d70) cell_cale_week_pane_ParamLimits

0x46f1,	// (0x00020d70) cell_cale_week_pane

0x4753,	// (0x00020dd2) cale_week_day_heading_pane_t1

0x476e,	// (0x00020ded) cale_week_day_heading_pane_t2

0x4789,	// (0x00020e08) cale_week_day_heading_pane_t3

0x47a4,	// (0x00020e23) cale_week_day_heading_pane_t4

0x47bf,	// (0x00020e3e) cale_week_day_heading_pane_t5

0x47da,	// (0x00020e59) cale_week_day_heading_pane_t6

0x47f5,	// (0x00020e74) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0002b850) cale_week_day_heading_pane_t

0xbd49,	// (0x000283c8) bg_cale_side_pane

0x2b69,	// (0x0001f1e8) cale_week_time_pane_t1

0x2b83,	// (0x0001f202) cale_week_time_pane_t2

0x2b9d,	// (0x0001f21c) cale_week_time_pane_t3

0x2bb7,	// (0x0001f236) cale_week_time_pane_t4

0x2bd1,	// (0x0001f250) cale_week_time_pane_t5

0x2beb,	// (0x0001f26a) cale_week_time_pane_t6

0x2c09,	// (0x0001f288) cale_week_time_pane_t7

0x2c2b,	// (0x0001f2aa) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0002b85f) cale_week_time_pane_t

0x4810,	// (0x00020e8f) cell_cale_week_pane_g2

0x4834,	// (0x00020eb3) cell_cale_week_pane_g3_ParamLimits

0x4834,	// (0x00020eb3) cell_cale_week_pane_g3

0xbd57,	// (0x000283d6) grid_highlight_pane_cp07

0xbd5f,	// (0x000283de) listscroll_gms_pane

0xbd69,	// (0x000283e8) grid_gms_pane

0xbd72,	// (0x000283f1) listscroll_gms_pane_g1

0xbd7a,	// (0x000283f9) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0002b870) listscroll_gms_pane_g

0x484c,	// (0x00020ecb) scroll_pane_cp010

0x4857,	// (0x00020ed6) cell_gms_pane_ParamLimits

0x4857,	// (0x00020ed6) cell_gms_pane

0x486a,	// (0x00020ee9) cell_gms_pane_g1

0xbd82,	// (0x00028401) cell_gms_pane_g2

0xbd8a,	// (0x00028409) cell_gms_pane_g3

0xbd93,	// (0x00028412) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0002b875) cell_gms_pane_g

0xbd9c,	// (0x0002841b) grid_highlight_pane_cp09

0x6cf1,	// (0x00023370) phob_pre_status_pane_g1

0x6cf9,	// (0x00023378) phob_pre_status_pane_g2

0x6d01,	// (0x00023380) phob_pre_status_pane_g3

0x6d09,	// (0x00023388) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0002bc60) phob_pre_status_pane_g

0x6d19,	// (0x00023398) phob_pre_status_pane_t1

0x6d29,	// (0x000233a8) phob_pre_status_pane_t2

0x6d39,	// (0x000233b8) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0002bc6b) phob_pre_status_pane_t

0xbda4,	// (0x00028423) bg_list_pane_cp05

0x487a,	// (0x00020ef9) grid_vorec_pane

0x4884,	// (0x00020f03) vorec_t1

0x4892,	// (0x00020f11) vorec_t2

0x48a0,	// (0x00020f1f) vorec_t3

0x48ae,	// (0x00020f2d) vorec_t4

0x408d,	// (0x0002070c) vorec_t5

0x409b,	// (0x0002071a) vorec_t6

0x0004,

0xf1ff,	// (0x0002b87e) vorec_t

0x40a9,	// (0x00020728) wait_bar_pane_cp01

0x48ca,	// (0x00020f49) cell_vorec_pane_ParamLimits

0x48ca,	// (0x00020f49) cell_vorec_pane

0x2c4f,	// (0x0001f2ce) cell_vorec_pane_g1

0xb8b1,	// (0x00027f30) grid_highlight_pane_cp05

0x48ed,	// (0x00020f6c) cams_zoom_pane

0x48f9,	// (0x00020f78) image_vga_pane

0x4908,	// (0x00020f87) main_camera_pane_g1

0x4916,	// (0x00020f95) main_camera_pane_g2

0x4922,	// (0x00020fa1) main_camera_pane_g3

0x492e,	// (0x00020fad) main_camera_pane_g4

0x493a,	// (0x00020fb9) main_camera_pane_g5

0x4946,	// (0x00020fc5) main_camera_pane_g6

0x4952,	// (0x00020fd1) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0002b889) main_camera_pane_g

0x495e,	// (0x00020fdd) main_camera_pane_t1

0x4970,	// (0x00020fef) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0002b89a) main_camera_pane_t

0x4991,	// (0x00021010) cams_zoom_pane_cp_ParamLimits

0x4991,	// (0x00021010) cams_zoom_pane_cp

0x49b5,	// (0x00021034) image_cif_pane_ParamLimits

0x49b5,	// (0x00021034) image_cif_pane

0x49d3,	// (0x00021052) image_subqcif_pane

0x49db,	// (0x0002105a) main_video_pane_g1_ParamLimits

0x49db,	// (0x0002105a) main_video_pane_g1

0x49fb,	// (0x0002107a) main_video_pane_g2_ParamLimits

0x49fb,	// (0x0002107a) main_video_pane_g2

0x4a2b,	// (0x000210aa) main_video_pane_g3_ParamLimits

0x4a2b,	// (0x000210aa) main_video_pane_g3

0x4a54,	// (0x000210d3) main_video_pane_g4_ParamLimits

0x4a54,	// (0x000210d3) main_video_pane_g4

0x4a7d,	// (0x000210fc) main_video_pane_g5_ParamLimits

0x4a7d,	// (0x000210fc) main_video_pane_g5

0xbdb8,	// (0x00028437) main_video_pane_g6_ParamLimits

0xbdb8,	// (0x00028437) main_video_pane_g6

0x0006,

0xf220,	// (0x0002b89f) main_video_pane_g_ParamLimits

0xf220,	// (0x0002b89f) main_video_pane_g

0x4a9f,	// (0x0002111e) main_video_pane_t1_ParamLimits

0x4a9f,	// (0x0002111e) main_video_pane_t1

0xbdd2,	// (0x00028451) cams_zoom_pane_g1

0xbddb,	// (0x0002845a) cams_zoom_pane_g2

0xbde4,	// (0x00028463) cams_zoom_pane_g3

0xbded,	// (0x0002846c) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0002b8ae) cams_zoom_pane_g

0x4ae9,	// (0x00021168) grid_cams_pane

0x4af7,	// (0x00021176) linegrid_cams_pane

0x4b05,	// (0x00021184) cell_cams_pane_ParamLimits

0x4b05,	// (0x00021184) cell_cams_pane

0xbdf6,	// (0x00028475) cams_burst_image_pane

0xbdfe,	// (0x0002847d) cell_cams_pane_g1

0xb8b1,	// (0x00027f30) grid_highlight_pane_cp03

0xbc34,	// (0x000282b3) mp_bg_pane_g1

0xb8b1,	// (0x00027f30) bg_list_pane_cp03

0xdba2,	// (0x0002a221) bg_mp_pane

0xdbaa,	// (0x0002a229) grid_mp_pane

0xdbb2,	// (0x0002a231) media_player_g1

0xdbba,	// (0x0002a239) media_player_t1

0xdbc8,	// (0x0002a247) media_player_t2

0xdbd6,	// (0x0002a255) media_player_t3

0xdbe4,	// (0x0002a263) media_player_t4

0xdbf2,	// (0x0002a271) media_player_t5

0xdc00,	// (0x0002a27f) media_player_t6

0xdc0e,	// (0x0002a28d) media_player_t7

0x0006,

0xf5cb,	// (0x0002bc4a) media_player_t

0xdc1c,	// (0x0002a29b) wait_bar_pane_cp02

0xf5b0,	// (0x0002bc2f) main_usb_pane_t

0x6ce8,	// (0x00023367) cell_mp_pane

0xbc34,	// (0x000282b3) cell_mp_pane_g1

0xb8b1,	// (0x00027f30) grid_highlight_pane_cp06

0xbe06,	// (0x00028485) grid_skin_colour_pane

0xbe0e,	// (0x0002848d) list_highlight_pane_cp03

0x4c2c,	// (0x000212ab) skin_g1

0xbe16,	// (0x00028495) skin_t1

0xbe25,	// (0x000284a4) skin_t2

0x0001,

0xf264,	// (0x0002b8e3) skin_t

0x4c36,	// (0x000212b5) cell_skin_colour_pane_ParamLimits

0x4c36,	// (0x000212b5) cell_skin_colour_pane

0xbe33,	// (0x000284b2) cell_skin_colour_pane_g1

0x4cba,	// (0x00021339) call_video_g1_ParamLimits

0x4cba,	// (0x00021339) call_video_g1

0x4cca,	// (0x00021349) call_video_g2_ParamLimits

0x4cca,	// (0x00021349) call_video_g2

0x0001,

0xf269,	// (0x0002b8e8) call_video_g_ParamLimits

0xf269,	// (0x0002b8e8) call_video_g

0x4d24,	// (0x000213a3) call_video_uplink_pane_cp1_ParamLimits

0x4d24,	// (0x000213a3) call_video_uplink_pane_cp1

0xbe45,	// (0x000284c4) call_video_uplink_pane_cp2

0x4df0,	// (0x0002146f) video_down_crop_pane_ParamLimits

0x4df0,	// (0x0002146f) video_down_crop_pane

0x4eee,	// (0x0002156d) video_down_pane_ParamLimits

0x4eee,	// (0x0002156d) video_down_pane

0xbe4d,	// (0x000284cc) video_down_subqcif_pane_ParamLimits

0xbe4d,	// (0x000284cc) video_down_subqcif_pane

0xbe65,	// (0x000284e4) video_down_subqcif_pane_cp_ParamLimits

0xbe65,	// (0x000284e4) video_down_subqcif_pane_cp

0xbe8b,	// (0x0002850a) im_reading_pane_ParamLimits

0xbe8b,	// (0x0002850a) im_reading_pane

0x500e,	// (0x0002168d) im_writing_pane_ParamLimits

0x500e,	// (0x0002168d) im_writing_pane

0x502c,	// (0x000216ab) im_reading_pane_t1

0xbea5,	// (0x00028524) list_im_pane

0xbeb6,	// (0x00028535) scroll_pane_cp07

0x5080,	// (0x000216ff) im_writing_pane_t1_ParamLimits

0x5080,	// (0x000216ff) im_writing_pane_t1

0xbecf,	// (0x0002854e) im_writing_pane_t2_ParamLimits

0xbecf,	// (0x0002854e) im_writing_pane_t2

0x0001,

0xf273,	// (0x0002b8f2) im_writing_pane_t_ParamLimits

0xf273,	// (0x0002b8f2) im_writing_pane_t

0xb8b1,	// (0x00027f30) input_focus_pane_cp04

0xb8b1,	// (0x00027f30) input_focus_pane_cp05

0x5095,	// (0x00021714) list_im_single_pane_ParamLimits

0x5095,	// (0x00021714) list_im_single_pane

0x50b9,	// (0x00021738) list_single_im_pane_t1

0x6cac,	// (0x0002332b) blid_accuracy_pane

0x6cb4,	// (0x00023333) blid_compass_pane

0x6cbe,	// (0x0002333d) main_location_t1

0x6ccc,	// (0x0002334b) main_location_t2

0x6cda,	// (0x00023359) main_location_t3

0x0002,

0xf5da,	// (0x0002bc59) main_location_t

0xb8b1,	// (0x00027f30) aid_levels_location

0xbc34,	// (0x000282b3) blid_accuracy_pane_g1

0xbc34,	// (0x000282b3) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0002b954) blid_accuracy_pane_g

0xbf17,	// (0x00028596) wml_content_pane

0xbf55,	// (0x000285d4) wml_button_pane_ParamLimits

0xbf55,	// (0x000285d4) wml_button_pane

0x50c8,	// (0x00021747) wml_list_single_large_pane_ParamLimits

0x50c8,	// (0x00021747) wml_list_single_large_pane

0x50f2,	// (0x00021771) wml_list_single_medium_pane_ParamLimits

0x50f2,	// (0x00021771) wml_list_single_medium_pane

0x5123,	// (0x000217a2) wml_list_single_small_pane_ParamLimits

0x5123,	// (0x000217a2) wml_list_single_small_pane

0xbf69,	// (0x000285e8) wml_selection_box_pane_ParamLimits

0xbf69,	// (0x000285e8) wml_selection_box_pane

0xbf7c,	// (0x000285fb) wml_list_single_pane_t1

0xbf8b,	// (0x0002860a) wml_list_single_medium_pane_t1

0xbf9a,	// (0x00028619) wml_list_single_large_pane_t1

0xbfa9,	// (0x00028628) input_focus_pane_cp02_ParamLimits

0xbfa9,	// (0x00028628) input_focus_pane_cp02

0xbfbc,	// (0x0002863b) wml_selection_box_pane_g1

0xbfc5,	// (0x00028644) wml_selection_box_pane_t1_ParamLimits

0xbfc5,	// (0x00028644) wml_selection_box_pane_t1

0xbb0c,	// (0x0002818b) bg_wml_button_pane_ParamLimits

0xbb0c,	// (0x0002818b) bg_wml_button_pane

0xbfdd,	// (0x0002865c) wml_button_pane_g1

0xbfe5,	// (0x00028664) wml_button_pane_t1

0xbfdd,	// (0x0002865c) wml_button_bg_pane_g1

0xbff5,	// (0x00028674) wml_button_bg_pane_g2

0xbffd,	// (0x0002867c) wml_button_bg_pane_g3

0xc005,	// (0x00028684) wml_button_bg_pane_g4

0xc00d,	// (0x0002868c) wml_button_bg_pane_g5

0xc015,	// (0x00028694) wml_button_bg_pane_g6

0xc01d,	// (0x0002869c) wml_button_bg_pane_g7

0xc025,	// (0x000286a4) wml_button_bg_pane_g8

0xc02d,	// (0x000286ac) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0002b8f7) wml_button_bg_pane_g

0x515d,	// (0x000217dc) bg_list_pane_cp02

0xc035,	// (0x000286b4) mce_header_pane_ParamLimits

0xc035,	// (0x000286b4) mce_header_pane

0xc04b,	// (0x000286ca) mce_icon_pane

0xc04b,	// (0x000286ca) mce_image_pane

0xc054,	// (0x000286d3) mce_text_pane_ParamLimits

0xc054,	// (0x000286d3) mce_text_pane

0x5167,	// (0x000217e6) scroll_pane_cp03

0xbf4d,	// (0x000285cc) scroll_pane_cp04

0xc067,	// (0x000286e6) scroll_pane_cp05_ParamLimits

0xc067,	// (0x000286e6) scroll_pane_cp05

0x5171,	// (0x000217f0) mce_header_field_pane_ParamLimits

0x5171,	// (0x000217f0) mce_header_field_pane

0x5191,	// (0x00021810) mce_header_field_pane_2_ParamLimits

0x5191,	// (0x00021810) mce_header_field_pane_2

0x51a7,	// (0x00021826) mce_header_field_pane_3

0x51af,	// (0x0002182e) list_single_mce_message_pane_ParamLimits

0x51af,	// (0x0002182e) list_single_mce_message_pane

0x51da,	// (0x00021859) list_single_mce_smart_pane_ParamLimits

0x51da,	// (0x00021859) list_single_mce_smart_pane

0xc073,	// (0x000286f2) input_focus_pane_cp03

0xc07c,	// (0x000286fb) list_header_data_pane

0x5210,	// (0x0002188f) mce_header_field_pane_t1

0x521e,	// (0x0002189d) list_single_mce_header_pane_ParamLimits

0x521e,	// (0x0002189d) list_single_mce_header_pane

0xc084,	// (0x00028703) list_single_mce_header_pane_t1

0xc093,	// (0x00028712) list_single_mce_message_pane_g1

0xc09b,	// (0x0002871a) list_single_mce_message_pane_t1

0x5270,	// (0x000218ef) bg_cale_heading_pane_cp01_ParamLimits

0x5270,	// (0x000218ef) bg_cale_heading_pane_cp01

0xc0a9,	// (0x00028728) bg_cale_pane_cp02_ParamLimits

0xc0a9,	// (0x00028728) bg_cale_pane_cp02

0x52be,	// (0x0002193d) cale_month_corner_pane

0x52dd,	// (0x0002195c) cale_month_day_heading_pane_ParamLimits

0x52dd,	// (0x0002195c) cale_month_day_heading_pane

0x5343,	// (0x000219c2) cale_month_pane_g1_ParamLimits

0x5343,	// (0x000219c2) cale_month_pane_g1

0x5386,	// (0x00021a05) cale_month_pane_g2_ParamLimits

0x5386,	// (0x00021a05) cale_month_pane_g2

0x53be,	// (0x00021a3d) cale_month_pane_g3_ParamLimits

0x53be,	// (0x00021a3d) cale_month_pane_g3

0x540a,	// (0x00021a89) cale_month_pane_g4_ParamLimits

0x540a,	// (0x00021a89) cale_month_pane_g4

0x5456,	// (0x00021ad5) cale_month_pane_g5_ParamLimits

0x5456,	// (0x00021ad5) cale_month_pane_g5

0x54a2,	// (0x00021b21) cale_month_pane_g6_ParamLimits

0x54a2,	// (0x00021b21) cale_month_pane_g6

0x54ee,	// (0x00021b6d) cale_month_pane_g7_ParamLimits

0x54ee,	// (0x00021b6d) cale_month_pane_g7

0x5552,	// (0x00021bd1) cale_month_pane_g8_ParamLimits

0x5552,	// (0x00021bd1) cale_month_pane_g8

0x55b6,	// (0x00021c35) cale_month_pane_g9_ParamLimits

0x55b6,	// (0x00021c35) cale_month_pane_g9

0x5614,	// (0x00021c93) cale_month_pane_g10_ParamLimits

0x5614,	// (0x00021c93) cale_month_pane_g10

0x5670,	// (0x00021cef) cale_month_pane_g11_ParamLimits

0x5670,	// (0x00021cef) cale_month_pane_g11

0x56c4,	// (0x00021d43) cale_month_pane_g12_ParamLimits

0x56c4,	// (0x00021d43) cale_month_pane_g12

0x571a,	// (0x00021d99) cale_month_pane_g13_ParamLimits

0x571a,	// (0x00021d99) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0002b90a) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0002b90a) cale_month_pane_g

0x5770,	// (0x00021def) cale_month_week_pane

0x5794,	// (0x00021e13) grid_cale_month_pane_ParamLimits

0x5794,	// (0x00021e13) grid_cale_month_pane

0x57ed,	// (0x00021e6c) cale_month_day_heading_pane_t1

0x5873,	// (0x00021ef2) cale_month_day_heading_pane_t2

0x58ec,	// (0x00021f6b) cale_month_day_heading_pane_t3

0x5965,	// (0x00021fe4) cale_month_day_heading_pane_t4

0x59de,	// (0x0002205d) cale_month_day_heading_pane_t5

0x5a57,	// (0x000220d6) cale_month_day_heading_pane_t6

0x5ad0,	// (0x0002214f) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0002b925) cale_month_day_heading_pane_t

0xbd49,	// (0x000283c8) bg_cale_side_pane_cp01

0x5b61,	// (0x000221e0) cale_month_week_pane_t1

0x5b7a,	// (0x000221f9) cale_month_week_pane_t2

0x5b93,	// (0x00022212) cale_month_week_pane_t3

0x5bac,	// (0x0002222b) cale_month_week_pane_t4

0x5bc5,	// (0x00022244) cale_month_week_pane_t5

0x5be6,	// (0x00022265) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0002b934) cale_month_week_pane_t

0x5c07,	// (0x00022286) cell_cale_month_pane_ParamLimits

0x5c07,	// (0x00022286) cell_cale_month_pane

0x2c59,	// (0x0001f2d8) cell_cale_month_pane_g1

0x2c65,	// (0x0001f2e4) cell_cale_month_pane_t1_ParamLimits

0x2c65,	// (0x0001f2e4) cell_cale_month_pane_t1

0xbd57,	// (0x000283d6) grid_highlight_pane_cp08

0xbc34,	// (0x000282b3) main_smil_g1

0x5d53,	// (0x000223d2) smil_status_pane

0xc0e8,	// (0x00028767) smil_text_pane

0xdac2,	// (0x0002a141) bg_popup_call3_rect_pane_g8

0xdaca,	// (0x0002a149) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0002bbed) bg_popup_call3_rect_pane_g

0xdd11,	// (0x0002a390) smil_status_volume_pane_g1

0xc0f2,	// (0x00028771) smil_status_pane_t1

0x2f37,	// (0x0001f5b6) volume_smil_pane

0xc109,	// (0x00028788) list_smil_text_pane

0x5d66,	// (0x000223e5) scroll_pane_cp011

0x5d71,	// (0x000223f0) smil_text_list_pane_t1_ParamLimits

0x5d71,	// (0x000223f0) smil_text_list_pane_t1

0x2c91,	// (0x0001f310) aid_volume_smil_ParamLimits

0x2c91,	// (0x0001f310) aid_volume_smil

0xbc34,	// (0x000282b3) smil_volume_pane_g1

0xbc34,	// (0x000282b3) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0002b954) smil_volume_pane_g

0x44e4,	// (0x00020b63) listscroll_cale_day_pane

0xc113,	// (0x00028792) bg_cale_pane

0xc12b,	// (0x000287aa) list_cale_pane

0xc14e,	// (0x000287cd) scroll_pane_cp09

0xc15f,	// (0x000287de) cale_bg_pane_g1

0xc167,	// (0x000287e6) cale_bg_pane_g2

0xc16f,	// (0x000287ee) cale_bg_pane_g3

0xc177,	// (0x000287f6) cale_bg_pane_g4

0xc17f,	// (0x000287fe) cale_bg_pane_g5

0xc187,	// (0x00028806) cale_bg_pane_g6

0xc18f,	// (0x0002880e) cale_bg_pane_g7

0xc197,	// (0x00028816) cale_bg_pane_g8

0xc19f,	// (0x0002881e) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0002b959) cale_bg_pane_g

0x5df1,	// (0x00022470) list_cale_time_pane_ParamLimits

0x5df1,	// (0x00022470) list_cale_time_pane

0xc1a7,	// (0x00028826) list_cale_time_pane_g1_ParamLimits

0xc1a7,	// (0x00028826) list_cale_time_pane_g1

0xc1b3,	// (0x00028832) list_cale_time_pane_g2_ParamLimits

0xc1b3,	// (0x00028832) list_cale_time_pane_g2

0x5e13,	// (0x00022492) list_cale_time_pane_g3_ParamLimits

0x5e13,	// (0x00022492) list_cale_time_pane_g3

0x5e21,	// (0x000224a0) list_cale_time_pane_g4_ParamLimits

0x5e21,	// (0x000224a0) list_cale_time_pane_g4

0x5e2f,	// (0x000224ae) list_cale_time_pane_g5_ParamLimits

0x5e2f,	// (0x000224ae) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0002b96c) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0002b96c) list_cale_time_pane_g

0xc1cd,	// (0x0002884c) list_cale_time_pane_t1_ParamLimits

0xc1cd,	// (0x0002884c) list_cale_time_pane_t1

0xc1f5,	// (0x00028874) list_cale_time_pane_t2_ParamLimits

0xc1f5,	// (0x00028874) list_cale_time_pane_t2

0x615e,	// (0x000227dd) aid_blid_cardinal_pane

0x61a0,	// (0x0002281f) compass_pane_t4

0xc21d,	// (0x0002889c) list_cale_time_pane_t4_ParamLimits

0xc21d,	// (0x0002889c) list_cale_time_pane_t4

0x61ae,	// (0x0002282d) compass_pane_t5

0x61be,	// (0x0002283d) compass_pane_t6

0x61cc,	// (0x0002284b) compass_pane_t7

0xc6c0,	// (0x00028d3f) navi_pane_cc_t1

0xc8b7,	// (0x00028f36) aid_phob_thumbnail_center_pane

0x67b2,	// (0x00022e31) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0002b979) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0002b979) list_cale_time_pane_t

0xb508,	// (0x00027b87) bg_popup_window_pane_cp02_ParamLimits

0xb508,	// (0x00027b87) bg_popup_window_pane_cp02

0xc245,	// (0x000288c4) heading_pane_cp01_ParamLimits

0xc245,	// (0x000288c4) heading_pane_cp01

0xc251,	// (0x000288d0) loc_req_pane_ParamLimits

0xc251,	// (0x000288d0) loc_req_pane

0xc261,	// (0x000288e0) loc_type_pane_ParamLimits

0xc261,	// (0x000288e0) loc_type_pane

0xc273,	// (0x000288f2) loc_type_pane_t1_ParamLimits

0xc273,	// (0x000288f2) loc_type_pane_t1

0xc285,	// (0x00028904) loc_type_pane_t2_ParamLimits

0xc285,	// (0x00028904) loc_type_pane_t2

0xc297,	// (0x00028916) loc_type_pane_t3_ParamLimits

0xc297,	// (0x00028916) loc_type_pane_t3

0x0002,

0xf301,	// (0x0002b980) loc_type_pane_t_ParamLimits

0xf301,	// (0x0002b980) loc_type_pane_t

0xc2a9,	// (0x00028928) list_loc_req_pane

0xc2b3,	// (0x00028932) scroll_pane_cp012

0x5e3d,	// (0x000224bc) list_single_loc_request_popup_menu_pane_ParamLimits

0x5e3d,	// (0x000224bc) list_single_loc_request_popup_menu_pane

0xc2be,	// (0x0002893d) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc2be,	// (0x0002893d) list_single_loc_request_popup_menu_pane_g1

0xc2ca,	// (0x00028949) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc2ca,	// (0x00028949) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0002b987) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0002b987) list_single_loc_request_popup_menu_pane_g

0xc2d6,	// (0x00028955) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc2d6,	// (0x00028955) list_single_loc_request_popup_menu_pane_t1

0x5e4f,	// (0x000224ce) bg_popup_window_pane_cp03_ParamLimits

0x5e4f,	// (0x000224ce) bg_popup_window_pane_cp03

0x5e5d,	// (0x000224dc) heading_loc_req_pane_ParamLimits

0x5e5d,	// (0x000224dc) heading_loc_req_pane

0x5e69,	// (0x000224e8) popup_dyc_status_message_window_g1_ParamLimits

0x5e69,	// (0x000224e8) popup_dyc_status_message_window_g1

0x5e75,	// (0x000224f4) popup_dyc_status_message_window_t1_ParamLimits

0x5e75,	// (0x000224f4) popup_dyc_status_message_window_t1

0x5e87,	// (0x00022506) popup_dyc_status_message_window_t2_ParamLimits

0x5e87,	// (0x00022506) popup_dyc_status_message_window_t2

0x5e99,	// (0x00022518) popup_dyc_status_message_window_t3_ParamLimits

0x5e99,	// (0x00022518) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0002b98c) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0002b98c) popup_dyc_status_message_window_t

0xb8b1,	// (0x00027f30) bg_heading_pane_cp01

0xc2ec,	// (0x0002896b) heading_loc_req_pane_g1

0xc2f4,	// (0x00028973) heading_loc_req_pane_g2

0xc2fc,	// (0x0002897b) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0002b993) heading_loc_req_pane_g

0xc304,	// (0x00028983) heading_loc_req_pane_t1

0xc313,	// (0x00028992) bg_popup_sub_pane_cp01_ParamLimits

0xc313,	// (0x00028992) bg_popup_sub_pane_cp01

0xc321,	// (0x000289a0) popup_cale_events_window_g1_ParamLimits

0xc321,	// (0x000289a0) popup_cale_events_window_g1

0xc341,	// (0x000289c0) popup_cale_events_window_g2_ParamLimits

0xc341,	// (0x000289c0) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0002b9c7) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0002b9c7) popup_cale_events_window_g

0xc361,	// (0x000289e0) popup_cale_events_window_t1_ParamLimits

0xc361,	// (0x000289e0) popup_cale_events_window_t1

0xc373,	// (0x000289f2) popup_cale_events_window_t2_ParamLimits

0xc373,	// (0x000289f2) popup_cale_events_window_t2

0xc3b1,	// (0x00028a30) popup_cale_events_window_t3_ParamLimits

0xc3b1,	// (0x00028a30) popup_cale_events_window_t3

0xc3eb,	// (0x00028a6a) popup_cale_events_window_t4_ParamLimits

0xc3eb,	// (0x00028a6a) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0002b9cc) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0002b9cc) popup_cale_events_window_t

0x5f9e,	// (0x0002261d) call_type_pane

0xc80a,	// (0x00028e89) popup_call_status_window_g1

0x5faa,	// (0x00022629) popup_call_status_window_g2

0x5fb6,	// (0x00022635) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0002b9d5) popup_call_status_window_g

0xc421,	// (0x00028aa0) call_type_pane_g1

0xc42a,	// (0x00028aa9) call_type_pane_g2

0x0001,

0xf35d,	// (0x0002b9dc) call_type_pane_g

0xb8b1,	// (0x00027f30) bg_popup_sub_pane_cp02

0xc433,	// (0x00028ab2) listscroll_popup_wml_pane

0xc43b,	// (0x00028aba) list_wml_pane

0xc445,	// (0x00028ac4) scroll_pane_cp013

0xc450,	// (0x00028acf) list_single_graphic_popup_wml_pane_ParamLimits

0xc450,	// (0x00028acf) list_single_graphic_popup_wml_pane

0xbc34,	// (0x000282b3) list_single_graphic_popup_wml_pane_g1

0xc464,	// (0x00028ae3) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0002b9e1) list_single_graphic_popup_wml_pane_g

0xc46c,	// (0x00028aeb) list_single_graphic_popup_wml_pane_t1

0xc482,	// (0x00028b01) aid_call_pane

0xbb04,	// (0x00028183) popup_clock_analogue_window_g1

0xbb04,	// (0x00028183) popup_clock_analogue_window_g2

0x2cb3,	// (0x0001f332) popup_clock_analogue_window_g3

0x2cb3,	// (0x0001f332) popup_clock_analogue_window_g4

0xbc34,	// (0x000282b3) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0002b9e6) popup_clock_analogue_window_g

0x2cbb,	// (0x0001f33a) popup_clock_analogue_window_t1

0x2cc9,	// (0x0001f348) clock_digital_number_pane_ParamLimits

0x2cc9,	// (0x0001f348) clock_digital_number_pane

0x2cd5,	// (0x0001f354) clock_digital_number_pane_cp02_ParamLimits

0x2cd5,	// (0x0001f354) clock_digital_number_pane_cp02

0x2ce1,	// (0x0001f360) clock_digital_number_pane_cp03_ParamLimits

0x2ce1,	// (0x0001f360) clock_digital_number_pane_cp03

0x2ced,	// (0x0001f36c) clock_digital_number_pane_cp04_ParamLimits

0x2ced,	// (0x0001f36c) clock_digital_number_pane_cp04

0x2cfd,	// (0x0001f37c) clock_digital_separator_pane_ParamLimits

0x2cfd,	// (0x0001f37c) clock_digital_separator_pane

0x2d09,	// (0x0001f388) popup_clock_digital_window_t1

0xbc34,	// (0x000282b3) clock_digital_number_pane_g1

0xbc34,	// (0x000282b3) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0002b954) clock_digital_number_pane_g

0xbc34,	// (0x000282b3) clock_digital_separator_pane_g1

0xbc34,	// (0x000282b3) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0002b954) clock_digital_separator_pane_g

0xb8b1,	// (0x00027f30) bg_popup_window_pane_cp04

0xc48a,	// (0x00028b09) heading_pane_cp03

0xc492,	// (0x00028b11) listscroll_popup_gms_pane

0xc49a,	// (0x00028b19) grid_large_graphic_popup_pane

0xc4a4,	// (0x00028b23) listscroll_popup_gms_pane_g1

0xc4ac,	// (0x00028b2b) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0002b9f1) listscroll_popup_gms_pane_g

0xbf4d,	// (0x000285cc) scroll_pane_cp014

0x5fc2,	// (0x00022641) cell_large_graphic_popup_pane_ParamLimits

0x5fc2,	// (0x00022641) cell_large_graphic_popup_pane

0x5fda,	// (0x00022659) cell_large_graphic_popup_pane_g1_ParamLimits

0x5fda,	// (0x00022659) cell_large_graphic_popup_pane_g1

0xc4b4,	// (0x00028b33) cell_large_graphic_popup_pane_g2_ParamLimits

0xc4b4,	// (0x00028b33) cell_large_graphic_popup_pane_g2

0xc4c0,	// (0x00028b3f) cell_large_graphic_popup_pane_g3_ParamLimits

0xc4c0,	// (0x00028b3f) cell_large_graphic_popup_pane_g3

0xc4cd,	// (0x00028b4c) cell_large_graphic_popup_pane_g4_ParamLimits

0xc4cd,	// (0x00028b4c) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0002b9f6) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0002b9f6) cell_large_graphic_popup_pane_g

0xc4dd,	// (0x00028b5c) grid_highlight_pane_cp010

0xbc34,	// (0x000282b3) bg_popup_call_pane_g1

0xc4e7,	// (0x00028b66) list_single_graphic_popup_conf_pane_ParamLimits

0xc4e7,	// (0x00028b66) list_single_graphic_popup_conf_pane

0xc4fa,	// (0x00028b79) list_highlight_pane_cp01

0xc503,	// (0x00028b82) list_single_graphic_popup_conf_pane_g1

0xc50b,	// (0x00028b8a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0002b9ff) list_single_graphic_popup_conf_pane_g

0xc513,	// (0x00028b92) list_single_graphic_popup_conf_pane_t1

0xc521,	// (0x00028ba0) linegrid_cams_pane_g1

0x5fe6,	// (0x00022665) linegrid_cams_pane_g2

0xbd8a,	// (0x00028409) linegrid_cams_pane_g3

0xc52a,	// (0x00028ba9) linegrid_cams_pane_g4

0x5fef,	// (0x0002266e) linegrid_cams_pane_g5

0x5ff8,	// (0x00022677) linegrid_cams_pane_g6

0xbd93,	// (0x00028412) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0002ba04) linegrid_cams_pane_g

0xc533,	// (0x00028bb2) popup_clock_analogue_window

0xc533,	// (0x00028bb2) popup_clock_digital_window

0xb8b1,	// (0x00027f30) popup_phob_thumbnail_window

0xbc34,	// (0x000282b3) call_video_uplink_pane_g1

0xc53c,	// (0x00028bbb) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0002ba13) call_video_uplink_pane_g

0xc544,	// (0x00028bc3) video_uplink_pane

0xc54c,	// (0x00028bcb) mce_image_pane_g1

0x6001,	// (0x00022680) mce_image_pane_g2

0x600b,	// (0x0002268a) mce_image_pane_g3

0x6013,	// (0x00022692) mce_image_pane_g4

0x601b,	// (0x0002269a) mce_image_pane_g5

0x0004,

0xf399,	// (0x0002ba18) mce_image_pane_g

0xc556,	// (0x00028bd5) control_top_pane_stacon_cp01_ParamLimits

0xc556,	// (0x00028bd5) control_top_pane_stacon_cp01

0xc56a,	// (0x00028be9) uni_indicator_pane_stacon_cp01_ParamLimits

0xc56a,	// (0x00028be9) uni_indicator_pane_stacon_cp01

0xc57b,	// (0x00028bfa) bg_popup_sub_pane_cp03

0xc585,	// (0x00028c04) chi_dic_find_pane

0x6023,	// (0x000226a2) listscroll_chi_dic_pane

0xc58d,	// (0x00028c0c) main_pane_chidic_g1

0xc595,	// (0x00028c14) chi_dic_find_pane_t1

0xc5a3,	// (0x00028c22) find_chidic_pane

0xc5ac,	// (0x00028c2b) chi_dic_list_pane_ParamLimits

0xc5ac,	// (0x00028c2b) chi_dic_list_pane

0xc5bd,	// (0x00028c3c) scroll_pane_cp020

0xc5c5,	// (0x00028c44) find_chidic_pane_t1

0xb8b1,	// (0x00027f30) input_focus_pane_cp06

0x6037,	// (0x000226b6) list_chi_dic_pane_ParamLimits

0x6037,	// (0x000226b6) list_chi_dic_pane

0x6051,	// (0x000226d0) list_chi_dic_pane_t1_ParamLimits

0x6051,	// (0x000226d0) list_chi_dic_pane_t1

0xb8b1,	// (0x00027f30) list_highlight_pane_cp020

0xc5d4,	// (0x00028c53) bg_cale_heading_pane_g1

0x6064,	// (0x000226e3) bg_cale_heading_pane_g2

0x606c,	// (0x000226eb) bg_cale_heading_pane_g3

0x6074,	// (0x000226f3) bg_cale_heading_pane_g4

0x607e,	// (0x000226fd) bg_cale_heading_pane_g5

0x6088,	// (0x00022707) bg_cale_heading_pane_g6

0x6090,	// (0x0002270f) bg_cale_heading_pane_g7

0x6098,	// (0x00022717) bg_cale_heading_pane_g8

0x60a2,	// (0x00022721) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0002ba23) bg_cale_heading_pane_g

0xc5d4,	// (0x00028c53) bg_cale_side_pane_g1

0x60ac,	// (0x0002272b) bg_cale_side_pane_g2

0x60b6,	// (0x00022735) bg_cale_side_pane_g3

0x60c0,	// (0x0002273f) bg_cale_side_pane_g4

0x60ca,	// (0x00022749) bg_cale_side_pane_g5

0x60d4,	// (0x00022753) bg_cale_side_pane_g6

0x60de,	// (0x0002275d) bg_cale_side_pane_g7

0x60e8,	// (0x00022767) bg_cale_side_pane_g8

0x60f0,	// (0x0002276f) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0002ba36) bg_cale_side_pane_g

0x60f8,	// (0x00022777) popup_call_status_window_ParamLimits

0x60f8,	// (0x00022777) popup_call_status_window

0xc5dc,	// (0x00028c5b) stacon_top_pane

0xc5e4,	// (0x00028c63) status_pane_ParamLimits

0xc5e4,	// (0x00028c63) status_pane

0xc5f9,	// (0x00028c78) status_small_pane

0xc601,	// (0x00028c80) control_pane

0xb8b1,	// (0x00027f30) stacon_bottom_pane

0xc609,	// (0x00028c88) list_single_mce_smart_pane_t1_ParamLimits

0xc609,	// (0x00028c88) list_single_mce_smart_pane_t1

0xc61c,	// (0x00028c9b) list_single_mce_smart_pane_t2_ParamLimits

0xc61c,	// (0x00028c9b) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0002ba49) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0002ba49) list_single_mce_smart_pane_t

0x6104,	// (0x00022783) compass_pane

0x6110,	// (0x0002278f) main_location2_pane_t1

0x6124,	// (0x000227a3) main_location2_pane_t2

0x6138,	// (0x000227b7) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0002ba4e) main_location2_pane_t

0xc63b,	// (0x00028cba) compass_pane_g1_ParamLimits

0xc63b,	// (0x00028cba) compass_pane_g1

0x6182,	// (0x00022801) compass_pane_t1

0x6191,	// (0x00022810) compass_pane_t2

0x0005,

0xf3d8,	// (0x0002ba57) compass_pane_t

0x61dc,	// (0x0002285b) text_secondary_cp61

0xc6b7,	// (0x00028d36) navi_pane_cams_g5

0xc733,	// (0x00028db2) navi_pane_im_t1

0xc741,	// (0x00028dc0) navi_pane_mp_g1_ParamLimits

0xc741,	// (0x00028dc0) navi_pane_mp_g1

0xc755,	// (0x00028dd4) navi_pane_mp_g2_ParamLimits

0xc755,	// (0x00028dd4) navi_pane_mp_g2

0xc761,	// (0x00028de0) navi_pane_mp_g3_ParamLimits

0xc761,	// (0x00028de0) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0002ba6b) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0002ba6b) navi_pane_mp_g

0xc76d,	// (0x00028dec) navi_pane_mp_t1

0xc77b,	// (0x00028dfa) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0002ba72) navi_pane_mp_t

0xc7e6,	// (0x00028e65) navi_pane_vt_g1

0xc76d,	// (0x00028dec) navi_pane_vt_t1

0xc7ee,	// (0x00028e6d) navi_slider_pane

0xbda4,	// (0x00028423) zooming_pane

0xc818,	// (0x00028e97) navi_slider_pane_g1

0x2d26,	// (0x0001f3a5) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0002ba79) navi_slider_pane_g

0xc83c,	// (0x00028ebb) aid_levels_zoom

0xc844,	// (0x00028ec3) zooming_pane_g1

0xc84c,	// (0x00028ecb) zooming_pane_g2

0xc84c,	// (0x00028ecb) zooming_pane_g3

0x0002,

0xf409,	// (0x0002ba88) zooming_pane_g

0xc854,	// (0x00028ed3) level_10_zoom

0xc85d,	// (0x00028edc) level_11_zoom

0xc866,	// (0x00028ee5) level_1_zoom

0xc86f,	// (0x00028eee) level_2_zoom

0xc878,	// (0x00028ef7) level_3_zoom

0xc881,	// (0x00028f00) level_4_zoom

0xc88a,	// (0x00028f09) level_5_zoom

0xc893,	// (0x00028f12) level_6_zoom

0xc89c,	// (0x00028f1b) level_7_zoom

0xc8a5,	// (0x00028f24) level_8_zoom

0xc8ae,	// (0x00028f2d) level_9_zoom

0xc8bf,	// (0x00028f3e) popup_phob_thumbnail_window_g1

0xc8c7,	// (0x00028f46) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0002ba8f) popup_phob_thumbnail_window_g

0xdc24,	// (0x0002a2a3) level_1_location

0xdc2c,	// (0x0002a2ab) level_2_location

0xdc34,	// (0x0002a2b3) level_3_location

0xdc3c,	// (0x0002a2bb) level_4_location

0xbda4,	// (0x00028423) level_5_location

0x6217,	// (0x00022896) mce_icon_pane_g1

0x621f,	// (0x0002289e) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0002ba94) mce_icon_pane_g

0x6227,	// (0x000228a6) main_mup_pane_g1_ParamLimits

0x6227,	// (0x000228a6) main_mup_pane_g1

0x623f,	// (0x000228be) main_mup_pane_g2_ParamLimits

0x623f,	// (0x000228be) main_mup_pane_g2

0x625b,	// (0x000228da) main_mup_pane_g3_ParamLimits

0x625b,	// (0x000228da) main_mup_pane_g3

0x6277,	// (0x000228f6) main_mup_pane_g4_ParamLimits

0x6277,	// (0x000228f6) main_mup_pane_g4

0x6293,	// (0x00022912) main_mup_pane_g5_ParamLimits

0x6293,	// (0x00022912) main_mup_pane_g5

0x62b4,	// (0x00022933) main_mup_pane_g6_ParamLimits

0x62b4,	// (0x00022933) main_mup_pane_g6

0x62d0,	// (0x0002294f) main_mup_pane_g7_ParamLimits

0x62d0,	// (0x0002294f) main_mup_pane_g7

0x62ec,	// (0x0002296b) main_mup_pane_g8_ParamLimits

0x62ec,	// (0x0002296b) main_mup_pane_g8

0x630c,	// (0x0002298b) main_mup_pane_g9_ParamLimits

0x630c,	// (0x0002298b) main_mup_pane_g9

0x632b,	// (0x000229aa) main_mup_pane_g10_ParamLimits

0x632b,	// (0x000229aa) main_mup_pane_g10

0x634a,	// (0x000229c9) main_mup_pane_g11_ParamLimits

0x634a,	// (0x000229c9) main_mup_pane_g11

0x6362,	// (0x000229e1) main_mup_pane_g12_ParamLimits

0x6362,	// (0x000229e1) main_mup_pane_g12

0x6370,	// (0x000229ef) main_mup_pane_g13_ParamLimits

0x6370,	// (0x000229ef) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0002ba99) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0002ba99) main_mup_pane_g

0x6386,	// (0x00022a05) main_mup_pane_t1_ParamLimits

0x6386,	// (0x00022a05) main_mup_pane_t1

0x63a3,	// (0x00022a22) main_mup_pane_t2_ParamLimits

0x63a3,	// (0x00022a22) main_mup_pane_t2

0x63bd,	// (0x00022a3c) main_mup_pane_t3_ParamLimits

0x63bd,	// (0x00022a3c) main_mup_pane_t3

0x63d7,	// (0x00022a56) main_mup_pane_t4_ParamLimits

0x63d7,	// (0x00022a56) main_mup_pane_t4

0x63e9,	// (0x00022a68) main_mup_pane_t5_ParamLimits

0x63e9,	// (0x00022a68) main_mup_pane_t5

0x63fb,	// (0x00022a7a) main_mup_pane_t6_ParamLimits

0x63fb,	// (0x00022a7a) main_mup_pane_t6

0x0005,

0xf435,	// (0x0002bab4) main_mup_pane_t_ParamLimits

0xf435,	// (0x0002bab4) main_mup_pane_t

0x6411,	// (0x00022a90) mup_progress_pane_ParamLimits

0x6411,	// (0x00022a90) mup_progress_pane

0x641d,	// (0x00022a9c) mup_visualizer_pane_ParamLimits

0x641d,	// (0x00022a9c) mup_visualizer_pane

0x6457,	// (0x00022ad6) mup_volume_pane_ParamLimits

0x6457,	// (0x00022ad6) mup_volume_pane

0xc80a,	// (0x00028e89) mup_visualizer_pane_g1_ParamLimits

0xc80a,	// (0x00028e89) mup_visualizer_pane_g1

0xc80a,	// (0x00028e89) mup_visualizer_pane_g2_ParamLimits

0xc80a,	// (0x00028e89) mup_visualizer_pane_g2

0xc63b,	// (0x00028cba) mup_visualizer_pane_g3_ParamLimits

0xc63b,	// (0x00028cba) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0002bac1) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0002bac1) mup_visualizer_pane_g

0xbc34,	// (0x000282b3) mup_volume_pane_g1

0xc8d7,	// (0x00028f56) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0002bac8) mup_volume_pane_g

0xbc34,	// (0x000282b3) mup_progress_pane_g1

0xc8e0,	// (0x00028f5f) mup_progress_pane_g2

0xc8e9,	// (0x00028f68) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0002bacd) mup_progress_pane_g

0xb8b1,	// (0x00027f30) bg_popup_window_pane_cp05

0xc8f2,	// (0x00028f71) heading_pane_cp02_ParamLimits

0xc8f2,	// (0x00028f71) heading_pane_cp02

0xc90c,	// (0x00028f8b) list_popup_blid_pane

0xc914,	// (0x00028f93) list_blid_sat_info_pane_ParamLimits

0xc914,	// (0x00028f93) list_blid_sat_info_pane

0xc927,	// (0x00028fa6) list_blid_sat_info_pane_g1

0xc92f,	// (0x00028fae) list_blid_sat_info_pane_t1

0x6564,	// (0x00022be3) mup_equalizer_pane_ParamLimits

0x6564,	// (0x00022be3) mup_equalizer_pane

0x6585,	// (0x00022c04) mup_equalizer_pane_cp1_ParamLimits

0x6585,	// (0x00022c04) mup_equalizer_pane_cp1

0x65a6,	// (0x00022c25) mup_equalizer_pane_cp2_ParamLimits

0x65a6,	// (0x00022c25) mup_equalizer_pane_cp2

0x65c7,	// (0x00022c46) mup_equalizer_pane_cp3_ParamLimits

0x65c7,	// (0x00022c46) mup_equalizer_pane_cp3

0x65e8,	// (0x00022c67) mup_equalizer_pane_cp4_ParamLimits

0x65e8,	// (0x00022c67) mup_equalizer_pane_cp4

0x6609,	// (0x00022c88) mup_equalizer_pane_cp5

0x661f,	// (0x00022c9e) mup_equalizer_pane_cp6

0x6637,	// (0x00022cb6) mup_equalizer_pane_cp7

0xdb42,	// (0x0002a1c1) bg_popup_call_poc_act_pane_g9

0xdb4a,	// (0x0002a1c9) bg_popup_call_poc_act_pane_g10

0xdb52,	// (0x0002a1d1) bg_popup_call_poc_act_pane_g11

0x000a,

0xbb0c,	// (0x0002818b) mup_scale_pane

0xbc34,	// (0x000282b3) mup_scale_pane_g1

0xc93d,	// (0x00028fbc) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0002bae9) mup_scale_pane_g

0xc961,	// (0x00028fe0) msg_data_pane

0xc969,	// (0x00028fe8) scroll_pane_cp017

0x6661,	// (0x00022ce0) bg_list_pane_cp04_ParamLimits

0x6661,	// (0x00022ce0) bg_list_pane_cp04

0xc979,	// (0x00028ff8) msg_data_pane_g1

0x667d,	// (0x00022cfc) msg_data_pane_g2

0x6687,	// (0x00022d06) msg_data_pane_g3

0x668f,	// (0x00022d0e) msg_data_pane_g4

0x6697,	// (0x00022d16) msg_data_pane_g5

0x669f,	// (0x00022d1e) msg_data_pane_g6

0x66a7,	// (0x00022d26) msg_data_pane_g7

0x0006,

0xf479,	// (0x0002baf8) msg_data_pane_g

0x66af,	// (0x00022d2e) msg_text_pane_ParamLimits

0x66af,	// (0x00022d2e) msg_text_pane

0x66fc,	// (0x00022d7b) qrid_highlight_pane_cp011_ParamLimits

0x66fc,	// (0x00022d7b) qrid_highlight_pane_cp011

0xb8b1,	// (0x00027f30) msg_body_pane

0xb8b1,	// (0x00027f30) msg_header_pane

0xc98a,	// (0x00029009) input_focus_pane_cp07

0xc99f,	// (0x0002901e) msg_header_pane_t1_ParamLimits

0xc99f,	// (0x0002901e) msg_header_pane_t1

0xc9b1,	// (0x00029030) msg_header_pane_t2_ParamLimits

0xc9b1,	// (0x00029030) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0002bb0c) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0002bb0c) msg_header_pane_t

0xc9c3,	// (0x00029042) msg_body_pane_g1

0xc9cb,	// (0x0002904a) msg_body_pane_t1_ParamLimits

0xc9cb,	// (0x0002904a) msg_body_pane_t1

0xc9fc,	// (0x0002907b) msg_body_pane_t2_ParamLimits

0xc9fc,	// (0x0002907b) msg_body_pane_t2

0xca0e,	// (0x0002908d) msg_body_pane_t3_ParamLimits

0xca0e,	// (0x0002908d) msg_body_pane_t3

0x0002,

0xf492,	// (0x0002bb11) msg_body_pane_t_ParamLimits

0xf492,	// (0x0002bb11) msg_body_pane_t

0x2d68,	// (0x0001f3e7) main_viewer_pane_g1_ParamLimits

0x2d68,	// (0x0001f3e7) main_viewer_pane_g1

0x2d74,	// (0x0001f3f3) main_viewer_pane_g2_ParamLimits

0x2d74,	// (0x0001f3f3) main_viewer_pane_g2

0x6744,	// (0x00022dc3) main_viewer_pane_g3_ParamLimits

0x6744,	// (0x00022dc3) main_viewer_pane_g3

0x6755,	// (0x00022dd4) main_viewer_pane_g4_ParamLimits

0x6755,	// (0x00022dd4) main_viewer_pane_g4

0x2d80,	// (0x0001f3ff) main_viewer_pane_g5_ParamLimits

0x2d80,	// (0x0001f3ff) main_viewer_pane_g5

0x2d80,	// (0x0001f3ff) main_viewer_pane_g7_ParamLimits

0x2d80,	// (0x0001f3ff) main_viewer_pane_g7

0xc2be,	// (0x0002893d) main_viewer_pane_g8_ParamLimits

0xc2be,	// (0x0002893d) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0002bb21) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0002bb21) main_viewer_pane_g

0xca20,	// (0x0002909f) viewer_content_pane_ParamLimits

0xca20,	// (0x0002909f) viewer_content_pane

0x6786,	// (0x00022e05) main_postcard_pane_g1_ParamLimits

0x6786,	// (0x00022e05) main_postcard_pane_g1

0x6794,	// (0x00022e13) main_postcard_pane_g2_ParamLimits

0x6794,	// (0x00022e13) main_postcard_pane_g2

0x67a2,	// (0x00022e21) main_postcard_pane_g3_ParamLimits

0x67a2,	// (0x00022e21) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0002bb32) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0002bb32) main_postcard_pane_g

0x67b2,	// (0x00022e31) main_postcard_pane_g4

0xdd24,	// (0x0002a3a3) smil_status_volume_pane_g2

0x67de,	// (0x00022e5d) postcard_pane_ParamLimits

0x67de,	// (0x00022e5d) postcard_pane

0xc80a,	// (0x00028e89) postcard_pane_g1_ParamLimits

0xc80a,	// (0x00028e89) postcard_pane_g1

0x6810,	// (0x00022e8f) postcard_pane_g2_ParamLimits

0x6810,	// (0x00022e8f) postcard_pane_g2

0x681c,	// (0x00022e9b) postcard_pane_g3_ParamLimits

0x681c,	// (0x00022e9b) postcard_pane_g3

0xca2e,	// (0x000290ad) postcard_pane_g4_ParamLimits

0xca2e,	// (0x000290ad) postcard_pane_g4

0x6828,	// (0x00022ea7) postcard_pane_g5_ParamLimits

0x6828,	// (0x00022ea7) postcard_pane_g5

0x6834,	// (0x00022eb3) postcard_pane_g6_ParamLimits

0x6834,	// (0x00022eb3) postcard_pane_g6

0xca3c,	// (0x000290bb) postcard_pane_g7_ParamLimits

0xca3c,	// (0x000290bb) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0002bb3f) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0002bb3f) postcard_pane_g

0x6840,	// (0x00022ebf) main_mp2_pane_g1_ParamLimits

0x6840,	// (0x00022ebf) main_mp2_pane_g1

0x684c,	// (0x00022ecb) main_mp2_pane_g2_ParamLimits

0x684c,	// (0x00022ecb) main_mp2_pane_g2

0x6858,	// (0x00022ed7) main_mp2_pane_g3_ParamLimits

0x6858,	// (0x00022ed7) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0002bb4e) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0002bb4e) main_mp2_pane_g

0x6864,	// (0x00022ee3) main_mp2_pane_t1_ParamLimits

0x6864,	// (0x00022ee3) main_mp2_pane_t1

0x687b,	// (0x00022efa) main_mp2_pane_t2_ParamLimits

0x687b,	// (0x00022efa) main_mp2_pane_t2

0x688f,	// (0x00022f0e) main_mp2_pane_t3_ParamLimits

0x688f,	// (0x00022f0e) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0002bb55) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0002bb55) main_mp2_pane_t

0xca4a,	// (0x000290c9) pec_content_pane_ParamLimits

0xca4a,	// (0x000290c9) pec_content_pane

0xbf4d,	// (0x000285cc) scroll_pane_cp015

0xca5c,	// (0x000290db) pec_attribute_pane_ParamLimits

0xca5c,	// (0x000290db) pec_attribute_pane

0x68a1,	// (0x00022f20) pec_content_pane_g1_ParamLimits

0x68a1,	// (0x00022f20) pec_content_pane_g1

0xca6c,	// (0x000290eb) pec_content_pane_t1_ParamLimits

0xca6c,	// (0x000290eb) pec_content_pane_t1

0xca7e,	// (0x000290fd) pec_content_pane_t2_ParamLimits

0xca7e,	// (0x000290fd) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0002bb5c) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0002bb5c) pec_content_pane_t

0x68ad,	// (0x00022f2c) list_single_graphic_pane_cp01_ParamLimits

0x68ad,	// (0x00022f2c) list_single_graphic_pane_cp01

0xbb0c,	// (0x0002818b) bg_popup_sub_pane_cp04

0xca90,	// (0x0002910f) popup_mup_playback_window_g1

0xca9c,	// (0x0002911b) popup_mup_playback_window_t1

0xcab1,	// (0x00029130) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0002bb61) popup_mup_playback_window_t

0xcae8,	// (0x00029167) main_image_pane_g1_ParamLimits

0xcae8,	// (0x00029167) main_image_pane_g1

0xcb2b,	// (0x000291aa) scroll_pane_cp018_ParamLimits

0xcb2b,	// (0x000291aa) scroll_pane_cp018

0xcb43,	// (0x000291c2) scroll_pane_cp016_ParamLimits

0xcb43,	// (0x000291c2) scroll_pane_cp016

0x6946,	// (0x00022fc5) smil2_image_pane_ParamLimits

0x6946,	// (0x00022fc5) smil2_image_pane

0x6976,	// (0x00022ff5) smil2_root_pane_ParamLimits

0x6976,	// (0x00022ff5) smil2_root_pane

0x69a2,	// (0x00023021) smil2_text_pane_ParamLimits

0x69a2,	// (0x00023021) smil2_text_pane

0xb8b1,	// (0x00027f30) bg_list_pane_cp06

0xcb7f,	// (0x000291fe) grid_radio_pane

0xb8b1,	// (0x00027f30) bg_popup_window_pane_cp06

0xcb87,	// (0x00029206) main_fmradio_pane_t1

0xc48a,	// (0x00028b09) heading_pane_cp04

0xcb95,	// (0x00029214) main_fmradio_pane_t2

0xdb5a,	// (0x0002a1d9) popup_cale_lunar_info_window_g1

0xcba3,	// (0x00029222) main_fmradio_pane_t3

0xdb62,	// (0x0002a1e1) popup_cale_lunar_info_window_g2

0xcbb1,	// (0x00029230) main_fmradio_pane_t4

0x0001,

0xcbbf,	// (0x0002923e) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0002bc3c) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0002bb76) main_fmradio_pane_t

0xcbcd,	// (0x0002924c) wait_bar_pane_cp03

0xcbd5,	// (0x00029254) cell_fmradio_pane_ParamLimits

0xcbd5,	// (0x00029254) cell_fmradio_pane

0xca3c,	// (0x000290bb) cell_fmradio_pane_g1_ParamLimits

0xca3c,	// (0x000290bb) cell_fmradio_pane_g1

0xb8b1,	// (0x00027f30) grid_highlight_pane_cp011

0xcbe8,	// (0x00029267) poc_content_pane_ParamLimits

0xcbe8,	// (0x00029267) poc_content_pane

0xcbfa,	// (0x00029279) scroll_pane_cp019

0x69e2,	// (0x00023061) popup_call_poc_act_window_ParamLimits

0x69e2,	// (0x00023061) popup_call_poc_act_window

0x69ef,	// (0x0002306e) popup_call_poc_inact_window_ParamLimits

0x69ef,	// (0x0002306e) popup_call_poc_inact_window

0xf594,	// (0x0002bc13) bg_popup_call_poc_act_pane_g

0xdad2,	// (0x0002a151) bg_popup_call_poc_inact_pane_g1

0xdada,	// (0x0002a159) bg_popup_call_poc_inact_pane_g2

0xcc02,	// (0x00029281) popup_call_poc_act_window_g2

0xdae2,	// (0x0002a161) bg_popup_call_poc_inact_pane_g3

0xdaea,	// (0x0002a169) bg_popup_call_poc_inact_pane_g4

0xdaf2,	// (0x0002a171) bg_popup_call_poc_inact_pane_g5

0xcc0a,	// (0x00029289) popup_call_poc_act_window_t1_ParamLimits

0xcc0a,	// (0x00029289) popup_call_poc_act_window_t1

0xcc32,	// (0x000292b1) popup_call_poc_act_window_t2_ParamLimits

0xcc32,	// (0x000292b1) popup_call_poc_act_window_t2

0xcc5a,	// (0x000292d9) popup_call_poc_act_window_t3_ParamLimits

0xcc5a,	// (0x000292d9) popup_call_poc_act_window_t3

0xcc82,	// (0x00029301) popup_call_poc_act_window_t4_ParamLimits

0xcc82,	// (0x00029301) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0002bb81) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0002bb81) popup_call_poc_act_window_t

0xdafa,	// (0x0002a179) bg_popup_call_poc_inact_pane_g6

0xdb02,	// (0x0002a181) bg_popup_call_poc_inact_pane_g7

0xdb0a,	// (0x0002a189) bg_popup_call_poc_inact_pane_g8

0xcc94,	// (0x00029313) popup_call_poc_inact_window_g2

0xdb12,	// (0x0002a191) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0002bc00) bg_popup_call_poc_inact_pane_g

0xcc9c,	// (0x0002931b) popup_call_poc_inact_window_t1_ParamLimits

0xcc9c,	// (0x0002931b) popup_call_poc_inact_window_t1

0xccb1,	// (0x00029330) popup_call_poc_inact_window_t2_ParamLimits

0xccb1,	// (0x00029330) popup_call_poc_inact_window_t2

0xccc6,	// (0x00029345) popup_call_poc_inact_window_t3_ParamLimits

0xccc6,	// (0x00029345) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0002bb8a) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0002bb8a) popup_call_poc_inact_window_t

0xdc97,	// (0x0002a316) context_pane_ParamLimits

0x6ea5,	// (0x00023524) signal_pane_ParamLimits

0xbda4,	// (0x00028423) main_call2_pane

0x2edb,	// (0x0001f55a) popup_phob_thumbnail2_window_ParamLimits

0x2edb,	// (0x0001f55a) popup_phob_thumbnail2_window

0x2d38,	// (0x0001f3b7) aid_hotspot_pointer_arrow_pane

0x2d40,	// (0x0001f3bf) aid_hotspot_pointer_hand_pane

0x6d11,	// (0x00023390) phob_pre_status_pane_g5

0x48ed,	// (0x00020f6c) cams_zoom_pane_ParamLimits

0x48f9,	// (0x00020f78) image_vga_pane_ParamLimits

0x4908,	// (0x00020f87) main_camera_pane_g1_ParamLimits

0x4916,	// (0x00020f95) main_camera_pane_g2_ParamLimits

0x4922,	// (0x00020fa1) main_camera_pane_g3_ParamLimits

0x492e,	// (0x00020fad) main_camera_pane_g4_ParamLimits

0x493a,	// (0x00020fb9) main_camera_pane_g5_ParamLimits

0x4946,	// (0x00020fc5) main_camera_pane_g6_ParamLimits

0x4952,	// (0x00020fd1) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0002b889) main_camera_pane_g_ParamLimits

0x495e,	// (0x00020fdd) main_camera_pane_t1_ParamLimits

0x4970,	// (0x00020fef) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0002b89a) main_camera_pane_t_ParamLimits

0xbb0c,	// (0x0002818b) bg_popup_preview_window_pane_cp01_ParamLimits

0xbb0c,	// (0x0002818b) bg_popup_preview_window_pane_cp01

0xccdb,	// (0x0002935a) popup_phob_thumbnail2_window_g1_ParamLimits

0xccdb,	// (0x0002935a) popup_phob_thumbnail2_window_g1

0xb8b1,	// (0x00027f30) call2_cli_visual_pane

0x6a0b,	// (0x0002308a) popup_call2_audio_conf_window_ParamLimits

0x6a0b,	// (0x0002308a) popup_call2_audio_conf_window

0x6a20,	// (0x0002309f) popup_call2_audio_first_window_ParamLimits

0x6a20,	// (0x0002309f) popup_call2_audio_first_window

0x6abe,	// (0x0002313d) popup_call2_audio_in_window_ParamLimits

0x6abe,	// (0x0002313d) popup_call2_audio_in_window

0x6b00,	// (0x0002317f) popup_call2_audio_out_window_ParamLimits

0x6b00,	// (0x0002317f) popup_call2_audio_out_window

0x6b62,	// (0x000231e1) popup_call2_audio_second_window_ParamLimits

0x6b62,	// (0x000231e1) popup_call2_audio_second_window

0x6bc0,	// (0x0002323f) popup_call2_audio_wait_window_ParamLimits

0x6bc0,	// (0x0002323f) popup_call2_audio_wait_window

0xb8b1,	// (0x00027f30) bg_popup_call2_act_pane_cp03

0xbaee,	// (0x0002816d) list_conf_pane_cp

0xcce7,	// (0x00029366) popup_call2_audio_conf_window_t1

0xc4e7,	// (0x00028b66) list_single_graphic_popup_conf2_pane_ParamLimits

0xc4e7,	// (0x00028b66) list_single_graphic_popup_conf2_pane

0xc4fa,	// (0x00028b79) list_highlight_pane_cp04

0xccf5,	// (0x00029374) list_single_graphic_popup_conf2_pane_g1

0xc50b,	// (0x00028b8a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0002bb91) list_single_graphic_popup_conf2_pane_g

0xccff,	// (0x0002937e) list_single_graphic_popup_conf2_pane_t1

0xcd0d,	// (0x0002938c) bg_popup_call2_act_pane_cp01_ParamLimits

0xcd0d,	// (0x0002938c) bg_popup_call2_act_pane_cp01

0xcd97,	// (0x00029416) call_type_pane_cp05_ParamLimits

0xcd97,	// (0x00029416) call_type_pane_cp05

0xcdeb,	// (0x0002946a) popup_call2_audio_second_window_g1_ParamLimits

0xcdeb,	// (0x0002946a) popup_call2_audio_second_window_g1

0xce3f,	// (0x000294be) popup_call2_audio_second_window_g2_ParamLimits

0xce3f,	// (0x000294be) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0002bb96) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0002bb96) popup_call2_audio_second_window_g

0xcea4,	// (0x00029523) popup_call2_audio_second_window_t1_ParamLimits

0xcea4,	// (0x00029523) popup_call2_audio_second_window_t1

0xcf5f,	// (0x000295de) popup_call2_audio_second_window_t2_ParamLimits

0xcf5f,	// (0x000295de) popup_call2_audio_second_window_t2

0xcfb2,	// (0x00029631) popup_call2_audio_second_window_t3_ParamLimits

0xcfb2,	// (0x00029631) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0002bb9d) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0002bb9d) popup_call2_audio_second_window_t

0xb8b1,	// (0x00027f30) bg_popup_call2_in_pane_cp02

0xb8bb,	// (0x00027f3a) call_type_pane_cp04

0xb8c3,	// (0x00027f42) popup_call2_audio_wait_window_g1

0xb8cb,	// (0x00027f4a) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0002b778) popup_call2_audio_wait_window_g

0xb8d3,	// (0x00027f52) popup_call2_audio_wait_window_t3

0xd0a5,	// (0x00029724) bg_popup_call2_act_pane_ParamLimits

0xd0a5,	// (0x00029724) bg_popup_call2_act_pane

0xd165,	// (0x000297e4) call_type_pane_cp03_ParamLimits

0xd165,	// (0x000297e4) call_type_pane_cp03

0xd1c9,	// (0x00029848) popup_call2_audio_first_window_g1_ParamLimits

0xd1c9,	// (0x00029848) popup_call2_audio_first_window_g1

0xd239,	// (0x000298b8) popup_call2_audio_first_window_g2_ParamLimits

0xd239,	// (0x000298b8) popup_call2_audio_first_window_g2

0xc80a,	// (0x00028e89) popup_call2_audio_first_window_g3_ParamLimits

0xc80a,	// (0x00028e89) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0002bba6) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0002bba6) popup_call2_audio_first_window_g

0xd317,	// (0x00029996) popup_call2_audio_first_window_t1_ParamLimits

0xd317,	// (0x00029996) popup_call2_audio_first_window_t1

0xd41a,	// (0x00029a99) popup_call2_audio_first_window_t4_ParamLimits

0xd41a,	// (0x00029a99) popup_call2_audio_first_window_t4

0xd4fd,	// (0x00029b7c) popup_call2_audio_first_window_t5_ParamLimits

0xd4fd,	// (0x00029b7c) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0002bbb1) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0002bbb1) popup_call2_audio_first_window_t

0xbb04,	// (0x00028183) bg_popup_call2_act_pane_g1

0xdb6a,	// (0x0002a1e9) popup_cale_lunar_info_window_t1

0xdb78,	// (0x0002a1f7) popup_cale_lunar_info_window_t2

0xdb86,	// (0x0002a205) popup_cale_lunar_info_window_t3

0xb8b1,	// (0x00027f30) bg_popup_call2_bubble_pane

0xd5fe,	// (0x00029c7d) bg_popup_call2_in_pane_cp01_ParamLimits

0xd5fe,	// (0x00029c7d) bg_popup_call2_in_pane_cp01

0xb58d,	// (0x00027c0c) call_type_pane_cp02

0xd646,	// (0x00029cc5) popup_call2_audio_out_window_g1_ParamLimits

0xd646,	// (0x00029cc5) popup_call2_audio_out_window_g1

0xd672,	// (0x00029cf1) popup_call2_audio_out_window_g2_ParamLimits

0xd672,	// (0x00029cf1) popup_call2_audio_out_window_g2

0xd69a,	// (0x00029d19) popup_call2_audio_out_window_g3_ParamLimits

0xd69a,	// (0x00029d19) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0002bbba) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0002bbba) popup_call2_audio_out_window_g

0xd6d5,	// (0x00029d54) popup_call2_audio_out_window_t1_ParamLimits

0xd6d5,	// (0x00029d54) popup_call2_audio_out_window_t1

0xd734,	// (0x00029db3) popup_call2_audio_out_window_t2_ParamLimits

0xd734,	// (0x00029db3) popup_call2_audio_out_window_t2

0xd788,	// (0x00029e07) popup_call2_audio_out_window_t3_ParamLimits

0xd788,	// (0x00029e07) popup_call2_audio_out_window_t3

0xd79e,	// (0x00029e1d) popup_call2_audio_out_window_t4_ParamLimits

0xd79e,	// (0x00029e1d) popup_call2_audio_out_window_t4

0xd7b4,	// (0x00029e33) popup_call2_audio_out_window_t5_ParamLimits

0xd7b4,	// (0x00029e33) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0002bbc3) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0002bbc3) popup_call2_audio_out_window_t

0xd818,	// (0x00029e97) bg_popup_call2_in_pane_ParamLimits

0xd818,	// (0x00029e97) bg_popup_call2_in_pane

0xd874,	// (0x00029ef3) popup_call2_audio_in_window_g1_ParamLimits

0xd874,	// (0x00029ef3) popup_call2_audio_in_window_g1

0xd8ac,	// (0x00029f2b) popup_call2_audio_in_window_g2_ParamLimits

0xd8ac,	// (0x00029f2b) popup_call2_audio_in_window_g2

0xd8e4,	// (0x00029f63) popup_call2_audio_in_window_g3_ParamLimits

0xd8e4,	// (0x00029f63) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0002bbd0) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0002bbd0) popup_call2_audio_in_window_g

0xd93c,	// (0x00029fbb) popup_call2_audio_in_window_t1_ParamLimits

0xd93c,	// (0x00029fbb) popup_call2_audio_in_window_t1

0xd9bc,	// (0x0002a03b) popup_call2_audio_in_window_t2_ParamLimits

0xd9bc,	// (0x0002a03b) popup_call2_audio_in_window_t2

0xda3c,	// (0x0002a0bb) popup_call2_audio_in_window_t3_ParamLimits

0xda3c,	// (0x0002a0bb) popup_call2_audio_in_window_t3

0xda56,	// (0x0002a0d5) popup_call2_audio_in_window_t4_ParamLimits

0xda56,	// (0x0002a0d5) popup_call2_audio_in_window_t4

0xda68,	// (0x0002a0e7) popup_call2_audio_in_window_t5_ParamLimits

0xda68,	// (0x0002a0e7) popup_call2_audio_in_window_t5

0xda7d,	// (0x0002a0fc) popup_call2_audio_in_window_t6_ParamLimits

0xda7d,	// (0x0002a0fc) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0002bbd9) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0002bbd9) popup_call2_audio_in_window_t

0xbb04,	// (0x00028183) bg_popup_call2_in_pane_g1

0xdb94,	// (0x0002a213) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0002bc41) popup_cale_lunar_info_window_t

0xbb0c,	// (0x0002818b) bg_popup_call2_rect_pane_ParamLimits

0xbb0c,	// (0x0002818b) bg_popup_call2_rect_pane

0xb8b1,	// (0x00027f30) call2_cli_visual_graphic_pane

0xb8b1,	// (0x00027f30) call2_cli_visual_text_pane

0x2f2a,	// (0x0001f5a9) smil_status_volume_pane_g3

0x0002,

0xbc34,	// (0x000282b3) call2_cli_visual_graphic_pane_g1

0xbc34,	// (0x000282b3) call2_cli_visual_graphic_pane_g2

0xbc34,	// (0x000282b3) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0002bbe6) call2_cli_visual_graphic_pane_g

0xda92,	// (0x0002a111) bg_popup_call2_rect_pane_g1

0xbcc0,	// (0x0002833f) bg_popup_call2_rect_pane_g2

0xda9a,	// (0x0002a119) bg_popup_call2_rect_pane_g3

0xdaa2,	// (0x0002a121) bg_popup_call2_rect_pane_g4

0xdaaa,	// (0x0002a129) bg_popup_call2_rect_pane_g5

0xdab2,	// (0x0002a131) bg_popup_call2_rect_pane_g6

0xdaba,	// (0x0002a139) bg_popup_call2_rect_pane_g7

0xdac2,	// (0x0002a141) bg_popup_call2_rect_pane_g8

0xdaca,	// (0x0002a149) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0002bbed) bg_popup_call2_rect_pane_g

0xdad2,	// (0x0002a151) bg_popup_call2_bubble_pane_g1

0xdada,	// (0x0002a159) bg_popup_call2_bubble_pane_g2

0xdae2,	// (0x0002a161) bg_popup_call2_bubble_pane_g3

0xdaea,	// (0x0002a169) bg_popup_call2_bubble_pane_g4

0xdaf2,	// (0x0002a171) bg_popup_call2_bubble_pane_g5

0xdafa,	// (0x0002a179) bg_popup_call2_bubble_pane_g6

0xdb02,	// (0x0002a181) bg_popup_call2_bubble_pane_g7

0xdb0a,	// (0x0002a189) bg_popup_call2_bubble_pane_g8

0xdb12,	// (0x0002a191) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0002bc00) bg_popup_call2_bubble_pane_g

0x44f4,	// (0x00020b73) aid_cale_week_size_cell_pane

0x4982,	// (0x00021001) aid_cams_cif_uncrop_pane_ParamLimits

0x4982,	// (0x00021001) aid_cams_cif_uncrop_pane

0x4add,	// (0x0002115c) aid_cams_size_cell_ParamLimits

0x4add,	// (0x0002115c) aid_cams_size_cell

0x4ae9,	// (0x00021168) grid_cams_pane_ParamLimits

0x4af7,	// (0x00021176) linegrid_cams_pane_ParamLimits

0x4ce2,	// (0x00021361) call_video_pane_t1

0x4d03,	// (0x00021382) call_video_pane_t2

0x0001,

0xf26e,	// (0x0002b8ed) call_video_pane_t

0x524a,	// (0x000218c9) aid_cale_month_size_cell_pane_ParamLimits

0x524a,	// (0x000218c9) aid_cale_month_size_cell_pane

0xf60b,	// (0x0002bc8a) smil_status_volume_pane_g

0x2f37,	// (0x0001f5b6) volume_smil_pane_ParamLimits

0x26d3,	// (0x0001ed52) aid_popup2_width_pane

0x4430,	// (0x00020aaf) cell_qdial_pane_g4_ParamLimits

0x4430,	// (0x00020aaf) cell_qdial_pane_g4

0x615e,	// (0x000227dd) aid_blid_cardinal_pane_ParamLimits

0x616e,	// (0x000227ed) aid_blid_destination_pane_ParamLimits

0x616e,	// (0x000227ed) aid_blid_destination_pane

0xbb0c,	// (0x0002818b) bg_popup_call_poc_act_pane_ParamLimits

0xbb0c,	// (0x0002818b) bg_popup_call_poc_act_pane

0xbb0c,	// (0x0002818b) bg_popup_call_poc_inact_pane_ParamLimits

0xbb0c,	// (0x0002818b) bg_popup_call_poc_inact_pane

0xdb1a,	// (0x0002a199) bg_popup_call_poc_act_pane_g1

0xdb22,	// (0x0002a1a1) bg_popup_call_poc_act_pane_g2

0xdb2a,	// (0x0002a1a9) bg_popup_call_poc_act_pane_g3

0xdaea,	// (0x0002a169) bg_popup_call_poc_act_pane_g4

0xdaf2,	// (0x0002a171) bg_popup_call_poc_act_pane_g5

0xdb32,	// (0x0002a1b1) bg_popup_call_poc_act_pane_g6

0xdb02,	// (0x0002a181) bg_popup_call_poc_act_pane_g7

0xdb3a,	// (0x0002a1b9) bg_popup_call_poc_act_pane_g8

0xb8b1,	// (0x00027f30) main_usb_pane

0x2e0a,	// (0x0001f489) popup_cale_lunar_info_window

0x502c,	// (0x000216ab) im_reading_pane_t1_ParamLimits

0xbea5,	// (0x00028524) list_im_pane_ParamLimits

0xbeb6,	// (0x00028535) scroll_pane_cp07_ParamLimits

0xb8b1,	// (0x00027f30) grid_highlight_pane_cp012

0xbb0c,	// (0x0002818b) mup_scale_pane_ParamLimits

0xc80a,	// (0x00028e89) main_usb_pane_g1_ParamLimits

0xc80a,	// (0x00028e89) main_usb_pane_g1

0x6c34,	// (0x000232b3) main_usb_pane_g2_ParamLimits

0x6c34,	// (0x000232b3) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0002bc2a) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0002bc2a) main_usb_pane_g

0x6c40,	// (0x000232bf) main_usb_pane_t1_ParamLimits

0x6c40,	// (0x000232bf) main_usb_pane_t1

0x6c52,	// (0x000232d1) main_usb_pane_t2_ParamLimits

0x6c52,	// (0x000232d1) main_usb_pane_t2

0x6c64,	// (0x000232e3) main_usb_pane_t3_ParamLimits

0x6c64,	// (0x000232e3) main_usb_pane_t3

0x6c76,	// (0x000232f5) main_usb_pane_t4_ParamLimits

0x6c76,	// (0x000232f5) main_usb_pane_t4

0x6c88,	// (0x00023307) main_usb_pane_t5_ParamLimits

0x6c88,	// (0x00023307) main_usb_pane_t5

0x6c9a,	// (0x00023319) main_usb_pane_t6_ParamLimits

0x6c9a,	// (0x00023319) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0002bc2f) main_usb_pane_t_ParamLimits

0x6104,	// (0x00022783) aid_text_placing

0x6110,	// (0x0002278f) main_location2_pane_t1_ParamLimits

0x6124,	// (0x000227a3) main_location2_pane_t2_ParamLimits

0x6138,	// (0x000227b7) main_location2_pane_t3_ParamLimits

0x614c,	// (0x000227cb) main_location2_pane_t4_ParamLimits

0x614c,	// (0x000227cb) main_location2_pane_t4

0xf3cf,	// (0x0002ba4e) main_location2_pane_t_ParamLimits

0xbb48,	// (0x000281c7) find_pinb_pane_g2_ParamLimits

0xbb48,	// (0x000281c7) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0002b79e) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0002b79e) find_pinb_pane_g

0xbb54,	// (0x000281d3) find_pinb_pane_t1_ParamLimits

0xbb66,	// (0x000281e5) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0002b7a3) find_pinb_pane_t_ParamLimits

0xb8b1,	// (0x00027f30) main_call3_pane

0x57ed,	// (0x00021e6c) cale_month_day_heading_pane_t1_ParamLimits

0x5873,	// (0x00021ef2) cale_month_day_heading_pane_t2_ParamLimits

0x58ec,	// (0x00021f6b) cale_month_day_heading_pane_t3_ParamLimits

0x5965,	// (0x00021fe4) cale_month_day_heading_pane_t4_ParamLimits

0x59de,	// (0x0002205d) cale_month_day_heading_pane_t5_ParamLimits

0x5a57,	// (0x000220d6) cale_month_day_heading_pane_t6_ParamLimits

0x5ad0,	// (0x0002214f) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0002b925) cale_month_day_heading_pane_t_ParamLimits

0xc100,	// (0x0002877f) smil_status_volume_pane

0x67f8,	// (0x00022e77) postcard_address_pane_ParamLimits

0x67f8,	// (0x00022e77) postcard_address_pane

0x6804,	// (0x00022e83) postcard_message_pane_ParamLimits

0x6804,	// (0x00022e83) postcard_message_pane

0x6bff,	// (0x0002327e) call2_cli_visual_pane_t1_ParamLimits

0x6bff,	// (0x0002327e) call2_cli_visual_pane_t1

0x708d,	// (0x0002370c) postcard_message_pane_t1_ParamLimits

0x708d,	// (0x0002370c) postcard_message_pane_t1

0x7076,	// (0x000236f5) postcard_address_pane_t1_ParamLimits

0x7076,	// (0x000236f5) postcard_address_pane_t1

0x7067,	// (0x000236e6) popup_call3_audio_in_window_ParamLimits

0x7067,	// (0x000236e6) popup_call3_audio_in_window

0x6f4b,	// (0x000235ca) bg_popup_call3_in_pane_ParamLimits

0x6f4b,	// (0x000235ca) bg_popup_call3_in_pane

0x6fad,	// (0x0002362c) popup_call3_audio_in_window_g1_ParamLimits

0x6fad,	// (0x0002362c) popup_call3_audio_in_window_g1

0x6fc5,	// (0x00023644) popup_call3_audio_in_window_g2_ParamLimits

0x6fc5,	// (0x00023644) popup_call3_audio_in_window_g2

0x6fdd,	// (0x0002365c) popup_call3_audio_in_window_g3_ParamLimits

0x6fdd,	// (0x0002365c) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0002bc91) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0002bc91) popup_call3_audio_in_window_g

0x7005,	// (0x00023684) popup_call3_audio_in_window_t1_ParamLimits

0x7005,	// (0x00023684) popup_call3_audio_in_window_t1

0x702d,	// (0x000236ac) popup_call3_audio_in_window_t2_ParamLimits

0x702d,	// (0x000236ac) popup_call3_audio_in_window_t2

0x7055,	// (0x000236d4) popup_call3_audio_in_window_t3_ParamLimits

0x7055,	// (0x000236d4) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0002bc9a) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0002bc9a) popup_call3_audio_in_window_t

0xbda4,	// (0x00028423) bg_popup_call3_rect_pane

0xda92,	// (0x0002a111) bg_popup_call3_rect_pane_g1

0xbcc0,	// (0x0002833f) bg_popup_call3_rect_pane_g2

0xda9a,	// (0x0002a119) bg_popup_call3_rect_pane_g3

0xdaa2,	// (0x0002a121) bg_popup_call3_rect_pane_g4

0xdaaa,	// (0x0002a129) bg_popup_call3_rect_pane_g5

0xdab2,	// (0x0002a131) bg_popup_call3_rect_pane_g6

0xdaba,	// (0x0002a139) bg_popup_call3_rect_pane_g7

0x6472,	// (0x00022af1) mup_visualizer_osc_pane

0xc8cf,	// (0x00028f4e) mup_visualizer_spec_pane

0x6f6b,	// (0x000235ea) call3_video_qcif_pane_ParamLimits

0x6f6b,	// (0x000235ea) call3_video_qcif_pane

0x6f7d,	// (0x000235fc) call3_video_qcif_uncrop_pane_ParamLimits

0x6f7d,	// (0x000235fc) call3_video_qcif_uncrop_pane

0x6f8b,	// (0x0002360a) call3_video_subqcif_pane_ParamLimits

0x6f8b,	// (0x0002360a) call3_video_subqcif_pane

0x6f9d,	// (0x0002361c) call3_video_subqcif_uncrop_pane_ParamLimits

0x6f9d,	// (0x0002361c) call3_video_subqcif_uncrop_pane

0x6ff5,	// (0x00023674) popup_call3_audio_in_window_g4_ParamLimits

0x6ff5,	// (0x00023674) popup_call3_audio_in_window_g4

0x6f3a,	// (0x000235b9) mup_spec_half_pane

0x6f43,	// (0x000235c2) mup_spec_half_pane_cp

0xdcf7,	// (0x0002a376) mup_osc_middle_pane

0xdd00,	// (0x0002a37f) mup_visualizer_osc_pane_g1

0x6f1b,	// (0x0002359a) mup_spec_bar_pane_ParamLimits

0x6f1b,	// (0x0002359a) mup_spec_bar_pane

0xdce4,	// (0x0002a363) mup_spec_bar_pane_g1

0xdcee,	// (0x0002a36d) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0002bc85) mup_spec_bar_pane_g

0x44f4,	// (0x00020b73) aid_cale_week_size_cell_pane_ParamLimits

0x4509,	// (0x00020b88) bg_cale_heading_pane_ParamLimits

0xbcfd,	// (0x0002837c) bg_cale_pane_cp01_ParamLimits

0x4529,	// (0x00020ba8) cale_week_corner_pane_ParamLimits

0x4543,	// (0x00020bc2) cale_week_day_heading_pane_ParamLimits

0x4563,	// (0x00020be2) cale_week_scroll_pane_g1_ParamLimits

0x457e,	// (0x00020bfd) cale_week_scroll_pane_g2_ParamLimits

0x4591,	// (0x00020c10) cale_week_scroll_pane_g3_ParamLimits

0x45a4,	// (0x00020c23) cale_week_scroll_pane_g4_ParamLimits

0x45b7,	// (0x00020c36) cale_week_scroll_pane_g5_ParamLimits

0x45ca,	// (0x00020c49) cale_week_scroll_pane_g6_ParamLimits

0x45dd,	// (0x00020c5c) cale_week_scroll_pane_g7_ParamLimits

0x45f2,	// (0x00020c71) cale_week_scroll_pane_g8_ParamLimits

0x4607,	// (0x00020c86) cale_week_scroll_pane_g9_ParamLimits

0x461a,	// (0x00020c99) cale_week_scroll_pane_g10_ParamLimits

0x462d,	// (0x00020cac) cale_week_scroll_pane_g11_ParamLimits

0x4640,	// (0x00020cbf) cale_week_scroll_pane_g12_ParamLimits

0x4657,	// (0x00020cd6) cale_week_scroll_pane_g13_ParamLimits

0x4672,	// (0x00020cf1) cale_week_scroll_pane_g14_ParamLimits

0x468d,	// (0x00020d0c) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0002b82f) cale_week_scroll_pane_g_ParamLimits

0x46bd,	// (0x00020d3c) cale_week_time_pane_ParamLimits

0x46d2,	// (0x00020d51) grid_cale_week_pane_ParamLimits

0xbd1a,	// (0x00028399) listscroll_cale_week_pane_t1

0xbd2c,	// (0x000283ab) scroll_pane_cp08_ParamLimits

0x52be,	// (0x0002193d) cale_month_corner_pane_ParamLimits

0xc0d6,	// (0x00028755) cale_month_pane_t1

0x5770,	// (0x00021def) cale_month_week_pane_ParamLimits

0xc80a,	// (0x00028e89) popup_call_status_window_g1_ParamLimits

0x5faa,	// (0x00022629) popup_call_status_window_g2_ParamLimits

0x5fb6,	// (0x00022635) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0002b9d5) popup_call_status_window_g_ParamLimits

0xc47a,	// (0x00028af9) aid_call2_pane

0x6716,	// (0x00022d95) msg_header_pane_g1

0x67f8,	// (0x00022e77) postcard_address2_pane_ParamLimits

0x67f8,	// (0x00022e77) postcard_address2_pane

0x6804,	// (0x00022e83) postcard_message2_pane_ParamLimits

0x6804,	// (0x00022e83) postcard_message2_pane

0x6eb3,	// (0x00023532) message2_row_pane_ParamLimits

0x6eb3,	// (0x00023532) message2_row_pane

0x6ece,	// (0x0002354d) address2_row_pane_ParamLimits

0x6ece,	// (0x0002354d) address2_row_pane

0xdcb2,	// (0x0002a331) postcard_message2_row_pane_g1

0xdcba,	// (0x0002a339) postcard_message2_row_pane_t1

0xdcb2,	// (0x0002a331) address2_row_pane_g1

0xdcba,	// (0x0002a339) address2_row_pane_t1

0x4872,	// (0x00020ef1) aid_size_cell_vorec

0xb8b1,	// (0x00027f30) main_rss_pane

0x6ee1,	// (0x00023560) rss_list_single_pane_ParamLimits

0x6ee1,	// (0x00023560) rss_list_single_pane

0xdcc8,	// (0x0002a347) rss_list_single_pane_t1

0xdcd6,	// (0x0002a355) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0002bc80) rss_list_single_pane_t

0xb8b1,	// (0x00027f30) main_camera2_pane

0xb8b1,	// (0x00027f30) main_video2_pane

0x2f95,	// (0x0001f614) cams_zoom_pane_cp2_ParamLimits

0x2f95,	// (0x0001f614) cams_zoom_pane_cp2

0x2fa1,	// (0x0001f620) image2_vga_pane_ParamLimits

0x2fa1,	// (0x0001f620) image2_vga_pane

0x2fb0,	// (0x0001f62f) main_camera2_pane_g1_ParamLimits

0x2fb0,	// (0x0001f62f) main_camera2_pane_g1

0x2fbc,	// (0x0001f63b) main_camera2_pane_g2_ParamLimits

0x2fbc,	// (0x0001f63b) main_camera2_pane_g2

0x2fc8,	// (0x0001f647) main_camera2_pane_g3_ParamLimits

0x2fc8,	// (0x0001f647) main_camera2_pane_g3

0x2fd4,	// (0x0001f653) main_camera2_pane_g4_ParamLimits

0x2fd4,	// (0x0001f653) main_camera2_pane_g4

0x2fe0,	// (0x0001f65f) main_camera2_pane_g5_ParamLimits

0x2fe0,	// (0x0001f65f) main_camera2_pane_g5

0x2fec,	// (0x0001f66b) main_camera2_pane_g6_ParamLimits

0x2fec,	// (0x0001f66b) main_camera2_pane_g6

0x2ff8,	// (0x0001f677) main_camera2_pane_g7_ParamLimits

0x2ff8,	// (0x0001f677) main_camera2_pane_g7

0x3004,	// (0x0001f683) main_camera2_pane_g8_ParamLimits

0x3004,	// (0x0001f683) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0002bca1) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0002bca1) main_camera2_pane_g

0x301c,	// (0x0001f69b) main_camera2_pane_t1_ParamLimits

0x301c,	// (0x0001f69b) main_camera2_pane_t1

0x302e,	// (0x0001f6ad) main_camera2_pane_t2_ParamLimits

0x302e,	// (0x0001f6ad) main_camera2_pane_t2

0x3040,	// (0x0001f6bf) main_camera2_pane_t3_ParamLimits

0x3040,	// (0x0001f6bf) main_camera2_pane_t3

0x3052,	// (0x0001f6d1) main_camera2_pane_t4_ParamLimits

0x3052,	// (0x0001f6d1) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0002bcb4) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0002bcb4) main_camera2_pane_t

0x30b4,	// (0x0001f733) cams_zoom_pane_cp4_ParamLimits

0x30b4,	// (0x0001f733) cams_zoom_pane_cp4

0x30c4,	// (0x0001f743) image2_cif_pane_ParamLimits

0x30c4,	// (0x0001f743) image2_cif_pane

0x30d9,	// (0x0001f758) image2_subqcif_pane_ParamLimits

0x30d9,	// (0x0001f758) image2_subqcif_pane

0x30e8,	// (0x0001f767) main_video2_pane_g1_ParamLimits

0x30e8,	// (0x0001f767) main_video2_pane_g1

0x30fa,	// (0x0001f779) main_video2_pane_g2_ParamLimits

0x30fa,	// (0x0001f779) main_video2_pane_g2

0x310a,	// (0x0001f789) main_video2_pane_g3_ParamLimits

0x310a,	// (0x0001f789) main_video2_pane_g3

0x311a,	// (0x0001f799) main_video2_pane_g4_ParamLimits

0x311a,	// (0x0001f799) main_video2_pane_g4

0x312a,	// (0x0001f7a9) main_video2_pane_g5_ParamLimits

0x312a,	// (0x0001f7a9) main_video2_pane_g5

0x313a,	// (0x0001f7b9) main_video2_pane_g6_ParamLimits

0x313a,	// (0x0001f7b9) main_video2_pane_g6

0x0005,

0xf644,	// (0x0002bcc3) main_video2_pane_g_ParamLimits

0xf644,	// (0x0002bcc3) main_video2_pane_g

0x314c,	// (0x0001f7cb) main_video2_pane_t1_ParamLimits

0x314c,	// (0x0001f7cb) main_video2_pane_t1

0x3166,	// (0x0001f7e5) main_video2_pane_t2_ParamLimits

0x3166,	// (0x0001f7e5) main_video2_pane_t2

0x318c,	// (0x0001f80b) main_video2_pane_t3_ParamLimits

0x318c,	// (0x0001f80b) main_video2_pane_t3

0x0002,

0xf651,	// (0x0002bcd0) main_video2_pane_t_ParamLimits

0xf651,	// (0x0002bcd0) main_video2_pane_t

0x6d51,	// (0x000233d0) call_muted_g2

0x0001,

0xf5f3,	// (0x0002bc72) call_muted_g

0xb8b1,	// (0x00027f30) main_mup2_pane

0xdd37,	// (0x0002a3b6) main_mup2_pane_g1_ParamLimits

0xdd37,	// (0x0002a3b6) main_mup2_pane_g1

0x70a8,	// (0x00023727) main_mup2_pane_g2_ParamLimits

0x70a8,	// (0x00023727) main_mup2_pane_g2

0x31db,	// (0x0001f85a) main_mup_pane_g13_cp1

0x31e3,	// (0x0001f862) mup_volume_pane_cp1

0x70c8,	// (0x00023747) main_mup2_pane_g4_ParamLimits

0x70c8,	// (0x00023747) main_mup2_pane_g4

0x70dd,	// (0x0002375c) main_mup2_pane_g5_ParamLimits

0x70dd,	// (0x0002375c) main_mup2_pane_g5

0x70f2,	// (0x00023771) main_mup2_pane_g6_ParamLimits

0x70f2,	// (0x00023771) main_mup2_pane_g6

0x7107,	// (0x00023786) main_mup2_pane_g7_ParamLimits

0x7107,	// (0x00023786) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0002bcd7) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0002bcd7) main_mup2_pane_g

0x7123,	// (0x000237a2) main_mup2_pane_t1_ParamLimits

0x7123,	// (0x000237a2) main_mup2_pane_t1

0x713a,	// (0x000237b9) main_mup2_pane_t2_ParamLimits

0x713a,	// (0x000237b9) main_mup2_pane_t2

0x7151,	// (0x000237d0) main_mup2_pane_t3_ParamLimits

0x7151,	// (0x000237d0) main_mup2_pane_t3

0x7168,	// (0x000237e7) main_mup2_pane_t4_ParamLimits

0x7168,	// (0x000237e7) main_mup2_pane_t4

0x7182,	// (0x00023801) main_mup2_pane_t5_ParamLimits

0x7182,	// (0x00023801) main_mup2_pane_t5

0x719c,	// (0x0002381b) main_mup2_pane_t6_ParamLimits

0x719c,	// (0x0002381b) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0002bce6) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0002bce6) main_mup2_pane_t

0x71d4,	// (0x00023853) mup2_visualizer_pane_ParamLimits

0x71d4,	// (0x00023853) mup2_visualizer_pane

0x720a,	// (0x00023889) mup_progress_pane_cp_ParamLimits

0x720a,	// (0x00023889) mup_progress_pane_cp

0x31c6,	// (0x0001f845) mup_volume_pane_cp_ParamLimits

0x31c6,	// (0x0001f845) mup_volume_pane_cp

0x7221,	// (0x000238a0) mup2_visualizer_pane_g1_ParamLimits

0x7221,	// (0x000238a0) mup2_visualizer_pane_g1

0xdd43,	// (0x0002a3c2) mup2_visualizer_pane_g2_ParamLimits

0xdd43,	// (0x0002a3c2) mup2_visualizer_pane_g2

0x7236,	// (0x000238b5) mup2_visualizer_pane_g3_ParamLimits

0x7236,	// (0x000238b5) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0002bcf3) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0002bcf3) mup2_visualizer_pane_g

0xcb77,	// (0x000291f6) aid_size_cell_fmradio

0x2d9e,	// (0x0001f41d) aid_height_parent_landcape

0xbf34,	// (0x000285b3) wml_content_pane_cp

0xbf3c,	// (0x000285bb) wml_tabs_pane

0xbf45,	// (0x000285c4) popup_wml_miniature_window

0xbf4d,	// (0x000285cc) scroll_pane_cp021

0xbf61,	// (0x000285e0) wml_content_pane_comp8

0xb8b1,	// (0x00027f30) bg_popup_sub_pane_cp05

0xdd61,	// (0x0002a3e0) popup_wml_miniature_window_g1

0xdd69,	// (0x0002a3e8) wml_miniature_view_pane

0x7244,	// (0x000238c3) aid_size_wml_view

0x724c,	// (0x000238cb) wml_miniature_view_pane_g1

0x7255,	// (0x000238d4) wml_miniature_view_pane_g2

0x725e,	// (0x000238dd) wml_miniature_view_pane_g3

0x7266,	// (0x000238e5) wml_miniature_view_pane_g4

0x726e,	// (0x000238ed) wml_miniature_view_pane_g5

0x7276,	// (0x000238f5) wml_miniature_view_pane_g6

0x727e,	// (0x000238fd) wml_miniature_view_pane_g7

0x7286,	// (0x00023905) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0002bcfa) wml_miniature_view_pane_g

0xdd37,	// (0x0002a3b6) background_graphic_ParamLimits

0xdd37,	// (0x0002a3b6) background_graphic

0xdd71,	// (0x0002a3f0) wml_tabs_2_pane

0xdd7a,	// (0x0002a3f9) wml_tabs_3_pane_ParamLimits

0xdd7a,	// (0x0002a3f9) wml_tabs_3_pane

0xdd8c,	// (0x0002a40b) wml_tabs_4_pane_ParamLimits

0xdd8c,	// (0x0002a40b) wml_tabs_4_pane

0xdda2,	// (0x0002a421) wml_tabs_5_pane_ParamLimits

0xdda2,	// (0x0002a421) wml_tabs_5_pane

0xddbc,	// (0x0002a43b) wml_tabs_pane_g2_ParamLimits

0xddbc,	// (0x0002a43b) wml_tabs_pane_g2

0xddd0,	// (0x0002a44f) wml_tabs_pane_g3_ParamLimits

0xddd0,	// (0x0002a44f) wml_tabs_pane_g3

0x728e,	// (0x0002390d) wml_tabs_2_active_pane_ParamLimits

0x728e,	// (0x0002390d) wml_tabs_2_active_pane

0x729e,	// (0x0002391d) wml_tabs_2_passive_pane_ParamLimits

0x729e,	// (0x0002391d) wml_tabs_2_passive_pane

0x72ae,	// (0x0002392d) wml_tabs_3_active_pane_cp_ParamLimits

0x72ae,	// (0x0002392d) wml_tabs_3_active_pane_cp

0x72bf,	// (0x0002393e) wml_tabs_3_passive_pane_ParamLimits

0x72bf,	// (0x0002393e) wml_tabs_3_passive_pane

0x72d0,	// (0x0002394f) wml_tabs_3_passive_pane_cp_ParamLimits

0x72d0,	// (0x0002394f) wml_tabs_3_passive_pane_cp

0x72e1,	// (0x00023960) tabs_4_active_pane

0x72e9,	// (0x00023968) tabs_4_passive_pane

0x72f1,	// (0x00023970) tabs_4_passive_pane_cp

0x72f9,	// (0x00023978) tabs_4_passive_pane_cp2

0x6c2c,	// (0x000232ab) aid_height_text

0x643f,	// (0x00022abe) mup_volume_cont_pane_ParamLimits

0x643f,	// (0x00022abe) mup_volume_cont_pane

0x41cf,	// (0x0002084e) aid_size_cell_pinb

0x41d9,	// (0x00020858) aid_size_list_pinb

0x71f3,	// (0x00023872) mup2_volume_cont_pane_ParamLimits

0x71f3,	// (0x00023872) mup2_volume_cont_pane

0x31b2,	// (0x0001f831) mup2_volume_cont_pane_g1_ParamLimits

0x31b2,	// (0x0001f831) mup2_volume_cont_pane_g1

0x26df,	// (0x0001ed5e) aid_size_cell_touch_ParamLimits

0x26df,	// (0x0001ed5e) aid_size_cell_touch

0x2967,	// (0x0001efe6) touch_pane_ParamLimits

0x2967,	// (0x0001efe6) touch_pane

0x295d,	// (0x0001efdc) main_rss2_pane

0xdded,	// (0x0002a46c) listscroll_rss2_pane

0xddf6,	// (0x0002a475) rss2_navigation_pane

0xddfe,	// (0x0002a47d) list_rss2_pane

0xc5bd,	// (0x00028c3c) scroll_pane_cp22

0xde06,	// (0x0002a485) rss2_navigation_pane_g1

0xde0f,	// (0x0002a48e) rss2_navigation_pane_g2

0xde17,	// (0x0002a496) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0002bd0b) rss2_navigation_pane_g

0xde1f,	// (0x0002a49e) rss2_navigation_pane_t1

0x7301,	// (0x00023980) rss2_list_single_pane_ParamLimits

0x7301,	// (0x00023980) rss2_list_single_pane

0xde2d,	// (0x0002a4ac) rss2_list_single_pane_t2

0xde3b,	// (0x0002a4ba) rss2_list_single_pane_t3_ParamLimits

0xde3b,	// (0x0002a4ba) rss2_list_single_pane_t3

0xde58,	// (0x0002a4d7) rss2_list_single_pane_t4

0x5d5e,	// (0x000223dd) smil_status_pane_g1

0x2db5,	// (0x0001f434) main_image2_pane_ParamLimits

0x2db5,	// (0x0001f434) main_image2_pane

0x3010,	// (0x0001f68f) main_camera2_pane_g9_ParamLimits

0x3010,	// (0x0001f68f) main_camera2_pane_g9

0x3064,	// (0x0001f6e3) main_camera2_pane_t5_ParamLimits

0x3064,	// (0x0001f6e3) main_camera2_pane_t5

0x3076,	// (0x0001f6f5) main_camera2_pane_t6_ParamLimits

0x3076,	// (0x0001f6f5) main_camera2_pane_t6

0x7332,	// (0x000239b1) main_image2_pane_g1_ParamLimits

0x7332,	// (0x000239b1) main_image2_pane_g1

0x69cc,	// (0x0002304b) smil2_video_pane_ParamLimits

0x69cc,	// (0x0002304b) smil2_video_pane

0x2713,	// (0x0001ed92) aid_zoom_text_primary_cp

0x2904,	// (0x0001ef83) popup_preview_fixed_window

0xbe9d,	// (0x0002851c) im_reading_pane_g1

0x2f5a,	// (0x0001f5d9) cams2_bc_adjust_pane_cp_ParamLimits

0x2f5a,	// (0x0001f5d9) cams2_bc_adjust_pane_cp

0x30a6,	// (0x0001f725) cams2_bc_adjust_pane_ParamLimits

0x30a6,	// (0x0001f725) cams2_bc_adjust_pane

0x00c7,	// (0x0001c746) cams2_bc_adjust_pane_g1

0x31eb,	// (0x0001f86a) cams2_slider_pane

0x31f4,	// (0x0001f873) cams2_slider_pane_g1

0x31fd,	// (0x0001f87c) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0002bd12) cams2_slider_pane_g

0x29d8,	// (0x0001f057) calc_display_pane_ParamLimits

0x29f6,	// (0x0001f075) calc_paper_pane_ParamLimits

0x2a12,	// (0x0001f091) grid_calc_pane_ParamLimits

0x2d09,	// (0x0001f388) popup_clock_digital_window_t1_ParamLimits

0xcb14,	// (0x00029193) main_image_pane_t1

0x29be,	// (0x0001f03d) aid_size_cell_calc_ParamLimits

0x29be,	// (0x0001f03d) aid_size_cell_calc

0x2de6,	// (0x0001f465) popup_blid_sat_info2_window_ParamLimits

0x2de6,	// (0x0001f465) popup_blid_sat_info2_window

0xde77,	// (0x0002a4f6) aid_size_cell_blid

0xde7f,	// (0x0002a4fe) bg_popup_window_pane_cp07

0xdea2,	// (0x0002a521) grid_popup_blid_pane

0xdeac,	// (0x0002a52b) heading_pane_cp05_ParamLimits

0xdeac,	// (0x0002a52b) heading_pane_cp05

0xdf76,	// (0x0002a5f5) cell_popup_blid_pane_ParamLimits

0xdf76,	// (0x0002a5f5) cell_popup_blid_pane

0xdf9a,	// (0x0002a619) cell_popup_blid_pane_g1

0xdfa2,	// (0x0002a621) cell_popup_blid_pane_t1

0x71b9,	// (0x00023838) mup2_indicator_pane_ParamLimits

0x71b9,	// (0x00023838) mup2_indicator_pane

0xbda4,	// (0x00028423) mup2_visualizer_osc_pane

0xdd4f,	// (0x0002a3ce) mup2_visualizer_spec_pane_ParamLimits

0xdd4f,	// (0x0002a3ce) mup2_visualizer_spec_pane

0x733e,	// (0x000239bd) mup2_spec_half_pane

0x7347,	// (0x000239c6) mup2_spec_half_pane_cp

0x7351,	// (0x000239d0) mup2_spec_bar_pane_ParamLimits

0x7351,	// (0x000239d0) mup2_spec_bar_pane

0xdce4,	// (0x0002a363) mup2_spec_bar_pane_g1

0xdcee,	// (0x0002a36d) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0002bc85) mup2_spec_bar_pane_g

0x7370,	// (0x000239ef) mup2_osc_middle_pane

0xdd00,	// (0x0002a37f) mup2_visualizer_osc_pane_g1

0xb4be,	// (0x00027b3d) popup_number_entry_window_t1_ParamLimits

0xb4d1,	// (0x00027b50) popup_number_entry_window_t2_ParamLimits

0xb4e3,	// (0x00027b62) popup_number_entry_window_t3_ParamLimits

0x410c,	// (0x0002078b) popup_number_entry_window_t5_ParamLimits

0x410c,	// (0x0002078b) popup_number_entry_window_t5

0xf0ca,	// (0x0002b749) popup_number_entry_window_t_ParamLimits

0xb4f5,	// (0x00027b74) text_title_cp2_ParamLimits

0x2d48,	// (0x0001f3c7) aid_hotspot_pointer_text2_pane

0x2d92,	// (0x0001f411) main_viewer_pane_g9_ParamLimits

0x2d92,	// (0x0001f411) main_viewer_pane_g9

0xc0d6,	// (0x00028755) cale_month_pane_t1_ParamLimits

0xc113,	// (0x00028792) bg_cale_pane_ParamLimits

0xc12b,	// (0x000287aa) list_cale_pane_ParamLimits

0xc13c,	// (0x000287bb) listscroll_cale_day_pane_t1

0xc14e,	// (0x000287cd) scroll_pane_cp09_ParamLimits

0x647a,	// (0x00022af9) main_mup_eq_pane_t1_ParamLimits

0x647a,	// (0x00022af9) main_mup_eq_pane_t1

0x6494,	// (0x00022b13) main_mup_eq_pane_t2_ParamLimits

0x6494,	// (0x00022b13) main_mup_eq_pane_t2

0x64ae,	// (0x00022b2d) main_mup_eq_pane_t3_ParamLimits

0x64ae,	// (0x00022b2d) main_mup_eq_pane_t3

0x64c6,	// (0x00022b45) main_mup_eq_pane_t4_ParamLimits

0x64c6,	// (0x00022b45) main_mup_eq_pane_t4

0x64de,	// (0x00022b5d) main_mup_eq_pane_t5_ParamLimits

0x64de,	// (0x00022b5d) main_mup_eq_pane_t5

0x64f6,	// (0x00022b75) main_mup_eq_pane_t6_ParamLimits

0x64f6,	// (0x00022b75) main_mup_eq_pane_t6

0x650a,	// (0x00022b89) main_mup_eq_pane_t7_ParamLimits

0x650a,	// (0x00022b89) main_mup_eq_pane_t7

0x651e,	// (0x00022b9d) main_mup_eq_pane_t8_ParamLimits

0x651e,	// (0x00022b9d) main_mup_eq_pane_t8

0x6534,	// (0x00022bb3) main_mup_eq_pane_t9_ParamLimits

0x6534,	// (0x00022bb3) main_mup_eq_pane_t9

0x654c,	// (0x00022bcb) main_mup_eq_pane_t10_ParamLimits

0x654c,	// (0x00022bcb) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0002bad4) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0002bad4) main_mup_eq_pane_t

0x6609,	// (0x00022c88) mup_equalizer_pane_cp5_ParamLimits

0x661f,	// (0x00022c9e) mup_equalizer_pane_cp6_ParamLimits

0x6637,	// (0x00022cb6) mup_equalizer_pane_cp7_ParamLimits

0x295d,	// (0x0001efdc) main_gallery_pane

0xdd09,	// (0x0002a388) smil2_volume_pane

0xdd11,	// (0x0002a390) smil_status_volume_pane_g1_ParamLimits

0xdd24,	// (0x0002a3a3) smil_status_volume_pane_g2_ParamLimits

0x2f2a,	// (0x0001f5a9) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0002bc8a) smil_status_volume_pane_g_ParamLimits

0xde7f,	// (0x0002a4fe) bg_popup_window_pane_cp07_ParamLimits

0xde8d,	// (0x0002a50c) blid_firmament_pane

0x7379,	// (0x000239f8) aid_size_cell_gallery_ParamLimits

0x7379,	// (0x000239f8) aid_size_cell_gallery

0x7387,	// (0x00023a06) grid_gallery_pane_ParamLimits

0x7387,	// (0x00023a06) grid_gallery_pane

0x7397,	// (0x00023a16) cell_gallery_pane_ParamLimits

0x7397,	// (0x00023a16) cell_gallery_pane

0xdfb0,	// (0x0002a62f) bg_cell_gallery_focus_pane_ParamLimits

0xdfb0,	// (0x0002a62f) bg_cell_gallery_focus_pane

0xdfc2,	// (0x0002a641) cell_gallery_pane_g1_ParamLimits

0xdfc2,	// (0x0002a641) cell_gallery_pane_g1

0x73e5,	// (0x00023a64) cell_gallery_pane_g2_ParamLimits

0x73e5,	// (0x00023a64) cell_gallery_pane_g2

0x73f2,	// (0x00023a71) cell_gallery_pane_g3_ParamLimits

0x73f2,	// (0x00023a71) cell_gallery_pane_g3

0xdfce,	// (0x0002a64d) cell_gallery_pane_g4_ParamLimits

0xdfce,	// (0x0002a64d) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0002bd38) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0002bd38) cell_gallery_pane_g

0xdfda,	// (0x0002a659) bg_cell_gallery_focus_pane_g1

0xdfe2,	// (0x0002a661) bg_cell_gallery_focus_pane_g2

0xdfea,	// (0x0002a669) bg_cell_gallery_focus_pane_g3

0xdff2,	// (0x0002a671) bg_cell_gallery_focus_pane_g4

0xdffa,	// (0x0002a679) bg_cell_gallery_focus_pane_g5

0xe002,	// (0x0002a681) bg_cell_gallery_focus_pane_g6

0xe00a,	// (0x0002a689) bg_cell_gallery_focus_pane_g7

0xe012,	// (0x0002a691) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0002bd41) bg_cell_gallery_focus_pane_g

0xe01a,	// (0x0002a699) aid_firma_cardinal

0xe02e,	// (0x0002a6ad) blid_firmament_pane_t1

0xe045,	// (0x0002a6c4) blid_firmament_pane_t2

0xe05c,	// (0x0002a6db) blid_firmament_pane_t3

0xe073,	// (0x0002a6f2) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0002bd52) blid_firmament_pane_t

0xe08a,	// (0x0002a709) blid_sat_info_pane

0xe09a,	// (0x0002a719) blid_sat_info_pane_g1

0xe09a,	// (0x0002a719) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0002bd5b) blid_sat_info_pane_g

0xe0a4,	// (0x0002a723) blid_sat_info_pane_t1

0xe0b2,	// (0x0002a731) smil2_volume_content_pane

0xe0bb,	// (0x0002a73a) smil2_volume_pane_g1

0xde66,	// (0x0002a4e5) smil2_volume_content_pane_g1

0xe0c3,	// (0x0002a742) smil2_volume_content_pane_g2

0xe0cc,	// (0x0002a74b) smil2_volume_content_pane_g3

0xe0d5,	// (0x0002a754) smil2_volume_content_pane_g4

0xe0de,	// (0x0002a75d) smil2_volume_content_pane_g5

0xe0e7,	// (0x0002a766) smil2_volume_content_pane_g6

0xe0f0,	// (0x0002a76f) smil2_volume_content_pane_g7

0xe0f9,	// (0x0002a778) smil2_volume_content_pane_g8

0xe102,	// (0x0002a781) smil2_volume_content_pane_g9

0xe10b,	// (0x0002a78a) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0002bd60) smil2_volume_content_pane_g

0x4753,	// (0x00020dd2) cale_week_day_heading_pane_t1_ParamLimits

0x476e,	// (0x00020ded) cale_week_day_heading_pane_t2_ParamLimits

0x4789,	// (0x00020e08) cale_week_day_heading_pane_t3_ParamLimits

0x47a4,	// (0x00020e23) cale_week_day_heading_pane_t4_ParamLimits

0x47bf,	// (0x00020e3e) cale_week_day_heading_pane_t5_ParamLimits

0x47da,	// (0x00020e59) cale_week_day_heading_pane_t6_ParamLimits

0x47f5,	// (0x00020e74) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0002b850) cale_week_day_heading_pane_t_ParamLimits

0xbd49,	// (0x000283c8) bg_cale_side_pane_ParamLimits

0x2b69,	// (0x0001f1e8) cale_week_time_pane_t1_ParamLimits

0x2b83,	// (0x0001f202) cale_week_time_pane_t2_ParamLimits

0x2b9d,	// (0x0001f21c) cale_week_time_pane_t3_ParamLimits

0x2bb7,	// (0x0001f236) cale_week_time_pane_t4_ParamLimits

0x2bd1,	// (0x0001f250) cale_week_time_pane_t5_ParamLimits

0x2beb,	// (0x0001f26a) cale_week_time_pane_t6_ParamLimits

0x2c09,	// (0x0001f288) cale_week_time_pane_t7_ParamLimits

0x2c2b,	// (0x0001f2aa) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0002b85f) cale_week_time_pane_t_ParamLimits

0x4810,	// (0x00020e8f) cell_cale_week_pane_g2_ParamLimits

0xbd49,	// (0x000283c8) bg_cale_side_pane_cp01_ParamLimits

0x5b61,	// (0x000221e0) cale_month_week_pane_t1_ParamLimits

0x5b7a,	// (0x000221f9) cale_month_week_pane_t2_ParamLimits

0x5b93,	// (0x00022212) cale_month_week_pane_t3_ParamLimits

0x5bac,	// (0x0002222b) cale_month_week_pane_t4_ParamLimits

0x5bc5,	// (0x00022244) cale_month_week_pane_t5_ParamLimits

0x5be6,	// (0x00022265) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0002b934) cale_month_week_pane_t_ParamLimits

0x2c59,	// (0x0001f2d8) cell_cale_month_pane_g1_ParamLimits

0x295d,	// (0x0001efdc) main_cale_event_viewer_pane

0xb494,	// (0x00027b13) listscroll_cale_event_viewer_pane

0xe114,	// (0x0002a793) list_cale_ev_pane

0xe11c,	// (0x0002a79b) scroll_pane_cp023

0xe128,	// (0x0002a7a7) field_cale_ev_pane_ParamLimits

0xe128,	// (0x0002a7a7) field_cale_ev_pane

0xe146,	// (0x0002a7c5) field_cale_ev_content_pane_ParamLimits

0xe146,	// (0x0002a7c5) field_cale_ev_content_pane

0xe152,	// (0x0002a7d1) field_cale_ev_pane_g1_ParamLimits

0xe152,	// (0x0002a7d1) field_cale_ev_pane_g1

0xe15e,	// (0x0002a7dd) field_cale_ev_pane_g2_ParamLimits

0xe15e,	// (0x0002a7dd) field_cale_ev_pane_g2

0xe176,	// (0x0002a7f5) field_cale_ev_pane_g3_ParamLimits

0xe176,	// (0x0002a7f5) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0002bd75) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0002bd75) field_cale_ev_pane_g

0xe18e,	// (0x0002a80d) field_cale_ev_pane_t1_ParamLimits

0xe18e,	// (0x0002a80d) field_cale_ev_pane_t1

0xe1a5,	// (0x0002a824) field_cale_ev_content_pane_t1_ParamLimits

0xe1a5,	// (0x0002a824) field_cale_ev_content_pane_t1

0xc981,	// (0x00029000) bg_button_pane_cp01

0x44e4,	// (0x00020b63) listscroll_cale_week_pane_ParamLimits

0xbcf4,	// (0x00028373) popup_toolbar_window_cp01

0xbd1a,	// (0x00028399) listscroll_cale_week_pane_t1_ParamLimits

0x44e4,	// (0x00020b63) listscroll_cale_day_pane_ParamLimits

0xbcf4,	// (0x00028373) popup_toolbar_window_cp02

0xc13c,	// (0x000287bb) listscroll_cale_day_pane_t1_ParamLimits

0x44e4,	// (0x00020b63) main_cale_month_pane_ParamLimits

0x2eed,	// (0x0001f56c) popup_toolbar_window_cp03_ParamLimits

0x2eed,	// (0x0001f56c) popup_toolbar_window_cp03

0x68e2,	// (0x00022f61) main_image_pane_g2_ParamLimits

0x68e2,	// (0x00022f61) main_image_pane_g2

0x68ee,	// (0x00022f6d) main_image_pane_g3_ParamLimits

0x68ee,	// (0x00022f6d) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0002bb66) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0002bb66) main_image_pane_g

0xcb14,	// (0x00029193) main_image_pane_t1_ParamLimits

0x68fa,	// (0x00022f79) main_image_pane_t2_ParamLimits

0x68fa,	// (0x00022f79) main_image_pane_t2

0x690c,	// (0x00022f8b) main_image_pane_t3_ParamLimits

0x690c,	// (0x00022f8b) main_image_pane_t3

0x691e,	// (0x00022f9d) main_image_pane_t4_ParamLimits

0x691e,	// (0x00022f9d) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0002bb6d) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0002bb6d) main_image_pane_t

0x6930,	// (0x00022faf) popup_image_details_window_cp01

0x693a,	// (0x00022fb9) popup_toobar_trans_pane_cp01_ParamLimits

0x693a,	// (0x00022fb9) popup_toobar_trans_pane_cp01

0x2e3d,	// (0x0001f4bc) popup_image_details_window_ParamLimits

0x2e3d,	// (0x0001f4bc) popup_image_details_window

0x2e4b,	// (0x0001f4ca) popup_image_focus_window

0x2f4c,	// (0x0001f5cb) camera2_autofocus_pane_ParamLimits

0x2f4c,	// (0x0001f5cb) camera2_autofocus_pane

0xb494,	// (0x00027b13) bg_popup_sub_pane_cp06

0xe1c3,	// (0x0002a842) popup_image_focus_window_g1

0xe1cb,	// (0x0002a84a) popup_image_focus_window_g2

0xe1d3,	// (0x0002a852) popup_image_focus_window_g3

0xe1db,	// (0x0002a85a) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0002bd7c) popup_image_focus_window_g

0xe1e3,	// (0x0002a862) popup_image_focus_window_t1

0xe1f1,	// (0x0002a870) popup_image_focus_window_t2

0xe201,	// (0x0002a880) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0002bd85) popup_image_focus_window_t

0xe20f,	// (0x0002a88e) camera2_autofocus_pane_g1

0xbba5,	// (0x00028224) bg_tb_trans_pane_cp01

0xe21d,	// (0x0002a89c) popup_image_details_window_g1

0xe230,	// (0x0002a8af) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0002bd97) popup_image_details_window_g

0xe259,	// (0x0002a8d8) popup_image_details_window_t1

0xe26b,	// (0x0002a8ea) popup_image_details_window_t2

0xe284,	// (0x0002a903) popup_image_details_window_t3

0xe298,	// (0x0002a917) popup_image_details_window_t4

0xe2b3,	// (0x0002a932) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0002bd9e) popup_image_details_window_t

0xbbcb,	// (0x0002824a) bg_calc_paper_pane_ParamLimits

0x295d,	// (0x0001efdc) grid_highlight_pane_cp013

0x2a3e,	// (0x0001f0bd) list_calc_pane_ParamLimits

0x2a50,	// (0x0001f0cf) scroll_pane_cp024

0xbbdf,	// (0x0002825e) bg_calc_display_pane_ParamLimits

0x2a58,	// (0x0001f0d7) calc_display_pane_t1_ParamLimits

0x2a6d,	// (0x0001f0ec) calc_display_pane_t2_ParamLimits

0x2a82,	// (0x0001f101) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0002b7d0) calc_display_pane_t_ParamLimits

0x2aeb,	// (0x0001f16a) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0002b7ed) cell_calc_pane_g

0x2af4,	// (0x0001f173) cell_calc_pane_t1

0xbc3e,	// (0x000282bd) grid_highlight_pane_cp02_ParamLimits

0xbc54,	// (0x000282d3) toolbar_button_pane_cp01_ParamLimits

0xbc54,	// (0x000282d3) toolbar_button_pane_cp01

0xcb59,	// (0x000291d8) temp_image_control_pane_ParamLimits

0xcb59,	// (0x000291d8) temp_image_control_pane

0x2db5,	// (0x0001f434) main_mp3_pane

0xe2cd,	// (0x0002a94c) temp_image_control_pane_g1_ParamLimits

0xe2cd,	// (0x0002a94c) temp_image_control_pane_g1

0xe2db,	// (0x0002a95a) temp_image_control_pane_g2_ParamLimits

0xe2db,	// (0x0002a95a) temp_image_control_pane_g2

0xe2ed,	// (0x0002a96c) temp_image_control_pane_g3_ParamLimits

0xe2ed,	// (0x0002a96c) temp_image_control_pane_g3

0x742f,	// (0x00023aae) temp_image_control_pane_g4_ParamLimits

0x742f,	// (0x00023aae) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0002bda9) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0002bda9) temp_image_control_pane_g

0xe2cd,	// (0x0002a94c) main_mp3_pane_g1

0x7440,	// (0x00023abf) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0002bdb2) main_mp3_pane_g

0xe330,	// (0x0002a9af) main_mp3_pane_t1

0xbdac,	// (0x0002842b) main_camera_pane_g8_ParamLimits

0xbdac,	// (0x0002842b) main_camera_pane_g8

0x4a93,	// (0x00021112) main_video_pane_g7_ParamLimits

0x4a93,	// (0x00021112) main_video_pane_g7

0x3094,	// (0x0001f713) main_camera2_pane_t7_ParamLimits

0x3094,	// (0x0001f713) main_camera2_pane_t7

0xbef4,	// (0x00028573) scroll_pane_cp025_ParamLimits

0xbef4,	// (0x00028573) scroll_pane_cp025

0xbf08,	// (0x00028587) scroll_pane_cp026_ParamLimits

0xbf08,	// (0x00028587) scroll_pane_cp026

0xbf17,	// (0x00028596) wml_content_pane_ParamLimits

0x295d,	// (0x0001efdc) main_touch_calib_pane

0x74e4,	// (0x00023b63) main_touch_calib_pane_g1

0x74f0,	// (0x00023b6f) main_touch_calib_pane_g2

0x74fc,	// (0x00023b7b) main_touch_calib_pane_g3

0x7508,	// (0x00023b87) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0002bdd0) main_touch_calib_pane_g

0x7514,	// (0x00023b93) main_touch_calib_pane_t1

0x752d,	// (0x00023bac) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0002bdd9) main_touch_calib_pane_t

0xc699,	// (0x00028d18) mup_progress_pane_cp02

0xc6ce,	// (0x00028d4d) navi_pane_g1

0xc789,	// (0x00028e08) navi_pane_mp_t3

0x2db5,	// (0x0001f434) main_mp3_pane_ParamLimits

0x6e67,	// (0x000234e6) navi_pane_ParamLimits

0xe2cd,	// (0x0002a94c) main_mp3_pane_g1_ParamLimits

0x7440,	// (0x00023abf) main_mp3_pane_g2_ParamLimits

0x744c,	// (0x00023acb) main_mp3_pane_g3_ParamLimits

0x744c,	// (0x00023acb) main_mp3_pane_g3

0x7458,	// (0x00023ad7) main_mp3_pane_g4_ParamLimits

0x7458,	// (0x00023ad7) main_mp3_pane_g4

0xe2fd,	// (0x0002a97c) main_mp3_pane_g5_ParamLimits

0xe2fd,	// (0x0002a97c) main_mp3_pane_g5

0xe30b,	// (0x0002a98a) main_mp3_pane_g6_ParamLimits

0xe30b,	// (0x0002a98a) main_mp3_pane_g6

0xe318,	// (0x0002a997) main_mp3_pane_g7_ParamLimits

0xe318,	// (0x0002a997) main_mp3_pane_g7

0xe324,	// (0x0002a9a3) main_mp3_pane_g8_ParamLimits

0xe324,	// (0x0002a9a3) main_mp3_pane_g8

0xf733,	// (0x0002bdb2) main_mp3_pane_g_ParamLimits

0x7464,	// (0x00023ae3) main_mp3_pane_t2

0x7474,	// (0x00023af3) main_mp3_pane_t3

0xe33e,	// (0x0002a9bd) main_mp3_pane_t4

0xe34c,	// (0x0002a9cb) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0002bdc3) main_mp3_pane_t

0xe35a,	// (0x0002a9d9) mup_progress_pane_cp01

0x2713,	// (0x0001ed92) aid_zoom_text_secondary2

0xe114,	// (0x0002a793) list_cale_ev2_pane

0xe11c,	// (0x0002a79b) scroll_pane_cp023_ParamLimits

0x7588,	// (0x00023c07) field_cale_ev2_pane_ParamLimits

0x7588,	// (0x00023c07) field_cale_ev2_pane

0x75b1,	// (0x00023c30) field_cale_ev2_pane_g1_ParamLimits

0x75b1,	// (0x00023c30) field_cale_ev2_pane_g1

0x75bd,	// (0x00023c3c) field_cale_ev2_pane_g2_ParamLimits

0x75bd,	// (0x00023c3c) field_cale_ev2_pane_g2

0x75d5,	// (0x00023c54) field_cale_ev2_pane_g3_ParamLimits

0x75d5,	// (0x00023c54) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0002bde4) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0002bde4) field_cale_ev2_pane_g

0x75ed,	// (0x00023c6c) field_cale_ev2_pane_t1_ParamLimits

0x75ed,	// (0x00023c6c) field_cale_ev2_pane_t1

0x7604,	// (0x00023c83) field_cale_ev2_pane_t2_ParamLimits

0x7604,	// (0x00023c83) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0002bded) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0002bded) field_cale_ev2_pane_t

0x67c2,	// (0x00022e41) main_postcard_pane_g5_ParamLimits

0x67c2,	// (0x00022e41) main_postcard_pane_g5

0x67d0,	// (0x00022e4f) main_postcard_pane_g6_ParamLimits

0x67d0,	// (0x00022e4f) main_postcard_pane_g6

0x48dd,	// (0x00020f5c) camera2_autofocus_pane_cp_ParamLimits

0x48dd,	// (0x00020f5c) camera2_autofocus_pane_cp

0x2db5,	// (0x0001f434) main_mup3_pane

0x7638,	// (0x00023cb7) main_mup3_pane_g1_ParamLimits

0x7638,	// (0x00023cb7) main_mup3_pane_g1

0x7659,	// (0x00023cd8) main_mup3_pane_g2_ParamLimits

0x7659,	// (0x00023cd8) main_mup3_pane_g2

0x76d1,	// (0x00023d50) main_mup3_pane_g3_ParamLimits

0x76d1,	// (0x00023d50) main_mup3_pane_g3

0x7714,	// (0x00023d93) main_mup3_pane_g4_ParamLimits

0x7714,	// (0x00023d93) main_mup3_pane_g4

0x7757,	// (0x00023dd6) main_mup3_pane_g5_ParamLimits

0x7757,	// (0x00023dd6) main_mup3_pane_g5

0x779a,	// (0x00023e19) main_mup3_pane_g6_ParamLimits

0x779a,	// (0x00023e19) main_mup3_pane_g6

0xe38e,	// (0x0002aa0d) main_mup3_pane_g7_ParamLimits

0xe38e,	// (0x0002aa0d) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0002bdfd) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0002bdfd) main_mup3_pane_g

0x7810,	// (0x00023e8f) main_mup3_pane_t1_ParamLimits

0x7810,	// (0x00023e8f) main_mup3_pane_t1

0x787f,	// (0x00023efe) main_mup3_pane_t2_ParamLimits

0x787f,	// (0x00023efe) main_mup3_pane_t2

0x7948,	// (0x00023fc7) main_mup3_pane_t4_ParamLimits

0x7948,	// (0x00023fc7) main_mup3_pane_t4

0x7996,	// (0x00024015) main_mup3_pane_t5_ParamLimits

0x7996,	// (0x00024015) main_mup3_pane_t5

0x7a46,	// (0x000240c5) main_mup3_pane_t6_ParamLimits

0x7a46,	// (0x000240c5) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0002be0e) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0002be0e) main_mup3_pane_t

0x7af2,	// (0x00024171) mup3_progress_pane_ParamLimits

0x7af2,	// (0x00024171) mup3_progress_pane

0x7b70,	// (0x000241ef) popup_mup3_control_window_ParamLimits

0x7b70,	// (0x000241ef) popup_mup3_control_window

0xe39c,	// (0x0002aa1b) popup_mup3_text_window

0x7b89,	// (0x00024208) mup3_progress_pane_t1

0x7ba8,	// (0x00024227) mup3_progress_pane_t2

0xe3a4,	// (0x0002aa23) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0002be1b) mup3_progress_pane_t

0xe3c1,	// (0x0002aa40) mup_progress_pane_cp03

0xb494,	// (0x00027b13) bg_tb_trans_pane_cp04

0x7bc7,	// (0x00024246) mup3_volume_pane

0x7bcf,	// (0x0002424e) popup_mup3_control_window_g1

0x7bd8,	// (0x00024257) mup3_volume_pane_g1

0x7be1,	// (0x00024260) mup3_volume_pane_g2

0x7bea,	// (0x00024269) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0002be22) mup3_volume_pane_g

0xb494,	// (0x00027b13) bg_tb_trans_pane_cp03

0xe3d1,	// (0x0002aa50) popup_mup3_text_window_g1

0xe3d9,	// (0x0002aa58) popup_mup3_text_window_t1

0xbc27,	// (0x000282a6) list_calc_item_pane_g1_ParamLimits

0xdde4,	// (0x0002a463) mup_volume_pane_cp_g1

0x7546,	// (0x00023bc5) main_touch_calib_pane_t3

0x755c,	// (0x00023bdb) main_touch_calib_pane_t4

0x7572,	// (0x00023bf1) main_touch_calib_pane_t5

0x26cb,	// (0x0001ed4a) aid_cell_size_toolbar2

0x26d3,	// (0x0001ed52) aid_popup3_width_pane

0x2713,	// (0x0001ed92) aid_zoom_text_msg_primary

0x48bc,	// (0x00020f3b) vorec_t7

0xbbeb,	// (0x0002826a) bg_calc_paper_pane_g1_ParamLimits

0xbbf7,	// (0x00028276) bg_calc_paper_pane_g2_ParamLimits

0xbc03,	// (0x00028282) bg_calc_paper_pane_g3_ParamLimits

0xbc0f,	// (0x0002828e) bg_calc_paper_pane_g4_ParamLimits

0xbc1b,	// (0x0002829a) bg_calc_paper_pane_g5_ParamLimits

0x4396,	// (0x00020a15) bg_calc_paper_pane_g6_ParamLimits

0x43a7,	// (0x00020a26) bg_calc_paper_pane_g7_ParamLimits

0x43b8,	// (0x00020a37) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0002b7d7) bg_calc_paper_pane_g_ParamLimits

0x43c9,	// (0x00020a48) calc_bg_paper_pane_g9_ParamLimits

0x49c4,	// (0x00021043) image_qvga_pane_ParamLimits

0x49c4,	// (0x00021043) image_qvga_pane

0xbb0c,	// (0x0002818b) bg_popup_sub_pane_cp04_ParamLimits

0xca90,	// (0x0002910f) popup_mup_playback_window_g1_ParamLimits

0xca9c,	// (0x0002911b) popup_mup_playback_window_t1_ParamLimits

0xcab1,	// (0x00029130) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0002bb61) popup_mup_playback_window_t_ParamLimits

0x70b9,	// (0x00023738) main_mup2_pane_g3_ParamLimits

0x70b9,	// (0x00023738) main_mup2_pane_g3

0x4d90,	// (0x0002140f) popup_toolbar_window_cp04

0xce93,	// (0x00029512) popup_call2_audio_second_window_g3_ParamLimits

0xce93,	// (0x00029512) popup_call2_audio_second_window_g3

0xd29d,	// (0x0002991c) popup_call2_audio_first_window_g4_ParamLimits

0xd29d,	// (0x0002991c) popup_call2_audio_first_window_g4

0xd91c,	// (0x00029f9b) popup_call2_audio_in_window_g4_ParamLimits

0xd91c,	// (0x00029f9b) popup_call2_audio_in_window_g4

0x68d5,	// (0x00022f54) aid_area_sk_bg_cut_ParamLimits

0x68d5,	// (0x00022f54) aid_area_sk_bg_cut

0xcac6,	// (0x00029145) aid_area_sk_bg_cut_2_ParamLimits

0xcac6,	// (0x00029145) aid_area_sk_bg_cut_2

0x73d5,	// (0x00023a54) aid_placing_details_win

0x73dd,	// (0x00023a5c) aid_placing_details_win_2

0xe20f,	// (0x0002a88e) camera2_autofocus_pane_g1_ParamLimits

0x28f5,	// (0x0001ef74) popup_fixed_preview_cale_window_ParamLimits

0x28f5,	// (0x0001ef74) popup_fixed_preview_cale_window

0xc821,	// (0x00028ea0) navi_slider_pane_g3

0xc82a,	// (0x00028ea9) navi_slider_pane_g4

0xc833,	// (0x00028eb2) navi_slider_pane_g5

0xc821,	// (0x00028ea0) navi_slider_pane_g6

0x2d2f,	// (0x0001f3ae) navi_slider_pane_g7

0xc946,	// (0x00028fc5) mup_scale_pane_g3

0xc94f,	// (0x00028fce) mup_scale_pane_g4

0xc958,	// (0x00028fd7) mup_scale_pane_g5

0x664f,	// (0x00022cce) mup_scale_pane_g6

0x6658,	// (0x00022cd7) mup_scale_pane_g7

0xc821,	// (0x00028ea0) cams2_slider_pane_g3

0xde6f,	// (0x0002a4ee) cams2_slider_pane_g4

0x3206,	// (0x0001f885) cams2_slider_pane_g5

0xc821,	// (0x00028ea0) cams2_slider_pane_g6

0x320e,	// (0x0001f88d) cams2_slider_pane_g7

0xe09a,	// (0x0002a719) camera2_autofocus_pane_cp_g1

0xdc7d,	// (0x0002a2fc) bg_popup_preview_window_pane_cp02_ParamLimits

0xdc7d,	// (0x0002a2fc) bg_popup_preview_window_pane_cp02

0xe3e7,	// (0x0002aa66) list_fp_cale_pane_ParamLimits

0xe3e7,	// (0x0002aa66) list_fp_cale_pane

0xe3f3,	// (0x0002aa72) popup_fixed_preview_cale_window_t1_ParamLimits

0xe3f3,	// (0x0002aa72) popup_fixed_preview_cale_window_t1

0x7bf3,	// (0x00024272) popup_fixed_preview_cale_window_t2_ParamLimits

0x7bf3,	// (0x00024272) popup_fixed_preview_cale_window_t2

0x7c08,	// (0x00024287) popup_fixed_preview_cale_window_t3_ParamLimits

0x7c08,	// (0x00024287) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0002be29) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0002be29) popup_fixed_preview_cale_window_t

0x7c1d,	// (0x0002429c) list_single_fp_cale_pane_ParamLimits

0x7c1d,	// (0x0002429c) list_single_fp_cale_pane

0xe411,	// (0x0002aa90) list_single_fp_cale_pane_g1_ParamLimits

0xe411,	// (0x0002aa90) list_single_fp_cale_pane_g1

0xe41d,	// (0x0002aa9c) list_single_fp_cale_pane_g2_ParamLimits

0xe41d,	// (0x0002aa9c) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0002be30) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0002be30) list_single_fp_cale_pane_g

0xe436,	// (0x0002aab5) list_single_fp_cale_pane_t1_ParamLimits

0xe436,	// (0x0002aab5) list_single_fp_cale_pane_t1

0xe448,	// (0x0002aac7) list_single_fp_cale_pane_t2_ParamLimits

0xe448,	// (0x0002aac7) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0002be37) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0002be37) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x295d,	// (0x0001efdc) main_dialer_pane

0x7c30,	// (0x000242af) aid_cell_size_keypad

0x7c3a,	// (0x000242b9) dialer_ne_pane

0x7c44,	// (0x000242c3) grid_dialer_command_1_pane

0x7c4c,	// (0x000242cb) grid_dialer_command_2_pane

0x7c54,	// (0x000242d3) grid_dialer_keypad_pane

0x7c66,	// (0x000242e5) bg_popup_call_pane_cp06_ParamLimits

0x7c66,	// (0x000242e5) bg_popup_call_pane_cp06

0x7c72,	// (0x000242f1) dialer_ne_clear_pane_ParamLimits

0x7c72,	// (0x000242f1) dialer_ne_clear_pane

0xe47b,	// (0x0002aafa) dialer_ne_pane_g1

0xe483,	// (0x0002ab02) dialer_ne_pane_t1_ParamLimits

0xe483,	// (0x0002ab02) dialer_ne_pane_t1

0x7c7e,	// (0x000242fd) dialer_ne_pane_t2_ParamLimits

0x7c7e,	// (0x000242fd) dialer_ne_pane_t2

0x7c9b,	// (0x0002431a) dialer_ne_pane_t3_ParamLimits

0x7c9b,	// (0x0002431a) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0002be3c) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0002be3c) dialer_ne_pane_t

0x7cbf,	// (0x0002433e) dialer_ne_pane_t3_copy1_ParamLimits

0x7cbf,	// (0x0002433e) dialer_ne_pane_t3_copy1

0x7ce3,	// (0x00024362) cell_dialer_keypad_pane_ParamLimits

0x7ce3,	// (0x00024362) cell_dialer_keypad_pane

0x7cfa,	// (0x00024379) cell_dialer_command_1_pane_ParamLimits

0x7cfa,	// (0x00024379) cell_dialer_command_1_pane

0x7d10,	// (0x0002438f) cell_dialer_command_2_pane_ParamLimits

0x7d10,	// (0x0002438f) cell_dialer_command_2_pane

0xe495,	// (0x0002ab14) bg_button_pane_cp02_ParamLimits

0xe495,	// (0x0002ab14) bg_button_pane_cp02

0x7d1f,	// (0x0002439e) cell_dialer_keypad_pane_g1_ParamLimits

0x7d1f,	// (0x0002439e) cell_dialer_keypad_pane_g1

0xe495,	// (0x0002ab14) bg_button_pane_cp03_ParamLimits

0xe495,	// (0x0002ab14) bg_button_pane_cp03

0x7d34,	// (0x000243b3) cell_dialer_command_1_pane_g1_ParamLimits

0x7d34,	// (0x000243b3) cell_dialer_command_1_pane_g1

0xe4a1,	// (0x0002ab20) bg_button_pane_cp04

0x7d48,	// (0x000243c7) cell_dialer_command_2_pane_g1

0xbda4,	// (0x00028423) bg_button_pane_cp06

0xe4a9,	// (0x0002ab28) dialer_ne_clear_pane_g1

0xc6da,	// (0x00028d59) navi_pane_g2

0xc708,	// (0x00028d87) navi_pane_g3

0x0002,

0xf3e5,	// (0x0002ba64) navi_pane_g

0xc797,	// (0x00028e16) navi_pane_mv_g2

0xc7be,	// (0x00028e3d) navi_pane_mv_g5

0x61eb,	// (0x0002286a) navi_pane_mv_t1

0xbbdf,	// (0x0002825e) main_clock2_pane

0x7d88,	// (0x00024407) main_clock2_list_pane_ParamLimits

0x7d88,	// (0x00024407) main_clock2_list_pane

0x7db0,	// (0x0002442f) main_clock2_pane_t1_ParamLimits

0x7db0,	// (0x0002442f) main_clock2_pane_t1

0x7dd2,	// (0x00024451) main_clock2_pane_t2_ParamLimits

0x7dd2,	// (0x00024451) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0002be48) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0002be48) main_clock2_pane_t

0x7e2d,	// (0x000244ac) popup_clock_analogue_window_cp03_ParamLimits

0x7e2d,	// (0x000244ac) popup_clock_analogue_window_cp03

0x7e4b,	// (0x000244ca) popup_clock_digital_window_cp02_ParamLimits

0x7e4b,	// (0x000244ca) popup_clock_digital_window_cp02

0x7eb8,	// (0x00024537) main_clock2_list_single_pane_ParamLimits

0x7eb8,	// (0x00024537) main_clock2_list_single_pane

0xbda4,	// (0x00028423) list_highlight_pane_cp05

0xe4e7,	// (0x0002ab66) main_clock2_list_single_pane_t1

0x4d90,	// (0x0002140f) popup_toolbar_window_cp04_ParamLimits

0x73ff,	// (0x00023a7e) camera2_autofocus_pane_g2_ParamLimits

0x73ff,	// (0x00023a7e) camera2_autofocus_pane_g2

0x740b,	// (0x00023a8a) camera2_autofocus_pane_g3_ParamLimits

0x740b,	// (0x00023a8a) camera2_autofocus_pane_g3

0x7417,	// (0x00023a96) camera2_autofocus_pane_g4_ParamLimits

0x7417,	// (0x00023a96) camera2_autofocus_pane_g4

0x7423,	// (0x00023aa2) camera2_autofocus_pane_g5_ParamLimits

0x7423,	// (0x00023aa2) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0002bd8c) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0002bd8c) camera2_autofocus_pane_g

0xe36e,	// (0x0002a9ed) camera2_autofocus_pane_cp_g2

0xe376,	// (0x0002a9f5) camera2_autofocus_pane_cp_g3

0xe37e,	// (0x0002a9fd) camera2_autofocus_pane_cp_g4

0xe386,	// (0x0002aa05) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0002bdf2) camera2_autofocus_pane_cp_g

0x7c5e,	// (0x000242dd) popup_dialer_spcha_window

0xb494,	// (0x00027b13) bg_popup_sub_pane_cp07

0xe4f5,	// (0x0002ab74) list_spcha_pane

0xe4fd,	// (0x0002ab7c) list_single_spcha_pane_ParamLimits

0xe4fd,	// (0x0002ab7c) list_single_spcha_pane

0xb494,	// (0x00027b13) list_highlight_pane_cp06

0xe50e,	// (0x0002ab8d) list_single_spcha_pane_t1

0xd6c6,	// (0x00029d45) popup_call2_audio_out_window_g4_ParamLimits

0xd6c6,	// (0x00029d45) popup_call2_audio_out_window_g4

0x295d,	// (0x0001efdc) main_imed2_pane

0x2e53,	// (0x0001f4d2) popup_imed_adjust2_window

0x2e66,	// (0x0001f4e5) popup_imed_trans_window_ParamLimits

0x2e66,	// (0x0001f4e5) popup_imed_trans_window

0xded8,	// (0x0002a557) popup_blid_sat_info2_window_t1

0xdee6,	// (0x0002a565) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0002bd21) popup_blid_sat_info2_window_t

0x7eca,	// (0x00024549) aid_size_cell_colour_35

0x7ee4,	// (0x00024563) aid_size_cell_colour_112

0x7efb,	// (0x0002457a) aid_size_cell_effect

0xbba5,	// (0x00028224) bg_tb_trans_pane_cp02

0xc7fe,	// (0x00028e7d) heading_imed_pane

0x7f15,	// (0x00024594) listscroll_imed_pane

0xe51c,	// (0x0002ab9b) heading_imed_pane_g1

0xe524,	// (0x0002aba3) heading_imed_pane_t1

0xe532,	// (0x0002abb1) grid_imed_colour_35_pane_ParamLimits

0xe532,	// (0x0002abb1) grid_imed_colour_35_pane

0x7f21,	// (0x000245a0) grid_imed_effect_pane

0xe549,	// (0x0002abc8) list_imed_aspect_pane

0x7f31,	// (0x000245b0) scroll_pane_cp027_ParamLimits

0x7f31,	// (0x000245b0) scroll_pane_cp027

0x7f3d,	// (0x000245bc) cell_imed_effect_pane_ParamLimits

0x7f3d,	// (0x000245bc) cell_imed_effect_pane

0xe551,	// (0x0002abd0) cell_imed_colour_pane_ParamLimits

0xe551,	// (0x0002abd0) cell_imed_colour_pane

0xe593,	// (0x0002ac12) cell_imed_colour_pane_g1_ParamLimits

0xe593,	// (0x0002ac12) cell_imed_colour_pane_g1

0xe5a4,	// (0x0002ac23) hgihlgiht_grid_pane_cp016_ParamLimits

0xe5a4,	// (0x0002ac23) hgihlgiht_grid_pane_cp016

0x7f55,	// (0x000245d4) cell_imed_effect_pane_g1

0x7f5d,	// (0x000245dc) grid_highlight_pane_cp017

0xe5b5,	// (0x0002ac34) list_imed_single_pane_ParamLimits

0xe5b5,	// (0x0002ac34) list_imed_single_pane

0xb494,	// (0x00027b13) list_highlight_pane_cp07

0xe5ca,	// (0x0002ac49) list_imed_aspect_pane_comp1_t1

0xdc89,	// (0x0002a308) bg_tb_trans_pane_cp05

0xe5ec,	// (0x0002ac6b) popup_imed_adjust2_window_g1

0xe613,	// (0x0002ac92) popup_imed_adjust2_window_t1

0xe62b,	// (0x0002acaa) slider_imed_adjust_pane

0xe63f,	// (0x0002acbe) slider_imed_adjust_pane_g1

0xe64f,	// (0x0002acce) slider_imed_adjust_pane_g2

0xe65f,	// (0x0002acde) slider_imed_adjust_pane_g3

0xe670,	// (0x0002acef) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0002be65) slider_imed_adjust_pane_g

0x7f66,	// (0x000245e5) aid_size_cell_clipart2

0x7f72,	// (0x000245f1) grid_imed_clipart_pane

0xe681,	// (0x0002ad00) scroll_pane_cp031

0x7f7c,	// (0x000245fb) cell_imed_clipart_pane_ParamLimits

0x7f7c,	// (0x000245fb) cell_imed_clipart_pane

0x7f9e,	// (0x0002461d) cell_imed_clipart_pane_g1

0xb494,	// (0x00027b13) grid_highlight_pane_cp014

0x7d94,	// (0x00024413) main_clock2_pane_g1_ParamLimits

0x7d94,	// (0x00024413) main_clock2_pane_g1

0x7e63,	// (0x000244e2) aid_call2_pane_cp10

0x7e75,	// (0x000244f4) aid_call_pane_cp10

0xc63b,	// (0x00028cba) popup_clock_analogue_window_cp10_g1

0xc63b,	// (0x00028cba) popup_clock_analogue_window_cp10_g2

0x7e87,	// (0x00024506) popup_clock_analogue_window_cp10_g3

0x7e87,	// (0x00024506) popup_clock_analogue_window_cp10_g4

0xc63b,	// (0x00028cba) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0002be53) popup_clock_analogue_window_cp10_g

0x7e99,	// (0x00024518) popup_clock_analogue_window_cp10_t1

0x3217,	// (0x0001f896) clock_digital_number_pane_cp10_ParamLimits

0x3217,	// (0x0001f896) clock_digital_number_pane_cp10

0x322f,	// (0x0001f8ae) clock_digital_number_pane_cp11_ParamLimits

0x322f,	// (0x0001f8ae) clock_digital_number_pane_cp11

0x3247,	// (0x0001f8c6) clock_digital_number_pane_cp12_ParamLimits

0x3247,	// (0x0001f8c6) clock_digital_number_pane_cp12

0x325f,	// (0x0001f8de) clock_digital_number_pane_cp13_ParamLimits

0x325f,	// (0x0001f8de) clock_digital_number_pane_cp13

0x3277,	// (0x0001f8f6) clock_digital_separator_pane_cp10_ParamLimits

0x3277,	// (0x0001f8f6) clock_digital_separator_pane_cp10

0x328f,	// (0x0001f90e) popup_clock_digital_window_cp02_t1_ParamLimits

0x328f,	// (0x0001f90e) popup_clock_digital_window_cp02_t1

0xbb04,	// (0x00028183) clock_digital_number_pane_cp10_g1

0xbb04,	// (0x00028183) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0002be6e) clock_digital_number_pane_cp10_g

0xbb04,	// (0x00028183) clock_digital_separator_pane_cp10_g1

0xbb04,	// (0x00028183) clock_digital_separator_pane_g2_cp10

0xc7c6,	// (0x00028e45) navi_pane_vded_g4

0xc7cf,	// (0x00028e4e) navi_pane_vded_g5

0xc7d8,	// (0x00028e57) navi_pane_vded_t1

0x295d,	// (0x0001efdc) main_vded_pane

0x7fa7,	// (0x00024626) main_vded_pane_g1

0x7fb3,	// (0x00024632) main_vded_pane_g2

0x7fbd,	// (0x0002463c) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0002be73) main_vded_pane_g

0x7fc7,	// (0x00024646) main_vded_pane_t1

0x7fd5,	// (0x00024654) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0002be7a) main_vded_pane_t

0x7fe3,	// (0x00024662) vded_slider_pane

0x7fed,	// (0x0002466c) vded_video_pane

0xe689,	// (0x0002ad08) vded_video_pane_g1

0x7ff7,	// (0x00024676) vded_video_pane_g2

0xe09a,	// (0x0002a719) vded_video_pane_g3

0x0002,

0xf800,	// (0x0002be7f) vded_video_pane_g

0xe693,	// (0x0002ad12) vded_slider_pane_g1

0xdde4,	// (0x0002a463) vded_slider_pane_g2

0xe69c,	// (0x0002ad1b) vded_slider_pane_g3

0xe6a5,	// (0x0002ad24) vded_slider_pane_g4

0xe6ae,	// (0x0002ad2d) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0002be86) vded_slider_pane_g

0x7b62,	// (0x000241e1) mup3_rocker_pane_ParamLimits

0x7b62,	// (0x000241e1) mup3_rocker_pane

0x8000,	// (0x0002467f) mup3_control_keys_pane_g1

0x8008,	// (0x00024687) mup3_control_keys_pane_g2

0x8010,	// (0x0002468f) mup3_control_keys_pane_g3

0x8018,	// (0x00024697) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0002be91) mup3_control_keys_pane_g

0x291d,	// (0x0001ef9c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x291d,	// (0x0001ef9c) popup_toolbar2_fixed_window_cp01

0x7b7c,	// (0x000241fb) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7b7c,	// (0x000241fb) popup_toolbar2_fixed_window_cp02

0xd005,	// (0x00029684) popup_call2_audio_second_window_t4_ParamLimits

0xd005,	// (0x00029684) popup_call2_audio_second_window_t4

0xd533,	// (0x00029bb2) popup_call2_audio_first_window_t6_ParamLimits

0xd533,	// (0x00029bb2) popup_call2_audio_first_window_t6

0xd7c9,	// (0x00029e48) popup_call2_audio_out_window_t6_ParamLimits

0xd7c9,	// (0x00029e48) popup_call2_audio_out_window_t6

0x295d,	// (0x0001efdc) main_vitu_pane

0x8028,	// (0x000246a7) aid_size_cell_itu_ParamLimits

0x8028,	// (0x000246a7) aid_size_cell_itu

0xeb97,	// (0x0002b216) bg_popup_window_pane_cp08_ParamLimits

0xeb97,	// (0x0002b216) bg_popup_window_pane_cp08

0x8036,	// (0x000246b5) field_vitu_entry_pane_ParamLimits

0x8036,	// (0x000246b5) field_vitu_entry_pane

0x8045,	// (0x000246c4) grid_vitu_function_pane_ParamLimits

0x8045,	// (0x000246c4) grid_vitu_function_pane

0x8055,	// (0x000246d4) grid_vitu_itu_pane_ParamLimits

0x8055,	// (0x000246d4) grid_vitu_itu_pane

0x8065,	// (0x000246e4) cell_vitu_itu_pane_ParamLimits

0x8065,	// (0x000246e4) cell_vitu_itu_pane

0x807a,	// (0x000246f9) cell_vitu_function_pane_ParamLimits

0x807a,	// (0x000246f9) cell_vitu_function_pane

0xbba5,	// (0x00028224) bg_popup_sub_pane_cp08_ParamLimits

0xbba5,	// (0x00028224) bg_popup_sub_pane_cp08

0x808c,	// (0x0002470b) field_vitu_entry_pane_t1_ParamLimits

0x808c,	// (0x0002470b) field_vitu_entry_pane_t1

0xe6cf,	// (0x0002ad4e) field_vitu_entry_pane_t2_ParamLimits

0xe6cf,	// (0x0002ad4e) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0002be9f) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0002be9f) field_vitu_entry_pane_t

0xe6ec,	// (0x0002ad6b) bg_button_pane_cp05_ParamLimits

0xe6ec,	// (0x0002ad6b) bg_button_pane_cp05

0x80a8,	// (0x00024727) cell_vitu_itu_pane_g1

0x80c0,	// (0x0002473f) cell_vitu_itu_pane_t1_ParamLimits

0x80c0,	// (0x0002473f) cell_vitu_itu_pane_t1

0x80d2,	// (0x00024751) cell_vitu_itu_pane_t2_ParamLimits

0x80d2,	// (0x00024751) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0002bea4) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0002bea4) cell_vitu_itu_pane_t

0xe6fa,	// (0x0002ad79) bg_button_pane_cp07

0x8107,	// (0x00024786) cell_vitu_function_pane_g1

0x2a36,	// (0x0001f0b5) main_calc_pane_g1

0x2707,	// (0x0001ed86) aid_visual_content_pane

0x295d,	// (0x0001efdc) main_vradio_pane

0x8110,	// (0x0002478f) main_vradio_pane_g1_ParamLimits

0x8110,	// (0x0002478f) main_vradio_pane_g1

0xe704,	// (0x0002ad83) main_vradio_pane_g2_ParamLimits

0xe704,	// (0x0002ad83) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0002beab) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0002beab) main_vradio_pane_g

0x8120,	// (0x0002479f) main_vradio_pane_t1_ParamLimits

0x8120,	// (0x0002479f) main_vradio_pane_t1

0x8132,	// (0x000247b1) main_vradio_pane_t2_ParamLimits

0x8132,	// (0x000247b1) main_vradio_pane_t2

0xe711,	// (0x0002ad90) main_vradio_pane_t3_ParamLimits

0xe711,	// (0x0002ad90) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0002beb0) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0002beb0) main_vradio_pane_t

0x8144,	// (0x000247c3) vradio_rocker_control_pane_ParamLimits

0x8144,	// (0x000247c3) vradio_rocker_control_pane

0x8150,	// (0x000247cf) vradio_station_info_pane_ParamLimits

0x8150,	// (0x000247cf) vradio_station_info_pane

0xe725,	// (0x0002ada4) vradio_frequency_info_pane_ParamLimits

0xe725,	// (0x0002ada4) vradio_frequency_info_pane

0xe09a,	// (0x0002a719) vradio_station_info_pane_g1

0xe734,	// (0x0002adb3) vradio_station_info_pane_t1_ParamLimits

0xe734,	// (0x0002adb3) vradio_station_info_pane_t1

0xe756,	// (0x0002add5) vradio_station_info_pane_t2_ParamLimits

0xe756,	// (0x0002add5) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0002beb7) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0002beb7) vradio_station_info_pane_t

0xe768,	// (0x0002ade7) vradio_tuning_pane

0xe770,	// (0x0002adef) vradio_rocker_control_pane_g1

0xe778,	// (0x0002adf7) vradio_rocker_control_pane_g2

0xe780,	// (0x0002adff) vradio_rocker_control_pane_g3

0xe788,	// (0x0002ae07) vradio_rocker_control_pane_g4

0xe790,	// (0x0002ae0f) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0002bebc) vradio_rocker_control_pane_g

0x815f,	// (0x000247de) vradio_frequency_info_pane_g1

0xe798,	// (0x0002ae17) vradio_frequency_info_pane_t1_ParamLimits

0xe798,	// (0x0002ae17) vradio_frequency_info_pane_t1

0x8169,	// (0x000247e8) vradio_tuning_pane_g1

0x8172,	// (0x000247f1) vradio_tuning_pane_t1

0x2723,	// (0x0001eda2) area_side_right_pane_ParamLimits

0x2723,	// (0x0001eda2) area_side_right_pane

0xdc44,	// (0x0002a2c3) status_small_pane_g1

0xdc4c,	// (0x0002a2cb) status_small_pane_g2

0xdc55,	// (0x0002a2d4) status_small_pane_g3

0xdc5e,	// (0x0002a2dd) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0002bc77) status_small_pane_g

0xdc67,	// (0x0002a2e6) status_small_pane_t1

0x295d,	// (0x0001efdc) main_video3_pane

0xe7ac,	// (0x0002ae2b) cams_zoom_vslider_pane

0xe7b4,	// (0x0002ae33) image3_wide_pane_ParamLimits

0xe7b4,	// (0x0002ae33) image3_wide_pane

0xe7ce,	// (0x0002ae4d) image3_wide_small_pane

0xe7da,	// (0x0002ae59) main_video3_pane_g1_ParamLimits

0xe7da,	// (0x0002ae59) main_video3_pane_g1

0xe7f6,	// (0x0002ae75) main_video3_pane_g2_ParamLimits

0xe7f6,	// (0x0002ae75) main_video3_pane_g2

0x0001,

0xf848,	// (0x0002bec7) main_video3_pane_g_ParamLimits

0xf848,	// (0x0002bec7) main_video3_pane_g

0xe812,	// (0x0002ae91) main_video3_pane_t1_ParamLimits

0xe812,	// (0x0002ae91) main_video3_pane_t1

0xe83d,	// (0x0002aebc) main_video3_pane_t2_ParamLimits

0xe83d,	// (0x0002aebc) main_video3_pane_t2

0xe868,	// (0x0002aee7) main_video3_pane_t3_ParamLimits

0xe868,	// (0x0002aee7) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0002becc) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0002becc) main_video3_pane_t

0xe895,	// (0x0002af14) cams_zoom_vslider_pane_g1

0xe89e,	// (0x0002af1d) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0002bed3) cams_zoom_vslider_pane_g

0xe8a6,	// (0x0002af25) small_slider_vertical_pane

0xe09a,	// (0x0002a719) small_slider_vertical_pane_g1

0xe09a,	// (0x0002a719) small_slider_vertical_pane_g2

0xe8ae,	// (0x0002af2d) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0002bed8) small_slider_vertical_pane_g

0x295d,	// (0x0001efdc) main_hwr_training_pane

0xe8b7,	// (0x0002af36) hwr_training_instruct_pane_ParamLimits

0xe8b7,	// (0x0002af36) hwr_training_instruct_pane

0x8181,	// (0x00024800) hwr_training_navi_pane_ParamLimits

0x8181,	// (0x00024800) hwr_training_navi_pane

0x819b,	// (0x0002481a) hwr_training_write_pane_ParamLimits

0x819b,	// (0x0002481a) hwr_training_write_pane

0xb494,	// (0x00027b13) bg_frame_shadow_pane

0xe8ee,	// (0x0002af6d) hwr_training_write_pane_g1

0xe8f6,	// (0x0002af75) hwr_training_write_pane_g2

0xe8fe,	// (0x0002af7d) hwr_training_write_pane_g3

0xe906,	// (0x0002af85) hwr_training_write_pane_g4

0xe90e,	// (0x0002af8d) hwr_training_write_pane_g5

0xe916,	// (0x0002af95) hwr_training_write_pane_g6

0xe91e,	// (0x0002af9d) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0002bedf) hwr_training_write_pane_g

0x32ae,	// (0x0001f92d) hwr_training_navi_pane_g1_ParamLimits

0x32ae,	// (0x0001f92d) hwr_training_navi_pane_g1

0x32c0,	// (0x0001f93f) hwr_training_navi_pane_g2_ParamLimits

0x32c0,	// (0x0001f93f) hwr_training_navi_pane_g2

0x32d2,	// (0x0001f951) hwr_training_navi_pane_g3_ParamLimits

0x32d2,	// (0x0001f951) hwr_training_navi_pane_g3

0x32e2,	// (0x0001f961) hwr_training_navi_pane_g4_ParamLimits

0x32e2,	// (0x0001f961) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0002beee) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0002beee) hwr_training_navi_pane_g

0x32fc,	// (0x0001f97b) hwr_training_navi_pane_t1

0x81d3,	// (0x00024852) list_single_hwr_training_instruct_pane_ParamLimits

0x81d3,	// (0x00024852) list_single_hwr_training_instruct_pane

0xe926,	// (0x0002afa5) list_single_hwr_training_instruct_pane_t1

0xdfda,	// (0x0002a659) bg_frame_shadow_pane_g1

0xe935,	// (0x0002afb4) bg_frame_shadow_pane_g2

0xe93d,	// (0x0002afbc) bg_frame_shadow_pane_g3

0xe945,	// (0x0002afc4) bg_frame_shadow_pane_g4

0xe94d,	// (0x0002afcc) bg_frame_shadow_pane_g5

0xe955,	// (0x0002afd4) bg_frame_shadow_pane_g6

0xe95d,	// (0x0002afdc) bg_frame_shadow_pane_g7

0xbc98,	// (0x00028317) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0002bef9) bg_frame_shadow_pane_g

0x295d,	// (0x0001efdc) main_video_tele_dialer_pane

0x330a,	// (0x0001f989) aid_size_cell_video_keypad_ParamLimits

0x330a,	// (0x0001f989) aid_size_cell_video_keypad

0x331a,	// (0x0001f999) grid_video_dialer_keypad_pane_ParamLimits

0x331a,	// (0x0001f999) grid_video_dialer_keypad_pane

0x334e,	// (0x0001f9cd) video_down_pane_cp_ParamLimits

0x334e,	// (0x0001f9cd) video_down_pane_cp

0x335c,	// (0x0001f9db) cell_video_dialer_keypad_pane_ParamLimits

0x335c,	// (0x0001f9db) cell_video_dialer_keypad_pane

0xe965,	// (0x0002afe4) bg_button_pane_cp08_ParamLimits

0xe965,	// (0x0002afe4) bg_button_pane_cp08

0x8214,	// (0x00024893) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8214,	// (0x00024893) cell_video_dialer_keypad_pane_g1

0x7b56,	// (0x000241d5) mup3_rocker2_pane_ParamLimits

0x7b56,	// (0x000241d5) mup3_rocker2_pane

0xe09a,	// (0x0002a719) mup3_rocker2_pane_g1

0x2dc3,	// (0x0001f442) main_dialer2_pane

0x295d,	// (0x0001efdc) main_mp4_pane

0x3379,	// (0x0001f9f8) main_mp4_pane_g1_ParamLimits

0x3379,	// (0x0001f9f8) main_mp4_pane_g1

0x3387,	// (0x0001fa06) main_mp4_pane_g2_ParamLimits

0x3387,	// (0x0001fa06) main_mp4_pane_g2

0x3395,	// (0x0001fa14) main_mp4_pane_g3_ParamLimits

0x3395,	// (0x0001fa14) main_mp4_pane_g3

0x33da,	// (0x0001fa59) main_mp4_pane_g4_ParamLimits

0x33da,	// (0x0001fa59) main_mp4_pane_g4

0x3402,	// (0x0001fa81) main_mp4_pane_g5_ParamLimits

0x3402,	// (0x0001fa81) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0002bf19) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0002bf19) main_mp4_pane_g

0x3452,	// (0x0001fad1) main_mp4_pane_t1_ParamLimits

0x3452,	// (0x0001fad1) main_mp4_pane_t1

0x34ae,	// (0x0001fb2d) main_mp4_pane_t2_ParamLimits

0x34ae,	// (0x0001fb2d) main_mp4_pane_t2

0xe971,	// (0x0002aff0) main_mp4_pane_t3_ParamLimits

0xe971,	// (0x0002aff0) main_mp4_pane_t3

0x3500,	// (0x0001fb7f) main_mp4_pane_t4_ParamLimits

0x3500,	// (0x0001fb7f) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0002bf26) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0002bf26) main_mp4_pane_t

0x3544,	// (0x0001fbc3) mp4_progress_pane_ParamLimits

0x3544,	// (0x0001fbc3) mp4_progress_pane

0x358e,	// (0x0001fc0d) mp4_rocker_pane_ParamLimits

0x358e,	// (0x0001fc0d) mp4_rocker_pane

0xe999,	// (0x0002b018) mp4_progress_pane_t1

0xe9b2,	// (0x0002b031) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0002bf2f) mp4_progress_pane_t

0xe9cb,	// (0x0002b04a) mup_progress_pane_cp04

0x0168,	// (0x0001c7e7) mp4_rocker_pane_g1

0x35ae,	// (0x0001fc2d) aid_cell_size_keypad2_ParamLimits

0x35ae,	// (0x0001fc2d) aid_cell_size_keypad2

0x35be,	// (0x0001fc3d) dialer2_ne_pane_ParamLimits

0x35be,	// (0x0001fc3d) dialer2_ne_pane

0x35cc,	// (0x0001fc4b) grid_dialer2_keypad_pane_ParamLimits

0x35cc,	// (0x0001fc4b) grid_dialer2_keypad_pane

0xeba5,	// (0x0002b224) bg_popup_call_pane_cp07_ParamLimits

0xeba5,	// (0x0002b224) bg_popup_call_pane_cp07

0x824b,	// (0x000248ca) dialer2_ne_pane_t1_ParamLimits

0x824b,	// (0x000248ca) dialer2_ne_pane_t1

0x35dc,	// (0x0001fc5b) cell_dialer2_keypad_pane_ParamLimits

0x35dc,	// (0x0001fc5b) cell_dialer2_keypad_pane

0xe9e9,	// (0x0002b068) bg_button_pane_pane_cp04_ParamLimits

0xe9e9,	// (0x0002b068) bg_button_pane_pane_cp04

0x8270,	// (0x000248ef) cell_dialer2_keypad_pane_g1_ParamLimits

0x8270,	// (0x000248ef) cell_dialer2_keypad_pane_g1

0x4c52,	// (0x000212d1) aid_placing_vt_set_content_ParamLimits

0x4c52,	// (0x000212d1) aid_placing_vt_set_content

0x4c7e,	// (0x000212fd) aid_placing_vt_set_title_ParamLimits

0x4c7e,	// (0x000212fd) aid_placing_vt_set_title

0x295d,	// (0x0001efdc) main_image3_pane

0x3623,	// (0x0001fca2) area_side_right_pane_cp01_ParamLimits

0x3623,	// (0x0001fca2) area_side_right_pane_cp01

0x3650,	// (0x0001fccf) main_image3_pane_g1_ParamLimits

0x3650,	// (0x0001fccf) main_image3_pane_g1

0x365e,	// (0x0001fcdd) main_image3_pane_g2_ParamLimits

0x365e,	// (0x0001fcdd) main_image3_pane_g2

0x3677,	// (0x0001fcf6) main_image3_pane_g3_ParamLimits

0x3677,	// (0x0001fcf6) main_image3_pane_g3

0x3690,	// (0x0001fd0f) main_image3_pane_g4_ParamLimits

0x3690,	// (0x0001fd0f) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0002bf3e) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0002bf3e) main_image3_pane_g

0x36a9,	// (0x0001fd28) main_image3_pane_t1_ParamLimits

0x36a9,	// (0x0001fd28) main_image3_pane_t1

0x36ce,	// (0x0001fd4d) main_image3_pane_t2_ParamLimits

0x36ce,	// (0x0001fd4d) main_image3_pane_t2

0x36ed,	// (0x0001fd6c) main_image3_pane_t3_ParamLimits

0x36ed,	// (0x0001fd6c) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0002bf47) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0002bf47) main_image3_pane_t

0xeb97,	// (0x0002b216) grid_sctrl_middle_pane_cp01_ParamLimits

0xeb97,	// (0x0002b216) grid_sctrl_middle_pane_cp01

0x82d8,	// (0x00024957) cell_sctrl_middle_pane_cp01_ParamLimits

0x82d8,	// (0x00024957) cell_sctrl_middle_pane_cp01

0x82e9,	// (0x00024968) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x82e9,	// (0x00024968) cell_sctrl_middle_pane_cp01_g1

0x295d,	// (0x0001efdc) main_call4_pane

0x374e,	// (0x0001fdcd) aid_size_button_call4_ParamLimits

0x374e,	// (0x0001fdcd) aid_size_button_call4

0x377e,	// (0x0001fdfd) call4_windows_pane_ParamLimits

0x377e,	// (0x0001fdfd) call4_windows_pane

0x3798,	// (0x0001fe17) grid_call4_button_pane_ParamLimits

0x3798,	// (0x0001fe17) grid_call4_button_pane

0xe9f5,	// (0x0002b074) call4_windows_conf_pane

0xea0c,	// (0x0002b08b) popup_call4_audio_first_window_ParamLimits

0xea0c,	// (0x0002b08b) popup_call4_audio_first_window

0xea54,	// (0x0002b0d3) popup_call4_audio_second_window_ParamLimits

0xea54,	// (0x0002b0d3) popup_call4_audio_second_window

0xea6d,	// (0x0002b0ec) popup_call4_audio_wait_window_ParamLimits

0xea6d,	// (0x0002b0ec) popup_call4_audio_wait_window

0x37bc,	// (0x0001fe3b) cell_call4_button_pane_ParamLimits

0x37bc,	// (0x0001fe3b) cell_call4_button_pane

0x82f6,	// (0x00024975) bg_button_pane_cp09_ParamLimits

0x82f6,	// (0x00024975) bg_button_pane_cp09

0x37e1,	// (0x0001fe60) cell_call4_button_pane_g1_ParamLimits

0x37e1,	// (0x0001fe60) cell_call4_button_pane_g1

0x8302,	// (0x00024981) cell_call4_button_pane_t1_ParamLimits

0x8302,	// (0x00024981) cell_call4_button_pane_t1

0xea83,	// (0x0002b102) popup_call4_audio_conf_window_ParamLimits

0xea83,	// (0x0002b102) popup_call4_audio_conf_window

0x7b89,	// (0x00024208) mup3_progress_pane_t1_ParamLimits

0x7ba8,	// (0x00024227) mup3_progress_pane_t2_ParamLimits

0xe3a4,	// (0x0002aa23) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0002be1b) mup3_progress_pane_t_ParamLimits

0xe3c1,	// (0x0002aa40) mup_progress_pane_cp03_ParamLimits

0x8020,	// (0x0002469f) mup3_control_keys_pane_g4_copy1

0x3572,	// (0x0001fbf1) mp4_rocker2_pane_ParamLimits

0x3572,	// (0x0001fbf1) mp4_rocker2_pane

0xea97,	// (0x0002b116) mp4_rocker2_pane_g1

0xea9f,	// (0x0002b11e) mp4_rocker2_pane_g2

0x3820,	// (0x0001fe9f) mp4_rocker2_pane_g3

0x3828,	// (0x0001fea7) mp4_rocker2_pane_g4

0x3830,	// (0x0001feaf) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0002bf50) mp4_rocker2_pane_g

0x295d,	// (0x0001efdc) main_camera4_pane

0x295d,	// (0x0001efdc) main_video4_pane

0x332a,	// (0x0001f9a9) main_video_tele_dialer_pane_t1_ParamLimits

0x332a,	// (0x0001f9a9) main_video_tele_dialer_pane_t1

0x333c,	// (0x0001f9bb) main_video_tele_dialer_pane_t2_ParamLimits

0x333c,	// (0x0001f9bb) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0002bf0a) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0002bf0a) main_video_tele_dialer_pane_t

0x3850,	// (0x0001fecf) cam4_autofocus_pane_ParamLimits

0x3850,	// (0x0001fecf) cam4_autofocus_pane

0x386a,	// (0x0001fee9) cam4_image_uncrop_pane_ParamLimits

0x386a,	// (0x0001fee9) cam4_image_uncrop_pane

0x3881,	// (0x0001ff00) cam4_indicators_pane_ParamLimits

0x3881,	// (0x0001ff00) cam4_indicators_pane

0x389d,	// (0x0001ff1c) main_camera4_pane_g1_ParamLimits

0x389d,	// (0x0001ff1c) main_camera4_pane_g1

0x38a9,	// (0x0001ff28) main_camera4_pane_g2_ParamLimits

0x38a9,	// (0x0001ff28) main_camera4_pane_g2

0x38a9,	// (0x0001ff28) main_camera4_pane_g3_ParamLimits

0x38a9,	// (0x0001ff28) main_camera4_pane_g3

0x38b5,	// (0x0001ff34) main_camera4_pane_g4_ParamLimits

0x38b5,	// (0x0001ff34) main_camera4_pane_g4

0x38c1,	// (0x0001ff40) main_camera4_pane_g5_ParamLimits

0x38c1,	// (0x0001ff40) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0002bf5b) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0002bf5b) main_camera4_pane_g

0x38db,	// (0x0001ff5a) main_camera4_pane_t1_ParamLimits

0x38db,	// (0x0001ff5a) main_camera4_pane_t1

0x38ff,	// (0x0001ff7e) bg_tb_trans_pane_cp06

0x3915,	// (0x0001ff94) cam4_indicators_pane_g1

0x3926,	// (0x0001ffa5) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0002bf76) cam4_indicators_pane_g

0x3944,	// (0x0001ffc3) cam4_indicators_pane_t1

0x396e,	// (0x0001ffed) main_video4_pane_g1_ParamLimits

0x396e,	// (0x0001ffed) main_video4_pane_g1

0x397a,	// (0x0001fff9) main_video4_pane_g2_ParamLimits

0x397a,	// (0x0001fff9) main_video4_pane_g2

0x3986,	// (0x00020005) main_video4_pane_g3_ParamLimits

0x3986,	// (0x00020005) main_video4_pane_g3

0x3992,	// (0x00020011) main_video4_pane_g4_ParamLimits

0x3992,	// (0x00020011) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0002bf7d) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0002bf7d) main_video4_pane_g

0x39b2,	// (0x00020031) vid4_indicators_pane_ParamLimits

0x39b2,	// (0x00020031) vid4_indicators_pane

0x39d1,	// (0x00020050) video4_image_uncrop_cif_pane_ParamLimits

0x39d1,	// (0x00020050) video4_image_uncrop_cif_pane

0x39e0,	// (0x0002005f) video4_image_uncrop_nhd_pane_ParamLimits

0x39e0,	// (0x0002005f) video4_image_uncrop_nhd_pane

0x386a,	// (0x0001fee9) video4_image_uncrop_vga_pane_ParamLimits

0x386a,	// (0x0001fee9) video4_image_uncrop_vga_pane

0x2db5,	// (0x0001f434) bg_tb_trans_pane_cp07

0x39f7,	// (0x00020076) vid4_indicators_pane_g1

0x3a0b,	// (0x0002008a) vid4_indicators_pane_g2

0x3a1f,	// (0x0002009e) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0002bf88) vid4_indicators_pane_g

0x3a4e,	// (0x000200cd) vid4_indicators_pane_t1

0x8338,	// (0x000249b7) cam4_autofocus_pane_g1

0x8340,	// (0x000249bf) cam4_autofocus_pane_g2

0x8348,	// (0x000249c7) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0002bf93) cam4_autofocus_pane_g

0x8350,	// (0x000249cf) cam4_autofocus_pane_g3_copy1

0x81f8,	// (0x00024877) video_down_pane_cp_t1

0x8206,	// (0x00024885) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0002bf0f) video_down_pane_cp_t

0x294f,	// (0x0001efce) popup_vitu2_window_ParamLimits

0x294f,	// (0x0001efce) popup_vitu2_window

0x3a65,	// (0x000200e4) aid_size_cell2_itu2_ParamLimits

0x3a65,	// (0x000200e4) aid_size_cell2_itu2

0x3a87,	// (0x00020106) aid_size_cell_itu2_ParamLimits

0x3a87,	// (0x00020106) aid_size_cell_itu2

0x3acb,	// (0x0002014a) bg_popup_window_pane_cp09_ParamLimits

0x3acb,	// (0x0002014a) bg_popup_window_pane_cp09

0x3ad9,	// (0x00020158) field_vitu2_entry_pane_ParamLimits

0x3ad9,	// (0x00020158) field_vitu2_entry_pane

0x3af9,	// (0x00020178) grid_vitu2_function_pane_ParamLimits

0x3af9,	// (0x00020178) grid_vitu2_function_pane

0x3b3d,	// (0x000201bc) grid_vitu2_itu_pane_ParamLimits

0x3b3d,	// (0x000201bc) grid_vitu2_itu_pane

0x3bb9,	// (0x00020238) cell_vitu2_itu_pane_ParamLimits

0x3bb9,	// (0x00020238) cell_vitu2_itu_pane

0x3bd2,	// (0x00020251) cell_vitu2_function_pane_ParamLimits

0x3bd2,	// (0x00020251) cell_vitu2_function_pane

0xeaa7,	// (0x0002b126) bg_popup_call_pane_cp08_ParamLimits

0xeaa7,	// (0x0002b126) bg_popup_call_pane_cp08

0xeabe,	// (0x0002b13d) field_vitu2_entry_pane_g1

0xeaca,	// (0x0002b149) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0002bf9a) field_vitu2_entry_pane_g

0x8358,	// (0x000249d7) field_vitu2_entry_pane_t1_ParamLimits

0x8358,	// (0x000249d7) field_vitu2_entry_pane_t1

0xeae4,	// (0x0002b163) field_vitu2_entry_pane_t2_ParamLimits

0xeae4,	// (0x0002b163) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0002bfa1) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0002bfa1) field_vitu2_entry_pane_t

0x3c13,	// (0x00020292) bg_button_pane_cp010_ParamLimits

0x3c13,	// (0x00020292) bg_button_pane_cp010

0x3c21,	// (0x000202a0) cell_vitu2_itu_pane_g1

0x3c41,	// (0x000202c0) cell_vitu2_itu_pane_t1_ParamLimits

0x3c41,	// (0x000202c0) cell_vitu2_itu_pane_t1

0x3c8d,	// (0x0002030c) cell_vitu2_itu_pane_t2_ParamLimits

0x3c8d,	// (0x0002030c) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0002bfab) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0002bfab) cell_vitu2_itu_pane_t

0x2db5,	// (0x0001f434) bg_button_pane_cp011

0x3d55,	// (0x000203d4) cell_vitu2_function_pane_g1

0x295d,	// (0x0001efdc) main_myfav_hc_pane

0x372f,	// (0x0001fdae) popup_image3_note_pane_ParamLimits

0x372f,	// (0x0001fdae) popup_image3_note_pane

0x373d,	// (0x0001fdbc) popup_image3_tool_bar_pane_ParamLimits

0x373d,	// (0x0001fdbc) popup_image3_tool_bar_pane

0x3d03,	// (0x00020382) cell_vitu2_itu_pane_t3_ParamLimits

0x3d03,	// (0x00020382) cell_vitu2_itu_pane_t3

0xb494,	// (0x00027b13) bg_popup_trans_pane

0xeb09,	// (0x0002b188) grid_image3_tool_bar_pane

0xeb13,	// (0x0002b192) bg_popup_trans_pane_g1

0xbffd,	// (0x0002867c) bg_popup_trans_pane_g2

0xeb1b,	// (0x0002b19a) bg_popup_trans_pane_g3

0xeb23,	// (0x0002b1a2) bg_popup_trans_pane_g4

0xeb2b,	// (0x0002b1aa) bg_popup_trans_pane_g5

0xeb33,	// (0x0002b1b2) bg_popup_trans_pane_g6

0xeb3b,	// (0x0002b1ba) bg_popup_trans_pane_g7

0xeb43,	// (0x0002b1c2) bg_popup_trans_pane_g8

0xbfdd,	// (0x0002865c) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0002bfb2) bg_popup_trans_pane_g

0xeb4b,	// (0x0002b1ca) cell_image3_tool_bar_pane_ParamLimits

0xeb4b,	// (0x0002b1ca) cell_image3_tool_bar_pane

0xe09a,	// (0x0002a719) cell_image3_tool_bar_pane_g1

0xb494,	// (0x00027b13) bg_popup_trans_pane_cp1

0xeb5f,	// (0x0002b1de) popup_image3_note_pane_t1

0xeb6d,	// (0x0002b1ec) popup_image3_note_pane_t2

0xeb7b,	// (0x0002b1fa) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0002bfc5) popup_image3_note_pane_t

0xeb89,	// (0x0002b208) popup_image3_note_pane_t3_copy1

0x8388,	// (0x00024a07) bg_myfav_hc_instruction_pane_ParamLimits

0x8388,	// (0x00024a07) bg_myfav_hc_instruction_pane

0x83a0,	// (0x00024a1f) cell_myfav_contact_pane_ParamLimits

0x83a0,	// (0x00024a1f) cell_myfav_contact_pane

0x83ba,	// (0x00024a39) cell_myfav_contact_pane_cp1_ParamLimits

0x83ba,	// (0x00024a39) cell_myfav_contact_pane_cp1

0x83d2,	// (0x00024a51) cell_myfav_contact_pane_cp2_ParamLimits

0x83d2,	// (0x00024a51) cell_myfav_contact_pane_cp2

0x83ea,	// (0x00024a69) cell_myfav_contact_pane_cp3_ParamLimits

0x83ea,	// (0x00024a69) cell_myfav_contact_pane_cp3

0x8401,	// (0x00024a80) cell_myfav_contact_pane_cp4_ParamLimits

0x8401,	// (0x00024a80) cell_myfav_contact_pane_cp4

0x8417,	// (0x00024a96) cell_myfav_contact_pane_cp5_ParamLimits

0x8417,	// (0x00024a96) cell_myfav_contact_pane_cp5

0x842b,	// (0x00024aaa) cell_myfav_contact_pane_cp6_ParamLimits

0x842b,	// (0x00024aaa) cell_myfav_contact_pane_cp6

0x843f,	// (0x00024abe) cell_myfav_contact_pane_cp7_ParamLimits

0x843f,	// (0x00024abe) cell_myfav_contact_pane_cp7

0xebb3,	// (0x0002b232) listscroll_gen_pane_cp05

0x8457,	// (0x00024ad6) main_myfav_hc_pane_g1_ParamLimits

0x8457,	// (0x00024ad6) main_myfav_hc_pane_g1

0x846d,	// (0x00024aec) main_myfav_hc_pane_g2_ParamLimits

0x846d,	// (0x00024aec) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0002bfcc) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0002bfcc) main_myfav_hc_pane_g

0x849b,	// (0x00024b1a) main_myfav_hc_pane_t1_ParamLimits

0x849b,	// (0x00024b1a) main_myfav_hc_pane_t1

0xebbc,	// (0x0002b23b) main_myfav_hc_pane_t2_ParamLimits

0xebbc,	// (0x0002b23b) main_myfav_hc_pane_t2

0xebce,	// (0x0002b24d) main_myfav_hc_pane_t3_ParamLimits

0xebce,	// (0x0002b24d) main_myfav_hc_pane_t3

0x84b2,	// (0x00024b31) main_myfav_hc_pane_t4_ParamLimits

0x84b2,	// (0x00024b31) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0002bfd3) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0002bfd3) main_myfav_hc_pane_t

0xe09a,	// (0x0002a719) bg_myfav_hc_instruction_pane_g1

0xebe0,	// (0x0002b25f) cell_myfav_contact_pane_g1_ParamLimits

0xebe0,	// (0x0002b25f) cell_myfav_contact_pane_g1

0xebe0,	// (0x0002b25f) cell_myfav_contact_pane_g2_ParamLimits

0xebe0,	// (0x0002b25f) cell_myfav_contact_pane_g2

0xebec,	// (0x0002b26b) cell_myfav_contact_pane_g3_ParamLimits

0xebec,	// (0x0002b26b) cell_myfav_contact_pane_g3

0xe38e,	// (0x0002aa0d) cell_myfav_contact_pane_g4_ParamLimits

0xe38e,	// (0x0002aa0d) cell_myfav_contact_pane_g4

0xebf9,	// (0x0002b278) cell_myfav_contact_pane_g5_ParamLimits

0xebf9,	// (0x0002b278) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0002bfde) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0002bfde) cell_myfav_contact_pane_g

0x8483,	// (0x00024b02) main_myfav_hc_pane_g3_ParamLimits

0x8483,	// (0x00024b02) main_myfav_hc_pane_g3

0x2858,	// (0x0001eed7) popup_adpt_find_window

0x84dc,	// (0x00024b5b) afind_page_pane_ParamLimits

0x84dc,	// (0x00024b5b) afind_page_pane

0x84e9,	// (0x00024b68) aid_size_cell_afind_ParamLimits

0x84e9,	// (0x00024b68) aid_size_cell_afind

0x8503,	// (0x00024b82) bg_popup_sub_pane_cp09_ParamLimits

0x8503,	// (0x00024b82) bg_popup_sub_pane_cp09

0x8510,	// (0x00024b8f) find_pane_cp01_ParamLimits

0x8510,	// (0x00024b8f) find_pane_cp01

0xec05,	// (0x0002b284) grid_afind_control_pane_ParamLimits

0xec05,	// (0x0002b284) grid_afind_control_pane

0x851d,	// (0x00024b9c) grid_afind_pane_ParamLimits

0x851d,	// (0x00024b9c) grid_afind_pane

0x8539,	// (0x00024bb8) cell_afind_pane_ParamLimits

0x8539,	// (0x00024bb8) cell_afind_pane

0xe09a,	// (0x0002a719) afind_page_pane_g1

0x8581,	// (0x00024c00) afind_page_pane_g2

0x858a,	// (0x00024c09) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0002bfe9) afind_page_pane_g

0x8593,	// (0x00024c12) afind_page_pane_t1

0xec19,	// (0x0002b298) cell_afind_grid_control_pane_ParamLimits

0xec19,	// (0x0002b298) cell_afind_grid_control_pane

0xe9e9,	// (0x0002b068) bg_button_pane_cp69_ParamLimits

0xe9e9,	// (0x0002b068) bg_button_pane_cp69

0x85b3,	// (0x00024c32) cell_afind_pane_g1_ParamLimits

0x85b3,	// (0x00024c32) cell_afind_pane_g1

0x85c0,	// (0x00024c3f) cell_afind_pane_t1_ParamLimits

0x85c0,	// (0x00024c3f) cell_afind_pane_t1

0xbdf6,	// (0x00028475) bg_button_pane_cp72

0xec28,	// (0x0002b2a7) cell_afind_grid_control_pane_g1

0x69fc,	// (0x0002307b) aid_image_placing_area_ParamLimits

0x69fc,	// (0x0002307b) aid_image_placing_area

0xe6b7,	// (0x0002ad36) field_vitu_entry_pane_g1_ParamLimits

0xe6b7,	// (0x0002ad36) field_vitu_entry_pane_g1

0xe6c3,	// (0x0002ad42) field_vitu_entry_pane_g2_ParamLimits

0xe6c3,	// (0x0002ad42) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0002be9a) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0002be9a) field_vitu_entry_pane_g

0x80a8,	// (0x00024727) cell_vitu_itu_pane_g1_ParamLimits

0x80ea,	// (0x00024769) cell_vitu_itu_pane_t3_ParamLimits

0x80ea,	// (0x00024769) cell_vitu_itu_pane_t3

0xe999,	// (0x0002b018) mp4_progress_pane_t1_ParamLimits

0xe9b2,	// (0x0002b031) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0002bf2f) mp4_progress_pane_t_ParamLimits

0xe9cb,	// (0x0002b04a) mup_progress_pane_cp04_ParamLimits

0x84c6,	// (0x00024b45) main_myfav_hc_pane_t5_ParamLimits

0x84c6,	// (0x00024b45) main_myfav_hc_pane_t5

0x271b,	// (0x0001ed9a) aid_zoom_text_primary

0x2858,	// (0x0001eed7) popup_adpt_find_window_ParamLimits

0x2db5,	// (0x0001f434) main_cam_set_pane

0x388f,	// (0x0001ff0e) cam4_zoom_pane_ParamLimits

0x388f,	// (0x0001ff0e) cam4_zoom_pane

0x85d2,	// (0x00024c51) main_cam_set_pane_g1_ParamLimits

0x85d2,	// (0x00024c51) main_cam_set_pane_g1

0x85e0,	// (0x00024c5f) main_cam_set_pane_g2_ParamLimits

0x85e0,	// (0x00024c5f) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0002bff0) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0002bff0) main_cam_set_pane_g

0x85ec,	// (0x00024c6b) main_cam_set_pane_t1_ParamLimits

0x85ec,	// (0x00024c6b) main_cam_set_pane_t1

0x8608,	// (0x00024c87) main_cset_listscroll_pane_ParamLimits

0x8608,	// (0x00024c87) main_cset_listscroll_pane

0x8633,	// (0x00024cb2) main_cset_slider_pane_ParamLimits

0x8633,	// (0x00024cb2) main_cset_slider_pane

0xec39,	// (0x0002b2b8) main_cset_list_pane_ParamLimits

0xec39,	// (0x0002b2b8) main_cset_list_pane

0xec49,	// (0x0002b2c8) scroll_pane_cp028

0x8652,	// (0x00024cd1) aid_area_touch_slider

0x866e,	// (0x00024ced) cset_slider_pane

0x8698,	// (0x00024d17) main_cset_slider_pane_g1

0x86ad,	// (0x00024d2c) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0002bff5) main_cset_slider_pane_g

0xec8e,	// (0x0002b30d) main_cset_slider_pane_t1

0x876f,	// (0x00024dee) main_cset_slider_pane_t2

0x8789,	// (0x00024e08) main_cset_slider_pane_t3

0x87a3,	// (0x00024e22) main_cset_slider_pane_t4

0x87bd,	// (0x00024e3c) main_cset_slider_pane_t5

0x87db,	// (0x00024e5a) main_cset_slider_pane_t6

0x87f2,	// (0x00024e71) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0002c01a) main_cset_slider_pane_t

0x88fe,	// (0x00024f7d) cset_list_set_pane_ParamLimits

0x88fe,	// (0x00024f7d) cset_list_set_pane

0x8914,	// (0x00024f93) aid_position_infowindow_above

0x891c,	// (0x00024f9b) aid_position_infowindow_below

0xed2e,	// (0x0002b3ad) cset_list_set_pane_g1_ParamLimits

0xed2e,	// (0x0002b3ad) cset_list_set_pane_g1

0xed3a,	// (0x0002b3b9) cset_list_set_pane_g3_ParamLimits

0xed3a,	// (0x0002b3b9) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0002c039) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0002c039) cset_list_set_pane_g

0xed49,	// (0x0002b3c8) cset_list_set_pane_t1_ParamLimits

0xed49,	// (0x0002b3c8) cset_list_set_pane_t1

0xbba5,	// (0x00028224) list_highlight_pane_cp021_ParamLimits

0xbba5,	// (0x00028224) list_highlight_pane_cp021

0xc946,	// (0x00028fc5) cset_slider_pane_g1

0xc958,	// (0x00028fd7) cset_slider_pane_g2

0xc94f,	// (0x00028fce) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0002c03e) cset_slider_pane_g

0x3d69,	// (0x000203e8) aid_area_touch_cam4_zoom

0x3d71,	// (0x000203f0) cam4_zoom_cont_pane

0x3d79,	// (0x000203f8) cam4_zoom_pane_g1

0x3d81,	// (0x00020400) cam4_zoom_pane_g2

0x3d89,	// (0x00020408) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0002c045) cam4_zoom_pane_g

0x3d91,	// (0x00020410) cam4_zoom_cont_pane_g1

0x3d9a,	// (0x00020419) cam4_zoom_cont_pane_g2

0x3da3,	// (0x00020422) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0002c04c) cam4_zoom_cont_pane_g

0x3768,	// (0x0001fde7) call4_image_pane_ParamLimits

0x3768,	// (0x0001fde7) call4_image_pane

0xe9f5,	// (0x0002b074) call4_windows_conf_pane_ParamLimits

0xea32,	// (0x0002b0b1) popup_call4_audio_in_window_ParamLimits

0xea32,	// (0x0002b0b1) popup_call4_audio_in_window

0xb494,	// (0x00027b13) bg_popup_call2_act_pane_cp02

0xea7b,	// (0x0002b0fa) call4_list_conf_pane

0xe09a,	// (0x0002a719) call4_image_pane_g1

0xe09a,	// (0x0002a719) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0002bd5b) call4_image_pane_g

0xed5e,	// (0x0002b3dd) list_single_graphic_popup_conf4_pane_ParamLimits

0xed5e,	// (0x0002b3dd) list_single_graphic_popup_conf4_pane

0xb494,	// (0x00027b13) list_highlight_pane_cp022

0xed71,	// (0x0002b3f0) list_single_graphic_popup_conf4_pane_g1

0xc50b,	// (0x00028b8a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0002c053) list_single_graphic_popup_conf4_pane_g

0xed79,	// (0x0002b3f8) list_single_graphic_popup_conf4_pane_t1

0x4de2,	// (0x00021461) popup_vtel_slider_window_ParamLimits

0x4de2,	// (0x00021461) popup_vtel_slider_window

0xe9d7,	// (0x0002b056) dialer2_ne_pane_t2_ParamLimits

0xe9d7,	// (0x0002b056) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0002bf34) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0002bf34) dialer2_ne_pane_t

0xbba5,	// (0x00028224) bg_popup_sub_pane_cp010_ParamLimits

0xbba5,	// (0x00028224) bg_popup_sub_pane_cp010

0x8924,	// (0x00024fa3) popup_vtel_slider_window_g1_ParamLimits

0x8924,	// (0x00024fa3) popup_vtel_slider_window_g1

0x8930,	// (0x00024faf) popup_vtel_slider_window_g2_ParamLimits

0x8930,	// (0x00024faf) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0002c058) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0002c058) popup_vtel_slider_window_g

0x8978,	// (0x00024ff7) vtel_slider_pane_ParamLimits

0x8978,	// (0x00024ff7) vtel_slider_pane

0x8987,	// (0x00025006) vtel_slider_pane_g1_ParamLimits

0x8987,	// (0x00025006) vtel_slider_pane_g1

0x8994,	// (0x00025013) vtel_slider_pane_g2_ParamLimits

0x8994,	// (0x00025013) vtel_slider_pane_g2

0x89a1,	// (0x00025020) vtel_slider_pane_g3_ParamLimits

0x89a1,	// (0x00025020) vtel_slider_pane_g3

0x8987,	// (0x00025006) vtel_slider_pane_g4_ParamLimits

0x8987,	// (0x00025006) vtel_slider_pane_g4

0x89ae,	// (0x0002502d) vtel_slider_pane_g5_ParamLimits

0x89ae,	// (0x0002502d) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0002c061) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0002c061) vtel_slider_pane_g

0x2db5,	// (0x0001f434) main_gallery2_pane

0x3aad,	// (0x0002012c) aid_size_row_itut2_dropdow_list_ParamLimits

0x3aad,	// (0x0002012c) aid_size_row_itut2_dropdow_list

0x3b1b,	// (0x0002019a) grid_vitu2_function_top_pane_ParamLimits

0x3b1b,	// (0x0002019a) grid_vitu2_function_top_pane

0x3b75,	// (0x000201f4) popup_vitu2_dropdown_list_window_ParamLimits

0x3b75,	// (0x000201f4) popup_vitu2_dropdown_list_window

0x3b95,	// (0x00020214) popup_vitu2_match_list_window

0x3dac,	// (0x0002042b) cell_vitu2_function_top_pane_ParamLimits

0x3dac,	// (0x0002042b) cell_vitu2_function_top_pane

0x3dc6,	// (0x00020445) cell_vitu2_function_top_pane_cp01_ParamLimits

0x3dc6,	// (0x00020445) cell_vitu2_function_top_pane_cp01

0x3de2,	// (0x00020461) cell_vitu2_function_top_wide_pane_ParamLimits

0x3de2,	// (0x00020461) cell_vitu2_function_top_wide_pane

0x2db5,	// (0x0001f434) bg_button_pane_cp012

0x3dfe,	// (0x0002047d) cell_vitu2_function_top_pane_g1

0x3e12,	// (0x00020491) bg_button_pane_cp013_ParamLimits

0x3e12,	// (0x00020491) bg_button_pane_cp013

0x89c9,	// (0x00025048) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x89c9,	// (0x00025048) cell_vitu2_function_top_wide_pane_g1

0x294f,	// (0x0001efce) bg_popup_sub_pane_cp20

0x3e2e,	// (0x000204ad) list_vitu2_match_list_pane

0xeb13,	// (0x0002b192) bg_popup_sub_pane_cp20_g1

0xeb1b,	// (0x0002b19a) bg_popup_sub_pane_cp20_g2

0xbffd,	// (0x0002867c) bg_popup_sub_pane_cp20_g3

0xeb23,	// (0x0002b1a2) bg_popup_sub_pane_cp20_g4

0xbfdd,	// (0x0002865c) bg_popup_sub_pane_cp20_g5

0xed8f,	// (0x0002b40e) bg_popup_sub_pane_cp20_g6

0xeb33,	// (0x0002b1b2) bg_popup_sub_pane_cp20_g7

0xeb3b,	// (0x0002b1ba) bg_popup_sub_pane_cp20_g8

0xeb43,	// (0x0002b1c2) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0002c06c) bg_popup_sub_pane_cp20_g

0x3e46,	// (0x000204c5) list_vitu2_match_list_item_pane_ParamLimits

0x3e46,	// (0x000204c5) list_vitu2_match_list_item_pane

0x3e58,	// (0x000204d7) list_vitu2_match_list_item_pane_t1

0x295d,	// (0x0001efdc) bg_popup_sub_pane_cp21

0x3e66,	// (0x000204e5) grid_vitu2_dropdown_list_pane

0x3e6e,	// (0x000204ed) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x3e6e,	// (0x000204ed) cell_vitu2_dropdown_list_char_pane

0x3e8f,	// (0x0002050e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x3e8f,	// (0x0002050e) cell_vitu2_dropdown_list_ctrl_pane

0xedb2,	// (0x0002b431) cell_vitu2_dropdown_list_char_pane_g1

0xedbb,	// (0x0002b43a) cell_vitu2_dropdown_list_char_pane_g2

0xedc4,	// (0x0002b443) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0002c089) cell_vitu2_dropdown_list_char_pane_g

0x3ebb,	// (0x0002053a) cell_vitu2_dropdown_list_char_pane_t1

0x8a29,	// (0x000250a8) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8a29,	// (0x000250a8) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8a39,	// (0x000250b8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8a39,	// (0x000250b8) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8a4a,	// (0x000250c9) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8a4a,	// (0x000250c9) cell_vitu2_dropdown_list_ctrl_pane_g3

0x3ec9,	// (0x00020548) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x3ec9,	// (0x00020548) cell_vitu2_dropdown_list_ctrl_pane_g4

0x38ff,	// (0x0001ff7e) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x38ff,	// (0x0001ff7e) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0002c090) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0002c090) cell_vitu2_dropdown_list_ctrl_pane_g

0x8a5a,	// (0x000250d9) aid_size_cell_gallery2_ParamLimits

0x8a5a,	// (0x000250d9) aid_size_cell_gallery2

0x8a74,	// (0x000250f3) grid_gallery2_pane_ParamLimits

0x8a74,	// (0x000250f3) grid_gallery2_pane

0x8a8b,	// (0x0002510a) scroll_pane_cp029_ParamLimits

0x8a8b,	// (0x0002510a) scroll_pane_cp029

0x8a9b,	// (0x0002511a) cell_gallery2_pane_ParamLimits

0x8a9b,	// (0x0002511a) cell_gallery2_pane

0xedcd,	// (0x0002b44c) cell_gallery2_pane_g2

0x1160,	// (0x0001d7df) cell_gallery2_pane_g3

0xedd5,	// (0x0002b454) cell_gallery2_pane_g4

0xeddd,	// (0x0002b45c) cell_gallery2_pane_g5

0xbda4,	// (0x00028423) grid_highlight_pane_cp10

0x3b95,	// (0x00020214) popup_vitu2_match_list_window_ParamLimits

0x3ba9,	// (0x00020228) popup_vitu2_query_window_ParamLimits

0x3ba9,	// (0x00020228) popup_vitu2_query_window

0x295d,	// (0x0001efdc) bg_vitu2_candi_button_pane

0xedb2,	// (0x0002b431) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xedbb,	// (0x0002b43a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xedc4,	// (0x0002b443) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8af0,	// (0x0002516f) bg_button_pane_cp015

0x8b02,	// (0x00025181) bg_button_pane_cp016

0x8b15,	// (0x00025194) bg_button_pane_cp017

0xdc89,	// (0x0002a308) bg_popup_sub_pane_cp22

0xede5,	// (0x0002b464) popup_vitu2_query_window_g1

0x8b5a,	// (0x000251d9) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0002c09b) popup_vitu2_query_window_g

0x8b77,	// (0x000251f6) popup_vitu2_query_window_t1_ParamLimits

0x8b77,	// (0x000251f6) popup_vitu2_query_window_t1

0x8baa,	// (0x00025229) popup_vitu2_query_window_t2_ParamLimits

0x8baa,	// (0x00025229) popup_vitu2_query_window_t2

0x8bbc,	// (0x0002523b) popup_vitu2_query_window_t3_ParamLimits

0x8bbc,	// (0x0002523b) popup_vitu2_query_window_t3

0x8be4,	// (0x00025263) popup_vitu2_query_window_t4_ParamLimits

0x8be4,	// (0x00025263) popup_vitu2_query_window_t4

0x8c05,	// (0x00025284) popup_vitu2_query_window_t5_ParamLimits

0x8c05,	// (0x00025284) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0002c0a2) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0002c0a2) popup_vitu2_query_window_t

0xec31,	// (0x0002b2b0) main_cset_text_pane

0x8652,	// (0x00024cd1) aid_area_touch_slider_ParamLimits

0x866e,	// (0x00024ced) cset_slider_pane_ParamLimits

0x8698,	// (0x00024d17) main_cset_slider_pane_g1_ParamLimits

0x86ad,	// (0x00024d2c) main_cset_slider_pane_g2_ParamLimits

0xec5e,	// (0x0002b2dd) main_cset_slider_pane_g3_ParamLimits

0xec5e,	// (0x0002b2dd) main_cset_slider_pane_g3

0x86c2,	// (0x00024d41) main_cset_slider_pane_g4_ParamLimits

0x86c2,	// (0x00024d41) main_cset_slider_pane_g4

0x86d1,	// (0x00024d50) main_cset_slider_pane_g5_ParamLimits

0x86d1,	// (0x00024d50) main_cset_slider_pane_g5

0x86df,	// (0x00024d5e) main_cset_slider_pane_g6_ParamLimits

0x86df,	// (0x00024d5e) main_cset_slider_pane_g6

0xf976,	// (0x0002bff5) main_cset_slider_pane_g_ParamLimits

0xec8e,	// (0x0002b30d) main_cset_slider_pane_t1_ParamLimits

0x876f,	// (0x00024dee) main_cset_slider_pane_t2_ParamLimits

0x8789,	// (0x00024e08) main_cset_slider_pane_t3_ParamLimits

0x87a3,	// (0x00024e22) main_cset_slider_pane_t4_ParamLimits

0x87bd,	// (0x00024e3c) main_cset_slider_pane_t5_ParamLimits

0x87db,	// (0x00024e5a) main_cset_slider_pane_t6_ParamLimits

0x87f2,	// (0x00024e71) main_cset_slider_pane_t7_ParamLimits

0x8820,	// (0x00024e9f) main_cset_slider_pane_t8_ParamLimits

0x8820,	// (0x00024e9f) main_cset_slider_pane_t8

0x8848,	// (0x00024ec7) main_cset_slider_pane_t9_ParamLimits

0x8848,	// (0x00024ec7) main_cset_slider_pane_t9

0x8870,	// (0x00024eef) main_cset_slider_pane_t10_ParamLimits

0x8870,	// (0x00024eef) main_cset_slider_pane_t10

0x8898,	// (0x00024f17) main_cset_slider_pane_t11_ParamLimits

0x8898,	// (0x00024f17) main_cset_slider_pane_t11

0x88c2,	// (0x00024f41) main_cset_slider_pane_t12_ParamLimits

0x88c2,	// (0x00024f41) main_cset_slider_pane_t12

0x88df,	// (0x00024f5e) main_cset_slider_pane_t13_ParamLimits

0x88df,	// (0x00024f5e) main_cset_slider_pane_t13

0xf99b,	// (0x0002c01a) main_cset_slider_pane_t_ParamLimits

0xb494,	// (0x00027b13) bg_popup_sub_pane_cp011

0xedf1,	// (0x0002b470) main_cset_text_pane_g1

0xedf9,	// (0x0002b478) main_cset_text_pane_t1

0xee07,	// (0x0002b486) main_cset_text_pane_t2

0xee15,	// (0x0002b494) main_cset_text_pane_t3

0xee23,	// (0x0002b4a2) main_cset_text_pane_t4

0xee31,	// (0x0002b4b0) main_cset_text_pane_t5

0xee3f,	// (0x0002b4be) main_cset_text_pane_t6

0xee4d,	// (0x0002b4cc) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0002c0b1) main_cset_text_pane_t

0x295d,	// (0x0001efdc) main_cam4_burst_pane

0x295d,	// (0x0001efdc) main_cam5_pane

0x85a1,	// (0x00024c20) bg_button_pane_cp019

0x85aa,	// (0x00024c29) bg_button_pane_cp020

0xec6a,	// (0x0002b2e9) main_cset_slider_pane_g7_ParamLimits

0xec6a,	// (0x0002b2e9) main_cset_slider_pane_g7

0xec76,	// (0x0002b2f5) main_cset_slider_pane_g8_ParamLimits

0xec76,	// (0x0002b2f5) main_cset_slider_pane_g8

0x86f3,	// (0x00024d72) main_cset_slider_pane_g9_ParamLimits

0x86f3,	// (0x00024d72) main_cset_slider_pane_g9

0x86ff,	// (0x00024d7e) main_cset_slider_pane_g10_ParamLimits

0x86ff,	// (0x00024d7e) main_cset_slider_pane_g10

0x870b,	// (0x00024d8a) main_cset_slider_pane_g11_ParamLimits

0x870b,	// (0x00024d8a) main_cset_slider_pane_g11

0x8717,	// (0x00024d96) main_cset_slider_pane_g12_ParamLimits

0x8717,	// (0x00024d96) main_cset_slider_pane_g12

0x8723,	// (0x00024da2) main_cset_slider_pane_g13_ParamLimits

0x8723,	// (0x00024da2) main_cset_slider_pane_g13

0x872f,	// (0x00024dae) main_cset_slider_pane_g14_ParamLimits

0x872f,	// (0x00024dae) main_cset_slider_pane_g14

0x873b,	// (0x00024dba) main_cset_slider_pane_g15_ParamLimits

0x873b,	// (0x00024dba) main_cset_slider_pane_g15

0xecbc,	// (0x0002b33b) main_cset_slider_pane_t14_ParamLimits

0xecbc,	// (0x0002b33b) main_cset_slider_pane_t14

0xecf5,	// (0x0002b374) main_cset_slider_pane_t15_ParamLimits

0xecf5,	// (0x0002b374) main_cset_slider_pane_t15

0x8c7c,	// (0x000252fb) aid_cam4_burst_size_cell_ParamLimits

0x8c7c,	// (0x000252fb) aid_cam4_burst_size_cell

0x8c98,	// (0x00025317) grid_cam4_burst_pane_ParamLimits

0x8c98,	// (0x00025317) grid_cam4_burst_pane

0x8cc8,	// (0x00025347) linegrid_cam4_burst_pane_ParamLimits

0x8cc8,	// (0x00025347) linegrid_cam4_burst_pane

0x8ce8,	// (0x00025367) scroll_pane_cp30_ParamLimits

0x8ce8,	// (0x00025367) scroll_pane_cp30

0x8cf4,	// (0x00025373) cell_cam4_burst_pane_ParamLimits

0x8cf4,	// (0x00025373) cell_cam4_burst_pane

0xee5b,	// (0x0002b4da) linegrid_cam4_burst_pane_g1_ParamLimits

0xee5b,	// (0x0002b4da) linegrid_cam4_burst_pane_g1

0x8d30,	// (0x000253af) linegrid_cam4_burst_pane_g2_ParamLimits

0x8d30,	// (0x000253af) linegrid_cam4_burst_pane_g2

0xee68,	// (0x0002b4e7) linegrid_cam4_burst_pane_g3_ParamLimits

0xee68,	// (0x0002b4e7) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0002c0c0) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0002c0c0) linegrid_cam4_burst_pane_g

0x8d41,	// (0x000253c0) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8d41,	// (0x000253c0) linegrid_cam4_burst_pane_g3_copy1

0xee75,	// (0x0002b4f4) linegrid_cam4_burst_pane_g4_ParamLimits

0xee75,	// (0x0002b4f4) linegrid_cam4_burst_pane_g4

0x8d5b,	// (0x000253da) linegrid_cam4_burst_pane_g5_ParamLimits

0x8d5b,	// (0x000253da) linegrid_cam4_burst_pane_g5

0x8d6c,	// (0x000253eb) linegrid_cam4_burst_pane_g6_ParamLimits

0x8d6c,	// (0x000253eb) linegrid_cam4_burst_pane_g6

0xee8e,	// (0x0002b50d) linegrid_cam4_burst_pane_g7_ParamLimits

0xee8e,	// (0x0002b50d) linegrid_cam4_burst_pane_g7

0x8d7d,	// (0x000253fc) cell_cam4_burst_pane_g1

0xeea7,	// (0x0002b526) main_cam5_pane_t1_ParamLimits

0xeea7,	// (0x0002b526) main_cam5_pane_t1

0xeeb9,	// (0x0002b538) main_cam5_pane_t2_ParamLimits

0xeeb9,	// (0x0002b538) main_cam5_pane_t2

0xeecb,	// (0x0002b54a) main_cam5_pane_t3_ParamLimits

0xeecb,	// (0x0002b54a) main_cam5_pane_t3

0xeedd,	// (0x0002b55c) main_cam5_pane_t4_ParamLimits

0xeedd,	// (0x0002b55c) main_cam5_pane_t4

0xeef5,	// (0x0002b574) main_cam5_pane_t5_ParamLimits

0xeef5,	// (0x0002b574) main_cam5_pane_t5

0xef09,	// (0x0002b588) main_cam5_pane_t6_ParamLimits

0xef09,	// (0x0002b588) main_cam5_pane_t6

0xef1d,	// (0x0002b59c) main_cam5_pane_t7_ParamLimits

0xef1d,	// (0x0002b59c) main_cam5_pane_t7

0xef2f,	// (0x0002b5ae) main_cam5_pane_t8_ParamLimits

0xef2f,	// (0x0002b5ae) main_cam5_pane_t8

0xef4b,	// (0x0002b5ca) main_cam5_pane_t9_ParamLimits

0xef4b,	// (0x0002b5ca) main_cam5_pane_t9

0xef5d,	// (0x0002b5dc) main_cam5_pane_t10_ParamLimits

0xef5d,	// (0x0002b5dc) main_cam5_pane_t10

0xef6f,	// (0x0002b5ee) main_cam5_pane_t11_ParamLimits

0xef6f,	// (0x0002b5ee) main_cam5_pane_t11

0xef81,	// (0x0002b600) main_cam5_pane_t12_ParamLimits

0xef81,	// (0x0002b600) main_cam5_pane_t12

0xef96,	// (0x0002b615) main_cam5_pane_t13_ParamLimits

0xef96,	// (0x0002b615) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0002c0cc) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0002c0cc) main_cam5_pane_t

0x290e,	// (0x0001ef8d) popup_scut_keymap_window_ParamLimits

0x290e,	// (0x0001ef8d) popup_scut_keymap_window

0x8d90,	// (0x0002540f) aid_size_cell_brow_shortcut

0xbda4,	// (0x00028423) bg_popup_window_pane_cp010

0x8d9c,	// (0x0002541b) grid_scut_pane

0x8da8,	// (0x00025427) cell_scut_pane_ParamLimits

0x8da8,	// (0x00025427) cell_scut_pane

0x8dbf,	// (0x0002543e) cell_scut_pane_g1

0xefb3,	// (0x0002b632) cell_scut_pane_t1

0xefc2,	// (0x0002b641) cell_scut_pane_t2

0x8dc8,	// (0x00025447) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0002c0e7) cell_scut_pane_t

0x77a8,	// (0x00023e27) main_mup3_pane_g8_ParamLimits

0x77a8,	// (0x00023e27) main_mup3_pane_g8

0x3abb,	// (0x0002013a) area_vitu2_query_pane_ParamLimits

0x3abb,	// (0x0002013a) area_vitu2_query_pane

0x8b28,	// (0x000251a7) input_focus_pane_cp08

0xefd1,	// (0x0002b650) area_vitu2_query_pane_g1

0x8dd6,	// (0x00025455) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0002c0ee) area_vitu2_query_pane_g

0x8de7,	// (0x00025466) area_vitu2_query_pane_t1_ParamLimits

0x8de7,	// (0x00025466) area_vitu2_query_pane_t1

0x8dfb,	// (0x0002547a) area_vitu2_query_pane_t2_ParamLimits

0x8dfb,	// (0x0002547a) area_vitu2_query_pane_t2

0x8e0f,	// (0x0002548e) area_vitu2_query_pane_t3_ParamLimits

0x8e0f,	// (0x0002548e) area_vitu2_query_pane_t3

0xefdd,	// (0x0002b65c) area_vitu2_query_pane_t4_ParamLimits

0xefdd,	// (0x0002b65c) area_vitu2_query_pane_t4

0xf005,	// (0x0002b684) area_vitu2_query_pane_t5_ParamLimits

0xf005,	// (0x0002b684) area_vitu2_query_pane_t5

0xf02d,	// (0x0002b6ac) area_vitu2_query_pane_t6_ParamLimits

0xf02d,	// (0x0002b6ac) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0002c0f3) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0002c0f3) area_vitu2_query_pane_t

0x8e37,	// (0x000254b6) bg_button_pane_cp018

0x8e45,	// (0x000254c4) bg_button_pane_cp021

0x8e51,	// (0x000254d0) bg_button_pane_cp022

0x8e62,	// (0x000254e1) input_focus_pane_cp09

0xc647,	// (0x00028cc6) aid_size_touch_mv_arrow_left

0xc670,	// (0x00028cef) aid_size_touch_mv_arrow_right

0x8753,	// (0x00024dd2) main_cset_slider_pane_g16_ParamLimits

0x8753,	// (0x00024dd2) main_cset_slider_pane_g16

0x8761,	// (0x00024de0) main_cset_slider_pane_g17_ParamLimits

0x8761,	// (0x00024de0) main_cset_slider_pane_g17

0x8d7d,	// (0x000253fc) cell_cam4_burst_pane_g1_ParamLimits

0xb494,	// (0x00027b13) compa_mode_pane

0x893c,	// (0x00024fbb) popup_vtel_slider_window_g3_ParamLimits

0x893c,	// (0x00024fbb) popup_vtel_slider_window_g3

0x8950,	// (0x00024fcf) popup_vtel_slider_window_g4_ParamLimits

0x8950,	// (0x00024fcf) popup_vtel_slider_window_g4

0x8964,	// (0x00024fe3) popup_vtel_slider_window_t1_ParamLimits

0x8964,	// (0x00024fe3) popup_vtel_slider_window_t1

0x295d,	// (0x0001efdc) main_cl_pane

0x2e53,	// (0x0001f4d2) popup_imed_adjust2_window_ParamLimits

0xdc89,	// (0x0002a308) bg_tb_trans_pane_cp05_ParamLimits

0xe5ec,	// (0x0002ac6b) popup_imed_adjust2_window_g1_ParamLimits

0xe5fb,	// (0x0002ac7a) popup_imed_adjust2_window_g2_ParamLimits

0xe5fb,	// (0x0002ac7a) popup_imed_adjust2_window_g2

0xe607,	// (0x0002ac86) popup_imed_adjust2_window_g3_ParamLimits

0xe607,	// (0x0002ac86) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0002be5e) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0002be5e) popup_imed_adjust2_window_g

0xe613,	// (0x0002ac92) popup_imed_adjust2_window_t1_ParamLimits

0xe62b,	// (0x0002acaa) slider_imed_adjust_pane_ParamLimits

0xe63f,	// (0x0002acbe) slider_imed_adjust_pane_g1_ParamLimits

0xe64f,	// (0x0002acce) slider_imed_adjust_pane_g2_ParamLimits

0xe65f,	// (0x0002acde) slider_imed_adjust_pane_g3_ParamLimits

0xe670,	// (0x0002acef) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0002be65) slider_imed_adjust_pane_g_ParamLimits

0x3838,	// (0x0001feb7) aid_touch_area_cam4_ParamLimits

0x3838,	// (0x0001feb7) aid_touch_area_cam4

0x3848,	// (0x0001fec7) battery_pane_cp01

0x38cf,	// (0x0001ff4e) main_camera4_pane_g6_ParamLimits

0x38cf,	// (0x0001ff4e) main_camera4_pane_g6

0x38ed,	// (0x0001ff6c) main_camera4_pane_t2_ParamLimits

0x38ed,	// (0x0001ff6c) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0002bf68) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0002bf68) main_camera4_pane_t

0x395e,	// (0x0001ffdd) aid_touch_area_vid4_ParamLimits

0x395e,	// (0x0001ffdd) aid_touch_area_vid4

0x399e,	// (0x0002001d) main_video4_pane_g5_ParamLimits

0x399e,	// (0x0002001d) main_video4_pane_g5

0x39c2,	// (0x00020041) vid4_progress_pane_ParamLimits

0x39c2,	// (0x00020041) vid4_progress_pane

0xec82,	// (0x0002b301) main_cset_slider_pane_g18_ParamLimits

0xec82,	// (0x0002b301) main_cset_slider_pane_g18

0xee9b,	// (0x0002b51a) cell_cam4_burst_pane_g2_ParamLimits

0xee9b,	// (0x0002b51a) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0002c0c7) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0002c0c7) cell_cam4_burst_pane_g

0x8e73,	// (0x000254f2) bg_cl_pane_ParamLimits

0x8e73,	// (0x000254f2) bg_cl_pane

0x8e7f,	// (0x000254fe) cl_header_pane_ParamLimits

0x8e7f,	// (0x000254fe) cl_header_pane

0x8e8b,	// (0x0002550a) cl_listscroll_pane_ParamLimits

0x8e8b,	// (0x0002550a) cl_listscroll_pane

0xf079,	// (0x0002b6f8) bg_cl_pane_g1

0xf081,	// (0x0002b700) bg_cl_pane_g2

0xf089,	// (0x0002b708) bg_cl_pane_g3

0xf091,	// (0x0002b710) bg_cl_pane_g4

0xf099,	// (0x0002b718) bg_cl_pane_g5

0xf0a1,	// (0x0002b720) bg_cl_pane_g6

0xf0a9,	// (0x0002b728) bg_cl_pane_g7

0xf0b1,	// (0x0002b730) bg_cl_pane_g8

0xf0b9,	// (0x0002b738) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0002c102) bg_cl_pane_g

0x8e97,	// (0x00025516) aid_height_cl_leading_ParamLimits

0x8e97,	// (0x00025516) aid_height_cl_leading

0x8ea3,	// (0x00025522) aid_height_cl_text_ParamLimits

0x8ea3,	// (0x00025522) aid_height_cl_text

0xeb97,	// (0x0002b216) bg_cl_header_pane_ParamLimits

0xeb97,	// (0x0002b216) bg_cl_header_pane

0x8ebb,	// (0x0002553a) cl_header_pane_g1_ParamLimits

0x8ebb,	// (0x0002553a) cl_header_pane_g1

0x8ec8,	// (0x00025547) cl_header_pane_t1_ParamLimits

0x8ec8,	// (0x00025547) cl_header_pane_t1

0xf0c1,	// (0x0002b740) cl_list_pane

0xec49,	// (0x0002b2c8) hc_scroll_pane_cp01

0xbfdd,	// (0x0002865c) bg_cl_header_pane_g1

0xeb13,	// (0x0002b192) bg_cl_header_pane_g2

0xbffd,	// (0x0002867c) bg_cl_header_pane_g3

0xeb23,	// (0x0002b1a2) bg_cl_header_pane_g4

0xeb1b,	// (0x0002b19a) bg_cl_header_pane_g5

0xed8f,	// (0x0002b40e) bg_cl_header_pane_g6

0xeb3b,	// (0x0002b1ba) bg_cl_header_pane_g7

0xeb43,	// (0x0002b1c2) bg_cl_header_pane_g8

0xeb33,	// (0x0002b1b2) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0002c115) bg_cl_header_pane_g

0x8eda,	// (0x00025559) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8eda,	// (0x00025559) hc_cl_list_double_graphic_heading_pane

0x8eeb,	// (0x0002556a) hc_cl_list_single_graphic_pane_ParamLimits

0x8eeb,	// (0x0002556a) hc_cl_list_single_graphic_pane

0x8f04,	// (0x00025583) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8f04,	// (0x00025583) hc_cl_list_single_graphic_pane_g1

0x8f10,	// (0x0002558f) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8f10,	// (0x0002558f) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0002c128) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0002c128) hc_cl_list_single_graphic_pane_g

0x8f24,	// (0x000255a3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8f24,	// (0x000255a3) hc_cl_list_single_graphic_pane_t1

0x8f04,	// (0x00025583) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8f04,	// (0x00025583) hc_cl_list_double_graphic_heading_pane_g1

0x8f39,	// (0x000255b8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8f39,	// (0x000255b8) hc_cl_list_double_graphic_heading_pane_g2

0x8f4d,	// (0x000255cc) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8f4d,	// (0x000255cc) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0002c12d) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0002c12d) hc_cl_list_double_graphic_heading_pane_g

0x8f61,	// (0x000255e0) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8f61,	// (0x000255e0) hc_cl_list_double_graphic_heading_pane_t1

0x8f76,	// (0x000255f5) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8f76,	// (0x000255f5) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0002c134) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0002c134) hc_cl_list_double_graphic_heading_pane_t

0x3eed,	// (0x0002056c) vid4_progress_pane_g1

0x3efd,	// (0x0002057c) vid4_progress_pane_g2

0x3f0d,	// (0x0002058c) vid4_progress_pane_g3

0x3f1f,	// (0x0002059e) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0002c139) vid4_progress_pane_g

0x3f37,	// (0x000205b6) vid4_progress_pane_t1

0x3f4d,	// (0x000205cc) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0002c144) vid4_progress_pane_t

0x3f77,	// (0x000205f6) wait_bar_pane_cp07

0xde8d,	// (0x0002a50c) blid_firmament_pane_ParamLimits

0xded0,	// (0x0002a54f) popup_blid_sat_info2_window_g1

0xdef4,	// (0x0002a573) popup_blid_sat_info2_window_t3

0xdf02,	// (0x0002a581) popup_blid_sat_info2_window_t4

0xdf10,	// (0x0002a58f) popup_blid_sat_info2_window_t5

0xdf1e,	// (0x0002a59d) popup_blid_sat_info2_window_t6

0xdf2e,	// (0x0002a5ad) popup_blid_sat_info2_window_t7

0xdf3c,	// (0x0002a5bb) popup_blid_sat_info2_window_t8

0xdf4a,	// (0x0002a5c9) popup_blid_sat_info2_window_t9

0xdf58,	// (0x0002a5d7) popup_blid_sat_info2_window_t10

0xe01a,	// (0x0002a699) aid_firma_cardinal_ParamLimits

0xe02e,	// (0x0002a6ad) blid_firmament_pane_t1_ParamLimits

0xe045,	// (0x0002a6c4) blid_firmament_pane_t2_ParamLimits

0xe05c,	// (0x0002a6db) blid_firmament_pane_t3_ParamLimits

0xe073,	// (0x0002a6f2) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0002bd52) blid_firmament_pane_t_ParamLimits

0xe08a,	// (0x0002a709) blid_sat_info_pane_ParamLimits

0x2db5,	// (0x0001f434) main_cam_set_pane_ParamLimits

0x7eca,	// (0x00024549) aid_size_cell_colour_35_ParamLimits

0x7ee4,	// (0x00024563) aid_size_cell_colour_112_ParamLimits

0x7efb,	// (0x0002457a) aid_size_cell_effect_ParamLimits

0xbba5,	// (0x00028224) bg_tb_trans_pane_cp02_ParamLimits

0xc7fe,	// (0x00028e7d) heading_imed_pane_ParamLimits

0x7f15,	// (0x00024594) listscroll_imed_pane_ParamLimits

0xd2af,	// (0x0002992e) popup_call2_audio_first_window_g5_ParamLimits

0xd2af,	// (0x0002992e) popup_call2_audio_first_window_g5

0x35f1,	// (0x0001fc70) aid_size_touch_image3_arrow_left_ParamLimits

0x35f1,	// (0x0001fc70) aid_size_touch_image3_arrow_left

0x3607,	// (0x0001fc86) aid_size_touch_image3_arrow_right_ParamLimits

0x3607,	// (0x0001fc86) aid_size_touch_image3_arrow_right

0x3f62,	// (0x000205e1) vid4_progress_pane_t3

0x81b3,	// (0x00024832) main_hwr_training_symbol_option_pane_ParamLimits

0x81b3,	// (0x00024832) main_hwr_training_symbol_option_pane

0xe8d9,	// (0x0002af58) popup_hwr_training_preview_window_ParamLimits

0xe8d9,	// (0x0002af58) popup_hwr_training_preview_window

0x32ef,	// (0x0001f96e) hwr_training_navi_pane_g5_ParamLimits

0x32ef,	// (0x0001f96e) hwr_training_navi_pane_g5

0xeb01,	// (0x0002b180) popup_char_count_window

0x294f,	// (0x0001efce) bg_popup_sub_pane_cp20_ParamLimits

0x3e2e,	// (0x000204ad) list_vitu2_match_list_pane_ParamLimits

0x3e3a,	// (0x000204b9) vitu2_page_scroll_pane_ParamLimits

0x3e3a,	// (0x000204b9) vitu2_page_scroll_pane

0x0025,	// (0x0001c6a4) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0025,	// (0x0001c6a4) list_single_hwr_training_symbol_option_pane

0x0038,	// (0x0001c6b7) list_single_hwr_training_symbol_option_pane_g1

0x0040,	// (0x0001c6bf) list_single_hwr_training_symbol_option_pane_t1

0x004e,	// (0x0001c6cd) bg_button_pane_cp023

0x0057,	// (0x0001c6d6) bg_button_pane_cp024

0x8fba,	// (0x00025639) vitu2_page_scroll_pane_g1

0x8fc2,	// (0x00025641) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0002c14b) vitu2_page_scroll_pane_g

0x8fca,	// (0x00025649) vitu2_page_scroll_pane_t1

0xdde4,	// (0x0002a463) popup_char_count_window_g1

0x008a,	// (0x0001c709) popup_char_count_window_g2

0x0093,	// (0x0001c712) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0002c150) popup_char_count_window_g

0x009c,	// (0x0001c71b) popup_char_count_window_t1

0x295d,	// (0x0001efdc) main_vded2_pane

0xe5d8,	// (0x0002ac57) aid_size_cell_imed_line

0xe5e2,	// (0x0002ac61) grid_imed_line_width_pane

0x3a30,	// (0x000200af) vid4_indicators_pane_g4

0x00aa,	// (0x0001c729) cell_imed_line_width_pane_ParamLimits

0x00aa,	// (0x0001c729) cell_imed_line_width_pane

0x00be,	// (0x0001c73d) cell_imed_line_width_pane_g1

0x00c7,	// (0x0001c746) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0002c157) cell_imed_line_width_pane_g

0x8fd9,	// (0x00025658) main_vded2_pane_g1_ParamLimits

0x8fd9,	// (0x00025658) main_vded2_pane_g1

0x8fe6,	// (0x00025665) main_vded2_pane_g2_ParamLimits

0x8fe6,	// (0x00025665) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0002c15c) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0002c15c) main_vded2_pane_g

0x8ff4,	// (0x00025673) vded2_slider_pane_ParamLimits

0x8ff4,	// (0x00025673) vded2_slider_pane

0x9001,	// (0x00025680) aid_size_touch_vded2_end

0x900b,	// (0x0002568a) aid_size_touch_vded2_playhead

0x00cf,	// (0x0001c74e) aid_size_touch_vded2_start

0x00d7,	// (0x0001c756) vded2_slider_bg_pane

0x00e0,	// (0x0001c75f) vded2_slider_pane_g1

0x00e9,	// (0x0001c768) vded2_slider_pane_g2

0x9013,	// (0x00025692) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0002c161) vded2_slider_pane_g

0x00f1,	// (0x0001c770) vded2_slider_bg_pane_g1

0x00fa,	// (0x0001c779) vded2_slider_bg_pane_g2

0x0103,	// (0x0001c782) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0002c168) vded2_slider_bg_pane_g

0x6766,	// (0x00022de5) aid_postcard_touch_down_pane_ParamLimits

0x6766,	// (0x00022de5) aid_postcard_touch_down_pane

0x6776,	// (0x00022df5) aid_postcard_touch_up_pane_ParamLimits

0x6776,	// (0x00022df5) aid_postcard_touch_up_pane

0x295d,	// (0x0001efdc) main_blid2_pane

0x2dde,	// (0x0001f45d) popup_blid2_search_window

0xb494,	// (0x00027b13) blid2_gps_pane

0xb494,	// (0x00027b13) blid2_navig_pane

0xb494,	// (0x00027b13) blid2_search_pane

0xb494,	// (0x00027b13) blid2_tripm_pane

0x901c,	// (0x0002569b) blid2_search_pane_g1_ParamLimits

0x901c,	// (0x0002569b) blid2_search_pane_g1

0x902c,	// (0x000256ab) blid2_search_pane_t1_ParamLimits

0x902c,	// (0x000256ab) blid2_search_pane_t1

0x903e,	// (0x000256bd) aid_size_cell_blid2_gps_ParamLimits

0x903e,	// (0x000256bd) aid_size_cell_blid2_gps

0x904e,	// (0x000256cd) blid2_gps_pane_g1_ParamLimits

0x904e,	// (0x000256cd) blid2_gps_pane_g1

0x905a,	// (0x000256d9) grid_blid2_satellite_pane_ParamLimits

0x905a,	// (0x000256d9) grid_blid2_satellite_pane

0x906a,	// (0x000256e9) blid2_navig_pane_g1_ParamLimits

0x906a,	// (0x000256e9) blid2_navig_pane_g1

0x9076,	// (0x000256f5) blid2_navig_pane_t1_ParamLimits

0x9076,	// (0x000256f5) blid2_navig_pane_t1

0x9088,	// (0x00025707) blid2_navig_pane_t2_ParamLimits

0x9088,	// (0x00025707) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0002c16f) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0002c16f) blid2_navig_pane_t

0x909a,	// (0x00025719) blid2_navig_ring_pane_ParamLimits

0x909a,	// (0x00025719) blid2_navig_ring_pane

0x90aa,	// (0x00025729) blid2_speed_pane_ParamLimits

0x90aa,	// (0x00025729) blid2_speed_pane

0x90b6,	// (0x00025735) blid2_tripm_pane_g1_ParamLimits

0x90b6,	// (0x00025735) blid2_tripm_pane_g1

0x90c6,	// (0x00025745) blid2_tripm_pane_g2_ParamLimits

0x90c6,	// (0x00025745) blid2_tripm_pane_g2

0x90d2,	// (0x00025751) blid2_tripm_pane_g3_ParamLimits

0x90d2,	// (0x00025751) blid2_tripm_pane_g3

0x90de,	// (0x0002575d) blid2_tripm_pane_g4_ParamLimits

0x90de,	// (0x0002575d) blid2_tripm_pane_g4

0x90ea,	// (0x00025769) blid2_tripm_pane_g5_ParamLimits

0x90ea,	// (0x00025769) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0002c174) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0002c174) blid2_tripm_pane_g

0x9106,	// (0x00025785) blid2_tripm_pane_t1_ParamLimits

0x9106,	// (0x00025785) blid2_tripm_pane_t1

0x911a,	// (0x00025799) blid2_tripm_pane_t2_ParamLimits

0x911a,	// (0x00025799) blid2_tripm_pane_t2

0x912c,	// (0x000257ab) blid2_tripm_pane_t3_ParamLimits

0x912c,	// (0x000257ab) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0002c181) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0002c181) blid2_tripm_pane_t

0x915e,	// (0x000257dd) cell_blid2_satellite_pane_ParamLimits

0x915e,	// (0x000257dd) cell_blid2_satellite_pane

0x9178,	// (0x000257f7) cell_blid2_satellite_pane_g1

0x010c,	// (0x0001c78b) cell_blid2_satellite_pane_t1

0xe09a,	// (0x0002a719) blid2_speed_pane_g1

0x011a,	// (0x0001c799) blid2_speed_pane_t1

0x0128,	// (0x0001c7a7) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0002c18a) blid2_speed_pane_t

0xe09a,	// (0x0002a719) blid2_navig_ring_pane_g1

0x9181,	// (0x00025800) blid2_navig_ring_pane_g2

0x9189,	// (0x00025808) blid2_navig_ring_pane_g3

0x9191,	// (0x00025810) blid2_navig_ring_pane_g4

0x9199,	// (0x00025818) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0002c18f) blid2_navig_ring_pane_g

0xb494,	// (0x00027b13) bg_popup_window_pane_cp011

0x0136,	// (0x0001c7b5) popup_blid2_search_window_g1

0x013e,	// (0x0001c7bd) popup_blid2_search_window_t1

0x014c,	// (0x0001c7cb) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0002c19a) popup_blid2_search_window_t

0xbeec,	// (0x0002856b) main_browser_pane_g1

0xbbdf,	// (0x0002825e) main_browser_pane_ParamLimits

0x2db5,	// (0x0001f434) bg_button_pane_cp011_ParamLimits

0x3d55,	// (0x000203d4) cell_vitu2_function_pane_g1_ParamLimits

0xdc89,	// (0x0002a308) bg_popup_sub_pane_cp22_ParamLimits

0x8b28,	// (0x000251a7) input_focus_pane_cp08_ParamLimits

0x8b3f,	// (0x000251be) popup_vitu2_query_button_pane_ParamLimits

0x8b3f,	// (0x000251be) popup_vitu2_query_button_pane

0x8b50,	// (0x000251cf) popup_vitu2_query_input_button_pane

0xede5,	// (0x0002b464) popup_vitu2_query_window_g1_ParamLimits

0x8b5a,	// (0x000251d9) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0002c09b) popup_vitu2_query_window_g_ParamLimits

0xb494,	// (0x00027b13) bg_button_pane_cp026

0x91a1,	// (0x00025820) popup_vitu2_query_input_button_pane_g1

0xb494,	// (0x00027b13) bg_button_pane_cp025

0x015a,	// (0x0001c7d9) popup_vitu2_query_button_pane_t1

0x7484,	// (0x00023b03) main_mp3_pane_t6

0x7494,	// (0x00023b13) popup_slider_window_cp01

0x390d,	// (0x0001ff8c) cam4_battery_pane

0x39ed,	// (0x0002006c) cam4_battery_pane_cp02

0x3ee5,	// (0x00020564) cam4_battery_pane_cp01

0x3ee5,	// (0x00020564) cam4_battery_pane_cp03

0x0168,	// (0x0001c7e7) cam4_battery_pane_g1

0xe09a,	// (0x0002a719) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0002c19f) cam4_battery_pane_g

0xdf66,	// (0x0002a5e5) popup_blid_sat_info2_window_t11

0xc647,	// (0x00028cc6) aid_size_touch_mv_arrow_left_ParamLimits

0xc670,	// (0x00028cef) aid_size_touch_mv_arrow_right_ParamLimits

0xc6ce,	// (0x00028d4d) navi_pane_g1_ParamLimits

0xc6da,	// (0x00028d59) navi_pane_g2_ParamLimits

0xc708,	// (0x00028d87) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0002ba64) navi_pane_g_ParamLimits

0x61eb,	// (0x0002286a) navi_pane_mv_t1_ParamLimits

0x7f21,	// (0x000245a0) grid_imed_effect_pane_ParamLimits

0x4ca2,	// (0x00021321) aid_placing_vt_slider_lsc

0xbe3b,	// (0x000284ba) aid_placing_vt_slider_prt

0xbba5,	// (0x00028224) bg_tb_trans_pane_cp01_ParamLimits

0xe21d,	// (0x0002a89c) popup_image_details_window_g1_ParamLimits

0xe230,	// (0x0002a8af) popup_image_details_window_g2_ParamLimits

0xe245,	// (0x0002a8c4) popup_image_details_window_g3_ParamLimits

0xe245,	// (0x0002a8c4) popup_image_details_window_g3

0xf718,	// (0x0002bd97) popup_image_details_window_g_ParamLimits

0xe259,	// (0x0002a8d8) popup_image_details_window_t1_ParamLimits

0xe26b,	// (0x0002a8ea) popup_image_details_window_t2_ParamLimits

0xe284,	// (0x0002a903) popup_image_details_window_t3_ParamLimits

0xe298,	// (0x0002a917) popup_image_details_window_t4_ParamLimits

0xe2b3,	// (0x0002a932) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0002bd9e) popup_image_details_window_t_ParamLimits

0x8eaf,	// (0x0002552e) cl_header_name_pane_ParamLimits

0x8eaf,	// (0x0002552e) cl_header_name_pane

0x91a9,	// (0x00025828) cl_header_name_pane_t1_ParamLimits

0x91a9,	// (0x00025828) cl_header_name_pane_t1

0x91c0,	// (0x0002583f) cl_header_name_pane_t2_ParamLimits

0x91c0,	// (0x0002583f) cl_header_name_pane_t2

0x91ea,	// (0x00025869) cl_header_name_pane_t3_ParamLimits

0x91ea,	// (0x00025869) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0002c1a4) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0002c1a4) cl_header_name_pane_t

0xc797,	// (0x00028e16) navi_pane_mv_g2_ParamLimits

0xeabe,	// (0x0002b13d) field_vitu2_entry_pane_g1_ParamLimits

0xeaca,	// (0x0002b149) field_vitu2_entry_pane_g2_ParamLimits

0xead6,	// (0x0002b155) field_vitu2_entry_pane_g3_ParamLimits

0xead6,	// (0x0002b155) field_vitu2_entry_pane_g3

0xf91b,	// (0x0002bf9a) field_vitu2_entry_pane_g_ParamLimits

0x3c21,	// (0x000202a0) cell_vitu2_itu_pane_g1_ParamLimits

0x3c33,	// (0x000202b2) cell_vitu2_itu_pane_g2_ParamLimits

0x3c33,	// (0x000202b2) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0002bfa6) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0002bfa6) cell_vitu2_itu_pane_g

0x2db5,	// (0x0001f434) bg_vkb2_func_pane_cp05_ParamLimits

0x2db5,	// (0x0001f434) bg_vkb2_func_pane_cp05

0x2db5,	// (0x0001f434) bg_vkb2_func_pane_cp03

0x2db5,	// (0x0001f434) bg_vkb2_func_pane_cp04

0x2db5,	// (0x0001f434) bg_vkb2_func_pane_cp10_ParamLimits

0x2db5,	// (0x0001f434) bg_vkb2_func_pane_cp10

0x8e51,	// (0x000254d0) bg_vkb2_func_pane_cp08

0x8e37,	// (0x000254b6) bg_vkb2_func_pane_cp06

0x8e45,	// (0x000254c4) bg_vkb2_func_pane_cp07

0x0060,	// (0x0001c6df) bg_vkb2_func_pane_cp11_ParamLimits

0x0060,	// (0x0001c6df) bg_vkb2_func_pane_cp11

0x0075,	// (0x0001c6f4) bg_vkb2_func_pane_cp12_ParamLimits

0x0075,	// (0x0001c6f4) bg_vkb2_func_pane_cp12

0xb494,	// (0x00027b13) bg_vkb2_func_pane_cp09

0xeb13,	// (0x0002b192) bg_vkb2_func_pane_g1

0xbffd,	// (0x0002867c) bg_vkb2_func_pane_g2

0xeb1b,	// (0x0002b19a) bg_vkb2_func_pane_g3

0xeb23,	// (0x0002b1a2) bg_vkb2_func_pane_g4

0xed8f,	// (0x0002b40e) bg_vkb2_func_pane_g5

0xeb3b,	// (0x0002b1ba) bg_vkb2_func_pane_g6

0xeb43,	// (0x0002b1c2) bg_vkb2_func_pane_g7

0xeb33,	// (0x0002b1b2) bg_vkb2_func_pane_g8

0xbfdd,	// (0x0002865c) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0002c1ab) bg_vkb2_func_pane_g

0x90f8,	// (0x00025777) blid2_tripm_pane_g6_ParamLimits

0x90f8,	// (0x00025777) blid2_tripm_pane_g6

0xe991,	// (0x0002b010) mp4_progress_pane_g1

0x9152,	// (0x000257d1) blid2_tripm_values_pane_ParamLimits

0x9152,	// (0x000257d1) blid2_tripm_values_pane

0x920f,	// (0x0002588e) blid2_tripm_values_pane_t1

0x921d,	// (0x0002589c) blid2_tripm_values_pane_t2

0x922b,	// (0x000258aa) blid2_tripm_values_pane_t3

0x9239,	// (0x000258b8) blid2_tripm_values_pane_t4

0x9247,	// (0x000258c6) blid2_tripm_values_pane_t5

0x9255,	// (0x000258d4) blid2_tripm_values_pane_t6

0x9263,	// (0x000258e2) blid2_tripm_values_pane_t7

0x9271,	// (0x000258f0) blid2_tripm_values_pane_t8

0x927f,	// (0x000258fe) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0002c1be) blid2_tripm_values_pane_t

0x4ce2,	// (0x00021361) call_video_pane_t1_ParamLimits

0x4d03,	// (0x00021382) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0002b8ed) call_video_pane_t_ParamLimits

0x6716,	// (0x00022d95) msg_header_pane_g1_ParamLimits

0xc993,	// (0x00029012) msg_header_pane_g2_ParamLimits

0xc993,	// (0x00029012) msg_header_pane_g2

0x0001,

0xf488,	// (0x0002bb07) msg_header_pane_g_ParamLimits

0xf488,	// (0x0002bb07) msg_header_pane_g

0xbbdf,	// (0x0002825e) main_clock2_pane_ParamLimits

0x7d50,	// (0x000243cf) grid_clock2_toolbar_pane_ParamLimits

0x7d50,	// (0x000243cf) grid_clock2_toolbar_pane

0x7d50,	// (0x000243cf) listscroll_clock2_pane_ParamLimits

0x7d50,	// (0x000243cf) listscroll_clock2_pane

0x7df6,	// (0x00024475) main_clock2_pane_t3_ParamLimits

0x7df6,	// (0x00024475) main_clock2_pane_t3

0x7e08,	// (0x00024487) main_clock2_pane_t4_ParamLimits

0x7e08,	// (0x00024487) main_clock2_pane_t4

0x0172,	// (0x0001c7f1) cell_clock2_toolbar_pane

0x017a,	// (0x0001c7f9) cell_clock2_toolbar_pane_cp01

0x017a,	// (0x0001c7f9) cell_clock2_toolbar_pane_cp02

0x0182,	// (0x0001c801) cell_clock2_toolbar_pane_cp03

0x018a,	// (0x0001c809) list_clock2_pane

0xc5bd,	// (0x00028c3c) scroll_pane_cp10

0x0192,	// (0x0001c811) list_single_clock2_pane_ParamLimits

0x0192,	// (0x0001c811) list_single_clock2_pane

0xbda4,	// (0x00028423) list_highlight_pane_cp08

0x019f,	// (0x0001c81e) list_single_clock2_pane_t1

0x01ad,	// (0x0001c82c) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0002c1d1) list_single_clock2_pane_t

0xb494,	// (0x00027b13) bg_button_pane_cp10

0x01bb,	// (0x0001c83a) cell_clock2_toolbar_pane_g1

0x2d50,	// (0x0001f3cf) aid_main_viewer_pane_g1_ParamLimits

0x2d50,	// (0x0001f3cf) aid_main_viewer_pane_g1

0x2d5c,	// (0x0001f3db) aid_main_viewer_pane_g2_ParamLimits

0x2d5c,	// (0x0001f3db) aid_main_viewer_pane_g2

0x6722,	// (0x00022da1) aid_main_viewer_pane_g3_ParamLimits

0x6722,	// (0x00022da1) aid_main_viewer_pane_g3

0x6733,	// (0x00022db2) aid_main_viewer_pane_g4_ParamLimits

0x6733,	// (0x00022db2) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0002bb18) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0002bb18) aid_main_viewer_pane_g

0x2da8,	// (0x0001f427) main_calc_pane_ParamLimits

0x2dc3,	// (0x0001f442) main_dialer2_pane_ParamLimits

0x295d,	// (0x0001efdc) main_cam6_pane

0x295d,	// (0x0001efdc) main_vid6_pane

0x7d5c,	// (0x000243db) listscroll_gen_pane_cp06_ParamLimits

0x7d5c,	// (0x000243db) listscroll_gen_pane_cp06

0x7e1a,	// (0x00024499) main_clock2_pane_t5_ParamLimits

0x7e1a,	// (0x00024499) main_clock2_pane_t5

0x7e63,	// (0x000244e2) aid_call2_pane_cp10_ParamLimits

0x7e75,	// (0x000244f4) aid_call_pane_cp10_ParamLimits

0xc63b,	// (0x00028cba) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc63b,	// (0x00028cba) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7e87,	// (0x00024506) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7e87,	// (0x00024506) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc63b,	// (0x00028cba) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0002be53) popup_clock_analogue_window_cp10_g_ParamLimits

0x7e99,	// (0x00024518) popup_clock_analogue_window_cp10_t1_ParamLimits

0x8285,	// (0x00024904) cell_dialer2_keypad_pane_g2_ParamLimits

0x8285,	// (0x00024904) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0002bf39) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0002bf39) cell_dialer2_keypad_pane_g

0x82a1,	// (0x00024920) cell_dialer2_keypad_pane_t1

0x863f,	// (0x00024cbe) main_cset_text2_pane_ParamLimits

0x863f,	// (0x00024cbe) main_cset_text2_pane

0xefd1,	// (0x0002b650) area_vitu2_query_pane_g1_ParamLimits

0x8dd6,	// (0x00025455) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0002c0ee) area_vitu2_query_pane_g_ParamLimits

0xf055,	// (0x0002b6d4) area_vitu2_query_pane_t7_ParamLimits

0xf055,	// (0x0002b6d4) area_vitu2_query_pane_t7

0x8e37,	// (0x000254b6) bg_button_pane_cp018_ParamLimits

0x8e45,	// (0x000254c4) bg_button_pane_cp021_ParamLimits

0x8e51,	// (0x000254d0) bg_button_pane_cp022_ParamLimits

0x8e51,	// (0x000254d0) bg_vkb2_func_pane_cp08_ParamLimits

0x8e37,	// (0x000254b6) bg_vkb2_func_pane_cp06_ParamLimits

0x8e45,	// (0x000254c4) bg_vkb2_func_pane_cp07_ParamLimits

0x8e62,	// (0x000254e1) input_focus_pane_cp09_ParamLimits

0x3f8a,	// (0x00020609) cam6_autofocus_pane_ParamLimits

0x3f8a,	// (0x00020609) cam6_autofocus_pane

0x3fac,	// (0x0002062b) cam6_image_uncrop_pane_ParamLimits

0x3fac,	// (0x0002062b) cam6_image_uncrop_pane

0x3fd9,	// (0x00020658) cam6_indi_pane_ParamLimits

0x3fd9,	// (0x00020658) cam6_indi_pane

0x3ff3,	// (0x00020672) cam6_mode_pane_ParamLimits

0x3ff3,	// (0x00020672) cam6_mode_pane

0x4007,	// (0x00020686) cam6_timer_pane_ParamLimits

0x4007,	// (0x00020686) cam6_timer_pane

0x4013,	// (0x00020692) cam6_zoom_pane_ParamLimits

0x4013,	// (0x00020692) cam6_zoom_pane

0x928d,	// (0x0002590c) cam6_mode_pane_g1_ParamLimits

0x928d,	// (0x0002590c) cam6_mode_pane_g1

0x9299,	// (0x00025918) cam6_mode_pane_g2_ParamLimits

0x9299,	// (0x00025918) cam6_mode_pane_g2

0x92a5,	// (0x00025924) cam6_mode_pane_g3_ParamLimits

0x92a5,	// (0x00025924) cam6_mode_pane_g3

0x92b1,	// (0x00025930) cam6_mode_pane_g4_ParamLimits

0x92b1,	// (0x00025930) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0002c1d6) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0002c1d6) cam6_mode_pane_g

0xeba5,	// (0x0002b224) bg_tb_trans_pane_cp08_ParamLimits

0xeba5,	// (0x0002b224) bg_tb_trans_pane_cp08

0x01d1,	// (0x0001c850) cam6_battery_pane_ParamLimits

0x01d1,	// (0x0001c850) cam6_battery_pane

0x01e7,	// (0x0001c866) cam6_indi_pane_g1_ParamLimits

0x01e7,	// (0x0001c866) cam6_indi_pane_g1

0x01f9,	// (0x0001c878) cam6_indi_pane_g2_ParamLimits

0x01f9,	// (0x0001c878) cam6_indi_pane_g2

0x020b,	// (0x0001c88a) cam6_indi_pane_g3_ParamLimits

0x020b,	// (0x0001c88a) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0002c1df) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0002c1df) cam6_indi_pane_g

0x021d,	// (0x0001c89c) cam6_indi_pane_t1_ParamLimits

0x021d,	// (0x0001c89c) cam6_indi_pane_t1

0x8340,	// (0x000249bf) cam6_autofocus_pane_g1

0x8338,	// (0x000249b7) cam6_autofocus_pane_g2

0x8350,	// (0x000249cf) cam6_autofocus_pane_g3

0x8348,	// (0x000249c7) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0002c1e6) cam6_autofocus_pane_g

0x0243,	// (0x0001c8c2) cam6_timer_pane_g1

0x024b,	// (0x0001c8ca) cam6_timer_pane_t1

0x0259,	// (0x0001c8d8) cam6_zoom_cont_pane

0x0261,	// (0x0001c8e0) cam6_zoom_pane_g1

0x0269,	// (0x0001c8e8) cam6_zoom_pane_g2

0x92bd,	// (0x0002593c) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0002c1ef) cam6_zoom_pane_g

0xe09a,	// (0x0002a719) cam6_battery_pane_g1

0xe09a,	// (0x0002a719) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0002bd5b) cam6_battery_pane_g

0x0271,	// (0x0001c8f0) cam6_zoom_cont_pane_g1

0x027a,	// (0x0001c8f9) cam6_zoom_cont_pane_g2

0x0283,	// (0x0001c902) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0002c1f6) cam6_zoom_cont_pane_g

0x92da,	// (0x00025959) cam6_mode_pane_cp_ParamLimits

0x92da,	// (0x00025959) cam6_mode_pane_cp

0x92ee,	// (0x0002596d) cam6_zoom_pane_cp_ParamLimits

0x92ee,	// (0x0002596d) cam6_zoom_pane_cp

0x9306,	// (0x00025985) vid6_image_uncrop_cif_pane_ParamLimits

0x9306,	// (0x00025985) vid6_image_uncrop_cif_pane

0x9332,	// (0x000259b1) vid6_image_uncrop_nhd_pane_ParamLimits

0x9332,	// (0x000259b1) vid6_image_uncrop_nhd_pane

0x934f,	// (0x000259ce) vid6_image_uncrop_vga_pane_ParamLimits

0x934f,	// (0x000259ce) vid6_image_uncrop_vga_pane

0x936e,	// (0x000259ed) vid6_image_uncrop_wvga_pane_ParamLimits

0x936e,	// (0x000259ed) vid6_image_uncrop_wvga_pane

0x938b,	// (0x00025a0a) vid6_indi_pane_ParamLimits

0x938b,	// (0x00025a0a) vid6_indi_pane

0xeba5,	// (0x0002b224) bg_tb_trans_pane_cp09_ParamLimits

0xeba5,	// (0x0002b224) bg_tb_trans_pane_cp09

0x029b,	// (0x0001c91a) cam6_battery_pane_cp_ParamLimits

0x029b,	// (0x0001c91a) cam6_battery_pane_cp

0x02a7,	// (0x0001c926) vid6_indi_pane_g1_ParamLimits

0x02a7,	// (0x0001c926) vid6_indi_pane_g1

0x02b9,	// (0x0001c938) vid6_indi_pane_g2_ParamLimits

0x02b9,	// (0x0001c938) vid6_indi_pane_g2

0x02cb,	// (0x0001c94a) vid6_indi_pane_g3_ParamLimits

0x02cb,	// (0x0001c94a) vid6_indi_pane_g3

0x02e0,	// (0x0001c95f) vid6_indi_pane_g4_ParamLimits

0x02e0,	// (0x0001c95f) vid6_indi_pane_g4

0x02f5,	// (0x0001c974) vid6_indi_pane_g5_ParamLimits

0x02f5,	// (0x0001c974) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0002c1fd) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0002c1fd) vid6_indi_pane_g

0x030f,	// (0x0001c98e) vid6_indi_pane_t1_ParamLimits

0x030f,	// (0x0001c98e) vid6_indi_pane_t1

0x0325,	// (0x0001c9a4) vid6_indi_pane_t2_ParamLimits

0x0325,	// (0x0001c9a4) vid6_indi_pane_t2

0x034d,	// (0x0001c9cc) vid6_indi_pane_t3_ParamLimits

0x034d,	// (0x0001c9cc) vid6_indi_pane_t3

0x0375,	// (0x0001c9f4) vid6_indi_pane_t4_ParamLimits

0x0375,	// (0x0001c9f4) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0002c208) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0002c208) vid6_indi_pane_t

0x0399,	// (0x0001ca18) wait_bar_pane_cp08

0x93b0,	// (0x00025a2f) main_cset_text2_pane_t1_ParamLimits

0x93b0,	// (0x00025a2f) main_cset_text2_pane_t1

0x92c5,	// (0x00025944) listscroll_gen_pane_cp06_t1_ParamLimits

0x92c5,	// (0x00025944) listscroll_gen_pane_cp06_t1

0x295d,	// (0x0001efdc) main_cam6_set_pane

0x38ff,	// (0x0001ff7e) bg_tb_trans_pane_cp06_ParamLimits

0x3915,	// (0x0001ff94) cam4_indicators_pane_g1_ParamLimits

0x3926,	// (0x0001ffa5) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0002bf76) cam4_indicators_pane_g_ParamLimits

0x3944,	// (0x0001ffc3) cam4_indicators_pane_t1_ParamLimits

0x2db5,	// (0x0001f434) bg_tb_trans_pane_cp07_ParamLimits

0x39f7,	// (0x00020076) vid4_indicators_pane_g1_ParamLimits

0x3a0b,	// (0x0002008a) vid4_indicators_pane_g2_ParamLimits

0x3a1f,	// (0x0002009e) vid4_indicators_pane_g3_ParamLimits

0x3a30,	// (0x000200af) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0002bf88) vid4_indicators_pane_g_ParamLimits

0x3a4e,	// (0x000200cd) vid4_indicators_pane_t1_ParamLimits

0x3eed,	// (0x0002056c) vid4_progress_pane_g1_ParamLimits

0x3efd,	// (0x0002057c) vid4_progress_pane_g2_ParamLimits

0x3f0d,	// (0x0002058c) vid4_progress_pane_g3_ParamLimits

0x3f1f,	// (0x0002059e) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0002c139) vid4_progress_pane_g_ParamLimits

0x3f37,	// (0x000205b6) vid4_progress_pane_t1_ParamLimits

0x3f4d,	// (0x000205cc) vid4_progress_pane_t2_ParamLimits

0x3f62,	// (0x000205e1) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0002c144) vid4_progress_pane_t_ParamLimits

0x3f77,	// (0x000205f6) wait_bar_pane_cp07_ParamLimits

0x93e3,	// (0x00025a62) main_cam6_set_pane_g2_ParamLimits

0x93e3,	// (0x00025a62) main_cam6_set_pane_g2

0x93ef,	// (0x00025a6e) main_cset6_listscroll_pane_ParamLimits

0x93ef,	// (0x00025a6e) main_cset6_listscroll_pane

0x941a,	// (0x00025a99) main_cset6_slider_pane_ParamLimits

0x941a,	// (0x00025a99) main_cset6_slider_pane

0x9426,	// (0x00025aa5) main_cset6_text2_pane_ParamLimits

0x9426,	// (0x00025aa5) main_cset6_text2_pane

0x03a8,	// (0x0001ca27) main_cset6_text_pane

0x03b0,	// (0x0001ca2f) main_cset_list_pane_copy1_ParamLimits

0x03b0,	// (0x0001ca2f) main_cset_list_pane_copy1

0x03c0,	// (0x0001ca3f) scroll_pane_cp028_copy1

0x9439,	// (0x00025ab8) cset_list_set_pane_copy1

0x944c,	// (0x00025acb) aid_position_infowindow_above_copy1

0x9454,	// (0x00025ad3) aid_position_infowindow_below_copy1

0x945c,	// (0x00025adb) cset_list_set_pane_g1_copy1

0xed3a,	// (0x0002b3b9) cset_list_set_pane_g3_copy1_ParamLimits

0xed3a,	// (0x0002b3b9) cset_list_set_pane_g3_copy1

0xed49,	// (0x0002b3c8) cset_list_set_pane_t1_copy1_ParamLimits

0xed49,	// (0x0002b3c8) cset_list_set_pane_t1_copy1

0xbba5,	// (0x00028224) list_highlight_pane_cp021_copy1_ParamLimits

0xbba5,	// (0x00028224) list_highlight_pane_cp021_copy1

0x03c9,	// (0x0001ca48) cset6_slider_pane_ParamLimits

0x03c9,	// (0x0001ca48) cset6_slider_pane

0x03f5,	// (0x0001ca74) main_cset6_slider_pane_g1_ParamLimits

0x03f5,	// (0x0001ca74) main_cset6_slider_pane_g1

0x9464,	// (0x00025ae3) main_cset6_slider_pane_g2_ParamLimits

0x9464,	// (0x00025ae3) main_cset6_slider_pane_g2

0x041d,	// (0x0001ca9c) main_cset6_slider_pane_g3_ParamLimits

0x041d,	// (0x0001ca9c) main_cset6_slider_pane_g3

0x948c,	// (0x00025b0b) main_cset6_slider_pane_g4_ParamLimits

0x948c,	// (0x00025b0b) main_cset6_slider_pane_g4

0x9498,	// (0x00025b17) main_cset6_slider_pane_g5_ParamLimits

0x9498,	// (0x00025b17) main_cset6_slider_pane_g5

0xec6a,	// (0x0002b2e9) main_cset6_slider_pane_g7_ParamLimits

0xec6a,	// (0x0002b2e9) main_cset6_slider_pane_g7

0xec76,	// (0x0002b2f5) main_cset6_slider_pane_g8_ParamLimits

0xec76,	// (0x0002b2f5) main_cset6_slider_pane_g8

0x94a6,	// (0x00025b25) main_cset6_slider_pane_g9_ParamLimits

0x94a6,	// (0x00025b25) main_cset6_slider_pane_g9

0x94b2,	// (0x00025b31) main_cset6_slider_pane_g10_ParamLimits

0x94b2,	// (0x00025b31) main_cset6_slider_pane_g10

0x94be,	// (0x00025b3d) main_cset6_slider_pane_g11_ParamLimits

0x94be,	// (0x00025b3d) main_cset6_slider_pane_g11

0x94ca,	// (0x00025b49) main_cset6_slider_pane_g12_ParamLimits

0x94ca,	// (0x00025b49) main_cset6_slider_pane_g12

0x94d6,	// (0x00025b55) main_cset6_slider_pane_g13_ParamLimits

0x94d6,	// (0x00025b55) main_cset6_slider_pane_g13

0x94e2,	// (0x00025b61) main_cset6_slider_pane_g14_ParamLimits

0x94e2,	// (0x00025b61) main_cset6_slider_pane_g14

0x94ee,	// (0x00025b6d) main_cset6_slider_pane_g15_ParamLimits

0x94ee,	// (0x00025b6d) main_cset6_slider_pane_g15

0x9506,	// (0x00025b85) main_cset6_slider_pane_g16_ParamLimits

0x9506,	// (0x00025b85) main_cset6_slider_pane_g16

0x9514,	// (0x00025b93) main_cset6_slider_pane_g17_ParamLimits

0x9514,	// (0x00025b93) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0002c211) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0002c211) main_cset6_slider_pane_g

0x0429,	// (0x0001caa8) main_cset6_slider_pane_t1_ParamLimits

0x0429,	// (0x0001caa8) main_cset6_slider_pane_t1

0x953a,	// (0x00025bb9) main_cset6_slider_pane_t2_ParamLimits

0x953a,	// (0x00025bb9) main_cset6_slider_pane_t2

0x9565,	// (0x00025be4) main_cset6_slider_pane_t3_ParamLimits

0x9565,	// (0x00025be4) main_cset6_slider_pane_t3

0x9590,	// (0x00025c0f) main_cset6_slider_pane_t4_ParamLimits

0x9590,	// (0x00025c0f) main_cset6_slider_pane_t4

0x95bb,	// (0x00025c3a) main_cset6_slider_pane_t5_ParamLimits

0x95bb,	// (0x00025c3a) main_cset6_slider_pane_t5

0x046a,	// (0x0001cae9) main_cset6_slider_pane_t7_ParamLimits

0x046a,	// (0x0001cae9) main_cset6_slider_pane_t7

0x95e8,	// (0x00025c67) main_cset6_slider_pane_t8_ParamLimits

0x95e8,	// (0x00025c67) main_cset6_slider_pane_t8

0x960c,	// (0x00025c8b) main_cset6_slider_pane_t9_ParamLimits

0x960c,	// (0x00025c8b) main_cset6_slider_pane_t9

0x9630,	// (0x00025caf) main_cset6_slider_pane_t10_ParamLimits

0x9630,	// (0x00025caf) main_cset6_slider_pane_t10

0x9654,	// (0x00025cd3) main_cset6_slider_pane_t11_ParamLimits

0x9654,	// (0x00025cd3) main_cset6_slider_pane_t11

0x04a0,	// (0x0001cb1f) main_cset6_slider_pane_t14_ParamLimits

0x04a0,	// (0x0001cb1f) main_cset6_slider_pane_t14

0x04d9,	// (0x0001cb58) main_cset6_slider_pane_t15_ParamLimits

0x04d9,	// (0x0001cb58) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0002c236) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0002c236) main_cset6_slider_pane_t

0xed97,	// (0x0002b416) cset_slider_pane_g1_copy1

0xeda0,	// (0x0002b41f) cset_slider_pane_g2_copy1

0xeda9,	// (0x0002b428) cset_slider_pane_g3_copy1

0xb494,	// (0x00027b13) bg_popup_sub_pane_cp011_copy1

0x0512,	// (0x0001cb91) main_cset_text_pane_g1_copy1

0xedf9,	// (0x0002b478) main_cset_text_pane_t1_copy1

0xee07,	// (0x0002b486) main_cset_text_pane_t2_copy1

0xee15,	// (0x0002b494) main_cset_text_pane_t3_copy1

0xee23,	// (0x0002b4a2) main_cset_text_pane_t4_copy1

0xee31,	// (0x0002b4b0) main_cset_text_pane_t5_copy1

0x051a,	// (0x0001cb99) main_cset_text_pane_t6_copy1

0x0528,	// (0x0001cba7) main_cset_text_pane_t7_copy1

0x9750,	// (0x00025dcf) main_cset_text2_pane_t1_copy1

0x2db5,	// (0x0001f434) main_ncimui_pane

0x2e14,	// (0x0001f493) popup_query_ncimui_window_ParamLimits

0x2e14,	// (0x0001f493) popup_query_ncimui_window

0xe362,	// (0x0002a9e1) field_cale_ev2_pane_g4_ParamLimits

0xe362,	// (0x0002a9e1) field_cale_ev2_pane_g4

0x8225,	// (0x000248a4) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8225,	// (0x000248a4) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0002bf14) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0002bf14) cell_video_dialer_keypad_pane_g

0x823d,	// (0x000248bc) cell_video_dialer_keypad_pane_t1

0xb494,	// (0x00027b13) bg_popup_window_pane_cp012

0xc48a,	// (0x00028b09) heading_pane_cp06

0x0554,	// (0x0001cbd3) ncim_query_content_pane

0xb494,	// (0x00027b13) bg_popup_heading_pane_cp01

0x055c,	// (0x0001cbdb) ncim_heading_pane_t1

0x056a,	// (0x0001cbe9) ncim_indicator_popup_pane

0x057c,	// (0x0001cbfb) ncim_query_button_pane

0x0590,	// (0x0001cc0f) ncim_query_content_pane_t1

0x05a2,	// (0x0001cc21) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0002c27a) ncim_query_content_pane_t

0x05dc,	// (0x0001cc5b) ncim_query_list_pane

0x05ee,	// (0x0001cc6d) ncim_query_popup_pane

0x056a,	// (0x0001cbe9) ncim_indicator_popup_pane_ParamLimits

0x98a3,	// (0x00025f22) ncim_query_content_pane_g1_ParamLimits

0x98a3,	// (0x00025f22) ncim_query_content_pane_g1

0x0590,	// (0x0001cc0f) ncim_query_content_pane_t1_ParamLimits

0x05a2,	// (0x0001cc21) ncim_query_content_pane_t2_ParamLimits

0x98af,	// (0x00025f2e) ncim_query_content_pane_t3_ParamLimits

0x98af,	// (0x00025f2e) ncim_query_content_pane_t3

0x98cc,	// (0x00025f4b) ncim_query_content_pane_t4_ParamLimits

0x98cc,	// (0x00025f4b) ncim_query_content_pane_t4

0x98e9,	// (0x00025f68) ncim_query_content_pane_t5_ParamLimits

0x98e9,	// (0x00025f68) ncim_query_content_pane_t5

0x05b4,	// (0x0001cc33) ncim_query_content_pane_t6_ParamLimits

0x05b4,	// (0x0001cc33) ncim_query_content_pane_t6

0xfbfb,	// (0x0002c27a) ncim_query_content_pane_t_ParamLimits

0x05dc,	// (0x0001cc5b) ncim_query_list_pane_ParamLimits

0x05ee,	// (0x0001cc6d) ncim_query_popup_pane_ParamLimits

0x0602,	// (0x0001cc81) wait_bar_pane_cp04

0xb494,	// (0x00027b13) input_focus_pane_cp011

0x060a,	// (0x0001cc89) ncim_query_popup_pane_t1

0x0618,	// (0x0001cc97) ncim_list_query_list_pane_ParamLimits

0x0618,	// (0x0001cc97) ncim_list_query_list_pane

0xb494,	// (0x00027b13) bg_button_pane_cp027

0x0625,	// (0x0001cca4) ncim_query_button_pane_g1

0xb494,	// (0x00027b13) list_highlight_pane_cp012

0x062f,	// (0x0001ccae) ncim_list_query_list_pane_g1

0x0637,	// (0x0001ccb6) ncim_list_query_list_pane_t1

0x3935,	// (0x0001ffb4) cam4_indicators_pane_g3_ParamLimits

0x3935,	// (0x0001ffb4) cam4_indicators_pane_g3

0x3a3c,	// (0x000200bb) vid4_indicators_pane_g5_ParamLimits

0x3a3c,	// (0x000200bb) vid4_indicators_pane_g5

0x3f2b,	// (0x000205aa) vid4_progress_pane_g5_ParamLimits

0x3f2b,	// (0x000205aa) vid4_progress_pane_g5

0x978f,	// (0x00025e0e) main_ncimui_pane_g1

0x97f7,	// (0x00025e76) ncimui_group_query_pane_ParamLimits

0x97f7,	// (0x00025e76) ncimui_group_query_pane

0x983f,	// (0x00025ebe) ncimui_list_pane_ParamLimits

0x983f,	// (0x00025ebe) ncimui_list_pane

0x9866,	// (0x00025ee5) ncimui_text_pane_ParamLimits

0x9866,	// (0x00025ee5) ncimui_text_pane

0x9906,	// (0x00025f85) ncimui_text_pane_t1_ParamLimits

0x9906,	// (0x00025f85) ncimui_text_pane_t1

0x0645,	// (0x0001ccc4) ncimui_list_single_graphic_pane_ParamLimits

0x0645,	// (0x0001ccc4) ncimui_list_single_graphic_pane

0x9925,	// (0x00025fa4) ncimui_query_pane_ParamLimits

0x9925,	// (0x00025fa4) ncimui_query_pane

0xb494,	// (0x00027b13) list_highlight_pane_cp013

0x0655,	// (0x0001ccd4) ncim_list_query_list_pane_t1_copy1

0x062f,	// (0x0001ccae) ncim_list_single_graphic_pane_g1

0x9938,	// (0x00025fb7) ncim_query_button_pane_cp01

0x9944,	// (0x00025fc3) ncim_query_entry_pane_ParamLimits

0x9944,	// (0x00025fc3) ncim_query_entry_pane

0x9957,	// (0x00025fd6) ncimui_query_pane_g1

0x9963,	// (0x00025fe2) ncimui_query_pane_t1_ParamLimits

0x9963,	// (0x00025fe2) ncimui_query_pane_t1

0xbba5,	// (0x00028224) input_focus_pane_cp012

0x0663,	// (0x0001cce2) ncim_query_entry_pane_t1

0xbbdf,	// (0x0002825e) main_im_pane_ParamLimits

0x2db5,	// (0x0001f434) main_mobtv_pane_ParamLimits

0x2db5,	// (0x0001f434) main_mobtv_pane

0x9522,	// (0x00025ba1) main_cset6_slider_pane_g18_ParamLimits

0x9522,	// (0x00025ba1) main_cset6_slider_pane_g18

0x952e,	// (0x00025bad) main_cset6_slider_pane_g19_ParamLimits

0x952e,	// (0x00025bad) main_cset6_slider_pane_g19

0xead6,	// (0x0002b155) bg_main_mobtv_pane_ParamLimits

0xead6,	// (0x0002b155) bg_main_mobtv_pane

0x997c,	// (0x00025ffb) main_mobtv_info_pane

0x9987,	// (0x00026006) main_mobtv_loading_pane_ParamLimits

0x9987,	// (0x00026006) main_mobtv_loading_pane

0x0675,	// (0x0001ccf4) main_mobtv_pg_channel_list_pane

0x067f,	// (0x0001ccfe) main_mobtv_pg_hdr_pane

0x9994,	// (0x00026013) main_mobtv_programe_curr_pane_ParamLimits

0x9994,	// (0x00026013) main_mobtv_programe_curr_pane

0x99a1,	// (0x00026020) main_mobtv_programe_next_pane_ParamLimits

0x99a1,	// (0x00026020) main_mobtv_programe_next_pane

0x0688,	// (0x0001cd07) popup_mobtv_noti_window

0xe09a,	// (0x0002a719) main_tv_pg_hdr_pane_g1

0x0690,	// (0x0001cd0f) main_tv_pg_hdr_pane_g2

0x0698,	// (0x0001cd17) main_tv_pg_hdr_pane_g3

0x06a0,	// (0x0001cd1f) main_tv_pg_hdr_pane_g4

0x06a8,	// (0x0001cd27) main_tv_pg_hdr_pane_g5

0x06b2,	// (0x0001cd31) main_tv_pg_hdr_pane_g6

0x06bc,	// (0x0001cd3b) main_tv_pg_hdr_pane_g7

0x06c6,	// (0x0001cd45) main_tv_pg_hdr_pane_g8

0x06d0,	// (0x0001cd4f) main_tv_pg_hdr_pane_g9

0x06da,	// (0x0001cd59) main_tv_pg_hdr_pane_g10

0x06e4,	// (0x0001cd63) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0002c287) main_tv_pg_hdr_pane_g

0x06ee,	// (0x0001cd6d) main_tv_pg_hdr_pane_t1

0x06fc,	// (0x0001cd7b) main_tv_pg_hdr_pane_t2

0x070a,	// (0x0001cd89) main_tv_pg_hdr_pane_t3

0x071a,	// (0x0001cd99) main_tv_pg_hdr_pane_t4

0x072a,	// (0x0001cda9) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0002c29e) main_tv_pg_hdr_pane_t

0x073a,	// (0x0001cdb9) single_mobtv_pg_channel_pane_ParamLimits

0x073a,	// (0x0001cdb9) single_mobtv_pg_channel_pane

0x074c,	// (0x0001cdcb) single_mobtv_pg_channel_table_pane

0x0755,	// (0x0001cdd4) single_mobtv_pg_channel_thumb_pane

0x075e,	// (0x0001cddd) single_tv_pg_channel_pane_g1

0x0767,	// (0x0001cde6) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0002c2a9) single_tv_pg_channel_pane_g

0xe2fd,	// (0x0002a97c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe2fd,	// (0x0002a97c) bg_single_mobtv_pg_channel_thumb_pane

0x0770,	// (0x0001cdef) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x0770,	// (0x0001cdef) single_mobtv_pg_channel_thumb_pane_g1

0x077e,	// (0x0001cdfd) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x077e,	// (0x0001cdfd) single_mobtv_pg_channel_thumb_pane_g2

0x078a,	// (0x0001ce09) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x078a,	// (0x0001ce09) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0002c2ae) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0002c2ae) single_mobtv_pg_channel_thumb_pane_g

0x0796,	// (0x0001ce15) single_mobtv_pg_channel_thumb_pane_t1

0x07a4,	// (0x0001ce23) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0002c2b5) single_mobtv_pg_channel_thumb_pane_t

0xe09a,	// (0x0002a719) bg_single_mobtv_pg_channel_table_pane_g1

0xe09a,	// (0x0002a719) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0002bd5b) bg_single_mobtv_pg_channel_table_pane_g

0x07b2,	// (0x0001ce31) single_mobtv_pg_channel_table_pane_t1

0x07c0,	// (0x0001ce3f) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0002c2ba) single_mobtv_pg_channel_table_pane_t

0x99b6,	// (0x00026035) main_mobtv_info_pane_g1_ParamLimits

0x99b6,	// (0x00026035) main_mobtv_info_pane_g1

0x99d2,	// (0x00026051) main_mobtv_info_pane_t1_ParamLimits

0x99d2,	// (0x00026051) main_mobtv_info_pane_t1

0x9a4a,	// (0x000260c9) main_mobtv_info_pane_t2_ParamLimits

0x9a4a,	// (0x000260c9) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0002c2c4) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0002c2c4) main_mobtv_info_pane_t

0x9ad9,	// (0x00026158) wait_bar_pane_cp05

0x9aeb,	// (0x0002616a) main_mobtv_loading_pane_g1_ParamLimits

0x9aeb,	// (0x0002616a) main_mobtv_loading_pane_g1

0x9af9,	// (0x00026178) main_mobtv_loading_pane_g2_ParamLimits

0x9af9,	// (0x00026178) main_mobtv_loading_pane_g2

0x9b05,	// (0x00026184) main_mobtv_loading_pane_g3_ParamLimits

0x9b05,	// (0x00026184) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0002c2cb) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0002c2cb) main_mobtv_loading_pane_g

0x07ce,	// (0x0001ce4d) main_mobtv_loading_pane_t1_ParamLimits

0x07ce,	// (0x0001ce4d) main_mobtv_loading_pane_t1

0x07e6,	// (0x0001ce65) main_mobtv_loading_pane_t2_ParamLimits

0x07e6,	// (0x0001ce65) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0002c2d2) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0002c2d2) main_mobtv_loading_pane_t

0x9b13,	// (0x00026192) wait_bar_pane_cp06_ParamLimits

0x9b13,	// (0x00026192) wait_bar_pane_cp06

0x080a,	// (0x0001ce89) main_mobtv_programe_curr_pane_t1

0x0818,	// (0x0001ce97) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0002c2d7) main_mobtv_programe_curr_pane_t

0x0826,	// (0x0001cea5) main_mobtv_programe_next_pane_t1

0x0834,	// (0x0001ceb3) main_mobtv_programe_next_pane_t2

0x0842,	// (0x0001cec1) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0002c2dc) main_mobtv_programe_next_pane_t

0xb494,	// (0x00027b13) bg_popup_mobtv_noti_window_pane

0x0850,	// (0x0001cecf) popup_mobtv_noti_window_g1

0x0858,	// (0x0001ced7) popup_mobtv_noti_window_t1

0x0866,	// (0x0001cee5) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0002c2e3) popup_mobtv_noti_window_t

0xe09a,	// (0x0002a719) bg_popup_mobtv_noti_window_pane_g1

0x295d,	// (0x0001efdc) sc_clock_pane

0x295d,	// (0x0001efdc) main_fs_bigclock_pane

0x9140,	// (0x000257bf) blid2_tripm_pane_t4_ParamLimits

0x9140,	// (0x000257bf) blid2_tripm_pane_t4

0x9b1f,	// (0x0002619e) sc_clock_pane_g1_ParamLimits

0x9b1f,	// (0x0002619e) sc_clock_pane_g1

0x9b2d,	// (0x000261ac) sc_clock_pane_t1_ParamLimits

0x9b2d,	// (0x000261ac) sc_clock_pane_t1

0x9b40,	// (0x000261bf) sc_clock_pane_t2_ParamLimits

0x9b40,	// (0x000261bf) sc_clock_pane_t2

0x9b52,	// (0x000261d1) sc_clock_pane_t3_ParamLimits

0x9b52,	// (0x000261d1) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0002c2e8) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0002c2e8) sc_clock_pane_t

0xaa84,	// (0x00027103) main_fs_bigclock_indicator_pane_ParamLimits

0xaa84,	// (0x00027103) main_fs_bigclock_indicator_pane

0x9bd5,	// (0x00026254) main_fs_bigclock_pane_g1_ParamLimits

0x9bd5,	// (0x00026254) main_fs_bigclock_pane_g1

0xaa90,	// (0x0002710f) main_fs_bigclock_pane_t1_ParamLimits

0xaa90,	// (0x0002710f) main_fs_bigclock_pane_t1

0xaaa2,	// (0x00027121) main_fs_bigclock_pane_t2_ParamLimits

0xaaa2,	// (0x00027121) main_fs_bigclock_pane_t2

0xaab6,	// (0x00027135) main_fs_bigclock_pane_t3_ParamLimits

0xaab6,	// (0x00027135) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0002c4ed) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0002c4ed) main_fs_bigclock_pane_t

0x13f9,	// (0x0001da78) main_fs_bigclock_indicator_pane_g1

0x0584,	// (0x0001cc03) ncim_query_content_pane_g2_ParamLimits

0x0584,	// (0x0001cc03) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0002c275) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0002c275) ncim_query_content_pane_g

0x9b66,	// (0x000261e5) sc_clock_pane_t4_ParamLimits

0x9b66,	// (0x000261e5) sc_clock_pane_t4

0x2db5,	// (0x0001f434) main_radioblah_pane

0x37ee,	// (0x0001fe6d) cell_call4_button_pane_t1_copy1_ParamLimits

0x37ee,	// (0x0001fe6d) cell_call4_button_pane_t1_copy1

0x97a9,	// (0x00025e28) main_ncimui_pane_t1_ParamLimits

0x97a9,	// (0x00025e28) main_ncimui_pane_t1

0x97c3,	// (0x00025e42) main_ncimui_pane_t2_ParamLimits

0x97c3,	// (0x00025e42) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0002c26e) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0002c26e) main_ncimui_pane_t

0x09ab,	// (0x0001d02a) main_radioblah_anim_pane_ParamLimits

0x09ab,	// (0x0001d02a) main_radioblah_anim_pane

0x09bc,	// (0x0001d03b) main_radioblah_info_pane_ParamLimits

0x09bc,	// (0x0001d03b) main_radioblah_info_pane

0x09d0,	// (0x0001d04f) main_radioblah_pane_t1_ParamLimits

0x09d0,	// (0x0001d04f) main_radioblah_pane_t1

0x09ec,	// (0x0001d06b) main_radioblah_pane_t2_ParamLimits

0x09ec,	// (0x0001d06b) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0002c309) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0002c309) main_radioblah_pane_t

0x9c2b,	// (0x000262aa) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9c2b,	// (0x000262aa) main_radioblah_rocker_ctrl_pane

0x0a34,	// (0x0001d0b3) main_radioblah_info_pane_t1_ParamLimits

0x0a34,	// (0x0001d0b3) main_radioblah_info_pane_t1

0x9c70,	// (0x000262ef) main_radioblah_info_pane_t2_ParamLimits

0x9c70,	// (0x000262ef) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0002c312) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0002c312) main_radioblah_info_pane_t

0xe09a,	// (0x0002a719) main_radioblah_rocker_ctrl_pane_g1

0x9d20,	// (0x0002639f) main_radioblah_rocker_ctrl_pane_g2

0x9d28,	// (0x000263a7) main_radioblah_rocker_ctrl_pane_g3

0x9d30,	// (0x000263af) main_radioblah_rocker_ctrl_pane_g4

0x9d38,	// (0x000263b7) main_radioblah_rocker_ctrl_pane_g5

0x9d40,	// (0x000263bf) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0002c31b) main_radioblah_rocker_ctrl_pane_g

0x9750,	// (0x00025dcf) main_cset_text2_pane_t1_copy1_ParamLimits

0x3879,	// (0x0001fef8) cam4_image_uncrop_qvga_pane

0x39aa,	// (0x00020029) vid4_image_uncrop_qcif_pane

0x3fcb,	// (0x0002064a) cam6_image_uncrop_qvga_pane_ParamLimits

0x3fcb,	// (0x0002064a) cam6_image_uncrop_qvga_pane

0x028b,	// (0x0001c90a) vid6_image_uncrop_qcif_pane_ParamLimits

0x028b,	// (0x0001c90a) vid6_image_uncrop_qcif_pane

0xb494,	// (0x00027b13) bg_popup_preview_window_pane_cp03

0x0536,	// (0x0001cbb5) list_cset_text2_pane

0x053e,	// (0x0001cbbd) main_cset6_text2_pane_g1

0x0546,	// (0x0001cbc5) main_cset6_text2_pane_t1

0x9d48,	// (0x000263c7) list_cset_text2_pane_t1_ParamLimits

0x9d48,	// (0x000263c7) list_cset_text2_pane_t1

0x2db5,	// (0x0001f434) main_radioblah_pane_ParamLimits

0x9ac5,	// (0x00026144) main_mobtv_info_pane_t3_ParamLimits

0x9ac5,	// (0x00026144) main_mobtv_info_pane_t3

0x9c19,	// (0x00026298) main_radioblah_pane_g1

0x9c44,	// (0x000262c3) main_radioblah_info_pane_g1

0x9cc5,	// (0x00026344) main_radioblah_info_pane_t3_ParamLimits

0x9cc5,	// (0x00026344) main_radioblah_info_pane_t3

0x5d03,	// (0x00022382) highlight_cell_cale_month_pane_ParamLimits

0x5d03,	// (0x00022382) highlight_cell_cale_month_pane

0x295d,	// (0x0001efdc) main_phob_fisheye_pane

0xe405,	// (0x0002aa84) scroll_pane_cp0031_ParamLimits

0xe405,	// (0x0002aa84) scroll_pane_cp0031

0x0399,	// (0x0001ca18) wait_bar_pane_cp08_ParamLimits

0x9439,	// (0x00025ab8) cset_list_set_pane_copy1_ParamLimits

0x0a6e,	// (0x0001d0ed) highlight_cell_cale_month_pane_g1

0x9d65,	// (0x000263e4) highlight_cell_cale_month_pane_t1

0xf0c1,	// (0x0002b740) list_gen_pane_cp01

0xec49,	// (0x0002b2c8) scroll_pane_01

0x9d73,	// (0x000263f2) list_single_double_fisheye_pane

0x9d7c,	// (0x000263fb) list_double_fisheye_pane_g1_ParamLimits

0x9d7c,	// (0x000263fb) list_double_fisheye_pane_g1

0x9d88,	// (0x00026407) list_double_fisheye_pane_g2_ParamLimits

0x9d88,	// (0x00026407) list_double_fisheye_pane_g2

0x9d9c,	// (0x0002641b) list_double_fisheye_pane_g3_ParamLimits

0x9d9c,	// (0x0002641b) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0002c328) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0002c328) list_double_fisheye_pane_g

0x9dc5,	// (0x00026444) list_double_fisheye_pane_t1_ParamLimits

0x9dc5,	// (0x00026444) list_double_fisheye_pane_t1

0x9de0,	// (0x0002645f) list_double_fisheye_pane_t2_ParamLimits

0x9de0,	// (0x0002645f) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0002c333) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0002c333) list_double_fisheye_pane_t

0x295d,	// (0x0001efdc) main_call5_pane

0x9b8c,	// (0x0002620b) sc_swipe_pane_ParamLimits

0x9b8c,	// (0x0002620b) sc_swipe_pane

0x9e0e,	// (0x0002648d) call5_image_pane_ParamLimits

0x9e0e,	// (0x0002648d) call5_image_pane

0x9e1e,	// (0x0002649d) call5_swipe_1_pane_ParamLimits

0x9e1e,	// (0x0002649d) call5_swipe_1_pane

0x9e2a,	// (0x000264a9) call5_swipe_2_pane_ParamLimits

0x9e2a,	// (0x000264a9) call5_swipe_2_pane

0x9e44,	// (0x000264c3) popup_call5_audio_first_window_ParamLimits

0x9e44,	// (0x000264c3) popup_call5_audio_first_window

0xe2fd,	// (0x0002a97c) call5_swipe_1_pane_g1_ParamLimits

0xe2fd,	// (0x0002a97c) call5_swipe_1_pane_g1

0x0a7f,	// (0x0001d0fe) call5_swipe_1_pane_g2_ParamLimits

0x0a7f,	// (0x0001d0fe) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0002c338) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0002c338) call5_swipe_1_pane_g

0x0a8b,	// (0x0001d10a) call5_swipe_1_pane_t1_ParamLimits

0x0a8b,	// (0x0001d10a) call5_swipe_1_pane_t1

0xe2fd,	// (0x0002a97c) call5_swipe_2_pane_g1_ParamLimits

0xe2fd,	// (0x0002a97c) call5_swipe_2_pane_g1

0x0aa0,	// (0x0001d11f) call5_swipe_2_pane_g2_ParamLimits

0x0aa0,	// (0x0001d11f) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0002c33d) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0002c33d) call5_swipe_2_pane_g

0x0aac,	// (0x0001d12b) call5_swipe_2_pane_t1_ParamLimits

0x0aac,	// (0x0001d12b) call5_swipe_2_pane_t1

0x0ac1,	// (0x0001d140) sc_swipe_pane_g1_ParamLimits

0x0ac1,	// (0x0001d140) sc_swipe_pane_g1

0x0ace,	// (0x0001d14d) sc_swipe_pane_g2_ParamLimits

0x0ace,	// (0x0001d14d) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0002c342) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0002c342) sc_swipe_pane_g

0x0ada,	// (0x0001d159) sc_swipe_pane_t1_ParamLimits

0x0ada,	// (0x0001d159) sc_swipe_pane_t1

0x295d,	// (0x0001efdc) main_cmail_launcher_pane

0x9e52,	// (0x000264d1) aid_size_cell_cmail_l_ParamLimits

0x9e52,	// (0x000264d1) aid_size_cell_cmail_l

0x9e60,	// (0x000264df) grid_cmail_l_pane_ParamLimits

0x9e60,	// (0x000264df) grid_cmail_l_pane

0x9e70,	// (0x000264ef) cell_cmail_l_pane_ParamLimits

0x9e70,	// (0x000264ef) cell_cmail_l_pane

0x0aef,	// (0x0001d16e) cell_cmail_l_pane_g1_ParamLimits

0x0aef,	// (0x0001d16e) cell_cmail_l_pane_g1

0x0afb,	// (0x0001d17a) cell_cmail_l_pane_t1_ParamLimits

0x0afb,	// (0x0001d17a) cell_cmail_l_pane_t1

0x0b11,	// (0x0001d190) cell_cmail_l_pane_t2_ParamLimits

0x0b11,	// (0x0001d190) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0002c347) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0002c347) cell_cmail_l_pane_t

0xbba5,	// (0x00028224) grid_highlight_pane_cp018_ParamLimits

0xbba5,	// (0x00028224) grid_highlight_pane_cp018

0x27bf,	// (0x0001ee3e) main2_pane_ParamLimits

0x27bf,	// (0x0001ee3e) main2_pane

0xbc78,	// (0x000282f7) popup_sp_fs_action_menu_bg_pane_g1

0xbc80,	// (0x000282ff) popup_sp_fs_action_menu_bg_pane_g2

0xbc88,	// (0x00028307) popup_sp_fs_action_menu_bg_pane_g3

0xbc90,	// (0x0002830f) popup_sp_fs_action_menu_bg_pane_g4

0xbc98,	// (0x00028317) popup_sp_fs_action_menu_bg_pane_g5

0xbca0,	// (0x0002831f) popup_sp_fs_action_menu_bg_pane_g6

0xbca8,	// (0x00028327) popup_sp_fs_action_menu_bg_pane_g7

0xbcb0,	// (0x0002832f) popup_sp_fs_action_menu_bg_pane_g8

0xbcb8,	// (0x00028337) popup_sp_fs_action_menu_bg_pane_g9

0xbcc0,	// (0x0002833f) popup_sp_fs_action_menu_bg_pane_g10

0xbcc0,	// (0x0002833f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0002b809) popup_sp_fs_action_menu_bg_pane_g

0x4b18,	// (0x00021197) list_medium_line_x2_t3_g3_g1_ParamLimits

0x4b18,	// (0x00021197) list_medium_line_x2_t3_g3_g1

0x4b24,	// (0x000211a3) list_medium_line_x2_t3_g3_g2_ParamLimits

0x4b24,	// (0x000211a3) list_medium_line_x2_t3_g3_g2

0x4b30,	// (0x000211af) list_medium_line_x2_t3_g3_g3_ParamLimits

0x4b30,	// (0x000211af) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0002b8b7) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0002b8b7) list_medium_line_x2_t3_g3_g

0x4b3c,	// (0x000211bb) list_medium_line_x2_t3_g3_t1_ParamLimits

0x4b3c,	// (0x000211bb) list_medium_line_x2_t3_g3_t1

0x4b51,	// (0x000211d0) list_medium_line_x2_t3_g3_t2_ParamLimits

0x4b51,	// (0x000211d0) list_medium_line_x2_t3_g3_t2

0x4b63,	// (0x000211e2) list_medium_line_x2_t3_g3_t3_ParamLimits

0x4b63,	// (0x000211e2) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0002b8be) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0002b8be) list_medium_line_x2_t3_g3_t

0x4b18,	// (0x00021197) list_medium_line_x2_t3_g2_g1_ParamLimits

0x4b18,	// (0x00021197) list_medium_line_x2_t3_g2_g1

0x4b30,	// (0x000211af) list_medium_line_x2_t3_g2_g2_ParamLimits

0x4b30,	// (0x000211af) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0002b8c5) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0002b8c5) list_medium_line_x2_t3_g2_g

0x4b78,	// (0x000211f7) list_medium_line_x2_t3_g2_t1_ParamLimits

0x4b78,	// (0x000211f7) list_medium_line_x2_t3_g2_t1

0x4b8e,	// (0x0002120d) list_medium_line_x2_t3_g2_t2_ParamLimits

0x4b8e,	// (0x0002120d) list_medium_line_x2_t3_g2_t2

0x4ba0,	// (0x0002121f) list_medium_line_x2_t3_g2_t3_ParamLimits

0x4ba0,	// (0x0002121f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0002b8ca) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0002b8ca) list_medium_line_x2_t3_g2_t

0x4b18,	// (0x00021197) list_medium_line_x2_t4_g4_g1_ParamLimits

0x4b18,	// (0x00021197) list_medium_line_x2_t4_g4_g1

0x4bbd,	// (0x0002123c) list_medium_line_x2_t4_g4_g2_ParamLimits

0x4bbd,	// (0x0002123c) list_medium_line_x2_t4_g4_g2

0x4b24,	// (0x000211a3) list_medium_line_x2_t4_g4_g3_ParamLimits

0x4b24,	// (0x000211a3) list_medium_line_x2_t4_g4_g3

0x4bc9,	// (0x00021248) list_medium_line_x2_t4_g4_g4_ParamLimits

0x4bc9,	// (0x00021248) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0002b8d1) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0002b8d1) list_medium_line_x2_t4_g4_g

0x4bd5,	// (0x00021254) list_medium_line_x2_t4_g4_t1_ParamLimits

0x4bd5,	// (0x00021254) list_medium_line_x2_t4_g4_t1

0x4bef,	// (0x0002126e) list_medium_line_x2_t4_g4_t2_ParamLimits

0x4bef,	// (0x0002126e) list_medium_line_x2_t4_g4_t2

0x4c05,	// (0x00021284) list_medium_line_x2_t4_g4_t3_ParamLimits

0x4c05,	// (0x00021284) list_medium_line_x2_t4_g4_t3

0x4c1a,	// (0x00021299) list_medium_line_x2_t4_g4_t4_ParamLimits

0x4c1a,	// (0x00021299) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0002b8da) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0002b8da) list_medium_line_x2_t4_g4_t

0x4b18,	// (0x00021197) list_medium_line_x2_t2_g4_g1_ParamLimits

0x4b18,	// (0x00021197) list_medium_line_x2_t2_g4_g1

0x4bbd,	// (0x0002123c) list_medium_line_x2_t2_g4_g2_ParamLimits

0x4bbd,	// (0x0002123c) list_medium_line_x2_t2_g4_g2

0x4b24,	// (0x000211a3) list_medium_line_x2_t2_g4_g3_ParamLimits

0x4b24,	// (0x000211a3) list_medium_line_x2_t2_g4_g3

0x4b30,	// (0x000211af) list_medium_line_x2_t2_g4_g4_ParamLimits

0x4b30,	// (0x000211af) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0002b941) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0002b941) list_medium_line_x2_t2_g4_g

0x5d29,	// (0x000223a8) list_medium_line_x2_t2_g4_t1_ParamLimits

0x5d29,	// (0x000223a8) list_medium_line_x2_t2_g4_t1

0x4b63,	// (0x000211e2) list_medium_line_x2_t2_g4_t2_ParamLimits

0x4b63,	// (0x000211e2) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0002b94a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0002b94a) list_medium_line_x2_t2_g4_t

0x4b18,	// (0x00021197) list_medium_line_x2_t2_g3_g1_ParamLimits

0x4b18,	// (0x00021197) list_medium_line_x2_t2_g3_g1

0x4b24,	// (0x000211a3) list_medium_line_x2_t2_g3_g2_ParamLimits

0x4b24,	// (0x000211a3) list_medium_line_x2_t2_g3_g2

0x4b30,	// (0x000211af) list_medium_line_x2_t2_g3_g3_ParamLimits

0x4b30,	// (0x000211af) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0002b8b7) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0002b8b7) list_medium_line_x2_t2_g3_g

0x5d3e,	// (0x000223bd) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5d3e,	// (0x000223bd) list_medium_line_x2_t2_g3_t1

0x4b63,	// (0x000211e2) list_medium_line_x2_t2_g3_t2_ParamLimits

0x4b63,	// (0x000211e2) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0002b94f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0002b94f) list_medium_line_x2_t2_g3_t

0x5eab,	// (0x0002252a) main_sp_fs_list_pane_ParamLimits

0x5eab,	// (0x0002252a) main_sp_fs_list_pane

0x5eb7,	// (0x00022536) sp_fs_scroll_pane_ParamLimits

0x5eb7,	// (0x00022536) sp_fs_scroll_pane

0x5ec3,	// (0x00022542) list_medium_line_x2_t3_t1

0x5ed3,	// (0x00022552) list_medium_line_x2_t3_t2

0x5ee1,	// (0x00022560) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0002b99a) list_medium_line_x2_t3_t

0x5eef,	// (0x0002256e) list_medium_line_x3_t4_t1

0x5eff,	// (0x0002257e) list_medium_line_x3_t4_t2

0x5f0d,	// (0x0002258c) list_medium_line_x3_t4_t3

0x5ee1,	// (0x00022560) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0002b9a1) list_medium_line_x3_t4_t

0x5f1b,	// (0x0002259a) list_medium_line_x4_t5_t1

0x5f2b,	// (0x000225aa) list_medium_line_x4_t5_t2

0x5f0d,	// (0x0002258c) list_medium_line_x4_t5_t3

0x5f39,	// (0x000225b8) list_medium_line_x4_t5_t4

0x5ee1,	// (0x00022560) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0002b9aa) list_medium_line_x4_t5_t

0x4b18,	// (0x00021197) list_medium_line_t4_g4_g1_ParamLimits

0x4b18,	// (0x00021197) list_medium_line_t4_g4_g1

0x5f47,	// (0x000225c6) list_medium_line_t4_g4_g2_ParamLimits

0x5f47,	// (0x000225c6) list_medium_line_t4_g4_g2

0x5f53,	// (0x000225d2) list_medium_line_t4_g4_g3_ParamLimits

0x5f53,	// (0x000225d2) list_medium_line_t4_g4_g3

0x4b30,	// (0x000211af) list_medium_line_t4_g4_g4_ParamLimits

0x4b30,	// (0x000211af) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0002b9b5) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0002b9b5) list_medium_line_t4_g4_g

0x5f5f,	// (0x000225de) list_medium_line_t4_g4_t1_ParamLimits

0x5f5f,	// (0x000225de) list_medium_line_t4_g4_t1

0x5f74,	// (0x000225f3) list_medium_line_t4_g4_t2_ParamLimits

0x5f74,	// (0x000225f3) list_medium_line_t4_g4_t2

0x5f89,	// (0x00022608) list_medium_line_t4_g4_t3_ParamLimits

0x5f89,	// (0x00022608) list_medium_line_t4_g4_t3

0x4b63,	// (0x000211e2) list_medium_line_t4_g4_t4_ParamLimits

0x4b63,	// (0x000211e2) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0002b9be) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0002b9be) list_medium_line_t4_g4_t

0x602c,	// (0x000226ab) chi_dic_find_pane_g1

0x2dd1,	// (0x0001f450) main_tport_pane

0x89bb,	// (0x0002503a) list_medium_line_plain_t1

0x89e1,	// (0x00025060) list_medium_line_t2_g2_g1_ParamLimits

0x89e1,	// (0x00025060) list_medium_line_t2_g2_g1

0x89ed,	// (0x0002506c) list_medium_line_t2_g2_g2_ParamLimits

0x89ed,	// (0x0002506c) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0002c07f) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0002c07f) list_medium_line_t2_g2_g

0x89f9,	// (0x00025078) list_medium_line_t2_g2_t1_ParamLimits

0x89f9,	// (0x00025078) list_medium_line_t2_g2_t1

0x8a13,	// (0x00025092) list_medium_line_t2_g2_t2_ParamLimits

0x8a13,	// (0x00025092) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0002c084) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0002c084) list_medium_line_t2_g2_t

0x0003,	// (0x0001c682) aid_sp_fs_list_icon_a_sm

0x000b,	// (0x0001c68a) aid_sp_fs_list_icon_d

0x0013,	// (0x0001c692) aid_sp_fs_text_primary

0x001c,	// (0x0001c69b) aid_sp_fs_text_secondary

0x8f8b,	// (0x0002560a) list_medium_line

0x8f8b,	// (0x0002560a) list_medium_line_g2

0x8f8b,	// (0x0002560a) list_medium_line_g3

0x8f8b,	// (0x0002560a) list_medium_line_plain

0x8f8b,	// (0x0002560a) list_medium_line_plain_t2

0x8f8b,	// (0x0002560a) list_medium_line_plain_t3

0x8f8b,	// (0x0002560a) list_medium_line_right_icon

0x8f8b,	// (0x0002560a) list_medium_line_right_iconx2

0x8f8b,	// (0x0002560a) list_medium_line_t2

0x8f8b,	// (0x0002560a) list_medium_line_t2_g2

0x8f8b,	// (0x0002560a) list_medium_line_t2_g3

0x8f8b,	// (0x0002560a) list_medium_line_t2_right_icon

0x8f8b,	// (0x0002560a) list_medium_line_t2_right_iconx2

0x8f8b,	// (0x0002560a) list_medium_line_t3

0x8f8b,	// (0x0002560a) list_medium_line_t3_g2

0x8f8b,	// (0x0002560a) list_medium_line_t3_g3

0x8f8b,	// (0x0002560a) list_medium_line_t3_right_iconx2

0x8f94,	// (0x00025613) list_medium_line_t4_g4

0x0a76,	// (0x0001d0f5) list_medium_line_x2

0x0a76,	// (0x0001d0f5) list_medium_line_x2_t2_g2

0x0a76,	// (0x0001d0f5) list_medium_line_x2_t2_g3

0x0a76,	// (0x0001d0f5) list_medium_line_x2_t2_g4

0x0a76,	// (0x0001d0f5) list_medium_line_x2_t3

0x0a76,	// (0x0001d0f5) list_medium_line_x2_t3_g2

0x0a76,	// (0x0001d0f5) list_medium_line_x2_t3_g3

0x0a76,	// (0x0001d0f5) list_medium_line_x2_t3_g4

0x0a76,	// (0x0001d0f5) list_medium_line_x2_t4_g2

0x0a76,	// (0x0001d0f5) list_medium_line_x2_t4_g4

0x8f9d,	// (0x0002561c) list_medium_line_x3

0x8f9d,	// (0x0002561c) list_medium_line_x3_t4

0x8f9d,	// (0x0002561c) list_medium_line_x3_t4_g4

0x8f94,	// (0x00025613) list_medium_line_x4_t4

0x8f94,	// (0x00025613) list_medium_line_x4_t4_g7

0x8f94,	// (0x00025613) list_medium_line_x4_t5

0x8fa6,	// (0x00025625) list_single_fs_dyc_pane_ParamLimits

0x8fa6,	// (0x00025625) list_single_fs_dyc_pane

0x4b18,	// (0x00021197) list_medium_line_x4_t4_g7_g1_ParamLimits

0x4b18,	// (0x00021197) list_medium_line_x4_t4_g7_g1

0x9678,	// (0x00025cf7) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9678,	// (0x00025cf7) list_medium_line_x4_t4_g7_g2

0x9684,	// (0x00025d03) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9684,	// (0x00025d03) list_medium_line_x4_t4_g7_g3

0x9693,	// (0x00025d12) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9693,	// (0x00025d12) list_medium_line_x4_t4_g7_g4

0x969f,	// (0x00025d1e) list_medium_line_x4_t4_g7_g5_ParamLimits

0x969f,	// (0x00025d1e) list_medium_line_x4_t4_g7_g5

0x96ae,	// (0x00025d2d) list_medium_line_x4_t4_g7_g6_ParamLimits

0x96ae,	// (0x00025d2d) list_medium_line_x4_t4_g7_g6

0x96bd,	// (0x00025d3c) list_medium_line_x4_t4_g7_g7_ParamLimits

0x96bd,	// (0x00025d3c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0002c24f) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0002c24f) list_medium_line_x4_t4_g7_g

0x96c9,	// (0x00025d48) list_medium_line_x4_t4_g7_t1_ParamLimits

0x96c9,	// (0x00025d48) list_medium_line_x4_t4_g7_t1

0x96de,	// (0x00025d5d) list_medium_line_x4_t4_g7_t2_ParamLimits

0x96de,	// (0x00025d5d) list_medium_line_x4_t4_g7_t2

0x96f3,	// (0x00025d72) list_medium_line_x4_t4_g7_t3_ParamLimits

0x96f3,	// (0x00025d72) list_medium_line_x4_t4_g7_t3

0x9708,	// (0x00025d87) list_medium_line_x4_t4_g7_t4_ParamLimits

0x9708,	// (0x00025d87) list_medium_line_x4_t4_g7_t4

0x971a,	// (0x00025d99) list_medium_line_x4_t4_g7_t5_ParamLimits

0x971a,	// (0x00025d99) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0002c25e) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0002c25e) list_medium_line_x4_t4_g7_t

0x972c,	// (0x00025dab) list_single_dyc_row_pane_ParamLimits

0x972c,	// (0x00025dab) list_single_dyc_row_pane

0x9e02,	// (0x00026481) call5_gesture_pane_ParamLimits

0x9e02,	// (0x00026481) call5_gesture_pane

0x9e36,	// (0x000264b5) call5_windows_pane_ParamLimits

0x9e36,	// (0x000264b5) call5_windows_pane

0x9e89,	// (0x00026508) call5_swipe_1_pane_cp_ParamLimits

0x9e89,	// (0x00026508) call5_swipe_1_pane_cp

0x9e95,	// (0x00026514) call5_swipe_2_pane_cp_ParamLimits

0x9e95,	// (0x00026514) call5_swipe_2_pane_cp

0xbda4,	// (0x00028423) call5_image_pane_cp

0x9ea1,	// (0x00026520) popup_call5_audio_first_window_cp_ParamLimits

0x9ea1,	// (0x00026520) popup_call5_audio_first_window_cp

0x0ac1,	// (0x0001d140) call5_swipe_1_pane_g1_cp_ParamLimits

0x0ac1,	// (0x0001d140) call5_swipe_1_pane_g1_cp

0x0b2e,	// (0x0001d1ad) call5_swipe_1_pane_g2_cp

0x0ada,	// (0x0001d159) call5_swipe_1_pane_t1_cp_ParamLimits

0x0ada,	// (0x0001d159) call5_swipe_1_pane_t1_cp

0x0ac1,	// (0x0001d140) call5_swipe_2_pane_g1_cp_ParamLimits

0x0ac1,	// (0x0001d140) call5_swipe_2_pane_g1_cp

0x0b36,	// (0x0001d1b5) call5_swipe_2_pane_g2_cp

0x0b3e,	// (0x0001d1bd) call5_swipe_2_pane_t1_cp_ParamLimits

0x0b3e,	// (0x0001d1bd) call5_swipe_2_pane_t1_cp

0xbba5,	// (0x00028224) main_sp_fs_email_pane

0x0b53,	// (0x0001d1d2) main_sp_fs_listscroll_pane_te

0x9eaf,	// (0x0002652e) popup_sp_fs_action_menu_pane_ParamLimits

0x9eaf,	// (0x0002652e) popup_sp_fs_action_menu_pane

0xe09a,	// (0x0002a719) bg_sp_fs_ctrlbar_pane_g1

0x0b5c,	// (0x0001d1db) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x0b65,	// (0x0001d1e4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x0b6e,	// (0x0001d1ed) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe09a,	// (0x0002a719) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0002c34c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xde7f,	// (0x0002a4fe) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xde7f,	// (0x0002a4fe) bg_sp_fs_ctrlbar_ddmenu_pane

0x0b77,	// (0x0001d1f6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x0b77,	// (0x0001d1f6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x0b83,	// (0x0001d202) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x0b83,	// (0x0001d202) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0002c355) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0002c355) main_sp_fs_ctrlbar_ddmenu_pane_g

0x0b8f,	// (0x0001d20e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x0b8f,	// (0x0001d20e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x9ef3,	// (0x00026572) list_medium_line_t2_right_icon_g1

0x9efb,	// (0x0002657a) list_medium_line_t2_right_icon_t1

0x9f0b,	// (0x0002658a) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0002c35a) list_medium_line_t2_right_icon_t

0xdc89,	// (0x0002a308) bg_sp_fs_ctrlbar_pane_ParamLimits

0xdc89,	// (0x0002a308) bg_sp_fs_ctrlbar_pane

0x9f70,	// (0x000265ef) main_sp_fs_ctrlbar_button_pane_cp01

0x9f78,	// (0x000265f7) main_sp_fs_ctrlbar_ddmenu_pane

0x0be1,	// (0x0001d260) main_sp_fs_ctrlbar_pane_g1

0x0bed,	// (0x0001d26c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0002c35f) main_sp_fs_ctrlbar_pane_g

0x0bf9,	// (0x0001d278) main_sp_fs_ctrlbar_pane_t1

0x9f82,	// (0x00026601) main_sp_fs_ctrlbar_pane

0x9f98,	// (0x00026617) main_sp_fs_listscroll_pane_te_cp01

0x9fa9,	// (0x00026628) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9fa9,	// (0x00026628) popup_sp_fs_action_menu_pane_cp01

0xbba5,	// (0x00028224) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xbba5,	// (0x00028224) bg_sp_fs_highlight_list_pane_cp01

0x0c29,	// (0x0001d2a8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x0c29,	// (0x0001d2a8) sp_fs_action_menu_list_gene_pane_g1

0x0c38,	// (0x0001d2b7) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x0c38,	// (0x0001d2b7) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0002c369) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0002c369) sp_fs_action_menu_list_gene_pane_g

0x0c45,	// (0x0001d2c4) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x0c45,	// (0x0001d2c4) sp_fs_action_menu_list_gene_pane_t1

0x0c5d,	// (0x0001d2dc) sp_fs_action_menu_list_gene_pane_ParamLimits

0x0c5d,	// (0x0001d2dc) sp_fs_action_menu_list_gene_pane

0x0c7e,	// (0x0001d2fd) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x0c7e,	// (0x0001d2fd) popup_sp_fs_action_menu_bg_pane

0x0c8c,	// (0x0001d30b) sp_fs_action_menu_list_pane_ParamLimits

0x0c8c,	// (0x0001d30b) sp_fs_action_menu_list_pane

0x9fd3,	// (0x00026652) sp_fs_scroll_pane_cp01_ParamLimits

0x9fd3,	// (0x00026652) sp_fs_scroll_pane_cp01

0x9ff9,	// (0x00026678) list_medium_line_plain_t2_t1

0xa009,	// (0x00026688) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0002c36e) list_medium_line_plain_t2_t

0xa017,	// (0x00026696) list_medium_line_plain_t3_t1

0xa027,	// (0x000266a6) list_medium_line_plain_t3_t2

0xa035,	// (0x000266b4) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0002c373) list_medium_line_plain_t3_t

0x4b18,	// (0x00021197) list_medium_line_x2_t2_g2_g1_ParamLimits

0x4b18,	// (0x00021197) list_medium_line_x2_t2_g2_g1

0x4b30,	// (0x000211af) list_medium_line_x2_t2_g2_g2_ParamLimits

0x4b30,	// (0x000211af) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0002b8c5) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0002b8c5) list_medium_line_x2_t2_g2_g

0x5f5f,	// (0x000225de) list_medium_line_x2_t2_g2_t1_ParamLimits

0x5f5f,	// (0x000225de) list_medium_line_x2_t2_g2_t1

0x4b63,	// (0x000211e2) list_medium_line_x2_t2_g2_t2_ParamLimits

0x4b63,	// (0x000211e2) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0002c37a) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0002c37a) list_medium_line_x2_t2_g2_t

0x4b18,	// (0x00021197) list_medium_line_x2_t4_g2_g1_ParamLimits

0x4b18,	// (0x00021197) list_medium_line_x2_t4_g2_g1

0x4b30,	// (0x000211af) list_medium_line_x2_t4_g2_g2_ParamLimits

0x4b30,	// (0x000211af) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0002b8c5) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0002b8c5) list_medium_line_x2_t4_g2_g

0xa043,	// (0x000266c2) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa043,	// (0x000266c2) list_medium_line_x2_t4_g2_t1

0xa05d,	// (0x000266dc) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa05d,	// (0x000266dc) list_medium_line_x2_t4_g2_t2

0xa073,	// (0x000266f2) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa073,	// (0x000266f2) list_medium_line_x2_t4_g2_t3

0x4b63,	// (0x000211e2) list_medium_line_x2_t4_g2_t4_ParamLimits

0x4b63,	// (0x000211e2) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0002c37f) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0002c37f) list_medium_line_x2_t4_g2_t

0xa088,	// (0x00026707) list_medium_line_t3_right_iconx2_g1

0x9ef3,	// (0x00026572) list_medium_line_t3_right_iconx2_g2

0xa090,	// (0x0002670f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0002c388) list_medium_line_t3_right_iconx2_g

0xa098,	// (0x00026717) list_medium_line_t3_right_iconx2_t1

0xa0a8,	// (0x00026727) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0002c38f) list_medium_line_t3_right_iconx2_t

0x4b18,	// (0x00021197) list_medium_line_x3_t4_g4_g1_ParamLimits

0x4b18,	// (0x00021197) list_medium_line_x3_t4_g4_g1

0x4b24,	// (0x000211a3) list_medium_line_x3_t4_g4_g2_ParamLimits

0x4b24,	// (0x000211a3) list_medium_line_x3_t4_g4_g2

0x5f47,	// (0x000225c6) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5f47,	// (0x000225c6) list_medium_line_x3_t4_g4_g3

0xa0b6,	// (0x00026735) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa0b6,	// (0x00026735) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0002c394) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0002c394) list_medium_line_x3_t4_g4_g

0xa0c2,	// (0x00026741) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa0c2,	// (0x00026741) list_medium_line_x3_t4_g4_t1

0xa0d9,	// (0x00026758) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa0d9,	// (0x00026758) list_medium_line_x3_t4_g4_t2

0x5f74,	// (0x000225f3) list_medium_line_x3_t4_g4_t3_ParamLimits

0x5f74,	// (0x000225f3) list_medium_line_x3_t4_g4_t3

0xa0ee,	// (0x0002676d) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa0ee,	// (0x0002676d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0002c39d) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0002c39d) list_medium_line_x3_t4_g4_t

0xa10b,	// (0x0002678a) list_single_dyc_row_text_pane_t1_ParamLimits

0xa10b,	// (0x0002678a) list_single_dyc_row_text_pane_t1

0xa142,	// (0x000267c1) list_single_dyc_row_text_pane_t2_ParamLimits

0xa142,	// (0x000267c1) list_single_dyc_row_text_pane_t2

0x0cae,	// (0x0001d32d) list_single_dyc_row_text_pane_t3_ParamLimits

0x0cae,	// (0x0001d32d) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0002c3a6) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0002c3a6) list_single_dyc_row_text_pane_t

0x0cd2,	// (0x0001d351) list_single_dyc_row_pane_g1_ParamLimits

0x0cd2,	// (0x0001d351) list_single_dyc_row_pane_g1

0x0cde,	// (0x0001d35d) list_single_dyc_row_pane_g2_ParamLimits

0x0cde,	// (0x0001d35d) list_single_dyc_row_pane_g2

0x0cea,	// (0x0001d369) list_single_dyc_row_pane_g3_ParamLimits

0x0cea,	// (0x0001d369) list_single_dyc_row_pane_g3

0x0cf6,	// (0x0001d375) list_single_dyc_row_pane_g4_ParamLimits

0x0cf6,	// (0x0001d375) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0002c3b3) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0002c3b3) list_single_dyc_row_pane_g

0x0d02,	// (0x0001d381) list_single_dyc_row_text_pane_ParamLimits

0x0d02,	// (0x0001d381) list_single_dyc_row_text_pane

0xb494,	// (0x00027b13) bg_sp_fs_scroll_pane

0x0d21,	// (0x0001d3a0) thumb_sp_fs_scroll_pane

0x89e1,	// (0x00025060) list_medium_line_g1_ParamLimits

0x89e1,	// (0x00025060) list_medium_line_g1

0xa265,	// (0x000268e4) list_medium_line_t1_ParamLimits

0xa265,	// (0x000268e4) list_medium_line_t1

0x4b18,	// (0x00021197) list_medium_line_x2_g1_ParamLimits

0x4b18,	// (0x00021197) list_medium_line_x2_g1

0x4b24,	// (0x000211a3) list_medium_line_x2_g2_ParamLimits

0x4b24,	// (0x000211a3) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0002c3bc) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0002c3bc) list_medium_line_x2_g

0x0d2a,	// (0x0001d3a9) list_medium_line_x2_t1_ParamLimits

0x0d2a,	// (0x0001d3a9) list_medium_line_x2_t1

0x4b18,	// (0x00021197) list_medium_line_x3_g1_ParamLimits

0x4b18,	// (0x00021197) list_medium_line_x3_g1

0x4b24,	// (0x000211a3) list_medium_line_x3_g2_ParamLimits

0x4b24,	// (0x000211a3) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0002c3bc) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0002c3bc) list_medium_line_x3_g

0x0d2a,	// (0x0001d3a9) list_medium_line_x3_t1_ParamLimits

0x0d2a,	// (0x0001d3a9) list_medium_line_x3_t1

0x0d40,	// (0x0001d3bf) thumb_sp_fs_scroll_pane_g1

0x0d49,	// (0x0001d3c8) thumb_sp_fs_scroll_pane_g2

0x0d52,	// (0x0001d3d1) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0002c3c1) thumb_sp_fs_scroll_pane_g

0x0d40,	// (0x0001d3bf) bg_sp_fs_scroll_pane_g1

0x0d49,	// (0x0001d3c8) bg_sp_fs_scroll_pane_g2

0x0d52,	// (0x0001d3d1) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0002c3c1) bg_sp_fs_scroll_pane_g

0x4b18,	// (0x00021197) list_medium_line_x2_t3_g4_g1_ParamLimits

0x4b18,	// (0x00021197) list_medium_line_x2_t3_g4_g1

0x4bbd,	// (0x0002123c) list_medium_line_x2_t3_g4_g2_ParamLimits

0x4bbd,	// (0x0002123c) list_medium_line_x2_t3_g4_g2

0x4b24,	// (0x000211a3) list_medium_line_x2_t3_g4_g3_ParamLimits

0x4b24,	// (0x000211a3) list_medium_line_x2_t3_g4_g3

0x4b30,	// (0x000211af) list_medium_line_x2_t3_g4_g4_ParamLimits

0x4b30,	// (0x000211af) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0002b941) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0002b941) list_medium_line_x2_t3_g4_g

0xa27a,	// (0x000268f9) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa27a,	// (0x000268f9) list_medium_line_x2_t3_g4_t1

0xa290,	// (0x0002690f) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa290,	// (0x0002690f) list_medium_line_x2_t3_g4_t2

0x4b63,	// (0x000211e2) list_medium_line_x2_t3_g4_t3_ParamLimits

0x4b63,	// (0x000211e2) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0002c3c8) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0002c3c8) list_medium_line_x2_t3_g4_t

0x89e1,	// (0x00025060) list_medium_line_g2_g1_ParamLimits

0x89e1,	// (0x00025060) list_medium_line_g2_g1

0x89ed,	// (0x0002506c) list_medium_line_g2_g2_ParamLimits

0x89ed,	// (0x0002506c) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0002c07f) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0002c07f) list_medium_line_g2_g

0xa2aa,	// (0x00026929) list_medium_line_g2_t1_ParamLimits

0xa2aa,	// (0x00026929) list_medium_line_g2_t1

0x89e1,	// (0x00025060) list_medium_line_t3_g2_g1_ParamLimits

0x89e1,	// (0x00025060) list_medium_line_t3_g2_g1

0x89ed,	// (0x0002506c) list_medium_line_t3_g2_g2_ParamLimits

0x89ed,	// (0x0002506c) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0002c07f) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0002c07f) list_medium_line_t3_g2_g

0xa2bf,	// (0x0002693e) list_medium_line_t3_g2_t1_ParamLimits

0xa2bf,	// (0x0002693e) list_medium_line_t3_g2_t1

0xa2d9,	// (0x00026958) list_medium_line_t3_g2_t2_ParamLimits

0xa2d9,	// (0x00026958) list_medium_line_t3_g2_t2

0xa2ef,	// (0x0002696e) list_medium_line_t3_g2_t3_ParamLimits

0xa2ef,	// (0x0002696e) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0002c3cf) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0002c3cf) list_medium_line_t3_g2_t

0x9ef3,	// (0x00026572) list_medium_line_right_icon_g1

0xa305,	// (0x00026984) list_medium_line_right_icon_t1

0x89e1,	// (0x00025060) list_medium_line_t2_g1_ParamLimits

0x89e1,	// (0x00025060) list_medium_line_t2_g1

0xa313,	// (0x00026992) list_medium_line_t2_t1_ParamLimits

0xa313,	// (0x00026992) list_medium_line_t2_t1

0xa32d,	// (0x000269ac) list_medium_line_t2_t2_ParamLimits

0xa32d,	// (0x000269ac) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0002c3d6) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0002c3d6) list_medium_line_t2_t

0x89e1,	// (0x00025060) list_medium_line_t3_g1_ParamLimits

0x89e1,	// (0x00025060) list_medium_line_t3_g1

0xa342,	// (0x000269c1) list_medium_line_t3_t1_ParamLimits

0xa342,	// (0x000269c1) list_medium_line_t3_t1

0xa35c,	// (0x000269db) list_medium_line_t3_t2_ParamLimits

0xa35c,	// (0x000269db) list_medium_line_t3_t2

0xa372,	// (0x000269f1) list_medium_line_t3_t3_ParamLimits

0xa372,	// (0x000269f1) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0002c3db) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0002c3db) list_medium_line_t3_t

0x89e1,	// (0x00025060) list_medium_line_g3_g1_ParamLimits

0x89e1,	// (0x00025060) list_medium_line_g3_g1

0xa387,	// (0x00026a06) list_medium_line_g3_g2_ParamLimits

0xa387,	// (0x00026a06) list_medium_line_g3_g2

0x89ed,	// (0x0002506c) list_medium_line_g3_g3_ParamLimits

0x89ed,	// (0x0002506c) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0002c3e2) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0002c3e2) list_medium_line_g3_g

0xa393,	// (0x00026a12) list_medium_line_g3_t1_ParamLimits

0xa393,	// (0x00026a12) list_medium_line_g3_t1

0x89e1,	// (0x00025060) list_medium_line_t2_g3_g1_ParamLimits

0x89e1,	// (0x00025060) list_medium_line_t2_g3_g1

0xa387,	// (0x00026a06) list_medium_line_t2_g3_g2_ParamLimits

0xa387,	// (0x00026a06) list_medium_line_t2_g3_g2

0x89ed,	// (0x0002506c) list_medium_line_t2_g3_g3_ParamLimits

0x89ed,	// (0x0002506c) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0002c3e2) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0002c3e2) list_medium_line_t2_g3_g

0xa3a8,	// (0x00026a27) list_medium_line_t2_g3_t1_ParamLimits

0xa3a8,	// (0x00026a27) list_medium_line_t2_g3_t1

0xa3c2,	// (0x00026a41) list_medium_line_t2_g3_t2_ParamLimits

0xa3c2,	// (0x00026a41) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0002c3e9) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0002c3e9) list_medium_line_t2_g3_t

0x89e1,	// (0x00025060) list_medium_line_t3_g3_g1_ParamLimits

0x89e1,	// (0x00025060) list_medium_line_t3_g3_g1

0xa387,	// (0x00026a06) list_medium_line_t3_g3_g2_ParamLimits

0xa387,	// (0x00026a06) list_medium_line_t3_g3_g2

0x89ed,	// (0x0002506c) list_medium_line_t3_g3_g3_ParamLimits

0x89ed,	// (0x0002506c) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0002c3e2) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0002c3e2) list_medium_line_t3_g3_g

0xa3d8,	// (0x00026a57) list_medium_line_t3_g3_t1_ParamLimits

0xa3d8,	// (0x00026a57) list_medium_line_t3_g3_t1

0xa3f1,	// (0x00026a70) list_medium_line_t3_g3_t2_ParamLimits

0xa3f1,	// (0x00026a70) list_medium_line_t3_g3_t2

0xa407,	// (0x00026a86) list_medium_line_t3_g3_t3_ParamLimits

0xa407,	// (0x00026a86) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0002c3ee) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0002c3ee) list_medium_line_t3_g3_t

0xa088,	// (0x00026707) list_medium_line_right_iconx2_g1

0x9ef3,	// (0x00026572) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0002c3f5) list_medium_line_right_iconx2_g

0xa41d,	// (0x00026a9c) list_medium_line_right_iconx2_t1

0xa088,	// (0x00026707) list_medium_line_t2_right_iconx2_g1

0x9ef3,	// (0x00026572) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0002c3f5) list_medium_line_t2_right_iconx2_g

0xa42b,	// (0x00026aaa) list_medium_line_t2_right_iconx2_t1

0xa43b,	// (0x00026aba) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0002c3fa) list_medium_line_t2_right_iconx2_t

0xa449,	// (0x00026ac8) list_medium_line_x4_t4_t1

0xa457,	// (0x00026ad6) list_medium_line_x4_t4_t2

0xa467,	// (0x00026ae6) list_medium_line_x4_t4_t3

0xa477,	// (0x00026af6) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0002c3ff) list_medium_line_x4_t4_t

0xa4b1,	// (0x00026b30) tport_appsw_pane_ParamLimits

0xa4b1,	// (0x00026b30) tport_appsw_pane

0xa4bf,	// (0x00026b3e) tport_contact_pane_ParamLimits

0xa4bf,	// (0x00026b3e) tport_contact_pane

0xa4cf,	// (0x00026b4e) tport_listscroll_pane_ParamLimits

0xa4cf,	// (0x00026b4e) tport_listscroll_pane

0xa4df,	// (0x00026b5e) cell_tport_appsw_pane_ParamLimits

0xa4df,	// (0x00026b5e) cell_tport_appsw_pane

0xe38e,	// (0x0002aa0d) tport_appsw_pane_g1_ParamLimits

0xe38e,	// (0x0002aa0d) tport_appsw_pane_g1

0x0d5b,	// (0x0001d3da) tport_contact_pane_g1

0x060a,	// (0x0001cc89) tport_contact_pane_t1

0x0d64,	// (0x0001d3e3) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0002c408) tport_contact_pane_t

0x0d72,	// (0x0001d3f1) list_tport_pane

0x0d7b,	// (0x0001d3fa) scroll_pane_cp_030

0xa512,	// (0x00026b91) cell_tport_appsw_pane_g1

0xa522,	// (0x00026ba1) cell_tport_appsw_pane_t1

0xa530,	// (0x00026baf) grid_highlight_pane_cp019

0xa538,	// (0x00026bb7) list_tport_double_graphic_pane_ParamLimits

0xa538,	// (0x00026bb7) list_tport_double_graphic_pane

0xbba5,	// (0x00028224) list_highlight_pane_cp023_ParamLimits

0xbba5,	// (0x00028224) list_highlight_pane_cp023

0xa549,	// (0x00026bc8) list_tport_double_graphic_pane_g1_ParamLimits

0xa549,	// (0x00026bc8) list_tport_double_graphic_pane_g1

0xa556,	// (0x00026bd5) list_tport_double_graphic_pane_t1_ParamLimits

0xa556,	// (0x00026bd5) list_tport_double_graphic_pane_t1

0xa56b,	// (0x00026bea) list_tport_double_graphic_pane_t2_ParamLimits

0xa56b,	// (0x00026bea) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0002c414) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0002c414) list_tport_double_graphic_pane_t

0xb494,	// (0x00027b13) main_cale_note_pane

0x3bf9,	// (0x00020278) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x3bf9,	// (0x00020278) cell_vitu2_function_top_wide_pane_cp01

0x9ad9,	// (0x00026158) wait_bar_pane_cp05_ParamLimits

0xbba5,	// (0x00028224) listscroll_cmail_pane

0x0d84,	// (0x0001d403) list_cmail_pane

0xa57d,	// (0x00026bfc) list_cmail_body_pane

0xa5a4,	// (0x00026c23) list_single_cmail_header_caption_pane

0xa5cf,	// (0x00026c4e) list_single_cmail_header_detail_pane_ParamLimits

0xa5cf,	// (0x00026c4e) list_single_cmail_header_detail_pane

0x0d94,	// (0x0001d413) list_single_cmail_header_caption_pane_t1

0xa605,	// (0x00026c84) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa605,	// (0x00026c84) list_single_cmail_header_detail_pane_g1

0x0dab,	// (0x0001d42a) list_single_cmail_header_detail_pane_g2_ParamLimits

0x0dab,	// (0x0001d42a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0002c419) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0002c419) list_single_cmail_header_detail_pane_g

0x0dc4,	// (0x0001d443) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0dc4,	// (0x0001d443) list_single_cmail_header_detail_pane_t1

0x0e24,	// (0x0001d4a3) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0e24,	// (0x0001d4a3) list_single_cmail_header_editor_pane_bg

0x0767,	// (0x0001cde6) list_cmail_body_pane_g1

0x0e3b,	// (0x0001d4ba) list_cmail_body_pane_t1

0xeb13,	// (0x0002b192) list_single_cmail_header_editor_pane_bg_g1

0xbffd,	// (0x0002867c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xeb23,	// (0x0002b1a2) list_single_cmail_header_editor_pane_bg_g1_copy2

0xeb1b,	// (0x0002b19a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xed8f,	// (0x0002b40e) list_single_cmail_header_editor_pane_bg_g1_copy4

0xeb43,	// (0x0002b1c2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xeb33,	// (0x0002b1b2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xeb3b,	// (0x0002b1ba) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xbfdd,	// (0x0002865c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa61b,	// (0x00026c9a) calenote_gesture_pane_ParamLimits

0xa61b,	// (0x00026c9a) calenote_gesture_pane

0xa635,	// (0x00026cb4) calenote_window_pane_ParamLimits

0xa635,	// (0x00026cb4) calenote_window_pane

0x0e49,	// (0x0001d4c8) popup_note_window_cp01

0xa64d,	// (0x00026ccc) calenote_swipe_1_pane_ParamLimits

0xa64d,	// (0x00026ccc) calenote_swipe_1_pane

0x9e95,	// (0x00026514) calenote_swipe_2_pane_ParamLimits

0x9e95,	// (0x00026514) calenote_swipe_2_pane

0x0ac1,	// (0x0001d140) calenote_swipe_1_pane_g1_ParamLimits

0x0ac1,	// (0x0001d140) calenote_swipe_1_pane_g1

0x0ace,	// (0x0001d14d) calenote_swipe_1_pane_g2_ParamLimits

0x0ace,	// (0x0001d14d) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0002c342) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0002c342) calenote_swipe_1_pane_g

0x0e5b,	// (0x0001d4da) calenote_swipe_1_pane_t1_ParamLimits

0x0e5b,	// (0x0001d4da) calenote_swipe_1_pane_t1

0x0ac1,	// (0x0001d140) calenote_swipe_2_pane_g1_ParamLimits

0x0ac1,	// (0x0001d140) calenote_swipe_2_pane_g1

0x0e7a,	// (0x0001d4f9) calenote_swipe_2_pane_g2_ParamLimits

0x0e7a,	// (0x0001d4f9) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0002c425) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0002c425) calenote_swipe_2_pane_g

0x0e86,	// (0x0001d505) calenote_swipe_2_pane_t1_ParamLimits

0x0e86,	// (0x0001d505) calenote_swipe_2_pane_t1

0xb494,	// (0x00027b13) main_mup_navstr_pane

0x7a58,	// (0x000240d7) main_mup3_pane_t7_ParamLimits

0x7a58,	// (0x000240d7) main_mup3_pane_t7

0x342a,	// (0x0001faa9) main_mp4_pane_g6_ParamLimits

0x342a,	// (0x0001faa9) main_mp4_pane_g6

0x371d,	// (0x0001fd9c) main_image3_pane_t4_ParamLimits

0x371d,	// (0x0001fd9c) main_image3_pane_t4

0xa660,	// (0x00026cdf) popup_navstr_preview_pane_ParamLimits

0xa660,	// (0x00026cdf) popup_navstr_preview_pane

0xa66c,	// (0x00026ceb) scroll_navstr_pane_ParamLimits

0xa66c,	// (0x00026ceb) scroll_navstr_pane

0xb494,	// (0x00027b13) bg_popup_preview_window_pane_cp04

0x0ead,	// (0x0001d52c) popup_navstr_preview_pane_t1

0xa678,	// (0x00026cf7) scroll_navstr_pane_g1_ParamLimits

0xa678,	// (0x00026cf7) scroll_navstr_pane_g1

0xa685,	// (0x00026d04) scroll_navstr_pane_t1_ParamLimits

0xa685,	// (0x00026d04) scroll_navstr_pane_t1

0x0e52,	// (0x0001d4d1) bg_button_pane_cp014

0x0e52,	// (0x0001d4d1) bg_button_pane_cp030

0x9da8,	// (0x00026427) list_double_fisheye_pane_g4_ParamLimits

0x9da8,	// (0x00026427) list_double_fisheye_pane_g4

0x9db4,	// (0x00026433) list_double_fisheye_pane_g5_ParamLimits

0x9db4,	// (0x00026433) list_double_fisheye_pane_g5

0xec52,	// (0x0002b2d1) sp_fs_scroll_pane_cp03

0x0be1,	// (0x0001d260) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x0bed,	// (0x0001d26c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0002c35f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x0bf9,	// (0x0001d278) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x0d8c,	// (0x0001d40b) sp_fs_scroll_pane_cp02

0xbce3,	// (0x00028362) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xbce3,	// (0x00028362) popup_sp_fs_calendar_preview_list_single_pane

0xb494,	// (0x00027b13) main_cam6_pano_pane

0x2db5,	// (0x0001f434) main_mup3_pane_ParamLimits

0xb494,	// (0x00027b13) main_phacti_pane

0x99ae,	// (0x0002602d) bg_button_pane_cp11

0x99c6,	// (0x00026045) main_mobtv_info_pane_g2_ParamLimits

0x99c6,	// (0x00026045) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0002c2bf) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0002c2bf) main_mobtv_info_pane_g

0x9b78,	// (0x000261f7) sc_clock_pane_t5_ParamLimits

0x9b78,	// (0x000261f7) sc_clock_pane_t5

0x9c19,	// (0x00026298) main_radioblah_pane_g1_ParamLimits

0x0a04,	// (0x0001d083) main_radioblah_pane_t3_ParamLimits

0x0a04,	// (0x0001d083) main_radioblah_pane_t3

0x0a1c,	// (0x0001d09b) main_radioblah_pane_t4_ParamLimits

0x0a1c,	// (0x0001d09b) main_radioblah_pane_t4

0x9c37,	// (0x000262b6) main_radioblah_text_pane_ParamLimits

0x9c37,	// (0x000262b6) main_radioblah_text_pane

0x9c44,	// (0x000262c3) main_radioblah_info_pane_g1_ParamLimits

0x9cd9,	// (0x00026358) main_radioblah_info_pane_t4_ParamLimits

0x9cd9,	// (0x00026358) main_radioblah_info_pane_t4

0xbba5,	// (0x00028224) main_sp_fs_calendar_pane

0xa697,	// (0x00026d16) main_phacti_pane_g1

0xa69f,	// (0x00026d1e) phacti_note_pane_ParamLimits

0xa69f,	// (0x00026d1e) phacti_note_pane

0x0ec4,	// (0x0001d543) phacti_term_pane_ParamLimits

0x0ec4,	// (0x0001d543) phacti_term_pane

0x0ed9,	// (0x0001d558) phacti_note_pane_t1_ParamLimits

0x0ed9,	// (0x0001d558) phacti_note_pane_t1

0x0ef0,	// (0x0001d56f) phacti_term_pane_g1

0x0ef8,	// (0x0001d577) phacti_term_pane_t1_ParamLimits

0x0ef8,	// (0x0001d577) phacti_term_pane_t1

0x0f22,	// (0x0001d5a1) popup_sp_fs_calendar_preview_list_single_pane_g1

0xbd82,	// (0x00028401) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0002c42f) popup_sp_fs_calendar_preview_list_single_pane_g

0x0f2a,	// (0x0001d5a9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x0f2a,	// (0x0001d5a9) popup_sp_fs_calendar_preview_list_single_pane_t1

0x0f40,	// (0x0001d5bf) aid_popup_sp_fs_bg_corner_pane

0xe09a,	// (0x0002a719) popup_sp_fs_calendar_preview_bg_pane_g1

0xb494,	// (0x00027b13) popup_sp_fs_calendar_preview_bg_pane

0x0f48,	// (0x0001d5c7) popup_sp_fs_calendar_preview_list_pane

0xdc89,	// (0x0002a308) bg_main_sp_fs_cale_pane_ParamLimits

0xdc89,	// (0x0002a308) bg_main_sp_fs_cale_pane

0x0f59,	// (0x0001d5d8) listscroll_cale_mrui_pane_ParamLimits

0x0f59,	// (0x0001d5d8) listscroll_cale_mrui_pane

0xebb3,	// (0x0002b232) listscroll_sp_fs_schedule_track_pane

0x0f6e,	// (0x0001d5ed) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x0f6e,	// (0x0001d5ed) main_sp_fs_ctrlbar_pane_cp01

0x0f81,	// (0x0001d600) main_sp_fs_ribbon_pane

0x0f89,	// (0x0001d608) popup_sp_fs_cale_preview_window

0xa702,	// (0x00026d81) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa702,	// (0x00026d81) list_single_sp_fs_schedule_track_pane

0xeb97,	// (0x0002b216) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xeb97,	// (0x0002b216) bg_sp_fs_highlight_list_pane_cp03

0xa724,	// (0x00026da3) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa724,	// (0x00026da3) list_single_sp_fs_schedule_track_pane_g1

0xa730,	// (0x00026daf) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa730,	// (0x00026daf) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0002c434) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0002c434) list_single_sp_fs_schedule_track_pane_g

0xa73c,	// (0x00026dbb) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa73c,	// (0x00026dbb) list_single_sp_fs_schedule_track_pane_t1

0xa754,	// (0x00026dd3) sp_fs_schedule_track_pane_ParamLimits

0xa754,	// (0x00026dd3) sp_fs_schedule_track_pane

0x0f9b,	// (0x0001d61a) sp_fs_schedule_track_pane_g1

0x0fa3,	// (0x0001d622) sp_fs_schedule_track_pane_g2

0x0fab,	// (0x0001d62a) sp_fs_schedule_track_pane_g3

0x0fb3,	// (0x0001d632) sp_fs_schedule_track_pane_g4

0x0fbb,	// (0x0001d63a) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0002c439) sp_fs_schedule_track_pane_g

0xeb13,	// (0x0002b192) bg_sp_fs_schedule_viewer_highlight_g1

0xbffd,	// (0x0002867c) bg_sp_fs_schedule_viewer_highlight_g2

0xeb1b,	// (0x0002b19a) bg_sp_fs_schedule_viewer_highlight_g3

0xeb23,	// (0x0002b1a2) bg_sp_fs_schedule_viewer_highlight_g4

0xed8f,	// (0x0002b40e) bg_sp_fs_schedule_viewer_highlight_g5

0xeb33,	// (0x0002b1b2) bg_sp_fs_schedule_viewer_highlight_g6

0xeb3b,	// (0x0002b1ba) bg_sp_fs_schedule_viewer_highlight_g7

0xeb43,	// (0x0002b1c2) bg_sp_fs_schedule_viewer_highlight_g8

0xbfdd,	// (0x0002865c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0002c444) bg_sp_fs_schedule_viewer_highlight_g

0xb494,	// (0x00027b13) bg_main_sp_fs_ribbon_pane

0xa764,	// (0x00026de3) main_sp_fs_ribbon_pane_g1

0x0fc3,	// (0x0001d642) main_sp_fs_ribbon_pane_t1

0xa76d,	// (0x00026dec) main_sp_fs_ribbon_pane_t2

0x0fd2,	// (0x0001d651) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0002c457) main_sp_fs_ribbon_pane_t

0x0fe1,	// (0x0001d660) main_sp_fs_ribbon_scheduler_pane

0x0fe9,	// (0x0001d668) bg_main_sp_fs_ribbon_pane_g1

0x0ff2,	// (0x0001d671) bg_main_sp_fs_ribbon_pane_g2

0x0ffb,	// (0x0001d67a) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0002c45e) bg_main_sp_fs_ribbon_pane_g

0x1003,	// (0x0001d682) main_sp_fs_ribbon_scheduler_pane_g1

0x100c,	// (0x0001d68b) main_sp_fs_ribbon_scheduler_pane_g2

0x1015,	// (0x0001d694) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0002c465) main_sp_fs_ribbon_scheduler_pane_g

0x101e,	// (0x0001d69d) list_cale_mrui_pane

0xa77c,	// (0x00026dfb) sp_fs_scroll_pane_cp07_ParamLimits

0xa77c,	// (0x00026dfb) sp_fs_scroll_pane_cp07

0xa798,	// (0x00026e17) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa798,	// (0x00026e17) bg_sp_fs_schedule_viewer_highlight

0x102b,	// (0x0001d6aa) list_single_sp_fs_schedule_track_pane_cp01

0x1033,	// (0x0001d6b2) list_sp_fs_schedule_track_pane

0x103b,	// (0x0001d6ba) sp_fs_scroll_pane_cp06_ParamLimits

0x103b,	// (0x0001d6ba) sp_fs_scroll_pane_cp06

0xe09a,	// (0x0002a719) bgmain_sp_fs_calendar_pane_g1

0xa7a5,	// (0x00026e24) list_single_cale_mrui_pane_ParamLimits

0xa7a5,	// (0x00026e24) list_single_cale_mrui_pane

0x104d,	// (0x0001d6cc) list_single_cale_mrui_row_pane_ParamLimits

0x104d,	// (0x0001d6cc) list_single_cale_mrui_row_pane

0x105a,	// (0x0001d6d9) list_single_cale_mrui_row_pane_g1_ParamLimits

0x105a,	// (0x0001d6d9) list_single_cale_mrui_row_pane_g1

0x109f,	// (0x0001d71e) list_single_cale_mrui_row_pane_t1_ParamLimits

0x109f,	// (0x0001d71e) list_single_cale_mrui_row_pane_t1

0xa7d2,	// (0x00026e51) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa7d2,	// (0x00026e51) list_single_cale_mrui_row_pane_t2

0x10b1,	// (0x0001d730) list_single_cale_mrui_row_pane_t3_ParamLimits

0x10b1,	// (0x0001d730) list_single_cale_mrui_row_pane_t3

0x10e0,	// (0x0001d75f) list_single_cale_mrui_row_pane_t4_ParamLimits

0x10e0,	// (0x0001d75f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0002c473) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0002c473) list_single_cale_mrui_row_pane_t

0xa838,	// (0x00026eb7) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa838,	// (0x00026eb7) list_single_cmail_header_editor_pane_bg_cp01

0xa858,	// (0x00026ed7) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa858,	// (0x00026ed7) list_single_cmail_header_editor_pane_bg_cp02

0xa874,	// (0x00026ef3) main_radioblah_text_pane_t1_ParamLimits

0xa874,	// (0x00026ef3) main_radioblah_text_pane_t1

0x110f,	// (0x0001d78e) cam6_indi_pane_cp01

0x1117,	// (0x0001d796) cam6_mode_pane_cp01

0x111f,	// (0x0001d79e) cam6_pano_pane

0x1128,	// (0x0001d7a7) cam6_zoom_pane_cp01

0x1130,	// (0x0001d7af) cam6_pano_image_pane

0x113b,	// (0x0001d7ba) cam6_pano_pane_g1

0x0767,	// (0x0001cde6) cam6_pano_pane_g2

0x1144,	// (0x0001d7c3) cam6_pano_pane_g3

0x114d,	// (0x0001d7cc) cam6_pano_pane_g4

0xe689,	// (0x0002ad08) cam6_pano_pane_g5

0x1156,	// (0x0001d7d5) cam6_pano_pane_g6

0x1160,	// (0x0001d7df) cam6_pano_pane_g7

0x1168,	// (0x0001d7e7) cam6_pano_pane_g8

0x1171,	// (0x0001d7f0) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0002c47c) cam6_pano_pane_g

0xb494,	// (0x00027b13) main_browser_tag_pane

0x0ea5,	// (0x0001d524) grid_navstr_albumart_pane

0x117c,	// (0x0001d7fb) cell_navstr_albumart_pane_ParamLimits

0x117c,	// (0x0001d7fb) cell_navstr_albumart_pane

0x119c,	// (0x0001d81b) cell_navstr_albumart_pane_g1

0xda9a,	// (0x0002a119) cell_navstr_albumart_pane_g2

0xdaaa,	// (0x0002a129) cell_navstr_albumart_pane_g3

0xdaa2,	// (0x0002a121) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0002c48f) cell_navstr_albumart_pane_g

0xa88f,	// (0x00026f0e) bt_list_pane_ParamLimits

0xa88f,	// (0x00026f0e) bt_list_pane

0xa8af,	// (0x00026f2e) bt_list_pane_t1

0xa8be,	// (0x00026f3d) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0002c498) bt_list_pane_t

0xb494,	// (0x00027b13) main_cale_prevew_pane

0xa8cd,	// (0x00026f4c) popup_cale_preview_window_ParamLimits

0xa8cd,	// (0x00026f4c) popup_cale_preview_window

0xbba5,	// (0x00028224) bg_popup_preview_window_pane_cp05_ParamLimits

0xbba5,	// (0x00028224) bg_popup_preview_window_pane_cp05

0x11a4,	// (0x0001d823) list_cale_preview_pane_ParamLimits

0x11a4,	// (0x0001d823) list_cale_preview_pane

0xa8e6,	// (0x00026f65) list_double_cale_preview_pane_ParamLimits

0xa8e6,	// (0x00026f65) list_double_cale_preview_pane

0xa8f8,	// (0x00026f77) list_single_cale_preview_pane_ParamLimits

0xa8f8,	// (0x00026f77) list_single_cale_preview_pane

0xa90e,	// (0x00026f8d) list_single_cale_preview_pane_g1

0xa916,	// (0x00026f95) list_single_cale_preview_pane_t1_ParamLimits

0xa916,	// (0x00026f95) list_single_cale_preview_pane_t1

0xa92b,	// (0x00026faa) list_double_cale_preview_pane_g1

0xa933,	// (0x00026fb2) list_double_cale_preview_pane_t1_ParamLimits

0xa933,	// (0x00026fb2) list_double_cale_preview_pane_t1

0xa948,	// (0x00026fc7) list_double_cale_preview_pane_t2_ParamLimits

0xa948,	// (0x00026fc7) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0002c49d) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0002c49d) list_double_cale_preview_pane_t

0xb494,	// (0x00027b13) main_ezdial_pane

0xbba5,	// (0x00028224) main_sp_fs_email_pane_ParamLimits

0x9f19,	// (0x00026598) cmail_ddmenu_btn01_pane_ParamLimits

0x9f19,	// (0x00026598) cmail_ddmenu_btn01_pane

0x9f36,	// (0x000265b5) cmail_ddmenu_btn02_pane_ParamLimits

0x9f36,	// (0x000265b5) cmail_ddmenu_btn02_pane

0x9f54,	// (0x000265d3) cmail_ddmenu_btn03_pane_ParamLimits

0x9f54,	// (0x000265d3) cmail_ddmenu_btn03_pane

0x9f82,	// (0x00026601) main_sp_fs_ctrlbar_pane_ParamLimits

0x9f98,	// (0x00026617) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa57d,	// (0x00026bfc) list_cmail_body_pane_ParamLimits

0x0da2,	// (0x0001d421) bg_button_pane_cp12

0x0db7,	// (0x0001d436) list_single_cmail_header_detail_pane_g3_ParamLimits

0x0db7,	// (0x0001d436) list_single_cmail_header_detail_pane_g3

0x0e00,	// (0x0001d47f) list_single_cmail_header_detail_pane_t2_ParamLimits

0x0e00,	// (0x0001d47f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0002c420) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0002c420) list_single_cmail_header_detail_pane_t

0x0f0d,	// (0x0001d58c) phacti_term_pane_t2_ParamLimits

0x0f0d,	// (0x0001d58c) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0002c42a) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0002c42a) phacti_term_pane_t

0x11b0,	// (0x0001d82f) aid_size_list_single_double

0xa960,	// (0x00026fdf) popup_ezdial_listscroll_window

0xa981,	// (0x00027000) popup_number_entry_window_cp01

0xbda4,	// (0x00028423) bg_popup_call_pane_cp09

0x11bc,	// (0x0001d83b) ezdial_list_pane

0x11c4,	// (0x0001d843) scroll_pane_cp23

0xde7f,	// (0x0002a4fe) bg_button_pane_cp028_ParamLimits

0xde7f,	// (0x0002a4fe) bg_button_pane_cp028

0xa98f,	// (0x0002700e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa98f,	// (0x0002700e) cmail_ddmenu_btn01_pane_g1

0xa99f,	// (0x0002701e) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa99f,	// (0x0002701e) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0002c4a2) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0002c4a2) cmail_ddmenu_btn01_pane_g

0x11cc,	// (0x0001d84b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x11cc,	// (0x0001d84b) cmail_ddmenu_btn01_pane_t1

0xdc89,	// (0x0002a308) bg_button_pane_cp029_ParamLimits

0xdc89,	// (0x0002a308) bg_button_pane_cp029

0xa99f,	// (0x0002701e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa99f,	// (0x0002701e) cmail_ddmenu_btn02_pane_g1

0xa9b8,	// (0x00027037) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa9b8,	// (0x00027037) cmail_ddmenu_btn02_pane_t1

0xeb97,	// (0x0002b216) bg_button_pane_cp031_ParamLimits

0xeb97,	// (0x0002b216) bg_button_pane_cp031

0xa99f,	// (0x0002701e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa99f,	// (0x0002701e) cmail_ddmenu_btn03_pane_g1

0xa9b8,	// (0x00027037) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa9b8,	// (0x00027037) cmail_ddmenu_btn03_pane_t1

0x82a1,	// (0x00024920) cell_dialer2_keypad_pane_t1_ParamLimits

0x82bb,	// (0x0002493a) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x82bb,	// (0x0002493a) cell_dialer2_keypad_pane_t1_copy1

0x97ef,	// (0x00025e6e) ncimui_group_button_pane

0xbba5,	// (0x00028224) main_sp_fs_calendar_pane_ParamLimits

0xa5a4,	// (0x00026c23) list_single_cmail_header_caption_pane_ParamLimits

0x0f50,	// (0x0001d5cf) aid_recal_txt_sm_pane

0xb494,	// (0x00027b13) mian_recal_day_pane

0x0f89,	// (0x0001d608) popup_sp_fs_cale_preview_window_ParamLimits

0x11e1,	// (0x0001d860) list_recal_day_pane

0x1235,	// (0x0001d8b4) list_single_recal_day_pane_ParamLimits

0x1235,	// (0x0001d8b4) list_single_recal_day_pane

0x1247,	// (0x0001d8c6) list_single_recal_day_pane_g1_ParamLimits

0x1247,	// (0x0001d8c6) list_single_recal_day_pane_g1

0x1253,	// (0x0001d8d2) list_single_recal_day_pane_g2_ParamLimits

0x1253,	// (0x0001d8d2) list_single_recal_day_pane_g2

0x125f,	// (0x0001d8de) list_single_recal_day_pane_g3_ParamLimits

0x125f,	// (0x0001d8de) list_single_recal_day_pane_g3

0xa9dc,	// (0x0002705b) list_single_recal_day_pane_g4_ParamLimits

0xa9dc,	// (0x0002705b) list_single_recal_day_pane_g4

0x126b,	// (0x0001d8ea) list_single_recal_day_pane_g5_ParamLimits

0x126b,	// (0x0001d8ea) list_single_recal_day_pane_g5

0x1277,	// (0x0001d8f6) list_single_recal_day_pane_g6_ParamLimits

0x1277,	// (0x0001d8f6) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0002c4b1) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0002c4b1) list_single_recal_day_pane_g

0x128b,	// (0x0001d90a) list_single_recal_day_pane_t1

0x129d,	// (0x0001d91c) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0002c4bc) list_single_recal_day_pane_t

0xa9f4,	// (0x00027073) ncimui_query_button_pane_ParamLimits

0xa9f4,	// (0x00027073) ncimui_query_button_pane

0xaa04,	// (0x00027083) ncimui_query_button_pane_t1_ParamLimits

0xaa04,	// (0x00027083) ncimui_query_button_pane_t1

0x12af,	// (0x0001d92e) ncimui_query_button_pane_t2_ParamLimits

0x12af,	// (0x0001d92e) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0002c4c1) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0002c4c1) ncimui_query_button_pane_t

0xaa17,	// (0x00027096) query_button_pane_ParamLimits

0xaa17,	// (0x00027096) query_button_pane

0xb494,	// (0x00027b13) bg_button_pane_cp0028

0x12c2,	// (0x0001d941) query_button_pane_t1

0x2dd1,	// (0x0001f450) main_tport_pane_ParamLimits

0xa487,	// (0x00026b06) bg_popup_window_pane_cp01_ParamLimits

0xa487,	// (0x00026b06) bg_popup_window_pane_cp01

0xa495,	// (0x00026b14) heading_pane_cp08_ParamLimits

0xa495,	// (0x00026b14) heading_pane_cp08

0xa4a3,	// (0x00026b22) heading_pane_cp07_ParamLimits

0xa4a3,	// (0x00026b22) heading_pane_cp07

0xa512,	// (0x00026b91) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0002c40d) cell_tport_appsw_pane_g

0xc971,	// (0x00028ff0) input_candi_list_open_g1

0xc1c0,	// (0x0002883f) list_cale_time_pane_g6_ParamLimits

0xc1c0,	// (0x0002883f) list_cale_time_pane_g6

0x749e,	// (0x00023b1d) aid_size_touch_calib_1_ParamLimits

0x749e,	// (0x00023b1d) aid_size_touch_calib_1

0x74aa,	// (0x00023b29) aid_size_touch_calib_2_ParamLimits

0x74aa,	// (0x00023b29) aid_size_touch_calib_2

0x74b8,	// (0x00023b37) aid_size_touch_calib_3_ParamLimits

0x74b8,	// (0x00023b37) aid_size_touch_calib_3

0x74c8,	// (0x00023b47) aid_size_touch_calib_4_ParamLimits

0x74c8,	// (0x00023b47) aid_size_touch_calib_4

0x74d6,	// (0x00023b55) main_touch_calib_button_group_pane_ParamLimits

0x74d6,	// (0x00023b55) main_touch_calib_button_group_pane

0x74e4,	// (0x00023b63) main_touch_calib_pane_g1_ParamLimits

0x74f0,	// (0x00023b6f) main_touch_calib_pane_g2_ParamLimits

0x74fc,	// (0x00023b7b) main_touch_calib_pane_g3_ParamLimits

0x7508,	// (0x00023b87) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0002bdd0) main_touch_calib_pane_g_ParamLimits

0x7514,	// (0x00023b93) main_touch_calib_pane_t1_ParamLimits

0x752d,	// (0x00023bac) main_touch_calib_pane_t2_ParamLimits

0x7546,	// (0x00023bc5) main_touch_calib_pane_t3_ParamLimits

0x755c,	// (0x00023bdb) main_touch_calib_pane_t4_ParamLimits

0x7572,	// (0x00023bf1) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0002bdd9) main_touch_calib_pane_t_ParamLimits

0xe429,	// (0x0002aaa8) list_single_fp_cale_pane_g3_ParamLimits

0xe429,	// (0x0002aaa8) list_single_fp_cale_pane_g3

0x2db5,	// (0x0001f434) bg_button_pane_cp012_ParamLimits

0x2db5,	// (0x0001f434) bg_vkb2_func_pane_cp03_ParamLimits

0x3dfe,	// (0x0002047d) cell_vitu2_function_top_pane_g1_ParamLimits

0x2db5,	// (0x0001f434) bg_vkb2_func_pane_cp04_ParamLimits

0x9777,	// (0x00025df6) main_ncimui_button_group_pane_ParamLimits

0x9777,	// (0x00025df6) main_ncimui_button_group_pane

0x97dd,	// (0x00025e5c) main_ncimui_pane_t3_ParamLimits

0x97dd,	// (0x00025e5c) main_ncimui_pane_t3

0x0ebb,	// (0x0001d53a) phacti_button_group_pane

0x11b0,	// (0x0001d82f) aid_size_list_single_double_ParamLimits

0xa960,	// (0x00026fdf) popup_ezdial_listscroll_window_ParamLimits

0xa981,	// (0x00027000) popup_number_entry_window_cp01_ParamLimits

0xaa24,	// (0x000270a3) phacti_button_pane_ParamLimits

0xaa24,	// (0x000270a3) phacti_button_pane

0xb494,	// (0x00027b13) bg_button_pane_cp14

0x12d0,	// (0x0001d94f) phacti_button_pane_t1

0xaa35,	// (0x000270b4) main_touch_calib_button_pane_ParamLimits

0xaa35,	// (0x000270b4) main_touch_calib_button_pane

0xbbdf,	// (0x0002825e) bg_button_pane_cp18_ParamLimits

0xbbdf,	// (0x0002825e) bg_button_pane_cp18

0x12de,	// (0x0001d95d) main_touch_calib_button_pane_t1_ParamLimits

0x12de,	// (0x0001d95d) main_touch_calib_button_pane_t1

0x12f4,	// (0x0001d973) main_touch_calib_button_pane_t2_ParamLimits

0x12f4,	// (0x0001d973) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0002c4c6) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0002c4c6) main_touch_calib_button_pane_t

0xb494,	// (0x00027b13) cell_ncimui_button_pane

0xb494,	// (0x00027b13) bg_button_pane_cp032

0x1312,	// (0x0001d991) cell_ncimui_button_pane_t1

0x3630,	// (0x0001fcaf) image3_infobar_pane_ParamLimits

0x3630,	// (0x0001fcaf) image3_infobar_pane

0x9b9a,	// (0x00026219) fs_bigclock_status_pane_ParamLimits

0x9b9a,	// (0x00026219) fs_bigclock_status_pane

0x9ba7,	// (0x00026226) main_fs_bigclock_clock_pane_ParamLimits

0x9ba7,	// (0x00026226) main_fs_bigclock_clock_pane

0x9bbb,	// (0x0002623a) main_fs_bigclock_indi_pane_ParamLimits

0x9bbb,	// (0x0002623a) main_fs_bigclock_indi_pane

0x9be3,	// (0x00026262) main_fs_bigclock_swipe_pane_ParamLimits

0x9be3,	// (0x00026262) main_fs_bigclock_swipe_pane

0xb494,	// (0x00027b13) main_fs_clock_dumped_data

0x0874,	// (0x0001cef3) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x0874,	// (0x0001cef3) list_single_fs_bigclock_indicator_pane_g1

0x088f,	// (0x0001cf0e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x088f,	// (0x0001cf0e) list_single_fs_bigclock_indicator_pane_g2

0x08a9,	// (0x0001cf28) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x08a9,	// (0x0001cf28) list_single_fs_bigclock_indicator_pane_g3

0x08c3,	// (0x0001cf42) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x08c3,	// (0x0001cf42) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0002c2f3) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0002c2f3) list_single_fs_bigclock_indicator_pane_g

0x08ee,	// (0x0001cf6d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x08ee,	// (0x0001cf6d) list_single_fs_bigclock_indicator_pane_t1

0x0916,	// (0x0001cf95) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x0916,	// (0x0001cf95) list_single_fs_bigclock_indicator_pane_t2

0x093e,	// (0x0001cfbd) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x093e,	// (0x0001cfbd) list_single_fs_bigclock_indicator_pane_t3

0x0966,	// (0x0001cfe5) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x0966,	// (0x0001cfe5) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0002c2fe) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0002c2fe) list_single_fs_bigclock_indicator_pane_t

0x1320,	// (0x0001d99f) image3_infobar_fav_pane_ParamLimits

0x1320,	// (0x0001d99f) image3_infobar_fav_pane

0x1330,	// (0x0001d9af) image3_infobar_loc_pane_ParamLimits

0x1330,	// (0x0001d9af) image3_infobar_loc_pane

0x1344,	// (0x0001d9c3) image3_infobar_time_pane_ParamLimits

0x1344,	// (0x0001d9c3) image3_infobar_time_pane

0xe09a,	// (0x0002a719) image3_infobar_time_pane_g1

0x1354,	// (0x0001d9d3) image3_infobar_time_pane_t1

0xe09a,	// (0x0002a719) image3_infobar_loc_pane_g1

0x1362,	// (0x0001d9e1) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0002c4cb) image3_infobar_loc_pane_g

0x136a,	// (0x0001d9e9) image3_infobar_loc_pane_t1

0xe09a,	// (0x0002a719) image3_infobar_fav_pane_g1

0x1378,	// (0x0001d9f7) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0002c4d0) image3_infobar_fav_pane_g

0x1380,	// (0x0001d9ff) fs_bigclock_status_battery_pane

0x1389,	// (0x0001da08) fs_bigclock_status_signal_pane

0x1392,	// (0x0001da11) fs_bigclock_status_title_pane

0x139b,	// (0x0001da1a) fs_bigclock_status_signal_pane_g1

0x13a4,	// (0x0001da23) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0002c4d5) fs_bigclock_status_signal_pane_g

0x13ac,	// (0x0001da2b) fs_bigclock_status_battery_pane_g1

0x13b5,	// (0x0001da34) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0002c4da) fs_bigclock_status_battery_pane_g

0x13bd,	// (0x0001da3c) fs_bigclock_status_title_pane_t1

0xaa45,	// (0x000270c4) main_fs_bigclock_clock_pane_g1

0xaa45,	// (0x000270c4) main_fs_bigclock_clock_pane_g2

0xaa52,	// (0x000270d1) main_fs_bigclock_clock_pane_g3

0xaa52,	// (0x000270d1) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0002c4df) main_fs_bigclock_clock_pane_g

0xaa5e,	// (0x000270dd) main_fs_bigclock_clock_pane_t1

0xaa71,	// (0x000270f0) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0002c4e8) main_fs_bigclock_clock_pane_t

0x13cb,	// (0x0001da4a) list_single_fs_bigclock_indicator_pane_ParamLimits

0x13cb,	// (0x0001da4a) list_single_fs_bigclock_indicator_pane

0x13dc,	// (0x0001da5b) list_single_fs_bigclock_pane_ParamLimits

0x13dc,	// (0x0001da5b) list_single_fs_bigclock_pane

0x1402,	// (0x0001da81) main_fs_bigclock_indicator_pane_t1

0x1411,	// (0x0001da90) list_single_fs_bigclock_pane_g1

0x1419,	// (0x0001da98) list_single_fs_bigclock_pane_t1

0xe09a,	// (0x0002a719) main_fs_bigclock_swipe_pane_g1

0x145c,	// (0x0001dadb) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0002c4f9) main_fs_bigclock_swipe_pane_g

0x1464,	// (0x0001dae3) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1464,	// (0x0001dae3) main_fs_bigclock_swipe_pane_t1

0x5f9e,	// (0x0002261d) call_type_pane_ParamLimits

0xb494,	// (0x00027b13) main_btmg_pane

0x1086,	// (0x0001d705) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1086,	// (0x0001d705) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0002c46c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0002c46c) list_single_cale_mrui_row_pane_g

0x121c,	// (0x0001d89b) list_recal_vselct_arw_lo_pane

0x1224,	// (0x0001d8a3) list_recal_vselct_arw_up_pane

0x122c,	// (0x0001d8ab) list_recal_vselct_pane

0xaac8,	// (0x00027147) btmg_button_pane

0xaad4,	// (0x00027153) main_btmg_pane_g1

0xb494,	// (0x00027b13) bg_button_pane_cp044

0x1481,	// (0x0001db00) btmg_button_pane_t1

0xdc75,	// (0x0002a2f4) aid_listscroll_gen

0xbba5,	// (0x00028224) main_cntbar_detail_pane

0x0d84,	// (0x0001d403) list_cmail_folder_pane

0xec52,	// (0x0002b2d1) sp_fs_scroll_pane_cp03_ParamLimits

0xa5a4,	// (0x00026c23) list_single_fs_dyc_pane_cp01_ParamLimits

0xa5a4,	// (0x00026c23) list_single_fs_dyc_pane_cp01

0x148f,	// (0x0001db0e) aid_size_cmail_indent

0x1498,	// (0x0001db17) list_single_dyc_row_pane_cp01

0xaafc,	// (0x0002717b) cntbar_detail_list_pane_ParamLimits

0xaafc,	// (0x0002717b) cntbar_detail_list_pane

0xab36,	// (0x000271b5) main_cntbar_detail_cont_pane_ParamLimits

0xab36,	// (0x000271b5) main_cntbar_detail_cont_pane

0x5eb7,	// (0x00022536) scroll_pane_cp032_ParamLimits

0x5eb7,	// (0x00022536) scroll_pane_cp032

0xab42,	// (0x000271c1) cntbar_detail_list_event_pane_ParamLimits

0xab42,	// (0x000271c1) cntbar_detail_list_event_pane

0xab08,	// (0x00027187) cntbar_detail_list_shct_pane

0xc04b,	// (0x000286ca) aid_list_gen

0x14a1,	// (0x0001db20) aid_scroll

0x14aa,	// (0x0001db29) aid_size_touch_scroll_bar

0x0a76,	// (0x0001d0f5) aid_list_double

0xab56,	// (0x000271d5) aid_list_single

0x8f8b,	// (0x0002560a) aid_list_single_lg

0xab5f,	// (0x000271de) aid_list_z_g_a_sm

0xab67,	// (0x000271e6) aid_list_z_g_d

0xab6f,	// (0x000271ee) aid_txt_z_prm

0xab7d,	// (0x000271fc) aid_txt_z_prm_cp01

0xab8b,	// (0x0002720a) aid_txt_z_sec

0xab99,	// (0x00027218) main_cntbar_detail_cont_pane_g1_ParamLimits

0xab99,	// (0x00027218) main_cntbar_detail_cont_pane_g1

0xaba6,	// (0x00027225) main_cntbar_detail_cont_pane_g2_ParamLimits

0xaba6,	// (0x00027225) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0002c4fe) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0002c4fe) main_cntbar_detail_cont_pane_g

0x14b3,	// (0x0001db32) main_cntbar_detail_cont_pane_t1

0x14c1,	// (0x0001db40) main_cntbar_detail_cont_pane_t2

0x14cf,	// (0x0001db4e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0002c503) main_cntbar_detail_cont_pane_t

0xabb2,	// (0x00027231) cell_cntbar_detail_list_shct_pane_ParamLimits

0xabb2,	// (0x00027231) cell_cntbar_detail_list_shct_pane

0x14dd,	// (0x0001db5c) cntbar_detail_list_shct_pane_g1

0x14e6,	// (0x0001db65) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0002c50a) cntbar_detail_list_shct_pane_g

0xabc6,	// (0x00027245) cntbar_detail_list_event_pane_g1_ParamLimits

0xabc6,	// (0x00027245) cntbar_detail_list_event_pane_g1

0xabd2,	// (0x00027251) cntbar_detail_list_event_pane_g2_ParamLimits

0xabd2,	// (0x00027251) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0002c50f) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0002c50f) cntbar_detail_list_event_pane_g

0xac3e,	// (0x000272bd) cntbar_detail_list_event_pane_t1_ParamLimits

0xac3e,	// (0x000272bd) cntbar_detail_list_event_pane_t1

0xac53,	// (0x000272d2) cntbar_detail_list_event_pane_t2_ParamLimits

0xac53,	// (0x000272d2) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0002c51c) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0002c51c) cntbar_detail_list_event_pane_t

0xe09a,	// (0x0002a719) cell_cntbar_detail_list_shct_pane_g1

0xc7b6,	// (0x00028e35) navi_pane_mv_g3

0xbba5,	// (0x00028224) main_cntbar_detail_pane_ParamLimits

0xb494,	// (0x00027b13) main_notif_wgt_pane

0x3371,	// (0x0001f9f0) aid_tch_main_mp4_pane_g4

0x35a6,	// (0x0001fc25) popup_slider_window_cp02

0x1212,	// (0x0001d891) list_recal_day_event_pane

0xaadc,	// (0x0002715b) cntbar_detail_btn_pane_ParamLimits

0xaadc,	// (0x0002715b) cntbar_detail_btn_pane

0xaaec,	// (0x0002716b) cntbar_detail_btn_pane_cp01_ParamLimits

0xaaec,	// (0x0002716b) cntbar_detail_btn_pane_cp01

0xab08,	// (0x00027187) cntbar_detail_list_shct_pane_ParamLimits

0xab14,	// (0x00027193) cntbar_detail_pane_g1_ParamLimits

0xab14,	// (0x00027193) cntbar_detail_pane_g1

0xab20,	// (0x0002719f) cntbar_detail_pane_t1_ParamLimits

0xab20,	// (0x0002719f) cntbar_detail_pane_t1

0xabde,	// (0x0002725d) cntbar_detail_list_event_pane_g3_ParamLimits

0xabde,	// (0x0002725d) cntbar_detail_list_event_pane_g3

0xabf6,	// (0x00027275) cntbar_detail_list_event_pane_g4_ParamLimits

0xabf6,	// (0x00027275) cntbar_detail_list_event_pane_g4

0xac0e,	// (0x0002728d) cntbar_detail_list_event_pane_g5_ParamLimits

0xac0e,	// (0x0002728d) cntbar_detail_list_event_pane_g5

0xac26,	// (0x000272a5) cntbar_detail_list_event_pane_g6_ParamLimits

0xac26,	// (0x000272a5) cntbar_detail_list_event_pane_g6

0xac68,	// (0x000272e7) cntbar_detail_list_event_pane_t3_ParamLimits

0xac68,	// (0x000272e7) cntbar_detail_list_event_pane_t3

0xac7a,	// (0x000272f9) popup_notif_wgt_window_ParamLimits

0xac7a,	// (0x000272f9) popup_notif_wgt_window

0xac8a,	// (0x00027309) popup_submenu_window_cp01_ParamLimits

0xac8a,	// (0x00027309) popup_submenu_window_cp01

0xbda4,	// (0x00028423) bg_popup_window_pane_cp10

0x14ef,	// (0x0001db6e) listscroll_notif_wgt_pane

0x1501,	// (0x0001db80) list_notif_wgt_window

0x150a,	// (0x0001db89) scroll_pane_cp033

0xac9c,	// (0x0002731b) list_notif_wgt_row_pane_ParamLimits

0xac9c,	// (0x0002731b) list_notif_wgt_row_pane

0x1513,	// (0x0001db92) aid_size_list_notif_wgt_del

0x1520,	// (0x0001db9f) list_notif_wgt_row_pane_g1

0x152c,	// (0x0001dbab) list_notif_wgt_row_pane_g2

0x153b,	// (0x0001dbba) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0002c523) list_notif_wgt_row_pane_g

0x1548,	// (0x0001dbc7) list_notif_wgt_row_pane_t1

0x155e,	// (0x0001dbdd) list_notif_wgt_row_pane_t2

0x1570,	// (0x0001dbef) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0002c52a) list_notif_wgt_row_pane_t

0xedc4,	// (0x0002b443) list_recal_day_event_pane_g1

0x1582,	// (0x0001dc01) list_recal_day_event_pane_t1

0xb494,	// (0x00027b13) bg_button_pane_cp045

0xacae,	// (0x0002732d) cntbar_detail_btn_pane_t1

0xdc89,	// (0x0002a308) main_callh_pane_ParamLimits

0xdc89,	// (0x0002a308) main_callh_pane

0xb494,	// (0x00027b13) main_coverflow0_pane

0xb494,	// (0x00027b13) main_wgtman_pane

0x9bfb,	// (0x0002627a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9bfb,	// (0x0002627a) main_fs_bigclock_unlock_btn_pane

0xa50a,	// (0x00026b89) bg_button_pane_cp16

0xa51a,	// (0x00026b99) cell_tport_appsw_pane_g3

0xacbc,	// (0x0002733b) cf0_flow_pane_ParamLimits

0xacbc,	// (0x0002733b) cf0_flow_pane

0x1591,	// (0x0001dc10) listscroll_cf0_pane

0x159c,	// (0x0001dc1b) main_cf0_pane_g1

0xaccb,	// (0x0002734a) main_cf0_pane_t1_ParamLimits

0xaccb,	// (0x0002734a) main_cf0_pane_t1

0xacdf,	// (0x0002735e) main_cf0_pane_t2_ParamLimits

0xacdf,	// (0x0002735e) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0002c536) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0002c536) main_cf0_pane_t

0x15ae,	// (0x0001dc2d) scroll_pane_cp11

0xacf3,	// (0x00027372) cf0_flow_pane_g1

0xacfb,	// (0x0002737a) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0002c53b) cf0_flow_pane_g

0xad03,	// (0x00027382) cf0_flow_pane_t1

0xb494,	// (0x00027b13) main_call6_pane

0xb494,	// (0x00027b13) main_calllock_pane

0x402b,	// (0x000206aa) call6_btn_grp_pane_ParamLimits

0x402b,	// (0x000206aa) call6_btn_grp_pane

0x403a,	// (0x000206b9) call6_pane_g1_ParamLimits

0x403a,	// (0x000206b9) call6_pane_g1

0x404a,	// (0x000206c9) popup_call6_1st_window_ParamLimits

0x404a,	// (0x000206c9) popup_call6_1st_window

0x4058,	// (0x000206d7) popup_call6_2nd_window_ParamLimits

0x4058,	// (0x000206d7) popup_call6_2nd_window

0x4066,	// (0x000206e5) cell_call6_btn_pane_ParamLimits

0x4066,	// (0x000206e5) cell_call6_btn_pane

0xbda4,	// (0x00028423) bg_popup_call2_in_pane_cp03

0x15b9,	// (0x0001dc38) popup_call6_1st_window_g1

0x15c1,	// (0x0001dc40) popup_call6_1st_window_g2

0x15c9,	// (0x0001dc48) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0002c540) popup_call6_1st_window_g

0x15d1,	// (0x0001dc50) popup_call6_1st_window_t1

0x15e0,	// (0x0001dc5f) popup_call6_1st_window_t2

0x15ee,	// (0x0001dc6d) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0002c547) popup_call6_1st_window_t

0xbda4,	// (0x00028423) bg_popup_call2_in_pane_cp04

0x15b9,	// (0x0001dc38) popup_call6_2nd_window_g1

0x15c1,	// (0x0001dc40) popup_call6_2nd_window_g2

0x15c9,	// (0x0001dc48) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0002c540) popup_call6_2nd_window_g

0x15d1,	// (0x0001dc50) popup_call6_2nd_window_t1

0x295d,	// (0x0001efdc) bg_button_pane_cp15

0x4075,	// (0x000206f4) cell_call6_btn_pane_g1

0x407e,	// (0x000206fd) cell_call6_btn_pane_t1

0xad11,	// (0x00027390) listscroll_wgtman_pane_ParamLimits

0xad11,	// (0x00027390) listscroll_wgtman_pane

0xad2d,	// (0x000273ac) wgtman_btn_pane_ParamLimits

0xad2d,	// (0x000273ac) wgtman_btn_pane

0xc5bd,	// (0x00028c3c) aid_scroll_copy1

0x1614,	// (0x0001dc93) list_wgtman_pane

0xad62,	// (0x000273e1) wgtman_btn_pane_g1_ParamLimits

0xad62,	// (0x000273e1) wgtman_btn_pane_g1

0xad8a,	// (0x00027409) wgtman_btn_pane_t1_ParamLimits

0xad8a,	// (0x00027409) wgtman_btn_pane_t1

0x161e,	// (0x0001dc9d) wgtman_btn_pane_t2_ParamLimits

0x161e,	// (0x0001dc9d) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0002c54e) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0002c54e) wgtman_btn_pane_t

0xadc1,	// (0x00027440) listrow_wgtman_pane_ParamLimits

0xadc1,	// (0x00027440) listrow_wgtman_pane

0xaddc,	// (0x0002745b) listrow_wgtman_pane_g1

0xade9,	// (0x00027468) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0002c553) listrow_wgtman_pane_g

0xae07,	// (0x00027486) listrow_wgtman_pane_t1

0xae1f,	// (0x0002749e) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0002c558) listrow_wgtman_pane_t

0xae45,	// (0x000274c4) wait_bar_pane_cp09

0x1635,	// (0x0001dcb4) main_calllock_btn_pane

0x163f,	// (0x0001dcbe) main_calllock_pane_g1

0xb494,	// (0x00027b13) bg_button_pane_cp17

0x15fc,	// (0x0001dc7b) main_calllock_btn_pane_g1

0x164b,	// (0x0001dcca) main_calllock_btn_pane_t1

0xb494,	// (0x00027b13) main_dialer3_pane

0xb494,	// (0x00027b13) main_fmrd2_pane

0xe09a,	// (0x0002a719) main_fs_bigclock_unlock_btn_pane_g1

0xae5f,	// (0x000274de) main_fs_bigclock_unlock_btn_pane_t1

0xae6d,	// (0x000274ec) area_fmrd2_info_pane_ParamLimits

0xae6d,	// (0x000274ec) area_fmrd2_info_pane

0xae7b,	// (0x000274fa) area_fmrd2_visual_pane_ParamLimits

0xae7b,	// (0x000274fa) area_fmrd2_visual_pane

0xae89,	// (0x00027508) fmrd2_indi_pane_ParamLimits

0xae89,	// (0x00027508) fmrd2_indi_pane

0xae96,	// (0x00027515) area_fmrd2_visual_pane_g1

0xae9e,	// (0x0002751d) area_fmrd2_visual_pane_t1

0xaeae,	// (0x0002752d) area_fmrd2_visual_pane_t2

0xaebe,	// (0x0002753d) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0002c562) area_fmrd2_visual_pane_t

0xaece,	// (0x0002754d) area_fmrd2_info_pane_g1

0xaed6,	// (0x00027555) area_fmrd2_info_pane_t1

0xaee6,	// (0x00027565) area_fmrd2_info_pane_t2

0xaef6,	// (0x00027575) area_fmrd2_info_pane_t3

0xaf06,	// (0x00027585) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0002c569) area_fmrd2_info_pane_t

0xaf14,	// (0x00027593) fmrd2_indi_pane_t1

0xaf24,	// (0x000275a3) fmrd2_indi_pane_t2

0xaf34,	// (0x000275b3) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0002c572) fmrd2_indi_pane_t

0x08d2,	// (0x0001cf51) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x08d2,	// (0x0001cf51) list_single_fs_bigclock_indicator_pane_g5

0x0983,	// (0x0001d002) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x0983,	// (0x0001d002) list_single_fs_bigclock_indicator_pane_t5

0xa6b5,	// (0x00026d34) aid_cell_bcale_month_pane_ParamLimits

0xa6b5,	// (0x00026d34) aid_cell_bcale_month_pane

0xa6d3,	// (0x00026d52) bcale_month_pane_ParamLimits

0xa6d3,	// (0x00026d52) bcale_month_pane

0xa6f1,	// (0x00026d70) bcale_preview_pane_ParamLimits

0xa6f1,	// (0x00026d70) bcale_preview_pane

0x1419,	// (0x0001da98) list_single_fs_bigclock_pane_t1_ParamLimits

0x1438,	// (0x0001dab7) list_single_fs_bigclock_pane_t2_ParamLimits

0x1438,	// (0x0001dab7) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0002c4f4) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0002c4f4) list_single_fs_bigclock_pane_t

0xae57,	// (0x000274d6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0002c55d) main_fs_bigclock_unlock_btn_pane_g

0xaf42,	// (0x000275c1) aid_dia3_key_size_ParamLimits

0xaf42,	// (0x000275c1) aid_dia3_key_size

0xaf4e,	// (0x000275cd) aid_dia3_listrow_size_ParamLimits

0xaf4e,	// (0x000275cd) aid_dia3_listrow_size

0xaf5e,	// (0x000275dd) dia3_keypad_fun_pane_ParamLimits

0xaf5e,	// (0x000275dd) dia3_keypad_fun_pane

0xaf70,	// (0x000275ef) dia3_keypad_num_pane_ParamLimits

0xaf70,	// (0x000275ef) dia3_keypad_num_pane

0xaf82,	// (0x00027601) dia3_listscroll_pane_ParamLimits

0xaf82,	// (0x00027601) dia3_listscroll_pane

0xaf90,	// (0x0002760f) dia3_numentry_pane_ParamLimits

0xaf90,	// (0x0002760f) dia3_numentry_pane

0x165a,	// (0x0001dcd9) dia3_list_pane

0x1665,	// (0x0001dce4) scroll_pane_cp12

0xb494,	// (0x00027b13) bg_dia3_numentry_pane

0xaf9e,	// (0x0002761d) dia3_numentry_pane_t1

0xafad,	// (0x0002762c) cell_dia3_key_num_pane

0xafb5,	// (0x00027634) cell_dia3_key0_fun_pane_ParamLimits

0xafb5,	// (0x00027634) cell_dia3_key0_fun_pane

0xafc2,	// (0x00027641) cell_dia3_key1_fun_pane_ParamLimits

0xafc2,	// (0x00027641) cell_dia3_key1_fun_pane

0xafcf,	// (0x0002764e) dia3_listrow_pane

0x0625,	// (0x0001cca4) bg_dia3_numentry_pane_g1

0xb494,	// (0x00027b13) bg_button_pane_cp21

0x1670,	// (0x0001dcef) cell_dia3_key_num_pane_t1

0x167e,	// (0x0001dcfd) cell_dia3_key_num_pane_t2

0x168d,	// (0x0001dd0c) cell_dia3_key_num_pane_t3

0x169c,	// (0x0001dd1b) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0002c579) cell_dia3_key_num_pane_t

0xb494,	// (0x00027b13) bg_button_pane_cp19

0xafdc,	// (0x0002765b) cell_dia3_key0_fun_pane_g1

0xb494,	// (0x00027b13) bg_button_pane_cp20

0xafe4,	// (0x00027663) cell_dia3_key1_fun_pane_g1

0xafec,	// (0x0002766b) area_left_week_number_pane

0xafff,	// (0x0002767e) area_top_day_name_pane

0xb00d,	// (0x0002768c) frame_month_view_pane

0x16ab,	// (0x0001dd2a) grid_month_view_pane

0xb022,	// (0x000276a1) cell_top_day_name_pane_ParamLimits

0xb022,	// (0x000276a1) cell_top_day_name_pane

0xb03c,	// (0x000276bb) cell_area_left_week_number_pane_ParamLimits

0xb03c,	// (0x000276bb) cell_area_left_week_number_pane

0xb05f,	// (0x000276de) cell_month_view_pane_ParamLimits

0xb05f,	// (0x000276de) cell_month_view_pane

0x16b9,	// (0x0001dd38) frm_month_g1

0xb08b,	// (0x0002770a) frm_month_g2

0xb09c,	// (0x0002771b) frm_month_g3

0xb0ad,	// (0x0002772c) frm_month_g4

0xb0be,	// (0x0002773d) frm_month_g5

0xb0d1,	// (0x00027750) frm_month_g6

0xb0e4,	// (0x00027763) frm_month_g7

0x16c6,	// (0x0001dd45) frm_month_g8

0xb0f7,	// (0x00027776) frm_month_g9

0xb104,	// (0x00027783) frm_month_g10

0xb111,	// (0x00027790) frm_month_g11

0xb11e,	// (0x0002779d) frm_month_g12

0xb12b,	// (0x000277aa) frm_month_g13

0xb138,	// (0x000277b7) frm_month_g14

0xb147,	// (0x000277c6) frm_month_g15

0xb156,	// (0x000277d5) frm_month_g16

0x000f,

0xff03,	// (0x0002c582) frm_month_g

0x16d3,	// (0x0001dd52) cell_top_day_name_pane_t1

0xb165,	// (0x000277e4) cell_area_left_week_number_pane_g1

0xb174,	// (0x000277f3) cell_area_left_week_number_pane_t1

0xe2fd,	// (0x0002a97c) cell_month_view_pane_g1

0xb18a,	// (0x00027809) cell_month_view_pane_t1

0xb494,	// (0x00027b13) main_fps_pane

0x0ba9,	// (0x0001d228) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x0ba9,	// (0x0001d228) cmail_ddmenu_btn02_pane_cp1

0x0bc5,	// (0x0001d244) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x0bc5,	// (0x0001d244) cmail_ddmenu_btn02_pane_cp2

0xa9ab,	// (0x0002702a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa9ab,	// (0x0002702a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0002c4a7) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0002c4a7) cmail_ddmenu_btn02_pane_g

0xa9ca,	// (0x00027049) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa9ca,	// (0x00027049) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0002c4ac) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0002c4ac) cmail_ddmenu_btn02_pane_t

0xb1a0,	// (0x0002781f) fps_text_pane_ParamLimits

0xb1a0,	// (0x0002781f) fps_text_pane

0xb1ad,	// (0x0002782c) main_fps_pane_g1_ParamLimits

0xb1ad,	// (0x0002782c) main_fps_pane_g1

0xb1bb,	// (0x0002783a) wait_bar_pane_cp010_ParamLimits

0xb1bb,	// (0x0002783a) wait_bar_pane_cp010

0xb1c7,	// (0x00027846) fps_text_pane_t1_ParamLimits

0xb1c7,	// (0x00027846) fps_text_pane_t1

0x8314,	// (0x00024993) cam4_image_uncrop_pane_g1

0x831d,	// (0x0002499c) cam4_image_uncrop_pane_g2

0x8326,	// (0x000249a5) cam4_image_uncrop_pane_g3

0x832f,	// (0x000249ae) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0002bf6d) cam4_image_uncrop_pane_g

0xafcf,	// (0x0002764e) dia3_listrow_pane_ParamLimits

0xb494,	// (0x00027b13) main_phob2_pane

0xa4ec,	// (0x00026b6b) cell_tport_appsw_pane_cp02_ParamLimits

0xa4ec,	// (0x00026b6b) cell_tport_appsw_pane_cp02

0xa4fb,	// (0x00026b7a) cell_tport_appsw_pane_cp03_ParamLimits

0xa4fb,	// (0x00026b7a) cell_tport_appsw_pane_cp03

0xb494,	// (0x00027b13) phob2_contact_card_pane

0xb494,	// (0x00027b13) phob2_listscroll_pane

0x16e6,	// (0x0001dd65) phob2_list_pane

0x16ee,	// (0x0001dd6d) scroll_pane_cp034

0xb1e0,	// (0x0002785f) phob2_cc_data_pane_ParamLimits

0xb1e0,	// (0x0002785f) phob2_cc_data_pane

0xb1fa,	// (0x00027879) phob2_cc_listscroll_pane_ParamLimits

0xb1fa,	// (0x00027879) phob2_cc_listscroll_pane

0xadc1,	// (0x00027440) list_double_large_graphic_phob2_pane_ParamLimits

0xadc1,	// (0x00027440) list_double_large_graphic_phob2_pane

0xb214,	// (0x00027893) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb214,	// (0x00027893) list_double_large_graphic_phob2_pane_g1

0xb22a,	// (0x000278a9) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xb22a,	// (0x000278a9) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0002c5a3) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0002c5a3) list_double_large_graphic_phob2_pane_g

0xb236,	// (0x000278b5) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xb236,	// (0x000278b5) list_double_large_graphic_phob2_pane_t1

0xb24b,	// (0x000278ca) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xb24b,	// (0x000278ca) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0002c5a8) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0002c5a8) list_double_large_graphic_phob2_pane_t

0xb494,	// (0x00027b13) list_highlight_pane_cp024

0xb25d,	// (0x000278dc) phob2_cc_button_pane

0xb265,	// (0x000278e4) phob2_cc_data_pane_g1_ParamLimits

0xb265,	// (0x000278e4) phob2_cc_data_pane_g1

0xb271,	// (0x000278f0) phob2_cc_data_pane_g2_ParamLimits

0xb271,	// (0x000278f0) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0002c5ad) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0002c5ad) phob2_cc_data_pane_g

0xb27d,	// (0x000278fc) phob2_cc_data_pane_t1_ParamLimits

0xb27d,	// (0x000278fc) phob2_cc_data_pane_t1

0xb28f,	// (0x0002790e) phob2_cc_data_pane_t2_ParamLimits

0xb28f,	// (0x0002790e) phob2_cc_data_pane_t2

0xb2a1,	// (0x00027920) phob2_cc_data_pane_t3_ParamLimits

0xb2a1,	// (0x00027920) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0002c5b2) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0002c5b2) phob2_cc_data_pane_t

0x16f6,	// (0x0001dd75) phob2_cc_list_pane_ParamLimits

0x16f6,	// (0x0001dd75) phob2_cc_list_pane

0xee82,	// (0x0002b501) scroll_pane_cp035_ParamLimits

0xee82,	// (0x0002b501) scroll_pane_cp035

0xbba5,	// (0x00028224) bg_button_pane_cp033

0x1702,	// (0x0001dd81) phob2_cc_button_pane_g1

0x170e,	// (0x0001dd8d) phob2_cc_button_pane_t1

0x1723,	// (0x0001dda2) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0002c5b9) phob2_cc_button_pane_t

0xb2b3,	// (0x00027932) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb2b3,	// (0x00027932) list_double_large_graphic_phob2_cc_pane

0xb2da,	// (0x00027959) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb2da,	// (0x00027959) list_double_large_graphic_phob2_cc_pane_g1

0xb2eb,	// (0x0002796a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xb2eb,	// (0x0002796a) list_double_large_graphic_phob2_cc_pane_g2

0xb2fa,	// (0x00027979) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xb2fa,	// (0x00027979) list_double_large_graphic_phob2_cc_pane_g3

0xb309,	// (0x00027988) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xb309,	// (0x00027988) list_double_large_graphic_phob2_cc_pane_g4

0xb31a,	// (0x00027999) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xb31a,	// (0x00027999) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0002c5be) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0002c5be) list_double_large_graphic_phob2_cc_pane_g

0xb329,	// (0x000279a8) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xb329,	// (0x000279a8) list_double_large_graphic_phob2_cc_pane_t1

0xb352,	// (0x000279d1) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xb352,	// (0x000279d1) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0002c5c9) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0002c5c9) list_double_large_graphic_phob2_cc_pane_t

0x1735,	// (0x0001ddb4) list_highlight_pane_cp025_ParamLimits

0x1735,	// (0x0001ddb4) list_highlight_pane_cp025

0xbba5,	// (0x00028224) bg_button_pane_cp033_ParamLimits

0x1702,	// (0x0001dd81) phob2_cc_button_pane_g1_ParamLimits

0x170e,	// (0x0001dd8d) phob2_cc_button_pane_t1_ParamLimits

0x1723,	// (0x0001dda2) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0002c5b9) phob2_cc_button_pane_t_ParamLimits

0x4100,	// (0x0002077f) popup_wgtman_window

0xec49,	// (0x0002b2c8) scroll_pane_cp038

0xad4a,	// (0x000273c9) wgtman_btn_pane_cp_01_ParamLimits

0xad4a,	// (0x000273c9) wgtman_btn_pane_cp_01

0x1743,	// (0x0001ddc2) wgtman_content_pane

0x174c,	// (0x0001ddcb) wgtman_heading_pane

0xb494,	// (0x00027b13) bg_heading_pane_cp02

0x1755,	// (0x0001ddd4) wgtman_heading_pane_g1

0x175d,	// (0x0001dddc) wgtman_heading_pane_t1

0x176b,	// (0x0001ddea) scroll_pane_cp036

0x1773,	// (0x0001ddf2) wgtman_list_pane

0x177b,	// (0x0001ddfa) wgtman_list_pane_t1_ParamLimits

0x177b,	// (0x0001ddfa) wgtman_list_pane_t1

0x385e,	// (0x0001fedd) cam4_grid_pane

0x8af0,	// (0x0002516f) bg_button_pane_cp015_ParamLimits

0x8b02,	// (0x00025181) bg_button_pane_cp016_ParamLimits

0x8b15,	// (0x00025194) bg_button_pane_cp017_ParamLimits

0x8b6b,	// (0x000251ea) popup_vitu2_query_window_g3_ParamLimits

0x8b6b,	// (0x000251ea) popup_vitu2_query_window_g3

0x8c26,	// (0x000252a5) popup_vitu2_query_window_t6_ParamLimits

0x8c26,	// (0x000252a5) popup_vitu2_query_window_t6

0x8c51,	// (0x000252d0) popup_vitu2_query_window_t7_ParamLimits

0x8c51,	// (0x000252d0) popup_vitu2_query_window_t7

0x1200,	// (0x0001d87f) cam4_grid_pane_g1

0x1209,	// (0x0001d888) cam4_grid_pane_g2

0x1795,	// (0x0001de14) cam4_grid_pane_g3

0x179e,	// (0x0001de1d) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0002c5ce) cam4_grid_pane_g

0x4ca2,	// (0x00021321) aid_placing_vt_slider_lsc_ParamLimits

0x4fee,	// (0x0002166d) vidtel_button_pane_ParamLimits

0x4fee,	// (0x0002166d) vidtel_button_pane

0xb494,	// (0x00027b13) bg_button_pane_cp034

0x17a9,	// (0x0001de28) vidtel_button_pane_g1

0x17b1,	// (0x0001de30) vidtel_button_pane_t1

0xed87,	// (0x0002b406) aid_size_vtel_slider_touch

0xee82,	// (0x0002b501) scroll_pane_cp039

0x9938,	// (0x00025fb7) ncim_query_button_pane_cp01_ParamLimits

0x9957,	// (0x00025fd6) ncimui_query_pane_g1_ParamLimits

0xbba5,	// (0x00028224) input_focus_pane_cp012_ParamLimits

0x0663,	// (0x0001cce2) ncim_query_entry_pane_t1_ParamLimits

0xee82,	// (0x0002b501) scroll_pane_cp039_ParamLimits

0xc6a1,	// (0x00028d20) navi_pane_bcale_mc_g1

0xc6a9,	// (0x00028d28) navi_pane_bcale_mc_t1

0x0c0e,	// (0x0001d28d) main_sp_fs_email_pane_g1

0x0c1a,	// (0x0001d299) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0002c364) main_sp_fs_email_pane_g

0x1092,	// (0x0001d711) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1092,	// (0x0001d711) list_single_cale_mrui_row_pane_g3

0xa9ea,	// (0x00027069) list_single_recal_day_pane_g5_event_pane

0x1283,	// (0x0001d902) list_single_recal_day_pane_g7

0x17c7,	// (0x0001de46) list_recal_day_event_pane_cp01

0x17d0,	// (0x0001de4f) list_recal_vselct_arw_lo_pane_cp01

0x17d8,	// (0x0001de57) list_recal_vselct_arw_up_pane_cp01

0x17e0,	// (0x0001de5f) list_recal_vselct_pane_cp01

0xedc4,	// (0x0002b443) list_recal_day_event_pane_cp01_g1

0x17ea,	// (0x0001de69) list_recal_day_event_pane_cp01_t1

0x128b,	// (0x0001d90a) list_single_recal_day_pane_t1_ParamLimits

0x129d,	// (0x0001d91c) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0002c4bc) list_single_recal_day_pane_t_ParamLimits

0xbb0c,	// (0x0002818b) bg_notes_pane_ParamLimits

0xbbbd,	// (0x0002823c) list_notes_pane_ParamLimits

0x4387,	// (0x00020a06) scroll_pane_cp06_ParamLimits

0xbbdf,	// (0x0002825e) main_notes_pane_ParamLimits

0xb494,	// (0x00027b13) main_welc_pane

0xb37b,	// (0x000279fa) main_welc_body_pane_ParamLimits

0xb37b,	// (0x000279fa) main_welc_body_pane

0xb395,	// (0x00027a14) main_welc_opti_pane_ParamLimits

0xb395,	// (0x00027a14) main_welc_opti_pane

0xb3c8,	// (0x00027a47) main_welc_pane_t1_ParamLimits

0xb3c8,	// (0x00027a47) main_welc_pane_t1

0xb3e2,	// (0x00027a61) main_welc_body_row_pane_ParamLimits

0xb3e2,	// (0x00027a61) main_welc_body_row_pane

0xeb97,	// (0x0002b216) main_welc_opti_row_pane_ParamLimits

0xeb97,	// (0x0002b216) main_welc_opti_row_pane

0x17f8,	// (0x0001de77) main_welc_opti_row_pane_g1

0xb407,	// (0x00027a86) main_welc_opti_row_pane_t1

0x1800,	// (0x0001de7f) main_welc_body_row_pane_t1

0x14f9,	// (0x0001db78) popup_notif_wgt_heading_pane

0x1513,	// (0x0001db92) aid_size_list_notif_wgt_del_ParamLimits

0x1520,	// (0x0001db9f) list_notif_wgt_row_pane_g1_ParamLimits

0x152c,	// (0x0001dbab) list_notif_wgt_row_pane_g2_ParamLimits

0x153b,	// (0x0001dbba) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0002c523) list_notif_wgt_row_pane_g_ParamLimits

0x1548,	// (0x0001dbc7) list_notif_wgt_row_pane_t1_ParamLimits

0x155e,	// (0x0001dbdd) list_notif_wgt_row_pane_t2_ParamLimits

0x1570,	// (0x0001dbef) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0002c52a) list_notif_wgt_row_pane_t_ParamLimits

0xaddc,	// (0x0002745b) listrow_wgtman_pane_g1_ParamLimits

0xade9,	// (0x00027468) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0002c553) listrow_wgtman_pane_g_ParamLimits

0xae07,	// (0x00027486) listrow_wgtman_pane_t1_ParamLimits

0xae1f,	// (0x0002749e) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0002c558) listrow_wgtman_pane_t_ParamLimits

0xae45,	// (0x000274c4) wait_bar_pane_cp09_ParamLimits

0xb494,	// (0x00027b13) bg_popup_heading_pane_cp02

0x180f,	// (0x0001de8e) popup_notif_wgt_heading_pane_g1

0x1817,	// (0x0001de96) popup_notif_wgt_heading_pane_t1

0xb494,	// (0x00027b13) main_vids_pane

0xb494,	// (0x00027b13) vids_listscroll_pane

0xb416,	// (0x00027a95) scroll_pane_cp040

0xb494,	// (0x00027b13) vids_list_pane

0xb421,	// (0x00027aa0) vids_list_double_pane_ParamLimits

0xb421,	// (0x00027aa0) vids_list_double_pane

0xb43b,	// (0x00027aba) vids_list_double_pane_g1

0xb444,	// (0x00027ac3) vids_list_double_pane_t1

0xb454,	// (0x00027ad3) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0002c5dc) vids_list_double_pane_t

0x2db5,	// (0x0001f434) main_ncimui_pane_ParamLimits

0x978f,	// (0x00025e0e) main_ncimui_pane_g1_ParamLimits

0x979b,	// (0x00025e1a) main_ncimui_pane_g2_ParamLimits

0x979b,	// (0x00025e1a) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0002c269) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0002c269) main_ncimui_pane_g

0xb3ae,	// (0x00027a2d) main_welc_pane_g1_ParamLimits

0xb3ae,	// (0x00027a2d) main_welc_pane_g1

0xb3ba,	// (0x00027a39) main_welc_pane_g2_ParamLimits

0xb3ba,	// (0x00027a39) main_welc_pane_g2

0x0001,

0xff58,	// (0x0002c5d7) main_welc_pane_g_ParamLimits

0xff58,	// (0x0002c5d7) main_welc_pane_g

0xbb0c,	// (0x0002818b) listscroll_mce_pane_ParamLimits

0xc7f6,	// (0x00028e75) wait_bar_pane_cp10

0xdc7d,	// (0x0002a2fc) main_cale_day_pane_ParamLimits

0xdc7d,	// (0x0002a2fc) main_cale_week_pane_ParamLimits

0xbb0c,	// (0x0002818b) main_messa_pane_ParamLimits

0x7d7c,	// (0x000243fb) main_clock2_btn_pane_ParamLimits

0x7d7c,	// (0x000243fb) main_clock2_btn_pane

0xe4b1,	// (0x0002ab30) main_clock2_btn_pane_cp01_ParamLimits

0xe4b1,	// (0x0002ab30) main_clock2_btn_pane_cp01

0x101e,	// (0x0001d69d) list_cale_mrui_pane_ParamLimits

0x15a6,	// (0x0001dc25) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0002c531) main_cf0_pane_g

0xafec,	// (0x0002766b) area_left_week_number_pane_ParamLimits

0xafff,	// (0x0002767e) area_top_day_name_pane_ParamLimits

0xb00d,	// (0x0002768c) frame_month_view_pane_ParamLimits

0x16ab,	// (0x0001dd2a) grid_month_view_pane_ParamLimits

0x16b9,	// (0x0001dd38) frm_month_g1_ParamLimits

0xb08b,	// (0x0002770a) frm_month_g2_ParamLimits

0xb09c,	// (0x0002771b) frm_month_g3_ParamLimits

0xb0ad,	// (0x0002772c) frm_month_g4_ParamLimits

0xb0be,	// (0x0002773d) frm_month_g5_ParamLimits

0xb0d1,	// (0x00027750) frm_month_g6_ParamLimits

0xb0e4,	// (0x00027763) frm_month_g7_ParamLimits

0x16c6,	// (0x0001dd45) frm_month_g8_ParamLimits

0xb0f7,	// (0x00027776) frm_month_g9_ParamLimits

0xb104,	// (0x00027783) frm_month_g10_ParamLimits

0xb111,	// (0x00027790) frm_month_g11_ParamLimits

0xb11e,	// (0x0002779d) frm_month_g12_ParamLimits

0xb12b,	// (0x000277aa) frm_month_g13_ParamLimits

0xb138,	// (0x000277b7) frm_month_g14_ParamLimits

0xb147,	// (0x000277c6) frm_month_g15_ParamLimits

0xb156,	// (0x000277d5) frm_month_g16_ParamLimits

0xff03,	// (0x0002c582) frm_month_g_ParamLimits

0x16d3,	// (0x0001dd52) cell_top_day_name_pane_t1_ParamLimits

0xb165,	// (0x000277e4) cell_area_left_week_number_pane_g1_ParamLimits

0xb174,	// (0x000277f3) cell_area_left_week_number_pane_t1_ParamLimits

0xe2fd,	// (0x0002a97c) cell_month_view_pane_g1_ParamLimits

0xb18a,	// (0x00027809) cell_month_view_pane_t1_ParamLimits

0xbb04,	// (0x00028183) main_clock2_btn_pane_g1

0x1825,	// (0x0001dea4) main_clock2_btn_pane_t1

0xbba5,	// (0x00028224) listscroll_cmail_pane_ParamLimits

0x0c0e,	// (0x0001d28d) main_sp_fs_email_pane_g1_ParamLimits

0x0c1a,	// (0x0001d299) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0002c364) main_sp_fs_email_pane_g_ParamLimits

0x11e1,	// (0x0001d860) list_recal_day_pane_ParamLimits

0x11f2,	// (0x0001d871) mian_recal_day_pane_t1

0xa1b8,	// (0x00026837) list_single_dyc_row_text_pane_t4_ParamLimits

0xa1b8,	// (0x00026837) list_single_dyc_row_text_pane_t4

0xa1ef,	// (0x0002686e) list_single_dyc_row_text_pane_t5_ParamLimits

0xa1ef,	// (0x0002686e) list_single_dyc_row_text_pane_t5

0x0cc0,	// (0x0001d33f) list_single_dyc_row_text_pane_t6_ParamLimits

0x0cc0,	// (0x0001d33f) list_single_dyc_row_text_pane_t6

0x5de9,	// (0x00022468) aid_mgn_list_cale_time_pane

0x2db5,	// (0x0001f434) main_gallery2_pane_ParamLimits

0xe4c7,	// (0x0002ab46) main_clock2_pane_cp01_t1

0xe4d7,	// (0x0002ab56) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0002be43) main_clock2_pane_cp01_t

0x46a8,	// (0x00020d27) cale_week_scroll_pane_g16_ParamLimits

0x46a8,	// (0x00020d27) cale_week_scroll_pane_g16

0xbda4,	// (0x00028423) vorec_slider_pane

0x17b1,	// (0x0001de30) vidtel_button_pane_t1_ParamLimits

0xaa45,	// (0x000270c4) main_fs_bigclock_clock_pane_g1_ParamLimits

0xaa45,	// (0x000270c4) main_fs_bigclock_clock_pane_g2_ParamLimits

0xaa52,	// (0x000270d1) main_fs_bigclock_clock_pane_g3_ParamLimits

0xaa52,	// (0x000270d1) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe60,	// (0x0002c4df) main_fs_bigclock_clock_pane_g_ParamLimits

0xaa5e,	// (0x000270dd) main_fs_bigclock_clock_pane_t1_ParamLimits

0xaa71,	// (0x000270f0) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe69,	// (0x0002c4e8) main_fs_bigclock_clock_pane_t_ParamLimits

0x7619,	// (0x00023c98) main_mup3_lyrics_pane_ParamLimits

0x7619,	// (0x00023c98) main_mup3_lyrics_pane

0xb462,	// (0x00027ae1) main_mup3_lyrics_pane_t1_ParamLimits

0xb462,	// (0x00027ae1) main_mup3_lyrics_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
