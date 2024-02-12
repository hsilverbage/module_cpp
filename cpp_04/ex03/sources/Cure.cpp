#include "Cure.hpp"

Cure::Cure() : _type("cure") , AMateria("Cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure default destructor called" << std::endl;
}

Cure::Cure(const Cure &rhs) : AMateria("Cure")
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = rhs;
}

Cure&	Cure::operator=(const Cure &rhs)
{
	std::cout << "Cure copy assigment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds * " << std::endl;
}
