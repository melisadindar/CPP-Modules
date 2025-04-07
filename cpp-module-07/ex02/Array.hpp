#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array{
    private:
        T* array;
        unsigned int arrayLength;
    public:
        Array() : array(NULL), arrayLength(0){};
        
        Array(unsigned int n) : arrayLength(n){
            this->array = new T[arrayLength];
            for (unsigned int i = 0; i < arrayLength; i++){
                this->array[i] = T();
            }
        };

        Array(const Array &copy){
            this->array = new T[copy.size()];
            this->arrayLength = copy.size();
            for (unsigned int i = 0; i < copy.size(); i++){
                array[i] = copy.array[i];
            }
        };
        
        Array operator=(const Array &copy){
           if (this != &copy){
            if (array)
                delete[] array;
            array = new T[copy.arrayLength];
            arrayLength = copy.arrayLength;
            for (unsigned int i = 0; i < copy.size(); i++)
                array[i] = copy.array[i];
           }
           return *this;
        };

        T& operator[](unsigned int i){
            if (i >= arrayLength)
                throw std::out_of_range("index out of the range");
            return (this->array[i]);
        }
        
        unsigned int size()const{
            return (this->arrayLength);
        }
        
        ~Array(){
            delete [] this->array;
        };

};

#endif