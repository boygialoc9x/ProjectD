#pragma once

#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
#include "android/ZYPlatformDefine-android.h"
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
#include "win32/ZYPlatformDefine-win32.h"
#endif
