//
//  Math.cpp
//  C++ Linker
//
//  Created by Elsy Fernandes on 6/6/20.
//  Copyright © 2020 Iam_El. All rights reserved.
//

// this is the new math.cpp
// it contain two functions but its not a main function it doesnt have main
// If i click run on this file it will get compiled corrrectly . witgout no error

// Now if i have ony this file without main file and try to build it we get an error (here linker comes into picture) - Link error 

#include "Math.hpp"

#include <iostream>  // 

void log(const char* message){
    std::cout<<message<<std::endl;
}


int Multiply(int a,int b){
    log("Multiply");
    return a*b;
}
