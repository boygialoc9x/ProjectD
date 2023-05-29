#include "SelectableObject.h"

MARK_STATIC


MARK_CONSTRUCTOR

SOB::SelectableObject()
{

}

SOB::~SelectableObject()
{

}

MARK_VIRTUAL

bool SOB::init()
{
    return true;
}

STR SOB::toString(int nTab)
{
    return "";
}

void SOB::log()
{
    ZY_EZ_LOG;
}

MARK_FUNCTION
