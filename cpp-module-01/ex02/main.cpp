#include <iostream>

int main()
{
    std::string stringA = "HI THIS IS BRAIN";
    std::string *stringPtr = &stringA;
    std::string &stringREF = stringA;
    
    std::cout << "  Addresses:" << std::endl;
    std::cout << &stringA << std::endl;
    std::cout << stringPtr << std::endl;
    std::cout << &stringREF << std::endl;
    
    std::cout << "  Values:" << std::endl;
    std::cout << stringA << std::endl;
    std::cout << *stringPtr << std::endl;
    std::cout << stringREF << std::endl;
}