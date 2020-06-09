//
//  main.cpp
//  static_in class and struct
//
//  Created by Elsy Fernandes on 6/9/20.
//  Copyright © 2020 Iam_El. All rights reserved.
//

// there is only one static variable through all the instnaces of the class
// static members for all the instances pointing to same memory

// if you want to one variable shared across all the istances->thats why static


#include <iostream>

struct Entity{
    static int x;
    static int y;
    
    static void Print(){
        std::cout<<x<<' '<<y<<'\n';
    }
};

int Entity::x; // static members defined by struct itself not its instances and its always defined outsie the function
int Entity::y;

int main() {
    // insert code here...
    
    
    Entity e;
//    e.x=2; // you can do this when its not static
//    e.y=4;
//
    
    Entity::x=2;
    Entity::y=4;
//    Entity e1={5,8};// you can also give variable values in struct.
    Entity e1;
//    e1.x=5; // you are not supposed to refer them by the instances because they are static
    // they are refered by the Entity struct itself
    
//    e1.y=8;
    
    Entity::x=5;
    Entity::y=8;
    
    // static methods cannot access not static variable
    Entity::Print();
    Entity::Print();
    
    
    
    
    return 0;
}
