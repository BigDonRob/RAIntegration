#ifndef RA_UI_WIN32_THEMEPROVIDER_H
#define RA_UI_WIN32_THEMEPROVIDER_H
#pragma once

#include <Windows.h>

namespace ra {
namespace ui {
namespace win32 {

// ------------------------------------
// Dark theme color palette
// ------------------------------------

// Dialog and static label backgrounds
constexpr COLORREF COLOR_THEME_BACKGROUND    = RGB(28,  28,  28);

// Edit boxes, list boxes, combo box dropdowns
constexpr COLORREF COLOR_THEME_CONTROL       = RGB(40,  40,  42);

// All foreground text
constexpr COLORREF COLOR_THEME_TEXT          = RGB(78, 201, 225);

// ------------------------------------
// Brush accessors
// Call once per WM_CTLCOLOR* message.
// Brushes are created on first use and live for the DLL lifetime.
// ------------------------------------

inline HBRUSH GetBackgroundBrush() noexcept
{
    static HBRUSH hBrush = CreateSolidBrush(COLOR_THEME_BACKGROUND);
    return hBrush;
}

inline HBRUSH GetControlBrush() noexcept
{
    static HBRUSH hBrush = CreateSolidBrush(COLOR_THEME_CONTROL);
    return hBrush;
}

} // namespace win32
} // namespace ui
} // namespace ra

#endif // !RA_UI_WIN32_THEMEPROVIDER_H
