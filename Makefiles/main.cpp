//
//  main.cpp
//  Makefiles
//
//  Created by Josh Blatt on 2020-03-17.
//  Copyright © 2020 Josh Blatt. All rights reserved.
//

#include <iostream>
#include "Animal.h"

int main(int argc, const char * argv[])
{
    
    Animal jimmy;
    jimmy.setName("Jimmy");
    jimmy.setAge(50);
    jimmy.setWeight(500);
    jimmy.setHeight(100);
    
    std::cout << "Name " << jimmy.getName() << "\n";
    std::cout << "Age " << jimmy.getAge() << "\n";
    std::cout << "Weight " << jimmy.getWeight() << "\n";
    std::cout << "Height " << jimmy.getHeight() << "\n";
    
    return 0;
}
