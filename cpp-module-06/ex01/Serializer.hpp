#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

typedef struct{
    float a;
}Data;

class Serializer {
    public:
        Serializer();
        ~Serializer();
        Serializer(const Serializer &copy);
        Serializer &operator=(const Serializer &copy);

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};


#endif