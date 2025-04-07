#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

template<typename T>
int easyfind(const T& container, int value){
    typename T::const_iterator it = std::find(container.begin(), container.end(), value);

        if (it != container.end())
            return std::distance(container.begin(), it);
        else
            throw std::runtime_error("Value not found in container");
}

#endif