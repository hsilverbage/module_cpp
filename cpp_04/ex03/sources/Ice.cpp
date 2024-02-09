#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice default destrcutor called" << std::endl;
}

Ice::Ice(const Ice &rhs)
{
	std::cout << "Ice default copy constructor called" << std::endl;
	*this = rhs;
}

Ice&	Ice::operator=(const Ice &rhs)
{
	std::cout << "Ice copy assigment operator called" << std::endl;
	if (this != &rhs)
	{


	}
	return (*this);
}
