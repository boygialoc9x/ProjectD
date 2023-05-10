#pragma once

#include "../ZyUwU/ZyUwU.h"

USING_NS_ALL;

BEGIN_CREATE_CLASS(Attribute)

protected:
    QUICK_FLOAT(m_fAttack, m_fArmor, m_fSpeed)

END_CREATE_CLASS_WITH_TYPE_DEF(Attribute, ATT)

