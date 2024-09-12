#ifndef DOG_HPP
# define DOG_HPP

#pragma once

#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(Dog &other);
		Dog &operator=(Dog &other);
		~Dog();
		void makeSound();
} ;

#endif