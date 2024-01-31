#include "Fixed.hpp"

Fixed::Fixed() : _nb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called " << std::endl;

	if (this != &rhs)
		this->_nb = rhs.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed &rhs)
{
	std::cout << "Copy contructor called" << std::endl;
	this->setRawBits(rhs.getRawBits());
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nb);
}

void	Fixed::setRawBits(int const raw)
{
	this->_nb = raw;
}
