#ifndef ZEBRA_H
#define ZEBRA_H

#include "Animal.h"

class Zebra : virtual public Animal 
{
    private:
        const bool m_hasStripes;

    public:
        Zebra(const string& name = "", const int age = 0, const bool hasStripes = true);
        bool hasStripes();
};

#endif