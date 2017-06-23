//
// Created by pdata on 09.06.17.
//

#include <ctgmath>
#include <limits>
#include "SimpleClass.h"

SimpleClass::SimpleClass(int int_value, std::string string_value, double double_value) : integerValue(int_value),stringValue(string_value),doubleValue(double_value) {

}

SimpleClass::~SimpleClass() {

}

SimpleClass & SimpleClass::operator=(const SimpleClass &ref) {
    integerValue = ref.integerValue;
    stringValue = ref.stringValue;
    doubleValue = ref.doubleValue;
    return *this;
}

bool SimpleClass::operator==(const SimpleClass &ref) {

    return integerValue == ref.integerValue && stringValue == ref.stringValue && std::fabs(ref.doubleValue-doubleValue) <= std::numeric_limits<double>::epsilon();

}

SimpleClass::SimpleClass(const SimpleClass &ref) {
    doubleValue = ref.doubleValue;
    stringValue= ref.stringValue;
    integerValue = ref.integerValue;
}

SimpleClass::SimpleClass() {

}

 const std::string SimpleClass::getString() {
    return stringValue;
}

std::ostream &operator<<(std::ostream &stream, const SimpleClass &simple) {
    stream << simple.getString();
    return  stream;
}
