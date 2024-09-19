#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int numberOfAnimals = 50;
    /*Animal *animal = new Animal();
    delete animal;*/
    Animal* animals[numberOfAnimals];

    for (int i = 0; i < numberOfAnimals / 2; ++i) {
        animals[i] = new Dog();
    }
    for (int i = numberOfAnimals / 2; i < numberOfAnimals; ++i) {
        animals[i] = new Cat();
    }

    for (int i = 0; i < numberOfAnimals; ++i) {
        delete animals[i];
    }

    return 0;
}