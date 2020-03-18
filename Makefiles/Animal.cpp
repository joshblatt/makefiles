//
//  Animal.cpp
//  Makefiles
//
//  Created by Josh Blatt on 2020-03-17.
//  Copyright © 2020 Josh Blatt. All rights reserved.
//

#include "Animal.h"

Animal::Animal()
{
    name = "Default";
    age = 0;
    weight = 0;
    height = 0;
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
int Animal::getHeight()
{
    return height;
}
void Animal::setHeight(int newHeight)
{
    height = newHeight;
}

int Animal::getWeight()
{
    return weight;
}
void Animal::setWeight(int newWeight)
{
    weight = newWeight;
}
