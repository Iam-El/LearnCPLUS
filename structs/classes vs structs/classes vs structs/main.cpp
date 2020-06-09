//
//  main.cpp
//  classes vs structs
//
//  Created by Elsy Fernandes on 6/9/20.
//  Copyright © 2020 Iam_El. All rights reserved.
//


// difference between struct and classes

// they are similar
// class had it members private (if you dont modify any visibilty)
// members of class are public


// how we migt be defining the difference between those two?
// why struct exist in c++ -> because of the backward compatibility maintains with c thats why

// when do i use ? struct and class?

// struct -> when i m talking about structure just represent variable
//mathematical verctor class -> not massive amout of functionality
// we use class -> if there are many functionality
// never use inheritence with struct


// just a small implementation of struct for practice

// arrays in c++ carry a data of similar datatypes
// structures in c++ are carrying a data of different data types
//Unlike Arrays, Structures in C++ are user defined data types which are used to store group of items of non-similar data types.





#include <iostream>

struct Student{
    // these are  member variables in structure
    std::string name;
    int age;
    char grade;
    int id[5];
    // you can write member functions here
    
    void print(){
        std::cout<<name<<' '<<'\n';
        std::cout<<age<<' '<<'\n';
        std::cout<<grade<<' '<<'\n';
        std::cout<<id<<' '<<'\n';
    }
    
    
};
int main() {
    // insert code here...
    Student student;
    student.name="elsy";
    std::cout<<student.name;
    std::cout<<student.id;
    
    
    // create a structure
    return 0;
}
