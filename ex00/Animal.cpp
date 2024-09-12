#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(std::string other) {
	type = other;
	std::cout << "Type Animal constructor called" << std::endl;
}

Animal::Animal(Animal &other) {
	type = other.type;
	std::cout << "Copy Animal constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal &other) {
	type = other.type;
	std::cout << "Animal operator called" << std::endl;
	return (*this);
}

void Animal::makeSound() {
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() {
	return (this->type);
}