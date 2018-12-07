// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>

#define IfNullRet(expr, ret) {\
    if ((expr) == nullptr) \
    { \
        return ret; \
    } \
}

#define IfFailRet(expr) { \
    HRESULT __hr__ = (expr); \
    if (FAILED(__hr__)) \
    { \
        return __hr__; \
    } \
}
