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

// This customisation implements the interface defined in AknLayoutScalable_UiAccel.cdl

#include "aknlayoutscalable_abrw_hnp4_c_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_UiAccel { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_hnp4_c_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_hnp4_c_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_UiAccel::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_UiAccel::KByteCodedData_AknLayoutScalable_Elaf_hnp4_c_nhd4_prt_tch + 0x00000000 };

TAknWindowComponentLayout WindowLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknLayoutScalableParameterLimits ParameterLimitsV(TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsV(&KImplData, aVariety); }
TAknTextComponentLayout TextLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknWindowComponentLayout WindowTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknLayoutScalableTableLimits Limits() { return AknLayoutScalableDecode::TableLimits(KDataLookup); }
TAknLayoutScalableParameterLimits ParameterLimitsTableLV(TInt aLineIndex, TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsTableLV(&KImplData, aLineIndex, aVariety); }
TAknTextComponentLayout TextTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknLayoutScalableComponentType GetComponentTypeById(TInt aComponentId) { return AknLayoutScalableDecode::GetComponentTypeById(&KImplData, aComponentId); }
TAknLayoutScalableParameterLimits GetParamLimitsById(TInt aComponentId, TInt aVariety) { return AknLayoutScalableDecode::GetParamLimitsById(&KImplData, aComponentId, aVariety); }
TAknWindowComponentLayout GetWindowComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetWindowComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }
TAknTextComponentLayout GetTextComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetTextComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }

const TUint16 KDataLookup[AknLayoutScalable_UiAccel::E_TApiId_TableSize] =
	{
0x0000,

0x0000,

0x0000,

0x0000,

0x0000,	// (0x00000000) Screen

0x000c,	// (0x0000000c) application_window

0x0016,	// (0x00000016) area_bottom_pane_ParamLimits

0x0016,	// (0x00000016) area_bottom_pane

0x0046,	// (0x00000046) area_top_pane_ParamLimits

0x0046,	// (0x00000046) area_top_pane

0x005c,	// (0x0000005c) main_pane_ParamLimits

0x005c,	// (0x0000005c) main_pane

0x000c,	// (0x0000000c) main_hc_listscroll_pane

0x00f8,	// (0x000000f8) hc_list_pane

0x010b,	// (0x0000010b) hc_scroll_pane

0x016f,	// (0x0000016f) hc_list_double2_graphic_pane

0x016f,	// (0x0000016f) hc_list_double2_large_graphic_pane

0x016f,	// (0x0000016f) hc_list_double2_pane

0x0178,	// (0x00000178) hc_list_double_graphic_pane

0x0178,	// (0x00000178) hc_list_double_heading_pane

0x0178,	// (0x00000178) hc_list_double_large_graphic_pane

0x0178,	// (0x00000178) hc_list_double_pane

0x0181,	// (0x00000181) hc_list_single_graphic_pane

0x0181,	// (0x00000181) hc_list_single_heading_pane

0x016f,	// (0x0000016f) hc_list_single_large_graphic_pane

0x0181,	// (0x00000181) hc_list_single_pane

0x01dc,	// (0x000001dc) hc_list_single_pane_g1_ParamLimits

0x01dc,	// (0x000001dc) hc_list_single_pane_g1

0x01e8,	// (0x000001e8) hc_list_single_pane_g2_ParamLimits

0x01e8,	// (0x000001e8) hc_list_single_pane_g2

0x0001,

0x1295,	// (0x00001295) hc_list_single_pane_g_ParamLimits

0x1295,	// (0x00001295) hc_list_single_pane_g

0x01fc,	// (0x000001fc) hc_list_single_pane_t1_ParamLimits

0x01fc,	// (0x000001fc) hc_list_single_pane_t1

0x0213,	// (0x00000213) hc_list_single_graphic_pane_g1_ParamLimits

0x0213,	// (0x00000213) hc_list_single_graphic_pane_g1

0x021f,	// (0x0000021f) hc_list_single_graphic_pane_g2_ParamLimits

0x021f,	// (0x0000021f) hc_list_single_graphic_pane_g2

0x01e8,	// (0x000001e8) hc_list_single_graphic_pane_g3_ParamLimits

0x01e8,	// (0x000001e8) hc_list_single_graphic_pane_g3

0x0002,

0x129a,	// (0x0000129a) hc_list_single_graphic_pane_g_ParamLimits

0x129a,	// (0x0000129a) hc_list_single_graphic_pane_g

0x022e,	// (0x0000022e) hc_list_single_graphic_pane_t1_ParamLimits

0x022e,	// (0x0000022e) hc_list_single_graphic_pane_t1

0x01dc,	// (0x000001dc) hc_list_single_heading_pane_g1_ParamLimits

0x01dc,	// (0x000001dc) hc_list_single_heading_pane_g1

0x01e8,	// (0x000001e8) hc_list_single_heading_pane_g2_ParamLimits

0x01e8,	// (0x000001e8) hc_list_single_heading_pane_g2

0x0001,

0x1295,	// (0x00001295) hc_list_single_heading_pane_g_ParamLimits

0x1295,	// (0x00001295) hc_list_single_heading_pane_g

0x0244,	// (0x00000244) hc_list_single_heading_pane_t1_ParamLimits

0x0244,	// (0x00000244) hc_list_single_heading_pane_t1

0x0256,	// (0x00000256) hc_list_single_heading_pane_t2_ParamLimits

0x0256,	// (0x00000256) hc_list_single_heading_pane_t2

0x0001,

0x12a1,	// (0x000012a1) hc_list_single_heading_pane_t_ParamLimits

0x12a1,	// (0x000012a1) hc_list_single_heading_pane_t

0x026c,	// (0x0000026c) hc_list_single_large_graphic_pane_g1_ParamLimits

0x026c,	// (0x0000026c) hc_list_single_large_graphic_pane_g1

0x0278,	// (0x00000278) hc_list_single_large_graphic_pane_g2_ParamLimits

0x0278,	// (0x00000278) hc_list_single_large_graphic_pane_g2

0x0284,	// (0x00000284) hc_list_single_large_graphic_pane_g3_ParamLimits

0x0284,	// (0x00000284) hc_list_single_large_graphic_pane_g3

0x0002,

0x12a6,	// (0x000012a6) hc_list_single_large_graphic_pane_g_ParamLimits

0x12a6,	// (0x000012a6) hc_list_single_large_graphic_pane_g

0x0298,	// (0x00000298) hc_list_single_large_graphic_pane_t1_ParamLimits

0x0298,	// (0x00000298) hc_list_single_large_graphic_pane_t1

0x01dc,	// (0x000001dc) hc_list_double_pane_g1_ParamLimits

0x01dc,	// (0x000001dc) hc_list_double_pane_g1

0x01e8,	// (0x000001e8) hc_list_double_pane_g2_ParamLimits

0x01e8,	// (0x000001e8) hc_list_double_pane_g2

0x0001,

0x1295,	// (0x00001295) hc_list_double_pane_g_ParamLimits

0x1295,	// (0x00001295) hc_list_double_pane_g

0x02ae,	// (0x000002ae) hc_list_double_pane_t1_ParamLimits

0x02ae,	// (0x000002ae) hc_list_double_pane_t1

0x02c4,	// (0x000002c4) hc_list_double_pane_t2_ParamLimits

0x02c4,	// (0x000002c4) hc_list_double_pane_t2

0x0001,

0x12ad,	// (0x000012ad) hc_list_double_pane_t_ParamLimits

0x12ad,	// (0x000012ad) hc_list_double_pane_t

0x0213,	// (0x00000213) hc_list_double_graphic_pane_g1_ParamLimits

0x0213,	// (0x00000213) hc_list_double_graphic_pane_g1

0x01dc,	// (0x000001dc) hc_list_double_graphic_pane_g2_ParamLimits

0x01dc,	// (0x000001dc) hc_list_double_graphic_pane_g2

0x01e8,	// (0x000001e8) hc_list_double_graphic_pane_g3_ParamLimits

0x01e8,	// (0x000001e8) hc_list_double_graphic_pane_g3

0x0002,

0x12b2,	// (0x000012b2) hc_list_double_graphic_pane_g_ParamLimits

0x12b2,	// (0x000012b2) hc_list_double_graphic_pane_g

0x022e,	// (0x0000022e) hc_list_double_graphic_pane_t1_ParamLimits

0x022e,	// (0x0000022e) hc_list_double_graphic_pane_t1

0x02d6,	// (0x000002d6) hc_list_double_graphic_pane_t2_ParamLimits

0x02d6,	// (0x000002d6) hc_list_double_graphic_pane_t2

0x0001,

0x12b9,	// (0x000012b9) hc_list_double_graphic_pane_t_ParamLimits

0x12b9,	// (0x000012b9) hc_list_double_graphic_pane_t

0x02e8,	// (0x000002e8) hc_list_double_heading_pane_g1_ParamLimits

0x02e8,	// (0x000002e8) hc_list_double_heading_pane_g1

0x02f4,	// (0x000002f4) hc_list_double_heading_pane_g2_ParamLimits

0x02f4,	// (0x000002f4) hc_list_double_heading_pane_g2

0x0001,

0x12be,	// (0x000012be) hc_list_double_heading_pane_g_ParamLimits

0x12be,	// (0x000012be) hc_list_double_heading_pane_g

0x0308,	// (0x00000308) hc_list_double_heading_pane_t1_ParamLimits

0x0308,	// (0x00000308) hc_list_double_heading_pane_t1

0x031a,	// (0x0000031a) hc_list_double_heading_pane_t2_ParamLimits

0x031a,	// (0x0000031a) hc_list_double_heading_pane_t2

0x0001,

0x12c3,	// (0x000012c3) hc_list_double_heading_pane_t_ParamLimits

0x12c3,	// (0x000012c3) hc_list_double_heading_pane_t

0x0330,	// (0x00000330) hc_list_double_large_graphic_pane_g1_ParamLimits

0x0330,	// (0x00000330) hc_list_double_large_graphic_pane_g1

0x033c,	// (0x0000033c) hc_list_double_large_graphic_pane_g2_ParamLimits

0x033c,	// (0x0000033c) hc_list_double_large_graphic_pane_g2

0x0348,	// (0x00000348) hc_list_double_large_graphic_pane_g3_ParamLimits

0x0348,	// (0x00000348) hc_list_double_large_graphic_pane_g3

0x0002,

0x12c8,	// (0x000012c8) hc_list_double_large_graphic_pane_g_ParamLimits

0x12c8,	// (0x000012c8) hc_list_double_large_graphic_pane_g

0x035c,	// (0x0000035c) hc_list_double_large_graphic_pane_t1_ParamLimits

0x035c,	// (0x0000035c) hc_list_double_large_graphic_pane_t1

0x0372,	// (0x00000372) hc_list_double_large_graphic_pane_t2_ParamLimits

0x0372,	// (0x00000372) hc_list_double_large_graphic_pane_t2

0x0001,

0x12cf,	// (0x000012cf) hc_list_double_large_graphic_pane_t_ParamLimits

0x12cf,	// (0x000012cf) hc_list_double_large_graphic_pane_t

0x01dc,	// (0x000001dc) hc_list_double2_pane_g1_ParamLimits

0x01dc,	// (0x000001dc) hc_list_double2_pane_g1

0x01e8,	// (0x000001e8) hc_list_double2_pane_g2_ParamLimits

0x01e8,	// (0x000001e8) hc_list_double2_pane_g2

0x0001,

0x1295,	// (0x00001295) hc_list_double2_pane_g_ParamLimits

0x1295,	// (0x00001295) hc_list_double2_pane_g

0x02ae,	// (0x000002ae) hc_list_double2_pane_t1_ParamLimits

0x02ae,	// (0x000002ae) hc_list_double2_pane_t1

0x0384,	// (0x00000384) hc_list_double2_pane_t2_ParamLimits

0x0384,	// (0x00000384) hc_list_double2_pane_t2

0x0001,

0x12d4,	// (0x000012d4) hc_list_double2_pane_t_ParamLimits

0x12d4,	// (0x000012d4) hc_list_double2_pane_t

0x0213,	// (0x00000213) hc_list_double2_graphic_pane_g1_ParamLimits

0x0213,	// (0x00000213) hc_list_double2_graphic_pane_g1

0x01dc,	// (0x000001dc) hc_list_double2_graphic_pane_g2_ParamLimits

0x01dc,	// (0x000001dc) hc_list_double2_graphic_pane_g2

0x01e8,	// (0x000001e8) hc_list_double2_graphic_pane_g3_ParamLimits

0x01e8,	// (0x000001e8) hc_list_double2_graphic_pane_g3

0x0002,

0x12b2,	// (0x000012b2) hc_list_double2_graphic_pane_g_ParamLimits

0x12b2,	// (0x000012b2) hc_list_double2_graphic_pane_g

0x022e,	// (0x0000022e) hc_list_double2_graphic_pane_t1_ParamLimits

0x022e,	// (0x0000022e) hc_list_double2_graphic_pane_t1

0x0396,	// (0x00000396) hc_list_double2_graphic_pane_t2_ParamLimits

0x0396,	// (0x00000396) hc_list_double2_graphic_pane_t2

0x0001,

0x12d9,	// (0x000012d9) hc_list_double2_graphic_pane_t_ParamLimits

0x12d9,	// (0x000012d9) hc_list_double2_graphic_pane_t

0x026c,	// (0x0000026c) hc_list_double2_large_graphic_pane_g1_ParamLimits

0x026c,	// (0x0000026c) hc_list_double2_large_graphic_pane_g1

0x01dc,	// (0x000001dc) hc_list_double2_large_graphic_pane_g2_ParamLimits

0x01dc,	// (0x000001dc) hc_list_double2_large_graphic_pane_g2

0x01e8,	// (0x000001e8) hc_list_double2_large_graphic_pane_g3_ParamLimits

0x01e8,	// (0x000001e8) hc_list_double2_large_graphic_pane_g3

0x0002,

0x12de,	// (0x000012de) hc_list_double2_large_graphic_pane_g_ParamLimits

0x12de,	// (0x000012de) hc_list_double2_large_graphic_pane_g

0x03a8,	// (0x000003a8) hc_list_double2_large_graphic_pane_t1_ParamLimits

0x03a8,	// (0x000003a8) hc_list_double2_large_graphic_pane_t1

0x03be,	// (0x000003be) hc_list_double2_large_graphic_pane_t2_ParamLimits

0x03be,	// (0x000003be) hc_list_double2_large_graphic_pane_t2

0x0001,

0x12e5,	// (0x000012e5) hc_list_double2_large_graphic_pane_t_ParamLimits

0x12e5,	// (0x000012e5) hc_list_double2_large_graphic_pane_t

0x000c,	// (0x0000000c) main_hc_button_pane

0x00c1,	// (0x000000c1) aid_hc_size_touch_scroll_bar_ParamLimits

0x00c1,	// (0x000000c1) aid_hc_size_touch_scroll_bar

0x00e2,	// (0x000000e2) aid_hc_size_touch_scroll_bar_cp01_ParamLimits

0x00e2,	// (0x000000e2) aid_hc_size_touch_scroll_bar_cp01

0x0101,	// (0x00000101) hc_popup_scroll_hotspot_window

0x010b,	// (0x0000010b) hc_scroll_pane_ParamLimits

0x013b,	// (0x0000013b) hc_scroll_pane_cp01_ParamLimits

0x013b,	// (0x0000013b) hc_scroll_pane_cp01

0x0151,	// (0x00000151) main_hc_listscroll_pane_g1_ParamLimits

0x0151,	// (0x00000151) main_hc_listscroll_pane_g1

0x0163,	// (0x00000163) main_hc_listscroll_pane_g2_ParamLimits

0x0163,	// (0x00000163) main_hc_listscroll_pane_g2

0x0001,

0x1290,	// (0x00001290) main_hc_listscroll_pane_g_ParamLimits

0x1290,	// (0x00001290) main_hc_listscroll_pane_g

0x0178,	// (0x00000178) hc_list_double_graphic_heading_pane

0x018a,	// (0x0000018a) aid_hc_size_max_handle_ParamLimits

0x018a,	// (0x0000018a) aid_hc_size_max_handle

0x01a0,	// (0x000001a0) aid_hc_size_min_handle_ParamLimits

0x01a0,	// (0x000001a0) aid_hc_size_min_handle

0x00b3,	// (0x000000b3) hc_scroll_bg_pane_ParamLimits

0x00b3,	// (0x000000b3) hc_scroll_bg_pane

0x01b4,	// (0x000001b4) hc_scroll_handle_pane_ParamLimits

0x01b4,	// (0x000001b4) hc_scroll_handle_pane

0x01c8,	// (0x000001c8) hc_scroll_pane_g1_ParamLimits

0x01c8,	// (0x000001c8) hc_scroll_pane_g1

0x01c8,	// (0x000001c8) hc_scroll_bg_pane_g1_ParamLimits

0x01c8,	// (0x000001c8) hc_scroll_bg_pane_g1

0x03d0,	// (0x000003d0) hc_scroll_bg_pane_g2_ParamLimits

0x03d0,	// (0x000003d0) hc_scroll_bg_pane_g2

0x03e8,	// (0x000003e8) hc_scroll_bg_pane_g3_ParamLimits

0x03e8,	// (0x000003e8) hc_scroll_bg_pane_g3

0x0002,

0x12ea,	// (0x000012ea) hc_scroll_bg_pane_g_ParamLimits

0x12ea,	// (0x000012ea) hc_scroll_bg_pane_g

0x01c8,	// (0x000001c8) hc_scroll_handle_pane_g1_ParamLimits

0x01c8,	// (0x000001c8) hc_scroll_handle_pane_g1

0x03d0,	// (0x000003d0) hc_scroll_handle_pane_g2_ParamLimits

0x03d0,	// (0x000003d0) hc_scroll_handle_pane_g2

0x03e8,	// (0x000003e8) hc_scroll_handle_pane_g3_ParamLimits

0x03e8,	// (0x000003e8) hc_scroll_handle_pane_g3

0x0002,

0x12ea,	// (0x000012ea) hc_scroll_handle_pane_g_ParamLimits

0x12ea,	// (0x000012ea) hc_scroll_handle_pane_g

0x000c,	// (0x0000000c) bg_hc_secondary_window

0x0400,	// (0x00000400) qfn_secondary_cp6

0x040e,	// (0x0000040e) hc_button_pane

0x0416,	// (0x00000416) bg_hc_button_pane_ParamLimits

0x0416,	// (0x00000416) bg_hc_button_pane

0x0424,	// (0x00000424) hc_button_pane_g1_ParamLimits

0x0424,	// (0x00000424) hc_button_pane_g1

0x043f,	// (0x0000043f) hc_button_pane_t1_ParamLimits

0x043f,	// (0x0000043f) hc_button_pane_t1

0x045d,	// (0x0000045d) bg_hc_button_pane_g1

0x0465,	// (0x00000465) bg_hc_button_pane_g2

0x046d,	// (0x0000046d) bg_hc_button_pane_g3

0x0475,	// (0x00000475) bg_hc_button_pane_g4

0x047d,	// (0x0000047d) bg_hc_button_pane_g5

0x0485,	// (0x00000485) bg_hc_button_pane_g6

0x048d,	// (0x0000048d) bg_hc_button_pane_g7

0x0495,	// (0x00000495) bg_hc_button_pane_g8

0x049d,	// (0x0000049d) bg_hc_button_pane_g9

0x0008,

0x12f1,	// (0x000012f1) bg_hc_button_pane_g

0x0213,	// (0x00000213) hc_list_double_graphic_heading_pane_g1_ParamLimits

0x0213,	// (0x00000213) hc_list_double_graphic_heading_pane_g1

0x02e8,	// (0x000002e8) hc_list_double_graphic_heading_pane_g2_ParamLimits

0x02e8,	// (0x000002e8) hc_list_double_graphic_heading_pane_g2

0x02f4,	// (0x000002f4) hc_list_double_graphic_heading_pane_g3_ParamLimits

0x02f4,	// (0x000002f4) hc_list_double_graphic_heading_pane_g3

0x0002,

0x1304,	// (0x00001304) hc_list_double_graphic_heading_pane_g_ParamLimits

0x1304,	// (0x00001304) hc_list_double_graphic_heading_pane_g

0x04a5,	// (0x000004a5) hc_list_double_graphic_heading_pane_t1_ParamLimits

0x04a5,	// (0x000004a5) hc_list_double_graphic_heading_pane_t1

0x04b7,	// (0x000004b7) hc_list_double_graphic_heading_pane_t2_ParamLimits

0x04b7,	// (0x000004b7) hc_list_double_graphic_heading_pane_t2

0x0001,

0x130b,	// (0x0000130b) hc_list_double_graphic_heading_pane_t_ParamLimits

0x130b,	// (0x0000130b) hc_list_double_graphic_heading_pane_t

0x000c,	// (0x0000000c) main_hc_gridscroll_pane

0x000c,	// (0x0000000c) bg_hc_highlight_list_pane

0x04cd,	// (0x000004cd) aid_hc_grid_cell_size_ParamLimits

0x04cd,	// (0x000004cd) aid_hc_grid_cell_size

0x04e3,	// (0x000004e3) hc_scroll_pane_cp02_ParamLimits

0x04e3,	// (0x000004e3) hc_scroll_pane_cp02

0x04f0,	// (0x000004f0) main_hc_grid_pane_ParamLimits

0x04f0,	// (0x000004f0) main_hc_grid_pane

0x0512,	// (0x00000512) cell_hc_grid_pane_ParamLimits

0x0512,	// (0x00000512) cell_hc_grid_pane

0x054a,	// (0x0000054a) bg_hc_highlight_grid_pane_ParamLimits

0x054a,	// (0x0000054a) bg_hc_highlight_grid_pane

0x0558,	// (0x00000558) cell_hc_grid_pane_g1_ParamLimits

0x0558,	// (0x00000558) cell_hc_grid_pane_g1

0x0571,	// (0x00000571) cell_hc_grid_pane_t1_ParamLimits

0x0571,	// (0x00000571) cell_hc_grid_pane_t1

0x058b,	// (0x0000058b) bg_hc_highlight_grid_pane_g1_ParamLimits

0x058b,	// (0x0000058b) bg_hc_highlight_grid_pane_g1

0x0597,	// (0x00000597) bg_hc_highlight_grid_pane_g2_ParamLimits

0x0597,	// (0x00000597) bg_hc_highlight_grid_pane_g2

0x05a3,	// (0x000005a3) bg_hc_highlight_grid_pane_g3_ParamLimits

0x05a3,	// (0x000005a3) bg_hc_highlight_grid_pane_g3

0x05af,	// (0x000005af) bg_hc_highlight_grid_pane_g4_ParamLimits

0x05af,	// (0x000005af) bg_hc_highlight_grid_pane_g4

0x05bb,	// (0x000005bb) bg_hc_highlight_grid_pane_g5_ParamLimits

0x05bb,	// (0x000005bb) bg_hc_highlight_grid_pane_g5

0x05c7,	// (0x000005c7) bg_hc_highlight_grid_pane_g6_ParamLimits

0x05c7,	// (0x000005c7) bg_hc_highlight_grid_pane_g6

0x05d3,	// (0x000005d3) bg_hc_highlight_grid_pane_g7_ParamLimits

0x05d3,	// (0x000005d3) bg_hc_highlight_grid_pane_g7

0x05df,	// (0x000005df) bg_hc_highlight_grid_pane_g8_ParamLimits

0x05df,	// (0x000005df) bg_hc_highlight_grid_pane_g8

0x05eb,	// (0x000005eb) bg_hc_highlight_grid_pane_g9_ParamLimits

0x05eb,	// (0x000005eb) bg_hc_highlight_grid_pane_g9

0x05f7,	// (0x000005f7) bg_hc_highlight_grid_pane_g10_ParamLimits

0x05f7,	// (0x000005f7) bg_hc_highlight_grid_pane_g10

0x0009,

0x1310,	// (0x00001310) bg_hc_highlight_grid_pane_g_ParamLimits

0x1310,	// (0x00001310) bg_hc_highlight_grid_pane_g

0x0597,	// (0x00000597) bg_hc_highlight_list_pane_g1_ParamLimits

0x0597,	// (0x00000597) bg_hc_highlight_list_pane_g1

0x0597,	// (0x00000597) bg_hc_highlight_list_pane_g2_ParamLimits

0x0597,	// (0x00000597) bg_hc_highlight_list_pane_g2

0x05a3,	// (0x000005a3) bg_hc_highlight_list_pane_g3_ParamLimits

0x05a3,	// (0x000005a3) bg_hc_highlight_list_pane_g3

0x05af,	// (0x000005af) bg_hc_highlight_list_pane_g4_ParamLimits

0x05af,	// (0x000005af) bg_hc_highlight_list_pane_g4

0x05bb,	// (0x000005bb) bg_hc_highlight_list_pane_g5_ParamLimits

0x05bb,	// (0x000005bb) bg_hc_highlight_list_pane_g5

0x05c7,	// (0x000005c7) bg_hc_highlight_list_pane_g6_ParamLimits

0x05c7,	// (0x000005c7) bg_hc_highlight_list_pane_g6

0x05d3,	// (0x000005d3) bg_hc_highlight_list_pane_g7_ParamLimits

0x05d3,	// (0x000005d3) bg_hc_highlight_list_pane_g7

0x05df,	// (0x000005df) bg_hc_highlight_list_pane_g8_ParamLimits

0x05df,	// (0x000005df) bg_hc_highlight_list_pane_g8

0x05eb,	// (0x000005eb) bg_hc_highlight_list_pane_g9_ParamLimits

0x05eb,	// (0x000005eb) bg_hc_highlight_list_pane_g9

0x05f7,	// (0x000005f7) bg_hc_highlight_list_pane_g10_ParamLimits

0x05f7,	// (0x000005f7) bg_hc_highlight_list_pane_g10

0x0009,

0x1325,	// (0x00001325) bg_hc_highlight_list_pane_g_ParamLimits

0x1325,	// (0x00001325) bg_hc_highlight_list_pane_g

0x002f,	// (0x0000002f) area_side_right_pane_ParamLimits

0x002f,	// (0x0000002f) area_side_right_pane

0x0098,	// (0x00000098) popup_toolbar2_fixed_window_cp001

0x00a5,	// (0x000000a5) main_aa_coverflow_pane

0x000c,	// (0x0000000c) main_aa_empty_pane

0x000c,	// (0x0000000c) main_aa_fastscroll_pane

0x00a5,	// (0x000000a5) main_aa_gridscroll_pane_ParamLimits

0x00a5,	// (0x000000a5) main_aa_gridscroll_pane

0x000c,	// (0x0000000c) main_aa_listscroll_pane

0x00b3,	// (0x000000b3) main_aa_metadata_pane

0x00b3,	// (0x000000b3) main_aa_slider_pane

0x0609,	// (0x00000609) aacf_image_pane_ParamLimits

0x0609,	// (0x00000609) aacf_image_pane

0x064b,	// (0x0000064b) aacf_image_pane_cp001_ParamLimits

0x064b,	// (0x0000064b) aacf_image_pane_cp001

0x0679,	// (0x00000679) aacf_image_pane_cp002_ParamLimits

0x0679,	// (0x00000679) aacf_image_pane_cp002

0x06d1,	// (0x000006d1) aacf_slider_pane

0x06e6,	// (0x000006e6) main_aa_coverflow_pane_t1_ParamLimits

0x06e6,	// (0x000006e6) main_aa_coverflow_pane_t1

0x06f8,	// (0x000006f8) aacf_image_pane_g1_ParamLimits

0x06f8,	// (0x000006f8) aacf_image_pane_g1

0x06a7,	// (0x000006a7) aacf_image_title_pane_ParamLimits

0x06a7,	// (0x000006a7) aacf_image_title_pane

0x0707,	// (0x00000707) aacf_slider_pane_g1

0x070f,	// (0x0000070f) aacf_slider_pane_g1_cp001

0x0717,	// (0x00000717) aaslider_bg_pane

0x071f,	// (0x0000071f) aacf_image_title_pane_g1_ParamLimits

0x071f,	// (0x0000071f) aacf_image_title_pane_g1

0x072d,	// (0x0000072d) aacf_image_title_pane_t1_ParamLimits

0x072d,	// (0x0000072d) aacf_image_title_pane_t1

0x073f,	// (0x0000073f) aacf_image_title_pane_t2_ParamLimits

0x073f,	// (0x0000073f) aacf_image_title_pane_t2

0x0001,

0x133a,	// (0x0000133a) aacf_image_title_pane_t_ParamLimits

0x133a,	// (0x0000133a) aacf_image_title_pane_t

0x0751,	// (0x00000751) aafs_strip_pane_ParamLimits

0x0751,	// (0x00000751) aafs_strip_pane

0x0764,	// (0x00000764) main_aa_fastscroll_pane_g1_ParamLimits

0x0764,	// (0x00000764) main_aa_fastscroll_pane_g1

0x0773,	// (0x00000773) main_aa_fastscroll_pane_g2_ParamLimits

0x0773,	// (0x00000773) main_aa_fastscroll_pane_g2

0x0001,

0x133f,	// (0x0000133f) main_aa_fastscroll_pane_g_ParamLimits

0x133f,	// (0x0000133f) main_aa_fastscroll_pane_g

0x0782,	// (0x00000782) aafs_strip_grid_pane_ParamLimits

0x0782,	// (0x00000782) aafs_strip_grid_pane

0x00b3,	// (0x000000b3) aafs_strip_shadow_pane_ParamLimits

0x00b3,	// (0x000000b3) aafs_strip_shadow_pane

0x0790,	// (0x00000790) aafs_strip_grid_pane_g1_ParamLimits

0x0790,	// (0x00000790) aafs_strip_grid_pane_g1

0x07c9,	// (0x000007c9) aa_scroll_pane

0x07d2,	// (0x000007d2) aalist_gene_pane_ParamLimits

0x07d2,	// (0x000007d2) aalist_gene_pane

0x07ec,	// (0x000007ec) aalist_double_entry_pane_ParamLimits

0x07ec,	// (0x000007ec) aalist_double_entry_pane

0x07ec,	// (0x000007ec) aalist_double_graphic_pane_ParamLimits

0x07ec,	// (0x000007ec) aalist_double_graphic_pane

0x07ec,	// (0x000007ec) aalist_double_pane_ParamLimits

0x07ec,	// (0x000007ec) aalist_double_pane

0x07ec,	// (0x000007ec) aalist_double_progress_pane_ParamLimits

0x07ec,	// (0x000007ec) aalist_double_progress_pane

0x07ec,	// (0x000007ec) aalist_gene_ad_pane_ParamLimits

0x07ec,	// (0x000007ec) aalist_gene_ad_pane

0x080a,	// (0x0000080a) aalist_single_pane_ParamLimits

0x080a,	// (0x0000080a) aalist_single_pane

0x0841,	// (0x00000841) aalist_single_pane_g1_ParamLimits

0x0841,	// (0x00000841) aalist_single_pane_g1

0x084d,	// (0x0000084d) aalist_single_pane_g2_ParamLimits

0x084d,	// (0x0000084d) aalist_single_pane_g2

0x0004,

0x1344,	// (0x00001344) aalist_single_pane_g_ParamLimits

0x1344,	// (0x00001344) aalist_single_pane_g

0x0889,	// (0x00000889) aalist_single_pane_t1_ParamLimits

0x0889,	// (0x00000889) aalist_single_pane_t1

0x08a7,	// (0x000008a7) aalist_double_pane_g1_ParamLimits

0x08a7,	// (0x000008a7) aalist_double_pane_g1

0x08b3,	// (0x000008b3) aalist_double_pane_g2_ParamLimits

0x08b3,	// (0x000008b3) aalist_double_pane_g2

0x0001,

0x134f,	// (0x0000134f) aalist_double_pane_g_ParamLimits

0x134f,	// (0x0000134f) aalist_double_pane_g

0x08c7,	// (0x000008c7) aalist_double_pane_t1_ParamLimits

0x08c7,	// (0x000008c7) aalist_double_pane_t1

0x08dd,	// (0x000008dd) aalist_double_pane_t2_ParamLimits

0x08dd,	// (0x000008dd) aalist_double_pane_t2

0x0001,

0x1354,	// (0x00001354) aalist_double_pane_t_ParamLimits

0x1354,	// (0x00001354) aalist_double_pane_t

0x08ef,	// (0x000008ef) aalist_double_graphic_pane_g1_ParamLimits

0x08ef,	// (0x000008ef) aalist_double_graphic_pane_g1

0x0904,	// (0x00000904) aalist_double_graphic_pane_g2_ParamLimits

0x0904,	// (0x00000904) aalist_double_graphic_pane_g2

0x0924,	// (0x00000924) aalist_double_graphic_pane_g3_ParamLimits

0x0924,	// (0x00000924) aalist_double_graphic_pane_g3

0x0940,	// (0x00000940) aalist_double_graphic_pane_g4_ParamLimits

0x0940,	// (0x00000940) aalist_double_graphic_pane_g4

0x0960,	// (0x00000960) aalist_double_graphic_pane_g5_ParamLimits

0x0960,	// (0x00000960) aalist_double_graphic_pane_g5

0x0980,	// (0x00000980) aalist_double_graphic_pane_g6_ParamLimits

0x0980,	// (0x00000980) aalist_double_graphic_pane_g6

0x09ad,	// (0x000009ad) aalist_double_graphic_pane_g7_ParamLimits

0x09ad,	// (0x000009ad) aalist_double_graphic_pane_g7

0x09da,	// (0x000009da) aalist_double_graphic_pane_g8_ParamLimits

0x09da,	// (0x000009da) aalist_double_graphic_pane_g8

0x09fe,	// (0x000009fe) aalist_double_graphic_pane_g9_ParamLimits

0x09fe,	// (0x000009fe) aalist_double_graphic_pane_g9

0x0a22,	// (0x00000a22) aalist_double_graphic_pane_g10_ParamLimits

0x0a22,	// (0x00000a22) aalist_double_graphic_pane_g10

0x0a46,	// (0x00000a46) aalist_double_graphic_pane_g11_ParamLimits

0x0a46,	// (0x00000a46) aalist_double_graphic_pane_g11

0x000a,

0x1359,	// (0x00001359) aalist_double_graphic_pane_g_ParamLimits

0x1359,	// (0x00001359) aalist_double_graphic_pane_g

0x0a6a,	// (0x00000a6a) aalist_double_graphic_pane_t1_ParamLimits

0x0a6a,	// (0x00000a6a) aalist_double_graphic_pane_t1

0x0a84,	// (0x00000a84) aalist_double_graphic_pane_t2_ParamLimits

0x0a84,	// (0x00000a84) aalist_double_graphic_pane_t2

0x0001,

0x1370,	// (0x00001370) aalist_double_graphic_pane_t_ParamLimits

0x1370,	// (0x00001370) aalist_double_graphic_pane_t

0x0a9e,	// (0x00000a9e) aalist_double_entry_pane_t1

0x0aac,	// (0x00000aac) aalist_entry_pane

0x0ab4,	// (0x00000ab4) aalist_entry_pane_t1

0x000c,	// (0x0000000c) input_focus_pane_cp001

0x0ac2,	// (0x00000ac2) aalist_double_progress_pane_g1_ParamLimits

0x0ac2,	// (0x00000ac2) aalist_double_progress_pane_g1

0x0af3,	// (0x00000af3) aalist_double_progress_pane_g2_ParamLimits

0x0af3,	// (0x00000af3) aalist_double_progress_pane_g2

0x0b23,	// (0x00000b23) aalist_double_progress_pane_g3_ParamLimits

0x0b23,	// (0x00000b23) aalist_double_progress_pane_g3

0x0002,

0x1375,	// (0x00001375) aalist_double_progress_pane_g_ParamLimits

0x1375,	// (0x00001375) aalist_double_progress_pane_g

0x0b53,	// (0x00000b53) aalist_double_progress_pane_t1_ParamLimits

0x0b53,	// (0x00000b53) aalist_double_progress_pane_t1

0x0b77,	// (0x00000b77) aalist_double_progress_pane_t2_ParamLimits

0x0b77,	// (0x00000b77) aalist_double_progress_pane_t2

0x0b89,	// (0x00000b89) aalist_double_progress_pane_t3_ParamLimits

0x0b89,	// (0x00000b89) aalist_double_progress_pane_t3

0x0002,

0x137c,	// (0x0000137c) aalist_double_progress_pane_t_ParamLimits

0x137c,	// (0x0000137c) aalist_double_progress_pane_t

0x0b9b,	// (0x00000b9b) aalist_progress_pane_ParamLimits

0x0b9b,	// (0x00000b9b) aalist_progress_pane

0x0bbe,	// (0x00000bbe) aalist_progress_pane_g1

0x0bc7,	// (0x00000bc7) aalist_progress_pane_g2

0x0bd0,	// (0x00000bd0) aalist_progress_pane_g3

0x0003,

0x1383,	// (0x00001383) aalist_progress_pane_g

0x0bd9,	// (0x00000bd9) aalist_gene_ad_pane_g1

0x0be2,	// (0x00000be2) main_aa_empty_pane_t1

0x0bf0,	// (0x00000bf0) main_aa_empty_pane_t2

0x0bfe,	// (0x00000bfe) main_aa_empty_pane_t3

0x0c0c,	// (0x00000c0c) main_aa_empty_pane_t4

0x0003,

0x138c,	// (0x0000138c) main_aa_empty_pane_t

0x0c1c,	// (0x00000c1c) aa_scroll_pane_cp001_ParamLimits

0x0c1c,	// (0x00000c1c) aa_scroll_pane_cp001

0x0c3f,	// (0x00000c3f) aa_taskswapper_pane_ParamLimits

0x0c3f,	// (0x00000c3f) aa_taskswapper_pane

0x0c4d,	// (0x00000c4d) aagrid_gene_pane_ParamLimits

0x0c4d,	// (0x00000c4d) aagrid_gene_pane

0x0c6b,	// (0x00000c6b) aagrid_cell_image_pane_ParamLimits

0x0c6b,	// (0x00000c6b) aagrid_cell_image_pane

0x0d35,	// (0x00000d35) aagrid_cell_image_pane_g1_ParamLimits

0x0d35,	// (0x00000d35) aagrid_cell_image_pane_g1

0x0d69,	// (0x00000d69) aagrid_cell_image_pane_g2_ParamLimits

0x0d69,	// (0x00000d69) aagrid_cell_image_pane_g2

0x0d95,	// (0x00000d95) aagrid_cell_image_pane_g3_ParamLimits

0x0d95,	// (0x00000d95) aagrid_cell_image_pane_g3

0x0da6,	// (0x00000da6) aagrid_cell_image_pane_g4_ParamLimits

0x0da6,	// (0x00000da6) aagrid_cell_image_pane_g4

0x0003,

0x1395,	// (0x00001395) aagrid_cell_image_pane_g_ParamLimits

0x1395,	// (0x00001395) aagrid_cell_image_pane_g

0x0db7,	// (0x00000db7) aagrid_cell_image_pane_t1_ParamLimits

0x0db7,	// (0x00000db7) aagrid_cell_image_pane_t1

0x0dc9,	// (0x00000dc9) grid_highlight_pane_cp001_ParamLimits

0x0dc9,	// (0x00000dc9) grid_highlight_pane_cp001

0x0dd7,	// (0x00000dd7) aa_taskswapper_pane_g1_ParamLimits

0x0dd7,	// (0x00000dd7) aa_taskswapper_pane_g1

0x0de4,	// (0x00000de4) aa_taskswapper_pane_t1_ParamLimits

0x0de4,	// (0x00000de4) aa_taskswapper_pane_t1

0x0df6,	// (0x00000df6) aatasksw_grid_pane_ParamLimits

0x0df6,	// (0x00000df6) aatasksw_grid_pane

0x0e04,	// (0x00000e04) aatasksw_cell_pane_ParamLimits

0x0e04,	// (0x00000e04) aatasksw_cell_pane

0x0e19,	// (0x00000e19) aatasksw_cell_pane_g1

0x000c,	// (0x0000000c) grid_highlight_pane_cp002

0x0e22,	// (0x00000e22) aamd_info_pane

0x0e2b,	// (0x00000e2b) aamd_list_pane

0x0e35,	// (0x00000e35) aamd_list_double_pane_ParamLimits

0x0e35,	// (0x00000e35) aamd_list_double_pane

0x0e49,	// (0x00000e49) aamd_list_single_pane_ParamLimits

0x0e49,	// (0x00000e49) aamd_list_single_pane

0x0e63,	// (0x00000e63) aamd_list_single_pane_g1_ParamLimits

0x0e63,	// (0x00000e63) aamd_list_single_pane_g1

0x0e70,	// (0x00000e70) aamd_list_single_pane_g2_ParamLimits

0x0e70,	// (0x00000e70) aamd_list_single_pane_g2

0x0e7c,	// (0x00000e7c) aamd_list_single_pane_g3_ParamLimits

0x0e7c,	// (0x00000e7c) aamd_list_single_pane_g3

0x0002,

0x139e,	// (0x0000139e) aamd_list_single_pane_g_ParamLimits

0x139e,	// (0x0000139e) aamd_list_single_pane_g

0x0e94,	// (0x00000e94) aamd_list_single_pane_t1_ParamLimits

0x0e94,	// (0x00000e94) aamd_list_single_pane_t1

0x0e63,	// (0x00000e63) aamd_list_double_pane_g1_ParamLimits

0x0e63,	// (0x00000e63) aamd_list_double_pane_g1

0x0eae,	// (0x00000eae) aamd_list_double_pane_g2_ParamLimits

0x0eae,	// (0x00000eae) aamd_list_double_pane_g2

0x0eba,	// (0x00000eba) aamd_list_double_pane_g3_ParamLimits

0x0eba,	// (0x00000eba) aamd_list_double_pane_g3

0x0002,

0x13a5,	// (0x000013a5) aamd_list_double_pane_g_ParamLimits

0x13a5,	// (0x000013a5) aamd_list_double_pane_g

0x0ed2,	// (0x00000ed2) aamd_list_double_pane_t1_ParamLimits

0x0ed2,	// (0x00000ed2) aamd_list_double_pane_t1

0x0ee9,	// (0x00000ee9) aamd_list_double_pane_t2_ParamLimits

0x0ee9,	// (0x00000ee9) aamd_list_double_pane_t2

0x0001,

0x13ac,	// (0x000013ac) aamd_list_double_pane_t_ParamLimits

0x13ac,	// (0x000013ac) aamd_list_double_pane_t

0x0f00,	// (0x00000f00) aamd_info_pane_g1_ParamLimits

0x0f00,	// (0x00000f00) aamd_info_pane_g1

0x0f0e,	// (0x00000f0e) aamd_info_pane_g2_ParamLimits

0x0f0e,	// (0x00000f0e) aamd_info_pane_g2

0x0f1a,	// (0x00000f1a) aamd_info_pane_g3_ParamLimits

0x0f1a,	// (0x00000f1a) aamd_info_pane_g3

0x0002,

0x13b1,	// (0x000013b1) aamd_info_pane_g_ParamLimits

0x13b1,	// (0x000013b1) aamd_info_pane_g

0x0f26,	// (0x00000f26) aamd_info_pane_t1_ParamLimits

0x0f26,	// (0x00000f26) aamd_info_pane_t1

0x0f3b,	// (0x00000f3b) aamd_info_pane_t2_ParamLimits

0x0f3b,	// (0x00000f3b) aamd_info_pane_t2

0x0f5a,	// (0x00000f5a) aamd_info_pane_t3_ParamLimits

0x0f5a,	// (0x00000f5a) aamd_info_pane_t3

0x0002,

0x13b8,	// (0x000013b8) aamd_info_pane_t_ParamLimits

0x13b8,	// (0x000013b8) aamd_info_pane_t

0x0f7e,	// (0x00000f7e) aaslider_bg_pane_g1

0x0f87,	// (0x00000f87) aaslider_bg_pane_g2

0x0001,

0x13bf,	// (0x000013bf) aaslider_bg_pane_g

0x0f90,	// (0x00000f90) aaslider_bg_pane_g2_copy1

0x1b3f,	// (0x00001b3f) aaslider_pane_ParamLimits

0x1b3f,	// (0x00001b3f) aaslider_pane

0x0fbf,	// (0x00000fbf) aaslider_bg_pane_cp001_ParamLimits

0x0fbf,	// (0x00000fbf) aaslider_bg_pane_cp001

0x0ff3,	// (0x00000ff3) aaslider_pane_g1_ParamLimits

0x0ff3,	// (0x00000ff3) aaslider_pane_g1

0x100d,	// (0x0000100d) aaslider_pane_g2_ParamLimits

0x100d,	// (0x0000100d) aaslider_pane_g2

0x1031,	// (0x00001031) aaslider_pane_g3_ParamLimits

0x1031,	// (0x00001031) aaslider_pane_g3

0x0004,

0x13c4,	// (0x000013c4) aaslider_pane_g_ParamLimits

0x13c4,	// (0x000013c4) aaslider_pane_g

0x1063,	// (0x00001063) aaslider_pane_t1_ParamLimits

0x1063,	// (0x00001063) aaslider_pane_t1

0x1079,	// (0x00001079) aaslider_pane_t2_ParamLimits

0x1079,	// (0x00001079) aaslider_pane_t2

0x108f,	// (0x0000108f) aaslider_pane_t3_ParamLimits

0x108f,	// (0x0000108f) aaslider_pane_t3

0x0002,

0x13cf,	// (0x000013cf) aaslider_pane_t_ParamLimits

0x13cf,	// (0x000013cf) aaslider_pane_t

0x10ad,	// (0x000010ad) aid_touch_size_slider_marker_ParamLimits

0x10ad,	// (0x000010ad) aid_touch_size_slider_marker

0x080a,	// (0x0000080a) aalist_list_sub_pane_ParamLimits

0x080a,	// (0x0000080a) aalist_list_sub_pane

0x0865,	// (0x00000865) aalist_single_pane_g3_ParamLimits

0x0865,	// (0x00000865) aalist_single_pane_g3

0x0871,	// (0x00000871) aalist_single_pane_g4_ParamLimits

0x0871,	// (0x00000871) aalist_single_pane_g4

0x00a5,	// (0x000000a5) list_highlight_pane_cp001

0x1112,	// (0x00001112) aalist_list_sub_pane_g1_ParamLimits

0x1112,	// (0x00001112) aalist_list_sub_pane_g1

0x111e,	// (0x0000111e) aalist_list_sub_pane_g2_ParamLimits

0x111e,	// (0x0000111e) aalist_list_sub_pane_g2

0x112a,	// (0x0000112a) aalist_list_sub_pane_g3_ParamLimits

0x112a,	// (0x0000112a) aalist_list_sub_pane_g3

0x1136,	// (0x00001136) aalist_list_sub_pane_g4_ParamLimits

0x1136,	// (0x00001136) aalist_list_sub_pane_g4

0x1142,	// (0x00001142) aalist_list_sub_pane_g5_ParamLimits

0x1142,	// (0x00001142) aalist_list_sub_pane_g5

0x1172,	// (0x00001172) aalist_list_sub_pane_g7_ParamLimits

0x1172,	// (0x00001172) aalist_list_sub_pane_g7

0x0005,

0x13dd,	// (0x000013dd) aalist_list_sub_pane_g_ParamLimits

0x13dd,	// (0x000013dd) aalist_list_sub_pane_g

0x11aa,	// (0x000011aa) aalist_list_sub_pane_t1_ParamLimits

0x11aa,	// (0x000011aa) aalist_list_sub_pane_t1

0x11bf,	// (0x000011bf) aalist_list_sub_pane_t2_ParamLimits

0x11bf,	// (0x000011bf) aalist_list_sub_pane_t2

0x0001,

0x13ea,	// (0x000013ea) aalist_list_sub_pane_t_ParamLimits

0x13ea,	// (0x000013ea) aalist_list_sub_pane_t

0x00a5,	// (0x000000a5) main_aa_coverflow_pane_ParamLimits

0x00b3,	// (0x000000b3) main_aa_metadata_pane_ParamLimits

0x087d,	// (0x0000087d) aalist_single_pane_g5_ParamLimits

0x087d,	// (0x0000087d) aalist_single_pane_g5

0x00a5,	// (0x000000a5) list_highlight_pane_cp001_ParamLimits

0x06d1,	// (0x000006d1) aacf_slider_pane_ParamLimits

0x000c,	// (0x0000000c) main_aa_video_pane

0x07e2,	// (0x000007e2) aid_size_touch_aascroll_bar

0x07ec,	// (0x000007ec) aalist_single_large_graphic_pane_ParamLimits

0x07ec,	// (0x000007ec) aalist_single_large_graphic_pane

0x1043,	// (0x00001043) aaslider_pane_g4_ParamLimits

0x1043,	// (0x00001043) aaslider_pane_g4

0x1053,	// (0x00001053) aaslider_pane_g5_ParamLimits

0x1053,	// (0x00001053) aaslider_pane_g5

0x10d1,	// (0x000010d1) aid_touch_size_slider_max_ParamLimits

0x10d1,	// (0x000010d1) aid_touch_size_slider_max

0x10e1,	// (0x000010e1) aid_touch_size_slider_min_ParamLimits

0x10e1,	// (0x000010e1) aid_touch_size_slider_min

0x123b,	// (0x0000123b) aalist_single_large_graphic_pane_g1_ParamLimits

0x123b,	// (0x0000123b) aalist_single_large_graphic_pane_g1

0x1248,	// (0x00001248) aalist_single_large_graphic_pane_g2_ParamLimits

0x1248,	// (0x00001248) aalist_single_large_graphic_pane_g2

0x1254,	// (0x00001254) aalist_single_large_graphic_pane_g3_ParamLimits

0x1254,	// (0x00001254) aalist_single_large_graphic_pane_g3

0x0002,

0x13ef,	// (0x000013ef) aalist_single_large_graphic_pane_g_ParamLimits

0x13ef,	// (0x000013ef) aalist_single_large_graphic_pane_g

0x1268,	// (0x00001268) aalist_single_large_graphic_pane_t1_ParamLimits

0x1268,	// (0x00001268) aalist_single_large_graphic_pane_t1

0x127e,	// (0x0000127e) main_aa_video_pane_g1_ParamLimits

0x127e,	// (0x0000127e) main_aa_video_pane_g1

0x06de,	// (0x000006de) main_aa_coverflow_pane_g1

0x0838,	// (0x00000838) aid_size_min_handle_cp002

0x0098,	// (0x00000098) popup_toolbar2_fixed_window_cp001_ParamLimits

0x00b3,	// (0x000000b3) main_aa_slider_pane_ParamLimits

0x0838,	// (0x00000838) aid_size_min_handle_cp001

0x10f7,	// (0x000010f7) aaslider_bg_pane_cp001_g1

0x1100,	// (0x00001100) aaslider_bg_pane_cp001_g2

0x1109,	// (0x00001109) aaslider_bg_pane_cp001_g3

0x0002,

0x13d6,	// (0x000013d6) aaslider_bg_pane_cp001_g

0x0bbe,	// (0x00000bbe) aalist_progress_pane_g4

0x10a5,	// (0x000010a5) aid_aaslider_pane_rect_inner
};


const AknLayoutScalable_UiAccel::SCdlImpl KCdlImpl = 
	{
	&GetComponentTypeById,
	&GetParamLimitsById,
	&GetWindowComponentById,
	&GetTextComponentById,
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
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&WindowLineVCR,
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
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_hnp4_c_nhd4_prt_tch_Normal
