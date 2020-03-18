//
//  Animal.hpp
//  Makefiles
//
//  Created by Josh Blatt on 2020-03-17.
//  Copyright © 2020 Josh Blatt. All rights reserved.
//
#include <stdio.h>
#include <string>

class Animal
{
private:
    std::string name;
    int age;
public:
    Animal();
    std::string getName();
    void setName(std::string newName);
    int getAge();
    void setAge(int newAge);
};
