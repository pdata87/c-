#include <iostream>
#include "SimpleClass.h"


int main() {

    std::string str("test");

    SimpleClass test1(1,"test1",20.2);
    SimpleClass test2(1,"test2",20.2);
    SimpleClass test3 = test1;
    test2=test3;

    if(test3 == test1){
        std:: cout << "objects are equal" << std::endl;
    }

    std::cout << test3 << std::endl;


    return 0;
}