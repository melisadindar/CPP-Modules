#include "Zombie.hpp"

int main(){
    Zombie *zombies = zombieHorde(3, " beste ");
    delete [] zombies;
}