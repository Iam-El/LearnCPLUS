//
//  main.cpp
//  Header_Files
//
//  Created by Elsy Fernandes on 6/7/20.
//  Copyright © 2020 Iam_El. All rights reserved.
//

// header files are useful when you have multiple .cpp files and you  have functions to be re used and you dont want to write the declarations again and again
// Header files declare certain type of functions . its the place to store the declaration to tell the .cpp files these functions exists


// some include stements use <> and some use "" ? whats the difference?

//For #include "filename" the preprocessor searches in the same directory as the file containing the directive. This method is normally used to include programmer-defined header files.

//For #include <filename> the preprocessor searches in an implementation dependent manner, normally in search directories pre-designated by the compiler/IDE. This method is normally used to include standard library header files.

//You’re probably curious why we use angled brackets for iostream, and double quotes for add.h. The answer is that angled brackets are used to tell the preprocessor that we are including a header file that was included with the compiler, so it should look for that header file in the system directories. The double-quotes tell the preprocessor that this is a user-defined header file we are supplying, so it should look for that header file in the current directory containing our source code first. If it doesn’t find the header file there, it will check any other include paths that you’ve specified as part of your compiler/IDE settings. That failing, it will fall back to checking the system directories.

#include <iostream>
#include "Log.h"
void Log(const char* message){
    std::cout<<message<<'\n';
}
int main() {
    // insert code here...
    std::cout << "Hello, World!\n";
    InitLog();
    return 0;
}
