#include <iostream>
#include <array>
#include <algorithm>
#include <vector>

void revert_array(std::array<int,20> & arr);

std::ostream&  operator <<(std::ostream& stream, const std::array<int,20>& arr) {

   for(int elem : arr){
       stream << elem;

   }
    return  stream;
}
// 1 .Write a program to concatenate two tables.
int main() {
    std::array<int,10> firstArray {1,2,3,4,5,6,7,8,9,0};
    std::array<int,10> secondArray {0,0,0,0,0,0,0,0,0,0};
    std::array<int,20> mergedArray;


    std::merge(firstArray.begin(),firstArray.end(),secondArray.begin(),secondArray.end(),mergedArray.begin());
    std::cout <<"Before reverse "<< mergedArray << std::endl; ;
    revert_array(mergedArray);


        std::cout << "After reverse "<< mergedArray << std::endl;


    return 0;
}
///Write a program to revert values from an array.

void revert_array(std::array<int,20> & arr){
        std::reverse(arr.begin(),arr.end());
}