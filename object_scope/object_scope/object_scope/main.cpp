//
//  main.cpp
//  object_scope
//
//  Created by Elsy Fernandes on 6/8/20.
//  Copyright © 2020 Iam_El. All rights reserved.
//


//Local variables have automatic storage duration

//A variable’s storage duration (usually just called duration) determines what rules govern when and how a variable will be created and destroyed. In most cases, a variable’s storage duration directly determines its lifetime.

//For example, local variables have automatic storage duration, which means they are created at the point of definition and destroyed at the end of the block they are defined in. For example:

// variables have block scope



#include <iostream>

int main() {
    // insert code here...
    int y=10;
    {
        int y=15;
        std::cout << y;
    }
    std::cout << y;
    return 0;
}
