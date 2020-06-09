//
//  main.cpp
//  operators
//
//  Created by Elsy Fernandes on 6/7/20.
//  Copyright © 2020 Iam_El. All rights reserved.
//

// operator +,- etc operands are literals
// pemdas rule -> for operator precedence

// unary operators ->+ /- -> takes only one operand
// Binary arithmatic operators -> acts on two operands


// static_cast<> -> divide two intergers without losing its fraction
//The modulus operator can also work with negative operands. As of C++11, x % y always returns results with the sign of x.

/*
// we have pre increment/decrement and post increment/decrement

 #include <cmath>
  
 double x{ std::pow(3.0, 4.0) }; // 3 to the 4th power
 */

/*
 The most common method of doing floating point equality involves using a function that looks to see if two numbers are almost the same. If they are “close enough”, then we call them equal. The value used to represent “close enough” is traditionally called epsilon. Epsilon is generally defined as a small positive number (e.g. 0.00000001, sometimes written 1e-8).

 New developers often try to write their own “close enough” function like this:

 #include <cmath> // for std::abs()
  
 // epsilon is an absolute value
 bool isAlmostEqual(double a, double b, double epsilon)
 {
     // if the distance between a and b is less than epsilon, then a and b are "close enough"
     return std::abs(a - b) <= epsilon;
 }
 */


#include <iostream>

int main() {
    // insert code here...
    int x{ 7 };
    int y{ 4 };

    std::cout << "int / int = " << x / y << '\n';
    std::cout << "double / int = " << static_cast<double>(x) / y << '\n';
    std::cout << "int / double = " << x / static_cast<double>(y) << '\n';
    std::cout << "double / double = " << static_cast<double>(x) / static_cast<double>(y) << '\n';
    return 0;
}
