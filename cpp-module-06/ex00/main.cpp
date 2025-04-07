#include "ScalarConverter.hpp"


int main(int ac, char* av[])
{
    if (ac != 2)
    {
        std::cout << "Error: This program accepts only 1 argument!" << std::endl;
        return 1;
    }
    ScalarConverter::convert(av[1]);

/*     std::string charLiteral = "a";
    std::string intLiteral = "42";
    std::string floatLiteral = "42.0f";
    std::string doubleLiteral = "42.0";

    ScalarConverter::printLiterals(charLiteral, intLiteral, floatLiteral, doubleLiteral); */

    return 0;
}