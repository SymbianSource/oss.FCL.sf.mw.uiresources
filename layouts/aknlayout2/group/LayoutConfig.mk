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
# LayoutConfig.mk is no longer used for selecting layouts.
# Instead, select the appropriate iby file(s) from
# aknlayout2/rom to configure the correct layouts for a product.

gen_dir = ../generated

make_gen_dir:
	@python -c "import os,os.path; os.path.exists('$(gen_dir)') or os.mkdir('$(gen_dir)')"
