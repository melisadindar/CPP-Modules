#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

/* int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	delete j;//should not create a leak
	delete i;
	//...
	return 0;
} */

int main()
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    
    delete j;
    delete i;

    Dog x;
    Cat y;
    std::cout << x.getBrain()->ideas[0] << std::endl;
    std::cout << y.getBrain()->ideas[0] << std::endl;

    Dog b;
    Dog a = b;

  
    std::cout << a.getBrain()->ideas[0] << std::endl;

    return 0;
}

/* int main(){//benim main silme sakın
    const int arraySize = 4;
    const AAnimal *AAnimal[arraySize];

    for (int i = 0; i < arraySize / 2; ++i){
        AAnimal[i] = new Dog();
    }

    for (int i = arraySize / 2; i < arraySize; ++i){
        AAnimal[i] = new Cat();
    }

    for (int i = 0; i < arraySize; ++i){
        delete AAnimal[i];
    }

    
} */

/*  int main()
 {
     const AAnimal* j = new Dog();
     const AAnimal* i = new Cat();
     delete j;//should not create a leak
     delete i;

     return 0;
 } */

/* int main()
{

    {
        Dog basic;

        {
            Dog tmp(basic);
        }
        std::cout << basic.getBrain()->ideas[0] << std::endl;
    }
    std::cout << std::endl;
    {
        const AAnimal* j = new Dog(); //The address of the dynamically allocated Dog object is assigned to the pointer j, which is of type const AAnimal* due to polymorphism.
        const AAnimal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        j->makeSound();
        i->makeSound();
        
        delete j;
        delete i;
        
        std::cout << std::endl;

        const int numAAnimals = 4;
        AAnimal* AAnimals[numAAnimals];//is declared to hold pointers to both 'Dog' and 'Cat' objects

        for (int i = 0; i < numAAnimals / 2; ++i) {
            AAnimals[i] = new Dog(); // 'Brain' objects are created for each 'Dog' and 'Cat'
        }
        for (int i = numAAnimals / 2; i < numAAnimals; ++i) {
            AAnimals[i] = new Cat();
        }

        //Polymorphism is demonstrated here. Since makeSound() is a virtual function, 
        //the appropriate makeSound() function for each object type (Dog or Cat) is called.
        for (int i = 0; i < numAAnimals; ++i) {
            AAnimals[i]->makeSound();
        }

        for (int i = 0; i < numAAnimals; ++i) {
            delete AAnimals[i];
        }
    }
    return 0;
} */

