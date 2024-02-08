#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "iostream"

class	Animal {

	public :

		Animal();
		virtual ~Animal();
		Animal(const Animal &rhs);
		Animal&	operator=(const Animal &rhs);

		void		makeSound() const;
		std::string	getType() const;

	protected :

		std::string type;
};

#endif
