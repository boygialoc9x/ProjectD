#pragma once

#include "../ZyUwU/ZyUwU.h"

USING_NS_ALL;

BEGIN_CREATE_CLASS(Attribute)

MEM:
    QUICK_FLOAT(m_fAttack,
                m_fArmor,
                m_fSpeed,
                m_fHollyDamage,
                m_fPureDamage,
                m_fHP,
                m_fMana);



END_CREATE_CLASS_WITH_TYPE_DEF(Attribute, ATT)

