#include "Dog.hpp"

Dog::Dog() : brain(new Brain()) {
    std::cout << "Dog created" << std::endl;
    _type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other) {
    std::cout << "Dog copy constructor called" << std::endl;
    brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destroyed" << std::endl;
    delete brain;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}