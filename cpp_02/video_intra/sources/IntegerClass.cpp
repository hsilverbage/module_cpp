#include "IntegerClass.hpp"
#include <iostream>

Integer::Integer(int const nb) : _nb(nb)
{
	std::cout << "Construtor called with value " << nb << std::endl;
}

Integer::~Integer()
{
	std::cout <<"Destructor called with value " << this->_nb << std::endl;
}

int	Integer::getValue(void) const
{
	return (this->_nb);
}

Integer &	Integer::operator=(Integer const & rhs)
{
	std::cout << "Assigment operator called from " << this->_nb;
	std::cout << " to " << rhs.getValue() << std::endl;

	this->_nb = rhs.getValue();
	
	return (*this);
}

Integer		Integer::operator+(Integer const & rhs) const
{
	std::cout << "Assigment operator called with " << this->_nb;
	std::cout << " and " << rhs.getValue() << std::endl;

	return (Integer(this->_nb + rhs.getValue()));
}

std::ostream &	operator<<(std::ostream & o, Integer const & rhs)
{
	o << rhs.getValue();
	return (o);
}
