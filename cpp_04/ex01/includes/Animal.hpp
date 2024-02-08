#ifndef Animal_HPP
#define Animal_HPP

#include "iostream"
#include "Dog.hpp"
#include "Cat.hpp"

class	Animal {

	public :

		Animal();
		~Animal();
		Animal(const Animal &rhs);
		Animal&	operator=(const Animal &rhs);

		void		makeSound();
		std::string	getType();

	protected :

		std::string type;
};

#endif
