#pragma once

#include "../ZyUwU/ZyUwU.h"

USING_NS_ALL;

BEGIN_CREATE_CLASS(IngameAttribute)

public:
    CREATE_SET_GET_FUNC(setCurrentHP, getCurrentHP, float , m_fCurrentHP)
    CREATE_SET_GET_FUNC(setCurrentMN, getCurrentMN, float , m_fCurrentMN)

protected:
    QUICK_FLOAT(m_fCurrentHP, m_fCurrentMN)


END_CREATE_CLASS_WITH_TYPE_DEF(IngameAttribute, IGA)
