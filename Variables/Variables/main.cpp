//
//  main.cpp
//  Variables
//
//  Created by Elsy Fernandes on 6/6/20.
//  Copyright © 2020 Iam_El. All rights reserved.
//

// int datatype - 4 bytes - between -2billion to +billion(but size again depends on the compiler)-signed interger
// 1 byte - 8 bit , 4 byte- 32bits . since integer is signed 1 of the bit is for positive or negative sign. remaining 31 bit is left for the number( 2 to the power 31 -> thats the mximum number can be stored with an integer)
// unsigned number - thats always positive you can make one by using a keyword unsigned
// unsigned int variable =54 only 32 bit to play with here you dont need 2 to the power 32->4,294,967,296

// other types of datatype
// char = 1 byte , short - 2 bytes , int- 4 bytes ,long - 4 bytes , long long- 8 bytes
// you can have unsigned to any of these

///character
// char for storing numbers and characters . character that we type is just a number.
// whatever we give in to char its only going to give us the character
/*
 
 char variable='A';
    char variable2=65;
    std::cout << variable<<'\n';
    std::cout<<variable2<<'\n';
    return 0;
 
 */

// decimal value - float , double
// float -4 bytes
// float varialble=5.5 - > this is not float. this is double . so append f/F.
// double - 8 byte
// double variable1=5.5


// bool - boolean - True or false -> print outs 1 or 0
// any number is ->1 0 is ->false
// bool - 1 byte -> it does take 1 bit
// usually bool takes only 1 bit but we address it as 1 byte because in memory we address a memory as byte not bit

// check the size of datatype
//sizeof(bool)

//pointers -int*
// reference ->&

#include <iostream>

int main() {
    // insert code here...
    char variable='A';
    char variable2=65;
    std::cout << variable<<'\n';
    std::cout<<variable2<<'\n';
    return 0;
}
