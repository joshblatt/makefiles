//
//  Dog.cpp
//  Makefiles
//
//  Created by Josh Blatt on 2020-03-17.
//  Copyright © 2020 Josh Blatt. All rights reserved.
//

#include "Dog.h"
#include <iostream>

Dog::Dog()
{
    
}
void Dog::bark()
{
    std::cout << "Woof!" << "\n";
}
void Dog::cuddle()
{
    std::cout << name << " is cuddling you!" << "\n";
}
