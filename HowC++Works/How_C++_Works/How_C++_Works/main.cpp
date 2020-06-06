//
//  main.cpp
//  How_C++_Works
//
//  Created by Elsy Fernandes on 6/5/20.
//  Copyright © 2020 Iam_El. All rights reserved.
//

#include <iostream>

// create a function here to print the message

void Log(const char* message){
    std::cout<<message<<'\n';
}

int main() {
    // insert code here...
    // call funtion Log
    Log("Elsy Test");
    
    return 0;
}


// What if Log function was in different file . How would you make it run here
// if you do not have the function definition and you try to call the function it throws an error 
// try commenting out function definition
//
