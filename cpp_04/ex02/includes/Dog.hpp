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
		void			setIdea(size_t index, std::string idea);
		std::string		getIdea(size_t index) const;
		void			showAllIdeas(void) const;

	private :

		Brain*		_Brain;
		std::string	_name;
};

#endif
