#include "Ice.hpp"

Ice::Ice() : _type("ice") , AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice default destrcutor called" << std::endl;
}

Ice::Ice(const Ice &rhs) : AMateria("ice")
{
	std::cout << "Ice default copy constructor called" << std::endl;
	*this = rhs;
}

Ice&	Ice::operator=(const Ice &rhs)
{
	std::cout << "Ice copy assigment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
