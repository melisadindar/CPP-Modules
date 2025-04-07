#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* brain;
    public:
        Cat();
        virtual ~Cat();
        void makeSound()const;
        Cat (const Cat& copy);
        Cat& operator=(const Cat& copy);
        Brain *getBrain()const;

};
#endif