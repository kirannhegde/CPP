#include "Animal.h"
#include "AnimalOperator.h"
#include "Horse.h"
#include "Zebra.h"
#include "Zebroid.h"
#include <iostream>
#include <string>
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <map>
#include <iterator>

using namespace std;

int main()
{
	//Vector to store the list of Animals
    vector<Animal> animalList;
    
    //Initializing the horses
    Horse horse;
    string horse_names[] = {"Hanni", "Holger", "Hennes", "Hans"};
    int horse_ages[] = {7, 3, 2, 11};
    for(int i = 0; i < sizeof(horse_ages)/sizeof(int); i++)
    {
        horse.setName(horse_names[i]);
        horse.setAge(horse_ages[i]);        
        animalList.push_back(horse);
    }

    //Initializing the Zebras
    Zebra zebra;
    string zebra_names[] = {"Alex", "Anke", "Ann"};
    int zebra_ages[] = {3, 8, 5};
    for(int i = 0; i < sizeof(zebra_ages)/sizeof(int); i++)
    {
        zebra.setName(zebra_names[i]);
        zebra.setAge(zebra_ages[i]);        
        animalList.push_back(zebra);
    }

    //Initializing the Zebroids
    Zebroid zebroid;
    string zebroid_names[] = {"Otto", "Olga"};
    int zebroid_ages[] = {2, 2};
    for(int i = 0; i < sizeof(zebroid_ages)/sizeof(int); i++)
    {
        zebroid.setName(zebroid_names[i]);
        zebroid.setAge(zebroid_ages[i]);        
        animalList.push_back(zebroid);
    }
    
    //Sort and print the animals by name
    std:cout << "Animals ordered lexicographically by name:" << "\n";
    std::sort(animalList.begin(), animalList.end(), AnimalOperator::sortAnimalsByNameAscending);
    for(std::vector<Animal>::iterator it = animalList.begin(); it!=animalList.end(); it++)
	    std::cout << (*it).getName() << ",";

    //Sort and print animals by their ages.
    std::cout << "\nAnimals ordered by age:\n";
    std::sort(animalList.begin(), animalList.end(), AnimalOperator::sortAnimalsByAgeAscending);
    for(std::vector<Animal>::iterator it = animalList.begin(); it!=animalList.end(); it++)
	    std::cout << (*it).getName() << ",";
        

    //Print all horses followed by zebras followed by zebroids
    //Construct a map with key being the name of the animal and value being the vector for each type of animal
    //Ex: {"horses":"horse objects","zebras":"zebra objects","zebroids":"zebroid objectsr"}    

    return 0;
}