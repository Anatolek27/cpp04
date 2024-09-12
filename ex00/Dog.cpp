#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(Dog &other){
	this->type = other.type;
	std::cout << "Copy Dog constructor called" << std::endl;
}

Dog &Dog::operator=(Dog &other){
	this->type = other.type;
	std::cout << "Dog operator called" << std::endl;
	return *this;
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(){
	std::cout << "Dog sound" << std::endl;
}