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
};


#endif //CLASS_5_POINT_SIMPLECLASS_H
