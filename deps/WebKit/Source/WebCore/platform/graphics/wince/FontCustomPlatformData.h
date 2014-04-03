/*
 * Copyright (C) 2007, 2008 Apple Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 */

#ifndef FontCustomPlatformData_h
#define FontCustomPlatformData_h

#include "FontDescription.h"
#include "FontRenderingMode.h"
#include "FontWidthVariant.h"
#include <wtf/Noncopyable.h>
#include <wtf/text/WTFString.h>

namespace WebCore {

    class FontPlatformData;
    class CachedFont;
    class SharedBuffer;

    class CustomFontCache {
    public:
        virtual bool registerFont(const String& fontName, const SharedBuffer*) = 0;
        virtual void unregisterFont(const String& fontName) = 0;
    };

    struct FontCustomPlatformData {
        WTF_MAKE_NONCOPYABLE(FontCustomPlatformData);
    public:
        FontCustomPlatformData(const String& name)
            : m_name(name)
        {
        }

        ~FontCustomPlatformData();

        FontPlatformData fontPlatformData(int size, bool bold, bool italic, FontOrientation = Horizontal, FontWidthVariant = RegularWidth, FontRenderingMode = NormalRenderingMode);

        static bool supportsFormat(const String&);

        String m_name;
    };

    std::unique_ptr<FontCustomPlatformData> createFontCustomPlatformData(SharedBuffer&);
    void setCustomFontCache(CustomFontCache*);
}

#endif