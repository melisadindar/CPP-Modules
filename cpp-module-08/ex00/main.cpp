#include "easyfind.hpp"

int main(){
    std::vector<int> container;
    container.push_back(1);
    container.push_back(2);
    container.push_back(3);
    container.push_back(4);
    container.push_back(5);
    container.push_back(6);

    try{
        int index = easyfind(container, 3);
        std::cout << "Value found at index: " << index << std::endl;
    }catch(const std::exception& e){
        std::cout << e.what() << std::endl;
    }

    try{
        int index = easyfind(container, 7);
        std::cout << "Value found at index: " << index << std::endl;
    }
    catch(const std::exception& e){
        std::cout << e.what() << std::endl;
    }

}