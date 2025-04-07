#include "Iter.hpp"

int main(){
    int arr[] = {1, 2 ,3};
    printElement(arr);
    
    size_t length = sizeof(arr) / sizeof(arr[0]);
    iter(arr, length, printElement<int>);
    std::cout << std::endl;


    double dArr[] = {1.0, 1.2};
    printElement(dArr);

    size_t length1 = sizeof(dArr) / sizeof(dArr[0]);
    iter(dArr, length1, printElement<double>);
    std::cout << std::endl;
}