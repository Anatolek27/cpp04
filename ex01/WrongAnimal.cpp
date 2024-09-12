#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = "UNKNOWN";
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	this->type = other.type;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() {
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() {
	return (this->type);
}
