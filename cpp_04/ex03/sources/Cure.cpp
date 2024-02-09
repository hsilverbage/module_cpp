#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure default destructor called" << std::endl;
}

Cure::Cure(const Cure &rhs)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = rhs;
}

Cure&	Cure::operator=(const Cure &rhs)
{
	std::cout << "Cure copy assigment operator called" << std::endl;
	if (this != &rhs)
	{

	}
	return (*this);
}
