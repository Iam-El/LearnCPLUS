//
//  main.cpp
//  references
//
//  Created by Elsy Fernandes on 6/8/20.
//  Copyright © 2020 Iam_El. All rights reserved.
//

// refernces -> reference existing variable
// refrence -> refer existing variable-> they dont have variable

// now lets write a function to increment integer



#include <iostream>

void Increment(int& value){
    value=value+1;
}

int main() {
    
    int a =5;
    int var1=5;
    int var2=6;
    
    int* ref=&var1;
    ref=&var2;
    
    std::cout << *ref; 
    
//    int& ref=a;    // its a part of type in reference
    // we create a alias .. its not a variable its just areference it doesnt have a moemoy . its only in our source code. alias
//    ref=2;
    
    
    
//    std::cout << a; // we set 2 to a
    
    // after using the increment function and print the value of a
//    Increment(a);
//    std::cout << a;
    // in this case increment function has only value not reference
    /*
     void Increment(int value){
         value++;
     }
     we get answer 2
     */
    
    // if you want to incerement the value of a itself the pass the value by reference
//    Increment(&a);
//    std::cout << a;
    
    /*
     void Increment(int* value){
         *value=*value+1;
     }
     */
    
    
    // above code is same as
//    Increment(a);
//    std::cout << a;
    
    /*   void Increment(int& value){
            value=value+1;
        }*/
    return 0;
}


// pointers are more useful and powerful
// if you have two variables int a=8
//a=5
// int b=8
// int& ref=a;
// ref=b
//a=8 , b=8
// you need to assign a value when you declare a reference
 
