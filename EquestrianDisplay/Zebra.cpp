#include "Zebra.h"

Zebra::Zebra(const string& name, const int age, const bool hasStripes) 
            : Animal{name,age}, 
            m_hasStripes{ hasStripes }
{
}

bool Zebra::hasStripes() { return m_hasStripes; }


