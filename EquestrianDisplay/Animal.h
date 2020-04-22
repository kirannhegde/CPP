#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>    
using namespace std;

class Animal 
{
    private:
        string m_name;
        int m_age;

    public:
        Animal(const string& name = "", const int age = 0);
        
        string getName();
        void setName(string name);
        
        int getAge();
        void setAge(int age);
};

#endif