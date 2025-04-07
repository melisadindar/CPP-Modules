#pragma once

#include <iostream>

class WrongAAnimal
{
    protected:
        std::string type;
    public:
        WrongAAnimal();
        virtual ~WrongAAnimal();//burda virtual tanımlamazsak başta oluşan wrong cat yok olmuyor.
        WrongAAnimal(std::string type);
        WrongAAnimal(const WrongAAnimal& copy);
        WrongAAnimal& operator=(const WrongAAnimal& copy);
        void    makeSound()const;//virtual tanımladığımız için cat wrong AAnimal çıktısı veriyor.
        void    setType(std::string newType);
        std::string getType(void)const;

};