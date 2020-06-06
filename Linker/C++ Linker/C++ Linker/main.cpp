//
//  main.cpp
//  C++ Linker
//
//  Created by Elsy Fernandes on 6/6/20.
//  Copyright © 2020 Iam_El. All rights reserved.
//

#include <iostream>
//#include "Math.cpp" //1) if you put only #include it wont work .since its not an header file
// you should be using the decarations . now comment it out and put the declarations

void log(const char* message); //2 provide the declarations if its in different file
int Multiply(int a,int b);

void anotherPrint(const char* message){
    std::cout<<message;
}


int main() {

    std::cout << "Hello, World!\n";
    std::cout<<Multiply(5,10);
    log("finished");
//    anotherPrint("value");
    return 0;
}
