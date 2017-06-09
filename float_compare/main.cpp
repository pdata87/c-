#include <iostream>
#include <limits>
#include <ctgmath>
#include <string>
#include <algorithm>

bool are_floats_equal(float first, float second);
void test (bool result, bool check);
std::string reverse_string(const  char * chars_to_reverse);

int main() {


    std::cout << "Hello, World!" << std::endl;
    float first_float;
    float second_float;

    std:: cout << "Please give me first float value" << std::endl;
    std:: cin  >> first_float;

    std:: cout << "Please give me second float value" << std::endl;
    std:: cin  >> second_float;

    are_floats_equal(first_float,second_float);

    std :: cout << reverse_string("Łódź") << std:: endl;

    return 0;
}
bool are_floats_equal(float first, float second){

    if(std::fabs(first-second) <= std::numeric_limits<float>::epsilon()){
               return true;
    }

    return false;


}

void test(bool function_output, bool check){

}

std::string reverse_string (const char * chars_to_reverse){

    std::string reversed_string(chars_to_reverse);
    std::reverse(reversed_string.begin(),reversed_string.end());

    return std:: reversed_string;

}