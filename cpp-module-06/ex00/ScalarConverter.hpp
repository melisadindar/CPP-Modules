#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>

#define IS_IN_INT_RANGE(value) ((value >= -2147483647 - 1) && (value <= 2147483647))


class ScalarConverter {
    private:
        ScalarConverter();
    public:
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &copy);
        static void convert(const std::string &literal);
        static void printLiterals(const std::string &_char, 
            const std::string &_int, const std::string &_float, const std::string &_double);
        static int PseudoLiteralsForFloat(const std::string &literal);
        static int PseudoLiteralsForDouble(const std::string &literal);
        static int findType(const std::string& literal);

        static bool isInt(const std::string& literal);
        static bool isChar(const std::string &literal);
        static bool isFloat(const std::string &literal);
        static bool isDouble(const std::string &literal);

};

#endif