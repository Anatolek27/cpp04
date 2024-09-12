#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() {
    // Test avec Animal, Dog, et Cat (avec polymorphisme et méthodes virtuelles)
    std::cout << "=== Testing Animal, Dog, and Cat ===" << std::endl;
    
    Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound(); // Cat sound
    j->makeSound(); // Dog sound
    meta->makeSound(); // Generic Animal sound
    
    delete meta;
    delete j;
    delete i;
    
    std::cout << std::endl;
    
    // Test avec WrongAnimal et WrongCat (sans polymorphisme)
    std::cout << "=== Testing WrongAnimal and WrongCat ===" << std::endl;
    
    WrongAnimal* wrongMeta = new WrongAnimal();
    WrongAnimal* wrongCat = new WrongCat();
    
    std::cout << wrongCat->getType() << " " << std::endl;
    
    wrongMeta->makeSound(); // WrongAnimal sound
    wrongCat->makeSound();  // WrongAnimal sound (not overridden because makeSound is not virtual)
    
    delete wrongMeta;
    delete wrongCat;
    
    return 0;
}
