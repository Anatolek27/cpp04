#include "Cat.hpp"

Cat::Cat() : brain(new Brain()) {
    std::cout << "Cat created" << std::endl;
    _type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other) {
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain(*other.brain);
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destroyed" << std::endl;
    delete brain;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}