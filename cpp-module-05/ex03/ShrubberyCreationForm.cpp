#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation", 145, 137), target("Default"){
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation", 145, 137), target(target){
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm("Shrubbery Creation", 145, 137){
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy){
    this->target = copy.target;
    return *this;
}

void ShrubberyCreationForm::specificExecute()const{
    std::ofstream o((target + "_shrubbery"). c_str());


    o << "                                                         .\n";
    o << "                                              .         ;  \n";
    o << "                 .              .              ;%     ;;   \n";
    o << "                   ,           ,                :;%  %;   \n";
    o << "                    :         ;                   :;%;'     .,   \n";
    o << "           ,.        %;     %;            ;        %;'    ,;\n";
    o << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n";
    o << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n";
    o << "               ;%;      %;        ;%;        % ;%;  ,%;'\n";
    o << "                `%;.     ;%;     %;'         `;%%;.%;'\n";
    o << "                 `:;%.    ;%%. %@;        %; ;@%;%'\n";
    o << "                    `:%;.  :;bd%;          %;@%;'\n";
    o << "                      `@%:.  :;%.         ;@@%;'   \n";
    o << "                        `@%.  `;@%.      ;@@%;         \n";
    o << "                          `@%%. `@%%    ;@@%;        \n";
    o << "                            ;@%. :@%%  %@@%;       \n";
    o << "                              %@bd%%%bd%%:;     \n";
    o << "                                #@%%%%%:;;\n";
    o << "                                %@@%%%::;\n";
    o << "                                %@@@%(o);  . '         \n";
    o << "                                %@@@o%;:(.,'         \n";
    o << "                            `.. %@@@o%::;         \n";
    o << "                               `)@@@o%::;         \n";
    o << "                                %@@(o)::;        \n";
    o << "                               .%@@@@%::;         \n";
    o << "                               ;%@@@@%::;.          \n";
    o << "                              ;%@@@@%%:;;;. \n";
    o << "                          ...;%@@@@@%%:;;;;,..  \n";

    o.close();
}