#ifndef AAnimal_HPP
# define AAnimal_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(std::string type);
        virtual ~AAnimal();//bir sınıfta virtual bir metod varsa yıkıcının da virtual olması gerekir.
        AAnimal(const AAnimal& copy);
        AAnimal& operator=(const AAnimal& copy);
        void    setType(std::string newType);
        std::string getType(void)const;
        virtual void makeSound()const = 0;

//virtual yazmamızın sebebi türetilmiş sınıflarda metodu değiştirebilmemize olanak sağlar.
// Eğer sanal bir yıkıcı yoksa, türetilmiş sınıfın yıkıcısı çağrıldığında, temel sınıfın yıkıcısı çağrılmayacaktır. 
//Bu durumda, temel sınıfın kaynakları (örneğin, dinamik olarak tahsis edilmiş bellek veya açık dosyalar) serbest 
//bırakılmayabilir, potansiyel bellek sızıntılarına veya kaynak sızıntılarına neden olabilir.

//override c++11 ile gelmiştir. o yüzden virtual olarak yazdığımızda zaten üzerine yazıcağını anlıyor.
};

# endif