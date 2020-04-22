#include "AnimalOperator.h"

bool AnimalOperator::sortAnimalsByNameAscending(Animal &a1, Animal &a2) 
{
    return a1.getName() < a2.getName();
}

bool AnimalOperator::sortAnimalsByAgeAscending(Animal &a1, Animal &a2) 
{
    return a1.getAge() < a2.getAge();
}