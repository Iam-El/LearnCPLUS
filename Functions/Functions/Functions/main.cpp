//
//  main.cpp
//  Functions
//
//  Created by Elsy Fernandes on 6/6/20.
//  Copyright © 2020 Iam_El. All rights reserved.
//


// Note - Nested functions not supported in C++
// return 0 in main means program exceuted successfully
/* you can also include
 
 int main()
 {
     return EXIT_SUCCESS;
 }
 
 
 */

// you will get a linker error when same functions are defined in two different files
// when you compile the two programs seperately we wont be getting error but when you try to build the whole program we will be getting error

/*Most naming collisions occur in two cases:
1) Two (or more) definitions for a function (or global variable) are introduced into separate files that are compiled into the same program. This will result in a linker error, as shown above.
2) Two (or more) definitions for a function (or global variable) are introduced into the same file (often via an #include). This will result in a compiler error.
 
*/

// namespace - >
/* try this program:-

 #include <iostream> // imports the declaration of std::cout
 using namespace std; // makes std::cout accessible as "cout"
 int cout() // declares our own "cout" function
 {
     return 5;
 }
 int main()
 {
     cout << "Hello, world!"; // Compile error!  Which cout do we want here?  The one in the std namespace or the one we defined above?
     return 0;
 }
 */

#include <iostream>

int multiply(int a,int b){ // function parameters
    
    return a*b;
}

//int multiply(int a,int b){ // function parameters
//
//    return a*b;
//}

int main() {
    // insert code here...
    
    std::cout<<multiply(5,8)<<'\n'; //function arguments
    return 0;
}

