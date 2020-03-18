//
//  Dog.hpp
//  Makefiles
//
//  Created by Josh Blatt on 2020-03-17.
//  Copyright © 2020 Josh Blatt. All rights reserved.
//

#include <stdio.h>
#include "Animal.h"

class Dog : public Animal
{
public:
    Dog();
    void bark();
    void cuddle();
};
