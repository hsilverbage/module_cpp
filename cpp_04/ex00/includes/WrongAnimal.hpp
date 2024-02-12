#ifndef	WRONGANIMAL_HPP
#define	WRONGANIMAL_HPP

#include "iostream"

class	WrongAnimal {

	public :

		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal &rhs);
		WrongAnimal&	operator=(const WrongAnimal &rhs);

		void		makeSound() const;
		std::string	getType() const;

	protected :

		std::string type;
};

#endif
