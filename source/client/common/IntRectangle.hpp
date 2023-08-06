/********************************************************************
	Decompiled from Minecraft 0.1.1j

    Copyright (c) mqhirr
	
	The following code is licensed under the BSD 1 clause license.
	SPDX-License-Identifier: BSD-1-Clause
 ********************************************************************/

#pragma once

class IntRectangle
{
public:
    IntRectangle()
    {
        this->m_width = 0;
        this->m_height = 0;
        this->m_unk1 = 1;
        this->m_unk2 = 1;
    }

    IntRectangle(int param_1, int param_2, int param_3, int param_4)
    {
        this->m_width = param_1;
        this->m_height = param_2;
        this->m_unk1 = param_3;
        this->m_unk2 = param_4;
    }

private:
    int m_width;
    int m_height;
    int m_unk1;
    int m_unk2;
};