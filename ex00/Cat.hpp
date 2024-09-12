#ifndef CAT_HPP
# define CAT_HPP

#pragma once

#include "Animal.hpp"

class Cat : virtual public Animal {
	public:
		Cat();
		Cat(Cat &other);
		Cat &operator=(Cat &other);
		~Cat();
		void makeSound();
};

#endif