#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::~ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &copy){
    *this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy){
    (void)copy;
    return (*this);
}

void ScalarConverter::convert(const std::string& literal){
    if (PseudoLiteralsForDouble(literal) || PseudoLiteralsForFloat(literal))
        return;
    if (!findType(literal))
        printLiterals("impossible", "impossible", "impossible", "impossible");
}

bool ScalarConverter::isInt(const std::string& literal){
    for (size_t i = 0; i < literal.size(); ++i) {
        if (isdigit(literal[i]) || ((literal[i] == '+' || literal[i] == '-') && i == 0))
        {
            if (i != 0)
                continue;
        }
        else
            return false;
    }
	if(IS_IN_INT_RANGE(atoll(literal.c_str()))){
		int inumber = atoi(literal.c_str());
		if(isascii(inumber)){
			if(isprint(inumber))
				std::cout << "char: '" << static_cast<char>(inumber) << "'" << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
		}
		else
			std::cout << "char: impossible" << std::endl;
        
		std::cout << "int: " << inumber << std::endl;
		std::cout << "float: " << static_cast<float>(inumber)<< ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(inumber) << ".0" << std::endl;
		return true;
	}
	return false;
}

bool ScalarConverter::isChar(const std::string &literal){
    if (literal.size() == 1 && std::isprint(literal[0]) && isascii(literal[0]) && !isdigit(literal[0])){
        char c = literal[0];
        std::cout << "char: '" << c << "'" <<  std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl; 
        return true;
    }
    return false;
}

bool ScalarConverter::isFloat(const std::string &literal){
    if (literal[literal.size() - 1] == 'f'){
        std::string numericPart = literal.substr(0, literal.size() - 1);
        float a = std::atof(numericPart.c_str());
        if (isascii(a)){
            if (isprint(a))
                std::cout << "char: '" << static_cast<char>(a) << "'" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
        }
        else
            std::cout << "char: impossible" << std::endl;

        long long tmp = a;

        if (IS_IN_INT_RANGE(tmp))
            std::cout << "int: " << static_cast<int>(tmp) << std::endl;
        else
            std::cout << "int: impossible" << std::endl;
        if (tmp - a != 0){
            std::cout << "float: " << a << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(a) << std::endl;
        }
        else{
            std::cout << "float: " << a << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(a) << ".0" << std::endl;
        }
        return true;
    }
    return false;
}

bool ScalarConverter::isDouble(const std::string &literal){
    double number = atof(literal.c_str());
    if (isascii(number)){
        if (isprint(number))
            std::cout << "char: '" << static_cast<char>(number) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }
    else
        std::cout << "char: impossible" << std::endl;
    long long tmp = number;

    if (IS_IN_INT_RANGE(tmp))
        std::cout << "int: " << static_cast<int>(number) << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
    
    if (tmp - number != 0){
        std::cout << "float: " << static_cast<float>(number) << std::endl;
        std::cout << "double: " << number << std::endl;
    }
    else{
        std::cout << "float: " << static_cast<float>(number) << ".0f" << std::endl;
        std::cout << "double: " << number << ".0" << std::endl;
    }
    return true;
}

void ScalarConverter::printLiterals(const std::string &_char, const std::string &_int, const std::string &_float, const std::string &_double){
    std::cout << "char: " << _char << std::endl;
    std::cout << "int: " << _int << std::endl;
    std::cout << "float: " << _float << std::endl;
    std::cout << "double: " << _double << std::endl;
}

int ScalarConverter::PseudoLiteralsForFloat(const std::string &literal){
    if (literal == "+inff" || literal == "-inff" || literal == "nanf" || literal == "inff"){
        printLiterals("impossible", "impossible", literal, literal.substr(0, literal.size() - 1));
        return 1;
    }
    return 0;
}

int ScalarConverter::PseudoLiteralsForDouble(const std::string &literal){
    if (literal == "+inf" || literal == "-inf" || literal == "nan" || literal == "inf"){
        printLiterals("impossible", "impossible", literal + "f", literal);
        return 1;
    }
    return 0;
}

int ScalarConverter::findType(const std::string& literal)
{
    if (isChar(literal))
        return 1;

    if (literal.find('.') != std::string::npos)
    {
        for (size_t i = 0; i < literal.find('.'); ++i) {
            if ((i == 0 && (literal[0] == '+' || literal[0] == '-')) || isdigit(literal[i]))
                continue;
            else
                return 0;
        }
        for (size_t i = literal.find('.') + 1; i < literal.size() ; ++i) {
            if ((i == literal.size() - 1 && literal[i] == 'f') || isdigit(literal[i]))
                continue;
            else
                return 0;
        }
        if (isFloat(literal) || isDouble(literal))
            return 1;
    }
    else if (isInt(literal))
        return 1;

    return 0;
}
