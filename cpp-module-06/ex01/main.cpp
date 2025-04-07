#include "Serializer.hpp"

int main()
{
    Data *d = new Data;
    d->a = 42;
    std::cout << d << std::endl;

    uintptr_t toCon = Serializer::serialize(d);
    std::cout << toCon << std::endl;


    Data *tmp = NULL;
    std::cout << tmp << std::endl;
    tmp = Serializer::deserialize(toCon);
    std::cout << tmp << std::endl;
    std::cout << tmp->a << std::endl;

    
}
