//
//  main.cpp
//  static_variable
//
//  Created by Elsy Fernandes on 6/9/20.
//  Copyright © 2020 Iam_El. All rights reserved.
//



// whats static->
// 2 meaning - ouside the class / inside the class

// outside the class -> if you define a member variable to be static that is goig toe be visible toonly that translation unit

// inside the class -> that variable share memory with all the instances of the class . you can access the struct variable without the object but directly by the class -> one instance of static to all the instance.


// lets fcus on outside the class first

// create a gobal variable in one program and create a same variable in another file . try to run the program you get linking error .you cannot have two global variables of same name. // duplicate variable error

// now make the variable static in the log.cpp file . it works fine

// one way to fix this is to make this variable in the main file as extern -> to say that its refering tothe external variable. and also remove the assignment( extrern int var1;)

// now if you make the variable from log file as a static you are making it private and you are using extern to refer to the external variable.in this case you are going to get an error.

// same goes with the function


// when you declare the static varaible as declared as static its going to be used only for that translation unit



#include <iostream>

extern int var1;  // create a gobal variable

extern void testFuction(){
    
}
int main() {
    
    std::cout << var1;
    return 0;
}
