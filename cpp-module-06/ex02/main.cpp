#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

int getRandomNumber(int n){
    return rand() % n;
}

Base    *generate(void){
    srand(static_cast<unsigned int>(time(0)));

    int n = 3;
    int randomNo = getRandomNumber(n);

    switch(randomNo){
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
    }
    return NULL;
}

void identify(Base *p){
    if (dynamic_cast<A*>(p)){
        std::cout << "The object is of type A(*)" << std::endl;
    }
    else if (dynamic_cast<B*>(p)){
        std::cout << "The object is of type B(*)" << std::endl;
    }
    else if (dynamic_cast<C*>(p)){
        std::cout << "The object is of type C(*)" << std::endl;
    }
}

void identify(Base& p) {
    try {
        A a = dynamic_cast<A&>(p);
        std::cout << "The object is of type A(&)" << std::endl;
    } 
    catch (const std::exception& e) {
        try {
            B b = dynamic_cast<B&>(p);
            std::cout << "The object is of type B(&)" << std::endl;
        } catch (const std::exception& e) {
            try {
                C c = dynamic_cast<C&>(p);
                std::cout << "The object is of type C(&)" << std::endl;
            } catch (const std::exception& e) {
            }
        }
    }
}


int main() {
	Base* ptr = generate();
	
	identify(ptr);
	identify(*ptr);
	
	delete ptr;

	return 0;
}


/* int main() {
    A a;
    B b;
    C c;

    Base *basePtrA = &a;
    Base *basePtrB = &b;
    Base *basePtrC = &c;

    identify(basePtrA); // The object is of type A
    identify(basePtrB); // The object is of type B
    identify(basePtrC); // The object is of type C

    return 0;
} */
