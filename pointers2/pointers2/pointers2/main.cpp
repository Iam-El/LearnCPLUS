//
//  main.cpp
//  pointers2
//
//  Created by Elsy Fernandes on 6/8/20.
//  Copyright © 2020 Iam_El. All rights reserved.
//

// most imporatant
// pointers -managing and manipulating memory
// pointer is a integer/ number stores memory address
// pointer is the address that tells us where the byte is
// pointer is a address
// types has nothing to do with pointer( meaningless when it comes to pointer)
// void means typeless->this is only for syntax- type is not changed->

//


#include <iostream>

int main() {
    // insert code here...
//    void* ptr=0; // not a valid memory address.cannot read or write from 0 memory address. 0 means null. same as void* ptr=Null
    int var=8; // if i want to find out memory addreess of var . i use &.
    
//    void* ptr=&var; // if i change int not going to be any different its the same
//    double* ptr=double(&var;)
    
    // now if i want to change the value of 8
//    void* ptr=&var;
//    *ptr=10; // defreencing . now we get error because we have defined the pointer to be void
    
    
    int* ptr=&var;
    *ptr=10; // writing to that space at that memory address
    std::cout << var;
    
    // in thses cases we are storing memory in stack
    
    char* buffer=new char[8] ;// i am asking 8 byte of memory returing the pointer tothe beginning of character
    memset(buffer,0,8); // pointer , what value and how many bytes
    // if we allocate using heap then we should be deleting delete[] buffer
    
    
    char** ptr1=&buffer;
    return 0;
}
