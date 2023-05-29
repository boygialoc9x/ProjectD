#pragma once

#define ZY_ASSERT_BREAK(__COND__, __RETURN_TYPE__)              \
if (!(__COND__)) {                                              \
CCLOG("ERROR");                                                 \
    return __RETURN_TYPE__;                                     \
    }
