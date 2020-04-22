#include "Horse.h"

Horse::Horse(const string& name, const int age, const bool rideableAnimal) 
            : Animal{name,age}, 
            m_rideableAnimal{ rideableAnimal }
{
}

bool Horse::isRideableAnimal() { return m_rideableAnimal; }


