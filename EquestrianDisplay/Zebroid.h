#ifndef ZEBROID_H
#define ZEBROID_H

#include "Horse.h"
#include "Zebra.h"

class Zebroid : public Horse, public Zebra 
{
    
    public:
        Zebroid(const string& name = "", const int age = 0, 
                const bool hasStripes = true, const bool rideableAnimal = true);
        
};

#endif