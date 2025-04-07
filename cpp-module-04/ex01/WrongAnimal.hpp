#pragma once

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        virtual ~WrongAnimal();//burda virtual tanımlamazsak başta oluşan wrong cat yok olmuyor.
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal& copy);
        WrongAnimal& operator=(const WrongAnimal& copy);
        void    makeSound()const;//virtual tanımladığımız için cat wrong Animal çıktısı veriyor.
        void    setType(std::string newType);
        std::string getType(void)const;

};