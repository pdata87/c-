#include <iostream>
#include <array>
#include <algorithm>
#include <vector>
#include <cstring>

void revert_array(std::array<int,20> & arr);
int *mergeTwoArrays(int *first, int *second, int numOfElements);
std::ostream&  operator <<(std::ostream& stream, const std::array<int,20>& arr) {

   for(int elem : arr){
       stream << elem;

   }
    return  stream;
}
// 1 .Write a program to concatenate two tables.
int main() {

    //C array style

    int firstCarray[10] = { 5, 5, 5, 5, 5, 5, 5, 5, 5, 5 };
    int secondCarray[10] = { 6, 6, 6, 6, 6, 6, 6, 6, 6, 6 };
    int numOfElements = sizeof(firstCarray)/sizeof(int) +  sizeof(firstCarray)/sizeof(int);
    int * output = mergeTwoArrays(firstCarray, secondCarray, numOfElements);



    for(int i =0; i<numOfElements;i++) {std::cout << output[i] << std::endl;};


    // C++ Style
    std:: cout <<  "C++ Implementation - merge and reverse " <<std:: endl;

    std::array<int,10> firstArray {1,2,3,4,5,6,7,8,9,0};
    std::array<int,10> secondArray {0,0,0,0,0,0,0,0,0,0};
    std::array<int,20> mergedArray;


    std::merge(firstArray.begin(),firstArray.end(),secondArray.begin(),secondArray.end(),mergedArray.begin());
    std::cout <<"Before reverse "<< mergedArray << std::endl; ;

    // Passing by reference
    revert_array(mergedArray);


        std::cout << "After reverse "<< mergedArray << std::endl;


    return 0;
}
///Write a program to revert values from an array.

void revert_array(std::array<int,20> & arr){
        std::reverse(arr.begin(),arr.end());
}


int * mergeTwoArrays(int *first, int *second, int numOfElements) {

    int elements_in_each_array = numOfElements/2;

    int * outputArray = (int*)malloc(numOfElements * sizeof(int));

        std::memcpy(&outputArray[0],first,elements_in_each_array * sizeof(int));
        std::memcpy(&outputArray[elements_in_each_array],second,elements_in_each_array* sizeof(int));

    return outputArray;

}


