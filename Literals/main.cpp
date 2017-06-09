#include <iostream>
#include <sstream>
#include <ctgmath>
#include <limits>

// 1st.: Write a program to get a number and display it in dec oct hex val.


std::string displayHex(float val);
bool compareFloats(float first, float second);
int main() {
    float number;
    std::cout << "Please input a number! \r\n" << std::endl;
    std::cin >> number;

    if(std::cin.fail()){
        std::cout << "IO operation failed. Are you sure you are giving correct number ?? \r\n" << std::endl;
        return -1;
    }


    std::cout << "Decimal representation of given number : "<<std::dec << number << std::endl;
    std::cout << "Octal representation of  given (int)number : "<<std::oct << (int) number << std::endl;
    std::cout << "Hex representation of given number : "<< displayHex(number) << std::endl;


    return 0;
}
std::string displayHex(float val){

    int withoutFraction = (int)val;
    std::stringstream  stream;
    // This is is second part of assignment taskS

    if(compareFloats(val,withoutFraction)){
        // threre is no fractional part
        stream << std::hex << withoutFraction << std::endl;

    }
    else {
        // there is fractional part, using hexfloat
        stream << std::hexfloat << val << std::endl;
    }




    return stream.str();
}
// 2nd : Write a function to compare two numbers of float. Add unit tests to check if its right.
bool compareFloats(float first, float second){

    if(std::fabs(first-second) <= std::numeric_limits<float>::epsilon()){
        return true;

    }
        return false;


}