#include "Animal.h"

Animal::Animal(const string& name, const int age) : m_name{name}, m_age{age}
{
}

string Animal::getName() { return m_name; }
void Animal::setName(string name) { m_name = name; }

int Animal::getAge() { return m_age; }
void Animal::setAge(int age) { m_age = age; }



