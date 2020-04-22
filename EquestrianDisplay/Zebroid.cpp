#include "Zebroid.h"

Zebroid::Zebroid(const string& name, const int age, const bool hasStripes, const bool rideableAnimal) 
            : Animal(name,age),
              Zebra{ name, age, hasStripes }, 
              Horse{name, age, rideableAnimal}
{
}




