#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(Cat &other){
	this->type = other.type;
	std::cout << "Copy Cat constructor called" << std::endl;
}

Cat &Cat::operator=(Cat &other){
	this->type = other.type;
	std::cout << "Cat operator called" << std::endl;
	return *this;
}

Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(){
	std::cout << "Cat sound" << std::endl;
}