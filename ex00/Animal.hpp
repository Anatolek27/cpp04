#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#pragma once

#include <string>
#include <cstdio>
#include <iostream>

class Animal {
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal &other);
		~Animal(void);
		Animal &operator=(Animal &other);
		void makeSound(void);
		std::string getType(void);
};

#endif