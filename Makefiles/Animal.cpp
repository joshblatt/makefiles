//
//  Animal.cpp
//  Makefiles
//
//  Created by Josh Blatt on 2020-03-17.
//  Copyright © 2020 Josh Blatt. All rights reserved.
//

#include "Animal.hpp"

Animal::Animal()
{
    name = "Default";
    age = 0;
}
std::string Animal::getName()
{
    return name;
}
void Animal::setName(std::string newName)
{
    name = newName;
}
int Animal::getAge()
{
    return age;
}
void Animal::setAge(int newAge)
{
    age = newAge;
}
