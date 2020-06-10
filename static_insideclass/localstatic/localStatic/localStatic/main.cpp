//
//  main.cpp
//  localStatic
//
//  Created by Elsy Fernandes on 6/9/20.
//  Copyright © 2020 Iam_El. All rights reserved.
//


//variable which is declared inside the function will have a access only within the function
// static local variable will declare a variable its available its lifetime anywhere but scope within the function
// anything inside the fuction can access that variable but its lifetime is throughout the program

//A static local variable exists only inside a function where it is declared (similar to a local variable) but its lifetime starts when the function is called and ends only when the program ends.


// lets see the example

// singleton class has only one instance.

#include <iostream>


void Function(){
    static int i=0; // if i dont make the variable static output of the function would be 1 everytime i run the function.test it removing the static keyword static int i =0;
    
    // if you make the variable static it looks as if you defined the variable outside the function.
    // so if you dont want to give everyone the chance to change the variable. ist only local to the scope
    i++;
    std::cout<<i;
}
int main() {
    
    Function();
    Function();
    Function();
    return 0;
}
