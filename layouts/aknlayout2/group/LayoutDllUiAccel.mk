#
# Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
# All rights reserved.
# This component and the accompanying materials are made available
# under the terms of "Eclipse Public License v1.0"
# which accompanies this distribution, and is available
# at the URL "http://www.eclipse.org/legal/epl-v10.html".
#
# Initial Contributors:
# Nokia Corporation - initial contribution.
#
# Contributors:
#
# Description:
#

include LayoutConfig.mk

layout_gen_dir = $(gen_dir)/$(name)_uiaccel$(delivery)

Elaf_Portrait_Pack_Contents=\
        EAknLayoutIdELAF \
        AknLayoutScalable_Elaf_h$(prt_code)_c_$(short)_prt$(touch)$(delivery)_ZOOM

Abrw_Portrait_Pack_Contents=\
        EAknLayoutIdABRW \
        AknLayoutScalable_Abrw_h$(prt_code)_c_$(short)_prt$(touch)$(delivery)_ZOOM

Apac_Portrait_Pack_Contents=\
        EAknLayoutIdAPAC \
        AknLayoutScalable_Elaf_h$(prt_code)_c_$(short)_prt$(touch)$(delivery)_ZOOM

Elaf_Landscape_Pack_Contents=\
        EAknLayoutIdELAF \
        AknLayoutScalable_Elaf_h$(land_code)_c_$(short)_lsc$(touch)$(delivery)_ZOOM

Abrw_Landscape_Pack_Contents=\
	EAknLayoutIdABRW \
        AknLayoutScalable_Abrw_h$(land_code)_c_$(short)_lsc$(touch)$(delivery)_ZOOM

Apac_Landscape_Pack_Contents=\
        EAknLayoutIdAPAC \
        AknLayoutScalable_Elaf_h$(land_code)_c_$(short)_lsc$(touch)$(delivery)_ZOOM


pkg = @AknLayoutCompiler -p$(layout_gen_dir) LayPkg -z../generated/LayoutZoomFactorConfig.txt -d$(delivery) -p$(priority) -a$(appUid)

Elaf_portrait :
	$(pkg) UiAccel_Elaf_$(name)_ZOOM$(delivery)_Pack $(dim1) $(dim2) -s$(style_name) $(Elaf_Portrait_Pack_Contents) >> $(layout_gen_dir)/uiaccel_instances.txt

Abrw_portrait :
	$(pkg) UiAccel_Abrw_$(name)_ZOOM$(delivery)_Pack $(dim1) $(dim2) -s$(style_name) $(Abrw_Portrait_Pack_Contents) >> $(layout_gen_dir)/uiaccel_instances.txt

Apac_portrait :
	$(pkg) UiAccel_Apac_$(name)_ZOOM$(delivery)_Pack $(dim1) $(dim2) -s$(style_name) $(Apac_Portrait_Pack_Contents) >> $(layout_gen_dir)/uiaccel_instances.txt

Elaf_landscape :
	$(pkg) UiAccel_Elaf_$(name)_land_ZOOM$(delivery)_Pack $(dim2) $(dim1) -s$(style_name) $(Elaf_Landscape_Pack_Contents) >> $(layout_gen_dir)/uiaccel_instances.txt

Abrw_landscape :
	$(pkg) UiAccel_Abrw_$(name)_land_ZOOM$(delivery)_Pack $(dim2) $(dim1) -s$(style_name) $(Abrw_Landscape_Pack_Contents) >> $(layout_gen_dir)/uiaccel_instances.txt

Apac_landscape :
	$(pkg) UiAccel_Apac_$(name)_land_ZOOM$(delivery)_Pack $(dim2) $(dim1) -s$(style_name) $(Apac_Landscape_Pack_Contents) >> $(layout_gen_dir)/uiaccel_instances.txt

clean_inst_list : 
	@python -c "import os,os.path; os.path.exists('$(layout_gen_dir)/uiaccel_instances.txt') and os.remove('$(layout_gen_dir)/uiaccel_instances.txt')"

layout_packages : \
	clean_inst_list \
	Elaf_portrait \
	Abrw_portrait \
	Apac_portrait \
	Elaf_landscape \
	Abrw_landscape \
	Apac_landscape

do_nothing :

standard_flags = -p$(layout_gen_dir) MLCompCdl2InstO -i$(layout_gen_dir)/uiaccel_instances.txt -z../generated/LayoutZoomFactorConfig.txt -allparams -d$(delivery)

make_layout_gen_dir : make_gen_dir
	@python -c "import os,os.path; os.path.exists('$(layout_gen_dir)') or os.mkdir('$(layout_gen_dir)')"




uiaccel_scalable_instances_cpp=\
    $(layout_gen_dir)/aknlayoutscalable_elaf_h$(prt_code)_c_$(short)_prt$(touch)$(delivery)_normal.cpp

ifndef delivery
delivery_dir=_all
endif
ifdef delivery
delivery_dir=$(delivery)
endif

uiaccel_scalable_instances_dep=\
    ../generated/LayoutZoomFactorConfig.txt \
    ../cdl/AknLayoutScalable_UiAccel.cdl \
    ../xml/c/$(delivery_dir)/h$(prt_code)_c_$(short)_prt$(touch)$(delivery)/display_eur_compdata.xml \
    ../xml/c/$(delivery_dir)/h$(prt_code)_c_$(short)_prt$(touch)$(delivery)/display_arabic_hebrew_compdata.xml \
    ../xml/c/$(delivery_dir)/h$(land_code)_c_$(short)_lsc$(touch)$(delivery)/display_eur_compdata.xml \
    ../xml/c/$(delivery_dir)/h$(land_code)_c_$(short)_lsc$(touch)$(delivery)/display_arabic_hebrew_compdata.xml \
    ../xml/c/$(delivery_dir)/h$(prt_code)_c_$(short)_prt$(touch)$(delivery)/display_eur_attributes.xml \
    ../xml/c/$(delivery_dir)/h$(prt_code)_c_$(short)_prt$(touch)$(delivery)/display_arabic_hebrew_attributes.xml \
    ../xml/c/$(delivery_dir)/h$(land_code)_c_$(short)_lsc$(touch)$(delivery)/display_eur_attributes.xml \
    ../xml/c/$(delivery_dir)/h$(land_code)_c_$(short)_lsc$(touch)$(delivery)/display_arabic_hebrew_attributes.xml


$(uiaccel_scalable_instances_cpp): $(uiaccel_scalable_instances_dep)
	@python -c "import os,os.path; os.path.exists('$(uiaccel_scalable_instances_cpp)') and os.remove('$(uiaccel_scalable_instances_cpp)')"

	@AknLayoutCompiler $(standard_flags) ../cdl/AknLayoutScalable_UiAccel.cdl \
            -a \
            ../xml/c/$(delivery_dir)/h$(prt_code)_c_$(short)_prt$(touch)$(delivery)/display_eur_compdata.xml AknLayoutScalable_Elaf_h$(prt_code)_c_$(short)_prt$(touch)$(delivery) \
            -m../xml/c/$(delivery_dir)/h$(prt_code)_c_$(short)_prt$(touch)$(delivery)/display_arabic_hebrew_compdata.xml AknLayoutScalable_Abrw_h$(prt_code)_c_$(short)_prt$(touch)$(delivery) \
            ../xml/c/$(delivery_dir)/h$(land_code)_c_$(short)_lsc$(touch)$(delivery)/display_eur_compdata.xml AknLayoutScalable_Elaf_h$(land_code)_c_$(short)_lsc$(touch)$(delivery) \
            -m../xml/c/$(delivery_dir)/h$(land_code)_c_$(short)_lsc$(touch)$(delivery)/display_arabic_hebrew_compdata.xml AknLayoutScalable_Abrw_h$(land_code)_c_$(short)_lsc$(touch)$(delivery)


INSTANCES: \
    $(uiaccel_scalable_instances_cpp)


DLL:
	@CdlCompiler dll \
		-n$(dllversion) \
		\
		-p$(layout_gen_dir) \
		\
		-lAknLayout2Scalable.lib \
		-lCdlEngine.lib \
		\
		-s../../DecodeLib/AknLayout2ScalableDecode.cpp \
		\
		"-esysteminclude .."\
		\
		UiAccel_LayoutInst_$(name)$(delivery) $(uid) \
		\
		@$(layout_gen_dir)/uiaccel_instances.txt

MAKMAKE : \
	make_layout_gen_dir \
	layout_packages \
	INSTANCES \
	DLL
BLD : do_nothing

CLEAN :

LIB : do_nothing

CLEANLIB : do_nothing

RESOURCE : do_nothing

FREEZE : do_nothing

SAVESPACE : do_nothing

RELEASABLES : do_nothing

FINAL : do_nothing


