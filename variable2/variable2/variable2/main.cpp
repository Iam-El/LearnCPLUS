//
//  main.cpp
//  variable2
//
//  Created by Elsy Fernandes on 6/6/20.
//  Copyright © 2020 Iam_El. All rights reserved.
//


// types of initialization of variables
// int width=5; -> copy initialization
// int width(5) -> direct initialization ->cannot be used for all the types
// copy and direct are same

// brace initialization introduced in c++ 11

// 2 forms
//int width{ 5 }; // direct brace initialization of value 5 into variable width (preferred)
//int height = { 6 }; // copy brace initialization of value 6 into variable height

// zero initialization
//int width{};

/*
 
 Q: When should I initialize with { 0 } vs {}?
 
 Use an explicit initialization value if you’re actually using that value.
 int x { 0 }; // explicit initialization to value 0
 std::cout << x; // we're using that zero value
 
 Use zero initialization if the value is temporary and will be replaced.
 int x{}; // zero initialization
 std::cin >> x; // we're immediately replacing that value
 
 
 */


#include <iostream>

int main() {
    int a{5};
    // insert code here...
    std::cout << a;
    return 0;
}
