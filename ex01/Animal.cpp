#include "Animal.hpp"

Animal::Animal() : type("Unknown") {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type) {
    std::cout << "Animal parameterized constructor called" << std::endl;
}

Animal::Animal(const Animal& other) {
    *this = other;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        this->type = other.type;
    }
    std::cout << "Animal assignment operator called" << std::endl;
    return *this;
}

void Animal::makeSound() const {
    std::cout << "Animal sound!" << std::endl;
}

std::string Animal::getType() const {
    return this->type;
}
