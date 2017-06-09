#include <iostream>
#include <cstring>
#include <algorithm>
std::string reverse_string(const char  * stringToReverse);


/* 1st part -  Write a program to copy a string as a const char* and std::string into another one. */

int main() {
    // String copying in C Style
    const char * testStringCPtr = "This is test string";
    char * copyOfTestString = (char *)malloc(sizeof(char) * strlen(testStringCPtr));
    strcpy(copyOfTestString,testStringCPtr);

    std::cout<< "string copied in C Style :" << copyOfTestString << std::endl;
    free(copyOfTestString);


    // Now C++ style
    std::string test_string("this is another string to copy now in c++ style "); // create string from char * , also could be testStringCPtr here
    std::string copy = test_string;

    std::cout<< "string copied in C++ Style :" << copy << std::endl;
    std:: cout << reverse_string("This is a string to reverse") <<std::endl;

    return 0;
}

/* 2nd part - REVERSE STRING
 * Write a program to revert a string (const char*, std::string) */

std::string reverse_string(const char  * stringToReverse){
    std::string reversed(stringToReverse);
    std::reverse(reversed.begin(),reversed.end());
    return reversed;
}