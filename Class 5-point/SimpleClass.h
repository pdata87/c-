//
// Created by pdata on 09.06.17.
//
#include <iostream>
#ifndef CLASS_5_POINT_SIMPLECLASS_H
#define CLASS_5_POINT_SIMPLECLASS_H


class SimpleClass {

    int integerValue;
    std::string stringValue;
    double doubleValue;

public:

    bool operator == (const SimpleClass &ref);
    SimpleClass & operator = (const SimpleClass &ref);

    SimpleClass(const SimpleClass & ref); // copying

    ~SimpleClass();


    SimpleClass(int int_value, std::string string_value, double double_value);
    SimpleClass();

    //getters

     const std::string getString();
};
std::ostream & operator << (std::ostream & stream, const SimpleClass & simple);

#endif //CLASS_5_POINT_SIMPLECLASS_H
