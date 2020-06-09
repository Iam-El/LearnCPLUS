//
//  main.cpp
//  static2_insideclass
//
//  Created by Elsy Fernandes on 6/9/20.
//  Copyright © 2020 Iam_El. All rights reserved.
//


// this lecture on static methods cannot access non static variables

// now lets make the member function as static then when we compile the code we will be gettig the error
// because we cant access . you dont know which entity x and y instance you are trying to access.

#include <iostream>

struct Entity{
    int x,y;
    static void print(){
        std::cout<<x<<' '<<y<<std::endl;
        
    }
};
int main() {
    Entity e;
    e.x=5;
    e.y=10;
    
    Entity e1;
    e1.x=15;
    e1.y=20;
    return 0;
}
