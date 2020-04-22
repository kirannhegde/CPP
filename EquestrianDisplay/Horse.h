#ifndef HORSE_H
#define HORSE_H

#include "Animal.h"

class Horse : virtual public Animal 
{
    private:
        const bool m_rideableAnimal;

    public:
        Horse(const string& name = "", const int age = 0, const bool rideableAnimal = true);
        bool isRideableAnimal();
};

#endif