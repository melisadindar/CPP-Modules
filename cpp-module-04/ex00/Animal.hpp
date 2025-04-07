#ifndef Animal_HPP
# define Animal_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        virtual ~Animal();//bir sınıfta virtual bir metod varsa yıkıcının da virtual olması gerekir.
        Animal(const Animal& copy);
        Animal& operator=(const Animal& copy);
        void    setType(std::string newType);
        std::string getType(void)const;
        virtual void makeSound()const;//virtual yazmamızın sebebi türetilmiş sınıflarda metodu değiştirebilmemize olanak sağlar.
// Eğer sanal bir yıkıcı yoksa, türetilmiş sınıfın yıkıcısı çağrıldığında, temel sınıfın yıkıcısı çağrılmayacaktır. 
//Bu durumda, temel sınıfın kaynakları (örneğin, dinamik olarak tahsis edilmiş bellek veya açık dosyalar) serbest 
//bırakılmayabilir, potansiyel bellek sızıntılarına veya kaynak sızıntılarına neden olabilir.

//override c++11 ile gelmiştir. o yüzden virtual olarak yazdığımızda zaten üzerine yazıcağını anlıyor.
};

# endif