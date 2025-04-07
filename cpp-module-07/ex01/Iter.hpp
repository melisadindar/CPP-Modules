#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void printElement(T x) {
    std::cout << x << " ";
}

template <typename T, typename Func>
void iter(T* arr, size_t length, Func func){
    for (size_t i = 0; i < length; i++){
        func(arr[i]);
    }
}


#endif