#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

	public :

		Dog();
		~Dog();
		Dog(const Dog &rhs);
		Dog&	operator=(const Dog &rhs);

		virtual void	makeSound() const;

	private :

		std::string	_name;
		Brain*		_Brain;
};

#endif
