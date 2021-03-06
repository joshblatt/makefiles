//
//  Animal.hpp
//  Makefiles
//
//  Created by Josh Blatt on 2020-03-17.
//  Copyright © 2020 Josh Blatt. All rights reserved.
//
#include <stdio.h>
#include <string>
#pragma once

class Animal
{
private:
    std::string name;
    int age;
    int height;
    int weight;
public:
    Animal();
    std::string getName();
    void setName(std::string newName);
    int getAge();
    void setAge(int newAge);
    int getHeight();
    void setHeight(int newHeight);
    int getWeight();
    void setWeight(int newWeight);
    friend class Dog;
};
