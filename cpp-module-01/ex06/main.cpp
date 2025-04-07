#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Harl harl;

        std::string input = av[1];

        if (input == "DEBUG")
            harl.complain(input);
        else if (input == "INFO")
            harl.complain(input);
        else if (input == "WARNING")
            harl.complain(input);
        else if (input == "ERROR")
            harl.complain(input);
        else
            harl.complain(input);

    }
    else
        std::cout << "Enter a level." << std::endl;
}